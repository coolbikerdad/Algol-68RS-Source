/*  $Id: Ahbasic.h,v 1.2 2002-02-01 14:39:52 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_basics.h to Ahbasic.h for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes. Move m/c
                                  dependant bits to sunos/Ahhostgc.h etc. Move
                                  error checks to Ahcheck.h. Remove Ah*.h from
                                  the includes. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef Ahbasic_h
#define Ahbasic_h

#include <algol68/Atypes.h>

/*
**
**	Types, constants
**
**      Library build-time options:
**        none
*/

#define A_GC_CHECK_BASICS_DEFINES

/*
** PORTABLE DEFAULTS
*/

#ifdef A_GC_DEFAULTS
#define A_GC_BASICS_DEFAULTS
#endif

#ifdef A_GC_BASICS_DEFAULTS
#include <string.h>

#ifndef MEMZERO
#define	MEMZERO(ptr,size)	memset((void *)(ptr),0,(size_t)(size))
#endif

#ifndef MEMEQ
#define	MEMEQ(ptr1,ptr2,size)	(memcmp(ptr1,ptr2,(size_t)(size))==0)
#endif

typedef int		BOOL;
#ifndef TRUE
#define	TRUE		1
#endif
#ifndef FALSE
#define	FALSE		0
#endif

typedef void		*PTR;		/* a pointer to anything */
#ifndef NIL
#define	NIL		0		/* our own NULL */
#endif

#ifndef PTRSIZE
#define	PTRSIZE		((SIZE)sizeof(PTR))
#endif

/* WORDSIZE is always 32-bit, even on 64-bit architectures */
#ifndef WORDSIZE
#define WORDSIZE        ((SIZE)sizeof(int))
#endif

#ifndef ALIGNED
#define	ALIGNED(p,size)	(((CODEDPTR)(p) & ((size)-1)) == 0)
#endif
#ifndef WORDALIGNED
#define	WORDALIGNED(p)	ALIGNED(p,WORDSIZE)
#endif

typedef A68_INT		SIZE;		/* large enough to hold an element size,
					** array size, segment size or free list count */

typedef A68_BITS	UNSIGNEDSIZE;	/* for operations on SIZE that must not cause overflow exception */

#ifndef CALL
#define	CALL(fn)	fn()            /* call in a way that cannot be optimised out (tail end calls) */
#endif

#endif

#endif





