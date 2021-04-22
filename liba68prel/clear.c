/* UNAME:CYCAOSF */
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
A_ISTRUCT(A68_CHAR ,55,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 55 CHAR */
A_VECTOR(A68_INT ,A68t40);
typedef struct A68t40  A68_40 ;    /* VECTOR [] INT */
A_VECTOR(A68_REAL ,A68t42);
typedef struct A68t42  A68_42 ;    /* VECTOR [] REAL */
A_STRAIGHT(A68_VOID,A68t43);
typedef struct A68t43  A68_43 ;    /* STRAIGHT MODE41 */
struct A68t41 { A68_INT mode; union {
A68_CHAR * mode1;
A68_VC  mode2;
A68_INT * mode3;
struct A68t40  mode4;
A68_REAL * mode5;
struct A68t42  mode6;
A68_BOOL * mode7;
struct A68t43  mode8;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t41  A68_41 ;    /* UNION(REF CHAR,REF MODE26,REF INT,REF MODE40,REF REAL,REF MODE42,REF BOOL,MODE43)  */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t41 ),(struct A68t41 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE41) VOID */

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
static A68_38   GYCAOSF = {"$Id: clear.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,HYCAOSF,GYCAOSF,55)

A68_VOID  JYCAOSF_clear(A68_41  Any);

A68_VOID  JYCAOSF_clear(A68_41  Any)
{ 
A68_41  KYCAOSF;  /* united object - for case conformity */
A68_CHAR * LYCAOSF_c;
A68_VC  MYCAOSF_str;
A68_CHAR * NYCAOSF_c;
A68_INT  OYCAOSF;  /* forall loop counter */
A68_INT * PYCAOSF_i;
A68_40  QYCAOSF_vi;
A68_INT * RYCAOSF_i;
A68_INT  SYCAOSF;  /* forall loop counter */
A68_REAL * TYCAOSF_r;
A68_42  UYCAOSF_vr;
A68_REAL * VYCAOSF_r;
A68_INT  WYCAOSF;  /* forall loop counter */
A68_BOOL * XYCAOSF_b;
A68_43  YYCAOSF_ct;
A68_INT  ZYCAOSF_i;
A68_INT  AZCAOSF;  /* to part of loop */
A68_43  BZCAOSF;  /* OPERATORS - straight index */
A68_41  CZCAOSF;  /* OPERATORS - straight index result */
A_PROC_ENTRY(clear);
 /* line 49: */
 /* line 50: */
KYCAOSF = Any ;
switch ( KYCAOSF.mode )
{ 
case 1: /* REF CHAR */
LYCAOSF_c = (KYCAOSF.data.mode1);
 /* line 51: */
(*LYCAOSF_c) = ' ';
break;
case 2: /* REF VECTOR [] CHAR */
MYCAOSF_str = (KYCAOSF.data.mode2);
OYCAOSF = MYCAOSF_str.upb -1;
NYCAOSF_c = MYCAOSF_str.data;
for (;OYCAOSF-- >= 0;
(NYCAOSF_c++
) )
{
(*NYCAOSF_c) = ' ';
}
 /* line 52: */
break;
case 3: /* REF INT */
PYCAOSF_i = (KYCAOSF.data.mode3);
 /* line 53: */
(*PYCAOSF_i) = 0;
break;
case 4: /* REF VECTOR [] INT */
QYCAOSF_vi = (KYCAOSF.data.mode4);
SYCAOSF = QYCAOSF_vi.upb -1;
RYCAOSF_i = QYCAOSF_vi.data;
for (;SYCAOSF-- >= 0;
(RYCAOSF_i++
) )
{
(*RYCAOSF_i) = 0;
}
 /* line 54: */
break;
case 5: /* REF REAL */
TYCAOSF_r = (KYCAOSF.data.mode5);
 /* line 55: */
(*TYCAOSF_r) = 0.0;
break;
case 6: /* REF VECTOR [] REAL */
UYCAOSF_vr = (KYCAOSF.data.mode6);
WYCAOSF = UYCAOSF_vr.upb -1;
VYCAOSF_r = UYCAOSF_vr.data;
for (;WYCAOSF-- >= 0;
(VYCAOSF_r++
) )
{
(*VYCAOSF_r) = 0.0;
}
 /* line 56: */
break;
case 7: /* REF BOOL */
XYCAOSF_b = (KYCAOSF.data.mode7);
 /* line 57: */
(*XYCAOSF_b) = A68_FALSE;
break;
case 8: /* STRAIGHT MODE41 */
YYCAOSF_ct = (KYCAOSF.data.mode8);
AZCAOSF = YYCAOSF_ct.upb;
for ( ZYCAOSF_i = 1;
ZYCAOSF_i <= AZCAOSF;
ZYCAOSF_i += 1 )
{ 
JYCAOSF_clear(A_STRINDEX_RTN(YYCAOSF_ct,ZYCAOSF_i,BZCAOSF,CZCAOSF));
}
 /* line 58: */
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(clear);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void DYCAOSF(void)   /* initialise DECS clear */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel","clear.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/clear.a68";
A_config.translation_time = "Wed Apr 21 16:34:02 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "CYCAOSF (from seed file) ";
A_config.spec_change_time = "Wed Apr 21 16:34:02 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS clear);
UEAALIB_a68config(LGAALIB_configinfo, HYCAOSF);
 /* line 41: */
 /* line 45: */
 /* line 47: */
 /* line 60: */
 /* line 62: */
 /* line 63: */
/*SKIP*/;
A_PROC_EXIT(DECS clear);
} 
#undef NL
/* end of translation of clear.a68 */
