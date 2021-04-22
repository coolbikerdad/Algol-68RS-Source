/* $Id: Ahstats.c,v 1.2 2002-02-23 17:50:44 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_stats.c to Ahstats.c for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes.  Add
                                  Ahswitch.h and Ahcheck.h to the includes. 
31:01:95  33.003  DCT   PCPort-1  Change diagnostic level for 'print_allocstat'
                                  from 2 to 4.
29:03:95  34.004  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
**   Allocation / garbage collection statistics
*/

static char rcs_id[] = "$Id: Ahstats.c,v 1.2 2002-02-23 17:50:44 sian Exp $";

#include <algol68/linux/Ahswitch.h>
#include "Ahbasic.h"
#include "Ahdebug.h"
#include "Ahcheck.h"
#include "Ahstats.h"

/*
** These statistics are always collected.
*/

A68_INT	Agc_collections = 0;		/* number of garbage collections so far */
A68_INT	Agc_s_grabbed = 0;		/* segments allocated for heap */
A68_INT	Agc_b_grabbed = 0;		/* bytes allocated for heap */
A68_INT	Agc_b_allocated = 0;		/* bytes in use in heap */

#ifdef	A_DEBUG
/*
** Statistics, but only gathered with A_DEBUG since they are expensive to collect.
** Some of these counts could overflow, so are unsigned to avoid possible core dumps.
**
**	Segments searched per allocation = Agc_s_examined / Agc_s_allocated
**	This indicates efficiency of segment 'cacheing' algorithm.
**
**	Free list elements searched per allocation = Agc_e_examined / Agc_s_allocated
**	This indicates efficiency of free list 'cacheing' algorithm.
*/

ALLOCSTAT Agc_allocstat[513];	/* alloc stats by object size in bytes (entry 0 for size > 512) */

void print_allocstat(void)
{
  if( Agc_debug_level >= 4 )
  {
    
    int i; ALLOCSTAT *a;
    REPORT(4,"Agc_collect: allocations by object size...\n");
    
    for( i=1, a = Agc_allocstat + 1; i<=512; i++,a++ )
      if( a->alloc_1 || a->alloc_n )
      {
	REPORT5(4," bytes:%d, 1allocs:%d, refills: %d, nallocs:%d, elements:%d\n",i,a->alloc_1,a->refills,a->alloc_n,a->elements)
	}

    a = Agc_allocstat;
    REPORT4(2," bytes:>512, 1allocs:%d, refills: %d, nallocs:%d, elements:%d\n",a->alloc_1,a->refills,a->alloc_n,a->elements);
  }
}


UNSIGNEDSIZE	Agc_allocations;    /* Number of HEAP allocations */
UNSIGNEDSIZE	Agc_s_examined;	    /* Number of segments elements examined */
UNSIGNEDSIZE	Agc_e_examined;	    /* Number of free list elements examined */
A68_INT		Agc_s_freed;	    /* Number of segments freed using FREE_SEG() */
#endif
