/*   $Id: Ahseg.h,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_seg.h to Ahseg.h for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes. Move m/c
                                  dependant bits to sunos/Ahswitch.h and error
                                  checks to Ahcheck.h. Remove Ah*.h from the
                                  includes. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef Ahseg_h
#define Ahseg_h


/*
**
**	Segments and free lists (within segments)
*/

#define A_GC_CHECK_SEG_DEFINES

/*
** PORTABLE DEFAULTS
*/

#ifdef A_GC_DEFAULTS
#define A_GC_SEG_DEFAULTS
#endif

#ifdef A_GC_SEG_DEFAULTS

/*
** Segment header block
*/

/* CODEDPTR must be the size of a pointer */
typedef unsigned long int	CODEDPTR;

typedef struct	SEGCTL {
	SIZE		elsize;	/* private to machine dependent modules */
					/* element size, first field as access somtimes faster */
	PTR		segend;	/* private to machine dependent modules */
	CODEDPTR	free;		/* head of free list for this segment */
	BITMAPPTR	bitmap;		/* one bit per element, used during scan phase to mark used elements */
	struct SEGCTL	*next;
	long            pad_to_dw;
/*	char		segment[ WHATEVER ];	*/
} SEGCTL;

typedef	SEGCTL	*SEGCTLPTR;

/*
** Abstract access operations on segment header block SEGCTLPTR.
** This permits a number of representations. In particular options are:
**	1. The segment itself can follow after the control block, or be separated.
**	   As the control block is more heavily used than heaped data usually,
**	   it might be worth separating them in a virtual memory environment to reduce necessary quota.
**	2. The representation of segend can be changed (ptr, count of els, segsize).
**	   It might be worth keeping duplicate representation to increase access speed.
*/

#ifndef SEGSTART
#define	SEGSTART(segctlp) \
  ((char *)(PTR)(segctlp)+sizeof(SEGCTL))
						   /* first byte of this segment (not included header block) */
#endif

#ifndef SEGEND
#define	SEGEND(segctlp)	((segctlp)->segend)
						   /* first byte beyond end of this segment */
#endif

#ifndef SEGSIZE
#define	SEGSIZE(segctlp) \
  ((SIZE)(((char *)(PTR)SEGEND(segctlp))-((char *)(PTR)SEGSTART(segctlp))))
						   /* no of bytes in this segment */
#endif

#ifndef SEGELSIZE
#define	SEGELSIZE(segctlp) ((segctlp)->elsize)
						   /* element size for this segment */
#endif

#ifndef SEGELS
#define	SEGELS(segctlp)	\
  (SEGSIZE(segctlp) / SEGELSIZE(segctlp))
						   /* no of elements in this segment */
#endif

/*
** Free list header block.
** Chaining pointers are encoded so that they are not likely to be scanned
**   during garbage collection
*/

typedef struct {
	CODEDPTR	next;
	SIZE		elements;
} EL, *ELPTR;

/* Sometimes an ELPTR must not look like a ELPTR (so it isn't traced),
** so we encode them as CODEDPTRs by flipping all the bits in the ELPTR :-
*/
#ifndef ENCODEPTR
#define	ENCODEPTR(p)	(~ (CODEDPTR) (p))
#endif

#ifndef DECODEPTR
#define	DECODEPTR(p)	((ELPTR) ~ (p))
#endif

#ifndef CODEDNIL
#define	CODEDNIL	ENCODEPTR(NIL)
#endif

/*
** Operations on ELPTR (free list item).
** This abstraction should have gone further so ELPTR could have been a real ptr,
** a coded ptr, or a tuple (SEGCTLPTR,element number).
*/

#ifndef ELEND
#define	ELEND(elp,segctlp) \
  ((ELPTR)((char *)(PTR)(elp)+(((elp)->elements)*SEGELSIZE(segctlp))))
						   /* first byte beyond this free list item */
#endif

#ifndef ELNUM
#define	ELNUM(elp,segctlp) \
  ((SIZE)(((char *)(PTR)(elp)-(char *)(PTR)SEGSTART(segctlp))/SEGELSIZE(segctlp)))
						   /* how many elements is this free list item into the segment */
#endif

#ifndef ELNUMTOPTR
#define	ELNUMTOPTR(elnum,segctlp) \
  ((char *)(PTR)SEGSTART(segctlp)+((elnum)*SEGELSIZE(segctlp)))
						   /* byte offset of elnum within segment */
#endif

#ifndef ELBYTESIZE
#define	ELBYTESIZE(elp,segctlp)	\
  (((elp)->elements)*SEGELSIZE(segctlp))
						   /* size in bytes of this free list item */
#endif

/*
** Set answer_LVALUE to current free item minus currently allocated object
** +++ Get byte alignment right here at allocation and in Agc_collect
** Align to word boundary so that
**	1. More efficient access to allocated space (hardware prefers word aligned objects usually).
**	2. So that the free list elements are word aligned, some hardware (eg 68010) requires
**	   alignment for the EL structure in the free list.
** This feature only works correctly on segs for size 1 and 2.
** Fortunately GRAB_SEG excludes other non word aligned segs.
** Segs for objects of size 3, 5, 6 etc are difficult to handle.
** +++ Perhaps small objects should only allocate/map in word units.
** +++ This whole problem needs reviewing
*/ 
#ifndef ELPTRPLUS
#define	ELPTRPLUS(answer_LVALUE,elp,elsize,elems) \
  ((answer_LVALUE)=(ELPTR) ALIGN_NEXT(((char *)(PTR)(elp)+((elems)*(elsize))),WORDSIZE))
