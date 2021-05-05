/* UNAME:LRBAOSF */
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

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC *),(A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_INT ,struct A68t51 ,struct A68t53 ),(A68_INT ,struct A68t51 ,struct A68t53 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(INT,MODE51,MODE53) VOID */

A_PROCEDURE(A68_INT *,A68t70,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t51 ,A68_VC *),(struct A68t51 ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE51) REF MODE26 */

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

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t92,(A68_VC ),(A68_VC ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE92) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t95);
typedef struct A68t95  A68_95 ;    /* STRUCT 57 CHAR */

A_PROCEDURE(A68_BITS *,A68t96,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE26,MODE26) REF BITS */

A_PROCEDURE(A68_INT ,A68t97,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t98,(A68_VC ,A68_INT ,A68_INT ,A68_BITS *),(A68_VC ,A68_INT ,A68_INT ,A68_BITS *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE26,INT,INT,REF BITS) INT */

A_PROCEDURE(struct A68t31 *,A68t99,(A68_VC ,A68_INT ,A68_BITS *),(A68_VC ,A68_INT ,A68_BITS *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE26,INT,REF BITS) REF MODE31 */

A_PROCEDURE(A68_INT ,A68t100,(A68_VC ,A68_INT ,A68_INT ,A68_BITS *),(A68_VC ,A68_INT ,A68_INT ,A68_BITS *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26,INT,INT,REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t101,(A68_BITS *,A68_LINT ,A68_INT ),(A68_BITS *,A68_LINT ,A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF BITS,LONG INT,INT) INT */

A_PROCEDURE(A68_LINT ,A68t102,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF BITS) LONG INT */

A_PROCEDURE(A68_INT ,A68t103,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE31) VOID */
struct A68t105{
A68_INT  Stat;
A_PAD_INT(PAD_5)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_INT ,A68t106,(A68_INT ,struct A68t105 *),(A68_INT ,struct A68t105 *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT,REF MODE105) INT */

A_PROCEDURE(A68_INT ,A68t107,(A68_VC ,struct A68t105 *),(A68_VC ,struct A68t105 *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE26,REF MODE105) INT */

A_PROCEDURE(A68_BITS *,A68t108,(A68_VC ),(A68_VC ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE26) REF BITS */

A_PROCEDURE(struct A68t31 *,A68t109,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF BITS) REF MODE31 */

A_PROCEDURE(struct A68t31 *,A68t110,(A68_INT ),(A68_INT ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(INT) REF MODE31 */
struct A68t111{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t112{
struct A68t77  Access;
A_PAD_ISTRUCT(A68_77 ,PAD_6)
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE77)  */

A_PROCEDURE(A68_BOOL ,A68t113,(struct A68t112 ,struct A68t112 ),(struct A68t112 ,struct A68t112 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE112,MODE112) BOOL */
struct A68t114{
A68_INT  Status;
A_PAD_INT(PAD_7)
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t115,(struct A68t114 ,struct A68t114 ),(struct A68t114 ,struct A68t114 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE114,MODE114) BOOL */

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t111 *,A68_VC *),(struct A68t111 *,A68_VC *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE111) MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(struct A68t111 *,A68t118,(A68_VC ,struct A68t112 ,struct A68t53 ),(A68_VC ,struct A68t112 ,struct A68t53 ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE26,MODE112,MODE53) REF MODE111 */
A_ISTRUCT(A68_VC ,2,A68t119);
typedef struct A68t119  A68_119 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t111 *,struct A68t53 ),(struct A68t111 *,struct A68t53 ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE111,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t111 *,A68_VC ,A68_INT *,struct A68t53 ,struct A68t114 *),(struct A68t111 *,A68_VC ,A68_INT *,struct A68t53 ,struct A68t114 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(REF MODE111,REF MODE26,REF INT,MODE53) MODE114 */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t111 *,A68_VC ,struct A68t53 ,struct A68t114 *),(struct A68t111 *,A68_VC ,struct A68t53 ,struct A68t114 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(REF MODE111,MODE26,MODE53) MODE114 */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t111 *,A68_LINT ,struct A68t53 ,struct A68t114 *),(struct A68t111 *,A68_LINT ,struct A68t53 ,struct A68t114 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE111,LONG INT,MODE53) MODE114 */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t111 *,A68_LINT *,struct A68t53 ,struct A68t114 *),(struct A68t111 *,A68_LINT *,struct A68t53 ,struct A68t114 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE111,REF LONG INT,MODE53) MODE114 */
A_ISTRUCT(A68_CHAR ,17,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 17 CHAR */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t111 *,struct A68t53 ,struct A68t114 *),(struct A68t111 *,struct A68t53 ,struct A68t114 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE111,MODE53) MODE114 */

A_PROCEDURE(A68_VOID ,A68t127,(A68_VC ,struct A68t53 ,struct A68t114 *),(A68_VC ,struct A68t53 ,struct A68t114 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE26,MODE53) MODE114 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_VC ,A68_VC ,struct A68t53 ,struct A68t114 *),(A68_VC ,A68_VC ,struct A68t53 ,struct A68t114 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE26,MODE26,MODE53) MODE114 */
A_ISTRUCT(A68_CHAR ,11,A68t129);
typedef struct A68t129  A68_129 ;    /* STRUCT 11 CHAR */
struct A68t130{
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
typedef struct A68t130  A68_130 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */

A_PROCEDURE(struct A68t130 *,A68t131,(struct A68t130 *),(struct A68t130 *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE130) REF MODE130 */
struct A68t132 { A68_INT mode; union {
struct A68t111 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t132  A68_132 ;    /* UNION(REF MODE111,MODE26)  */

A_PROCEDURE(struct A68t130 *,A68t133,(struct A68t132 ,struct A68t53 ),(struct A68t132 ,struct A68t53 ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE132,MODE53) REF MODE130 */
A_ISTRUCT(A68_CHAR ,51,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,61,A68t135);
typedef struct A68t135  A68_135 ;    /* STRUCT 61 CHAR */
A_ISTRUCT(A68_VC ,3,A68t136);
typedef struct A68t136  A68_136 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,37,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_BOOL ,A68t138,(struct A68t111 *),(struct A68t111 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(REF MODE111) BOOL */

A_PROCEDURE(A68_BITS *,A68t139,(A68_VC ,struct A68t53 ),(A68_VC ,struct A68t53 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,MODE53) REF BITS */

A_PROCEDURE(A68_VOID ,A68t140,(A68_BITS *,struct A68t53 ),(A68_BITS *,struct A68t53 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(REF BITS,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t141,(A68_BITS *,struct A68t53 ,A68_VC *),(A68_BITS *,struct A68t53 ,A68_VC *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(REF BITS,MODE53) REF MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t142);
typedef struct A68t142  A68_142 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 8 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  ABAALIB_a68init(struct A68t39 );
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t51 ,A68_VC *);
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_VOID  VHBAOSF_errnotext(A68_VC *);
extern A68_VOID  SEBAOSF_osifmessage(A68_INT ,struct A68t51 ,struct A68t53 );
/* --- End of imports from oserrors --- */


/* --- Imports from messageproc --- */
extern A68_46  IUAAOSF_system;
extern A68_46  MUAAOSF_user;
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
extern A68_VOID  MAAAOSF_cstringtorvc(struct A68t31 *,A68_VC *);
/* --- End of imports from cif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IKAAOSF(void);   /* usefulops */
extern void MCBAOSF(void);   /* oserrors */
extern void ZRAAOSF(void);   /* messageproc */
extern void BAAAOSF(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_95   PRBAOSF = {"$Id: osfiles.a68,v 1.1.1.1 2001-05-07 10:16:12 sian Exp $"}; 
A_GISVEC(A68_VC ,QRBAOSF,PRBAOSF,57)
A68_BITS * RRBAOSF_null_cfileptr;
A68_BITS * SRBAOSF_null_dirptr;
#define TRBAOSF_null_ccharptr (A68_CHAR *)A68_NIL
#include <stdio.h>
#define FOPEN(filename,mode) A_fileptr_FILEPTR(fopen(A_VC_charptr(filename),A_VC_charptr(mode)))

#define URBAOSF_fopen FOPEN
#include <stdio.h>
#define FCLOSE(stream) A_int_INT(fclose(A_FILEPTR_fileptr(stream)))

#define VRBAOSF_fclose FCLOSE
#ifdef sunosgcc
   #include <sys/stdtypes.h>
#else
   #include <sys/types.h>
#endif
extern size_t fread(); /* #include <stdio.h>*/ 
#define FREAD(ptr,size,nmemb,stream) \
  A_size_t_INT(fread(A_VC_charptr(ptr),A_INT_size_t(size),A_INT_size_t(nmemb),A_FILEPTR_fileptr(stream)))

#define WRBAOSF_fread FREAD
#include <stdio.h>
#define FERROR(stream) A_int_INT(ferror(A_FILEPTR_fileptr(stream)))

#define XRBAOSF_ferror FERROR
#include <stdio.h>
#define FEOF(stream) A_int_INT(feof(A_FILEPTR_fileptr(stream)))

#define YRBAOSF_feof FEOF
#include <stdio.h>
#define FGETS(s,n,stream) (void *)(fgets(A_VC_charptr(s),A_INT_int(n),A_FILEPTR_fileptr(stream)))

#define ZRBAOSF_fgets FGETS
#ifdef sunosgcc
   #include <sys/stdtypes.h>
#else
   #include <sys/types.h>
#endif
extern size_t fwrite(); /* #include <stdio.h> */
#define FWRITE(ptr,size,nmemb,stream) \
  A_size_t_INT(fwrite(A_VC_charptr(ptr),A_INT_size_t(size),A_INT_size_t(nmemb),A_FILEPTR_fileptr(stream)))

#define ASBAOSF_fwrite FWRITE
extern int fseek(); /* #include <stdio.h> */
#define FSEEK(stream,offset,whence) \
  A_int_INT(fseek(A_FILEPTR_fileptr(stream),(long int)offset,A_INT_int(whence)))

#define BSBAOSF_fseek FSEEK
#include <stdio.h>
#define FTELL(stream) A_long_LINT(ftell(A_FILEPTR_fileptr(stream)))

#define CSBAOSF_ftell FTELL
#include <stdio.h>

#define DSBAOSF_seek_set A_int_INT(SEEK_SET)
extern int fflush(); /* #include <stdio.h> */
#define FFLUSH(stream) A_int_INT(fflush(A_FILEPTR_fileptr(stream)))

#define ESBAOSF_fflush FFLUSH
#include <unistd.h>
#define UNLINK(path) A_int_INT(unlink(A_VC_charptr(path)))

#define FSBAOSF_unlink UNLINK
#include <stdio.h>
#define RENAME(old,new) A_int_INT(rename(A_VC_charptr(old),A_VC_charptr(new)))

#define GSBAOSF_rename RENAME
#include <stdlib.h>

#define HSBAOSF_free free
#include <stdio.h>
#define FILENO(stream) A_int_INT(fileno(A_FILEPTR_fileptr(stream)))

#define ISBAOSF_fileno FILENO
#include <sys/stat.h>
#include <unistd.h>
#define FSTAT(fildes,buf) A_int_INT(fstat(A_INT_int(fildes),(buf)))

#define JSBAOSF_fstat FSTAT
#include <sys/stat.h>
#define STAT(path,buf) A_int_INT(stat(A_VC_charptr(path),(buf)))

#define KSBAOSF_stat STAT
#include <sys/types.h>
#include <dirent.h>
#define OPENDIR(dirname) A_dirptr_DIRPTR(opendir(A_VC_charptr(dirname)))

#define LSBAOSF_opendir OPENDIR
#include <sys/types.h>
#include <dirent.h>
#define CLOSEDIR(dirp) A_int_INT(closedir(A_DIRPTR_dirptr(dirp)))

#define MSBAOSF_closedir CLOSEDIR
#include <sys/types.h>
#include <dirent.h>
A_STATIC char * A_readdir(dir) DIR *dir;
{ struct dirent *d =  readdir(dir);
  if( d == (struct dirent *)NULL ) return (char *)NULL;
  return d->d_name;
}
#define READDIR(dirp) (void *)(A_readdir(A_DIRPTR_dirptr(dirp)))

#define NSBAOSF_readdir READDIR
#include <unistd.h>
#define TTYNAME(fildes) ((void *)ttyname(A_INT_int(fildes)))

#define OSBAOSF_ttyname TTYNAME
#include <errno.h>

#define PSBAOSF_eacces EACCES
#include <errno.h>

#define QSBAOSF_enoent ENOENT
#include <errno.h>

#define RSBAOSF_enotdir ENOTDIR
A68_111 * SSBAOSF_nil_file;
A68_111 * TSBAOSF_stdin;
A68_111 * USBAOSF_stdout;
A68_111 * VSBAOSF_stderr;
static A68_112  WSBAOSF_aa;
static A68_77   XSBAOSF = {"r\0\0\000"}; 
A68_112  ATBAOSF_read_access;
static A68_77   BTBAOSF = {"w\0\0\000"}; 
A68_112  ETBAOSF_write_access;
static A68_77   FTBAOSF = {"a\0\0\000"}; 
A68_112  ITBAOSF_append_access;
static A68_77   JTBAOSF = {"r+\0\000"}; 
A68_112  MTBAOSF_update_access;
static A68_77   NTBAOSF = {"w+\0\000"}; 
A68_112  QTBAOSF_update_truncate_access;
static A68_77   RTBAOSF = {"a+\0\000"}; 
A68_112  UTBAOSF_update_append_access;
static A68_114  LUBAOSF_tt;
A68_114  OUBAOSF_io_ok;
A68_114  RUBAOSF_io_eof;
A68_114  UUBAOSF_io_error;
A68_114  XUBAOSF_io_no_newline;
#define GVBAOSF_newline_char '\012'
#define HVBAOSF_null_char '\000'
static A68_117   KVBAOSF = {""}; 
A_GISVEC(A68_VC ,MVBAOSF,KVBAOSF,0)
static A68_125   OYBAOSF = {"get_file_position"}; 
A_GISVEC(A68_VC ,PYBAOSF,OYBAOSF,17)
static A68_125   TYBAOSF = {"get_file_position"}; 
A_GISVEC(A68_VC ,UYBAOSF,TYBAOSF,17)
static A68_129   UZBAOSF = {"rename_file"}; 
A_GISVEC(A68_VC ,VZBAOSF,UZBAOSF,11)
A68_130 * YZBAOSF_nil_file_details;
A_STATIC struct stat statbuffer;

#define ZZBAOSF_statbuf statbuffer
static A68_134   KACAOSF = {"get_file_details:  'fstat' failed on file parameter"}; 
A_GISVEC(A68_VC ,LACAOSF,KACAOSF,51)
static A68_135   SACAOSF = {"get_file_details:  search permission is denied for filename \""}; 
A_GISVEC(A68_VC ,TACAOSF,SACAOSF,61)
static A68_137   ABCAOSF = {"get_file_details:  'stat' failed on \""}; 
A_GISVEC(A68_VC ,BBCAOSF,ABCAOSF,37)
#include <stdio.h>
#define STDIN (*(A_fileptr_FILEPTR(stdin)))

#define RCCAOSF_stdiostdin STDIN
#include <stdio.h>
#define STDOUT (*(A_fileptr_FILEPTR(stdout)))

#define SCCAOSF_stdiostdout STDOUT
#include <stdio.h>
#define STDERR (*(A_fileptr_FILEPTR(stderr)))

#define TCCAOSF_stdiostderr STDERR
static A68_142   VCCAOSF = {"<stdin>"}; 
A_GISVEC(A68_VC ,WCCAOSF,VCCAOSF,7)
static A68_143   ADCAOSF = {"<stdout>"}; 
A_GISVEC(A68_VC ,BDCAOSF,ADCAOSF,8)
static A68_143   FDCAOSF = {"<stderr>"}; 
A_GISVEC(A68_VC ,GDCAOSF,FDCAOSF,8)

A_STATIC A68_BOOL  XTBAOSF_(A68_112  A, A68_112  B);

A_STATIC A68_BOOL  FUBAOSF_(A68_112  A, A68_112  B);

A68_BOOL  AVBAOSF_(A68_114  A, A68_114  B);

A68_BOOL  EVBAOSF_(A68_114  A, A68_114  B);

A68_VOID  JVBAOSF_file_name(A68_111 * File, A68_VC  *ReturnedValue);

A68_111 * QVBAOSF_open_file(A68_VC  Name, A68_112  Access, A68_53  Msg);

A68_VOID  IWBAOSF_close_file(A68_111 * File, A68_53  Msg);

A68_VOID  SWBAOSF_read_buffer(A68_111 * File, A68_VC  Buffer, A68_INT * Charsread, A68_53  Msg, A68_114  *ReturnedValue);

A68_VOID  DXBAOSF_read_line(A68_111 * File, A68_VC  Buffer, A68_INT * Charsread, A68_53  Msg, A68_114  *ReturnedValue);

A68_VOID  UXBAOSF_write_buffer(A68_111 * File, A68_VC  Buffer, A68_53  Msg, A68_114  *ReturnedValue);

A68_VOID  EYBAOSF_set_file_position(A68_111 * File, A68_LINT  Byteoffset, A68_53  Msg, A68_114  *ReturnedValue);

A68_VOID  NYBAOSF_get_file_position(A68_111 * File, A68_LINT * Byteoffset, A68_53  Msg, A68_114  *ReturnedValue);

A68_VOID  YYBAOSF_update_disk(A68_111 * File, A68_53  Msg, A68_114  *ReturnedValue);

A68_VOID  GZBAOSF_delete_file(A68_VC  Filename, A68_53  Msg, A68_114  *ReturnedValue);

A68_VOID  PZBAOSF_rename_file(A68_VC  Oldname, A68_VC  Newname, A68_53  Msg, A68_114  *ReturnedValue);

A_STATIC A68_130 * BACAOSF_(A68_130 * F);

A68_130 * FACAOSF_get_file_details(A68_132  File, A68_53  Msg);

A68_BOOL  JBCAOSF_is_terminal(A68_111 * F);

A68_BITS * NBCAOSF_open_directory(A68_VC  Name, A68_53  Msg);

A68_VOID  WBCAOSF_close_directory(A68_BITS * D, A68_53  Msg);

A68_VOID  CCCAOSF_get_next_dir_entry(A68_BITS * D, A68_53  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QCCAOSF_init_osfiles(void);

A_STATIC A68_BOOL  XTBAOSF_(A68_112  A, A68_112  B)
{ 
A68_BOOL  YTBAOSF;  /* clause result */
A68_VC  ZTBAOSF;  /* OPERATORS - istruct -> vector */
A68_77  AUBAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  BUBAOSF;  /* OPERATORS - istruct -> vector */
A68_77  CUBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(=);
AUBAOSF = A.Access ;
CUBAOSF = B.Access ;
YTBAOSF = A_VC_EQ(A_HISVEC(ZTBAOSF,AUBAOSF,4,A68_CHAR ),A_HISVEC(BUBAOSF,CUBAOSF,4,A68_CHAR ));
A_PROC_EXIT(=);
return( YTBAOSF );
} 
#undef NL

A_STATIC A68_BOOL  FUBAOSF_(A68_112  A, A68_112  B)
{ 
A68_BOOL  GUBAOSF;  /* clause result */
A68_VC  HUBAOSF;  /* OPERATORS - istruct -> vector */
A68_77  IUBAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  JUBAOSF;  /* OPERATORS - istruct -> vector */
A68_77  KUBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(/=);
IUBAOSF = A.Access ;
KUBAOSF = B.Access ;
GUBAOSF = A_VC_EQ(A_HISVEC(HUBAOSF,IUBAOSF,4,A68_CHAR ),A_HISVEC(JUBAOSF,KUBAOSF,4,A68_CHAR ));
A_PROC_EXIT(/=);
return( GUBAOSF );
} 
#undef NL

A68_BOOL  AVBAOSF_(A68_114  A, A68_114  B)
{ 
A68_BOOL  BVBAOSF;  /* clause result */
A_PROC_ENTRY(=);
BVBAOSF = (A.Status==B.Status);
A_PROC_EXIT(=);
return( BVBAOSF );
} 
#undef NL

A68_BOOL  EVBAOSF_(A68_114  A, A68_114  B)
{ 
A68_BOOL  FVBAOSF;  /* clause result */
A_PROC_ENTRY(/=);
FVBAOSF = (A.Status!=B.Status);
A_PROC_EXIT(/=);
return( FVBAOSF );
} 
#undef NL

A68_VOID  JVBAOSF_file_name(A68_111 * File, A68_VC  *ReturnedValue)
{ 
A68_VC  LVBAOSF;  /* clause result */
A_PROC_ENTRY(file_name);
 /* line 266: */
if ( (File==SSBAOSF_nil_file) )
{ 
LVBAOSF = MVBAOSF;
} 
else
{ 
LVBAOSF = (*(&(File->Name)));
} 
A_PROC_EXIT(file_name);
*ReturnedValue = (LVBAOSF);
return;
} 
#undef NL
 /* line 274: */
 /* line 275: */

A68_111 * QVBAOSF_open_file(A68_VC  Name, A68_112  Access, A68_53  Msg)
{ 
A68_BITS * UVBAOSF;  /* clause result */
A68_VC  VVBAOSF;  /* OPERATORS - istruct -> vector */
A68_77  WVBAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  XVBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BITS * YVBAOSF_stdiofile;
A68_119  ZVBAOSF;  /* collateral clause result */
A68_VC  AWBAOSF;  /* avoid structure result */
A68_51  BWBAOSF;  /* OPERATORS - istruct -> vector */
A68_111  CWBAOSF;  /* collateral clause result */
A68_VC  DWBAOSF;  /* avoid structure result */
A68_111 * EWBAOSF;  /* clause result */
A68_111 * FWBAOSF;  /* YIELD */
A_PROC_ENTRY(open_file);
 /* line 276: */
 /* line 277: */
{ 
{ 
RCBAOSF_errno = 0;
WVBAOSF = Access.Access ;
UVBAOSF = URBAOSF_fopen(A_VC_PLUS(Name,A_HVEC(XVBAOSF,'\000',A68_CHAR )), A_HISVEC(VVBAOSF,WVBAOSF,4,A68_CHAR ));
} 
YVBAOSF_stdiofile = UVBAOSF;
 /* line 279: */
 /* line 280: */
 /* line 281: */
 /* line 282: */
if ( (YVBAOSF_stdiofile==RRBAOSF_null_cfileptr) )
{ 
ZVBAOSF.data[0] = Name;
VHBAOSF_errnotext(  &AWBAOSF );
ZVBAOSF.data[1] = AWBAOSF;
SEBAOSF_osifmessage(2, A_HISVEC(BWBAOSF,ZVBAOSF,2,A68_VC ), Msg);
 /* line 283: */
 /* line 284: */
goto TVBAOSF_fault;
} 
 /* line 286: */
ZCAAOSF_makervc( Name, &DWBAOSF );
CWBAOSF.Name = DWBAOSF;
 /* line 287: */
CWBAOSF.Stdiofile = YVBAOSF_stdiofile;
 /* line 288: */
FWBAOSF = A_HEAP(A68_111 ) ;
(*FWBAOSF) = CWBAOSF ;
EWBAOSF = FWBAOSF;
goto RVBAOSF;
TVBAOSF_fault:
 /* line 290: */
EWBAOSF = SSBAOSF_nil_file;
RVBAOSF: ;
} 
A_PROC_EXIT(open_file);
return( EWBAOSF );
} 
#undef NL
 /* line 299: */

A68_VOID  IWBAOSF_close_file(A68_111 * File, A68_53  Msg)
{ 
A68_51  JWBAOSF;  /* OPERATORS - vacuum */
A68_BOOL  KWBAOSF;  /* clause result */
A68_119  LWBAOSF;  /* collateral clause result */
A68_VC  MWBAOSF;  /* avoid structure result */
A68_51  NWBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(close_file);
 /* line 300: */
 /* line 301: */
 /* line 302: */
 /* line 303: */
if ( (File==SSBAOSF_nil_file) )
{ 
 /* line 304: */
 /* line 305: */
SEBAOSF_osifmessage(12, A_VVAC(JWBAOSF), Msg);
} 
else
{ 
RCBAOSF_errno = 0;
 /* line 306: */
 /* line 307: */
 /* line 308: */
KWBAOSF = (VRBAOSF_fclose((*(&(File->Stdiofile))))!=0);
if ( KWBAOSF )
{ 
LWBAOSF.data[0] = (*(&(File->Name)));
VHBAOSF_errnotext(  &MWBAOSF );
LWBAOSF.data[1] = MWBAOSF;
 /* line 309: */
SEBAOSF_osifmessage(11, A_HISVEC(NWBAOSF,LWBAOSF,2,A68_VC ), Msg);
} 
} 
A_PROC_EXIT(close_file);
return;
} 
#undef NL
 /* line 321: */
 /* line 322: */
 /* line 324: */

A68_VOID  SWBAOSF_read_buffer(A68_111 * File, A68_VC  Buffer, A68_INT * Charsread, A68_53  Msg, A68_114  *ReturnedValue)
{ 
A68_51  TWBAOSF;  /* OPERATORS - vacuum */
A68_114  UWBAOSF;  /* clause result */
A68_BOOL  VWBAOSF;  /* clause result */
A68_119  WWBAOSF;  /* collateral clause result */
A68_VC  XWBAOSF;  /* avoid structure result */
A68_51  YWBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(read_buffer);
 /* line 325: */
 /* line 326: */
 /* line 327: */
 /* line 328: */
if ( (File==SSBAOSF_nil_file) )
{ 
SEBAOSF_osifmessage(22, A_VVAC(TWBAOSF), Msg);
 /* line 329: */
 /* line 330: */
 /* line 331: */
UWBAOSF = UUBAOSF_io_error;
} 
else
{ 
RCBAOSF_errno = 0;
 /* line 332: */
(*Charsread) = WRBAOSF_fread(Buffer, 1, Buffer.upb, (*(&(File->Stdiofile))));
 /* line 333: */
 /* line 334: */
 /* line 336: */
VWBAOSF = ((*Charsread)==Buffer.upb);
if ( VWBAOSF )
{ 
 /* line 337: */
UWBAOSF = OUBAOSF_io_ok;
} 
else
{ 
 /* line 338: */
 /* line 340: */
if ( (XRBAOSF_ferror((*(&(File->Stdiofile))))==0) )
{ 
 /* line 341: */
UWBAOSF = RUBAOSF_io_eof;
} 
else
{ 
WWBAOSF.data[0] = (*(&(File->Name)));
VHBAOSF_errnotext(  &XWBAOSF );
WWBAOSF.data[1] = XWBAOSF;
SEBAOSF_osifmessage(21, A_HISVEC(YWBAOSF,WWBAOSF,2,A68_VC ), Msg);
 /* line 342: */
 /* line 343: */
UWBAOSF = UUBAOSF_io_error;
} 
} 
} 
A_PROC_EXIT(read_buffer);
*ReturnedValue = (UWBAOSF);
return;
} 
#undef NL
 /* line 357: */
 /* line 358: */
 /* line 360: */

A68_VOID  DXBAOSF_read_line(A68_111 * File, A68_VC  Buffer, A68_INT * Charsread, A68_53  Msg, A68_114  *ReturnedValue)
{ 
A68_51  EXBAOSF;  /* OPERATORS - vacuum */
A68_114  FXBAOSF;  /* clause result */
A68_31 * GXBAOSF_fgetsresult;
A68_BOOL  HXBAOSF;  /* clause result */
A68_119  IXBAOSF;  /* collateral clause result */
A68_VC  JXBAOSF;  /* avoid structure result */
A68_51  KXBAOSF;  /* OPERATORS - istruct -> vector */
A68_INT  LXBAOSF_ind;
A68_CHAR * MXBAOSF_c;
A68_INT  NXBAOSF;  /* forall loop counter */
A68_INT  OXBAOSF_ind;
A68_CHAR * PXBAOSF_c;
A68_INT  QXBAOSF;  /* forall loop counter */
A_PROC_ENTRY(read_line);
 /* line 361: */
 /* line 362: */
 /* line 363: */
 /* line 364: */
if ( (File==SSBAOSF_nil_file) )
{ 
SEBAOSF_osifmessage(32, A_VVAC(EXBAOSF), Msg);
 /* line 365: */
 /* line 366: */
 /* line 367: */
FXBAOSF = UUBAOSF_io_error;
} 
else
{ 
{ 
RCBAOSF_errno = 0;
 /* line 368: */
GXBAOSF_fgetsresult = ZRBAOSF_fgets(Buffer, Buffer.upb, (*(&(File->Stdiofile))));
 /* line 369: */
 /* line 370: */
 /* line 371: */
HXBAOSF = (XRBAOSF_ferror((*(&(File->Stdiofile))))!=0);
if ( HXBAOSF )
{ 
IXBAOSF.data[0] = (*(&(File->Name)));
VHBAOSF_errnotext(  &JXBAOSF );
IXBAOSF.data[1] = JXBAOSF;
SEBAOSF_osifmessage(31, A_HISVEC(KXBAOSF,IXBAOSF,2,A68_VC ), Msg);
 /* line 372: */
 /* line 373: */
 /* line 374: */
FXBAOSF = UUBAOSF_io_error;
} 
else
{ 
 /* line 375: */
 /* line 376: */
if ( (GXBAOSF_fgetsresult==(A68_31 *)A68_NIL) )
{ 
(*Charsread) = 0;
 /* line 377: */
 /* line 378: */
 /* line 379: */
FXBAOSF = RUBAOSF_io_eof;
} 
else
{ 
 /* line 380: */
 /* line 382: */
if ( (YRBAOSF_feof((*(&(File->Stdiofile))))!=0) )
{ 
LXBAOSF_ind = 0;
 /* line 383: */
NXBAOSF = Buffer.upb -1;
MXBAOSF_c = Buffer.data;
for (;NXBAOSF-- >= 0;
(MXBAOSF_c++
) )
{
if ( !(((*MXBAOSF_c)!=HVBAOSF_null_char)) ) break;
LXBAOSF_ind+=1;
}
 /* line 384: */
(*Charsread) = LXBAOSF_ind;
 /* line 385: */
 /* line 386: */
 /* line 388: */
FXBAOSF = OUBAOSF_io_ok;
} 
else
{ 
OXBAOSF_ind = 0;
 /* line 389: */
QXBAOSF = Buffer.upb -1;
PXBAOSF_c = Buffer.data;
for (;QXBAOSF-- >= 0;
(PXBAOSF_c++
) )
{
if ( !(((*PXBAOSF_c)!=GVBAOSF_newline_char)) ) break;
OXBAOSF_ind+=1;
}
 /* line 390: */
 /* line 391: */
if ( (OXBAOSF_ind==Buffer.upb) )
{ 
(*Charsread) = (OXBAOSF_ind-1);
 /* line 392: */
 /* line 393: */
FXBAOSF = XUBAOSF_io_no_newline;
} 
else
{ 
(*Charsread) = OXBAOSF_ind;
 /* line 394: */
 /* line 395: */
 /* line 396: */
FXBAOSF = OUBAOSF_io_ok;
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(read_line);
*ReturnedValue = (FXBAOSF);
return;
} 
#undef NL
 /* line 405: */
 /* line 407: */

A68_VOID  UXBAOSF_write_buffer(A68_111 * File, A68_VC  Buffer, A68_53  Msg, A68_114  *ReturnedValue)
{ 
A68_51  VXBAOSF;  /* OPERATORS - vacuum */
A68_114  WXBAOSF;  /* clause result */
A68_BOOL  XXBAOSF;  /* clause result */
A68_119  YXBAOSF;  /* collateral clause result */
A68_VC  ZXBAOSF;  /* avoid structure result */
A68_51  AYBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(write_buffer);
 /* line 408: */
 /* line 409: */
 /* line 410: */
 /* line 411: */
if ( (File==SSBAOSF_nil_file) )
{ 
SEBAOSF_osifmessage(42, A_VVAC(VXBAOSF), Msg);
 /* line 412: */
 /* line 413: */
 /* line 414: */
WXBAOSF = UUBAOSF_io_error;
} 
else
{ 
 /* line 415: */
 /* line 417: */
if ( (Buffer.upb==0) )
{ 
 /* line 418: */
WXBAOSF = OUBAOSF_io_ok;
} 
else
{ 
RCBAOSF_errno = 0;
 /* line 419: */
 /* line 420: */
 /* line 422: */
XXBAOSF = (ASBAOSF_fwrite(Buffer, 1, Buffer.upb, (*(&(File->Stdiofile))))==Buffer.upb);
if ( XXBAOSF )
{ 
 /* line 423: */
WXBAOSF = OUBAOSF_io_ok;
} 
else
{ 
YXBAOSF.data[0] = (*(&(File->Name)));
VHBAOSF_errnotext(  &ZXBAOSF );
YXBAOSF.data[1] = ZXBAOSF;
SEBAOSF_osifmessage(41, A_HISVEC(AYBAOSF,YXBAOSF,2,A68_VC ), Msg);
 /* line 424: */
 /* line 425: */
WXBAOSF = UUBAOSF_io_error;
} 
} 
} 
A_PROC_EXIT(write_buffer);
*ReturnedValue = (WXBAOSF);
return;
} 
#undef NL
 /* line 434: */
 /* line 436: */

A68_VOID  EYBAOSF_set_file_position(A68_111 * File, A68_LINT  Byteoffset, A68_53  Msg, A68_114  *ReturnedValue)
{ 
A68_51  FYBAOSF;  /* OPERATORS - vacuum */
A68_114  GYBAOSF;  /* clause result */
A68_119  HYBAOSF;  /* collateral clause result */
A68_VC  IYBAOSF;  /* avoid structure result */
A68_51  JYBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(set_file_position);
 /* line 437: */
 /* line 438: */
 /* line 439: */
 /* line 440: */
if ( (File==SSBAOSF_nil_file) )
{ 
SEBAOSF_osifmessage(52, A_VVAC(FYBAOSF), Msg);
 /* line 441: */
 /* line 442: */
 /* line 443: */
GYBAOSF = UUBAOSF_io_error;
} 
else
{ 
 /* line 444: */
 /* line 446: */
if ( (BSBAOSF_fseek((*(&(File->Stdiofile))), Byteoffset, DSBAOSF_seek_set)==0) )
{ 
 /* line 447: */
GYBAOSF = OUBAOSF_io_ok;
} 
else
{ 
HYBAOSF.data[0] = (*(&(File->Name)));
VHBAOSF_errnotext(  &IYBAOSF );
HYBAOSF.data[1] = IYBAOSF;
SEBAOSF_osifmessage(51, A_HISVEC(JYBAOSF,HYBAOSF,2,A68_VC ), Msg);
 /* line 448: */
 /* line 449: */
GYBAOSF = UUBAOSF_io_error;
} 
} 
A_PROC_EXIT(set_file_position);
*ReturnedValue = (GYBAOSF);
return;
} 
#undef NL
 /* line 453: */
 /* line 455: */

A68_VOID  NYBAOSF_get_file_position(A68_111 * File, A68_LINT * Byteoffset, A68_53  Msg, A68_114  *ReturnedValue)
{ 
A68_51  QYBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_114  RYBAOSF;  /* clause result */
A68_BOOL  SYBAOSF;  /* clause result */
A68_51  VYBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(get_file_position);
 /* line 456: */
 /* line 457: */
 /* line 458: */
 /* line 459: */
if ( (File==SSBAOSF_nil_file) )
{ 
SEBAOSF_osifmessage(99, A_HVEC(QYBAOSF,PYBAOSF,A68_VC ), Msg);
 /* line 460: */
 /* line 461: */
 /* line 462: */
RYBAOSF = UUBAOSF_io_error;
} 
else
{ 
(*Byteoffset) = CSBAOSF_ftell((*(&(File->Stdiofile))));
 /* line 463: */
 /* line 464: */
 /* line 466: */
SYBAOSF = ((*Byteoffset)!=(A68_LINT )(-1));
if ( SYBAOSF )
{ 
 /* line 467: */
RYBAOSF = OUBAOSF_io_ok;
} 
else
{ 
SEBAOSF_osifmessage(99, A_HVEC(VYBAOSF,UYBAOSF,A68_VC ), Msg);
 /* line 468: */
 /* line 469: */
RYBAOSF = UUBAOSF_io_error;
} 
} 
A_PROC_EXIT(get_file_position);
*ReturnedValue = (RYBAOSF);
return;
} 
#undef NL
 /* line 479: */

A68_VOID  YYBAOSF_update_disk(A68_111 * File, A68_53  Msg, A68_114  *ReturnedValue)
{ 
A68_51  ZYBAOSF;  /* OPERATORS - vacuum */
A68_114  AZBAOSF;  /* clause result */
A68_119  BZBAOSF;  /* collateral clause result */
A68_VC  CZBAOSF;  /* avoid structure result */
A68_51  DZBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(update_disk);
 /* line 480: */
 /* line 481: */
 /* line 482: */
 /* line 483: */
if ( (File==SSBAOSF_nil_file) )
{ 
SEBAOSF_osifmessage(62, A_VVAC(ZYBAOSF), Msg);
 /* line 484: */
 /* line 485: */
 /* line 486: */
AZBAOSF = UUBAOSF_io_error;
} 
else
{ 
 /* line 487: */
 /* line 489: */
if ( (ESBAOSF_fflush((*(&(File->Stdiofile))))==0) )
{ 
 /* line 490: */
AZBAOSF = OUBAOSF_io_ok;
} 
else
{ 
BZBAOSF.data[0] = (*(&(File->Name)));
VHBAOSF_errnotext(  &CZBAOSF );
BZBAOSF.data[1] = CZBAOSF;
SEBAOSF_osifmessage(61, A_HISVEC(DZBAOSF,BZBAOSF,2,A68_VC ), Msg);
 /* line 491: */
 /* line 492: */
AZBAOSF = UUBAOSF_io_error;
} 
} 
A_PROC_EXIT(update_disk);
*ReturnedValue = (AZBAOSF);
return;
} 
#undef NL
 /* line 501: */

A68_VOID  GZBAOSF_delete_file(A68_VC  Filename, A68_53  Msg, A68_114  *ReturnedValue)
{ 
A68_VC  HZBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_114  IZBAOSF;  /* clause result */
A68_119  JZBAOSF;  /* collateral clause result */
A68_VC  KZBAOSF;  /* avoid structure result */
A68_51  LZBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(delete_file);
 /* line 502: */
 /* line 503: */
 /* line 504: */
 /* line 506: */
if ( (FSBAOSF_unlink(A_VC_PLUS(Filename,A_HVEC(HZBAOSF,'\000',A68_CHAR )))==0) )
{ 
 /* line 507: */
IZBAOSF = OUBAOSF_io_ok;
} 
else
{ 
JZBAOSF.data[0] = Filename;
VHBAOSF_errnotext(  &KZBAOSF );
JZBAOSF.data[1] = KZBAOSF;
SEBAOSF_osifmessage(71, A_HISVEC(LZBAOSF,JZBAOSF,2,A68_VC ), Msg);
 /* line 508: */
 /* line 509: */
IZBAOSF = UUBAOSF_io_error;
} 
A_PROC_EXIT(delete_file);
*ReturnedValue = (IZBAOSF);
return;
} 
#undef NL
 /* line 517: */
 /* line 519: */

A68_VOID  PZBAOSF_rename_file(A68_VC  Oldname, A68_VC  Newname, A68_53  Msg, A68_114  *ReturnedValue)
{ 
A68_VC  QZBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RZBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_114  SZBAOSF;  /* clause result */
A68_119  TZBAOSF;  /* collateral clause result */
A68_VC  WZBAOSF;  /* avoid structure result */
A68_51  XZBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(rename_file);
 /* line 520: */
 /* line 521: */
 /* line 522: */
 /* line 524: */
if ( (GSBAOSF_rename(A_VC_PLUS(Oldname,A_HVEC(RZBAOSF,'\000',A68_CHAR )), A_VC_PLUS(Newname,A_HVEC(QZBAOSF,'\000',A68_CHAR )))==0) )
{ 
 /* line 525: */
SZBAOSF = OUBAOSF_io_ok;
} 
else
{ 
TZBAOSF.data[0] = VZBAOSF;
VHBAOSF_errnotext(  &WZBAOSF );
TZBAOSF.data[1] = WZBAOSF;
SEBAOSF_osifmessage(99, A_HISVEC(XZBAOSF,TZBAOSF,2,A68_VC ), Msg);
 /* line 526: */
 /* line 527: */
SZBAOSF = UUBAOSF_io_error;
} 
A_PROC_EXIT(rename_file);
*ReturnedValue = (SZBAOSF);
return;
} 
#undef NL

A_STATIC A68_130 * BACAOSF_(A68_130 * F)
{ 
A68_130 * CACAOSF;  /* clause result */
A_PROC_ENTRY(<<<);
 /* line 558: */
 /* line 559: */
{ 
 /* line 560: */
 /* line 561: */
 /* line 562: */
 /* line 563: */
 /* line 564: */
 /* line 565: */
 /* line 566: */
 /* line 567: */
 /* line 568: */
 /* line 569: */
#define f F
#define statbuf ZZBAOSF_statbuf
{f->Permissions = A_mode_t_SBITS(statbuf.st_mode);
f->Inode = A_ino_t_LBITS(statbuf.st_ino);
f->Device = A_dev_t_SINT(statbuf.st_dev);
f->Links = A_nlink_t_SINT(statbuf.st_nlink);
f->Owning_user = A_uid_t_SBITS(statbuf.st_uid);
f->Owning_group = A_gid_t_SBITS(statbuf.st_gid);
f->Size = A_off_t_LINT(statbuf.st_size);
f->Accessed = A_time_t_LINT(statbuf.st_atime);
f->Data_modified = A_time_t_LINT(statbuf.st_mtime);
f->Status_modified = A_time_t_LINT(statbuf.st_ctime);
}
#undef statbuf
#undef f
 /* line 570: */
 /* line 571: */
CACAOSF = F;
} 
A_PROC_EXIT(<<<);
return( CACAOSF );
} 
#undef NL
 /* line 574: */

A68_130 * FACAOSF_get_file_details(A68_132  File, A68_53  Msg)
{ 
A68_132  GACAOSF;  /* united object - for case conformity */
A68_111 * HACAOSF_f;
A68_130  IACAOSF_details;
A68_BOOL  JACAOSF;  /* clause result */
A68_51  MACAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_130 * NACAOSF;  /* clause result */
A68_VC  OACAOSF_filename;
A68_130  PACAOSF_details;
A68_BOOL  QACAOSF;  /* clause result */
A68_136  RACAOSF;  /* collateral clause result */
A68_VC  UACAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_51  VACAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WACAOSF;  /* avoid structure result */
A68_51  XACAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  YACAOSF;  /* optbool result */
A68_136  ZACAOSF;  /* collateral clause result */
A68_VC  CBCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_51  DBCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  EBCAOSF;  /* avoid structure result */
A68_51  FBCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_51  GBCAOSF;  /* OPERATORS - vacuum */
A68_130 * HBCAOSF;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_file_details);
 /* line 575: */
 /* line 576: */
GACAOSF = File ;
switch ( GACAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF BITS)  */
HACAOSF_f = (GACAOSF.data.mode1);
 /* line 577: */
 /* line 578: */
{ 
 /* line 579: */
 /* line 580: */
 /* line 581: */
JACAOSF = (JSBAOSF_fstat(ISBAOSF_fileno((*(&(HACAOSF_f->Stdiofile)))), (&ZZBAOSF_statbuf))!=0);
if ( JACAOSF )
{ 
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(MACAOSF,LACAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(MACAOSF,LACAOSF,A68_VC ),(Msg).nonlocals));
 /* line 582: */
 /* line 583: */
 /* line 585: */
NACAOSF = YZBAOSF_nil_file_details;
} 
else
{ 
 /* line 586: */
NACAOSF = BACAOSF_((&IACAOSF_details));
} 
} 
break;
case 2: /* VECTOR [] CHAR */
OACAOSF_filename = (GACAOSF.data.mode2);
 /* line 587: */
 /* line 588: */
{ 
 /* line 589: */
 /* line 590: */
 /* line 591: */
QACAOSF = (KSBAOSF_stat(OACAOSF_filename, (&ZZBAOSF_statbuf))!=0);
if ( QACAOSF )
{ 
 /* line 592: */
if ( (RCBAOSF_errno==PSBAOSF_eacces) )
{ 
 /* line 593: */
RACAOSF.data[0] = TACAOSF;
RACAOSF.data[1] = OACAOSF_filename;
RACAOSF.data[2] = A_HVEC(UACAOSF,'\"',A68_CHAR );
 /* line 594: */
JDAAOSF_concat( A_HISVEC(VACAOSF,RACAOSF,3,A68_VC ), &WACAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(XACAOSF,WACAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(XACAOSF,WACAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
YACAOSF = (RCBAOSF_errno==QSBAOSF_enoent);
if ( ! YACAOSF )
{ /* line 595: */
YACAOSF = (RCBAOSF_errno==RSBAOSF_enotdir);
}
 /* line 596: */
if ( YACAOSF )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 597: */
ZACAOSF.data[0] = BBCAOSF;
ZACAOSF.data[1] = OACAOSF_filename;
ZACAOSF.data[2] = A_HVEC(CBCAOSF,'\"',A68_CHAR );
 /* line 598: */
JDAAOSF_concat( A_HISVEC(DBCAOSF,ZACAOSF,3,A68_VC ), &EBCAOSF );
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(FBCAOSF,EBCAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(FBCAOSF,EBCAOSF,A68_VC ),(Msg).nonlocals));
} 
} 
 /* line 599: */
 /* line 600: */
 /* line 602: */
NACAOSF = YZBAOSF_nil_file_details;
} 
else
{ 
 /* line 604: */
NACAOSF = BACAOSF_((&PACAOSF_details));
} 
} 
break;
default: 
SEBAOSF_osifmessage(0, A_VVAC(GBCAOSF), Msg);
 /* line 605: */
 /* line 606: */
NACAOSF = HBCAOSF;
break;
} 
A_PROC_EXIT(get_file_details);
return( NACAOSF );
} 
#undef NL

A68_BOOL  JBCAOSF_is_terminal(A68_111 * F)
{ 
A68_BOOL  KBCAOSF;  /* clause result */
A_PROC_ENTRY(is_terminal);
 /* line 615: */
 /* line 603: */
KBCAOSF = (OSBAOSF_ttyname(ISBAOSF_fileno((*(&(F->Stdiofile)))))!=(A68_31 *)A68_NIL);
A_PROC_EXIT(is_terminal);
return( KBCAOSF );
} 
#undef NL

A68_BITS * NBCAOSF_open_directory(A68_VC  Name, A68_53  Msg)
{ 
A68_VC  OBCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BITS * PBCAOSF_dir;
A68_119  QBCAOSF;  /* collateral clause result */
A68_VC  RBCAOSF;  /* avoid structure result */
A68_51  SBCAOSF;  /* OPERATORS - istruct -> vector */
A68_BITS * TBCAOSF;  /* clause result */
A_PROC_ENTRY(open_directory);
 /* line 628: */
 /* line 629: */
{ 
PBCAOSF_dir = LSBAOSF_opendir(A_VC_PLUS(Name,A_HVEC(OBCAOSF,'\000',A68_CHAR )));
 /* line 630: */
 /* line 631: */
 /* line 632: */
 /* line 633: */
if ( (PBCAOSF_dir==SRBAOSF_null_dirptr) )
{ 
QBCAOSF.data[0] = Name;
VHBAOSF_errnotext(  &RBCAOSF );
QBCAOSF.data[1] = RBCAOSF;
 /* line 634: */
SEBAOSF_osifmessage(100, A_HISVEC(SBCAOSF,QBCAOSF,2,A68_VC ), Msg);
} 
 /* line 635: */
 /* line 636: */
TBCAOSF = PBCAOSF_dir;
} 
A_PROC_EXIT(open_directory);
return( TBCAOSF );
} 
#undef NL

A68_VOID  WBCAOSF_close_directory(A68_BITS * D, A68_53  Msg)
{ 
A68_51  XBCAOSF;  /* OPERATORS - vacuum */
A68_VC  YBCAOSF;  /* avoid structure result */
A68_51  ZBCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(close_directory);
 /* line 639: */
 /* line 640: */
 /* line 641: */
 /* line 642: */
if ( (D==SRBAOSF_null_dirptr) )
{ 
 /* line 643: */
 /* line 644: */
SEBAOSF_osifmessage(100, A_VVAC(XBCAOSF), Msg);
} 
else
{ 
 /* line 645: */
 /* line 646: */
if ( (MSBAOSF_closedir(D)!=0) )
{ 
 /* line 647: */
VHBAOSF_errnotext(  &YBCAOSF );
SEBAOSF_osifmessage(100, A_HVEC(ZBCAOSF,YBCAOSF,A68_VC ), Msg);
} 
} 
A_PROC_EXIT(close_directory);
return;
} 
#undef NL

A68_VOID  CCCAOSF_get_next_dir_entry(A68_BITS * D, A68_53  Msg, A68_VC  *ReturnedValue)
{ 
A68_51  DCCAOSF;  /* OPERATORS - vacuum */
A68_VC  ECCAOSF;  /* clause result */
A68_VC  FCCAOSF;  /* OPERATORS - nil -> mode */
A68_VC  GCCAOSF;  /* avoid structure result */
A68_VC  HCCAOSF_entry;
A68_VC  ICCAOSF;  /* OPERATORS - nil -> mode */
A68_VC  JCCAOSF;  /* == */
A68_BOOL  KCCAOSF;  /* optbool result */
A68_BOOL  LCCAOSF;  /* clause result */
A68_VC  MCCAOSF;  /* avoid structure result */
A68_51  NCCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OCCAOSF;  /* OPERATORS - nil -> mode */
A68_VC  PCCAOSF;  /* avoid structure result */
A_PROC_ENTRY(get_next_dir_entry);
 /* line 650: */
 /* line 651: */
 /* line 652: */
if ( (D==SRBAOSF_null_dirptr) )
{ 
SEBAOSF_osifmessage(100, A_VVAC(DCCAOSF), Msg);
 /* line 653: */
 /* line 654: */
 /* line 655: */
ECCAOSF = A_VVAC(FCCAOSF);
} 
else
{ 
{ 
MAAAOSF_cstringtorvc( NSBAOSF_readdir(D), &GCCAOSF );
HCCAOSF_entry = GCCAOSF;
 /* line 656: */
JCCAOSF = A_VVAC(ICCAOSF) ;
KCCAOSF = A_VSTRUCTCOMP(HCCAOSF_entry,JCCAOSF);
if ( ! KCCAOSF )
{ /* line 657: */
KCCAOSF = (HCCAOSF_entry.upb==0);
}
 /* line 658: */
LCCAOSF = KCCAOSF;
if ( LCCAOSF )
{ 
VHBAOSF_errnotext(  &MCCAOSF );
SEBAOSF_osifmessage(100, A_HVEC(NCCAOSF,MCCAOSF,A68_VC ), Msg);
 /* line 659: */
 /* line 660: */
 /* line 662: */
ECCAOSF = A_VVAC(OCCAOSF);
} 
else
{ 
ZCAAOSF_makervc( HCCAOSF_entry, &PCCAOSF );
ECCAOSF = PCCAOSF;
} 
} 
} 
A_PROC_EXIT(get_next_dir_entry);
*ReturnedValue = (ECCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  QCCAOSF_init_osfiles(void)
{ 
A68_111  UCCAOSF;  /* collateral clause result */
A68_VC  XCCAOSF;  /* avoid structure result */
A68_111 * YCCAOSF;  /* YIELD */
A68_111  ZCCAOSF;  /* collateral clause result */
A68_VC  CDCAOSF;  /* avoid structure result */
A68_111 * DDCAOSF;  /* YIELD */
A68_111  EDCAOSF;  /* collateral clause result */
A68_VC  HDCAOSF;  /* avoid structure result */
A68_111 * IDCAOSF;  /* YIELD */
A_PROC_ENTRY(init_osfiles);
{ 
 /* line 676: */
 /* line 677: */
 /* line 679: */
 /* line 680: */
 /* line 681: */
 /* line 682: */
 /* line 684: */
 /* line 685: */
 /* line 686: */
 /* line 687: */
 /* line 689: */
ZCAAOSF_makervc( WCCAOSF, &XCCAOSF );
UCCAOSF.Name = XCCAOSF;
UCCAOSF.Stdiofile = (&RCCAOSF_stdiostdin);
YCCAOSF = A_HEAP(A68_111 ) ;
(*YCCAOSF) = UCCAOSF ;
TSBAOSF_stdin = YCCAOSF;
 /* line 690: */
ZCAAOSF_makervc( BDCAOSF, &CDCAOSF );
ZCCAOSF.Name = CDCAOSF;
ZCCAOSF.Stdiofile = (&SCCAOSF_stdiostdout);
DDCAOSF = A_HEAP(A68_111 ) ;
(*DDCAOSF) = ZCCAOSF ;
USBAOSF_stdout = DDCAOSF;
 /* line 691: */
ZCAAOSF_makervc( GDCAOSF, &HDCAOSF );
EDCAOSF.Name = HDCAOSF;
 /* line 692: */
EDCAOSF.Stdiofile = (&TCCAOSF_stdiostderr);
IDCAOSF = A_HEAP(A68_111 ) ;
(*IDCAOSF) = EDCAOSF ;
VSBAOSF_stderr = IDCAOSF;
} 
A_PROC_EXIT(init_osfiles);
return;
} 
#undef NL
 /* line 1: */
 /* line 5: */
void MRBAOSF(void)   /* initialise DECS osfiles */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","osfiles.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/usefulops.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/oserrors.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_77 * YSBAOSF;  /* YIELD */
A68_112  ZSBAOSF;  /* clause result */
A68_77 * CTBAOSF;  /* YIELD */
A68_112  DTBAOSF;  /* clause result */
A68_77 * GTBAOSF;  /* YIELD */
A68_112  HTBAOSF;  /* clause result */
A68_77 * KTBAOSF;  /* YIELD */
A68_112  LTBAOSF;  /* clause result */
A68_77 * OTBAOSF;  /* YIELD */
A68_112  PTBAOSF;  /* clause result */
A68_77 * STBAOSF;  /* YIELD */
A68_112  TTBAOSF;  /* clause result */
A68_INT * MUBAOSF;  /* YIELD */
A68_114  NUBAOSF;  /* clause result */
A68_INT * PUBAOSF;  /* YIELD */
A68_114  QUBAOSF;  /* clause result */
A68_INT * SUBAOSF;  /* YIELD */
A68_114  TUBAOSF;  /* clause result */
A68_INT * VUBAOSF;  /* YIELD */
A68_114  WUBAOSF;  /* clause result */
A68_39  JDCAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IKAAOSF();   /* USE usefulops */
MCBAOSF();   /* USE oserrors */
ZRAAOSF();   /* USE messageproc */
BAAAOSF();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osfiles.a68";
A_config.translation_time = "Wed May  5 17:38:58 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "LRBAOSF (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:58 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osfiles);
UEAALIB_a68config(LGAALIB_configinfo, QRBAOSF);
 /* line 63: */
 /* line 65: */
RRBAOSF_null_cfileptr = (A68_BITS *)A68_NIL;
 /* line 66: */
SRBAOSF_null_dirptr = (A68_BITS *)A68_NIL;
 /* line 67: */
 /* line 69: */
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 74: */
 /* line 75: */
 /* line 78: */
 /* line 79: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 97: */
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
 /* line 116: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 124: */
 /* line 126: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 135: */
 /* line 136: */
 /* line 137: */
 /* line 138: */
 /* line 140: */
 /* line 141: */
 /* line 142: */
 /* line 143: */
 /* line 145: */
 /* line 146: */
 /* line 147: */
 /* line 148: */
 /* line 150: */
 /* line 151: */
 /* line 152: */
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 159: */
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 164: */
 /* line 165: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
 /* line 175: */
 /* line 176: */
 /* line 178: */
 /* line 179: */
 /* line 180: */
 /* line 181: */
 /* line 182: */
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 187: */
 /* line 188: */
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
 /* line 195: */
 /* line 196: */
 /* line 197: */
 /* line 198: */
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 207: */
 /* line 212: */
 /* line 218: */
SSBAOSF_nil_file = (A68_111 *)A68_NIL;
 /* line 219: */
TSBAOSF_stdin = SSBAOSF_nil_file;
USBAOSF_stdout = SSBAOSF_nil_file;
VSBAOSF_stderr = SSBAOSF_nil_file;
 /* line 227: */
 /* line 228: */
 /* line 230: */
 /* line 231: */
{ 
YSBAOSF = (&((&WSBAOSF_aa)->Access)) ;
(*YSBAOSF) = XSBAOSF;
ZSBAOSF = WSBAOSF_aa;
} 
ATBAOSF_read_access = ZSBAOSF;
 /* line 232: */
{ 
CTBAOSF = (&((&WSBAOSF_aa)->Access)) ;
(*CTBAOSF) = BTBAOSF;
DTBAOSF = WSBAOSF_aa;
} 
ETBAOSF_write_access = DTBAOSF;
 /* line 233: */
{ 
GTBAOSF = (&((&WSBAOSF_aa)->Access)) ;
(*GTBAOSF) = FTBAOSF;
HTBAOSF = WSBAOSF_aa;
} 
ITBAOSF_append_access = HTBAOSF;
 /* line 234: */
{ 
KTBAOSF = (&((&WSBAOSF_aa)->Access)) ;
(*KTBAOSF) = JTBAOSF;
LTBAOSF = WSBAOSF_aa;
} 
MTBAOSF_update_access = LTBAOSF;
 /* line 235: */
{ 
OTBAOSF = (&((&WSBAOSF_aa)->Access)) ;
(*OTBAOSF) = NTBAOSF;
PTBAOSF = WSBAOSF_aa;
} 
QTBAOSF_update_truncate_access = PTBAOSF;
 /* line 236: */
{ 
STBAOSF = (&((&WSBAOSF_aa)->Access)) ;
(*STBAOSF) = RTBAOSF;
TTBAOSF = WSBAOSF_aa;
} 
UTBAOSF_update_append_access = TTBAOSF;
 /* line 238: */
 /* line 239: */
 /* line 243: */
 /* line 244: */
 /* line 247: */
 /* line 248: */
{ 
MUBAOSF = (&((&LUBAOSF_tt)->Status)) ;
(*MUBAOSF) = 1;
NUBAOSF = LUBAOSF_tt;
} 
OUBAOSF_io_ok = NUBAOSF;
 /* line 249: */
{ 
PUBAOSF = (&((&LUBAOSF_tt)->Status)) ;
(*PUBAOSF) = 2;
QUBAOSF = LUBAOSF_tt;
} 
RUBAOSF_io_eof = QUBAOSF;
 /* line 250: */
{ 
SUBAOSF = (&((&LUBAOSF_tt)->Status)) ;
(*SUBAOSF) = 3;
TUBAOSF = LUBAOSF_tt;
} 
UUBAOSF_io_error = TUBAOSF;
 /* line 251: */
{ 
VUBAOSF = (&((&LUBAOSF_tt)->Status)) ;
(*VUBAOSF) = 4;
WUBAOSF = LUBAOSF_tt;
} 
XUBAOSF_io_no_newline = WUBAOSF;
 /* line 253: */
 /* line 254: */
 /* line 258: */
 /* line 265: */
 /* line 272: */
 /* line 273: */
 /* line 296: */
 /* line 297: */
 /* line 319: */
 /* line 320: */
 /* line 355: */
 /* line 356: */
 /* line 403: */
 /* line 404: */
 /* line 432: */
 /* line 433: */
 /* line 451: */
 /* line 452: */
 /* line 476: */
 /* line 477: */
 /* line 498: */
 /* line 499: */
 /* line 515: */
 /* line 516: */
 /* line 538: */
 /* line 549: */
 /* line 551: */
YZBAOSF_nil_file_details = (A68_130 *)A68_NIL;
 /* line 553: */
 /* line 554: */
 /* line 555: */
 /* line 557: */
 /* line 573: */
 /* line 614: */
 /* line 627: */
 /* line 638: */
 /* line 649: */
 /* line 665: */
 /* line 666: */
 /* line 675: */
 /* line 694: */
 /* line 696: */
 /* line 714: */
JDCAOSF.fn.fn_global = QCCAOSF_init_osfiles;
JDCAOSF.nonlocals = A68_NIL;
ABAALIB_a68init(JDCAOSF);
A_PROC_EXIT(DECS osfiles);
} 
#undef NL
/* end of translation of osfiles.a68 */
