/* UNAME:DEFAOSF */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_INT ,A68t32);
typedef struct A68t32  A68_32 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t33,(A68_BOOL ,struct A68t32 *),(A68_BOOL ,struct A68t32 *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(BOOL) MODE32 */
struct A68t35{
A68_INT  Status;
A_PAD_INT(PAD_1)
};
typedef struct A68t35  A68_35 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t36,(A68_VC ),(A68_VC ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t37,(A68_VC ,A68_INT *,struct A68t35 *),(A68_VC ,A68_INT *,struct A68t35 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE26,REF INT) MODE35 */
struct A68t34{
A68_INT  Charnumber;
A_PAD_INT(PAD_2)
A68_INT  Linenumber;
A_PAD_INT(PAD_3)
A68_INT  Indent;
A_PAD_INT(PAD_4)
A68_INT  Width;
A_PAD_INT(PAD_5)
A68_INT  Sizeincr;
A_PAD_INT(PAD_6)
struct A68t35  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_7)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_8)
A68_BOOL  Input;
A_PAD_BOOL(PAD_9)
struct A68t36  Putbuffer;
struct A68t37  Getbuffer;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE35,REF MODE26,BOOL,BOOL,BOOL,MODE36,MODE37)  */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t40,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t40  A68_40 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t41,(struct A68t32 ,struct A68t32 *),(struct A68t32 ,struct A68t32 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(MODE32) REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t42,(A68_INT ,struct A68t32 *),(A68_INT ,struct A68t32 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT) REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ),(A68_VC ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE32) VOID */
struct A68t46 ;

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t46 ,A68_VC *),(struct A68t46 ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE46) REF MODE26 */
A_VECTOR(A68_VC ,A68t46);
typedef struct A68t46  A68_46 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t47,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t48,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t50 ,A68_VC *),(struct A68t50 ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE50) MODE26 */
struct A68t50 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t50  A68_50 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t51,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_BITS ,A68t53);
typedef struct A68t53  A68_53 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t54);
typedef struct A68t54  A68_54 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t55);
typedef struct A68t55  A68_55 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t56,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE34) VOID */
struct A68t57{
A68_INT  Int;
A_PAD_INT(PAD_10)
A68_INT  Width;
A_PAD_INT(PAD_11)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT,INT)  */
struct A68t58{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_12)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE26,INT)  */
struct A68t59{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_13)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE26,INT)  */
struct A68t60{
A68_INT  Tab;
A_PAD_INT(PAD_14)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */
struct A68t61{
A68_INT  Pos;
A_PAD_INT(PAD_15)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT)  */
struct A68t62{
A68_INT  After;
A_PAD_INT(PAD_16)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT)  */
struct A68t63{
A68_INT  Spaces;
A_PAD_INT(PAD_17)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT)  */
struct A68t64{
A68_INT  Lines;
A_PAD_INT(PAD_18)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT)  */
struct A68t65{
A68_INT  Indent;
A_PAD_INT(PAD_19)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t66);
typedef struct A68t66  A68_66 ;    /* STRAIGHT MODE52 */
struct A68t52 { A68_INT mode; union {
A68_INT  mode1;
struct A68t32  mode2;
A68_BITS  mode3;
struct A68t53  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t54  mode9;
A68_REAL  mode10;
struct A68t55  mode11;
struct A68t56  mode12;
struct A68t57  mode13;
struct A68t58  mode14;
struct A68t59  mode15;
struct A68t60  mode16;
struct A68t61  mode17;
struct A68t62  mode18;
struct A68t63  mode19;
struct A68t64  mode20;
struct A68t65  mode21;
struct A68t66  mode22;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t52  A68_52 ;    /* UNION(INT,MODE32,BITS,MODE53,SHORT BITS,CHAR,MODE26,BOOL,MODE54,REAL,MODE55,MODE56,MODE57,MODE58,MODE59,MODE60,MODE61,MODE62,MODE63,MODE64,MODE65,MODE66)  */

A_PROCEDURE(A68_VOID ,A68t67,(A68_BOOL ,struct A68t58 *),(A68_BOOL ,struct A68t58 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(BOOL) MODE58 */

A_PROCEDURE(A68_VOID ,A68t68,(A68_BOOL ,struct A68t59 *),(A68_BOOL ,struct A68t59 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(BOOL) MODE59 */

A_PROCEDURE(A68_INT ,A68t69,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE34) INT */

A_PROCEDURE(A68_INT ,A68t70,(struct A68t34 *,A68_INT ),(struct A68t34 *,A68_INT ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE34,INT) INT */

A_PROCEDURE(A68_VOID ,A68t71,(A68_INT ,A68_INT ,struct A68t57 *),(A68_INT ,A68_INT ,struct A68t57 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(INT,INT) MODE57 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_INT ,struct A68t58 *),(A68_VC ,A68_INT ,struct A68t58 *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,INT) MODE58 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_INT ,struct A68t59 *),(A68_VC ,A68_INT ,struct A68t59 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,INT) MODE59 */

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t60 *),(A68_INT ,struct A68t60 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT) MODE60 */

A_PROCEDURE(A68_VOID ,A68t75,(A68_INT ,struct A68t61 *),(A68_INT ,struct A68t61 *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(INT) MODE61 */

A_PROCEDURE(A68_VOID ,A68t76,(A68_INT ,struct A68t62 *),(A68_INT ,struct A68t62 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(INT) MODE62 */

A_PROCEDURE(A68_VOID ,A68t77,(A68_INT ,struct A68t63 *),(A68_INT ,struct A68t63 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT) MODE63 */

A_PROCEDURE(A68_VOID ,A68t78,(A68_INT ,struct A68t64 *),(A68_INT ,struct A68t64 *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT) MODE64 */

A_PROCEDURE(A68_VOID ,A68t79,(A68_INT ,struct A68t65 *),(A68_INT ,struct A68t65 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(INT) MODE65 */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t34 *,A68_VC ),(struct A68t34 *,A68_VC ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE34,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t34 *,A68_INT ,A68_INT ),(struct A68t34 *,A68_INT ,A68_INT ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF MODE34,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t34 *,A68_BITS ,A68_INT ),(struct A68t34 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF MODE34,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t34 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t34 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REF MODE34,REAL,INT,INT) VOID */
struct A68t85 ;

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t34 *,struct A68t85 ),(struct A68t34 *,struct A68t85 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF MODE34,MODE85) VOID */
A_VECTOR(struct A68t52 ,A68t85);
typedef struct A68t85  A68_85 ;    /* VECTOR [] MODE52 */
struct A68t87 ;
struct A68t88 ;

A_PROCEDURE(struct A68t34 *,A68t86,(struct A68t87 ,struct A68t88 ),(struct A68t87 ,struct A68t88 ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE87,MODE88) REF MODE34 */
struct A68t87 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t87  A68_87 ;    /* UNION(INT,REF MODE26)  */
struct A68t88 { A68_INT mode; union {
struct A68t36  mode1;
struct A68t37  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t88  A68_88 ;    /* UNION(MODE36,MODE37)  */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,struct A68t85 ,A68_VC *),(A68_VC ,struct A68t85 ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF MODE26,MODE85) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t34 *,A68_VC *),(struct A68t34 *,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF MODE34) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t85 ,A68_VC *),(struct A68t85 ,A68_VC *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE85) REF MODE26 */
struct A68t92{
A68_INT  Number;
A_PAD_INT(PAD_20)
struct A68t93 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_21)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT,REF MODE93,BITS)  */
A_VECTOR(struct A68t95 ,A68t94);
typedef struct A68t94  A68_94 ;    /* VECTOR [] MODE95 */
struct A68t95{
struct A68t92  Msgno;
A68_VC  Text;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(MODE92,REF MODE26)  */
struct A68t93{
A68_VC  Name;
struct A68t94  Messages;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(REF MODE26,REF MODE94)  */

A_PROCEDURE(A68_VOID ,A68t96,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(BOOL) MODE46 */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t92 ,struct A68t46 ),(struct A68t92 ,struct A68t46 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE92,MODE46) VOID */
A_VECTOR(struct A68t100 ,A68t99);
typedef struct A68t99  A68_99 ;    /* VECTOR [] MODE100 */
struct A68t100{
A68_INT  Number;
A_PAD_INT(PAD_22)
A68_BITS  Class;
A_PAD_BITS(PAD_23)
A68_VC  Text;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t98{
A68_VC  Name;
struct A68t94  Messages;
A68_BOOL * Initialised;
struct A68t99  Setup;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE26,REF MODE94,REF BOOL,MODE99)  */

A_PROCEDURE(A68_VOID ,A68t101,(A68_BOOL ,struct A68t98 *),(A68_BOOL ,struct A68t98 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(BOOL) MODE98 */
A_VECTOR(A68_VC ,A68t102);
typedef struct A68t102  A68_102 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t46 ,struct A68t102 *),(struct A68t46 ,struct A68t102 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE46) MODE102 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t102 ,struct A68t46 *),(struct A68t102 ,struct A68t46 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE102) MODE46 */
struct A68t106 ;

A_PROCEDURE(A68_BOOL ,A68t105,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE106) BOOL */
struct A68t106 { A68_INT mode; union {
struct A68t92  mode1;
struct A68t95  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t106  A68_106 ;    /* UNION(MODE92,MODE95)  */

A_PROCEDURE(A68_INT ,A68t107,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE92) INT */

A_PROCEDURE(A68_VOID ,A68t108,(A68_INT ,struct A68t98 ,struct A68t92 *),(A68_INT ,struct A68t98 ,struct A68t92 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT,MODE98) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t109,(struct A68t92 ,struct A68t98 ),(struct A68t92 ,struct A68t98 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE92,MODE98) BOOL */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t92 ,struct A68t46 ,struct A68t95 *),(struct A68t92 ,struct A68t46 ,struct A68t95 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE92,MODE46) MODE95 */

A_PROCEDURE(A68_VOID ,A68t111,(void),(void *));
typedef struct A68t111  A68_111 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,63,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 63 CHAR */
A_VECTOR(struct A68t119 ,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] MODE119 */
struct A68t117{
A68_BITS  Type;
A_PAD_BITS(PAD_24)
struct A68t118  Elements;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(BITS,REF MODE118)  */
struct A68t119 { A68_INT mode; union {
A68_INT * mode1;
struct A68t117  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t119  A68_119 ;    /* UNION(REF INT,MODE117)  */
struct A68t120{
A68_INT  Sort;
A_PAD_INT(PAD_25)
A68_VC  Value;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t120 ,A68t122);
typedef struct A68t122  A68_122 ;    /* VECTOR [] MODE120 */
A_VECTOR(struct A68t126 ,A68t125);
typedef struct A68t125  A68_125 ;    /* VECTOR [] MODE126 */
struct A68t124{
A68_INT  Choice;
A_PAD_INT(PAD_26)
struct A68t125  Params;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,REF MODE125)  */
struct A68t126 { A68_INT mode; union {
struct A68t124  mode1;
struct A68t120  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t126  A68_126 ;    /* UNION(MODE124,MODE120)  */

A_PROCEDURE(A68_VOID ,A68t128,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE97) REF MODE26 */
struct A68t127 { A68_INT mode; union {
struct A68t128  mode1;
A68_INT * mode2;
struct A68t117  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t127  A68_127 ;    /* UNION(MODE128,REF INT,MODE117)  */
struct A68t129{
A68_INT * Sort;
struct A68t127  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(REF INT,MODE127,REF MODE26,REF MODE26)  */
struct A68t130{
struct A68t129  Rule;
struct A68t130 * Rest;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(MODE129,REF MODE130)  */

A_PROCEDURE(A68_BOOL ,A68t131,(struct A68t117 ),(struct A68t117 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE117) BOOL */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t118 ,struct A68t117 *),(struct A68t118 ,struct A68t117 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE118) MODE117 */

A_PROCEDURE(A68_VOID ,A68t133,(A68_BOOL ,struct A68t118 *),(A68_BOOL ,struct A68t118 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(BOOL) MODE118 */

A_PROCEDURE(A68_VOID ,A68t134,(struct A68t119 ,struct A68t117 *),(struct A68t119 ,struct A68t117 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE119) MODE117 */
A_VECTOR(struct A68t129 ,A68t135);
typedef struct A68t135  A68_135 ;    /* VECTOR [] MODE129 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t119 ,struct A68t135 ,A68_VC *),(struct A68t119 ,struct A68t135 ,A68_VC *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE119,REF MODE135) REF MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_BOOL ,A68t138,(A68_VC ),(A68_VC ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(REF MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,3,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(struct A68t52 ,2,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t34 *,struct A68t135 ),(struct A68t34 *,struct A68t135 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF MODE34,REF MODE135) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 4 CHAR */
struct A68t144{
A68_INT * No;
struct A68t127  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(REF INT,MODE127,MODE26,MODE26)  */
A_VECTOR(struct A68t144 ,A68t145);
typedef struct A68t145  A68_145 ;    /* VECTOR [] MODE144 */

A_PROCEDURE(struct A68t130 *,A68t146,(struct A68t130 *,struct A68t145 ),(struct A68t130 *,struct A68t145 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE130,MODE145) REF MODE130 */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t126 ,struct A68t122 *),(struct A68t126 ,struct A68t122 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE126) REF MODE122 */

A_PROCEDURE(A68_VOID ,A68t148,(A68_BOOL ,struct A68t122 *),(A68_BOOL ,struct A68t122 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(BOOL) MODE122 */

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t120 ),(struct A68t120 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE120) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t126 ),(struct A68t126 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE126) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  CHDAOSF_nilstr;
extern A68_VC  IHDAOSF_nullstr;
extern A68_VOID  RRDAOSF_tab(A68_INT ,A68_60 *);
extern A68_VOID  LSDAOSF_lines(A68_INT ,A68_64 *);
extern A68_VOID  PKDAOSF_newline(struct A68t34 *);
extern A68_VOID  KYDAOSF_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  YCEAOSF_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ZRAAOSF(void);   /* messageproc */
extern void QMDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_115   HEFAOSF = {"$Id: commandsyntax.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,IEFAOSF,HEFAOSF,63)
A68_119  LEFAOSF_noparameters;
A68_126  TEFAOSF_no_parameters;
#define UEFAOSF_prod_syn 0X0U
#define VEFAOSF_alt_syn 0X8U
#define WEFAOSF_opt_syn 0X2U
#define XEFAOSF_star_syn 0X4U
static A68_137   UHFAOSF = {"illegal"}; 
A_GISVEC(A68_VC ,VHFAOSF,UHFAOSF,7)
static A68_139   KIFAOSF = {" | "}; 
A_GISVEC(A68_VC ,MIFAOSF,KIFAOSF,3)
static A68_143   ELFAOSF = {"::= "}; 
A_GISVEC(A68_VC ,FLFAOSF,ELFAOSF,4)
typedef struct   /* env of non-global proc */
{
A68_118  Cs;
} NFFAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_118  Cs;
} YFFAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OGFAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} GHFAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} NMFAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * SMFAOSF_n;
A68_122 * QMFAOSF_ans;
} WMFAOSF_add;
typedef struct   /* env of non-global proc */
{
A68_149  UMFAOSF_add;
A68_150  KNFAOSF_simplify;
} MNFAOSF_simplify;
typedef struct   /* env of non-global proc */
{
int dummy;
} YNFAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} IOFAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_122 * QMFAOSF_ans;
} ANFAOSF_generator;

A_STATIC A68_VOID  OEFAOSF_generator(A68_BOOL  NEFAOSF_anonymous, A68_VC  *ReturnedValue);

A68_BOOL  ZEFAOSF_is_alt(A68_117  Rule);

A68_BOOL  CFFAOSF_is_opt(A68_117  Rule);

A68_BOOL  FFFAOSF_is_star(A68_117  Rule);

A68_VOID  IFFAOSF_alt(A68_118  Cs, A68_117  *ReturnedValue);

A_STATIC A68_VOID  MFFAOSF_generator(A68_BOOL  KFFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals);

A68_VOID  TFFAOSF_prod(A68_118  Cs, A68_117  *ReturnedValue);

A_STATIC A68_VOID  XFFAOSF_generator(A68_BOOL  VFFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals);

A68_VOID  EGFAOSF_opt(A68_119  Cs, A68_117  *ReturnedValue);

A_STATIC A68_VOID  NGFAOSF_generator(A68_BOOL  LGFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals);

A68_VOID  WGFAOSF_star(A68_119  Cs, A68_117  *ReturnedValue);

A_STATIC A68_VOID  FHFAOSF_generator(A68_BOOL  DHFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals);

A68_VOID  PHFAOSF_show_syntax(A68_119  Syntax, A68_135  Analysers, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  AIFAOSF_needs_brackets(A68_VC  Line);

A68_VOID  SKFAOSF_show_readers(A68_34 * Out, A68_135  Readers);

A68_130 * XLFAOSF_add_readers(A68_130 * Readers, A68_145  New_rules);

A68_VOID  JMFAOSF_simplify_params(A68_126  Param, A68_122  *ReturnedValue);

A_STATIC A68_VOID  MMFAOSF_generator(A68_BOOL  KMFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VMFAOSF_add(A68_120  V, void *NonLocals);

A_STATIC A68_VOID  ZMFAOSF_generator(A68_BOOL  XMFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LNFAOSF_simplify(A68_126  Param, void *NonLocals);

A_STATIC A68_VOID  XNFAOSF_generator(A68_BOOL  VNFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HOFAOSF_generator(A68_BOOL  FOFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZMFAOSF_generator(A68_BOOL  XMFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals)
#define NL(x) (((ANFAOSF_generator *)NonLocals)->x)
{ 
A68_122  BNFAOSF;  /* clause result */
A68_122  CNFAOSF;  /* OPERATORS - dynamic generator */
{ 
CNFAOSF.upb = ((*NL(QMFAOSF_ans)).upb+10) ;
( XMFAOSF_anonymous? A_VLOC(A68_120 ,CNFAOSF): A_VHEAP(A68_120 ,CNFAOSF) );
BNFAOSF = CNFAOSF;
} 
*ReturnedValue = (BNFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  MFFAOSF_generator(A68_BOOL  KFFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals)
#define NL(x) (((NFFAOSF_generator *)NonLocals)->x)
{ 
A68_118  OFFAOSF;  /* clause result */
A68_118  PFFAOSF;  /* OPERATORS - dynamic generator */
{ 
PFFAOSF.upb = NL(Cs).upb ;
( KFFAOSF_anonymous? A_VLOC(A68_119 ,PFFAOSF): A_VHEAP(A68_119 ,PFFAOSF) );
OFFAOSF = PFFAOSF;
} 
*ReturnedValue = (OFFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  XFFAOSF_generator(A68_BOOL  VFFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals)
#define NL(x) (((YFFAOSF_generator *)NonLocals)->x)
{ 
A68_118  ZFFAOSF;  /* clause result */
A68_118  AGFAOSF;  /* OPERATORS - dynamic generator */
{ 
AGFAOSF.upb = NL(Cs).upb ;
( VFFAOSF_anonymous? A_VLOC(A68_119 ,AGFAOSF): A_VHEAP(A68_119 ,AGFAOSF) );
ZFFAOSF = AGFAOSF;
} 
*ReturnedValue = (ZFFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NGFAOSF_generator(A68_BOOL  LGFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals)
#define NL(x) (((OGFAOSF_generator *)NonLocals)->x)
{ 
A68_118  PGFAOSF;  /* clause result */
A68_118  QGFAOSF;  /* OPERATORS - dynamic generator */
{ 
QGFAOSF.upb = 1 ;
( LGFAOSF_anonymous? A_VLOC(A68_119 ,QGFAOSF): A_VHEAP(A68_119 ,QGFAOSF) );
PGFAOSF = QGFAOSF;
} 
*ReturnedValue = (PGFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  FHFAOSF_generator(A68_BOOL  DHFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals)
#define NL(x) (((GHFAOSF_generator *)NonLocals)->x)
{ 
A68_118  HHFAOSF;  /* clause result */
A68_118  IHFAOSF;  /* OPERATORS - dynamic generator */
{ 
IHFAOSF.upb = 1 ;
( DHFAOSF_anonymous? A_VLOC(A68_119 ,IHFAOSF): A_VHEAP(A68_119 ,IHFAOSF) );
HHFAOSF = IHFAOSF;
} 
*ReturnedValue = (HHFAOSF);
return;
} 
#undef NL

A_STATIC A68_BOOL  AIFAOSF_needs_brackets(A68_VC  Line)
{ 
A68_INT  BIFAOSF_n;
A68_BOOL  CIFAOSF_ans;
A68_CHAR * DIFAOSF_c;
A68_INT  EIFAOSF;  /* forall loop counter */
A68_BOOL  FIFAOSF;  /* optbool result */
A68_BOOL  GIFAOSF;  /* optbool result */
A68_BOOL  HIFAOSF;  /* optbool result */
A68_BOOL  IIFAOSF;  /* clause result */
A_PROC_ENTRY(needs_brackets);
 /* line 122: */
 /* line 123: */
{ 
BIFAOSF_n = 0;
CIFAOSF_ans = A68_FALSE;
 /* line 124: */
EIFAOSF = Line.upb -1;
DIFAOSF_c = Line.data;
for (;EIFAOSF-- >= 0;
(DIFAOSF_c++
) )
{
 /* line 125: */
if ( !(!CIFAOSF_ans) ) break;
FIFAOSF = ((*DIFAOSF_c)=='{');
if ( ! FIFAOSF )
{ /* line 126: */
FIFAOSF = ((*DIFAOSF_c)=='[');
}
if ( FIFAOSF )
{ 
 /* line 127: */
BIFAOSF_n+=1;
} 
else
{ 
GIFAOSF = ((*DIFAOSF_c)=='}');
if ( ! GIFAOSF )
{ /* line 128: */
GIFAOSF = ((*DIFAOSF_c)==']');
}
if ( GIFAOSF )
{ 
 /* line 129: */
BIFAOSF_n-=1;
} 
else
{ 
HIFAOSF = ((*DIFAOSF_c)==' ');
if ( HIFAOSF )
{ /* line 130: */
HIFAOSF = (BIFAOSF_n==0);
}
if ( HIFAOSF )
{ 
 /* line 131: */
 /* line 132: */
CIFAOSF_ans = A68_TRUE;
} 
} 
} 
}
 /* line 133: */
 /* line 134: */
IIFAOSF = CIFAOSF_ans;
} 
A_PROC_EXIT(needs_brackets);
return( IIFAOSF );
} 
#undef NL

A_STATIC A68_VOID  MMFAOSF_generator(A68_BOOL  KMFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals)
#define NL(x) (((NMFAOSF_generator *)NonLocals)->x)
{ 
A68_122  OMFAOSF;  /* clause result */
A68_122  PMFAOSF;  /* OPERATORS - dynamic generator */
{ 
PMFAOSF.upb = 0 ;
( KMFAOSF_anonymous? A_VLOC(A68_120 ,PMFAOSF): A_VHEAP(A68_120 ,PMFAOSF) );
OMFAOSF = PMFAOSF;
} 
*ReturnedValue = (OMFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VMFAOSF_add(A68_120  V, void *NonLocals)
#define NL(x) (((WMFAOSF_add *)NonLocals)->x)
{ 
A68_148  YMFAOSF_generator;   /* proc value of non-global proc */
A68_122  DNFAOSF;  /* avoid structure result */
A68_122  ENFAOSF_new;
A68_122  FNFAOSF;  /* OPERATORS - trim index */
A68_122  GNFAOSF;  /* YIELD */
A68_INT  HNFAOSF;  /* YIELD */
A68_120 * INFAOSF;  /* YIELD */
A_PROC_ENTRY(add);
 /* line 204: */
 /* line 205: */
{ 
 /* line 206: */
if ( ((*NL(SMFAOSF_n))==(*NL(QMFAOSF_ans)).upb) )
{ 
A_CLOSURE( YMFAOSF_generator, ZMFAOSF_generator, ANFAOSF_generator );
(( ANFAOSF_generator * ) ( YMFAOSF_generator.nonlocals )) -> QMFAOSF_ans = NL(QMFAOSF_ans);
A_CALLPROC(YMFAOSF_generator,(A68_FALSE, &DNFAOSF),(A68_FALSE, &DNFAOSF,(YMFAOSF_generator).nonlocals));
ENFAOSF_new = DNFAOSF;
 /* line 207: */
GNFAOSF = A_VTRIM(FNFAOSF,(ENFAOSF_new),A_VTSCRIPT(&(FNFAOSF.upb),(ENFAOSF_new).upb,1,(*NL(SMFAOSF_n)))) ;
A_VASSIGN2((*NL(QMFAOSF_ans)),GNFAOSF,A68_120 );
 /* line 208: */
 /* line 209: */
(*NL(QMFAOSF_ans)) = ENFAOSF_new;
} 
 /* line 210: */
 /* line 211: */
HNFAOSF = (*NL(SMFAOSF_n))+=1 ;
INFAOSF = (&A_VINDEX((*NL(QMFAOSF_ans)),HNFAOSF)) ;
(*INFAOSF) = V;
} 
A_PROC_EXIT(add);
return;
} 
#undef NL

A_STATIC A68_VOID  LNFAOSF_simplify(A68_126  Param, void *NonLocals)
#define NL(x) (((MNFAOSF_simplify *)NonLocals)->x)
{ 
A68_126  NNFAOSF;  /* united object - for case conformity */
A68_120  ONFAOSF_value;
A68_124  PNFAOSF_choice;
A68_126 * QNFAOSF_p;
A68_125  RNFAOSF;  /* forall yield */
A68_INT  SNFAOSF;  /* forall loop counter */
A_PROC_ENTRY(simplify);
 /* line 214: */
 /* line 215: */
NNFAOSF = Param ;
switch ( NNFAOSF.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
ONFAOSF_value = (NNFAOSF.data.mode2);
 /* line 216: */
if ( (ONFAOSF_value.Sort>0) )
{ 
 /* line 217: */
A_CALLPROC(NL(UMFAOSF_add),(ONFAOSF_value),(ONFAOSF_value,(NL(UMFAOSF_add)).nonlocals));
} 
break;
case 1: /* STRUCT(INT,REF MODE125)  */
PNFAOSF_choice = (NNFAOSF.data.mode1);
 /* line 218: */
RNFAOSF = PNFAOSF_choice.Params ;
SNFAOSF = RNFAOSF.upb -1;
QNFAOSF_p = RNFAOSF.data;
for (;SNFAOSF-- >= 0;
(QNFAOSF_p++
) )
{
A_CALLPROC(NL(KNFAOSF_simplify),((*QNFAOSF_p)),((*QNFAOSF_p),(NL(KNFAOSF_simplify)).nonlocals));
}
 /* line 219: */
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(simplify);
return;
} 
#undef NL

A_STATIC A68_VOID  XNFAOSF_generator(A68_BOOL  VNFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals)
#define NL(x) (((YNFAOSF_generator *)NonLocals)->x)
{ 
A68_122  ZNFAOSF;  /* clause result */
A68_122  AOFAOSF;  /* OPERATORS - dynamic generator */
{ 
AOFAOSF.upb = 1 ;
( VNFAOSF_anonymous? A_VLOC(A68_120 ,AOFAOSF): A_VHEAP(A68_120 ,AOFAOSF) );
ZNFAOSF = AOFAOSF;
} 
*ReturnedValue = (ZNFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  HOFAOSF_generator(A68_BOOL  FOFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals)
#define NL(x) (((IOFAOSF_generator *)NonLocals)->x)
{ 
A68_122  JOFAOSF;  /* clause result */
A68_122  KOFAOSF;  /* OPERATORS - dynamic generator */
{ 
KOFAOSF.upb = 1 ;
( FOFAOSF_anonymous? A_VLOC(A68_120 ,KOFAOSF): A_VHEAP(A68_120 ,KOFAOSF) );
JOFAOSF = KOFAOSF;
} 
*ReturnedValue = (JOFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  OEFAOSF_generator(A68_BOOL  NEFAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  PEFAOSF;  /* clause result */
A68_VC  QEFAOSF;  /* OPERATORS - dynamic generator */
{ 
QEFAOSF.upb = 0 ;
( NEFAOSF_anonymous? A_VLOC(A68_CHAR ,QEFAOSF): A_VHEAP(A68_CHAR ,QEFAOSF) );
PEFAOSF = QEFAOSF;
} 
*ReturnedValue = (PEFAOSF);
return;
} 
#undef NL

A68_BOOL  ZEFAOSF_is_alt(A68_117  Rule)
{ 
A68_BOOL  AFFAOSF;  /* clause result */
A_PROC_ENTRY(is_alt);
AFFAOSF = ((A68_BITS )(Rule.Type&VEFAOSF_alt_syn)==VEFAOSF_alt_syn);
A_PROC_EXIT(is_alt);
return( AFFAOSF );
} 
#undef NL

A68_BOOL  CFFAOSF_is_opt(A68_117  Rule)
{ 
A68_BOOL  DFFAOSF;  /* clause result */
A_PROC_ENTRY(is_opt);
DFFAOSF = ((A68_BITS )(Rule.Type&WEFAOSF_opt_syn)==WEFAOSF_opt_syn);
A_PROC_EXIT(is_opt);
return( DFFAOSF );
} 
#undef NL

A68_BOOL  FFFAOSF_is_star(A68_117  Rule)
{ 
A68_BOOL  GFFAOSF;  /* clause result */
A_PROC_ENTRY(is_star);
GFFAOSF = ((A68_BITS )(Rule.Type&XEFAOSF_star_syn)==XEFAOSF_star_syn);
A_PROC_EXIT(is_star);
return( GFFAOSF );
} 
#undef NL

A68_VOID  IFFAOSF_alt(A68_118  Cs, A68_117  *ReturnedValue)
{ 
A68_117  JFFAOSF;  /* collateral clause result */
A68_133  LFFAOSF_generator;   /* proc value of non-global proc */
A68_118  QFFAOSF;  /* avoid structure result */
A68_117  RFFAOSF;  /* clause result */
A_PROC_ENTRY(alt);
 /* line 88: */
JFFAOSF.Type = 0X8U;
A_CLOSURE( LFFAOSF_generator, MFFAOSF_generator, NFFAOSF_generator );
(( NFFAOSF_generator * ) ( LFFAOSF_generator.nonlocals )) -> Cs = Cs;
A_CALLPROC(LFFAOSF_generator,(A68_FALSE, &QFFAOSF),(A68_FALSE, &QFFAOSF,(LFFAOSF_generator).nonlocals));
A_VASSIGN2(Cs,QFFAOSF,A68_119 ) ;
JFFAOSF.Elements = QFFAOSF;
RFFAOSF = JFFAOSF;
A_PROC_EXIT(alt);
*ReturnedValue = (RFFAOSF);
return;
} 
#undef NL

A68_VOID  TFFAOSF_prod(A68_118  Cs, A68_117  *ReturnedValue)
{ 
A68_117  UFFAOSF;  /* collateral clause result */
A68_133  WFFAOSF_generator;   /* proc value of non-global proc */
A68_118  BGFAOSF;  /* avoid structure result */
A68_117  CGFAOSF;  /* clause result */
A_PROC_ENTRY(prod);
 /* line 91: */
UFFAOSF.Type = 0X0U;
A_CLOSURE( WFFAOSF_generator, XFFAOSF_generator, YFFAOSF_generator );
(( YFFAOSF_generator * ) ( WFFAOSF_generator.nonlocals )) -> Cs = Cs;
A_CALLPROC(WFFAOSF_generator,(A68_FALSE, &BGFAOSF),(A68_FALSE, &BGFAOSF,(WFFAOSF_generator).nonlocals));
A_VASSIGN2(Cs,BGFAOSF,A68_119 ) ;
UFFAOSF.Elements = BGFAOSF;
CGFAOSF = UFFAOSF;
A_PROC_EXIT(prod);
*ReturnedValue = (CGFAOSF);
return;
} 
#undef NL

A68_VOID  EGFAOSF_opt(A68_119  Cs, A68_117  *ReturnedValue)
{ 
A68_119  FGFAOSF;  /* united object - for case conformity */
A68_117  GGFAOSF_rule;
A68_117  HGFAOSF;  /* collateral clause result */
A68_117  IGFAOSF;  /* clause result */
A68_INT * JGFAOSF_terminal_symbol;
A68_117  KGFAOSF;  /* collateral clause result */
A68_133  MGFAOSF_generator;   /* proc value of non-global proc */
A68_118  RGFAOSF;  /* avoid structure result */
A68_119  SGFAOSF;  /* OPERATORS - mode -> union mode */
A68_118  TGFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_118  UGFAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(opt);
 /* line 94: */
 /* line 95: */
FGFAOSF = Cs ;
switch ( FGFAOSF.mode )
{ 
case 2: /* STRUCT(BITS,REF MODE118)  */
GGFAOSF_rule = (FGFAOSF.data.mode2);
 /* line 96: */
HGFAOSF.Type = (A68_BITS )(GGFAOSF_rule.Type|0X2U);
 /* line 97: */
HGFAOSF.Elements = GGFAOSF_rule.Elements;
IGFAOSF = HGFAOSF;
break;
case 1: /* REF INT */
JGFAOSF_terminal_symbol = (FGFAOSF.data.mode1);
 /* line 98: */
KGFAOSF.Type = 0X2U;
A_CLOSURE( MGFAOSF_generator, NGFAOSF_generator, OGFAOSF_generator );
 /* line 99: */
A_CALLPROC(MGFAOSF_generator,(A68_FALSE, &RGFAOSF),(A68_FALSE, &RGFAOSF,(MGFAOSF_generator).nonlocals));
UGFAOSF = A_HVEC(TGFAOSF,A_UNITE(SGFAOSF,mode1,1,JGFAOSF_terminal_symbol),A68_119 ) ;
A_VASSIGN2(UGFAOSF,RGFAOSF,A68_119 ) ;
KGFAOSF.Elements = RGFAOSF;
IGFAOSF = KGFAOSF;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(opt);
*ReturnedValue = (IGFAOSF);
return;
} 
#undef NL

A68_VOID  WGFAOSF_star(A68_119  Cs, A68_117  *ReturnedValue)
{ 
A68_119  XGFAOSF;  /* united object - for case conformity */
A68_117  YGFAOSF_rule;
A68_117  ZGFAOSF;  /* collateral clause result */
A68_117  AHFAOSF;  /* clause result */
A68_INT * BHFAOSF_terminal_symbol;
A68_117  CHFAOSF;  /* collateral clause result */
A68_133  EHFAOSF_generator;   /* proc value of non-global proc */
A68_118  JHFAOSF;  /* avoid structure result */
A68_119  KHFAOSF;  /* OPERATORS - mode -> union mode */
A68_118  LHFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_118  MHFAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(star);
 /* line 102: */
 /* line 103: */
XGFAOSF = Cs ;
switch ( XGFAOSF.mode )
{ 
case 2: /* STRUCT(BITS,REF MODE118)  */
YGFAOSF_rule = (XGFAOSF.data.mode2);
 /* line 104: */
ZGFAOSF.Type = (A68_BITS )(YGFAOSF_rule.Type|0X4U);
 /* line 105: */
ZGFAOSF.Elements = YGFAOSF_rule.Elements;
AHFAOSF = ZGFAOSF;
break;
case 1: /* REF INT */
BHFAOSF_terminal_symbol = (XGFAOSF.data.mode1);
 /* line 106: */
CHFAOSF.Type = 0X4U;
A_CLOSURE( EHFAOSF_generator, FHFAOSF_generator, GHFAOSF_generator );
 /* line 107: */
A_CALLPROC(EHFAOSF_generator,(A68_FALSE, &JHFAOSF),(A68_FALSE, &JHFAOSF,(EHFAOSF_generator).nonlocals));
MHFAOSF = A_HVEC(LHFAOSF,A_UNITE(KHFAOSF,mode1,1,BHFAOSF_terminal_symbol),A68_119 ) ;
A_VASSIGN2(MHFAOSF,JHFAOSF,A68_119 ) ;
CHFAOSF.Elements = JHFAOSF;
AHFAOSF = CHFAOSF;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(star);
*ReturnedValue = (AHFAOSF);
return;
} 
#undef NL
 /* line 111: */

A68_VOID  PHFAOSF_show_syntax(A68_119  Syntax, A68_135  Analysers, A68_VC  *ReturnedValue)
{ 
A68_119  QHFAOSF;  /* united object - for case conformity */
A68_INT * RHFAOSF_symbol_number;
A68_VC  SHFAOSF;  /* clause result */
A68_BOOL  THFAOSF;  /* optbool result */
A68_VC  WHFAOSF;  /* avoid structure result */
A68_117  XHFAOSF_rule;
A68_VC  JIFAOSF_ans;
A68_VC  LIFAOSF;  /* clause result */
A68_VC  NIFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OIFAOSF_alt;
A68_INT  PIFAOSF_n;
A68_INT  QIFAOSF_l;
A68_119 * RIFAOSF_r;
A68_118  SIFAOSF;  /* forall yield */
A68_INT  TIFAOSF;  /* forall loop counter */
A68_VC  UIFAOSF;  /* avoid structure result */
A68_VC  VIFAOSF_phrase;
A68_BOOL  WIFAOSF;  /* optbool result */
A68_140  XIFAOSF;  /* collateral clause result */
A68_52  YIFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZIFAOSF;  /* YIELD */
A68_52  AJFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  BJFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  CJFAOSF;  /* YIELD */
A68_VC  DJFAOSF;  /* clause result */
A68_85  EJFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  FJFAOSF;  /* avoid structure result */
A68_VC  GJFAOSF_brk;
A68_141  HJFAOSF;  /* collateral clause result */
A68_52  IJFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  JJFAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KJFAOSF;  /* clause result */
A68_85  LJFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MJFAOSF;  /* avoid structure result */
A68_140  NJFAOSF;  /* collateral clause result */
A68_52  OJFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  PJFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  QJFAOSF;  /* OPERATORS - mode -> union mode */
A68_85  RJFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  SJFAOSF;  /* avoid structure result */
A68_140  TJFAOSF;  /* collateral clause result */
A68_52  UJFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  VJFAOSF;  /* YIELD */
A68_52  WJFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  XJFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  YJFAOSF;  /* YIELD */
A68_85  ZJFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  AKFAOSF;  /* avoid structure result */
A68_BOOL  BKFAOSF;  /* optbool result */
A68_140  CKFAOSF;  /* collateral clause result */
A68_52  DKFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  EKFAOSF;  /* YIELD */
A68_52  FKFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  GKFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  HKFAOSF;  /* YIELD */
A68_85  IKFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  JKFAOSF;  /* avoid structure result */
A68_141  KKFAOSF;  /* collateral clause result */
A68_52  LKFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  MKFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  NKFAOSF;  /* YIELD */
A68_85  OKFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  PKFAOSF;  /* avoid structure result */
A_PROC_ENTRY(show_syntax);
 /* line 112: */
 /* line 113: */
QHFAOSF = Syntax ;
switch ( QHFAOSF.mode )
{ 
case 1: /* REF INT */
RHFAOSF_symbol_number = (QHFAOSF.data.mode1);
 /* line 114: */
 /* line 115: */
 /* line 116: */
if ( ((*RHFAOSF_symbol_number)==0) )
{ 
SHFAOSF = IHDAOSF_nullstr;
} 
else
{ 
THFAOSF = ((*RHFAOSF_symbol_number)<0);
if ( ! THFAOSF )
{ /* line 117: */
THFAOSF = ((*RHFAOSF_symbol_number)>Analysers.upb);
}
 /* line 118: */
if ( THFAOSF )
{ 
ZCAAOSF_makervc( VHFAOSF, &WHFAOSF );
SHFAOSF = WHFAOSF;
} 
else
{ 
 /* line 119: */
 /* line 120: */
SHFAOSF = (*(&((&A_VINDEX(Analysers,(*RHFAOSF_symbol_number)))->Description)));
} 
} 
break;
case 2: /* STRUCT(BITS,REF MODE118)  */
XHFAOSF_rule = (QHFAOSF.data.mode2);
 /* line 121: */
{ 
 /* line 136: */
JIFAOSF_ans = IHDAOSF_nullstr;
 /* line 137: */
if ( ZEFAOSF_is_alt(XHFAOSF_rule) )
{ 
LIFAOSF = MIFAOSF;
} 
else
{ 
LIFAOSF = A_HVEC(NIFAOSF,' ',A68_CHAR );
} 
OIFAOSF_alt = LIFAOSF;
 /* line 138: */
PIFAOSF_n = 0;
QIFAOSF_l = XHFAOSF_rule.Elements.upb;
 /* line 139: */
 /* line 140: */
SIFAOSF = XHFAOSF_rule.Elements ;
TIFAOSF = SIFAOSF.upb -1;
RIFAOSF_r = SIFAOSF.data;
for (;TIFAOSF-- >= 0;
(RIFAOSF_r++
) )
{
PHFAOSF_show_syntax( (*RIFAOSF_r), Analysers, &UIFAOSF );
VIFAOSF_phrase = UIFAOSF;
 /* line 141: */
WIFAOSF = (QIFAOSF_l>1);
if ( WIFAOSF )
{ /* line 142: */
WIFAOSF = AIFAOSF_needs_brackets(VIFAOSF_phrase);
}
if ( WIFAOSF )
{ 
ZIFAOSF = '{' ;
XIFAOSF.data[0] = A_UNITE(YIFAOSF,mode6,6,ZIFAOSF);
XIFAOSF.data[1] = A_UNITE(AJFAOSF,mode7,7,VIFAOSF_phrase);
CJFAOSF = '}' ;
XIFAOSF.data[2] = A_UNITE(BJFAOSF,mode6,6,CJFAOSF);
 /* line 143: */
 /* line 144: */
YCEAOSF_oneline( A_HISVEC(EJFAOSF,XIFAOSF,3,A68_52 ), &FJFAOSF );
DJFAOSF = FJFAOSF;
} 
else
{ 
DJFAOSF = VIFAOSF_phrase;
} 
GJFAOSF_brk = DJFAOSF;
 /* line 145: */
 /* line 146: */
if ( ((PIFAOSF_n+=1)==QIFAOSF_l) )
{ 
HJFAOSF.data[0] = A_UNITE(IJFAOSF,mode7,7,JIFAOSF_ans);
HJFAOSF.data[1] = A_UNITE(JJFAOSF,mode7,7,GJFAOSF_brk);
 /* line 147: */
YCEAOSF_oneline( A_HISVEC(LJFAOSF,HJFAOSF,2,A68_52 ), &MJFAOSF );
KJFAOSF = MJFAOSF;
} 
else
{ 
NJFAOSF.data[0] = A_UNITE(OJFAOSF,mode7,7,JIFAOSF_ans);
NJFAOSF.data[1] = A_UNITE(PJFAOSF,mode7,7,GJFAOSF_brk);
NJFAOSF.data[2] = A_UNITE(QJFAOSF,mode7,7,OIFAOSF_alt);
 /* line 148: */
 /* line 149: */
YCEAOSF_oneline( A_HISVEC(RJFAOSF,NJFAOSF,3,A68_52 ), &SJFAOSF );
KJFAOSF = SJFAOSF;
} 
JIFAOSF_ans = KJFAOSF;
}
 /* line 151: */
 /* line 152: */
if ( CFFAOSF_is_opt(XHFAOSF_rule) )
{ 
VJFAOSF = '[' ;
TJFAOSF.data[0] = A_UNITE(UJFAOSF,mode6,6,VJFAOSF);
TJFAOSF.data[1] = A_UNITE(WJFAOSF,mode7,7,JIFAOSF_ans);
YJFAOSF = ']' ;
TJFAOSF.data[2] = A_UNITE(XJFAOSF,mode6,6,YJFAOSF);
 /* line 153: */
YCEAOSF_oneline( A_HISVEC(ZJFAOSF,TJFAOSF,3,A68_52 ), &AKFAOSF );
JIFAOSF_ans = AKFAOSF;
} 
else
{ 
BKFAOSF = FFFAOSF_is_star(XHFAOSF_rule);
if ( BKFAOSF )
{ /* line 154: */
BKFAOSF = AIFAOSF_needs_brackets(JIFAOSF_ans);
}
if ( BKFAOSF )
{ 
EKFAOSF = '{' ;
CKFAOSF.data[0] = A_UNITE(DKFAOSF,mode6,6,EKFAOSF);
CKFAOSF.data[1] = A_UNITE(FKFAOSF,mode7,7,JIFAOSF_ans);
HKFAOSF = '}' ;
CKFAOSF.data[2] = A_UNITE(GKFAOSF,mode6,6,HKFAOSF);
 /* line 155: */
YCEAOSF_oneline( A_HISVEC(IKFAOSF,CKFAOSF,3,A68_52 ), &JKFAOSF );
JIFAOSF_ans = JKFAOSF;
} 
} 
 /* line 157: */
if ( FFFAOSF_is_star(XHFAOSF_rule) )
{ 
KKFAOSF.data[0] = A_UNITE(LKFAOSF,mode7,7,JIFAOSF_ans);
NKFAOSF = '*' ;
KKFAOSF.data[1] = A_UNITE(MKFAOSF,mode6,6,NKFAOSF);
YCEAOSF_oneline( A_HISVEC(OKFAOSF,KKFAOSF,2,A68_52 ), &PKFAOSF );
SHFAOSF = PKFAOSF;
} 
else
{ 
 /* line 158: */
 /* line 159: */
SHFAOSF = JIFAOSF_ans;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(show_syntax);
*ReturnedValue = (SHFAOSF);
return;
} 
#undef NL

A68_VOID  SKFAOSF_show_readers(A68_34 * Out, A68_135  Readers)
{ 
A68_129 * TKFAOSF_reader;
A68_INT  UKFAOSF;  /* forall loop counter */
A68_52  VKFAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  WKFAOSF;  /* YIELD */
A68_85  XKFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_127  YKFAOSF;  /* united object - for case conformity */
A68_119  ZKFAOSF_syntax;
A68_119  ALFAOSF;  /* united object - for case conformity */
A68_140  BLFAOSF;  /* collateral clause result */
A68_60  CLFAOSF;  /* avoid structure result */
A68_52  DLFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  GLFAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HLFAOSF;  /* YIELD */
A68_VC  ILFAOSF;  /* avoid structure result */
A68_52  JLFAOSF;  /* OPERATORS - mode -> union mode */
A68_85  KLFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  LLFAOSF;  /* == */
A68_BOOL  MLFAOSF;  /* optbool result */
A68_140  NLFAOSF;  /* collateral clause result */
A68_52  OLFAOSF;  /* OPERATORS - mode -> union mode */
A68_56  PLFAOSF;  /* procedure value */
A68_52  QLFAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RLFAOSF;  /* YIELD */
A68_64  SLFAOSF;  /* avoid structure result */
A68_52  TLFAOSF;  /* OPERATORS - mode -> union mode */
A68_85  ULFAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(show_readers);
 /* line 164: */
 /* line 165: */
UKFAOSF = Readers.upb -1;
TKFAOSF_reader = Readers.data;
for (;UKFAOSF-- >= 0;
(TKFAOSF_reader++
) )
{
WKFAOSF = (*(&(TKFAOSF_reader->Description))) ;
KYDAOSF_put(Out, A_HVEC(XKFAOSF,A_UNITE(VKFAOSF,mode7,7,WKFAOSF),A68_52 ));
 /* line 166: */
 /* line 167: */
YKFAOSF = (*(&(TKFAOSF_reader->Reader))) ;
switch ( YKFAOSF.mode )
{ 
case 2: /* REF INT */
case 3: /* STRUCT(BITS,REF MODE118)  */
A_UNCPY(ZKFAOSF_syntax,YKFAOSF);
ZKFAOSF_syntax.mode -= 1;
 /* line 168: */
 /* line 169: */
ALFAOSF = ZKFAOSF_syntax ;
switch ( ALFAOSF.mode )
{ 
case 2: /* STRUCT(BITS,REF MODE118)  */
RRDAOSF_tab( 12, &CLFAOSF );
BLFAOSF.data[0] = A_UNITE(DLFAOSF,mode16,16,CLFAOSF);
HLFAOSF = FLFAOSF ;
BLFAOSF.data[1] = A_UNITE(GLFAOSF,mode7,7,HLFAOSF);
PHFAOSF_show_syntax( ZKFAOSF_syntax, Readers, &ILFAOSF );
BLFAOSF.data[2] = A_UNITE(JLFAOSF,mode7,7,ILFAOSF);
 /* line 170: */
 /* line 171: */
KYDAOSF_put(Out, A_HISVEC(KLFAOSF,BLFAOSF,3,A68_52 ));
break;
default: 
 /* line 172: */
 /* line 173: */
/*SKIP*/;
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 174: */
LLFAOSF = (*(&(TKFAOSF_reader->Help))) ;
MLFAOSF = A_VSTRUCTCOMP(LLFAOSF,CHDAOSF_nilstr);
if ( ! MLFAOSF )
{ /* line 175: */
MLFAOSF = ((*(&(TKFAOSF_reader->Help))).upb==0);
}
if ( MLFAOSF )
{ 
 /* line 176: */
PKDAOSF_newline(Out);
} 
else
{ 
PLFAOSF.fn.fn_global = PKDAOSF_newline;
PLFAOSF.nonlocals = A68_NIL;
NLFAOSF.data[0] = A_UNITE(OLFAOSF,mode12,12,PLFAOSF);
RLFAOSF = (*(&(TKFAOSF_reader->Help))) ;
NLFAOSF.data[1] = A_UNITE(QLFAOSF,mode7,7,RLFAOSF);
LSDAOSF_lines( 2, &SLFAOSF );
NLFAOSF.data[2] = A_UNITE(TLFAOSF,mode20,20,SLFAOSF);
 /* line 177: */
 /* line 178: */
KYDAOSF_put(Out, A_HISVEC(ULFAOSF,NLFAOSF,3,A68_52 ));
} 
}
A_PROC_EXIT(show_readers);
return;
} 
#undef NL
 /* line 186: */

A68_130 * XLFAOSF_add_readers(A68_130 * Readers, A68_145  New_rules)
{ 
A68_130 * YLFAOSF_rptr;
A68_144  ZLFAOSF_rule;
A68_144 * AMFAOSF;  /* forall control - []x */
A68_INT  BMFAOSF;  /* forall loop counter */
A68_INT * CMFAOSF;  /* YIELD */
A68_130  DMFAOSF;  /* collateral clause result */
A68_VC  EMFAOSF;  /* avoid structure result */
A68_VC  FMFAOSF;  /* avoid structure result */
A68_130 * GMFAOSF;  /* YIELD */
A68_130 * HMFAOSF;  /* clause result */
A_PROC_ENTRY(add_readers);
 /* line 187: */
 /* line 188: */
{ 
YLFAOSF_rptr = Readers;
 /* line 189: */
 /* line 190: */
BMFAOSF = New_rules.upb -1;
AMFAOSF = New_rules.data;
for (;BMFAOSF-- >= 0;
(AMFAOSF++
) )
{
ZLFAOSF_rule = *AMFAOSF;
CMFAOSF = ZLFAOSF_rule.No ;
(*CMFAOSF) = ((*(*(&((&(YLFAOSF_rptr->Rule))->Sort))))+1);
 /* line 191: */
DMFAOSF.Rule.Sort = ZLFAOSF_rule.No;
DMFAOSF.Rule.Reader = ZLFAOSF_rule.New;
 /* line 192: */
ZCAAOSF_makervc( ZLFAOSF_rule.Name, &EMFAOSF );
DMFAOSF.Rule.Description = EMFAOSF;
ZCAAOSF_makervc( ZLFAOSF_rule.Help, &FMFAOSF );
DMFAOSF.Rule.Help = FMFAOSF;
 /* line 193: */
DMFAOSF.Rest = YLFAOSF_rptr;
GMFAOSF = A_HEAP(A68_130 ) ;
(*GMFAOSF) = DMFAOSF ;
YLFAOSF_rptr = GMFAOSF;
}
 /* line 194: */
 /* line 195: */
HMFAOSF = YLFAOSF_rptr;
} 
A_PROC_EXIT(add_readers);
return( HMFAOSF );
} 
#undef NL

A68_VOID  JMFAOSF_simplify_params(A68_126  Param, A68_122  *ReturnedValue)
{ 
A68_148  LMFAOSF_generator;   /* proc value of non-global proc */
A68_122  RMFAOSF;  /* avoid structure result */
A68_122  QMFAOSF_ans;
A68_INT  SMFAOSF_n;
A68_149  UMFAOSF_add;   /* proc value of non-global proc */
A68_150  KNFAOSF_simplify;   /* proc value of non-global proc */
A68_126  TNFAOSF;  /* united object - for case conformity */
A68_120  UNFAOSF_v;
A68_148  WNFAOSF_generator;   /* proc value of non-global proc */
A68_122  BOFAOSF;  /* clause result */
A68_122  COFAOSF;  /* avoid structure result */
A68_122  DOFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_122  EOFAOSF;  /* OPERATORS - assign op */
A68_148  GOFAOSF_generator;   /* proc value of non-global proc */
A68_120  LOFAOSF;  /* collateral clause result */
A68_122  MOFAOSF;  /* avoid structure result */
A68_122  NOFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_122  OOFAOSF;  /* OPERATORS - assign op */
A68_122  POFAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(simplify_params);
 /* line 199: */
 /* line 200: */
{ 
A_CLOSURE( LMFAOSF_generator, MMFAOSF_generator, NMFAOSF_generator );
A_CALLPROC(LMFAOSF_generator,(A68_FALSE, &RMFAOSF),(A68_FALSE, &RMFAOSF,(LMFAOSF_generator).nonlocals));
QMFAOSF_ans = RMFAOSF;
 /* line 201: */
SMFAOSF_n = 0;
 /* line 203: */
A_CLOSURE( UMFAOSF_add, VMFAOSF_add, WMFAOSF_add );
(( WMFAOSF_add * ) ( UMFAOSF_add.nonlocals )) -> SMFAOSF_n = (&SMFAOSF_n);
(( WMFAOSF_add * ) ( UMFAOSF_add.nonlocals )) -> QMFAOSF_ans = (&QMFAOSF_ans);
 /* line 213: */
A_CLOSURE( KNFAOSF_simplify, LNFAOSF_simplify, MNFAOSF_simplify );
(( MNFAOSF_simplify * ) ( KNFAOSF_simplify.nonlocals )) -> UMFAOSF_add = UMFAOSF_add;
(( MNFAOSF_simplify * ) ( KNFAOSF_simplify.nonlocals )) -> KNFAOSF_simplify = KNFAOSF_simplify;
 /* line 221: */
 /* line 222: */
TNFAOSF = Param ;
switch ( TNFAOSF.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
UNFAOSF_v = (TNFAOSF.data.mode2);
 /* line 224: */
A_CLOSURE( WNFAOSF_generator, XNFAOSF_generator, YNFAOSF_generator );
 /* line 225: */
A_CALLPROC(WNFAOSF_generator,(A68_FALSE, &COFAOSF),(A68_FALSE, &COFAOSF,(WNFAOSF_generator).nonlocals));
EOFAOSF = A_HVEC(DOFAOSF,UNFAOSF_v,A68_120 ) ;
A_VASSIGN2(EOFAOSF,COFAOSF,A68_120 ) ;
BOFAOSF = COFAOSF;
break;
case 1: /* STRUCT(INT,REF MODE125)  */
 /* line 226: */
{ 
A_CALLPROC(KNFAOSF_simplify,(Param),(Param,(KNFAOSF_simplify).nonlocals));
 /* line 227: */
 /* line 228: */
if ( (SMFAOSF_n==0) )
{ 
A_CLOSURE( GOFAOSF_generator, HOFAOSF_generator, IOFAOSF_generator );
LOFAOSF.Sort = 0;
 /* line 229: */
LOFAOSF.Value = IHDAOSF_nullstr;
A_CALLPROC(GOFAOSF_generator,(A68_FALSE, &MOFAOSF),(A68_FALSE, &MOFAOSF,(GOFAOSF_generator).nonlocals));
OOFAOSF = A_HVEC(NOFAOSF,LOFAOSF,A68_120 ) ;
A_VASSIGN2(OOFAOSF,MOFAOSF,A68_120 ) ;
BOFAOSF = MOFAOSF;
} 
else
{ 
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
 /* line 237: */
BOFAOSF = A_VTRIM(POFAOSF,(QMFAOSF_ans),A_VTSCRIPT(&(POFAOSF.upb),(QMFAOSF_ans).upb,1,SMFAOSF_n));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(simplify_params);
*ReturnedValue = (BOFAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void EEFAOSF(void)   /* initialise DECS commandsyntax */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","commandsyntax.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_INT * JEFAOSF;  /* YIELD */
A68_119  KEFAOSF;  /* OPERATORS - mode -> union mode */
A68_120  MEFAOSF;  /* collateral clause result */
A68_VC  REFAOSF;  /* avoid structure result */
A68_126  SEFAOSF;  /* OPERATORS - mode -> union mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ZRAAOSF();   /* USE messageproc */
QMDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/commandsyntax.a68";
A_config.translation_time = "Wed May  5 17:38:59 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "DEFAOSF (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:59 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS commandsyntax);
UEAALIB_a68config(LGAALIB_configinfo, IEFAOSF);
 /* line 47: */
 /* line 73: */
 /* line 75: */
JEFAOSF = A_HEAP(A68_INT ) ;
(*JEFAOSF) = 0 ;
LEFAOSF_noparameters = A_UNITE(KEFAOSF,mode1,1,JEFAOSF);
 /* line 76: */
MEFAOSF.Sort = 0;
OEFAOSF_generator( A68_FALSE, &REFAOSF );
MEFAOSF.Value = REFAOSF;
TEFAOSF_no_parameters = A_UNITE(SEFAOSF,mode2,2,MEFAOSF);
 /* line 81: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 87: */
 /* line 90: */
 /* line 93: */
 /* line 101: */
 /* line 110: */
 /* line 163: */
 /* line 182: */
 /* line 198: */
 /* line 242: */
A_PROC_EXIT(DECS commandsyntax);
} 
#undef NL
/* end of translation of commandsyntax.a68 */
