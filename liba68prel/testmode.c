/* UNAME:TBHAOSF */
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
A68_BITS  Options;
A_PAD_BITS(PAD_5)
};
typedef struct A68t56  A68_56 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t57,(struct A68t56 ,struct A68t56 ,struct A68t56 *),(struct A68t56 ,struct A68t56 ,struct A68t56 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE56,MODE56) MODE56 */

A_PROCEDURE(struct A68t56 *,A68t58,(struct A68t56 *,struct A68t56 ),(struct A68t56 *,struct A68t56 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF MODE56,MODE56) REF MODE56 */

A_PROCEDURE(A68_BOOL ,A68t59,(struct A68t56 ,struct A68t56 ),(struct A68t56 ,struct A68t56 ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(MODE56,MODE56) BOOL */

A_PROCEDURE(A68_BOOL ,A68t60,(struct A68t56 ,A68_INT ),(struct A68t56 ,A68_INT ,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE56,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t61,(A68_INT ,struct A68t56 *),(A68_INT ,struct A68t56 *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(INT) MODE56 */
struct A68t62{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t62  A68_62 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t63{
A68_INT  Status;
A_PAD_INT(PAD_6)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t64,(struct A68t63 ,struct A68t63 ),(struct A68t63 ,struct A68t63 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE63,MODE63) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t66);
typedef struct A68t66  A68_66 ;    /* STRUCT 4 CHAR */
struct A68t65{
struct A68t66  Access;
A_PAD_ISTRUCT(A68_66 ,PAD_7)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(MODE66)  */

A_PROCEDURE(struct A68t62 *,A68t67,(A68_VC ,struct A68t65 ,struct A68t42 ),(A68_VC ,struct A68t65 ,struct A68t42 ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE26,MODE65,MODE42) REF MODE62 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t62 *,struct A68t42 ),(struct A68t62 *,struct A68t42 ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE62,MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t62 *,A68_VC *),(struct A68t62 *,A68_VC *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE62) MODE26 */

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t62 *,A68_VC ,A68_INT *,struct A68t42 ,struct A68t63 *),(struct A68t62 *,A68_VC ,A68_INT *,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE62,REF MODE26,REF INT,MODE42) MODE63 */

A_PROCEDURE(A68_VOID ,A68t71,(struct A68t62 *,A68_VC ,struct A68t42 ,struct A68t63 *),(struct A68t62 *,A68_VC ,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(REF MODE62,MODE26,MODE42) MODE63 */
struct A68t72{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_8)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_9)
A68_SINT  Device;
A_PAD_SINT(PAD_10)
A68_SINT  Links;
A_PAD_SINT(PAD_11)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_12)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_13)
A68_LINT  Size;
A_PAD_LINT(PAD_14)
A68_LINT  Accessed;
A_PAD_LINT(PAD_15)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_16)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_17)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t74 ;

A_PROCEDURE(struct A68t72 *,A68t73,(struct A68t74 ,struct A68t42 ),(struct A68t74 ,struct A68t42 ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE74,MODE42) REF MODE72 */
struct A68t74 { A68_INT mode; union {
struct A68t62 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t74  A68_74 ;    /* UNION(REF MODE62,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t75,(struct A68t62 *,A68_LINT *,struct A68t42 ,struct A68t63 *),(struct A68t62 *,A68_LINT *,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(REF MODE62,REF LONG INT,MODE42) MODE63 */

A_PROCEDURE(A68_VOID ,A68t76,(struct A68t62 *,A68_LINT ,struct A68t42 ,struct A68t63 *),(struct A68t62 *,A68_LINT ,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(REF MODE62,LONG INT,MODE42) MODE63 */

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t62 *,struct A68t42 ,struct A68t63 *),(struct A68t62 *,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF MODE62,MODE42) MODE63 */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ,struct A68t42 ,struct A68t63 *),(A68_VC ,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26,MODE42) MODE63 */

A_PROCEDURE(A68_VOID ,A68t79,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t80,(A68_INT ),(A68_INT ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t81,(void),(void *));
typedef struct A68t81  A68_81 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t82,(A68_VC ,struct A68t42 ),(A68_VC ,struct A68t42 ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26,MODE42) INT */

A_PROCEDURE(A68_INT ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t84,(A68_VC ,A68_VC ,struct A68t42 ,struct A68t63 *),(A68_VC ,A68_VC ,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE26,MODE26,MODE42) MODE63 */
struct A68t85{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_VC ,struct A68t42 ,struct A68t85 *),(A68_VC ,A68_VC ,struct A68t42 ,struct A68t85 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,MODE26,MODE42) MODE85 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC *),(A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t88,(struct A68t35 *),(struct A68t35 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC MODE35 */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,struct A68t42 ,struct A68t35 *),(A68_VC ,struct A68t42 ,struct A68t35 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26,MODE42) MODE35 */

A_PROCEDURE(A68_BOOL ,A68t90,(void),(void *));
typedef struct A68t90  A68_90 ;    /* PROC BOOL */
struct A68t92 ;

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t92 ,struct A68t42 ),(struct A68t92 ,struct A68t42 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE92,MODE42) VOID */
A_VECTOR(struct A68t93 ,A68t92);
typedef struct A68t92  A68_92 ;    /* VECTOR [] MODE93 */
struct A68t93{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_18)
};
typedef struct A68t93  A68_93 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t94,(void),(void *));
typedef struct A68t94  A68_94 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(BITS) VOID */
struct A68t97 ;

A_PROCEDURE(A68_VOID ,A68t96,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t97,(A68_VC ),(A68_VC ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t99,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(REAL) REAL */
struct A68t100{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t101,(A68_BOOL ,struct A68t100 *),(A68_BOOL ,struct A68t100 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(BOOL) MODE100 */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t100 ,A68_BOOL ),(struct A68t100 ,A68_BOOL ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE100,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC MODE100 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ,A68_INT *,struct A68t63 *),(A68_VC ,A68_INT *,struct A68t63 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE26,REF INT) MODE63 */
struct A68t104{
A68_INT  Charnumber;
A_PAD_INT(PAD_19)
A68_INT  Linenumber;
A_PAD_INT(PAD_20)
A68_INT  Indent;
A_PAD_INT(PAD_21)
A68_INT  Width;
A_PAD_INT(PAD_22)
A68_INT  Sizeincr;
A_PAD_INT(PAD_23)
struct A68t63  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_24)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_25)
A68_BOOL  Input;
A_PAD_BOOL(PAD_26)
struct A68t97  Putbuffer;
struct A68t105  Getbuffer;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE63,REF MODE26,BOOL,BOOL,BOOL,MODE97,MODE105)  */

A_PROCEDURE(A68_BOOL ,A68t106,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t108 ;
struct A68t109 ;

A_PROCEDURE(A68_VOID ,A68t107,(A68_VC ,struct A68t94 ,struct A68t108 ,struct A68t109 ),(A68_VC ,struct A68t94 ,struct A68t108 ,struct A68t109 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE26,MODE94,MODE108,MODE109) VOID */

A_PROCEDURE(A68_BOOL ,A68t108,(A68_VC ,struct A68t87 ),(A68_VC ,struct A68t87 ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE26,MODE87) BOOL */

A_PROCEDURE(A68_BOOL ,A68t109,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t42 ),(struct A68t42 ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t110 ,struct A68t42 ),(struct A68t110 ,struct A68t42 ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE110,MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE94) VOID */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 58 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,46,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t118);
typedef struct A68t118  A68_118 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_VC ,5,A68t119);
typedef struct A68t119  A68_119 ;    /* STRUCT 5 MODE26 */
A_ISTRUCT(A68_CHAR ,6,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 6 CHAR */
struct A68t121 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t56  mode2;
A68_VC  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t121  A68_121 ;    /* UNION(BOOL,MODE56,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t121 ),(struct A68t121 ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE121) VOID */
A_ISTRUCT(A68_CHAR ,40,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 40 CHAR */

A_PROCEDURE(A68_INT ,A68t124,(A68_INT ),(A68_INT ,void *));
typedef struct A68t124  A68_124 ;    /* PROC(INT) INT */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osinterface --- */
extern A68_65  MTBAOSF_update_access;
extern A68_65  QTBAOSF_update_truncate_access;
#define AQEAOSF_block_update_access MTBAOSF_update_access
#define BQEAOSF_block_update_truncate_access QTBAOSF_update_truncate_access
extern A68_VOID  JVBAOSF_file_name(struct A68t62 *,A68_VC *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc = argc; A_argv = argv; A_envp = envp

#define DHCAOSF_prelude A_prelude
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
extern A68_VOID  KMBAOSF_set_gc_diagnostics(A68_BITS );
#include <math.h>

#define ZCFAOSF_sqrt sqrt
extern A68_42  TIBAOSF_global_msg;
/* --- End of imports from osinterface --- */


/* --- Imports from options --- */
extern A68_VOID  BNEAOSF_(struct A68t56 ,struct A68t56 ,A68_56 *);
extern A68_BOOL  FOEAOSF_includes(struct A68t56 ,struct A68t56 );
extern A68_56  HPEAOSF_null_options;
/* --- End of imports from options --- */


/* --- Imports from messageproc --- */
extern A68_37  IUAAOSF_system;
/* --- End of imports from messageproc --- */


/* --- Imports from strops --- */
extern A68_VOID  FEAAOSF_intchars(A68_INT ,A68_VC *);
/* --- End of imports from strops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IPEAOSF(void);   /* osinterface */
extern void UMEAOSF(void);   /* options */
extern void ZRAAOSF(void);   /* messageproc */
extern void BCAAOSF(void);   /* strops */
/* --- end of DECS initialisation functions --- */
static A68_114   XBHAOSF = {"$Id: testmode.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,YBHAOSF,XBHAOSF,58)
static A68_115   ACHAOSF = {"Suppress input file suspension after an error"}; 
A_GISVEC(A68_VC ,BCHAOSF,ACHAOSF,45)
static A68_116   CCHAOSF = {"Suppress the output of library version numbers"}; 
A_GISVEC(A68_VC ,DCHAOSF,CCHAOSF,46)
static A68_117   ECHAOSF = {"Suppress the output of dates and times"}; 
A_GISVEC(A68_VC ,FCHAOSF,ECHAOSF,38)
static A68_118   GCHAOSF = {"Suppress file version numbers"}; 
A_GISVEC(A68_VC ,HCHAOSF,GCHAOSF,29)
static A68_117   ICHAOSF = {"Suppress garbage collector diagnostics"}; 
A_GISVEC(A68_VC ,JCHAOSF,ICHAOSF,38)
A68_35  LCHAOSF_testmode_options;
A68_56  MCHAOSF_o;
A68_56  PCHAOSF_testmode_noerror;
A68_56  QCHAOSF_o;
A68_56  TCHAOSF_testmode_noversions;
A68_56  UCHAOSF_o;
A68_56  XCHAOSF_testmode_nodates;
A68_56  YCHAOSF_o;
A68_56  BDHAOSF_testmode_nofilenames;
A68_56  CDHAOSF_o;
A68_56  FDHAOSF_testmode_nogarbage;
#define GDHAOSF_testmode_on A68_TRUE
#define HDHAOSF_testmode_off A68_FALSE
static A68_120   IDHAOSF = {"*file*"}; 
A_GISVEC(A68_VC ,JDHAOSF,IDHAOSF,6)
static A68_VC  KDHAOSF_fn;
static A68_VC  RDHAOSF_dummy_filename;
A68_56  SDHAOSF_testmode;
static A68_BOOL  TDHAOSF_stop_on_input_error;
static A68_BOOL  UDHAOSF_show_version_numbers;
static A68_BOOL  VDHAOSF_show_dates;
static A68_BOOL  WDHAOSF_show_file_names;
static A68_123   HEHAOSF = {"Options supplied by text not implemented"}; 
A_GISVEC(A68_VC ,IEHAOSF,HEHAOSF,40)
static A68_66   QEHAOSF = {"*VN*"}; 
A_GISVEC(A68_VC ,REHAOSF,QEHAOSF,4)

A_STATIC A68_VOID  MDHAOSF_generator(A68_BOOL  LDHAOSF_anonymous, A68_VC  *ReturnedValue);

A68_VOID  YDHAOSF_set_testmode(A68_121  Mode);

A68_BOOL  KEHAOSF_continue_on_error(void);

A68_VOID  NEHAOSF_version_str(A68_INT  Verno, A68_VC  *ReturnedValue);

A68_INT  TEHAOSF_testmode_seconds(A68_INT  S);

A68_VOID  WEHAOSF_testmode_file_name(A68_62 * File, A68_VC  *ReturnedValue);

A68_VOID  AFHAOSF_testmode_fname(A68_VC  Fname, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MDHAOSF_generator(A68_BOOL  LDHAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  NDHAOSF;  /* clause result */
A68_VC  ODHAOSF;  /* OPERATORS - dynamic generator */
{ 
ODHAOSF.upb = KDHAOSF_fn.upb ;
( LDHAOSF_anonymous? A_VLOC(A68_CHAR ,ODHAOSF): A_VHEAP(A68_CHAR ,ODHAOSF) );
NDHAOSF = ODHAOSF;
} 
*ReturnedValue = (NDHAOSF);
return;
} 
#undef NL

A68_VOID  YDHAOSF_set_testmode(A68_121  Mode)
{ 
A68_121  ZDHAOSF;  /* united object - for case conformity */
A68_BOOL  AEHAOSF_state;
A68_56  BEHAOSF;  /* avoid structure result */
A68_56  CEHAOSF;  /* avoid structure result */
A68_56  DEHAOSF;  /* avoid structure result */
A68_56  EEHAOSF;  /* avoid structure result */
A68_56  FEHAOSF_opt;
A68_VC  GEHAOSF_topts;
A68_35  JEHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(set_testmode);
 /* line 79: */
 /* line 80: */
{ 
 /* line 81: */
ZDHAOSF = Mode ;
switch ( ZDHAOSF.mode )
{ 
case 1: /* BOOL */
AEHAOSF_state = (ZDHAOSF.data.mode1);
 /* line 82: */
 /* line 83: */
if ( AEHAOSF_state )
{ 
 /* line 84: */
 /* line 86: */
BNEAOSF_( PCHAOSF_testmode_noerror, TCHAOSF_testmode_noversions, &BEHAOSF );
BNEAOSF_( BEHAOSF, XCHAOSF_testmode_nodates, &CEHAOSF );
BNEAOSF_( CEHAOSF, BDHAOSF_testmode_nofilenames, &DEHAOSF );
BNEAOSF_( DEHAOSF, FDHAOSF_testmode_nogarbage, &EEHAOSF );
SDHAOSF_testmode = EEHAOSF;
} 
else
{ 
 /* line 87: */
 /* line 88: */
SDHAOSF_testmode = HPEAOSF_null_options;
} 
break;
case 2: /* STRUCT(BITS)  */
FEHAOSF_opt = (ZDHAOSF.data.mode2);
 /* line 89: */
SDHAOSF_testmode = FEHAOSF_opt;
break;
case 3: /* VECTOR [] CHAR */
GEHAOSF_topts = (ZDHAOSF.data.mode3);
 /* line 90: */
 /* line 91: */
A_CALLPROC(TIBAOSF_global_msg,(IUAAOSF_system, A_HVEC(JEHAOSF,IEHAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(JEHAOSF,IEHAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 92: */
TDHAOSF_stop_on_input_error = !FOEAOSF_includes(SDHAOSF_testmode, PCHAOSF_testmode_noerror);
 /* line 93: */
UDHAOSF_show_version_numbers = !FOEAOSF_includes(SDHAOSF_testmode, TCHAOSF_testmode_noversions);
 /* line 94: */
VDHAOSF_show_dates = !FOEAOSF_includes(SDHAOSF_testmode, XCHAOSF_testmode_nodates);
 /* line 95: */
WDHAOSF_show_file_names = !FOEAOSF_includes(SDHAOSF_testmode, BDHAOSF_testmode_nofilenames);
 /* line 96: */
if ( FOEAOSF_includes(SDHAOSF_testmode, FDHAOSF_testmode_nogarbage) )
{ 
KMBAOSF_set_gc_diagnostics(0X0U);
} 
 /* line 97: */
 /* line 98: */
/*SKIP*/;
} 
A_PROC_EXIT(set_testmode);
return;
} 
#undef NL

A68_BOOL  KEHAOSF_continue_on_error(void)
{ 
A68_BOOL  LEHAOSF;  /* clause result */
A_PROC_ENTRY(continue_on_error);
LEHAOSF = !TDHAOSF_stop_on_input_error;
A_PROC_EXIT(continue_on_error);
return( LEHAOSF );
} 
#undef NL

A68_VOID  NEHAOSF_version_str(A68_INT  Verno, A68_VC  *ReturnedValue)
{ 
A68_VC  OEHAOSF;  /* clause result */
A68_VC  PEHAOSF;  /* avoid structure result */
A_PROC_ENTRY(version_str);
 /* line 103: */
if ( UDHAOSF_show_version_numbers )
{ 
FEAAOSF_intchars( Verno, &PEHAOSF );
OEHAOSF = PEHAOSF;
} 
else
{ 
OEHAOSF = REHAOSF;
} 
A_PROC_EXIT(version_str);
*ReturnedValue = (OEHAOSF);
return;
} 
#undef NL

A68_INT  TEHAOSF_testmode_seconds(A68_INT  S)
{ 
A68_INT  UEHAOSF;  /* clause result */
A_PROC_ENTRY(testmode_seconds);
if ( VDHAOSF_show_dates )
{ 
UEHAOSF = S;
} 
else
{ 
UEHAOSF = 0;
} 
A_PROC_EXIT(testmode_seconds);
return( UEHAOSF );
} 
#undef NL

A68_VOID  WEHAOSF_testmode_file_name(A68_62 * File, A68_VC  *ReturnedValue)
{ 
A68_VC  XEHAOSF;  /* clause result */
A68_VC  YEHAOSF;  /* avoid structure result */
A_PROC_ENTRY(testmode_file_name);
 /* line 108: */
 /* line 109: */
if ( WDHAOSF_show_file_names )
{ 
 /* line 110: */
 /* line 111: */
JVBAOSF_file_name( File, &YEHAOSF );
XEHAOSF = YEHAOSF;
} 
else
{ 
XEHAOSF = RDHAOSF_dummy_filename;
} 
A_PROC_EXIT(testmode_file_name);
*ReturnedValue = (XEHAOSF);
return;
} 
#undef NL

A68_VOID  AFHAOSF_testmode_fname(A68_VC  Fname, A68_VC  *ReturnedValue)
{ 
A68_VC  BFHAOSF;  /* clause result */
A_PROC_ENTRY(testmode_fname);
 /* line 114: */
 /* line 115: */
 /* line 116: */
if ( WDHAOSF_show_file_names )
{ 
 /* line 117: */
BFHAOSF = Fname;
} 
else
{ 
 /* line 120: */
BFHAOSF = RDHAOSF_dummy_filename;
} 
A_PROC_EXIT(testmode_fname);
*ReturnedValue = (BFHAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void UBHAOSF(void)   /* initialise DECS testmode */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","testmode.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osinterface.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/options.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/strops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_119  ZBHAOSF;  /* collateral clause result */
A68_35  KCHAOSF;  /* OPERATORS - istruct -> vector */
A68_BITS * NCHAOSF;  /* YIELD */
A68_56  OCHAOSF;  /* clause result */
A68_BITS * RCHAOSF;  /* YIELD */
A68_56  SCHAOSF;  /* clause result */
A68_BITS * VCHAOSF;  /* YIELD */
A68_56  WCHAOSF;  /* clause result */
A68_BITS * ZCHAOSF;  /* YIELD */
A68_56  ADHAOSF;  /* clause result */
A68_BITS * DDHAOSF;  /* YIELD */
A68_56  EDHAOSF;  /* clause result */
A68_VC  PDHAOSF;  /* clause result */
A68_VC  QDHAOSF;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IPEAOSF();   /* USE osinterface */
UMEAOSF();   /* USE options */
ZRAAOSF();   /* USE messageproc */
BCAAOSF();   /* USE strops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/testmode.a68";
A_config.translation_time = "Mon May  3 00:36:16 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "TBHAOSF (from seed file) ";
A_config.spec_change_time = "Mon May  3 00:36:16 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS testmode);
UEAALIB_a68config(LGAALIB_configinfo, YBHAOSF);
 /* line 50: */
 /* line 51: */
 /* line 52: */
ZBHAOSF.data[0] = BCHAOSF;
 /* line 53: */
ZBHAOSF.data[1] = DCHAOSF;
 /* line 54: */
ZBHAOSF.data[2] = FCHAOSF;
 /* line 56: */
ZBHAOSF.data[3] = HCHAOSF;
ZBHAOSF.data[4] = JCHAOSF;
LCHAOSF_testmode_options = A_HISVEC(KCHAOSF,ZBHAOSF,5,A68_VC );
 /* line 59: */
{ 
NCHAOSF = (&((&MCHAOSF_o)->Options)) ;
(*NCHAOSF) = 0X1U;
OCHAOSF = MCHAOSF_o;
} 
PCHAOSF_testmode_noerror = OCHAOSF;
 /* line 60: */
{ 
RCHAOSF = (&((&QCHAOSF_o)->Options)) ;
(*RCHAOSF) = 0X2U;
SCHAOSF = QCHAOSF_o;
} 
TCHAOSF_testmode_noversions = SCHAOSF;
 /* line 61: */
{ 
VCHAOSF = (&((&UCHAOSF_o)->Options)) ;
(*VCHAOSF) = 0X4U;
WCHAOSF = UCHAOSF_o;
} 
XCHAOSF_testmode_nodates = WCHAOSF;
 /* line 62: */
{ 
ZCHAOSF = (&((&YCHAOSF_o)->Options)) ;
(*ZCHAOSF) = 0X8U;
ADHAOSF = YCHAOSF_o;
} 
BDHAOSF_testmode_nofilenames = ADHAOSF;
 /* line 63: */
{ 
DDHAOSF = (&((&CDHAOSF_o)->Options)) ;
(*DDHAOSF) = 0X10U;
EDHAOSF = CDHAOSF_o;
} 
FDHAOSF_testmode_nogarbage = EDHAOSF;
 /* line 65: */
 /* line 66: */
 /* line 70: */
{ 
KDHAOSF_fn = JDHAOSF;
MDHAOSF_generator( A68_FALSE, &QDHAOSF );
A_VASSIGN2(KDHAOSF_fn,QDHAOSF,A68_CHAR ) ;
PDHAOSF = QDHAOSF;
} 
RDHAOSF_dummy_filename = PDHAOSF;
 /* line 72: */
SDHAOSF_testmode = HPEAOSF_null_options;
 /* line 73: */
TDHAOSF_stop_on_input_error = A68_TRUE;
 /* line 74: */
UDHAOSF_show_version_numbers = A68_TRUE;
 /* line 75: */
VDHAOSF_show_dates = A68_TRUE;
 /* line 76: */
WDHAOSF_show_file_names = A68_TRUE;
 /* line 78: */
 /* line 100: */
 /* line 102: */
 /* line 105: */
 /* line 107: */
 /* line 113: */
 /* line 124: */
A_PROC_EXIT(DECS testmode);
} 
#undef NL
/* end of translation of testmode.a68 */
