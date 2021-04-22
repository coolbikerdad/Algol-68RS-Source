/* UNAME:ETCAOSF */
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
A_ISTRUCT(A68_CHAR ,58,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_REAL ,A68t39,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REAL) REAL */

/* --- Imports from a68config --- */
extern A68_VOID  ABAALIB_a68init(struct A68t33 );
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
static A68_38   ITCAOSF = {"$Id: mathslib.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,JTCAOSF,ITCAOSF,58)
#include <math.h>

#define KTCAOSF_sqrt sqrt
#include <math.h>

#define LTCAOSF_exp exp
#include <math.h>

#define MTCAOSF_ln log
#include <math.h>

#define NTCAOSF_cos cos
#include <math.h>

#define OTCAOSF_sin sin
#include <math.h>

#define PTCAOSF_tan tan
#include <math.h>

#define QTCAOSF_arccos acos
#include <math.h>

#define RTCAOSF_arcsin asin
#include <math.h>

#define STCAOSF_arctan atan
static A68_REAL  TTCAOSF_hp;
A68_REAL  WTCAOSF_halfpi;
A68_REAL  XTCAOSF_pi;
A68_REAL  YTCAOSF_twopi;

A_STATIC A68_VOID  UTCAOSF_anonymous(void);

A_STATIC A68_VOID  UTCAOSF_anonymous(void)
{ 
TTCAOSF_hp = (2.0*STCAOSF_arctan(1.0));
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void FTCAOSF(void)   /* initialise DECS mathslib */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel","mathslib.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_33  VTCAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/mathslib.a68";
A_config.translation_time = "Wed Apr 21 16:34:02 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "ETCAOSF (from seed file) ";
A_config.spec_change_time = "Wed Apr 21 16:34:02 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mathslib);
UEAALIB_a68config(LGAALIB_configinfo, JTCAOSF);
 /* line 42: */
 /* line 43: */
 /* line 44: */
 /* line 45: */
 /* line 46: */
 /* line 47: */
 /* line 48: */
 /* line 49: */
 /* line 50: */
 /* line 52: */
VTCAOSF.fn.fn_global = UTCAOSF_anonymous;
VTCAOSF.nonlocals = A68_NIL;
ABAALIB_a68init(VTCAOSF);
 /* line 54: */
WTCAOSF_halfpi = TTCAOSF_hp;
XTCAOSF_pi = (2.0*WTCAOSF_halfpi);
 /* line 56: */
YTCAOSF_twopi = (2.0*XTCAOSF_pi);
 /* line 58: */
A_PROC_EXIT(DECS mathslib);
} 
#undef NL
/* end of translation of mathslib.a68 */
