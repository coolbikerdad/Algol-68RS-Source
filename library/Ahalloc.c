/* $Id: Ahalloc.c,v 1.3 2002-02-23 17:50:44 sian Exp $ */


/* 
    ************************************************************************
    This Program is the property of the Secretary of State for Defence
    (United Kingdom) acting through the Defence Research Agency (DRA). Use,
    reproduction, production of amended versions and/or transfer of this
    Program is permitted provided that:

  (a)  this legend be preserved on any such reproduction and amended version,
  (b)  any amended version of this Program be clearly marked to show the
       nature of the amendment and of the name of the amending organisation,
  and
  (c)  any recipient  of such reproduction or amended version accept the
       conditions set out in this legend.

                         Crown Copyright, (c)   1994

                             All rights reserved.

    The Secretary of State for Defence (United Kingdom) acting through his
    Defence Research Agency (DRA) gives no warranty that any element of the
    Software is suitable for any purpose and he shall not be liable for any
    loss or damage including loss or damage resulting in injury or death
    howsoever caused which results from the use of the Software, or any
    developments adaptions modifications translations and enhancements
    thereof.

    The original authors may be contacted via email on ella@dra.hmg.gb or by
    writing to ELLA Office, DRA, St Andrews Road, Malvern, Worcs WR14 3PS, UK.
    ************************************************************************

   ------------------------- Change History ---------------------------
15:08:94  Module renamed from a68_gc_alloc.c to Ahalloc.c for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes.  Add
                                  Ahswitch.h and Ahcheck.h to the includes. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
**	Heap allocation
**
**
**	These allocation functions need to be as efficient as possible.
**	They underly every HEAP allocation and generation
**	of procedure environment in a CTRANS'ed program.
**	Hence code has been duplicated, and state flags employed, to avoid extra
**	function calls.
**
**      Library build-time options:
**        NO_GC_MARK   don't recognise vector/array descriptors
**                       (ie treat vectors/arrays as single objects)
*/

static char rcs_id[] = "$Id: Ahalloc.c,v 1.3 2002-02-23 17:50:44 sian Exp $";

/*
**     Imports
*/

#include <stdio.h>
#include <algol68/Asupport.h>

#include <algol68/linux/Ahswitch.h>
#include "Ahbasic.h"
#include "Ahbitmap.h"
#include "Ahseg.h"
#include "Ahdebug.h"
#include "Ahbitmap.h"
#include "Ahclr.h"
#include "Ahptr.h"
#include "Ahcheck.h"
#include "Ahalloc.h"
#include "Ahcollec.h"
#include "Ahpolicy.h"
#include "Ahparam.h"
#include "Ahstats.h"


/*
**    Global data
*/

SEGCTLPTR Agc_segctl_list = (SEGCTLPTR) 0;	/* root of segment list */

/*
**    Forward declarations
*/

static BOOL Agc_grab_seg(const A68_INT elsize, const A68_INT min_elements, const int segs_for_elsize);
static void Agc_must_grab_seg(const A68_INT elsize, const A68_INT min_elements, const int segs_for_elsize);


