/*   $Id: Ahptr.h,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_ptr.h to Ahptr.h for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes. Move m/c
                                  dependant bits to sunos/Ahswitch.h and error
                                  checks to Ahcheck. Remove Ah*.h from the
                                  includes. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef Ahptr_h
#define Ahptr_h

/*
**
**	Pointer manipulations macros
**
**      Library build-time options:
**        A_WORD_VALIDPTR     only trace pointers to word boundaries (not full Algol68)
**        A_SAFETY_TRAILER
*/

#define A_GC_CHECK_PTR_DEFINES

/*
** PORTABLE DEFAULTS
*/

#ifdef A_GC_DEFAULTS
#define A_GC_PTR_DEFAULTS
#endif

#ifdef A_GC_PTR_DEFAULTS
/*
** Value of p adjusted to next a-byte boundary
*/
#ifndef ALIGN_NEXT
#define	ALIGN_NEXT(p,a)	(((CODEDPTR)(p)+((CODEDPTR)(a)-(CODEDPTR)1)) & ~((CODEDPTR)(a)-(CODEDPTR)1))
#endif

/*
** What is a valid pointer for this architecture?
*/
#ifndef VALIDPTR
#ifdef	A_WORD_VALIDPTR
#define	VALIDPTR(p) WORDALIGNED(p)
#else
#define	VALIDPTR(p) TRUE			/* all bit patterns can be valid */
#endif
#endif

/* For a single allocation, round up allocations to a word boundry.			*/
/* This keeps the number of segments down, at a cost of wasting a few bytes.		*/
/* It also permits heap allocations of structures of strange (non word aligned) length,	*/
/* as is permitted by the VAX Unix C compiler, eg structures containing just an		*/
/* odd number of characters, as from 'STRUCT(CHAR a,b,c)'.				*/
#ifndef RESIZE1ALLOCATION
#ifndef A_SAFETY_TRAILER
#define	A_SAFETY_TRAILER	0
#endif
#define	RESIZE1ALLOCATION(elsize)								\
  ((SIZE)( (elsize) < 10*sizeof(long) ? ALIGN_NEXT((elsize)+A_SAFETY_TRAILER,1*sizeof(long))		\
			       : ALIGN_NEXT((elsize)+A_SAFETY_TRAILER,2*sizeof(long))		\
  ))
#endif

/* Beware resizing elsize for multiple allocation, we still have to understand descriptor. */
/* Keep elements word aligned */
#ifndef RESIZENALLOCATION
#define	RESIZENALLOCATION(elsize,elements_LVALUE)						\
  {											\
    if ( (elsize) < WORDSIZE )						\
    {										\
      if ( (elements_LVALUE) < WORDSIZE )					\
        (elements_LVALUE) = WORDSIZE;					\
      else									\
        (elements_LVALUE) = (SIZE)ALIGN_NEXT(elements_LVALUE,WORDSIZE);	\
    }										\
  }
#endif
#endif

#endif

