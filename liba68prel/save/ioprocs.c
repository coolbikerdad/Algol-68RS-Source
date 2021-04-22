/* UNAME:LVKAOSF */
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
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t93,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t95);
typedef struct A68t95  A68_95 ;    /* STRUCT 4 CHAR */
struct A68t94{
struct A68t95  Access;
A_PAD_ISTRUCT(A68_95 ,PAD_20)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(MODE95)  */
struct A68t97 ;

A_PROCEDURE(struct A68t92 *,A68t96,(A68_VC ,struct A68t94 ,struct A68t97 ),(A68_VC ,struct A68t94 ,struct A68t97 ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE26,MODE94,MODE97) REF MODE92 */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 ,struct A68t46 ),(struct A68t98 ,struct A68t46 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE98,MODE46) VOID */
struct A68t98{
A68_INT  Number;
A_PAD_INT(PAD_21)
struct A68t99 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_22)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT,REF MODE99,BITS)  */
A_VECTOR(struct A68t101 ,A68t100);
typedef struct A68t100  A68_100 ;    /* VECTOR [] MODE101 */
struct A68t101{
struct A68t98  Msgno;
A68_VC  Text;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE98,REF MODE26)  */
struct A68t99{
A68_VC  Name;
struct A68t100  Messages;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(REF MODE26,REF MODE100)  */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t92 *,struct A68t97 ),(struct A68t92 *,struct A68t97 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE92,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t92 *,A68_VC *),(struct A68t92 *,A68_VC *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE92) MODE26 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t92 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE92,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t92 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE92,MODE26,MODE97) MODE35 */
struct A68t106{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_23)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_24)
A68_SINT  Device;
A_PAD_SINT(PAD_25)
A68_SINT  Links;
A_PAD_SINT(PAD_26)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_27)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_28)
A68_LINT  Size;
A_PAD_LINT(PAD_29)
A68_LINT  Accessed;
A_PAD_LINT(PAD_30)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_31)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_32)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t108 ;

