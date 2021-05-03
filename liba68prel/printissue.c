/* UNAME:OPGAOSF */
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

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t128 ),(struct A68t128 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE128) VOID */

A_PROCEDURE(A68_VOID ,A68t144,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,17,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,56,A68t149);
typedef struct A68t149  A68_149 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t150);
typedef struct A68t150  A68_150 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_VC ,2,A68t151);
typedef struct A68t151  A68_151 ;    /* STRUCT 2 MODE26 */
A_ISTRUCT(A68_CHAR ,49,A68t152);
typedef struct A68t152  A68_152 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t153);
typedef struct A68t153  A68_153 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t154);
typedef struct A68t154  A68_154 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_VC ,3,A68t155);
typedef struct A68t155  A68_155 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,118,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 118 CHAR */
A_ISTRUCT(A68_CHAR ,121,A68t157);
typedef struct A68t157  A68_157 ;    /* STRUCT 121 CHAR */
A_ISTRUCT(A68_VC ,4,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 4 MODE26 */
A_ISTRUCT(A68_CHAR ,405,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 405 CHAR */
A_ISTRUCT(A68_CHAR ,117,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 117 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t52 ,21,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 21 MODE52 */

A_PROCEDURE(A68_VOID ,A68t167,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(BOOL) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osinterface --- */
extern A68_94  MTBAOSF_update_access;
extern A68_94  QTBAOSF_update_truncate_access;
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
extern A68_VOID  NREAOSF_facility(A68_VC *);
extern A68_VOID  PREAOSF_version(A68_133 *);
extern A68_VOID  SREAOSF_give_version(A68_VC *);
extern A68_34 * DREAOSF_screen;
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  JDAAOSF_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  GSDAOSF_spaces(A68_INT ,A68_63 *);
extern A68_VOID  LSDAOSF_lines(A68_INT ,A68_64 *);
extern A68_VOID  PKDAOSF_newline(struct A68t34 *);
extern A68_VOID  KYDAOSF_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IPEAOSF(void);   /* osinterface */
extern void QMDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_145   SPGAOSF = {"$Id: printissue.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,TPGAOSF,SPGAOSF,60)
static A68_147   HQGAOSF = {"E L L A   2 0 0 0"}; 
A_GISVEC(A68_VC ,IQGAOSF,HQGAOSF,17)
static A68_148   JQGAOSF = {"Defence Research Agency (Malvern)"}; 
A_GISVEC(A68_VC ,KQGAOSF,JQGAOSF,33)
static A68_149   LQGAOSF = {"UK Crown Copyright, (c) 1985, 1993.  All rights reserved"}; 
A_GISVEC(A68_VC ,MQGAOSF,LQGAOSF,56)
static A68_150   RQGAOSF = {"Version details:  "}; 
A_GISVEC(A68_VC ,SQGAOSF,RQGAOSF,18)
static A68_152   WQGAOSF = {"This software may only be used for study purposes"}; 
A_GISVEC(A68_VC ,XQGAOSF,WQGAOSF,49)
static A68_153   ZQGAOSF = {"- invoke the \"printissue\" command for details"}; 
A_GISVEC(A68_VC ,ARGAOSF,ZQGAOSF,45)
static A68_154   CRGAOSF = {"*****  "}; 
A_GISVEC(A68_VC ,DRGAOSF,CRGAOSF,7)
static A68_154   ERGAOSF = {"  *****"}; 
A_GISVEC(A68_VC ,FRGAOSF,ERGAOSF,7)
static A68_156   NRGAOSF = {" has United Kingdom Crown Copyright (c) 1993.  All rights are reserved. Permission is granted for this version of the "}; 
A_GISVEC(A68_VC ,ORGAOSF,NRGAOSF,118)
static A68_157   QRGAOSF = {" software to be copied for personal use, or given to third parties subject to the conditions given in the release notice."}; 
A_GISVEC(A68_VC ,RRGAOSF,QRGAOSF,121)
static A68_159   XRGAOSF = 
{  'T', 'h', 'e', ' ', 'S', 'e', 'c', 'r',
   'e', 't', 'a', 'r', 'y', ' ', 'o', 'f',
   ' ', 'S', 't', 'a', 't', 'e', ' ', 'f',
   'o', 'r', ' ', 'D', 'e', 'f', 'e', 'n',
   'c', 'e', ' ', '(', 'a', 'c', 't', 'i',
   'n', 'g', ' ', 't', 'h', 'r', 'o', 'u',
   'g', 'h', ' ', 'h', 'i', 's', ' ', 'D',
   'e', 'f', 'e', 'n', 'c', 'e', ' ', 'R',
   'e', 's', 'e', 'a', 'r', 'c', 'h', ' ',
   'A', 'g', 'e', 'n', 'c', 'y', ')', ' ',
   'g', 'i', 'v', 'e', 's', ' ', 'n', 'o',
   ' ', 'w', 'a', 'r', 'r', 'a', 'n', 't',
   'y', ' ', 't', 'h', 'a', 't', ' ', 'a',
   'n', 'y', ' ', 'e', 'l', 'e', 'm', 'e',
   'n', 't', ' ', 'o', 'f', ' ', 't', 'h',
   'e', ' ', 'S', 'o', 'f', 't', 'w', 'a',
   'r', 'e', ' ', 'i', 's', ' ', 's', 'u',
   'i', 't', 'a', 'b', 'l', 'e', ' ', 'f',
   'o', 'r', ' ', 'a', 'n', 'y', ' ', 'p',
   'u', 'r', 'p', 'o', 's', 'e', ' ', 'a',
   'n', 'd', ' ', 'h', 'e', ' ', 's', 'h',
   'a', 'l', 'l', ' ', 'n', 'o', 't', ' ',
   'b', 'e', ' ', 'l', 'i', 'a', 'b', 'l',
   'e', ' ', 'f', 'o', 'r', ' ', 'a', 'n',
   'y', ' ', 'l', 'o', 's', 's', ' ', 'o',
   'r', ' ', 'd', 'a', 'm', 'a', 'g', 'e',
   ' ', 'i', 'n', 'c', 'l', 'u', 'd', 'i',
   'n', 'g', ' ', 'l', 'o', 's', 's', ' ',
   'o', 'r', ' ', 'd', 'a', 'm', 'a', 'g',
   'e', ' ', 'r', 'e', 's', 'u', 'l', 't',
   'i', 'n', 'g', ' ', 'i', 'n', ' ', 'i',
   'n', 'j', 'u', 'r', 'y', ' ', 'o', 'r',
   ' ', 'd', 'e', 'a', 't', 'h', ' ', 'h',
   'o', 'w', 's', 'o', 'e', 'v', 'e', 'r',
   ' ', 'c', 'a', 'u', 's', 'e', 'd', ' ',
   'w', 'h', 'i', 'c', 'h', ' ', 'r', 'e',
   's', 'u', 'l', 't', 's', ' ', 'f', 'r',
   'o', 'm', ' ', 't', 'h', 'e', ' ', 'u',
   's', 'e', ' ', 'o', 'f', ' ', 't', 'h',
   'e', ' ', 'S', 'o', 'f', 't', 'w', 'a',
   'r', 'e', ',', ' ', 'o', 'r', ' ', 'a',
   'n', 'y', ' ', 'd', 'e', 'v', 'e', 'l',
   'o', 'p', 'm', 'e', 'n', 't', 's', ' ',
   'a', 'd', 'a', 'p', 't', 'i', 'o', 'n',
   ' ', 'm', 'o', 'd', 'i', 'f', 'i', 'c',
   'a', 't', 'i', 'o', 'n', 's', ' ', 't',
   'r', 'a', 'n', 's', 'l', 'a', 't', 'i',
   'o', 'n', 's', ' ', 'a', 'n', 'd', ' ',
   'e', 'n', 'h', 'a', 'n', 'c', 'e', 'm',
   'e', 'n', 't', 's', ' ', 't', 'h', 'e',
   'r', 'e', 'o', 'f', '.' 
} ; 
A_GISVEC(A68_VC ,YRGAOSF,XRGAOSF,405)
static A68_160   DSGAOSF = {"Any queries, comments or suggestions relating to this Software should be addressed to the ELLA office at DRA Malvern:"}; 
A_GISVEC(A68_VC ,ESGAOSF,DSGAOSF,117)
static A68_161   JSGAOSF = {"Email:  ella@dra.hmg.gb"}; 
A_GISVEC(A68_VC ,KSGAOSF,JSGAOSF,23)
static A68_162   PSGAOSF = {"The ELLA Office"}; 
A_GISVEC(A68_VC ,QSGAOSF,PSGAOSF,15)
static A68_163   VSGAOSF = {"DRA Malvern"}; 
A_GISVEC(A68_VC ,WSGAOSF,VSGAOSF,11)
static A68_162   BTGAOSF = {"St Andrews Road"}; 
A_GISVEC(A68_VC ,CTGAOSF,BTGAOSF,15)
static A68_164   HTGAOSF = {"Great Malvern"}; 
A_GISVEC(A68_VC ,ITGAOSF,HTGAOSF,13)
static A68_165   NTGAOSF = {"Worcestershire"}; 
A_GISVEC(A68_VC ,OTGAOSF,NTGAOSF,14)
static A68_164   TTGAOSF = {"WR14 3PS,  UK"}; 
A_GISVEC(A68_VC ,UTGAOSF,TTGAOSF,13)

A_STATIC A68_VOID  VPGAOSF_title(A68_INT  Mode);

A_STATIC A68_VOID  YPGAOSF_centred(A68_VC  Str);

A68_VOID  BUGAOSF_print_title(A68_BOOL  Silent);

A68_VOID  DUGAOSF_print_issue(void);

A_STATIC A68_VOID  YPGAOSF_centred(A68_VC  Str)
{ 
A68_63  ZPGAOSF;  /* avoid structure result */
A68_52  AQGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  BQGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_146  CQGAOSF;  /* collateral clause result */
A68_52  DQGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  EQGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  FQGAOSF;  /* procedure value */
A68_85  GQGAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(centred);
 /* line 48: */
 /* line 49: */
{ 
 /* line 50: */
if ( (Str.upb<((*(&(DREAOSF_screen->Width)))-1)) )
{ 
 /* line 51: */
GSDAOSF_spaces( (((*(&(DREAOSF_screen->Width)))-Str.upb)/2), &ZPGAOSF );
KYDAOSF_put(DREAOSF_screen, A_HVEC(BQGAOSF,A_UNITE(AQGAOSF,mode19,19,ZPGAOSF),A68_52 ));
} 
 /* line 52: */
CQGAOSF.data[0] = A_UNITE(DQGAOSF,mode7,7,Str);
FQGAOSF.fn.fn_global = PKDAOSF_newline;
FQGAOSF.nonlocals = A68_NIL;
CQGAOSF.data[1] = A_UNITE(EQGAOSF,mode12,12,FQGAOSF);
 /* line 53: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(GQGAOSF,CQGAOSF,2,A68_52 ));
} 
A_PROC_EXIT(centred);
return;
} 
#undef NL

A_STATIC A68_VOID  VPGAOSF_title(A68_INT  Mode)
{ 
A68_VC  NQGAOSF;  /* avoid structure result */
A68_BOOL  OQGAOSF;  /* optbool result */
A68_133  PQGAOSF;  /* avoid structure result */
A68_151  QQGAOSF;  /* collateral clause result */
A68_133  TQGAOSF;  /* avoid structure result */
A68_46  UQGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  VQGAOSF;  /* avoid structure result */
A68_VC  YQGAOSF_study;
A68_155  BRGAOSF;  /* collateral clause result */
A68_46  GRGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  HRGAOSF;  /* avoid structure result */
A68_166  IRGAOSF;  /* collateral clause result */
A68_52  JRGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  KRGAOSF;  /* procedure value */
A68_158  LRGAOSF;  /* collateral clause result */
A68_VC  MRGAOSF;  /* avoid structure result */
A68_VC  PRGAOSF;  /* avoid structure result */
A68_46  SRGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  TRGAOSF;  /* avoid structure result */
A68_52  URGAOSF;  /* OPERATORS - mode -> union mode */
A68_64  VRGAOSF;  /* avoid structure result */
A68_52  WRGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  ZRGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ASGAOSF;  /* YIELD */
A68_64  BSGAOSF;  /* avoid structure result */
A68_52  CSGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  FSGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  GSGAOSF;  /* YIELD */
A68_64  HSGAOSF;  /* avoid structure result */
A68_52  ISGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  LSGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MSGAOSF;  /* YIELD */
A68_64  NSGAOSF;  /* avoid structure result */
A68_52  OSGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  RSGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  SSGAOSF;  /* YIELD */
A68_52  TSGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  USGAOSF;  /* procedure value */
A68_52  XSGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  YSGAOSF;  /* YIELD */
A68_52  ZSGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  ATGAOSF;  /* procedure value */
A68_52  DTGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ETGAOSF;  /* YIELD */
A68_52  FTGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  GTGAOSF;  /* procedure value */
A68_52  JTGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KTGAOSF;  /* YIELD */
A68_52  LTGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  MTGAOSF;  /* procedure value */
A68_52  PTGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QTGAOSF;  /* YIELD */
A68_52  RTGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  STGAOSF;  /* procedure value */
A68_52  VTGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  WTGAOSF;  /* YIELD */
A68_64  XTGAOSF;  /* avoid structure result */
A68_52  YTGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  ZTGAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(title);
 /* line 46: */
 /* line 47: */
{ 
 /* line 55: */
 /* line 56: */
if ( (Mode!=2) )
{ 
PKDAOSF_newline(DREAOSF_screen);
 /* line 57: */
YPGAOSF_centred(IQGAOSF);
 /* line 58: */
YPGAOSF_centred(KQGAOSF);
 /* line 59: */
YPGAOSF_centred(MQGAOSF);
 /* line 60: */
SREAOSF_give_version(  &NQGAOSF );
YPGAOSF_centred(NQGAOSF);
 /* line 61: */
 /* line 62: */
PKDAOSF_newline(DREAOSF_screen);
} 
 /* line 65: */
OQGAOSF = (Mode==3);
if ( OQGAOSF )
{ /* line 66: */
PREAOSF_version(  &PQGAOSF );
OQGAOSF = (PQGAOSF.Msg.upb>0);
}
if ( OQGAOSF )
{ 
QQGAOSF.data[0] = SQGAOSF;
PREAOSF_version(  &TQGAOSF );
QQGAOSF.data[1] = TQGAOSF.Msg;
JDAAOSF_concat( A_HISVEC(UQGAOSF,QQGAOSF,2,A68_VC ), &VQGAOSF );
YPGAOSF_centred(VQGAOSF);
 /* line 67: */
 /* line 68: */
PKDAOSF_newline(DREAOSF_screen);
} 
 /* line 70: */
YQGAOSF_study = XQGAOSF;
 /* line 72: */
 /* line 73: */
if ( (Mode==1) )
{ 
YPGAOSF_centred(YQGAOSF_study);
 /* line 74: */
YPGAOSF_centred(ARGAOSF);
 /* line 75: */
 /* line 76: */
PKDAOSF_newline(DREAOSF_screen);
} 
else
{ 
 /* line 77: */
if ( (Mode==3) )
{ 
BRGAOSF.data[0] = DRGAOSF;
BRGAOSF.data[1] = YQGAOSF_study;
BRGAOSF.data[2] = FRGAOSF;
JDAAOSF_concat( A_HISVEC(GRGAOSF,BRGAOSF,3,A68_VC ), &HRGAOSF );
YPGAOSF_centred(HRGAOSF);
 /* line 78: */
 /* line 79: */
 /* line 80: */
KRGAOSF.fn.fn_global = PKDAOSF_newline;
KRGAOSF.nonlocals = A68_NIL;
IRGAOSF.data[0] = A_UNITE(JRGAOSF,mode12,12,KRGAOSF);
 /* line 81: */
NREAOSF_facility(  &MRGAOSF );
LRGAOSF.data[0] = MRGAOSF;
 /* line 82: */
LRGAOSF.data[1] = ORGAOSF;
 /* line 84: */
NREAOSF_facility(  &PRGAOSF );
LRGAOSF.data[2] = PRGAOSF;
 /* line 85: */
 /* line 86: */
LRGAOSF.data[3] = RRGAOSF;
JDAAOSF_concat( A_HISVEC(SRGAOSF,LRGAOSF,4,A68_VC ), &TRGAOSF );
IRGAOSF.data[1] = A_UNITE(URGAOSF,mode7,7,TRGAOSF);
 /* line 88: */
LSDAOSF_lines( 2, &VRGAOSF );
IRGAOSF.data[2] = A_UNITE(WRGAOSF,mode20,20,VRGAOSF);
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
ASGAOSF = YRGAOSF ;
IRGAOSF.data[3] = A_UNITE(ZRGAOSF,mode7,7,ASGAOSF);
 /* line 96: */
LSDAOSF_lines( 2, &BSGAOSF );
IRGAOSF.data[4] = A_UNITE(CSGAOSF,mode20,20,BSGAOSF);
 /* line 97: */
GSGAOSF = ESGAOSF ;
IRGAOSF.data[5] = A_UNITE(FSGAOSF,mode7,7,GSGAOSF);
 /* line 98: */
LSDAOSF_lines( 2, &HSGAOSF );
IRGAOSF.data[6] = A_UNITE(ISGAOSF,mode20,20,HSGAOSF);
MSGAOSF = KSGAOSF ;
IRGAOSF.data[7] = A_UNITE(LSGAOSF,mode7,7,MSGAOSF);
 /* line 99: */
LSDAOSF_lines( 2, &NSGAOSF );
IRGAOSF.data[8] = A_UNITE(OSGAOSF,mode20,20,NSGAOSF);
SSGAOSF = QSGAOSF ;
IRGAOSF.data[9] = A_UNITE(RSGAOSF,mode7,7,SSGAOSF);
 /* line 100: */
USGAOSF.fn.fn_global = PKDAOSF_newline;
USGAOSF.nonlocals = A68_NIL;
IRGAOSF.data[10] = A_UNITE(TSGAOSF,mode12,12,USGAOSF);
YSGAOSF = WSGAOSF ;
IRGAOSF.data[11] = A_UNITE(XSGAOSF,mode7,7,YSGAOSF);
 /* line 101: */
ATGAOSF.fn.fn_global = PKDAOSF_newline;
ATGAOSF.nonlocals = A68_NIL;
IRGAOSF.data[12] = A_UNITE(ZSGAOSF,mode12,12,ATGAOSF);
ETGAOSF = CTGAOSF ;
IRGAOSF.data[13] = A_UNITE(DTGAOSF,mode7,7,ETGAOSF);
 /* line 102: */
GTGAOSF.fn.fn_global = PKDAOSF_newline;
GTGAOSF.nonlocals = A68_NIL;
IRGAOSF.data[14] = A_UNITE(FTGAOSF,mode12,12,GTGAOSF);
KTGAOSF = ITGAOSF ;
IRGAOSF.data[15] = A_UNITE(JTGAOSF,mode7,7,KTGAOSF);
 /* line 103: */
MTGAOSF.fn.fn_global = PKDAOSF_newline;
MTGAOSF.nonlocals = A68_NIL;
IRGAOSF.data[16] = A_UNITE(LTGAOSF,mode12,12,MTGAOSF);
QTGAOSF = OTGAOSF ;
IRGAOSF.data[17] = A_UNITE(PTGAOSF,mode7,7,QTGAOSF);
 /* line 104: */
STGAOSF.fn.fn_global = PKDAOSF_newline;
STGAOSF.nonlocals = A68_NIL;
IRGAOSF.data[18] = A_UNITE(RTGAOSF,mode12,12,STGAOSF);
WTGAOSF = UTGAOSF ;
IRGAOSF.data[19] = A_UNITE(VTGAOSF,mode7,7,WTGAOSF);
 /* line 105: */
LSDAOSF_lines( 2, &XTGAOSF );
IRGAOSF.data[20] = A_UNITE(YTGAOSF,mode20,20,XTGAOSF);
 /* line 106: */
 /* line 107: */
KYDAOSF_put(DREAOSF_screen, A_HISVEC(ZTGAOSF,IRGAOSF,21,A68_52 ));
} 
} 
} 
A_PROC_EXIT(title);
return;
} 
#undef NL

A68_VOID  BUGAOSF_print_title(A68_BOOL  Silent)
{ 
A68_INT  CUGAOSF;  /* clause result */
A_PROC_ENTRY(print_title);
 /* line 110: */
if ( Silent )
{ 
CUGAOSF = 2;
} 
else
{ 
CUGAOSF = 1;
} 
VPGAOSF_title(CUGAOSF);
A_PROC_EXIT(print_title);
return;
} 
#undef NL

A68_VOID  DUGAOSF_print_issue(void)
{ 
A_PROC_ENTRY(print_issue);
 /* line 115: */
VPGAOSF_title(3);
A_PROC_EXIT(print_issue);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void PPGAOSF(void)   /* initialise DECS printissue */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","printissue.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osinterface.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IPEAOSF();   /* USE osinterface */
QMDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/printissue.a68";
A_config.translation_time = "Mon May  3 00:36:16 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "OPGAOSF (from seed file) ";
A_config.spec_change_time = "Mon May  3 00:36:16 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS printissue);
UEAALIB_a68config(LGAALIB_configinfo, TPGAOSF);
 /* line 45: */
 /* line 109: */
 /* line 112: */
 /* line 116: */
A_PROC_EXIT(DECS printissue);
} 
#undef NL
/* end of translation of printissue.a68 */
