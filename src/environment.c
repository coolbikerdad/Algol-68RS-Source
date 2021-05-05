/* UNAME:GPIACTR */
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
struct A68t47 ;
struct A68t48 ;

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t47 ,struct A68t48 ),(struct A68t47 ,struct A68t48 ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(MODE47,MODE48) VOID */
struct A68t47{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t49 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t47  A68_47 ;    /* STRUCT(INT,REF MODE49,BITS)  */
A_VECTOR(A68_VC ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t51 ,A68t50);
typedef struct A68t50  A68_50 ;    /* VECTOR [] MODE51 */
struct A68t51{
struct A68t47  Msgno;
A68_VC  Text;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(MODE47,REF MODE26)  */
struct A68t49{
A68_VC  Name;
struct A68t50  Messages;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(REF MODE26,REF MODE50)  */
struct A68t52{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t52  A68_52 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t53{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t53  A68_53 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t54,(struct A68t53 ,struct A68t53 ),(struct A68t53 ,struct A68t53 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE53,MODE53) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t56);
typedef struct A68t56  A68_56 ;    /* STRUCT 4 CHAR */
struct A68t55{
struct A68t56  Access;
A_PAD_ISTRUCT(A68_56 ,PAD_4)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(MODE56)  */

A_PROCEDURE(A68_VOID ,A68t57,(struct A68t52 *,A68_VC *),(struct A68t52 *,A68_VC *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(REF MODE52) MODE26 */

A_PROCEDURE(struct A68t52 *,A68t58,(A68_VC ,struct A68t55 ,struct A68t46 ),(A68_VC ,struct A68t55 ,struct A68t46 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE26,MODE55,MODE46) REF MODE52 */

A_PROCEDURE(A68_VOID ,A68t59,(struct A68t52 *,struct A68t46 ),(struct A68t52 *,struct A68t46 ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(REF MODE52,MODE46) VOID */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t52 *,A68_VC ,A68_INT *,struct A68t46 ,struct A68t53 *),(struct A68t52 *,A68_VC ,A68_INT *,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(REF MODE52,REF MODE26,REF INT,MODE46) MODE53 */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t52 *,A68_VC ,struct A68t46 ,struct A68t53 *),(struct A68t52 *,A68_VC ,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE52,MODE26,MODE46) MODE53 */

A_PROCEDURE(A68_VOID ,A68t62,(struct A68t52 *,A68_LINT ,struct A68t46 ,struct A68t53 *),(struct A68t52 *,A68_LINT ,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t62  A68_62 ;    /* PROC(REF MODE52,LONG INT,MODE46) MODE53 */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t52 *,A68_LINT *,struct A68t46 ,struct A68t53 *),(struct A68t52 *,A68_LINT *,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE52,REF LONG INT,MODE46) MODE53 */

A_PROCEDURE(A68_VOID ,A68t64,(struct A68t52 *,struct A68t46 ,struct A68t53 *),(struct A68t52 *,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t64  A68_64 ;    /* PROC(REF MODE52,MODE46) MODE53 */

A_PROCEDURE(A68_VOID ,A68t65,(A68_VC ,struct A68t46 ,struct A68t53 *),(A68_VC ,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(MODE26,MODE46) MODE53 */

A_PROCEDURE(A68_VOID ,A68t66,(A68_VC ,A68_VC ,struct A68t46 ,struct A68t53 *),(A68_VC ,A68_VC ,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE26,MODE26,MODE46) MODE53 */
struct A68t67{
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
typedef struct A68t67  A68_67 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t69 ;

A_PROCEDURE(struct A68t67 *,A68t68,(struct A68t69 ,struct A68t46 ),(struct A68t69 ,struct A68t46 ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE69,MODE46) REF MODE67 */
struct A68t69 { A68_INT mode; union {
struct A68t52 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t69  A68_69 ;    /* UNION(REF MODE52,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t70,(struct A68t52 *),(struct A68t52 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE52) BOOL */

A_PROCEDURE(A68_BITS *,A68t71,(A68_VC ,struct A68t46 ),(A68_VC ,struct A68t46 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,MODE46) REF BITS */

A_PROCEDURE(A68_VOID ,A68t72,(A68_BITS *,struct A68t46 ),(A68_BITS *,struct A68t46 ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(REF BITS,MODE46) VOID */

A_PROCEDURE(A68_VOID ,A68t73,(A68_BITS *,struct A68t46 ,A68_VC *),(A68_BITS *,struct A68t46 ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(REF BITS,MODE46) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t74,(A68_VC *),(A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC MODE26 */

A_PROCEDURE(A68_LINT ,A68t75,(void),(void *));
typedef struct A68t75  A68_75 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t76,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t77,(A68_VC ,struct A68t46 ),(A68_VC ,struct A68t46 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE26,MODE46) INT */

A_PROCEDURE(A68_INT ,A68t78,(void),(void *));
typedef struct A68t78  A68_78 ;    /* PROC INT */
struct A68t79{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t79  A68_79 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC ,A68_VC ,struct A68t46 ,struct A68t79 *),(A68_VC ,A68_VC ,struct A68t46 ,struct A68t79 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE26,MODE26,MODE46) MODE79 */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t48 *),(struct A68t48 *,void *));
typedef struct A68t81  A68_81 ;    /* PROC MODE48 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_VC ,struct A68t46 ,struct A68t48 *),(A68_VC ,struct A68t46 ,struct A68t48 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26,MODE46) MODE48 */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t35 ,struct A68t46 ,struct A68t46 ),(struct A68t35 ,struct A68t46 ,struct A68t46 ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE35,MODE46,MODE46) VOID */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t35 ,struct A68t46 ),(struct A68t35 ,struct A68t46 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE35,MODE46) VOID */

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT ,struct A68t46 ,struct A68t46 *),(A68_INT ,struct A68t46 ,struct A68t46 *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT,MODE46) MODE46 */

A_PROCEDURE(A68_VOID ,A68t86,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(BITS) VOID */
struct A68t88 ;

A_PROCEDURE(A68_VOID ,A68t87,(struct A68t88 ),(struct A68t88 ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE88) VOID */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC ),(A68_VC ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE26) VOID */
struct A68t89{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t90,(A68_BOOL ,struct A68t89 *),(A68_BOOL ,struct A68t89 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(BOOL) MODE89 */
struct A68t92 ;

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t92 ,struct A68t46 ),(struct A68t92 ,struct A68t46 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE92,MODE46) VOID */
A_VECTOR(struct A68t89 ,A68t92);
typedef struct A68t92  A68_92 ;    /* VECTOR [] MODE89 */

A_PROCEDURE(A68_INT *,A68t93,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t94,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t95,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t96,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t48 ,A68_VC *),(struct A68t48 ,A68_VC *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE48) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t98,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t99,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t100,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(REF MODE26,CHAR) VOID */

A_PROCEDURE(struct A68t56 ,A68t101,(A68_INT ),(A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT) MODE56 */

A_PROCEDURE(A68_INT ,A68t102,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t103,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t104,(A68_VC ),(A68_VC ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t105,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t106,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t107,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t108,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t109,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t110,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t111,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t112,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t113,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF INT,MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,32,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 7 CHAR */
struct A68t115{
struct A68t116  Prefix;
A_PAD_ISTRUCT(A68_116 ,PAD_16)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_17)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_18)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_19)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_20)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_21)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE116,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t119 ,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] MODE119 */
A_VECTOR(struct A68t125 ,A68t124);
typedef struct A68t124  A68_124 ;    /* VECTOR [] MODE125 */
struct A68t125{
struct A68t114  N;
A_PAD_ISTRUCT(A68_114 ,PAD_22)
struct A68t114  F;
A_PAD_ISTRUCT(A68_114 ,PAD_23)
A68_INT  Level;
A_PAD_INT(PAD_24)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(MODE114,MODE114,INT)  */
struct A68t123 { A68_INT mode; union {
A68_VC  mode1;
struct A68t124  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t123  A68_123 ;    /* UNION(REF MODE26,REF MODE124)  */
struct A68t120{
struct A68t114  F;
A_PAD_ISTRUCT(A68_114 ,PAD_25)
A68_INT  No;
A_PAD_INT(PAD_26)
A68_INT  Nl;
A_PAD_INT(PAD_27)
A68_INT  Ng;
A_PAD_INT(PAD_28)
struct A68t123  U;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(MODE114,INT,INT,INT,MODE123)  */
A_VECTOR(struct A68t115 ,A68t121);
typedef struct A68t121  A68_121 ;    /* VECTOR [] MODE115 */
A_VECTOR(struct A68t116 ,A68t122);
typedef struct A68t122  A68_122 ;    /* VECTOR [] MODE116 */
struct A68t119{
struct A68t120  Xs;
struct A68t116  Ys;
A_PAD_ISTRUCT(A68_116 ,PAD_29)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_30)
struct A68t121  Keptinfo;
struct A68t122  Cnames;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(MODE120,MODE116,LONG INT,REF MODE121,REF MODE122)  */
struct A68t117{
struct A68t116  Uname;
A_PAD_ISTRUCT(A68_116 ,PAD_31)
struct A68t116  Lname;
A_PAD_ISTRUCT(A68_116 ,PAD_32)
struct A68t116  Gname;
A_PAD_ISTRUCT(A68_116 ,PAD_33)
struct A68t118  Specs;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(MODE116,MODE116,MODE116,REF MODE118)  */

A_PROCEDURE(A68_BOOL ,A68t126,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t127,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t129,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t131,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 61 CHAR */
struct A68t133{
A68_VC  Dir;
struct A68t133 * Next;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(REF MODE26,REF MODE133)  */
A_ROW(A68_BOOL ,A68t134,1);
typedef struct A68t134  A68_134 ;    /* [] BOOL */

A_PROCEDURE(A68_VOID ,A68t135,(A68_BOOL ,struct A68t134 *),(A68_BOOL ,struct A68t134 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(BOOL) MODE134 */
struct A68t136{
A68_INT  Cfile;
A_PAD_INT(PAD_34)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT)  */
struct A68t137{
A68_INT  Seedfile;
A_PAD_INT(PAD_35)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT)  */
struct A68t138 { A68_INT mode; union {
struct A68t136  mode1;
struct A68t137  mode2;
struct A68t116  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t138  A68_138 ;    /* UNION(MODE136,MODE137,MODE116,VOID)  */
A_ISTRUCT(A68_CHAR ,10,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t142);
typedef struct A68t142  A68_142 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ,A68_VC ,A68_INT ),(A68_INT ,A68_VC ,A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT,MODE26,INT) VOID */
A_ISTRUCT(A68_CHAR ,2,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t149);
typedef struct A68t149  A68_149 ;    /* STRUCT 26 CHAR */
A_ROW(A68_VC ,A68t150,1);
typedef struct A68t150  A68_150 ;    /* [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t151,(A68_INT ,struct A68t150 ,A68_INT ),(A68_INT ,struct A68t150 ,A68_INT ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(INT,MODE150,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t152,(A68_INT ,struct A68t150 ),(A68_INT ,struct A68t150 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(INT,MODE150) VOID */

A_PROCEDURE(A68_VOID ,A68t153,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t154,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE26,BOOL) VOID */
struct A68t155{
A68_VC  Modinfo_file;
struct A68t155 * Next;
};
typedef struct A68t155  A68_155 ;    /* STRUCT(REF MODE26,REF MODE155)  */
struct A68t156{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t156 * Next;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE156)  */
struct A68t157{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_36)
A68_VC  Sourcefile;
struct A68t116  Nameseed;
A_PAD_ISTRUCT(A68_116 ,PAD_37)
struct A68t138  Nameseedorigin;
struct A68t155 * Used_modules;
A68_VC  Commandline;
struct A68t156 * Environment;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE116,MODE138,REF MODE155,REF MODE26,REF MODE156)  */

A_PROCEDURE(A68_VOID ,A68t158,(A68_VC ),(A68_VC ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,5,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(struct A68t52 *,A68t163,(A68_VC ,struct A68t133 *,A68_VC *),(A68_VC ,struct A68t133 *,A68_VC *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE26,REF MODE133,REF REF MODE26) REF MODE52 */

A_PROCEDURE(A68_BITS ,A68t164,(void),(void *));
typedef struct A68t164  A68_164 ;    /* PROC BITS */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
extern A68_VOID  JGAALIB_show_a68config(struct A68t88 );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from ctrans_version --- */
extern A68_VC  SHAACTR_ctrans_version;
/* --- End of imports from ctrans_version --- */


/* --- Imports from message --- */
extern A68_VOID  KDHACTR_message(A68_INT ,A68_VC *);
extern A68_VOID  GPIACTR_initialisemessages(A68_BOOL );
/* --- End of imports from message --- */


/* --- Imports from moduletracer --- */
extern A68_BOOL  TCHACTR_settracelevel(A68_INT ,A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from incinstallation --- */
#define VDAACTR_maxid 32
#define WDAACTR_maxuname 7
/* --- End of imports from incinstallation --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
extern A68_BOOL  TQAAOSF_vcdectoint(A68_INT *,A68_VC );
/* --- End of imports from usefulops --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_46  RIBAOSF_ignore_msg;
extern A68_52 * USBAOSF_stdout;
extern A68_52 * VSBAOSF_stderr;
extern A68_52 * SSBAOSF_nil_file;
#define GVBAOSF_newline_char '\012'
extern A68_52 * QVBAOSF_open_file(A68_VC ,struct A68t55 ,struct A68t46 );
extern A68_VOID  UXBAOSF_write_buffer(struct A68t52 *,A68_VC ,struct A68t46 ,A68_53 *);
extern A68_55  ATBAOSF_read_access;
extern A68_VOID  EPBAOSF_get_working_directory(A68_VC *);
extern A68_VOID  QPBAOSF_get_env_var(A68_VC ,A68_VC *);
extern A68_LINT  VPBAOSF_get_time(void);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc = argc; A_argv = argv; A_envp = envp

#define DHCAOSF_prelude A_prelude
extern A68_VOID  RHCAOSF_get_args(A68_48 *);
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
extern void LHAACTR(void);   /* ctrans_version */
extern void DDHACTR(void);   /* message */
extern void BCHACTR(void);   /* moduletracer */
extern void ODAACTR(void);   /* incinstallation */
extern void IKAAOSF(void);   /* usefulops */
extern void CSCAOSF(void);   /* osif */
extern void BAAAOSF(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_132   KPIACTR = {"$Id: environment.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,LPIACTR,KPIACTR,61)
static A68_129  MPIACTR_anonymous;
static A68_VC  XPIACTR_nullstr;
static A68_VC  ZPIACTR_nilstr;
A68_BOOL  AQIACTR_verboseoption;
A68_BOOL  BQIACTR_lineoption;
A68_BOOL  CQIACTR_dotoption;
A68_BOOL  DQIACTR_quoteoption;
A68_BOOL  EQIACTR_skipoption;
A68_BOOL  FQIACTR_tildeoption;
A68_BOOL  GQIACTR_streamoption;
A68_BOOL  HQIACTR_streamoutoption;
A68_BOOL  IQIACTR_optbooloption;
A68_BOOL  JQIACTR_traceoption;
A68_BOOL  KQIACTR_keeplistoption;
static A68_BOOL  LQIACTR_portableoption;
A68_BOOL  MQIACTR_longlongoption;
A68_BOOL  NQIACTR_nostructresultoption;
A68_BOOL  OQIACTR_closuremarkoption;
A68_BOOL  PQIACTR_closureonstackoption;
A68_BOOL  QQIACTR_checkoption;
A68_BOOL  RQIACTR_oldalienoption;
A68_BOOL  SQIACTR_tempfileoption;
static A68_BOOL  TQIACTR_filename_expected;
#define UQIACTR_file_cstreams 1
#define VQIACTR_memory_cstreams 2
A68_INT  WQIACTR_cstream_policy;
A68_VC  XQIACTR_sourcefilename;
A68_VC  YQIACTR_basenamesourcefile;
A68_VC  ZQIACTR_sourcefilesuffix;
A68_VC  ARIACTR_seedfilename;
A68_VC  BRIACTR_current_directory;
A68_133 * CRIACTR_nil_dirlist;
A68_133 * DRIACTR_modinfo_dirlist;
A68_133 * ERIACTR_cfile_dirlist;
A68_133 * FRIACTR_library_directory;
A68_134  KRIACTR_stars;
static A68_BOOL * MRIACTR_star;
static A68_136  ORIACTR_fromcfile;
static A68_137  PRIACTR_fromseedfile;
A68_138  QRIACTR_uname_option;
A68_INT  SRIACTR_filenametruncate;
A68_INT  TRIACTR_tracelevel;
#define URIACTR_defaulttracelevel 2
#define VRIACTR_maxtracelevel 7
A68_INT  WRIACTR_debuglevel;
A68_INT  XRIACTR_linenumber;
#define YRIACTR_commentseverity 0
#define ZRIACTR_warningseverity 1
#define ASIACTR_recoverableerrorseverity 2
#define BSIACTR_errorseverity 3
#define CSIACTR_terminalerrorseverity 4
A68_INT  DSIACTR_greatestseverity;
static A68_INT  ESIACTR_comment_count;
static A68_INT  FSIACTR_warning_count;
static A68_INT  GSIACTR_error_count;
A68_88  MSIACTR_list;
static A68_139   TSIACTR = {"comment(s)"}; 
A_GISVEC(A68_VC ,VSIACTR,TSIACTR,10)
static A68_140   WSIACTR = {""}; 
A_GISVEC(A68_VC ,XSIACTR,WSIACTR,0)
static A68_139   YSIACTR = {"warning(s)"}; 
A_GISVEC(A68_VC ,ZSIACTR,YSIACTR,10)
static A68_140   ATIACTR = {""}; 
A_GISVEC(A68_VC ,BTIACTR,ATIACTR,0)
static A68_141   CTIACTR = {"error(s)"}; 
A_GISVEC(A68_VC ,DTIACTR,CTIACTR,8)
static A68_140   ETIACTR = {""}; 
A_GISVEC(A68_VC ,FTIACTR,ETIACTR,0)
static A68_142   HTIACTR = {"End of diagnostics: "}; 
static A68_143   ITIACTR = {" in compilation"}; 
A_GISVEC(A68_VC ,JTIACTR,HTIACTR,20)
A_GISVEC(A68_VC ,MTIACTR,ITIACTR,15)
static A68_116   TTIACTR = {", line "}; 
A_GISVEC(A68_VC ,VTIACTR,TTIACTR,7)
static A68_140   XTIACTR = {""}; 
A_GISVEC(A68_VC ,YTIACTR,XTIACTR,0)
static A68_145   ZTIACTR = {": "}; 
static A68_141   AUIACTR = {"COMMENT "}; 
A_GISVEC(A68_VC ,CUIACTR,AUIACTR,8)
static A68_141   DUIACTR = {"WARNING "}; 
A_GISVEC(A68_VC ,EUIACTR,DUIACTR,8)
static A68_146   FUIACTR = {"RECOVERABLE ERROR "}; 
A_GISVEC(A68_VC ,GUIACTR,FUIACTR,18)
static A68_147   HUIACTR = {"ERROR "}; 
A_GISVEC(A68_VC ,IUIACTR,HUIACTR,6)
static A68_148   JUIACTR = {"FATAL ERROR "}; 
A_GISVEC(A68_VC ,KUIACTR,JUIACTR,12)
static A68_149   LUIACTR = {"ERROR OF UNKNOWN SEVERITY "}; 
A_GISVEC(A68_VC ,MUIACTR,LUIACTR,26)
static A68_140   NUIACTR = {""}; 
A_GISVEC(A68_VC ,PUIACTR,NUIACTR,0)
static A68_143   QUIACTR = {" (at character "}; 
A_GISVEC(A68_VC ,RUIACTR,QUIACTR,15)
A_GISVEC(A68_VC ,WUIACTR,ZTIACTR,2)
A68_152  OWIACTR_perror;
A68_155 * CYIACTR_nil_modinfolist;
A68_156 * DYIACTR_nil_envinfo;
static A68_116   GYIACTR = {"       "}; 
A68_157  IYIACTR_config_info;
static A68_143   IZIACTR = {"CTRANS_NAMESEED"}; 
A_GISVEC(A68_VC ,JZIACTR,IZIACTR,15)
static A68_148   LZIACTR = {"A68_NAMESEED"}; 
A_GISVEC(A68_VC ,MZIACTR,LZIACTR,12)
static A68_148   QZIACTR = {"A68_STAREDIT"}; 
A_GISVEC(A68_VC ,RZIACTR,QZIACTR,12)
static A68_116   JAJACTR = {"A68_DIR"}; 
A_GISVEC(A68_VC ,KAJACTR,JAJACTR,7)
static A68_141   ZAJACTR = {"A68_CDIR"}; 
A_GISVEC(A68_VC ,ABJACTR,ZAJACTR,8)
static A68_116   KBJACTR = {"A68_LIB"}; 
A_GISVEC(A68_VC ,LBJACTR,KBJACTR,7)
static A68_145   CCJACTR = {"-v"}; 
A_GISVEC(A68_VC ,DCJACTR,CCJACTR,2)
static A68_141   FCJACTR = {"-verbose"}; 
A_GISVEC(A68_VC ,GCJACTR,FCJACTR,8)
static A68_145   HCJACTR = {"-n"}; 
A_GISVEC(A68_VC ,ICJACTR,HCJACTR,2)
static A68_159   KCJACTR = {"-line"}; 
A_GISVEC(A68_VC ,LCJACTR,KCJACTR,5)
static A68_145   MCJACTR = {"-f"}; 
A_GISVEC(A68_VC ,NCJACTR,MCJACTR,2)
static A68_146   PCJACTR = {"-filename_truncate"}; 
A_GISVEC(A68_VC ,QCJACTR,PCJACTR,18)
static A68_145   SCJACTR = {"-l"}; 
A_GISVEC(A68_VC ,TCJACTR,SCJACTR,2)
static A68_159   VCJACTR = {"-long"}; 
A_GISVEC(A68_VC ,WCJACTR,VCJACTR,5)
static A68_145   XCJACTR = {"-s"}; 
A_GISVEC(A68_VC ,YCJACTR,XCJACTR,2)
static A68_147   ADJACTR = {"-short"}; 
A_GISVEC(A68_VC ,BDJACTR,ADJACTR,6)
static A68_145   CDJACTR = {"-r"}; 
A_GISVEC(A68_VC ,DDJACTR,CDJACTR,2)
static A68_143   FDJACTR = {"-return_structs"}; 
A_GISVEC(A68_VC ,GDJACTR,FDJACTR,15)
static A68_145   HDJACTR = {"-c"}; 
A_GISVEC(A68_VC ,IDJACTR,HDJACTR,2)
static A68_160   KDJACTR = {"-mark_closures"}; 
A_GISVEC(A68_VC ,LDJACTR,KDJACTR,14)
static A68_145   MDJACTR = {"-C"}; 
A_GISVEC(A68_VC ,NDJACTR,MDJACTR,2)
static A68_143   PDJACTR = {"-stack_closures"}; 
A_GISVEC(A68_VC ,QDJACTR,PDJACTR,15)
static A68_145   RDJACTR = {"-V"}; 
A_GISVEC(A68_VC ,SDJACTR,RDJACTR,2)
static A68_141   TDJACTR = {"-Version"}; 
A_GISVEC(A68_VC ,UDJACTR,TDJACTR,8)
static A68_141   WDJACTR = {"-version"}; 
A_GISVEC(A68_VC ,XDJACTR,WDJACTR,8)
static A68_140   ZDJACTR = {""}; 
A_GISVEC(A68_VC ,AEJACTR,ZDJACTR,0)
static A68_161   BEJACTR = {"-staredit"}; 
A_GISVEC(A68_VC ,CEJACTR,BEJACTR,9)
static A68_56   XEJACTR = {"-dir"}; 
A_GISVEC(A68_VC ,YEJACTR,XEJACTR,4)
static A68_159   CFJACTR = {"-cdir"}; 
A_GISVEC(A68_VC ,DFJACTR,CFJACTR,5)
static A68_56   HFJACTR = {"-lib"}; 
A_GISVEC(A68_VC ,IFJACTR,HFJACTR,4)
static A68_147   MFJACTR = {"-nolib"}; 
A_GISVEC(A68_VC ,NFJACTR,MFJACTR,6)
static A68_147   OFJACTR = {"-uname"}; 
A_GISVEC(A68_VC ,PFJACTR,OFJACTR,6)
static A68_141   RFJACTR = {"seedfile"}; 
A_GISVEC(A68_VC ,TFJACTR,RFJACTR,8)
static A68_159   VFJACTR = {"cfile"}; 
A_GISVEC(A68_VC ,WFJACTR,VFJACTR,5)
static A68_116   AHJACTR = {"-stream"}; 
A_GISVEC(A68_VC ,BHJACTR,AHJACTR,7)
static A68_56   CHJACTR = {"-dot"}; 
A_GISVEC(A68_VC ,DHJACTR,CHJACTR,4)
static A68_147   EHJACTR = {"-quote"}; 
A_GISVEC(A68_VC ,FHJACTR,EHJACTR,6)
static A68_159   GHJACTR = {"-skip"}; 
A_GISVEC(A68_VC ,HHJACTR,GHJACTR,5)
static A68_147   IHJACTR = {"-tilde"}; 
A_GISVEC(A68_VC ,JHJACTR,IHJACTR,6)
static A68_141   KHJACTR = {"-optbool"}; 
A_GISVEC(A68_VC ,LHJACTR,KHJACTR,8)
static A68_161   MHJACTR = {"-keeplist"}; 
A_GISVEC(A68_VC ,NHJACTR,MHJACTR,9)
static A68_145   OHJACTR = {"-t"}; 
A_GISVEC(A68_VC ,PHJACTR,OHJACTR,2)
static A68_147   RHJACTR = {"-trace"}; 
A_GISVEC(A68_VC ,SHJACTR,RHJACTR,6)
static A68_145   UHJACTR = {"-d"}; 
A_GISVEC(A68_VC ,VHJACTR,UHJACTR,2)
static A68_148   XHJACTR = {"-debug_level"}; 
A_GISVEC(A68_VC ,YHJACTR,XHJACTR,12)
static A68_145   AIJACTR = {"-m"}; 
A_GISVEC(A68_VC ,BIJACTR,AIJACTR,2)
static A68_162   DIJACTR = {"-debug_module"}; 
A_GISVEC(A68_VC ,EIJACTR,DIJACTR,13)
static A68_141   IIJACTR = {"-cstream"}; 
A_GISVEC(A68_VC ,JIJACTR,IIJACTR,8)
static A68_56   LIJACTR = {"file"}; 
A_GISVEC(A68_VC ,NIJACTR,LIJACTR,4)
static A68_147   OIJACTR = {"memory"}; 
A_GISVEC(A68_VC ,PIJACTR,OIJACTR,6)
static A68_56   RIJACTR = {"-tmp"}; 
A_GISVEC(A68_VC ,SIJACTR,RIJACTR,4)
static A68_147   TIJACTR = {"-check"}; 
A_GISVEC(A68_VC ,UIJACTR,TIJACTR,6)
static A68_161   VIJACTR = {"-oldalien"}; 
A_GISVEC(A68_VC ,WIJACTR,VIJACTR,9)
A68_BOOL  LJJACTR_traceon;
A68_INT  MJJACTR_startline;
#define QJJACTR_tracealllevels 0X800000U
#define RJJACTR_tracespace 0X400000U
#define SJJACTR_traceids 0X1000000U
#define TJJACTR_longiddec 0X2000000U
#define UJJACTR_tracetree 0X4000000U
#define VJJACTR_tracetreeafter 0X8000000U
#define WJJACTR_traceregsbefore 0X10000000U
#define XJJACTR_traceregsafter 0X20000000U
#define YJJACTR_allregenvirons 0X100000U
#define ZJJACTR_fullregister 0X200000U
typedef struct   /* env of non-global proc */
{
int dummy;
} JVIACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  MVIACTR_m;
A68_INT * OVIACTR_mind;
} WVIACTR_outchars;

A_STATIC A68_VOID  OPIACTR_generator(A68_BOOL  NPIACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TPIACTR_generator(A68_BOOL  SPIACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HRIACTR_generator(A68_BOOL  GRIACTR_anonymous, A68_134  *ReturnedValue);

A68_VOID  ISIACTR_typelineonterminal(A68_VC  Line);

A68_VOID  PSIACTR_list_nonl(A68_VC  Line);

A68_VOID  RSIACTR_finishmessage(void);

A68_VOID  NTIACTR_abort(void);

A68_VOID  OTIACTR_terminatenormally(void);

A_STATIC A68_VOID  STIACTR_primitivefault(A68_INT  Thisseverity, A68_VC  Message, A68_INT  Charposition);

A_STATIC A68_VOID  DVIACTR_parameterisedmessage(A68_INT  Messagenumber, A68_150  Parameters, A68_INT  Thisseverity);

A_STATIC A68_VOID  IVIACTR_generator(A68_BOOL  GVIACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VVIACTR_outchars(A68_VC  V, void *NonLocals);

A68_VOID  NWIACTR_pmessage(A68_INT  Messagenumber, A68_150  Parameters);

A68_VOID  SWIACTR_pcomment(A68_INT  Messagenumber, A68_150  Parameters);

A68_VOID  VWIACTR_pwarning(A68_INT  Messagenumber, A68_150  Parameters);

A68_VOID  YWIACTR_pportabilitywarning(A68_INT  Messagenumber, A68_150  Parameters);

A68_VOID  BXIACTR_pterminalerror(A68_INT  Messagenumber, A68_150  Parameters);

A68_VOID  EXIACTR_fault(A68_VC  Message, A68_INT  Charposition);

A68_VOID  GXIACTR_comment(A68_INT  Messagenumber);

A68_VOID  JXIACTR_warning(A68_INT  Messagenumber);

A68_VOID  MXIACTR_portabilitywarning(A68_INT  Messagenumber);

A68_VOID  PXIACTR_error(A68_INT  Messagenumber);

A68_VOID  SXIACTR_terminalerror(A68_INT  Messagenumber);

A68_VOID  WXIACTR_assert(A68_VC  Assertion, A68_BOOL  Valid);

A_STATIC A68_VOID  YXIACTR_write_stdout(A68_VC  S);

A68_VOID  JYIACTR_setparams(void);

A_STATIC A68_VOID  MYIACTR_setfilename(A68_VC  Filespec);

A_STATIC A68_VOID  WYIACTR_readenvvariables(void);

A_STATIC A68_VOID  ZYIACTR_readenv(A68_VC  Envname, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GAJACTR_pushdir(A68_VC  Dir);

A_STATIC A68_VOID  WAJACTR_pushdir(A68_VC  Dir);

A68_52 * BJJACTR_find_and_open_file(A68_VC  Basename, A68_133 * Dirlist, A68_VC * Full_filename);

A68_VOID  NJJACTR_initialisetrace(void);

A68_BITS  PJJACTR_tracelevelflags(void);

A_STATIC A68_VOID  ZYIACTR_readenv(A68_VC  Envname, A68_VC  *ReturnedValue)
{ 
A68_VC  AZIACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} BZIACTR; 
A68_VC  CZIACTR_value;
A68_156  DZIACTR;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} EZIACTR; 
A68_156 * FZIACTR;  /* YIELD */
A68_156 ** GZIACTR;  /* YIELD */
A68_VC  HZIACTR;  /* clause result */
A_PROC_ENTRY(readenv);
 /* line 458: */
{ 
QPBAOSF_get_env_var( Envname, &AZIACTR );
BZIACTR.source = AZIACTR ;
CZIACTR_value = (BZIACTR.destination);
 /* line 459: */
 /* line 460: */
EZIACTR.source = Envname ;
DZIACTR.Env_name = (EZIACTR.destination);
DZIACTR.Env_value = CZIACTR_value;
DZIACTR.Next = (*(&((&IYIACTR_config_info)->Environment)));
FZIACTR = A_HEAP(A68_156 ) ;
(*FZIACTR) = DZIACTR ;
GZIACTR = (&((&IYIACTR_config_info)->Environment)) ;
(*GZIACTR) = FZIACTR;
 /* line 461: */
 /* line 462: */
HZIACTR = CZIACTR_value;
} 
A_PROC_EXIT(readenv);
*ReturnedValue = (HZIACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GAJACTR_pushdir(A68_VC  Dir)
{ 
A68_133  HAJACTR;  /* collateral clause result */
A68_133 * IAJACTR;  /* YIELD */
A_PROC_ENTRY(pushdir);
 /* line 493: */
HAJACTR.Dir = Dir;
HAJACTR.Next = DRIACTR_modinfo_dirlist;
IAJACTR = A_HEAP(A68_133 ) ;
(*IAJACTR) = HAJACTR ;
DRIACTR_modinfo_dirlist = IAJACTR;
A_PROC_EXIT(pushdir);
return;
} 
#undef NL

A_STATIC A68_VOID  WAJACTR_pushdir(A68_VC  Dir)
{ 
A68_133  XAJACTR;  /* collateral clause result */
A68_133 * YAJACTR;  /* YIELD */
A_PROC_ENTRY(pushdir);
 /* line 520: */
XAJACTR.Dir = Dir;
XAJACTR.Next = ERIACTR_cfile_dirlist;
YAJACTR = A_HEAP(A68_133 ) ;
(*YAJACTR) = XAJACTR ;
ERIACTR_cfile_dirlist = YAJACTR;
A_PROC_EXIT(pushdir);
return;
} 
#undef NL

A_STATIC A68_VOID  IVIACTR_generator(A68_BOOL  GVIACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JVIACTR_generator *)NonLocals)->x)
{ 
A68_VC  KVIACTR;  /* clause result */
A68_VC  LVIACTR;  /* OPERATORS - dynamic generator */
{ 
LVIACTR.upb = 240 ;
( GVIACTR_anonymous? A_VLOC(A68_CHAR ,LVIACTR): A_VHEAP(A68_CHAR ,LVIACTR) );
KVIACTR = LVIACTR;
} 
*ReturnedValue = (KVIACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VVIACTR_outchars(A68_VC  V, void *NonLocals)
#define NL(x) (((WVIACTR_outchars *)NonLocals)->x)
{ 
A68_INT  XVIACTR_u;
A68_VC  YVIACTR;  /* OPERATORS - trim index */
A68_VC  ZVIACTR;  /* YIELD */
A_PROC_ENTRY(outchars);
 /* line 273: */
{ 
XVIACTR_u = V.upb;
 /* line 274: */
ZVIACTR = A_VTRIM(YVIACTR,(NL(MVIACTR_m)),A_VTSCRIPT(&(YVIACTR.upb),(NL(MVIACTR_m)).upb,((*NL(OVIACTR_mind))+1),((*NL(OVIACTR_mind))+XVIACTR_u))) ;
A_VASSIGN2(V,ZVIACTR,A68_CHAR );
 /* line 275: */
 /* line 276: */
(*NL(OVIACTR_mind))+=XVIACTR_u;
} 
A_PROC_EXIT(outchars);
return;
} 
#undef NL

A_STATIC A68_VOID  MYIACTR_setfilename(A68_VC  Filespec)
{ 
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} NYIACTR; 
A68_INT  OYIACTR_start;
A68_BOOL  PYIACTR;  /* optbool result */
A68_INT  QYIACTR_end;
A68_BOOL  RYIACTR;  /* optbool result */
A68_VC  SYIACTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} TYIACTR; 
A68_VC  UYIACTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} VYIACTR; 
A_PROC_ENTRY(setfilename);
 /* line 430: */
 /* line 431: */
{ 
NYIACTR.source = Filespec ;
XQIACTR_sourcefilename = (NYIACTR.destination);
 /* line 433: */
OYIACTR_start = XQIACTR_sourcefilename.upb;
 /* line 434: */
for ( ;; )
{ 
PYIACTR = (OYIACTR_start>=1);
if ( PYIACTR )
{ /* line 435: */
PYIACTR = ((*(&A_VINDEX(XQIACTR_sourcefilename,OYIACTR_start)))!='/');
}
 /* line 436: */
if ( !(PYIACTR) ) break;
 /* line 437: */
OYIACTR_start-=1;
}
 /* line 438: */
if ( (OYIACTR_start==0) )
{ 
OYIACTR_start = 1;
} 
 /* line 439: */
if ( ((*(&A_VINDEX(XQIACTR_sourcefilename,OYIACTR_start)))=='/') )
{ 
OYIACTR_start+=1;
} 
 /* line 441: */
QYIACTR_end = XQIACTR_sourcefilename.upb;
 /* line 442: */
for ( ;; )
{ 
RYIACTR = (QYIACTR_end>OYIACTR_start);
if ( RYIACTR )
{ /* line 443: */
RYIACTR = ((*(&A_VINDEX(XQIACTR_sourcefilename,QYIACTR_end)))!='.');
}
if ( !(RYIACTR) ) break;
QYIACTR_end-=1;
}
 /* line 444: */
if ( (OYIACTR_start!=QYIACTR_end) )
{ 
QYIACTR_end-=1;
} 
 /* line 446: */
TYIACTR.source = A_VTRIM(SYIACTR,(XQIACTR_sourcefilename),A_VTSCRIPT(&(SYIACTR.upb),(XQIACTR_sourcefilename).upb,OYIACTR_start,QYIACTR_end)) ;
YQIACTR_basenamesourcefile = (TYIACTR.destination);
 /* line 447: */
 /* line 448: */
VYIACTR.source = A_VTRIM(UYIACTR,(XQIACTR_sourcefilename),A_VTSCRIPT(&(UYIACTR.upb),(XQIACTR_sourcefilename).upb,(QYIACTR_end+1),(XQIACTR_sourcefilename).upb)) ;
ZQIACTR_sourcefilesuffix = (VYIACTR.destination);
} 
A_PROC_EXIT(setfilename);
return;
} 
#undef NL

A_STATIC A68_VOID  WYIACTR_readenvvariables(void)
{ 
A68_VC  KZIACTR;  /* avoid structure result */
A68_VC  NZIACTR;  /* avoid structure result */
A68_VC  OZIACTR_a68_nameseed;
A68_BOOL  PZIACTR;  /* clause result */
A68_VC  SZIACTR;  /* avoid structure result */
A68_VC  TZIACTR_a68_staredit;
A68_BOOL  UZIACTR;  /* clause result */
A68_150  VZIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_CHAR * WZIACTR_c;
A68_INT  XZIACTR;  /* forall loop counter */
A68_BOOL  YZIACTR;  /* optbool result */
A68_BOOL  ZZIACTR;  /* optbool result */
A68_VC  AAJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_150  BAJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  CAJACTR;  /* YIELD */
A68_BOOL * DAJACTR;  /* YIELD */
A68_VC  LAJACTR;  /* avoid structure result */
A68_VC  MAJACTR_a68_dir;
A68_BOOL  NAJACTR;  /* clause result */
A68_INT  OAJACTR_i;
A68_INT  PAJACTR_end;
A68_INT  QAJACTR;  /* by part of loop */
A68_INT  RAJACTR;  /* loop control */
A68_VC  SAJACTR;  /* OPERATORS - trim index */
A68_VC  TAJACTR;  /* OPERATORS - trim index */
A68_VC  BBJACTR;  /* avoid structure result */
A68_VC  CBJACTR_a68_cdir;
A68_BOOL  DBJACTR;  /* clause result */
A68_INT  EBJACTR_i;
A68_INT  FBJACTR_end;
A68_INT  GBJACTR;  /* by part of loop */
A68_INT  HBJACTR;  /* loop control */
A68_VC  IBJACTR;  /* OPERATORS - trim index */
A68_VC  JBJACTR;  /* OPERATORS - trim index */
A68_VC  MBJACTR;  /* avoid structure result */
A68_VC  NBJACTR_libdir;
A68_BOOL  OBJACTR;  /* clause result */
A68_133  PBJACTR;  /* collateral clause result */
A68_133 * QBJACTR;  /* YIELD */
A_PROC_ENTRY(readenvvariables);
{ 
 /* line 465: */
 /* line 466: */
{ 
ZYIACTR_readenv( JZIACTR, &KZIACTR );
ARIACTR_seedfilename = KZIACTR;
 /* line 467: */
ZYIACTR_readenv( MZIACTR, &NZIACTR );
OZIACTR_a68_nameseed = NZIACTR;
 /* line 468: */
 /* line 469: */
 /* line 470: */
PZIACTR = (OZIACTR_a68_nameseed.upb>0);
if ( PZIACTR )
{ 
 /* line 471: */
ARIACTR_seedfilename = OZIACTR_a68_nameseed;
} 
} 
 /* line 474: */
 /* line 475: */
{ 
ZYIACTR_readenv( RZIACTR, &SZIACTR );
TZIACTR_a68_staredit = SZIACTR;
 /* line 476: */
 /* line 477: */
 /* line 478: */
UZIACTR = (TZIACTR_a68_staredit.upb>0);
if ( UZIACTR )
{ 
SWIACTR_pcomment(284, A_HARR(VZIACTR,TZIACTR_a68_staredit,A68_VC ));
 /* line 479: */
 /* line 480: */
XZIACTR = TZIACTR_a68_staredit.upb -1;
WZIACTR_c = TZIACTR_a68_staredit.data;
for (;XZIACTR-- >= 0;
(WZIACTR_c++
) )
{
 /* line 481: */
YZIACTR = ((*WZIACTR_c)>='0');
if ( YZIACTR )
{YZIACTR = ((*WZIACTR_c)<='9');
}
if ( ! YZIACTR )
{ZZIACTR = ((*WZIACTR_c)>='A');
if ( ZZIACTR )
{ZZIACTR = ((*WZIACTR_c)<='Z');
}
YZIACTR = ZZIACTR;
}
 /* line 482: */
 /* line 483: */
if ( !YZIACTR )
{ 
 /* line 484: */
 /* line 485: */
BXIACTR_pterminalerror(282, A_HARR(BAJACTR,A_HVEC(AAJACTR,(*WZIACTR_c),A68_CHAR ),A68_VC ));
} 
else
{ 
 /* line 486: */
 /* line 487: */
CAJACTR = (A68_INT)(unsigned char)(*WZIACTR_c) ;
DAJACTR = (&A_R1INDEX(KRIACTR_stars,CAJACTR)) ;
(*DAJACTR) = A68_TRUE;
} 
}
 /* line 488: */
} 
} 
 /* line 491: */
 /* line 492: */
{ 
 /* line 495: */
GAJACTR_pushdir(BRIACTR_current_directory);
 /* line 497: */
ZYIACTR_readenv( KAJACTR, &LAJACTR );
MAJACTR_a68_dir = LAJACTR;
 /* line 498: */
 /* line 499: */
 /* line 501: */
NAJACTR = (MAJACTR_a68_dir.upb>0);
if ( NAJACTR )
{ 
OAJACTR_i = MAJACTR_a68_dir.upb;
 /* line 502: */
PAJACTR_end = OAJACTR_i;
 /* line 504: */
 /* line 505: */
QAJACTR = (-1);
for ( RAJACTR = OAJACTR_i;
( QAJACTR > 0 && RAJACTR <= 1) ||
( QAJACTR < 0 && RAJACTR >= 1) ||
( QAJACTR == 0 ) ;
RAJACTR += QAJACTR )
{ 
 /* line 506: */
 /* line 507: */
 /* line 508: */
if ( ((*(&A_VINDEX(MAJACTR_a68_dir,OAJACTR_i)))==':') )
{ 
GAJACTR_pushdir(A_VTRIM(SAJACTR,(MAJACTR_a68_dir),A_VTSCRIPT(&(SAJACTR.upb),(MAJACTR_a68_dir).upb,(OAJACTR_i+1),PAJACTR_end)));
 /* line 509: */
 /* line 510: */
PAJACTR_end = (OAJACTR_i-1);
} 
 /* line 511: */
 /* line 512: */
OAJACTR_i-=1;
}
 /* line 514: */
 /* line 515: */
GAJACTR_pushdir(A_VTRIM(TAJACTR,(MAJACTR_a68_dir),A_VTSCRIPT(&(TAJACTR.upb),(MAJACTR_a68_dir).upb,1,PAJACTR_end)));
} 
} 
 /* line 518: */
 /* line 519: */
{ 
 /* line 522: */
WAJACTR_pushdir(BRIACTR_current_directory);
 /* line 524: */
ZYIACTR_readenv( ABJACTR, &BBJACTR );
CBJACTR_a68_cdir = BBJACTR;
 /* line 525: */
 /* line 526: */
 /* line 528: */
DBJACTR = (CBJACTR_a68_cdir.upb>0);
if ( DBJACTR )
{ 
EBJACTR_i = CBJACTR_a68_cdir.upb;
 /* line 529: */
FBJACTR_end = EBJACTR_i;
 /* line 531: */
 /* line 532: */
GBJACTR = (-1);
for ( HBJACTR = EBJACTR_i;
( GBJACTR > 0 && HBJACTR <= 1) ||
( GBJACTR < 0 && HBJACTR >= 1) ||
( GBJACTR == 0 ) ;
HBJACTR += GBJACTR )
{ 
 /* line 533: */
 /* line 534: */
 /* line 535: */
if ( ((*(&A_VINDEX(CBJACTR_a68_cdir,EBJACTR_i)))==':') )
{ 
WAJACTR_pushdir(A_VTRIM(IBJACTR,(CBJACTR_a68_cdir),A_VTSCRIPT(&(IBJACTR.upb),(CBJACTR_a68_cdir).upb,(EBJACTR_i+1),FBJACTR_end)));
 /* line 536: */
 /* line 537: */
FBJACTR_end = (EBJACTR_i-1);
} 
 /* line 538: */
 /* line 539: */
EBJACTR_i-=1;
}
 /* line 541: */
 /* line 542: */
WAJACTR_pushdir(A_VTRIM(JBJACTR,(CBJACTR_a68_cdir),A_VTSCRIPT(&(JBJACTR.upb),(CBJACTR_a68_cdir).upb,1,FBJACTR_end)));
} 
} 
 /* line 545: */
 /* line 546: */
{ 
ZYIACTR_readenv( LBJACTR, &MBJACTR );
NBJACTR_libdir = MBJACTR;
 /* line 547: */
 /* line 548: */
 /* line 549: */
OBJACTR = (NBJACTR_libdir.upb>0);
if ( OBJACTR )
{ 
PBJACTR.Dir = NBJACTR_libdir;
 /* line 550: */
PBJACTR.Next = CRIACTR_nil_dirlist;
QBJACTR = A_HEAP(A68_133 ) ;
(*QBJACTR) = PBJACTR ;
FRIACTR_library_directory = QBJACTR;
} 
} 
} 
A_PROC_EXIT(readenvvariables);
return;
} 
#undef NL

A_STATIC A68_VOID  OPIACTR_generator(A68_BOOL  NPIACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  PPIACTR;  /* clause result */
A68_VC  QPIACTR;  /* OPERATORS - dynamic generator */
{ 
 /* line 54: */
QPIACTR.upb = 0 ;
( NPIACTR_anonymous? A_VLOC(A68_CHAR ,QPIACTR): A_VHEAP(A68_CHAR ,QPIACTR) );
PPIACTR = QPIACTR;
} 
*ReturnedValue = (PPIACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TPIACTR_generator(A68_BOOL  SPIACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  UPIACTR;  /* clause result */
A68_VC  VPIACTR;  /* OPERATORS - dynamic generator */
{ 
VPIACTR.upb = 0 ;
( SPIACTR_anonymous? A_VLOC(A68_CHAR ,VPIACTR): A_VHEAP(A68_CHAR ,VPIACTR) );
UPIACTR = VPIACTR;
} 
*ReturnedValue = (UPIACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HRIACTR_generator(A68_BOOL  GRIACTR_anonymous, A68_134  *ReturnedValue)
{ 
A68_134  IRIACTR;  /* clause result */
A68_134  JRIACTR;  /* OPERATORS - dynamic generator */
{ 
JRIACTR.dim[0].upb = (A68_INT)(unsigned char)'Z' ;
JRIACTR.dim[0].lwb = (A68_INT)(unsigned char)'0' ;
A_1INITSTRIDES(JRIACTR) ;
( GRIACTR_anonymous? A_R1LOC(A68_BOOL ,JRIACTR): A_R1HEAP(A68_BOOL ,JRIACTR) );
IRIACTR = JRIACTR;
} 
*ReturnedValue = (IRIACTR);
return;
} 
#undef NL

A68_VOID  ISIACTR_typelineonterminal(A68_VC  Line)
{ 
A68_53  JSIACTR;  /* avoid structure result */
A68_VC  KSIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_53  LSIACTR;  /* avoid structure result */
A_PROC_ENTRY(typelineonterminal);
 /* line 177: */
{ 
UXBAOSF_write_buffer( USBAOSF_stdout, Line, RIBAOSF_ignore_msg, &JSIACTR );
JSIACTR;
UXBAOSF_write_buffer( USBAOSF_stdout, A_HVEC(KSIACTR,GVBAOSF_newline_char,A68_CHAR ), RIBAOSF_ignore_msg, &LSIACTR );
LSIACTR;
} 
A_PROC_EXIT(typelineonterminal);
return;
} 
#undef NL

A68_VOID  PSIACTR_list_nonl(A68_VC  Line)
{ 
A68_53  QSIACTR;  /* avoid structure result */
A_PROC_ENTRY(list_nonl);
UXBAOSF_write_buffer( USBAOSF_stdout, Line, RIBAOSF_ignore_msg, &QSIACTR );
QSIACTR;
A_PROC_EXIT(list_nonl);
return;
} 
#undef NL

A68_VOID  RSIACTR_finishmessage(void)
{ 
A68_INT  SSIACTR_number;
A68_VC  USIACTR;  /* clause result */
A68_VC  GTIACTR_type;
A68_VC  KTIACTR;  /* avoid structure result */
A68_VC  LTIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(finishmessage);
{ 
 /* line 189: */
 /* line 190: */
 /* line 191: */
switch ( (DSIACTR_greatestseverity+1) )
{ 
case 1: 
 /* line 192: */
if ( (ESIACTR_comment_count>0) )
{ 
SSIACTR_number = ESIACTR_comment_count;
 /* line 193: */
USIACTR = VSIACTR;
} 
else
{ 
SSIACTR_number = 0;
 /* line 194: */
 /* line 195: */
USIACTR = XSIACTR;
} 
break;
case 2: 
{ 
SSIACTR_number = FSIACTR_warning_count;
 /* line 196: */
USIACTR = ZSIACTR;
} 
break;
case 3: 
{ 
SSIACTR_number = 0;
 /* line 197: */
USIACTR = BTIACTR;
} 
break;
case 4: 
{ 
SSIACTR_number = GSIACTR_error_count;
 /* line 198: */
USIACTR = DTIACTR;
} 
break;
default: 
SSIACTR_number = 0;
 /* line 199: */
USIACTR = FTIACTR;
break;
} 
GTIACTR_type = USIACTR;
 /* line 200: */
 /* line 201: */
if ( (SSIACTR_number>0) )
{ 
 /* line 202: */
 /* line 203: */
 /* line 204: */
 /* line 205: */
ROAAOSF_whole( SSIACTR_number, 0, &KTIACTR );
ISIACTR_typelineonterminal(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(JTIACTR,KTIACTR),A_HVEC(LTIACTR,' ',A68_CHAR )),GTIACTR_type),MTIACTR));
} 
} 
A_PROC_EXIT(finishmessage);
return;
} 
#undef NL

A68_VOID  NTIACTR_abort(void)
{ 
A_PROC_ENTRY(abort);
APBAOSF_exit(1);
A_PROC_EXIT(abort);
return;
} 
#undef NL

A68_VOID  OTIACTR_terminatenormally(void)
{ 
A_PROC_ENTRY(terminatenormally);
APBAOSF_exit(0);
A_PROC_EXIT(terminatenormally);
return;
} 
#undef NL

A_STATIC A68_VOID  STIACTR_primitivefault(A68_INT  Thisseverity, A68_VC  Message, A68_INT  Charposition)
{ 
A68_VC  UTIACTR;  /* clause result */
A68_VC  WTIACTR;  /* avoid structure result */
A68_VC  BUIACTR;  /* clause result */
A68_VC  OUIACTR;  /* clause result */
A68_VC  SUIACTR;  /* avoid structure result */
A68_VC  TUIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UUIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VUIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_53  XUIACTR;  /* avoid structure result */
A68_VC  YUIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_53  ZUIACTR;  /* avoid structure result */
A_PROC_ENTRY(primitivefault);
 /* line 214: */
 /* line 215: */
{ 
 /* line 216: */
if ( (Thisseverity>DSIACTR_greatestseverity) )
{ 
 /* line 217: */
DSIACTR_greatestseverity = Thisseverity;
} 
 /* line 218: */
 /* line 219: */
switch ( (Thisseverity+1) )
{ 
case 1: 
 /* line 220: */
ESIACTR_comment_count+=1;
break;
case 2: 
 /* line 221: */
FSIACTR_warning_count+=1;
break;
case 3: 
 /* line 222: */
/*SKIP*/;
break;
case 4: 
 /* line 223: */
 /* line 225: */
GSIACTR_error_count+=1;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 226: */
 /* line 227: */
 /* line 228: */
 /* line 229: */
if ( (Thisseverity!=YRIACTR_commentseverity) )
{ 
 /* line 230: */
 /* line 231: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &WTIACTR );
UTIACTR = A_VC_PLUS(VTIACTR,WTIACTR);
} 
else
{ 
UTIACTR = YTIACTR;
} 
 /* line 232: */
 /* line 233: */
switch ( (Thisseverity+1) )
{ 
case 1: 
 /* line 234: */
BUIACTR = CUIACTR;
break;
case 2: 
 /* line 235: */
BUIACTR = EUIACTR;
break;
case 3: 
 /* line 236: */
BUIACTR = GUIACTR;
break;
case 4: 
 /* line 238: */
BUIACTR = IUIACTR;
break;
case 5: 
 /* line 239: */
BUIACTR = KUIACTR;
break;
default: 
BUIACTR = MUIACTR;
break;
} 
 /* line 241: */
 /* line 242: */
 /* line 243: */
 /* line 244: */
if ( (Charposition==0) )
{ 
OUIACTR = PUIACTR;
} 
else
{ 
 /* line 245: */
ROAAOSF_whole( Charposition, 0, &SUIACTR );
OUIACTR = A_VC_PLUS(A_VC_PLUS(RUIACTR,SUIACTR),A_HVEC(TUIACTR,')',A68_CHAR ));
} 
 /* line 247: */
UXBAOSF_write_buffer( VSBAOSF_stderr, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(UUIACTR,'\"',A68_CHAR ),XQIACTR_sourcefilename),A_HVEC(VUIACTR,'\"',A68_CHAR )),UTIACTR),WUIACTR),BUIACTR),Message),OUIACTR), RIBAOSF_ignore_msg, &XUIACTR );
XUIACTR;
 /* line 248: */
 /* line 249: */
UXBAOSF_write_buffer( VSBAOSF_stderr, A_HVEC(YUIACTR,GVBAOSF_newline_char,A68_CHAR ), RIBAOSF_ignore_msg, &ZUIACTR );
ZUIACTR;
} 
A_PROC_EXIT(primitivefault);
return;
} 
#undef NL

A_STATIC A68_VOID  DVIACTR_parameterisedmessage(A68_INT  Messagenumber, A68_150  Parameters, A68_INT  Thisseverity)
{ 
A68_VC  EVIACTR;  /* avoid structure result */
A68_VC  FVIACTR_mess;
A68_129  HVIACTR_generator;   /* proc value of non-global proc */
A68_VC  NVIACTR;  /* avoid structure result */
A68_VC  MVIACTR_m;
A68_INT  OVIACTR_mind;
A68_BOOL  PVIACTR_hat;
A68_CHAR  QVIACTR_c;
A68_INT  RVIACTR_paramcount;
A68_INT  SVIACTR_nextparam;
A68_88  UVIACTR_outchars;   /* proc value of non-global proc */
A68_INT  AWIACTR_i;
A68_INT  BWIACTR;  /* to part of loop */
A68_BOOL  CWIACTR;  /* optbool result */
A68_BOOL  DWIACTR;  /* optbool result */
A68_VC  EWIACTR;  /* OPERATORS - trim index */
A68_VC  FWIACTR;  /* YIELD */
A68_VC  GWIACTR;  /* OPERATORS - assign op */
A68_BOOL  HWIACTR;  /* optbool result */
A68_INT  IWIACTR;  /* YIELD */
A68_CHAR * JWIACTR;  /* YIELD */
A68_VC  KWIACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(parameterisedmessage);
 /* line 261: */
 /* line 262: */
{ 
KDHACTR_message( Messagenumber, &EVIACTR );
FVIACTR_mess = EVIACTR;
 /* line 263: */
A_CLOSURE( HVIACTR_generator, IVIACTR_generator, JVIACTR_generator );
A_CALLPROC(HVIACTR_generator,(A68_TRUE, &NVIACTR),(A68_TRUE, &NVIACTR,(HVIACTR_generator).nonlocals));
MVIACTR_m = NVIACTR;
 /* line 265: */
OVIACTR_mind = 0;
 /* line 266: */
PVIACTR_hat = A68_FALSE;
 /* line 267: */
 /* line 269: */
RVIACTR_paramcount = Parameters.dim[0].upb;
 /* line 270: */
SVIACTR_nextparam = 0;
 /* line 272: */
A_CLOSURE( UVIACTR_outchars, VVIACTR_outchars, WVIACTR_outchars );
(( WVIACTR_outchars * ) ( UVIACTR_outchars.nonlocals )) -> MVIACTR_m = MVIACTR_m;
(( WVIACTR_outchars * ) ( UVIACTR_outchars.nonlocals )) -> OVIACTR_mind = (&OVIACTR_mind);
 /* line 278: */
 /* line 279: */
BWIACTR = FVIACTR_mess.upb;
for ( AWIACTR_i = 1;
AWIACTR_i <= BWIACTR;
AWIACTR_i += 1 )
{ 
QVIACTR_c = A_VINDEX(FVIACTR_mess,AWIACTR_i);
 /* line 280: */
CWIACTR = PVIACTR_hat;
if ( CWIACTR )
{ /* line 281: */
CWIACTR = (QVIACTR_c!='^');
}
if ( CWIACTR )
{ 
PVIACTR_hat = A68_FALSE;
 /* line 282: */
 /* line 283: */
DWIACTR = (QVIACTR_c=='a');
if ( DWIACTR )
{ /* line 284: */
DWIACTR = ((SVIACTR_nextparam+=1)<=RVIACTR_paramcount);
}
if ( DWIACTR )
{ 
 /* line 285: */
 /* line 286: */
A_CALLPROC(UVIACTR_outchars,(A_R1INDEX(Parameters,SVIACTR_nextparam)),(A_R1INDEX(Parameters,SVIACTR_nextparam),(UVIACTR_outchars).nonlocals));
} 
else
{ 
FWIACTR = A_VTRIM(EWIACTR,(MVIACTR_m),A_VTSCRIPT(&(EWIACTR.upb),(MVIACTR_m).upb,(OVIACTR_mind+1),(OVIACTR_mind+2))) ;
GWIACTR = A_C_PLUS('^',QVIACTR_c) ;
A_VASSIGN2(GWIACTR,FWIACTR,A68_CHAR );
 /* line 287: */
 /* line 288: */
 /* line 289: */
OVIACTR_mind+=2;
} 
} 
else
{ 
HWIACTR = !PVIACTR_hat;
if ( HWIACTR )
{ /* line 290: */
HWIACTR = (QVIACTR_c=='^');
}
if ( HWIACTR )
{ 
 /* line 291: */
PVIACTR_hat = A68_TRUE;
} 
else
{ 
IWIACTR = OVIACTR_mind+=1 ;
JWIACTR = (&A_VINDEX(MVIACTR_m,IWIACTR)) ;
(*JWIACTR) = QVIACTR_c;
 /* line 292: */
 /* line 293: */
 /* line 294: */
PVIACTR_hat = A68_FALSE;
} 
} 
}
 /* line 295: */
 /* line 296: */
STIACTR_primitivefault(Thisseverity, A_VTRIM(KWIACTR,(MVIACTR_m),A_VTSCRIPT(&(KWIACTR.upb),(MVIACTR_m).upb,1,OVIACTR_mind)), 0);
} 
A_PROC_EXIT(parameterisedmessage);
return;
} 
#undef NL

A68_VOID  NWIACTR_pmessage(A68_INT  Messagenumber, A68_150  Parameters)
{ 
A_PROC_ENTRY(pmessage);
 /* line 303: */
DVIACTR_parameterisedmessage(Messagenumber, Parameters, BSIACTR_errorseverity);
A_PROC_EXIT(pmessage);
return;
} 
#undef NL

A68_VOID  SWIACTR_pcomment(A68_INT  Messagenumber, A68_150  Parameters)
{ 
A_PROC_ENTRY(pcomment);
 /* line 311: */
DVIACTR_parameterisedmessage(Messagenumber, Parameters, YRIACTR_commentseverity);
A_PROC_EXIT(pcomment);
return;
} 
#undef NL

A68_VOID  VWIACTR_pwarning(A68_INT  Messagenumber, A68_150  Parameters)
{ 
A_PROC_ENTRY(pwarning);
 /* line 317: */
DVIACTR_parameterisedmessage(Messagenumber, Parameters, ZRIACTR_warningseverity);
A_PROC_EXIT(pwarning);
return;
} 
#undef NL

A68_VOID  YWIACTR_pportabilitywarning(A68_INT  Messagenumber, A68_150  Parameters)
{ 
A_PROC_ENTRY(pportabilitywarning);
 /* line 323: */
 /* line 324: */
 /* line 325: */
if ( LQIACTR_portableoption )
{ 
 /* line 326: */
DVIACTR_parameterisedmessage(Messagenumber, Parameters, ZRIACTR_warningseverity);
} 
A_PROC_EXIT(pportabilitywarning);
return;
} 
#undef NL
 /* line 329: */

A68_VOID  BXIACTR_pterminalerror(A68_INT  Messagenumber, A68_150  Parameters)
{ 
A_PROC_ENTRY(pterminalerror);
 /* line 333: */
 /* line 336: */
{ 
 /* line 337: */
 /* line 339: */
DVIACTR_parameterisedmessage(Messagenumber, Parameters, CSIACTR_terminalerrorseverity);
 /* line 340: */
 /* line 341: */
APBAOSF_exit(1);
} 
A_PROC_EXIT(pterminalerror);
return;
} 
#undef NL

A68_VOID  EXIACTR_fault(A68_VC  Message, A68_INT  Charposition)
{ 
A_PROC_ENTRY(fault);
 /* line 345: */
STIACTR_primitivefault(BSIACTR_errorseverity, Message, Charposition);
A_PROC_EXIT(fault);
return;
} 
#undef NL

A68_VOID  GXIACTR_comment(A68_INT  Messagenumber)
{ 
A68_VC  HXIACTR;  /* avoid structure result */
A_PROC_ENTRY(comment);
 /* line 348: */
KDHACTR_message( Messagenumber, &HXIACTR );
STIACTR_primitivefault(YRIACTR_commentseverity, HXIACTR, 0);
A_PROC_EXIT(comment);
return;
} 
#undef NL

A68_VOID  JXIACTR_warning(A68_INT  Messagenumber)
{ 
A68_VC  KXIACTR;  /* avoid structure result */
A_PROC_ENTRY(warning);
 /* line 351: */
KDHACTR_message( Messagenumber, &KXIACTR );
STIACTR_primitivefault(ZRIACTR_warningseverity, KXIACTR, 0);
A_PROC_EXIT(warning);
return;
} 
#undef NL

A68_VOID  MXIACTR_portabilitywarning(A68_INT  Messagenumber)
{ 
A68_VC  NXIACTR;  /* avoid structure result */
A_PROC_ENTRY(portabilitywarning);
 /* line 354: */
 /* line 355: */
 /* line 356: */
if ( LQIACTR_portableoption )
{ 
 /* line 357: */
KDHACTR_message( Messagenumber, &NXIACTR );
STIACTR_primitivefault(ZRIACTR_warningseverity, NXIACTR, 0);
} 
A_PROC_EXIT(portabilitywarning);
return;
} 
#undef NL

A68_VOID  PXIACTR_error(A68_INT  Messagenumber)
{ 
A68_VC  QXIACTR;  /* avoid structure result */
A_PROC_ENTRY(error);
 /* line 360: */
KDHACTR_message( Messagenumber, &QXIACTR );
STIACTR_primitivefault(BSIACTR_errorseverity, QXIACTR, 0);
A_PROC_EXIT(error);
return;
} 
#undef NL

A68_VOID  SXIACTR_terminalerror(A68_INT  Messagenumber)
{ 
A68_VC  TXIACTR;  /* avoid structure result */
A_PROC_ENTRY(terminalerror);
 /* line 363: */
 /* line 364: */
{ 
KDHACTR_message( Messagenumber, &TXIACTR );
STIACTR_primitivefault(CSIACTR_terminalerrorseverity, TXIACTR, 0);
 /* line 365: */
 /* line 366: */
APBAOSF_exit(1);
} 
A_PROC_EXIT(terminalerror);
return;
} 
#undef NL

A68_VOID  WXIACTR_assert(A68_VC  Assertion, A68_BOOL  Valid)
{ 
A_PROC_ENTRY(assert);
 /* line 369: */
 /* line 370: */
if ( !Valid )
{ 
ISIACTR_typelineonterminal(Assertion);
 /* line 371: */
 /* line 372: */
SXIACTR_terminalerror(661);
} 
A_PROC_EXIT(assert);
return;
} 
#undef NL

A_STATIC A68_VOID  YXIACTR_write_stdout(A68_VC  S)
{ 
A68_53  ZXIACTR;  /* avoid structure result */
A68_VC  AYIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_53  BYIACTR;  /* avoid structure result */
A_PROC_ENTRY(write_stdout);
 /* line 375: */
 /* line 376: */
{ 
UXBAOSF_write_buffer( USBAOSF_stdout, S, RIBAOSF_ignore_msg, &ZXIACTR );
ZXIACTR;
 /* line 377: */
 /* line 378: */
UXBAOSF_write_buffer( USBAOSF_stdout, A_HVEC(AYIACTR,GVBAOSF_newline_char,A68_CHAR ), RIBAOSF_ignore_msg, &BYIACTR );
BYIACTR;
} 
A_PROC_EXIT(write_stdout);
return;
} 
#undef NL

A68_VOID  JYIACTR_setparams(void)
{ 
A68_48  RBJACTR;  /* avoid structure result */
A68_48  SBJACTR_argv;
A68_INT  TBJACTR_argc;
A68_LINT * UBJACTR;  /* YIELD */
A68_VC  VBJACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} WBJACTR; 
A68_INT  XBJACTR_fileargindex;
A68_INT  YBJACTR_argindex;
A68_BOOL  ZBJACTR;  /* optbool result */
A68_VC  ACJACTR_thisarg;
A68_INT  BCJACTR;  /* YIELD */
A68_BOOL  ECJACTR;  /* optbool result */
A68_BOOL  JCJACTR;  /* optbool result */
A68_BOOL  OCJACTR;  /* optbool result */
A68_150  RCJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  UCJACTR;  /* optbool result */
A68_BOOL  ZCJACTR;  /* optbool result */
A68_BOOL  EDJACTR;  /* optbool result */
A68_BOOL  JDJACTR;  /* optbool result */
A68_BOOL  ODJACTR;  /* optbool result */
A68_BOOL  VDJACTR;  /* optbool result */
A68_88  YDJACTR;  /* procedure value */
A68_VC  DEJACTR_starflags;
A68_INT  EEJACTR_firstflag;
A68_BOOL  FEJACTR_setting;
A68_INT  GEJACTR;  /* YIELD */
A68_BOOL  HEJACTR;  /* optbool result */
A68_INT  IEJACTR;  /* YIELD */
A68_INT  JEJACTR;  /* YIELD */
A68_BOOL * KEJACTR_b;
A68_INT  LEJACTR;  /* forall loop counter */
A68_CHAR  MEJACTR_c;
A68_VC  NEJACTR;  /* OPERATORS - trim index */
A68_VC  OEJACTR;  /* forall yield */
A68_CHAR * PEJACTR;  /* forall control - []x */
A68_INT  QEJACTR;  /* forall loop counter */
A68_BOOL  REJACTR;  /* optbool result */
A68_BOOL  SEJACTR;  /* optbool result */
A68_VC  TEJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_150  UEJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  VEJACTR;  /* YIELD */
A68_BOOL * WEJACTR;  /* YIELD */
A68_133  ZEJACTR;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} AFJACTR; 
A68_133 * BFJACTR;  /* YIELD */
A68_133  EFJACTR;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} FFJACTR; 
A68_133 * GFJACTR;  /* YIELD */
A68_133  JFJACTR;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} KFJACTR; 
A68_133 * LFJACTR;  /* YIELD */
A68_VC  QFJACTR_uname;
A68_BOOL  SFJACTR;  /* clause result */
A68_138  UFJACTR;  /* OPERATORS - mode -> union mode */
A68_138  XFJACTR;  /* OPERATORS - mode -> union mode */
A68_INT  YFJACTR_uname_len;
A68_BOOL  ZFJACTR;  /* clause result */
A68_116  AGJACTR_u;
A68_VC  BGJACTR;  /* OPERATORS - istruct -> vector */
A68_VC  CGJACTR;  /* OPERATORS - trim index */
A68_VC  DGJACTR;  /* YIELD */
A68_VC  EGJACTR;  /* OPERATORS - assign op */
A68_138  FGJACTR;  /* OPERATORS - mode -> union mode */
A68_116  GGJACTR_u;
A68_VC  HGJACTR;  /* OPERATORS - istruct -> vector */
A68_VC  IGJACTR;  /* YIELD */
A68_VC  JGJACTR;  /* OPERATORS - assign op */
A68_138  KGJACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  LGJACTR_ok;
A68_138  MGJACTR;  /* united object - for case conformity */
A68_116  NGJACTR_uname;
A68_116  OGJACTR;  /* clause result */
A68_CHAR  PGJACTR_c;
A68_VC  QGJACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RGJACTR;  /* forall yield */
A68_CHAR * SGJACTR;  /* forall control - []x */
A68_INT  TGJACTR;  /* forall loop counter */
A68_BOOL  UGJACTR;  /* optbool result */
A68_138  VGJACTR;  /* united object - for case conformity */
A68_116  WGJACTR_uname;
A68_150  XGJACTR;  /* clause result */
A68_VC  YGJACTR;  /* OPERATORS - istruct -> vector */
A68_150  ZGJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  QHJACTR;  /* optbool result */
A68_150  THJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  WHJACTR;  /* optbool result */
A68_150  ZHJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  CIJACTR;  /* optbool result */
A68_VC  FIJACTR_module;
A68_BOOL  GIJACTR_foundmodule;
A68_150  HIJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KIJACTR_policy;
A68_BOOL  MIJACTR;  /* clause result */
A68_150  QIJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_150  XIJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(setparams);
{ 
 /* line 450: */
 /* line 455: */
 /* line 456: */
 /* line 553: */
RHCAOSF_get_args(  &RBJACTR );
SBJACTR_argv = RBJACTR;
 /* line 554: */
TBJACTR_argc = SBJACTR_argv.upb;
 /* line 557: */
UBJACTR = (&((&IYIACTR_config_info)->Translationtime)) ;
(*UBJACTR) = VPBAOSF_get_time();
 /* line 558: */
EPBAOSF_get_working_directory(  &VBJACTR );
WBJACTR.source = VBJACTR ;
BRIACTR_current_directory = (WBJACTR.destination);
 /* line 560: */
WYIACTR_readenvvariables();
 /* line 562: */
XBJACTR_fileargindex = 0;
 /* line 563: */
YBJACTR_argindex = 2;
 /* line 565: */
for ( ;; )
{ 
ZBJACTR = (XBJACTR_fileargindex==0);
if ( ZBJACTR )
{ /* line 566: */
 /* line 551: */
ZBJACTR = (YBJACTR_argindex<=TBJACTR_argc);
}
 /* line 567: */
if ( !(ZBJACTR) ) break;
ACJACTR_thisarg = A_VINDEX(SBJACTR_argv,YBJACTR_argindex);
 /* line 569: */
 /* line 570: */
 /* line 571: */
 /* line 572: */
BCJACTR = 1 ;
if ( (A_VINDEX(ACJACTR_thisarg,BCJACTR)=='-') )
{ 
YBJACTR_argindex+=1;
 /* line 574: */
ECJACTR = A_VC_EQ(ACJACTR_thisarg,DCJACTR);
if ( ! ECJACTR )
{ /* line 575: */
ECJACTR = A_VC_EQ(ACJACTR_thisarg,GCJACTR);
}
if ( ECJACTR )
{ 
 /* line 577: */
AQIACTR_verboseoption = A68_TRUE;
} 
else
{ 
JCJACTR = A_VC_EQ(ACJACTR_thisarg,ICJACTR);
if ( ! JCJACTR )
{ /* line 578: */
JCJACTR = A_VC_EQ(ACJACTR_thisarg,LCJACTR);
}
if ( JCJACTR )
{ 
 /* line 580: */
BQIACTR_lineoption = A68_TRUE;
} 
else
{ 
OCJACTR = A_VC_EQ(ACJACTR_thisarg,NCJACTR);
if ( ! OCJACTR )
{ /* line 581: */
OCJACTR = A_VC_EQ(ACJACTR_thisarg,QCJACTR);
}
if ( OCJACTR )
{ 
 /* line 582: */
if ( !TQAAOSF_vcdectoint((&SRIACTR_filenametruncate), A_VINDEX(SBJACTR_argv,YBJACTR_argindex)) )
{ 
 /* line 583: */
BXIACTR_pterminalerror(277, A_HARR(RCJACTR,A_VINDEX(SBJACTR_argv,YBJACTR_argindex),A68_VC ));
} 
 /* line 584: */
 /* line 586: */
YBJACTR_argindex+=1;
} 
else
{ 
UCJACTR = A_VC_EQ(ACJACTR_thisarg,TCJACTR);
if ( ! UCJACTR )
{ /* line 587: */
UCJACTR = A_VC_EQ(ACJACTR_thisarg,WCJACTR);
}
if ( UCJACTR )
{ 
 /* line 589: */
MQIACTR_longlongoption = A68_TRUE;
} 
else
{ 
ZCJACTR = A_VC_EQ(ACJACTR_thisarg,YCJACTR);
if ( ! ZCJACTR )
{ /* line 590: */
ZCJACTR = A_VC_EQ(ACJACTR_thisarg,BDJACTR);
}
if ( ZCJACTR )
{ 
 /* line 592: */
MQIACTR_longlongoption = A68_FALSE;
} 
else
{ 
EDJACTR = A_VC_EQ(ACJACTR_thisarg,DDJACTR);
if ( ! EDJACTR )
{ /* line 593: */
EDJACTR = A_VC_EQ(ACJACTR_thisarg,GDJACTR);
}
if ( EDJACTR )
{ 
 /* line 595: */
NQIACTR_nostructresultoption = A68_FALSE;
} 
else
{ 
JDJACTR = A_VC_EQ(ACJACTR_thisarg,IDJACTR);
if ( ! JDJACTR )
{ /* line 596: */
JDJACTR = A_VC_EQ(ACJACTR_thisarg,LDJACTR);
}
if ( JDJACTR )
{ 
 /* line 598: */
OQIACTR_closuremarkoption = A68_TRUE;
} 
else
{ 
ODJACTR = A_VC_EQ(ACJACTR_thisarg,NDJACTR);
if ( ! ODJACTR )
{ /* line 599: */
ODJACTR = A_VC_EQ(ACJACTR_thisarg,QDJACTR);
}
if ( ODJACTR )
{ 
 /* line 601: */
PQIACTR_closureonstackoption = A68_TRUE;
} 
else
{ 
 /* line 602: */
 /* line 603: */
if ( A_VC_EQ(ACJACTR_thisarg,SDJACTR) )
{ 
YXIACTR_write_stdout(SHAACTR_ctrans_version);
 /* line 604: */
 /* line 606: */
TQIACTR_filename_expected = A68_FALSE;
} 
else
{ 
VDJACTR = A_VC_EQ(ACJACTR_thisarg,UDJACTR);
if ( ! VDJACTR )
{ /* line 607: */
VDJACTR = A_VC_EQ(ACJACTR_thisarg,XDJACTR);
}
 /* line 608: */
if ( VDJACTR )
{ 
YXIACTR_write_stdout(SHAACTR_ctrans_version);
 /* line 609: */
YDJACTR.fn.fn_global = YXIACTR_write_stdout;
YDJACTR.nonlocals = A68_NIL;
JGAALIB_show_a68config(YDJACTR);
 /* line 610: */
YXIACTR_write_stdout(AEJACTR);
 /* line 611: */
 /* line 613: */
TQIACTR_filename_expected = A68_FALSE;
} 
else
{ 
 /* line 614: */
 /* line 615: */
if ( A_VC_EQ(ACJACTR_thisarg,CEJACTR) )
{ 
DEJACTR_starflags = A_VINDEX(SBJACTR_argv,YBJACTR_argindex);
 /* line 616: */
 /* line 618: */
GEJACTR = 1 ;
HEJACTR = (A_VINDEX(DEJACTR_starflags,GEJACTR)=='+');
if ( ! HEJACTR )
{ /* line 619: */
IEJACTR = 1 ;
HEJACTR = (A_VINDEX(DEJACTR_starflags,IEJACTR)=='-');
}
 /* line 620: */
if ( HEJACTR )
{ 
EEJACTR_firstflag = 2;
 /* line 621: */
 /* line 622: */
 /* line 623: */
JEJACTR = 1 ;
FEJACTR_setting = (A_VINDEX(DEJACTR_starflags,JEJACTR)=='+');
} 
else
{ 
EEJACTR_firstflag = 1;
 /* line 624: */
FEJACTR_setting = A68_TRUE;
 /* line 625: */
LEJACTR = KRIACTR_stars.dim[0].upb - KRIACTR_stars.dim[0].lwb;
KEJACTR_b = KRIACTR_stars.data;
for (;LEJACTR-- >= 0;
(KEJACTR_b += KRIACTR_stars.dim[0].stride
) )
{
(*KEJACTR_b) = A68_FALSE;
}
 /* line 626: */
} 
 /* line 628: */
 /* line 629: */
OEJACTR = A_VTRIM(NEJACTR,(DEJACTR_starflags),A_VTSCRIPT(&(NEJACTR.upb),(DEJACTR_starflags).upb,EEJACTR_firstflag,(DEJACTR_starflags).upb)) ;
QEJACTR = OEJACTR.upb -1;
PEJACTR = OEJACTR.data;
for (;QEJACTR-- >= 0;
(PEJACTR++
) )
{
MEJACTR_c = *PEJACTR;
 /* line 630: */
REJACTR = (MEJACTR_c>='0');
if ( REJACTR )
{REJACTR = (MEJACTR_c<='9');
}
if ( ! REJACTR )
{SEJACTR = (MEJACTR_c>='A');
if ( SEJACTR )
{SEJACTR = (MEJACTR_c<='Z');
}
REJACTR = SEJACTR;
}
 /* line 631: */
 /* line 632: */
if ( !REJACTR )
{ 
 /* line 633: */
 /* line 634: */
BXIACTR_pterminalerror(283, A_HARR(UEJACTR,A_HVEC(TEJACTR,MEJACTR_c,A68_CHAR ),A68_VC ));
} 
else
{ 
 /* line 635: */
 /* line 636: */
VEJACTR = (A68_INT)(unsigned char)MEJACTR_c ;
WEJACTR = (&A_R1INDEX(KRIACTR_stars,VEJACTR)) ;
(*WEJACTR) = FEJACTR_setting;
} 
}
 /* line 637: */
 /* line 639: */
YBJACTR_argindex+=1;
} 
else
{ 
 /* line 640: */
 /* line 641: */
if ( A_VC_EQ(ACJACTR_thisarg,YEJACTR) )
{ 
AFJACTR.source = A_VINDEX(SBJACTR_argv,YBJACTR_argindex) ;
ZEJACTR.Dir = (AFJACTR.destination);
ZEJACTR.Next = DRIACTR_modinfo_dirlist;
BFJACTR = A_HEAP(A68_133 ) ;
(*BFJACTR) = ZEJACTR ;
DRIACTR_modinfo_dirlist = BFJACTR;
 /* line 642: */
 /* line 644: */
YBJACTR_argindex+=1;
} 
else
{ 
 /* line 645: */
 /* line 646: */
if ( A_VC_EQ(ACJACTR_thisarg,DFJACTR) )
{ 
FFJACTR.source = A_VINDEX(SBJACTR_argv,YBJACTR_argindex) ;
EFJACTR.Dir = (FFJACTR.destination);
EFJACTR.Next = ERIACTR_cfile_dirlist;
GFJACTR = A_HEAP(A68_133 ) ;
(*GFJACTR) = EFJACTR ;
ERIACTR_cfile_dirlist = GFJACTR;
 /* line 647: */
 /* line 649: */
YBJACTR_argindex+=1;
} 
else
{ 
 /* line 650: */
 /* line 651: */
if ( A_VC_EQ(ACJACTR_thisarg,IFJACTR) )
{ 
KFJACTR.source = A_VINDEX(SBJACTR_argv,YBJACTR_argindex) ;
JFJACTR.Dir = (KFJACTR.destination);
JFJACTR.Next = CRIACTR_nil_dirlist;
LFJACTR = A_HEAP(A68_133 ) ;
(*LFJACTR) = JFJACTR ;
FRIACTR_library_directory = LFJACTR;
 /* line 652: */
 /* line 654: */
YBJACTR_argindex+=1;
} 
else
{ 
 /* line 655: */
 /* line 656: */
if ( A_VC_EQ(ACJACTR_thisarg,NFJACTR) )
{ 
 /* line 658: */
FRIACTR_library_directory = CRIACTR_nil_dirlist;
} 
else
{ 
 /* line 659: */
 /* line 660: */
if ( A_VC_EQ(ACJACTR_thisarg,PFJACTR) )
{ 
 /* line 661: */
{ 
QFJACTR_uname = A_VINDEX(SBJACTR_argv,YBJACTR_argindex);
 /* line 662: */
YBJACTR_argindex+=1;
 /* line 663: */
 /* line 664: */
 /* line 665: */
SFJACTR = A_VC_EQ(QFJACTR_uname,TFJACTR);
if ( SFJACTR )
{ 
 /* line 666: */
QRIACTR_uname_option = A_UNITE(UFJACTR,mode2,2,PRIACTR_fromseedfile);
} 
else
{ 
 /* line 667: */
 /* line 668: */
if ( A_VC_EQ(QFJACTR_uname,WFJACTR) )
{ 
 /* line 669: */
 /* line 671: */
QRIACTR_uname_option = A_UNITE(XFJACTR,mode1,1,ORIACTR_fromcfile);
} 
else
{ 
 /* line 672: */
{ 
YFJACTR_uname_len = QFJACTR_uname.upb;
 /* line 673: */
 /* line 674: */
 /* line 675: */
ZFJACTR = (YFJACTR_uname_len>=WDAACTR_maxuname);
if ( ZFJACTR )
{ 
DGJACTR = A_ISVEC(BGJACTR,(&AGJACTR_u),7,A68_CHAR ) ;
EGJACTR = A_VTRIM(CGJACTR,(QFJACTR_uname),A_VTSCRIPT(&(CGJACTR.upb),(QFJACTR_uname).upb,1,WDAACTR_maxuname)) ;
A_VASSIGN2(EGJACTR,DGJACTR,A68_CHAR );
 /* line 676: */
 /* line 677: */
 /* line 678: */
QRIACTR_uname_option = A_UNITE(FGJACTR,mode3,3,AGJACTR_u);
} 
else
{ 
 /* line 679: */
 /* line 680: */
if ( (YFJACTR_uname_len<WDAACTR_maxuname) )
{ 
IGJACTR = A_ISVEC(HGJACTR,(&GGJACTR_u),7,A68_CHAR ) ;
JGJACTR = A_VC_PLUS(QFJACTR_uname,A_C_TIMES('A',(WDAACTR_maxuname-YFJACTR_uname_len))) ;
A_VASSIGN2(JGJACTR,IGJACTR,A68_CHAR );
 /* line 681: */
 /* line 682: */
QRIACTR_uname_option = A_UNITE(KGJACTR,mode3,3,GGJACTR_u);
} 
} 
} 
 /* line 684: */
LGJACTR_ok = A68_TRUE;
 /* line 685: */
MGJACTR = QRIACTR_uname_option ;
switch ( MGJACTR.mode )
{ 
case 3: /* STRUCT 7 CHAR */
NGJACTR_uname = (MGJACTR.data.mode3);
OGJACTR = NGJACTR_uname;
break;
default: 
A_IMP_SKIP ;
break;
} 
RGJACTR = A_HISVEC(QGJACTR,OGJACTR,7,A68_CHAR ) ;
TGJACTR = RGJACTR.upb -1;
SGJACTR = RGJACTR.data;
for (;TGJACTR-- >= 0;
(SGJACTR++
) )
{
PGJACTR_c = *SGJACTR;
 /* line 686: */
 /* line 687: */
if ( !(LGJACTR_ok) ) break;
UGJACTR = ((A68_INT)(unsigned char)PGJACTR_c>=(A68_INT)(unsigned char)'A');
if ( UGJACTR )
{ /* line 688: */
UGJACTR = ((A68_INT)(unsigned char)PGJACTR_c<=(A68_INT)(unsigned char)'Z');
}
LGJACTR_ok = UGJACTR;
}
 /* line 690: */
if ( !LGJACTR_ok )
{ 
VGJACTR = QRIACTR_uname_option ;
switch ( VGJACTR.mode )
{ 
case 3: /* STRUCT 7 CHAR */
WGJACTR_uname = (VGJACTR.data.mode3);
XGJACTR = A_HARR(ZGJACTR,A_HISVEC(YGJACTR,WGJACTR_uname,7,A68_CHAR ),A68_VC );
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 691: */
BXIACTR_pterminalerror(286, XGJACTR);
} 
} 
} 
} 
} 
else
{ 
 /* line 692: */
if ( A_VC_EQ(ACJACTR_thisarg,BHJACTR) )
{ 
 /* line 693: */
GQIACTR_streamoption = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(ACJACTR_thisarg,DHJACTR) )
{ 
 /* line 694: */
CQIACTR_dotoption = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(ACJACTR_thisarg,FHJACTR) )
{ 
 /* line 695: */
DQIACTR_quoteoption = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(ACJACTR_thisarg,HHJACTR) )
{ 
 /* line 696: */
EQIACTR_skipoption = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(ACJACTR_thisarg,JHJACTR) )
{ 
 /* line 697: */
FQIACTR_tildeoption = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(ACJACTR_thisarg,LHJACTR) )
{ 
 /* line 698: */
IQIACTR_optbooloption = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(ACJACTR_thisarg,NHJACTR) )
{ 
 /* line 699: */
KQIACTR_keeplistoption = A68_TRUE;
} 
else
{ 
QHJACTR = A_VC_EQ(ACJACTR_thisarg,PHJACTR);
if ( ! QHJACTR )
{ /* line 700: */
QHJACTR = A_VC_EQ(ACJACTR_thisarg,SHJACTR);
}
 /* line 701: */
if ( QHJACTR )
{ 
 /* line 702: */
 /* line 703: */
if ( !TQAAOSF_vcdectoint((&TRIACTR_tracelevel), A_VINDEX(SBJACTR_argv,YBJACTR_argindex)) )
{ 
 /* line 704: */
BXIACTR_pterminalerror(277, A_HARR(THJACTR,A_VINDEX(SBJACTR_argv,YBJACTR_argindex),A68_VC ));
} 
 /* line 705: */
 /* line 706: */
YBJACTR_argindex+=1;
} 
else
{ 
WHJACTR = A_VC_EQ(ACJACTR_thisarg,VHJACTR);
if ( ! WHJACTR )
{ /* line 707: */
WHJACTR = A_VC_EQ(ACJACTR_thisarg,YHJACTR);
}
 /* line 708: */
if ( WHJACTR )
{ 
 /* line 709: */
 /* line 710: */
if ( !TQAAOSF_vcdectoint((&WRIACTR_debuglevel), A_VINDEX(SBJACTR_argv,YBJACTR_argindex)) )
{ 
 /* line 711: */
BXIACTR_pterminalerror(277, A_HARR(ZHJACTR,A_VINDEX(SBJACTR_argv,YBJACTR_argindex),A68_VC ));
} 
 /* line 712: */
 /* line 713: */
YBJACTR_argindex+=1;
} 
else
{ 
CIJACTR = A_VC_EQ(ACJACTR_thisarg,BIJACTR);
if ( ! CIJACTR )
{ /* line 714: */
CIJACTR = A_VC_EQ(ACJACTR_thisarg,EIJACTR);
}
 /* line 715: */
if ( CIJACTR )
{ 
FIJACTR_module = A_VINDEX(SBJACTR_argv,YBJACTR_argindex);
 /* line 716: */
GIJACTR_foundmodule = TCHACTR_settracelevel(WRIACTR_debuglevel, FIJACTR_module);
 /* line 717: */
YBJACTR_argindex+=1;
 /* line 718: */
if ( !GIJACTR_foundmodule )
{ 
 /* line 719: */
VWIACTR_pwarning(280, A_HARR(HIJACTR,FIJACTR_module,A68_VC ));
} 
} 
else
{ 
 /* line 720: */
 /* line 721: */
if ( A_VC_EQ(ACJACTR_thisarg,JIJACTR) )
{ 
 /* line 722: */
{ 
KIJACTR_policy = A_VINDEX(SBJACTR_argv,YBJACTR_argindex);
 /* line 723: */
YBJACTR_argindex+=1;
 /* line 724: */
 /* line 725: */
MIJACTR = A_VC_EQ(KIJACTR_policy,NIJACTR);
if ( MIJACTR )
{ 
 /* line 726: */
WQIACTR_cstream_policy = UQIACTR_file_cstreams;
} 
else
{ 
 /* line 727: */
if ( A_VC_EQ(KIJACTR_policy,PIJACTR) )
{ 
 /* line 728: */
 /* line 729: */
WQIACTR_cstream_policy = VQIACTR_memory_cstreams;
} 
else
{ 
 /* line 730: */
BXIACTR_pterminalerror(285, A_HARR(QIJACTR,KIJACTR_policy,A68_VC ));
} 
} 
} 
} 
else
{ 
 /* line 733: */
 /* line 732: */
 /* line 734: */
if ( A_VC_EQ(ACJACTR_thisarg,SIJACTR) )
{ 
 /* line 736: */
SQIACTR_tempfileoption = A68_TRUE;
} 
else
{ 
 /* line 737: */
 /* line 738: */
if ( A_VC_EQ(ACJACTR_thisarg,UIJACTR) )
{ 
 /* line 740: */
QQIACTR_checkoption = A68_TRUE;
} 
else
{ 
 /* line 741: */
 /* line 742: */
if ( A_VC_EQ(ACJACTR_thisarg,WIJACTR) )
{ 
 /* line 744: */
 /* line 745: */
RQIACTR_oldalienoption = A68_TRUE;
} 
else
{ 
 /* line 746: */
 /* line 747: */
 /* line 748: */
BXIACTR_pterminalerror(271, A_HARR(XIJACTR,ACJACTR_thisarg,A68_VC ));
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
else
{ 
 /* line 749: */
 /* line 750: */
XBJACTR_fileargindex = YBJACTR_argindex;
} 
}
 /* line 752: */
 /* line 753: */
 /* line 754: */
 /* line 755: */
if ( (TBJACTR_argc==XBJACTR_fileargindex) )
{ 
 /* line 756: */
 /* line 757: */
MYIACTR_setfilename(A_VINDEX(SBJACTR_argv,TBJACTR_argc));
} 
else
{ 
 /* line 758: */
if ( TQIACTR_filename_expected )
{ 
 /* line 759: */
 /* line 761: */
SXIACTR_terminalerror(274);
} 
else
{ 
OTIACTR_terminatenormally();
} 
} 
 /* line 763: */
 /* line 764: */
GPIACTR_initialisemessages(MQIACTR_longlongoption);
} 
A_PROC_EXIT(setparams);
return;
} 
#undef NL

A68_52 * BJJACTR_find_and_open_file(A68_VC  Basename, A68_133 * Dirlist, A68_VC * Full_filename)
{ 
A68_133 * FJJACTR_this_dir;
A68_52 * GJJACTR_file;
A68_VC  HJJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} IJJACTR; 
A68_BOOL  JJJACTR;  /* clause result */
A68_52 * KJJACTR;  /* clause result */
A_PROC_ENTRY(find_and_open_file);
 /* line 776: */
 /* line 777: */
{ 
FJJACTR_this_dir = Dirlist;
 /* line 778: */
 /* line 780: */
for ( ;; )
{ 
 /* line 781: */
 /* line 782: */
 /* line 783: */
if ( !((FJJACTR_this_dir!=CRIACTR_nil_dirlist)) ) break;
 /* line 784: */
IJJACTR.source = A_VC_PLUS(A_VC_PLUS((*(&(FJJACTR_this_dir->Dir))),A_HVEC(HJJACTR,'/',A68_CHAR )),Basename) ;
(*Full_filename) = (IJJACTR.destination);
 /* line 785: */
 /* line 786: */
GJJACTR_file = QVBAOSF_open_file((*Full_filename), ATBAOSF_read_access, RIBAOSF_ignore_msg);
 /* line 787: */
 /* line 788: */
 /* line 789: */
JJJACTR = (GJJACTR_file!=SSBAOSF_nil_file);
if ( JJJACTR )
{ 
 /* line 790: */
goto EJJACTR_file_found;
} 
 /* line 791: */
 /* line 792: */
FJJACTR_this_dir = (*(&(FJJACTR_this_dir->Next)));
}
 /* line 794: */
 /* line 795: */
 /* line 796: */
KJJACTR = SSBAOSF_nil_file;
goto CJJACTR;
EJJACTR_file_found:
 /* line 798: */
KJJACTR = GJJACTR_file;
CJJACTR: ;
} 
A_PROC_EXIT(find_and_open_file);
return( KJJACTR );
} 
#undef NL

A68_VOID  NJJACTR_initialisetrace(void)
{ 
A68_INT  OJJACTR;  /* clause result */
A_PROC_ENTRY(initialisetrace);
{ 
 /* line 813: */
 /* line 814: */
if ( (TRIACTR_tracelevel>0) )
{ 
 /* line 815: */
OJJACTR = 1;
} 
else
{ 
OJJACTR = (-1);
} 
MJJACTR_startline = OJJACTR;
 /* line 816: */
 /* line 817: */
LJJACTR_traceon = (MJJACTR_startline>=0);
} 
A_PROC_EXIT(initialisetrace);
return;
} 
#undef NL

A68_BITS  PJJACTR_tracelevelflags(void)
{ 
A68_BITS  AKJACTR;  /* clause result */
A_PROC_ENTRY(tracelevelflags);
{ 
 /* line 825: */
 /* line 826: */
 /* line 827: */
 /* line 828: */
 /* line 829: */
 /* line 830: */
 /* line 831: */
 /* line 832: */
 /* line 833: */
 /* line 835: */
 /* line 836: */
 /* line 837: */
switch ( TRIACTR_tracelevel )
{ 
case 1: 
 /* line 838: */
AKJACTR = UJJACTR_tracetree;
break;
case 2: 
 /* line 839: */
AKJACTR = (A68_BITS )(UJJACTR_tracetree|SJJACTR_traceids);
break;
case 3: 
 /* line 840: */
AKJACTR = (A68_BITS )((A68_BITS )((A68_BITS )(UJJACTR_tracetree|QJJACTR_tracealllevels)|SJJACTR_traceids)|TJJACTR_longiddec);
break;
case 4: 
 /* line 841: */
AKJACTR = (A68_BITS )((A68_BITS )(UJJACTR_tracetree|SJJACTR_traceids)|VJJACTR_tracetreeafter);
break;
case 5: 
 /* line 842: */
AKJACTR = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(UJJACTR_tracetree|QJJACTR_tracealllevels)|SJJACTR_traceids)|TJJACTR_longiddec)|VJJACTR_tracetreeafter);
break;
case 6: 
 /* line 844: */
AKJACTR = 00U;
break;
case 7: 
 /* line 846: */
AKJACTR = ~00U;
break;
default: 
 /* line 848: */
AKJACTR = 00U;
break;
} 
} 
A_PROC_EXIT(tracelevelflags);
return( AKJACTR );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void HPIACTR(void)   /* initialise DECS environment */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","-dir",".","environment.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","./ctrans_version.m","./message.m","./moduletracer.m","./incinstallation.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/usefulops.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osif.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_129  RPIACTR;  /* procedure value */
A68_VC  WPIACTR;  /* avoid structure result */
A68_VC  YPIACTR;  /* OPERATORS - nil -> mode */
A68_134  LRIACTR;  /* avoid structure result */
A68_INT  NRIACTR;  /* forall loop counter */
A68_138  RRIACTR;  /* OPERATORS - mode -> union mode */
A68_88  NSIACTR;  /* procedure value */
A68_152  PWIACTR;  /* procedure value */
A68_157  EYIACTR;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} FYIACTR; 
A68_138  HYIACTR;  /* OPERATORS - mode -> union mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
LHAACTR();   /* USE ctrans_version */
DDHACTR();   /* USE message */
BCHACTR();   /* USE moduletracer */
ODAACTR();   /* USE incinstallation */
IKAAOSF();   /* USE usefulops */
CSCAOSF();   /* USE osif */
BAAAOSF();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/src/environment.a68";
A_config.translation_time = "Wed May  5 17:38:59 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "GPIACTR (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:59 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS environment);
UEAALIB_a68config(LGAALIB_configinfo, LPIACTR);
 /* line 53: */
RPIACTR.fn.fn_global = OPIACTR_generator;
RPIACTR.nonlocals = A68_NIL;
MPIACTR_anonymous = RPIACTR;
 /* line 55: */
TPIACTR_generator( A68_FALSE, &WPIACTR );
XPIACTR_nullstr = WPIACTR;
 /* line 56: */
ZPIACTR_nilstr = (A_VVAC(YPIACTR));
 /* line 62: */
 /* line 63: */
AQIACTR_verboseoption = A68_FALSE;
 /* line 64: */
BQIACTR_lineoption = A68_FALSE;
 /* line 65: */
CQIACTR_dotoption = A68_FALSE;
 /* line 66: */
DQIACTR_quoteoption = A68_FALSE;
 /* line 67: */
EQIACTR_skipoption = A68_FALSE;
 /* line 69: */
FQIACTR_tildeoption = A68_FALSE;
 /* line 71: */
GQIACTR_streamoption = A68_FALSE;
 /* line 73: */
HQIACTR_streamoutoption = A68_FALSE;
 /* line 74: */
IQIACTR_optbooloption = A68_FALSE;
 /* line 75: */
JQIACTR_traceoption = A68_FALSE;
 /* line 76: */
KQIACTR_keeplistoption = A68_FALSE;
 /* line 78: */
LQIACTR_portableoption = A68_FALSE;
 /* line 80: */
MQIACTR_longlongoption = A68_FALSE;
 /* line 82: */
NQIACTR_nostructresultoption = A68_TRUE;
 /* line 84: */
OQIACTR_closuremarkoption = A68_FALSE;
 /* line 87: */
PQIACTR_closureonstackoption = A68_FALSE;
 /* line 89: */
QQIACTR_checkoption = A68_FALSE;
 /* line 90: */
RQIACTR_oldalienoption = A68_FALSE;
 /* line 91: */
SQIACTR_tempfileoption = A68_FALSE;
 /* line 95: */
TQIACTR_filename_expected = A68_TRUE;
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 105: */
WQIACTR_cstream_policy = VQIACTR_memory_cstreams;
 /* line 108: */
XQIACTR_sourcefilename = ZPIACTR_nilstr;
 /* line 109: */
YQIACTR_basenamesourcefile = ZPIACTR_nilstr;
 /* line 110: */
ZQIACTR_sourcefilesuffix = ZPIACTR_nilstr;
 /* line 111: */
ARIACTR_seedfilename = ZPIACTR_nilstr;
 /* line 113: */
BRIACTR_current_directory = ZPIACTR_nilstr;
 /* line 116: */
 /* line 117: */
CRIACTR_nil_dirlist = (A68_133 *)A68_NIL;
 /* line 118: */
DRIACTR_modinfo_dirlist = CRIACTR_nil_dirlist;
 /* line 119: */
ERIACTR_cfile_dirlist = CRIACTR_nil_dirlist;
 /* line 122: */
FRIACTR_library_directory = CRIACTR_nil_dirlist;
 /* line 125: */
HRIACTR_generator( A68_TRUE, &LRIACTR );
KRIACTR_stars = LRIACTR;
 /* line 126: */
NRIACTR = KRIACTR_stars.dim[0].upb - KRIACTR_stars.dim[0].lwb;
MRIACTR_star = KRIACTR_stars.data;
for (;NRIACTR-- >= 0;
(MRIACTR_star += KRIACTR_stars.dim[0].stride
) )
{
(*MRIACTR_star) = A68_FALSE;
}
 /* line 129: */
 /* line 132: */
 /* line 134: */
 /* line 135: */
 /* line 136: */
QRIACTR_uname_option = A_UNITE(RRIACTR,mode2,2,PRIACTR_fromseedfile);
 /* line 140: */
SRIACTR_filenametruncate = VDAACTR_maxid;
 /* line 153: */
TRIACTR_tracelevel = 0;
 /* line 154: */
 /* line 155: */
 /* line 157: */
WRIACTR_debuglevel = 0;
 /* line 162: */
XRIACTR_linenumber = 0;
 /* line 164: */
 /* line 165: */
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 170: */
DSIACTR_greatestseverity = 0;
 /* line 172: */
ESIACTR_comment_count = 0;
 /* line 173: */
FSIACTR_warning_count = 0;
 /* line 174: */
GSIACTR_error_count = 0;
 /* line 176: */
 /* line 179: */
NSIACTR.fn.fn_global = ISIACTR_typelineonterminal;
NSIACTR.nonlocals = A68_NIL;
MSIACTR_list = (NSIACTR);
 /* line 181: */
 /* line 183: */
 /* line 187: */
 /* line 188: */
 /* line 208: */
 /* line 210: */
 /* line 212: */
 /* line 213: */
 /* line 253: */
 /* line 254: */
 /* line 298: */
 /* line 305: */
PWIACTR.fn.fn_global = NWIACTR_pmessage;
PWIACTR.nonlocals = A68_NIL;
OWIACTR_perror = (PWIACTR);
 /* line 307: */
 /* line 313: */
 /* line 319: */
 /* line 328: */
 /* line 343: */
 /* line 347: */
 /* line 350: */
 /* line 353: */
 /* line 359: */
 /* line 362: */
 /* line 368: */
 /* line 374: */
 /* line 386: */
 /* line 398: */
 /* line 400: */
CYIACTR_nil_modinfolist = (A68_155 *)A68_NIL;
 /* line 401: */
DYIACTR_nil_envinfo = (A68_156 *)A68_NIL;
 /* line 403: */
 /* line 404: */
 /* line 405: */
FYIACTR.source = SHAACTR_ctrans_version ;
EYIACTR.Version = (FYIACTR.destination);
 /* line 406: */
EYIACTR.Translationtime = 0;
 /* line 407: */
EYIACTR.Sourcefile = ZPIACTR_nilstr;
 /* line 408: */
EYIACTR.Nameseed = GYIACTR;
 /* line 409: */
EYIACTR.Nameseedorigin = A_EMPTY(HYIACTR,4);
 /* line 410: */
EYIACTR.Used_modules = CYIACTR_nil_modinfolist;
 /* line 412: */
EYIACTR.Commandline = ZPIACTR_nilstr;
EYIACTR.Environment = DYIACTR_nil_envinfo;
IYIACTR_config_info = EYIACTR;
 /* line 417: */
 /* line 424: */
 /* line 425: */
 /* line 771: */
 /* line 803: */
LJJACTR_traceon = A68_FALSE;
 /* line 804: */
 /* line 806: */
 /* line 811: */
 /* line 812: */
 /* line 820: */
 /* line 821: */
 /* line 824: */
 /* line 850: */
 /* line 852: */
 /* line 880: */
/*SKIP*/;
A_PROC_EXIT(DECS environment);
} 
#undef NL
/* end of translation of environment.a68 */
