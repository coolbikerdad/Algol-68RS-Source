/* UNAME:ISFAOSF */
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
A_VECTOR(struct A68t159 ,A68t158);
typedef struct A68t158  A68_158 ;    /* VECTOR [] MODE159 */
struct A68t157{
A68_BITS  Type;
A_PAD_BITS(PAD_36)
struct A68t158  Elements;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(BITS,REF MODE158)  */
struct A68t159 { A68_INT mode; union {
A68_INT * mode1;
struct A68t157  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t159  A68_159 ;    /* UNION(REF INT,MODE157)  */
struct A68t160{
A68_INT  Sort;
A_PAD_INT(PAD_37)
A68_VC  Value;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t160 ,A68t161);
typedef struct A68t161  A68_161 ;    /* VECTOR [] MODE160 */
A_VECTOR(struct A68t162 ,A68t164);
typedef struct A68t164  A68_164 ;    /* VECTOR [] MODE162 */
struct A68t163{
A68_INT  Choice;
A_PAD_INT(PAD_38)
struct A68t164  Params;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT,REF MODE164)  */
struct A68t162 { A68_INT mode; union {
struct A68t163  mode1;
struct A68t160  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t162  A68_162 ;    /* UNION(MODE163,MODE160)  */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE97) REF MODE26 */
struct A68t165 { A68_INT mode; union {
struct A68t166  mode1;
A68_INT * mode2;
struct A68t157  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t165  A68_165 ;    /* UNION(MODE166,REF INT,MODE157)  */
struct A68t167{
A68_INT * Sort;
struct A68t165  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(REF INT,MODE165,REF MODE26,REF MODE26)  */
struct A68t168{
struct A68t167  Rule;
struct A68t168 * Rest;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE167,REF MODE168)  */

A_PROCEDURE(A68_BOOL ,A68t169,(struct A68t157 ),(struct A68t157 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE157) BOOL */

A_PROCEDURE(A68_VOID ,A68t170,(struct A68t158 ,struct A68t157 *),(struct A68t158 ,struct A68t157 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE158) MODE157 */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t159 ,struct A68t157 *),(struct A68t159 ,struct A68t157 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE159) MODE157 */
struct A68t173 ;

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t159 ,struct A68t173 ,A68_VC *),(struct A68t159 ,struct A68t173 ,A68_VC *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE159,REF MODE173) REF MODE26 */
A_VECTOR(struct A68t167 ,A68t173);
typedef struct A68t173  A68_173 ;    /* VECTOR [] MODE167 */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t34 *,struct A68t173 ),(struct A68t34 *,struct A68t173 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(REF MODE34,REF MODE173) VOID */
struct A68t176 ;

A_PROCEDURE(struct A68t168 *,A68t175,(struct A68t168 *,struct A68t176 ),(struct A68t168 *,struct A68t176 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE168,MODE176) REF MODE168 */
A_VECTOR(struct A68t177 ,A68t176);
typedef struct A68t176  A68_176 ;    /* VECTOR [] MODE177 */
struct A68t177{
A68_INT * No;
struct A68t165  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(REF INT,MODE165,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t162 ,struct A68t161 *),(struct A68t162 ,struct A68t161 *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE162) REF MODE161 */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE142) VOID */

A_PROCEDURE(A68_VOID ,A68t180,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,63,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 63 CHAR */

A_PROCEDURE(A68_BOOL ,A68t182,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t183,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t184,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(CHAR) CHAR */
struct A68t185{
A68_VC  Line;
struct A68t185 * Rest;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(REF MODE26,REF MODE185)  */

A_PROCEDURE(A68_INT ,A68t187,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t186{
A68_VC  Rdbuffer;
struct A68t187  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_39)
A68_INT  Rdcharno;
A_PAD_INT(PAD_40)
A68_INT  Start_of_word;
A_PAD_INT(PAD_41)
struct A68t185 * Stack;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(REF MODE26,MODE187,INT,INT,INT,REF MODE185)  */

A_PROCEDURE(struct A68t186 *,A68t188,(A68_VC ,struct A68t187 ),(A68_VC ,struct A68t187 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE26,MODE187) REF MODE186 */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE186) VOID */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_INT ,A68t191,(struct A68t185 *,A68_INT ),(struct A68t185 *,A68_INT ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE185,INT) INT */

A_PROCEDURE(A68_VOID ,A68t192,(A68_BOOL ,struct A68t102 *),(A68_BOOL ,struct A68t102 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(BOOL) MODE102 */

A_PROCEDURE(A68_CHAR ,A68t193,(A68_BOOL ,struct A68t97 ),(A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(BOOL,MODE97) CHAR */

A_PROCEDURE(A68_CHAR ,A68t194,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE97) CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_BOOL ,A68t197,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t173 ,struct A68t159 ,struct A68t97 ,struct A68t162 *),(struct A68t173 ,struct A68t159 ,struct A68t97 ,struct A68t162 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE173,MODE159,MODE97) MODE162 */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t159 ,A68_VC *),(struct A68t159 ,A68_VC *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE159) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE85) VOID */
A_ISTRUCT(struct A68t52 ,2,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,8,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_BOOL ,A68t203,(struct A68t162 ),(struct A68t162 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE162) BOOL */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t159 ,A68_BOOL ,struct A68t162 *),(struct A68t159 ,A68_BOOL ,struct A68t162 *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE159,BOOL) MODE162 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t159 ,struct A68t162 ),(struct A68t159 ,struct A68t162 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE159,MODE162) VOID */
A_ISTRUCT(A68_CHAR ,26,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t158 ,A68_BOOL ,struct A68t162 *),(struct A68t158 ,A68_BOOL ,struct A68t162 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE158,BOOL) MODE162 */
A_ISTRUCT(A68_CHAR ,14,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t211,(A68_BOOL ,struct A68t164 *),(A68_BOOL ,struct A68t164 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(BOOL) MODE164 */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t157 ,A68_BOOL ,struct A68t162 *),(struct A68t157 ,A68_BOOL ,struct A68t162 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE157,BOOL) MODE162 */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t157 ,struct A68t162 ,struct A68t163 *),(struct A68t157 ,struct A68t162 ,struct A68t163 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE157,MODE162) MODE163 */
struct A68t214{
struct A68t162  Param;
struct A68t214 * Rest;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE162,REF MODE214)  */
A_ISTRUCT(A68_CHAR ,11,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,37,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t223);
typedef struct A68t223  A68_223 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t224,(A68_VC *),(A68_VC *,void *));
typedef struct A68t224  A68_224 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t225,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t226);
typedef struct A68t226  A68_226 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t160 ,A68_INT ,struct A68t97 ),(struct A68t160 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE160,INT,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,33,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 33 CHAR */
struct A68t229{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_42)
A68_BOOL  Check;
A_PAD_BOOL(PAD_43)
};
typedef struct A68t229  A68_229 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t229 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t229 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE229,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t231,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(CHAR,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,185,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 185 CHAR */

A_PROCEDURE(A68_BOOL ,A68t233,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE160) BOOL */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t160 ,struct A68t97 ,A68_VC *),(struct A68t160 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE160,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t235,(void),(void *));
typedef struct A68t235  A68_235 ;    /* PROC CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandsyntax --- */
extern A68_162  TEFAOSF_no_parameters;
extern A68_BOOL  ZEFAOSF_is_alt(struct A68t157 );
extern A68_BOOL  CFFAOSF_is_opt(struct A68t157 );
extern A68_BOOL  FFFAOSF_is_star(struct A68t157 );
extern A68_VOID  IFFAOSF_alt(struct A68t158 ,A68_157 *);
extern A68_VOID  TFFAOSF_prod(struct A68t158 ,A68_157 *);
extern A68_VOID  PHFAOSF_show_syntax(struct A68t159 ,struct A68t173 ,A68_VC *);
/* --- End of imports from commandsyntax --- */


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
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_92  IUAAOSF_system;
extern A68_92  MUAAOSF_user;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  CHDAOSF_nilstr;
extern A68_VC  IHDAOSF_nullstr;
extern A68_VOID  NCAAOSF_makervc(A68_CHAR ,A68_VC *);
extern A68_VOID  RODAOSF_(A68_CHAR ,A68_INT ,A68_VC *);
extern A68_VOID  PKDAOSF_newline(struct A68t34 *);
extern A68_VOID  KYDAOSF_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  YCEAOSF_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void EEFAOSF(void);   /* commandsyntax */
extern void IPEAOSF(void);   /* osinterface */
extern void ZRAAOSF(void);   /* messageproc */
extern void QMDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_181   MSFAOSF = {"$Id: commandreader.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,NSFAOSF,MSFAOSF,63)
#define VSFAOSF_sp ' '
#define WSFAOSF_sep ','
static A68_114   XSFAOSF = {" <- "}; 
A_GISVEC(A68_VC ,YSFAOSF,XSFAOSF,4)
A68_VC  ZSFAOSF_arrow_str;
#define CUFAOSF_no_lines (A68_185 *)A68_NIL
static A68_186  DUFAOSF_current_details;
static A68_187 * EUFAOSF_rdline;
A68_VC * FUFAOSF_rdbuffer;
A68_INT * GUFAOSF_rdcharend;
A68_INT * HUFAOSF_rdcharno;
A68_INT * IUFAOSF_start_of_word;
static A68_185 ** JUFAOSF_line_stack;
static A68_195   VWFAOSF = {"back_space:  no characters left"}; 
A_GISVEC(A68_VC ,WWFAOSF,VWFAOSF,31)
static A68_196   AXFAOSF = {"same_char:  index zero"}; 
A_GISVEC(A68_VC ,BXFAOSF,AXFAOSF,22)
A68_BOOL  KXFAOSF_debug_reader;
static A68_202   NYFAOSF = {"Reading "}; 
A_GISVEC(A68_VC ,OYFAOSF,NYFAOSF,8)
static A68_206   NZFAOSF = {"Wrong sort of parameter - "}; 
A_GISVEC(A68_VC ,OZFAOSF,NZFAOSF,26)
static A68_207   UZFAOSF = {" expected"}; 
A_GISVEC(A68_VC ,VZFAOSF,UZFAOSF,9)
static A68_210   IAGAOSF = {" Alternatives "}; 
A_GISVEC(A68_VC ,JAGAOSF,IAGAOSF,14)
static A68_207   JCGAOSF = {" Product "}; 
A_GISVEC(A68_VC ,KCGAOSF,JCGAOSF,9)
static A68_210   FEGAOSF = {"More than one "}; 
A_GISVEC(A68_VC ,GEGAOSF,FEGAOSF,14)
static A68_215   RFGAOSF = {" Read rule "}; 
A_GISVEC(A68_VC ,SFGAOSF,RFGAOSF,11)
static A68_216   CGGAOSF = {"read_rule - illegal reader: "}; 
A_GISVEC(A68_VC ,DGGAOSF,CGGAOSF,28)
static A68_217   OGGAOSF = {"Wrong sort of parameter"}; 
A_GISVEC(A68_VC ,PGGAOSF,OGGAOSF,23)
static A68_218   UGGAOSF = {"Nothing read"}; 
A_GISVEC(A68_VC ,VGGAOSF,UGGAOSF,12)
static A68_219   CHGAOSF = {" \""}; 
A_GISVEC(A68_VC ,DHGAOSF,CHGAOSF,2)
static A68_221   YIGAOSF = {"This command does not have parameters"}; 
A_GISVEC(A68_VC ,ZIGAOSF,YIGAOSF,37)
static A68_206   IJGAOSF = {"Wrong sort of parameter - "}; 
A_GISVEC(A68_VC ,JJGAOSF,IJGAOSF,26)
static A68_207   OJGAOSF = {" expected"}; 
A_GISVEC(A68_VC ,PJGAOSF,OJGAOSF,9)
static A68_222   VJGAOSF = {"Unexpected parameter"}; 
A_GISVEC(A68_VC ,WJGAOSF,VJGAOSF,20)
static A68_223   AKGAOSF = {"End"}; 
A_GISVEC(A68_VC ,BKGAOSF,AKGAOSF,3)
static A68_196   WKGAOSF = {"Unexpected character \""}; 
A_GISVEC(A68_VC ,XKGAOSF,WKGAOSF,22)
static A68_226   BLGAOSF = {"\" in "}; 
A_GISVEC(A68_VC ,CLGAOSF,BLGAOSF,5)
static A68_228   OLGAOSF = {"check_no:  wrong parameter sort: "}; 
A_GISVEC(A68_VC ,PLGAOSF,OLGAOSF,33)
A68_229  YLGAOSF_first_and_check;
A68_229  AMGAOSF_get_first;
A68_229  CMGAOSF_check_end;
A68_229  EMGAOSF_not_first;
static A68_210   ENGAOSF = {"<ELLA-command>"}; 
A_GISVEC(A68_VC ,FNGAOSF,ENGAOSF,14)
A68_VC  GNGAOSF_command_name_str;
static A68_232   HNGAOSF = {"An ELLA command must start with a letter which may be followed by further letters, digits of visible space characters (\"_\").  Commands are not case sensitive but certain parameters are."}; 
A_GISVEC(A68_VC ,INGAOSF,HNGAOSF,185)
A68_VC  JNGAOSF_command_name_help;
A68_INT  KNGAOSF_command_name_no;
A68_159  MNGAOSF_command_name_syntax;
static A68_207   HPGAOSF = {" expected"}; 
A_GISVEC(A68_VC ,IPGAOSF,HPGAOSF,9)
typedef struct   /* env of non-global proc */
{
A68_102 * TUFAOSF_ans;
A68_191  WUFAOSF_add;
} YUFAOSF_add;
typedef struct   /* env of non-global proc */
{
A68_INT * PXFAOSF_indent;
} SXFAOSF_inc_indent;
typedef struct   /* env of non-global proc */
{
A68_INT * PXFAOSF_indent;
} VXFAOSF_dec_indent;
typedef struct   /* env of non-global proc */
{
A68_173  Analysers;
} ZXFAOSF_show;
typedef struct   /* env of non-global proc */
{
A68_INT * PXFAOSF_indent;
} FYFAOSF_print;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_173  Analysers;
} LZFAOSF_error;
typedef struct   /* env of non-global proc */
{
A68_142  QXFAOSF_inc_indent;
A68_200  DYFAOSF_print;
A68_199  XXFAOSF_show;
A68_160  VYFAOSF_illegal;
A68_204 * GZFAOSF_read_rule;
A68_142  TXFAOSF_dec_indent;
A68_205  JZFAOSF_error;
} FAGAOSF_alternative;
typedef struct   /* env of non-global proc */
{
A68_142  QXFAOSF_inc_indent;
A68_200  DYFAOSF_print;
A68_199  XXFAOSF_show;
A68_204 * GZFAOSF_read_rule;
A68_205  JZFAOSF_error;
A68_142  TXFAOSF_dec_indent;
} GCGAOSF_product;
typedef struct   /* env of non-global proc */
{
A68_209  DAGAOSF_alternative;
A68_209  ECGAOSF_product;
} VDGAOSF_alt_or_prod;
typedef struct   /* env of non-global proc */
{
A68_142  QXFAOSF_inc_indent;
A68_200  DYFAOSF_print;
A68_199  XXFAOSF_show;
A68_212  TDGAOSF_alt_or_prod;
A68_142  TXFAOSF_dec_indent;
} DEGAOSF_more_than_one;
typedef struct   /* env of non-global proc */
{
A68_142  QXFAOSF_inc_indent;
A68_200  DYFAOSF_print;
A68_199  XXFAOSF_show;
A68_173  Analysers;
A68_97  Msg;
A68_204 * GZFAOSF_read_rule;
A68_212  TDGAOSF_alt_or_prod;
A68_213  BEGAOSF_more_than_one;
A68_142  TXFAOSF_dec_indent;
} OFGAOSF_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} YNGAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} XOGAOSF_first;
typedef struct   /* env of non-global proc */
{
A68_INT  N;
A_PAD_INT(PAD_44)
} CVFAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} DBGAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} UBGAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_158  Words;
} WCGAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * REGAOSF_n;
} BFGAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} XHGAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} MIGAOSF_generator;

A68_BOOL  QSFAOSF_instring(A68_CHAR  C, A68_VC  Str);

A68_BOOL  BTFAOSF_space(A68_CHAR  C);

A68_BOOL  ETFAOSF_separator(A68_CHAR  C);

A68_BOOL  ITFAOSF_visible_space(A68_CHAR  C);

A68_BOOL  LTFAOSF_digit(A68_CHAR  C);

A68_BOOL  PTFAOSF_letter(A68_CHAR  C);

A68_BOOL  TTFAOSF_bold(A68_CHAR  C);

A68_CHAR  XTFAOSF_upper_case(A68_CHAR  C);

A68_CHAR  AUFAOSF_lower_case(A68_CHAR  C);

A68_186 * MUFAOSF_set_reader(A68_VC  Buffer, A68_187  Reader);

A68_VOID  RUFAOSF_reset_reader(A68_186  Details);

A68_VOID  SUFAOSF_get_input_lines(A68_102  *ReturnedValue);

A_STATIC A68_INT  XUFAOSF_add(A68_185 * Stack, A68_INT  N, void *NonLocals);

A_STATIC A68_VOID  BVFAOSF_generator(A68_BOOL  ZUFAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A68_VOID  OVFAOSF_skip_command(void);

A_STATIC A68_CHAR  SVFAOSF_rdchar(A68_BOOL  Stack, A68_97  Msg);

A68_CHAR  JWFAOSF_next_char(A68_97  Msg);

A68_CHAR  MWFAOSF_first_char(A68_97  Msg);

A68_CHAR  QWFAOSF_next_first_char(A68_97  Msg);

A68_VOID  UWFAOSF_put_back_char(A68_97  Msg);

A68_CHAR  ZWFAOSF_same_char(A68_97  Msg);

A68_BOOL  FXFAOSF_check_for_more(A68_97  Msg);

A68_VOID  JXFAOSF_skip_parameter(A68_97  Msg);

A68_VOID  OXFAOSF_read_parameters(A68_173  Analysers, A68_159  Syntax, A68_97  Msg, A68_162  *ReturnedValue);

A_STATIC A68_VOID  RXFAOSF_inc_indent(void *NonLocals);

A_STATIC A68_VOID  UXFAOSF_dec_indent(void *NonLocals);

A_STATIC A68_VOID  YXFAOSF_show(A68_159  Syntax, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EYFAOSF_print(A68_85  Line, void *NonLocals);

A_STATIC A68_BOOL  XYFAOSF_is_illegal(A68_162  P);

A_STATIC A68_BOOL  CZFAOSF_is_legal(A68_162  P);

A_STATIC A68_VOID  KZFAOSF_error(A68_159  Syntax, A68_162  Param, void *NonLocals);

A_STATIC A68_VOID  EAGAOSF_alternative(A68_158  Choices, A68_BOOL  Expected, A68_162  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CBGAOSF_generator(A68_BOOL  ABGAOSF_anonymous, A68_164  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TBGAOSF_generator(A68_BOOL  RBGAOSF_anonymous, A68_164  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FCGAOSF_product(A68_158  Words, A68_BOOL  Expected, A68_162  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VCGAOSF_generator(A68_BOOL  TCGAOSF_anonymous, A68_164  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UDGAOSF_alt_or_prod(A68_157  Rule, A68_BOOL  Expected, A68_162  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CEGAOSF_more_than_one(A68_157  Rule, A68_162  First, A68_163  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AFGAOSF_generator(A68_BOOL  YEGAOSF_anonymous, A68_164  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NFGAOSF_anonymous(A68_159  Unit, A68_BOOL  Expected, A68_162  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WHGAOSF_generator(A68_BOOL  UHGAOSF_anonymous, A68_164  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LIGAOSF_generator(A68_BOOL  JIGAOSF_anonymous, A68_164  *ReturnedValue, void *NonLocals);

A68_VOID  IKGAOSF_read_failed(A68_VC  *ReturnedValue);

A68_VOID  KKGAOSF_nothing_read(A68_VC  *ReturnedValue);

A68_VOID  RKGAOSF_check_read(A68_VC  Word_read, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  MLGAOSF_check_value(A68_160  V, A68_INT  No, A68_97  Msg);

A68_VOID  IMGAOSF_read_token(A68_229  Rc, A68_VC  Token, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  ANGAOSF_read_char(A68_CHAR  Char, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  ONGAOSF_read_command_name(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XNGAOSF_generator(A68_BOOL  VNGAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  MOGAOSF_is_command_name(A68_160  V);

A68_VOID  QOGAOSF_get_command_name(A68_160  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  TOGAOSF_read_command(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_CHAR  WOGAOSF_first(void *NonLocals);

A_STATIC A68_VOID  BVFAOSF_generator(A68_BOOL  ZUFAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((CVFAOSF_generator *)NonLocals)->x)
{ 
A68_102  DVFAOSF;  /* clause result */
A68_102  EVFAOSF;  /* OPERATORS - dynamic generator */
{ 
EVFAOSF.upb = NL(N) ;
( ZUFAOSF_anonymous? A_VLOC(A68_VC ,EVFAOSF): A_VHEAP(A68_VC ,EVFAOSF) );
DVFAOSF = EVFAOSF;
} 
*ReturnedValue = (DVFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  CBGAOSF_generator(A68_BOOL  ABGAOSF_anonymous, A68_164  *ReturnedValue, void *NonLocals)
#define NL(x) (((DBGAOSF_generator *)NonLocals)->x)
{ 
A68_164  EBGAOSF;  /* clause result */
A68_164  FBGAOSF;  /* OPERATORS - dynamic generator */
{ 
FBGAOSF.upb = 1 ;
( ABGAOSF_anonymous? A_VLOC(A68_162 ,FBGAOSF): A_VHEAP(A68_162 ,FBGAOSF) );
EBGAOSF = FBGAOSF;
} 
*ReturnedValue = (EBGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  TBGAOSF_generator(A68_BOOL  RBGAOSF_anonymous, A68_164  *ReturnedValue, void *NonLocals)
#define NL(x) (((UBGAOSF_generator *)NonLocals)->x)
{ 
A68_164  VBGAOSF;  /* clause result */
A68_164  WBGAOSF;  /* OPERATORS - dynamic generator */
{ 
WBGAOSF.upb = 1 ;
( RBGAOSF_anonymous? A_VLOC(A68_162 ,WBGAOSF): A_VHEAP(A68_162 ,WBGAOSF) );
VBGAOSF = WBGAOSF;
} 
*ReturnedValue = (VBGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VCGAOSF_generator(A68_BOOL  TCGAOSF_anonymous, A68_164  *ReturnedValue, void *NonLocals)
#define NL(x) (((WCGAOSF_generator *)NonLocals)->x)
{ 
A68_164  XCGAOSF;  /* clause result */
A68_164  YCGAOSF;  /* OPERATORS - dynamic generator */
{ 
YCGAOSF.upb = NL(Words).upb ;
( TCGAOSF_anonymous? A_VLOC(A68_162 ,YCGAOSF): A_VHEAP(A68_162 ,YCGAOSF) );
XCGAOSF = YCGAOSF;
} 
*ReturnedValue = (XCGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  AFGAOSF_generator(A68_BOOL  YEGAOSF_anonymous, A68_164  *ReturnedValue, void *NonLocals)
#define NL(x) (((BFGAOSF_generator *)NonLocals)->x)
{ 
A68_164  CFGAOSF;  /* clause result */
A68_164  DFGAOSF;  /* OPERATORS - dynamic generator */
{ 
DFGAOSF.upb = (*NL(REGAOSF_n)) ;
( YEGAOSF_anonymous? A_VLOC(A68_162 ,DFGAOSF): A_VHEAP(A68_162 ,DFGAOSF) );
CFGAOSF = DFGAOSF;
} 
*ReturnedValue = (CFGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  WHGAOSF_generator(A68_BOOL  UHGAOSF_anonymous, A68_164  *ReturnedValue, void *NonLocals)
#define NL(x) (((XHGAOSF_generator *)NonLocals)->x)
{ 
A68_164  YHGAOSF;  /* clause result */
A68_164  ZHGAOSF;  /* OPERATORS - dynamic generator */
{ 
ZHGAOSF.upb = 1 ;
( UHGAOSF_anonymous? A_VLOC(A68_162 ,ZHGAOSF): A_VHEAP(A68_162 ,ZHGAOSF) );
YHGAOSF = ZHGAOSF;
} 
*ReturnedValue = (YHGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  LIGAOSF_generator(A68_BOOL  JIGAOSF_anonymous, A68_164  *ReturnedValue, void *NonLocals)
#define NL(x) (((MIGAOSF_generator *)NonLocals)->x)
{ 
A68_164  NIGAOSF;  /* clause result */
A68_164  OIGAOSF;  /* OPERATORS - dynamic generator */
{ 
OIGAOSF.upb = 1 ;
( JIGAOSF_anonymous? A_VLOC(A68_162 ,OIGAOSF): A_VHEAP(A68_162 ,OIGAOSF) );
NIGAOSF = OIGAOSF;
} 
*ReturnedValue = (NIGAOSF);
return;
} 
#undef NL

A_STATIC A68_INT  XUFAOSF_add(A68_185 * Stack, A68_INT  N, void *NonLocals)
#define NL(x) (((YUFAOSF_add *)NonLocals)->x)
{ 
A68_192  AVFAOSF_generator;   /* proc value of non-global proc */
A68_102  FVFAOSF;  /* avoid structure result */
A68_INT  GVFAOSF;  /* clause result */
A68_INT  HVFAOSF_ind;
A68_VC * IVFAOSF;  /* YIELD */
A_PROC_ENTRY(add);
 /* line 156: */
 /* line 157: */
if ( (Stack==CUFAOSF_no_lines) )
{ 
A_CLOSURE( AVFAOSF_generator, BVFAOSF_generator, CVFAOSF_generator );
(( CVFAOSF_generator * ) ( AVFAOSF_generator.nonlocals )) -> N = N;
A_CALLPROC(AVFAOSF_generator,(A68_FALSE, &FVFAOSF),(A68_FALSE, &FVFAOSF,(AVFAOSF_generator).nonlocals));
(*NL(TUFAOSF_ans)) = FVFAOSF;
 /* line 158: */
GVFAOSF = 1;
} 
else
{ 
HVFAOSF_ind = A_CALLPROC(NL(WUFAOSF_add),((*(&(Stack->Rest))), (N+1)),((*(&(Stack->Rest))), (N+1),(NL(WUFAOSF_add)).nonlocals));
 /* line 159: */
IVFAOSF = (&A_VINDEX((*NL(TUFAOSF_ans)),HVFAOSF_ind)) ;
(*IVFAOSF) = (*(&(Stack->Line)));
 /* line 160: */
 /* line 161: */
GVFAOSF = (HVFAOSF_ind+1);
} 
A_PROC_EXIT(add);
return( GVFAOSF );
} 
#undef NL

A_STATIC A68_VOID  RXFAOSF_inc_indent(void *NonLocals)
#define NL(x) (((SXFAOSF_inc_indent *)NonLocals)->x)
{ 
A_PROC_ENTRY(inc_indent);
(*NL(PXFAOSF_indent))+=2;
A_PROC_EXIT(inc_indent);
return;
} 
#undef NL

A_STATIC A68_VOID  UXFAOSF_dec_indent(void *NonLocals)
#define NL(x) (((VXFAOSF_dec_indent *)NonLocals)->x)
{ 
A_PROC_ENTRY(dec_indent);
(*NL(PXFAOSF_indent))-=2;
A_PROC_EXIT(dec_indent);
return;
} 
#undef NL

A_STATIC A68_VOID  YXFAOSF_show(A68_159  Syntax, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZXFAOSF_show *)NonLocals)->x)
{ 
A68_VC  AYFAOSF;  /* clause result */
A68_VC  BYFAOSF;  /* avoid structure result */
A_PROC_ENTRY(show);
PHFAOSF_show_syntax( Syntax, NL(Analysers), &BYFAOSF );
AYFAOSF = BYFAOSF;
A_PROC_EXIT(show);
*ReturnedValue = (AYFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  EYFAOSF_print(A68_85  Line, void *NonLocals)
#define NL(x) (((FYFAOSF_print *)NonLocals)->x)
{ 
A68_201  GYFAOSF;  /* collateral clause result */
A68_52  HYFAOSF;  /* OPERATORS - mode -> union mode */
A68_56  IYFAOSF;  /* procedure value */
A68_VC  JYFAOSF;  /* avoid structure result */
A68_52  KYFAOSF;  /* OPERATORS - mode -> union mode */
A68_85  LYFAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(print);
 /* line 295: */
{ 
KYDAOSF_put(DREAOSF_screen, Line);
IYFAOSF.fn.fn_global = PKDAOSF_newline;
IYFAOSF.nonlocals = A68_NIL;
GYFAOSF.data[0] = A_UNITE(HYFAOSF,mode12,12,IYFAOSF);
RODAOSF_( ' ', (*NL(PXFAOSF_indent)), &JYFAOSF );
GYFAOSF.data[1] = A_UNITE(KYFAOSF,mode7,7,JYFAOSF);
KYDAOSF_put(DREAOSF_screen, A_HISVEC(LYFAOSF,GYFAOSF,2,A68_52 ));
} 
A_PROC_EXIT(print);
return;
} 
#undef NL

A_STATIC A68_BOOL  XYFAOSF_is_illegal(A68_162  P)
{ 
A68_162  YYFAOSF;  /* united object - for case conformity */
A68_160  ZYFAOSF_v;
A68_BOOL  AZFAOSF;  /* clause result */
A_PROC_ENTRY(is_illegal);
 /* line 302: */
YYFAOSF = P ;
switch ( YYFAOSF.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
ZYFAOSF_v = (YYFAOSF.data.mode2);
AZFAOSF = (ZYFAOSF_v.Sort==(-1));
break;
default: 
AZFAOSF = A68_FALSE;
break;
} 
A_PROC_EXIT(is_illegal);
return( AZFAOSF );
} 
#undef NL

A_STATIC A68_BOOL  CZFAOSF_is_legal(A68_162  P)
{ 
A68_162  DZFAOSF;  /* united object - for case conformity */
A68_160  EZFAOSF_v;
A68_BOOL  FZFAOSF;  /* clause result */
A_PROC_ENTRY(is_legal);
 /* line 305: */
DZFAOSF = P ;
switch ( DZFAOSF.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
EZFAOSF_v = (DZFAOSF.data.mode2);
FZFAOSF = (EZFAOSF_v.Sort>0);
break;
default: 
FZFAOSF = A68_TRUE;
break;
} 
A_PROC_EXIT(is_legal);
return( FZFAOSF );
} 
#undef NL

A_STATIC A68_VOID  KZFAOSF_error(A68_159  Syntax, A68_162  Param, void *NonLocals)
#define NL(x) (((LZFAOSF_error *)NonLocals)->x)
{ 
A68_208  MZFAOSF;  /* collateral clause result */
A68_52  PZFAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QZFAOSF;  /* YIELD */
A68_52  RZFAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  SZFAOSF;  /* avoid structure result */
A68_52  TZFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  WZFAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XZFAOSF;  /* YIELD */
A68_85  YZFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ZZFAOSF;  /* avoid structure result */
A68_46  AAGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(error);
 /* line 311: */
 /* line 312: */
if ( XYFAOSF_is_illegal(Param) )
{ 
JXFAOSF_skip_parameter(NL(Msg));
 /* line 313: */
 /* line 314: */
 /* line 315: */
QZFAOSF = OZFAOSF ;
MZFAOSF.data[0] = A_UNITE(PZFAOSF,mode7,7,QZFAOSF);
} 
else
{ 
 /* line 316: */
MZFAOSF.data[0] = A_UNITE(RZFAOSF,mode7,7,IHDAOSF_nullstr);
} 
PHFAOSF_show_syntax( Syntax, NL(Analysers), &SZFAOSF );
MZFAOSF.data[1] = A_UNITE(TZFAOSF,mode7,7,SZFAOSF);
XZFAOSF = VZFAOSF ;
MZFAOSF.data[2] = A_UNITE(WZFAOSF,mode7,7,XZFAOSF);
 /* line 317: */
YCEAOSF_oneline( A_HISVEC(YZFAOSF,MZFAOSF,3,A68_52 ), &ZZFAOSF );
A_CALLPROC(NL(Msg),(MUAAOSF_user, A_HVEC(AAGAOSF,ZZFAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(AAGAOSF,ZZFAOSF,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(error);
return;
} 
#undef NL

A_STATIC A68_VOID  EAGAOSF_alternative(A68_158  Choices, A68_BOOL  Expected, A68_162  *ReturnedValue, void *NonLocals)
#define NL(x) (((FAGAOSF_alternative *)NonLocals)->x)
{ 
A68_208  GAGAOSF;  /* collateral clause result */
A68_52  HAGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  KAGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LAGAOSF;  /* YIELD */
A68_157  MAGAOSF;  /* avoid structure result */
A68_159  NAGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  OAGAOSF;  /* avoid structure result */
A68_52  PAGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  QAGAOSF;  /* OPERATORS - istruct -> vector */
A68_162  SAGAOSF;  /* OPERATORS - mode -> union mode */
A68_162  RAGAOSF_p;
A68_INT  TAGAOSF_choice;
A68_159 * UAGAOSF_arm;
A68_INT  VAGAOSF;  /* forall loop counter */
A68_162  WAGAOSF;  /* avoid structure result */
A68_162  XAGAOSF;  /* united object - for case conformity */
A68_160  YAGAOSF_v;
A68_163  ZAGAOSF;  /* collateral clause result */
A68_211  BBGAOSF_generator;   /* proc value of non-global proc */
A68_164  GBGAOSF;  /* avoid structure result */
A68_162  HBGAOSF;  /* OPERATORS - mode -> union mode */
A68_164  IBGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_164  JBGAOSF;  /* OPERATORS - assign op */
A68_162  KBGAOSF;  /* clause result */
A68_162  LBGAOSF;  /* OPERATORS - mode -> union mode */
A68_157  MBGAOSF;  /* avoid structure result */
A68_159  NBGAOSF;  /* OPERATORS - mode -> union mode */
A68_162  OBGAOSF;  /* OPERATORS - mode -> union mode */
A68_163  PBGAOSF_c;
A68_163  QBGAOSF;  /* collateral clause result */
A68_211  SBGAOSF_generator;   /* proc value of non-global proc */
A68_164  XBGAOSF;  /* avoid structure result */
A68_162  YBGAOSF;  /* OPERATORS - mode -> union mode */
A68_164  ZBGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_164  ACGAOSF;  /* OPERATORS - assign op */
A68_162  BCGAOSF;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(alternative);
 /* line 322: */
 /* line 323: */
{ 
 /* line 324: */
if ( KXFAOSF_debug_reader )
{ 
A_CALLPROC(NL(QXFAOSF_inc_indent),(),((NL(QXFAOSF_inc_indent)).nonlocals));
 /* line 325: */
GAGAOSF.data[0] = A_UNITE(HAGAOSF,mode8,8,Expected);
LAGAOSF = JAGAOSF ;
GAGAOSF.data[1] = A_UNITE(KAGAOSF,mode7,7,LAGAOSF);
IFFAOSF_alt( Choices, &MAGAOSF );
A_CALLPROC(NL(XXFAOSF_show),(A_UNITE(NAGAOSF,mode2,2,MAGAOSF), &OAGAOSF),(A_UNITE(NAGAOSF,mode2,2,MAGAOSF), &OAGAOSF,(NL(XXFAOSF_show)).nonlocals));
GAGAOSF.data[2] = A_UNITE(PAGAOSF,mode7,7,OAGAOSF);
 /* line 326: */
A_CALLPROC(NL(DYFAOSF_print),(A_HISVEC(QAGAOSF,GAGAOSF,3,A68_52 )),(A_HISVEC(QAGAOSF,GAGAOSF,3,A68_52 ),(NL(DYFAOSF_print)).nonlocals));
} 
 /* line 328: */
RAGAOSF_p = A_UNITE(SAGAOSF,mode2,2,NL(VYFAOSF_illegal));
 /* line 329: */
TAGAOSF_choice = 0;
 /* line 330: */
VAGAOSF = Choices.upb -1;
UAGAOSF_arm = Choices.data;
for (;VAGAOSF-- >= 0;
(UAGAOSF_arm++
) )
{
 /* line 331: */
A_CALLPROC((*NL(GZFAOSF_read_rule)),((*UAGAOSF_arm), A68_FALSE, &WAGAOSF),((*UAGAOSF_arm), A68_FALSE, &WAGAOSF,((*NL(GZFAOSF_read_rule))).nonlocals));
if ( !(XYFAOSF_is_illegal(RAGAOSF_p = WAGAOSF)) ) break;
TAGAOSF_choice+=1;
}
 /* line 333: */
if ( KXFAOSF_debug_reader )
{ 
A_CALLPROC(NL(TXFAOSF_dec_indent),(),((NL(TXFAOSF_dec_indent)).nonlocals));
} 
 /* line 334: */
 /* line 335: */
XAGAOSF = RAGAOSF_p ;
switch ( XAGAOSF.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
YAGAOSF_v = (XAGAOSF.data.mode2);
 /* line 336: */
 /* line 337: */
if ( CZFAOSF_is_legal(RAGAOSF_p) )
{ 
ZAGAOSF.Choice = TAGAOSF_choice;
A_CLOSURE( BBGAOSF_generator, CBGAOSF_generator, DBGAOSF_generator );
 /* line 338: */
A_CALLPROC(BBGAOSF_generator,(A68_FALSE, &GBGAOSF),(A68_FALSE, &GBGAOSF,(BBGAOSF_generator).nonlocals));
JBGAOSF = A_HVEC(IBGAOSF,A_UNITE(HBGAOSF,mode2,2,YAGAOSF_v),A68_162 ) ;
A_VASSIGN2(JBGAOSF,GBGAOSF,A68_162 ) ;
ZAGAOSF.Params = GBGAOSF;
KBGAOSF = A_UNITE(LBGAOSF,mode1,1,ZAGAOSF);
} 
else
{ 
if ( Expected )
{ 
IFFAOSF_alt( Choices, &MBGAOSF );
A_CALLPROC(NL(JZFAOSF_error),(A_UNITE(NBGAOSF,mode2,2,MBGAOSF), RAGAOSF_p),(A_UNITE(NBGAOSF,mode2,2,MBGAOSF), RAGAOSF_p,(NL(JZFAOSF_error)).nonlocals));
} 
 /* line 339: */
 /* line 340: */
 /* line 341: */
KBGAOSF = A_UNITE(OBGAOSF,mode2,2,YAGAOSF_v);
} 
break;
case 1: /* STRUCT(INT,REF MODE164)  */
PBGAOSF_c = (XAGAOSF.data.mode1);
 /* line 342: */
QBGAOSF.Choice = TAGAOSF_choice;
A_CLOSURE( SBGAOSF_generator, TBGAOSF_generator, UBGAOSF_generator );
 /* line 343: */
A_CALLPROC(SBGAOSF_generator,(A68_FALSE, &XBGAOSF),(A68_FALSE, &XBGAOSF,(SBGAOSF_generator).nonlocals));
ACGAOSF = A_HVEC(ZBGAOSF,A_UNITE(YBGAOSF,mode1,1,PBGAOSF_c),A68_162 ) ;
A_VASSIGN2(ACGAOSF,XBGAOSF,A68_162 ) ;
QBGAOSF.Params = XBGAOSF;
 /* line 344: */
KBGAOSF = A_UNITE(BCGAOSF,mode1,1,QBGAOSF);
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(alternative);
*ReturnedValue = (KBGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  FCGAOSF_product(A68_158  Words, A68_BOOL  Expected, A68_162  *ReturnedValue, void *NonLocals)
#define NL(x) (((GCGAOSF_product *)NonLocals)->x)
{ 
A68_208  HCGAOSF;  /* collateral clause result */
A68_52  ICGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  LCGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MCGAOSF;  /* YIELD */
A68_157  NCGAOSF;  /* avoid structure result */
A68_159  OCGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  PCGAOSF;  /* avoid structure result */
A68_52  QCGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  RCGAOSF;  /* OPERATORS - istruct -> vector */
A68_BOOL  SCGAOSF_should_find;
A68_211  UCGAOSF_generator;   /* proc value of non-global proc */
A68_164  ZCGAOSF;  /* avoid structure result */
A68_164  ADGAOSF_values;
A68_INT  BDGAOSF_index;
A68_159 * CDGAOSF_w;
A68_INT  DDGAOSF;  /* forall loop counter */
A68_INT  EDGAOSF;  /* YIELD */
A68_162 * FDGAOSF_val;
A68_162  GDGAOSF;  /* avoid structure result */
A68_BOOL  HDGAOSF;  /* clause result */
A68_159  IDGAOSF;  /* united object - for case conformity */
A68_157  JDGAOSF_r;
A68_BOOL  KDGAOSF;  /* clause result */
A68_BOOL  LDGAOSF;  /* clause result */
A68_162  MDGAOSF;  /* clause result */
A68_INT  NDGAOSF;  /* YIELD */
A68_163  ODGAOSF;  /* collateral clause result */
A68_164  PDGAOSF;  /* OPERATORS - trim index */
A68_162  QDGAOSF;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(product);
 /* line 349: */
 /* line 353: */
{ 
 /* line 354: */
if ( KXFAOSF_debug_reader )
{ 
A_CALLPROC(NL(QXFAOSF_inc_indent),(),((NL(QXFAOSF_inc_indent)).nonlocals));
 /* line 355: */
HCGAOSF.data[0] = A_UNITE(ICGAOSF,mode8,8,Expected);
MCGAOSF = KCGAOSF ;
HCGAOSF.data[1] = A_UNITE(LCGAOSF,mode7,7,MCGAOSF);
TFFAOSF_prod( Words, &NCGAOSF );
A_CALLPROC(NL(XXFAOSF_show),(A_UNITE(OCGAOSF,mode2,2,NCGAOSF), &PCGAOSF),(A_UNITE(OCGAOSF,mode2,2,NCGAOSF), &PCGAOSF,(NL(XXFAOSF_show)).nonlocals));
HCGAOSF.data[2] = A_UNITE(QCGAOSF,mode7,7,PCGAOSF);
 /* line 356: */
A_CALLPROC(NL(DYFAOSF_print),(A_HISVEC(RCGAOSF,HCGAOSF,3,A68_52 )),(A_HISVEC(RCGAOSF,HCGAOSF,3,A68_52 ),(NL(DYFAOSF_print)).nonlocals));
} 
 /* line 358: */
SCGAOSF_should_find = Expected;
 /* line 359: */
A_CLOSURE( UCGAOSF_generator, VCGAOSF_generator, WCGAOSF_generator );
(( WCGAOSF_generator * ) ( UCGAOSF_generator.nonlocals )) -> Words = Words;
A_CALLPROC(UCGAOSF_generator,(A68_FALSE, &ZCGAOSF),(A68_FALSE, &ZCGAOSF,(UCGAOSF_generator).nonlocals));
ADGAOSF_values = ZCGAOSF;
 /* line 360: */
BDGAOSF_index = 0;
 /* line 362: */
 /* line 363: */
DDGAOSF = Words.upb -1;
CDGAOSF_w = Words.data;
for (;DDGAOSF-- >= 0;
(CDGAOSF_w++
) )
{
 /* line 364: */
EDGAOSF = (BDGAOSF_index+1) ;
FDGAOSF_val = (&A_VINDEX(ADGAOSF_values,EDGAOSF));
 /* line 365: */
A_CALLPROC((*NL(GZFAOSF_read_rule)),((*CDGAOSF_w), SCGAOSF_should_find, &GDGAOSF),((*CDGAOSF_w), SCGAOSF_should_find, &GDGAOSF,((*NL(GZFAOSF_read_rule))).nonlocals));
(*FDGAOSF_val) = GDGAOSF;
 /* line 366: */
 /* line 367: */
if ( CZFAOSF_is_legal((*FDGAOSF_val)) )
{ 
BDGAOSF_index+=1;
 /* line 368: */
SCGAOSF_should_find = A68_TRUE;
 /* line 369: */
 /* line 370: */
HDGAOSF = A68_TRUE;
} 
else
{ 
IDGAOSF = (*CDGAOSF_w) ;
switch ( IDGAOSF.mode )
{ 
case 2: /* STRUCT(BITS,REF MODE158)  */
JDGAOSF_r = (IDGAOSF.data.mode2);
KDGAOSF = CFFAOSF_is_opt(JDGAOSF_r);
break;
default: 
 /* line 371: */
KDGAOSF = A68_FALSE;
break;
} 
if ( KDGAOSF )
{ 
(*FDGAOSF_val) = TEFAOSF_no_parameters;
 /* line 372: */
 /* line 373: */
 /* line 374: */
HDGAOSF = A68_TRUE;
} 
else
{ 
 /* line 375: */
if ( SCGAOSF_should_find )
{ 
 /* line 376: */
A_CALLPROC(NL(JZFAOSF_error),((*CDGAOSF_w), (*FDGAOSF_val)),((*CDGAOSF_w), (*FDGAOSF_val),(NL(JZFAOSF_error)).nonlocals));
} 
 /* line 377: */
 /* line 378: */
 /* line 379: */
HDGAOSF = A68_FALSE;
} 
} 
LDGAOSF = HDGAOSF;
if ( !LDGAOSF ) break;
/*SKIP*/;
}
 /* line 381: */
if ( KXFAOSF_debug_reader )
{ 
A_CALLPROC(NL(TXFAOSF_dec_indent),(),((NL(TXFAOSF_dec_indent)).nonlocals));
} 
 /* line 383: */
if ( (BDGAOSF_index==0) )
{ 
NDGAOSF = 1 ;
MDGAOSF = (*(&A_VINDEX(ADGAOSF_values,NDGAOSF)));
} 
else
{ 
ODGAOSF.Choice = 1;
ODGAOSF.Params = A_VTRIM(PDGAOSF,(ADGAOSF_values),A_VTSCRIPT(&(PDGAOSF.upb),(ADGAOSF_values).upb,1,BDGAOSF_index));
 /* line 384: */
MDGAOSF = A_UNITE(QDGAOSF,mode1,1,ODGAOSF);
} 
} 
A_PROC_EXIT(product);
*ReturnedValue = (MDGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  UDGAOSF_alt_or_prod(A68_157  Rule, A68_BOOL  Expected, A68_162  *ReturnedValue, void *NonLocals)
#define NL(x) (((VDGAOSF_alt_or_prod *)NonLocals)->x)
{ 
A68_162  WDGAOSF;  /* clause result */
A68_162  XDGAOSF;  /* avoid structure result */
A68_162  YDGAOSF;  /* avoid structure result */
A_PROC_ENTRY(alt_or_prod);
 /* line 388: */
 /* line 389: */
if ( ZEFAOSF_is_alt(Rule) )
{ 
 /* line 390: */
A_CALLPROC(NL(DAGAOSF_alternative),(Rule.Elements, Expected, &XDGAOSF),(Rule.Elements, Expected, &XDGAOSF,(NL(DAGAOSF_alternative)).nonlocals));
WDGAOSF = XDGAOSF;
} 
else
{ 
 /* line 391: */
A_CALLPROC(NL(ECGAOSF_product),(Rule.Elements, Expected, &YDGAOSF),(Rule.Elements, Expected, &YDGAOSF,(NL(ECGAOSF_product)).nonlocals));
WDGAOSF = YDGAOSF;
} 
A_PROC_EXIT(alt_or_prod);
*ReturnedValue = (WDGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  CEGAOSF_more_than_one(A68_157  Rule, A68_162  First, A68_163  *ReturnedValue, void *NonLocals)
#define NL(x) (((DEGAOSF_more_than_one *)NonLocals)->x)
{ 
A68_201  EEGAOSF;  /* collateral clause result */
A68_52  HEGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  IEGAOSF;  /* YIELD */
A68_159  JEGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KEGAOSF;  /* avoid structure result */
A68_52  LEGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  MEGAOSF;  /* OPERATORS - istruct -> vector */
A68_214  OEGAOSF;  /* collateral clause result */
A68_214 * QEGAOSF;  /* YIELD */
A68_214 * PEGAOSF_list;
A68_INT  REGAOSF_n;
A68_214 ** SEGAOSF_ptr;
A68_162  TEGAOSF;  /* avoid structure result */
A68_162  UEGAOSF_p;
A68_BOOL  VEGAOSF;  /* clause result */
A68_214  WEGAOSF;  /* collateral clause result */
A68_214 * XEGAOSF;  /* YIELD */
A68_211  ZEGAOSF_generator;   /* proc value of non-global proc */
A68_164  EFGAOSF;  /* avoid structure result */
A68_164  FFGAOSF_params;
A68_162 * GFGAOSF_p;
A68_INT  HFGAOSF;  /* forall loop counter */
A68_163  IFGAOSF;  /* collateral clause result */
A68_163  JFGAOSF;  /* clause result */
A_PROC_ENTRY(more_than_one);
 /* line 395: */
 /* line 396: */
{ 
 /* line 397: */
if ( KXFAOSF_debug_reader )
{ 
A_CALLPROC(NL(QXFAOSF_inc_indent),(),((NL(QXFAOSF_inc_indent)).nonlocals));
 /* line 398: */
IEGAOSF = GEGAOSF ;
EEGAOSF.data[0] = A_UNITE(HEGAOSF,mode7,7,IEGAOSF);
A_CALLPROC(NL(XXFAOSF_show),(A_UNITE(JEGAOSF,mode2,2,Rule), &KEGAOSF),(A_UNITE(JEGAOSF,mode2,2,Rule), &KEGAOSF,(NL(XXFAOSF_show)).nonlocals));
EEGAOSF.data[1] = A_UNITE(LEGAOSF,mode7,7,KEGAOSF);
 /* line 399: */
A_CALLPROC(NL(DYFAOSF_print),(A_HISVEC(MEGAOSF,EEGAOSF,2,A68_52 )),(A_HISVEC(MEGAOSF,EEGAOSF,2,A68_52 ),(NL(DYFAOSF_print)).nonlocals));
} 
 /* line 401: */
 /* line 402: */
OEGAOSF.Param = First;
OEGAOSF.Rest = (A68_214 *)A68_NIL;
QEGAOSF = A_HEAP(A68_214 ) ;
(*QEGAOSF) = OEGAOSF ;
PEGAOSF_list = QEGAOSF;
 /* line 403: */
REGAOSF_n = 1;
 /* line 404: */
SEGAOSF_ptr = (&(PEGAOSF_list->Rest));
 /* line 405: */
for ( ;; )
{ 
 /* line 406: */
A_CALLPROC(NL(TDGAOSF_alt_or_prod),(Rule, A68_FALSE, &TEGAOSF),(Rule, A68_FALSE, &TEGAOSF,(NL(TDGAOSF_alt_or_prod)).nonlocals));
UEGAOSF_p = TEGAOSF;
 /* line 407: */
 /* line 408: */
VEGAOSF = CZFAOSF_is_legal(UEGAOSF_p);
if ( !VEGAOSF ) break;
REGAOSF_n+=1;
 /* line 409: */
WEGAOSF.Param = UEGAOSF_p;
WEGAOSF.Rest = (A68_214 *)A68_NIL;
 /* line 410: */
XEGAOSF = A_HEAP(A68_214 ) ;
(*XEGAOSF) = WEGAOSF ;
SEGAOSF_ptr = (&(((*SEGAOSF_ptr) = XEGAOSF)->Rest));
}
 /* line 411: */
A_CLOSURE( ZEGAOSF_generator, AFGAOSF_generator, BFGAOSF_generator );
(( BFGAOSF_generator * ) ( ZEGAOSF_generator.nonlocals )) -> REGAOSF_n = (&REGAOSF_n);
A_CALLPROC(ZEGAOSF_generator,(A68_FALSE, &EFGAOSF),(A68_FALSE, &EFGAOSF,(ZEGAOSF_generator).nonlocals));
FFGAOSF_params = EFGAOSF;
 /* line 412: */
 /* line 413: */
HFGAOSF = FFGAOSF_params.upb -1;
GFGAOSF_p = FFGAOSF_params.data;
for (;HFGAOSF-- >= 0;
(GFGAOSF_p++
) )
{
(*GFGAOSF_p) = (*(&(PEGAOSF_list->Param)));
PEGAOSF_list = (*(&(PEGAOSF_list->Rest)));
}
 /* line 415: */
if ( KXFAOSF_debug_reader )
{ 
A_CALLPROC(NL(TXFAOSF_dec_indent),(),((NL(TXFAOSF_dec_indent)).nonlocals));
} 
 /* line 416: */
IFGAOSF.Choice = 0;
 /* line 417: */
IFGAOSF.Params = FFGAOSF_params;
JFGAOSF = IFGAOSF;
} 
A_PROC_EXIT(more_than_one);
*ReturnedValue = (JFGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NFGAOSF_anonymous(A68_159  Unit, A68_BOOL  Expected, A68_162  *ReturnedValue, void *NonLocals)
#define NL(x) (((OFGAOSF_anonymous *)NonLocals)->x)
{ 
A68_208  PFGAOSF;  /* collateral clause result */
A68_52  QFGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  TFGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  UFGAOSF;  /* YIELD */
A68_VC  VFGAOSF;  /* avoid structure result */
A68_52  WFGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  XFGAOSF;  /* OPERATORS - istruct -> vector */
A68_159  YFGAOSF;  /* united object - for case conformity */
A68_INT * ZFGAOSF_index;
A68_167 * AGGAOSF_analyser;
A68_201  BGGAOSF;  /* collateral clause result */
A68_52  EGGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FGGAOSF;  /* YIELD */
A68_52  GGGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  HGGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  IGGAOSF;  /* avoid structure result */
A68_46  JGGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_165  KGGAOSF;  /* united object - for case conformity */
A68_166  LGGAOSF_read;
A68_VC  MGGAOSF;  /* avoid structure result */
A68_VC  NGGAOSF_val;
A68_52  QGGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RGGAOSF;  /* YIELD */
A68_85  SGGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_160  TGGAOSF;  /* collateral clause result */
A68_52  WGGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XGGAOSF;  /* YIELD */
A68_85  YGGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  ZGGAOSF;  /* collateral clause result */
A68_52  AHGAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  BHGAOSF;  /* YIELD */
A68_52  EHGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FHGAOSF;  /* YIELD */
A68_52  GHGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  HHGAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  IHGAOSF;  /* YIELD */
A68_85  JHGAOSF;  /* OPERATORS - istruct -> vector */
A68_162  KHGAOSF;  /* clause result */
A68_162  LHGAOSF;  /* OPERATORS - mode -> union mode */
A68_159  MHGAOSF_syntax;
A68_162  NHGAOSF;  /* avoid structure result */
A68_157  OHGAOSF_rule;
A68_162  PHGAOSF;  /* avoid structure result */
A68_162  QHGAOSF_p;
A68_163  RHGAOSF;  /* avoid structure result */
A68_162  SHGAOSF;  /* OPERATORS - mode -> union mode */
A68_163  THGAOSF;  /* collateral clause result */
A68_211  VHGAOSF_generator;   /* proc value of non-global proc */
A68_164  AIGAOSF;  /* avoid structure result */
A68_164  BIGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_164  CIGAOSF;  /* OPERATORS - assign op */
A68_162  DIGAOSF;  /* OPERATORS - mode -> union mode */
A68_162  EIGAOSF;  /* avoid structure result */
A68_162  FIGAOSF_p;
A68_163  GIGAOSF;  /* avoid structure result */
A68_162  HIGAOSF;  /* OPERATORS - mode -> union mode */
A68_163  IIGAOSF;  /* collateral clause result */
A68_211  KIGAOSF_generator;   /* proc value of non-global proc */
A68_164  PIGAOSF;  /* avoid structure result */
A68_164  QIGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_164  RIGAOSF;  /* OPERATORS - assign op */
A68_162  SIGAOSF;  /* OPERATORS - mode -> union mode */
A68_162  TIGAOSF_ans;
A68_162  UIGAOSF;  /* clause result */
 /* line 421: */
 /* line 422: */
{ 
 /* line 423: */
if ( KXFAOSF_debug_reader )
{ 
A_CALLPROC(NL(QXFAOSF_inc_indent),(),((NL(QXFAOSF_inc_indent)).nonlocals));
 /* line 424: */
PFGAOSF.data[0] = A_UNITE(QFGAOSF,mode8,8,Expected);
UFGAOSF = SFGAOSF ;
PFGAOSF.data[1] = A_UNITE(TFGAOSF,mode7,7,UFGAOSF);
A_CALLPROC(NL(XXFAOSF_show),(Unit, &VFGAOSF),(Unit, &VFGAOSF,(NL(XXFAOSF_show)).nonlocals));
PFGAOSF.data[2] = A_UNITE(WFGAOSF,mode7,7,VFGAOSF);
 /* line 425: */
A_CALLPROC(NL(DYFAOSF_print),(A_HISVEC(XFGAOSF,PFGAOSF,3,A68_52 )),(A_HISVEC(XFGAOSF,PFGAOSF,3,A68_52 ),(NL(DYFAOSF_print)).nonlocals));
} 
 /* line 427: */
 /* line 428: */
 /* line 429: */
YFGAOSF = Unit ;
switch ( YFGAOSF.mode )
{ 
case 1: /* REF INT */
ZFGAOSF_index = (YFGAOSF.data.mode1);
 /* line 430: */
{ 
AGGAOSF_analyser = (&A_VINDEX(NL(Analysers),(*ZFGAOSF_index)));
 /* line 431: */
 /* line 432: */
if ( ((*(*(&(AGGAOSF_analyser->Sort))))<1) )
{ 
 /* line 433: */
FGGAOSF = DGGAOSF ;
BGGAOSF.data[0] = A_UNITE(EGGAOSF,mode7,7,FGGAOSF);
BGGAOSF.data[1] = A_UNITE(GGGAOSF,mode1,1,(*ZFGAOSF_index));
 /* line 434: */
YCEAOSF_oneline( A_HISVEC(HGGAOSF,BGGAOSF,2,A68_52 ), &IGGAOSF );
A_CALLPROC(NL(Msg),(IUAAOSF_system, A_HVEC(JGGAOSF,IGGAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(JGGAOSF,IGGAOSF,A68_VC ),(NL(Msg)).nonlocals));
} 
 /* line 435: */
 /* line 436: */
KGGAOSF = (*(&(AGGAOSF_analyser->Reader))) ;
switch ( KGGAOSF.mode )
{ 
case 1: /* PROC(MODE97) REF MODE26 */
LGGAOSF_read = (KGGAOSF.data.mode1);
 /* line 438: */
{ 
A_CALLPROC(LGGAOSF_read,(NL(Msg), &MGGAOSF),(NL(Msg), &MGGAOSF,(LGGAOSF_read).nonlocals));
NGGAOSF_val = MGGAOSF;
 /* line 441: */
 /* line 442: */
if ( A_VSTRUCTCOMP(NGGAOSF_val,CHDAOSF_nilstr) )
{ 
 /* line 443: */
if ( KXFAOSF_debug_reader )
{ 
 /* line 444: */
RGGAOSF = PGGAOSF ;
A_CALLPROC(NL(DYFAOSF_print),(A_HVEC(SGGAOSF,A_UNITE(QGGAOSF,mode7,7,RGGAOSF),A68_52 )),(A_HVEC(SGGAOSF,A_UNITE(QGGAOSF,mode7,7,RGGAOSF),A68_52 ),(NL(DYFAOSF_print)).nonlocals));
} 
 /* line 445: */
TGGAOSF.Sort = (-1);
 /* line 446: */
TGGAOSF.Value = CHDAOSF_nilstr;
} 
else
{ 
 /* line 447: */
if ( (NGGAOSF_val.upb==0) )
{ 
 /* line 448: */
if ( KXFAOSF_debug_reader )
{ 
 /* line 449: */
XGGAOSF = VGGAOSF ;
A_CALLPROC(NL(DYFAOSF_print),(A_HVEC(YGGAOSF,A_UNITE(WGGAOSF,mode7,7,XGGAOSF),A68_52 )),(A_HVEC(YGGAOSF,A_UNITE(WGGAOSF,mode7,7,XGGAOSF),A68_52 ),(NL(DYFAOSF_print)).nonlocals));
} 
 /* line 450: */
TGGAOSF.Sort = 0;
 /* line 451: */
TGGAOSF.Value = IHDAOSF_nullstr;
} 
else
{ 
 /* line 452: */
if ( KXFAOSF_debug_reader )
{ 
 /* line 453: */
BHGAOSF = (*(*(&(AGGAOSF_analyser->Sort)))) ;
ZGGAOSF.data[0] = A_UNITE(AHGAOSF,mode1,1,BHGAOSF);
FHGAOSF = DHGAOSF ;
ZGGAOSF.data[1] = A_UNITE(EHGAOSF,mode7,7,FHGAOSF);
ZGGAOSF.data[2] = A_UNITE(GHGAOSF,mode7,7,NGGAOSF_val);
IHGAOSF = '\"' ;
ZGGAOSF.data[3] = A_UNITE(HHGAOSF,mode6,6,IHGAOSF);
 /* line 454: */
A_CALLPROC(NL(DYFAOSF_print),(A_HISVEC(JHGAOSF,ZGGAOSF,4,A68_52 )),(A_HISVEC(JHGAOSF,ZGGAOSF,4,A68_52 ),(NL(DYFAOSF_print)).nonlocals));
} 
 /* line 455: */
TGGAOSF.Sort = (*(*(&(AGGAOSF_analyser->Sort))));
 /* line 456: */
 /* line 457: */
TGGAOSF.Value = NGGAOSF_val;
} 
} 
} 
 /* line 459: */
KHGAOSF = A_UNITE(LHGAOSF,mode2,2,TGGAOSF);
break;
case 2: /* REF INT */
case 3: /* STRUCT(BITS,REF MODE158)  */
A_UNCPY(MHGAOSF_syntax,KGGAOSF);
MHGAOSF_syntax.mode -= 1;
 /* line 460: */
 /* line 461: */
 /* line 462: */
 /* line 464: */
A_CALLPROC((*NL(GZFAOSF_read_rule)),(MHGAOSF_syntax, Expected, &NHGAOSF),(MHGAOSF_syntax, Expected, &NHGAOSF,((*NL(GZFAOSF_read_rule))).nonlocals));
KHGAOSF = NHGAOSF;
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 2: /* STRUCT(BITS,REF MODE158)  */
OHGAOSF_rule = (YFGAOSF.data.mode2);
 /* line 465: */
{ 
 /* line 466: */
if ( CFFAOSF_is_opt(OHGAOSF_rule) )
{ 
A_CALLPROC(NL(TDGAOSF_alt_or_prod),(OHGAOSF_rule, A68_FALSE, &PHGAOSF),(OHGAOSF_rule, A68_FALSE, &PHGAOSF,(NL(TDGAOSF_alt_or_prod)).nonlocals));
QHGAOSF_p = PHGAOSF;
 /* line 467: */
 /* line 468: */
if ( CZFAOSF_is_legal(QHGAOSF_p) )
{ 
 /* line 469: */
if ( FFFAOSF_is_star(OHGAOSF_rule) )
{ 
 /* line 470: */
A_CALLPROC(NL(BEGAOSF_more_than_one),(OHGAOSF_rule, QHGAOSF_p, &RHGAOSF),(OHGAOSF_rule, QHGAOSF_p, &RHGAOSF,(NL(BEGAOSF_more_than_one)).nonlocals));
KHGAOSF = A_UNITE(SHGAOSF,mode1,1,RHGAOSF);
} 
else
{ 
THGAOSF.Choice = 0;
A_CLOSURE( VHGAOSF_generator, WHGAOSF_generator, XHGAOSF_generator );
 /* line 471: */
A_CALLPROC(VHGAOSF_generator,(A68_FALSE, &AIGAOSF),(A68_FALSE, &AIGAOSF,(VHGAOSF_generator).nonlocals));
CIGAOSF = A_HVEC(BIGAOSF,QHGAOSF_p,A68_162 ) ;
A_VASSIGN2(CIGAOSF,AIGAOSF,A68_162 ) ;
THGAOSF.Params = AIGAOSF;
 /* line 472: */
 /* line 473: */
KHGAOSF = A_UNITE(DIGAOSF,mode1,1,THGAOSF);
} 
} 
else
{ 
 /* line 474: */
 /* line 475: */
KHGAOSF = QHGAOSF_p;
} 
} 
else
{ 
A_CALLPROC(NL(TDGAOSF_alt_or_prod),(OHGAOSF_rule, Expected, &EIGAOSF),(OHGAOSF_rule, Expected, &EIGAOSF,(NL(TDGAOSF_alt_or_prod)).nonlocals));
FIGAOSF_p = EIGAOSF;
 /* line 476: */
 /* line 477: */
 /* line 478: */
if ( !CZFAOSF_is_legal(FIGAOSF_p) )
{ 
KHGAOSF = FIGAOSF_p;
} 
else
{ 
 /* line 479: */
if ( FFFAOSF_is_star(OHGAOSF_rule) )
{ 
 /* line 480: */
A_CALLPROC(NL(BEGAOSF_more_than_one),(OHGAOSF_rule, FIGAOSF_p, &GIGAOSF),(OHGAOSF_rule, FIGAOSF_p, &GIGAOSF,(NL(BEGAOSF_more_than_one)).nonlocals));
KHGAOSF = A_UNITE(HIGAOSF,mode1,1,GIGAOSF);
} 
else
{ 
IIGAOSF.Choice = 0;
A_CLOSURE( KIGAOSF_generator, LIGAOSF_generator, MIGAOSF_generator );
 /* line 481: */
A_CALLPROC(KIGAOSF_generator,(A68_FALSE, &PIGAOSF),(A68_FALSE, &PIGAOSF,(KIGAOSF_generator).nonlocals));
RIGAOSF = A_HVEC(QIGAOSF,FIGAOSF_p,A68_162 ) ;
A_VASSIGN2(RIGAOSF,PIGAOSF,A68_162 ) ;
IIGAOSF.Params = PIGAOSF;
 /* line 482: */
 /* line 483: */
 /* line 484: */
KHGAOSF = A_UNITE(SIGAOSF,mode1,1,IIGAOSF);
} 
} 
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
TIGAOSF_ans = KHGAOSF;
 /* line 485: */
if ( KXFAOSF_debug_reader )
{ 
A_CALLPROC(NL(TXFAOSF_dec_indent),(),((NL(TXFAOSF_dec_indent)).nonlocals));
} 
 /* line 486: */
 /* line 487: */
UIGAOSF = TIGAOSF_ans;
} 
*ReturnedValue = (UIGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  XNGAOSF_generator(A68_BOOL  VNGAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YNGAOSF_generator *)NonLocals)->x)
{ 
A68_VC  ZNGAOSF;  /* clause result */
A68_VC  AOGAOSF;  /* OPERATORS - dynamic generator */
{ 
AOGAOSF.upb = (*GUFAOSF_rdcharend) ;
( VNGAOSF_anonymous? A_VLOC(A68_CHAR ,AOGAOSF): A_VHEAP(A68_CHAR ,AOGAOSF) );
ZNGAOSF = AOGAOSF;
} 
*ReturnedValue = (ZNGAOSF);
return;
} 
#undef NL

A_STATIC A68_CHAR  WOGAOSF_first(void *NonLocals)
#define NL(x) (((XOGAOSF_first *)NonLocals)->x)
{ 
A68_CHAR  YOGAOSF_c;
A68_CHAR  ZOGAOSF;  /* clause result */
A_PROC_ENTRY(first);
{ 
 /* line 665: */
for ( ;; )
{ 
if ( !(BTFAOSF_space(YOGAOSF_c = SVFAOSF_rdchar(A68_FALSE, NL(Msg)))) ) break;
/*SKIP*/;
}
 /* line 666: */
 /* line 667: */
ZOGAOSF = YOGAOSF_c;
} 
A_PROC_EXIT(first);
return( ZOGAOSF );
} 
#undef NL

A68_BOOL  QSFAOSF_instring(A68_CHAR  C, A68_VC  Str)
{ 
A68_BOOL  RSFAOSF_ans;
A68_INT  SSFAOSF_i;
A68_INT  TSFAOSF;  /* to part of loop */
A68_BOOL  USFAOSF;  /* clause result */
A_PROC_ENTRY(instring);
 /* line 60: */
 /* line 61: */
{ 
RSFAOSF_ans = A68_FALSE;
 /* line 62: */
TSFAOSF = Str.upb;
for ( SSFAOSF_i = 1;
SSFAOSF_i <= TSFAOSF;
SSFAOSF_i += 1 )
{ 
if ( !(!RSFAOSF_ans) ) break;
RSFAOSF_ans = (A_VINDEX(Str,SSFAOSF_i)==C);
}
 /* line 63: */
 /* line 64: */
USFAOSF = RSFAOSF_ans;
} 
A_PROC_EXIT(instring);
return( USFAOSF );
} 
#undef NL

A68_BOOL  BTFAOSF_space(A68_CHAR  C)
{ 
A68_BOOL  CTFAOSF;  /* clause result */
A_PROC_ENTRY(space);
CTFAOSF = (C<=VSFAOSF_sp);
A_PROC_EXIT(space);
return( CTFAOSF );
} 
#undef NL

A68_BOOL  ETFAOSF_separator(A68_CHAR  C)
{ 
A68_BOOL  FTFAOSF;  /* optbool result */
A68_BOOL  GTFAOSF;  /* clause result */
A_PROC_ENTRY(separator);
FTFAOSF = (C<=VSFAOSF_sp);
if ( ! FTFAOSF )
{FTFAOSF = (C==WSFAOSF_sep);
}
GTFAOSF = FTFAOSF;
A_PROC_EXIT(separator);
return( GTFAOSF );
} 
#undef NL

A68_BOOL  ITFAOSF_visible_space(A68_CHAR  C)
{ 
A68_BOOL  JTFAOSF;  /* clause result */
A_PROC_ENTRY(visible_space);
JTFAOSF = (C=='_');
A_PROC_EXIT(visible_space);
return( JTFAOSF );
} 
#undef NL

A68_BOOL  LTFAOSF_digit(A68_CHAR  C)
{ 
A68_BOOL  MTFAOSF;  /* optbool result */
A68_BOOL  NTFAOSF;  /* clause result */
A_PROC_ENTRY(digit);
MTFAOSF = (C>='0');
if ( MTFAOSF )
{MTFAOSF = (C<='9');
}
NTFAOSF = MTFAOSF;
A_PROC_EXIT(digit);
return( NTFAOSF );
} 
#undef NL

A68_BOOL  PTFAOSF_letter(A68_CHAR  C)
{ 
A68_BOOL  QTFAOSF;  /* optbool result */
A68_BOOL  RTFAOSF;  /* clause result */
A_PROC_ENTRY(letter);
QTFAOSF = (C>='a');
if ( QTFAOSF )
{QTFAOSF = (C<='z');
}
RTFAOSF = QTFAOSF;
A_PROC_EXIT(letter);
return( RTFAOSF );
} 
#undef NL

A68_BOOL  TTFAOSF_bold(A68_CHAR  C)
{ 
A68_BOOL  UTFAOSF;  /* optbool result */
A68_BOOL  VTFAOSF;  /* clause result */
A_PROC_ENTRY(bold);
UTFAOSF = (C>='A');
if ( UTFAOSF )
{UTFAOSF = (C<='Z');
}
VTFAOSF = UTFAOSF;
A_PROC_EXIT(bold);
return( VTFAOSF );
} 
#undef NL

A68_CHAR  XTFAOSF_upper_case(A68_CHAR  C)
{ 
A68_CHAR  YTFAOSF;  /* clause result */
A_PROC_ENTRY(upper_case);
 /* line 85: */
if ( PTFAOSF_letter(C) )
{ 
YTFAOSF = (A68_SSBITS)((A68_INT)(unsigned char)C-32);
} 
else
{ 
YTFAOSF = C;
} 
A_PROC_EXIT(upper_case);
return( YTFAOSF );
} 
#undef NL

A68_CHAR  AUFAOSF_lower_case(A68_CHAR  C)
{ 
A68_CHAR  BUFAOSF;  /* clause result */
A_PROC_ENTRY(lower_case);
 /* line 88: */
if ( TTFAOSF_bold(C) )
{ 
BUFAOSF = (A68_SSBITS)((A68_INT)(unsigned char)C+32);
} 
else
{ 
BUFAOSF = C;
} 
A_PROC_EXIT(lower_case);
return( BUFAOSF );
} 
#undef NL
 /* line 124: */

A68_186 * MUFAOSF_set_reader(A68_VC  Buffer, A68_187  Reader)
{ 
A68_INT  NUFAOSF;  /* YIELD */
A68_CHAR * OUFAOSF;  /* YIELD */
A68_186 * PUFAOSF;  /* clause result */
A_PROC_ENTRY(set_reader);
 /* line 125: */
 /* line 128: */
{ 
(*FUFAOSF_rdbuffer) = Buffer;
 /* line 129: */
(*EUFAOSF_rdline) = Reader;
 /* line 130: */
(*HUFAOSF_rdcharno) = (*IUFAOSF_start_of_word) = 0;
 /* line 131: */
NUFAOSF = (*GUFAOSF_rdcharend) = 1 ;
OUFAOSF = (&A_VINDEX((*FUFAOSF_rdbuffer),NUFAOSF)) ;
(*OUFAOSF) = WSFAOSF_sep;
 /* line 132: */
 /* line 133: */
PUFAOSF = (&DUFAOSF_current_details);
} 
A_PROC_EXIT(set_reader);
return( PUFAOSF );
} 
#undef NL

A68_VOID  RUFAOSF_reset_reader(A68_186  Details)
{ 
A_PROC_ENTRY(reset_reader);
 /* line 140: */
DUFAOSF_current_details = Details;
A_PROC_EXIT(reset_reader);
return;
} 
#undef NL

A68_VOID  SUFAOSF_get_input_lines(A68_102  *ReturnedValue)
{ 
A68_102  TUFAOSF_ans;
A68_191  WUFAOSF_add;   /* proc value of non-global proc */
A68_INT  JVFAOSF;  /* YIELD */
A68_VC  KVFAOSF;  /* OPERATORS - trim index */
A68_VC  LVFAOSF;  /* avoid structure result */
A68_VC * MVFAOSF;  /* YIELD */
A68_102  NVFAOSF;  /* clause result */
A_PROC_ENTRY(get_input_lines);
{ 
 /* line 155: */
A_CLOSURE( WUFAOSF_add, XUFAOSF_add, YUFAOSF_add );
(( YUFAOSF_add * ) ( WUFAOSF_add.nonlocals )) -> TUFAOSF_ans = (&TUFAOSF_ans);
(( YUFAOSF_add * ) ( WUFAOSF_add.nonlocals )) -> WUFAOSF_add = WUFAOSF_add;
 /* line 162: */
JVFAOSF = A_CALLPROC(WUFAOSF_add,((*JUFAOSF_line_stack), 1),((*JUFAOSF_line_stack), 1,(WUFAOSF_add).nonlocals)) ;
ZCAAOSF_makervc( A_VTRIM(KVFAOSF,((*FUFAOSF_rdbuffer)),A_VTSCRIPT(&(KVFAOSF.upb),((*FUFAOSF_rdbuffer)).upb,1,(*HUFAOSF_rdcharno))), &LVFAOSF );
MVFAOSF = (&A_VINDEX(TUFAOSF_ans,JVFAOSF)) ;
(*MVFAOSF) = LVFAOSF;
 /* line 163: */
 /* line 164: */
NVFAOSF = TUFAOSF_ans;
} 
A_PROC_EXIT(get_input_lines);
*ReturnedValue = (NVFAOSF);
return;
} 
#undef NL

A68_VOID  OVFAOSF_skip_command(void)
{ 
A68_CHAR * PVFAOSF;  /* YIELD */
A_PROC_ENTRY(skip_command);
{ 
PVFAOSF = (&A_VINDEX((*FUFAOSF_rdbuffer),(*GUFAOSF_rdcharend))) ;
(*PVFAOSF) = WSFAOSF_sep;
 /* line 173: */
 /* line 174: */
(*HUFAOSF_rdcharno) = ((*GUFAOSF_rdcharend)-1);
} 
A_PROC_EXIT(skip_command);
return;
} 
#undef NL

A_STATIC A68_CHAR  SVFAOSF_rdchar(A68_BOOL  Stack, A68_97  Msg)
{ 
A68_BOOL  TVFAOSF;  /* optbool result */
A68_CHAR * UVFAOSF;  /* YIELD */
A68_185  VVFAOSF;  /* collateral clause result */
A68_VC  WVFAOSF;  /* OPERATORS - trim index */
A68_VC  XVFAOSF;  /* avoid structure result */
A68_185 * YVFAOSF;  /* YIELD */
A68_BOOL  ZVFAOSF;  /* optbool result */
A68_BOOL  AWFAOSF;  /* optbool result */
A68_INT  BWFAOSF;  /* YIELD */
A68_INT  CWFAOSF;  /* YIELD */
A68_CHAR * DWFAOSF;  /* YIELD */
A68_INT  EWFAOSF;  /* YIELD */
A68_CHAR * FWFAOSF;  /* YIELD */
A68_CHAR  GWFAOSF;  /* clause result */
A68_INT  HWFAOSF;  /* YIELD */
A_PROC_ENTRY(rdchar);
 /* line 181: */
 /* line 183: */
{ 
 /* line 184: */
if ( ((*HUFAOSF_rdcharno)>=(*GUFAOSF_rdcharend)) )
{ 
TVFAOSF = Stack;
if ( TVFAOSF )
{TVFAOSF = ((*GUFAOSF_rdcharend)>0);
}
if ( TVFAOSF )
{ /* line 185: */
TVFAOSF = ((*(&A_VINDEX((*FUFAOSF_rdbuffer),(*GUFAOSF_rdcharend))))==VSFAOSF_sp);
}
 /* line 186: */
if ( TVFAOSF )
{ 
UVFAOSF = (&A_VINDEX((*FUFAOSF_rdbuffer),(*HUFAOSF_rdcharno))) ;
(*UVFAOSF) = '.';
 /* line 187: */
 /* line 188: */
ZCAAOSF_makervc( A_VTRIM(WVFAOSF,((*FUFAOSF_rdbuffer)),A_VTSCRIPT(&(WVFAOSF.upb),((*FUFAOSF_rdbuffer)).upb,1,((*GUFAOSF_rdcharend)+1))), &XVFAOSF );
VVFAOSF.Line = XVFAOSF;
 /* line 189: */
VVFAOSF.Rest = (*JUFAOSF_line_stack);
YVFAOSF = A_HEAP(A68_185 ) ;
(*YVFAOSF) = VVFAOSF ;
(*JUFAOSF_line_stack) = YVFAOSF;
} 
 /* line 190: */
(*HUFAOSF_rdcharno) = (*IUFAOSF_start_of_word) = 0;
 /* line 191: */
(*GUFAOSF_rdcharend) = A_CALLPROC((*EUFAOSF_rdline),(FUFAOSF_rdbuffer, Msg),(FUFAOSF_rdbuffer, Msg,((*EUFAOSF_rdline)).nonlocals));
 /* line 192: */
for ( ;; )
{ 
ZVFAOSF = ((*GUFAOSF_rdcharend)>=1);
if ( ZVFAOSF )
{ /* line 193: */
ZVFAOSF = BTFAOSF_space((*(&A_VINDEX((*FUFAOSF_rdbuffer),(*GUFAOSF_rdcharend)))));
}
if ( !(ZVFAOSF) ) break;
(*GUFAOSF_rdcharend)-=1;
}
 /* line 194: */
AWFAOSF = ((*GUFAOSF_rdcharend)>=2);
if ( AWFAOSF )
{AWFAOSF = ((*(&A_VINDEX((*FUFAOSF_rdbuffer),(*GUFAOSF_rdcharend))))=='.');
}
 /* line 195: */
if ( AWFAOSF )
{ /* line 196: */
BWFAOSF = ((*GUFAOSF_rdcharend)-1) ;
AWFAOSF = ((*(&A_VINDEX((*FUFAOSF_rdbuffer),BWFAOSF)))=='.');
}
if ( AWFAOSF )
{ 
 /* line 197: */
 /* line 198: */
CWFAOSF = (*GUFAOSF_rdcharend)-=1 ;
DWFAOSF = (&A_VINDEX((*FUFAOSF_rdbuffer),CWFAOSF)) ;
(*DWFAOSF) = VSFAOSF_sp;
} 
else
{ 
 /* line 199: */
 /* line 200: */
EWFAOSF = (*GUFAOSF_rdcharend)+=1 ;
FWFAOSF = (&A_VINDEX((*FUFAOSF_rdbuffer),EWFAOSF)) ;
(*FWFAOSF) = WSFAOSF_sep;
} 
} 
 /* line 201: */
 /* line 202: */
HWFAOSF = (*HUFAOSF_rdcharno)+=1 ;
GWFAOSF = (*(&A_VINDEX((*FUFAOSF_rdbuffer),HWFAOSF)));
} 
A_PROC_EXIT(rdchar);
return( GWFAOSF );
} 
#undef NL

A68_CHAR  JWFAOSF_next_char(A68_97  Msg)
{ 
A68_CHAR  KWFAOSF;  /* clause result */
A_PROC_ENTRY(next_char);
 /* line 207: */
if ( ((*HUFAOSF_rdcharno)==(*GUFAOSF_rdcharend)) )
{ 
KWFAOSF = VSFAOSF_sp;
} 
else
{ 
KWFAOSF = SVFAOSF_rdchar(A68_TRUE, Msg);
} 
A_PROC_EXIT(next_char);
return( KWFAOSF );
} 
#undef NL

A68_CHAR  MWFAOSF_first_char(A68_97  Msg)
{ 
A68_CHAR  NWFAOSF_c;
A68_CHAR  OWFAOSF;  /* clause result */
A_PROC_ENTRY(first_char);
 /* line 211: */
 /* line 213: */
{ 
 /* line 214: */
for ( ;; )
{ 
if ( !(BTFAOSF_space(NWFAOSF_c = SVFAOSF_rdchar(A68_TRUE, Msg))) ) break;
/*SKIP*/;
}
 /* line 216: */
(*IUFAOSF_start_of_word) = ((*HUFAOSF_rdcharno)-1);
 /* line 217: */
 /* line 218: */
OWFAOSF = NWFAOSF_c;
} 
A_PROC_EXIT(first_char);
return( OWFAOSF );
} 
#undef NL

A68_CHAR  QWFAOSF_next_first_char(A68_97  Msg)
{ 
A68_CHAR  RWFAOSF_c;
A68_CHAR  SWFAOSF;  /* clause result */
A_PROC_ENTRY(next_first_char);
 /* line 221: */
 /* line 226: */
{ 
RWFAOSF_c = SVFAOSF_rdchar(A68_TRUE, Msg);
 /* line 227: */
(*IUFAOSF_start_of_word) = ((*HUFAOSF_rdcharno)-1);
 /* line 228: */
 /* line 229: */
SWFAOSF = RWFAOSF_c;
} 
A_PROC_EXIT(next_first_char);
return( SWFAOSF );
} 
#undef NL

A68_VOID  UWFAOSF_put_back_char(A68_97  Msg)
{ 
A68_46  XWFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(put_back_char);
 /* line 234: */
 /* line 235: */
if ( ((*HUFAOSF_rdcharno)==0) )
{ 
 /* line 236: */
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(XWFAOSF,WWFAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(XWFAOSF,WWFAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 237: */
(*HUFAOSF_rdcharno)-=1;
} 
A_PROC_EXIT(put_back_char);
return;
} 
#undef NL

A68_CHAR  ZWFAOSF_same_char(A68_97  Msg)
{ 
A68_46  CXFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_CHAR  DXFAOSF;  /* clause result */
A_PROC_ENTRY(same_char);
 /* line 241: */
 /* line 242: */
if ( ((*HUFAOSF_rdcharno)==0) )
{ 
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(CXFAOSF,BXFAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(CXFAOSF,BXFAOSF,A68_VC ),(Msg).nonlocals));
 /* line 243: */
DXFAOSF = '\000';
} 
else
{ 
 /* line 244: */
DXFAOSF = (*(&A_VINDEX((*FUFAOSF_rdbuffer),(*HUFAOSF_rdcharno))));
} 
A_PROC_EXIT(same_char);
return( DXFAOSF );
} 
#undef NL

A68_BOOL  FXFAOSF_check_for_more(A68_97  Msg)
{ 
A68_CHAR  GXFAOSF_c;
A68_BOOL  HXFAOSF;  /* clause result */
A_PROC_ENTRY(check_for_more);
 /* line 249: */
 /* line 251: */
{ 
 /* line 252: */
for ( ;; )
{ 
if ( !(BTFAOSF_space(GXFAOSF_c = SVFAOSF_rdchar(A68_TRUE, Msg))) ) break;
/*SKIP*/;
}
 /* line 253: */
 /* line 254: */
if ( (GXFAOSF_c==WSFAOSF_sep) )
{ 
(*HUFAOSF_rdcharno)-=1;
 /* line 255: */
 /* line 256: */
 /* line 257: */
HXFAOSF = A68_FALSE;
} 
else
{ 
for ( ;; )
{ 
if ( !(!ETFAOSF_separator(JWFAOSF_next_char(Msg))) ) break;
/*SKIP*/;
}
 /* line 258: */
(*HUFAOSF_rdcharno)-=1;
 /* line 259: */
 /* line 260: */
 /* line 261: */
HXFAOSF = A68_TRUE;
} 
} 
A_PROC_EXIT(check_for_more);
return( HXFAOSF );
} 
#undef NL

A68_VOID  JXFAOSF_skip_parameter(A68_97  Msg)
{ 
A_PROC_ENTRY(skip_parameter);
 /* line 265: */
 /* line 268: */
{ 
for ( ;; )
{ 
if ( !(!ETFAOSF_separator(JWFAOSF_next_char(Msg))) ) break;
/*SKIP*/;
}
 /* line 269: */
 /* line 270: */
(*HUFAOSF_rdcharno)-=1;
} 
A_PROC_EXIT(skip_parameter);
return;
} 
#undef NL
 /* line 277: */
 /* line 279: */

A68_VOID  OXFAOSF_read_parameters(A68_173  Analysers, A68_159  Syntax, A68_97  Msg, A68_162  *ReturnedValue)
{ 
A68_INT  PXFAOSF_indent;
A68_142  QXFAOSF_inc_indent;   /* proc value of non-global proc */
A68_142  TXFAOSF_dec_indent;   /* proc value of non-global proc */
A68_199  XXFAOSF_show;   /* proc value of non-global proc */
A68_200  DYFAOSF_print;   /* proc value of non-global proc */
A68_201  MYFAOSF;  /* collateral clause result */
A68_52  PYFAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QYFAOSF;  /* YIELD */
A68_VC  RYFAOSF;  /* avoid structure result */
A68_52  SYFAOSF;  /* OPERATORS - mode -> union mode */
A68_85  TYFAOSF;  /* OPERATORS - istruct -> vector */
A68_160  UYFAOSF;  /* collateral clause result */
A68_160  VYFAOSF_illegal;
A68_204  GZFAOSF_read_rule;
A68_205  JZFAOSF_error;   /* proc value of non-global proc */
A68_209  DAGAOSF_alternative;   /* proc value of non-global proc */
A68_209  ECGAOSF_product;   /* proc value of non-global proc */
A68_212  TDGAOSF_alt_or_prod;   /* proc value of non-global proc */
A68_213  BEGAOSF_more_than_one;   /* proc value of non-global proc */
A68_204  MFGAOSF_anonymous;   /* proc value of non-global proc */
A68_159  VIGAOSF;  /* united object - for case conformity */
A68_INT * WIGAOSF_index;
A68_BOOL  XIGAOSF;  /* clause result */
A68_46  AJGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_162  BJGAOSF;  /* clause result */
A68_162  CJGAOSF;  /* avoid structure result */
A68_162  DJGAOSF_param;
A68_159  EJGAOSF;  /* united object - for case conformity */
A68_BOOL  FJGAOSF;  /* clause result */
A68_BOOL  GJGAOSF;  /* clause result */
A68_208  HJGAOSF;  /* collateral clause result */
A68_52  KJGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LJGAOSF;  /* YIELD */
A68_VC  MJGAOSF;  /* avoid structure result */
A68_52  NJGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  QJGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RJGAOSF;  /* YIELD */
A68_85  SJGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  TJGAOSF;  /* avoid structure result */
A68_46  UJGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  XJGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_162  YJGAOSF_ans;
A68_201  ZJGAOSF;  /* collateral clause result */
A68_52  CKGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  DKGAOSF;  /* YIELD */
A68_52  EKGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  FKGAOSF;  /* procedure value */
A68_85  GKGAOSF;  /* OPERATORS - istruct -> vector */
A68_162  HKGAOSF;  /* clause result */
A_PROC_ENTRY(read_parameters);
 /* line 280: */
 /* line 289: */
{ 
PXFAOSF_indent = 0;
 /* line 290: */
A_CLOSURE( QXFAOSF_inc_indent, RXFAOSF_inc_indent, SXFAOSF_inc_indent );
(( SXFAOSF_inc_indent * ) ( QXFAOSF_inc_indent.nonlocals )) -> PXFAOSF_indent = (&PXFAOSF_indent);
 /* line 291: */
A_CLOSURE( TXFAOSF_dec_indent, UXFAOSF_dec_indent, VXFAOSF_dec_indent );
(( VXFAOSF_dec_indent * ) ( TXFAOSF_dec_indent.nonlocals )) -> PXFAOSF_indent = (&PXFAOSF_indent);
 /* line 292: */
A_CLOSURE( XXFAOSF_show, YXFAOSF_show, ZXFAOSF_show );
(( ZXFAOSF_show * ) ( XXFAOSF_show.nonlocals )) -> Analysers = Analysers;
 /* line 294: */
A_CLOSURE( DYFAOSF_print, EYFAOSF_print, FYFAOSF_print );
(( FYFAOSF_print * ) ( DYFAOSF_print.nonlocals )) -> PXFAOSF_indent = (&PXFAOSF_indent);
 /* line 297: */
if ( KXFAOSF_debug_reader )
{ 
QYFAOSF = OYFAOSF ;
MYFAOSF.data[0] = A_UNITE(PYFAOSF,mode7,7,QYFAOSF);
A_CALLPROC(XXFAOSF_show,(Syntax, &RYFAOSF),(Syntax, &RYFAOSF,(XXFAOSF_show).nonlocals));
MYFAOSF.data[1] = A_UNITE(SYFAOSF,mode7,7,RYFAOSF);
A_CALLPROC(DYFAOSF_print,(A_HISVEC(TYFAOSF,MYFAOSF,2,A68_52 )),(A_HISVEC(TYFAOSF,MYFAOSF,2,A68_52 ),(DYFAOSF_print).nonlocals));
} 
 /* line 299: */
UYFAOSF.Sort = (-1);
UYFAOSF.Value = CHDAOSF_nilstr;
VYFAOSF_illegal = UYFAOSF;
 /* line 301: */
 /* line 304: */
 /* line 308: */
 /* line 310: */
A_CLOSURE( JZFAOSF_error, KZFAOSF_error, LZFAOSF_error );
(( LZFAOSF_error * ) ( JZFAOSF_error.nonlocals )) -> Msg = Msg;
(( LZFAOSF_error * ) ( JZFAOSF_error.nonlocals )) -> Analysers = Analysers;
 /* line 320: */
A_CLOSURE( DAGAOSF_alternative, EAGAOSF_alternative, FAGAOSF_alternative );
(( FAGAOSF_alternative * ) ( DAGAOSF_alternative.nonlocals )) -> QXFAOSF_inc_indent = QXFAOSF_inc_indent;
(( FAGAOSF_alternative * ) ( DAGAOSF_alternative.nonlocals )) -> DYFAOSF_print = DYFAOSF_print;
(( FAGAOSF_alternative * ) ( DAGAOSF_alternative.nonlocals )) -> XXFAOSF_show = XXFAOSF_show;
(( FAGAOSF_alternative * ) ( DAGAOSF_alternative.nonlocals )) -> VYFAOSF_illegal = VYFAOSF_illegal;
(( FAGAOSF_alternative * ) ( DAGAOSF_alternative.nonlocals )) -> GZFAOSF_read_rule = (&GZFAOSF_read_rule);
(( FAGAOSF_alternative * ) ( DAGAOSF_alternative.nonlocals )) -> TXFAOSF_dec_indent = TXFAOSF_dec_indent;
(( FAGAOSF_alternative * ) ( DAGAOSF_alternative.nonlocals )) -> JZFAOSF_error = JZFAOSF_error;
 /* line 347: */
A_CLOSURE( ECGAOSF_product, FCGAOSF_product, GCGAOSF_product );
(( GCGAOSF_product * ) ( ECGAOSF_product.nonlocals )) -> QXFAOSF_inc_indent = QXFAOSF_inc_indent;
(( GCGAOSF_product * ) ( ECGAOSF_product.nonlocals )) -> DYFAOSF_print = DYFAOSF_print;
(( GCGAOSF_product * ) ( ECGAOSF_product.nonlocals )) -> XXFAOSF_show = XXFAOSF_show;
(( GCGAOSF_product * ) ( ECGAOSF_product.nonlocals )) -> GZFAOSF_read_rule = (&GZFAOSF_read_rule);
(( GCGAOSF_product * ) ( ECGAOSF_product.nonlocals )) -> JZFAOSF_error = JZFAOSF_error;
(( GCGAOSF_product * ) ( ECGAOSF_product.nonlocals )) -> TXFAOSF_dec_indent = TXFAOSF_dec_indent;
 /* line 387: */
A_CLOSURE( TDGAOSF_alt_or_prod, UDGAOSF_alt_or_prod, VDGAOSF_alt_or_prod );
(( VDGAOSF_alt_or_prod * ) ( TDGAOSF_alt_or_prod.nonlocals )) -> DAGAOSF_alternative = DAGAOSF_alternative;
(( VDGAOSF_alt_or_prod * ) ( TDGAOSF_alt_or_prod.nonlocals )) -> ECGAOSF_product = ECGAOSF_product;
 /* line 394: */
A_CLOSURE( BEGAOSF_more_than_one, CEGAOSF_more_than_one, DEGAOSF_more_than_one );
(( DEGAOSF_more_than_one * ) ( BEGAOSF_more_than_one.nonlocals )) -> QXFAOSF_inc_indent = QXFAOSF_inc_indent;
(( DEGAOSF_more_than_one * ) ( BEGAOSF_more_than_one.nonlocals )) -> DYFAOSF_print = DYFAOSF_print;
(( DEGAOSF_more_than_one * ) ( BEGAOSF_more_than_one.nonlocals )) -> XXFAOSF_show = XXFAOSF_show;
(( DEGAOSF_more_than_one * ) ( BEGAOSF_more_than_one.nonlocals )) -> TDGAOSF_alt_or_prod = TDGAOSF_alt_or_prod;
(( DEGAOSF_more_than_one * ) ( BEGAOSF_more_than_one.nonlocals )) -> TXFAOSF_dec_indent = TXFAOSF_dec_indent;
 /* line 420: */
A_CLOSURE( MFGAOSF_anonymous, NFGAOSF_anonymous, OFGAOSF_anonymous );
(( OFGAOSF_anonymous * ) ( MFGAOSF_anonymous.nonlocals )) -> QXFAOSF_inc_indent = QXFAOSF_inc_indent;
(( OFGAOSF_anonymous * ) ( MFGAOSF_anonymous.nonlocals )) -> DYFAOSF_print = DYFAOSF_print;
(( OFGAOSF_anonymous * ) ( MFGAOSF_anonymous.nonlocals )) -> XXFAOSF_show = XXFAOSF_show;
(( OFGAOSF_anonymous * ) ( MFGAOSF_anonymous.nonlocals )) -> Analysers = Analysers;
(( OFGAOSF_anonymous * ) ( MFGAOSF_anonymous.nonlocals )) -> Msg = Msg;
(( OFGAOSF_anonymous * ) ( MFGAOSF_anonymous.nonlocals )) -> GZFAOSF_read_rule = (&GZFAOSF_read_rule);
(( OFGAOSF_anonymous * ) ( MFGAOSF_anonymous.nonlocals )) -> TDGAOSF_alt_or_prod = TDGAOSF_alt_or_prod;
(( OFGAOSF_anonymous * ) ( MFGAOSF_anonymous.nonlocals )) -> BEGAOSF_more_than_one = BEGAOSF_more_than_one;
(( OFGAOSF_anonymous * ) ( MFGAOSF_anonymous.nonlocals )) -> TXFAOSF_dec_indent = TXFAOSF_dec_indent;
GZFAOSF_read_rule = MFGAOSF_anonymous;
 /* line 491: */
 /* line 492: */
VIGAOSF = Syntax ;
switch ( VIGAOSF.mode )
{ 
case 1: /* REF INT */
WIGAOSF_index = (VIGAOSF.data.mode1);
XIGAOSF = ((*WIGAOSF_index)==0);
break;
default: 
 /* line 493: */
XIGAOSF = A68_FALSE;
break;
} 
if ( XIGAOSF )
{ 
 /* line 494: */
if ( FXFAOSF_check_for_more(Msg) )
{ 
 /* line 495: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(AJGAOSF,ZIGAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(AJGAOSF,ZIGAOSF,A68_VC ),(Msg).nonlocals));
} 
 /* line 496: */
 /* line 497: */
BJGAOSF = TEFAOSF_no_parameters;
} 
else
{ 
A_CALLPROC(GZFAOSF_read_rule,(Syntax, A68_TRUE, &CJGAOSF),(Syntax, A68_TRUE, &CJGAOSF,(GZFAOSF_read_rule).nonlocals));
DJGAOSF_param = CJGAOSF;
 /* line 498: */
 /* line 500: */
EJGAOSF = Syntax ;
switch ( EJGAOSF.mode )
{ 
case 1: /* REF INT */
FJGAOSF = A68_TRUE;
break;
default: 
 /* line 501: */
FJGAOSF = A68_FALSE;
break;
} 
if ( FJGAOSF )
{ /* line 502: */
FJGAOSF = !CZFAOSF_is_legal(DJGAOSF_param);
}
GJGAOSF = FJGAOSF;
if ( GJGAOSF )
{ 
 /* line 503: */
A_CALLPROC(JZFAOSF_error,(Syntax, DJGAOSF_param),(Syntax, DJGAOSF_param,(JZFAOSF_error).nonlocals));
} 
else
{ 
 /* line 504: */
if ( FXFAOSF_check_for_more(Msg) )
{ 
 /* line 505: */
if ( XYFAOSF_is_illegal(DJGAOSF_param) )
{ 
 /* line 506: */
 /* line 507: */
LJGAOSF = JJGAOSF ;
HJGAOSF.data[0] = A_UNITE(KJGAOSF,mode7,7,LJGAOSF);
 /* line 508: */
PHFAOSF_show_syntax( Syntax, Analysers, &MJGAOSF );
HJGAOSF.data[1] = A_UNITE(NJGAOSF,mode7,7,MJGAOSF);
RJGAOSF = PJGAOSF ;
HJGAOSF.data[2] = A_UNITE(QJGAOSF,mode7,7,RJGAOSF);
 /* line 509: */
 /* line 510: */
YCEAOSF_oneline( A_HISVEC(SJGAOSF,HJGAOSF,3,A68_52 ), &TJGAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(UJGAOSF,TJGAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(UJGAOSF,TJGAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 511: */
 /* line 512: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(XJGAOSF,WJGAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(XJGAOSF,WJGAOSF,A68_VC ),(Msg).nonlocals));
} 
} 
} 
 /* line 513: */
if ( CZFAOSF_is_legal(DJGAOSF_param) )
{ 
BJGAOSF = DJGAOSF_param;
} 
else
{ 
 /* line 514: */
BJGAOSF = TEFAOSF_no_parameters;
} 
} 
YJGAOSF_ans = BJGAOSF;
 /* line 515: */
if ( KXFAOSF_debug_reader )
{ 
DKGAOSF = BKGAOSF ;
ZJGAOSF.data[0] = A_UNITE(CKGAOSF,mode7,7,DKGAOSF);
FKGAOSF.fn.fn_global = PKDAOSF_newline;
FKGAOSF.nonlocals = A68_NIL;
ZJGAOSF.data[1] = A_UNITE(EKGAOSF,mode12,12,FKGAOSF);
KYDAOSF_put(DREAOSF_screen, A_HISVEC(GKGAOSF,ZJGAOSF,2,A68_52 ));
} 
 /* line 516: */
 /* line 517: */
HKGAOSF = YJGAOSF_ans;
} 
A_PROC_EXIT(read_parameters);
*ReturnedValue = (HKGAOSF);
return;
} 
#undef NL

A68_VOID  IKGAOSF_read_failed(A68_VC  *ReturnedValue)
{ 
A68_VC  JKGAOSF;  /* clause result */
A_PROC_ENTRY(read_failed);
{ 
(*HUFAOSF_rdcharno) = (*IUFAOSF_start_of_word);
 /* line 525: */
 /* line 526: */
JKGAOSF = CHDAOSF_nilstr;
} 
A_PROC_EXIT(read_failed);
*ReturnedValue = (JKGAOSF);
return;
} 
#undef NL

A68_VOID  KKGAOSF_nothing_read(A68_VC  *ReturnedValue)
{ 
A68_BOOL  LKGAOSF;  /* optbool result */
A68_VC  MKGAOSF;  /* clause result */
A68_VC  NKGAOSF;  /* avoid structure result */
A_PROC_ENTRY(nothing_read);
LKGAOSF = ((*(&A_VINDEX((*FUFAOSF_rdbuffer),(*HUFAOSF_rdcharno))))==WSFAOSF_sep);
if ( LKGAOSF )
{ /* line 532: */
LKGAOSF = ((*HUFAOSF_rdcharno)<=((*IUFAOSF_start_of_word)+1));
}
if ( LKGAOSF )
{ 
(*HUFAOSF_rdcharno)-=1;
 /* line 533: */
 /* line 534: */
 /* line 535: */
MKGAOSF = IHDAOSF_nullstr;
} 
else
{ 
IKGAOSF_read_failed(  &NKGAOSF );
MKGAOSF = NKGAOSF;
} 
A_PROC_EXIT(nothing_read);
*ReturnedValue = (MKGAOSF);
return;
} 
#undef NL

A68_VOID  RKGAOSF_check_read(A68_VC  Word_read, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  SKGAOSF_c;
A68_BOOL  TKGAOSF;  /* clause result */
A68_VC  UKGAOSF;  /* clause result */
A68_220  VKGAOSF;  /* collateral clause result */
A68_52  YKGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ZKGAOSF;  /* YIELD */
A68_52  ALGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  DLGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ELGAOSF;  /* YIELD */
A68_52  FLGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  GLGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  HLGAOSF;  /* avoid structure result */
A68_46  ILGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(check_read);
 /* line 542: */
{ 
SKGAOSF_c = (*(&A_VINDEX((*FUFAOSF_rdbuffer),(*HUFAOSF_rdcharno))));
 /* line 543: */
 /* line 544: */
 /* line 545: */
TKGAOSF = ETFAOSF_separator(SKGAOSF_c);
if ( TKGAOSF )
{ 
if ( (SKGAOSF_c==WSFAOSF_sep) )
{ 
(*HUFAOSF_rdcharno)-=1;
} 
 /* line 547: */
 /* line 548: */
UKGAOSF = Word_read;
} 
else
{ 
for ( ;; )
{ 
if ( !(!ETFAOSF_separator(JWFAOSF_next_char(Msg))) ) break;
/*SKIP*/;
}
 /* line 549: */
(*HUFAOSF_rdcharno)-=1;
 /* line 550: */
 /* line 551: */
if ( (Name.upb>0) )
{ 
 /* line 552: */
ZKGAOSF = XKGAOSF ;
VKGAOSF.data[0] = A_UNITE(YKGAOSF,mode7,7,ZKGAOSF);
VKGAOSF.data[1] = A_UNITE(ALGAOSF,mode6,6,SKGAOSF_c);
ELGAOSF = CLGAOSF ;
VKGAOSF.data[2] = A_UNITE(DLGAOSF,mode7,7,ELGAOSF);
VKGAOSF.data[3] = A_UNITE(FLGAOSF,mode7,7,Name);
 /* line 553: */
YCEAOSF_oneline( A_HISVEC(GLGAOSF,VKGAOSF,4,A68_52 ), &HLGAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(ILGAOSF,HLGAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(ILGAOSF,HLGAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 554: */
(*HUFAOSF_rdcharno) = (*IUFAOSF_start_of_word);
} 
 /* line 555: */
 /* line 556: */
UKGAOSF = CHDAOSF_nilstr;
} 
} 
A_PROC_EXIT(check_read);
*ReturnedValue = (UKGAOSF);
return;
} 
#undef NL

A68_VOID  MLGAOSF_check_value(A68_160  V, A68_INT  No, A68_97  Msg)
{ 
A68_201  NLGAOSF;  /* collateral clause result */
A68_52  QLGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RLGAOSF;  /* YIELD */
A68_52  SLGAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  TLGAOSF;  /* YIELD */
A68_85  ULGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  VLGAOSF;  /* avoid structure result */
A68_46  WLGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(check_value);
 /* line 562: */
 /* line 563: */
if ( (V.Sort!=No) )
{ 
RLGAOSF = PLGAOSF ;
NLGAOSF.data[0] = A_UNITE(QLGAOSF,mode7,7,RLGAOSF);
TLGAOSF = V.Sort ;
NLGAOSF.data[1] = A_UNITE(SLGAOSF,mode1,1,TLGAOSF);
 /* line 564: */
YCEAOSF_oneline( A_HISVEC(ULGAOSF,NLGAOSF,2,A68_52 ), &VLGAOSF );
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(WLGAOSF,VLGAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(WLGAOSF,VLGAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(check_value);
return;
} 
#undef NL

A68_VOID  IMGAOSF_read_token(A68_229  Rc, A68_VC  Token, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  JMGAOSF;  /* clause result */
A68_CHAR  KMGAOSF_c;
A68_INT  LMGAOSF;  /* YIELD */
A68_BOOL  MMGAOSF_ok;
A68_CHAR  NMGAOSF_char;
A68_VC  OMGAOSF;  /* OPERATORS - trim index */
A68_VC  PMGAOSF;  /* forall yield */
A68_CHAR * QMGAOSF;  /* forall control - []x */
A68_INT  RMGAOSF;  /* forall loop counter */
A68_VC  SMGAOSF;  /* avoid structure result */
A68_VC  TMGAOSF_ans;
A68_VC  UMGAOSF;  /* clause result */
A68_VC  VMGAOSF;  /* avoid structure result */
A68_VC  WMGAOSF;  /* avoid structure result */
A68_VC  XMGAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_token);
 /* line 575: */
 /* line 578: */
{ 
if ( Rc.Get_first )
{ 
JMGAOSF = MWFAOSF_first_char(Msg);
} 
else
{ 
JMGAOSF = QWFAOSF_next_first_char(Msg);
} 
KMGAOSF_c = JMGAOSF;
 /* line 579: */
 /* line 580: */
LMGAOSF = 1 ;
if ( (XTFAOSF_upper_case(KMGAOSF_c)==A_VINDEX(Token,LMGAOSF)) )
{ 
MMGAOSF_ok = A68_TRUE;
 /* line 581: */
PMGAOSF = A_VTRIM(OMGAOSF,(Token),A_VTSCRIPT(&(OMGAOSF.upb),(Token).upb,2,(Token).upb)) ;
RMGAOSF = PMGAOSF.upb -1;
QMGAOSF = PMGAOSF.data;
for (;RMGAOSF-- >= 0;
(QMGAOSF++
) )
{
NMGAOSF_char = *QMGAOSF;
 /* line 582: */
if ( !(MMGAOSF_ok) ) break;
MMGAOSF_ok = (XTFAOSF_upper_case(JWFAOSF_next_char(Msg))==NMGAOSF_char);
}
 /* line 583: */
 /* line 584: */
if ( MMGAOSF_ok )
{ 
ZCAAOSF_makervc( Token, &SMGAOSF );
TMGAOSF_ans = SMGAOSF;
 /* line 585: */
JWFAOSF_next_char(Msg);
 /* line 586: */
if ( Rc.Check )
{ 
RKGAOSF_check_read( TMGAOSF_ans, Token, Msg, &VMGAOSF );
UMGAOSF = VMGAOSF;
} 
else
{ 
 /* line 587: */
 /* line 588: */
UMGAOSF = TMGAOSF_ans;
} 
} 
else
{ 
 /* line 589: */
 /* line 590: */
IKGAOSF_read_failed(  &WMGAOSF );
UMGAOSF = WMGAOSF;
} 
} 
else
{ 
 /* line 591: */
KKGAOSF_nothing_read(  &XMGAOSF );
UMGAOSF = XMGAOSF;
} 
} 
A_PROC_EXIT(read_token);
*ReturnedValue = (UMGAOSF);
return;
} 
#undef NL

A68_VOID  ANGAOSF_read_char(A68_CHAR  Char, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  BNGAOSF;  /* clause result */
A68_VC  CNGAOSF;  /* avoid structure result */
A68_VC  DNGAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_char);
 /* line 597: */
 /* line 598: */
 /* line 599: */
if ( (MWFAOSF_first_char(Msg)==Char) )
{ 
 /* line 600: */
NCAAOSF_makervc( Char, &CNGAOSF );
BNGAOSF = CNGAOSF;
} 
else
{ 
KKGAOSF_nothing_read(  &DNGAOSF );
BNGAOSF = DNGAOSF;
} 
A_PROC_EXIT(read_char);
*ReturnedValue = (BNGAOSF);
return;
} 
#undef NL

A68_VOID  ONGAOSF_read_command_name(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  PNGAOSF_c;
A68_INT  QNGAOSF_index;
A68_BOOL  RNGAOSF;  /* optbool result */
A68_VC  SNGAOSF;  /* clause result */
A68_VC  TNGAOSF;  /* avoid structure result */
A68_BOOL  UNGAOSF;  /* optbool result */
A68_31  WNGAOSF_generator;   /* proc value of non-global proc */
A68_VC  COGAOSF;  /* avoid structure result */
A68_VC  BOGAOSF_ans;
A68_BOOL  DOGAOSF;  /* optbool result */
A68_CHAR  EOGAOSF;  /* clause result */
A68_INT  FOGAOSF;  /* YIELD */
A68_CHAR * GOGAOSF;  /* YIELD */
A68_VC  HOGAOSF;  /* OPERATORS - trim index */
A68_VC  IOGAOSF;  /* avoid structure result */
A68_VC  JOGAOSF;  /* avoid structure result */
A68_VC  KOGAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_command_name);
 /* line 617: */
 /* line 618: */
{ 
PNGAOSF_c = MWFAOSF_first_char(Msg);
 /* line 619: */
QNGAOSF_index = 0;
 /* line 620: */
RNGAOSF = (PNGAOSF_c=='!');
if ( ! RNGAOSF )
{ /* line 621: */
RNGAOSF = (PNGAOSF_c=='$');
}
 /* line 623: */
if ( RNGAOSF )
{ 
NCAAOSF_makervc( PNGAOSF_c, &TNGAOSF );
SNGAOSF = TNGAOSF;
} 
else
{ 
UNGAOSF = PTFAOSF_letter(PNGAOSF_c);
if ( ! UNGAOSF )
{ /* line 624: */
UNGAOSF = TTFAOSF_bold(PNGAOSF_c);
}
if ( UNGAOSF )
{ 
A_CLOSURE( WNGAOSF_generator, XNGAOSF_generator, YNGAOSF_generator );
A_CALLPROC(WNGAOSF_generator,(A68_TRUE, &COGAOSF),(A68_TRUE, &COGAOSF,(WNGAOSF_generator).nonlocals));
BOGAOSF_ans = COGAOSF;
 /* line 625: */
for ( ;; )
{ 
DOGAOSF = PTFAOSF_letter(PNGAOSF_c);
if ( ! DOGAOSF )
{DOGAOSF = TTFAOSF_bold(PNGAOSF_c);
}
if ( ! DOGAOSF )
{DOGAOSF = LTFAOSF_digit(PNGAOSF_c);
}
 /* line 626: */
if ( ! DOGAOSF )
{ /* line 627: */
DOGAOSF = ITFAOSF_visible_space(PNGAOSF_c);
}
if ( !(DOGAOSF) ) break;
 /* line 628: */
if ( PTFAOSF_letter(PNGAOSF_c) )
{ 
EOGAOSF = XTFAOSF_upper_case(PNGAOSF_c);
} 
else
{ 
EOGAOSF = PNGAOSF_c;
} 
FOGAOSF = QNGAOSF_index+=1 ;
GOGAOSF = (&A_VINDEX(BOGAOSF_ans,FOGAOSF)) ;
(*GOGAOSF) = EOGAOSF;
 /* line 629: */
 /* line 630: */
PNGAOSF_c = JWFAOSF_next_char(Msg);
}
 /* line 631: */
 /* line 632: */
 /* line 633: */
ZCAAOSF_makervc( A_VTRIM(HOGAOSF,(BOGAOSF_ans),A_VTSCRIPT(&(HOGAOSF.upb),(BOGAOSF_ans).upb,1,QNGAOSF_index)), &IOGAOSF );
RKGAOSF_check_read( IOGAOSF, GNGAOSF_command_name_str, Msg, &JOGAOSF );
SNGAOSF = JOGAOSF;
} 
else
{ 
 /* line 635: */
 /* line 636: */
KKGAOSF_nothing_read(  &KOGAOSF );
SNGAOSF = KOGAOSF;
} 
} 
} 
A_PROC_EXIT(read_command_name);
*ReturnedValue = (SNGAOSF);
return;
} 
#undef NL

A68_BOOL  MOGAOSF_is_command_name(A68_160  V)
{ 
A68_BOOL  NOGAOSF;  /* clause result */
A_PROC_ENTRY(is_command_name);
NOGAOSF = (V.Sort==KNGAOSF_command_name_no);
A_PROC_EXIT(is_command_name);
return( NOGAOSF );
} 
#undef NL

A68_VOID  QOGAOSF_get_command_name(A68_160  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  ROGAOSF;  /* clause result */
A_PROC_ENTRY(get_command_name);
 /* line 643: */
 /* line 644: */
{ 
MLGAOSF_check_value(V, KNGAOSF_command_name_no, Msg);
 /* line 645: */
 /* line 646: */
ROGAOSF = V.Value;
} 
A_PROC_EXIT(get_command_name);
*ReturnedValue = (ROGAOSF);
return;
} 
#undef NL

A68_VOID  TOGAOSF_read_command(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_235  VOGAOSF_first;   /* proc value of non-global proc */
A68_VC  APGAOSF_command;
A68_BOOL  BPGAOSF;  /* optbool result */
A68_VC  CPGAOSF;  /* avoid structure result */
A68_BOOL  DPGAOSF;  /* optbool result */
A68_BOOL  EPGAOSF;  /* clause result */
A68_201  FPGAOSF;  /* collateral clause result */
A68_52  GPGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  JPGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KPGAOSF;  /* YIELD */
A68_85  LPGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MPGAOSF;  /* avoid structure result */
A68_46  NPGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OPGAOSF;  /* clause result */
A_PROC_ENTRY(read_command);
 /* line 655: */
 /* line 659: */
{ 
(*JUFAOSF_line_stack) = CUFAOSF_no_lines;
 /* line 661: */
 /* line 662: */
 /* line 664: */
A_CLOSURE( VOGAOSF_first, WOGAOSF_first, XOGAOSF_first );
(( XOGAOSF_first * ) ( VOGAOSF_first.nonlocals )) -> Msg = Msg;
 /* line 669: */
 /* line 671: */
 /* line 672: */
BPGAOSF = (A_CALLPROC(VOGAOSF_first,(),((VOGAOSF_first).nonlocals))!=WSFAOSF_sep);
if ( ! BPGAOSF )
{{ 
for ( ;; )
{ 
if ( !((A_CALLPROC(VOGAOSF_first,(),((VOGAOSF_first).nonlocals))==WSFAOSF_sep)) ) break;
/*SKIP*/;
}
 /* line 673: */
(*HUFAOSF_rdcharno)-=1;
 /* line 674: */
ONGAOSF_read_command_name( Msg, &CPGAOSF );
APGAOSF_command = CPGAOSF;
 /* line 675: */
DPGAOSF = A_VSTRUCTCOMP(APGAOSF_command,CHDAOSF_nilstr);
if ( ! DPGAOSF )
{ /* line 676: */
DPGAOSF = (APGAOSF_command.upb==0);
}
 /* line 677: */
EPGAOSF = DPGAOSF;
} 
BPGAOSF = EPGAOSF;
}
if ( BPGAOSF )
{ 
FPGAOSF.data[0] = A_UNITE(GPGAOSF,mode7,7,GNGAOSF_command_name_str);
KPGAOSF = IPGAOSF ;
FPGAOSF.data[1] = A_UNITE(JPGAOSF,mode7,7,KPGAOSF);
 /* line 678: */
YCEAOSF_oneline( A_HISVEC(LPGAOSF,FPGAOSF,2,A68_52 ), &MPGAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(NPGAOSF,MPGAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(NPGAOSF,MPGAOSF,A68_VC ),(Msg).nonlocals));
} 
 /* line 679: */
 /* line 680: */
 /* line 684: */
OPGAOSF = APGAOSF_command;
} 
A_PROC_EXIT(read_command);
*ReturnedValue = (OPGAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void JSFAOSF(void)   /* initialise DECS commandreader */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","commandreader.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/commandsyntax.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osinterface.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_229  XLGAOSF;  /* collateral clause result */
A68_229  ZLGAOSF;  /* collateral clause result */
A68_229  BMGAOSF;  /* collateral clause result */
A68_229  DMGAOSF;  /* collateral clause result */
A68_159  LNGAOSF;  /* OPERATORS - mode -> union mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
EEFAOSF();   /* USE commandsyntax */
IPEAOSF();   /* USE osinterface */
ZRAAOSF();   /* USE messageproc */
QMDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/commandreader.a68";
A_config.translation_time = "Wed May  5 17:38:59 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "ISFAOSF (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:59 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS commandreader);
UEAALIB_a68config(LGAALIB_configinfo, NSFAOSF);
 /* line 59: */
 /* line 67: */
 /* line 68: */
ZSFAOSF_arrow_str = YSFAOSF;
 /* line 71: */
 /* line 74: */
 /* line 76: */
 /* line 78: */
 /* line 80: */
 /* line 82: */
 /* line 84: */
 /* line 87: */
 /* line 105: */
 /* line 110: */
 /* line 112: */
 /* line 113: */
 /* line 115: */
EUFAOSF_rdline = (&((&DUFAOSF_current_details)->Rdline));
 /* line 116: */
FUFAOSF_rdbuffer = (&((&DUFAOSF_current_details)->Rdbuffer));
 /* line 117: */
GUFAOSF_rdcharend = (&((&DUFAOSF_current_details)->Rdcharend));
 /* line 118: */
HUFAOSF_rdcharno = (&((&DUFAOSF_current_details)->Rdcharno));
 /* line 119: */
IUFAOSF_start_of_word = (&((&DUFAOSF_current_details)->Start_of_word));
 /* line 120: */
JUFAOSF_line_stack = (&((&DUFAOSF_current_details)->Stack));
 /* line 123: */
 /* line 135: */
 /* line 144: */
 /* line 145: */
 /* line 154: */
 /* line 167: */
 /* line 168: */
 /* line 172: */
 /* line 180: */
 /* line 205: */
 /* line 210: */
 /* line 220: */
 /* line 233: */
 /* line 240: */
 /* line 248: */
 /* line 264: */
 /* line 274: */
KXFAOSF_debug_reader = A68_FALSE;
 /* line 276: */
 /* line 521: */
 /* line 522: */
 /* line 524: */
 /* line 529: */
 /* line 531: */
 /* line 538: */
 /* line 561: */
 /* line 568: */
 /* line 569: */
XLGAOSF.Get_first = A68_TRUE;
XLGAOSF.Check = A68_TRUE;
YLGAOSF_first_and_check = XLGAOSF;
ZLGAOSF.Get_first = A68_TRUE;
ZLGAOSF.Check = A68_FALSE;
AMGAOSF_get_first = ZLGAOSF;
 /* line 570: */
BMGAOSF.Get_first = A68_FALSE;
BMGAOSF.Check = A68_TRUE;
CMGAOSF_check_end = BMGAOSF;
DMGAOSF.Get_first = A68_FALSE;
DMGAOSF.Check = A68_FALSE;
EMGAOSF_not_first = DMGAOSF;
 /* line 574: */
 /* line 595: */
 /* line 607: */
GNGAOSF_command_name_str = FNGAOSF;
 /* line 609: */
 /* line 610: */
 /* line 611: */
JNGAOSF_command_name_help = INGAOSF;
 /* line 612: */
KNGAOSF_command_name_no = 1;
 /* line 613: */
MNGAOSF_command_name_syntax = A_UNITE(LNGAOSF,mode1,1,(&KNGAOSF_command_name_no));
 /* line 616: */
 /* line 639: */
 /* line 642: */
 /* line 654: */
 /* line 714: */
A_PROC_EXIT(DECS commandreader);
} 
#undef NL
/* end of translation of commandreader.a68 */
