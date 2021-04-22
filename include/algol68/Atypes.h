/* $Id: Atypes.h,v 1.3 2002-06-06 12:46:19 sian Exp $ */


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
24:04:94  COMPL types added.  DCT
26:04:94  Module renamed from a68_types.h to Atypes.h for porting.  DCT
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes. #include
                                  Ahostenv.h 
29:03:95  34.003  ELLA  Modcprght Change copyright header
25:09:99  34.003  SL    Phoenix Engineering: Linux port
*/

/*    Algol 68 primitive and derived modes
*/

#ifndef Atypes_h
#define Atypes_h

#include <limits.h>
#include <setjmp.h>
#include <algol68/linux/Ahostenv.h>

/*	storage class for C static functions - make global for debugging */

#ifdef	A_DEBUG
#define	A_STATIC
#else
#define A_STATIC	static
#endif

/*
  conversions between ALGOL 68 and C types
  e.g. for use in portable ALIEN declarations 

  macro names are of the form "A_from_to" where
  'from' and 'to' denote the types.  ALGOL 68 types are
  uppercase.
*/

#define A_charptr_CHARPTR(x) ((A68_BITS *)(x))
#define A_clock_t_LINT(x) ((A68_LINT)(x))
#define A_dev_t_SINT(x) ((A68_SINT)(x))
#define A_dirptr_DIRPTR(x) ((A68_BITS *)(x))
#define A_fileptr_FILEPTR(x) ((A68_BITS *)(x))
#define A_gid_t_SBITS(x) ((A68_SBITS)(x))
#define A_ino_t_LBITS(x) ((A68_LBITS)(x))
#define A_int_INT(x) ((A68_INT)(x))
#define A_long_LINT(x) ((A68_LINT)(x))
#define A_mode_t_SBITS(x) ((A68_SBITS)(x))
#define A_nlink_t_SINT(x) ((A68_SINT)(x))
#define A_off_t_LINT(x) ((A68_LINT)(x))
#define A_size_t_INT(x) ((A68_INT)(x))
#define A_time_t_LINT(x) ((A68_INT)(x))
/* New definition for Linux -- SL/PE62-01-18 */
#define A_time_t_INT(x) ((A68_INT)(x))
#define A_uid_t_SBITS(x) ((A68_SBITS)(x))

#define A_CHARPTR_charptr(x) ((char *)(x))
#define A_DIRPTR_dirptr(x) ((DIR *)(x))
#define A_FILEPTR_fileptr(x) ((FILE *)(x))
#define A_INT_int(x) ((int)(x))
#define A_INT_size_t(x) ((size_t)(x))
/* New definitions for Linux -- SL/PE61-09-25 */
/*#define A_LBITS_ulong(x) ((unsigned long)(x)) SunOs */
#define A_LBITS_ulong(x) ((unsigned long long)(x))
/* #define A_LINT_long(x) ((long int)(x)) SunOs */
#define A_LINT_long(x) ((long long int)(x))
#define A_RLI_time_tptr(x) (time_t *)(x)
/* New definition for Linux -- SL/PE62-01-18 */
#define A_RI_time_tptr(x) (time_t *)(x)
#define A_VC_charptr(desc) ((char *)((desc).data))

/*	primitive modes	*/

#define A_SZ_BYTE	CHAR_BIT

#ifdef	LONGLONGOPTION
#else
/*
 * #define	A68_SSINT	unsigned char
 * #define	A68_MAX_SSINT   UCHAR_MAX
 * New definitions for Linux
 */
#define	A68_SSINT	char
#define A68_MAX_SSINT   SCHAR_MAX
#define A_SZ_SSINT	A_SZ_BYTE*A_size_t_INT(sizeof(A68_SSINT))
/*#define A_PAD_SSINT(u)	char u##_a; char u##_b; char u##_c;
 *Next line altered by SL (Phoenix Engineering) BP21308-06-02 */
#define A_PAD_SSINT(u)
#endif

#define	A68_SINT	short int
#define A68_MAX_SINT    SHRT_MAX
#define A_SZ_SINT	A_SZ_BYTE*A_size_t_INT(sizeof(A68_SINT))
/*#define A_PAD_SINT(u)	short int u;
 *Next line altered by SL (Phoenix Engineering) BP21308-06-02 */
