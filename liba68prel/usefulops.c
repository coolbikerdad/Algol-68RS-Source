/* UNAME:HKAAOSF */
#include <algol68/Asupport.h>
A_ISTRUCT(A68_CHAR ,16000000,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t31 *,16000000,A68t32);
typedef struct A68t32  A68_32 ;    /* STRUCT 16000000 REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t33,(struct A68t31 *,A68_VC *),(struct A68t31 *,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE31) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t34,(A68_VC ),(A68_VC ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26) REF CHAR */
A_VECTOR(A68_INT ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_INT *,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) REF INT */

A_PROCEDURE(A68_CHAR *,A68t37,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE31) REF CHAR */

A_PROCEDURE(struct A68t31 *,A68t38,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(REF CHAR) REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t39,(void),(void *));
typedef struct A68t39  A68_39 ;    /* PROC VOID */
struct A68t40{
A68_BITS * Cp;
struct A68t31 * Env;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF BITS,REF MODE31)  */

A_PROCEDURE(struct A68t40 *,A68t41,(struct A68t39 *),(struct A68t39 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE39) REF MODE40 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t39 ,struct A68t40 *),(struct A68t39 ,struct A68t40 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE39) MODE40 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_INT ),(A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t43 ,struct A68t40 *),(struct A68t43 ,struct A68t40 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE43) MODE40 */

