/* UNAME:LKJAOSF */
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
A_ISTRUCT(A68_CHAR ,62,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 62 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t217,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT,MODE26,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,3,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(A68_VOID ,A68t222,(A68_VC ,A68_VC ,struct A68t195 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t195 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE26,MODE26,MODE195,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t223,(A68_VC ),(A68_VC ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,8,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,502,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 502 CHAR */

A_PROCEDURE(A68_BOOL ,A68t226,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t227,(A68_CHAR ,A68_INT ,A68_INT *),(A68_CHAR ,A68_INT ,A68_INT *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(CHAR,INT,REF INT) BOOL */
A_ISTRUCT(A68_CHAR ,22,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_BOOL ,A68t229,(A68_INT ,A68_INT ,struct A68t97 ),(A68_INT ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(INT,INT,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,5,A68t230);
typedef struct A68t230  A68_230 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t231);
typedef struct A68t231  A68_231 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_INT ,5,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 5 INT */
A_ISTRUCT(A68_CHAR ,21,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t208 ,struct A68t97 ,A68_VC *),(struct A68t208 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE208,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t237,(struct A68t175 ,struct A68t97 ),(struct A68t175 ,struct A68t97 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE175,MODE97) INT */
A_ISTRUCT(A68_CHAR ,12,A68t238);
typedef struct A68t238  A68_238 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,137,A68t239);
typedef struct A68t239  A68_239 ;    /* STRUCT 137 CHAR */
A_ISTRUCT(A68_CHAR ,195,A68t240);
typedef struct A68t240  A68_240 ;    /* STRUCT 195 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t241);
typedef struct A68t241  A68_241 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t242);
typedef struct A68t242  A68_242 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t243);
typedef struct A68t243  A68_243 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,97,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 97 CHAR */

A_PROCEDURE(A68_VOID ,A68t245,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(BOOL,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,87,A68t246);
typedef struct A68t246  A68_246 ;    /* STRUCT 87 CHAR */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t175 ,A68_VC ,struct A68t97 ,struct A68t133 *),(struct A68t175 ,A68_VC ,struct A68t97 ,struct A68t133 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE175,MODE26,MODE97) MODE133 */
A_ISTRUCT(A68_CHAR ,42,A68t248);
typedef struct A68t248  A68_248 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,67,A68t250);
typedef struct A68t250  A68_250 ;    /* STRUCT 67 CHAR */
A_ISTRUCT(A68_CHAR ,127,A68t251);
typedef struct A68t251  A68_251 ;    /* STRUCT 127 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 23 CHAR */

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t176 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t157 *),(struct A68t176 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t157 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE176,REF INT,REF MODE26,MODE97) MODE157 */
A_ISTRUCT(A68_CHAR ,98,A68t254);
typedef struct A68t254  A68_254 ;    /* STRUCT 98 CHAR */

A_PROCEDURE(A68_VOID ,A68t255,(A68_BOOL ,struct A68t173 *),(A68_BOOL ,struct A68t173 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(BOOL) MODE173 */
A_ISTRUCT(A68_CHAR ,2,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t175 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t175 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE175,REF BOOL,MODE26,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,30,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_INT ,A68t259,(struct A68t175 ,struct A68t97 ,struct A68t46 ),(struct A68t175 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE175,MODE97,MODE46) INT */
A_ISTRUCT(A68_CHAR ,9,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,210,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 210 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t262);
typedef struct A68t262  A68_262 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t264);
typedef struct A68t264  A68_264 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t265);
typedef struct A68t265  A68_265 ;    /* STRUCT 31 CHAR */
struct A68t266{
A68_INT  Lwb;
A_PAD_INT(PAD_44)
A68_INT  Upb;
A_PAD_INT(PAD_45)
};
typedef struct A68t266  A68_266 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t175 ,struct A68t266 ,struct A68t97 ,struct A68t266 *),(struct A68t175 ,struct A68t266 ,struct A68t97 ,struct A68t266 *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE175,MODE266,MODE97) MODE266 */
A_ISTRUCT(A68_CHAR ,136,A68t268);
typedef struct A68t268  A68_268 ;    /* STRUCT 136 CHAR */

A_PROCEDURE(A68_VOID ,A68t269,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t269  A68_269 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,28,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 28 CHAR */

A_PROCEDURE(A68_CHAR ,A68t271,(struct A68t175 ,struct A68t97 ),(struct A68t175 ,struct A68t97 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE175,MODE97) CHAR */

A_PROCEDURE(struct A68t183 *,A68t272,(void),(void *));
typedef struct A68t272  A68_272 ;    /* PROC REF MODE183 */
A_ISTRUCT(struct A68t174 ,2,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 2 MODE174 */
A_ISTRUCT(struct A68t192 ,22,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 22 MODE192 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandreader --- */
extern A68_BOOL  QSFAOSF_instring(A68_CHAR ,A68_VC );
#define VSFAOSF_sp ' '
#define WSFAOSF_sep ','
extern A68_BOOL  BTFAOSF_space(A68_CHAR );
extern A68_BOOL  ETFAOSF_separator(A68_CHAR );
extern A68_BOOL  ITFAOSF_visible_space(A68_CHAR );
extern A68_BOOL  LTFAOSF_digit(A68_CHAR );
extern A68_BOOL  PTFAOSF_letter(A68_CHAR );
extern A68_BOOL  TTFAOSF_bold(A68_CHAR );
extern A68_CHAR  XTFAOSF_upper_case(A68_CHAR );
extern A68_VC * FUFAOSF_rdbuffer;
extern A68_INT * GUFAOSF_rdcharend;
extern A68_INT * HUFAOSF_rdcharno;
extern A68_INT * IUFAOSF_start_of_word;
extern A68_CHAR  JWFAOSF_next_char(struct A68t97 );
extern A68_CHAR  MWFAOSF_first_char(struct A68t97 );
extern A68_CHAR  QWFAOSF_next_first_char(struct A68t97 );
extern A68_VOID  KKGAOSF_nothing_read(A68_VC *);
extern A68_VOID  RKGAOSF_check_read(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *);
extern A68_VOID  MLGAOSF_check_value(struct A68t175 ,A68_INT ,struct A68t97 );
extern A68_208  YLGAOSF_first_and_check;
extern A68_208  AMGAOSF_get_first;
extern A68_208  EMGAOSF_not_first;
extern A68_VOID  IMGAOSF_read_token(struct A68t208 ,A68_VC ,struct A68t97 ,A68_VC *);
extern A68_VOID  ANGAOSF_read_char(A68_CHAR ,struct A68t97 ,A68_VC *);
extern A68_INT  KNGAOSF_command_name_no;
extern A68_VC  GNGAOSF_command_name_str;
extern A68_VC  JNGAOSF_command_name_help;
extern A68_VOID  ONGAOSF_read_command_name(struct A68t97 ,A68_VC *);
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
#define WEFAOSF_opt_syn 0X2U
extern A68_VOID  IFFAOSF_alt(struct A68t173 ,A68_172 *);
extern A68_183 * XLFAOSF_add_readers(struct A68t183 *,struct A68t191 );
/* --- End of imports from commandsyntax --- */


/* --- Imports from basics --- */
#define HFHAOSF_maxid 255
extern A68_INT  QIHAOSF_charstoint(A68_VC ,A68_BOOL *);
extern A68_INT  TVHAOSF_maxint;
extern A68_INT  AWHAOSF_largeint;
extern A68_INT  BWHAOSF_minint;
extern A68_INT  CWHAOSF_largeminint;
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_113  MTBAOSF_update_access;
extern A68_113  QTBAOSF_update_truncate_access;
#define AQEAOSF_block_update_access MTBAOSF_update_access
#define BQEAOSF_block_update_truncate_access QTBAOSF_update_truncate_access
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern A68_VOID  BFCAOSF_parse_filename(A68_VC ,A68_VC ,struct A68t97 ,A68_133 *);
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc = argc; A_argv = argv; A_envp = envp

#define DHCAOSF_prelude A_prelude
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <math.h>

#define ZCFAOSF_sqrt sqrt
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
static A68_215   PKJAOSF = {"$Id: kernelreader.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,QKJAOSF,PKJAOSF,62)
static A68_216   RKJAOSF = {"+-*/%<>=:.$#^@"}; 
A_GISVEC(A68_VC ,SKJAOSF,RKJAOSF,14)
static A68_VC  TKJAOSF_opsymbols;
static A68_218   CLJAOSF = {"No "}; 
A_GISVEC(A68_VC ,DLJAOSF,CLJAOSF,3)
static A68_219   HLJAOSF = {" may have more than "}; 
A_GISVEC(A68_VC ,ILJAOSF,HLJAOSF,20)
static A68_220   MLJAOSF = {" characters"}; 
A_GISVEC(A68_VC ,NLJAOSF,MLJAOSF,11)
A68_VC  JMJAOSF_plus_str;
A68_VC  LMJAOSF_minus_str;
A68_VC  NMJAOSF_period_str;
A68_VC  PMJAOSF_semicolon_str;
A68_VC  RMJAOSF_comma_str;
A68_VC  TMJAOSF_openrnd_str;
A68_VC  VMJAOSF_closernd_str;
A68_VC  XMJAOSF_ampersand_str;
static A68_INT  YMJAOSF_plus_no;
static A68_INT  ZMJAOSF_minus_no;
static A68_INT  ANJAOSF_period_no;
static A68_INT  BNJAOSF_semicolon_no;
static A68_INT  CNJAOSF_comma_no;
static A68_INT  DNJAOSF_openrnd_no;
static A68_INT  ENJAOSF_closernd_no;
static A68_INT  FNJAOSF_ampersand_no;
A68_174  HNJAOSF_plus_syntax;
A68_174  JNJAOSF_minus_syntax;
A68_174  LNJAOSF_period_syntax;
A68_174  NNJAOSF_semicolon_syntax;
A68_174  PNJAOSF_comma_syntax;
A68_174  RNJAOSF_openrnd_syntax;
A68_174  TNJAOSF_closernd_syntax;
A68_174  VNJAOSF_ampersand_syntax;
static A68_224   AQJAOSF = {"<number>"}; 
A_GISVEC(A68_VC ,BQJAOSF,AQJAOSF,8)
A68_VC  CQJAOSF_int_str;
static A68_225   DQJAOSF = 
{  'T', 'h', 'e', ' ', 'c', 'h', 'a', 'r',
   'a', 'c', 't', 'e', 'r', ' ', 'r', 'e',
   'p', 'r', 'e', 's', 'e', 'n', 't', 'a',
   't', 'i', 'o', 'n', ' ', 'o', 'f', ' ',
   'a', ' ', '3', '2', '-', 'b', 'i', 't',
   ' ', '(', '2', '\'', 's', ' ', 'c', 'o',
   'm', 'p', 'l', 'e', 'm', 'e', 'n', 't',
   ')', ' ', 'i', 'n', 't', 'e', 'g', 'e',
   'r', '.', ' ', ' ', 'B', 'y', ' ', 'd',
   'e', 'f', 'a', 'u', 'l', 't', ' ', 't',
   'h', 'e', ' ', 'n', 'u', 'm', 'b', 'e',
   'r', ' ', 's', 'h', 'o', 'u', 'l', 'd',
   ' ', 'b', 'e', ' ', 'g', 'i', 'v', 'e',
   'n', ' ', 'i', 'n', ' ', 'd', 'e', 'c',
   'i', 'm', 'a', 'l', ' ', 'r', 'e', 'p',
   'r', 'e', 's', 'e', 'n', 't', 'a', 't',
   'i', 'o', 'n', ' ', 'c', 'o', 'm', 'p',
   'r', 'i', 's', 'i', 'n', 'g', ' ', 'a',
   'n', ' ', 'o', 'p', 't', 'i', 'o', 'n',
   'a', 'l', ' ', 's', 'i', 'g', 'n', ' ',
   'c', 'h', 'a', 'r', 'a', 'c', 't', 'e',
   'r', ' ', '(', '\"', '+', '\"', ' ', 'o',
   'r', ' ', '\"', '-', '\"', ')', ' ', 'f',
   'o', 'l', 'l', 'o', 'w', 'e', 'd', ' ',
   'b', 'y', ' ', 'd', 'i', 'g', 'i', 't',
   's', ' ', '\"', '0', '\"', ' ', 't', 'o',
   ' ', '\"', '9', '\"', '.', ' ', ' ', 'A',
   'l', 't', 'e', 'r', 'n', 'a', 't', 'i',
   'v', 'e', 'l', 'y', ',', ' ', 't', 'h',
   'e', ' ', 'n', 'u', 'm', 'b', 'e', 'r',
   ' ', 'm', 'a', 'y', ' ', 'b', 'e', ' ',
   's', 'p', 'e', 'c', 'i', 'f', 'i', 'e',
   'd', ' ', 'i', 'n', ' ', 'r', 'a', 'd',
   'i', 'x', ' ', '2', ',', ' ', '4', ',',
   ' ', '8', ' ', 'o', 'r', ' ', '1', '6',
   ' ', 'b', 'y', ' ', 'p', 'r', 'e', 'f',
   'i', 'x', 'i', 'n', 'g', ' ', 'i', 't',
   ' ', 'w', 'i', 't', 'h', ' ', 't', 'h',
   'e', ' ', 'r', 'a', 'd', 'i', 'x', ' ',
   'f', 'o', 'l', 'l', 'o', 'w', 'e', 'd',
   ' ', 'b', 'y', ' ', 't', 'h', 'e', ' ',
   'l', 'e', 't', 't', 'e', 'r', ' ', '\"',
   'r', '\"', '.', ' ', ' ', 'T', 'h', 'e',
   ' ', 'l', 'e', 't', 't', 'e', 'r', 's',
   ' ', '\"', 'a', '\"', ' ', 't', 'o', ' ',
   '\"', 'f', '\"', ' ', '(', 'i', 'n', ' ',
   'e', 'i', 't', 'h', 'e', 'r', ' ', 'c',
   'a', 's', 'e', ')', ' ', 'a', 'r', 'e',
   ' ', 'u', 's', 'e', 'd', ' ', 't', 'o',
   ' ', 'r', 'e', 'p', 'r', 'e', 's', 'e',
   'n', 't', ' ', 't', 'h', 'e', ' ', 'd',
   'i', 'g', 'i', 't', 's', ' ', '1', '0',
   ' ', 't', 'o', ' ', '1', '5', ' ', 'r',
   'e', 's', 'p', 'e', 'c', 't', 'i', 'v',
   'e', 'l', 'y', ' ', 'i', 'n', ' ', 'r',
   'a', 'd', 'i', 'x', ' ', '1', '6', '.',
   ' ', ' ', 'F', 'o', 'r', ' ', 'e', 'x',
   'a', 'm', 'p', 'l', 'e', ',', ' ', '\"',
   '-', '1', '6', 'r', 'f', 'f', '\"', ' ',
   'm', 'a', 'y', ' ', 'b', 'e', ' ', 'u',
   's', 'e', 'd', ' ', 't', 'o', ' ', 'r',
   'e', 'p', 'r', 'e', 's', 'e', 'n', 't',
   ' ', '-', '2', '5', '5', '.' 
} ; 
A_GISVEC(A68_VC ,EQJAOSF,DQJAOSF,502)
static A68_VC  FQJAOSF_int_help;
static A68_INT  GQJAOSF_zero;
static A68_228   TQJAOSF = {"0123456789ABCDEFabcdef"}; 
A_GISVEC(A68_VC ,UQJAOSF,TQJAOSF,22)
static A68_230   MRJAOSF = {"This "}; 
A_GISVEC(A68_VC ,NRJAOSF,MRJAOSF,5)
static A68_231   RRJAOSF = {" is too large"}; 
A_GISVEC(A68_VC ,SRJAOSF,RRJAOSF,13)
static A68_234   LSJAOSF = {" expected after radix"}; 
A_GISVEC(A68_VC ,MSJAOSF,LSJAOSF,21)
static A68_230   TSJAOSF = {"This "}; 
A_GISVEC(A68_VC ,USJAOSF,TSJAOSF,5)
static A68_234   YSJAOSF = {" has an illegal radix"}; 
A_GISVEC(A68_VC ,ZSJAOSF,YSJAOSF,21)
static A68_INT  RTJAOSF_int_no;
A68_174  TTJAOSF_int_syntax;
static A68_238   TUJAOSF = {"<identifier>"}; 
A_GISVEC(A68_VC ,UUJAOSF,TUJAOSF,12)
A68_VC  VUJAOSF_ident_str;
static A68_239   WUJAOSF = {"An ELLA MAKE, LET, INT or TYPE name.  This is a lower case letter followed by further lower case letters, digits or visible spaces (\"_\")."}; 
A_GISVEC(A68_VC ,XUJAOSF,WUJAOSF,137)
static A68_VC  YUJAOSF_ident_help;
static A68_INT  ZUJAOSF_ident_no;
A68_174  BVJAOSF_ident_syntax;
static A68_224   NVJAOSF = {"<fnname>"}; 
A_GISVEC(A68_VC ,OVJAOSF,NVJAOSF,8)
A68_VC  PVJAOSF_fnname_str;
static A68_240   QVJAOSF = {"An ELLA FN or MACro name.  This is either an upper case letter followed by further upper case letters, digits or visible spaces (\"_\"), or, one or more of the symbol characters: \" + opsymbols + \"."}; 
A_GISVEC(A68_VC ,RVJAOSF,QVJAOSF,195)
static A68_VC  SVJAOSF_fnname_help;
static A68_INT  TVJAOSF_fnname_no;
A68_174  VVJAOSF_fnname_syntax;
static A68_241   GXJAOSF = {"<name>"}; 
A_GISVEC(A68_VC ,HXJAOSF,GXJAOSF,6)
A68_VC  IXJAOSF_name_str;
static A68_242   JXJAOSF = {"<declname>"}; 
A_GISVEC(A68_VC ,KXJAOSF,JXJAOSF,10)
A68_VC  LXJAOSF_declname_str;
static A68_243   MXJAOSF = {"An ELLA function name or an ELLA identifier."}; 
A_GISVEC(A68_VC ,NXJAOSF,MXJAOSF,44)
static A68_VC  OXJAOSF_name_help;
#define PXJAOSF_declname_help OXJAOSF_name_help
static A68_INT  QXJAOSF_name_no;
static A68_INT  RXJAOSF_declname_no;
A68_174  TXJAOSF_name_syntax;
A68_174  VXJAOSF_declname_syntax;
A68_211  EYJAOSF_is_declname;
A68_212  GYJAOSF_get_declname;
static A68_224   IYJAOSF = {"<string>"}; 
A_GISVEC(A68_VC ,JYJAOSF,IYJAOSF,8)
A68_VC  KYJAOSF_string_str;
static A68_244   LYJAOSF = {"An arbitary string of printable characters excluding  characters used as separators (\" \" and \",\")"}; 
A_GISVEC(A68_VC ,MYJAOSF,LYJAOSF,97)
static A68_VC  NYJAOSF_string_help;
static A68_INT  OYJAOSF_string_no;
A68_174  QYJAOSF_string_syntax;
static A68_242   SZJAOSF = {"<filename>"}; 
A_GISVEC(A68_VC ,TZJAOSF,SZJAOSF,10)
A68_VC  UZJAOSF_filename_str;
static A68_246   VZJAOSF = {"A string of characters that the host operating system will accept as a valid file name."}; 
A_GISVEC(A68_VC ,WZJAOSF,VZJAOSF,87)
static A68_VC  XZJAOSF_filename_help;
static A68_INT  YZJAOSF_filename_no;
A68_174  AAKAOSF_filename_syntax;
static A68_241   TAKAOSF = {"<text>"}; 
A_GISVEC(A68_VC ,UAKAOSF,TAKAOSF,6)
A68_VC  VAKAOSF_text_str;
static A68_248   WAKAOSF = {"The remainder of the current command line."}; 
A_GISVEC(A68_VC ,XAKAOSF,WAKAOSF,42)
static A68_VC  YAKAOSF_text_help;
static A68_INT  ZAKAOSF_text_no;
A68_174  BBKAOSF_text_syntax;
static A68_249   HBKAOSF = {" may not continue onto the next line"}; 
A_GISVEC(A68_VC ,IBKAOSF,HBKAOSF,36)
static A68_231   ACKAOSF = {"<contextname>"}; 
A_GISVEC(A68_VC ,BCKAOSF,ACKAOSF,13)
A68_VC  CCKAOSF_contextname_str;
static A68_231   DCKAOSF = {"<importsname>"}; 
A_GISVEC(A68_VC ,ECKAOSF,DCKAOSF,13)
A68_VC  FCKAOSF_importname_str;
static A68_250   GCKAOSF = {"An ELLA contextname has the same syntax as an ELLA identifier name."}; 
A_GISVEC(A68_VC ,HCKAOSF,GCKAOSF,67)
static A68_VC  ICKAOSF_contextname_help;
static A68_251   JCKAOSF = {"The name of an imports region.  This is specified by the \"/\" character immediately followed by an identifier (lower case) name."}; 
A_GISVEC(A68_VC ,KCKAOSF,JCKAOSF,127)
static A68_VC  LCKAOSF_importname_help;
static A68_INT  MCKAOSF_contextname_no;
static A68_INT  NCKAOSF_importname_no;
A68_174  PCKAOSF_contextname_syntax;
A68_174  RCKAOSF_importname_syntax;
static A68_252   HDKAOSF = {" expected after \"/\" in "}; 
A_GISVEC(A68_VC ,IDKAOSF,HDKAOSF,23)
static A68_224   FFKAOSF = {"ON | OFF"}; 
A_GISVEC(A68_VC ,GFKAOSF,FFKAOSF,8)
A68_VC  HFKAOSF_switch_str;
static A68_254   IFKAOSF = {"This is used by certain commands to set or reset a flag.\"ON\" or \"OFF\" may be given in either case."}; 
A_GISVEC(A68_VC ,JFKAOSF,IFKAOSF,98)
static A68_VC  KFKAOSF_switch_help;
static A68_INT  LFKAOSF_switch_no;
A68_174  WFKAOSF_switch_syntax;
static A68_256   ZFKAOSF = {"ON"}; 
A_GISVEC(A68_VC ,AGKAOSF,ZFKAOSF,2)
static A68_218   FGKAOSF = {"OFF"}; 
A_GISVEC(A68_VC ,GGKAOSF,FGKAOSF,3)
static A68_256   QGKAOSF = {"ON"}; 
A_GISVEC(A68_VC ,RGKAOSF,QGKAOSF,2)
static A68_114   YGKAOSF = {"= ON"}; 
A_GISVEC(A68_VC ,ZGKAOSF,YGKAOSF,4)
static A68_230   LHKAOSF = {"= OFF"}; 
A_GISVEC(A68_VC ,MHKAOSF,LHKAOSF,5)
static A68_218   THKAOSF = {":= "}; 
A_GISVEC(A68_VC ,UHKAOSF,THKAOSF,3)
static A68_218   XHKAOSF = {"OFF"}; 
A_GISVEC(A68_VC ,YHKAOSF,XHKAOSF,3)
static A68_256   BIKAOSF = {"ON"}; 
A_GISVEC(A68_VC ,CIKAOSF,BIKAOSF,2)
static A68_241   HIKAOSF = {"<word>"}; 
A_GISVEC(A68_VC ,IIKAOSF,HIKAOSF,6)
A68_VC  JIKAOSF_word_str;
static A68_258   KIKAOSF = {"A word is like a command name."}; 
A_GISVEC(A68_VC ,LIKAOSF,KIKAOSF,30)
static A68_VC  MIKAOSF_word_help;
static A68_INT  NIKAOSF_word_no;
A68_174  PIKAOSF_word_syntax;
static A68_218   PJKAOSF = {" | "}; 
A_GISVEC(A68_VC ,QJKAOSF,PJKAOSF,3)
static A68_260   YJKAOSF = {" expected"}; 
A_GISVEC(A68_VC ,ZJKAOSF,YJKAOSF,9)
static A68_241   GKKAOSF = {"<trim>"}; 
A_GISVEC(A68_VC ,HKKAOSF,GKKAOSF,6)
A68_VC  IKKAOSF_trim_str;
static A68_261   JKKAOSF = {"Enclosed in square brackets (\"[ ]\") either: \"<number> .. <number>\", \"<number>\" implying a trim of size one, \".. <number>\" implying everything up to <number>, or, \"<number> ..\" implying everything from <number>."}; 
A_GISVEC(A68_VC ,KKKAOSF,JKKAOSF,210)
static A68_VC  LKKAOSF_trim_help;
static A68_INT  MKKAOSF_trim_no;
A68_174  OKKAOSF_trim_syntax;
#define PKKAOSF_trimsep ','
static A68_262   ALKAOSF = {"\"..\" expected in "}; 
A_GISVEC(A68_VC ,BLKAOSF,ALKAOSF,17)
static A68_263   YLKAOSF = {"\"]\" expected in "}; 
A_GISVEC(A68_VC ,ZLKAOSF,YLKAOSF,16)
static A68_264   PMKAOSF = {"\"..\" or \"]\" expected in "}; 
A_GISVEC(A68_VC ,QMKAOSF,PMKAOSF,24)
static A68_265   ZMKAOSF = {" or \"..\" expected after \"[\" in "}; 
A_GISVEC(A68_VC ,ANKAOSF,ZMKAOSF,31)
static A68_264   VNKAOSF = {"get_trim:  illegal value"}; 
A_GISVEC(A68_VC ,WNKAOSF,VNKAOSF,24)
static A68_219   JOKAOSF = {" can't be less than "}; 
A_GISVEC(A68_VC ,KOKAOSF,JOKAOSF,20)
static A68_219   VOKAOSF = {" can't be more than "}; 
A_GISVEC(A68_VC ,WOKAOSF,VOKAOSF,20)
static A68_219   HPKAOSF = {" can't be less than "}; 
A_GISVEC(A68_VC ,IPKAOSF,HPKAOSF,20)
static A68_INT  RPKAOSF_quoted_string_no;
A68_174  TPKAOSF_quoted_string_syntax;
static A68_242   UPKAOSF = {"\"<string>\""}; 
A_GISVEC(A68_VC ,VPKAOSF,UPKAOSF,10)
A68_VC  WPKAOSF_quoted_string_str;
static A68_268   XPKAOSF = {"Any characters enclosed in string quotes (\" \").  If the string quote character is required within the string it should be repeated (\"\")."}; 
A_GISVEC(A68_VC ,YPKAOSF,XPKAOSF,136)
static A68_VC  ZPKAOSF_quoted_string_help;
static A68_270   ARKAOSF = {" not finished at end of line"}; 
A_GISVEC(A68_VC ,CRKAOSF,ARKAOSF,28)
static A68_INT  NRKAOSF_character_no;
A68_174  PRKAOSF_character_syntax;
static A68_220   QRKAOSF = {"<character>"}; 
A_GISVEC(A68_VC ,RRKAOSF,QRKAOSF,11)
A68_VC  SRKAOSF_character_str;
static A68_244   TRKAOSF = {"Any single printable character except comma and space (\",\" and \" \") which are used as separators."}; 
A_GISVEC(A68_VC ,URKAOSF,TRKAOSF,97)
static A68_VC  VRKAOSF_character_help;
typedef struct   /* env of non-global proc */
{
A68_INT * Int;
A68_229  ARJAOSF_ifrdintsub;
} CRJAOSF_ifrdintsub;
typedef struct   /* env of non-global proc */
{
int dummy;
} EWJAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HQKAOSF_generator;

A68_BOOL  VKJAOSF_opsymbol(A68_CHAR  C);

A68_VOID  ALJAOSF_check_length(A68_INT  Length, A68_VC  Name, A68_97  Msg);

A68_VOID  XLJAOSF_check_separator(A68_VC  Word_read, A68_VC  Name, A68_195  Separator, A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  CMJAOSF_legal_read(A68_VC  Word);

A68_BOOL  GMJAOSF_illegal_read(A68_VC  Word);

A_STATIC A68_VOID  XNJAOSF_read_plus(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BOJAOSF_read_minus(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FOJAOSF_read_period(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JOJAOSF_read_semicolon(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NOJAOSF_read_comma(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ROJAOSF_read_openrnd(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VOJAOSF_read_closernd(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZOJAOSF_read_ampersand(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  DPJAOSF_is_plus(A68_175  V);

A68_BOOL  GPJAOSF_is_minus(A68_175  V);

A68_BOOL  JPJAOSF_is_period(A68_175  V);

A68_BOOL  MPJAOSF_is_semicolon(A68_175  V);

A68_BOOL  PPJAOSF_is_comma(A68_175  V);

A68_BOOL  SPJAOSF_is_openrnd(A68_175  V);

A68_BOOL  VPJAOSF_is_closernd(A68_175  V);

A68_BOOL  YPJAOSF_is_ampersand(A68_175  V);

A68_BOOL  JQJAOSF_if_rd_int(A68_INT * Int, A68_97  Msg);

A_STATIC A68_BOOL  OQJAOSF_isdigitvalue(A68_CHAR  C, A68_INT  Radix, A68_INT * I);

A_STATIC A68_BOOL  BRJAOSF_ifrdintsub(A68_INT  Radix, A68_INT  Radixsign, A68_97  Msg, void *NonLocals);

A68_VOID  ITJAOSF_read_int_basic(A68_208  Rc, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VTJAOSF_read_int(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  ZTJAOSF_is_int(A68_175  V);

A68_INT  DUJAOSF_get_int(A68_175  V, A68_97  Msg);

A68_VOID  IUJAOSF_read_ident_basic(A68_208  Rc, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DVJAOSF_read_ident(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  HVJAOSF_is_ident(A68_175  V);

A68_VOID  LVJAOSF_get_ident(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  YVJAOSF_read_fnname_basic(A68_208  Rc, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DWJAOSF_generator(A68_BOOL  BWJAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WWJAOSF_read_fnname(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  AXJAOSF_is_fnname(A68_175  V);

A68_VOID  EXJAOSF_get_fnname(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  XXJAOSF_is_name(A68_175  V);

A68_VOID  CYJAOSF_get_name(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  TYJAOSF_read_string_basic(A68_BOOL  Uc, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BZJAOSF_read_string(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  FZJAOSF_is_string(A68_175  V);

A68_VOID  JZJAOSF_get_string(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NZJAOSF_get_string_uc(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CAKAOSF_read_filename(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  LAKAOSF_is_filename(A68_175  V);

A68_VOID  QAKAOSF_get_filename(A68_175  V, A68_VC  Default, A68_97  Msg, A68_133  *ReturnedValue);

A_STATIC A68_VOID  DBKAOSF_read_text(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  UBKAOSF_is_text(A68_175  V);

A68_VOID  YBKAOSF_get_text(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TCKAOSF_read_contextname(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  XCKAOSF_anonymous(A68_CHAR  C);

A_STATIC A68_VOID  EDKAOSF_read_importname(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  LDKAOSF_anonymous(A68_CHAR  C);

A68_BOOL  SDKAOSF_is_contextname(A68_175  V);

A68_BOOL  VDKAOSF_is_importname(A68_175  V);

A68_BOOL  YDKAOSF_is_ctname(A68_175  V);

A68_VOID  DEKAOSF_get_contextname(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  HEKAOSF_get_importname(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  NEKAOSF_get_ctname(A68_176  Values, A68_INT * Index, A68_VC  Default_contextname, A68_97  Msg, A68_157  *ReturnedValue);

A_STATIC A68_VOID  OFKAOSF_generator(A68_BOOL  NFKAOSF_anonymous, A68_173  *ReturnedValue);

A_STATIC A68_VOID  YFKAOSF_read_switch(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  JGKAOSF_is_switch(A68_175  V);

A68_VOID  PGKAOSF_set_switch(A68_175  V, A68_BOOL * Flag, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  RIKAOSF_is_word(A68_175  V);

A68_INT  WIKAOSF_get_word(A68_175  V, A68_97  Msg, A68_46  Words);

A_STATIC A68_VOID  RKKAOSF_read_trim(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  JNKAOSF_is_trim(A68_175  V);

A68_VOID  ONKAOSF_get_trim(A68_175  V, A68_266  Bounds, A68_97  Msg, A68_266  *ReturnedValue);

A68_VOID  DQKAOSF_delimited_read(A68_CHAR  Delim, A68_VC  Missing, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GQKAOSF_generator(A68_BOOL  EQKAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZQKAOSF_read_quoted_string(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  HRKAOSF_is_quoted_string(A68_175  V);

A68_VOID  LRKAOSF_get_quoted_string(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XRKAOSF_read_character(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  FSKAOSF_is_character(A68_175  V);

A68_CHAR  JSKAOSF_get_character(A68_175  V, A68_97  Msg);

A68_183 * NSKAOSF_make_kernel_readers(void);

A_STATIC A68_BOOL  OQJAOSF_isdigitvalue(A68_CHAR  C, A68_INT  Radix, A68_INT * I)
{ 
A68_BOOL  PQJAOSF;  /* optbool result */
A68_BOOL  QQJAOSF;  /* clause result */
A68_INT  RQJAOSF_j;
A68_INT  SQJAOSF_k;
A68_VC  VQJAOSF;  /* OPERATORS - simple index */
A68_BOOL  WQJAOSF;  /* optbool result */
A_PROC_ENTRY(isdigitvalue);
 /* line 222: */
 /* line 223: */
{ 
PQJAOSF = LTFAOSF_digit(C);
if ( PQJAOSF )
{ /* line 224: */
PQJAOSF = (Radix==10);
}
 /* line 225: */
if ( PQJAOSF )
{ 
(*I) = ((A68_INT)(unsigned char)C-GQJAOSF_zero);
 /* line 226: */
 /* line 227: */
QQJAOSF = A68_TRUE;
} 
else
{ 
RQJAOSF_j = 0;
 /* line 228: */
for ( SQJAOSF_k = 1;
SQJAOSF_k <= 22;
SQJAOSF_k += 1 )
{ 
 /* line 229: */
if ( !((RQJAOSF_j==0)) ) break;
VQJAOSF = UQJAOSF ;
if ( (C==A_VINDEX(VQJAOSF,SQJAOSF_k)) )
{ 
RQJAOSF_j = SQJAOSF_k;
} 
}
 /* line 230: */
if ( (RQJAOSF_j>16) )
{ 
RQJAOSF_j-=6;
} 
 /* line 231: */
WQJAOSF = (RQJAOSF_j==0);
if ( ! WQJAOSF )
{ /* line 232: */
WQJAOSF = (RQJAOSF_j>Radix);
}
if ( WQJAOSF )
{ 
 /* line 233: */
QQJAOSF = A68_FALSE;
} 
else
{ 
(*I) = (RQJAOSF_j-1);
 /* line 234: */
 /* line 235: */
 /* line 236: */
 /* line 237: */
QQJAOSF = A68_TRUE;
} 
} 
} 
A_PROC_EXIT(isdigitvalue);
return( QQJAOSF );
} 
#undef NL

A_STATIC A68_BOOL  BRJAOSF_ifrdintsub(A68_INT  Radix, A68_INT  Radixsign, A68_97  Msg, void *NonLocals)
#define NL(x) (((CRJAOSF_ifrdintsub *)NonLocals)->x)
{ 
A68_BOOL  DRJAOSF_overflow;
A68_INT  ERJAOSF_digitvalue;
A68_CHAR  FRJAOSF_c;
A68_INT  GRJAOSF_sign;
A68_BOOL  HRJAOSF;  /* optbool result */
A68_BOOL  IRJAOSF;  /* optbool result */
A68_BOOL  JRJAOSF;  /* optbool result */
A68_BOOL  KRJAOSF;  /* clause result */
A68_232  LRJAOSF;  /* collateral clause result */
A68_52  ORJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  PRJAOSF;  /* YIELD */
A68_52  QRJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  TRJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  URJAOSF;  /* YIELD */
A68_85  VRJAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WRJAOSF;  /* avoid structure result */
A68_46  XRJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  YRJAOSF;  /* optbool result */
A68_INT  ZRJAOSF_j;
A68_BOOL  ASJAOSF_ok;
A68_233  BSJAOSF;  /* collateral clause result */
A68_INT  CSJAOSF_i;
A68_32  DSJAOSF;  /* OPERATORS - istruct -> vector */
A68_32  ESJAOSF;  /* forall yield */
A68_INT * FSJAOSF;  /* forall control - []x */
A68_INT  GSJAOSF;  /* forall loop counter */
A68_BOOL  HSJAOSF;  /* clause result */
A68_BOOL  ISJAOSF;  /* clause result */
A68_235  JSJAOSF;  /* collateral clause result */
A68_52  KSJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  NSJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  OSJAOSF;  /* YIELD */
A68_85  PSJAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  QSJAOSF;  /* avoid structure result */
A68_46  RSJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  SSJAOSF;  /* collateral clause result */
A68_52  VSJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  WSJAOSF;  /* YIELD */
A68_52  XSJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  ATJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BTJAOSF;  /* YIELD */
A68_85  CTJAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  DTJAOSF;  /* avoid structure result */
A68_46  ETJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ifrdintsub);
 /* line 241: */
 /* line 242: */
{ 
 /* line 243: */
 /* line 244: */
FRJAOSF_c = QWFAOSF_next_first_char(Msg);
 /* line 245: */
GRJAOSF_sign = Radixsign;
 /* line 246: */
HRJAOSF = (FRJAOSF_c=='+');
if ( ! HRJAOSF )
{ /* line 247: */
HRJAOSF = (FRJAOSF_c=='-');
}
if ( HRJAOSF )
{ 
if ( (FRJAOSF_c=='-') )
{ 
GRJAOSF_sign = (-GRJAOSF_sign);
} 
 /* line 248: */
 /* line 249: */
FRJAOSF_c = JWFAOSF_next_char(Msg);
} 
 /* line 250: */
 /* line 251: */
if ( OQJAOSF_isdigitvalue(FRJAOSF_c, Radix, (&ERJAOSF_digitvalue)) )
{ 
(*NL(Int)) = (ERJAOSF_digitvalue*GRJAOSF_sign);
 /* line 252: */
for ( ;; )
{ 
 /* line 253: */
if ( !(OQJAOSF_isdigitvalue(FRJAOSF_c = JWFAOSF_next_char(Msg), Radix, (&ERJAOSF_digitvalue))) ) break;
IRJAOSF = ((*NL(Int))>=AWHAOSF_largeint);
if ( ! IRJAOSF )
{ /* line 254: */
IRJAOSF = ((*NL(Int))<=CWHAOSF_largeminint);
}
if ( IRJAOSF )
{ 
 /* line 255: */
JRJAOSF = ((*NL(Int))>(TVHAOSF_maxint/Radix));
if ( ! JRJAOSF )
{JRJAOSF = ((*NL(Int))<(BWHAOSF_minint/Radix));
}
 /* line 256: */
if ( ! JRJAOSF )
{{ 
(*NL(Int))*=Radix;
 /* line 257: */
KRJAOSF = ((*NL(Int))>(TVHAOSF_maxint-ERJAOSF_digitvalue));
} 
JRJAOSF = KRJAOSF;
}
if ( ! JRJAOSF )
{ /* line 258: */
JRJAOSF = ((*NL(Int))<(BWHAOSF_minint+ERJAOSF_digitvalue));
}
if ( JRJAOSF )
{ 
PRJAOSF = NRJAOSF ;
LRJAOSF.data[0] = A_UNITE(ORJAOSF,mode7,7,PRJAOSF);
 /* line 259: */
LRJAOSF.data[1] = A_UNITE(QRJAOSF,mode7,7,CQJAOSF_int_str);
URJAOSF = SRJAOSF ;
LRJAOSF.data[2] = A_UNITE(TRJAOSF,mode7,7,URJAOSF);
 /* line 260: */
YCEAOSF_oneline( A_HISVEC(VRJAOSF,LRJAOSF,3,A68_52 ), &WRJAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(XRJAOSF,WRJAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(XRJAOSF,WRJAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 261: */
 /* line 262: */
(*NL(Int))+=(ERJAOSF_digitvalue*GRJAOSF_sign);
} 
} 
else
{ 
 /* line 263: */
 /* line 264: */
(*NL(Int))*=Radix ;
(*NL(Int))+=(ERJAOSF_digitvalue*GRJAOSF_sign);
} 
}
 /* line 265: */
YRJAOSF = (FRJAOSF_c=='r');
if ( ! YRJAOSF )
{ /* line 266: */
YRJAOSF = (FRJAOSF_c=='R');
}
if ( YRJAOSF )
{ 
{ 
ZRJAOSF_j = A_ABS((*NL(Int)));
 /* line 267: */
ASJAOSF_ok = A68_FALSE;
 /* line 268: */
BSJAOSF.data[0] = 2;
BSJAOSF.data[1] = 4;
BSJAOSF.data[2] = 8;
BSJAOSF.data[3] = 10;
BSJAOSF.data[4] = 16;
ESJAOSF = A_HISVEC(DSJAOSF,BSJAOSF,5,A68_INT ) ;
GSJAOSF = ESJAOSF.upb -1;
FSJAOSF = ESJAOSF.data;
for (;GSJAOSF-- >= 0;
(FSJAOSF++
) )
{
CSJAOSF_i = *FSJAOSF;
 /* line 269: */
if ( !(!ASJAOSF_ok) ) break;
ASJAOSF_ok = (CSJAOSF_i==ZRJAOSF_j);
}
 /* line 270: */
 /* line 271: */
 /* line 272: */
 /* line 273: */
HSJAOSF = ASJAOSF_ok;
} 
if ( HSJAOSF )
{ 
 /* line 274: */
if ( A_CALLPROC(NL(ARJAOSF_ifrdintsub),(A_ABS((*NL(Int))), A_SIGN((*NL(Int))), Msg),(A_ABS((*NL(Int))), A_SIGN((*NL(Int))), Msg,(NL(ARJAOSF_ifrdintsub)).nonlocals)) )
{ 
 /* line 275: */
ISJAOSF = A68_TRUE;
} 
else
{ 
 /* line 276: */
JSJAOSF.data[0] = A_UNITE(KSJAOSF,mode7,7,CQJAOSF_int_str);
OSJAOSF = MSJAOSF ;
JSJAOSF.data[1] = A_UNITE(NSJAOSF,mode7,7,OSJAOSF);
YCEAOSF_oneline( A_HISVEC(PSJAOSF,JSJAOSF,2,A68_52 ), &QSJAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(RSJAOSF,QSJAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(RSJAOSF,QSJAOSF,A68_VC ),(Msg).nonlocals));
 /* line 277: */
 /* line 279: */
 /* line 280: */
ISJAOSF = A68_FALSE;
} 
} 
else
{ 
WSJAOSF = USJAOSF ;
SSJAOSF.data[0] = A_UNITE(VSJAOSF,mode7,7,WSJAOSF);
 /* line 281: */
SSJAOSF.data[1] = A_UNITE(XSJAOSF,mode7,7,CQJAOSF_int_str);
BTJAOSF = ZSJAOSF ;
SSJAOSF.data[2] = A_UNITE(ATJAOSF,mode7,7,BTJAOSF);
YCEAOSF_oneline( A_HISVEC(CTJAOSF,SSJAOSF,3,A68_52 ), &DTJAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(ETJAOSF,DTJAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(ETJAOSF,DTJAOSF,A68_VC ),(Msg).nonlocals));
 /* line 282: */
 /* line 283: */
 /* line 284: */
ISJAOSF = A68_FALSE;
} 
} 
else
{ 
 /* line 285: */
 /* line 286: */
ISJAOSF = A68_TRUE;
} 
} 
else
{ 
 /* line 287: */
 /* line 288: */
ISJAOSF = A68_FALSE;
} 
} 
A_PROC_EXIT(ifrdintsub);
return( ISJAOSF );
} 
#undef NL

A_STATIC A68_VOID  DWJAOSF_generator(A68_BOOL  BWJAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((EWJAOSF_generator *)NonLocals)->x)
{ 
A68_VC  FWJAOSF;  /* clause result */
A68_VC  GWJAOSF;  /* OPERATORS - dynamic generator */
{ 
GWJAOSF.upb = (*GUFAOSF_rdcharend) ;
( BWJAOSF_anonymous? A_VLOC(A68_CHAR ,GWJAOSF): A_VHEAP(A68_CHAR ,GWJAOSF) );
FWJAOSF = GWJAOSF;
} 
*ReturnedValue = (FWJAOSF);
return;
} 
#undef NL

A_STATIC A68_BOOL  XCKAOSF_anonymous(A68_CHAR  C)
{ 
A68_BOOL  YCKAOSF;  /* optbool result */
A68_BOOL  ZCKAOSF;  /* clause result */
YCKAOSF = (C=='/');
if ( ! YCKAOSF )
{YCKAOSF = (C==')');
}
ZCKAOSF = YCKAOSF;
return( ZCKAOSF );
} 
#undef NL

A_STATIC A68_BOOL  LDKAOSF_anonymous(A68_CHAR  C)
{ 
A68_BOOL  MDKAOSF;  /* clause result */
MDKAOSF = (C==')');
return( MDKAOSF );
} 
#undef NL

A_STATIC A68_VOID  GQKAOSF_generator(A68_BOOL  EQKAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HQKAOSF_generator *)NonLocals)->x)
{ 
A68_VC  IQKAOSF;  /* clause result */
A68_VC  JQKAOSF;  /* OPERATORS - dynamic generator */
{ 
JQKAOSF.upb = (*GUFAOSF_rdcharend) ;
( EQKAOSF_anonymous? A_VLOC(A68_CHAR ,JQKAOSF): A_VHEAP(A68_CHAR ,JQKAOSF) );
IQKAOSF = JQKAOSF;
} 
*ReturnedValue = (IQKAOSF);
return;
} 
#undef NL

A68_BOOL  VKJAOSF_opsymbol(A68_CHAR  C)
{ 
A68_BOOL  WKJAOSF;  /* clause result */
A_PROC_ENTRY(opsymbol);
WKJAOSF = QSFAOSF_instring(C, TKJAOSF_opsymbols);
A_PROC_EXIT(opsymbol);
return( WKJAOSF );
} 
#undef NL

A68_VOID  ALJAOSF_check_length(A68_INT  Length, A68_VC  Name, A68_97  Msg)
{ 
A68_221  BLJAOSF;  /* collateral clause result */
A68_52  ELJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FLJAOSF;  /* YIELD */
A68_52  GLJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  JLJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KLJAOSF;  /* YIELD */
A68_52  LLJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  OLJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  PLJAOSF;  /* YIELD */
A68_85  QLJAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RLJAOSF;  /* avoid structure result */
A68_46  SLJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(check_length);
 /* line 129: */
 /* line 130: */
if ( (Length>HFHAOSF_maxid) )
{ 
FLJAOSF = DLJAOSF ;
BLJAOSF.data[0] = A_UNITE(ELJAOSF,mode7,7,FLJAOSF);
BLJAOSF.data[1] = A_UNITE(GLJAOSF,mode7,7,Name);
 /* line 131: */
KLJAOSF = ILJAOSF ;
BLJAOSF.data[2] = A_UNITE(JLJAOSF,mode7,7,KLJAOSF);
BLJAOSF.data[3] = A_UNITE(LLJAOSF,mode1,1,HFHAOSF_maxid);
PLJAOSF = NLJAOSF ;
BLJAOSF.data[4] = A_UNITE(OLJAOSF,mode7,7,PLJAOSF);
 /* line 132: */
YCEAOSF_oneline( A_HISVEC(QLJAOSF,BLJAOSF,5,A68_52 ), &RLJAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(SLJAOSF,RLJAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(SLJAOSF,RLJAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(check_length);
return;
} 
#undef NL
 /* line 136: */

A68_VOID  XLJAOSF_check_separator(A68_VC  Word_read, A68_VC  Name, A68_195  Separator, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_BOOL  YLJAOSF;  /* optbool result */
A68_VC  ZLJAOSF;  /* clause result */
A68_VC  AMJAOSF;  /* avoid structure result */
A_PROC_ENTRY(check_separator);
 /* line 139: */
YLJAOSF = ! A_VSTRUCTCOMP(Word_read,CHDAOSF_nilstr);
if ( YLJAOSF )
{ /* line 140: */
YLJAOSF = (Word_read.upb>0);
}
if ( YLJAOSF )
{ 
 /* line 141: */
if ( A_CALLPROC(Separator,((*(&A_VINDEX((*FUFAOSF_rdbuffer),(*HUFAOSF_rdcharno))))),((*(&A_VINDEX((*FUFAOSF_rdbuffer),(*HUFAOSF_rdcharno)))),(Separator).nonlocals)) )
{ 
(*HUFAOSF_rdcharno)-=1;
 /* line 142: */
 /* line 143: */
ZLJAOSF = Word_read;
} 
else
{ 
 /* line 144: */
 /* line 145: */
 /* line 146: */
RKGAOSF_check_read( Word_read, Name, Msg, &AMJAOSF );
ZLJAOSF = AMJAOSF;
} 
} 
else
{ 
ZLJAOSF = Word_read;
} 
A_PROC_EXIT(check_separator);
*ReturnedValue = (ZLJAOSF);
return;
} 
#undef NL

A68_BOOL  CMJAOSF_legal_read(A68_VC  Word)
{ 
A68_BOOL  DMJAOSF;  /* optbool result */
A68_BOOL  EMJAOSF;  /* clause result */
A_PROC_ENTRY(legal_read);
 /* line 150: */
DMJAOSF = ! A_VSTRUCTCOMP(Word,CHDAOSF_nilstr);
if ( DMJAOSF )
{DMJAOSF = (Word.upb>0);
}
EMJAOSF = DMJAOSF;
A_PROC_EXIT(legal_read);
return( EMJAOSF );
} 
#undef NL

A68_BOOL  GMJAOSF_illegal_read(A68_VC  Word)
{ 
A68_BOOL  HMJAOSF;  /* clause result */
A_PROC_ENTRY(illegal_read);
 /* line 153: */
HMJAOSF = A_VSTRUCTCOMP(Word,CHDAOSF_nilstr);
A_PROC_EXIT(illegal_read);
return( HMJAOSF );
} 
#undef NL

A_STATIC A68_VOID  XNJAOSF_read_plus(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  YNJAOSF;  /* clause result */
A68_VC  ZNJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_plus);
ANGAOSF_read_char( '+', Msg, &ZNJAOSF );
YNJAOSF = ZNJAOSF;
A_PROC_EXIT(read_plus);
*ReturnedValue = (YNJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  BOJAOSF_read_minus(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  COJAOSF;  /* clause result */
A68_VC  DOJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_minus);
ANGAOSF_read_char( '-', Msg, &DOJAOSF );
COJAOSF = DOJAOSF;
A_PROC_EXIT(read_minus);
*ReturnedValue = (COJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  FOJAOSF_read_period(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  GOJAOSF;  /* clause result */
A68_VC  HOJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_period);
ANGAOSF_read_char( '.', Msg, &HOJAOSF );
GOJAOSF = HOJAOSF;
A_PROC_EXIT(read_period);
*ReturnedValue = (GOJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  JOJAOSF_read_semicolon(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  KOJAOSF;  /* clause result */
A68_VC  LOJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_semicolon);
ANGAOSF_read_char( ';', Msg, &LOJAOSF );
KOJAOSF = LOJAOSF;
A_PROC_EXIT(read_semicolon);
*ReturnedValue = (KOJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NOJAOSF_read_comma(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  OOJAOSF;  /* clause result */
A68_VC  POJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_comma);
ANGAOSF_read_char( ',', Msg, &POJAOSF );
OOJAOSF = POJAOSF;
A_PROC_EXIT(read_comma);
*ReturnedValue = (OOJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ROJAOSF_read_openrnd(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  SOJAOSF;  /* clause result */
A68_VC  TOJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_openrnd);
ANGAOSF_read_char( '(', Msg, &TOJAOSF );
SOJAOSF = TOJAOSF;
A_PROC_EXIT(read_openrnd);
*ReturnedValue = (SOJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VOJAOSF_read_closernd(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  WOJAOSF;  /* clause result */
A68_VC  XOJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_closernd);
ANGAOSF_read_char( ')', Msg, &XOJAOSF );
WOJAOSF = XOJAOSF;
A_PROC_EXIT(read_closernd);
*ReturnedValue = (WOJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ZOJAOSF_read_ampersand(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  APJAOSF;  /* clause result */
A68_VC  BPJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_ampersand);
ANGAOSF_read_char( '&', Msg, &BPJAOSF );
APJAOSF = BPJAOSF;
A_PROC_EXIT(read_ampersand);
*ReturnedValue = (APJAOSF);
return;
} 
#undef NL

A68_BOOL  DPJAOSF_is_plus(A68_175  V)
{ 
A68_BOOL  EPJAOSF;  /* clause result */
A_PROC_ENTRY(is_plus);
EPJAOSF = (V.Sort==YMJAOSF_plus_no);
A_PROC_EXIT(is_plus);
return( EPJAOSF );
} 
#undef NL

A68_BOOL  GPJAOSF_is_minus(A68_175  V)
{ 
A68_BOOL  HPJAOSF;  /* clause result */
A_PROC_ENTRY(is_minus);
HPJAOSF = (V.Sort==ZMJAOSF_minus_no);
A_PROC_EXIT(is_minus);
return( HPJAOSF );
} 
#undef NL

A68_BOOL  JPJAOSF_is_period(A68_175  V)
{ 
A68_BOOL  KPJAOSF;  /* clause result */
A_PROC_ENTRY(is_period);
KPJAOSF = (V.Sort==ANJAOSF_period_no);
A_PROC_EXIT(is_period);
return( KPJAOSF );
} 
#undef NL

A68_BOOL  MPJAOSF_is_semicolon(A68_175  V)
{ 
A68_BOOL  NPJAOSF;  /* clause result */
A_PROC_ENTRY(is_semicolon);
NPJAOSF = (V.Sort==YMJAOSF_plus_no);
A_PROC_EXIT(is_semicolon);
return( NPJAOSF );
} 
#undef NL

A68_BOOL  PPJAOSF_is_comma(A68_175  V)
{ 
A68_BOOL  QPJAOSF;  /* clause result */
A_PROC_ENTRY(is_comma);
QPJAOSF = (V.Sort==ZMJAOSF_minus_no);
A_PROC_EXIT(is_comma);
return( QPJAOSF );
} 
#undef NL

A68_BOOL  SPJAOSF_is_openrnd(A68_175  V)
{ 
A68_BOOL  TPJAOSF;  /* clause result */
A_PROC_ENTRY(is_openrnd);
TPJAOSF = (V.Sort==ANJAOSF_period_no);
A_PROC_EXIT(is_openrnd);
return( TPJAOSF );
} 
#undef NL

A68_BOOL  VPJAOSF_is_closernd(A68_175  V)
{ 
A68_BOOL  WPJAOSF;  /* clause result */
A_PROC_ENTRY(is_closernd);
WPJAOSF = (V.Sort==YMJAOSF_plus_no);
A_PROC_EXIT(is_closernd);
return( WPJAOSF );
} 
#undef NL

A68_BOOL  YPJAOSF_is_ampersand(A68_175  V)
{ 
A68_BOOL  ZPJAOSF;  /* clause result */
A_PROC_ENTRY(is_ampersand);
ZPJAOSF = (V.Sort==ZMJAOSF_minus_no);
A_PROC_EXIT(is_ampersand);
return( ZPJAOSF );
} 
#undef NL

A68_BOOL  JQJAOSF_if_rd_int(A68_INT * Int, A68_97  Msg)
{ 
A68_229  ARJAOSF_ifrdintsub;   /* proc value of non-global proc */
A68_BOOL  FTJAOSF;  /* clause result */
A_PROC_ENTRY(if_rd_int);
 /* line 218: */
 /* line 221: */
{ 
 /* line 240: */
A_CLOSURE( ARJAOSF_ifrdintsub, BRJAOSF_ifrdintsub, CRJAOSF_ifrdintsub );
(( CRJAOSF_ifrdintsub * ) ( ARJAOSF_ifrdintsub.nonlocals )) -> Int = Int;
(( CRJAOSF_ifrdintsub * ) ( ARJAOSF_ifrdintsub.nonlocals )) -> ARJAOSF_ifrdintsub = ARJAOSF_ifrdintsub;
 /* line 290: */
 /* line 291: */
FTJAOSF = A_CALLPROC(ARJAOSF_ifrdintsub,(10, 1, Msg),(10, 1, Msg,(ARJAOSF_ifrdintsub).nonlocals));
} 
A_PROC_EXIT(if_rd_int);
return( FTJAOSF );
} 
#undef NL

A68_VOID  ITJAOSF_read_int_basic(A68_208  Rc, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_INT  JTJAOSF_int;
A68_52  KTJAOSF;  /* OPERATORS - mode -> union mode */
A68_85  LTJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MTJAOSF;  /* avoid structure result */
A68_VC  NTJAOSF_ans;
A68_VC  OTJAOSF;  /* clause result */
A68_VC  PTJAOSF;  /* avoid structure result */
A68_VC  QTJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_int_basic);
 /* line 295: */
 /* line 296: */
{ 
 /* line 297: */
 /* line 298: */
if ( Rc.Get_first )
{ 
MWFAOSF_first_char(Msg);
 /* line 299: */
(*HUFAOSF_rdcharno)-=1;
} 
 /* line 300: */
 /* line 301: */
 /* line 302: */
if ( JQJAOSF_if_rd_int((&JTJAOSF_int), Msg) )
{ 
YCEAOSF_oneline( A_HVEC(LTJAOSF,A_UNITE(KTJAOSF,mode1,1,JTJAOSF_int),A68_52 ), &MTJAOSF );
NTJAOSF_ans = MTJAOSF;
 /* line 303: */
if ( Rc.Check )
{ 
RKGAOSF_check_read( NTJAOSF_ans, CQJAOSF_int_str, Msg, &PTJAOSF );
OTJAOSF = PTJAOSF;
} 
else
{ 
 /* line 304: */
 /* line 305: */
OTJAOSF = NTJAOSF_ans;
} 
} 
else
{ 
 /* line 306: */
KKGAOSF_nothing_read(  &QTJAOSF );
OTJAOSF = QTJAOSF;
} 
} 
A_PROC_EXIT(read_int_basic);
*ReturnedValue = (OTJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VTJAOSF_read_int(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  WTJAOSF;  /* clause result */
A68_VC  XTJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_int);
ITJAOSF_read_int_basic( YLGAOSF_first_and_check, Msg, &XTJAOSF );
WTJAOSF = XTJAOSF;
A_PROC_EXIT(read_int);
*ReturnedValue = (WTJAOSF);
return;
} 
#undef NL

A68_BOOL  ZTJAOSF_is_int(A68_175  V)
{ 
A68_BOOL  AUJAOSF;  /* clause result */
A_PROC_ENTRY(is_int);
AUJAOSF = (V.Sort==RTJAOSF_int_no);
A_PROC_EXIT(is_int);
return( AUJAOSF );
} 
#undef NL

A68_INT  DUJAOSF_get_int(A68_175  V, A68_97  Msg)
{ 
A68_INT  EUJAOSF;  /* clause result */
A_PROC_ENTRY(get_int);
 /* line 319: */
 /* line 320: */
{ 
MLGAOSF_check_value(V, RTJAOSF_int_no, Msg);
 /* line 321: */
 /* line 322: */
EUJAOSF = QIHAOSF_charstoint(V.Value, A_HEAP(A68_BOOL ));
} 
A_PROC_EXIT(get_int);
return( EUJAOSF );
} 
#undef NL

A68_VOID  IUJAOSF_read_ident_basic(A68_208  Rc, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  JUJAOSF;  /* clause result */
A68_CHAR  KUJAOSF_c;
A68_INT  LUJAOSF_start;
A68_BOOL  MUJAOSF;  /* optbool result */
A68_VC  NUJAOSF;  /* OPERATORS - trim index */
A68_VC  OUJAOSF;  /* avoid structure result */
A68_VC  PUJAOSF_ident;
A68_VC  QUJAOSF;  /* clause result */
A68_VC  RUJAOSF;  /* avoid structure result */
A68_VC  SUJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_ident_basic);
 /* line 331: */
 /* line 333: */
{ 
if ( Rc.Get_first )
{ 
JUJAOSF = MWFAOSF_first_char(Msg);
} 
else
{ 
JUJAOSF = QWFAOSF_next_first_char(Msg);
} 
KUJAOSF_c = JUJAOSF;
 /* line 334: */
 /* line 335: */
if ( PTFAOSF_letter(KUJAOSF_c) )
{ 
LUJAOSF_start = (*HUFAOSF_rdcharno);
 /* line 336: */
for ( ;; )
{ 
MUJAOSF = PTFAOSF_letter(KUJAOSF_c);
if ( ! MUJAOSF )
{MUJAOSF = LTFAOSF_digit(KUJAOSF_c);
}
if ( ! MUJAOSF )
{ /* line 337: */
MUJAOSF = ITFAOSF_visible_space(KUJAOSF_c);
}
if ( !(MUJAOSF) ) break;
KUJAOSF_c = JWFAOSF_next_char(Msg);
}
 /* line 338: */
ZCAAOSF_makervc( A_VTRIM(NUJAOSF,((*FUFAOSF_rdbuffer)),A_VTSCRIPT(&(NUJAOSF.upb),((*FUFAOSF_rdbuffer)).upb,LUJAOSF_start,((*HUFAOSF_rdcharno)-1))), &OUJAOSF );
PUJAOSF_ident = OUJAOSF;
 /* line 339: */
ALJAOSF_check_length(PUJAOSF_ident.upb, Name, Msg);
 /* line 340: */
if ( Rc.Check )
{ 
RKGAOSF_check_read( PUJAOSF_ident, Name, Msg, &RUJAOSF );
QUJAOSF = RUJAOSF;
} 
else
{ 
 /* line 341: */
 /* line 342: */
QUJAOSF = PUJAOSF_ident;
} 
} 
else
{ 
 /* line 343: */
KKGAOSF_nothing_read(  &SUJAOSF );
QUJAOSF = SUJAOSF;
} 
} 
A_PROC_EXIT(read_ident_basic);
*ReturnedValue = (QUJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  DVJAOSF_read_ident(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  EVJAOSF;  /* clause result */
A68_VC  FVJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_ident);
 /* line 356: */
IUJAOSF_read_ident_basic( YLGAOSF_first_and_check, VUJAOSF_ident_str, Msg, &FVJAOSF );
EVJAOSF = FVJAOSF;
A_PROC_EXIT(read_ident);
*ReturnedValue = (EVJAOSF);
return;
} 
#undef NL

A68_BOOL  HVJAOSF_is_ident(A68_175  V)
{ 
A68_BOOL  IVJAOSF;  /* clause result */
A_PROC_ENTRY(is_ident);
IVJAOSF = (V.Sort==ZUJAOSF_ident_no);
A_PROC_EXIT(is_ident);
return( IVJAOSF );
} 
#undef NL

A68_VOID  LVJAOSF_get_ident(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  MVJAOSF;  /* clause result */
A_PROC_ENTRY(get_ident);
 /* line 361: */
 /* line 362: */
{ 
MLGAOSF_check_value(V, ZUJAOSF_ident_no, Msg);
 /* line 363: */
 /* line 364: */
MVJAOSF = V.Value;
} 
A_PROC_EXIT(get_ident);
*ReturnedValue = (MVJAOSF);
return;
} 
#undef NL

A68_VOID  YVJAOSF_read_fnname_basic(A68_208  Rc, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  ZVJAOSF;  /* clause result */
A68_CHAR  AWJAOSF_c;
A68_31  CWJAOSF_generator;   /* proc value of non-global proc */
A68_VC  IWJAOSF;  /* avoid structure result */
A68_VC  HWJAOSF_answer;
A68_INT  JWJAOSF_endanswer;
A68_BOOL  KWJAOSF;  /* optbool result */
A68_INT  LWJAOSF;  /* YIELD */
A68_CHAR * MWJAOSF;  /* YIELD */
A68_INT  NWJAOSF;  /* YIELD */
A68_CHAR * OWJAOSF;  /* YIELD */
A68_VC  PWJAOSF;  /* OPERATORS - trim index */
A68_VC  QWJAOSF;  /* avoid structure result */
A68_VC  RWJAOSF_ans;
A68_VC  SWJAOSF;  /* clause result */
A68_VC  TWJAOSF;  /* avoid structure result */
A68_VC  UWJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_fnname_basic);
 /* line 382: */
 /* line 384: */
{ 
if ( Rc.Get_first )
{ 
ZVJAOSF = MWFAOSF_first_char(Msg);
} 
else
{ 
ZVJAOSF = QWFAOSF_next_first_char(Msg);
} 
AWJAOSF_c = ZVJAOSF;
 /* line 385: */
A_CLOSURE( CWJAOSF_generator, DWJAOSF_generator, EWJAOSF_generator );
A_CALLPROC(CWJAOSF_generator,(A68_TRUE, &IWJAOSF),(A68_TRUE, &IWJAOSF,(CWJAOSF_generator).nonlocals));
HWJAOSF_answer = IWJAOSF;
 /* line 386: */
JWJAOSF_endanswer = 0;
 /* line 387: */
 /* line 388: */
if ( TTFAOSF_bold(AWJAOSF_c) )
{ 
for ( ;; )
{ 
KWJAOSF = TTFAOSF_bold(AWJAOSF_c);
if ( ! KWJAOSF )
{KWJAOSF = LTFAOSF_digit(AWJAOSF_c);
}
if ( ! KWJAOSF )
{ /* line 389: */
KWJAOSF = ITFAOSF_visible_space(AWJAOSF_c);
}
if ( !(KWJAOSF) ) break;
LWJAOSF = JWJAOSF_endanswer+=1 ;
MWJAOSF = (&A_VINDEX(HWJAOSF_answer,LWJAOSF)) ;
(*MWJAOSF) = AWJAOSF_c;
 /* line 390: */
 /* line 391: */
AWJAOSF_c = JWFAOSF_next_char(Msg);
}
 /* line 392: */
} 
else
{ 
for ( ;; )
{ 
 /* line 393: */
if ( !(VKJAOSF_opsymbol(AWJAOSF_c)) ) break;
NWJAOSF = JWJAOSF_endanswer+=1 ;
OWJAOSF = (&A_VINDEX(HWJAOSF_answer,NWJAOSF)) ;
(*OWJAOSF) = AWJAOSF_c;
 /* line 394: */
 /* line 395: */
AWJAOSF_c = JWFAOSF_next_char(Msg);
}
 /* line 396: */
} 
 /* line 397: */
 /* line 398: */
if ( (JWJAOSF_endanswer>0) )
{ 
ALJAOSF_check_length(JWJAOSF_endanswer, PVJAOSF_fnname_str, Msg);
 /* line 399: */
ZCAAOSF_makervc( A_VTRIM(PWJAOSF,(HWJAOSF_answer),A_VTSCRIPT(&(PWJAOSF.upb),(HWJAOSF_answer).upb,1,JWJAOSF_endanswer)), &QWJAOSF );
RWJAOSF_ans = QWJAOSF;
 /* line 400: */
if ( Rc.Check )
{ 
RKGAOSF_check_read( RWJAOSF_ans, PVJAOSF_fnname_str, Msg, &TWJAOSF );
SWJAOSF = TWJAOSF;
} 
else
{ 
 /* line 401: */
 /* line 402: */
SWJAOSF = RWJAOSF_ans;
} 
} 
else
{ 
 /* line 403: */
KKGAOSF_nothing_read(  &UWJAOSF );
SWJAOSF = UWJAOSF;
} 
} 
A_PROC_EXIT(read_fnname_basic);
*ReturnedValue = (SWJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  WWJAOSF_read_fnname(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  XWJAOSF;  /* clause result */
A68_VC  YWJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_fnname);
 /* line 407: */
YVJAOSF_read_fnname_basic( YLGAOSF_first_and_check, Msg, &YWJAOSF );
XWJAOSF = YWJAOSF;
A_PROC_EXIT(read_fnname);
*ReturnedValue = (XWJAOSF);
return;
} 
#undef NL

A68_BOOL  AXJAOSF_is_fnname(A68_175  V)
{ 
A68_BOOL  BXJAOSF;  /* clause result */
A_PROC_ENTRY(is_fnname);
BXJAOSF = (V.Sort==TVJAOSF_fnname_no);
A_PROC_EXIT(is_fnname);
return( BXJAOSF );
} 
#undef NL

A68_VOID  EXJAOSF_get_fnname(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  FXJAOSF;  /* clause result */
A_PROC_ENTRY(get_fnname);
 /* line 412: */
 /* line 413: */
{ 
MLGAOSF_check_value(V, TVJAOSF_fnname_no, Msg);
 /* line 414: */
 /* line 415: */
FXJAOSF = V.Value;
} 
A_PROC_EXIT(get_fnname);
*ReturnedValue = (FXJAOSF);
return;
} 
#undef NL

A68_BOOL  XXJAOSF_is_name(A68_175  V)
{ 
A68_BOOL  YXJAOSF;  /* optbool result */
A68_BOOL  ZXJAOSF;  /* clause result */
A_PROC_ENTRY(is_name);
 /* line 432: */
YXJAOSF = (V.Sort==ZUJAOSF_ident_no);
if ( ! YXJAOSF )
{YXJAOSF = (V.Sort==TVJAOSF_fnname_no);
}
ZXJAOSF = YXJAOSF;
A_PROC_EXIT(is_name);
return( ZXJAOSF );
} 
#undef NL

A68_VOID  CYJAOSF_get_name(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  DYJAOSF;  /* clause result */
A_PROC_ENTRY(get_name);
 /* line 435: */
 /* line 436: */
{ 
if ( (V.Sort!=ZUJAOSF_ident_no) )
{ 
MLGAOSF_check_value(V, TVJAOSF_fnname_no, Msg);
} 
 /* line 437: */
 /* line 438: */
DYJAOSF = V.Value;
} 
A_PROC_EXIT(get_name);
*ReturnedValue = (DYJAOSF);
return;
} 
#undef NL

A68_VOID  TYJAOSF_read_string_basic(A68_BOOL  Uc, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  UYJAOSF_c;
A68_INT  VYJAOSF_start;
A68_VC  WYJAOSF;  /* clause result */
A68_VC  XYJAOSF;  /* OPERATORS - trim index */
A68_VC  YYJAOSF;  /* avoid structure result */
A68_VC  ZYJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_string_basic);
 /* line 458: */
 /* line 460: */
{ 
UYJAOSF_c = MWFAOSF_first_char(Msg);
 /* line 461: */
VYJAOSF_start = (*HUFAOSF_rdcharno);
 /* line 462: */
for ( ;; )
{ 
 /* line 463: */
if ( !(!ETFAOSF_separator(UYJAOSF_c)) ) break;
UYJAOSF_c = JWFAOSF_next_char(Msg);
}
 /* line 464: */
 /* line 465: */
ZCAAOSF_makervc( A_VTRIM(XYJAOSF,((*FUFAOSF_rdbuffer)),A_VTSCRIPT(&(XYJAOSF.upb),((*FUFAOSF_rdbuffer)).upb,VYJAOSF_start,((*HUFAOSF_rdcharno)-1))), &YYJAOSF );
RKGAOSF_check_read( YYJAOSF, KYJAOSF_string_str, Msg, &ZYJAOSF );
WYJAOSF = ZYJAOSF;
} 
A_PROC_EXIT(read_string_basic);
*ReturnedValue = (WYJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  BZJAOSF_read_string(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  CZJAOSF;  /* clause result */
A68_VC  DZJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_string);
TYJAOSF_read_string_basic( A68_TRUE, Msg, &DZJAOSF );
CZJAOSF = DZJAOSF;
A_PROC_EXIT(read_string);
*ReturnedValue = (CZJAOSF);
return;
} 
#undef NL

A68_BOOL  FZJAOSF_is_string(A68_175  V)
{ 
A68_BOOL  GZJAOSF;  /* clause result */
A_PROC_ENTRY(is_string);
GZJAOSF = (V.Sort==OYJAOSF_string_no);
A_PROC_EXIT(is_string);
return( GZJAOSF );
} 
#undef NL

A68_VOID  JZJAOSF_get_string(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  KZJAOSF;  /* clause result */
A_PROC_ENTRY(get_string);
 /* line 473: */
 /* line 474: */
{ 
MLGAOSF_check_value(V, OYJAOSF_string_no, Msg);
 /* line 475: */
 /* line 476: */
KZJAOSF = V.Value;
} 
A_PROC_EXIT(get_string);
*ReturnedValue = (KZJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NZJAOSF_get_string_uc(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR * OZJAOSF_c;
A68_VC  PZJAOSF;  /* forall yield */
A68_INT  QZJAOSF;  /* forall loop counter */
A68_VC  RZJAOSF;  /* clause result */
A_PROC_ENTRY(get_string_uc);
 /* line 480: */
 /* line 481: */
{ 
MLGAOSF_check_value(V, OYJAOSF_string_no, Msg);
 /* line 482: */
PZJAOSF = V.Value ;
QZJAOSF = PZJAOSF.upb -1;
OZJAOSF_c = PZJAOSF.data;
for (;QZJAOSF-- >= 0;
(OZJAOSF_c++
) )
{
if ( PTFAOSF_letter((*OZJAOSF_c)) )
{ 
(*OZJAOSF_c) = XTFAOSF_upper_case((*OZJAOSF_c));
} 
}
 /* line 483: */
 /* line 484: */
RZJAOSF = V.Value;
} 
A_PROC_EXIT(get_string_uc);
*ReturnedValue = (RZJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  CAKAOSF_read_filename(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  DAKAOSF_c;
A68_INT  EAKAOSF_start;
A68_VC  FAKAOSF;  /* clause result */
A68_VC  GAKAOSF;  /* OPERATORS - trim index */
A68_VC  HAKAOSF;  /* avoid structure result */
A68_VC  IAKAOSF;  /* avoid structure result */
A68_VC  JAKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_filename);
 /* line 507: */
 /* line 509: */
{ 
DAKAOSF_c = MWFAOSF_first_char(Msg);
 /* line 510: */
EAKAOSF_start = (*HUFAOSF_rdcharno);
 /* line 513: */
for ( ;; )
{ 
 /* line 514: */
if ( !(!ETFAOSF_separator(DAKAOSF_c)) ) break;
DAKAOSF_c = JWFAOSF_next_char(Msg);
}
 /* line 515: */
 /* line 516: */
if ( (((*HUFAOSF_rdcharno)-EAKAOSF_start)>0) )
{ 
 /* line 517: */
 /* line 518: */
ZCAAOSF_makervc( A_VTRIM(GAKAOSF,((*FUFAOSF_rdbuffer)),A_VTSCRIPT(&(GAKAOSF.upb),((*FUFAOSF_rdbuffer)).upb,EAKAOSF_start,((*HUFAOSF_rdcharno)-1))), &HAKAOSF );
RKGAOSF_check_read( HAKAOSF, UZJAOSF_filename_str, Msg, &IAKAOSF );
FAKAOSF = IAKAOSF;
} 
else
{ 
 /* line 519: */
KKGAOSF_nothing_read(  &JAKAOSF );
FAKAOSF = JAKAOSF;
} 
} 
A_PROC_EXIT(read_filename);
*ReturnedValue = (FAKAOSF);
return;
} 
#undef NL

A68_BOOL  LAKAOSF_is_filename(A68_175  V)
{ 
A68_BOOL  MAKAOSF;  /* clause result */
A_PROC_ENTRY(is_filename);
MAKAOSF = (V.Sort==YZJAOSF_filename_no);
A_PROC_EXIT(is_filename);
return( MAKAOSF );
} 
#undef NL

A68_VOID  QAKAOSF_get_filename(A68_175  V, A68_VC  Default, A68_97  Msg, A68_133  *ReturnedValue)
{ 
A68_133  RAKAOSF;  /* clause result */
A68_133  SAKAOSF;  /* avoid structure result */
A_PROC_ENTRY(get_filename);
 /* line 525: */
 /* line 526: */
{ 
MLGAOSF_check_value(V, YZJAOSF_filename_no, Msg);
 /* line 527: */
 /* line 528: */
BFCAOSF_parse_filename( V.Value, Default, Msg, &SAKAOSF );
RAKAOSF = SAKAOSF;
} 
A_PROC_EXIT(get_filename);
*ReturnedValue = (RAKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  DBKAOSF_read_text(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_BOOL  EBKAOSF;  /* optbool result */
A68_235  FBKAOSF;  /* collateral clause result */
A68_52  GBKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  JBKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KBKAOSF;  /* YIELD */
A68_85  LBKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MBKAOSF;  /* avoid structure result */
A68_46  NBKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OBKAOSF;  /* clause result */
A68_VC  PBKAOSF;  /* avoid structure result */
A68_VC  QBKAOSF;  /* OPERATORS - trim index */
A68_VC  RBKAOSF;  /* avoid structure result */
A68_VC  SBKAOSF_text;
A_PROC_ENTRY(read_text);
 /* line 543: */
 /* line 544: */
{ 
if ( ((*(&A_VINDEX((*FUFAOSF_rdbuffer),(*HUFAOSF_rdcharno))))!=VSFAOSF_sp) )
{ 
(*HUFAOSF_rdcharno)+=1;
} 
 /* line 545: */
(*IUFAOSF_start_of_word) = (*HUFAOSF_rdcharno);
 /* line 546: */
for ( ;; )
{ 
EBKAOSF = ((*HUFAOSF_rdcharno)<(*GUFAOSF_rdcharend));
if ( EBKAOSF )
{ /* line 547: */
EBKAOSF = BTFAOSF_space((*(&A_VINDEX((*FUFAOSF_rdbuffer),(*HUFAOSF_rdcharno)))));
}
if ( !(EBKAOSF) ) break;
(*HUFAOSF_rdcharno)+=1;
}
 /* line 548: */
 /* line 549: */
if ( ((*(&A_VINDEX((*FUFAOSF_rdbuffer),(*GUFAOSF_rdcharend))))==VSFAOSF_sp) )
{ 
 /* line 550: */
FBKAOSF.data[0] = A_UNITE(GBKAOSF,mode7,7,VAKAOSF_text_str);
KBKAOSF = IBKAOSF ;
FBKAOSF.data[1] = A_UNITE(JBKAOSF,mode7,7,KBKAOSF);
YCEAOSF_oneline( A_HISVEC(LBKAOSF,FBKAOSF,2,A68_52 ), &MBKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(NBKAOSF,MBKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(NBKAOSF,MBKAOSF,A68_VC ),(Msg).nonlocals));
 /* line 551: */
 /* line 552: */
OBKAOSF = CHDAOSF_nilstr;
} 
else
{ 
 /* line 553: */
 /* line 554: */
if ( ((*HUFAOSF_rdcharno)==(*GUFAOSF_rdcharend)) )
{ 
KKGAOSF_nothing_read(  &PBKAOSF );
OBKAOSF = PBKAOSF;
} 
else
{ 
ZCAAOSF_makervc( A_VTRIM(QBKAOSF,((*FUFAOSF_rdbuffer)),A_VTSCRIPT(&(QBKAOSF.upb),((*FUFAOSF_rdbuffer)).upb,(*HUFAOSF_rdcharno),((*GUFAOSF_rdcharend)-1))), &RBKAOSF );
SBKAOSF_text = RBKAOSF;
 /* line 555: */
(*HUFAOSF_rdcharno) = ((*GUFAOSF_rdcharend)-1);
 /* line 556: */
 /* line 557: */
 /* line 558: */
OBKAOSF = SBKAOSF_text;
} 
} 
} 
A_PROC_EXIT(read_text);
*ReturnedValue = (OBKAOSF);
return;
} 
#undef NL

A68_BOOL  UBKAOSF_is_text(A68_175  V)
{ 
A68_BOOL  VBKAOSF;  /* clause result */
A_PROC_ENTRY(is_text);
VBKAOSF = (V.Sort==ZAKAOSF_text_no);
A_PROC_EXIT(is_text);
return( VBKAOSF );
} 
#undef NL

A68_VOID  YBKAOSF_get_text(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  ZBKAOSF;  /* clause result */
A_PROC_ENTRY(get_text);
 /* line 563: */
 /* line 564: */
{ 
MLGAOSF_check_value(V, ZAKAOSF_text_no, Msg);
 /* line 565: */
 /* line 566: */
ZBKAOSF = V.Value;
} 
A_PROC_EXIT(get_text);
*ReturnedValue = (ZBKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  TCKAOSF_read_contextname(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  UCKAOSF;  /* avoid structure result */
A68_VC  VCKAOSF_context;
A68_VC  ADKAOSF;  /* clause result */
A68_195  BDKAOSF;  /* procedure value */
A68_VC  CDKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_contextname);
 /* line 588: */
 /* line 595: */
{ 
IUJAOSF_read_ident_basic( AMGAOSF_get_first, CCKAOSF_contextname_str, Msg, &UCKAOSF );
VCKAOSF_context = UCKAOSF;
 /* line 596: */
 /* line 597: */
 /* line 598: */
BDKAOSF.fn.fn_global = XCKAOSF_anonymous;
BDKAOSF.nonlocals = A68_NIL;
XLJAOSF_check_separator( VCKAOSF_context, CCKAOSF_contextname_str, BDKAOSF, Msg, &CDKAOSF );
ADKAOSF = CDKAOSF;
} 
A_PROC_EXIT(read_contextname);
*ReturnedValue = (ADKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  EDKAOSF_read_importname(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  FDKAOSF;  /* avoid structure result */
A68_VC  GDKAOSF_import;
A68_46  JDKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NDKAOSF;  /* clause result */
A68_195  ODKAOSF;  /* procedure value */
A68_VC  PDKAOSF;  /* avoid structure result */
A68_VC  QDKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_importname);
 /* line 601: */
 /* line 602: */
if ( (MWFAOSF_first_char(Msg)=='/') )
{ 
IUJAOSF_read_ident_basic( EMGAOSF_not_first, FCKAOSF_importname_str, Msg, &FDKAOSF );
GDKAOSF_import = FDKAOSF;
 /* line 603: */
 /* line 604: */
if ( !CMJAOSF_legal_read(GDKAOSF_import) )
{ 
 /* line 605: */
 /* line 606: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(JDKAOSF,A_VC_PLUS(A_VC_PLUS(VUJAOSF_ident_str,IDKAOSF),FCKAOSF_importname_str),A68_VC )),(MUAAOSF_user, A_HVEC(JDKAOSF,A_VC_PLUS(A_VC_PLUS(VUJAOSF_ident_str,IDKAOSF),FCKAOSF_importname_str),A68_VC ),(Msg).nonlocals));
} 
 /* line 607: */
 /* line 608: */
 /* line 609: */
ODKAOSF.fn.fn_global = LDKAOSF_anonymous;
ODKAOSF.nonlocals = A68_NIL;
XLJAOSF_check_separator( GDKAOSF_import, FCKAOSF_importname_str, ODKAOSF, Msg, &PDKAOSF );
NDKAOSF = PDKAOSF;
} 
else
{ 
KKGAOSF_nothing_read(  &QDKAOSF );
NDKAOSF = QDKAOSF;
} 
A_PROC_EXIT(read_importname);
*ReturnedValue = (NDKAOSF);
return;
} 
#undef NL

A68_BOOL  SDKAOSF_is_contextname(A68_175  V)
{ 
A68_BOOL  TDKAOSF;  /* clause result */
A_PROC_ENTRY(is_contextname);
TDKAOSF = (V.Sort==MCKAOSF_contextname_no);
A_PROC_EXIT(is_contextname);
return( TDKAOSF );
} 
#undef NL

A68_BOOL  VDKAOSF_is_importname(A68_175  V)
{ 
A68_BOOL  WDKAOSF;  /* clause result */
A_PROC_ENTRY(is_importname);
WDKAOSF = (V.Sort==NCKAOSF_importname_no);
A_PROC_EXIT(is_importname);
return( WDKAOSF );
} 
#undef NL

A68_BOOL  YDKAOSF_is_ctname(A68_175  V)
{ 
A68_BOOL  ZDKAOSF;  /* optbool result */
A68_BOOL  AEKAOSF;  /* clause result */
A_PROC_ENTRY(is_ctname);
 /* line 615: */
ZDKAOSF = (V.Sort==MCKAOSF_contextname_no);
if ( ! ZDKAOSF )
{ZDKAOSF = (V.Sort==NCKAOSF_importname_no);
}
AEKAOSF = ZDKAOSF;
A_PROC_EXIT(is_ctname);
return( AEKAOSF );
} 
#undef NL

A68_VOID  DEKAOSF_get_contextname(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  EEKAOSF;  /* clause result */
A_PROC_ENTRY(get_contextname);
 /* line 619: */
 /* line 620: */
{ 
MLGAOSF_check_value(V, MCKAOSF_contextname_no, Msg);
 /* line 621: */
 /* line 622: */
EEKAOSF = V.Value;
} 
A_PROC_EXIT(get_contextname);
*ReturnedValue = (EEKAOSF);
return;
} 
#undef NL

A68_VOID  HEKAOSF_get_importname(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  IEKAOSF;  /* clause result */
A_PROC_ENTRY(get_importname);
 /* line 625: */
 /* line 626: */
{ 
MLGAOSF_check_value(V, NCKAOSF_importname_no, Msg);
 /* line 627: */
 /* line 628: */
IEKAOSF = V.Value;
} 
A_PROC_EXIT(get_importname);
*ReturnedValue = (IEKAOSF);
return;
} 
#undef NL
 /* line 631: */

A68_VOID  NEKAOSF_get_ctname(A68_176  Values, A68_INT * Index, A68_VC  Default_contextname, A68_97  Msg, A68_157  *ReturnedValue)
{ 
A68_BOOL  OEKAOSF;  /* optbool result */
A68_INT  PEKAOSF;  /* YIELD */
A68_157  QEKAOSF;  /* collateral clause result */
A68_157  REKAOSF;  /* clause result */
A68_INT  SEKAOSF;  /* YIELD */
A68_157  TEKAOSF;  /* collateral clause result */
A68_INT  UEKAOSF;  /* YIELD */
A68_157  VEKAOSF_ans;
A68_BOOL  WEKAOSF;  /* optbool result */
A68_INT  XEKAOSF;  /* YIELD */
A68_INT  YEKAOSF;  /* YIELD */
A68_VC * ZEKAOSF;  /* YIELD */
A68_INT  AFKAOSF;  /* YIELD */
A68_157  BFKAOSF;  /* collateral clause result */
A68_INT  CFKAOSF;  /* YIELD */
A68_INT  DFKAOSF;  /* YIELD */
A68_157  EFKAOSF;  /* collateral clause result */
A_PROC_ENTRY(get_ctname);
 /* line 632: */
 /* line 639: */
{ 
OEKAOSF = ((*Index)>=Values.upb);
if ( ! OEKAOSF )
{ /* line 640: */
PEKAOSF = ((*Index)+1) ;
OEKAOSF = ((*(&((&A_VINDEX(Values,PEKAOSF))->Sort)))==0);
}
if ( OEKAOSF )
{ 
QEKAOSF.Context = Default_contextname;
 /* line 641: */
QEKAOSF.Import = IHDAOSF_nullstr;
REKAOSF = QEKAOSF;
} 
else
{ 
 /* line 642: */
SEKAOSF = ((*Index)+1) ;
if ( SDKAOSF_is_contextname((*(&A_VINDEX(Values,SEKAOSF)))) )
{ 
UEKAOSF = (*Index)+=1 ;
TEKAOSF.Context = (*(&((&A_VINDEX(Values,UEKAOSF))->Value)));
TEKAOSF.Import = IHDAOSF_nullstr;
VEKAOSF_ans = TEKAOSF;
 /* line 643: */
WEKAOSF = ((*Index)<Values.upb);
if ( WEKAOSF )
{ /* line 644: */
XEKAOSF = ((*Index)+1) ;
WEKAOSF = VDKAOSF_is_importname((*(&A_VINDEX(Values,XEKAOSF))));
}
if ( WEKAOSF )
{ 
 /* line 645: */
YEKAOSF = (*Index)+=1 ;
ZEKAOSF = (&((&VEKAOSF_ans)->Import)) ;
(*ZEKAOSF) = (*(&((&A_VINDEX(Values,YEKAOSF))->Value)));
} 
 /* line 646: */
 /* line 647: */
REKAOSF = VEKAOSF_ans;
} 
else
{ 
 /* line 648: */
AFKAOSF = ((*Index)+1) ;
if ( VDKAOSF_is_importname((*(&A_VINDEX(Values,AFKAOSF)))) )
{ 
BFKAOSF.Context = Default_contextname;
 /* line 649: */
CFKAOSF = (*Index)+=1 ;
BFKAOSF.Import = (*(&((&A_VINDEX(Values,CFKAOSF))->Value)));
REKAOSF = BFKAOSF;
} 
else
{ 
DFKAOSF = ((*Index)+1) ;
MLGAOSF_check_value((*(&A_VINDEX(Values,DFKAOSF))), MCKAOSF_contextname_no, Msg);
 /* line 650: */
EFKAOSF.Context = IHDAOSF_nullstr;
 /* line 651: */
 /* line 652: */
EFKAOSF.Import = IHDAOSF_nullstr;
REKAOSF = EFKAOSF;
} 
} 
} 
} 
A_PROC_EXIT(get_ctname);
*ReturnedValue = (REKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  OFKAOSF_generator(A68_BOOL  NFKAOSF_anonymous, A68_173  *ReturnedValue)
{ 
A68_173  PFKAOSF;  /* clause result */
A68_173  QFKAOSF;  /* OPERATORS - dynamic generator */
{ 
QFKAOSF.upb = 1 ;
( NFKAOSF_anonymous? A_VLOC(A68_174 ,QFKAOSF): A_VHEAP(A68_174 ,QFKAOSF) );
PFKAOSF = QFKAOSF;
} 
*ReturnedValue = (PFKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  YFKAOSF_read_switch(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  BGKAOSF;  /* avoid structure result */
A68_VC  CGKAOSF_first_try;
A68_BOOL  DGKAOSF;  /* clause result */
A68_VC  EGKAOSF;  /* clause result */
A68_VC  HGKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_switch);
 /* line 669: */
{ 
IMGAOSF_read_token( YLGAOSF_first_and_check, AGKAOSF, Msg, &BGKAOSF );
CGKAOSF_first_try = BGKAOSF;
 /* line 670: */
 /* line 671: */
 /* line 672: */
DGKAOSF = CMJAOSF_legal_read(CGKAOSF_first_try);
if ( DGKAOSF )
{ 
EGKAOSF = CGKAOSF_first_try;
} 
else
{ 
 /* line 673: */
IMGAOSF_read_token( YLGAOSF_first_and_check, GGKAOSF, Msg, &HGKAOSF );
EGKAOSF = HGKAOSF;
} 
} 
A_PROC_EXIT(read_switch);
*ReturnedValue = (EGKAOSF);
return;
} 
#undef NL

A68_BOOL  JGKAOSF_is_switch(A68_175  V)
{ 
A68_BOOL  KGKAOSF;  /* clause result */
A_PROC_ENTRY(is_switch);
KGKAOSF = (V.Sort==LFKAOSF_switch_no);
A_PROC_EXIT(is_switch);
return( KGKAOSF );
} 
#undef NL
 /* line 679: */

A68_VOID  PGKAOSF_set_switch(A68_175  V, A68_BOOL * Flag, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_232  SGKAOSF;  /* collateral clause result */
A68_52  TGKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  UGKAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  VGKAOSF;  /* YIELD */
A68_52  WGKAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  XGKAOSF;  /* YIELD */
A68_52  AHKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BHKAOSF;  /* YIELD */
A68_VC  CHKAOSF;  /* clause result */
A68_85  DHKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  EHKAOSF;  /* avoid structure result */
A68_232  FHKAOSF;  /* collateral clause result */
A68_52  GHKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  HHKAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  IHKAOSF;  /* YIELD */
A68_52  JHKAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  KHKAOSF;  /* YIELD */
A68_52  NHKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  OHKAOSF;  /* YIELD */
A68_85  PHKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  QHKAOSF;  /* avoid structure result */
A68_232  RHKAOSF;  /* collateral clause result */
A68_52  SHKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  VHKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  WHKAOSF;  /* YIELD */
A68_52  ZHKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  AIKAOSF;  /* YIELD */
A68_52  DIKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EIKAOSF;  /* YIELD */
A68_85  FIKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  GIKAOSF;  /* avoid structure result */
A_PROC_ENTRY(set_switch);
 /* line 681: */
 /* line 682: */
if ( JGKAOSF_is_switch(V) )
{ 
 /* line 683: */
if ( A_VC_EQ(V.Value,RGKAOSF) )
{ 
SGKAOSF.data[0] = A_UNITE(TGKAOSF,mode7,7,Name);
 /* line 684: */
 /* line 685: */
if ( (*Flag) )
{ 
VGKAOSF = ' ' ;
SGKAOSF.data[1] = A_UNITE(UGKAOSF,mode6,6,VGKAOSF);
} 
else
{ 
(*Flag) = A68_TRUE;
 /* line 686: */
XGKAOSF = ':' ;
SGKAOSF.data[1] = A_UNITE(WGKAOSF,mode6,6,XGKAOSF);
} 
BHKAOSF = ZGKAOSF ;
SGKAOSF.data[2] = A_UNITE(AHKAOSF,mode7,7,BHKAOSF);
 /* line 687: */
YCEAOSF_oneline( A_HISVEC(DHKAOSF,SGKAOSF,3,A68_52 ), &EHKAOSF );
CHKAOSF = EHKAOSF;
} 
else
{ 
FHKAOSF.data[0] = A_UNITE(GHKAOSF,mode7,7,Name);
 /* line 688: */
if ( (*Flag) )
{ 
(*Flag) = A68_FALSE;
 /* line 689: */
 /* line 690: */
IHKAOSF = ':' ;
FHKAOSF.data[1] = A_UNITE(HHKAOSF,mode6,6,IHKAOSF);
} 
else
{ 
KHKAOSF = ' ' ;
FHKAOSF.data[1] = A_UNITE(JHKAOSF,mode6,6,KHKAOSF);
} 
OHKAOSF = MHKAOSF ;
FHKAOSF.data[2] = A_UNITE(NHKAOSF,mode7,7,OHKAOSF);
 /* line 691: */
 /* line 692: */
YCEAOSF_oneline( A_HISVEC(PHKAOSF,FHKAOSF,3,A68_52 ), &QHKAOSF );
CHKAOSF = QHKAOSF;
} 
} 
else
{ 
MLGAOSF_check_value(V, 0, Msg);
 /* line 693: */
RHKAOSF.data[0] = A_UNITE(SHKAOSF,mode7,7,Name);
WHKAOSF = UHKAOSF ;
RHKAOSF.data[1] = A_UNITE(VHKAOSF,mode7,7,WHKAOSF);
 /* line 694: */
if ( (*Flag) )
{ 
(*Flag) = A68_FALSE;
 /* line 695: */
AIKAOSF = YHKAOSF ;
RHKAOSF.data[2] = A_UNITE(ZHKAOSF,mode7,7,AIKAOSF);
} 
else
{ 
(*Flag) = A68_TRUE;
 /* line 696: */
EIKAOSF = CIKAOSF ;
RHKAOSF.data[2] = A_UNITE(DIKAOSF,mode7,7,EIKAOSF);
} 
 /* line 697: */
YCEAOSF_oneline( A_HISVEC(FIKAOSF,RHKAOSF,3,A68_52 ), &GIKAOSF );
CHKAOSF = GIKAOSF;
} 
A_PROC_EXIT(set_switch);
*ReturnedValue = (CHKAOSF);
return;
} 
#undef NL

A68_BOOL  RIKAOSF_is_word(A68_175  V)
{ 
A68_BOOL  SIKAOSF;  /* clause result */
A_PROC_ENTRY(is_word);
SIKAOSF = (V.Sort==NIKAOSF_word_no);
A_PROC_EXIT(is_word);
return( SIKAOSF );
} 
#undef NL

A68_INT  WIKAOSF_get_word(A68_175  V, A68_97  Msg, A68_46  Words)
{ 
A68_INT  XIKAOSF_index;
A68_INT  YIKAOSF_count;
A68_VC  ZIKAOSF_test;
A68_VC * AJKAOSF;  /* forall control - []x */
A68_INT  BJKAOSF;  /* forall loop counter */
A68_INT  DJKAOSF;  /* YIELD */
A68_52  EJKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FJKAOSF;  /* YIELD */
A68_85  GJKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HJKAOSF;  /* avoid structure result */
A68_VC  CJKAOSF_str;
A68_VC  IJKAOSF_w;
A68_46  JJKAOSF;  /* OPERATORS - trim index */
A68_46  KJKAOSF;  /* forall yield */
A68_VC * LJKAOSF;  /* forall control - []x */
A68_INT  MJKAOSF;  /* forall loop counter */
A68_232  NJKAOSF;  /* collateral clause result */
A68_52  OJKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  RJKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  SJKAOSF;  /* YIELD */
A68_52  TJKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  UJKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  VJKAOSF;  /* avoid structure result */
A68_235  WJKAOSF;  /* collateral clause result */
A68_52  XJKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  AKKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BKKAOSF;  /* YIELD */
A68_85  CKKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  DKKAOSF;  /* avoid structure result */
A68_46  EKKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  FKKAOSF;  /* clause result */
A_PROC_ENTRY(get_word);
 /* line 715: */
 /* line 716: */
{ 
XIKAOSF_index = 0;
YIKAOSF_count = 0;
 /* line 717: */
 /* line 718: */
if ( RIKAOSF_is_word(V) )
{ 
BJKAOSF = Words.upb -1;
AJKAOSF = Words.data;
for (;BJKAOSF-- >= 0;
(AJKAOSF++
) )
{
ZIKAOSF_test = *AJKAOSF;
 /* line 719: */
if ( !((XIKAOSF_index==0)) ) break;
YIKAOSF_count+=1;
 /* line 720: */
if ( A_VC_EQ(ZIKAOSF_test,V.Value) )
{ 
 /* line 721: */
XIKAOSF_index = YIKAOSF_count;
} 
}
 /* line 722: */
} 
 /* line 723: */
 /* line 724: */
if ( (XIKAOSF_index==0) )
{ 
DJKAOSF = 1 ;
FJKAOSF = A_VINDEX(Words,DJKAOSF) ;
YCEAOSF_oneline( A_HVEC(GJKAOSF,A_UNITE(EJKAOSF,mode7,7,FJKAOSF),A68_52 ), &HJKAOSF );
CJKAOSF_str = HJKAOSF;
 /* line 725: */
KJKAOSF = A_VTRIM(JJKAOSF,(Words),A_VTSCRIPT(&(JJKAOSF.upb),(Words).upb,2,(Words).upb)) ;
MJKAOSF = KJKAOSF.upb -1;
LJKAOSF = KJKAOSF.data;
for (;MJKAOSF-- >= 0;
(LJKAOSF++
) )
{
IJKAOSF_w = *LJKAOSF;
NJKAOSF.data[0] = A_UNITE(OJKAOSF,mode7,7,CJKAOSF_str);
SJKAOSF = QJKAOSF ;
NJKAOSF.data[1] = A_UNITE(RJKAOSF,mode7,7,SJKAOSF);
NJKAOSF.data[2] = A_UNITE(TJKAOSF,mode7,7,IJKAOSF_w);
YCEAOSF_oneline( A_HISVEC(UJKAOSF,NJKAOSF,3,A68_52 ), &VJKAOSF );
CJKAOSF_str = VJKAOSF;
}
 /* line 726: */
WJKAOSF.data[0] = A_UNITE(XJKAOSF,mode7,7,CJKAOSF_str);
BKKAOSF = ZJKAOSF ;
WJKAOSF.data[1] = A_UNITE(AKKAOSF,mode7,7,BKKAOSF);
 /* line 727: */
YCEAOSF_oneline( A_HISVEC(CKKAOSF,WJKAOSF,2,A68_52 ), &DKKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(EKKAOSF,DKKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(EKKAOSF,DKKAOSF,A68_VC ),(Msg).nonlocals));
} 
 /* line 728: */
 /* line 729: */
FKKAOSF = XIKAOSF_index;
} 
A_PROC_EXIT(get_word);
return( FKKAOSF );
} 
#undef NL

A_STATIC A68_VOID  RKKAOSF_read_trim(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  SKKAOSF;  /* avoid structure result */
A68_VC  TKKAOSF_int1;
A68_BOOL  UKKAOSF;  /* clause result */
A68_VC  VKKAOSF;  /* clause result */
A68_VC  WKKAOSF;  /* avoid structure result */
A68_VC  XKKAOSF_first;
A68_BOOL  YKKAOSF;  /* clause result */
A68_235  ZKKAOSF;  /* collateral clause result */
A68_52  CLKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  DLKAOSF;  /* YIELD */
A68_52  ELKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  FLKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  GLKAOSF;  /* avoid structure result */
A68_46  HLKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ILKAOSF;  /* avoid structure result */
A68_VC  JLKAOSF_int2;
A68_BOOL  KLKAOSF;  /* clause result */
A68_VC  LLKAOSF;  /* clause result */
A68_VC  MLKAOSF;  /* avoid structure result */
A68_VC  NLKAOSF_second;
A68_232  OLKAOSF;  /* collateral clause result */
A68_52  PLKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  QLKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  RLKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  SLKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  TLKAOSF;  /* avoid structure result */
A68_VC  ULKAOSF_ans;
A68_VC  VLKAOSF;  /* clause result */
A68_VC  WLKAOSF;  /* avoid structure result */
A68_235  XLKAOSF;  /* collateral clause result */
A68_52  AMKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BMKAOSF;  /* YIELD */
A68_52  CMKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  DMKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  EMKAOSF;  /* avoid structure result */
A68_46  FMKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GMKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  HMKAOSF;  /* collateral clause result */
A68_52  IMKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  JMKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  KMKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  LMKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MMKAOSF;  /* avoid structure result */
A68_VC  NMKAOSF;  /* avoid structure result */
A68_235  OMKAOSF;  /* collateral clause result */
A68_52  RMKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  SMKAOSF;  /* YIELD */
A68_52  TMKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  UMKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  VMKAOSF;  /* avoid structure result */
A68_46  WMKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  XMKAOSF;  /* collateral clause result */
A68_52  YMKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  BNKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  CNKAOSF;  /* YIELD */
A68_52  DNKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  ENKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  FNKAOSF;  /* avoid structure result */
A68_46  GNKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HNKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_trim);
 /* line 753: */
 /* line 754: */
if ( (MWFAOSF_first_char(Msg)=='[') )
{ 
{ 
ITJAOSF_read_int_basic( AMGAOSF_get_first, Msg, &SKKAOSF );
TKKAOSF_int1 = SKKAOSF;
 /* line 755: */
 /* line 756: */
UKKAOSF = CMJAOSF_legal_read(TKKAOSF_int1);
if ( UKKAOSF )
{ 
(*HUFAOSF_rdcharno)-=1;
 /* line 757: */
 /* line 758: */
 /* line 759: */
VKKAOSF = TKKAOSF_int1;
} 
else
{ 
NCAAOSF_makervc( '.', &WKKAOSF );
VKKAOSF = WKKAOSF;
} 
} 
XKKAOSF_first = VKKAOSF;
 /* line 760: */
 /* line 761: */
if ( (MWFAOSF_first_char(Msg)=='.') )
{ 
 /* line 762: */
if ( (JWFAOSF_next_char(Msg)=='.') )
{ 
 /* line 763: */
YKKAOSF = A68_TRUE;
} 
else
{ 
DLKAOSF = BLKAOSF ;
ZKKAOSF.data[0] = A_UNITE(CLKAOSF,mode7,7,DLKAOSF);
ZKKAOSF.data[1] = A_UNITE(ELKAOSF,mode7,7,IKKAOSF_trim_str);
YCEAOSF_oneline( A_HISVEC(FLKAOSF,ZKKAOSF,2,A68_52 ), &GLKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(HLKAOSF,GLKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(HLKAOSF,GLKAOSF,A68_VC ),(Msg).nonlocals));
 /* line 764: */
 /* line 765: */
 /* line 766: */
YKKAOSF = A68_FALSE;
} 
} 
else
{ 
(*HUFAOSF_rdcharno)-=1;
 /* line 767: */
 /* line 768: */
 /* line 769: */
 /* line 770: */
YKKAOSF = A68_FALSE;
} 
if ( YKKAOSF )
{ 
{ 
ITJAOSF_read_int_basic( AMGAOSF_get_first, Msg, &ILKAOSF );
JLKAOSF_int2 = ILKAOSF;
 /* line 771: */
 /* line 772: */
KLKAOSF = CMJAOSF_legal_read(JLKAOSF_int2);
if ( KLKAOSF )
{ 
(*HUFAOSF_rdcharno)-=1;
 /* line 773: */
 /* line 774: */
 /* line 775: */
LLKAOSF = JLKAOSF_int2;
} 
else
{ 
NCAAOSF_makervc( '.', &MLKAOSF );
LLKAOSF = MLKAOSF;
} 
} 
NLKAOSF_second = LLKAOSF;
 /* line 776: */
 /* line 777: */
if ( (MWFAOSF_first_char(Msg)==']') )
{ 
OLKAOSF.data[0] = A_UNITE(PLKAOSF,mode7,7,XKKAOSF_first);
OLKAOSF.data[1] = A_UNITE(QLKAOSF,mode6,6,PKKAOSF_trimsep);
OLKAOSF.data[2] = A_UNITE(RLKAOSF,mode7,7,NLKAOSF_second);
YCEAOSF_oneline( A_HISVEC(SLKAOSF,OLKAOSF,3,A68_52 ), &TLKAOSF );
ULKAOSF_ans = TLKAOSF;
 /* line 778: */
JWFAOSF_next_char(Msg);
 /* line 779: */
 /* line 780: */
RKGAOSF_check_read( ULKAOSF_ans, IKKAOSF_trim_str, Msg, &WLKAOSF );
VLKAOSF = WLKAOSF;
} 
else
{ 
BMKAOSF = ZLKAOSF ;
XLKAOSF.data[0] = A_UNITE(AMKAOSF,mode7,7,BMKAOSF);
XLKAOSF.data[1] = A_UNITE(CMKAOSF,mode7,7,IKKAOSF_trim_str);
YCEAOSF_oneline( A_HISVEC(DMKAOSF,XLKAOSF,2,A68_52 ), &EMKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(FMKAOSF,EMKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(FMKAOSF,EMKAOSF,A68_VC ),(Msg).nonlocals));
 /* line 781: */
 /* line 782: */
 /* line 783: */
VLKAOSF = CHDAOSF_nilstr;
} 
} 
else
{ 
 /* line 784: */
if ( A_VC_NE(XKKAOSF_first,A_HVEC(GMKAOSF,'.',A68_CHAR )) )
{ 
 /* line 785: */
 /* line 786: */
if ( (MWFAOSF_first_char(Msg)==']') )
{ 
JWFAOSF_next_char(Msg);
 /* line 787: */
HMKAOSF.data[0] = A_UNITE(IMKAOSF,mode7,7,XKKAOSF_first);
HMKAOSF.data[1] = A_UNITE(JMKAOSF,mode6,6,PKKAOSF_trimsep);
HMKAOSF.data[2] = A_UNITE(KMKAOSF,mode7,7,XKKAOSF_first);
 /* line 788: */
YCEAOSF_oneline( A_HISVEC(LMKAOSF,HMKAOSF,3,A68_52 ), &MMKAOSF );
RKGAOSF_check_read( MMKAOSF, IKKAOSF_trim_str, Msg, &NMKAOSF );
VLKAOSF = NMKAOSF;
} 
else
{ 
 /* line 789: */
SMKAOSF = QMKAOSF ;
OMKAOSF.data[0] = A_UNITE(RMKAOSF,mode7,7,SMKAOSF);
OMKAOSF.data[1] = A_UNITE(TMKAOSF,mode7,7,IKKAOSF_trim_str);
YCEAOSF_oneline( A_HISVEC(UMKAOSF,OMKAOSF,2,A68_52 ), &VMKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(WMKAOSF,VMKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(WMKAOSF,VMKAOSF,A68_VC ),(Msg).nonlocals));
 /* line 790: */
 /* line 791: */
 /* line 792: */
VLKAOSF = CHDAOSF_nilstr;
} 
} 
else
{ 
 /* line 793: */
XMKAOSF.data[0] = A_UNITE(YMKAOSF,mode7,7,CQJAOSF_int_str);
 /* line 794: */
CNKAOSF = ANKAOSF ;
XMKAOSF.data[1] = A_UNITE(BNKAOSF,mode7,7,CNKAOSF);
XMKAOSF.data[2] = A_UNITE(DNKAOSF,mode7,7,IKKAOSF_trim_str);
YCEAOSF_oneline( A_HISVEC(ENKAOSF,XMKAOSF,3,A68_52 ), &FNKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(GNKAOSF,FNKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(GNKAOSF,FNKAOSF,A68_VC ),(Msg).nonlocals));
 /* line 795: */
 /* line 796: */
 /* line 797: */
 /* line 798: */
VLKAOSF = CHDAOSF_nilstr;
} 
} 
} 
else
{ 
KKGAOSF_nothing_read(  &HNKAOSF );
VLKAOSF = HNKAOSF;
} 
A_PROC_EXIT(read_trim);
*ReturnedValue = (VLKAOSF);
return;
} 
#undef NL

A68_BOOL  JNKAOSF_is_trim(A68_175  V)
{ 
A68_BOOL  KNKAOSF;  /* clause result */
A_PROC_ENTRY(is_trim);
KNKAOSF = (V.Sort==MKKAOSF_trim_no);
A_PROC_EXIT(is_trim);
return( KNKAOSF );
} 
#undef NL

A68_VOID  ONKAOSF_get_trim(A68_175  V, A68_266  Bounds, A68_97  Msg, A68_266  *ReturnedValue)
{ 
A68_266  PNKAOSF_ans;
A68_VC  QNKAOSF_trim;
A68_INT  RNKAOSF_sep;
A68_INT  SNKAOSF_count;
A68_CHAR * TNKAOSF_c;
A68_INT  UNKAOSF;  /* forall loop counter */
A68_46  XNKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YNKAOSF;  /* OPERATORS - trim index */
A68_VC  ZNKAOSF_int1;
A68_VC  AOKAOSF;  /* OPERATORS - trim index */
A68_VC  BOKAOSF_int2;
A68_VC  COKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * DOKAOSF;  /* YIELD */
A68_VC  EOKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * FOKAOSF;  /* YIELD */
A68_232  GOKAOSF;  /* collateral clause result */
A68_52  HOKAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  IOKAOSF;  /* YIELD */
A68_52  LOKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MOKAOSF;  /* YIELD */
A68_52  NOKAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  OOKAOSF;  /* YIELD */
A68_85  POKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  QOKAOSF;  /* avoid structure result */
A68_46  ROKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  SOKAOSF;  /* collateral clause result */
A68_52  TOKAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  UOKAOSF;  /* YIELD */
A68_52  XOKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  YOKAOSF;  /* YIELD */
A68_52  ZOKAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  APKAOSF;  /* YIELD */
A68_85  BPKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CPKAOSF;  /* avoid structure result */
A68_46  DPKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  EPKAOSF;  /* collateral clause result */
A68_52  FPKAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  GPKAOSF;  /* YIELD */
A68_52  JPKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KPKAOSF;  /* YIELD */
A68_52  LPKAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  MPKAOSF;  /* YIELD */
A68_85  NPKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  OPKAOSF;  /* avoid structure result */
A68_46  PPKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_266  QPKAOSF;  /* clause result */
A_PROC_ENTRY(get_trim);
 /* line 806: */
 /* line 808: */
{ 
MLGAOSF_check_value(V, MKKAOSF_trim_no, Msg);
 /* line 809: */
PNKAOSF_ans = Bounds;
 /* line 810: */
QNKAOSF_trim = V.Value;
 /* line 811: */
RNKAOSF_sep = 0;
SNKAOSF_count = 0;
 /* line 812: */
UNKAOSF = QNKAOSF_trim.upb -1;
TNKAOSF_c = QNKAOSF_trim.data;
for (;UNKAOSF-- >= 0;
(TNKAOSF_c++
) )
{
 /* line 813: */
if ( !((RNKAOSF_sep==0)) ) break;
SNKAOSF_count+=1;
 /* line 814: */
if ( ((*TNKAOSF_c)==PKKAOSF_trimsep) )
{ 
 /* line 815: */
RNKAOSF_sep = SNKAOSF_count;
} 
}
 /* line 816: */
if ( (RNKAOSF_sep==0) )
{ 
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(XNKAOSF,WNKAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(XNKAOSF,WNKAOSF,A68_VC ),(Msg).nonlocals));
} 
 /* line 817: */
ZNKAOSF_int1 = A_VTRIM(YNKAOSF,(QNKAOSF_trim),A_VTSCRIPT(&(YNKAOSF.upb),(QNKAOSF_trim).upb,1,(RNKAOSF_sep-1)));
BOKAOSF_int2 = A_VTRIM(AOKAOSF,(QNKAOSF_trim),A_VTSCRIPT(&(AOKAOSF.upb),(QNKAOSF_trim).upb,(RNKAOSF_sep+1),(QNKAOSF_trim).upb));
 /* line 818: */
if ( A_VC_NE(ZNKAOSF_int1,A_HVEC(COKAOSF,'.',A68_CHAR )) )
{ 
DOKAOSF = (&((&PNKAOSF_ans)->Lwb)) ;
(*DOKAOSF) = QIHAOSF_charstoint(ZNKAOSF_int1, A_HEAP(A68_BOOL ));
} 
 /* line 819: */
if ( A_VC_NE(BOKAOSF_int2,A_HVEC(EOKAOSF,'.',A68_CHAR )) )
{ 
FOKAOSF = (&((&PNKAOSF_ans)->Upb)) ;
(*FOKAOSF) = QIHAOSF_charstoint(BOKAOSF_int2, A_HEAP(A68_BOOL ));
} 
 /* line 820: */
 /* line 821: */
if ( ((*(&((&PNKAOSF_ans)->Lwb)))<Bounds.Lwb) )
{ 
 /* line 822: */
IOKAOSF = (*(&((&PNKAOSF_ans)->Lwb))) ;
GOKAOSF.data[0] = A_UNITE(HOKAOSF,mode1,1,IOKAOSF);
MOKAOSF = KOKAOSF ;
GOKAOSF.data[1] = A_UNITE(LOKAOSF,mode7,7,MOKAOSF);
OOKAOSF = Bounds.Lwb ;
GOKAOSF.data[2] = A_UNITE(NOKAOSF,mode1,1,OOKAOSF);
 /* line 823: */
YCEAOSF_oneline( A_HISVEC(POKAOSF,GOKAOSF,3,A68_52 ), &QOKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(ROKAOSF,QOKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(ROKAOSF,QOKAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 824: */
if ( ((*(&((&PNKAOSF_ans)->Upb)))>Bounds.Upb) )
{ 
 /* line 825: */
UOKAOSF = (*(&((&PNKAOSF_ans)->Upb))) ;
SOKAOSF.data[0] = A_UNITE(TOKAOSF,mode1,1,UOKAOSF);
YOKAOSF = WOKAOSF ;
SOKAOSF.data[1] = A_UNITE(XOKAOSF,mode7,7,YOKAOSF);
APKAOSF = Bounds.Upb ;
SOKAOSF.data[2] = A_UNITE(ZOKAOSF,mode1,1,APKAOSF);
 /* line 826: */
YCEAOSF_oneline( A_HISVEC(BPKAOSF,SOKAOSF,3,A68_52 ), &CPKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(DPKAOSF,CPKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(DPKAOSF,CPKAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 827: */
if ( ((*(&((&PNKAOSF_ans)->Upb)))<(*(&((&PNKAOSF_ans)->Lwb)))) )
{ 
GPKAOSF = (*(&((&PNKAOSF_ans)->Upb))) ;
EPKAOSF.data[0] = A_UNITE(FPKAOSF,mode1,1,GPKAOSF);
KPKAOSF = IPKAOSF ;
EPKAOSF.data[1] = A_UNITE(JPKAOSF,mode7,7,KPKAOSF);
MPKAOSF = (*(&((&PNKAOSF_ans)->Lwb))) ;
EPKAOSF.data[2] = A_UNITE(LPKAOSF,mode1,1,MPKAOSF);
 /* line 828: */
YCEAOSF_oneline( A_HISVEC(NPKAOSF,EPKAOSF,3,A68_52 ), &OPKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(PPKAOSF,OPKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(PPKAOSF,OPKAOSF,A68_VC ),(Msg).nonlocals));
} 
} 
} 
 /* line 829: */
 /* line 830: */
QPKAOSF = PNKAOSF_ans;
} 
A_PROC_EXIT(get_trim);
*ReturnedValue = (QPKAOSF);
return;
} 
#undef NL

A68_VOID  DQKAOSF_delimited_read(A68_CHAR  Delim, A68_VC  Missing, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_31  FQKAOSF_generator;   /* proc value of non-global proc */
A68_VC  LQKAOSF;  /* avoid structure result */
A68_VC  KQKAOSF_ans;
A68_INT  MQKAOSF_index;
A68_46  NQKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  OQKAOSF;  /* clause result */
A68_CHAR  PQKAOSF_c;
A68_INT  QQKAOSF;  /* YIELD */
A68_CHAR * RQKAOSF;  /* YIELD */
A68_INT  SQKAOSF;  /* YIELD */
A68_CHAR * TQKAOSF;  /* YIELD */
A68_BOOL  UQKAOSF;  /* clause result */
A68_VC  VQKAOSF;  /* clause result */
A68_VC  WQKAOSF;  /* OPERATORS - trim index */
A68_VC  XQKAOSF;  /* avoid structure result */
A_PROC_ENTRY(delimited_read);
 /* line 846: */
 /* line 848: */
{ 
A_CLOSURE( FQKAOSF_generator, GQKAOSF_generator, HQKAOSF_generator );
A_CALLPROC(FQKAOSF_generator,(A68_TRUE, &LQKAOSF),(A68_TRUE, &LQKAOSF,(FQKAOSF_generator).nonlocals));
KQKAOSF_ans = LQKAOSF;
 /* line 849: */
MQKAOSF_index = 0;
 /* line 850: */
for ( ;; )
{ 
 /* line 851: */
 /* line 852: */
if ( ((*HUFAOSF_rdcharno)==(*GUFAOSF_rdcharend)) )
{ 
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(NQKAOSF,Missing,A68_VC )),(MUAAOSF_user, A_HVEC(NQKAOSF,Missing,A68_VC ),(Msg).nonlocals));
 /* line 853: */
OQKAOSF = A68_FALSE;
} 
else
{ 
PQKAOSF_c = JWFAOSF_next_char(Msg);
 /* line 854: */
 /* line 855: */
if ( (PQKAOSF_c==Delim) )
{ 
 /* line 856: */
if ( (JWFAOSF_next_char(Msg)==Delim) )
{ 
QQKAOSF = MQKAOSF_index+=1 ;
RQKAOSF = (&A_VINDEX(KQKAOSF_ans,QQKAOSF)) ;
(*RQKAOSF) = PQKAOSF_c;
 /* line 857: */
 /* line 858: */
OQKAOSF = A68_TRUE;
} 
else
{ 
 /* line 859: */
 /* line 860: */
OQKAOSF = A68_FALSE;
} 
} 
else
{ 
SQKAOSF = MQKAOSF_index+=1 ;
TQKAOSF = (&A_VINDEX(KQKAOSF_ans,SQKAOSF)) ;
(*TQKAOSF) = PQKAOSF_c;
 /* line 861: */
 /* line 862: */
 /* line 863: */
OQKAOSF = A68_TRUE;
} 
} 
UQKAOSF = OQKAOSF;
if ( !UQKAOSF ) break;
/*SKIP*/;
}
 /* line 864: */
 /* line 865: */
ZCAAOSF_makervc( A_VTRIM(WQKAOSF,(KQKAOSF_ans),A_VTSCRIPT(&(WQKAOSF.upb),(KQKAOSF_ans).upb,1,MQKAOSF_index)), &XQKAOSF );
VQKAOSF = XQKAOSF;
} 
A_PROC_EXIT(delimited_read);
*ReturnedValue = (VQKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ZQKAOSF_read_quoted_string(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  BRKAOSF;  /* clause result */
A68_VC  DRKAOSF;  /* avoid structure result */
A68_VC  ERKAOSF;  /* avoid structure result */
A68_VC  FRKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_quoted_string);
 /* line 869: */
 /* line 870: */
if ( (MWFAOSF_first_char(Msg)=='\"') )
{ 
 /* line 871: */
 /* line 872: */
 /* line 873: */
 /* line 874: */
DQKAOSF_delimited_read( '\"', A_VC_PLUS(WPKAOSF_quoted_string_str,CRKAOSF), Msg, &DRKAOSF );
RKGAOSF_check_read( DRKAOSF, WPKAOSF_quoted_string_str, Msg, &ERKAOSF );
BRKAOSF = ERKAOSF;
} 
else
{ 
KKGAOSF_nothing_read(  &FRKAOSF );
BRKAOSF = FRKAOSF;
} 
A_PROC_EXIT(read_quoted_string);
*ReturnedValue = (BRKAOSF);
return;
} 
#undef NL

A68_BOOL  HRKAOSF_is_quoted_string(A68_175  V)
{ 
A68_BOOL  IRKAOSF;  /* clause result */
A_PROC_ENTRY(is_quoted_string);
IRKAOSF = (V.Sort==RPKAOSF_quoted_string_no);
A_PROC_EXIT(is_quoted_string);
return( IRKAOSF );
} 
#undef NL

A68_VOID  LRKAOSF_get_quoted_string(A68_175  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  MRKAOSF;  /* clause result */
A_PROC_ENTRY(get_quoted_string);
 /* line 880: */
 /* line 881: */
{ 
MLGAOSF_check_value(V, RPKAOSF_quoted_string_no, Msg);
 /* line 882: */
 /* line 883: */
MRKAOSF = V.Value;
} 
A_PROC_EXIT(get_quoted_string);
*ReturnedValue = (MRKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  XRKAOSF_read_character(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  YRKAOSF_c;
A68_BOOL  ZRKAOSF;  /* clause result */
A68_VC  ASKAOSF;  /* clause result */
A68_VC  BSKAOSF;  /* avoid structure result */
A68_VC  CSKAOSF;  /* avoid structure result */
A68_VC  DSKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_character);
 /* line 896: */
{ 
YRKAOSF_c = MWFAOSF_first_char(Msg);
 /* line 897: */
 /* line 898: */
ZRKAOSF = (YRKAOSF_c!=WSFAOSF_sep);
if ( ZRKAOSF )
{ 
JWFAOSF_next_char(Msg);
 /* line 899: */
 /* line 900: */
 /* line 901: */
NCAAOSF_makervc( YRKAOSF_c, &BSKAOSF );
RKGAOSF_check_read( BSKAOSF, SRKAOSF_character_str, Msg, &CSKAOSF );
ASKAOSF = CSKAOSF;
} 
else
{ 
KKGAOSF_nothing_read(  &DSKAOSF );
ASKAOSF = DSKAOSF;
} 
} 
A_PROC_EXIT(read_character);
*ReturnedValue = (ASKAOSF);
return;
} 
#undef NL

A68_BOOL  FSKAOSF_is_character(A68_175  V)
{ 
A68_BOOL  GSKAOSF;  /* clause result */
A_PROC_ENTRY(is_character);
GSKAOSF = (V.Sort==NRKAOSF_character_no);
A_PROC_EXIT(is_character);
return( GSKAOSF );
} 
#undef NL

A68_CHAR  JSKAOSF_get_character(A68_175  V, A68_97  Msg)
{ 
A68_CHAR  KSKAOSF;  /* clause result */
A68_VC  LSKAOSF;  /* OPERATORS - simple index */
A68_INT  MSKAOSF;  /* YIELD */
A_PROC_ENTRY(get_character);
 /* line 907: */
 /* line 908: */
{ 
MLGAOSF_check_value(V, NRKAOSF_character_no, Msg);
 /* line 909: */
 /* line 910: */
LSKAOSF = V.Value ;
MSKAOSF = 1 ;
KSKAOSF = (*(&A_VINDEX(LSKAOSF,MSKAOSF)));
} 
A_PROC_EXIT(get_character);
return( KSKAOSF );
} 
#undef NL

A68_183 * NSKAOSF_make_kernel_readers(void)
{ 
A68_183  OSKAOSF;  /* collateral clause result */
A68_180  PSKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  QSKAOSF;  /* procedure value */
A68_VC  RSKAOSF;  /* avoid structure result */
A68_VC  SSKAOSF;  /* avoid structure result */
A68_274  TSKAOSF;  /* collateral clause result */
A68_180  USKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  VSKAOSF;  /* YIELD */
A68_181  WSKAOSF;  /* procedure value */
A68_180  XSKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  YSKAOSF;  /* YIELD */
A68_181  ZSKAOSF;  /* procedure value */
A68_180  ATKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  BTKAOSF;  /* YIELD */
A68_181  CTKAOSF;  /* procedure value */
A68_180  DTKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  ETKAOSF;  /* YIELD */
A68_181  FTKAOSF;  /* procedure value */
A68_180  GTKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  HTKAOSF;  /* YIELD */
A68_181  ITKAOSF;  /* procedure value */
A68_180  JTKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  KTKAOSF;  /* YIELD */
A68_181  LTKAOSF;  /* procedure value */
A68_180  MTKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  NTKAOSF;  /* YIELD */
A68_181  OTKAOSF;  /* procedure value */
A68_180  PTKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  QTKAOSF;  /* YIELD */
A68_181  RTKAOSF;  /* procedure value */
A68_180  STKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  TTKAOSF;  /* YIELD */
A68_181  UTKAOSF;  /* procedure value */
A68_180  VTKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  WTKAOSF;  /* YIELD */
A68_181  XTKAOSF;  /* procedure value */
A68_273  YTKAOSF;  /* collateral clause result */
A68_173  ZTKAOSF;  /* OPERATORS - istruct -> vector */
A68_172  AUKAOSF;  /* avoid structure result */
A68_180  BUKAOSF;  /* OPERATORS - mode -> union mode */
A68_273  CUKAOSF;  /* collateral clause result */
A68_173  DUKAOSF;  /* OPERATORS - istruct -> vector */
A68_172  EUKAOSF;  /* avoid structure result */
A68_180  FUKAOSF;  /* OPERATORS - mode -> union mode */
A68_180  GUKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  HUKAOSF;  /* YIELD */
A68_181  IUKAOSF;  /* procedure value */
A68_180  JUKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  KUKAOSF;  /* YIELD */
A68_181  LUKAOSF;  /* procedure value */
A68_180  MUKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  NUKAOSF;  /* YIELD */
A68_181  OUKAOSF;  /* procedure value */
A68_180  PUKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  QUKAOSF;  /* YIELD */
A68_181  RUKAOSF;  /* procedure value */
A68_180  SUKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  TUKAOSF;  /* YIELD */
A68_181  UUKAOSF;  /* procedure value */
A68_180  VUKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  WUKAOSF;  /* YIELD */
A68_181  XUKAOSF;  /* procedure value */
A68_180  YUKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  ZUKAOSF;  /* procedure value */
A68_180  AVKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  BVKAOSF;  /* YIELD */
A68_181  CVKAOSF;  /* procedure value */
A68_180  DVKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  EVKAOSF;  /* YIELD */
A68_181  FVKAOSF;  /* procedure value */
A68_180  GVKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  HVKAOSF;  /* YIELD */
A68_181  IVKAOSF;  /* procedure value */
A68_183 * JVKAOSF;  /* clause result */
A68_191  KVKAOSF;  /* OPERATORS - istruct -> vector */
A68_183 * LVKAOSF;  /* YIELD */
A_PROC_ENTRY(make_kernel_readers);
 /* line 917: */
OSKAOSF.Rule.Sort = (&KNGAOSF_command_name_no);
 /* line 918: */
QSKAOSF.fn.fn_global = ONGAOSF_read_command_name;
QSKAOSF.nonlocals = A68_NIL;
OSKAOSF.Rule.Reader = A_UNITE(PSKAOSF,mode1,1,QSKAOSF);
ZCAAOSF_makervc( GNGAOSF_command_name_str, &RSKAOSF );
OSKAOSF.Rule.Description = RSKAOSF;
 /* line 919: */
ZCAAOSF_makervc( JNGAOSF_command_name_help, &SSKAOSF );
OSKAOSF.Rule.Help = SSKAOSF;
OSKAOSF.Rest = (A68_183 *)A68_NIL;
 /* line 920: */
TSKAOSF.data[0].No = (&YMJAOSF_plus_no);
WSKAOSF.fn.fn_global = XNJAOSF_read_plus;
WSKAOSF.nonlocals = A68_NIL;
VSKAOSF = WSKAOSF ;
TSKAOSF.data[0].New = A_UNITE(USKAOSF,mode1,1,VSKAOSF);
TSKAOSF.data[0].Name = JMJAOSF_plus_str;
 /* line 921: */
TSKAOSF.data[0].Help = IHDAOSF_nullstr;
TSKAOSF.data[1].No = (&ZMJAOSF_minus_no);
ZSKAOSF.fn.fn_global = BOJAOSF_read_minus;
ZSKAOSF.nonlocals = A68_NIL;
YSKAOSF = ZSKAOSF ;
TSKAOSF.data[1].New = A_UNITE(XSKAOSF,mode1,1,YSKAOSF);
TSKAOSF.data[1].Name = LMJAOSF_minus_str;
 /* line 922: */
TSKAOSF.data[1].Help = IHDAOSF_nullstr;
TSKAOSF.data[2].No = (&ANJAOSF_period_no);
CTKAOSF.fn.fn_global = FOJAOSF_read_period;
CTKAOSF.nonlocals = A68_NIL;
BTKAOSF = CTKAOSF ;
TSKAOSF.data[2].New = A_UNITE(ATKAOSF,mode1,1,BTKAOSF);
TSKAOSF.data[2].Name = NMJAOSF_period_str;
 /* line 923: */
TSKAOSF.data[2].Help = IHDAOSF_nullstr;
TSKAOSF.data[3].No = (&BNJAOSF_semicolon_no);
FTKAOSF.fn.fn_global = JOJAOSF_read_semicolon;
FTKAOSF.nonlocals = A68_NIL;
ETKAOSF = FTKAOSF ;
TSKAOSF.data[3].New = A_UNITE(DTKAOSF,mode1,1,ETKAOSF);
TSKAOSF.data[3].Name = PMJAOSF_semicolon_str;
 /* line 924: */
TSKAOSF.data[3].Help = IHDAOSF_nullstr;
TSKAOSF.data[4].No = (&DNJAOSF_openrnd_no);
ITKAOSF.fn.fn_global = ROJAOSF_read_openrnd;
ITKAOSF.nonlocals = A68_NIL;
HTKAOSF = ITKAOSF ;
TSKAOSF.data[4].New = A_UNITE(GTKAOSF,mode1,1,HTKAOSF);
TSKAOSF.data[4].Name = TMJAOSF_openrnd_str;
 /* line 925: */
TSKAOSF.data[4].Help = IHDAOSF_nullstr;
TSKAOSF.data[5].No = (&ENJAOSF_closernd_no);
LTKAOSF.fn.fn_global = VOJAOSF_read_closernd;
LTKAOSF.nonlocals = A68_NIL;
KTKAOSF = LTKAOSF ;
TSKAOSF.data[5].New = A_UNITE(JTKAOSF,mode1,1,KTKAOSF);
TSKAOSF.data[5].Name = VMJAOSF_closernd_str;
 /* line 926: */
TSKAOSF.data[5].Help = IHDAOSF_nullstr;
TSKAOSF.data[6].No = (&FNJAOSF_ampersand_no);
OTKAOSF.fn.fn_global = ZOJAOSF_read_ampersand;
OTKAOSF.nonlocals = A68_NIL;
NTKAOSF = OTKAOSF ;
TSKAOSF.data[6].New = A_UNITE(MTKAOSF,mode1,1,NTKAOSF);
TSKAOSF.data[6].Name = XMJAOSF_ampersand_str;
 /* line 927: */
TSKAOSF.data[6].Help = IHDAOSF_nullstr;
TSKAOSF.data[7].No = (&RTJAOSF_int_no);
RTKAOSF.fn.fn_global = VTJAOSF_read_int;
RTKAOSF.nonlocals = A68_NIL;
QTKAOSF = RTKAOSF ;
TSKAOSF.data[7].New = A_UNITE(PTKAOSF,mode1,1,QTKAOSF);
TSKAOSF.data[7].Name = CQJAOSF_int_str;
 /* line 928: */
TSKAOSF.data[7].Help = FQJAOSF_int_help;
TSKAOSF.data[8].No = (&ZUJAOSF_ident_no);
UTKAOSF.fn.fn_global = DVJAOSF_read_ident;
UTKAOSF.nonlocals = A68_NIL;
TTKAOSF = UTKAOSF ;
TSKAOSF.data[8].New = A_UNITE(STKAOSF,mode1,1,TTKAOSF);
TSKAOSF.data[8].Name = VUJAOSF_ident_str;
 /* line 929: */
TSKAOSF.data[8].Help = YUJAOSF_ident_help;
TSKAOSF.data[9].No = (&TVJAOSF_fnname_no);
XTKAOSF.fn.fn_global = WWJAOSF_read_fnname;
XTKAOSF.nonlocals = A68_NIL;
WTKAOSF = XTKAOSF ;
TSKAOSF.data[9].New = A_UNITE(VTKAOSF,mode1,1,WTKAOSF);
TSKAOSF.data[9].Name = PVJAOSF_fnname_str;
 /* line 930: */
TSKAOSF.data[9].Help = SVJAOSF_fnname_help;
TSKAOSF.data[10].No = (&QXJAOSF_name_no);
YTKAOSF.data[0] = BVJAOSF_ident_syntax;
YTKAOSF.data[1] = VVJAOSF_fnname_syntax;
IFFAOSF_alt( A_HISVEC(ZTKAOSF,YTKAOSF,2,A68_174 ), &AUKAOSF );
TSKAOSF.data[10].New = A_UNITE(BUKAOSF,mode3,3,AUKAOSF);
 /* line 931: */
TSKAOSF.data[10].Name = IXJAOSF_name_str;
 /* line 932: */
TSKAOSF.data[10].Help = OXJAOSF_name_help;
TSKAOSF.data[11].No = (&RXJAOSF_declname_no);
CUKAOSF.data[0] = BVJAOSF_ident_syntax;
CUKAOSF.data[1] = VVJAOSF_fnname_syntax;
 /* line 933: */
IFFAOSF_alt( A_HISVEC(DUKAOSF,CUKAOSF,2,A68_174 ), &EUKAOSF );
TSKAOSF.data[11].New = A_UNITE(FUKAOSF,mode3,3,EUKAOSF);
TSKAOSF.data[11].Name = LXJAOSF_declname_str;
 /* line 934: */
TSKAOSF.data[11].Help = PXJAOSF_declname_help;
TSKAOSF.data[12].No = (&OYJAOSF_string_no);
IUKAOSF.fn.fn_global = BZJAOSF_read_string;
IUKAOSF.nonlocals = A68_NIL;
HUKAOSF = IUKAOSF ;
TSKAOSF.data[12].New = A_UNITE(GUKAOSF,mode1,1,HUKAOSF);
TSKAOSF.data[12].Name = KYJAOSF_string_str;
 /* line 935: */
TSKAOSF.data[12].Help = NYJAOSF_string_help;
TSKAOSF.data[13].No = (&YZJAOSF_filename_no);
LUKAOSF.fn.fn_global = CAKAOSF_read_filename;
LUKAOSF.nonlocals = A68_NIL;
KUKAOSF = LUKAOSF ;
TSKAOSF.data[13].New = A_UNITE(JUKAOSF,mode1,1,KUKAOSF);
TSKAOSF.data[13].Name = UZJAOSF_filename_str;
 /* line 936: */
TSKAOSF.data[13].Help = XZJAOSF_filename_help;
TSKAOSF.data[14].No = (&ZAKAOSF_text_no);
OUKAOSF.fn.fn_global = DBKAOSF_read_text;
OUKAOSF.nonlocals = A68_NIL;
NUKAOSF = OUKAOSF ;
TSKAOSF.data[14].New = A_UNITE(MUKAOSF,mode1,1,NUKAOSF);
TSKAOSF.data[14].Name = VAKAOSF_text_str;
 /* line 937: */
TSKAOSF.data[14].Help = YAKAOSF_text_help;
TSKAOSF.data[15].No = (&MCKAOSF_contextname_no);
RUKAOSF.fn.fn_global = TCKAOSF_read_contextname;
RUKAOSF.nonlocals = A68_NIL;
QUKAOSF = RUKAOSF ;
TSKAOSF.data[15].New = A_UNITE(PUKAOSF,mode1,1,QUKAOSF);
 /* line 938: */
TSKAOSF.data[15].Name = CCKAOSF_contextname_str;
 /* line 939: */
TSKAOSF.data[15].Help = ICKAOSF_contextname_help;
TSKAOSF.data[16].No = (&NCKAOSF_importname_no);
UUKAOSF.fn.fn_global = EDKAOSF_read_importname;
UUKAOSF.nonlocals = A68_NIL;
TUKAOSF = UUKAOSF ;
TSKAOSF.data[16].New = A_UNITE(SUKAOSF,mode1,1,TUKAOSF);
 /* line 940: */
TSKAOSF.data[16].Name = FCKAOSF_importname_str;
 /* line 941: */
TSKAOSF.data[16].Help = LCKAOSF_importname_help;
TSKAOSF.data[17].No = (&LFKAOSF_switch_no);
XUKAOSF.fn.fn_global = YFKAOSF_read_switch;
XUKAOSF.nonlocals = A68_NIL;
WUKAOSF = XUKAOSF ;
TSKAOSF.data[17].New = A_UNITE(VUKAOSF,mode1,1,WUKAOSF);
TSKAOSF.data[17].Name = HFKAOSF_switch_str;
 /* line 942: */
TSKAOSF.data[17].Help = KFKAOSF_switch_help;
TSKAOSF.data[18].No = (&NIKAOSF_word_no);
ZUKAOSF.fn.fn_global = ONGAOSF_read_command_name;
ZUKAOSF.nonlocals = A68_NIL;
TSKAOSF.data[18].New = A_UNITE(YUKAOSF,mode1,1,ZUKAOSF);
TSKAOSF.data[18].Name = JIKAOSF_word_str;
 /* line 943: */
TSKAOSF.data[18].Help = MIKAOSF_word_help;
TSKAOSF.data[19].No = (&MKKAOSF_trim_no);
CVKAOSF.fn.fn_global = RKKAOSF_read_trim;
CVKAOSF.nonlocals = A68_NIL;
BVKAOSF = CVKAOSF ;
TSKAOSF.data[19].New = A_UNITE(AVKAOSF,mode1,1,BVKAOSF);
TSKAOSF.data[19].Name = IKKAOSF_trim_str;
 /* line 944: */
TSKAOSF.data[19].Help = LKKAOSF_trim_help;
TSKAOSF.data[20].No = (&RPKAOSF_quoted_string_no);
FVKAOSF.fn.fn_global = ZQKAOSF_read_quoted_string;
FVKAOSF.nonlocals = A68_NIL;
EVKAOSF = FVKAOSF ;
TSKAOSF.data[20].New = A_UNITE(DVKAOSF,mode1,1,EVKAOSF);
 /* line 945: */
TSKAOSF.data[20].Name = WPKAOSF_quoted_string_str;
 /* line 946: */
TSKAOSF.data[20].Help = ZPKAOSF_quoted_string_help;
TSKAOSF.data[21].No = (&NRKAOSF_character_no);
IVKAOSF.fn.fn_global = XRKAOSF_read_character;
IVKAOSF.nonlocals = A68_NIL;
HVKAOSF = IVKAOSF ;
TSKAOSF.data[21].New = A_UNITE(GVKAOSF,mode1,1,HVKAOSF);
TSKAOSF.data[21].Name = SRKAOSF_character_str;
 /* line 947: */
TSKAOSF.data[21].Help = VRKAOSF_character_help;
 /* line 951: */
LVKAOSF = A_HEAP(A68_183 ) ;
(*LVKAOSF) = OSKAOSF ;
JVKAOSF = XLFAOSF_add_readers(LVKAOSF, A_HISVEC(KVKAOSF,TSKAOSF,22,A68_192 ));
A_PROC_EXIT(make_kernel_readers);
return( JVKAOSF );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void MKJAOSF(void)   /* initialise DECS kernelreader */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","kernelreader.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/commandreader.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/commandsyntax.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/basics.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osinterface.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  IMJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KMJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MMJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OMJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QMJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SMJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UMJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WMJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_174  GNJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  INJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  KNJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  MNJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  ONJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  QNJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  SNJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  UNJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  STJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  AVJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  UVJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  SXJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  UXJAOSF;  /* OPERATORS - mode -> union mode */
A68_211  FYJAOSF;  /* procedure value */
A68_212  HYJAOSF;  /* procedure value */
A68_174  PYJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  ZZJAOSF;  /* OPERATORS - mode -> union mode */
A68_174  ABKAOSF;  /* OPERATORS - mode -> union mode */
A68_174  OCKAOSF;  /* OPERATORS - mode -> union mode */
A68_174  QCKAOSF;  /* OPERATORS - mode -> union mode */
A68_172  MFKAOSF;  /* collateral clause result */
A68_173  RFKAOSF;  /* avoid structure result */
A68_174  SFKAOSF;  /* OPERATORS - mode -> union mode */
A68_173  TFKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_173  UFKAOSF;  /* OPERATORS - assign op */
A68_174  VFKAOSF;  /* OPERATORS - mode -> union mode */
A68_174  OIKAOSF;  /* OPERATORS - mode -> union mode */
A68_174  NKKAOSF;  /* OPERATORS - mode -> union mode */
A68_174  SPKAOSF;  /* OPERATORS - mode -> union mode */
A68_174  ORKAOSF;  /* OPERATORS - mode -> union mode */
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
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/kernelreader.a68";
A_config.translation_time = "Mon May  3 00:36:16 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "LKJAOSF (from seed file) ";
A_config.spec_change_time = "Mon May  3 00:36:16 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kernelreader);
UEAALIB_a68config(LGAALIB_configinfo, QKJAOSF);
 /* line 120: */
TKJAOSF_opsymbols = SKJAOSF;
 /* line 122: */
 /* line 128: */
 /* line 135: */
 /* line 149: */
 /* line 152: */
 /* line 160: */
JMJAOSF_plus_str = A_HVEC(IMJAOSF,'+',A68_CHAR );
LMJAOSF_minus_str = A_HVEC(KMJAOSF,'-',A68_CHAR );
NMJAOSF_period_str = A_HVEC(MMJAOSF,'.',A68_CHAR );
PMJAOSF_semicolon_str = A_HVEC(OMJAOSF,';',A68_CHAR );
 /* line 161: */
RMJAOSF_comma_str = A_HVEC(QMJAOSF,',',A68_CHAR );
TMJAOSF_openrnd_str = A_HVEC(SMJAOSF,'(',A68_CHAR );
VMJAOSF_closernd_str = A_HVEC(UMJAOSF,')',A68_CHAR );
 /* line 162: */
XMJAOSF_ampersand_str = A_HVEC(WMJAOSF,'&',A68_CHAR );
 /* line 164: */
 /* line 165: */
 /* line 168: */
HNJAOSF_plus_syntax = A_UNITE(GNJAOSF,mode1,1,(&YMJAOSF_plus_no));
 /* line 169: */
JNJAOSF_minus_syntax = A_UNITE(INJAOSF,mode1,1,(&ZMJAOSF_minus_no));
 /* line 170: */
LNJAOSF_period_syntax = A_UNITE(KNJAOSF,mode1,1,(&ANJAOSF_period_no));
 /* line 171: */
NNJAOSF_semicolon_syntax = A_UNITE(MNJAOSF,mode1,1,(&BNJAOSF_semicolon_no));
 /* line 172: */
PNJAOSF_comma_syntax = A_UNITE(ONJAOSF,mode1,1,(&CNJAOSF_comma_no));
 /* line 173: */
RNJAOSF_openrnd_syntax = A_UNITE(QNJAOSF,mode1,1,(&DNJAOSF_openrnd_no));
 /* line 174: */
TNJAOSF_closernd_syntax = A_UNITE(SNJAOSF,mode1,1,(&ENJAOSF_closernd_no));
 /* line 175: */
VNJAOSF_ampersand_syntax = A_UNITE(UNJAOSF,mode1,1,(&FNJAOSF_ampersand_no));
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 180: */
 /* line 181: */
 /* line 182: */
 /* line 183: */
 /* line 184: */
 /* line 187: */
 /* line 188: */
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
 /* line 194: */
 /* line 205: */
CQJAOSF_int_str = BQJAOSF;
 /* line 207: */
 /* line 208: */
 /* line 209: */
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
 /* line 214: */
FQJAOSF_int_help = EQJAOSF;
 /* line 215: */
GQJAOSF_zero = (A68_INT)(unsigned char)'0';
 /* line 217: */
 /* line 294: */
 /* line 310: */
 /* line 311: */
TTJAOSF_int_syntax = A_UNITE(STJAOSF,mode1,1,(&RTJAOSF_int_no));
 /* line 314: */
 /* line 316: */
 /* line 318: */
 /* line 330: */
 /* line 347: */
VUJAOSF_ident_str = UUJAOSF;
 /* line 349: */
 /* line 350: */
YUJAOSF_ident_help = XUJAOSF;
 /* line 351: */
 /* line 352: */
BVJAOSF_ident_syntax = A_UNITE(AVJAOSF,mode1,1,(&ZUJAOSF_ident_no));
 /* line 355: */
 /* line 358: */
 /* line 360: */
 /* line 372: */
PVJAOSF_fnname_str = OVJAOSF;
 /* line 374: */
 /* line 375: */
 /* line 376: */
SVJAOSF_fnname_help = RVJAOSF;
 /* line 377: */
 /* line 378: */
VVJAOSF_fnname_syntax = A_UNITE(UVJAOSF,mode1,1,(&TVJAOSF_fnname_no));
 /* line 381: */
 /* line 406: */
 /* line 409: */
 /* line 411: */
 /* line 424: */
IXJAOSF_name_str = HXJAOSF;
LXJAOSF_declname_str = KXJAOSF;
 /* line 425: */
OXJAOSF_name_help = NXJAOSF;
 /* line 426: */
 /* line 427: */
 /* line 428: */
TXJAOSF_name_syntax = A_UNITE(SXJAOSF,mode1,1,(&QXJAOSF_name_no));
VXJAOSF_declname_syntax = A_UNITE(UXJAOSF,mode1,1,(&RXJAOSF_declname_no));
 /* line 431: */
 /* line 434: */
 /* line 441: */
FYJAOSF.fn.fn_global = XXJAOSF_is_name;
FYJAOSF.nonlocals = A68_NIL;
EYJAOSF_is_declname = (FYJAOSF);
 /* line 442: */
HYJAOSF.fn.fn_global = CYJAOSF_get_name;
HYJAOSF.nonlocals = A68_NIL;
GYJAOSF_get_declname = (HYJAOSF);
 /* line 449: */
KYJAOSF_string_str = JYJAOSF;
 /* line 451: */
NYJAOSF_string_help = MYJAOSF;
 /* line 453: */
 /* line 454: */
QYJAOSF_string_syntax = A_UNITE(PYJAOSF,mode1,1,(&OYJAOSF_string_no));
 /* line 457: */
 /* line 468: */
 /* line 470: */
 /* line 472: */
 /* line 479: */
 /* line 499: */
UZJAOSF_filename_str = TZJAOSF;
 /* line 501: */
XZJAOSF_filename_help = WZJAOSF;
 /* line 502: */
 /* line 503: */
AAKAOSF_filename_syntax = A_UNITE(ZZJAOSF,mode1,1,(&YZJAOSF_filename_no));
 /* line 506: */
 /* line 522: */
 /* line 524: */
 /* line 536: */
VAKAOSF_text_str = UAKAOSF;
 /* line 537: */
YAKAOSF_text_help = XAKAOSF;
 /* line 538: */
 /* line 539: */
BBKAOSF_text_syntax = A_UNITE(ABKAOSF,mode1,1,(&ZAKAOSF_text_no));
 /* line 542: */
 /* line 560: */
 /* line 562: */
 /* line 575: */
CCKAOSF_contextname_str = BCKAOSF;
FCKAOSF_importname_str = ECKAOSF;
 /* line 577: */
ICKAOSF_contextname_help = HCKAOSF;
 /* line 579: */
 /* line 580: */
LCKAOSF_importname_help = KCKAOSF;
 /* line 581: */
 /* line 582: */
PCKAOSF_contextname_syntax = A_UNITE(OCKAOSF,mode1,1,(&MCKAOSF_contextname_no));
 /* line 583: */
RCKAOSF_importname_syntax = A_UNITE(QCKAOSF,mode1,1,(&NCKAOSF_importname_no));
 /* line 587: */
 /* line 600: */
 /* line 612: */
 /* line 613: */
 /* line 614: */
 /* line 618: */
 /* line 624: */
 /* line 630: */
 /* line 660: */
HFKAOSF_switch_str = GFKAOSF;
 /* line 662: */
KFKAOSF_switch_help = JFKAOSF;
 /* line 663: */
 /* line 664: */
 /* line 665: */
MFKAOSF.Type = WEFAOSF_opt_syn;
OFKAOSF_generator( A68_FALSE, &RFKAOSF );
UFKAOSF = A_HVEC(TFKAOSF,A_UNITE(SFKAOSF,mode1,1,(&LFKAOSF_switch_no)),A68_174 ) ;
A_VASSIGN2(UFKAOSF,RFKAOSF,A68_174 ) ;
MFKAOSF.Elements = RFKAOSF;
WFKAOSF_switch_syntax = A_UNITE(VFKAOSF,mode2,2,MFKAOSF);
 /* line 668: */
 /* line 676: */
 /* line 678: */
 /* line 705: */
JIKAOSF_word_str = IIKAOSF;
 /* line 706: */
MIKAOSF_word_help = LIKAOSF;
 /* line 707: */
 /* line 708: */
PIKAOSF_word_syntax = A_UNITE(OIKAOSF,mode1,1,(&NIKAOSF_word_no));
 /* line 712: */
 /* line 714: */
 /* line 739: */
IKKAOSF_trim_str = HKKAOSF;
 /* line 741: */
 /* line 742: */
 /* line 743: */
LKKAOSF_trim_help = KKKAOSF;
 /* line 744: */
 /* line 745: */
OKKAOSF_trim_syntax = A_UNITE(NKKAOSF,mode1,1,(&MKKAOSF_trim_no));
 /* line 747: */
 /* line 750: */
 /* line 801: */
 /* line 803: */
 /* line 805: */
 /* line 837: */
 /* line 838: */
TPKAOSF_quoted_string_syntax = A_UNITE(SPKAOSF,mode1,1,(&RPKAOSF_quoted_string_no));
 /* line 839: */
WPKAOSF_quoted_string_str = VPKAOSF;
 /* line 841: */
 /* line 842: */
ZPKAOSF_quoted_string_help = YPKAOSF;
 /* line 845: */
 /* line 868: */
 /* line 877: */
 /* line 879: */
 /* line 889: */
 /* line 890: */
PRKAOSF_character_syntax = A_UNITE(ORKAOSF,mode1,1,(&NRKAOSF_character_no));
 /* line 891: */
SRKAOSF_character_str = RRKAOSF;
 /* line 893: */
VRKAOSF_character_help = URKAOSF;
 /* line 895: */
 /* line 904: */
 /* line 906: */
 /* line 915: */
 /* line 916: */
 /* line 988: */
A_PROC_EXIT(DECS kernelreader);
} 
#undef NL
/* end of translation of kernelreader.a68 */
