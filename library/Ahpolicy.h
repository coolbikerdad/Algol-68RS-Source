/*   $Id: Ahpolicy.h,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_policy.h to Ahpolicy.h for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef Ahpolicy_h
#define Ahpolicy_h

typedef struct
{
  int (*query_collect)(int element_size, int elements);
  void (*review_threshold)(void);
}
COLLECTION_POLICY;

#define A_DEFAULT_POLICY 0
#define A_ALWAYS_GROW_HEAP 1
#define A_ALWAYS_COLLECT 2
#define A_MAX_POLICY 2		/* set this to the largest of the above */

extern COLLECTION_POLICY Agc_policies[];

#endif

