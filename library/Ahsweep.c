/* $Id: Ahsweep.c,v 1.2 2002-02-23 17:50:44 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_sweep.c to Ahsweep.c for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes.  Add
                                  Ahswitch.h and Ahcheck.h to the includes. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
**	Garbage collector sweeping phase
*/

/*
** Scanning and marking finished.
**
** Sweeping phase starting.
**
** Now we must:
** 1.	rebuild free list;
** 2.	return completely empty segments;
** 3.	return bitmaps and stack;
** 4.	update statistics.
*/

#include <algol68/linux/Ahswitch.h>
#include "Ahbasic.h"
#include "Ahdebug.h"
#include "Ahbitmap.h"
#include "Ahseg.h"
#include "Ahptr.h"
#include "Ahclr.h"
#include "Ahcheck.h"
#include "Ahstats.h"
#include "Ahsweep.h"


/*
**  Machine dependencies
*/

#define GC_SWEEP()


  /*
   **	Three different algorithms for rebuilding the free list were considered:
   **
   **	1.  Use the free list to clear these regions in the map, thus insisting
   **	    these areas are free, in case heap pointers have been mis-interpreted.
   **	    Discard the free list.  Rebuild it entirely from the map.
   **
   **	    +  Simple algorithm.
   **	    -  In a virtual memory environment writes to many pages (probably most)
   **	       in the heap reconstructing the free list.  Not only do the pages
   **	       have to be read in (this would happen in other algorithms)
   **	       but written back to disc later when paged out.
   **	       This would be extremely bad news on a workstation paging over Ethernet.
   **	    -  The free list would have to be re-cleared to prevent problems tracing
   **	       old heap pointers from mis-analysed heap pointers pointing into the
   **	       free list.  Most of the space being re-cleared is already clear.
   **	       This would be slow on most machines, and terrible in a virtual
   **	       memory environment.
   **
   **    	2.  Use the free list to clear these regions in the map, thus insisting
   **	    these areas are free, in case heap pointers have been mis-interpreted.
   **	    Traverse the free list and bitmap in parellel creating/extending/merging
   **	    free list elements according to the map.
   **
   **	    -  More complicated algorithm.
   **	    +  Touches many pages, but most are just read.
   **	    +  Only clears space added to free list.
   **
   **  ->  3.  Traverse the free list and bitmap in parellel creating/extending/merging
   **	    free list elements according to the map, ensuring bits of the free list
   **	    marked in the map as used are kept free.
   **
   **	    -  Much more complicated algorithm.
   **	    +  Time saved, and fewer bitmap pages written to by not modifying
   **	       map from free list.
   **
   **
   **	Initial vesrions used algorithm 2.
   **
   **	From August 1988 algorithm 3 has been used.
   **	This algorithm is much better when there is a lot of space
   **	on the free lists.
   **
   **	Tests show that this algorithm can be over twice as fast
   **	collecting ELLA's garbage, although it is marginally slower
   **	with the garbage collector test programs.  This is because
   **	ELLA uses a large number of segments for different sized
   **	objects, with only a few allocations from those segments,
   **	so there is a large amount of space on the free list.
   **	The synthetic tests tend to only use a few different object
   **	sizes, and the segments have very short free lists.
   */