PTR Agc_nalloc(const A68_INT size, A68_INT elements)
#ifdef	NO_GCMARK
{
  extern PTR      Agc_1alloc(const A68_INT size);
  A68_INT	        bytes = size * elements;

  return Agc_1alloc( bytes < 1 ? 1 : bytes );
}
#else
{
  ELPTR	elp;
  CODEDPTR	*elpp;
  SEGCTLPTR	segctlp;
  SEGCTLPTR	*segctlpp;
  ELPTR	left, elend;
  int		segs_for_elsize;
  BOOL	post_collection = FALSE;

  ASSERT_DECL( int loop_limit = 2 )

  REPORT2(7,"Agc_nalloc(size=%d,elements=%d)\n",size,elements);

#ifdef A_DEBUG
  if( size > 512 )
  {
    Agc_allocstat[0].alloc_n++;
    Agc_allocstat[0].elements += elements;
  }
  else
  {
    Agc_allocstat[size].alloc_n++;
    Agc_allocstat[size].elements += elements;
  }
#endif

  REP_DO(Agc_allocations++);

  if ( Agc_in_gc )
  {
    Agc_reenter();
  }

  Agc_in_gc = TRUE;

  RESIZENALLOCATION( size, elements );

  if ( elements < 1 )
  {
    elements = 1;		/* Always allocate at least one element,
				 ** so (HEAP[0]INT a,b; a IS b) is FALSE */
  }

#ifdef QUOTA_THRESHOLD_EXCEEDED
  if ( QUOTA_THRESHOLD_EXCEEDED( size, elements ) )
  {
    /* A global memory quota threshold exceeded */
    Agc_collector();
    post_collection = TRUE;
  }
#endif

  for(;;)
  {
    ASSERT_DECL( int seg_loop_limit = Agc_s_grabbed )

    segs_for_elsize = 0;

    for ( segctlpp = &Agc_segctl_list; (segctlp = *segctlpp) != NIL; segctlpp = &((segctlp)->next ))
    {
      ASSERT((--seg_loop_limit)>=0,Agc_nalloc,segment list too long);

      REP_DO(Agc_s_examined++);

      if ( size == SEGELSIZE(segctlp) )
      {
	/* Segment for appropriate size element */

	ASSERT_DECL( int el_loop_limit = SEGELS(segctlp) )

	  segs_for_elsize++;

	for ( elpp = &segctlp->free; (elp = DECODEPTR(*elpp)) != NIL; elpp = &elp->next )
	{
	  ASSERT((--el_loop_limit)>=0,Agc_nalloc,element list too long);
	  REP_DO(Agc_e_examined++);
	  if ( elements <= elp->elements ) goto found_space;
	}
      }
    }

    if ( post_collection )
    {
      Agc_must_grab_seg( size, elements, segs_for_elsize );
    }
    else if ( (segs_for_elsize != 0 && (*current_policy.query_collect)(size,elements)) || !Agc_grab_seg( size, elements, segs_for_elsize ) )
    {
      /* No point collecting garbage if no segment for size, except when there is no free memory left */
#ifdef	CLR_ALLOC_SFRAME
      /* Our stack frame will be traced by collector, try to clear as many heap ptrs as possible */
      segctlpp = NIL;
      segctlp = NIL;
      elpp = NIL;
      elp = NIL;
#endif
      Agc_collector();
      post_collection = TRUE;
    }
    ASSERT((--loop_limit)>=0,Agc_nalloc,looping bacause Agc_grab_seg has failed);
  }


 found_space:

  /*
   **  Tasks to allocate:
   **
   **  1.	Move segment to front of segment list, to effect a 'cacheing'.
   **	We believe that programs go through phases of allocating different objects.
   **	Most allocations are of the same object as the previous one, or at least recent allocations.
   **	By moving segment to front of list, we will normally only loop once or twice
   **	looking down list.
   **
   ** 2.	Remove allocation from free list element.
   **
   ** 3.	Return anything left to free list.
   **
   ** 4.	Update statistics.
   **
   ** 5.	Clear element as necessary.
   */


  REPORT3(7,"Agc_nalloc: found space in segctl 0x%p, element 0x%p, elements free %d\n",
	  (void *)segctlp,(void *)elp,elp->elements);

  *segctlpp = segctlp->next;
  segctlp->next = Agc_segctl_list;
  Agc_segctl_list = segctlp;

  ELPTRPLUS(left, elp, size, elements);
  elend = ELEND(elp,segctlp);

  REPORT5(8,"Agc_nalloc: ELPTRPLUS( ,0x%p,%d,%d) => 0x%p, elend=0x%p\n",(void *)elp,size,elements,(void *)left,(void *)elend);
  ASSERT(left>elp,Agc_nalloc,left<=elp);
  ASSERT((PTR)elend<=(PTR)SEGEND(segctlp),Agc_nalloc,elend>segend);
  ASSERT(elend>elp,Agc_nalloc,elend<=elp);


  if ( ELPTRENOUGH(left,elend) )
  {
    /* there is some worthwile space left, at least enough to hold the free list control info */

    SIZE els_left = ELPTRELSLEFT(left,elend,segctlp);

    ASSERT( left > elp && left < (ELPTR)SEGEND(segctlp),Agc_nalloc,free list remainder problem);

    REPORT2(8,"Agc_nalloc: pre assign left->next=0x%lx, elp->next=0x%lx\n",left->next,elp->next);

    left->next = elp->next;
    /* MUST access elp->next above before assigning to left-> in case of overlap */

    REPORT2(8,"Agc_nalloc: post assign left->next=0x%lx, elp->next=0x%lx\n",left->next,elp->next);

    left->elements = els_left;
    *elpp = ENCODEPTR(left);

    REPORT4(8,"Agc_nalloc: elpp=0x%p, *elpp=0x%lx, left=0x%p, left->next=0x%lx\n",
	    (void *)elpp,*elpp,(void *)left,left->next);

    ASSERT(DECODEPTR(*elpp) == left,Agc_nalloc,encoding problem);
  }
  else
  {
    /* nothing worthwhile left, just remove from free list */

    left = elend;		/* correction to 'left' for statistics below */

    *elpp = elp->next;

    REPORT2(8,"Agc_nalloc: nothing to return, elpp=0x%p, *elpp=0x%lx\n",(void *)elpp,*elpp);
  }

  Agc_b_allocated += (SIZE)((char *)(PTR)left - (char *)(PTR)elp); /* update by amount used from free list
							    ** not amount needed */


  CLR_AT_ALLOCATE(elp,size,elements);

  Agc_in_gc = FALSE;


  ASSERT( (char *)(PTR)left - (char *)(PTR)elp > 0,Agc_nalloc,no space allocated);
  ASSERT( (char *)(PTR)left - (char *)(PTR)elp < size*elements+sizeof(EL)+WORDSIZE,Agc_nalloc,too much space allocated);
  ASSERT( IS_CLR((PTR)elp, size, size * elements),Agc_nalloc,allocated space not cleared);
#ifdef A_GC_WORD_ALIGNED
  ASSERT( WORDALIGNED(elp),Agc_nalloc,elp not word aligned);
#endif

  REPORT2(7,"Agc_nalloc: return(element=0x%p) bytes_allocated=%d\n",(void *)elp,Agc_b_allocated);

  return( (PTR) elp );
}
#endif

