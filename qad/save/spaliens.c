/* UNAME:XAAAASP */
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

A_PROCEDURE(A68_VOID ,A68t33,(A68_BOOL ,A68_RC *),(A68_BOOL ,A68_RC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(BOOL) MODE27 */

A_PROCEDURE(A68_VOID ,A68t34,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,16000000,A68t35);
typedef struct A68t35  A68_35 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t35 *,16000000,A68t36);
typedef struct A68t36  A68_36 ;    /* STRUCT 16000000 REF MODE35 */
struct A68t37{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_1)
};
typedef struct A68t37  A68_37 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t38,(A68_BOOL ,struct A68t37 *),(A68_BOOL ,struct A68t37 *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(BOOL) MODE37 */
struct A68t39{
A68_BITS * Cp;
struct A68t35 * Env;
};
typedef struct A68t39  A68_39 ;    /* STRUCT(REF BITS,REF MODE35)  */
struct A68t40{
A68_CHAR * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_2)
A68_INT  Upb;
A_PAD_INT(PAD_3)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF CHAR,BITS,INT)  */
struct A68t41{
A68_BITS * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_4)
A68_INT  Upb;
A_PAD_INT(PAD_5)
};
typedef struct A68t41  A68_41 ;    /* STRUCT(REF BITS,BITS,INT)  */
struct A68t42{
A68_INT * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_6)
A68_INT  Upb;
A_PAD_INT(PAD_7)
};
typedef struct A68t42  A68_42 ;    /* STRUCT(REF INT,BITS,INT)  */
A_ISTRUCT(A68_BITS ,8,A68t43);
typedef struct A68t43  A68_43 ;    /* STRUCT 8 BITS */
struct A68t44{
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
typedef struct A68t44  A68_44 ;    /* STRUCT(REF MODE26,INT,INT,INT,BOOL,BOOL)  */
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
struct A68t56 ;

A_PROCEDURE(A68_INT ,A68t48,(struct A68t56 *,A68_INT ,A68_INT ,A68_INT ),(struct A68t56 *,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE56,INT,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t49,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE56) INT */

A_PROCEDURE(A68_VOID ,A68t50,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(REF MODE56) VOID */

A_PROCEDURE(A68_BOOL ,A68t51,(struct A68t56 *,A68_INT ),(struct A68t56 *,A68_INT ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(REF MODE56,INT) BOOL */

A_PROCEDURE(A68_INT ,A68t52,(struct A68t56 *,A68_VC ),(struct A68t56 *,A68_VC ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(REF MODE56,REF MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t56 *,A68_INT ,A68_VC *),(struct A68t56 *,A68_INT ,A68_VC *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF MODE56,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t54,(struct A68t56 *,A68_CHAR ),(struct A68t56 *,A68_CHAR ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF MODE56,CHAR) BOOL */

A_PROCEDURE(A68_BOOL ,A68t55,(struct A68t56 *,A68_CHAR *),(struct A68t56 *,A68_CHAR *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(REF MODE56,REF CHAR) BOOL */
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

A_PROCEDURE(A68_BOOL ,A68t59,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(REF MODE56) BOOL */
struct A68t57{
struct A68t43  Stringterm;
A_PAD_ISTRUCT(A68_43 ,PAD_18)
struct A68t59  Logicalfilemended;
struct A68t59  Physicalfilemended;
struct A68t59  Valueerrormended;
struct A68t55  Charerrormended;
};
typedef struct A68t57  A68_57 ;    /* STRUCT(MODE43,MODE59,MODE59,MODE59,MODE55)  */
struct A68t58{
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
struct A68t44  Buffer;
A68_INT  Pos;
A_PAD_INT(PAD_26)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,MODE44,INT)  */
struct A68t56{
struct A68t46  Book;
A68_INT  Sysfile;
A_PAD_INT(PAD_27)
struct A68t47  Sys;
struct A68t57  Io;
struct A68t58  State;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(MODE46,INT,MODE47,MODE57,MODE58)  */
struct A68t60{
struct A68t47  Sys;
struct A68t45  Type;
struct A68t57  Defaultio;
};
typedef struct A68t60  A68_60 ;    /* STRUCT(MODE47,MODE45,MODE57)  */
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

A_PROCEDURE(A68_REAL ,A68t80,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REAL) REAL */

A_PROCEDURE(A68_INT ,A68t81,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26,INT) INT */

A_PROCEDURE(A68_VOID ,A68t82,(void),(void *));
typedef struct A68t82  A68_82 ;    /* PROC VOID */

A_PROCEDURE(A68_INT ,A68t83,(A68_INT ),(A68_INT ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BITS *,A68t84,(A68_INT ,A68_BITS *),(A68_INT ,A68_BITS *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT,REF BITS) REF BITS */

A_PROCEDURE(A68_REAL ,A68t85,(A68_VC ),(A68_VC ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE26) REAL */

A_PROCEDURE(A68_INT ,A68t86,(A68_INT ,A68_VC ,A68_INT *),(A68_INT ,A68_VC ,A68_INT *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(INT,MODE26,REF INT) INT */

A_PROCEDURE(A68_INT ,A68t87,(A68_INT ,A68_VC ,A68_INT ),(A68_INT ,A68_VC ,A68_INT ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(INT,MODE26,INT) INT */

A_PROCEDURE(A68_INT ,A68t88,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(struct A68t36 *,A68t89,(A68_VC ),(A68_VC ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26) REF MODE36 */

A_PROCEDURE(A68_INT ,A68t90,(A68_VC ,A68_BITS *),(A68_VC ,A68_BITS *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE26,REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t91,(A68_VC ),(A68_VC ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_INT ,A68t92,(A68_VC ,A68_VC ,A68_REAL ,A68_INT ,A68_INT ),(A68_VC ,A68_VC ,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE26,MODE26,REAL,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t93,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(INT,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t94,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t95,(A68_BITS *,struct A68t35 *),(A68_BITS *,struct A68t35 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF BITS,REF MODE35) INT */

A_PROCEDURE(A68_INT ,A68t96,(A68_INT ,A68_CHAR *),(A68_INT ,A68_CHAR *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT,REF CHAR) INT */

A_PROCEDURE(A68_INT ,A68t97,(A68_INT ,A68_BITS ,A68_CHAR *),(A68_INT ,A68_BITS ,A68_CHAR *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT,BITS,REF CHAR) INT */

A_PROCEDURE(A68_VOID ,A68t98,(A68_INT ),(A68_INT ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(INT) VOID */

A_PROCEDURE(struct A68t35 *,A68t99,(A68_VC ),(A68_VC ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE26) REF MODE35 */

A_PROCEDURE(A68_INT ,A68t100,(void),(void *));
typedef struct A68t100  A68_100 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t101,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE26,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t102,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE26,MODE26) INT */

A_PROCEDURE(struct A68t35 *,A68t103,(A68_INT ),(A68_INT ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT) REF MODE35 */

A_PROCEDURE(A68_INT ,A68t104,(struct A68t35 *),(struct A68t35 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE35) INT */

A_PROCEDURE(A68_INT ,A68t105,(A68_INT *),(A68_INT *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF INT) INT */

A_PROCEDURE(A68_INT ,A68t106,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REAL) INT */

/* --- Imports from spmodes --- */
/* --- End of imports from spmodes --- */


/* --- DECS initialisation functions --- */
extern void BAAAASP(void);   /* spmodes */
/* --- end of DECS initialisation functions --- */
#include <stdio.h>

#define BBAAASP_nullccharptr NULL
/**/

#define CBAAASP_maxabschar A68_MAX_CHAR
/**/

#define DBAAASP_maxint A68_MAX_INT
/**/

#define EBAAASP_shortmaxint A68_MAX_SINT
/**/

#define FBAAASP_shortshortmaxint A68_MAX_SSINT
#include <math.h>

#define GBAAASP_infinity HUGE_VAL
/**/

#define HBAAASP_pi M_PI
#include <float.h>

#define IBAAASP_shortrealprecision FLT_MANT_DIG
/**/

#define JBAAASP_shortrealwidth FLT_DIG
/**/

#define KBAAASP_shortsmallreal FLT_EPSILON
/**/

#define LBAAASP_shortminexp FLT_MIN_EXP
/**/

#define MBAAASP_shortmaxexp FLT_MAX_EXP
/**/

#define NBAAASP_realprecision DBL_MANT_DIG
/**/

#define OBAAASP_realwidth DBL_DIG
/**/

#define PBAAASP_smallreal DBL_EPSILON
/**/

#define QBAAASP_minexp DBL_MIN_EXP
/**/

#define RBAAASP_maxexp DBL_MAX_EXP
/**/

#define SBAAASP_longrealprecision LDBL_MANT_DIG
/**/

#define TBAAASP_longrealwidth LDBL_DIG
/**/

#define UBAAASP_longsmallreal LDBL_EPSILON
/**/

#define VBAAASP_longminexp LDBL_MIN_EXP
/**/

#define WBAAASP_longmaxexp LDBL_MAX_EXP
#include <errno.h>

#define XBAAASP_erangeerr ERANGE
#include <fcntl.h>

#define YBAAASP_ordonly O_RDONLY
/**/

#define ZBAAASP_owronly O_WRONLY
/**/

#define ACAAASP_ordwr O_RDWR
/**/

#define BCAAASP_ocreat O_CREAT
/**/

#define CCAAASP_otrunc O_TRUNC
/**/

#define DCAAASP_oexcl O_EXCL
/**/

#define ECAAASP_sqrt sqrt
/**/

#define FCAAASP_exp exp
/**/

#define GCAAASP_ln log
/**/

#define HCAAASP_log log10
/**/

#define ICAAASP_cos cos
/**/

#define JCAAASP_sin sin
/**/

#define KCAAASP_tan tan
/**/

#define LCAAASP_arccos acos
/**/

#define MCAAASP_arcsin asin
/**/

#define NCAAASP_arctan atan
#include <termios.h>

#define OCAAASP_termiosvtime VTIME
/**/

#define PCAAASP_termiosvmin VMIN
/**/

#define QCAAASP_tcsanow TCSANOW
/**/

#define RCAAASP_isig ISIG
/**/

#define SCAAASP_icanon ICANON
/**/

#define TCAAASP_echo ECHO
#include <sys/types.h>
#include <unistd.h>

#define UCAAASP_posixseekset SEEK_SET
/**/

#define VCAAASP_posixseekcur SEEK_CUR
/**/

#define WCAAASP_posixseekend SEEK_END
#include <signal.h>

#define XCAAASP_sighup SIGHUP
/**/

#define YCAAASP_sigint SIGINT
/**/

#define ZCAAASP_sigquit SIGQUIT
/**/

#define ADAAASP_sigill SIGILL
/**/

#define BDAAASP_sigtrap SIGTRAP
/**/

#define CDAAASP_sigabrt SIGABRT
/**/

#define DDAAASP_sigbus SIGBUS
/**/

#define EDAAASP_sigfpe SIGFPE
/**/

#define FDAAASP_sigkill SIGKILL
/**/

#define GDAAASP_sigusr1 SIGUSR1
/**/

#define HDAAASP_sigsegv SIGSEGV
/**/

#define IDAAASP_sigusr2 SIGUSR2
/**/

#define JDAAASP_sigpipe SIGPIPE
/**/

#define KDAAASP_sigalrm SIGALRM
/**/

#define LDAAASP_sigterm SIGTERM
/**/

#define MDAAASP_sigstkflt SIGSTKFLT
/**/

#define NDAAASP_sigchld SIGCHLD
/**/

#define ODAAASP_sigcont SIGCONT
/**/

#define PDAAASP_sigstop SIGSTOP
/**/

#define QDAAASP_sigtstp SIGTSTP
/**/

#define RDAAASP_sigttin SIGTTIN
/**/

#define SDAAASP_sigttou SIGTTOU
/**/

#define TDAAASP_sigurg SIGURG
/**/

#define UDAAASP_sigxcpu SIGXCPU
/**/

#define VDAAASP_sigxfsz SIGXFSZ
/**/

#define WDAAASP_sigvtalrm SIGVTALRM
/**/

#define XDAAASP_sigprof SIGPROF
/**/

#define YDAAASP_sigwinch SIGWINCH
/**/

#define ZDAAASP_sigio SIGIO
/**/

#define AEAAASP_sigpwr SIGPWR
#define BYTESPERBITS A_size_t_INT(sizeof(A68_INT))

#define BEAAASP_bytesperbits BYTESPERBITS
#include <sys/socket.h>

#define CEAAASP_afunix AF_UNIX
/**/

#define DEAAASP_afinet AF_INET
/**/

#define EEAAASP_sockstream SOCK_STREAM
/**/

#define FEAAASP_errno errno
#include <algol68/Alibrary.h>
#define A_PARAM(name,value) \
A_int_INT(Agc_param(A_VC_charptr(name),A_INT_int(value)))

#define GEAAASP_gc_param A_PARAM
/**/

#define HEAAASP_garbage_collect Agc_collect
#include <algol68/Alibrary.h>

#define IEAAASP_alwayscollect A_ALWAYS_COLLECT
#include <algol68/Alibrary.h>

#define JEAAASP_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include <algol68/Alibrary.h>

#define KEAAASP_defaultpolicy A_DEFAULT_POLICY
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define RAISE(sig) raise(A_INT_int(A_INT_int(sig)))

#define LEAAASP_ansiraise RAISE
#define SIGNAL(sig,handler) \
  (void *)signal(A_INT_int(sig),(void *)handler)

#define MEAAASP_ansisignal SIGNAL
#define STRTOD(s) strtod(A_VC_charptr(s),NULL)

#define NEAAASP_ansistrtod STRTOD
#define ACCEPT(s,addr,addrlen) \
    A_int_INT(accept(A_INT_int(s),\
              (struct sockaddr *)A_VC_charptr(addr),(socklen_t *)addrlen))

#define OEAAASP_bsdaccept ACCEPT
#define BIND(sockfd,addr,addrlen) \
   A_int_INT(bind(A_INT_int(sockfd),\
                  (struct sockaddr *)A_VC_charptr(addr),A_INT_int(addrlen)))

#define PEAAASP_bsdbind BIND
#define CHMOD(path,mode) \
   A_int_INT(chmod(A_VC_charptr(path),A_INT_int(mode)))

#define QEAAASP_bsdchmod CHMOD
#define CONNECT(sockfd,servaddr,addrlen) \
   A_int_INT(connect(A_INT_int(sockfd),\
             (struct sockaddr *)A_VC_charptr(servaddr),A_INT_int(addrlen)))

#define REAAASP_bsdconnect CONNECT
#define FCHMOD(fd,mode) A_int_INT(fchmod(A_INT_int(fd),A_INT_int(mode)))

#define SEAAASP_bsdfchmod FCHMOD
#include <netdb.h>
#define GETHOSTBYNAME(host) (void *)gethostbyname(A_VC_charptr(host))

#define TEAAASP_bsdgethostbyname GETHOSTBYNAME
#define INET_ATON(cp,inp) \
   A_int_INT(inet_aton(A_VC_charptr(cp),(struct in_addr *)inp))

#define UEAAASP_bsdinetaton INET_ATON
#define ISATTY(fd) A_int_INT(isatty(A_INT_int(fd)))

#define VEAAASP_bsdisatty ISATTY
#define LISTEN(s,backlog) \
   A_int_INT(listen(A_INT_int(s),A_INT_int(backlog)))

#define WEAAASP_bsdlisten LISTEN
#define MKSTEMP(id) A_int_INT(mkstemp(A_VC_charptr(id)))

#define XEAAASP_bsdmkstemp MKSTEMP
#include <stdio.h>
#define REAL_SNPRINTF(buff,fmt,num,wd,prec) \
  A_int_INT(snprintf(A_VC_charptr(buff), \
                     A_INT_int(buff.upb), \
                     A_VC_charptr(fmt), \
                     (double)num,A_INT_int(wd), \
                                 A_INT_int(prec)))

#define YEAAASP_bsdrealsnprintf REAL_SNPRINTF
#define SHUTDOWN(sd,direction) \
   A_int_INT(shutdown(A_INT_int(sd),A_INT_int(direction)))

#define ZEAAASP_bsdshutdown SHUTDOWN
#define SOCKET(domain,type,protocol) \
   A_int_INT(socket(A_INT_int(domain),\
                    A_INT_int(type),A_INT_int(protocol)))

#define AFAAASP_bsdsocket SOCKET
#define AT_EXIT(p) atexit((void *)p)

#define BFAAASP_isoatexit AT_EXIT
#define ON_EXIT(p,a) on_exit((void *)p,(void *)a)

#define CFAAASP_linuxonexit ON_EXIT
#define TCGETATTR(fd,t) \
    A_int_INT(tcgetattr(A_INT_int(fd), (struct termios*)t))

#define DFAAASP_linuxtcgetattr TCGETATTR
#define TCSETATTR(fd,opt,t) \
    A_int_INT(tcsetattr(A_INT_int(fd), A_INT_int(opt),(struct termios*)t))

#define EFAAASP_linuxtcsetattr TCSETATTR
#define CLOSE(fd) A_int_INT(close(A_INT_int(fd)))

#define FFAAASP_posixclose CLOSE
#define CREAT(path,mode) \
   A_int_INT(creat(A_VC_charptr(path),A_INT_int(mode)))

#define GFAAASP_posixcreat CREAT
#define EXIT(n) exit(n)

#define HFAAASP_posixexit EXIT
#define GETENV(id) (void *)getenv(A_VC_charptr(id))

#define IFAAASP_posixgetenv GETENV
#define LSEEK(fd,offset,whence) \
   A_int_INT(lseek(A_INT_int(fd),A_INT_int(offset),A_INT_int(whence)))

#define MFAAASP_posixlseek LSEEK
#define OPEN(path,flags,mode) \
   A_int_INT(open(A_VC_charptr(path),A_INT_int(flags),A_INT_int(mode)))

#define NFAAASP_posixopen OPEN
#define READ(fd,buf,count) \
   A_int_INT(read(A_INT_int(fd),A_VC_charptr(buf),A_INT_int(count)))

#define OFAAASP_posixread READ
#define RENAME(old,new) \
   A_int_INT(rename(A_VC_charptr(old),A_VC_charptr(new)))

#define PFAAASP_posixrename RENAME
#define STRERROR(e) (void *)strerror(e)

#define QFAAASP_posixstrerror STRERROR
#define STRLEN(s) strlen((char *)s)

#define RFAAASP_posixstrlen STRLEN
#define TIME(t) A_time_t_INT(time(A_RI_time_tptr(t)))

#define SFAAASP_posixtime TIME
#define UNLINK(path) A_int_INT(unlink(A_VC_charptr(path)))

#define TFAAASP_posixunlink UNLINK
#define WRITE(fd,buf,count) \
   A_int_INT(write(A_INT_int(fd),A_VC_charptr(buf),A_INT_int(count)))

#define UFAAASP_posixwrite WRITE
#include <fenv.h>
#include <math.h>
#include <limits.h>

#define VFAAASP_fetonearest FE_TONEAREST
/**/

#define WFAAASP_fedownward FE_DOWNWARD
/**/

#define XFAAASP_fesetround fesetround
/**/

#define BGAAASP_lrint lrint

A68_INT  JFAAASP_posixgetpid(void);

A68_INT  YFAAASP_fegetround(void);

A68_INT  JFAAASP_posixgetpid(void)
{ 
A68_INT  KFAAASP;  /* yield of code insert */
A68_INT  LFAAASP;  /* clause result */
A_PROC_ENTRY(posixgetpid);
#define RESULT KFAAASP
{RESULT=A_int_INT(getpid());
}
#undef RESULT
LFAAASP = KFAAASP;
A_PROC_EXIT(posixgetpid);
return( LFAAASP );
} 
#undef NL

A68_INT  YFAAASP_fegetround(void)
{ 
A68_INT  ZFAAASP;  /* yield of code insert */
A68_INT  AGAAASP;  /* clause result */
A_PROC_ENTRY(fegetround);
#define RESULT ZFAAASP
{RESULT=fegetround();
}
#undef RESULT
AGAAASP = ZFAAASP;
A_PROC_EXIT(fegetround);
return( AGAAASP );
} 
#undef NL
 /* line 2: */
 /* line 51: */
void YAAAASP(void)   /* initialise DECS spaliens */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-s","-uname","seedfile","-staredit","1234ABCD","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir",".","spaliens.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"./spmodes.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAAASP();   /* USE spmodes */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/qad/spaliens.a68";
A_config.translation_time = "Sun Apr 18 20:08:21 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "XAAAASP (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:08:21 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS spaliens);
 /* line 52: */
 /* line 53: */
 /* line 54: */
 /* line 55: */
 /* line 56: */
 /* line 57: */
 /* line 59: */
 /* line 60: */
 /* line 61: */
 /* line 62: */
 /* line 63: */
 /* line 65: */
 /* line 66: */
 /* line 67: */
 /* line 68: */
 /* line 69: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 75: */
 /* line 77: */
 /* line 79: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 99: */
 /* line 100: */
 /* line 102: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 112: */
 /* line 115: */
 /* line 116: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
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
 /* line 134: */
 /* line 135: */
 /* line 136: */
 /* line 137: */
 /* line 138: */
 /* line 139: */
 /* line 140: */
 /* line 141: */
 /* line 142: */
 /* line 143: */
 /* line 144: */
 /* line 145: */
 /* line 146: */
 /* line 147: */
 /* line 149: */
 /* line 150: */
 /* line 151: */
 /* line 153: */
 /* line 154: */
 /* line 158: */
 /* line 159: */
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 165: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 173: */
 /* line 174: */
 /* line 175: */
 /* line 176: */
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 180: */
 /* line 186: */
 /* line 187: */
 /* line 188: */
 /* line 189: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
 /* line 197: */
 /* line 198: */
 /* line 199: */
 /* line 200: */
 /* line 201: */
 /* line 203: */
 /* line 204: */
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 209: */
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 214: */
 /* line 215: */
 /* line 216: */
 /* line 217: */
 /* line 218: */
 /* line 220: */
 /* line 221: */
 /* line 222: */
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 227: */
 /* line 229: */
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 234: */
 /* line 235: */
 /* line 236: */
 /* line 238: */
 /* line 239: */
 /* line 240: */
 /* line 241: */
 /* line 243: */
 /* line 244: */
 /* line 245: */
 /* line 249: */
 /* line 250: */
 /* line 251: */
 /* line 252: */
 /* line 253: */
 /* line 254: */
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 259: */
 /* line 260: */
 /* line 261: */
 /* line 262: */
 /* line 264: */
 /* line 265: */
 /* line 266: */
 /* line 267: */
 /* line 268: */
 /* line 272: */
 /* line 273: */
 /* line 274: */
 /* line 278: */
 /* line 279: */
 /* line 280: */
 /* line 282: */
 /* line 283: */
 /* line 284: */
 /* line 285: */
 /* line 287: */
 /* line 288: */
 /* line 289: */
 /* line 290: */
 /* line 294: */
 /* line 295: */
 /* line 296: */
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 301: */
 /* line 303: */
 /* line 304: */
 /* line 305: */
 /* line 307: */
 /* line 308: */
 /* line 309: */
 /* line 311: */
 /* line 313: */
 /* line 314: */
 /* line 315: */
 /* line 316: */
 /* line 318: */
 /* line 319: */
 /* line 320: */
 /* line 321: */
 /* line 323: */
 /* line 324: */
 /* line 325: */
 /* line 326: */
 /* line 328: */
 /* line 329: */
 /* line 330: */
 /* line 331: */
 /* line 333: */
 /* line 334: */
 /* line 335: */
 /* line 337: */
 /* line 338: */
 /* line 339: */
 /* line 341: */
 /* line 342: */
 /* line 343: */
 /* line 345: */
 /* line 346: */
 /* line 347: */
 /* line 349: */
 /* line 350: */
 /* line 351: */
 /* line 352: */
 /* line 356: */
 /* line 357: */
 /* line 358: */
 /* line 359: */
 /* line 360: */
 /* line 362: */
 /* line 363: */
 /* line 364: */
 /* line 365: */
 /* line 367: */
 /* line 369: */
 /* line 421: */
/*SKIP*/;
A_PROC_EXIT(DECS spaliens);
} 
#undef NL
/* end of translation of spaliens.a68 */
