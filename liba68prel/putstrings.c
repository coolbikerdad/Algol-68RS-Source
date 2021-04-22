/* UNAME:PMDAOSF */
#include <algol68/Asupport.h>
struct A68t32 ;
struct A68t33 ;

A_PROCEDURE(A68_VOID ,A68t31,(struct A68t32 ,struct A68t33 ),(struct A68t32 ,struct A68t33 ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(MODE32,MODE33) VOID */
struct A68t32{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t34 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(INT,REF MODE34,BITS)  */
A_VECTOR(A68_VC ,A68t33);
typedef struct A68t33  A68_33 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t36 ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE36 */
struct A68t36{
struct A68t32  Msgno;
A68_VC  Text;
};
typedef struct A68t36  A68_36 ;    /* STRUCT(MODE32,REF MODE26)  */
struct A68t34{
A68_VC  Name;
struct A68t35  Messages;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(REF MODE26,REF MODE35)  */
struct A68t37{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t37  A68_37 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t38{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t38  A68_38 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t39,(struct A68t38 ,struct A68t38 ),(struct A68t38 ,struct A68t38 ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE38,MODE38) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t41);
typedef struct A68t41  A68_41 ;    /* STRUCT 4 CHAR */
struct A68t40{
struct A68t41  Access;
A_PAD_ISTRUCT(A68_41 ,PAD_4)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE41)  */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t37 *,A68_VC *),(struct A68t37 *,A68_VC *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(REF MODE37) MODE26 */

A_PROCEDURE(struct A68t37 *,A68t43,(A68_VC ,struct A68t40 ,struct A68t31 ),(A68_VC ,struct A68t40 ,struct A68t31 ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26,MODE40,MODE31) REF MODE37 */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t37 *,struct A68t31 ),(struct A68t37 *,struct A68t31 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE37,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE37,REF MODE26,REF INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(REF MODE37,MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t47,(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF MODE37,LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE37,REF LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t37 *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE37,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t51,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE26,MODE26,MODE31) MODE38 */
struct A68t52{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_5)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_6)
A68_SINT  Device;
A_PAD_SINT(PAD_7)
A68_SINT  Links;
A_PAD_SINT(PAD_8)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_9)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_10)
A68_LINT  Size;
A_PAD_LINT(PAD_11)
A68_LINT  Accessed;
A_PAD_LINT(PAD_12)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_13)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_14)
};
typedef struct A68t52  A68_52 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t54 ;

A_PROCEDURE(struct A68t52 *,A68t53,(struct A68t54 ,struct A68t31 ),(struct A68t54 ,struct A68t31 ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE54,MODE31) REF MODE52 */
struct A68t54 { A68_INT mode; union {
struct A68t37 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t54  A68_54 ;    /* UNION(REF MODE37,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t55,(struct A68t37 *),(struct A68t37 *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(REF MODE37) BOOL */

A_PROCEDURE(A68_BITS *,A68t56,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE26,MODE31) REF BITS */

A_PROCEDURE(A68_VOID ,A68t57,(A68_BITS *,struct A68t31 ),(A68_BITS *,struct A68t31 ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(REF BITS,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t58,(A68_BITS *,struct A68t31 ,A68_VC *),(A68_BITS *,struct A68t31 ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF BITS,MODE31) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t59,(A68_VC *),(A68_VC *,void *));
typedef struct A68t59  A68_59 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t61,(void),(void *));
typedef struct A68t61  A68_61 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t62,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t62  A68_62 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t63,(A68_INT ),(A68_INT ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t64,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE26,MODE31) INT */

A_PROCEDURE(A68_INT ,A68t65,(void),(void *));
typedef struct A68t65  A68_65 ;    /* PROC INT */
struct A68t66{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t66  A68_66 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t67,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t66 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t66 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE26,MODE26,MODE31) MODE66 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t33 *),(struct A68t33 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC MODE33 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ,struct A68t31 ,struct A68t33 *),(A68_VC ,struct A68t31 ,struct A68t33 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE26,MODE31) MODE33 */
struct A68t71 ;

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t71 ,struct A68t31 ,struct A68t31 ),(struct A68t71 ,struct A68t31 ,struct A68t31 ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE71,MODE31,MODE31) VOID */
A_VECTOR(A68_INT ,A68t71);
typedef struct A68t71  A68_71 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t72,(struct A68t71 ,struct A68t31 ),(struct A68t71 ,struct A68t31 ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE71,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t73,(A68_INT ,struct A68t31 ,struct A68t31 *),(A68_INT ,struct A68t31 ,struct A68t31 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(INT,MODE31) MODE31 */

A_PROCEDURE(A68_VOID ,A68t74,(void),(void *));
typedef struct A68t74  A68_74 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t75,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(BITS) VOID */
struct A68t77 ;

A_PROCEDURE(A68_VOID ,A68t76,(struct A68t77 ),(struct A68t77 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE77) VOID */

A_PROCEDURE(A68_VOID ,A68t77,(A68_VC ),(A68_VC ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE26) VOID */
struct A68t78{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t79,(A68_BOOL ,struct A68t78 *),(A68_BOOL ,struct A68t78 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(BOOL) MODE78 */
struct A68t81 ;

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t81 ,struct A68t31 ),(struct A68t81 ,struct A68t31 ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE81,MODE31) VOID */
A_VECTOR(struct A68t78 ,A68t81);
typedef struct A68t81  A68_81 ;    /* VECTOR [] MODE78 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t83,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t84,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t33 ,A68_VC *),(struct A68t33 ,A68_VC *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE33) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t86,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(INT) MODE26 */
struct A68t88 ;

A_PROCEDURE(A68_VOID ,A68t87,(struct A68t88 ,A68_INT ,A68_VC *),(struct A68t88 ,A68_INT ,A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE88,INT) REF MODE26 */
struct A68t88 { A68_INT mode; union {
A68_SINT  mode1;
A68_INT  mode2;
A68_LINT  mode3;
A68_REAL  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t88  A68_88 ;    /* UNION(SHORT INT,INT,LONG INT,REAL)  */

A_PROCEDURE(A68_VOID ,A68t89,(struct A68t88 ,A68_INT ,A68_INT ,A68_VC *),(struct A68t88 ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE88,INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t88 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *),(struct A68t88 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE88,INT,INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t91,(A68_BOOL ,struct A68t71 *),(A68_BOOL ,struct A68t71 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(BOOL) MODE71 */

A_PROCEDURE(A68_VOID ,A68t93,(A68_VC ,A68_INT *,struct A68t38 *),(A68_VC ,A68_INT *,struct A68t38 *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(REF MODE26,REF INT) MODE38 */
struct A68t92{
A68_INT  Charnumber;
A_PAD_INT(PAD_16)
A68_INT  Linenumber;
A_PAD_INT(PAD_17)
A68_INT  Indent;
A_PAD_INT(PAD_18)
A68_INT  Width;
A_PAD_INT(PAD_19)
A68_INT  Sizeincr;
A_PAD_INT(PAD_20)
struct A68t38  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_21)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_22)
A68_BOOL  Input;
A_PAD_BOOL(PAD_23)
struct A68t77  Putbuffer;
struct A68t93  Getbuffer;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE38,REF MODE26,BOOL,BOOL,BOOL,MODE77,MODE93)  */

A_PROCEDURE(A68_INT ,A68t94,(struct A68t92 *),(struct A68t92 *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF MODE92) INT */

A_PROCEDURE(A68_INT ,A68t95,(struct A68t92 *,A68_INT ),(struct A68t92 *,A68_INT ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE92,INT) INT */

A_PROCEDURE(A68_VOID ,A68t96,(struct A68t92 *),(struct A68t92 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE92) VOID */
struct A68t98 ;
struct A68t99 ;

A_PROCEDURE(struct A68t92 *,A68t97,(struct A68t98 ,struct A68t99 ),(struct A68t98 ,struct A68t99 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE98,MODE99) REF MODE92 */
struct A68t98 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t98  A68_98 ;    /* UNION(INT,REF MODE26)  */
struct A68t99 { A68_INT mode; union {
struct A68t77  mode1;
struct A68t93  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t99  A68_99 ;    /* UNION(MODE77,MODE93)  */

A_PROCEDURE(A68_VOID ,A68t100,(struct A68t74 ),(struct A68t74 ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE74) VOID */

A_PROCEDURE(A68_VOID ,A68t101,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t102);
typedef struct A68t102  A68_102 ;    /* STRUCT 60 CHAR */

A_PROCEDURE(A68_VOID ,A68t103,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t71 ,struct A68t71 *),(struct A68t71 ,struct A68t71 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE71) REF MODE71 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_INT ,struct A68t71 *),(A68_INT ,struct A68t71 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT) REF MODE71 */

A_PROCEDURE(A68_VOID ,A68t106,(A68_VC ),(A68_VC ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t71 ),(struct A68t71 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t108,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t109,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t110 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t110  A68_110 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t110 ,A68_VC *),(struct A68t110 ,A68_VC *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE110) MODE26 */
A_ISTRUCT(A68_CHAR ,16,A68t112);
typedef struct A68t112  A68_112 ;    /* STRUCT 16 CHAR */
struct A68t113{
A68_INT  Int;
A_PAD_INT(PAD_24)
A68_INT  Width;
A_PAD_INT(PAD_25)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,INT)  */
struct A68t114{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_26)
};
typedef struct A68t114  A68_114 ;    /* STRUCT(MODE26,INT)  */
struct A68t115{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_27)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE26,INT)  */
struct A68t116{
A68_INT  Tab;
A_PAD_INT(PAD_28)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT)  */
struct A68t117{
A68_INT  Pos;
A_PAD_INT(PAD_29)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT)  */
struct A68t118{
A68_INT  After;
A_PAD_INT(PAD_30)
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT)  */
struct A68t119{
A68_INT  Spaces;
A_PAD_INT(PAD_31)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT)  */
struct A68t120{
A68_INT  Lines;
A_PAD_INT(PAD_32)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT)  */
struct A68t121{
A68_INT  Indent;
A_PAD_INT(PAD_33)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */
A_VECTOR(A68_BITS ,A68t123);
typedef struct A68t123  A68_123 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t124);
typedef struct A68t124  A68_124 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t125);
typedef struct A68t125  A68_125 ;    /* VECTOR [] REAL */
A_STRAIGHT(A68_VOID,A68t126);
typedef struct A68t126  A68_126 ;    /* STRAIGHT MODE122 */
struct A68t122 { A68_INT mode; union {
A68_INT  mode1;
struct A68t71  mode2;
A68_BITS  mode3;
struct A68t123  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t124  mode9;
A68_REAL  mode10;
struct A68t125  mode11;
struct A68t96  mode12;
struct A68t113  mode13;
struct A68t114  mode14;
struct A68t115  mode15;
struct A68t116  mode16;
struct A68t117  mode17;
struct A68t118  mode18;
struct A68t119  mode19;
struct A68t120  mode20;
struct A68t121  mode21;
struct A68t126  mode22;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t122  A68_122 ;    /* UNION(INT,MODE71,BITS,MODE123,SHORT BITS,CHAR,MODE26,BOOL,MODE124,REAL,MODE125,MODE96,MODE113,MODE114,MODE115,MODE116,MODE117,MODE118,MODE119,MODE120,MODE121,MODE126)  */

A_PROCEDURE(A68_VOID ,A68t127,(A68_BOOL ,struct A68t114 *),(A68_BOOL ,struct A68t114 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(BOOL) MODE114 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_BOOL ,struct A68t115 *),(A68_BOOL ,struct A68t115 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(BOOL) MODE115 */
#define A68_129  A68_VC 
#define A68t129 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_130  A68_114 
#define A68t130 A68t114            /* STRUCT(MODE129,INT)  */
#define A68_131  A68_115 
#define A68t131 A68t115            /* STRUCT(MODE129,INT)  */
A_ISTRUCT(A68_CHAR ,512,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 512 CHAR */

A_PROCEDURE(A68_VOID ,A68t133,(A68_INT ,A68_INT ,struct A68t113 *),(A68_INT ,A68_INT ,struct A68t113 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(INT,INT) MODE113 */

A_PROCEDURE(A68_VOID ,A68t134,(A68_VC ,A68_INT ,struct A68t114 *),(A68_VC ,A68_INT ,struct A68t114 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE26,INT) MODE114 */

A_PROCEDURE(A68_VOID ,A68t135,(A68_VC ,A68_INT ,struct A68t115 *),(A68_VC ,A68_INT ,struct A68t115 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE26,INT) MODE115 */

A_PROCEDURE(A68_VOID ,A68t136,(A68_INT ,struct A68t116 *),(A68_INT ,struct A68t116 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT) MODE116 */

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,struct A68t117 *),(A68_INT ,struct A68t117 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT) MODE117 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ,struct A68t118 *),(A68_INT ,struct A68t118 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT) MODE118 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,struct A68t119 *),(A68_INT ,struct A68t119 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT) MODE119 */

A_PROCEDURE(A68_VOID ,A68t140,(A68_INT ,struct A68t120 *),(A68_INT ,struct A68t120 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT) MODE120 */

A_PROCEDURE(A68_VOID ,A68t141,(A68_INT ,struct A68t121 *),(A68_INT ,struct A68t121 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT) MODE121 */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t92 *,A68_VC ),(struct A68t92 *,A68_VC ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF MODE92,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t92 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t92 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF MODE92,REAL,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t92 *,A68_INT ,A68_INT ),(struct A68t92 *,A68_INT ,A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE92,INT,INT) VOID */
A_ISTRUCT(A68_CHAR ,32,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t92 *,A68_BITS ,A68_INT ),(struct A68t92 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(REF MODE92,BITS,INT) VOID */
A_VECTOR(struct A68t122 ,A68t148);
typedef struct A68t148  A68_148 ;    /* VECTOR [] MODE122 */

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t92 *,struct A68t148 ),(struct A68t92 *,struct A68t148 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE92,MODE148) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(A68_VC ,struct A68t148 ,A68_VC *),(A68_VC ,struct A68t148 ,A68_VC *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE26,MODE148) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t92 *,A68_VC *),(struct A68t92 *,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE92) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t148 ,A68_VC *),(struct A68t148 ,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE148) REF MODE26 */
A_ISTRUCT(A68_CHAR ,501,A68t153);
typedef struct A68t153  A68_153 ;    /* STRUCT 501 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from iobasics --- */
extern A68_82  PGDAOSF_anonymous;
extern A68_VC  YHDAOSF_space_str;
extern A68_VOID  PKDAOSF_newline(struct A68t92 *);
extern A68_VOID  WIDAOSF_nullgetbuffer(A68_VC ,A68_INT *,A68_38 *);
extern A68_VOID  TIDAOSF_nullputbuffer(A68_VC );
/* --- End of imports from iobasics --- */


/* --- Imports from numberstr --- */
extern A68_VOID  BXCAOSF_float(struct A68t88 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from numberstr --- */


/* --- Imports from strops --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
/* --- End of imports from strops --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_38  OUBAOSF_io_ok;
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc = argc; A_argv = argv; A_envp = envp

#define DHCAOSF_prelude A_prelude
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
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <algol68/Alibrary.h>

#define BOBAOSF_alwayscollect A_ALWAYS_COLLECT
#include <algol68/Alibrary.h>

#define COBAOSF_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include <algol68/Alibrary.h>

#define DOBAOSF_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void KGDAOSF(void);   /* iobasics */
extern void ZTCAOSF(void);   /* numberstr */
extern void BCAAOSF(void);   /* strops */
extern void CSCAOSF(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_102   TMDAOSF = {"$Id: putstrings.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,UMDAOSF,TMDAOSF,60)
#define OPDAOSF_mask 0XfU
static A68_112   ZPDAOSF = {"0123456789ABCDEF"}; 
A_GISVEC(A68_VC ,AQDAOSF,ZPDAOSF,16)
A68_127  GQDAOSF_anonymous;
A68_128  HQDAOSF_anonymous;
static A68_132  WQDAOSF_sp;
A68_CHAR * XQDAOSF_ss;
static A68_146   RVDAOSF = {"0987654321"}; 
static A68_146   TVDAOSF = {"0123456789"}; 
static A68_112   KXDAOSF = {"0123456789ABCDEF"}; 
A_GISVEC(A68_VC ,OXDAOSF,KXDAOSF,16)
A68_77  FCEAOSF_null_strproc;
typedef struct   /* env of non-global proc */
{
A68_71  Ints;
} ANDAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} KNDAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  A;
A68_INT  N;
A_PAD_INT(PAD_34)
} FODAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  N;
A_PAD_INT(PAD_35)
} VODAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  NPDAOSF_n_digits;
A_PAD_INT(PAD_36)
} SPDAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_119  BBEAOSF_s;
} JBEAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_92 * GDEAOSF_ch;
A68_jmp_buf  ZCEAOSF_restart;
A_PAD_jmp_buf(PAD_37)
} KDEAOSF_putbuffer;
typedef struct   /* env of non-global proc */
{
A68_92 * GDEAOSF_ch;
} ODEAOSF_generator;

A68_VOID  WMDAOSF_makervi(A68_71  Ints, A68_71  *ReturnedValue);

A_STATIC A68_VOID  ZMDAOSF_generator(A68_BOOL  XMDAOSF_anonymous, A68_71  *ReturnedValue, void *NonLocals);

A68_VOID  GNDAOSF_makervi(A68_INT  I, A68_71  *ReturnedValue);

A_STATIC A68_VOID  JNDAOSF_generator(A68_BOOL  HNDAOSF_anonymous, A68_71  *ReturnedValue, void *NonLocals);

A68_VOID  SNDAOSF_clear(A68_VC  Line);

A68_VOID  WNDAOSF_clear(A68_71  Ints);

A68_VOID  BODAOSF_(A68_VC  A, A68_INT  N, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  EODAOSF_generator(A68_BOOL  CODAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  RODAOSF_(A68_CHAR  A, A68_INT  N, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  UODAOSF_generator(A68_BOOL  SODAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  EPDAOSF_hexchars(A68_110  B, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RPDAOSF_generator(A68_BOOL  PPDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JQDAOSF_generator(A68_BOOL  IQDAOSF_anonymous, A68_114  *ReturnedValue);

A_STATIC A68_VOID  QQDAOSF_generator(A68_BOOL  PQDAOSF_anonymous, A68_115  *ReturnedValue);

A68_VOID  DRDAOSF_intwidth(A68_INT  I, A68_INT  W, A68_113  *ReturnedValue);

A68_VOID  IRDAOSF_width(A68_VC  S, A68_INT  W, A68_114  *ReturnedValue);

A68_VOID  NRDAOSF_justify(A68_VC  S, A68_INT  J, A68_115  *ReturnedValue);

A68_VOID  RRDAOSF_tab(A68_INT  I, A68_116  *ReturnedValue);

A68_VOID  WRDAOSF_pos(A68_INT  I, A68_117  *ReturnedValue);

A68_VOID  BSDAOSF_after(A68_INT  I, A68_118  *ReturnedValue);

A68_VOID  GSDAOSF_spaces(A68_INT  I, A68_119  *ReturnedValue);

A68_VOID  LSDAOSF_lines(A68_INT  I, A68_120  *ReturnedValue);

A68_VOID  QSDAOSF_setindent(A68_INT  N, A68_121  *ReturnedValue);

A68_VOID  VSDAOSF_resetindent(A68_92 * Ch);

A68_VOID  YSDAOSF_writeline(A68_92 * Ch);

A68_VOID  KTDAOSF_putstr(A68_92 * Ch, A68_VC  Str);

A68_VOID  AVDAOSF_putline(A68_92 * Ch, A68_VC  Line);

A68_VOID  FVDAOSF_add_real(A68_92 * Ch, A68_REAL  Re, A68_INT  Width, A68_INT  Digits);

A68_VOID  PVDAOSF_add_number(A68_92 * Ch, A68_INT  Int, A68_INT  Width);

A68_VOID  GXDAOSF_add_bits(A68_92 * Ch, A68_BITS  B, A68_INT  Leng);

A68_VOID  KYDAOSF_put(A68_92 * Ch, A68_148  Out);

A_STATIC A68_VOID  IBEAOSF_generator(A68_BOOL  GBEAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JCEAOSF_putb(A68_VC  Buffer, A68_148  Line, A68_VC  *ReturnedValue);

A68_VOID  RCEAOSF_endput(A68_92 * Ch, A68_VC  *ReturnedValue);

A68_VOID  YCEAOSF_oneline(A68_148  Out, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JDEAOSF_putbuffer(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  NDEAOSF_generator(A68_BOOL  LDEAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NDEAOSF_generator(A68_BOOL  LDEAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ODEAOSF_generator *)NonLocals)->x)
{ 
A68_VC  PDEAOSF;  /* clause result */
A68_VC  QDEAOSF;  /* OPERATORS - dynamic generator */
{ 
QDEAOSF.upb = ((*(&(NL(GDEAOSF_ch)->Buffer))).upb*2) ;
( LDEAOSF_anonymous? A_VLOC(A68_CHAR ,QDEAOSF): A_VHEAP(A68_CHAR ,QDEAOSF) );
PDEAOSF = QDEAOSF;
} 
*ReturnedValue = (PDEAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ZMDAOSF_generator(A68_BOOL  XMDAOSF_anonymous, A68_71  *ReturnedValue, void *NonLocals)
#define NL(x) (((ANDAOSF_generator *)NonLocals)->x)
{ 
A68_71  BNDAOSF;  /* clause result */
A68_71  CNDAOSF;  /* OPERATORS - dynamic generator */
{ 
CNDAOSF.upb = NL(Ints).upb ;
( XMDAOSF_anonymous? A_VLOC(A68_INT ,CNDAOSF): A_VHEAP(A68_INT ,CNDAOSF) );
BNDAOSF = CNDAOSF;
} 
*ReturnedValue = (BNDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  JNDAOSF_generator(A68_BOOL  HNDAOSF_anonymous, A68_71  *ReturnedValue, void *NonLocals)
#define NL(x) (((KNDAOSF_generator *)NonLocals)->x)
{ 
A68_71  LNDAOSF;  /* clause result */
A68_71  MNDAOSF;  /* OPERATORS - dynamic generator */
{ 
MNDAOSF.upb = 1 ;
( HNDAOSF_anonymous? A_VLOC(A68_INT ,MNDAOSF): A_VHEAP(A68_INT ,MNDAOSF) );
LNDAOSF = MNDAOSF;
} 
*ReturnedValue = (LNDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  EODAOSF_generator(A68_BOOL  CODAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FODAOSF_generator *)NonLocals)->x)
{ 
A68_VC  GODAOSF;  /* clause result */
A68_VC  HODAOSF;  /* OPERATORS - dynamic generator */
{ 
HODAOSF.upb = (NL(A).upb*NL(N)) ;
( CODAOSF_anonymous? A_VLOC(A68_CHAR ,HODAOSF): A_VHEAP(A68_CHAR ,HODAOSF) );
GODAOSF = HODAOSF;
} 
*ReturnedValue = (GODAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  UODAOSF_generator(A68_BOOL  SODAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VODAOSF_generator *)NonLocals)->x)
{ 
A68_VC  WODAOSF;  /* clause result */
A68_VC  XODAOSF;  /* OPERATORS - dynamic generator */
{ 
XODAOSF.upb = NL(N) ;
( SODAOSF_anonymous? A_VLOC(A68_CHAR ,XODAOSF): A_VHEAP(A68_CHAR ,XODAOSF) );
WODAOSF = XODAOSF;
} 
*ReturnedValue = (WODAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  RPDAOSF_generator(A68_BOOL  PPDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SPDAOSF_generator *)NonLocals)->x)
{ 
A68_VC  TPDAOSF;  /* clause result */
A68_VC  UPDAOSF;  /* OPERATORS - dynamic generator */
{ 
UPDAOSF.upb = NL(NPDAOSF_n_digits) ;
( PPDAOSF_anonymous? A_VLOC(A68_CHAR ,UPDAOSF): A_VHEAP(A68_CHAR ,UPDAOSF) );
TPDAOSF = UPDAOSF;
} 
*ReturnedValue = (TPDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  IBEAOSF_generator(A68_BOOL  GBEAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JBEAOSF_generator *)NonLocals)->x)
{ 
A68_VC  KBEAOSF;  /* clause result */
A68_VC  LBEAOSF;  /* OPERATORS - dynamic generator */
{ 
LBEAOSF.upb = NL(BBEAOSF_s).Spaces ;
( GBEAOSF_anonymous? A_VLOC(A68_CHAR ,LBEAOSF): A_VHEAP(A68_CHAR ,LBEAOSF) );
KBEAOSF = LBEAOSF;
} 
*ReturnedValue = (KBEAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  JDEAOSF_putbuffer(A68_VC  S, void *NonLocals)
#define NL(x) (((KDEAOSF_putbuffer *)NonLocals)->x)
{ 
A68_82  MDEAOSF_generator;   /* proc value of non-global proc */
A68_VC  RDEAOSF;  /* avoid structure result */
A68_VC * SDEAOSF;  /* YIELD */
A68_INT * TDEAOSF;  /* YIELD */
A_PROC_ENTRY(putbuffer);
 /* line 599: */
 /* line 600: */
{ 
A_CLOSURE( MDEAOSF_generator, NDEAOSF_generator, ODEAOSF_generator );
(( ODEAOSF_generator * ) ( MDEAOSF_generator.nonlocals )) -> GDEAOSF_ch = NL(GDEAOSF_ch);
A_CALLPROC(MDEAOSF_generator,(A68_FALSE, &RDEAOSF),(A68_FALSE, &RDEAOSF,(MDEAOSF_generator).nonlocals));
SDEAOSF = (&(NL(GDEAOSF_ch)->Buffer)) ;
(*SDEAOSF) = RDEAOSF;
 /* line 601: */
TDEAOSF = (&(NL(GDEAOSF_ch)->Width)) ;
(*TDEAOSF) = ((*(&(NL(GDEAOSF_ch)->Buffer))).upb-1);
 /* line 602: */
 /* line 603: */
siglongjmp(NL(ZCEAOSF_restart).label,1);
} 
A_PROC_EXIT(putbuffer);
return;
} 
#undef NL

A68_VOID  WMDAOSF_makervi(A68_71  Ints, A68_71  *ReturnedValue)
{ 
A68_91  YMDAOSF_generator;   /* proc value of non-global proc */
A68_71  DNDAOSF;  /* clause result */
A68_71  ENDAOSF;  /* avoid structure result */
A_PROC_ENTRY(makervi);
A_CLOSURE( YMDAOSF_generator, ZMDAOSF_generator, ANDAOSF_generator );
(( ANDAOSF_generator * ) ( YMDAOSF_generator.nonlocals )) -> Ints = Ints;
A_CALLPROC(YMDAOSF_generator,(A68_FALSE, &ENDAOSF),(A68_FALSE, &ENDAOSF,(YMDAOSF_generator).nonlocals));
A_VASSIGN2(Ints,ENDAOSF,A68_INT ) ;
DNDAOSF = ENDAOSF;
A_PROC_EXIT(makervi);
*ReturnedValue = (DNDAOSF);
return;
} 
#undef NL

A68_VOID  GNDAOSF_makervi(A68_INT  I, A68_71  *ReturnedValue)
{ 
A68_91  INDAOSF_generator;   /* proc value of non-global proc */
A68_71  NNDAOSF;  /* clause result */
A68_71  ONDAOSF;  /* avoid structure result */
A68_71  PNDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_71  QNDAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(makervi);
A_CLOSURE( INDAOSF_generator, JNDAOSF_generator, KNDAOSF_generator );
A_CALLPROC(INDAOSF_generator,(A68_FALSE, &ONDAOSF),(A68_FALSE, &ONDAOSF,(INDAOSF_generator).nonlocals));
QNDAOSF = A_HVEC(PNDAOSF,I,A68_INT ) ;
A_VASSIGN2(QNDAOSF,ONDAOSF,A68_INT ) ;
NNDAOSF = ONDAOSF;
A_PROC_EXIT(makervi);
*ReturnedValue = (NNDAOSF);
return;
} 
#undef NL

A68_VOID  SNDAOSF_clear(A68_VC  Line)
{ 
A68_CHAR * TNDAOSF_c;
A68_INT  UNDAOSF;  /* forall loop counter */
A_PROC_ENTRY(clear);
UNDAOSF = Line.upb -1;
TNDAOSF_c = Line.data;
for (;UNDAOSF-- >= 0;
(TNDAOSF_c++
) )
{
(*TNDAOSF_c) = ' ';
}
A_PROC_EXIT(clear);
return;
} 
#undef NL

A68_VOID  WNDAOSF_clear(A68_71  Ints)
{ 
A68_INT * XNDAOSF_i;
A68_INT  YNDAOSF;  /* forall loop counter */
A_PROC_ENTRY(clear);
YNDAOSF = Ints.upb -1;
XNDAOSF_i = Ints.data;
for (;YNDAOSF-- >= 0;
(XNDAOSF_i++
) )
{
(*XNDAOSF_i) = 0;
}
A_PROC_EXIT(clear);
return;
} 
#undef NL

A68_VOID  BODAOSF_(A68_VC  A, A68_INT  N, A68_VC  *ReturnedValue)
{ 
A68_82  DODAOSF_generator;   /* proc value of non-global proc */
A68_VC  JODAOSF;  /* avoid structure result */
A68_VC  IODAOSF_ans;
A68_INT  KODAOSF_i;
A68_INT  LODAOSF;  /* to part of loop */
A68_VC  MODAOSF;  /* OPERATORS - trim index */
A68_VC  NODAOSF;  /* YIELD */
A68_VC  OODAOSF;  /* clause result */
A_PROC_ENTRY(*);
 /* line 251: */
 /* line 252: */
{ 
A_CLOSURE( DODAOSF_generator, EODAOSF_generator, FODAOSF_generator );
(( FODAOSF_generator * ) ( DODAOSF_generator.nonlocals )) -> A = A;
(( FODAOSF_generator * ) ( DODAOSF_generator.nonlocals )) -> N = N;
A_CALLPROC(DODAOSF_generator,(A68_TRUE, &JODAOSF),(A68_TRUE, &JODAOSF,(DODAOSF_generator).nonlocals));
IODAOSF_ans = JODAOSF;
 /* line 253: */
LODAOSF = N;
for ( KODAOSF_i = 1;
KODAOSF_i <= LODAOSF;
KODAOSF_i += 1 )
{ 
NODAOSF = A_VTRIM(MODAOSF,(IODAOSF_ans),A_VTSCRIPT(&(MODAOSF.upb),(IODAOSF_ans).upb,(((N-1)*A.upb)+1),(N*A.upb))) ;
A_VASSIGN2(A,NODAOSF,A68_CHAR );
}
 /* line 254: */
 /* line 255: */
OODAOSF = IODAOSF_ans;
} 
A_PROC_EXIT(*);
*ReturnedValue = (OODAOSF);
return;
} 
#undef NL

A68_VOID  RODAOSF_(A68_CHAR  A, A68_INT  N, A68_VC  *ReturnedValue)
{ 
A68_82  TODAOSF_generator;   /* proc value of non-global proc */
A68_VC  ZODAOSF;  /* avoid structure result */
A68_VC  YODAOSF_ans;
A68_CHAR * APDAOSF_c;
A68_INT  BPDAOSF;  /* forall loop counter */
A68_VC  CPDAOSF;  /* clause result */
A_PROC_ENTRY(*);
 /* line 258: */
 /* line 259: */
{ 
A_CLOSURE( TODAOSF_generator, UODAOSF_generator, VODAOSF_generator );
(( VODAOSF_generator * ) ( TODAOSF_generator.nonlocals )) -> N = N;
A_CALLPROC(TODAOSF_generator,(A68_TRUE, &ZODAOSF),(A68_TRUE, &ZODAOSF,(TODAOSF_generator).nonlocals));
YODAOSF_ans = ZODAOSF;
 /* line 260: */
BPDAOSF = YODAOSF_ans.upb -1;
APDAOSF_c = YODAOSF_ans.data;
for (;BPDAOSF-- >= 0;
(APDAOSF_c++
) )
{
(*APDAOSF_c) = A;
}
 /* line 261: */
 /* line 262: */
CPDAOSF = YODAOSF_ans;
} 
A_PROC_EXIT(*);
*ReturnedValue = (CPDAOSF);
return;
} 
#undef NL

A68_VOID  EPDAOSF_hexchars(A68_110  B, A68_VC  *ReturnedValue)
{ 
A68_BITS  FPDAOSF_n;
A68_110  GPDAOSF;  /* united object - for case conformity */
A68_BITS  HPDAOSF_b;
A68_INT  IPDAOSF;  /* clause result */
A68_INT  JPDAOSF_i;
A68_SBITS  KPDAOSF_sb;
A68_SINT  LPDAOSF_si;
A68_CHAR  MPDAOSF_c;
A68_INT  NPDAOSF_n_digits;
A68_82  QPDAOSF_generator;   /* proc value of non-global proc */
A68_VC  WPDAOSF;  /* avoid structure result */
A68_VC  VPDAOSF_ans;
A68_INT  XPDAOSF_i;
A68_INT  YPDAOSF;  /* by part of loop */
A68_VC  BQDAOSF;  /* OPERATORS - simple index */
A68_INT  CQDAOSF;  /* YIELD */
A68_CHAR * DQDAOSF;  /* YIELD */
A68_INT  EQDAOSF;  /* SHR */
A68_VC  FQDAOSF;  /* clause result */
A_PROC_ENTRY(hexchars);
 /* line 266: */
 /* line 267: */
{ 
 /* line 268: */
 /* line 269: */
GPDAOSF = B ;
switch ( GPDAOSF.mode )
{ 
case 1: /* BITS */
HPDAOSF_b = (GPDAOSF.data.mode1);
{ 
FPDAOSF_n = HPDAOSF_b;
 /* line 270: */
IPDAOSF = 8;
} 
break;
case 2: /* INT */
JPDAOSF_i = (GPDAOSF.data.mode2);
{ 
FPDAOSF_n = (A68_BITS )JPDAOSF_i;
 /* line 271: */
IPDAOSF = 8;
} 
break;
case 3: /* SHORT BITS */
KPDAOSF_sb = (GPDAOSF.data.mode3);
{ 
FPDAOSF_n = (A68_BITS )KPDAOSF_sb;
 /* line 272: */
IPDAOSF = 4;
} 
break;
case 4: /* SHORT INT */
LPDAOSF_si = (GPDAOSF.data.mode4);
{ 
FPDAOSF_n = (A68_BITS )(A68_SBITS )LPDAOSF_si;
 /* line 273: */
IPDAOSF = 4;
} 
break;
case 5: /* CHAR */
MPDAOSF_c = (GPDAOSF.data.mode5);
{ 
FPDAOSF_n = (A68_BITS )(A68_INT)(unsigned char)MPDAOSF_c;
 /* line 274: */
IPDAOSF = 2;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
NPDAOSF_n_digits = IPDAOSF;
 /* line 275: */
 /* line 276: */
A_CLOSURE( QPDAOSF_generator, RPDAOSF_generator, SPDAOSF_generator );
(( SPDAOSF_generator * ) ( QPDAOSF_generator.nonlocals )) -> NPDAOSF_n_digits = NPDAOSF_n_digits;
A_CALLPROC(QPDAOSF_generator,(A68_TRUE, &WPDAOSF),(A68_TRUE, &WPDAOSF,(QPDAOSF_generator).nonlocals));
VPDAOSF_ans = WPDAOSF;
 /* line 277: */
 /* line 278: */
YPDAOSF = (-1);
for ( XPDAOSF_i = NPDAOSF_n_digits;
( YPDAOSF > 0 && XPDAOSF_i <= 1) ||
( YPDAOSF < 0 && XPDAOSF_i >= 1) ||
( YPDAOSF == 0 ) ;
XPDAOSF_i += YPDAOSF )
{ 
BQDAOSF = AQDAOSF ;
CQDAOSF = ((A68_INT )(A68_BITS )(FPDAOSF_n&OPDAOSF_mask)+1) ;
DQDAOSF = (&A_VINDEX(VPDAOSF_ans,XPDAOSF_i)) ;
(*DQDAOSF) = A_VINDEX(BQDAOSF,CQDAOSF);
 /* line 279: */
 /* line 280: */
EQDAOSF = 4 ;
FPDAOSF_n = A_SHR(FPDAOSF_n,EQDAOSF);
}
 /* line 281: */
 /* line 282: */
FQDAOSF = VPDAOSF_ans;
} 
A_PROC_EXIT(hexchars);
*ReturnedValue = (FQDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  JQDAOSF_generator(A68_BOOL  IQDAOSF_anonymous, A68_114  *ReturnedValue)
{ 
A68_130  KQDAOSF_anonymous;
A68_VC  LQDAOSF;  /* avoid structure result */
A68_129 * MQDAOSF;  /* YIELD */
A68_114  NQDAOSF;  /* clause result */
{ 
A_CALLPROC(PGDAOSF_anonymous,(IQDAOSF_anonymous, &LQDAOSF),(IQDAOSF_anonymous, &LQDAOSF,(PGDAOSF_anonymous).nonlocals));
MQDAOSF = (&((&KQDAOSF_anonymous)->Str)) ;
(*MQDAOSF) = LQDAOSF;
NQDAOSF = KQDAOSF_anonymous;
} 
*ReturnedValue = (NQDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  QQDAOSF_generator(A68_BOOL  PQDAOSF_anonymous, A68_115  *ReturnedValue)
{ 
A68_131  RQDAOSF_anonymous;
A68_VC  SQDAOSF;  /* avoid structure result */
A68_129 * TQDAOSF;  /* YIELD */
A68_115  UQDAOSF;  /* clause result */
{ 
A_CALLPROC(PGDAOSF_anonymous,(PQDAOSF_anonymous, &SQDAOSF),(PQDAOSF_anonymous, &SQDAOSF,(PGDAOSF_anonymous).nonlocals));
TQDAOSF = (&((&RQDAOSF_anonymous)->Str)) ;
(*TQDAOSF) = SQDAOSF;
UQDAOSF = RQDAOSF_anonymous;
} 
*ReturnedValue = (UQDAOSF);
return;
} 
#undef NL

A68_VOID  DRDAOSF_intwidth(A68_INT  I, A68_INT  W, A68_113  *ReturnedValue)
{ 
A68_113  ERDAOSF;  /* collateral clause result */
A68_113  FRDAOSF;  /* clause result */
A_PROC_ENTRY(intwidth);
ERDAOSF.Int = I;
ERDAOSF.Width = W;
FRDAOSF = ERDAOSF;
A_PROC_EXIT(intwidth);
*ReturnedValue = (FRDAOSF);
return;
} 
#undef NL

A68_VOID  IRDAOSF_width(A68_VC  S, A68_INT  W, A68_114  *ReturnedValue)
{ 
A68_114  JRDAOSF;  /* collateral clause result */
A68_114  KRDAOSF;  /* clause result */
A_PROC_ENTRY(width);
JRDAOSF.Str = S;
JRDAOSF.Width = W;
KRDAOSF = JRDAOSF;
A_PROC_EXIT(width);
*ReturnedValue = (KRDAOSF);
return;
} 
#undef NL

A68_VOID  NRDAOSF_justify(A68_VC  S, A68_INT  J, A68_115  *ReturnedValue)
{ 
A68_115  ORDAOSF;  /* collateral clause result */
A68_115  PRDAOSF;  /* clause result */
A_PROC_ENTRY(justify);
ORDAOSF.Str = S;
ORDAOSF.Justify = J;
PRDAOSF = ORDAOSF;
A_PROC_EXIT(justify);
*ReturnedValue = (PRDAOSF);
return;
} 
#undef NL

A68_VOID  RRDAOSF_tab(A68_INT  I, A68_116  *ReturnedValue)
{ 
A68_116  SRDAOSF_t;
A68_INT * TRDAOSF;  /* YIELD */
A68_116  URDAOSF;  /* clause result */
A_PROC_ENTRY(tab);
{ 
TRDAOSF = (&((&SRDAOSF_t)->Tab)) ;
(*TRDAOSF) = I;
URDAOSF = SRDAOSF_t;
} 
A_PROC_EXIT(tab);
*ReturnedValue = (URDAOSF);
return;
} 
#undef NL

A68_VOID  WRDAOSF_pos(A68_INT  I, A68_117  *ReturnedValue)
{ 
A68_117  XRDAOSF_p;
A68_INT * YRDAOSF;  /* YIELD */
A68_117  ZRDAOSF;  /* clause result */
A_PROC_ENTRY(pos);
{ 
YRDAOSF = (&((&XRDAOSF_p)->Pos)) ;
(*YRDAOSF) = I;
ZRDAOSF = XRDAOSF_p;
} 
A_PROC_EXIT(pos);
*ReturnedValue = (ZRDAOSF);
return;
} 
#undef NL

A68_VOID  BSDAOSF_after(A68_INT  I, A68_118  *ReturnedValue)
{ 
A68_118  CSDAOSF_a;
A68_INT * DSDAOSF;  /* YIELD */
A68_118  ESDAOSF;  /* clause result */
A_PROC_ENTRY(after);
{ 
DSDAOSF = (&((&CSDAOSF_a)->After)) ;
(*DSDAOSF) = I;
ESDAOSF = CSDAOSF_a;
} 
A_PROC_EXIT(after);
*ReturnedValue = (ESDAOSF);
return;
} 
#undef NL

A68_VOID  GSDAOSF_spaces(A68_INT  I, A68_119  *ReturnedValue)
{ 
A68_119  HSDAOSF_s;
A68_INT * ISDAOSF;  /* YIELD */
A68_119  JSDAOSF;  /* clause result */
A_PROC_ENTRY(spaces);
{ 
ISDAOSF = (&((&HSDAOSF_s)->Spaces)) ;
(*ISDAOSF) = I;
JSDAOSF = HSDAOSF_s;
} 
A_PROC_EXIT(spaces);
*ReturnedValue = (JSDAOSF);
return;
} 
#undef NL

A68_VOID  LSDAOSF_lines(A68_INT  I, A68_120  *ReturnedValue)
{ 
A68_120  MSDAOSF_l;
A68_INT * NSDAOSF;  /* YIELD */
A68_120  OSDAOSF;  /* clause result */
A_PROC_ENTRY(lines);
{ 
NSDAOSF = (&((&MSDAOSF_l)->Lines)) ;
(*NSDAOSF) = I;
OSDAOSF = MSDAOSF_l;
} 
A_PROC_EXIT(lines);
*ReturnedValue = (OSDAOSF);
return;
} 
#undef NL

A68_VOID  QSDAOSF_setindent(A68_INT  N, A68_121  *ReturnedValue)
{ 
A68_121  RSDAOSF_i;
A68_INT * SSDAOSF;  /* YIELD */
A68_121  TSDAOSF;  /* clause result */
A_PROC_ENTRY(setindent);
{ 
SSDAOSF = (&((&RSDAOSF_i)->Indent)) ;
(*SSDAOSF) = N;
TSDAOSF = RSDAOSF_i;
} 
A_PROC_EXIT(setindent);
*ReturnedValue = (TSDAOSF);
return;
} 
#undef NL

A68_VOID  VSDAOSF_resetindent(A68_92 * Ch)
{ 
A68_INT * WSDAOSF;  /* YIELD */
A_PROC_ENTRY(resetindent);
WSDAOSF = (&(Ch->Indent)) ;
(*WSDAOSF) = 0;
A_PROC_EXIT(resetindent);
return;
} 
#undef NL

A68_VOID  YSDAOSF_writeline(A68_92 * Ch)
{ 
A68_77  ZSDAOSF;  /* CALL */
A68_VC  ATDAOSF;  /* OPERATORS - trim index */
A68_VC  BTDAOSF;  /* OPERATORS - trim index */
A68_INT * CTDAOSF;  /* YIELD */
A68_INT * DTDAOSF;  /* YIELD */
A68_BOOL * ETDAOSF;  /* YIELD */
A68_INT * FTDAOSF;  /* YIELD */
A68_INT * GTDAOSF;  /* YIELD */
A68_BOOL * HTDAOSF;  /* YIELD */
A_PROC_ENTRY(writeline);
 /* line 329: */
 /* line 330: */
if ( (*(&(Ch->Buffered))) )
{ 
ZSDAOSF = (*(&(Ch->Putbuffer))) ;
ATDAOSF = (*(&(Ch->Buffer))) ;
A_CALLPROC(ZSDAOSF,(A_VTRIM(BTDAOSF,(ATDAOSF),A_VTSCRIPT(&(BTDAOSF.upb),(ATDAOSF).upb,1,((*(&(Ch->Charnumber)))-1)))),(A_VTRIM(BTDAOSF,(ATDAOSF),A_VTSCRIPT(&(BTDAOSF.upb),(ATDAOSF).upb,1,((*(&(Ch->Charnumber)))-1))),(ZSDAOSF).nonlocals));
 /* line 331: */
CTDAOSF = (&(Ch->Charnumber)) ;
(*CTDAOSF) = 1;
 /* line 332: */
DTDAOSF = (&(Ch->Linenumber)) ;
(*DTDAOSF)+=1;
 /* line 333: */
 /* line 334: */
 /* line 335: */
ETDAOSF = (&(Ch->Separate)) ;
(*ETDAOSF) = A68_FALSE;
} 
else
{ 
FTDAOSF = (&(Ch->Charnumber)) ;
(*FTDAOSF) = 1;
 /* line 336: */
GTDAOSF = (&(Ch->Linenumber)) ;
(*GTDAOSF)+=1;
 /* line 337: */
 /* line 338: */
HTDAOSF = (&(Ch->Separate)) ;
(*HTDAOSF) = A68_FALSE;
} 
A_PROC_EXIT(writeline);
return;
} 
#undef NL

A68_VOID  KTDAOSF_putstr(A68_92 * Ch, A68_VC  Str)
{ 
A68_INT  LTDAOSF_t;
A68_BOOL * MTDAOSF;  /* YIELD */
A68_INT * NTDAOSF_pos;
A68_INT  OTDAOSF_indent;
A68_VC  PTDAOSF;  /* OPERATORS - trim index */
A68_VC  QTDAOSF;  /* OPERATORS - trim index */
A68_VC  RTDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  STDAOSF;  /* OPERATORS - trim index */
A68_VC  TTDAOSF;  /* OPERATORS - trim index */
A68_VC  UTDAOSF;  /* YIELD */
A68_VC  VTDAOSF;  /* OPERATORS - assign op */
A68_77  WTDAOSF;  /* CALL */
A68_VC  XTDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  YTDAOSF;  /* OPERATORS - trim index */
A68_VC  ZTDAOSF;  /* OPERATORS - trim index */
A68_INT  AUDAOSF_maxsize;
A68_VC  BUDAOSF;  /* OPERATORS - trim index */
A68_VC  CUDAOSF;  /* OPERATORS - trim index */
A68_VC  DUDAOSF;  /* YIELD */
A68_77  EUDAOSF;  /* CALL */
A68_VC  FUDAOSF;  /* OPERATORS - trim index */
A68_VC  GUDAOSF;  /* OPERATORS - trim index */
A68_VC  HUDAOSF;  /* OPERATORS - trim index */
A68_VC  IUDAOSF;  /* YIELD */
A68_VC  JUDAOSF;  /* OPERATORS - assign op */
A68_77  KUDAOSF;  /* CALL */
A68_VC  LUDAOSF;  /* OPERATORS - trim index */
A68_VC  MUDAOSF;  /* OPERATORS - trim index */
A68_INT  NUDAOSF_second;
A68_BOOL  OUDAOSF;  /* optbool result */
A68_VC  PUDAOSF;  /* OPERATORS - trim index */
A68_VC  QUDAOSF;  /* OPERATORS - trim index */
A68_VC  RUDAOSF;  /* OPERATORS - trim index */
A68_VC  SUDAOSF;  /* YIELD */
A68_VC  TUDAOSF;  /* OPERATORS - assign op */
A68_77  UUDAOSF;  /* CALL */
A68_VC  VUDAOSF;  /* OPERATORS - trim index */
A68_BOOL  WUDAOSF;  /* optbool result */
A68_VC  XUDAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(putstr);
 /* line 342: */
 /* line 343: */
{ 
 /* line 345: */
 /* line 346: */
 /* line 347: */
if ( (Str.upb>0) )
{ 
MTDAOSF = (&(Ch->Separate)) ;
(*MTDAOSF) = A68_FALSE;
 /* line 348: */
NTDAOSF_pos = (&(Ch->Charnumber));
 /* line 350: */
 /* line 351: */
if ( ((*NTDAOSF_pos)<=(*(&(Ch->Indent)))) )
{ 
OTDAOSF_indent = (*(&(Ch->Indent)));
 /* line 352: */
 /* line 353: */
if ( (*(&(Ch->Buffered))) )
{ 
 /* line 354: */
PTDAOSF = (*(&(Ch->Buffer))) ;
STDAOSF = A_ISVEC(RTDAOSF,(&WQDAOSF_sp),512,A68_CHAR ) ;
UTDAOSF = A_VTRIM(QTDAOSF,(PTDAOSF),A_VTSCRIPT(&(QTDAOSF.upb),(PTDAOSF).upb,(*NTDAOSF_pos),OTDAOSF_indent)) ;
VTDAOSF = A_VTRIM(TTDAOSF,(STDAOSF),A_VTSCRIPT(&(TTDAOSF.upb),(STDAOSF).upb,1,((OTDAOSF_indent-(*NTDAOSF_pos))+1))) ;
A_VASSIGN2(VTDAOSF,UTDAOSF,A68_CHAR );
} 
else
{ 
 /* line 355: */
WTDAOSF = (*(&(Ch->Putbuffer))) ;
YTDAOSF = A_ISVEC(XTDAOSF,(&WQDAOSF_sp),512,A68_CHAR ) ;
A_CALLPROC(WTDAOSF,(A_VTRIM(ZTDAOSF,(YTDAOSF),A_VTSCRIPT(&(ZTDAOSF.upb),(YTDAOSF).upb,1,((OTDAOSF_indent-(*NTDAOSF_pos))+1)))),(A_VTRIM(ZTDAOSF,(YTDAOSF),A_VTSCRIPT(&(ZTDAOSF.upb),(YTDAOSF).upb,1,((OTDAOSF_indent-(*NTDAOSF_pos))+1))),(WTDAOSF).nonlocals));
} 
 /* line 356: */
 /* line 357: */
(*NTDAOSF_pos) = (OTDAOSF_indent+1);
} 
 /* line 359: */
AUDAOSF_maxsize = (((*(&(Ch->Width)))-(*NTDAOSF_pos))+1);
 /* line 360: */
 /* line 361: */
 /* line 362: */
if ( (Str.upb<=AUDAOSF_maxsize) )
{ 
 /* line 363: */
if ( (*(&(Ch->Buffered))) )
{ 
 /* line 364: */
BUDAOSF = (*(&(Ch->Buffer))) ;
DUDAOSF = A_VTRIM(CUDAOSF,(BUDAOSF),A_VTSCRIPT(&(CUDAOSF.upb),(BUDAOSF).upb,(*NTDAOSF_pos),(((*NTDAOSF_pos)+Str.upb)-1))) ;
A_VASSIGN2(Str,DUDAOSF,A68_CHAR );
} 
else
{ 
 /* line 365: */
EUDAOSF = (*(&(Ch->Putbuffer))) ;
A_CALLPROC(EUDAOSF,(Str),(Str,(EUDAOSF).nonlocals));
} 
 /* line 366: */
 /* line 367: */
(*NTDAOSF_pos)+=Str.upb;
} 
else
{ 
 /* line 368: */
if ( (AUDAOSF_maxsize==0) )
{ 
PKDAOSF_newline(Ch);
 /* line 369: */
 /* line 370: */
 /* line 371: */
KTDAOSF_putstr(Ch, Str);
} 
else
{ 
LTDAOSF_t = AUDAOSF_maxsize;
 /* line 372: */
for ( ;; )
{ 
 /* line 373: */
if ( !((LTDAOSF_t>0)) ) break;
if ( (A_VINDEX(Str,LTDAOSF_t)==' ') )
{ 
LTDAOSF_t = (-LTDAOSF_t);
} 
else
{ 
LTDAOSF_t-=1;
} 
}
 /* line 374: */
 /* line 375: */
 /* line 376: */
if ( (LTDAOSF_t==0) )
{ 
 /* line 377: */
 /* line 378: */
if ( ((*NTDAOSF_pos)==((*(&(Ch->Indent)))+1)) )
{ 
 /* line 379: */
if ( (*(&(Ch->Buffered))) )
{ 
 /* line 380: */
 /* line 381: */
FUDAOSF = (*(&(Ch->Buffer))) ;
IUDAOSF = A_VTRIM(GUDAOSF,(FUDAOSF),A_VTSCRIPT(&(GUDAOSF.upb),(FUDAOSF).upb,(*NTDAOSF_pos),(((*NTDAOSF_pos)+AUDAOSF_maxsize)-1))) ;
JUDAOSF = A_VTRIM(HUDAOSF,(Str),A_VTSCRIPT(&(HUDAOSF.upb),(Str).upb,1,AUDAOSF_maxsize)) ;
A_VASSIGN2(JUDAOSF,IUDAOSF,A68_CHAR );
} 
else
{ 
 /* line 382: */
KUDAOSF = (*(&(Ch->Putbuffer))) ;
A_CALLPROC(KUDAOSF,(A_VTRIM(LUDAOSF,(Str),A_VTSCRIPT(&(LUDAOSF.upb),(Str).upb,1,AUDAOSF_maxsize))),(A_VTRIM(LUDAOSF,(Str),A_VTSCRIPT(&(LUDAOSF.upb),(Str).upb,1,AUDAOSF_maxsize)),(KUDAOSF).nonlocals));
} 
 /* line 383: */
(*NTDAOSF_pos)+=AUDAOSF_maxsize;
 /* line 384: */
PKDAOSF_newline(Ch);
 /* line 385: */
 /* line 386: */
 /* line 387: */
KTDAOSF_putstr(Ch, A_VTRIM(MUDAOSF,(Str),A_VTSCRIPT(&(MUDAOSF.upb),(Str).upb,(AUDAOSF_maxsize+1),(Str).upb)));
} 
else
{ 
PKDAOSF_newline(Ch);
 /* line 388: */
 /* line 389: */
 /* line 390: */
 /* line 391: */
KTDAOSF_putstr(Ch, Str);
} 
} 
else
{ 
NUDAOSF_second = (-LTDAOSF_t);
 /* line 392: */
LTDAOSF_t = (-LTDAOSF_t);
 /* line 393: */
for ( ;; )
{ 
OUDAOSF = ((LTDAOSF_t-=1)>0);
if ( OUDAOSF )
{ /* line 394: */
OUDAOSF = (A_VINDEX(Str,LTDAOSF_t)==' ');
}
if ( !(OUDAOSF) ) break;
/*SKIP*/;
}
 /* line 395: */
 /* line 396: */
if ( (*(&(Ch->Buffered))) )
{ 
 /* line 397: */
PUDAOSF = (*(&(Ch->Buffer))) ;
SUDAOSF = A_VTRIM(QUDAOSF,(PUDAOSF),A_VTSCRIPT(&(QUDAOSF.upb),(PUDAOSF).upb,(*NTDAOSF_pos),(((*NTDAOSF_pos)+LTDAOSF_t)-1))) ;
TUDAOSF = A_VTRIM(RUDAOSF,(Str),A_VTSCRIPT(&(RUDAOSF.upb),(Str).upb,1,LTDAOSF_t)) ;
A_VASSIGN2(TUDAOSF,SUDAOSF,A68_CHAR );
} 
else
{ 
 /* line 398: */
UUDAOSF = (*(&(Ch->Putbuffer))) ;
A_CALLPROC(UUDAOSF,(A_VTRIM(VUDAOSF,(Str),A_VTSCRIPT(&(VUDAOSF.upb),(Str).upb,1,LTDAOSF_t))),(A_VTRIM(VUDAOSF,(Str),A_VTSCRIPT(&(VUDAOSF.upb),(Str).upb,1,LTDAOSF_t)),(UUDAOSF).nonlocals));
} 
 /* line 399: */
(*NTDAOSF_pos)+=LTDAOSF_t;
 /* line 400: */
LTDAOSF_t = NUDAOSF_second;
 /* line 401: */
for ( ;; )
{ 
WUDAOSF = ((LTDAOSF_t+=1)<Str.upb);
if ( WUDAOSF )
{ /* line 402: */
WUDAOSF = (A_VINDEX(Str,LTDAOSF_t)==' ');
}
if ( !(WUDAOSF) ) break;
/*SKIP*/;
}
 /* line 403: */
PKDAOSF_newline(Ch);
 /* line 404: */
 /* line 405: */
 /* line 406: */
 /* line 407: */
 /* line 408: */
KTDAOSF_putstr(Ch, A_VTRIM(XUDAOSF,(Str),A_VTSCRIPT(&(XUDAOSF.upb),(Str).upb,LTDAOSF_t,(Str).upb)));
} 
} 
} 
} 
} 
A_PROC_EXIT(putstr);
return;
} 
#undef NL

A68_VOID  AVDAOSF_putline(A68_92 * Ch, A68_VC  Line)
{ 
A_PROC_ENTRY(putline);
 /* line 412: */
 /* line 413: */
{ 
KTDAOSF_putstr(Ch, Line);
 /* line 414: */
 /* line 415: */
PKDAOSF_newline(Ch);
} 
A_PROC_EXIT(putline);
return;
} 
#undef NL

A68_VOID  FVDAOSF_add_real(A68_92 * Ch, A68_REAL  Re, A68_INT  Width, A68_INT  Digits)
{ 
A68_88  GVDAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HVDAOSF;  /* avoid structure result */
A68_VC  IVDAOSF_realstr;
A68_BOOL  JVDAOSF;  /* optbool result */
A68_INT  KVDAOSF;  /* YIELD */
A68_BOOL * LVDAOSF;  /* YIELD */
A_PROC_ENTRY(add_real);
 /* line 418: */
 /* line 419: */
{ 
BXCAOSF_float( A_UNITE(GVDAOSF,mode4,4,Re), Width, Digits, 3, &HVDAOSF );
IVDAOSF_realstr = HVDAOSF;
 /* line 423: */
JVDAOSF = (IVDAOSF_realstr.upb>0);
if ( JVDAOSF )
{KVDAOSF = 1 ;
JVDAOSF = ((*(&A_VINDEX(IVDAOSF_realstr,KVDAOSF)))!=' ');
}
 /* line 424: */
if ( JVDAOSF )
{JVDAOSF = (*(&(Ch->Separate)));
}
if ( JVDAOSF )
{ 
 /* line 425: */
KTDAOSF_putstr(Ch, YHDAOSF_space_str);
} 
 /* line 426: */
KTDAOSF_putstr(Ch, IVDAOSF_realstr);
 /* line 427: */
 /* line 428: */
LVDAOSF = (&(Ch->Separate)) ;
(*LVDAOSF) = A68_TRUE;
} 
A_PROC_EXIT(add_real);
return;
} 
#undef NL

A68_VOID  PVDAOSF_add_number(A68_92 * Ch, A68_INT  Int, A68_INT  Width)
{ 
A68_145  QVDAOSF_line;
A68_146  SVDAOSF;  /* clause result */
A68_146  UVDAOSF_chars;
A68_INT  VVDAOSF_n;
A68_INT  WVDAOSF_l;
A68_VC  XVDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  YVDAOSF;  /* OPERATORS - simple index */
A68_INT  ZVDAOSF;  /* YIELD */
A68_CHAR * AWDAOSF;  /* YIELD */
A68_VC  BWDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CWDAOSF;  /* OPERATORS - simple index */
A68_INT  DWDAOSF;  /* YIELD */
A68_VC  EWDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  FWDAOSF;  /* OPERATORS - simple index */
A68_INT  GWDAOSF;  /* ADICOPS - MOD */
A68_INT  HWDAOSF;  /* ADICOPS - MOD */
A68_INT  IWDAOSF;  /* YIELD */
A68_CHAR * JWDAOSF;  /* YIELD */
A68_VC  KWDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  LWDAOSF;  /* OPERATORS - simple index */
A68_INT  MWDAOSF;  /* YIELD */
A68_CHAR * NWDAOSF;  /* YIELD */
A68_INT  OWDAOSF_sp;
A68_INT  PWDAOSF;  /* to part of loop */
A68_INT  QWDAOSF;  /* loop control */
A68_VC  RWDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  SWDAOSF;  /* OPERATORS - simple index */
A68_INT  TWDAOSF;  /* YIELD */
A68_CHAR * UWDAOSF;  /* YIELD */
A68_VC  VWDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WWDAOSF;  /* OPERATORS - simple index */
A68_INT  XWDAOSF;  /* YIELD */
A68_CHAR * YWDAOSF;  /* YIELD */
A68_VC  ZWDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  AXDAOSF;  /* OPERATORS - trim index */
A68_VC  BXDAOSF;  /* OPERATORS - trim index */
A68_BOOL * CXDAOSF;  /* YIELD */
A_PROC_ENTRY(add_number);
 /* line 434: */
 /* line 435: */
{ 
 /* line 436: */
 /* line 437: */
if ( (Int<0) )
{ 
SVDAOSF = RVDAOSF;
} 
else
{ 
SVDAOSF = TVDAOSF;
} 
UVDAOSF_chars = SVDAOSF;
 /* line 438: */
VVDAOSF_n = Int;
WVDAOSF_l = 33;
 /* line 439: */
 /* line 440: */
if ( (VVDAOSF_n==0) )
{ 
 /* line 441: */
YVDAOSF = A_ISVEC(XVDAOSF,(&QVDAOSF_line),32,A68_CHAR ) ;
ZVDAOSF = WVDAOSF_l-=1 ;
AWDAOSF = (&A_VINDEX(YVDAOSF,ZVDAOSF)) ;
(*AWDAOSF) = '0';
} 
else
{ 
for ( ;; )
{ 
 /* line 442: */
if ( !((VVDAOSF_n!=0)) ) break;
CWDAOSF = A_ISVEC(BWDAOSF,(&QVDAOSF_line),32,A68_CHAR ) ;
DWDAOSF = WVDAOSF_l-=1 ;
FWDAOSF = A_HISVEC(EWDAOSF,UVDAOSF_chars,10,A68_CHAR ) ;
HWDAOSF = 10 ;
IWDAOSF = (A_MOD(VVDAOSF_n,HWDAOSF,GWDAOSF)+1) ;
JWDAOSF = (&A_VINDEX(CWDAOSF,DWDAOSF)) ;
(*JWDAOSF) = A_VINDEX(FWDAOSF,IWDAOSF);
 /* line 443: */
 /* line 444: */
VVDAOSF_n/=10;
}
 /* line 445: */
if ( (Int<0) )
{ 
 /* line 446: */
LWDAOSF = A_ISVEC(KWDAOSF,(&QVDAOSF_line),32,A68_CHAR ) ;
MWDAOSF = WVDAOSF_l-=1 ;
NWDAOSF = (&A_VINDEX(LWDAOSF,MWDAOSF)) ;
(*NWDAOSF) = '-';
} 
} 
 /* line 447: */
OWDAOSF_sp = ((Width-33)+WVDAOSF_l);
 /* line 448: */
 /* line 449: */
if ( (OWDAOSF_sp>0) )
{ 
PWDAOSF = OWDAOSF_sp;
for ( QWDAOSF = 1;
QWDAOSF <= PWDAOSF;
QWDAOSF += 1 )
{ 
SWDAOSF = A_ISVEC(RWDAOSF,(&QVDAOSF_line),32,A68_CHAR ) ;
TWDAOSF = WVDAOSF_l-=1 ;
UWDAOSF = (&A_VINDEX(SWDAOSF,TWDAOSF)) ;
(*UWDAOSF) = ' ';
}
 /* line 450: */
} 
else
{ 
if ( (*(&(Ch->Separate))) )
{ 
 /* line 451: */
WWDAOSF = A_ISVEC(VWDAOSF,(&QVDAOSF_line),32,A68_CHAR ) ;
XWDAOSF = WVDAOSF_l-=1 ;
YWDAOSF = (&A_VINDEX(WWDAOSF,XWDAOSF)) ;
(*YWDAOSF) = ' ';
} 
} 
 /* line 452: */
AXDAOSF = A_ISVEC(ZWDAOSF,(&QVDAOSF_line),32,A68_CHAR ) ;
KTDAOSF_putstr(Ch, A_VTRIM(BXDAOSF,(AXDAOSF),A_VTSCRIPT(&(BXDAOSF.upb),(AXDAOSF).upb,WVDAOSF_l,(AXDAOSF).upb)));
 /* line 453: */
 /* line 454: */
CXDAOSF = (&(Ch->Separate)) ;
(*CXDAOSF) = A68_TRUE;
} 
A_PROC_EXIT(add_number);
return;
} 
#undef NL

A68_VOID  GXDAOSF_add_bits(A68_92 * Ch, A68_BITS  B, A68_INT  Leng)
{ 
A68_145  HXDAOSF_line;
A68_INT  IXDAOSF_l;
A68_BITS  JXDAOSF_n;
A68_VC  LXDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MXDAOSF;  /* OPERATORS - simple index */
A68_INT  NXDAOSF;  /* YIELD */
A68_VC  PXDAOSF;  /* OPERATORS - simple index */
A68_INT  QXDAOSF;  /* YIELD */
A68_CHAR * RXDAOSF;  /* YIELD */
A68_BOOL  SXDAOSF;  /* clause result */
A68_INT  TXDAOSF;  /* SHR */
A68_INT  UXDAOSF;  /* to part of loop */
A68_INT  VXDAOSF;  /* loop control */
A68_VC  WXDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  XXDAOSF;  /* OPERATORS - simple index */
A68_INT  YXDAOSF;  /* YIELD */
A68_CHAR * ZXDAOSF;  /* YIELD */
A68_VC  AYDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  BYDAOSF;  /* OPERATORS - simple index */
A68_INT  CYDAOSF;  /* YIELD */
A68_CHAR * DYDAOSF;  /* YIELD */
A68_VC  EYDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  FYDAOSF;  /* OPERATORS - trim index */
A68_VC  GYDAOSF;  /* OPERATORS - trim index */
A68_BOOL * HYDAOSF;  /* YIELD */
A_PROC_ENTRY(add_bits);
 /* line 458: */
 /* line 459: */
{ 
 /* line 460: */
IXDAOSF_l = 33;
 /* line 461: */
JXDAOSF_n = B;
 /* line 462: */
for ( ;; )
{ 
 /* line 463: */
MXDAOSF = A_ISVEC(LXDAOSF,(&HXDAOSF_line),32,A68_CHAR ) ;
NXDAOSF = IXDAOSF_l-=1 ;
PXDAOSF = OXDAOSF ;
QXDAOSF = ((A68_INT )(A68_BITS )(JXDAOSF_n&0XfU)+1) ;
RXDAOSF = (&A_VINDEX(MXDAOSF,NXDAOSF)) ;
(*RXDAOSF) = A_VINDEX(PXDAOSF,QXDAOSF);
 /* line 464: */
 /* line 465: */
TXDAOSF = 4 ;
SXDAOSF = ((JXDAOSF_n = A_SHR(JXDAOSF_n,TXDAOSF))!=0X0U);
if ( !SXDAOSF ) break;
/*SKIP*/;
}
 /* line 466: */
UXDAOSF = ((Leng-33)+IXDAOSF_l);
for ( VXDAOSF = 1;
VXDAOSF <= UXDAOSF;
VXDAOSF += 1 )
{ 
XXDAOSF = A_ISVEC(WXDAOSF,(&HXDAOSF_line),32,A68_CHAR ) ;
YXDAOSF = IXDAOSF_l-=1 ;
ZXDAOSF = (&A_VINDEX(XXDAOSF,YXDAOSF)) ;
(*ZXDAOSF) = '0';
}
 /* line 467: */
if ( (*(&(Ch->Separate))) )
{ 
BYDAOSF = A_ISVEC(AYDAOSF,(&HXDAOSF_line),32,A68_CHAR ) ;
CYDAOSF = IXDAOSF_l-=1 ;
DYDAOSF = (&A_VINDEX(BYDAOSF,CYDAOSF)) ;
(*DYDAOSF) = ' ';
} 
 /* line 468: */
FYDAOSF = A_ISVEC(EYDAOSF,(&HXDAOSF_line),32,A68_CHAR ) ;
KTDAOSF_putstr(Ch, A_VTRIM(GYDAOSF,(FYDAOSF),A_VTSCRIPT(&(GYDAOSF.upb),(FYDAOSF).upb,IXDAOSF_l,(FYDAOSF).upb)));
 /* line 469: */
 /* line 470: */
HYDAOSF = (&(Ch->Separate)) ;
(*HYDAOSF) = A68_TRUE;
} 
A_PROC_EXIT(add_bits);
return;
} 
#undef NL

A68_VOID  KYDAOSF_put(A68_92 * Ch, A68_148  Out)
{ 
A68_122  LYDAOSF_elem;
A68_122 * MYDAOSF;  /* forall control - []x */
A68_INT  NYDAOSF;  /* forall loop counter */
A68_122  OYDAOSF;  /* united object - for case conformity */
A68_INT  PYDAOSF_n;
A68_71  QYDAOSF_vi;
A68_INT  RYDAOSF_i;
A68_INT * SYDAOSF;  /* forall control - []x */
A68_INT  TYDAOSF;  /* forall loop counter */
A68_BITS  UYDAOSF_bits;
A68_123  VYDAOSF_vb;
A68_BITS  WYDAOSF_b;
A68_BITS * XYDAOSF;  /* forall control - []x */
A68_INT  YYDAOSF;  /* forall loop counter */
A68_SBITS  ZYDAOSF_sb;
A68_REAL  AZDAOSF_re;
A68_125  BZDAOSF_vr;
A68_REAL  CZDAOSF_r;
A68_REAL * DZDAOSF;  /* forall control - []x */
A68_INT  EZDAOSF;  /* forall loop counter */
A68_CHAR  FZDAOSF_c;
A68_VC  GZDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HZDAOSF_vc;
A68_BOOL  IZDAOSF_bool;
A68_VC  JZDAOSF;  /* clause result */
A68_VC  KZDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LZDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_124  MZDAOSF_vecbool;
A68_BOOL  NZDAOSF_bool;
A68_BOOL * OZDAOSF;  /* forall control - []x */
A68_INT  PZDAOSF;  /* forall loop counter */
A68_VC  QZDAOSF;  /* clause result */
A68_VC  RZDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SZDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_113  TZDAOSF_iw;
A68_114  UZDAOSF_sw;
A68_INT  VZDAOSF_gap;
A68_BOOL  WZDAOSF;  /* optbool result */
A68_INT  XZDAOSF_ss;
A68_119  YZDAOSF;  /* avoid structure result */
A68_122  ZZDAOSF;  /* OPERATORS - mode -> union mode */
A68_148  AAEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_115  BAEAOSF_j;
A68_INT  CAEAOSF_ss;
A68_119  DAEAOSF;  /* avoid structure result */
A68_122  EAEAOSF;  /* OPERATORS - mode -> union mode */
A68_148  FAEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_116  GAEAOSF_t;
A68_INT  HAEAOSF;  /* clause result */
A68_INT  IAEAOSF;  /* ADICOPS - MOD */
A68_INT  JAEAOSF;  /* ADICOPS - MOD */
A68_INT  KAEAOSF;  /* ADICOPS - MOD */
A68_INT  LAEAOSF_tab;
A68_VC  MAEAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NAEAOSF;  /* OPERATORS - trim index */
A68_VC  OAEAOSF;  /* OPERATORS - trim index */
A68_117  PAEAOSF_p;
A68_INT  QAEAOSF;  /* ADICOPS - MOD */
A68_INT  RAEAOSF;  /* ADICOPS - MOD */
A68_INT  SAEAOSF;  /* ADICOPS - MOD */
A68_INT  TAEAOSF_pos;
A68_116  UAEAOSF;  /* avoid structure result */
A68_122  VAEAOSF;  /* OPERATORS - mode -> union mode */
A68_148  WAEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_118  XAEAOSF_a;
A68_116  YAEAOSF;  /* avoid structure result */
A68_122  ZAEAOSF;  /* OPERATORS - mode -> union mode */
A68_148  ABEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_119  BBEAOSF_s;
A68_VC  CBEAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  DBEAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  EBEAOSF;  /* OPERATORS - trim index */
A68_VC  FBEAOSF;  /* OPERATORS - trim index */
A68_82  HBEAOSF_generator;   /* proc value of non-global proc */
A68_VC  NBEAOSF;  /* avoid structure result */
A68_VC  MBEAOSF_lsp;
A68_CHAR * OBEAOSF_sc;
A68_INT  PBEAOSF;  /* forall loop counter */
A68_120  QBEAOSF_l;
A68_INT  RBEAOSF;  /* to part of loop */
A68_INT  SBEAOSF;  /* loop control */
A68_121  TBEAOSF_in;
A68_INT  UBEAOSF;  /* clause result */
A68_VC  VBEAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WBEAOSF;  /* OPERATORS - istruct -> vector */
A68_INT * XBEAOSF;  /* YIELD */
A68_96  YBEAOSF_proc;
A68_126  ZBEAOSF_struct;
A68_INT  ACEAOSF_i;
A68_INT  BCEAOSF;  /* to part of loop */
A68_126  CCEAOSF;  /* OPERATORS - straight index */
A68_122  DCEAOSF;  /* OPERATORS - straight index result */
A68_148  ECEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(put);
 /* line 474: */
 /* line 475: */
NYDAOSF = Out.upb -1;
MYDAOSF = Out.data;
for (;NYDAOSF-- >= 0;
(MYDAOSF++
) )
{
LYDAOSF_elem = *MYDAOSF;
 /* line 476: */
OYDAOSF = LYDAOSF_elem ;
switch ( OYDAOSF.mode )
{ 
case 1: /* INT */
PYDAOSF_n = (OYDAOSF.data.mode1);
 /* line 477: */
 /* line 478: */
PVDAOSF_add_number(Ch, PYDAOSF_n, 0);
break;
case 2: /* VECTOR [] INT */
QYDAOSF_vi = (OYDAOSF.data.mode2);
 /* line 479: */
TYDAOSF = QYDAOSF_vi.upb -1;
SYDAOSF = QYDAOSF_vi.data;
for (;TYDAOSF-- >= 0;
(SYDAOSF++
) )
{
RYDAOSF_i = *SYDAOSF;
PVDAOSF_add_number(Ch, RYDAOSF_i, 0);
}
 /* line 480: */
break;
case 3: /* BITS */
UYDAOSF_bits = (OYDAOSF.data.mode3);
 /* line 481: */
 /* line 482: */
GXDAOSF_add_bits(Ch, UYDAOSF_bits, 8);
break;
case 4: /* VECTOR [] BITS */
VYDAOSF_vb = (OYDAOSF.data.mode4);
 /* line 483: */
YYDAOSF = VYDAOSF_vb.upb -1;
XYDAOSF = VYDAOSF_vb.data;
for (;YYDAOSF-- >= 0;
(XYDAOSF++
) )
{
WYDAOSF_b = *XYDAOSF;
GXDAOSF_add_bits(Ch, WYDAOSF_b, 8);
}
 /* line 484: */
break;
case 5: /* SHORT BITS */
ZYDAOSF_sb = (OYDAOSF.data.mode5);
 /* line 485: */
 /* line 486: */
GXDAOSF_add_bits(Ch, (A68_BITS )ZYDAOSF_sb, 4);
break;
case 10: /* REAL */
AZDAOSF_re = (OYDAOSF.data.mode10);
 /* line 487: */
 /* line 488: */
FVDAOSF_add_real(Ch, AZDAOSF_re, (-12), 5);
break;
case 11: /* VECTOR [] REAL */
BZDAOSF_vr = (OYDAOSF.data.mode11);
 /* line 489: */
EZDAOSF = BZDAOSF_vr.upb -1;
DZDAOSF = BZDAOSF_vr.data;
for (;EZDAOSF-- >= 0;
(DZDAOSF++
) )
{
CZDAOSF_r = *DZDAOSF;
FVDAOSF_add_real(Ch, CZDAOSF_r, (-12), 5);
}
 /* line 490: */
break;
case 6: /* CHAR */
FZDAOSF_c = (OYDAOSF.data.mode6);
 /* line 491: */
 /* line 492: */
KTDAOSF_putstr(Ch, A_HVEC(GZDAOSF,FZDAOSF_c,A68_CHAR ));
break;
case 7: /* VECTOR [] CHAR */
HZDAOSF_vc = (OYDAOSF.data.mode7);
 /* line 493: */
 /* line 494: */
KTDAOSF_putstr(Ch, HZDAOSF_vc);
break;
case 8: /* BOOL */
IZDAOSF_bool = (OYDAOSF.data.mode8);
 /* line 495: */
if ( IZDAOSF_bool )
{ 
JZDAOSF = A_HVEC(KZDAOSF,'T',A68_CHAR );
} 
else
{ 
JZDAOSF = A_HVEC(LZDAOSF,'F',A68_CHAR );
} 
 /* line 496: */
KTDAOSF_putstr(Ch, JZDAOSF);
break;
case 9: /* VECTOR [] BOOL */
MZDAOSF_vecbool = (OYDAOSF.data.mode9);
 /* line 497: */
 /* line 498: */
PZDAOSF = MZDAOSF_vecbool.upb -1;
OZDAOSF = MZDAOSF_vecbool.data;
for (;PZDAOSF-- >= 0;
(OZDAOSF++
) )
{
NZDAOSF_bool = *OZDAOSF;
if ( NZDAOSF_bool )
{ 
QZDAOSF = A_HVEC(RZDAOSF,'T',A68_CHAR );
} 
else
{ 
QZDAOSF = A_HVEC(SZDAOSF,'F',A68_CHAR );
} 
KTDAOSF_putstr(Ch, QZDAOSF);
}
 /* line 499: */
break;
case 13: /* STRUCT(INT,INT)  */
TZDAOSF_iw = (OYDAOSF.data.mode13);
 /* line 500: */
 /* line 501: */
PVDAOSF_add_number(Ch, TZDAOSF_iw.Int, TZDAOSF_iw.Width);
break;
case 14: /* STRUCT(MODE26,INT)  */
UZDAOSF_sw = (OYDAOSF.data.mode14);
 /* line 502: */
{ 
VZDAOSF_gap = (((*(&(Ch->Width)))-(*(&(Ch->Charnumber))))-1);
 /* line 503: */
KTDAOSF_putstr(Ch, UZDAOSF_sw.Str);
 /* line 504: */
WZDAOSF = (VZDAOSF_gap>=UZDAOSF_sw.Width);
if ( ! WZDAOSF )
{ /* line 505: */
WZDAOSF = (VZDAOSF_gap<UZDAOSF_sw.Str.upb);
}
if ( WZDAOSF )
{ 
XZDAOSF_ss = (UZDAOSF_sw.Width-UZDAOSF_sw.Str.upb);
 /* line 506: */
if ( (XZDAOSF_ss>0) )
{ 
 /* line 507: */
 /* line 508: */
 /* line 509: */
GSDAOSF_spaces( XZDAOSF_ss, &YZDAOSF );
KYDAOSF_put(Ch, A_HVEC(AAEAOSF,A_UNITE(ZZDAOSF,mode19,19,YZDAOSF),A68_122 ));
} 
} 
} 
break;
case 15: /* STRUCT(MODE26,INT)  */
BAEAOSF_j = (OYDAOSF.data.mode15);
 /* line 510: */
{ 
 /* line 511: */
if ( (BAEAOSF_j.Justify>=((*(&(Ch->Width)))-(*(&(Ch->Charnumber))))) )
{ 
 /* line 512: */
PKDAOSF_newline(Ch);
} 
 /* line 513: */
CAEAOSF_ss = (BAEAOSF_j.Justify-BAEAOSF_j.Str.upb);
 /* line 514: */
if ( (CAEAOSF_ss>0) )
{ 
GSDAOSF_spaces( CAEAOSF_ss, &DAEAOSF );
KYDAOSF_put(Ch, A_HVEC(FAEAOSF,A_UNITE(EAEAOSF,mode19,19,DAEAOSF),A68_122 ));
} 
 /* line 515: */
 /* line 516: */
 /* line 517: */
KTDAOSF_putstr(Ch, BAEAOSF_j.Str);
} 
break;
case 16: /* STRUCT(INT)  */
GAEAOSF_t = (OYDAOSF.data.mode16);
 /* line 518: */
{ 
 /* line 519: */
if ( (GAEAOSF_t.Tab>1) )
{ 
 /* line 520: */
 /* line 521: */
JAEAOSF = ((*(&(Ch->Charnumber)))-1) ;
KAEAOSF = GAEAOSF_t.Tab ;
HAEAOSF = (GAEAOSF_t.Tab-A_MOD(JAEAOSF,KAEAOSF,IAEAOSF));
} 
else
{ 
HAEAOSF = 0;
} 
LAEAOSF_tab = HAEAOSF;
 /* line 522: */
 /* line 523: */
if ( (((*(&(Ch->Charnumber)))+LAEAOSF_tab)>(*(&(Ch->Width)))) )
{ 
 /* line 524: */
PKDAOSF_newline(Ch);
} 
else
{ 
 /* line 525: */
 /* line 526: */
 /* line 527: */
NAEAOSF = A_ISVEC(MAEAOSF,(&WQDAOSF_sp),512,A68_CHAR ) ;
KTDAOSF_putstr(Ch, A_VTRIM(OAEAOSF,(NAEAOSF),A_VTSCRIPT(&(OAEAOSF.upb),(NAEAOSF).upb,1,LAEAOSF_tab)));
} 
} 
break;
case 17: /* STRUCT(INT)  */
PAEAOSF_p = (OYDAOSF.data.mode17);
 /* line 528: */
{ 
RAEAOSF = PAEAOSF_p.Pos ;
SAEAOSF = (*(&(Ch->Width))) ;
TAEAOSF_pos = A_MOD(RAEAOSF,SAEAOSF,QAEAOSF);
 /* line 529: */
 /* line 530: */
if ( ((*(&(Ch->Charnumber)))!=(TAEAOSF_pos+1)) )
{ 
if ( ((*(&(Ch->Charnumber)))>(TAEAOSF_pos+1)) )
{ 
PKDAOSF_newline(Ch);
} 
 /* line 531: */
 /* line 532: */
 /* line 533: */
 /* line 534: */
RRDAOSF_tab( TAEAOSF_pos, &UAEAOSF );
KYDAOSF_put(Ch, A_HVEC(WAEAOSF,A_UNITE(VAEAOSF,mode16,16,UAEAOSF),A68_122 ));
} 
} 
break;
case 18: /* STRUCT(INT)  */
XAEAOSF_a = (OYDAOSF.data.mode18);
 /* line 535: */
{ 
 /* line 536: */
if ( ((*(&(Ch->Charnumber)))<XAEAOSF_a.After) )
{ 
 /* line 537: */
RRDAOSF_tab( XAEAOSF_a.After, &YAEAOSF );
KYDAOSF_put(Ch, A_HVEC(ABEAOSF,A_UNITE(ZAEAOSF,mode16,16,YAEAOSF),A68_122 ));
} 
else
{ 
 /* line 538: */
if ( ((*(&(Ch->Charnumber)))<=(*(&(Ch->Width)))) )
{ 
 /* line 539: */
 /* line 540: */
 /* line 541: */
KTDAOSF_putstr(Ch, YHDAOSF_space_str);
} 
} 
} 
break;
case 19: /* STRUCT(INT)  */
BBEAOSF_s = (OYDAOSF.data.mode19);
 /* line 542: */
{ 
 /* line 543: */
if ( ((BBEAOSF_s.Spaces+(*(&(Ch->Charnumber))))>(*(&(Ch->Width)))) )
{ 
 /* line 544: */
PKDAOSF_newline(Ch);
} 
else
{ 
 /* line 545: */
if ( (BBEAOSF_s.Spaces<=A_HISVEC(CBEAOSF,WQDAOSF_sp,512,A68_CHAR ).upb) )
{ 
 /* line 546: */
EBEAOSF = A_ISVEC(DBEAOSF,(&WQDAOSF_sp),512,A68_CHAR ) ;
KTDAOSF_putstr(Ch, A_VTRIM(FBEAOSF,(EBEAOSF),A_VTSCRIPT(&(FBEAOSF.upb),(EBEAOSF).upb,1,BBEAOSF_s.Spaces)));
} 
else
{ 
A_CLOSURE( HBEAOSF_generator, IBEAOSF_generator, JBEAOSF_generator );
(( JBEAOSF_generator * ) ( HBEAOSF_generator.nonlocals )) -> BBEAOSF_s = BBEAOSF_s;
A_CALLPROC(HBEAOSF_generator,(A68_TRUE, &NBEAOSF),(A68_TRUE, &NBEAOSF,(HBEAOSF_generator).nonlocals));
MBEAOSF_lsp = NBEAOSF;
 /* line 547: */
PBEAOSF = MBEAOSF_lsp.upb -1;
OBEAOSF_sc = MBEAOSF_lsp.data;
for (;PBEAOSF-- >= 0;
(OBEAOSF_sc++
) )
{
(*OBEAOSF_sc) = ' ';
}
 /* line 548: */
 /* line 549: */
 /* line 550: */
 /* line 551: */
KTDAOSF_putstr(Ch, MBEAOSF_lsp);
} 
} 
} 
break;
case 20: /* STRUCT(INT)  */
QBEAOSF_l = (OYDAOSF.data.mode20);
 /* line 552: */
RBEAOSF = QBEAOSF_l.Lines;
for ( SBEAOSF = 1;
SBEAOSF <= RBEAOSF;
SBEAOSF += 1 )
{ 
PKDAOSF_newline(Ch);
}
 /* line 553: */
break;
case 21: /* STRUCT(INT)  */
TBEAOSF_in = (OYDAOSF.data.mode21);
 /* line 554: */
 /* line 555: */
if ( (TBEAOSF_in.Indent>((*(&(Ch->Width)))-20)) )
{ 
 /* line 556: */
UBEAOSF = ((*(&(Ch->Width)))-20);
} 
else
{ 
 /* line 557: */
 /* line 558: */
if ( (TBEAOSF_in.Indent>A_HISVEC(VBEAOSF,WQDAOSF_sp,512,A68_CHAR ).upb) )
{ 
 /* line 559: */
UBEAOSF = A_HISVEC(WBEAOSF,WQDAOSF_sp,512,A68_CHAR ).upb;
} 
else
{ 
UBEAOSF = TBEAOSF_in.Indent;
} 
} 
 /* line 560: */
XBEAOSF = (&(Ch->Indent)) ;
(*XBEAOSF) = UBEAOSF;
break;
case 12: /* PROC(REF MODE92) VOID */
YBEAOSF_proc = (OYDAOSF.data.mode12);
 /* line 561: */
 /* line 562: */
A_CALLPROC(YBEAOSF_proc,(Ch),(Ch,(YBEAOSF_proc).nonlocals));
break;
case 22: /* STRAIGHT MODE122 */
ZBEAOSF_struct = (OYDAOSF.data.mode22);
 /* line 563: */
BCEAOSF = ZBEAOSF_struct.upb;
for ( ACEAOSF_i = 1;
ACEAOSF_i <= BCEAOSF;
ACEAOSF_i += 1 )
{ 
KYDAOSF_put(Ch, A_HVEC(ECEAOSF,A_STRINDEX_RTN(ZBEAOSF_struct,ACEAOSF_i,CCEAOSF,DCEAOSF),A68_122 ));
}
 /* line 564: */
 /* line 565: */
break;
default: 
A_IMP_SKIP ;
break;
} 
}
A_PROC_EXIT(put);
return;
} 
#undef NL

A68_VOID  JCEAOSF_putb(A68_VC  Buffer, A68_148  Line, A68_VC  *ReturnedValue)
{ 
A68_92  KCEAOSF;  /* collateral clause result */
A68_77  LCEAOSF;  /* procedure value */
A68_93  MCEAOSF;  /* procedure value */
A68_92  NCEAOSF_ch;
A68_VC  OCEAOSF;  /* clause result */
A68_VC  PCEAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(putb);
 /* line 572: */
 /* line 576: */
{ 
KCEAOSF.Charnumber = 1;
KCEAOSF.Linenumber = 0;
KCEAOSF.Indent = 0;
KCEAOSF.Width = (Buffer.upb-1);
KCEAOSF.Sizeincr = 0;
 /* line 577: */
KCEAOSF.Status = OUBAOSF_io_ok;
KCEAOSF.Buffer = Buffer;
KCEAOSF.Buffered = A68_TRUE;
KCEAOSF.Separate = A68_FALSE;
KCEAOSF.Input = A68_FALSE;
LCEAOSF.fn.fn_global = TIDAOSF_nullputbuffer;
LCEAOSF.nonlocals = A68_NIL;
KCEAOSF.Putbuffer = LCEAOSF;
MCEAOSF.fn.fn_global = WIDAOSF_nullgetbuffer;
MCEAOSF.nonlocals = A68_NIL;
KCEAOSF.Getbuffer = MCEAOSF;
NCEAOSF_ch = KCEAOSF;
 /* line 578: */
KYDAOSF_put((&NCEAOSF_ch), Line);
 /* line 579: */
 /* line 580: */
OCEAOSF = A_VTRIM(PCEAOSF,(Buffer),A_VTSCRIPT(&(PCEAOSF.upb),(Buffer).upb,1,((*(&((&NCEAOSF_ch)->Charnumber)))-1)));
} 
A_PROC_EXIT(putb);
*ReturnedValue = (OCEAOSF);
return;
} 
#undef NL

A68_VOID  RCEAOSF_endput(A68_92 * Ch, A68_VC  *ReturnedValue)
{ 
A68_VC  SCEAOSF;  /* OPERATORS - trim index */
A68_VC  TCEAOSF;  /* OPERATORS - trim index */
A68_VC  UCEAOSF_ans;
A68_INT * VCEAOSF;  /* YIELD */
A68_VC  WCEAOSF;  /* clause result */
A_PROC_ENTRY(endput);
 /* line 584: */
 /* line 586: */
{ 
SCEAOSF = (*(&(Ch->Buffer))) ;
UCEAOSF_ans = A_VTRIM(TCEAOSF,(SCEAOSF),A_VTSCRIPT(&(TCEAOSF.upb),(SCEAOSF).upb,1,((*(&(Ch->Charnumber)))-1)));
 /* line 587: */
VCEAOSF = (&(Ch->Charnumber)) ;
(*VCEAOSF) = 1;
 /* line 588: */
 /* line 589: */
WCEAOSF = UCEAOSF_ans;
} 
A_PROC_EXIT(endput);
*ReturnedValue = (WCEAOSF);
return;
} 
#undef NL

A68_VOID  YCEAOSF_oneline(A68_148  Out, A68_VC  *ReturnedValue)
{ 
A68_153  BDEAOSF_buff;
A68_92  CDEAOSF;  /* collateral clause result */
A68_VC  DDEAOSF;  /* OPERATORS - istruct -> vector */
A68_77  EDEAOSF;  /* procedure value */
A68_93  FDEAOSF;  /* procedure value */
A68_92  GDEAOSF_ch;
A68_77  IDEAOSF_putbuffer;   /* proc value of non-global proc */
A68_jmp_buf ZCEAOSF_restart;
A68_77 * UDEAOSF;  /* YIELD */
A68_VC  VDEAOSF;  /* clause result */
A68_VC  WDEAOSF;  /* OPERATORS - trim index */
A68_VC  XDEAOSF;  /* OPERATORS - trim index */
A68_VC  YDEAOSF;  /* avoid structure result */
if ( sigsetjmp( ZCEAOSF_restart.label,1) ) goto ADEAOSF_restart;
A_PROC_ENTRY(oneline);
 /* line 593: */
 /* line 594: */
{ 
 /* line 595: */
CDEAOSF.Charnumber = 1;
CDEAOSF.Linenumber = 0;
CDEAOSF.Indent = 0;
CDEAOSF.Width = 500;
CDEAOSF.Sizeincr = 0;
CDEAOSF.Status = OUBAOSF_io_ok;
CDEAOSF.Buffer = A_ISVEC(DDEAOSF,(&BDEAOSF_buff),501,A68_CHAR );
CDEAOSF.Buffered = A68_TRUE;
CDEAOSF.Separate = A68_FALSE;
 /* line 596: */
CDEAOSF.Input = A68_FALSE;
EDEAOSF.fn.fn_global = TIDAOSF_nullputbuffer;
EDEAOSF.nonlocals = A68_NIL;
CDEAOSF.Putbuffer = EDEAOSF;
FDEAOSF.fn.fn_global = WIDAOSF_nullgetbuffer;
FDEAOSF.nonlocals = A68_NIL;
CDEAOSF.Getbuffer = FDEAOSF;
GDEAOSF_ch = CDEAOSF;
 /* line 598: */
A_CLOSURE( IDEAOSF_putbuffer, JDEAOSF_putbuffer, KDEAOSF_putbuffer );
(( KDEAOSF_putbuffer * ) ( IDEAOSF_putbuffer.nonlocals )) -> GDEAOSF_ch = (&GDEAOSF_ch);
(( KDEAOSF_putbuffer * ) ( IDEAOSF_putbuffer.nonlocals )) -> ZCEAOSF_restart = ZCEAOSF_restart;
 /* line 605: */
UDEAOSF = (&((&GDEAOSF_ch)->Putbuffer)) ;
(*UDEAOSF) = IDEAOSF_putbuffer;
 /* line 607: */
ADEAOSF_restart:
 /* line 608: */
KYDAOSF_put((&GDEAOSF_ch), Out);
 /* line 609: */
 /* line 610: */
WDEAOSF = (*(&((&GDEAOSF_ch)->Buffer))) ;
ZCAAOSF_makervc( A_VTRIM(XDEAOSF,(WDEAOSF),A_VTSCRIPT(&(XDEAOSF.upb),(WDEAOSF).upb,1,((*(&((&GDEAOSF_ch)->Charnumber)))-1))), &YDEAOSF );
VDEAOSF = YDEAOSF;
} 
A_PROC_EXIT(oneline);
*ReturnedValue = (VDEAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void QMDAOSF(void)   /* initialise DECS putstrings */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel","putstrings.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/iobasics.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/numberstr.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/strops.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_127  OQDAOSF;  /* procedure value */
A68_128  VQDAOSF;  /* procedure value */
A68_VC  YQDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ZQDAOSF;  /* forall yield */
A68_INT  ARDAOSF;  /* forall loop counter */
A68_77  GCEAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
KGDAOSF();   /* USE iobasics */
ZTCAOSF();   /* USE numberstr */
BCAAOSF();   /* USE strops */
CSCAOSF();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/putstrings.a68";
A_config.translation_time = "Wed Apr 21 16:34:02 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "PMDAOSF (from seed file) ";
A_config.spec_change_time = "Wed Apr 21 16:34:02 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS putstrings);
UEAALIB_a68config(LGAALIB_configinfo, UMDAOSF);
 /* line 218: */
 /* line 219: */
 /* line 226: */
 /* line 227: */
 /* line 229: */
 /* line 230: */
 /* line 248: */
 /* line 250: */
 /* line 257: */
 /* line 265: */
 /* line 292: */
 /* line 308: */
OQDAOSF.fn.fn_global = JQDAOSF_generator;
OQDAOSF.nonlocals = A68_NIL;
GQDAOSF_anonymous = OQDAOSF;
VQDAOSF.fn.fn_global = QQDAOSF_generator;
VQDAOSF.nonlocals = A68_NIL;
HQDAOSF_anonymous = VQDAOSF;
 /* line 311: */
 /* line 312: */
ZQDAOSF = A_ISVEC(YQDAOSF,(&WQDAOSF_sp),512,A68_CHAR ) ;
ARDAOSF = ZQDAOSF.upb -1;
XQDAOSF_ss = ZQDAOSF.data;
for (;ARDAOSF-- >= 0;
(XQDAOSF_ss++
) )
{
(*XQDAOSF_ss) = ' ';
}
 /* line 315: */
 /* line 316: */
 /* line 317: */
 /* line 318: */
 /* line 319: */
 /* line 320: */
 /* line 321: */
 /* line 322: */
 /* line 323: */
 /* line 324: */
 /* line 327: */
 /* line 341: */
 /* line 411: */
 /* line 417: */
 /* line 433: */
 /* line 457: */
 /* line 473: */
 /* line 568: */
GCEAOSF.fn.fn_global = TIDAOSF_nullputbuffer;
GCEAOSF.nonlocals = A68_NIL;
FCEAOSF_null_strproc = GCEAOSF;
 /* line 571: */
 /* line 583: */
 /* line 592: */
 /* line 612: */
 /* line 614: */
 /* line 626: */
/*SKIP*/;
A_PROC_EXIT(DECS putstrings);
} 
#undef NL
/* end of translation of putstrings.a68 */
