/* $Id: Ahtrace.c,v 1.2 2002-02-23 17:50:44 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_trace.c to Ahtrace.c for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes.  Add
                                  Ahswitch.h and Ahcheck.h to the includes. 
31:01:95  33.003  DCT   PCPort-1  Add report (3) when starting a trace.
29:03:95  34.004  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
**	Garbage collector scanning and marking phase
**
**      Parts of this are machine dependent.
*/

#include <stdlib.h>

#include <algol68/linux/Ahswitch.h>
#include "Ahbasic.h"
#include "Aharea.h"
#include "Ahbitmap.h"
#include "Ahseg.h"
#include "Ahptr.h"
#include "Ahdebug.h"
#include "Ahdesc.h"
#include "Ahcheck.h"
#include "Ahcollec.h"
#include "Ahtrace.h"

#ifdef A_GC_DEFAULTS
#define A_GC_STATIC_DEFAULTS
#endif

#ifdef A_GC_STATIC_DEFAULTS
/*
** Global data required to find static area
*/

/* The null terminated array of pointers examined to determine lowest static location */
extern int *(Agc_first_statics[]);              /* declared in Afirst.o */

/* Now the highest static locations */

/* uninitialised static */
static int Agc_hstat;

/* initialised static */
static int Agc_histat = 42;

/* uninitialised global */
int Agc_hglob;

/* initialised global */
/* also the null terminated array of pointers examined to determine lowest static location */
int *(Agc_last_statics[]) =
        { &Agc_hstat, &Agc_histat, &Agc_hglob, (int *)Agc_last_statics, NIL };

#endif

/*
** Trace AREAs for heap pointers and mark in bitmap
*/

