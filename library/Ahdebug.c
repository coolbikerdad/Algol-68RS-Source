/*   $Id: Ahdebug.c,v 1.3 2002-02-23 17:50:44 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_debug.c to Ahdebug.c for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes.  Add
                                  Ahswitch.h and Ahcheck.h to the includes. 
31:01:95  33.003  DCT   PCPort-1  Remove reduntant RCS ident line.
29:03:95  34.004  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
**
**	Debugging and error handling
**
**      Library build-time options:
**        none
*/

#ifndef A_DEBUG
#define A_DEBUG
#endif

#include <algol68/linux/Ahswitch.h>
#include "Ahbasic.h"
#include "Ahbitmap.h"
#include "Ahseg.h"
#include "Ahptr.h"
#include "Ahdebug.h"
#include "Ahcheck.h"
#include "Ahalloc.h"
#include "Ahstats.h"

int Agc_debug_level = 0;

/*
**  Agc_debug_level (externally set) controls amount of tracing output:
**
**	0 = No output
**	1 = Notification of garbage collection
**	2 = plus small amount fixed amount of additional garbage collection statistics
**	3 = plus further garbage collection statistics
**	4 = plus function entry and exit (except Agc_Xalloc)
**	5 = plus small fixed amount of additional information
**	6 = plus tracing in loops
**	7 = plus full general tracing (including Agc_alloc)
**	8 = plus special debugging tracing
**	9 = plus even more special debugging tracing
*/

void Agc_check_heap(const char *phase)
{
  SIZE b_free = 0, b_grabbed = 0, s_grabbed = 0;
  ELPTR elp;
  PTR elend;
  SEGCTLPTR segctlp;
  

  for ( segctlp = Agc_segctl_list; segctlp != NIL; segctlp = segctlp->next )
  {
    s_grabbed++;
    b_grabbed += SEGSIZE( segctlp );

    ASSERT( SEGELSIZE( segctlp ) > 0 && (char *)SEGEND( segctlp ) > (char *)SEGSTART( segctlp ),Agc_collect,HEAP segments corrupt at start of gc);

    for ( elp = DECODEPTR(segctlp->free) , elend = (char *)SEGSTART( segctlp ) - 1; elp != NIL; elp = DECODEPTR(elp->next) )
    {
      ASSERT((PTR)elp >= (PTR)SEGSTART(segctlp) && (PTR)elp < (PTR)SEGEND(segctlp)
	     ,phase,elp not within segment);
      ASSERT((PTR)ELEND(elp,segctlp) <= (PTR)SEGEND(segctlp)
	     ,phase,elp end not within segment);
      ASSERT(((char *)(PTR)elp-(char *)(PTR)SEGSTART(segctlp)) % SEGELSIZE(segctlp) == 0
	     ,phase,elp not properly aligned);
      ASSERT( elp->next == CODEDNIL || DECODEPTR(elp->next) > ELEND(elp,segctlp)
	     ,phase,old free list elements overlap);
#ifdef A_GC_WORD_ALIGNED
      ASSERT( WORDALIGNED(elp)
	     ,phase,elp not word aligned);
#endif

      if ( ! ( elp->elements > 0 && (PTR)elp > elend && (elend = (PTR)ELEND( elp, segctlp )) <= (PTR)SEGEND( segctlp ) ) )
      {
	/* Free list has been corrupted. */
	/* Most likely this is because of a user scope/bound error, or CTRANS bug; though possibly a collector bug. */
	GC_ERROR(HEAP free list corrupt);
      }

      b_free += ELBYTESIZE( elp, segctlp );
    }

  }

  ASSERT(Agc_s_grabbed == s_grabbed,phase,count of grabbed segments incorrect);
  ASSERT(Agc_b_grabbed == b_grabbed,phase,count of bytes grabbed incorrect);
  ASSERT(Agc_b_allocated == b_grabbed - b_free,phase,count of bytes allocated incorrect);

}