#endif

/*
** start and end delimit a potential free list item -- is it big enough (ie can it hold the header)?
*/
#ifndef ELPTRENOUGH
#define	ELPTRENOUGH(start,end) \
  ( (char *)(PTR)(end)-(char *)(PTR)(start) >= sizeof(EL) )
#endif

/*
** start and end delimit a potential free list item -- how many elements can it contain?
*/
#ifndef ELPTRELSLEFT
#define	ELPTRELSLEFT(start,end,segctlp) \
  ((SIZE)( ((char *)(PTR)(end)-(char *)(PTR)(start)) / (SEGELSIZE(segctlp)) ))
#endif

/*
** elinseg_LVALUE is set to the element index of p within segctlp
** p_LVALUE is aligned if necessary
*/
#ifndef IDENTIFY_ALIGN_EL
#define	IDENTIFY_ALIGN_EL(p_LVALUE,elinseg_LVALUE,segctlp) \
( ((elinseg_LVALUE) = (SIZE)(((char *)(PTR)(p_LVALUE)-SEGSTART(segctlp))/SEGELSIZE(segctlp))), \
   (p_LVALUE) = (char *)(PTR)SEGSTART(segctlp)+((elinseg_LVALUE)*SEGELSIZE(segctlp)) )
#endif

/*
**  Free list element sanity check
*/
#ifndef CHECK_EL
#define	CHECK_EL( segctlp, elp, elend ) \
{ \
  ASSERT((char *)elp >= (char *)SEGSTART(segctlp) && (char *)elp < (char *)SEGEND(segctlp) \
   ,CHECK_EL,elp not within segment); \
  ASSERT((char *)ELEND(elp,segctlp) <= (char *)SEGEND(segctlp) \
    ,CHECK_EL,elp end not within segment); \
  ASSERT(((char *)elp-(char *)(SEGSTART(segctlp))) % SEGELSIZE(segctlp) == 0 \
    ,CHECK_EL,elp not properly aligned); \
  ASSERT( elp->next == CODEDNIL || (ELPTR)DECODEPTR(elp->next) > (ELPTR)ELEND(elp,segctlp) \
    ,CHECK_EL,old free list elements overlap); \
  if ( ! ( (char *)elp >= (char *)SEGSTART( segctlp) && (char *)elend <= (char *)SEGEND( segctlp ) && elp->elements > 0 ) ) \
  { \
    /* Free list has been corrupted. */ \
    /* Most likely this is because of a user scope/bound error, or CTRANS bug; though possibly a collector bug. */ \
    GC_ERROR(HEAP free list corrupt); \
  } \
}
#endif


/*
**
**	Segment allocation and freeing
**
**      Library build-time options:
**        A_GROWING_SEGS
**        A_GRAB_SEG_ELSIZE_CHECK
*/


/*
**  Consider what would happen to allocations of 'struct { char[3] c3; }',
**  from STRUCT 3 CHAR in Algol 68RS.
**  On some implementation this has size 3, which straddles element and word
**  boundries horribly.
**  Also consider arrays of short (2 byte objects).
*/

#include <stdlib.h>
#include <stdio.h>

#ifdef A_GROWING_SEGS
#define	MIN_SEG_SIZE( elsize, segs_for_elsize )							\
	(Agc_smin_size *										\
		((segs_for_elsize + (elsize==sizeof(A68_CHAR) ? 4 : 2)) / 2)				\
		- PTRSIZE /* malloc overhead */)

#else
#define	MIN_SEG_SIZE( elsize, segs_for_elsize )							\
	(Agc_smin_size - PTRSIZE /* malloc overhead */)

#endif

#ifndef A_GRAB_SEG_ELSIZE_CHECK
#define	A_GRAB_SEG_ELSIZE_CHECK(elsize)	\
if ((elsize) > sizeof(int) && !WORDALIGNED(elsize)) \
  { GC_ERROR(HEAP allocation of object whose size is not a word multiple); }
#endif

#ifndef GRAB_SEG
#define	GRAB_SEG( segctlp_LVALUE, elsize, min_elements, segs_for_elsize ) \
{ \
  SIZE alloc = (SIZE)sizeof(SEGCTL) + (SIZE)(elsize) * (SIZE)(min_elements); \
  SIZE size =	alloc; \
  SIZE min_seg_size; \
  A_GRAB_SEG_ELSIZE_CHECK(elsize); \
  min_seg_size = MIN_SEG_SIZE( elsize, segs_for_elsize ); \
  if ( alloc < min_seg_size ) \
  { \
    alloc = min_seg_size;	/* round down size to end of element */ \
    size = (((min_seg_size-(SIZE)sizeof(SEGCTL)) /(elsize))*(elsize))+(SIZE)sizeof(SEGCTL); \
  } \
  (segctlp_LVALUE) = (SEGCTLPTR)(A_GC_MALLOC( (size_t)(alloc) )); \
  if ( (segctlp_LVALUE) != NIL ) \
  { \
    CLR_AT_GRAB((PTR)(segctlp_LVALUE),elsize,size); /* malloc does not zeroise */ \
    (segctlp_LVALUE)->elsize = (elsize); \
    (segctlp_LVALUE)->segend = (char *)(PTR)(segctlp_LVALUE) + size; \
  } \
  /* else segctlp_LVALUE left as NIL */ \
}
#endif

#ifndef FREE_SEG
#define	FREE_SEG( segctlp )	A_GC_FREE((PTR)(segctlp))
#endif

#endif

#endif

