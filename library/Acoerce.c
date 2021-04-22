/* $Id: Acoerce.c,v 1.2 2002-02-01 14:39:52 sian Exp $ */


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
15:08:94  Module renamed from a68_coercions.c to Acoerce.c for porting.  DCT
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
	COERCIONS.C

	This module contains library routines to perform algol68 generated
	coercions which cannot be executed in-line.

*/

#include <algol68/Asupport.h>

static char rcs_id[] = "$Id: Acoerce.c,v 1.2 2002-02-01 14:39:52 sian Exp $";

#define  A_WBVB_routine(name,widebits,widesize)\
A68_VOID  name( A_VBOOL *vec, const widebits bits )\
{								\
	A68_INT x ;						\
	(vec->upb)=widesize;					\
	A_VHEAP(A68_BOOL,(*vec));				\
	for( x=0; x<(widesize); x++)				\
		(vec->data)[x] = (A68_BOOL)((bits>>((widesize)-x-1)) & 0x1);\
}

/* Generate versions of the widening bits -> []bool coercion
   for all word lengths
*/
#ifdef LONGLONGOPTION
A_WBVB_routine(A_PWLLBVB,A68_LLBITS,A_SZ_LLBITS)
#else
A_WBVB_routine(A_PWSSBVB,A68_SSBITS,A_SZ_SSBITS)
#endif

A_WBVB_routine(A_PWSBVB,A68_SBITS,A_SZ_SBITS)
A_WBVB_routine(A_PWBVB,A68_BITS,A_SZ_BITS)
A_WBVB_routine(A_PWLBVB,A68_LBITS,A_SZ_LBITS)
