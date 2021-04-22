/*  $Id: Ahdesc.h,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $ */


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
15:08:94  Module renamed from a68_gc_desc.h to Ahdesc.h for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes. Move error
                                  checks to Ahcheck.h. Remove Ah*.h from the
                                  includes. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*	Algol 68 array descriptor analysis macros
**
**      Library build-time options:
**        A_NOSTRIDE
*/

#define A_GC_CHECK_DESC_DEFINES

A_VECTOR(A68_INT,_VECINT);
A_VECTOR(A68_CHAR,_VECCHAR);

A_ROW(A68_INT,_ROW1INT,1);
A_ROW(A68_INT,_ROWNINT,A_GCMAXDIM);

A_ROW(A68_CHAR,_ROW1CHAR,1);
A_ROW(A68_CHAR,_ROWNCHAR,A_GCMAXDIM);

#define	IS_GCMARK(x)	(((x)&(~A_GCDIMFLD)) == A_GCMRKBASE)

#define	GCDIMS(x)	((int)((x)&(A_GCDIMFLD)))

#ifdef	A_NOSTRIDE
#error A_NOSTRIDE not supported

#       define  ANAL_DESC(els_LVALUE,aligned_data_ptr,areaptr,areasize)                               \
    {                                                                                                 \
      ASSERT_DECL( struct _VECINT *vp = NIL)                                                          \
      ASSERT_DECL( struct _ROW1INT *rp = NIL)                                                         \
      ASSERT(&(rp->gc) == &(vp->gc)                                                                   \
        ,ANAL_DESC,row and vector gc mark at different positions);                                    \
      ASSERT(sizeof(struct _VECINT) == sizeof(struct _VECCHAR)                                        \
        && sizeof(struct _ROW1INT) == sizeof(struct _ROW1CHAR)                                        \
        && sizeof(struct _ROWNINT) == sizeof(struct _ROWNCHAR)                                        \
        ,ANAL_DESC,array CHAR and array INT descriptors are different size);                          \
      (els_LVALUE) = 1;  /* default if we cannot work out array */                                    \
      if (  (areasize) >= sizeof( struct _VECINT )                                                    \
        && IS_GCMARK( ((struct _VECINT *)(areaptr))->gc )                                            \
        && (PTR)(((struct _VECINT *)(areaptr))->data ) == aligned_data_ptr )                          \
      {                                                                                               \
        int  dims = GCDIMS( ((struct _VECINT *)(areaptr))->gc );                                     \
        if ( dims == 0 )  /* vector */                                                                \
        {                                                                                             \
          (els_LVALUE) = ((struct _VECINT *)(areaptr))->upb;                                          \
        }                                                                                             \
        else if ( (areasize) >= (sizeof(struct _ROW1INT) - sizeof(A_DIM)) + (dims * sizeof(A_DIM)) )  \
        {                                                                                             \
          /* (els_LVALUE) == 1 */                                                                     \
          for ( ; (--dims) >= 0; )                                                                    \
              (els_LVALUE) *= (UNSIGNEDSIZE)                                                          \
            (((struct _ROWNINT *)(areaptr))->dim)[dims].upb                                           \
            - (((struct _ROWNINT *)(areaptr))->dim)[dims].lwb                                         \
            + 1;                                                                                      \
        }                                                                                             \
      }                                                                                               \
    }
#else
#  define  ANAL_DESC(els_LVALUE,aligned_data_ptr,area)                                                  \
    {                                                                                                   \
      ASSERT_DECL( struct _VECINT *vp = NIL)                                                            \
      ASSERT_DECL( struct _ROW1INT *rp = NIL)                                                           \
      ASSERT(&(rp->gc) == &(vp->gc)                                                                     \
        ,ANAL_DESC,row and vector gc mark at different positions);                                      \
      ASSERT(sizeof(struct _VECINT) == sizeof(struct _VECCHAR)                                          \
        && sizeof(struct _ROW1INT) == sizeof(struct _ROW1CHAR)                                          \
        && sizeof(struct _ROWNINT) == sizeof(struct _ROWNCHAR)                                          \
        ,ANAL_DESC,array CHAR and array INT descriptors are different size);                            \
      (els_LVALUE) = 1;  /* default if we cannot work out array */                                      \
      if (  ((area).size) >= sizeof( struct _VECINT )                                                   \
        && IS_GCMARK( ((struct _VECINT *)((area).addr))->gc )                                          \
        && (PTR)(((struct _VECINT *)((area).addr))->data ) == aligned_data_ptr )                        \
      {                                                                                                 \
        int  dims = GCDIMS( ((struct _VECINT *)((area).addr))->gc );                                   \
        if ( dims == 0 )  /* vector */                                                                  \
        {                                                                                               \
          (els_LVALUE) = ((struct _VECINT *)((area).addr))->upb;                                        \
        }                                                                                               \
        else if ( ((area).size) >= (sizeof(struct _ROW1INT) - sizeof(A_DIM)) + (dims * sizeof(A_DIM)) ) \
        {                                                                                               \
          /* dim[0] always has the largest stride */                                                    \
          (els_LVALUE) = (int)(                                                                               \
            ( (UNSIGNEDSIZE)                                                                            \
            (((struct _ROWNINT *)((area).addr))->dim)[0].upb                                            \
            - (((struct _ROWNINT *)((area).addr))->dim)[0].lwb                                          \
            + 1                                                                                         \
            )                                                                                           \
            * (((struct _ROWNINT *)((area).addr))->dim)[0].stride);                                      \
        }                                                                                               \
      }                                                                                                 \
    }
#endif
