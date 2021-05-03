/* UNAME:LCBAOSF */
#include <algol68/Asupport.h>
A_ISTRUCT(A68_CHAR ,16000000,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t31 *,16000000,A68t32);
typedef struct A68t32  A68_32 ;    /* STRUCT 16000000 REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t33,(struct A68t31 *,A68_VC *),(struct A68t31 *,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE31) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t34,(A68_VC ),(A68_VC ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26) REF CHAR */
A_VECTOR(A68_INT ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_INT *,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) REF INT */

A_PROCEDURE(A68_CHAR *,A68t37,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE31) REF CHAR */

A_PROCEDURE(struct A68t31 *,A68t38,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(REF CHAR) REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t39,(void),(void *));
typedef struct A68t39  A68_39 ;    /* PROC VOID */
struct A68t40{
A68_BITS * Cp;
struct A68t31 * Env;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF BITS,REF MODE31)  */

A_PROCEDURE(struct A68t40 *,A68t41,(struct A68t39 *),(struct A68t39 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE39) REF MODE40 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t39 ,struct A68t40 *),(struct A68t39 ,struct A68t40 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE39) MODE40 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_INT ),(A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t43 ,struct A68t40 *),(struct A68t43 ,struct A68t40 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE43) MODE40 */

A_PROCEDURE(A68_VOID ,A68t45,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE26) MODE26 */
struct A68t46{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t47 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t46  A68_46 ;    /* STRUCT(INT,REF MODE47,BITS)  */
A_VECTOR(struct A68t49 ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE49 */
struct A68t49{
struct A68t46  Msgno;
A68_VC  Text;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(MODE46,REF MODE26)  */
struct A68t47{
A68_VC  Name;
struct A68t48  Messages;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(REF MODE26,REF MODE48)  */

A_PROCEDURE(A68_VOID ,A68t50,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_VC ,A68t51);
typedef struct A68t51  A68_51 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_BOOL ,struct A68t51 *),(A68_BOOL ,struct A68t51 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(BOOL) MODE51 */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t46 ,struct A68t51 ),(struct A68t46 ,struct A68t51 ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE46,MODE51) VOID */
A_VECTOR(struct A68t56 ,A68t55);
typedef struct A68t55  A68_55 ;    /* VECTOR [] MODE56 */
struct A68t56{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t54{
A68_VC  Name;
struct A68t48  Messages;
A68_BOOL * Initialised;
struct A68t55  Setup;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(MODE26,REF MODE48,REF BOOL,MODE55)  */

A_PROCEDURE(A68_VOID ,A68t57,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(BOOL) MODE54 */

A_PROCEDURE(A68_VOID ,A68t58,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t59);
typedef struct A68t59  A68_59 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t51 ,struct A68t59 *),(struct A68t51 ,struct A68t59 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE51) MODE59 */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t59 ,struct A68t51 *),(struct A68t59 ,struct A68t51 *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE59) MODE51 */
struct A68t63 ;

A_PROCEDURE(A68_BOOL ,A68t62,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE63) BOOL */
struct A68t63 { A68_INT mode; union {
struct A68t46  mode1;
struct A68t49  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t63  A68_63 ;    /* UNION(MODE46,MODE49)  */

A_PROCEDURE(A68_INT ,A68t64,(struct A68t46 ),(struct A68t46 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE46) INT */

A_PROCEDURE(A68_VOID ,A68t65,(A68_INT ,struct A68t54 ,struct A68t46 *),(A68_INT ,struct A68t54 ,struct A68t46 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(INT,MODE54) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t66,(struct A68t46 ,struct A68t54 ),(struct A68t46 ,struct A68t54 ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE46,MODE54) BOOL */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t46 ,struct A68t51 ,struct A68t49 *),(struct A68t46 ,struct A68t51 ,struct A68t49 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE46,MODE51) MODE49 */

A_PROCEDURE(A68_INT *,A68t68,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(struct A68t51 ,A68_VC *),(struct A68t51 ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE51) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t73,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t74,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t75);
typedef struct A68t75  A68_75 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t75 ,A68t76,(A68_INT ),(A68_INT ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(INT) MODE75 */

A_PROCEDURE(A68_INT ,A68t77,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t78,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t79,(A68_VC ),(A68_VC ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t80,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t81,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t82,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t83,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t85,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t86,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t87,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t88,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t89,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t90,(A68_VC ),(A68_VC ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t90 ),(struct A68t90 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE90) VOID */

A_PROCEDURE(A68_VOID ,A68t92,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t93);
typedef struct A68t93  A68_93 ;    /* STRUCT 58 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t94);
typedef struct A68t94  A68_94 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t95,(A68_BOOL ,struct A68t48 *),(A68_BOOL ,struct A68t48 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(BOOL) MODE48 */
A_ISTRUCT(A68_CHAR ,49,A68t96);
typedef struct A68t96  A68_96 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t97);
typedef struct A68t97  A68_97 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t98);
typedef struct A68t98  A68_98 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t99);
typedef struct A68t99  A68_99 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t100);
typedef struct A68t100  A68_100 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t101);
typedef struct A68t101  A68_101 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t102);
typedef struct A68t102  A68_102 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t103);
typedef struct A68t103  A68_103 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t104);
typedef struct A68t104  A68_104 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t105);
typedef struct A68t105  A68_105 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t106);
typedef struct A68t106  A68_106 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t107);
typedef struct A68t107  A68_107 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t108);
typedef struct A68t108  A68_108 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t109);
typedef struct A68t109  A68_109 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t110);
typedef struct A68t110  A68_110 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(struct A68t56 ,18,A68t111);
typedef struct A68t111  A68_111 ;    /* STRUCT 18 MODE56 */

