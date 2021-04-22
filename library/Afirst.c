/* $Id: Afirst.c,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $ */


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
15:08:94  Module renamed from a68_first.c to Afirst.c for porting.  DCT
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
**		Afirst.c
**
**	This module must be linked into CTRANS programs before any
**	other CTRANSed modules.
**
**	The garbage collector scans static data between this module and
**	itself for pointers into the heap.  Any pointers ouside this area
**	will be ignored, and may be invalid after a garbage collection,
**	unless another similar pointer is within the area, or on the stack.
*/

static char rcs_id[] = "$Id: Afirst.c,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $";

/* uninitialised static */
static int _Agc_stat;

/* initialised static */
static int _Agc_istat = 42;

/* uninitialised global */
int _Agc_glob;

/* initialised global */
/* also the null terminated array of pointers examined to determine lowest static location */
int *(Agc_first_statics[]) =
	{ &_Agc_stat, &_Agc_istat, &_Agc_glob, (int *)Agc_first_statics, 0 };
