/*   $Id: Ahclr.h,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_clr.h to Ahclr.h for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes. Move m/c
                                  dependant bits to sunos/Ahswitch.h and error
                                  checks to Ahcheck.h. Remove Ah*.h from the
                                  includes. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef Ahclr_h
#define Ahclr_h
/*
**
**	Element clearing macros
**
**	Library build-time options:
**	  A_ZERO_CLR (default)	All allocated bytes set to 0x00
**	  A_NO_CLR		All allocated bytes have undefined values (often 0x00)
**	  A_FREE_CLR		All allocated bytes have undefined values (often 0x00)
**				However elements are cleared when freed so that
**				pointers into heap cannot be mistakenly chased later.
**	  A_BB_CLR		All allocated bytes set to 0xBB
**				Useful for debugging programs that assume bytes set to zero
*/

#define A_GC_CHECK_CLR_DEFINES

/*
**  Default is zero-clear
*/
#if	!( defined(A_ZERO_CLR) || defined(A_NO_CLR) || defined(A_FREE_CLR) || defined(A_BB_CLR) )
#define	A_ZERO_CLR
#endif


#ifdef	A_ZERO_CLR

#define	CLR_AT_GRAB(ptr,elsize,byte_size)								\
			MEMZERO((PTR)(ptr),(size_t)(byte_size))

#define	CLR_AT_ALLOCATE(elptr,elsize,elems)								\
	{												\
		if ((elsize)*(elems) < sizeof(EL))							\
			MEMZERO((PTR)(elptr),(elsize)*(elems));					\
		else											\
			((elptr)->next = 0, (elptr)->elements = 0);					\
	}

#define	CLR_AT_FREE(elptr,elsize,byte_size)								\
			MEMZERO((PTR)(elptr),(byte_size))

#define	CLR_ELHEADER_AT_FREE(elptr,elsize)								\
			(((elptr)->next = 0, (elptr)->elements = 0))

#define	IS_CLR(elptr,elsize,byte_size) \
  (*(char *)(PTR)(elptr) == '\0' && \
    ((byte_size) == 1 || MEMEQ((char *)(PTR)(elptr), (char *)(PTR)(elptr) + 1, (byte_size) - 1)) )
  /* For assertion test, deliver TRUE if implementation is not planning to zeroise */

#endif



#ifdef	A_NO_CLR

#define	CLR_AT_GRAB(ptr,elsize,byte_size)

#define	CLR_AT_ALLOCATE(elptr,elsize,elems)

#define	CLR_AT_FREE(elptr,elsize,byte_size)

#define	CLR_ELHEADER_AT_FREE(elptr,elsize)

#define	IS_CLR(elptr,elsize,byte_size)									\
			TRUE

#endif



#ifdef	A_FREE_CLR

#define	CLR_AT_GRAB(ptr,elsize,byte_size)

#define	CLR_AT_ALLOCATE(elptr,elsize,elems)

/* We still clear freed elements to obliterate pointers into heap that might be mistakenly chased later. */

#define	CLR_AT_FREE(elptr,elsize,byte_size)								\
			if((elsize) >= 2*PTRSIZE) { MEMZERO((PTR)(elptr),(byte_size)); }

#define	CLR_ELHEADER_AT_FREE(elptr,elsize)

#define	IS_CLR(elptr,elsize,byte_size)									\
			TRUE

#endif


#ifdef	A_BB_CLR

#include <memory.h>

#define	MEM_BB(ptr,size)	memset(ptr,0xBB,size)

#define	CLR_AT_GRAB(ptr,elsize,byte_size)								\
			MEM_BB((PTR)(ptr),(byte_size))

#define	CLR_AT_ALLOCATE(elptr,elsize,elems)								\
			MEM_BB((PTR)(elptr),(elsize)*(elems))

#define	CLR_AT_FREE(elptr,elsize,byte_size)								\
			MEM_BB((PTR)(elptr),(byte_size))

#define	CLR_ELHEADER_AT_FREE(elptr,elsize)								\
			(((elptr)->next = (elptr)->elements = 0xBBBBBBBB))

#define	IS_CLR(elptr,elsize,byte_size)									\
			((unsigned char)*(PTR)(elptr) == 0xBB && ((byte_size) == 1 || MEMEQ((PTR)(elptr), (PTR)(elptr) + 1, (byte_size) - 1)) )

#endif

#endif
