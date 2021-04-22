/* UNAME:YDEAOSF */
#include <algol68/Asupport.h>
struct A68t32 ;
struct A68t33 ;

A_PROCEDURE(A68_VOID ,A68t31,(struct A68t32 ,struct A68t33 ),(struct A68t32 ,struct A68t33 ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(MODE32,MODE33) VOID */
struct A68t32{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t34 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(INT,REF MODE34,BITS)  */
A_VECTOR(A68_VC ,A68t33);
typedef struct A68t33  A68_33 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t36 ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE36 */
struct A68t36{
struct A68t32  Msgno;
A68_VC  Text;
};
typedef struct A68t36  A68_36 ;    /* STRUCT(MODE32,REF MODE26)  */
struct A68t34{
A68_VC  Name;
struct A68t35  Messages;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(REF MODE26,REF MODE35)  */
struct A68t37{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t37  A68_37 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t38{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t38  A68_38 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t39,(struct A68t38 ,struct A68t38 ),(struct A68t38 ,struct A68t38 ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE38,MODE38) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t41);
typedef struct A68t41  A68_41 ;    /* STRUCT 4 CHAR */
struct A68t40{
struct A68t41  Access;
A_PAD_ISTRUCT(A68_41 ,PAD_4)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE41)  */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t37 *,A68_VC *),(struct A68t37 *,A68_VC *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(REF MODE37) MODE26 */

A_PROCEDURE(struct A68t37 *,A68t43,(A68_VC ,struct A68t40 ,struct A68t31 ),(A68_VC ,struct A68t40 ,struct A68t31 ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26,MODE40,MODE31) REF MODE37 */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t37 *,struct A68t31 ),(struct A68t37 *,struct A68t31 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE37,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE37,REF MODE26,REF INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(REF MODE37,MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t47,(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF MODE37,LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE37,REF LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t37 *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE37,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t51,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE26,MODE26,MODE31) MODE38 */
struct A68t52{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_5)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_6)
A68_SINT  Device;
A_PAD_SINT(PAD_7)
A68_SINT  Links;
A_PAD_SINT(PAD_8)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_9)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_10)
A68_LINT  Size;
A_PAD_LINT(PAD_11)
A68_LINT  Accessed;
A_PAD_LINT(PAD_12)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_13)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_14)
};
typedef struct A68t52  A68_52 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t54 ;

A_PROCEDURE(struct A68t52 *,A68t53,(struct A68t54 ,struct A68t31 ),(struct A68t54 ,struct A68t31 ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE54,MODE31) REF MODE52 */
struct A68t54 { A68_INT mode; union {
struct A68t37 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t54  A68_54 ;    /* UNION(REF MODE37,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t55,(struct A68t37 *),(struct A68t37 *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(REF MODE37) BOOL */

A_PROCEDURE(A68_BITS *,A68t56,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE26,MODE31) REF BITS */

A_PROCEDURE(A68_VOID ,A68t57,(A68_BITS *,struct A68t31 ),(A68_BITS *,struct A68t31 ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(REF BITS,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t58,(A68_BITS *,struct A68t31 ,A68_VC *),(A68_BITS *,struct A68t31 ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF BITS,MODE31) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t59,(A68_VC *),(A68_VC *,void *));
typedef struct A68t59  A68_59 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t61,(void),(void *));
typedef struct A68t61  A68_61 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t62,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t62  A68_62 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t63,(A68_INT ),(A68_INT ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t64,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE26,MODE31) INT */

A_PROCEDURE(A68_INT ,A68t65,(void),(void *));
typedef struct A68t65  A68_65 ;    /* PROC INT */
struct A68t66{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t66  A68_66 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t67,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t66 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t66 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE26,MODE26,MODE31) MODE66 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t33 *),(struct A68t33 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC MODE33 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ,struct A68t31 ,struct A68t33 *),(A68_VC ,struct A68t31 ,struct A68t33 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE26,MODE31) MODE33 */
struct A68t71 ;

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t71 ,struct A68t31 ,struct A68t31 ),(struct A68t71 ,struct A68t31 ,struct A68t31 ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE71,MODE31,MODE31) VOID */
A_VECTOR(A68_INT ,A68t71);
typedef struct A68t71  A68_71 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t72,(struct A68t71 ,struct A68t31 ),(struct A68t71 ,struct A68t31 ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE71,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t73,(A68_INT ,struct A68t31 ,struct A68t31 *),(A68_INT ,struct A68t31 ,struct A68t31 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(INT,MODE31) MODE31 */

A_PROCEDURE(A68_VOID ,A68t74,(void),(void *));
typedef struct A68t74  A68_74 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t75,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(BITS) VOID */
struct A68t77 ;

A_PROCEDURE(A68_VOID ,A68t76,(struct A68t77 ),(struct A68t77 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE77) VOID */

A_PROCEDURE(A68_VOID ,A68t77,(A68_VC ),(A68_VC ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE26) VOID */
struct A68t78{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t79,(A68_BOOL ,struct A68t78 *),(A68_BOOL ,struct A68t78 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(BOOL) MODE78 */
struct A68t81 ;

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t81 ,struct A68t31 ),(struct A68t81 ,struct A68t31 ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE81,MODE31) VOID */
A_VECTOR(struct A68t78 ,A68t81);
typedef struct A68t81  A68_81 ;    /* VECTOR [] MODE78 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t83,(A68_BOOL ,struct A68t71 *),(A68_BOOL ,struct A68t71 *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(BOOL) MODE71 */

A_PROCEDURE(A68_VOID ,A68t85,(A68_VC ,A68_INT *,struct A68t38 *),(A68_VC ,A68_INT *,struct A68t38 *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF MODE26,REF INT) MODE38 */
struct A68t84{
A68_INT  Charnumber;
A_PAD_INT(PAD_16)
A68_INT  Linenumber;
A_PAD_INT(PAD_17)
A68_INT  Indent;
A_PAD_INT(PAD_18)
A68_INT  Width;
A_PAD_INT(PAD_19)
A68_INT  Sizeincr;
A_PAD_INT(PAD_20)
struct A68t38  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_21)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_22)
A68_BOOL  Input;
A_PAD_BOOL(PAD_23)
struct A68t77  Putbuffer;
struct A68t85  Getbuffer;
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE38,REF MODE26,BOOL,BOOL,BOOL,MODE77,MODE85)  */

A_PROCEDURE(A68_INT ,A68t86,(struct A68t84 *),(struct A68t84 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(REF MODE84) INT */

A_PROCEDURE(A68_INT ,A68t87,(struct A68t84 *,A68_INT ),(struct A68t84 *,A68_INT ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(REF MODE84,INT) INT */

A_PROCEDURE(A68_VOID ,A68t88,(struct A68t84 *),(struct A68t84 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(REF MODE84) VOID */
struct A68t90 ;
struct A68t91 ;

A_PROCEDURE(struct A68t84 *,A68t89,(struct A68t90 ,struct A68t91 ),(struct A68t90 ,struct A68t91 ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE90,MODE91) REF MODE84 */
struct A68t90 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t90  A68_90 ;    /* UNION(INT,REF MODE26)  */
struct A68t91 { A68_INT mode; union {
struct A68t77  mode1;
struct A68t85  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t91  A68_91 ;    /* UNION(MODE77,MODE85)  */

A_PROCEDURE(A68_VOID ,A68t92,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t74 ),(struct A68t74 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE74) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t95);
typedef struct A68t95  A68_95 ;    /* STRUCT 60 CHAR */
A_ROW(A68_INT ,A68t97,1);
typedef struct A68t97  A68_97 ;    /* [] INT */
A_VECTOR(A68_BITS ,A68t98);
typedef struct A68t98  A68_98 ;    /* VECTOR [] BITS */
A_ROW(A68_BITS ,A68t99,1);
typedef struct A68t99  A68_99 ;    /* [] BITS */
A_VECTOR(A68_BOOL ,A68t100);
typedef struct A68t100  A68_100 ;    /* VECTOR [] BOOL */
A_ROW(A68_BOOL ,A68t101,1);
typedef struct A68t101  A68_101 ;    /* [] BOOL */
A_VECTOR(A68_REAL ,A68t102);
typedef struct A68t102  A68_102 ;    /* VECTOR [] REAL */
A_ROW(A68_REAL ,A68t103,1);
typedef struct A68t103  A68_103 ;    /* [] REAL */
A_STRAIGHT(A68_VOID,A68t104);
typedef struct A68t104  A68_104 ;    /* STRAIGHT MODE96 */
struct A68t96 { A68_INT mode; union {
A68_INT * mode1;
struct A68t71  mode2;
struct A68t97  mode3;
A68_BITS * mode4;
struct A68t98  mode5;
struct A68t99  mode6;
A68_CHAR * mode7;
A68_VC  mode8;
A68_RC  mode9;
A68_BOOL * mode10;
struct A68t100  mode11;
struct A68t101  mode12;
A68_REAL * mode13;
struct A68t102  mode14;
struct A68t103  mode15;
struct A68t88  mode16;
struct A68t104  mode17;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t96  A68_96 ;    /* UNION(REF INT,REF MODE71,REF MODE97,REF BITS,REF MODE98,REF MODE99,REF CHAR,REF MODE26,REF MODE27,REF BOOL,REF MODE100,REF MODE101,REF REAL,REF MODE102,REF MODE103,MODE88,MODE104)  */

A_PROCEDURE(A68_INT ,A68t105,(A68_VC ,A68_CHAR *),(A68_VC ,A68_CHAR *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE26,REF CHAR) INT */

A_PROCEDURE(A68_LINT ,A68t106,(A68_VC ,A68_CHAR **,A68_INT ),(A68_VC ,A68_CHAR **,A68_INT ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(MODE26,REF REF CHAR,INT) LONG INT */

A_PROCEDURE(A68_REAL ,A68t107,(A68_VC ,A68_CHAR **),(A68_VC ,A68_CHAR **,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE26,REF REF CHAR) REAL */

A_PROCEDURE(A68_VOID ,A68t108,(A68_INT ,struct A68t38 *),(A68_INT ,struct A68t38 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT) MODE38 */

A_PROCEDURE(A68_CHAR ,A68t109,(struct A68t84 *),(struct A68t84 *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF MODE84) CHAR */

A_PROCEDURE(A68_BOOL ,A68t110,(struct A68t84 *),(struct A68t84 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE84) BOOL */

A_PROCEDURE(A68_REAL ,A68t111,(struct A68t84 *),(struct A68t84 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE84) REAL */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t84 *,A68_VC *),(struct A68t84 *,A68_VC *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE84) MODE26 */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t84 *,struct A68t38 *),(struct A68t84 *,struct A68t38 *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE84) MODE38 */

A_PROCEDURE(A68_VOID ,A68t114,(struct A68t84 *,A68_RC ),(struct A68t84 *,A68_RC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(REF MODE84,REF MODE27) VOID */
A_VECTOR(struct A68t96 ,A68t115);
typedef struct A68t115  A68_115 ;    /* VECTOR [] MODE96 */

A_PROCEDURE(A68_BOOL ,A68t116,(struct A68t84 *,struct A68t115 ),(struct A68t84 *,struct A68t115 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE84,MODE115) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from iobasics --- */
extern A68_CHAR  SHDAOSF_end_of_file_char;
extern A68_VOID  PKDAOSF_newline(struct A68t84 *);
/* --- End of imports from iobasics --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_BOOL  AVBAOSF_(struct A68t38 ,struct A68t38 );
extern A68_BOOL  EVBAOSF_(struct A68t38 ,struct A68t38 );
extern A68_38  OUBAOSF_io_ok;
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc = argc; A_argv = argv; A_envp = envp

#define DHCAOSF_prelude A_prelude
#include <signal.h>

#define WKCAOSF_sighup SIGHUP
/**/

#define XKCAOSF_sigint SIGINT
/**/

#define YKCAOSF_sigquit SIGQUIT
/**/

#define ZKCAOSF_sigill SIGILL
/**/

#define ALCAOSF_sigtrap SIGTRAP
/**/

#define BLCAOSF_sigabrt SIGABRT
/**/

#define CLCAOSF_sigbus SIGBUS
/**/

#define DLCAOSF_sigfpe SIGFPE
/**/

#define ELCAOSF_sigkill SIGKILL
/**/

#define FLCAOSF_sigusr1 SIGUSR1
/**/

#define GLCAOSF_sigsegv SIGSEGV
/**/

#define HLCAOSF_sigusr2 SIGUSR2
/**/

#define ILCAOSF_sigpipe SIGPIPE
/**/

#define JLCAOSF_sigalrm SIGALRM
/**/

#define KLCAOSF_sigterm SIGTERM
/**/

#define LLCAOSF_sigstkflt SIGSTKFLT
/**/

#define MLCAOSF_sigchld SIGCHLD
/**/

#define NLCAOSF_sigcont SIGCONT
/**/

#define OLCAOSF_sigstop SIGSTOP
/**/

#define PLCAOSF_sigtstp SIGTSTP
/**/

#define QLCAOSF_sigttin SIGTTIN
/**/

#define RLCAOSF_sigttou SIGTTOU
/**/

#define SLCAOSF_sigurg SIGURG
/**/

#define TLCAOSF_sigxcpu SIGXCPU
/**/

#define ULCAOSF_sigxfsz SIGXFSZ
/**/

#define VLCAOSF_sigvtalrm SIGVTALRM
/**/

#define WLCAOSF_sigprof SIGPROF
/**/

#define XLCAOSF_sigwinch SIGWINCH
/**/

#define YLCAOSF_sigio SIGIO
/**/

#define ZLCAOSF_sigpwr SIGPWR
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <algol68/Alibrary.h>

#define BOBAOSF_alwayscollect A_ALWAYS_COLLECT
#include <algol68/Alibrary.h>

#define COBAOSF_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include <algol68/Alibrary.h>

#define DOBAOSF_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void KGDAOSF(void);   /* iobasics */
extern void CSCAOSF(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_95   CEEAOSF = {"$Id: getstrings.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,DEEAOSF,CEEAOSF,60)
#define STRDIFF(p1,p2) \
   A_int_INT(A_CHARPTR_charptr(p2) - A_VC_charptr(p1))

#define EEEAOSF_diff STRDIFF
#include <stdlib.h>
#define STRTOL(s,e,r) A_long_LINT(strtol(A_VC_charptr(s), (char **)(e), r))

#define FEEAOSF_strtol STRTOL
#include <stdlib.h>
#define STRTOD(s,e) (A68_REAL)(strtod(A_VC_charptr(s), (char **)(e)))

#define GEEAOSF_strtod STRTOD
static A68_38  HEEAOSF_tt;
A68_38  KEEAOSF_io_badnumber;
A68_38  NEEAOSF_io_overflow;

A68_VOID  PEEAOSF_make_user_status(A68_INT  N, A68_38  *ReturnedValue);

A68_CHAR  TEEAOSF_getchar(A68_84 * Ch);

A68_VOID  BFEAOSF_skiplayout(A68_84 * Ch);

A68_VOID  GFEAOSF_skiptext(A68_84 * Ch);

A68_CHAR  KFEAOSF_nextchar(A68_84 * Ch);

A68_BOOL  PFEAOSF_end_of_line(A68_84 * Ch);

A_STATIC A68_INT  TFEAOSF_basicgetint(A68_84 * Ch, A68_INT  Radix);

A68_INT  EGEAOSF_getint(A68_84 * Ch);

A68_INT  HGEAOSF_gethex(A68_84 * Ch);

A68_INT  KGEAOSF_getoct(A68_84 * Ch);

A68_REAL  NGEAOSF_getreal(A68_84 * Ch);

A68_BOOL  YGEAOSF_getbool(A68_84 * Ch);

A68_VOID  FHEAOSF_getstr(A68_84 * Ch, A68_VC  *ReturnedValue);

A68_VOID  QHEAOSF_getstatus(A68_84 * Ch, A68_38  *ReturnedValue);

A68_VOID  UHEAOSF_strtrim(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DIEAOSF_basicgetstring(A68_84 * Ch, A68_RC  Rrc);

A68_BOOL  EJEAOSF_get(A68_84 * Ch, A68_115  In);

A68_VOID  PEEAOSF_make_user_status(A68_INT  N, A68_38  *ReturnedValue)
{ 
A68_INT * QEEAOSF;  /* YIELD */
A68_38  REEAOSF;  /* clause result */
A_PROC_ENTRY(make_user_status);
 /* line 68: */
 /* line 69: */
{ 
QEEAOSF = (&((&HEEAOSF_tt)->Status)) ;
(*QEEAOSF) = (100+N);
 /* line 70: */
 /* line 71: */
REEAOSF = HEEAOSF_tt;
} 
A_PROC_EXIT(make_user_status);
*ReturnedValue = (REEAOSF);
return;
} 
#undef NL

A68_CHAR  TEEAOSF_getchar(A68_84 * Ch)
{ 
A68_CHAR  UEEAOSF_result;
A68_BOOL  VEEAOSF;  /* optbool result */
A68_VC  WEEAOSF;  /* OPERATORS - simple index */
A68_INT  XEEAOSF;  /* YIELD */
A68_INT * YEEAOSF;  /* YIELD */
A68_CHAR  ZEEAOSF;  /* clause result */
A_PROC_ENTRY(getchar);
 /* line 74: */
 /* line 75: */
{ 
 /* line 76: */
for ( ;; )
{ 
VEEAOSF = ((*(&(Ch->Charnumber)))>((*(&(Ch->Width)))+1));
if ( VEEAOSF )
{ /* line 77: */
VEEAOSF = AVBAOSF_((*(&(Ch->Status))), OUBAOSF_io_ok);
}
if ( !(VEEAOSF) ) break;
PKDAOSF_newline(Ch);
}
 /* line 78: */
WEEAOSF = (*(&(Ch->Buffer))) ;
XEEAOSF = (*(&(Ch->Charnumber))) ;
UEEAOSF_result = (*(&A_VINDEX(WEEAOSF,XEEAOSF)));
 /* line 79: */
YEEAOSF = (&(Ch->Charnumber)) ;
(*YEEAOSF)+=1;
 /* line 80: */
 /* line 81: */
ZEEAOSF = UEEAOSF_result;
} 
A_PROC_EXIT(getchar);
return( ZEEAOSF );
} 
#undef NL

A68_VOID  BFEAOSF_skiplayout(A68_84 * Ch)
{ 
A68_CHAR  CFEAOSF_c;
A68_BOOL  DFEAOSF;  /* optbool result */
A68_INT * EFEAOSF;  /* YIELD */
A_PROC_ENTRY(skiplayout);
 /* line 84: */
 /* line 85: */
{ 
 /* line 86: */
for ( ;; )
{ 
DFEAOSF = ((CFEAOSF_c = TEEAOSF_getchar(Ch))<=' ');
if ( DFEAOSF )
{DFEAOSF = (CFEAOSF_c!=SHDAOSF_end_of_file_char);
}
if ( !(DFEAOSF) ) break;
/*SKIP*/;
}
 /* line 87: */
 /* line 88: */
EFEAOSF = (&(Ch->Charnumber)) ;
(*EFEAOSF)-=1;
} 
A_PROC_EXIT(skiplayout);
return;
} 
#undef NL

A68_VOID  GFEAOSF_skiptext(A68_84 * Ch)
{ 
A68_CHAR  HFEAOSF_c;
A68_INT * IFEAOSF;  /* YIELD */
A_PROC_ENTRY(skiptext);
 /* line 91: */
 /* line 92: */
{ 
 /* line 93: */
for ( ;; )
{ 
if ( !(((HFEAOSF_c = TEEAOSF_getchar(Ch))>=' ')) ) break;
/*SKIP*/;
}
 /* line 94: */
 /* line 95: */
IFEAOSF = (&(Ch->Charnumber)) ;
(*IFEAOSF)-=1;
} 
A_PROC_EXIT(skiptext);
return;
} 
#undef NL

A68_CHAR  KFEAOSF_nextchar(A68_84 * Ch)
{ 
A68_CHAR  LFEAOSF_c;
A68_INT * MFEAOSF;  /* YIELD */
A68_CHAR  NFEAOSF;  /* clause result */
A_PROC_ENTRY(nextchar);
 /* line 98: */
 /* line 99: */
{ 
LFEAOSF_c = TEEAOSF_getchar(Ch);
 /* line 100: */
MFEAOSF = (&(Ch->Charnumber)) ;
(*MFEAOSF)-=1;
 /* line 101: */
 /* line 102: */
NFEAOSF = LFEAOSF_c;
} 
A_PROC_EXIT(nextchar);
return( NFEAOSF );
} 
#undef NL

A68_BOOL  PFEAOSF_end_of_line(A68_84 * Ch)
{ 
A68_BOOL  QFEAOSF;  /* clause result */
A_PROC_ENTRY(end_of_line);
QFEAOSF = ((*(&(Ch->Charnumber)))>(*(&(Ch->Width))));
A_PROC_EXIT(end_of_line);
return( QFEAOSF );
} 
#undef NL

A_STATIC A68_INT  TFEAOSF_basicgetint(A68_84 * Ch, A68_INT  Radix)
{ 
A68_INT  UFEAOSF;  /* clause result */
A68_CHAR * VFEAOSF_end;
A68_VC  WFEAOSF;  /* OPERATORS - trim index */
A68_VC  XFEAOSF;  /* OPERATORS - trim index */
A68_VC  YFEAOSF_str;
A68_INT  ZFEAOSF_int;
A68_INT  AGEAOSF_len;
A68_INT * BGEAOSF;  /* YIELD */
A68_38 * CGEAOSF;  /* YIELD */
A_PROC_ENTRY(basicgetint);
 /* line 107: */
 /* line 108: */
{ 
BFEAOSF_skiplayout(Ch);
 /* line 109: */
 /* line 110: */
 /* line 111: */
if ( EVBAOSF_((*(&(Ch->Status))), OUBAOSF_io_ok) )
{ 
UFEAOSF = 0;
} 
else
{ 
 /* line 112: */
 /* line 113: */
WFEAOSF = (*(&(Ch->Buffer))) ;
YFEAOSF_str = A_VTRIM(XFEAOSF,(WFEAOSF),A_VTSCRIPT(&(XFEAOSF.upb),(WFEAOSF).upb,(*(&(Ch->Charnumber))),(*(&(Ch->Width)))));
 /* line 114: */
ZFEAOSF_int = (A68_INT )FEEAOSF_strtol(YFEAOSF_str, (&VFEAOSF_end), Radix);
 /* line 115: */
AGEAOSF_len = EEEAOSF_diff(YFEAOSF_str, VFEAOSF_end);
 /* line 116: */
BGEAOSF = (&(Ch->Charnumber)) ;
(*BGEAOSF)+=AGEAOSF_len;
 /* line 117: */
if ( (AGEAOSF_len==0) )
{ 
CGEAOSF = (&(Ch->Status)) ;
(*CGEAOSF) = KEEAOSF_io_badnumber;
} 
 /* line 118: */
 /* line 119: */
 /* line 120: */
UFEAOSF = ZFEAOSF_int;
} 
} 
A_PROC_EXIT(basicgetint);
return( UFEAOSF );
} 
#undef NL

A68_INT  EGEAOSF_getint(A68_84 * Ch)
{ 
A68_INT  FGEAOSF;  /* clause result */
A_PROC_ENTRY(getint);
FGEAOSF = TFEAOSF_basicgetint(Ch, 0);
A_PROC_EXIT(getint);
return( FGEAOSF );
} 
#undef NL

A68_INT  HGEAOSF_gethex(A68_84 * Ch)
{ 
A68_INT  IGEAOSF;  /* clause result */
A_PROC_ENTRY(gethex);
IGEAOSF = TFEAOSF_basicgetint(Ch, 16);
A_PROC_EXIT(gethex);
return( IGEAOSF );
} 
#undef NL

A68_INT  KGEAOSF_getoct(A68_84 * Ch)
{ 
A68_INT  LGEAOSF;  /* clause result */
A_PROC_ENTRY(getoct);
LGEAOSF = TFEAOSF_basicgetint(Ch, 8);
A_PROC_EXIT(getoct);
return( LGEAOSF );
} 
#undef NL

A68_REAL  NGEAOSF_getreal(A68_84 * Ch)
{ 
A68_REAL  OGEAOSF;  /* clause result */
A68_CHAR * PGEAOSF_end;
A68_VC  QGEAOSF;  /* OPERATORS - trim index */
A68_VC  RGEAOSF;  /* OPERATORS - trim index */
A68_VC  SGEAOSF_str;
A68_REAL  TGEAOSF_real;
A68_INT  UGEAOSF_len;
A68_INT * VGEAOSF;  /* YIELD */
A68_38 * WGEAOSF;  /* YIELD */
A_PROC_ENTRY(getreal);
 /* line 127: */
 /* line 128: */
{ 
BFEAOSF_skiplayout(Ch);
 /* line 129: */
 /* line 130: */
 /* line 131: */
if ( EVBAOSF_((*(&(Ch->Status))), OUBAOSF_io_ok) )
{ 
OGEAOSF = 0.0;
} 
else
{ 
 /* line 132: */
 /* line 133: */
QGEAOSF = (*(&(Ch->Buffer))) ;
SGEAOSF_str = A_VTRIM(RGEAOSF,(QGEAOSF),A_VTSCRIPT(&(RGEAOSF.upb),(QGEAOSF).upb,(*(&(Ch->Charnumber))),(*(&(Ch->Width)))));
 /* line 134: */
TGEAOSF_real = GEEAOSF_strtod(SGEAOSF_str, (&PGEAOSF_end));
 /* line 135: */
UGEAOSF_len = EEEAOSF_diff(SGEAOSF_str, PGEAOSF_end);
 /* line 136: */
VGEAOSF = (&(Ch->Charnumber)) ;
(*VGEAOSF)+=UGEAOSF_len;
 /* line 137: */
if ( (UGEAOSF_len==0) )
{ 
WGEAOSF = (&(Ch->Status)) ;
(*WGEAOSF) = KEEAOSF_io_badnumber;
} 
 /* line 138: */
 /* line 139: */
 /* line 140: */
OGEAOSF = TGEAOSF_real;
} 
} 
A_PROC_EXIT(getreal);
return( OGEAOSF );
} 
#undef NL

A68_BOOL  YGEAOSF_getbool(A68_84 * Ch)
{ 
A68_BOOL  ZGEAOSF;  /* clause result */
A68_CHAR  AHEAOSF_c;
A68_BOOL  BHEAOSF;  /* optbool result */
A68_BOOL  CHEAOSF;  /* optbool result */
A68_38 * DHEAOSF;  /* YIELD */
A_PROC_ENTRY(getbool);
 /* line 143: */
 /* line 144: */
{ 
BFEAOSF_skiplayout(Ch);
 /* line 145: */
 /* line 146: */
if ( EVBAOSF_((*(&(Ch->Status))), OUBAOSF_io_ok) )
{ 
 /* line 147: */
ZGEAOSF = A68_FALSE;
} 
else
{ 
AHEAOSF_c = TEEAOSF_getchar(Ch);
 /* line 148: */
BHEAOSF = (AHEAOSF_c=='T');
if ( ! BHEAOSF )
{ /* line 149: */
BHEAOSF = (AHEAOSF_c=='t');
}
if ( BHEAOSF )
{ 
 /* line 150: */
ZGEAOSF = A68_TRUE;
} 
else
{ 
CHEAOSF = (AHEAOSF_c=='F');
if ( ! CHEAOSF )
{ /* line 151: */
CHEAOSF = (AHEAOSF_c=='f');
}
if ( CHEAOSF )
{ 
 /* line 152: */
ZGEAOSF = A68_FALSE;
} 
else
{ 
DHEAOSF = (&(Ch->Status)) ;
(*DHEAOSF) = KEEAOSF_io_badnumber;
 /* line 153: */
 /* line 154: */
 /* line 155: */
ZGEAOSF = A68_FALSE;
} 
} 
} 
} 
A_PROC_EXIT(getbool);
return( ZGEAOSF );
} 
#undef NL

A68_VOID  FHEAOSF_getstr(A68_84 * Ch, A68_VC  *ReturnedValue)
{ 
A68_BOOL  GHEAOSF;  /* optbool result */
A68_VC  HHEAOSF;  /* clause result */
A68_VC  IHEAOSF;  /* OPERATORS - trim index */
A68_VC  JHEAOSF;  /* OPERATORS - trim index */
A68_INT  KHEAOSF_rem;
A68_INT  LHEAOSF_start;
A68_INT * MHEAOSF;  /* YIELD */
A68_VC  NHEAOSF;  /* OPERATORS - trim index */
A68_VC  OHEAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(getstr);
 /* line 158: */
 /* line 159: */
{ 
GHEAOSF = ((*(&(Ch->Charnumber)))>((*(&(Ch->Width)))+1));
if ( GHEAOSF )
{ /* line 160: */
GHEAOSF = AVBAOSF_((*(&(Ch->Status))), OUBAOSF_io_ok);
}
if ( GHEAOSF )
{ 
 /* line 161: */
PKDAOSF_newline(Ch);
} 
 /* line 162: */
 /* line 163: */
if ( EVBAOSF_((*(&(Ch->Status))), OUBAOSF_io_ok) )
{ 
 /* line 164: */
IHEAOSF = (*(&(Ch->Buffer))) ;
HHEAOSF = A_VTRIM(JHEAOSF,(IHEAOSF),A_VTSCRIPT(&(JHEAOSF.upb),(IHEAOSF).upb,1,0));
} 
else
{ 
KHEAOSF_rem = (((*(&(Ch->Width)))+1)-(*(&(Ch->Charnumber))));
 /* line 165: */
LHEAOSF_start = (*(&(Ch->Charnumber)));
 /* line 166: */
MHEAOSF = (&(Ch->Charnumber)) ;
(*MHEAOSF)+=(KHEAOSF_rem+1);
 /* line 168: */
 /* line 169: */
 /* line 170: */
NHEAOSF = (*(&(Ch->Buffer))) ;
HHEAOSF = A_VTRIM(OHEAOSF,(NHEAOSF),A_VTSCRIPT(&(OHEAOSF.upb),(NHEAOSF).upb,LHEAOSF_start,((LHEAOSF_start+KHEAOSF_rem)-1)));
} 
} 
A_PROC_EXIT(getstr);
*ReturnedValue = (HHEAOSF);
return;
} 
#undef NL

A68_VOID  QHEAOSF_getstatus(A68_84 * Ch, A68_38  *ReturnedValue)
{ 
A68_BOOL  RHEAOSF;  /* optbool result */
A68_38  SHEAOSF;  /* clause result */
A_PROC_ENTRY(getstatus);
 /* line 173: */
 /* line 174: */
{ 
RHEAOSF = ((*(&(Ch->Charnumber)))>(*(&(Ch->Width))));
if ( RHEAOSF )
{ /* line 175: */
RHEAOSF = AVBAOSF_((*(&(Ch->Status))), OUBAOSF_io_ok);
}
if ( RHEAOSF )
{ 
 /* line 176: */
PKDAOSF_newline(Ch);
} 
 /* line 177: */
 /* line 178: */
SHEAOSF = (*(&(Ch->Status)));
} 
A_PROC_EXIT(getstatus);
*ReturnedValue = (SHEAOSF);
return;
} 
#undef NL

A68_VOID  UHEAOSF_strtrim(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_INT  VHEAOSF_top;
A68_INT  WHEAOSF_pos;
A68_BOOL  XHEAOSF;  /* optbool result */
A68_INT  YHEAOSF;  /* YIELD */
A68_VC  ZHEAOSF;  /* clause result */
A68_VC  AIEAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(strtrim);
 /* line 181: */
{ 
VHEAOSF_top = Str.upb;
 /* line 182: */
WHEAOSF_pos = 0;
 /* line 183: */
for ( ;; )
{ 
XHEAOSF = (WHEAOSF_pos<VHEAOSF_top);
if ( XHEAOSF )
{YHEAOSF = WHEAOSF_pos+=1 ;
XHEAOSF = (A_VINDEX(Str,YHEAOSF)!=(A68_SSBITS)0);
}
if ( !(XHEAOSF) ) break;
/*SKIP*/;
}
 /* line 184: */
 /* line 185: */
ZHEAOSF = A_VTRIM(AIEAOSF,(Str),A_VTSCRIPT(&(AIEAOSF.upb),(Str).upb,1,(WHEAOSF_pos-1)));
} 
A_PROC_EXIT(strtrim);
*ReturnedValue = (ZHEAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  DIEAOSF_basicgetstring(A68_84 * Ch, A68_RC  Rrc)
{ 
A68_INT  EIEAOSF_bottom;
A68_INT  FIEAOSF_top;
A68_INT  GIEAOSF_rem;
A68_INT  HIEAOSF_start;
A68_INT  IIEAOSF_len;
A68_INT  JIEAOSF;  /* clause result */
A68_INT  KIEAOSF_size;
A68_INT  LIEAOSF_extent;
A68_INT * MIEAOSF;  /* YIELD */
A68_RC  NIEAOSF;  /* OPERATORS - trim index */
A68_VC  OIEAOSF;  /* OPERATORS - trim index */
A68_VC  PIEAOSF;  /* OPERATORS - trim index */
A68_VC  QIEAOSF;  /* YIELD */
A68_RC  RIEAOSF;  /* OPERATORS - vector -> row */
A68_RC  SIEAOSF;  /* YIELD */
A68_RC  TIEAOSF;  /* OPERATORS - assign op */
A68_CHAR * UIEAOSF_tc;
A68_RC  VIEAOSF;  /* OPERATORS - trim index */
A68_RC  WIEAOSF;  /* forall yield */
A68_INT  XIEAOSF;  /* forall loop counter */
A68_CHAR * YIEAOSF_tc;
A68_RC  ZIEAOSF;  /* OPERATORS - trim index */
A68_RC  AJEAOSF;  /* forall yield */
A68_INT  BJEAOSF;  /* forall loop counter */
A_PROC_ENTRY(basicgetstring);
 /* line 188: */
 /* line 189: */
{ 
EIEAOSF_bottom = Rrc.dim[0].lwb;
FIEAOSF_top = Rrc.dim[0].upb;
 /* line 190: */
GIEAOSF_rem = (((*(&(Ch->Width)))+1)-(*(&(Ch->Charnumber))));
 /* line 191: */
HIEAOSF_start = (*(&(Ch->Charnumber)));
IIEAOSF_len = ((FIEAOSF_top-EIEAOSF_bottom)+1);
 /* line 192: */
if ( (IIEAOSF_len<GIEAOSF_rem) )
{ 
JIEAOSF = IIEAOSF_len;
} 
else
{ 
JIEAOSF = GIEAOSF_rem;
} 
KIEAOSF_size = JIEAOSF;
 /* line 193: */
 /* line 194: */
if ( (KIEAOSF_size>0) )
{ 
LIEAOSF_extent = (KIEAOSF_size-1);
 /* line 195: */
MIEAOSF = (&(Ch->Charnumber)) ;
(*MIEAOSF)+=KIEAOSF_size;
 /* line 196: */
 /* line 197: */
OIEAOSF = (*(&(Ch->Buffer))) ;
QIEAOSF = A_VTRIM(PIEAOSF,(OIEAOSF),A_VTSCRIPT(&(PIEAOSF.upb),(OIEAOSF).upb,HIEAOSF_start,(HIEAOSF_start+LIEAOSF_extent))) ;
SIEAOSF = A_R1TRIM(NIEAOSF,(Rrc),A_RTSCRIPT(&(NIEAOSF.dim[0]),&((Rrc).dim[0]),EIEAOSF_bottom,(EIEAOSF_bottom+LIEAOSF_extent),1)) ;
TIEAOSF = A_VECARR(QIEAOSF,RIEAOSF) ;
A_R1ASSIGN2(TIEAOSF,SIEAOSF,A68_CHAR );
 /* line 198: */
WIEAOSF = A_R1TRIM(VIEAOSF,(Rrc),A_RTSCRIPT(&(VIEAOSF.dim[0]),&((Rrc).dim[0]),(EIEAOSF_bottom+KIEAOSF_size),(Rrc).dim[0].upb,1)) ;
XIEAOSF = WIEAOSF.dim[0].upb - WIEAOSF.dim[0].lwb;
UIEAOSF_tc = WIEAOSF.data;
for (;XIEAOSF-- >= 0;
(UIEAOSF_tc += WIEAOSF.dim[0].stride
) )
{
(*UIEAOSF_tc) = (A68_SSBITS)0;
}
 /* line 199: */
} 
else
{ 
AJEAOSF = A_R1TRIM(ZIEAOSF,(Rrc),A_RTSCRIPT(&(ZIEAOSF.dim[0]),&((Rrc).dim[0]),(Rrc).dim[0].lwb,(Rrc).dim[0].upb,(Rrc).dim[0].lwb)) ;
BJEAOSF = AJEAOSF.dim[0].upb - AJEAOSF.dim[0].lwb;
YIEAOSF_tc = AJEAOSF.data;
for (;BJEAOSF-- >= 0;
(YIEAOSF_tc += AJEAOSF.dim[0].stride
) )
{
(*YIEAOSF_tc) = (A68_SSBITS)0;
}
 /* line 200: */
 /* line 201: */
} 
} 
A_PROC_EXIT(basicgetstring);
return;
} 
#undef NL

A68_BOOL  EJEAOSF_get(A68_84 * Ch, A68_115  In)
{ 
A68_96  FJEAOSF_elem;
A68_96 * GJEAOSF;  /* forall control - []x */
A68_INT  HJEAOSF;  /* forall loop counter */
A68_96  IJEAOSF;  /* united object - for case conformity */
A68_INT * JJEAOSF_ri;
A68_71  KJEAOSF_rvi;
A68_INT * LJEAOSF_i;
A68_INT  MJEAOSF;  /* forall loop counter */
A68_97  NJEAOSF_rri;
A68_INT * OJEAOSF_i;
A68_INT  PJEAOSF;  /* forall loop counter */
A68_BITS * QJEAOSF_rbt;
A68_98  RJEAOSF_rvbt;
A68_BITS * SJEAOSF_bt;
A68_INT  TJEAOSF;  /* forall loop counter */
A68_99  UJEAOSF_rrbt;
A68_BITS * VJEAOSF_bt;
A68_INT  WJEAOSF;  /* forall loop counter */
A68_CHAR * XJEAOSF_rc;
A68_VC  YJEAOSF_rvc;
A68_RC  ZJEAOSF;  /* OPERATORS - vector -> row */
A68_RC  AKEAOSF_rrc;
A68_BOOL * BKEAOSF_rbl;
A68_100  CKEAOSF_rvbl;
A68_BOOL * DKEAOSF_bb;
A68_INT  EKEAOSF;  /* forall loop counter */
A68_101  FKEAOSF_rrbl;
A68_BOOL * GKEAOSF_bb;
A68_INT  HKEAOSF;  /* forall loop counter */
A68_REAL * IKEAOSF_rr;
A68_102  JKEAOSF_rrr;
A68_REAL * KKEAOSF_r;
A68_INT  LKEAOSF;  /* forall loop counter */
A68_103  MKEAOSF_rvr;
A68_REAL * NKEAOSF_r;
A68_INT  OKEAOSF;  /* forall loop counter */
A68_88  PKEAOSF_proc;
A68_104  QKEAOSF_struct;
A68_INT  RKEAOSF_i;
A68_INT  SKEAOSF;  /* to part of loop */
A68_104  TKEAOSF;  /* OPERATORS - straight index */
A68_96  UKEAOSF;  /* OPERATORS - straight index result */
A68_115  VKEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  WKEAOSF;  /* clause result */
A_PROC_ENTRY(get);
 /* line 204: */
 /* line 205: */
{ 
HJEAOSF = In.upb -1;
GJEAOSF = In.data;
for (;HJEAOSF-- >= 0;
(GJEAOSF++
) )
{
FJEAOSF_elem = *GJEAOSF;
 /* line 206: */
 /* line 207: */
if ( !(AVBAOSF_((*(&(Ch->Status))), OUBAOSF_io_ok)) ) break;
 /* line 208: */
IJEAOSF = FJEAOSF_elem ;
switch ( IJEAOSF.mode )
{ 
case 1: /* REF INT */
JJEAOSF_ri = (IJEAOSF.data.mode1);
 /* line 209: */
(*JJEAOSF_ri) = EGEAOSF_getint(Ch);
break;
case 2: /* REF VECTOR [] INT */
KJEAOSF_rvi = (IJEAOSF.data.mode2);
MJEAOSF = KJEAOSF_rvi.upb -1;
LJEAOSF_i = KJEAOSF_rvi.data;
for (;MJEAOSF-- >= 0;
(LJEAOSF_i++
) )
{
(*LJEAOSF_i) = EGEAOSF_getint(Ch);
}
 /* line 210: */
break;
case 3: /* REF [] INT */
NJEAOSF_rri = (IJEAOSF.data.mode3);
PJEAOSF = NJEAOSF_rri.dim[0].upb - NJEAOSF_rri.dim[0].lwb;
OJEAOSF_i = NJEAOSF_rri.data;
for (;PJEAOSF-- >= 0;
(OJEAOSF_i += NJEAOSF_rri.dim[0].stride
) )
{
(*OJEAOSF_i) = EGEAOSF_getint(Ch);
}
 /* line 211: */
break;
case 4: /* REF BITS */
QJEAOSF_rbt = (IJEAOSF.data.mode4);
 /* line 212: */
(*QJEAOSF_rbt) = (A68_BITS )HGEAOSF_gethex(Ch);
break;
case 5: /* REF VECTOR [] BITS */
RJEAOSF_rvbt = (IJEAOSF.data.mode5);
TJEAOSF = RJEAOSF_rvbt.upb -1;
SJEAOSF_bt = RJEAOSF_rvbt.data;
for (;TJEAOSF-- >= 0;
(SJEAOSF_bt++
) )
{
(*SJEAOSF_bt) = (A68_BITS )HGEAOSF_gethex(Ch);
}
 /* line 213: */
break;
case 6: /* REF [] BITS */
UJEAOSF_rrbt = (IJEAOSF.data.mode6);
WJEAOSF = UJEAOSF_rrbt.dim[0].upb - UJEAOSF_rrbt.dim[0].lwb;
VJEAOSF_bt = UJEAOSF_rrbt.data;
for (;WJEAOSF-- >= 0;
(VJEAOSF_bt += UJEAOSF_rrbt.dim[0].stride
) )
{
(*VJEAOSF_bt) = (A68_BITS )HGEAOSF_gethex(Ch);
}
 /* line 214: */
break;
case 7: /* REF CHAR */
XJEAOSF_rc = (IJEAOSF.data.mode7);
 /* line 215: */
(*XJEAOSF_rc) = TEEAOSF_getchar(Ch);
break;
case 8: /* REF VECTOR [] CHAR */
YJEAOSF_rvc = (IJEAOSF.data.mode8);
 /* line 216: */
DIEAOSF_basicgetstring(Ch, A_VECARR(YJEAOSF_rvc,ZJEAOSF));
break;
case 9: /* REF [] CHAR */
AKEAOSF_rrc = (IJEAOSF.data.mode9);
 /* line 217: */
DIEAOSF_basicgetstring(Ch, AKEAOSF_rrc);
break;
case 10: /* REF BOOL */
BKEAOSF_rbl = (IJEAOSF.data.mode10);
 /* line 218: */
(*BKEAOSF_rbl) = YGEAOSF_getbool(Ch);
break;
case 11: /* REF VECTOR [] BOOL */
CKEAOSF_rvbl = (IJEAOSF.data.mode11);
EKEAOSF = CKEAOSF_rvbl.upb -1;
DKEAOSF_bb = CKEAOSF_rvbl.data;
for (;EKEAOSF-- >= 0;
(DKEAOSF_bb++
) )
{
(*DKEAOSF_bb) = YGEAOSF_getbool(Ch);
}
 /* line 219: */
break;
case 12: /* REF [] BOOL */
FKEAOSF_rrbl = (IJEAOSF.data.mode12);
HKEAOSF = FKEAOSF_rrbl.dim[0].upb - FKEAOSF_rrbl.dim[0].lwb;
GKEAOSF_bb = FKEAOSF_rrbl.data;
for (;HKEAOSF-- >= 0;
(GKEAOSF_bb += FKEAOSF_rrbl.dim[0].stride
) )
{
(*GKEAOSF_bb) = YGEAOSF_getbool(Ch);
}
 /* line 220: */
break;
case 13: /* REF REAL */
IKEAOSF_rr = (IJEAOSF.data.mode13);
 /* line 221: */
(*IKEAOSF_rr) = NGEAOSF_getreal(Ch);
break;
case 14: /* REF VECTOR [] REAL */
JKEAOSF_rrr = (IJEAOSF.data.mode14);
LKEAOSF = JKEAOSF_rrr.upb -1;
KKEAOSF_r = JKEAOSF_rrr.data;
for (;LKEAOSF-- >= 0;
(KKEAOSF_r++
) )
{
(*KKEAOSF_r) = NGEAOSF_getreal(Ch);
}
 /* line 222: */
break;
case 15: /* REF [] REAL */
MKEAOSF_rvr = (IJEAOSF.data.mode15);
OKEAOSF = MKEAOSF_rvr.dim[0].upb - MKEAOSF_rvr.dim[0].lwb;
NKEAOSF_r = MKEAOSF_rvr.data;
for (;OKEAOSF-- >= 0;
(NKEAOSF_r += MKEAOSF_rvr.dim[0].stride
) )
{
(*NKEAOSF_r) = NGEAOSF_getreal(Ch);
}
 /* line 223: */
break;
case 16: /* PROC(REF MODE84) VOID */
PKEAOSF_proc = (IJEAOSF.data.mode16);
 /* line 224: */
A_CALLPROC(PKEAOSF_proc,(Ch),(Ch,(PKEAOSF_proc).nonlocals));
break;
case 17: /* STRAIGHT MODE96 */
QKEAOSF_struct = (IJEAOSF.data.mode17);
SKEAOSF = QKEAOSF_struct.upb;
for ( RKEAOSF_i = 1;
RKEAOSF_i <= SKEAOSF;
RKEAOSF_i += 1 )
{ 
EJEAOSF_get(Ch, A_HVEC(VKEAOSF,A_STRINDEX_RTN(QKEAOSF_struct,RKEAOSF_i,TKEAOSF,UKEAOSF),A68_96 ));
}
 /* line 225: */
 /* line 226: */
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 227: */
 /* line 228: */
WKEAOSF = AVBAOSF_((*(&(Ch->Status))), OUBAOSF_io_ok);
} 
A_PROC_EXIT(get);
return( WKEAOSF );
} 
#undef NL
 /* line 1: */
 /* line 3: */
void ZDEAOSF(void)   /* initialise DECS getstrings */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","getstrings.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/iobasics.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_INT * IEEAOSF;  /* YIELD */
A68_38  JEEAOSF;  /* clause result */
A68_INT * LEEAOSF;  /* YIELD */
A68_38  MEEAOSF;  /* clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
KGDAOSF();   /* USE iobasics */
CSCAOSF();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/getstrings.a68";
A_config.translation_time = "Sun Apr 18 20:07:49 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "YDEAOSF (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:49 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS getstrings);
UEAALIB_a68config(LGAALIB_configinfo, DEEAOSF);
 /* line 42: */
 /* line 48: */
 /* line 50: */
 /* line 51: */
 /* line 52: */
 /* line 54: */
 /* line 55: */
 /* line 56: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
 /* line 63: */
 /* line 64: */
{ 
IEEAOSF = (&((&HEEAOSF_tt)->Status)) ;
(*IEEAOSF) = 5;
JEEAOSF = HEEAOSF_tt;
} 
KEEAOSF_io_badnumber = JEEAOSF;
 /* line 65: */
{ 
LEEAOSF = (&((&HEEAOSF_tt)->Status)) ;
(*LEEAOSF) = 6;
MEEAOSF = HEEAOSF_tt;
} 
NEEAOSF_io_overflow = MEEAOSF;
 /* line 67: */
 /* line 73: */
 /* line 83: */
 /* line 90: */
 /* line 97: */
 /* line 104: */
 /* line 106: */
 /* line 122: */
 /* line 123: */
 /* line 124: */
 /* line 126: */
 /* line 142: */
 /* line 157: */
 /* line 172: */
 /* line 180: */
 /* line 187: */
 /* line 203: */
 /* line 231: */
 /* line 232: */
 /* line 239: */
/*SKIP*/;
A_PROC_EXIT(DECS getstrings);
} 
#undef NL
/* end of translation of getstrings.a68 */
