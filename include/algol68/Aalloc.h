/* $Id: Aalloc.h,v 1.2 2002-02-19 11:40:12 sian Exp $ */


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
26:04:94  Module renamed from a68_spacegen.h to Aalloc.h for porting.  DCT
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Abstracted A_GCMRKBASE definition to
                                  Ahostenv.h. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
01:05:21  Simplified defaults and added option for BDW gc. NM
??:??:??   ?.???  ????
*/

/*
** Configuration is possible by pre-defining these pre-processor symbols:
**
**	A_GARBAGE_COLLECT (default)	Garbage collect heap data
**	    A_GC_FIELD (default)	    Use gc field to recognise array descriptors
**	    A_NO_GC_FIELD		    Don't use gc field to recognise array descriptors,
**					    instead whole arrays are allocated as if they are
**					    a single large element.
**					    This may lead to the fragmentation of memory.
**	    A_STRIDE (default)		    Row descriptors contain strides.
**	    A_NO_STRIDE			    All rows are contiguous.
**					    This can not be set at will, garbage collector
**					    must be appropriately compiled.
**	A_NO_GARBAGE_COLLECT		Don't garbage collect heap data
*/

#ifndef Aalloc_h
#define Aalloc_h

#include <stdlib.h>
#include <algol68/Atypes.h>

/* set defaults */

/* The following defines were previously optional, but are no longer observed, so set to default */
#define A_STRIDE /* Row descriptors contain strides */ 
#define GC_FIELD /* Use gc field to recognise array descriptors */

/* 
** One of the following GC options must be set and A_GC_METHOD defined in this include file
**
** A_GARBAGE_COLLECT           Garbage collect the heap using ctrans allocator
** A_BDW_GARBAGE_COLLECT       Garbage collect the heap using Boehm allocator
** A_NO_GARBAGE_COLLECT        Do not collect the heap, allow it to grow
**
** Defaults are set below (Boehm for 64-bit, ctrans for 32-bit), but they can be overridden here.
** Example, to disable collection:
*/
/*
#define A_NO_GARBAGE_COLLECT
#define A_GC_METHOD none
*/

/*
** Note that this a68toc port was orginally created on, and targeted, 32-bit little-endian Linux systems.
** Dependencies on endianness and word size have been mitigated as far as possible.
** However, parts of the garbage collector and memory allocator may remain word size dependent.
** The Boehm collector option has been added particularly for use on 64-bit Linux systems, and macOS.
**
*/

/*
** Default 64-bit systems to Boehm collector
**
** An alternative option is to use the 64-bit patches to the built-in collector provided by Jose Marchesi, not fully tested as yet:
*/
/*
#       define  A_GARBAGE_COLLECT
#       define  A_GC_METHOD A68TOC
#       define  A_GARBAGE_COLLECT_64
#       define  A_FUNNY_STEPAREAPTR
*/

#if !defined(A_GC_METHOD)
#if     defined(__LP64__) || defined(__x86_64__) || defined(__amd64__) || defined(__aarch64__)
#       define  MAX_CACHE 0                /* disable caching of small allocations, leave to BDW */
#       define  A_BDW_GARBAGE_COLLECT
#       define  A_GC_METHOD BDW
#endif
#endif

/*
** Default 32-bit systems to built-in collector
**
*/
#if !defined(A_GC_METHOD)
#if     defined(__i386__) || defined(__i686__) || defined(__arm__)
#       define A_GARBAGE_COLLECT
#       define A_GC_METHOD A68TOC
#endif
#endif


/*
** Interfaces used only within the garbage collector.
** These should not be used by CTRANS.
*/


#define	A_GCMAXDIM	(3)

#define	A_GCDIMFLD	((A68_GC_MARK)A_GCMAXDIM)
			/* These bits in the gc mark word indicate the number of dimensions in the array.
			** Permits Vectors (0 dimension) and arrays up to 3 dimensions.
			*/

