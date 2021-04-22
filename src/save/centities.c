/* UNAME:SHAACTR */
#include <algol68/Asupport.h>
A_ISTRUCT(A68_CHAR ,32,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t33);
typedef struct A68t33  A68_33 ;    /* STRUCT 7 CHAR */
struct A68t32{
struct A68t33  Prefix;
A_PAD_ISTRUCT(A68_33 ,PAD_1)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_2)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_3)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_4)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_5)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_6)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(MODE33,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t36 ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE36 */
A_VECTOR(struct A68t42 ,A68t41);
typedef struct A68t41  A68_41 ;    /* VECTOR [] MODE42 */
struct A68t42{
struct A68t31  N;
A_PAD_ISTRUCT(A68_31 ,PAD_7)
struct A68t31  F;
A_PAD_ISTRUCT(A68_31 ,PAD_8)
A68_INT  Level;
A_PAD_INT(PAD_9)
};
typedef struct A68t42  A68_42 ;    /* STRUCT(MODE31,MODE31,INT)  */
struct A68t40 { A68_INT mode; union {
A68_VC  mode1;
struct A68t41  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t40  A68_40 ;    /* UNION(REF MODE26,REF MODE41)  */
struct A68t37{
struct A68t31  F;
A_PAD_ISTRUCT(A68_31 ,PAD_10)
A68_INT  No;
A_PAD_INT(PAD_11)
A68_INT  Nl;
A_PAD_INT(PAD_12)
A68_INT  Ng;
A_PAD_INT(PAD_13)
struct A68t40  U;
};
typedef struct A68t37  A68_37 ;    /* STRUCT(MODE31,INT,INT,INT,MODE40)  */
A_VECTOR(struct A68t32 ,A68t38);
typedef struct A68t38  A68_38 ;    /* VECTOR [] MODE32 */
A_VECTOR(struct A68t33 ,A68t39);
typedef struct A68t39  A68_39 ;    /* VECTOR [] MODE33 */
struct A68t36{
struct A68t37  Xs;
struct A68t33  Ys;
A_PAD_ISTRUCT(A68_33 ,PAD_14)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_15)
struct A68t38  Keptinfo;
struct A68t39  Cnames;
};
typedef struct A68t36  A68_36 ;    /* STRUCT(MODE37,MODE33,LONG INT,REF MODE38,REF MODE39)  */
struct A68t34{
struct A68t33  Uname;
A_PAD_ISTRUCT(A68_33 ,PAD_16)
struct A68t33  Lname;
A_PAD_ISTRUCT(A68_33 ,PAD_17)
struct A68t33  Gname;
A_PAD_ISTRUCT(A68_33 ,PAD_18)
struct A68t35  Specs;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(MODE33,MODE33,MODE33,REF MODE35)  */

A_PROCEDURE(A68_VOID ,A68t43,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t44,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t45,(void),(void *));
typedef struct A68t45  A68_45 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t45 ),(struct A68t45 ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(MODE45) VOID */

A_PROCEDURE(A68_VOID ,A68t47,(A68_VC ),(A68_VC ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t47 ),(struct A68t47 ,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE47) VOID */

A_PROCEDURE(A68_VOID ,A68t49,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t50);
typedef struct A68t50  A68_50 ;    /* STRUCT 59 CHAR */
struct A68t51{
struct A68t33  Name;
A_PAD_ISTRUCT(A68_33 ,PAD_19)
A68_BOOL  Set;
A_PAD_BOOL(PAD_20)
};
typedef struct A68t51  A68_51 ;    /* STRUCT(MODE33,BOOL)  */
struct A68t52{
A68_INT  Labno;
A_PAD_INT(PAD_21)
};
typedef struct A68t52  A68_52 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t53,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE26) MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from incinstallation --- */
/* --- End of imports from incinstallation --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ODAACTR(void);   /* incinstallation */
/* --- end of DECS initialisation functions --- */
static A68_50   WHAACTR = {"$Id: centities.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,XHAACTR,WHAACTR,59)
A68_43  YHAACTR_anonymous;
A68_SINT  EIAACTR_cnewline;
static A68_33   GIAACTR = {"*UNSET*"}; 
A68_51  HIAACTR_unsetlabel;
typedef struct   /* env of non-global proc */
{
A68_VC  S;
} ZIAACTR_generator;

A_STATIC A68_VOID  AIAACTR_generator(A68_BOOL  ZHAACTR_anonymous, A68_VC  *ReturnedValue);

A68_VOID  JIAACTR_bracket(A68_VC  S, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YIAACTR_generator(A68_BOOL  WIAACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  LJAACTR_doublequote(A68_VC  C, A68_VC  *ReturnedValue);

A68_VOID  QJAACTR_singlequote(A68_VC  C, A68_VC  *ReturnedValue);

A68_VOID  VJAACTR_curly(A68_VC  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YIAACTR_generator(A68_BOOL  WIAACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZIAACTR_generator *)NonLocals)->x)
{ 
A68_VC  AJAACTR;  /* clause result */
A68_VC  BJAACTR;  /* OPERATORS - dynamic generator */
{ 
BJAACTR.upb = (NL(S).upb+2) ;
( WIAACTR_anonymous? A_VLOC(A68_CHAR ,BJAACTR): A_VHEAP(A68_CHAR ,BJAACTR) );
AJAACTR = BJAACTR;
} 
*ReturnedValue = (AJAACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AIAACTR_generator(A68_BOOL  ZHAACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  BIAACTR;  /* clause result */
A68_VC  CIAACTR;  /* OPERATORS - dynamic generator */
{ 
 /* line 48: */
CIAACTR.upb = 0 ;
( ZHAACTR_anonymous? A_VLOC(A68_CHAR ,CIAACTR): A_VHEAP(A68_CHAR ,CIAACTR) );
BIAACTR = CIAACTR;
} 
*ReturnedValue = (BIAACTR);
return;
} 
#undef NL

A68_VOID  JIAACTR_bracket(A68_VC  S, A68_VC  *ReturnedValue)
{ 
A68_BOOL  KIAACTR;  /* optbool result */
A68_INT  LIAACTR;  /* YIELD */
A68_INT  MIAACTR;  /* YIELD */
A68_INT  NIAACTR_count;
A68_INT  OIAACTR_ind;
A68_CHAR  PIAACTR_c;
A68_VC  QIAACTR;  /* OPERATORS - trim index */
A68_VC  RIAACTR;  /* forall yield */
A68_CHAR * SIAACTR;  /* forall control - []x */
A68_INT  TIAACTR;  /* forall loop counter */
A68_BOOL  UIAACTR;  /* clause result */
A68_VC  VIAACTR;  /* clause result */
A68_43  XIAACTR_generator;   /* proc value of non-global proc */
A68_VC  DJAACTR;  /* avoid structure result */
A68_VC  CJAACTR_result;
A68_INT  EJAACTR;  /* YIELD */
A68_CHAR * FJAACTR;  /* YIELD */
A68_VC  GJAACTR;  /* OPERATORS - trim index */
A68_VC  HJAACTR;  /* YIELD */
A68_INT  IJAACTR;  /* YIELD */
A68_CHAR * JJAACTR;  /* YIELD */
A_PROC_ENTRY(bracket);
 /* line 63: */
KIAACTR = (S.upb>2);
if ( KIAACTR )
{LIAACTR = 1 ;
KIAACTR = (A_VINDEX(S,LIAACTR)=='(');
}
if ( KIAACTR )
{MIAACTR = S.upb ;
KIAACTR = (A_VINDEX(S,MIAACTR)==')');
}
 /* line 66: */
if ( KIAACTR )
{{ 
NIAACTR_count = 1;
OIAACTR_ind = 0;
 /* line 67: */
RIAACTR = A_VTRIM(QIAACTR,(S),A_VTSCRIPT(&(QIAACTR.upb),(S).upb,2,(S).upb)) ;
TIAACTR = RIAACTR.upb -1;
SIAACTR = RIAACTR.data;
for (;TIAACTR-- >= 0;
(SIAACTR++
) )
{
PIAACTR_c = *SIAACTR;
 /* line 68: */
if ( !((NIAACTR_count>0)) ) break;
OIAACTR_ind+=1;
 /* line 69: */
if ( (PIAACTR_c=='(') )
{ 
 /* line 70: */
NIAACTR_count+=1;
} 
else
{ 
if ( (PIAACTR_c==')') )
{ 
 /* line 71: */
 /* line 72: */
NIAACTR_count-=1;
} 
} 
}
 /* line 73: */
 /* line 74: */
 /* line 75: */
UIAACTR = (OIAACTR_ind==S.upb);
} 
KIAACTR = UIAACTR;
}
 /* line 76: */
if ( KIAACTR )
{ 
VIAACTR = S;
} 
else
{ 
A_CLOSURE( XIAACTR_generator, YIAACTR_generator, ZIAACTR_generator );
(( ZIAACTR_generator * ) ( XIAACTR_generator.nonlocals )) -> S = S;
A_CALLPROC(XIAACTR_generator,(A68_TRUE, &DJAACTR),(A68_TRUE, &DJAACTR,(XIAACTR_generator).nonlocals));
CJAACTR_result = DJAACTR;
 /* line 77: */
EJAACTR = 1 ;
FJAACTR = (&A_VINDEX(CJAACTR_result,EJAACTR)) ;
(*FJAACTR) = '(';
 /* line 78: */
HJAACTR = A_VTRIM(GJAACTR,(CJAACTR_result),A_VTSCRIPT(&(GJAACTR.upb),(CJAACTR_result).upb,2,(S.upb+1))) ;
A_VASSIGN2(S,HJAACTR,A68_CHAR );
 /* line 79: */
IJAACTR = CJAACTR_result.upb ;
JJAACTR = (&A_VINDEX(CJAACTR_result,IJAACTR)) ;
(*JJAACTR) = ')';
 /* line 80: */
 /* line 81: */
VIAACTR = CJAACTR_result;
} 
A_PROC_EXIT(bracket);
*ReturnedValue = (VIAACTR);
return;
} 
#undef NL

A68_VOID  LJAACTR_doublequote(A68_VC  C, A68_VC  *ReturnedValue)
{ 
A68_VC  MJAACTR;  /* clause result */
A68_VC  NJAACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OJAACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(doublequote);
 /* line 84: */
MJAACTR = A_VC_PLUS(A_VC_PLUS(A_HVEC(NJAACTR,'\"',A68_CHAR ),C),A_HVEC(OJAACTR,'\"',A68_CHAR ));
A_PROC_EXIT(doublequote);
*ReturnedValue = (MJAACTR);
return;
} 
#undef NL

A68_VOID  QJAACTR_singlequote(A68_VC  C, A68_VC  *ReturnedValue)
{ 
A68_VC  RJAACTR;  /* clause result */
A68_VC  SJAACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TJAACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(singlequote);
 /* line 87: */
RJAACTR = A_VC_PLUS(A_VC_PLUS(A_HVEC(SJAACTR,'\'',A68_CHAR ),C),A_HVEC(TJAACTR,'\'',A68_CHAR ));
A_PROC_EXIT(singlequote);
*ReturnedValue = (RJAACTR);
return;
} 
#undef NL

A68_VOID  VJAACTR_curly(A68_VC  C, A68_VC  *ReturnedValue)
{ 
A68_VC  WJAACTR;  /* clause result */
A68_VC  XJAACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YJAACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(curly);
 /* line 90: */
WJAACTR = A_VC_PLUS(A_VC_PLUS(A_HVEC(XJAACTR,'{',A68_CHAR ),C),A_HVEC(YJAACTR,'}',A68_CHAR ));
A_PROC_EXIT(curly);
*ReturnedValue = (WJAACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void THAACTR(void)   /* initialise DECS centities */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","-dir",".","centities.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","./incinstallation.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_43  DIAACTR;  /* procedure value */
A68_51  FIAACTR;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ODAACTR();   /* USE incinstallation */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/src/centities.a68";
A_config.translation_time = "Sun Apr 18 20:07:50 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "SHAACTR (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:50 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS centities);
UEAALIB_a68config(LGAALIB_configinfo, XHAACTR);
 /* line 46: */
DIAACTR.fn.fn_global = AIAACTR_generator;
DIAACTR.nonlocals = A68_NIL;
YHAACTR_anonymous = DIAACTR;
 /* line 50: */
EIAACTR_cnewline = (A68_SINT )0;
 /* line 55: */
 /* line 56: */
 /* line 57: */
FIAACTR.Name = GIAACTR;
FIAACTR.Set = A68_FALSE;
HIAACTR_unsetlabel = FIAACTR;
 /* line 59: */
 /* line 83: */
 /* line 86: */
 /* line 89: */
 /* line 92: */
 /* line 94: */
 /* line 98: */
/*SKIP*/;
A_PROC_EXIT(DECS centities);
} 
#undef NL
/* end of translation of centities.a68 */
