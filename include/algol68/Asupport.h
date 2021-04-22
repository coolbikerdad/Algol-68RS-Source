/* $Id: Asupport.h,v 1.2 2002-02-19 11:40:12 sian Exp $ */


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
26:04:94  Module renamed from a68_include.h to Asupport.h for porting.  DCT
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
06:09:94  33.002  DJS   Porting   Remove definition of _POSIX_SOURCE, now done
                                  by mm control file. 
05:12:94  33.003  DJS   CmplxNos   Include floatingpoint.h if not compiling
                                   with TCC 
14:12:94  33.004  DJS   Porting    Move switch for floatingpoint.h into
                                  Ahostenv.h 
29:03:95  34.005  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/* This include file includes all other include files
*/

#include <setjmp.h>
#include <math.h>

#include <algol68/Atypes.h>
#include <algol68/Alibrary.h>
#include <algol68/Amacros.h>
#include <algol68/Aassign.h>
#include <algol68/Astrings.h>
#include <algol68/Acoerce.h>
#include <algol68/Aconfig.h>
