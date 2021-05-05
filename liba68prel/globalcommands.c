/* UNAME:VNLAOSF */
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
struct A68t111{
A68_BITS  Options;
A_PAD_BITS(PAD_24)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ,struct A68t111 ,struct A68t111 *),(struct A68t111 ,struct A68t111 ,struct A68t111 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111,MODE111) MODE111 */

A_PROCEDURE(struct A68t111 *,A68t113,(struct A68t111 *,struct A68t111 ),(struct A68t111 *,struct A68t111 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE111,MODE111) REF MODE111 */

A_PROCEDURE(A68_BOOL ,A68t114,(struct A68t111 ,struct A68t111 ),(struct A68t111 ,struct A68t111 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE111,MODE111) BOOL */

A_PROCEDURE(A68_BOOL ,A68t115,(struct A68t111 ,A68_INT ),(struct A68t111 ,A68_INT ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE111,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t116,(A68_INT ,struct A68t111 *),(A68_INT ,struct A68t111 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(INT) MODE111 */
struct A68t117{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t118,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 4 CHAR */
struct A68t119{
struct A68t120  Access;
A_PAD_ISTRUCT(A68_120 ,PAD_25)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(MODE120)  */

A_PROCEDURE(struct A68t117 *,A68t121,(A68_VC ,struct A68t119 ,struct A68t97 ),(A68_VC ,struct A68t119 ,struct A68t97 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE26,MODE119,MODE97) REF MODE117 */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t117 *,struct A68t97 ),(struct A68t117 *,struct A68t97 ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(REF MODE117,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t117 *,A68_VC *),(struct A68t117 *,A68_VC *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE117) MODE26 */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t117 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t117 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE117,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t117 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t117 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE117,MODE26,MODE97) MODE35 */
struct A68t126{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_26)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_27)
A68_SINT  Device;
A_PAD_SINT(PAD_28)
A68_SINT  Links;
A_PAD_SINT(PAD_29)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_30)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_31)
A68_LINT  Size;
A_PAD_LINT(PAD_32)
A68_LINT  Accessed;
A_PAD_LINT(PAD_33)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_34)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_35)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t128 ;

A_PROCEDURE(struct A68t126 *,A68t127,(struct A68t128 ,struct A68t97 ),(struct A68t128 ,struct A68t97 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE128,MODE97) REF MODE126 */
struct A68t128 { A68_INT mode; union {
struct A68t117 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t128  A68_128 ;    /* UNION(REF MODE117,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t117 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t117 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE117,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t117 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t117 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE117,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t117 *,struct A68t97 ,struct A68t35 *),(struct A68t117 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE117,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t133,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t134,(A68_INT ),(A68_INT ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t135,(void),(void *));
typedef struct A68t135  A68_135 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t136,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t137,(void),(void *));
typedef struct A68t137  A68_137 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t139{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t140,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t139 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t139 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26,MODE26,MODE97) MODE139 */

A_PROCEDURE(A68_VOID ,A68t141,(A68_VC *),(A68_VC *,void *));
typedef struct A68t141  A68_141 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t142  A68_142 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t143,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t144,(void),(void *));
typedef struct A68t144  A68_144 ;    /* PROC BOOL */
struct A68t146 ;

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t146 ,struct A68t97 ),(struct A68t146 ,struct A68t97 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE146,MODE97) VOID */
A_VECTOR(struct A68t147 ,A68t146);
typedef struct A68t146  A68_146 ;    /* VECTOR [] MODE147 */
struct A68t147{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_36)
};
typedef struct A68t147  A68_147 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t148,(void),(void *));
typedef struct A68t148  A68_148 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t149,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t152,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REAL) REAL */
struct A68t153{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t154,(A68_BOOL ,struct A68t153 *),(A68_BOOL ,struct A68t153 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(BOOL) MODE153 */

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t153 ,A68_BOOL ),(struct A68t153 ,A68_BOOL ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE153,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t153 *),(struct A68t153 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC MODE153 */

A_PROCEDURE(A68_BOOL ,A68t157,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t159 ;
struct A68t160 ;

A_PROCEDURE(A68_VOID ,A68t158,(A68_VC ,struct A68t148 ,struct A68t159 ,struct A68t160 ),(A68_VC ,struct A68t148 ,struct A68t159 ,struct A68t160 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE26,MODE148,MODE159,MODE160) VOID */

A_PROCEDURE(A68_BOOL ,A68t159,(A68_VC ,struct A68t141 ),(A68_VC ,struct A68t141 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE26,MODE141) BOOL */

A_PROCEDURE(A68_BOOL ,A68t160,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t161 ,struct A68t97 ),(struct A68t161 ,struct A68t97 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE161,MODE97) VOID */
struct A68t163{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t165 ;

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE165) VOID */
struct A68t165 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t165  A68_165 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t166,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t167,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(BITS,BITS) BITS */
struct A68t169 ;

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t169 ,A68_INT ),(struct A68t169 ,A68_INT ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE169,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t169,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(CHAR) VOID */
struct A68t171 ;

A_PROCEDURE(A68_INT ,A68t170,(struct A68t171 ),(struct A68t171 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE171) INT */

A_PROCEDURE(A68_CHAR ,A68t171,(void),(void *));
typedef struct A68t171  A68_171 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t172,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t173,(A68_INT ),(A68_INT ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t174,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t175,(A68_VC *),(A68_VC *,void *));
typedef struct A68t175  A68_175 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t176,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t177,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
struct A68t179 ;

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t179 ),(struct A68t179 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE179) VOID */
struct A68t179 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t111  mode2;
A68_VC  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t179  A68_179 ;    /* UNION(BOOL,MODE111,MODE26)  */
struct A68t180{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_37)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_38)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_39)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_40)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_41)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_42)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_43)
A68_INT  Width;
A_PAD_INT(PAD_44)
A68_INT  Page_count;
A_PAD_INT(PAD_45)
A68_INT  Page_length;
A_PAD_INT(PAD_46)
A68_INT  Eof_count;
A_PAD_INT(PAD_47)
struct A68t181 * Standard_reader;
struct A68t182 * Infile;
struct A68t175  Prompt;
struct A68t117 * Logfile;
struct A68t117 * Outfile;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE181,REF MODE182,MODE175,REF MODE117,REF MODE117)  */

A_PROCEDURE(A68_INT ,A68t183,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t181{
A68_VC  Rdbuffer;
struct A68t183  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_48)
A68_INT  Rdcharno;
A_PAD_INT(PAD_49)
A68_INT  Start_of_word;
A_PAD_INT(PAD_50)
struct A68t184 * Stack;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(REF MODE26,MODE183,INT,INT,INT,REF MODE184)  */
struct A68t182{
struct A68t117 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_51)
A68_INT  Number;
A_PAD_INT(PAD_52)
A68_VC  Name;
struct A68t181 * Reader;
struct A68t182 * Previous;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(REF MODE117,BOOL,INT,REF MODE26,REF MODE181,REF MODE182)  */
struct A68t184{
A68_VC  Line;
struct A68t184 * Rest;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(REF MODE26,REF MODE184)  */

A_PROCEDURE(struct A68t180 *,A68t185,(void),(void *));
typedef struct A68t185  A68_185 ;    /* PROC REF MODE180 */

A_PROCEDURE(A68_VOID ,A68t186,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t187,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t188,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t175 ),(struct A68t175 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE175) VOID */
struct A68t190 ;

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t190 ,A68_BOOL ,struct A68t97 ),(struct A68t190 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE190,BOOL,MODE97) VOID */
struct A68t190{
A68_VC  Name;
A68_VC  Default;
A68_VC  Value;
A68_INT  Sort;
A_PAD_INT(PAD_53)
struct A68t191  Set;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,INT,MODE191)  */

A_PROCEDURE(A68_VOID ,A68t192,(A68_VC ,A68_VC ,A68_INT ,struct A68t191 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t191 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE26,MODE26,INT,MODE191) VOID */

A_PROCEDURE(A68_BOOL ,A68t193,(A68_VC ),(A68_VC ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t194,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE26,MODE26,MODE97) VOID */
struct A68t195{
A68_INT  C;
A_PAD_INT(PAD_54)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT)  */
struct A68t196{
A68_BITS  A;
A_PAD_BITS(PAD_55)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(BITS)  */
struct A68t199 ;

A_PROCEDURE(A68_VOID ,A68t198,(A68_VC ,struct A68t199 ,struct A68t97 ),(A68_VC ,struct A68t199 ,struct A68t97 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE26,MODE199,MODE97) VOID */
struct A68t197{
A68_VC  Parameter;
struct A68t198  Proc;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE26,MODE198)  */
A_VECTOR(struct A68t199 ,A68t202);
typedef struct A68t202  A68_202 ;    /* VECTOR [] MODE199 */
struct A68t200{
A68_INT  Choice;
A_PAD_INT(PAD_56)
struct A68t202  Params;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,REF MODE202)  */
struct A68t201{
A68_INT  Sort;
A_PAD_INT(PAD_57)
A68_VC  Value;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t199 { A68_INT mode; union {
struct A68t200  mode1;
struct A68t201  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t199  A68_199 ;    /* UNION(MODE200,MODE201)  */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t199 ,struct A68t97 ),(struct A68t199 ,struct A68t97 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE199,MODE97) VOID */
struct A68t206 ;

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t206 ,struct A68t97 ),(struct A68t206 ,struct A68t97 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE206,MODE97) VOID */
struct A68t203 { A68_INT mode; union {
struct A68t197  mode1;
struct A68t204  mode2;
struct A68t205  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t203  A68_203 ;    /* UNION(MODE197,MODE204,MODE205)  */
A_VECTOR(struct A68t201 ,A68t206);
typedef struct A68t206  A68_206 ;    /* VECTOR [] MODE201 */
struct A68t207 { A68_INT mode; union {
struct A68t208 * mode1;
struct A68t209 * mode2;
struct A68t210 * mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t207  A68_207 ;    /* UNION(REF MODE208,REF MODE209,REF MODE210)  */
A_VECTOR(struct A68t212 ,A68t216);
typedef struct A68t216  A68_216 ;    /* VECTOR [] MODE212 */
struct A68t215{
A68_BITS  Type;
A_PAD_BITS(PAD_58)
struct A68t216  Elements;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(BITS,REF MODE216)  */
struct A68t212 { A68_INT mode; union {
A68_INT * mode1;
struct A68t215  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t212  A68_212 ;    /* UNION(REF INT,MODE215)  */
struct A68t208 ;

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t208 *,struct A68t34 *),(struct A68t208 *,struct A68t34 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE208,REF MODE34) VOID */
struct A68t213 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t214  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t213  A68_213 ;    /* UNION(REF MODE26,REF MODE102,MODE214)  */
struct A68t208{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t212  Parameter;
struct A68t196  Access;
struct A68t195  Continuation;
struct A68t213  Help;
struct A68t203  Command;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(REF MODE26,REF MODE26,MODE212,MODE196,MODE195,MODE213,MODE203)  */
A_VECTOR(struct A68t207 ,A68t211);
typedef struct A68t211  A68_211 ;    /* VECTOR [] MODE207 */
struct A68t209{
struct A68t208 * Group;
struct A68t211  Commands;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(REF MODE208,REF MODE211)  */
struct A68t210{
struct A68t208 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t211  Locals;
struct A68t211  Globals;
struct A68t208 * Postlude;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(REF MODE208,REF MODE26,REF REF MODE26,REF MODE211,REF MODE211,REF MODE208)  */
struct A68t217{
struct A68t210 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_59)
struct A68t102  Input_lines;
struct A68t217 * Caller;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(REF MODE210,INT,REF MODE102,REF MODE217)  */
A_VECTOR(struct A68t224 ,A68t219);
typedef struct A68t219  A68_219 ;    /* VECTOR [] MODE224 */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE97) REF MODE26 */
struct A68t225 { A68_INT mode; union {
struct A68t226  mode1;
A68_INT * mode2;
struct A68t215  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t225  A68_225 ;    /* UNION(MODE226,REF INT,MODE215)  */
struct A68t224{
A68_INT * Sort;
struct A68t225  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(REF INT,MODE225,REF MODE26,REF MODE26)  */
struct A68t218 ;

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t218 *,struct A68t208 *,struct A68t199 ,struct A68t97 ,struct A68t195 *),(struct A68t218 *,struct A68t208 *,struct A68t199 ,struct A68t97 ,struct A68t195 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE218,REF MODE208,MODE199,MODE97) MODE195 */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE102) VOID */
struct A68t223 ;

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t223 ),(struct A68t223 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE223) VOID */
struct A68t218{
struct A68t217 * Stack;
struct A68t219  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_60)
A68_BOOL  Private;
A_PAD_BOOL(PAD_61)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_62)
struct A68t220  Caller;
struct A68t221  Report_error;
struct A68t222  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE217,REF MODE219,BOOL,BOOL,BOOL,MODE220,MODE221,MODE222,MODE97)  */
struct A68t223 { A68_INT mode; union {
struct A68t97  mode1;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t223  A68_223 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t227,(struct A68t195 ,struct A68t195 ),(struct A68t195 ,struct A68t195 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE195,MODE195) BOOL */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t211 ,struct A68t211 ,struct A68t211 *),(struct A68t211 ,struct A68t211 ,struct A68t211 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE211,MODE211) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t211 ,struct A68t207 ,struct A68t211 *),(struct A68t211 ,struct A68t207 ,struct A68t211 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE211,MODE207) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t211 *,struct A68t211 ,struct A68t211 *),(struct A68t211 *,struct A68t211 ,struct A68t211 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF REF MODE211,MODE211) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t211 *,struct A68t207 ,struct A68t211 *),(struct A68t211 *,struct A68t207 ,struct A68t211 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF REF MODE211,MODE207) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t211 ,struct A68t211 *),(struct A68t211 ,struct A68t211 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE211) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t207 ,struct A68t211 *),(struct A68t207 ,struct A68t211 *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE207) REF MODE211 */

A_PROCEDURE(struct A68t209 *,A68t234,(A68_VC ,A68_VC ,struct A68t196 ,struct A68t211 ),(A68_VC ,A68_VC ,struct A68t196 ,struct A68t211 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE26,MODE26,MODE196,MODE211) REF MODE209 */

A_PROCEDURE(struct A68t210 *,A68t235,(struct A68t208 *,A68_VC ,A68_VC *,struct A68t211 ,struct A68t211 ,struct A68t203 ),(struct A68t208 *,A68_VC ,A68_VC *,struct A68t211 ,struct A68t211 ,struct A68t203 ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE208,MODE26,REF REF MODE26,REF MODE211,REF MODE211,MODE203) REF MODE210 */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t218 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t218 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE218,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t218 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t218 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE218,REF MODE34,BOOL,BOOL,MODE97) VOID */
struct A68t239 ;

A_PROCEDURE(struct A68t218 *,A68t238,(struct A68t221 ,struct A68t222 ,struct A68t97 ,struct A68t220 ,struct A68t239 *,struct A68t210 *,struct A68t199 ),(struct A68t221 ,struct A68t222 ,struct A68t97 ,struct A68t220 ,struct A68t239 *,struct A68t210 *,struct A68t199 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE221,MODE222,MODE97,MODE220,REF MODE239,REF MODE210,MODE199) REF MODE218 */
struct A68t239{
struct A68t224  Rule;
struct A68t239 * Rest;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE224,REF MODE239)  */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t218 *,struct A68t195 *),(struct A68t218 *,struct A68t195 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE218) MODE195 */

A_PROCEDURE(A68_BOOL ,A68t241,(struct A68t215 ),(struct A68t215 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE215) BOOL */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t216 ,struct A68t215 *),(struct A68t216 ,struct A68t215 *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE216) MODE215 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t212 ,struct A68t215 *),(struct A68t212 ,struct A68t215 *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE212) MODE215 */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t212 ,struct A68t219 ,A68_VC *),(struct A68t212 ,struct A68t219 ,A68_VC *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE212,REF MODE219) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t34 *,struct A68t219 ),(struct A68t34 *,struct A68t219 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE34,REF MODE219) VOID */
struct A68t247 ;

A_PROCEDURE(struct A68t239 *,A68t246,(struct A68t239 *,struct A68t247 ),(struct A68t239 *,struct A68t247 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE239,MODE247) REF MODE239 */
A_VECTOR(struct A68t248 ,A68t247);
typedef struct A68t247  A68_247 ;    /* VECTOR [] MODE248 */
struct A68t248{
A68_INT * No;
struct A68t225  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(REF INT,MODE225,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t199 ,struct A68t206 *),(struct A68t199 ,struct A68t206 *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE199) REF MODE206 */

A_PROCEDURE(A68_BOOL ,A68t250,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t251,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t252,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(struct A68t181 *,A68t253,(A68_VC ,struct A68t183 ),(A68_VC ,struct A68t183 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE26,MODE183) REF MODE181 */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t181 ),(struct A68t181 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE181) VOID */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_BOOL ,A68t256,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t219 ,struct A68t212 ,struct A68t97 ,struct A68t199 *),(struct A68t219 ,struct A68t212 ,struct A68t97 ,struct A68t199 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF MODE219,MODE212,MODE97) MODE199 */

A_PROCEDURE(A68_CHAR ,A68t258,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t259,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t201 ,A68_INT ,struct A68t97 ),(struct A68t201 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE201,INT,MODE97) VOID */
struct A68t261{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_63)
A68_BOOL  Check;
A_PAD_BOOL(PAD_64)
};
typedef struct A68t261  A68_261 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t261 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t261 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE261,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t263,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t264,(struct A68t201 ),(struct A68t201 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE201) BOOL */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t201 ,struct A68t97 ,A68_VC *),(struct A68t201 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE201,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t266,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t267,(A68_VC ,A68_VC ,struct A68t251 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t251 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE26,MODE26,MODE251,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t268,(A68_VC ),(A68_VC ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t269,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t270,(struct A68t261 ,struct A68t97 ,A68_VC *),(struct A68t261 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE261,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t271,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t271  A68_271 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t272,(struct A68t201 ,struct A68t97 ),(struct A68t201 ,struct A68t97 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE201,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t273,(struct A68t201 ,A68_VC ,struct A68t97 ,struct A68t139 *),(struct A68t201 ,A68_VC ,struct A68t97 ,struct A68t139 *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE201,MODE26,MODE97) MODE139 */

A_PROCEDURE(A68_VOID ,A68t274,(struct A68t206 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t163 *),(struct A68t206 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t163 *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(REF MODE206,REF INT,REF MODE26,MODE97) MODE163 */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t201 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t201 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE201,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t276,(struct A68t201 ,struct A68t97 ,struct A68t46 ),(struct A68t201 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE201,MODE97,MODE46) INT */
struct A68t277{
A68_INT  Lwb;
A_PAD_INT(PAD_65)
A68_INT  Upb;
A_PAD_INT(PAD_66)
};
typedef struct A68t277  A68_277 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t278,(struct A68t201 ,struct A68t277 ,struct A68t97 ,struct A68t277 *),(struct A68t201 ,struct A68t277 ,struct A68t97 ,struct A68t277 *,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE201,MODE277,MODE97) MODE277 */

A_PROCEDURE(A68_VOID ,A68t279,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t279  A68_279 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t280,(struct A68t201 ,struct A68t97 ),(struct A68t201 ,struct A68t97 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE201,MODE97) CHAR */

A_PROCEDURE(struct A68t239 *,A68t281,(void),(void *));
typedef struct A68t281  A68_281 ;    /* PROC REF MODE239 */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t148 ),(struct A68t148 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE148) VOID */

A_PROCEDURE(A68_VOID ,A68t283,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(struct A68t218 **,A68t286,(void),(void *));
typedef struct A68t286  A68_286 ;    /* PROC REF REF MODE218 */

A_PROCEDURE(A68_INT ,A68t287,(struct A68t206 ,struct A68t97 ),(struct A68t206 ,struct A68t97 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(REF MODE206,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t288,(A68_BOOL ,struct A68t117 *,struct A68t97 ),(A68_BOOL ,struct A68t117 *,struct A68t97 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(BOOL,REF MODE117,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,7,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,26,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,5,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_VC ,2,A68t297);
typedef struct A68t297  A68_297 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t211 ,struct A68t211 ),(struct A68t211 ,struct A68t211 ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF MODE211,REF MODE211) VOID */
struct A68t299{
struct A68t210 * Env;
struct A68t299 * Rest;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(REF MODE210,REF MODE299)  */

A_PROCEDURE(A68_BOOL ,A68t300,(struct A68t210 *),(struct A68t210 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE210) BOOL */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t211 ),(struct A68t211 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE211) VOID */

A_PROCEDURE(A68_INT ,A68t302,(A68_VC ,A68_VC ,struct A68t211 ),(A68_VC ,A68_VC ,struct A68t211 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE26,MODE26,REF MODE211) INT */

A_PROCEDURE(struct A68t208 *,A68t303,(A68_VC ,A68_VC ,A68_VC ),(A68_VC ,A68_VC ,A68_VC ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE26,MODE26,MODE26) REF MODE208 */
A_ISTRUCT(A68_CHAR ,9,A68t304);
typedef struct A68t304  A68_304 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_VC ,3,A68t305);
typedef struct A68t305  A68_305 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t306);
typedef struct A68t306  A68_306 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t307,(A68_VC ,A68_VC ,struct A68t148 ,struct A68t286 ,struct A68t211 *),(A68_VC ,A68_VC ,struct A68t148 ,struct A68t286 ,struct A68t211 *,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE26,MODE26,MODE148,MODE286) REF MODE211 */
A_ISTRUCT(A68_CHAR ,600,A68t308);
typedef struct A68t308  A68_308 ;    /* STRUCT 600 CHAR */
A_ISTRUCT(struct A68t52 ,12,A68t309);
typedef struct A68t309  A68_309 ;    /* STRUCT 12 MODE52 */

A_PROCEDURE(A68_CHAR ,A68t310,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF BITS) CHAR */

A_PROCEDURE(A68_BITS ,A68t311,(void),(void *));
typedef struct A68t311  A68_311 ;    /* PROC BITS */
A_ISTRUCT(A68_CHAR ,11,A68t312);
typedef struct A68t312  A68_312 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,261,A68t313);
typedef struct A68t313  A68_313 ;    /* STRUCT 261 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,76,A68t315);
typedef struct A68t315  A68_315 ;    /* STRUCT 76 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t316);
typedef struct A68t316  A68_316 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,55,A68t317);
typedef struct A68t317  A68_317 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,75,A68t318);
typedef struct A68t318  A68_318 ;    /* STRUCT 75 CHAR */
A_ISTRUCT(A68_CHAR ,73,A68t319);
typedef struct A68t319  A68_319 ;    /* STRUCT 73 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t321);
typedef struct A68t321  A68_321 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,50,A68t322);
typedef struct A68t322  A68_322 ;    /* STRUCT 50 CHAR */
A_ISTRUCT(struct A68t207 ,3,A68t323);
typedef struct A68t323  A68_323 ;    /* STRUCT 3 MODE207 */
A_ISTRUCT(A68_CHAR ,37,A68t324);
typedef struct A68t324  A68_324 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t325);
typedef struct A68t325  A68_325 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t326);
typedef struct A68t326  A68_326 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t327);
typedef struct A68t327  A68_327 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,74,A68t328);
typedef struct A68t328  A68_328 ;    /* STRUCT 74 CHAR */
A_ISTRUCT(A68_CHAR ,52,A68t329);
typedef struct A68t329  A68_329 ;    /* STRUCT 52 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t330);
typedef struct A68t330  A68_330 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t331);
typedef struct A68t331  A68_331 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,59,A68t332);
typedef struct A68t332  A68_332 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t333);
typedef struct A68t333  A68_333 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(struct A68t207 ,6,A68t334);
typedef struct A68t334  A68_334 ;    /* STRUCT 6 MODE207 */
A_ISTRUCT(A68_CHAR ,51,A68t335);
typedef struct A68t335  A68_335 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,69,A68t336);
typedef struct A68t336  A68_336 ;    /* STRUCT 69 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t337);
typedef struct A68t337  A68_337 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t338);
typedef struct A68t338  A68_338 ;    /* STRUCT 47 CHAR */
A_ISTRUCT(A68_CHAR ,112,A68t339);
typedef struct A68t339  A68_339 ;    /* STRUCT 112 CHAR */
A_ISTRUCT(struct A68t52 ,9,A68t340);
typedef struct A68t340  A68_340 ;    /* STRUCT 9 MODE52 */
A_ISTRUCT(A68_CHAR ,14,A68t341);
typedef struct A68t341  A68_341 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t342);
typedef struct A68t342  A68_342 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,84,A68t343);
typedef struct A68t343  A68_343 ;    /* STRUCT 84 CHAR */
A_ISTRUCT(A68_CHAR ,139,A68t344);
typedef struct A68t344  A68_344 ;    /* STRUCT 139 CHAR */
A_ISTRUCT(A68_CHAR ,275,A68t345);
typedef struct A68t345  A68_345 ;    /* STRUCT 275 CHAR */
A_ISTRUCT(A68_VC ,5,A68t346);
typedef struct A68t346  A68_346 ;    /* STRUCT 5 MODE26 */
A_ISTRUCT(A68_CHAR ,10,A68t347);
typedef struct A68t347  A68_347 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,80,A68t348);
typedef struct A68t348  A68_348 ;    /* STRUCT 80 CHAR */
A_ISTRUCT(A68_CHAR ,65,A68t349);
typedef struct A68t349  A68_349 ;    /* STRUCT 65 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t350);
typedef struct A68t350  A68_350 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,121,A68t351);
typedef struct A68t351  A68_351 ;    /* STRUCT 121 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t352);
typedef struct A68t352  A68_352 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(struct A68t212 ,2,A68t353);
typedef struct A68t353  A68_353 ;    /* STRUCT 2 MODE212 */
A_ISTRUCT(A68_CHAR ,66,A68t354);
typedef struct A68t354  A68_354 ;    /* STRUCT 66 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t355);
typedef struct A68t355  A68_355 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t356);
typedef struct A68t356  A68_356 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,31,A68t357);
typedef struct A68t357  A68_357 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_VC ,9,A68t358);
typedef struct A68t358  A68_358 ;    /* STRUCT 9 MODE26 */
A_ISTRUCT(A68_CHAR ,22,A68t359);
typedef struct A68t359  A68_359 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,78,A68t360);
typedef struct A68t360  A68_360 ;    /* STRUCT 78 CHAR */
A_ISTRUCT(struct A68t207 ,2,A68t361);
typedef struct A68t361  A68_361 ;    /* STRUCT 2 MODE207 */
A_ISTRUCT(A68_CHAR ,13,A68t362);
typedef struct A68t362  A68_362 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,100,A68t363);
typedef struct A68t363  A68_363 ;    /* STRUCT 100 CHAR */
A_ISTRUCT(A68_CHAR ,61,A68t364);
typedef struct A68t364  A68_364 ;    /* STRUCT 61 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t365);
typedef struct A68t365  A68_365 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t366);
typedef struct A68t366  A68_366 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t367);
typedef struct A68t367  A68_367 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,106,A68t368);
typedef struct A68t368  A68_368 ;    /* STRUCT 106 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t369);
typedef struct A68t369  A68_369 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,63,A68t370);
typedef struct A68t370  A68_370 ;    /* STRUCT 63 CHAR */
A_ISTRUCT(A68_CHAR ,152,A68t371);
typedef struct A68t371  A68_371 ;    /* STRUCT 152 CHAR */
A_ISTRUCT(struct A68t52 ,16,A68t372);
typedef struct A68t372  A68_372 ;    /* STRUCT 16 MODE52 */
A_ISTRUCT(A68_CHAR ,212,A68t373);
typedef struct A68t373  A68_373 ;    /* STRUCT 212 CHAR */
A_ISTRUCT(A68_CHAR ,91,A68t374);
typedef struct A68t374  A68_374 ;    /* STRUCT 91 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t375);
typedef struct A68t375  A68_375 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t376);
typedef struct A68t376  A68_376 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t377);
typedef struct A68t377  A68_377 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,270,A68t378);
typedef struct A68t378  A68_378 ;    /* STRUCT 270 CHAR */
A_ISTRUCT(A68_CHAR ,140,A68t379);
typedef struct A68t379  A68_379 ;    /* STRUCT 140 CHAR */
A_ISTRUCT(A68_VC ,7,A68t380);
typedef struct A68t380  A68_380 ;    /* STRUCT 7 MODE26 */
A_ISTRUCT(A68_CHAR ,149,A68t381);
typedef struct A68t381  A68_381 ;    /* STRUCT 149 CHAR */
A_ISTRUCT(A68_CHAR ,109,A68t382);
typedef struct A68t382  A68_382 ;    /* STRUCT 109 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t383);
typedef struct A68t383  A68_383 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,71,A68t384);
typedef struct A68t384  A68_384 ;    /* STRUCT 71 CHAR */
A_ISTRUCT(struct A68t207 ,5,A68t385);
typedef struct A68t385  A68_385 ;    /* STRUCT 5 MODE207 */
A_ISTRUCT(struct A68t207 ,36,A68t386);
typedef struct A68t386  A68_386 ;    /* STRUCT 36 MODE207 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
extern A68_VOID  JGAALIB_show_a68config(struct A68t36 );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandcaller --- */
extern A68_BOOL  YKLAOSF_check_syntax;
extern A68_BOOL  ZKLAOSF_show_parameters;
/* --- End of imports from commandcaller --- */


/* --- Imports from kernelreader --- */
extern A68_VC  CQJAOSF_int_str;
extern A68_212  TTJAOSF_int_syntax;
extern A68_BOOL  ZTJAOSF_is_int(struct A68t201 );
extern A68_INT  DUJAOSF_get_int(struct A68t201 ,struct A68t97 );
extern A68_212  TXJAOSF_name_syntax;
extern A68_BOOL  XXJAOSF_is_name(struct A68t201 );
extern A68_VOID  CYJAOSF_get_name(struct A68t201 ,struct A68t97 ,A68_VC *);
extern A68_212  QYJAOSF_string_syntax;
extern A68_BOOL  FZJAOSF_is_string(struct A68t201 );
extern A68_VOID  JZJAOSF_get_string(struct A68t201 ,struct A68t97 ,A68_VC *);
extern A68_VC  UZJAOSF_filename_str;
extern A68_212  AAKAOSF_filename_syntax;
extern A68_VOID  QAKAOSF_get_filename(struct A68t201 ,A68_VC ,struct A68t97 ,A68_139 *);
extern A68_212  BBKAOSF_text_syntax;
extern A68_BOOL  UBKAOSF_is_text(struct A68t201 );
extern A68_VOID  YBKAOSF_get_text(struct A68t201 ,struct A68t97 ,A68_VC *);
extern A68_212  WFKAOSF_switch_syntax;
extern A68_VOID  PGKAOSF_set_switch(struct A68t201 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *);
extern A68_212  PIKAOSF_word_syntax;
extern A68_INT  WIKAOSF_get_word(struct A68t201 ,struct A68t97 ,struct A68t46 );
/* --- End of imports from kernelreader --- */


/* --- Imports from commandreader --- */
extern A68_BOOL  KXFAOSF_debug_reader;
extern A68_212  MNGAOSF_command_name_syntax;
extern A68_BOOL  MOGAOSF_is_command_name(struct A68t201 );
extern A68_VOID  QOGAOSF_get_command_name(struct A68t201 ,struct A68t97 ,A68_VC *);
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
extern A68_212  LEFAOSF_noparameters;
extern A68_VOID  TFFAOSF_prod(struct A68t216 ,A68_215 *);
extern A68_VOID  EGFAOSF_opt(struct A68t212 ,A68_215 *);
extern A68_VOID  WGFAOSF_star(struct A68t212 ,A68_215 *);
/* --- End of imports from commandsyntax --- */


/* --- Imports from command --- */
extern A68_VOID  FZHAOSF_nullcommand(struct A68t199 ,struct A68t97 );
extern A68_196  QZHAOSF_normalaccess;
extern A68_196  UZHAOSF_hiddenaccess;
extern A68_196  YZHAOSF_secretaccess;
extern A68_196  KAIAOSF_secretprivateaccess;
extern A68_195  SAIAOSF_continue;
extern A68_195  WAIAOSF_return;
extern A68_VOID  JDIAOSF_addab(struct A68t211 *,struct A68t211 ,A68_211 *);
extern A68_VOID  TDIAOSF_makecommands(struct A68t211 ,A68_211 *);
extern A68_209 * GFIAOSF_make_group(A68_VC ,A68_VC ,struct A68t196 ,struct A68t211 );
extern A68_VOID  CRIAOSF_help(struct A68t218 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 );
extern A68_VOID  USIAOSF_full_help(struct A68t218 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 );
extern A68_VOID  ZYIAOSF_syntax_help(struct A68t218 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 );
/* --- End of imports from command --- */


/* --- Imports from variables --- */
#define JUGAOSF_env_var 1
#define KUGAOSF_str_var 2
#define LUGAOSF_bool_var 3
extern A68_VC  RUGAOSF_true_var;
extern A68_VC  UUGAOSF_false_var;
extern A68_VOID  BVGAOSF_add_var(A68_VC ,A68_VC ,A68_INT ,struct A68t191 );
extern A68_VOID  SVGAOSF_null_set_var(struct A68t190 ,A68_BOOL ,struct A68t97 );
extern A68_VOID  WVGAOSF_default_set_var(struct A68t190 ,A68_BOOL ,struct A68t97 );
extern A68_VOID  QWGAOSF_get_var(A68_VC ,A68_VC *);
extern A68_BOOL  DXGAOSF_var_unset(A68_VC );
extern A68_VOID  EYGAOSF_set_var(A68_VC ,A68_VC ,struct A68t97 );
extern A68_VOID  CAHAOSF_show_var(A68_VC ,struct A68t97 );
/* --- End of imports from variables --- */


/* --- Imports from ioprocs --- */
extern A68_180  GWKAOSF_iostate;
extern A68_VOID  LALAOSF_banner(A68_VC );
extern A68_VOID  MCLAOSF_io_clearinputs(struct A68t97 );
extern A68_VOID  VCLAOSF_io_input(A68_VC ,struct A68t97 );
extern A68_VOID  YDLAOSF_io_removefile(struct A68t97 );
extern A68_VOID  IELAOSF_io_showinput(struct A68t97 );
extern A68_VOID  LELAOSF_io_dontshowinput(struct A68t97 );
extern A68_VOID  OELAOSF_io_showoutput(struct A68t97 );
extern A68_VOID  RELAOSF_io_dontshowoutput(struct A68t97 );
extern A68_VOID  UELAOSF_io_showtime(struct A68t97 );
extern A68_VOID  XELAOSF_io_dontshowtime(struct A68t97 );
extern A68_VOID  AFLAOSF_io_printtime(struct A68t97 );
extern A68_VOID  GFLAOSF_io_message(A68_VC ,struct A68t97 );
extern A68_VOID  LFLAOSF_io_comment(A68_VC ,struct A68t97 );
extern A68_VOID  PFLAOSF_io_offline(struct A68t97 );
extern A68_VOID  UFLAOSF_io_online(struct A68t97 );
extern A68_VOID  BGLAOSF_io_log(A68_VC ,struct A68t97 );
extern A68_VOID  MGLAOSF_io_dontlog(struct A68t97 );
extern A68_VOID  VGLAOSF_io_output(A68_VC ,struct A68t97 );
extern A68_VOID  GHLAOSF_io_dontoutput(struct A68t97 );
extern A68_VOID  PHLAOSF_io_page(A68_INT ,struct A68t97 );
extern A68_VOID  YHLAOSF_io_dontpage(struct A68t97 );
extern A68_VOID  CILAOSF_io_setwidth(A68_INT ,struct A68t97 );
/* --- End of imports from ioprocs --- */


/* --- Imports from testmode --- */
extern A68_VOID  WEHAOSF_testmode_file_name(struct A68t117 *,A68_VC *);
/* --- End of imports from testmode --- */


/* --- Imports from basics --- */
extern A68_INT  WLHAOSF_seconds(void);
extern A68_VOID  JQHAOSF_date_time(A68_INT ,A68_VC *);
extern A68_VOID  ZQHAOSF_time_str(A68_VC *);
extern A68_VC  WXHAOSF_source_type;
extern A68_VC  FYHAOSF_logfile_type;
extern A68_VC  IYHAOSF_infile_type;
extern A68_VC  LYHAOSF_outfile_type;
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_BOOL  AVBAOSF_(struct A68t35 ,struct A68t35 );
extern A68_35  OUBAOSF_io_ok;
extern A68_35  RUBAOSF_io_eof;
extern A68_35  ZPEAOSF_io_partline;
#define GVBAOSF_newline_char '\012'
extern A68_119  ATBAOSF_read_access;
extern A68_119  ITBAOSF_append_access;
extern A68_119  MTBAOSF_update_access;
extern A68_119  QTBAOSF_update_truncate_access;
#define AQEAOSF_block_update_access MTBAOSF_update_access
#define BQEAOSF_block_update_truncate_access QTBAOSF_update_truncate_access
extern A68_117 * QVBAOSF_open_file(A68_VC ,struct A68t119 ,struct A68t97 );
extern A68_VOID  IWBAOSF_close_file(struct A68t117 *,struct A68t97 );
extern A68_VOID  DXBAOSF_read_line(struct A68t117 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  UXBAOSF_write_buffer(struct A68t117 *,A68_VC ,struct A68t97 ,A68_35 *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern A68_LINT  VPBAOSF_get_time(void);
extern A68_INT  HQBAOSF_execute_os_command(A68_VC ,struct A68t97 );
extern A68_VOID  ERBAOSF_get_login_name(A68_VC *);
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc = argc; A_argv = argv; A_envp = envp

#define DHCAOSF_prelude A_prelude
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
extern A68_VOID  KMBAOSF_set_gc_diagnostics(A68_BITS );
extern A68_46  IMBAOSF_gc_diag_options;
extern A68_VOID  MMBAOSF_gc_statistics(struct A68t36 );
extern A68_VOID  VCFAOSF_mem_statistics(struct A68t36 );
extern A68_BOOL  YCFAOSF_os_debug;
#include <math.h>

#define ZCFAOSF_sqrt sqrt
extern A68_VOID  NREAOSF_facility(A68_VC *);
extern A68_VOID  PREAOSF_version(A68_153 *);
extern A68_VC  XUEAOSF_os_string;
extern A68_34 * DREAOSF_screen;
extern A68_34 * EREAOSF_out;
extern A68_VOID  LBFAOSF_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from options --- */
/* --- End of imports from options --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_92  MUAAOSF_user;
extern A68_INT  SWAAOSF_diagnostic_level;
extern A68_BOOL  JXAAOSF_error_msg(struct A68t106 );
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  CHDAOSF_nilstr;
extern A68_VC  IHDAOSF_nullstr;
extern A68_VOID  NCAAOSF_makervc(A68_CHAR ,A68_VC *);
extern A68_VOID  JDAAOSF_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  IRDAOSF_width(A68_VC ,A68_INT ,A68_58 *);
extern A68_VOID  BSDAOSF_after(A68_INT ,A68_62 *);
extern A68_VOID  LSDAOSF_lines(A68_INT ,A68_64 *);
extern A68_VOID  PKDAOSF_newline(struct A68t34 *);
extern A68_VOID  KTDAOSF_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  KYDAOSF_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  JCEAOSF_putb(A68_VC ,struct A68t85 ,A68_VC *);
extern A68_VOID  YCEAOSF_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void TKLAOSF(void);   /* commandcaller */
extern void MKJAOSF(void);   /* kernelreader */
extern void JSFAOSF(void);   /* commandreader */
extern void EEFAOSF(void);   /* commandsyntax */
extern void YYHAOSF(void);   /* command */
extern void EUGAOSF(void);   /* variables */
extern void MVKAOSF(void);   /* ioprocs */
extern void UBHAOSF(void);   /* testmode */
extern void CFHAOSF(void);   /* basics */
extern void IPEAOSF(void);   /* osinterface */
extern void UMEAOSF(void);   /* options */
extern void ZRAAOSF(void);   /* messageproc */
extern void QMDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_284   ZNLAOSF = {"$Id: globalcommands.a68,v 1.2 2001-09-27 13:06:03 sian Exp $"}; 
A_GISVEC(A68_VC ,AOLAOSF,ZNLAOSF,60)
static A68_120   BOLAOSF = {"edit"}; 
A_GISVEC(A68_VC ,COLAOSF,BOLAOSF,4)
static A68_VC  DOLAOSF_edit_var;
static A68_285   EOLAOSF = {"showtime"}; 
A_GISVEC(A68_VC ,FOLAOSF,EOLAOSF,8)
static A68_VC  GOLAOSF_showtime_var;
static A68_VC  HOLAOSF_edit_type;
static A68_VC  JOLAOSF_sysdir_var;
static A68_148  MOLAOSF_print_issue;
static A68_286  OOLAOSF_commandenv;
static A68_217 * POLAOSF_syntaxcheck_context;
static A68_289   HPLAOSF = {"File  \""}; 
A_GISVEC(A68_VC ,IPLAOSF,HPLAOSF,7)
static A68_290   NPLAOSF = {"\":"}; 
A_GISVEC(A68_VC ,OPLAOSF,NPLAOSF,2)
static A68_292   IQLAOSF = {"Read failed - closing file"}; 
A_GISVEC(A68_VC ,JQLAOSF,IQLAOSF,26)
static A68_293   XQLAOSF = {"Module configuration information:"}; 
A_GISVEC(A68_VC ,YQLAOSF,XQLAOSF,33)
static A68_295   IRLAOSF = {"RSRE "}; 
A_GISVEC(A68_VC ,KRLAOSF,IRLAOSF,5)
static A68_296   ZSLAOSF = {" sub-process"}; 
A_GISVEC(A68_VC ,ATLAOSF,ZSLAOSF,12)
static A68_304   EVLAOSF = {" - use  \""}; 
A_GISVEC(A68_VC ,FVLAOSF,EVLAOSF,9)
static A68_304   LVLAOSF = {"Withdrawn"}; 
A_GISVEC(A68_VC ,MVLAOSF,LVLAOSF,9)
static A68_306   NVLAOSF = {""}; 
A_GISVEC(A68_VC ,OVLAOSF,NVLAOSF,0)
static A68_120   KWLAOSF = {"edit"}; 
A_GISVEC(A68_VC ,LWLAOSF,KWLAOSF,4)
static A68_304   ZWLAOSF = {"usage.log"}; 
A_GISVEC(A68_VC ,AXLAOSF,ZWLAOSF,9)
static A68_290   JXLAOSF = {"  "}; 
A_GISVEC(A68_VC ,KXLAOSF,JXLAOSF,2)
static A68_290   SXLAOSF = {" ["}; 
A_GISVEC(A68_VC ,TXLAOSF,SXLAOSF,2)
static A68_290   FYLAOSF = {"  "}; 
A_GISVEC(A68_VC ,GYLAOSF,FYLAOSF,2)
#define CZLAOSF_cc 05403070037U
static A68_312   LAMAOSF = {"CHECKSYNTAX"}; 
A_GISVEC(A68_VC ,MAMAOSF,LAMAOSF,11)
static A68_290   OAMAOSF = {"CS"}; 
A_GISVEC(A68_VC ,PAMAOSF,OAMAOSF,2)
static A68_313   RAMAOSF = 
{  'E', 'n', 'a', 'b', 'l', 'e', 's', ' ',
   'c', 'o', 'm', 'm', 'a', 'n', 'd', ' ',
   'l', 'i', 'n', 'e', ' ', 's', 'y', 'n',
   't', 'a', 'x', ' ', 'c', 'h', 'e', 'c',
   'k', 'i', 'n', 'g', '.', ' ', ' ', 'Y',
   'o', 'u', ' ', 'm', 'u', 's', 't', ' ',
   'u', 's', 'e', ' ', '\"', 'd', 'o', 'n',
   't', 'c', 'h', 'e', 'c', 'k', 's', 'y',
   'n', 't', 'a', 'x', '\"', ' ', '(', '\"',
   'd', 'c', 's', '\"', ')', ' ', 't', 'o',
   ' ', 's', 't', 'o', 'p', ' ', 's', 'y',
   'n', 't', 'a', 'x', ' ', 'c', 'h', 'e',
   'c', 'k', 'i', 'n', 'g', '.', ' ', ' ',
   'A', 'n', 'y', ' ', 's', 'y', 'n', 't',
   'a', 'x', ' ', 'e', 'r', 'r', 'o', 'r',
   's', ' ', 'w', 'i', 'l', 'l', ' ', 'b',
   'e', ' ', 'r', 'e', 'p', 'o', 'r', 't',
   'e', 'd', ' ', 'a', 'n', 'd', ' ', 'c',
   'h', 'e', 'c', 'k', 'i', 'n', 'g', ' ',
   'w', 'i', 'l', 'l', ' ', 'c', 'o', 'n',
   't', 'i', 'n', 'u', 'e', '.', ' ', ' ',
   'C', 'o', 'm', 'm', 'a', 'n', 'd', ' ',
   'i', 'n', 'p', 'u', 't', ' ', 'f', 'i',
   'l', 'e', 's', ' ', 'w', 'i', 'l', 'l',
   ' ', 'b', 'e', ' ', 'o', 'p', 'e', 'n',
   'e', 'd', ' ', 'a', 'n', 'd', ' ', 'c',
   'l', 'o', 's', 'e', 'd', ' ', 'a', 's',
   ' ', 'n', 'o', 'r', 'm', 'a', 'l', ' ',
   'a', 'n', 'd', ' ', '\"', 'h', 'e', 'l',
   'p', '\"', ' ', 'w', 'i', 'l', 'l', ' ',
   'c', 'o', 'n', 't', 'i', 'n', 'u', 'e',
   ' ', 't', 'o', ' ', 'f', 'u', 'n', 'c',
   't', 'i', 'o', 'n', '.' 
} ; 
A_GISVEC(A68_VC ,SAMAOSF,RAMAOSF,261)
static A68_314   YAMAOSF = {"Command line syntax checking already active"}; 
A_GISVEC(A68_VC ,ZAMAOSF,YAMAOSF,43)
static A68_315   CBMAOSF = {"Command line syntax checking started - use \"dontchecksyntax\" (\"dcs\") to stop"}; 
A_GISVEC(A68_VC ,DBMAOSF,CBMAOSF,76)
static A68_295   OBMAOSF = {"CLEAR"}; 
static A68_316   QBMAOSF = {"INPUTS"}; 
A_GISVEC(A68_VC ,RBMAOSF,QBMAOSF,6)
static A68_317   TBMAOSF = {"Closes and removes all files from the input-file stack."}; 
A_GISVEC(A68_VC ,UBMAOSF,TBMAOSF,55)
A_GISVEC(A68_VC ,HCMAOSF,OBMAOSF,5)
static A68_289   LCMAOSF = {"COMMENT"}; 
A_GISVEC(A68_VC ,MCMAOSF,LCMAOSF,7)
static A68_290   OCMAOSF = {"CO"}; 
A_GISVEC(A68_VC ,PCMAOSF,OCMAOSF,2)
static A68_318   TCMAOSF = {"Has no functional effect.  Allows comments to be included in an input file."}; 
A_GISVEC(A68_VC ,UCMAOSF,TCMAOSF,75)
static A68_295   IDMAOSF = {"DEBUG"}; 
static A68_290   LDMAOSF = {"OS"}; 
A_GISVEC(A68_VC ,MDMAOSF,LDMAOSF,2)
static A68_319   ODMAOSF = {"Enables monitoring of operating system responses where they are available"}; 
A_GISVEC(A68_VC ,PDMAOSF,ODMAOSF,73)
static A68_289   VDMAOSF = {"OSdebug"}; 
A_GISVEC(A68_VC ,WDMAOSF,VDMAOSF,7)
static A68_120   FEMAOSF = {"HEAP"}; 
A_GISVEC(A68_VC ,GEMAOSF,FEMAOSF,4)
static A68_284   JEMAOSF = {"Sets the diagnostics level for the ALGOL68 garbage collector"}; 
A_GISVEC(A68_VC ,KEMAOSF,JEMAOSF,60)
static A68_320   TEMAOSF = {"Heap diagnostic setting changed to "}; 
A_GISVEC(A68_VC ,UEMAOSF,TEMAOSF,35)
static A68_316   SFMAOSF = {"READER"}; 
A_GISVEC(A68_VC ,TFMAOSF,SFMAOSF,6)
static A68_322   WFMAOSF = {"Enables trace of command parameter syntax analysis"}; 
A_GISVEC(A68_VC ,XFMAOSF,WFMAOSF,50)
static A68_296   EGMAOSF = {"Debug_reader"}; 
A_GISVEC(A68_VC ,FGMAOSF,EGMAOSF,12)
A_GISVEC(A68_VC ,TGMAOSF,IDMAOSF,5)
static A68_120   XGMAOSF = {"DONT"}; 
static A68_312   AHMAOSF = {"CHECKSYNTAX"}; 
A_GISVEC(A68_VC ,BHMAOSF,AHMAOSF,11)
static A68_290   DHMAOSF = {"CS"}; 
A_GISVEC(A68_VC ,EHMAOSF,DHMAOSF,2)
static A68_324   GHMAOSF = {"Disables command line syntax checking"}; 
A_GISVEC(A68_VC ,HHMAOSF,GHMAOSF,37)
static A68_325   PHMAOSF = {"Syntax checking finished"}; 
A_GISVEC(A68_VC ,QHMAOSF,PHMAOSF,24)
static A68_324   XHMAOSF = {"You haven't requested syntax checking"}; 
A_GISVEC(A68_VC ,YHMAOSF,XHMAOSF,37)
static A68_326   KIMAOSF = {"LOG"}; 
A_GISVEC(A68_VC ,LIMAOSF,KIMAOSF,3)
static A68_326   NIMAOSF = {"LOG"}; 
A_GISVEC(A68_VC ,OIMAOSF,NIMAOSF,3)
static A68_327   QIMAOSF = {"Stops recording a log-file and closes it."}; 
A_GISVEC(A68_VC ,RIMAOSF,QIMAOSF,41)
static A68_316   DJMAOSF = {"OUTPUT"}; 
A_GISVEC(A68_VC ,EJMAOSF,DJMAOSF,6)
static A68_326   GJMAOSF = {"OUT"}; 
A_GISVEC(A68_VC ,HJMAOSF,GJMAOSF,3)
static A68_328   JJMAOSF = {"Closes the current output file and resumes sending output to the terminal."}; 
A_GISVEC(A68_VC ,KJMAOSF,JJMAOSF,74)
static A68_325   WJMAOSF = {"MONITORCOMMANDPARAMETERS"}; 
A_GISVEC(A68_VC ,XJMAOSF,WJMAOSF,24)
static A68_326   ZJMAOSF = {"MCP"}; 
A_GISVEC(A68_VC ,AKMAOSF,ZJMAOSF,3)
static A68_329   CKMAOSF = {"Stops the monitoring of parameters given to commands"}; 
A_GISVEC(A68_VC ,DKMAOSF,CKMAOSF,52)
static A68_330   KKMAOSF = {"Parameter monitoring disabled"}; 
A_GISVEC(A68_VC ,LKMAOSF,KKMAOSF,29)
static A68_120   WKMAOSF = {"SHOW"}; 
static A68_295   ZKMAOSF = {"INPUT"}; 
A_GISVEC(A68_VC ,ALMAOSF,ZKMAOSF,5)
static A68_290   CLMAOSF = {"IN"}; 
A_GISVEC(A68_VC ,DLMAOSF,CLMAOSF,2)
static A68_331   FLMAOSF = {"Switches off screen-echoing of offline input."}; 
A_GISVEC(A68_VC ,GLMAOSF,FLMAOSF,45)
static A68_316   SLMAOSF = {"OUTPUT"}; 
A_GISVEC(A68_VC ,TLMAOSF,SLMAOSF,6)
static A68_326   VLMAOSF = {"OUT"}; 
A_GISVEC(A68_VC ,WLMAOSF,VLMAOSF,3)
static A68_329   YLMAOSF = {"Switches off screen-echoing of file-directed output."}; 
A_GISVEC(A68_VC ,ZLMAOSF,YLMAOSF,52)
static A68_120   LMMAOSF = {"TIME"}; 
A_GISVEC(A68_VC ,MMMAOSF,LMMAOSF,4)
static A68_332   QMMAOSF = {"Stops including the time-of-day and CPU-time used with the "}; 
A_GISVEC(A68_VC ,RMMAOSF,QMMAOSF,59)
static A68_285   TMMAOSF = {" prompt."}; 
A_GISVEC(A68_VC ,UMMAOSF,TMMAOSF,8)
A_GISVEC(A68_VC ,INMAOSF,WKMAOSF,4)
static A68_120   MNMAOSF = {"PAGE"}; 
A_GISVEC(A68_VC ,NNMAOSF,MNMAOSF,4)
static A68_120   PNMAOSF = {"PAGE"}; 
A_GISVEC(A68_VC ,QNMAOSF,PNMAOSF,4)
static A68_333   SNMAOSF = {"Switches off paged mode for screen output."}; 
A_GISVEC(A68_VC ,TNMAOSF,SNMAOSF,42)
A_GISVEC(A68_VC ,GOMAOSF,XGMAOSF,4)
static A68_120   KOMAOSF = {"EDIT"}; 
A_GISVEC(A68_VC ,LOMAOSF,KOMAOSF,4)
static A68_290   NOMAOSF = {"ED"}; 
A_GISVEC(A68_VC ,OOMAOSF,NOMAOSF,2)
static A68_335   ROMAOSF = {"Invokes the operating system editor defined by the "}; 
A_GISVEC(A68_VC ,SOMAOSF,ROMAOSF,51)
static A68_336   UOMAOSF = {" mm environment variable \"edit_command\" on the module name parameter."}; 
A_GISVEC(A68_VC ,VOMAOSF,UOMAOSF,69)
static A68_304   DPMAOSF = {"command \""}; 
A_GISVEC(A68_VC ,EPMAOSF,DPMAOSF,9)
static A68_337   FPMAOSF = {"\" is not defined"}; 
A_GISVEC(A68_VC ,GPMAOSF,FPMAOSF,16)
static A68_285   AQMAOSF = {"\033\014\025\025\031\034\025\021"}; 
A_GISVEC(A68_VC ,BQMAOSF,AQMAOSF,8)
static A68_338   HQMAOSF = {"Gives details of all the commands avaliable in "}; 
A_GISVEC(A68_VC ,IQMAOSF,HQMAOSF,47)
static A68_333   RQMAOSF = {"LOW       display command names once only."}; 
A_GISVEC(A68_VC ,SQMAOSF,RQMAOSF,42)
static A68_339   XQMAOSF = {"MEDIUM    display command names in the contexts in which they occur marking those encountered elsewhere by \"***\""}; 
A_GISVEC(A68_VC ,YQMAOSF,XQMAOSF,112)
static A68_338   DRMAOSF = {"HIGH      output help message for each command."}; 
A_GISVEC(A68_VC ,ERMAOSF,DRMAOSF,47)
static A68_326   PRMAOSF = {"LOW"}; 
A_GISVEC(A68_VC ,QRMAOSF,PRMAOSF,3)
static A68_316   RRMAOSF = {"MEDIUM"}; 
A_GISVEC(A68_VC ,SRMAOSF,RRMAOSF,6)
static A68_120   TRMAOSF = {"HIGH"}; 
A_GISVEC(A68_VC ,URMAOSF,TRMAOSF,4)
static A68_341   ESMAOSF = {"GARBAGECOLLECT"}; 
A_GISVEC(A68_VC ,FSMAOSF,ESMAOSF,14)
static A68_290   HSMAOSF = {"GC"}; 
A_GISVEC(A68_VC ,ISMAOSF,HSMAOSF,2)
static A68_320   KSMAOSF = {"Calls the ALGOL68 garbage collector"}; 
A_GISVEC(A68_VC ,LSMAOSF,KSMAOSF,35)
static A68_342   USMAOSF = {"Garbage collecting..."}; 
A_GISVEC(A68_VC ,VSMAOSF,USMAOSF,21)
static A68_312   ETMAOSF = {"...finished"}; 
A_GISVEC(A68_VC ,FTMAOSF,ETMAOSF,11)
static A68_120   ZTMAOSF = {"HELP"}; 
A_GISVEC(A68_VC ,AUMAOSF,ZTMAOSF,4)
static A68_343   OUMAOSF = {"With no argument, help displays two lists of the commands available in the selected "}; 
A_GISVEC(A68_VC ,PUMAOSF,OUMAOSF,84)
static A68_344   RUMAOSF = {" environment; those in the first list are available only in the selected environment and those in the second list are available throughout "}; 
A_GISVEC(A68_VC ,SUMAOSF,RUMAOSF,139)
static A68_345   UUMAOSF = 
{  '.', ' ', ' ', 'C', 'o', 'm', 'm', 'a',
   'n', 'd', 's', ' ', 'w', 'h', 'i', 'c',
   'h', ' ', 's', 't', 'a', 'r', 't', ' ',
   'w', 'i', 't', 'h', ' ', 't', 'h', 'e',
   ' ', 's', 'a', 'm', 'e', ' ', 'f', 'i',
   'r', 's', 't', ' ', 'w', 'o', 'r', 'd',
   ',', ' ', 'g', 'r', 'o', 'u', 'p', ' ',
   'c', 'o', 'm', 'm', 'a', 'n', 'd', 's',
   ',', ' ', 'a', 'r', 'e', ' ', 'l', 'i',
   's', 't', 'e', 'd', ' ', 'a', 's', ' ',
   '\"', '<', 'f', 'i', 'r', 's', 't', 'w',
   'o', 'r', 'd', '>', '.', '.', '.', '\"',
   '.', ' ', ' ', 'W', 'i', 't', 'h', ' ',
   'a', ' ', 'c', 'o', 'm', 'm', 'a', 'n',
   'd', ' ', 'n', 'a', 'm', 'e', ' ', 'a',
   's', ' ', 'a', 'n', ' ', 'a', 'r', 'g',
   'u', 'm', 'e', 'n', 't', ',', ' ', 'h',
   'e', 'l', 'p', ' ', 'd', 'i', 's', 'p',
   'l', 'a', 'y', 's', ' ', 'i', 'n', 'f',
   'o', 'r', 'm', 'a', 't', 'i', 'o', 'n',
   ' ', 'a', 'b', 'o', 'u', 't', ' ', 't',
   'h', 'e', ' ', 'c', 'o', 'm', 'm', 'a',
   'n', 'd', '.', ' ', ' ', 'W', 'i', 't',
   'h', ' ', 'a', ' ', 'g', 'r', 'o', 'u',
   'p', ' ', 'c', 'o', 'm', 'm', 'a', 'n',
   'd', ' ', 'n', 'a', 'm', 'e', ' ', 'a',
   's', ' ', 'a', 'r', 'g', 'u', 'm', 'e',
   'n', 't', ',', ' ', 'h', 'e', 'l', 'p',
   ' ', 'd', 'i', 's', 'p', 'l', 'a', 'y',
   's', ' ', 'a', ' ', 'l', 'i', 's', 't',
   ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ',
   'a', 'p', 'p', 'r', 'o', 'p', 'r', 'i',
   'a', 't', 'e', ' ', 'g', 'r', 'o', 'u',
   'p', ' ', 'c', 'o', 'm', 'm', 'a', 'n',
   'd', 's', '.' 
} ; 
A_GISVEC(A68_VC ,VUMAOSF,UUMAOSF,275)
static A68_347   SVMAOSF = {"HELPSYNTAX"}; 
A_GISVEC(A68_VC ,TVMAOSF,SVMAOSF,10)
static A68_290   VVMAOSF = {"HS"}; 
A_GISVEC(A68_VC ,WVMAOSF,VVMAOSF,2)
static A68_348   DWMAOSF = {"Provides a brief description of the syntactic units that form the parameters to "}; 
A_GISVEC(A68_VC ,EWMAOSF,DWMAOSF,80)
static A68_344   GWMAOSF = {" commands.  When no parameter is given, a summary of the available readers is given.  Give \"full\" as a parameter to obtain a detailed list."}; 
A_GISVEC(A68_VC ,HWMAOSF,GWMAOSF,139)
static A68_120   PWMAOSF = {"full"}; 
A_GISVEC(A68_VC ,SWMAOSF,PWMAOSF,4)
static A68_342   TWMAOSF = {"Extra parameter found"}; 
A_GISVEC(A68_VC ,UWMAOSF,TWMAOSF,21)
static A68_316   FXMAOSF = {"HIDDEN"}; 
A_GISVEC(A68_VC ,GXMAOSF,FXMAOSF,6)
static A68_331   IXMAOSF = {"Enables help of test and withdrawn facilities"}; 
A_GISVEC(A68_VC ,JXMAOSF,IXMAOSF,45)
static A68_316   QXMAOSF = {"Hidden"}; 
A_GISVEC(A68_VC ,RXMAOSF,QXMAOSF,6)
static A68_295   EYMAOSF = {"INPUT"}; 
A_GISVEC(A68_VC ,FYMAOSF,EYMAOSF,5)
static A68_290   HYMAOSF = {"IN"}; 
A_GISVEC(A68_VC ,IYMAOSF,HYMAOSF,2)
static A68_318   KYMAOSF = {"Adds the specified file to the input-file stack and starts reading from it."}; 
A_GISVEC(A68_VC ,LYMAOSF,KYMAOSF,75)
static A68_326   ZYMAOSF = {"LOG"}; 
A_GISVEC(A68_VC ,AZMAOSF,ZYMAOSF,3)
static A68_349   CZMAOSF = {"Opens a log-file and starts recording all input and output in it."}; 
A_GISVEC(A68_VC ,DZMAOSF,CZMAOSF,65)
static A68_289   RZMAOSF = {"MESSAGE"}; 
A_GISVEC(A68_VC ,SZMAOSF,RZMAOSF,7)
static A68_290   UZMAOSF = {"ME"}; 
A_GISVEC(A68_VC ,VZMAOSF,UZMAOSF,2)
static A68_350   ZZMAOSF = {"Outputs a message."}; 
A_GISVEC(A68_VC ,AANAOSF,ZZMAOSF,18)
static A68_325   PANAOSF = {"MONITORCOMMANDPARAMETERS"}; 
A_GISVEC(A68_VC ,QANAOSF,PANAOSF,24)
static A68_326   SANAOSF = {"MCP"}; 
A_GISVEC(A68_VC ,TANAOSF,SANAOSF,3)
static A68_351   VANAOSF = {"Monitors parameters given to commands by displaying them before the command is obeyed indicating which readers were used."}; 
A_GISVEC(A68_VC ,WANAOSF,VANAOSF,121)
static A68_352   DBNAOSF = {"Parameter monitoring enabled"}; 
A_GISVEC(A68_VC ,EBNAOSF,DBNAOSF,28)
static A68_120   QBNAOSF = {"MORE"}; 
A_GISVEC(A68_VC ,RBNAOSF,QBNAOSF,4)
static A68_285   ACNAOSF = {"Outputs "}; 
A_GISVEC(A68_VC ,BCNAOSF,ACNAOSF,8)
static A68_354   FCNAOSF = {" to the screen a page at a time and to the log file if open.  The "}; 
A_GISVEC(A68_VC ,GCNAOSF,FCNAOSF,66)
static A68_355   KCNAOSF = {" parameter may be used to specify the page size."}; 
A_GISVEC(A68_VC ,LCNAOSF,KCNAOSF,48)
static A68_120   IDNAOSF = {"OBEY"}; 
A_GISVEC(A68_VC ,JDNAOSF,IDNAOSF,4)
static A68_304   PDNAOSF = {"Suspends "}; 
A_GISVEC(A68_VC ,QDNAOSF,PDNAOSF,9)
static A68_352   SDNAOSF = {" and executes the specified "}; 
A_GISVEC(A68_VC ,TDNAOSF,SDNAOSF,28)
static A68_315   UDNAOSF = {" operating system command, or launches a sub-process in which a sequence of "}; 
A_GISVEC(A68_VC ,VDNAOSF,UDNAOSF,76)
static A68_324   WDNAOSF = {" commands may be given.  The current "}; 
A_GISVEC(A68_VC ,XDNAOSF,WDNAOSF,37)
static A68_357   ZDNAOSF = {" session resumes on completion."}; 
A_GISVEC(A68_VC ,AENAOSF,ZDNAOSF,31)
static A68_295   OENAOSF = {"SPAWN"}; 
A_GISVEC(A68_VC ,PENAOSF,OENAOSF,5)
static A68_359   UENAOSF = {"See the \"obey\" command"}; 
A_GISVEC(A68_VC ,VENAOSF,UENAOSF,22)
static A68_289   IFNAOSF = {"OFFLINE"}; 
A_GISVEC(A68_VC ,JFNAOSF,IFNAOSF,7)
static A68_326   LFNAOSF = {"OFF"}; 
A_GISVEC(A68_VC ,MFNAOSF,LFNAOSF,3)
static A68_349   OFNAOSF = {"Resumes reading from the file at the top of the input-file stack."}; 
A_GISVEC(A68_VC ,PFNAOSF,OFNAOSF,65)
static A68_316   BGNAOSF = {"ONLINE"}; 
A_GISVEC(A68_VC ,CGNAOSF,BGNAOSF,6)
static A68_290   EGNAOSF = {"ON"}; 
A_GISVEC(A68_VC ,FGNAOSF,EGNAOSF,2)
static A68_360   HGNAOSF = {"Specifies a break-point in an input-file at which control is to return online."}; 
A_GISVEC(A68_VC ,IGNAOSF,HGNAOSF,78)
static A68_316   UGNAOSF = {"OUTPUT"}; 
A_GISVEC(A68_VC ,VGNAOSF,UGNAOSF,6)
static A68_326   XGNAOSF = {"OUT"}; 
A_GISVEC(A68_VC ,YGNAOSF,XGNAOSF,3)
static A68_324   AHNAOSF = {"Directs output to the specified file."}; 
A_GISVEC(A68_VC ,BHNAOSF,AHNAOSF,37)
static A68_304   OHNAOSF = {"OVERWRITE"}; 
static A68_295   RHNAOSF = {"STACK"}; 
A_GISVEC(A68_VC ,SHNAOSF,RHNAOSF,5)
static A68_333   VHNAOSF = {"Overwrites <int> * 10 K Bytes of the stack"}; 
A_GISVEC(A68_VC ,WHNAOSF,VHNAOSF,42)
static A68_120   UINAOSF = {"HEAP"}; 
A_GISVEC(A68_VC ,VINAOSF,UINAOSF,4)
static A68_349   YINAOSF = {"Generates <int> * 10K 4-byte sized objects of garbage on the HEAP"}; 
A_GISVEC(A68_VC ,ZINAOSF,YINAOSF,65)
static A68_120   JJNAOSF = {"####"}; 
A_GISVEC(A68_VC ,SJNAOSF,OHNAOSF,9)
static A68_120   WJNAOSF = {"PAGE"}; 
A_GISVEC(A68_VC ,XJNAOSF,WJNAOSF,4)
static A68_329   BKNAOSF = {"Sets paged mode (and page length) for screen output."}; 
A_GISVEC(A68_VC ,CKNAOSF,BKNAOSF,52)
static A68_295   NKNAOSF = {"PRINT"}; 
static A68_362   QKNAOSF = {"CONFIGURATION"}; 
A_GISVEC(A68_VC ,RKNAOSF,QKNAOSF,13)
static A68_316   TKNAOSF = {"CONFIG"}; 
A_GISVEC(A68_VC ,UKNAOSF,TKNAOSF,6)
static A68_363   XKNAOSF = {"Displays the configuration details of all the software modules used to build the current version of "}; 
A_GISVEC(A68_VC ,YKNAOSF,XKNAOSF,100)
static A68_295   MLNAOSF = {"ISSUE"}; 
A_GISVEC(A68_VC ,NLNAOSF,MLNAOSF,5)
static A68_290   PLNAOSF = {"IS"}; 
A_GISVEC(A68_VC ,QLNAOSF,PLNAOSF,2)
static A68_364   TLNAOSF = {"Displays the configuration details of the current version of "}; 
A_GISVEC(A68_VC ,ULNAOSF,TLNAOSF,61)
static A68_120   IMNAOSF = {"HEAP"}; 
A_GISVEC(A68_VC ,JMNAOSF,IMNAOSF,4)
static A68_365   LMNAOSF = {"Gives a summary of the ALGOL68 HEAP memory statistics"}; 
A_GISVEC(A68_VC ,MMNAOSF,LMNAOSF,53)
static A68_316   GNNAOSF = {"MEMORY"}; 
A_GISVEC(A68_VC ,HNNAOSF,GNNAOSF,6)
static A68_326   JNNAOSF = {"MEM"}; 
A_GISVEC(A68_VC ,KNNAOSF,JNNAOSF,3)
static A68_365   MNNAOSF = {"Gives a summary of the ALGOL68 HEAP memory statistics"}; 
A_GISVEC(A68_VC ,NNNAOSF,MNNAOSF,53)
static A68_120   HONAOSF = {"TIME"}; 
A_GISVEC(A68_VC ,IONAOSF,HONAOSF,4)
static A68_120   KONAOSF = {"TIME"}; 
A_GISVEC(A68_VC ,LONAOSF,KONAOSF,4)
static A68_366   NONAOSF = {"Displays time-of-day and CPU-time used."}; 
A_GISVEC(A68_VC ,OONAOSF,NONAOSF,39)
static A68_285   APNAOSF = {"VARIABLE"}; 
A_GISVEC(A68_VC ,BPNAOSF,APNAOSF,8)
static A68_325   JPNAOSF = {"Print the values of the "}; 
A_GISVEC(A68_VC ,KPNAOSF,JPNAOSF,24)
static A68_367   MPNAOSF = {" variables, or all "}; 
A_GISVEC(A68_VC ,NPNAOSF,MPNAOSF,19)
static A68_320   PPNAOSF = {" variables if none are specified.  "}; 
A_GISVEC(A68_VC ,QPNAOSF,PPNAOSF,35)
static A68_368   SPNAOSF = {" variables are used to define operating system commands and certain working environment parameters within "}; 
A_GISVEC(A68_VC ,TPNAOSF,SPNAOSF,106)
static A68_306   GQNAOSF = {""}; 
A_GISVEC(A68_VC ,HQNAOSF,GQNAOSF,0)
A_GISVEC(A68_VC ,PQNAOSF,NKNAOSF,5)
static A68_289   SQNAOSF = {"\021\017\030\013 \015\034"}; 
static A68_326   VQNAOSF = {"\022\033\033"}; 
A_GISVEC(A68_VC ,WQNAOSF,VQNAOSF,3)
static A68_312   ERNAOSF = {"Private OFF"}; 
A_GISVEC(A68_VC ,FRNAOSF,ERNAOSF,11)
static A68_290   QRNAOSF = {"\022\023"}; 
static A68_359   ZRNAOSF = {"Command not recognised"}; 
A_GISVEC(A68_VC ,ASNAOSF,ZRNAOSF,22)
static A68_369   ISNAOSF = {"TESTINGINPROGRESS"}; 
A_GISVEC(A68_VC ,JSNAOSF,ISNAOSF,17)
A_GISVEC(A68_VC ,WSNAOSF,QRNAOSF,2)
A_GISVEC(A68_VC ,BTNAOSF,SQNAOSF,7)
static A68_347   GTNAOSF = {"REMOVEFILE"}; 
A_GISVEC(A68_VC ,HTNAOSF,GTNAOSF,10)
static A68_290   JTNAOSF = {"RF"}; 
A_GISVEC(A68_VC ,KTNAOSF,JTNAOSF,2)
static A68_370   MTNAOSF = {"Closes and removes a file from the top of the input-file stack."}; 
A_GISVEC(A68_VC ,NTNAOSF,MTNAOSF,63)
static A68_316   ZTNAOSF = {"REPORT"}; 
A_GISVEC(A68_VC ,AUNAOSF,ZTNAOSF,6)
static A68_371   CUNAOSF = {"Passes the rest of the line as a message to a central log file.  This command is designed for reporting bugs, comments, suggestions and general insults."}; 
A_GISVEC(A68_VC ,DUNAOSF,CUNAOSF,152)
static A68_330   SUNAOSF = {"REPORT facility not available"}; 
A_GISVEC(A68_VC ,TUNAOSF,SUNAOSF,29)
static A68_306   VUNAOSF = {""}; 
A_GISVEC(A68_VC ,WUNAOSF,VUNAOSF,0)
static A68_347   BVNAOSF = {"report.log"}; 
A_GISVEC(A68_VC ,CVNAOSF,BVNAOSF,10)
static A68_290   QVNAOSF = {"  "}; 
A_GISVEC(A68_VC ,RVNAOSF,QVNAOSF,2)
static A68_290   YVNAOSF = {" ["}; 
A_GISVEC(A68_VC ,ZVNAOSF,YVNAOSF,2)
static A68_290   LWNAOSF = {"  "}; 
A_GISVEC(A68_VC ,MWNAOSF,LWNAOSF,2)
static A68_312   UWNAOSF = {"Message:  \""}; 
A_GISVEC(A68_VC ,VWNAOSF,UWNAOSF,11)
static A68_312   IXNAOSF = {"REPORT sent"}; 
A_GISVEC(A68_VC ,JXNAOSF,IXNAOSF,11)
static A68_316   VXNAOSF = {"RECORD"}; 
A_GISVEC(A68_VC ,WXNAOSF,VXNAOSF,6)
static A68_373   CYNAOSF = {"Records the current time and a message (<text>) in <filename>.  This command is designed to be called a number of times during a large run to allow the user to monitor progress by reading <filename> at intervals."}; 
A_GISVEC(A68_VC ,DYNAOSF,CYNAOSF,212)
static A68_120   JYNAOSF = {".log"}; 
A_GISVEC(A68_VC ,KYNAOSF,JYNAOSF,4)
static A68_120   RZNAOSF = {"TYPE"}; 
A_GISVEC(A68_VC ,SZNAOSF,RZNAOSF,4)
static A68_290   UZNAOSF = {"TY"}; 
A_GISVEC(A68_VC ,VZNAOSF,UZNAOSF,2)
static A68_285   YZNAOSF = {"Outputs "}; 
A_GISVEC(A68_VC ,ZZNAOSF,YZNAOSF,8)
static A68_374   DAOAOSF = {" to the screen and to log file if open.  Use \"more\" if output is required a page at a time."}; 
A_GISVEC(A68_VC ,EAOAOSF,DAOAOSF,91)
static A68_120   XAOAOSF = {"EXIT"}; 
A_GISVEC(A68_VC ,YAOAOSF,XAOAOSF,4)
static A68_375   EBOAOSF = {"Exits from the current "}; 
A_GISVEC(A68_VC ,FBOAOSF,EBOAOSF,23)
static A68_338   KBOAOSF = {" session and returns to the calling environment"}; 
A_GISVEC(A68_VC ,LBOAOSF,KBOAOSF,47)
static A68_316   ZBOAOSF = {"FINISH"}; 
A_GISVEC(A68_VC ,ACOAOSF,ZBOAOSF,6)
static A68_342   GCOAOSF = {"Finishes the current "}; 
A_GISVEC(A68_VC ,HCOAOSF,GCOAOSF,21)
static A68_338   MCOAOSF = {" session and returns to the calling environment"}; 
A_GISVEC(A68_VC ,NCOAOSF,MCOAOSF,47)
static A68_120   BDOAOSF = {"QUIT"}; 
A_GISVEC(A68_VC ,CDOAOSF,BDOAOSF,4)
static A68_367   IDOAOSF = {"Aborts the current "}; 
A_GISVEC(A68_VC ,JDOAOSF,IDOAOSF,19)
static A68_338   ODOAOSF = {" session and returns to the calling environment"}; 
A_GISVEC(A68_VC ,PDOAOSF,ODOAOSF,47)
static A68_316   DEOAOSF = {"RETURN"}; 
A_GISVEC(A68_VC ,EEOAOSF,DEOAOSF,6)
static A68_376   KEOAOSF = {"Returns from the current "}; 
A_GISVEC(A68_VC ,LEOAOSF,KEOAOSF,25)
static A68_320   QEOAOSF = {" session to the calling environment"}; 
A_GISVEC(A68_VC ,REOAOSF,QEOAOSF,35)
static A68_316   FFOAOSF = {"SECRET"}; 
A_GISVEC(A68_VC ,GFOAOSF,FFOAOSF,6)
static A68_331   IFOAOSF = {"Enables help of test and withdrawn facilities"}; 
A_GISVEC(A68_VC ,JFOAOSF,IFOAOSF,45)
static A68_316   QFOAOSF = {"Secret"}; 
A_GISVEC(A68_VC ,RFOAOSF,QFOAOSF,6)
static A68_326   DGOAOSF = {"SET"}; 
static A68_377   GGOAOSF = {"DIAGNOSTICLEVEL"}; 
A_GISVEC(A68_VC ,HGOAOSF,GGOAOSF,15)
static A68_290   JGOAOSF = {"DL"}; 
A_GISVEC(A68_VC ,KGOAOSF,JGOAOSF,2)
static A68_378   MGOAOSF = 
{  'S', 'e', 't', 's', ' ', 't', 'h', 'e',
   ' ', 'd', 'i', 'a', 'g', 'n', 'o', 's',
   't', 'i', 'c', ' ', 'l', 'e', 'v', 'e',
   'l', ' ', 't', 'o', ' ', '<', 'i', 'n',
   't', '>', '.', ' ', ' ', 'T', 'h', 'i',
   's', ' ', 'f', 'l', 'a', 'g', ' ', 'i',
   's', ' ', 'u', 's', 'e', 'd', ' ', 't',
   'o', ' ', 'c', 'o', 'n', 't', 'r', 'o',
   'l', ' ', 't', 'h', 'e', ' ', 'a', 'm',
   'o', 'u', 'n', 't', ' ', 'o', 'f', ' ',
   'd', 'i', 'a', 'g', 'n', 'o', 's', 't',
   'i', 'c', ' ', 'i', 'n', 'f', 'o', 'r',
   'm', 'a', 't', 'i', 'o', 'n', ' ', 's',
   'e', 'n', 't', ' ', 't', 'o', ' ', 't',
   'h', 'e', ' ', 's', 'c', 'r', 'e', 'e',
   'n', ' ', 'o', 'r', ' ', 'o', 'u', 't',
   'p', 'u', 't', ' ', 'f', 'i', 'l', 'e',
   '.', ' ', ' ', 'T', 'h', 'e', ' ', 'd',
   'e', 'f', 'a', 'u', 'l', 't', ' ', 'v',
   'a', 'l', 'u', 'e', ' ', 'i', 's', ' ',
   '\"', '0', '\"', ' ', '-', ' ', 'n', 'o',
   ' ', 'd', 'i', 'a', 'g', 'n', 'o', 's',
   't', 'i', 'c', ' ', 'i', 'n', 'f', 'o',
   'r', 'm', 'a', 't', 'i', 'o', 'n', '.',
   ' ', ' ', '\"', '1', '\"', ' ', 'w', 'i',
   'l', 'l', ' ', 'm', 'o', 'n', 'i', 't',
   'o', 'r', ' ', 'g', 'e', 'n', 'e', 'r',
   'a', 'l', ' ', 'o', 'p', 'e', 'r', 'a',
   't', 'i', 'o', 'n', 's', ' ', 'w', 'i',
   't', 'h', ' ', 'r', 'a', 't', 'h', 'e',
   'r', ' ', 'm', 'o', 'r', 'e', ' ', 'd',
   'e', 't', 'a', 'i', 'l', ' ', 'w', 'h',
   'e', 'r', 'e', ' ', 'a', 'v', 'a', 'i',
   'l', 'a', 'b', 'l', 'e', '.' 
} ; 
A_GISVEC(A68_VC ,NGOAOSF,MGOAOSF,270)
static A68_352   UGOAOSF = {"Diagnostic level now set to "}; 
A_GISVEC(A68_VC ,VGOAOSF,UGOAOSF,28)
static A68_295   KHOAOSF = {"WIDTH"}; 
A_GISVEC(A68_VC ,LHOAOSF,KHOAOSF,5)
static A68_379   UHOAOSF = {"Sets the maximum length of lines written to the screen or to the log or output files - with no parameter, the width is reset to its default "}; 
A_GISVEC(A68_VC ,VHOAOSF,UHOAOSF,140)
static A68_292   YHOAOSF = {"value.  (Current width is "}; 
A_GISVEC(A68_VC ,ZHOAOSF,YHOAOSF,26)
static A68_285   VIOAOSF = {"VARIABLE"}; 
A_GISVEC(A68_VC ,WIOAOSF,VIOAOSF,8)
static A68_285   GJOAOSF = {"Set the "}; 
A_GISVEC(A68_VC ,HJOAOSF,GJOAOSF,8)
static A68_366   JJOAOSF = {" variable to the new value specified.  "}; 
A_GISVEC(A68_VC ,KJOAOSF,JJOAOSF,39)
static A68_368   MJOAOSF = {" variables are used to define operating system commands and certain working environment parameters within "}; 
A_GISVEC(A68_VC ,NJOAOSF,MJOAOSF,106)
static A68_306   ZJOAOSF = {""}; 
A_GISVEC(A68_VC ,AKOAOSF,ZJOAOSF,0)
A_GISVEC(A68_VC ,KKOAOSF,DGOAOSF,3)
static A68_120   NKOAOSF = {"SHOW"}; 
static A68_369   QKOAOSF = {"COMMANDPARAMETERS"}; 
A_GISVEC(A68_VC ,RKOAOSF,QKOAOSF,17)
static A68_290   TKOAOSF = {"CP"}; 
A_GISVEC(A68_VC ,UKOAOSF,TKOAOSF,2)
static A68_381   WKOAOSF = {"As \"checksyntax\" but also displays a list of the parameters specified by the user.  Use \"dontchecksyntax\" (\"dcs\") to revert to normal interpretation."}; 
A_GISVEC(A68_VC ,XKOAOSF,WKOAOSF,149)
static A68_314   DLOAOSF = {"Command line syntax checking already active"}; 
A_GISVEC(A68_VC ,ELOAOSF,DLOAOSF,43)
static A68_382   HLOAOSF = {"Command line syntax checking started with display of input parameters - use \"dontchecksyntax\" (\"dcs\") to stop"}; 
A_GISVEC(A68_VC ,ILOAOSF,HLOAOSF,109)
static A68_295   ULOAOSF = {"INPUT"}; 
A_GISVEC(A68_VC ,VLOAOSF,ULOAOSF,5)
static A68_290   XLOAOSF = {"IN"}; 
A_GISVEC(A68_VC ,YLOAOSF,XLOAOSF,2)
static A68_383   AMOAOSF = {"Switches on screen-echoing of offline input."}; 
A_GISVEC(A68_VC ,BMOAOSF,AMOAOSF,44)
static A68_316   NMOAOSF = {"OUTPUT"}; 
A_GISVEC(A68_VC ,OMOAOSF,NMOAOSF,6)
static A68_326   QMOAOSF = {"OUT"}; 
A_GISVEC(A68_VC ,RMOAOSF,QMOAOSF,3)
static A68_317   TMOAOSF = {"Switches on the screen-echoing of file-directed output."}; 
A_GISVEC(A68_VC ,UMOAOSF,TMOAOSF,55)
static A68_289   GNOAOSF = {"READERS"}; 
A_GISVEC(A68_VC ,HNOAOSF,GNOAOSF,7)
static A68_384   KNOAOSF = {"Displays a list of the different sorts of basic command parameters used"}; 
A_GISVEC(A68_VC ,LNOAOSF,KNOAOSF,71)
static A68_120   XNOAOSF = {"TIME"}; 
A_GISVEC(A68_VC ,YNOAOSF,XNOAOSF,4)
static A68_338   COOAOSF = {"Displays the time-of-day and CPU-time with the "}; 
A_GISVEC(A68_VC ,DOOAOSF,COOAOSF,47)
static A68_285   FOOAOSF = {" prompt."}; 
A_GISVEC(A68_VC ,GOOAOSF,FOOAOSF,8)
A_GISVEC(A68_VC ,UOOAOSF,NKOAOSF,4)
typedef struct   /* env of non-global proc */
{
A68_BOOL  Reset_paging;
A_PAD_BOOL(PAD_67)
A68_97  Msg;
A68_117 * F;
} FPLAOSF_flt;
typedef struct   /* env of non-global proc */
{
int dummy;
} XPLAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} VSLAOSF_new_msg;
typedef struct   /* env of non-global proc */
{
A68_299 ** KTLAOSF_list;
} OTLAOSF_new;
typedef struct   /* env of non-global proc */
{
A68_301  WTLAOSF_add;
A68_300  MTLAOSF_new;
A68_211  Globals;
} YTLAOSF_add;
typedef struct   /* env of non-global proc */
{
A68_BOOL * PWLAOSF_not_failed;
} UWLAOSF_new_msg;
typedef struct   /* env of non-global proc */
{
int dummy;
} GZLAOSF_rr;
typedef struct   /* env of non-global proc */
{
A68_310  EZLAOSF_rr;
} VZLAOSF_pchars;
typedef struct   /* env of non-global proc */
{
int dummy;
} ZZLAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  DINAOSF_n;
A_PAD_INT(PAD_68)
} HINAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Flt;
} QUNAOSF_fault;
typedef struct   /* env of non-global proc */
{
A68_117 * GVNAOSF_lf;
A68_97  OUNAOSF_fault;
A68_97  Flt;
} LVNAOSF_new_fault;
typedef struct   /* env of non-global proc */
{
A68_117 * XYNAOSF_record_file;
A68_97  Flt;
} CZNAOSF_new_flt;

A_STATIC A68_VOID  LOLAOSF_anonymous(void);

A_STATIC A68_INT  SOLAOSF_opt_int(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  ZOLAOSF_type_more(A68_BOOL  Reset_paging, A68_117 * F, A68_97  Msg);

A_STATIC A68_VOID  EPLAOSF_flt(A68_92  Msgno, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  WPLAOSF_generator(A68_BOOL  UPLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PQLAOSF_set_showtime(A68_190  Var, A68_BOOL  Changed, A68_97  Msg);

A_STATIC A68_VOID  QQLAOSF_when(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VQLAOSF_print_configuration(void);

A_STATIC A68_VOID  GRLAOSF_printer(A68_VC  S);

A_STATIC A68_VOID  LSLAOSF_current_context(A68_VC  *ReturnedValue);

A_STATIC A68_INT  PSLAOSF_obey_command(A68_VC  Command, A68_97  Msg);

A_STATIC A68_VOID  USLAOSF_new_msg(A68_92  No, A68_46  Params, void *NonLocals);

A68_VOID  ITLAOSF_add_globals_to_compounds(A68_211  Globals, A68_211  Vec_with_commands);

A_STATIC A68_BOOL  NTLAOSF_new(A68_210 * Next, void *NonLocals);

A_STATIC A68_VOID  XTLAOSF_add(A68_211  Vec, void *NonLocals);

A68_INT  IULAOSF_find_command(A68_VC  Name, A68_VC  Abreviation, A68_211  Vec);

A_STATIC A68_VOID  XULAOSF_withdrawn_proc(A68_VC  Str, A68_199  Param, A68_97  Msg);

A68_208 * CVLAOSF_withdrawn(A68_VC  Old, A68_VC  Old_abr, A68_VC  New);

A68_VOID  HWLAOSF_make_globalcommands(A68_VC  Sysdir_varname, A68_VC  Default_edit_type, A68_148  Printissue, A68_286  Commandenv_proc, A68_211  *ReturnedValue);

A_STATIC A68_VOID  TWLAOSF_new_msg(A68_92  No, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  TYLAOSF_specialrvc(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_CHAR  FZLAOSF_rr(A68_BITS * S, void *NonLocals);

A_STATIC A68_BITS  RZLAOSF_tt(void);

A_STATIC A68_VOID  UZLAOSF_pchars(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YZLAOSF_generator(A68_BOOL  WZLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XAMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  ZBMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  ZCMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  UDMAOSF_anonymous(A68_206  Params, A68_97  Flt);

A_STATIC A68_VOID  PEMAOSF_anonymous(A68_206  Params, A68_97  Msg);

A_STATIC A68_VOID  CGMAOSF_anonymous(A68_206  Params, A68_97  Msg);

A_STATIC A68_VOID  MHMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  WIMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  PJMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  IKMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  LLMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  EMMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  ANMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  YNMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  BPMAOSF_anonymous(A68_206  Params, A68_97  Msg);

A_STATIC A68_VOID  FQMAOSF_anonymous(A68_208 * C, A68_34 * Ch);

A_STATIC A68_VOID  NRMAOSF_anonymous(A68_206  Names, A68_97  Msg);

A_STATIC A68_VOID  QSMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  MTMAOSF_anonymous(A68_VC  S);

A_STATIC A68_VOID  JUMAOSF_anonymous(A68_208 * S, A68_34 * Ch);

A_STATIC A68_VOID  HVMAOSF_anonymous(A68_206  Names, A68_97  Msg);

A_STATIC A68_VOID  NWMAOSF_anonymous(A68_206  Names, A68_97  Msg);

A_STATIC A68_VOID  OXMAOSF_anonymous(A68_206  Params, A68_97  Msg);

A_STATIC A68_VOID  QYMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  IZMAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  FANAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  BBNAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  TCNAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  GENAOSF_anonymous(A68_206  Params, A68_97  Msg);

A_STATIC A68_VOID  AFNAOSF_anonymous(A68_206  Params, A68_97  Msg);

A_STATIC A68_VOID  UFNAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  NGNAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  GHNAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  BINAOSF_anonymous(A68_206  Names, A68_97  Msg);

A_STATIC A68_VOID  GINAOSF_generator(A68_BOOL  EINAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EJNAOSF_anonymous(A68_206  Names, A68_97  Msg);

A_STATIC A68_VOID  HKNAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  FLNAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  BMNAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  RMNAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  TMNAOSF_anonymous(A68_VC  S);

A_STATIC A68_VOID  SNNAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  UNNAOSF_anonymous(A68_VC  S);

A_STATIC A68_VOID  TONAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  BQNAOSF_anonymous(A68_206  Params, A68_97  Msg);

A_STATIC A68_VOID  BRNAOSF_anonymous(A68_206  Names, A68_97  Msg);

A_STATIC A68_VOID  XRNAOSF_anonymous(A68_206  Names, A68_97  Msg);

A_STATIC A68_VOID  OSNAOSF_anonymous(A68_206  Names, A68_97  Msg);

A_STATIC A68_VOID  STNAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  IUNAOSF_anonymous(A68_206  Names, A68_97  Flt);

A_STATIC A68_VOID  PUNAOSF_fault(A68_92  No, A68_46  Vs, void *NonLocals);

A_STATIC A68_VOID  KVNAOSF_new_fault(A68_92  No, A68_46  Msg, void *NonLocals);

A_STATIC A68_VOID  IYNAOSF_anonymous(A68_206  Names, A68_97  Flt);

A_STATIC A68_VOID  BZNAOSF_new_flt(A68_92  No, A68_46  Msg, void *NonLocals);

A_STATIC A68_VOID  MAOAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  CBOAOSF_anonymous(A68_208 * S, A68_34 * Ch);

A_STATIC A68_VOID  ECOAOSF_anonymous(A68_208 * S, A68_34 * Ch);

A_STATIC A68_VOID  GDOAOSF_anonymous(A68_208 * S, A68_34 * Ch);

A_STATIC A68_VOID  IEOAOSF_anonymous(A68_208 * S, A68_34 * Ch);

A_STATIC A68_VOID  OFOAOSF_anonymous(A68_206  Params, A68_97  Msg);

A_STATIC A68_VOID  SGOAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  SHOAOSF_anonymous(A68_208 * S, A68_34 * Ch);

A_STATIC A68_VOID  OIOAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  VJOAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  CLOAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  GMOAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  ZMOAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  QNOAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  MOOAOSF_anonymous(A68_206  V, A68_97  Msg);

A_STATIC A68_VOID  YZLAOSF_generator(A68_BOOL  WZLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZZLAOSF_generator *)NonLocals)->x)
{ 
A68_VC  AAMAOSF;  /* clause result */
A68_VC  BAMAOSF;  /* OPERATORS - dynamic generator */
{ 
BAMAOSF.upb = 8 ;
( WZLAOSF_anonymous? A_VLOC(A68_CHAR ,BAMAOSF): A_VHEAP(A68_CHAR ,BAMAOSF) );
AAMAOSF = BAMAOSF;
} 
*ReturnedValue = (AAMAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  MTMAOSF_anonymous(A68_VC  S)
{ 
A68_294  NTMAOSF;  /* collateral clause result */
A68_52  OTMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  PTMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  QTMAOSF;  /* procedure value */
A68_85  RTMAOSF;  /* OPERATORS - istruct -> vector */
NTMAOSF.data[0] = A_UNITE(OTMAOSF,mode7,7,S);
QTMAOSF.fn.fn_global = PKDAOSF_newline;
QTMAOSF.nonlocals = A68_NIL;
NTMAOSF.data[1] = A_UNITE(PTMAOSF,mode12,12,QTMAOSF);
KYDAOSF_put(DREAOSF_screen, A_HISVEC(RTMAOSF,NTMAOSF,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  GINAOSF_generator(A68_BOOL  EINAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HINAOSF_generator *)NonLocals)->x)
{ 
A68_VC  IINAOSF;  /* clause result */
A68_VC  JINAOSF;  /* OPERATORS - dynamic generator */
{ 
JINAOSF.upb = (NL(DINAOSF_n)*10240) ;
( EINAOSF_anonymous? A_VLOC(A68_CHAR ,JINAOSF): A_VHEAP(A68_CHAR ,JINAOSF) );
IINAOSF = JINAOSF;
} 
*ReturnedValue = (IINAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  TMNAOSF_anonymous(A68_VC  S)
{ 
A68_294  UMNAOSF;  /* collateral clause result */
A68_52  VMNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  WMNAOSF;  /* OPERATORS - mode -> union mode */
A68_56  XMNAOSF;  /* procedure value */
A68_85  YMNAOSF;  /* OPERATORS - istruct -> vector */
UMNAOSF.data[0] = A_UNITE(VMNAOSF,mode7,7,S);
XMNAOSF.fn.fn_global = PKDAOSF_newline;
XMNAOSF.nonlocals = A68_NIL;
UMNAOSF.data[1] = A_UNITE(WMNAOSF,mode12,12,XMNAOSF);
KYDAOSF_put(DREAOSF_screen, A_HISVEC(YMNAOSF,UMNAOSF,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  UNNAOSF_anonymous(A68_VC  S)
{ 
A68_294  VNNAOSF;  /* collateral clause result */
A68_52  WNNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  XNNAOSF;  /* OPERATORS - mode -> union mode */
A68_56  YNNAOSF;  /* procedure value */
A68_85  ZNNAOSF;  /* OPERATORS - istruct -> vector */
VNNAOSF.data[0] = A_UNITE(WNNAOSF,mode7,7,S);
YNNAOSF.fn.fn_global = PKDAOSF_newline;
YNNAOSF.nonlocals = A68_NIL;
VNNAOSF.data[1] = A_UNITE(XNNAOSF,mode12,12,YNNAOSF);
KYDAOSF_put(DREAOSF_screen, A_HISVEC(ZNNAOSF,VNNAOSF,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  PUNAOSF_fault(A68_92  No, A68_46  Vs, void *NonLocals)
#define NL(x) (((QUNAOSF_fault *)NonLocals)->x)
{ 
A68_106  RUNAOSF;  /* OPERATORS - mode -> union mode */
A68_46  UUNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(fault);
 /* line 851: */
 /* line 852: */
if ( JXAAOSF_error_msg(A_UNITE(RUNAOSF,mode1,1,No)) )
{ 
 /* line 853: */
A_CALLPROC(NL(Flt),(MUAAOSF_user, A_HVEC(UUNAOSF,TUNAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(UUNAOSF,TUNAOSF,A68_VC ),(NL(Flt)).nonlocals));
} 
else
{ 
 /* line 854: */
A_CALLPROC(NL(Flt),(No, Vs),(No, Vs,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(fault);
return;
} 
#undef NL

A_STATIC A68_VOID  KVNAOSF_new_fault(A68_92  No, A68_46  Msg, void *NonLocals)
#define NL(x) (((LVNAOSF_new_fault *)NonLocals)->x)
{ 
A_PROC_ENTRY(new_fault);
 /* line 863: */
{ 
IWBAOSF_close_file(NL(GVNAOSF_lf), NL(OUNAOSF_fault));
A_CALLPROC(NL(Flt),(No, Msg),(No, Msg,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(new_fault);
return;
} 
#undef NL

A_STATIC A68_VOID  BZNAOSF_new_flt(A68_92  No, A68_46  Msg, void *NonLocals)
#define NL(x) (((CZNAOSF_new_flt *)NonLocals)->x)
{ 
A_PROC_ENTRY(new_flt);
 /* line 892: */
{ 
IWBAOSF_close_file(NL(XYNAOSF_record_file), NL(Flt));
A_CALLPROC(NL(Flt),(No, Msg),(No, Msg,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(new_flt);
return;
} 
#undef NL

A_STATIC A68_VOID  EPLAOSF_flt(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((FPLAOSF_flt *)NonLocals)->x)
{ 
A_PROC_ENTRY(flt);
 /* line 86: */
{ 
if ( NL(Reset_paging) )
{ 
YHLAOSF_io_dontpage(NL(Msg));
} 
 /* line 87: */
IWBAOSF_close_file(NL(F), NL(Msg));
 /* line 88: */
 /* line 89: */
A_CALLPROC(NL(Msg),(Msgno, Params),(Msgno, Params,(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  WPLAOSF_generator(A68_BOOL  UPLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XPLAOSF_generator *)NonLocals)->x)
{ 
A68_VC  YPLAOSF;  /* clause result */
A68_VC  ZPLAOSF;  /* OPERATORS - dynamic generator */
{ 
ZPLAOSF.upb = 4096 ;
( UPLAOSF_anonymous? A_VLOC(A68_CHAR ,ZPLAOSF): A_VHEAP(A68_CHAR ,ZPLAOSF) );
YPLAOSF = ZPLAOSF;
} 
*ReturnedValue = (YPLAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  GRLAOSF_printer(A68_VC  S)
{ 
A68_BOOL  HRLAOSF;  /* optbool result */
A68_VC  JRLAOSF;  /* OPERATORS - trim index */
A68_INT  LRLAOSF_index;
A68_BOOL  MRLAOSF;  /* optbool result */
A68_VC  NRLAOSF;  /* OPERATORS - trim index */
A68_52  ORLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  PRLAOSF;  /* YIELD */
A68_85  QRLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  RRLAOSF_ver;
A68_BOOL  SRLAOSF;  /* optbool result */
A68_291  TRLAOSF;  /* collateral clause result */
A68_62  URLAOSF;  /* avoid structure result */
A68_52  VRLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  WRLAOSF;  /* OPERATORS - trim index */
A68_58  XRLAOSF;  /* avoid structure result */
A68_52  YRLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ZRLAOSF;  /* OPERATORS - trim index */
A68_52  ASLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BSLAOSF;  /* YIELD */
A68_52  CSLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  DSLAOSF;  /* procedure value */
A68_85  ESLAOSF;  /* OPERATORS - istruct -> vector */
A68_294  FSLAOSF;  /* collateral clause result */
A68_52  GSLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  HSLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  ISLAOSF;  /* procedure value */
A68_85  JSLAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(printer);
 /* line 134: */
HRLAOSF = (S.upb>5);
if ( HRLAOSF )
{ /* line 135: */
HRLAOSF = A_VC_EQ(A_VTRIM(JRLAOSF,(S),A_VTSCRIPT(&(JRLAOSF.upb),(S).upb,1,5)),KRLAOSF);
}
if ( HRLAOSF )
{ 
LRLAOSF_index = 5;
 /* line 137: */
for ( ;; )
{ 
MRLAOSF = ((LRLAOSF_index+=1)<=S.upb);
if ( MRLAOSF )
{ /* line 138: */
MRLAOSF = (A_VINDEX(S,LRLAOSF_index)!=' ');
}
if ( !(MRLAOSF) ) break;
/*SKIP*/;
}
 /* line 139: */
PRLAOSF = A_VTRIM(NRLAOSF,(S),A_VTSCRIPT(&(NRLAOSF.upb),(S).upb,6,(LRLAOSF_index-1))) ;
KYDAOSF_put(EREAOSF_out, A_HVEC(QRLAOSF,A_UNITE(ORLAOSF,mode7,7,PRLAOSF),A68_52 ));
 /* line 140: */
RRLAOSF_ver = LRLAOSF_index;
 /* line 141: */
for ( ;; )
{ 
SRLAOSF = ((LRLAOSF_index+=1)<=S.upb);
if ( SRLAOSF )
{ /* line 142: */
SRLAOSF = (A_VINDEX(S,LRLAOSF_index)!=' ');
}
if ( !(SRLAOSF) ) break;
/*SKIP*/;
}
 /* line 143: */
 /* line 144: */
if ( (LRLAOSF_index<S.upb) )
{ 
BSDAOSF_after( 20, &URLAOSF );
TRLAOSF.data[0] = A_UNITE(VRLAOSF,mode18,18,URLAOSF);
 /* line 145: */
IRDAOSF_width( A_VTRIM(WRLAOSF,(S),A_VTSCRIPT(&(WRLAOSF.upb),(S).upb,RRLAOSF_ver,(LRLAOSF_index-1))), 8, &XRLAOSF );
TRLAOSF.data[1] = A_UNITE(YRLAOSF,mode14,14,XRLAOSF);
BSLAOSF = A_VTRIM(ZRLAOSF,(S),A_VTSCRIPT(&(ZRLAOSF.upb),(S).upb,LRLAOSF_index,(S).upb)) ;
TRLAOSF.data[2] = A_UNITE(ASLAOSF,mode7,7,BSLAOSF);
DSLAOSF.fn.fn_global = PKDAOSF_newline;
DSLAOSF.nonlocals = A68_NIL;
TRLAOSF.data[3] = A_UNITE(CSLAOSF,mode12,12,DSLAOSF);
 /* line 146: */
 /* line 147: */
KYDAOSF_put(EREAOSF_out, A_HISVEC(ESLAOSF,TRLAOSF,4,A68_52 ));
} 
} 
else
{ 
FSLAOSF.data[0] = A_UNITE(GSLAOSF,mode7,7,S);
ISLAOSF.fn.fn_global = PKDAOSF_newline;
ISLAOSF.nonlocals = A68_NIL;
FSLAOSF.data[1] = A_UNITE(HSLAOSF,mode12,12,ISLAOSF);
 /* line 148: */
KYDAOSF_put(EREAOSF_out, A_HISVEC(JSLAOSF,FSLAOSF,2,A68_52 ));
} 
A_PROC_EXIT(printer);
return;
} 
#undef NL

A_STATIC A68_VOID  USLAOSF_new_msg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((VSLAOSF_new_msg *)NonLocals)->x)
{ 
A68_106  WSLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XSLAOSF;  /* avoid structure result */
A_PROC_ENTRY(new_msg);
 /* line 159: */
{ 
if ( JXAAOSF_error_msg(A_UNITE(WSLAOSF,mode1,1,No)) )
{ 
LSLAOSF_current_context(  &XSLAOSF );
LALAOSF_banner(XSLAOSF);
} 
 /* line 160: */
 /* line 161: */
A_CALLPROC(NL(Msg),(No, Params),(No, Params,(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(new_msg);
return;
} 
#undef NL

A_STATIC A68_BOOL  NTLAOSF_new(A68_210 * Next, void *NonLocals)
#define NL(x) (((OTLAOSF_new *)NonLocals)->x)
{ 
A68_BOOL  PTLAOSF_not_found;
A68_299 * QTLAOSF_ptr;
A68_BOOL  RTLAOSF;  /* optbool result */
A68_299  STLAOSF;  /* collateral clause result */
A68_299 * TTLAOSF;  /* YIELD */
A68_BOOL  UTLAOSF;  /* clause result */
A_PROC_ENTRY(new);
 /* line 188: */
 /* line 189: */
{ 
PTLAOSF_not_found = A68_TRUE;
 /* line 190: */
QTLAOSF_ptr = (*NL(KTLAOSF_list));
 /* line 191: */
for ( ;; )
{ 
 /* line 192: */
RTLAOSF = (QTLAOSF_ptr!=(A68_299 *)A68_NIL);
if ( RTLAOSF )
{RTLAOSF = PTLAOSF_not_found;
}
if ( !(RTLAOSF) ) break;
PTLAOSF_not_found = ((*(&(QTLAOSF_ptr->Env)))!=Next);
QTLAOSF_ptr = (*(&(QTLAOSF_ptr->Rest)));
}
 /* line 193: */
if ( PTLAOSF_not_found )
{ 
STLAOSF.Env = Next;
STLAOSF.Rest = (*NL(KTLAOSF_list));
TTLAOSF = A_HEAP(A68_299 ) ;
(*TTLAOSF) = STLAOSF ;
(*NL(KTLAOSF_list)) = TTLAOSF;
} 
 /* line 194: */
 /* line 195: */
UTLAOSF = PTLAOSF_not_found;
} 
A_PROC_EXIT(new);
return( UTLAOSF );
} 
#undef NL

A_STATIC A68_VOID  XTLAOSF_add(A68_211  Vec, void *NonLocals)
#define NL(x) (((YTLAOSF_add *)NonLocals)->x)
{ 
A68_207 * ZTLAOSF_command;
A68_INT  AULAOSF;  /* forall loop counter */
A68_207  BULAOSF;  /* united object - for case conformity */
A68_209 * CULAOSF_group;
A68_210 * DULAOSF_compound;
A68_211  EULAOSF;  /* avoid structure result */
A_PROC_ENTRY(add);
 /* line 198: */
 /* line 199: */
AULAOSF = Vec.upb -1;
ZTLAOSF_command = Vec.data;
for (;AULAOSF-- >= 0;
(ZTLAOSF_command++
) )
{
 /* line 200: */
BULAOSF = (*ZTLAOSF_command) ;
switch ( BULAOSF.mode )
{ 
case 2: /* REF STRUCT(REF MODE208,REF MODE211)  */
CULAOSF_group = (BULAOSF.data.mode2);
 /* line 201: */
 /* line 202: */
A_CALLPROC(NL(WTLAOSF_add),((*(&(CULAOSF_group->Commands)))),((*(&(CULAOSF_group->Commands))),(NL(WTLAOSF_add)).nonlocals));
break;
case 3: /* REF STRUCT(REF MODE208,REF MODE26,REF REF MODE26,REF MODE211,REF MODE211,REF MODE208)  */
DULAOSF_compound = (BULAOSF.data.mode3);
 /* line 203: */
 /* line 204: */
if ( A_CALLPROC(NL(MTLAOSF_new),(DULAOSF_compound),(DULAOSF_compound,(NL(MTLAOSF_new)).nonlocals)) )
{ 
A_CALLPROC(NL(WTLAOSF_add),((*(&(DULAOSF_compound->Globals)))),((*(&(DULAOSF_compound->Globals))),(NL(WTLAOSF_add)).nonlocals));
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 208: */
JDIAOSF_addab( (&(DULAOSF_compound->Globals)), NL(Globals), &EULAOSF );
EULAOSF;
} 
break;
default: 
 /* line 209: */
/*SKIP*/;
break;
} 
}
A_PROC_EXIT(add);
return;
} 
#undef NL

A_STATIC A68_VOID  TWLAOSF_new_msg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((UWLAOSF_new_msg *)NonLocals)->x)
{ 
A68_106  VWLAOSF;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(new_msg);
 /* line 278: */
if ( JXAAOSF_error_msg(A_UNITE(VWLAOSF,mode1,1,No)) )
{ 
(*NL(PWLAOSF_not_failed)) = A68_FALSE;
} 
A_PROC_EXIT(new_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  TYLAOSF_specialrvc(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_VC  VYLAOSF;  /* avoid structure result */
A68_VC  UYLAOSF_ans;
A68_CHAR * WYLAOSF_s;
A68_INT  XYLAOSF;  /* forall loop counter */
A68_INT  YYLAOSF;  /* ADICOPS - MOD */
A68_INT  ZYLAOSF;  /* ADICOPS - MOD */
A68_INT  AZLAOSF;  /* ADICOPS - MOD */
A68_VC  BZLAOSF;  /* clause result */
A_PROC_ENTRY(specialrvc);
 /* line 296: */
 /* line 297: */
{ 
ZCAAOSF_makervc( Str, &VYLAOSF );
UYLAOSF_ans = VYLAOSF;
 /* line 298: */
XYLAOSF = UYLAOSF_ans.upb -1;
WYLAOSF_s = UYLAOSF_ans.data;
for (;XYLAOSF-- >= 0;
(WYLAOSF_s++
) )
{
ZYLAOSF = (32-(A68_INT)(unsigned char)(*WYLAOSF_s)) ;
AZLAOSF = 26 ;
(*WYLAOSF_s) = (A68_SSBITS)(A_MOD(ZYLAOSF,AZLAOSF,YYLAOSF)+65);
}
 /* line 299: */
 /* line 300: */
BZLAOSF = UYLAOSF_ans;
} 
A_PROC_EXIT(specialrvc);
*ReturnedValue = (BZLAOSF);
return;
} 
#undef NL

A_STATIC A68_CHAR  FZLAOSF_rr(A68_BITS * S, void *NonLocals)
#define NL(x) (((GZLAOSF_rr *)NonLocals)->x)
{ 
A68_BITS  HZLAOSF_t;
A68_INT  IZLAOSF;  /* loop control */
A68_INT  JZLAOSF;  /* SHL */
A68_INT  KZLAOSF;  /* SHL */
A68_INT  LZLAOSF;  /* SHL */
A68_INT  MZLAOSF;  /* SHL */
A68_CHAR  NZLAOSF;  /* clause result */
A68_INT  OZLAOSF;  /* ADICOPS - MOD */
A68_INT  PZLAOSF;  /* ADICOPS - MOD */
A68_INT  QZLAOSF;  /* ADICOPS - MOD */
A_PROC_ENTRY(rr);
 /* line 305: */
 /* line 306: */
{ 
HZLAOSF_t = 0X0U;
 /* line 307: */
 /* line 308: */
for ( IZLAOSF = 1;
IZLAOSF <= 23;
IZLAOSF += 1 )
{ 
 /* line 309: */
JZLAOSF = 1 ;
if ( ((A68_INT )A_SHL((*S),JZLAOSF)<0) )
{ 
 /* line 310: */
(*S) = (A68_BITS )((A68_BITS )((*S)&~CZLAOSF_cc)|(A68_BITS )(~(*S)&CZLAOSF_cc));
} 
 /* line 311: */
KZLAOSF = 1 ;
(*S) = A_SHL((*S),KZLAOSF);
 /* line 312: */
LZLAOSF = 1 ;
HZLAOSF_t = A_SHL(HZLAOSF_t,LZLAOSF);
 /* line 313: */
MZLAOSF = 1 ;
if ( ((A68_INT )A_SHL((*S),MZLAOSF)<0) )
{ 
 /* line 314: */
HZLAOSF_t = (A68_BITS )(HZLAOSF_t|0X1U);
} 
}
 /* line 315: */
 /* line 316: */
PZLAOSF = (A68_INT )HZLAOSF_t ;
QZLAOSF = 26 ;
NZLAOSF = (A68_SSBITS)(65+A_MOD(PZLAOSF,QZLAOSF,OZLAOSF));
} 
A_PROC_EXIT(rr);
return( NZLAOSF );
} 
#undef NL

A_STATIC A68_BITS  RZLAOSF_tt(void)
{ 
A68_BITS  SZLAOSF;  /* clause result */
A_PROC_ENTRY(tt);
SZLAOSF = (A68_BITS )((WLHAOSF_seconds()/10800)+362680);
A_PROC_EXIT(tt);
return( SZLAOSF );
} 
#undef NL

A_STATIC A68_VOID  UZLAOSF_pchars(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VZLAOSF_pchars *)NonLocals)->x)
{ 
A68_31  XZLAOSF_generator;   /* proc value of non-global proc */
A68_VC  CAMAOSF;  /* avoid structure result */
A68_VC  DAMAOSF_ans;
A68_INT  EAMAOSF_t;
A68_BITS  FAMAOSF_s;
A68_CHAR * GAMAOSF_c;
A68_INT  HAMAOSF;  /* forall loop counter */
A68_VC  IAMAOSF;  /* clause result */
A_PROC_ENTRY(pchars);
{ 
A_CLOSURE( XZLAOSF_generator, YZLAOSF_generator, ZZLAOSF_generator );
A_CALLPROC(XZLAOSF_generator,(A68_FALSE, &CAMAOSF),(A68_FALSE, &CAMAOSF,(XZLAOSF_generator).nonlocals));
DAMAOSF_ans = CAMAOSF;
 /* line 323: */
EAMAOSF_t = (A68_INT )(A68_BITS )(RZLAOSF_tt()&077777U);
 /* line 324: */
FAMAOSF_s = (A68_BITS )(EAMAOSF_t*EAMAOSF_t);
 /* line 325: */
HAMAOSF = DAMAOSF_ans.upb -1;
GAMAOSF_c = DAMAOSF_ans.data;
for (;HAMAOSF-- >= 0;
(GAMAOSF_c++
) )
{
(*GAMAOSF_c) = A_CALLPROC(NL(EZLAOSF_rr),((&FAMAOSF_s)),((&FAMAOSF_s),(NL(EZLAOSF_rr)).nonlocals));
}
 /* line 326: */
 /* line 327: */
IAMAOSF = DAMAOSF_ans;
} 
A_PROC_EXIT(pchars);
*ReturnedValue = (IAMAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  XAMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_46  ABMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_294  BBMAOSF;  /* collateral clause result */
A68_52  EBMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FBMAOSF;  /* YIELD */
A68_52  GBMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  HBMAOSF;  /* procedure value */
A68_85  IBMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 341: */
 /* line 342: */
if ( YKLAOSF_check_syntax )
{ 
 /* line 343: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(ABMAOSF,ZAMAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(ABMAOSF,ZAMAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
YKLAOSF_check_syntax = A68_TRUE;
 /* line 345: */
POLAOSF_syntaxcheck_context = (*(&((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals)))->Stack)));
 /* line 346: */
 /* line 347: */
 /* line 348: */
FBMAOSF = DBMAOSF ;
BBMAOSF.data[0] = A_UNITE(EBMAOSF,mode7,7,FBMAOSF);
HBMAOSF.fn.fn_global = PKDAOSF_newline;
HBMAOSF.nonlocals = A68_NIL;
BBMAOSF.data[1] = A_UNITE(GBMAOSF,mode12,12,HBMAOSF);
 /* line 349: */
 /* line 350: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(IBMAOSF,BBMAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  ZBMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 360: */
MCLAOSF_io_clearinputs(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  ZCMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_INT  ADMAOSF;  /* YIELD */
A68_INT  BDMAOSF;  /* YIELD */
A68_VC  CDMAOSF;  /* avoid structure result */
 /* line 369: */
ADMAOSF = 1 ;
if ( UBKAOSF_is_text((*(&A_VINDEX(V,ADMAOSF)))) )
{ 
 /* line 370: */
BDMAOSF = 1 ;
YBKAOSF_get_text( (*(&A_VINDEX(V,BDMAOSF))), Msg, &CDMAOSF );
LFLAOSF_io_comment(CDMAOSF, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  UDMAOSF_anonymous(A68_206  Params, A68_97  Flt)
{ 
A68_INT  XDMAOSF;  /* YIELD */
A68_VC  YDMAOSF;  /* avoid structure result */
 /* line 380: */
 /* line 381: */
XDMAOSF = 1 ;
PGKAOSF_set_switch( (*(&A_VINDEX(Params,XDMAOSF))), (&YCFAOSF_os_debug), WDMAOSF, Flt, &YDMAOSF );
YDMAOSF;
return;
} 
#undef NL

A_STATIC A68_VOID  PEMAOSF_anonymous(A68_206  Params, A68_97  Msg)
{ 
A68_INT  QEMAOSF;  /* YIELD */
A68_BITS  REMAOSF_heapdebug;
A68_321  SEMAOSF;  /* collateral clause result */
A68_52  VEMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  WEMAOSF;  /* YIELD */
A68_52  XEMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  YEMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  ZEMAOSF;  /* procedure value */
A68_85  AFMAOSF;  /* OPERATORS - istruct -> vector */
A68_BITS  BFMAOSF_mask;
A68_VC  CFMAOSF_opt;
A68_VC * DFMAOSF;  /* forall control - []x */
A68_INT  EFMAOSF;  /* forall loop counter */
A68_BOOL  FFMAOSF;  /* optbool result */
A68_294  GFMAOSF;  /* collateral clause result */
A68_52  HFMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  IFMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  JFMAOSF;  /* procedure value */
A68_85  KFMAOSF;  /* OPERATORS - istruct -> vector */
A68_INT  LFMAOSF;  /* SHL */
 /* line 389: */
{ 
QEMAOSF = 1 ;
REMAOSF_heapdebug = (A68_BITS )DUJAOSF_get_int((*(&A_VINDEX(Params,QEMAOSF))), Msg);
 /* line 390: */
WEMAOSF = UEMAOSF ;
SEMAOSF.data[0] = A_UNITE(VEMAOSF,mode7,7,WEMAOSF);
 /* line 391: */
SEMAOSF.data[1] = A_UNITE(XEMAOSF,mode3,3,REMAOSF_heapdebug);
ZEMAOSF.fn.fn_global = PKDAOSF_newline;
ZEMAOSF.nonlocals = A68_NIL;
SEMAOSF.data[2] = A_UNITE(YEMAOSF,mode12,12,ZEMAOSF);
KYDAOSF_put(DREAOSF_screen, A_HISVEC(AFMAOSF,SEMAOSF,3,A68_52 ));
 /* line 392: */
KMBAOSF_set_gc_diagnostics(REMAOSF_heapdebug);
 /* line 393: */
BFMAOSF_mask = 0X1U;
 /* line 394: */
 /* line 395: */
EFMAOSF = IMBAOSF_gc_diag_options.upb -1;
DFMAOSF = IMBAOSF_gc_diag_options.data;
for (;EFMAOSF-- >= 0;
(DFMAOSF++
) )
{
CFMAOSF_opt = *DFMAOSF;
FFMAOSF = ((A68_BITS )(REMAOSF_heapdebug&BFMAOSF_mask)==BFMAOSF_mask);
if ( FFMAOSF )
{ /* line 396: */
FFMAOSF = (CFMAOSF_opt.upb>0);
}
if ( FFMAOSF )
{ 
GFMAOSF.data[0] = A_UNITE(HFMAOSF,mode7,7,CFMAOSF_opt);
JFMAOSF.fn.fn_global = PKDAOSF_newline;
JFMAOSF.nonlocals = A68_NIL;
GFMAOSF.data[1] = A_UNITE(IFMAOSF,mode12,12,JFMAOSF);
 /* line 397: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(KFMAOSF,GFMAOSF,2,A68_52 ));
} 
 /* line 398: */
 /* line 399: */
LFMAOSF = 1 ;
BFMAOSF_mask = A_SHL(BFMAOSF_mask,LFMAOSF);
}
 /* line 400: */
 /* line 401: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  CGMAOSF_anonymous(A68_206  Params, A68_97  Msg)
{ 
A68_294  DGMAOSF;  /* collateral clause result */
A68_INT  GGMAOSF;  /* YIELD */
A68_VC  HGMAOSF;  /* avoid structure result */
A68_52  IGMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  JGMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  KGMAOSF;  /* procedure value */
A68_85  LGMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 408: */
 /* line 409: */
GGMAOSF = 1 ;
PGKAOSF_set_switch( (*(&A_VINDEX(Params,GGMAOSF))), (&KXFAOSF_debug_reader), FGMAOSF, Msg, &HGMAOSF );
DGMAOSF.data[0] = A_UNITE(IGMAOSF,mode7,7,HGMAOSF);
KGMAOSF.fn.fn_global = PKDAOSF_newline;
KGMAOSF.nonlocals = A68_NIL;
DGMAOSF.data[1] = A_UNITE(JGMAOSF,mode12,12,KGMAOSF);
 /* line 410: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(LGMAOSF,DGMAOSF,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  MHMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_217 ** NHMAOSF;  /* YIELD */
A68_294  OHMAOSF;  /* collateral clause result */
A68_52  RHMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  SHMAOSF;  /* YIELD */
A68_52  THMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  UHMAOSF;  /* procedure value */
A68_85  VHMAOSF;  /* OPERATORS - istruct -> vector */
A68_294  WHMAOSF;  /* collateral clause result */
A68_52  ZHMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  AIMAOSF;  /* YIELD */
A68_52  BIMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  CIMAOSF;  /* procedure value */
A68_85  DIMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 421: */
 /* line 422: */
if ( YKLAOSF_check_syntax )
{ 
 /* line 423: */
if ( YKLAOSF_check_syntax )
{ 
 /* line 424: */
NHMAOSF = (&((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals)))->Stack)) ;
(*NHMAOSF) = POLAOSF_syntaxcheck_context;
 /* line 425: */
ZKLAOSF_show_parameters = YKLAOSF_check_syntax = A68_FALSE;
 /* line 426: */
 /* line 427: */
SHMAOSF = QHMAOSF ;
OHMAOSF.data[0] = A_UNITE(RHMAOSF,mode7,7,SHMAOSF);
UHMAOSF.fn.fn_global = PKDAOSF_newline;
UHMAOSF.nonlocals = A68_NIL;
OHMAOSF.data[1] = A_UNITE(THMAOSF,mode12,12,UHMAOSF);
 /* line 428: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(VHMAOSF,OHMAOSF,2,A68_52 ));
} 
else
{ 
 /* line 429: */
AIMAOSF = YHMAOSF ;
WHMAOSF.data[0] = A_UNITE(ZHMAOSF,mode7,7,AIMAOSF);
CIMAOSF.fn.fn_global = PKDAOSF_newline;
CIMAOSF.nonlocals = A68_NIL;
WHMAOSF.data[1] = A_UNITE(BIMAOSF,mode12,12,CIMAOSF);
 /* line 430: */
 /* line 431: */
 /* line 432: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(DIMAOSF,WHMAOSF,2,A68_52 ));
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  WIMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 439: */
MGLAOSF_io_dontlog(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  PJMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 447: */
GHLAOSF_io_dontoutput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  IKMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_294  JKMAOSF;  /* collateral clause result */
A68_52  MKMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  NKMAOSF;  /* YIELD */
A68_52  OKMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  PKMAOSF;  /* procedure value */
A68_85  QKMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 454: */
{ 
ZKLAOSF_show_parameters = A68_FALSE;
 /* line 455: */
NKMAOSF = LKMAOSF ;
JKMAOSF.data[0] = A_UNITE(MKMAOSF,mode7,7,NKMAOSF);
PKMAOSF.fn.fn_global = PKDAOSF_newline;
PKMAOSF.nonlocals = A68_NIL;
JKMAOSF.data[1] = A_UNITE(OKMAOSF,mode12,12,PKMAOSF);
 /* line 456: */
 /* line 457: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(QKMAOSF,JKMAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  LLMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 466: */
 /* line 467: */
LELAOSF_io_dontshowinput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  EMMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 475: */
 /* line 476: */
RELAOSF_io_dontshowoutput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  ANMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 484: */
 /* line 485: */
EYGAOSF_set_var(GOLAOSF_showtime_var, UUGAOSF_false_var, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  YNMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 494: */
YHLAOSF_io_dontpage(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  BPMAOSF_anonymous(A68_206  Params, A68_97  Msg)
{ 
A68_305  CPMAOSF;  /* collateral clause result */
A68_46  HPMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  IPMAOSF;  /* avoid structure result */
A68_46  JPMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  KPMAOSF;  /* YIELD */
A68_139  LPMAOSF;  /* avoid structure result */
A68_VC  MPMAOSF_name;
A68_VC  NPMAOSF;  /* avoid structure result */
A68_VC  OPMAOSF_cmd;
A68_305  PPMAOSF;  /* collateral clause result */
A68_VC  QPMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  RPMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  SPMAOSF;  /* avoid structure result */
A68_VC  TPMAOSF_command;
 /* line 505: */
 /* line 506: */
if ( DXGAOSF_var_unset(DOLAOSF_edit_var) )
{ 
CPMAOSF.data[0] = EPMAOSF;
 /* line 507: */
CPMAOSF.data[1] = DOLAOSF_edit_var;
CPMAOSF.data[2] = GPMAOSF;
 /* line 508: */
 /* line 509: */
JDAAOSF_concat( A_HISVEC(HPMAOSF,CPMAOSF,3,A68_VC ), &IPMAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(JPMAOSF,IPMAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(JPMAOSF,IPMAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
KPMAOSF = 1 ;
QAKAOSF_get_filename( (*(&A_VINDEX(Params,KPMAOSF))), HOLAOSF_edit_type, Msg, &LPMAOSF );
MPMAOSF_name = LPMAOSF.Filename;
 /* line 510: */
QWGAOSF_get_var( DOLAOSF_edit_var, &NPMAOSF );
OPMAOSF_cmd = NPMAOSF;
 /* line 511: */
PPMAOSF.data[0] = OPMAOSF_cmd;
PPMAOSF.data[1] = A_HVEC(QPMAOSF,' ',A68_CHAR );
PPMAOSF.data[2] = MPMAOSF_name;
JDAAOSF_concat( A_HISVEC(RPMAOSF,PPMAOSF,3,A68_VC ), &SPMAOSF );
TPMAOSF_command = SPMAOSF;
 /* line 512: */
 /* line 513: */
 /* line 514: */
PSLAOSF_obey_command(TPMAOSF_command, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  FQMAOSF_anonymous(A68_208 * C, A68_34 * Ch)
{ 
A68_340  GQMAOSF;  /* collateral clause result */
A68_52  JQMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KQMAOSF;  /* YIELD */
A68_VC  LQMAOSF;  /* avoid structure result */
A68_52  MQMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  NQMAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  OQMAOSF;  /* YIELD */
A68_52  PQMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  QQMAOSF;  /* procedure value */
A68_52  TQMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  UQMAOSF;  /* YIELD */
A68_52  VQMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  WQMAOSF;  /* procedure value */
A68_52  ZQMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ARMAOSF;  /* YIELD */
A68_52  BRMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  CRMAOSF;  /* procedure value */
A68_52  FRMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  GRMAOSF;  /* YIELD */
A68_85  HRMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 520: */
 /* line 521: */
KQMAOSF = IQMAOSF ;
GQMAOSF.data[0] = A_UNITE(JQMAOSF,mode7,7,KQMAOSF);
NREAOSF_facility(  &LQMAOSF );
GQMAOSF.data[1] = A_UNITE(MQMAOSF,mode7,7,LQMAOSF);
 /* line 522: */
OQMAOSF = ':' ;
GQMAOSF.data[2] = A_UNITE(NQMAOSF,mode6,6,OQMAOSF);
 /* line 523: */
QQMAOSF.fn.fn_global = PKDAOSF_newline;
QQMAOSF.nonlocals = A68_NIL;
GQMAOSF.data[3] = A_UNITE(PQMAOSF,mode12,12,QQMAOSF);
UQMAOSF = SQMAOSF ;
GQMAOSF.data[4] = A_UNITE(TQMAOSF,mode7,7,UQMAOSF);
 /* line 525: */
WQMAOSF.fn.fn_global = PKDAOSF_newline;
WQMAOSF.nonlocals = A68_NIL;
GQMAOSF.data[5] = A_UNITE(VQMAOSF,mode12,12,WQMAOSF);
 /* line 526: */
ARMAOSF = YQMAOSF ;
GQMAOSF.data[6] = A_UNITE(ZQMAOSF,mode7,7,ARMAOSF);
 /* line 528: */
CRMAOSF.fn.fn_global = PKDAOSF_newline;
CRMAOSF.nonlocals = A68_NIL;
GQMAOSF.data[7] = A_UNITE(BRMAOSF,mode12,12,CRMAOSF);
GRMAOSF = ERMAOSF ;
GQMAOSF.data[8] = A_UNITE(FRMAOSF,mode7,7,GRMAOSF);
KYDAOSF_put(Ch, A_HISVEC(HRMAOSF,GQMAOSF,9,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  NRMAOSF_anonymous(A68_206  Names, A68_97  Msg)
{ 
A68_305  ORMAOSF;  /* collateral clause result */
A68_INT  VRMAOSF;  /* clause result */
A68_46  WRMAOSF;  /* OPERATORS - istruct -> vector */
A68_INT  XRMAOSF;  /* YIELD */
 /* line 530: */
ORMAOSF.data[0] = QRMAOSF;
ORMAOSF.data[1] = SRMAOSF;
ORMAOSF.data[2] = URMAOSF;
 /* line 531: */
XRMAOSF = 1 ;
VRMAOSF = WIKAOSF_get_word((*(&A_VINDEX(Names,XRMAOSF))), Msg, A_HISVEC(WRMAOSF,ORMAOSF,3,A68_VC ));
switch ( VRMAOSF )
{ 
case 1: 
 /* line 532: */
USIAOSF_full_help((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals))), EREAOSF_out, A68_TRUE, A68_FALSE, Msg);
break;
case 2: 
 /* line 533: */
USIAOSF_full_help((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals))), EREAOSF_out, A68_FALSE, A68_FALSE, Msg);
break;
case 3: 
 /* line 534: */
 /* line 535: */
USIAOSF_full_help((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals))), EREAOSF_out, A68_TRUE, A68_TRUE, Msg);
break;
default: 
A_IMP_SKIP ;
break;
} 
return;
} 
#undef NL

A_STATIC A68_VOID  QSMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_321  RSMAOSF;  /* collateral clause result */
A68_VC  SSMAOSF;  /* avoid structure result */
A68_52  TSMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  WSMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XSMAOSF;  /* YIELD */
A68_52  YSMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  ZSMAOSF;  /* procedure value */
A68_85  ATMAOSF;  /* OPERATORS - istruct -> vector */
A68_321  BTMAOSF;  /* collateral clause result */
A68_VC  CTMAOSF;  /* avoid structure result */
A68_52  DTMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  GTMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HTMAOSF;  /* YIELD */
A68_52  ITMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  JTMAOSF;  /* procedure value */
A68_85  KTMAOSF;  /* OPERATORS - istruct -> vector */
A68_36  STMAOSF;  /* procedure value */
 /* line 542: */
{ 
ZQHAOSF_time_str(  &SSMAOSF );
RSMAOSF.data[0] = A_UNITE(TSMAOSF,mode7,7,SSMAOSF);
XSMAOSF = VSMAOSF ;
RSMAOSF.data[1] = A_UNITE(WSMAOSF,mode7,7,XSMAOSF);
ZSMAOSF.fn.fn_global = PKDAOSF_newline;
ZSMAOSF.nonlocals = A68_NIL;
RSMAOSF.data[2] = A_UNITE(YSMAOSF,mode12,12,ZSMAOSF);
KYDAOSF_put(DREAOSF_screen, A_HISVEC(ATMAOSF,RSMAOSF,3,A68_52 ));
 /* line 543: */
GMBAOSF_garbage_collect();
 /* line 544: */
ZQHAOSF_time_str(  &CTMAOSF );
BTMAOSF.data[0] = A_UNITE(DTMAOSF,mode7,7,CTMAOSF);
HTMAOSF = FTMAOSF ;
BTMAOSF.data[1] = A_UNITE(GTMAOSF,mode7,7,HTMAOSF);
JTMAOSF.fn.fn_global = PKDAOSF_newline;
JTMAOSF.nonlocals = A68_NIL;
BTMAOSF.data[2] = A_UNITE(ITMAOSF,mode12,12,JTMAOSF);
KYDAOSF_put(DREAOSF_screen, A_HISVEC(KTMAOSF,BTMAOSF,3,A68_52 ));
 /* line 545: */
 /* line 546: */
 /* line 547: */
STMAOSF.fn.fn_global = MTMAOSF_anonymous;
STMAOSF.nonlocals = A68_NIL;
MMBAOSF_gc_statistics(STMAOSF);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  JUMAOSF_anonymous(A68_208 * S, A68_34 * Ch)
{ 
A68_321  KUMAOSF;  /* collateral clause result */
A68_52  LUMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  MUMAOSF;  /* procedure value */
A68_346  NUMAOSF;  /* collateral clause result */
A68_VC  QUMAOSF;  /* avoid structure result */
A68_VC  TUMAOSF;  /* avoid structure result */
A68_46  WUMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  XUMAOSF;  /* avoid structure result */
A68_52  YUMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  ZUMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  AVMAOSF;  /* procedure value */
A68_85  BVMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 553: */
MUMAOSF.fn.fn_global = PKDAOSF_newline;
MUMAOSF.nonlocals = A68_NIL;
KUMAOSF.data[0] = A_UNITE(LUMAOSF,mode12,12,MUMAOSF);
 /* line 556: */
NUMAOSF.data[0] = PUMAOSF;
 /* line 557: */
LSLAOSF_current_context(  &QUMAOSF );
NUMAOSF.data[1] = QUMAOSF;
 /* line 558: */
 /* line 559: */
NUMAOSF.data[2] = SUMAOSF;
 /* line 560: */
NREAOSF_facility(  &TUMAOSF );
NUMAOSF.data[3] = TUMAOSF;
 /* line 561: */
 /* line 562: */
 /* line 563: */
 /* line 564: */
 /* line 566: */
NUMAOSF.data[4] = VUMAOSF;
JDAAOSF_concat( A_HISVEC(WUMAOSF,NUMAOSF,5,A68_VC ), &XUMAOSF );
KUMAOSF.data[1] = A_UNITE(YUMAOSF,mode7,7,XUMAOSF);
AVMAOSF.fn.fn_global = PKDAOSF_newline;
AVMAOSF.nonlocals = A68_NIL;
KUMAOSF.data[2] = A_UNITE(ZUMAOSF,mode12,12,AVMAOSF);
KYDAOSF_put(Ch, A_HISVEC(BVMAOSF,KUMAOSF,3,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  HVMAOSF_anonymous(A68_206  Names, A68_97  Msg)
{ 
A68_INT  IVMAOSF;  /* YIELD */
A68_201 * JVMAOSF_name;
A68_INT  KVMAOSF;  /* forall loop counter */
A68_VC  LVMAOSF;  /* avoid structure result */
 /* line 568: */
 /* line 569: */
IVMAOSF = 1 ;
if ( MOGAOSF_is_command_name((*(&A_VINDEX(Names,IVMAOSF)))) )
{ 
 /* line 570: */
KVMAOSF = Names.upb -1;
JVMAOSF_name = Names.data;
for (;KVMAOSF-- >= 0;
(JVMAOSF_name++
) )
{
 /* line 571: */
 /* line 572: */
QOGAOSF_get_command_name( (*JVMAOSF_name), Msg, &LVMAOSF );
CRIAOSF_help((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals))), DREAOSF_screen, LVMAOSF, A68_FALSE, Msg);
}
 /* line 573: */
} 
else
{ 
 /* line 574: */
 /* line 575: */
CRIAOSF_help((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals))), DREAOSF_screen, IHDAOSF_nullstr, A68_FALSE, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  NWMAOSF_anonymous(A68_206  Names, A68_97  Msg)
{ 
A68_INT  OWMAOSF;  /* YIELD */
A68_INT  QWMAOSF;  /* YIELD */
A68_VC  RWMAOSF;  /* avoid structure result */
A68_46  VWMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_201 * WWMAOSF_name;
A68_INT  XWMAOSF;  /* forall loop counter */
A68_VC  YWMAOSF;  /* avoid structure result */
 /* line 586: */
 /* line 587: */
OWMAOSF = 1 ;
if ( !FZJAOSF_is_string((*(&A_VINDEX(Names,OWMAOSF)))) )
{ 
 /* line 588: */
ZYIAOSF_syntax_help((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals))), DREAOSF_screen, IHDAOSF_nullstr, A68_FALSE, Msg);
} 
else
{ 
 /* line 589: */
QWMAOSF = 1 ;
JZJAOSF_get_string( (*(&A_VINDEX(Names,QWMAOSF))), Msg, &RWMAOSF );
if ( A_VC_EQ(RWMAOSF,SWMAOSF) )
{ 
ZYIAOSF_syntax_help((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals))), DREAOSF_screen, IHDAOSF_nullstr, A68_TRUE, Msg);
 /* line 590: */
if ( (Names.upb>1) )
{ 
 /* line 591: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(VWMAOSF,UWMAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(VWMAOSF,UWMAOSF,A68_VC ),(Msg).nonlocals));
} 
} 
else
{ 
 /* line 592: */
XWMAOSF = Names.upb -1;
WWMAOSF_name = Names.data;
for (;XWMAOSF-- >= 0;
(WWMAOSF_name++
) )
{
 /* line 593: */
 /* line 594: */
JZJAOSF_get_string( (*WWMAOSF_name), Msg, &YWMAOSF );
ZYIAOSF_syntax_help((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals))), DREAOSF_screen, YWMAOSF, A68_TRUE, Msg);
}
 /* line 595: */
 /* line 596: */
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  OXMAOSF_anonymous(A68_206  Params, A68_97  Msg)
{ 
A68_294  PXMAOSF;  /* collateral clause result */
A68_INT  SXMAOSF;  /* YIELD */
A68_VC  TXMAOSF;  /* avoid structure result */
A68_52  UXMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  VXMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  WXMAOSF;  /* procedure value */
A68_85  XXMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 603: */
 /* line 604: */
SXMAOSF = 1 ;
PGKAOSF_set_switch( (*(&A_VINDEX(Params,SXMAOSF))), (&((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals)))->Hidden)), RXMAOSF, Msg, &TXMAOSF );
PXMAOSF.data[0] = A_UNITE(UXMAOSF,mode7,7,TXMAOSF);
WXMAOSF.fn.fn_global = PKDAOSF_newline;
WXMAOSF.nonlocals = A68_NIL;
PXMAOSF.data[1] = A_UNITE(VXMAOSF,mode12,12,WXMAOSF);
 /* line 605: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(XXMAOSF,PXMAOSF,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  QYMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_INT  RYMAOSF;  /* YIELD */
A68_139  SYMAOSF;  /* avoid structure result */
 /* line 613: */
 /* line 614: */
RYMAOSF = 1 ;
QAKAOSF_get_filename( (*(&A_VINDEX(V,RYMAOSF))), IYHAOSF_infile_type, Msg, &SYMAOSF );
VCLAOSF_io_input(SYMAOSF.Filename, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  IZMAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_INT  JZMAOSF;  /* YIELD */
A68_139  KZMAOSF;  /* avoid structure result */
 /* line 622: */
 /* line 623: */
JZMAOSF = 1 ;
QAKAOSF_get_filename( (*(&A_VINDEX(V,JZMAOSF))), FYHAOSF_logfile_type, Msg, &KZMAOSF );
BGLAOSF_io_log(KZMAOSF.Filename, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  FANAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_INT  GANAOSF;  /* YIELD */
A68_INT  HANAOSF;  /* YIELD */
A68_VC  IANAOSF;  /* avoid structure result */
 /* line 630: */
GANAOSF = 1 ;
if ( UBKAOSF_is_text((*(&A_VINDEX(V,GANAOSF)))) )
{ 
 /* line 631: */
HANAOSF = 1 ;
YBKAOSF_get_text( (*(&A_VINDEX(V,HANAOSF))), Msg, &IANAOSF );
GFLAOSF_io_message(IANAOSF, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  BBNAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_294  CBNAOSF;  /* collateral clause result */
A68_52  FBNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  GBNAOSF;  /* YIELD */
A68_52  HBNAOSF;  /* OPERATORS - mode -> union mode */
A68_56  IBNAOSF;  /* procedure value */
A68_85  JBNAOSF;  /* OPERATORS - istruct -> vector */
 /* line 640: */
{ 
ZKLAOSF_show_parameters = A68_TRUE;
 /* line 641: */
GBNAOSF = EBNAOSF ;
CBNAOSF.data[0] = A_UNITE(FBNAOSF,mode7,7,GBNAOSF);
IBNAOSF.fn.fn_global = PKDAOSF_newline;
IBNAOSF.nonlocals = A68_NIL;
CBNAOSF.data[1] = A_UNITE(HBNAOSF,mode12,12,IBNAOSF);
 /* line 642: */
 /* line 643: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(JBNAOSF,CBNAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  TCNAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_INT  UCNAOSF;  /* YIELD */
A68_139  VCNAOSF;  /* avoid structure result */
A68_139  WCNAOSF_fn;
A68_INT  XCNAOSF;  /* clause result */
A68_INT  YCNAOSF;  /* YIELD */
A68_INT  ZCNAOSF_size;
A68_117 * ADNAOSF_f;
A68_BOOL  BDNAOSF_paging;
 /* line 652: */
{ 
UCNAOSF = 1 ;
QAKAOSF_get_filename( (*(&A_VINDEX(V,UCNAOSF))), WXHAOSF_source_type, Msg, &VCNAOSF );
WCNAOSF_fn = VCNAOSF;
 /* line 653: */
if ( (V.upb==2) )
{ 
YCNAOSF = 2 ;
XCNAOSF = DUJAOSF_get_int((*(&A_VINDEX(V,YCNAOSF))), Msg);
} 
else
{ 
XCNAOSF = 0;
} 
ZCNAOSF_size = XCNAOSF;
 /* line 654: */
ADNAOSF_f = QVBAOSF_open_file(WCNAOSF_fn.Filename, ATBAOSF_read_access, Msg);
 /* line 655: */
BDNAOSF_paging = (*(&((&GWKAOSF_iostate)->Paging)));
 /* line 656: */
PHLAOSF_io_page(ZCNAOSF_size, Msg);
 /* line 657: */
ZOLAOSF_type_more(!BDNAOSF_paging, ADNAOSF_f, Msg);
 /* line 658: */
if ( !BDNAOSF_paging )
{ 
 /* line 659: */
 /* line 660: */
YHLAOSF_io_dontpage(Msg);
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  GENAOSF_anonymous(A68_206  Params, A68_97  Msg)
{ 
A68_INT  HENAOSF;  /* YIELD */
 /* line 671: */
 /* line 672: */
HENAOSF = 1 ;
PSLAOSF_obey_command((*(&((&A_VINDEX(Params,HENAOSF))->Value))), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  AFNAOSF_anonymous(A68_206  Params, A68_97  Msg)
{ 
A68_INT  BFNAOSF;  /* YIELD */
 /* line 678: */
 /* line 679: */
BFNAOSF = 1 ;
PSLAOSF_obey_command((*(&((&A_VINDEX(Params,BFNAOSF))->Value))), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  UFNAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 687: */
PFLAOSF_io_offline(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  NGNAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 695: */
UFLAOSF_io_online(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  GHNAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_INT  HHNAOSF;  /* YIELD */
A68_139  IHNAOSF;  /* avoid structure result */
 /* line 702: */
 /* line 703: */
HHNAOSF = 1 ;
QAKAOSF_get_filename( (*(&A_VINDEX(V,HHNAOSF))), LYHAOSF_outfile_type, Msg, &IHNAOSF );
VGLAOSF_io_output(IHNAOSF.Filename, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  BINAOSF_anonymous(A68_206  Names, A68_97  Msg)
{ 
A68_INT  CINAOSF;  /* YIELD */
A68_INT  DINAOSF_n;
A68_31  FINAOSF_generator;   /* proc value of non-global proc */
A68_VC  LINAOSF;  /* avoid structure result */
A68_VC  KINAOSF_array;
A68_CHAR * MINAOSF_a;
A68_INT  NINAOSF;  /* forall loop counter */
 /* line 713: */
 /* line 714: */
{ 
CINAOSF = 1 ;
DINAOSF_n = DUJAOSF_get_int((*(&A_VINDEX(Names,CINAOSF))), Msg);
 /* line 715: */
A_CLOSURE( FINAOSF_generator, GINAOSF_generator, HINAOSF_generator );
(( HINAOSF_generator * ) ( FINAOSF_generator.nonlocals )) -> DINAOSF_n = DINAOSF_n;
A_CALLPROC(FINAOSF_generator,(A68_TRUE, &LINAOSF),(A68_TRUE, &LINAOSF,(FINAOSF_generator).nonlocals));
KINAOSF_array = LINAOSF;
 /* line 716: */
NINAOSF = KINAOSF_array.upb -1;
MINAOSF_a = KINAOSF_array.data;
for (;NINAOSF-- >= 0;
(MINAOSF_a++
) )
{
(*MINAOSF_a) = '*';
}
 /* line 717: */
 /* line 718: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  EJNAOSF_anonymous(A68_206  Names, A68_97  Msg)
{ 
A68_INT  FJNAOSF;  /* YIELD */
A68_INT  GJNAOSF;  /* to part of loop */
A68_INT  HJNAOSF;  /* loop control */
A68_INT  IJNAOSF;  /* loop control */
A68_120 * KJNAOSF;  /* YIELD */
 /* line 726: */
FJNAOSF = 1 ;
GJNAOSF = DUJAOSF_get_int((*(&A_VINDEX(Names,FJNAOSF))), Msg);
for ( HJNAOSF = 1;
HJNAOSF <= GJNAOSF;
HJNAOSF += 1 )
{ 
 /* line 727: */
for ( IJNAOSF = 1;
IJNAOSF <= 10240;
IJNAOSF += 1 )
{ 
KJNAOSF = A_HEAP(A68_120 ) ;
(*KJNAOSF) = JJNAOSF;
}
}
 /* line 728: */
return;
} 
#undef NL

A_STATIC A68_VOID  HKNAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 737: */
PHLAOSF_io_page(SOLAOSF_opt_int(V, Msg), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  FLNAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 749: */
VQLAOSF_print_configuration();
return;
} 
#undef NL

A_STATIC A68_VOID  BMNAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 757: */
A_CALLPROC(MOLAOSF_print_issue,(),((MOLAOSF_print_issue).nonlocals));
return;
} 
#undef NL

A_STATIC A68_VOID  RMNAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_36  ZMNAOSF;  /* procedure value */
 /* line 764: */
 /* line 765: */
ZMNAOSF.fn.fn_global = TMNAOSF_anonymous;
ZMNAOSF.nonlocals = A68_NIL;
MMBAOSF_gc_statistics(ZMNAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  SNNAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_36  AONAOSF;  /* procedure value */
 /* line 772: */
 /* line 773: */
AONAOSF.fn.fn_global = UNNAOSF_anonymous;
AONAOSF.nonlocals = A68_NIL;
VCFAOSF_mem_statistics(AONAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  TONAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 780: */
AFLAOSF_io_printtime(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  BQNAOSF_anonymous(A68_206  Params, A68_97  Msg)
{ 
A68_INT  CQNAOSF;  /* YIELD */
A68_201 * DQNAOSF_v;
A68_INT  EQNAOSF;  /* forall loop counter */
A68_VC  FQNAOSF;  /* avoid structure result */
 /* line 791: */
 /* line 792: */
CQNAOSF = 1 ;
if ( XXJAOSF_is_name((*(&A_VINDEX(Params,CQNAOSF)))) )
{ 
 /* line 793: */
EQNAOSF = Params.upb -1;
DQNAOSF_v = Params.data;
for (;EQNAOSF-- >= 0;
(DQNAOSF_v++
) )
{
CYJAOSF_get_name( (*DQNAOSF_v), Msg, &FQNAOSF );
CAHAOSF_show_var(FQNAOSF, Msg);
}
 /* line 794: */
} 
else
{ 
 /* line 795: */
 /* line 796: */
CAHAOSF_show_var(HQNAOSF, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  BRNAOSF_anonymous(A68_206  Names, A68_97  Msg)
{ 
A68_BOOL * CRNAOSF;  /* YIELD */
A68_294  DRNAOSF;  /* collateral clause result */
A68_52  GRNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HRNAOSF;  /* YIELD */
A68_52  IRNAOSF;  /* OPERATORS - mode -> union mode */
A68_56  JRNAOSF;  /* procedure value */
A68_85  KRNAOSF;  /* OPERATORS - istruct -> vector */
 /* line 807: */
{ 
CRNAOSF = (&((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals)))->Private)) ;
(*CRNAOSF) = A68_FALSE;
 /* line 808: */
HRNAOSF = FRNAOSF ;
DRNAOSF.data[0] = A_UNITE(GRNAOSF,mode7,7,HRNAOSF);
JRNAOSF.fn.fn_global = PKDAOSF_newline;
JRNAOSF.nonlocals = A68_NIL;
DRNAOSF.data[1] = A_UNITE(IRNAOSF,mode12,12,JRNAOSF);
 /* line 809: */
 /* line 810: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(KRNAOSF,DRNAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  XRNAOSF_anonymous(A68_206  Names, A68_97  Msg)
{ 
A68_BOOL * YRNAOSF;  /* YIELD */
A68_46  BSNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 818: */
{ 
YRNAOSF = (&((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals)))->Private)) ;
(*YRNAOSF) = A68_TRUE;
 /* line 819: */
 /* line 820: */
 /* line 821: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(BSNAOSF,ASNAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(BSNAOSF,ASNAOSF,A68_VC ),(Msg).nonlocals));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  OSNAOSF_anonymous(A68_206  Names, A68_97  Msg)
{ 
A68_BOOL * PSNAOSF;  /* YIELD */
 /* line 827: */
 /* line 828: */
PSNAOSF = (&((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals)))->Private)) ;
(*PSNAOSF) = A68_TRUE;
return;
} 
#undef NL

A_STATIC A68_VOID  STNAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 839: */
YDLAOSF_io_removefile(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  IUNAOSF_anonymous(A68_206  Names, A68_97  Flt)
{ 
A68_INT  JUNAOSF;  /* YIELD */
A68_VC  KUNAOSF;  /* avoid structure result */
A68_VC  LUNAOSF_text;
A68_97  OUNAOSF_fault;   /* proc value of non-global proc */
A68_46  XUNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YUNAOSF;  /* avoid structure result */
A68_VC  ZUNAOSF_dir;
A68_297  AVNAOSF;  /* collateral clause result */
A68_46  DVNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  EVNAOSF;  /* avoid structure result */
A68_VC  FVNAOSF_fname;
A68_117 * GVNAOSF_lf;
A68_97  JVNAOSF_new_fault;   /* proc value of non-global proc */
A68_308  MVNAOSF_buffer;
A68_372  NVNAOSF;  /* collateral clause result */
A68_VC  OVNAOSF;  /* avoid structure result */
A68_52  PVNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  SVNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  TVNAOSF;  /* YIELD */
A68_VC  UVNAOSF;  /* avoid structure result */
A68_52  VVNAOSF;  /* OPERATORS - mode -> union mode */
A68_62  WVNAOSF;  /* avoid structure result */
A68_52  XVNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  AWNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BWNAOSF;  /* YIELD */
A68_VC  CWNAOSF;  /* avoid structure result */
A68_52  DWNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  EWNAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  FWNAOSF;  /* YIELD */
A68_62  GWNAOSF;  /* avoid structure result */
A68_52  HWNAOSF;  /* OPERATORS - mode -> union mode */
A68_153  IWNAOSF;  /* avoid structure result */
A68_52  JWNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KWNAOSF;  /* YIELD */
A68_52  NWNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  OWNAOSF;  /* YIELD */
A68_153  PWNAOSF;  /* avoid structure result */
A68_52  QWNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RWNAOSF;  /* YIELD */
A68_62  SWNAOSF;  /* avoid structure result */
A68_52  TWNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  WWNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XWNAOSF;  /* YIELD */
A68_52  YWNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  ZWNAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  AXNAOSF;  /* YIELD */
A68_52  BXNAOSF;  /* OPERATORS - mode -> union mode */
A68_85  CXNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  DXNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  EXNAOSF;  /* avoid structure result */
A68_VC  FXNAOSF_line;
A68_35  GXNAOSF;  /* avoid structure result */
A68_294  HXNAOSF;  /* collateral clause result */
A68_52  KXNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LXNAOSF;  /* YIELD */
A68_52  MXNAOSF;  /* OPERATORS - mode -> union mode */
A68_56  NXNAOSF;  /* procedure value */
A68_85  OXNAOSF;  /* OPERATORS - istruct -> vector */
 /* line 847: */
 /* line 848: */
{ 
JUNAOSF = 1 ;
YBKAOSF_get_text( (*(&A_VINDEX(Names,JUNAOSF))), Flt, &KUNAOSF );
LUNAOSF_text = KUNAOSF;
 /* line 850: */
A_CLOSURE( OUNAOSF_fault, PUNAOSF_fault, QUNAOSF_fault );
(( QUNAOSF_fault * ) ( OUNAOSF_fault.nonlocals )) -> Flt = Flt;
 /* line 856: */
if ( DXGAOSF_var_unset(JOLAOSF_sysdir_var) )
{ 
A_CALLPROC(OUNAOSF_fault,(MUAAOSF_user, A_HVEC(XUNAOSF,WUNAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(XUNAOSF,WUNAOSF,A68_VC ),(OUNAOSF_fault).nonlocals));
} 
 /* line 858: */
QWGAOSF_get_var( JOLAOSF_sysdir_var, &YUNAOSF );
ZUNAOSF_dir = YUNAOSF;
 /* line 859: */
AVNAOSF.data[0] = ZUNAOSF_dir;
AVNAOSF.data[1] = CVNAOSF;
JDAAOSF_concat( A_HISVEC(DVNAOSF,AVNAOSF,2,A68_VC ), &EVNAOSF );
FVNAOSF_fname = EVNAOSF;
 /* line 860: */
GVNAOSF_lf = QVBAOSF_open_file(FVNAOSF_fname, ITBAOSF_append_access, OUNAOSF_fault);
 /* line 862: */
A_CLOSURE( JVNAOSF_new_fault, KVNAOSF_new_fault, LVNAOSF_new_fault );
(( LVNAOSF_new_fault * ) ( JVNAOSF_new_fault.nonlocals )) -> GVNAOSF_lf = GVNAOSF_lf;
(( LVNAOSF_new_fault * ) ( JVNAOSF_new_fault.nonlocals )) -> OUNAOSF_fault = OUNAOSF_fault;
(( LVNAOSF_new_fault * ) ( JVNAOSF_new_fault.nonlocals )) -> Flt = Flt;
 /* line 865: */
 /* line 866: */
QQLAOSF_when(  &OVNAOSF );
NVNAOSF.data[0] = A_UNITE(PVNAOSF,mode7,7,OVNAOSF);
TVNAOSF = RVNAOSF ;
NVNAOSF.data[1] = A_UNITE(SVNAOSF,mode7,7,TVNAOSF);
NREAOSF_facility(  &UVNAOSF );
NVNAOSF.data[2] = A_UNITE(VVNAOSF,mode7,7,UVNAOSF);
BSDAOSF_after( 36, &WVNAOSF );
NVNAOSF.data[3] = A_UNITE(XVNAOSF,mode18,18,WVNAOSF);
 /* line 867: */
BWNAOSF = ZVNAOSF ;
NVNAOSF.data[4] = A_UNITE(AWNAOSF,mode7,7,BWNAOSF);
ERBAOSF_get_login_name(  &CWNAOSF );
NVNAOSF.data[5] = A_UNITE(DWNAOSF,mode7,7,CWNAOSF);
FWNAOSF = ']' ;
NVNAOSF.data[6] = A_UNITE(EWNAOSF,mode6,6,FWNAOSF);
 /* line 868: */
BSDAOSF_after( 54, &GWNAOSF );
NVNAOSF.data[7] = A_UNITE(HWNAOSF,mode18,18,GWNAOSF);
PREAOSF_version(  &IWNAOSF );
KWNAOSF = IWNAOSF.Date ;
NVNAOSF.data[8] = A_UNITE(JWNAOSF,mode7,7,KWNAOSF);
 /* line 869: */
OWNAOSF = MWNAOSF ;
NVNAOSF.data[9] = A_UNITE(NWNAOSF,mode7,7,OWNAOSF);
PREAOSF_version(  &PWNAOSF );
RWNAOSF = PWNAOSF.Version ;
NVNAOSF.data[10] = A_UNITE(QWNAOSF,mode7,7,RWNAOSF);
 /* line 870: */
BSDAOSF_after( 80, &SWNAOSF );
NVNAOSF.data[11] = A_UNITE(TWNAOSF,mode18,18,SWNAOSF);
XWNAOSF = VWNAOSF ;
NVNAOSF.data[12] = A_UNITE(WWNAOSF,mode7,7,XWNAOSF);
NVNAOSF.data[13] = A_UNITE(YWNAOSF,mode7,7,LUNAOSF_text);
 /* line 871: */
AXNAOSF = '\"' ;
NVNAOSF.data[14] = A_UNITE(ZWNAOSF,mode6,6,AXNAOSF);
NVNAOSF.data[15] = A_UNITE(BXNAOSF,mode6,6,GVBAOSF_newline_char);
JCEAOSF_putb( A_ISVEC(DXNAOSF,(&MVNAOSF_buffer),600,A68_CHAR ), A_HISVEC(CXNAOSF,NVNAOSF,16,A68_52 ), &EXNAOSF );
FXNAOSF_line = EXNAOSF;
 /* line 872: */
UXBAOSF_write_buffer( GVNAOSF_lf, FXNAOSF_line, JVNAOSF_new_fault, &GXNAOSF );
GXNAOSF;
 /* line 873: */
IWBAOSF_close_file(GVNAOSF_lf, Flt);
 /* line 874: */
LXNAOSF = JXNAOSF ;
HXNAOSF.data[0] = A_UNITE(KXNAOSF,mode7,7,LXNAOSF);
NXNAOSF.fn.fn_global = PKDAOSF_newline;
NXNAOSF.nonlocals = A68_NIL;
HXNAOSF.data[1] = A_UNITE(MXNAOSF,mode12,12,NXNAOSF);
 /* line 875: */
 /* line 876: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(OXNAOSF,HXNAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  IYNAOSF_anonymous(A68_206  Names, A68_97  Flt)
{ 
A68_INT  LYNAOSF;  /* YIELD */
A68_139  MYNAOSF;  /* avoid structure result */
A68_VC  NYNAOSF_filename;
A68_INT  OYNAOSF;  /* YIELD */
A68_VC  PYNAOSF;  /* avoid structure result */
A68_VC  QYNAOSF_text;
A68_305  RYNAOSF;  /* collateral clause result */
A68_VC  SYNAOSF;  /* avoid structure result */
A68_VC  TYNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  UYNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  VYNAOSF;  /* avoid structure result */
A68_VC  WYNAOSF_message;
A68_117 * XYNAOSF_record_file;
A68_97  AZNAOSF_new_flt;   /* proc value of non-global proc */
A68_35  DZNAOSF;  /* avoid structure result */
A68_294  EZNAOSF;  /* collateral clause result */
A68_VC  FZNAOSF;  /* OPERATORS - trim index */
A68_52  GZNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HZNAOSF;  /* YIELD */
A68_52  IZNAOSF;  /* OPERATORS - mode -> union mode */
A68_56  JZNAOSF;  /* procedure value */
A68_85  KZNAOSF;  /* OPERATORS - istruct -> vector */
 /* line 886: */
 /* line 887: */
{ 
LYNAOSF = 1 ;
QAKAOSF_get_filename( (*(&A_VINDEX(Names,LYNAOSF))), KYNAOSF, Flt, &MYNAOSF );
NYNAOSF_filename = MYNAOSF.Filename;
 /* line 888: */
OYNAOSF = 2 ;
YBKAOSF_get_text( (*(&A_VINDEX(Names,OYNAOSF))), Flt, &PYNAOSF );
QYNAOSF_text = PYNAOSF;
 /* line 889: */
ZQHAOSF_time_str(  &SYNAOSF );
RYNAOSF.data[0] = SYNAOSF;
RYNAOSF.data[1] = QYNAOSF_text;
RYNAOSF.data[2] = A_HVEC(TYNAOSF,GVBAOSF_newline_char,A68_CHAR );
JDAAOSF_concat( A_HISVEC(UYNAOSF,RYNAOSF,3,A68_VC ), &VYNAOSF );
WYNAOSF_message = VYNAOSF;
 /* line 890: */
XYNAOSF_record_file = QVBAOSF_open_file(NYNAOSF_filename, ITBAOSF_append_access, Flt);
 /* line 891: */
A_CLOSURE( AZNAOSF_new_flt, BZNAOSF_new_flt, CZNAOSF_new_flt );
(( CZNAOSF_new_flt * ) ( AZNAOSF_new_flt.nonlocals )) -> XYNAOSF_record_file = XYNAOSF_record_file;
(( CZNAOSF_new_flt * ) ( AZNAOSF_new_flt.nonlocals )) -> Flt = Flt;
 /* line 893: */
UXBAOSF_write_buffer( XYNAOSF_record_file, WYNAOSF_message, AZNAOSF_new_flt, &DZNAOSF );
DZNAOSF;
 /* line 894: */
IWBAOSF_close_file(XYNAOSF_record_file, Flt);
 /* line 895: */
HZNAOSF = A_VTRIM(FZNAOSF,(WYNAOSF_message),A_VTSCRIPT(&(FZNAOSF.upb),(WYNAOSF_message).upb,1,(WYNAOSF_message.upb-1))) ;
EZNAOSF.data[0] = A_UNITE(GZNAOSF,mode7,7,HZNAOSF);
JZNAOSF.fn.fn_global = PKDAOSF_newline;
JZNAOSF.nonlocals = A68_NIL;
EZNAOSF.data[1] = A_UNITE(IZNAOSF,mode12,12,JZNAOSF);
 /* line 896: */
 /* line 897: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(KZNAOSF,EZNAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  MAOAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_INT  NAOAOSF;  /* YIELD */
A68_139  OAOAOSF;  /* avoid structure result */
A68_139  PAOAOSF_fn;
A68_117 * QAOAOSF_f;
 /* line 908: */
{ 
NAOAOSF = 1 ;
QAKAOSF_get_filename( (*(&A_VINDEX(V,NAOAOSF))), WXHAOSF_source_type, Msg, &OAOAOSF );
PAOAOSF_fn = OAOAOSF;
 /* line 909: */
QAOAOSF_f = QVBAOSF_open_file(PAOAOSF_fn.Filename, ATBAOSF_read_access, Msg);
 /* line 910: */
 /* line 911: */
 /* line 912: */
ZOLAOSF_type_more(A68_FALSE, QAOAOSF_f, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  CBOAOSF_anonymous(A68_208 * S, A68_34 * Ch)
{ 
A68_291  DBOAOSF;  /* collateral clause result */
A68_52  GBOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HBOAOSF;  /* YIELD */
A68_VC  IBOAOSF;  /* avoid structure result */
A68_52  JBOAOSF;  /* OPERATORS - mode -> union mode */
A68_52  MBOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  NBOAOSF;  /* YIELD */
A68_52  OBOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  PBOAOSF;  /* procedure value */
A68_85  QBOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 917: */
HBOAOSF = FBOAOSF ;
DBOAOSF.data[0] = A_UNITE(GBOAOSF,mode7,7,HBOAOSF);
 /* line 918: */
LSLAOSF_current_context(  &IBOAOSF );
DBOAOSF.data[1] = A_UNITE(JBOAOSF,mode7,7,IBOAOSF);
 /* line 919: */
NBOAOSF = LBOAOSF ;
DBOAOSF.data[2] = A_UNITE(MBOAOSF,mode7,7,NBOAOSF);
PBOAOSF.fn.fn_global = PKDAOSF_newline;
PBOAOSF.nonlocals = A68_NIL;
DBOAOSF.data[3] = A_UNITE(OBOAOSF,mode12,12,PBOAOSF);
KYDAOSF_put(Ch, A_HISVEC(QBOAOSF,DBOAOSF,4,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  ECOAOSF_anonymous(A68_208 * S, A68_34 * Ch)
{ 
A68_291  FCOAOSF;  /* collateral clause result */
A68_52  ICOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  JCOAOSF;  /* YIELD */
A68_VC  KCOAOSF;  /* avoid structure result */
A68_52  LCOAOSF;  /* OPERATORS - mode -> union mode */
A68_52  OCOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  PCOAOSF;  /* YIELD */
A68_52  QCOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  RCOAOSF;  /* procedure value */
A68_85  SCOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 926: */
JCOAOSF = HCOAOSF ;
FCOAOSF.data[0] = A_UNITE(ICOAOSF,mode7,7,JCOAOSF);
 /* line 927: */
LSLAOSF_current_context(  &KCOAOSF );
FCOAOSF.data[1] = A_UNITE(LCOAOSF,mode7,7,KCOAOSF);
 /* line 928: */
PCOAOSF = NCOAOSF ;
FCOAOSF.data[2] = A_UNITE(OCOAOSF,mode7,7,PCOAOSF);
RCOAOSF.fn.fn_global = PKDAOSF_newline;
RCOAOSF.nonlocals = A68_NIL;
FCOAOSF.data[3] = A_UNITE(QCOAOSF,mode12,12,RCOAOSF);
KYDAOSF_put(Ch, A_HISVEC(SCOAOSF,FCOAOSF,4,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  GDOAOSF_anonymous(A68_208 * S, A68_34 * Ch)
{ 
A68_291  HDOAOSF;  /* collateral clause result */
A68_52  KDOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LDOAOSF;  /* YIELD */
A68_VC  MDOAOSF;  /* avoid structure result */
A68_52  NDOAOSF;  /* OPERATORS - mode -> union mode */
A68_52  QDOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RDOAOSF;  /* YIELD */
A68_52  SDOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  TDOAOSF;  /* procedure value */
A68_85  UDOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 935: */
LDOAOSF = JDOAOSF ;
HDOAOSF.data[0] = A_UNITE(KDOAOSF,mode7,7,LDOAOSF);
 /* line 936: */
LSLAOSF_current_context(  &MDOAOSF );
HDOAOSF.data[1] = A_UNITE(NDOAOSF,mode7,7,MDOAOSF);
 /* line 937: */
RDOAOSF = PDOAOSF ;
HDOAOSF.data[2] = A_UNITE(QDOAOSF,mode7,7,RDOAOSF);
TDOAOSF.fn.fn_global = PKDAOSF_newline;
TDOAOSF.nonlocals = A68_NIL;
HDOAOSF.data[3] = A_UNITE(SDOAOSF,mode12,12,TDOAOSF);
KYDAOSF_put(Ch, A_HISVEC(UDOAOSF,HDOAOSF,4,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  IEOAOSF_anonymous(A68_208 * S, A68_34 * Ch)
{ 
A68_291  JEOAOSF;  /* collateral clause result */
A68_52  MEOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  NEOAOSF;  /* YIELD */
A68_VC  OEOAOSF;  /* avoid structure result */
A68_52  PEOAOSF;  /* OPERATORS - mode -> union mode */
A68_52  SEOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  TEOAOSF;  /* YIELD */
A68_52  UEOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  VEOAOSF;  /* procedure value */
A68_85  WEOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 944: */
NEOAOSF = LEOAOSF ;
JEOAOSF.data[0] = A_UNITE(MEOAOSF,mode7,7,NEOAOSF);
 /* line 945: */
LSLAOSF_current_context(  &OEOAOSF );
JEOAOSF.data[1] = A_UNITE(PEOAOSF,mode7,7,OEOAOSF);
 /* line 946: */
TEOAOSF = REOAOSF ;
JEOAOSF.data[2] = A_UNITE(SEOAOSF,mode7,7,TEOAOSF);
VEOAOSF.fn.fn_global = PKDAOSF_newline;
VEOAOSF.nonlocals = A68_NIL;
JEOAOSF.data[3] = A_UNITE(UEOAOSF,mode12,12,VEOAOSF);
KYDAOSF_put(Ch, A_HISVEC(WEOAOSF,JEOAOSF,4,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  OFOAOSF_anonymous(A68_206  Params, A68_97  Msg)
{ 
A68_294  PFOAOSF;  /* collateral clause result */
A68_INT  SFOAOSF;  /* YIELD */
A68_VC  TFOAOSF;  /* avoid structure result */
A68_52  UFOAOSF;  /* OPERATORS - mode -> union mode */
A68_52  VFOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  WFOAOSF;  /* procedure value */
A68_85  XFOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 955: */
 /* line 956: */
SFOAOSF = 1 ;
PGKAOSF_set_switch( (*(&A_VINDEX(Params,SFOAOSF))), (&((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals)))->Secret)), RFOAOSF, Msg, &TFOAOSF );
PFOAOSF.data[0] = A_UNITE(UFOAOSF,mode7,7,TFOAOSF);
WFOAOSF.fn.fn_global = PKDAOSF_newline;
WFOAOSF.nonlocals = A68_NIL;
PFOAOSF.data[1] = A_UNITE(VFOAOSF,mode12,12,WFOAOSF);
 /* line 957: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(XFOAOSF,PFOAOSF,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  SGOAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_321  TGOAOSF;  /* collateral clause result */
A68_52  WGOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XGOAOSF;  /* YIELD */
A68_INT  YGOAOSF;  /* YIELD */
A68_52  ZGOAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  AHOAOSF;  /* YIELD */
A68_52  BHOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  CHOAOSF;  /* procedure value */
A68_85  DHOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 973: */
 /* line 974: */
XGOAOSF = VGOAOSF ;
TGOAOSF.data[0] = A_UNITE(WGOAOSF,mode7,7,XGOAOSF);
 /* line 975: */
YGOAOSF = 1 ;
AHOAOSF = SWAAOSF_diagnostic_level = DUJAOSF_get_int((*(&A_VINDEX(V,YGOAOSF))), Msg) ;
TGOAOSF.data[1] = A_UNITE(ZGOAOSF,mode1,1,AHOAOSF);
CHOAOSF.fn.fn_global = PKDAOSF_newline;
CHOAOSF.nonlocals = A68_NIL;
TGOAOSF.data[2] = A_UNITE(BHOAOSF,mode12,12,CHOAOSF);
 /* line 976: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(DHOAOSF,TGOAOSF,3,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  SHOAOSF_anonymous(A68_208 * S, A68_34 * Ch)
{ 
A68_356  THOAOSF;  /* collateral clause result */
A68_52  WHOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XHOAOSF;  /* YIELD */
A68_52  AIOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BIOAOSF;  /* YIELD */
A68_52  CIOAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  DIOAOSF;  /* YIELD */
A68_52  EIOAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  FIOAOSF;  /* YIELD */
A68_52  GIOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  HIOAOSF;  /* procedure value */
A68_85  IIOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 982: */
 /* line 983: */
 /* line 984: */
 /* line 985: */
XHOAOSF = VHOAOSF ;
THOAOSF.data[0] = A_UNITE(WHOAOSF,mode7,7,XHOAOSF);
BIOAOSF = ZHOAOSF ;
THOAOSF.data[1] = A_UNITE(AIOAOSF,mode7,7,BIOAOSF);
 /* line 986: */
DIOAOSF = (*(&((&GWKAOSF_iostate)->Width))) ;
THOAOSF.data[2] = A_UNITE(CIOAOSF,mode1,1,DIOAOSF);
FIOAOSF = ')' ;
THOAOSF.data[3] = A_UNITE(EIOAOSF,mode6,6,FIOAOSF);
HIOAOSF.fn.fn_global = PKDAOSF_newline;
HIOAOSF.nonlocals = A68_NIL;
THOAOSF.data[4] = A_UNITE(GIOAOSF,mode12,12,HIOAOSF);
KYDAOSF_put(Ch, A_HISVEC(IIOAOSF,THOAOSF,5,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  OIOAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 988: */
 /* line 989: */
CILAOSF_io_setwidth(SOLAOSF_opt_int(V, Msg), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  VJOAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_VC  WJOAOSF;  /* clause result */
A68_INT  XJOAOSF;  /* YIELD */
A68_VC  YJOAOSF;  /* avoid structure result */
A68_INT  BKOAOSF;  /* YIELD */
A68_VC  CKOAOSF;  /* avoid structure result */
 /* line 999: */
 /* line 1000: */
if ( (V.upb==2) )
{ 
XJOAOSF = 2 ;
YBKAOSF_get_text( (*(&A_VINDEX(V,XJOAOSF))), Msg, &YJOAOSF );
WJOAOSF = YJOAOSF;
} 
else
{ 
WJOAOSF = AKOAOSF;
} 
 /* line 1001: */
 /* line 1002: */
BKOAOSF = 1 ;
CYJAOSF_get_name( (*(&A_VINDEX(V,BKOAOSF))), Msg, &CKOAOSF );
EYGAOSF_set_var(CKOAOSF, WJOAOSF, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  CLOAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
A68_46  FLOAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_294  GLOAOSF;  /* collateral clause result */
A68_52  JLOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KLOAOSF;  /* YIELD */
A68_52  LLOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  MLOAOSF;  /* procedure value */
A68_85  NLOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 1015: */
 /* line 1016: */
if ( YKLAOSF_check_syntax )
{ 
 /* line 1017: */
 /* line 1018: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(FLOAOSF,ELOAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(FLOAOSF,ELOAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
ZKLAOSF_show_parameters = YKLAOSF_check_syntax = A68_TRUE;
 /* line 1019: */
POLAOSF_syntaxcheck_context = (*(&((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals)))->Stack)));
 /* line 1020: */
 /* line 1021: */
 /* line 1022: */
 /* line 1023: */
KLOAOSF = ILOAOSF ;
GLOAOSF.data[0] = A_UNITE(JLOAOSF,mode7,7,KLOAOSF);
MLOAOSF.fn.fn_global = PKDAOSF_newline;
MLOAOSF.nonlocals = A68_NIL;
GLOAOSF.data[1] = A_UNITE(LLOAOSF,mode12,12,MLOAOSF);
 /* line 1024: */
 /* line 1025: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(NLOAOSF,GLOAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  GMOAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 1032: */
IELAOSF_io_showinput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  ZMOAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 1040: */
OELAOSF_io_showoutput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  QNOAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 1048: */
 /* line 1049: */
ZYIAOSF_syntax_help((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals))), DREAOSF_screen, IHDAOSF_nullstr, A68_FALSE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  MOOAOSF_anonymous(A68_206  V, A68_97  Msg)
{ 
 /* line 1057: */
 /* line 1058: */
EYGAOSF_set_var(GOLAOSF_showtime_var, RUGAOSF_true_var, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  LOLAOSF_anonymous(void)
{ 
/*SKIP*/;
return;
} 
#undef NL

A_STATIC A68_INT  SOLAOSF_opt_int(A68_206  V, A68_97  Msg)
{ 
A68_INT  TOLAOSF;  /* YIELD */
A68_INT  UOLAOSF;  /* clause result */
A68_INT  VOLAOSF;  /* YIELD */
A_PROC_ENTRY(opt_int);
 /* line 81: */
TOLAOSF = 1 ;
if ( ZTJAOSF_is_int((*(&A_VINDEX(V,TOLAOSF)))) )
{ 
VOLAOSF = 1 ;
UOLAOSF = DUJAOSF_get_int((*(&A_VINDEX(V,VOLAOSF))), Msg);
} 
else
{ 
UOLAOSF = 0;
} 
A_PROC_EXIT(opt_int);
return( UOLAOSF );
} 
#undef NL

A_STATIC A68_VOID  ZOLAOSF_type_more(A68_BOOL  Reset_paging, A68_117 * F, A68_97  Msg)
{ 
A68_97  DPLAOSF_flt;   /* proc value of non-global proc */
A68_291  GPLAOSF;  /* collateral clause result */
A68_52  JPLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KPLAOSF;  /* YIELD */
A68_VC  LPLAOSF;  /* avoid structure result */
A68_52  MPLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  PPLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QPLAOSF;  /* YIELD */
A68_64  RPLAOSF;  /* avoid structure result */
A68_52  SPLAOSF;  /* OPERATORS - mode -> union mode */
A68_85  TPLAOSF;  /* OPERATORS - istruct -> vector */
A68_31  VPLAOSF_generator;   /* proc value of non-global proc */
A68_VC  BQLAOSF;  /* avoid structure result */
A68_VC  AQLAOSF_buffer;
A68_INT  CQLAOSF_l;
A68_35  DQLAOSF;  /* avoid structure result */
A68_35  EQLAOSF_r;
A68_VC  FQLAOSF;  /* OPERATORS - trim index */
A68_BOOL  GQLAOSF;  /* clause result */
A68_VC  HQLAOSF;  /* OPERATORS - trim index */
A68_46  KQLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  LQLAOSF;  /* clause result */
A_PROC_ENTRY(type_more);
 /* line 84: */
 /* line 85: */
{ 
A_CLOSURE( DPLAOSF_flt, EPLAOSF_flt, FPLAOSF_flt );
(( FPLAOSF_flt * ) ( DPLAOSF_flt.nonlocals )) -> Reset_paging = Reset_paging;
(( FPLAOSF_flt * ) ( DPLAOSF_flt.nonlocals )) -> Msg = Msg;
(( FPLAOSF_flt * ) ( DPLAOSF_flt.nonlocals )) -> F = F;
 /* line 91: */
KPLAOSF = IPLAOSF ;
GPLAOSF.data[0] = A_UNITE(JPLAOSF,mode7,7,KPLAOSF);
WEHAOSF_testmode_file_name( F, &LPLAOSF );
GPLAOSF.data[1] = A_UNITE(MPLAOSF,mode7,7,LPLAOSF);
QPLAOSF = OPLAOSF ;
GPLAOSF.data[2] = A_UNITE(PPLAOSF,mode7,7,QPLAOSF);
LSDAOSF_lines( 2, &RPLAOSF );
GPLAOSF.data[3] = A_UNITE(SPLAOSF,mode20,20,RPLAOSF);
KYDAOSF_put(DREAOSF_screen, A_HISVEC(TPLAOSF,GPLAOSF,4,A68_52 ));
 /* line 92: */
A_CLOSURE( VPLAOSF_generator, WPLAOSF_generator, XPLAOSF_generator );
A_CALLPROC(VPLAOSF_generator,(A68_TRUE, &BQLAOSF),(A68_TRUE, &BQLAOSF,(VPLAOSF_generator).nonlocals));
AQLAOSF_buffer = BQLAOSF;
 /* line 93: */
 /* line 94: */
for ( ;; )
{ 
 /* line 95: */
LBFAOSF_flt_if_interrupted(DPLAOSF_flt);
 /* line 96: */
DXBAOSF_read_line( F, AQLAOSF_buffer, (&CQLAOSF_l), DPLAOSF_flt, &DQLAOSF );
EQLAOSF_r = DQLAOSF;
 /* line 97: */
 /* line 98: */
if ( AVBAOSF_(EQLAOSF_r, OUBAOSF_io_ok) )
{ 
KTDAOSF_putstr(DREAOSF_screen, A_VTRIM(FQLAOSF,(AQLAOSF_buffer),A_VTSCRIPT(&(FQLAOSF.upb),(AQLAOSF_buffer).upb,1,CQLAOSF_l)));
 /* line 99: */
PKDAOSF_newline(DREAOSF_screen);
 /* line 100: */
 /* line 101: */
GQLAOSF = A68_TRUE;
} 
else
{ 
 /* line 102: */
if ( AVBAOSF_(EQLAOSF_r, ZPEAOSF_io_partline) )
{ 
KTDAOSF_putstr(DREAOSF_screen, A_VTRIM(HQLAOSF,(AQLAOSF_buffer),A_VTSCRIPT(&(HQLAOSF.upb),(AQLAOSF_buffer).upb,1,CQLAOSF_l)));
 /* line 103: */
 /* line 104: */
GQLAOSF = A68_TRUE;
} 
else
{ 
 /* line 105: */
if ( AVBAOSF_(EQLAOSF_r, RUBAOSF_io_eof) )
{ 
 /* line 106: */
GQLAOSF = A68_FALSE;
} 
else
{ 
A_CALLPROC(DPLAOSF_flt,(MUAAOSF_user, A_HVEC(KQLAOSF,JQLAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(KQLAOSF,JQLAOSF,A68_VC ),(DPLAOSF_flt).nonlocals));
 /* line 107: */
 /* line 108: */
 /* line 109: */
GQLAOSF = A68_FALSE;
} 
} 
} 
LQLAOSF = GQLAOSF;
if ( !LQLAOSF ) break;
/*SKIP*/;
}
 /* line 110: */
 /* line 111: */
IWBAOSF_close_file(F, Msg);
} 
A_PROC_EXIT(type_more);
return;
} 
#undef NL

A_STATIC A68_VOID  PQLAOSF_set_showtime(A68_190  Var, A68_BOOL  Changed, A68_97  Msg)
{ 
A_PROC_ENTRY(set_showtime);
 /* line 115: */
 /* line 116: */
if ( A_VC_EQ(Var.Value,RUGAOSF_true_var) )
{ 
 /* line 117: */
UELAOSF_io_showtime(Msg);
} 
else
{ 
 /* line 118: */
XELAOSF_io_dontshowtime(Msg);
} 
A_PROC_EXIT(set_showtime);
return;
} 
#undef NL

A_STATIC A68_VOID  QQLAOSF_when(A68_VC  *ReturnedValue)
{ 
A68_VC  RQLAOSF;  /* avoid structure result */
A68_VC  SQLAOSF_dt;
A68_VC  TQLAOSF;  /* clause result */
A68_VC  UQLAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(when);
{ 
JQHAOSF_date_time( (A68_INT )VPBAOSF_get_time(), &RQLAOSF );
SQLAOSF_dt = RQLAOSF;
 /* line 124: */
if ( (SQLAOSF_dt.upb==21) )
{ 
TQLAOSF = A_VTRIM(UQLAOSF,(SQLAOSF_dt),A_VTSCRIPT(&(UQLAOSF.upb),(SQLAOSF_dt).upb,1,18));
} 
else
{ 
 /* line 125: */
TQLAOSF = SQLAOSF_dt;
} 
} 
A_PROC_EXIT(when);
*ReturnedValue = (TQLAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VQLAOSF_print_configuration(void)
{ 
A68_294  WQLAOSF;  /* collateral clause result */
A68_52  ZQLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ARLAOSF;  /* YIELD */
A68_64  BRLAOSF;  /* avoid structure result */
A68_52  CRLAOSF;  /* OPERATORS - mode -> union mode */
A68_85  DRLAOSF;  /* OPERATORS - istruct -> vector */
A68_36  KSLAOSF;  /* procedure value */
A_PROC_ENTRY(print_configuration);
{ 
ARLAOSF = YQLAOSF ;
WQLAOSF.data[0] = A_UNITE(ZQLAOSF,mode7,7,ARLAOSF);
LSDAOSF_lines( 2, &BRLAOSF );
WQLAOSF.data[1] = A_UNITE(CRLAOSF,mode20,20,BRLAOSF);
KYDAOSF_put(EREAOSF_out, A_HISVEC(DRLAOSF,WQLAOSF,2,A68_52 ));
 /* line 132: */
 /* line 149: */
 /* line 150: */
KSLAOSF.fn.fn_global = GRLAOSF_printer;
KSLAOSF.nonlocals = A68_NIL;
JGAALIB_show_a68config(KSLAOSF);
} 
A_PROC_EXIT(print_configuration);
return;
} 
#undef NL

A_STATIC A68_VOID  LSLAOSF_current_context(A68_VC  *ReturnedValue)
{ 
A68_VC  MSLAOSF;  /* clause result */
A_PROC_ENTRY(current_context);
MSLAOSF = (*(&((*(&((*(&((*A_CALLPROC(OOLAOSF_commandenv,(),((OOLAOSF_commandenv).nonlocals)))->Stack)))->Current_context)))->Context)));
A_PROC_EXIT(current_context);
*ReturnedValue = (MSLAOSF);
return;
} 
#undef NL

A_STATIC A68_INT  PSLAOSF_obey_command(A68_VC  Command, A68_97  Msg)
{ 
A68_97  TSLAOSF_new_msg;   /* proc value of non-global proc */
A68_297  YSLAOSF;  /* collateral clause result */
A68_46  BTLAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CTLAOSF;  /* avoid structure result */
A68_INT  DTLAOSF_return;
A68_VC  ETLAOSF;  /* avoid structure result */
A68_INT  FTLAOSF;  /* clause result */
A_PROC_ENTRY(obey_command);
 /* line 157: */
 /* line 158: */
{ 
A_CLOSURE( TSLAOSF_new_msg, USLAOSF_new_msg, VSLAOSF_new_msg );
(( VSLAOSF_new_msg * ) ( TSLAOSF_new_msg.nonlocals )) -> Msg = Msg;
 /* line 163: */
if ( (Command.upb==0) )
{ 
YSLAOSF.data[0] = XUEAOSF_os_string;
YSLAOSF.data[1] = ATLAOSF;
 /* line 164: */
JDAAOSF_concat( A_HISVEC(BTLAOSF,YSLAOSF,2,A68_VC ), &CTLAOSF );
LALAOSF_banner(CTLAOSF);
} 
else
{ 
 /* line 165: */
LALAOSF_banner(Command);
} 
 /* line 166: */
PKDAOSF_newline(DREAOSF_screen);
 /* line 168: */
DTLAOSF_return = HQBAOSF_execute_os_command(Command, TSLAOSF_new_msg);
 /* line 169: */
LSLAOSF_current_context(  &ETLAOSF );
LALAOSF_banner(ETLAOSF);
 /* line 170: */
 /* line 171: */
FTLAOSF = DTLAOSF_return;
} 
A_PROC_EXIT(obey_command);
return( FTLAOSF );
} 
#undef NL

A68_VOID  ITLAOSF_add_globals_to_compounds(A68_211  Globals, A68_211  Vec_with_commands)
{ 
A68_299 * KTLAOSF_list;
A68_300  MTLAOSF_new;   /* proc value of non-global proc */
A68_301  WTLAOSF_add;   /* proc value of non-global proc */
A_PROC_ENTRY(add_globals_to_compounds);
 /* line 177: */
 /* line 184: */
{ 
 /* line 185: */
KTLAOSF_list = (A68_299 *)A68_NIL;
 /* line 187: */
A_CLOSURE( MTLAOSF_new, NTLAOSF_new, OTLAOSF_new );
(( OTLAOSF_new * ) ( MTLAOSF_new.nonlocals )) -> KTLAOSF_list = (&KTLAOSF_list);
 /* line 197: */
A_CLOSURE( WTLAOSF_add, XTLAOSF_add, YTLAOSF_add );
(( YTLAOSF_add * ) ( WTLAOSF_add.nonlocals )) -> WTLAOSF_add = WTLAOSF_add;
(( YTLAOSF_add * ) ( WTLAOSF_add.nonlocals )) -> MTLAOSF_new = MTLAOSF_new;
(( YTLAOSF_add * ) ( WTLAOSF_add.nonlocals )) -> Globals = Globals;
 /* line 211: */
 /* line 212: */
A_CALLPROC(WTLAOSF_add,(Vec_with_commands),(Vec_with_commands,(WTLAOSF_add).nonlocals));
} 
A_PROC_EXIT(add_globals_to_compounds);
return;
} 
#undef NL

A68_INT  IULAOSF_find_command(A68_VC  Name, A68_VC  Abreviation, A68_211  Vec)
{ 
A68_INT  JULAOSF_index;
A68_207 * KULAOSF_command;
A68_INT  LULAOSF;  /* forall loop counter */
A68_207  MULAOSF;  /* united object - for case conformity */
A68_208 * NULAOSF_s;
A68_208 * OULAOSF;  /* clause result */
A68_209 * PULAOSF_g;
A68_210 * QULAOSF_c;
A68_208 * RULAOSF_prelude;
A68_BOOL  SULAOSF;  /* optbool result */
A68_INT  TULAOSF;  /* clause result */
A_PROC_ENTRY(find_command);
 /* line 216: */
 /* line 217: */
{ 
JULAOSF_index = 0;
 /* line 218: */
LULAOSF = Vec.upb -1;
KULAOSF_command = Vec.data;
for (;LULAOSF-- >= 0;
(KULAOSF_command++
) )
{
 /* line 219: */
if ( !(((JULAOSF_index-=1)<0)) ) break;
MULAOSF = (*KULAOSF_command) ;
switch ( MULAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE212,MODE196,MODE195,MODE213,MODE203)  */
NULAOSF_s = (MULAOSF.data.mode1);
 /* line 220: */
OULAOSF = NULAOSF_s;
break;
case 2: /* REF STRUCT(REF MODE208,REF MODE211)  */
PULAOSF_g = (MULAOSF.data.mode2);
 /* line 221: */
OULAOSF = (*(&(PULAOSF_g->Group)));
break;
case 3: /* REF STRUCT(REF MODE208,REF MODE26,REF REF MODE26,REF MODE211,REF MODE211,REF MODE208)  */
QULAOSF_c = (MULAOSF.data.mode3);
 /* line 222: */
OULAOSF = (*(&(QULAOSF_c->Prelude)));
break;
default: 
A_IMP_SKIP ;
break;
} 
RULAOSF_prelude = OULAOSF;
 /* line 223: */
SULAOSF = A_VC_EQ(Name,(*(&(RULAOSF_prelude->Name))));
if ( SULAOSF )
{ /* line 224: */
SULAOSF = A_VC_EQ(Abreviation,(*(&(RULAOSF_prelude->Abreviation))));
}
if ( SULAOSF )
{ 
 /* line 225: */
 /* line 226: */
JULAOSF_index = (-JULAOSF_index);
} 
}
 /* line 227: */
if ( (JULAOSF_index<0) )
{ 
TULAOSF = 0;
} 
else
{ 
 /* line 228: */
TULAOSF = JULAOSF_index;
} 
} 
A_PROC_EXIT(find_command);
return( TULAOSF );
} 
#undef NL

A_STATIC A68_VOID  XULAOSF_withdrawn_proc(A68_VC  Str, A68_199  Param, A68_97  Msg)
{ 
A68_46  YULAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(withdrawn_proc);
 /* line 234: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(YULAOSF,Str,A68_VC )),(MUAAOSF_user, A_HVEC(YULAOSF,Str,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(withdrawn_proc);
return;
} 
#undef NL

A68_208 * CVLAOSF_withdrawn(A68_VC  Old, A68_VC  Old_abr, A68_VC  New)
{ 
A68_305  DVLAOSF;  /* collateral clause result */
A68_VC  GVLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  HVLAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  IVLAOSF;  /* avoid structure result */
A68_VC  JVLAOSF_new_name;
A68_297  KVLAOSF;  /* collateral clause result */
A68_46  PVLAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  QVLAOSF;  /* avoid structure result */
A68_VC  RVLAOSF_message;
A68_208  SVLAOSF;  /* collateral clause result */
A68_VC  TVLAOSF;  /* avoid structure result */
A68_VC  UVLAOSF;  /* avoid structure result */
A68_215  VVLAOSF;  /* avoid structure result */
A68_212  WVLAOSF;  /* OPERATORS - mode -> union mode */
A68_213  XVLAOSF;  /* OPERATORS - mode -> union mode */
A68_197  YVLAOSF;  /* collateral clause result */
A68_198  ZVLAOSF;  /* procedure value */
A68_203  AWLAOSF;  /* OPERATORS - mode -> union mode */
A68_208 * BWLAOSF;  /* clause result */
A68_208 * CWLAOSF;  /* YIELD */
A_PROC_ENTRY(withdrawn);
 /* line 238: */
 /* line 242: */
{ 
DVLAOSF.data[0] = FVLAOSF;
DVLAOSF.data[1] = New;
DVLAOSF.data[2] = A_HVEC(GVLAOSF,'\"',A68_CHAR );
JDAAOSF_concat( A_HISVEC(HVLAOSF,DVLAOSF,3,A68_VC ), &IVLAOSF );
JVLAOSF_new_name = IVLAOSF;
 /* line 243: */
 /* line 244: */
KVLAOSF.data[0] = MVLAOSF;
if ( (New.upb==0) )
{ 
KVLAOSF.data[1] = OVLAOSF;
} 
else
{ 
KVLAOSF.data[1] = JVLAOSF_new_name;
} 
JDAAOSF_concat( A_HISVEC(PVLAOSF,KVLAOSF,2,A68_VC ), &QVLAOSF );
RVLAOSF_message = QVLAOSF;
 /* line 245: */
 /* line 246: */
ZCAAOSF_makervc( Old, &TVLAOSF );
SVLAOSF.Name = TVLAOSF;
ZCAAOSF_makervc( Old_abr, &UVLAOSF );
SVLAOSF.Abreviation = UVLAOSF;
 /* line 247: */
EGFAOSF_opt( BBKAOSF_text_syntax, &VVLAOSF );
SVLAOSF.Parameter = A_UNITE(WVLAOSF,mode2,2,VVLAOSF);
SVLAOSF.Access = UZHAOSF_hiddenaccess;
SVLAOSF.Continuation = SAIAOSF_continue;
 /* line 248: */
SVLAOSF.Help = A_UNITE(XVLAOSF,mode1,1,RVLAOSF_message);
YVLAOSF.Parameter = RVLAOSF_message;
 /* line 249: */
ZVLAOSF.fn.fn_global = XULAOSF_withdrawn_proc;
ZVLAOSF.nonlocals = A68_NIL;
YVLAOSF.Proc = ZVLAOSF;
 /* line 250: */
SVLAOSF.Command = A_UNITE(AWLAOSF,mode1,1,YVLAOSF);
CWLAOSF = A_HEAP(A68_208 ) ;
(*CWLAOSF) = SVLAOSF ;
BWLAOSF = CWLAOSF;
} 
A_PROC_EXIT(withdrawn);
return( BWLAOSF );
} 
#undef NL
 /* line 256: */
 /* line 257: */
 /* line 259: */

A68_VOID  HWLAOSF_make_globalcommands(A68_VC  Sysdir_varname, A68_VC  Default_edit_type, A68_148  Printissue, A68_286  Commandenv_proc, A68_211  *ReturnedValue)
{ 
A68_VC  IWLAOSF;  /* avoid structure result */
A68_VC  JWLAOSF;  /* avoid structure result */
A68_191  MWLAOSF;  /* procedure value */
A68_191  NWLAOSF;  /* procedure value */
A68_191  OWLAOSF;  /* procedure value */
A68_BOOL  PWLAOSF_not_failed;
A68_97  SWLAOSF_new_msg;   /* proc value of non-global proc */
A68_VC  WWLAOSF;  /* avoid structure result */
A68_VC  XWLAOSF_dir;
A68_297  YWLAOSF;  /* collateral clause result */
A68_46  BXLAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CXLAOSF;  /* avoid structure result */
A68_VC  DXLAOSF_fname;
A68_117 * EXLAOSF_lf;
A68_308  FXLAOSF_buffer;
A68_309  GXLAOSF;  /* collateral clause result */
A68_VC  HXLAOSF;  /* avoid structure result */
A68_52  IXLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  LXLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MXLAOSF;  /* YIELD */
A68_153  NXLAOSF;  /* avoid structure result */
A68_52  OXLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  PXLAOSF;  /* YIELD */
A68_62  QXLAOSF;  /* avoid structure result */
A68_52  RXLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  UXLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VXLAOSF;  /* YIELD */
A68_VC  WXLAOSF;  /* avoid structure result */
A68_52  XXLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  YXLAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZXLAOSF;  /* YIELD */
A68_62  AYLAOSF;  /* avoid structure result */
A68_52  BYLAOSF;  /* OPERATORS - mode -> union mode */
A68_153  CYLAOSF;  /* avoid structure result */
A68_52  DYLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EYLAOSF;  /* YIELD */
A68_52  HYLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  IYLAOSF;  /* YIELD */
A68_153  JYLAOSF;  /* avoid structure result */
A68_52  KYLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LYLAOSF;  /* YIELD */
A68_52  MYLAOSF;  /* OPERATORS - mode -> union mode */
A68_85  NYLAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  OYLAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  PYLAOSF;  /* avoid structure result */
A68_VC  QYLAOSF_line;
A68_35  RYLAOSF;  /* avoid structure result */
A68_310  EZLAOSF_rr;   /* proc value of non-global proc */
A68_175  TZLAOSF_pchars;   /* proc value of non-global proc */
A68_386  JAMAOSF;  /* collateral clause result */
A68_208  KAMAOSF;  /* collateral clause result */
A68_VC  NAMAOSF;  /* avoid structure result */
A68_VC  QAMAOSF;  /* avoid structure result */
A68_VC  TAMAOSF;  /* avoid structure result */
A68_213  UAMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  JBMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  KBMAOSF;  /* YIELD */
A68_205  LBMAOSF;  /* procedure value */
A68_208 * MBMAOSF;  /* YIELD */
A68_207  NBMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  PBMAOSF;  /* collateral clause result */
A68_VC  SBMAOSF;  /* avoid structure result */
A68_VC  VBMAOSF;  /* avoid structure result */
A68_213  WBMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  ACMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  BCMAOSF;  /* YIELD */
A68_205  CCMAOSF;  /* procedure value */
A68_208 * DCMAOSF;  /* YIELD */
A68_207  ECMAOSF;  /* OPERATORS - mode -> union mode */
A68_211  FCMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GCMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_207  ICMAOSF;  /* OPERATORS - mode -> union mode */
A68_209 * JCMAOSF;  /* YIELD */
A68_208  KCMAOSF;  /* collateral clause result */
A68_VC  NCMAOSF;  /* avoid structure result */
A68_VC  QCMAOSF;  /* avoid structure result */
A68_215  RCMAOSF;  /* avoid structure result */
A68_212  SCMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VCMAOSF;  /* avoid structure result */
A68_213  WCMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  DDMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  EDMAOSF;  /* YIELD */
A68_205  FDMAOSF;  /* procedure value */
A68_208 * GDMAOSF;  /* YIELD */
A68_207  HDMAOSF;  /* OPERATORS - mode -> union mode */
A68_323  JDMAOSF;  /* collateral clause result */
A68_208  KDMAOSF;  /* collateral clause result */
A68_VC  NDMAOSF;  /* avoid structure result */
A68_VC  QDMAOSF;  /* avoid structure result */
A68_213  RDMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  ZDMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  AEMAOSF;  /* YIELD */
A68_205  BEMAOSF;  /* procedure value */
A68_208 * CEMAOSF;  /* YIELD */
A68_207  DEMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  EEMAOSF;  /* collateral clause result */
A68_VC  HEMAOSF;  /* avoid structure result */
A68_VC  IEMAOSF;  /* avoid structure result */
A68_VC  LEMAOSF;  /* avoid structure result */
A68_213  MEMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  MFMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  NFMAOSF;  /* YIELD */
A68_205  OFMAOSF;  /* procedure value */
A68_208 * PFMAOSF;  /* YIELD */
A68_207  QFMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  RFMAOSF;  /* collateral clause result */
A68_VC  UFMAOSF;  /* avoid structure result */
A68_VC  VFMAOSF;  /* avoid structure result */
A68_VC  YFMAOSF;  /* avoid structure result */
A68_213  ZFMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  MGMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  NGMAOSF;  /* YIELD */
A68_205  OGMAOSF;  /* procedure value */
A68_208 * PGMAOSF;  /* YIELD */
A68_207  QGMAOSF;  /* OPERATORS - mode -> union mode */
A68_211  RGMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  SGMAOSF;  /* avoid structure result */
A68_VC  UGMAOSF;  /* avoid structure result */
A68_207  VGMAOSF;  /* OPERATORS - mode -> union mode */
A68_209 * WGMAOSF;  /* YIELD */
A68_334  YGMAOSF;  /* collateral clause result */
A68_208  ZGMAOSF;  /* collateral clause result */
A68_VC  CHMAOSF;  /* avoid structure result */
A68_VC  FHMAOSF;  /* avoid structure result */
A68_VC  IHMAOSF;  /* avoid structure result */
A68_213  JHMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  EIMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  FIMAOSF;  /* YIELD */
A68_205  GIMAOSF;  /* procedure value */
A68_208 * HIMAOSF;  /* YIELD */
A68_207  IIMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  JIMAOSF;  /* collateral clause result */
A68_VC  MIMAOSF;  /* avoid structure result */
A68_VC  PIMAOSF;  /* avoid structure result */
A68_VC  SIMAOSF;  /* avoid structure result */
A68_213  TIMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  XIMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  YIMAOSF;  /* YIELD */
A68_205  ZIMAOSF;  /* procedure value */
A68_208 * AJMAOSF;  /* YIELD */
A68_207  BJMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  CJMAOSF;  /* collateral clause result */
A68_VC  FJMAOSF;  /* avoid structure result */
A68_VC  IJMAOSF;  /* avoid structure result */
A68_VC  LJMAOSF;  /* avoid structure result */
A68_213  MJMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  QJMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  RJMAOSF;  /* YIELD */
A68_205  SJMAOSF;  /* procedure value */
A68_208 * TJMAOSF;  /* YIELD */
A68_207  UJMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  VJMAOSF;  /* collateral clause result */
A68_VC  YJMAOSF;  /* avoid structure result */
A68_VC  BKMAOSF;  /* avoid structure result */
A68_VC  EKMAOSF;  /* avoid structure result */
A68_213  FKMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  RKMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  SKMAOSF;  /* YIELD */
A68_205  TKMAOSF;  /* procedure value */
A68_208 * UKMAOSF;  /* YIELD */
A68_207  VKMAOSF;  /* OPERATORS - mode -> union mode */
A68_323  XKMAOSF;  /* collateral clause result */
A68_208  YKMAOSF;  /* collateral clause result */
A68_VC  BLMAOSF;  /* avoid structure result */
A68_VC  ELMAOSF;  /* avoid structure result */
A68_VC  HLMAOSF;  /* avoid structure result */
A68_213  ILMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  MLMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  NLMAOSF;  /* YIELD */
A68_205  OLMAOSF;  /* procedure value */
A68_208 * PLMAOSF;  /* YIELD */
A68_207  QLMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  RLMAOSF;  /* collateral clause result */
A68_VC  ULMAOSF;  /* avoid structure result */
A68_VC  XLMAOSF;  /* avoid structure result */
A68_VC  AMMAOSF;  /* avoid structure result */
A68_213  BMMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  FMMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  GMMAOSF;  /* YIELD */
A68_205  HMMAOSF;  /* procedure value */
A68_208 * IMMAOSF;  /* YIELD */
A68_207  JMMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  KMMAOSF;  /* collateral clause result */
A68_VC  NMMAOSF;  /* avoid structure result */
A68_VC  OMMAOSF;  /* avoid structure result */
A68_305  PMMAOSF;  /* collateral clause result */
A68_VC  SMMAOSF;  /* avoid structure result */
A68_46  VMMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WMMAOSF;  /* avoid structure result */
A68_213  XMMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  BNMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  CNMAOSF;  /* YIELD */
A68_205  DNMAOSF;  /* procedure value */
A68_208 * ENMAOSF;  /* YIELD */
A68_207  FNMAOSF;  /* OPERATORS - mode -> union mode */
A68_211  GNMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  HNMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_207  JNMAOSF;  /* OPERATORS - mode -> union mode */
A68_209 * KNMAOSF;  /* YIELD */
A68_208  LNMAOSF;  /* collateral clause result */
A68_VC  ONMAOSF;  /* avoid structure result */
A68_VC  RNMAOSF;  /* avoid structure result */
A68_VC  UNMAOSF;  /* avoid structure result */
A68_213  VNMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  ZNMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  AOMAOSF;  /* YIELD */
A68_205  BOMAOSF;  /* procedure value */
A68_208 * COMAOSF;  /* YIELD */
A68_207  DOMAOSF;  /* OPERATORS - mode -> union mode */
A68_211  EOMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  FOMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_207  HOMAOSF;  /* OPERATORS - mode -> union mode */
A68_209 * IOMAOSF;  /* YIELD */
A68_208  JOMAOSF;  /* collateral clause result */
A68_VC  MOMAOSF;  /* avoid structure result */
A68_VC  POMAOSF;  /* avoid structure result */
A68_305  QOMAOSF;  /* collateral clause result */
A68_VC  TOMAOSF;  /* avoid structure result */
A68_46  WOMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  XOMAOSF;  /* avoid structure result */
A68_213  YOMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  UPMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  VPMAOSF;  /* YIELD */
A68_205  WPMAOSF;  /* procedure value */
A68_208 * XPMAOSF;  /* YIELD */
A68_207  YPMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  ZPMAOSF;  /* collateral clause result */
A68_VC  CQMAOSF;  /* avoid structure result */
A68_213  IRMAOSF;  /* OPERATORS - mode -> union mode */
A68_214  JRMAOSF;  /* YIELD */
A68_214  KRMAOSF;  /* procedure value */
A68_203  YRMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  ZRMAOSF;  /* YIELD */
A68_205  ASMAOSF;  /* procedure value */
A68_208 * BSMAOSF;  /* YIELD */
A68_207  CSMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  DSMAOSF;  /* collateral clause result */
A68_VC  GSMAOSF;  /* avoid structure result */
A68_VC  JSMAOSF;  /* avoid structure result */
A68_VC  MSMAOSF;  /* avoid structure result */
A68_213  NSMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  TTMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  UTMAOSF;  /* YIELD */
A68_205  VTMAOSF;  /* procedure value */
A68_208 * WTMAOSF;  /* YIELD */
A68_207  XTMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  YTMAOSF;  /* collateral clause result */
A68_VC  BUMAOSF;  /* avoid structure result */
A68_VC  CUMAOSF;  /* avoid structure result */
A68_215  DUMAOSF;  /* avoid structure result */
A68_212  EUMAOSF;  /* OPERATORS - mode -> union mode */
A68_215  FUMAOSF;  /* avoid structure result */
A68_212  GUMAOSF;  /* OPERATORS - mode -> union mode */
A68_213  CVMAOSF;  /* OPERATORS - mode -> union mode */
A68_214  DVMAOSF;  /* YIELD */
A68_214  EVMAOSF;  /* procedure value */
A68_203  MVMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  NVMAOSF;  /* YIELD */
A68_205  OVMAOSF;  /* procedure value */
A68_208 * PVMAOSF;  /* YIELD */
A68_207  QVMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  RVMAOSF;  /* collateral clause result */
A68_VC  UVMAOSF;  /* avoid structure result */
A68_VC  XVMAOSF;  /* avoid structure result */
A68_215  YVMAOSF;  /* avoid structure result */
A68_212  ZVMAOSF;  /* OPERATORS - mode -> union mode */
A68_215  AWMAOSF;  /* avoid structure result */
A68_212  BWMAOSF;  /* OPERATORS - mode -> union mode */
A68_305  CWMAOSF;  /* collateral clause result */
A68_VC  FWMAOSF;  /* avoid structure result */
A68_46  IWMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  JWMAOSF;  /* avoid structure result */
A68_213  KWMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  ZWMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  AXMAOSF;  /* YIELD */
A68_205  BXMAOSF;  /* procedure value */
A68_208 * CXMAOSF;  /* YIELD */
A68_207  DXMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  EXMAOSF;  /* collateral clause result */
A68_VC  HXMAOSF;  /* avoid structure result */
A68_VC  KXMAOSF;  /* avoid structure result */
A68_213  LXMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  YXMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  ZXMAOSF;  /* YIELD */
A68_205  AYMAOSF;  /* procedure value */
A68_208 * BYMAOSF;  /* YIELD */
A68_207  CYMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  DYMAOSF;  /* collateral clause result */
A68_VC  GYMAOSF;  /* avoid structure result */
A68_VC  JYMAOSF;  /* avoid structure result */
A68_VC  MYMAOSF;  /* avoid structure result */
A68_213  NYMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  TYMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  UYMAOSF;  /* YIELD */
A68_205  VYMAOSF;  /* procedure value */
A68_208 * WYMAOSF;  /* YIELD */
A68_207  XYMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  YYMAOSF;  /* collateral clause result */
A68_VC  BZMAOSF;  /* avoid structure result */
A68_VC  EZMAOSF;  /* avoid structure result */
A68_213  FZMAOSF;  /* OPERATORS - mode -> union mode */
A68_203  LZMAOSF;  /* OPERATORS - mode -> union mode */
A68_205  MZMAOSF;  /* YIELD */
A68_205  NZMAOSF;  /* procedure value */
A68_208 * OZMAOSF;  /* YIELD */
A68_207  PZMAOSF;  /* OPERATORS - mode -> union mode */
A68_208  QZMAOSF;  /* collateral clause result */
A68_VC  TZMAOSF;  /* avoid structure result */
A68_VC  WZMAOSF;  /* avoid structure result */
A68_215  XZMAOSF;  /* avoid structure result */
A68_212  YZMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BANAOSF;  /* avoid structure result */
A68_213  CANAOSF;  /* OPERATORS - mode -> union mode */
A68_203  JANAOSF;  /* OPERATORS - mode -> union mode */
A68_205  KANAOSF;  /* YIELD */
A68_205  LANAOSF;  /* procedure value */
A68_208 * MANAOSF;  /* YIELD */
A68_207  NANAOSF;  /* OPERATORS - mode -> union mode */
A68_208  OANAOSF;  /* collateral clause result */
A68_VC  RANAOSF;  /* avoid structure result */
A68_VC  UANAOSF;  /* avoid structure result */
A68_VC  XANAOSF;  /* avoid structure result */
A68_213  YANAOSF;  /* OPERATORS - mode -> union mode */
A68_203  KBNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  LBNAOSF;  /* YIELD */
A68_205  MBNAOSF;  /* procedure value */
A68_208 * NBNAOSF;  /* YIELD */
A68_207  OBNAOSF;  /* OPERATORS - mode -> union mode */
A68_208  PBNAOSF;  /* collateral clause result */
A68_VC  SBNAOSF;  /* avoid structure result */
A68_353  TBNAOSF;  /* collateral clause result */
A68_215  UBNAOSF;  /* avoid structure result */
A68_212  VBNAOSF;  /* OPERATORS - mode -> union mode */
A68_216  WBNAOSF;  /* OPERATORS - istruct -> vector */
A68_215  XBNAOSF;  /* avoid structure result */
A68_212  YBNAOSF;  /* OPERATORS - mode -> union mode */
A68_356  ZBNAOSF;  /* collateral clause result */
A68_52  CCNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  DCNAOSF;  /* YIELD */
A68_52  ECNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  HCNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ICNAOSF;  /* YIELD */
A68_52  JCNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  MCNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  NCNAOSF;  /* YIELD */
A68_85  OCNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  PCNAOSF;  /* avoid structure result */
A68_213  QCNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  CDNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  DDNAOSF;  /* YIELD */
A68_205  EDNAOSF;  /* procedure value */
A68_208 * FDNAOSF;  /* YIELD */
A68_207  GDNAOSF;  /* OPERATORS - mode -> union mode */
A68_208  HDNAOSF;  /* collateral clause result */
A68_VC  KDNAOSF;  /* avoid structure result */
A68_VC  LDNAOSF;  /* avoid structure result */
A68_215  MDNAOSF;  /* avoid structure result */
A68_212  NDNAOSF;  /* OPERATORS - mode -> union mode */
A68_358  ODNAOSF;  /* collateral clause result */
A68_VC  RDNAOSF;  /* avoid structure result */
A68_VC  YDNAOSF;  /* avoid structure result */
A68_46  BENAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CENAOSF;  /* avoid structure result */
A68_213  DENAOSF;  /* OPERATORS - mode -> union mode */
A68_203  IENAOSF;  /* OPERATORS - mode -> union mode */
A68_205  JENAOSF;  /* YIELD */
A68_205  KENAOSF;  /* procedure value */
A68_208 * LENAOSF;  /* YIELD */
A68_207  MENAOSF;  /* OPERATORS - mode -> union mode */
A68_208  NENAOSF;  /* collateral clause result */
A68_VC  QENAOSF;  /* avoid structure result */
A68_VC  RENAOSF;  /* avoid structure result */
A68_215  SENAOSF;  /* avoid structure result */
A68_212  TENAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  WENAOSF;  /* avoid structure result */
A68_213  XENAOSF;  /* OPERATORS - mode -> union mode */
A68_203  CFNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  DFNAOSF;  /* YIELD */
A68_205  EFNAOSF;  /* procedure value */
A68_208 * FFNAOSF;  /* YIELD */
A68_207  GFNAOSF;  /* OPERATORS - mode -> union mode */
A68_208  HFNAOSF;  /* collateral clause result */
A68_VC  KFNAOSF;  /* avoid structure result */
A68_VC  NFNAOSF;  /* avoid structure result */
A68_VC  QFNAOSF;  /* avoid structure result */
A68_213  RFNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  VFNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  WFNAOSF;  /* YIELD */
A68_205  XFNAOSF;  /* procedure value */
A68_208 * YFNAOSF;  /* YIELD */
A68_207  ZFNAOSF;  /* OPERATORS - mode -> union mode */
A68_208  AGNAOSF;  /* collateral clause result */
A68_VC  DGNAOSF;  /* avoid structure result */
A68_VC  GGNAOSF;  /* avoid structure result */
A68_VC  JGNAOSF;  /* avoid structure result */
A68_213  KGNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  OGNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  PGNAOSF;  /* YIELD */
A68_205  QGNAOSF;  /* procedure value */
A68_208 * RGNAOSF;  /* YIELD */
A68_207  SGNAOSF;  /* OPERATORS - mode -> union mode */
A68_208  TGNAOSF;  /* collateral clause result */
A68_VC  WGNAOSF;  /* avoid structure result */
A68_VC  ZGNAOSF;  /* avoid structure result */
A68_VC  CHNAOSF;  /* avoid structure result */
A68_213  DHNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  JHNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  KHNAOSF;  /* YIELD */
A68_205  LHNAOSF;  /* procedure value */
A68_208 * MHNAOSF;  /* YIELD */
A68_207  NHNAOSF;  /* OPERATORS - mode -> union mode */
A68_361  PHNAOSF;  /* collateral clause result */
A68_208  QHNAOSF;  /* collateral clause result */
A68_VC  THNAOSF;  /* avoid structure result */
A68_VC  UHNAOSF;  /* avoid structure result */
A68_VC  XHNAOSF;  /* avoid structure result */
A68_213  YHNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  OINAOSF;  /* OPERATORS - mode -> union mode */
A68_205  PINAOSF;  /* YIELD */
A68_205  QINAOSF;  /* procedure value */
A68_208 * RINAOSF;  /* YIELD */
A68_207  SINAOSF;  /* OPERATORS - mode -> union mode */
A68_208  TINAOSF;  /* collateral clause result */
A68_VC  WINAOSF;  /* avoid structure result */
A68_VC  XINAOSF;  /* avoid structure result */
A68_VC  AJNAOSF;  /* avoid structure result */
A68_213  BJNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  LJNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  MJNAOSF;  /* YIELD */
A68_205  NJNAOSF;  /* procedure value */
A68_208 * OJNAOSF;  /* YIELD */
A68_207  PJNAOSF;  /* OPERATORS - mode -> union mode */
A68_211  QJNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RJNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_207  TJNAOSF;  /* OPERATORS - mode -> union mode */
A68_209 * UJNAOSF;  /* YIELD */
A68_208  VJNAOSF;  /* collateral clause result */
A68_VC  YJNAOSF;  /* avoid structure result */
A68_215  ZJNAOSF;  /* avoid structure result */
A68_212  AKNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  DKNAOSF;  /* avoid structure result */
A68_213  EKNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  IKNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  JKNAOSF;  /* YIELD */
A68_205  KKNAOSF;  /* procedure value */
A68_208 * LKNAOSF;  /* YIELD */
A68_207  MKNAOSF;  /* OPERATORS - mode -> union mode */
A68_334  OKNAOSF;  /* collateral clause result */
A68_208  PKNAOSF;  /* collateral clause result */
A68_VC  SKNAOSF;  /* avoid structure result */
A68_VC  VKNAOSF;  /* avoid structure result */
A68_297  WKNAOSF;  /* collateral clause result */
A68_VC  ZKNAOSF;  /* avoid structure result */
A68_46  ALNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  BLNAOSF;  /* avoid structure result */
A68_213  CLNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  GLNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  HLNAOSF;  /* YIELD */
A68_205  ILNAOSF;  /* procedure value */
A68_208 * JLNAOSF;  /* YIELD */
A68_207  KLNAOSF;  /* OPERATORS - mode -> union mode */
A68_208  LLNAOSF;  /* collateral clause result */
A68_VC  OLNAOSF;  /* avoid structure result */
A68_VC  RLNAOSF;  /* avoid structure result */
A68_297  SLNAOSF;  /* collateral clause result */
A68_VC  VLNAOSF;  /* avoid structure result */
A68_46  WLNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  XLNAOSF;  /* avoid structure result */
A68_213  YLNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  CMNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  DMNAOSF;  /* YIELD */
A68_205  EMNAOSF;  /* procedure value */
A68_208 * FMNAOSF;  /* YIELD */
A68_207  GMNAOSF;  /* OPERATORS - mode -> union mode */
A68_208  HMNAOSF;  /* collateral clause result */
A68_VC  KMNAOSF;  /* avoid structure result */
A68_VC  NMNAOSF;  /* avoid structure result */
A68_213  OMNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  ANNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  BNNAOSF;  /* YIELD */
A68_205  CNNAOSF;  /* procedure value */
A68_208 * DNNAOSF;  /* YIELD */
A68_207  ENNAOSF;  /* OPERATORS - mode -> union mode */
A68_208  FNNAOSF;  /* collateral clause result */
A68_VC  INNAOSF;  /* avoid structure result */
A68_VC  LNNAOSF;  /* avoid structure result */
A68_VC  ONNAOSF;  /* avoid structure result */
A68_213  PNNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  BONAOSF;  /* OPERATORS - mode -> union mode */
A68_205  CONAOSF;  /* YIELD */
A68_205  DONAOSF;  /* procedure value */
A68_208 * EONAOSF;  /* YIELD */
A68_207  FONAOSF;  /* OPERATORS - mode -> union mode */
A68_208  GONAOSF;  /* collateral clause result */
A68_VC  JONAOSF;  /* avoid structure result */
A68_VC  MONAOSF;  /* avoid structure result */
A68_VC  PONAOSF;  /* avoid structure result */
A68_213  QONAOSF;  /* OPERATORS - mode -> union mode */
A68_203  UONAOSF;  /* OPERATORS - mode -> union mode */
A68_205  VONAOSF;  /* YIELD */
A68_205  WONAOSF;  /* procedure value */
A68_208 * XONAOSF;  /* YIELD */
A68_207  YONAOSF;  /* OPERATORS - mode -> union mode */
A68_208  ZONAOSF;  /* collateral clause result */
A68_VC  CPNAOSF;  /* avoid structure result */
A68_VC  DPNAOSF;  /* avoid structure result */
A68_215  EPNAOSF;  /* avoid structure result */
A68_212  FPNAOSF;  /* OPERATORS - mode -> union mode */
A68_215  GPNAOSF;  /* avoid structure result */
A68_212  HPNAOSF;  /* OPERATORS - mode -> union mode */
A68_358  IPNAOSF;  /* collateral clause result */
A68_VC  LPNAOSF;  /* avoid structure result */
A68_VC  OPNAOSF;  /* avoid structure result */
A68_VC  RPNAOSF;  /* avoid structure result */
A68_VC  UPNAOSF;  /* avoid structure result */
A68_VC  VPNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  WPNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  XPNAOSF;  /* avoid structure result */
A68_213  YPNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  IQNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  JQNAOSF;  /* YIELD */
A68_205  KQNAOSF;  /* procedure value */
A68_208 * LQNAOSF;  /* YIELD */
A68_207  MQNAOSF;  /* OPERATORS - mode -> union mode */
A68_211  NQNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  OQNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_207  QQNAOSF;  /* OPERATORS - mode -> union mode */
A68_209 * RQNAOSF;  /* YIELD */
A68_361  TQNAOSF;  /* collateral clause result */
A68_208  UQNAOSF;  /* collateral clause result */
A68_VC  XQNAOSF;  /* avoid structure result */
A68_213  YQNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  LRNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  MRNAOSF;  /* YIELD */
A68_205  NRNAOSF;  /* procedure value */
A68_208 * ORNAOSF;  /* YIELD */
A68_207  PRNAOSF;  /* OPERATORS - mode -> union mode */
A68_361  RRNAOSF;  /* collateral clause result */
A68_208  SRNAOSF;  /* collateral clause result */
A68_VC  TRNAOSF;  /* avoid structure result */
A68_213  URNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  CSNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  DSNAOSF;  /* YIELD */
A68_205  ESNAOSF;  /* procedure value */
A68_208 * FSNAOSF;  /* YIELD */
A68_207  GSNAOSF;  /* OPERATORS - mode -> union mode */
A68_208  HSNAOSF;  /* collateral clause result */
A68_VC  KSNAOSF;  /* avoid structure result */
A68_213  LSNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  QSNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  RSNAOSF;  /* YIELD */
A68_205  SSNAOSF;  /* procedure value */
A68_208 * TSNAOSF;  /* YIELD */
A68_207  USNAOSF;  /* OPERATORS - mode -> union mode */
A68_211  VSNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  XSNAOSF;  /* avoid structure result */
A68_207  YSNAOSF;  /* OPERATORS - mode -> union mode */
A68_209 * ZSNAOSF;  /* YIELD */
A68_211  ATNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CTNAOSF;  /* avoid structure result */
A68_207  DTNAOSF;  /* OPERATORS - mode -> union mode */
A68_209 * ETNAOSF;  /* YIELD */
A68_208  FTNAOSF;  /* collateral clause result */
A68_VC  ITNAOSF;  /* avoid structure result */
A68_VC  LTNAOSF;  /* avoid structure result */
A68_VC  OTNAOSF;  /* avoid structure result */
A68_213  PTNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  TTNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  UTNAOSF;  /* YIELD */
A68_205  VTNAOSF;  /* procedure value */
A68_208 * WTNAOSF;  /* YIELD */
A68_207  XTNAOSF;  /* OPERATORS - mode -> union mode */
A68_208  YTNAOSF;  /* collateral clause result */
A68_VC  BUNAOSF;  /* avoid structure result */
A68_VC  EUNAOSF;  /* avoid structure result */
A68_213  FUNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  PXNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  QXNAOSF;  /* YIELD */
A68_205  RXNAOSF;  /* procedure value */
A68_208 * SXNAOSF;  /* YIELD */
A68_207  TXNAOSF;  /* OPERATORS - mode -> union mode */
A68_208  UXNAOSF;  /* collateral clause result */
A68_VC  XXNAOSF;  /* avoid structure result */
A68_353  YXNAOSF;  /* collateral clause result */
A68_216  ZXNAOSF;  /* OPERATORS - istruct -> vector */
A68_215  AYNAOSF;  /* avoid structure result */
A68_212  BYNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EYNAOSF;  /* avoid structure result */
A68_213  FYNAOSF;  /* OPERATORS - mode -> union mode */
A68_203  LZNAOSF;  /* OPERATORS - mode -> union mode */
A68_205  MZNAOSF;  /* YIELD */
A68_205  NZNAOSF;  /* procedure value */
A68_208 * OZNAOSF;  /* YIELD */
A68_207  PZNAOSF;  /* OPERATORS - mode -> union mode */
A68_208  QZNAOSF;  /* collateral clause result */
A68_VC  TZNAOSF;  /* avoid structure result */
A68_VC  WZNAOSF;  /* avoid structure result */
A68_321  XZNAOSF;  /* collateral clause result */
A68_52  AAOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BAOAOSF;  /* YIELD */
A68_52  CAOAOSF;  /* OPERATORS - mode -> union mode */
A68_52  FAOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  GAOAOSF;  /* YIELD */
A68_85  HAOAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  IAOAOSF;  /* avoid structure result */
A68_213  JAOAOSF;  /* OPERATORS - mode -> union mode */
A68_203  RAOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  SAOAOSF;  /* YIELD */
A68_205  TAOAOSF;  /* procedure value */
A68_208 * UAOAOSF;  /* YIELD */
A68_207  VAOAOSF;  /* OPERATORS - mode -> union mode */
A68_208  WAOAOSF;  /* collateral clause result */
A68_VC  ZAOAOSF;  /* avoid structure result */
A68_213  RBOAOSF;  /* OPERATORS - mode -> union mode */
A68_214  SBOAOSF;  /* YIELD */
A68_214  TBOAOSF;  /* procedure value */
A68_203  UBOAOSF;  /* OPERATORS - mode -> union mode */
A68_204  VBOAOSF;  /* procedure value */
A68_208 * WBOAOSF;  /* YIELD */
A68_207  XBOAOSF;  /* OPERATORS - mode -> union mode */
A68_208  YBOAOSF;  /* collateral clause result */
A68_VC  BCOAOSF;  /* avoid structure result */
A68_213  TCOAOSF;  /* OPERATORS - mode -> union mode */
A68_214  UCOAOSF;  /* YIELD */
A68_214  VCOAOSF;  /* procedure value */
A68_203  WCOAOSF;  /* OPERATORS - mode -> union mode */
A68_204  XCOAOSF;  /* procedure value */
A68_208 * YCOAOSF;  /* YIELD */
A68_207  ZCOAOSF;  /* OPERATORS - mode -> union mode */
A68_208  ADOAOSF;  /* collateral clause result */
A68_VC  DDOAOSF;  /* avoid structure result */
A68_213  VDOAOSF;  /* OPERATORS - mode -> union mode */
A68_214  WDOAOSF;  /* YIELD */
A68_214  XDOAOSF;  /* procedure value */
A68_203  YDOAOSF;  /* OPERATORS - mode -> union mode */
A68_204  ZDOAOSF;  /* procedure value */
A68_208 * AEOAOSF;  /* YIELD */
A68_207  BEOAOSF;  /* OPERATORS - mode -> union mode */
A68_208  CEOAOSF;  /* collateral clause result */
A68_VC  FEOAOSF;  /* avoid structure result */
A68_213  XEOAOSF;  /* OPERATORS - mode -> union mode */
A68_214  YEOAOSF;  /* YIELD */
A68_214  ZEOAOSF;  /* procedure value */
A68_203  AFOAOSF;  /* OPERATORS - mode -> union mode */
A68_204  BFOAOSF;  /* procedure value */
A68_208 * CFOAOSF;  /* YIELD */
A68_207  DFOAOSF;  /* OPERATORS - mode -> union mode */
A68_208  EFOAOSF;  /* collateral clause result */
A68_VC  HFOAOSF;  /* avoid structure result */
A68_VC  KFOAOSF;  /* avoid structure result */
A68_213  LFOAOSF;  /* OPERATORS - mode -> union mode */
A68_203  YFOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  ZFOAOSF;  /* YIELD */
A68_205  AGOAOSF;  /* procedure value */
A68_208 * BGOAOSF;  /* YIELD */
A68_207  CGOAOSF;  /* OPERATORS - mode -> union mode */
A68_323  EGOAOSF;  /* collateral clause result */
A68_208  FGOAOSF;  /* collateral clause result */
A68_VC  IGOAOSF;  /* avoid structure result */
A68_VC  LGOAOSF;  /* avoid structure result */
A68_VC  OGOAOSF;  /* avoid structure result */
A68_213  PGOAOSF;  /* OPERATORS - mode -> union mode */
A68_203  EHOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  FHOAOSF;  /* YIELD */
A68_205  GHOAOSF;  /* procedure value */
A68_208 * HHOAOSF;  /* YIELD */
A68_207  IHOAOSF;  /* OPERATORS - mode -> union mode */
A68_208  JHOAOSF;  /* collateral clause result */
A68_VC  MHOAOSF;  /* avoid structure result */
A68_VC  NHOAOSF;  /* avoid structure result */
A68_215  OHOAOSF;  /* avoid structure result */
A68_212  PHOAOSF;  /* OPERATORS - mode -> union mode */
A68_213  JIOAOSF;  /* OPERATORS - mode -> union mode */
A68_214  KIOAOSF;  /* YIELD */
A68_214  LIOAOSF;  /* procedure value */
A68_203  PIOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  QIOAOSF;  /* YIELD */
A68_205  RIOAOSF;  /* procedure value */
A68_208 * SIOAOSF;  /* YIELD */
A68_207  TIOAOSF;  /* OPERATORS - mode -> union mode */
A68_208  UIOAOSF;  /* collateral clause result */
A68_VC  XIOAOSF;  /* avoid structure result */
A68_VC  YIOAOSF;  /* avoid structure result */
A68_353  ZIOAOSF;  /* collateral clause result */
A68_215  AJOAOSF;  /* avoid structure result */
A68_212  BJOAOSF;  /* OPERATORS - mode -> union mode */
A68_216  CJOAOSF;  /* OPERATORS - istruct -> vector */
A68_215  DJOAOSF;  /* avoid structure result */
A68_212  EJOAOSF;  /* OPERATORS - mode -> union mode */
A68_380  FJOAOSF;  /* collateral clause result */
A68_VC  IJOAOSF;  /* avoid structure result */
A68_VC  LJOAOSF;  /* avoid structure result */
A68_VC  OJOAOSF;  /* avoid structure result */
A68_VC  PJOAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  QJOAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RJOAOSF;  /* avoid structure result */
A68_213  SJOAOSF;  /* OPERATORS - mode -> union mode */
A68_203  DKOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  EKOAOSF;  /* YIELD */
A68_205  FKOAOSF;  /* procedure value */
A68_208 * GKOAOSF;  /* YIELD */
A68_207  HKOAOSF;  /* OPERATORS - mode -> union mode */
A68_211  IKOAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  JKOAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_207  LKOAOSF;  /* OPERATORS - mode -> union mode */
A68_209 * MKOAOSF;  /* YIELD */
A68_385  OKOAOSF;  /* collateral clause result */
A68_208  PKOAOSF;  /* collateral clause result */
A68_VC  SKOAOSF;  /* avoid structure result */
A68_VC  VKOAOSF;  /* avoid structure result */
A68_VC  YKOAOSF;  /* avoid structure result */
A68_213  ZKOAOSF;  /* OPERATORS - mode -> union mode */
A68_203  OLOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  PLOAOSF;  /* YIELD */
A68_205  QLOAOSF;  /* procedure value */
A68_208 * RLOAOSF;  /* YIELD */
A68_207  SLOAOSF;  /* OPERATORS - mode -> union mode */
A68_208  TLOAOSF;  /* collateral clause result */
A68_VC  WLOAOSF;  /* avoid structure result */
A68_VC  ZLOAOSF;  /* avoid structure result */
A68_VC  CMOAOSF;  /* avoid structure result */
A68_213  DMOAOSF;  /* OPERATORS - mode -> union mode */
A68_203  HMOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  IMOAOSF;  /* YIELD */
A68_205  JMOAOSF;  /* procedure value */
A68_208 * KMOAOSF;  /* YIELD */
A68_207  LMOAOSF;  /* OPERATORS - mode -> union mode */
A68_208  MMOAOSF;  /* collateral clause result */
A68_VC  PMOAOSF;  /* avoid structure result */
A68_VC  SMOAOSF;  /* avoid structure result */
A68_VC  VMOAOSF;  /* avoid structure result */
A68_213  WMOAOSF;  /* OPERATORS - mode -> union mode */
A68_203  ANOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  BNOAOSF;  /* YIELD */
A68_205  CNOAOSF;  /* procedure value */
A68_208 * DNOAOSF;  /* YIELD */
A68_207  ENOAOSF;  /* OPERATORS - mode -> union mode */
A68_208  FNOAOSF;  /* collateral clause result */
A68_VC  INOAOSF;  /* avoid structure result */
A68_VC  JNOAOSF;  /* avoid structure result */
A68_VC  MNOAOSF;  /* avoid structure result */
A68_213  NNOAOSF;  /* OPERATORS - mode -> union mode */
A68_203  RNOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  SNOAOSF;  /* YIELD */
A68_205  TNOAOSF;  /* procedure value */
A68_208 * UNOAOSF;  /* YIELD */
A68_207  VNOAOSF;  /* OPERATORS - mode -> union mode */
A68_208  WNOAOSF;  /* collateral clause result */
A68_VC  ZNOAOSF;  /* avoid structure result */
A68_VC  AOOAOSF;  /* avoid structure result */
A68_305  BOOAOSF;  /* collateral clause result */
A68_VC  EOOAOSF;  /* avoid structure result */
A68_46  HOOAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  IOOAOSF;  /* avoid structure result */
A68_213  JOOAOSF;  /* OPERATORS - mode -> union mode */
A68_203  NOOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  OOOAOSF;  /* YIELD */
A68_205  POOAOSF;  /* procedure value */
A68_208 * QOOAOSF;  /* YIELD */
A68_207  ROOAOSF;  /* OPERATORS - mode -> union mode */
A68_211  SOOAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  TOOAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_207  VOOAOSF;  /* OPERATORS - mode -> union mode */
A68_209 * WOOAOSF;  /* YIELD */
A68_211  XOOAOSF;  /* clause result */
A68_211  YOOAOSF;  /* OPERATORS - istruct -> vector */
A68_211  ZOOAOSF;  /* avoid structure result */
A_PROC_ENTRY(make_globalcommands);
 /* line 260: */
 /* line 263: */
{ 
ZCAAOSF_makervc( Default_edit_type, &IWLAOSF );
HOLAOSF_edit_type = IWLAOSF;
 /* line 264: */
ZCAAOSF_makervc( Sysdir_varname, &JWLAOSF );
JOLAOSF_sysdir_var = JWLAOSF;
 /* line 265: */
MOLAOSF_print_issue = Printissue;
 /* line 266: */
OOLAOSF_commandenv = Commandenv_proc;
 /* line 270: */
MWLAOSF.fn.fn_global = WVGAOSF_default_set_var;
MWLAOSF.nonlocals = A68_NIL;
BVGAOSF_add_var(DOLAOSF_edit_var, LWLAOSF, KUGAOSF_str_var, MWLAOSF);
 /* line 271: */
NWLAOSF.fn.fn_global = PQLAOSF_set_showtime;
NWLAOSF.nonlocals = A68_NIL;
BVGAOSF_add_var(GOLAOSF_showtime_var, UUGAOSF_false_var, LUGAOSF_bool_var, NWLAOSF);
 /* line 272: */
OWLAOSF.fn.fn_global = SVGAOSF_null_set_var;
OWLAOSF.nonlocals = A68_NIL;
BVGAOSF_add_var(JOLAOSF_sysdir_var, JOLAOSF_sysdir_var, JUGAOSF_env_var, OWLAOSF);
 /* line 276: */
PWLAOSF_not_failed = A68_TRUE;
 /* line 277: */
A_CLOSURE( SWLAOSF_new_msg, TWLAOSF_new_msg, UWLAOSF_new_msg );
(( UWLAOSF_new_msg * ) ( SWLAOSF_new_msg.nonlocals )) -> PWLAOSF_not_failed = (&PWLAOSF_not_failed);
 /* line 280: */
QWGAOSF_get_var( JOLAOSF_sysdir_var, &WWLAOSF );
XWLAOSF_dir = WWLAOSF;
 /* line 281: */
YWLAOSF.data[0] = XWLAOSF_dir;
YWLAOSF.data[1] = AXLAOSF;
JDAAOSF_concat( A_HISVEC(BXLAOSF,YWLAOSF,2,A68_VC ), &CXLAOSF );
DXLAOSF_fname = CXLAOSF;
 /* line 282: */
EXLAOSF_lf = QVBAOSF_open_file(DXLAOSF_fname, ITBAOSF_append_access, SWLAOSF_new_msg);
 /* line 283: */
 /* line 284: */
QQLAOSF_when(  &HXLAOSF );
GXLAOSF.data[0] = A_UNITE(IXLAOSF,mode7,7,HXLAOSF);
MXLAOSF = KXLAOSF ;
GXLAOSF.data[1] = A_UNITE(LXLAOSF,mode7,7,MXLAOSF);
PREAOSF_version(  &NXLAOSF );
PXLAOSF = NXLAOSF.Name ;
GXLAOSF.data[2] = A_UNITE(OXLAOSF,mode7,7,PXLAOSF);
BSDAOSF_after( 36, &QXLAOSF );
GXLAOSF.data[3] = A_UNITE(RXLAOSF,mode18,18,QXLAOSF);
 /* line 285: */
VXLAOSF = TXLAOSF ;
GXLAOSF.data[4] = A_UNITE(UXLAOSF,mode7,7,VXLAOSF);
ERBAOSF_get_login_name(  &WXLAOSF );
GXLAOSF.data[5] = A_UNITE(XXLAOSF,mode7,7,WXLAOSF);
ZXLAOSF = ']' ;
GXLAOSF.data[6] = A_UNITE(YXLAOSF,mode6,6,ZXLAOSF);
BSDAOSF_after( 54, &AYLAOSF );
GXLAOSF.data[7] = A_UNITE(BYLAOSF,mode18,18,AYLAOSF);
 /* line 286: */
PREAOSF_version(  &CYLAOSF );
EYLAOSF = CYLAOSF.Date ;
GXLAOSF.data[8] = A_UNITE(DYLAOSF,mode7,7,EYLAOSF);
IYLAOSF = GYLAOSF ;
GXLAOSF.data[9] = A_UNITE(HYLAOSF,mode7,7,IYLAOSF);
PREAOSF_version(  &JYLAOSF );
LYLAOSF = JYLAOSF.Version ;
GXLAOSF.data[10] = A_UNITE(KYLAOSF,mode7,7,LYLAOSF);
GXLAOSF.data[11] = A_UNITE(MYLAOSF,mode6,6,GVBAOSF_newline_char);
JCEAOSF_putb( A_ISVEC(OYLAOSF,(&FXLAOSF_buffer),600,A68_CHAR ), A_HISVEC(NYLAOSF,GXLAOSF,12,A68_52 ), &PYLAOSF );
QYLAOSF_line = PYLAOSF;
 /* line 287: */
 /* line 288: */
if ( PWLAOSF_not_failed )
{ 
UXBAOSF_write_buffer( EXLAOSF_lf, QYLAOSF_line, SWLAOSF_new_msg, &RYLAOSF );
RYLAOSF;
 /* line 289: */
 /* line 290: */
IWBAOSF_close_file(EXLAOSF_lf, SWLAOSF_new_msg);
} 
 /* line 295: */
 /* line 302: */
 /* line 304: */
A_CLOSURE( EZLAOSF_rr, FZLAOSF_rr, GZLAOSF_rr );
 /* line 318: */
 /* line 320: */
 /* line 321: */
 /* line 322: */
A_CLOSURE( TZLAOSF_pchars, UZLAOSF_pchars, VZLAOSF_pchars );
(( VZLAOSF_pchars * ) ( TZLAOSF_pchars.nonlocals )) -> EZLAOSF_rr = EZLAOSF_rr;
 /* line 330: */
 /* line 332: */
 /* line 333: */
ZCAAOSF_makervc( MAMAOSF, &NAMAOSF );
KAMAOSF.Name = NAMAOSF;
 /* line 334: */
ZCAAOSF_makervc( PAMAOSF, &QAMAOSF );
KAMAOSF.Abreviation = QAMAOSF;
KAMAOSF.Parameter = LEFAOSF_noparameters;
KAMAOSF.Access = QZHAOSF_normalaccess;
 /* line 336: */
KAMAOSF.Continuation = SAIAOSF_continue;
 /* line 337: */
 /* line 338: */
 /* line 339: */
 /* line 340: */
ZCAAOSF_makervc( SAMAOSF, &TAMAOSF );
KAMAOSF.Help = A_UNITE(UAMAOSF,mode1,1,TAMAOSF);
LBMAOSF.fn.fn_global = XAMAOSF_anonymous;
LBMAOSF.nonlocals = A68_NIL;
KBMAOSF = LBMAOSF ;
KAMAOSF.Command = A_UNITE(JBMAOSF,mode3,3,KBMAOSF);
 /* line 353: */
MBMAOSF = A_HEAP(A68_208 ) ;
(*MBMAOSF) = KAMAOSF ;
JAMAOSF.data[0] = A_UNITE(NBMAOSF,mode1,1,MBMAOSF);
 /* line 354: */
 /* line 355: */
ZCAAOSF_makervc( RBMAOSF, &SBMAOSF );
PBMAOSF.Name = SBMAOSF;
 /* line 356: */
PBMAOSF.Abreviation = IHDAOSF_nullstr;
PBMAOSF.Parameter = LEFAOSF_noparameters;
PBMAOSF.Access = QZHAOSF_normalaccess;
 /* line 358: */
PBMAOSF.Continuation = SAIAOSF_continue;
 /* line 359: */
ZCAAOSF_makervc( UBMAOSF, &VBMAOSF );
PBMAOSF.Help = A_UNITE(WBMAOSF,mode1,1,VBMAOSF);
 /* line 361: */
CCMAOSF.fn.fn_global = ZBMAOSF_anonymous;
CCMAOSF.nonlocals = A68_NIL;
BCMAOSF = CCMAOSF ;
PBMAOSF.Command = A_UNITE(ACMAOSF,mode3,3,BCMAOSF);
 /* line 363: */
DCMAOSF = A_HEAP(A68_208 ) ;
(*DCMAOSF) = PBMAOSF ;
JCMAOSF = GFIAOSF_make_group(HCMAOSF, A_HVEC(GCMAOSF,'C',A68_CHAR ), QZHAOSF_normalaccess, A_HVEC(FCMAOSF,A_UNITE(ECMAOSF,mode1,1,DCMAOSF),A68_207 )) ;
JAMAOSF.data[1] = A_UNITE(ICMAOSF,mode2,2,JCMAOSF);
 /* line 364: */
ZCAAOSF_makervc( MCMAOSF, &NCMAOSF );
KCMAOSF.Name = NCMAOSF;
 /* line 365: */
ZCAAOSF_makervc( PCMAOSF, &QCMAOSF );
KCMAOSF.Abreviation = QCMAOSF;
EGFAOSF_opt( BBKAOSF_text_syntax, &RCMAOSF );
KCMAOSF.Parameter = A_UNITE(SCMAOSF,mode2,2,RCMAOSF);
KCMAOSF.Access = QZHAOSF_normalaccess;
 /* line 367: */
KCMAOSF.Continuation = SAIAOSF_continue;
 /* line 368: */
ZCAAOSF_makervc( UCMAOSF, &VCMAOSF );
KCMAOSF.Help = A_UNITE(WCMAOSF,mode1,1,VCMAOSF);
FDMAOSF.fn.fn_global = ZCMAOSF_anonymous;
FDMAOSF.nonlocals = A68_NIL;
EDMAOSF = FDMAOSF ;
KCMAOSF.Command = A_UNITE(DDMAOSF,mode3,3,EDMAOSF);
 /* line 373: */
GDMAOSF = A_HEAP(A68_208 ) ;
(*GDMAOSF) = KCMAOSF ;
JAMAOSF.data[2] = A_UNITE(HDMAOSF,mode1,1,GDMAOSF);
 /* line 374: */
 /* line 375: */
ZCAAOSF_makervc( MDMAOSF, &NDMAOSF );
KDMAOSF.Name = NDMAOSF;
KDMAOSF.Abreviation = CHDAOSF_nilstr;
 /* line 376: */
KDMAOSF.Parameter = WFKAOSF_switch_syntax;
KDMAOSF.Access = KAIAOSF_secretprivateaccess;
 /* line 378: */
KDMAOSF.Continuation = SAIAOSF_continue;
 /* line 379: */
ZCAAOSF_makervc( PDMAOSF, &QDMAOSF );
KDMAOSF.Help = A_UNITE(RDMAOSF,mode1,1,QDMAOSF);
BEMAOSF.fn.fn_global = UDMAOSF_anonymous;
BEMAOSF.nonlocals = A68_NIL;
AEMAOSF = BEMAOSF ;
KDMAOSF.Command = A_UNITE(ZDMAOSF,mode3,3,AEMAOSF);
 /* line 383: */
CEMAOSF = A_HEAP(A68_208 ) ;
(*CEMAOSF) = KDMAOSF ;
JDMAOSF.data[0] = A_UNITE(DEMAOSF,mode1,1,CEMAOSF);
 /* line 384: */
ZCAAOSF_makervc( GEMAOSF, &HEMAOSF );
EEMAOSF.Name = HEMAOSF;
NCAAOSF_makervc( 'H', &IEMAOSF );
EEMAOSF.Abreviation = IEMAOSF;
 /* line 385: */
EEMAOSF.Parameter = TTJAOSF_int_syntax;
EEMAOSF.Access = KAIAOSF_secretprivateaccess;
 /* line 387: */
EEMAOSF.Continuation = SAIAOSF_continue;
 /* line 388: */
ZCAAOSF_makervc( KEMAOSF, &LEMAOSF );
EEMAOSF.Help = A_UNITE(MEMAOSF,mode1,1,LEMAOSF);
OFMAOSF.fn.fn_global = PEMAOSF_anonymous;
OFMAOSF.nonlocals = A68_NIL;
NFMAOSF = OFMAOSF ;
EEMAOSF.Command = A_UNITE(MFMAOSF,mode3,3,NFMAOSF);
 /* line 403: */
PFMAOSF = A_HEAP(A68_208 ) ;
(*PFMAOSF) = EEMAOSF ;
JDMAOSF.data[1] = A_UNITE(QFMAOSF,mode1,1,PFMAOSF);
 /* line 404: */
ZCAAOSF_makervc( TFMAOSF, &UFMAOSF );
RFMAOSF.Name = UFMAOSF;
NCAAOSF_makervc( 'R', &VFMAOSF );
RFMAOSF.Abreviation = VFMAOSF;
 /* line 405: */
RFMAOSF.Parameter = WFKAOSF_switch_syntax;
RFMAOSF.Access = KAIAOSF_secretprivateaccess;
 /* line 406: */
RFMAOSF.Continuation = SAIAOSF_continue;
 /* line 407: */
ZCAAOSF_makervc( XFMAOSF, &YFMAOSF );
RFMAOSF.Help = A_UNITE(ZFMAOSF,mode1,1,YFMAOSF);
 /* line 411: */
OGMAOSF.fn.fn_global = CGMAOSF_anonymous;
OGMAOSF.nonlocals = A68_NIL;
NGMAOSF = OGMAOSF ;
RFMAOSF.Command = A_UNITE(MGMAOSF,mode3,3,NGMAOSF);
 /* line 412: */
PGMAOSF = A_HEAP(A68_208 ) ;
(*PGMAOSF) = RFMAOSF ;
JDMAOSF.data[2] = A_UNITE(QGMAOSF,mode1,1,PGMAOSF);
 /* line 415: */
NCAAOSF_makervc( 'D', &SGMAOSF );
ZCAAOSF_makervc( TGMAOSF, &UGMAOSF );
WGMAOSF = GFIAOSF_make_group(UGMAOSF, SGMAOSF, KAIAOSF_secretprivateaccess, A_HISVEC(RGMAOSF,JDMAOSF,3,A68_207 )) ;
JAMAOSF.data[3] = A_UNITE(VGMAOSF,mode2,2,WGMAOSF);
 /* line 416: */
 /* line 417: */
ZCAAOSF_makervc( BHMAOSF, &CHMAOSF );
ZGMAOSF.Name = CHMAOSF;
 /* line 418: */
ZCAAOSF_makervc( EHMAOSF, &FHMAOSF );
ZGMAOSF.Abreviation = FHMAOSF;
ZGMAOSF.Parameter = LEFAOSF_noparameters;
ZGMAOSF.Access = QZHAOSF_normalaccess;
 /* line 419: */
ZGMAOSF.Continuation = SAIAOSF_continue;
 /* line 420: */
ZCAAOSF_makervc( HHMAOSF, &IHMAOSF );
ZGMAOSF.Help = A_UNITE(JHMAOSF,mode1,1,IHMAOSF);
GIMAOSF.fn.fn_global = MHMAOSF_anonymous;
GIMAOSF.nonlocals = A68_NIL;
FIMAOSF = GIMAOSF ;
ZGMAOSF.Command = A_UNITE(EIMAOSF,mode3,3,FIMAOSF);
 /* line 434: */
HIMAOSF = A_HEAP(A68_208 ) ;
(*HIMAOSF) = ZGMAOSF ;
YGMAOSF.data[0] = A_UNITE(IIMAOSF,mode1,1,HIMAOSF);
 /* line 435: */
ZCAAOSF_makervc( LIMAOSF, &MIMAOSF );
JIMAOSF.Name = MIMAOSF;
 /* line 436: */
ZCAAOSF_makervc( OIMAOSF, &PIMAOSF );
JIMAOSF.Abreviation = PIMAOSF;
JIMAOSF.Parameter = LEFAOSF_noparameters;
JIMAOSF.Access = QZHAOSF_normalaccess;
 /* line 437: */
JIMAOSF.Continuation = SAIAOSF_continue;
 /* line 438: */
ZCAAOSF_makervc( RIMAOSF, &SIMAOSF );
JIMAOSF.Help = A_UNITE(TIMAOSF,mode1,1,SIMAOSF);
ZIMAOSF.fn.fn_global = WIMAOSF_anonymous;
ZIMAOSF.nonlocals = A68_NIL;
YIMAOSF = ZIMAOSF ;
JIMAOSF.Command = A_UNITE(XIMAOSF,mode3,3,YIMAOSF);
 /* line 441: */
AJMAOSF = A_HEAP(A68_208 ) ;
(*AJMAOSF) = JIMAOSF ;
YGMAOSF.data[1] = A_UNITE(BJMAOSF,mode1,1,AJMAOSF);
 /* line 442: */
ZCAAOSF_makervc( EJMAOSF, &FJMAOSF );
CJMAOSF.Name = FJMAOSF;
 /* line 443: */
ZCAAOSF_makervc( HJMAOSF, &IJMAOSF );
CJMAOSF.Abreviation = IJMAOSF;
CJMAOSF.Parameter = LEFAOSF_noparameters;
CJMAOSF.Access = QZHAOSF_normalaccess;
 /* line 445: */
CJMAOSF.Continuation = SAIAOSF_continue;
 /* line 446: */
ZCAAOSF_makervc( KJMAOSF, &LJMAOSF );
CJMAOSF.Help = A_UNITE(MJMAOSF,mode1,1,LJMAOSF);
SJMAOSF.fn.fn_global = PJMAOSF_anonymous;
SJMAOSF.nonlocals = A68_NIL;
RJMAOSF = SJMAOSF ;
CJMAOSF.Command = A_UNITE(QJMAOSF,mode3,3,RJMAOSF);
 /* line 449: */
TJMAOSF = A_HEAP(A68_208 ) ;
(*TJMAOSF) = CJMAOSF ;
YGMAOSF.data[2] = A_UNITE(UJMAOSF,mode1,1,TJMAOSF);
 /* line 450: */
ZCAAOSF_makervc( XJMAOSF, &YJMAOSF );
VJMAOSF.Name = YJMAOSF;
 /* line 451: */
ZCAAOSF_makervc( AKMAOSF, &BKMAOSF );
VJMAOSF.Abreviation = BKMAOSF;
VJMAOSF.Parameter = LEFAOSF_noparameters;
VJMAOSF.Access = UZHAOSF_hiddenaccess;
 /* line 452: */
VJMAOSF.Continuation = SAIAOSF_continue;
 /* line 453: */
ZCAAOSF_makervc( DKMAOSF, &EKMAOSF );
VJMAOSF.Help = A_UNITE(FKMAOSF,mode1,1,EKMAOSF);
TKMAOSF.fn.fn_global = IKMAOSF_anonymous;
TKMAOSF.nonlocals = A68_NIL;
SKMAOSF = TKMAOSF ;
VJMAOSF.Command = A_UNITE(RKMAOSF,mode3,3,SKMAOSF);
 /* line 460: */
UKMAOSF = A_HEAP(A68_208 ) ;
(*UKMAOSF) = VJMAOSF ;
YGMAOSF.data[3] = A_UNITE(VKMAOSF,mode1,1,UKMAOSF);
 /* line 461: */
 /* line 462: */
ZCAAOSF_makervc( ALMAOSF, &BLMAOSF );
YKMAOSF.Name = BLMAOSF;
 /* line 463: */
ZCAAOSF_makervc( DLMAOSF, &ELMAOSF );
YKMAOSF.Abreviation = ELMAOSF;
YKMAOSF.Parameter = LEFAOSF_noparameters;
YKMAOSF.Access = QZHAOSF_normalaccess;
 /* line 464: */
YKMAOSF.Continuation = SAIAOSF_continue;
 /* line 465: */
ZCAAOSF_makervc( GLMAOSF, &HLMAOSF );
YKMAOSF.Help = A_UNITE(ILMAOSF,mode1,1,HLMAOSF);
OLMAOSF.fn.fn_global = LLMAOSF_anonymous;
OLMAOSF.nonlocals = A68_NIL;
NLMAOSF = OLMAOSF ;
YKMAOSF.Command = A_UNITE(MLMAOSF,mode3,3,NLMAOSF);
 /* line 469: */
PLMAOSF = A_HEAP(A68_208 ) ;
(*PLMAOSF) = YKMAOSF ;
XKMAOSF.data[0] = A_UNITE(QLMAOSF,mode1,1,PLMAOSF);
 /* line 470: */
ZCAAOSF_makervc( TLMAOSF, &ULMAOSF );
RLMAOSF.Name = ULMAOSF;
 /* line 471: */
ZCAAOSF_makervc( WLMAOSF, &XLMAOSF );
RLMAOSF.Abreviation = XLMAOSF;
RLMAOSF.Parameter = LEFAOSF_noparameters;
RLMAOSF.Access = QZHAOSF_normalaccess;
 /* line 473: */
RLMAOSF.Continuation = SAIAOSF_continue;
 /* line 474: */
ZCAAOSF_makervc( ZLMAOSF, &AMMAOSF );
RLMAOSF.Help = A_UNITE(BMMAOSF,mode1,1,AMMAOSF);
HMMAOSF.fn.fn_global = EMMAOSF_anonymous;
HMMAOSF.nonlocals = A68_NIL;
GMMAOSF = HMMAOSF ;
RLMAOSF.Command = A_UNITE(FMMAOSF,mode3,3,GMMAOSF);
 /* line 478: */
IMMAOSF = A_HEAP(A68_208 ) ;
(*IMMAOSF) = RLMAOSF ;
XKMAOSF.data[1] = A_UNITE(JMMAOSF,mode1,1,IMMAOSF);
 /* line 479: */
ZCAAOSF_makervc( MMMAOSF, &NMMAOSF );
KMMAOSF.Name = NMMAOSF;
 /* line 480: */
NCAAOSF_makervc( 'T', &OMMAOSF );
KMMAOSF.Abreviation = OMMAOSF;
KMMAOSF.Parameter = LEFAOSF_noparameters;
KMMAOSF.Access = QZHAOSF_normalaccess;
 /* line 481: */
KMMAOSF.Continuation = SAIAOSF_continue;
 /* line 482: */
PMMAOSF.data[0] = RMMAOSF;
NREAOSF_facility(  &SMMAOSF );
PMMAOSF.data[1] = SMMAOSF;
PMMAOSF.data[2] = UMMAOSF;
 /* line 483: */
JDAAOSF_concat( A_HISVEC(VMMAOSF,PMMAOSF,3,A68_VC ), &WMMAOSF );
KMMAOSF.Help = A_UNITE(XMMAOSF,mode1,1,WMMAOSF);
 /* line 486: */
DNMAOSF.fn.fn_global = ANMAOSF_anonymous;
DNMAOSF.nonlocals = A68_NIL;
CNMAOSF = DNMAOSF ;
KMMAOSF.Command = A_UNITE(BNMAOSF,mode3,3,CNMAOSF);
 /* line 487: */
ENMAOSF = A_HEAP(A68_208 ) ;
(*ENMAOSF) = KMMAOSF ;
XKMAOSF.data[2] = A_UNITE(FNMAOSF,mode1,1,ENMAOSF);
 /* line 489: */
KNMAOSF = GFIAOSF_make_group(INMAOSF, A_HVEC(HNMAOSF,'S',A68_CHAR ), QZHAOSF_normalaccess, A_HISVEC(GNMAOSF,XKMAOSF,3,A68_207 )) ;
YGMAOSF.data[4] = A_UNITE(JNMAOSF,mode2,2,KNMAOSF);
 /* line 490: */
ZCAAOSF_makervc( NNMAOSF, &ONMAOSF );
LNMAOSF.Name = ONMAOSF;
 /* line 491: */
ZCAAOSF_makervc( QNMAOSF, &RNMAOSF );
LNMAOSF.Abreviation = RNMAOSF;
LNMAOSF.Parameter = LEFAOSF_noparameters;
LNMAOSF.Access = QZHAOSF_normalaccess;
 /* line 492: */
LNMAOSF.Continuation = SAIAOSF_continue;
 /* line 493: */
ZCAAOSF_makervc( TNMAOSF, &UNMAOSF );
LNMAOSF.Help = A_UNITE(VNMAOSF,mode1,1,UNMAOSF);
 /* line 495: */
BOMAOSF.fn.fn_global = YNMAOSF_anonymous;
BOMAOSF.nonlocals = A68_NIL;
AOMAOSF = BOMAOSF ;
LNMAOSF.Command = A_UNITE(ZNMAOSF,mode3,3,AOMAOSF);
 /* line 496: */
COMAOSF = A_HEAP(A68_208 ) ;
(*COMAOSF) = LNMAOSF ;
YGMAOSF.data[5] = A_UNITE(DOMAOSF,mode1,1,COMAOSF);
 /* line 498: */
IOMAOSF = GFIAOSF_make_group(GOMAOSF, A_HVEC(FOMAOSF,'D',A68_CHAR ), QZHAOSF_normalaccess, A_HISVEC(EOMAOSF,YGMAOSF,6,A68_207 )) ;
JAMAOSF.data[4] = A_UNITE(HOMAOSF,mode2,2,IOMAOSF);
 /* line 499: */
ZCAAOSF_makervc( LOMAOSF, &MOMAOSF );
JOMAOSF.Name = MOMAOSF;
ZCAAOSF_makervc( OOMAOSF, &POMAOSF );
JOMAOSF.Abreviation = POMAOSF;
JOMAOSF.Parameter = AAKAOSF_filename_syntax;
JOMAOSF.Access = QZHAOSF_normalaccess;
 /* line 500: */
JOMAOSF.Continuation = SAIAOSF_continue;
 /* line 503: */
QOMAOSF.data[0] = SOMAOSF;
NREAOSF_facility(  &TOMAOSF );
QOMAOSF.data[1] = TOMAOSF;
QOMAOSF.data[2] = VOMAOSF;
 /* line 504: */
JDAAOSF_concat( A_HISVEC(WOMAOSF,QOMAOSF,3,A68_VC ), &XOMAOSF );
JOMAOSF.Help = A_UNITE(YOMAOSF,mode1,1,XOMAOSF);
WPMAOSF.fn.fn_global = BPMAOSF_anonymous;
WPMAOSF.nonlocals = A68_NIL;
VPMAOSF = WPMAOSF ;
JOMAOSF.Command = A_UNITE(UPMAOSF,mode3,3,VPMAOSF);
 /* line 516: */
XPMAOSF = A_HEAP(A68_208 ) ;
(*XPMAOSF) = JOMAOSF ;
JAMAOSF.data[5] = A_UNITE(YPMAOSF,mode1,1,XPMAOSF);
 /* line 517: */
TYLAOSF_specialrvc( BQMAOSF, &CQMAOSF );
ZPMAOSF.Name = CQMAOSF;
ZPMAOSF.Abreviation = IHDAOSF_nullstr;
 /* line 518: */
ZPMAOSF.Parameter = PIKAOSF_word_syntax;
ZPMAOSF.Access = KAIAOSF_secretprivateaccess;
 /* line 519: */
ZPMAOSF.Continuation = SAIAOSF_continue;
 /* line 529: */
KRMAOSF.fn.fn_global = FQMAOSF_anonymous;
KRMAOSF.nonlocals = A68_NIL;
JRMAOSF = KRMAOSF ;
ZPMAOSF.Help = A_UNITE(IRMAOSF,mode3,3,JRMAOSF);
ASMAOSF.fn.fn_global = NRMAOSF_anonymous;
ASMAOSF.nonlocals = A68_NIL;
ZRMAOSF = ASMAOSF ;
ZPMAOSF.Command = A_UNITE(YRMAOSF,mode3,3,ZRMAOSF);
 /* line 537: */
BSMAOSF = A_HEAP(A68_208 ) ;
(*BSMAOSF) = ZPMAOSF ;
JAMAOSF.data[6] = A_UNITE(CSMAOSF,mode1,1,BSMAOSF);
 /* line 538: */
ZCAAOSF_makervc( FSMAOSF, &GSMAOSF );
DSMAOSF.Name = GSMAOSF;
ZCAAOSF_makervc( ISMAOSF, &JSMAOSF );
DSMAOSF.Abreviation = JSMAOSF;
 /* line 539: */
DSMAOSF.Parameter = LEFAOSF_noparameters;
DSMAOSF.Access = KAIAOSF_secretprivateaccess;
 /* line 540: */
DSMAOSF.Continuation = SAIAOSF_continue;
 /* line 541: */
ZCAAOSF_makervc( LSMAOSF, &MSMAOSF );
DSMAOSF.Help = A_UNITE(NSMAOSF,mode1,1,MSMAOSF);
VTMAOSF.fn.fn_global = QSMAOSF_anonymous;
VTMAOSF.nonlocals = A68_NIL;
UTMAOSF = VTMAOSF ;
DSMAOSF.Command = A_UNITE(TTMAOSF,mode3,3,UTMAOSF);
 /* line 549: */
WTMAOSF = A_HEAP(A68_208 ) ;
(*WTMAOSF) = DSMAOSF ;
JAMAOSF.data[7] = A_UNITE(XTMAOSF,mode1,1,WTMAOSF);
 /* line 550: */
ZCAAOSF_makervc( AUMAOSF, &BUMAOSF );
YTMAOSF.Name = BUMAOSF;
 /* line 551: */
NCAAOSF_makervc( 'H', &CUMAOSF );
YTMAOSF.Abreviation = CUMAOSF;
EGFAOSF_opt( MNGAOSF_command_name_syntax, &DUMAOSF );
WGFAOSF_star( A_UNITE(EUMAOSF,mode2,2,DUMAOSF), &FUMAOSF );
YTMAOSF.Parameter = A_UNITE(GUMAOSF,mode2,2,FUMAOSF);
YTMAOSF.Access = QZHAOSF_normalaccess;
 /* line 552: */
YTMAOSF.Continuation = SAIAOSF_continue;
 /* line 567: */
EVMAOSF.fn.fn_global = JUMAOSF_anonymous;
EVMAOSF.nonlocals = A68_NIL;
DVMAOSF = EVMAOSF ;
YTMAOSF.Help = A_UNITE(CVMAOSF,mode3,3,DVMAOSF);
OVMAOSF.fn.fn_global = HVMAOSF_anonymous;
OVMAOSF.nonlocals = A68_NIL;
NVMAOSF = OVMAOSF ;
YTMAOSF.Command = A_UNITE(MVMAOSF,mode3,3,NVMAOSF);
 /* line 577: */
PVMAOSF = A_HEAP(A68_208 ) ;
(*PVMAOSF) = YTMAOSF ;
JAMAOSF.data[8] = A_UNITE(QVMAOSF,mode1,1,PVMAOSF);
 /* line 578: */
ZCAAOSF_makervc( TVMAOSF, &UVMAOSF );
RVMAOSF.Name = UVMAOSF;
 /* line 579: */
ZCAAOSF_makervc( WVMAOSF, &XVMAOSF );
RVMAOSF.Abreviation = XVMAOSF;
EGFAOSF_opt( QYJAOSF_string_syntax, &YVMAOSF );
WGFAOSF_star( A_UNITE(ZVMAOSF,mode2,2,YVMAOSF), &AWMAOSF );
RVMAOSF.Parameter = A_UNITE(BWMAOSF,mode2,2,AWMAOSF);
RVMAOSF.Access = UZHAOSF_hiddenaccess;
 /* line 580: */
RVMAOSF.Continuation = SAIAOSF_continue;
 /* line 581: */
CWMAOSF.data[0] = EWMAOSF;
 /* line 582: */
NREAOSF_facility(  &FWMAOSF );
CWMAOSF.data[1] = FWMAOSF;
 /* line 583: */
 /* line 584: */
CWMAOSF.data[2] = HWMAOSF;
 /* line 585: */
JDAAOSF_concat( A_HISVEC(IWMAOSF,CWMAOSF,3,A68_VC ), &JWMAOSF );
RVMAOSF.Help = A_UNITE(KWMAOSF,mode1,1,JWMAOSF);
BXMAOSF.fn.fn_global = NWMAOSF_anonymous;
BXMAOSF.nonlocals = A68_NIL;
AXMAOSF = BXMAOSF ;
RVMAOSF.Command = A_UNITE(ZWMAOSF,mode3,3,AXMAOSF);
 /* line 598: */
CXMAOSF = A_HEAP(A68_208 ) ;
(*CXMAOSF) = RVMAOSF ;
JAMAOSF.data[9] = A_UNITE(DXMAOSF,mode1,1,CXMAOSF);
 /* line 599: */
ZCAAOSF_makervc( GXMAOSF, &HXMAOSF );
EXMAOSF.Name = HXMAOSF;
EXMAOSF.Abreviation = IHDAOSF_nullstr;
 /* line 600: */
EXMAOSF.Parameter = WFKAOSF_switch_syntax;
EXMAOSF.Access = YZHAOSF_secretaccess;
 /* line 601: */
EXMAOSF.Continuation = SAIAOSF_continue;
 /* line 602: */
ZCAAOSF_makervc( JXMAOSF, &KXMAOSF );
EXMAOSF.Help = A_UNITE(LXMAOSF,mode1,1,KXMAOSF);
AYMAOSF.fn.fn_global = OXMAOSF_anonymous;
AYMAOSF.nonlocals = A68_NIL;
ZXMAOSF = AYMAOSF ;
EXMAOSF.Command = A_UNITE(YXMAOSF,mode3,3,ZXMAOSF);
 /* line 607: */
BYMAOSF = A_HEAP(A68_208 ) ;
(*BYMAOSF) = EXMAOSF ;
JAMAOSF.data[10] = A_UNITE(CYMAOSF,mode1,1,BYMAOSF);
 /* line 608: */
ZCAAOSF_makervc( FYMAOSF, &GYMAOSF );
DYMAOSF.Name = GYMAOSF;
 /* line 609: */
ZCAAOSF_makervc( IYMAOSF, &JYMAOSF );
DYMAOSF.Abreviation = JYMAOSF;
DYMAOSF.Parameter = AAKAOSF_filename_syntax;
DYMAOSF.Access = QZHAOSF_normalaccess;
 /* line 611: */
DYMAOSF.Continuation = SAIAOSF_continue;
 /* line 612: */
ZCAAOSF_makervc( LYMAOSF, &MYMAOSF );
DYMAOSF.Help = A_UNITE(NYMAOSF,mode1,1,MYMAOSF);
VYMAOSF.fn.fn_global = QYMAOSF_anonymous;
VYMAOSF.nonlocals = A68_NIL;
UYMAOSF = VYMAOSF ;
DYMAOSF.Command = A_UNITE(TYMAOSF,mode3,3,UYMAOSF);
 /* line 616: */
WYMAOSF = A_HEAP(A68_208 ) ;
(*WYMAOSF) = DYMAOSF ;
JAMAOSF.data[11] = A_UNITE(XYMAOSF,mode1,1,WYMAOSF);
 /* line 617: */
ZCAAOSF_makervc( AZMAOSF, &BZMAOSF );
YYMAOSF.Name = BZMAOSF;
 /* line 618: */
YYMAOSF.Abreviation = IHDAOSF_nullstr;
YYMAOSF.Parameter = AAKAOSF_filename_syntax;
YYMAOSF.Access = QZHAOSF_normalaccess;
 /* line 620: */
YYMAOSF.Continuation = SAIAOSF_continue;
 /* line 621: */
ZCAAOSF_makervc( DZMAOSF, &EZMAOSF );
YYMAOSF.Help = A_UNITE(FZMAOSF,mode1,1,EZMAOSF);
NZMAOSF.fn.fn_global = IZMAOSF_anonymous;
NZMAOSF.nonlocals = A68_NIL;
MZMAOSF = NZMAOSF ;
YYMAOSF.Command = A_UNITE(LZMAOSF,mode3,3,MZMAOSF);
 /* line 625: */
OZMAOSF = A_HEAP(A68_208 ) ;
(*OZMAOSF) = YYMAOSF ;
JAMAOSF.data[12] = A_UNITE(PZMAOSF,mode1,1,OZMAOSF);
 /* line 626: */
ZCAAOSF_makervc( SZMAOSF, &TZMAOSF );
QZMAOSF.Name = TZMAOSF;
 /* line 627: */
ZCAAOSF_makervc( VZMAOSF, &WZMAOSF );
QZMAOSF.Abreviation = WZMAOSF;
EGFAOSF_opt( BBKAOSF_text_syntax, &XZMAOSF );
QZMAOSF.Parameter = A_UNITE(YZMAOSF,mode2,2,XZMAOSF);
QZMAOSF.Access = QZHAOSF_normalaccess;
 /* line 628: */
QZMAOSF.Continuation = SAIAOSF_continue;
 /* line 629: */
ZCAAOSF_makervc( AANAOSF, &BANAOSF );
QZMAOSF.Help = A_UNITE(CANAOSF,mode1,1,BANAOSF);
LANAOSF.fn.fn_global = FANAOSF_anonymous;
LANAOSF.nonlocals = A68_NIL;
KANAOSF = LANAOSF ;
QZMAOSF.Command = A_UNITE(JANAOSF,mode3,3,KANAOSF);
 /* line 633: */
MANAOSF = A_HEAP(A68_208 ) ;
(*MANAOSF) = QZMAOSF ;
JAMAOSF.data[13] = A_UNITE(NANAOSF,mode1,1,MANAOSF);
 /* line 634: */
ZCAAOSF_makervc( QANAOSF, &RANAOSF );
OANAOSF.Name = RANAOSF;
 /* line 635: */
ZCAAOSF_makervc( TANAOSF, &UANAOSF );
OANAOSF.Abreviation = UANAOSF;
OANAOSF.Parameter = LEFAOSF_noparameters;
OANAOSF.Access = UZHAOSF_hiddenaccess;
 /* line 637: */
OANAOSF.Continuation = SAIAOSF_continue;
 /* line 638: */
 /* line 639: */
ZCAAOSF_makervc( WANAOSF, &XANAOSF );
OANAOSF.Help = A_UNITE(YANAOSF,mode1,1,XANAOSF);
MBNAOSF.fn.fn_global = BBNAOSF_anonymous;
MBNAOSF.nonlocals = A68_NIL;
LBNAOSF = MBNAOSF ;
OANAOSF.Command = A_UNITE(KBNAOSF,mode3,3,LBNAOSF);
 /* line 645: */
NBNAOSF = A_HEAP(A68_208 ) ;
(*NBNAOSF) = OANAOSF ;
JAMAOSF.data[14] = A_UNITE(OBNAOSF,mode1,1,NBNAOSF);
 /* line 646: */
ZCAAOSF_makervc( RBNAOSF, &SBNAOSF );
PBNAOSF.Name = SBNAOSF;
 /* line 647: */
PBNAOSF.Abreviation = IHDAOSF_nullstr;
TBNAOSF.data[0] = AAKAOSF_filename_syntax;
EGFAOSF_opt( TTJAOSF_int_syntax, &UBNAOSF );
TBNAOSF.data[1] = A_UNITE(VBNAOSF,mode2,2,UBNAOSF);
TFFAOSF_prod( A_HISVEC(WBNAOSF,TBNAOSF,2,A68_212 ), &XBNAOSF );
PBNAOSF.Parameter = A_UNITE(YBNAOSF,mode2,2,XBNAOSF);
PBNAOSF.Access = QZHAOSF_normalaccess;
 /* line 648: */
PBNAOSF.Continuation = SAIAOSF_continue;
DCNAOSF = BCNAOSF ;
ZBNAOSF.data[0] = A_UNITE(CCNAOSF,mode7,7,DCNAOSF);
 /* line 649: */
ZBNAOSF.data[1] = A_UNITE(ECNAOSF,mode7,7,UZJAOSF_filename_str);
ICNAOSF = GCNAOSF ;
ZBNAOSF.data[2] = A_UNITE(HCNAOSF,mode7,7,ICNAOSF);
 /* line 650: */
ZBNAOSF.data[3] = A_UNITE(JCNAOSF,mode7,7,CQJAOSF_int_str);
NCNAOSF = LCNAOSF ;
ZBNAOSF.data[4] = A_UNITE(MCNAOSF,mode7,7,NCNAOSF);
 /* line 651: */
YCEAOSF_oneline( A_HISVEC(OCNAOSF,ZBNAOSF,5,A68_52 ), &PCNAOSF );
PBNAOSF.Help = A_UNITE(QCNAOSF,mode1,1,PCNAOSF);
EDNAOSF.fn.fn_global = TCNAOSF_anonymous;
EDNAOSF.nonlocals = A68_NIL;
DDNAOSF = EDNAOSF ;
PBNAOSF.Command = A_UNITE(CDNAOSF,mode3,3,DDNAOSF);
 /* line 662: */
FDNAOSF = A_HEAP(A68_208 ) ;
(*FDNAOSF) = PBNAOSF ;
JAMAOSF.data[15] = A_UNITE(GDNAOSF,mode1,1,FDNAOSF);
 /* line 663: */
ZCAAOSF_makervc( JDNAOSF, &KDNAOSF );
HDNAOSF.Name = KDNAOSF;
NCAAOSF_makervc( '!', &LDNAOSF );
HDNAOSF.Abreviation = LDNAOSF;
 /* line 664: */
EGFAOSF_opt( BBKAOSF_text_syntax, &MDNAOSF );
HDNAOSF.Parameter = A_UNITE(NDNAOSF,mode2,2,MDNAOSF);
HDNAOSF.Access = QZHAOSF_normalaccess;
 /* line 665: */
HDNAOSF.Continuation = SAIAOSF_continue;
ODNAOSF.data[0] = QDNAOSF;
NREAOSF_facility(  &RDNAOSF );
ODNAOSF.data[1] = RDNAOSF;
 /* line 666: */
ODNAOSF.data[2] = TDNAOSF;
 /* line 667: */
ODNAOSF.data[3] = XUEAOSF_os_string;
ODNAOSF.data[4] = VDNAOSF;
 /* line 668: */
ODNAOSF.data[5] = XUEAOSF_os_string;
ODNAOSF.data[6] = XDNAOSF;
 /* line 669: */
NREAOSF_facility(  &YDNAOSF );
ODNAOSF.data[7] = YDNAOSF;
ODNAOSF.data[8] = AENAOSF;
 /* line 670: */
JDAAOSF_concat( A_HISVEC(BENAOSF,ODNAOSF,9,A68_VC ), &CENAOSF );
HDNAOSF.Help = A_UNITE(DENAOSF,mode1,1,CENAOSF);
KENAOSF.fn.fn_global = GENAOSF_anonymous;
KENAOSF.nonlocals = A68_NIL;
JENAOSF = KENAOSF ;
HDNAOSF.Command = A_UNITE(IENAOSF,mode3,3,JENAOSF);
 /* line 674: */
LENAOSF = A_HEAP(A68_208 ) ;
(*LENAOSF) = HDNAOSF ;
JAMAOSF.data[16] = A_UNITE(MENAOSF,mode1,1,LENAOSF);
 /* line 675: */
ZCAAOSF_makervc( PENAOSF, &QENAOSF );
NENAOSF.Name = QENAOSF;
NCAAOSF_makervc( '$', &RENAOSF );
NENAOSF.Abreviation = RENAOSF;
 /* line 676: */
EGFAOSF_opt( BBKAOSF_text_syntax, &SENAOSF );
NENAOSF.Parameter = A_UNITE(TENAOSF,mode2,2,SENAOSF);
NENAOSF.Access = UZHAOSF_hiddenaccess;
NENAOSF.Continuation = SAIAOSF_continue;
 /* line 677: */
ZCAAOSF_makervc( VENAOSF, &WENAOSF );
NENAOSF.Help = A_UNITE(XENAOSF,mode1,1,WENAOSF);
EFNAOSF.fn.fn_global = AFNAOSF_anonymous;
EFNAOSF.nonlocals = A68_NIL;
DFNAOSF = EFNAOSF ;
NENAOSF.Command = A_UNITE(CFNAOSF,mode3,3,DFNAOSF);
 /* line 681: */
FFNAOSF = A_HEAP(A68_208 ) ;
(*FFNAOSF) = NENAOSF ;
JAMAOSF.data[17] = A_UNITE(GFNAOSF,mode1,1,FFNAOSF);
 /* line 682: */
ZCAAOSF_makervc( JFNAOSF, &KFNAOSF );
HFNAOSF.Name = KFNAOSF;
 /* line 683: */
ZCAAOSF_makervc( MFNAOSF, &NFNAOSF );
HFNAOSF.Abreviation = NFNAOSF;
HFNAOSF.Parameter = LEFAOSF_noparameters;
HFNAOSF.Access = QZHAOSF_normalaccess;
 /* line 685: */
HFNAOSF.Continuation = SAIAOSF_continue;
 /* line 686: */
ZCAAOSF_makervc( PFNAOSF, &QFNAOSF );
HFNAOSF.Help = A_UNITE(RFNAOSF,mode1,1,QFNAOSF);
XFNAOSF.fn.fn_global = UFNAOSF_anonymous;
XFNAOSF.nonlocals = A68_NIL;
WFNAOSF = XFNAOSF ;
HFNAOSF.Command = A_UNITE(VFNAOSF,mode3,3,WFNAOSF);
 /* line 689: */
YFNAOSF = A_HEAP(A68_208 ) ;
(*YFNAOSF) = HFNAOSF ;
JAMAOSF.data[18] = A_UNITE(ZFNAOSF,mode1,1,YFNAOSF);
 /* line 690: */
ZCAAOSF_makervc( CGNAOSF, &DGNAOSF );
AGNAOSF.Name = DGNAOSF;
 /* line 691: */
ZCAAOSF_makervc( FGNAOSF, &GGNAOSF );
AGNAOSF.Abreviation = GGNAOSF;
AGNAOSF.Parameter = LEFAOSF_noparameters;
AGNAOSF.Access = QZHAOSF_normalaccess;
 /* line 693: */
AGNAOSF.Continuation = SAIAOSF_continue;
 /* line 694: */
ZCAAOSF_makervc( IGNAOSF, &JGNAOSF );
AGNAOSF.Help = A_UNITE(KGNAOSF,mode1,1,JGNAOSF);
QGNAOSF.fn.fn_global = NGNAOSF_anonymous;
QGNAOSF.nonlocals = A68_NIL;
PGNAOSF = QGNAOSF ;
AGNAOSF.Command = A_UNITE(OGNAOSF,mode3,3,PGNAOSF);
 /* line 697: */
RGNAOSF = A_HEAP(A68_208 ) ;
(*RGNAOSF) = AGNAOSF ;
JAMAOSF.data[19] = A_UNITE(SGNAOSF,mode1,1,RGNAOSF);
 /* line 698: */
ZCAAOSF_makervc( VGNAOSF, &WGNAOSF );
TGNAOSF.Name = WGNAOSF;
 /* line 699: */
ZCAAOSF_makervc( YGNAOSF, &ZGNAOSF );
TGNAOSF.Abreviation = ZGNAOSF;
TGNAOSF.Parameter = AAKAOSF_filename_syntax;
TGNAOSF.Access = QZHAOSF_normalaccess;
 /* line 700: */
TGNAOSF.Continuation = SAIAOSF_continue;
 /* line 701: */
ZCAAOSF_makervc( BHNAOSF, &CHNAOSF );
TGNAOSF.Help = A_UNITE(DHNAOSF,mode1,1,CHNAOSF);
LHNAOSF.fn.fn_global = GHNAOSF_anonymous;
LHNAOSF.nonlocals = A68_NIL;
KHNAOSF = LHNAOSF ;
TGNAOSF.Command = A_UNITE(JHNAOSF,mode3,3,KHNAOSF);
 /* line 706: */
MHNAOSF = A_HEAP(A68_208 ) ;
(*MHNAOSF) = TGNAOSF ;
JAMAOSF.data[20] = A_UNITE(NHNAOSF,mode1,1,MHNAOSF);
 /* line 707: */
 /* line 708: */
 /* line 709: */
ZCAAOSF_makervc( SHNAOSF, &THNAOSF );
QHNAOSF.Name = THNAOSF;
NCAAOSF_makervc( 'S', &UHNAOSF );
QHNAOSF.Abreviation = UHNAOSF;
 /* line 710: */
QHNAOSF.Parameter = TTJAOSF_int_syntax;
QHNAOSF.Access = KAIAOSF_secretprivateaccess;
 /* line 711: */
QHNAOSF.Continuation = SAIAOSF_continue;
 /* line 712: */
ZCAAOSF_makervc( WHNAOSF, &XHNAOSF );
QHNAOSF.Help = A_UNITE(YHNAOSF,mode1,1,XHNAOSF);
QINAOSF.fn.fn_global = BINAOSF_anonymous;
QINAOSF.nonlocals = A68_NIL;
PINAOSF = QINAOSF ;
QHNAOSF.Command = A_UNITE(OINAOSF,mode3,3,PINAOSF);
 /* line 720: */
RINAOSF = A_HEAP(A68_208 ) ;
(*RINAOSF) = QHNAOSF ;
PHNAOSF.data[0] = A_UNITE(SINAOSF,mode1,1,RINAOSF);
 /* line 721: */
ZCAAOSF_makervc( VINAOSF, &WINAOSF );
TINAOSF.Name = WINAOSF;
NCAAOSF_makervc( 'H', &XINAOSF );
TINAOSF.Abreviation = XINAOSF;
TINAOSF.Parameter = TTJAOSF_int_syntax;
 /* line 722: */
TINAOSF.Access = KAIAOSF_secretprivateaccess;
 /* line 724: */
TINAOSF.Continuation = SAIAOSF_continue;
 /* line 725: */
ZCAAOSF_makervc( ZINAOSF, &AJNAOSF );
TINAOSF.Help = A_UNITE(BJNAOSF,mode1,1,AJNAOSF);
 /* line 729: */
NJNAOSF.fn.fn_global = EJNAOSF_anonymous;
NJNAOSF.nonlocals = A68_NIL;
MJNAOSF = NJNAOSF ;
TINAOSF.Command = A_UNITE(LJNAOSF,mode3,3,MJNAOSF);
 /* line 730: */
OJNAOSF = A_HEAP(A68_208 ) ;
(*OJNAOSF) = TINAOSF ;
PHNAOSF.data[1] = A_UNITE(PJNAOSF,mode1,1,OJNAOSF);
 /* line 732: */
UJNAOSF = GFIAOSF_make_group(SJNAOSF, A_HVEC(RJNAOSF,'O',A68_CHAR ), KAIAOSF_secretprivateaccess, A_HISVEC(QJNAOSF,PHNAOSF,2,A68_207 )) ;
JAMAOSF.data[21] = A_UNITE(TJNAOSF,mode2,2,UJNAOSF);
 /* line 733: */
ZCAAOSF_makervc( XJNAOSF, &YJNAOSF );
VJNAOSF.Name = YJNAOSF;
 /* line 734: */
VJNAOSF.Abreviation = IHDAOSF_nullstr;
EGFAOSF_opt( TTJAOSF_int_syntax, &ZJNAOSF );
VJNAOSF.Parameter = A_UNITE(AKNAOSF,mode2,2,ZJNAOSF);
VJNAOSF.Access = QZHAOSF_normalaccess;
 /* line 735: */
VJNAOSF.Continuation = SAIAOSF_continue;
 /* line 736: */
ZCAAOSF_makervc( CKNAOSF, &DKNAOSF );
VJNAOSF.Help = A_UNITE(EKNAOSF,mode1,1,DKNAOSF);
KKNAOSF.fn.fn_global = HKNAOSF_anonymous;
KKNAOSF.nonlocals = A68_NIL;
JKNAOSF = KKNAOSF ;
VJNAOSF.Command = A_UNITE(IKNAOSF,mode3,3,JKNAOSF);
 /* line 740: */
LKNAOSF = A_HEAP(A68_208 ) ;
(*LKNAOSF) = VJNAOSF ;
JAMAOSF.data[22] = A_UNITE(MKNAOSF,mode1,1,LKNAOSF);
 /* line 741: */
 /* line 742: */
ZCAAOSF_makervc( RKNAOSF, &SKNAOSF );
PKNAOSF.Name = SKNAOSF;
ZCAAOSF_makervc( UKNAOSF, &VKNAOSF );
PKNAOSF.Abreviation = VKNAOSF;
 /* line 743: */
PKNAOSF.Parameter = LEFAOSF_noparameters;
PKNAOSF.Access = UZHAOSF_hiddenaccess;
 /* line 744: */
PKNAOSF.Continuation = SAIAOSF_continue;
 /* line 745: */
 /* line 746: */
WKNAOSF.data[0] = YKNAOSF;
NREAOSF_facility(  &ZKNAOSF );
WKNAOSF.data[1] = ZKNAOSF;
 /* line 747: */
JDAAOSF_concat( A_HISVEC(ALNAOSF,WKNAOSF,2,A68_VC ), &BLNAOSF );
PKNAOSF.Help = A_UNITE(CLNAOSF,mode1,1,BLNAOSF);
ILNAOSF.fn.fn_global = FLNAOSF_anonymous;
ILNAOSF.nonlocals = A68_NIL;
HLNAOSF = ILNAOSF ;
PKNAOSF.Command = A_UNITE(GLNAOSF,mode3,3,HLNAOSF);
 /* line 751: */
JLNAOSF = A_HEAP(A68_208 ) ;
(*JLNAOSF) = PKNAOSF ;
OKNAOSF.data[0] = A_UNITE(KLNAOSF,mode1,1,JLNAOSF);
 /* line 752: */
ZCAAOSF_makervc( NLNAOSF, &OLNAOSF );
LLNAOSF.Name = OLNAOSF;
ZCAAOSF_makervc( QLNAOSF, &RLNAOSF );
LLNAOSF.Abreviation = RLNAOSF;
 /* line 753: */
LLNAOSF.Parameter = LEFAOSF_noparameters;
LLNAOSF.Access = QZHAOSF_normalaccess;
 /* line 754: */
LLNAOSF.Continuation = SAIAOSF_continue;
 /* line 755: */
SLNAOSF.data[0] = ULNAOSF;
NREAOSF_facility(  &VLNAOSF );
SLNAOSF.data[1] = VLNAOSF;
 /* line 756: */
JDAAOSF_concat( A_HISVEC(WLNAOSF,SLNAOSF,2,A68_VC ), &XLNAOSF );
LLNAOSF.Help = A_UNITE(YLNAOSF,mode1,1,XLNAOSF);
EMNAOSF.fn.fn_global = BMNAOSF_anonymous;
EMNAOSF.nonlocals = A68_NIL;
DMNAOSF = EMNAOSF ;
LLNAOSF.Command = A_UNITE(CMNAOSF,mode3,3,DMNAOSF);
 /* line 759: */
FMNAOSF = A_HEAP(A68_208 ) ;
(*FMNAOSF) = LLNAOSF ;
OKNAOSF.data[1] = A_UNITE(GMNAOSF,mode1,1,FMNAOSF);
 /* line 760: */
ZCAAOSF_makervc( JMNAOSF, &KMNAOSF );
HMNAOSF.Name = KMNAOSF;
HMNAOSF.Abreviation = CHDAOSF_nilstr;
 /* line 761: */
HMNAOSF.Parameter = LEFAOSF_noparameters;
HMNAOSF.Access = KAIAOSF_secretprivateaccess;
 /* line 762: */
HMNAOSF.Continuation = SAIAOSF_continue;
 /* line 763: */
ZCAAOSF_makervc( MMNAOSF, &NMNAOSF );
HMNAOSF.Help = A_UNITE(OMNAOSF,mode1,1,NMNAOSF);
CNNAOSF.fn.fn_global = RMNAOSF_anonymous;
CNNAOSF.nonlocals = A68_NIL;
BNNAOSF = CNNAOSF ;
HMNAOSF.Command = A_UNITE(ANNAOSF,mode3,3,BNNAOSF);
 /* line 767: */
DNNAOSF = A_HEAP(A68_208 ) ;
(*DNNAOSF) = HMNAOSF ;
OKNAOSF.data[2] = A_UNITE(ENNAOSF,mode1,1,DNNAOSF);
 /* line 768: */
ZCAAOSF_makervc( HNNAOSF, &INNAOSF );
FNNAOSF.Name = INNAOSF;
ZCAAOSF_makervc( KNNAOSF, &LNNAOSF );
FNNAOSF.Abreviation = LNNAOSF;
 /* line 769: */
FNNAOSF.Parameter = LEFAOSF_noparameters;
FNNAOSF.Access = KAIAOSF_secretprivateaccess;
 /* line 770: */
FNNAOSF.Continuation = SAIAOSF_continue;
 /* line 771: */
ZCAAOSF_makervc( NNNAOSF, &ONNAOSF );
FNNAOSF.Help = A_UNITE(PNNAOSF,mode1,1,ONNAOSF);
DONAOSF.fn.fn_global = SNNAOSF_anonymous;
DONAOSF.nonlocals = A68_NIL;
CONAOSF = DONAOSF ;
FNNAOSF.Command = A_UNITE(BONAOSF,mode3,3,CONAOSF);
 /* line 775: */
EONAOSF = A_HEAP(A68_208 ) ;
(*EONAOSF) = FNNAOSF ;
OKNAOSF.data[3] = A_UNITE(FONAOSF,mode1,1,EONAOSF);
 /* line 776: */
ZCAAOSF_makervc( IONAOSF, &JONAOSF );
GONAOSF.Name = JONAOSF;
 /* line 777: */
ZCAAOSF_makervc( LONAOSF, &MONAOSF );
GONAOSF.Abreviation = MONAOSF;
GONAOSF.Parameter = LEFAOSF_noparameters;
GONAOSF.Access = QZHAOSF_normalaccess;
 /* line 778: */
GONAOSF.Continuation = SAIAOSF_continue;
 /* line 779: */
ZCAAOSF_makervc( OONAOSF, &PONAOSF );
GONAOSF.Help = A_UNITE(QONAOSF,mode1,1,PONAOSF);
WONAOSF.fn.fn_global = TONAOSF_anonymous;
WONAOSF.nonlocals = A68_NIL;
VONAOSF = WONAOSF ;
GONAOSF.Command = A_UNITE(UONAOSF,mode3,3,VONAOSF);
 /* line 782: */
XONAOSF = A_HEAP(A68_208 ) ;
(*XONAOSF) = GONAOSF ;
OKNAOSF.data[4] = A_UNITE(YONAOSF,mode1,1,XONAOSF);
 /* line 783: */
ZCAAOSF_makervc( BPNAOSF, &CPNAOSF );
ZONAOSF.Name = CPNAOSF;
 /* line 784: */
NCAAOSF_makervc( 'V', &DPNAOSF );
ZONAOSF.Abreviation = DPNAOSF;
WGFAOSF_star( TXJAOSF_name_syntax, &EPNAOSF );
EGFAOSF_opt( A_UNITE(FPNAOSF,mode2,2,EPNAOSF), &GPNAOSF );
ZONAOSF.Parameter = A_UNITE(HPNAOSF,mode2,2,GPNAOSF);
ZONAOSF.Access = QZHAOSF_normalaccess;
 /* line 785: */
ZONAOSF.Continuation = SAIAOSF_continue;
IPNAOSF.data[0] = KPNAOSF;
 /* line 786: */
NREAOSF_facility(  &LPNAOSF );
IPNAOSF.data[1] = LPNAOSF;
IPNAOSF.data[2] = NPNAOSF;
 /* line 787: */
NREAOSF_facility(  &OPNAOSF );
IPNAOSF.data[3] = OPNAOSF;
IPNAOSF.data[4] = QPNAOSF;
 /* line 788: */
NREAOSF_facility(  &RPNAOSF );
IPNAOSF.data[5] = RPNAOSF;
 /* line 789: */
IPNAOSF.data[6] = TPNAOSF;
NREAOSF_facility(  &UPNAOSF );
IPNAOSF.data[7] = UPNAOSF;
IPNAOSF.data[8] = A_HVEC(VPNAOSF,'.',A68_CHAR );
 /* line 790: */
JDAAOSF_concat( A_HISVEC(WPNAOSF,IPNAOSF,9,A68_VC ), &XPNAOSF );
ZONAOSF.Help = A_UNITE(YPNAOSF,mode1,1,XPNAOSF);
 /* line 797: */
KQNAOSF.fn.fn_global = BQNAOSF_anonymous;
KQNAOSF.nonlocals = A68_NIL;
JQNAOSF = KQNAOSF ;
ZONAOSF.Command = A_UNITE(IQNAOSF,mode3,3,JQNAOSF);
 /* line 798: */
LQNAOSF = A_HEAP(A68_208 ) ;
(*LQNAOSF) = ZONAOSF ;
OKNAOSF.data[5] = A_UNITE(MQNAOSF,mode1,1,LQNAOSF);
 /* line 801: */
RQNAOSF = GFIAOSF_make_group(PQNAOSF, A_HVEC(OQNAOSF,'P',A68_CHAR ), QZHAOSF_normalaccess, A_HISVEC(NQNAOSF,OKNAOSF,6,A68_207 )) ;
JAMAOSF.data[23] = A_UNITE(QQNAOSF,mode2,2,RQNAOSF);
 /* line 802: */
 /* line 803: */
 /* line 804: */
TYLAOSF_specialrvc( WQNAOSF, &XQNAOSF );
UQNAOSF.Name = XQNAOSF;
UQNAOSF.Abreviation = IHDAOSF_nullstr;
 /* line 805: */
UQNAOSF.Parameter = LEFAOSF_noparameters;
UQNAOSF.Access = KAIAOSF_secretprivateaccess;
UQNAOSF.Continuation = SAIAOSF_continue;
 /* line 806: */
UQNAOSF.Help = A_UNITE(YQNAOSF,mode1,1,IHDAOSF_nullstr);
NRNAOSF.fn.fn_global = BRNAOSF_anonymous;
NRNAOSF.nonlocals = A68_NIL;
MRNAOSF = NRNAOSF ;
UQNAOSF.Command = A_UNITE(LRNAOSF,mode3,3,MRNAOSF);
 /* line 812: */
ORNAOSF = A_HEAP(A68_208 ) ;
(*ORNAOSF) = UQNAOSF ;
TQNAOSF.data[0] = A_UNITE(PRNAOSF,mode1,1,ORNAOSF);
 /* line 813: */
 /* line 814: */
 /* line 815: */
A_CALLPROC(TZLAOSF_pchars,( &TRNAOSF),( &TRNAOSF,(TZLAOSF_pchars).nonlocals));
SRNAOSF.Name = TRNAOSF;
SRNAOSF.Abreviation = IHDAOSF_nullstr;
SRNAOSF.Parameter = LEFAOSF_noparameters;
SRNAOSF.Access = YZHAOSF_secretaccess;
 /* line 816: */
SRNAOSF.Continuation = SAIAOSF_continue;
 /* line 817: */
SRNAOSF.Help = A_UNITE(URNAOSF,mode1,1,IHDAOSF_nullstr);
ESNAOSF.fn.fn_global = XRNAOSF_anonymous;
ESNAOSF.nonlocals = A68_NIL;
DSNAOSF = ESNAOSF ;
SRNAOSF.Command = A_UNITE(CSNAOSF,mode3,3,DSNAOSF);
 /* line 823: */
FSNAOSF = A_HEAP(A68_208 ) ;
(*FSNAOSF) = SRNAOSF ;
RRNAOSF.data[0] = A_UNITE(GSNAOSF,mode1,1,FSNAOSF);
 /* line 824: */
ZCAAOSF_makervc( JSNAOSF, &KSNAOSF );
HSNAOSF.Name = KSNAOSF;
HSNAOSF.Abreviation = IHDAOSF_nullstr;
 /* line 825: */
HSNAOSF.Parameter = LEFAOSF_noparameters;
HSNAOSF.Access = YZHAOSF_secretaccess;
HSNAOSF.Continuation = SAIAOSF_continue;
 /* line 826: */
HSNAOSF.Help = A_UNITE(LSNAOSF,mode1,1,IHDAOSF_nullstr);
 /* line 829: */
SSNAOSF.fn.fn_global = OSNAOSF_anonymous;
SSNAOSF.nonlocals = A68_NIL;
RSNAOSF = SSNAOSF ;
HSNAOSF.Command = A_UNITE(QSNAOSF,mode3,3,RSNAOSF);
TSNAOSF = A_HEAP(A68_208 ) ;
(*TSNAOSF) = HSNAOSF ;
RRNAOSF.data[1] = A_UNITE(USNAOSF,mode1,1,TSNAOSF);
 /* line 830: */
 /* line 831: */
TYLAOSF_specialrvc( WSNAOSF, &XSNAOSF );
ZSNAOSF = GFIAOSF_make_group(XSNAOSF, IHDAOSF_nullstr, YZHAOSF_secretaccess, A_HISVEC(VSNAOSF,RRNAOSF,2,A68_207 )) ;
TQNAOSF.data[1] = A_UNITE(YSNAOSF,mode2,2,ZSNAOSF);
 /* line 833: */
TYLAOSF_specialrvc( BTNAOSF, &CTNAOSF );
ETNAOSF = GFIAOSF_make_group(CTNAOSF, IHDAOSF_nullstr, YZHAOSF_secretaccess, A_HISVEC(ATNAOSF,TQNAOSF,2,A68_207 )) ;
JAMAOSF.data[24] = A_UNITE(DTNAOSF,mode2,2,ETNAOSF);
 /* line 834: */
ZCAAOSF_makervc( HTNAOSF, &ITNAOSF );
FTNAOSF.Name = ITNAOSF;
 /* line 835: */
ZCAAOSF_makervc( KTNAOSF, &LTNAOSF );
FTNAOSF.Abreviation = LTNAOSF;
FTNAOSF.Parameter = LEFAOSF_noparameters;
FTNAOSF.Access = QZHAOSF_normalaccess;
 /* line 837: */
FTNAOSF.Continuation = SAIAOSF_continue;
 /* line 838: */
ZCAAOSF_makervc( NTNAOSF, &OTNAOSF );
FTNAOSF.Help = A_UNITE(PTNAOSF,mode1,1,OTNAOSF);
VTNAOSF.fn.fn_global = STNAOSF_anonymous;
VTNAOSF.nonlocals = A68_NIL;
UTNAOSF = VTNAOSF ;
FTNAOSF.Command = A_UNITE(TTNAOSF,mode3,3,UTNAOSF);
 /* line 841: */
WTNAOSF = A_HEAP(A68_208 ) ;
(*WTNAOSF) = FTNAOSF ;
JAMAOSF.data[25] = A_UNITE(XTNAOSF,mode1,1,WTNAOSF);
 /* line 842: */
ZCAAOSF_makervc( AUNAOSF, &BUNAOSF );
YTNAOSF.Name = BUNAOSF;
YTNAOSF.Abreviation = IHDAOSF_nullstr;
YTNAOSF.Parameter = BBKAOSF_text_syntax;
YTNAOSF.Access = UZHAOSF_hiddenaccess;
 /* line 844: */
YTNAOSF.Continuation = SAIAOSF_continue;
 /* line 845: */
 /* line 846: */
ZCAAOSF_makervc( DUNAOSF, &EUNAOSF );
YTNAOSF.Help = A_UNITE(FUNAOSF,mode1,1,EUNAOSF);
RXNAOSF.fn.fn_global = IUNAOSF_anonymous;
RXNAOSF.nonlocals = A68_NIL;
QXNAOSF = RXNAOSF ;
YTNAOSF.Command = A_UNITE(PXNAOSF,mode3,3,QXNAOSF);
 /* line 878: */
SXNAOSF = A_HEAP(A68_208 ) ;
(*SXNAOSF) = YTNAOSF ;
JAMAOSF.data[26] = A_UNITE(TXNAOSF,mode1,1,SXNAOSF);
 /* line 879: */
ZCAAOSF_makervc( WXNAOSF, &XXNAOSF );
UXNAOSF.Name = XXNAOSF;
UXNAOSF.Abreviation = IHDAOSF_nullstr;
YXNAOSF.data[0] = AAKAOSF_filename_syntax;
YXNAOSF.data[1] = BBKAOSF_text_syntax;
 /* line 880: */
TFFAOSF_prod( A_HISVEC(ZXNAOSF,YXNAOSF,2,A68_212 ), &AYNAOSF );
UXNAOSF.Parameter = A_UNITE(BYNAOSF,mode2,2,AYNAOSF);
UXNAOSF.Access = YZHAOSF_secretaccess;
 /* line 882: */
UXNAOSF.Continuation = SAIAOSF_continue;
 /* line 883: */
 /* line 884: */
 /* line 885: */
ZCAAOSF_makervc( DYNAOSF, &EYNAOSF );
UXNAOSF.Help = A_UNITE(FYNAOSF,mode1,1,EYNAOSF);
NZNAOSF.fn.fn_global = IYNAOSF_anonymous;
NZNAOSF.nonlocals = A68_NIL;
MZNAOSF = NZNAOSF ;
UXNAOSF.Command = A_UNITE(LZNAOSF,mode3,3,MZNAOSF);
 /* line 899: */
OZNAOSF = A_HEAP(A68_208 ) ;
(*OZNAOSF) = UXNAOSF ;
JAMAOSF.data[27] = A_UNITE(PZNAOSF,mode1,1,OZNAOSF);
 /* line 900: */
ZCAAOSF_makervc( SZNAOSF, &TZNAOSF );
QZNAOSF.Name = TZNAOSF;
 /* line 901: */
ZCAAOSF_makervc( VZNAOSF, &WZNAOSF );
QZNAOSF.Abreviation = WZNAOSF;
QZNAOSF.Parameter = AAKAOSF_filename_syntax;
QZNAOSF.Access = QZHAOSF_normalaccess;
 /* line 902: */
QZNAOSF.Continuation = SAIAOSF_continue;
BAOAOSF = ZZNAOSF ;
XZNAOSF.data[0] = A_UNITE(AAOAOSF,mode7,7,BAOAOSF);
 /* line 905: */
XZNAOSF.data[1] = A_UNITE(CAOAOSF,mode7,7,UZJAOSF_filename_str);
 /* line 906: */
GAOAOSF = EAOAOSF ;
XZNAOSF.data[2] = A_UNITE(FAOAOSF,mode7,7,GAOAOSF);
 /* line 907: */
YCEAOSF_oneline( A_HISVEC(HAOAOSF,XZNAOSF,3,A68_52 ), &IAOAOSF );
QZNAOSF.Help = A_UNITE(JAOAOSF,mode1,1,IAOAOSF);
TAOAOSF.fn.fn_global = MAOAOSF_anonymous;
TAOAOSF.nonlocals = A68_NIL;
SAOAOSF = TAOAOSF ;
QZNAOSF.Command = A_UNITE(RAOAOSF,mode3,3,SAOAOSF);
 /* line 914: */
UAOAOSF = A_HEAP(A68_208 ) ;
(*UAOAOSF) = QZNAOSF ;
JAMAOSF.data[28] = A_UNITE(VAOAOSF,mode1,1,UAOAOSF);
 /* line 915: */
ZCAAOSF_makervc( YAOAOSF, &ZAOAOSF );
WAOAOSF.Name = ZAOAOSF;
WAOAOSF.Abreviation = IHDAOSF_nullstr;
WAOAOSF.Parameter = LEFAOSF_noparameters;
WAOAOSF.Access = QZHAOSF_normalaccess;
 /* line 916: */
WAOAOSF.Continuation = WAIAOSF_return;
 /* line 921: */
TBOAOSF.fn.fn_global = CBOAOSF_anonymous;
TBOAOSF.nonlocals = A68_NIL;
SBOAOSF = TBOAOSF ;
WAOAOSF.Help = A_UNITE(RBOAOSF,mode3,3,SBOAOSF);
VBOAOSF.fn.fn_global = FZHAOSF_nullcommand;
VBOAOSF.nonlocals = A68_NIL;
WAOAOSF.Command = A_UNITE(UBOAOSF,mode2,2,VBOAOSF);
 /* line 923: */
WBOAOSF = A_HEAP(A68_208 ) ;
(*WBOAOSF) = WAOAOSF ;
JAMAOSF.data[29] = A_UNITE(XBOAOSF,mode1,1,WBOAOSF);
 /* line 924: */
ZCAAOSF_makervc( ACOAOSF, &BCOAOSF );
YBOAOSF.Name = BCOAOSF;
YBOAOSF.Abreviation = IHDAOSF_nullstr;
YBOAOSF.Parameter = LEFAOSF_noparameters;
YBOAOSF.Access = YZHAOSF_secretaccess;
 /* line 925: */
YBOAOSF.Continuation = WAIAOSF_return;
 /* line 930: */
VCOAOSF.fn.fn_global = ECOAOSF_anonymous;
VCOAOSF.nonlocals = A68_NIL;
UCOAOSF = VCOAOSF ;
YBOAOSF.Help = A_UNITE(TCOAOSF,mode3,3,UCOAOSF);
XCOAOSF.fn.fn_global = FZHAOSF_nullcommand;
XCOAOSF.nonlocals = A68_NIL;
YBOAOSF.Command = A_UNITE(WCOAOSF,mode2,2,XCOAOSF);
 /* line 932: */
YCOAOSF = A_HEAP(A68_208 ) ;
(*YCOAOSF) = YBOAOSF ;
JAMAOSF.data[30] = A_UNITE(ZCOAOSF,mode1,1,YCOAOSF);
 /* line 933: */
ZCAAOSF_makervc( CDOAOSF, &DDOAOSF );
ADOAOSF.Name = DDOAOSF;
ADOAOSF.Abreviation = IHDAOSF_nullstr;
ADOAOSF.Parameter = LEFAOSF_noparameters;
ADOAOSF.Access = QZHAOSF_normalaccess;
 /* line 934: */
ADOAOSF.Continuation = WAIAOSF_return;
 /* line 939: */
XDOAOSF.fn.fn_global = GDOAOSF_anonymous;
XDOAOSF.nonlocals = A68_NIL;
WDOAOSF = XDOAOSF ;
ADOAOSF.Help = A_UNITE(VDOAOSF,mode3,3,WDOAOSF);
ZDOAOSF.fn.fn_global = FZHAOSF_nullcommand;
ZDOAOSF.nonlocals = A68_NIL;
ADOAOSF.Command = A_UNITE(YDOAOSF,mode2,2,ZDOAOSF);
 /* line 941: */
AEOAOSF = A_HEAP(A68_208 ) ;
(*AEOAOSF) = ADOAOSF ;
JAMAOSF.data[31] = A_UNITE(BEOAOSF,mode1,1,AEOAOSF);
 /* line 942: */
ZCAAOSF_makervc( EEOAOSF, &FEOAOSF );
CEOAOSF.Name = FEOAOSF;
CEOAOSF.Abreviation = IHDAOSF_nullstr;
CEOAOSF.Parameter = LEFAOSF_noparameters;
CEOAOSF.Access = UZHAOSF_hiddenaccess;
 /* line 943: */
CEOAOSF.Continuation = WAIAOSF_return;
 /* line 948: */
ZEOAOSF.fn.fn_global = IEOAOSF_anonymous;
ZEOAOSF.nonlocals = A68_NIL;
YEOAOSF = ZEOAOSF ;
CEOAOSF.Help = A_UNITE(XEOAOSF,mode3,3,YEOAOSF);
BFOAOSF.fn.fn_global = FZHAOSF_nullcommand;
BFOAOSF.nonlocals = A68_NIL;
CEOAOSF.Command = A_UNITE(AFOAOSF,mode2,2,BFOAOSF);
 /* line 950: */
CFOAOSF = A_HEAP(A68_208 ) ;
(*CFOAOSF) = CEOAOSF ;
JAMAOSF.data[32] = A_UNITE(DFOAOSF,mode1,1,CFOAOSF);
 /* line 951: */
ZCAAOSF_makervc( GFOAOSF, &HFOAOSF );
EFOAOSF.Name = HFOAOSF;
EFOAOSF.Abreviation = IHDAOSF_nullstr;
 /* line 952: */
EFOAOSF.Parameter = WFKAOSF_switch_syntax;
EFOAOSF.Access = KAIAOSF_secretprivateaccess;
 /* line 953: */
EFOAOSF.Continuation = SAIAOSF_continue;
 /* line 954: */
ZCAAOSF_makervc( JFOAOSF, &KFOAOSF );
EFOAOSF.Help = A_UNITE(LFOAOSF,mode1,1,KFOAOSF);
AGOAOSF.fn.fn_global = OFOAOSF_anonymous;
AGOAOSF.nonlocals = A68_NIL;
ZFOAOSF = AGOAOSF ;
EFOAOSF.Command = A_UNITE(YFOAOSF,mode3,3,ZFOAOSF);
 /* line 960: */
BGOAOSF = A_HEAP(A68_208 ) ;
(*BGOAOSF) = EFOAOSF ;
JAMAOSF.data[33] = A_UNITE(CGOAOSF,mode1,1,BGOAOSF);
 /* line 961: */
 /* line 962: */
ZCAAOSF_makervc( HGOAOSF, &IGOAOSF );
FGOAOSF.Name = IGOAOSF;
 /* line 963: */
ZCAAOSF_makervc( KGOAOSF, &LGOAOSF );
FGOAOSF.Abreviation = LGOAOSF;
FGOAOSF.Parameter = TTJAOSF_int_syntax;
FGOAOSF.Access = UZHAOSF_hiddenaccess;
 /* line 965: */
FGOAOSF.Continuation = SAIAOSF_continue;
 /* line 966: */
 /* line 967: */
 /* line 970: */
 /* line 971: */
 /* line 972: */
ZCAAOSF_makervc( NGOAOSF, &OGOAOSF );
FGOAOSF.Help = A_UNITE(PGOAOSF,mode1,1,OGOAOSF);
GHOAOSF.fn.fn_global = SGOAOSF_anonymous;
GHOAOSF.nonlocals = A68_NIL;
FHOAOSF = GHOAOSF ;
FGOAOSF.Command = A_UNITE(EHOAOSF,mode3,3,FHOAOSF);
 /* line 978: */
HHOAOSF = A_HEAP(A68_208 ) ;
(*HHOAOSF) = FGOAOSF ;
EGOAOSF.data[0] = A_UNITE(IHOAOSF,mode1,1,HHOAOSF);
 /* line 979: */
ZCAAOSF_makervc( LHOAOSF, &MHOAOSF );
JHOAOSF.Name = MHOAOSF;
 /* line 980: */
NCAAOSF_makervc( 'W', &NHOAOSF );
JHOAOSF.Abreviation = NHOAOSF;
EGFAOSF_opt( TTJAOSF_int_syntax, &OHOAOSF );
JHOAOSF.Parameter = A_UNITE(PHOAOSF,mode2,2,OHOAOSF);
JHOAOSF.Access = QZHAOSF_normalaccess;
 /* line 981: */
JHOAOSF.Continuation = SAIAOSF_continue;
 /* line 987: */
LIOAOSF.fn.fn_global = SHOAOSF_anonymous;
LIOAOSF.nonlocals = A68_NIL;
KIOAOSF = LIOAOSF ;
JHOAOSF.Help = A_UNITE(JIOAOSF,mode3,3,KIOAOSF);
RIOAOSF.fn.fn_global = OIOAOSF_anonymous;
RIOAOSF.nonlocals = A68_NIL;
QIOAOSF = RIOAOSF ;
JHOAOSF.Command = A_UNITE(PIOAOSF,mode3,3,QIOAOSF);
 /* line 991: */
SIOAOSF = A_HEAP(A68_208 ) ;
(*SIOAOSF) = JHOAOSF ;
EGOAOSF.data[1] = A_UNITE(TIOAOSF,mode1,1,SIOAOSF);
 /* line 992: */
ZCAAOSF_makervc( WIOAOSF, &XIOAOSF );
UIOAOSF.Name = XIOAOSF;
 /* line 993: */
NCAAOSF_makervc( 'V', &YIOAOSF );
UIOAOSF.Abreviation = YIOAOSF;
ZIOAOSF.data[0] = TXJAOSF_name_syntax;
EGFAOSF_opt( BBKAOSF_text_syntax, &AJOAOSF );
ZIOAOSF.data[1] = A_UNITE(BJOAOSF,mode2,2,AJOAOSF);
TFFAOSF_prod( A_HISVEC(CJOAOSF,ZIOAOSF,2,A68_212 ), &DJOAOSF );
UIOAOSF.Parameter = A_UNITE(EJOAOSF,mode2,2,DJOAOSF);
UIOAOSF.Access = QZHAOSF_normalaccess;
 /* line 994: */
UIOAOSF.Continuation = SAIAOSF_continue;
FJOAOSF.data[0] = HJOAOSF;
 /* line 995: */
NREAOSF_facility(  &IJOAOSF );
FJOAOSF.data[1] = IJOAOSF;
FJOAOSF.data[2] = KJOAOSF;
 /* line 996: */
NREAOSF_facility(  &LJOAOSF );
FJOAOSF.data[3] = LJOAOSF;
 /* line 997: */
FJOAOSF.data[4] = NJOAOSF;
NREAOSF_facility(  &OJOAOSF );
FJOAOSF.data[5] = OJOAOSF;
FJOAOSF.data[6] = A_HVEC(PJOAOSF,'.',A68_CHAR );
 /* line 998: */
JDAAOSF_concat( A_HISVEC(QJOAOSF,FJOAOSF,7,A68_VC ), &RJOAOSF );
UIOAOSF.Help = A_UNITE(SJOAOSF,mode1,1,RJOAOSF);
 /* line 1003: */
FKOAOSF.fn.fn_global = VJOAOSF_anonymous;
FKOAOSF.nonlocals = A68_NIL;
EKOAOSF = FKOAOSF ;
UIOAOSF.Command = A_UNITE(DKOAOSF,mode3,3,EKOAOSF);
 /* line 1004: */
GKOAOSF = A_HEAP(A68_208 ) ;
(*GKOAOSF) = UIOAOSF ;
EGOAOSF.data[2] = A_UNITE(HKOAOSF,mode1,1,GKOAOSF);
 /* line 1007: */
MKOAOSF = GFIAOSF_make_group(KKOAOSF, A_HVEC(JKOAOSF,'S',A68_CHAR ), UZHAOSF_hiddenaccess, A_HISVEC(IKOAOSF,EGOAOSF,3,A68_207 )) ;
JAMAOSF.data[34] = A_UNITE(LKOAOSF,mode2,2,MKOAOSF);
 /* line 1008: */
 /* line 1009: */
ZCAAOSF_makervc( RKOAOSF, &SKOAOSF );
PKOAOSF.Name = SKOAOSF;
 /* line 1010: */
ZCAAOSF_makervc( UKOAOSF, &VKOAOSF );
PKOAOSF.Abreviation = VKOAOSF;
PKOAOSF.Parameter = LEFAOSF_noparameters;
PKOAOSF.Access = UZHAOSF_hiddenaccess;
 /* line 1012: */
PKOAOSF.Continuation = SAIAOSF_continue;
 /* line 1013: */
 /* line 1014: */
ZCAAOSF_makervc( XKOAOSF, &YKOAOSF );
PKOAOSF.Help = A_UNITE(ZKOAOSF,mode1,1,YKOAOSF);
QLOAOSF.fn.fn_global = CLOAOSF_anonymous;
QLOAOSF.nonlocals = A68_NIL;
PLOAOSF = QLOAOSF ;
PKOAOSF.Command = A_UNITE(OLOAOSF,mode3,3,PLOAOSF);
 /* line 1027: */
RLOAOSF = A_HEAP(A68_208 ) ;
(*RLOAOSF) = PKOAOSF ;
OKOAOSF.data[0] = A_UNITE(SLOAOSF,mode1,1,RLOAOSF);
 /* line 1028: */
ZCAAOSF_makervc( VLOAOSF, &WLOAOSF );
TLOAOSF.Name = WLOAOSF;
 /* line 1029: */
ZCAAOSF_makervc( YLOAOSF, &ZLOAOSF );
TLOAOSF.Abreviation = ZLOAOSF;
TLOAOSF.Parameter = LEFAOSF_noparameters;
TLOAOSF.Access = QZHAOSF_normalaccess;
 /* line 1030: */
TLOAOSF.Continuation = SAIAOSF_continue;
 /* line 1031: */
ZCAAOSF_makervc( BMOAOSF, &CMOAOSF );
TLOAOSF.Help = A_UNITE(DMOAOSF,mode1,1,CMOAOSF);
JMOAOSF.fn.fn_global = GMOAOSF_anonymous;
JMOAOSF.nonlocals = A68_NIL;
IMOAOSF = JMOAOSF ;
TLOAOSF.Command = A_UNITE(HMOAOSF,mode3,3,IMOAOSF);
 /* line 1034: */
KMOAOSF = A_HEAP(A68_208 ) ;
(*KMOAOSF) = TLOAOSF ;
OKOAOSF.data[1] = A_UNITE(LMOAOSF,mode1,1,KMOAOSF);
 /* line 1035: */
ZCAAOSF_makervc( OMOAOSF, &PMOAOSF );
MMOAOSF.Name = PMOAOSF;
 /* line 1036: */
ZCAAOSF_makervc( RMOAOSF, &SMOAOSF );
MMOAOSF.Abreviation = SMOAOSF;
MMOAOSF.Parameter = LEFAOSF_noparameters;
MMOAOSF.Access = QZHAOSF_normalaccess;
 /* line 1038: */
MMOAOSF.Continuation = SAIAOSF_continue;
 /* line 1039: */
ZCAAOSF_makervc( UMOAOSF, &VMOAOSF );
MMOAOSF.Help = A_UNITE(WMOAOSF,mode1,1,VMOAOSF);
CNOAOSF.fn.fn_global = ZMOAOSF_anonymous;
CNOAOSF.nonlocals = A68_NIL;
BNOAOSF = CNOAOSF ;
MMOAOSF.Command = A_UNITE(ANOAOSF,mode3,3,BNOAOSF);
 /* line 1042: */
DNOAOSF = A_HEAP(A68_208 ) ;
(*DNOAOSF) = MMOAOSF ;
OKOAOSF.data[2] = A_UNITE(ENOAOSF,mode1,1,DNOAOSF);
 /* line 1043: */
ZCAAOSF_makervc( HNOAOSF, &INOAOSF );
FNOAOSF.Name = INOAOSF;
 /* line 1044: */
NCAAOSF_makervc( 'R', &JNOAOSF );
FNOAOSF.Abreviation = JNOAOSF;
FNOAOSF.Parameter = LEFAOSF_noparameters;
FNOAOSF.Access = UZHAOSF_hiddenaccess;
 /* line 1046: */
FNOAOSF.Continuation = SAIAOSF_continue;
 /* line 1047: */
ZCAAOSF_makervc( LNOAOSF, &MNOAOSF );
FNOAOSF.Help = A_UNITE(NNOAOSF,mode1,1,MNOAOSF);
TNOAOSF.fn.fn_global = QNOAOSF_anonymous;
TNOAOSF.nonlocals = A68_NIL;
SNOAOSF = TNOAOSF ;
FNOAOSF.Command = A_UNITE(RNOAOSF,mode3,3,SNOAOSF);
 /* line 1051: */
UNOAOSF = A_HEAP(A68_208 ) ;
(*UNOAOSF) = FNOAOSF ;
OKOAOSF.data[3] = A_UNITE(VNOAOSF,mode1,1,UNOAOSF);
 /* line 1052: */
ZCAAOSF_makervc( YNOAOSF, &ZNOAOSF );
WNOAOSF.Name = ZNOAOSF;
 /* line 1053: */
NCAAOSF_makervc( 'T', &AOOAOSF );
WNOAOSF.Abreviation = AOOAOSF;
WNOAOSF.Parameter = LEFAOSF_noparameters;
WNOAOSF.Access = QZHAOSF_normalaccess;
 /* line 1054: */
WNOAOSF.Continuation = SAIAOSF_continue;
 /* line 1055: */
BOOAOSF.data[0] = DOOAOSF;
NREAOSF_facility(  &EOOAOSF );
BOOAOSF.data[1] = EOOAOSF;
BOOAOSF.data[2] = GOOAOSF;
 /* line 1056: */
JDAAOSF_concat( A_HISVEC(HOOAOSF,BOOAOSF,3,A68_VC ), &IOOAOSF );
WNOAOSF.Help = A_UNITE(JOOAOSF,mode1,1,IOOAOSF);
 /* line 1059: */
POOAOSF.fn.fn_global = MOOAOSF_anonymous;
POOAOSF.nonlocals = A68_NIL;
OOOAOSF = POOAOSF ;
WNOAOSF.Command = A_UNITE(NOOAOSF,mode3,3,OOOAOSF);
 /* line 1060: */
QOOAOSF = A_HEAP(A68_208 ) ;
(*QOOAOSF) = WNOAOSF ;
OKOAOSF.data[4] = A_UNITE(ROOAOSF,mode1,1,QOOAOSF);
 /* line 1061: */
 /* line 1062: */
WOOAOSF = GFIAOSF_make_group(UOOAOSF, A_HVEC(TOOAOSF,'S',A68_CHAR ), UZHAOSF_hiddenaccess, A_HISVEC(SOOAOSF,OKOAOSF,5,A68_207 )) ;
JAMAOSF.data[35] = A_UNITE(VOOAOSF,mode2,2,WOOAOSF);
 /* line 1064: */
TDIAOSF_makecommands( A_HISVEC(YOOAOSF,JAMAOSF,36,A68_207 ), &ZOOAOSF );
XOOAOSF = ZOOAOSF;
} 
A_PROC_EXIT(make_globalcommands);
*ReturnedValue = (XOOAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void WNLAOSF(void)   /* initialise DECS globalcommands */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","globalcommands.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/commandcaller.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/kernelreader.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/commandreader.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/commandsyntax.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/command.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/variables.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/ioprocs.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/testmode.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/basics.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osinterface.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/options.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  IOLAOSF;  /* OPERATORS - nil -> mode */
A68_VC  KOLAOSF;  /* OPERATORS - nil -> mode */
A68_148  NOLAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TKLAOSF();   /* USE commandcaller */
MKJAOSF();   /* USE kernelreader */
JSFAOSF();   /* USE commandreader */
EEFAOSF();   /* USE commandsyntax */
YYHAOSF();   /* USE command */
EUGAOSF();   /* USE variables */
MVKAOSF();   /* USE ioprocs */
UBHAOSF();   /* USE testmode */
CFHAOSF();   /* USE basics */
IPEAOSF();   /* USE osinterface */
UMEAOSF();   /* USE options */
ZRAAOSF();   /* USE messageproc */
QMDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/globalcommands.a68";
A_config.translation_time = "Wed May  5 17:38:59 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "VNLAOSF (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:59 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS globalcommands);
UEAALIB_a68config(LGAALIB_configinfo, AOLAOSF);
 /* line 68: */
DOLAOSF_edit_var = COLAOSF;
GOLAOSF_showtime_var = FOLAOSF;
 /* line 72: */
HOLAOSF_edit_type = (A_VVAC(IOLAOSF));
JOLAOSF_sysdir_var = (A_VVAC(KOLAOSF));
 /* line 73: */
NOLAOSF.fn.fn_global = LOLAOSF_anonymous;
NOLAOSF.nonlocals = A68_NIL;
MOLAOSF_print_issue = (NOLAOSF);
 /* line 75: */
 /* line 76: */
 /* line 80: */
 /* line 83: */
 /* line 114: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
 /* line 153: */
 /* line 154: */
 /* line 156: */
 /* line 176: */
 /* line 215: */
 /* line 233: */
 /* line 237: */
 /* line 254: */
 /* line 255: */
 /* line 1065: */
A_PROC_EXIT(DECS globalcommands);
} 
#undef NL
/* end of translation of globalcommands.a68 */
