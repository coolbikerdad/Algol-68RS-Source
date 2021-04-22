/* $Id: Ahcollec.c,v 1.3 2002-02-23 17:50:44 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_collect.c to Ahcollec.c for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes.  Add
                                  Ahswitch.h Ahhostgc.h and Ahcheck.h to the
                                  includes.
31:01:95  33.003  DCT   PCPort-1  Added Agc_collect_frame.
29:03:95  34.004  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
 * Ported to Sun 4 (sparc).
 *
 *		Richard Wendland	Tue May  2 22:30:35 BST 1989
 */

static char rcs_id[] = "$Id: Ahcollec.c,v 1.3 2002-02-23 17:50:44 sian Exp $";

/*
 * Edited for Objective-C demo.
 *
 *		Richard Wendland	Jan 10 22:17 1989
 */

/* Crappy quick fix added to keep array elements word aligned for the Apollo, */
/* enhanced to operate correctly for invalid array descriptors.		      */
/* Bug found in SunOS relating to the 'vadvise' system call,		      */
/* so it is no longer used by default (see _USE_VADVISE).		      */
/* Also made growing segment sizes a compile time option (_GROWING_SEGS).     */
/* Some large ELLA compilations are greatly slowed down by this feature.      */
/*		Richard Wendland	Thu Oct 27 17:56:38 BST 1988	      */

/* Crappy quick fix added to keep array elements word aligned for the Apollo. */
/*		Richard Wendland	Thu Mar 10 15:40:16 GMT 1988	      */

/* If NO_GCMARK defined garbage collector doesn't use array descriptors.      */
/*		Richard Wendland	Fri Feb 26 13:15:19 GMT 1988	      */

/* Changed so segment size chosen for new segments depends on the number      */
/* of existing segments of that size, segment size getting larger:	      */
/*	growth_factor = IF alloc_type = char_type THEN 4 ELSE 2 FI	      */
/*	seg_size = Agc_smin_size * ((segs_for_elsize + growth_factor) / 2)    */
/* ie, for min size of 8k, CHAR: 16k,16k,24k,24k,32k,32k,36k,36k...	      */
/*			  other: 8k,8k,16k,16k,24k,24k,32k,32k,36k,36k...     */
/* This means that there are fewer segments for popular sizes.		      */
/* The element size of allocations is rounded up to reduce segment numbers:   */
/* 	4 <= size < 40	rounded up to multiple of 4			      */
/*	size >= 40	rounded up to multiple of 8			      */
/* Currently algorithms are hard coded into code, they should be made tunable */
/* by the user.								      */
/*		Richard Wendland	Wed Jun 29 13:21:51 BST 1988	      */

/*
** A number of compile time options made available, to control how allocated
** elements are initialised, use by 'cc -DNO_CLR a68_collect.c':
**
**	ZERO_CLR (default)	All allocated bytes set to 0x00
**	NO_CLR			All allocated bytes have undefined values (often 0x00)
**	FREE_CLR		All allocated bytes have undefined values (often 0x00)
**				However elements are cleared when freed so that
**				pointers into heap cannot be mistakenly chased later.
**	BB_CLR			All allocated bytes set to 0xBB
**				Useful for debugging programs that assume bytes set to zero
**
**		Richard Wendland	Mon Jul 18 17:51:15 BST 1988
*/

/*
**	A number of performance improvements made.
**	A handful of small changes and a major change to the
**	sweeping algorithm, a change from algorithm 2 to 3 as
**	described at the start of the sweeping code.
**
**	Tests show that this algorithm can be over twice as fast
**	collecting ELLA's garbage, although it is marginally slower
**	with the garbage collector test programs.  This is because
**	ELLA uses a large number of segments for different sized
**	objects, with only a few allocations from those segments,
**	so there is a large amount of space on the free list.
**	The synthetic tests tend to only use a few different object
**	sizes, and the segments have very short free lists.
**
**		Richard Wendland	Mon Aug  1 11:31:34 BST 1988
*/