#ifdef A_GCMRKBASE_DEFAULT
#	define	A_GCMRKBASE	((A68_GC_MARK)0x80170A94)
			/* An unlikely value that is
			1. Not a valid pointer
			2. Has no bytes that are printable ascii or null
			3. An unlikely integer (large negative)
			4. An unnormalised floating point number
			5. Has bits set throughout the word, so is less likely to be a bit-field
			6. Has no bits set in the dimension field
			*/
#endif

#define	A_GC_MARK(dimensions)	(A_GCMRKBASE|(dimensions))


/*
** Check we have a GC method selected
*/
#if !defined(A_GC_METHOD)
#error Unable to determine garnage collection method in Aalloc.h
#endif

/*
** Definitions for A68TOC garbage collector
*/

#if defined(A_GARBAGE_COLLECT)
/* #warning A_GARBAGE_COLLECT configured for standard GC */

#define	A_GC_SETMARK(desc,dims)	((desc).gc = A_GC_MARK(dims))

#if defined(A_MAX_CACHE) && A_MAX_CACHE != 0
#define A_GC_1ALLOC(size)                                               \
  ( (((size) > A_MAX_CACHE) || ((size)%sizeof(A68_INT) != 0))  \
  ? Agc_1alloc(A_size_t_INT(size))                                      \
  : ( Agc_cache = &Agc_1alloc_cache[((size)/sizeof(A68_INT))-1],          \
      (Agc_cache->free_elems)-- > 0                                     \
      ? (Agc_cache->area) += (size)                                       \
      : Agc_refill_cache(Agc_cache)                                     \
    )                                                                   \
  )
#else
#define	A_GC_1ALLOC(size)	Agc_1alloc(A_size_t_INT(size))
#endif

#define	A_GC_NALLOC(size,elems)	        ((int)size == 4 ? Agc_alloc4(elems) : Agc_nalloc(A_size_t_INT(size),elems))
#define A_GC_MALLOC(size)               malloc(size)
#define A_GC_REALLOC(ptr,size)          realloc(ptr,size)
#define A_GC_FREE(ptr)                  free(ptr,size)

#define	A_GC_STARTUP(main_param_1)	{Agc_startup((char *) &main_param_1);}

#endif /* A_GARBAGE_COLLECT */


#if defined(A_BDW_GARBAGE_COLLECT)
/* #warning A_BDW_GARBAGE_COLLECT configured for Boehm GC */
/*
** use the BDW garbage collector
** A version is packaged with the source for completeness
**
*/
#define GC_DEBUG
#include "gc.h"
#define	A_GC_SETMARK(desc,dims) (0)
/* #define	A_GC_SETMARK(desc,dims)	((desc).gc = A_GC_MARK(dims)) */

#define	A_GC_NALLOC(size,elems)	         GC_debug_malloc((elems)*( (size) <= 0 ? 1 : (size) ),"",0)
#define	A_GC_1ALLOC(size)	         GC_debug_malloc(size,"",0)
#define A_GC_MALLOC(size)                GC_debug_malloc(size,"",0)
#define A_GC_REALLOC(ptr,size)           GC_debug_realloc(ptr,size,"",0)
#define A_GC_FREE(ptr)                   GC_debug_free(ptr)

#define	A_GC_STARTUP(main_param_1)       {GC_init();}

#endif /* BDW_GARBAGE_COLLECT */

#if defined(A_NO_GARBAGE_COLLECT)
/*
** use no garbage collector, just allocate space with malloc and friends
**
*/
/* #warning A_NO_GARBAGE_COLLECT configured for no GC */

#define	A_GC_SETMARK(desc,dims) (0)

/*
** calloc is described in malloc(3)
** It has the desirable feature of clearing the allocated space
** similar to the garbage collector.
** It returns NULL (0) when we have run out of free space.
** +++ This should be tested for, but we don't have a temporary variable to use.
*/

