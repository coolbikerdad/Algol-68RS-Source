/* UNAME:TMEAOSF */
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
A_ISTRUCT(A68_CHAR ,57,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 57 CHAR */
struct A68t39{
A68_BITS  Options;
A_PAD_BITS(PAD_1)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t40,(struct A68t39 ,struct A68t39 ,struct A68t39 *),(struct A68t39 ,struct A68t39 ,struct A68t39 *,void *));
typedef struct A68t40  A68_40 ;    /* PROC(MODE39,MODE39) MODE39 */

A_PROCEDURE(struct A68t39 *,A68t41,(struct A68t39 *,struct A68t39 ),(struct A68t39 *,struct A68t39 ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE39,MODE39) REF MODE39 */

A_PROCEDURE(A68_BOOL ,A68t42,(struct A68t39 ,struct A68t39 ),(struct A68t39 ,struct A68t39 ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE39,MODE39) BOOL */

A_PROCEDURE(A68_BOOL ,A68t43,(struct A68t39 ,A68_INT ),(struct A68t39 ,A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE39,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t44,(A68_INT ,struct A68t39 *),(A68_INT ,struct A68t39 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(INT) MODE39 */

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
static A68_38   XMEAOSF = {"$Id: options.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,YMEAOSF,XMEAOSF,57)
A68_39  EPEAOSF_ans;
A68_39  HPEAOSF_null_options;

A68_VOID  BNEAOSF_(A68_39  A, A68_39  B, A68_39  *ReturnedValue);

A68_39 * HNEAOSF_plusab(A68_39 * A, A68_39  B);

A68_VOID  MNEAOSF_(A68_39  A, A68_39  B, A68_39  *ReturnedValue);

A68_39 * SNEAOSF_minusab(A68_39 * A, A68_39  B);

A68_BOOL  XNEAOSF_(A68_39  A, A68_39  B);

A68_BOOL  BOEAOSF_(A68_39  A, A68_39  B);

A68_BOOL  FOEAOSF_includes(A68_39  Options, A68_39  Option);

A68_BOOL  JOEAOSF_includes(A68_39  Options, A68_INT  Nth);

A68_BOOL  POEAOSF_excludes(A68_39  Options, A68_39  Option);

A68_BOOL  TOEAOSF_excludes(A68_39  Options, A68_INT  Nth);

A68_VOID  YOEAOSF_makeoptions(A68_INT  Nth, A68_39  *ReturnedValue);

A68_VOID  BNEAOSF_(A68_39  A, A68_39  B, A68_39  *ReturnedValue)
{ 
A68_39  CNEAOSF_ans;
A68_BITS * DNEAOSF;  /* YIELD */
A68_39  ENEAOSF;  /* clause result */
A_PROC_ENTRY(+);
 /* line 58: */
 /* line 59: */
{ 
CNEAOSF_ans = A;
 /* line 60: */
DNEAOSF = (&((&CNEAOSF_ans)->Options)) ;
(*DNEAOSF) = (A68_BITS )((*(&((&CNEAOSF_ans)->Options)))|B.Options);
 /* line 61: */
 /* line 62: */
ENEAOSF = CNEAOSF_ans;
} 
A_PROC_EXIT(+);
*ReturnedValue = (ENEAOSF);
return;
} 
#undef NL

A68_39 * HNEAOSF_plusab(A68_39 * A, A68_39  B)
{ 
A68_BITS * INEAOSF;  /* YIELD */
A68_39 * JNEAOSF;  /* clause result */
A_PROC_ENTRY(plusab);
 /* line 65: */
 /* line 66: */
{ 
INEAOSF = (&(A->Options)) ;
(*INEAOSF) = (A68_BITS )((*(&(A->Options)))|B.Options);
 /* line 67: */
 /* line 68: */
JNEAOSF = A;
} 
A_PROC_EXIT(plusab);
return( JNEAOSF );
} 
#undef NL

A68_VOID  MNEAOSF_(A68_39  A, A68_39  B, A68_39  *ReturnedValue)
{ 
A68_39  NNEAOSF_ans;
A68_BITS * ONEAOSF;  /* YIELD */
A68_39  PNEAOSF;  /* clause result */
A_PROC_ENTRY(-);
 /* line 71: */
 /* line 72: */
{ 
NNEAOSF_ans = A;
 /* line 73: */
ONEAOSF = (&((&NNEAOSF_ans)->Options)) ;
(*ONEAOSF) = (A68_BITS )((*(&((&NNEAOSF_ans)->Options)))&~B.Options);
 /* line 74: */
 /* line 75: */
PNEAOSF = NNEAOSF_ans;
} 
A_PROC_EXIT(-);
*ReturnedValue = (PNEAOSF);
return;
} 
#undef NL

A68_39 * SNEAOSF_minusab(A68_39 * A, A68_39  B)
{ 
A68_BITS * TNEAOSF;  /* YIELD */
A68_39 * UNEAOSF;  /* clause result */
A_PROC_ENTRY(minusab);
 /* line 78: */
 /* line 79: */
{ 
TNEAOSF = (&(A->Options)) ;
(*TNEAOSF) = (A68_BITS )((*(&(A->Options)))&~B.Options);
 /* line 80: */
 /* line 81: */
UNEAOSF = A;
} 
A_PROC_EXIT(minusab);
return( UNEAOSF );
} 
#undef NL

A68_BOOL  XNEAOSF_(A68_39  A, A68_39  B)
{ 
A68_BOOL  YNEAOSF;  /* clause result */
A_PROC_ENTRY(=);
YNEAOSF = (A.Options==B.Options);
A_PROC_EXIT(=);
return( YNEAOSF );
} 
#undef NL

A68_BOOL  BOEAOSF_(A68_39  A, A68_39  B)
{ 
A68_BOOL  COEAOSF;  /* clause result */
A_PROC_ENTRY(/=);
COEAOSF = (A.Options!=B.Options);
A_PROC_EXIT(/=);
return( COEAOSF );
} 
#undef NL

A68_BOOL  FOEAOSF_includes(A68_39  Options, A68_39  Option)
{ 
A68_BOOL  GOEAOSF;  /* clause result */
A_PROC_ENTRY(includes);
 /* line 92: */
GOEAOSF = ((A68_BITS )(Options.Options&Option.Options)!=0X0U);
A_PROC_EXIT(includes);
return( GOEAOSF );
} 
#undef NL

A68_BOOL  JOEAOSF_includes(A68_39  Options, A68_INT  Nth)
{ 
A68_BOOL  KOEAOSF;  /* clause result */
A68_INT  LOEAOSF;  /* SHL */
A68_BITS  MOEAOSF;  /* SHL */
A_PROC_ENTRY(includes);
 /* line 95: */
LOEAOSF = (Nth-1) ;
MOEAOSF = 0X1U ;
KOEAOSF = ((A68_BITS )(Options.Options&A_SHL(MOEAOSF,LOEAOSF))!=0X0U);
A_PROC_EXIT(includes);
return( KOEAOSF );
} 
#undef NL

A68_BOOL  POEAOSF_excludes(A68_39  Options, A68_39  Option)
{ 
A68_BOOL  QOEAOSF;  /* clause result */
A_PROC_ENTRY(excludes);
 /* line 98: */
QOEAOSF = ((A68_BITS )(Options.Options&Option.Options)==0X0U);
A_PROC_EXIT(excludes);
return( QOEAOSF );
} 
#undef NL

A68_BOOL  TOEAOSF_excludes(A68_39  Options, A68_INT  Nth)
{ 
A68_BOOL  UOEAOSF;  /* clause result */
A68_INT  VOEAOSF;  /* SHL */
A68_BITS  WOEAOSF;  /* SHL */
A_PROC_ENTRY(excludes);
 /* line 101: */
VOEAOSF = (Nth-1) ;
WOEAOSF = 0X1U ;
UOEAOSF = ((A68_BITS )(Options.Options&A_SHL(WOEAOSF,VOEAOSF))==0X0U);
A_PROC_EXIT(excludes);
return( UOEAOSF );
} 
#undef NL

A68_VOID  YOEAOSF_makeoptions(A68_INT  Nth, A68_39  *ReturnedValue)
{ 
A68_39  ZOEAOSF_ans;
A68_INT  APEAOSF;  /* SHL */
A68_BITS  BPEAOSF;  /* SHL */
A68_BITS * CPEAOSF;  /* YIELD */
A68_39  DPEAOSF;  /* clause result */
A_PROC_ENTRY(makeoptions);
 /* line 107: */
 /* line 108: */
{ 
 /* line 109: */
APEAOSF = (Nth-1) ;
BPEAOSF = 0X1U ;
CPEAOSF = (&((&ZOEAOSF_ans)->Options)) ;
(*CPEAOSF) = A_SHL(BPEAOSF,APEAOSF);
 /* line 110: */
 /* line 111: */
DPEAOSF = ZOEAOSF_ans;
} 
A_PROC_EXIT(makeoptions);
*ReturnedValue = (DPEAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void UMEAOSF(void)   /* initialise DECS options */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","options.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_BITS * FPEAOSF;  /* YIELD */
A68_39  GPEAOSF;  /* clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/options.a68";
A_config.translation_time = "Wed May  5 17:38:59 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "TMEAOSF (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:59 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS options);
UEAALIB_a68config(LGAALIB_configinfo, YMEAOSF);
 /* line 53: */
 /* line 57: */
 /* line 64: */
 /* line 70: */
 /* line 77: */
 /* line 84: */
 /* line 85: */
 /* line 91: */
 /* line 94: */
 /* line 97: */
 /* line 100: */
 /* line 106: */
 /* line 115: */
{ 
FPEAOSF = (&((&EPEAOSF_ans)->Options)) ;
(*FPEAOSF) = 0X0U;
 /* line 117: */
GPEAOSF = EPEAOSF_ans;
} 
HPEAOSF_null_options = GPEAOSF;
 /* line 123: */
A_PROC_EXIT(DECS options);
} 
#undef NL
/* end of translation of options.a68 */
