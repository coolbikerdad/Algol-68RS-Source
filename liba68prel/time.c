/* UNAME:CZCAOSF */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t32,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(MODE26) REF MODE26 */
struct A68t35 ;

A_PROCEDURE(A68_VOID ,A68t34,(struct A68t35 ,A68_VC *),(struct A68t35 ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE35) REF MODE26 */
A_VECTOR(A68_VC ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t36,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t36  A68_36 ;    /* PROC(INT) MODE26 */
struct A68t37{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t38 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t37  A68_37 ;    /* STRUCT(INT,REF MODE38,BITS)  */
A_VECTOR(struct A68t40 ,A68t39);
typedef struct A68t39  A68_39 ;    /* VECTOR [] MODE40 */
struct A68t40{
struct A68t37  Msgno;
A68_VC  Text;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE37,REF MODE26)  */
struct A68t38{
A68_VC  Name;
struct A68t39  Messages;
};
typedef struct A68t38  A68_38 ;    /* STRUCT(REF MODE26,REF MODE39)  */

A_PROCEDURE(A68_VOID ,A68t41,(A68_BOOL ,struct A68t35 *),(A68_BOOL ,struct A68t35 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(BOOL) MODE35 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t37 ,struct A68t35 ),(struct A68t37 ,struct A68t35 ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE37,MODE35) VOID */
A_VECTOR(struct A68t45 ,A68t44);
typedef struct A68t44  A68_44 ;    /* VECTOR [] MODE45 */
struct A68t45{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t43{
A68_VC  Name;
struct A68t39  Messages;
A68_BOOL * Initialised;
struct A68t44  Setup;
};
typedef struct A68t43  A68_43 ;    /* STRUCT(MODE26,REF MODE39,REF BOOL,MODE44)  */

A_PROCEDURE(A68_VOID ,A68t46,(A68_BOOL ,struct A68t43 *),(A68_BOOL ,struct A68t43 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(BOOL) MODE43 */
A_VECTOR(A68_VC ,A68t47);
typedef struct A68t47  A68_47 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t35 ,struct A68t47 *),(struct A68t35 ,struct A68t47 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE35) MODE47 */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t47 ,struct A68t35 *),(struct A68t47 ,struct A68t35 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE47) MODE35 */
struct A68t51 ;

A_PROCEDURE(A68_BOOL ,A68t50,(struct A68t51 ),(struct A68t51 ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE51) BOOL */
struct A68t51 { A68_INT mode; union {
struct A68t37  mode1;
struct A68t40  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t51  A68_51 ;    /* UNION(MODE37,MODE40)  */

A_PROCEDURE(A68_INT ,A68t52,(struct A68t37 ),(struct A68t37 ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE37) INT */

A_PROCEDURE(A68_VOID ,A68t53,(A68_INT ,struct A68t43 ,struct A68t37 *),(A68_INT ,struct A68t43 ,struct A68t37 *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(INT,MODE43) MODE37 */

A_PROCEDURE(A68_BOOL ,A68t54,(struct A68t37 ,struct A68t43 ),(struct A68t37 ,struct A68t43 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE37,MODE43) BOOL */

A_PROCEDURE(A68_VOID ,A68t55,(struct A68t37 ,struct A68t35 ,struct A68t40 *),(struct A68t37 ,struct A68t35 ,struct A68t40 *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE37,MODE35) MODE40 */
struct A68t56{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t57{
A68_INT  Status;
A_PAD_INT(PAD_5)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t58,(struct A68t57 ,struct A68t57 ),(struct A68t57 ,struct A68t57 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE57,MODE57) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t60);
typedef struct A68t60  A68_60 ;    /* STRUCT 4 CHAR */
struct A68t59{
struct A68t60  Access;
A_PAD_ISTRUCT(A68_60 ,PAD_6)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE60)  */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t56 *,A68_VC *),(struct A68t56 *,A68_VC *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE56) MODE26 */

A_PROCEDURE(struct A68t56 *,A68t62,(A68_VC ,struct A68t59 ,struct A68t42 ),(A68_VC ,struct A68t59 ,struct A68t42 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE26,MODE59,MODE42) REF MODE56 */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t56 *,struct A68t42 ),(struct A68t56 *,struct A68t42 ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE56,MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t64,(struct A68t56 *,A68_VC ,A68_INT *,struct A68t42 ,struct A68t57 *),(struct A68t56 *,A68_VC ,A68_INT *,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t64  A68_64 ;    /* PROC(REF MODE56,REF MODE26,REF INT,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t56 *,A68_VC ,struct A68t42 ,struct A68t57 *),(struct A68t56 *,A68_VC ,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE56,MODE26,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t66,(struct A68t56 *,A68_LINT ,struct A68t42 ,struct A68t57 *),(struct A68t56 *,A68_LINT ,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(REF MODE56,LONG INT,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t56 *,A68_LINT *,struct A68t42 ,struct A68t57 *),(struct A68t56 *,A68_LINT *,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF MODE56,REF LONG INT,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t56 *,struct A68t42 ,struct A68t57 *),(struct A68t56 *,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE56,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ,struct A68t42 ,struct A68t57 *),(A68_VC ,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE26,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ,A68_VC ,struct A68t42 ,struct A68t57 *),(A68_VC ,A68_VC ,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE26,MODE26,MODE42) MODE57 */
struct A68t71{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_7)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_8)
A68_SINT  Device;
A_PAD_SINT(PAD_9)
A68_SINT  Links;
A_PAD_SINT(PAD_10)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_11)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_12)
A68_LINT  Size;
A_PAD_LINT(PAD_13)
A68_LINT  Accessed;
A_PAD_LINT(PAD_14)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_15)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_16)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t73 ;

A_PROCEDURE(struct A68t71 *,A68t72,(struct A68t73 ,struct A68t42 ),(struct A68t73 ,struct A68t42 ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE73,MODE42) REF MODE71 */
struct A68t73 { A68_INT mode; union {
struct A68t56 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t73  A68_73 ;    /* UNION(REF MODE56,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t74,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(REF MODE56) BOOL */

A_PROCEDURE(A68_BITS *,A68t75,(A68_VC ,struct A68t42 ),(A68_VC ,struct A68t42 ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE26,MODE42) REF BITS */

A_PROCEDURE(A68_VOID ,A68t76,(A68_BITS *,struct A68t42 ),(A68_BITS *,struct A68t42 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(REF BITS,MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t77,(A68_BITS *,struct A68t42 ,A68_VC *),(A68_BITS *,struct A68t42 ,A68_VC *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF BITS,MODE42) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC *),(A68_VC *,void *));
typedef struct A68t78  A68_78 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t79,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t80,(void),(void *));
typedef struct A68t80  A68_80 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t81,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_INT ),(A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t83,(A68_VC ,struct A68t42 ),(A68_VC ,struct A68t42 ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE26,MODE42) INT */

A_PROCEDURE(A68_INT ,A68t84,(void),(void *));
typedef struct A68t84  A68_84 ;    /* PROC INT */
struct A68t85{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_VC ,struct A68t42 ,struct A68t85 *),(A68_VC ,A68_VC ,struct A68t42 ,struct A68t85 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,MODE26,MODE42) MODE85 */

A_PROCEDURE(A68_VOID ,A68t87,(struct A68t35 *),(struct A68t35 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC MODE35 */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC ,struct A68t42 ,struct A68t35 *),(A68_VC ,struct A68t42 ,struct A68t35 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE26,MODE42) MODE35 */
struct A68t90 ;

A_PROCEDURE(A68_VOID ,A68t89,(struct A68t90 ,struct A68t42 ,struct A68t42 ),(struct A68t90 ,struct A68t42 ,struct A68t42 ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE90,MODE42,MODE42) VOID */
A_VECTOR(A68_INT ,A68t90);
typedef struct A68t90  A68_90 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t90 ,struct A68t42 ),(struct A68t90 ,struct A68t42 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE90,MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t92,(A68_INT ,struct A68t42 ,struct A68t42 *),(A68_INT ,struct A68t42 ,struct A68t42 *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(INT,MODE42) MODE42 */

A_PROCEDURE(A68_VOID ,A68t93,(void),(void *));
typedef struct A68t93  A68_93 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t94,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(BITS) VOID */
struct A68t96 ;

A_PROCEDURE(A68_VOID ,A68t95,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(MODE96) VOID */

A_PROCEDURE(A68_VOID ,A68t96,(A68_VC ),(A68_VC ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE26) VOID */
struct A68t97{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_17)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t98,(A68_BOOL ,struct A68t97 *),(A68_BOOL ,struct A68t97 *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(BOOL) MODE97 */
struct A68t100 ;

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t100 ,struct A68t42 ),(struct A68t100 ,struct A68t42 ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE100,MODE42) VOID */
A_VECTOR(struct A68t97 ,A68t100);
typedef struct A68t100  A68_100 ;    /* VECTOR [] MODE97 */

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t93 ),(struct A68t93 ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE93) VOID */

A_PROCEDURE(A68_VOID ,A68t102,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t103);
typedef struct A68t103  A68_103 ;    /* STRUCT 54 CHAR */

A_PROCEDURE(A68_INT ,A68t104,(A68_INT ),(A68_INT ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t105,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t106);
typedef struct A68t106  A68_106 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t107,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,3,A68t108);
typedef struct A68t108  A68_108 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_VC ,12,A68t109);
typedef struct A68t109  A68_109 ;    /* STRUCT 12 MODE26 */
A_ISTRUCT(A68_CHAR ,23,A68t110);
typedef struct A68t110  A68_110 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_INT ,12,A68t111);
typedef struct A68t111  A68_111 ;    /* STRUCT 12 INT */
A_ISTRUCT(A68_VC ,2,A68t112);
typedef struct A68t112  A68_112 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC *),(A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC REF MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_VC ,3,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 3 MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_42  TIBAOSF_global_msg;
extern A68_LINT  VPBAOSF_get_time(void);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern A68_INT  CRBAOSF_get_cpu_time(void);
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
#if !defined(SIGSTKFLT)
#define SIGSTKFLT 32
#endif
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
#if !defined(SIGPWR)
#define SIGPWR 33
#endif
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


/* --- Imports from messageproc --- */
extern A68_37  IUAAOSF_system;
/* --- End of imports from messageproc --- */


/* --- Imports from strops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t35 ,A68_VC *);
extern A68_VOID  FEAAOSF_intchars(A68_INT ,A68_VC *);
/* --- End of imports from strops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void CSCAOSF(void);   /* osif */
extern void ZRAAOSF(void);   /* messageproc */
extern void BCAAOSF(void);   /* strops */
/* --- end of DECS initialisation functions --- */
static A68_103   GZCAOSF = {"$Id: time.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,HZCAOSF,GZCAOSF,54)
static A68_INT  IZCAOSF_zero;
static A68_108   VADAOSF = {"Jan"}; 
A_GISVEC(A68_VC ,WADAOSF,VADAOSF,3)
static A68_108   XADAOSF = {"Feb"}; 
A_GISVEC(A68_VC ,YADAOSF,XADAOSF,3)
static A68_108   ZADAOSF = {"Mar"}; 
A_GISVEC(A68_VC ,ABDAOSF,ZADAOSF,3)
static A68_108   BBDAOSF = {"Apr"}; 
A_GISVEC(A68_VC ,CBDAOSF,BBDAOSF,3)
static A68_108   DBDAOSF = {"May"}; 
A_GISVEC(A68_VC ,EBDAOSF,DBDAOSF,3)
static A68_108   FBDAOSF = {"Jun"}; 
A_GISVEC(A68_VC ,GBDAOSF,FBDAOSF,3)
static A68_108   HBDAOSF = {"Jul"}; 
A_GISVEC(A68_VC ,IBDAOSF,HBDAOSF,3)
static A68_108   JBDAOSF = {"Aug"}; 
A_GISVEC(A68_VC ,KBDAOSF,JBDAOSF,3)
static A68_108   LBDAOSF = {"Sep"}; 
A_GISVEC(A68_VC ,MBDAOSF,LBDAOSF,3)
static A68_108   NBDAOSF = {"Oct"}; 
A_GISVEC(A68_VC ,OBDAOSF,NBDAOSF,3)
static A68_108   PBDAOSF = {"Nov"}; 
A_GISVEC(A68_VC ,QBDAOSF,PBDAOSF,3)
static A68_108   RBDAOSF = {"Dec"}; 
A_GISVEC(A68_VC ,SBDAOSF,RBDAOSF,3)
static A68_35  UBDAOSF_months;
static A68_110   YBDAOSF = {"date_str:  Illegal time"}; 
A_GISVEC(A68_VC ,ZBDAOSF,YBDAOSF,23)
static A68_108   PEDAOSF = {".00"}; 
static A68_114   IFDAOSF = {".00  "}; 
typedef struct   /* env of non-global proc */
{
int dummy;
} OADAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} PDDAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AEDAOSF_generator;

A68_INT  JZCAOSF_seconds(void);

A_STATIC A68_INT  MZCAOSF_days(A68_INT  Seconds);

A_STATIC A68_VOID  QZCAOSF_time_proc(A68_INT  Seconds, A68_VC  Ans);

A68_VOID  KADAOSF_time(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NADAOSF_generator(A68_BOOL  LADAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XBDAOSF_date_proc(A68_INT  Seconds, A68_VC  Ans);

A68_VOID  LDDAOSF_date(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ODDAOSF_generator(A68_BOOL  MDDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  WDDAOSF_date_time(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZDDAOSF_generator(A68_BOOL  XDDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  NEDAOSF_centichars(A68_INT  I, A68_VC  *ReturnedValue);

A68_VOID  DFDAOSF_cpu(A68_VC  *ReturnedValue);

A68_VOID  GFDAOSF_time_str(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NADAOSF_generator(A68_BOOL  LADAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OADAOSF_generator *)NonLocals)->x)
{ 
A68_VC  PADAOSF;  /* clause result */
A68_VC  QADAOSF;  /* OPERATORS - dynamic generator */
{ 
QADAOSF.upb = 8 ;
( LADAOSF_anonymous? A_VLOC(A68_CHAR ,QADAOSF): A_VHEAP(A68_CHAR ,QADAOSF) );
PADAOSF = QADAOSF;
} 
*ReturnedValue = (PADAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ODDAOSF_generator(A68_BOOL  MDDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PDDAOSF_generator *)NonLocals)->x)
{ 
A68_VC  QDDAOSF;  /* clause result */
A68_VC  RDDAOSF;  /* OPERATORS - dynamic generator */
{ 
RDDAOSF.upb = 11 ;
( MDDAOSF_anonymous? A_VLOC(A68_CHAR ,RDDAOSF): A_VHEAP(A68_CHAR ,RDDAOSF) );
QDDAOSF = RDDAOSF;
} 
*ReturnedValue = (QDDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ZDDAOSF_generator(A68_BOOL  XDDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((AEDAOSF_generator *)NonLocals)->x)
{ 
A68_VC  BEDAOSF;  /* clause result */
A68_VC  CEDAOSF;  /* OPERATORS - dynamic generator */
{ 
CEDAOSF.upb = 21 ;
( XDDAOSF_anonymous? A_VLOC(A68_CHAR ,CEDAOSF): A_VHEAP(A68_CHAR ,CEDAOSF) );
BEDAOSF = CEDAOSF;
} 
*ReturnedValue = (BEDAOSF);
return;
} 
#undef NL

A68_INT  JZCAOSF_seconds(void)
{ 
A68_INT  KZCAOSF;  /* clause result */
A_PROC_ENTRY(seconds);
KZCAOSF = (A68_INT )VPBAOSF_get_time();
A_PROC_EXIT(seconds);
return( KZCAOSF );
} 
#undef NL

A_STATIC A68_INT  MZCAOSF_days(A68_INT  Seconds)
{ 
A68_INT  NZCAOSF;  /* clause result */
A_PROC_ENTRY(days);
NZCAOSF = (Seconds/86400);
A_PROC_EXIT(days);
return( NZCAOSF );
} 
#undef NL

A_STATIC A68_VOID  QZCAOSF_time_proc(A68_INT  Seconds, A68_VC  Ans)
{ 
A68_INT  RZCAOSF;  /* ADICOPS - MOD */
A68_INT  SZCAOSF;  /* ADICOPS - MOD */
A68_INT  TZCAOSF_dsecs;
A68_INT  UZCAOSF_dmins;
A68_INT  VZCAOSF_hrs;
A68_INT  WZCAOSF;  /* ADICOPS - MOD */
A68_INT  XZCAOSF;  /* ADICOPS - MOD */
A68_INT  YZCAOSF_mins;
A68_INT  ZZCAOSF;  /* ADICOPS - MOD */
A68_INT  AADAOSF;  /* ADICOPS - MOD */
A68_INT  BADAOSF_secs;
A68_106  CADAOSF;  /* collateral clause result */
A68_INT  DADAOSF;  /* ADICOPS - MOD */
A68_INT  EADAOSF;  /* ADICOPS - MOD */
A68_INT  FADAOSF;  /* ADICOPS - MOD */
A68_INT  GADAOSF;  /* ADICOPS - MOD */
A68_VC  HADAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  IADAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(time_proc);
 /* line 49: */
 /* line 50: */
{ 
SZCAOSF = 86400 ;
TZCAOSF_dsecs = A_MOD(Seconds,SZCAOSF,RZCAOSF);
 /* line 51: */
UZCAOSF_dmins = (TZCAOSF_dsecs/60);
 /* line 52: */
VZCAOSF_hrs = (UZCAOSF_dmins/60);
 /* line 53: */
XZCAOSF = 60 ;
YZCAOSF_mins = A_MOD(UZCAOSF_dmins,XZCAOSF,WZCAOSF);
 /* line 54: */
AADAOSF = 60 ;
BADAOSF_secs = A_MOD(TZCAOSF_dsecs,AADAOSF,ZZCAOSF);
 /* line 55: */
 /* line 56: */
CADAOSF.data[0] = (A68_SSBITS)(IZCAOSF_zero+(VZCAOSF_hrs/10));
EADAOSF = 10 ;
CADAOSF.data[1] = (A68_SSBITS)(IZCAOSF_zero+A_MOD(VZCAOSF_hrs,EADAOSF,DADAOSF));
 /* line 57: */
CADAOSF.data[2] = ':';
CADAOSF.data[3] = (A68_SSBITS)(IZCAOSF_zero+(YZCAOSF_mins/10));
GADAOSF = 10 ;
CADAOSF.data[4] = (A68_SSBITS)(IZCAOSF_zero+A_MOD(YZCAOSF_mins,GADAOSF,FADAOSF));
 /* line 58: */
CADAOSF.data[5] = ':';
CADAOSF.data[6] = (A68_SSBITS)(IZCAOSF_zero+(BADAOSF_secs/10));
 /* line 59: */
CADAOSF.data[7] = (A68_SSBITS)(IZCAOSF_zero+(BADAOSF_secs/10));
IADAOSF = A_HISVEC(HADAOSF,CADAOSF,8,A68_CHAR ) ;
A_VASSIGN2(IADAOSF,Ans,A68_CHAR );
} 
A_PROC_EXIT(time_proc);
return;
} 
#undef NL

A68_VOID  KADAOSF_time(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  MADAOSF_generator;   /* proc value of non-global proc */
A68_VC  RADAOSF;  /* avoid structure result */
A68_VC  SADAOSF_ans;
A68_VC  TADAOSF;  /* clause result */
A_PROC_ENTRY(time);
 /* line 62: */
{ 
A_CLOSURE( MADAOSF_generator, NADAOSF_generator, OADAOSF_generator );
A_CALLPROC(MADAOSF_generator,(A68_FALSE, &RADAOSF),(A68_FALSE, &RADAOSF,(MADAOSF_generator).nonlocals));
SADAOSF_ans = RADAOSF;
QZCAOSF_time_proc(Seconds, SADAOSF_ans);
TADAOSF = SADAOSF_ans;
} 
A_PROC_EXIT(time);
*ReturnedValue = (TADAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  XBDAOSF_date_proc(A68_INT  Seconds, A68_VC  Ans)
{ 
A68_35  ACDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  BCDAOSF_days;
A68_INT  CCDAOSF_year;
A68_BOOL  DCDAOSF_leap;
A68_INT  ECDAOSF;  /* ADICOPS - MOD */
A68_INT  FCDAOSF;  /* ADICOPS - MOD */
A68_BOOL  GCDAOSF;  /* optbool result */
A68_INT  HCDAOSF;  /* ADICOPS - MOD */
A68_INT  ICDAOSF;  /* ADICOPS - MOD */
A68_INT  JCDAOSF_month;
A68_111  KCDAOSF;  /* collateral clause result */
A68_111  LCDAOSF_mnths;
A68_90  MCDAOSF;  /* OPERATORS - istruct -> vector */
A68_90  NCDAOSF;  /* OPERATORS - simple index */
A68_90  OCDAOSF;  /* OPERATORS - istruct -> vector */
A68_90  PCDAOSF;  /* OPERATORS - simple index */
A68_INT  QCDAOSF_dten;
A68_CHAR  RCDAOSF;  /* clause result */
A68_INT  SCDAOSF;  /* YIELD */
A68_CHAR * TCDAOSF;  /* YIELD */
A68_INT  UCDAOSF;  /* YIELD */
A68_INT  VCDAOSF;  /* ADICOPS - MOD */
A68_INT  WCDAOSF;  /* ADICOPS - MOD */
A68_CHAR * XCDAOSF;  /* YIELD */
A68_INT  YCDAOSF;  /* YIELD */
A68_INT  ZCDAOSF;  /* YIELD */
A68_CHAR * ADDAOSF;  /* YIELD */
A68_CHAR * BDDAOSF;  /* YIELD */
A68_VC  CDDAOSF;  /* OPERATORS - trim index */
A68_VC  DDDAOSF;  /* YIELD */
A68_VC  EDDAOSF;  /* OPERATORS - assign op */
A68_INT  FDDAOSF_i;
A68_INT  GDDAOSF;  /* by part of loop */
A68_INT  HDDAOSF;  /* ADICOPS - MOD */
A68_INT  IDDAOSF;  /* ADICOPS - MOD */
A68_CHAR * JDDAOSF;  /* YIELD */
A_PROC_ENTRY(date_proc);
 /* line 68: */
 /* line 69: */
{ 
if ( (Seconds<0) )
{ 
A_CALLPROC(TIBAOSF_global_msg,(IUAAOSF_system, A_HVEC(ACDAOSF,ZBDAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(ACDAOSF,ZBDAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
 /* line 70: */
BCDAOSF_days = ((Seconds/86400)+1);
 /* line 71: */
CCDAOSF_year = 1970;
 /* line 73: */
DCDAOSF_leap = A68_FALSE;
 /* line 74: */
for ( ;; )
{ 
 /* line 75: */
if ( !((BCDAOSF_days>366)) ) break;
 /* line 76: */
FCDAOSF = 4 ;
if ( DCDAOSF_leap = (A_MOD(CCDAOSF_year,FCDAOSF,ECDAOSF)==0) )
{ 
 /* line 77: */
BCDAOSF_days-=366;
} 
else
{ 
 /* line 78: */
BCDAOSF_days-=365;
} 
 /* line 79: */
 /* line 80: */
CCDAOSF_year+=1;
}
 /* line 81: */
GCDAOSF = !DCDAOSF_leap;
if ( GCDAOSF )
{GCDAOSF = (BCDAOSF_days==366);
}
if ( GCDAOSF )
{ 
CCDAOSF_year+=1;
BCDAOSF_days = 1;
} 
 /* line 82: */
ICDAOSF = 4 ;
DCDAOSF_leap = (A_MOD(CCDAOSF_year,ICDAOSF,HCDAOSF)==0);
 /* line 83: */
JCDAOSF_month = 1;
 /* line 84: */
 /* line 85: */
KCDAOSF.data[0] = 31;
if ( DCDAOSF_leap )
{ 
KCDAOSF.data[1] = 29;
} 
else
{ 
KCDAOSF.data[1] = 28;
} 
KCDAOSF.data[2] = 31;
KCDAOSF.data[3] = 30;
KCDAOSF.data[4] = 31;
KCDAOSF.data[5] = 30;
KCDAOSF.data[6] = 31;
KCDAOSF.data[7] = 31;
KCDAOSF.data[8] = 30;
KCDAOSF.data[9] = 31;
KCDAOSF.data[10] = 30;
KCDAOSF.data[11] = 31;
LCDAOSF_mnths = KCDAOSF;
 /* line 86: */
for ( ;; )
{ 
 /* line 87: */
NCDAOSF = A_HISVEC(MCDAOSF,LCDAOSF_mnths,12,A68_INT ) ;
if ( !((BCDAOSF_days>A_VINDEX(NCDAOSF,JCDAOSF_month))) ) break;
PCDAOSF = A_HISVEC(OCDAOSF,LCDAOSF_mnths,12,A68_INT ) ;
BCDAOSF_days-=A_VINDEX(PCDAOSF,JCDAOSF_month);
JCDAOSF_month+=1;
}
 /* line 88: */
QCDAOSF_dten = (BCDAOSF_days/10);
 /* line 89: */
if ( (QCDAOSF_dten==0) )
{ 
RCDAOSF = ' ';
} 
else
{ 
RCDAOSF = (A68_SSBITS)(IZCAOSF_zero+QCDAOSF_dten);
} 
SCDAOSF = 1 ;
TCDAOSF = (&A_VINDEX(Ans,SCDAOSF)) ;
(*TCDAOSF) = RCDAOSF;
 /* line 90: */
UCDAOSF = 2 ;
WCDAOSF = 10 ;
XCDAOSF = (&A_VINDEX(Ans,UCDAOSF)) ;
(*XCDAOSF) = (A68_SSBITS)(IZCAOSF_zero+A_MOD(BCDAOSF_days,WCDAOSF,VCDAOSF));
 /* line 91: */
YCDAOSF = 3 ;
ZCDAOSF = 7 ;
ADDAOSF = (&A_VINDEX(Ans,ZCDAOSF)) ;
BDDAOSF = (&A_VINDEX(Ans,YCDAOSF)) ;
(*BDDAOSF) = (*ADDAOSF) = ' ';
 /* line 92: */
DDDAOSF = A_VTRIM(CDDAOSF,(Ans),A_VTSCRIPT(&(CDDAOSF.upb),(Ans).upb,4,6)) ;
EDDAOSF = A_VINDEX(UBDAOSF_months,JCDAOSF_month) ;
A_VASSIGN2(EDDAOSF,DDDAOSF,A68_CHAR );
 /* line 93: */
 /* line 94: */
GDDAOSF = (-1);
for ( FDDAOSF_i = 11;
( GDDAOSF > 0 && FDDAOSF_i <= 8) ||
( GDDAOSF < 0 && FDDAOSF_i >= 8) ||
( GDDAOSF == 0 ) ;
FDDAOSF_i += GDDAOSF )
{ 
IDDAOSF = 10 ;
JDDAOSF = (&A_VINDEX(Ans,FDDAOSF_i)) ;
(*JDDAOSF) = (A68_SSBITS)(IZCAOSF_zero+A_MOD(CCDAOSF_year,IDDAOSF,HDDAOSF));
 /* line 95: */
 /* line 96: */
CCDAOSF_year/=10;
}
 /* line 97: */
} 
A_PROC_EXIT(date_proc);
return;
} 
#undef NL

A68_VOID  LDDAOSF_date(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  NDDAOSF_generator;   /* proc value of non-global proc */
A68_VC  SDDAOSF;  /* avoid structure result */
A68_VC  TDDAOSF_ans;
A68_VC  UDDAOSF;  /* clause result */
A_PROC_ENTRY(date);
 /* line 100: */
{ 
A_CLOSURE( NDDAOSF_generator, ODDAOSF_generator, PDDAOSF_generator );
A_CALLPROC(NDDAOSF_generator,(A68_FALSE, &SDDAOSF),(A68_FALSE, &SDDAOSF,(NDDAOSF_generator).nonlocals));
TDDAOSF_ans = SDDAOSF;
XBDAOSF_date_proc(Seconds, TDDAOSF_ans);
UDDAOSF = TDDAOSF_ans;
} 
A_PROC_EXIT(date);
*ReturnedValue = (UDDAOSF);
return;
} 
#undef NL

A68_VOID  WDDAOSF_date_time(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  YDDAOSF_generator;   /* proc value of non-global proc */
A68_VC  DEDAOSF;  /* avoid structure result */
A68_VC  EEDAOSF_ans;
A68_INT  FEDAOSF;  /* YIELD */
A68_INT  GEDAOSF;  /* YIELD */
A68_CHAR * HEDAOSF;  /* YIELD */
A68_CHAR * IEDAOSF;  /* YIELD */
A68_VC  JEDAOSF;  /* OPERATORS - trim index */
A68_VC  KEDAOSF;  /* OPERATORS - trim index */
A68_VC  LEDAOSF;  /* clause result */
A_PROC_ENTRY(date_time);
 /* line 103: */
 /* line 104: */
{ 
A_CLOSURE( YDDAOSF_generator, ZDDAOSF_generator, AEDAOSF_generator );
A_CALLPROC(YDDAOSF_generator,(A68_FALSE, &DEDAOSF),(A68_FALSE, &DEDAOSF,(YDDAOSF_generator).nonlocals));
EEDAOSF_ans = DEDAOSF;
 /* line 105: */
FEDAOSF = 12 ;
GEDAOSF = 13 ;
HEDAOSF = (&A_VINDEX(EEDAOSF_ans,GEDAOSF)) ;
IEDAOSF = (&A_VINDEX(EEDAOSF_ans,FEDAOSF)) ;
(*IEDAOSF) = (*HEDAOSF) = ' ';
 /* line 106: */
XBDAOSF_date_proc(Seconds, A_VTRIM(JEDAOSF,(EEDAOSF_ans),A_VTSCRIPT(&(JEDAOSF.upb),(EEDAOSF_ans).upb,1,11)));
 /* line 107: */
QZCAOSF_time_proc(Seconds, A_VTRIM(KEDAOSF,(EEDAOSF_ans),A_VTSCRIPT(&(KEDAOSF.upb),(EEDAOSF_ans).upb,14,21)));
 /* line 108: */
 /* line 109: */
LEDAOSF = EEDAOSF_ans;
} 
A_PROC_EXIT(date_time);
*ReturnedValue = (LEDAOSF);
return;
} 
#undef NL

A68_VOID  NEDAOSF_centichars(A68_INT  I, A68_VC  *ReturnedValue)
{ 
A68_INT  OEDAOSF_centi;
A68_108 * QEDAOSF;  /* YIELD */
A68_VC  REDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  SEDAOSF_fr;
A68_INT  TEDAOSF_i;
A68_INT  UEDAOSF;  /* by part of loop */
A68_INT  VEDAOSF;  /* ADICOPS - MOD */
A68_INT  WEDAOSF;  /* ADICOPS - MOD */
A68_CHAR * XEDAOSF;  /* YIELD */
A68_112  YEDAOSF;  /* collateral clause result */
A68_VC  ZEDAOSF;  /* avoid structure result */
A68_VC  AFDAOSF;  /* clause result */
A68_35  BFDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CFDAOSF;  /* avoid structure result */
A_PROC_ENTRY(centichars);
 /* line 113: */
 /* line 114: */
{ 
OEDAOSF_centi = I;
 /* line 115: */
QEDAOSF = A_LOC(A68_108 ) ;
(*QEDAOSF) = PEDAOSF ;
SEDAOSF_fr = A_ISVEC(REDAOSF,QEDAOSF,3,A68_CHAR );
 /* line 116: */
 /* line 117: */
UEDAOSF = (-1);
for ( TEDAOSF_i = 3;
( UEDAOSF > 0 && TEDAOSF_i <= 2) ||
( UEDAOSF < 0 && TEDAOSF_i >= 2) ||
( UEDAOSF == 0 ) ;
TEDAOSF_i += UEDAOSF )
{ 
WEDAOSF = 10 ;
XEDAOSF = (&A_VINDEX(SEDAOSF_fr,TEDAOSF_i)) ;
(*XEDAOSF) = (A68_SSBITS)(IZCAOSF_zero+A_MOD(OEDAOSF_centi,WEDAOSF,VEDAOSF));
 /* line 118: */
 /* line 119: */
OEDAOSF_centi/=10;
}
 /* line 120: */
FEAAOSF_intchars( OEDAOSF_centi, &ZEDAOSF );
YEDAOSF.data[0] = ZEDAOSF;
YEDAOSF.data[1] = SEDAOSF_fr;
 /* line 121: */
JDAAOSF_concat( A_HISVEC(BFDAOSF,YEDAOSF,2,A68_VC ), &CFDAOSF );
AFDAOSF = CFDAOSF;
} 
A_PROC_EXIT(centichars);
*ReturnedValue = (AFDAOSF);
return;
} 
#undef NL

A68_VOID  DFDAOSF_cpu(A68_VC  *ReturnedValue)
{ 
A68_VC  EFDAOSF;  /* clause result */
A68_VC  FFDAOSF;  /* avoid structure result */
A_PROC_ENTRY(cpu);
NEDAOSF_centichars( CRBAOSF_get_cpu_time(), &FFDAOSF );
EFDAOSF = FFDAOSF;
A_PROC_EXIT(cpu);
*ReturnedValue = (EFDAOSF);
return;
} 
#undef NL

A68_VOID  GFDAOSF_time_str(A68_VC  *ReturnedValue)
{ 
A68_INT  HFDAOSF_cpu;
A68_114  JFDAOSF_fr;
A68_INT  KFDAOSF_i;
A68_INT  LFDAOSF;  /* by part of loop */
A68_VC  MFDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NFDAOSF;  /* OPERATORS - simple index */
A68_INT  OFDAOSF;  /* ADICOPS - MOD */
A68_INT  PFDAOSF;  /* ADICOPS - MOD */
A68_CHAR * QFDAOSF;  /* YIELD */
A68_115  RFDAOSF_time;
A68_VC  SFDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  TFDAOSF;  /* OPERATORS - trim index */
A68_VC  UFDAOSF;  /* OPERATORS - trim index */
A68_VC  VFDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WFDAOSF;  /* OPERATORS - simple index */
A68_INT  XFDAOSF;  /* YIELD */
A68_VC  YFDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ZFDAOSF;  /* OPERATORS - simple index */
A68_INT  AGDAOSF;  /* YIELD */
A68_CHAR * BGDAOSF;  /* YIELD */
A68_CHAR * CGDAOSF;  /* YIELD */
A68_116  DGDAOSF;  /* collateral clause result */
A68_VC  EGDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  FGDAOSF;  /* avoid structure result */
A68_VC  GGDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  HGDAOSF;  /* clause result */
A68_35  IGDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  JGDAOSF;  /* avoid structure result */
A_PROC_ENTRY(time_str);
{ 
HFDAOSF_cpu = CRBAOSF_get_cpu_time();
 /* line 130: */
JFDAOSF_fr = IFDAOSF;
 /* line 131: */
 /* line 132: */
LFDAOSF = (-1);
for ( KFDAOSF_i = 3;
( LFDAOSF > 0 && KFDAOSF_i <= 2) ||
( LFDAOSF < 0 && KFDAOSF_i >= 2) ||
( LFDAOSF == 0 ) ;
KFDAOSF_i += LFDAOSF )
{ 
NFDAOSF = A_ISVEC(MFDAOSF,(&JFDAOSF_fr),5,A68_CHAR ) ;
PFDAOSF = 10 ;
QFDAOSF = (&A_VINDEX(NFDAOSF,KFDAOSF_i)) ;
(*QFDAOSF) = (A68_SSBITS)(IZCAOSF_zero+A_MOD(HFDAOSF_cpu,PFDAOSF,OFDAOSF));
 /* line 133: */
 /* line 134: */
HFDAOSF_cpu/=10;
}
 /* line 135: */
 /* line 136: */
TFDAOSF = A_ISVEC(SFDAOSF,(&RFDAOSF_time),10,A68_CHAR ) ;
QZCAOSF_time_proc((A68_INT )VPBAOSF_get_time(), A_VTRIM(UFDAOSF,(TFDAOSF),A_VTSCRIPT(&(UFDAOSF.upb),(TFDAOSF).upb,1,8)));
 /* line 137: */
WFDAOSF = A_ISVEC(VFDAOSF,(&RFDAOSF_time),10,A68_CHAR ) ;
XFDAOSF = 9 ;
ZFDAOSF = A_ISVEC(YFDAOSF,(&RFDAOSF_time),10,A68_CHAR ) ;
AGDAOSF = 10 ;
BGDAOSF = (&A_VINDEX(ZFDAOSF,AGDAOSF)) ;
CGDAOSF = (&A_VINDEX(WFDAOSF,XFDAOSF)) ;
(*CGDAOSF) = (*BGDAOSF) = ' ';
 /* line 138: */
DGDAOSF.data[0] = A_HISVEC(EGDAOSF,RFDAOSF_time,10,A68_CHAR );
FEAAOSF_intchars( HFDAOSF_cpu, &FGDAOSF );
DGDAOSF.data[1] = FGDAOSF;
DGDAOSF.data[2] = A_HISVEC(GGDAOSF,JFDAOSF_fr,5,A68_CHAR );
 /* line 139: */
 /* line 142: */
JDAAOSF_concat( A_HISVEC(IGDAOSF,DGDAOSF,3,A68_VC ), &JGDAOSF );
HGDAOSF = JGDAOSF;
} 
A_PROC_EXIT(time_str);
*ReturnedValue = (HGDAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void DZCAOSF(void)   /* initialise DECS time */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","time.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osif.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/strops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_109  UADAOSF;  /* collateral clause result */
A68_35  TBDAOSF;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
CSCAOSF();   /* USE osif */
ZRAAOSF();   /* USE messageproc */
BCAAOSF();   /* USE strops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/time.a68";
A_config.translation_time = "Wed May  5 17:38:59 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "CZCAOSF (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:59 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS time);
UEAALIB_a68config(LGAALIB_configinfo, HZCAOSF);
 /* line 42: */
IZCAOSF_zero = (A68_INT)(unsigned char)'0';
 /* line 44: */
 /* line 46: */
 /* line 48: */
 /* line 61: */
 /* line 64: */
UADAOSF.data[0] = WADAOSF;
UADAOSF.data[1] = YADAOSF;
UADAOSF.data[2] = ABDAOSF;
UADAOSF.data[3] = CBDAOSF;
UADAOSF.data[4] = EBDAOSF;
 /* line 65: */
UADAOSF.data[5] = GBDAOSF;
UADAOSF.data[6] = IBDAOSF;
UADAOSF.data[7] = KBDAOSF;
UADAOSF.data[8] = MBDAOSF;
UADAOSF.data[9] = OBDAOSF;
UADAOSF.data[10] = QBDAOSF;
UADAOSF.data[11] = SBDAOSF;
UBDAOSF_months = A_HISVEC(TBDAOSF,UADAOSF,12,A68_VC );
 /* line 67: */
 /* line 99: */
 /* line 102: */
 /* line 112: */
 /* line 124: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 144: */
A_PROC_EXIT(DECS time);
} 
#undef NL
/* end of translation of time.a68 */
