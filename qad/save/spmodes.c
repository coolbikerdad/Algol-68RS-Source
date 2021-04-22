/* UNAME:AAAAASP */
#include <algol68/Asupport.h>
struct A68t31 { A68_INT mode; union {
A68_LINT  mode1;
A68_INT  mode2;
A68_SINT  mode3;
A68_SSINT  mode4;
A68_REAL  mode5;
A68_SREAL  mode6;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t31  A68_31 ;    /* UNION(LONG INT,INT,SHORT INT,SHORT SHORT INT,REAL,SHORT REAL)  */
#define A68_32  A68_RC 
#define A68t32 A68t27            /* FLEX [] CHAR */
A_ISTRUCT(A68_CHAR ,16000000,A68t34);
typedef struct A68t34  A68_34 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t34 *,16000000,A68t36);
typedef struct A68t36  A68_36 ;    /* STRUCT 16000000 REF MODE34 */
struct A68t37{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_1)
};
typedef struct A68t37  A68_37 ;    /* STRUCT(MODE26,INT)  */
struct A68t38{
A68_BITS * Cp;
struct A68t34 * Env;
};
typedef struct A68t38  A68_38 ;    /* STRUCT(REF BITS,REF MODE34)  */
struct A68t39{
A68_CHAR * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_2)
A68_INT  Upb;
A_PAD_INT(PAD_3)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(REF CHAR,BITS,INT)  */
struct A68t40{
A68_BITS * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_4)
A68_INT  Upb;
A_PAD_INT(PAD_5)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF BITS,BITS,INT)  */
struct A68t41{
A68_INT * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_6)
A68_INT  Upb;
A_PAD_INT(PAD_7)
};
typedef struct A68t41  A68_41 ;    /* STRUCT(REF INT,BITS,INT)  */
A_ISTRUCT(A68_BITS ,8,A68t42);
typedef struct A68t42  A68_42 ;    /* STRUCT 8 BITS */
struct A68t43{
A68_VC  Start;
A68_INT  Max;
A_PAD_INT(PAD_8)
A68_INT  Valid;
A_PAD_INT(PAD_9)
A68_INT  Pos;
A_PAD_INT(PAD_10)
A68_BOOL  Writeback;
A_PAD_BOOL(PAD_11)
A68_BOOL  Flushafterput;
A_PAD_BOOL(PAD_12)
};
typedef struct A68t43  A68_43 ;    /* STRUCT(REF MODE26,INT,INT,INT,BOOL,BOOL)  */
struct A68t45{
A68_BOOL  Binpossible;
A_PAD_BOOL(PAD_13)
A68_BOOL  Putpossible;
A_PAD_BOOL(PAD_14)
A68_BOOL  Getpossible;
A_PAD_BOOL(PAD_15)
A68_BOOL  Setpossible;
A_PAD_BOOL(PAD_16)
A68_BOOL  Reidfpossible;
A_PAD_BOOL(PAD_17)
};
typedef struct A68t45  A68_45 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL)  */
struct A68t46{
A68_VC  Idf;
A68_VC  Reidf;
struct A68t45  Type;
};
typedef struct A68t46  A68_46 ;    /* STRUCT(REF MODE26,REF MODE26,MODE45)  */
struct A68t60 ;