PTR Agc_1alloc(A68_INT size)
{
  /* Equivalent, but faster to Agc_nalloc( size, 1 ) */

  ELPTR	elp;
  SEGCTLPTR	segctlp;
  SEGCTLPTR	*segctlpp;
  ELPTR	left, elend;
  int		segs_for_elsize;
  BOOL	post_collection = FALSE;

  ASSERT_DECL( int loop_limit = 2 )

  REPORT1(7,"Agc_1alloc(size=%d)\n",size);

#ifdef A_DEBUG
  if( size > 512 )
  {
    Agc_allocstat[0].alloc_1++;
  }
  else
  {
    Agc_allocstat[size].alloc_1++;
  }
#endif

  REP_DO(Agc_allocations++);

  if ( Agc_in_gc )
  {
    Agc_reenter();
  }

  Agc_in_gc = TRUE;

  size = RESIZE1ALLOCATION( size );


#ifdef QUOTA_THRESHOLD_EXCEEDED
  if ( QUOTA_THRESHOLD_EXCEEDED( size, elements ) )
  {
    /* A global memory quota threshold exceeded */
    Agc_collector();
    post_collection = TRUE;
  }
#endif

  for(;;)
  {
    ASSERT_DECL( int seg_loop_limit = Agc_s_grabbed )

      segs_for_elsize = 0;

    for ( segctlpp = &Agc_segctl_list; (segctlp = *segctlpp) != NIL; segctlpp = &((segctlp)->next ))
    {
      ASSERT((--seg_loop_limit)>=0,Agc_1alloc,segment list too long);

      REP_DO(Agc_s_examined++);

      if ( size == SEGELSIZE(segctlp) )
      {
	/* Segment for appropriate size element */

	segs_for_elsize++;

	if ( segctlp->free != CODEDNIL )
	{
	  REP_DO(Agc_e_examined++);
	  goto found_space;
	}
      }
    }

    if ( post_collection )
    {
      Agc_must_grab_seg( size, 1, segs_for_elsize );
    }
    else if ( (segs_for_elsize != 0 && (*current_policy.query_collect)(size,1)) || !Agc_grab_seg( size, 1, segs_for_elsize ) )
    {
      /* No point collecting garbage if no segment for size, except when there is no free memory left */
#ifdef	CLR_ALLOC_SFRAME
      /* Our stack frame will be traced by collector, try to clear as many heap ptrs as possible */
      segctlpp = NIL;
      segctlp = NIL;
      elp = NIL;
#endif
      Agc_collector();
      post_collection = TRUE;
    }
    ASSERT((--loop_limit)>=0,Agc_1alloc,looping bacause Agc_grab_seg has failed);
  }


 found_space:

  elp = DECODEPTR(segctlp->free);

  /*
   **  Tasks to allocate:
   **
   **  1.	Move segment to front of segment list, to effect a 'cacheing'.
   **	We believe that programs go through phases of allocating different objects.
   **	Most allocations are of the same object as the previous one, or at least recent allocations.
   **	By moving segment to front of list, we will normally only loop once or twice
   **	looking down list.
   **
   ** 2.	Remove allocation from free list element.
   **
   ** 3.	Return anything left to free list.
   **
   ** 4.	Update statistics.
   **
   ** 5.	Clear element as necessary.
   */


  REPORT3(7,"Agc_1alloc: found space in segctl 0x%p, element 0x%p, elements free %d\n",
	  (void *)segctlp,(void *)elp,elp->elements);

  /* move segment to front of segment list */
  *segctlpp = segctlp->next;
  segctlp->next = Agc_segctl_list;
  Agc_segctl_list = segctlp;

  ELPTRPLUS(left, elp, size, 1);
  elend = ELEND(elp,segctlp);

  REPORT5(8,"Agc_1alloc: ELPTRPLUS( ,0x%p,%d,%d) => 0x%p, elend=0x%p\n",(void *)elp,size,1,(void *)left,(void *)elend);
  ASSERT(left>elp,Agc_1alloc,left<=elp);
  ASSERT((PTR)elend<=(PTR)SEGEND(segctlp),Agc_1alloc,elend>segend);
  ASSERT(elend>elp,Agc_1alloc,elend<=elp);


  if ( ELPTRENOUGH(left,elend) )
  {
    /* there is some worthwile space left, at least enough to hold the free list control info */

    SIZE els_left = ELPTRELSLEFT(left,elend,segctlp);

    ASSERT( left > elp && left < (ELPTR)SEGEND(segctlp),Agc_1alloc,free list remainder problem);

    REPORT2(8,"Agc_1alloc: pre assign left->next=0x%lx, elp->next=0x%lx\n",left->next,elp->next);

    left->next = elp->next;
    /* MUST access elp->next above before assigning to left-> in case of overlap */

    REPORT2(8,"Agc_1alloc: post assign left->next=0x%lx, elp->next=0x%lx\n",left->next,elp->next);

    left->elements = els_left;
    segctlp->free = ENCODEPTR(left);

    REPORT3(8,"Agc_1alloc: segctlp->free=0x%lx, left=0x%p, left->next=0x%lx\n",
	    segctlp->free,(void *)left,left->next);

    ASSERT(DECODEPTR(segctlp->free) == left,Agc_1alloc,encoding problem);
  }
  else
  {
    /* nothing worthwhile left, just remove from free list */

    left = elend;		/* correction to 'left' for statistics below */

    segctlp->free = elp->next;

    REPORT1(8,"Agc_1alloc: nothing to return, segctlp->free=0x%lx\n",segctlp->free);
  }

  Agc_b_allocated += (SIZE)((char *)(PTR)left - (char *)(PTR)elp); /* update by amount used from free list
							    ** not amount needed */


  CLR_AT_ALLOCATE(elp,size,1);

  Agc_in_gc = FALSE;


  ASSERT( (char *)(PTR)left - (char *)(PTR)elp > 0,Agc_1alloc,no space allocated);
  ASSERT( (char *)(PTR)left - (char *)(PTR)elp < size*1+sizeof(EL)+WORDSIZE,Agc_1alloc,too much space allocated);
  ASSERT( IS_CLR((PTR)elp, size, size * 1),Agc_1alloc,allocated space not cleared);
#ifdef A_GC_WORD_ALIGNED
  ASSERT( WORDALIGNED(elp),Agc_1alloc,elp not word aligned);
#endif

  REPORT2(7,"Agc_1alloc: return(element=0x%p) bytes_allocated=%d\n",(void *)elp,Agc_b_allocated);

  return( (PTR) elp );
}

