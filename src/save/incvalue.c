/* UNAME:FKJACTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t33);
typedef struct A68t33  A68_33 ;    /* STRUCT 7 CHAR */
struct A68t32{
struct A68t33  Name;
A_PAD_ISTRUCT(A68_33 ,PAD_1)
A68_BOOL  Set;
A_PAD_BOOL(PAD_2)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(MODE33,BOOL)  */
struct A68t34{
A68_INT  Labno;
A_PAD_INT(PAD_3)
};
typedef struct A68t34  A68_34 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t35,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE26) MODE26 */
A_ISTRUCT(A68_CHAR ,32,A68t36);
typedef struct A68t36  A68_36 ;    /* STRUCT 32 CHAR */
struct A68t37{
struct A68t33  Prefix;
A_PAD_ISTRUCT(A68_33 ,PAD_4)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_5)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_6)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_7)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_8)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_9)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t37  A68_37 ;    /* STRUCT(MODE33,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t40 ,A68t39);
typedef struct A68t39  A68_39 ;    /* VECTOR [] MODE40 */
A_VECTOR(struct A68t46 ,A68t45);
typedef struct A68t45  A68_45 ;    /* VECTOR [] MODE46 */
struct A68t46{
struct A68t36  N;
A_PAD_ISTRUCT(A68_36 ,PAD_10)
struct A68t36  F;
A_PAD_ISTRUCT(A68_36 ,PAD_11)
A68_INT  Level;
A_PAD_INT(PAD_12)
};
typedef struct A68t46  A68_46 ;    /* STRUCT(MODE36,MODE36,INT)  */
struct A68t44 { A68_INT mode; union {
A68_VC  mode1;
struct A68t45  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t44  A68_44 ;    /* UNION(REF MODE26,REF MODE45)  */
struct A68t41{
struct A68t36  F;
A_PAD_ISTRUCT(A68_36 ,PAD_13)
A68_INT  No;
A_PAD_INT(PAD_14)
A68_INT  Nl;
A_PAD_INT(PAD_15)
A68_INT  Ng;
A_PAD_INT(PAD_16)
struct A68t44  U;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(MODE36,INT,INT,INT,MODE44)  */
A_VECTOR(struct A68t37 ,A68t42);
typedef struct A68t42  A68_42 ;    /* VECTOR [] MODE37 */
A_VECTOR(struct A68t33 ,A68t43);
typedef struct A68t43  A68_43 ;    /* VECTOR [] MODE33 */
struct A68t40{
struct A68t41  Xs;
struct A68t33  Ys;
A_PAD_ISTRUCT(A68_33 ,PAD_17)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_18)
struct A68t42  Keptinfo;
struct A68t43  Cnames;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE41,MODE33,LONG INT,REF MODE42,REF MODE43)  */
struct A68t38{
struct A68t33  Uname;
A_PAD_ISTRUCT(A68_33 ,PAD_19)
struct A68t33  Lname;
A_PAD_ISTRUCT(A68_33 ,PAD_20)
struct A68t33  Gname;
A_PAD_ISTRUCT(A68_33 ,PAD_21)
struct A68t39  Specs;
};
typedef struct A68t38  A68_38 ;    /* STRUCT(MODE33,MODE33,MODE33,REF MODE39)  */

A_PROCEDURE(A68_VOID ,A68t47,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t48,(void),(void *));
typedef struct A68t48  A68_48 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t48 ),(struct A68t48 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE48) VOID */

A_PROCEDURE(A68_VOID ,A68t50,(A68_VC ),(A68_VC ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t51,(struct A68t50 ),(struct A68t50 ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE50) VOID */

A_PROCEDURE(A68_VOID ,A68t52,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t53);
typedef struct A68t53  A68_53 ;    /* STRUCT 58 CHAR */
struct A68t55{
A68_INT  Fn;
A_PAD_INT(PAD_22)
A68_INT  Param;
A_PAD_INT(PAD_23)
struct A68t62 * Operands;
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,INT,REF MODE62)  */
struct A68t56{
A68_INT  Nse;
A_PAD_INT(PAD_24)
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT)  */
struct A68t57{
A68_INT  Rdenno;
A_PAD_INT(PAD_25)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT)  */
struct A68t58{
A68_INT  Idno;
A_PAD_INT(PAD_26)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT)  */
struct A68t59{
struct A68t33  Name;
A_PAD_ISTRUCT(A68_33 ,PAD_27)
A68_INT  Mode;
A_PAD_INT(PAD_28)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE33,INT)  */
struct A68t60 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t57  mode2;
struct A68t58  mode4;
struct A68t59  mode5;
A68_VC  mode6;
struct A68t34  mode7;
struct A68t56  mode8;
struct A68t55  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t60  A68_60 ;    /* UNION(LONG BITS,MODE57,VOID,MODE58,MODE59,MODE26,MODE34,MODE56,MODE55)  */
struct A68t61{
A68_INT  Mode;
A_PAD_INT(PAD_29)
A68_BITS  Info;
A_PAD_BITS(PAD_30)
struct A68t60  Extra;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,BITS,MODE60)  */
struct A68t62{
struct A68t61  Value;
struct A68t62 * Rest;
};
typedef struct A68t62  A68_62 ;    /* STRUCT(MODE61,REF MODE62)  */
struct A68t63{
struct A68t61 * Value;
struct A68t32 * End;
A68_INT  Type;
A_PAD_INT(PAD_31)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(REF MODE61,REF MODE32,INT)  */
A_ISTRUCT(A68_CHAR ,16,A68t64);
typedef struct A68t64  A68_64 ;    /* STRUCT 16 CHAR */

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


/* --- Imports from centities --- */
/* --- End of imports from centities --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ODAACTR(void);   /* incinstallation */
extern void THAACTR(void);   /* centities */
/* --- end of DECS initialisation functions --- */
static A68_53   JKJACTR = {"$Id: incvalue.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,KKJACTR,JKJACTR,58)
A68_61 * LKJACTR_nilvalue;
A68_62 * MKJACTR_nilvaluelist;
#define NKJACTR_noidno 0
#define OKJACTR_faultmode 6
A68_BITS  PKJACTR_defaultinfo;
#define QKJACTR_constant 0X1U
#define RKJACTR_atomic 0X2U
#define SKJACTR_effects 0X4U
#define TKJACTR_nonloc 0X8U
#define UKJACTR_voided 0X10U
#define VKJACTR_lvalue 0X20U
#define WKJACTR_isnil 0X40U
#define XKJACTR_fxwarn 0X80U
static A68_64   ZKJACTR = {"/* SKIP VALUE */"}; 
A_GISVEC(A68_VC ,ALJACTR,ZKJACTR,16)
A68_61  DLJACTR_skipvalue;
#define ELJACTR_voidresult 0
#define FLJACTR_memoryresult 1
#define GLJACTR_registerresult 2
#define HLJACTR_routineresult 3
#define ILJACTR_enquiryresult 4
#define JLJACTR_optboolresult 5
#define KLJACTR_noparticularresult 6
 /* line 1: */
 /* line 3: */
void GKJACTR(void)   /* initialise DECS incvalue */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","-dir",".","incvalue.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","./incinstallation.m","./centities.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_61  YKJACTR;  /* collateral clause result */
A68_60  BLJACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CLJACTR;  /* YIELD */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ODAACTR();   /* USE incinstallation */
THAACTR();   /* USE centities */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/src/incvalue.a68";
A_config.translation_time = "Sun Apr 18 20:07:52 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "FKJACTR (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:52 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS incvalue);
UEAALIB_a68config(LGAALIB_configinfo, KKJACTR);
 /* line 42: */
 /* line 67: */
 /* line 69: */
LKJACTR_nilvalue = (A68_61 *)A68_NIL;
 /* line 70: */
MKJACTR_nilvaluelist = (A68_62 *)A68_NIL;
 /* line 72: */
 /* line 77: */
PKJACTR_defaultinfo = (A68_BITS )0;
 /* line 79: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 88: */
YKJACTR.Mode = OKJACTR_faultmode;
YKJACTR.Info = PKJACTR_defaultinfo;
CLJACTR = ALJACTR ;
YKJACTR.Extra = A_UNITE(BLJACTR,mode6,6,CLJACTR);
DLJACTR_skipvalue = YKJACTR;
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 99: */
 /* line 101: */
 /* line 115: */
/*SKIP*/;
A_PROC_EXIT(DECS incvalue);
} 
#undef NL
/* end of translation of incvalue.a68 */