void Agc_sweep(SEGCTLPTR *heap_segments)
{
  SEGCTLPTR segctlp, *segctlpp;
  ELPTR elp;
  CODEDPTR *elpp;
  
  GC_SWEEP();

  for ( segctlpp = heap_segments; (segctlp = *segctlpp) != NIL; )
    /*  At end of loop so it can be skipped by continue: segctlpp = &((segctlp)->next ) */
  {
    PTR		elstart, elend;
    BITMAPPTR	bitmap = segctlp->bitmap;
    PTR		old_elend;
    ASSERT_DECL( PTR last_freestart )


      REPORT6(5,"Agc_collect{free list reconstruct}: segctlp=0x%p, elsize=%d, start=0x%p, end=0x%p, size=%d,els=%d\n",
	      (void *)segctlp,SEGELSIZE(segctlp),(void *)SEGSTART(segctlp),(void *)SEGEND(segctlp),SEGSIZE(segctlp),SEGELS(segctlp));


    /*
     ** First, clear bitmap (to indicate unused) from free list.
     ** This is essential for the freelist reconstruction algorithm to work.
     ** It ensures that all free list elements are enclosed in an unused heap area
     ** as identified by the bitmap.
     */

    /*
     ** Note that sweeping algorithm relies on the fact that the free list elements are
     ** in ascending address order, and there is some allocated space between elements.
     */

    ASSERT(bitmap == segctlp->bitmap,Agc_collect,'bitmap' out of sync);
    ASSERT(TSTMARK(bitmap,SEGELS(segctlp)+0),Agc_collect,bitmap trailer clear);
    ASSERT(!TSTMARK(bitmap,SEGELS(segctlp)+1),Agc_collect,bitmap trailer set);
    ASSERT(TSTMARK(bitmap,SEGELS(segctlp)+2),Agc_collect,bitmap trailer clear);

    elpp = &segctlp->free;
    elp = DECODEPTR(*elpp);
    old_elend = SEGSTART( segctlp );
    ASSERT_INIT( last_freestart = SEGSTART(segctlp) - 1 );
    if ( elp != NIL )
    {
      elstart = (PTR)elp;
      elend = (PTR)ELEND( elp, segctlp );
		
      CHECK_EL( segctlp, elp, elend );
    }
    else
    {
      elstart = elend = (char *)(SEGEND( segctlp )) + 1; /* well beyond any free space */
    }
		
    for (;;)
    {
		
      PTR		freestart, freeend;
      SIZE	freed_bytes;
		
      ASSERT(elp == DECODEPTR(*elpp),Agc_collect,elpp and elp out of step);
		
      ASSERT(elp == NIL || ((PTR)elp >= (PTR)SEGSTART(segctlp) && (PTR)elp < (PTR)SEGEND(segctlp))
	     ,Agc_collect,elp not within segment);
      ASSERT(elp == NIL || ((PTR)ELEND(elp,segctlp) <= (PTR)SEGEND(segctlp))
	     ,Agc_collect,elp end not within segment);
      ASSERT(elp == NIL || elend > elstart,Agc_collect,empty free list element);
		
      /*
       ** First, set 'freestart' to be the start of either the next:
       **
       **	free space starting outside a free list element
       ** or
       **	free space starting at the start of a free list element
       **	but finishing beyond the end of that element
       ** or
       **	an adress beyond the end of the segment
       */
		
      SCAN_TO_CLR( freestart, segctlp, bitmap, old_elend, elstart );
		
      ASSERT( freestart > last_freestart,Agc_collect,not progressing in sweep);
      ASSERT_INIT( last_freestart = freestart );
		
      if ( freestart >= SEGEND( segctlp ) ) break;
		
      while ( freestart == elstart && TSTMARK( bitmap, ELNUM( elend, segctlp ) ) )
      {
	/*
	 ** Freespace is identical to free list element.
	 ** Skip on to next free list element.
	 */
		
	ASSERT(freestart <= SEGEND(segctlp),Agc_collect,freestart beyond segend);
		
	/* step on to next free list element */
		
	ASSERT(elp != NIL,Agc_collect,elp nil at elpp update);
	elpp = &elp->next;
	elp = DECODEPTR(*elpp);
	old_elend = elend;
	if ( elp != NIL )
	{
	  elstart = (PTR)elp;
	  elend = (PTR)ELEND( elp, segctlp );

	  CHECK_EL( segctlp, elp, elend );
		
	  ASSERT(elend > elstart,Agc_collect,empty free list element);
	}
	else
	{
	  elstart = elend = (char *)(SEGEND( segctlp )) + 1; /* well beyond any free space */
	}
	ASSERT(old_elend < elstart,Agc_collect,free list not in order);
		
	SCAN_TO_CLR( freestart, segctlp, bitmap, old_elend, elstart );
      }
		
      if ( freestart >= SEGEND( segctlp ) ) break;
		
      ASSERT(freestart == (PTR)SEGSTART( segctlp ) || freestart > old_elend,Agc_collect,freestart before old_elend);
		
      ASSERT(freestart <= elstart,Agc_collect,freestart > elstart);
		
      ASSERT(elp == NIL || elstart == (PTR)DECODEPTR(*elpp),Agc_collect,elstart != *elpp);
		
		
      /*
       ** Secondly, set 'freeend' to be the end of the freespace
       */

      if ( freestart < elstart )
      {
	SCAN_TO_SET( freeend, segctlp, bitmap, freestart, elstart );
		
	freed_bytes = (char *)freeend - (char *)freestart;
	CLR_AT_FREE( freestart, SEGELSIZE(segctlp), freed_bytes );
      }
      else
      {
	ASSERT(freestart == elstart,Agc_collect,freestart == elstart);
		
	freed_bytes = 0;
	freeend = freestart;
      }

      while ( freeend == elstart )
      {
	/* step on to next free list element */
		
	ASSERT(freeend <= SEGEND(segctlp),Agc_collect,freeend beyond segend);
		
	elp = DECODEPTR(elp->next);
	old_elend = elend;
		
	if ( elp != NIL )
	{
	  elend = (PTR)ELEND( elp, segctlp );
	  CLR_ELHEADER_AT_FREE( (ELPTR)elstart, SEGELSIZE(segctlp) );
	  elstart = (PTR)elp;
		
	  CHECK_EL( segctlp, elp, elend );
		
	  ASSERT(elend > elstart,Agc_collect,empty free list element);
	}
	else
	{
	  CLR_ELHEADER_AT_FREE( (ELPTR)elstart, SEGELSIZE(segctlp) );
	  elstart = elend = (char *)(SEGEND( segctlp )) + 1; /* well beyond any free space */
	}
	ASSERT(old_elend < elstart,Agc_collect,free list not in order);
		
	ASSERT(freeend < elstart,Agc_collect,freeend not less than elstart);
		
	SCAN_TO_SET( freeend, segctlp, bitmap, old_elend, elstart );
		
	ASSERT(freeend >= old_elend,Agc_collect,freeend before old_elend);
	ASSERT(freeend <= elstart,Agc_collect,freeend beyond elstart limit);
	ASSERT(freeend <= SEGEND(segctlp),Agc_collect,freeend beyond segend);
		
	if ( freeend != old_elend )
	{
	  freed_bytes += (char *)freeend - (char *)old_elend;
	  CLR_AT_FREE( old_elend, SEGELSIZE(segctlp), (char *)freeend-(char *)old_elend );
	}
      }
		
      ASSERT(freeend < elstart,Agc_collect,freeend beyond elstart);
		
		
      /* freestart -> freeend is the new element */
      /* elp is freelist element beyond freeend, or NIL */
      /* elpp points to el pointer before freestart */
		
      ASSERT(freeend > freestart,Agc_collect,empty bitmap area);
      ASSERT(elp == NIL || (PTR)elp > freeend,Agc_collect,elp before freeend);
      ASSERT(freeend <= SEGEND(segctlp),Agc_collect,freeend beyond segend);
		
      ASSERT((PTR)elpp < freestart,Agc_collect,elpp beyond freestart);

      ASSERT(bitmap == segctlp->bitmap,Agc_collect,'bitmap' out of sync);
      ASSERT(TSTMARK(bitmap,SEGELS(segctlp)+0),Agc_collect,bitmap trailer clear);
      ASSERT(!TSTMARK(bitmap,SEGELS(segctlp)+1),Agc_collect,bitmap trailer set);
      ASSERT(TSTMARK(bitmap,SEGELS(segctlp)+2),Agc_collect,bitmap trailer clear);
		
      if ( freestart == SEGSTART( segctlp ) && freeend == SEGEND( segctlp ) )
      {
	/* Whole segment is free */
	/* +++ put segment at end of list rather than freeing */
		
	REPORT1(3,"Agc_collect: freeing seg=0x%p\n",(void *)segctlp);
		
	ASSERT(bitmap == segctlp->bitmap,Agc_collect,'bitmap' out of sync);

	FREE_BITMAP( bitmap, SEGELS( segctlp ) + 3 );
		
	ASSERT_INIT( segctlp->bitmap = bitmap = NIL );
		
	*segctlpp = segctlp->next; /* remove segctlp from list */
		
	Agc_b_allocated -= freed_bytes;
	Agc_s_grabbed--;
	Agc_b_grabbed -= SEGSIZE(segctlp);
		
	REP_DO(Agc_s_freed++);
		
	FREE_SEG( segctlp );
		
	ASSERT_INIT( segctlp = NIL );
		
	goto sweep_next_seg;
      }
      else if ( ELPTRENOUGH( freestart, freeend ) )
      {
#define				freeelp	((ELPTR)freestart)
		
	/* care needed because of possible overlap between new and old element header */
		
	REPORT5(6,"Agc_collect: adding free list element (0x%p -> 0x%p : size %ld) after elpp 0x%p, before 0x%p\n",
		(void *)freestart,(void *)freeend,(char *)freeend-(char *)freestart,(void *)elpp,(void *)elp);
		
	ASSERT( IS_CLR(freestart,SEGELSIZE(segctlp),(char *)freeend-(char *)freestart)
	       ,Agc_collect,recreated free list element not clear);
		
	ASSERT( ((char *)freeend - (char *)freestart) % SEGELSIZE( segctlp ) == 0,Agc_collect,space recovered not multiple of elsize);
		
	freeelp->next = ENCODEPTR( elp );
	freeelp->elements = ((char *)freeend - (char *)freestart) / SEGELSIZE( segctlp );
		
	ASSERT(DECODEPTR(*elpp) == NIL || (PTR)DECODEPTR(*elpp) >= freestart,Agc_collect,discarding space already in free list);
		
	*elpp = ENCODEPTR( freestart );
		
	/* elp is still correct as next element, we have just inserted preceding it */
	/* however elpp now needs to point at new element */
	elpp = &freeelp->next;
		
	Agc_b_allocated -= freed_bytes;
		
	ASSERT( freeend == (PTR)ELEND(freeelp,segctlp)
	       ,Agc_collect,freeend not ELEND);
	ASSERT( freeelp->next == CODEDNIL || DECODEPTR(freeelp->next) > ELEND(freeelp,segctlp)
	       ,Agc_collect,free list elements overlap);
	ASSERT( freeelp->next == CODEDNIL || (PTR)DECODEPTR(freeelp->next) > freeend
	       ,Agc_collect,freeelp->next not past freeend);
		
#undef				freeelp
      }
      /* else ( ! ELPTRENOUGH( freestart, freeend ) )			*/
      /* 	do nothing, forget the few bytes of free space we found */
		
      old_elend = freeend;
		
    }

#ifdef	A_DEBUG
    if ( ELPTRENOUGH( (PTR)NIL, (char *)NIL+SEGELSIZE(segctlp) ) )
      /* if ( SEGELSIZE(segctlp) >= sizeof( EL ) ) */
    {
      SIZE	i;

      elp = DECODEPTR( segctlp->free );

      for ( i = 0; i < SEGELS(segctlp); i++ )
      {
	if ( !TSTMARK(bitmap,i) )
	{
	  while ( i > ELNUM( ELEND( elp, segctlp ), segctlp ) )
	  {
	    elp = DECODEPTR( elp->next );
	    ASSERT( elp != NIL,Agc_collect,free element beyond free list end at end of sweep);
	  }
	  ASSERT( i >= ELNUM( elp, segctlp ) && i < ELNUM( ELEND( elp, segctlp ), segctlp ),Agc_collect,free element not in free list at end of sweep);
	}
      }
    }
#endif

    ASSERT(bitmap == segctlp->bitmap,Agc_collect,'bitmap' out of sync);

    FREE_BITMAP( bitmap, SEGELS( segctlp ) + 3 );

    ASSERT_INIT( segctlp->bitmap = bitmap = NIL );

    segctlpp = &((segctlp)->next);

  sweep_next_seg:	;

  }

}