PTR Agc_alloc4(A68_INT elements)
/* Equivalent, but faster to Agc_nalloc( 4, elements ) */

#ifdef	NO_GCMARK
{
  extern PTR      Agc_1alloc(const A68_INT size);
  A68_INT	        bytes = 4 * elements;

  return Agc_1alloc( bytes < 1 ? 1 : bytes );
}
#else
{
  ELPTR	elp;
  CODEDPTR	*elpp;
  SEGCTLPTR	segctlp;
  SEGCTLPTR	*segctlpp;
  ELPTR	left, elend;
  int		segs_for_elsize;
  BOOL	post_collection = FALSE;

  ASSERT_DECL( int loop_limit = 2 )

  REPORT1(7,"Agc_alloc4(elements=%d)\n",elements);

#ifdef A_DEBUG
  Agc_allocstat[4].alloc_n++;
  Agc_allocstat[4].elements += elements;
#endif

  REP_DO(Agc_allocations++);

  if ( Agc_in_gc )
  {
    Agc_reenter();
  }

  Agc_in_gc = TRUE;

  RESIZENALLOCATION( 4, elements );

  if ( elements < 1 )
  {
    elements = 1;		/* Always allocate at least one element,
				 ** so (HEAP[0]INT a,b; a IS b) is FALSE */
  }

#ifdef QUOTA_THRESHOLD_EXCEEDED
  if ( QUOTA_THRESHOLD_EXCEEDED( size, elements ) )
  {
    /* A global memory quota threshold exceeded */
    Agc_collector();
    post_collection = TRUE;
  }
#endif

  for(;;)
  {
    ASSERT_DECL( int seg_loop_limit = Agc_s_grabbed )

      segs_for_elsize = 0;

    for ( segctlpp = &Agc_segctl_list; (segctlp = *segctlpp) != NIL; segctlpp = &((segctlp)->next ))
    {
      ASSERT((--seg_loop_limit)>=0,Agc_alloc4,segment list too long);

      REP_DO(Agc_s_examined++);

      if ( 4 == SEGELSIZE(segctlp) )
      {
	/* Segment for appropriate size element */

	ASSERT_DECL( int el_loop_limit = SEGELS(segctlp) )

	  segs_for_elsize++;

	for ( elpp = &segctlp->free; (elp = DECODEPTR(*elpp)) != NIL; elpp = &elp->next )
	{
	  ASSERT((--el_loop_limit)>=0,Agc_alloc4,element list too long);
	  REP_DO(Agc_e_examined++);
	  if ( elements <= elp->elements ) goto found_space;
	}
      }
    }

    if ( post_collection )
    {
      Agc_must_grab_seg( 4, elements, segs_for_elsize );
    }
    else if ( (segs_for_elsize != 0 && (*current_policy.query_collect)(4,elements)) || !Agc_grab_seg( 4, elements, segs_for_elsize ) )
    {
      /* No point collecting garbage if no segment for size, except when there is no free memory left */
#ifdef	CLR_ALLOC_SFRAME
      /* Our stack frame will be traced by collector, try to clear as many heap ptrs as possible */
      segctlpp = NIL;
      segctlp = NIL;
      elpp = NIL;
      elp = NIL;
#endif
      Agc_collector();
      post_collection = TRUE;
    }
    ASSERT((--loop_limit)>=0,Agc_alloc4,looping bacause Agc_grab_seg has failed);
  }


 found_space:

  /*
   **  Tasks to allocate:
   **
   **  1.	Move segment to front of segment list, to effect a 'cacheing'.
   **	We believe that programs go through phases of allocating different objects.
   **	Most allocations are of the same object as the previous one, or at least recent allocations.
   **	By moving segment to front of list, we will normally only loop once or twice
   **	looking down list.
   **
   ** 2.	Remove allocation from free list element.
   **
   ** 3.	Return anything left to free list.
   **
   ** 4.	Update statistics.
   **
   ** 5.	Clear element as necessary.
   */


  REPORT3(7,"Agc_alloc4: found space in segctl 0x%p, element 0x%p, elements free %d\n",
	  (void *)segctlp,(void *)elp,elp->elements);

  *segctlpp = segctlp->next;
  segctlp->next = Agc_segctl_list;
  Agc_segctl_list = segctlp;

  ELPTRPLUS(left, elp, 4, elements);
  elend = ELEND(elp,segctlp);

  REPORT5(8,"Agc_alloc4: ELPTRPLUS( ,0x%p,%d,%d) => 0x%p, elend=0x%p\n",(void *)elp,4,elements,(void *)left,(void *)elend);
  ASSERT(left>elp,Agc_alloc4,left<=elp);
  ASSERT((PTR)elend<=(PTR)SEGEND(segctlp),Agc_alloc4,elend>segend);
  ASSERT(elend>elp,Agc_alloc4,elend<=elp);


  if ( ELPTRENOUGH(left,elend) )
  {
    /* there is some worthwile space left, at least enough to hold the free list control info */

    SIZE els_left = ELPTRELSLEFT(left,elend,segctlp);

    ASSERT( left > elp && left < (ELPTR)SEGEND(segctlp),Agc_alloc4,free list remainder problem);

    REPORT2(8,"Agc_alloc4: pre assign left->next=0x%lx, elp->next=0x%lx\n",left->next,elp->next);

    left->next = elp->next;
    /* MUST access elp->next above before assigning to left-> in case of overlap */

    REPORT2(8,"Agc_alloc4: post assign left->next=0x%lx, elp->next=0x%lx\n",left->next,elp->next);

    left->elements = els_left;
    *elpp = ENCODEPTR(left);

    REPORT4(8,"Agc_alloc4: elpp=0x%p, *elpp=0x%lx, left=0x%p, left->next=0x%lx\n",
	    (void *)elpp,*elpp,(void *)left,left->next);

    ASSERT(DECODEPTR(*elpp) == left,Agc_alloc4,encoding problem);
  }
  else
  {
    /* nothing worthwhile left, just remove from free list */

    left = elend;		/* correction to 'left' for statistics below */

    *elpp = elp->next;

    REPORT2(8,"Agc_alloc4: nothing to return, elpp=0x%p, *elpp=0x%lx\n",(void *)elpp,*elpp);
  }

  Agc_b_allocated += (SIZE)((char *)(PTR)left - (char *)(PTR)elp); /* update by amount used from free list
							    ** not amount needed */


  CLR_AT_ALLOCATE(elp,4,elements);

  Agc_in_gc = FALSE;


  ASSERT( (char *)(PTR)left - (char *)(PTR)elp > 0,Agc_alloc4,no space allocated);
  ASSERT( (char *)(PTR)left - (char *)(PTR)elp < 4*elements+sizeof(EL)+WORDSIZE,Agc_alloc4,too much space allocated);
  ASSERT( IS_CLR((PTR)elp, 4, 4 * elements),Agc_alloc4,allocated space not cleared);
#ifdef A_GC_WORD_ALIGNED
  ASSERT( WORDALIGNED(elp),Agc_alloc4,elp not word aligned);
#endif

  REPORT2(7,"Agc_alloc4: return(element=0x%p) bytes_allocated=%d\n",(void *)elp,Agc_b_allocated);

  return( (PTR) elp );
}
#endif