#define	A_GC_NALLOC(size,elems)	        calloc(elems,( (size) <= 0 ? 1 : (size) ))
#define	A_GC_1ALLOC(size)	        calloc(size,1)
#define A_GC_MALLOC(size)               malloc(size)
#define A_GC_REALLOC(ptr,size)          realloc(ptr,size)
#define A_GC_FREE(ptr)                  free(ptr)

#define	A_GC_STARTUP(main_param1) /* initialise GC here with main_param1 */

#endif

/*
** Interfaces usable by CTRANS below
*/


#define	A_VSETGCMARK(desc)	A_GC_SETMARK(desc,0)
#define	A_R1SETGCMARK(desc)	A_GC_SETMARK(desc,1)
#define	A_R2SETGCMARK(desc)	A_GC_SETMARK(desc,2)
#define	A_R3SETGCMARK(desc)	A_GC_SETMARK(desc,3)


/*
** Heap generator for non array.
*/

#define	A_HEAP(type)		((type *)A_GC_1ALLOC(sizeof(type)))


/*
** Safe heap array allocation routines.
** Gc flag, bounds and strides all set in descriptors before heap space is allocated.
** Multi element heap space is only safe from being garbage collected if
** pointed to from a properly filled in array descriptor.
*/

#define	A_VHEAP(type,desc)	((desc).gc = A_GC_MARK(0) ,						\
				(desc).data = (type *)A_GC_NALLOC(sizeof(type),((desc).upb)))

#define	A_R1HEAP(type,desc)	((desc).gc = A_GC_MARK(1) ,						\
				(desc).data = (type *)A_GC_NALLOC(sizeof(type),(desc).dim[0].upb-(desc).dim[0].lwb+1))
					/* stride assumed to be 1 */

#ifdef	A_STRIDE

#define	A_R2HEAP(type,desc)	((desc).gc = A_GC_MARK(2) ,						\
				(desc).data =								\
					(type *)A_GC_NALLOC(						\
						sizeof(type),						\
						((desc).dim[0].upb-(desc).dim[0].lwb+1)*(desc).dim[0].stride \
					)								\
				)

#define	A_R3HEAP(type,desc)	((desc).gc = A_GC_MARK(3) ,						\
				(desc).data =								\
					(type *)A_GC_NALLOC(						\
						sizeof(type),						\
						((desc).dim[0].upb-(desc).dim[0].lwb+1)*(desc).dim[0].stride \
					)								\
				)

#else

#define	A_R2HEAP(type,desc)	((desc).gc = A_GC_MARK(2) ,						\
				(desc).data =								\
					(type *)A_GC_NALLOC(						\
						sizeof(type),						\
						((desc).dim[0].upb-(desc).dim[0].lwb+1)			\
						*							\
						((desc).dim[1].upb-(desc).dim[1].lwb+1)			\
					)								\
				)

#define	A_R3HEAP(type,desc)	((desc).gc = A_GC_MARK(3) ,						\
				(desc).data =								\
					(type *)A_GC_NALLOC(						\
						sizeof(type),						\
						((desc).dim[0].upb-(desc).dim[0].lwb+1)			\
						*							\
						((desc).dim[1].upb-(desc).dim[1].lwb+1)			\
						*							\
						((desc).dim[2].upb-(desc).dim[2].lwb+1)			\
					)								\
				)

#endif


/*
**  LOC generation macros.
**  Just place on the heap.
*/

#define	A_LOC(type)		A_HEAP(type)
#define	A_VLOC(type,desc)	A_VHEAP(type,desc)
#define	A_R1LOC(type,desc)	A_R1HEAP(type,desc)
#define	A_R2LOC(type,desc)	A_R2HEAP(type,desc)
#define	A_R3LOC(type,desc)	A_R3HEAP(type,desc)


/*	staticpart generators	*/
#define A_LOC_STATIC(type,temp,op)\
	(temp=A_LOC(type),*temp=op,temp)
#define A_HEAP_STATIC(type,temp,op)\
	(temp=A_HEAP(type),*temp=op,temp)

#endif
