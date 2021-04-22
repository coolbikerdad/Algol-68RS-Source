/* $Id: Ahstats.h,v 1.2 2002-02-01 14:39:52 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_stats.h to Ahstats.h for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes. Remove Ah*.h
                                  from the includes. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef Ahstats_h
#define Ahstats_h
#include <algol68/Asupport.h>

/*
**   Allocation / garbage collection statistics
**
**   Exports from Ahstats.c
*/

extern A68_INT	Agc_collections;
extern A68_INT	Agc_s_grabbed;
extern A68_INT	Agc_b_grabbed;
extern A68_INT	Agc_b_allocated;

#ifdef	A_DEBUG

typedef struct 
{
  A68_INT alloc_1;		/* no of calls of Agc_1alloc */
  A68_INT refills;		/* no of calls of Agc_refill_cache */
  A68_INT alloc_n;		/* no of calls of Agc_nalloc or Agc_alloc4 */
  A68_INT elements;		/* total number of array elements allocated */
}
ALLOCSTAT;

extern ALLOCSTAT Agc_allocstat[];
extern void print_allocstat(void);

extern UNSIGNEDSIZE Agc_allocations;
extern UNSIGNEDSIZE Agc_s_examined;
extern UNSIGNEDSIZE Agc_e_examined;
extern A68_INT Agc_s_freed;
#endif

#endif