void Agc_reenter(void)
{
	GC_ERROR(HEAP allocator/collector cannot be re-entered);
}

static BOOL Agc_grab_seg(const A68_INT elsize, const A68_INT min_elements, const int segs_for_elsize)
/* returns BOOL indicating success in grabbing more memory */
{
	ELPTR	elp;
	SEGCTLPTR	segctlp;


	REPORT2(4,"Agc_grab_seg(elsize=%d,min_elements=%d)\n",elsize,min_elements);

	REPORT3(6,"\tallocations=%u, segs examined=%u, els examined=%u\n",
		Agc_allocations,Agc_s_examined,Agc_e_examined);

	ASSERT(elsize > 0 && elsize < 1*1024*1024 /* 1Mb */,Agc_grab_seg,elsize not sensible);
	ASSERT(min_elements > 0 && min_elements < 10*1024*1024 /* 10Million */
		,Agc_grab_seg,min_elements not sensible);

	if ( Agc_b_grabbed > Agc_hmax_size )
	{
		REPORT(1,"Agc_grab_seg: heap has overflowed software limit\n" );
		segctlp = NIL;
	}
	else
	{
		GRAB_SEG( segctlp, elsize, min_elements, segs_for_elsize );
								/* sets 'segctlp', initialising private
								** segment and segsize fields */
	}

	if ( segctlp == NIL )
	{
		ASSERT_DECL( static int grab_fail_limit = 100 )

		REPORT(1,"Agc_grab_seg: cannot obtain more memory from GRAB_SEG, return(FALSE)\n" );
		ASSERT((--grab_fail_limit)>=0,Agc_grab_seg,GRAB_SEG failed to obtain memory too many times);
		return FALSE;
	}

	elp = (ELPTR) SEGSTART( segctlp );
	elp->next = CODEDNIL;
	elp->elements = SEGSIZE( segctlp ) / elsize;

	segctlp->free = ENCODEPTR( elp );
	segctlp->next = Agc_segctl_list;
	Agc_segctl_list = segctlp;

	Agc_s_grabbed++;
	Agc_b_grabbed += SEGSIZE(segctlp);

	REPORT6(5,"Agc_grab_seg: segctlp=0x%p, elsize=%d, start=0x%p, end=0x%p, size=%d,els=%d\n",
		(void *)segctlp,SEGELSIZE(segctlp),(void *)SEGSTART(segctlp),(void *)SEGEND(segctlp),SEGSIZE(segctlp),SEGELS(segctlp));

	REPORT3(4,"Agc_grab_seg: return(TRUE) new segctl=0x%p, seg size=%d, segs_allocated=%d\n",
		(void *)segctlp,SEGSIZE(segctlp),Agc_s_grabbed);

	return TRUE;
}


static void Agc_must_grab_seg(const A68_INT elsize, const A68_INT min_elements, const int segs_for_elsize)
{
	if ( !Agc_grab_seg( elsize, min_elements, segs_for_elsize ) ) GC_ERROR(HEAP full);
}
/*
**	Explicit freeing
*/

/* Hooks to allow user to explicitly free heap allocated objects */

/*
** +++ Not currently implemented, nor interfaces available.
** +++ Provide code to permit explicit freeing.
** This would add element into free list.
** Note that sweeping algorithm relies on the fact that the free list elements are
** in ascending address order, and there is some allocated space between elements.
** We can not just add on to the front of the free list for the appropriate segment.
** We would have to merge element if necesary into neighbouring element(s) at the appropriate
** position in the list.
*/


/*
**	Agc_nfree( freed, elements )
**	    PTR		freed;
**	    A68_INT	elements;
**	{
**	}
**
**	Agc_1free( freed )
**	    PTR		freed;
**	{
**	}
*/
