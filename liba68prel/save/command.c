/* UNAME:XYHAOSF */
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
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t159 ;

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t159 ),(struct A68t159 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE159) VOID */
struct A68t159 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t159  A68_159 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t160,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t161,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(BITS,BITS) BITS */
struct A68t163 ;

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t163 ,A68_INT ),(struct A68t163 ,A68_INT ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE163,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t163,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(CHAR) VOID */
struct A68t165 ;

A_PROCEDURE(A68_INT ,A68t164,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE165) INT */

A_PROCEDURE(A68_CHAR ,A68t165,(void),(void *));
typedef struct A68t165  A68_165 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t166,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t167,(A68_INT ),(A68_INT ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t168,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t169,(A68_VC *),(A68_VC *,void *));
typedef struct A68t169  A68_169 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t170,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t171,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
A_VECTOR(struct A68t174 ,A68t173);
typedef struct A68t173  A68_173 ;    /* VECTOR [] MODE174 */
struct A68t172{
A68_BITS  Type;
A_PAD_BITS(PAD_36)
struct A68t173  Elements;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(BITS,REF MODE173)  */
struct A68t174 { A68_INT mode; union {
A68_INT * mode1;
struct A68t172  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t174  A68_174 ;    /* UNION(REF INT,MODE172)  */
struct A68t175{
A68_INT  Sort;
A_PAD_INT(PAD_37)
A68_VC  Value;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t175 ,A68t176);
typedef struct A68t176  A68_176 ;    /* VECTOR [] MODE175 */
A_VECTOR(struct A68t177 ,A68t179);
typedef struct A68t179  A68_179 ;    /* VECTOR [] MODE177 */
struct A68t178{
A68_INT  Choice;
A_PAD_INT(PAD_38)
struct A68t179  Params;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT,REF MODE179)  */
struct A68t177 { A68_INT mode; union {
struct A68t178  mode1;
struct A68t175  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t177  A68_177 ;    /* UNION(MODE178,MODE175)  */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE97) REF MODE26 */
struct A68t180 { A68_INT mode; union {
struct A68t181  mode1;
A68_INT * mode2;
struct A68t172  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t180  A68_180 ;    /* UNION(MODE181,REF INT,MODE172)  */
struct A68t182{
A68_INT * Sort;
struct A68t180  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(REF INT,MODE180,REF MODE26,REF MODE26)  */
struct A68t183{
struct A68t182  Rule;
struct A68t183 * Rest;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(MODE182,REF MODE183)  */

A_PROCEDURE(A68_BOOL ,A68t184,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE172) BOOL */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t173 ,struct A68t172 *),(struct A68t173 ,struct A68t172 *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE173) MODE172 */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t174 ,struct A68t172 *),(struct A68t174 ,struct A68t172 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE174) MODE172 */
struct A68t188 ;

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t174 ,struct A68t188 ,A68_VC *),(struct A68t174 ,struct A68t188 ,A68_VC *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE174,REF MODE188) REF MODE26 */
A_VECTOR(struct A68t182 ,A68t188);
typedef struct A68t188  A68_188 ;    /* VECTOR [] MODE182 */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t34 *,struct A68t188 ),(struct A68t34 *,struct A68t188 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE34,REF MODE188) VOID */
struct A68t191 ;

A_PROCEDURE(struct A68t183 *,A68t190,(struct A68t183 *,struct A68t191 ),(struct A68t183 *,struct A68t191 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE183,MODE191) REF MODE183 */
A_VECTOR(struct A68t192 ,A68t191);
typedef struct A68t191  A68_191 ;    /* VECTOR [] MODE192 */
struct A68t192{
A68_INT * No;
struct A68t180  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(REF INT,MODE180,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t177 ,struct A68t176 *),(struct A68t177 ,struct A68t176 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE177) REF MODE176 */

A_PROCEDURE(A68_BOOL ,A68t194,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t195,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t196,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_INT ,A68t198,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t197{
A68_VC  Rdbuffer;
struct A68t198  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_39)
A68_INT  Rdcharno;
A_PAD_INT(PAD_40)
A68_INT  Start_of_word;
A_PAD_INT(PAD_41)
struct A68t199 * Stack;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE26,MODE198,INT,INT,INT,REF MODE199)  */
struct A68t199{
A68_VC  Line;
struct A68t199 * Rest;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(REF MODE26,REF MODE199)  */

A_PROCEDURE(struct A68t197 *,A68t200,(A68_VC ,struct A68t198 ),(A68_VC ,struct A68t198 ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE26,MODE198) REF MODE197 */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t197 ),(struct A68t197 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE197) VOID */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_BOOL ,A68t203,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t188 ,struct A68t174 ,struct A68t97 ,struct A68t177 *),(struct A68t188 ,struct A68t174 ,struct A68t97 ,struct A68t177 *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE188,MODE174,MODE97) MODE177 */

A_PROCEDURE(A68_CHAR ,A68t205,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t206,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t175 ,A68_INT ,struct A68t97 ),(struct A68t175 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE175,INT,MODE97) VOID */
struct A68t208{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_42)
A68_BOOL  Check;
A_PAD_BOOL(PAD_43)
};
typedef struct A68t208  A68_208 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t208 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t208 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE208,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t210,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t211,(struct A68t175 ),(struct A68t175 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE175) BOOL */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t175 ,struct A68t97 ,A68_VC *),(struct A68t175 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE175,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE142) VOID */

A_PROCEDURE(A68_VOID ,A68t214,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 57 CHAR */
struct A68t216{
A68_INT  C;
A_PAD_INT(PAD_44)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(INT)  */
struct A68t217{
A68_BITS  A;
A_PAD_BITS(PAD_45)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t219,(A68_VC ,struct A68t177 ,struct A68t97 ),(A68_VC ,struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE26,MODE177,MODE97) VOID */
struct A68t218{
A68_VC  Parameter;
struct A68t219  Proc;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE26,MODE219)  */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t177 ,struct A68t97 ),(struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE177,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t176 ,struct A68t97 ),(struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE176,MODE97) VOID */
struct A68t220 { A68_INT mode; union {
struct A68t218  mode1;
struct A68t221  mode2;
struct A68t222  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t220  A68_220 ;    /* UNION(MODE218,MODE221,MODE222)  */
A_VECTOR(struct A68t232 ,A68t225);
typedef struct A68t225  A68_225 ;    /* VECTOR [] MODE232 */
struct A68t232 { A68_INT mode; union {
struct A68t229 * mode1;
struct A68t230 * mode2;
struct A68t231 * mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t232  A68_232 ;    /* UNION(REF MODE229,REF MODE230,REF MODE231)  */
struct A68t229 ;

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t229 *,struct A68t34 *),(struct A68t229 *,struct A68t34 *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE229,REF MODE34) VOID */
struct A68t228 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t227  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t228  A68_228 ;    /* UNION(REF MODE26,REF MODE102,MODE227)  */
struct A68t229{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t174  Parameter;
struct A68t217  Access;
struct A68t216  Continuation;
struct A68t228  Help;
struct A68t220  Command;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(REF MODE26,REF MODE26,MODE174,MODE217,MODE216,MODE228,MODE220)  */
struct A68t230{
struct A68t229 * Group;
struct A68t225  Commands;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(REF MODE229,REF MODE225)  */
struct A68t231{
struct A68t229 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t225  Locals;
struct A68t225  Globals;
struct A68t229 * Postlude;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(REF MODE229,REF MODE26,REF REF MODE26,REF MODE225,REF MODE225,REF MODE229)  */
struct A68t233{
struct A68t231 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_46)
struct A68t102  Input_lines;
struct A68t233 * Caller;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(REF MODE231,INT,REF MODE102,REF MODE233)  */
struct A68t234 ;

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t234 *,struct A68t229 *,struct A68t177 ,struct A68t97 ,struct A68t216 *),(struct A68t234 *,struct A68t229 *,struct A68t177 ,struct A68t97 ,struct A68t216 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE234,REF MODE229,MODE177,MODE97) MODE216 */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE102) VOID */
struct A68t237 ;

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t237 ),(struct A68t237 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE237) VOID */
struct A68t234{
struct A68t233 * Stack;
struct A68t188  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_47)
A68_BOOL  Private;
A_PAD_BOOL(PAD_48)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_49)
struct A68t235  Caller;
struct A68t236  Report_error;
struct A68t238  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(REF MODE233,REF MODE188,BOOL,BOOL,BOOL,MODE235,MODE236,MODE238,MODE97)  */
struct A68t237 { A68_INT mode; union {
struct A68t97  mode1;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t237  A68_237 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_VOID ,A68t239,(A68_BOOL ,struct A68t225 *),(A68_BOOL ,struct A68t225 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(BOOL) MODE225 */

A_PROCEDURE(A68_BOOL ,A68t240,(struct A68t216 ,struct A68t216 ),(struct A68t216 ,struct A68t216 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE216,MODE216) BOOL */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t225 ,struct A68t225 ,struct A68t225 *),(struct A68t225 ,struct A68t225 ,struct A68t225 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE225,MODE225) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t225 ,struct A68t232 ,struct A68t225 *),(struct A68t225 ,struct A68t232 ,struct A68t225 *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE225,MODE232) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t225 *,struct A68t225 ,struct A68t225 *),(struct A68t225 *,struct A68t225 ,struct A68t225 *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF REF MODE225,MODE225) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t225 *,struct A68t232 ,struct A68t225 *),(struct A68t225 *,struct A68t232 ,struct A68t225 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF REF MODE225,MODE232) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t225 ,struct A68t225 *),(struct A68t225 ,struct A68t225 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE225) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t232 ,struct A68t225 *),(struct A68t232 ,struct A68t225 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE232) REF MODE225 */

A_PROCEDURE(struct A68t230 *,A68t247,(A68_VC ,A68_VC ,struct A68t217 ,struct A68t225 ),(A68_VC ,A68_VC ,struct A68t217 ,struct A68t225 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE26,MODE26,MODE217,MODE225) REF MODE230 */

A_PROCEDURE(struct A68t231 *,A68t248,(struct A68t229 *,A68_VC ,A68_VC *,struct A68t225 ,struct A68t225 ,struct A68t220 ),(struct A68t229 *,A68_VC ,A68_VC *,struct A68t225 ,struct A68t225 ,struct A68t220 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE229,MODE26,REF REF MODE26,REF MODE225,REF MODE225,MODE220) REF MODE231 */
A_ISTRUCT(A68_CHAR ,8,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_BOOL ,A68t250,(struct A68t234 *,struct A68t229 *),(struct A68t234 *,struct A68t229 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE234,REF MODE229) BOOL */

A_PROCEDURE(A68_BOOL ,A68t251,(struct A68t229 *),(struct A68t229 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE229) BOOL */

A_PROCEDURE(A68_BOOL ,A68t252,(struct A68t234 *,A68_BOOL ,A68_VC ,struct A68t229 *),(struct A68t234 *,A68_BOOL ,A68_VC ,struct A68t229 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE234,BOOL,MODE26,REF MODE229) BOOL */

A_PROCEDURE(A68_BOOL ,A68t253,(struct A68t234 *,A68_BOOL ,A68_VC ,A68_VC *,struct A68t229 *),(struct A68t234 *,A68_BOOL ,A68_VC ,A68_VC *,struct A68t229 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE234,BOOL,REF MODE26,REF REF MODE26,REF MODE229) BOOL */

A_PROCEDURE(A68_BOOL ,A68t254,(struct A68t234 *,A68_BOOL ,A68_VC ,A68_VC *,struct A68t230 *),(struct A68t234 *,A68_BOOL ,A68_VC ,A68_VC *,struct A68t230 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE234,BOOL,REF MODE26,REF REF MODE26,REF MODE230) BOOL */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t229 *,A68_BOOL ,A68_VC *),(struct A68t229 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE229,BOOL) REF MODE26 */
A_ISTRUCT(A68_CHAR ,3,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,2,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_VC ,5,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 5 MODE26 */

A_PROCEDURE(struct A68t229 *,A68t261,(struct A68t229 *,struct A68t229 *),(struct A68t229 *,struct A68t229 *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(REF MODE229,REF MODE229) REF MODE229 */
A_ISTRUCT(A68_VC ,2,A68t262);
typedef struct A68t262  A68_262 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t234 *,struct A68t34 *,struct A68t229 *,struct A68t225 ,A68_BOOL ),(struct A68t234 *,struct A68t34 *,struct A68t229 *,struct A68t225 ,A68_BOOL ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(REF MODE234,REF MODE34,REF MODE229,REF MODE225,BOOL) VOID */
A_ISTRUCT(struct A68t52 ,3,A68t264);
typedef struct A68t264  A68_264 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t234 *,struct A68t34 *,struct A68t229 *,A68_BOOL ),(struct A68t234 *,struct A68t34 *,struct A68t229 *,A68_BOOL ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE234,REF MODE34,REF MODE229,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,18,A68t266);
typedef struct A68t266  A68_266 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(A68_BOOL ,A68t267,(struct A68t234 *,struct A68t34 *,A68_VC ,struct A68t229 *,struct A68t225 ,A68_BOOL ,A68_BOOL ,struct A68t265 ),(struct A68t234 *,struct A68t34 *,A68_VC ,struct A68t229 *,struct A68t225 ,A68_BOOL ,A68_BOOL ,struct A68t265 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE234,REF MODE34,REF MODE26,REF MODE229,REF MODE225,BOOL,BOOL,MODE265) BOOL */

A_PROCEDURE(struct A68t229 *,A68t268,(struct A68t229 *),(struct A68t229 *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE229) REF MODE229 */
A_ISTRUCT(A68_CHAR ,40,A68t269);
typedef struct A68t269  A68_269 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,5,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t272);
typedef struct A68t272  A68_272 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 6 MODE52 */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t234 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t234 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(REF MODE234,REF MODE34,REF MODE26,BOOL,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,26,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(A68_VOID ,A68t278,(struct A68t234 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t234 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(REF MODE234,REF MODE34,BOOL,BOOL,MODE97) VOID */
struct A68t279{
struct A68t229 * S;
struct A68t279 * Next;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(REF MODE229,REF MODE279)  */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t229 *,struct A68t229 *,A68_VC ,A68_BOOL ),(struct A68t229 *,struct A68t229 *,A68_VC ,A68_BOOL ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(REF MODE229,REF MODE229,REF MODE26,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t283,(A68_INT ,struct A68t231 *,struct A68t229 *),(A68_INT ,struct A68t231 *,struct A68t229 *,void *));
typedef struct A68t283  A68_283 ;    /* PROC(INT,REF MODE231,REF MODE229) VOID */

A_PROCEDURE(A68_VOID ,A68t284,(A68_INT ,struct A68t229 *,struct A68t225 ),(A68_INT ,struct A68t229 *,struct A68t225 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(INT,REF MODE229,REF MODE225) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 17 CHAR */

A_PROCEDURE(A68_VOID ,A68t286,(struct A68t182 ),(struct A68t182 ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(MODE182) VOID */
A_ISTRUCT(A68_CHAR ,14,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(struct A68t234 *,A68t288,(struct A68t236 ,struct A68t238 ,struct A68t97 ,struct A68t235 ,struct A68t183 *,struct A68t231 *,struct A68t177 ),(struct A68t236 ,struct A68t238 ,struct A68t97 ,struct A68t235 ,struct A68t183 *,struct A68t231 *,struct A68t177 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE236,MODE238,MODE97,MODE235,REF MODE183,REF MODE231,MODE177) REF MODE234 */
struct A68t289{
struct A68t225 * Vec;
struct A68t289 * Rest;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(REF REF MODE225,REF MODE289)  */

A_PROCEDURE(A68_BOOL ,A68t290,(struct A68t225 *),(struct A68t225 *,void *));
typedef struct A68t290  A68_290 ;    /* PROC(REF REF MODE225) BOOL */

A_PROCEDURE(A68_BOOL ,A68t291,(struct A68t232 *,struct A68t232 *),(struct A68t232 *,struct A68t232 *,void *));
typedef struct A68t291  A68_291 ;    /* PROC(REF MODE232,REF MODE232) BOOL */

A_PROCEDURE(A68_VOID ,A68t292,(struct A68t232 ,A68_VC *),(struct A68t232 ,A68_VC *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(MODE232) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t293,(struct A68t225 *),(struct A68t225 *,void *));
typedef struct A68t293  A68_293 ;    /* PROC(REF REF MODE225) VOID */

A_PROCEDURE(A68_VOID ,A68t294,(A68_BOOL ,struct A68t188 *),(A68_BOOL ,struct A68t188 *,void *));
typedef struct A68t294  A68_294 ;    /* PROC(BOOL) MODE188 */
A_ISTRUCT(A68_CHAR ,38,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t296,(A68_BOOL ,struct A68t102 *),(A68_BOOL ,struct A68t102 *,void *));
typedef struct A68t296  A68_296 ;    /* PROC(BOOL) MODE102 */

A_PROCEDURE(A68_VOID ,A68t297,(struct A68t234 *,struct A68t216 *),(struct A68t234 *,struct A68t216 *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(REF MODE234) MODE216 */

A_PROCEDURE(A68_VOID ,A68t298,(A68_VC ,struct A68t225 ,struct A68t216 *),(A68_VC ,struct A68t225 ,struct A68t216 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF MODE26,REF MODE225) MODE216 */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t216 *),(struct A68t216 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC MODE216 */
A_ISTRUCT(A68_CHAR ,22,A68t300);
typedef struct A68t300  A68_300 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_VC ,3,A68t301);
typedef struct A68t301  A68_301 ;    /* STRUCT 3 MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandreader --- */
extern A68_VOID  SUFAOSF_get_input_lines(A68_102 *);
extern A68_VOID  OVFAOSF_skip_command(void);
extern A68_VOID  TOGAOSF_read_command(struct A68t97 ,A68_VC *);
extern A68_VOID  OXFAOSF_read_parameters(struct A68t188 ,struct A68t174 ,struct A68t97 ,A68_177 *);
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
extern A68_174  LEFAOSF_noparameters;
extern A68_177  TEFAOSF_no_parameters;
extern A68_VOID  PHFAOSF_show_syntax(struct A68t174 ,struct A68t188 ,A68_VC *);
/* --- End of imports from commandsyntax --- */


/* --- Imports from basics --- */
extern A68_INT  YHHAOSF_max(A68_INT ,A68_INT );
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_113  MTBAOSF_update_access;
extern A68_113  QTBAOSF_update_truncate_access;
#define AQEAOSF_block_update_access MTBAOSF_update_access
#define BQEAOSF_block_update_truncate_access QTBAOSF_update_truncate_access
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
#include <math.h>

#define ZCFAOSF_sqrt sqrt
extern A68_34 * DREAOSF_screen;
extern A68_34 * EREAOSF_out;
extern A68_34 * FREAOSF_err;
extern A68_VOID  LAFAOSF_clear_interrupt(void);
extern A68_VOID  LBFAOSF_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_92  IUAAOSF_system;
extern A68_92  KUAAOSF_fatal;
extern A68_92  MUAAOSF_user;
extern A68_BOOL  JXAAOSF_error_msg(struct A68t106 );
extern A68_BOOL  PXAAOSF_abort_msg(struct A68t106 );
extern A68_BOOL  UXAAOSF_cli_msg(struct A68t106 );
extern A68_BOOL  ZXAAOSF_log_msg(struct A68t106 );
extern A68_BOOL  EYAAOSF_out_msg(struct A68t106 );
extern A68_BOOL  JYAAOSF_newline_msg(struct A68t106 );
extern A68_VOID  EABAOSF_translate_msg(struct A68t92 ,struct A68t46 ,A68_95 *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  CHDAOSF_nilstr;
extern A68_VC  IHDAOSF_nullstr;
extern A68_VOID  JDAAOSF_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  RODAOSF_(A68_CHAR ,A68_INT ,A68_VC *);
extern A68_VOID  FEAAOSF_intchars(A68_INT ,A68_VC *);
extern A68_INT  CIDAOSF_charnumber(struct A68t34 *);
extern A68_VOID  NRDAOSF_justify(A68_VC ,A68_INT ,A68_59 *);
extern A68_VOID  RRDAOSF_tab(A68_INT ,A68_60 *);
extern A68_VOID  BSDAOSF_after(A68_INT ,A68_62 *);
extern A68_VOID  LSDAOSF_lines(A68_INT ,A68_64 *);
extern A68_VOID  PKDAOSF_newline(struct A68t34 *);
extern A68_VOID  KTDAOSF_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  KYDAOSF_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  YCEAOSF_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JSFAOSF(void);   /* commandreader */
extern void EEFAOSF(void);   /* commandsyntax */
extern void CFHAOSF(void);   /* basics */
extern void IPEAOSF(void);   /* osinterface */
extern void ZRAAOSF(void);   /* messageproc */
extern void QMDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_215   BZHAOSF = {"$Id: command.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,CZHAOSF,BZHAOSF,57)
A68_225  KZHAOSF_nullcommands;
#define MZHAOSF_nilsimple (A68_229 *)A68_NIL
A68_217  NZHAOSF_a;
A68_217  QZHAOSF_normalaccess;
A68_217  RZHAOSF_a;
A68_217  UZHAOSF_hiddenaccess;
A68_217  VZHAOSF_a;
A68_217  YZHAOSF_secretaccess;
A68_217  ZZHAOSF_a;
A68_217  CAIAOSF_privateaccess;
A68_217  DAIAOSF_a;
A68_217  GAIAOSF_hiddenprivateaccess;
A68_217  HAIAOSF_a;
A68_217  KAIAOSF_secretprivateaccess;
A68_217  LAIAOSF_a;
A68_217  OAIAOSF_noaccess;
A68_216  PAIAOSF_c;
A68_216  SAIAOSF_continue;
A68_216  TAIAOSF_c;
A68_216  WAIAOSF_return;
A68_216  XAIAOSF_c;
A68_216  ABIAOSF_finish;
A68_216  BBIAOSF_c;
A68_216  EBIAOSF_quit;
static A68_216  FBIAOSF_c;
static A68_216  IBIAOSF_not_found;
A68_241  ZCIAOSF_add;
static A68_249   FGIAOSF = {"POSTLUDE"}; 
A_GISVEC(A68_VC ,GGIAOSF,FGIAOSF,8)
static A68_256   HJIAOSF = {"..."}; 
A_GISVEC(A68_VC ,IJIAOSF,HJIAOSF,3)
static A68_258   QJIAOSF = {" ("}; 
A_GISVEC(A68_VC ,RJIAOSF,QJIAOSF,2)
static A68_256   TJIAOSF = {"..."}; 
A_GISVEC(A68_VC ,UJIAOSF,TJIAOSF,3)
static A68_259   VJIAOSF = {""}; 
A_GISVEC(A68_VC ,WJIAOSF,VJIAOSF,0)
static A68_256   QMIAOSF = {"   "}; 
A_GISVEC(A68_VC ,RMIAOSF,QMIAOSF,3)
static A68_266   XMIAOSF = {"- has no arguments"}; 
A_GISVEC(A68_VC ,YMIAOSF,XMIAOSF,18)
static A68_269   IPIAOSF = {"The following commands are available in "}; 
A_GISVEC(A68_VC ,JPIAOSF,IPIAOSF,40)
static A68_271   XPIAOSF = {"local"}; 
A_GISVEC(A68_VC ,ZPIAOSF,XPIAOSF,5)
static A68_272   AQIAOSF = {"global"}; 
A_GISVEC(A68_VC ,BQIAOSF,AQIAOSF,6)
static A68_114   EQIAOSF = {"The "}; 
A_GISVEC(A68_VC ,FQIAOSF,EQIAOSF,4)
static A68_273   JQIAOSF = {" commands available starting \""}; 
A_GISVEC(A68_VC ,KQIAOSF,JQIAOSF,30)
static A68_272   PQIAOSF = {"\" are:"}; 
A_GISVEC(A68_VC ,QQIAOSF,PQIAOSF,6)
static A68_276   IRIAOSF = {"The commands available in "}; 
A_GISVEC(A68_VC ,JRIAOSF,IRIAOSF,26)
static A68_271   ORIAOSF = {" are:"}; 
A_GISVEC(A68_VC ,PRIAOSF,ORIAOSF,5)
static A68_266   GSIAOSF = {"\" is not known in "}; 
A_GISVEC(A68_VC ,HSIAOSF,GSIAOSF,18)
#define WSIAOSF_end (A68_279 *)A68_NIL
static A68_281   TUIAOSF = {"  PRIVATE"}; 
A_GISVEC(A68_VC ,VUIAOSF,TUIAOSF,9)
static A68_249   ZUIAOSF = {"  HIDDEN"}; 
A_GISVEC(A68_VC ,AVIAOSF,ZUIAOSF,8)
static A68_249   EVIAOSF = {"  SECRET"}; 
A_GISVEC(A68_VC ,FVIAOSF,EVIAOSF,8)
static A68_266   JVIAOSF = {"  HIDDEN + PRIVATE"}; 
A_GISVEC(A68_VC ,KVIAOSF,JVIAOSF,18)
static A68_266   OVIAOSF = {"  SECRET + PRIVATE"}; 
A_GISVEC(A68_VC ,PVIAOSF,OVIAOSF,18)
static A68_282   TVIAOSF = {"  NO access"}; 
A_GISVEC(A68_VC ,UVIAOSF,TVIAOSF,11)
static A68_259   YVIAOSF = {""}; 
A_GISVEC(A68_VC ,ZVIAOSF,YVIAOSF,0)
static A68_271   EWIAOSF = {"  ***"}; 
A_GISVEC(A68_VC ,FWIAOSF,EWIAOSF,5)
static A68_281   FXIAOSF = {"SIMPLE   "}; 
A_GISVEC(A68_VC ,GXIAOSF,FXIAOSF,9)
static A68_281   QXIAOSF = {"GROUP    "}; 
A_GISVEC(A68_VC ,RXIAOSF,QXIAOSF,9)
static A68_282   AYIAOSF = {"COMPOUND   "}; 
A_GISVEC(A68_VC ,BYIAOSF,AYIAOSF,11)
static A68_285   LYIAOSF = {"SUB-COMMANDS  in "}; 
A_GISVEC(A68_VC ,MYIAOSF,LYIAOSF,17)
static A68_256   JZIAOSF = {"   "}; 
A_GISVEC(A68_VC ,KZIAOSF,JZIAOSF,3)
static A68_271   VZIAOSF = {" ::= "}; 
A_GISVEC(A68_VC ,WZIAOSF,VZIAOSF,5)
static A68_266   PAJAOSF = {"Readers avaliable:"}; 
A_GISVEC(A68_VC ,QAJAOSF,PAJAOSF,18)
static A68_287   IBJAOSF = {"\" is not known"}; 
A_GISVEC(A68_VC ,JBJAOSF,IBJAOSF,14)
static A68_295   DEJAOSF = {"initialise_commands:  duplicate reader"}; 
A_GISVEC(A68_VC ,EEJAOSF,DEJAOSF,38)
static A68_300   PIJAOSF = {"Command not recognised"}; 
A_GISVEC(A68_VC ,QIJAOSF,PIJAOSF,22)
static A68_271   JJJAOSF = {" ? - "}; 
A_GISVEC(A68_VC ,KJJAOSF,JJJAOSF,5)
typedef struct   /* env of non-global proc */
{
A68_INT  QBIAOSF_l;
A_PAD_INT(PAD_50)
A68_225  B;
} UBIAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_225  Commands;
} XDIAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HEIAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Str;
} TEIAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_229 * Root;
} ZOIAOSF_full;
typedef struct   /* env of non-global proc */
{
A68_279 ** XSIAOSF_list;
} BTIAOSF_alreadyencountered;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_251  ZSIAOSF_alreadyencountered;
A68_BOOL  Low;
A_PAD_BOOL(PAD_51)
A68_34 * Channel;
A68_BOOL  High;
A_PAD_BOOL(PAD_52)
A68_234 * Env;
} KUIAOSF_basichelp;
typedef struct   /* env of non-global proc */
{
A68_280  IUIAOSF_basichelp;
A68_BOOL  High;
A_PAD_BOOL(PAD_54)
A68_234 * Env;
A68_34 * Channel;
A68_283  OWIAOSF_fullshell;
} QWIAOSF_fullshell;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_34 * Channel;
A68_234 * Env;
A68_BOOL  Give_details;
A_PAD_BOOL(PAD_55)
} EZIAOSF_show;
typedef struct   /* env of non-global proc */
{
A68_289 ** YBJAOSF_list;
} CCJAOSF_new;
typedef struct   /* env of non-global proc */
{
A68_290  ACJAOSF_new;
A68_293  BDJAOSF_sort_commands;
} DDJAOSF_sort_commands;
typedef struct   /* env of non-global proc */
{
A68_INT * ODJAOSF_n_readers;
} TDJAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} MEJAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_234 * Env;
} FFJAOSF_input_lines;
typedef struct   /* env of non-global proc */
{
A68_234 * Env;
A68_97 * BFJAOSF_msg;
A68_298  FGJAOSF_obey;
A68_202  DFJAOSF_input_lines;
} HGJAOSF_obey;
typedef struct   /* env of non-global proc */
{
A68_234 * Env;
A68_97 * BFJAOSF_msg;
A68_298  FGJAOSF_obey;
} OHJAOSF_shell;
typedef struct   /* env of non-global proc */
{
A68_202  DFJAOSF_input_lines;
A68_234 * Env;
A68_jmp_buf  ZEJAOSF_restart;
A_PAD_jmp_buf(PAD_56)
} ZIJAOSF_anonymous;
typedef struct   /* env of non-global proc */
{
A68_280  IUIAOSF_basichelp;
A68_BOOL  High;
A_PAD_BOOL(PAD_53)
A68_234 * Env;
A68_34 * Channel;
A68_284  VWIAOSF_subfullhelp;
A68_283  OWIAOSF_fullshell;
} XWIAOSF_subfullhelp;
typedef struct   /* env of non-global proc */
{
int dummy;
} MFJAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} XFJAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} FHJAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_234 * Env;
A68_97 * BFJAOSF_msg;
} SHJAOSF_return_to_caller;
typedef struct   /* env of non-global proc */
{
int dummy;
} DIJAOSF_generator;

A68_VOID  FZHAOSF_nullcommand(A68_177  Param, A68_97  Msg);

A_STATIC A68_VOID  HZHAOSF_generator(A68_BOOL  GZHAOSF_anonymous, A68_225  *ReturnedValue);

A68_BOOL  LBIAOSF_(A68_216  A, A68_216  B);

A_STATIC A68_VOID  PBIAOSF_add(A68_225  A, A68_225  B, A68_225  *ReturnedValue);

A_STATIC A68_VOID  TBIAOSF_generator(A68_BOOL  RBIAOSF_anonymous, A68_225  *ReturnedValue, void *NonLocals);

A68_VOID  DDIAOSF_add(A68_225  A, A68_232  B, A68_225  *ReturnedValue);

A68_VOID  JDIAOSF_addab(A68_225 * A, A68_225  B, A68_225  *ReturnedValue);

A68_VOID  ODIAOSF_addab(A68_225 * A, A68_232  B, A68_225  *ReturnedValue);

A68_VOID  TDIAOSF_makecommands(A68_225  Commands, A68_225  *ReturnedValue);

A_STATIC A68_VOID  WDIAOSF_generator(A68_BOOL  UDIAOSF_anonymous, A68_225  *ReturnedValue, void *NonLocals);

A68_VOID  DEIAOSF_makecommands(A68_232  Command, A68_225  *ReturnedValue);

A_STATIC A68_VOID  GEIAOSF_generator(A68_BOOL  EEIAOSF_anonymous, A68_225  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PEIAOSF_lc(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SEIAOSF_generator(A68_BOOL  QEIAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_230 * GFIAOSF_make_group(A68_VC  Name, A68_VC  Abreviation, A68_217  Access, A68_225  Locals);

A68_231 * ZFIAOSF_make_compound(A68_229 * Prelude, A68_VC  Context_name, A68_VC * Prompt, A68_225  Locals, A68_225  Globals, A68_220  Postlude);

A_STATIC A68_BOOL  OGIAOSF_canaccess(A68_234 * Env, A68_229 * Command);

A_STATIC A68_BOOL  UGIAOSF_canhelp(A68_234 * Env, A68_229 * Command);

A_STATIC A68_BOOL  AHIAOSF_cansee(A68_234 * Env, A68_229 * Command);

A_STATIC A68_BOOL  FHIAOSF_hasabreviation(A68_229 * Command);

A_STATIC A68_BOOL  NHIAOSF_checkname(A68_234 * Env, A68_BOOL  Help, A68_VC  Test, A68_229 * Command);

A_STATIC A68_BOOL  ZHIAOSF_checkstartswith(A68_234 * Env, A68_BOOL  Help, A68_VC  Test, A68_VC * Remainder, A68_229 * Command);

A_STATIC A68_BOOL  PIIAOSF_searchgroup(A68_234 * Env, A68_BOOL  Help, A68_VC  Name, A68_VC * Rem, A68_230 * Group);

A_STATIC A68_VOID  CJIAOSF_showname(A68_229 * Command, A68_BOOL  Group, A68_VC  *ReturnedValue);

A_STATIC A68_229 * DKIAOSF_groupsimple(A68_229 * Group, A68_229 * Simple);

A_STATIC A68_VOID  XKIAOSF_commandvechelp(A68_234 * Env, A68_34 * Channel, A68_229 * Root, A68_225  Commands, A68_BOOL  Two_columns);

A_STATIC A68_VOID  OMIAOSF_simplehelpbasic(A68_234 * Env, A68_34 * Channel, A68_229 * Simple, A68_BOOL  Group);

A_STATIC A68_VOID  FOIAOSF_simplehelp(A68_234 * Env, A68_34 * Channel, A68_229 * Simple, A68_BOOL  Group);

A_STATIC A68_BOOL  UOIAOSF_grouphelp(A68_234 * Env, A68_34 * Channel, A68_VC  Id, A68_229 * Root, A68_225  Commands, A68_BOOL  Compounddetails, A68_BOOL  Localsection, A68_265  Simplehelp);

A_STATIC A68_229 * YOIAOSF_full(A68_229 * S, void *NonLocals);

A68_VOID  CRIAOSF_help(A68_234 * Env, A68_34 * Channel, A68_VC  Id, A68_BOOL  Compounddetails, A68_97  Msg);

A68_VOID  USIAOSF_full_help(A68_234 * Env, A68_34 * Channel, A68_BOOL  Low, A68_BOOL  High, A68_97  Msg);

A_STATIC A68_BOOL  ATIAOSF_alreadyencountered(A68_229 * S, void *NonLocals);

A_STATIC A68_229 * KTIAOSF_full(A68_229 * R, A68_229 * S);

A_STATIC A68_VOID  JUIAOSF_basichelp(A68_229 * R, A68_229 * Simple, A68_VC  Type, A68_BOOL  G, void *NonLocals);

A_STATIC A68_VOID  PWIAOSF_fullshell(A68_INT  M, A68_231 * Compound, A68_229 * Root, void *NonLocals);

A_STATIC A68_VOID  WWIAOSF_subfullhelp(A68_INT  M, A68_229 * Root, A68_225  Commands, void *NonLocals);

A68_VOID  ZYIAOSF_syntax_help(A68_234 * Env, A68_34 * Channel, A68_VC  Description, A68_BOOL  Give_details, A68_97  Msg);

A_STATIC A68_VOID  DZIAOSF_show(A68_182  Analyser, void *NonLocals);

A68_234 * WBJAOSF_initialise_commands(A68_236  Report_error, A68_238  Set_default_msg, A68_97  Abort, A68_235  Caller, A68_183 * Readers, A68_231 * Outer_command, A68_177  Outer_parameter);

A_STATIC A68_BOOL  BCJAOSF_new(A68_225 * Vec, void *NonLocals);

A_STATIC A68_BOOL  LCJAOSF_swop(A68_232 * A, A68_232 * B);

A_STATIC A68_VOID  OCJAOSF_get_name(A68_232  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CDJAOSF_sort_commands(A68_225 * Commands, void *NonLocals);

A_STATIC A68_VOID  SDJAOSF_generator(A68_BOOL  QDJAOSF_anonymous, A68_188  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LEJAOSF_generator(A68_BOOL  JEJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A68_VOID  YEJAOSF_interpret_commands(A68_234 * Env, A68_216  *ReturnedValue);

A_STATIC A68_VOID  EFJAOSF_input_lines(A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LFJAOSF_generator(A68_BOOL  JFJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WFJAOSF_generator(A68_BOOL  UFJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GGJAOSF_obey(A68_VC  Name, A68_225  Commands, A68_216  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EHJAOSF_generator(A68_BOOL  CHJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NHJAOSF_shell(A68_216  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RHJAOSF_return_to_caller(A68_216  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CIJAOSF_generator(A68_BOOL  AIJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YIJAOSF_anonymous(A68_92  Msgno, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  CIJAOSF_generator(A68_BOOL  AIJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((DIJAOSF_generator *)NonLocals)->x)
{ 
A68_102  EIJAOSF;  /* clause result */
A68_102  FIJAOSF;  /* OPERATORS - dynamic generator */
{ 
FIJAOSF.upb = 0 ;
( AIJAOSF_anonymous? A_VLOC(A68_VC ,FIJAOSF): A_VHEAP(A68_VC ,FIJAOSF) );
EIJAOSF = FIJAOSF;
} 
*ReturnedValue = (EIJAOSF);
return;
} 
#undef NL
 /* line 650: */

A_STATIC A68_VOID  WWIAOSF_subfullhelp(A68_INT  M, A68_229 * Root, A68_225  Commands, void *NonLocals)
#define NL(x) (((XWIAOSF_subfullhelp *)NonLocals)->x)
{ 
A68_INT  YWIAOSF_i;
A68_INT  ZWIAOSF;  /* to part of loop */
A68_232  AXIAOSF;  /* united object - for case conformity */
A68_229 * BXIAOSF_s;
A68_257  CXIAOSF;  /* collateral clause result */
A68_VC  DXIAOSF;  /* avoid structure result */
A68_52  EXIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  HXIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  IXIAOSF;  /* YIELD */
A68_85  JXIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  KXIAOSF;  /* avoid structure result */
A68_230 * LXIAOSF_g;
A68_229 * MXIAOSF_s;
A68_257  NXIAOSF;  /* collateral clause result */
A68_VC  OXIAOSF;  /* avoid structure result */
A68_52  PXIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  SXIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  TXIAOSF;  /* YIELD */
A68_85  UXIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  VXIAOSF;  /* avoid structure result */
A68_231 * WXIAOSF_c;
A_PROC_ENTRY(subfullhelp);
 /* line 651: */
 /* line 652: */
ZWIAOSF = Commands.upb;
for ( YWIAOSF_i = 1;
YWIAOSF_i <= ZWIAOSF;
YWIAOSF_i += 1 )
{ 
 /* line 653: */
AXIAOSF = (*(&A_VINDEX(Commands,YWIAOSF_i))) ;
switch ( AXIAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE174,MODE217,MODE216,MODE228,MODE220)  */
BXIAOSF_s = (AXIAOSF.data.mode1);
 /* line 654: */
RODAOSF_( '-', M, &DXIAOSF );
CXIAOSF.data[0] = A_UNITE(EXIAOSF,mode7,7,DXIAOSF);
IXIAOSF = GXIAOSF ;
CXIAOSF.data[1] = A_UNITE(HXIAOSF,mode7,7,IXIAOSF);
 /* line 656: */
YCEAOSF_oneline( A_HISVEC(JXIAOSF,CXIAOSF,2,A68_52 ), &KXIAOSF );
A_CALLPROC(NL(IUIAOSF_basichelp),(Root, BXIAOSF_s, KXIAOSF, A68_FALSE),(Root, BXIAOSF_s, KXIAOSF, A68_FALSE,(NL(IUIAOSF_basichelp)).nonlocals));
break;
case 2: /* REF STRUCT(REF MODE229,REF MODE225)  */
LXIAOSF_g = (AXIAOSF.data.mode2);
 /* line 657: */
{ 
MXIAOSF_s = KTIAOSF_full(Root, (*(&(LXIAOSF_g->Group))));
 /* line 658: */
 /* line 659: */
RODAOSF_( '-', M, &OXIAOSF );
NXIAOSF.data[0] = A_UNITE(PXIAOSF,mode7,7,OXIAOSF);
TXIAOSF = RXIAOSF ;
NXIAOSF.data[1] = A_UNITE(SXIAOSF,mode7,7,TXIAOSF);
YCEAOSF_oneline( A_HISVEC(UXIAOSF,NXIAOSF,2,A68_52 ), &VXIAOSF );
A_CALLPROC(NL(IUIAOSF_basichelp),(Root, (*(&(LXIAOSF_g->Group))), VXIAOSF, A68_TRUE),(Root, (*(&(LXIAOSF_g->Group))), VXIAOSF, A68_TRUE,(NL(IUIAOSF_basichelp)).nonlocals));
 /* line 660: */
 /* line 661: */
if ( NL(High) )
{ 
 /* line 662: */
XKIAOSF_commandvechelp(NL(Env), NL(Channel), MXIAOSF_s, (*(&(LXIAOSF_g->Commands))), A68_FALSE);
} 
 /* line 663: */
 /* line 664: */
 /* line 666: */
A_CALLPROC(NL(VWIAOSF_subfullhelp),((M+2), MXIAOSF_s, (*(&(LXIAOSF_g->Commands)))),((M+2), MXIAOSF_s, (*(&(LXIAOSF_g->Commands))),(NL(VWIAOSF_subfullhelp)).nonlocals));
} 
break;
case 3: /* REF STRUCT(REF MODE229,REF MODE26,REF REF MODE26,REF MODE225,REF MODE225,REF MODE229)  */
WXIAOSF_c = (AXIAOSF.data.mode3);
 /* line 667: */
 /* line 668: */
 /* line 669: */
A_CALLPROC(NL(OWIAOSF_fullshell),((M+2), WXIAOSF_c, Root),((M+2), WXIAOSF_c, Root,(NL(OWIAOSF_fullshell)).nonlocals));
break;
default: 
A_IMP_SKIP ;
break;
} 
}
A_PROC_EXIT(subfullhelp);
return;
} 
#undef NL

A_STATIC A68_VOID  OCJAOSF_get_name(A68_232  C, A68_VC  *ReturnedValue)
{ 
A68_232  PCJAOSF;  /* united object - for case conformity */
A68_229 * QCJAOSF_s;
A68_VC  RCJAOSF;  /* clause result */
A68_230 * SCJAOSF_g;
A68_231 * TCJAOSF_c;
A_PROC_ENTRY(get_name);
 /* line 771: */
 /* line 772: */
PCJAOSF = C ;
switch ( PCJAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE174,MODE217,MODE216,MODE228,MODE220)  */
QCJAOSF_s = (PCJAOSF.data.mode1);
 /* line 773: */
RCJAOSF = (*(&(QCJAOSF_s->Name)));
break;
case 2: /* REF STRUCT(REF MODE229,REF MODE225)  */
SCJAOSF_g = (PCJAOSF.data.mode2);
 /* line 774: */
RCJAOSF = (*(&((*(&(SCJAOSF_g->Group)))->Name)));
break;
case 3: /* REF STRUCT(REF MODE229,REF MODE26,REF REF MODE26,REF MODE225,REF MODE225,REF MODE229)  */
TCJAOSF_c = (PCJAOSF.data.mode3);
 /* line 775: */
RCJAOSF = (*(&((*(&(TCJAOSF_c->Prelude)))->Name)));
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(get_name);
*ReturnedValue = (RCJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  LFJAOSF_generator(A68_BOOL  JFJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((MFJAOSF_generator *)NonLocals)->x)
{ 
A68_102  NFJAOSF;  /* clause result */
A68_102  OFJAOSF;  /* OPERATORS - dynamic generator */
{ 
OFJAOSF.upb = 1 ;
( JFJAOSF_anonymous? A_VLOC(A68_VC ,OFJAOSF): A_VHEAP(A68_VC ,OFJAOSF) );
NFJAOSF = OFJAOSF;
} 
*ReturnedValue = (NFJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  WFJAOSF_generator(A68_BOOL  UFJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((XFJAOSF_generator *)NonLocals)->x)
{ 
A68_102  YFJAOSF;  /* clause result */
A68_102  ZFJAOSF;  /* OPERATORS - dynamic generator */
{ 
ZFJAOSF.upb = 0 ;
( UFJAOSF_anonymous? A_VLOC(A68_VC ,ZFJAOSF): A_VHEAP(A68_VC ,ZFJAOSF) );
YFJAOSF = ZFJAOSF;
} 
*ReturnedValue = (YFJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  EHJAOSF_generator(A68_BOOL  CHJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((FHJAOSF_generator *)NonLocals)->x)
{ 
A68_102  GHJAOSF;  /* clause result */
A68_102  HHJAOSF;  /* OPERATORS - dynamic generator */
{ 
HHJAOSF.upb = 0 ;
( CHJAOSF_anonymous? A_VLOC(A68_VC ,HHJAOSF): A_VHEAP(A68_VC ,HHJAOSF) );
GHJAOSF = HHJAOSF;
} 
*ReturnedValue = (GHJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  RHJAOSF_return_to_caller(A68_216  *ReturnedValue, void *NonLocals)
#define NL(x) (((SHJAOSF_return_to_caller *)NonLocals)->x)
{ 
A68_229 * THJAOSF_postlude;
A68_235  UHJAOSF;  /* CALL */
A68_216  VHJAOSF;  /* avoid structure result */
A68_216  WHJAOSF;  /* clause result */
A68_233 ** XHJAOSF;  /* YIELD */
A68_235  YHJAOSF;  /* CALL */
A68_216  ZHJAOSF;  /* avoid structure result */
A68_296  BIJAOSF_generator;   /* proc value of non-global proc */
A68_102  GIJAOSF;  /* avoid structure result */
A68_102 * HIJAOSF;  /* YIELD */
A_PROC_ENTRY(return_to_caller);
{ 
THJAOSF_postlude = (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Postlude)));
 /* line 937: */
 /* line 938: */
if ( ((*(&((*(&(NL(Env)->Stack)))->Depth)))==1) )
{ 
UHJAOSF = (*(&(NL(Env)->Caller))) ;
A_CALLPROC(UHJAOSF,(NL(Env), THJAOSF_postlude, TEFAOSF_no_parameters, (*(&(NL(Env)->Abort))), &VHJAOSF),(NL(Env), THJAOSF_postlude, TEFAOSF_no_parameters, (*(&(NL(Env)->Abort))), &VHJAOSF,(UHJAOSF).nonlocals));
VHJAOSF;
 /* line 939: */
 /* line 940: */
WHJAOSF = EBIAOSF_quit;
} 
else
{ 
XHJAOSF = (&(NL(Env)->Stack)) ;
(*XHJAOSF) = (*(&((*(&(NL(Env)->Stack)))->Caller)));
 /* line 942: */
YHJAOSF = (*(&(NL(Env)->Caller))) ;
A_CALLPROC(YHJAOSF,(NL(Env), THJAOSF_postlude, TEFAOSF_no_parameters, (*NL(BFJAOSF_msg)), &ZHJAOSF),(NL(Env), THJAOSF_postlude, TEFAOSF_no_parameters, (*NL(BFJAOSF_msg)), &ZHJAOSF,(YHJAOSF).nonlocals));
ZHJAOSF;
 /* line 943: */
A_CLOSURE( BIJAOSF_generator, CIJAOSF_generator, DIJAOSF_generator );
A_CALLPROC(BIJAOSF_generator,(A68_FALSE, &GIJAOSF),(A68_FALSE, &GIJAOSF,(BIJAOSF_generator).nonlocals));
HIJAOSF = (&((*(&(NL(Env)->Stack)))->Input_lines)) ;
(*HIJAOSF) = GIJAOSF;
 /* line 944: */
 /* line 945: */
 /* line 946: */
WHJAOSF = SAIAOSF_continue;
} 
} 
A_PROC_EXIT(return_to_caller);
*ReturnedValue = (WHJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  TBIAOSF_generator(A68_BOOL  RBIAOSF_anonymous, A68_225  *ReturnedValue, void *NonLocals)
#define NL(x) (((UBIAOSF_generator *)NonLocals)->x)
{ 
A68_225  VBIAOSF;  /* clause result */
A68_225  WBIAOSF;  /* OPERATORS - dynamic generator */
{ 
WBIAOSF.upb = (NL(QBIAOSF_l)+NL(B).upb) ;
( RBIAOSF_anonymous? A_VLOC(A68_232 ,WBIAOSF): A_VHEAP(A68_232 ,WBIAOSF) );
VBIAOSF = WBIAOSF;
} 
*ReturnedValue = (VBIAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  WDIAOSF_generator(A68_BOOL  UDIAOSF_anonymous, A68_225  *ReturnedValue, void *NonLocals)
#define NL(x) (((XDIAOSF_generator *)NonLocals)->x)
{ 
A68_225  YDIAOSF;  /* clause result */
A68_225  ZDIAOSF;  /* OPERATORS - dynamic generator */
{ 
ZDIAOSF.upb = NL(Commands).upb ;
( UDIAOSF_anonymous? A_VLOC(A68_232 ,ZDIAOSF): A_VHEAP(A68_232 ,ZDIAOSF) );
YDIAOSF = ZDIAOSF;
} 
*ReturnedValue = (YDIAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  GEIAOSF_generator(A68_BOOL  EEIAOSF_anonymous, A68_225  *ReturnedValue, void *NonLocals)
#define NL(x) (((HEIAOSF_generator *)NonLocals)->x)
{ 
A68_225  IEIAOSF;  /* clause result */
A68_225  JEIAOSF;  /* OPERATORS - dynamic generator */
{ 
JEIAOSF.upb = 1 ;
( EEIAOSF_anonymous? A_VLOC(A68_232 ,JEIAOSF): A_VHEAP(A68_232 ,JEIAOSF) );
IEIAOSF = JEIAOSF;
} 
*ReturnedValue = (IEIAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  SEIAOSF_generator(A68_BOOL  QEIAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TEIAOSF_generator *)NonLocals)->x)
{ 
A68_VC  UEIAOSF;  /* clause result */
A68_VC  VEIAOSF;  /* OPERATORS - dynamic generator */
{ 
VEIAOSF.upb = NL(Str).upb ;
( QEIAOSF_anonymous? A_VLOC(A68_CHAR ,VEIAOSF): A_VHEAP(A68_CHAR ,VEIAOSF) );
UEIAOSF = VEIAOSF;
} 
*ReturnedValue = (UEIAOSF);
return;
} 
#undef NL

A_STATIC A68_229 * YOIAOSF_full(A68_229 * S, void *NonLocals)
#define NL(x) (((ZOIAOSF_full *)NonLocals)->x)
{ 
A68_229 * APIAOSF;  /* clause result */
A_PROC_ENTRY(full);
 /* line 501: */
if ( (NL(Root)==MZHAOSF_nilsimple) )
{ 
APIAOSF = S;
} 
else
{ 
APIAOSF = DKIAOSF_groupsimple(NL(Root), S);
} 
A_PROC_EXIT(full);
return( APIAOSF );
} 
#undef NL

A_STATIC A68_BOOL  ATIAOSF_alreadyencountered(A68_229 * S, void *NonLocals)
#define NL(x) (((BTIAOSF_alreadyencountered *)NonLocals)->x)
{ 
A68_BOOL  CTIAOSF_found;
A68_279 * DTIAOSF_ptr;
A68_BOOL  ETIAOSF;  /* optbool result */
A68_279  FTIAOSF;  /* collateral clause result */
A68_279 * GTIAOSF;  /* YIELD */
A68_BOOL  HTIAOSF;  /* clause result */
A_PROC_ENTRY(alreadyencountered);
 /* line 592: */
 /* line 593: */
{ 
CTIAOSF_found = A68_FALSE;
 /* line 594: */
DTIAOSF_ptr = (*NL(XSIAOSF_list));
 /* line 595: */
for ( ;; )
{ 
ETIAOSF = !CTIAOSF_found;
if ( ETIAOSF )
{ /* line 596: */
ETIAOSF = (DTIAOSF_ptr!=WSIAOSF_end);
}
if ( !(ETIAOSF) ) break;
CTIAOSF_found = ((&((*(&(DTIAOSF_ptr->S)))->Command))==(&(S->Command)));
 /* line 597: */
 /* line 598: */
DTIAOSF_ptr = (*(&(DTIAOSF_ptr->Next)));
}
 /* line 599: */
if ( !CTIAOSF_found )
{ 
FTIAOSF.S = S;
FTIAOSF.Next = (*NL(XSIAOSF_list));
GTIAOSF = A_HEAP(A68_279 ) ;
(*GTIAOSF) = FTIAOSF ;
(*NL(XSIAOSF_list)) = GTIAOSF;
} 
 /* line 600: */
 /* line 601: */
HTIAOSF = CTIAOSF_found;
} 
A_PROC_EXIT(alreadyencountered);
return( HTIAOSF );
} 
#undef NL

A_STATIC A68_229 * KTIAOSF_full(A68_229 * R, A68_229 * S)
{ 
A68_229 * LTIAOSF;  /* clause result */
A68_229 * MTIAOSF_c;
A68_257  NTIAOSF;  /* collateral clause result */
A68_52  OTIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  PTIAOSF;  /* YIELD */
A68_52  QTIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RTIAOSF;  /* YIELD */
A68_85  STIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  TTIAOSF;  /* avoid structure result */
A68_VC * UTIAOSF;  /* YIELD */
A68_BOOL  VTIAOSF;  /* optbool result */
A68_257  WTIAOSF;  /* collateral clause result */
A68_52  XTIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  YTIAOSF;  /* YIELD */
A68_52  ZTIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  AUIAOSF;  /* YIELD */
A68_85  BUIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CUIAOSF;  /* avoid structure result */
A68_VC * DUIAOSF;  /* YIELD */
A_PROC_ENTRY(full);
 /* line 605: */
 /* line 606: */
 /* line 607: */
if ( (R==MZHAOSF_nilsimple) )
{ 
LTIAOSF = S;
} 
else
{ 
MTIAOSF_c = (A_HEAP(A68_229 ));
(*MTIAOSF_c) = (*S);
 /* line 608: */
PTIAOSF = (*(&(R->Name))) ;
NTIAOSF.data[0] = A_UNITE(OTIAOSF,mode7,7,PTIAOSF);
RTIAOSF = (*(&(S->Name))) ;
NTIAOSF.data[1] = A_UNITE(QTIAOSF,mode7,7,RTIAOSF);
YCEAOSF_oneline( A_HISVEC(STIAOSF,NTIAOSF,2,A68_52 ), &TTIAOSF );
UTIAOSF = (&(MTIAOSF_c->Name)) ;
(*UTIAOSF) = TTIAOSF;
 /* line 609: */
VTIAOSF = FHIAOSF_hasabreviation(R);
if ( VTIAOSF )
{ /* line 610: */
VTIAOSF = FHIAOSF_hasabreviation(S);
}
if ( VTIAOSF )
{ 
 /* line 611: */
YTIAOSF = (*(&(R->Abreviation))) ;
WTIAOSF.data[0] = A_UNITE(XTIAOSF,mode7,7,YTIAOSF);
AUIAOSF = (*(&(S->Abreviation))) ;
WTIAOSF.data[1] = A_UNITE(ZTIAOSF,mode7,7,AUIAOSF);
 /* line 612: */
YCEAOSF_oneline( A_HISVEC(BUIAOSF,WTIAOSF,2,A68_52 ), &CUIAOSF );
DUIAOSF = (&(MTIAOSF_c->Abreviation)) ;
(*DUIAOSF) = CUIAOSF;
} 
 /* line 613: */
 /* line 614: */
LTIAOSF = MTIAOSF_c;
} 
A_PROC_EXIT(full);
return( LTIAOSF );
} 
#undef NL

A_STATIC A68_VOID  JUIAOSF_basichelp(A68_229 * R, A68_229 * Simple, A68_VC  Type, A68_BOOL  G, void *NonLocals)
#define NL(x) (((KUIAOSF_basichelp *)NonLocals)->x)
{ 
A68_229 * LUIAOSF_s;
A68_BOOL  MUIAOSF_found;
A68_BOOL  NUIAOSF;  /* optbool result */
A68_257  OUIAOSF;  /* collateral clause result */
A68_52  PUIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QUIAOSF;  /* avoid structure result */
A68_52  RUIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  SUIAOSF;  /* OPERATORS - istruct -> vector */
A68_85  UUIAOSF;  /* clause result */
A68_52  WUIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XUIAOSF;  /* YIELD */
A68_85  YUIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  BVIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  CVIAOSF;  /* YIELD */
A68_85  DVIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  GVIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HVIAOSF;  /* YIELD */
A68_85  IVIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  LVIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MVIAOSF;  /* YIELD */
A68_85  NVIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  QVIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RVIAOSF;  /* YIELD */
A68_85  SVIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  VVIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  WVIAOSF;  /* YIELD */
A68_85  XVIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  AWIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BWIAOSF;  /* YIELD */
A68_85  CWIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_257  DWIAOSF;  /* collateral clause result */
A68_52  GWIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HWIAOSF;  /* YIELD */
A68_52  IWIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  JWIAOSF;  /* procedure value */
A68_85  KWIAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(basichelp);
 /* line 618: */
 /* line 619: */
{ 
LBFAOSF_flt_if_interrupted(NL(Msg));
 /* line 620: */
LUIAOSF_s = KTIAOSF_full(R, Simple);
 /* line 621: */
MUIAOSF_found = A_CALLPROC(NL(ZSIAOSF_alreadyencountered),(Simple),(Simple,(NL(ZSIAOSF_alreadyencountered)).nonlocals));
 /* line 622: */
 /* line 623: */
NUIAOSF = !MUIAOSF_found;
if ( ! NUIAOSF )
{NUIAOSF = !NL(Low);
}
if ( NUIAOSF )
{ 
OUIAOSF.data[0] = A_UNITE(PUIAOSF,mode7,7,Type);
CJIAOSF_showname( LUIAOSF_s, G, &QUIAOSF );
OUIAOSF.data[1] = A_UNITE(RUIAOSF,mode7,7,QUIAOSF);
KYDAOSF_put(NL(Channel), A_HISVEC(SUIAOSF,OUIAOSF,2,A68_52 ));
 /* line 624: */
{ 
 /* line 625: */
 /* line 626: */
if ( ((*(&((&(LUIAOSF_s->Access))->A)))==CAIAOSF_privateaccess.A) )
{ 
XUIAOSF = VUIAOSF ;
UUIAOSF = A_HVEC(YUIAOSF,A_UNITE(WUIAOSF,mode7,7,XUIAOSF),A68_52 );
} 
else
{ 
 /* line 627: */
 /* line 628: */
if ( ((*(&((&(LUIAOSF_s->Access))->A)))==UZHAOSF_hiddenaccess.A) )
{ 
CVIAOSF = AVIAOSF ;
UUIAOSF = A_HVEC(DVIAOSF,A_UNITE(BVIAOSF,mode7,7,CVIAOSF),A68_52 );
} 
else
{ 
 /* line 629: */
 /* line 630: */
if ( ((*(&((&(LUIAOSF_s->Access))->A)))==YZHAOSF_secretaccess.A) )
{ 
HVIAOSF = FVIAOSF ;
UUIAOSF = A_HVEC(IVIAOSF,A_UNITE(GVIAOSF,mode7,7,HVIAOSF),A68_52 );
} 
else
{ 
 /* line 631: */
 /* line 632: */
if ( ((*(&((&(LUIAOSF_s->Access))->A)))==GAIAOSF_hiddenprivateaccess.A) )
{ 
MVIAOSF = KVIAOSF ;
UUIAOSF = A_HVEC(NVIAOSF,A_UNITE(LVIAOSF,mode7,7,MVIAOSF),A68_52 );
} 
else
{ 
 /* line 633: */
 /* line 634: */
if ( ((*(&((&(LUIAOSF_s->Access))->A)))==KAIAOSF_secretprivateaccess.A) )
{ 
RVIAOSF = PVIAOSF ;
UUIAOSF = A_HVEC(SVIAOSF,A_UNITE(QVIAOSF,mode7,7,RVIAOSF),A68_52 );
} 
else
{ 
 /* line 635: */
 /* line 636: */
if ( ((*(&((&(LUIAOSF_s->Access))->A)))==OAIAOSF_noaccess.A) )
{ 
 /* line 637: */
WVIAOSF = UVIAOSF ;
UUIAOSF = A_HVEC(XVIAOSF,A_UNITE(VVIAOSF,mode7,7,WVIAOSF),A68_52 );
} 
else
{ 
BWIAOSF = ZVIAOSF ;
UUIAOSF = A_HVEC(CWIAOSF,A_UNITE(AWIAOSF,mode7,7,BWIAOSF),A68_52 );
} 
} 
} 
} 
} 
} 
} 
KYDAOSF_put(NL(Channel), UUIAOSF);
 /* line 638: */
 /* line 639: */
if ( MUIAOSF_found )
{ 
HWIAOSF = FWIAOSF ;
DWIAOSF.data[0] = A_UNITE(GWIAOSF,mode7,7,HWIAOSF);
JWIAOSF.fn.fn_global = PKDAOSF_newline;
JWIAOSF.nonlocals = A68_NIL;
DWIAOSF.data[1] = A_UNITE(IWIAOSF,mode12,12,JWIAOSF);
 /* line 640: */
KYDAOSF_put(NL(Channel), A_HISVEC(KWIAOSF,DWIAOSF,2,A68_52 ));
} 
else
{ 
PKDAOSF_newline(NL(Channel));
 /* line 641: */
if ( NL(High) )
{ 
 /* line 642: */
 /* line 643: */
 /* line 644: */
FOIAOSF_simplehelp(NL(Env), NL(Channel), LUIAOSF_s, G);
} 
} 
} 
} 
A_PROC_EXIT(basichelp);
return;
} 
#undef NL

A_STATIC A68_VOID  PWIAOSF_fullshell(A68_INT  M, A68_231 * Compound, A68_229 * Root, void *NonLocals)
#define NL(x) (((QWIAOSF_fullshell *)NonLocals)->x)
{ 
A68_284  VWIAOSF_subfullhelp;   /* proc value of non-global proc */
A68_257  XXIAOSF;  /* collateral clause result */
A68_VC  YXIAOSF;  /* avoid structure result */
A68_52  ZXIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  CYIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  DYIAOSF;  /* YIELD */
A68_85  EYIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  FYIAOSF;  /* avoid structure result */
A68_277  GYIAOSF;  /* collateral clause result */
A68_52  HYIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  IYIAOSF;  /* procedure value */
A68_VC  JYIAOSF;  /* avoid structure result */
A68_52  KYIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  NYIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  OYIAOSF;  /* YIELD */
A68_52  PYIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QYIAOSF;  /* YIELD */
A68_64  RYIAOSF;  /* avoid structure result */
A68_52  SYIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  TYIAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(fullshell);
 /* line 647: */
 /* line 649: */
{ 
A_CLOSURE( VWIAOSF_subfullhelp, WWIAOSF_subfullhelp, XWIAOSF_subfullhelp );
(( XWIAOSF_subfullhelp * ) ( VWIAOSF_subfullhelp.nonlocals )) -> IUIAOSF_basichelp = NL(IUIAOSF_basichelp);
(( XWIAOSF_subfullhelp * ) ( VWIAOSF_subfullhelp.nonlocals )) -> High = NL(High);
(( XWIAOSF_subfullhelp * ) ( VWIAOSF_subfullhelp.nonlocals )) -> Env = NL(Env);
(( XWIAOSF_subfullhelp * ) ( VWIAOSF_subfullhelp.nonlocals )) -> Channel = NL(Channel);
(( XWIAOSF_subfullhelp * ) ( VWIAOSF_subfullhelp.nonlocals )) -> VWIAOSF_subfullhelp = VWIAOSF_subfullhelp;
(( XWIAOSF_subfullhelp * ) ( VWIAOSF_subfullhelp.nonlocals )) -> OWIAOSF_fullshell = NL(OWIAOSF_fullshell);
 /* line 671: */
 /* line 672: */
RODAOSF_( '-', M, &YXIAOSF );
XXIAOSF.data[0] = A_UNITE(ZXIAOSF,mode7,7,YXIAOSF);
DYIAOSF = BYIAOSF ;
XXIAOSF.data[1] = A_UNITE(CYIAOSF,mode7,7,DYIAOSF);
YCEAOSF_oneline( A_HISVEC(EYIAOSF,XXIAOSF,2,A68_52 ), &FYIAOSF );
A_CALLPROC(NL(IUIAOSF_basichelp),(Root, (*(&(Compound->Prelude))), FYIAOSF, A68_FALSE),(Root, (*(&(Compound->Prelude))), FYIAOSF, A68_FALSE,(NL(IUIAOSF_basichelp)).nonlocals));
 /* line 673: */
 /* line 674: */
if ( NL(High) )
{ 
XKIAOSF_commandvechelp(NL(Env), NL(Channel), MZHAOSF_nilsimple, (*(&(Compound->Locals))), A68_TRUE);
 /* line 675: */
 /* line 676: */
XKIAOSF_commandvechelp(NL(Env), NL(Channel), MZHAOSF_nilsimple, (*(&(Compound->Globals))), A68_TRUE);
} 
 /* line 677: */
IYIAOSF.fn.fn_global = PKDAOSF_newline;
IYIAOSF.nonlocals = A68_NIL;
GYIAOSF.data[0] = A_UNITE(HYIAOSF,mode12,12,IYIAOSF);
RODAOSF_( '-', M, &JYIAOSF );
GYIAOSF.data[1] = A_UNITE(KYIAOSF,mode7,7,JYIAOSF);
 /* line 678: */
OYIAOSF = MYIAOSF ;
GYIAOSF.data[2] = A_UNITE(NYIAOSF,mode7,7,OYIAOSF);
QYIAOSF = (*(&(Compound->Context))) ;
GYIAOSF.data[3] = A_UNITE(PYIAOSF,mode7,7,QYIAOSF);
LSDAOSF_lines( 2, &RYIAOSF );
GYIAOSF.data[4] = A_UNITE(SYIAOSF,mode20,20,RYIAOSF);
KYDAOSF_put(NL(Channel), A_HISVEC(TYIAOSF,GYIAOSF,5,A68_52 ));
 /* line 679: */
A_CALLPROC(VWIAOSF_subfullhelp,((M+2), MZHAOSF_nilsimple, (*(&(Compound->Locals)))),((M+2), MZHAOSF_nilsimple, (*(&(Compound->Locals))),(VWIAOSF_subfullhelp).nonlocals));
 /* line 680: */
A_CALLPROC(VWIAOSF_subfullhelp,((M+2), MZHAOSF_nilsimple, (*(&(Compound->Globals)))),((M+2), MZHAOSF_nilsimple, (*(&(Compound->Globals))),(VWIAOSF_subfullhelp).nonlocals));
 /* line 681: */
 /* line 683: */
PKDAOSF_newline(NL(Channel));
} 
A_PROC_EXIT(fullshell);
return;
} 
#undef NL

A_STATIC A68_VOID  DZIAOSF_show(A68_182  Analyser, void *NonLocals)
#define NL(x) (((EZIAOSF_show *)NonLocals)->x)
{ 
A68_264  FZIAOSF;  /* collateral clause result */
A68_VC  GZIAOSF;  /* avoid structure result */
A68_59  HZIAOSF;  /* avoid structure result */
A68_52  IZIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  LZIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MZIAOSF;  /* YIELD */
A68_52  NZIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  OZIAOSF;  /* YIELD */
A68_85  PZIAOSF;  /* OPERATORS - istruct -> vector */
A68_180  QZIAOSF;  /* united object - for case conformity */
A68_174  RZIAOSF_cs;
A68_270  SZIAOSF;  /* collateral clause result */
A68_60  TZIAOSF;  /* avoid structure result */
A68_52  UZIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  XZIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  YZIAOSF;  /* YIELD */
A68_VC  ZZIAOSF;  /* avoid structure result */
A68_52  AAJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  BAJAOSF;  /* OPERATORS - mode -> union mode */
A68_56  CAJAOSF;  /* procedure value */
A68_85  DAJAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  EAJAOSF;  /* != */
A68_BOOL  FAJAOSF;  /* optbool result */
A68_264  GAJAOSF;  /* collateral clause result */
A68_52  HAJAOSF;  /* OPERATORS - mode -> union mode */
A68_56  IAJAOSF;  /* procedure value */
A68_52  JAJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KAJAOSF;  /* YIELD */
A68_64  LAJAOSF;  /* avoid structure result */
A68_52  MAJAOSF;  /* OPERATORS - mode -> union mode */
A68_85  NAJAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(show);
 /* line 694: */
 /* line 695: */
{ 
LBFAOSF_flt_if_interrupted(NL(Msg));
 /* line 696: */
 /* line 697: */
FEAAOSF_intchars( (*Analyser.Sort), &GZIAOSF );
NRDAOSF_justify( GZIAOSF, 4, &HZIAOSF );
FZIAOSF.data[0] = A_UNITE(IZIAOSF,mode15,15,HZIAOSF);
MZIAOSF = KZIAOSF ;
FZIAOSF.data[1] = A_UNITE(LZIAOSF,mode7,7,MZIAOSF);
OZIAOSF = Analyser.Description ;
FZIAOSF.data[2] = A_UNITE(NZIAOSF,mode7,7,OZIAOSF);
KYDAOSF_put(NL(Channel), A_HISVEC(PZIAOSF,FZIAOSF,3,A68_52 ));
 /* line 698: */
 /* line 699: */
QZIAOSF = Analyser.Reader ;
switch ( QZIAOSF.mode )
{ 
case 2: /* REF INT */
case 3: /* STRUCT(BITS,REF MODE173)  */
A_UNCPY(RZIAOSF_cs,QZIAOSF);
RZIAOSF_cs.mode -= 1;
 /* line 700: */
RRDAOSF_tab( 6, &TZIAOSF );
SZIAOSF.data[0] = A_UNITE(UZIAOSF,mode16,16,TZIAOSF);
YZIAOSF = WZIAOSF ;
SZIAOSF.data[1] = A_UNITE(XZIAOSF,mode7,7,YZIAOSF);
 /* line 701: */
PHFAOSF_show_syntax( RZIAOSF_cs, (*(&(NL(Env)->Analysers))), &ZZIAOSF );
SZIAOSF.data[2] = A_UNITE(AAJAOSF,mode7,7,ZZIAOSF);
CAJAOSF.fn.fn_global = PKDAOSF_newline;
CAJAOSF.nonlocals = A68_NIL;
SZIAOSF.data[3] = A_UNITE(BAJAOSF,mode12,12,CAJAOSF);
 /* line 702: */
KYDAOSF_put(NL(Channel), A_HISVEC(DAJAOSF,SZIAOSF,4,A68_52 ));
break;
default: 
 /* line 703: */
PKDAOSF_newline(NL(Channel));
break;
} 
 /* line 704: */
 /* line 705: */
if ( NL(Give_details) )
{ 
EAJAOSF = Analyser.Help ;
FAJAOSF = ! A_VSTRUCTCOMP(EAJAOSF,CHDAOSF_nilstr);
if ( FAJAOSF )
{ /* line 706: */
FAJAOSF = (Analyser.Help.upb>0);
}
if ( FAJAOSF )
{ 
IAJAOSF.fn.fn_global = PKDAOSF_newline;
IAJAOSF.nonlocals = A68_NIL;
GAJAOSF.data[0] = A_UNITE(HAJAOSF,mode12,12,IAJAOSF);
KAJAOSF = Analyser.Help ;
GAJAOSF.data[1] = A_UNITE(JAJAOSF,mode7,7,KAJAOSF);
LSDAOSF_lines( 2, &LAJAOSF );
GAJAOSF.data[2] = A_UNITE(MAJAOSF,mode20,20,LAJAOSF);
 /* line 707: */
KYDAOSF_put(NL(Channel), A_HISVEC(NAJAOSF,GAJAOSF,3,A68_52 ));
} 
else
{ 
 /* line 708: */
 /* line 709: */
 /* line 710: */
PKDAOSF_newline(NL(Channel));
} 
} 
} 
A_PROC_EXIT(show);
return;
} 
#undef NL

A_STATIC A68_BOOL  BCJAOSF_new(A68_225 * Vec, void *NonLocals)
#define NL(x) (((CCJAOSF_new *)NonLocals)->x)
{ 
A68_BOOL  DCJAOSF_not_found;
A68_289 * ECJAOSF_ptr;
A68_BOOL  FCJAOSF;  /* optbool result */
A68_289  GCJAOSF;  /* collateral clause result */
A68_289 * HCJAOSF;  /* YIELD */
A68_BOOL  ICJAOSF;  /* clause result */
A_PROC_ENTRY(new);
 /* line 757: */
 /* line 758: */
{ 
DCJAOSF_not_found = A68_TRUE;
 /* line 759: */
ECJAOSF_ptr = (*NL(YBJAOSF_list));
 /* line 760: */
for ( ;; )
{ 
 /* line 761: */
FCJAOSF = (ECJAOSF_ptr!=(A68_289 *)A68_NIL);
if ( FCJAOSF )
{FCJAOSF = DCJAOSF_not_found;
}
if ( !(FCJAOSF) ) break;
DCJAOSF_not_found = (Vec!=(*(&(ECJAOSF_ptr->Vec))));
 /* line 762: */
 /* line 763: */
ECJAOSF_ptr = (*(&(ECJAOSF_ptr->Rest)));
}
 /* line 764: */
if ( DCJAOSF_not_found )
{ 
GCJAOSF.Vec = Vec;
GCJAOSF.Rest = (*NL(YBJAOSF_list));
HCJAOSF = A_HEAP(A68_289 ) ;
(*HCJAOSF) = GCJAOSF ;
(*NL(YBJAOSF_list)) = HCJAOSF;
} 
 /* line 765: */
 /* line 766: */
ICJAOSF = DCJAOSF_not_found;
} 
A_PROC_EXIT(new);
return( ICJAOSF );
} 
#undef NL

A_STATIC A68_BOOL  LCJAOSF_swop(A68_232 * A, A68_232 * B)
{ 
A68_VC  UCJAOSF;  /* avoid structure result */
A68_VC  VCJAOSF_name1;
A68_VC  WCJAOSF;  /* avoid structure result */
A68_VC  XCJAOSF_name2;
A68_232  YCJAOSF_c;
A68_BOOL  ZCJAOSF;  /* clause result */
A_PROC_ENTRY(swop);
 /* line 769: */
 /* line 770: */
{ 
 /* line 776: */
OCJAOSF_get_name( (*A), &UCJAOSF );
VCJAOSF_name1 = UCJAOSF;
OCJAOSF_get_name( (*B), &WCJAOSF );
XCJAOSF_name2 = WCJAOSF;
 /* line 777: */
 /* line 778: */
 /* line 779: */
if ( A_VC_LT(XCJAOSF_name2,VCJAOSF_name1) )
{ 
YCJAOSF_c = (*A);
(*A) = (*B);
(*B) = YCJAOSF_c;
 /* line 780: */
ZCJAOSF = A68_TRUE;
} 
else
{ 
 /* line 781: */
 /* line 782: */
ZCJAOSF = A68_FALSE;
} 
} 
A_PROC_EXIT(swop);
return( ZCJAOSF );
} 
#undef NL

A_STATIC A68_VOID  CDJAOSF_sort_commands(A68_225 * Commands, void *NonLocals)
#define NL(x) (((DDJAOSF_sort_commands *)NonLocals)->x)
{ 
A68_BOOL  EDJAOSF_end;
A68_INT  FDJAOSF_i;
A68_INT  GDJAOSF;  /* to part of loop */
A68_INT  HDJAOSF;  /* YIELD */
A68_BOOL  IDJAOSF;  /* clause result */
A68_INT  JDJAOSF_i;
A68_INT  KDJAOSF;  /* to part of loop */
A68_232  LDJAOSF;  /* united object - for case conformity */
A68_230 * MDJAOSF_g;
A68_231 * NDJAOSF_c;
A_PROC_ENTRY(sort_commands);
 /* line 785: */
 /* line 786: */
 /* line 787: */
if ( A_CALLPROC(NL(ACJAOSF_new),(Commands),(Commands,(NL(ACJAOSF_new)).nonlocals)) )
{ 
 /* line 788: */
for ( ;; )
{ 
 /* line 789: */
EDJAOSF_end = A68_TRUE;
 /* line 790: */
 /* line 791: */
GDJAOSF = ((*Commands).upb-1);
for ( FDJAOSF_i = 1;
FDJAOSF_i <= GDJAOSF;
FDJAOSF_i += 1 )
{ 
HDJAOSF = (FDJAOSF_i+1) ;
if ( LCJAOSF_swop((&A_VINDEX((*Commands),FDJAOSF_i)), (&A_VINDEX((*Commands),HDJAOSF))) )
{ 
EDJAOSF_end = A68_FALSE;
} 
}
 /* line 792: */
 /* line 793: */
IDJAOSF = !EDJAOSF_end;
if ( !IDJAOSF ) break;
/*SKIP*/;
}
 /* line 795: */
 /* line 796: */
KDJAOSF = (*Commands).upb;
for ( JDJAOSF_i = 1;
JDJAOSF_i <= KDJAOSF;
JDJAOSF_i += 1 )
{ 
 /* line 797: */
LDJAOSF = (*(&A_VINDEX((*Commands),JDJAOSF_i))) ;
switch ( LDJAOSF.mode )
{ 
case 2: /* REF STRUCT(REF MODE229,REF MODE225)  */
MDJAOSF_g = (LDJAOSF.data.mode2);
 /* line 798: */
A_CALLPROC(NL(BDJAOSF_sort_commands),((&(MDJAOSF_g->Commands))),((&(MDJAOSF_g->Commands)),(NL(BDJAOSF_sort_commands)).nonlocals));
break;
case 3: /* REF STRUCT(REF MODE229,REF MODE26,REF REF MODE26,REF MODE225,REF MODE225,REF MODE229)  */
NDJAOSF_c = (LDJAOSF.data.mode3);
{ 
A_CALLPROC(NL(BDJAOSF_sort_commands),((&(NDJAOSF_c->Locals))),((&(NDJAOSF_c->Locals)),(NL(BDJAOSF_sort_commands)).nonlocals));
 /* line 799: */
 /* line 800: */
 /* line 801: */
A_CALLPROC(NL(BDJAOSF_sort_commands),((&(NDJAOSF_c->Globals))),((&(NDJAOSF_c->Globals)),(NL(BDJAOSF_sort_commands)).nonlocals));
} 
break;
default: 
 /* line 802: */
/*SKIP*/;
break;
} 
}
 /* line 803: */
} 
A_PROC_EXIT(sort_commands);
return;
} 
#undef NL

A_STATIC A68_VOID  SDJAOSF_generator(A68_BOOL  QDJAOSF_anonymous, A68_188  *ReturnedValue, void *NonLocals)
#define NL(x) (((TDJAOSF_generator *)NonLocals)->x)
{ 
A68_188  UDJAOSF;  /* clause result */
A68_188  VDJAOSF;  /* OPERATORS - dynamic generator */
{ 
VDJAOSF.upb = (*NL(ODJAOSF_n_readers)) ;
( QDJAOSF_anonymous? A_VLOC(A68_182 ,VDJAOSF): A_VHEAP(A68_182 ,VDJAOSF) );
UDJAOSF = VDJAOSF;
} 
*ReturnedValue = (UDJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  LEJAOSF_generator(A68_BOOL  JEJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((MEJAOSF_generator *)NonLocals)->x)
{ 
A68_102  NEJAOSF;  /* clause result */
A68_102  OEJAOSF;  /* OPERATORS - dynamic generator */
{ 
OEJAOSF.upb = 0 ;
( JEJAOSF_anonymous? A_VLOC(A68_VC ,OEJAOSF): A_VHEAP(A68_VC ,OEJAOSF) );
NEJAOSF = OEJAOSF;
} 
*ReturnedValue = (NEJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  EFJAOSF_input_lines(A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((FFJAOSF_input_lines *)NonLocals)->x)
{ 
A68_102  GFJAOSF;  /* clause result */
A68_102  HFJAOSF;  /* avoid structure result */
A68_102  IFJAOSF_l;
A68_296  KFJAOSF_generator;   /* proc value of non-global proc */
A68_102  PFJAOSF;  /* clause result */
A68_102  QFJAOSF;  /* avoid structure result */
A68_102  RFJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_102  SFJAOSF;  /* OPERATORS - assign op */
A68_102  TFJAOSF_lines;
A68_296  VFJAOSF_generator;   /* proc value of non-global proc */
A68_102  AGJAOSF;  /* avoid structure result */
A68_102 * BGJAOSF;  /* YIELD */
A68_102  CGJAOSF;  /* clause result */
A_PROC_ENTRY(input_lines);
{ 
 /* line 870: */
 /* line 871: */
if ( ((*(&((*(&(NL(Env)->Stack)))->Input_lines))).upb==0) )
{ 
 /* line 872: */
SUFAOSF_get_input_lines(  &HFJAOSF );
GFJAOSF = HFJAOSF;
} 
else
{ 
GFJAOSF = (*(&((*(&(NL(Env)->Stack)))->Input_lines)));
} 
IFJAOSF_l = GFJAOSF;
 /* line 873: */
 /* line 874: */
if ( (IFJAOSF_l.upb<=0) )
{ 
A_CLOSURE( KFJAOSF_generator, LFJAOSF_generator, MFJAOSF_generator );
 /* line 875: */
 /* line 876: */
A_CALLPROC(KFJAOSF_generator,(A68_FALSE, &QFJAOSF),(A68_FALSE, &QFJAOSF,(KFJAOSF_generator).nonlocals));
SFJAOSF = A_HVEC(RFJAOSF,IHDAOSF_nullstr,A68_VC ) ;
A_VASSIGN2(SFJAOSF,QFJAOSF,A68_VC ) ;
PFJAOSF = QFJAOSF;
} 
else
{ 
PFJAOSF = IFJAOSF_l;
} 
TFJAOSF_lines = PFJAOSF;
 /* line 877: */
A_CLOSURE( VFJAOSF_generator, WFJAOSF_generator, XFJAOSF_generator );
A_CALLPROC(VFJAOSF_generator,(A68_FALSE, &AGJAOSF),(A68_FALSE, &AGJAOSF,(VFJAOSF_generator).nonlocals));
BGJAOSF = (&((*(&(NL(Env)->Stack)))->Input_lines)) ;
(*BGJAOSF) = AGJAOSF;
 /* line 884: */
 /* line 885: */
CGJAOSF = TFJAOSF_lines;
} 
A_PROC_EXIT(input_lines);
*ReturnedValue = (CGJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  GGJAOSF_obey(A68_VC  Name, A68_225  Commands, A68_216  *ReturnedValue, void *NonLocals)
#define NL(x) (((HGJAOSF_obey *)NonLocals)->x)
{ 
A68_216  IGJAOSF_continuation;
A68_232 * JGJAOSF_com;
A68_INT  KGJAOSF;  /* forall loop counter */
A68_232  LGJAOSF;  /* united object - for case conformity */
A68_229 * MGJAOSF_simple;
A68_177  NGJAOSF;  /* avoid structure result */
A68_177  OGJAOSF_param;
A68_235  PGJAOSF;  /* CALL */
A68_216  QGJAOSF;  /* avoid structure result */
A68_230 * RGJAOSF_group;
A68_VC  SGJAOSF_subname;
A68_216  TGJAOSF;  /* avoid structure result */
A68_231 * UGJAOSF_compound;
A68_177  VGJAOSF;  /* avoid structure result */
A68_177  WGJAOSF_param;
A68_235  XGJAOSF;  /* CALL */
A68_216  YGJAOSF;  /* avoid structure result */
A68_102  ZGJAOSF;  /* avoid structure result */
A68_102 * AHJAOSF;  /* YIELD */
A68_233  BHJAOSF;  /* collateral clause result */
A68_296  DHJAOSF_generator;   /* proc value of non-global proc */
A68_102  IHJAOSF;  /* avoid structure result */
A68_233 * JHJAOSF;  /* YIELD */
A68_233 ** KHJAOSF;  /* YIELD */
A68_216  LHJAOSF;  /* clause result */
A_PROC_ENTRY(obey);
 /* line 889: */
 /* line 890: */
{ 
IGJAOSF_continuation = IBIAOSF_not_found;
 /* line 892: */
KGJAOSF = Commands.upb -1;
JGJAOSF_com = Commands.data;
for (;KGJAOSF-- >= 0;
(JGJAOSF_com++
) )
{
 /* line 893: */
if ( !(((*(&((&IGJAOSF_continuation)->C)))==IBIAOSF_not_found.C)) ) break;
 /* line 894: */
LGJAOSF = (*JGJAOSF_com) ;
switch ( LGJAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE174,MODE217,MODE216,MODE228,MODE220)  */
MGJAOSF_simple = (LGJAOSF.data.mode1);
 /* line 895: */
 /* line 896: */
 /* line 897: */
if ( NHIAOSF_checkname(NL(Env), A68_FALSE, Name, MGJAOSF_simple) )
{ 
 /* line 898: */
OXFAOSF_read_parameters( (*(&(NL(Env)->Analysers))), (*(&(MGJAOSF_simple->Parameter))), (*NL(BFJAOSF_msg)), &NGJAOSF );
OGJAOSF_param = NGJAOSF;
 /* line 899: */
 /* line 900: */
 /* line 902: */
PGJAOSF = (*(&(NL(Env)->Caller))) ;
A_CALLPROC(PGJAOSF,(NL(Env), MGJAOSF_simple, OGJAOSF_param, (*NL(BFJAOSF_msg)), &QGJAOSF),(NL(Env), MGJAOSF_simple, OGJAOSF_param, (*NL(BFJAOSF_msg)), &QGJAOSF,(PGJAOSF).nonlocals));
IGJAOSF_continuation = QGJAOSF;
} 
break;
case 2: /* REF STRUCT(REF MODE229,REF MODE225)  */
RGJAOSF_group = (LGJAOSF.data.mode2);
 /* line 903: */
{ 
SGJAOSF_subname = IHDAOSF_nullstr;
 /* line 904: */
 /* line 905: */
if ( PIIAOSF_searchgroup(NL(Env), A68_FALSE, Name, (&SGJAOSF_subname), RGJAOSF_group) )
{ 
 /* line 906: */
 /* line 907: */
 /* line 909: */
A_CALLPROC(NL(FGJAOSF_obey),(SGJAOSF_subname, (*(&(RGJAOSF_group->Commands))), &TGJAOSF),(SGJAOSF_subname, (*(&(RGJAOSF_group->Commands))), &TGJAOSF,(NL(FGJAOSF_obey)).nonlocals));
IGJAOSF_continuation = TGJAOSF;
} 
} 
break;
case 3: /* REF STRUCT(REF MODE229,REF MODE26,REF REF MODE26,REF MODE225,REF MODE225,REF MODE229)  */
UGJAOSF_compound = (LGJAOSF.data.mode3);
 /* line 910: */
 /* line 911: */
 /* line 912: */
if ( NHIAOSF_checkname(NL(Env), A68_FALSE, Name, (*(&(UGJAOSF_compound->Prelude)))) )
{ 
 /* line 913: */
 /* line 914: */
OXFAOSF_read_parameters( (*(&(NL(Env)->Analysers))), (*(&((*(&(UGJAOSF_compound->Prelude)))->Parameter))), (*NL(BFJAOSF_msg)), &VGJAOSF );
WGJAOSF_param = VGJAOSF;
 /* line 915: */
 /* line 916: */
XGJAOSF = (*(&(NL(Env)->Caller))) ;
A_CALLPROC(XGJAOSF,(NL(Env), (*(&(UGJAOSF_compound->Prelude))), WGJAOSF_param, (*NL(BFJAOSF_msg)), &YGJAOSF),(NL(Env), (*(&(UGJAOSF_compound->Prelude))), WGJAOSF_param, (*NL(BFJAOSF_msg)), &YGJAOSF,(XGJAOSF).nonlocals));
IGJAOSF_continuation = YGJAOSF;
 /* line 917: */
 /* line 918: */
if ( ((*(&((&IGJAOSF_continuation)->C)))==SAIAOSF_continue.C) )
{ 
A_CALLPROC(NL(DFJAOSF_input_lines),( &ZGJAOSF),( &ZGJAOSF,(NL(DFJAOSF_input_lines)).nonlocals));
AHJAOSF = (&((*(&(NL(Env)->Stack)))->Input_lines)) ;
(*AHJAOSF) = ZGJAOSF;
 /* line 919: */
 /* line 920: */
 /* line 921: */
BHJAOSF.Current_context = UGJAOSF_compound;
 /* line 922: */
BHJAOSF.Depth = ((*(&((*(&(NL(Env)->Stack)))->Depth)))+1);
A_CLOSURE( DHJAOSF_generator, EHJAOSF_generator, FHJAOSF_generator );
A_CALLPROC(DHJAOSF_generator,(A68_FALSE, &IHJAOSF),(A68_FALSE, &IHJAOSF,(DHJAOSF_generator).nonlocals));
BHJAOSF.Input_lines = IHJAOSF;
 /* line 923: */
BHJAOSF.Caller = (*(&(NL(Env)->Stack)));
 /* line 924: */
 /* line 925: */
 /* line 926: */
JHJAOSF = A_HEAP(A68_233 ) ;
(*JHJAOSF) = BHJAOSF ;
KHJAOSF = (&(NL(Env)->Stack)) ;
(*KHJAOSF) = JHJAOSF;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 928: */
 /* line 929: */
LHJAOSF = IGJAOSF_continuation;
} 
A_PROC_EXIT(obey);
*ReturnedValue = (LHJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NHJAOSF_shell(A68_216  *ReturnedValue, void *NonLocals)
#define NL(x) (((OHJAOSF_shell *)NonLocals)->x)
{ 
A68_299  QHJAOSF_return_to_caller;   /* proc value of non-global proc */
A68_VC  IIJAOSF;  /* avoid structure result */
A68_VC  JIJAOSF_name;
A68_216  KIJAOSF;  /* avoid structure result */
A68_216  LIJAOSF_c1;
A68_216  MIJAOSF;  /* clause result */
A68_216  NIJAOSF;  /* avoid structure result */
A68_216  OIJAOSF_c;
A68_46  RIJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_216  SIJAOSF;  /* clause result */
A68_216  TIJAOSF;  /* avoid structure result */
A68_216  UIJAOSF;  /* avoid structure result */
A_PROC_ENTRY(shell);
{ 
 /* line 935: */
 /* line 936: */
A_CLOSURE( QHJAOSF_return_to_caller, RHJAOSF_return_to_caller, SHJAOSF_return_to_caller );
(( SHJAOSF_return_to_caller * ) ( QHJAOSF_return_to_caller.nonlocals )) -> Env = NL(Env);
(( SHJAOSF_return_to_caller * ) ( QHJAOSF_return_to_caller.nonlocals )) -> BFJAOSF_msg = NL(BFJAOSF_msg);
 /* line 948: */
TOGAOSF_read_command( (*NL(BFJAOSF_msg)), &IIJAOSF );
JIJAOSF_name = IIJAOSF;
 /* line 949: */
LAFAOSF_clear_interrupt();
 /* line 950: */
A_CALLPROC(NL(FGJAOSF_obey),(JIJAOSF_name, (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Locals))), &KIJAOSF),(JIJAOSF_name, (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Locals))), &KIJAOSF,(NL(FGJAOSF_obey)).nonlocals));
LIJAOSF_c1 = KIJAOSF;
 /* line 951: */
 /* line 952: */
if ( (LIJAOSF_c1.C==IBIAOSF_not_found.C) )
{ 
 /* line 953: */
 /* line 954: */
 /* line 955: */
A_CALLPROC(NL(FGJAOSF_obey),(JIJAOSF_name, (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Globals))), &NIJAOSF),(JIJAOSF_name, (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Globals))), &NIJAOSF,(NL(FGJAOSF_obey)).nonlocals));
MIJAOSF = NIJAOSF;
} 
else
{ 
MIJAOSF = LIJAOSF_c1;
} 
OIJAOSF_c = MIJAOSF;
 /* line 956: */
 /* line 957: */
if ( (OIJAOSF_c.C==IBIAOSF_not_found.C) )
{ 
A_CALLPROC((*NL(BFJAOSF_msg)),(MUAAOSF_user, A_HVEC(RIJAOSF,QIJAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(RIJAOSF,QIJAOSF,A68_VC ),((*NL(BFJAOSF_msg))).nonlocals));
 /* line 958: */
 /* line 959: */
SIJAOSF = SAIAOSF_continue;
} 
else
{ 
 /* line 960: */
if ( (OIJAOSF_c.C==ABIAOSF_finish.C) )
{ 
for ( ;; )
{ 
A_CALLPROC(QHJAOSF_return_to_caller,( &TIJAOSF),( &TIJAOSF,(QHJAOSF_return_to_caller).nonlocals));
if ( !((TIJAOSF.C==SAIAOSF_continue.C)) ) break;
/*SKIP*/;
}
 /* line 961: */
 /* line 962: */
SIJAOSF = ABIAOSF_finish;
} 
else
{ 
 /* line 963: */
 /* line 964: */
if ( (OIJAOSF_c.C==WAIAOSF_return.C) )
{ 
 /* line 965: */
A_CALLPROC(QHJAOSF_return_to_caller,( &UIJAOSF),( &UIJAOSF,(QHJAOSF_return_to_caller).nonlocals));
SIJAOSF = UIJAOSF;
} 
else
{ 
 /* line 966: */
SIJAOSF = OIJAOSF_c;
} 
} 
} 
} 
A_PROC_EXIT(shell);
*ReturnedValue = (SIJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  YIJAOSF_anonymous(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((ZIJAOSF_anonymous *)NonLocals)->x)
{ 
A68_95  AJJAOSF;  /* avoid structure result */
A68_95  BJJAOSF_message;
A68_106  CJJAOSF;  /* OPERATORS - mode -> union mode */
A68_BOOL  DJJAOSF;  /* optbool result */
A68_106  EJJAOSF;  /* OPERATORS - mode -> union mode */
A68_102  FJJAOSF;  /* avoid structure result */
A68_102  GJJAOSF_input;
A68_301  HJJAOSF;  /* collateral clause result */
A68_INT  IJJAOSF;  /* YIELD */
A68_INT  LJJAOSF;  /* YIELD */
A68_46  MJJAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NJJAOSF;  /* avoid structure result */
A68_VC * OJJAOSF;  /* YIELD */
A68_236  PJJAOSF;  /* CALL */
A68_238  QJJAOSF;  /* CALL */
A68_237  RJJAOSF;  /* OPERATORS - mode -> union mode */
A68_97  SJJAOSF;  /* CALL */
A68_46  TJJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_238  UJJAOSF;  /* CALL */
A68_237  VJJAOSF;  /* OPERATORS - mode -> union mode */
A68_97  WJJAOSF;  /* CALL */
A68_46  XJJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_106  YJJAOSF;  /* OPERATORS - mode -> union mode */
A68_106  ZJJAOSF;  /* OPERATORS - mode -> union mode */
A68_106  AKJAOSF;  /* OPERATORS - mode -> union mode */
A68_106  BKJAOSF;  /* OPERATORS - mode -> union mode */
A68_106  CKJAOSF;  /* OPERATORS - mode -> union mode */
A68_106  DKJAOSF;  /* OPERATORS - mode -> union mode */
 /* line 970: */
 /* line 971: */
{ 
EABAOSF_translate_msg( Msgno, Params, &AJJAOSF );
BJJAOSF_message = AJJAOSF;
 /* line 972: */
DJJAOSF = UXAAOSF_cli_msg(A_UNITE(CJJAOSF,mode1,1,Msgno));
if ( ! DJJAOSF )
{ /* line 973: */
DJJAOSF = PXAAOSF_abort_msg(A_UNITE(EJJAOSF,mode1,1,Msgno));
}
if ( DJJAOSF )
{ 
A_CALLPROC(NL(DFJAOSF_input_lines),( &FJJAOSF),( &FJJAOSF,(NL(DFJAOSF_input_lines)).nonlocals));
GJJAOSF_input = FJJAOSF;
 /* line 974: */
 /* line 975: */
IJJAOSF = GJJAOSF_input.upb ;
HJJAOSF.data[0] = (*(&A_VINDEX(GJJAOSF_input,IJJAOSF)));
HJJAOSF.data[1] = KJJAOSF;
HJJAOSF.data[2] = BJJAOSF_message.Text;
LJJAOSF = GJJAOSF_input.upb ;
JDAAOSF_concat( A_HISVEC(MJJAOSF,HJJAOSF,3,A68_VC ), &NJJAOSF );
OJJAOSF = (&A_VINDEX(GJJAOSF_input,LJJAOSF)) ;
(*OJJAOSF) = NJJAOSF;
 /* line 976: */
PJJAOSF = (*(&(NL(Env)->Report_error))) ;
A_CALLPROC(PJJAOSF,(GJJAOSF_input),(GJJAOSF_input,(PJJAOSF).nonlocals));
 /* line 977: */
OVFAOSF_skip_command();
 /* line 978: */
 /* line 979: */
if ( (BJJAOSF_message.Msgno.Class==KUAAOSF_fatal.Class) )
{ 
QJJAOSF = (*(&(NL(Env)->Set_default_msg))) ;
A_CALLPROC(QJJAOSF,(A_EMPTY(RJJAOSF,2)),(A_EMPTY(RJJAOSF,2),(QJJAOSF).nonlocals));
 /* line 984: */
 /* line 985: */
SJJAOSF = (*(&(NL(Env)->Abort))) ;
A_CALLPROC(SJJAOSF,(KUAAOSF_fatal, A_HVEC(TJJAOSF,BJJAOSF_message.Text,A68_VC )),(KUAAOSF_fatal, A_HVEC(TJJAOSF,BJJAOSF_message.Text,A68_VC ),(SJJAOSF).nonlocals));
} 
else
{ 
 /* line 986: */
if ( (BJJAOSF_message.Msgno.Class==IUAAOSF_system.Class) )
{ 
UJJAOSF = (*(&(NL(Env)->Set_default_msg))) ;
A_CALLPROC(UJJAOSF,(A_EMPTY(VJJAOSF,2)),(A_EMPTY(VJJAOSF,2),(UJJAOSF).nonlocals));
 /* line 987: */
 /* line 988: */
WJJAOSF = (*(&(NL(Env)->Abort))) ;
A_CALLPROC(WJJAOSF,(IUAAOSF_system, A_HVEC(XJJAOSF,BJJAOSF_message.Text,A68_VC )),(IUAAOSF_system, A_HVEC(XJJAOSF,BJJAOSF_message.Text,A68_VC ),(WJJAOSF).nonlocals));
} 
else
{ 
 /* line 989: */
 /* line 990: */
siglongjmp(NL(ZEJAOSF_restart).label,1);
} 
} 
} 
else
{ 
 /* line 991: */
if ( ZXAAOSF_log_msg(A_UNITE(YJJAOSF,mode2,2,BJJAOSF_message)) )
{ 
 /* line 992: */
if ( JXAAOSF_error_msg(A_UNITE(ZJJAOSF,mode2,2,BJJAOSF_message)) )
{ 
KTDAOSF_putstr(FREAOSF_err, BJJAOSF_message.Text);
 /* line 993: */
if ( JYAAOSF_newline_msg(A_UNITE(AKJAOSF,mode2,2,BJJAOSF_message)) )
{ 
 /* line 994: */
PKDAOSF_newline(FREAOSF_err);
} 
} 
else
{ 
KTDAOSF_putstr(DREAOSF_screen, BJJAOSF_message.Text);
 /* line 995: */
if ( JYAAOSF_newline_msg(A_UNITE(BKJAOSF,mode2,2,BJJAOSF_message)) )
{ 
 /* line 996: */
 /* line 997: */
PKDAOSF_newline(DREAOSF_screen);
} 
} 
} 
else
{ 
 /* line 998: */
if ( EYAAOSF_out_msg(A_UNITE(CKJAOSF,mode2,2,BJJAOSF_message)) )
{ 
KTDAOSF_putstr(EREAOSF_out, BJJAOSF_message.Text);
 /* line 999: */
if ( JYAAOSF_newline_msg(A_UNITE(DKJAOSF,mode2,2,BJJAOSF_message)) )
{ 
 /* line 1000: */
 /* line 1001: */
PKDAOSF_newline(EREAOSF_out);
} 
} 
} 
} 
} 
return;
} 
#undef NL

A68_VOID  FZHAOSF_nullcommand(A68_177  Param, A68_97  Msg)
{ 
A_PROC_ENTRY(nullcommand);
/*SKIP*/;
A_PROC_EXIT(nullcommand);
return;
} 
#undef NL

A_STATIC A68_VOID  HZHAOSF_generator(A68_BOOL  GZHAOSF_anonymous, A68_225  *ReturnedValue)
{ 
A68_225  IZHAOSF;  /* clause result */
A68_225  JZHAOSF;  /* OPERATORS - dynamic generator */
{ 
JZHAOSF.upb = 0 ;
( GZHAOSF_anonymous? A_VLOC(A68_232 ,JZHAOSF): A_VHEAP(A68_232 ,JZHAOSF) );
IZHAOSF = JZHAOSF;
} 
*ReturnedValue = (IZHAOSF);
return;
} 
#undef NL

A68_BOOL  LBIAOSF_(A68_216  A, A68_216  B)
{ 
A68_BOOL  MBIAOSF;  /* clause result */
A_PROC_ENTRY(=);
MBIAOSF = (A.C==B.C);
A_PROC_EXIT(=);
return( MBIAOSF );
} 
#undef NL

A_STATIC A68_VOID  PBIAOSF_add(A68_225  A, A68_225  B, A68_225  *ReturnedValue)
{ 
A68_INT  QBIAOSF_l;
A68_239  SBIAOSF_generator;   /* proc value of non-global proc */
A68_225  XBIAOSF;  /* avoid structure result */
A68_225  YBIAOSF_new;
A68_225  ZBIAOSF;  /* OPERATORS - trim index */
A68_225  ACIAOSF;  /* YIELD */
A68_INT  BCIAOSF_index;
A68_232  CCIAOSF_cb;
A68_232 * DCIAOSF;  /* forall control - []x */
A68_INT  ECIAOSF;  /* forall loop counter */
A68_232  FCIAOSF;  /* united object - for case conformity */
A68_230 * GCIAOSF_gb;
A68_BOOL  HCIAOSF_not_found;
A68_232 * ICIAOSF_ca;
A68_225  JCIAOSF;  /* OPERATORS - trim index */
A68_225  KCIAOSF;  /* forall yield */
A68_INT  LCIAOSF;  /* forall loop counter */
A68_232  MCIAOSF;  /* united object - for case conformity */
A68_230 * NCIAOSF_ga;
A68_BOOL  OCIAOSF;  /* optbool result */
A68_230  PCIAOSF;  /* collateral clause result */
A68_225  QCIAOSF;  /* avoid structure result */
A68_230 * RCIAOSF;  /* YIELD */
A68_232  SCIAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  TCIAOSF;  /* YIELD */
A68_232 * UCIAOSF;  /* YIELD */
A68_INT  VCIAOSF;  /* YIELD */
A68_232 * WCIAOSF;  /* YIELD */
A68_225  XCIAOSF;  /* clause result */
A68_225  YCIAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(add);
 /* line 205: */
 /* line 207: */
{ 
QBIAOSF_l = A.upb;
 /* line 208: */
A_CLOSURE( SBIAOSF_generator, TBIAOSF_generator, UBIAOSF_generator );
(( UBIAOSF_generator * ) ( SBIAOSF_generator.nonlocals )) -> QBIAOSF_l = QBIAOSF_l;
(( UBIAOSF_generator * ) ( SBIAOSF_generator.nonlocals )) -> B = B;
A_CALLPROC(SBIAOSF_generator,(A68_FALSE, &XBIAOSF),(A68_FALSE, &XBIAOSF,(SBIAOSF_generator).nonlocals));
YBIAOSF_new = XBIAOSF;
 /* line 209: */
ACIAOSF = A_VTRIM(ZBIAOSF,(YBIAOSF_new),A_VTSCRIPT(&(ZBIAOSF.upb),(YBIAOSF_new).upb,1,QBIAOSF_l)) ;
A_VASSIGN2(A,ACIAOSF,A68_232 );
 /* line 210: */
BCIAOSF_index = A.upb;
 /* line 211: */
 /* line 212: */
ECIAOSF = B.upb -1;
DCIAOSF = B.data;
for (;ECIAOSF-- >= 0;
(DCIAOSF++
) )
{
CCIAOSF_cb = *DCIAOSF;
 /* line 213: */
FCIAOSF = CCIAOSF_cb ;
switch ( FCIAOSF.mode )
{ 
case 2: /* REF STRUCT(REF MODE229,REF MODE225)  */
GCIAOSF_gb = (FCIAOSF.data.mode2);
 /* line 214: */
{ 
HCIAOSF_not_found = A68_TRUE;
 /* line 215: */
KCIAOSF = A_VTRIM(JCIAOSF,(YBIAOSF_new),A_VTSCRIPT(&(JCIAOSF.upb),(YBIAOSF_new).upb,1,QBIAOSF_l)) ;
LCIAOSF = KCIAOSF.upb -1;
ICIAOSF_ca = KCIAOSF.data;
for (;LCIAOSF-- >= 0;
(ICIAOSF_ca++
) )
{
 /* line 216: */
if ( !(HCIAOSF_not_found) ) break;
 /* line 217: */
MCIAOSF = (*ICIAOSF_ca) ;
switch ( MCIAOSF.mode )
{ 
case 2: /* REF STRUCT(REF MODE229,REF MODE225)  */
NCIAOSF_ga = (MCIAOSF.data.mode2);
 /* line 218: */
 /* line 219: */
OCIAOSF = A_VC_EQ((*(&((*(&(NCIAOSF_ga->Group)))->Name))),(*(&((*(&(GCIAOSF_gb->Group)))->Name))));
if ( OCIAOSF )
{ /* line 220: */
OCIAOSF = A_VC_EQ((*(&((*(&(NCIAOSF_ga->Group)))->Abreviation))),(*(&((*(&(GCIAOSF_gb->Group)))->Abreviation))));
}
 /* line 221: */
if ( OCIAOSF )
{ /* line 223: */
OCIAOSF = ((*(&((&((*(&(NCIAOSF_ga->Group)))->Access))->A)))==(*(&((&((*(&(GCIAOSF_gb->Group)))->Access))->A))));
}
if ( OCIAOSF )
{ 
HCIAOSF_not_found = A68_FALSE;
 /* line 224: */
 /* line 225: */
 /* line 226: */
PCIAOSF.Group = (*(&(NCIAOSF_ga->Group)));
 /* line 227: */
PBIAOSF_add( (*(&(NCIAOSF_ga->Commands))), (*(&(GCIAOSF_gb->Commands))), &QCIAOSF );
PCIAOSF.Commands = QCIAOSF;
 /* line 228: */
 /* line 229: */
RCIAOSF = A_HEAP(A68_230 ) ;
(*RCIAOSF) = PCIAOSF ;
(*ICIAOSF_ca) = A_UNITE(SCIAOSF,mode2,2,RCIAOSF);
} 
break;
default: 
 /* line 230: */
/*SKIP*/;
break;
} 
}
 /* line 231: */
if ( HCIAOSF_not_found )
{ 
 /* line 232: */
 /* line 233: */
TCIAOSF = BCIAOSF_index+=1 ;
UCIAOSF = (&A_VINDEX(YBIAOSF_new,TCIAOSF)) ;
(*UCIAOSF) = CCIAOSF_cb;
} 
} 
break;
default: 
 /* line 234: */
 /* line 235: */
VCIAOSF = BCIAOSF_index+=1 ;
WCIAOSF = (&A_VINDEX(YBIAOSF_new,VCIAOSF)) ;
(*WCIAOSF) = CCIAOSF_cb;
break;
} 
}
 /* line 236: */
 /* line 237: */
XCIAOSF = A_VTRIM(YCIAOSF,(YBIAOSF_new),A_VTSCRIPT(&(YCIAOSF.upb),(YBIAOSF_new).upb,1,BCIAOSF_index));
} 
A_PROC_EXIT(add);
*ReturnedValue = (XCIAOSF);
return;
} 
#undef NL

A68_VOID  DDIAOSF_add(A68_225  A, A68_232  B, A68_225  *ReturnedValue)
{ 
A68_225  EDIAOSF;  /* clause result */
A68_225  FDIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_225  GDIAOSF;  /* avoid structure result */
A_PROC_ENTRY(add);
PBIAOSF_add( A, A_HVEC(FDIAOSF,B,A68_232 ), &GDIAOSF );
EDIAOSF = GDIAOSF;
A_PROC_EXIT(add);
*ReturnedValue = (EDIAOSF);
return;
} 
#undef NL

A68_VOID  JDIAOSF_addab(A68_225 * A, A68_225  B, A68_225  *ReturnedValue)
{ 
A68_225  KDIAOSF;  /* clause result */
A68_225  LDIAOSF;  /* avoid structure result */
A_PROC_ENTRY(addab);
 /* line 247: */
PBIAOSF_add( (*A), B, &LDIAOSF );
KDIAOSF = (*A) = LDIAOSF;
A_PROC_EXIT(addab);
*ReturnedValue = (KDIAOSF);
return;
} 
#undef NL

A68_VOID  ODIAOSF_addab(A68_225 * A, A68_232  B, A68_225  *ReturnedValue)
{ 
A68_225  PDIAOSF;  /* clause result */
A68_225  QDIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_225  RDIAOSF;  /* avoid structure result */
A_PROC_ENTRY(addab);
PBIAOSF_add( (*A), A_HVEC(QDIAOSF,B,A68_232 ), &RDIAOSF );
PDIAOSF = (*A) = RDIAOSF;
A_PROC_EXIT(addab);
*ReturnedValue = (PDIAOSF);
return;
} 
#undef NL

A68_VOID  TDIAOSF_makecommands(A68_225  Commands, A68_225  *ReturnedValue)
{ 
A68_239  VDIAOSF_generator;   /* proc value of non-global proc */
A68_225  AEIAOSF;  /* clause result */
A68_225  BEIAOSF;  /* avoid structure result */
A_PROC_ENTRY(makecommands);
 /* line 252: */
A_CLOSURE( VDIAOSF_generator, WDIAOSF_generator, XDIAOSF_generator );
(( XDIAOSF_generator * ) ( VDIAOSF_generator.nonlocals )) -> Commands = Commands;
A_CALLPROC(VDIAOSF_generator,(A68_FALSE, &BEIAOSF),(A68_FALSE, &BEIAOSF,(VDIAOSF_generator).nonlocals));
A_VASSIGN2(Commands,BEIAOSF,A68_232 ) ;
AEIAOSF = BEIAOSF;
A_PROC_EXIT(makecommands);
*ReturnedValue = (AEIAOSF);
return;
} 
#undef NL

A68_VOID  DEIAOSF_makecommands(A68_232  Command, A68_225  *ReturnedValue)
{ 
A68_239  FEIAOSF_generator;   /* proc value of non-global proc */
A68_225  KEIAOSF;  /* clause result */
A68_225  LEIAOSF;  /* avoid structure result */
A68_225  MEIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_225  NEIAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(makecommands);
 /* line 255: */
A_CLOSURE( FEIAOSF_generator, GEIAOSF_generator, HEIAOSF_generator );
A_CALLPROC(FEIAOSF_generator,(A68_FALSE, &LEIAOSF),(A68_FALSE, &LEIAOSF,(FEIAOSF_generator).nonlocals));
NEIAOSF = A_HVEC(MEIAOSF,Command,A68_232 ) ;
A_VASSIGN2(NEIAOSF,LEIAOSF,A68_232 ) ;
KEIAOSF = LEIAOSF;
A_PROC_EXIT(makecommands);
*ReturnedValue = (KEIAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  PEIAOSF_lc(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_31  REIAOSF_generator;   /* proc value of non-global proc */
A68_VC  WEIAOSF;  /* avoid structure result */
A68_VC  XEIAOSF_ans;
A68_CHAR * YEIAOSF_s;
A68_INT  ZEIAOSF;  /* forall loop counter */
A68_BOOL  AFIAOSF;  /* optbool result */
A68_VC  BFIAOSF;  /* clause result */
A_PROC_ENTRY(lc);
 /* line 259: */
 /* line 260: */
{ 
A_CLOSURE( REIAOSF_generator, SEIAOSF_generator, TEIAOSF_generator );
(( TEIAOSF_generator * ) ( REIAOSF_generator.nonlocals )) -> Str = Str;
A_CALLPROC(REIAOSF_generator,(A68_FALSE, &WEIAOSF),(A68_FALSE, &WEIAOSF,(REIAOSF_generator).nonlocals));
XEIAOSF_ans = WEIAOSF;
A_VASSIGN2(Str,XEIAOSF_ans,A68_CHAR );
 /* line 261: */
 /* line 262: */
ZEIAOSF = XEIAOSF_ans.upb -1;
YEIAOSF_s = XEIAOSF_ans.data;
for (;ZEIAOSF-- >= 0;
(YEIAOSF_s++
) )
{
AFIAOSF = ((*YEIAOSF_s)>='A');
if ( AFIAOSF )
{AFIAOSF = ((*YEIAOSF_s)<='Z');
}
if ( AFIAOSF )
{ 
(*YEIAOSF_s) = (A68_SSBITS)((A68_INT)(unsigned char)(*YEIAOSF_s)+32);
} 
}
 /* line 263: */
 /* line 264: */
BFIAOSF = XEIAOSF_ans;
} 
A_PROC_EXIT(lc);
*ReturnedValue = (BFIAOSF);
return;
} 
#undef NL
 /* line 269: */

A68_230 * GFIAOSF_make_group(A68_VC  Name, A68_VC  Abreviation, A68_217  Access, A68_225  Locals)
{ 
A68_230  HFIAOSF;  /* collateral clause result */
A68_229  IFIAOSF;  /* collateral clause result */
A68_VC  JFIAOSF;  /* avoid structure result */
A68_VC  KFIAOSF;  /* avoid structure result */
A68_228  LFIAOSF;  /* OPERATORS - mode -> union mode */
A68_220  MFIAOSF;  /* OPERATORS - mode -> union mode */
A68_221  NFIAOSF;  /* YIELD */
A68_221  OFIAOSF;  /* procedure value */
A68_229 * PFIAOSF;  /* YIELD */
A68_225  QFIAOSF;  /* avoid structure result */
A68_230 * RFIAOSF;  /* clause result */
A68_230 * SFIAOSF;  /* YIELD */
A_PROC_ENTRY(make_group);
 /* line 270: */
ZCAAOSF_makervc( Name, &JFIAOSF );
IFIAOSF.Name = JFIAOSF;
 /* line 271: */
ZCAAOSF_makervc( Abreviation, &KFIAOSF );
IFIAOSF.Abreviation = KFIAOSF;
IFIAOSF.Parameter = LEFAOSF_noparameters;
IFIAOSF.Access = Access;
 /* line 272: */
IFIAOSF.Continuation = SAIAOSF_continue;
IFIAOSF.Help = A_UNITE(LFIAOSF,mode1,1,IHDAOSF_nullstr);
OFIAOSF.fn.fn_global = FZHAOSF_nullcommand;
OFIAOSF.nonlocals = A68_NIL;
NFIAOSF = OFIAOSF ;
IFIAOSF.Command = A_UNITE(MFIAOSF,mode2,2,NFIAOSF);
 /* line 274: */
PFIAOSF = A_HEAP(A68_229 ) ;
(*PFIAOSF) = IFIAOSF ;
HFIAOSF.Group = PFIAOSF;
TDIAOSF_makecommands( Locals, &QFIAOSF );
HFIAOSF.Commands = QFIAOSF;
SFIAOSF = A_HEAP(A68_230 ) ;
(*SFIAOSF) = HFIAOSF ;
RFIAOSF = SFIAOSF;
A_PROC_EXIT(make_group);
return( RFIAOSF );
} 
#undef NL
 /* line 279: */
 /* line 281: */

A68_231 * ZFIAOSF_make_compound(A68_229 * Prelude, A68_VC  Context_name, A68_VC * Prompt, A68_225  Locals, A68_225  Globals, A68_220  Postlude)
{ 
A68_231  AGIAOSF;  /* collateral clause result */
A68_VC  BGIAOSF;  /* avoid structure result */
A68_225  CGIAOSF;  /* avoid structure result */
A68_225  DGIAOSF;  /* avoid structure result */
A68_229  EGIAOSF;  /* collateral clause result */
A68_VC  HGIAOSF;  /* avoid structure result */
A68_228  IGIAOSF;  /* OPERATORS - mode -> union mode */
A68_229 * JGIAOSF;  /* YIELD */
A68_231 * KGIAOSF;  /* clause result */
A68_231 * LGIAOSF;  /* YIELD */
A_PROC_ENTRY(make_compound);
 /* line 282: */
AGIAOSF.Prelude = Prelude;
ZCAAOSF_makervc( Context_name, &BGIAOSF );
AGIAOSF.Context = BGIAOSF;
 /* line 283: */
AGIAOSF.Prompt = Prompt;
TDIAOSF_makecommands( Locals, &CGIAOSF );
AGIAOSF.Locals = CGIAOSF;
 /* line 284: */
TDIAOSF_makecommands( Globals, &DGIAOSF );
AGIAOSF.Globals = DGIAOSF;
ZCAAOSF_makervc( GGIAOSF, &HGIAOSF );
EGIAOSF.Name = HGIAOSF;
EGIAOSF.Abreviation = CHDAOSF_nilstr;
 /* line 285: */
EGIAOSF.Parameter = LEFAOSF_noparameters;
EGIAOSF.Access = QZHAOSF_normalaccess;
EGIAOSF.Continuation = WAIAOSF_return;
EGIAOSF.Help = A_UNITE(IGIAOSF,mode1,1,IHDAOSF_nullstr);
 /* line 286: */
EGIAOSF.Command = Postlude;
JGIAOSF = A_HEAP(A68_229 ) ;
(*JGIAOSF) = EGIAOSF ;
AGIAOSF.Postlude = JGIAOSF;
LGIAOSF = A_HEAP(A68_231 ) ;
(*LGIAOSF) = AGIAOSF ;
KGIAOSF = LGIAOSF;
A_PROC_EXIT(make_compound);
return( KGIAOSF );
} 
#undef NL

A_STATIC A68_BOOL  OGIAOSF_canaccess(A68_234 * Env, A68_229 * Command)
{ 
A68_BOOL  PGIAOSF;  /* optbool result */
A68_BOOL  QGIAOSF;  /* optbool result */
A68_BOOL  RGIAOSF;  /* clause result */
A_PROC_ENTRY(canaccess);
 /* line 292: */
 /* line 293: */
PGIAOSF = ((A68_BITS )((*(&((&(Command->Access))->A)))&0X1U)==0X1U);
if ( PGIAOSF )
{QGIAOSF = (*(&(Env->Private)));
if ( ! QGIAOSF )
{QGIAOSF = ((A68_BITS )((*(&((&(Command->Access))->A)))&0X2U)==0X2U);
}
PGIAOSF = QGIAOSF;
}
RGIAOSF = PGIAOSF;
A_PROC_EXIT(canaccess);
return( RGIAOSF );
} 
#undef NL

A_STATIC A68_BOOL  UGIAOSF_canhelp(A68_234 * Env, A68_229 * Command)
{ 
A68_BOOL  VGIAOSF;  /* optbool result */
A68_BOOL  WGIAOSF;  /* optbool result */
A68_BOOL  XGIAOSF;  /* clause result */
A_PROC_ENTRY(canhelp);
 /* line 297: */
 /* line 298: */
VGIAOSF = OGIAOSF_canaccess(Env, Command);
if ( VGIAOSF )
{WGIAOSF = (*(&(Env->Secret)));
if ( ! WGIAOSF )
{WGIAOSF = ((A68_BITS )((*(&((&(Command->Access))->A)))&0X8U)==0X8U);
}
VGIAOSF = WGIAOSF;
}
XGIAOSF = VGIAOSF;
A_PROC_EXIT(canhelp);
return( XGIAOSF );
} 
#undef NL

A_STATIC A68_BOOL  AHIAOSF_cansee(A68_234 * Env, A68_229 * Command)
{ 
A68_BOOL  BHIAOSF;  /* optbool result */
A68_BOOL  CHIAOSF;  /* optbool result */
A68_BOOL  DHIAOSF;  /* clause result */
A_PROC_ENTRY(cansee);
 /* line 302: */
 /* line 303: */
BHIAOSF = UGIAOSF_canhelp(Env, Command);
if ( BHIAOSF )
{CHIAOSF = (*(&(Env->Hidden)));
if ( ! CHIAOSF )
{CHIAOSF = ((A68_BITS )((*(&((&(Command->Access))->A)))&0X4U)==0X4U);
}
BHIAOSF = CHIAOSF;
}
DHIAOSF = BHIAOSF;
A_PROC_EXIT(cansee);
return( DHIAOSF );
} 
#undef NL

A_STATIC A68_BOOL  FHIAOSF_hasabreviation(A68_229 * Command)
{ 
A68_VC  GHIAOSF;  /* != */
A68_BOOL  HHIAOSF;  /* optbool result */
A68_BOOL  IHIAOSF;  /* clause result */
A_PROC_ENTRY(hasabreviation);
 /* line 311: */
 /* line 312: */
GHIAOSF = (*(&(Command->Abreviation))) ;
HHIAOSF = ! A_VSTRUCTCOMP(GHIAOSF,CHDAOSF_nilstr);
if ( HHIAOSF )
{HHIAOSF = ((*(&(Command->Abreviation))).upb>0);
}
IHIAOSF = HHIAOSF;
A_PROC_EXIT(hasabreviation);
return( IHIAOSF );
} 
#undef NL
 /* line 316: */

A_STATIC A68_BOOL  NHIAOSF_checkname(A68_234 * Env, A68_BOOL  Help, A68_VC  Test, A68_229 * Command)
{ 
A68_BOOL  OHIAOSF;  /* optbool result */
A68_BOOL  PHIAOSF;  /* optbool result */
A68_BOOL  QHIAOSF;  /* optbool result */
A68_VC  RHIAOSF;  /* != */
A68_BOOL  SHIAOSF;  /* optbool result */
A68_BOOL  THIAOSF;  /* clause result */
A_PROC_ENTRY(checkname);
 /* line 317: */
OHIAOSF = UGIAOSF_canhelp(Env, Command);
if ( ! OHIAOSF )
{PHIAOSF = !Help;
if ( PHIAOSF )
{PHIAOSF = OGIAOSF_canaccess(Env, Command);
}
OHIAOSF = PHIAOSF;
}
 /* line 318: */
if ( OHIAOSF )
{ /* line 319: */
QHIAOSF = A_VC_EQ(Test,(*(&(Command->Name))));
if ( ! QHIAOSF )
{ /* line 320: */
RHIAOSF = (*(&(Command->Abreviation))) ;
SHIAOSF = ! A_VSTRUCTCOMP(RHIAOSF,CHDAOSF_nilstr);
if ( SHIAOSF )
{SHIAOSF = ((*(&(Command->Abreviation))).upb>0);
}
 /* line 321: */
if ( SHIAOSF )
{ /* line 322: */
SHIAOSF = A_VC_EQ(Test,(*(&(Command->Abreviation))));
}
QHIAOSF = SHIAOSF;
}
OHIAOSF = QHIAOSF;
}
THIAOSF = OHIAOSF;
A_PROC_EXIT(checkname);
return( THIAOSF );
} 
#undef NL
 /* line 326: */

A_STATIC A68_BOOL  ZHIAOSF_checkstartswith(A68_234 * Env, A68_BOOL  Help, A68_VC  Test, A68_VC * Remainder, A68_229 * Command)
{ 
A68_BOOL  AIIAOSF;  /* optbool result */
A68_BOOL  BIIAOSF;  /* optbool result */
A68_BOOL  CIIAOSF;  /* optbool result */
A68_VC  DIIAOSF;  /* OPERATORS - trim index */
A68_VC  EIIAOSF;  /* OPERATORS - trim index */
A68_BOOL  FIIAOSF;  /* clause result */
A68_BOOL  GIIAOSF;  /* optbool result */
A68_VC  HIIAOSF;  /* OPERATORS - trim index */
A68_VC  IIIAOSF;  /* OPERATORS - trim index */
A68_BOOL  JIIAOSF;  /* clause result */
A_PROC_ENTRY(checkstartswith);
 /* line 327: */
AIIAOSF = UGIAOSF_canhelp(Env, Command);
if ( ! AIIAOSF )
{BIIAOSF = !Help;
if ( BIIAOSF )
{BIIAOSF = OGIAOSF_canaccess(Env, Command);
}
AIIAOSF = BIIAOSF;
}
 /* line 328: */
if ( AIIAOSF )
{{ 
 /* line 329: */
CIIAOSF = (Test.upb>(*(&(Command->Name))).upb);
if ( CIIAOSF )
{ /* line 330: */
CIIAOSF = A_VC_EQ(A_VTRIM(DIIAOSF,(Test),A_VTSCRIPT(&(DIIAOSF.upb),(Test).upb,1,(*(&(Command->Name))).upb)),(*(&(Command->Name))));
}
if ( CIIAOSF )
{ 
(*Remainder) = A_VTRIM(EIIAOSF,(Test),A_VTSCRIPT(&(EIIAOSF.upb),(Test).upb,((*(&(Command->Name))).upb+1),(Test).upb));
 /* line 331: */
 /* line 332: */
FIIAOSF = A68_TRUE;
} 
else
{ 
 /* line 333: */
GIIAOSF = FHIAOSF_hasabreviation(Command);
if ( GIIAOSF )
{GIIAOSF = (Test.upb>(*(&(Command->Abreviation))).upb);
}
 /* line 334: */
if ( GIIAOSF )
{ /* line 335: */
GIIAOSF = A_VC_EQ(A_VTRIM(HIIAOSF,(Test),A_VTSCRIPT(&(HIIAOSF.upb),(Test).upb,1,(*(&(Command->Abreviation))).upb)),(*(&(Command->Abreviation))));
}
if ( GIIAOSF )
{ 
(*Remainder) = A_VTRIM(IIIAOSF,(Test),A_VTSCRIPT(&(IIIAOSF.upb),(Test).upb,((*(&(Command->Abreviation))).upb+1),(Test).upb));
 /* line 336: */
 /* line 337: */
FIIAOSF = A68_TRUE;
} 
else
{ 
 /* line 338: */
 /* line 339: */
FIIAOSF = A68_FALSE;
} 
} 
} 
AIIAOSF = FIIAOSF;
}
JIIAOSF = AIIAOSF;
A_PROC_EXIT(checkstartswith);
return( JIIAOSF );
} 
#undef NL
 /* line 343: */

A_STATIC A68_BOOL  PIIAOSF_searchgroup(A68_234 * Env, A68_BOOL  Help, A68_VC  Name, A68_VC * Rem, A68_230 * Group)
{ 
A68_BOOL  QIIAOSF_found;
A68_232 * RIIAOSF_command;
A68_225  SIIAOSF;  /* forall yield */
A68_INT  TIIAOSF;  /* forall loop counter */
A68_232  UIIAOSF;  /* united object - for case conformity */
A68_229 * VIIAOSF_s;
A68_230 * WIIAOSF_g;
A68_VC  XIIAOSF_rem2;
A68_231 * YIIAOSF_c;
A68_BOOL  ZIIAOSF;  /* clause result */
A_PROC_ENTRY(searchgroup);
 /* line 351: */
 /* line 352: */
if ( ZHIAOSF_checkstartswith(Env, Help, Name, Rem, (*(&(Group->Group)))) )
{ 
QIIAOSF_found = A68_FALSE;
 /* line 353: */
SIIAOSF = (*(&(Group->Commands))) ;
TIIAOSF = SIIAOSF.upb -1;
RIIAOSF_command = SIIAOSF.data;
for (;TIIAOSF-- >= 0;
(RIIAOSF_command++
) )
{
 /* line 354: */
if ( !(!QIIAOSF_found) ) break;
 /* line 355: */
UIIAOSF = (*RIIAOSF_command) ;
switch ( UIIAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE174,MODE217,MODE216,MODE228,MODE220)  */
VIIAOSF_s = (UIIAOSF.data.mode1);
 /* line 356: */
 /* line 357: */
QIIAOSF_found = NHIAOSF_checkname(Env, Help, (*Rem), VIIAOSF_s);
break;
case 2: /* REF STRUCT(REF MODE229,REF MODE225)  */
WIIAOSF_g = (UIIAOSF.data.mode2);
 /* line 358: */
{ 
XIIAOSF_rem2 = IHDAOSF_nullstr;
 /* line 359: */
 /* line 360: */
 /* line 361: */
QIIAOSF_found = PIIAOSF_searchgroup(Env, Help, (*Rem), (&XIIAOSF_rem2), WIIAOSF_g);
} 
break;
case 3: /* REF STRUCT(REF MODE229,REF MODE26,REF REF MODE26,REF MODE225,REF MODE225,REF MODE229)  */
YIIAOSF_c = (UIIAOSF.data.mode3);
 /* line 362: */
 /* line 363: */
 /* line 364: */
QIIAOSF_found = NHIAOSF_checkname(Env, Help, (*Rem), (*(&(YIIAOSF_c->Prelude))));
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 365: */
 /* line 366: */
ZIIAOSF = QIIAOSF_found;
} 
else
{ 
 /* line 367: */
ZIIAOSF = A68_FALSE;
} 
A_PROC_EXIT(searchgroup);
return( ZIIAOSF );
} 
#undef NL

A_STATIC A68_VOID  CJIAOSF_showname(A68_229 * Command, A68_BOOL  Group, A68_VC  *ReturnedValue)
{ 
A68_VC  DJIAOSF;  /* avoid structure result */
A68_VC  EJIAOSF_name;
A68_257  FJIAOSF;  /* collateral clause result */
A68_52  GJIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  JJIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KJIAOSF;  /* YIELD */
A68_VC  LJIAOSF;  /* clause result */
A68_85  MJIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NJIAOSF;  /* avoid structure result */
A68_VC  OJIAOSF_base;
A68_260  PJIAOSF;  /* collateral clause result */
A68_VC  SJIAOSF;  /* avoid structure result */
A68_VC  XJIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YJIAOSF;  /* clause result */
A68_46  ZJIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  AKIAOSF;  /* avoid structure result */
A_PROC_ENTRY(showname);
 /* line 371: */
 /* line 372: */
{ 
PEIAOSF_lc( (*(&(Command->Name))), &DJIAOSF );
EJIAOSF_name = DJIAOSF;
 /* line 373: */
if ( Group )
{ 
FJIAOSF.data[0] = A_UNITE(GJIAOSF,mode7,7,EJIAOSF_name);
KJIAOSF = IJIAOSF ;
FJIAOSF.data[1] = A_UNITE(JJIAOSF,mode7,7,KJIAOSF);
YCEAOSF_oneline( A_HISVEC(MJIAOSF,FJIAOSF,2,A68_52 ), &NJIAOSF );
LJIAOSF = NJIAOSF;
} 
else
{ 
LJIAOSF = EJIAOSF_name;
} 
OJIAOSF_base = LJIAOSF;
 /* line 374: */
 /* line 375: */
if ( FHIAOSF_hasabreviation(Command) )
{ 
PJIAOSF.data[0] = OJIAOSF_base;
PJIAOSF.data[1] = RJIAOSF;
 /* line 376: */
PEIAOSF_lc( (*(&(Command->Abreviation))), &SJIAOSF );
PJIAOSF.data[2] = SJIAOSF;
if ( Group )
{ 
PJIAOSF.data[3] = UJIAOSF;
} 
else
{ 
PJIAOSF.data[3] = WJIAOSF;
} 
PJIAOSF.data[4] = A_HVEC(XJIAOSF,')',A68_CHAR );
 /* line 377: */
 /* line 378: */
JDAAOSF_concat( A_HISVEC(ZJIAOSF,PJIAOSF,5,A68_VC ), &AKIAOSF );
YJIAOSF = AKIAOSF;
} 
else
{ 
 /* line 379: */
YJIAOSF = OJIAOSF_base;
} 
} 
A_PROC_EXIT(showname);
*ReturnedValue = (YJIAOSF);
return;
} 
#undef NL

A_STATIC A68_229 * DKIAOSF_groupsimple(A68_229 * Group, A68_229 * Simple)
{ 
A68_229 * EKIAOSF_combined;
A68_262  FKIAOSF;  /* collateral clause result */
A68_46  GKIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  HKIAOSF;  /* avoid structure result */
A68_VC * IKIAOSF;  /* YIELD */
A68_262  JKIAOSF;  /* collateral clause result */
A68_VC  KKIAOSF;  /* clause result */
A68_46  LKIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MKIAOSF;  /* avoid structure result */
A68_262  NKIAOSF;  /* collateral clause result */
A68_46  OKIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  PKIAOSF;  /* avoid structure result */
A68_VC * QKIAOSF;  /* YIELD */
A68_229 * RKIAOSF;  /* clause result */
A_PROC_ENTRY(groupsimple);
 /* line 383: */
 /* line 384: */
{ 
EKIAOSF_combined = (A_HEAP(A68_229 ));
(*EKIAOSF_combined) = (*Simple);
 /* line 385: */
FKIAOSF.data[0] = (*(&(Group->Name)));
FKIAOSF.data[1] = (*(&(Simple->Name)));
JDAAOSF_concat( A_HISVEC(GKIAOSF,FKIAOSF,2,A68_VC ), &HKIAOSF );
IKIAOSF = (&(EKIAOSF_combined->Name)) ;
(*IKIAOSF) = HKIAOSF;
 /* line 386: */
 /* line 387: */
if ( FHIAOSF_hasabreviation(Simple) )
{ 
 /* line 388: */
 /* line 389: */
if ( FHIAOSF_hasabreviation(Group) )
{ 
JKIAOSF.data[0] = (*(&(Group->Abreviation)));
JKIAOSF.data[1] = (*(&(Simple->Abreviation)));
 /* line 390: */
JDAAOSF_concat( A_HISVEC(LKIAOSF,JKIAOSF,2,A68_VC ), &MKIAOSF );
KKIAOSF = MKIAOSF;
} 
else
{ 
NKIAOSF.data[0] = (*(&(Group->Name)));
NKIAOSF.data[1] = (*(&(Simple->Abreviation)));
 /* line 391: */
 /* line 392: */
JDAAOSF_concat( A_HISVEC(OKIAOSF,NKIAOSF,2,A68_VC ), &PKIAOSF );
KKIAOSF = PKIAOSF;
} 
QKIAOSF = (&(EKIAOSF_combined->Abreviation)) ;
(*QKIAOSF) = KKIAOSF;
} 
 /* line 393: */
 /* line 394: */
RKIAOSF = EKIAOSF_combined;
} 
A_PROC_EXIT(groupsimple);
return( RKIAOSF );
} 
#undef NL
 /* line 402: */

A_STATIC A68_VOID  XKIAOSF_commandvechelp(A68_234 * Env, A68_34 * Channel, A68_229 * Root, A68_225  Commands, A68_BOOL  Two_columns)
{ 
A68_232 * YKIAOSF_subcommand;
A68_INT  ZKIAOSF;  /* forall loop counter */
A68_BOOL  ALIAOSF_group;
A68_232  BLIAOSF;  /* united object - for case conformity */
A68_229 * CLIAOSF_s;
A68_229 * DLIAOSF;  /* clause result */
A68_230 * ELIAOSF_g;
A68_231 * FLIAOSF_c;
A68_229 * GLIAOSF_simple;
A68_229 * HLIAOSF;  /* clause result */
A68_229 * ILIAOSF_command;
A68_VC  JLIAOSF;  /* avoid structure result */
A68_VC  KLIAOSF_name;
A68_174  LLIAOSF;  /* united object - for case conformity */
A68_INT * MLIAOSF_symbol;
A68_BOOL  NLIAOSF;  /* clause result */
A68_VC  OLIAOSF;  /* clause result */
A68_264  PLIAOSF;  /* collateral clause result */
A68_52  QLIAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  RLIAOSF;  /* clause result */
A68_62  SLIAOSF;  /* avoid structure result */
A68_52  TLIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ULIAOSF;  /* avoid structure result */
A68_52  VLIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  WLIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  XLIAOSF;  /* avoid structure result */
A68_VC  YLIAOSF_description;
A68_BOOL  ZLIAOSF;  /* optbool result */
A68_257  AMIAOSF;  /* collateral clause result */
A68_60  BMIAOSF;  /* avoid structure result */
A68_52  CMIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  DMIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  EMIAOSF;  /* OPERATORS - istruct -> vector */
A68_257  FMIAOSF;  /* collateral clause result */
A68_52  GMIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  HMIAOSF;  /* procedure value */
A68_52  IMIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  JMIAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(commandvechelp);
 /* line 403: */
 /* line 404: */
{ 
 /* line 405: */
ZKIAOSF = Commands.upb -1;
YKIAOSF_subcommand = Commands.data;
for (;ZKIAOSF-- >= 0;
(YKIAOSF_subcommand++
) )
{
ALIAOSF_group = A68_FALSE;
 /* line 406: */
 /* line 407: */
BLIAOSF = (*YKIAOSF_subcommand) ;
switch ( BLIAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE174,MODE217,MODE216,MODE228,MODE220)  */
CLIAOSF_s = (BLIAOSF.data.mode1);
 /* line 408: */
DLIAOSF = CLIAOSF_s;
break;
case 2: /* REF STRUCT(REF MODE229,REF MODE225)  */
ELIAOSF_g = (BLIAOSF.data.mode2);
{ 
ALIAOSF_group = A68_TRUE;
 /* line 409: */
DLIAOSF = (*(&(ELIAOSF_g->Group)));
} 
break;
case 3: /* REF STRUCT(REF MODE229,REF MODE26,REF REF MODE26,REF MODE225,REF MODE225,REF MODE229)  */
FLIAOSF_c = (BLIAOSF.data.mode3);
 /* line 410: */
DLIAOSF = (*(&(FLIAOSF_c->Prelude)));
break;
default: 
A_IMP_SKIP ;
break;
} 
GLIAOSF_simple = DLIAOSF;
 /* line 412: */
 /* line 413: */
 /* line 414: */
if ( (Root==MZHAOSF_nilsimple) )
{ 
HLIAOSF = GLIAOSF_simple;
} 
else
{ 
 /* line 415: */
HLIAOSF = DKIAOSF_groupsimple(Root, GLIAOSF_simple);
} 
ILIAOSF_command = HLIAOSF;
 /* line 417: */
 /* line 418: */
if ( AHIAOSF_cansee(Env, ILIAOSF_command) )
{ 
CJIAOSF_showname( ILIAOSF_command, ALIAOSF_group, &JLIAOSF );
KLIAOSF_name = JLIAOSF;
 /* line 420: */
 /* line 421: */
LLIAOSF = (*(&(ILIAOSF_command->Parameter))) ;
switch ( LLIAOSF.mode )
{ 
case 1: /* REF INT */
MLIAOSF_symbol = (LLIAOSF.data.mode1);
NLIAOSF = ((*MLIAOSF_symbol)==0);
break;
default: 
 /* line 422: */
 /* line 423: */
 /* line 424: */
NLIAOSF = A68_FALSE;
break;
} 
if ( NLIAOSF )
{ 
OLIAOSF = KLIAOSF_name;
} 
else
{ 
PLIAOSF.data[0] = A_UNITE(QLIAOSF,mode7,7,KLIAOSF_name);
 /* line 425: */
if ( Two_columns )
{ 
 /* line 426: */
 /* line 427: */
if ( (KLIAOSF_name.upb>28) )
{ 
RLIAOSF = 36;
} 
else
{ 
 /* line 428: */
 /* line 429: */
if ( (KLIAOSF_name.upb>22) )
{ 
RLIAOSF = 30;
} 
else
{ 
 /* line 430: */
 /* line 431: */
if ( (KLIAOSF_name.upb>16) )
{ 
 /* line 432: */
RLIAOSF = 24;
} 
else
{ 
 /* line 433: */
 /* line 434: */
RLIAOSF = 18;
} 
} 
} 
} 
else
{ 
RLIAOSF = 40;
} 
 /* line 435: */
BSDAOSF_after( RLIAOSF, &SLIAOSF );
PLIAOSF.data[1] = A_UNITE(TLIAOSF,mode18,18,SLIAOSF);
 /* line 436: */
PHFAOSF_show_syntax( (*(&(ILIAOSF_command->Parameter))), (*(&(Env->Analysers))), &ULIAOSF );
PLIAOSF.data[2] = A_UNITE(VLIAOSF,mode7,7,ULIAOSF);
 /* line 437: */
YCEAOSF_oneline( A_HISVEC(WLIAOSF,PLIAOSF,3,A68_52 ), &XLIAOSF );
OLIAOSF = XLIAOSF;
} 
YLIAOSF_description = OLIAOSF;
 /* line 438: */
ZLIAOSF = Two_columns;
if ( ZLIAOSF )
{ZLIAOSF = (CIDAOSF_charnumber(Channel)>1);
}
 /* line 439: */
if ( ZLIAOSF )
{ZLIAOSF = (CIDAOSF_charnumber(Channel)<39);
}
if ( ZLIAOSF )
{ /* line 440: */
ZLIAOSF = (YLIAOSF_description.upb<=40);
}
if ( ZLIAOSF )
{ 
RRDAOSF_tab( 40, &BMIAOSF );
AMIAOSF.data[0] = A_UNITE(CMIAOSF,mode16,16,BMIAOSF);
AMIAOSF.data[1] = A_UNITE(DMIAOSF,mode7,7,YLIAOSF_description);
 /* line 441: */
KYDAOSF_put(Channel, A_HISVEC(EMIAOSF,AMIAOSF,2,A68_52 ));
} 
else
{ 
HMIAOSF.fn.fn_global = PKDAOSF_newline;
HMIAOSF.nonlocals = A68_NIL;
FMIAOSF.data[0] = A_UNITE(GMIAOSF,mode12,12,HMIAOSF);
FMIAOSF.data[1] = A_UNITE(IMIAOSF,mode7,7,YLIAOSF_description);
 /* line 442: */
 /* line 443: */
 /* line 444: */
KYDAOSF_put(Channel, A_HISVEC(JMIAOSF,FMIAOSF,2,A68_52 ));
} 
} 
}
 /* line 445: */
if ( (Commands.upb>0) )
{ 
 /* line 446: */
PKDAOSF_newline(Channel);
} 
} 
A_PROC_EXIT(commandvechelp);
return;
} 
#undef NL
 /* line 450: */

A_STATIC A68_VOID  OMIAOSF_simplehelpbasic(A68_234 * Env, A68_34 * Channel, A68_229 * Simple, A68_BOOL  Group)
{ 
A68_257  PMIAOSF;  /* collateral clause result */
A68_52  SMIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  TMIAOSF;  /* YIELD */
A68_174  UMIAOSF;  /* united object - for case conformity */
A68_INT * VMIAOSF_symbol;
A68_BOOL  WMIAOSF;  /* clause result */
A68_52  ZMIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ANIAOSF;  /* YIELD */
A68_VC  BNIAOSF;  /* avoid structure result */
A68_52  CNIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  DNIAOSF;  /* OPERATORS - istruct -> vector */
A68_228  ENIAOSF;  /* united object - for case conformity */
A68_VC  FNIAOSF_id;
A68_BOOL  GNIAOSF;  /* optbool result */
A68_64  HNIAOSF;  /* avoid structure result */
A68_52  INIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  JNIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_257  KNIAOSF;  /* collateral clause result */
A68_52  LNIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  MNIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  NNIAOSF;  /* procedure value */
A68_85  ONIAOSF;  /* OPERATORS - istruct -> vector */
A68_227  PNIAOSF_p;
A68_102  QNIAOSF_help_lines;
A68_64  RNIAOSF;  /* avoid structure result */
A68_52  SNIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  TNIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC * UNIAOSF_l;
A68_INT  VNIAOSF;  /* forall loop counter */
A68_257  WNIAOSF;  /* collateral clause result */
A68_52  XNIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  YNIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  ZNIAOSF;  /* procedure value */
A68_85  AOIAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(simplehelpbasic);
 /* line 451: */
 /* line 452: */
{ 
 /* line 453: */
if ( !Group )
{ 
 /* line 454: */
TMIAOSF = RMIAOSF ;
PMIAOSF.data[0] = A_UNITE(SMIAOSF,mode7,7,TMIAOSF);
 /* line 455: */
UMIAOSF = (*(&(Simple->Parameter))) ;
switch ( UMIAOSF.mode )
{ 
case 1: /* REF INT */
VMIAOSF_symbol = (UMIAOSF.data.mode1);
WMIAOSF = ((*VMIAOSF_symbol)==0);
break;
default: 
 /* line 456: */
 /* line 457: */
 /* line 458: */
WMIAOSF = A68_FALSE;
break;
} 
if ( WMIAOSF )
{ 
ANIAOSF = YMIAOSF ;
PMIAOSF.data[1] = A_UNITE(ZMIAOSF,mode7,7,ANIAOSF);
} 
else
{ 
 /* line 459: */
 /* line 460: */
PHFAOSF_show_syntax( (*(&(Simple->Parameter))), (*(&(Env->Analysers))), &BNIAOSF );
PMIAOSF.data[1] = A_UNITE(CNIAOSF,mode7,7,BNIAOSF);
} 
 /* line 461: */
KYDAOSF_put(Channel, A_HISVEC(DNIAOSF,PMIAOSF,2,A68_52 ));
} 
 /* line 462: */
 /* line 463: */
ENIAOSF = (*(&(Simple->Help))) ;
switch ( ENIAOSF.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
FNIAOSF_id = (ENIAOSF.data.mode1);
 /* line 464: */
GNIAOSF = ! A_VSTRUCTCOMP(FNIAOSF_id,CHDAOSF_nilstr);
if ( GNIAOSF )
{ /* line 465: */
GNIAOSF = (FNIAOSF_id.upb>0);
}
if ( GNIAOSF )
{ 
LSDAOSF_lines( 2, &HNIAOSF );
KYDAOSF_put(Channel, A_HVEC(JNIAOSF,A_UNITE(INIAOSF,mode20,20,HNIAOSF),A68_52 ));
 /* line 466: */
KNIAOSF.data[0] = A_UNITE(LNIAOSF,mode7,7,FNIAOSF_id);
NNIAOSF.fn.fn_global = PKDAOSF_newline;
NNIAOSF.nonlocals = A68_NIL;
KNIAOSF.data[1] = A_UNITE(MNIAOSF,mode12,12,NNIAOSF);
 /* line 467: */
KYDAOSF_put(Channel, A_HISVEC(ONIAOSF,KNIAOSF,2,A68_52 ));
} 
else
{ 
 /* line 468: */
 /* line 469: */
PKDAOSF_newline(Channel);
} 
break;
case 3: /* PROC(REF MODE229,REF MODE34) VOID */
PNIAOSF_p = (ENIAOSF.data.mode3);
 /* line 470: */
{ 
PKDAOSF_newline(Channel);
 /* line 471: */
A_CALLPROC(PNIAOSF_p,(Simple, Channel),(Simple, Channel,(PNIAOSF_p).nonlocals));
 /* line 472: */
 /* line 473: */
 /* line 474: */
PKDAOSF_newline(Channel);
} 
break;
case 2: /* REF VECTOR [] REF MODE26 */
QNIAOSF_help_lines = (ENIAOSF.data.mode2);
 /* line 475: */
{ 
LSDAOSF_lines( 2, &RNIAOSF );
KYDAOSF_put(Channel, A_HVEC(TNIAOSF,A_UNITE(SNIAOSF,mode20,20,RNIAOSF),A68_52 ));
 /* line 476: */
VNIAOSF = QNIAOSF_help_lines.upb -1;
UNIAOSF_l = QNIAOSF_help_lines.data;
for (;VNIAOSF-- >= 0;
(UNIAOSF_l++
) )
{
WNIAOSF.data[0] = A_UNITE(XNIAOSF,mode7,7,(*UNIAOSF_l));
ZNIAOSF.fn.fn_global = PKDAOSF_newline;
ZNIAOSF.nonlocals = A68_NIL;
WNIAOSF.data[1] = A_UNITE(YNIAOSF,mode12,12,ZNIAOSF);
KYDAOSF_put(Channel, A_HISVEC(AOIAOSF,WNIAOSF,2,A68_52 ));
}
 /* line 477: */
 /* line 478: */
 /* line 479: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(simplehelpbasic);
return;
} 
#undef NL
 /* line 483: */

A_STATIC A68_VOID  FOIAOSF_simplehelp(A68_234 * Env, A68_34 * Channel, A68_229 * Simple, A68_BOOL  Group)
{ 
A68_257  GOIAOSF;  /* collateral clause result */
A68_52  HOIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  IOIAOSF;  /* procedure value */
A68_VC  JOIAOSF;  /* avoid structure result */
A68_52  KOIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  LOIAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(simplehelp);
 /* line 484: */
 /* line 485: */
{ 
IOIAOSF.fn.fn_global = PKDAOSF_newline;
IOIAOSF.nonlocals = A68_NIL;
GOIAOSF.data[0] = A_UNITE(HOIAOSF,mode12,12,IOIAOSF);
CJIAOSF_showname( Simple, Group, &JOIAOSF );
GOIAOSF.data[1] = A_UNITE(KOIAOSF,mode7,7,JOIAOSF);
KYDAOSF_put(Channel, A_HISVEC(LOIAOSF,GOIAOSF,2,A68_52 ));
 /* line 486: */
 /* line 487: */
OMIAOSF_simplehelpbasic(Env, Channel, Simple, Group);
} 
A_PROC_EXIT(simplehelp);
return;
} 
#undef NL
 /* line 492: */
 /* line 493: */
 /* line 494: */
 /* line 496: */

A_STATIC A68_BOOL  UOIAOSF_grouphelp(A68_234 * Env, A68_34 * Channel, A68_VC  Id, A68_229 * Root, A68_225  Commands, A68_BOOL  Compounddetails, A68_BOOL  Localsection, A68_265  Simplehelp)
{ 
A68_BOOL  VOIAOSF_found;
A68_268  XOIAOSF_full;   /* proc value of non-global proc */
A68_232 * BPIAOSF_command;
A68_INT  CPIAOSF;  /* forall loop counter */
A68_232  DPIAOSF;  /* united object - for case conformity */
A68_229 * EPIAOSF_simple;
A68_231 * FPIAOSF_compound;
A68_229 * GPIAOSF_simple;
A68_270  HPIAOSF;  /* collateral clause result */
A68_52  KPIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LPIAOSF;  /* YIELD */
A68_52  MPIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  NPIAOSF;  /* YIELD */
A68_52  OPIAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  PPIAOSF;  /* YIELD */
A68_52  QPIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  RPIAOSF;  /* procedure value */
A68_85  SPIAOSF;  /* OPERATORS - istruct -> vector */
A68_230 * TPIAOSF_group;
A68_229 * UPIAOSF_simple;
A68_VC  VPIAOSF_remainder;
A68_229 * WPIAOSF_s;
A68_VC  YPIAOSF;  /* clause result */
A68_VC  CQIAOSF_sort;
A68_274  DQIAOSF;  /* collateral clause result */
A68_52  GQIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HQIAOSF;  /* YIELD */
A68_52  IQIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  LQIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MQIAOSF;  /* YIELD */
A68_VC  NQIAOSF;  /* avoid structure result */
A68_52  OQIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  RQIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  SQIAOSF;  /* YIELD */
A68_52  TQIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  UQIAOSF;  /* procedure value */
A68_85  VQIAOSF;  /* OPERATORS - istruct -> vector */
A68_BOOL  WQIAOSF;  /* clause result */
A_PROC_ENTRY(grouphelp);
 /* line 497: */
 /* line 498: */
{ 
VOIAOSF_found = A68_FALSE;
 /* line 500: */
A_CLOSURE( XOIAOSF_full, YOIAOSF_full, ZOIAOSF_full );
(( ZOIAOSF_full * ) ( XOIAOSF_full.nonlocals )) -> Root = Root;
 /* line 503: */
 /* line 504: */
CPIAOSF = Commands.upb -1;
BPIAOSF_command = Commands.data;
for (;CPIAOSF-- >= 0;
(BPIAOSF_command++
) )
{
 /* line 505: */
DPIAOSF = (*BPIAOSF_command) ;
switch ( DPIAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE174,MODE217,MODE216,MODE228,MODE220)  */
EPIAOSF_simple = (DPIAOSF.data.mode1);
 /* line 506: */
{ 
 /* line 507: */
if ( NHIAOSF_checkname(Env, A68_TRUE, Id, EPIAOSF_simple) )
{ 
VOIAOSF_found = A68_TRUE;
 /* line 508: */
 /* line 509: */
 /* line 510: */
 /* line 512: */
A_CALLPROC(Simplehelp,(Env, Channel, A_CALLPROC(XOIAOSF_full,(EPIAOSF_simple),(EPIAOSF_simple,(XOIAOSF_full).nonlocals)), A68_FALSE),(Env, Channel, A_CALLPROC(XOIAOSF_full,(EPIAOSF_simple),(EPIAOSF_simple,(XOIAOSF_full).nonlocals)), A68_FALSE,(Simplehelp).nonlocals));
} 
} 
break;
case 3: /* REF STRUCT(REF MODE229,REF MODE26,REF REF MODE26,REF MODE225,REF MODE225,REF MODE229)  */
FPIAOSF_compound = (DPIAOSF.data.mode3);
 /* line 513: */
{ 
GPIAOSF_simple = (*(&(FPIAOSF_compound->Prelude)));
 /* line 514: */
 /* line 515: */
if ( NHIAOSF_checkname(Env, A68_TRUE, Id, GPIAOSF_simple) )
{ 
VOIAOSF_found = A68_TRUE;
 /* line 516: */
A_CALLPROC(Simplehelp,(Env, Channel, A_CALLPROC(XOIAOSF_full,(GPIAOSF_simple),(GPIAOSF_simple,(XOIAOSF_full).nonlocals)), A68_FALSE),(Env, Channel, A_CALLPROC(XOIAOSF_full,(GPIAOSF_simple),(GPIAOSF_simple,(XOIAOSF_full).nonlocals)), A68_FALSE,(Simplehelp).nonlocals));
 /* line 517: */
 /* line 518: */
if ( Compounddetails )
{ 
 /* line 519: */
 /* line 520: */
LPIAOSF = JPIAOSF ;
HPIAOSF.data[0] = A_UNITE(KPIAOSF,mode7,7,LPIAOSF);
NPIAOSF = (*(&(FPIAOSF_compound->Context))) ;
HPIAOSF.data[1] = A_UNITE(MPIAOSF,mode7,7,NPIAOSF);
PPIAOSF = ':' ;
HPIAOSF.data[2] = A_UNITE(OPIAOSF,mode6,6,PPIAOSF);
RPIAOSF.fn.fn_global = PKDAOSF_newline;
RPIAOSF.nonlocals = A68_NIL;
HPIAOSF.data[3] = A_UNITE(QPIAOSF,mode12,12,RPIAOSF);
KYDAOSF_put(Channel, A_HISVEC(SPIAOSF,HPIAOSF,4,A68_52 ));
 /* line 521: */
 /* line 522: */
XKIAOSF_commandvechelp(Env, Channel, MZHAOSF_nilsimple, (*(&(FPIAOSF_compound->Locals))), A68_TRUE);
 /* line 523: */
 /* line 524: */
 /* line 525: */
 /* line 526: */
 /* line 527: */
 /* line 529: */
XKIAOSF_commandvechelp(Env, Channel, MZHAOSF_nilsimple, (*(&(FPIAOSF_compound->Globals))), A68_TRUE);
} 
} 
} 
break;
case 2: /* REF STRUCT(REF MODE229,REF MODE225)  */
TPIAOSF_group = (DPIAOSF.data.mode2);
 /* line 530: */
{ 
UPIAOSF_simple = (*(&(TPIAOSF_group->Group)));
 /* line 531: */
VPIAOSF_remainder = IHDAOSF_nullstr;
 /* line 532: */
WPIAOSF_s = A_CALLPROC(XOIAOSF_full,(UPIAOSF_simple),(UPIAOSF_simple,(XOIAOSF_full).nonlocals));
 /* line 533: */
 /* line 534: */
if ( NHIAOSF_checkname(Env, A68_TRUE, Id, UPIAOSF_simple) )
{ 
VOIAOSF_found = A68_TRUE;
 /* line 535: */
A_CALLPROC(Simplehelp,(Env, Channel, WPIAOSF_s, A68_TRUE),(Env, Channel, WPIAOSF_s, A68_TRUE,(Simplehelp).nonlocals));
 /* line 536: */
 /* line 537: */
if ( Localsection )
{ 
YPIAOSF = ZPIAOSF;
} 
else
{ 
YPIAOSF = BQIAOSF;
} 
CQIAOSF_sort = YPIAOSF;
 /* line 538: */
HQIAOSF = FQIAOSF ;
DQIAOSF.data[0] = A_UNITE(GQIAOSF,mode7,7,HQIAOSF);
 /* line 539: */
DQIAOSF.data[1] = A_UNITE(IQIAOSF,mode7,7,CQIAOSF_sort);
MQIAOSF = KQIAOSF ;
DQIAOSF.data[2] = A_UNITE(LQIAOSF,mode7,7,MQIAOSF);
PEIAOSF_lc( (*(&(WPIAOSF_s->Name))), &NQIAOSF );
DQIAOSF.data[3] = A_UNITE(OQIAOSF,mode7,7,NQIAOSF);
SQIAOSF = QQIAOSF ;
DQIAOSF.data[4] = A_UNITE(RQIAOSF,mode7,7,SQIAOSF);
UQIAOSF.fn.fn_global = PKDAOSF_newline;
UQIAOSF.nonlocals = A68_NIL;
DQIAOSF.data[5] = A_UNITE(TQIAOSF,mode12,12,UQIAOSF);
KYDAOSF_put(Channel, A_HISVEC(VQIAOSF,DQIAOSF,6,A68_52 ));
 /* line 540: */
 /* line 541: */
XKIAOSF_commandvechelp(Env, Channel, WPIAOSF_s, (*(&(TPIAOSF_group->Commands))), A68_FALSE);
} 
else
{ 
 /* line 542: */
if ( ZHIAOSF_checkstartswith(Env, A68_TRUE, Id, (&VPIAOSF_remainder), UPIAOSF_simple) )
{ 
 /* line 543: */
 /* line 544: */
 /* line 545: */
if ( UOIAOSF_grouphelp(Env, Channel, VPIAOSF_remainder, WPIAOSF_s, (*(&(TPIAOSF_group->Commands))), Compounddetails, Localsection, Simplehelp) )
{ 
 /* line 546: */
 /* line 547: */
 /* line 548: */
 /* line 549: */
 /* line 550: */
VOIAOSF_found = A68_TRUE;
} 
} 
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 551: */
 /* line 552: */
WQIAOSF = VOIAOSF_found;
} 
A_PROC_EXIT(grouphelp);
return( WQIAOSF );
} 
#undef NL
 /* line 559: */

A68_VOID  CRIAOSF_help(A68_234 * Env, A68_34 * Channel, A68_VC  Id, A68_BOOL  Compounddetails, A68_97  Msg)
{ 
A68_231 * DRIAOSF_compound;
A68_BOOL  ERIAOSF;  /* optbool result */
A68_277  FRIAOSF;  /* collateral clause result */
A68_52  GRIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  HRIAOSF;  /* procedure value */
A68_52  KRIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LRIAOSF;  /* YIELD */
A68_52  MRIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  NRIAOSF;  /* YIELD */
A68_52  QRIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RRIAOSF;  /* YIELD */
A68_52  SRIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  TRIAOSF;  /* procedure value */
A68_85  URIAOSF;  /* OPERATORS - istruct -> vector */
A68_265  VRIAOSF;  /* procedure value */
A68_BOOL  WRIAOSF_l;
A68_265  XRIAOSF;  /* procedure value */
A68_BOOL  YRIAOSF_g;
A68_BOOL  ZRIAOSF;  /* optbool result */
A68_BOOL  ASIAOSF;  /* clause result */
A68_270  BSIAOSF;  /* collateral clause result */
A68_52  CSIAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  DSIAOSF;  /* YIELD */
A68_VC  ESIAOSF;  /* avoid structure result */
A68_52  FSIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  ISIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  JSIAOSF;  /* YIELD */
A68_52  KSIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LSIAOSF;  /* YIELD */
A68_85  MSIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NSIAOSF;  /* avoid structure result */
A68_46  OSIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(help);
 /* line 560: */
 /* line 561: */
{ 
DRIAOSF_compound = (*(&((*(&(Env->Stack)))->Current_context)));
 /* line 562: */
ERIAOSF = A_VSTRUCTCOMP(Id,CHDAOSF_nilstr);
if ( ! ERIAOSF )
{ /* line 563: */
ERIAOSF = (Id.upb==0);
}
if ( ERIAOSF )
{ 
HRIAOSF.fn.fn_global = PKDAOSF_newline;
HRIAOSF.nonlocals = A68_NIL;
FRIAOSF.data[0] = A_UNITE(GRIAOSF,mode12,12,HRIAOSF);
 /* line 564: */
LRIAOSF = JRIAOSF ;
FRIAOSF.data[1] = A_UNITE(KRIAOSF,mode7,7,LRIAOSF);
NRIAOSF = (*(&(DRIAOSF_compound->Context))) ;
FRIAOSF.data[2] = A_UNITE(MRIAOSF,mode7,7,NRIAOSF);
RRIAOSF = PRIAOSF ;
FRIAOSF.data[3] = A_UNITE(QRIAOSF,mode7,7,RRIAOSF);
TRIAOSF.fn.fn_global = PKDAOSF_newline;
TRIAOSF.nonlocals = A68_NIL;
FRIAOSF.data[4] = A_UNITE(SRIAOSF,mode12,12,TRIAOSF);
KYDAOSF_put(Channel, A_HISVEC(URIAOSF,FRIAOSF,5,A68_52 ));
 /* line 565: */
XKIAOSF_commandvechelp(Env, Channel, MZHAOSF_nilsimple, (*(&(DRIAOSF_compound->Locals))), A68_TRUE);
 /* line 566: */
 /* line 567: */
XKIAOSF_commandvechelp(Env, Channel, MZHAOSF_nilsimple, (*(&(DRIAOSF_compound->Globals))), A68_TRUE);
} 
else
{ 
{ 
 /* line 568: */
VRIAOSF.fn.fn_global = FOIAOSF_simplehelp;
VRIAOSF.nonlocals = A68_NIL;
WRIAOSF_l = UOIAOSF_grouphelp(Env, Channel, Id, MZHAOSF_nilsimple, (*(&(DRIAOSF_compound->Locals))), Compounddetails, A68_TRUE, VRIAOSF);
 /* line 569: */
 /* line 570: */
XRIAOSF.fn.fn_global = FOIAOSF_simplehelp;
XRIAOSF.nonlocals = A68_NIL;
YRIAOSF_g = UOIAOSF_grouphelp(Env, Channel, Id, MZHAOSF_nilsimple, (*(&(DRIAOSF_compound->Globals))), Compounddetails, A68_FALSE, XRIAOSF);
 /* line 571: */
ZRIAOSF = WRIAOSF_l;
if ( ! ZRIAOSF )
{ZRIAOSF = YRIAOSF_g;
}
 /* line 572: */
ASIAOSF = !ZRIAOSF;
if ( ASIAOSF )
{ 
DSIAOSF = '\"' ;
BSIAOSF.data[0] = A_UNITE(CSIAOSF,mode6,6,DSIAOSF);
PEIAOSF_lc( Id, &ESIAOSF );
BSIAOSF.data[1] = A_UNITE(FSIAOSF,mode7,7,ESIAOSF);
 /* line 573: */
JSIAOSF = HSIAOSF ;
BSIAOSF.data[2] = A_UNITE(ISIAOSF,mode7,7,JSIAOSF);
LSIAOSF = (*(&(DRIAOSF_compound->Context))) ;
BSIAOSF.data[3] = A_UNITE(KSIAOSF,mode7,7,LSIAOSF);
 /* line 574: */
YCEAOSF_oneline( A_HISVEC(MSIAOSF,BSIAOSF,4,A68_52 ), &NSIAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(OSIAOSF,NSIAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(OSIAOSF,NSIAOSF,A68_VC ),(Msg).nonlocals));
} 
} 
} 
} 
A_PROC_EXIT(help);
return;
} 
#undef NL
 /* line 584: */

A68_VOID  USIAOSF_full_help(A68_234 * Env, A68_34 * Channel, A68_BOOL  Low, A68_BOOL  High, A68_97  Msg)
{ 
A68_279 * XSIAOSF_list;
A68_251  ZSIAOSF_alreadyencountered;   /* proc value of non-global proc */
A68_280  IUIAOSF_basichelp;   /* proc value of non-global proc */
A68_283  OWIAOSF_fullshell;   /* proc value of non-global proc */
A_PROC_ENTRY(full_help);
 /* line 585: */
 /* line 587: */
{ 
 /* line 588: */
 /* line 589: */
XSIAOSF_list = WSIAOSF_end;
 /* line 591: */
 /* line 575: */
A_CLOSURE( ZSIAOSF_alreadyencountered, ATIAOSF_alreadyencountered, BTIAOSF_alreadyencountered );
(( BTIAOSF_alreadyencountered * ) ( ZSIAOSF_alreadyencountered.nonlocals )) -> XSIAOSF_list = (&XSIAOSF_list);
 /* line 604: */
 /* line 617: */
A_CLOSURE( IUIAOSF_basichelp, JUIAOSF_basichelp, KUIAOSF_basichelp );
(( KUIAOSF_basichelp * ) ( IUIAOSF_basichelp.nonlocals )) -> Msg = Msg;
(( KUIAOSF_basichelp * ) ( IUIAOSF_basichelp.nonlocals )) -> ZSIAOSF_alreadyencountered = ZSIAOSF_alreadyencountered;
(( KUIAOSF_basichelp * ) ( IUIAOSF_basichelp.nonlocals )) -> Low = Low;
(( KUIAOSF_basichelp * ) ( IUIAOSF_basichelp.nonlocals )) -> Channel = Channel;
(( KUIAOSF_basichelp * ) ( IUIAOSF_basichelp.nonlocals )) -> High = High;
(( KUIAOSF_basichelp * ) ( IUIAOSF_basichelp.nonlocals )) -> Env = Env;
 /* line 646: */
A_CLOSURE( OWIAOSF_fullshell, PWIAOSF_fullshell, QWIAOSF_fullshell );
(( QWIAOSF_fullshell * ) ( OWIAOSF_fullshell.nonlocals )) -> IUIAOSF_basichelp = IUIAOSF_basichelp;
(( QWIAOSF_fullshell * ) ( OWIAOSF_fullshell.nonlocals )) -> High = High;
(( QWIAOSF_fullshell * ) ( OWIAOSF_fullshell.nonlocals )) -> Env = Env;
(( QWIAOSF_fullshell * ) ( OWIAOSF_fullshell.nonlocals )) -> Channel = Channel;
(( QWIAOSF_fullshell * ) ( OWIAOSF_fullshell.nonlocals )) -> OWIAOSF_fullshell = OWIAOSF_fullshell;
 /* line 685: */
 /* line 686: */
A_CALLPROC(OWIAOSF_fullshell,(0, (*(&((*(&(Env->Stack)))->Current_context))), MZHAOSF_nilsimple),(0, (*(&((*(&(Env->Stack)))->Current_context))), MZHAOSF_nilsimple,(OWIAOSF_fullshell).nonlocals));
} 
A_PROC_EXIT(full_help);
return;
} 
#undef NL
 /* line 691: */

A68_VOID  ZYIAOSF_syntax_help(A68_234 * Env, A68_34 * Channel, A68_VC  Description, A68_BOOL  Give_details, A68_97  Msg)
{ 
A68_286  CZIAOSF_show;   /* proc value of non-global proc */
A68_257  OAJAOSF;  /* collateral clause result */
A68_52  RAJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  SAJAOSF;  /* YIELD */
A68_64  TAJAOSF;  /* avoid structure result */
A68_52  UAJAOSF;  /* OPERATORS - mode -> union mode */
A68_85  VAJAOSF;  /* OPERATORS - istruct -> vector */
A68_182 * WAJAOSF_analyser;
A68_188  XAJAOSF;  /* forall yield */
A68_INT  YAJAOSF;  /* forall loop counter */
A68_BOOL  ZAJAOSF_found;
A68_182 * ABJAOSF_analyser;
A68_188  BBJAOSF;  /* forall yield */
A68_INT  CBJAOSF;  /* forall loop counter */
A68_BOOL  DBJAOSF;  /* optbool result */
A68_270  EBJAOSF;  /* collateral clause result */
A68_52  FBJAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  GBJAOSF;  /* YIELD */
A68_52  HBJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  KBJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LBJAOSF;  /* YIELD */
A68_52  MBJAOSF;  /* OPERATORS - mode -> union mode */
A68_56  NBJAOSF;  /* procedure value */
A68_85  OBJAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(syntax_help);
 /* line 692: */
 /* line 693: */
{ 
A_CLOSURE( CZIAOSF_show, DZIAOSF_show, EZIAOSF_show );
(( EZIAOSF_show * ) ( CZIAOSF_show.nonlocals )) -> Msg = Msg;
(( EZIAOSF_show * ) ( CZIAOSF_show.nonlocals )) -> Channel = Channel;
(( EZIAOSF_show * ) ( CZIAOSF_show.nonlocals )) -> Env = Env;
(( EZIAOSF_show * ) ( CZIAOSF_show.nonlocals )) -> Give_details = Give_details;
 /* line 712: */
 /* line 713: */
if ( (Description.upb==0) )
{ 
SAJAOSF = QAJAOSF ;
OAJAOSF.data[0] = A_UNITE(RAJAOSF,mode7,7,SAJAOSF);
LSDAOSF_lines( 2, &TAJAOSF );
OAJAOSF.data[1] = A_UNITE(UAJAOSF,mode20,20,TAJAOSF);
KYDAOSF_put(Channel, A_HISVEC(VAJAOSF,OAJAOSF,2,A68_52 ));
 /* line 714: */
 /* line 715: */
XAJAOSF = (*(&(Env->Analysers))) ;
YAJAOSF = XAJAOSF.upb -1;
WAJAOSF_analyser = XAJAOSF.data;
for (;YAJAOSF-- >= 0;
(WAJAOSF_analyser++
) )
{
if ( ((*(*(&(WAJAOSF_analyser->Sort))))!=(-1)) )
{ 
A_CALLPROC(CZIAOSF_show,((*WAJAOSF_analyser)),((*WAJAOSF_analyser),(CZIAOSF_show).nonlocals));
} 
}
 /* line 716: */
 /* line 717: */
PKDAOSF_newline(Channel);
} 
else
{ 
ZAJAOSF_found = A68_FALSE;
 /* line 718: */
BBJAOSF = (*(&(Env->Analysers))) ;
CBJAOSF = BBJAOSF.upb -1;
ABJAOSF_analyser = BBJAOSF.data;
for (;CBJAOSF-- >= 0;
(ABJAOSF_analyser++
) )
{
 /* line 719: */
if ( !(!ZAJAOSF_found) ) break;
 /* line 720: */
DBJAOSF = ((*(*(&(ABJAOSF_analyser->Sort))))!=(-1));
if ( DBJAOSF )
{ /* line 721: */
DBJAOSF = A_VC_EQ((*(&(ABJAOSF_analyser->Description))),Description);
}
if ( DBJAOSF )
{ 
A_CALLPROC(CZIAOSF_show,((*ABJAOSF_analyser)),((*ABJAOSF_analyser),(CZIAOSF_show).nonlocals));
 /* line 722: */
 /* line 723: */
ZAJAOSF_found = A68_TRUE;
} 
}
 /* line 724: */
 /* line 725: */
if ( !ZAJAOSF_found )
{ 
GBJAOSF = '\"' ;
EBJAOSF.data[0] = A_UNITE(FBJAOSF,mode6,6,GBJAOSF);
EBJAOSF.data[1] = A_UNITE(HBJAOSF,mode7,7,Description);
LBJAOSF = JBJAOSF ;
EBJAOSF.data[2] = A_UNITE(KBJAOSF,mode7,7,LBJAOSF);
NBJAOSF.fn.fn_global = PKDAOSF_newline;
NBJAOSF.nonlocals = A68_NIL;
EBJAOSF.data[3] = A_UNITE(MBJAOSF,mode12,12,NBJAOSF);
 /* line 726: */
 /* line 727: */
 /* line 728: */
KYDAOSF_put(Channel, A_HISVEC(OBJAOSF,EBJAOSF,4,A68_52 ));
} 
} 
} 
A_PROC_EXIT(syntax_help);
return;
} 
#undef NL
 /* line 739: */
 /* line 740: */
 /* line 742: */
 /* line 743: */
 /* line 744: */
 /* line 746: */

A68_234 * WBJAOSF_initialise_commands(A68_236  Report_error, A68_238  Set_default_msg, A68_97  Abort, A68_235  Caller, A68_183 * Readers, A68_231 * Outer_command, A68_177  Outer_parameter)
{ 
A68_289 * YBJAOSF_list;
A68_290  ACJAOSF_new;   /* proc value of non-global proc */
A68_293  BDJAOSF_sort_commands;   /* proc value of non-global proc */
A68_INT  ODJAOSF_n_readers;
A68_183 * PDJAOSF_rptr;
A68_294  RDJAOSF_generator;   /* proc value of non-global proc */
A68_188  WDJAOSF;  /* avoid structure result */
A68_188  XDJAOSF_analysers;
A68_182 * YDJAOSF_a;
A68_INT  ZDJAOSF;  /* forall loop counter */
A68_INT * AEJAOSF;  /* YIELD */
A68_INT ** BEJAOSF;  /* YIELD */
A68_INT  CEJAOSF_index;
A68_46  FEJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_182 * GEJAOSF;  /* YIELD */
A68_233 * HEJAOSF_stack;
A68_233  IEJAOSF;  /* collateral clause result */
A68_296  KEJAOSF_generator;   /* proc value of non-global proc */
A68_102  PEJAOSF;  /* avoid structure result */
A68_233  QEJAOSF;  /* collateral clause result */
A68_102  REJAOSF;  /* OPERATORS - nil -> mode */
A68_233 * SEJAOSF;  /* YIELD */
A68_234 * TEJAOSF_env;
A68_234  UEJAOSF;  /* collateral clause result */
A68_216  VEJAOSF;  /* avoid structure result */
A68_234 * WEJAOSF;  /* clause result */
A_PROC_ENTRY(initialise_commands);
 /* line 747: */
 /* line 753: */
{ 
 /* line 754: */
YBJAOSF_list = (A68_289 *)A68_NIL;
 /* line 756: */
A_CLOSURE( ACJAOSF_new, BCJAOSF_new, CCJAOSF_new );
(( CCJAOSF_new * ) ( ACJAOSF_new.nonlocals )) -> YBJAOSF_list = (&YBJAOSF_list);
 /* line 768: */
 /* line 784: */
A_CLOSURE( BDJAOSF_sort_commands, CDJAOSF_sort_commands, DDJAOSF_sort_commands );
(( DDJAOSF_sort_commands * ) ( BDJAOSF_sort_commands.nonlocals )) -> ACJAOSF_new = ACJAOSF_new;
(( DDJAOSF_sort_commands * ) ( BDJAOSF_sort_commands.nonlocals )) -> BDJAOSF_sort_commands = BDJAOSF_sort_commands;
 /* line 805: */
A_CALLPROC(BDJAOSF_sort_commands,((&(Outer_command->Locals))),((&(Outer_command->Locals)),(BDJAOSF_sort_commands).nonlocals));
 /* line 806: */
A_CALLPROC(BDJAOSF_sort_commands,((&(Outer_command->Globals))),((&(Outer_command->Globals)),(BDJAOSF_sort_commands).nonlocals));
 /* line 808: */
ODJAOSF_n_readers = 0;
 /* line 809: */
PDJAOSF_rptr = Readers;
 /* line 810: */
for ( ;; )
{ 
 /* line 811: */
if ( !((PDJAOSF_rptr!=(A68_183 *)A68_NIL)) ) break;
ODJAOSF_n_readers = YHHAOSF_max((*(*(&((&(PDJAOSF_rptr->Rule))->Sort)))), ODJAOSF_n_readers);
 /* line 812: */
 /* line 813: */
PDJAOSF_rptr = (*(&(PDJAOSF_rptr->Rest)));
}
 /* line 815: */
A_CLOSURE( RDJAOSF_generator, SDJAOSF_generator, TDJAOSF_generator );
(( TDJAOSF_generator * ) ( RDJAOSF_generator.nonlocals )) -> ODJAOSF_n_readers = (&ODJAOSF_n_readers);
A_CALLPROC(RDJAOSF_generator,(A68_FALSE, &WDJAOSF),(A68_FALSE, &WDJAOSF,(RDJAOSF_generator).nonlocals));
XDJAOSF_analysers = WDJAOSF;
 /* line 816: */
ZDJAOSF = XDJAOSF_analysers.upb -1;
YDJAOSF_a = XDJAOSF_analysers.data;
for (;ZDJAOSF-- >= 0;
(YDJAOSF_a++
) )
{
AEJAOSF = A_HEAP(A68_INT ) ;
(*AEJAOSF) = (-1) ;
BEJAOSF = (&(YDJAOSF_a->Sort)) ;
(*BEJAOSF) = AEJAOSF;
}
 /* line 818: */
PDJAOSF_rptr = Readers;
 /* line 819: */
for ( ;; )
{ 
 /* line 820: */
if ( !((PDJAOSF_rptr!=(A68_183 *)A68_NIL)) ) break;
CEJAOSF_index = (*(*(&((&(PDJAOSF_rptr->Rule))->Sort))));
 /* line 821: */
 /* line 822: */
if ( ((*(*(&((&A_VINDEX(XDJAOSF_analysers,CEJAOSF_index))->Sort))))!=(-1)) )
{ 
 /* line 823: */
A_CALLPROC(Abort,(IUAAOSF_system, A_HVEC(FEJAOSF,EEJAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(FEJAOSF,EEJAOSF,A68_VC ),(Abort).nonlocals));
} 
else
{ 
 /* line 824: */
GEJAOSF = (&A_VINDEX(XDJAOSF_analysers,CEJAOSF_index)) ;
(*GEJAOSF) = (*(&(PDJAOSF_rptr->Rule)));
} 
 /* line 825: */
 /* line 826: */
PDJAOSF_rptr = (*(&(PDJAOSF_rptr->Rest)));
}
 /* line 828: */
HEJAOSF_stack = (A_HEAP(A68_233 ));
IEJAOSF.Current_context = Outer_command;
IEJAOSF.Depth = 1;
A_CLOSURE( KEJAOSF_generator, LEJAOSF_generator, MEJAOSF_generator );
 /* line 829: */
A_CALLPROC(KEJAOSF_generator,(A68_FALSE, &PEJAOSF),(A68_FALSE, &PEJAOSF,(KEJAOSF_generator).nonlocals));
IEJAOSF.Input_lines = PEJAOSF;
QEJAOSF.Current_context = (A68_231 *)A68_NIL;
QEJAOSF.Depth = 0;
QEJAOSF.Input_lines = A_VVAC(REJAOSF);
QEJAOSF.Caller = (A68_233 *)A68_NIL;
SEJAOSF = A_HEAP(A68_233 ) ;
(*SEJAOSF) = QEJAOSF ;
IEJAOSF.Caller = SEJAOSF;
(*HEJAOSF_stack) = IEJAOSF;
 /* line 831: */
TEJAOSF_env = (A_HEAP(A68_234 ));
UEJAOSF.Stack = HEJAOSF_stack;
UEJAOSF.Analysers = XDJAOSF_analysers;
UEJAOSF.Hidden = A68_FALSE;
UEJAOSF.Private = A68_FALSE;
UEJAOSF.Secret = A68_FALSE;
 /* line 832: */
UEJAOSF.Caller = Caller;
UEJAOSF.Report_error = Report_error;
UEJAOSF.Set_default_msg = Set_default_msg;
UEJAOSF.Abort = Abort;
(*TEJAOSF_env) = UEJAOSF;
 /* line 834: */
A_CALLPROC(Caller,(TEJAOSF_env, (*(&((*(&(HEJAOSF_stack->Current_context)))->Prelude))), Outer_parameter, Abort, &VEJAOSF),(TEJAOSF_env, (*(&((*(&(HEJAOSF_stack->Current_context)))->Prelude))), Outer_parameter, Abort, &VEJAOSF,(Caller).nonlocals));
VEJAOSF;
 /* line 836: */
 /* line 837: */
WEJAOSF = TEJAOSF_env;
} 
A_PROC_EXIT(initialise_commands);
return( WEJAOSF );
} 
#undef NL

A68_VOID  YEJAOSF_interpret_commands(A68_234 * Env, A68_216  *ReturnedValue)
{ 
A68_97  CFJAOSF;  /* OPERATORS - skip to mode */
A68_97  BFJAOSF_msg;
A68_202  DFJAOSF_input_lines;   /* proc value of non-global proc */
A68_298  FGJAOSF_obey;   /* proc value of non-global proc */
A68_299  MHJAOSF_shell;   /* proc value of non-global proc */
A68_97  XIJAOSF_anonymous;   /* proc value of non-global proc */
A68_jmp_buf ZEJAOSF_restart;
A68_216  EKJAOSF_continuation;
A68_238  FKJAOSF;  /* CALL */
A68_237  GKJAOSF;  /* OPERATORS - mode -> union mode */
A68_BOOL  HKJAOSF;  /* clause result */
A68_216  IKJAOSF;  /* avoid structure result */
A68_238  JKJAOSF;  /* CALL */
A68_237  KKJAOSF;  /* OPERATORS - mode -> union mode */
A68_216  LKJAOSF;  /* clause result */
if ( sigsetjmp( ZEJAOSF_restart.label,1) ) goto AFJAOSF_restart;
A_PROC_ENTRY(interpret_commands);
 /* line 846: */
 /* line 859: */
{ 
BFJAOSF_msg = CFJAOSF;
 /* line 862: */
 /* line 863: */
 /* line 869: */
A_CLOSURE( DFJAOSF_input_lines, EFJAOSF_input_lines, FFJAOSF_input_lines );
(( FFJAOSF_input_lines * ) ( DFJAOSF_input_lines.nonlocals )) -> Env = Env;
 /* line 888: */
A_CLOSURE( FGJAOSF_obey, GGJAOSF_obey, HGJAOSF_obey );
(( HGJAOSF_obey * ) ( FGJAOSF_obey.nonlocals )) -> Env = Env;
(( HGJAOSF_obey * ) ( FGJAOSF_obey.nonlocals )) -> BFJAOSF_msg = (&BFJAOSF_msg);
(( HGJAOSF_obey * ) ( FGJAOSF_obey.nonlocals )) -> FGJAOSF_obey = FGJAOSF_obey;
(( HGJAOSF_obey * ) ( FGJAOSF_obey.nonlocals )) -> DFJAOSF_input_lines = DFJAOSF_input_lines;
 /* line 932: */
 /* line 933: */
 /* line 934: */
A_CLOSURE( MHJAOSF_shell, NHJAOSF_shell, OHJAOSF_shell );
(( OHJAOSF_shell * ) ( MHJAOSF_shell.nonlocals )) -> Env = Env;
(( OHJAOSF_shell * ) ( MHJAOSF_shell.nonlocals )) -> BFJAOSF_msg = (&BFJAOSF_msg);
(( OHJAOSF_shell * ) ( MHJAOSF_shell.nonlocals )) -> FGJAOSF_obey = FGJAOSF_obey;
 /* line 969: */
A_CLOSURE( XIJAOSF_anonymous, YIJAOSF_anonymous, ZIJAOSF_anonymous );
(( ZIJAOSF_anonymous * ) ( XIJAOSF_anonymous.nonlocals )) -> DFJAOSF_input_lines = DFJAOSF_input_lines;
(( ZIJAOSF_anonymous * ) ( XIJAOSF_anonymous.nonlocals )) -> Env = Env;
(( ZIJAOSF_anonymous * ) ( XIJAOSF_anonymous.nonlocals )) -> ZEJAOSF_restart = ZEJAOSF_restart;
BFJAOSF_msg = XIJAOSF_anonymous;
 /* line 1003: */
 /* line 1005: */
AFJAOSF_restart:
 /* line 1007: */
for ( ;; )
{ 
 /* line 1012: */
FKJAOSF = (*(&(Env->Set_default_msg))) ;
A_CALLPROC(FKJAOSF,(A_UNITE(GKJAOSF,mode1,1,BFJAOSF_msg)),(A_UNITE(GKJAOSF,mode1,1,BFJAOSF_msg),(FKJAOSF).nonlocals));
 /* line 1015: */
 /* line 1016: */
A_CALLPROC(MHJAOSF_shell,( &IKJAOSF),( &IKJAOSF,(MHJAOSF_shell).nonlocals));
EKJAOSF_continuation = IKJAOSF ;
HKJAOSF = ((*(&((&EKJAOSF_continuation)->C)))==SAIAOSF_continue.C);
if ( !HKJAOSF ) break;
/*SKIP*/;
}
 /* line 1018: */
JKJAOSF = (*(&(Env->Set_default_msg))) ;
A_CALLPROC(JKJAOSF,(A_EMPTY(KKJAOSF,2)),(A_EMPTY(KKJAOSF,2),(JKJAOSF).nonlocals));
 /* line 1020: */
 /* line 1021: */
 /* line 1027: */
LKJAOSF = EKJAOSF_continuation;
} 
A_PROC_EXIT(interpret_commands);
*ReturnedValue = (LKJAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void YYHAOSF(void)   /* initialise DECS command */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","command.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/commandreader.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/commandsyntax.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/basics.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/osinterface.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_225  LZHAOSF;  /* avoid structure result */
A68_BITS * OZHAOSF;  /* YIELD */
A68_217  PZHAOSF;  /* clause result */
A68_BITS * SZHAOSF;  /* YIELD */
A68_217  TZHAOSF;  /* clause result */
A68_BITS * WZHAOSF;  /* YIELD */
A68_217  XZHAOSF;  /* clause result */
A68_BITS * AAIAOSF;  /* YIELD */
A68_217  BAIAOSF;  /* clause result */
A68_BITS * EAIAOSF;  /* YIELD */
A68_217  FAIAOSF;  /* clause result */
A68_BITS * IAIAOSF;  /* YIELD */
A68_217  JAIAOSF;  /* clause result */
A68_BITS * MAIAOSF;  /* YIELD */
A68_217  NAIAOSF;  /* clause result */
A68_INT * QAIAOSF;  /* YIELD */
A68_216  RAIAOSF;  /* clause result */
A68_INT * UAIAOSF;  /* YIELD */
A68_216  VAIAOSF;  /* clause result */
A68_INT * YAIAOSF;  /* YIELD */
A68_216  ZAIAOSF;  /* clause result */
A68_INT * CBIAOSF;  /* YIELD */
A68_216  DBIAOSF;  /* clause result */
A68_INT * GBIAOSF;  /* YIELD */
A68_216  HBIAOSF;  /* clause result */
A68_241  ADIAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JSFAOSF();   /* USE commandreader */
EEFAOSF();   /* USE commandsyntax */
CFHAOSF();   /* USE basics */
IPEAOSF();   /* USE osinterface */
ZRAAOSF();   /* USE messageproc */
QMDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/command.a68";
A_config.translation_time = "Sun Apr 18 20:07:50 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "XYHAOSF (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:50 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS command);
UEAALIB_a68config(LGAALIB_configinfo, CZHAOSF);
 /* line 81: */
 /* line 149: */
 /* line 176: */
 /* line 177: */
HZHAOSF_generator( A68_TRUE, &LZHAOSF );
KZHAOSF_nullcommands = LZHAOSF;
 /* line 178: */
 /* line 183: */
{ 
OZHAOSF = (&((&NZHAOSF_a)->A)) ;
(*OZHAOSF) = 0XfU;
PZHAOSF = NZHAOSF_a;
} 
QZHAOSF_normalaccess = PZHAOSF;
 /* line 184: */
{ 
SZHAOSF = (&((&RZHAOSF_a)->A)) ;
(*SZHAOSF) = 0XbU;
TZHAOSF = RZHAOSF_a;
} 
UZHAOSF_hiddenaccess = TZHAOSF;
 /* line 185: */
{ 
WZHAOSF = (&((&VZHAOSF_a)->A)) ;
(*WZHAOSF) = 0X7U;
XZHAOSF = VZHAOSF_a;
} 
YZHAOSF_secretaccess = XZHAOSF;
 /* line 186: */
{ 
AAIAOSF = (&((&ZZHAOSF_a)->A)) ;
(*AAIAOSF) = 0XdU;
BAIAOSF = ZZHAOSF_a;
} 
CAIAOSF_privateaccess = BAIAOSF;
 /* line 187: */
{ 
EAIAOSF = (&((&DAIAOSF_a)->A)) ;
(*EAIAOSF) = 0X9U;
FAIAOSF = DAIAOSF_a;
} 
GAIAOSF_hiddenprivateaccess = FAIAOSF;
 /* line 188: */
{ 
IAIAOSF = (&((&HAIAOSF_a)->A)) ;
(*IAIAOSF) = 0X5U;
JAIAOSF = HAIAOSF_a;
} 
KAIAOSF_secretprivateaccess = JAIAOSF;
 /* line 189: */
{ 
MAIAOSF = (&((&LAIAOSF_a)->A)) ;
(*MAIAOSF) = 0X0U;
NAIAOSF = LAIAOSF_a;
} 
OAIAOSF_noaccess = NAIAOSF;
 /* line 191: */
{ 
QAIAOSF = (&((&PAIAOSF_c)->C)) ;
(*QAIAOSF) = 1;
RAIAOSF = PAIAOSF_c;
} 
SAIAOSF_continue = RAIAOSF;
 /* line 192: */
{ 
UAIAOSF = (&((&TAIAOSF_c)->C)) ;
(*UAIAOSF) = 2;
VAIAOSF = TAIAOSF_c;
} 
WAIAOSF_return = VAIAOSF;
 /* line 193: */
{ 
YAIAOSF = (&((&XAIAOSF_c)->C)) ;
(*YAIAOSF) = 3;
ZAIAOSF = XAIAOSF_c;
} 
ABIAOSF_finish = ZAIAOSF;
 /* line 194: */
{ 
CBIAOSF = (&((&BBIAOSF_c)->C)) ;
(*CBIAOSF) = 4;
DBIAOSF = BBIAOSF_c;
} 
EBIAOSF_quit = DBIAOSF;
 /* line 195: */
{ 
GBIAOSF = (&((&FBIAOSF_c)->C)) ;
(*GBIAOSF) = 0;
HBIAOSF = FBIAOSF_c;
} 
IBIAOSF_not_found = HBIAOSF;
 /* line 197: */
 /* line 204: */
 /* line 240: */
 /* line 242: */
ADIAOSF.fn.fn_global = PBIAOSF_add;
ADIAOSF.nonlocals = A68_NIL;
ZCIAOSF_add = (ADIAOSF);
 /* line 244: */
 /* line 246: */
 /* line 249: */
 /* line 251: */
 /* line 254: */
 /* line 258: */
 /* line 268: */
 /* line 278: */
 /* line 291: */
 /* line 295: */
 /* line 300: */
 /* line 310: */
 /* line 315: */
 /* line 325: */
 /* line 342: */
 /* line 370: */
 /* line 382: */
 /* line 401: */
 /* line 449: */
 /* line 482: */
 /* line 491: */
 /* line 558: */
 /* line 583: */
 /* line 690: */
 /* line 737: */
 /* line 845: */
 /* line 1042: */
A_PROC_EXIT(DECS command);
} 
#undef NL
/* end of translation of command.a68 */