A_PROCEDURE(A68_INT ,A68t48,(struct A68t60 *,A68_INT ,A68_INT ,A68_INT ),(struct A68t60 *,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE60,INT,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t49,(struct A68t60 *),(struct A68t60 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE60) INT */

A_PROCEDURE(A68_VOID ,A68t50,(struct A68t60 *),(struct A68t60 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(REF MODE60) VOID */

A_PROCEDURE(A68_BOOL ,A68t51,(struct A68t60 *,A68_INT ),(struct A68t60 *,A68_INT ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(REF MODE60,INT) BOOL */

A_PROCEDURE(A68_INT ,A68t52,(struct A68t60 *,A68_VC ),(struct A68t60 *,A68_VC ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(REF MODE60,REF MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t60 *,A68_INT ,A68_VC *),(struct A68t60 *,A68_INT ,A68_VC *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF MODE60,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t54,(struct A68t60 *,A68_CHAR ),(struct A68t60 *,A68_CHAR ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF MODE60,CHAR) BOOL */

A_PROCEDURE(A68_BOOL ,A68t55,(struct A68t60 *,A68_CHAR *),(struct A68t60 *,A68_CHAR *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(REF MODE60,REF CHAR) BOOL */
struct A68t47{
struct A68t48  Estab;
struct A68t49  Open;
struct A68t50  Close;
struct A68t51  Set;
struct A68t49  Logicalend;
struct A68t52  Putbuf;
struct A68t52  Getbuf;
struct A68t53  Ensurebufspace;
struct A68t50  Flushbuffer;
struct A68t54  Putch;
struct A68t55  Getch;
struct A68t51  Control;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(MODE48,MODE49,MODE50,MODE51,MODE49,MODE52,MODE52,MODE53,MODE50,MODE54,MODE55,MODE51)  */

A_PROCEDURE(A68_BOOL ,A68t57,(struct A68t60 *),(struct A68t60 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(REF MODE60) BOOL */
struct A68t56{
struct A68t42  Stringterm;
A_PAD_ISTRUCT(A68_42 ,PAD_18)
struct A68t57  Logicalfilemended;
struct A68t57  Physicalfilemended;
struct A68t57  Valueerrormended;
struct A68t55  Charerrormended;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(MODE42,MODE57,MODE57,MODE57,MODE55)  */
struct A68t58{
struct A68t47  Sys;
struct A68t45  Type;
struct A68t56  Defaultio;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE47,MODE45,MODE56)  */
struct A68t59{
A68_BOOL  Readmood;
A_PAD_BOOL(PAD_19)
A68_BOOL  Charmood;
A_PAD_BOOL(PAD_20)
A68_BOOL  Opened;
A_PAD_BOOL(PAD_21)
A68_BOOL  Ended;
A_PAD_BOOL(PAD_22)
A68_BOOL  Bol;
A_PAD_BOOL(PAD_23)
A68_INT  Backch;
A_PAD_INT(PAD_24)
A68_INT  Lasterror;
A_PAD_INT(PAD_25)
struct A68t43  Buffer;
A68_INT  Pos;
A_PAD_INT(PAD_26)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,MODE43,INT)  */
struct A68t60{
struct A68t46  Book;
A68_INT  Sysfile;
A_PAD_INT(PAD_27)
struct A68t47  Sys;
struct A68t56  Io;
struct A68t59  State;
};
typedef struct A68t60  A68_60 ;    /* STRUCT(MODE46,INT,MODE47,MODE56,MODE59)  */
A_ISTRUCT(A68_SSBITS ,32,A68t62);
typedef struct A68t62  A68_62 ;    /* STRUCT 32 SHORT SHORT BITS */
struct A68t61{
A68_BITS  Ciflag;
A_PAD_BITS(PAD_28)
A68_BITS  Coflag;
A_PAD_BITS(PAD_29)
A68_BITS  Ccflag;
A_PAD_BITS(PAD_30)
A68_BITS  Clflag;
A_PAD_BITS(PAD_31)
A68_SSBITS  Cline;
A_PAD_SSBITS(PAD_32)
struct A68t62  Ccc;
A_PAD_ISTRUCT(A68_62 ,PAD_33)
A68_BITS  Cispeed;
A_PAD_BITS(PAD_34)
A68_BITS  Cospeed;
A_PAD_BITS(PAD_35)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(BITS,BITS,BITS,BITS,SHORT SHORT BITS,MODE62,BITS,BITS)  */
A_ROW(A68_BOOL ,A68t64,1);
typedef struct A68t64  A68_64 ;    /* [] BOOL */
A_ROW(A68_LBITS ,A68t65,1);
typedef struct A68t65  A68_65 ;    /* [] LONG BITS */
A_ROW(A68_BITS ,A68t66,1);
typedef struct A68t66  A68_66 ;    /* [] BITS */
A_ROW(A68_SBITS ,A68t67,1);
typedef struct A68t67  A68_67 ;    /* [] SHORT BITS */
A_ROW(A68_SSBITS ,A68t68,1);
typedef struct A68t68  A68_68 ;    /* [] SHORT SHORT BITS */
A_ROW(A68_LINT ,A68t69,1);
typedef struct A68t69  A68_69 ;    /* [] LONG INT */
A_ROW(A68_INT ,A68t70,1);
typedef struct A68t70  A68_70 ;    /* [] INT */
A_ROW(A68_SINT ,A68t71,1);
typedef struct A68t71  A68_71 ;    /* [] SHORT INT */
A_ROW(A68_SSINT ,A68t72,1);
typedef struct A68t72  A68_72 ;    /* [] SHORT SHORT INT */
A_ROW(A68_REAL ,A68t73,1);
typedef struct A68t73  A68_73 ;    /* [] REAL */
A_ROW(A68_SREAL ,A68t74,1);
typedef struct A68t74  A68_74 ;    /* [] SHORT REAL */
A_ROW(A68_COMPL ,A68t75,1);
typedef struct A68t75  A68_75 ;    /* [] COMPL */
A_ROW(A68_SCOMPL ,A68t76,1);
typedef struct A68t76  A68_76 ;    /* [] SHORT COMPL */
A_STRAIGHT(A68_VOID,A68t77);
typedef struct A68t77  A68_77 ;    /* STRAIGHT MODE63 */
struct A68t63 { A68_INT mode; union {
A68_CHAR * mode1;
A68_RC  mode2;
struct A68t32 * mode3;
A68_BOOL * mode4;
struct A68t64  mode5;
A68_LBITS * mode6;
struct A68t65  mode7;
A68_BITS * mode8;
struct A68t66  mode9;
A68_SBITS * mode10;
struct A68t67  mode11;
A68_SSBITS * mode12;
struct A68t68  mode13;
A68_LINT * mode14;
struct A68t69  mode15;
A68_INT * mode16;
struct A68t70  mode17;
A68_SINT * mode18;
struct A68t71  mode19;
A68_SSINT * mode20;
struct A68t72  mode21;
A68_REAL * mode22;
struct A68t73  mode23;
A68_SREAL * mode24;
struct A68t74  mode25;
A68_COMPL * mode26;
struct A68t75  mode27;
A68_SCOMPL * mode28;
struct A68t76  mode29;
struct A68t77  mode30;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t63  A68_63 ;    /* UNION(REF CHAR,REF MODE27,REF MODE32,REF BOOL,REF MODE64,REF LONG BITS,REF MODE65,REF BITS,REF MODE66,REF SHORT BITS,REF MODE67,REF SHORT SHORT BITS,REF MODE68,REF LONG INT,REF MODE69,REF INT,REF MODE70,REF SHORT INT,REF MODE71,REF SHORT SHORT INT,REF MODE72,REF REAL,REF MODE73,REF SHORT REAL,REF MODE74,REF COMPL,REF MODE75,REF SHORT COMPL,REF MODE76,MODE77)  */
A_STRAIGHT(A68_VOID,A68t79);
typedef struct A68t79  A68_79 ;    /* STRAIGHT MODE78 */
struct A68t78 { A68_INT mode; union {
A68_CHAR  mode1;
A68_RC  mode2;
A68_BOOL  mode3;
struct A68t64  mode4;
A68_LBITS  mode5;
struct A68t65  mode6;
A68_BITS  mode7;
struct A68t66  mode8;
A68_SBITS  mode9;
struct A68t67  mode10;
A68_SSBITS  mode11;
struct A68t68  mode12;
A68_LINT  mode13;
struct A68t69  mode14;
A68_INT  mode15;
struct A68t70  mode16;
A68_SINT  mode17;
struct A68t71  mode18;
A68_SSINT  mode19;
struct A68t72  mode20;
A68_REAL  mode21;
struct A68t73  mode22;
A68_SREAL  mode23;
struct A68t74  mode24;
A68_COMPL  mode25;
struct A68t75  mode26;
A68_SCOMPL  mode27;
struct A68t76  mode28;
struct A68t79  mode29;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t78  A68_78 ;    /* UNION(CHAR,MODE27,BOOL,MODE64,LONG BITS,MODE65,BITS,MODE66,SHORT BITS,MODE67,SHORT SHORT BITS,MODE68,LONG INT,MODE69,INT,MODE70,SHORT INT,MODE71,SHORT SHORT INT,MODE72,REAL,MODE73,SHORT REAL,MODE74,COMPL,MODE75,SHORT COMPL,MODE76,MODE79)  */

A_PROCEDURE(A68_VOID ,A68t80,(A68_BOOL ,A68_RC *),(A68_BOOL ,A68_RC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(BOOL) MODE27 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_BOOL ,struct A68t37 *),(A68_BOOL ,struct A68t37 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(BOOL) MODE37 */
#define A68_83  A68_VC 
#define A68t83 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_84  A68_37 
#define A68t84 A68t37            /* STRUCT(MODE83,INT)  */

A_PROCEDURE(A68_VOID ,A68t85,(A68_BOOL ,struct A68t32 *),(A68_BOOL ,struct A68t32 *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(BOOL) MODE32 */
A68_80  EAAAASP_anonymous;
A68_81  FAAAASP_anonymous;
A68_82  GAAAASP_anonymous;

A_STATIC A68_VOID  IAAAASP_generator(A68_BOOL  HAAAASP_anonymous, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  NAAAASP_generator(A68_BOOL  MAAAASP_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SAAAASP_generator(A68_BOOL  RAAAASP_anonymous, A68_37  *ReturnedValue);

A_STATIC A68_VOID  IAAAASP_generator(A68_BOOL  HAAAASP_anonymous, A68_RC  *ReturnedValue)
{ 
A68_RC  JAAAASP;  /* clause result */
A68_RC  KAAAASP;  /* OPERATORS - dynamic generator */
{ 
 /* line 30: */
KAAAASP.dim[0].upb = 0 ;
KAAAASP.dim[0].lwb = 1 ;
A_1INITSTRIDES(KAAAASP) ;
( HAAAASP_anonymous? A_R1LOC(A68_CHAR ,KAAAASP): A_R1HEAP(A68_CHAR ,KAAAASP) );
JAAAASP = KAAAASP;
} 
*ReturnedValue = (JAAAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  NAAAASP_generator(A68_BOOL  MAAAASP_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  OAAAASP;  /* clause result */
A68_VC  PAAAASP;  /* OPERATORS - dynamic generator */
{ 
 /* line 165: */
PAAAASP.upb = 0 ;
( MAAAASP_anonymous? A_VLOC(A68_CHAR ,PAAAASP): A_VHEAP(A68_CHAR ,PAAAASP) );
OAAAASP = PAAAASP;
} 
*ReturnedValue = (OAAAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  SAAAASP_generator(A68_BOOL  RAAAASP_anonymous, A68_37  *ReturnedValue)
{ 
A68_84  TAAAASP_anonymous;
A68_VC  UAAAASP;  /* avoid structure result */
A68_83 * VAAAASP;  /* YIELD */
A68_37  WAAAASP;  /* clause result */
{ 
A_CALLPROC(FAAAASP_anonymous,(RAAAASP_anonymous, &UAAAASP),(RAAAASP_anonymous, &UAAAASP,(FAAAASP_anonymous).nonlocals));
VAAAASP = (&((&TAAAASP_anonymous)->Name)) ;
(*VAAAASP) = UAAAASP;
WAAAASP = TAAAASP_anonymous;
} 
*ReturnedValue = (WAAAASP);
return;
} 
#undef NL
 /* line 1: */
 /* line 26: */
void BAAAASP(void)   /* initialise DECS spmodes */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-s","-uname","seedfile","-staredit","1234ABCD","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir",".","spmodes.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_80  LAAAASP;  /* procedure value */
A68_81  QAAAASP;  /* procedure value */
A68_82  XAAAASP;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/qad/spmodes.a68";
A_config.translation_time = "Sun Apr 18 20:08:21 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "AAAAASP (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:08:21 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS spmodes);
 /* line 29: */
LAAAASP.fn.fn_global = IAAAASP_generator;
LAAAASP.nonlocals = A68_NIL;
EAAAASP_anonymous = LAAAASP;
QAAAASP.fn.fn_global = NAAAASP_generator;
QAAAASP.nonlocals = A68_NIL;
FAAAASP_anonymous = QAAAASP;
XAAAASP.fn.fn_global = SAAAASP_generator;
XAAAASP.nonlocals = A68_NIL;
GAAAASP_anonymous = XAAAASP;
 /* line 167: */
 /* line 168: */
 /* line 182: */
/*SKIP*/;
A_PROC_EXIT(DECS spmodes);
} 
#undef NL
/* end of translation of spmodes.a68 */
