/* UNAME:YDAACTR */
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
static A68_38   CEAACTR = {"$Id: incmode.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,DEAACTR,CEAACTR,57)
#define EEAACTR_primitive 1
#define FEAACTR_proc 2
#define GEAACTR_procp 3
#define HEAACTR_union 4
#define IEAACTR_struct 5
#define JEAACTR_istruct 6
#define KEAACTR_row 7
#define LEAACTR_vector 8
#define MEAACTR_flexrow 9
#define NEAACTR_flexvector 10
#define OEAACTR_straight 11
#define PEAACTR_nomode 0
#define QEAACTR_vacmode 1
#define REAACTR_skipmode 2
#define SEAACTR_nilmode 3
#define TEAACTR_gotomode 4
#define UEAACTR_voidmode 5
#define VEAACTR_faultmode 6
#define WEAACTR_boolmode 7
#define XEAACTR_charmode 8
#define YEAACTR_formatmode 9
#define ZEAACTR_shortbitsmode 10
#define AFAACTR_bitsmode 11
#define BFAACTR_longbitsmode 12
#define CFAACTR_longlongbitsmode 13
#define DFAACTR_shortintmode 14
#define EFAACTR_intmode 15
#define FFAACTR_longintmode 16
#define GFAACTR_longlongintmode 17
#define HFAACTR_shortrealmode 18
#define IFAACTR_realmode 19
#define JFAACTR_longrealmode 20
#define KFAACTR_longlongrealmode 21
#define LFAACTR_shortcomplmode 22
#define MFAACTR_complmode 23
#define NFAACTR_longcomplmode 24
#define OFAACTR_longlongcomplmode 25
#define PFAACTR_vectorrowofcharmode 26
#define QFAACTR_rowofcharmode 27
#define RFAACTR_collatmode 28
#define SFAACTR_xtypemode 29
#define TFAACTR_ytypemode 30
#define UFAACTR_firstnonfixedmode 31
#define VFAACTR_refmark 1024
A68_INT  WFAACTR_refrefmark;
 /* line 1: */
 /* line 3: */
void ZDAACTR(void)   /* initialise DECS incmode */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","-dir",".","incmode.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/src/incmode.a68";
A_config.translation_time = "Sun Apr 18 20:07:50 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "YDAACTR (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:50 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS incmode);
UEAALIB_a68config(LGAALIB_configinfo, DEAACTR);
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
 /* line 54: */
 /* line 55: */
 /* line 56: */
 /* line 57: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
 /* line 63: */
 /* line 64: */
 /* line 65: */
 /* line 66: */
 /* line 67: */
 /* line 68: */
 /* line 69: */
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 75: */
 /* line 76: */
 /* line 77: */
 /* line 78: */
 /* line 79: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 88: */
 /* line 90: */
 /* line 91: */
 /* line 93: */
WFAACTR_refrefmark = (VFAACTR_refmark+VFAACTR_refmark);
 /* line 106: */
A_PROC_EXIT(DECS incmode);
} 
#undef NL
/* end of translation of incmode.a68 */
