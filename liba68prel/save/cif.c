/* UNAME:AAAAOSF */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t32,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(void),(void *));
typedef struct A68t33  A68_33 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t34,(struct A68t33 ),(struct A68t33 ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE33) VOID */

A_PROCEDURE(A68_VOID ,A68t35,(A68_VC ),(A68_VC ,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) VOID */

A_PROCEDURE(A68_VOID ,A68t37,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t37  A68_37 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,16000000,A68t40);
typedef struct A68t40  A68_40 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t40 *,16000000,A68t42);
typedef struct A68t42  A68_42 ;    /* STRUCT 16000000 REF MODE40 */

A_PROCEDURE(A68_BITS *,A68t43,(A68_INT ),(A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(INT) REF BITS */
struct A68t44{
A68_CHAR * Ptr;
A68_BITS  Gcmark;
A_PAD_BITS(PAD_1)
A68_INT  Upb;
A_PAD_INT(PAD_2)
};
typedef struct A68t44  A68_44 ;    /* STRUCT(REF CHAR,BITS,INT)  */
struct A68t45{
A68_INT * Ptr;
A68_BITS  Gcmark;
A_PAD_BITS(PAD_3)
A68_INT  Upb;
A_PAD_INT(PAD_4)
};
typedef struct A68t45  A68_45 ;    /* STRUCT(REF INT,BITS,INT)  */

A_PROCEDURE(A68_VOID ,A68t46,(A68_VC ,struct A68t44 *),(A68_VC ,struct A68t44 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(MODE26) MODE44 */
A_VECTOR(A68_INT ,A68t47);
typedef struct A68t47  A68_47 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t47 ,struct A68t45 *),(struct A68t47 ,struct A68t45 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE47) MODE45 */
struct A68t49{
A68_BITS * Cp;
struct A68t40 * Env;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(REF BITS,REF MODE40)  */

A_PROCEDURE(struct A68t49 *,A68t50,(struct A68t33 *),(struct A68t33 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(REF MODE33) REF MODE49 */

A_PROCEDURE(A68_VOID ,A68t51,(struct A68t33 ,struct A68t49 *),(struct A68t33 ,struct A68t49 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE33) MODE49 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_INT ),(A68_INT ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t52 ,struct A68t49 *),(struct A68t52 ,struct A68t49 *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE52) MODE49 */

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t40 *,A68_VC *),(struct A68t40 *,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF MODE40) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t55,(struct A68t40 *),(struct A68t40 *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(REF MODE40) INT */

A_PROCEDURE(A68_CHAR *,A68t56,(A68_VC ),(A68_VC ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE26) REF CHAR */

A_PROCEDURE(A68_INT *,A68t57,(struct A68t47 ),(struct A68t47 ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE47) REF INT */

A_PROCEDURE(A68_CHAR *,A68t58,(struct A68t40 *),(struct A68t40 *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF MODE40) REF CHAR */

A_PROCEDURE(struct A68t40 *,A68t59,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(REF CHAR) REF MODE40 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26) MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
/* --- end of DECS initialisation functions --- */
static A68_38   EAAAOSF = {"$Id: cif.a68,v 1.1.1.1 2001-05-07 10:16:12 sian Exp $"}; 
A_GISVEC(A68_VC ,FAAAOSF,EAAAOSF,53)
#define GAAAOSF_newline_char '\012'
#define HAAAOSF_null_char '\000'
#include <stdio.h>

#define IAAAOSF_nullccharptr NULL
A68_BITS * KAAAOSF_nilfuncptr;
#include <string.h>
#define STRLEN(s) strlen((char *)s)

#define NAAAOSF_strlen STRLEN
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
typedef struct   /* env of non-global proc */
{
A68_VC  Str;
} MBAAOSF_generator;

A68_VOID  MAAAOSF_cstringtorvc(A68_40 * S, A68_VC  *ReturnedValue);

A68_CHAR * UAAAOSF_vctocharptr(A68_VC  Buf);

A68_INT * YAAAOSF_vitointptr(A68_47  Buf);

A68_VOID  CBAAOSF_nullstr(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LBAAOSF_generator(A68_BOOL  JBAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LBAAOSF_generator(A68_BOOL  JBAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((MBAAOSF_generator *)NonLocals)->x)
{ 
A68_VC  NBAAOSF;  /* clause result */
A68_VC  OBAAOSF;  /* OPERATORS - dynamic generator */
{ 
OBAAOSF.upb = (NL(Str).upb+1) ;
( JBAAOSF_anonymous? A_VLOC(A68_CHAR ,OBAAOSF): A_VHEAP(A68_CHAR ,OBAAOSF) );
NBAAOSF = OBAAOSF;
} 
*ReturnedValue = (NBAAOSF);
return;
} 
#undef NL

A68_VOID  MAAAOSF_cstringtorvc(A68_40 * S, A68_VC  *ReturnedValue)
{ 
A68_VC  OAAAOSF;  /* clause result */
A68_VC  PAAAOSF;  /* OPERATORS - nil -> mode */
A68_VC  QAAAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RAAAOSF;  /* OPERATORS - trim index */
A68_VC  SAAAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(cstringtorvc);
 /* line 109: */
 /* line 111: */
{ 
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
if ( (S==(A68_40 *)A68_NIL) )
{ 
OAAAOSF = A_VVAC(PAAAOSF);
} 
else
{ 
 /* line 116: */
RAAAOSF = A_ISVEC(QAAAOSF,S,16000000,A68_CHAR ) ;
OAAAOSF = A_VTRIM(SAAAOSF,(RAAAOSF),A_VTSCRIPT(&(SAAAOSF.upb),(RAAAOSF).upb,1,NAAAOSF_strlen(S)));
} 
} 
A_PROC_EXIT(cstringtorvc);
*ReturnedValue = (OAAAOSF);
return;
} 
#undef NL

A68_CHAR * UAAAOSF_vctocharptr(A68_VC  Buf)
{ 
A68_CHAR * VAAAOSF;  /* clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_44   destination;
} WAAAOSF; 
A_PROC_ENTRY(vctocharptr);
 /* line 129: */
WAAAOSF.source = Buf ;
VAAAOSF = (WAAAOSF.destination).Ptr;
A_PROC_EXIT(vctocharptr);
return( VAAAOSF );
} 
#undef NL

A68_INT * YAAAOSF_vitointptr(A68_47  Buf)
{ 
A68_INT * ZAAAOSF;  /* clause result */
union {  /* BIOP 99 */
A68_47   source;
A68_45   destination;
} ABAAOSF; 
A_PROC_ENTRY(vitointptr);
 /* line 132: */
ABAAOSF.source = Buf ;
ZAAAOSF = (ABAAOSF.destination).Ptr;
A_PROC_EXIT(vitointptr);
return( ZAAAOSF );
} 
#undef NL

A68_VOID  CBAAOSF_nullstr(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_40 *  destination;
} DBAAOSF; 
A68_40 * EBAAOSF_ptr;
A68_VC  FBAAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  GBAAOSF;  /* OPERATORS - simple index */
A68_INT  HBAAOSF;  /* YIELD */
A68_VC  IBAAOSF;  /* clause result */
A68_31  KBAAOSF_generator;   /* proc value of non-global proc */
A68_VC  QBAAOSF;  /* avoid structure result */
A68_VC  PBAAOSF_ans;
A68_VC  RBAAOSF;  /* OPERATORS - trim index */
A68_VC  SBAAOSF;  /* YIELD */
A68_INT  TBAAOSF;  /* YIELD */
A68_CHAR * UBAAOSF;  /* YIELD */
A_PROC_ENTRY(nullstr);
 /* line 138: */
 /* line 147: */
{ 
DBAAOSF.source = UAAAOSF_vctocharptr(Str) ;
EBAAOSF_ptr = (DBAAOSF.destination);
 /* line 148: */
 /* line 149: */
 /* line 150: */
GBAAOSF = A_ISVEC(FBAAOSF,EBAAOSF_ptr,16000000,A68_CHAR ) ;
HBAAOSF = (Str.upb+1) ;
if ( ((*(&A_VINDEX(GBAAOSF,HBAAOSF)))==HAAAOSF_null_char) )
{ 
IBAAOSF = Str;
} 
else
{ 
A_CLOSURE( KBAAOSF_generator, LBAAOSF_generator, MBAAOSF_generator );
(( MBAAOSF_generator * ) ( KBAAOSF_generator.nonlocals )) -> Str = Str;
A_CALLPROC(KBAAOSF_generator,(A68_TRUE, &QBAAOSF),(A68_TRUE, &QBAAOSF,(KBAAOSF_generator).nonlocals));
PBAAOSF_ans = QBAAOSF;
 /* line 151: */
SBAAOSF = A_VTRIM(RBAAOSF,(PBAAOSF_ans),A_VTSCRIPT(&(RBAAOSF.upb),(PBAAOSF_ans).upb,1,Str.upb)) ;
A_VASSIGN2(Str,SBAAOSF,A68_CHAR );
 /* line 152: */
TBAAOSF = PBAAOSF_ans.upb ;
UBAAOSF = (&A_VINDEX(PBAAOSF_ans,TBAAOSF)) ;
(*UBAAOSF) = HAAAOSF_null_char;
 /* line 153: */
 /* line 154: */
 /* line 155: */
IBAAOSF = PBAAOSF_ans;
} 
} 
A_PROC_EXIT(nullstr);
*ReturnedValue = (IBAAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 5: */
void BAAAOSF(void)   /* initialise DECS cif */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","cif.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
union {  /* BIOP 99 */
A68_INT   source;
A68_BITS *  destination;
} JAAAOSF; 
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/cif.a68";
A_config.translation_time = "Sun Apr 18 20:07:49 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "AAAAOSF (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:49 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS cif);
UEAALIB_a68config(LGAALIB_configinfo, FAAAOSF);
 /* line 60: */
 /* line 66: */
 /* line 75: */
 /* line 76: */
 /* line 78: */
 /* line 80: */
 /* line 83: */
JAAAOSF.source = (-1) ;
KAAAOSF_nilfuncptr = (JAAAOSF.destination);
 /* line 84: */
 /* line 87: */
 /* line 89: */
 /* line 92: */
 /* line 93: */
 /* line 95: */
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 102: */
 /* line 118: */
 /* line 131: */
 /* line 134: */
 /* line 135: */
 /* line 137: */
 /* line 157: */
 /* line 159: */
 /* line 161: */
 /* line 163: */
 /* line 166: */
 /* line 169: */
 /* line 172: */
 /* line 174: */
 /* line 203: */
/*SKIP*/;
A_PROC_EXIT(DECS cif);
} 
#undef NL
/* end of translation of cif.a68 */
