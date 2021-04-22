/* UNAME:HPEAOSF */
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
A_ISTRUCT(A68_CHAR ,16000000,A68t111);
typedef struct A68t111  A68_111 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t111 *,16000000,A68t112);
typedef struct A68t112  A68_112 ;    /* STRUCT 16000000 REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t111 *,A68_VC *),(struct A68t111 *,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE111) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t114,(A68_VC ),(A68_VC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26) REF CHAR */

A_PROCEDURE(A68_INT *,A68t115,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE32) REF INT */

A_PROCEDURE(A68_CHAR *,A68t116,(struct A68t111 *),(struct A68t111 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE111) REF CHAR */

A_PROCEDURE(struct A68t111 *,A68t117,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF CHAR) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t118,(void),(void *));
typedef struct A68t118  A68_118 ;    /* PROC VOID */
struct A68t119{
A68_BITS * Cp;
struct A68t111 * Env;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(REF BITS,REF MODE111)  */

A_PROCEDURE(struct A68t119 *,A68t120,(struct A68t118 *),(struct A68t118 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE118) REF MODE119 */

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t118 ,struct A68t119 *),(struct A68t118 ,struct A68t119 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE118) MODE119 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ),(A68_INT ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t122 ,struct A68t119 *),(struct A68t122 ,struct A68t119 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE122) MODE119 */

A_PROCEDURE(A68_VOID ,A68t124,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE26) MODE26 */
struct A68t125{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t126,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t128);
typedef struct A68t128  A68_128 ;    /* STRUCT 4 CHAR */
struct A68t127{
struct A68t128  Access;
A_PAD_ISTRUCT(A68_128 ,PAD_24)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE128)  */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t125 *,A68_VC *),(struct A68t125 *,A68_VC *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE125) MODE26 */