#define A_PAD_SINT(u)

#define A68_INT		int
#define A68_MAX_INT     INT_MAX
#define A_SZ_INT	A_SZ_BYTE*A_size_t_INT(sizeof(A68_INT))
#define A_PAD_INT(u)

/*
 * #define	A68_LINT	long int
 * #define A68_MAX_LINT    LONG_MAX
 * New definitions for Linux
 */
#define	A68_LINT	long long int
#define A68_MAX_LINT    9223372036854775807L
#define A_SZ_LINT	A_SZ_BYTE*A_size_t_INT(sizeof(A68_LINT))
#define A_PAD_LINT(u)

#ifdef	 LONGLONGOPTION
#define	A68_LLINT	long int
#define A68_MAX_LLINT   LONG_MAX
#define A_SZ_LLINT	A_SZ_BYTE*A_size_t_INT(sizeof(A68_LLINT))
#define A_PAD_LLINT(u)
#endif

#ifdef	LONGLONGOPTION
#else
#define	A68_SSREAL	float
#define A_SZ_SSREAL	A_SZ_BYTE*A_size_t_INT(sizeof(A68_SSREAL))
#define A_PAD_SSREAL(u)
#endif

#define	A68_SREAL	float
#define A_SZ_SREAL	A_SZ_BYTE*A_size_t_INT(sizeof(A68_SREAL))
#define A_PAD_SREAL(u)

#define	A68_REAL	double
#define A_SZ_REAL	A_SZ_BYTE*A_size_t_INT(sizeof(A68_REAL))
#define A_PAD_REAL(u)

#define	A68_LREAL	double
#define A_SZ_LREAL	A_SZ_BYTE*A_size_t_INT(sizeof(A68_LREAL))
#define A_PAD_LREAL(u)

#ifdef	LONGLONGOPTION
#define	A68_LLREAL	double
#define A_SZ_LLREAL	A_SZ_BYTE*A_size_t_INT(sizeof(A68_LLREAL))
#define A_PAD_LLREAL(u)
#endif


#ifdef	LONGLONGOPTION
#else
#define	A68_SSBITS	unsigned char
#define A68_MAX_SSBITS  UCHAR_MAX
#define A_SZ_SSBITS	A_SZ_BYTE*A_size_t_INT(sizeof(A68_SSBITS))
/*#define A_PAD_SSBITS(u)	char u##_a; char u##_b; char u##_c;
 *Next line altered by SL (Phoenix Engineering) BP21308-06-02 */
#define A_PAD_SSBITS(u)
#endif

#define	A68_SBITS	unsigned short int
#define A68_MAX_SBITS   USHRT_MAX
#define A_SZ_SBITS	A_SZ_BYTE*A_size_t_INT(sizeof(A68_SBITS))
/*#define A_PAD_SBITS(u)	unsigned short int u;
 *Next line altered by SL (Phoenix Engineering) BP21308-06-02 */
#define A_PAD_SBITS(u)

#define	A68_BITS	unsigned int
#define A68_MAX_BITS    UINT_MAX
#define A_SZ_BITS	A_SZ_BYTE*A_size_t_INT(sizeof(A68_BITS))
#define A_PAD_BITS(u)

/*
 * #define	A68_LBITS	unsigned long int
 * #define A68_MAX_LBITS   ULONG_MAX
 * New definitions for Linux
 */
#define	A68_LBITS	unsigned long long int
#define A68_MAX_LBITS   18446744073709551615UL
#define A_SZ_LBITS	A_SZ_BYTE*A_size_t_INT(sizeof(A68_LBITS))
#define A_PAD_LBITS(u)

#ifdef	LONGLONGOPTION
/*
 * #define	A68_LLBITS	unsigned long int
 * #define A68_MAX_LLBITS  ULONG_MAX
 * New definitions for Linux
 */
#define	A68_LLBITS	unsigned long long int
#define A68_MAX_LLBITS  18446744073709551615UL
#define A_SZ_LLBITS	A_SZ_BYTE*A_size_t_INT(sizeof(A68_LLBITS))
#define A_PAD_LLBITS(u)
#endif

#define	A68_BOOL	int
#define A_SZ_BOOL	A_SZ_BYTE*A_size_t_INT(sizeof(A68_BOOL))
#define A_PAD_BOOL(u)	

