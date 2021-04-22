/* UNAME:ACAAOSF */
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
A_ISTRUCT(A68_CHAR ,56,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 56 CHAR */

A_PROCEDURE(A68_VOID ,A68t39,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t39  A68_39 ;    /* PROC(CHAR) REF MODE26 */
A_VECTOR(A68_VC ,A68t40);
typedef struct A68t40  A68_40 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t41,(struct A68t40 ,A68_VC *),(struct A68t40 ,A68_VC *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(MODE40) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t42,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT) MODE26 */
A_ISTRUCT(A68_CHAR ,10,A68t43);
typedef struct A68t43  A68_43 ;    /* STRUCT 10 CHAR */

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
static A68_38   ECAAOSF = {"$Id: strops.a68,v 1.1.1.1 2001-05-07 10:16:12 sian Exp $"}; 
A_GISVEC(A68_VC ,FCAAOSF,ECAAOSF,56)
A68_31  GCAAOSF_anonymous;
static A68_43   GEAAOSF = {"0987654321"}; 
static A68_43   IEAAOSF = {"0123456789"}; 
typedef struct   /* env of non-global proc */
{
int dummy;
} RCAAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  S;
} DDAAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * KDAAOSF_l;
} RDAAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * LEAAOSF_l;
A68_INT  NEAAOSF_e;
A_PAD_INT(PAD_1)
} TEAAOSF_generator;

A_STATIC A68_VOID  ICAAOSF_generator(A68_BOOL  HCAAOSF_anonymous, A68_VC  *ReturnedValue);

