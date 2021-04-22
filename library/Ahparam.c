/* $Id: Ahparam.c,v 1.3 2002-02-23 17:50:44 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_param.c to Ahparam.c for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes.  Add
                                  Ahswitch.h and Ahcheck.h to the includes. 
31:01:95  33.003  DCT   PCPort-1  Increase _MINHEAPSIZE to 1Mb.
29:03:95  34.004  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
**      GARBAGE COLLECTOR PARAMETERS
**
**	Define the user changeable parameters that control heap allocations and
**	when the garbage collector is called.
**
**	CTRANS'ed programs can change/inspect these at any time via the supplied function.
**	However it is best not to change Agc_smin_size after the first HEAP allocation,
**	as having different sized blocks will encourage fragmentation of the memory in which they are allocated.
**	It is difficult to do this within Algol 68 as you cannot assign in DECS modules, and the first
**	assignment in the main program happens ofter the DECS modules are elaborated.
**	The best way to change these parameters is for the user to write an equivalent C module,
**	and link it into his program, thus replacing this CTRANS library module.
**
**	The rather cryptic names for the identifiers are needed so this code can be
**	ported to machines with only 7 character significance in external identifiers.
*/

static char rcs_id[] = "$Id: Ahparam.c,v 1.3 2002-02-23 17:50:44 sian Exp $";

#include <algol68/Asupport.h>

#include <algol68/linux/Ahswitch.h>
#include "Ahcheck.h"
#include "Ahpolicy.h"
#include "Ahparam.h"

#define	_MINSEGSIZE		(4*1024)			/* bytes */	/* +++ 16Kb when gc mark implemented */
#define	_MINHEAPSIZE		(1*1024*1024)			/* bytes */
#define	_MAXHEAPSIZE		(1024*1024*1024)		/* bytes */
				/* 1Gbyte, more than you could ever want (or get) we hope */
#define	_MINCOLLECT		(-256)				/* 256-tyths */
				/* will allocate the same as is in use before next collection */

int Agc_smin_size = _MINSEGSIZE;	  /* minimum segment allocation */
int Agc_hmin_size = _MINHEAPSIZE;	  /* minimum heap allocation */
int Agc_hmax_size = _MAXHEAPSIZE;	  /* maximum heap allocation */
int Agc_tmin_collect = _MINCOLLECT;	  /* minimum heap allocated between collections:
					  **	positive: bytes
					  **	negative: negated 256-tyths of amount allocated at collection
					  */
int Agc_tnmin_next_collect;		  /* bytes in use before next collection allowed */


/* collection threshold, initialised in Agc_startup */
COLLECTION_POLICY current_policy;
int current_policy_index;


int Agc_param(char *name, int value)
/*
**    Called from osgc to inspect/change parameter values
*/
{
  if( !strcmp(name,"SET MAX HEAP SIZE") )
  {
    Agc_hmax_size = value;
    return Agc_hmax_size;
  }
  
  if( !strcmp(name,"GET MAX HEAP SIZE") )
  {
    return Agc_hmax_size;
  }
  
  if( !strcmp(name,"SET MIN HEAP SIZE") )
  {
    Agc_hmin_size = value;
    return Agc_hmin_size;
  }
  
  if( !strcmp(name,"GET MIN HEAP SIZE") )
  {
    return Agc_hmin_size;
  }
  
  if( !strcmp(name,"SET MIN SEGMENT SIZE") )
  {
    Agc_smin_size = value;
    return Agc_smin_size;
  }
  
  if( !strcmp(name,"GET MIN SEGMENT SIZE") )
  {
    return Agc_smin_size;
  }
  
  if( !strcmp(name,"SET HEAP INCREMENT") )
  {
    Agc_tmin_collect = value;
    return Agc_tmin_collect;
  }
  
  if( !strcmp(name,"GET HEAP INCREMENT") )
  {
    return Agc_tmin_collect;
  }
  
  if( !strcmp(name,"SET POLICY") )
  {
    /* validation omitted */
    current_policy_index = value;
    current_policy = Agc_policies[current_policy_index];
    return current_policy_index;
  }
  
  if( !strcmp(name,"GET POLICY") )
  {
    return current_policy_index;
  }
  
  if( !strcmp(name,"SET COLLECTION THRESHOLD") )
  {
    Agc_tnmin_next_collect = value;
    return Agc_tnmin_next_collect;
  }
  
  if( !strcmp(name,"GET COLLECTION THRESHOLD") )
  {
    return Agc_tnmin_next_collect;
  }

  return -1;
}