/*
   A68_CHAR should really be 'unsigned char', but this makes it
   impossible to initialise STRUCT n CHAR with a string literal.
   REPR operator needs to cast to 'unsigned char' to compensate.
*/
   
#define	A68_CHAR	char
#define A68_MAX_CHAR    UCHAR_MAX
#define A_SZ_CHAR	A_SZ_BYTE*A_size_t_INT(sizeof(A68_CHAR))
/*#define A_PAD_CHAR(u)	char u##_a; char u##_b; char u##_c;
 *Next line altered by SL (Phoenix Engineering) BP21308-06-02 */
#define A_PAD_CHAR(u)

#define	A68_VOID	void
#define A_SZ_VOID	A_SZ_BYTE*A_size_t_INT(sizeof(A68_VOID))
#define A_PAD_VOID(u)


/*      MODE COMPL     */

#ifdef	LONGLONGOPTION
#else
typedef struct { A68_SSREAL Re, Im; } A68_SSCOMPL;
#define A_SZ_SSCOMPL   A_SZ_BYTE*A_size_t_INT(sizeof(A68_SSCOMPL))
#define A_PAD_SSCOMPL(u)
#endif

typedef struct { A68_SREAL  Re, Im; } A68_SCOMPL;
#define A_SZ_SCOMPL    A_SZ_BYTE*A_size_t_INT(sizeof(A68_SCOMPL))
#define A_PAD_SCOMPL(u)

typedef struct { A68_REAL   Re, Im; } A68_COMPL;
#define A_SZ_COMPL     A_SZ_BYTE*A_size_t_INT(sizeof(A68_COMPL))
#define A_PAD_COMPL(u)

typedef struct { A68_LREAL  Re, Im; } A68_LCOMPL;
#define A_SZ_LCOMPL    A_SZ_BYTE*A_size_t_INT(sizeof(A68_LCOMPL))
#define A_PAD_LCOMPL(u)

#ifdef LONGLONGOPTION
typedef struct { A68_LLREAL Re, Im; } A68_LLCOMPL;
#define A_SZ_LLCOMPL   A_SZ_BYTE*A_size_t_INT(sizeof(A68_LLCOMPL))
#define A_PAD_LLCOMPL(u)
#endif

/*	the nil pointer		*/

#define A68_NIL		0

/*	for garbage collector	*/

#define	A68_GC_MARK	unsigned int

/*	row of amode			*/
/*	A_DIM is used in Ahassign.c	*/

typedef struct {A68_INT lwb, upb, stride; } A_DIM;

#define	A_ROW(amode,tag,dims)\
	struct tag { amode *data; A68_GC_MARK gc;\
		     A_DIM dim[dims]; }

/*	vector of amode	*/

#define A_VECTOR(amode,tag)\
	struct tag { amode *data; A68_GC_MARK gc; A68_INT upb; }

A_VECTOR(A68_CHAR,A68t26);		/* note that we use A68t26	*/
A_ROW(A68_CHAR,A68t27,1);		/* note that we use A68t27	*/

typedef struct A68t26	A68_VC;
typedef struct A68t27	A68_RC;

/* VECTOR[]BOOL is used in A_WBVB */
typedef A_VECTOR(A68_BOOL,) A_VBOOL;

/*	straight	*/

#define	A_STRAIGHT(r,s)\
	struct s {char    *composite;\
		  r       (*index)();\
		  A68_INT upb;}

/*	indexable structure of amode	*/

#define	A_ISTRUCT(amode,number,tag)\
	struct tag { amode data[number] ; }

#define A_PAD_ISTRUCT(mode,u) \
    struct{ char x[sizeof(int)-(sizeof(mode)&(sizeof(int)-1))];} u##_a;

/*	proc returning amode	*/

/* redundant for ANSI C */
#define	A_PROC(amode,tag)\
	struct tag { amode (*fn)(); char *nonlocals; }


#define A_PROCEDURE(amode,tag,PGLOB,PNONGLOB) \
  struct tag { \
    union{ amode (*fn_global)PGLOB; amode (*fn_nonglobal)PNONGLOB;} fn; \
    void *nonlocals; \
  }


/*	long jump stack save buffer	*/
typedef struct{ sigjmp_buf label ;} A68_jmp_buf;

#define A_PAD_jmp_buf(u)

#endif
