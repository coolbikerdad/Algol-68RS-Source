/* $Id: Ah1alloc.h,v 1.2 2002-02-01 14:39:52 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_1alloc_cache.h to Ah1alloc.h for porting.
                         DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef Ah1alloc_h
#define Ah1alloc_h

#include <algol68/Alibrary.h>

extern ALLOC_CACHE Agc_1alloc_cache[];
extern ALLOC_CACHE *Agc_cache;

/*
** Called after garbage collection
*/
#define CLEAR_ALLOC1_CACHE \
  MEMZERO(Agc_1alloc_cache,sizeof(ALLOC_CACHE)*(A_MAX_CACHE/WORDSIZE))

#endif
