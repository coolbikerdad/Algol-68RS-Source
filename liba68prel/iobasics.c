/* UNAME:JGDAOSF */
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

A_PROCEDURE(A68_VOID ,A68t83,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t74 ),(struct A68t74 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE74) VOID */

A_PROCEDURE(A68_VOID ,A68t85,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t86);
typedef struct A68t86  A68_86 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_VOID ,A68t87,(A68_BOOL ,struct A68t71 *),(A68_BOOL ,struct A68t71 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(BOOL) MODE71 */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,A68_INT *,struct A68t38 *),(A68_VC ,A68_INT *,struct A68t38 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF MODE26,REF INT) MODE38 */
struct A68t88{
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
struct A68t89  Getbuffer;
};
typedef struct A68t88  A68_88 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE38,REF MODE26,BOOL,BOOL,BOOL,MODE77,MODE89)  */

A_PROCEDURE(A68_INT ,A68t90,(struct A68t88 *),(struct A68t88 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF MODE88) INT */

A_PROCEDURE(A68_INT ,A68t91,(struct A68t88 *,A68_INT ),(struct A68t88 *,A68_INT ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(REF MODE88,INT) INT */
struct A68t92 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t92  A68_92 ;    /* UNION(INT,REF MODE26)  */
struct A68t93 { A68_INT mode; union {
struct A68t77  mode1;
struct A68t89  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t93  A68_93 ;    /* UNION(MODE77,MODE89)  */

A_PROCEDURE(struct A68t88 *,A68t94,(struct A68t92 ,struct A68t93 ),(struct A68t92 ,struct A68t93 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE92,MODE93) REF MODE88 */

A_PROCEDURE(A68_VOID ,A68t95,(struct A68t88 *),(struct A68t88 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE88) VOID */

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
extern A68_BOOL  AVBAOSF_(struct A68t38 ,struct A68t38 );
extern A68_BOOL  EVBAOSF_(struct A68t38 ,struct A68t38 );
extern A68_38  OUBAOSF_io_ok;
extern A68_38  XUBAOSF_io_no_newline;
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


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void CSCAOSF(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_86   NGDAOSF = {"$Id: iobasics.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,OGDAOSF,NGDAOSF,58)
A68_82  PGDAOSF_anonymous;
A68_87  QGDAOSF_anonymous;
A68_VC  CHDAOSF_nilstr;
A68_VC  IHDAOSF_nullstr;
A68_71  KHDAOSF_nilints;
A68_71  QHDAOSF_nullints;
A68_88 * RHDAOSF_nilchannel;
A68_CHAR  SHDAOSF_end_of_file_char;
A68_CHAR  THDAOSF_newline_char;
static A68_CHAR  UHDAOSF_cr_char;
A68_CHAR  VHDAOSF_newpage_char;
A68_CHAR  WHDAOSF_null_char;
A68_VC  YHDAOSF_space_str;
A68_VC  AIDAOSF_newline_str;
typedef struct   /* env of non-global proc */
{
A68_INT  RJDAOSF_width;
A_PAD_INT(PAD_24)
} WJDAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_88 * Ch;
} HLDAOSF_generator;

A_STATIC A68_VOID  SGDAOSF_generator(A68_BOOL  RGDAOSF_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XGDAOSF_generator(A68_BOOL  WGDAOSF_anonymous, A68_71  *ReturnedValue);

A_STATIC A68_VOID  EHDAOSF_generator(A68_BOOL  DHDAOSF_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MHDAOSF_generator(A68_BOOL  LHDAOSF_anonymous, A68_71  *ReturnedValue);

A68_INT  CIDAOSF_charnumber(A68_88 * Ch);

A68_INT  FIDAOSF_linenumber(A68_88 * Ch);

A68_INT  IIDAOSF_charsleft(A68_88 * Ch);

A68_INT  MIDAOSF_setwidth(A68_88 * Ch, A68_INT  Width);

A68_VOID  TIDAOSF_nullputbuffer(A68_VC  Str);

A68_VOID  WIDAOSF_nullgetbuffer(A68_VC  Rvc, A68_INT * I, A68_38  *ReturnedValue);

A68_88 * BJDAOSF_make_channel(A68_92  Intbuff, A68_93  Putgetbuffer);

A_STATIC A68_VOID  VJDAOSF_generator(A68_BOOL  TJDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  PKDAOSF_newline(A68_88 * Ch);

A_STATIC A68_VOID  GLDAOSF_generator(A68_BOOL  ELDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VJDAOSF_generator(A68_BOOL  TJDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WJDAOSF_generator *)NonLocals)->x)
{ 
A68_VC  XJDAOSF;  /* clause result */
A68_VC  YJDAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 132: */
YJDAOSF.upb = (NL(RJDAOSF_width)+1) ;
( TJDAOSF_anonymous? A_VLOC(A68_CHAR ,YJDAOSF): A_VHEAP(A68_CHAR ,YJDAOSF) );
XJDAOSF = YJDAOSF;
} 
*ReturnedValue = (XJDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  GLDAOSF_generator(A68_BOOL  ELDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HLDAOSF_generator *)NonLocals)->x)
{ 
A68_VC  ILDAOSF;  /* clause result */
A68_VC  JLDAOSF;  /* OPERATORS - dynamic generator */
{ 
JLDAOSF.upb = ((*(&(NL(Ch)->Buffer))).upb+(*(&(NL(Ch)->Sizeincr)))) ;
( ELDAOSF_anonymous? A_VLOC(A68_CHAR ,JLDAOSF): A_VHEAP(A68_CHAR ,JLDAOSF) );
ILDAOSF = JLDAOSF;
} 
*ReturnedValue = (ILDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  SGDAOSF_generator(A68_BOOL  RGDAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  TGDAOSF;  /* clause result */
A68_VC  UGDAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 44: */
UGDAOSF.upb = 0 ;
( RGDAOSF_anonymous? A_VLOC(A68_CHAR ,UGDAOSF): A_VHEAP(A68_CHAR ,UGDAOSF) );
TGDAOSF = UGDAOSF;
} 
*ReturnedValue = (TGDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  XGDAOSF_generator(A68_BOOL  WGDAOSF_anonymous, A68_71  *ReturnedValue)
{ 
A68_71  YGDAOSF;  /* clause result */
A68_71  ZGDAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 46: */
ZGDAOSF.upb = 0 ;
( WGDAOSF_anonymous? A_VLOC(A68_INT ,ZGDAOSF): A_VHEAP(A68_INT ,ZGDAOSF) );
YGDAOSF = ZGDAOSF;
} 
*ReturnedValue = (YGDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  EHDAOSF_generator(A68_BOOL  DHDAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  FHDAOSF;  /* clause result */
A68_VC  GHDAOSF;  /* OPERATORS - dynamic generator */
{ 
GHDAOSF.upb = 0 ;
( DHDAOSF_anonymous? A_VLOC(A68_CHAR ,GHDAOSF): A_VHEAP(A68_CHAR ,GHDAOSF) );
FHDAOSF = GHDAOSF;
} 
*ReturnedValue = (FHDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  MHDAOSF_generator(A68_BOOL  LHDAOSF_anonymous, A68_71  *ReturnedValue)
{ 
A68_71  NHDAOSF;  /* clause result */
A68_71  OHDAOSF;  /* OPERATORS - dynamic generator */
{ 
OHDAOSF.upb = 0 ;
( LHDAOSF_anonymous? A_VLOC(A68_INT ,OHDAOSF): A_VHEAP(A68_INT ,OHDAOSF) );
NHDAOSF = OHDAOSF;
} 
*ReturnedValue = (NHDAOSF);
return;
} 
#undef NL

A68_INT  CIDAOSF_charnumber(A68_88 * Ch)
{ 
A68_INT  DIDAOSF;  /* clause result */
A_PROC_ENTRY(charnumber);
DIDAOSF = (*(&(Ch->Charnumber)));
A_PROC_EXIT(charnumber);
return( DIDAOSF );
} 
#undef NL

A68_INT  FIDAOSF_linenumber(A68_88 * Ch)
{ 
A68_INT  GIDAOSF;  /* clause result */
A_PROC_ENTRY(linenumber);
GIDAOSF = (*(&(Ch->Linenumber)));
A_PROC_EXIT(linenumber);
return( GIDAOSF );
} 
#undef NL

A68_INT  IIDAOSF_charsleft(A68_88 * Ch)
{ 
A68_INT  JIDAOSF;  /* clause result */
A_PROC_ENTRY(charsleft);
JIDAOSF = (((*(&(Ch->Width)))-(*(&(Ch->Charnumber))))+1);
A_PROC_EXIT(charsleft);
return( JIDAOSF );
} 
#undef NL

A68_INT  MIDAOSF_setwidth(A68_88 * Ch, A68_INT  Width)
{ 
A68_BOOL  NIDAOSF;  /* optbool result */
A68_INT  OIDAOSF;  /* clause result */
A68_BOOL  PIDAOSF;  /* optbool result */
A68_INT  QIDAOSF;  /* clause result */
A68_INT * RIDAOSF;  /* YIELD */
A_PROC_ENTRY(setwidth);
 /* line 84: */
NIDAOSF = (*(&(Ch->Buffered)));
if ( NIDAOSF )
{ /* line 85: */
NIDAOSF = (Width>((*(&(Ch->Buffer))).upb-1));
}
if ( NIDAOSF )
{ 
 /* line 86: */
OIDAOSF = ((*(&(Ch->Buffer))).upb-1);
} 
else
{ 
PIDAOSF = (*(&(Ch->Input)));
if ( PIDAOSF )
{ /* line 87: */
PIDAOSF = (Width>(*(&(Ch->Buffer))).upb);
}
 /* line 88: */
if ( PIDAOSF )
{ 
 /* line 89: */
OIDAOSF = (*(&(Ch->Buffer))).upb;
} 
else
{ 
OIDAOSF = Width;
} 
} 
RIDAOSF = (&(Ch->Width)) ;
QIDAOSF = (*RIDAOSF) = OIDAOSF;
A_PROC_EXIT(setwidth);
return( QIDAOSF );
} 
#undef NL

A68_VOID  TIDAOSF_nullputbuffer(A68_VC  Str)
{ 
A_PROC_ENTRY(nullputbuffer);
/*SKIP*/;
A_PROC_EXIT(nullputbuffer);
return;
} 
#undef NL

A68_VOID  WIDAOSF_nullgetbuffer(A68_VC  Rvc, A68_INT * I, A68_38  *ReturnedValue)
{ 
A68_38  XIDAOSF;  /* clause result */
A68_38  YIDAOSF;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(nullgetbuffer);
XIDAOSF = YIDAOSF;
A_PROC_EXIT(nullgetbuffer);
*ReturnedValue = (XIDAOSF);
return;
} 
#undef NL
 /* line 110: */

A68_88 * BJDAOSF_make_channel(A68_92  Intbuff, A68_93  Putgetbuffer)
{ 
A68_88 * CJDAOSF_ch;
A68_93  DJDAOSF;  /* united object - for case conformity */
A68_77  EJDAOSF_putbuffer;
A68_77 * FJDAOSF;  /* YIELD */
A68_89 * GJDAOSF;  /* YIELD */
A68_89  HJDAOSF;  /* procedure value */
A68_INT * IJDAOSF;  /* YIELD */
A68_BOOL * JJDAOSF;  /* YIELD */
A68_89  KJDAOSF_getbuffer;
A68_77 * LJDAOSF;  /* YIELD */
A68_77  MJDAOSF;  /* procedure value */
A68_89 * NJDAOSF;  /* YIELD */
A68_INT * OJDAOSF;  /* YIELD */
A68_BOOL * PJDAOSF;  /* YIELD */
A68_92  QJDAOSF;  /* united object - for case conformity */
A68_INT  RJDAOSF_width;
A68_INT * SJDAOSF;  /* YIELD */
A68_82  UJDAOSF_generator;   /* proc value of non-global proc */
A68_VC  ZJDAOSF;  /* avoid structure result */
A68_VC * AKDAOSF;  /* YIELD */
A68_VC * BKDAOSF;  /* YIELD */
A68_BOOL * CKDAOSF;  /* YIELD */
A68_VC  DKDAOSF_rvc;
A68_VC * EKDAOSF;  /* YIELD */
A68_INT * FKDAOSF;  /* YIELD */
A68_BOOL * GKDAOSF;  /* YIELD */
A68_INT * HKDAOSF;  /* YIELD */
A68_INT * IKDAOSF;  /* YIELD */
A68_INT * JKDAOSF;  /* YIELD */
A68_INT * KKDAOSF;  /* YIELD */
A68_38 * LKDAOSF;  /* YIELD */
A68_BOOL * MKDAOSF;  /* YIELD */
A68_88 * NKDAOSF;  /* clause result */
A_PROC_ENTRY(make_channel);
 /* line 111: */
 /* line 112: */
{ 
CJDAOSF_ch = (A_HEAP(A68_88 ));
 /* line 113: */
 /* line 114: */
DJDAOSF = Putgetbuffer ;
switch ( DJDAOSF.mode )
{ 
case 1: /* PROC(MODE26) VOID */
EJDAOSF_putbuffer = (DJDAOSF.data.mode1);
 /* line 115: */
{ 
FJDAOSF = (&(CJDAOSF_ch->Putbuffer)) ;
(*FJDAOSF) = EJDAOSF_putbuffer;
 /* line 116: */
GJDAOSF = (&(CJDAOSF_ch->Getbuffer)) ;
HJDAOSF.fn.fn_global = WIDAOSF_nullgetbuffer;
HJDAOSF.nonlocals = A68_NIL;
(*GJDAOSF) = HJDAOSF;
 /* line 117: */
IJDAOSF = (&(CJDAOSF_ch->Linenumber)) ;
(*IJDAOSF) = 1;
 /* line 118: */
 /* line 119: */
 /* line 120: */
JJDAOSF = (&(CJDAOSF_ch->Input)) ;
(*JJDAOSF) = A68_FALSE;
} 
break;
case 2: /* PROC(REF MODE26,REF INT) MODE38 */
KJDAOSF_getbuffer = (DJDAOSF.data.mode2);
 /* line 121: */
{ 
LJDAOSF = (&(CJDAOSF_ch->Putbuffer)) ;
MJDAOSF.fn.fn_global = TIDAOSF_nullputbuffer;
MJDAOSF.nonlocals = A68_NIL;
(*LJDAOSF) = MJDAOSF;
 /* line 122: */
NJDAOSF = (&(CJDAOSF_ch->Getbuffer)) ;
(*NJDAOSF) = KJDAOSF_getbuffer;
 /* line 123: */
OJDAOSF = (&(CJDAOSF_ch->Linenumber)) ;
(*OJDAOSF) = 0;
 /* line 124: */
 /* line 125: */
 /* line 126: */
PJDAOSF = (&(CJDAOSF_ch->Input)) ;
(*PJDAOSF) = A68_TRUE;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 127: */
 /* line 128: */
QJDAOSF = Intbuff ;
switch ( QJDAOSF.mode )
{ 
case 1: /* INT */
RJDAOSF_width = (QJDAOSF.data.mode1);
 /* line 129: */
{ 
SJDAOSF = (&(CJDAOSF_ch->Width)) ;
(*SJDAOSF) = RJDAOSF_width;
 /* line 130: */
 /* line 131: */
if ( (*(&(CJDAOSF_ch->Input))) )
{ 
A_CLOSURE( UJDAOSF_generator, VJDAOSF_generator, WJDAOSF_generator );
(( WJDAOSF_generator * ) ( UJDAOSF_generator.nonlocals )) -> RJDAOSF_width = RJDAOSF_width;
A_CALLPROC(UJDAOSF_generator,(A68_FALSE, &ZJDAOSF),(A68_FALSE, &ZJDAOSF,(UJDAOSF_generator).nonlocals));
AKDAOSF = (&(CJDAOSF_ch->Buffer)) ;
(*AKDAOSF) = ZJDAOSF;
} 
else
{ 
 /* line 133: */
BKDAOSF = (&(CJDAOSF_ch->Buffer)) ;
(*BKDAOSF) = CHDAOSF_nilstr;
} 
 /* line 134: */
 /* line 135: */
 /* line 136: */
CKDAOSF = (&(CJDAOSF_ch->Buffered)) ;
(*CKDAOSF) = A68_FALSE;
} 
break;
case 2: /* REF VECTOR [] CHAR */
DKDAOSF_rvc = (QJDAOSF.data.mode2);
 /* line 137: */
{ 
EKDAOSF = (&(CJDAOSF_ch->Buffer)) ;
(*EKDAOSF) = DKDAOSF_rvc;
 /* line 138: */
FKDAOSF = (&(CJDAOSF_ch->Width)) ;
(*FKDAOSF) = (DKDAOSF_rvc.upb-1);
 /* line 139: */
 /* line 140: */
 /* line 141: */
GKDAOSF = (&(CJDAOSF_ch->Buffered)) ;
(*GKDAOSF) = A68_TRUE;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 142: */
HKDAOSF = (&(CJDAOSF_ch->Sizeincr)) ;
(*HKDAOSF) = (*(&(CJDAOSF_ch->Width)));
 /* line 143: */
 /* line 144: */
if ( (*(&(CJDAOSF_ch->Input))) )
{ 
 /* line 146: */
IKDAOSF = (&(CJDAOSF_ch->Charnumber)) ;
(*IKDAOSF) = ((*(&(CJDAOSF_ch->Width)))+2);
} 
else
{ 
 /* line 147: */
JKDAOSF = (&(CJDAOSF_ch->Charnumber)) ;
(*JKDAOSF) = 1;
} 
 /* line 148: */
KKDAOSF = (&(CJDAOSF_ch->Indent)) ;
(*KKDAOSF) = 0;
 /* line 149: */
LKDAOSF = (&(CJDAOSF_ch->Status)) ;
(*LKDAOSF) = OUBAOSF_io_ok;
 /* line 150: */
MKDAOSF = (&(CJDAOSF_ch->Separate)) ;
(*MKDAOSF) = A68_FALSE;
 /* line 151: */
 /* line 152: */
NKDAOSF = CJDAOSF_ch;
} 
A_PROC_EXIT(make_channel);
return( NKDAOSF );
} 
#undef NL

A68_VOID  PKDAOSF_newline(A68_88 * Ch)
{ 
A68_INT  QKDAOSF_blow;
A68_INT  RKDAOSF_bhigh;
A68_INT  SKDAOSF_len;
A68_INT * TKDAOSF;  /* YIELD */
A68_INT * UKDAOSF;  /* YIELD */
A68_89  VKDAOSF;  /* CALL */
A68_VC  WKDAOSF;  /* OPERATORS - trim index */
A68_VC  XKDAOSF;  /* OPERATORS - trim index */
A68_38  YKDAOSF;  /* avoid structure result */
A68_38 * ZKDAOSF;  /* YIELD */
A68_INT * ALDAOSF;  /* YIELD */
A68_BOOL  BLDAOSF;  /* optbool result */
A68_BOOL  CLDAOSF;  /* clause result */
A68_VC  DLDAOSF_old;
A68_82  FLDAOSF_generator;   /* proc value of non-global proc */
A68_VC  KLDAOSF;  /* avoid structure result */
A68_VC * LLDAOSF;  /* YIELD */
A68_VC  MLDAOSF;  /* OPERATORS - trim index */
A68_VC  NLDAOSF;  /* OPERATORS - trim index */
A68_VC  OLDAOSF;  /* OPERATORS - trim index */
A68_VC  PLDAOSF;  /* YIELD */
A68_VC  QLDAOSF;  /* OPERATORS - assign op */
A68_INT * RLDAOSF;  /* YIELD */
A68_VC  SLDAOSF;  /* OPERATORS - simple index */
A68_INT  TLDAOSF;  /* YIELD */
A68_CHAR * ULDAOSF;  /* YIELD */
A68_CHAR  VLDAOSF_c;
A68_BOOL  WLDAOSF;  /* optbool result */
A68_VC  XLDAOSF;  /* OPERATORS - simple index */
A68_INT  YLDAOSF;  /* YIELD */
A68_BOOL  ZLDAOSF;  /* optbool result */
A68_INT * AMDAOSF;  /* YIELD */
A68_VC  BMDAOSF;  /* OPERATORS - simple index */
A68_INT  CMDAOSF;  /* YIELD */
A68_CHAR * DMDAOSF;  /* YIELD */
A68_INT * EMDAOSF;  /* YIELD */
A68_VC  FMDAOSF;  /* OPERATORS - simple index */
A68_INT  GMDAOSF;  /* YIELD */
A68_CHAR * HMDAOSF;  /* YIELD */
A68_77  IMDAOSF;  /* CALL */
A68_VC  JMDAOSF;  /* OPERATORS - trim index */
A68_VC  KMDAOSF;  /* OPERATORS - trim index */
A68_77  LMDAOSF;  /* CALL */
A68_VC  MMDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * NMDAOSF;  /* YIELD */
A68_INT * OMDAOSF;  /* YIELD */
A68_BOOL * PMDAOSF;  /* YIELD */
A_PROC_ENTRY(newline);
 /* line 160: */
 /* line 161: */
 /* line 162: */
if ( (*(&(Ch->Input))) )
{ 
QKDAOSF_blow = 1;
 /* line 163: */
TKDAOSF = (&(Ch->Width)) ;
(*TKDAOSF) = 0;
 /* line 164: */
UKDAOSF = (&(Ch->Charnumber)) ;
(*UKDAOSF) = 1;
 /* line 165: */
for ( ;; )
{ 
 /* line 166: */
RKDAOSF_bhigh = ((*(&(Ch->Buffer))).upb-1);
 /* line 167: */
VKDAOSF = (*(&(Ch->Getbuffer))) ;
WKDAOSF = (*(&(Ch->Buffer))) ;
A_CALLPROC(VKDAOSF,(A_VTRIM(XKDAOSF,(WKDAOSF),A_VTSCRIPT(&(XKDAOSF.upb),(WKDAOSF).upb,QKDAOSF_blow,RKDAOSF_bhigh)), (&SKDAOSF_len), &YKDAOSF),(A_VTRIM(XKDAOSF,(WKDAOSF),A_VTSCRIPT(&(XKDAOSF.upb),(WKDAOSF).upb,QKDAOSF_blow,RKDAOSF_bhigh)), (&SKDAOSF_len), &YKDAOSF,(VKDAOSF).nonlocals));
ZKDAOSF = (&(Ch->Status)) ;
(*ZKDAOSF) = YKDAOSF;
 /* line 168: */
ALDAOSF = (&(Ch->Width)) ;
(*ALDAOSF)+=SKDAOSF_len;
 /* line 169: */
 /* line 170: */
BLDAOSF = AVBAOSF_((*(&(Ch->Status))), XUBAOSF_io_no_newline);
if ( BLDAOSF )
{BLDAOSF = (*(&(Ch->Buffered)));
}
CLDAOSF = BLDAOSF;
if ( !CLDAOSF ) break;
DLDAOSF_old = (*(&(Ch->Buffer)));
 /* line 171: */
A_CLOSURE( FLDAOSF_generator, GLDAOSF_generator, HLDAOSF_generator );
(( HLDAOSF_generator * ) ( FLDAOSF_generator.nonlocals )) -> Ch = Ch;
A_CALLPROC(FLDAOSF_generator,(A68_FALSE, &KLDAOSF),(A68_FALSE, &KLDAOSF,(FLDAOSF_generator).nonlocals));
LLDAOSF = (&(Ch->Buffer)) ;
(*LLDAOSF) = KLDAOSF;
 /* line 172: */
MLDAOSF = (*(&(Ch->Buffer))) ;
PLDAOSF = A_VTRIM(NLDAOSF,(MLDAOSF),A_VTSCRIPT(&(NLDAOSF.upb),(MLDAOSF).upb,1,RKDAOSF_bhigh)) ;
QLDAOSF = A_VTRIM(OLDAOSF,(DLDAOSF_old),A_VTSCRIPT(&(OLDAOSF.upb),(DLDAOSF_old).upb,1,RKDAOSF_bhigh)) ;
A_VASSIGN2(QLDAOSF,PLDAOSF,A68_CHAR );
 /* line 173: */
 /* line 174: */
QKDAOSF_blow = (RKDAOSF_bhigh+1);
}
 /* line 175: */
 /* line 176: */
if ( EVBAOSF_((*(&(Ch->Status))), OUBAOSF_io_ok) )
{ 
RLDAOSF = (&(Ch->Width)) ;
(*RLDAOSF) = 0;
 /* line 177: */
 /* line 178: */
SLDAOSF = (*(&(Ch->Buffer))) ;
TLDAOSF = 1 ;
ULDAOSF = (&A_VINDEX(SLDAOSF,TLDAOSF)) ;
(*ULDAOSF) = SHDAOSF_end_of_file_char;
} 
else
{ 
 /* line 179: */
for ( ;; )
{ 
 /* line 180: */
WLDAOSF = ((*(&(Ch->Width)))>0);
if ( WLDAOSF )
{ /* line 181: */
XLDAOSF = (*(&(Ch->Buffer))) ;
YLDAOSF = (*(&(Ch->Width))) ;
ZLDAOSF = ((VLDAOSF_c = (*(&A_VINDEX(XLDAOSF,YLDAOSF))))==THDAOSF_newline_char);
if ( ! ZLDAOSF )
{ZLDAOSF = (VLDAOSF_c==UHDAOSF_cr_char);
}
 /* line 182: */
WLDAOSF = ZLDAOSF;
}
if ( !(WLDAOSF) ) break;
AMDAOSF = (&(Ch->Width)) ;
(*AMDAOSF)-=1;
}
 /* line 183: */
BMDAOSF = (*(&(Ch->Buffer))) ;
CMDAOSF = ((*(&(Ch->Width)))+1) ;
DMDAOSF = (&A_VINDEX(BMDAOSF,CMDAOSF)) ;
(*DMDAOSF) = THDAOSF_newline_char;
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 188: */
EMDAOSF = (&(Ch->Linenumber)) ;
(*EMDAOSF)+=1;
} 
} 
else
{ 
 /* line 189: */
if ( (*(&(Ch->Buffered))) )
{ 
FMDAOSF = (*(&(Ch->Buffer))) ;
GMDAOSF = (*(&(Ch->Charnumber))) ;
HMDAOSF = (&A_VINDEX(FMDAOSF,GMDAOSF)) ;
(*HMDAOSF) = THDAOSF_newline_char;
 /* line 190: */
 /* line 191: */
IMDAOSF = (*(&(Ch->Putbuffer))) ;
JMDAOSF = (*(&(Ch->Buffer))) ;
A_CALLPROC(IMDAOSF,(A_VTRIM(KMDAOSF,(JMDAOSF),A_VTSCRIPT(&(KMDAOSF.upb),(JMDAOSF).upb,1,(*(&(Ch->Charnumber)))))),(A_VTRIM(KMDAOSF,(JMDAOSF),A_VTSCRIPT(&(KMDAOSF.upb),(JMDAOSF).upb,1,(*(&(Ch->Charnumber))))),(IMDAOSF).nonlocals));
} 
else
{ 
 /* line 192: */
LMDAOSF = (*(&(Ch->Putbuffer))) ;
A_CALLPROC(LMDAOSF,(A_HVEC(MMDAOSF,THDAOSF_newline_char,A68_CHAR )),(A_HVEC(MMDAOSF,THDAOSF_newline_char,A68_CHAR ),(LMDAOSF).nonlocals));
} 
 /* line 193: */
NMDAOSF = (&(Ch->Charnumber)) ;
(*NMDAOSF) = 1;
 /* line 194: */
OMDAOSF = (&(Ch->Linenumber)) ;
(*OMDAOSF)+=1;
 /* line 195: */
 /* line 196: */
PMDAOSF = (&(Ch->Separate)) ;
(*PMDAOSF) = A68_FALSE;
} 
A_PROC_EXIT(newline);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void KGDAOSF(void)   /* initialise DECS iobasics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","iobasics.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_82  VGDAOSF;  /* procedure value */
A68_87  AHDAOSF;  /* procedure value */
A68_VC  BHDAOSF;  /* OPERATORS - nil -> mode */
A68_VC  HHDAOSF;  /* avoid structure result */
A68_71  JHDAOSF;  /* OPERATORS - nil -> mode */
A68_71  PHDAOSF;  /* avoid structure result */
A68_VC  XHDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZHDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
CSCAOSF();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/iobasics.a68";
A_config.translation_time = "Wed May  5 17:38:59 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "JGDAOSF (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:59 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS iobasics);
UEAALIB_a68config(LGAALIB_configinfo, OGDAOSF);
 /* line 43: */
VGDAOSF.fn.fn_global = SGDAOSF_generator;
VGDAOSF.nonlocals = A68_NIL;
PGDAOSF_anonymous = VGDAOSF;
AHDAOSF.fn.fn_global = XGDAOSF_generator;
AHDAOSF.nonlocals = A68_NIL;
QGDAOSF_anonymous = AHDAOSF;
 /* line 48: */
CHDAOSF_nilstr = (A_VVAC(BHDAOSF));
EHDAOSF_generator( A68_TRUE, &HHDAOSF );
IHDAOSF_nullstr = HHDAOSF;
 /* line 49: */
KHDAOSF_nilints = (A_VVAC(JHDAOSF));
MHDAOSF_generator( A68_TRUE, &PHDAOSF );
QHDAOSF_nullints = PHDAOSF;
 /* line 54: */
 /* line 67: */
 /* line 69: */
RHDAOSF_nilchannel = (A68_88 *)A68_NIL;
 /* line 71: */
SHDAOSF_end_of_file_char = (A68_SSBITS)26;
 /* line 72: */
THDAOSF_newline_char = (A68_SSBITS)10;
 /* line 73: */
UHDAOSF_cr_char = (A68_SSBITS)13;
 /* line 74: */
VHDAOSF_newpage_char = (A68_SSBITS)12;
 /* line 75: */
WHDAOSF_null_char = (A68_SSBITS)0;
 /* line 76: */
YHDAOSF_space_str = A_HVEC(XHDAOSF,' ',A68_CHAR );
 /* line 77: */
AIDAOSF_newline_str = A_HVEC(ZHDAOSF,THDAOSF_newline_char,A68_CHAR );
 /* line 79: */
 /* line 80: */
 /* line 81: */
 /* line 83: */
 /* line 91: */
 /* line 93: */
 /* line 108: */
 /* line 159: */
 /* line 198: */
 /* line 200: */
 /* line 205: */
/*SKIP*/;
A_PROC_EXIT(DECS iobasics);
} 
#undef NL
/* end of translation of iobasics.a68 */
