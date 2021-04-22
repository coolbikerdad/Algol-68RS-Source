/*
** $Id: Ah1alloc.c,v 1.3 2002-02-23 17:50:44 sian Exp $
*/


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
15:08:94  Module renamed from a68_gc_1alloc_cache.c to Ah1alloc.c for porting. 
                         DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes.  Add
                                  Ahswitch.h and Ahcheck.h to the includes. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
**
** Fast allocation cache for single small objects
** Normal allocations are simple enough to be inline.
**
** An area is grabbed using Agc_nalloc to service these allocations.
** The cache is not traced during garbage collection, so any unused slots will be freed,
**   and the cache must be refilled afterwards.
** It is assumed that allocations are rounded up to at least the next word boundary.
*/

static char rcs_id[] = "$Id: Ah1alloc.c,v 1.3 2002-02-23 17:50:44 sian Exp $";
#include <algol68/Alibrary.h>

#ifdef A_MAX_CACHE

#include <algol68/linux/Ahswitch.h>
#include "Ahbasic.h"
#include "Ahbitmap.h"
#include "Ahseg.h"
#include "Ahdebug.h"
#include "Ahcheck.h"
#include "Ahstats.h"
#include "Ah1alloc.h"

/*
** temporaries used by inline code (NB not reentrant!)
*/
ALLOC_CACHE *Agc_cache;

/*
** The cache itself, initialised on demand
*/

ALLOC_CACHE Agc_1alloc_cache[A_MAX_MAX_CACHE/sizeof(A68_INT)] = {0};

/*
** Fill a cache slot
*/

/* How many elements to allocate in empty slot for 'size' bytes? */
#define CACHE_SLOTS(size) 512

PTR Agc_refill_cache(ALLOC_CACHE *cache)
{
  int elsize = (int)(cache-Agc_1alloc_cache+1) * WORDSIZE;

  REPORT1(7,"Agc_refill_cache(size=%d)\n",elsize);

#ifdef A_DEBUG
  Agc_allocstat[elsize].refills++;
#endif

  cache->free_elems = CACHE_SLOTS(elsize)-1;
  return (cache->area = Agc_nalloc(elsize,CACHE_SLOTS(elsize)));
}

#endif