/*		"The Statistical Garbage Collector"
**
**	This garbage collector is a non-compacting collector based on a
**	heuristic method for identifying pointers into the heap.
**	All accessible data words are scanned starting with the static
**	data and main stack, any word that looks like a pointer into
**	the heap is assumed to be so.  No program reference map is needed.
**	The collector relies on the low probability of other data looking
**	like pointers into the heap.
**	Hence it is called "The Statistical Garbage Collector"
**
**	See the following documents for a better description:
**
**	1.  Outline description of the proposed Algol 68RS to C translator.
**	    P024.40.1
**
**	2.  Multics Algol 68 Garbage Collector.
**	    N005.10.1 (copy held as P024.40.2)
**
**	Should the Statistical Garbage Collector not be adequately efficient
**	at finding garbage, the following steps can be taken:
**
**	1.  On some systems like Sun/68000 pointers can be aligned on a boundary (2 bytes)
**	    less than the size of a pointer (4 bytes), thus pointers can overlap.
**	    This increases the chances of mis-interpreting arbitrary data as a heap pointer.
**
**	    CTRANS could be enhanced so that alignment of translated Algol 68
**	    pointers is ensured to be by the size of the pointer (4 bytes).
**	    Thus all pointers in the heap must be 4 byte aligned, and with
**	    some heuristics this might also be true in the main stack and static.
**
**	2.  Stack-frames initially have junk in them.  This junk may contain old
**	    pointers into the heap, which will delay the freeing of the space
**	    pointed to until that bit of the stack-frame is used.
**
**	    It might be worthwhile (I doubt it though) for CTRANS to arrange
**	    that the stack-frame be zeroised at function start-up.
**
**	3.  Some heap objects do not have REFs or pointers in them.  They
**	    are not currently segregated from those that do, except those
**	    whose size are smaller than a pointer ({VECTOR} [] BOOL or CHAR).
**	    Hence the collector scans these objects (eg [] BITS) looking
**	    for heap pointers.
**
**	    CTRANS could arrange to allocate these objects using a different
**	    interface, so they could be allocated in specially marked segments
**	    that would not be scanned for heap pointers.  This would be
**	    especially worthwhile on those systems identified in section 1
**	    where pointers can overlap.
**
**	4.  Restrictions could be placed on the use of heap pointers to ease
**	    the collectors task.  Some thought would need to be given to
**	    ensure these restrictions do not impact the procedure closure
**	    mechanism in the standard or pseudo-Flex environment.
**
**	    There are at least three possible restrictions that would help:
**
**	    a.  Restrict operations on heap pointers that can cause the only
**		pointer to a heap object to be a non word-aligned pointer.
**
**		This means that the ONLY pointer to a heap object may not be
**		to a BOOL, CHAR, and possibly SHORT X field, element or trim
**		of a heap object.
**
**		Thus the garbage collector can ignore all non word-aligned
**		pointers.  This will speed up the collector; and reduce the
**		the mis-interpretation of heap pointers by a factor of
**		2 on Sun-68000/Apollo, 4 on Vax-Unix, and 8 on Cray.
**
**	    b.  The restriction a above could be eased a little to apply only
**		to structures fields, not arrays.  Non word-aligned pointers
**		to heap segments for arrays of BOOL, CHAR and SHORT X would
**		be accepted.  The restriction would become:
**
**		The ONLY pointer to a heap object may not be
**		to a BOOL, CHAR, and possibly SHORT X field;
**		or an element or trim of an i-STRUCT of such modes.
**
**		This loses the speed-up of the collector, as non word-aligned
**		pointers cannot be immediately dismissed.  But the misinterpretation
**		problem will still be significantly reduced.
**
**	    c.  Restrict operations on heap pointers that can cause the only
**		pointer to a heap object not to be pointing to the beginning
**		of that object.
**
**		This means that the ONLY pointer to a heap object may not be
**		to a field, element or trim of a heap object.
**		A REF to the whole object must always be retained while
**		that object is in use.
**
**		This is a severe restriction to Algol 68.
**		However it gives all the advantages and more outlined in section a above.
**
**	5.  The machine dependent macros that define the initial areas to be
**	    scanned for heap pointers (INIT_AREA, NEXT_AREA)
**	    could be amended to only identify areas originating from Algol 68,
**	    if they do not do so already.  Currently they trace all static data,
**	    and all stack frames.  The aim would be to only trace static data
**	    from Algol 68 modules, and Algol 68 procedure stack frames; not
**	    the C derived areas (especially the standard library) which should
**	    not contain the only genuine heap pointer, and might contain words
**	    that look like heap pointers.
**
**	    To implement this all Algol 68 originated modules must be linked
**	    into an identifiable area in the program image.  This could be
**	    done by surrounding them by two known modules.  In a Unix environment
**	    this could be from /lib/crt0 at the front of the image, to the
**	    garbage collector itself at the back.  Only the bss and data
**	    sections between these two modules would be traced.  (This would
**	    require the first call of NEXT_AREA to return the second static area.)  
**	    This would be more difficult to implement for stack frames, and
**	    probably not worthwhile as it is unlikely that non-Algol 68
**	    functions will be active at a heap allocation, when a garbage
**	    collection might take place.  However it could be done by
**	    examining the return PC to see if it is within an Algol 68 module.
**
**	The following steps could be taken to speed up allocator and collector:
**
**	1.  An array of free list elements, indexed by commonly used sizes,
**	    say 1 byte, and 1 to 16 words, could be kept.  Most allocations
**	    would be satisfied from this array, only going to the main allocator
**	    when an element is exhausted, or for unusually sized objects.
**	    This first stage could even be done in the allocation macro,
**	    avoiding the function call in most cases.
**
**	2.  If we only allocated and collected memory in units of EL size,
**	    on most machines 2 words, we could avoid having to test for
**	    the remains of an element being to small to go on the list
**	    in the allocator, and a similar test in the collector.
*/

