/* $Id: Amath.c,v 1.2 2002-02-01 14:39:52 sian Exp $ */


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
15:08:94  Module renamed from a68_math.c to Amath.c for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#include <algol68/Asupport.h>

static char rcs_id[] = "$Id: Amath.c,v 1.2 2002-02-01 14:39:52 sian Exp $";

/* 
   long int to the power of an int, done by the binary method
   See Knuth vol 2 if you don't understand the algorithm:-)
*/
A68_LINT A_POWER(A68_LINT a, A68_INT b)
{
    A68_LINT result = 1;
    if (b < 0)
	A68_ERROR ("negative power");
    while (b != 0) {
	if (b & 1)
	    /* ie b odd */
	    result *= a;
	a *= a;
	b >>= 1;
    }
    return (result);
}


