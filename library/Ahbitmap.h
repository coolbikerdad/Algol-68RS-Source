/*   $Id: Ahbitmap.h,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_bitmap.h to Ahbitmap.h for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes. Move m/c
                                  dependant bits to sunos/Ahswitch.h and error
                                  checks to Ahcheck.h. Remove Ah*.h from the
                                  includes. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef Ahbitmap_h
#define Ahbitmap_h

/*
**
**      Bitmap macros
**
**      Library build-time options:
**        A_CLEAR_BUT_SLOW
**        A_ALLOCA_BITMAP
*/

#define A_GC_CHECK_BITMAP_DEFINES

/*
** PORTABLE DEFAULTS
*/

#ifdef A_GC_DEFAULTS
#define A_GC_BITMAP_DEFAULTS
#endif

#ifdef A_GC_BITMAP_DEFAULTS

/*
 * Thanks to Paul A Vixie (ucbvax!dual!ptsfa!vixie!paul) for his public domain bit operations.
 * They were posted on USENET in May 1987.
 * They are in Mod.sources Volume 9, Issue 51, name "bitstring".
 * I've changed them somewhat to interface into collector, and to be more efficient.
 * Although these macros are fully portable, they are here so that they can
 * be made more efficient on machines with special bit instructions.
 */

/*
 * (constants used internally -- these can change from machine to machine)
 */
                        /*
                         * how many bits in the unit returned by sizeof ?
                         */
#define _bit_charsize   8

                        /*
                         * what type will the bitstring be an array of ?
                         */
#define _bit_type       unsigned int

                        /*
                         * how many bits in an int ?
                         */
#define _bit_typesize   (sizeof(_bit_type) * (size_t)(_bit_charsize))

                        /*
                         * an int of all '0' bits
                         */
#define _bit_0s         ((_bit_type)0)

                        /*
                         * an int of all '1' bits
                         */
#define _bit_1s         (~(_bit_type)0)

/*
 * (macros used internally)
 */
        /*
         * which int of the string is bit N in?
         */
#ifdef  A_CLEAR_BUT_SLOW

#define _bit_intn(N) \
        ((N) / _bit_typesize)

#else

#define _bit_intn(N) \
        ((N) >> (_bit_typesize == 32 ? 5 : (_bit_typesize == 16 ? 4 : (_bit_typesize == 8 ? 3 : (_bit_typesize == 64 ? 6 : (abort(),0))))))

#endif

        /*
         * how many int's in a string of N bits?
         */
#define _bit_size(N) \
        _bit_intn((N)+((SIZE)(_bit_typesize)-1))

        /*
         * which bit of the word is bit N in?
         */
#ifdef  A_CLEAR_BUT_SLOW

#define _bit_bitn(N) \
        ((N) % _bit_typesize)

#else

#define _bit_bitn(N) \
        ((N) & (_bit_typesize-1))

#endif

        /*
         * mask for bit N in it's int
         */
#define _bit_mask(N) \
        (1 << _bit_bitn(N))

/*
 * (macros used externally)
 */
        /*
         * allocation size (in bytes) for N bits
         */
#define _bit_alloc_size(N) \
        ((size_t)(_bit_size(N)) * sizeof(_bit_type))

        /*
         * declare (reference) Name as a bit string
         */
#define _bit_ref(Name) \
        _bit_type *Name

        /*
         * is bit N of string Name set?
         */
#define _bit_test(Name, N) \
        ((Name)[_bit_intn(N)] & _bit_mask(N))

        /*
         * set bit N of string Name
         */
#define _bit_set(Name, N) \
        { (Name)[_bit_intn(N)] |= _bit_mask(N); }

        /*
         * clear bit N of string Name
         */
#define _bit_clear(Name, N) \
        { (Name)[_bit_intn(N)] &= ~_bit_mask(N); }

/*
** Bitmap macros (continued) used in collector
*/


typedef _bit_type       *BITMAPPTR;

#ifdef  A_ALLOCA_BITMAP
extern char *   alloca();
#define BMAP_ALLOC(bitmap_LVALUE,n)     ((bitmap_LVALUE) = (BITMAPPTR)alloca((size_t)(n)))
#define BMAP_FREE(n)
#else
#define BMAP_ALLOC(bitmap_LVALUE,n)     ((bitmap_LVALUE) = (BITMAPPTR)A_GC_MALLOC((size_t)(n)))
#define BMAP_FREE(n)    A_GC_FREE(n)
#endif

#ifndef GRAB_BITMAP
#define GRAB_BITMAP(bitmap_LVALUE,elems)                                                                \
                {                                                                                       \
                        BMAP_ALLOC( bitmap_LVALUE, _bit_alloc_size( elems ) );                          \
                        if ( (bitmap_LVALUE) == NIL ) GC_ERROR(no more memory for HEAP map);            \
                        MEMZERO( (PTR)(bitmap_LVALUE), _bit_alloc_size( elems ) );                      \
                }
#endif

#ifndef FREE_BITMAP
#define FREE_BITMAP(bitmap_LVALUE,elems)        BMAP_FREE((PTR)(bitmap_LVALUE))
#endif

/*
**      Setting, clearing and testing marks.
*/


/* +++ Check/set/clear whole words, not each bit where possible */

#define BCHECK(i,function,posn) \
  ( ASSERT((i)>=0&&(i)<SEGELS(segctlp)+3,function,posn bound check error),(i) )

