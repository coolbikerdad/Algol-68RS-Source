/* $Id: Ahswitch.h,v 1.2 2002-02-19 11:40:12 sian Exp $ */


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

14:12:94  33.001  ELLA   Porting    PC    Created to hide ANSI / PC differences
                                   under emx.  DCT 
31:01:95  33.002  DCT   PCPort-1  define A_DEBUG
29:03:95  34.003  ELLA  Modcprght Change copyright header
*/

/*   Host specific definitions for garbage collector   */

#ifndef Ahswitch_h
#define Ahswitch_h

#include <algol68/linux/Ahostenv.h>

/*	Linux	*/

#define A_DEBUG
#define A_GC_BASICS_DEFAULTS
#define A_GC_AREA_DEFAULTS
#define A_GC_TRACINGSTACK_DEFAULTS
/*#define A_GC_STATIC_DEFAULTS*/
#define A_GC_BITMAP_DEFAULTS
#define A_GC_DEBUG_DEFAULTS
#define A_GC_PTR_DEFAULTS
#define A_GC_SEG_DEFAULTS
#define A_GC_COLLECT_DEFAULTS
#define A_GC_WORD_ALIGNED

#endif
