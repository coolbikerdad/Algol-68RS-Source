/* UNAME:BFHAOSF */
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
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t112,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 4 CHAR */
struct A68t113{
struct A68t114  Access;
A_PAD_ISTRUCT(A68_114 ,PAD_24)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(MODE114)  */

A_PROCEDURE(struct A68t111 *,A68t115,(A68_VC ,struct A68t113 ,struct A68t97 ),(A68_VC ,struct A68t113 ,struct A68t97 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE26,MODE113,MODE97) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t111 *,struct A68t97 ),(struct A68t111 *,struct A68t97 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE111,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t111 *,A68_VC *),(struct A68t111 *,A68_VC *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE111) MODE26 */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t111 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t111 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(REF MODE111,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t111 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t111 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(REF MODE111,MODE26,MODE97) MODE35 */
struct A68t120{
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
typedef struct A68t120  A68_120 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t122 ;

A_PROCEDURE(struct A68t120 *,A68t121,(struct A68t122 ,struct A68t97 ),(struct A68t122 ,struct A68t97 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE122,MODE97) REF MODE120 */
struct A68t122 { A68_INT mode; union {
struct A68t111 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t122  A68_122 ;    /* UNION(REF MODE111,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t111 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t111 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE111,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t111 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t111 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE111,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t111 *,struct A68t97 ,struct A68t35 *),(struct A68t111 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE111,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t126,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t127,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_INT ),(A68_INT ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t129,(void),(void *));
typedef struct A68t129  A68_129 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t130,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t131,(void),(void *));
typedef struct A68t131  A68_131 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t133{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t134,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t133 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t133 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE26,MODE26,MODE97) MODE133 */

A_PROCEDURE(A68_VOID ,A68t135,(A68_VC *),(A68_VC *,void *));
typedef struct A68t135  A68_135 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t137,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t138,(void),(void *));
typedef struct A68t138  A68_138 ;    /* PROC BOOL */
struct A68t140 ;

A_PROCEDURE(A68_VOID ,A68t139,(struct A68t140 ,struct A68t97 ),(struct A68t140 ,struct A68t97 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE140,MODE97) VOID */
A_VECTOR(struct A68t141 ,A68t140);
typedef struct A68t140  A68_140 ;    /* VECTOR [] MODE141 */
struct A68t141{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_35)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t142,(void),(void *));
typedef struct A68t142  A68_142 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t143,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t145,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t146,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REAL) REAL */
struct A68t147{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t148,(A68_BOOL ,struct A68t147 *),(A68_BOOL ,struct A68t147 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(BOOL) MODE147 */

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t147 ,A68_BOOL ),(struct A68t147 ,A68_BOOL ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE147,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t147 *),(struct A68t147 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC MODE147 */

A_PROCEDURE(A68_BOOL ,A68t151,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t153 ;
struct A68t154 ;

A_PROCEDURE(A68_VOID ,A68t152,(A68_VC ,struct A68t142 ,struct A68t153 ,struct A68t154 ),(A68_VC ,struct A68t142 ,struct A68t153 ,struct A68t154 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE26,MODE142,MODE153,MODE154) VOID */

A_PROCEDURE(A68_BOOL ,A68t153,(A68_VC ,struct A68t135 ),(A68_VC ,struct A68t135 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE26,MODE135) BOOL */

A_PROCEDURE(A68_BOOL ,A68t154,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t155 ,struct A68t97 ),(struct A68t155 ,struct A68t97 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE155,MODE97) VOID */
struct A68t157{
A68_BITS  Options;
A_PAD_BITS(PAD_36)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(BITS)  */
struct A68t159 ;

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t159 ),(struct A68t159 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE159) VOID */
struct A68t159 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t157  mode2;
A68_VC  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t159  A68_159 ;    /* UNION(BOOL,MODE157,MODE26)  */

A_PROCEDURE(A68_INT ,A68t160,(A68_INT ),(A68_INT ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE142) VOID */

A_PROCEDURE(A68_VOID ,A68t162,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 56 CHAR */
struct A68t164{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t165 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t165  A68_165 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE165) VOID */

A_PROCEDURE(A68_INT ,A68t167,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t168,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_INT ,A68t169,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t170,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(CHAR) VOID */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t170 ,A68_INT ),(struct A68t170 ,A68_INT ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE170,INT) VOID */

A_PROCEDURE(A68_CHAR ,A68t172,(void),(void *));
typedef struct A68t172  A68_172 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t173,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE172) INT */
A_ISTRUCT(A68_CHAR ,14,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,15,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t177,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(INT,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t179,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,3,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_VC ,12,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 12 MODE26 */
A_ISTRUCT(A68_CHAR ,23,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_INT ,12,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 12 INT */

A_PROCEDURE(A68_VOID ,A68t184,(A68_VC *),(A68_VC *,void *));
typedef struct A68t184  A68_184 ;    /* PROC REF MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_VC ,3,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t188,(A68_VC *,A68_CHAR ,A68_VC *),(A68_VC *,A68_CHAR ,A68_VC *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF REF MODE26,CHAR) REF MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_BOOL ,A68t190,(A68_VC ,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *),(A68_VC ,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t191,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,36,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 36 CHAR */

A_PROCEDURE(A68_INT ,A68t193,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(INT,INT,REF BOOL) INT */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from testmode --- */
extern A68_INT  TEHAOSF_testmode_seconds(A68_INT );
/* --- End of imports from testmode --- */


/* --- Imports from osinterface --- */
extern A68_113  MTBAOSF_update_access;
extern A68_113  QTBAOSF_update_truncate_access;
#define AQEAOSF_block_update_access MTBAOSF_update_access
#define BQEAOSF_block_update_truncate_access QTBAOSF_update_truncate_access
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern A68_LINT  VPBAOSF_get_time(void);
extern A68_INT  CRBAOSF_get_cpu_time(void);
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc = argc; A_argv = argv; A_envp = envp

#define DHCAOSF_prelude A_prelude
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <math.h>

#define ZCFAOSF_sqrt sqrt
extern A68_97  TIBAOSF_global_msg;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_92  IUAAOSF_system;
extern A68_92  KUAAOSF_fatal;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  JDAAOSF_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  FEAAOSF_intchars(A68_INT ,A68_VC *);
extern A68_VOID  YCEAOSF_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void UBHAOSF(void);   /* testmode */
extern void IPEAOSF(void);   /* osinterface */
extern void ZRAAOSF(void);   /* messageproc */
extern void QMDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_163   FFHAOSF = {"$Id: basics.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,GFHAOSF,FFHAOSF,56)
#define HFHAOSF_maxid 255
static A68_INT  IFHAOSF_zero;
A68_VC  GGHAOSF_nilid;
A68_VC  MGHAOSF_nullid;
#define IIHAOSF_bitsperchar 8
#define JIHAOSF_charsperint 4
A68_INT  LIHAOSF_maxchar;
static A68_INT  MIHAOSF_maxintinchar;
static A68_INT  NIHAOSF_intmask;
static A68_174   CKHAOSF = {"left justify: "}; 
A_GISVEC(A68_VC ,DKHAOSF,CKHAOSF,14)
static A68_176   BLHAOSF = {"right justify: "}; 
A_GISVEC(A68_VC ,CLHAOSF,BLHAOSF,15)
static A68_180   INHAOSF = {"Jan"}; 
A_GISVEC(A68_VC ,JNHAOSF,INHAOSF,3)
static A68_180   KNHAOSF = {"Feb"}; 
A_GISVEC(A68_VC ,LNHAOSF,KNHAOSF,3)
static A68_180   MNHAOSF = {"Mar"}; 
A_GISVEC(A68_VC ,NNHAOSF,MNHAOSF,3)
static A68_180   ONHAOSF = {"Apr"}; 
A_GISVEC(A68_VC ,PNHAOSF,ONHAOSF,3)
static A68_180   QNHAOSF = {"May"}; 
A_GISVEC(A68_VC ,RNHAOSF,QNHAOSF,3)
static A68_180   SNHAOSF = {"Jun"}; 
A_GISVEC(A68_VC ,TNHAOSF,SNHAOSF,3)
static A68_180   UNHAOSF = {"Jul"}; 
A_GISVEC(A68_VC ,VNHAOSF,UNHAOSF,3)
static A68_180   WNHAOSF = {"Aug"}; 
A_GISVEC(A68_VC ,XNHAOSF,WNHAOSF,3)
static A68_180   YNHAOSF = {"Sep"}; 
A_GISVEC(A68_VC ,ZNHAOSF,YNHAOSF,3)
static A68_180   AOHAOSF = {"Oct"}; 
A_GISVEC(A68_VC ,BOHAOSF,AOHAOSF,3)
static A68_180   COHAOSF = {"Nov"}; 
A_GISVEC(A68_VC ,DOHAOSF,COHAOSF,3)
static A68_180   EOHAOSF = {"Dec"}; 
A_GISVEC(A68_VC ,FOHAOSF,EOHAOSF,3)
static A68_46  HOHAOSF_months;
static A68_182   LOHAOSF = {"date_str:  Illegal time"}; 
A_GISVEC(A68_VC ,MOHAOSF,LOHAOSF,23)
static A68_185   BRHAOSF = {".00  "}; 
static A68_189   GSHAOSF = {""}; 
A_GISVEC(A68_VC ,ISHAOSF,GSHAOSF,0)
static A68_189   SSHAOSF = {""}; 
A_GISVEC(A68_VC ,TSHAOSF,SSHAOSF,0)
#define ETHAOSF_dateseparator ' '
#define FTHAOSF_timeseparator ':'
#define GTHAOSF_spacechar ' '
#define TUHAOSF_secondsinminute 60
#define UUHAOSF_minutesinhour 60
#define VUHAOSF_hoursinday 24
#define WUHAOSF_daysinnonleapyear 365
#define XUHAOSF_lastnoneutyear 1982
static A68_192   HVHAOSF = {"date_time_to_eut fault, CASE failure"}; 
A_GISVEC(A68_VC ,IVHAOSF,HVHAOSF,36)
A68_INT  TVHAOSF_maxint;
A68_INT  UVHAOSF_w;
A68_BITS  VVHAOSF_b;
A68_INT  YVHAOSF_bitswidth;
A68_INT  ZVHAOSF_byteswidth;
A68_INT  AWHAOSF_largeint;
A68_INT  BWHAOSF_minint;
A68_INT  CWHAOSF_largeminint;
static A68_114   LXHAOSF = {".ell"}; 
A_GISVEC(A68_VC ,MXHAOSF,LXHAOSF,4)
A68_VC  NXHAOSF_library_type;
static A68_114   OXHAOSF = {".elx"}; 
A_GISVEC(A68_VC ,PXHAOSF,OXHAOSF,4)
A68_VC  QXHAOSF_simfile_type;
static A68_114   RXHAOSF = {".elh"}; 
A_GISVEC(A68_VC ,SXHAOSF,RXHAOSF,4)
A68_VC  TXHAOSF_history_type;
static A68_114   UXHAOSF = {".elt"}; 
A_GISVEC(A68_VC ,VXHAOSF,UXHAOSF,4)
A68_VC  WXHAOSF_source_type;
static A68_114   XXHAOSF = {".els"}; 
A_GISVEC(A68_VC ,YXHAOSF,XXHAOSF,4)
A68_VC  ZXHAOSF_savefile_type;
static A68_114   AYHAOSF = {".eln"}; 
A_GISVEC(A68_VC ,BYHAOSF,AYHAOSF,4)
A68_VC  CYHAOSF_ellanet_type;
static A68_114   DYHAOSF = {".elg"}; 
A_GISVEC(A68_VC ,EYHAOSF,DYHAOSF,4)
A68_VC  FYHAOSF_logfile_type;
static A68_114   GYHAOSF = {".eli"}; 
A_GISVEC(A68_VC ,HYHAOSF,GYHAOSF,4)
A68_VC  IYHAOSF_infile_type;
static A68_114   JYHAOSF = {".elo"}; 
A_GISVEC(A68_VC ,KYHAOSF,JYHAOSF,4)
A68_VC  LYHAOSF_outfile_type;
static A68_114   MYHAOSF = {".dmp"}; 
A_GISVEC(A68_VC ,NYHAOSF,MYHAOSF,4)
A68_VC  OYHAOSF_codedump_type;
static A68_114   PYHAOSF = {".ela"}; 
A_GISVEC(A68_VC ,QYHAOSF,PYHAOSF,4)
A68_VC  RYHAOSF_assfile_type;
static A68_114   SYHAOSF = {".eld"}; 
A_GISVEC(A68_VC ,TYHAOSF,SYHAOSF,4)
static A68_VC  UYHAOSF_download_type;
static A68_186   VYHAOSF = {"ellasysdir"}; 
A_GISVEC(A68_VC ,WYHAOSF,VYHAOSF,10)
A68_VC  XYHAOSF_ellasysdir_var;
typedef struct   /* env of non-global proc */
{
A68_VC  Str;
} OFHAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} YFHAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} EJHAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Width;
A_PAD_INT(PAD_37)
} OKHAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Width;
A_PAD_INT(PAD_38)
} NLHAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BNHAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} CQHAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} NQHAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Input;
} LTHAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} GVHAOSF_casefault;

A68_VOID  KFHAOSF_makeid(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NFHAOSF_generator(A68_BOOL  LFHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  UFHAOSF_makeid(A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XFHAOSF_generator(A68_BOOL  VFHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IGHAOSF_generator(A68_BOOL  HGHAOSF_anonymous, A68_VC  *ReturnedValue);

A68_VOID  OGHAOSF_clear(A68_165  Vec);

A68_VOID  DHHAOSF_uppercase(A68_VC  Str);

A68_VOID  IHHAOSF_uppercase(A68_VC  Str, A68_VC  *ReturnedValue);

A68_VOID  NHHAOSF_lowercase(A68_VC  Str);

A68_VOID  SHHAOSF_lowercase(A68_VC  Str, A68_VC  *ReturnedValue);

A68_INT  YHHAOSF_max(A68_INT  A, A68_INT  B);

A68_INT  CIHAOSF_min(A68_INT  A, A68_INT  B);

A68_BITS  GIHAOSF_xor(A68_BITS  A, A68_BITS  B);

A68_INT  QIHAOSF_charstoint(A68_VC  Str, A68_BOOL * Error);

A68_VOID  ZIHAOSF_outilint(A68_170  Outintchar, A68_INT  Int);

A_STATIC A68_VOID  DJHAOSF_generator(A68_BOOL  BJHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  RJHAOSF_inilint(A68_172  Inintchar);

A68_VOID  AKHAOSF_leftjustify(A68_VC  Param, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NKHAOSF_generator(A68_BOOL  LKHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  ZKHAOSF_rightjustify(A68_VC  Param, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MLHAOSF_generator(A68_BOOL  KLHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  WLHAOSF_seconds(void);

A68_INT  ZLHAOSF_days(A68_INT  Seconds);

A_STATIC A68_VOID  DMHAOSF_time_proc(A68_INT  Seconds, A68_VC  Ans);

A68_VOID  XMHAOSF_time(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ANHAOSF_generator(A68_BOOL  YMHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KOHAOSF_date_proc(A68_INT  Seconds, A68_VC  Ans);

A68_VOID  YPHAOSF_date(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BQHAOSF_generator(A68_BOOL  ZPHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JQHAOSF_date_time(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MQHAOSF_generator(A68_BOOL  KQHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  ZQHAOSF_time_str(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FSHAOSF_extractchars(A68_VC * Input, A68_CHAR  Terminatingchar, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  DTHAOSF_parsedateandtimestring(A68_VC  Input, A68_INT * Year, A68_INT * Month, A68_INT * Day, A68_INT * Hour, A68_INT * Min, A68_INT * Sec);

A_STATIC A68_VOID  KTHAOSF_generator(A68_BOOL  ITHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  SUHAOSF_datetimetoeut(A68_VC  String, A68_INT * Seconds, A68_97  Msg);

A_STATIC A68_VOID  FVHAOSF_casefault(void *NonLocals);

A68_INT  GWHAOSF_addwithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed);

A68_INT  NWHAOSF_subtractwithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed);

A68_INT  UWHAOSF_multiplywithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed);

A68_VOID  GXHAOSF_sysfault(A68_VC  Message);

A68_VOID  JXHAOSF_abort(A68_VC  Message);

A_STATIC A68_VOID  NFHAOSF_generator(A68_BOOL  LFHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OFHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  PFHAOSF;  /* clause result */
A68_VC  QFHAOSF;  /* OPERATORS - dynamic generator */
{ 
QFHAOSF.upb = NL(Str).upb ;
( LFHAOSF_anonymous? A_VLOC(A68_CHAR ,QFHAOSF): A_VHEAP(A68_CHAR ,QFHAOSF) );
PFHAOSF = QFHAOSF;
} 
*ReturnedValue = (PFHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  XFHAOSF_generator(A68_BOOL  VFHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YFHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  ZFHAOSF;  /* clause result */
A68_VC  AGHAOSF;  /* OPERATORS - dynamic generator */
{ 
AGHAOSF.upb = 1 ;
( VFHAOSF_anonymous? A_VLOC(A68_CHAR ,AGHAOSF): A_VHEAP(A68_CHAR ,AGHAOSF) );
ZFHAOSF = AGHAOSF;
} 
*ReturnedValue = (ZFHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  DJHAOSF_generator(A68_BOOL  BJHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((EJHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  FJHAOSF;  /* clause result */
A68_VC  GJHAOSF;  /* OPERATORS - dynamic generator */
{ 
GJHAOSF.upb = JIHAOSF_charsperint ;
( BJHAOSF_anonymous? A_VLOC(A68_CHAR ,GJHAOSF): A_VHEAP(A68_CHAR ,GJHAOSF) );
FJHAOSF = GJHAOSF;
} 
*ReturnedValue = (FJHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NKHAOSF_generator(A68_BOOL  LKHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OKHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  PKHAOSF;  /* clause result */
A68_VC  QKHAOSF;  /* OPERATORS - dynamic generator */
{ 
QKHAOSF.upb = NL(Width) ;
( LKHAOSF_anonymous? A_VLOC(A68_CHAR ,QKHAOSF): A_VHEAP(A68_CHAR ,QKHAOSF) );
PKHAOSF = QKHAOSF;
} 
*ReturnedValue = (PKHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  MLHAOSF_generator(A68_BOOL  KLHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NLHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  OLHAOSF;  /* clause result */
A68_VC  PLHAOSF;  /* OPERATORS - dynamic generator */
{ 
PLHAOSF.upb = NL(Width) ;
( KLHAOSF_anonymous? A_VLOC(A68_CHAR ,PLHAOSF): A_VHEAP(A68_CHAR ,PLHAOSF) );
OLHAOSF = PLHAOSF;
} 
*ReturnedValue = (OLHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ANHAOSF_generator(A68_BOOL  YMHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BNHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  CNHAOSF;  /* clause result */
A68_VC  DNHAOSF;  /* OPERATORS - dynamic generator */
{ 
DNHAOSF.upb = 8 ;
( YMHAOSF_anonymous? A_VLOC(A68_CHAR ,DNHAOSF): A_VHEAP(A68_CHAR ,DNHAOSF) );
CNHAOSF = DNHAOSF;
} 
*ReturnedValue = (CNHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  BQHAOSF_generator(A68_BOOL  ZPHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CQHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  DQHAOSF;  /* clause result */
A68_VC  EQHAOSF;  /* OPERATORS - dynamic generator */
{ 
EQHAOSF.upb = 11 ;
( ZPHAOSF_anonymous? A_VLOC(A68_CHAR ,EQHAOSF): A_VHEAP(A68_CHAR ,EQHAOSF) );
DQHAOSF = EQHAOSF;
} 
*ReturnedValue = (DQHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  MQHAOSF_generator(A68_BOOL  KQHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NQHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  OQHAOSF;  /* clause result */
A68_VC  PQHAOSF;  /* OPERATORS - dynamic generator */
{ 
PQHAOSF.upb = 21 ;
( KQHAOSF_anonymous? A_VLOC(A68_CHAR ,PQHAOSF): A_VHEAP(A68_CHAR ,PQHAOSF) );
OQHAOSF = PQHAOSF;
} 
*ReturnedValue = (OQHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  KTHAOSF_generator(A68_BOOL  ITHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LTHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  MTHAOSF;  /* clause result */
A68_VC  NTHAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 419: */
NTHAOSF.upb = NL(Input).upb ;
( ITHAOSF_anonymous? A_VLOC(A68_CHAR ,NTHAOSF): A_VHEAP(A68_CHAR ,NTHAOSF) );
MTHAOSF = NTHAOSF;
} 
*ReturnedValue = (MTHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  FVHAOSF_casefault(void *NonLocals)
#define NL(x) (((GVHAOSF_casefault *)NonLocals)->x)
{ 
A68_46  JVHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(casefault);
A_CALLPROC(NL(Msg),(IUAAOSF_system, A_HVEC(JVHAOSF,IVHAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(JVHAOSF,IVHAOSF,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(casefault);
return;
} 
#undef NL

A68_VOID  KFHAOSF_makeid(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_31  MFHAOSF_generator;   /* proc value of non-global proc */
A68_VC  RFHAOSF;  /* clause result */
A68_VC  SFHAOSF;  /* avoid structure result */
A_PROC_ENTRY(makeid);
A_CLOSURE( MFHAOSF_generator, NFHAOSF_generator, OFHAOSF_generator );
(( OFHAOSF_generator * ) ( MFHAOSF_generator.nonlocals )) -> Str = Str;
A_CALLPROC(MFHAOSF_generator,(A68_FALSE, &SFHAOSF),(A68_FALSE, &SFHAOSF,(MFHAOSF_generator).nonlocals));
A_VASSIGN2(Str,SFHAOSF,A68_CHAR ) ;
RFHAOSF = SFHAOSF;
A_PROC_EXIT(makeid);
*ReturnedValue = (RFHAOSF);
return;
} 
#undef NL

A68_VOID  UFHAOSF_makeid(A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_31  WFHAOSF_generator;   /* proc value of non-global proc */
A68_VC  BGHAOSF;  /* clause result */
A68_VC  CGHAOSF;  /* avoid structure result */
A68_VC  DGHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EGHAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(makeid);
A_CLOSURE( WFHAOSF_generator, XFHAOSF_generator, YFHAOSF_generator );
A_CALLPROC(WFHAOSF_generator,(A68_FALSE, &CGHAOSF),(A68_FALSE, &CGHAOSF,(WFHAOSF_generator).nonlocals));
EGHAOSF = A_HVEC(DGHAOSF,C,A68_CHAR ) ;
A_VASSIGN2(EGHAOSF,CGHAOSF,A68_CHAR ) ;
BGHAOSF = CGHAOSF;
A_PROC_EXIT(makeid);
*ReturnedValue = (BGHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  IGHAOSF_generator(A68_BOOL  HGHAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  JGHAOSF;  /* clause result */
A68_VC  KGHAOSF;  /* OPERATORS - dynamic generator */
{ 
KGHAOSF.upb = 0 ;
( HGHAOSF_anonymous? A_VLOC(A68_CHAR ,KGHAOSF): A_VHEAP(A68_CHAR ,KGHAOSF) );
JGHAOSF = KGHAOSF;
} 
*ReturnedValue = (JGHAOSF);
return;
} 
#undef NL

A68_VOID  OGHAOSF_clear(A68_165  Vec)
{ 
A68_165  PGHAOSF;  /* united object - for case conformity */
A68_VC  QGHAOSF_chars;
A68_CHAR * RGHAOSF_c;
A68_INT  SGHAOSF;  /* forall loop counter */
A68_32  TGHAOSF_ints;
A68_INT * UGHAOSF_i;
A68_INT  VGHAOSF;  /* forall loop counter */
A68_54  WGHAOSF_bools;
A68_BOOL * XGHAOSF_b;
A68_INT  YGHAOSF;  /* forall loop counter */
A68_53  ZGHAOSF_bits;
A68_BITS * AHHAOSF_u;
A68_INT  BHHAOSF;  /* forall loop counter */
A_PROC_ENTRY(clear);
 /* line 112: */
 /* line 113: */
PGHAOSF = Vec ;
switch ( PGHAOSF.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
QGHAOSF_chars = (PGHAOSF.data.mode1);
SGHAOSF = QGHAOSF_chars.upb -1;
RGHAOSF_c = QGHAOSF_chars.data;
for (;SGHAOSF-- >= 0;
(RGHAOSF_c++
) )
{
(*RGHAOSF_c) = ' ';
}
 /* line 114: */
break;
case 2: /* REF VECTOR [] INT */
TGHAOSF_ints = (PGHAOSF.data.mode2);
VGHAOSF = TGHAOSF_ints.upb -1;
UGHAOSF_i = TGHAOSF_ints.data;
for (;VGHAOSF-- >= 0;
(UGHAOSF_i++
) )
{
(*UGHAOSF_i) = 0;
}
 /* line 115: */
break;
case 3: /* REF VECTOR [] BOOL */
WGHAOSF_bools = (PGHAOSF.data.mode3);
YGHAOSF = WGHAOSF_bools.upb -1;
XGHAOSF_b = WGHAOSF_bools.data;
for (;YGHAOSF-- >= 0;
(XGHAOSF_b++
) )
{
(*XGHAOSF_b) = A68_FALSE;
}
 /* line 116: */
break;
case 4: /* REF VECTOR [] BITS */
ZGHAOSF_bits = (PGHAOSF.data.mode4);
BHHAOSF = ZGHAOSF_bits.upb -1;
AHHAOSF_u = ZGHAOSF_bits.data;
for (;BHHAOSF-- >= 0;
(AHHAOSF_u++
) )
{
(*AHHAOSF_u) = 0X0U;
}
 /* line 117: */
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(clear);
return;
} 
#undef NL

A68_VOID  DHHAOSF_uppercase(A68_VC  Str)
{ 
A68_CHAR * EHHAOSF_c;
A68_INT  FHHAOSF;  /* forall loop counter */
A68_BOOL  GHHAOSF;  /* optbool result */
A_PROC_ENTRY(uppercase);
 /* line 121: */
 /* line 122: */
FHHAOSF = Str.upb -1;
EHHAOSF_c = Str.data;
for (;FHHAOSF-- >= 0;
(EHHAOSF_c++
) )
{
GHHAOSF = ((*EHHAOSF_c)>='a');
if ( GHHAOSF )
{GHHAOSF = ((*EHHAOSF_c)<='z');
}
if ( GHHAOSF )
{ 
(*EHHAOSF_c) = (A68_SSBITS)((A68_INT)(unsigned char)(*EHHAOSF_c)-32);
} 
}
A_PROC_EXIT(uppercase);
return;
} 
#undef NL

A68_VOID  IHHAOSF_uppercase(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_VC  JHHAOSF;  /* avoid structure result */
A68_VC  KHHAOSF_ans;
A68_VC  LHHAOSF;  /* clause result */
A_PROC_ENTRY(uppercase);
 /* line 125: */
 /* line 126: */
{ 
ZCAAOSF_makervc( Str, &JHHAOSF );
KHHAOSF_ans = JHHAOSF;
 /* line 127: */
DHHAOSF_uppercase(KHHAOSF_ans);
 /* line 128: */
 /* line 129: */
LHHAOSF = KHHAOSF_ans;
} 
A_PROC_EXIT(uppercase);
*ReturnedValue = (LHHAOSF);
return;
} 
#undef NL

A68_VOID  NHHAOSF_lowercase(A68_VC  Str)
{ 
A68_CHAR * OHHAOSF_c;
A68_INT  PHHAOSF;  /* forall loop counter */
A68_BOOL  QHHAOSF;  /* optbool result */
A_PROC_ENTRY(lowercase);
 /* line 132: */
 /* line 133: */
PHHAOSF = Str.upb -1;
OHHAOSF_c = Str.data;
for (;PHHAOSF-- >= 0;
(OHHAOSF_c++
) )
{
QHHAOSF = ((*OHHAOSF_c)>='A');
if ( QHHAOSF )
{QHHAOSF = ((*OHHAOSF_c)<='Z');
}
if ( QHHAOSF )
{ 
(*OHHAOSF_c) = (A68_SSBITS)((A68_INT)(unsigned char)(*OHHAOSF_c)+32);
} 
}
A_PROC_EXIT(lowercase);
return;
} 
#undef NL

A68_VOID  SHHAOSF_lowercase(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_VC  THHAOSF;  /* avoid structure result */
A68_VC  UHHAOSF_ans;
A68_VC  VHHAOSF;  /* clause result */
A_PROC_ENTRY(lowercase);
 /* line 136: */
 /* line 137: */
{ 
ZCAAOSF_makervc( Str, &THHAOSF );
UHHAOSF_ans = THHAOSF;
 /* line 138: */
NHHAOSF_lowercase(UHHAOSF_ans);
 /* line 139: */
 /* line 140: */
VHHAOSF = UHHAOSF_ans;
} 
A_PROC_EXIT(lowercase);
*ReturnedValue = (VHHAOSF);
return;
} 
#undef NL

A68_INT  YHHAOSF_max(A68_INT  A, A68_INT  B)
{ 
A68_INT  ZHHAOSF;  /* clause result */
A_PROC_ENTRY(max);
if ( (A>B) )
{ 
ZHHAOSF = A;
} 
else
{ 
ZHHAOSF = B;
} 
A_PROC_EXIT(max);
return( ZHHAOSF );
} 
#undef NL

A68_INT  CIHAOSF_min(A68_INT  A, A68_INT  B)
{ 
A68_INT  DIHAOSF;  /* clause result */
A_PROC_ENTRY(min);
if ( (A<B) )
{ 
DIHAOSF = A;
} 
else
{ 
DIHAOSF = B;
} 
A_PROC_EXIT(min);
return( DIHAOSF );
} 
#undef NL

A68_BITS  GIHAOSF_xor(A68_BITS  A, A68_BITS  B)
{ 
A68_BITS  HIHAOSF;  /* clause result */
A_PROC_ENTRY(xor);
HIHAOSF = (A68_BITS )((A68_BITS )(A&~B)|(A68_BITS )(B&~A));
A_PROC_EXIT(xor);
return( HIHAOSF );
} 
#undef NL

A68_INT  QIHAOSF_charstoint(A68_VC  Str, A68_BOOL * Error)
{ 
A68_INT  RIHAOSF_index;
A68_INT  SIHAOSF_ans;
A68_BOOL  TIHAOSF_neg;
A68_BOOL  UIHAOSF;  /* optbool result */
A68_BOOL  VIHAOSF;  /* optbool result */
A68_INT  WIHAOSF;  /* clause result */
A_PROC_ENTRY(charstoint);
 /* line 166: */
 /* line 167: */
{ 
RIHAOSF_index = 1;
SIHAOSF_ans = 0;
 /* line 168: */
TIHAOSF_neg = A68_FALSE;
 /* line 169: */
for ( ;; )
{ 
UIHAOSF = (RIHAOSF_index<=Str.upb);
if ( UIHAOSF )
{UIHAOSF = (A_VINDEX(Str,RIHAOSF_index)==' ');
}
if ( !(UIHAOSF) ) break;
RIHAOSF_index+=1;
}
 /* line 170: */
 /* line 171: */
 /* line 172: */
if ( (RIHAOSF_index<=Str.upb) )
{ 
if ( (A_VINDEX(Str,RIHAOSF_index)=='+') )
{ 
 /* line 173: */
RIHAOSF_index+=1;
} 
else
{ 
if ( (A_VINDEX(Str,RIHAOSF_index)=='-') )
{ 
RIHAOSF_index+=1;
 /* line 174: */
TIHAOSF_neg = A68_TRUE;
} 
} 
 /* line 175: */
for ( ;; )
{ 
 /* line 176: */
 /* line 177: */
VIHAOSF = (RIHAOSF_index<=Str.upb);
if ( VIHAOSF )
{VIHAOSF = (A_VINDEX(Str,RIHAOSF_index)<='9');
}
 /* line 178: */
if ( VIHAOSF )
{ /* line 179: */
VIHAOSF = (A_VINDEX(Str,RIHAOSF_index)>='0');
}
 /* line 180: */
if ( !(VIHAOSF) ) break;
SIHAOSF_ans*=10 ;
SIHAOSF_ans-=((A68_INT)(unsigned char)A_VINDEX(Str,RIHAOSF_index)-IFHAOSF_zero);
 /* line 181: */
 /* line 182: */
RIHAOSF_index+=1;
}
 /* line 183: */
 /* line 184: */
} 
else
{ 
 /* line 185: */
(*Error) = A68_TRUE;
} 
 /* line 186: */
if ( (RIHAOSF_index<Str.upb) )
{ 
(*Error) = A68_TRUE;
} 
 /* line 187: */
if ( TIHAOSF_neg )
{ 
WIHAOSF = SIHAOSF_ans;
} 
else
{ 
 /* line 188: */
WIHAOSF = (-SIHAOSF_ans);
} 
} 
A_PROC_EXIT(charstoint);
return( WIHAOSF );
} 
#undef NL

A68_VOID  ZIHAOSF_outilint(A68_170  Outintchar, A68_INT  Int)
{ 
A68_BOOL  AJHAOSF;  /* optbool result */
A68_31  CJHAOSF_generator;   /* proc value of non-global proc */
A68_VC  IJHAOSF;  /* avoid structure result */
A68_VC  HJHAOSF_line;
A68_INT  JJHAOSF_l;
A68_BITS  KJHAOSF_i;
A68_INT  LJHAOSF;  /* YIELD */
A68_CHAR * MJHAOSF;  /* YIELD */
A68_BOOL  NJHAOSF;  /* clause result */
A68_INT  OJHAOSF_i;
A68_INT  PJHAOSF;  /* to part of loop */
A_PROC_ENTRY(outilint);
 /* line 191: */
 /* line 192: */
{ 
AJHAOSF = (Int<=MIHAOSF_maxintinchar);
if ( AJHAOSF )
{ /* line 193: */
AJHAOSF = (Int>=0);
}
if ( AJHAOSF )
{ 
 /* line 194: */
A_CALLPROC(Outintchar,((A68_SSBITS)Int),((A68_SSBITS)Int,(Outintchar).nonlocals));
} 
else
{ 
A_CLOSURE( CJHAOSF_generator, DJHAOSF_generator, EJHAOSF_generator );
A_CALLPROC(CJHAOSF_generator,(A68_TRUE, &IJHAOSF),(A68_TRUE, &IJHAOSF,(CJHAOSF_generator).nonlocals));
HJHAOSF_line = IJHAOSF;
 /* line 195: */
JJHAOSF_l = (JIHAOSF_charsperint+1);
 /* line 196: */
KJHAOSF_i = (A68_BITS )Int;
 /* line 197: */
for ( ;; )
{ 
LJHAOSF = JJHAOSF_l-=1 ;
MJHAOSF = (&A_VINDEX(HJHAOSF_line,LJHAOSF)) ;
(*MJHAOSF) = (A68_SSBITS)(A68_INT )(A68_BITS )(KJHAOSF_i&(A68_BITS )NIHAOSF_intmask);
 /* line 198: */
KJHAOSF_i = A_SHR(KJHAOSF_i,IIHAOSF_bitsperchar);
 /* line 199: */
NJHAOSF = (KJHAOSF_i!=00U);
if ( !NJHAOSF ) break;
/*SKIP*/;
}
 /* line 200: */
A_CALLPROC(Outintchar,((A68_SSBITS)(LIHAOSF_maxchar-JJHAOSF_l)),((A68_SSBITS)(LIHAOSF_maxchar-JJHAOSF_l),(Outintchar).nonlocals));
 /* line 201: */
PJHAOSF = JIHAOSF_charsperint;
for ( OJHAOSF_i = JJHAOSF_l;
OJHAOSF_i <= PJHAOSF;
OJHAOSF_i += 1 )
{ 
A_CALLPROC(Outintchar,((*(&A_VINDEX(HJHAOSF_line,OJHAOSF_i)))),((*(&A_VINDEX(HJHAOSF_line,OJHAOSF_i))),(Outintchar).nonlocals));
}
 /* line 202: */
 /* line 203: */
} 
} 
A_PROC_EXIT(outilint);
return;
} 
#undef NL

A68_INT  RJHAOSF_inilint(A68_172  Inintchar)
{ 
A68_INT  SJHAOSF_int;
A68_INT  TJHAOSF_i;
A68_INT  UJHAOSF;  /* to part of loop */
A68_INT  VJHAOSF;  /* loop control */
A68_BITS  WJHAOSF;  /* SHL */
A68_INT  XJHAOSF;  /* clause result */
A_PROC_ENTRY(inilint);
 /* line 207: */
 /* line 208: */
{ 
SJHAOSF_int = (A68_INT)(unsigned char)A_CALLPROC(Inintchar,(),((Inintchar).nonlocals));
 /* line 209: */
 /* line 210: */
if ( (SJHAOSF_int>MIHAOSF_maxintinchar) )
{ 
TJHAOSF_i = (SJHAOSF_int-MIHAOSF_maxintinchar);
 /* line 211: */
SJHAOSF_int = 0;
 /* line 212: */
UJHAOSF = TJHAOSF_i;
for ( VJHAOSF = 1;
VJHAOSF <= UJHAOSF;
VJHAOSF += 1 )
{ 
WJHAOSF = (A68_BITS )SJHAOSF_int ;
SJHAOSF_int = ((A68_INT )A_SHL(WJHAOSF,IIHAOSF_bitsperchar)+(A68_INT)(unsigned char)A_CALLPROC(Inintchar,(),((Inintchar).nonlocals)));
}
 /* line 213: */
} 
 /* line 214: */
 /* line 215: */
XJHAOSF = SJHAOSF_int;
} 
A_PROC_EXIT(inilint);
return( XJHAOSF );
} 
#undef NL

A68_VOID  AKHAOSF_leftjustify(A68_VC  Param, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_175  BKHAOSF;  /* collateral clause result */
A68_52  EKHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FKHAOSF;  /* YIELD */
A68_52  GKHAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  HKHAOSF;  /* YIELD */
A68_85  IKHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  JKHAOSF;  /* avoid structure result */
A68_46  KKHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31  MKHAOSF_generator;   /* proc value of non-global proc */
A68_VC  SKHAOSF;  /* avoid structure result */
A68_VC  RKHAOSF_answer;
A68_165  TKHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  UKHAOSF;  /* OPERATORS - trim index */
A68_VC  VKHAOSF;  /* YIELD */
A68_VC  WKHAOSF;  /* clause result */
A_PROC_ENTRY(leftjustify);
 /* line 223: */
 /* line 224: */
{ 
 /* line 225: */
if ( (Param.upb>Width) )
{ 
FKHAOSF = DKHAOSF ;
BKHAOSF.data[0] = A_UNITE(EKHAOSF,mode7,7,FKHAOSF);
HKHAOSF = Param.upb ;
BKHAOSF.data[1] = A_UNITE(GKHAOSF,mode1,1,HKHAOSF);
 /* line 226: */
YCEAOSF_oneline( A_HISVEC(IKHAOSF,BKHAOSF,2,A68_52 ), &JKHAOSF );
A_CALLPROC(TIBAOSF_global_msg,(IUAAOSF_system, A_HVEC(KKHAOSF,JKHAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(KKHAOSF,JKHAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
 /* line 227: */
A_CLOSURE( MKHAOSF_generator, NKHAOSF_generator, OKHAOSF_generator );
(( OKHAOSF_generator * ) ( MKHAOSF_generator.nonlocals )) -> Width = Width;
A_CALLPROC(MKHAOSF_generator,(A68_TRUE, &SKHAOSF),(A68_TRUE, &SKHAOSF,(MKHAOSF_generator).nonlocals));
RKHAOSF_answer = SKHAOSF;
 /* line 228: */
OGHAOSF_clear(A_UNITE(TKHAOSF,mode1,1,RKHAOSF_answer));
 /* line 229: */
if ( (Param.upb>0) )
{ 
VKHAOSF = A_VTRIM(UKHAOSF,(RKHAOSF_answer),A_VTSCRIPT(&(UKHAOSF.upb),(RKHAOSF_answer).upb,1,Param.upb)) ;
A_VASSIGN2(Param,VKHAOSF,A68_CHAR );
} 
 /* line 230: */
 /* line 231: */
WKHAOSF = RKHAOSF_answer;
} 
A_PROC_EXIT(leftjustify);
*ReturnedValue = (WKHAOSF);
return;
} 
#undef NL

A68_VOID  ZKHAOSF_rightjustify(A68_VC  Param, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_175  ALHAOSF;  /* collateral clause result */
A68_52  DLHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ELHAOSF;  /* YIELD */
A68_52  FLHAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  GLHAOSF;  /* YIELD */
A68_85  HLHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ILHAOSF;  /* avoid structure result */
A68_46  JLHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31  LLHAOSF_generator;   /* proc value of non-global proc */
A68_VC  RLHAOSF;  /* avoid structure result */
A68_VC  QLHAOSF_answer;
A68_165  SLHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  TLHAOSF;  /* OPERATORS - trim index */
A68_VC  ULHAOSF;  /* YIELD */
A68_VC  VLHAOSF;  /* clause result */
A_PROC_ENTRY(rightjustify);
 /* line 234: */
 /* line 235: */
{ 
 /* line 236: */
if ( (Param.upb>Width) )
{ 
ELHAOSF = CLHAOSF ;
ALHAOSF.data[0] = A_UNITE(DLHAOSF,mode7,7,ELHAOSF);
GLHAOSF = Param.upb ;
ALHAOSF.data[1] = A_UNITE(FLHAOSF,mode1,1,GLHAOSF);
 /* line 237: */
YCEAOSF_oneline( A_HISVEC(HLHAOSF,ALHAOSF,2,A68_52 ), &ILHAOSF );
A_CALLPROC(TIBAOSF_global_msg,(IUAAOSF_system, A_HVEC(JLHAOSF,ILHAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(JLHAOSF,ILHAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
 /* line 238: */
A_CLOSURE( LLHAOSF_generator, MLHAOSF_generator, NLHAOSF_generator );
(( NLHAOSF_generator * ) ( LLHAOSF_generator.nonlocals )) -> Width = Width;
A_CALLPROC(LLHAOSF_generator,(A68_TRUE, &RLHAOSF),(A68_TRUE, &RLHAOSF,(LLHAOSF_generator).nonlocals));
QLHAOSF_answer = RLHAOSF;
 /* line 239: */
OGHAOSF_clear(A_UNITE(SLHAOSF,mode1,1,QLHAOSF_answer));
 /* line 240: */
if ( (Param.upb>0) )
{ 
ULHAOSF = A_VTRIM(TLHAOSF,(QLHAOSF_answer),A_VTSCRIPT(&(TLHAOSF.upb),(QLHAOSF_answer).upb,((Width-Param.upb)+1),(QLHAOSF_answer).upb)) ;
A_VASSIGN2(Param,ULHAOSF,A68_CHAR );
} 
 /* line 241: */
 /* line 242: */
VLHAOSF = QLHAOSF_answer;
} 
A_PROC_EXIT(rightjustify);
*ReturnedValue = (VLHAOSF);
return;
} 
#undef NL

A68_INT  WLHAOSF_seconds(void)
{ 
A68_INT  XLHAOSF;  /* clause result */
A_PROC_ENTRY(seconds);
XLHAOSF = TEHAOSF_testmode_seconds((A68_INT )VPBAOSF_get_time());
A_PROC_EXIT(seconds);
return( XLHAOSF );
} 
#undef NL

A68_INT  ZLHAOSF_days(A68_INT  Seconds)
{ 
A68_INT  AMHAOSF;  /* clause result */
A_PROC_ENTRY(days);
AMHAOSF = (Seconds/86400);
A_PROC_EXIT(days);
return( AMHAOSF );
} 
#undef NL

A_STATIC A68_VOID  DMHAOSF_time_proc(A68_INT  Seconds, A68_VC  Ans)
{ 
A68_INT  EMHAOSF;  /* ADICOPS - MOD */
A68_INT  FMHAOSF;  /* ADICOPS - MOD */
A68_INT  GMHAOSF_dsecs;
A68_INT  HMHAOSF_dmins;
A68_INT  IMHAOSF_hrs;
A68_INT  JMHAOSF;  /* ADICOPS - MOD */
A68_INT  KMHAOSF;  /* ADICOPS - MOD */
A68_INT  LMHAOSF_mins;
A68_INT  MMHAOSF;  /* ADICOPS - MOD */
A68_INT  NMHAOSF;  /* ADICOPS - MOD */
A68_INT  OMHAOSF_secs;
A68_178  PMHAOSF;  /* collateral clause result */
A68_INT  QMHAOSF;  /* ADICOPS - MOD */
A68_INT  RMHAOSF;  /* ADICOPS - MOD */
A68_INT  SMHAOSF;  /* ADICOPS - MOD */
A68_INT  TMHAOSF;  /* ADICOPS - MOD */
A68_VC  UMHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  VMHAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(time_proc);
 /* line 255: */
 /* line 256: */
{ 
FMHAOSF = 86400 ;
GMHAOSF_dsecs = A_MOD(Seconds,FMHAOSF,EMHAOSF);
 /* line 257: */
HMHAOSF_dmins = (GMHAOSF_dsecs/60);
 /* line 258: */
IMHAOSF_hrs = (HMHAOSF_dmins/60);
 /* line 259: */
KMHAOSF = 60 ;
LMHAOSF_mins = A_MOD(HMHAOSF_dmins,KMHAOSF,JMHAOSF);
 /* line 260: */
NMHAOSF = 60 ;
OMHAOSF_secs = A_MOD(GMHAOSF_dsecs,NMHAOSF,MMHAOSF);
 /* line 261: */
 /* line 262: */
PMHAOSF.data[0] = (A68_SSBITS)(IFHAOSF_zero+(IMHAOSF_hrs/10));
RMHAOSF = 10 ;
PMHAOSF.data[1] = (A68_SSBITS)(IFHAOSF_zero+A_MOD(IMHAOSF_hrs,RMHAOSF,QMHAOSF));
 /* line 263: */
PMHAOSF.data[2] = ':';
PMHAOSF.data[3] = (A68_SSBITS)(IFHAOSF_zero+(LMHAOSF_mins/10));
TMHAOSF = 10 ;
PMHAOSF.data[4] = (A68_SSBITS)(IFHAOSF_zero+A_MOD(LMHAOSF_mins,TMHAOSF,SMHAOSF));
 /* line 264: */
PMHAOSF.data[5] = ':';
PMHAOSF.data[6] = (A68_SSBITS)(IFHAOSF_zero+(OMHAOSF_secs/10));
 /* line 265: */
PMHAOSF.data[7] = (A68_SSBITS)(IFHAOSF_zero+(OMHAOSF_secs/10));
VMHAOSF = A_HISVEC(UMHAOSF,PMHAOSF,8,A68_CHAR ) ;
A_VASSIGN2(VMHAOSF,Ans,A68_CHAR );
} 
A_PROC_EXIT(time_proc);
return;
} 
#undef NL

A68_VOID  XMHAOSF_time(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  ZMHAOSF_generator;   /* proc value of non-global proc */
A68_VC  ENHAOSF;  /* avoid structure result */
A68_VC  FNHAOSF_ans;
A68_VC  GNHAOSF;  /* clause result */
A_PROC_ENTRY(time);
 /* line 268: */
{ 
A_CLOSURE( ZMHAOSF_generator, ANHAOSF_generator, BNHAOSF_generator );
A_CALLPROC(ZMHAOSF_generator,(A68_FALSE, &ENHAOSF),(A68_FALSE, &ENHAOSF,(ZMHAOSF_generator).nonlocals));
FNHAOSF_ans = ENHAOSF;
DMHAOSF_time_proc(Seconds, FNHAOSF_ans);
GNHAOSF = FNHAOSF_ans;
} 
A_PROC_EXIT(time);
*ReturnedValue = (GNHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  KOHAOSF_date_proc(A68_INT  Seconds, A68_VC  Ans)
{ 
A68_46  NOHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  OOHAOSF_days;
A68_INT  POHAOSF_year;
A68_BOOL  QOHAOSF_leap;
A68_INT  ROHAOSF;  /* ADICOPS - MOD */
A68_INT  SOHAOSF;  /* ADICOPS - MOD */
A68_BOOL  TOHAOSF;  /* optbool result */
A68_INT  UOHAOSF;  /* ADICOPS - MOD */
A68_INT  VOHAOSF;  /* ADICOPS - MOD */
A68_INT  WOHAOSF_month;
A68_183  XOHAOSF;  /* collateral clause result */
A68_183  YOHAOSF_mnths;
A68_32  ZOHAOSF;  /* OPERATORS - istruct -> vector */
A68_32  APHAOSF;  /* OPERATORS - simple index */
A68_32  BPHAOSF;  /* OPERATORS - istruct -> vector */
A68_32  CPHAOSF;  /* OPERATORS - simple index */
A68_INT  DPHAOSF_dten;
A68_CHAR  EPHAOSF;  /* clause result */
A68_INT  FPHAOSF;  /* YIELD */
A68_CHAR * GPHAOSF;  /* YIELD */
A68_INT  HPHAOSF;  /* YIELD */
A68_INT  IPHAOSF;  /* ADICOPS - MOD */
A68_INT  JPHAOSF;  /* ADICOPS - MOD */
A68_CHAR * KPHAOSF;  /* YIELD */
A68_INT  LPHAOSF;  /* YIELD */
A68_INT  MPHAOSF;  /* YIELD */
A68_CHAR * NPHAOSF;  /* YIELD */
A68_CHAR * OPHAOSF;  /* YIELD */
A68_VC  PPHAOSF;  /* OPERATORS - trim index */
A68_VC  QPHAOSF;  /* YIELD */
A68_VC  RPHAOSF;  /* OPERATORS - assign op */
A68_INT  SPHAOSF_i;
A68_INT  TPHAOSF;  /* by part of loop */
A68_INT  UPHAOSF;  /* ADICOPS - MOD */
A68_INT  VPHAOSF;  /* ADICOPS - MOD */
A68_CHAR * WPHAOSF;  /* YIELD */
A_PROC_ENTRY(date_proc);
 /* line 274: */
 /* line 275: */
{ 
if ( (Seconds<0) )
{ 
A_CALLPROC(TIBAOSF_global_msg,(IUAAOSF_system, A_HVEC(NOHAOSF,MOHAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(NOHAOSF,MOHAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
 /* line 276: */
OOHAOSF_days = ((Seconds/86400)+1);
 /* line 277: */
POHAOSF_year = 1970;
 /* line 279: */
QOHAOSF_leap = A68_FALSE;
 /* line 280: */
for ( ;; )
{ 
 /* line 281: */
if ( !((OOHAOSF_days>366)) ) break;
 /* line 282: */
SOHAOSF = 4 ;
if ( QOHAOSF_leap = (A_MOD(POHAOSF_year,SOHAOSF,ROHAOSF)==0) )
{ 
 /* line 283: */
OOHAOSF_days-=366;
} 
else
{ 
 /* line 284: */
OOHAOSF_days-=365;
} 
 /* line 285: */
 /* line 286: */
POHAOSF_year+=1;
}
 /* line 287: */
TOHAOSF = !QOHAOSF_leap;
if ( TOHAOSF )
{TOHAOSF = (OOHAOSF_days==366);
}
if ( TOHAOSF )
{ 
POHAOSF_year+=1;
OOHAOSF_days = 1;
} 
 /* line 288: */
VOHAOSF = 4 ;
QOHAOSF_leap = (A_MOD(POHAOSF_year,VOHAOSF,UOHAOSF)==0);
 /* line 289: */
WOHAOSF_month = 1;
 /* line 290: */
 /* line 291: */
XOHAOSF.data[0] = 31;
if ( QOHAOSF_leap )
{ 
XOHAOSF.data[1] = 29;
} 
else
{ 
XOHAOSF.data[1] = 28;
} 
XOHAOSF.data[2] = 31;
XOHAOSF.data[3] = 30;
XOHAOSF.data[4] = 31;
XOHAOSF.data[5] = 30;
XOHAOSF.data[6] = 31;
XOHAOSF.data[7] = 31;
XOHAOSF.data[8] = 30;
XOHAOSF.data[9] = 31;
XOHAOSF.data[10] = 30;
XOHAOSF.data[11] = 31;
YOHAOSF_mnths = XOHAOSF;
 /* line 292: */
for ( ;; )
{ 
 /* line 293: */
APHAOSF = A_HISVEC(ZOHAOSF,YOHAOSF_mnths,12,A68_INT ) ;
if ( !((OOHAOSF_days>A_VINDEX(APHAOSF,WOHAOSF_month))) ) break;
CPHAOSF = A_HISVEC(BPHAOSF,YOHAOSF_mnths,12,A68_INT ) ;
OOHAOSF_days-=A_VINDEX(CPHAOSF,WOHAOSF_month);
WOHAOSF_month+=1;
}
 /* line 294: */
DPHAOSF_dten = (OOHAOSF_days/10);
 /* line 295: */
if ( (DPHAOSF_dten==0) )
{ 
EPHAOSF = ' ';
} 
else
{ 
EPHAOSF = (A68_SSBITS)(IFHAOSF_zero+DPHAOSF_dten);
} 
FPHAOSF = 1 ;
GPHAOSF = (&A_VINDEX(Ans,FPHAOSF)) ;
(*GPHAOSF) = EPHAOSF;
 /* line 296: */
HPHAOSF = 2 ;
JPHAOSF = 10 ;
KPHAOSF = (&A_VINDEX(Ans,HPHAOSF)) ;
(*KPHAOSF) = (A68_SSBITS)(IFHAOSF_zero+A_MOD(OOHAOSF_days,JPHAOSF,IPHAOSF));
 /* line 297: */
LPHAOSF = 3 ;
MPHAOSF = 7 ;
NPHAOSF = (&A_VINDEX(Ans,MPHAOSF)) ;
OPHAOSF = (&A_VINDEX(Ans,LPHAOSF)) ;
(*OPHAOSF) = (*NPHAOSF) = ' ';
 /* line 298: */
QPHAOSF = A_VTRIM(PPHAOSF,(Ans),A_VTSCRIPT(&(PPHAOSF.upb),(Ans).upb,4,6)) ;
RPHAOSF = A_VINDEX(HOHAOSF_months,WOHAOSF_month) ;
A_VASSIGN2(RPHAOSF,QPHAOSF,A68_CHAR );
 /* line 299: */
 /* line 300: */
TPHAOSF = (-1);
for ( SPHAOSF_i = 11;
( TPHAOSF > 0 && SPHAOSF_i <= 8) ||
( TPHAOSF < 0 && SPHAOSF_i >= 8) ||
( TPHAOSF == 0 ) ;
SPHAOSF_i += TPHAOSF )
{ 
VPHAOSF = 10 ;
WPHAOSF = (&A_VINDEX(Ans,SPHAOSF_i)) ;
(*WPHAOSF) = (A68_SSBITS)(IFHAOSF_zero+A_MOD(POHAOSF_year,VPHAOSF,UPHAOSF));
 /* line 301: */
 /* line 302: */
POHAOSF_year/=10;
}
 /* line 303: */
} 
A_PROC_EXIT(date_proc);
return;
} 
#undef NL

A68_VOID  YPHAOSF_date(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  AQHAOSF_generator;   /* proc value of non-global proc */
A68_VC  FQHAOSF;  /* avoid structure result */
A68_VC  GQHAOSF_ans;
A68_VC  HQHAOSF;  /* clause result */
A_PROC_ENTRY(date);
 /* line 306: */
{ 
A_CLOSURE( AQHAOSF_generator, BQHAOSF_generator, CQHAOSF_generator );
A_CALLPROC(AQHAOSF_generator,(A68_FALSE, &FQHAOSF),(A68_FALSE, &FQHAOSF,(AQHAOSF_generator).nonlocals));
GQHAOSF_ans = FQHAOSF;
KOHAOSF_date_proc(Seconds, GQHAOSF_ans);
HQHAOSF = GQHAOSF_ans;
} 
A_PROC_EXIT(date);
*ReturnedValue = (HQHAOSF);
return;
} 
#undef NL

A68_VOID  JQHAOSF_date_time(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  LQHAOSF_generator;   /* proc value of non-global proc */
A68_VC  QQHAOSF;  /* avoid structure result */
A68_VC  RQHAOSF_ans;
A68_INT  SQHAOSF;  /* YIELD */
A68_INT  TQHAOSF;  /* YIELD */
A68_CHAR * UQHAOSF;  /* YIELD */
A68_CHAR * VQHAOSF;  /* YIELD */
A68_VC  WQHAOSF;  /* OPERATORS - trim index */
A68_VC  XQHAOSF;  /* OPERATORS - trim index */
A68_VC  YQHAOSF;  /* clause result */
A_PROC_ENTRY(date_time);
 /* line 309: */
 /* line 310: */
{ 
A_CLOSURE( LQHAOSF_generator, MQHAOSF_generator, NQHAOSF_generator );
A_CALLPROC(LQHAOSF_generator,(A68_FALSE, &QQHAOSF),(A68_FALSE, &QQHAOSF,(LQHAOSF_generator).nonlocals));
RQHAOSF_ans = QQHAOSF;
 /* line 311: */
SQHAOSF = 12 ;
TQHAOSF = 13 ;
UQHAOSF = (&A_VINDEX(RQHAOSF_ans,TQHAOSF)) ;
VQHAOSF = (&A_VINDEX(RQHAOSF_ans,SQHAOSF)) ;
(*VQHAOSF) = (*UQHAOSF) = ' ';
 /* line 312: */
KOHAOSF_date_proc(Seconds, A_VTRIM(WQHAOSF,(RQHAOSF_ans),A_VTSCRIPT(&(WQHAOSF.upb),(RQHAOSF_ans).upb,1,11)));
 /* line 313: */
DMHAOSF_time_proc(Seconds, A_VTRIM(XQHAOSF,(RQHAOSF_ans),A_VTSCRIPT(&(XQHAOSF.upb),(RQHAOSF_ans).upb,14,21)));
 /* line 314: */
 /* line 315: */
YQHAOSF = RQHAOSF_ans;
} 
A_PROC_EXIT(date_time);
*ReturnedValue = (YQHAOSF);
return;
} 
#undef NL

A68_VOID  ZQHAOSF_time_str(A68_VC  *ReturnedValue)
{ 
A68_INT  ARHAOSF_cpu;
A68_185  CRHAOSF_fr;
A68_INT  DRHAOSF_i;
A68_INT  ERHAOSF;  /* by part of loop */
A68_VC  FRHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  GRHAOSF;  /* OPERATORS - simple index */
A68_INT  HRHAOSF;  /* ADICOPS - MOD */
A68_INT  IRHAOSF;  /* ADICOPS - MOD */
A68_CHAR * JRHAOSF;  /* YIELD */
A68_186  KRHAOSF_time;
A68_VC  LRHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MRHAOSF;  /* OPERATORS - trim index */
A68_VC  NRHAOSF;  /* OPERATORS - trim index */
A68_VC  ORHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  PRHAOSF;  /* OPERATORS - simple index */
A68_INT  QRHAOSF;  /* YIELD */
A68_VC  RRHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  SRHAOSF;  /* OPERATORS - simple index */
A68_INT  TRHAOSF;  /* YIELD */
A68_CHAR * URHAOSF;  /* YIELD */
A68_CHAR * VRHAOSF;  /* YIELD */
A68_187  WRHAOSF;  /* collateral clause result */
A68_VC  XRHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  YRHAOSF;  /* avoid structure result */
A68_VC  ZRHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ASHAOSF;  /* clause result */
A68_46  BSHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CSHAOSF;  /* avoid structure result */
A_PROC_ENTRY(time_str);
{ 
ARHAOSF_cpu = TEHAOSF_testmode_seconds(CRBAOSF_get_cpu_time());
 /* line 321: */
CRHAOSF_fr = BRHAOSF;
 /* line 322: */
 /* line 323: */
ERHAOSF = (-1);
for ( DRHAOSF_i = 3;
( ERHAOSF > 0 && DRHAOSF_i <= 2) ||
( ERHAOSF < 0 && DRHAOSF_i >= 2) ||
( ERHAOSF == 0 ) ;
DRHAOSF_i += ERHAOSF )
{ 
GRHAOSF = A_ISVEC(FRHAOSF,(&CRHAOSF_fr),5,A68_CHAR ) ;
IRHAOSF = 10 ;
JRHAOSF = (&A_VINDEX(GRHAOSF,DRHAOSF_i)) ;
(*JRHAOSF) = (A68_SSBITS)(IFHAOSF_zero+A_MOD(ARHAOSF_cpu,IRHAOSF,HRHAOSF));
 /* line 324: */
 /* line 325: */
ARHAOSF_cpu/=10;
}
 /* line 326: */
 /* line 327: */
MRHAOSF = A_ISVEC(LRHAOSF,(&KRHAOSF_time),10,A68_CHAR ) ;
DMHAOSF_time_proc(TEHAOSF_testmode_seconds((A68_INT )VPBAOSF_get_time()), A_VTRIM(NRHAOSF,(MRHAOSF),A_VTSCRIPT(&(NRHAOSF.upb),(MRHAOSF).upb,1,8)));
 /* line 328: */
PRHAOSF = A_ISVEC(ORHAOSF,(&KRHAOSF_time),10,A68_CHAR ) ;
QRHAOSF = 9 ;
SRHAOSF = A_ISVEC(RRHAOSF,(&KRHAOSF_time),10,A68_CHAR ) ;
TRHAOSF = 10 ;
URHAOSF = (&A_VINDEX(SRHAOSF,TRHAOSF)) ;
VRHAOSF = (&A_VINDEX(PRHAOSF,QRHAOSF)) ;
(*VRHAOSF) = (*URHAOSF) = ' ';
 /* line 329: */
WRHAOSF.data[0] = A_HISVEC(XRHAOSF,KRHAOSF_time,10,A68_CHAR );
FEAAOSF_intchars( ARHAOSF_cpu, &YRHAOSF );
WRHAOSF.data[1] = YRHAOSF;
WRHAOSF.data[2] = A_HISVEC(ZRHAOSF,CRHAOSF_fr,5,A68_CHAR );
 /* line 330: */
JDAAOSF_concat( A_HISVEC(BSHAOSF,WRHAOSF,3,A68_VC ), &CSHAOSF );
ASHAOSF = CSHAOSF;
} 
A_PROC_EXIT(time_str);
*ReturnedValue = (ASHAOSF);
return;
} 
#undef NL
 /* line 343: */

A_STATIC A68_VOID  FSHAOSF_extractchars(A68_VC * Input, A68_CHAR  Terminatingchar, A68_VC  *ReturnedValue)
{ 
A68_VC  JSHAOSF;  /* avoid structure result */
A68_VC  HSHAOSF_ans;
A68_BOOL  KSHAOSF_found;
A68_INT  LSHAOSF_i;
A68_BOOL  MSHAOSF;  /* optbool result */
A68_VC  NSHAOSF;  /* OPERATORS - trim index */
A68_VC  OSHAOSF;  /* avoid structure result */
A68_BOOL  PSHAOSF;  /* optbool result */
A68_VC  QSHAOSF;  /* OPERATORS - trim index */
A68_VC  RSHAOSF;  /* avoid structure result */
A68_VC  USHAOSF;  /* avoid structure result */
A68_VC  VSHAOSF;  /* clause result */
A_PROC_ENTRY(extractchars);
 /* line 344: */
 /* line 346: */
{ 
ZCAAOSF_makervc( ISHAOSF, &JSHAOSF );
HSHAOSF_ans = JSHAOSF;
 /* line 349: */
 /* line 350: */
 /* line 353: */
if ( ((*Input).upb>0) )
{ 
KSHAOSF_found = A68_FALSE;
 /* line 354: */
LSHAOSF_i = 1;
 /* line 355: */
for ( ;; )
{ 
 /* line 356: */
 /* line 357: */
MSHAOSF = (LSHAOSF_i<=(*Input).upb);
if ( MSHAOSF )
{MSHAOSF = !KSHAOSF_found;
}
 /* line 358: */
if ( !(MSHAOSF) ) break;
 /* line 359: */
 /* line 360: */
if ( ((*(&A_VINDEX((*Input),LSHAOSF_i)))==Terminatingchar) )
{ 
 /* line 361: */
 /* line 362: */
KSHAOSF_found = A68_TRUE;
} 
else
{ 
 /* line 363: */
 /* line 364: */
LSHAOSF_i+=1;
} 
}
 /* line 367: */
 /* line 368: */
 /* line 369: */
if ( (LSHAOSF_i>1) )
{ 
 /* line 370: */
ZCAAOSF_makervc( A_VTRIM(NSHAOSF,((*Input)),A_VTSCRIPT(&(NSHAOSF.upb),((*Input)).upb,1,(LSHAOSF_i-1))), &OSHAOSF );
HSHAOSF_ans = OSHAOSF;
} 
 /* line 373: */
for ( ;; )
{ 
 /* line 374: */
PSHAOSF = (LSHAOSF_i<=(*Input).upb);
if ( PSHAOSF )
{ /* line 375: */
PSHAOSF = ((*(&A_VINDEX((*Input),LSHAOSF_i)))==Terminatingchar);
}
 /* line 376: */
if ( !(PSHAOSF) ) break;
 /* line 377: */
LSHAOSF_i+=1;
}
 /* line 381: */
 /* line 382: */
 /* line 383: */
if ( (LSHAOSF_i<=(*Input).upb) )
{ 
 /* line 384: */
 /* line 385: */
ZCAAOSF_makervc( A_VTRIM(QSHAOSF,((*Input)),A_VTSCRIPT(&(QSHAOSF.upb),((*Input)).upb,LSHAOSF_i,((*Input)).upb)), &RSHAOSF );
(*Input) = RSHAOSF;
} 
else
{ 
 /* line 386: */
 /* line 387: */
ZCAAOSF_makervc( TSHAOSF, &USHAOSF );
(*Input) = USHAOSF;
} 
} 
 /* line 389: */
 /* line 391: */
VSHAOSF = HSHAOSF_ans;
} 
A_PROC_EXIT(extractchars);
*ReturnedValue = (VSHAOSF);
return;
} 
#undef NL
 /* line 403: */
 /* line 404: */
 /* line 405: */
 /* line 406: */
 /* line 407: */
 /* line 409: */

A_STATIC A68_BOOL  DTHAOSF_parsedateandtimestring(A68_VC  Input, A68_INT * Year, A68_INT * Month, A68_INT * Day, A68_INT * Hour, A68_INT * Min, A68_INT * Sec)
{ 
A68_BOOL  HTHAOSF_success;
A68_31  JTHAOSF_generator;   /* proc value of non-global proc */
A68_VC  PTHAOSF;  /* avoid structure result */
A68_VC  OTHAOSF_dateandtimestring;
A68_BOOL  QTHAOSF_error;
A68_VC  RTHAOSF;  /* avoid structure result */
A68_BOOL  STHAOSF;  /* optbool result */
A68_BOOL  TTHAOSF;  /* clause result */
A68_VC  VTHAOSF;  /* avoid structure result */
A68_VC  UTHAOSF_monthchars;
A68_BOOL  WTHAOSF_found;
A68_INT  XTHAOSF_i;
A68_INT  YTHAOSF;  /* to part of loop */
A68_BOOL  ZTHAOSF_error;
A68_VC  AUHAOSF;  /* avoid structure result */
A68_BOOL  BUHAOSF;  /* clause result */
A68_BOOL  CUHAOSF_error;
A68_VC  DUHAOSF;  /* avoid structure result */
A68_BOOL  EUHAOSF;  /* optbool result */
A68_BOOL  FUHAOSF;  /* clause result */
A68_BOOL  GUHAOSF_error;
A68_VC  HUHAOSF;  /* avoid structure result */
A68_BOOL  IUHAOSF;  /* optbool result */
A68_BOOL  JUHAOSF;  /* clause result */
A68_BOOL  KUHAOSF_error;
A68_VC  LUHAOSF;  /* avoid structure result */
A68_BOOL  MUHAOSF;  /* optbool result */
A68_BOOL  NUHAOSF;  /* clause result */
A68_BOOL  OUHAOSF;  /* clause result */
A_PROC_ENTRY(parsedateandtimestring);
 /* line 410: */
 /* line 412: */
{ 
 /* line 413: */
 /* line 414: */
 /* line 416: */
HTHAOSF_success = A68_FALSE;
 /* line 418: */
A_CLOSURE( JTHAOSF_generator, KTHAOSF_generator, LTHAOSF_generator );
(( LTHAOSF_generator * ) ( JTHAOSF_generator.nonlocals )) -> Input = Input;
A_CALLPROC(JTHAOSF_generator,(A68_TRUE, &PTHAOSF),(A68_TRUE, &PTHAOSF,(JTHAOSF_generator).nonlocals));
A_VASSIGN2(Input,PTHAOSF,A68_CHAR ) ;
OTHAOSF_dateandtimestring = PTHAOSF;
 /* line 422: */
{ 
QTHAOSF_error = A68_FALSE;
 /* line 423: */
 /* line 424: */
FSHAOSF_extractchars( (&OTHAOSF_dateandtimestring), ETHAOSF_dateseparator, &RTHAOSF );
(*Day) = QIHAOSF_charstoint(RTHAOSF, (&QTHAOSF_error));
 /* line 425: */
 /* line 426: */
STHAOSF = !QTHAOSF_error;
if ( STHAOSF )
{STHAOSF = ((*Day)>0);
}
if ( STHAOSF )
{ /* line 427: */
STHAOSF = ((*Day)<32);
}
 /* line 430: */
TTHAOSF = STHAOSF;
if ( TTHAOSF )
{ 
FSHAOSF_extractchars( (&OTHAOSF_dateandtimestring), ETHAOSF_dateseparator, &VTHAOSF );
UTHAOSF_monthchars = VTHAOSF;
 /* line 431: */
 /* line 432: */
 /* line 435: */
if ( (UTHAOSF_monthchars.upb==3) )
{ 
WTHAOSF_found = A68_FALSE;
 /* line 436: */
 /* line 437: */
YTHAOSF = HOHAOSF_months.upb;
for ( XTHAOSF_i = 1;
XTHAOSF_i <= YTHAOSF;
XTHAOSF_i += 1 )
{ 
 /* line 438: */
 /* line 439: */
if ( !(!WTHAOSF_found) ) break;
 /* line 440: */
 /* line 441: */
if ( A_VC_EQ(UTHAOSF_monthchars,A_VINDEX(HOHAOSF_months,XTHAOSF_i)) )
{ 
(*Month) = XTHAOSF_i;
 /* line 442: */
 /* line 443: */
 /* line 444: */
WTHAOSF_found = A68_TRUE;
} 
}
 /* line 445: */
 /* line 446: */
 /* line 448: */
if ( WTHAOSF_found )
{ 
{ 
ZTHAOSF_error = A68_FALSE;
 /* line 449: */
 /* line 450: */
FSHAOSF_extractchars( (&OTHAOSF_dateandtimestring), GTHAOSF_spacechar, &AUHAOSF );
(*Year) = QIHAOSF_charstoint(AUHAOSF, (&ZTHAOSF_error));
 /* line 451: */
 /* line 452: */
 /* line 454: */
BUHAOSF = !ZTHAOSF_error;
if ( BUHAOSF )
{ 
{ 
CUHAOSF_error = A68_FALSE;
 /* line 455: */
 /* line 456: */
FSHAOSF_extractchars( (&OTHAOSF_dateandtimestring), FTHAOSF_timeseparator, &DUHAOSF );
(*Hour) = QIHAOSF_charstoint(DUHAOSF, (&CUHAOSF_error));
 /* line 457: */
EUHAOSF = !CUHAOSF_error;
if ( EUHAOSF )
{ /* line 458: */
EUHAOSF = ((*Hour)<24);
}
 /* line 460: */
FUHAOSF = EUHAOSF;
if ( FUHAOSF )
{ 
{ 
GUHAOSF_error = A68_FALSE;
 /* line 461: */
 /* line 462: */
FSHAOSF_extractchars( (&OTHAOSF_dateandtimestring), FTHAOSF_timeseparator, &HUHAOSF );
(*Min) = QIHAOSF_charstoint(HUHAOSF, (&GUHAOSF_error));
 /* line 463: */
IUHAOSF = !GUHAOSF_error;
if ( IUHAOSF )
{ /* line 464: */
IUHAOSF = ((*Min)<60);
}
 /* line 466: */
JUHAOSF = IUHAOSF;
if ( JUHAOSF )
{ 
{ 
KUHAOSF_error = A68_FALSE;
 /* line 467: */
 /* line 468: */
FSHAOSF_extractchars( (&OTHAOSF_dateandtimestring), GTHAOSF_spacechar, &LUHAOSF );
(*Sec) = QIHAOSF_charstoint(LUHAOSF, (&KUHAOSF_error));
 /* line 469: */
MUHAOSF = !KUHAOSF_error;
if ( MUHAOSF )
{ /* line 470: */
MUHAOSF = ((*Sec)<60);
}
 /* line 472: */
NUHAOSF = MUHAOSF;
if ( NUHAOSF )
{ 
 /* line 473: */
 /* line 478: */
 /* line 479: */
HTHAOSF_success = A68_TRUE;
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
 /* line 481: */
 /* line 483: */
OUHAOSF = HTHAOSF_success;
} 
A_PROC_EXIT(parsedateandtimestring);
return( OUHAOSF );
} 
#undef NL
 /* line 490: */
 /* line 492: */

A68_BOOL  SUHAOSF_datetimetoeut(A68_VC  String, A68_INT * Seconds, A68_97  Msg)
{ 
A68_INT  YUHAOSF_year;
A68_INT  ZUHAOSF_month;
A68_INT  AVHAOSF_day;
A68_INT  BVHAOSF_hour;
A68_INT  CVHAOSF_min;
A68_INT  DVHAOSF_sec;
A68_142  EVHAOSF_casefault;   /* proc value of non-global proc */
A68_BOOL  KVHAOSF;  /* clause result */
A68_INT  LVHAOSF_time;
A68_INT  MVHAOSF;  /* ADICOPS - MOD */
A68_INT  NVHAOSF;  /* ADICOPS - MOD */
A68_INT  OVHAOSF;  /* ADICOPS - MOD */
A68_INT  PVHAOSF;  /* clause result */
A68_BOOL  QVHAOSF;  /* clause result */
A_PROC_ENTRY(datetimetoeut);
 /* line 493: */
 /* line 494: */
{ 
 /* line 495: */
 /* line 496: */
 /* line 497: */
 /* line 498: */
 /* line 500: */
 /* line 502: */
 /* line 503: */
A_CLOSURE( EVHAOSF_casefault, FVHAOSF_casefault, GVHAOSF_casefault );
(( GVHAOSF_casefault * ) ( EVHAOSF_casefault.nonlocals )) -> Msg = Msg;
 /* line 507: */
 /* line 508: */
 /* line 510: */
if ( DTHAOSF_parsedateandtimestring(String, (&YUHAOSF_year), (&ZUHAOSF_month), (&AVHAOSF_day), (&BVHAOSF_hour), (&CVHAOSF_min), (&DVHAOSF_sec)) )
{ 
YUHAOSF_year-=XUHAOSF_lastnoneutyear;
 /* line 511: */
 /* line 514: */
KVHAOSF = (YUHAOSF_year>0);
if ( KVHAOSF )
{ 
 /* line 477: */
 /* line 515: */
 /* line 476: */
LVHAOSF_time = (((YUHAOSF_year-1)*WUHAOSF_daysinnonleapyear)+((YUHAOSF_year+1)/4));
 /* line 519: */
 /* line 520: */
 /* line 475: */
 /* line 474: */
 /* line 521: */
 /* line 522: */
NVHAOSF = (YUHAOSF_year+2) ;
OVHAOSF = 4 ;
if ( (A_MOD(NVHAOSF,OVHAOSF,MVHAOSF)==0) )
{ 
 /* line 523: */
switch ( ZUHAOSF_month )
{ 
case 1: 
PVHAOSF = 0;
break;
case 2: 
PVHAOSF = 31;
break;
case 3: 
PVHAOSF = 60;
break;
case 4: 
PVHAOSF = 91;
break;
case 5: 
PVHAOSF = 121;
break;
case 6: 
PVHAOSF = 152;
break;
case 7: 
PVHAOSF = 182;
break;
case 8: 
PVHAOSF = 213;
break;
case 9: 
PVHAOSF = 244;
break;
case 10: 
PVHAOSF = 274;
break;
case 11: 
 /* line 524: */
PVHAOSF = 305;
break;
case 12: 
PVHAOSF = 335;
break;
default: 
A_CALLPROC(EVHAOSF_casefault,(),((EVHAOSF_casefault).nonlocals));
 /* line 525: */
 /* line 526: */
 /* line 527: */
PVHAOSF = 0;
break;
} 
} 
else
{ 
 /* line 528: */
switch ( ZUHAOSF_month )
{ 
case 1: 
PVHAOSF = 0;
break;
case 2: 
PVHAOSF = 31;
break;
case 3: 
PVHAOSF = 59;
break;
case 4: 
PVHAOSF = 90;
break;
case 5: 
PVHAOSF = 120;
break;
case 6: 
PVHAOSF = 151;
break;
case 7: 
PVHAOSF = 181;
break;
case 8: 
PVHAOSF = 212;
break;
case 9: 
PVHAOSF = 243;
break;
case 10: 
PVHAOSF = 273;
break;
case 11: 
 /* line 529: */
PVHAOSF = 304;
break;
case 12: 
PVHAOSF = 334;
break;
default: 
A_CALLPROC(EVHAOSF_casefault,(),((EVHAOSF_casefault).nonlocals));
 /* line 530: */
 /* line 531: */
PVHAOSF = 0;
break;
} 
} 
LVHAOSF_time = ((((LVHAOSF_time+PVHAOSF)+AVHAOSF_day)-1)*VUHAOSF_hoursinday);
 /* line 534: */
LVHAOSF_time = ((LVHAOSF_time+BVHAOSF_hour)*UUHAOSF_minutesinhour);
 /* line 537: */
LVHAOSF_time = ((LVHAOSF_time+CVHAOSF_min)*TUHAOSF_secondsinminute);
 /* line 540: */
(*Seconds) = (LVHAOSF_time+DVHAOSF_sec);
 /* line 541: */
 /* line 542: */
 /* line 544: */
QVHAOSF = A68_TRUE;
} 
else
{ 
 /* line 545: */
 /* line 546: */
 /* line 548: */
QVHAOSF = A68_FALSE;
} 
} 
else
{ 
 /* line 549: */
 /* line 551: */
QVHAOSF = A68_FALSE;
} 
} 
A_PROC_EXIT(datetimetoeut);
return( QVHAOSF );
} 
#undef NL

A68_INT  GWHAOSF_addwithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed)
{ 
A68_BOOL  HWHAOSF;  /* optbool result */
A68_BOOL  IWHAOSF;  /* optbool result */
A68_INT  JWHAOSF;  /* clause result */
A_PROC_ENTRY(addwithoverflowcheck);
 /* line 571: */
HWHAOSF = (A>0);
if ( HWHAOSF )
{HWHAOSF = (A>(TVHAOSF_maxint-B));
}
 /* line 572: */
if ( ! HWHAOSF )
{IWHAOSF = (A<0);
if ( IWHAOSF )
{IWHAOSF = (A<((-(TVHAOSF_maxint+B))-1));
}
 /* line 573: */
HWHAOSF = IWHAOSF;
}
 /* line 574: */
if ( HWHAOSF )
{ 
(*Overflowed) = A68_TRUE;
 /* line 575: */
 /* line 576: */
 /* line 577: */
JWHAOSF = TVHAOSF_maxint;
} 
else
{ 
 /* line 578: */
JWHAOSF = (A+B);
} 
A_PROC_EXIT(addwithoverflowcheck);
return( JWHAOSF );
} 
#undef NL

A68_INT  NWHAOSF_subtractwithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed)
{ 
A68_BOOL  OWHAOSF;  /* optbool result */
A68_BOOL  PWHAOSF;  /* optbool result */
A68_INT  QWHAOSF;  /* clause result */
A_PROC_ENTRY(subtractwithoverflowcheck);
 /* line 582: */
OWHAOSF = (A>0);
if ( OWHAOSF )
{OWHAOSF = (A>(TVHAOSF_maxint+B));
}
 /* line 583: */
if ( ! OWHAOSF )
{PWHAOSF = (A<0);
if ( PWHAOSF )
{PWHAOSF = (A<((B-TVHAOSF_maxint)-1));
}
 /* line 584: */
OWHAOSF = PWHAOSF;
}
 /* line 585: */
if ( OWHAOSF )
{ 
(*Overflowed) = A68_TRUE;
 /* line 586: */
 /* line 587: */
 /* line 588: */
QWHAOSF = TVHAOSF_maxint;
} 
else
{ 
 /* line 589: */
QWHAOSF = (A-B);
} 
A_PROC_EXIT(subtractwithoverflowcheck);
return( QWHAOSF );
} 
#undef NL

A68_INT  UWHAOSF_multiplywithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed)
{ 
A68_BOOL  VWHAOSF;  /* optbool result */
A68_BOOL  WWHAOSF;  /* optbool result */
A68_BOOL  XWHAOSF;  /* clause result */
A68_BOOL  YWHAOSF;  /* optbool result */
A68_BOOL  ZWHAOSF;  /* optbool result */
A68_BOOL  AXHAOSF;  /* optbool result */
A68_BOOL  BXHAOSF;  /* optbool result */
A68_BOOL  CXHAOSF;  /* optbool result */
A68_BOOL  DXHAOSF;  /* optbool result */
A68_INT  EXHAOSF;  /* clause result */
A_PROC_ENTRY(multiplywithoverflowcheck);
 /* line 592: */
 /* line 593: */
VWHAOSF = (A<0);
if ( VWHAOSF )
{VWHAOSF = (B<0);
}
if ( VWHAOSF )
{ 
WWHAOSF = (A<(TVHAOSF_maxint/B));
if ( ! WWHAOSF )
{ /* line 594: */
WWHAOSF = (B<(TVHAOSF_maxint/A));
}
XWHAOSF = WWHAOSF;
} 
else
{ 
YWHAOSF = (A<0);
if ( YWHAOSF )
{YWHAOSF = (B>0);
}
if ( YWHAOSF )
{ 
ZWHAOSF = (A<(((-TVHAOSF_maxint)-1)/B));
if ( ! ZWHAOSF )
{ /* line 595: */
ZWHAOSF = (B>(((-TVHAOSF_maxint)-1)/A));
}
XWHAOSF = ZWHAOSF;
} 
else
{ 
AXHAOSF = (A>0);
if ( AXHAOSF )
{AXHAOSF = (B<0);
}
if ( AXHAOSF )
{ 
BXHAOSF = (A>(((-TVHAOSF_maxint)-1)/B));
if ( ! BXHAOSF )
{ /* line 596: */
BXHAOSF = (B<(((-TVHAOSF_maxint)-1)/A));
}
XWHAOSF = BXHAOSF;
} 
else
{ 
CXHAOSF = (A>0);
if ( CXHAOSF )
{CXHAOSF = (B>0);
}
if ( CXHAOSF )
{ 
DXHAOSF = (A>(TVHAOSF_maxint/B));
if ( ! DXHAOSF )
{ /* line 597: */
DXHAOSF = (B>(TVHAOSF_maxint/A));
}
XWHAOSF = DXHAOSF;
} 
else
{ 
 /* line 598: */
 /* line 599: */
 /* line 600: */
XWHAOSF = A68_FALSE;
} 
} 
} 
} 
if ( XWHAOSF )
{ 
(*Overflowed) = A68_TRUE;
 /* line 601: */
 /* line 602: */
 /* line 603: */
EXHAOSF = TVHAOSF_maxint;
} 
else
{ 
 /* line 604: */
EXHAOSF = (A*B);
} 
A_PROC_EXIT(multiplywithoverflowcheck);
return( EXHAOSF );
} 
#undef NL

A68_VOID  GXHAOSF_sysfault(A68_VC  Message)
{ 
A68_46  HXHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sysfault);
A_CALLPROC(TIBAOSF_global_msg,(IUAAOSF_system, A_HVEC(HXHAOSF,Message,A68_VC )),(IUAAOSF_system, A_HVEC(HXHAOSF,Message,A68_VC ),(TIBAOSF_global_msg).nonlocals));
A_PROC_EXIT(sysfault);
return;
} 
#undef NL

A68_VOID  JXHAOSF_abort(A68_VC  Message)
{ 
A68_46  KXHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(abort);
A_CALLPROC(TIBAOSF_global_msg,(KUAAOSF_fatal, A_HVEC(KXHAOSF,Message,A68_VC )),(KUAAOSF_fatal, A_HVEC(KXHAOSF,Message,A68_VC ),(TIBAOSF_global_msg).nonlocals));
A_PROC_EXIT(abort);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void CFHAOSF(void)   /* initialise DECS basics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","basics.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/testmode.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osinterface.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  FGHAOSF;  /* OPERATORS - nil -> mode */
A68_VC  LGHAOSF;  /* avoid structure result */
A68_BITS  KIHAOSF;  /* SHL */
A68_181  HNHAOSF;  /* collateral clause result */
A68_46  GOHAOSF;  /* OPERATORS - istruct -> vector */
A68_INT  RVHAOSF;  /* SHR */
A68_BITS  SVHAOSF;  /* SHR */
A68_INT  WVHAOSF;  /* SHR */
A68_INT  XVHAOSF;  /* clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
UBHAOSF();   /* USE testmode */
IPEAOSF();   /* USE osinterface */
ZRAAOSF();   /* USE messageproc */
QMDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/basics.a68";
A_config.translation_time = "Mon May  3 00:36:16 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "BFHAOSF (from seed file) ";
A_config.spec_change_time = "Mon May  3 00:36:16 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS basics);
UEAALIB_a68config(LGAALIB_configinfo, GFHAOSF);
 /* line 97: */
 /* line 98: */
IFHAOSF_zero = (A68_INT)(unsigned char)'0';
 /* line 100: */
 /* line 101: */
 /* line 103: */
 /* line 104: */
 /* line 106: */
GGHAOSF_nilid = (A_VVAC(FGHAOSF));
 /* line 107: */
IGHAOSF_generator( A68_FALSE, &LGHAOSF );
MGHAOSF_nullid = LGHAOSF;
 /* line 109: */
 /* line 111: */
 /* line 120: */
 /* line 124: */
 /* line 131: */
 /* line 135: */
 /* line 144: */
 /* line 145: */
 /* line 146: */
 /* line 152: */
 /* line 153: */
 /* line 154: */
KIHAOSF = 01U ;
LIHAOSF_maxchar = (A68_INT )A_SHL(KIHAOSF,IIHAOSF_bitsperchar);
 /* line 155: */
MIHAOSF_maxintinchar = ((LIHAOSF_maxchar-JIHAOSF_charsperint)-1);
 /* line 156: */
NIHAOSF_intmask = (LIHAOSF_maxchar-1);
 /* line 158: */
 /* line 190: */
 /* line 206: */
 /* line 222: */
 /* line 233: */
 /* line 250: */
 /* line 252: */
 /* line 254: */
 /* line 267: */
 /* line 270: */
HNHAOSF.data[0] = JNHAOSF;
HNHAOSF.data[1] = LNHAOSF;
HNHAOSF.data[2] = NNHAOSF;
HNHAOSF.data[3] = PNHAOSF;
HNHAOSF.data[4] = RNHAOSF;
 /* line 271: */
HNHAOSF.data[5] = TNHAOSF;
HNHAOSF.data[6] = VNHAOSF;
HNHAOSF.data[7] = XNHAOSF;
HNHAOSF.data[8] = ZNHAOSF;
HNHAOSF.data[9] = BOHAOSF;
HNHAOSF.data[10] = DOHAOSF;
HNHAOSF.data[11] = FOHAOSF;
HOHAOSF_months = A_HISVEC(GOHAOSF,HNHAOSF,12,A68_VC );
 /* line 273: */
 /* line 305: */
 /* line 308: */
 /* line 318: */
 /* line 319: */
 /* line 320: */
 /* line 340: */
 /* line 341: */
 /* line 401: */
 /* line 402: */
 /* line 488: */
 /* line 489: */
 /* line 556: */
RVHAOSF = 1 ;
SVHAOSF = (A68_BITS )(-1) ;
TVHAOSF_maxint = (A68_INT )A_SHR(SVHAOSF,RVHAOSF);
 /* line 558: */
 /* line 559: */
{ 
UVHAOSF_w = 0;
 /* line 560: */
VVHAOSF_b = (A68_BITS )(-1);
 /* line 561: */
for ( ;; )
{ 
if ( !((VVHAOSF_b!=0X0U)) ) break;
WVHAOSF = 1 ;
VVHAOSF_b = A_SHR(VVHAOSF_b,WVHAOSF);
UVHAOSF_w+=1;
}
 /* line 562: */
 /* line 563: */
XVHAOSF = UVHAOSF_w;
} 
YVHAOSF_bitswidth = XVHAOSF;
 /* line 564: */
ZVHAOSF_byteswidth = (YVHAOSF_bitswidth/IIHAOSF_bitsperchar);
 /* line 565: */
AWHAOSF_largeint = (TVHAOSF_maxint/16);
 /* line 567: */
BWHAOSF_minint = ((-TVHAOSF_maxint)-1);
CWHAOSF_largeminint = (BWHAOSF_minint/16);
 /* line 569: */
 /* line 580: */
 /* line 591: */
 /* line 608: */
 /* line 609: */
 /* line 610: */
 /* line 614: */
NXHAOSF_library_type = MXHAOSF;
 /* line 615: */
QXHAOSF_simfile_type = PXHAOSF;
 /* line 616: */
TXHAOSF_history_type = SXHAOSF;
 /* line 617: */
WXHAOSF_source_type = VXHAOSF;
 /* line 618: */
ZXHAOSF_savefile_type = YXHAOSF;
 /* line 619: */
CYHAOSF_ellanet_type = BYHAOSF;
 /* line 620: */
FYHAOSF_logfile_type = EYHAOSF;
 /* line 621: */
IYHAOSF_infile_type = HYHAOSF;
 /* line 622: */
LYHAOSF_outfile_type = KYHAOSF;
 /* line 623: */
OYHAOSF_codedump_type = NYHAOSF;
 /* line 624: */
RYHAOSF_assfile_type = QYHAOSF;
 /* line 625: */
UYHAOSF_download_type = TYHAOSF;
 /* line 626: */
XYHAOSF_ellasysdir_var = WYHAOSF;
 /* line 629: */
 /* line 630: */
 /* line 658: */
/*SKIP*/;
A_PROC_EXIT(DECS basics);
} 
#undef NL
/* end of translation of basics.a68 */
