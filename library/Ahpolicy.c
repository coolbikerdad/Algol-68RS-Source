/* $Id: Ahpolicy.c,v 1.2 2002-02-23 17:50:44 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_policy.c to Ahploic.c for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes.  Add
                                  Ahswitch.h and Ahcheck.h to the includes. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
**  GARBAGE COLLECTOR THRESHOLD FUNCTIONS
**
**  A set of functions from which may be chosen one to decide whether to
**  invoke garbage collection (return 1) or grow the heap (return 0)
**     
*/

static char rcs_id[] = "$Id: Ahpolicy.c,v 1.2 2002-02-23 17:50:44 sian Exp $";

#include <algol68/linux/Ahswitch.h>
#include "Ahbasic.h"
#include "Ahcheck.h"
#include "Ahpolicy.h"
#include "Ahstats.h"
#include "Ahparam.h"

static int always_grow_heap(int element_size, int elements)
{
  return 0;
}

static int always_collect(int element_size, int elements) 
{
  return 1;
}

static void no_review_action(void)
{
}

static int default_threshold(int element_size, int elements)
{
  if( Agc_b_grabbed >= Agc_hmin_size &&
      Agc_b_allocated >= Agc_tnmin_next_collect )
    return 1;
  return 0;
}

static void default_review(void)
{
  if ( Agc_tmin_collect >= 0 )
    Agc_tnmin_next_collect = Agc_b_allocated + Agc_tmin_collect;
  else
    /* -Agc_tmin_collect is a percentage of the current allocation	*/
    /* care needed to minimise risk of overflow in calculation	*/
    Agc_tnmin_next_collect = Agc_b_allocated +
      (Agc_b_allocated * (-Agc_tmin_collect) / 256);
}


COLLECTION_POLICY Agc_policies[] =
{
  /* 0 */ { default_threshold, default_review },
  /* 1 */ { always_grow_heap, no_review_action },
  /* 2 */ { always_collect,no_review_action }
  /* add more here */
};

