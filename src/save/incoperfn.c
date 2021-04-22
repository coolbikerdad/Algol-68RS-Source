/* UNAME:WFAACTR */
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
A_ISTRUCT(A68_CHAR ,59,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 59 CHAR */

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
static A68_38   AGAACTR = {"$Id: incoperfn.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,BGAACTR,AGAACTR,59)
#define CGAACTR_parampackfn 2
#define DGAACTR_trimfn 5
#define EGAACTR_boundpackfn 9
#define FGAACTR_dyopfn 10
#define GGAACTR_monopfn 11
#define HGAACTR_assignfn 15
#define IGAACTR_defaultbdfn 16
#define JGAACTR_dereffn 17
#define KGAACTR_callfn 18
#define LGAACTR_voidfn 19
#define MGAACTR_inttorealfn 24
#define NGAACTR_istovecfn 28
#define OGAACTR_vecfn 34
#define PGAACTR_generatorfn 50
#define QGAACTR_formatfn 51
#define RGAACTR_biopnumbersstart 1000
#define SGAACTR_opnumberdivisor 16
#define TGAACTR_biopnumberdivisor 100
#define UGAACTR_aboperatorsstart 21
#define VGAACTR_aboperatorsend 26
#define WGAACTR_operandsshift 18
static A68_INT  YGAACTR_operandsoffset;
A68_BITS  ZGAACTR_parammask;
 /* line 1: */
 /* line 3: */
void XFAACTR(void)   /* initialise DECS incoperfn */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","-dir",".","incoperfn.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_BITS  XGAACTR;  /* SHL */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/src/incoperfn.a68";
A_config.translation_time = "Sun Apr 18 20:07:50 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "WFAACTR (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:50 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS incoperfn);
UEAALIB_a68config(LGAALIB_configinfo, BGAACTR);
 /* line 42: */
 /* line 43: */
 /* line 44: */
 /* line 45: */
 /* line 46: */
 /* line 47: */
 /* line 48: */
 /* line 49: */
 /* line 50: */
 /* line 51: */
 /* line 52: */
 /* line 53: */
 /* line 54: */
 /* line 55: */
 /* line 59: */
 /* line 60: */
 /* line 64: */
 /* line 65: */
 /* line 66: */
 /* line 72: */
 /* line 73: */
 /* line 76: */
 /* line 77: */
XGAACTR = 01U ;
YGAACTR_operandsoffset = (A68_INT )A_SHL(XGAACTR,WGAACTR_operandsshift);
 /* line 78: */
 /* line 80: */
ZGAACTR_parammask = (A68_BITS )(YGAACTR_operandsoffset-1);
 /* line 101: */
A_PROC_EXIT(DECS incoperfn);
} 
#undef NL
/* end of translation of incoperfn.a68 */
