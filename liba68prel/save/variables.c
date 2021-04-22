/* UNAME:DUGAOSF */
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

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE142) VOID */

A_PROCEDURE(A68_VOID ,A68t158,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 59 CHAR */
struct A68t160 ;

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t160 ,A68_BOOL ,struct A68t97 ),(struct A68t160 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE160,BOOL,MODE97) VOID */
struct A68t160{
A68_VC  Name;
A68_VC  Default;
A68_VC  Value;
A68_INT  Sort;
A_PAD_INT(PAD_36)
struct A68t161  Set;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,INT,MODE161)  */
struct A68t162{
struct A68t160  Var;
struct A68t162 * Rest;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(MODE160,REF MODE162)  */
A_ISTRUCT(A68_CHAR ,8,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t166,(A68_VC ,A68_VC ,A68_INT ,struct A68t161 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t161 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE26,MODE26,INT,MODE161) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_VC ,5,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 5 MODE26 */
A_ISTRUCT(A68_CHAR ,22,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_BOOL ,A68t171,(A68_VC ),(A68_VC ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t172,(A68_VC ,struct A68t46 ),(A68_VC ,struct A68t46 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE26,MODE46) BOOL */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,MODE26,MODE97) VOID */
A_ISTRUCT(A68_VC ,3,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t178,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE26,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,25,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,12,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 6 MODE52 */

A_PROCEDURE(A68_VOID ,A68t184,(A68_VC *),(A68_VC *,void *));
typedef struct A68t184  A68_184 ;    /* PROC REF MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osinterface --- */
extern A68_113  MTBAOSF_update_access;
extern A68_113  QTBAOSF_update_truncate_access;
#define AQEAOSF_block_update_access MTBAOSF_update_access
#define BQEAOSF_block_update_truncate_access QTBAOSF_update_truncate_access
extern A68_VOID  QPBAOSF_get_env_var(A68_VC ,A68_VC *);
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
extern A68_97  TIBAOSF_global_msg;
extern A68_34 * DREAOSF_screen;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_92  MUAAOSF_user;
extern A68_92  SUAAOSF_log;
extern A68_BOOL  JXAAOSF_error_msg(struct A68t106 );
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  IHDAOSF_nullstr;
extern A68_VOID  JDAAOSF_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  PKDAOSF_newline(struct A68t34 *);
extern A68_VOID  KYDAOSF_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IPEAOSF(void);   /* osinterface */
extern void ZRAAOSF(void);   /* messageproc */
extern void QMDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_159   HUGAOSF = {"$Id: variables.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,IUGAOSF,HUGAOSF,59)
#define JUGAOSF_env_var 1
#define KUGAOSF_str_var 2
#define LUGAOSF_bool_var 3
static A68_163   MUGAOSF = {"notknown"}; 
A_GISVEC(A68_VC ,NUGAOSF,MUGAOSF,8)
A68_VC  OUGAOSF_unknown_var;
static A68_164   PUGAOSF = {"ON"}; 
A_GISVEC(A68_VC ,QUGAOSF,PUGAOSF,2)
A68_VC  RUGAOSF_true_var;
static A68_165   SUGAOSF = {"OFF"}; 
A_GISVEC(A68_VC ,TUGAOSF,SUGAOSF,3)
A68_VC  UUGAOSF_false_var;
#define VUGAOSF_nilvars (A68_162 *)A68_NIL
static A68_162 * WUGAOSF_varslist;
static A68_167   YVGAOSF = {"Variable "}; 
A_GISVEC(A68_VC ,ZVGAOSF,YVGAOSF,9)
static A68_168   AWGAOSF = {" remains \""}; 
A_GISVEC(A68_VC ,BWGAOSF,AWGAOSF,10)
static A68_167   HWGAOSF = {"Variable "}; 
A_GISVEC(A68_VC ,IWGAOSF,HWGAOSF,9)
static A68_170   JWGAOSF = {" has been changed to \""}; 
A_GISVEC(A68_VC ,KWGAOSF,JWGAOSF,22)
static A68_164   KYGAOSF = {"on"}; 
A_GISVEC(A68_VC ,LYGAOSF,KYGAOSF,2)
static A68_114   MYGAOSF = {"true"}; 
A_GISVEC(A68_VC ,NYGAOSF,MYGAOSF,4)
static A68_165   UYGAOSF = {"off"}; 
A_GISVEC(A68_VC ,VYGAOSF,UYGAOSF,3)
static A68_175   WYGAOSF = {"false"}; 
A_GISVEC(A68_VC ,XYGAOSF,WYGAOSF,5)
static A68_167   FZGAOSF = {"variable "}; 
A_GISVEC(A68_VC ,GZGAOSF,FZGAOSF,9)
static A68_176   HZGAOSF = {" can only be set to ON or OFF"}; 
A_GISVEC(A68_VC ,IZGAOSF,HZGAOSF,29)
static A68_168   TZGAOSF = {"variable \""}; 
A_GISVEC(A68_VC ,UZGAOSF,TZGAOSF,10)
static A68_177   VZGAOSF = {"\" is not known"}; 
A_GISVEC(A68_VC ,WZGAOSF,VZGAOSF,14)
static A68_179   HAHAOSF = {"\" is not an ELLA variable"}; 
A_GISVEC(A68_VC ,IAHAOSF,HAHAOSF,25)
static A68_167   NAHAOSF = {"Variable "}; 
A_GISVEC(A68_VC ,OAHAOSF,NAHAOSF,9)
static A68_180   SAHAOSF = {" is undefined"}; 
A_GISVEC(A68_VC ,TAHAOSF,SAHAOSF,13)
static A68_167   ABHAOSF = {"Variable "}; 
A_GISVEC(A68_VC ,BBHAOSF,ABHAOSF,9)
static A68_182   FBHAOSF = {" is set to \""}; 
A_GISVEC(A68_VC ,GBHAOSF,FBHAOSF,12)
typedef struct   /* env of non-global proc */
{
A68_VC  A;
} OXGAOSF_generator;

A68_VOID  BVGAOSF_add_var(A68_VC  Name, A68_VC  Default, A68_INT  Sort, A68_161  Set);

A_STATIC A68_VOID  MVGAOSF_msg(A68_92  No, A68_46  Params);

A68_VOID  SVGAOSF_null_set_var(A68_160  Var, A68_BOOL  Changed, A68_97  Msg);

A68_VOID  WVGAOSF_default_set_var(A68_160  Var, A68_BOOL  Changed, A68_97  Msg);

A68_VOID  QWGAOSF_get_var(A68_VC  Name, A68_VC  *ReturnedValue);

A68_BOOL  DXGAOSF_var_unset(A68_VC  Name);

A_STATIC A68_BOOL  KXGAOSF_test(A68_VC  A, A68_46  B);

A_STATIC A68_VOID  NXGAOSF_generator(A68_BOOL  LXGAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  EYGAOSF_set_var(A68_VC  Name, A68_VC  Value, A68_97  Msg);

A68_VOID  CAHAOSF_show_var(A68_VC  Var, A68_97  Msg);

A68_VOID  RBHAOSF_restore_vars(A68_VC  Buffer);

A68_VOID  SBHAOSF_remember_vars(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MVGAOSF_msg(A68_92  No, A68_46  Params)
{ 
A68_106  NVGAOSF;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(msg);
 /* line 73: */
if ( JXAAOSF_error_msg(A_UNITE(NVGAOSF,mode1,1,No)) )
{ 
A_CALLPROC(TIBAOSF_global_msg,(No, Params),(No, Params,(TIBAOSF_global_msg).nonlocals));
} 
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  NXGAOSF_generator(A68_BOOL  LXGAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OXGAOSF_generator *)NonLocals)->x)
{ 
A68_VC  PXGAOSF;  /* clause result */
A68_VC  QXGAOSF;  /* OPERATORS - dynamic generator */
{ 
QXGAOSF.upb = NL(A).upb ;
( LXGAOSF_anonymous? A_VLOC(A68_CHAR ,QXGAOSF): A_VHEAP(A68_CHAR ,QXGAOSF) );
PXGAOSF = QXGAOSF;
} 
*ReturnedValue = (PXGAOSF);
return;
} 
#undef NL
 /* line 64: */

A68_VOID  BVGAOSF_add_var(A68_VC  Name, A68_VC  Default, A68_INT  Sort, A68_161  Set)
{ 
A68_162  CVGAOSF;  /* collateral clause result */
A68_VC  DVGAOSF;  /* avoid structure result */
A68_VC  EVGAOSF;  /* avoid structure result */
A68_VC  FVGAOSF;  /* clause result */
A68_VC  GVGAOSF;  /* avoid structure result */
A68_VC  HVGAOSF;  /* avoid structure result */
A68_162 * IVGAOSF;  /* YIELD */
A68_97  OVGAOSF;  /* procedure value */
A_PROC_ENTRY(add_var);
 /* line 65: */
 /* line 66: */
{ 
 /* line 67: */
ZCAAOSF_makervc( Name, &DVGAOSF );
CVGAOSF.Var.Name = DVGAOSF;
 /* line 68: */
ZCAAOSF_makervc( Default, &EVGAOSF );
CVGAOSF.Var.Default = EVGAOSF;
if ( (Sort==JUGAOSF_env_var) )
{ 
QPBAOSF_get_env_var( Default, &GVGAOSF );
FVGAOSF = GVGAOSF;
} 
else
{ 
FVGAOSF = Default;
} 
 /* line 69: */
ZCAAOSF_makervc( FVGAOSF, &HVGAOSF );
CVGAOSF.Var.Value = HVGAOSF;
CVGAOSF.Var.Sort = Sort;
CVGAOSF.Var.Set = Set;
CVGAOSF.Rest = WUGAOSF_varslist;
IVGAOSF = A_HEAP(A68_162 ) ;
(*IVGAOSF) = CVGAOSF ;
WUGAOSF_varslist = IVGAOSF;
 /* line 72: */
 /* line 74: */
 /* line 75: */
OVGAOSF.fn.fn_global = MVGAOSF_msg;
OVGAOSF.nonlocals = A68_NIL;
A_CALLPROC(Set,((*(&(WUGAOSF_varslist->Var))), A68_FALSE, OVGAOSF),((*(&(WUGAOSF_varslist->Var))), A68_FALSE, OVGAOSF,(Set).nonlocals));
} 
A_PROC_EXIT(add_var);
return;
} 
#undef NL

A68_VOID  SVGAOSF_null_set_var(A68_160  Var, A68_BOOL  Changed, A68_97  Msg)
{ 
A_PROC_ENTRY(null_set_var);
 /* line 79: */
/*SKIP*/;
A_PROC_EXIT(null_set_var);
return;
} 
#undef NL

A68_VOID  WVGAOSF_default_set_var(A68_160  Var, A68_BOOL  Changed, A68_97  Msg)
{ 
A68_169  XVGAOSF;  /* collateral clause result */
A68_VC  CWGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  DWGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  EWGAOSF;  /* avoid structure result */
A68_46  FWGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_169  GWGAOSF;  /* collateral clause result */
A68_VC  LWGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  MWGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NWGAOSF;  /* avoid structure result */
A68_46  OWGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(default_set_var);
 /* line 82: */
 /* line 83: */
if ( Changed )
{ 
XVGAOSF.data[0] = ZVGAOSF;
 /* line 84: */
XVGAOSF.data[1] = Var.Name;
XVGAOSF.data[2] = BWGAOSF;
XVGAOSF.data[3] = Var.Value;
XVGAOSF.data[4] = A_HVEC(CWGAOSF,'\"',A68_CHAR );
 /* line 85: */
JDAAOSF_concat( A_HISVEC(DWGAOSF,XVGAOSF,5,A68_VC ), &EWGAOSF );
A_CALLPROC(Msg,(SUAAOSF_log, A_HVEC(FWGAOSF,EWGAOSF,A68_VC )),(SUAAOSF_log, A_HVEC(FWGAOSF,EWGAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
GWGAOSF.data[0] = IWGAOSF;
 /* line 86: */
GWGAOSF.data[1] = Var.Name;
GWGAOSF.data[2] = KWGAOSF;
GWGAOSF.data[3] = Var.Value;
GWGAOSF.data[4] = A_HVEC(LWGAOSF,'\"',A68_CHAR );
 /* line 87: */
JDAAOSF_concat( A_HISVEC(MWGAOSF,GWGAOSF,5,A68_VC ), &NWGAOSF );
A_CALLPROC(Msg,(SUAAOSF_log, A_HVEC(OWGAOSF,NWGAOSF,A68_VC )),(SUAAOSF_log, A_HVEC(OWGAOSF,NWGAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(default_set_var);
return;
} 
#undef NL

A68_VOID  QWGAOSF_get_var(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_BOOL  RWGAOSF_not_found;
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} TWGAOSF; 
A68_VC  SWGAOSF_ans;
A68_162 * UWGAOSF_vars;
A68_BOOL  VWGAOSF;  /* optbool result */
A68_160 * WWGAOSF_var;
A68_BOOL  XWGAOSF;  /* optbool result */
A68_VC  YWGAOSF;  /* clause result */
A68_VC  ZWGAOSF;  /* avoid structure result */
A68_VC  AXGAOSF;  /* avoid structure result */
A68_VC  BXGAOSF;  /* clause result */
A_PROC_ENTRY(get_var);
 /* line 91: */
 /* line 92: */
{ 
RWGAOSF_not_found = A68_TRUE;
 /* line 93: */
TWGAOSF.source = OUGAOSF_unknown_var ;
SWGAOSF_ans = (TWGAOSF.destination);
 /* line 94: */
UWGAOSF_vars = WUGAOSF_varslist;
 /* line 95: */
for ( ;; )
{ 
 /* line 96: */
VWGAOSF = (UWGAOSF_vars!=VUGAOSF_nilvars);
if ( VWGAOSF )
{VWGAOSF = RWGAOSF_not_found;
}
if ( !(VWGAOSF) ) break;
WWGAOSF_var = (&(UWGAOSF_vars->Var));
 /* line 97: */
 /* line 98: */
if ( A_VC_EQ(Name,(*(&(WWGAOSF_var->Name)))) )
{ 
RWGAOSF_not_found = A68_FALSE;
 /* line 99: */
XWGAOSF = ((*(&(WWGAOSF_var->Sort)))==JUGAOSF_env_var);
if ( XWGAOSF )
{ /* line 100: */
XWGAOSF = A_VC_EQ((*(&(WWGAOSF_var->Value))),OUGAOSF_unknown_var);
}
if ( XWGAOSF )
{ 
 /* line 101: */
 /* line 102: */
QPBAOSF_get_env_var( (*(&(WWGAOSF_var->Default))), &ZWGAOSF );
ZCAAOSF_makervc( ZWGAOSF, &AXGAOSF );
YWGAOSF = AXGAOSF;
} 
else
{ 
 /* line 103: */
YWGAOSF = (*(&(WWGAOSF_var->Value)));
} 
SWGAOSF_ans = YWGAOSF;
} 
 /* line 104: */
 /* line 105: */
UWGAOSF_vars = (*(&(UWGAOSF_vars->Rest)));
}
 /* line 106: */
 /* line 107: */
BXGAOSF = SWGAOSF_ans;
} 
A_PROC_EXIT(get_var);
*ReturnedValue = (BXGAOSF);
return;
} 
#undef NL

A68_BOOL  DXGAOSF_var_unset(A68_VC  Name)
{ 
A68_VC  EXGAOSF;  /* avoid structure result */
A68_VC  FXGAOSF_var;
A68_BOOL  GXGAOSF;  /* optbool result */
A68_BOOL  HXGAOSF;  /* clause result */
A_PROC_ENTRY(var_unset);
 /* line 111: */
 /* line 112: */
{ 
QWGAOSF_get_var( Name, &EXGAOSF );
FXGAOSF_var = EXGAOSF;
 /* line 113: */
GXGAOSF = (FXGAOSF_var.upb==0);
if ( ! GXGAOSF )
{ /* line 114: */
GXGAOSF = A_VC_EQ(FXGAOSF_var,OUGAOSF_unknown_var);
}
HXGAOSF = GXGAOSF;
} 
A_PROC_EXIT(var_unset);
return( HXGAOSF );
} 
#undef NL

A_STATIC A68_BOOL  KXGAOSF_test(A68_VC  A, A68_46  B)
{ 
A68_31  MXGAOSF_generator;   /* proc value of non-global proc */
A68_VC  SXGAOSF;  /* avoid structure result */
A68_VC  RXGAOSF_c;
A68_CHAR * TXGAOSF_ch;
A68_INT  UXGAOSF;  /* forall loop counter */
A68_BOOL  VXGAOSF;  /* optbool result */
A68_BOOL  WXGAOSF_equal;
A68_VC  XXGAOSF_d;
A68_VC * YXGAOSF;  /* forall control - []x */
A68_INT  ZXGAOSF;  /* forall loop counter */
A68_BOOL  AYGAOSF;  /* clause result */
A_PROC_ENTRY(test);
 /* line 118: */
 /* line 119: */
{ 
A_CLOSURE( MXGAOSF_generator, NXGAOSF_generator, OXGAOSF_generator );
(( OXGAOSF_generator * ) ( MXGAOSF_generator.nonlocals )) -> A = A;
A_CALLPROC(MXGAOSF_generator,(A68_TRUE, &SXGAOSF),(A68_TRUE, &SXGAOSF,(MXGAOSF_generator).nonlocals));
RXGAOSF_c = SXGAOSF;
A_VASSIGN2(A,RXGAOSF_c,A68_CHAR );
 /* line 120: */
 /* line 121: */
UXGAOSF = RXGAOSF_c.upb -1;
TXGAOSF_ch = RXGAOSF_c.data;
for (;UXGAOSF-- >= 0;
(TXGAOSF_ch++
) )
{
VXGAOSF = ((*TXGAOSF_ch)>='A');
if ( VXGAOSF )
{VXGAOSF = ((*TXGAOSF_ch)<='Z');
}
if ( VXGAOSF )
{ 
(*TXGAOSF_ch) = (A68_SSBITS)((A68_INT)(unsigned char)(*TXGAOSF_ch)+32);
} 
}
 /* line 122: */
WXGAOSF_equal = A68_FALSE;
 /* line 123: */
ZXGAOSF = B.upb -1;
YXGAOSF = B.data;
for (;ZXGAOSF-- >= 0;
(YXGAOSF++
) )
{
XXGAOSF_d = *YXGAOSF;
if ( !(!WXGAOSF_equal) ) break;
WXGAOSF_equal = A_VC_EQ(XXGAOSF_d,RXGAOSF_c);
}
 /* line 124: */
 /* line 125: */
AYGAOSF = WXGAOSF_equal;
} 
A_PROC_EXIT(test);
return( AYGAOSF );
} 
#undef NL

A68_VOID  EYGAOSF_set_var(A68_VC  Name, A68_VC  Value, A68_97  Msg)
{ 
A68_BOOL  FYGAOSF_not_found;
A68_162 * GYGAOSF_vars;
A68_BOOL  HYGAOSF;  /* optbool result */
A68_160 * IYGAOSF_var;
A68_174  JYGAOSF;  /* collateral clause result */
A68_VC  OYGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  PYGAOSF;  /* clause result */
A68_46  QYGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RYGAOSF;  /* clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} SYGAOSF; 
A68_174  TYGAOSF;  /* collateral clause result */
A68_VC  YYGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  ZYGAOSF;  /* clause result */
A68_46  AZGAOSF;  /* OPERATORS - istruct -> vector */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} BZGAOSF; 
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} CZGAOSF; 
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} DZGAOSF; 
A68_174  EZGAOSF;  /* collateral clause result */
A68_46  JZGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  KZGAOSF;  /* avoid structure result */
A68_46  LZGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MZGAOSF;  /* avoid structure result */
A68_VC  NZGAOSF_new;
A68_BOOL  OZGAOSF_changed;
A68_VC * PZGAOSF;  /* YIELD */
A68_161  QZGAOSF;  /* CALL */
A68_VC * RZGAOSF;  /* YIELD */
A68_174  SZGAOSF;  /* collateral clause result */
A68_46  XZGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  YZGAOSF;  /* avoid structure result */
A68_46  ZZGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(set_var);
 /* line 128: */
 /* line 129: */
{ 
FYGAOSF_not_found = A68_TRUE;
 /* line 130: */
GYGAOSF_vars = WUGAOSF_varslist;
 /* line 131: */
for ( ;; )
{ 
 /* line 132: */
HYGAOSF = (GYGAOSF_vars!=VUGAOSF_nilvars);
if ( HYGAOSF )
{HYGAOSF = FYGAOSF_not_found;
}
if ( !(HYGAOSF) ) break;
IYGAOSF_var = (&(GYGAOSF_vars->Var));
 /* line 133: */
 /* line 134: */
if ( A_VC_EQ(Name,(*(&(IYGAOSF_var->Name)))) )
{ 
FYGAOSF_not_found = A68_FALSE;
 /* line 135: */
 /* line 136: */
 /* line 137: */
if ( ((*(&(IYGAOSF_var->Sort)))==LUGAOSF_bool_var) )
{ 
JYGAOSF.data[0] = LYGAOSF;
JYGAOSF.data[1] = NYGAOSF;
JYGAOSF.data[2] = A_HVEC(OYGAOSF,'t',A68_CHAR );
 /* line 138: */
 /* line 139: */
PYGAOSF = KXGAOSF_test(Value, A_HISVEC(QYGAOSF,JYGAOSF,3,A68_VC ));
if ( PYGAOSF )
{ 
SYGAOSF.source = RUGAOSF_true_var ;
RYGAOSF = (SYGAOSF.destination);
} 
else
{ 
TYGAOSF.data[0] = VYGAOSF;
TYGAOSF.data[1] = XYGAOSF;
TYGAOSF.data[2] = A_HVEC(YYGAOSF,'f',A68_CHAR );
 /* line 140: */
 /* line 141: */
ZYGAOSF = KXGAOSF_test(Value, A_HISVEC(AZGAOSF,TYGAOSF,3,A68_VC ));
if ( ZYGAOSF )
{ 
BZGAOSF.source = UUGAOSF_false_var ;
RYGAOSF = (BZGAOSF.destination);
} 
else
{ 
 /* line 142: */
if ( (Value.upb==0) )
{ 
 /* line 143: */
 /* line 144: */
if ( A_VC_EQ((*(&(IYGAOSF_var->Value))),RUGAOSF_true_var) )
{ 
 /* line 145: */
CZGAOSF.source = UUGAOSF_false_var ;
RYGAOSF = (CZGAOSF.destination);
} 
else
{ 
 /* line 146: */
DZGAOSF.source = RUGAOSF_true_var ;
RYGAOSF = (DZGAOSF.destination);
} 
} 
else
{ 
EZGAOSF.data[0] = GZGAOSF;
 /* line 147: */
EZGAOSF.data[1] = Name;
EZGAOSF.data[2] = IZGAOSF;
JDAAOSF_concat( A_HISVEC(JZGAOSF,EZGAOSF,3,A68_VC ), &KZGAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(LZGAOSF,KZGAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(LZGAOSF,KZGAOSF,A68_VC ),(Msg).nonlocals));
 /* line 148: */
 /* line 149: */
 /* line 150: */
 /* line 151: */
RYGAOSF = IHDAOSF_nullstr;
} 
} 
} 
} 
else
{ 
ZCAAOSF_makervc( Value, &MZGAOSF );
RYGAOSF = MZGAOSF;
} 
NZGAOSF_new = RYGAOSF;
 /* line 152: */
OZGAOSF_changed = A_VC_EQ(NZGAOSF_new,(*(&(IYGAOSF_var->Value))));
 /* line 153: */
PZGAOSF = (&(IYGAOSF_var->Value)) ;
(*PZGAOSF) = NZGAOSF_new;
 /* line 154: */
QZGAOSF = (*(&(IYGAOSF_var->Set))) ;
A_CALLPROC(QZGAOSF,((*IYGAOSF_var), OZGAOSF_changed, Msg),((*IYGAOSF_var), OZGAOSF_changed, Msg,(QZGAOSF).nonlocals));
 /* line 155: */
 /* line 156: */
RZGAOSF = (&(IYGAOSF_var->Value)) ;
(*RZGAOSF) = NZGAOSF_new;
} 
 /* line 157: */
 /* line 158: */
GYGAOSF_vars = (*(&(GYGAOSF_vars->Rest)));
}
 /* line 159: */
 /* line 160: */
if ( FYGAOSF_not_found )
{ 
SZGAOSF.data[0] = UZGAOSF;
SZGAOSF.data[1] = Name;
SZGAOSF.data[2] = WZGAOSF;
 /* line 161: */
 /* line 162: */
JDAAOSF_concat( A_HISVEC(XZGAOSF,SZGAOSF,3,A68_VC ), &YZGAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(ZZGAOSF,YZGAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(ZZGAOSF,YZGAOSF,A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(set_var);
return;
} 
#undef NL

A68_VOID  CAHAOSF_show_var(A68_VC  Var, A68_97  Msg)
{ 
A68_VC  DAHAOSF;  /* avoid structure result */
A68_VC  EAHAOSF_value;
A68_174  FAHAOSF;  /* collateral clause result */
A68_VC  GAHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  JAHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  KAHAOSF;  /* avoid structure result */
A68_46  LAHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_181  MAHAOSF;  /* collateral clause result */
A68_52  PAHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QAHAOSF;  /* YIELD */
A68_52  RAHAOSF;  /* OPERATORS - mode -> union mode */
A68_52  UAHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VAHAOSF;  /* YIELD */
A68_52  WAHAOSF;  /* OPERATORS - mode -> union mode */
A68_56  XAHAOSF;  /* procedure value */
A68_85  YAHAOSF;  /* OPERATORS - istruct -> vector */
A68_183  ZAHAOSF;  /* collateral clause result */
A68_52  CBHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  DBHAOSF;  /* YIELD */
A68_52  EBHAOSF;  /* OPERATORS - mode -> union mode */
A68_52  HBHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  IBHAOSF;  /* YIELD */
A68_52  JBHAOSF;  /* OPERATORS - mode -> union mode */
A68_52  KBHAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  LBHAOSF;  /* YIELD */
A68_52  MBHAOSF;  /* OPERATORS - mode -> union mode */
A68_56  NBHAOSF;  /* procedure value */
A68_85  OBHAOSF;  /* OPERATORS - istruct -> vector */
A68_162 * PBHAOSF_vars;
A_PROC_ENTRY(show_var);
 /* line 166: */
 /* line 167: */
if ( (Var.upb>0) )
{ 
QWGAOSF_get_var( Var, &DAHAOSF );
EAHAOSF_value = DAHAOSF;
 /* line 168: */
 /* line 169: */
if ( A_VC_EQ(EAHAOSF_value,OUGAOSF_unknown_var) )
{ 
FAHAOSF.data[0] = A_HVEC(GAHAOSF,'\"',A68_CHAR );
FAHAOSF.data[1] = Var;
FAHAOSF.data[2] = IAHAOSF;
 /* line 170: */
JDAAOSF_concat( A_HISVEC(JAHAOSF,FAHAOSF,3,A68_VC ), &KAHAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(LAHAOSF,KAHAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(LAHAOSF,KAHAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 171: */
if ( (EAHAOSF_value.upb==0) )
{ 
QAHAOSF = OAHAOSF ;
MAHAOSF.data[0] = A_UNITE(PAHAOSF,mode7,7,QAHAOSF);
MAHAOSF.data[1] = A_UNITE(RAHAOSF,mode7,7,Var);
VAHAOSF = TAHAOSF ;
MAHAOSF.data[2] = A_UNITE(UAHAOSF,mode7,7,VAHAOSF);
XAHAOSF.fn.fn_global = PKDAOSF_newline;
XAHAOSF.nonlocals = A68_NIL;
MAHAOSF.data[3] = A_UNITE(WAHAOSF,mode12,12,XAHAOSF);
 /* line 172: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(YAHAOSF,MAHAOSF,4,A68_52 ));
} 
else
{ 
DBHAOSF = BBHAOSF ;
ZAHAOSF.data[0] = A_UNITE(CBHAOSF,mode7,7,DBHAOSF);
ZAHAOSF.data[1] = A_UNITE(EBHAOSF,mode7,7,Var);
IBHAOSF = GBHAOSF ;
ZAHAOSF.data[2] = A_UNITE(HBHAOSF,mode7,7,IBHAOSF);
ZAHAOSF.data[3] = A_UNITE(JBHAOSF,mode7,7,EAHAOSF_value);
 /* line 173: */
LBHAOSF = '\"' ;
ZAHAOSF.data[4] = A_UNITE(KBHAOSF,mode6,6,LBHAOSF);
NBHAOSF.fn.fn_global = PKDAOSF_newline;
NBHAOSF.nonlocals = A68_NIL;
ZAHAOSF.data[5] = A_UNITE(MBHAOSF,mode12,12,NBHAOSF);
 /* line 174: */
 /* line 175: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(OBHAOSF,ZAHAOSF,6,A68_52 ));
} 
} 
} 
else
{ 
PBHAOSF_vars = WUGAOSF_varslist;
 /* line 176: */
for ( ;; )
{ 
 /* line 177: */
if ( !((PBHAOSF_vars!=VUGAOSF_nilvars)) ) break;
CAHAOSF_show_var((*(&((&(PBHAOSF_vars->Var))->Name))), Msg);
 /* line 178: */
 /* line 179: */
PBHAOSF_vars = (*(&(PBHAOSF_vars->Rest)));
}
 /* line 180: */
} 
A_PROC_EXIT(show_var);
return;
} 
#undef NL

A68_VOID  RBHAOSF_restore_vars(A68_VC  Buffer)
{ 
A_PROC_ENTRY(restore_vars);
/*SKIP*/;
A_PROC_EXIT(restore_vars);
return;
} 
#undef NL

A68_VOID  SBHAOSF_remember_vars(A68_VC  *ReturnedValue)
{ 
A68_VC  TBHAOSF;  /* clause result */
A_PROC_ENTRY(remember_vars);
TBHAOSF = IHDAOSF_nullstr;
A_PROC_EXIT(remember_vars);
*ReturnedValue = (TBHAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void EUGAOSF(void)   /* initialise DECS variables */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","variables.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/osinterface.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IPEAOSF();   /* USE osinterface */
ZRAAOSF();   /* USE messageproc */
QMDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/variables.a68";
A_config.translation_time = "Sun Apr 18 20:07:50 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "DUGAOSF (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:50 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS variables);
UEAALIB_a68config(LGAALIB_configinfo, IUGAOSF);
 /* line 47: */
 /* line 52: */
 /* line 54: */
 /* line 56: */
OUGAOSF_unknown_var = NUGAOSF;
RUGAOSF_true_var = QUGAOSF;
UUGAOSF_false_var = TUGAOSF;
 /* line 58: */
 /* line 59: */
WUGAOSF_varslist = VUGAOSF_nilvars;
 /* line 62: */
 /* line 78: */
 /* line 81: */
 /* line 90: */
 /* line 110: */
 /* line 117: */
 /* line 127: */
 /* line 165: */
 /* line 183: */
 /* line 185: */
 /* line 188: */
 /* line 191: */
A_PROC_EXIT(DECS variables);
} 
#undef NL
/* end of translation of variables.a68 */