A_PROCEDURE(struct A68t106 *,A68t107,(struct A68t108 ,struct A68t97 ),(struct A68t108 ,struct A68t97 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE108,MODE97) REF MODE106 */
struct A68t108 { A68_INT mode; union {
struct A68t92 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t108  A68_108 ;    /* UNION(REF MODE92,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t109,(struct A68t92 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF MODE92,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t92 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE92,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t92 *,struct A68t97 ,struct A68t35 *),(struct A68t92 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE92,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t114,(A68_INT ),(A68_INT ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t115,(void),(void *));
typedef struct A68t115  A68_115 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t116,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t117,(void),(void *));
typedef struct A68t117  A68_117 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t118,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t119{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t120,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t119 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t119 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE26,MODE26,MODE97) MODE119 */

A_PROCEDURE(A68_VOID ,A68t121,(A68_VC *),(A68_VC *,void *));
typedef struct A68t121  A68_121 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t123,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t124,(void),(void *));
typedef struct A68t124  A68_124 ;    /* PROC BOOL */
struct A68t126 ;

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t126 ,struct A68t97 ),(struct A68t126 ,struct A68t97 ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE126,MODE97) VOID */
A_VECTOR(struct A68t127 ,A68t126);
typedef struct A68t126  A68_126 ;    /* VECTOR [] MODE127 */
struct A68t127{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_33)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t128,(void),(void *));
typedef struct A68t128  A68_128 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t129,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t131,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t132,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REAL) REAL */
struct A68t133{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t134,(A68_BOOL ,struct A68t133 *),(A68_BOOL ,struct A68t133 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(BOOL) MODE133 */

A_PROCEDURE(A68_VOID ,A68t135,(struct A68t133 ,A68_BOOL ),(struct A68t133 ,A68_BOOL ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE133,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t133 *),(struct A68t133 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC MODE133 */

A_PROCEDURE(A68_BOOL ,A68t137,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t139 ;
struct A68t140 ;

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC ,struct A68t128 ,struct A68t139 ,struct A68t140 ),(A68_VC ,struct A68t128 ,struct A68t139 ,struct A68t140 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,MODE128,MODE139,MODE140) VOID */

A_PROCEDURE(A68_BOOL ,A68t139,(A68_VC ,struct A68t121 ),(A68_VC ,struct A68t121 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,MODE121) BOOL */

A_PROCEDURE(A68_BOOL ,A68t140,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t141 ,struct A68t97 ),(struct A68t141 ,struct A68t97 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE141,MODE97) VOID */
struct A68t143{
A68_BITS  Options;
A_PAD_BITS(PAD_34)
};
typedef struct A68t143  A68_143 ;    /* STRUCT(BITS)  */
struct A68t145 ;

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t145 ),(struct A68t145 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE145) VOID */
struct A68t145 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t143  mode2;
A68_VC  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t145  A68_145 ;    /* UNION(BOOL,MODE143,MODE26)  */

A_PROCEDURE(A68_INT ,A68t146,(A68_INT ),(A68_INT ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT) INT */
struct A68t147{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t149 ;

A_PROCEDURE(A68_VOID ,A68t148,(struct A68t149 ),(struct A68t149 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE149) VOID */
struct A68t149 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t149  A68_149 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t150,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t151,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(BITS,BITS) BITS */
struct A68t153 ;

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t153 ,A68_INT ),(struct A68t153 ,A68_INT ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE153,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t153,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(CHAR) VOID */
struct A68t155 ;

A_PROCEDURE(A68_INT ,A68t154,(struct A68t155 ),(struct A68t155 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE155) INT */

A_PROCEDURE(A68_CHAR ,A68t155,(void),(void *));
typedef struct A68t155  A68_155 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t156,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t157,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t158,(A68_VC *),(A68_VC *,void *));
typedef struct A68t158  A68_158 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t159,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t160,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t161,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(BOOL) MODE46 */
A_VECTOR(struct A68t164 ,A68t163);
typedef struct A68t163  A68_163 ;    /* VECTOR [] MODE164 */
struct A68t164{
A68_INT  Number;
A_PAD_INT(PAD_35)
A68_BITS  Class;
A_PAD_BITS(PAD_36)
A68_VC  Text;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t162{
A68_VC  Name;
struct A68t100  Messages;
A68_BOOL * Initialised;
struct A68t163  Setup;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(MODE26,REF MODE100,REF BOOL,MODE163)  */

A_PROCEDURE(A68_VOID ,A68t165,(A68_BOOL ,struct A68t162 *),(A68_BOOL ,struct A68t162 *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(BOOL) MODE162 */
A_VECTOR(A68_VC ,A68t166);
typedef struct A68t166  A68_166 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t46 ,struct A68t166 *),(struct A68t46 ,struct A68t166 *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE46) MODE166 */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t166 ,struct A68t46 *),(struct A68t166 ,struct A68t46 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE166) MODE46 */
struct A68t170 ;

A_PROCEDURE(A68_BOOL ,A68t169,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE170) BOOL */
struct A68t170 { A68_INT mode; union {
struct A68t98  mode1;
struct A68t101  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t170  A68_170 ;    /* UNION(MODE98,MODE101)  */

A_PROCEDURE(A68_INT ,A68t171,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE98) INT */

A_PROCEDURE(A68_VOID ,A68t172,(A68_INT ,struct A68t162 ,struct A68t98 *),(A68_INT ,struct A68t162 ,struct A68t98 *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(INT,MODE162) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t173,(struct A68t98 ,struct A68t162 ),(struct A68t98 ,struct A68t162 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE98,MODE162) BOOL */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t98 ,struct A68t46 ,struct A68t101 *),(struct A68t98 ,struct A68t46 ,struct A68t101 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE98,MODE46) MODE101 */

A_PROCEDURE(A68_VOID ,A68t175,(A68_INT ,struct A68t98 *),(A68_INT ,struct A68t98 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t176,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE98) BOOL */

A_PROCEDURE(A68_BOOL ,A68t177,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t178,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t179,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_INT ,A68t181,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t180{
A68_VC  Rdbuffer;
struct A68t181  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_37)
A68_INT  Rdcharno;
A_PAD_INT(PAD_38)
A68_INT  Start_of_word;
A_PAD_INT(PAD_39)
struct A68t182 * Stack;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(REF MODE26,MODE181,INT,INT,INT,REF MODE182)  */
struct A68t182{
A68_VC  Line;
struct A68t182 * Rest;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(REF MODE26,REF MODE182)  */

A_PROCEDURE(struct A68t180 *,A68t183,(A68_VC ,struct A68t181 ),(A68_VC ,struct A68t181 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF MODE26,MODE181) REF MODE180 */

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t180 ),(struct A68t180 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE180) VOID */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t166 *),(struct A68t166 *,void *));
typedef struct A68t185  A68_185 ;    /* PROC REF MODE166 */

A_PROCEDURE(A68_BOOL ,A68t186,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE97) REF MODE26 */
struct A68t189 ;
struct A68t190 ;
struct A68t191 ;

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t190 ,struct A68t191 ,struct A68t97 ,struct A68t189 *),(struct A68t190 ,struct A68t191 ,struct A68t97 ,struct A68t189 *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE190,MODE191,MODE97) MODE189 */
A_VECTOR(struct A68t189 ,A68t198);
typedef struct A68t198  A68_198 ;    /* VECTOR [] MODE189 */
struct A68t196{
A68_INT  Choice;
A_PAD_INT(PAD_40)
struct A68t198  Params;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT,REF MODE198)  */
struct A68t197{
A68_INT  Sort;
A_PAD_INT(PAD_41)
A68_VC  Value;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t189 { A68_INT mode; union {
struct A68t196  mode1;
struct A68t197  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t189  A68_189 ;    /* UNION(MODE196,MODE197)  */
A_VECTOR(struct A68t194 ,A68t190);
typedef struct A68t190  A68_190 ;    /* VECTOR [] MODE194 */
A_VECTOR(struct A68t191 ,A68t193);
typedef struct A68t193  A68_193 ;    /* VECTOR [] MODE191 */
struct A68t192{
A68_BITS  Type;
A_PAD_BITS(PAD_42)
struct A68t193  Elements;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(BITS,REF MODE193)  */
struct A68t191 { A68_INT mode; union {
A68_INT * mode1;
struct A68t192  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t191  A68_191 ;    /* UNION(REF INT,MODE192)  */
struct A68t195 { A68_INT mode; union {
struct A68t187  mode1;
A68_INT * mode2;
struct A68t192  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t195  A68_195 ;    /* UNION(MODE187,REF INT,MODE192)  */
struct A68t194{
A68_INT * Sort;
struct A68t195  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF INT,MODE195,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_CHAR ,A68t199,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t200,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t197 ,A68_INT ,struct A68t97 ),(struct A68t197 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE197,INT,MODE97) VOID */
struct A68t202{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_43)
A68_BOOL  Check;
A_PAD_BOOL(PAD_44)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t202 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t202 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE202,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t204,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t205,(struct A68t197 ),(struct A68t197 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE197) BOOL */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t197 ,struct A68t97 ,A68_VC *),(struct A68t197 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE197,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t128 ),(struct A68t128 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE128) VOID */

A_PROCEDURE(A68_VOID ,A68t208,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 57 CHAR */
struct A68t210{
struct A68t92 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_45)
A68_INT  Number;
A_PAD_INT(PAD_46)
A68_VC  Name;
struct A68t180 * Reader;
struct A68t210 * Previous;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(REF MODE92,BOOL,INT,REF MODE26,REF MODE180,REF MODE210)  */
struct A68t211{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_47)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_48)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_49)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_50)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_51)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_52)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_53)
A68_INT  Width;
A_PAD_INT(PAD_54)
A68_INT  Page_count;
A_PAD_INT(PAD_55)
A68_INT  Page_length;
A_PAD_INT(PAD_56)
A68_INT  Eof_count;
A_PAD_INT(PAD_57)
struct A68t180 * Standard_reader;
struct A68t210 * Infile;
struct A68t158  Prompt;
struct A68t92 * Logfile;
struct A68t92 * Outfile;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE180,REF MODE210,MODE158,REF MODE92,REF MODE92)  */
A_ISTRUCT(A68_CHAR ,5,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(struct A68t211 *,A68t213,(void),(void *));
typedef struct A68t213  A68_213 ;    /* PROC REF MODE211 */
A_ISTRUCT(A68_VC ,2,A68t214);
typedef struct A68t214  A68_214 ;    /* STRUCT 2 MODE26 */
A_ISTRUCT(A68_CHAR ,30,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(struct A68t52 ,3,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(struct A68t52 ,8,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 8 MODE52 */

A_PROCEDURE(A68_VOID ,A68t222,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE26,MODE97) VOID */
A_ISTRUCT(A68_VC ,3,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t225,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE158) VOID */
A_ISTRUCT(A68_CHAR ,7,A68t227);
typedef struct A68t227  A68_227 ;    /* STRUCT 7 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandreader --- */
extern A68_VC  ZSFAOSF_arrow_str;
extern A68_180 * MUFAOSF_set_reader(A68_VC ,struct A68t181 );
extern A68_VOID  RUFAOSF_reset_reader(struct A68t180 );
/* --- End of imports from commandreader --- */


/* --- Imports from iomessages --- */
extern A68_VOID  YRFAOSF_io_msg(A68_INT ,A68_98 *);
/* --- End of imports from iomessages --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_98  MUAAOSF_user;
extern A68_46  LWAAOSF_nullmsg;
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_INT  WLHAOSF_seconds(void);
extern A68_VOID  JQHAOSF_date_time(A68_INT ,A68_VC *);
extern A68_VOID  ZQHAOSF_time_str(A68_VC *);
/* --- End of imports from basics --- */


/* --- Imports from testmode --- */
extern A68_BOOL  KEHAOSF_continue_on_error(void);
extern A68_VOID  WEHAOSF_testmode_file_name(struct A68t92 *,A68_VC *);
/* --- End of imports from testmode --- */


/* --- Imports from osinterface --- */
extern A68_BOOL  AVBAOSF_(struct A68t35 ,struct A68t35 );
extern A68_35  RUBAOSF_io_eof;
extern A68_35  UUBAOSF_io_error;
extern A68_35  ZPEAOSF_io_partline;
extern A68_92 * SSBAOSF_nil_file;
extern A68_92 * TSBAOSF_stdin;
extern A68_92 * VSBAOSF_stderr;
extern A68_94  ATBAOSF_read_access;
extern A68_94  ETBAOSF_write_access;
extern A68_94  MTBAOSF_update_access;
extern A68_94  QTBAOSF_update_truncate_access;
#define AQEAOSF_block_update_access MTBAOSF_update_access
#define BQEAOSF_block_update_truncate_access QTBAOSF_update_truncate_access
extern A68_92 * QVBAOSF_open_file(A68_VC ,struct A68t94 ,struct A68t97 );
extern A68_VOID  IWBAOSF_close_file(struct A68t92 *,struct A68t97 );
extern A68_VOID  DXBAOSF_read_line(struct A68t92 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  UXBAOSF_write_buffer(struct A68t92 *,A68_VC ,struct A68t97 ,A68_35 *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc = argc; A_argv = argv; A_envp = envp

#define DHCAOSF_prelude A_prelude
extern A68_BOOL  YUEAOSF_interactive(void);
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <math.h>

#define ZCFAOSF_sqrt sqrt
extern A68_VOID  NREAOSF_facility(A68_VC *);
extern A68_97  TIBAOSF_global_msg;
extern A68_97  RIBAOSF_ignore_msg;
extern A68_34 * DREAOSF_screen;
extern A68_34 * EREAOSF_out;
extern A68_34 * FREAOSF_err;
extern A68_VOID  DQEAOSF_write_stdout(A68_VC );
extern A68_VOID  BVEAOSF_prompt(A68_VC ,A68_VC *);
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  RODAOSF_(A68_CHAR ,A68_INT ,A68_VC *);
extern A68_VOID  FEAAOSF_intchars(A68_INT ,A68_VC *);
extern A68_INT  CIDAOSF_charnumber(struct A68t34 *);
extern A68_VOID  GSDAOSF_spaces(A68_INT ,A68_63 *);
extern A68_VOID  PKDAOSF_newline(struct A68t34 *);
extern A68_VOID  YSDAOSF_writeline(struct A68t34 *);
extern A68_VOID  KTDAOSF_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  KYDAOSF_put(struct A68t34 *,struct A68t85 );
extern A68_34 * BJDAOSF_make_channel(struct A68t87 ,struct A68t88 );
extern A68_VOID  YCEAOSF_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JSFAOSF(void);   /* commandreader */
extern void QOFAOSF(void);   /* iomessages */
extern void ZRAAOSF(void);   /* messageproc */
extern void CFHAOSF(void);   /* basics */
extern void UBHAOSF(void);   /* testmode */
extern void IPEAOSF(void);   /* osinterface */
extern void QMDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_209   PVKAOSF = {"$Id: ioprocs.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,QVKAOSF,PVKAOSF,57)
#define RVKAOSF_in_step 512
#define SVKAOSF_default_width 80
#define TVKAOSF_min_width 40
#define UVKAOSF_default_length 22
#define VVKAOSF_min_page_length 3
#define WVKAOSF_max_eof_count 3
static A68_212   XVKAOSF = {"*****"}; 
A_GISVEC(A68_VC ,YVKAOSF,XVKAOSF,5)
static A68_VC  ZVKAOSF_stars;
static A68_VC  EWKAOSF_in_buffer;
A68_211  GWKAOSF_iostate;
static A68_215   DXKAOSF = {"Paging - press <RET> for more "}; 
A_GISVEC(A68_VC ,EXKAOSF,DXKAOSF,30)
static A68_216   LYKAOSF = {"(suspended)  "}; 
A_GISVEC(A68_VC ,MYKAOSF,LYKAOSF,13)
static A68_217   NYKAOSF = {"  "}; 
A_GISVEC(A68_VC ,OYKAOSF,NYKAOSF,2)
static A68_218   ZZKAOSF = {"An error ocurred on input"}; 
A_GISVEC(A68_VC ,AALAOSF,ZZKAOSF,25)
static A68_217   NBLAOSF = {"  "}; 
A_GISVEC(A68_VC ,OBLAOSF,NBLAOSF,2)
static A68_217   SBLAOSF = {"  "}; 
A_GISVEC(A68_VC ,TBLAOSF,SBLAOSF,2)
static A68_212   ZCLAOSF = {"File "}; 
A_GISVEC(A68_VC ,ADLAOSF,ZCLAOSF,5)
static A68_217   FDLAOSF = {"  "}; 
A_GISVEC(A68_VC ,GDLAOSF,FDLAOSF,2)
static A68_VC  RJLAOSF_screen_buffer;
static A68_VC  TJLAOSF_out_buffer;
static A68_VC  VJLAOSF_err_buffer;
static A68_227   PKLAOSF = {"stdin  "}; 
A_GISVEC(A68_VC ,QKLAOSF,PKLAOSF,7)
typedef struct   /* env of non-global proc */
{
A68_BOOL  GYKAOSF_prompt;
A_PAD_BOOL(PAD_58)
A68_97  Msg;
A68_INT * EYKAOSF_length;
A68_VC * Buffer;
A68_43  YYKAOSF_read_from_file;
} AZKAOSF_read_from_file;
typedef struct   /* env of non-global proc */
{
int dummy;
} ODLAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  W;
A_PAD_INT(PAD_59)
} LILAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  W;
A_PAD_INT(PAD_60)
} TILAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  W;
A_PAD_INT(PAD_61)
} BJLAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_VC * Buffer;
} RZKAOSF_generator;

A_STATIC A68_VOID  BWKAOSF_generator(A68_BOOL  AWKAOSF_anonymous, A68_VC  *ReturnedValue);

A68_BOOL  HWKAOSF_out_is_online(void);

A68_211 * JWKAOSF_get_iostate(void);

A_STATIC A68_VOID  NWKAOSF_log_msg(A68_98  No, A68_46  Msg);

A_STATIC A68_VOID  VWKAOSF_out_msg(A68_98  No, A68_46  Msg);

A_STATIC A68_VOID  BXKAOSF_page(void);

A68_VOID  IXKAOSF_write_screen(A68_VC  Str);

A_STATIC A68_VOID  OXKAOSF_write_err(A68_VC  Str);

A_STATIC A68_VOID  VXKAOSF_write_out(A68_VC  Str);

A68_INT  DYKAOSF_getline(A68_VC * Buffer, A68_97  Msg);

A_STATIC A68_VOID  ZYKAOSF_read_from_file(A68_VC  Buf, void *NonLocals);

A_STATIC A68_VOID  QZKAOSF_generator(A68_BOOL  OZKAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  LALAOSF_banner(A68_VC  Message);

A68_VOID  CCLAOSF_io_fault(A68_97  Msg);

A68_INT  JCLAOSF_current_width(void);

A68_VOID  MCLAOSF_io_clearinputs(A68_97  Msg);

A68_VOID  VCLAOSF_io_input(A68_VC  Name, A68_97  Msg);

A_STATIC A68_VOID  NDLAOSF_generator(A68_BOOL  LDLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  YDLAOSF_io_removefile(A68_97  Msg);

A68_VOID  IELAOSF_io_showinput(A68_97  Msg);

A68_VOID  LELAOSF_io_dontshowinput(A68_97  Msg);

A68_VOID  OELAOSF_io_showoutput(A68_97  Msg);

A68_VOID  RELAOSF_io_dontshowoutput(A68_97  Msg);

A68_VOID  UELAOSF_io_showtime(A68_97  Msg);

A68_VOID  XELAOSF_io_dontshowtime(A68_97  Msg);

A68_VOID  AFLAOSF_io_printtime(A68_97  Msg);

A68_VOID  GFLAOSF_io_message(A68_VC  Text, A68_97  Msg);

A68_VOID  LFLAOSF_io_comment(A68_VC  Text, A68_97  Msg);

A68_VOID  PFLAOSF_io_offline(A68_97  Msg);

A68_VOID  UFLAOSF_io_online(A68_97  Msg);

A68_VOID  BGLAOSF_io_log(A68_VC  Name, A68_97  Msg);

A68_VOID  MGLAOSF_io_dontlog(A68_97  Msg);

A68_VOID  VGLAOSF_io_output(A68_VC  Name, A68_97  Msg);

A68_VOID  GHLAOSF_io_dontoutput(A68_97  Msg);

A68_VOID  PHLAOSF_io_page(A68_INT  L, A68_97  Msg);

A68_VOID  YHLAOSF_io_dontpage(A68_97  Msg);

A68_VOID  CILAOSF_io_setwidth(A68_INT  W, A68_97  Msg);

A_STATIC A68_VOID  KILAOSF_generator(A68_BOOL  IILAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SILAOSF_generator(A68_BOOL  QILAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AJLAOSF_generator(A68_BOOL  YILAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OJLAOSF_generator(A68_BOOL  NJLAOSF_anonymous, A68_VC  *ReturnedValue);

A68_VOID  YJLAOSF_initialise_ioprocs(A68_158  Get_prompt);

A_STATIC A68_VOID  QZKAOSF_generator(A68_BOOL  OZKAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RZKAOSF_generator *)NonLocals)->x)
{ 
A68_VC  SZKAOSF;  /* clause result */
A68_VC  TZKAOSF;  /* OPERATORS - dynamic generator */
{ 
TZKAOSF.upb = ((*NL(Buffer)).upb+RVKAOSF_in_step) ;
( OZKAOSF_anonymous? A_VLOC(A68_CHAR ,TZKAOSF): A_VHEAP(A68_CHAR ,TZKAOSF) );
SZKAOSF = TZKAOSF;
} 
*ReturnedValue = (SZKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ZYKAOSF_read_from_file(A68_VC  Buf, void *NonLocals)
#define NL(x) (((AZKAOSF_read_from_file *)NonLocals)->x)
{ 
A68_INT  BZKAOSF_leng;
A68_92 * CZKAOSF;  /* clause result */
A68_92 * DZKAOSF_file;
A68_35  EZKAOSF;  /* avoid structure result */
A68_35  FZKAOSF_status;
A68_INT * GZKAOSF;  /* YIELD */
A68_98  HZKAOSF;  /* avoid structure result */
A68_98  IZKAOSF;  /* avoid structure result */
A68_92 * JZKAOSF_old;
A68_210 ** KZKAOSF;  /* YIELD */
A68_VC  LZKAOSF;  /* avoid structure result */
A68_46  MZKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  NZKAOSF;  /* avoid structure result */
A68_31  PZKAOSF_generator;   /* proc value of non-global proc */
A68_VC  UZKAOSF;  /* avoid structure result */
A68_VC  VZKAOSF_new;
A68_VC  WZKAOSF;  /* OPERATORS - trim index */
A68_VC  XZKAOSF;  /* YIELD */
A68_VC  YZKAOSF;  /* OPERATORS - trim index */
A68_46  BALAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * CALAOSF;  /* YIELD */
A_PROC_ENTRY(read_from_file);
 /* line 275: */
 /* line 276: */
{ 
BZKAOSF_leng = 0;
 /* line 277: */
if ( NL(GYKAOSF_prompt) )
{ 
CZKAOSF = TSBAOSF_stdin;
} 
else
{ 
CZKAOSF = (*(&((*(&((&GWKAOSF_iostate)->Infile)))->File)));
} 
DZKAOSF_file = CZKAOSF;
 /* line 278: */
DXBAOSF_read_line( DZKAOSF_file, Buf, (&BZKAOSF_leng), NL(Msg), &EZKAOSF );
FZKAOSF_status = EZKAOSF;
 /* line 279: */
 /* line 280: */
if ( AVBAOSF_(FZKAOSF_status, RUBAOSF_io_eof) )
{ 
 /* line 281: */
if ( NL(GYKAOSF_prompt) )
{ 
 /* line 282: */
GZKAOSF = (&((&GWKAOSF_iostate)->Eof_count)) ;
if ( (((*GZKAOSF)+=1)>WVKAOSF_max_eof_count) )
{ 
 /* line 283: */
 /* line 284: */
YRFAOSF_io_msg( 5, &HZKAOSF );
A_CALLPROC(NL(Msg),(HZKAOSF, LWAAOSF_nullmsg),(HZKAOSF, LWAAOSF_nullmsg,(NL(Msg)).nonlocals));
} 
else
{ 
 /* line 285: */
 /* line 286: */
 /* line 287: */
YRFAOSF_io_msg( 6, &IZKAOSF );
A_CALLPROC(NL(Msg),(IZKAOSF, LWAAOSF_nullmsg),(IZKAOSF, LWAAOSF_nullmsg,(NL(Msg)).nonlocals));
} 
} 
else
{ 
JZKAOSF_old = (*(&((*(&((&GWKAOSF_iostate)->Infile)))->File)));
 /* line 288: */
KZKAOSF = (&((&GWKAOSF_iostate)->Infile)) ;
(*KZKAOSF) = (*(&((*(&((&GWKAOSF_iostate)->Infile)))->Previous)));
 /* line 289: */
RUFAOSF_reset_reader((*(*(&((*(&((&GWKAOSF_iostate)->Infile)))->Reader)))));
 /* line 290: */
PKDAOSF_newline(DREAOSF_screen);
 /* line 291: */
 /* line 292: */
WEHAOSF_testmode_file_name( JZKAOSF_old, &LZKAOSF );
YRFAOSF_io_msg( 3, &NZKAOSF );
A_CALLPROC(NL(Msg),(NZKAOSF, A_HVEC(MZKAOSF,LZKAOSF,A68_VC )),(NZKAOSF, A_HVEC(MZKAOSF,LZKAOSF,A68_VC ),(NL(Msg)).nonlocals));
 /* line 293: */
 /* line 294: */
 /* line 296: */
IWBAOSF_close_file(JZKAOSF_old, NL(Msg));
} 
} 
else
{ 
 /* line 297: */
if ( AVBAOSF_(FZKAOSF_status, ZPEAOSF_io_partline) )
{ 
(*NL(EYKAOSF_length))+=BZKAOSF_leng;
 /* line 299: */
A_CLOSURE( PZKAOSF_generator, QZKAOSF_generator, RZKAOSF_generator );
(( RZKAOSF_generator * ) ( PZKAOSF_generator.nonlocals )) -> Buffer = NL(Buffer);
A_CALLPROC(PZKAOSF_generator,(A68_FALSE, &UZKAOSF),(A68_FALSE, &UZKAOSF,(PZKAOSF_generator).nonlocals));
VZKAOSF_new = UZKAOSF;
 /* line 300: */
XZKAOSF = A_VTRIM(WZKAOSF,(VZKAOSF_new),A_VTSCRIPT(&(WZKAOSF.upb),(VZKAOSF_new).upb,1,(*NL(Buffer)).upb)) ;
A_VASSIGN2((*NL(Buffer)),XZKAOSF,A68_CHAR );
 /* line 301: */
(*NL(Buffer)) = VZKAOSF_new;
 /* line 303: */
 /* line 304: */
A_CALLPROC(NL(YYKAOSF_read_from_file),(A_VTRIM(YZKAOSF,((*NL(Buffer))),A_VTSCRIPT(&(YZKAOSF.upb),((*NL(Buffer))).upb,((*NL(EYKAOSF_length))+1),((*NL(Buffer))).upb))),(A_VTRIM(YZKAOSF,((*NL(Buffer))),A_VTSCRIPT(&(YZKAOSF.upb),((*NL(Buffer))).upb,((*NL(EYKAOSF_length))+1),((*NL(Buffer))).upb)),(NL(YYKAOSF_read_from_file)).nonlocals));
} 
else
{ 
 /* line 305: */
 /* line 306: */
if ( AVBAOSF_(FZKAOSF_status, UUBAOSF_io_error) )
{ 
 /* line 307: */
A_CALLPROC(NL(Msg),(MUAAOSF_user, A_HVEC(BALAOSF,AALAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(BALAOSF,AALAOSF,A68_VC ),(NL(Msg)).nonlocals));
} 
else
{ 
(*NL(EYKAOSF_length))+=BZKAOSF_leng;
 /* line 308: */
 /* line 309: */
 /* line 310: */
CALAOSF = (&((&GWKAOSF_iostate)->Eof_count)) ;
(*CALAOSF) = 0;
} 
} 
} 
} 
A_PROC_EXIT(read_from_file);
return;
} 
#undef NL

A_STATIC A68_VOID  NDLAOSF_generator(A68_BOOL  LDLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ODLAOSF_generator *)NonLocals)->x)
{ 
A68_VC  PDLAOSF;  /* clause result */
A68_VC  QDLAOSF;  /* OPERATORS - dynamic generator */
{ 
QDLAOSF.upb = RVKAOSF_in_step ;
( LDLAOSF_anonymous? A_VLOC(A68_CHAR ,QDLAOSF): A_VHEAP(A68_CHAR ,QDLAOSF) );
PDLAOSF = QDLAOSF;
} 
*ReturnedValue = (PDLAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  KILAOSF_generator(A68_BOOL  IILAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LILAOSF_generator *)NonLocals)->x)
{ 
A68_VC  MILAOSF;  /* clause result */
A68_VC  NILAOSF;  /* OPERATORS - dynamic generator */
{ 
NILAOSF.upb = (NL(W)+1) ;
( IILAOSF_anonymous? A_VLOC(A68_CHAR ,NILAOSF): A_VHEAP(A68_CHAR ,NILAOSF) );
MILAOSF = NILAOSF;
} 
*ReturnedValue = (MILAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  SILAOSF_generator(A68_BOOL  QILAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TILAOSF_generator *)NonLocals)->x)
{ 
A68_VC  UILAOSF;  /* clause result */
A68_VC  VILAOSF;  /* OPERATORS - dynamic generator */
{ 
VILAOSF.upb = (NL(W)+1) ;
( QILAOSF_anonymous? A_VLOC(A68_CHAR ,VILAOSF): A_VHEAP(A68_CHAR ,VILAOSF) );
UILAOSF = VILAOSF;
} 
*ReturnedValue = (UILAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  AJLAOSF_generator(A68_BOOL  YILAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BJLAOSF_generator *)NonLocals)->x)
{ 
A68_VC  CJLAOSF;  /* clause result */
A68_VC  DJLAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 533: */
DJLAOSF.upb = (NL(W)+1) ;
( YILAOSF_anonymous? A_VLOC(A68_CHAR ,DJLAOSF): A_VHEAP(A68_CHAR ,DJLAOSF) );
CJLAOSF = DJLAOSF;
} 
*ReturnedValue = (CJLAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  BWKAOSF_generator(A68_BOOL  AWKAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  CWKAOSF;  /* clause result */
A68_VC  DWKAOSF;  /* OPERATORS - dynamic generator */
{ 
DWKAOSF.upb = RVKAOSF_in_step ;
( AWKAOSF_anonymous? A_VLOC(A68_CHAR ,DWKAOSF): A_VHEAP(A68_CHAR ,DWKAOSF) );
CWKAOSF = DWKAOSF;
} 
*ReturnedValue = (CWKAOSF);
return;
} 
#undef NL

A68_BOOL  HWKAOSF_out_is_online(void)
{ 
A68_BOOL  IWKAOSF;  /* clause result */
A_PROC_ENTRY(out_is_online);
IWKAOSF = !(*(&((&GWKAOSF_iostate)->Outputing)));
A_PROC_EXIT(out_is_online);
return( IWKAOSF );
} 
#undef NL

A68_211 * JWKAOSF_get_iostate(void)
{ 
A68_211 * KWKAOSF;  /* clause result */
A_PROC_ENTRY(get_iostate);
KWKAOSF = (&GWKAOSF_iostate);
A_PROC_EXIT(get_iostate);
return( KWKAOSF );
} 
#undef NL

A_STATIC A68_VOID  NWKAOSF_log_msg(A68_98  No, A68_46  Msg)
{ 
A68_BOOL * OWKAOSF;  /* YIELD */
A68_214  PWKAOSF;  /* collateral clause result */
A68_VC  QWKAOSF;  /* avoid structure result */
A68_46  RWKAOSF;  /* OPERATORS - istruct -> vector */
A68_98  SWKAOSF;  /* avoid structure result */
A_PROC_ENTRY(log_msg);
 /* line 149: */
 /* line 150: */
{ 
OWKAOSF = (&((&GWKAOSF_iostate)->Logging)) ;
(*OWKAOSF) = A68_FALSE;
 /* line 151: */
 /* line 152: */
PWKAOSF.data[0] = ZVKAOSF_stars;
WEHAOSF_testmode_file_name( (*(&((&GWKAOSF_iostate)->Logfile))), &QWKAOSF );
PWKAOSF.data[1] = QWKAOSF;
YRFAOSF_io_msg( 1, &SWKAOSF );
A_CALLPROC(TIBAOSF_global_msg,(SWKAOSF, A_HISVEC(RWKAOSF,PWKAOSF,2,A68_VC )),(SWKAOSF, A_HISVEC(RWKAOSF,PWKAOSF,2,A68_VC ),(TIBAOSF_global_msg).nonlocals));
 /* line 153: */
IWBAOSF_close_file((*(&((&GWKAOSF_iostate)->Logfile))), TIBAOSF_global_msg);
 /* line 154: */
 /* line 155: */
A_CALLPROC(TIBAOSF_global_msg,(No, Msg),(No, Msg,(TIBAOSF_global_msg).nonlocals));
} 
A_PROC_EXIT(log_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  VWKAOSF_out_msg(A68_98  No, A68_46  Msg)
{ 
A68_BOOL * WWKAOSF;  /* YIELD */
A68_214  XWKAOSF;  /* collateral clause result */
A68_VC  YWKAOSF;  /* avoid structure result */
A68_46  ZWKAOSF;  /* OPERATORS - istruct -> vector */
A68_98  AXKAOSF;  /* avoid structure result */
A_PROC_ENTRY(out_msg);
 /* line 158: */
 /* line 159: */
{ 
WWKAOSF = (&((&GWKAOSF_iostate)->Outputing)) ;
(*WWKAOSF) = A68_FALSE;
 /* line 160: */
 /* line 161: */
XWKAOSF.data[0] = ZVKAOSF_stars;
WEHAOSF_testmode_file_name( (*(&((&GWKAOSF_iostate)->Outfile))), &YWKAOSF );
XWKAOSF.data[1] = YWKAOSF;
YRFAOSF_io_msg( 2, &AXKAOSF );
A_CALLPROC(TIBAOSF_global_msg,(AXKAOSF, A_HISVEC(ZWKAOSF,XWKAOSF,2,A68_VC )),(AXKAOSF, A_HISVEC(ZWKAOSF,XWKAOSF,2,A68_VC ),(TIBAOSF_global_msg).nonlocals));
 /* line 162: */
IWBAOSF_close_file((*(&((&GWKAOSF_iostate)->Outfile))), TIBAOSF_global_msg);
 /* line 163: */
 /* line 164: */
A_CALLPROC(TIBAOSF_global_msg,(No, Msg),(No, Msg,(TIBAOSF_global_msg).nonlocals));
} 
A_PROC_EXIT(out_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  BXKAOSF_page(void)
{ 
A68_INT * CXKAOSF;  /* YIELD */
A68_VC  FXKAOSF;  /* avoid structure result */
A68_INT * GXKAOSF;  /* YIELD */
A_PROC_ENTRY(page);
{ 
CXKAOSF = (&((&GWKAOSF_iostate)->Page_count)) ;
(*CXKAOSF)+=1;
 /* line 170: */
 /* line 171: */
if ( ((*(&((&GWKAOSF_iostate)->Page_count)))==(*(&((&GWKAOSF_iostate)->Page_length)))) )
{ 
BVEAOSF_prompt( EXKAOSF, &FXKAOSF );
FXKAOSF;
 /* line 172: */
 /* line 173: */
 /* line 174: */
GXKAOSF = (&((&GWKAOSF_iostate)->Page_count)) ;
(*GXKAOSF) = 0;
} 
} 
A_PROC_EXIT(page);
return;
} 
#undef NL

A68_VOID  IXKAOSF_write_screen(A68_VC  Str)
{ 
A68_97  JXKAOSF;  /* procedure value */
A68_35  KXKAOSF;  /* avoid structure result */
A68_97  LXKAOSF;  /* procedure value */
A68_35  MXKAOSF;  /* avoid structure result */
A_PROC_ENTRY(write_screen);
 /* line 178: */
 /* line 179: */
{ 
 /* line 180: */
if ( (*(&((&GWKAOSF_iostate)->Screen_output))) )
{ 
DQEAOSF_write_stdout(Str);
 /* line 181: */
if ( (*(&((&GWKAOSF_iostate)->Paging))) )
{ 
 /* line 182: */
BXKAOSF_page();
} 
} 
 /* line 183: */
 /* line 184: */
if ( (*(&((&GWKAOSF_iostate)->Logging))) )
{ 
 /* line 185: */
JXKAOSF.fn.fn_global = NWKAOSF_log_msg;
JXKAOSF.nonlocals = A68_NIL;
UXBAOSF_write_buffer( (*(&((&GWKAOSF_iostate)->Logfile))), Str, JXKAOSF, &KXKAOSF );
KXKAOSF;
} 
 /* line 186: */
 /* line 187: */
if ( (*(&((&GWKAOSF_iostate)->Outputing))) )
{ 
 /* line 188: */
 /* line 189: */
LXKAOSF.fn.fn_global = VWKAOSF_out_msg;
LXKAOSF.nonlocals = A68_NIL;
UXBAOSF_write_buffer( (*(&((&GWKAOSF_iostate)->Outfile))), Str, LXKAOSF, &MXKAOSF );
MXKAOSF;
} 
} 
A_PROC_EXIT(write_screen);
return;
} 
#undef NL

A_STATIC A68_VOID  OXKAOSF_write_err(A68_VC  Str)
{ 
A68_35  PXKAOSF;  /* avoid structure result */
A68_97  QXKAOSF;  /* procedure value */
A68_35  RXKAOSF;  /* avoid structure result */
A68_97  SXKAOSF;  /* procedure value */
A68_35  TXKAOSF;  /* avoid structure result */
A_PROC_ENTRY(write_err);
 /* line 193: */
 /* line 194: */
{ 
 /* line 195: */
if ( (*(&((&GWKAOSF_iostate)->Screen_output))) )
{ 
UXBAOSF_write_buffer( VSBAOSF_stderr, Str, RIBAOSF_ignore_msg, &PXKAOSF );
PXKAOSF;
 /* line 196: */
if ( (*(&((&GWKAOSF_iostate)->Paging))) )
{ 
 /* line 197: */
BXKAOSF_page();
} 
} 
 /* line 198: */
 /* line 199: */
if ( (*(&((&GWKAOSF_iostate)->Logging))) )
{ 
 /* line 200: */
QXKAOSF.fn.fn_global = NWKAOSF_log_msg;
QXKAOSF.nonlocals = A68_NIL;
UXBAOSF_write_buffer( (*(&((&GWKAOSF_iostate)->Logfile))), Str, QXKAOSF, &RXKAOSF );
RXKAOSF;
} 
 /* line 201: */
 /* line 202: */
if ( (*(&((&GWKAOSF_iostate)->Outputing))) )
{ 
 /* line 203: */
 /* line 204: */
SXKAOSF.fn.fn_global = VWKAOSF_out_msg;
SXKAOSF.nonlocals = A68_NIL;
UXBAOSF_write_buffer( (*(&((&GWKAOSF_iostate)->Outfile))), Str, SXKAOSF, &TXKAOSF );
TXKAOSF;
} 
} 
A_PROC_EXIT(write_err);
return;
} 
#undef NL

A_STATIC A68_VOID  VXKAOSF_write_out(A68_VC  Str)
{ 
A68_BOOL  WXKAOSF;  /* optbool result */
A68_97  XXKAOSF;  /* procedure value */
A68_35  YXKAOSF;  /* avoid structure result */
A68_97  ZXKAOSF;  /* procedure value */
A68_35  AYKAOSF;  /* avoid structure result */
A_PROC_ENTRY(write_out);
 /* line 208: */
 /* line 209: */
{ 
 /* line 210: */
WXKAOSF = (*(&((&GWKAOSF_iostate)->Seeing_out)));
if ( ! WXKAOSF )
{WXKAOSF = !(*(&((&GWKAOSF_iostate)->Outputing)));
}
if ( WXKAOSF )
{ 
DQEAOSF_write_stdout(Str);
 /* line 211: */
if ( (*(&((&GWKAOSF_iostate)->Paging))) )
{ 
 /* line 212: */
BXKAOSF_page();
} 
} 
 /* line 213: */
 /* line 214: */
if ( (*(&((&GWKAOSF_iostate)->Logging))) )
{ 
 /* line 215: */
XXKAOSF.fn.fn_global = NWKAOSF_log_msg;
XXKAOSF.nonlocals = A68_NIL;
UXBAOSF_write_buffer( (*(&((&GWKAOSF_iostate)->Logfile))), Str, XXKAOSF, &YXKAOSF );
YXKAOSF;
} 
 /* line 216: */
 /* line 217: */
if ( (*(&((&GWKAOSF_iostate)->Outputing))) )
{ 
 /* line 218: */
 /* line 219: */
ZXKAOSF.fn.fn_global = VWKAOSF_out_msg;
ZXKAOSF.nonlocals = A68_NIL;
UXBAOSF_write_buffer( (*(&((&GWKAOSF_iostate)->Outfile))), Str, ZXKAOSF, &AYKAOSF );
AYKAOSF;
} 
} 
A_PROC_EXIT(write_out);
return;
} 
#undef NL

A68_INT  DYKAOSF_getline(A68_VC * Buffer, A68_97  Msg)
{ 
A68_INT  EYKAOSF_length;
A68_BOOL  FYKAOSF;  /* optbool result */
A68_BOOL  GYKAOSF_prompt;
A68_BOOL  HYKAOSF;  /* optbool result */
A68_BOOL  IYKAOSF_visible;
A68_BOOL  JYKAOSF_screen_enabled;
A68_BOOL  KYKAOSF_out_enabled;
A68_VC  PYKAOSF;  /* avoid structure result */
A68_158  QYKAOSF;  /* CALL */
A68_VC  RYKAOSF;  /* avoid structure result */
A68_BOOL * SYKAOSF;  /* YIELD */
A68_BOOL  TYKAOSF;  /* optbool result */
A68_BOOL * UYKAOSF;  /* YIELD */
A68_BOOL * VYKAOSF;  /* YIELD */
A68_BOOL * WYKAOSF;  /* YIELD */
A68_43  YYKAOSF_read_from_file;   /* proc value of non-global proc */
A68_BOOL * DALAOSF;  /* YIELD */
A68_BOOL * EALAOSF;  /* YIELD */
A68_VC  FALAOSF;  /* OPERATORS - trim index */
A68_INT * GALAOSF;  /* YIELD */
A68_BOOL * HALAOSF;  /* YIELD */
A68_BOOL * IALAOSF;  /* YIELD */
A68_INT  JALAOSF;  /* clause result */
A_PROC_ENTRY(getline);
 /* line 224: */
 /* line 233: */
{ 
EYKAOSF_length = 0;
 /* line 234: */
 /* line 235: */
FYKAOSF = ((*(&((*(&((&GWKAOSF_iostate)->Infile)))->Number)))==0);
if ( ! FYKAOSF )
{FYKAOSF = (*(&((*(&((&GWKAOSF_iostate)->Infile)))->Suspended)));
}
GYKAOSF_prompt = FYKAOSF;
 /* line 236: */
HYKAOSF = GYKAOSF_prompt;
if ( ! HYKAOSF )
{HYKAOSF = (*(&((&GWKAOSF_iostate)->Logging)));
}
 /* line 237: */
if ( ! HYKAOSF )
{HYKAOSF = (*(&((&GWKAOSF_iostate)->Seeing_in)));
}
IYKAOSF_visible = HYKAOSF;
 /* line 238: */
JYKAOSF_screen_enabled = (*(&((&GWKAOSF_iostate)->Screen_output)));
 /* line 239: */
KYKAOSF_out_enabled = (*(&((&GWKAOSF_iostate)->Outputing)));
 /* line 242: */
if ( (CIDAOSF_charnumber(DREAOSF_screen)>1) )
{ 
PKDAOSF_newline(DREAOSF_screen);
} 
 /* line 243: */
if ( (CIDAOSF_charnumber(EREAOSF_out)>1) )
{ 
PKDAOSF_newline(EREAOSF_out);
} 
 /* line 247: */
 /* line 248: */
if ( IYKAOSF_visible )
{ 
PKDAOSF_newline(DREAOSF_screen);
 /* line 249: */
 /* line 250: */
if ( ((*(&((*(&((&GWKAOSF_iostate)->Infile)))->Number)))>0) )
{ 
KTDAOSF_putstr(DREAOSF_screen, (*(&((*(&((&GWKAOSF_iostate)->Infile)))->Name))));
 /* line 251: */
 /* line 252: */
if ( (*(&((*(&((&GWKAOSF_iostate)->Infile)))->Suspended))) )
{ 
 /* line 253: */
KTDAOSF_putstr(DREAOSF_screen, MYKAOSF);
} 
else
{ 
 /* line 254: */
 /* line 255: */
KTDAOSF_putstr(DREAOSF_screen, OYKAOSF);
} 
} 
 /* line 256: */
if ( (*(&((&GWKAOSF_iostate)->Clock))) )
{ 
ZQHAOSF_time_str(  &PYKAOSF );
KTDAOSF_putstr(DREAOSF_screen, PYKAOSF);
} 
 /* line 257: */
QYKAOSF = (*(&((&GWKAOSF_iostate)->Prompt))) ;
A_CALLPROC(QYKAOSF,( &RYKAOSF),( &RYKAOSF,(QYKAOSF).nonlocals));
KTDAOSF_putstr(DREAOSF_screen, RYKAOSF);
 /* line 258: */
KTDAOSF_putstr(DREAOSF_screen, ZSFAOSF_arrow_str);
 /* line 264: */
SYKAOSF = (&((&GWKAOSF_iostate)->Outputing)) ;
(*SYKAOSF) = A68_FALSE;
 /* line 265: */
 /* line 266: */
TYKAOSF = !GYKAOSF_prompt;
if ( TYKAOSF )
{TYKAOSF = !(*(&((&GWKAOSF_iostate)->Seeing_in)));
}
if ( TYKAOSF )
{ 
 /* line 267: */
UYKAOSF = (&((&GWKAOSF_iostate)->Screen_output)) ;
(*UYKAOSF) = A68_FALSE;
} 
 /* line 268: */
YSDAOSF_writeline(DREAOSF_screen);
 /* line 269: */
VYKAOSF = (&((&GWKAOSF_iostate)->Screen_output)) ;
(*VYKAOSF) = JYKAOSF_screen_enabled;
 /* line 270: */
 /* line 271: */
WYKAOSF = (&((&GWKAOSF_iostate)->Outputing)) ;
(*WYKAOSF) = KYKAOSF_out_enabled;
} 
 /* line 274: */
A_CLOSURE( YYKAOSF_read_from_file, ZYKAOSF_read_from_file, AZKAOSF_read_from_file );
(( AZKAOSF_read_from_file * ) ( YYKAOSF_read_from_file.nonlocals )) -> GYKAOSF_prompt = GYKAOSF_prompt;
(( AZKAOSF_read_from_file * ) ( YYKAOSF_read_from_file.nonlocals )) -> Msg = Msg;
(( AZKAOSF_read_from_file * ) ( YYKAOSF_read_from_file.nonlocals )) -> EYKAOSF_length = (&EYKAOSF_length);
(( AZKAOSF_read_from_file * ) ( YYKAOSF_read_from_file.nonlocals )) -> Buffer = Buffer;
(( AZKAOSF_read_from_file * ) ( YYKAOSF_read_from_file.nonlocals )) -> YYKAOSF_read_from_file = YYKAOSF_read_from_file;
 /* line 312: */
A_CALLPROC(YYKAOSF_read_from_file,((*Buffer)),((*Buffer),(YYKAOSF_read_from_file).nonlocals));
 /* line 315: */
DALAOSF = (&((&GWKAOSF_iostate)->Outputing)) ;
(*DALAOSF) = A68_FALSE;
 /* line 316: */
if ( !(*(&((&GWKAOSF_iostate)->Seeing_in))) )
{ 
EALAOSF = (&((&GWKAOSF_iostate)->Screen_output)) ;
(*EALAOSF) = A68_FALSE;
} 
 /* line 317: */
KTDAOSF_putstr(DREAOSF_screen, A_VTRIM(FALAOSF,((*Buffer)),A_VTSCRIPT(&(FALAOSF.upb),((*Buffer)).upb,1,EYKAOSF_length)));
 /* line 318: */
PKDAOSF_newline(DREAOSF_screen);
 /* line 319: */
GALAOSF = (&((&GWKAOSF_iostate)->Page_count)) ;
(*GALAOSF) = 1;
 /* line 321: */
HALAOSF = (&((&GWKAOSF_iostate)->Outputing)) ;
(*HALAOSF) = KYKAOSF_out_enabled;
 /* line 322: */
IALAOSF = (&((&GWKAOSF_iostate)->Screen_output)) ;
(*IALAOSF) = JYKAOSF_screen_enabled;
 /* line 324: */
 /* line 325: */
JALAOSF = EYKAOSF_length;
} 
A_PROC_EXIT(getline);
return( JALAOSF );
} 
#undef NL

A68_VOID  LALAOSF_banner(A68_VC  Message)
{ 
A68_INT  MALAOSF_gap;
A68_INT  NALAOSF_sgap;
A68_219  OALAOSF;  /* collateral clause result */
A68_52  PALAOSF;  /* OPERATORS - mode -> union mode */
A68_56  QALAOSF;  /* procedure value */
A68_VC  RALAOSF;  /* avoid structure result */
A68_52  SALAOSF;  /* OPERATORS - mode -> union mode */
A68_52  TALAOSF;  /* OPERATORS - mode -> union mode */
A68_52  UALAOSF;  /* OPERATORS - mode -> union mode */
A68_56  VALAOSF;  /* procedure value */
A68_85  WALAOSF;  /* OPERATORS - istruct -> vector */
A68_220  XALAOSF;  /* collateral clause result */
A68_52  YALAOSF;  /* OPERATORS - mode -> union mode */
A68_56  ZALAOSF;  /* procedure value */
A68_52  ABLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  BBLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  CBLAOSF;  /* procedure value */
A68_85  DBLAOSF;  /* OPERATORS - istruct -> vector */
A68_INT  EBLAOSF_bgap;
A68_INT  FBLAOSF_hgap;
A68_221  GBLAOSF;  /* collateral clause result */
A68_52  HBLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  IBLAOSF;  /* procedure value */
A68_63  JBLAOSF;  /* avoid structure result */
A68_52  KBLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LBLAOSF;  /* avoid structure result */
A68_52  MBLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  PBLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QBLAOSF;  /* YIELD */
A68_52  RBLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  UBLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VBLAOSF;  /* YIELD */
A68_VC  WBLAOSF;  /* avoid structure result */
A68_52  XBLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  YBLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  ZBLAOSF;  /* procedure value */
A68_85  ACLAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(banner);
 /* line 329: */
 /* line 330: */
{ 
MALAOSF_gap = ((*(&((&GWKAOSF_iostate)->Width)))-Message.upb);
 /* line 331: */
NALAOSF_sgap = ((*(&((&GWKAOSF_iostate)->Width)))/8);
 /* line 332: */
 /* line 333: */
 /* line 334: */
if ( ((MALAOSF_gap-8)<(2*NALAOSF_sgap)) )
{ 
 /* line 335: */
 /* line 336: */
if ( (MALAOSF_gap>1) )
{ 
QALAOSF.fn.fn_global = PKDAOSF_newline;
QALAOSF.nonlocals = A68_NIL;
OALAOSF.data[0] = A_UNITE(PALAOSF,mode12,12,QALAOSF);
RODAOSF_( ' ', (MALAOSF_gap/2), &RALAOSF );
OALAOSF.data[1] = A_UNITE(SALAOSF,mode7,7,RALAOSF);
OALAOSF.data[2] = A_UNITE(TALAOSF,mode7,7,Message);
VALAOSF.fn.fn_global = PKDAOSF_newline;
VALAOSF.nonlocals = A68_NIL;
OALAOSF.data[3] = A_UNITE(UALAOSF,mode12,12,VALAOSF);
 /* line 337: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(WALAOSF,OALAOSF,4,A68_52 ));
} 
else
{ 
ZALAOSF.fn.fn_global = PKDAOSF_newline;
ZALAOSF.nonlocals = A68_NIL;
XALAOSF.data[0] = A_UNITE(YALAOSF,mode12,12,ZALAOSF);
XALAOSF.data[1] = A_UNITE(ABLAOSF,mode7,7,Message);
CBLAOSF.fn.fn_global = PKDAOSF_newline;
CBLAOSF.nonlocals = A68_NIL;
XALAOSF.data[2] = A_UNITE(BBLAOSF,mode12,12,CBLAOSF);
 /* line 338: */
 /* line 339: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(DBLAOSF,XALAOSF,3,A68_52 ));
} 
} 
else
{ 
EBLAOSF_bgap = ((MALAOSF_gap-(2*NALAOSF_sgap))-4);
FBLAOSF_hgap = (EBLAOSF_bgap/2);
 /* line 340: */
IBLAOSF.fn.fn_global = PKDAOSF_newline;
IBLAOSF.nonlocals = A68_NIL;
GBLAOSF.data[0] = A_UNITE(HBLAOSF,mode12,12,IBLAOSF);
GSDAOSF_spaces( NALAOSF_sgap, &JBLAOSF );
GBLAOSF.data[1] = A_UNITE(KBLAOSF,mode19,19,JBLAOSF);
RODAOSF_( '=', FBLAOSF_hgap, &LBLAOSF );
GBLAOSF.data[2] = A_UNITE(MBLAOSF,mode7,7,LBLAOSF);
QBLAOSF = OBLAOSF ;
GBLAOSF.data[3] = A_UNITE(PBLAOSF,mode7,7,QBLAOSF);
GBLAOSF.data[4] = A_UNITE(RBLAOSF,mode7,7,Message);
 /* line 341: */
VBLAOSF = TBLAOSF ;
GBLAOSF.data[5] = A_UNITE(UBLAOSF,mode7,7,VBLAOSF);
RODAOSF_( '=', (EBLAOSF_bgap-FBLAOSF_hgap), &WBLAOSF );
GBLAOSF.data[6] = A_UNITE(XBLAOSF,mode7,7,WBLAOSF);
ZBLAOSF.fn.fn_global = PKDAOSF_newline;
ZBLAOSF.nonlocals = A68_NIL;
GBLAOSF.data[7] = A_UNITE(YBLAOSF,mode12,12,ZBLAOSF);
 /* line 342: */
 /* line 343: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(ACLAOSF,GBLAOSF,8,A68_52 ));
} 
} 
A_PROC_EXIT(banner);
return;
} 
#undef NL

A68_VOID  CCLAOSF_io_fault(A68_97  Msg)
{ 
A68_BOOL  DCLAOSF;  /* optbool result */
A68_BOOL * ECLAOSF;  /* YIELD */
A68_VC  FCLAOSF;  /* avoid structure result */
A68_46  GCLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  HCLAOSF;  /* avoid structure result */
A68_98  ICLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_fault);
 /* line 347: */
 /* line 348: */
 /* line 349: */
if ( !KEHAOSF_continue_on_error() )
{ 
 /* line 351: */
DCLAOSF = ((*(&((*(&((&GWKAOSF_iostate)->Infile)))->Number)))>0);
if ( DCLAOSF )
{DCLAOSF = !(*(&((*(&((&GWKAOSF_iostate)->Infile)))->Suspended)));
}
if ( DCLAOSF )
{ 
ECLAOSF = (&((*(&((&GWKAOSF_iostate)->Infile)))->Suspended)) ;
(*ECLAOSF) = A68_TRUE;
 /* line 352: */
 /* line 353: */
 /* line 354: */
 /* line 355: */
WEHAOSF_testmode_file_name( (*(&((*(&((&GWKAOSF_iostate)->Infile)))->File))), &FCLAOSF );
YRFAOSF_io_msg( 8, &HCLAOSF );
A_CALLPROC(Msg,(HCLAOSF, A_HVEC(GCLAOSF,FCLAOSF,A68_VC )),(HCLAOSF, A_HVEC(GCLAOSF,FCLAOSF,A68_VC ),(Msg).nonlocals));
} 
 /* line 356: */
 /* line 357: */
if ( !YUEAOSF_interactive() )
{ 
 /* line 358: */
 /* line 359: */
YRFAOSF_io_msg( 9, &ICLAOSF );
A_CALLPROC(Msg,(ICLAOSF, LWAAOSF_nullmsg),(ICLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
} 
A_PROC_EXIT(io_fault);
return;
} 
#undef NL

A68_INT  JCLAOSF_current_width(void)
{ 
A68_INT  KCLAOSF;  /* clause result */
A_PROC_ENTRY(current_width);
KCLAOSF = (*(&((&GWKAOSF_iostate)->Width)));
A_PROC_EXIT(current_width);
return( KCLAOSF );
} 
#undef NL

A68_VOID  MCLAOSF_io_clearinputs(A68_97  Msg)
{ 
A68_98  NCLAOSF;  /* avoid structure result */
A68_92 * OCLAOSF_old;
A68_210 ** PCLAOSF;  /* YIELD */
A68_VC  QCLAOSF;  /* avoid structure result */
A68_46  RCLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  SCLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_clearinputs);
 /* line 370: */
 /* line 371: */
if ( ((*(&((*(&((&GWKAOSF_iostate)->Infile)))->Number)))==0) )
{ 
 /* line 372: */
YRFAOSF_io_msg( 10, &NCLAOSF );
A_CALLPROC(Msg,(NCLAOSF, LWAAOSF_nullmsg),(NCLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
for ( ;; )
{ 
 /* line 373: */
if ( !(((*(&((*(&((&GWKAOSF_iostate)->Infile)))->Number)))>0)) ) break;
OCLAOSF_old = (*(&((*(&((&GWKAOSF_iostate)->Infile)))->File)));
 /* line 374: */
PCLAOSF = (&((&GWKAOSF_iostate)->Infile)) ;
(*PCLAOSF) = (*(&((*(&((&GWKAOSF_iostate)->Infile)))->Previous)));
 /* line 375: */
 /* line 376: */
WEHAOSF_testmode_file_name( OCLAOSF_old, &QCLAOSF );
YRFAOSF_io_msg( 3, &SCLAOSF );
A_CALLPROC(Msg,(SCLAOSF, A_HVEC(RCLAOSF,QCLAOSF,A68_VC )),(SCLAOSF, A_HVEC(RCLAOSF,QCLAOSF,A68_VC ),(Msg).nonlocals));
 /* line 377: */
RUFAOSF_reset_reader((*(*(&((*(&((&GWKAOSF_iostate)->Infile)))->Reader)))));
 /* line 378: */
 /* line 379: */
IWBAOSF_close_file(OCLAOSF_old, Msg);
}
 /* line 380: */
} 
A_PROC_EXIT(io_clearinputs);
return;
} 
#undef NL

A68_VOID  VCLAOSF_io_input(A68_VC  Name, A68_97  Msg)
{ 
A68_92 * WCLAOSF_new;
A68_210  XCLAOSF;  /* collateral clause result */
A68_220  YCLAOSF;  /* collateral clause result */
A68_52  BDLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  CDLAOSF;  /* YIELD */
A68_52  DDLAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  EDLAOSF;  /* YIELD */
A68_52  HDLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  IDLAOSF;  /* YIELD */
A68_85  JDLAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  KDLAOSF;  /* avoid structure result */
A68_31  MDLAOSF_generator;   /* proc value of non-global proc */
A68_VC  RDLAOSF;  /* avoid structure result */
A68_210 * SDLAOSF;  /* YIELD */
A68_210 ** TDLAOSF;  /* YIELD */
A68_VC  UDLAOSF;  /* avoid structure result */
A68_46  VDLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  WDLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_input);
 /* line 385: */
 /* line 387: */
{ 
WCLAOSF_new = QVBAOSF_open_file(Name, ATBAOSF_read_access, Msg);
 /* line 388: */
 /* line 389: */
XCLAOSF.File = WCLAOSF_new;
XCLAOSF.Suspended = A68_FALSE;
 /* line 390: */
XCLAOSF.Number = ((*(&((*(&((&GWKAOSF_iostate)->Infile)))->Number)))+1);
CDLAOSF = ADLAOSF ;
YCLAOSF.data[0] = A_UNITE(BDLAOSF,mode7,7,CDLAOSF);
EDLAOSF = ((*(&((*(&((&GWKAOSF_iostate)->Infile)))->Number)))+1) ;
YCLAOSF.data[1] = A_UNITE(DDLAOSF,mode1,1,EDLAOSF);
IDLAOSF = GDLAOSF ;
YCLAOSF.data[2] = A_UNITE(HDLAOSF,mode7,7,IDLAOSF);
 /* line 391: */
YCEAOSF_oneline( A_HISVEC(JDLAOSF,YCLAOSF,3,A68_52 ), &KDLAOSF );
XCLAOSF.Name = KDLAOSF;
A_CLOSURE( MDLAOSF_generator, NDLAOSF_generator, ODLAOSF_generator );
 /* line 392: */
 /* line 393: */
A_CALLPROC(MDLAOSF_generator,(A68_FALSE, &RDLAOSF),(A68_FALSE, &RDLAOSF,(MDLAOSF_generator).nonlocals));
XCLAOSF.Reader = MUFAOSF_set_reader(RDLAOSF, (*(&((*(&((&GWKAOSF_iostate)->Standard_reader)))->Rdline))));
XCLAOSF.Previous = (*(&((&GWKAOSF_iostate)->Infile)));
SDLAOSF = A_HEAP(A68_210 ) ;
(*SDLAOSF) = XCLAOSF ;
TDLAOSF = (&((&GWKAOSF_iostate)->Infile)) ;
(*TDLAOSF) = SDLAOSF;
 /* line 394: */
 /* line 395: */
WEHAOSF_testmode_file_name( WCLAOSF_new, &UDLAOSF );
YRFAOSF_io_msg( 11, &WDLAOSF );
A_CALLPROC(Msg,(WDLAOSF, A_HVEC(VDLAOSF,UDLAOSF,A68_VC )),(WDLAOSF, A_HVEC(VDLAOSF,UDLAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(io_input);
return;
} 
#undef NL

A68_VOID  YDLAOSF_io_removefile(A68_97  Msg)
{ 
A68_98  ZDLAOSF;  /* avoid structure result */
A68_BOOL  AELAOSF_suspended;
A68_92 * BELAOSF_old;
A68_210 ** CELAOSF;  /* YIELD */
A68_VC  DELAOSF;  /* avoid structure result */
A68_46  EELAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  FELAOSF;  /* avoid structure result */
A68_BOOL * GELAOSF;  /* YIELD */
A_PROC_ENTRY(io_removefile);
 /* line 399: */
 /* line 400: */
if ( ((*(&((*(&((&GWKAOSF_iostate)->Infile)))->Number)))==0) )
{ 
 /* line 401: */
YRFAOSF_io_msg( 12, &ZDLAOSF );
A_CALLPROC(Msg,(ZDLAOSF, LWAAOSF_nullmsg),(ZDLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
AELAOSF_suspended = (*(&((*(&((&GWKAOSF_iostate)->Infile)))->Suspended)));
 /* line 402: */
BELAOSF_old = (*(&((*(&((&GWKAOSF_iostate)->Infile)))->File)));
 /* line 403: */
CELAOSF = (&((&GWKAOSF_iostate)->Infile)) ;
(*CELAOSF) = (*(&((*(&((&GWKAOSF_iostate)->Infile)))->Previous)));
 /* line 404: */
RUFAOSF_reset_reader((*(*(&((*(&((&GWKAOSF_iostate)->Infile)))->Reader)))));
 /* line 405: */
 /* line 406: */
WEHAOSF_testmode_file_name( BELAOSF_old, &DELAOSF );
YRFAOSF_io_msg( 3, &FELAOSF );
A_CALLPROC(Msg,(FELAOSF, A_HVEC(EELAOSF,DELAOSF,A68_VC )),(FELAOSF, A_HVEC(EELAOSF,DELAOSF,A68_VC ),(Msg).nonlocals));
 /* line 407: */
GELAOSF = (&((*(&((&GWKAOSF_iostate)->Infile)))->Suspended)) ;
(*GELAOSF) = AELAOSF_suspended;
 /* line 408: */
 /* line 409: */
IWBAOSF_close_file(BELAOSF_old, Msg);
} 
A_PROC_EXIT(io_removefile);
return;
} 
#undef NL

A68_VOID  IELAOSF_io_showinput(A68_97  Msg)
{ 
A68_BOOL * JELAOSF;  /* YIELD */
A_PROC_ENTRY(io_showinput);
 /* line 413: */
JELAOSF = (&((&GWKAOSF_iostate)->Seeing_in)) ;
(*JELAOSF) = A68_TRUE;
A_PROC_EXIT(io_showinput);
return;
} 
#undef NL

A68_VOID  LELAOSF_io_dontshowinput(A68_97  Msg)
{ 
A68_BOOL * MELAOSF;  /* YIELD */
A_PROC_ENTRY(io_dontshowinput);
 /* line 415: */
MELAOSF = (&((&GWKAOSF_iostate)->Seeing_in)) ;
(*MELAOSF) = A68_FALSE;
A_PROC_EXIT(io_dontshowinput);
return;
} 
#undef NL

A68_VOID  OELAOSF_io_showoutput(A68_97  Msg)
{ 
A68_BOOL * PELAOSF;  /* YIELD */
A_PROC_ENTRY(io_showoutput);
 /* line 417: */
PELAOSF = (&((&GWKAOSF_iostate)->Seeing_out)) ;
(*PELAOSF) = A68_TRUE;
A_PROC_EXIT(io_showoutput);
return;
} 
#undef NL

A68_VOID  RELAOSF_io_dontshowoutput(A68_97  Msg)
{ 
A68_BOOL * SELAOSF;  /* YIELD */
A_PROC_ENTRY(io_dontshowoutput);
 /* line 419: */
SELAOSF = (&((&GWKAOSF_iostate)->Seeing_out)) ;
(*SELAOSF) = A68_FALSE;
A_PROC_EXIT(io_dontshowoutput);
return;
} 
#undef NL

A68_VOID  UELAOSF_io_showtime(A68_97  Msg)
{ 
A68_BOOL * VELAOSF;  /* YIELD */
A_PROC_ENTRY(io_showtime);
 /* line 421: */
VELAOSF = (&((&GWKAOSF_iostate)->Clock)) ;
(*VELAOSF) = A68_TRUE;
A_PROC_EXIT(io_showtime);
return;
} 
#undef NL

A68_VOID  XELAOSF_io_dontshowtime(A68_97  Msg)
{ 
A68_BOOL * YELAOSF;  /* YIELD */
A_PROC_ENTRY(io_dontshowtime);
 /* line 423: */
YELAOSF = (&((&GWKAOSF_iostate)->Clock)) ;
(*YELAOSF) = A68_FALSE;
A_PROC_EXIT(io_dontshowtime);
return;
} 
#undef NL

A68_VOID  AFLAOSF_io_printtime(A68_97  Msg)
{ 
A68_VC  BFLAOSF;  /* avoid structure result */
A68_46  CFLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  DFLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_printtime);
 /* line 427: */
ZQHAOSF_time_str(  &BFLAOSF );
YRFAOSF_io_msg( 13, &DFLAOSF );
A_CALLPROC(Msg,(DFLAOSF, A_HVEC(CFLAOSF,BFLAOSF,A68_VC )),(DFLAOSF, A_HVEC(CFLAOSF,BFLAOSF,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(io_printtime);
return;
} 
#undef NL

A68_VOID  GFLAOSF_io_message(A68_VC  Text, A68_97  Msg)
{ 
A68_46  HFLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  IFLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_message);
 /* line 430: */
YRFAOSF_io_msg( 14, &IFLAOSF );
A_CALLPROC(Msg,(IFLAOSF, A_HVEC(HFLAOSF,Text,A68_VC )),(IFLAOSF, A_HVEC(HFLAOSF,Text,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(io_message);
return;
} 
#undef NL

A68_VOID  LFLAOSF_io_comment(A68_VC  Text, A68_97  Msg)
{ 
A68_46  MFLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  NFLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_comment);
 /* line 433: */
YRFAOSF_io_msg( 15, &NFLAOSF );
A_CALLPROC(Msg,(NFLAOSF, A_HVEC(MFLAOSF,Text,A68_VC )),(NFLAOSF, A_HVEC(MFLAOSF,Text,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(io_comment);
return;
} 
#undef NL

A68_VOID  PFLAOSF_io_offline(A68_97  Msg)
{ 
A68_98  QFLAOSF;  /* avoid structure result */
A68_98  RFLAOSF;  /* avoid structure result */
A68_BOOL * SFLAOSF;  /* YIELD */
A_PROC_ENTRY(io_offline);
 /* line 438: */
 /* line 439: */
if ( ((*(&((*(&((&GWKAOSF_iostate)->Infile)))->Number)))==0) )
{ 
 /* line 440: */
 /* line 441: */
YRFAOSF_io_msg( 16, &QFLAOSF );
A_CALLPROC(Msg,(QFLAOSF, LWAAOSF_nullmsg),(QFLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
if ( !(*(&((*(&((&GWKAOSF_iostate)->Infile)))->Suspended))) )
{ 
 /* line 442: */
YRFAOSF_io_msg( 17, &RFLAOSF );
A_CALLPROC(Msg,(RFLAOSF, LWAAOSF_nullmsg),(RFLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 443: */
SFLAOSF = (&((*(&((&GWKAOSF_iostate)->Infile)))->Suspended)) ;
(*SFLAOSF) = A68_FALSE;
} 
} 
A_PROC_EXIT(io_offline);
return;
} 
#undef NL

A68_VOID  UFLAOSF_io_online(A68_97  Msg)
{ 
A68_BOOL  VFLAOSF;  /* optbool result */
A68_98  WFLAOSF;  /* avoid structure result */
A68_BOOL * XFLAOSF;  /* YIELD */
A68_98  YFLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_online);
 /* line 447: */
 /* line 448: */
VFLAOSF = ((*(&((*(&((&GWKAOSF_iostate)->Infile)))->Number)))==0);
if ( ! VFLAOSF )
{VFLAOSF = (*(&((*(&((&GWKAOSF_iostate)->Infile)))->Suspended)));
}
if ( VFLAOSF )
{ 
 /* line 449: */
 /* line 450: */
YRFAOSF_io_msg( 18, &WFLAOSF );
A_CALLPROC(Msg,(WFLAOSF, LWAAOSF_nullmsg),(WFLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
XFLAOSF = (&((*(&((&GWKAOSF_iostate)->Infile)))->Suspended)) ;
(*XFLAOSF) = A68_TRUE;
 /* line 451: */
 /* line 452: */
 /* line 453: */
YRFAOSF_io_msg( 19, &YFLAOSF );
A_CALLPROC(Msg,(YFLAOSF, LWAAOSF_nullmsg),(YFLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
A_PROC_EXIT(io_online);
return;
} 
#undef NL

A68_VOID  BGLAOSF_io_log(A68_VC  Name, A68_97  Msg)
{ 
A68_98  CGLAOSF;  /* avoid structure result */
A68_92 ** DGLAOSF;  /* YIELD */
A68_BOOL * EGLAOSF;  /* YIELD */
A68_224  FGLAOSF;  /* collateral clause result */
A68_VC  GGLAOSF;  /* avoid structure result */
A68_VC  HGLAOSF;  /* avoid structure result */
A68_VC  IGLAOSF;  /* avoid structure result */
A68_46  JGLAOSF;  /* OPERATORS - istruct -> vector */
A68_98  KGLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_log);
 /* line 457: */
 /* line 458: */
if ( (*(&((&GWKAOSF_iostate)->Logging))) )
{ 
 /* line 459: */
 /* line 460: */
YRFAOSF_io_msg( 20, &CGLAOSF );
A_CALLPROC(Msg,(CGLAOSF, LWAAOSF_nullmsg),(CGLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
DGLAOSF = (&((&GWKAOSF_iostate)->Logfile)) ;
(*DGLAOSF) = QVBAOSF_open_file(Name, ETBAOSF_write_access, Msg);
 /* line 461: */
EGLAOSF = (&((&GWKAOSF_iostate)->Logging)) ;
(*EGLAOSF) = A68_TRUE;
 /* line 462: */
 /* line 463: */
NREAOSF_facility(  &GGLAOSF );
FGLAOSF.data[0] = GGLAOSF;
 /* line 464: */
WEHAOSF_testmode_file_name( (*(&((&GWKAOSF_iostate)->Logfile))), &HGLAOSF );
FGLAOSF.data[1] = HGLAOSF;
JQHAOSF_date_time( WLHAOSF_seconds(), &IGLAOSF );
FGLAOSF.data[2] = IGLAOSF;
YRFAOSF_io_msg( 21, &KGLAOSF );
A_CALLPROC(Msg,(KGLAOSF, A_HISVEC(JGLAOSF,FGLAOSF,3,A68_VC )),(KGLAOSF, A_HISVEC(JGLAOSF,FGLAOSF,3,A68_VC ),(Msg).nonlocals));
 /* line 465: */
 /* line 466: */
PKDAOSF_newline(DREAOSF_screen);
} 
A_PROC_EXIT(io_log);
return;
} 
#undef NL

A68_VOID  MGLAOSF_io_dontlog(A68_97  Msg)
{ 
A68_BOOL * NGLAOSF;  /* YIELD */
A68_VC  OGLAOSF;  /* avoid structure result */
A68_VC  PGLAOSF_name;
A68_46  QGLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  RGLAOSF;  /* avoid structure result */
A68_98  SGLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_dontlog);
 /* line 470: */
 /* line 471: */
if ( (*(&((&GWKAOSF_iostate)->Logging))) )
{ 
NGLAOSF = (&((&GWKAOSF_iostate)->Logging)) ;
(*NGLAOSF) = A68_FALSE;
 /* line 472: */
WEHAOSF_testmode_file_name( (*(&((&GWKAOSF_iostate)->Logfile))), &OGLAOSF );
PGLAOSF_name = OGLAOSF;
 /* line 473: */
IWBAOSF_close_file((*(&((&GWKAOSF_iostate)->Logfile))), Msg);
 /* line 474: */
 /* line 475: */
YRFAOSF_io_msg( 22, &RGLAOSF );
A_CALLPROC(Msg,(RGLAOSF, A_HVEC(QGLAOSF,PGLAOSF_name,A68_VC )),(RGLAOSF, A_HVEC(QGLAOSF,PGLAOSF_name,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 476: */
YRFAOSF_io_msg( 23, &SGLAOSF );
A_CALLPROC(Msg,(SGLAOSF, LWAAOSF_nullmsg),(SGLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
A_PROC_EXIT(io_dontlog);
return;
} 
#undef NL

A68_VOID  VGLAOSF_io_output(A68_VC  Name, A68_97  Msg)
{ 
A68_98  WGLAOSF;  /* avoid structure result */
A68_92 ** XGLAOSF;  /* YIELD */
A68_BOOL * YGLAOSF;  /* YIELD */
A68_224  ZGLAOSF;  /* collateral clause result */
A68_VC  AHLAOSF;  /* avoid structure result */
A68_VC  BHLAOSF;  /* avoid structure result */
A68_VC  CHLAOSF;  /* avoid structure result */
A68_46  DHLAOSF;  /* OPERATORS - istruct -> vector */
A68_98  EHLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_output);
 /* line 481: */
 /* line 482: */
if ( (*(&((&GWKAOSF_iostate)->Outputing))) )
{ 
 /* line 483: */
 /* line 484: */
YRFAOSF_io_msg( 24, &WGLAOSF );
A_CALLPROC(Msg,(WGLAOSF, LWAAOSF_nullmsg),(WGLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
XGLAOSF = (&((&GWKAOSF_iostate)->Outfile)) ;
(*XGLAOSF) = QVBAOSF_open_file(Name, ETBAOSF_write_access, Msg);
 /* line 485: */
YGLAOSF = (&((&GWKAOSF_iostate)->Outputing)) ;
(*YGLAOSF) = A68_TRUE;
 /* line 486: */
 /* line 487: */
NREAOSF_facility(  &AHLAOSF );
ZGLAOSF.data[0] = AHLAOSF;
 /* line 488: */
WEHAOSF_testmode_file_name( (*(&((&GWKAOSF_iostate)->Outfile))), &BHLAOSF );
ZGLAOSF.data[1] = BHLAOSF;
JQHAOSF_date_time( WLHAOSF_seconds(), &CHLAOSF );
ZGLAOSF.data[2] = CHLAOSF;
YRFAOSF_io_msg( 25, &EHLAOSF );
A_CALLPROC(Msg,(EHLAOSF, A_HISVEC(DHLAOSF,ZGLAOSF,3,A68_VC )),(EHLAOSF, A_HISVEC(DHLAOSF,ZGLAOSF,3,A68_VC ),(Msg).nonlocals));
 /* line 489: */
 /* line 490: */
PKDAOSF_newline(EREAOSF_out);
} 
A_PROC_EXIT(io_output);
return;
} 
#undef NL

A68_VOID  GHLAOSF_io_dontoutput(A68_97  Msg)
{ 
A68_BOOL * HHLAOSF;  /* YIELD */
A68_VC  IHLAOSF;  /* avoid structure result */
A68_VC  JHLAOSF_name;
A68_46  KHLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  LHLAOSF;  /* avoid structure result */
A68_98  MHLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_dontoutput);
 /* line 494: */
 /* line 495: */
if ( (*(&((&GWKAOSF_iostate)->Outputing))) )
{ 
HHLAOSF = (&((&GWKAOSF_iostate)->Outputing)) ;
(*HHLAOSF) = A68_FALSE;
 /* line 496: */
WEHAOSF_testmode_file_name( (*(&((&GWKAOSF_iostate)->Outfile))), &IHLAOSF );
JHLAOSF_name = IHLAOSF;
 /* line 497: */
IWBAOSF_close_file((*(&((&GWKAOSF_iostate)->Outfile))), Msg);
 /* line 498: */
 /* line 499: */
YRFAOSF_io_msg( 26, &LHLAOSF );
A_CALLPROC(Msg,(LHLAOSF, A_HVEC(KHLAOSF,JHLAOSF_name,A68_VC )),(LHLAOSF, A_HVEC(KHLAOSF,JHLAOSF_name,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 500: */
YRFAOSF_io_msg( 27, &MHLAOSF );
A_CALLPROC(Msg,(MHLAOSF, LWAAOSF_nullmsg),(MHLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
A_PROC_EXIT(io_dontoutput);
return;
} 
#undef NL

A68_VOID  PHLAOSF_io_page(A68_INT  L, A68_97  Msg)
{ 
A68_INT * QHLAOSF;  /* YIELD */
A68_98  RHLAOSF;  /* avoid structure result */
A68_INT * SHLAOSF;  /* YIELD */
A68_BOOL * THLAOSF;  /* YIELD */
A68_VC  UHLAOSF;  /* avoid structure result */
A68_46  VHLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  WHLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_page);
 /* line 504: */
 /* line 505: */
{ 
 /* line 506: */
if ( (L==0) )
{ 
 /* line 507: */
QHLAOSF = (&((&GWKAOSF_iostate)->Page_length)) ;
(*QHLAOSF) = UVKAOSF_default_length;
} 
else
{ 
 /* line 508: */
if ( (L<VVKAOSF_min_page_length) )
{ 
 /* line 509: */
YRFAOSF_io_msg( 28, &RHLAOSF );
A_CALLPROC(Msg,(RHLAOSF, LWAAOSF_nullmsg),(RHLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 510: */
SHLAOSF = (&((&GWKAOSF_iostate)->Page_length)) ;
(*SHLAOSF) = L;
} 
} 
 /* line 511: */
THLAOSF = (&((&GWKAOSF_iostate)->Paging)) ;
(*THLAOSF) = A68_TRUE;
 /* line 512: */
 /* line 513: */
 /* line 514: */
FEAAOSF_intchars( (*(&((&GWKAOSF_iostate)->Page_length))), &UHLAOSF );
YRFAOSF_io_msg( 29, &WHLAOSF );
A_CALLPROC(Msg,(WHLAOSF, A_HVEC(VHLAOSF,UHLAOSF,A68_VC )),(WHLAOSF, A_HVEC(VHLAOSF,UHLAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(io_page);
return;
} 
#undef NL

A68_VOID  YHLAOSF_io_dontpage(A68_97  Msg)
{ 
A68_BOOL * ZHLAOSF;  /* YIELD */
A_PROC_ENTRY(io_dontpage);
ZHLAOSF = (&((&GWKAOSF_iostate)->Paging)) ;
(*ZHLAOSF) = A68_FALSE;
A_PROC_EXIT(io_dontpage);
return;
} 
#undef NL

A68_VOID  CILAOSF_io_setwidth(A68_INT  W, A68_97  Msg)
{ 
A68_INT * DILAOSF;  /* YIELD */
A68_INT * EILAOSF;  /* YIELD */
A68_INT * FILAOSF;  /* YIELD */
A68_INT * GILAOSF;  /* YIELD */
A68_98  HILAOSF;  /* avoid structure result */
A68_31  JILAOSF_generator;   /* proc value of non-global proc */
A68_VC  OILAOSF;  /* avoid structure result */
A68_VC * PILAOSF;  /* YIELD */
A68_31  RILAOSF_generator;   /* proc value of non-global proc */
A68_VC  WILAOSF;  /* avoid structure result */
A68_VC * XILAOSF;  /* YIELD */
A68_31  ZILAOSF_generator;   /* proc value of non-global proc */
A68_VC  EJLAOSF;  /* avoid structure result */
A68_VC * FJLAOSF;  /* YIELD */
A68_INT * GJLAOSF;  /* YIELD */
A68_INT * HJLAOSF;  /* YIELD */
A68_INT * IJLAOSF;  /* YIELD */
A68_INT * JJLAOSF;  /* YIELD */
A68_VC  KJLAOSF;  /* avoid structure result */
A68_46  LJLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  MJLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_setwidth);
 /* line 521: */
 /* line 522: */
{ 
 /* line 523: */
if ( (W==0) )
{ 
 /* line 525: */
DILAOSF = (&(FREAOSF_err->Width)) ;
EILAOSF = (&(EREAOSF_out->Width)) ;
FILAOSF = (&(DREAOSF_screen->Width)) ;
GILAOSF = (&((&GWKAOSF_iostate)->Width)) ;
(*GILAOSF) = (*FILAOSF) = (*EILAOSF) = (*DILAOSF) = SVKAOSF_default_width;
} 
else
{ 
 /* line 526: */
if ( (W<TVKAOSF_min_width) )
{ 
 /* line 529: */
YRFAOSF_io_msg( 30, &HILAOSF );
A_CALLPROC(Msg,(HILAOSF, LWAAOSF_nullmsg),(HILAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 530: */
if ( (W>(*(&(DREAOSF_screen->Buffer))).upb) )
{ 
A_CLOSURE( JILAOSF_generator, KILAOSF_generator, LILAOSF_generator );
(( LILAOSF_generator * ) ( JILAOSF_generator.nonlocals )) -> W = W;
A_CALLPROC(JILAOSF_generator,(A68_FALSE, &OILAOSF),(A68_FALSE, &OILAOSF,(JILAOSF_generator).nonlocals));
PILAOSF = (&(DREAOSF_screen->Buffer)) ;
(*PILAOSF) = OILAOSF;
 /* line 531: */
A_CLOSURE( RILAOSF_generator, SILAOSF_generator, TILAOSF_generator );
(( TILAOSF_generator * ) ( RILAOSF_generator.nonlocals )) -> W = W;
A_CALLPROC(RILAOSF_generator,(A68_FALSE, &WILAOSF),(A68_FALSE, &WILAOSF,(RILAOSF_generator).nonlocals));
XILAOSF = (&(EREAOSF_out->Buffer)) ;
(*XILAOSF) = WILAOSF;
 /* line 532: */
A_CLOSURE( ZILAOSF_generator, AJLAOSF_generator, BJLAOSF_generator );
(( BJLAOSF_generator * ) ( ZILAOSF_generator.nonlocals )) -> W = W;
A_CALLPROC(ZILAOSF_generator,(A68_FALSE, &EJLAOSF),(A68_FALSE, &EJLAOSF,(ZILAOSF_generator).nonlocals));
FJLAOSF = (&(FREAOSF_err->Buffer)) ;
(*FJLAOSF) = EJLAOSF;
} 
 /* line 534: */
 /* line 536: */
GJLAOSF = (&(FREAOSF_err->Width)) ;
HJLAOSF = (&(EREAOSF_out->Width)) ;
IJLAOSF = (&(DREAOSF_screen->Width)) ;
JJLAOSF = (&((&GWKAOSF_iostate)->Width)) ;
(*JJLAOSF) = (*IJLAOSF) = (*HJLAOSF) = (*GJLAOSF) = W;
} 
} 
 /* line 537: */
 /* line 538: */
 /* line 539: */
FEAAOSF_intchars( (*(&((&GWKAOSF_iostate)->Width))), &KJLAOSF );
YRFAOSF_io_msg( 32, &MJLAOSF );
A_CALLPROC(Msg,(MJLAOSF, A_HVEC(LJLAOSF,KJLAOSF,A68_VC )),(MJLAOSF, A_HVEC(LJLAOSF,KJLAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(io_setwidth);
return;
} 
#undef NL

A_STATIC A68_VOID  OJLAOSF_generator(A68_BOOL  NJLAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  PJLAOSF;  /* clause result */
A68_VC  QJLAOSF;  /* OPERATORS - dynamic generator */
{ 
QJLAOSF.upb = (SVKAOSF_default_width+1) ;
( NJLAOSF_anonymous? A_VLOC(A68_CHAR ,QJLAOSF): A_VHEAP(A68_CHAR ,QJLAOSF) );
PJLAOSF = QJLAOSF;
} 
*ReturnedValue = (PJLAOSF);
return;
} 
#undef NL

A68_VOID  YJLAOSF_initialise_ioprocs(A68_158  Get_prompt)
{ 
A68_181  ZJLAOSF;  /* procedure value */
A68_180 * AKLAOSF_rd;
A68_88  BKLAOSF;  /* OPERATORS - mode -> union mode */
A68_36  CKLAOSF;  /* YIELD */
A68_36  DKLAOSF;  /* procedure value */
A68_87  EKLAOSF;  /* OPERATORS - mode -> union mode */
A68_88  FKLAOSF;  /* OPERATORS - mode -> union mode */
A68_36  GKLAOSF;  /* YIELD */
A68_36  HKLAOSF;  /* procedure value */
A68_87  IKLAOSF;  /* OPERATORS - mode -> union mode */
A68_88  JKLAOSF;  /* OPERATORS - mode -> union mode */
A68_36  KKLAOSF;  /* YIELD */
A68_36  LKLAOSF;  /* procedure value */
A68_87  MKLAOSF;  /* OPERATORS - mode -> union mode */
A68_211  NKLAOSF;  /* collateral clause result */
A68_210  OKLAOSF;  /* collateral clause result */
A68_VC  RKLAOSF;  /* avoid structure result */
A68_210 * SKLAOSF;  /* YIELD */
A_PROC_ENTRY(initialise_ioprocs);
 /* line 547: */
 /* line 548: */
{ 
ZJLAOSF.fn.fn_global = DYKAOSF_getline;
ZJLAOSF.nonlocals = A68_NIL;
AKLAOSF_rd = MUFAOSF_set_reader(EWKAOSF_in_buffer, ZJLAOSF);
 /* line 549: */
DKLAOSF.fn.fn_global = IXKAOSF_write_screen;
DKLAOSF.nonlocals = A68_NIL;
CKLAOSF = DKLAOSF ;
DREAOSF_screen = BJDAOSF_make_channel(A_UNITE(EKLAOSF,mode2,2,RJLAOSF_screen_buffer), A_UNITE(BKLAOSF,mode1,1,CKLAOSF));
 /* line 550: */
HKLAOSF.fn.fn_global = VXKAOSF_write_out;
HKLAOSF.nonlocals = A68_NIL;
GKLAOSF = HKLAOSF ;
EREAOSF_out = BJDAOSF_make_channel(A_UNITE(IKLAOSF,mode2,2,TJLAOSF_out_buffer), A_UNITE(FKLAOSF,mode1,1,GKLAOSF));
 /* line 551: */
LKLAOSF.fn.fn_global = OXKAOSF_write_err;
LKLAOSF.nonlocals = A68_NIL;
KKLAOSF = LKLAOSF ;
FREAOSF_err = BJDAOSF_make_channel(A_UNITE(MKLAOSF,mode2,2,VJLAOSF_err_buffer), A_UNITE(JKLAOSF,mode1,1,KKLAOSF));
 /* line 553: */
NKLAOSF.Logging = A68_FALSE;
NKLAOSF.Outputing = A68_FALSE;
NKLAOSF.Seeing_in = A68_FALSE;
NKLAOSF.Seeing_out = A68_FALSE;
NKLAOSF.Paging = A68_FALSE;
NKLAOSF.Clock = A68_FALSE;
 /* line 554: */
NKLAOSF.Screen_output = A68_TRUE;
NKLAOSF.Width = SVKAOSF_default_width;
NKLAOSF.Page_count = 0;
NKLAOSF.Page_length = UVKAOSF_default_length;
NKLAOSF.Eof_count = 0;
 /* line 555: */
NKLAOSF.Standard_reader = AKLAOSF_rd;
OKLAOSF.File = TSBAOSF_stdin;
OKLAOSF.Suspended = A68_FALSE;
OKLAOSF.Number = 0;
ZCAAOSF_makervc( QKLAOSF, &RKLAOSF );
OKLAOSF.Name = RKLAOSF;
OKLAOSF.Reader = AKLAOSF_rd;
OKLAOSF.Previous = (A68_210 *)A68_NIL;
 /* line 556: */
SKLAOSF = A_HEAP(A68_210 ) ;
(*SKLAOSF) = OKLAOSF ;
NKLAOSF.Infile = SKLAOSF;
NKLAOSF.Prompt = Get_prompt;
 /* line 557: */
NKLAOSF.Logfile = SSBAOSF_nil_file;
 /* line 558: */
NKLAOSF.Outfile = SSBAOSF_nil_file;
 /* line 562: */
GWKAOSF_iostate = NKLAOSF;
} 
A_PROC_EXIT(initialise_ioprocs);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void MVKAOSF(void)   /* initialise DECS ioprocs */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","ioprocs.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/commandreader.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/iomessages.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/basics.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/testmode.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/osinterface.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  FWKAOSF;  /* avoid structure result */
A68_VC  SJLAOSF;  /* avoid structure result */
A68_VC  UJLAOSF;  /* avoid structure result */
A68_VC  WJLAOSF;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JSFAOSF();   /* USE commandreader */
QOFAOSF();   /* USE iomessages */
ZRAAOSF();   /* USE messageproc */
CFHAOSF();   /* USE basics */
UBHAOSF();   /* USE testmode */
IPEAOSF();   /* USE osinterface */
QMDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/ioprocs.a68";
A_config.translation_time = "Sun Apr 18 20:07:50 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "LVKAOSF (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:50 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS ioprocs);
UEAALIB_a68config(LGAALIB_configinfo, QVKAOSF);
 /* line 107: */
 /* line 116: */
 /* line 125: */
 /* line 126: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
 /* line 131: */
 /* line 133: */
ZVKAOSF_stars = YVKAOSF;
 /* line 137: */
BWKAOSF_generator( A68_TRUE, &FWKAOSF );
EWKAOSF_in_buffer = FWKAOSF;
 /* line 141: */
 /* line 142: */
 /* line 143: */
 /* line 148: */
 /* line 157: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 177: */
 /* line 192: */
 /* line 207: */
 /* line 223: */
 /* line 328: */
 /* line 346: */
 /* line 362: */
 /* line 369: */
 /* line 384: */
 /* line 398: */
 /* line 412: */
 /* line 414: */
 /* line 416: */
 /* line 418: */
 /* line 420: */
 /* line 422: */
 /* line 426: */
 /* line 429: */
 /* line 432: */
 /* line 437: */
 /* line 446: */
 /* line 456: */
 /* line 469: */
 /* line 480: */
 /* line 493: */
 /* line 503: */
 /* line 517: */
 /* line 520: */
 /* line 544: */
OJLAOSF_generator( A68_TRUE, &SJLAOSF );
RJLAOSF_screen_buffer = SJLAOSF;
OJLAOSF_generator( A68_TRUE, &UJLAOSF );
TJLAOSF_out_buffer = UJLAOSF;
OJLAOSF_generator( A68_TRUE, &WJLAOSF );
VJLAOSF_err_buffer = WJLAOSF;
 /* line 546: */
 /* line 569: */
A_PROC_EXIT(DECS ioprocs);
} 
#undef NL
/* end of translation of ioprocs.a68 */