/*
**      Imports
*/
#include <stdio.h>
#include <algol68/Asupport.h>

#include <algol68/linux/Ahswitch.h>
#include "Ahdebug.h"
#include "Ahbasic.h"
#include "Ahbitmap.h"
#include "Ahseg.h"
#include "Ahptr.h"
#include "Ahclr.h"
#include "Aharea.h"
#include "Ahcheck.h"
#include "Ahtrace.h"
#include "Ahalloc.h"
#include "Ah1alloc.h"
#include "Ahcollec.h"
#include "Ahpolicy.h"
#include "Ahparam.h"
#include "Ahstats.h"
#include "Ahsweep.h"


/*
**      Initialisation
**
**      Agc_startup is called once, at the start of the Algol68 program.
**      Remember the base of main's stack frame.
*/

/* The next three declarations are private to the garbage collector machine
   dependent macros and CTRANS.  Agc_main_frame is set by A_GC_STARTUP()
   (from Aalloc.h to be the address indicating where the stack frame of
   'main() is. AAP.  Agc_collect_frame is setup at the start of a garbage
   collection to indicate the maximum extent of tracable stack.
   Agc_trace_memory is set to (void *)NULL at the start of a collection
   and is available for use by the stack trace macros.  DCT
*/

void *Agc_main_frame;
void *Agc_collect_frame;
void *Agc_trace_memory;


void Agc_startup(char *main_param)
{
  char *debug = getenv("A68_GC_DEBUG");
  char *policy = getenv("A68_GC_POLICY");
  
  Agc_debug_level = debug != NULL ? atoi(debug) : 0;
  
  current_policy_index = policy != NULL ? atoi(policy) : A_DEFAULT_POLICY;
  if( current_policy_index > A_MAX_POLICY || current_policy_index < 0 )
    current_policy_index = A_DEFAULT_POLICY;
  current_policy = Agc_policies[current_policy_index];

  Agc_main_frame = main_param;
}

/*
** Hooks
**
** An opportunity to insert code before and after each phase
*/

/*
** PORTABLE DEFAULTS
*/

#ifdef A_GC_DEFAULTS
#define A_GC_COLLECT_DEFAULTS
#endif

#ifdef A_GC_COLLECT_DEFAULTS
#ifndef GC_PRE_COLLECT
#define GC_PRE_COLLECT()
#endif
#ifndef GC_POST_COLLECT
#define GC_POST_COLLECT()
#endif
#ifndef GC_PRE_TRACE
#define GC_PRE_TRACE()
#endif
#ifndef GC_POST_TRACE
#define GC_POST_TRACE()
#endif
#ifndef GC_PRE_SWEEP
#define GC_PRE_SWEEP()
#endif
#ifndef GC_POST_SWEEP
#define GC_POST_SWEEP()
#endif

