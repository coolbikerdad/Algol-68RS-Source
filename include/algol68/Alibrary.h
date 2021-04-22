/* $Id: Alibrary.h,v 1.2 2002-02-19 11:40:12 sian Exp $ */


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
26:04:94  Module renamed from a68_library.h to Alibrary.h for porting.  DCT
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/* Alibrary.h - Algol 68 run-time library

  Interfaces exported from liba68.a for use in Ctrans-generated C
*/

#ifndef Alibrary_h
#define Alibrary_h

#include <algol68/Atypes.h>

/*
  Aassign
*/

extern A68_VOID A_PVASSIGN( const void *d1, void *d2, A68_INT upb1, const A68_INT upb2, const A68_INT length);
extern A68_VOID A_PR1ASSIGN( const void *d1, void *d2, const A_DIM dim1[1], const A_DIM dim2[1], const A68_INT length);
extern A68_VOID A_PR2ASSIGN( const void *d1, void *d2, const A_DIM dim1[2], const A_DIM dim2[2], const A68_INT length );
extern A68_VOID A_PR3ASSIGN( const void *d1, void *d2, const A_DIM dim1[3], const A_DIM dim2[3], const A68_INT length );

/*
  Acoerce
*/

#ifdef A68_SSBITS
extern	A68_VOID  A_PWSSBVB(A_VBOOL *vec,const A68_SSBITS bits); /* short short bits version */
#endif
extern	A68_VOID  A_PWSBVB(A_VBOOL *vec,const A68_SBITS bits);  /* short bits version */
extern	A68_VOID  A_PWBVB(A_VBOOL *vec,const A68_BITS bits);
extern	A68_VOID  A_PWLBVB(A_VBOOL *vec,const A68_LBITS bits);  /* long bits version */
#ifdef A68_LLBITS
extern	A68_VOID  A_PWLLBVB(A_VBOOL *vec,const A68_LLBITS bits); /* long long bits version */
#endif

/*
  Aindex
*/

extern A68_INT A_B1CHECK(const A_DIM  *dim, const A68_INT i);
extern A68_INT A_B2CHECK(const A_DIM *dim, const A68_INT i, const A68_INT j);
extern A68_INT A_B3CHECK(const A_DIM *dim, const A68_INT i, const A68_INT j, const A68_INT k);
extern A68_INT A_VTSCRIPT(A68_INT *newupb, const A68_INT oldupb, const A68_INT lwb, const A68_INT upb);
extern A68_INT A_VRTSCRIPT(A_DIM *new, const A68_INT oldupb, const A68_INT lwb, const A68_INT upb, const A68_INT rlb);
extern A68_INT A_RTSCRIPT(A_DIM *new, const A_DIM *old, const A68_INT lwb, const A68_INT upb, const A68_INT rlb);
extern A68_INT A_T1INDEX(const A_DIM *old, const A68_INT lwb);
extern A68_INT A_T2INDEX(const A_DIM *old, const A68_INT lwb1, const A68_INT lwb2);
extern A68_INT A_T3INDEX(const A_DIM *old, const A68_INT lwb1, const A68_INT lwb2, const A68_INT lwb3);

/*
  Aerror
*/

extern A68_VOID A68_ERROR(const char *message);

/*
  Aalloc
*/

extern	void *	Agc_1alloc(A68_INT size);
extern	void *	Agc_nalloc(const A68_INT size, A68_INT elements);
extern	void *	Agc_alloc4(A68_INT elements);
extern	void Agc_startup(char *);	/* private to garbage collector machine dependent macros and CTRANS */

/* Public interfaces to garbage collector */
/* Accessible by C code inserts, or ALIEN declarations */
extern A68_VOID		Agc_collect(void);	/* publicly callable:	explicit garbage collect */
extern int Agc_param(char *name, int value);
extern void Agc_check_heap(const char *phase);

#define A_DEFAULT_POLICY 0
#define A_ALWAYS_GROW_HEAP 1
#define A_ALWAYS_COLLECT 2

#ifndef A_MAX_CACHE
#define A_MAX_CACHE 12		/* max byte size of object to be allocated from cache */
#endif

#define A_MAX_MAX_CACHE 64

#if A_MAX_CACHE > A_MAX_MAX_CACHE
#error specified maximum cached object size is too big
#endif

typedef struct
{
  int free_elems;		/* how many free slots left? */
  char *area;			/* last slot returned (increment before allocating next one) */
}
ALLOC_CACHE;

extern ALLOC_CACHE Agc_1alloc_cache[];
extern ALLOC_CACHE *Agc_cache;
extern void *Agc_refill_cache(ALLOC_CACHE *cache);

/*
  Astrings
*/

extern A68_BOOL A_PVCEQ(const A68_VC s, const A68_VC t);
extern A68_BOOL A_PRCEQ(const A68_RC s, const A68_RC t);
extern A68_BOOL A_PVCLT(const A68_VC s, const A68_VC t);
extern A68_BOOL A_PRCLT(const A68_RC s, const A68_RC t);
extern A68_VC   A_PCPLUS(const A68_CHAR s, const A68_CHAR t);
extern A68_VC   A_PVCPLUS(const A68_VC s, const A68_VC t);
extern A68_RC   A_PRCPLUS(const A68_RC s, const A68_RC t);
extern A68_VC   A_PCTIMES(const A68_CHAR c, A68_INT  n);
extern A68_VC   A_PVCTIMES(const A68_VC s, A68_INT n);
extern A68_RC   A_PRCTIMES(const A68_RC s, A68_INT n);

/*
  Amath
*/

extern A68_LINT A_POWER(A68_LINT a, A68_INT b);


#endif
