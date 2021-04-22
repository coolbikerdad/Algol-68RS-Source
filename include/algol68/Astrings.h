/* $Id: Astrings.h,v 1.2 2002-02-19 11:40:12 sian Exp $ */


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
26:04:94  Module renamed from a68_strings.h to Astrings.h for porting.  DCT
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes. #include
                                  Ahostenv.h 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
 *	This file contains the macros dealing with []char and vector[]char
 *	Associated (extern) functions are in a68_strings.c
*/

#ifndef Astrings_h
#define Astrings_h

#include <algol68/linux/Ahostenv.h>

#define A_RC_EQ(s,t)    A_PRCEQ(s,t)
#define A_RC_NE(s,t)    (!A_RC_EQ(s,t))
#define A_RC_LT(s,t)    A_PRCLT(s,t)
#define A_RC_GT(s,t)    A_RC_LT(t,s)
#define A_RC_LE(s,t)    (!A_RC_LT(t,s))
#define A_RC_GE(s,t)    (!A_RC_LT(s,t))
#define A_VC_EQ(s,t)    A_PVCEQ(s,t)
#define A_VC_NE(s,t)    (!A_VC_EQ(s,t))
#define A_VC_LT(s,t)    A_PVCLT(s,t)
#define A_VC_GT(s,t)    A_VC_LT(t,s)
#define A_VC_LE(s,t)    (!A_VC_LT(t,s))
#define A_VC_GE(s,t)    (!A_VC_LT(s,t))

#define A_C_TIMES(a,b)	A_PCTIMES(a,b)
#define A_RC_TIMES(a,b)	A_PRCTIMES(a,b)
#define A_VC_TIMES(a,b)	A_PVCTIMES(a,b)

#define A_C_PLUS(a,b)		A_PCPLUS(a,b)
#define A_RC_PLUS(a,b)		A_PRCPLUS(a,b)       
#define A_VC_PLUS(a,b)		A_PVCPLUS(a,b)
#define A_RC_TOPLUS(a,b)	(a = A_PRCPLUS(b,a))
#define A_VC_TOPLUS(a,b)	(a = A_PVCPLUS(b,a))

#define A_RC_PLUSAB(a,b)	(a = A_RC_PLUS(a,b))
#define A_VC_PLUSAB(a,b)	(a = A_VC_PLUS(a,b))

#define A_RC_TIMESAB(a,b)	(a = A_RC_TIMES(a,b))
#define A_VC_TIMESAB(a,b)	(a = A_VC_TIMES(a,b))

#endif
