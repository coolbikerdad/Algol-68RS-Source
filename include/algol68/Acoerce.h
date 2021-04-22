/* $Id: Acoerce.h,v 1.2 2002-02-19 11:40:12 sian Exp $ */


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
26:04:94  Module renamed from a68_coercions.h to Acoerce.h for porting.  DCT
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes. #include
                                  Ahostenv.h 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/* 
	COERCIONS.H
	Header file for the coercions library routines.
	Requires a68_types.h
*/
/*	bits -> vector[]bool	*/

#ifndef Acoerce_h
#define Acoerce_h

#include <algol68/linux/Ahostenv.h>

#define A_WB_CALL(fn,temp,bits)\
	(*(fn(&temp,bits),&temp))

#define A_WSSBVB(temp,bits)	A_WB_CALL(A_PWSSBVB,temp,bits)
#define A_WSBVB(temp,bits)	A_WB_CALL(A_PWSBVB,temp,bits)
#define A_WBVB(temp,bits)	A_WB_CALL(A_PWBVB,temp,bits)
#define A_WLBVB(temp,bits)	A_WB_CALL(A_PWLBVB,temp,bits)
#define A_WLLBVB(temp,bits)	A_WB_CALL(A_PWLLBVB,temp,bits)

#endif
