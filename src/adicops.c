/* UNAME:RFTACTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_INT *,A68t31,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t32,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26,CHAR) MODE26 */
struct A68t36 ;

A_PROCEDURE(A68_VOID ,A68t35,(struct A68t36 ,A68_VC *),(struct A68t36 ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE36) REF MODE26 */
A_VECTOR(A68_VC ,A68t36);
typedef struct A68t36  A68_36 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_INT ,A68t37,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t37  A68_37 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t40);
typedef struct A68t40  A68_40 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t40 ,A68t41,(A68_INT ),(A68_INT ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(INT) MODE40 */

A_PROCEDURE(A68_INT ,A68t42,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t43,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t44,(A68_VC ),(A68_VC ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t45,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t45  A68_45 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t46,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t47,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t48,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t49,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t51,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t52,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t53,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF INT,MODE26) BOOL */
struct A68t55 ;

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t55 *,A68_INT ,struct A68t55 *),(struct A68t55 *,A68_INT ,struct A68t55 *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF MODE55,INT) MODE55 */
struct A68t57{
A68_INT  Rdenno;
A_PAD_INT(PAD_1)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT)  */
struct A68t58{
A68_INT  Idno;
A_PAD_INT(PAD_2)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t64);
typedef struct A68t64  A68_64 ;    /* STRUCT 7 CHAR */
struct A68t59{
struct A68t64  Name;
A_PAD_ISTRUCT(A68_64 ,PAD_3)
A68_INT  Mode;
A_PAD_INT(PAD_4)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE64,INT)  */
struct A68t60{
A68_INT  Labno;
A_PAD_INT(PAD_5)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */
struct A68t61{
A68_INT  Nse;
A_PAD_INT(PAD_6)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT)  */
struct A68t62{
A68_INT  Fn;
A_PAD_INT(PAD_7)
A68_INT  Param;
A_PAD_INT(PAD_8)
struct A68t63 * Operands;
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT,INT,REF MODE63)  */
struct A68t56 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t57  mode2;
struct A68t58  mode4;
struct A68t59  mode5;
A68_VC  mode6;
struct A68t60  mode7;
struct A68t61  mode8;
struct A68t62  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t56  A68_56 ;    /* UNION(LONG BITS,MODE57,VOID,MODE58,MODE59,MODE26,MODE60,MODE61,MODE62)  */
struct A68t55{
A68_INT  Mode;
A_PAD_INT(PAD_9)
A68_BITS  Info;
A_PAD_BITS(PAD_10)
struct A68t56  Extra;
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,BITS,MODE56)  */
struct A68t63{
struct A68t55  Value;
struct A68t63 * Rest;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(MODE55,REF MODE63)  */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t55 *,struct A68t55 *),(struct A68t55 *,struct A68t55 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE55) MODE55 */

A_PROCEDURE(A68_VOID ,A68t66,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(BOOL) MODE26 */
struct A68t67{
struct A68t64  Name;
A_PAD_ISTRUCT(A68_64 ,PAD_11)
A68_BOOL  Set;
A_PAD_BOOL(PAD_12)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(MODE64,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ),(A68_VC ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t70,(void),(void *));
typedef struct A68t70  A68_70 ;    /* PROC VOID */
struct A68t72 ;

A_PROCEDURE(A68_VOID ,A68t71,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE72) VOID */
A_VECTOR(struct A68t73 ,A68t72);
typedef struct A68t72  A68_72 ;    /* VECTOR [] MODE73 */
struct A68t73 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t73  A68_73 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t75 ;

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t75 ,A68_INT ),(struct A68t75 ,A68_INT ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE75,INT) VOID */
A_VECTOR(struct A68t76 ,A68t75);
typedef struct A68t75  A68_75 ;    /* VECTOR [] MODE76 */
struct A68t76 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t76  A68_76 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t77,(A68_INT ),(A68_INT ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t78,(A68_INT ),(A68_INT ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT) BOOL */
struct A68t79{
A68_INT  Level;
A_PAD_INT(PAD_13)
A68_INT  Block;
A_PAD_INT(PAD_14)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t79 *),(struct A68t79 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC MODE79 */

A_PROCEDURE(A68_INT ,A68t81,(void),(void *));
typedef struct A68t81  A68_81 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t82,(A68_INT ),(A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t84,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t86,(struct A68t79 ,struct A68t79 ),(struct A68t79 ,struct A68t79 ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE79,MODE79) BOOL */

A_PROCEDURE(A68_BOOL ,A68t87,(struct A68t79 ),(struct A68t79 ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE79) BOOL */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t90,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(INT) REF MODE26 */
struct A68t92 ;

A_PROCEDURE(A68_VOID ,A68t91,(A68_INT ,struct A68t92 ),(A68_INT ,struct A68t92 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(INT,MODE92) VOID */
A_ROW(A68_VC ,A68t92,1);
typedef struct A68t92  A68_92 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t93,(void),(void *));
typedef struct A68t93  A68_93 ;    /* PROC BITS */
struct A68t94{
A68_INT  Cfile;
A_PAD_INT(PAD_15)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT)  */
struct A68t95{
A68_INT  Seedfile;
A_PAD_INT(PAD_16)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT)  */
struct A68t96 { A68_INT mode; union {
struct A68t94  mode1;
struct A68t95  mode2;
struct A68t64  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t96  A68_96 ;    /* UNION(MODE94,MODE95,MODE64,VOID)  */
A_ROW(A68_BOOL ,A68t97,1);
typedef struct A68t97  A68_97 ;    /* [] BOOL */
struct A68t98{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_17)
A68_VC  Sourcefile;
struct A68t64  Nameseed;
A_PAD_ISTRUCT(A68_64 ,PAD_18)
struct A68t96  Nameseedorigin;
struct A68t99 * Used_modules;
A68_VC  Commandline;
struct A68t100 * Environment;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE64,MODE96,REF MODE99,REF MODE26,REF MODE100)  */
struct A68t99{
A68_VC  Modinfo_file;
struct A68t99 * Next;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(REF MODE26,REF MODE99)  */
struct A68t100{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t100 * Next;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE100)  */
struct A68t102 ;
struct A68t103 ;

A_PROCEDURE(struct A68t102 *,A68t101,(A68_VC ,struct A68t103 *,A68_VC *),(A68_VC ,struct A68t103 *,A68_VC *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE26,REF MODE103,REF REF MODE26) REF MODE102 */
struct A68t102{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t103{
A68_VC  Dir;
struct A68t103 * Next;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(REF MODE26,REF MODE103)  */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t55 *,struct A68t55 **),(struct A68t55 *,struct A68t55 **,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE55,REF REF MODE55) VOID */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t55 *,struct A68t55 **,A68_BITS ),(struct A68t55 *,struct A68t55 **,A68_BITS ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE55,REF REF MODE55,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t106,(struct A68t55 *,struct A68t55 **,struct A68t55 **),(struct A68t55 *,struct A68t55 **,struct A68t55 **,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE55,REF REF MODE55,REF REF MODE55) VOID */

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t55 *),(struct A68t55 *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF MODE55) VOID */
struct A68t108{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_20)
struct A68t79  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t64  Prefix;
A_PAD_ISTRUCT(A68_64 ,PAD_21)
A68_BITS  Flags;
A_PAD_BITS(PAD_22)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,MODE79,REF MODE26,REF MODE26,MODE64,BITS,REF MODE26,REF MODE26)  */
struct A68t109{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_INT  Resultmode;
A_PAD_INT(PAD_24)
A68_INT  Declevel;
A_PAD_INT(PAD_25)
struct A68t79  Environ;
A68_VC  Name;
struct A68t64  Prefix;
A_PAD_ISTRUCT(A68_64 ,PAD_26)
struct A68t64  Fnprefix;
A_PAD_ISTRUCT(A68_64 ,PAD_27)
struct A68t64  Envprefix;
A_PAD_ISTRUCT(A68_64 ,PAD_28)
A68_BITS  Flags;
A_PAD_BITS(PAD_29)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,INT,INT,MODE79,REF MODE26,MODE64,MODE64,MODE64,BITS)  */
struct A68t110{
struct A68t67  Label;
struct A68t79  Environ;
A68_VC  Name;
struct A68t64  Prefix;
A_PAD_ISTRUCT(A68_64 ,PAD_30)
A68_BITS  Flags;
A_PAD_BITS(PAD_31)
A68_INT  Alias;
A_PAD_INT(PAD_32)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(MODE67,MODE79,REF MODE26,MODE64,BITS,INT)  */

A_PROCEDURE(struct A68t108 *,A68t111,(A68_INT ),(A68_INT ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(INT) REF MODE108 */

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ,struct A68t64 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t64 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE26,MODE64,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t108 ,A68t114,1);
typedef struct A68t114  A68_114 ;    /* [] MODE108 */
A_ROW(struct A68t109 ,A68t115,1);
typedef struct A68t115  A68_115 ;    /* [] MODE109 */
A_ROW(struct A68t110 ,A68t116,1);
typedef struct A68t116  A68_116 ;    /* [] MODE110 */
struct A68t118 ;

A_PROCEDURE(A68_VOID ,A68t117,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t118 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t118 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(INT,INT,INT,INT,REF MODE118) VOID */
A_ROW(A68_INT ,A68t118,1);
typedef struct A68t118  A68_118 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t119,(A68_VC ),(A68_VC ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t120,(A68_INT ,struct A68t79 *),(A68_INT ,struct A68t79 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(INT) MODE79 */
struct A68t121{
A68_INT  Parameters;
A_PAD_INT(PAD_33)
A68_INT  Result;
A_PAD_INT(PAD_34)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_35)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 32 CHAR */
struct A68t122{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_INT  Offset;
A_PAD_INT(PAD_37)
struct A68t123  Name;
A_PAD_ISTRUCT(A68_123 ,PAD_38)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,INT,MODE123)  */
struct A68t125 ;

A_PROCEDURE(A68_VOID ,A68t124,(A68_INT ,struct A68t125 *),(A68_INT ,struct A68t125 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(INT) REF MODE125 */
A_VECTOR(A68_INT ,A68t125);
typedef struct A68t125  A68_125 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t122 *,A68_VC *),(struct A68t122 *,A68_VC *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE122) MODE26 */

A_PROCEDURE(A68_VOID ,A68t127,(A68_INT ,A68_VC ,struct A68t59 *),(A68_INT ,A68_VC ,struct A68t59 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(INT,MODE26) MODE59 */
struct A68t129 ;

A_PROCEDURE(A68_VOID ,A68t128,(struct A68t129 ,A68_INT ),(struct A68t129 ,A68_INT ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE129,INT) VOID */
A_ROW(struct A68t130 ,A68t129,1);
typedef struct A68t129  A68_129 ;    /* [] MODE130 */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_39)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT)  */
struct A68t130 { A68_INT mode; union {
A68_INT  mode1;
struct A68t131 * mode2;
struct A68t132 * mode3;
struct A68t133 * mode4;
struct A68t134 * mode5;
struct A68t135 * mode6;
struct A68t136 * mode7;
struct A68t137 * mode8;
struct A68t138 * mode9;
struct A68t139 * mode10;
struct A68t140  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t130  A68_130 ;    /* UNION(INT,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138,REF MODE139,MODE140)  */
struct A68t131{
A68_INT  Rdenno;
A_PAD_INT(PAD_40)
struct A68t144 * Modelist;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,REF MODE144)  */
struct A68t132{
A68_INT  Deproc;
A_PAD_INT(PAD_41)
struct A68t144 * Pars;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,REF MODE144)  */
struct A68t133{
A68_INT  Rdenno;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
struct A68t143 * Sels;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,INT,REF MODE143)  */
struct A68t134{
A68_INT  Rdenno;
A_PAD_INT(PAD_44)
A68_INT  Imode;
A_PAD_INT(PAD_45)
A68_INT  Length;
A_PAD_INT(PAD_46)
A68_INT  Deflex;
A_PAD_INT(PAD_47)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t135{
A68_INT  Deproc;
A_PAD_INT(PAD_48)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT)  */
struct A68t136{
A68_INT  Rdenno;
A_PAD_INT(PAD_49)
A68_INT  Vecmode;
A_PAD_INT(PAD_50)
A68_INT  Deflex;
A_PAD_INT(PAD_51)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT,INT)  */
struct A68t137{
A68_INT  Rdenno;
A_PAD_INT(PAD_52)
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_INT  Nods;
A_PAD_INT(PAD_54)
A68_INT  Deflex;
A_PAD_INT(PAD_55)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t138{
A68_INT  Mode;
A_PAD_INT(PAD_56)
struct A68t142 * Stenlist;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t139{
A68_INT  Mode;
A_PAD_INT(PAD_57)
A68_INT  Modeproc;
A_PAD_INT(PAD_58)
struct A68t141 * El;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,INT,REF MODE141)  */
struct A68t141{
struct A68t139 * Am;
struct A68t141 * Rest;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(REF MODE139,REF MODE141)  */
struct A68t142{
A68_INT  Mode;
A_PAD_INT(PAD_59)
A68_INT  Rdenno;
A_PAD_INT(PAD_60)
struct A68t142 * Rest;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT,INT,REF MODE142)  */
struct A68t143{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_INT  Fieldno;
A_PAD_INT(PAD_62)
struct A68t123  Name;
A_PAD_ISTRUCT(A68_123 ,PAD_63)
struct A68t143 * Rest;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT,INT,MODE123,REF MODE143)  */
struct A68t144{
A68_INT  Mode;
A_PAD_INT(PAD_64)
struct A68t144 * Rest;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT,REF MODE144)  */

A_PROCEDURE(A68_VOID ,A68t145,(A68_INT ,struct A68t121 *),(A68_INT ,struct A68t121 *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT) MODE121 */
struct A68t147 ;

A_PROCEDURE(A68_VOID ,A68t146,(A68_INT ,struct A68t147 *),(A68_INT ,struct A68t147 *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT) REF MODE147 */
A_VECTOR(struct A68t122 ,A68t147);
typedef struct A68t147  A68_147 ;    /* VECTOR [] MODE122 */

A_PROCEDURE(A68_INT ,A68t148,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t149,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE96) VOID */

A_PROCEDURE(struct A68t64 ,A68t151,(void),(void *));
typedef struct A68t151  A68_151 ;    /* PROC MODE64 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t96 ,A68_VC *),(struct A68t96 ,A68_VC *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE96) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t154,(struct A68t55 *,struct A68t55 *),(struct A68t55 *,struct A68t55 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REF MODE55,REF MODE55) BOOL */

A_PROCEDURE(A68_BOOL ,A68t155,(struct A68t55 *),(struct A68t55 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE55) BOOL */

A_PROCEDURE(A68_BOOL ,A68t156,(struct A68t55 *,A68_LBITS ),(struct A68t55 *,A68_LBITS ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE55,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t157,(struct A68t55 *),(struct A68t55 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE55) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t55 *,A68_VC *),(struct A68t55 *,A68_VC *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE55) MODE26 */

A_PROCEDURE(struct A68t55 *,A68t159,(struct A68t55 *,A68_INT ),(struct A68t55 *,A68_INT ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE55,INT) REF MODE55 */

A_PROCEDURE(A68_INT ,A68t160,(struct A68t62 ),(struct A68t62 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE62) INT */
struct A68t161{
struct A68t55 * Value;
struct A68t67 * End;
A68_INT  Type;
A_PAD_INT(PAD_65)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(REF MODE55,REF MODE67,INT)  */

A_PROCEDURE(A68_BOOL ,A68t162,(struct A68t55 *,A68_BITS ),(struct A68t55 *,A68_BITS ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE55,BITS) BOOL */

A_PROCEDURE(struct A68t55 *,A68t163,(struct A68t63 *,A68_INT ),(struct A68t63 *,A68_INT ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE63,INT) REF MODE55 */

A_PROCEDURE(struct A68t63 *,A68t164,(struct A68t63 *),(struct A68t63 *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF MODE63) REF MODE63 */
struct A68t166 ;

A_PROCEDURE(struct A68t55 *,A68t165,(A68_INT ,A68_INT ,A68_BITS ,struct A68t166 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t166 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT,INT,BITS,MODE166) REF MODE55 */
A_VECTOR(struct A68t55 *,A68t166);
typedef struct A68t166  A68_166 ;    /* VECTOR [] REF MODE55 */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t55 *,A68_BOOL ,A68_VC *),(struct A68t55 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF MODE55,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t168,(struct A68t55 ),(struct A68t55 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE55) LONG INT */
struct A68t169 { A68_INT mode; union {
struct A68t55 * mode1;
A68_VC  mode2;
struct A68t59  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t169  A68_169 ;    /* UNION(REF MODE55,MODE26,MODE59)  */

A_PROCEDURE(A68_VOID ,A68t170,(struct A68t169 ,A68_VC *),(struct A68t169 ,A68_VC *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE169) MODE26 */
struct A68t172 ;

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t172 ,A68_VC *),(struct A68t172 ,A68_VC *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE172) MODE26 */
A_VECTOR(struct A68t169 ,A68t172);
typedef struct A68t172  A68_172 ;    /* VECTOR [] MODE169 */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,struct A68t172 ,A68_VC *),(A68_VC ,struct A68t172 ,A68_VC *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,MODE172) MODE26 */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE172) VOID */

A_PROCEDURE(A68_VOID ,A68t175,(A68_VC ,A68_INT ,struct A68t172 ,struct A68t59 *),(A68_VC ,A68_INT ,struct A68t172 ,struct A68t59 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE26,INT,MODE172) MODE59 */

A_PROCEDURE(struct A68t55 *,A68t176,(struct A68t55 *),(struct A68t55 *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF MODE55) REF MODE55 */

A_PROCEDURE(struct A68t55 *,A68t177,(A68_VC ,struct A68t55 *),(A68_VC ,struct A68t55 *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE26,REF MODE55) REF MODE55 */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE70) VOID */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t69 ),(struct A68t69 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE69) VOID */

A_PROCEDURE(A68_VOID ,A68t180,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t190,(A68_BOOL ,A68_VC ,struct A68t55 *,A68_VC *),(A68_BOOL ,A68_VC ,struct A68t55 *,A68_VC *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(BOOL,MODE26,REF MODE55) MODE26 */

A_PROCEDURE(A68_VOID ,A68t191,(A68_BOOL ,A68_VC ,struct A68t55 *,struct A68t55 *,A68_VC *),(A68_BOOL ,A68_VC ,struct A68t55 *,struct A68t55 *,A68_VC *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(BOOL,MODE26,REF MODE55,REF MODE55) MODE26 */
A_ISTRUCT(struct A68t169 ,2,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 2 MODE169 */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t55 *,A68_INT ,A68_INT ,struct A68t55 *),(struct A68t55 *,A68_INT ,A68_INT ,struct A68t55 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE55,INT,INT) MODE55 */
A_ISTRUCT(A68_CHAR ,14,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(struct A68t76 ,5,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 5 MODE76 */
A_ISTRUCT(struct A68t169 ,3,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 3 MODE169 */
A_ISTRUCT(A68_CHAR ,16,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(struct A68t76 ,7,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 7 MODE76 */
A_ISTRUCT(A68_CHAR ,8,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t169 ,4,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 4 MODE169 */

A_PROCEDURE(A68_VOID ,A68t208,(A68_VC ,struct A68t55 *,A68_INT ,struct A68t55 *),(A68_VC ,struct A68t55 *,A68_INT ,struct A68t55 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE26,REF MODE55,INT) MODE55 */
A_ROW(struct A68t193 ,A68t209,1);
typedef struct A68t209  A68_209 ;    /* [] MODE193 */
A_ISTRUCT(struct A68t193 ,18,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 18 MODE193 */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t55 *,struct A68t62 ,struct A68t55 *),(struct A68t55 *,struct A68t62 ,struct A68t55 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE55,MODE62) MODE55 */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t125 ,A68_VC ,A68_VC ,struct A68t55 *,struct A68t55 *,A68_BOOL ,A68_VC *),(struct A68t125 ,A68_VC ,A68_VC ,struct A68t55 *,struct A68t55 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE125,MODE26,MODE26,REF MODE55,REF MODE55,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,9,A68t213);
typedef struct A68t213  A68_213 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t214);
typedef struct A68t214  A68_214 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_INT ,2,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 2 INT */

A_PROCEDURE(A68_VOID ,A68t218,(A68_INT ,struct A68t55 *,A68_VC *),(A68_INT ,struct A68t55 *,A68_VC *,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT,REF MODE55) MODE26 */
A_ISTRUCT(A68_CHAR ,37,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_BITS ,A68t220,(A68_BOOL ,struct A68t55 *),(A68_BOOL ,struct A68t55 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(BOOL,REF MODE55) BITS */

A_PROCEDURE(A68_VOID ,A68t221,(A68_BOOL ,A68_BOOL ,A68_VC ,struct A68t55 *,struct A68t55 *,struct A68t56 *),(A68_BOOL ,A68_BOOL ,A68_VC ,struct A68t55 *,struct A68t55 *,struct A68t56 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(BOOL,BOOL,MODE26,REF MODE55,REF MODE55) MODE56 */
A_ISTRUCT(A68_CHAR ,38,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t223);
typedef struct A68t223  A68_223 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t193 ,33,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 33 MODE193 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  GYPACTR_getcfragment(struct A68t55 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
#define RKJACTR_atomic 0X2U
#define SKJACTR_effects 0X4U
#define TKJACTR_nonloc 0X8U
#define UKJACTR_voided 0X10U
#define VKJACTR_lvalue 0X20U
#define XKJACTR_fxwarn 0X80U
extern A68_BOOL  UUPACTR_hasattribute(struct A68t55 *,A68_BITS );
extern A68_55  DLJACTR_skipvalue;
extern A68_VOID  NCQACTR_bracketcfragment(struct A68t55 *,A68_VC *);
extern A68_VOID  ENQACTR_usemacro(A68_VC ,struct A68t172 ,A68_VC *);
extern A68_VOID  JNQACTR_emitline(struct A68t172 );
extern A68_55 * KOQACTR_yield(struct A68t55 *);
extern A68_55 * VOQACTR_yield(A68_VC ,struct A68t55 *);
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_64  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modes --- */
extern A68_VOID  LKOACTR_declarectemporary(A68_INT ,A68_VC ,A68_59 *);
extern A68_BOOL  ARMACTR_isarray(A68_INT );
extern A68_BOOL  VQMACTR_isrow(A68_INT );
extern A68_127  KLOACTR_new;
extern A68_VOID  FLNACTR_cast(A68_INT ,A68_VC *);
extern A68_VOID  KLNACTR_csizeof(A68_INT ,A68_VC *);
extern A68_INT  EOMACTR_deref(A68_INT );
extern A68_BOOL  WOMACTR_isint(A68_INT );
extern A68_BOOL  TPMACTR_isrow(A68_INT );
extern A68_BOOL  PPMACTR_isvec(A68_INT );
extern A68_BOOL  IQMACTR_isflexrow(A68_INT );
extern A68_BOOL  EQMACTR_isflexvec(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
extern A68_INT  WFAACTR_refrefmark;
/* --- End of imports from incmode --- */


/* --- Imports from idtable --- */
/* --- End of imports from idtable --- */


/* --- Imports from incoperfn --- */
#define RGAACTR_biopnumbersstart 1000
#define SGAACTR_opnumberdivisor 16
#define TGAACTR_biopnumberdivisor 100
extern A68_BITS  ZGAACTR_parammask;
/* --- End of imports from incoperfn --- */


/* --- Imports from evalbase --- */
extern A68_VOID  QWQACTR_eval1(struct A68t55 *,struct A68t55 **);
extern A68_VOID  ZWQACTR_eval_pass_left(struct A68t55 *,struct A68t55 **,A68_BITS );
extern A68_VOID  IXQACTR_eval_pass_right(struct A68t55 *,struct A68t55 **,A68_BITS );
extern A68_VOID  RXQACTR_eval2(struct A68t55 *,struct A68t55 **,struct A68t55 **);
/* --- End of imports from evalbase --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_BOOL  AQIACTR_verboseoption;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  QSLACTR_locdecstream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t75 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from biops --- */
extern A68_VOID  KFTACTR_monadicbiopsemantics(struct A68t55 *,A68_INT ,A68_55 *);
extern A68_VOID  JATACTR_biop99(struct A68t55 *,A68_55 *);
/* --- End of imports from biops --- */


/* --- Imports from usefulops --- */
extern A68_BITS * PKAAOSF_orab(A68_BITS *,A68_BITS );
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ATPACTR(void);   /* values */
extern void RHMACTR(void);   /* uniquenameserver */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void PPKACTR(void);   /* idtable */
extern void XFAACTR(void);   /* incoperfn */
extern void IWQACTR(void);   /* evalbase */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void AATACTR(void);   /* biops */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_181   VFTACTR = {"$Id: adicops.a68,v 1.2 2002-02-04 09:26:51 sian Exp $"}; 
A_GISVEC(A68_VC ,WFTACTR,VFTACTR,53)
static A68_182   XFTACTR = {"ADICOPS - "}; 
A_GISVEC(A68_VC ,YFTACTR,XFTACTR,10)
static A68_VC  ZFTACTR_modulename;
static A68_183   AGTACTR = {":illegal version number"}; 
A_GISVEC(A68_VC ,BGTACTR,AGTACTR,23)
static A68_VC  CGTACTR_qvfault;
static A68_184   DGTACTR = {":mode COMPL is not supported"}; 
A_GISVEC(A68_VC ,EGTACTR,DGTACTR,28)
static A68_VC  FGTACTR_qcompl;
static A68_185   GGTACTR = {"monadic UPB"}; 
A_GISVEC(A68_VC ,HGTACTR,GGTACTR,11)
static A68_VC  IGTACTR_qmupb;
static A68_185   JGTACTR = {"monadic LWB"}; 
A_GISVEC(A68_VC ,KGTACTR,JGTACTR,11)
static A68_VC  LGTACTR_qmlwb;
static A68_186   MGTACTR = {"ABS"}; 
A_GISVEC(A68_VC ,NGTACTR,MGTACTR,3)
static A68_VC  OGTACTR_qabs;
static A68_187   PGTACTR = {"ROUND"}; 
A_GISVEC(A68_VC ,QGTACTR,PGTACTR,5)
static A68_VC  RGTACTR_qround;
static A68_188   SGTACTR = {"ENTIER"}; 
A_GISVEC(A68_VC ,TGTACTR,SGTACTR,6)
static A68_VC  UGTACTR_qentier;
static A68_40   VGTACTR = {"SIGN"}; 
A_GISVEC(A68_VC ,WGTACTR,VGTACTR,4)
static A68_VC  XGTACTR_qsign;
static A68_189   YGTACTR = {"RE"}; 
A_GISVEC(A68_VC ,ZGTACTR,YGTACTR,2)
static A68_VC  AHTACTR_qre;
static A68_189   BHTACTR = {"IM"}; 
A_GISVEC(A68_VC ,CHTACTR,BHTACTR,2)
static A68_VC  DHTACTR_qim;
static A68_186   EHTACTR = {"ARG"}; 
A_GISVEC(A68_VC ,FHTACTR,EHTACTR,3)
static A68_VC  GHTACTR_qarg;
static A68_40   HHTACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,IHTACTR,HHTACTR,4)
static A68_VC  JHTACTR_qconj;
static A68_VC  LHTACTR_qi;
static A68_40   MHTACTR = {"PLUS"}; 
A_GISVEC(A68_VC ,NHTACTR,MHTACTR,4)
static A68_VC  OHTACTR_qplus;
static A68_187   PHTACTR = {"MINUS"}; 
A_GISVEC(A68_VC ,QHTACTR,PHTACTR,5)
static A68_VC  RHTACTR_qminus;
static A68_187   SHTACTR = {"TIMES"}; 
A_GISVEC(A68_VC ,THTACTR,SHTACTR,5)
static A68_VC  UHTACTR_qtimes;
static A68_186   VHTACTR = {"DIV"}; 
A_GISVEC(A68_VC ,WHTACTR,VHTACTR,3)
static A68_VC  XHTACTR_qdiv;
static A68_40   YHTACTR = {"OVER"}; 
A_GISVEC(A68_VC ,ZHTACTR,YHTACTR,4)
static A68_VC  AITACTR_qover;
static A68_186   BITACTR = {"MOD"}; 
A_GISVEC(A68_VC ,CITACTR,BITACTR,3)
static A68_VC  DITACTR_qmod;
static A68_189   EITACTR = {"**"}; 
A_GISVEC(A68_VC ,FITACTR,EITACTR,2)
static A68_VC  GITACTR_qpower;
static A68_40   HITACTR = {"ELEM"}; 
A_GISVEC(A68_VC ,IITACTR,HITACTR,4)
static A68_VC  JITACTR_qelem;
static A68_188   KITACTR = {"PLUSAB"}; 
A_GISVEC(A68_VC ,LITACTR,KITACTR,6)
static A68_VC  MITACTR_qplusab;
static A68_188   NITACTR = {"PLUSTO"}; 
A_GISVEC(A68_VC ,OITACTR,NITACTR,6)
static A68_VC  PITACTR_qplusto;
static A68_64   QITACTR = {"MINUSAB"}; 
A_GISVEC(A68_VC ,RITACTR,QITACTR,7)
static A68_VC  SITACTR_qminusab;
static A68_64   TITACTR = {"TIMESAB"}; 
A_GISVEC(A68_VC ,UITACTR,TITACTR,7)
static A68_VC  VITACTR_qtimesab;
static A68_188   WITACTR = {"OVERAB"}; 
A_GISVEC(A68_VC ,XITACTR,WITACTR,6)
static A68_VC  YITACTR_qoverab;
static A68_187   ZITACTR = {"MODAB"}; 
A_GISVEC(A68_VC ,AJTACTR,ZITACTR,5)
static A68_VC  BJTACTR_qmodab;
static A68_187   CJTACTR = {"DIVAB"}; 
A_GISVEC(A68_VC ,DJTACTR,CJTACTR,5)
static A68_VC  EJTACTR_qdivab;
static A68_189   FJTACTR = {"IS"}; 
A_GISVEC(A68_VC ,GJTACTR,FJTACTR,2)
static A68_VC  HJTACTR_qis;
static A68_40   IJTACTR = {"ISNT"}; 
A_GISVEC(A68_VC ,JJTACTR,IJTACTR,4)
static A68_VC  KJTACTR_qisnt;
static A68_64   LJTACTR = {"IS/ISNT"}; 
A_GISVEC(A68_VC ,MJTACTR,LJTACTR,7)
static A68_VC  NJTACTR_qisisnt;
static A68_188   OJTACTR = {" COMPL"}; 
A_GISVEC(A68_VC ,PJTACTR,OJTACTR,6)
static A68_VC  QJTACTR_qcomplex;
static A68_194   DLTACTR = {"A_COMPL_MMINUS"}; 
A_GISVEC(A68_VC ,JLTACTR,DLTACTR,14)
static A68_40   XLTACTR = {".upb"}; 
A_GISVEC(A68_VC ,ZLTACTR,XLTACTR,4)
static A68_185   CMTACTR = {".dim[0].upb"}; 
A_GISVEC(A68_VC ,EMTACTR,CMTACTR,11)
static A68_189   PMTACTR = {" 1"}; 
A_GISVEC(A68_VC ,QMTACTR,PMTACTR,2)
static A68_185   TMTACTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,VMTACTR,TMTACTR,11)
static A68_195   ONTACTR = {"ADICOPS - NOT"}; 
A_GISVEC(A68_VC ,PNTACTR,ONTACTR,13)
static A68_196   AOTACTR = {"(A68_INT)(unsigned char)"}; 
A_GISVEC(A68_VC ,BOTACTR,AOTACTR,24)
static A68_187   FOTACTR = {"A_ABS"}; 
static A68_40   GOTACTR = {" INT"}; 
A_GISVEC(A68_VC ,HOTACTR,GOTACTR,4)
A_GISVEC(A68_VC ,IOTACTR,FOTACTR,5)
static A68_187   KOTACTR = {"A_ABS"}; 
static A68_187   LOTACTR = {" REAL"}; 
A_GISVEC(A68_VC ,MOTACTR,LOTACTR,5)
A_GISVEC(A68_VC ,NOTACTR,KOTACTR,5)
static A68_185   POTACTR = {"A_COMPL_ABS"}; 
A_GISVEC(A68_VC ,QOTACTR,POTACTR,11)
static A68_195   IPTACTR = {"ADICOPS - BIN"}; 
A_GISVEC(A68_VC ,JPTACTR,IPTACTR,13)
static A68_197   RPTACTR = {"(A68_SSBITS)"}; 
A_GISVEC(A68_VC ,SPTACTR,RPTACTR,12)
static A68_198   WPTACTR = {"ADICOPS - REPR "}; 
A_GISVEC(A68_VC ,XPTACTR,WPTACTR,15)
static A68_199   GQTACTR = {"ADICOPS - LENG incorrect mode:"}; 
A_GISVEC(A68_VC ,IQTACTR,GQTACTR,30)
static A68_200   WQTACTR = {"ADICOPS - SHORT incorrect mode:"}; 
A_GISVEC(A68_VC ,YQTACTR,WQTACTR,31)
static A68_40   MRTACTR = {" & 1"}; 
A_GISVEC(A68_VC ,ORTACTR,MRTACTR,4)
static A68_194   RRTACTR = {"ADICOPS - ODD "}; 
A_GISVEC(A68_VC ,SRTACTR,RRTACTR,14)
static A68_188   BSTACTR = {"A_SIGN"}; 
A_GISVEC(A68_VC ,CSTACTR,BSTACTR,6)
static A68_198   FSTACTR = {"ADICOPS - SIGN "}; 
A_GISVEC(A68_VC ,GSTACTR,FSTACTR,15)
static A68_198   PSTACTR = {"incorrect mode:"}; 
A_GISVEC(A68_VC ,QSTACTR,PSTACTR,15)
static A68_64   XSTACTR = {"double "}; 
A_GISVEC(A68_VC ,YSTACTR,XSTACTR,7)
static A68_189   ETTACTR = {"/*"}; 
static A68_189   FTTACTR = {"*/"}; 
A_GISVEC(A68_VC ,GTTACTR,ETTACTR,2)
A_GISVEC(A68_VC ,HTTACTR,FTTACTR,2)
static A68_201   KTTACTR = {""}; 
A_GISVEC(A68_VC ,LTTACTR,KTTACTR,0)
static A68_64   QTTACTR = {"A_ROUND"}; 
A_GISVEC(A68_VC ,YTTACTR,QTTACTR,7)
static A68_204   JUTACTR = {" incorrect mode:"}; 
A_GISVEC(A68_VC ,KUTACTR,JUTACTR,16)
static A68_64   UUTACTR = {"double "}; 
A_GISVEC(A68_VC ,VUTACTR,UUTACTR,7)
static A68_189   EVTACTR = {"/*"}; 
static A68_189   FVTACTR = {"*/"}; 
A_GISVEC(A68_VC ,GVTACTR,EVTACTR,2)
A_GISVEC(A68_VC ,HVTACTR,FVTACTR,2)
static A68_201   KVTACTR = {""}; 
A_GISVEC(A68_VC ,LVTACTR,KVTACTR,0)
static A68_206   QVTACTR = {"A_ENTIER"}; 
A_GISVEC(A68_VC ,ZVTACTR,QVTACTR,8)
static A68_182   TWTACTR = {"A_COMPL_RE"}; 
A_GISVEC(A68_VC ,VWTACTR,TWTACTR,10)
static A68_182   BXTACTR = {"A_COMPL_IM"}; 
A_GISVEC(A68_VC ,DXTACTR,BXTACTR,10)
static A68_185   LXTACTR = {"A_COMPL_ARG"}; 
A_GISVEC(A68_VC ,PXTACTR,LXTACTR,11)
static A68_40   YXTACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,ZXTACTR,YXTACTR,4)
static A68_197   DYTACTR = {"A_COMPL_CONJ"}; 
A_GISVEC(A68_VC ,JYTACTR,DYTACTR,12)
static A68_209  JZTACTR_monadicsemantics;
static A68_187   DAUACTR = {" L op"}; 
A_GISVEC(A68_VC ,EAUACTR,DAUACTR,5)
static A68_187   GAUACTR = {" R op"}; 
A_GISVEC(A68_VC ,HAUACTR,GAUACTR,5)
static A68_189   WAUACTR = {" 1"}; 
A_GISVEC(A68_VC ,XAUACTR,WAUACTR,2)
static A68_189   BBUACTR = {" 2"}; 
A_GISVEC(A68_VC ,CBUACTR,BBUACTR,2)
static A68_206   SBUACTR = {"A_C_PLUS"}; 
A_GISVEC(A68_VC ,UBUACTR,SBUACTR,8)
static A68_197   ACUACTR = {"A_COMPL_PLUS"}; 
A_GISVEC(A68_VC ,BCUACTR,ACUACTR,12)
static A68_213   ECUACTR = {"A_VC_PLUS"}; 
A_GISVEC(A68_VC ,FCUACTR,ECUACTR,9)
static A68_213   HCUACTR = {"A_RC_PLUS"}; 
A_GISVEC(A68_VC ,ICUACTR,HCUACTR,9)
static A68_195   WCUACTR = {"A_COMPL_MINUS"}; 
A_GISVEC(A68_VC ,XCUACTR,WCUACTR,13)
static A68_187   MDUACTR = {".dim["}; 
static A68_206   NDUACTR = {" -1].upb"}; 
A_GISVEC(A68_VC ,PDUACTR,MDUACTR,5)
A_GISVEC(A68_VC ,RDUACTR,NDUACTR,8)
static A68_187   CEUACTR = {".dim["}; 
static A68_206   DEUACTR = {" -1].lwb"}; 
A_GISVEC(A68_VC ,FEUACTR,CEUACTR,5)
A_GISVEC(A68_VC ,HEUACTR,DEUACTR,8)
static A68_194   AFUACTR = {"ADICOPS - AND "}; 
A_GISVEC(A68_VC ,BFUACTR,AFUACTR,14)
static A68_195   TFUACTR = {"ADICOPS - OR "}; 
A_GISVEC(A68_VC ,UFUACTR,TFUACTR,13)
static A68_214   EGUACTR = {"ADICOPS < or >: illegal op number"}; 
A_GISVEC(A68_VC ,FGUACTR,EGUACTR,33)
static A68_189   IGUACTR = {"LT"}; 
A_GISVEC(A68_VC ,KGUACTR,IGUACTR,2)
static A68_189   LGUACTR = {"GT"}; 
A_GISVEC(A68_VC ,MGUACTR,LGUACTR,2)
static A68_214   NGUACTR = {"ADICOPS < or >: illegal op number"}; 
A_GISVEC(A68_VC ,OGUACTR,NGUACTR,33)
static A68_187   YGUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,ZGUACTR,YGUACTR,5)
static A68_187   BHUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,CHUACTR,BHUACTR,5)
static A68_189   NHUACTR = {"<="}; 
A_GISVEC(A68_VC ,PHUACTR,NHUACTR,2)
static A68_189   QHUACTR = {">="}; 
A_GISVEC(A68_VC ,RHUACTR,QHUACTR,2)
static A68_215   SHUACTR = {"ADICOPS - <= or >= illegal op number"}; 
A_GISVEC(A68_VC ,THUACTR,SHUACTR,36)
static A68_189   WHUACTR = {"LE"}; 
A_GISVEC(A68_VC ,YHUACTR,WHUACTR,2)
static A68_189   ZHUACTR = {"GE"}; 
A_GISVEC(A68_VC ,AIUACTR,ZHUACTR,2)
static A68_215   BIUACTR = {"ADICOPS - <= or >= illegal op number"}; 
A_GISVEC(A68_VC ,CIUACTR,BIUACTR,36)
static A68_187   KIUACTR = {"A_LB_"}; 
A_GISVEC(A68_VC ,LIUACTR,KIUACTR,5)
static A68_187   PIUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,QIUACTR,PIUACTR,5)
static A68_187   SIUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,TIUACTR,SIUACTR,5)
static A68_189   EJUACTR = {"=="}; 
A_GISVEC(A68_VC ,GJUACTR,EJUACTR,2)
static A68_189   HJUACTR = {"!="}; 
A_GISVEC(A68_VC ,IJUACTR,HJUACTR,2)
static A68_216   JJUACTR = {"ADICOPS - = or /= illegal op number"}; 
A_GISVEC(A68_VC ,KJUACTR,JJUACTR,35)
static A68_189   NJUACTR = {"EQ"}; 
A_GISVEC(A68_VC ,PJUACTR,NJUACTR,2)
static A68_189   QJUACTR = {"NE"}; 
A_GISVEC(A68_VC ,RJUACTR,QJUACTR,2)
static A68_216   SJUACTR = {"ADICOPS - = or /= illegal op number"}; 
A_GISVEC(A68_VC ,TJUACTR,SJUACTR,35)
static A68_182   BKUACTR = {"A_COMPL_EQ"}; 
A_GISVEC(A68_VC ,DKUACTR,BKUACTR,10)
static A68_185   EKUACTR = {"A_COMPL_NEQ"}; 
A_GISVEC(A68_VC ,FKUACTR,EKUACTR,11)
static A68_187   JKUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,KKUACTR,JKUACTR,5)
static A68_187   MKUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,NKUACTR,MKUACTR,5)
static A68_213   ALUACTR = {"A_C_TIMES"}; 
A_GISVEC(A68_VC ,CLUACTR,ALUACTR,9)
static A68_213   ELUACTR = {"A_C_TIMES"}; 
A_GISVEC(A68_VC ,FLUACTR,ELUACTR,9)
static A68_195   LLUACTR = {"A_COMPL_TIMES"}; 
A_GISVEC(A68_VC ,MLUACTR,LLUACTR,13)
static A68_182   PLUACTR = {"A_VC_TIMES"}; 
A_GISVEC(A68_VC ,QLUACTR,PLUACTR,10)
static A68_182   SLUACTR = {"A_VC_TIMES"}; 
A_GISVEC(A68_VC ,TLUACTR,SLUACTR,10)
static A68_182   VLUACTR = {"A_RC_TIMES"}; 
A_GISVEC(A68_VC ,WLUACTR,VLUACTR,10)
static A68_182   YLUACTR = {"A_RC_TIMES"}; 
A_GISVEC(A68_VC ,ZLUACTR,YLUACTR,10)
static A68_194   VMUACTR = {"A_COMPL_DIVIDE"}; 
A_GISVEC(A68_VC ,WMUACTR,VMUACTR,14)
static A68_187   BOUACTR = {"A_MOD"}; 
A_GISVEC(A68_VC ,JOUACTR,BOUACTR,5)
static A68_198   VOUACTR = {" incorrect mode"}; 
A_GISVEC(A68_VC ,WOUACTR,VOUACTR,15)
static A68_182   ZOUACTR = {"A_LI_POWER"}; 
A_GISVEC(A68_VC ,IPUACTR,ZOUACTR,10)
static A68_182   LPUACTR = {"A_LR_POWER"}; 
A_GISVEC(A68_VC ,UPUACTR,LPUACTR,10)
static A68_195   YPUACTR = {"A_COMPL_POWER"}; 
A_GISVEC(A68_VC ,FQUACTR,YPUACTR,13)
static A68_213   ARUACTR = {"A_COMPL_I"}; 
A_GISVEC(A68_VC ,IRUACTR,ARUACTR,9)
static A68_213   LRUACTR = {"A_COMPL_I"}; 
A_GISVEC(A68_VC ,RRUACTR,LRUACTR,9)
static A68_186   ZRUACTR = {"SHL"}; 
A_GISVEC(A68_VC ,BSUACTR,ZRUACTR,3)
static A68_186   CSUACTR = {"SHR"}; 
A_GISVEC(A68_VC ,DSUACTR,CSUACTR,3)
static A68_219   ESUACTR = {"ADICOPS SHL or SHR: illegal op number"}; 
A_GISVEC(A68_VC ,FSUACTR,ESUACTR,37)
static A68_189   MSUACTR = {"A_"}; 
A_GISVEC(A68_VC ,NSUACTR,MSUACTR,2)
static A68_188   ZSUACTR = {"A_ELEM"}; 
A_GISVEC(A68_VC ,KTUACTR,ZSUACTR,6)
static A68_189   PUUACTR = {" ;"}; 
A_GISVEC(A68_VC ,QUUACTR,PUUACTR,2)
static A68_189   BVUACTR = {"+="}; 
A_GISVEC(A68_VC ,DVUACTR,BVUACTR,2)
static A68_189   FVUACTR = {"+="}; 
A_GISVEC(A68_VC ,GVUACTR,FVUACTR,2)
static A68_194   IVUACTR = {"A_COMPL_PLUSAB"}; 
A_GISVEC(A68_VC ,JVUACTR,IVUACTR,14)
static A68_185   NVUACTR = {"A_VC_PLUSAB"}; 
A_GISVEC(A68_VC ,OVUACTR,NVUACTR,11)
static A68_185   QVUACTR = {"A_RC_PLUSAB"}; 
A_GISVEC(A68_VC ,RVUACTR,QVUACTR,11)
static A68_222   EWUACTR = {"v1: mode isnt vec[]char,flex vec[]char"}; 
A_GISVEC(A68_VC ,FWUACTR,EWUACTR,38)
static A68_185   GWUACTR = {"A_VC_TOPLUS"}; 
A_GISVEC(A68_VC ,IWUACTR,GWUACTR,11)
static A68_123   KWUACTR = {"v2: mode isnt []char,flex []char"}; 
A_GISVEC(A68_VC ,LWUACTR,KWUACTR,32)
static A68_185   MWUACTR = {"A_RC_TOPLUS"}; 
A_GISVEC(A68_VC ,NWUACTR,MWUACTR,11)
static A68_189   AXUACTR = {"-="}; 
A_GISVEC(A68_VC ,CXUACTR,AXUACTR,2)
static A68_198   EXUACTR = {"A_COMPL_MINUSAB"}; 
A_GISVEC(A68_VC ,FXUACTR,EXUACTR,15)
static A68_189   UXUACTR = {"*="}; 
A_GISVEC(A68_VC ,WXUACTR,UXUACTR,2)
static A68_189   YXUACTR = {"*="}; 
A_GISVEC(A68_VC ,ZXUACTR,YXUACTR,2)
static A68_198   BYUACTR = {"A_COMPL_TIMESAB"}; 
A_GISVEC(A68_VC ,CYUACTR,BYUACTR,15)
static A68_197   GYUACTR = {"A_VC_TIMESAB"}; 
A_GISVEC(A68_VC ,HYUACTR,GYUACTR,12)
static A68_197   JYUACTR = {"A_RC_TIMESAB"}; 
A_GISVEC(A68_VC ,KYUACTR,JYUACTR,12)
static A68_189   XYUACTR = {"/="}; 
A_GISVEC(A68_VC ,ZYUACTR,XYUACTR,2)
static A68_64   NZUACTR = {"A_MODAB"}; 
A_GISVEC(A68_VC ,OZUACTR,NZUACTR,7)
static A68_189   AAVACTR = {"/="}; 
A_GISVEC(A68_VC ,BAVACTR,AAVACTR,2)
static A68_195   EAVACTR = {"A_COMPL_DIVAB"}; 
A_GISVEC(A68_VC ,FAVACTR,EAVACTR,13)
static A68_189   PAVACTR = {"=="}; 
A_GISVEC(A68_VC ,RAVACTR,PAVACTR,2)
static A68_189   SAVACTR = {"!="}; 
A_GISVEC(A68_VC ,TAVACTR,SAVACTR,2)
static A68_223   UAVACTR = {" illegal op number"}; 
A_GISVEC(A68_VC ,VAVACTR,UAVACTR,18)
static A68_189   CBVACTR = {"!="}; 
A_GISVEC(A68_VC ,DBVACTR,CBVACTR,2)
static A68_189   EBVACTR = {"! "}; 
A_GISVEC(A68_VC ,GBVACTR,EBVACTR,2)
static A68_201   HBVACTR = {""}; 
A_GISVEC(A68_VC ,IBVACTR,HBVACTR,0)
static A68_186   JBVACTR = {"A_R"}; 
A_GISVEC(A68_VC ,LBVACTR,JBVACTR,3)
static A68_186   MBVACTR = {"A_V"}; 
A_GISVEC(A68_VC ,NBVACTR,MBVACTR,3)
static A68_182   OBVACTR = {"STRUCTCOMP"}; 
A_GISVEC(A68_VC ,QBVACTR,OBVACTR,10)
static A68_224   IDVACTR = {"CYCLE not implemented"}; 
A_GISVEC(A68_VC ,JDVACTR,IDVACTR,21)
static A68_209  PDVACTR_dyadicsemantics;
static A68_209  TDVACTR_dyadicbiopsemantics;

A_STATIC A68_VOID  UJTACTR_simplemonop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Op, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FKTACTR_simpledyop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SKTACTR_monadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  YKTACTR_monadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ULTACTR_monadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  MMTACTR_monadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  DNTACTR_not(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  VNTACTR_abs(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ZOTACTR_bin(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  OPTACTR_repr(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  DQTACTR_lengthen(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  TQTACTR_shorten(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  JRTACTR_odd(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  YRTACTR_sign(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  MSTACTR_round(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  GUTACTR_entier(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HWTACTR_simplemoncomp(A68_VC  Mac, A68_55 * Root, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  SWTACTR_re(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  AXTACTR_im(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  IXTACTR_arg(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  WXTACTR_conj(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A68_VOID  MZTACTR_monadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue);

A_STATIC A68_VOID  CAUACTR_complexop(A68_125  Modes, A68_VC  Op, A68_VC  Name, A68_55 * Left, A68_55 * Right, A68_BOOL  Lval, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PBUACTR_dyadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  SCUACTR_dyadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  IDUACTR_dyadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  YDUACTR_dyadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  OEUACTR_and(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HFUACTR_or(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  AGUACTR_lessnotless(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  MHUACTR_lesseqgreatereq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  DJUACTR_eqnoteq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  XKUACTR_times(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  JMUACTR_divide(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HNUACTR_over(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  TNUACTR_mod(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ROUACTR_power(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  MQUACTR_castvalue(A68_INT  Mode, A68_55 * Value, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TQUACTR_imaginary(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  YRUACTR_shiftleftright(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  VSUACTR_elem(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_BITS  TTUACTR_abattribute(A68_BOOL  Noref, A68_55 * Op);

A_STATIC A68_VOID  AUUACTR_simpleabop(A68_BOOL  Noref, A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_56  *ReturnedValue);

A_STATIC A68_VOID  XUUACTR_plusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  AWUACTR_plusto(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  WWUACTR_minusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  QXUACTR_timesab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  TYUACTR_overab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  IZUACTR_modab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  VZUACTR_divab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  OAVACTR_isisnt(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HDVACTR_anonymous(A68_55 * V, A68_INT  I, A68_INT  J, A68_55  *ReturnedValue);

A68_VOID  WDVACTR_dyadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue);

A_STATIC A68_VOID  UJTACTR_simplemonop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Op, A68_VC  *ReturnedValue)
{ 
A68_VC  VJTACTR;  /* clause result */
A68_169  WJTACTR;  /* OPERATORS - mode -> union mode */
A68_172  XJTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YJTACTR;  /* avoid structure result */
A68_VC  ZJTACTR;  /* avoid structure result */
A68_VC  AKTACTR;  /* avoid structure result */
A_PROC_ENTRY(simplemonop);
 /* line 85: */
 /* line 86: */
if ( Macro )
{ 
 /* line 87: */
ENQACTR_usemacro( Oper, A_HVEC(XJTACTR,A_UNITE(WJTACTR,mode1,1,Op),A68_169 ), &YJTACTR );
VJTACTR = YJTACTR;
} 
else
{ 
 /* line 88: */
NCQACTR_bracketcfragment( Op, &ZJTACTR );
JIAACTR_bracket( A_VC_PLUS(Oper,ZJTACTR), &AKTACTR );
VJTACTR = AKTACTR;
} 
A_PROC_EXIT(simplemonop);
*ReturnedValue = (VJTACTR);
return;
} 
#undef NL
 /* line 91: */

A_STATIC A68_VOID  FKTACTR_simpledyop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_VC  *ReturnedValue)
{ 
A68_192  GKTACTR;  /* collateral clause result */
A68_169  HKTACTR;  /* OPERATORS - mode -> union mode */
A68_169  IKTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JKTACTR;  /* clause result */
A68_172  KKTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LKTACTR;  /* avoid structure result */
A68_VC  MKTACTR;  /* avoid structure result */
A68_VC  NKTACTR;  /* avoid structure result */
A68_VC  OKTACTR;  /* avoid structure result */
A_PROC_ENTRY(simpledyop);
 /* line 92: */
 /* line 93: */
if ( Macro )
{ 
GKTACTR.data[0] = A_UNITE(HKTACTR,mode1,1,Left);
GKTACTR.data[1] = A_UNITE(IKTACTR,mode1,1,Right);
 /* line 94: */
 /* line 95: */
ENQACTR_usemacro( Oper, A_HISVEC(KKTACTR,GKTACTR,2,A68_169 ), &LKTACTR );
JKTACTR = LKTACTR;
} 
else
{ 
 /* line 96: */
 /* line 97: */
NCQACTR_bracketcfragment( Left, &MKTACTR );
NCQACTR_bracketcfragment( Right, &NKTACTR );
JIAACTR_bracket( A_VC_PLUS(A_VC_PLUS(MKTACTR,Oper),NKTACTR), &OKTACTR );
JKTACTR = OKTACTR;
} 
A_PROC_EXIT(simpledyop);
*ReturnedValue = (JKTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SKTACTR_monadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * TKTACTR_op;
A68_55  UKTACTR;  /* clause result */
A_PROC_ENTRY(monadicplus);
 /* line 100: */
 /* line 101: */
{ 
QWQACTR_eval1(Root, (&TKTACTR_op));
 /* line 102: */
UKTACTR = (*TKTACTR_op);
} 
A_PROC_EXIT(monadicplus);
*ReturnedValue = (UKTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YKTACTR_monadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * ZKTACTR_op;
A68_55  ALTACTR;  /* collateral clause result */
A68_59  BLTACTR;  /* avoid structure result */
A68_59  CLTACTR_temp;
A68_192  ELTACTR;  /* collateral clause result */
A68_169  FLTACTR;  /* OPERATORS - mode -> union mode */
A68_169  GLTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * HLTACTR;  /* YIELD */
A68_172  ILTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KLTACTR;  /* avoid structure result */
A68_56  LLTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MLTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NLTACTR;  /* avoid structure result */
A68_VC  OLTACTR;  /* avoid structure result */
A68_56  PLTACTR;  /* OPERATORS - mode -> union mode */
A68_55  QLTACTR;  /* clause result */
A_PROC_ENTRY(monadicminus);
 /* line 109: */
 /* line 110: */
{ 
QWQACTR_eval1(Root, (&ZKTACTR_op));
 /* line 111: */
 /* line 112: */
ALTACTR.Mode = (*(&(Root->Mode)));
 /* line 113: */
ALTACTR.Info = (A68_BITS )((A68_BITS )((*(&(ZKTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 114: */
if ( (Version==3) )
{ 
A_CALLPROC(KLOACTR_new,((*(&(Root->Mode))), A_VC_PLUS(RHTACTR_qminus,QJTACTR_qcomplex), &BLTACTR),((*(&(Root->Mode))), A_VC_PLUS(RHTACTR_qminus,QJTACTR_qcomplex), &BLTACTR,(KLOACTR_new).nonlocals));
CLTACTR_temp = BLTACTR;
 /* line 115: */
ELTACTR.data[0] = A_UNITE(FLTACTR,mode3,3,CLTACTR_temp);
HLTACTR = VOQACTR_yield(A_VC_PLUS(RHTACTR_qminus,QJTACTR_qcomplex), ZKTACTR_op) ;
ELTACTR.data[1] = A_UNITE(GLTACTR,mode1,1,HLTACTR);
 /* line 116: */
ENQACTR_usemacro( JLTACTR, A_HISVEC(ILTACTR,ELTACTR,2,A68_169 ), &KLTACTR );
ALTACTR.Extra = A_UNITE(LLTACTR,mode6,6,KLTACTR);
} 
else
{ 
 /* line 117: */
 /* line 118: */
 /* line 119: */
NCQACTR_bracketcfragment( ZKTACTR_op, &NLTACTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(MLTACTR,'-',A68_CHAR ),NLTACTR), &OLTACTR );
ALTACTR.Extra = A_UNITE(PLTACTR,mode6,6,OLTACTR);
} 
QLTACTR = ALTACTR;
} 
A_PROC_EXIT(monadicminus);
*ReturnedValue = (QLTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ULTACTR_monadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * VLTACTR_op;
A68_55  WLTACTR;  /* collateral clause result */
A68_VC  YLTACTR;  /* avoid structure result */
A68_56  AMTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BMTACTR;  /* YIELD */
A68_VC  DMTACTR;  /* avoid structure result */
A68_56  FMTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GMTACTR;  /* YIELD */
A68_56  HMTACTR;  /* OPERATORS - skip to mode */
A68_55  IMTACTR;  /* clause result */
A_PROC_ENTRY(monadicupb);
 /* line 125: */
 /* line 126: */
{ 
QWQACTR_eval1(Root, (&VLTACTR_op));
 /* line 127: */
 /* line 128: */
WLTACTR.Mode = (*(&(Root->Mode)));
 /* line 129: */
WLTACTR.Info = (A68_BITS )((A68_BITS )((*(&(VLTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 130: */
if ( ((Version==1)|(Version==3)) )
{ 
 /* line 131: */
NCQACTR_bracketcfragment( VLTACTR_op, &YLTACTR );
BMTACTR = A_VC_PLUS(YLTACTR,ZLTACTR) ;
WLTACTR.Extra = A_UNITE(AMTACTR,mode6,6,BMTACTR);
} 
else
{ 
 /* line 132: */
if ( (Version==2) )
{ 
 /* line 133: */
NCQACTR_bracketcfragment( VLTACTR_op, &DMTACTR );
GMTACTR = A_VC_PLUS(DMTACTR,EMTACTR) ;
WLTACTR.Extra = A_UNITE(FMTACTR,mode6,6,GMTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(IGTACTR_qmupb,CGTACTR_qvfault), A68_FALSE);
 /* line 134: */
 /* line 135: */
 /* line 136: */
WLTACTR.Extra = HMTACTR;
} 
} 
IMTACTR = WLTACTR;
} 
A_PROC_EXIT(monadicupb);
*ReturnedValue = (IMTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MMTACTR_monadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * NMTACTR_op;
A68_55  OMTACTR;  /* collateral clause result */
A68_56  RMTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SMTACTR;  /* YIELD */
A68_VC  UMTACTR;  /* avoid structure result */
A68_56  WMTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XMTACTR;  /* YIELD */
A68_56  YMTACTR;  /* OPERATORS - skip to mode */
A68_55  ZMTACTR;  /* clause result */
A_PROC_ENTRY(monadiclwb);
 /* line 142: */
 /* line 143: */
{ 
QWQACTR_eval1(Root, (&NMTACTR_op));
 /* line 144: */
 /* line 145: */
OMTACTR.Mode = (*(&(Root->Mode)));
 /* line 146: */
OMTACTR.Info = (A68_BITS )((A68_BITS )((*(&(NMTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 147: */
 /* line 148: */
if ( ((Version==1)|(Version==3)) )
{ 
SMTACTR = QMTACTR ;
OMTACTR.Extra = A_UNITE(RMTACTR,mode6,6,SMTACTR);
} 
else
{ 
 /* line 149: */
if ( (Version==2) )
{ 
 /* line 150: */
NCQACTR_bracketcfragment( NMTACTR_op, &UMTACTR );
XMTACTR = A_VC_PLUS(UMTACTR,VMTACTR) ;
OMTACTR.Extra = A_UNITE(WMTACTR,mode6,6,XMTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(LGTACTR_qmlwb,CGTACTR_qvfault), A68_FALSE);
 /* line 151: */
 /* line 152: */
 /* line 153: */
OMTACTR.Extra = YMTACTR;
} 
} 
ZMTACTR = OMTACTR;
} 
A_PROC_EXIT(monadiclwb);
*ReturnedValue = (ZMTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DNTACTR_not(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * ENTACTR_op;
A68_55  FNTACTR;  /* collateral clause result */
A68_VC  GNTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HNTACTR;  /* avoid structure result */
A68_56  INTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JNTACTR;  /* YIELD */
A68_VC  KNTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LNTACTR;  /* avoid structure result */
A68_56  MNTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NNTACTR;  /* YIELD */
A68_56  QNTACTR;  /* OPERATORS - skip to mode */
A68_55  RNTACTR;  /* clause result */
A_PROC_ENTRY(not);
 /* line 160: */
 /* line 161: */
{ 
QWQACTR_eval1(Root, (&ENTACTR_op));
 /* line 162: */
 /* line 163: */
FNTACTR.Mode = (*(&(Root->Mode)));
 /* line 164: */
FNTACTR.Info = (A68_BITS )((A68_BITS )((*(&(ENTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 165: */
switch ( Version )
{ 
case 1: 
 /* line 166: */
NCQACTR_bracketcfragment( ENTACTR_op, &HNTACTR );
JNTACTR = A_VC_PLUS(A_HVEC(GNTACTR,'!',A68_CHAR ),HNTACTR) ;
FNTACTR.Extra = A_UNITE(INTACTR,mode6,6,JNTACTR);
break;
case 2: 
 /* line 167: */
NCQACTR_bracketcfragment( ENTACTR_op, &LNTACTR );
NNTACTR = A_VC_PLUS(A_HVEC(KNTACTR,'~',A68_CHAR ),LNTACTR) ;
FNTACTR.Extra = A_UNITE(MNTACTR,mode6,6,NNTACTR);
break;
default: 
WXIACTR_assert(A_VC_PLUS(PNTACTR,CGTACTR_qvfault), A68_FALSE);
 /* line 168: */
 /* line 169: */
 /* line 170: */
FNTACTR.Extra = QNTACTR;
break;
} 
RNTACTR = FNTACTR;
} 
A_PROC_EXIT(not);
*ReturnedValue = (RNTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VNTACTR_abs(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * WNTACTR_op;
A68_VC  XNTACTR;  /* clause result */
A68_VC  YNTACTR;  /* avoid structure result */
A68_VC  ZNTACTR;  /* avoid structure result */
A68_VC  COTACTR;  /* avoid structure result */
A68_VC  DOTACTR;  /* avoid structure result */
A68_VC  EOTACTR;  /* avoid structure result */
A68_VC  JOTACTR;  /* avoid structure result */
A68_VC  OOTACTR;  /* avoid structure result */
A68_VC  ROTACTR;  /* avoid structure result */
A68_VC  SOTACTR_body;
A68_55  TOTACTR;  /* collateral clause result */
A68_56  UOTACTR;  /* OPERATORS - mode -> union mode */
A68_55  VOTACTR;  /* clause result */
A_PROC_ENTRY(abs);
 /* line 180: */
 /* line 181: */
{ 
QWQACTR_eval1(Root, (&WNTACTR_op));
 /* line 182: */
 /* line 183: */
 /* line 184: */
switch ( Version )
{ 
case 1: 
 /* line 185: */
GYPACTR_getcfragment( WNTACTR_op, &YNTACTR );
JIAACTR_bracket( YNTACTR, &ZNTACTR );
XNTACTR = ZNTACTR;
break;
case 2: 
 /* line 186: */
NCQACTR_bracketcfragment( WNTACTR_op, &COTACTR );
XNTACTR = A_VC_PLUS(BOTACTR,COTACTR);
break;
case 3: 
 /* line 187: */
FLNACTR_cast( (*(&(Root->Mode))), &DOTACTR );
NCQACTR_bracketcfragment( WNTACTR_op, &EOTACTR );
XNTACTR = A_VC_PLUS(DOTACTR,EOTACTR);
break;
case 4: 
 /* line 188: */
UJTACTR_simplemonop( A68_TRUE, IOTACTR, VOQACTR_yield(A_VC_PLUS(OGTACTR_qabs,HOTACTR), WNTACTR_op), &JOTACTR );
XNTACTR = JOTACTR;
break;
case 5: 
 /* line 189: */
UJTACTR_simplemonop( A68_TRUE, NOTACTR, VOQACTR_yield(A_VC_PLUS(OGTACTR_qabs,MOTACTR), WNTACTR_op), &OOTACTR );
XNTACTR = OOTACTR;
break;
case 6: 
 /* line 190: */
UJTACTR_simplemonop( A68_TRUE, QOTACTR, VOQACTR_yield(A_VC_PLUS(OGTACTR_qabs,QJTACTR_qcomplex), WNTACTR_op), &ROTACTR );
XNTACTR = ROTACTR;
break;
default: 
A_IMP_SKIP ;
break;
} 
SOTACTR_body = XNTACTR;
 /* line 191: */
TOTACTR.Mode = (*(&(Root->Mode)));
TOTACTR.Info = (A68_BITS )((A68_BITS )((*(&(WNTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 192: */
TOTACTR.Extra = A_UNITE(UOTACTR,mode6,6,SOTACTR_body);
VOTACTR = TOTACTR;
} 
A_PROC_EXIT(abs);
*ReturnedValue = (VOTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZOTACTR_bin(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  APTACTR;  /* clause result */
A68_55  BPTACTR;  /* avoid structure result */
A68_55 * CPTACTR_op;
A68_55  DPTACTR;  /* collateral clause result */
A68_VC  EPTACTR;  /* avoid structure result */
A68_VC  FPTACTR;  /* avoid structure result */
A68_56  GPTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HPTACTR;  /* YIELD */
A68_56  KPTACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(bin);
 /* line 198: */
 /* line 199: */
 /* line 200: */
 /* line 201: */
if ( (Version==3) )
{ 
 /* line 202: */
 /* line 203: */
JATACTR_biop99( Root, &BPTACTR );
APTACTR = BPTACTR;
} 
else
{ 
QWQACTR_eval1(Root, (&CPTACTR_op));
 /* line 204: */
 /* line 205: */
DPTACTR.Mode = (*(&(Root->Mode)));
 /* line 206: */
DPTACTR.Info = (A68_BITS )((A68_BITS )((*(&(CPTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 207: */
if ( (Version==1) )
{ 
 /* line 208: */
FLNACTR_cast( ((*(&(CPTACTR_op->Mode)))-4), &EPTACTR );
NCQACTR_bracketcfragment( CPTACTR_op, &FPTACTR );
HPTACTR = A_VC_PLUS(EPTACTR,FPTACTR) ;
DPTACTR.Extra = A_UNITE(GPTACTR,mode6,6,HPTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(JPTACTR,CGTACTR_qvfault), A68_FALSE);
 /* line 209: */
 /* line 210: */
 /* line 211: */
DPTACTR.Extra = KPTACTR;
} 
APTACTR = DPTACTR;
} 
A_PROC_EXIT(bin);
*ReturnedValue = (APTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OPTACTR_repr(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * PPTACTR_op;
A68_55  QPTACTR;  /* collateral clause result */
A68_VC  TPTACTR;  /* avoid structure result */
A68_56  UPTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VPTACTR;  /* YIELD */
A68_56  YPTACTR;  /* OPERATORS - skip to mode */
A68_55  ZPTACTR;  /* clause result */
A_PROC_ENTRY(repr);
 /* line 217: */
 /* line 218: */
{ 
QWQACTR_eval1(Root, (&PPTACTR_op));
 /* line 219: */
 /* line 220: */
QPTACTR.Mode = (*(&(Root->Mode)));
 /* line 221: */
QPTACTR.Info = (A68_BITS )((A68_BITS )((*(&(PPTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 224: */
if ( (Version==1) )
{ 
 /* line 225: */
NCQACTR_bracketcfragment( PPTACTR_op, &TPTACTR );
VPTACTR = A_VC_PLUS(SPTACTR,TPTACTR) ;
QPTACTR.Extra = A_UNITE(UPTACTR,mode6,6,VPTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(XPTACTR,CGTACTR_qvfault), A68_FALSE);
 /* line 226: */
 /* line 227: */
 /* line 228: */
QPTACTR.Extra = YPTACTR;
} 
ZPTACTR = QPTACTR;
} 
A_PROC_EXIT(repr);
*ReturnedValue = (ZPTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DQTACTR_lengthen(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * EQTACTR_op;
A68_INT  FQTACTR_m;
A68_BOOL  HQTACTR;  /* optbool result */
A68_VC  JQTACTR;  /* avoid structure result */
A68_55  KQTACTR;  /* collateral clause result */
A68_VC  LQTACTR;  /* avoid structure result */
A68_VC  MQTACTR;  /* avoid structure result */
A68_56  NQTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OQTACTR;  /* YIELD */
A68_55  PQTACTR;  /* clause result */
A_PROC_ENTRY(lengthen);
 /* line 231: */
 /* line 232: */
{ 
QWQACTR_eval1(Root, (&EQTACTR_op));
 /* line 233: */
FQTACTR_m = (*(&(EQTACTR_op->Mode)));
 /* line 234: */
 /* line 235: */
HQTACTR = (FQTACTR_m!=13);
if ( HQTACTR )
{HQTACTR = (FQTACTR_m!=17);
}
if ( HQTACTR )
{HQTACTR = (FQTACTR_m!=21);
}
if ( HQTACTR )
{HQTACTR = (FQTACTR_m!=25);
}
ROAAOSF_whole( FQTACTR_m, 0, &JQTACTR );
WXIACTR_assert(A_VC_PLUS(IQTACTR,JQTACTR), HQTACTR);
 /* line 236: */
 /* line 237: */
KQTACTR.Mode = (*(&(Root->Mode)));
 /* line 238: */
KQTACTR.Info = (A68_BITS )((A68_BITS )((*(&(EQTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 239: */
 /* line 240: */
FLNACTR_cast( (FQTACTR_m+1), &LQTACTR );
NCQACTR_bracketcfragment( EQTACTR_op, &MQTACTR );
OQTACTR = A_VC_PLUS(LQTACTR,MQTACTR) ;
KQTACTR.Extra = A_UNITE(NQTACTR,mode6,6,OQTACTR);
PQTACTR = KQTACTR;
} 
A_PROC_EXIT(lengthen);
*ReturnedValue = (PQTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TQTACTR_shorten(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * UQTACTR_op;
A68_INT  VQTACTR_m;
A68_BOOL  XQTACTR;  /* optbool result */
A68_VC  ZQTACTR;  /* avoid structure result */
A68_55  ARTACTR;  /* collateral clause result */
A68_VC  BRTACTR;  /* avoid structure result */
A68_VC  CRTACTR;  /* avoid structure result */
A68_56  DRTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ERTACTR;  /* YIELD */
A68_55  FRTACTR;  /* clause result */
A_PROC_ENTRY(shorten);
 /* line 243: */
 /* line 244: */
{ 
QWQACTR_eval1(Root, (&UQTACTR_op));
 /* line 245: */
VQTACTR_m = (*(&(UQTACTR_op->Mode)));
 /* line 246: */
 /* line 247: */
XQTACTR = (VQTACTR_m!=10);
if ( XQTACTR )
{XQTACTR = (VQTACTR_m!=14);
}
if ( XQTACTR )
{XQTACTR = (VQTACTR_m!=18);
}
if ( XQTACTR )
{XQTACTR = (VQTACTR_m!=22);
}
ROAAOSF_whole( VQTACTR_m, 0, &ZQTACTR );
WXIACTR_assert(A_VC_PLUS(YQTACTR,ZQTACTR), XQTACTR);
 /* line 248: */
 /* line 249: */
ARTACTR.Mode = (*(&(Root->Mode)));
 /* line 250: */
ARTACTR.Info = (A68_BITS )((A68_BITS )((*(&(UQTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 251: */
 /* line 252: */
FLNACTR_cast( (VQTACTR_m-1), &BRTACTR );
NCQACTR_bracketcfragment( UQTACTR_op, &CRTACTR );
ERTACTR = A_VC_PLUS(BRTACTR,CRTACTR) ;
ARTACTR.Extra = A_UNITE(DRTACTR,mode6,6,ERTACTR);
FRTACTR = ARTACTR;
} 
A_PROC_EXIT(shorten);
*ReturnedValue = (FRTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JRTACTR_odd(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * KRTACTR_op;
A68_55  LRTACTR;  /* collateral clause result */
A68_VC  NRTACTR;  /* avoid structure result */
A68_VC  PRTACTR;  /* avoid structure result */
A68_56  QRTACTR;  /* OPERATORS - mode -> union mode */
A68_56  TRTACTR;  /* OPERATORS - skip to mode */
A68_55  URTACTR;  /* clause result */
A_PROC_ENTRY(odd);
 /* line 258: */
 /* line 259: */
{ 
QWQACTR_eval1(Root, (&KRTACTR_op));
 /* line 260: */
 /* line 261: */
LRTACTR.Mode = (*(&(Root->Mode)));
 /* line 262: */
LRTACTR.Info = (A68_BITS )((A68_BITS )((*(&(KRTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 263: */
if ( (Version==1) )
{ 
 /* line 264: */
NCQACTR_bracketcfragment( KRTACTR_op, &NRTACTR );
JIAACTR_bracket( A_VC_PLUS(NRTACTR,ORTACTR), &PRTACTR );
LRTACTR.Extra = A_UNITE(QRTACTR,mode6,6,PRTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(SRTACTR,CGTACTR_qvfault), A68_FALSE);
 /* line 265: */
 /* line 266: */
 /* line 267: */
 /* line 268: */
LRTACTR.Extra = TRTACTR;
} 
URTACTR = LRTACTR;
} 
A_PROC_EXIT(odd);
*ReturnedValue = (URTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YRTACTR_sign(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * ZRTACTR_op;
A68_55  ASTACTR;  /* collateral clause result */
A68_VC  DSTACTR;  /* avoid structure result */
A68_56  ESTACTR;  /* OPERATORS - mode -> union mode */
A68_56  HSTACTR;  /* OPERATORS - skip to mode */
A68_55  ISTACTR;  /* clause result */
A_PROC_ENTRY(sign);
 /* line 275: */
 /* line 276: */
{ 
QWQACTR_eval1(Root, (&ZRTACTR_op));
 /* line 277: */
 /* line 278: */
ASTACTR.Mode = (*(&(Root->Mode)));
 /* line 279: */
ASTACTR.Info = (A68_BITS )((A68_BITS )((*(&(ZRTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 280: */
if ( ((Version==1)|(Version==2)) )
{ 
 /* line 281: */
UJTACTR_simplemonop( A68_TRUE, CSTACTR, VOQACTR_yield(XGTACTR_qsign, ZRTACTR_op), &DSTACTR );
ASTACTR.Extra = A_UNITE(ESTACTR,mode6,6,DSTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(GSTACTR,CGTACTR_qvfault), A68_FALSE);
 /* line 282: */
 /* line 283: */
 /* line 284: */
 /* line 285: */
ASTACTR.Extra = HSTACTR;
} 
ISTACTR = ASTACTR;
} 
A_PROC_EXIT(sign);
*ReturnedValue = (ISTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MSTACTR_round(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * NSTACTR_op;
A68_INT  OSTACTR_m;
A68_VC  RSTACTR;  /* avoid structure result */
A68_55  SSTACTR;  /* collateral clause result */
A68_VC  TSTACTR;  /* OPERATORS - istruct -> vector */
A68_64  USTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VSTACTR_temp1;
A68_202  WSTACTR;  /* collateral clause result */
A68_76  ZSTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ATTACTR;  /* YIELD */
A68_76  BTTACTR;  /* OPERATORS - mode -> union mode */
A68_76  CTTACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  DTTACTR;  /* YIELD */
A68_76  ITTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JTTACTR;  /* YIELD */
A68_76  MTTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NTTACTR;  /* YIELD */
A68_76  OTTACTR;  /* OPERATORS - mode -> union mode */
A68_75  PTTACTR;  /* OPERATORS - istruct -> vector */
A68_203  RTTACTR;  /* collateral clause result */
A68_169  STTACTR;  /* OPERATORS - mode -> union mode */
A68_169  TTTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * UTTACTR;  /* YIELD */
A68_VC  VTTACTR;  /* avoid structure result */
A68_169  WTTACTR;  /* OPERATORS - mode -> union mode */
A68_172  XTTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZTTACTR;  /* avoid structure result */
A68_56  AUTACTR;  /* OPERATORS - mode -> union mode */
A68_56  BUTACTR;  /* OPERATORS - skip to mode */
A68_55  CUTACTR;  /* clause result */
A_PROC_ENTRY(round);
 /* line 295: */
 /* line 296: */
{ 
QWQACTR_eval1(Root, (&NSTACTR_op));
 /* line 297: */
OSTACTR_m = (*(&(NSTACTR_op->Mode)));
 /* line 298: */
 /* line 299: */
ROAAOSF_whole( OSTACTR_m, 0, &RSTACTR );
WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(RGTACTR_qround,QSTACTR),RSTACTR), ((OSTACTR_m<=21)&(OSTACTR_m>=18)));
 /* line 300: */
 /* line 301: */
SSTACTR.Mode = (*(&(Root->Mode)));
 /* line 302: */
SSTACTR.Info = (A68_BITS )((A68_BITS )((*(&(NSTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 303: */
if ( (Version==1) )
{ 
USTACTR = QIMACTR_newuniquename() ;
VSTACTR_temp1 = A_HISVEC(TSTACTR,USTACTR,7,A68_CHAR );
 /* line 304: */
 /* line 305: */
ATTACTR = YSTACTR ;
WSTACTR.data[0] = A_UNITE(ZSTACTR,mode2,2,ATTACTR);
WSTACTR.data[1] = A_UNITE(BTTACTR,mode2,2,VSTACTR_temp1);
 /* line 306: */
DTTACTR = ';' ;
WSTACTR.data[2] = A_UNITE(CTTACTR,mode1,1,DTTACTR);
if ( AQIACTR_verboseoption )
{ 
JTTACTR = A_VC_PLUS(A_VC_PLUS(GTTACTR,RGTACTR_qround),HTTACTR) ;
WSTACTR.data[3] = A_UNITE(ITTACTR,mode2,2,JTTACTR);
} 
else
{ 
 /* line 307: */
NTTACTR = LTTACTR ;
WSTACTR.data[3] = A_UNITE(MTTACTR,mode2,2,NTTACTR);
} 
WSTACTR.data[4] = A_UNITE(OTTACTR,mode4,4,EIAACTR_cnewline);
 /* line 308: */
MDMACTR_writecstream(A_HISVEC(PTTACTR,WSTACTR,5,A68_76 ), QSLACTR_locdecstream(VRLACTR_currentlevel()));
 /* line 309: */
RTTACTR.data[0] = A_UNITE(STTACTR,mode2,2,VSTACTR_temp1);
UTTACTR = VOQACTR_yield(RGTACTR_qround, NSTACTR_op) ;
RTTACTR.data[1] = A_UNITE(TTTACTR,mode1,1,UTTACTR);
FLNACTR_cast( (OSTACTR_m-4), &VTTACTR );
RTTACTR.data[2] = A_UNITE(WTTACTR,mode2,2,VTTACTR);
 /* line 310: */
ENQACTR_usemacro( YTTACTR, A_HISVEC(XTTACTR,RTTACTR,3,A68_169 ), &ZTTACTR );
SSTACTR.Extra = A_UNITE(AUTACTR,mode6,6,ZTTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(RGTACTR_qround,CGTACTR_qvfault), A68_FALSE);
 /* line 311: */
 /* line 312: */
 /* line 313: */
 /* line 314: */
SSTACTR.Extra = BUTACTR;
} 
CUTACTR = SSTACTR;
} 
A_PROC_EXIT(round);
*ReturnedValue = (CUTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GUTACTR_entier(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * HUTACTR_op;
A68_INT  IUTACTR_m;
A68_VC  LUTACTR;  /* avoid structure result */
A68_55  MUTACTR;  /* collateral clause result */
A68_VC  NUTACTR;  /* OPERATORS - istruct -> vector */
A68_64  OUTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PUTACTR_temp1;
A68_VC  QUTACTR;  /* OPERATORS - istruct -> vector */
A68_64  RUTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SUTACTR_temp2;
A68_205  TUTACTR;  /* collateral clause result */
A68_76  WUTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XUTACTR;  /* YIELD */
A68_76  YUTACTR;  /* OPERATORS - mode -> union mode */
A68_76  ZUTACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  AVTACTR;  /* YIELD */
A68_76  BVTACTR;  /* OPERATORS - mode -> union mode */
A68_76  CVTACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  DVTACTR;  /* YIELD */
A68_76  IVTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JVTACTR;  /* YIELD */
A68_76  MVTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NVTACTR;  /* YIELD */
A68_76  OVTACTR;  /* OPERATORS - mode -> union mode */
A68_75  PVTACTR;  /* OPERATORS - istruct -> vector */
A68_207  RVTACTR;  /* collateral clause result */
A68_169  SVTACTR;  /* OPERATORS - mode -> union mode */
A68_169  TVTACTR;  /* OPERATORS - mode -> union mode */
A68_169  UVTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * VVTACTR;  /* YIELD */
A68_VC  WVTACTR;  /* avoid structure result */
A68_169  XVTACTR;  /* OPERATORS - mode -> union mode */
A68_172  YVTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AWTACTR;  /* avoid structure result */
A68_56  BWTACTR;  /* OPERATORS - mode -> union mode */
A68_56  CWTACTR;  /* OPERATORS - skip to mode */
A68_55  DWTACTR;  /* clause result */
A_PROC_ENTRY(entier);
 /* line 326: */
 /* line 327: */
{ 
QWQACTR_eval1(Root, (&HUTACTR_op));
 /* line 328: */
IUTACTR_m = (*(&(HUTACTR_op->Mode)));
 /* line 329: */
 /* line 330: */
ROAAOSF_whole( IUTACTR_m, 0, &LUTACTR );
WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(UGTACTR_qentier,KUTACTR),LUTACTR), ((IUTACTR_m<=21)&(IUTACTR_m>=18)));
 /* line 331: */
 /* line 332: */
MUTACTR.Mode = (*(&(Root->Mode)));
 /* line 333: */
MUTACTR.Info = (A68_BITS )((A68_BITS )((*(&(HUTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 334: */
if ( (Version==1) )
{ 
OUTACTR = QIMACTR_newuniquename() ;
PUTACTR_temp1 = A_HISVEC(NUTACTR,OUTACTR,7,A68_CHAR );
 /* line 335: */
RUTACTR = QIMACTR_newuniquename() ;
SUTACTR_temp2 = A_HISVEC(QUTACTR,RUTACTR,7,A68_CHAR );
 /* line 336: */
 /* line 337: */
XUTACTR = VUTACTR ;
TUTACTR.data[0] = A_UNITE(WUTACTR,mode2,2,XUTACTR);
TUTACTR.data[1] = A_UNITE(YUTACTR,mode2,2,PUTACTR_temp1);
AVTACTR = ',' ;
TUTACTR.data[2] = A_UNITE(ZUTACTR,mode1,1,AVTACTR);
TUTACTR.data[3] = A_UNITE(BVTACTR,mode2,2,SUTACTR_temp2);
 /* line 338: */
DVTACTR = ';' ;
TUTACTR.data[4] = A_UNITE(CVTACTR,mode1,1,DVTACTR);
if ( AQIACTR_verboseoption )
{ 
JVTACTR = A_VC_PLUS(A_VC_PLUS(GVTACTR,UGTACTR_qentier),HVTACTR) ;
TUTACTR.data[5] = A_UNITE(IVTACTR,mode2,2,JVTACTR);
} 
else
{ 
 /* line 339: */
NVTACTR = LVTACTR ;
TUTACTR.data[5] = A_UNITE(MVTACTR,mode2,2,NVTACTR);
} 
TUTACTR.data[6] = A_UNITE(OVTACTR,mode4,4,EIAACTR_cnewline);
 /* line 340: */
MDMACTR_writecstream(A_HISVEC(PVTACTR,TUTACTR,7,A68_76 ), QSLACTR_locdecstream(VRLACTR_currentlevel()));
 /* line 341: */
RVTACTR.data[0] = A_UNITE(SVTACTR,mode2,2,PUTACTR_temp1);
RVTACTR.data[1] = A_UNITE(TVTACTR,mode2,2,SUTACTR_temp2);
VVTACTR = VOQACTR_yield(UGTACTR_qentier, HUTACTR_op) ;
RVTACTR.data[2] = A_UNITE(UVTACTR,mode1,1,VVTACTR);
FLNACTR_cast( (IUTACTR_m-4), &WVTACTR );
RVTACTR.data[3] = A_UNITE(XVTACTR,mode2,2,WVTACTR);
 /* line 342: */
ENQACTR_usemacro( ZVTACTR, A_HISVEC(YVTACTR,RVTACTR,4,A68_169 ), &AWTACTR );
MUTACTR.Extra = A_UNITE(BWTACTR,mode6,6,AWTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(UGTACTR_qentier,CGTACTR_qvfault), A68_FALSE);
 /* line 343: */
 /* line 344: */
 /* line 345: */
MUTACTR.Extra = CWTACTR;
} 
DWTACTR = MUTACTR;
} 
A_PROC_EXIT(entier);
*ReturnedValue = (DWTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HWTACTR_simplemoncomp(A68_VC  Mac, A68_55 * Root, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * IWTACTR_op;
A68_55  JWTACTR;  /* collateral clause result */
A68_169  KWTACTR;  /* OPERATORS - mode -> union mode */
A68_172  LWTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MWTACTR;  /* avoid structure result */
A68_56  NWTACTR;  /* OPERATORS - mode -> union mode */
A68_55  OWTACTR;  /* clause result */
A_PROC_ENTRY(simplemoncomp);
 /* line 349: */
 /* line 350: */
{ 
QWQACTR_eval1(Root, (&IWTACTR_op));
 /* line 351: */
 /* line 352: */
JWTACTR.Mode = (*(&(Root->Mode)));
 /* line 353: */
JWTACTR.Info = (A68_BITS )((A68_BITS )((*(&(IWTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 354: */
 /* line 355: */
ENQACTR_usemacro( Mac, A_HVEC(LWTACTR,A_UNITE(KWTACTR,mode1,1,IWTACTR_op),A68_169 ), &MWTACTR );
JWTACTR.Extra = A_UNITE(NWTACTR,mode6,6,MWTACTR);
OWTACTR = JWTACTR;
} 
A_PROC_EXIT(simplemoncomp);
*ReturnedValue = (OWTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SWTACTR_re(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  UWTACTR;  /* clause result */
A68_55  WWTACTR;  /* avoid structure result */
A_PROC_ENTRY(re);
 /* line 360: */
HWTACTR_simplemoncomp( VWTACTR, Root, Version, &WWTACTR );
UWTACTR = WWTACTR;
A_PROC_EXIT(re);
*ReturnedValue = (UWTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AXTACTR_im(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  CXTACTR;  /* clause result */
A68_55  EXTACTR;  /* avoid structure result */
A_PROC_ENTRY(im);
 /* line 364: */
HWTACTR_simplemoncomp( DXTACTR, Root, Version, &EXTACTR );
CXTACTR = EXTACTR;
A_PROC_EXIT(im);
*ReturnedValue = (CXTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IXTACTR_arg(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * JXTACTR_op;
A68_55  KXTACTR;  /* collateral clause result */
A68_169  MXTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * NXTACTR;  /* YIELD */
A68_172  OXTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QXTACTR;  /* avoid structure result */
A68_56  RXTACTR;  /* OPERATORS - mode -> union mode */
A68_55  SXTACTR;  /* clause result */
A_PROC_ENTRY(arg);
 /* line 370: */
 /* line 371: */
{ 
QWQACTR_eval1(Root, (&JXTACTR_op));
 /* line 372: */
 /* line 373: */
KXTACTR.Mode = (*(&(Root->Mode)));
 /* line 374: */
KXTACTR.Info = (A68_BITS )((A68_BITS )((*(&(JXTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 375: */
 /* line 376: */
NXTACTR = VOQACTR_yield(GHTACTR_qarg, JXTACTR_op) ;
ENQACTR_usemacro( PXTACTR, A_HVEC(OXTACTR,A_UNITE(MXTACTR,mode1,1,NXTACTR),A68_169 ), &QXTACTR );
KXTACTR.Extra = A_UNITE(RXTACTR,mode6,6,QXTACTR);
SXTACTR = KXTACTR;
} 
A_PROC_EXIT(arg);
*ReturnedValue = (SXTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WXTACTR_conj(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * XXTACTR_op;
A68_59  AYTACTR;  /* avoid structure result */
A68_59  BYTACTR_temp;
A68_55  CYTACTR;  /* collateral clause result */
A68_192  EYTACTR;  /* collateral clause result */
A68_169  FYTACTR;  /* OPERATORS - mode -> union mode */
A68_169  GYTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * HYTACTR;  /* YIELD */
A68_172  IYTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KYTACTR;  /* avoid structure result */
A68_56  LYTACTR;  /* OPERATORS - mode -> union mode */
A68_55  MYTACTR;  /* clause result */
A_PROC_ENTRY(conj);
 /* line 380: */
 /* line 381: */
{ 
QWQACTR_eval1(Root, (&XXTACTR_op));
 /* line 382: */
A_CALLPROC(KLOACTR_new,((*(&(XXTACTR_op->Mode))), ZXTACTR, &AYTACTR),((*(&(XXTACTR_op->Mode))), ZXTACTR, &AYTACTR,(KLOACTR_new).nonlocals));
BYTACTR_temp = AYTACTR;
 /* line 383: */
 /* line 384: */
CYTACTR.Mode = (*(&(Root->Mode)));
 /* line 385: */
CYTACTR.Info = (A68_BITS )((A68_BITS )((*(&(XXTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
EYTACTR.data[0] = A_UNITE(FYTACTR,mode3,3,BYTACTR_temp);
HYTACTR = VOQACTR_yield(JHTACTR_qconj, XXTACTR_op) ;
EYTACTR.data[1] = A_UNITE(GYTACTR,mode1,1,HYTACTR);
 /* line 386: */
 /* line 387: */
ENQACTR_usemacro( JYTACTR, A_HISVEC(IYTACTR,EYTACTR,2,A68_169 ), &KYTACTR );
CYTACTR.Extra = A_UNITE(LYTACTR,mode6,6,KYTACTR);
MYTACTR = CYTACTR;
} 
A_PROC_EXIT(conj);
*ReturnedValue = (MYTACTR);
return;
} 
#undef NL

A68_VOID  MZTACTR_monadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue)
{ 
A68_INT  NZTACTR_param;
A68_BOOL  OZTACTR;  /* clause result */
A68_INT  PZTACTR_opnumber;
A68_INT  QZTACTR;  /* ADICOPS - MOD */
A68_INT  RZTACTR_version;
A68_55  SZTACTR;  /* clause result */
A68_193  TZTACTR;  /* CALL */
A68_55  UZTACTR;  /* avoid structure result */
A68_55  VZTACTR;  /* avoid structure result */
A_PROC_ENTRY(monadicsem);
 /* line 413: */
 /* line 414: */
{ 
NZTACTR_param = (A68_INT )(A68_BITS )((A68_BITS )Rator.Param&ZGAACTR_parammask);
 /* line 415: */
 /* line 416: */
 /* line 417: */
OZTACTR = (NZTACTR_param<RGAACTR_biopnumbersstart);
if ( OZTACTR )
{ 
PZTACTR_opnumber = (NZTACTR_param/SGAACTR_opnumberdivisor);
 /* line 418: */
RZTACTR_version = A_MOD(NZTACTR_param,SGAACTR_opnumberdivisor,QZTACTR);
 /* line 419: */
 /* line 420: */
 /* line 421: */
TZTACTR = A_R1INDEX(JZTACTR_monadicsemantics,PZTACTR_opnumber) ;
A_CALLPROC(TZTACTR,(Root, PZTACTR_opnumber, RZTACTR_version, &UZTACTR),(Root, PZTACTR_opnumber, RZTACTR_version, &UZTACTR,(TZTACTR).nonlocals));
SZTACTR = UZTACTR;
} 
else
{ 
 /* line 422: */
KFTACTR_monadicbiopsemantics( Root, NZTACTR_param, &VZTACTR );
SZTACTR = VZTACTR;
} 
} 
A_PROC_EXIT(monadicsem);
*ReturnedValue = (SZTACTR);
return;
} 
#undef NL
 /* line 426: */

A_STATIC A68_VOID  CAUACTR_complexop(A68_125  Modes, A68_VC  Op, A68_VC  Name, A68_55 * Left, A68_55 * Right, A68_BOOL  Lval, A68_VC  *ReturnedValue)
{ 
A68_55 * FAUACTR_l;
A68_55 * IAUACTR_r;
A68_192  JAUACTR;  /* collateral clause result */
A68_169  KAUACTR;  /* OPERATORS - mode -> union mode */
A68_169  LAUACTR;  /* OPERATORS - mode -> union mode */
A68_172  MAUACTR;  /* clause result */
A68_172  NAUACTR;  /* OPERATORS - istruct -> vector */
A68_203  OAUACTR;  /* collateral clause result */
A68_INT  PAUACTR;  /* YIELD */
A68_59  QAUACTR;  /* avoid structure result */
A68_169  RAUACTR;  /* OPERATORS - mode -> union mode */
A68_169  SAUACTR;  /* OPERATORS - mode -> union mode */
A68_169  TAUACTR;  /* OPERATORS - mode -> union mode */
A68_172  UAUACTR;  /* OPERATORS - istruct -> vector */
A68_207  VAUACTR;  /* collateral clause result */
A68_INT  YAUACTR;  /* YIELD */
A68_59  ZAUACTR;  /* avoid structure result */
A68_169  ABUACTR;  /* OPERATORS - mode -> union mode */
A68_INT  DBUACTR;  /* YIELD */
A68_59  EBUACTR;  /* avoid structure result */
A68_169  FBUACTR;  /* OPERATORS - mode -> union mode */
A68_169  GBUACTR;  /* OPERATORS - mode -> union mode */
A68_169  HBUACTR;  /* OPERATORS - mode -> union mode */
A68_172  IBUACTR;  /* OPERATORS - istruct -> vector */
A68_172  JBUACTR_params;
A68_VC  KBUACTR;  /* clause result */
A68_VC  LBUACTR;  /* avoid structure result */
A_PROC_ENTRY(complexop);
 /* line 427: */
 /* line 428: */
{ 
FAUACTR_l = VOQACTR_yield(A_VC_PLUS(Name,EAUACTR), Left);
IAUACTR_r = VOQACTR_yield(A_VC_PLUS(Name,HAUACTR), Right);
 /* line 429: */
if ( Lval )
{ 
PKAAOSF_orab((&(FAUACTR_l->Info)), VKJACTR_lvalue);
} 
 /* line 430: */
 /* line 431: */
if ( (Modes.upb==0) )
{ 
JAUACTR.data[0] = A_UNITE(KAUACTR,mode1,1,FAUACTR_l);
 /* line 432: */
JAUACTR.data[1] = A_UNITE(LAUACTR,mode1,1,IAUACTR_r);
MAUACTR = A_HISVEC(NAUACTR,JAUACTR,2,A68_169 );
} 
else
{ 
if ( (Modes.upb==1) )
{ 
PAUACTR = 1 ;
A_CALLPROC(KLOACTR_new,(A_VINDEX(Modes,PAUACTR), Name, &QAUACTR),(A_VINDEX(Modes,PAUACTR), Name, &QAUACTR,(KLOACTR_new).nonlocals));
OAUACTR.data[0] = A_UNITE(RAUACTR,mode3,3,QAUACTR);
OAUACTR.data[1] = A_UNITE(SAUACTR,mode1,1,FAUACTR_l);
 /* line 433: */
OAUACTR.data[2] = A_UNITE(TAUACTR,mode1,1,IAUACTR_r);
MAUACTR = A_HISVEC(UAUACTR,OAUACTR,3,A68_169 );
} 
else
{ 
YAUACTR = 1 ;
A_CALLPROC(KLOACTR_new,(A_VINDEX(Modes,YAUACTR), A_VC_PLUS(Name,XAUACTR), &ZAUACTR),(A_VINDEX(Modes,YAUACTR), A_VC_PLUS(Name,XAUACTR), &ZAUACTR,(KLOACTR_new).nonlocals));
VAUACTR.data[0] = A_UNITE(ABUACTR,mode3,3,ZAUACTR);
DBUACTR = 2 ;
A_CALLPROC(KLOACTR_new,(A_VINDEX(Modes,DBUACTR), A_VC_PLUS(Name,CBUACTR), &EBUACTR),(A_VINDEX(Modes,DBUACTR), A_VC_PLUS(Name,CBUACTR), &EBUACTR,(KLOACTR_new).nonlocals));
VAUACTR.data[1] = A_UNITE(FBUACTR,mode3,3,EBUACTR);
VAUACTR.data[2] = A_UNITE(GBUACTR,mode1,1,FAUACTR_l);
 /* line 434: */
VAUACTR.data[3] = A_UNITE(HBUACTR,mode1,1,IAUACTR_r);
MAUACTR = A_HISVEC(IBUACTR,VAUACTR,4,A68_169 );
} 
} 
JBUACTR_params = MAUACTR;
 /* line 435: */
 /* line 436: */
ENQACTR_usemacro( Op, JBUACTR_params, &LBUACTR );
KBUACTR = LBUACTR;
} 
A_PROC_EXIT(complexop);
*ReturnedValue = (KBUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PBUACTR_dyadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * QBUACTR_left;
A68_55 * RBUACTR_right;
A68_VC  TBUACTR;  /* clause result */
A68_VC  VBUACTR;  /* avoid structure result */
A68_VC  WBUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XBUACTR;  /* avoid structure result */
A68_VC  YBUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZBUACTR;  /* avoid structure result */
A68_125  CCUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  DCUACTR;  /* avoid structure result */
A68_VC  GCUACTR;  /* avoid structure result */
A68_VC  JCUACTR;  /* avoid structure result */
A68_VC  KCUACTR;  /* OPERATORS - skip to mode */
A68_VC  LCUACTR_body;
A68_55  MCUACTR;  /* collateral clause result */
A68_56  NCUACTR;  /* OPERATORS - mode -> union mode */
A68_55  OCUACTR;  /* clause result */
A_PROC_ENTRY(dyadicplus);
 /* line 440: */
 /* line 441: */
{ 
RXQACTR_eval2(Root, (&QBUACTR_left), (&RBUACTR_right));
 /* line 442: */
 /* line 443: */
 /* line 444: */
switch ( Version )
{ 
case 1: 
 /* line 445: */
FKTACTR_simpledyop( A68_TRUE, UBUACTR, QBUACTR_left, RBUACTR_right, &VBUACTR );
TBUACTR = VBUACTR;
break;
case 2: 
 /* line 446: */
FKTACTR_simpledyop( A68_FALSE, A_HVEC(WBUACTR,'+',A68_CHAR ), QBUACTR_left, RBUACTR_right, &XBUACTR );
TBUACTR = XBUACTR;
break;
case 3: 
 /* line 447: */
FKTACTR_simpledyop( A68_FALSE, A_HVEC(YBUACTR,'+',A68_CHAR ), QBUACTR_left, RBUACTR_right, &ZBUACTR );
TBUACTR = ZBUACTR;
break;
case 4: 
 /* line 448: */
 /* line 449: */
CAUACTR_complexop( A_HVEC(CCUACTR,(*(&(Root->Mode))),A68_INT ), BCUACTR, A_VC_PLUS(OHTACTR_qplus,QJTACTR_qcomplex), QBUACTR_left, RBUACTR_right, A68_FALSE, &DCUACTR );
TBUACTR = DCUACTR;
break;
case 5: 
 /* line 450: */
FKTACTR_simpledyop( A68_TRUE, FCUACTR, QBUACTR_left, RBUACTR_right, &GCUACTR );
TBUACTR = GCUACTR;
break;
case 6: 
 /* line 451: */
FKTACTR_simpledyop( A68_TRUE, ICUACTR, QBUACTR_left, RBUACTR_right, &JCUACTR );
TBUACTR = JCUACTR;
break;
default: 
WXIACTR_assert(A_VC_PLUS(OHTACTR_qplus,CGTACTR_qvfault), A68_FALSE);
 /* line 452: */
TBUACTR = KCUACTR;
break;
} 
LCUACTR_body = TBUACTR;
 /* line 453: */
 /* line 454: */
MCUACTR.Mode = (*(&(Root->Mode)));
 /* line 456: */
MCUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(QBUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(RBUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 457: */
MCUACTR.Extra = A_UNITE(NCUACTR,mode6,6,LCUACTR_body);
OCUACTR = MCUACTR;
} 
A_PROC_EXIT(dyadicplus);
*ReturnedValue = (OCUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SCUACTR_dyadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * TCUACTR_left;
A68_55 * UCUACTR_right;
A68_55  VCUACTR;  /* collateral clause result */
A68_125  YCUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZCUACTR;  /* avoid structure result */
A68_56  ADUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BDUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CDUACTR;  /* avoid structure result */
A68_56  DDUACTR;  /* OPERATORS - mode -> union mode */
A68_55  EDUACTR;  /* clause result */
A_PROC_ENTRY(dyadicminus);
 /* line 460: */
 /* line 461: */
{ 
 /* line 462: */
RXQACTR_eval2(Root, (&TCUACTR_left), (&UCUACTR_right));
 /* line 463: */
 /* line 464: */
VCUACTR.Mode = (*(&(Root->Mode)));
 /* line 465: */
VCUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(TCUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(UCUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 466: */
if ( (Version==3) )
{ 
 /* line 467: */
 /* line 468: */
CAUACTR_complexop( A_HVEC(YCUACTR,(*(&(Root->Mode))),A68_INT ), XCUACTR, A_VC_PLUS(RHTACTR_qminus,QJTACTR_qcomplex), TCUACTR_left, UCUACTR_right, A68_FALSE, &ZCUACTR );
VCUACTR.Extra = A_UNITE(ADUACTR,mode6,6,ZCUACTR);
} 
else
{ 
 /* line 469: */
 /* line 470: */
 /* line 471: */
FKTACTR_simpledyop( A68_FALSE, A_HVEC(BDUACTR,'-',A68_CHAR ), TCUACTR_left, UCUACTR_right, &CDUACTR );
VCUACTR.Extra = A_UNITE(DDUACTR,mode6,6,CDUACTR);
} 
EDUACTR = VCUACTR;
} 
A_PROC_EXIT(dyadicminus);
*ReturnedValue = (EDUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IDUACTR_dyadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * JDUACTR_left;
A68_55 * KDUACTR_right;
A68_55  LDUACTR;  /* collateral clause result */
A68_VC  ODUACTR;  /* avoid structure result */
A68_VC  QDUACTR;  /* avoid structure result */
A68_56  SDUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TDUACTR;  /* YIELD */
A68_55  UDUACTR;  /* clause result */
A_PROC_ENTRY(dyadicupb);
 /* line 477: */
 /* line 478: */
{ 
RXQACTR_eval2(Root, (&JDUACTR_left), (&KDUACTR_right));
 /* line 479: */
 /* line 480: */
LDUACTR.Mode = (*(&(Root->Mode)));
 /* line 481: */
LDUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(JDUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(KDUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 482: */
 /* line 483: */
NCQACTR_bracketcfragment( KDUACTR_right, &ODUACTR );
NCQACTR_bracketcfragment( JDUACTR_left, &QDUACTR );
TDUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ODUACTR,PDUACTR),QDUACTR),RDUACTR) ;
LDUACTR.Extra = A_UNITE(SDUACTR,mode6,6,TDUACTR);
UDUACTR = LDUACTR;
} 
A_PROC_EXIT(dyadicupb);
*ReturnedValue = (UDUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YDUACTR_dyadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * ZDUACTR_left;
A68_55 * AEUACTR_right;
A68_55  BEUACTR;  /* collateral clause result */
A68_VC  EEUACTR;  /* avoid structure result */
A68_VC  GEUACTR;  /* avoid structure result */
A68_56  IEUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JEUACTR;  /* YIELD */
A68_55  KEUACTR;  /* clause result */
A_PROC_ENTRY(dyadiclwb);
 /* line 486: */
 /* line 487: */
{ 
RXQACTR_eval2(Root, (&ZDUACTR_left), (&AEUACTR_right));
 /* line 488: */
 /* line 489: */
BEUACTR.Mode = (*(&(Root->Mode)));
 /* line 490: */
BEUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(ZDUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(AEUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 491: */
 /* line 492: */
NCQACTR_bracketcfragment( AEUACTR_right, &EEUACTR );
NCQACTR_bracketcfragment( ZDUACTR_left, &GEUACTR );
JEUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EEUACTR,FEUACTR),GEUACTR),HEUACTR) ;
BEUACTR.Extra = A_UNITE(IEUACTR,mode6,6,JEUACTR);
KEUACTR = BEUACTR;
} 
A_PROC_EXIT(dyadiclwb);
*ReturnedValue = (KEUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OEUACTR_and(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * PEUACTR_left;
A68_55 * QEUACTR_right;
A68_55  REUACTR;  /* collateral clause result */
A68_VC  SEUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TEUACTR;  /* avoid structure result */
A68_56  UEUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VEUACTR;  /* avoid structure result */
A68_VC  WEUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XEUACTR;  /* avoid structure result */
A68_56  YEUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZEUACTR;  /* YIELD */
A68_56  CFUACTR;  /* OPERATORS - skip to mode */
A68_55  DFUACTR;  /* clause result */
A_PROC_ENTRY(and);
 /* line 495: */
 /* line 496: */
{ 
 /* line 497: */
RXQACTR_eval2(Root, (&PEUACTR_left), (&QEUACTR_right));
 /* line 498: */
 /* line 499: */
REUACTR.Mode = (*(&(Root->Mode)));
 /* line 500: */
REUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(PEUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(QEUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 501: */
switch ( Version )
{ 
case 1: 
 /* line 502: */
FKTACTR_simpledyop( A68_FALSE, A_HVEC(SEUACTR,'&',A68_CHAR ), PEUACTR_left, QEUACTR_right, &TEUACTR );
REUACTR.Extra = A_UNITE(UEUACTR,mode6,6,TEUACTR);
break;
case 2: 
 /* line 503: */
FLNACTR_cast( (*(&(Root->Mode))), &VEUACTR );
FKTACTR_simpledyop( A68_FALSE, A_HVEC(WEUACTR,'&',A68_CHAR ), PEUACTR_left, QEUACTR_right, &XEUACTR );
ZEUACTR = A_VC_PLUS(VEUACTR,XEUACTR) ;
REUACTR.Extra = A_UNITE(YEUACTR,mode6,6,ZEUACTR);
break;
default: 
WXIACTR_assert(A_VC_PLUS(BFUACTR,CGTACTR_qvfault), A68_FALSE);
 /* line 504: */
 /* line 505: */
 /* line 506: */
REUACTR.Extra = CFUACTR;
break;
} 
DFUACTR = REUACTR;
} 
A_PROC_EXIT(and);
*ReturnedValue = (DFUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HFUACTR_or(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * IFUACTR_left;
A68_55 * JFUACTR_right;
A68_55  KFUACTR;  /* collateral clause result */
A68_VC  LFUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MFUACTR;  /* avoid structure result */
A68_56  NFUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OFUACTR;  /* avoid structure result */
A68_VC  PFUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QFUACTR;  /* avoid structure result */
A68_56  RFUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SFUACTR;  /* YIELD */
A68_56  VFUACTR;  /* OPERATORS - skip to mode */
A68_55  WFUACTR;  /* clause result */
A_PROC_ENTRY(or);
 /* line 509: */
 /* line 510: */
{ 
RXQACTR_eval2(Root, (&IFUACTR_left), (&JFUACTR_right));
 /* line 511: */
 /* line 512: */
KFUACTR.Mode = (*(&(Root->Mode)));
 /* line 513: */
KFUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(IFUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(JFUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 514: */
switch ( Version )
{ 
case 1: 
 /* line 515: */
FKTACTR_simpledyop( A68_FALSE, A_HVEC(LFUACTR,'|',A68_CHAR ), IFUACTR_left, JFUACTR_right, &MFUACTR );
KFUACTR.Extra = A_UNITE(NFUACTR,mode6,6,MFUACTR);
break;
case 2: 
 /* line 516: */
FLNACTR_cast( (*(&(Root->Mode))), &OFUACTR );
FKTACTR_simpledyop( A68_FALSE, A_HVEC(PFUACTR,'|',A68_CHAR ), IFUACTR_left, JFUACTR_right, &QFUACTR );
SFUACTR = A_VC_PLUS(OFUACTR,QFUACTR) ;
KFUACTR.Extra = A_UNITE(RFUACTR,mode6,6,SFUACTR);
break;
default: 
WXIACTR_assert(A_VC_PLUS(UFUACTR,CGTACTR_qvfault), A68_FALSE);
 /* line 517: */
 /* line 518: */
 /* line 519: */
KFUACTR.Extra = VFUACTR;
break;
} 
WFUACTR = KFUACTR;
} 
A_PROC_EXIT(or);
*ReturnedValue = (WFUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AGUACTR_lessnotless(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  BGUACTR;  /* clause result */
A68_VC  CGUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  DGUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GGUACTR;  /* OPERATORS - skip to mode */
A68_VC  HGUACTR_op;
A68_VC  JGUACTR;  /* clause result */
A68_VC  PGUACTR;  /* OPERATORS - skip to mode */
A68_VC  QGUACTR_opmacro;
A68_VC  RGUACTR_adic;
A68_55 * SGUACTR_left;
A68_55 * TGUACTR_right;
A68_VC  UGUACTR;  /* clause result */
A68_VC  VGUACTR;  /* avoid structure result */
A68_VC  WGUACTR;  /* avoid structure result */
A68_VC  XGUACTR;  /* avoid structure result */
A68_VC  AHUACTR;  /* avoid structure result */
A68_VC  DHUACTR;  /* avoid structure result */
A68_VC  EHUACTR;  /* OPERATORS - skip to mode */
A68_VC  FHUACTR_body;
A68_55  GHUACTR;  /* collateral clause result */
A68_56  HHUACTR;  /* OPERATORS - mode -> union mode */
A68_55  IHUACTR;  /* clause result */
A_PROC_ENTRY(lessnotless);
 /* line 522: */
 /* line 524: */
{ 
 /* line 525: */
switch ( (Opnumber-5) )
{ 
case 1: 
 /* line 526: */
BGUACTR = A_HVEC(CGUACTR,'<',A68_CHAR );
break;
case 2: 
BGUACTR = A_HVEC(DGUACTR,'>',A68_CHAR );
break;
default: 
WXIACTR_assert(FGUACTR, A68_FALSE);
 /* line 527: */
BGUACTR = GGUACTR;
break;
} 
HGUACTR_op = BGUACTR;
 /* line 528: */
 /* line 529: */
 /* line 530: */
switch ( (Opnumber-5) )
{ 
case 1: 
 /* line 531: */
JGUACTR = KGUACTR;
break;
case 2: 
JGUACTR = MGUACTR;
break;
default: 
WXIACTR_assert(OGUACTR, A68_FALSE);
 /* line 532: */
JGUACTR = PGUACTR;
break;
} 
QGUACTR_opmacro = JGUACTR;
 /* line 533: */
RGUACTR_adic = A_VC_PLUS(ZFTACTR_modulename,HGUACTR_op);
 /* line 534: */
RXQACTR_eval2(Root, (&SGUACTR_left), (&TGUACTR_right));
 /* line 535: */
 /* line 536: */
 /* line 537: */
switch ( Version )
{ 
case 1: 
 /* line 538: */
FKTACTR_simpledyop( A68_FALSE, HGUACTR_op, SGUACTR_left, TGUACTR_right, &VGUACTR );
UGUACTR = VGUACTR;
break;
case 2: 
 /* line 539: */
FKTACTR_simpledyop( A68_FALSE, HGUACTR_op, SGUACTR_left, TGUACTR_right, &WGUACTR );
UGUACTR = WGUACTR;
break;
case 3: 
 /* line 540: */
FKTACTR_simpledyop( A68_FALSE, HGUACTR_op, SGUACTR_left, TGUACTR_right, &XGUACTR );
UGUACTR = XGUACTR;
break;
case 4: 
 /* line 541: */
FKTACTR_simpledyop( A68_TRUE, A_VC_PLUS(ZGUACTR,QGUACTR_opmacro), SGUACTR_left, TGUACTR_right, &AHUACTR );
UGUACTR = AHUACTR;
break;
case 5: 
 /* line 542: */
FKTACTR_simpledyop( A68_TRUE, A_VC_PLUS(CHUACTR,QGUACTR_opmacro), SGUACTR_left, TGUACTR_right, &DHUACTR );
UGUACTR = DHUACTR;
break;
default: 
WXIACTR_assert(A_VC_PLUS(RGUACTR_adic,CGTACTR_qvfault), A68_FALSE);
 /* line 543: */
UGUACTR = EHUACTR;
break;
} 
FHUACTR_body = UGUACTR;
 /* line 544: */
 /* line 545: */
GHUACTR.Mode = (*(&(Root->Mode)));
 /* line 547: */
GHUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(SGUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(TGUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 548: */
GHUACTR.Extra = A_UNITE(HHUACTR,mode6,6,FHUACTR_body);
IHUACTR = GHUACTR;
} 
A_PROC_EXIT(lessnotless);
*ReturnedValue = (IHUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MHUACTR_lesseqgreatereq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  OHUACTR;  /* clause result */
A68_VC  UHUACTR;  /* OPERATORS - skip to mode */
A68_VC  VHUACTR_opsymbol;
A68_VC  XHUACTR;  /* clause result */
A68_VC  DIUACTR;  /* OPERATORS - skip to mode */
A68_VC  EIUACTR_macro;
A68_VC  FIUACTR_adic;
A68_55 * GIUACTR_left;
A68_55 * HIUACTR_right;
A68_VC  IIUACTR;  /* clause result */
A68_VC  JIUACTR;  /* avoid structure result */
A68_VC  MIUACTR;  /* avoid structure result */
A68_VC  NIUACTR;  /* avoid structure result */
A68_VC  OIUACTR;  /* avoid structure result */
A68_VC  RIUACTR;  /* avoid structure result */
A68_VC  UIUACTR;  /* avoid structure result */
A68_VC  VIUACTR;  /* OPERATORS - skip to mode */
A68_VC  WIUACTR_body;
A68_55  XIUACTR;  /* collateral clause result */
A68_56  YIUACTR;  /* OPERATORS - mode -> union mode */
A68_55  ZIUACTR;  /* clause result */
A_PROC_ENTRY(lesseqgreatereq);
 /* line 552: */
 /* line 554: */
{ 
 /* line 555: */
switch ( (Opnumber-7) )
{ 
case 1: 
 /* line 556: */
OHUACTR = PHUACTR;
break;
case 2: 
OHUACTR = RHUACTR;
break;
default: 
WXIACTR_assert(THUACTR, A68_FALSE);
 /* line 557: */
OHUACTR = UHUACTR;
break;
} 
VHUACTR_opsymbol = OHUACTR;
 /* line 558: */
 /* line 559: */
 /* line 560: */
switch ( (Opnumber-7) )
{ 
case 1: 
 /* line 561: */
XHUACTR = YHUACTR;
break;
case 2: 
XHUACTR = AIUACTR;
break;
default: 
WXIACTR_assert(CIUACTR, A68_FALSE);
 /* line 562: */
XHUACTR = DIUACTR;
break;
} 
EIUACTR_macro = XHUACTR;
 /* line 563: */
FIUACTR_adic = A_VC_PLUS(ZFTACTR_modulename,VHUACTR_opsymbol);
 /* line 564: */
RXQACTR_eval2(Root, (&GIUACTR_left), (&HIUACTR_right));
 /* line 565: */
 /* line 566: */
 /* line 567: */
switch ( Version )
{ 
case 1: 
 /* line 569: */
FKTACTR_simpledyop( A68_FALSE, VHUACTR_opsymbol, GIUACTR_left, HIUACTR_right, &JIUACTR );
IIUACTR = JIUACTR;
break;
case 2: 
 /* line 570: */
FKTACTR_simpledyop( A68_TRUE, A_VC_PLUS(LIUACTR,EIUACTR_macro), VOQACTR_yield(FIUACTR_adic, GIUACTR_left), VOQACTR_yield(FIUACTR_adic, HIUACTR_right), &MIUACTR );
IIUACTR = MIUACTR;
break;
case 3: 
 /* line 571: */
FKTACTR_simpledyop( A68_FALSE, VHUACTR_opsymbol, GIUACTR_left, HIUACTR_right, &NIUACTR );
IIUACTR = NIUACTR;
break;
case 4: 
 /* line 572: */
FKTACTR_simpledyop( A68_FALSE, VHUACTR_opsymbol, GIUACTR_left, HIUACTR_right, &OIUACTR );
IIUACTR = OIUACTR;
break;
case 5: 
 /* line 573: */
FKTACTR_simpledyop( A68_TRUE, A_VC_PLUS(QIUACTR,EIUACTR_macro), GIUACTR_left, HIUACTR_right, &RIUACTR );
IIUACTR = RIUACTR;
break;
case 6: 
 /* line 574: */
FKTACTR_simpledyop( A68_TRUE, A_VC_PLUS(TIUACTR,EIUACTR_macro), GIUACTR_left, HIUACTR_right, &UIUACTR );
IIUACTR = UIUACTR;
break;
default: 
WXIACTR_assert(A_VC_PLUS(FIUACTR_adic,CGTACTR_qvfault), A68_FALSE);
 /* line 575: */
IIUACTR = VIUACTR;
break;
} 
WIUACTR_body = IIUACTR;
 /* line 576: */
 /* line 577: */
XIUACTR.Mode = (*(&(Root->Mode)));
 /* line 579: */
XIUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(GIUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(HIUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 580: */
XIUACTR.Extra = A_UNITE(YIUACTR,mode6,6,WIUACTR_body);
ZIUACTR = XIUACTR;
} 
A_PROC_EXIT(lesseqgreatereq);
*ReturnedValue = (ZIUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DJUACTR_eqnoteq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  FJUACTR;  /* clause result */
A68_VC  LJUACTR;  /* OPERATORS - skip to mode */
A68_VC  MJUACTR_op;
A68_VC  OJUACTR;  /* clause result */
A68_VC  UJUACTR;  /* OPERATORS - skip to mode */
A68_VC  VJUACTR_opmacro;
A68_VC  WJUACTR_adic;
A68_55 * XJUACTR_left;
A68_55 * YJUACTR_right;
A68_VC  ZJUACTR;  /* clause result */
A68_VC  AKUACTR;  /* avoid structure result */
A68_VC  CKUACTR;  /* clause result */
A68_VC  GKUACTR_opmacro;
A68_125  HKUACTR;  /* OPERATORS - vacuum */
A68_VC  IKUACTR;  /* avoid structure result */
A68_VC  LKUACTR;  /* avoid structure result */
A68_VC  OKUACTR;  /* avoid structure result */
A68_VC  PKUACTR;  /* OPERATORS - skip to mode */
A68_VC  QKUACTR_body;
A68_55  RKUACTR;  /* collateral clause result */
A68_56  SKUACTR;  /* OPERATORS - mode -> union mode */
A68_55  TKUACTR;  /* clause result */
A_PROC_ENTRY(eqnoteq);
 /* line 583: */
 /* line 585: */
{ 
 /* line 586: */
switch ( (Opnumber-9) )
{ 
case 1: 
 /* line 587: */
FJUACTR = GJUACTR;
break;
case 2: 
FJUACTR = IJUACTR;
break;
default: 
WXIACTR_assert(KJUACTR, A68_FALSE);
 /* line 588: */
FJUACTR = LJUACTR;
break;
} 
MJUACTR_op = FJUACTR;
 /* line 589: */
 /* line 590: */
 /* line 591: */
switch ( (Opnumber-9) )
{ 
case 1: 
 /* line 592: */
OJUACTR = PJUACTR;
break;
case 2: 
OJUACTR = RJUACTR;
break;
default: 
WXIACTR_assert(TJUACTR, A68_FALSE);
 /* line 593: */
OJUACTR = UJUACTR;
break;
} 
VJUACTR_opmacro = OJUACTR;
 /* line 594: */
WJUACTR_adic = A_VC_PLUS(ZFTACTR_modulename,VJUACTR_opmacro);
 /* line 595: */
 /* line 596: */
RXQACTR_eval2(Root, (&XJUACTR_left), (&YJUACTR_right));
 /* line 597: */
 /* line 598: */
 /* line 599: */
if ( (Version<6) )
{ 
 /* line 601: */
FKTACTR_simpledyop( A68_FALSE, MJUACTR_op, XJUACTR_left, YJUACTR_right, &AKUACTR );
ZJUACTR = AKUACTR;
} 
else
{ 
 /* line 602: */
if ( (Version==6) )
{ 
 /* line 603: */
if ( (Opnumber==10) )
{ 
 /* line 604: */
CKUACTR = DKUACTR;
} 
else
{ 
CKUACTR = FKUACTR;
} 
GKUACTR_opmacro = CKUACTR;
 /* line 605: */
 /* line 606: */
 /* line 607: */
CAUACTR_complexop( A_VVAC(HKUACTR), GKUACTR_opmacro, A_VC_PLUS(A_VC_PLUS(ZFTACTR_modulename,MJUACTR_op),QJTACTR_qcomplex), XJUACTR_left, YJUACTR_right, A68_FALSE, &IKUACTR );
ZJUACTR = IKUACTR;
} 
else
{ 
 /* line 608: */
if ( (Version==7) )
{ 
 /* line 610: */
FKTACTR_simpledyop( A68_TRUE, A_VC_PLUS(KKUACTR,VJUACTR_opmacro), XJUACTR_left, YJUACTR_right, &LKUACTR );
ZJUACTR = LKUACTR;
} 
else
{ 
 /* line 611: */
if ( (Version==8) )
{ 
 /* line 612: */
FKTACTR_simpledyop( A68_TRUE, A_VC_PLUS(NKUACTR,VJUACTR_opmacro), XJUACTR_left, YJUACTR_right, &OKUACTR );
ZJUACTR = OKUACTR;
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(WJUACTR_adic,CGTACTR_qvfault), A68_FALSE);
 /* line 613: */
ZJUACTR = PKUACTR;
} 
} 
} 
} 
QKUACTR_body = ZJUACTR;
 /* line 614: */
 /* line 615: */
RKUACTR.Mode = (*(&(Root->Mode)));
 /* line 617: */
RKUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(XJUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(YJUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 618: */
RKUACTR.Extra = A_UNITE(SKUACTR,mode6,6,QKUACTR_body);
TKUACTR = RKUACTR;
} 
A_PROC_EXIT(eqnoteq);
*ReturnedValue = (TKUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XKUACTR_times(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * YKUACTR_left;
A68_55 * ZKUACTR_right;
A68_VC  BLUACTR;  /* clause result */
A68_VC  DLUACTR;  /* avoid structure result */
A68_VC  GLUACTR;  /* avoid structure result */
A68_VC  HLUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ILUACTR;  /* avoid structure result */
A68_VC  JLUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KLUACTR;  /* avoid structure result */
A68_125  NLUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OLUACTR;  /* avoid structure result */
A68_VC  RLUACTR;  /* avoid structure result */
A68_VC  ULUACTR;  /* avoid structure result */
A68_VC  XLUACTR;  /* avoid structure result */
A68_VC  AMUACTR;  /* avoid structure result */
A68_VC  BMUACTR;  /* OPERATORS - skip to mode */
A68_VC  CMUACTR_body;
A68_55  DMUACTR;  /* collateral clause result */
A68_56  EMUACTR;  /* OPERATORS - mode -> union mode */
A68_55  FMUACTR;  /* clause result */
A_PROC_ENTRY(times);
 /* line 621: */
 /* line 622: */
{ 
RXQACTR_eval2(Root, (&YKUACTR_left), (&ZKUACTR_right));
 /* line 623: */
 /* line 624: */
 /* line 625: */
switch ( Version )
{ 
case 1: 
 /* line 626: */
if ( WOMACTR_isint((*(&(YKUACTR_left->Mode)))) )
{ 
 /* line 627: */
FKTACTR_simpledyop( A68_TRUE, CLUACTR, ZKUACTR_right, YKUACTR_left, &DLUACTR );
BLUACTR = DLUACTR;
} 
else
{ 
 /* line 628: */
 /* line 629: */
FKTACTR_simpledyop( A68_TRUE, FLUACTR, YKUACTR_left, ZKUACTR_right, &GLUACTR );
BLUACTR = GLUACTR;
} 
break;
case 2: 
 /* line 630: */
FKTACTR_simpledyop( A68_FALSE, A_HVEC(HLUACTR,'*',A68_CHAR ), YKUACTR_left, ZKUACTR_right, &ILUACTR );
BLUACTR = ILUACTR;
break;
case 3: 
 /* line 631: */
FKTACTR_simpledyop( A68_FALSE, A_HVEC(JLUACTR,'*',A68_CHAR ), YKUACTR_left, ZKUACTR_right, &KLUACTR );
BLUACTR = KLUACTR;
break;
case 4: 
 /* line 632: */
 /* line 633: */
CAUACTR_complexop( A_HVEC(NLUACTR,(*(&(Root->Mode))),A68_INT ), MLUACTR, A_VC_PLUS(UHTACTR_qtimes,QJTACTR_qcomplex), YKUACTR_left, ZKUACTR_right, A68_FALSE, &OLUACTR );
BLUACTR = OLUACTR;
break;
case 5: 
 /* line 634: */
if ( WOMACTR_isint((*(&(YKUACTR_left->Mode)))) )
{ 
 /* line 635: */
FKTACTR_simpledyop( A68_TRUE, QLUACTR, ZKUACTR_right, YKUACTR_left, &RLUACTR );
BLUACTR = RLUACTR;
} 
else
{ 
 /* line 636: */
 /* line 637: */
FKTACTR_simpledyop( A68_TRUE, TLUACTR, YKUACTR_left, ZKUACTR_right, &ULUACTR );
BLUACTR = ULUACTR;
} 
break;
case 6: 
 /* line 638: */
if ( WOMACTR_isint((*(&(YKUACTR_left->Mode)))) )
{ 
 /* line 639: */
FKTACTR_simpledyop( A68_TRUE, WLUACTR, ZKUACTR_right, YKUACTR_left, &XLUACTR );
BLUACTR = XLUACTR;
} 
else
{ 
 /* line 640: */
 /* line 641: */
FKTACTR_simpledyop( A68_TRUE, ZLUACTR, YKUACTR_left, ZKUACTR_right, &AMUACTR );
BLUACTR = AMUACTR;
} 
break;
default: 
WXIACTR_assert(A_VC_PLUS(UHTACTR_qtimes,CGTACTR_qvfault), A68_FALSE);
 /* line 642: */
BLUACTR = BMUACTR;
break;
} 
CMUACTR_body = BLUACTR;
 /* line 643: */
 /* line 644: */
DMUACTR.Mode = (*(&(Root->Mode)));
 /* line 646: */
DMUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(YKUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(ZKUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 647: */
DMUACTR.Extra = A_UNITE(EMUACTR,mode6,6,CMUACTR_body);
FMUACTR = DMUACTR;
} 
A_PROC_EXIT(times);
*ReturnedValue = (FMUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JMUACTR_divide(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * KMUACTR_left;
A68_55 * LMUACTR_right;
A68_VC  MMUACTR;  /* avoid structure result */
A68_VC  NMUACTR_widen;
A68_VC  OMUACTR;  /* clause result */
A68_VC  PMUACTR;  /* avoid structure result */
A68_VC  QMUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RMUACTR;  /* avoid structure result */
A68_VC  SMUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TMUACTR;  /* avoid structure result */
A68_217  UMUACTR;  /* collateral clause result */
A68_125  XMUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YMUACTR;  /* avoid structure result */
A68_VC  ZMUACTR;  /* OPERATORS - skip to mode */
A68_VC  ANUACTR_body;
A68_55  BNUACTR;  /* collateral clause result */
A68_56  CNUACTR;  /* OPERATORS - mode -> union mode */
A68_55  DNUACTR;  /* clause result */
A_PROC_ENTRY(divide);
 /* line 650: */
 /* line 651: */
{ 
RXQACTR_eval2(Root, (&KMUACTR_left), (&LMUACTR_right));
 /* line 652: */
 /* line 653: */
 /* line 654: */
switch ( Version )
{ 
case 1: 
 /* line 655: */
{ 
FLNACTR_cast( ((*(&(KMUACTR_left->Mode)))+4), &MMUACTR );
NMUACTR_widen = MMUACTR;
 /* line 656: */
 /* line 657: */
 /* line 658: */
 /* line 659: */
NCQACTR_bracketcfragment( KMUACTR_left, &PMUACTR );
NCQACTR_bracketcfragment( LMUACTR_right, &RMUACTR );
OMUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NMUACTR_widen,PMUACTR),A_HVEC(QMUACTR,'/',A68_CHAR )),NMUACTR_widen),RMUACTR);
} 
break;
case 2: 
 /* line 660: */
FKTACTR_simpledyop( A68_FALSE, A_HVEC(SMUACTR,'/',A68_CHAR ), KMUACTR_left, LMUACTR_right, &TMUACTR );
OMUACTR = TMUACTR;
break;
case 3: 
UMUACTR.data[0] = (*(&(Root->Mode)));
UMUACTR.data[1] = ((*(&(Root->Mode)))-4);
 /* line 661: */
 /* line 662: */
 /* line 663: */
CAUACTR_complexop( A_HISVEC(XMUACTR,UMUACTR,2,A68_INT ), WMUACTR, A_VC_PLUS(XHTACTR_qdiv,QJTACTR_qcomplex), KMUACTR_left, LMUACTR_right, A68_FALSE, &YMUACTR );
OMUACTR = YMUACTR;
break;
default: 
{ 
WXIACTR_assert(A_VC_PLUS(XHTACTR_qdiv,CGTACTR_qvfault), A68_FALSE);
 /* line 664: */
OMUACTR = ZMUACTR;
} 
break;
} 
ANUACTR_body = OMUACTR;
 /* line 665: */
 /* line 666: */
BNUACTR.Mode = (*(&(Root->Mode)));
 /* line 668: */
BNUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(KMUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(LMUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 669: */
BNUACTR.Extra = A_UNITE(CNUACTR,mode6,6,ANUACTR_body);
DNUACTR = BNUACTR;
} 
A_PROC_EXIT(divide);
*ReturnedValue = (DNUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HNUACTR_over(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * INUACTR_left;
A68_55 * JNUACTR_right;
A68_55  KNUACTR;  /* collateral clause result */
A68_VC  LNUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MNUACTR;  /* avoid structure result */
A68_56  NNUACTR;  /* OPERATORS - mode -> union mode */
A68_56  ONUACTR;  /* OPERATORS - skip to mode */
A68_55  PNUACTR;  /* clause result */
A_PROC_ENTRY(over);
 /* line 672: */
 /* line 673: */
{ 
RXQACTR_eval2(Root, (&INUACTR_left), (&JNUACTR_right));
 /* line 674: */
 /* line 675: */
KNUACTR.Mode = (*(&(Root->Mode)));
 /* line 676: */
KNUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(INUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(JNUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 677: */
if ( (Version==1) )
{ 
 /* line 678: */
FKTACTR_simpledyop( A68_FALSE, A_HVEC(LNUACTR,'/',A68_CHAR ), INUACTR_left, JNUACTR_right, &MNUACTR );
KNUACTR.Extra = A_UNITE(NNUACTR,mode6,6,MNUACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(AITACTR_qover,CGTACTR_qvfault), A68_FALSE);
 /* line 679: */
 /* line 680: */
 /* line 681: */
KNUACTR.Extra = ONUACTR;
} 
PNUACTR = KNUACTR;
} 
A_PROC_EXIT(over);
*ReturnedValue = (PNUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TNUACTR_mod(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * UNUACTR_left;
A68_55 * VNUACTR_right;
A68_55  WNUACTR;  /* collateral clause result */
A68_59  XNUACTR;  /* avoid structure result */
A68_VC  YNUACTR;  /* OPERATORS - istruct -> vector */
A68_64  ZNUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AOUACTR_temp;
A68_203  COUACTR;  /* collateral clause result */
A68_169  DOUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * EOUACTR;  /* YIELD */
A68_169  FOUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * GOUACTR;  /* YIELD */
A68_169  HOUACTR;  /* OPERATORS - mode -> union mode */
A68_172  IOUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KOUACTR;  /* avoid structure result */
A68_56  LOUACTR;  /* OPERATORS - mode -> union mode */
A68_56  MOUACTR;  /* OPERATORS - skip to mode */
A68_55  NOUACTR;  /* clause result */
A_PROC_ENTRY(mod);
 /* line 684: */
 /* line 685: */
{ 
 /* line 686: */
RXQACTR_eval2(Root, (&UNUACTR_left), (&VNUACTR_right));
 /* line 687: */
 /* line 688: */
WNUACTR.Mode = (*(&(Root->Mode)));
 /* line 689: */
WNUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(UNUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(VNUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 690: */
if ( (Version==1) )
{ 
LKOACTR_declarectemporary( (*(&(UNUACTR_left->Mode))), DITACTR_qmod, &XNUACTR );
ZNUACTR = XNUACTR.Name ;
AOUACTR_temp = A_HISVEC(YNUACTR,ZNUACTR,7,A68_CHAR );
 /* line 691: */
EOUACTR = VOQACTR_yield(DITACTR_qmod, UNUACTR_left) ;
COUACTR.data[0] = A_UNITE(DOUACTR,mode1,1,EOUACTR);
GOUACTR = VOQACTR_yield(DITACTR_qmod, VNUACTR_right) ;
COUACTR.data[1] = A_UNITE(FOUACTR,mode1,1,GOUACTR);
COUACTR.data[2] = A_UNITE(HOUACTR,mode2,2,AOUACTR_temp);
 /* line 692: */
ENQACTR_usemacro( JOUACTR, A_HISVEC(IOUACTR,COUACTR,3,A68_169 ), &KOUACTR );
WNUACTR.Extra = A_UNITE(LOUACTR,mode6,6,KOUACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(DITACTR_qmod,CGTACTR_qvfault), A68_FALSE);
 /* line 693: */
 /* line 694: */
 /* line 695: */
WNUACTR.Extra = MOUACTR;
} 
NOUACTR = WNUACTR;
} 
A_PROC_EXIT(mod);
*ReturnedValue = (NOUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ROUACTR_power(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * SOUACTR_left;
A68_55 * TOUACTR_right;
A68_INT  UOUACTR_m;
A68_VC  XOUACTR;  /* avoid structure result */
A68_55  YOUACTR;  /* collateral clause result */
A68_203  APUACTR;  /* collateral clause result */
A68_169  BPUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * CPUACTR;  /* YIELD */
A68_169  DPUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * EPUACTR;  /* YIELD */
A68_VC  FPUACTR;  /* avoid structure result */
A68_169  GPUACTR;  /* OPERATORS - mode -> union mode */
A68_172  HPUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JPUACTR;  /* avoid structure result */
A68_56  KPUACTR;  /* OPERATORS - mode -> union mode */
A68_203  MPUACTR;  /* collateral clause result */
A68_169  NPUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * OPUACTR;  /* YIELD */
A68_169  PPUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * QPUACTR;  /* YIELD */
A68_VC  RPUACTR;  /* avoid structure result */
A68_169  SPUACTR;  /* OPERATORS - mode -> union mode */
A68_172  TPUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VPUACTR;  /* avoid structure result */
A68_56  WPUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XPUACTR_name;
A68_192  ZPUACTR;  /* collateral clause result */
A68_169  AQUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * BQUACTR;  /* YIELD */
A68_169  CQUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * DQUACTR;  /* YIELD */
A68_172  EQUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GQUACTR;  /* avoid structure result */
A68_56  HQUACTR;  /* OPERATORS - mode -> union mode */
A68_56  IQUACTR;  /* OPERATORS - skip to mode */
A68_55  JQUACTR;  /* clause result */
A_PROC_ENTRY(power);
 /* line 698: */
 /* line 699: */
{ 
RXQACTR_eval2(Root, (&SOUACTR_left), (&TOUACTR_right));
 /* line 700: */
UOUACTR_m = (*(&(SOUACTR_left->Mode)));
 /* line 701: */
 /* line 702: */
ROAAOSF_whole( UOUACTR_m, 0, &XOUACTR );
WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(GITACTR_qpower,WOUACTR),XOUACTR), ((UOUACTR_m<=21)&(UOUACTR_m>=14)));
 /* line 703: */
 /* line 704: */
YOUACTR.Mode = (*(&(Root->Mode)));
 /* line 705: */
YOUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(SOUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(TOUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 706: */
 /* line 707: */
if ( (Version==1) )
{ 
CPUACTR = VOQACTR_yield(GITACTR_qpower, SOUACTR_left) ;
APUACTR.data[0] = A_UNITE(BPUACTR,mode1,1,CPUACTR);
EPUACTR = VOQACTR_yield(GITACTR_qpower, TOUACTR_right) ;
APUACTR.data[1] = A_UNITE(DPUACTR,mode1,1,EPUACTR);
FLNACTR_cast( UOUACTR_m, &FPUACTR );
APUACTR.data[2] = A_UNITE(GPUACTR,mode2,2,FPUACTR);
 /* line 708: */
ENQACTR_usemacro( IPUACTR, A_HISVEC(HPUACTR,APUACTR,3,A68_169 ), &JPUACTR );
YOUACTR.Extra = A_UNITE(KPUACTR,mode6,6,JPUACTR);
} 
else
{ 
 /* line 709: */
 /* line 710: */
if ( (Version==2) )
{ 
OPUACTR = VOQACTR_yield(GITACTR_qpower, SOUACTR_left) ;
MPUACTR.data[0] = A_UNITE(NPUACTR,mode1,1,OPUACTR);
QPUACTR = VOQACTR_yield(GITACTR_qpower, TOUACTR_right) ;
MPUACTR.data[1] = A_UNITE(PPUACTR,mode1,1,QPUACTR);
FLNACTR_cast( UOUACTR_m, &RPUACTR );
MPUACTR.data[2] = A_UNITE(SPUACTR,mode2,2,RPUACTR);
 /* line 711: */
ENQACTR_usemacro( UPUACTR, A_HISVEC(TPUACTR,MPUACTR,3,A68_169 ), &VPUACTR );
YOUACTR.Extra = A_UNITE(WPUACTR,mode6,6,VPUACTR);
} 
else
{ 
 /* line 712: */
if ( (Version==3) )
{ 
XPUACTR_name = A_VC_PLUS(GITACTR_qpower,QJTACTR_qcomplex);
 /* line 713: */
BQUACTR = VOQACTR_yield(XPUACTR_name, SOUACTR_left) ;
ZPUACTR.data[0] = A_UNITE(AQUACTR,mode1,1,BQUACTR);
DQUACTR = VOQACTR_yield(XPUACTR_name, TOUACTR_right) ;
ZPUACTR.data[1] = A_UNITE(CQUACTR,mode1,1,DQUACTR);
 /* line 714: */
ENQACTR_usemacro( FQUACTR, A_HISVEC(EQUACTR,ZPUACTR,2,A68_169 ), &GQUACTR );
YOUACTR.Extra = A_UNITE(HQUACTR,mode6,6,GQUACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(GITACTR_qpower,CGTACTR_qvfault), A68_FALSE);
 /* line 715: */
 /* line 716: */
 /* line 717: */
YOUACTR.Extra = IQUACTR;
} 
} 
} 
JQUACTR = YOUACTR;
} 
A_PROC_EXIT(power);
*ReturnedValue = (JQUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MQUACTR_castvalue(A68_INT  Mode, A68_55 * Value, A68_VC  *ReturnedValue)
{ 
A68_VC  NQUACTR;  /* clause result */
A68_VC  OQUACTR;  /* avoid structure result */
A68_VC  PQUACTR;  /* avoid structure result */
A_PROC_ENTRY(castvalue);
 /* line 721: */
FLNACTR_cast( Mode, &OQUACTR );
NCQACTR_bracketcfragment( Value, &PQUACTR );
NQUACTR = A_VC_PLUS(OQUACTR,PQUACTR);
A_PROC_EXIT(castvalue);
*ReturnedValue = (NQUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TQUACTR_imaginary(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * UQUACTR_left;
A68_55 * VQUACTR_right;
A68_INT  WQUACTR_m;
A68_59  XQUACTR;  /* avoid structure result */
A68_59  YQUACTR_temp;
A68_55  ZQUACTR;  /* collateral clause result */
A68_203  BRUACTR;  /* collateral clause result */
A68_169  CRUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DRUACTR;  /* avoid structure result */
A68_169  ERUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FRUACTR;  /* avoid structure result */
A68_169  GRUACTR;  /* OPERATORS - mode -> union mode */
A68_172  HRUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JRUACTR;  /* avoid structure result */
A68_56  KRUACTR;  /* OPERATORS - mode -> union mode */
A68_203  MRUACTR;  /* collateral clause result */
A68_169  NRUACTR;  /* OPERATORS - mode -> union mode */
A68_169  ORUACTR;  /* OPERATORS - mode -> union mode */
A68_169  PRUACTR;  /* OPERATORS - mode -> union mode */
A68_172  QRUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SRUACTR;  /* avoid structure result */
A68_56  TRUACTR;  /* OPERATORS - mode -> union mode */
A68_55  URUACTR;  /* clause result */
A_PROC_ENTRY(imaginary);
 /* line 724: */
 /* line 725: */
{ 
 /* line 726: */
RXQACTR_eval2(Root, (&UQUACTR_left), (&VQUACTR_right));
 /* line 727: */
WQUACTR_m = ((*(&(Root->Mode)))-4);
 /* line 728: */
A_CALLPROC(KLOACTR_new,((*(&(Root->Mode))), LHTACTR_qi, &XQUACTR),((*(&(Root->Mode))), LHTACTR_qi, &XQUACTR,(KLOACTR_new).nonlocals));
YQUACTR_temp = XQUACTR;
 /* line 729: */
 /* line 730: */
ZQUACTR.Mode = (*(&(Root->Mode)));
 /* line 731: */
ZQUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(UQUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(VQUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 732: */
if ( (Version==1) )
{ 
 /* line 733: */
BRUACTR.data[0] = A_UNITE(CRUACTR,mode3,3,YQUACTR_temp);
MQUACTR_castvalue( WQUACTR_m, UQUACTR_left, &DRUACTR );
BRUACTR.data[1] = A_UNITE(ERUACTR,mode2,2,DRUACTR);
MQUACTR_castvalue( WQUACTR_m, VQUACTR_right, &FRUACTR );
BRUACTR.data[2] = A_UNITE(GRUACTR,mode2,2,FRUACTR);
 /* line 734: */
ENQACTR_usemacro( IRUACTR, A_HISVEC(HRUACTR,BRUACTR,3,A68_169 ), &JRUACTR );
ZQUACTR.Extra = A_UNITE(KRUACTR,mode6,6,JRUACTR);
} 
else
{ 
MRUACTR.data[0] = A_UNITE(NRUACTR,mode3,3,YQUACTR_temp);
MRUACTR.data[1] = A_UNITE(ORUACTR,mode1,1,UQUACTR_left);
MRUACTR.data[2] = A_UNITE(PRUACTR,mode1,1,VQUACTR_right);
 /* line 735: */
 /* line 736: */
 /* line 737: */
ENQACTR_usemacro( RRUACTR, A_HISVEC(QRUACTR,MRUACTR,3,A68_169 ), &SRUACTR );
ZQUACTR.Extra = A_UNITE(TRUACTR,mode6,6,SRUACTR);
} 
URUACTR = ZQUACTR;
} 
A_PROC_EXIT(imaginary);
*ReturnedValue = (URUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YRUACTR_shiftleftright(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  ASUACTR;  /* clause result */
A68_VC  GSUACTR;  /* OPERATORS - skip to mode */
A68_VC  HSUACTR_op;
A68_VC  ISUACTR_adic;
A68_55 * JSUACTR_left;
A68_55 * KSUACTR_right;
A68_55  LSUACTR;  /* collateral clause result */
A68_VC  OSUACTR;  /* avoid structure result */
A68_56  PSUACTR;  /* OPERATORS - mode -> union mode */
A68_56  QSUACTR;  /* OPERATORS - skip to mode */
A68_55  RSUACTR;  /* clause result */
A_PROC_ENTRY(shiftleftright);
 /* line 740: */
 /* line 742: */
{ 
 /* line 743: */
switch ( (Opnumber-17) )
{ 
case 1: 
 /* line 744: */
ASUACTR = BSUACTR;
break;
case 2: 
ASUACTR = DSUACTR;
break;
default: 
WXIACTR_assert(FSUACTR, A68_FALSE);
 /* line 745: */
ASUACTR = GSUACTR;
break;
} 
HSUACTR_op = ASUACTR;
 /* line 746: */
ISUACTR_adic = A_VC_PLUS(ZFTACTR_modulename,HSUACTR_op);
 /* line 747: */
 /* line 748: */
RXQACTR_eval2(Root, (&JSUACTR_left), (&KSUACTR_right));
 /* line 749: */
 /* line 750: */
LSUACTR.Mode = (*(&(Root->Mode)));
 /* line 751: */
LSUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(JSUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(KSUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 752: */
if ( (Version==1) )
{ 
 /* line 753: */
FKTACTR_simpledyop( A68_TRUE, A_VC_PLUS(NSUACTR,HSUACTR_op), VOQACTR_yield(HSUACTR_op, JSUACTR_left), VOQACTR_yield(HSUACTR_op, KSUACTR_right), &OSUACTR );
LSUACTR.Extra = A_UNITE(PSUACTR,mode6,6,OSUACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(ISUACTR_adic,CGTACTR_qvfault), A68_FALSE);
 /* line 754: */
 /* line 755: */
 /* line 756: */
LSUACTR.Extra = QSUACTR;
} 
RSUACTR = LSUACTR;
} 
A_PROC_EXIT(shiftleftright);
*ReturnedValue = (RSUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VSUACTR_elem(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * WSUACTR_left;
A68_55 * XSUACTR_right;
A68_INT  YSUACTR_m;
A68_207  ATUACTR;  /* collateral clause result */
A68_169  BTUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * CTUACTR;  /* YIELD */
A68_169  DTUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ETUACTR;  /* avoid structure result */
A68_169  FTUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GTUACTR;  /* avoid structure result */
A68_169  HTUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ITUACTR;  /* clause result */
A68_172  JTUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LTUACTR;  /* avoid structure result */
A68_VC  MTUACTR;  /* OPERATORS - skip to mode */
A68_VC  NTUACTR_body;
A68_55  OTUACTR;  /* collateral clause result */
A68_56  PTUACTR;  /* OPERATORS - mode -> union mode */
A68_55  QTUACTR;  /* clause result */
A_PROC_ENTRY(elem);
 /* line 759: */
 /* line 760: */
{ 
RXQACTR_eval2(Root, (&WSUACTR_left), (&XSUACTR_right));
 /* line 761: */
 /* line 762: */
 /* line 765: */
if ( (Version==1) )
{ 
YSUACTR_m = (*(&(XSUACTR_right->Mode)));
 /* line 766: */
 /* line 767: */
 /* line 768: */
CTUACTR = VOQACTR_yield(JITACTR_qelem, WSUACTR_left) ;
ATUACTR.data[0] = A_UNITE(BTUACTR,mode1,1,CTUACTR);
ATUACTR.data[1] = A_UNITE(DTUACTR,mode1,1,XSUACTR_right);
FLNACTR_cast( YSUACTR_m, &ETUACTR );
ATUACTR.data[2] = A_UNITE(FTUACTR,mode2,2,ETUACTR);
 /* line 769: */
KLNACTR_csizeof( YSUACTR_m, &GTUACTR );
ATUACTR.data[3] = A_UNITE(HTUACTR,mode2,2,GTUACTR);
 /* line 770: */
ENQACTR_usemacro( KTUACTR, A_HISVEC(JTUACTR,ATUACTR,4,A68_169 ), &LTUACTR );
ITUACTR = LTUACTR;
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(JITACTR_qelem,CGTACTR_qvfault), A68_FALSE);
 /* line 771: */
ITUACTR = MTUACTR;
} 
NTUACTR_body = ITUACTR;
 /* line 772: */
OTUACTR.Mode = (*(&(Root->Mode)));
OTUACTR.Info = PKJACTR_defaultinfo;
 /* line 773: */
OTUACTR.Extra = A_UNITE(PTUACTR,mode6,6,NTUACTR_body);
QTUACTR = OTUACTR;
} 
A_PROC_EXIT(elem);
*ReturnedValue = (QTUACTR);
return;
} 
#undef NL

A_STATIC A68_BITS  TTUACTR_abattribute(A68_BOOL  Noref, A68_55 * Op)
{ 
A68_BITS  UTUACTR;  /* clause result */
A_PROC_ENTRY(abattribute);
 /* line 787: */
 /* line 788: */
 /* line 790: */
if ( UUPACTR_hasattribute(Op, TKJACTR_nonloc) )
{ 
 /* line 791: */
UTUACTR = (A68_BITS )(TKJACTR_nonloc|XKJACTR_fxwarn);
} 
else
{ 
 /* line 792: */
if ( Noref )
{ 
 /* line 793: */
 /* line 797: */
UTUACTR = (A68_BITS )(SKJACTR_effects|XKJACTR_fxwarn);
} 
else
{ 
 /* line 798: */
 /* line 799: */
UTUACTR = (A68_BITS )(RKJACTR_atomic|XKJACTR_fxwarn);
} 
} 
A_PROC_EXIT(abattribute);
return( UTUACTR );
} 
#undef NL
 /* line 806: */
 /* line 807: */
 /* line 808: */
 /* line 809: */

A_STATIC A68_VOID  AUUACTR_simpleabop(A68_BOOL  Noref, A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_56  *ReturnedValue)
{ 
A68_55 * BUUACTR_lhs;
A68_192  CUUACTR;  /* collateral clause result */
A68_169  DUUACTR;  /* OPERATORS - mode -> union mode */
A68_169  EUUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FUUACTR;  /* clause result */
A68_172  GUUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  HUUACTR;  /* avoid structure result */
A68_VC  IUUACTR;  /* avoid structure result */
A68_VC  JUUACTR;  /* avoid structure result */
A68_VC  KUUACTR_body;
A68_56  LUUACTR;  /* clause result */
A68_56  MUUACTR;  /* OPERATORS - mode -> union mode */
A68_192  NUUACTR;  /* collateral clause result */
A68_169  OUUACTR;  /* OPERATORS - mode -> union mode */
A68_169  RUUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SUUACTR;  /* YIELD */
A68_172  TUUACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(simpleabop);
 /* line 810: */
 /* line 811: */
{ 
BUUACTR_lhs = KOQACTR_yield(Left);
 /* line 812: */
PKAAOSF_orab((&(BUUACTR_lhs->Info)), VKJACTR_lvalue);
 /* line 813: */
 /* line 814: */
 /* line 815: */
if ( Macro )
{ 
CUUACTR.data[0] = A_UNITE(DUUACTR,mode1,1,BUUACTR_lhs);
CUUACTR.data[1] = A_UNITE(EUUACTR,mode1,1,Right);
 /* line 816: */
ENQACTR_usemacro( Oper, A_HISVEC(GUUACTR,CUUACTR,2,A68_169 ), &HUUACTR );
FUUACTR = HUUACTR;
} 
else
{ 
 /* line 817: */
NCQACTR_bracketcfragment( BUUACTR_lhs, &IUUACTR );
NCQACTR_bracketcfragment( Right, &JUUACTR );
FUUACTR = A_VC_PLUS(A_VC_PLUS(IUUACTR,Oper),JUUACTR);
} 
KUUACTR_body = FUUACTR;
 /* line 818: */
 /* line 819: */
 /* line 820: */
if ( Noref )
{ 
LUUACTR = A_UNITE(MUUACTR,mode6,6,KUUACTR_body);
} 
else
{ 
NUUACTR.data[0] = A_UNITE(OUUACTR,mode2,2,KUUACTR_body);
SUUACTR = QUUACTR ;
NUUACTR.data[1] = A_UNITE(RUUACTR,mode2,2,SUUACTR);
JNQACTR_emitline(A_HISVEC(TUUACTR,NUUACTR,2,A68_169 ));
 /* line 821: */
 /* line 822: */
LUUACTR = (*(&(BUUACTR_lhs->Extra)));
} 
} 
A_PROC_EXIT(simpleabop);
*ReturnedValue = (LUUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XUUACTR_plusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * YUUACTR_left;
A68_55 * ZUUACTR_right;
A68_BOOL  AVUACTR_opt;
A68_56  CVUACTR;  /* clause result */
A68_56  EVUACTR;  /* avoid structure result */
A68_56  HVUACTR;  /* avoid structure result */
A68_125  KVUACTR;  /* OPERATORS - vacuum */
A68_VC  LVUACTR;  /* avoid structure result */
A68_56  MVUACTR;  /* OPERATORS - mode -> union mode */
A68_56  PVUACTR;  /* avoid structure result */
A68_56  SVUACTR;  /* avoid structure result */
A68_56  TVUACTR;  /* OPERATORS - skip to mode */
A68_56  UVUACTR_body;
A68_55  VVUACTR;  /* collateral clause result */
A68_55  WVUACTR;  /* clause result */
A_PROC_ENTRY(plusab);
 /* line 826: */
 /* line 827: */
{ 
 /* line 828: */
ZWQACTR_eval_pass_left(Root, (&YUUACTR_left), VKJACTR_lvalue);
 /* line 829: */
IXQACTR_eval_pass_right(Root, (&ZUUACTR_right), PKJACTR_defaultinfo);
 /* line 830: */
AVUACTR_opt = UUPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 831: */
 /* line 832: */
 /* line 833: */
switch ( Version )
{ 
case 1: 
 /* line 834: */
AUUACTR_simpleabop( AVUACTR_opt, A68_FALSE, DVUACTR, YUUACTR_left, ZUUACTR_right, &EVUACTR );
CVUACTR = EVUACTR;
break;
case 2: 
 /* line 835: */
AUUACTR_simpleabop( AVUACTR_opt, A68_FALSE, GVUACTR, YUUACTR_left, ZUUACTR_right, &HVUACTR );
CVUACTR = HVUACTR;
break;
case 3: 
 /* line 836: */
 /* line 837: */
CAUACTR_complexop( A_VVAC(KVUACTR), JVUACTR, A_VC_PLUS(MITACTR_qplusab,QJTACTR_qcomplex), YUUACTR_left, ZUUACTR_right, A68_TRUE, &LVUACTR );
CVUACTR = A_UNITE(MVUACTR,mode6,6,LVUACTR);
break;
case 4: 
 /* line 838: */
AUUACTR_simpleabop( AVUACTR_opt, A68_TRUE, OVUACTR, YUUACTR_left, ZUUACTR_right, &PVUACTR );
CVUACTR = PVUACTR;
break;
case 5: 
 /* line 839: */
AUUACTR_simpleabop( AVUACTR_opt, A68_TRUE, RVUACTR, YUUACTR_left, ZUUACTR_right, &SVUACTR );
CVUACTR = SVUACTR;
break;
default: 
WXIACTR_assert(A_VC_PLUS(MITACTR_qplusab,CGTACTR_qvfault), A68_FALSE);
 /* line 840: */
CVUACTR = TVUACTR;
break;
} 
UVUACTR_body = CVUACTR;
 /* line 841: */
VVUACTR.Mode = (*(&(Root->Mode)));
VVUACTR.Info = TTUACTR_abattribute(AVUACTR_opt, YUUACTR_left);
 /* line 842: */
VVUACTR.Extra = UVUACTR_body;
WVUACTR = VVUACTR;
} 
A_PROC_EXIT(plusab);
*ReturnedValue = (WVUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AWUACTR_plusto(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * BWUACTR_left;
A68_55 * CWUACTR_right;
A68_BOOL  DWUACTR_opt;
A68_56  HWUACTR;  /* clause result */
A68_56  JWUACTR;  /* avoid structure result */
A68_56  OWUACTR;  /* avoid structure result */
A68_56  PWUACTR;  /* OPERATORS - skip to mode */
A68_56  QWUACTR_body;
A68_55  RWUACTR;  /* collateral clause result */
A68_55  SWUACTR;  /* clause result */
A_PROC_ENTRY(plusto);
 /* line 845: */
 /* line 846: */
{ 
 /* line 847: */
ZWQACTR_eval_pass_left(Root, (&BWUACTR_left), PKJACTR_defaultinfo);
 /* line 848: */
IXQACTR_eval_pass_right(Root, (&CWUACTR_right), VKJACTR_lvalue);
 /* line 849: */
DWUACTR_opt = UUPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 850: */
 /* line 851: */
 /* line 853: */
switch ( Version )
{ 
case 1: 
{ 
 /* line 854: */
WXIACTR_assert(A_VC_PLUS(PITACTR_qplusto,FWUACTR), (EQMACTR_isflexvec((*(&(CWUACTR_right->Mode))))&PPMACTR_isvec((*(&(BWUACTR_left->Mode))))));
 /* line 855: */
 /* line 856: */
 /* line 858: */
AUUACTR_simpleabop( DWUACTR_opt, A68_TRUE, IWUACTR, CWUACTR_right, BWUACTR_left, &JWUACTR );
HWUACTR = JWUACTR;
} 
break;
case 2: 
{ 
 /* line 859: */
WXIACTR_assert(A_VC_PLUS(PITACTR_qplusto,LWUACTR), (IQMACTR_isflexrow((*(&(CWUACTR_right->Mode))))&TPMACTR_isrow((*(&(BWUACTR_left->Mode))))));
 /* line 860: */
 /* line 861: */
 /* line 862: */
AUUACTR_simpleabop( DWUACTR_opt, A68_TRUE, NWUACTR, CWUACTR_right, BWUACTR_left, &OWUACTR );
HWUACTR = OWUACTR;
} 
break;
default: 
WXIACTR_assert(A_VC_PLUS(PITACTR_qplusto,CGTACTR_qvfault), A68_FALSE);
 /* line 863: */
HWUACTR = PWUACTR;
break;
} 
QWUACTR_body = HWUACTR;
 /* line 864: */
RWUACTR.Mode = (*(&(Root->Mode)));
RWUACTR.Info = TTUACTR_abattribute(DWUACTR_opt, BWUACTR_left);
 /* line 865: */
RWUACTR.Extra = QWUACTR_body;
SWUACTR = RWUACTR;
} 
A_PROC_EXIT(plusto);
*ReturnedValue = (SWUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WWUACTR_minusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * XWUACTR_left;
A68_55 * YWUACTR_right;
A68_BOOL  ZWUACTR_opt;
A68_56  BXUACTR;  /* clause result */
A68_56  DXUACTR;  /* avoid structure result */
A68_125  GXUACTR;  /* OPERATORS - vacuum */
A68_VC  HXUACTR;  /* avoid structure result */
A68_56  IXUACTR;  /* OPERATORS - mode -> union mode */
A68_56  JXUACTR;  /* OPERATORS - skip to mode */
A68_56  KXUACTR_body;
A68_55  LXUACTR;  /* collateral clause result */
A68_55  MXUACTR;  /* clause result */
A_PROC_ENTRY(minusab);
 /* line 868: */
 /* line 869: */
{ 
 /* line 870: */
ZWQACTR_eval_pass_left(Root, (&XWUACTR_left), VKJACTR_lvalue);
 /* line 871: */
IXQACTR_eval_pass_right(Root, (&YWUACTR_right), PKJACTR_defaultinfo);
 /* line 872: */
ZWUACTR_opt = UUPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 873: */
 /* line 874: */
 /* line 875: */
if ( ((Version==1)|(Version==2)) )
{ 
 /* line 876: */
AUUACTR_simpleabop( ZWUACTR_opt, A68_FALSE, CXUACTR, XWUACTR_left, YWUACTR_right, &DXUACTR );
BXUACTR = DXUACTR;
} 
else
{ 
 /* line 877: */
if ( (Version==3) )
{ 
 /* line 878: */
 /* line 879: */
CAUACTR_complexop( A_VVAC(GXUACTR), FXUACTR, A_VC_PLUS(SITACTR_qminusab,QJTACTR_qcomplex), XWUACTR_left, YWUACTR_right, A68_TRUE, &HXUACTR );
BXUACTR = A_UNITE(IXUACTR,mode6,6,HXUACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(SITACTR_qminusab,CGTACTR_qvfault), A68_FALSE);
 /* line 880: */
BXUACTR = JXUACTR;
} 
} 
KXUACTR_body = BXUACTR;
 /* line 881: */
LXUACTR.Mode = (*(&(Root->Mode)));
LXUACTR.Info = TTUACTR_abattribute(ZWUACTR_opt, XWUACTR_left);
 /* line 882: */
LXUACTR.Extra = KXUACTR_body;
MXUACTR = LXUACTR;
} 
A_PROC_EXIT(minusab);
*ReturnedValue = (MXUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QXUACTR_timesab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * RXUACTR_left;
A68_55 * SXUACTR_right;
A68_BOOL  TXUACTR_opt;
A68_56  VXUACTR;  /* clause result */
A68_56  XXUACTR;  /* avoid structure result */
A68_56  AYUACTR;  /* avoid structure result */
A68_125  DYUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EYUACTR;  /* avoid structure result */
A68_56  FYUACTR;  /* OPERATORS - mode -> union mode */
A68_56  IYUACTR;  /* avoid structure result */
A68_56  LYUACTR;  /* avoid structure result */
A68_56  MYUACTR;  /* OPERATORS - skip to mode */
A68_56  NYUACTR_body;
A68_55  OYUACTR;  /* collateral clause result */
A68_55  PYUACTR;  /* clause result */
A_PROC_ENTRY(timesab);
 /* line 885: */
 /* line 886: */
{ 
 /* line 887: */
ZWQACTR_eval_pass_left(Root, (&RXUACTR_left), VKJACTR_lvalue);
 /* line 888: */
IXQACTR_eval_pass_right(Root, (&SXUACTR_right), PKJACTR_defaultinfo);
 /* line 889: */
TXUACTR_opt = UUPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 890: */
 /* line 891: */
 /* line 892: */
switch ( Version )
{ 
case 1: 
 /* line 893: */
AUUACTR_simpleabop( TXUACTR_opt, A68_FALSE, WXUACTR, RXUACTR_left, SXUACTR_right, &XXUACTR );
VXUACTR = XXUACTR;
break;
case 2: 
 /* line 894: */
AUUACTR_simpleabop( TXUACTR_opt, A68_FALSE, ZXUACTR, RXUACTR_left, SXUACTR_right, &AYUACTR );
VXUACTR = AYUACTR;
break;
case 3: 
 /* line 895: */
 /* line 896: */
CAUACTR_complexop( A_HVEC(DYUACTR,EOMACTR_deref((*(&(Root->Mode)))),A68_INT ), CYUACTR, A_VC_PLUS(VITACTR_qtimesab,QJTACTR_qcomplex), RXUACTR_left, SXUACTR_right, A68_TRUE, &EYUACTR );
VXUACTR = A_UNITE(FYUACTR,mode6,6,EYUACTR);
break;
case 4: 
 /* line 897: */
AUUACTR_simpleabop( TXUACTR_opt, A68_TRUE, HYUACTR, RXUACTR_left, SXUACTR_right, &IYUACTR );
VXUACTR = IYUACTR;
break;
case 5: 
 /* line 898: */
AUUACTR_simpleabop( TXUACTR_opt, A68_TRUE, KYUACTR, RXUACTR_left, SXUACTR_right, &LYUACTR );
VXUACTR = LYUACTR;
break;
default: 
WXIACTR_assert(A_VC_PLUS(VITACTR_qtimesab,CGTACTR_qvfault), A68_FALSE);
 /* line 899: */
VXUACTR = MYUACTR;
break;
} 
NYUACTR_body = VXUACTR;
 /* line 900: */
OYUACTR.Mode = (*(&(Root->Mode)));
OYUACTR.Info = TTUACTR_abattribute(TXUACTR_opt, RXUACTR_left);
 /* line 901: */
OYUACTR.Extra = NYUACTR_body;
PYUACTR = OYUACTR;
} 
A_PROC_EXIT(timesab);
*ReturnedValue = (PYUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TYUACTR_overab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * UYUACTR_left;
A68_55 * VYUACTR_right;
A68_BOOL  WYUACTR_opt;
A68_56  YYUACTR;  /* clause result */
A68_56  AZUACTR;  /* avoid structure result */
A68_56  BZUACTR;  /* OPERATORS - skip to mode */
A68_56  CZUACTR_body;
A68_55  DZUACTR;  /* collateral clause result */
A68_55  EZUACTR;  /* clause result */
A_PROC_ENTRY(overab);
 /* line 904: */
 /* line 905: */
{ 
 /* line 906: */
ZWQACTR_eval_pass_left(Root, (&UYUACTR_left), VKJACTR_lvalue);
 /* line 907: */
IXQACTR_eval_pass_right(Root, (&VYUACTR_right), PKJACTR_defaultinfo);
 /* line 908: */
WYUACTR_opt = UUPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 909: */
 /* line 910: */
 /* line 911: */
if ( (Version==1) )
{ 
 /* line 912: */
AUUACTR_simpleabop( WYUACTR_opt, A68_FALSE, ZYUACTR, UYUACTR_left, VYUACTR_right, &AZUACTR );
YYUACTR = AZUACTR;
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(YITACTR_qoverab,CGTACTR_qvfault), A68_FALSE);
 /* line 913: */
YYUACTR = BZUACTR;
} 
CZUACTR_body = YYUACTR;
 /* line 914: */
DZUACTR.Mode = (*(&(Root->Mode)));
DZUACTR.Info = TTUACTR_abattribute(WYUACTR_opt, UYUACTR_left);
 /* line 915: */
DZUACTR.Extra = CZUACTR_body;
EZUACTR = DZUACTR;
} 
A_PROC_EXIT(overab);
*ReturnedValue = (EZUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IZUACTR_modab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_BOOL  JZUACTR_opt;
A68_55 * KZUACTR_left;
A68_55 * LZUACTR_right;
A68_55  MZUACTR;  /* collateral clause result */
A68_56  PZUACTR;  /* avoid structure result */
A68_56  QZUACTR;  /* OPERATORS - skip to mode */
A68_55  RZUACTR;  /* clause result */
A_PROC_ENTRY(modab);
 /* line 918: */
 /* line 919: */
{ 
JZUACTR_opt = UUPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 920: */
 /* line 921: */
ZWQACTR_eval_pass_left(Root, (&KZUACTR_left), VKJACTR_lvalue);
 /* line 922: */
IXQACTR_eval_pass_right(Root, (&LZUACTR_right), PKJACTR_defaultinfo);
 /* line 923: */
 /* line 924: */
MZUACTR.Mode = (*(&(Root->Mode)));
 /* line 925: */
MZUACTR.Info = TTUACTR_abattribute(JZUACTR_opt, KZUACTR_left);
 /* line 926: */
if ( (Version==1) )
{ 
 /* line 927: */
AUUACTR_simpleabop( JZUACTR_opt, A68_TRUE, OZUACTR, KZUACTR_left, LZUACTR_right, &PZUACTR );
MZUACTR.Extra = PZUACTR;
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(BJTACTR_qmodab,CGTACTR_qvfault), A68_FALSE);
 /* line 928: */
 /* line 929: */
 /* line 930: */
MZUACTR.Extra = QZUACTR;
} 
RZUACTR = MZUACTR;
} 
A_PROC_EXIT(modab);
*ReturnedValue = (RZUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VZUACTR_divab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * WZUACTR_left;
A68_55 * XZUACTR_right;
A68_BOOL  YZUACTR_opt;
A68_55  ZZUACTR;  /* collateral clause result */
A68_56  CAVACTR;  /* avoid structure result */
A68_217  DAVACTR;  /* collateral clause result */
A68_125  GAVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  HAVACTR;  /* avoid structure result */
A68_56  IAVACTR;  /* OPERATORS - mode -> union mode */
A68_56  JAVACTR;  /* OPERATORS - skip to mode */
A68_55  KAVACTR;  /* clause result */
A_PROC_ENTRY(divab);
 /* line 933: */
 /* line 934: */
{ 
 /* line 935: */
ZWQACTR_eval_pass_left(Root, (&WZUACTR_left), VKJACTR_lvalue);
 /* line 936: */
IXQACTR_eval_pass_right(Root, (&XZUACTR_right), PKJACTR_defaultinfo);
 /* line 937: */
YZUACTR_opt = UUPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 939: */
 /* line 940: */
ZZUACTR.Mode = (*(&(Root->Mode)));
 /* line 941: */
ZZUACTR.Info = TTUACTR_abattribute(YZUACTR_opt, WZUACTR_left);
 /* line 942: */
if ( (Version==1) )
{ 
 /* line 943: */
AUUACTR_simpleabop( YZUACTR_opt, A68_FALSE, BAVACTR, WZUACTR_left, XZUACTR_right, &CAVACTR );
ZZUACTR.Extra = CAVACTR;
} 
else
{ 
 /* line 944: */
if ( (Version==2) )
{ 
DAVACTR.data[0] = (*(&(XZUACTR_right->Mode)));
DAVACTR.data[1] = ((*(&(XZUACTR_right->Mode)))-4);
 /* line 945: */
 /* line 946: */
CAUACTR_complexop( A_HISVEC(GAVACTR,DAVACTR,2,A68_INT ), FAVACTR, A_VC_PLUS(VITACTR_qtimesab,QJTACTR_qcomplex), WZUACTR_left, XZUACTR_right, A68_TRUE, &HAVACTR );
ZZUACTR.Extra = A_UNITE(IAVACTR,mode6,6,HAVACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(EJTACTR_qdivab,CGTACTR_qvfault), A68_FALSE);
 /* line 947: */
 /* line 948: */
 /* line 949: */
ZZUACTR.Extra = JAVACTR;
} 
} 
KAVACTR = ZZUACTR;
} 
A_PROC_EXIT(divab);
*ReturnedValue = (KAVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OAVACTR_isisnt(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  QAVACTR;  /* clause result */
A68_VC  WAVACTR;  /* OPERATORS - skip to mode */
A68_VC  XAVACTR_op;
A68_VC  YAVACTR_adic;
A68_55 * ZAVACTR_left;
A68_55 * ABVACTR_right;
A68_BOOL  BBVACTR;  /* optbool result */
A68_VC  FBVACTR;  /* clause result */
A68_VC  KBVACTR;  /* clause result */
A68_VC  PBVACTR;  /* clause result */
A68_VC  RBVACTR;  /* avoid structure result */
A68_VC  SBVACTR;  /* avoid structure result */
A68_VC  TBVACTR_body;
A68_55  UBVACTR;  /* collateral clause result */
A68_56  VBVACTR;  /* OPERATORS - mode -> union mode */
A68_55  WBVACTR;  /* clause result */
A_PROC_ENTRY(isisnt);
 /* line 956: */
 /* line 958: */
{ 
 /* line 959: */
switch ( (Opnumber-26) )
{ 
case 1: 
 /* line 960: */
QAVACTR = RAVACTR;
break;
case 2: 
QAVACTR = TAVACTR;
break;
default: 
WXIACTR_assert(A_VC_PLUS(NJTACTR_qisisnt,VAVACTR), A68_FALSE);
 /* line 961: */
QAVACTR = WAVACTR;
break;
} 
XAVACTR_op = QAVACTR;
 /* line 963: */
YAVACTR_adic = A_VC_PLUS(ZFTACTR_modulename,XAVACTR_op);
 /* line 964: */
RXQACTR_eval2(Root, (&ZAVACTR_left), (&ABVACTR_right));
 /* line 966: */
 /* line 967: */
 /* line 968: */
BBVACTR = ((*(&(ZAVACTR_left->Mode)))<WFAACTR_refrefmark);
if ( BBVACTR )
{ /* line 969: */
BBVACTR = ARMACTR_isarray((*(&(ZAVACTR_left->Mode))));
}
 /* line 970: */
if ( BBVACTR )
{ 
if ( A_VC_EQ(XAVACTR_op,DBVACTR) )
{ 
FBVACTR = GBVACTR;
} 
else
{ 
 /* line 972: */
FBVACTR = IBVACTR;
} 
if ( VQMACTR_isrow((*(&(ZAVACTR_left->Mode)))) )
{ 
KBVACTR = LBVACTR;
} 
else
{ 
KBVACTR = NBVACTR;
} 
 /* line 973: */
 /* line 974: */
 /* line 975: */
 /* line 976: */
FKTACTR_simpledyop( A68_TRUE, A_VC_PLUS(KBVACTR,QBVACTR), VOQACTR_yield(XAVACTR_op, ZAVACTR_left), VOQACTR_yield(XAVACTR_op, ABVACTR_right), &RBVACTR );
PBVACTR = A_VC_PLUS(FBVACTR,RBVACTR);
} 
else
{ 
 /* line 977: */
FKTACTR_simpledyop( A68_FALSE, XAVACTR_op, ZAVACTR_left, ABVACTR_right, &SBVACTR );
PBVACTR = SBVACTR;
} 
TBVACTR_body = PBVACTR;
 /* line 978: */
 /* line 979: */
UBVACTR.Mode = (*(&(Root->Mode)));
 /* line 981: */
UBVACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(ZAVACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(ABVACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 982: */
UBVACTR.Extra = A_UNITE(VBVACTR,mode6,6,TBVACTR_body);
WBVACTR = UBVACTR;
} 
A_PROC_EXIT(isisnt);
*ReturnedValue = (WBVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HDVACTR_anonymous(A68_55 * V, A68_INT  I, A68_INT  J, A68_55  *ReturnedValue)
{ 
A68_55  KDVACTR;  /* clause result */
 /* line 1020: */
{ 
WXIACTR_assert(JDVACTR, A68_FALSE);
 /* line 1021: */
KDVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (KDVACTR);
return;
} 
#undef NL

A68_VOID  WDVACTR_dyadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue)
{ 
A68_INT  XDVACTR_param;
A68_INT  YDVACTR_opnumber;
A68_INT  ZDVACTR;  /* ADICOPS - MOD */
A68_INT  AEVACTR_version;
A68_55  BEVACTR;  /* clause result */
A68_193  CEVACTR;  /* CALL */
A68_55  DEVACTR;  /* avoid structure result */
A68_INT  EEVACTR_biopparam;
A68_INT  FEVACTR_opnumber;
A68_INT  GEVACTR;  /* ADICOPS - MOD */
A68_INT  HEVACTR_version;
A68_193  IEVACTR;  /* CALL */
A68_55  JEVACTR;  /* avoid structure result */
A_PROC_ENTRY(dyadicsem);
 /* line 1030: */
 /* line 1031: */
{ 
XDVACTR_param = (A68_INT )(A68_BITS )((A68_BITS )Rator.Param&ZGAACTR_parammask);
 /* line 1032: */
 /* line 1033: */
if ( (XDVACTR_param<RGAACTR_biopnumbersstart) )
{ 
YDVACTR_opnumber = (XDVACTR_param/SGAACTR_opnumberdivisor);
 /* line 1034: */
AEVACTR_version = A_MOD(XDVACTR_param,SGAACTR_opnumberdivisor,ZDVACTR);
 /* line 1035: */
 /* line 1036: */
CEVACTR = A_R1INDEX(PDVACTR_dyadicsemantics,YDVACTR_opnumber) ;
A_CALLPROC(CEVACTR,(Root, YDVACTR_opnumber, AEVACTR_version, &DEVACTR),(Root, YDVACTR_opnumber, AEVACTR_version, &DEVACTR,(CEVACTR).nonlocals));
BEVACTR = DEVACTR;
} 
else
{ 
EEVACTR_biopparam = (XDVACTR_param-RGAACTR_biopnumbersstart);
 /* line 1037: */
FEVACTR_opnumber = (EEVACTR_biopparam/TGAACTR_biopnumberdivisor);
 /* line 1038: */
HEVACTR_version = A_MOD(EEVACTR_biopparam,TGAACTR_biopnumberdivisor,GEVACTR);
 /* line 1039: */
 /* line 1040: */
 /* line 1041: */
 /* line 1043: */
IEVACTR = A_R1INDEX(TDVACTR_dyadicbiopsemantics,FEVACTR_opnumber) ;
A_CALLPROC(IEVACTR,(Root, FEVACTR_opnumber, HEVACTR_version, &JEVACTR),(Root, FEVACTR_opnumber, HEVACTR_version, &JEVACTR,(IEVACTR).nonlocals));
BEVACTR = JEVACTR;
} 
} 
A_PROC_EXIT(dyadicsem);
*ReturnedValue = (BEVACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void SFTACTR(void)   /* initialise DECS adicops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","-dir",".","adicops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","./values.m","./uniquenameserver.m","./modes.m","./incmode.m","./idtable.m","./incoperfn.m","./evalbase.m","./environment.m","./environ.m","./coutput.m","./centities.m","./biops.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  KHTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_210  NYTACTR;  /* collateral clause result */
A68_193  OYTACTR;  /* procedure value */
A68_193  PYTACTR;  /* procedure value */
A68_193  QYTACTR;  /* procedure value */
A68_193  RYTACTR;  /* procedure value */
A68_193  SYTACTR;  /* procedure value */
A68_193  TYTACTR;  /* procedure value */
A68_193  UYTACTR;  /* procedure value */
A68_193  VYTACTR;  /* procedure value */
A68_193  WYTACTR;  /* procedure value */
A68_193  XYTACTR;  /* procedure value */
A68_193  YYTACTR;  /* procedure value */
A68_193  ZYTACTR;  /* procedure value */
A68_193  AZTACTR;  /* procedure value */
A68_193  BZTACTR;  /* procedure value */
A68_193  CZTACTR;  /* procedure value */
A68_193  DZTACTR;  /* procedure value */
A68_193  EZTACTR;  /* procedure value */
A68_193  FZTACTR;  /* procedure value */
A68_209  GZTACTR;  /* OPERATORS - istruct to row */
A68_209  HZTACTR;  /* OPERATORS - trim index */
A68_209  IZTACTR;  /* OPERATORS - trim index */
A68_225  XBVACTR;  /* collateral clause result */
A68_193  YBVACTR;  /* procedure value */
A68_193  ZBVACTR;  /* procedure value */
A68_193  ACVACTR;  /* procedure value */
A68_193  BCVACTR;  /* procedure value */
A68_193  CCVACTR;  /* procedure value */
A68_193  DCVACTR;  /* procedure value */
A68_193  ECVACTR;  /* procedure value */
A68_193  FCVACTR;  /* procedure value */
A68_193  GCVACTR;  /* procedure value */
A68_193  HCVACTR;  /* procedure value */
A68_193  ICVACTR;  /* procedure value */
A68_193  JCVACTR;  /* procedure value */
A68_193  KCVACTR;  /* procedure value */
A68_193  LCVACTR;  /* procedure value */
A68_193  MCVACTR;  /* procedure value */
A68_193  NCVACTR;  /* procedure value */
A68_193  OCVACTR;  /* procedure value */
A68_193  PCVACTR;  /* procedure value */
A68_193  QCVACTR;  /* procedure value */
A68_193  RCVACTR;  /* procedure value */
A68_193  SCVACTR;  /* procedure value */
A68_193  TCVACTR;  /* procedure value */
A68_193  UCVACTR;  /* procedure value */
A68_193  VCVACTR;  /* procedure value */
A68_193  WCVACTR;  /* procedure value */
A68_193  XCVACTR;  /* procedure value */
A68_193  YCVACTR;  /* procedure value */
A68_193  ZCVACTR;  /* procedure value */
A68_193  ADVACTR;  /* procedure value */
A68_193  BDVACTR;  /* procedure value */
A68_193  CDVACTR;  /* procedure value */
A68_193  DDVACTR;  /* procedure value */
A68_193  LDVACTR;  /* procedure value */
A68_209  MDVACTR;  /* OPERATORS - istruct to row */
A68_209  NDVACTR;  /* OPERATORS - trim index */
A68_209  ODVACTR;  /* OPERATORS - trim index */
A68_209  QDVACTR;  /* OPERATORS - vacuum */
A68_209  RDVACTR;  /* OPERATORS - trim index */
A68_209  SDVACTR;  /* OPERATORS - trim index */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ATPACTR();   /* USE values */
RHMACTR();   /* USE uniquenameserver */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
PPKACTR();   /* USE idtable */
XFAACTR();   /* USE incoperfn */
IWQACTR();   /* USE evalbase */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
AATACTR();   /* USE biops */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/src/adicops.a68";
A_config.translation_time = "Wed May  5 17:39:00 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "RFTACTR (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:39:00 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS adicops);
UEAALIB_a68config(LGAALIB_configinfo, WFTACTR);
 /* line 48: */
ZFTACTR_modulename = YFTACTR;
 /* line 50: */
 /* line 51: */
CGTACTR_qvfault = BGTACTR;
 /* line 52: */
FGTACTR_qcompl = EGTACTR;
 /* line 53: */
IGTACTR_qmupb = A_VC_PLUS(ZFTACTR_modulename,HGTACTR);
 /* line 54: */
LGTACTR_qmlwb = A_VC_PLUS(ZFTACTR_modulename,KGTACTR);
 /* line 55: */
OGTACTR_qabs = A_VC_PLUS(ZFTACTR_modulename,NGTACTR);
 /* line 56: */
RGTACTR_qround = A_VC_PLUS(ZFTACTR_modulename,QGTACTR);
 /* line 57: */
UGTACTR_qentier = A_VC_PLUS(ZFTACTR_modulename,TGTACTR);
 /* line 58: */
XGTACTR_qsign = A_VC_PLUS(ZFTACTR_modulename,WGTACTR);
 /* line 59: */
AHTACTR_qre = A_VC_PLUS(ZFTACTR_modulename,ZGTACTR);
 /* line 60: */
DHTACTR_qim = A_VC_PLUS(ZFTACTR_modulename,CHTACTR);
 /* line 61: */
GHTACTR_qarg = A_VC_PLUS(ZFTACTR_modulename,FHTACTR);
 /* line 62: */
JHTACTR_qconj = A_VC_PLUS(ZFTACTR_modulename,IHTACTR);
 /* line 63: */
LHTACTR_qi = A_VC_PLUS(ZFTACTR_modulename,A_HVEC(KHTACTR,'I',A68_CHAR ));
 /* line 64: */
OHTACTR_qplus = A_VC_PLUS(ZFTACTR_modulename,NHTACTR);
 /* line 65: */
RHTACTR_qminus = A_VC_PLUS(ZFTACTR_modulename,QHTACTR);
 /* line 66: */
UHTACTR_qtimes = A_VC_PLUS(ZFTACTR_modulename,THTACTR);
 /* line 67: */
XHTACTR_qdiv = A_VC_PLUS(ZFTACTR_modulename,WHTACTR);
 /* line 68: */
AITACTR_qover = A_VC_PLUS(ZFTACTR_modulename,ZHTACTR);
 /* line 69: */
DITACTR_qmod = A_VC_PLUS(ZFTACTR_modulename,CITACTR);
 /* line 70: */
GITACTR_qpower = A_VC_PLUS(ZFTACTR_modulename,FITACTR);
 /* line 71: */
JITACTR_qelem = A_VC_PLUS(ZFTACTR_modulename,IITACTR);
 /* line 72: */
MITACTR_qplusab = A_VC_PLUS(ZFTACTR_modulename,LITACTR);
 /* line 73: */
PITACTR_qplusto = A_VC_PLUS(ZFTACTR_modulename,OITACTR);
 /* line 74: */
SITACTR_qminusab = A_VC_PLUS(ZFTACTR_modulename,RITACTR);
 /* line 75: */
VITACTR_qtimesab = A_VC_PLUS(ZFTACTR_modulename,UITACTR);
 /* line 76: */
YITACTR_qoverab = A_VC_PLUS(ZFTACTR_modulename,XITACTR);
 /* line 77: */
BJTACTR_qmodab = A_VC_PLUS(ZFTACTR_modulename,AJTACTR);
 /* line 78: */
EJTACTR_qdivab = A_VC_PLUS(ZFTACTR_modulename,DJTACTR);
 /* line 79: */
HJTACTR_qis = A_VC_PLUS(ZFTACTR_modulename,GJTACTR);
 /* line 80: */
KJTACTR_qisnt = A_VC_PLUS(ZFTACTR_modulename,JJTACTR);
 /* line 81: */
NJTACTR_qisisnt = A_VC_PLUS(ZFTACTR_modulename,MJTACTR);
 /* line 82: */
QJTACTR_qcomplex = PJTACTR;
 /* line 84: */
 /* line 90: */
 /* line 99: */
 /* line 104: */
 /* line 121: */
 /* line 138: */
 /* line 155: */
 /* line 172: */
 /* line 194: */
 /* line 213: */
 /* line 230: */
 /* line 242: */
 /* line 254: */
 /* line 270: */
 /* line 287: */
 /* line 316: */
 /* line 348: */
 /* line 358: */
 /* line 362: */
 /* line 366: */
 /* line 378: */
 /* line 390: */
 /* line 392: */
 /* line 393: */
OYTACTR.fn.fn_global = SKTACTR_monadicplus;
OYTACTR.nonlocals = A68_NIL;
NYTACTR.data[0] = OYTACTR;
 /* line 394: */
PYTACTR.fn.fn_global = YKTACTR_monadicminus;
PYTACTR.nonlocals = A68_NIL;
NYTACTR.data[1] = PYTACTR;
 /* line 395: */
QYTACTR.fn.fn_global = ULTACTR_monadicupb;
QYTACTR.nonlocals = A68_NIL;
NYTACTR.data[2] = QYTACTR;
 /* line 396: */
RYTACTR.fn.fn_global = MMTACTR_monadiclwb;
RYTACTR.nonlocals = A68_NIL;
NYTACTR.data[3] = RYTACTR;
 /* line 397: */
SYTACTR.fn.fn_global = DNTACTR_not;
SYTACTR.nonlocals = A68_NIL;
NYTACTR.data[4] = SYTACTR;
 /* line 398: */
TYTACTR.fn.fn_global = VNTACTR_abs;
TYTACTR.nonlocals = A68_NIL;
NYTACTR.data[5] = TYTACTR;
 /* line 399: */
UYTACTR.fn.fn_global = ZOTACTR_bin;
UYTACTR.nonlocals = A68_NIL;
NYTACTR.data[6] = UYTACTR;
 /* line 400: */
VYTACTR.fn.fn_global = OPTACTR_repr;
VYTACTR.nonlocals = A68_NIL;
NYTACTR.data[7] = VYTACTR;
 /* line 401: */
WYTACTR.fn.fn_global = DQTACTR_lengthen;
WYTACTR.nonlocals = A68_NIL;
NYTACTR.data[8] = WYTACTR;
 /* line 402: */
XYTACTR.fn.fn_global = TQTACTR_shorten;
XYTACTR.nonlocals = A68_NIL;
NYTACTR.data[9] = XYTACTR;
 /* line 403: */
YYTACTR.fn.fn_global = JRTACTR_odd;
YYTACTR.nonlocals = A68_NIL;
NYTACTR.data[10] = YYTACTR;
 /* line 404: */
ZYTACTR.fn.fn_global = YRTACTR_sign;
ZYTACTR.nonlocals = A68_NIL;
NYTACTR.data[11] = ZYTACTR;
 /* line 405: */
AZTACTR.fn.fn_global = MSTACTR_round;
AZTACTR.nonlocals = A68_NIL;
NYTACTR.data[12] = AZTACTR;
 /* line 406: */
BZTACTR.fn.fn_global = GUTACTR_entier;
BZTACTR.nonlocals = A68_NIL;
NYTACTR.data[13] = BZTACTR;
 /* line 407: */
CZTACTR.fn.fn_global = SWTACTR_re;
CZTACTR.nonlocals = A68_NIL;
NYTACTR.data[14] = CZTACTR;
 /* line 408: */
DZTACTR.fn.fn_global = AXTACTR_im;
DZTACTR.nonlocals = A68_NIL;
NYTACTR.data[15] = DZTACTR;
 /* line 410: */
EZTACTR.fn.fn_global = IXTACTR_arg;
EZTACTR.nonlocals = A68_NIL;
NYTACTR.data[16] = EZTACTR;
FZTACTR.fn.fn_global = WXTACTR_conj;
FZTACTR.nonlocals = A68_NIL;
NYTACTR.data[17] = FZTACTR;
HZTACTR = A_HIS1ARR(GZTACTR,NYTACTR,A68_193 ,18) ;
JZTACTR_monadicsemantics = A_R1TRIM(IZTACTR,(HZTACTR),A_RTSCRIPT(&(IZTACTR.dim[0]),&((HZTACTR).dim[0]),(HZTACTR).dim[0].lwb,(HZTACTR).dim[0].upb,0));
 /* line 412: */
 /* line 425: */
 /* line 439: */
 /* line 459: */
 /* line 473: */
 /* line 485: */
 /* line 494: */
 /* line 508: */
 /* line 521: */
 /* line 551: */
 /* line 582: */
 /* line 620: */
 /* line 649: */
 /* line 671: */
 /* line 683: */
 /* line 697: */
 /* line 720: */
 /* line 723: */
 /* line 739: */
 /* line 758: */
 /* line 781: */
 /* line 801: */
 /* line 805: */
 /* line 825: */
 /* line 844: */
 /* line 867: */
 /* line 884: */
 /* line 903: */
 /* line 917: */
 /* line 932: */
 /* line 951: */
 /* line 985: */
 /* line 987: */
 /* line 988: */
YBVACTR.fn.fn_global = PBUACTR_dyadicplus;
YBVACTR.nonlocals = A68_NIL;
XBVACTR.data[0] = YBVACTR;
 /* line 989: */
ZBVACTR.fn.fn_global = SCUACTR_dyadicminus;
ZBVACTR.nonlocals = A68_NIL;
XBVACTR.data[1] = ZBVACTR;
 /* line 990: */
ACVACTR.fn.fn_global = IDUACTR_dyadicupb;
ACVACTR.nonlocals = A68_NIL;
XBVACTR.data[2] = ACVACTR;
 /* line 991: */
BCVACTR.fn.fn_global = YDUACTR_dyadiclwb;
BCVACTR.nonlocals = A68_NIL;
XBVACTR.data[3] = BCVACTR;
 /* line 992: */
CCVACTR.fn.fn_global = OEUACTR_and;
CCVACTR.nonlocals = A68_NIL;
XBVACTR.data[4] = CCVACTR;
 /* line 993: */
DCVACTR.fn.fn_global = HFUACTR_or;
DCVACTR.nonlocals = A68_NIL;
XBVACTR.data[5] = DCVACTR;
 /* line 994: */
ECVACTR.fn.fn_global = AGUACTR_lessnotless;
ECVACTR.nonlocals = A68_NIL;
XBVACTR.data[6] = ECVACTR;
 /* line 995: */
FCVACTR.fn.fn_global = AGUACTR_lessnotless;
FCVACTR.nonlocals = A68_NIL;
XBVACTR.data[7] = FCVACTR;
 /* line 996: */
GCVACTR.fn.fn_global = MHUACTR_lesseqgreatereq;
GCVACTR.nonlocals = A68_NIL;
XBVACTR.data[8] = GCVACTR;
 /* line 997: */
HCVACTR.fn.fn_global = MHUACTR_lesseqgreatereq;
HCVACTR.nonlocals = A68_NIL;
XBVACTR.data[9] = HCVACTR;
 /* line 998: */
ICVACTR.fn.fn_global = DJUACTR_eqnoteq;
ICVACTR.nonlocals = A68_NIL;
XBVACTR.data[10] = ICVACTR;
 /* line 999: */
JCVACTR.fn.fn_global = DJUACTR_eqnoteq;
JCVACTR.nonlocals = A68_NIL;
XBVACTR.data[11] = JCVACTR;
 /* line 1000: */
KCVACTR.fn.fn_global = XKUACTR_times;
KCVACTR.nonlocals = A68_NIL;
XBVACTR.data[12] = KCVACTR;
 /* line 1001: */
LCVACTR.fn.fn_global = JMUACTR_divide;
LCVACTR.nonlocals = A68_NIL;
XBVACTR.data[13] = LCVACTR;
 /* line 1002: */
MCVACTR.fn.fn_global = HNUACTR_over;
MCVACTR.nonlocals = A68_NIL;
XBVACTR.data[14] = MCVACTR;
 /* line 1003: */
NCVACTR.fn.fn_global = TNUACTR_mod;
NCVACTR.nonlocals = A68_NIL;
XBVACTR.data[15] = NCVACTR;
 /* line 1004: */
OCVACTR.fn.fn_global = ROUACTR_power;
OCVACTR.nonlocals = A68_NIL;
XBVACTR.data[16] = OCVACTR;
 /* line 1005: */
PCVACTR.fn.fn_global = TQUACTR_imaginary;
PCVACTR.nonlocals = A68_NIL;
XBVACTR.data[17] = PCVACTR;
 /* line 1006: */
QCVACTR.fn.fn_global = YRUACTR_shiftleftright;
QCVACTR.nonlocals = A68_NIL;
XBVACTR.data[18] = QCVACTR;
 /* line 1007: */
RCVACTR.fn.fn_global = YRUACTR_shiftleftright;
RCVACTR.nonlocals = A68_NIL;
XBVACTR.data[19] = RCVACTR;
 /* line 1008: */
SCVACTR.fn.fn_global = VSUACTR_elem;
SCVACTR.nonlocals = A68_NIL;
XBVACTR.data[20] = SCVACTR;
 /* line 1009: */
TCVACTR.fn.fn_global = XUUACTR_plusab;
TCVACTR.nonlocals = A68_NIL;
XBVACTR.data[21] = TCVACTR;
 /* line 1010: */
UCVACTR.fn.fn_global = WWUACTR_minusab;
UCVACTR.nonlocals = A68_NIL;
XBVACTR.data[22] = UCVACTR;
 /* line 1011: */
VCVACTR.fn.fn_global = QXUACTR_timesab;
VCVACTR.nonlocals = A68_NIL;
XBVACTR.data[23] = VCVACTR;
 /* line 1012: */
WCVACTR.fn.fn_global = TYUACTR_overab;
WCVACTR.nonlocals = A68_NIL;
XBVACTR.data[24] = WCVACTR;
 /* line 1013: */
XCVACTR.fn.fn_global = IZUACTR_modab;
XCVACTR.nonlocals = A68_NIL;
XBVACTR.data[25] = XCVACTR;
 /* line 1014: */
YCVACTR.fn.fn_global = VZUACTR_divab;
YCVACTR.nonlocals = A68_NIL;
XBVACTR.data[26] = YCVACTR;
 /* line 1015: */
ZCVACTR.fn.fn_global = OAVACTR_isisnt;
ZCVACTR.nonlocals = A68_NIL;
XBVACTR.data[27] = ZCVACTR;
 /* line 1016: */
ADVACTR.fn.fn_global = OAVACTR_isisnt;
ADVACTR.nonlocals = A68_NIL;
XBVACTR.data[28] = ADVACTR;
 /* line 1017: */
BDVACTR.fn.fn_global = OEUACTR_and;
BDVACTR.nonlocals = A68_NIL;
XBVACTR.data[29] = BDVACTR;
 /* line 1018: */
CDVACTR.fn.fn_global = HFUACTR_or;
CDVACTR.nonlocals = A68_NIL;
XBVACTR.data[30] = CDVACTR;
 /* line 1019: */
DDVACTR.fn.fn_global = AWUACTR_plusto;
DDVACTR.nonlocals = A68_NIL;
XBVACTR.data[31] = DDVACTR;
LDVACTR.fn.fn_global = HDVACTR_anonymous;
LDVACTR.nonlocals = A68_NIL;
XBVACTR.data[32] = LDVACTR;
NDVACTR = A_HIS1ARR(MDVACTR,XBVACTR,A68_193 ,33) ;
PDVACTR_dyadicsemantics = A_R1TRIM(ODVACTR,(NDVACTR),A_RTSCRIPT(&(ODVACTR.dim[0]),&((NDVACTR).dim[0]),(NDVACTR).dim[0].lwb,(NDVACTR).dim[0].upb,0));
 /* line 1023: */
 /* line 1027: */
RDVACTR = A_R1VAC(QDVACTR) ;
TDVACTR_dyadicbiopsemantics = A_R1TRIM(SDVACTR,(RDVACTR),A_RTSCRIPT(&(SDVACTR.dim[0]),&((RDVACTR).dim[0]),(RDVACTR).dim[0].lwb,(RDVACTR).dim[0].upb,0));
 /* line 1029: */
 /* line 1045: */
A_PROC_EXIT(DECS adicops);
} 
#undef NL
/* end of translation of adicops.a68 */