/* SET and CLR in { } so we can not accidently try use them as tests */
#ifndef SETMARK
#define SETMARK(bitmap,i)               {_bit_set(bitmap, BCHECK(i,SETMARK,));}
#endif
#ifndef CLRMARK
#define CLRMARK(bitmap,i)               {_bit_clear(bitmap, BCHECK(i,CLRMARK,));}
#endif
#ifndef TSTMARK
#define TSTMARK(bitmap,i)               (_bit_test(bitmap, BCHECK(i,TSTMARK,)))
#endif
#ifndef SETMARKS
#define SETMARKS(bitmap,from,n)                                                                          \
{ SIZE temp;                                                                                             \
    BCHECK(from,SETMARKS,start);                                                                         \
    BCHECK((from)+(n)-1,SETMARKS,end);                                                                   \
    for(temp=(from)+(n)-1; temp>=(from); temp--) _bit_set(bitmap,temp);                                  \
  }
#endif
#define CLRMARKS(bitmap,from,n)                                                                          \
  { SIZE temp;                                                                                           \
    BCHECK(from,CLRMARKS,start);                                                                         \
    BCHECK((from)+(n)-1,CLRMARKS,end);                                                                   \
    for(temp=(from)+(n)-1; temp>=(from); temp--) _bit_clear(bitmap,temp);                                \
  }


/*
**      Scanning bitmaps
*/


/* CALCTSTMARKS works out if any bit not set, RESTSTMARKS used immediately after gives the result.      */
/* Implementor can choose how to spread work between macros, task split so C statements can be used.    */
#ifndef CALCTSTMARKS
#define CALCTSTMARKS(bitmap,from,n,temp)        /* n > 1 */                                              \
  {                                                                                                      \
    ASSERT((n)>1,CALCTSTMARKS,n<=1);                                                                     \
    BCHECK(from,CALCTSTMARKS,start);                                                                     \
    BCHECK((from)+(n)-1,CALCTSTMARKS,end);                                                               \
    for(temp=(from)+(n)-1; temp>=(from) && _bit_test(bitmap,temp); temp--) ;                             \
  }
#endif
#ifndef RESTSTMARKS
#define RESTSTMARKS(bitmap,from,n,temp)         (temp<(from))           /* All passed TSTMARK */
#endif

/*
**      Additional scanning macros only used during sweeping phase of collector
*/

#ifndef SCAN_TO_CLR
#define SCAN_TO_CLR(answerp_LVALUE,segctlp,bitmap,fromp,limitp)                                          \
  {                                                                                                      \
    SIZE answer, limit = ELNUM( limitp, segctlp );                                                       \
    BCHECK(ELNUM(fromp,segctlp),SCAN_TO_CLR,from);                                                       \
    BCHECK(limit,SCAN_TO_CLR,limit);                                                                     \
    ASSERT(limitp>=fromp,SCAN_TO_CLR,limit < from);                                                      \
    for ( answer = ELNUM(fromp,segctlp); answer != limit && _bit_test(bitmap,answer); )                  \
    {                                                                                                    \
      if ( _bit_bitn(answer) == 0 )                                                                      \
      {                                                                                                  \
        while ( answer + _bit_typesize <= limit && (bitmap)[_bit_intn(answer)] == _bit_1s )              \
          answer += _bit_typesize;                                                                       \
        if ( answer != limit && _bit_test(bitmap,answer) )                                               \
          answer++;                                                                                      \
      }                                                                                                  \
      else                                                                                               \
        answer++;                                                                                        \
    }                                                                                                    \
    BCHECK(answer,SCAN_TO_CLR,answer);                                                                   \
    (answerp_LVALUE) = ELNUMTOPTR(answer,segctlp);                                                       \
    ASSERT((answerp_LVALUE)<=(limitp),SCAN_TO_CLR,answerp > limitp);                                     \
  }
#endif

#ifndef SCAN_TO_SET
#define SCAN_TO_SET(answerp_LVALUE,segctlp,bitmap,fromp,limitp)                                          \
  {                                                                                                      \
    SIZE answer, limit = ELNUM( limitp, segctlp );                                                       \
    BCHECK(ELNUM(fromp,segctlp),SCAN_TO_SET,from);                                                       \
    BCHECK(limit,SCAN_TO_SET,limit);                                                                     \
    ASSERT(limitp>=fromp,SCAN_TO_SET,limit < from);                                                      \
    for ( answer = ELNUM(fromp,segctlp); answer != limit && !_bit_test(bitmap,answer); )                 \
    {                                                                                                    \
      if ( _bit_bitn(answer) == 0 )                                                                      \
      {                                                                                                  \
        while ( answer + _bit_typesize <= limit && (bitmap)[_bit_intn(answer)] == _bit_0s )              \
          answer += _bit_typesize;                                                                       \
        if ( answer != limit && !_bit_test(bitmap,answer) )                                              \
          answer++;                                                                                      \
      }                                                                                                  \
      else                                                                                               \
        answer++;                                                                                        \
    }                                                                                                    \
    BCHECK(answer,SCAN_TO_SET,answer);                                                                   \
    (answerp_LVALUE) = ELNUMTOPTR(answer,segctlp);                                                       \
    ASSERT((answerp_LVALUE)<=(limitp),SCAN_TO_SET,answerp > limitp);                                     \
  }
#endif

#endif

#endif
