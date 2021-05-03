/* UNAME:TAAACTR */
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
A_ISTRUCT(A68_CHAR ,64,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 64 CHAR */
struct A68t40{
A68_INT  Nochars;
A_PAD_INT(PAD_1)
A68_INT  Nocases;
A_PAD_INT(PAD_2)
A68_INT  W;
A_PAD_INT(PAD_3)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(INT,INT,INT)  */
struct A68t39{
struct A68t40  Info;
A68_VC  Text;
};
typedef struct A68t39  A68_39 ;    /* STRUCT(MODE40,REF MODE26)  */
struct A68t41{
A68_VC  Representation;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(REF MODE26)  */
struct A68t42{
A68_INT  Mode;
A_PAD_INT(PAD_4)
A68_VC  Denotation;
};
typedef struct A68t42  A68_42 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t43{
A68_INT  Mode;
A_PAD_INT(PAD_5)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_6)
};
typedef struct A68t43  A68_43 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t44{
A68_INT  Mode;
A_PAD_INT(PAD_7)
A68_VC  Nu;
};
typedef struct A68t44  A68_44 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t45{
A68_INT  Mode;
A_PAD_INT(PAD_8)
A68_VC  String;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t46{
A68_INT  Mode;
A_PAD_INT(PAD_9)
A68_INT  Number;
A_PAD_INT(PAD_10)
A68_VC  Insert;
};
typedef struct A68t46  A68_46 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t48{
A68_INT  Nse;
A_PAD_INT(PAD_11)
};
typedef struct A68t48  A68_48 ;    /* STRUCT(INT)  */
struct A68t49{
A68_INT  Labno;
A_PAD_INT(PAD_12)
};
typedef struct A68t49  A68_49 ;    /* STRUCT(INT)  */
struct A68t47 { A68_INT mode; union {
struct A68t48  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t41  mode4;
struct A68t49  mode5;
struct A68t44  mode6;
struct A68t45  mode7;
struct A68t43  mode8;
struct A68t42  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t47  A68_47 ;    /* UNION(MODE48,INT,BOOL,MODE41,MODE49,MODE44,MODE45,MODE43,MODE42)  */
struct A68t50{
A68_INT  Fn;
A_PAD_INT(PAD_13)
A68_INT  Mode;
A_PAD_INT(PAD_14)
A68_INT  Param;
A_PAD_INT(PAD_15)
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,INT,INT)  */
struct A68t51{
A68_INT  Type;
A_PAD_INT(PAD_16)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_INT  Decno;
A_PAD_INT(PAD_18)
};
typedef struct A68t51  A68_51 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t52{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_19)
A68_INT  Mode;
A_PAD_INT(PAD_20)
A68_INT  Rdenno;
A_PAD_INT(PAD_21)
A68_INT  Maxname;
A_PAD_INT(PAD_22)
};
typedef struct A68t52  A68_52 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t53{
A68_INT  W;
A_PAD_INT(PAD_23)
};
typedef struct A68t53  A68_53 ;    /* STRUCT(INT)  */
struct A68t54{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_24)
A68_INT  Status;
A_PAD_INT(PAD_25)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_26)
};
typedef struct A68t54  A68_54 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t55{
A68_INT  Mode;
A_PAD_INT(PAD_27)
A68_BITS  Props;
A_PAD_BITS(PAD_28)
A68_INT  Param;
A_PAD_INT(PAD_29)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t56{
A68_INT  I;
A_PAD_INT(PAD_30)
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT)  */
struct A68t57{
A68_BOOL  Start;
A_PAD_BOOL(PAD_31)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(BOOL)  */
struct A68t58 { A68_INT mode; union {
struct A68t48  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t41  mode4;
struct A68t49  mode5;
struct A68t44  mode6;
struct A68t45  mode7;
struct A68t43  mode8;
struct A68t42  mode9;
struct A68t50  mode10;
struct A68t51  mode11;
struct A68t52  mode12;
struct A68t53  mode13;
struct A68t54  mode14;
struct A68t55  mode15;
struct A68t56  mode16;
struct A68t57  mode17;
struct A68t39  mode18;
struct A68t46  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t58  A68_58 ;    /* UNION(MODE48,INT,BOOL,MODE41,MODE49,MODE44,MODE45,MODE43,MODE42,MODE50,MODE51,MODE52,MODE53,MODE54,MODE55,MODE56,MODE57,MODE39,MODE46)  */
struct A68t59{
A68_INT  Fn;
A_PAD_INT(PAD_32)
A68_INT  Mode;
A_PAD_INT(PAD_33)
A68_BITS  Props;
A_PAD_BITS(PAD_34)
A68_INT  Param;
A_PAD_INT(PAD_35)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t60{
A68_INT  Fn;
A_PAD_INT(PAD_36)
A68_INT  Mode;
A_PAD_INT(PAD_37)
A68_BITS  Props;
A_PAD_BITS(PAD_38)
A68_INT  Resultmode;
A_PAD_INT(PAD_39)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t61{
A68_INT  Fn;
A_PAD_INT(PAD_40)
A68_BITS  Props;
A_PAD_BITS(PAD_41)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,BITS)  */
A_ROW(A68_INT ,A68t63,1);
typedef struct A68t63  A68_63 ;    /* [] INT */
struct A68t62{
A68_INT  Body;
A_PAD_INT(PAD_42)
A68_INT  Moduleno;
A_PAD_INT(PAD_43)
struct A68t63  Actuals;
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT,INT,REF MODE63)  */
struct A68t64{
A68_INT  Moduleno;
A_PAD_INT(PAD_44)
A68_INT  I;
A_PAD_INT(PAD_45)
A68_INT  J;
A_PAD_INT(PAD_46)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t66,1);
typedef struct A68t66  A68_66 ;    /* [] REF MODE26 */
struct A68t65{
A68_INT  Moduleno;
A_PAD_INT(PAD_47)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t66  Ysnames;
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE66)  */
struct A68t67 { A68_INT mode; union {
struct A68t62  mode1;
struct A68t64  mode2;
struct A68t65  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t67  A68_67 ;    /* UNION(MODE62,MODE64,MODE65)  */
struct A68t68 { A68_INT mode; union {
struct A68t48  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t41  mode4;
struct A68t49  mode5;
struct A68t44  mode6;
struct A68t45  mode7;
struct A68t43  mode8;
struct A68t42  mode9;
struct A68t50  mode10;
struct A68t51  mode11;
struct A68t52  mode12;
struct A68t53  mode13;
struct A68t54  mode14;
struct A68t55  mode15;
struct A68t56  mode16;
struct A68t57  mode17;
struct A68t39  mode18;
struct A68t46  mode19;
struct A68t59  mode20;
struct A68t60  mode21;
struct A68t61  mode22;
struct A68t62  mode23;
struct A68t64  mode24;
struct A68t65  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t68  A68_68 ;    /* UNION(MODE48,INT,BOOL,MODE41,MODE49,MODE44,MODE45,MODE43,MODE42,MODE50,MODE51,MODE52,MODE53,MODE54,MODE55,MODE56,MODE57,MODE39,MODE46,MODE59,MODE60,MODE61,MODE62,MODE64,MODE65,VOID)  */

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
static A68_38   XAAACTR = {"$Id: incimperatives.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,YAAACTR,XAAACTR,64)
#define ZAAACTR_emptyfn 1
#define ABAACTR_skipfn 2
#define BBAACTR_nilfn 3
A68_INT  CBAACTR_routinefn;
#define DBAACTR_decsfn 0
#define EBAACTR_iffn 1
#define FBAACTR_casefn 2
#define GBAACTR_caseufn 3
#define HBAACTR_beginfn 4
#define IBAACTR_collbeginfn 5
#define JBAACTR_forfn 6
#define KBAACTR_forallfn 7
#define LBAACTR_separatoroffset 7
#define MBAACTR_thenfn 1
#define NBAACTR_infn 2
#define OBAACTR_inufn 3
#define PBAACTR_commafn 4
#define QBAACTR_commaufn 5
#define RBAACTR_exitfn 6
#define SBAACTR_outfn 7
#define TBAACTR_outufn 8
#define UBAACTR_elsefn 9
#define VBAACTR_collcommafn 10
#define WBAACTR_semifn 11
#define XBAACTR_dofn 12
#define YBAACTR_whilefn 13
A68_INT  ZBAACTR_terminatoroffset;
#define ACAACTR_fifn 1
#define BCAACTR_esacfn 2
#define CCAACTR_esacufn 3
#define DCAACTR_endfn 4
#define ECAACTR_endcollfn 5
#define FCAACTR_odfn 6
#define GCAACTR_routinendfn 7
#define HCAACTR_finishfn 8
#define ICAACTR_optboolfn 9
#define JCAACTR_andthwarn 2
#define KCAACTR_orelwarn 3
#define LCAACTR_announcing 0
#define MCAACTR_aliasing 2
#define NCAACTR_ccbit 002U
#define OCAACTR_operatorbit 004U
#define PCAACTR_valbit 010U
#define QCAACTR_holebit 020U
#define RCAACTR_globscopebit 040U
#define SCAACTR_priobit 0000040U
#define TCAACTR_exitbit 0000010U
#define UCAACTR_semibit 0000020U
#define VCAACTR_heapbit 0000040U
#define WCAACTR_decbit 0000100U
#define XCAACTR_vardecbit 0000200U
#define YCAACTR_compgenbit 0000400U
#define ZCAACTR_elifousebit 0001000U
#define ADAACTR_labbit 0002000U
#define BDAACTR_dontpullbit 0004000U
#define CDAACTR_dyprocbit 0010000U
#define DDAACTR_dyvardecbit 0020000U
#define EDAACTR_dydecbit 0040000U
#define FDAACTR_genprocbit 0100000U
#define GDAACTR_locgenbit 0200000U
#define HDAACTR_locdydecbit 0400000U
#define IDAACTR_forpartbit 001U
#define JDAACTR_frompartbit 002U
#define KDAACTR_bypartbit 004U
#define LDAACTR_topartbit 010U
A68_BITS  MDAACTR_dybits;
#define NDAACTR_dummydec 8
 /* line 1: */
 /* line 3: */
void UAAACTR(void)   /* initialise DECS incimperatives */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","-dir",".","incimperatives.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/src/incimperatives.a68";
A_config.translation_time = "Mon May  3 00:36:16 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "TAAACTR (from seed file) ";
A_config.spec_change_time = "Mon May  3 00:36:16 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS incimperatives);
UEAALIB_a68config(LGAALIB_configinfo, YAAACTR);
 /* line 45: */
 /* line 96: */
 /* line 100: */
 /* line 101: */
 /* line 102: */
 /* line 106: */
CBAACTR_routinefn = (-1);
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 116: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 124: */
 /* line 125: */
 /* line 126: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 135: */
ZBAACTR_terminatoroffset = (LBAACTR_separatoroffset+13);
 /* line 140: */
 /* line 141: */
 /* line 142: */
 /* line 143: */
 /* line 144: */
 /* line 145: */
 /* line 146: */
 /* line 147: */
 /* line 148: */
 /* line 152: */
 /* line 154: */
 /* line 158: */
 /* line 159: */
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 164: */
 /* line 165: */
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 171: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
 /* line 175: */
 /* line 176: */
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 181: */
 /* line 182: */
 /* line 183: */
 /* line 184: */
 /* line 186: */
MDAACTR_dybits = (A68_BITS )((A68_BITS )(CDAACTR_dyprocbit|DDAACTR_dyvardecbit)|EDAACTR_dydecbit);
 /* line 189: */
 /* line 191: */
 /* line 207: */
A_PROC_EXIT(DECS incimperatives);
} 
#undef NL
/* end of translation of incimperatives.a68 */