A68_VOID  NCAAOSF_makervc(A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QCAAOSF_generator(A68_BOOL  OCAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  ZCAAOSF_makervc(A68_VC  S, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CDAAOSF_generator(A68_BOOL  ADAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JDAAOSF_concat(A68_40  Strs, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QDAAOSF_generator(A68_BOOL  ODAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  FEAAOSF_intchars(A68_INT  I, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SEAAOSF_generator(A68_BOOL  QEAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QCAAOSF_generator(A68_BOOL  OCAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RCAAOSF_generator *)NonLocals)->x)
{ 
A68_VC  SCAAOSF;  /* clause result */
A68_VC  TCAAOSF;  /* OPERATORS - dynamic generator */
{ 
TCAAOSF.upb = 1 ;
( OCAAOSF_anonymous? A_VLOC(A68_CHAR ,TCAAOSF): A_VHEAP(A68_CHAR ,TCAAOSF) );
SCAAOSF = TCAAOSF;
} 
*ReturnedValue = (SCAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  CDAAOSF_generator(A68_BOOL  ADAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DDAAOSF_generator *)NonLocals)->x)
{ 
A68_VC  EDAAOSF;  /* clause result */
A68_VC  FDAAOSF;  /* OPERATORS - dynamic generator */
{ 
FDAAOSF.upb = NL(S).upb ;
( ADAAOSF_anonymous? A_VLOC(A68_CHAR ,FDAAOSF): A_VHEAP(A68_CHAR ,FDAAOSF) );
EDAAOSF = FDAAOSF;
} 
*ReturnedValue = (EDAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  QDAAOSF_generator(A68_BOOL  ODAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RDAAOSF_generator *)NonLocals)->x)
{ 
A68_VC  SDAAOSF;  /* clause result */
A68_VC  TDAAOSF;  /* OPERATORS - dynamic generator */
{ 
TDAAOSF.upb = (*NL(KDAAOSF_l)) ;
( ODAAOSF_anonymous? A_VLOC(A68_CHAR ,TDAAOSF): A_VHEAP(A68_CHAR ,TDAAOSF) );
SDAAOSF = TDAAOSF;
} 
*ReturnedValue = (SDAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  SEAAOSF_generator(A68_BOOL  QEAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TEAAOSF_generator *)NonLocals)->x)
{ 
A68_VC  UEAAOSF;  /* clause result */
A68_VC  VEAAOSF;  /* OPERATORS - dynamic generator */
{ 
VEAAOSF.upb = ((*NL(LEAAOSF_l))+NL(NEAAOSF_e)) ;
( QEAAOSF_anonymous? A_VLOC(A68_CHAR ,VEAAOSF): A_VHEAP(A68_CHAR ,VEAAOSF) );
UEAAOSF = VEAAOSF;
} 
*ReturnedValue = (UEAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ICAAOSF_generator(A68_BOOL  HCAAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  JCAAOSF;  /* clause result */
A68_VC  KCAAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 49: */
KCAAOSF.upb = 0 ;
( HCAAOSF_anonymous? A_VLOC(A68_CHAR ,KCAAOSF): A_VHEAP(A68_CHAR ,KCAAOSF) );
JCAAOSF = KCAAOSF;
} 
*ReturnedValue = (JCAAOSF);
return;
} 
#undef NL

A68_VOID  NCAAOSF_makervc(A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_31  PCAAOSF_generator;   /* proc value of non-global proc */
A68_VC  UCAAOSF;  /* clause result */
A68_VC  VCAAOSF;  /* avoid structure result */
A68_VC  WCAAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XCAAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(makervc);
A_CLOSURE( PCAAOSF_generator, QCAAOSF_generator, RCAAOSF_generator );
A_CALLPROC(PCAAOSF_generator,(A68_FALSE, &VCAAOSF),(A68_FALSE, &VCAAOSF,(PCAAOSF_generator).nonlocals));
XCAAOSF = A_HVEC(WCAAOSF,C,A68_CHAR ) ;
A_VASSIGN2(XCAAOSF,VCAAOSF,A68_CHAR ) ;
UCAAOSF = VCAAOSF;
A_PROC_EXIT(makervc);
*ReturnedValue = (UCAAOSF);
return;
} 
#undef NL

A68_VOID  ZCAAOSF_makervc(A68_VC  S, A68_VC  *ReturnedValue)
{ 
A68_31  BDAAOSF_generator;   /* proc value of non-global proc */
A68_VC  GDAAOSF;  /* clause result */
A68_VC  HDAAOSF;  /* avoid structure result */
A_PROC_ENTRY(makervc);
A_CLOSURE( BDAAOSF_generator, CDAAOSF_generator, DDAAOSF_generator );
(( DDAAOSF_generator * ) ( BDAAOSF_generator.nonlocals )) -> S = S;
A_CALLPROC(BDAAOSF_generator,(A68_FALSE, &HDAAOSF),(A68_FALSE, &HDAAOSF,(BDAAOSF_generator).nonlocals));
A_VASSIGN2(S,HDAAOSF,A68_CHAR ) ;
GDAAOSF = HDAAOSF;
A_PROC_EXIT(makervc);
*ReturnedValue = (GDAAOSF);
return;
} 
#undef NL

A68_VOID  JDAAOSF_concat(A68_40  Strs, A68_VC  *ReturnedValue)
{ 
A68_INT  KDAAOSF_l;
A68_VC  LDAAOSF_st;
A68_VC * MDAAOSF;  /* forall control - []x */
A68_INT  NDAAOSF;  /* forall loop counter */
A68_31  PDAAOSF_generator;   /* proc value of non-global proc */
A68_VC  UDAAOSF;  /* avoid structure result */
A68_VC  VDAAOSF_ans;
A68_VC  WDAAOSF_str;
A68_VC * XDAAOSF;  /* forall control - []x */
A68_INT  YDAAOSF;  /* forall loop counter */
A68_INT  ZDAAOSF_lwb;
A68_INT  AEAAOSF_upb;
A68_VC  BEAAOSF;  /* OPERATORS - trim index */
A68_VC  CEAAOSF;  /* YIELD */
A68_VC  DEAAOSF;  /* clause result */
A_PROC_ENTRY(concat);
 /* line 56: */
 /* line 57: */
{ 
KDAAOSF_l = 0;
 /* line 58: */
NDAAOSF = Strs.upb -1;
MDAAOSF = Strs.data;
for (;NDAAOSF-- >= 0;
(MDAAOSF++
) )
{
LDAAOSF_st = *MDAAOSF;
KDAAOSF_l+=LDAAOSF_st.upb;
}
 /* line 59: */
A_CLOSURE( PDAAOSF_generator, QDAAOSF_generator, RDAAOSF_generator );
(( RDAAOSF_generator * ) ( PDAAOSF_generator.nonlocals )) -> KDAAOSF_l = (&KDAAOSF_l);
A_CALLPROC(PDAAOSF_generator,(A68_FALSE, &UDAAOSF),(A68_FALSE, &UDAAOSF,(PDAAOSF_generator).nonlocals));
VDAAOSF_ans = UDAAOSF;
 /* line 60: */
KDAAOSF_l = 0;
 /* line 61: */
 /* line 62: */
YDAAOSF = Strs.upb -1;
XDAAOSF = Strs.data;
for (;YDAAOSF-- >= 0;
(XDAAOSF++
) )
{
WDAAOSF_str = *XDAAOSF;
ZDAAOSF_lwb = (KDAAOSF_l+1);
AEAAOSF_upb = (KDAAOSF_l+=WDAAOSF_str.upb);
 /* line 63: */
 /* line 64: */
CEAAOSF = A_VTRIM(BEAAOSF,(VDAAOSF_ans),A_VTSCRIPT(&(BEAAOSF.upb),(VDAAOSF_ans).upb,ZDAAOSF_lwb,AEAAOSF_upb)) ;
A_VASSIGN2(WDAAOSF_str,CEAAOSF,A68_CHAR );
}
 /* line 65: */
 /* line 66: */
DEAAOSF = VDAAOSF_ans;
} 
A_PROC_EXIT(concat);
*ReturnedValue = (DEAAOSF);
return;
} 
#undef NL

A68_VOID  FEAAOSF_intchars(A68_INT  I, A68_VC  *ReturnedValue)
{ 
A68_43  HEAAOSF;  /* clause result */
A68_43  JEAAOSF_chars;
A68_INT  KEAAOSF_n;
A68_INT  LEAAOSF_l;
A68_INT  MEAAOSF;  /* clause result */
A68_INT  NEAAOSF_e;
A68_VC  OEAAOSF;  /* clause result */
A68_VC  PEAAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31  REAAOSF_generator;   /* proc value of non-global proc */
A68_VC  XEAAOSF;  /* avoid structure result */
A68_VC  WEAAOSF_line;
A68_INT  YEAAOSF_i;
A68_INT  ZEAAOSF;  /* to part of loop */
A68_INT  AFAAOSF;  /* by part of loop */
A68_VC  BFAAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CFAAOSF;  /* OPERATORS - simple index */
A68_INT  DFAAOSF;  /* ADICOPS - MOD */
A68_INT  EFAAOSF;  /* ADICOPS - MOD */
A68_INT  FFAAOSF;  /* YIELD */
A68_CHAR * GFAAOSF;  /* YIELD */
A68_INT  HFAAOSF;  /* YIELD */
A68_CHAR * IFAAOSF;  /* YIELD */
A_PROC_ENTRY(intchars);
 /* line 70: */
 /* line 71: */
{ 
if ( (I<0) )
{ 
HEAAOSF = GEAAOSF;
} 
else
{ 
HEAAOSF = IEAAOSF;
} 
JEAAOSF_chars = HEAAOSF;
 /* line 72: */
KEAAOSF_n = I;
LEAAOSF_l = 0;
 /* line 73: */
if ( (I<0) )
{ 
MEAAOSF = 1;
} 
else
{ 
MEAAOSF = 0;
} 
NEAAOSF_e = MEAAOSF;
 /* line 74: */
for ( ;; )
{ 
if ( !((KEAAOSF_n!=0)) ) break;
KEAAOSF_n/=10;
LEAAOSF_l+=1;
}
 /* line 75: */
 /* line 76: */
 /* line 77: */
if ( (LEAAOSF_l==0) )
{ 
OEAAOSF = A_HVEC(PEAAOSF,'0',A68_CHAR );
} 
else
{ 
A_CLOSURE( REAAOSF_generator, SEAAOSF_generator, TEAAOSF_generator );
(( TEAAOSF_generator * ) ( REAAOSF_generator.nonlocals )) -> LEAAOSF_l = (&LEAAOSF_l);
(( TEAAOSF_generator * ) ( REAAOSF_generator.nonlocals )) -> NEAAOSF_e = NEAAOSF_e;
A_CALLPROC(REAAOSF_generator,(A68_TRUE, &XEAAOSF),(A68_TRUE, &XEAAOSF,(REAAOSF_generator).nonlocals));
WEAAOSF_line = XEAAOSF;
 /* line 78: */
KEAAOSF_n = I;
 /* line 79: */
 /* line 80: */
ZEAAOSF = (NEAAOSF_e+1);
AFAAOSF = (-1);
for ( YEAAOSF_i = (LEAAOSF_l+NEAAOSF_e);
( AFAAOSF > 0 && YEAAOSF_i <= ZEAAOSF) ||
( AFAAOSF < 0 && YEAAOSF_i >= ZEAAOSF) ||
( AFAAOSF == 0 ) ;
YEAAOSF_i += AFAAOSF )
{ 
CFAAOSF = A_HISVEC(BFAAOSF,JEAAOSF_chars,10,A68_CHAR ) ;
EFAAOSF = 10 ;
FFAAOSF = (A_MOD(KEAAOSF_n,EFAAOSF,DFAAOSF)+1) ;
GFAAOSF = (&A_VINDEX(WEAAOSF_line,YEAAOSF_i)) ;
(*GFAAOSF) = A_VINDEX(CFAAOSF,FFAAOSF);
 /* line 81: */
 /* line 82: */
KEAAOSF_n/=10;
}
 /* line 83: */
if ( (NEAAOSF_e==1) )
{ 
HFAAOSF = 1 ;
IFAAOSF = (&A_VINDEX(WEAAOSF_line,HFAAOSF)) ;
(*IFAAOSF) = '-';
} 
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 89: */
OEAAOSF = WEAAOSF_line;
} 
} 
A_PROC_EXIT(intchars);
*ReturnedValue = (OEAAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void BCAAOSF(void)   /* initialise DECS strops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","strops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_31  LCAAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/strops.a68";
A_config.translation_time = "Sun Apr 18 20:07:49 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "ACAAOSF (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:49 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS strops);
UEAALIB_a68config(LGAALIB_configinfo, FCAAOSF);
 /* line 48: */
LCAAOSF.fn.fn_global = ICAAOSF_generator;
LCAAOSF.nonlocals = A68_NIL;
GCAAOSF_anonymous = LCAAOSF;
 /* line 51: */
 /* line 52: */
 /* line 55: */
 /* line 69: */
 /* line 90: */
A_PROC_EXIT(DECS strops);
} 
#undef NL
/* end of translation of strops.a68 */