A_PROCEDURE(A68_VOID ,A68t45,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t46,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t47,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t48,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE26) REF MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t50 ,A68_VC *),(struct A68t50 ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE50) REF MODE26 */
A_VECTOR(A68_VC ,A68t50);
typedef struct A68t50  A68_50 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t51,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t52,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t53,(A68_VC ),(A68_VC ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t53 ),(struct A68t53 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t55,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t56);
typedef struct A68t56  A68_56 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,4,A68t57);
typedef struct A68t57  A68_57 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(A68_INT ,A68t58,(struct A68t57 ),(struct A68t57 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE57) INT */

A_PROCEDURE(struct A68t57 ,A68t59,(A68_INT ),(A68_INT ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) MODE57 */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t35 ,A68_VC *),(struct A68t35 ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(REF MODE35) REF MODE26 */

A_PROCEDURE(A68_BITS *,A68t61,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_INT *,A68t62,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t63,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t64,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(REF MODE26,CHAR) VOID */

A_PROCEDURE(A68_INT ,A68t65,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t66,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t67,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_INT ,A68t68,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t69,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_INT ,A68t72,(A68_VC ),(A68_VC ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t73,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t74,(A68_VC ,A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(REF MODE26,MODE26,INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t75,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t76,(A68_VC ,A68_VC ,A68_INT ,A68_LINT ),(A68_VC ,A68_VC ,A68_INT ,A68_LINT ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(REF MODE26,MODE26,INT,LONG INT) INT */
A_ISTRUCT(A68_CHAR ,6,A68t77);
typedef struct A68t77  A68_77 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t78,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t79,(A68_VC ,A68_VC ,A68_INT ,A68_LBITS ),(A68_VC ,A68_VC ,A68_INT ,A68_LBITS ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF MODE26,MODE26,INT,LONG BITS) INT */
A_ISTRUCT(A68_CHAR ,7,A68t80);
typedef struct A68t80  A68_80 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_BOOL ,A68t81,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t82,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from strops --- */
/* --- End of imports from strops --- */


/* --- Imports from cif --- */
#include <stdio.h>

#define IAAAOSF_nullccharptr NULL
/**/

#define VBAAOSF_shortshortmaxint (A68_SSINT)A68_MAX_SSINT
/**/

#define WBAAOSF_shortmaxint (A68_SINT)A68_MAX_SINT
/**/

#define XBAAOSF_maxint (A68_INT)A68_MAX_INT
/**/

#define YBAAOSF_longmaxint (A68_LINT)A68_MAX_LINT
/**/

#define ZBAAOSF_maxabschar (A68_INT)A68_MAX_CHAR
/**/

#define ACAAOSF_bitswidth A_SZ_BITS
extern A68_VOID  MAAAOSF_cstringtorvc(struct A68t31 *,A68_VC *);
extern A68_CHAR * UAAAOSF_vctocharptr(A68_VC );
/* --- End of imports from cif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BCAAOSF(void);   /* strops */
extern void BAAAOSF(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_56   LKAAOSF = {"$Id: usefulops.a68,v 1.1.1.1 2001-05-07 10:16:12 sian Exp $"}; 
A_GISVEC(A68_VC ,MKAAOSF,LKAAOSF,59)
#include <stdio.h>
#define SPRINTF(s,format,p1,p2) \
  A_int_INT(sprintf(A_VC_charptr(s),A_VC_charptr(format),A_INT_int(p1),A_INT_int(p2)))

#define SOAAOSF_sprintf SPRINTF
static A68_57   CPAAOSF = {"%*d\000"}; 
A_GISVEC(A68_VC ,DPAAOSF,CPAAOSF,4)
#include <stdio.h>
#define SPRINTF2(s,format,p1,p2) \
  A_int_INT(sprintf(A_VC_charptr(s),A_VC_charptr(format),A_INT_int(p1),A_LINT_long(p2)))

#define KPAAOSF_sprintf SPRINTF2
static A68_77   UPAAOSF = {"%*lld\000"}; 
A_GISVEC(A68_VC ,VPAAOSF,UPAAOSF,6)
#include <stdio.h>
#define SPRINTF3(s,format,p1,p2) \
  A_int_INT(sprintf(A_VC_charptr(s),A_VC_charptr(format),A_INT_int(p1),A_LBITS_ulong(p2)))

#define CQAAOSF_sprintf SPRINTF3
static A68_80   MQAAOSF = {"%.*llx\000"}; 
A_GISVEC(A68_VC ,NQAAOSF,MQAAOSF,7)
typedef struct   /* env of non-global proc */
{
A68_VC  String;
} JNAAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  String;
} WNAAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Width;
A_PAD_INT(PAD_1)
} WOAAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Width;
A_PAD_INT(PAD_2)
} OPAAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Width;
A_PAD_INT(PAD_3)
} GQAAOSF_generator;

A68_BITS * PKAAOSF_orab(A68_BITS * L, A68_BITS  R);

A68_INT * TKAAOSF_becomes(A68_INT * I, A68_VC  Slice);

A68_VOID  ALAAOSF_becomes(A68_VC  Slice, A68_INT  I, A68_VC  *ReturnedValue);

A68_VOID  KLAAOSF_fill(A68_VC  Dest, A68_CHAR  Source);

A68_INT  PLAAOSF_max(A68_INT  A, A68_INT  B);

A68_BITS  TLAAOSF_xor(A68_BITS  A, A68_BITS  B);

A68_LBITS  XLAAOSF_xor(A68_LBITS  A, A68_LBITS  B);

A68_INT  BMAAOSF_charinvec(A68_CHAR  C, A68_VC  S);

A68_INT  KMAAOSF_truncate(A68_CHAR  C, A68_VC  S);

A68_VOID  RMAAOSF_scanto(A68_CHAR  C, A68_VC  S, A68_VC  *ReturnedValue);

A68_VOID  WMAAOSF_before(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue);

A68_VOID  BNAAOSF_before(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue);

A68_VOID  FNAAOSF_uppercased(A68_VC  String, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  INAAOSF_generator(A68_BOOL  GNAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  SNAAOSF_capitalised(A68_VC  String, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VNAAOSF_generator(A68_BOOL  TNAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  GOAAOSF_stringvalue(A68_VC  String);

A68_VOID  ROAAOSF_whole(A68_INT  Val, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VOAAOSF_generator(A68_BOOL  TOAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JPAAOSF_lwhole(A68_LINT  Val, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NPAAOSF_generator(A68_BOOL  LPAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  BQAAOSF_hex(A68_LBITS  B, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FQAAOSF_generator(A68_BOOL  DQAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  TQAAOSF_vcdectoint(A68_INT * Ri, A68_VC  Num);

A68_BOOL  QRAAOSF_charinstring(A68_CHAR  C, A68_INT * I, A68_VC  S);

A68_VOID  WRAAOSF_xc(A68_INT  I, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  INAAOSF_generator(A68_BOOL  GNAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JNAAOSF_generator *)NonLocals)->x)
{ 
A68_VC  KNAAOSF;  /* clause result */
A68_VC  LNAAOSF;  /* OPERATORS - dynamic generator */
{ 
LNAAOSF.upb = NL(String).upb ;
( GNAAOSF_anonymous? A_VLOC(A68_CHAR ,LNAAOSF): A_VHEAP(A68_CHAR ,LNAAOSF) );
KNAAOSF = LNAAOSF;
} 
*ReturnedValue = (KNAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VNAAOSF_generator(A68_BOOL  TNAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WNAAOSF_generator *)NonLocals)->x)
{ 
A68_VC  XNAAOSF;  /* clause result */
A68_VC  YNAAOSF;  /* OPERATORS - dynamic generator */
{ 
YNAAOSF.upb = NL(String).upb ;
( TNAAOSF_anonymous? A_VLOC(A68_CHAR ,YNAAOSF): A_VHEAP(A68_CHAR ,YNAAOSF) );
XNAAOSF = YNAAOSF;
} 
*ReturnedValue = (XNAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VOAAOSF_generator(A68_BOOL  TOAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WOAAOSF_generator *)NonLocals)->x)
{ 
A68_INT  XOAAOSF;  /* clause result */
A68_VC  YOAAOSF;  /* clause result */
A68_VC  ZOAAOSF;  /* OPERATORS - dynamic generator */
{ 
if ( (NL(Width)<=0) )
{ 
XOAAOSF = 25;
} 
else
{ 
XOAAOSF = (NL(Width)+10);
} 
ZOAAOSF.upb = XOAAOSF ;
( TOAAOSF_anonymous? A_VLOC(A68_CHAR ,ZOAAOSF): A_VHEAP(A68_CHAR ,ZOAAOSF) );
YOAAOSF = ZOAAOSF;
} 
*ReturnedValue = (YOAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NPAAOSF_generator(A68_BOOL  LPAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OPAAOSF_generator *)NonLocals)->x)
{ 
A68_INT  PPAAOSF;  /* clause result */
A68_VC  QPAAOSF;  /* clause result */
A68_VC  RPAAOSF;  /* OPERATORS - dynamic generator */
{ 
if ( (NL(Width)<=0) )
{ 
PPAAOSF = 25;
} 
else
{ 
PPAAOSF = (NL(Width)+10);
} 
RPAAOSF.upb = PPAAOSF ;
( LPAAOSF_anonymous? A_VLOC(A68_CHAR ,RPAAOSF): A_VHEAP(A68_CHAR ,RPAAOSF) );
QPAAOSF = RPAAOSF;
} 
*ReturnedValue = (QPAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  FQAAOSF_generator(A68_BOOL  DQAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((GQAAOSF_generator *)NonLocals)->x)
{ 
A68_INT  HQAAOSF;  /* clause result */
A68_VC  IQAAOSF;  /* clause result */
A68_VC  JQAAOSF;  /* OPERATORS - dynamic generator */
{ 
if ( (NL(Width)<=0) )
{ 
HQAAOSF = 25;
} 
else
{ 
HQAAOSF = (NL(Width)+10);
} 
JQAAOSF.upb = HQAAOSF ;
( DQAAOSF_anonymous? A_VLOC(A68_CHAR ,JQAAOSF): A_VHEAP(A68_CHAR ,JQAAOSF) );
IQAAOSF = JQAAOSF;
} 
*ReturnedValue = (IQAAOSF);
return;
} 
#undef NL

A68_BITS * PKAAOSF_orab(A68_BITS * L, A68_BITS  R)
{ 
A68_BITS * QKAAOSF;  /* clause result */
A_PROC_ENTRY(orab);
(*L) = (A68_BITS )((*L)|R) ;
QKAAOSF = L;
A_PROC_EXIT(orab);
return( QKAAOSF );
} 
#undef NL

A68_INT * TKAAOSF_becomes(A68_INT * I, A68_VC  Slice)
{ 
A68_35  UKAAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
union {  /* BIOP 99 */
A68_35   source;
A68_VC   destination;
} VKAAOSF; 
A68_VC  WKAAOSF;  /* YIELD */
A68_INT * XKAAOSF;  /* clause result */
A_PROC_ENTRY(becomes);
 /* line 61: */
{ 
VKAAOSF.source = A_VEC(UKAAOSF,I,A68_INT *) ;
WKAAOSF = (VKAAOSF.destination) ;
A_VASSIGN2(Slice,WKAAOSF,A68_CHAR );
XKAAOSF = I;
} 
A_PROC_EXIT(becomes);
return( XKAAOSF );
} 
#undef NL

A68_VOID  ALAAOSF_becomes(A68_VC  Slice, A68_INT  I, A68_VC  *ReturnedValue)
{ 
A68_VC  BLAAOSF;  /* clause result */
union {  /* BIOP 99 */
A68_INT   source;
A68_57   destination;
} CLAAOSF; 
A68_VC  DLAAOSF;  /* OPERATORS - istruct -> vector */
A68_57  ELAAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  FLAAOSF;  /* OPERATORS - trim index */
A68_VC  GLAAOSF;  /* OPERATORS - trim index */
A68_VC  HLAAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(becomes);
 /* line 65: */
 /* line 66: */
 /* line 67: */
CLAAOSF.source = I ;
ELAAOSF = (CLAAOSF.destination) ;
FLAAOSF = A_HISVEC(DLAAOSF,ELAAOSF,4,A68_CHAR ) ;
HLAAOSF = A_VTRIM(GLAAOSF,(FLAAOSF),A_VTSCRIPT(&(GLAAOSF.upb),(FLAAOSF).upb,(5-Slice.upb),(FLAAOSF).upb)) ;
A_VASSIGN2(HLAAOSF,Slice,A68_CHAR ) ;
BLAAOSF = Slice;
A_PROC_EXIT(becomes);
*ReturnedValue = (BLAAOSF);
return;
} 
#undef NL

A68_VOID  KLAAOSF_fill(A68_VC  Dest, A68_CHAR  Source)
{ 
A68_CHAR * LLAAOSF_c;
A68_INT  MLAAOSF;  /* forall loop counter */
A_PROC_ENTRY(fill);
 /* line 81: */
MLAAOSF = Dest.upb -1;
LLAAOSF_c = Dest.data;
for (;MLAAOSF-- >= 0;
(LLAAOSF_c++
) )
{
(*LLAAOSF_c) = Source;
}
A_PROC_EXIT(fill);
return;
} 
#undef NL

A68_INT  PLAAOSF_max(A68_INT  A, A68_INT  B)
{ 
A68_INT  QLAAOSF;  /* clause result */
A_PROC_ENTRY(max);
if ( (A>B) )
{ 
QLAAOSF = A;
} 
else
{ 
QLAAOSF = B;
} 
A_PROC_EXIT(max);
return( QLAAOSF );
} 
#undef NL

A68_BITS  TLAAOSF_xor(A68_BITS  A, A68_BITS  B)
{ 
A68_BITS  ULAAOSF;  /* clause result */
A_PROC_ENTRY(xor);
ULAAOSF = (A68_BITS )((A68_BITS )(A&~B)|(A68_BITS )(~A&B));
A_PROC_EXIT(xor);
return( ULAAOSF );
} 
#undef NL

A68_LBITS  XLAAOSF_xor(A68_LBITS  A, A68_LBITS  B)
{ 
A68_LBITS  YLAAOSF;  /* clause result */
A_PROC_ENTRY(xor);
YLAAOSF = (A68_LBITS )((A68_LBITS )(A&~B)|(A68_LBITS )(~A&B));
A_PROC_EXIT(xor);
return( YLAAOSF );
} 
#undef NL

A68_INT  BMAAOSF_charinvec(A68_CHAR  C, A68_VC  S)
{ 
A68_INT  CMAAOSF_position;
A68_INT  DMAAOSF_i;
A68_INT  EMAAOSF;  /* to part of loop */
A68_BOOL  FMAAOSF;  /* clause result */
A68_BOOL  GMAAOSF;  /* clause result */
A68_INT  HMAAOSF;  /* clause result */
A_PROC_ENTRY(charinvec);
 /* line 95: */
 /* line 96: */
{ 
CMAAOSF_position = 0;
 /* line 97: */
 /* line 98: */
EMAAOSF = S.upb;
for ( DMAAOSF_i = 1;
DMAAOSF_i <= EMAAOSF;
DMAAOSF_i += 1 )
{ 
 /* line 99: */
 /* line 100: */
if ( (C==A_VINDEX(S,DMAAOSF_i)) )
{ 
CMAAOSF_position = DMAAOSF_i;
 /* line 101: */
FMAAOSF = A68_FALSE;
} 
else
{ 
 /* line 102: */
 /* line 103: */
FMAAOSF = A68_TRUE;
} 
 /* line 105: */
GMAAOSF = FMAAOSF;
if ( !GMAAOSF ) break;
/*SKIP*/;
}
 /* line 106: */
 /* line 107: */
HMAAOSF = CMAAOSF_position;
} 
A_PROC_EXIT(charinvec);
return( HMAAOSF );
} 
#undef NL

A68_INT  KMAAOSF_truncate(A68_CHAR  C, A68_VC  S)
{ 
A68_INT  LMAAOSF_i;
A68_INT  MMAAOSF;  /* by part of loop */
A68_INT  NMAAOSF;  /* loop control */
A68_INT  OMAAOSF;  /* clause result */
A_PROC_ENTRY(truncate);
 /* line 110: */
{ 
LMAAOSF_i = S.upb;
MMAAOSF = (-1);
for ( NMAAOSF = LMAAOSF_i;
( MMAAOSF > 0 && NMAAOSF <= 1) ||
( MMAAOSF < 0 && NMAAOSF >= 1) ||
( MMAAOSF == 0 ) ;
NMAAOSF += MMAAOSF )
{ 
if ( !((A_VINDEX(S,LMAAOSF_i)==C)) ) break;
LMAAOSF_i-=1;
}
OMAAOSF = LMAAOSF_i;
} 
A_PROC_EXIT(truncate);
return( OMAAOSF );
} 
#undef NL

A68_VOID  RMAAOSF_scanto(A68_CHAR  C, A68_VC  S, A68_VC  *ReturnedValue)
{ 
A68_VC  SMAAOSF;  /* clause result */
A68_VC  TMAAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(scanto);
 /* line 113: */
SMAAOSF = A_VTRIM(TMAAOSF,(S),A_VTSCRIPT(&(TMAAOSF.upb),(S).upb,1,KMAAOSF_truncate(C, S)));
A_PROC_EXIT(scanto);
*ReturnedValue = (SMAAOSF);
return;
} 
#undef NL

A68_VOID  WMAAOSF_before(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_VC  XMAAOSF;  /* clause result */
A68_VC  YMAAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(before);
 /* line 116: */
XMAAOSF = A_VTRIM(YMAAOSF,(S),A_VTSCRIPT(&(YMAAOSF.upb),(S).upb,1,KMAAOSF_truncate(C, S)));
A_PROC_EXIT(before);
*ReturnedValue = (XMAAOSF);
return;
} 
#undef NL

A68_VOID  BNAAOSF_before(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_VC  CNAAOSF;  /* clause result */
A68_VC  DNAAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(before);
 /* line 118: */
CNAAOSF = A_VTRIM(DNAAOSF,(S),A_VTSCRIPT(&(DNAAOSF.upb),(S).upb,1,KMAAOSF_truncate(C, S)));
A_PROC_EXIT(before);
*ReturnedValue = (CNAAOSF);
return;
} 
#undef NL

A68_VOID  FNAAOSF_uppercased(A68_VC  String, A68_VC  *ReturnedValue)
{ 
A68_46  HNAAOSF_generator;   /* proc value of non-global proc */
A68_VC  MNAAOSF;  /* avoid structure result */
A68_VC  NNAAOSF_uppercasedstring;
A68_CHAR * ONAAOSF_c;
A68_INT  PNAAOSF;  /* forall loop counter */
A68_VC  QNAAOSF;  /* clause result */
A_PROC_ENTRY(uppercased);
 /* line 127: */
 /* line 128: */
{ 
A_CLOSURE( HNAAOSF_generator, INAAOSF_generator, JNAAOSF_generator );
(( JNAAOSF_generator * ) ( HNAAOSF_generator.nonlocals )) -> String = String;
A_CALLPROC(HNAAOSF_generator,(A68_FALSE, &MNAAOSF),(A68_FALSE, &MNAAOSF,(HNAAOSF_generator).nonlocals));
NNAAOSF_uppercasedstring = MNAAOSF;
A_VASSIGN2(String,NNAAOSF_uppercasedstring,A68_CHAR );
 /* line 129: */
 /* line 130: */
PNAAOSF = NNAAOSF_uppercasedstring.upb -1;
ONAAOSF_c = NNAAOSF_uppercasedstring.data;
for (;PNAAOSF-- >= 0;
(ONAAOSF_c++
) )
{
 /* line 131: */
 /* line 132: */
 /* line 133: */
if ( (((*ONAAOSF_c)>='a')&((*ONAAOSF_c)<='z')) )
{ 
 /* line 134: */
 /* line 135: */
(*ONAAOSF_c) = (A68_SSBITS)((A68_INT)(unsigned char)(*ONAAOSF_c)-(A68_INT )040U);
} 
}
 /* line 136: */
 /* line 137: */
QNAAOSF = NNAAOSF_uppercasedstring;
} 
A_PROC_EXIT(uppercased);
*ReturnedValue = (QNAAOSF);
return;
} 
#undef NL

A68_VOID  SNAAOSF_capitalised(A68_VC  String, A68_VC  *ReturnedValue)
{ 
A68_46  UNAAOSF_generator;   /* proc value of non-global proc */
A68_VC  ZNAAOSF;  /* avoid structure result */
A68_VC  AOAAOSF_capitalisedstring;
A68_INT  BOAAOSF;  /* YIELD */
A68_CHAR * COAAOSF_c;
A68_BOOL  DOAAOSF;  /* clause result */
A68_VC  EOAAOSF;  /* clause result */
A_PROC_ENTRY(capitalised);
 /* line 143: */
 /* line 144: */
{ 
A_CLOSURE( UNAAOSF_generator, VNAAOSF_generator, WNAAOSF_generator );
(( WNAAOSF_generator * ) ( UNAAOSF_generator.nonlocals )) -> String = String;
A_CALLPROC(UNAAOSF_generator,(A68_FALSE, &ZNAAOSF),(A68_FALSE, &ZNAAOSF,(UNAAOSF_generator).nonlocals));
AOAAOSF_capitalisedstring = ZNAAOSF;
A_VASSIGN2(String,AOAAOSF_capitalisedstring,A68_CHAR );
 /* line 145: */
 /* line 146: */
{ 
BOAAOSF = 1 ;
COAAOSF_c = (&A_VINDEX(AOAAOSF_capitalisedstring,BOAAOSF));
 /* line 147: */
 /* line 148: */
 /* line 149: */
DOAAOSF = (((*COAAOSF_c)>='a')&((*COAAOSF_c)<='z'));
if ( DOAAOSF )
{ 
 /* line 150: */
(*COAAOSF_c) = (A68_SSBITS)((A68_INT)(unsigned char)(*COAAOSF_c)-(A68_INT )040U);
} 
} 
 /* line 151: */
 /* line 152: */
EOAAOSF = AOAAOSF_capitalisedstring;
} 
A_PROC_EXIT(capitalised);
*ReturnedValue = (EOAAOSF);
return;
} 
#undef NL

A68_INT  GOAAOSF_stringvalue(A68_VC  String)
{ 
union {  /* BIOP 99 */
A68_INT   source;
A68_57   destination;
} IOAAOSF; 
A68_57  HOAAOSF_value;
A68_VC  JOAAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  KOAAOSF;  /* OPERATORS - trim index */
A68_VC  LOAAOSF;  /* OPERATORS - trim index */
A68_VC  MOAAOSF;  /* YIELD */
A68_INT  NOAAOSF;  /* clause result */
union {  /* BIOP 99 */
A68_57   source;
A68_INT   destination;
} OOAAOSF; 
A_PROC_ENTRY(stringvalue);
 /* line 155: */
 /* line 156: */
{ 
IOAAOSF.source = 0 ;
HOAAOSF_value = (IOAAOSF.destination);
 /* line 157: */
KOAAOSF = A_ISVEC(JOAAOSF,(&HOAAOSF_value),4,A68_CHAR ) ;
MOAAOSF = A_VTRIM(LOAAOSF,(KOAAOSF),A_VTSCRIPT(&(LOAAOSF.upb),(KOAAOSF).upb,(5-String.upb),(KOAAOSF).upb)) ;
A_VASSIGN2(String,MOAAOSF,A68_CHAR );
 /* line 158: */
 /* line 159: */
OOAAOSF.source = HOAAOSF_value ;
NOAAOSF = (OOAAOSF.destination);
} 
A_PROC_EXIT(stringvalue);
return( NOAAOSF );
} 
#undef NL

A68_VOID  ROAAOSF_whole(A68_INT  Val, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_46  UOAAOSF_generator;   /* proc value of non-global proc */
A68_VC  APAAOSF;  /* avoid structure result */
A68_VC  BPAAOSF_result;
A68_VC  EPAAOSF;  /* clause result */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_31 *  destination;
} FPAAOSF; 
A68_VC  GPAAOSF;  /* avoid structure result */
A_PROC_ENTRY(whole);
 /* line 165: */
 /* line 167: */
{ 
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 172: */
A_CLOSURE( UOAAOSF_generator, VOAAOSF_generator, WOAAOSF_generator );
(( WOAAOSF_generator * ) ( UOAAOSF_generator.nonlocals )) -> Width = Width;
A_CALLPROC(UOAAOSF_generator,(A68_FALSE, &APAAOSF),(A68_FALSE, &APAAOSF,(UOAAOSF_generator).nonlocals));
BPAAOSF_result = APAAOSF;
 /* line 173: */
SOAAOSF_sprintf(BPAAOSF_result, DPAAOSF, Width, Val);
 /* line 174: */
 /* line 175: */
FPAAOSF.source = UAAAOSF_vctocharptr(BPAAOSF_result) ;
MAAAOSF_cstringtorvc( (FPAAOSF.destination), &GPAAOSF );
EPAAOSF = GPAAOSF;
} 
A_PROC_EXIT(whole);
*ReturnedValue = (EPAAOSF);
return;
} 
#undef NL

A68_VOID  JPAAOSF_lwhole(A68_LINT  Val, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_46  MPAAOSF_generator;   /* proc value of non-global proc */
A68_VC  SPAAOSF;  /* avoid structure result */
A68_VC  TPAAOSF_result;
A68_VC  WPAAOSF;  /* clause result */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_31 *  destination;
} XPAAOSF; 
A68_VC  YPAAOSF;  /* avoid structure result */
A_PROC_ENTRY(lwhole);
 /* line 178: */
 /* line 180: */
{ 
 /* line 181: */
 /* line 182: */
 /* line 183: */
 /* line 185: */
A_CLOSURE( MPAAOSF_generator, NPAAOSF_generator, OPAAOSF_generator );
(( OPAAOSF_generator * ) ( MPAAOSF_generator.nonlocals )) -> Width = Width;
A_CALLPROC(MPAAOSF_generator,(A68_FALSE, &SPAAOSF),(A68_FALSE, &SPAAOSF,(MPAAOSF_generator).nonlocals));
TPAAOSF_result = SPAAOSF;
 /* line 186: */
KPAAOSF_sprintf(TPAAOSF_result, VPAAOSF, Width, Val);
 /* line 187: */
 /* line 188: */
XPAAOSF.source = UAAAOSF_vctocharptr(TPAAOSF_result) ;
MAAAOSF_cstringtorvc( (XPAAOSF.destination), &YPAAOSF );
WPAAOSF = YPAAOSF;
} 
A_PROC_EXIT(lwhole);
*ReturnedValue = (WPAAOSF);
return;
} 
#undef NL

A68_VOID  BQAAOSF_hex(A68_LBITS  B, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_46  EQAAOSF_generator;   /* proc value of non-global proc */
A68_VC  KQAAOSF;  /* avoid structure result */
A68_VC  LQAAOSF_result;
A68_VC  OQAAOSF;  /* clause result */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_31 *  destination;
} PQAAOSF; 
A68_VC  QQAAOSF;  /* avoid structure result */
A_PROC_ENTRY(hex);
 /* line 191: */
 /* line 193: */
{ 
 /* line 194: */
 /* line 195: */
 /* line 196: */
 /* line 198: */
A_CLOSURE( EQAAOSF_generator, FQAAOSF_generator, GQAAOSF_generator );
(( GQAAOSF_generator * ) ( EQAAOSF_generator.nonlocals )) -> Width = Width;
A_CALLPROC(EQAAOSF_generator,(A68_FALSE, &KQAAOSF),(A68_FALSE, &KQAAOSF,(EQAAOSF_generator).nonlocals));
LQAAOSF_result = KQAAOSF;
 /* line 199: */
CQAAOSF_sprintf(LQAAOSF_result, NQAAOSF, Width, B);
 /* line 201: */
 /* line 202: */
PQAAOSF.source = UAAAOSF_vctocharptr(LQAAOSF_result) ;
MAAAOSF_cstringtorvc( (PQAAOSF.destination), &QQAAOSF );
OQAAOSF = QQAAOSF;
} 
A_PROC_EXIT(hex);
*ReturnedValue = (OQAAOSF);
return;
} 
#undef NL

A68_BOOL  TQAAOSF_vcdectoint(A68_INT * Ri, A68_VC  Num)
{ 
A68_INT  XQAAOSF_result;
A68_INT  YQAAOSF_sign;
A68_INT  ZQAAOSF_i;
A68_INT  ARAAOSF_length;
A68_BOOL  BRAAOSF;  /* optbool result */
A68_CHAR  CRAAOSF_c;
A68_BOOL  DRAAOSF;  /* clause result */
A68_BOOL  ERAAOSF;  /* optbool result */
A68_CHAR  FRAAOSF_c;
A68_BOOL  GRAAOSF;  /* optbool result */
A68_CHAR  HRAAOSF_c;
A68_VC  IRAAOSF;  /* OPERATORS - trim index */
A68_VC  JRAAOSF;  /* forall yield */
A68_CHAR * KRAAOSF;  /* forall control - []x */
A68_INT  LRAAOSF;  /* forall loop counter */
A68_BOOL  MRAAOSF;  /* clause result */
A_PROC_ENTRY(vcdectoint);
 /* line 213: */
 /* line 214: */
{ 
XQAAOSF_result = 0;
YQAAOSF_sign = 1;
 /* line 216: */
 /* line 217: */
 /* line 218: */
if ( (Num.upb==0) )
{ 
 /* line 219: */
 /* line 220: */
goto WQAAOSF_error;
} 
else
{ 
ZQAAOSF_i = 1;
 /* line 221: */
ARAAOSF_length = Num.upb;
 /* line 224: */
for ( ;; )
{ 
BRAAOSF = (ZQAAOSF_i<=ARAAOSF_length);
if ( BRAAOSF )
{BRAAOSF = (A_VINDEX(Num,ZQAAOSF_i)==' ');
}
if ( !(BRAAOSF) ) break;
ZQAAOSF_i+=1;
}
 /* line 225: */
if ( (ZQAAOSF_i>ARAAOSF_length) )
{ 
goto WQAAOSF_error;
} 
 /* line 228: */
{ 
CRAAOSF_c = A_VINDEX(Num,ZQAAOSF_i);
 /* line 229: */
DRAAOSF = (CRAAOSF_c=='-');
if ( DRAAOSF )
{ 
YQAAOSF_sign = (-1);
 /* line 230: */
ZQAAOSF_i+=1;
} 
else
{ 
 /* line 231: */
if ( (CRAAOSF_c=='+') )
{ 
 /* line 232: */
ZQAAOSF_i+=1;
} 
} 
} 
 /* line 233: */
if ( (ZQAAOSF_i>ARAAOSF_length) )
{ 
goto WQAAOSF_error;
} 
 /* line 237: */
for ( ;; )
{ 
 /* line 238: */
ERAAOSF = (ZQAAOSF_i<=ARAAOSF_length);
if ( ERAAOSF )
{ /* line 239: */
ERAAOSF = (A_VINDEX(Num,ZQAAOSF_i)!=' ');
}
 /* line 240: */
if ( !(ERAAOSF) ) break;
FRAAOSF_c = A_VINDEX(Num,ZQAAOSF_i);
 /* line 241: */
GRAAOSF = (FRAAOSF_c>='0');
if ( GRAAOSF )
{ /* line 242: */
GRAAOSF = (FRAAOSF_c<='9');
}
 /* line 243: */
if ( GRAAOSF )
{ 
XQAAOSF_result = (((10*XQAAOSF_result)+(A68_INT)(unsigned char)FRAAOSF_c)-(A68_INT)(unsigned char)'0');
 /* line 244: */
 /* line 245: */
ZQAAOSF_i+=1;
} 
else
{ 
 /* line 246: */
 /* line 247: */
goto WQAAOSF_error;
} 
}
 /* line 250: */
JRAAOSF = A_VTRIM(IRAAOSF,(Num),A_VTSCRIPT(&(IRAAOSF.upb),(Num).upb,ZQAAOSF_i,(Num).upb)) ;
LRAAOSF = JRAAOSF.upb -1;
KRAAOSF = JRAAOSF.data;
for (;LRAAOSF-- >= 0;
(KRAAOSF++
) )
{
HRAAOSF_c = *KRAAOSF;
if ( (HRAAOSF_c!=' ') )
{ 
goto WQAAOSF_error;
} 
}
 /* line 251: */
} 
 /* line 252: */
(*Ri) = (XQAAOSF_result*YQAAOSF_sign);
 /* line 253: */
 /* line 254: */
 /* line 255: */
MRAAOSF = A68_TRUE;
goto UQAAOSF;
WQAAOSF_error:
 /* line 256: */
 /* line 257: */
MRAAOSF = A68_FALSE;
UQAAOSF: ;
} 
A_PROC_EXIT(vcdectoint);
return( MRAAOSF );
} 
#undef NL

A68_BOOL  QRAAOSF_charinstring(A68_CHAR  C, A68_INT * I, A68_VC  S)
{ 
A68_BOOL  RRAAOSF_found;
A68_INT  SRAAOSF_k;
A68_INT  TRAAOSF;  /* to part of loop */
A68_BOOL  URAAOSF;  /* clause result */
A_PROC_ENTRY(charinstring);
 /* line 260: */
 /* line 261: */
{ 
RRAAOSF_found = A68_FALSE;
(*I) = 0;
 /* line 262: */
 /* line 263: */
TRAAOSF = S.upb;
for ( SRAAOSF_k =  1;
SRAAOSF_k <= TRAAOSF;
SRAAOSF_k += 1 )
{ 
 /* line 264: */
if ( !(!RRAAOSF_found) ) break;
if ( (C==A_VINDEX(S,SRAAOSF_k)) )
{ 
(*I) = SRAAOSF_k;
RRAAOSF_found = A68_TRUE;
} 
}
 /* line 265: */
 /* line 266: */
URAAOSF = RRAAOSF_found;
} 
A_PROC_EXIT(charinstring);
return( URAAOSF );
} 
#undef NL

A68_VOID  WRAAOSF_xc(A68_INT  I, A68_VC  *ReturnedValue)
{ 
A68_VC  XRAAOSF;  /* clause result */
A68_VC  YRAAOSF;  /* avoid structure result */
A_PROC_ENTRY(xc);
ROAAOSF_whole( I, 0, &YRAAOSF );
XRAAOSF = YRAAOSF;
A_PROC_EXIT(xc);
*ReturnedValue = (XRAAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void IKAAOSF(void)   /* initialise DECS usefulops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","usefulops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/strops.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCAAOSF();   /* USE strops */
BAAAOSF();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/usefulops.a68";
A_config.translation_time = "Wed May  5 17:38:58 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "HKAAOSF (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:58 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS usefulops);
UEAALIB_a68config(LGAALIB_configinfo, MKAAOSF);
 /* line 50: */
 /* line 52: */
 /* line 54: */
 /* line 56: */
 /* line 58: */
 /* line 60: */
 /* line 63: */
 /* line 77: */
 /* line 79: */
 /* line 80: */
 /* line 83: */
 /* line 84: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 90: */
 /* line 91: */
 /* line 109: */
 /* line 112: */
 /* line 115: */
 /* line 117: */
 /* line 123: */
 /* line 139: */
 /* line 154: */
 /* line 164: */
 /* line 177: */
 /* line 190: */
 /* line 208: */
 /* line 259: */
 /* line 269: */
 /* line 271: */
 /* line 273: */
 /* line 294: */
/*SKIP*/;
A_PROC_EXIT(DECS usefulops);
} 
#undef NL
/* end of translation of usefulops.a68 */
