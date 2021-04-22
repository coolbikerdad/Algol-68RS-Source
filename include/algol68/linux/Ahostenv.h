/* $Id: Ahostenv.h,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $ */


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
31:01:95  33.002  DCT   PCPort-1  Enable standard checks by default.
29:03:95  34.003  ELLA  Modcprght Change copyright header
*/

/*   Host specific definitions for oserrors, osmisc and ossignals   */

#ifndef Ahostenv_h
#define Ahostenv_h

/*	Linux	*/

/* define default vector / array descriptor mark in Aalloc.h */

#define A_GCMRKBASE_DEFAULT

#endif
