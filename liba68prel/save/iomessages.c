/* UNAME:POFAOSF */
#include <algol68/Asupport.h>
struct A68t31{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t32 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t31  A68_31 ;    /* STRUCT(INT,REF MODE32,BITS)  */
A_VECTOR(struct A68t34 ,A68t33);
typedef struct A68t33  A68_33 ;    /* VECTOR [] MODE34 */
struct A68t34{
struct A68t31  Msgno;
A68_VC  Text;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(MODE31,REF MODE26)  */
struct A68t32{
A68_VC  Name;
struct A68t33  Messages;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(REF MODE26,REF MODE33)  */

A_PROCEDURE(A68_VOID ,A68t35,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_VC ,A68t36);
typedef struct A68t36  A68_36 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t37,(A68_BOOL ,struct A68t36 *),(A68_BOOL ,struct A68t36 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(BOOL) MODE36 */

A_PROCEDURE(A68_VOID ,A68t38,(struct A68t31 ,struct A68t36 ),(struct A68t31 ,struct A68t36 ,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE31,MODE36) VOID */
A_VECTOR(struct A68t41 ,A68t40);
typedef struct A68t40  A68_40 ;    /* VECTOR [] MODE41 */
struct A68t41{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t39{
A68_VC  Name;
struct A68t33  Messages;
A68_BOOL * Initialised;
struct A68t40  Setup;
};
typedef struct A68t39  A68_39 ;    /* STRUCT(MODE26,REF MODE33,REF BOOL,MODE40)  */

A_PROCEDURE(A68_VOID ,A68t42,(A68_BOOL ,struct A68t39 *),(A68_BOOL ,struct A68t39 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(BOOL) MODE39 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t44);
typedef struct A68t44  A68_44 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t36 ,struct A68t44 *),(struct A68t36 ,struct A68t44 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE36) MODE44 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t44 ,struct A68t36 *),(struct A68t44 ,struct A68t36 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(MODE44) MODE36 */
struct A68t48 ;

A_PROCEDURE(A68_BOOL ,A68t47,(struct A68t48 ),(struct A68t48 ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE48) BOOL */
struct A68t48 { A68_INT mode; union {
struct A68t31  mode1;
struct A68t34  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t48  A68_48 ;    /* UNION(MODE31,MODE34)  */

A_PROCEDURE(A68_INT ,A68t49,(struct A68t31 ),(struct A68t31 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE31) INT */

A_PROCEDURE(A68_VOID ,A68t50,(A68_INT ,struct A68t39 ,struct A68t31 *),(A68_INT ,struct A68t39 ,struct A68t31 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(INT,MODE39) MODE31 */

A_PROCEDURE(A68_BOOL ,A68t51,(struct A68t31 ,struct A68t39 ),(struct A68t31 ,struct A68t39 ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE31,MODE39) BOOL */

A_PROCEDURE(A68_VOID ,A68t52,(struct A68t31 ,struct A68t36 ,struct A68t34 *),(struct A68t31 ,struct A68t36 ,struct A68t34 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE31,MODE36) MODE34 */

A_PROCEDURE(A68_VOID ,A68t53,(void),(void *));
typedef struct A68t53  A68_53 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t53 ),(struct A68t53 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t55,(A68_VC ),(A68_VC ,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t56,(struct A68t55 ),(struct A68t55 ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE55) VOID */

A_PROCEDURE(A68_VOID ,A68t57,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t58);
typedef struct A68t58  A68_58 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t59);
typedef struct A68t59  A68_59 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_VOID ,A68t60,(A68_BOOL ,struct A68t33 *),(A68_BOOL ,struct A68t33 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(BOOL) MODE33 */
A_ISTRUCT(A68_CHAR ,46,A68t61);
typedef struct A68t61  A68_61 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t62);
typedef struct A68t62  A68_62 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t63);
typedef struct A68t63  A68_63 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t64);
typedef struct A68t64  A68_64 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t65);
typedef struct A68t65  A68_65 ;    /* STRUCT 47 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t66);
typedef struct A68t66  A68_66 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t67);
typedef struct A68t67  A68_67 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t68);
typedef struct A68t68  A68_68 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t69);
typedef struct A68t69  A68_69 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t70);
typedef struct A68t70  A68_70 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t71);
typedef struct A68t71  A68_71 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t72);
typedef struct A68t72  A68_72 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t73);
typedef struct A68t73  A68_73 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t74);
typedef struct A68t74  A68_74 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t75);
typedef struct A68t75  A68_75 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t76);
typedef struct A68t76  A68_76 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t77);
typedef struct A68t77  A68_77 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,54,A68t78);
typedef struct A68t78  A68_78 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t79);
typedef struct A68t79  A68_79 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t80);
typedef struct A68t80  A68_80 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t81);
typedef struct A68t81  A68_81 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t82);
typedef struct A68t82  A68_82 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(struct A68t41 ,35,A68t83);
typedef struct A68t83  A68_83 ;    /* STRUCT 35 MODE41 */

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ,struct A68t31 *),(A68_INT ,struct A68t31 *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT) MODE31 */

A_PROCEDURE(A68_BOOL ,A68t85,(struct A68t31 ),(struct A68t31 ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE31) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from messageproc --- */
extern A68_BITS  KVAAOSF_fatal_class;
extern A68_BITS  LVAAOSF_user_class;
extern A68_BITS  OVAAOSF_log_class;
extern A68_BITS  TVAAOSF_diag1_class;
extern A68_VOID  XYAAOSF_make_msgno(A68_INT ,struct A68t39 ,A68_31 *);
extern A68_BOOL  YZAAOSF_is_facility_msg(struct A68t31 ,struct A68t39 );
/* --- End of imports from messageproc --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ZRAAOSF(void);   /* messageproc */
/* --- end of DECS initialisation functions --- */
static A68_58   TOFAOSF = {"$Id: iomessages.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,UOFAOSF,TOFAOSF,60)
#define VOFAOSF_max_io_messages 35
static A68_59   XOFAOSF = {"ioprocs"}; 
A_GISVEC(A68_VC ,YOFAOSF,XOFAOSF,7)
static A68_61   GPFAOSF = {"* Error writing to log file - closing file \"*\""}; 
A_GISVEC(A68_VC ,HPFAOSF,GPFAOSF,46)
static A68_62   IPFAOSF = {"* Error writing to output file - closing file \"*\""}; 
A_GISVEC(A68_VC ,JPFAOSF,IPFAOSF,49)
static A68_63   KPFAOSF = {"Input file \"*\" closed "}; 
A_GISVEC(A68_VC ,LPFAOSF,KPFAOSF,22)
static A68_64   MPFAOSF = {"Line of text read from file \"*\" is too long"}; 
A_GISVEC(A68_VC ,NPFAOSF,MPFAOSF,43)
static A68_65   OPFAOSF = {"Too many END-OF-FILEs encountered on input line"}; 
A_GISVEC(A68_VC ,PPFAOSF,OPFAOSF,47)
static A68_66   QPFAOSF = {"END-OF-FILE found on input line"}; 
A_GISVEC(A68_VC ,RPFAOSF,QPFAOSF,31)
static A68_67   SPFAOSF = {"Input line too long"}; 
A_GISVEC(A68_VC ,TPFAOSF,SPFAOSF,19)
static A68_68   UPFAOSF = {"From *"}; 
A_GISVEC(A68_VC ,VPFAOSF,UPFAOSF,6)
static A68_69   WPFAOSF = {"Input error in non-interactive working"}; 
A_GISVEC(A68_VC ,XPFAOSF,WPFAOSF,38)
static A68_67   YPFAOSF = {"No input files open"}; 
A_GISVEC(A68_VC ,ZPFAOSF,YPFAOSF,19)
static A68_70   AQFAOSF = {"Reading from \"*\""}; 
A_GISVEC(A68_VC ,BQFAOSF,AQFAOSF,16)
static A68_67   CQFAOSF = {"No input files open"}; 
A_GISVEC(A68_VC ,DQFAOSF,CQFAOSF,19)
static A68_71   HQFAOSF = {"No input file to resume"}; 
A_GISVEC(A68_VC ,IQFAOSF,HQFAOSF,23)
static A68_72   JQFAOSF = {"Input file not suspended"}; 
A_GISVEC(A68_VC ,KQFAOSF,JQFAOSF,24)
static A68_62   LQFAOSF = {"This command may only be given from an input file"}; 
A_GISVEC(A68_VC ,MQFAOSF,LQFAOSF,49)
static A68_73   NQFAOSF = {"Input file suspended due to ONLINE command"}; 
A_GISVEC(A68_VC ,OQFAOSF,NQFAOSF,42)
static A68_74   PQFAOSF = {"You are already using a log file, use \"dontlog\" first"}; 
A_GISVEC(A68_VC ,QQFAOSF,PQFAOSF,53)
static A68_75   RQFAOSF = {"* log file  \"*\"  started on  *"}; 
A_GISVEC(A68_VC ,SQFAOSF,RQFAOSF,30)
static A68_76   TQFAOSF = {"Log file  \"*\"  closed"}; 
A_GISVEC(A68_VC ,UQFAOSF,TQFAOSF,21)
static A68_77   VQFAOSF = {"Not using a log file"}; 
A_GISVEC(A68_VC ,WQFAOSF,VQFAOSF,20)
static A68_78   XQFAOSF = {"You are already writing a file, use \"dontoutput\" first"}; 
A_GISVEC(A68_VC ,YQFAOSF,XQFAOSF,54)
static A68_64   ZQFAOSF = {"COM  * output file  \"*\"  started on  *  MOC"}; 
A_GISVEC(A68_VC ,ARFAOSF,ZQFAOSF,43)
static A68_72   BRFAOSF = {"Output file  \"*\"  closed"}; 
A_GISVEC(A68_VC ,CRFAOSF,BRFAOSF,24)
static A68_72   DRFAOSF = {"Not using an output file"}; 
A_GISVEC(A68_VC ,ERFAOSF,DRFAOSF,24)
static A68_79   FRFAOSF = {"Screen page length too short"}; 
A_GISVEC(A68_VC ,GRFAOSF,FRFAOSF,28)
static A68_80   HRFAOSF = {"Screen page length is * lines"}; 
A_GISVEC(A68_VC ,IRFAOSF,HRFAOSF,29)
static A68_71   JRFAOSF = {"Output width too narrow"}; 
A_GISVEC(A68_VC ,KRFAOSF,JRFAOSF,23)
static A68_63   LRFAOSF = {"Output  width too wide"}; 
A_GISVEC(A68_VC ,MRFAOSF,LRFAOSF,22)
static A68_81   NRFAOSF = {"Output  width is now * characters"}; 
A_GISVEC(A68_VC ,ORFAOSF,NRFAOSF,33)
static A68_66   PRFAOSF = {"$$$Output file width too narrow"}; 
A_GISVEC(A68_VC ,QRFAOSF,PRFAOSF,31)
static A68_80   RRFAOSF = {"$$$Output file width too wide"}; 
A_GISVEC(A68_VC ,SRFAOSF,RRFAOSF,29)
static A68_82   TRFAOSF = {"$$$Output file width is now * characters"}; 
A_GISVEC(A68_VC ,URFAOSF,TRFAOSF,40)
static A68_39  WRFAOSF_io_facility;
static A68_34 * ESFAOSF_message;

A_STATIC A68_VOID  APFAOSF_generator(A68_BOOL  ZOFAOSF_anonymous, A68_33  *ReturnedValue);

A68_VOID  YRFAOSF_io_msg(A68_INT  Number, A68_31  *ReturnedValue);

A68_BOOL  CSFAOSF_is_io_msg(A68_31  Msgno);

A_STATIC A68_VOID  APFAOSF_generator(A68_BOOL  ZOFAOSF_anonymous, A68_33  *ReturnedValue)
{ 
A68_33  BPFAOSF;  /* clause result */
A68_33  CPFAOSF;  /* OPERATORS - dynamic generator */
{ 
CPFAOSF.upb = VOFAOSF_max_io_messages ;
( ZOFAOSF_anonymous? A_VLOC(A68_34 ,CPFAOSF): A_VHEAP(A68_34 ,CPFAOSF) );
BPFAOSF = CPFAOSF;
} 
*ReturnedValue = (BPFAOSF);
return;
} 
#undef NL

A68_VOID  YRFAOSF_io_msg(A68_INT  Number, A68_31  *ReturnedValue)
{ 
A68_31  ZRFAOSF;  /* clause result */
A68_31  ASFAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_msg);
XYAAOSF_make_msgno( Number, WRFAOSF_io_facility, &ASFAOSF );
ZRFAOSF = ASFAOSF;
A_PROC_EXIT(io_msg);
*ReturnedValue = (ZRFAOSF);
return;
} 
#undef NL

A68_BOOL  CSFAOSF_is_io_msg(A68_31  Msgno)
{ 
A68_BOOL  DSFAOSF;  /* clause result */
A_PROC_ENTRY(is_io_msg);
DSFAOSF = YZAAOSF_is_facility_msg(Msgno, WRFAOSF_io_facility);
A_PROC_EXIT(is_io_msg);
return( DSFAOSF );
} 
#undef NL
 /* line 1: */
 /* line 4: */
void QOFAOSF(void)   /* initialise DECS iomessages */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","iomessages.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/messageproc.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_39  WOFAOSF;  /* collateral clause result */
A68_33  DPFAOSF;  /* avoid structure result */
A68_BOOL * EPFAOSF;  /* YIELD */
A68_83  FPFAOSF;  /* collateral clause result */
A68_VC  EQFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FQFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GQFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_40  VRFAOSF;  /* OPERATORS - istruct -> vector */
A68_33  FSFAOSF;  /* forall yield */
A68_INT  GSFAOSF;  /* forall loop counter */
A68_34  HSFAOSF;  /* collateral clause result */
A68_VC  ISFAOSF;  /* OPERATORS - nil -> mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ZRAAOSF();   /* USE messageproc */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/iomessages.a68";
A_config.translation_time = "Sun Apr 18 20:07:50 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "POFAOSF (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:50 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS iomessages);
UEAALIB_a68config(LGAALIB_configinfo, UOFAOSF);
 /* line 48: */
 /* line 50: */
WOFAOSF.Name = YOFAOSF;
 /* line 51: */
APFAOSF_generator( A68_TRUE, &DPFAOSF );
WOFAOSF.Messages = DPFAOSF;
 /* line 52: */
EPFAOSF = A_LOC(A68_BOOL ) ;
(*EPFAOSF) = A68_FALSE ;
WOFAOSF.Initialised = EPFAOSF;
 /* line 53: */
FPFAOSF.data[0].Number = 1;
FPFAOSF.data[0].Class = LVAAOSF_user_class;
 /* line 54: */
FPFAOSF.data[0].Text = HPFAOSF;
FPFAOSF.data[1].Number = 2;
FPFAOSF.data[1].Class = LVAAOSF_user_class;
 /* line 55: */
FPFAOSF.data[1].Text = JPFAOSF;
FPFAOSF.data[2].Number = 3;
FPFAOSF.data[2].Class = OVAAOSF_log_class;
 /* line 56: */
FPFAOSF.data[2].Text = LPFAOSF;
FPFAOSF.data[3].Number = 4;
FPFAOSF.data[3].Class = LVAAOSF_user_class;
 /* line 57: */
FPFAOSF.data[3].Text = NPFAOSF;
FPFAOSF.data[4].Number = 5;
FPFAOSF.data[4].Class = KVAAOSF_fatal_class;
 /* line 58: */
FPFAOSF.data[4].Text = PPFAOSF;
FPFAOSF.data[5].Number = 6;
FPFAOSF.data[5].Class = LVAAOSF_user_class;
 /* line 59: */
FPFAOSF.data[5].Text = RPFAOSF;
FPFAOSF.data[6].Number = 7;
FPFAOSF.data[6].Class = LVAAOSF_user_class;
 /* line 60: */
FPFAOSF.data[6].Text = TPFAOSF;
FPFAOSF.data[7].Number = 8;
FPFAOSF.data[7].Class = OVAAOSF_log_class;
 /* line 61: */
FPFAOSF.data[7].Text = VPFAOSF;
FPFAOSF.data[8].Number = 9;
FPFAOSF.data[8].Class = KVAAOSF_fatal_class;
 /* line 62: */
FPFAOSF.data[8].Text = XPFAOSF;
FPFAOSF.data[9].Number = 10;
FPFAOSF.data[9].Class = LVAAOSF_user_class;
 /* line 64: */
FPFAOSF.data[9].Text = ZPFAOSF;
FPFAOSF.data[10].Number = 11;
FPFAOSF.data[10].Class = OVAAOSF_log_class;
 /* line 65: */
FPFAOSF.data[10].Text = BQFAOSF;
FPFAOSF.data[11].Number = 12;
FPFAOSF.data[11].Class = LVAAOSF_user_class;
 /* line 66: */
FPFAOSF.data[11].Text = DQFAOSF;
FPFAOSF.data[12].Number = 13;
FPFAOSF.data[12].Class = OVAAOSF_log_class;
 /* line 67: */
FPFAOSF.data[12].Text = A_HVEC(EQFAOSF,'*',A68_CHAR );
FPFAOSF.data[13].Number = 14;
FPFAOSF.data[13].Class = OVAAOSF_log_class;
 /* line 68: */
FPFAOSF.data[13].Text = A_HVEC(FQFAOSF,'*',A68_CHAR );
FPFAOSF.data[14].Number = 15;
FPFAOSF.data[14].Class = TVAAOSF_diag1_class;
 /* line 69: */
FPFAOSF.data[14].Text = A_HVEC(GQFAOSF,'*',A68_CHAR );
FPFAOSF.data[15].Number = 16;
FPFAOSF.data[15].Class = LVAAOSF_user_class;
 /* line 70: */
FPFAOSF.data[15].Text = IQFAOSF;
FPFAOSF.data[16].Number = 17;
FPFAOSF.data[16].Class = LVAAOSF_user_class;
 /* line 71: */
FPFAOSF.data[16].Text = KQFAOSF;
FPFAOSF.data[17].Number = 18;
FPFAOSF.data[17].Class = LVAAOSF_user_class;
 /* line 72: */
FPFAOSF.data[17].Text = MQFAOSF;
FPFAOSF.data[18].Number = 19;
FPFAOSF.data[18].Class = OVAAOSF_log_class;
 /* line 73: */
FPFAOSF.data[18].Text = OQFAOSF;
FPFAOSF.data[19].Number = 20;
FPFAOSF.data[19].Class = LVAAOSF_user_class;
 /* line 75: */
FPFAOSF.data[19].Text = QQFAOSF;
FPFAOSF.data[20].Number = 21;
FPFAOSF.data[20].Class = OVAAOSF_log_class;
 /* line 76: */
FPFAOSF.data[20].Text = SQFAOSF;
FPFAOSF.data[21].Number = 22;
FPFAOSF.data[21].Class = OVAAOSF_log_class;
 /* line 77: */
FPFAOSF.data[21].Text = UQFAOSF;
FPFAOSF.data[22].Number = 23;
FPFAOSF.data[22].Class = LVAAOSF_user_class;
 /* line 78: */
FPFAOSF.data[22].Text = WQFAOSF;
FPFAOSF.data[23].Number = 24;
FPFAOSF.data[23].Class = LVAAOSF_user_class;
 /* line 79: */
FPFAOSF.data[23].Text = YQFAOSF;
FPFAOSF.data[24].Number = 25;
FPFAOSF.data[24].Class = OVAAOSF_log_class;
 /* line 80: */
FPFAOSF.data[24].Text = ARFAOSF;
FPFAOSF.data[25].Number = 26;
FPFAOSF.data[25].Class = OVAAOSF_log_class;
 /* line 81: */
FPFAOSF.data[25].Text = CRFAOSF;
FPFAOSF.data[26].Number = 27;
FPFAOSF.data[26].Class = LVAAOSF_user_class;
 /* line 82: */
FPFAOSF.data[26].Text = ERFAOSF;
FPFAOSF.data[27].Number = 28;
FPFAOSF.data[27].Class = LVAAOSF_user_class;
 /* line 83: */
FPFAOSF.data[27].Text = GRFAOSF;
FPFAOSF.data[28].Number = 29;
FPFAOSF.data[28].Class = OVAAOSF_log_class;
 /* line 84: */
FPFAOSF.data[28].Text = IRFAOSF;
FPFAOSF.data[29].Number = 30;
FPFAOSF.data[29].Class = LVAAOSF_user_class;
 /* line 86: */
FPFAOSF.data[29].Text = KRFAOSF;
FPFAOSF.data[30].Number = 31;
FPFAOSF.data[30].Class = LVAAOSF_user_class;
 /* line 87: */
FPFAOSF.data[30].Text = MRFAOSF;
FPFAOSF.data[31].Number = 32;
FPFAOSF.data[31].Class = OVAAOSF_log_class;
 /* line 88: */
FPFAOSF.data[31].Text = ORFAOSF;
FPFAOSF.data[32].Number = 33;
FPFAOSF.data[32].Class = LVAAOSF_user_class;
 /* line 89: */
FPFAOSF.data[32].Text = QRFAOSF;
FPFAOSF.data[33].Number = 34;
FPFAOSF.data[33].Class = LVAAOSF_user_class;
 /* line 90: */
FPFAOSF.data[33].Text = SRFAOSF;
FPFAOSF.data[34].Number = 35;
FPFAOSF.data[34].Class = OVAAOSF_log_class;
 /* line 91: */
FPFAOSF.data[34].Text = URFAOSF;
WOFAOSF.Setup = A_HISVEC(VRFAOSF,FPFAOSF,35,A68_41 );
WRFAOSF_io_facility = WOFAOSF;
 /* line 93: */
 /* line 95: */
 /* line 97: */
 /* line 98: */
FSFAOSF = WRFAOSF_io_facility.Messages ;
GSFAOSF = FSFAOSF.upb -1;
ESFAOSF_message = FSFAOSF.data;
for (;GSFAOSF-- >= 0;
(ESFAOSF_message++
) )
{
HSFAOSF.Msgno.Number = 0;
HSFAOSF.Msgno.Facility = (A68_32 *)A68_NIL;
HSFAOSF.Msgno.Class = 0X0U;
HSFAOSF.Text = A_VVAC(ISFAOSF);
(*ESFAOSF_message) = HSFAOSF;
}
 /* line 100: */
 /* line 101: */
A_PROC_EXIT(DECS iomessages);
} 
#undef NL
/* end of translation of iomessages.a68 */