#endif

/*
** Completeness check
*/

#ifndef GC_PRE_COLLECT
#error GC_PRE_COLLECT not defined
#endif
#ifndef GC_POST_COLLECT
#error GC_POST_COLLECT not defined
#endif
#ifndef GC_PRE_TRACE
#error GC_PRE_TRACE not defined
#endif
#ifndef GC_POST_TRACE
#error GC_POST_TRACE not defined
#endif
#ifndef GC_PRE_SWEEP
#error GC_PRE_SWEEP not defined
#endif
#ifndef GC_POST_SWEEP
#error GC_POST_SWEEP not defined
#endif

/*
**	Collector
*/

A68_BOOL Agc_in_gc;		/* currently in allocator or collector */

A68_VOID Agc_collect(void)
{
  /* User callable interface to collector */

  /*
   ** We merely invoke the real collector.
   **
   ** Agc_collector ignores it's caller's stack frame (usually 'Agc_alloc')
   ** when scanning stack during tracing, in case it refers to the heap,
   ** and to avoid inefficiently analysing 'SEGCTLPTR' which may be
   ** between min and max heap_ptr, and 'ELPTR' which is in free list.
   **
   ** We serve the very important function of providing a stack frame to skip.
   **
   ** PS fiendishly good optimisers need to keep away from our stack frame!
   ** CALL macro provides machine dependent way of ensuring this.
   */

  if ( Agc_in_gc )
  {
    Agc_reenter();
  }

  if ( Agc_segctl_list == NIL ) return;	/* Nothing allocated, nothing to do,
					 * so return before we dereference NIL in collector.
					 */

  Agc_in_gc = TRUE;

  CALL(Agc_collector);

  Agc_in_gc = FALSE;
}


void Agc_collector(void)
{
  char *tmp_value;
  Agc_collect_frame = (void *)&tmp_value;
  Agc_trace_memory = (void *)NULL;

  Agc_collections++;

  GC_PRE_COLLECT();

  REPORT3(2,"Agc_collect: allocations=%d, segs_examined=%d, els_examined=%d\n",
	  Agc_allocations, Agc_s_examined, Agc_e_examined );

#ifdef	A_DEBUG
  Agc_check_heap("before garbage collection");
#endif

  GC_PRE_TRACE();
  Agc_trace(&Agc_segctl_list);
  GC_POST_TRACE();

  GC_PRE_SWEEP();
  Agc_sweep(&Agc_segctl_list);
  GC_POST_SWEEP();

#ifdef	A_DEBUG
  Agc_check_heap("after garbage collection");
#endif

  (*current_policy.review_threshold)();

#ifdef CLEAR_ALLOC1_CACHE
  CLEAR_ALLOC1_CACHE;
#endif

#ifdef QUOTA_THRESHOLD_EXCEEDED
  REVIEW_QUOTA_THRESHOLD();
#endif

  GC_POST_COLLECT();

  REPORT5(2,"Agc_collect: min_segsize=%d, min_heapsize=%d, max_heapsize=%d\nAgc_collect: min_collect=%d, min_next_collect=%d\n",
	  Agc_smin_size,Agc_hmin_size,Agc_hmax_size,Agc_tmin_collect,Agc_tnmin_next_collect)
    REPORT3(1,"Agc_collect: return; segs_grabbed=%d, bytes_grabbed=%d, bytes_allocated=%d\n",
	    Agc_s_grabbed,Agc_b_grabbed,Agc_b_allocated);

  ASSERT(Agc_b_grabbed>=Agc_b_allocated,Agc_collect,b_grabbed less than b_allocated);
  ASSERT((Agc_s_grabbed==0 && Agc_b_grabbed==0 && Agc_b_allocated==0) || (Agc_s_grabbed>0 && Agc_b_allocated>0)
	 ,Agc_collect,statistics incorrect);

#ifdef A_DEBUG
  print_allocstat();
#endif

  return;
}
