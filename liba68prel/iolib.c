/* UNAME:WKEAOSF */
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

A_PROCEDURE(A68_VOID ,A68t83,(A68_BOOL ,struct A68t33 *),(A68_BOOL ,struct A68t33 *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(BOOL) MODE33 */
A_VECTOR(struct A68t86 ,A68t85);
typedef struct A68t85  A68_85 ;    /* VECTOR [] MODE86 */
struct A68t86{
A68_INT  Number;
A_PAD_INT(PAD_16)
A68_BITS  Class;
A_PAD_BITS(PAD_17)
A68_VC  Text;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t84{
A68_VC  Name;
struct A68t35  Messages;
A68_BOOL * Initialised;
struct A68t85  Setup;
};
typedef struct A68t84  A68_84 ;    /* STRUCT(MODE26,REF MODE35,REF BOOL,MODE85)  */

A_PROCEDURE(A68_VOID ,A68t87,(A68_BOOL ,struct A68t84 *),(A68_BOOL ,struct A68t84 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(BOOL) MODE84 */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t89);
typedef struct A68t89  A68_89 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t33 ,struct A68t89 *),(struct A68t33 ,struct A68t89 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE33) MODE89 */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t89 ,struct A68t33 *),(struct A68t89 ,struct A68t33 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE89) MODE33 */
struct A68t93 ;

A_PROCEDURE(A68_BOOL ,A68t92,(struct A68t93 ),(struct A68t93 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE93) BOOL */
struct A68t93 { A68_INT mode; union {
struct A68t32  mode1;
struct A68t36  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t93  A68_93 ;    /* UNION(MODE32,MODE36)  */

A_PROCEDURE(A68_INT ,A68t94,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE32) INT */

A_PROCEDURE(A68_VOID ,A68t95,(A68_INT ,struct A68t84 ,struct A68t32 *),(A68_INT ,struct A68t84 ,struct A68t32 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT,MODE84) MODE32 */

A_PROCEDURE(A68_BOOL ,A68t96,(struct A68t32 ,struct A68t84 ),(struct A68t32 ,struct A68t84 ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE32,MODE84) BOOL */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t32 ,struct A68t33 ,struct A68t36 *),(struct A68t32 ,struct A68t33 ,struct A68t36 *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE32,MODE33) MODE36 */

A_PROCEDURE(A68_VOID ,A68t98,(A68_BOOL ,struct A68t71 *),(A68_BOOL ,struct A68t71 *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(BOOL) MODE71 */

A_PROCEDURE(A68_VOID ,A68t100,(A68_VC ,A68_INT *,struct A68t38 *),(A68_VC ,A68_INT *,struct A68t38 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(REF MODE26,REF INT) MODE38 */
struct A68t99{
A68_INT  Charnumber;
A_PAD_INT(PAD_18)
A68_INT  Linenumber;
A_PAD_INT(PAD_19)
A68_INT  Indent;
A_PAD_INT(PAD_20)
A68_INT  Width;
A_PAD_INT(PAD_21)
A68_INT  Sizeincr;
A_PAD_INT(PAD_22)
struct A68t38  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_23)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_24)
A68_BOOL  Input;
A_PAD_BOOL(PAD_25)
struct A68t77  Putbuffer;
struct A68t100  Getbuffer;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE38,REF MODE26,BOOL,BOOL,BOOL,MODE77,MODE100)  */

A_PROCEDURE(A68_VOID ,A68t101,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t102,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t71 ,struct A68t71 *),(struct A68t71 ,struct A68t71 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE71) REF MODE71 */

A_PROCEDURE(A68_VOID ,A68t104,(A68_INT ,struct A68t71 *),(A68_INT ,struct A68t71 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT) REF MODE71 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ),(A68_VC ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t106,(struct A68t71 ),(struct A68t71 ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t33 ,A68_VC *),(struct A68t33 ,A68_VC *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE33) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t108,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t109,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t111 ;

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t111 ,A68_VC *),(struct A68t111 ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE111) MODE26 */
struct A68t111 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t111  A68_111 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t112,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_BITS ,A68t114);
typedef struct A68t114  A68_114 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t115);
typedef struct A68t115  A68_115 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t116);
typedef struct A68t116  A68_116 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t99 *),(struct A68t99 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE99) VOID */
struct A68t118{
A68_INT  Int;
A_PAD_INT(PAD_26)
A68_INT  Width;
A_PAD_INT(PAD_27)
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,INT)  */
struct A68t119{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_28)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(MODE26,INT)  */
struct A68t120{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_29)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(MODE26,INT)  */
struct A68t121{
A68_INT  Tab;
A_PAD_INT(PAD_30)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */
struct A68t122{
A68_INT  Pos;
A_PAD_INT(PAD_31)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT)  */
struct A68t123{
A68_INT  After;
A_PAD_INT(PAD_32)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT)  */
struct A68t124{
A68_INT  Spaces;
A_PAD_INT(PAD_33)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT)  */
struct A68t125{
A68_INT  Lines;
A_PAD_INT(PAD_34)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT)  */
struct A68t126{
A68_INT  Indent;
A_PAD_INT(PAD_35)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t127);
typedef struct A68t127  A68_127 ;    /* STRAIGHT MODE113 */
struct A68t113 { A68_INT mode; union {
A68_INT  mode1;
struct A68t71  mode2;
A68_BITS  mode3;
struct A68t114  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t115  mode9;
A68_REAL  mode10;
struct A68t116  mode11;
struct A68t117  mode12;
struct A68t118  mode13;
struct A68t119  mode14;
struct A68t120  mode15;
struct A68t121  mode16;
struct A68t122  mode17;
struct A68t123  mode18;
struct A68t124  mode19;
struct A68t125  mode20;
struct A68t126  mode21;
struct A68t127  mode22;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t113  A68_113 ;    /* UNION(INT,MODE71,BITS,MODE114,SHORT BITS,CHAR,MODE26,BOOL,MODE115,REAL,MODE116,MODE117,MODE118,MODE119,MODE120,MODE121,MODE122,MODE123,MODE124,MODE125,MODE126,MODE127)  */

A_PROCEDURE(A68_VOID ,A68t128,(A68_BOOL ,struct A68t119 *),(A68_BOOL ,struct A68t119 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(BOOL) MODE119 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_BOOL ,struct A68t120 *),(A68_BOOL ,struct A68t120 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(BOOL) MODE120 */

A_PROCEDURE(A68_INT ,A68t130,(struct A68t99 *),(struct A68t99 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE99) INT */

A_PROCEDURE(A68_INT ,A68t131,(struct A68t99 *,A68_INT ),(struct A68t99 *,A68_INT ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE99,INT) INT */

A_PROCEDURE(A68_VOID ,A68t132,(A68_INT ,A68_INT ,struct A68t118 *),(A68_INT ,A68_INT ,struct A68t118 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(INT,INT) MODE118 */

A_PROCEDURE(A68_VOID ,A68t133,(A68_VC ,A68_INT ,struct A68t119 *),(A68_VC ,A68_INT ,struct A68t119 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE26,INT) MODE119 */

A_PROCEDURE(A68_VOID ,A68t134,(A68_VC ,A68_INT ,struct A68t120 *),(A68_VC ,A68_INT ,struct A68t120 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE26,INT) MODE120 */

A_PROCEDURE(A68_VOID ,A68t135,(A68_INT ,struct A68t121 *),(A68_INT ,struct A68t121 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(INT) MODE121 */

A_PROCEDURE(A68_VOID ,A68t136,(A68_INT ,struct A68t122 *),(A68_INT ,struct A68t122 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT) MODE122 */

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT) MODE123 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ,struct A68t124 *),(A68_INT ,struct A68t124 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT) MODE124 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,struct A68t125 *),(A68_INT ,struct A68t125 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT) MODE125 */

A_PROCEDURE(A68_VOID ,A68t140,(A68_INT ,struct A68t126 *),(A68_INT ,struct A68t126 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT) MODE126 */

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t99 *,A68_VC ),(struct A68t99 *,A68_VC ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(REF MODE99,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t99 *,A68_INT ,A68_INT ),(struct A68t99 *,A68_INT ,A68_INT ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF MODE99,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t99 *,A68_BITS ,A68_INT ),(struct A68t99 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF MODE99,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t99 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t99 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE99,REAL,INT,INT) VOID */
struct A68t146 ;

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t99 *,struct A68t146 ),(struct A68t99 *,struct A68t146 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE99,MODE146) VOID */
A_VECTOR(struct A68t113 ,A68t146);
typedef struct A68t146  A68_146 ;    /* VECTOR [] MODE113 */
struct A68t148 ;
struct A68t149 ;

A_PROCEDURE(struct A68t99 *,A68t147,(struct A68t148 ,struct A68t149 ),(struct A68t148 ,struct A68t149 ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE148,MODE149) REF MODE99 */
struct A68t148 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t148  A68_148 ;    /* UNION(INT,REF MODE26)  */
struct A68t149 { A68_INT mode; union {
struct A68t77  mode1;
struct A68t100  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t149  A68_149 ;    /* UNION(MODE77,MODE100)  */

A_PROCEDURE(A68_VOID ,A68t150,(A68_VC ,struct A68t146 ,A68_VC *),(A68_VC ,struct A68t146 ,A68_VC *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE26,MODE146) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t99 *,A68_VC *),(struct A68t99 *,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE99) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t146 ,A68_VC *),(struct A68t146 ,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE146) REF MODE26 */
A_ROW(A68_INT ,A68t154,1);
typedef struct A68t154  A68_154 ;    /* [] INT */
A_ROW(A68_BITS ,A68t155,1);
typedef struct A68t155  A68_155 ;    /* [] BITS */
A_ROW(A68_BOOL ,A68t156,1);
typedef struct A68t156  A68_156 ;    /* [] BOOL */
A_ROW(A68_REAL ,A68t157,1);
typedef struct A68t157  A68_157 ;    /* [] REAL */
A_STRAIGHT(A68_VOID,A68t158);
typedef struct A68t158  A68_158 ;    /* STRAIGHT MODE153 */
struct A68t153 { A68_INT mode; union {
A68_INT * mode1;
struct A68t71  mode2;
struct A68t154  mode3;
A68_BITS * mode4;
struct A68t114  mode5;
struct A68t155  mode6;
A68_CHAR * mode7;
A68_VC  mode8;
A68_RC  mode9;
A68_BOOL * mode10;
struct A68t115  mode11;
struct A68t156  mode12;
A68_REAL * mode13;
struct A68t116  mode14;
struct A68t157  mode15;
struct A68t117  mode16;
struct A68t158  mode17;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t153  A68_153 ;    /* UNION(REF INT,REF MODE71,REF MODE154,REF BITS,REF MODE114,REF MODE155,REF CHAR,REF MODE26,REF MODE27,REF BOOL,REF MODE115,REF MODE156,REF REAL,REF MODE116,REF MODE157,MODE117,MODE158)  */

A_PROCEDURE(A68_CHAR ,A68t159,(struct A68t99 *),(struct A68t99 *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE99) CHAR */

A_PROCEDURE(A68_REAL ,A68t160,(struct A68t99 *),(struct A68t99 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE99) REAL */

A_PROCEDURE(A68_BOOL ,A68t161,(struct A68t99 *),(struct A68t99 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE99) BOOL */

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t99 *,A68_VC *),(struct A68t99 *,A68_VC *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE99) MODE26 */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t99 *,struct A68t38 *),(struct A68t99 *,struct A68t38 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE99) MODE38 */
struct A68t165 ;

A_PROCEDURE(A68_BOOL ,A68t164,(struct A68t99 *,struct A68t165 ),(struct A68t99 *,struct A68t165 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF MODE99,MODE165) BOOL */
A_VECTOR(struct A68t153 ,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] MODE153 */

A_PROCEDURE(A68_VOID ,A68t166,(A68_INT ,struct A68t38 *),(A68_INT ,struct A68t38 *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(INT) MODE38 */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t74 ),(struct A68t74 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE74) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,1024,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 1024 CHAR */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t146 ),(struct A68t146 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE146) VOID */

A_PROCEDURE(A68_BOOL ,A68t172,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE165) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  ABAALIB_a68init(struct A68t74 );
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from getstrings --- */
extern A68_99 * BJDAOSF_make_channel(struct A68t148 ,struct A68t149 );
extern A68_BOOL  EJEAOSF_get(struct A68t99 *,struct A68t165 );
/* --- End of imports from getstrings --- */


/* --- Imports from putstrings --- */
extern A68_VOID  KYDAOSF_put(struct A68t99 *,struct A68t146 );
/* --- End of imports from putstrings --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_31  TIBAOSF_global_msg;
extern A68_37 * TSBAOSF_stdin;
extern A68_37 * USBAOSF_stdout;
extern A68_37 * VSBAOSF_stderr;
extern A68_VOID  DXBAOSF_read_line(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,A68_38 *);
extern A68_VOID  UXBAOSF_write_buffer(struct A68t37 *,A68_VC ,struct A68t31 ,A68_38 *);
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
extern void ZDEAOSF(void);   /* getstrings */
extern void QMDAOSF(void);   /* putstrings */
extern void ZRAAOSF(void);   /* messageproc */
extern void CSCAOSF(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_169   ALEAOSF = {"$Id: iolib.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,BLEAOSF,ALEAOSF,55)
A68_99 * CLEAOSF_stdoutchan;
A68_99 * DLEAOSF_stderrchan;
A68_99 * ELEAOSF_stdinchan;
static A68_170  FLEAOSF_outbuff;
static A68_170  GLEAOSF_errbuff;
static A68_170  HLEAOSF_inbuff;

A68_VOID  JLEAOSF_print(A68_146  Line);

A68_VOID  LLEAOSF_printerr(A68_146  Line);

A68_BOOL  NLEAOSF_read(A68_165  In);

A_STATIC A68_VOID  QLEAOSF_put_stdout_line(A68_VC  S);

A_STATIC A68_VOID  TLEAOSF_put_stderr_line(A68_VC  S);

A_STATIC A68_VOID  XLEAOSF_get_stdin_line(A68_VC  S, A68_INT * Length, A68_38  *ReturnedValue);

A_STATIC A68_VOID  AMEAOSF_init_oslib(void);

A68_VOID  JLEAOSF_print(A68_146  Line)
{ 
A_PROC_ENTRY(print);
KYDAOSF_put(CLEAOSF_stdoutchan, Line);
A_PROC_EXIT(print);
return;
} 
#undef NL

A68_VOID  LLEAOSF_printerr(A68_146  Line)
{ 
A_PROC_ENTRY(printerr);
KYDAOSF_put(DLEAOSF_stderrchan, Line);
A_PROC_EXIT(printerr);
return;
} 
#undef NL

A68_BOOL  NLEAOSF_read(A68_165  In)
{ 
A68_BOOL  OLEAOSF;  /* clause result */
A_PROC_ENTRY(read);
OLEAOSF = EJEAOSF_get(ELEAOSF_stdinchan, In);
A_PROC_EXIT(read);
return( OLEAOSF );
} 
#undef NL

A_STATIC A68_VOID  QLEAOSF_put_stdout_line(A68_VC  S)
{ 
A68_38  RLEAOSF;  /* avoid structure result */
A_PROC_ENTRY(put_stdout_line);
UXBAOSF_write_buffer( USBAOSF_stdout, S, TIBAOSF_global_msg, &RLEAOSF );
RLEAOSF;
A_PROC_EXIT(put_stdout_line);
return;
} 
#undef NL

A_STATIC A68_VOID  TLEAOSF_put_stderr_line(A68_VC  S)
{ 
A68_38  ULEAOSF;  /* avoid structure result */
A_PROC_ENTRY(put_stderr_line);
UXBAOSF_write_buffer( VSBAOSF_stderr, S, TIBAOSF_global_msg, &ULEAOSF );
ULEAOSF;
A_PROC_EXIT(put_stderr_line);
return;
} 
#undef NL

A_STATIC A68_VOID  XLEAOSF_get_stdin_line(A68_VC  S, A68_INT * Length, A68_38  *ReturnedValue)
{ 
A68_38  YLEAOSF;  /* clause result */
A68_38  ZLEAOSF;  /* avoid structure result */
A_PROC_ENTRY(get_stdin_line);
 /* line 52: */
DXBAOSF_read_line( TSBAOSF_stdin, S, Length, TIBAOSF_global_msg, &ZLEAOSF );
YLEAOSF = ZLEAOSF;
A_PROC_EXIT(get_stdin_line);
*ReturnedValue = (YLEAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  AMEAOSF_init_oslib(void)
{ 
A68_149  BMEAOSF;  /* OPERATORS - mode -> union mode */
A68_77  CMEAOSF;  /* YIELD */
A68_77  DMEAOSF;  /* procedure value */
A68_VC  EMEAOSF;  /* OPERATORS - istruct -> vector */
A68_148  FMEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  GMEAOSF;  /* YIELD */
A68_149  HMEAOSF;  /* OPERATORS - mode -> union mode */
A68_77  IMEAOSF;  /* YIELD */
A68_77  JMEAOSF;  /* procedure value */
A68_VC  KMEAOSF;  /* OPERATORS - istruct -> vector */
A68_148  LMEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MMEAOSF;  /* YIELD */
A68_149  NMEAOSF;  /* OPERATORS - mode -> union mode */
A68_100  OMEAOSF;  /* YIELD */
A68_100  PMEAOSF;  /* procedure value */
A68_VC  QMEAOSF;  /* OPERATORS - istruct -> vector */
A68_148  RMEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  SMEAOSF;  /* YIELD */
A_PROC_ENTRY(init_oslib);
{ 
DMEAOSF.fn.fn_global = QLEAOSF_put_stdout_line;
DMEAOSF.nonlocals = A68_NIL;
CMEAOSF = DMEAOSF ;
GMEAOSF = A_ISVEC(EMEAOSF,(&FLEAOSF_outbuff),1024,A68_CHAR ) ;
CLEAOSF_stdoutchan = BJDAOSF_make_channel(A_UNITE(FMEAOSF,mode2,2,GMEAOSF), A_UNITE(BMEAOSF,mode1,1,CMEAOSF));
 /* line 56: */
JMEAOSF.fn.fn_global = TLEAOSF_put_stderr_line;
JMEAOSF.nonlocals = A68_NIL;
IMEAOSF = JMEAOSF ;
MMEAOSF = A_ISVEC(KMEAOSF,(&GLEAOSF_errbuff),1024,A68_CHAR ) ;
DLEAOSF_stderrchan = BJDAOSF_make_channel(A_UNITE(LMEAOSF,mode2,2,MMEAOSF), A_UNITE(HMEAOSF,mode1,1,IMEAOSF));
 /* line 57: */
PMEAOSF.fn.fn_global = XLEAOSF_get_stdin_line;
PMEAOSF.nonlocals = A68_NIL;
OMEAOSF = PMEAOSF ;
SMEAOSF = A_ISVEC(QMEAOSF,(&HLEAOSF_inbuff),1024,A68_CHAR ) ;
ELEAOSF_stdinchan = BJDAOSF_make_channel(A_UNITE(RMEAOSF,mode2,2,SMEAOSF), A_UNITE(NMEAOSF,mode2,2,OMEAOSF));
 /* line 58: */
 /* line 59: */
/*SKIP*/;
} 
A_PROC_EXIT(init_oslib);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void XKEAOSF(void)   /* initialise DECS iolib */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel","iolib.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/getstrings.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/putstrings.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/messageproc.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_74  TMEAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ZDEAOSF();   /* USE getstrings */
QMDAOSF();   /* USE putstrings */
ZRAAOSF();   /* USE messageproc */
CSCAOSF();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/iolib.a68";
A_config.translation_time = "Wed Apr 21 16:34:02 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "WKEAOSF (from seed file) ";
A_config.spec_change_time = "Wed Apr 21 16:34:02 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS iolib);
UEAALIB_a68config(LGAALIB_configinfo, BLEAOSF);
 /* line 42: */
 /* line 43: */
 /* line 45: */
 /* line 46: */
 /* line 47: */
 /* line 49: */
 /* line 50: */
 /* line 51: */
 /* line 53: */
 /* line 54: */
 /* line 55: */
 /* line 61: */
 /* line 63: */
 /* line 65: */
TMEAOSF.fn.fn_global = AMEAOSF_init_oslib;
TMEAOSF.nonlocals = A68_NIL;
ABAALIB_a68init(TMEAOSF);
A_PROC_EXIT(DECS iolib);
} 
#undef NL
/* end of translation of iolib.a68 */