A_PROCEDURE(struct A68t125 *,A68t130,(A68_VC ,struct A68t127 ,struct A68t97 ),(A68_VC ,struct A68t127 ,struct A68t97 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE26,MODE127,MODE97) REF MODE125 */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t125 *,struct A68t97 ),(struct A68t125 *,struct A68t97 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE125,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t125 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t125 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE125,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t133,(struct A68t125 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t125 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REF MODE125,MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t134,(struct A68t125 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t125 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF MODE125,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t135,(struct A68t125 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t125 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(REF MODE125,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t125 *,struct A68t97 ,struct A68t35 *),(struct A68t125 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(REF MODE125,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t137,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t139{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_25)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_26)
A68_SINT  Device;
A_PAD_SINT(PAD_27)
A68_SINT  Links;
A_PAD_SINT(PAD_28)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_29)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_30)
A68_LINT  Size;
A_PAD_LINT(PAD_31)
A68_LINT  Accessed;
A_PAD_LINT(PAD_32)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_33)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_34)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t141 ;

A_PROCEDURE(struct A68t139 *,A68t140,(struct A68t141 ,struct A68t97 ),(struct A68t141 ,struct A68t97 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE141,MODE97) REF MODE139 */
struct A68t141 { A68_INT mode; union {
struct A68t125 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t141  A68_141 ;    /* UNION(REF MODE125,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t142,(struct A68t125 *),(struct A68t125 *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF MODE125) BOOL */

A_PROCEDURE(A68_BITS *,A68t143,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26,MODE97) REF BITS */

A_PROCEDURE(A68_VOID ,A68t144,(A68_BITS *,struct A68t97 ),(A68_BITS *,struct A68t97 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF BITS,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t145,(A68_BITS *,struct A68t97 ,A68_VC *),(A68_BITS *,struct A68t97 ,A68_VC *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF BITS,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t146,(A68_VC *),(A68_VC *,void *));
typedef struct A68t146  A68_146 ;    /* PROC MODE26 */

A_PROCEDURE(A68_LINT ,A68t147,(void),(void *));
typedef struct A68t147  A68_147 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t148,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t149,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t150,(void),(void *));
typedef struct A68t150  A68_150 ;    /* PROC INT */
struct A68t151{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t152,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t151 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t151 *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE26,MODE26,MODE97) MODE151 */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t154,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t32 ,struct A68t97 ,struct A68t97 ),(struct A68t32 ,struct A68t97 ,struct A68t97 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE32,MODE97,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t32 ,struct A68t97 ),(struct A68t32 ,struct A68t97 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE32,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(A68_INT ,struct A68t97 ,struct A68t97 *),(A68_INT ,struct A68t97 ,struct A68t97 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(INT,MODE97) MODE97 */

A_PROCEDURE(A68_VOID ,A68t158,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE36) VOID */
struct A68t160{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_35)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t161,(A68_BOOL ,struct A68t160 *),(A68_BOOL ,struct A68t160 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(BOOL) MODE160 */
struct A68t163 ;

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t163 ,struct A68t97 ),(struct A68t163 ,struct A68t97 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE163,MODE97) VOID */
A_VECTOR(struct A68t160 ,A68t163);
typedef struct A68t163  A68_163 ;    /* VECTOR [] MODE160 */

A_PROCEDURE(A68_VOID ,A68t164,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t165,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE92) BOOL */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t118 ),(struct A68t118 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE118) VOID */

A_PROCEDURE(A68_VOID ,A68t167,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 61 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_VC ,2,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_INT ,A68t171,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF BITS) INT */
struct A68t172{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t173,(A68_BOOL ,struct A68t172 *),(A68_BOOL ,struct A68t172 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(BOOL) MODE172 */
#define A68_174  A68_VC 
#define A68t174 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_175  A68_172 
#define A68t175 A68t172            /* STRUCT(MODE174,MODE174,MODE174,MODE174,MODE174)  */
A_ISTRUCT(A68_CHAR ,13,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t172 ,A68_BOOL ),(struct A68t172 ,A68_BOOL ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE172,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t172 *),(struct A68t172 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC MODE172 */
A_ISTRUCT(A68_CHAR ,12,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_VC ,5,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 5 MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,13,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 13 MODE52 */
A_ISTRUCT(A68_CHAR ,17,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(struct A68t52 ,7,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 7 MODE52 */

A_PROCEDURE(A68_BOOL ,A68t189,(void),(void *));
typedef struct A68t189  A68_189 ;    /* PROC BOOL */

A_PROCEDURE(A68_VOID ,A68t190,(A68_VC *),(A68_VC *,void *));
typedef struct A68t190  A68_190 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t191,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
A_ISTRUCT(A68_CHAR ,28,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,37,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,9,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,15,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 25 CHAR */

A_PROCEDURE(A68_BOOL ,A68t202,(A68_VC ,struct A68t146 ),(A68_VC ,struct A68t146 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE26,MODE146) BOOL */

A_PROCEDURE(A68_BOOL ,A68t203,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t204,(A68_VC ,struct A68t118 ,struct A68t202 ,struct A68t203 ),(A68_VC ,struct A68t118 ,struct A68t202 ,struct A68t203 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE26,MODE118,MODE202,MODE203) VOID */
A_ISTRUCT(A68_CHAR ,35,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,132,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 132 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,115,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 115 CHAR */
A_ISTRUCT(A68_INT ,5,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 5 INT */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE97) VOID */
A_ISTRUCT(A68_CHAR ,38,A68t211);
typedef struct A68t211  A68_211 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t210 ,struct A68t97 ),(struct A68t210 ,struct A68t97 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE210,MODE97) VOID */
A_VECTOR(struct A68t97 ,A68t213);
typedef struct A68t213  A68_213 ;    /* VECTOR [] MODE97 */

A_PROCEDURE(A68_VOID ,A68t214,(A68_BOOL ,struct A68t213 *),(A68_BOOL ,struct A68t213 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(BOOL) MODE213 */
A_ISTRUCT(A68_CHAR ,30,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_REAL ,A68t216,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REAL) REAL */

A_PROCEDURE(A68_VOID ,A68t217,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE26) REF MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osmessages --- */
/* --- End of imports from osmessages --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_97  RIBAOSF_ignore_msg;
extern A68_97  TIBAOSF_global_msg;
extern A68_125 * TSBAOSF_stdin;
extern A68_125 * USBAOSF_stdout;
extern A68_125 * VSBAOSF_stderr;
extern A68_BOOL  AVBAOSF_(struct A68t35 ,struct A68t35 );
extern A68_35  UUBAOSF_io_error;
extern A68_35  XUBAOSF_io_no_newline;
extern A68_VOID  JVBAOSF_file_name(struct A68t125 *,A68_VC *);
extern A68_125 * QVBAOSF_open_file(A68_VC ,struct A68t127 ,struct A68t97 );
extern A68_VOID  IWBAOSF_close_file(struct A68t125 *,struct A68t97 );
extern A68_VOID  DXBAOSF_read_line(struct A68t125 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  UXBAOSF_write_buffer(struct A68t125 *,A68_VC ,struct A68t97 ,A68_35 *);
extern A68_127  ATBAOSF_read_access;
extern A68_127  MTBAOSF_update_access;
extern A68_127  QTBAOSF_update_truncate_access;
extern A68_BOOL  JBCAOSF_is_terminal(struct A68t125 *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern A68_VOID  BFCAOSF_parse_filename(A68_VC ,A68_VC ,struct A68t97 ,A68_151 *);
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc = argc; A_argv = argv; A_envp = envp

#define DHCAOSF_prelude A_prelude
extern A68_VOID  RHCAOSF_get_args(A68_46 *);
extern A68_VOID  TJCAOSF_prompt_args(A68_VC ,struct A68t97 ,A68_46 *);
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
extern A68_VOID  YPCAOSF_set_sigmsgproc(struct A68t32 ,struct A68t97 ,struct A68t97 );
extern A68_VOID  PRCAOSF_get_sigmsgproc(A68_INT ,struct A68t97 ,A68_97 *);
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


/* --- Imports from messageproc --- */
extern A68_31  ESAAOSF_anonymous;
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_92  IUAAOSF_system;
extern A68_92  KUAAOSF_fatal;
extern A68_92  MUAAOSF_user;
extern A68_92  SUAAOSF_log;
extern A68_BOOL  FXAAOSF_sysfault_msg(struct A68t106 );
extern A68_BOOL  JXAAOSF_error_msg(struct A68t106 );
extern A68_BOOL  PXAAOSF_abort_msg(struct A68t106 );
extern A68_BOOL  UXAAOSF_cli_msg(struct A68t106 );
extern A68_BOOL  ZXAAOSF_log_msg(struct A68t106 );
extern A68_BOOL  EYAAOSF_out_msg(struct A68t106 );
extern A68_BOOL  JYAAOSF_newline_msg(struct A68t106 );
extern A68_VOID  EABAOSF_translate_msg(struct A68t92 ,struct A68t46 ,A68_95 *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  IHDAOSF_nullstr;
extern A68_VOID  JDAAOSF_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  PKDAOSF_newline(struct A68t34 *);
extern A68_VOID  KTDAOSF_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  KYDAOSF_put(struct A68t34 *,struct A68t85 );
extern A68_34 * BJDAOSF_make_channel(struct A68t87 ,struct A68t88 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void UIBAOSF(void);   /* osmessages */
extern void CSCAOSF(void);   /* osif */
extern void BAAAOSF(void);   /* cif */
extern void ZRAAOSF(void);   /* messageproc */
extern void QMDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_168   LPEAOSF = {"$Id: osinterface.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,MPEAOSF,LPEAOSF,61)
static A68_169   RPEAOSF = {":  not yet implemented"}; 
A_GISVEC(A68_VC ,SPEAOSF,RPEAOSF,22)
#define XPEAOSF_int_size 4
#define YPEAOSF_word_size 32
A68_35  ZPEAOSF_io_partline;
#define AQEAOSF_block_update_access MTBAOSF_update_access
#define BQEAOSF_block_update_truncate_access QTBAOSF_update_truncate_access
#include <stdio.h>
#define FFLUSH(file) A_int_INT(fflush(A_FILEPTR_fileptr(file)))

#define FQEAOSF_fflush FFLUSH
static A68_VC  HQEAOSF_nilstr;
static A68_VC  IQEAOSF_osfacility;
static A68_VC  JQEAOSF_version_str;
static A68_VC  KQEAOSF_version_date;
static A68_VC  LQEAOSF_version_msg;
static A68_VC  MQEAOSF_sys_fault_message;
A68_173  NQEAOSF_anonymous;
A68_34 * DREAOSF_screen;
A68_34 * EREAOSF_out;
A68_34 * FREAOSF_err;
static A68_176   GREAOSF = {"Message is: \""}; 
A_GISVEC(A68_VC ,HREAOSF,GREAOSF,13)
static A68_VC  IREAOSF_message_is;
static A68_177   JREAOSF = {"\007\007\007"}; 
A_GISVEC(A68_VC ,KREAOSF,JREAOSF,3)
static A68_VC  LREAOSF_bell_str;
A68_178  MREAOSF_initialise_osinterface;
static A68_180   UREAOSF = {":  Version  "}; 
A_GISVEC(A68_VC ,VREAOSF,UREAOSF,12)
static A68_181   WREAOSF = {"  -  "}; 
A_GISVEC(A68_VC ,XREAOSF,WREAOSF,5)
static A68_128   FSEAOSF = {"ANON"}; 
A_GISVEC(A68_VC ,GSEAOSF,FSEAOSF,4)
static A68_183   HSEAOSF = {""}; 
A_GISVEC(A68_VC ,ISEAOSF,HSEAOSF,0)
static A68_183   JSEAOSF = {""}; 
A_GISVEC(A68_VC ,KSEAOSF,JSEAOSF,0)
static A68_183   LSEAOSF = {""}; 
A_GISVEC(A68_VC ,MSEAOSF,LSEAOSF,0)
static A68_176   NSEAOSF = {"Please report"}; 
A_GISVEC(A68_VC ,OSEAOSF,NSEAOSF,13)
static A68_184   ZSEAOSF = {"A System error has occurred in "}; 
A_GISVEC(A68_VC ,ATEAOSF,ZSEAOSF,31)
static A68_185   FTEAOSF = {" ("}; 
A_GISVEC(A68_VC ,GTEAOSF,FTEAOSF,2)
static A68_187   HUEAOSF = {" has been aborted"}; 
A_GISVEC(A68_VC ,IUEAOSF,HUEAOSF,17)
static A68_181   VUEAOSF = {"Linux"}; 
A_GISVEC(A68_VC ,WUEAOSF,VUEAOSF,5)
A68_VC  XUEAOSF_os_string;
static A68_192   HWEAOSF = {" file name argument expected"}; 
A_GISVEC(A68_VC ,IWEAOSF,HWEAOSF,28)
static A68_181   RWEAOSF = {" ? - "}; 
A_GISVEC(A68_VC ,SWEAOSF,RWEAOSF,5)
static A68_194   WWEAOSF = {" file name has already been specified"}; 
A_GISVEC(A68_VC ,XWEAOSF,WWEAOSF,37)
static A68_196   NXEAOSF = {"Error in "}; 
A_GISVEC(A68_VC ,OXEAOSF,NXEAOSF,9)
static A68_197   SXEAOSF = {" file name"}; 
A_GISVEC(A68_VC ,TXEAOSF,SXEAOSF,10)
static A68_199   BYEAOSF = {"Could not open "}; 
A_GISVEC(A68_VC ,CYEAOSF,BYEAOSF,15)
static A68_200   GYEAOSF = {" file "}; 
A_GISVEC(A68_VC ,HYEAOSF,GYEAOSF,6)
static A68_181   RYEAOSF = {" ? - "}; 
A_GISVEC(A68_VC ,SYEAOSF,RYEAOSF,5)
static A68_201   WYEAOSF = {" file name already exists"}; 
A_GISVEC(A68_VC ,XYEAOSF,WYEAOSF,25)
static A68_194   DAFAOSF = {"given up trying to read the arguments"}; 
A_GISVEC(A68_VC ,EAFAOSF,DAFAOSF,37)
#define HAFAOSF_user_bored_threshold 3
A68_INT  IAFAOSF_n_interrupts;
static A68_205   PAFAOSF = {"***** Received user interrupt *****"}; 
A_GISVEC(A68_VC ,QAFAOSF,PAFAOSF,35)
static A68_206   SAFAOSF = {"***** A hard user interrupt has occurred - the current operation has possibly been left in an unsafe state - consider aborting *****"}; 
A_GISVEC(A68_VC ,TAFAOSF,SAFAOSF,132)
static A68_207   WAFAOSF = {"Received signal:  "}; 
A_GISVEC(A68_VC ,XAFAOSF,WAFAOSF,18)
static A68_208   CBFAOSF = {"***** The current operation has been aborted and has possibly been left in an unsafe state - consider quiting *****"}; 
A_GISVEC(A68_VC ,DBFAOSF,CBFAOSF,115)
static A68_97  FBFAOSF_sig_msg;
static A68_32  JBFAOSF_trap_signals;
static A68_211   MBFAOSF = {"Operation aborted after user interrupt"}; 
A_GISVEC(A68_VC ,NBFAOSF,MBFAOSF,38)
static A68_215   WCFAOSF = {"No memory statistics available"}; 
A_GISVEC(A68_VC ,XCFAOSF,WCFAOSF,30)
A68_BOOL  YCFAOSF_os_debug;
#include <math.h>

#define ZCFAOSF_sqrt sqrt
static A68_199   CDFAOSF = {"No host details"}; 
A_GISVEC(A68_VC ,EDFAOSF,CDFAOSF,15)
typedef struct   /* env of non-global proc */
{
A68_190  DVEAOSF_read;
} FVEAOSF_read;
typedef struct   /* env of non-global proc */
{
A68_BOOL * EXEAOSF_failed;
} JXEAOSF_msg;
typedef struct   /* env of non-global proc */
{
A68_BOOL * LZEAOSF_failed;
} QZEAOSF_msg;
typedef struct   /* env of non-global proc */
{
A68_INT * SZEAOSF_argc;
A68_46  KZEAOSF_args;
} VZEAOSF_next;
typedef struct   /* env of non-global proc */
{
int dummy;
} WBFAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_97  SBFAOSF_old_global;
A68_213  ZBFAOSF_old_sigs;
A68_97  Msg;
} ICFAOSF_reset_sigmsg;
typedef struct   /* env of non-global proc */
{
A68_118  GCFAOSF_reset_sigmsg;
A68_97  Msg;
} SCFAOSF_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} JVEAOSF_generator;

A_STATIC A68_VOID  PPEAOSF_fail(A68_VC  Name, A68_97  Msg, A68_35  *ReturnedValue);

A68_VOID  DQEAOSF_write_stdout(A68_VC  Buffer);

A_STATIC A68_VOID  PQEAOSF_generator(A68_BOOL  OQEAOSF_anonymous, A68_172  *ReturnedValue);

A68_VOID  NREAOSF_facility(A68_VC  *ReturnedValue);

A68_VOID  PREAOSF_version(A68_172  *ReturnedValue);

A68_VOID  SREAOSF_give_version(A68_VC  *ReturnedValue);

A68_VOID  DSEAOSF_default_msg(A68_92  Msgno, A68_46  Params);

A68_BOOL  YUEAOSF_interactive(void);

A68_VOID  BVEAOSF_prompt(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  EVEAOSF_read(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IVEAOSF_generator(A68_BOOL  GVEAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  EWEAOSF_filename_arg(A68_VC  Name, A68_VC  Sort, A68_VC  Type, A68_VC * Ans, A68_BOOL  Should_exist);

A_STATIC A68_VOID  IXEAOSF_msg(A68_92  No, A68_46  Params, void *NonLocals);

A68_VOID  HZEAOSF_parse_arguments(A68_VC  Prompt, A68_118  Reset, A68_202  Check_arg, A68_203  No_more);

A_STATIC A68_VOID  PZEAOSF_msg(A68_92  No, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  UZEAOSF_next(A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  JAFAOSF_interrupted(void);

A68_VOID  LAFAOSF_clear_interrupt(void);

A_STATIC A68_VOID  OAFAOSF_anonymous(A68_92  No, A68_46  Params);

A68_VOID  LBFAOSF_flt_if_interrupted(A68_97  Msg);

A68_VOID  RBFAOSF_trap_errors(A68_210  Action, A68_97  Msg);

A_STATIC A68_VOID  VBFAOSF_generator(A68_BOOL  TBFAOSF_anonymous, A68_213  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HCFAOSF_reset_sigmsg(void *NonLocals);

A_STATIC A68_VOID  RCFAOSF_anonymous(A68_92  No, A68_46  Params, void *NonLocals);

A68_VOID  VCFAOSF_mem_statistics(A68_36  P);

A68_VOID  BDFAOSF_check_host_data(A68_VC  Input, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IDFAOSF_anonymous(A68_172  Version, A68_BOOL  Trap_user_interrupts);

A_STATIC A68_VOID  VDFAOSF_anonymous(A68_VC  S);

A_STATIC A68_VOID  IVEAOSF_generator(A68_BOOL  GVEAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JVEAOSF_generator *)NonLocals)->x)
{ 
A68_VC  KVEAOSF;  /* clause result */
A68_VC  LVEAOSF;  /* OPERATORS - dynamic generator */
{ 
LVEAOSF.upb = 80 ;
( GVEAOSF_anonymous? A_VLOC(A68_CHAR ,LVEAOSF): A_VHEAP(A68_CHAR ,LVEAOSF) );
KVEAOSF = LVEAOSF;
} 
*ReturnedValue = (KVEAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  EVEAOSF_read(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FVEAOSF_read *)NonLocals)->x)
{ 
A68_31  HVEAOSF_generator;   /* proc value of non-global proc */
A68_VC  MVEAOSF;  /* avoid structure result */
A68_VC  NVEAOSF_ans;
A68_INT  OVEAOSF_l;
A68_35  PVEAOSF;  /* avoid structure result */
A68_170  QVEAOSF;  /* collateral clause result */
A68_VC  RVEAOSF;  /* OPERATORS - trim index */
A68_VC  SVEAOSF;  /* avoid structure result */
A68_VC  TVEAOSF;  /* clause result */
A68_46  UVEAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  VVEAOSF;  /* avoid structure result */
A68_VC  WVEAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(read);
{ 
A_CLOSURE( HVEAOSF_generator, IVEAOSF_generator, JVEAOSF_generator );
A_CALLPROC(HVEAOSF_generator,(A68_FALSE, &MVEAOSF),(A68_FALSE, &MVEAOSF,(HVEAOSF_generator).nonlocals));
NVEAOSF_ans = MVEAOSF;
 /* line 176: */
OVEAOSF_l = 0;
 /* line 177: */
 /* line 178: */
DXBAOSF_read_line( TSBAOSF_stdin, NVEAOSF_ans, (&OVEAOSF_l), TIBAOSF_global_msg, &PVEAOSF );
if ( AVBAOSF_(PVEAOSF, ZPEAOSF_io_partline) )
{ 
QVEAOSF.data[0] = A_VTRIM(RVEAOSF,(NVEAOSF_ans),A_VTSCRIPT(&(RVEAOSF.upb),(NVEAOSF_ans).upb,1,OVEAOSF_l));
A_CALLPROC(NL(DVEAOSF_read),( &SVEAOSF),( &SVEAOSF,(NL(DVEAOSF_read)).nonlocals));
QVEAOSF.data[1] = SVEAOSF;
 /* line 179: */
JDAAOSF_concat( A_HISVEC(UVEAOSF,QVEAOSF,2,A68_VC ), &VVEAOSF );
TVEAOSF = VVEAOSF;
} 
else
{ 
 /* line 180: */
 /* line 181: */
TVEAOSF = A_VTRIM(WVEAOSF,(NVEAOSF_ans),A_VTSCRIPT(&(WVEAOSF.upb),(NVEAOSF_ans).upb,1,OVEAOSF_l));
} 
} 
A_PROC_EXIT(read);
*ReturnedValue = (TVEAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  IXEAOSF_msg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((JXEAOSF_msg *)NonLocals)->x)
{ 
A68_106  KXEAOSF;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(msg);
 /* line 205: */
if ( JXAAOSF_error_msg(A_UNITE(KXEAOSF,mode1,1,No)) )
{ 
(*NL(EXEAOSF_failed)) = A68_TRUE;
} 
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  PZEAOSF_msg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((QZEAOSF_msg *)NonLocals)->x)
{ 
A68_106  RZEAOSF;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(msg);
 /* line 247: */
if ( JXAAOSF_error_msg(A_UNITE(RZEAOSF,mode1,1,No)) )
{ 
(*NL(LZEAOSF_failed)) = A68_TRUE;
} 
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  UZEAOSF_next(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VZEAOSF_next *)NonLocals)->x)
{ 
A68_VC  WZEAOSF;  /* clause result */
A_PROC_ENTRY(next);
if ( (((*NL(SZEAOSF_argc))+=1)<=NL(KZEAOSF_args).upb) )
{ 
WZEAOSF = A_VINDEX(NL(KZEAOSF_args),(*NL(SZEAOSF_argc)));
} 
else
{ 
WZEAOSF = IHDAOSF_nullstr;
} 
A_PROC_EXIT(next);
*ReturnedValue = (WZEAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VBFAOSF_generator(A68_BOOL  TBFAOSF_anonymous, A68_213  *ReturnedValue, void *NonLocals)
#define NL(x) (((WBFAOSF_generator *)NonLocals)->x)
{ 
A68_213  XBFAOSF;  /* clause result */
A68_213  YBFAOSF;  /* OPERATORS - dynamic generator */
{ 
YBFAOSF.upb = JBFAOSF_trap_signals.upb ;
( TBFAOSF_anonymous? A_VLOC(A68_97 ,YBFAOSF): A_VHEAP(A68_97 ,YBFAOSF) );
XBFAOSF = YBFAOSF;
} 
*ReturnedValue = (XBFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  HCFAOSF_reset_sigmsg(void *NonLocals)
#define NL(x) (((ICFAOSF_reset_sigmsg *)NonLocals)->x)
{ 
A68_97 * JCFAOSF_old;
A68_INT  KCFAOSF_sig;
A68_INT * LCFAOSF;  /* forall control - []x */
A68_INT  MCFAOSF;  /* forall loop counter */
A68_32  NCFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(reset_sigmsg);
{ 
TIBAOSF_global_msg = NL(SBFAOSF_old_global);
 /* line 332: */
 /* line 333: */
MCFAOSF = NL(ZBFAOSF_old_sigs).upb -1;
if ( MCFAOSF != JBFAOSF_trap_signals.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
JCFAOSF_old = NL(ZBFAOSF_old_sigs).data;
LCFAOSF = JBFAOSF_trap_signals.data;
for (;MCFAOSF-- >= 0;
(JCFAOSF_old++
,LCFAOSF++
) )
{
KCFAOSF_sig = *LCFAOSF;
YPCAOSF_set_sigmsgproc(A_HVEC(NCFAOSF,KCFAOSF_sig,A68_INT ), (*JCFAOSF_old), NL(Msg));
}
 /* line 334: */
 /* line 335: */
/*SKIP*/;
} 
A_PROC_EXIT(reset_sigmsg);
return;
} 
#undef NL

A_STATIC A68_VOID  RCFAOSF_anonymous(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((SCFAOSF_anonymous *)NonLocals)->x)
{ 
A68_106  TCFAOSF;  /* OPERATORS - mode -> union mode */
 /* line 340: */
 /* line 341: */
{ 
if ( JXAAOSF_error_msg(A_UNITE(TCFAOSF,mode1,1,No)) )
{ 
A_CALLPROC(NL(GCFAOSF_reset_sigmsg),(),((NL(GCFAOSF_reset_sigmsg)).nonlocals));
} 
 /* line 342: */
 /* line 343: */
A_CALLPROC(NL(Msg),(No, Params),(No, Params,(NL(Msg)).nonlocals));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  VDFAOSF_anonymous(A68_VC  S)
{ 
A68_35  WDFAOSF;  /* avoid structure result */
 /* line 390: */
UXBAOSF_write_buffer( VSBAOSF_stderr, S, RIBAOSF_ignore_msg, &WDFAOSF );
WDFAOSF;
return;
} 
#undef NL

A_STATIC A68_VOID  PPEAOSF_fail(A68_VC  Name, A68_97  Msg, A68_35  *ReturnedValue)
{ 
A68_170  QPEAOSF;  /* collateral clause result */
A68_46  TPEAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  UPEAOSF;  /* avoid structure result */
A68_46  VPEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_35  WPEAOSF;  /* clause result */
A_PROC_ENTRY(fail);
 /* line 66: */
{ 
QPEAOSF.data[0] = Name;
QPEAOSF.data[1] = SPEAOSF;
JDAAOSF_concat( A_HISVEC(TPEAOSF,QPEAOSF,2,A68_VC ), &UPEAOSF );
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(VPEAOSF,UPEAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(VPEAOSF,UPEAOSF,A68_VC ),(Msg).nonlocals));
WPEAOSF = UUBAOSF_io_error;
} 
A_PROC_EXIT(fail);
*ReturnedValue = (WPEAOSF);
return;
} 
#undef NL

A68_VOID  DQEAOSF_write_stdout(A68_VC  Buffer)
{ 
A68_35  EQEAOSF;  /* avoid structure result */
A_PROC_ENTRY(write_stdout);
 /* line 78: */
 /* line 79: */
{ 
UXBAOSF_write_buffer( USBAOSF_stdout, Buffer, RIBAOSF_ignore_msg, &EQEAOSF );
EQEAOSF;
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
FQEAOSF_fflush((*(&(USBAOSF_stdout->Stdiofile))));
} 
A_PROC_EXIT(write_stdout);
return;
} 
#undef NL

A_STATIC A68_VOID  PQEAOSF_generator(A68_BOOL  OQEAOSF_anonymous, A68_172  *ReturnedValue)
{ 
A68_175  QQEAOSF_anonymous;
A68_VC  RQEAOSF;  /* avoid structure result */
A68_174 * SQEAOSF;  /* YIELD */
A68_VC  TQEAOSF;  /* avoid structure result */
A68_174 * UQEAOSF;  /* YIELD */
A68_VC  VQEAOSF;  /* avoid structure result */
A68_174 * WQEAOSF;  /* YIELD */
A68_VC  XQEAOSF;  /* avoid structure result */
A68_174 * YQEAOSF;  /* YIELD */
A68_VC  ZQEAOSF;  /* avoid structure result */
A68_174 * AREAOSF;  /* YIELD */
A68_172  BREAOSF;  /* clause result */
{ 
A_CALLPROC(ESAAOSF_anonymous,(OQEAOSF_anonymous, &RQEAOSF),(OQEAOSF_anonymous, &RQEAOSF,(ESAAOSF_anonymous).nonlocals));
SQEAOSF = (&((&QQEAOSF_anonymous)->Name)) ;
(*SQEAOSF) = RQEAOSF;
A_CALLPROC(ESAAOSF_anonymous,(OQEAOSF_anonymous, &TQEAOSF),(OQEAOSF_anonymous, &TQEAOSF,(ESAAOSF_anonymous).nonlocals));
UQEAOSF = (&((&QQEAOSF_anonymous)->Version)) ;
(*UQEAOSF) = TQEAOSF;
A_CALLPROC(ESAAOSF_anonymous,(OQEAOSF_anonymous, &VQEAOSF),(OQEAOSF_anonymous, &VQEAOSF,(ESAAOSF_anonymous).nonlocals));
WQEAOSF = (&((&QQEAOSF_anonymous)->Date)) ;
(*WQEAOSF) = VQEAOSF;
A_CALLPROC(ESAAOSF_anonymous,(OQEAOSF_anonymous, &XQEAOSF),(OQEAOSF_anonymous, &XQEAOSF,(ESAAOSF_anonymous).nonlocals));
YQEAOSF = (&((&QQEAOSF_anonymous)->Msg)) ;
(*YQEAOSF) = XQEAOSF;
A_CALLPROC(ESAAOSF_anonymous,(OQEAOSF_anonymous, &ZQEAOSF),(OQEAOSF_anonymous, &ZQEAOSF,(ESAAOSF_anonymous).nonlocals));
AREAOSF = (&((&QQEAOSF_anonymous)->Sys_fault)) ;
(*AREAOSF) = ZQEAOSF;
BREAOSF = QQEAOSF_anonymous;
} 
*ReturnedValue = (BREAOSF);
return;
} 
#undef NL

A68_VOID  NREAOSF_facility(A68_VC  *ReturnedValue)
{ 
A68_VC  OREAOSF;  /* clause result */
A_PROC_ENTRY(facility);
OREAOSF = IQEAOSF_osfacility;
A_PROC_EXIT(facility);
*ReturnedValue = (OREAOSF);
return;
} 
#undef NL

A68_VOID  PREAOSF_version(A68_172  *ReturnedValue)
{ 
A68_172  QREAOSF;  /* collateral clause result */
A68_172  RREAOSF;  /* clause result */
A_PROC_ENTRY(version);
QREAOSF.Name = IQEAOSF_osfacility;
QREAOSF.Version = JQEAOSF_version_str;
QREAOSF.Date = KQEAOSF_version_date;
QREAOSF.Msg = LQEAOSF_version_msg;
QREAOSF.Sys_fault = MQEAOSF_sys_fault_message;
RREAOSF = QREAOSF;
A_PROC_EXIT(version);
*ReturnedValue = (RREAOSF);
return;
} 
#undef NL

A68_VOID  SREAOSF_give_version(A68_VC  *ReturnedValue)
{ 
A68_182  TREAOSF;  /* collateral clause result */
A68_VC  YREAOSF;  /* clause result */
A68_46  ZREAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ASEAOSF;  /* avoid structure result */
A_PROC_ENTRY(give_version);
TREAOSF.data[0] = IQEAOSF_osfacility;
TREAOSF.data[1] = VREAOSF;
 /* line 124: */
TREAOSF.data[2] = JQEAOSF_version_str;
TREAOSF.data[3] = XREAOSF;
TREAOSF.data[4] = KQEAOSF_version_date;
JDAAOSF_concat( A_HISVEC(ZREAOSF,TREAOSF,5,A68_VC ), &ASEAOSF );
YREAOSF = ASEAOSF;
A_PROC_EXIT(give_version);
*ReturnedValue = (YREAOSF);
return;
} 
#undef NL

A68_VOID  DSEAOSF_default_msg(A68_92  Msgno, A68_46  Params)
{ 
A68_172  ESEAOSF;  /* collateral clause result */
A68_95  PSEAOSF;  /* avoid structure result */
A68_95  QSEAOSF_message;
A68_106  RSEAOSF;  /* OPERATORS - mode -> union mode */
A68_106  SSEAOSF;  /* OPERATORS - mode -> union mode */
A68_106  TSEAOSF;  /* OPERATORS - mode -> union mode */
A68_106  USEAOSF;  /* OPERATORS - mode -> union mode */
A68_106  VSEAOSF;  /* OPERATORS - mode -> union mode */
A68_106  WSEAOSF;  /* OPERATORS - mode -> union mode */
A68_106  XSEAOSF;  /* OPERATORS - mode -> union mode */
A68_186  YSEAOSF;  /* collateral clause result */
A68_52  BTEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  CTEAOSF;  /* YIELD */
A68_VC  DTEAOSF;  /* avoid structure result */
A68_52  ETEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  HTEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ITEAOSF;  /* YIELD */
A68_52  JTEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KTEAOSF;  /* YIELD */
A68_52  LTEAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  MTEAOSF;  /* YIELD */
A68_52  NTEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  OTEAOSF;  /* procedure value */
A68_52  PTEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  QTEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RTEAOSF;  /* YIELD */
A68_52  STEAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  TTEAOSF;  /* YIELD */
A68_52  UTEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  VTEAOSF;  /* procedure value */
A68_52  WTEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  XTEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  YTEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  ZTEAOSF;  /* procedure value */
A68_85  AUEAOSF;  /* OPERATORS - istruct -> vector */
A68_106  BUEAOSF;  /* OPERATORS - mode -> union mode */
A68_BOOL  CUEAOSF;  /* optbool result */
A68_106  DUEAOSF;  /* OPERATORS - mode -> union mode */
A68_188  EUEAOSF;  /* collateral clause result */
A68_VC  FUEAOSF;  /* avoid structure result */
A68_52  GUEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  JUEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KUEAOSF;  /* YIELD */
A68_52  LUEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  MUEAOSF;  /* procedure value */
A68_52  NUEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  OUEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  PUEAOSF;  /* YIELD */
A68_52  QUEAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  RUEAOSF;  /* YIELD */
A68_52  SUEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  TUEAOSF;  /* procedure value */
A68_85  UUEAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(default_msg);
 /* line 128: */
 /* line 129: */
{ 
 /* line 130: */
if ( A_VSTRUCTCOMP(IQEAOSF_osfacility,HQEAOSF_nilstr) )
{ 
ESEAOSF.Name = GSEAOSF;
ESEAOSF.Version = ISEAOSF;
ESEAOSF.Date = KSEAOSF;
ESEAOSF.Msg = MSEAOSF;
ESEAOSF.Sys_fault = OSEAOSF;
 /* line 131: */
 /* line 132: */
A_CALLPROC(MREAOSF_initialise_osinterface,(ESEAOSF, A68_FALSE),(ESEAOSF, A68_FALSE,(MREAOSF_initialise_osinterface).nonlocals));
} 
 /* line 133: */
EABAOSF_translate_msg( Msgno, Params, &PSEAOSF );
QSEAOSF_message = PSEAOSF;
 /* line 134: */
 /* line 135: */
if ( ZXAAOSF_log_msg(A_UNITE(RSEAOSF,mode2,2,QSEAOSF_message)) )
{ 
 /* line 136: */
if ( JXAAOSF_error_msg(A_UNITE(SSEAOSF,mode2,2,QSEAOSF_message)) )
{ 
KTDAOSF_putstr(FREAOSF_err, QSEAOSF_message.Text);
 /* line 137: */
if ( JYAAOSF_newline_msg(A_UNITE(TSEAOSF,mode2,2,QSEAOSF_message)) )
{ 
 /* line 138: */
PKDAOSF_newline(FREAOSF_err);
} 
} 
else
{ 
KTDAOSF_putstr(DREAOSF_screen, QSEAOSF_message.Text);
 /* line 139: */
if ( JYAAOSF_newline_msg(A_UNITE(USEAOSF,mode2,2,QSEAOSF_message)) )
{ 
 /* line 140: */
 /* line 141: */
PKDAOSF_newline(DREAOSF_screen);
} 
} 
} 
 /* line 142: */
 /* line 143: */
if ( EYAAOSF_out_msg(A_UNITE(VSEAOSF,mode2,2,QSEAOSF_message)) )
{ 
KTDAOSF_putstr(EREAOSF_out, QSEAOSF_message.Text);
 /* line 144: */
if ( JYAAOSF_newline_msg(A_UNITE(WSEAOSF,mode2,2,QSEAOSF_message)) )
{ 
 /* line 145: */
PKDAOSF_newline(EREAOSF_out);
} 
} 
 /* line 146: */
 /* line 147: */
if ( FXAAOSF_sysfault_msg(A_UNITE(XSEAOSF,mode2,2,QSEAOSF_message)) )
{ 
CTEAOSF = ATEAOSF ;
YSEAOSF.data[0] = A_UNITE(BTEAOSF,mode7,7,CTEAOSF);
NREAOSF_facility(  &DTEAOSF );
YSEAOSF.data[1] = A_UNITE(ETEAOSF,mode7,7,DTEAOSF);
 /* line 148: */
ITEAOSF = GTEAOSF ;
YSEAOSF.data[2] = A_UNITE(HTEAOSF,mode7,7,ITEAOSF);
KTEAOSF = (*(&(QSEAOSF_message.Msgno.Facility->Name))) ;
YSEAOSF.data[3] = A_UNITE(JTEAOSF,mode7,7,KTEAOSF);
MTEAOSF = ')' ;
YSEAOSF.data[4] = A_UNITE(LTEAOSF,mode6,6,MTEAOSF);
 /* line 149: */
OTEAOSF.fn.fn_global = PKDAOSF_newline;
OTEAOSF.nonlocals = A68_NIL;
YSEAOSF.data[5] = A_UNITE(NTEAOSF,mode12,12,OTEAOSF);
YSEAOSF.data[6] = A_UNITE(PTEAOSF,mode7,7,IREAOSF_message_is);
RTEAOSF = QSEAOSF_message.Text ;
YSEAOSF.data[7] = A_UNITE(QTEAOSF,mode7,7,RTEAOSF);
TTEAOSF = '\"' ;
YSEAOSF.data[8] = A_UNITE(STEAOSF,mode6,6,TTEAOSF);
 /* line 150: */
VTEAOSF.fn.fn_global = PKDAOSF_newline;
VTEAOSF.nonlocals = A68_NIL;
YSEAOSF.data[9] = A_UNITE(UTEAOSF,mode12,12,VTEAOSF);
YSEAOSF.data[10] = A_UNITE(WTEAOSF,mode7,7,MQEAOSF_sys_fault_message);
YSEAOSF.data[11] = A_UNITE(XTEAOSF,mode7,7,LREAOSF_bell_str);
ZTEAOSF.fn.fn_global = PKDAOSF_newline;
ZTEAOSF.nonlocals = A68_NIL;
YSEAOSF.data[12] = A_UNITE(YTEAOSF,mode12,12,ZTEAOSF);
KYDAOSF_put(FREAOSF_err, A_HISVEC(AUEAOSF,YSEAOSF,13,A68_52 ));
 /* line 151: */
 /* line 152: */
APBAOSF_exit((-1));
} 
else
{ 
CUEAOSF = UXAAOSF_cli_msg(A_UNITE(BUEAOSF,mode2,2,QSEAOSF_message));
if ( ! CUEAOSF )
{ /* line 153: */
CUEAOSF = PXAAOSF_abort_msg(A_UNITE(DUEAOSF,mode2,2,QSEAOSF_message));
}
 /* line 154: */
if ( CUEAOSF )
{ 
NREAOSF_facility(  &FUEAOSF );
EUEAOSF.data[0] = A_UNITE(GUEAOSF,mode7,7,FUEAOSF);
KUEAOSF = IUEAOSF ;
EUEAOSF.data[1] = A_UNITE(JUEAOSF,mode7,7,KUEAOSF);
 /* line 155: */
MUEAOSF.fn.fn_global = PKDAOSF_newline;
MUEAOSF.nonlocals = A68_NIL;
EUEAOSF.data[2] = A_UNITE(LUEAOSF,mode12,12,MUEAOSF);
EUEAOSF.data[3] = A_UNITE(NUEAOSF,mode7,7,IREAOSF_message_is);
PUEAOSF = QSEAOSF_message.Text ;
EUEAOSF.data[4] = A_UNITE(OUEAOSF,mode7,7,PUEAOSF);
RUEAOSF = '\"' ;
EUEAOSF.data[5] = A_UNITE(QUEAOSF,mode6,6,RUEAOSF);
TUEAOSF.fn.fn_global = PKDAOSF_newline;
TUEAOSF.nonlocals = A68_NIL;
EUEAOSF.data[6] = A_UNITE(SUEAOSF,mode12,12,TUEAOSF);
KYDAOSF_put(FREAOSF_err, A_HISVEC(UUEAOSF,EUEAOSF,7,A68_52 ));
 /* line 156: */
 /* line 157: */
 /* line 158: */
APBAOSF_exit((-2));
} 
} 
} 
A_PROC_EXIT(default_msg);
return;
} 
#undef NL

A68_BOOL  YUEAOSF_interactive(void)
{ 
A68_BOOL  ZUEAOSF;  /* clause result */
A_PROC_ENTRY(interactive);
ZUEAOSF = JBCAOSF_is_terminal(TSBAOSF_stdin);
A_PROC_EXIT(interactive);
return( ZUEAOSF );
} 
#undef NL

A68_VOID  BVEAOSF_prompt(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_190  DVEAOSF_read;   /* proc value of non-global proc */
A68_VC  XVEAOSF;  /* clause result */
A68_VC  YVEAOSF;  /* avoid structure result */
A_PROC_ENTRY(prompt);
 /* line 172: */
 /* line 173: */
{ 
 /* line 174: */
 /* line 175: */
A_CLOSURE( DVEAOSF_read, EVEAOSF_read, FVEAOSF_read );
(( FVEAOSF_read * ) ( DVEAOSF_read.nonlocals )) -> DVEAOSF_read = DVEAOSF_read;
 /* line 183: */
DQEAOSF_write_stdout(Str);
 /* line 184: */
 /* line 185: */
A_CALLPROC(DVEAOSF_read,( &YVEAOSF),( &YVEAOSF,(DVEAOSF_read).nonlocals));
XVEAOSF = YVEAOSF;
} 
A_PROC_EXIT(prompt);
*ReturnedValue = (XVEAOSF);
return;
} 
#undef NL
 /* line 191: */
 /* line 192: */
 /* line 193: */
 /* line 195: */

A68_BOOL  EWEAOSF_filename_arg(A68_VC  Name, A68_VC  Sort, A68_VC  Type, A68_VC * Ans, A68_BOOL  Should_exist)
{ 
A68_193  FWEAOSF;  /* collateral clause result */
A68_52  GWEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  JWEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KWEAOSF;  /* YIELD */
A68_52  LWEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  MWEAOSF;  /* procedure value */
A68_85  NWEAOSF;  /* OPERATORS - istruct -> vector */
A68_BOOL  OWEAOSF;  /* clause result */
A68_195  PWEAOSF;  /* collateral clause result */
A68_52  QWEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  TWEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  UWEAOSF;  /* YIELD */
A68_52  VWEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  YWEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ZWEAOSF;  /* YIELD */
A68_52  AXEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  BXEAOSF;  /* procedure value */
A68_85  CXEAOSF;  /* clause result */
A68_85  DXEAOSF;  /* OPERATORS - istruct -> vector */
A68_BOOL  EXEAOSF_failed;
A68_97  HXEAOSF_msg;   /* proc value of non-global proc */
A68_151  LXEAOSF;  /* avoid structure result */
A68_198  MXEAOSF;  /* collateral clause result */
A68_52  PXEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QXEAOSF;  /* YIELD */
A68_52  RXEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  UXEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VXEAOSF;  /* YIELD */
A68_52  WXEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  XXEAOSF;  /* procedure value */
A68_85  YXEAOSF;  /* OPERATORS - istruct -> vector */
A68_125 * ZXEAOSF_f;
A68_195  AYEAOSF;  /* collateral clause result */
A68_52  DYEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EYEAOSF;  /* YIELD */
A68_52  FYEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  IYEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  JYEAOSF;  /* YIELD */
A68_52  KYEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  LYEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  MYEAOSF;  /* procedure value */
A68_85  NYEAOSF;  /* OPERATORS - istruct -> vector */
A68_195  OYEAOSF;  /* collateral clause result */
A68_VC  PYEAOSF;  /* avoid structure result */
A68_52  QYEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  TYEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  UYEAOSF;  /* YIELD */
A68_52  VYEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  YYEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ZYEAOSF;  /* YIELD */
A68_52  AZEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  BZEAOSF;  /* procedure value */
A68_85  CZEAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(filename_arg);
 /* line 196: */
 /* line 197: */
if ( (Name.upb==0) )
{ 
FWEAOSF.data[0] = A_UNITE(GWEAOSF,mode7,7,Sort);
KWEAOSF = IWEAOSF ;
FWEAOSF.data[1] = A_UNITE(JWEAOSF,mode7,7,KWEAOSF);
MWEAOSF.fn.fn_global = PKDAOSF_newline;
MWEAOSF.nonlocals = A68_NIL;
FWEAOSF.data[2] = A_UNITE(LWEAOSF,mode12,12,MWEAOSF);
KYDAOSF_put(FREAOSF_err, A_HISVEC(NWEAOSF,FWEAOSF,3,A68_52 ));
 /* line 198: */
 /* line 199: */
OWEAOSF = A68_FALSE;
} 
else
{ 
 /* line 200: */
if ( ((*Ans).upb>0) )
{ 
{ 
PWEAOSF.data[0] = A_UNITE(QWEAOSF,mode7,7,Name);
UWEAOSF = SWEAOSF ;
PWEAOSF.data[1] = A_UNITE(TWEAOSF,mode7,7,UWEAOSF);
 /* line 201: */
PWEAOSF.data[2] = A_UNITE(VWEAOSF,mode7,7,Sort);
ZWEAOSF = XWEAOSF ;
PWEAOSF.data[3] = A_UNITE(YWEAOSF,mode7,7,ZWEAOSF);
BXEAOSF.fn.fn_global = PKDAOSF_newline;
BXEAOSF.nonlocals = A68_NIL;
PWEAOSF.data[4] = A_UNITE(AXEAOSF,mode12,12,BXEAOSF);
CXEAOSF = A_HISVEC(DXEAOSF,PWEAOSF,5,A68_52 );
} 
KYDAOSF_put(FREAOSF_err, CXEAOSF);
 /* line 202: */
 /* line 203: */
OWEAOSF = A68_FALSE;
} 
else
{ 
EXEAOSF_failed = A68_FALSE;
 /* line 204: */
A_CLOSURE( HXEAOSF_msg, IXEAOSF_msg, JXEAOSF_msg );
(( JXEAOSF_msg * ) ( HXEAOSF_msg.nonlocals )) -> EXEAOSF_failed = (&EXEAOSF_failed);
 /* line 207: */
BFCAOSF_parse_filename( Name, Type, HXEAOSF_msg, &LXEAOSF );
(*Ans) = LXEAOSF.Filename;
 /* line 208: */
 /* line 209: */
if ( EXEAOSF_failed )
{ 
QXEAOSF = OXEAOSF ;
MXEAOSF.data[0] = A_UNITE(PXEAOSF,mode7,7,QXEAOSF);
MXEAOSF.data[1] = A_UNITE(RXEAOSF,mode7,7,Sort);
VXEAOSF = TXEAOSF ;
MXEAOSF.data[2] = A_UNITE(UXEAOSF,mode7,7,VXEAOSF);
XXEAOSF.fn.fn_global = PKDAOSF_newline;
XXEAOSF.nonlocals = A68_NIL;
MXEAOSF.data[3] = A_UNITE(WXEAOSF,mode12,12,XXEAOSF);
 /* line 210: */
 /* line 211: */
KYDAOSF_put(FREAOSF_err, A_HISVEC(YXEAOSF,MXEAOSF,4,A68_52 ));
} 
else
{ 
ZXEAOSF_f = QVBAOSF_open_file((*Ans), ATBAOSF_read_access, HXEAOSF_msg);
 /* line 212: */
 /* line 213: */
if ( EXEAOSF_failed )
{ 
 /* line 214: */
if ( Should_exist )
{ 
EYEAOSF = CYEAOSF ;
AYEAOSF.data[0] = A_UNITE(DYEAOSF,mode7,7,EYEAOSF);
AYEAOSF.data[1] = A_UNITE(FYEAOSF,mode7,7,Sort);
 /* line 215: */
JYEAOSF = HYEAOSF ;
AYEAOSF.data[2] = A_UNITE(IYEAOSF,mode7,7,JYEAOSF);
AYEAOSF.data[3] = A_UNITE(KYEAOSF,mode7,7,(*Ans));
MYEAOSF.fn.fn_global = PKDAOSF_newline;
MYEAOSF.nonlocals = A68_NIL;
AYEAOSF.data[4] = A_UNITE(LYEAOSF,mode12,12,MYEAOSF);
KYDAOSF_put(FREAOSF_err, A_HISVEC(NYEAOSF,AYEAOSF,5,A68_52 ));
 /* line 216: */
 /* line 217: */
(*Ans) = IHDAOSF_nullstr;
} 
else
{ 
 /* line 218: */
 /* line 219: */
EXEAOSF_failed = A68_FALSE;
} 
} 
else
{ 
 /* line 220: */
if ( !Should_exist )
{ 
EXEAOSF_failed = A68_TRUE;
 /* line 221: */
JVBAOSF_file_name( ZXEAOSF_f, &PYEAOSF );
OYEAOSF.data[0] = A_UNITE(QYEAOSF,mode7,7,PYEAOSF);
UYEAOSF = SYEAOSF ;
OYEAOSF.data[1] = A_UNITE(TYEAOSF,mode7,7,UYEAOSF);
 /* line 222: */
OYEAOSF.data[2] = A_UNITE(VYEAOSF,mode7,7,Sort);
ZYEAOSF = XYEAOSF ;
OYEAOSF.data[3] = A_UNITE(YYEAOSF,mode7,7,ZYEAOSF);
BZEAOSF.fn.fn_global = PKDAOSF_newline;
BZEAOSF.nonlocals = A68_NIL;
OYEAOSF.data[4] = A_UNITE(AZEAOSF,mode12,12,BZEAOSF);
KYDAOSF_put(FREAOSF_err, A_HISVEC(CZEAOSF,OYEAOSF,5,A68_52 ));
 /* line 223: */
 /* line 224: */
(*Ans) = IHDAOSF_nullstr;
} 
 /* line 225: */
 /* line 226: */
 /* line 227: */
IWBAOSF_close_file(ZXEAOSF_f, RIBAOSF_ignore_msg);
} 
} 
 /* line 228: */
 /* line 229: */
OWEAOSF = !EXEAOSF_failed;
} 
} 
A_PROC_EXIT(filename_arg);
return( OWEAOSF );
} 
#undef NL
 /* line 234: */
 /* line 235: */
 /* line 238: */

A68_VOID  HZEAOSF_parse_arguments(A68_VC  Prompt, A68_118  Reset, A68_202  Check_arg, A68_203  No_more)
{ 
A68_INT  IZEAOSF_attempts;
A68_46  JZEAOSF;  /* avoid structure result */
A68_46  KZEAOSF_args;
A68_BOOL  LZEAOSF_failed;
A68_97  OZEAOSF_msg;   /* proc value of non-global proc */
A68_INT  SZEAOSF_argc;
A68_146  TZEAOSF_next;   /* proc value of non-global proc */
A68_BOOL  XZEAOSF;  /* optbool result */
A68_VC  YZEAOSF;  /* avoid structure result */
A68_VC  ZZEAOSF_arg;
A68_BOOL  AAFAOSF;  /* optbool result */
A68_BOOL  BAFAOSF;  /* clause result */
A68_BOOL  CAFAOSF;  /* optbool result */
A68_46  FAFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  GAFAOSF;  /* avoid structure result */
A_PROC_ENTRY(parse_arguments);
 /* line 239: */
 /* line 240: */
{ 
IZEAOSF_attempts = 0;
 /* line 241: */
for ( ;; )
{ 
 /* line 242: */
IZEAOSF_attempts+=1;
 /* line 243: */
RHCAOSF_get_args(  &JZEAOSF );
KZEAOSF_args = JZEAOSF;
 /* line 244: */
A_CALLPROC(Reset,(),((Reset).nonlocals));
 /* line 245: */
LZEAOSF_failed = (KZEAOSF_args.upb<=1);
 /* line 246: */
A_CLOSURE( OZEAOSF_msg, PZEAOSF_msg, QZEAOSF_msg );
(( QZEAOSF_msg * ) ( OZEAOSF_msg.nonlocals )) -> LZEAOSF_failed = (&LZEAOSF_failed);
 /* line 249: */
SZEAOSF_argc = 1;
 /* line 250: */
 /* line 251: */
A_CLOSURE( TZEAOSF_next, UZEAOSF_next, VZEAOSF_next );
(( VZEAOSF_next * ) ( TZEAOSF_next.nonlocals )) -> SZEAOSF_argc = (&SZEAOSF_argc);
(( VZEAOSF_next * ) ( TZEAOSF_next.nonlocals )) -> KZEAOSF_args = KZEAOSF_args;
 /* line 253: */
for ( ;; )
{ 
 /* line 254: */
XZEAOSF = (SZEAOSF_argc<KZEAOSF_args.upb);
if ( XZEAOSF )
{XZEAOSF = !LZEAOSF_failed;
}
if ( !(XZEAOSF) ) break;
A_CALLPROC(TZEAOSF_next,( &YZEAOSF),( &YZEAOSF,(TZEAOSF_next).nonlocals));
ZZEAOSF_arg = YZEAOSF;
 /* line 255: */
if ( !A_CALLPROC(Check_arg,(ZZEAOSF_arg, TZEAOSF_next),(ZZEAOSF_arg, TZEAOSF_next,(Check_arg).nonlocals)) )
{ 
 /* line 256: */
LZEAOSF_failed = A68_TRUE;
} 
}
 /* line 258: */
 /* line 259: */
AAFAOSF = !A_CALLPROC(No_more,(!LZEAOSF_failed),(!LZEAOSF_failed,(No_more).nonlocals));
if ( ! AAFAOSF )
{AAFAOSF = LZEAOSF_failed;
}
BAFAOSF = AAFAOSF;
if ( !BAFAOSF ) break;
 /* line 260: */
CAFAOSF = (IZEAOSF_attempts==3);
if ( ! CAFAOSF )
{CAFAOSF = !YUEAOSF_interactive();
}
if ( CAFAOSF )
{ 
 /* line 261: */
A_CALLPROC(TIBAOSF_global_msg,(KUAAOSF_fatal, A_HVEC(FAFAOSF,EAFAOSF,A68_VC )),(KUAAOSF_fatal, A_HVEC(FAFAOSF,EAFAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
else
{ 
 /* line 262: */
 /* line 263: */
TJCAOSF_prompt_args( Prompt, TIBAOSF_global_msg, &GAFAOSF );
GAFAOSF;
} 
}
 /* line 264: */
} 
A_PROC_EXIT(parse_arguments);
return;
} 
#undef NL

A68_BOOL  JAFAOSF_interrupted(void)
{ 
A68_BOOL  KAFAOSF;  /* clause result */
A_PROC_ENTRY(interrupted);
if ( (IAFAOSF_n_interrupts>0) )
{ 
IAFAOSF_n_interrupts = 0;
KAFAOSF = A68_TRUE;
} 
else
{ 
KAFAOSF = A68_FALSE;
} 
A_PROC_EXIT(interrupted);
return( KAFAOSF );
} 
#undef NL

A68_VOID  LAFAOSF_clear_interrupt(void)
{ 
A_PROC_ENTRY(clear_interrupt);
IAFAOSF_n_interrupts = 0;
A_PROC_EXIT(clear_interrupt);
return;
} 
#undef NL

A_STATIC A68_VOID  OAFAOSF_anonymous(A68_92  No, A68_46  Params)
{ 
A68_46  RAFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  UAFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_170  VAFAOSF;  /* collateral clause result */
A68_95  YAFAOSF;  /* avoid structure result */
A68_46  ZAFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ABFAOSF;  /* avoid structure result */
A68_46  BBFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  EBFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 288: */
 /* line 289: */
if ( (No.Number==XKCAOSF_sigint) )
{ 
A_CALLPROC(TIBAOSF_global_msg,(SUAAOSF_log, A_HVEC(RAFAOSF,QAFAOSF,A68_VC )),(SUAAOSF_log, A_HVEC(RAFAOSF,QAFAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
 /* line 290: */
 /* line 291: */
if ( ((IAFAOSF_n_interrupts+=1)>=HAFAOSF_user_bored_threshold) )
{ 
 /* line 292: */
 /* line 293: */
 /* line 294: */
 /* line 295: */
A_CALLPROC(TIBAOSF_global_msg,(MUAAOSF_user, A_HVEC(UAFAOSF,TAFAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(UAFAOSF,TAFAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
} 
else
{ 
 /* line 296: */
VAFAOSF.data[0] = XAFAOSF;
EABAOSF_translate_msg( No, Params, &YAFAOSF );
VAFAOSF.data[1] = YAFAOSF.Text;
JDAAOSF_concat( A_HISVEC(ZAFAOSF,VAFAOSF,2,A68_VC ), &ABFAOSF );
A_CALLPROC(TIBAOSF_global_msg,(SUAAOSF_log, A_HVEC(BBFAOSF,ABFAOSF,A68_VC )),(SUAAOSF_log, A_HVEC(BBFAOSF,ABFAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
 /* line 297: */
 /* line 298: */
 /* line 299: */
 /* line 300: */
A_CALLPROC(TIBAOSF_global_msg,(MUAAOSF_user, A_HVEC(EBFAOSF,DBFAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(EBFAOSF,DBFAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
return;
} 
#undef NL

A68_VOID  LBFAOSF_flt_if_interrupted(A68_97  Msg)
{ 
A68_46  OBFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt_if_interrupted);
 /* line 312: */
 /* line 313: */
if ( (IAFAOSF_n_interrupts>0) )
{ 
LAFAOSF_clear_interrupt();
 /* line 315: */
 /* line 316: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(OBFAOSF,NBFAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(OBFAOSF,NBFAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(flt_if_interrupted);
return;
} 
#undef NL

A68_VOID  RBFAOSF_trap_errors(A68_210  Action, A68_97  Msg)
{ 
A68_97  SBFAOSF_old_global;
A68_214  UBFAOSF_generator;   /* proc value of non-global proc */
A68_213  ACFAOSF;  /* avoid structure result */
A68_213  ZBFAOSF_old_sigs;
A68_97 * BCFAOSF_old;
A68_INT  CCFAOSF_sig;
A68_INT * DCFAOSF;  /* forall control - []x */
A68_INT  ECFAOSF;  /* forall loop counter */
A68_97  FCFAOSF;  /* avoid structure result */
A68_118  GCFAOSF_reset_sigmsg;   /* proc value of non-global proc */
A68_97  QCFAOSF_anonymous;   /* proc value of non-global proc */
A_PROC_ENTRY(trap_errors);
 /* line 320: */
 /* line 323: */
{ 
SBFAOSF_old_global = TIBAOSF_global_msg;
 /* line 324: */
A_CLOSURE( UBFAOSF_generator, VBFAOSF_generator, WBFAOSF_generator );
A_CALLPROC(UBFAOSF_generator,(A68_TRUE, &ACFAOSF),(A68_TRUE, &ACFAOSF,(UBFAOSF_generator).nonlocals));
ZBFAOSF_old_sigs = ACFAOSF;
 /* line 325: */
 /* line 326: */
ECFAOSF = ZBFAOSF_old_sigs.upb -1;
if ( ECFAOSF != JBFAOSF_trap_signals.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
BCFAOSF_old = ZBFAOSF_old_sigs.data;
DCFAOSF = JBFAOSF_trap_signals.data;
for (;ECFAOSF-- >= 0;
(BCFAOSF_old++
,DCFAOSF++
) )
{
CCFAOSF_sig = *DCFAOSF;
PRCAOSF_get_sigmsgproc( CCFAOSF_sig, Msg, &FCFAOSF );
(*BCFAOSF_old) = FCFAOSF;
}
 /* line 328: */
 /* line 329: */
 /* line 331: */
A_CLOSURE( GCFAOSF_reset_sigmsg, HCFAOSF_reset_sigmsg, ICFAOSF_reset_sigmsg );
(( ICFAOSF_reset_sigmsg * ) ( GCFAOSF_reset_sigmsg.nonlocals )) -> SBFAOSF_old_global = SBFAOSF_old_global;
(( ICFAOSF_reset_sigmsg * ) ( GCFAOSF_reset_sigmsg.nonlocals )) -> ZBFAOSF_old_sigs = ZBFAOSF_old_sigs;
(( ICFAOSF_reset_sigmsg * ) ( GCFAOSF_reset_sigmsg.nonlocals )) -> Msg = Msg;
 /* line 337: */
YPCAOSF_set_sigmsgproc(JBFAOSF_trap_signals, FBFAOSF_sig_msg, Msg);
 /* line 339: */
A_CLOSURE( QCFAOSF_anonymous, RCFAOSF_anonymous, SCFAOSF_anonymous );
(( SCFAOSF_anonymous * ) ( QCFAOSF_anonymous.nonlocals )) -> GCFAOSF_reset_sigmsg = GCFAOSF_reset_sigmsg;
(( SCFAOSF_anonymous * ) ( QCFAOSF_anonymous.nonlocals )) -> Msg = Msg;
TIBAOSF_global_msg = QCFAOSF_anonymous;
 /* line 345: */
A_CALLPROC(Action,(TIBAOSF_global_msg),(TIBAOSF_global_msg,(Action).nonlocals));
 /* line 348: */
 /* line 349: */
A_CALLPROC(GCFAOSF_reset_sigmsg,(),((GCFAOSF_reset_sigmsg).nonlocals));
} 
A_PROC_EXIT(trap_errors);
return;
} 
#undef NL

A68_VOID  VCFAOSF_mem_statistics(A68_36  P)
{ 
A_PROC_ENTRY(mem_statistics);
 /* line 355: */
A_CALLPROC(P,(XCFAOSF),(XCFAOSF,(P).nonlocals));
A_PROC_EXIT(mem_statistics);
return;
} 
#undef NL

A68_VOID  BDFAOSF_check_host_data(A68_VC  Input, A68_VC  *ReturnedValue)
{ 
A68_VC  DDFAOSF;  /* clause result */
A68_VC  FDFAOSF;  /* avoid structure result */
A_PROC_ENTRY(check_host_data);
ZCAAOSF_makervc( EDFAOSF, &FDFAOSF );
DDFAOSF = FDFAOSF;
A_PROC_EXIT(check_host_data);
*ReturnedValue = (DDFAOSF);
return;
} 
#undef NL
 /* line 378: */

A_STATIC A68_VOID  IDFAOSF_anonymous(A68_172  Version, A68_BOOL  Trap_user_interrupts)
{ 
A68_VC  JDFAOSF;  /* avoid structure result */
A68_VC  KDFAOSF;  /* avoid structure result */
A68_VC  LDFAOSF;  /* avoid structure result */
A68_VC  MDFAOSF;  /* avoid structure result */
A68_VC  NDFAOSF;  /* avoid structure result */
A68_97  ODFAOSF;  /* procedure value */
A68_88  PDFAOSF;  /* OPERATORS - mode -> union mode */
A68_36  QDFAOSF;  /* YIELD */
A68_36  RDFAOSF;  /* procedure value */
A68_87  SDFAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  TDFAOSF;  /* YIELD */
A68_88  XDFAOSF;  /* OPERATORS - mode -> union mode */
A68_36  YDFAOSF;  /* YIELD */
A68_36  ZDFAOSF;  /* procedure value */
A68_87  AEFAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  BEFAOSF;  /* YIELD */
A68_32  CEFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 379: */
 /* line 380: */
{ 
ZCAAOSF_makervc( Version.Name, &JDFAOSF );
IQEAOSF_osfacility = JDFAOSF;
 /* line 381: */
ZCAAOSF_makervc( Version.Version, &KDFAOSF );
JQEAOSF_version_str = KDFAOSF;
 /* line 382: */
ZCAAOSF_makervc( Version.Date, &LDFAOSF );
KQEAOSF_version_date = LDFAOSF;
 /* line 383: */
ZCAAOSF_makervc( Version.Msg, &MDFAOSF );
LQEAOSF_version_msg = MDFAOSF;
 /* line 384: */
ZCAAOSF_makervc( Version.Sys_fault, &NDFAOSF );
MQEAOSF_sys_fault_message = NDFAOSF;
 /* line 385: */
ODFAOSF.fn.fn_global = DSEAOSF_default_msg;
ODFAOSF.nonlocals = A68_NIL;
TIBAOSF_global_msg = ODFAOSF;
 /* line 387: */
RDFAOSF.fn.fn_global = DQEAOSF_write_stdout;
RDFAOSF.nonlocals = A68_NIL;
QDFAOSF = RDFAOSF ;
TDFAOSF = 80 ;
EREAOSF_out = DREAOSF_screen = BJDAOSF_make_channel(A_UNITE(SDFAOSF,mode1,1,TDFAOSF), A_UNITE(PDFAOSF,mode1,1,QDFAOSF));
 /* line 389: */
ZDFAOSF.fn.fn_global = VDFAOSF_anonymous;
ZDFAOSF.nonlocals = A68_NIL;
YDFAOSF = ZDFAOSF ;
BEFAOSF = 80 ;
FREAOSF_err = BJDAOSF_make_channel(A_UNITE(AEFAOSF,mode1,1,BEFAOSF), A_UNITE(XDFAOSF,mode1,1,YDFAOSF));
 /* line 391: */
 /* line 392: */
if ( Trap_user_interrupts )
{ 
 /* line 394: */
 /* line 395: */
 /* line 397: */
YPCAOSF_set_sigmsgproc(A_HVEC(CEFAOSF,XKCAOSF_sigint,A68_INT ), FBFAOSF_sig_msg, RIBAOSF_ignore_msg);
} 
} 
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
 /* line 4: */
 /* line 7: */
void IPEAOSF(void)   /* initialise DECS osinterface */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel","osinterface.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/osmessages.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/osif.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/cif.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  GQEAOSF;  /* OPERATORS - nil -> mode */
A68_173  CREAOSF;  /* procedure value */
A68_97  GBFAOSF;  /* procedure value */
A68_209  HBFAOSF;  /* collateral clause result */
A68_32  IBFAOSF;  /* OPERATORS - istruct -> vector */
A68_178  DEFAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
UIBAOSF();   /* USE osmessages */
CSCAOSF();   /* USE osif */
BAAAOSF();   /* USE cif */
ZRAAOSF();   /* USE messageproc */
QMDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/osinterface.a68";
A_config.translation_time = "Wed Apr 21 16:34:02 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "HPEAOSF (from seed file) ";
A_config.spec_change_time = "Wed Apr 21 16:34:02 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osinterface);
UEAALIB_a68config(LGAALIB_configinfo, MPEAOSF);
 /* line 65: */
 /* line 70: */
 /* line 72: */
ZPEAOSF_io_partline = XUBAOSF_io_no_newline;
 /* line 74: */
 /* line 75: */
 /* line 77: */
 /* line 96: */
HQEAOSF_nilstr = (A_VVAC(GQEAOSF));
 /* line 97: */
IQEAOSF_osfacility = HQEAOSF_nilstr;
JQEAOSF_version_str = HQEAOSF_nilstr;
KQEAOSF_version_date = HQEAOSF_nilstr;
 /* line 98: */
LQEAOSF_version_msg = HQEAOSF_nilstr;
MQEAOSF_sys_fault_message = HQEAOSF_nilstr;
 /* line 100: */
 /* line 105: */
CREAOSF.fn.fn_global = PQEAOSF_generator;
CREAOSF.nonlocals = A68_NIL;
NQEAOSF_anonymous = CREAOSF;
 /* line 107: */
DREAOSF_screen = (A68_34 *)A68_NIL;
 /* line 108: */
EREAOSF_out = (A68_34 *)A68_NIL;
 /* line 109: */
FREAOSF_err = (A68_34 *)A68_NIL;
 /* line 114: */
IREAOSF_message_is = HREAOSF;
LREAOSF_bell_str = KREAOSF;
 /* line 116: */
 /* line 118: */
 /* line 120: */
 /* line 121: */
 /* line 123: */
 /* line 127: */
 /* line 162: */
XUEAOSF_os_string = WUEAOSF;
 /* line 168: */
 /* line 171: */
 /* line 190: */
 /* line 232: */
 /* line 233: */
 /* line 278: */
 /* line 279: */
IAFAOSF_n_interrupts = 0;
 /* line 281: */
 /* line 282: */
 /* line 284: */
 /* line 286: */
GBFAOSF.fn.fn_global = OAFAOSF_anonymous;
GBFAOSF.nonlocals = A68_NIL;
FBFAOSF_sig_msg = (GBFAOSF);
 /* line 306: */
HBFAOSF.data[0] = DLCAOSF_sigfpe;
HBFAOSF.data[1] = CLCAOSF_sigbus;
HBFAOSF.data[2] = GLCAOSF_sigsegv;
HBFAOSF.data[3] = ZKCAOSF_sigill;
HBFAOSF.data[4] = ALCAOSF_sigtrap;
JBFAOSF_trap_signals = A_HISVEC(IBFAOSF,HBFAOSF,5,A68_INT );
 /* line 311: */
 /* line 319: */
 /* line 354: */
 /* line 364: */
YCFAOSF_os_debug = A68_FALSE;
 /* line 368: */
 /* line 371: */
 /* line 376: */
 /* line 377: */
 /* line 659: */
DEFAOSF.fn.fn_global = IDFAOSF_anonymous;
DEFAOSF.nonlocals = A68_NIL;
MREAOSF_initialise_osinterface = DEFAOSF;
A_PROC_EXIT(DECS osinterface);
} 
#undef NL
/* end of translation of osinterface.a68 */