void Agc_trace(
  SEGCTLPTR *heap_segments
)
{
  AREA    heap;
  AREA    area;			/* The current area being traced */
  TRACINGSTACK tstack;		/* Stack of areas to be traced */

  SEGCTLPTR segctlp;
  SEGCTLPTR *segctlpp;
  SIZE temp;

#ifndef	A_FUNNY_STEPAREAPTR	/* cop-out for weird architectures */
  {
    
	/* Check that STEPAREAPTR works correctly on this machine for this nastily aligned structure */
	/* If C compiler does tight packing, this could be a problem for the garbage collector */

	ASSERT_DECL( struct { PTR p1; char c; PTR p2; } *ass_struct = NIL )
	ASSERT_INIT( ( area.addr = (PTR)&ass_struct->c , area.size = sizeof(*ass_struct) ) );
	ASSERT_INIT( STEPAREA( area ) );
	ASSERT(area.addr == (PTR)&ass_struct->p2,Agc_collect,STEPAREA misbehaving);
  }
#endif

  heap.addr = SEGSTART( *heap_segments ); heap.size = 0 ;/* inital values to be improved in loop*/

  REPORT1(3, "%s\n", "Started trace... setting up bitmaps...");

  for ( segctlp = *heap_segments; segctlp != NIL; segctlp = segctlp->next )
  {
    REPORT6(6,"Agc_collect{mark}: segctlp=0x%p, elsize=%d, start=0x%p, end=0x%p, size=%d,els=%d\n",
	    (void *)segctlp,SEGELSIZE(segctlp),(void *)SEGSTART(segctlp),(void *)SEGEND(segctlp),SEGSIZE(segctlp),SEGELS(segctlp));

    if ( ! ( SEGELSIZE( segctlp ) > 0 && (char *)SEGEND( segctlp ) > (char *)SEGSTART( segctlp ) ) )
    {
      /* Segment control information has been corrupted. */
      /* Most likely this is because of a user scope/bound error, or CTRANS bug; though possibly a collector bug. */
      GC_ERROR(HEAP segments corrupt);
    }

    if ( (char *)SEGSTART( segctlp ) < (char *)(heap.addr) )
    {
      heap.size += (SIZE)((char *)(heap.addr) - (char *)SEGSTART( segctlp ));
      heap.addr = SEGSTART( segctlp );
    }
    
    if ( SEGEND( segctlp ) > (PTR)((char *)(heap.addr)+heap.size) )
      heap.size = (SIZE)((char *)SEGEND( segctlp ) - (char*)(heap.addr));

    GRAB_BITMAP( segctlp->bitmap, SEGELS( segctlp ) + 3 );
    SETMARK( segctlp->bitmap, SEGELS( segctlp ) + 0 );
    ASSERT(!TSTMARK(segctlp->bitmap,SEGELS(segctlp)+1),Agc_collect,bitmap trailer set at grab);
    SETMARK( segctlp->bitmap, SEGELS( segctlp ) + 2 );
    /* create an artificial endpoint which can be scanned to */
    REPORT2(6,"Agc_collect:\t\tbitmap, ptr=0x%p, size=%d\n", (void *)(segctlp->bitmap), SEGELS( segctlp ));
  }

  REPORT2(5,"Agc_collect: heap address=0x%p, heap size=%d\n",(void *)heap.addr,heap.size);

  INIT_STACK(tstack);
  ASSERT_INIT(PUSH(tstack,(PTR)Agc_collect,-42)); /* Assertion mark */
  PUSH(tstack, NIL, 0);				  /* identifies exhausted stack */

  REPORT1(3, "%s\n", "Initialising stack scan...");

  INIT_AREA(area);   /* set area to first area to search - could also PUSH
                        any additional areas (or use NEXT_AREA) */

  do
  {
    for ( ; !NILAREA(area); /* POP() at end of loop as it may contain statements */ )
    {

      REPORT3(6,"Agc_collect: AREA scan, ptr=0x%p -> 0x%p, size=%d\n",
	      (void *)area.addr,(void *)((char *)area.addr+area.size),area.size);

      ASSERT(area.size >= 0 && area.size < 100*1024*1024 /* 100Mb */,Agc_collect,area size not sensible);

      for ( ; area.size >= sizeof(PTR); STEPAREA(area) )
      {
	SIZE	els, el_in_seg;

	PTR p = * (PTR *) area.addr; /* View word as a pointer */

	REPORT3(9,"Agc_collect: AREA scan step, ptr=0x%p, size=%d, p=0x%p\n",
		(void *)area.addr,area.size,(void *)p);

	/* Continue loop if 'p' is unlikely to be a heap pointer.			*/
	/* Keeping the loop small may help some machines with small instruction caches.	*/

	if ( !VALIDPTR( p ) || !PTRINAREA(p,heap) ) continue;

	/* p is very likely to be a heap pointer */

	for ( segctlpp = heap_segments; (segctlp = *segctlpp) != NIL; segctlpp = &((segctlp)->next ))
	{
	  if ( (char *)p >= (char *)SEGSTART(segctlp) && (char *)p < (char *)SEGEND(segctlp) )
	  {
	    /* Segment for heap pointer */

	    goto found_segment;
	  }
	}

	/* Not a valid heap pointer */

	continue;		/* back to STEPAREA loop */

      found_segment:

	REPORT3(6,"Agc_collect, found_segment: ptr=0x%p, segctlp=0x%p, elsize=%d\n",
		(void *)p,(void *)segctlp,SEGELSIZE(segctlp));

	/*
	 **  	Move segment to front of segment list, to effect a 'cacheing' as in allocation.
	 **	We believe that there is locality in types of heap pointers,
	 **	(consider lists and trees) so it is likely that next
	 **	lookup will immediately succeed.
	 **	However a fast search startegy might be better ???
	 **
	 **	Note that typical programs only have a small number of segs,
	 **	many of which are infrequently used.
	 **		Multics Algol68 compiler uses 12 segs;
	 **		ELLA uses ??? segs.
	 */

	*segctlpp = segctlp->next;
	segctlp->next = *heap_segments;
	*heap_segments = segctlp;


#ifdef  MUST_POINT_TO_WORD
	/*
	 * Ignore pointers that are not word aligned,
	 * unless in a segment of objects of size that is not a multiple of word.
	 */

	if ( (SEGELSIZE(segctlp) & (WORDSIZE-1)) == 0 && (((CODEDPTR)(p) & (WORDSIZE-1)) != 0) )
	  continue;		/* p not to word aligned object, forget it */
#endif

#ifdef  MUST_POINT_TO_LWORD
	/*
	 * Ignore pointers that are not long word aligned,
	 * unless in a segment of objects of size that is not a multiple of long word.
	 */

	if ( (SEGELSIZE(segctlp) & (sizeof(long)-1)) == 0 && (((CODEDPTR)(p) & (sizeof(long)-1)) != 0) )
	  continue;		/* p not to long aligned object, forget it */
#endif


	IDENTIFY_ALIGN_EL( p, el_in_seg, segctlp );


#ifdef  MUST_POINT_TO_START
	/* Ignore pointers that point within objects	*/
	/* This could be implemented more efficiently	*/

	if ( p != * (PTR *) area.addr )
	  continue;		/* p not to start of element, forget it */
#endif

#ifdef	NO_GCMARK
	els = 1;
#else
	ANAL_DESC( els, p, area );
#endif

	REPORT3(6,"Agc_collect, aligned and analysed ptr: ptr=0x%p, element in seg=%d, elements=%d\n",
		(void *)p,el_in_seg,els);

#ifdef A_GC_HALFWORD_ALIGNED
      /* Interpret this as half word aligned (2byte) DJS 8/12/94 */
	/* +++ !!! ???
	 ** Crappy quick fix to keep elements word aligned for the Apollo
	 ** (also done for Sun/68000, though it has not been proved that this is necessary).
	 ** Apollo does not permit word objects to be aligned at any byte boundry,
	 ** even though 68020/68030 does.  This must be because C compiler generates
	 ** strange code, or page faults for words that straddle page boundries are
	 ** handled badly.
	 */

	if ( SEGELSIZE(segctlp) == 1 )
	{
	  if ( (long)p & 1 )
	  {
	    p--;
	    el_in_seg--;
	    els++;
	  }

	  if ( els & 1 )
	  {
	    els++;
	  }

	  if ( els <= 1 || els > SEGELS(segctlp) || p+(els*SEGELSIZE(segctlp)) > SEGEND(segctlp) )
	  {
	    els = 2;
	  }

	  REPORT3(6,"Agc_collect, adjusted to: ptr=0x%x, element in seg=%d, elements=%d\n",
		  p,el_in_seg,els);

	  goto els_sensible;
	}
#endif


#ifdef A_GC_WORD_ALIGNED

	/* +++ !!! ???
	 ** Crappy quick fix to keep elements word aligned.
	 */

	if ( SEGELSIZE(segctlp) == 1 )
	{
	  if ( !WORDALIGNED(p) )
	  {
	    int	offset = (int)((CODEDPTR)p & (WORDSIZE-1));
	    p = (char *)p - offset;
	    el_in_seg -= offset;
	    els += offset;
	  }

	  if ( !WORDALIGNED(els) )
	  {
	    els = (SIZE)ALIGN_NEXT(els,WORDSIZE);
	  }

	  if ( (els < WORDSIZE) || (els > SEGELS(segctlp)) || ((char *)p+(els*SEGELSIZE(segctlp)) > (char *)SEGEND(segctlp) ))
	  {
	    els = WORDSIZE;
	  }

	  REPORT3(6,"Agc_collect, adjusted to: ptr=0x%p, element in seg=%d, elements=%d\n",
		  (void *)p,el_in_seg,els);

	  goto els_sensible;
	}
#endif

	/* 'els' may be a very silly number, check it is reasonable	*/
	/* before doing arithmetic that may overflow.			*/

	if ( els <= 1 || els > SEGELS(segctlp) || (char *)p+(els*SEGELSIZE(segctlp)) > (char *)SEGEND(segctlp) )
	{
	  /* els = 1; assumed in case array descriptor mis analysed, the ptr is still valid */

	  if ( !TSTMARK( segctlp->bitmap, el_in_seg ) )
	  {
	    SETMARK( segctlp->bitmap, el_in_seg );

	    if ( SEGELSIZE(segctlp) >= PTRSIZE )
	    {
	      /* need only scan elements that are large enough to hold pointer */
	      PUSH( tstack, p, SEGELSIZE(segctlp) );

	      REPORT2(6,"Agc_collect: PUSH( ptr=0x%p, size=%d )\n",
		      (void *)p,SEGELSIZE(segctlp));
	    }
	  }
	}
	else
	{
	els_sensible:
	  CALCTSTMARKS( segctlp->bitmap, el_in_seg, els, temp );
	  if ( !RESTSTMARKS( segctlp->bitmap, el_in_seg, els, temp ) )
	  {
	    /*
	     ** At least one element in area has not been marked before.
	     **
	     ** We could just mark and push unmarked areas,
	     ** but this complicates logic for a fairly rare eventuality,
	     ** mainly caused by the trimming of heap rows.
	     */

	    SETMARKS( segctlp->bitmap, el_in_seg, els );

	    if ( SEGELSIZE(segctlp) >= PTRSIZE )
	    {
	      /* need only scan elements that are large enough to hold pointer */
	      PUSH( tstack, p, els*SEGELSIZE(segctlp) );

	      REPORT2(6,"Agc_collect: PUSH( ptr=0x%p, size=%d )\n",
		      (void *)p,els*SEGELSIZE(segctlp));
	    }
	  }
	}
      }
      area = POP(tstack);
    }
    /* Stack is exhausted, replace end marker */

    PUSH(tstack, NIL, 0);	/* identifies exhausted stack */

    NEXT_AREA(area);

    REPORT2(6,"Agc_collect: NEXT_AREA, ptr=0x%p, size=%d\n",(void *)area.addr,area.size);
  }
  while( area.addr != NIL );

  area = POP(tstack);		/* pop of (NIL, 0) to leave stack empty and tidy before calling FREE_STACK() */

  ASSERT_INIT( area=POP(tstack) );
  ASSERT(area.addr == (PTR)Agc_collect && area.size == -42,Agc_collect,tracing stack misuse);

  FREE_STACK(tstack);
  REPORT1(3, "%s\n", "End of trace");
}
