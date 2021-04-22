/* UNAME:ZLBAOSF */
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

A_PROCEDURE(A68_VOID ,A68t46,(A68_VC *),(A68_VC *,void *));
typedef struct A68t46  A68_46 ;    /* PROC REF MODE26 */
struct A68t48 ;
struct A68t49 ;

A_PROCEDURE(A68_VOID ,A68t47,(A68_INT ,struct A68t48 ,struct A68t49 ),(A68_INT ,struct A68t48 ,struct A68t49 ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(INT,MODE48,MODE49) VOID */
A_VECTOR(A68_VC ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t50 ,struct A68t48 ),(struct A68t50 ,struct A68t48 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE50,MODE48) VOID */
struct A68t50{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t51 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,REF MODE51,BITS)  */
A_VECTOR(struct A68t53 ,A68t52);
typedef struct A68t52  A68_52 ;    /* VECTOR [] MODE53 */
struct A68t53{
struct A68t50  Msgno;
A68_VC  Text;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(MODE50,REF MODE26)  */
struct A68t51{
A68_VC  Name;
struct A68t52  Messages;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(REF MODE26,REF MODE52)  */

A_PROCEDURE(A68_INT *,A68t54,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t55,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t56,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t57,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t58,(struct A68t48 ,A68_VC *),(struct A68t48 ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE48) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t59,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t62);
typedef struct A68t62  A68_62 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t62 ,A68t63,(A68_INT ),(A68_INT ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(INT) MODE62 */

A_PROCEDURE(A68_INT ,A68t64,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t65,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t66,(A68_VC ),(A68_VC ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t67,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t68,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t69,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t70,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t73,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t74,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t75,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t76,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ),(A68_VC ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t79,(struct A68t78 ),(struct A68t78 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE78) VOID */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,50,A68t81);
typedef struct A68t81  A68_81 ;    /* STRUCT 50 CHAR */

A_PROCEDURE(A68_INT ,A68t82,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26,INT) INT */

A_PROCEDURE(A68_VOID ,A68t83,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(BITS) VOID */
A_ISTRUCT(A68_CHAR ,13,A68t84);
typedef struct A68t84  A68_84 ;    /* STRUCT 13 CHAR */
struct A68t85{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_3)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t86,(A68_BOOL ,struct A68t85 *),(A68_BOOL ,struct A68t85 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(BOOL) MODE85 */
#define A68_87  A68_VC 
#define A68t87 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_88  A68_85 
#define A68t88 A68t85            /* STRUCT(MODE87,INT)  */
A_VECTOR(struct A68t85 ,A68t89);
typedef struct A68t89  A68_89 ;    /* VECTOR [] MODE85 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t89 ,struct A68t49 ),(struct A68t89 ,struct A68t49 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE89,MODE49) VOID */
A_ISTRUCT(A68_VC ,2,A68t91);
typedef struct A68t91  A68_91 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_INT ,A68t92,(A68_VC ,struct A68t49 ),(A68_VC ,struct A68t49 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE26,MODE49) INT */
A_ISTRUCT(A68_CHAR ,12,A68t93);
typedef struct A68t93  A68_93 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t94);
typedef struct A68t94  A68_94 ;    /* STRUCT 18 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from usefulops --- */
/* --- End of imports from usefulops --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_VOID  SEBAOSF_osifmessage(A68_INT ,struct A68t48 ,struct A68t49 );
extern A68_49  TIBAOSF_global_msg;
/* --- End of imports from oserrors --- */


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
/* --- End of imports from cif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IKAAOSF(void);   /* usefulops */
extern void MCBAOSF(void);   /* oserrors */
extern void BAAAOSF(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_81   DMBAOSF = {"$Id: osgc.a68,v 1.2 2002-02-04 09:26:51 sian Exp $"}; 
A_GISVEC(A68_VC ,EMBAOSF,DMBAOSF,50)
#include <algol68/Alibrary.h>
#define A_PARAM(name,value) A_int_INT(Agc_param(A_VC_charptr(name),A_INT_int(value)))

#define FMBAOSF_gc_param A_PARAM
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
A68_48  IMBAOSF_gc_diag_options;
static A68_84   NMBAOSF = {"gc_statistics"}; 
A_GISVEC(A68_VC ,OMBAOSF,NMBAOSF,13)
A68_86  QMBAOSF_anonymous;
static A68_62   INBAOSF = {"SET "}; 
A_GISVEC(A68_VC ,JNBAOSF,INBAOSF,4)
static A68_84   MNBAOSF = {"set_gc_params"}; 
A_GISVEC(A68_VC ,NNBAOSF,MNBAOSF,13)
static A68_62   SNBAOSF = {"GET "}; 
A_GISVEC(A68_VC ,TNBAOSF,SNBAOSF,4)
static A68_93   XNBAOSF = {"get_gc_param"}; 
A_GISVEC(A68_VC ,YNBAOSF,XNBAOSF,12)
#include <algol68/Alibrary.h>

#define BOBAOSF_alwayscollect A_ALWAYS_COLLECT
#include <algol68/Alibrary.h>

#define COBAOSF_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include <algol68/Alibrary.h>

#define DOBAOSF_defaultpolicy A_DEFAULT_POLICY
static A68_INT  EOBAOSF_savedpolicy;
static A68_94   GOBAOSF = {"THRESHOLD FUNCTION"}; 
A_GISVEC(A68_VC ,HOBAOSF,GOBAOSF,18)
static A68_94   JOBAOSF = {"THRESHOLD FUNCTION"}; 
A_GISVEC(A68_VC ,KOBAOSF,JOBAOSF,18)
static A68_94   OOBAOSF = {"THRESHOLD FUNCTION"}; 
A_GISVEC(A68_VC ,POBAOSF,OOBAOSF,18)

A68_VOID  KMBAOSF_set_gc_diagnostics(A68_BITS  Options);

A68_VOID  MMBAOSF_gc_statistics(A68_78  Line);

A_STATIC A68_VOID  SMBAOSF_generator(A68_BOOL  RMBAOSF_anonymous, A68_85  *ReturnedValue);

A_STATIC A68_VOID  UMBAOSF_generator(A68_BOOL  TMBAOSF_anonymous, A68_VC  *ReturnedValue);

A68_VOID  ENBAOSF_set_gc_params(A68_89  Gcparams, A68_49  Msg);

A68_INT  RNBAOSF_get_gc_param(A68_VC  Name, A68_49  Msg);

A68_VOID  FOBAOSF_disable_garbage_collector(void);

A68_VOID  MOBAOSF_enable_garbage_collector(void);

A_STATIC A68_VOID  UMBAOSF_generator(A68_BOOL  TMBAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  VMBAOSF;  /* clause result */
A68_VC  WMBAOSF;  /* OPERATORS - dynamic generator */
{ 
WMBAOSF.upb = 0 ;
( TMBAOSF_anonymous? A_VLOC(A68_CHAR ,WMBAOSF): A_VHEAP(A68_CHAR ,WMBAOSF) );
VMBAOSF = WMBAOSF;
} 
*ReturnedValue = (VMBAOSF);
return;
} 
#undef NL

A68_VOID  KMBAOSF_set_gc_diagnostics(A68_BITS  Options)
{ 
A_PROC_ENTRY(set_gc_diagnostics);
 /* line 72: */
/*SKIP*/;
A_PROC_EXIT(set_gc_diagnostics);
return;
} 
#undef NL

A68_VOID  MMBAOSF_gc_statistics(A68_78  Line)
{ 
A68_48  PMBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(gc_statistics);
 /* line 78: */
{ 
SEBAOSF_osifmessage(100, A_HVEC(PMBAOSF,OMBAOSF,A68_VC ), TIBAOSF_global_msg);
/*SKIP*/;
} 
A_PROC_EXIT(gc_statistics);
return;
} 
#undef NL

A_STATIC A68_VOID  SMBAOSF_generator(A68_BOOL  RMBAOSF_anonymous, A68_85  *ReturnedValue)
{ 
A68_88  XMBAOSF_anonymous;
A68_VC  YMBAOSF;  /* avoid structure result */
A68_87 * ZMBAOSF;  /* YIELD */
A68_85  ANBAOSF;  /* clause result */
{ 
UMBAOSF_generator( RMBAOSF_anonymous, &YMBAOSF );
ZMBAOSF = (&((&XMBAOSF_anonymous)->Name)) ;
(*ZMBAOSF) = YMBAOSF;
ANBAOSF = XMBAOSF_anonymous;
} 
*ReturnedValue = (ANBAOSF);
return;
} 
#undef NL

A68_VOID  ENBAOSF_set_gc_params(A68_89  Gcparams, A68_49  Msg)
{ 
A68_85  FNBAOSF_p;
A68_85 * GNBAOSF;  /* forall control - []x */
A68_INT  HNBAOSF;  /* forall loop counter */
A68_VC  KNBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_91  LNBAOSF;  /* collateral clause result */
A68_48  ONBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(set_gc_params);
 /* line 86: */
 /* line 87: */
HNBAOSF = Gcparams.upb -1;
GNBAOSF = Gcparams.data;
for (;HNBAOSF-- >= 0;
(GNBAOSF++
) )
{
FNBAOSF_p = *GNBAOSF;
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 91: */
if ( (FMBAOSF_gc_param(A_VC_PLUS(A_VC_PLUS(JNBAOSF,FNBAOSF_p.Name),A_HVEC(KNBAOSF,'\000',A68_CHAR )), FNBAOSF_p.Value)!=FNBAOSF_p.Value) )
{ 
LNBAOSF.data[0] = NNBAOSF;
LNBAOSF.data[1] = FNBAOSF_p.Name;
 /* line 92: */
 /* line 93: */
SEBAOSF_osifmessage(99, A_HISVEC(ONBAOSF,LNBAOSF,2,A68_VC ), Msg);
} 
}
A_PROC_EXIT(set_gc_params);
return;
} 
#undef NL

A68_INT  RNBAOSF_get_gc_param(A68_VC  Name, A68_49  Msg)
{ 
A68_VC  UNBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  VNBAOSF_value;
A68_91  WNBAOSF;  /* collateral clause result */
A68_48  ZNBAOSF;  /* OPERATORS - istruct -> vector */
A68_INT  AOBAOSF;  /* clause result */
A_PROC_ENTRY(get_gc_param);
 /* line 96: */
 /* line 97: */
{ 
VNBAOSF_value = FMBAOSF_gc_param(A_VC_PLUS(A_VC_PLUS(TNBAOSF,Name),A_HVEC(UNBAOSF,'\000',A68_CHAR )), 0);
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 101: */
if ( (VNBAOSF_value==(-1)) )
{ 
WNBAOSF.data[0] = YNBAOSF;
WNBAOSF.data[1] = Name;
 /* line 102: */
SEBAOSF_osifmessage(99, A_HISVEC(ZNBAOSF,WNBAOSF,2,A68_VC ), Msg);
} 
 /* line 103: */
 /* line 104: */
AOBAOSF = VNBAOSF_value;
} 
A_PROC_EXIT(get_gc_param);
return( AOBAOSF );
} 
#undef NL

A68_VOID  FOBAOSF_disable_garbage_collector(void)
{ 
A68_85  IOBAOSF;  /* collateral clause result */
A68_89  LOBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(disable_garbage_collector);
{ 
EOBAOSF_savedpolicy = RNBAOSF_get_gc_param(HOBAOSF, TIBAOSF_global_msg);
 /* line 115: */
IOBAOSF.Name = KOBAOSF;
IOBAOSF.Value = COBAOSF_alwaysgrowheap;
 /* line 116: */
ENBAOSF_set_gc_params(A_HVEC(LOBAOSF,IOBAOSF,A68_85 ), TIBAOSF_global_msg);
} 
A_PROC_EXIT(disable_garbage_collector);
return;
} 
#undef NL

A68_VOID  MOBAOSF_enable_garbage_collector(void)
{ 
A68_85  NOBAOSF;  /* collateral clause result */
A68_89  QOBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(enable_garbage_collector);
NOBAOSF.Name = POBAOSF;
NOBAOSF.Value = EOBAOSF_savedpolicy;
ENBAOSF_set_gc_params(A_HVEC(QOBAOSF,NOBAOSF,A68_85 ), TIBAOSF_global_msg);
A_PROC_EXIT(enable_garbage_collector);
return;
} 
#undef NL
 /* line 1: */
 /* line 5: */
void AMBAOSF(void)   /* initialise DECS osgc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","osgc.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/usefulops.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/oserrors.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_48  HMBAOSF;  /* OPERATORS - vacuum */
A68_86  BNBAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IKAAOSF();   /* USE usefulops */
MCBAOSF();   /* USE oserrors */
BAAAOSF();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/osgc.a68";
A_config.translation_time = "Sun Apr 18 20:07:49 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "ZLBAOSF (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:49 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osgc);
UEAALIB_a68config(LGAALIB_configinfo, EMBAOSF);
 /* line 55: */
 /* line 56: */
 /* line 57: */
 /* line 58: */
 /* line 63: */
 /* line 64: */
 /* line 66: */
IMBAOSF_gc_diag_options = A_VVAC(HMBAOSF);
 /* line 68: */
 /* line 74: */
 /* line 80: */
BNBAOSF.fn.fn_global = SMBAOSF_generator;
BNBAOSF.nonlocals = A68_NIL;
QMBAOSF_anonymous = BNBAOSF;
 /* line 82: */
 /* line 95: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 110: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 118: */
 /* line 119: */
 /* line 121: */
 /* line 123: */
 /* line 131: */
/*SKIP*/;
A_PROC_EXIT(DECS osgc);
} 
#undef NL
/* end of translation of osgc.a68 */
