/* UNAME:JDCAOSF */
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

A_PROCEDURE(A68_VOID ,A68t46,(A68_VC *),(A68_VC *,void *));
typedef struct A68t46  A68_46 ;    /* PROC REF MODE26 */
struct A68t48 ;
struct A68t49 ;

A_PROCEDURE(A68_VOID ,A68t47,(A68_INT ,struct A68t48 ,struct A68t49 ),(A68_INT ,struct A68t48 ,struct A68t49 ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(INT,MODE48,MODE49) VOID */
A_VECTOR(A68_VC ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t50 ,struct A68t48 ),(struct A68t50 ,struct A68t48 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE50,MODE48) VOID */
struct A68t50{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t51 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,REF MODE51,BITS)  */
A_VECTOR(struct A68t53 ,A68t52);
typedef struct A68t52  A68_52 ;    /* VECTOR [] MODE53 */
struct A68t53{
struct A68t50  Msgno;
A68_VC  Text;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(MODE50,REF MODE26)  */
struct A68t51{
A68_VC  Name;
struct A68t52  Messages;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(REF MODE26,REF MODE52)  */

A_PROCEDURE(A68_VOID ,A68t54,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t55,(A68_BOOL ,struct A68t48 *),(A68_BOOL ,struct A68t48 *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(BOOL) MODE48 */
A_VECTOR(struct A68t58 ,A68t57);
typedef struct A68t57  A68_57 ;    /* VECTOR [] MODE58 */
struct A68t58{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t56{
A68_VC  Name;
struct A68t52  Messages;
A68_BOOL * Initialised;
struct A68t57  Setup;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(MODE26,REF MODE52,REF BOOL,MODE57)  */

A_PROCEDURE(A68_VOID ,A68t59,(A68_BOOL ,struct A68t56 *),(A68_BOOL ,struct A68t56 *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(BOOL) MODE56 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t61);
typedef struct A68t61  A68_61 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t62,(struct A68t48 ,struct A68t61 *),(struct A68t48 ,struct A68t61 *,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE48) MODE61 */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t61 ,struct A68t48 *),(struct A68t61 ,struct A68t48 *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(MODE61) MODE48 */
struct A68t65 ;

A_PROCEDURE(A68_BOOL ,A68t64,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE65) BOOL */
struct A68t65 { A68_INT mode; union {
struct A68t50  mode1;
struct A68t53  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t65  A68_65 ;    /* UNION(MODE50,MODE53)  */

A_PROCEDURE(A68_INT ,A68t66,(struct A68t50 ),(struct A68t50 ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE50) INT */

A_PROCEDURE(A68_VOID ,A68t67,(A68_INT ,struct A68t56 ,struct A68t50 *),(A68_INT ,struct A68t56 ,struct A68t50 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(INT,MODE56) MODE50 */

A_PROCEDURE(A68_BOOL ,A68t68,(struct A68t50 ,struct A68t56 ),(struct A68t50 ,struct A68t56 ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE50,MODE56) BOOL */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t50 ,struct A68t48 ,struct A68t53 *),(struct A68t50 ,struct A68t48 ,struct A68t53 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE50,MODE48) MODE53 */

A_PROCEDURE(A68_INT *,A68t70,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t48 ,A68_VC *),(struct A68t48 ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE48) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t75,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t76,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t77);
typedef struct A68t77  A68_77 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t77 ,A68t78,(A68_INT ),(A68_INT ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT) MODE77 */

A_PROCEDURE(A68_INT ,A68t79,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t80,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t81,(A68_VC ),(A68_VC ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t82,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t83,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t84,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t86,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t88,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t89,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t90,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF INT,MODE26) BOOL */
struct A68t91{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t92{
A68_INT  Status;
A_PAD_INT(PAD_5)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t93,(struct A68t92 ,struct A68t92 ),(struct A68t92 ,struct A68t92 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE92,MODE92) BOOL */
struct A68t94{
struct A68t77  Access;
A_PAD_ISTRUCT(A68_77 ,PAD_6)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(MODE77)  */

A_PROCEDURE(A68_VOID ,A68t95,(struct A68t91 *,A68_VC *),(struct A68t91 *,A68_VC *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE91) MODE26 */

A_PROCEDURE(struct A68t91 *,A68t96,(A68_VC ,struct A68t94 ,struct A68t49 ),(A68_VC ,struct A68t94 ,struct A68t49 ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE26,MODE94,MODE49) REF MODE91 */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t91 *,struct A68t49 ),(struct A68t91 *,struct A68t49 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE91,MODE49) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t91 *,A68_VC ,A68_INT *,struct A68t49 ,struct A68t92 *),(struct A68t91 *,A68_VC ,A68_INT *,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE91,REF MODE26,REF INT,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t91 *,A68_VC ,struct A68t49 ,struct A68t92 *),(struct A68t91 *,A68_VC ,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(REF MODE91,MODE26,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t100,(struct A68t91 *,A68_LINT ,struct A68t49 ,struct A68t92 *),(struct A68t91 *,A68_LINT ,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(REF MODE91,LONG INT,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t91 *,A68_LINT *,struct A68t49 ,struct A68t92 *),(struct A68t91 *,A68_LINT *,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF MODE91,REF LONG INT,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t91 *,struct A68t49 ,struct A68t92 *),(struct A68t91 *,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE91,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t103,(A68_VC ,struct A68t49 ,struct A68t92 *),(A68_VC ,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t104,(A68_VC ,A68_VC ,struct A68t49 ,struct A68t92 *),(A68_VC ,A68_VC ,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,MODE26,MODE49) MODE92 */
struct A68t105{
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
typedef struct A68t105  A68_105 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t107 ;

A_PROCEDURE(struct A68t105 *,A68t106,(struct A68t107 ,struct A68t49 ),(struct A68t107 ,struct A68t49 ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(MODE107,MODE49) REF MODE105 */
struct A68t107 { A68_INT mode; union {
struct A68t91 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t107  A68_107 ;    /* UNION(REF MODE91,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t108,(struct A68t91 *),(struct A68t91 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(REF MODE91) BOOL */

A_PROCEDURE(A68_BITS *,A68t109,(A68_VC ,struct A68t49 ),(A68_VC ,struct A68t49 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE26,MODE49) REF BITS */

A_PROCEDURE(A68_VOID ,A68t110,(A68_BITS *,struct A68t49 ),(A68_BITS *,struct A68t49 ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF BITS,MODE49) VOID */

A_PROCEDURE(A68_VOID ,A68t111,(A68_BITS *,struct A68t49 ,A68_VC *),(A68_BITS *,struct A68t49 ,A68_VC *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF BITS,MODE49) REF MODE26 */
struct A68t112{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ,struct A68t112 *),(A68_VC ,struct A68t112 *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE26) MODE112 */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC ,A68_VC ,struct A68t112 *),(A68_VC ,A68_VC ,struct A68t112 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(REF MODE26,REF MODE26) MODE112 */

A_PROCEDURE(A68_VOID ,A68t115,(A68_VC ,A68_VC ,struct A68t61 *),(A68_VC ,A68_VC ,struct A68t61 *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(REF MODE26,REF MODE26) REF MODE61 */

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t117,(A68_VC ),(A68_VC ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t117 ),(struct A68t117 ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE117) VOID */

A_PROCEDURE(A68_VOID ,A68t119,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 57 CHAR */

A_PROCEDURE(A68_INT ,A68t121,(A68_VC ,struct A68t31 **),(A68_VC ,struct A68t31 **,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE26,REF REF MODE31) INT */

A_PROCEDURE(A68_INT ,A68t122,(A68_VC ,A68_VC *,struct A68t49 ),(A68_VC ,A68_VC *,struct A68t49 ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE26,REF REF MODE26,MODE49) INT */
A_ISTRUCT(A68_CHAR ,36,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_VC ,3,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,29,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t127);
typedef struct A68t127  A68_127 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_VOID ,A68t128,(A68_VC ,A68_VC ,struct A68t49 ,struct A68t112 *),(A68_VC ,A68_VC ,struct A68t49 ,struct A68t112 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE26,MODE26,MODE49) MODE112 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_VC ,A68_BOOL ,struct A68t112 *),(A68_VC ,A68_BOOL ,struct A68t112 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(MODE26,BOOL) MODE112 */
A_ISTRUCT(A68_CHAR ,23,A68t130);
typedef struct A68t130  A68_130 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_VOID ,A68t134,(A68_BOOL ,struct A68t61 *),(A68_BOOL ,struct A68t61 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(BOOL) MODE61 */

A_PROCEDURE(A68_VOID ,A68t135,(struct A68t48 *),(struct A68t48 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC MODE48 */
A_ISTRUCT(A68_CHAR ,102,A68t136);
typedef struct A68t136  A68_136 ;    /* STRUCT 102 CHAR */
A_VECTOR(struct A68t31 *,A68t137);
typedef struct A68t137  A68_137 ;    /* VECTOR [] REF MODE31 */
A_ISTRUCT(A68_VC ,2,A68t138);
typedef struct A68t138  A68_138 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,struct A68t49 ,struct A68t48 *),(A68_VC ,struct A68t49 ,struct A68t48 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,MODE49) MODE48 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from oscommon --- */
extern A68_112  XFAAOSF_nullfilename;
extern A68_VOID  WGAAOSF_parse_default(A68_VC ,A68_VC ,A68_112 *);
extern A68_VOID  QHAAOSF_parse_prompt(A68_VC ,A68_VC ,A68_61 *);
/* --- End of imports from oscommon --- */


/* --- Imports from osfiles --- */
extern A68_91 * TSBAOSF_stdin;
extern A68_91 * USBAOSF_stdout;
extern A68_BOOL  AVBAOSF_(struct A68t92 ,struct A68t92 );
extern A68_92  XUBAOSF_io_no_newline;
extern A68_VOID  DXBAOSF_read_line(struct A68t91 *,A68_VC ,A68_INT *,struct A68t49 ,A68_92 *);
extern A68_VOID  UXBAOSF_write_buffer(struct A68t91 *,A68_VC ,struct A68t49 ,A68_92 *);
/* --- End of imports from osfiles --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t48 ,A68_VC *);
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from messageproc --- */
extern A68_50  IUAAOSF_system;
extern A68_50  MUAAOSF_user;
extern A68_50  OUAAOSF_error;
/* --- End of imports from messageproc --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_49  TIBAOSF_global_msg;
/* --- End of imports from oserrors --- */


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
extern A68_VOID  MAAAOSF_cstringtorvc(struct A68t31 *,A68_VC *);
/* --- End of imports from cif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JFAAOSF(void);   /* oscommon */
extern void MRBAOSF(void);   /* osfiles */
extern void IKAAOSF(void);   /* usefulops */
extern void ZRAAOSF(void);   /* messageproc */
extern void MCBAOSF(void);   /* oserrors */
extern void BAAAOSF(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_120   NDCAOSF = {"$Id: osshell.a68,v 1.1.1.1 2001-05-07 10:16:12 sian Exp $"}; 
A_GISVEC(A68_VC ,ODCAOSF,NDCAOSF,57)
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
       /* default if environ variable SHELL not set */
#define SHELL           "/bin/sh"
       /* limit on filename size (input and output) */
#define EXPAND_BUFSIZ   5000
#define NOSTR           NULL
   /* Are any of the characters in the two strings the same? */
int anyof(char *s1, char *s2)
{
        int c;
        while (c = *s1++)
                if (strchr(s2, c))
                        return(1);
        return(0);
}
/*
        Takes a file name, possibly with shell meta characters
        in it and expands it by using "sh -c echo filename",
        a pointer to the result is written into 'newname'.
        Returns status as follows:
        0 = success
        1 = not expanded
        2 = no match
        3 = Ambiguous (more than one match)
        4 = Expand buffer too small
        5 = 'pipe' failed
        6 = 'fork' failed
        7 = 'read' failed
        8 = 'echo' failed
*/
int expand(char *name, char **newname)
{
        static char xname[EXPAND_BUFSIZ];
        char *xlast = xname + EXPAND_BUFSIZ;
        char *xp = xname;
        char cmdbuf[EXPAND_BUFSIZ];
        register int pid, l;
        register char *cp, *Shell;
        int s, pivec[2];
        struct stat sbuf;
        if (!anyof(name, "~{[*?$`'\"\\")) {
                *newname = name;
                return(1);
        }
        if (pipe(pivec) < 0) {
                return(5);      /* pipe(2) failed */
        }
        sprintf(cmdbuf, "echo %s", name);
        if ((pid = fork()) == 0) {
                Shell = getenv("SHELL");
                if (Shell == NOSTR || *Shell=='\0')
                        Shell = SHELL;
                close(pivec[0]);
                close(1);
                dup(pivec[1]);
                close(pivec[1]);
                close(2);
                execlp(Shell, Shell, "-c", cmdbuf, 0);
                _exit(1);
        }
        if (pid == -1) {
                close(pivec[0]);
                close(pivec[1]);
                return(6);      /* fork(2) failed */
        }
        close(pivec[1]);
        do {
          l = read(pivec[0], xp, xlast-xp);
          if (l < 0) {
                return(7);      /* read(2) failed */
          }
          xp += l;
        } while(l>0);
        close(pivec[0]);
        while (wait(&s) != pid);
                ;
        s &= 0377;
        if (s != 0 && s != SIGPIPE) {
                return(8);      /* echo failed */
        }
        if (xp == xname) {
                return(2);      /* no match */
        }
        if (xp == xlast) {
                return(4);      /* expand buffer overflow */
        }
        *xp = 0;
        for (cp = xp-1; *cp == '\n' && cp > xname; cp--)
                ;
        *++cp = '\0';
        *newname = xname;
        if (strchr(xname, ' ') != NOSTR && stat(xname, &sbuf) < 0) {
                return(3);      /* ambiguous filename */
        }
        return(0);
}
#define EXPAND(name,newname) \
             A_int_INT(expand(A_VC_charptr(name),((void *)newname)))

#define PDCAOSF_cexpand EXPAND
static A68_123   YDCAOSF = {"shell expand - no match for string \""}; 
A_GISVEC(A68_VC ,ZDCAOSF,YDCAOSF,36)
static A68_125   EECAOSF = {"shell expand buffer too small"}; 
A_GISVEC(A68_VC ,FECAOSF,EECAOSF,29)
static A68_126   HECAOSF = {"shell expand call of 'pipe' failed"}; 
A_GISVEC(A68_VC ,IECAOSF,HECAOSF,34)
static A68_126   KECAOSF = {"shell expand call of 'fork' failed"}; 
A_GISVEC(A68_VC ,LECAOSF,KECAOSF,34)
static A68_126   NECAOSF = {"shell expand call of 'read' failed"}; 
A_GISVEC(A68_VC ,OECAOSF,NECAOSF,34)
static A68_126   QECAOSF = {"shell expand call of 'echo' failed"}; 
A_GISVEC(A68_VC ,RECAOSF,QECAOSF,34)
static A68_127   TECAOSF = {"shell expand unexpected return"}; 
A_GISVEC(A68_VC ,UECAOSF,TECAOSF,30)
static A68_130   EGCAOSF = {"No match to file name \""}; 
A_GISVEC(A68_VC ,FGCAOSF,EGCAOSF,23)
static A68_131   GGCAOSF = {"\" found"}; 
A_GISVEC(A68_VC ,HGCAOSF,GGCAOSF,7)
static A68_132   MGCAOSF = {"Multiple matches to file name \""}; 
A_GISVEC(A68_VC ,NGCAOSF,MGCAOSF,31)
static A68_131   OGCAOSF = {"\" found"}; 
A_GISVEC(A68_VC ,PGCAOSF,OGCAOSF,7)
static A68_133   WGCAOSF = {"Null file name \""}; 
A_GISVEC(A68_VC ,XGCAOSF,WGCAOSF,16)
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc = argc; A_argv = argv; A_envp = envp

#define DHCAOSF_prelude A_prelude
int A_argc = 0;
char **A_argv = NULL;
char **A_envp = NULL;

#define EHCAOSF_define_argc_argv dummy
static A68_BOOL  FHCAOSF_args_initialised;
static A68_77   KHCAOSF = {"Anon"}; 
static A68_61  LHCAOSF_arguments;
static A68_136   UHCAOSF = {"get_args:  'argc' not initialised - has the correct prelude module been included in the main PROGRAM ?"}; 
A_GISVEC(A68_VC ,VHCAOSF,UHCAOSF,102)
typedef struct   /* env of non-global proc */
{
A68_49  Msg;
A68_VC  Default;
A68_129  FFCAOSF_call_expand;
} HFCAOSF_call_expand;
typedef struct   /* env of non-global proc */
{
A68_INT  THCAOSF_upb;
A_PAD_INT(PAD_17)
} AICAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_46  UICAOSF_read;
} WICAOSF_read;
typedef struct   /* env of non-global proc */
{
int dummy;
} LFCAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AJCAOSF_generator;

A_STATIC A68_INT  TDCAOSF_expand(A68_VC  Str, A68_VC * Ans, A68_49  Msg);

A68_VOID  BFCAOSF_parse_filename(A68_VC  Name, A68_VC  Default, A68_49  Msg, A68_112  *ReturnedValue);

A_STATIC A68_VOID  GFCAOSF_call_expand(A68_VC  Name, A68_BOOL  First_try, A68_112  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KFCAOSF_generator(A68_BOOL  IFCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HHCAOSF_generator(A68_BOOL  GHCAOSF_anonymous, A68_61  *ReturnedValue);

A68_VOID  RHCAOSF_get_args(A68_48  *ReturnedValue);

A_STATIC A68_VOID  ZHCAOSF_generator(A68_BOOL  XHCAOSF_anonymous, A68_61  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SICAOSF_read_prompt(A68_VC  Prompt, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VICAOSF_read(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZICAOSF_generator(A68_BOOL  XICAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  TJCAOSF_prompt_args(A68_VC  Prompt, A68_49  Msg, A68_48  *ReturnedValue);

A_STATIC A68_VOID  KFCAOSF_generator(A68_BOOL  IFCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LFCAOSF_generator *)NonLocals)->x)
{ 
A68_VC  MFCAOSF;  /* clause result */
A68_VC  NFCAOSF;  /* OPERATORS - dynamic generator */
{ 
NFCAOSF.upb = 0 ;
( IFCAOSF_anonymous? A_VLOC(A68_CHAR ,NFCAOSF): A_VHEAP(A68_CHAR ,NFCAOSF) );
MFCAOSF = NFCAOSF;
} 
*ReturnedValue = (MFCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ZICAOSF_generator(A68_BOOL  XICAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((AJCAOSF_generator *)NonLocals)->x)
{ 
A68_VC  BJCAOSF;  /* clause result */
A68_VC  CJCAOSF;  /* OPERATORS - dynamic generator */
{ 
CJCAOSF.upb = 512 ;
( XICAOSF_anonymous? A_VLOC(A68_CHAR ,CJCAOSF): A_VHEAP(A68_CHAR ,CJCAOSF) );
BJCAOSF = CJCAOSF;
} 
*ReturnedValue = (BJCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  GFCAOSF_call_expand(A68_VC  Name, A68_BOOL  First_try, A68_112  *ReturnedValue, void *NonLocals)
#define NL(x) (((HFCAOSF_call_expand *)NonLocals)->x)
{ 
A68_54  JFCAOSF_generator;   /* proc value of non-global proc */
A68_VC  PFCAOSF;  /* avoid structure result */
A68_VC  OFCAOSF_expanded;
A68_INT  QFCAOSF_status;
A68_112  RFCAOSF;  /* clause result */
A68_VC  SFCAOSF;  /* avoid structure result */
A68_VC  TFCAOSF;  /* avoid structure result */
A68_112  UFCAOSF;  /* avoid structure result */
A68_VC  VFCAOSF;  /* avoid structure result */
A68_VC  WFCAOSF;  /* avoid structure result */
A68_112  XFCAOSF;  /* avoid structure result */
A68_VC  YFCAOSF;  /* avoid structure result */
A68_VC  ZFCAOSF;  /* avoid structure result */
A68_112  AGCAOSF;  /* avoid structure result */
A68_112  BGCAOSF_parsed;
A68_112  CGCAOSF;  /* avoid structure result */
A68_124  DGCAOSF;  /* collateral clause result */
A68_48  IGCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  JGCAOSF;  /* avoid structure result */
A68_48  KGCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_124  LGCAOSF;  /* collateral clause result */
A68_48  QGCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RGCAOSF;  /* avoid structure result */
A68_48  SGCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(call_expand);
 /* line 204: */
 /* line 206: */
{ 
A_CLOSURE( JFCAOSF_generator, KFCAOSF_generator, LFCAOSF_generator );
A_CALLPROC(JFCAOSF_generator,(A68_FALSE, &PFCAOSF),(A68_FALSE, &PFCAOSF,(JFCAOSF_generator).nonlocals));
OFCAOSF_expanded = PFCAOSF;
 /* line 208: */
QFCAOSF_status = TDCAOSF_expand(Name, (&OFCAOSF_expanded), NL(Msg));
 /* line 209: */
 /* line 211: */
switch ( (QFCAOSF_status+1) )
{ 
case 1: 
 /* line 213: */
ZCAAOSF_makervc( NL(Default), &SFCAOSF );
ZCAAOSF_makervc( OFCAOSF_expanded, &TFCAOSF );
WGAAOSF_parse_default( TFCAOSF, SFCAOSF, &UFCAOSF );
RFCAOSF = UFCAOSF;
break;
case 2: 
 /* line 215: */
ZCAAOSF_makervc( NL(Default), &VFCAOSF );
ZCAAOSF_makervc( Name, &WFCAOSF );
WGAAOSF_parse_default( WFCAOSF, VFCAOSF, &XFCAOSF );
RFCAOSF = XFCAOSF;
break;
case 3: 
 /* line 216: */
if ( First_try )
{ 
ZCAAOSF_makervc( NL(Default), &YFCAOSF );
ZCAAOSF_makervc( Name, &ZFCAOSF );
WGAAOSF_parse_default( ZFCAOSF, YFCAOSF, &AGCAOSF );
BGCAOSF_parsed = AGCAOSF;
 /* line 217: */
 /* line 218: */
A_CALLPROC(NL(FFCAOSF_call_expand),(BGCAOSF_parsed.Filename, A68_FALSE, &CGCAOSF),(BGCAOSF_parsed.Filename, A68_FALSE, &CGCAOSF,(NL(FFCAOSF_call_expand)).nonlocals));
RFCAOSF = CGCAOSF;
} 
else
{ 
 /* line 219: */
DGCAOSF.data[0] = FGCAOSF;
DGCAOSF.data[1] = Name;
DGCAOSF.data[2] = HGCAOSF;
JDAAOSF_concat( A_HISVEC(IGCAOSF,DGCAOSF,3,A68_VC ), &JGCAOSF );
A_CALLPROC(NL(Msg),(MUAAOSF_user, A_HVEC(KGCAOSF,JGCAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(KGCAOSF,JGCAOSF,A68_VC ),(NL(Msg)).nonlocals));
 /* line 220: */
 /* line 221: */
 /* line 223: */
RFCAOSF = XFAAOSF_nullfilename;
} 
break;
case 4: 
{ 
 /* line 224: */
LGCAOSF.data[0] = NGCAOSF;
LGCAOSF.data[1] = Name;
LGCAOSF.data[2] = PGCAOSF;
JDAAOSF_concat( A_HISVEC(QGCAOSF,LGCAOSF,3,A68_VC ), &RGCAOSF );
A_CALLPROC(NL(Msg),(MUAAOSF_user, A_HVEC(SGCAOSF,RGCAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(SGCAOSF,RGCAOSF,A68_VC ),(NL(Msg)).nonlocals));
 /* line 225: */
 /* line 226: */
 /* line 227: */
 /* line 228: */
RFCAOSF = XFAAOSF_nullfilename;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(call_expand);
*ReturnedValue = (RFCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ZHCAOSF_generator(A68_BOOL  XHCAOSF_anonymous, A68_61  *ReturnedValue, void *NonLocals)
#define NL(x) (((AICAOSF_generator *)NonLocals)->x)
{ 
A68_61  BICAOSF;  /* clause result */
A68_61  CICAOSF;  /* OPERATORS - dynamic generator */
{ 
CICAOSF.upb = NL(THCAOSF_upb) ;
( XHCAOSF_anonymous? A_VLOC(A68_VC ,CICAOSF): A_VHEAP(A68_VC ,CICAOSF) );
BICAOSF = CICAOSF;
} 
*ReturnedValue = (BICAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VICAOSF_read(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WICAOSF_read *)NonLocals)->x)
{ 
A68_54  YICAOSF_generator;   /* proc value of non-global proc */
A68_VC  DJCAOSF;  /* avoid structure result */
A68_VC  EJCAOSF_ans;
A68_INT  FJCAOSF_l;
A68_92  GJCAOSF;  /* avoid structure result */
A68_138  HJCAOSF;  /* collateral clause result */
A68_VC  IJCAOSF;  /* OPERATORS - trim index */
A68_VC  JJCAOSF;  /* avoid structure result */
A68_VC  KJCAOSF;  /* clause result */
A68_48  LJCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MJCAOSF;  /* avoid structure result */
A68_VC  NJCAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(read);
{ 
A_CLOSURE( YICAOSF_generator, ZICAOSF_generator, AJCAOSF_generator );
A_CALLPROC(YICAOSF_generator,(A68_FALSE, &DJCAOSF),(A68_FALSE, &DJCAOSF,(YICAOSF_generator).nonlocals));
EJCAOSF_ans = DJCAOSF;
 /* line 294: */
FJCAOSF_l = 0;
 /* line 295: */
 /* line 296: */
DXBAOSF_read_line( TSBAOSF_stdin, EJCAOSF_ans, (&FJCAOSF_l), TIBAOSF_global_msg, &GJCAOSF );
if ( AVBAOSF_(GJCAOSF, XUBAOSF_io_no_newline) )
{ 
HJCAOSF.data[0] = A_VTRIM(IJCAOSF,(EJCAOSF_ans),A_VTSCRIPT(&(IJCAOSF.upb),(EJCAOSF_ans).upb,1,FJCAOSF_l));
A_CALLPROC(NL(UICAOSF_read),( &JJCAOSF),( &JJCAOSF,(NL(UICAOSF_read)).nonlocals));
HJCAOSF.data[1] = JJCAOSF;
 /* line 297: */
JDAAOSF_concat( A_HISVEC(LJCAOSF,HJCAOSF,2,A68_VC ), &MJCAOSF );
KJCAOSF = MJCAOSF;
} 
else
{ 
 /* line 298: */
 /* line 299: */
KJCAOSF = A_VTRIM(NJCAOSF,(EJCAOSF_ans),A_VTSCRIPT(&(NJCAOSF.upb),(EJCAOSF_ans).upb,1,FJCAOSF_l));
} 
} 
A_PROC_EXIT(read);
*ReturnedValue = (KJCAOSF);
return;
} 
#undef NL

A_STATIC A68_INT  TDCAOSF_expand(A68_VC  Str, A68_VC * Ans, A68_49  Msg)
{ 
A68_31 * UDCAOSF_xname;
A68_VC  VDCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  WDCAOSF_status;
A68_124  XDCAOSF;  /* collateral clause result */
A68_VC  AECAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  BECAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CECAOSF;  /* avoid structure result */
A68_48  DECAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  GECAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  JECAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  MECAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  PECAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  SECAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  VECAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WECAOSF;  /* avoid structure result */
A68_INT  XECAOSF;  /* clause result */
A_PROC_ENTRY(expand);
 /* line 174: */
 /* line 176: */
{ 
UDCAOSF_xname = (A68_31 *)A68_NIL;
 /* line 177: */
WDCAOSF_status = PDCAOSF_cexpand(A_VC_PLUS(Str,A_HVEC(VDCAOSF,(A68_SSBITS)0,A68_CHAR )), (&UDCAOSF_xname));
 /* line 178: */
 /* line 179: */
switch ( WDCAOSF_status )
{ 
case 1: 
 /* line 180: */
/*SKIP*/;
break;
case 2: 
XDCAOSF.data[0] = ZDCAOSF;
XDCAOSF.data[1] = Str;
XDCAOSF.data[2] = A_HVEC(AECAOSF,'\"',A68_CHAR );
 /* line 181: */
JDAAOSF_concat( A_HISVEC(BECAOSF,XDCAOSF,3,A68_VC ), &CECAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(DECAOSF,CECAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(DECAOSF,CECAOSF,A68_VC ),(Msg).nonlocals));
break;
case 3: 
 /* line 182: */
/*SKIP*/;
break;
case 4: 
 /* line 183: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(GECAOSF,FECAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(GECAOSF,FECAOSF,A68_VC ),(Msg).nonlocals));
break;
case 5: 
 /* line 184: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(JECAOSF,IECAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(JECAOSF,IECAOSF,A68_VC ),(Msg).nonlocals));
break;
case 6: 
 /* line 185: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(MECAOSF,LECAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(MECAOSF,LECAOSF,A68_VC ),(Msg).nonlocals));
break;
case 7: 
 /* line 186: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(PECAOSF,OECAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(PECAOSF,OECAOSF,A68_VC ),(Msg).nonlocals));
break;
case 8: 
 /* line 187: */
 /* line 188: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(SECAOSF,RECAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(SECAOSF,RECAOSF,A68_VC ),(Msg).nonlocals));
break;
default: 
if ( (WDCAOSF_status!=0) )
{ 
 /* line 189: */
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(VECAOSF,UECAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(VECAOSF,UECAOSF,A68_VC ),(Msg).nonlocals));
} 
break;
} 
 /* line 190: */
MAAAOSF_cstringtorvc( UDCAOSF_xname, &WECAOSF );
(*Ans) = WECAOSF;
 /* line 191: */
 /* line 192: */
XECAOSF = WDCAOSF_status;
} 
A_PROC_EXIT(expand);
return( XECAOSF );
} 
#undef NL

A68_VOID  BFCAOSF_parse_filename(A68_VC  Name, A68_VC  Default, A68_49  Msg, A68_112  *ReturnedValue)
{ 
A68_129  FFCAOSF_call_expand;   /* proc value of non-global proc */
A68_112  TGCAOSF;  /* avoid structure result */
A68_112  UGCAOSF_ans;
A68_124  VGCAOSF;  /* collateral clause result */
A68_VC  YGCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  ZGCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  AHCAOSF;  /* avoid structure result */
A68_48  BHCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_112  CHCAOSF;  /* clause result */
A_PROC_ENTRY(parse_filename);
 /* line 200: */
 /* line 203: */
{ 
A_CLOSURE( FFCAOSF_call_expand, GFCAOSF_call_expand, HFCAOSF_call_expand );
(( HFCAOSF_call_expand * ) ( FFCAOSF_call_expand.nonlocals )) -> Msg = Msg;
(( HFCAOSF_call_expand * ) ( FFCAOSF_call_expand.nonlocals )) -> Default = Default;
(( HFCAOSF_call_expand * ) ( FFCAOSF_call_expand.nonlocals )) -> FFCAOSF_call_expand = FFCAOSF_call_expand;
 /* line 230: */
A_CALLPROC(FFCAOSF_call_expand,(Name, A68_TRUE, &TGCAOSF),(Name, A68_TRUE, &TGCAOSF,(FFCAOSF_call_expand).nonlocals));
UGCAOSF_ans = TGCAOSF;
 /* line 232: */
 /* line 233: */
 /* line 234: */
if ( (UGCAOSF_ans.Name.upb==0) )
{ 
VGCAOSF.data[0] = XGCAOSF;
VGCAOSF.data[1] = UGCAOSF_ans.Filename;
VGCAOSF.data[2] = A_HVEC(YGCAOSF,'\"',A68_CHAR );
 /* line 235: */
JDAAOSF_concat( A_HISVEC(ZGCAOSF,VGCAOSF,3,A68_VC ), &AHCAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(BHCAOSF,AHCAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(BHCAOSF,AHCAOSF,A68_VC ),(Msg).nonlocals));
} 
 /* line 237: */
 /* line 238: */
CHCAOSF = UGCAOSF_ans;
} 
A_PROC_EXIT(parse_filename);
*ReturnedValue = (CHCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  HHCAOSF_generator(A68_BOOL  GHCAOSF_anonymous, A68_61  *ReturnedValue)
{ 
A68_61  IHCAOSF;  /* clause result */
A68_61  JHCAOSF;  /* OPERATORS - dynamic generator */
{ 
JHCAOSF.upb = 1 ;
( GHCAOSF_anonymous? A_VLOC(A68_VC ,JHCAOSF): A_VHEAP(A68_VC ,JHCAOSF) );
IHCAOSF = JHCAOSF;
} 
*ReturnedValue = (IHCAOSF);
return;
} 
#undef NL

A68_VOID  RHCAOSF_get_args(A68_48  *ReturnedValue)
{ 
A68_INT  SHCAOSF;  /* yield of code insert */
A68_INT  THCAOSF_upb;
A68_48  WHCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_134  YHCAOSF_generator;   /* proc value of non-global proc */
A68_61  DICAOSF;  /* avoid structure result */
A68_32 * EICAOSF;  /* yield of code insert */
A68_32 * FICAOSF_myargv;
A68_31 ** GICAOSF_new;
A68_VC * HICAOSF_arg;
A68_137  IICAOSF;  /* OPERATORS - istruct -> vector */
A68_137  JICAOSF;  /* OPERATORS - trim index */
A68_137  KICAOSF;  /* OPERATORS - trim index */
A68_137  LICAOSF;  /* forall yield */
A68_INT  MICAOSF;  /* forall loop counter */
A68_VC  NICAOSF;  /* avoid structure result */
A68_VC  OICAOSF;  /* avoid structure result */
A68_48  PICAOSF;  /* clause result */
union {  /* BIOP 99 */
A68_61   source;
A68_48   destination;
} QICAOSF; 
A_PROC_ENTRY(get_args);
{ 
 /* line 270: */
 /* line 271: */
if ( !FHCAOSF_args_initialised )
{ 
#define RESULT SHCAOSF
{RESULT=A_argc;
}
#undef RESULT
THCAOSF_upb = SHCAOSF;
 /* line 273: */
 /* line 274: */
if ( (THCAOSF_upb==0) )
{ 
 /* line 275: */
 /* line 276: */
A_CALLPROC(TIBAOSF_global_msg,(OUAAOSF_error, A_HVEC(WHCAOSF,VHCAOSF,A68_VC )),(OUAAOSF_error, A_HVEC(WHCAOSF,VHCAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
else
{ 
A_CLOSURE( YHCAOSF_generator, ZHCAOSF_generator, AICAOSF_generator );
(( AICAOSF_generator * ) ( YHCAOSF_generator.nonlocals )) -> THCAOSF_upb = THCAOSF_upb;
A_CALLPROC(YHCAOSF_generator,(A68_FALSE, &DICAOSF),(A68_FALSE, &DICAOSF,(YHCAOSF_generator).nonlocals));
LHCAOSF_arguments = DICAOSF;
 /* line 278: */
#define RESULT EICAOSF
{RESULT = (void *)A_argv;
}
#undef RESULT
FICAOSF_myargv = EICAOSF;
 /* line 280: */
 /* line 281: */
JICAOSF = A_ISVEC(IICAOSF,FICAOSF_myargv,16000000,A68_31 *) ;
LICAOSF = A_VTRIM(KICAOSF,(JICAOSF),A_VTSCRIPT(&(KICAOSF.upb),(JICAOSF).upb,1,THCAOSF_upb)) ;
MICAOSF = LICAOSF.upb -1;
if ( MICAOSF != LHCAOSF_arguments.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
GICAOSF_new = LICAOSF.data;
HICAOSF_arg = LHCAOSF_arguments.data;
for (;MICAOSF-- >= 0;
(GICAOSF_new++
,HICAOSF_arg++
) )
{
MAAAOSF_cstringtorvc( (*GICAOSF_new), &NICAOSF );
ZCAAOSF_makervc( NICAOSF, &OICAOSF );
(*HICAOSF_arg) = OICAOSF;
}
 /* line 282: */
} 
 /* line 283: */
 /* line 284: */
FHCAOSF_args_initialised = A68_TRUE;
} 
 /* line 286: */
 /* line 287: */
QICAOSF.source = LHCAOSF_arguments ;
PICAOSF = (QICAOSF.destination);
} 
A_PROC_EXIT(get_args);
*ReturnedValue = (PICAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  SICAOSF_read_prompt(A68_VC  Prompt, A68_VC  *ReturnedValue)
{ 
A68_46  UICAOSF_read;   /* proc value of non-global proc */
A68_92  OJCAOSF;  /* avoid structure result */
A68_VC  PJCAOSF;  /* clause result */
A68_VC  QJCAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_prompt);
 /* line 290: */
 /* line 291: */
{ 
 /* line 292: */
 /* line 293: */
A_CLOSURE( UICAOSF_read, VICAOSF_read, WICAOSF_read );
(( WICAOSF_read * ) ( UICAOSF_read.nonlocals )) -> UICAOSF_read = UICAOSF_read;
 /* line 300: */
UXBAOSF_write_buffer( USBAOSF_stdout, Prompt, TIBAOSF_global_msg, &OJCAOSF );
OJCAOSF;
 /* line 301: */
 /* line 302: */
A_CALLPROC(UICAOSF_read,( &QJCAOSF),( &QJCAOSF,(UICAOSF_read).nonlocals));
PJCAOSF = QJCAOSF;
} 
A_PROC_EXIT(read_prompt);
*ReturnedValue = (PJCAOSF);
return;
} 
#undef NL

A68_VOID  TJCAOSF_prompt_args(A68_VC  Prompt, A68_49  Msg, A68_48  *ReturnedValue)
{ 
A68_48  UJCAOSF;  /* avoid structure result */
A68_VC  VJCAOSF;  /* avoid structure result */
A68_VC  WJCAOSF_buffer;
A68_VC  YJCAOSF;  /* OPERATORS - nil -> mode */
A68_VC  XJCAOSF_expanded;
A68_INT  ZJCAOSF;  /* YIELD */
A68_61  AKCAOSF;  /* avoid structure result */
A68_48  BKCAOSF;  /* clause result */
union {  /* BIOP 99 */
A68_61   source;
A68_48   destination;
} CKCAOSF; 
A_PROC_ENTRY(prompt_args);
 /* line 315: */
 /* line 316: */
{ 
if ( !FHCAOSF_args_initialised )
{ 
RHCAOSF_get_args(  &UJCAOSF );
UJCAOSF;
} 
 /* line 317: */
SICAOSF_read_prompt( Prompt, &VJCAOSF );
WJCAOSF_buffer = VJCAOSF;
 /* line 318: */
XJCAOSF_expanded = (A_VVAC(YJCAOSF));
 /* line 319: */
TDCAOSF_expand(WJCAOSF_buffer, (&XJCAOSF_expanded), Msg);
 /* line 320: */
ZJCAOSF = 1 ;
QHAAOSF_parse_prompt( (*(&A_VINDEX(LHCAOSF_arguments,ZJCAOSF))), XJCAOSF_expanded, &AKCAOSF );
LHCAOSF_arguments = AKCAOSF;
 /* line 321: */
 /* line 322: */
 /* line 325: */
CKCAOSF.source = LHCAOSF_arguments ;
BKCAOSF = (CKCAOSF.destination);
} 
A_PROC_EXIT(prompt_args);
*ReturnedValue = (BKCAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 6: */
void KDCAOSF(void)   /* initialise DECS osshell */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","osshell.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/oscommon.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osfiles.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/usefulops.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/oserrors.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_61  MHCAOSF;  /* avoid structure result */
A68_77 * NHCAOSF;  /* YIELD */
A68_VC  OHCAOSF;  /* OPERATORS - istruct -> vector */
A68_61  PHCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_61  QHCAOSF;  /* OPERATORS - assign op */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JFAAOSF();   /* USE oscommon */
MRBAOSF();   /* USE osfiles */
IKAAOSF();   /* USE usefulops */
ZRAAOSF();   /* USE messageproc */
MCBAOSF();   /* USE oserrors */
BAAAOSF();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osshell.a68";
A_config.translation_time = "Wed May  5 17:38:58 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "JDCAOSF (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:58 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osshell);
UEAALIB_a68config(LGAALIB_configinfo, ODCAOSF);
 /* line 61: */
 /* line 62: */
 /* line 63: */
 /* line 64: */
 /* line 65: */
 /* line 66: */
 /* line 67: */
 /* line 68: */
 /* line 69: */
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 75: */
 /* line 76: */
 /* line 77: */
 /* line 78: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 86: */
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
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 113: */
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
 /* line 148: */
 /* line 149: */
 /* line 150: */
 /* line 151: */
 /* line 152: */
 /* line 153: */
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 158: */
 /* line 159: */
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 163: */
 /* line 164: */
 /* line 165: */
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 173: */
 /* line 199: */
 /* line 247: */
 /* line 248: */
 /* line 249: */
 /* line 250: */
 /* line 251: */
 /* line 252: */
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 258: */
 /* line 259: */
 /* line 261: */
FHCAOSF_args_initialised = A68_FALSE;
 /* line 262: */
HHCAOSF_generator( A68_TRUE, &MHCAOSF );
NHCAOSF = A_LOC(A68_77 ) ;
(*NHCAOSF) = KHCAOSF ;
QHCAOSF = A_HVEC(PHCAOSF,A_ISVEC(OHCAOSF,NHCAOSF,4,A68_CHAR ),A68_VC ) ;
A_VASSIGN2(QHCAOSF,MHCAOSF,A68_VC ) ;
LHCAOSF_arguments = MHCAOSF;
 /* line 264: */
 /* line 268: */
 /* line 269: */
 /* line 289: */
 /* line 305: */
 /* line 326: */
A_PROC_EXIT(DECS osshell);
} 
#undef NL
/* end of translation of osshell.a68 */