A_PROCEDURE(A68_VOID ,A68t112,(A68_INT ,struct A68t51 ,struct A68t53 ),(A68_INT ,struct A68t51 ,struct A68t53 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(INT,MODE51,MODE53) VOID */

A_PROCEDURE(A68_INT *,A68t113,(A68_INT *),(A68_INT *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF INT) REF INT */
A_ISTRUCT(A68_CHAR ,5,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t118);
typedef struct A68t118  A68_118 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t119);
typedef struct A68t119  A68_119 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_VC ,37,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 37 MODE26 */

A_PROCEDURE(A68_VOID ,A68t125,(A68_VC *),(A68_VC *,void *));
typedef struct A68t125  A68_125 ;    /* PROC REF MODE26 */
A_ISTRUCT(A68_VC ,2,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 2 MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t51 ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from messageproc --- */
extern A68_BITS  JVAAOSF_system_class;
extern A68_BITS  LVAAOSF_user_class;
extern A68_BITS  MVAAOSF_error_class;
extern A68_VOID  XYAAOSF_make_msgno(A68_INT ,struct A68t54 ,A68_46 *);
/* --- End of imports from messageproc --- */


/* --- Imports from cif --- */
#include <stdio.h>

#define IAAAOSF_nullccharptr NULL
/**/

#define VBAAOSF_shortshortmaxint (A68_SSINT)A68_MAX_SSINT
/**/

#define WBAAOSF_shortmaxint (A68_SINT)A68_MAX_SINT
/**/

#define XBAAOSF_maxint (A68_INT)A68_MAX_INT
/**/

#define YBAAOSF_longmaxint (A68_LINT)A68_MAX_LINT
/**/

#define ZBAAOSF_maxabschar (A68_INT)A68_MAX_CHAR
/**/

#define ACAAOSF_bitswidth A_SZ_BITS
/* --- End of imports from cif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IKAAOSF(void);   /* usefulops */
extern void ZRAAOSF(void);   /* messageproc */
extern void BAAAOSF(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_93   PCBAOSF = {"$Id: oserrors.a68,v 1.1.1.1 2001-05-07 10:16:12 sian Exp $"}; 
A_GISVEC(A68_VC ,QCBAOSF,PCBAOSF,58)
#include <errno.h>

#define RCBAOSF_errno errno
#define SCBAOSF_maxosifmessages 100
static A68_94   UCBAOSF = {"UNIX interface"}; 
A_GISVEC(A68_VC ,VCBAOSF,UCBAOSF,14)
static A68_96   DDBAOSF = {"'open_file(*)' failed: out of range FILEACCESS(*)"}; 
A_GISVEC(A68_VC ,EDBAOSF,DDBAOSF,49)
static A68_97   FDBAOSF = {"error opening file \"*\" - *"}; 
A_GISVEC(A68_VC ,GDBAOSF,FDBAOSF,26)
static A68_97   HDBAOSF = {"error closing file \"*\" - *"}; 
A_GISVEC(A68_VC ,IDBAOSF,HDBAOSF,26)
static A68_98   JDBAOSF = {"'nil_file passed to 'close_file'"}; 
A_GISVEC(A68_VC ,KDBAOSF,JDBAOSF,32)
static A68_99   LDBAOSF = {"error reading buffer from file \"*\" - *"}; 
A_GISVEC(A68_VC ,MDBAOSF,LDBAOSF,38)
static A68_100   NDBAOSF = {"'nil_file passed to 'read_buf'"}; 
A_GISVEC(A68_VC ,ODBAOSF,NDBAOSF,30)
static A68_101   PDBAOSF = {"error readline line from file \"*\" - *"}; 
A_GISVEC(A68_VC ,QDBAOSF,PDBAOSF,37)
static A68_102   RDBAOSF = {"'nil_file passed to 'read_line'"}; 
A_GISVEC(A68_VC ,SDBAOSF,RDBAOSF,31)
static A68_103   TDBAOSF = {"error writing to file \"*\" - *"}; 
A_GISVEC(A68_VC ,UDBAOSF,TDBAOSF,29)
static A68_102   VDBAOSF = {"'nil_file passed to 'write_buf'"}; 
A_GISVEC(A68_VC ,WDBAOSF,VDBAOSF,31)
static A68_104   XDBAOSF = {"error setting file position in file \"*\" - *"}; 
A_GISVEC(A68_VC ,YDBAOSF,XDBAOSF,43)
static A68_103   ZDBAOSF = {"'nil_file passed to 'set_pos'"}; 
A_GISVEC(A68_VC ,AEBAOSF,ZDBAOSF,29)
static A68_105   BEBAOSF = {"error updating disk for file \"*\" - *"}; 
A_GISVEC(A68_VC ,CEBAOSF,BEBAOSF,36)
static A68_106   DEBAOSF = {"'nil_file passed to 'update_disk'"}; 
A_GISVEC(A68_VC ,EEBAOSF,DEBAOSF,33)
static A68_107   FEBAOSF = {"error deleting file \"*\" - *"}; 
A_GISVEC(A68_VC ,GEBAOSF,FEBAOSF,27)
static A68_108   HEBAOSF = {"error executing the command \"*\" - *"}; 
A_GISVEC(A68_VC ,IEBAOSF,HEBAOSF,35)
static A68_109   JEBAOSF = {"error in '*' ('*')"}; 
A_GISVEC(A68_VC ,KEBAOSF,JEBAOSF,18)
static A68_110   LEBAOSF = {"'*' not yet implemented"}; 
A_GISVEC(A68_VC ,MEBAOSF,LEBAOSF,23)
static A68_54  OEBAOSF_osiffacility;
static int errornos [] =
   { E2BIG,       EACCES,       EAGAIN,       EBADF,      EBUSY,
     ECHILD,      EDEADLK,      EDOM,         EEXIST,     EFAULT,
     EFBIG,       EINTR,        EINVAL,       EIO,        EISDIR,
     EMFILE,      EMLINK,       ENAMETOOLONG, ENFILE,     ENODEV,
     ENOENT,      ENOEXEC,      ENOLCK,       ENOMEM,     ENOSPC,
     ENOSYS,      ENOTDIR,      ENOTEMPTY,    ENOTTY,     ENXIO,
     EPERM,       EPIPE,        ERANGE,       EROFS,      ESPIPE,
     ESRCH,       EXDEV };

#define UEBAOSF_errornos (A68_INT*)(errornos)
#define INC(x) x++

#define VEBAOSF_inc INC
static A68_114   XEBAOSF = {"E2BIG"}; 
A_GISVEC(A68_VC ,YEBAOSF,XEBAOSF,5)
static A68_107   ZEBAOSF = {"search permission is denied"}; 
A_GISVEC(A68_VC ,AFBAOSF,ZEBAOSF,27)
static A68_115   BFBAOSF = {"EAGAIN"}; 
A_GISVEC(A68_VC ,CFBAOSF,BFBAOSF,6)
static A68_110   DFBAOSF = {"invalid file descriptor"}; 
A_GISVEC(A68_VC ,EFBAOSF,DFBAOSF,23)
static A68_116   FFBAOSF = {"directory is in use"}; 
A_GISVEC(A68_VC ,GFBAOSF,FFBAOSF,19)
static A68_115   HFBAOSF = {"ECHILD"}; 
A_GISVEC(A68_VC ,IFBAOSF,HFBAOSF,6)
static A68_117   JFBAOSF = {"EDEADLK"}; 
A_GISVEC(A68_VC ,KFBAOSF,JFBAOSF,7)
static A68_106   LFBAOSF = {"argument outside permitted domain"}; 
A_GISVEC(A68_VC ,MFBAOSF,LFBAOSF,33)
static A68_116   NFBAOSF = {"file already exists"}; 
A_GISVEC(A68_VC ,OFBAOSF,NFBAOSF,19)
static A68_115   PFBAOSF = {"EFAULT"}; 
A_GISVEC(A68_VC ,QFBAOSF,PFBAOSF,6)
static A68_97   RFBAOSF = {"maximum file size exceeded"}; 
A_GISVEC(A68_VC ,SFBAOSF,RFBAOSF,26)
static A68_110   TFBAOSF = {"interrupted by a signal"}; 
A_GISVEC(A68_VC ,UFBAOSF,TFBAOSF,23)
static A68_118   VFBAOSF = {"invalid argument"}; 
A_GISVEC(A68_VC ,WFBAOSF,VFBAOSF,16)
static A68_119   XFBAOSF = {"IO error"}; 
A_GISVEC(A68_VC ,YFBAOSF,XFBAOSF,8)
static A68_107   ZFBAOSF = {"invalid directory operation"}; 
A_GISVEC(A68_VC ,AGBAOSF,ZFBAOSF,27)
static A68_120   BGBAOSF = {"too many file descriptors"}; 
A_GISVEC(A68_VC ,CGBAOSF,BGBAOSF,25)
static A68_94   DGBAOSF = {"too many links"}; 
A_GISVEC(A68_VC ,EGBAOSF,DGBAOSF,14)
static A68_121   FGBAOSF = {"file name is too long"}; 
A_GISVEC(A68_VC ,GGBAOSF,FGBAOSF,21)
static A68_110   HGBAOSF = {"too many files are open"}; 
A_GISVEC(A68_VC ,IGBAOSF,HGBAOSF,23)
static A68_94   JGBAOSF = {"no such device"}; 
A_GISVEC(A68_VC ,KGBAOSF,JGBAOSF,14)
static A68_98   LGBAOSF = {"file or directory does not exist"}; 
A_GISVEC(A68_VC ,MGBAOSF,LGBAOSF,32)
static A68_103   NGBAOSF = {"unsuitable file for execution"}; 
A_GISVEC(A68_VC ,OGBAOSF,NGBAOSF,29)
static A68_109   PGBAOSF = {"no locks available"}; 
A_GISVEC(A68_VC ,QGBAOSF,PGBAOSF,18)
static A68_116   RGBAOSF = {"no memory available"}; 
A_GISVEC(A68_VC ,SGBAOSF,RGBAOSF,19)
static A68_121   TGBAOSF = {"no space left on disk"}; 
A_GISVEC(A68_VC ,UGBAOSF,TGBAOSF,21)
static A68_115   VGBAOSF = {"ENOSYS"}; 
A_GISVEC(A68_VC ,WGBAOSF,VGBAOSF,6)
static A68_105   XGBAOSF = {"component of path is not a directory"}; 
A_GISVEC(A68_VC ,YGBAOSF,XGBAOSF,36)
static A68_122   ZGBAOSF = {"directory is not empty"}; 
A_GISVEC(A68_VC ,AHBAOSF,ZGBAOSF,22)
static A68_107   BHBAOSF = {"terminal type file expected"}; 
A_GISVEC(A68_VC ,CHBAOSF,BHBAOSF,27)
static A68_108   DHBAOSF = {"no such device, or device not ready"}; 
A_GISVEC(A68_VC ,EHBAOSF,DHBAOSF,35)
static A68_97   FHBAOSF = {"operation is not permitted"}; 
A_GISVEC(A68_VC ,GHBAOSF,FHBAOSF,26)
static A68_98   HHBAOSF = {"write to a pipe without a reader"}; 
A_GISVEC(A68_VC ,IHBAOSF,HHBAOSF,32)
static A68_116   JHBAOSF = {"result is too large"}; 
A_GISVEC(A68_VC ,KHBAOSF,JHBAOSF,19)
static A68_121   LHBAOSF = {"read-only file system"}; 
A_GISVEC(A68_VC ,MHBAOSF,LHBAOSF,21)
static A68_115   NHBAOSF = {"ESPIPE"}; 
A_GISVEC(A68_VC ,OHBAOSF,NHBAOSF,6)
static A68_123   PHBAOSF = {"no such process"}; 
A_GISVEC(A68_VC ,QHBAOSF,PHBAOSF,15)
static A68_75   RHBAOSF = {"XDEV"}; 
A_GISVEC(A68_VC ,SHBAOSF,RHBAOSF,4)
static A68_51  UHBAOSF_errorstrs;
static A68_122   IIBAOSF = {"failed with \"errno\" = "}; 
A_GISVEC(A68_VC ,JIBAOSF,IIBAOSF,22)
A68_53  RIBAOSF_ignore_msg;
A68_53  TIBAOSF_global_msg;

A_STATIC A68_VOID  XCBAOSF_generator(A68_BOOL  WCBAOSF_anonymous, A68_48  *ReturnedValue);

A68_VOID  SEBAOSF_osifmessage(A68_INT  Osifevent, A68_51  Params, A68_53  Msg);

A68_VOID  VHBAOSF_errnotext(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QIBAOSF_anonymous(A68_46  Msgno, A68_51  Params);

A_STATIC A68_VOID  XCBAOSF_generator(A68_BOOL  WCBAOSF_anonymous, A68_48  *ReturnedValue)
{ 
A68_48  YCBAOSF;  /* clause result */
A68_48  ZCBAOSF;  /* OPERATORS - dynamic generator */
{ 
ZCBAOSF.upb = SCBAOSF_maxosifmessages ;
( WCBAOSF_anonymous? A_VLOC(A68_49 ,ZCBAOSF): A_VHEAP(A68_49 ,ZCBAOSF) );
YCBAOSF = ZCBAOSF;
} 
*ReturnedValue = (YCBAOSF);
return;
} 
#undef NL
 /* line 104: */
 /* line 106: */

A68_VOID  SEBAOSF_osifmessage(A68_INT  Osifevent, A68_51  Params, A68_53  Msg)
{ 
A68_46  TEBAOSF;  /* avoid structure result */
A_PROC_ENTRY(osifmessage);
 /* line 107: */
 /* line 108: */
 /* line 109: */
XYAAOSF_make_msgno( Osifevent, OEBAOSF_osiffacility, &TEBAOSF );
A_CALLPROC(Msg,(TEBAOSF, Params),(TEBAOSF, Params,(Msg).nonlocals));
A_PROC_EXIT(osifmessage);
return;
} 
#undef NL

A68_VOID  VHBAOSF_errnotext(A68_VC  *ReturnedValue)
{ 
A68_INT * WHBAOSF_ptr;
A68_VC  YHBAOSF;  /* OPERATORS - nil -> mode */
A68_VC  XHBAOSF_ans;
A68_VC  ZHBAOSF_str;
A68_VC * AIBAOSF;  /* forall control - []x */
A68_INT  BIBAOSF;  /* forall loop counter */
A68_VC  CIBAOSF;  /* OPERATORS - nil -> mode */
A68_VC  DIBAOSF;  /* == */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} EIBAOSF; 
A68_VC  FIBAOSF;  /* OPERATORS - nil -> mode */
A68_VC  GIBAOSF;  /* == */
A68_126  HIBAOSF;  /* collateral clause result */
A68_VC  KIBAOSF;  /* avoid structure result */
A68_VC  LIBAOSF;  /* clause result */
A68_51  MIBAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NIBAOSF;  /* avoid structure result */
A_PROC_ENTRY(errnotext);
{ 
WHBAOSF_ptr = UEBAOSF_errornos;
 /* line 188: */
XHBAOSF_ans = (A_VVAC(YHBAOSF));
 /* line 189: */
BIBAOSF = UHBAOSF_errorstrs.upb -1;
AIBAOSF = UHBAOSF_errorstrs.data;
for (;BIBAOSF-- >= 0;
(AIBAOSF++
) )
{
ZHBAOSF_str = *AIBAOSF;
 /* line 190: */
DIBAOSF = A_VVAC(CIBAOSF) ;
if ( !(A_VSTRUCTCOMP(XHBAOSF_ans,DIBAOSF)) ) break;
if ( ((*VEBAOSF_inc(WHBAOSF_ptr))==RCBAOSF_errno) )
{ 
EIBAOSF.source = ZHBAOSF_str ;
XHBAOSF_ans = (EIBAOSF.destination);
} 
}
 /* line 191: */
 /* line 192: */
GIBAOSF = A_VVAC(FIBAOSF) ;
if ( A_VSTRUCTCOMP(XHBAOSF_ans,GIBAOSF) )
{ 
HIBAOSF.data[0] = JIBAOSF;
ROAAOSF_whole( RCBAOSF_errno, 0, &KIBAOSF );
HIBAOSF.data[1] = KIBAOSF;
 /* line 193: */
 /* line 194: */
JDAAOSF_concat( A_HISVEC(MIBAOSF,HIBAOSF,2,A68_VC ), &NIBAOSF );
LIBAOSF = NIBAOSF;
} 
else
{ 
 /* line 195: */
LIBAOSF = XHBAOSF_ans;
} 
} 
A_PROC_EXIT(errnotext);
*ReturnedValue = (LIBAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  QIBAOSF_anonymous(A68_46  Msgno, A68_51  Params)
{ 
/*SKIP*/;
return;
} 
#undef NL
 /* line 1: */
 /* line 5: */
void MCBAOSF(void)   /* initialise DECS oserrors */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","oserrors.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/usefulops.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_54  TCBAOSF;  /* collateral clause result */
A68_48  ADBAOSF;  /* avoid structure result */
A68_BOOL * BDBAOSF;  /* YIELD */
A68_111  CDBAOSF;  /* collateral clause result */
A68_55  NEBAOSF;  /* OPERATORS - istruct -> vector */
A68_124  WEBAOSF;  /* collateral clause result */
A68_51  THBAOSF;  /* OPERATORS - istruct -> vector */
A68_53  SIBAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IKAAOSF();   /* USE usefulops */
ZRAAOSF();   /* USE messageproc */
BAAAOSF();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/oserrors.a68";
A_config.translation_time = "Mon May  3 00:36:15 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "LCBAOSF (from seed file) ";
A_config.spec_change_time = "Mon May  3 00:36:15 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS oserrors);
UEAALIB_a68config(LGAALIB_configinfo, QCBAOSF);
 /* line 61: */
 /* line 63: */
 /* line 65: */
 /* line 66: */
 /* line 67: */
TCBAOSF.Name = VCBAOSF;
 /* line 68: */
XCBAOSF_generator( A68_TRUE, &ADBAOSF );
TCBAOSF.Messages = ADBAOSF;
 /* line 69: */
BDBAOSF = A_LOC(A68_BOOL ) ;
(*BDBAOSF) = A68_FALSE ;
TCBAOSF.Initialised = BDBAOSF;
 /* line 71: */
CDBAOSF.data[0].Number = 1;
CDBAOSF.data[0].Class = JVAAOSF_system_class;
 /* line 72: */
CDBAOSF.data[0].Text = EDBAOSF;
CDBAOSF.data[1].Number = 2;
CDBAOSF.data[1].Class = LVAAOSF_user_class;
 /* line 74: */
CDBAOSF.data[1].Text = GDBAOSF;
CDBAOSF.data[2].Number = 11;
CDBAOSF.data[2].Class = MVAAOSF_error_class;
 /* line 75: */
CDBAOSF.data[2].Text = IDBAOSF;
CDBAOSF.data[3].Number = 12;
CDBAOSF.data[3].Class = MVAAOSF_error_class;
 /* line 77: */
CDBAOSF.data[3].Text = KDBAOSF;
CDBAOSF.data[4].Number = 21;
CDBAOSF.data[4].Class = LVAAOSF_user_class;
 /* line 78: */
CDBAOSF.data[4].Text = MDBAOSF;
CDBAOSF.data[5].Number = 22;
CDBAOSF.data[5].Class = JVAAOSF_system_class;
 /* line 80: */
CDBAOSF.data[5].Text = ODBAOSF;
CDBAOSF.data[6].Number = 31;
CDBAOSF.data[6].Class = LVAAOSF_user_class;
 /* line 81: */
CDBAOSF.data[6].Text = QDBAOSF;
CDBAOSF.data[7].Number = 32;
CDBAOSF.data[7].Class = JVAAOSF_system_class;
 /* line 83: */
CDBAOSF.data[7].Text = SDBAOSF;
CDBAOSF.data[8].Number = 41;
CDBAOSF.data[8].Class = LVAAOSF_user_class;
 /* line 84: */
CDBAOSF.data[8].Text = UDBAOSF;
CDBAOSF.data[9].Number = 42;
CDBAOSF.data[9].Class = JVAAOSF_system_class;
 /* line 86: */
CDBAOSF.data[9].Text = WDBAOSF;
CDBAOSF.data[10].Number = 51;
CDBAOSF.data[10].Class = LVAAOSF_user_class;
 /* line 87: */
CDBAOSF.data[10].Text = YDBAOSF;
CDBAOSF.data[11].Number = 52;
CDBAOSF.data[11].Class = JVAAOSF_system_class;
 /* line 89: */
CDBAOSF.data[11].Text = AEBAOSF;
CDBAOSF.data[12].Number = 61;
CDBAOSF.data[12].Class = LVAAOSF_user_class;
 /* line 90: */
CDBAOSF.data[12].Text = CEBAOSF;
CDBAOSF.data[13].Number = 62;
CDBAOSF.data[13].Class = JVAAOSF_system_class;
 /* line 92: */
CDBAOSF.data[13].Text = EEBAOSF;
CDBAOSF.data[14].Number = 71;
CDBAOSF.data[14].Class = LVAAOSF_user_class;
 /* line 94: */
CDBAOSF.data[14].Text = GEBAOSF;
CDBAOSF.data[15].Number = 81;
CDBAOSF.data[15].Class = MVAAOSF_error_class;
 /* line 97: */
CDBAOSF.data[15].Text = IEBAOSF;
CDBAOSF.data[16].Number = 99;
CDBAOSF.data[16].Class = MVAAOSF_error_class;
 /* line 98: */
CDBAOSF.data[16].Text = KEBAOSF;
CDBAOSF.data[17].Number = 100;
CDBAOSF.data[17].Class = MVAAOSF_error_class;
 /* line 99: */
 /* line 100: */
CDBAOSF.data[17].Text = MEBAOSF;
TCBAOSF.Setup = A_HISVEC(NEBAOSF,CDBAOSF,18,A68_56 );
OEBAOSF_osiffacility = TCBAOSF;
 /* line 102: */
 /* line 103: */
 /* line 114: */
 /* line 115: */
 /* line 116: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 125: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
WEBAOSF.data[0] = YEBAOSF;
 /* line 130: */
WEBAOSF.data[1] = AFBAOSF;
 /* line 131: */
WEBAOSF.data[2] = CFBAOSF;
 /* line 132: */
WEBAOSF.data[3] = EFBAOSF;
 /* line 134: */
WEBAOSF.data[4] = GFBAOSF;
 /* line 135: */
WEBAOSF.data[5] = IFBAOSF;
 /* line 136: */
WEBAOSF.data[6] = KFBAOSF;
 /* line 137: */
WEBAOSF.data[7] = MFBAOSF;
 /* line 138: */
WEBAOSF.data[8] = OFBAOSF;
 /* line 140: */
WEBAOSF.data[9] = QFBAOSF;
 /* line 141: */
WEBAOSF.data[10] = SFBAOSF;
 /* line 142: */
WEBAOSF.data[11] = UFBAOSF;
 /* line 143: */
WEBAOSF.data[12] = WFBAOSF;
 /* line 144: */
WEBAOSF.data[13] = YFBAOSF;
 /* line 146: */
WEBAOSF.data[14] = AGBAOSF;
 /* line 147: */
WEBAOSF.data[15] = CGBAOSF;
 /* line 148: */
WEBAOSF.data[16] = EGBAOSF;
 /* line 149: */
WEBAOSF.data[17] = GGBAOSF;
 /* line 150: */
WEBAOSF.data[18] = IGBAOSF;
 /* line 152: */
WEBAOSF.data[19] = KGBAOSF;
 /* line 153: */
WEBAOSF.data[20] = MGBAOSF;
 /* line 154: */
WEBAOSF.data[21] = OGBAOSF;
 /* line 155: */
WEBAOSF.data[22] = QGBAOSF;
 /* line 156: */
WEBAOSF.data[23] = SGBAOSF;
 /* line 158: */
WEBAOSF.data[24] = UGBAOSF;
 /* line 159: */
WEBAOSF.data[25] = WGBAOSF;
 /* line 160: */
WEBAOSF.data[26] = YGBAOSF;
 /* line 161: */
WEBAOSF.data[27] = AHBAOSF;
 /* line 162: */
WEBAOSF.data[28] = CHBAOSF;
 /* line 164: */
WEBAOSF.data[29] = EHBAOSF;
 /* line 165: */
WEBAOSF.data[30] = GHBAOSF;
 /* line 166: */
WEBAOSF.data[31] = IHBAOSF;
 /* line 167: */
WEBAOSF.data[32] = KHBAOSF;
 /* line 168: */
WEBAOSF.data[33] = MHBAOSF;
 /* line 170: */
WEBAOSF.data[34] = OHBAOSF;
 /* line 172: */
WEBAOSF.data[35] = QHBAOSF;
WEBAOSF.data[36] = SHBAOSF;
UHBAOSF_errorstrs = A_HISVEC(THBAOSF,WEBAOSF,37,A68_VC );
 /* line 176: */
 /* line 177: */
 /* line 187: */
 /* line 199: */
SIBAOSF.fn.fn_global = QIBAOSF_anonymous;
SIBAOSF.nonlocals = A68_NIL;
RIBAOSF_ignore_msg = (SIBAOSF);
 /* line 201: */
TIBAOSF_global_msg = RIBAOSF_ignore_msg;
 /* line 203: */
 /* line 205: */
 /* line 210: */
/*SKIP*/;
A_PROC_EXIT(DECS oserrors);
} 
#undef NL
/* end of translation of oserrors.a68 */
