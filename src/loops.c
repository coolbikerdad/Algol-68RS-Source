/* UNAME:ACABCTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t33);
typedef struct A68t33  A68_33 ;    /* STRUCT 7 CHAR */
struct A68t32{
struct A68t33  Name;
A_PAD_ISTRUCT(A68_33 ,PAD_1)
A68_BOOL  Set;
A_PAD_BOOL(PAD_2)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(MODE33,BOOL)  */
struct A68t34{
A68_INT  Labno;
A_PAD_INT(PAD_3)
};
typedef struct A68t34  A68_34 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t35,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_INT *,A68t36,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t37,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE26,CHAR) MODE26 */
struct A68t41 ;

A_PROCEDURE(A68_VOID ,A68t40,(struct A68t41 ,A68_VC *),(struct A68t41 ,A68_VC *,void *));
typedef struct A68t40  A68_40 ;    /* PROC(MODE41) REF MODE26 */
A_VECTOR(A68_VC ,A68t41);
typedef struct A68t41  A68_41 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_INT ,A68t42,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t44,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t45);
typedef struct A68t45  A68_45 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t45 ,A68t46,(A68_INT ),(A68_INT ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(INT) MODE45 */

A_PROCEDURE(A68_INT ,A68t47,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t48,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t49,(A68_VC ),(A68_VC ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t50,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t51,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t52,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t53,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t54,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t55,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t56,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t57,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t58,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF INT,MODE26) BOOL */
struct A68t59{
A68_BOOL  Block;
A_PAD_BOOL(PAD_4)
A68_BOOL  Dynamicresult;
A_PAD_BOOL(PAD_5)
A68_BOOL  Discardeddynamicresult;
A_PAD_BOOL(PAD_6)
A68_INT  Type;
A_PAD_INT(PAD_7)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(BOOL,BOOL,BOOL,INT)  */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t59 ,struct A68t32 **,A68_BOOL *),(struct A68t59 ,struct A68t32 **,A68_BOOL *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE59,REF REF MODE32,REF BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t59 ,struct A68t32 *,struct A68t32 *,A68_BOOL ,A68_BOOL ),(struct A68t59 ,struct A68t32 *,struct A68t32 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE59,REF MODE32,REF MODE32,BOOL,BOOL) VOID */
struct A68t63 ;

A_PROCEDURE(A68_VOID ,A68t62,(A68_BOOL ,A68_BOOL ,struct A68t63 ),(A68_BOOL ,A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(BOOL,BOOL,MODE63) VOID */
struct A68t63{
struct A68t64 * Value;
struct A68t32 * End;
A68_INT  Type;
A_PAD_INT(PAD_8)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(REF MODE64,REF MODE32,INT)  */
struct A68t66{
A68_INT  Rdenno;
A_PAD_INT(PAD_9)
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT)  */
struct A68t67{
A68_INT  Idno;
A_PAD_INT(PAD_10)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT)  */
struct A68t68{
struct A68t33  Name;
A_PAD_ISTRUCT(A68_33 ,PAD_11)
A68_INT  Mode;
A_PAD_INT(PAD_12)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(MODE33,INT)  */
struct A68t69{
A68_INT  Nse;
A_PAD_INT(PAD_13)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT)  */
struct A68t70{
A68_INT  Fn;
A_PAD_INT(PAD_14)
A68_INT  Param;
A_PAD_INT(PAD_15)
struct A68t71 * Operands;
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,INT,REF MODE71)  */
struct A68t65 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t66  mode2;
struct A68t67  mode4;
struct A68t68  mode5;
A68_VC  mode6;
struct A68t34  mode7;
struct A68t69  mode8;
struct A68t70  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t65  A68_65 ;    /* UNION(LONG BITS,MODE66,VOID,MODE67,MODE68,MODE26,MODE34,MODE69,MODE70)  */
struct A68t64{
A68_INT  Mode;
A_PAD_INT(PAD_16)
A68_BITS  Info;
A_PAD_BITS(PAD_17)
struct A68t65  Extra;
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,BITS,MODE65)  */
struct A68t71{
struct A68t64  Value;
struct A68t71 * Rest;
};
typedef struct A68t71  A68_71 ;    /* STRUCT(MODE64,REF MODE71)  */

A_PROCEDURE(A68_VOID ,A68t72,(A68_BOOL ,A68_BOOL ),(A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t73,(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t32 *),(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t32 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(BOOL,BOOL,BOOL,REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(REF MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t75,(void),(void *));
typedef struct A68t75  A68_75 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t76,(A68_BOOL ,struct A68t63 ),(A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(BOOL,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t77,(A68_INT ),(A68_INT ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT) VOID */
struct A68t79 ;
struct A68t80 ;

A_PROCEDURE(A68_VOID ,A68t78,(struct A68t79 ,struct A68t64 *,struct A68t80 ),(struct A68t79 ,struct A68t64 *,struct A68t80 ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE79,REF MODE64,REF MODE80) VOID */
struct A68t79{
A68_INT  Mode;
A_PAD_INT(PAD_18)
A68_BITS  Props;
A_PAD_BITS(PAD_19)
A68_INT  Param;
A_PAD_INT(PAD_20)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT,BITS,INT)  */
A_ROW(A68_BOOL ,A68t80,1);
typedef struct A68t80  A68_80 ;    /* [] BOOL */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t79 ,struct A68t64 ,struct A68t80 ),(struct A68t79 ,struct A68t64 ,struct A68t80 ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE79,MODE64,REF MODE80) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(A68_BOOL ,struct A68t64 *),(A68_BOOL ,struct A68t64 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(BOOL,REF MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t59 ,struct A68t63 ,struct A68t32 *,A68_BOOL ,A68_BOOL ,A68_BOOL ),(struct A68t59 ,struct A68t63 ,struct A68t32 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE59,MODE63,REF MODE32,BOOL,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t71 **,struct A68t63 ),(struct A68t71 **,struct A68t63 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF REF MODE71,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t71 **),(struct A68t71 **,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_INT ,struct A68t71 *,struct A68t68 *),(A68_VC ,A68_INT ,struct A68t71 *,struct A68t68 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,INT,REF MODE71) MODE68 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC ),(A68_VC ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26) VOID */
struct A68t89 ;

A_PROCEDURE(A68_VOID ,A68t88,(struct A68t89 ),(struct A68t89 ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE89) VOID */
A_VECTOR(struct A68t90 ,A68t89);
typedef struct A68t89  A68_89 ;    /* VECTOR [] MODE90 */
struct A68t90 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t90  A68_90 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t92 ;

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t92 ,A68_INT ),(struct A68t92 ,A68_INT ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE92,INT) VOID */
A_VECTOR(struct A68t93 ,A68t92);
typedef struct A68t92  A68_92 ;    /* VECTOR [] MODE93 */
struct A68t93 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t93  A68_93 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t94,(A68_INT ),(A68_INT ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t95,(A68_INT ),(A68_INT ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT) BOOL */
struct A68t96{
A68_INT  Level;
A_PAD_INT(PAD_21)
A68_INT  Block;
A_PAD_INT(PAD_22)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t96 *),(struct A68t96 *,void *));
typedef struct A68t97  A68_97 ;    /* PROC MODE96 */

A_PROCEDURE(A68_INT ,A68t98,(void),(void *));
typedef struct A68t98  A68_98 ;    /* PROC INT */

A_PROCEDURE(A68_BOOL ,A68t99,(void),(void *));
typedef struct A68t99  A68_99 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t100,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t101,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t102,(struct A68t96 ,struct A68t96 ),(struct A68t96 ,struct A68t96 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE96,MODE96) BOOL */

A_PROCEDURE(A68_BOOL ,A68t103,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE96) BOOL */

A_PROCEDURE(A68_VOID ,A68t104,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t106,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT) REF MODE26 */
struct A68t108 ;

A_PROCEDURE(A68_VOID ,A68t107,(A68_INT ,struct A68t108 ),(A68_INT ,struct A68t108 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(INT,MODE108) VOID */
A_ROW(A68_VC ,A68t108,1);
typedef struct A68t108  A68_108 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t109,(void),(void *));
typedef struct A68t109  A68_109 ;    /* PROC BITS */
struct A68t110{
A68_INT  Cfile;
A_PAD_INT(PAD_23)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT)  */
struct A68t111{
A68_INT  Seedfile;
A_PAD_INT(PAD_24)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT)  */
struct A68t112 { A68_INT mode; union {
struct A68t110  mode1;
struct A68t111  mode2;
struct A68t33  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t112  A68_112 ;    /* UNION(MODE110,MODE111,MODE33,VOID)  */
struct A68t113{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_25)
A68_VC  Sourcefile;
struct A68t33  Nameseed;
A_PAD_ISTRUCT(A68_33 ,PAD_26)
struct A68t112  Nameseedorigin;
struct A68t114 * Used_modules;
A68_VC  Commandline;
struct A68t115 * Environment;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE33,MODE112,REF MODE114,REF MODE26,REF MODE115)  */
struct A68t114{
A68_VC  Modinfo_file;
struct A68t114 * Next;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(REF MODE26,REF MODE114)  */
struct A68t115{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t115 * Next;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE115)  */
struct A68t117 ;
struct A68t118 ;

A_PROCEDURE(struct A68t117 *,A68t116,(A68_VC ,struct A68t118 *,A68_VC *),(A68_VC ,struct A68t118 *,A68_VC *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE26,REF MODE118,REF REF MODE26) REF MODE117 */
struct A68t117{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t118{
A68_VC  Dir;
struct A68t118 * Next;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(REF MODE26,REF MODE118)  */
struct A68t119{
A68_INT  Parameters;
A_PAD_INT(PAD_27)
A68_INT  Result;
A_PAD_INT(PAD_28)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_29)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 32 CHAR */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_30)
A68_INT  Offset;
A_PAD_INT(PAD_31)
struct A68t121  Name;
A_PAD_ISTRUCT(A68_121 ,PAD_32)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,INT,MODE121)  */
struct A68t123 ;

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) REF MODE123 */
A_VECTOR(A68_INT ,A68t123);
typedef struct A68t123  A68_123 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t120 *,A68_VC *),(struct A68t120 *,A68_VC *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE120) MODE26 */

A_PROCEDURE(A68_VOID ,A68t125,(A68_INT ,A68_VC ,struct A68t68 *),(A68_INT ,A68_VC ,struct A68t68 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT,MODE26) MODE68 */
struct A68t127 ;

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t127 ,A68_INT ),(struct A68t127 ,A68_INT ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE127,INT) VOID */
A_ROW(struct A68t128 ,A68t127,1);
typedef struct A68t127  A68_127 ;    /* [] MODE128 */
struct A68t138{
A68_INT  Mode;
A_PAD_INT(PAD_33)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT)  */
struct A68t128 { A68_INT mode; union {
A68_INT  mode1;
struct A68t129 * mode2;
struct A68t130 * mode3;
struct A68t131 * mode4;
struct A68t132 * mode5;
struct A68t133 * mode6;
struct A68t134 * mode7;
struct A68t135 * mode8;
struct A68t136 * mode9;
struct A68t137 * mode10;
struct A68t138  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t128  A68_128 ;    /* UNION(INT,REF MODE129,REF MODE130,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,MODE138)  */
struct A68t129{
A68_INT  Rdenno;
A_PAD_INT(PAD_34)
struct A68t142 * Modelist;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t130{
A68_INT  Deproc;
A_PAD_INT(PAD_35)
struct A68t142 * Pars;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t131{
A68_INT  Rdenno;
A_PAD_INT(PAD_36)
A68_INT  Deflex;
A_PAD_INT(PAD_37)
struct A68t141 * Sels;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,INT,REF MODE141)  */
struct A68t132{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
A68_INT  Imode;
A_PAD_INT(PAD_39)
A68_INT  Length;
A_PAD_INT(PAD_40)
A68_INT  Deflex;
A_PAD_INT(PAD_41)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t133{
A68_INT  Deproc;
A_PAD_INT(PAD_42)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT)  */
struct A68t134{
A68_INT  Rdenno;
A_PAD_INT(PAD_43)
A68_INT  Vecmode;
A_PAD_INT(PAD_44)
A68_INT  Deflex;
A_PAD_INT(PAD_45)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,INT)  */
struct A68t135{
A68_INT  Rdenno;
A_PAD_INT(PAD_46)
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Nods;
A_PAD_INT(PAD_48)
A68_INT  Deflex;
A_PAD_INT(PAD_49)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t136{
A68_INT  Mode;
A_PAD_INT(PAD_50)
struct A68t140 * Stenlist;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,REF MODE140)  */
struct A68t137{
A68_INT  Mode;
A_PAD_INT(PAD_51)
A68_INT  Modeproc;
A_PAD_INT(PAD_52)
struct A68t139 * El;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,REF MODE139)  */
struct A68t139{
struct A68t137 * Am;
struct A68t139 * Rest;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(REF MODE137,REF MODE139)  */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_INT  Rdenno;
A_PAD_INT(PAD_54)
struct A68t140 * Rest;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,INT,REF MODE140)  */
struct A68t141{
A68_INT  Mode;
A_PAD_INT(PAD_55)
A68_INT  Fieldno;
A_PAD_INT(PAD_56)
struct A68t121  Name;
A_PAD_ISTRUCT(A68_121 ,PAD_57)
struct A68t141 * Rest;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,INT,MODE121,REF MODE141)  */
struct A68t142{
A68_INT  Mode;
A_PAD_INT(PAD_58)
struct A68t142 * Rest;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT,REF MODE142)  */

A_PROCEDURE(A68_VOID ,A68t143,(A68_INT ,struct A68t119 *),(A68_INT ,struct A68t119 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(INT) MODE119 */
struct A68t145 ;

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ,struct A68t145 *),(A68_INT ,struct A68t145 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT) REF MODE145 */
A_VECTOR(struct A68t120 ,A68t145);
typedef struct A68t145  A68_145 ;    /* VECTOR [] MODE120 */

A_PROCEDURE(A68_INT ,A68t146,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t147,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t148,(struct A68t64 *,struct A68t64 *),(struct A68t64 *,struct A68t64 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE64,REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t149,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t150,(struct A68t64 *,A68_LBITS ),(struct A68t64 *,A68_LBITS ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE64,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t151,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE64) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t64 *,A68_VC *),(struct A68t64 *,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE64) MODE26 */

A_PROCEDURE(struct A68t64 *,A68t153,(struct A68t64 *,A68_INT ),(struct A68t64 *,A68_INT ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE64,INT) REF MODE64 */

A_PROCEDURE(A68_INT ,A68t154,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE70) INT */

A_PROCEDURE(A68_BOOL ,A68t155,(struct A68t64 *,A68_BITS ),(struct A68t64 *,A68_BITS ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE64,BITS) BOOL */

A_PROCEDURE(struct A68t64 *,A68t156,(struct A68t71 *,A68_INT ),(struct A68t71 *,A68_INT ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE71,INT) REF MODE64 */

A_PROCEDURE(struct A68t71 *,A68t157,(struct A68t71 *),(struct A68t71 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE71) REF MODE71 */
struct A68t159 ;

A_PROCEDURE(struct A68t64 *,A68t158,(A68_INT ,A68_INT ,A68_BITS ,struct A68t159 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t159 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT,INT,BITS,MODE159) REF MODE64 */
A_VECTOR(struct A68t64 *,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t64 *,A68_BOOL ,A68_VC *),(struct A68t64 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE64,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t161,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE64) LONG INT */
struct A68t162 { A68_INT mode; union {
struct A68t64 * mode1;
A68_VC  mode2;
struct A68t68  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t162  A68_162 ;    /* UNION(REF MODE64,MODE26,MODE68)  */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t162 ,A68_VC *),(struct A68t162 ,A68_VC *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE162) MODE26 */
struct A68t165 ;

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t165 ,A68_VC *),(struct A68t165 ,A68_VC *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE165) MODE26 */
A_VECTOR(struct A68t162 ,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] MODE162 */

A_PROCEDURE(A68_VOID ,A68t166,(A68_VC ,struct A68t165 ,A68_VC *),(A68_VC ,struct A68t165 ,A68_VC *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE26,MODE165) MODE26 */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE165) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(A68_VC ,A68_INT ,struct A68t165 ,struct A68t68 *),(A68_VC ,A68_INT ,struct A68t165 ,struct A68t68 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE26,INT,MODE165) MODE68 */

A_PROCEDURE(struct A68t64 *,A68t169,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE64) REF MODE64 */

A_PROCEDURE(struct A68t64 *,A68t170,(A68_VC ,struct A68t64 *),(A68_VC ,struct A68t64 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE26,REF MODE64) REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t87 ),(struct A68t87 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE87) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 55 CHAR */
struct A68t175{
struct A68t64 * Control;
struct A68t64 * Step;
A68_BOOL  Forpart;
A_PAD_BOOL(PAD_59)
A68_BOOL  Frompart;
A_PAD_BOOL(PAD_60)
A68_BOOL  Bypart;
A_PAD_BOOL(PAD_61)
A68_BOOL  Topart;
A_PAD_BOOL(PAD_62)
};
typedef struct A68t175  A68_175 ;    /* STRUCT(REF MODE64,REF MODE64,BOOL,BOOL,BOOL,BOOL)  */
struct A68t176{
struct A68t64  Ident;
A68_VC  Control;
A68_BOOL  Needstemp;
A_PAD_BOOL(PAD_63)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(MODE64,REF MODE26,BOOL)  */

A_PROCEDURE(struct A68t64 *,A68t177,(struct A68t64 *,struct A68t64 ),(struct A68t64 *,struct A68t64 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(REF MODE64,MODE64) REF MODE64 */

A_PROCEDURE(struct A68t65 *,A68t178,(struct A68t65 *,struct A68t65 ),(struct A68t65 *,struct A68t65 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REF MODE65,MODE65) REF MODE65 */
#define A68_179  A68_VC 
#define A68t179 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t175 *,A68_INT ,struct A68t71 **),(struct A68t175 *,A68_INT ,struct A68t71 **,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE175,INT,REF REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t64 *,A68_BOOL ),(struct A68t64 *,A68_BOOL ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE64,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t93 ,5,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 5 MODE93 */

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC *),(A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC MODE26 */
A_ISTRUCT(A68_CHAR ,12,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(struct A68t93 ,6,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 6 MODE93 */
A_ISTRUCT(A68_CHAR ,2,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t93 ,4,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 4 MODE93 */
A_ISTRUCT(A68_CHAR ,8,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t93 ,8,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 8 MODE93 */
A_ISTRUCT(A68_CHAR ,9,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t93 ,3,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 3 MODE93 */
A_ISTRUCT(A68_CHAR ,10,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t93 ,2,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 2 MODE93 */
A_VECTOR(struct A68t176 ,A68t197);
typedef struct A68t197  A68_197 ;    /* VECTOR [] MODE176 */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t197 ,struct A68t71 **),(struct A68t197 ,struct A68t71 **,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE197,REF REF MODE71) VOID */
A_VECTOR(A68_VC ,A68t199);
typedef struct A68t199  A68_199 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t200,(A68_BOOL ,struct A68t199 *),(A68_BOOL ,struct A68t199 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(BOOL) MODE199 */

A_PROCEDURE(A68_VOID ,A68t201,(A68_BOOL ,struct A68t123 *),(A68_BOOL ,struct A68t123 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(BOOL) MODE123 */
A_ISTRUCT(A68_CHAR ,26,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(struct A68t162 ,2,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 2 MODE162 */
A_ISTRUCT(A68_CHAR ,14,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t93 ,7,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 7 MODE93 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_BOOL  LVPACTR_isconstant(struct A68t64 *);
extern A68_BOOL  EWPACTR_isident(struct A68t64 *);
extern A68_BOOL  QWPACTR_isskip(struct A68t64 *);
extern A68_BOOL  IWPACTR_istemp(struct A68t64 *);
extern A68_LBITS  ZWPACTR_getconstant(struct A68t64 *);
extern A68_VOID  GYPACTR_getcfragment(struct A68t64 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
extern A68_VOID  NCQACTR_bracketcfragment(struct A68t64 *,A68_VC *);
extern A68_VOID  ENQACTR_usemacro(A68_VC ,struct A68t165 ,A68_VC *);
extern A68_64 * VOQACTR_yield(A68_VC ,struct A68t64 *);
/* --- End of imports from values --- */


/* --- Imports from modes --- */
extern A68_VOID  LKOACTR_declarectemporary(A68_INT ,A68_VC ,A68_68 *);
extern A68_INT  QVMACTR_dimensions(A68_INT );
extern A68_94  UVMACTR_elementmode;
extern A68_BOOL  RSMACTR_hasrefs(A68_INT );
extern A68_BOOL  ARMACTR_isarray(A68_INT );
extern A68_BOOL  FRMACTR_isfirmarray(A68_INT );
extern A68_BOOL  KRMACTR_isflexarray(A68_INT );
extern A68_BOOL  QQMACTR_isvector(A68_INT );
extern A68_BOOL  XRMACTR_isistruct(A68_INT );
extern A68_94  WVMACTR_istructlength;
extern A68_BOOL  MOMACTR_hasoneref(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define EFAACTR_intmode 15
#define VFAACTR_refmark 1024
/* --- End of imports from incmode --- */


/* --- Imports from environment --- */
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t92 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from clauses --- */
extern A68_74  NWQACTR_evaluate;
/* --- End of imports from clauses --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ATPACTR(void);   /* values */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void PTLACTR(void);   /* coutput */
extern void BZYACTR(void);   /* clauses */
extern void IKAAOSF(void);   /* usefulops */
extern void THAACTR(void);   /* centities */
/* --- end of DECS initialisation functions --- */
static A68_174   ECABCTR = {"$Id: loops.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,FCABCTR,ECABCTR,55)
static A68_64 * XCABCTR_value1;
static A68_182   JDABCTR = {"to part of loop"}; 
A_GISVEC(A68_VC ,LDABCTR,JDABCTR,15)
static A68_182   MDABCTR = {"by part of loop"}; 
A_GISVEC(A68_VC ,NDABCTR,MDABCTR,15)
static A68_183   VDABCTR = {" = "}; 
A_GISVEC(A68_VC ,WDABCTR,VDABCTR,3)
static A68_186   ZEABCTR = {"loop control"}; 
A_GISVEC(A68_VC ,AFABCTR,ZEABCTR,12)
static A68_187   GFABCTR = {"for ( "}; 
A_GISVEC(A68_VC ,HFABCTR,GFABCTR,6)
static A68_183   LFABCTR = {" = "}; 
A_GISVEC(A68_VC ,MFABCTR,LFABCTR,3)
static A68_45   XFABCTR = {" <= "}; 
A_GISVEC(A68_VC ,YFABCTR,XFABCTR,4)
static A68_45   IGABCTR = {" >= "}; 
A_GISVEC(A68_VC ,JGABCTR,IGABCTR,4)
static A68_189   QGABCTR = {"; "}; 
A_GISVEC(A68_VC ,RGABCTR,QGABCTR,2)
static A68_45   ZGABCTR = {" += "}; 
A_GISVEC(A68_VC ,AHABCTR,ZGABCTR,4)
static A68_189   FHABCTR = {" )"}; 
A_GISVEC(A68_VC ,GHABCTR,FHABCTR,2)
static A68_189   OHABCTR = {"( "}; 
A_GISVEC(A68_VC ,PHABCTR,OHABCTR,2)
static A68_191   THABCTR = {" > 0 && "}; 
A_GISVEC(A68_VC ,UHABCTR,THABCTR,8)
static A68_45   YHABCTR = {" <= "}; 
A_GISVEC(A68_VC ,ZHABCTR,YHABCTR,4)
static A68_45   DIABCTR = {") ||"}; 
A_GISVEC(A68_VC ,EIABCTR,DIABCTR,4)
static A68_189   KIABCTR = {"( "}; 
A_GISVEC(A68_VC ,LIABCTR,KIABCTR,2)
static A68_191   PIABCTR = {" < 0 && "}; 
A_GISVEC(A68_VC ,QIABCTR,PIABCTR,8)
static A68_45   UIABCTR = {" >= "}; 
A_GISVEC(A68_VC ,VIABCTR,UIABCTR,4)
static A68_45   ZIABCTR = {") ||"}; 
A_GISVEC(A68_VC ,AJABCTR,ZIABCTR,4)
static A68_189   GJABCTR = {"( "}; 
A_GISVEC(A68_VC ,HJABCTR,GJABCTR,2)
static A68_193   LJABCTR = {" == 0 ) ;"}; 
A_GISVEC(A68_VC ,MJABCTR,LJABCTR,9)
static A68_45   TJABCTR = {" += "}; 
A_GISVEC(A68_VC ,UJABCTR,TJABCTR,4)
static A68_189   YJABCTR = {" )"}; 
A_GISVEC(A68_VC ,ZJABCTR,YJABCTR,2)
static A68_187   JKABCTR = {"for ( "}; 
A_GISVEC(A68_VC ,KKABCTR,JKABCTR,6)
static A68_183   OKABCTR = {" = "}; 
A_GISVEC(A68_VC ,PKABCTR,OKABCTR,3)
static A68_189   TKABCTR = {";;"}; 
A_GISVEC(A68_VC ,UKABCTR,TKABCTR,2)
static A68_45   BLABCTR = {" += "}; 
A_GISVEC(A68_VC ,CLABCTR,BLABCTR,4)
static A68_183   HLABCTR = {" ) "}; 
A_GISVEC(A68_VC ,ILABCTR,HLABCTR,3)
static A68_195   AMABCTR = {"for ( ;; )"}; 
A_GISVEC(A68_VC ,BMABCTR,AMABCTR,10)
static A68_189   HMABCTR = {"{ "}; 
A_GISVEC(A68_VC ,IMABCTR,HMABCTR,2)
static A68_186   TNABCTR = {"forall yield"}; 
A_GISVEC(A68_VC ,UNABCTR,TNABCTR,12)
static A68_202   BPABCTR = {"forall control - ref [][]x"}; 
A_GISVEC(A68_VC ,CPABCTR,BPABCTR,26)
static A68_203   GQABCTR = {"forall control - []x"}; 
A_GISVEC(A68_VC ,HQABCTR,GQABCTR,20)
static A68_204   VQABCTR = {"forall loop counter"}; 
A_GISVEC(A68_VC ,WQABCTR,VQABCTR,19)
static A68_183   CRABCTR = {" = "}; 
static A68_33   IRABCTR = {".upb -1"}; 
A_GISVEC(A68_VC ,KRABCTR,IRABCTR,7)
static A68_205   LRABCTR = {".dim[0].upb"}; 
static A68_183   MRABCTR = {" - "}; 
static A68_205   NRABCTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,PRABCTR,LRABCTR,11)
A_GISVEC(A68_VC ,QRABCTR,MRABCTR,3)
A_GISVEC(A68_VC ,SRABCTR,NRABCTR,11)
A_GISVEC(A68_VC ,TRABCTR,CRABCTR,3)
static A68_206   ESABCTR = {"if ( "}; 
static A68_45   FSABCTR = {" != "}; 
static A68_33   ISABCTR = {".upb -1"}; 
A_GISVEC(A68_VC ,JSABCTR,ISABCTR,7)
static A68_205   KSABCTR = {".dim[0].upb"}; 
static A68_183   LSABCTR = {" - "}; 
static A68_205   MSABCTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,NSABCTR,KSABCTR,11)
A_GISVEC(A68_VC ,OSABCTR,LSABCTR,3)
A_GISVEC(A68_VC ,PSABCTR,MSABCTR,11)
A_GISVEC(A68_VC ,QSABCTR,ESABCTR,5)
A_GISVEC(A68_VC ,RSABCTR,FSABCTR,4)
static A68_189   USABCTR = {" )"}; 
A_GISVEC(A68_VC ,VSABCTR,USABCTR,2)
static A68_207   BTABCTR = {"{ A_ERROR( \"mismatched bounds in FORALL; row no "}; 
static A68_206   CTABCTR = {"\"); }"}; 
A_GISVEC(A68_VC ,DTABCTR,BTABCTR,48)
A_GISVEC(A68_VC ,FTABCTR,CTABCTR,5)
static A68_183   QTABCTR = {"A_R"}; 
static A68_206   RTABCTR = {"STRIP"}; 
A_GISVEC(A68_VC ,YTABCTR,QTABCTR,3)
A_GISVEC(A68_VC ,AUABCTR,RTABCTR,5)
static A68_183   CUABCTR = {" = "}; 
static A68_206   DUABCTR = {".data"}; 
A_GISVEC(A68_VC ,EUABCTR,CUABCTR,3)
A_GISVEC(A68_VC ,FUABCTR,DUABCTR,5)
static A68_193   OUABCTR = {".data += "}; 
static A68_209   PUABCTR = {".dim[0].stride"}; 
A_GISVEC(A68_VC ,RUABCTR,OUABCTR,9)
A_GISVEC(A68_VC ,SUABCTR,PUABCTR,14)
static A68_189   UUABCTR = {"++"}; 
A_GISVEC(A68_VC ,WUABCTR,UUABCTR,2)
static A68_45   XUABCTR = {" += "}; 
static A68_209   YUABCTR = {".dim[0].stride"}; 
A_GISVEC(A68_VC ,ZUABCTR,XUABCTR,4)
A_GISVEC(A68_VC ,AVABCTR,YUABCTR,14)
static A68_187   LVABCTR = {"for (;"}; 
A_GISVEC(A68_VC ,MVABCTR,LVABCTR,6)
static A68_191   QVABCTR = {"-- >= 0;"}; 
A_GISVEC(A68_VC ,RVABCTR,QVABCTR,8)
static A68_183   LWABCTR = {") )"}; 
A_GISVEC(A68_VC ,MWABCTR,LWABCTR,3)
static A68_45   ZWABCTR = {" = *"}; 
A_GISVEC(A68_VC ,AXABCTR,ZWABCTR,4)
static A68_195   NXABCTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,PXABCTR,NXABCTR,10)
static A68_187   TXABCTR = {"if ( !"}; 
A_GISVEC(A68_VC ,UXABCTR,TXABCTR,6)
static A68_193   YXABCTR = {" ) break;"}; 
A_GISVEC(A68_VC ,ZXABCTR,YXABCTR,9)
A68_75  LYABCTR_od;
typedef struct   /* env of non-global proc */
{
A68_INT  CDABCTR_codestream;
A_PAD_INT(PAD_64)
} HDABCTR_evaluatetoorbypart;
typedef struct   /* env of non-global proc */
{
A68_175 * Loop;
A68_71 ** Frobytlist;
} IEABCTR_evaluatefrompart;
typedef struct   /* env of non-global proc */
{
A68_175 * Loop;
A68_71 ** Frobytlist;
A68_181  FDABCTR_evaluatetoorbypart;
} PEABCTR_setstep;
typedef struct   /* env of non-global proc */
{
A68_INT  CDABCTR_codestream;
A_PAD_INT(PAD_65)
} RLABCTR_voidresult;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
} TMABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
} BNABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  BOABCTR_rowname;
} FOABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  MOABCTR_controlname;
} QOABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  GPABCTR_controlname;
} KPABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  SPABCTR_controlname;
} WPABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  LQABCTR_controlname;
} PQABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
A68_123  ENABCTR_modeofrows;
A68_199  WMABCTR_rows;
} NTABCTR_initialise;
typedef struct   /* env of non-global proc */
{
A68_123  ENABCTR_modeofrows;
A68_197  Controls;
A68_199  WMABCTR_rows;
} JUABCTR_increment;

A_STATIC A68_64 * LCABCTR_assignment(A68_64 * JCABCTR_anonymous, A68_64  KCABCTR_anonymous);

A_STATIC A68_65 * QCABCTR_assignment(A68_65 * OCABCTR_anonymous, A68_65  PCABCTR_anonymous);

A68_VOID  BDABCTR_for(A68_175 * Loop, A68_INT  Frobytcount, A68_71 ** Frobytlist);

A_STATIC A68_VOID  GDABCTR_evaluatetoorbypart(A68_64 * Part, A68_BOOL  Topart, void *NonLocals);

A_STATIC A68_VOID  HEABCTR_evaluatefrompart(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OEABCTR_setstep(void *NonLocals);

A_STATIC A68_VOID  QLABCTR_voidresult(A68_64 * Value, void *NonLocals);

A68_VOID  PMABCTR_forall(A68_197  Controls, A68_71 ** Foralllist);

A_STATIC A68_VOID  SMABCTR_generator(A68_BOOL  QMABCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ANABCTR_generator(A68_BOOL  YMABCTR_anonymous, A68_123  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EOABCTR_generator(A68_BOOL  COABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  POABCTR_generator(A68_BOOL  NOABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JPABCTR_generator(A68_BOOL  HPABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VPABCTR_generator(A68_BOOL  TPABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OQABCTR_generator(A68_BOOL  MQABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MTABCTR_initialise(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IUABCTR_increment(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JXABCTR_while(void);

A68_VOID  LXABCTR_whiledo(A68_64 * Enquiry);

A68_VOID  EYABCTR_whileod(void);

A_STATIC A68_65 * QCABCTR_assignment(A68_65 * OCABCTR_anonymous, A68_65  PCABCTR_anonymous)
{ 
A68_65  RCABCTR;  /* united object - for case conformity */
A68_VC  SCABCTR_anonymous;
A68_VC  TCABCTR;  /* OPERATORS - copy to flex */
A68_179 * UCABCTR;  /* YIELD */
A68_65 * VCABCTR;  /* clause result */
{ 
(*OCABCTR_anonymous) = PCABCTR_anonymous;
RCABCTR = PCABCTR_anonymous ;
switch ( RCABCTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
SCABCTR_anonymous = (RCABCTR.data.mode6);
UCABCTR = &(OCABCTR_anonymous-> data.mode6) ;
(*UCABCTR) = A_VCOPY(SCABCTR_anonymous,TCABCTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
VCABCTR = OCABCTR_anonymous;
} 
return( VCABCTR );
} 
#undef NL

A_STATIC A68_VOID  GDABCTR_evaluatetoorbypart(A68_64 * Part, A68_BOOL  Topart, void *NonLocals)
#define NL(x) (((HDABCTR_evaluatetoorbypart *)NonLocals)->x)
{ 
A68_BOOL  IDABCTR;  /* optbool result */
A68_VC  KDABCTR;  /* clause result */
A68_68  ODABCTR;  /* avoid structure result */
A68_68  PDABCTR_temp;
A68_184  QDABCTR;  /* collateral clause result */
A68_VC  RDABCTR;  /* OPERATORS - istruct -> vector */
A68_33  SDABCTR;  /* OPERATORS - istruct -> vector */
A68_93  TDABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  UDABCTR;  /* YIELD */
A68_93  XDABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  YDABCTR;  /* YIELD */
A68_VC  ZDABCTR;  /* avoid structure result */
A68_93  AEABCTR;  /* OPERATORS - mode -> union mode */
A68_93  BEABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  CEABCTR;  /* YIELD */
A68_93  DEABCTR;  /* OPERATORS - mode -> union mode */
A68_92  EEABCTR;  /* OPERATORS - istruct -> vector */
A68_65  FEABCTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(evaluatetoorbypart);
 /* line 91: */
 /* line 92: */
{ 
A_CALLPROC(NWQACTR_evaluate,(Part),(Part,(NWQACTR_evaluate).nonlocals));
 /* line 93: */
 /* line 94: */
IDABCTR = !LVPACTR_isconstant(Part);
if ( IDABCTR )
{IDABCTR = !IWPACTR_istemp(Part);
}
 /* line 96: */
if ( IDABCTR )
{ 
 /* line 97: */
 /* line 98: */
 /* line 99: */
if ( Topart )
{ 
KDABCTR = LDABCTR;
} 
else
{ 
KDABCTR = NDABCTR;
} 
LKOACTR_declarectemporary( (*(&(Part->Mode))), KDABCTR, &ODABCTR );
PDABCTR_temp = ODABCTR;
 /* line 100: */
 /* line 101: */
SDABCTR = PDABCTR_temp.Name ;
UDABCTR = A_HISVEC(RDABCTR,SDABCTR,7,A68_CHAR ) ;
QDABCTR.data[0] = A_UNITE(TDABCTR,mode2,2,UDABCTR);
 /* line 102: */
YDABCTR = WDABCTR ;
QDABCTR.data[1] = A_UNITE(XDABCTR,mode2,2,YDABCTR);
GYPACTR_getcfragment( Part, &ZDABCTR );
QDABCTR.data[2] = A_UNITE(AEABCTR,mode2,2,ZDABCTR);
CEABCTR = ';' ;
QDABCTR.data[3] = A_UNITE(BEABCTR,mode1,1,CEABCTR);
QDABCTR.data[4] = A_UNITE(DEABCTR,mode4,4,EIAACTR_cnewline);
 /* line 103: */
MDMACTR_writecstream(A_HISVEC(EEABCTR,QDABCTR,5,A68_93 ), NL(CDABCTR_codestream));
 /* line 104: */
 /* line 105: */
 /* line 106: */
QCABCTR_assignment((&(Part->Extra)), A_UNITE(FEABCTR,mode5,5,PDABCTR_temp));
} 
} 
A_PROC_EXIT(evaluatetoorbypart);
return;
} 
#undef NL

A_STATIC A68_VOID  HEABCTR_evaluatefrompart(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IEABCTR_evaluatefrompart *)NonLocals)->x)
{ 
A68_64 * JEABCTR_value;
A68_VC  KEABCTR;  /* clause result */
A68_VC  LEABCTR;  /* avoid structure result */
A68_VC  MEABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(evaluatefrompart);
{ 
 /* line 115: */
 /* line 116: */
if ( (*(&(NL(Loop)->Frompart))) )
{ 
JEABCTR_value = (&((*NL(Frobytlist))->Value));
 /* line 117: */
(*NL(Frobytlist)) = (*(&((*NL(Frobytlist))->Rest)));
 /* line 118: */
A_CALLPROC(NWQACTR_evaluate,(JEABCTR_value),(JEABCTR_value,(NWQACTR_evaluate).nonlocals));
 /* line 119: */
 /* line 120: */
 /* line 122: */
GYPACTR_getcfragment( JEABCTR_value, &LEABCTR );
KEABCTR = LEABCTR;
} 
else
{ 
 /* line 123: */
KEABCTR = A_HVEC(MEABCTR,'1',A68_CHAR );
} 
} 
A_PROC_EXIT(evaluatefrompart);
*ReturnedValue = (KEABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OEABCTR_setstep(void *NonLocals)
#define NL(x) (((PEABCTR_setstep *)NonLocals)->x)
{ 
A68_64 ** QEABCTR;  /* YIELD */
A68_64 ** REABCTR;  /* YIELD */
A_PROC_ENTRY(setstep);
{ 
 /* line 135: */
 /* line 136: */
if ( (*(&(NL(Loop)->Bypart))) )
{ 
QEABCTR = (&(NL(Loop)->Step)) ;
(*QEABCTR) = (&((*NL(Frobytlist))->Value));
 /* line 137: */
(*NL(Frobytlist)) = (*(&((*NL(Frobytlist))->Rest)));
 /* line 138: */
 /* line 139: */
 /* line 140: */
A_CALLPROC(NL(FDABCTR_evaluatetoorbypart),((*(&(NL(Loop)->Step))), A68_FALSE),((*(&(NL(Loop)->Step))), A68_FALSE,(NL(FDABCTR_evaluatetoorbypart)).nonlocals));
} 
else
{ 
 /* line 141: */
 /* line 142: */
REABCTR = (&(NL(Loop)->Step)) ;
(*REABCTR) = XCABCTR_value1;
} 
} 
A_PROC_EXIT(setstep);
return;
} 
#undef NL

A_STATIC A68_VOID  QLABCTR_voidresult(A68_64 * Value, void *NonLocals)
#define NL(x) (((RLABCTR_voidresult *)NonLocals)->x)
{ 
A68_194  SLABCTR;  /* collateral clause result */
A68_VC  TLABCTR;  /* avoid structure result */
A68_93  ULABCTR;  /* OPERATORS - mode -> union mode */
A68_93  VLABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  WLABCTR;  /* YIELD */
A68_93  XLABCTR;  /* OPERATORS - mode -> union mode */
A68_92  YLABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(voidresult);
 /* line 244: */
 /* line 245: */
{ 
A_CALLPROC(NWQACTR_evaluate,(Value),(Value,(NWQACTR_evaluate).nonlocals));
 /* line 246: */
 /* line 247: */
GYPACTR_getcfragment( Value, &TLABCTR );
SLABCTR.data[0] = A_UNITE(ULABCTR,mode2,2,TLABCTR);
WLABCTR = ';' ;
SLABCTR.data[1] = A_UNITE(VLABCTR,mode1,1,WLABCTR);
SLABCTR.data[2] = A_UNITE(XLABCTR,mode4,4,EIAACTR_cnewline);
 /* line 248: */
 /* line 249: */
MDMACTR_writecstream(A_HISVEC(YLABCTR,SLABCTR,3,A68_93 ), NL(CDABCTR_codestream));
} 
A_PROC_EXIT(voidresult);
return;
} 
#undef NL

A_STATIC A68_VOID  SMABCTR_generator(A68_BOOL  QMABCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals)
#define NL(x) (((TMABCTR_generator *)NonLocals)->x)
{ 
A68_199  UMABCTR;  /* clause result */
A68_199  VMABCTR;  /* OPERATORS - dynamic generator */
{ 
VMABCTR.upb = NL(Controls).upb ;
( QMABCTR_anonymous? A_VLOC(A68_VC ,VMABCTR): A_VHEAP(A68_VC ,VMABCTR) );
UMABCTR = VMABCTR;
} 
*ReturnedValue = (UMABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ANABCTR_generator(A68_BOOL  YMABCTR_anonymous, A68_123  *ReturnedValue, void *NonLocals)
#define NL(x) (((BNABCTR_generator *)NonLocals)->x)
{ 
A68_123  CNABCTR;  /* clause result */
A68_123  DNABCTR;  /* OPERATORS - dynamic generator */
{ 
DNABCTR.upb = NL(Controls).upb ;
( YMABCTR_anonymous? A_VLOC(A68_INT ,DNABCTR): A_VHEAP(A68_INT ,DNABCTR) );
CNABCTR = DNABCTR;
} 
*ReturnedValue = (CNABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EOABCTR_generator(A68_BOOL  COABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FOABCTR_generator *)NonLocals)->x)
{ 
A68_VC  GOABCTR;  /* clause result */
A68_VC  HOABCTR;  /* OPERATORS - dynamic generator */
{ 
HOABCTR.upb = NL(BOABCTR_rowname).upb ;
( COABCTR_anonymous? A_VLOC(A68_CHAR ,HOABCTR): A_VHEAP(A68_CHAR ,HOABCTR) );
GOABCTR = HOABCTR;
} 
*ReturnedValue = (GOABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  POABCTR_generator(A68_BOOL  NOABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QOABCTR_generator *)NonLocals)->x)
{ 
A68_VC  ROABCTR;  /* clause result */
A68_VC  SOABCTR;  /* OPERATORS - dynamic generator */
{ 
SOABCTR.upb = NL(MOABCTR_controlname).upb ;
( NOABCTR_anonymous? A_VLOC(A68_CHAR ,SOABCTR): A_VHEAP(A68_CHAR ,SOABCTR) );
ROABCTR = SOABCTR;
} 
*ReturnedValue = (ROABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JPABCTR_generator(A68_BOOL  HPABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KPABCTR_generator *)NonLocals)->x)
{ 
A68_VC  LPABCTR;  /* clause result */
A68_VC  MPABCTR;  /* OPERATORS - dynamic generator */
{ 
MPABCTR.upb = NL(GPABCTR_controlname).upb ;
( HPABCTR_anonymous? A_VLOC(A68_CHAR ,MPABCTR): A_VHEAP(A68_CHAR ,MPABCTR) );
LPABCTR = MPABCTR;
} 
*ReturnedValue = (LPABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VPABCTR_generator(A68_BOOL  TPABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WPABCTR_generator *)NonLocals)->x)
{ 
A68_VC  XPABCTR;  /* clause result */
A68_VC  YPABCTR;  /* OPERATORS - dynamic generator */
{ 
YPABCTR.upb = NL(SPABCTR_controlname).upb ;
( TPABCTR_anonymous? A_VLOC(A68_CHAR ,YPABCTR): A_VHEAP(A68_CHAR ,YPABCTR) );
XPABCTR = YPABCTR;
} 
*ReturnedValue = (XPABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OQABCTR_generator(A68_BOOL  MQABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PQABCTR_generator *)NonLocals)->x)
{ 
A68_VC  QQABCTR;  /* clause result */
A68_VC  RQABCTR;  /* OPERATORS - dynamic generator */
{ 
RQABCTR.upb = NL(LQABCTR_controlname).upb ;
( MQABCTR_anonymous? A_VLOC(A68_CHAR ,RQABCTR): A_VHEAP(A68_CHAR ,RQABCTR) );
QQABCTR = RQABCTR;
} 
*ReturnedValue = (QQABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MTABCTR_initialise(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NTABCTR_initialise *)NonLocals)->x)
{ 
A68_VC  OTABCTR_ctrl;
A68_BOOL  PTABCTR;  /* clause result */
A68_208  STABCTR;  /* collateral clause result */
A68_162  TTABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  UTABCTR;  /* YIELD */
A68_162  VTABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  WTABCTR;  /* clause result */
A68_165  XTABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZTABCTR;  /* avoid structure result */
A68_VC  BUABCTR;  /* avoid structure result */
A_PROC_ENTRY(initialise);
 /* line 442: */
{ 
OTABCTR_ctrl = (*(&((&A_VINDEX(NL(Controls),I))->Control)));
 /* line 443: */
 /* line 444: */
 /* line 445: */
PTABCTR = (ARMACTR_isarray((*(&A_VINDEX(NL(ENABCTR_modeofrows),I))))&(QVMACTR_dimensions((*(&A_VINDEX(NL(ENABCTR_modeofrows),I))))>1));
if ( PTABCTR )
{ 
 /* line 446: */
UTABCTR = (*(&A_VINDEX(NL(WMABCTR_rows),I))) ;
STABCTR.data[0] = A_UNITE(TTABCTR,mode2,2,UTABCTR);
 /* line 447: */
STABCTR.data[1] = A_UNITE(VTABCTR,mode2,2,OTABCTR_ctrl);
 /* line 448: */
ROAAOSF_whole( QVMACTR_dimensions((*(&A_VINDEX(NL(ENABCTR_modeofrows),I)))), 0, &ZTABCTR );
ENQACTR_usemacro( A_VC_PLUS(A_VC_PLUS(YTABCTR,ZTABCTR),AUABCTR), A_HISVEC(XTABCTR,STABCTR,2,A68_162 ), &BUABCTR );
WTABCTR = BUABCTR;
} 
else
{ 
 /* line 449: */
WTABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(OTABCTR_ctrl,EUABCTR),(*(&A_VINDEX(NL(WMABCTR_rows),I)))),FUABCTR);
} 
} 
A_PROC_EXIT(initialise);
*ReturnedValue = (WTABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IUABCTR_increment(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JUABCTR_increment *)NonLocals)->x)
{ 
A68_INT  KUABCTR_origmde;
A68_VC  LUABCTR_ctrl;
A68_BOOL  MUABCTR;  /* optbool result */
A68_BOOL  NUABCTR;  /* clause result */
A68_VC  QUABCTR;  /* clause result */
A68_BOOL  TUABCTR;  /* optbool result */
A68_VC  VUABCTR;  /* clause result */
A_PROC_ENTRY(increment);
 /* line 452: */
{ 
KUABCTR_origmde = (*(&A_VINDEX(NL(ENABCTR_modeofrows),I)));
 /* line 453: */
LUABCTR_ctrl = (*(&((&A_VINDEX(NL(Controls),I))->Control)));
 /* line 454: */
 /* line 455: */
MUABCTR = ARMACTR_isarray(KUABCTR_origmde);
if ( MUABCTR )
{ /* line 456: */
MUABCTR = (QVMACTR_dimensions(KUABCTR_origmde)>1);
}
NUABCTR = MUABCTR;
if ( NUABCTR )
{ 
 /* line 457: */
QUABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(LUABCTR_ctrl,RUABCTR),(*(&A_VINDEX(NL(WMABCTR_rows),I)))),SUABCTR);
} 
else
{ 
TUABCTR = QQMACTR_isvector(KUABCTR_origmde);
if ( ! TUABCTR )
{ /* line 458: */
TUABCTR = XRMACTR_isistruct(KUABCTR_origmde);
}
 /* line 459: */
if ( TUABCTR )
{ 
VUABCTR = WUABCTR;
} 
else
{ 
 /* line 460: */
 /* line 461: */
VUABCTR = A_VC_PLUS(A_VC_PLUS(ZUABCTR,(*(&A_VINDEX(NL(WMABCTR_rows),I)))),AVABCTR);
} 
QUABCTR = A_VC_PLUS(LUABCTR_ctrl,VUABCTR);
} 
} 
A_PROC_EXIT(increment);
*ReturnedValue = (QUABCTR);
return;
} 
#undef NL

A_STATIC A68_64 * LCABCTR_assignment(A68_64 * JCABCTR_anonymous, A68_64  KCABCTR_anonymous)
{ 
A68_INT * MCABCTR;  /* YIELD */
A68_BITS * NCABCTR;  /* YIELD */
A68_64 * WCABCTR;  /* clause result */
{ 
MCABCTR = (&(JCABCTR_anonymous->Mode)) ;
(*MCABCTR) = KCABCTR_anonymous.Mode;
NCABCTR = (&(JCABCTR_anonymous->Info)) ;
(*NCABCTR) = KCABCTR_anonymous.Info;
QCABCTR_assignment((&(JCABCTR_anonymous->Extra)), KCABCTR_anonymous.Extra);
WCABCTR = JCABCTR_anonymous;
} 
return( WCABCTR );
} 
#undef NL
 /* line 71: */
 /* line 73: */

A68_VOID  BDABCTR_for(A68_175 * Loop, A68_INT  Frobytcount, A68_71 ** Frobytlist)
{ 
A68_INT  CDABCTR_codestream;
A68_181  FDABCTR_evaluatetoorbypart;   /* proc value of non-global proc */
A68_185  GEABCTR_evaluatefrompart;   /* proc value of non-global proc */
A68_75  NEABCTR_setstep;   /* proc value of non-global proc */
A68_64 * SEABCTR_value;
A68_VC  TEABCTR;  /* avoid structure result */
A68_VC  UEABCTR_end;
A68_VC  VEABCTR;  /* avoid structure result */
A68_VC  WEABCTR_from;
A68_VC  XEABCTR;  /* clause result */
A68_VC  YEABCTR;  /* avoid structure result */
A68_68  BFABCTR;  /* avoid structure result */
A68_VC  CFABCTR;  /* OPERATORS - istruct -> vector */
A68_33  DFABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  EFABCTR_loopcounter;
A68_188  FFABCTR;  /* collateral clause result */
A68_93  IFABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  JFABCTR;  /* YIELD */
A68_93  KFABCTR;  /* OPERATORS - mode -> union mode */
A68_93  NFABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  OFABCTR;  /* YIELD */
A68_93  PFABCTR;  /* OPERATORS - mode -> union mode */
A68_93  QFABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  RFABCTR;  /* YIELD */
A68_93  SFABCTR;  /* OPERATORS - mode -> union mode */
A68_92  TFABCTR;  /* OPERATORS - istruct -> vector */
A68_LINT  UFABCTR_constantstep;
A68_190  VFABCTR;  /* collateral clause result */
A68_93  WFABCTR;  /* OPERATORS - mode -> union mode */
A68_93  ZFABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  AGABCTR;  /* YIELD */
A68_93  BGABCTR;  /* OPERATORS - mode -> union mode */
A68_93  CGABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  DGABCTR;  /* YIELD */
A68_92  EGABCTR;  /* clause result */
A68_92  FGABCTR;  /* OPERATORS - istruct -> vector */
A68_190  GGABCTR;  /* collateral clause result */
A68_93  HGABCTR;  /* OPERATORS - mode -> union mode */
A68_93  KGABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  LGABCTR;  /* YIELD */
A68_93  MGABCTR;  /* OPERATORS - mode -> union mode */
A68_93  NGABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  OGABCTR;  /* YIELD */
A68_92  PGABCTR;  /* OPERATORS - istruct -> vector */
A68_93  SGABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  TGABCTR;  /* YIELD */
A68_92  UGABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  VGABCTR;  /* OPERATORS - mode -> union mode */
A68_92  WGABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_184  XGABCTR;  /* collateral clause result */
A68_93  YGABCTR;  /* OPERATORS - mode -> union mode */
A68_93  BHABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  CHABCTR;  /* YIELD */
A68_VC  DHABCTR;  /* avoid structure result */
A68_93  EHABCTR;  /* OPERATORS - mode -> union mode */
A68_93  HHABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  IHABCTR;  /* YIELD */
A68_93  JHABCTR;  /* OPERATORS - mode -> union mode */
A68_92  KHABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  LHABCTR;  /* avoid structure result */
A68_VC  MHABCTR_step;
A68_192  NHABCTR;  /* collateral clause result */
A68_93  QHABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  RHABCTR;  /* YIELD */
A68_93  SHABCTR;  /* OPERATORS - mode -> union mode */
A68_93  VHABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  WHABCTR;  /* YIELD */
A68_93  XHABCTR;  /* OPERATORS - mode -> union mode */
A68_93  AIABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  BIABCTR;  /* YIELD */
A68_93  CIABCTR;  /* OPERATORS - mode -> union mode */
A68_93  FIABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  GIABCTR;  /* YIELD */
A68_93  HIABCTR;  /* OPERATORS - mode -> union mode */
A68_92  IIABCTR;  /* OPERATORS - istruct -> vector */
A68_192  JIABCTR;  /* collateral clause result */
A68_93  MIABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  NIABCTR;  /* YIELD */
A68_93  OIABCTR;  /* OPERATORS - mode -> union mode */
A68_93  RIABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  SIABCTR;  /* YIELD */
A68_93  TIABCTR;  /* OPERATORS - mode -> union mode */
A68_93  WIABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  XIABCTR;  /* YIELD */
A68_93  YIABCTR;  /* OPERATORS - mode -> union mode */
A68_93  BJABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  CJABCTR;  /* YIELD */
A68_93  DJABCTR;  /* OPERATORS - mode -> union mode */
A68_92  EJABCTR;  /* OPERATORS - istruct -> vector */
A68_190  FJABCTR;  /* collateral clause result */
A68_93  IJABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  JJABCTR;  /* YIELD */
A68_93  KJABCTR;  /* OPERATORS - mode -> union mode */
A68_93  NJABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  OJABCTR;  /* YIELD */
A68_93  PJABCTR;  /* OPERATORS - mode -> union mode */
A68_92  QJABCTR;  /* OPERATORS - istruct -> vector */
A68_184  RJABCTR;  /* collateral clause result */
A68_93  SJABCTR;  /* OPERATORS - mode -> union mode */
A68_93  VJABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  WJABCTR;  /* YIELD */
A68_93  XJABCTR;  /* OPERATORS - mode -> union mode */
A68_93  AKABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  BKABCTR;  /* YIELD */
A68_93  CKABCTR;  /* OPERATORS - mode -> union mode */
A68_92  DKABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  EKABCTR;  /* avoid structure result */
A68_VC  FKABCTR_from;
A68_VC  GKABCTR;  /* avoid structure result */
A68_VC  HKABCTR_loopcounter;
A68_188  IKABCTR;  /* collateral clause result */
A68_93  LKABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  MKABCTR;  /* YIELD */
A68_93  NKABCTR;  /* OPERATORS - mode -> union mode */
A68_93  QKABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  RKABCTR;  /* YIELD */
A68_93  SKABCTR;  /* OPERATORS - mode -> union mode */
A68_93  VKABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  WKABCTR;  /* YIELD */
A68_93  XKABCTR;  /* OPERATORS - mode -> union mode */
A68_92  YKABCTR;  /* OPERATORS - istruct -> vector */
A68_184  ZKABCTR;  /* collateral clause result */
A68_93  ALABCTR;  /* OPERATORS - mode -> union mode */
A68_93  DLABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  ELABCTR;  /* YIELD */
A68_VC  FLABCTR;  /* avoid structure result */
A68_93  GLABCTR;  /* OPERATORS - mode -> union mode */
A68_93  JLABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  KLABCTR;  /* YIELD */
A68_93  LLABCTR;  /* OPERATORS - mode -> union mode */
A68_92  MLABCTR;  /* OPERATORS - istruct -> vector */
A68_74  PLABCTR_voidresult;   /* proc value of non-global proc */
A68_196  ZLABCTR;  /* collateral clause result */
A68_93  CMABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  DMABCTR;  /* YIELD */
A68_93  EMABCTR;  /* OPERATORS - mode -> union mode */
A68_92  FMABCTR;  /* OPERATORS - istruct -> vector */
A68_196  GMABCTR;  /* collateral clause result */
A68_93  JMABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  KMABCTR;  /* YIELD */
A68_93  LMABCTR;  /* OPERATORS - mode -> union mode */
A68_92  MMABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(for);
 /* line 81: */
 /* line 82: */
{ 
CDABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 84: */
A_CLOSURE( FDABCTR_evaluatetoorbypart, GDABCTR_evaluatetoorbypart, HDABCTR_evaluatetoorbypart );
(( HDABCTR_evaluatetoorbypart * ) ( FDABCTR_evaluatetoorbypart.nonlocals )) -> CDABCTR_codestream = CDABCTR_codestream;
 /* line 108: */
 /* line 113: */
 /* line 114: */
A_CLOSURE( GEABCTR_evaluatefrompart, HEABCTR_evaluatefrompart, IEABCTR_evaluatefrompart );
(( IEABCTR_evaluatefrompart * ) ( GEABCTR_evaluatefrompart.nonlocals )) -> Loop = Loop;
(( IEABCTR_evaluatefrompart * ) ( GEABCTR_evaluatefrompart.nonlocals )) -> Frobytlist = Frobytlist;
 /* line 125: */
 /* line 133: */
 /* line 134: */
A_CLOSURE( NEABCTR_setstep, OEABCTR_setstep, PEABCTR_setstep );
(( PEABCTR_setstep * ) ( NEABCTR_setstep.nonlocals )) -> Loop = Loop;
(( PEABCTR_setstep * ) ( NEABCTR_setstep.nonlocals )) -> Frobytlist = Frobytlist;
(( PEABCTR_setstep * ) ( NEABCTR_setstep.nonlocals )) -> FDABCTR_evaluatetoorbypart = FDABCTR_evaluatetoorbypart;
 /* line 146: */
 /* line 147: */
 /* line 159: */
if ( (*(&(Loop->Topart))) )
{ 
SEABCTR_value = (&((*Frobytlist)->Value));
 /* line 160: */
(*Frobytlist) = (*(&((*Frobytlist)->Rest)));
 /* line 161: */
A_CALLPROC(FDABCTR_evaluatetoorbypart,(SEABCTR_value, A68_TRUE),(SEABCTR_value, A68_TRUE,(FDABCTR_evaluatetoorbypart).nonlocals));
 /* line 162: */
GYPACTR_getcfragment( SEABCTR_value, &TEABCTR );
UEABCTR_end = TEABCTR;
 /* line 164: */
A_CALLPROC(NEABCTR_setstep,(),((NEABCTR_setstep).nonlocals));
 /* line 166: */
A_CALLPROC(GEABCTR_evaluatefrompart,( &VEABCTR),( &VEABCTR,(GEABCTR_evaluatefrompart).nonlocals));
WEABCTR_from = VEABCTR;
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 172: */
if ( (*(&(Loop->Forpart))) )
{ 
 /* line 174: */
GYPACTR_getcfragment( (*(&(Loop->Control))), &YEABCTR );
XEABCTR = YEABCTR;
} 
else
{ 
 /* line 175: */
 /* line 176: */
LKOACTR_declarectemporary( EFAACTR_intmode, AFABCTR, &BFABCTR );
DFABCTR = BFABCTR.Name ;
XEABCTR = A_HISVEC(CFABCTR,DFABCTR,7,A68_CHAR );
} 
EFABCTR_loopcounter = XEABCTR;
 /* line 178: */
 /* line 179: */
JFABCTR = HFABCTR ;
FFABCTR.data[0] = A_UNITE(IFABCTR,mode2,2,JFABCTR);
FFABCTR.data[1] = A_UNITE(KFABCTR,mode2,2,EFABCTR_loopcounter);
OFABCTR = MFABCTR ;
FFABCTR.data[2] = A_UNITE(NFABCTR,mode2,2,OFABCTR);
FFABCTR.data[3] = A_UNITE(PFABCTR,mode2,2,WEABCTR_from);
RFABCTR = ';' ;
FFABCTR.data[4] = A_UNITE(QFABCTR,mode1,1,RFABCTR);
FFABCTR.data[5] = A_UNITE(SFABCTR,mode4,4,EIAACTR_cnewline);
 /* line 180: */
MDMACTR_writecstream(A_HISVEC(TFABCTR,FFABCTR,6,A68_93 ), CDABCTR_codestream);
 /* line 181: */
 /* line 182: */
 /* line 184: */
if ( LVPACTR_isconstant((*(&(Loop->Step)))) )
{ 
UFABCTR_constantstep = (A68_LINT )ZWPACTR_getconstant((*(&(Loop->Step))));
 /* line 185: */
 /* line 186: */
 /* line 187: */
if ( (UFABCTR_constantstep>0) )
{ 
VFABCTR.data[0] = A_UNITE(WFABCTR,mode2,2,EFABCTR_loopcounter);
AGABCTR = YFABCTR ;
VFABCTR.data[1] = A_UNITE(ZFABCTR,mode2,2,AGABCTR);
VFABCTR.data[2] = A_UNITE(BGABCTR,mode2,2,UEABCTR_end);
 /* line 188: */
DGABCTR = ';' ;
VFABCTR.data[3] = A_UNITE(CGABCTR,mode1,1,DGABCTR);
EGABCTR = A_HISVEC(FGABCTR,VFABCTR,4,A68_93 );
} 
else
{ 
 /* line 189: */
if ( (UFABCTR_constantstep<0) )
{ 
GGABCTR.data[0] = A_UNITE(HGABCTR,mode2,2,EFABCTR_loopcounter);
LGABCTR = JGABCTR ;
GGABCTR.data[1] = A_UNITE(KGABCTR,mode2,2,LGABCTR);
GGABCTR.data[2] = A_UNITE(MGABCTR,mode2,2,UEABCTR_end);
 /* line 190: */
 /* line 191: */
OGABCTR = ';' ;
GGABCTR.data[3] = A_UNITE(NGABCTR,mode1,1,OGABCTR);
EGABCTR = A_HISVEC(PGABCTR,GGABCTR,4,A68_93 );
} 
else
{ 
TGABCTR = RGABCTR ;
EGABCTR = A_HVEC(UGABCTR,A_UNITE(SGABCTR,mode2,2,TGABCTR),A68_93 );
} 
} 
 /* line 192: */
MDMACTR_writecstream(EGABCTR, CDABCTR_codestream);
 /* line 193: */
MDMACTR_writecstream(A_HVEC(WGABCTR,A_UNITE(VGABCTR,mode4,4,EIAACTR_cnewline),A68_93 ), CDABCTR_codestream);
 /* line 194: */
 /* line 195: */
XGABCTR.data[0] = A_UNITE(YGABCTR,mode2,2,EFABCTR_loopcounter);
CHABCTR = AHABCTR ;
XGABCTR.data[1] = A_UNITE(BHABCTR,mode2,2,CHABCTR);
GYPACTR_getcfragment( (*(&(Loop->Step))), &DHABCTR );
XGABCTR.data[2] = A_UNITE(EHABCTR,mode2,2,DHABCTR);
 /* line 196: */
IHABCTR = GHABCTR ;
XGABCTR.data[3] = A_UNITE(HHABCTR,mode2,2,IHABCTR);
XGABCTR.data[4] = A_UNITE(JHABCTR,mode4,4,EIAACTR_cnewline);
 /* line 197: */
 /* line 198: */
MDMACTR_writecstream(A_HISVEC(KHABCTR,XGABCTR,5,A68_93 ), CDABCTR_codestream);
} 
else
{ 
GYPACTR_getcfragment( (*(&(Loop->Step))), &LHABCTR );
MHABCTR_step = LHABCTR;
 /* line 199: */
 /* line 200: */
RHABCTR = PHABCTR ;
NHABCTR.data[0] = A_UNITE(QHABCTR,mode2,2,RHABCTR);
NHABCTR.data[1] = A_UNITE(SHABCTR,mode2,2,MHABCTR_step);
 /* line 201: */
WHABCTR = UHABCTR ;
NHABCTR.data[2] = A_UNITE(VHABCTR,mode2,2,WHABCTR);
NHABCTR.data[3] = A_UNITE(XHABCTR,mode2,2,EFABCTR_loopcounter);
BIABCTR = ZHABCTR ;
NHABCTR.data[4] = A_UNITE(AIABCTR,mode2,2,BIABCTR);
NHABCTR.data[5] = A_UNITE(CIABCTR,mode2,2,UEABCTR_end);
 /* line 202: */
GIABCTR = EIABCTR ;
NHABCTR.data[6] = A_UNITE(FIABCTR,mode2,2,GIABCTR);
NHABCTR.data[7] = A_UNITE(HIABCTR,mode4,4,EIAACTR_cnewline);
 /* line 203: */
MDMACTR_writecstream(A_HISVEC(IIABCTR,NHABCTR,8,A68_93 ), CDABCTR_codestream);
 /* line 204: */
 /* line 205: */
NIABCTR = LIABCTR ;
JIABCTR.data[0] = A_UNITE(MIABCTR,mode2,2,NIABCTR);
JIABCTR.data[1] = A_UNITE(OIABCTR,mode2,2,MHABCTR_step);
 /* line 206: */
SIABCTR = QIABCTR ;
JIABCTR.data[2] = A_UNITE(RIABCTR,mode2,2,SIABCTR);
JIABCTR.data[3] = A_UNITE(TIABCTR,mode2,2,EFABCTR_loopcounter);
XIABCTR = VIABCTR ;
JIABCTR.data[4] = A_UNITE(WIABCTR,mode2,2,XIABCTR);
JIABCTR.data[5] = A_UNITE(YIABCTR,mode2,2,UEABCTR_end);
 /* line 207: */
CJABCTR = AJABCTR ;
JIABCTR.data[6] = A_UNITE(BJABCTR,mode2,2,CJABCTR);
JIABCTR.data[7] = A_UNITE(DJABCTR,mode4,4,EIAACTR_cnewline);
 /* line 208: */
MDMACTR_writecstream(A_HISVEC(EJABCTR,JIABCTR,8,A68_93 ), CDABCTR_codestream);
 /* line 209: */
 /* line 210: */
JJABCTR = HJABCTR ;
FJABCTR.data[0] = A_UNITE(IJABCTR,mode2,2,JJABCTR);
FJABCTR.data[1] = A_UNITE(KJABCTR,mode2,2,MHABCTR_step);
OJABCTR = MJABCTR ;
FJABCTR.data[2] = A_UNITE(NJABCTR,mode2,2,OJABCTR);
FJABCTR.data[3] = A_UNITE(PJABCTR,mode4,4,EIAACTR_cnewline);
 /* line 211: */
MDMACTR_writecstream(A_HISVEC(QJABCTR,FJABCTR,4,A68_93 ), CDABCTR_codestream);
 /* line 212: */
 /* line 213: */
RJABCTR.data[0] = A_UNITE(SJABCTR,mode2,2,EFABCTR_loopcounter);
WJABCTR = UJABCTR ;
RJABCTR.data[1] = A_UNITE(VJABCTR,mode2,2,WJABCTR);
RJABCTR.data[2] = A_UNITE(XJABCTR,mode2,2,MHABCTR_step);
BKABCTR = ZJABCTR ;
RJABCTR.data[3] = A_UNITE(AKABCTR,mode2,2,BKABCTR);
RJABCTR.data[4] = A_UNITE(CKABCTR,mode4,4,EIAACTR_cnewline);
 /* line 214: */
 /* line 215: */
 /* line 216: */
 /* line 220: */
MDMACTR_writecstream(A_HISVEC(DKABCTR,RJABCTR,5,A68_93 ), CDABCTR_codestream);
} 
} 
else
{ 
 /* line 221: */
 /* line 227: */
if ( (*(&(Loop->Forpart))) )
{ 
A_CALLPROC(NEABCTR_setstep,(),((NEABCTR_setstep).nonlocals));
 /* line 228: */
A_CALLPROC(GEABCTR_evaluatefrompart,( &EKABCTR),( &EKABCTR,(GEABCTR_evaluatefrompart).nonlocals));
FKABCTR_from = EKABCTR;
 /* line 229: */
GYPACTR_getcfragment( (*(&(Loop->Control))), &GKABCTR );
HKABCTR_loopcounter = GKABCTR;
 /* line 230: */
 /* line 231: */
MKABCTR = KKABCTR ;
IKABCTR.data[0] = A_UNITE(LKABCTR,mode2,2,MKABCTR);
IKABCTR.data[1] = A_UNITE(NKABCTR,mode2,2,HKABCTR_loopcounter);
RKABCTR = PKABCTR ;
IKABCTR.data[2] = A_UNITE(QKABCTR,mode2,2,RKABCTR);
IKABCTR.data[3] = A_UNITE(SKABCTR,mode2,2,FKABCTR_from);
WKABCTR = UKABCTR ;
IKABCTR.data[4] = A_UNITE(VKABCTR,mode2,2,WKABCTR);
IKABCTR.data[5] = A_UNITE(XKABCTR,mode4,4,EIAACTR_cnewline);
 /* line 232: */
MDMACTR_writecstream(A_HISVEC(YKABCTR,IKABCTR,6,A68_93 ), CDABCTR_codestream);
 /* line 233: */
 /* line 234: */
ZKABCTR.data[0] = A_UNITE(ALABCTR,mode2,2,HKABCTR_loopcounter);
 /* line 235: */
ELABCTR = CLABCTR ;
ZKABCTR.data[1] = A_UNITE(DLABCTR,mode2,2,ELABCTR);
GYPACTR_getcfragment( (*(&(Loop->Step))), &FLABCTR );
ZKABCTR.data[2] = A_UNITE(GLABCTR,mode2,2,FLABCTR);
KLABCTR = ILABCTR ;
ZKABCTR.data[3] = A_UNITE(JLABCTR,mode2,2,KLABCTR);
ZKABCTR.data[4] = A_UNITE(LLABCTR,mode4,4,EIAACTR_cnewline);
 /* line 236: */
 /* line 237: */
 /* line 238: */
MDMACTR_writecstream(A_HISVEC(MLABCTR,ZKABCTR,5,A68_93 ), CDABCTR_codestream);
} 
else
{ 
A_CLOSURE( PLABCTR_voidresult, QLABCTR_voidresult, RLABCTR_voidresult );
(( RLABCTR_voidresult * ) ( PLABCTR_voidresult.nonlocals )) -> CDABCTR_codestream = CDABCTR_codestream;
 /* line 257: */
 /* line 258: */
 /* line 259: */
if ( (Frobytcount>0) )
{ 
A_CALLPROC(PLABCTR_voidresult,((&((*Frobytlist)->Value))),((&((*Frobytlist)->Value)),(PLABCTR_voidresult).nonlocals));
 /* line 260: */
 /* line 261: */
 /* line 262: */
if ( (Frobytcount>1) )
{ 
 /* line 263: */
 /* line 264: */
A_CALLPROC(PLABCTR_voidresult,((&((*(&((*Frobytlist)->Rest)))->Value))),((&((*(&((*Frobytlist)->Rest)))->Value)),(PLABCTR_voidresult).nonlocals));
} 
} 
 /* line 266: */
DMABCTR = BMABCTR ;
ZLABCTR.data[0] = A_UNITE(CMABCTR,mode2,2,DMABCTR);
ZLABCTR.data[1] = A_UNITE(EMABCTR,mode4,4,EIAACTR_cnewline);
 /* line 267: */
 /* line 268: */
MDMACTR_writecstream(A_HISVEC(FMABCTR,ZLABCTR,2,A68_93 ), CDABCTR_codestream);
} 
} 
 /* line 270: */
KMABCTR = IMABCTR ;
GMABCTR.data[0] = A_UNITE(JMABCTR,mode2,2,KMABCTR);
GMABCTR.data[1] = A_UNITE(LMABCTR,mode4,4,EIAACTR_cnewline);
 /* line 271: */
MDMACTR_writecstream(A_HISVEC(MMABCTR,GMABCTR,2,A68_93 ), CDABCTR_codestream);
} 
A_PROC_EXIT(for);
return;
} 
#undef NL
 /* line 276: */

A68_VOID  PMABCTR_forall(A68_197  Controls, A68_71 ** Foralllist)
{ 
A68_200  RMABCTR_generator;   /* proc value of non-global proc */
A68_199  XMABCTR;  /* avoid structure result */
A68_199  WMABCTR_rows;
A68_201  ZMABCTR_generator;   /* proc value of non-global proc */
A68_123  FNABCTR;  /* avoid structure result */
A68_123  ENABCTR_modeofrows;
A68_INT  GNABCTR_codestream;
A68_INT * HNABCTR_modeofrow;
A68_176 * INABCTR_control;
A68_VC * JNABCTR_row;
A68_INT  KNABCTR;  /* forall loop counter */
A68_64 * LNABCTR_rowvalue;
A68_INT  MNABCTR_elemmode;
A68_BOOL  NNABCTR;  /* optbool result */
A68_VC  ONABCTR;  /* clause result */
A68_VC  PNABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QNABCTR;  /* avoid structure result */
A68_VC  RNABCTR;  /* avoid structure result */
A68_VC  SNABCTR;  /* avoid structure result */
A68_64 * VNABCTR_temp;
A68_BOOL  WNABCTR;  /* optbool result */
A68_VC  XNABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YNABCTR;  /* avoid structure result */
A68_VC  ZNABCTR;  /* avoid structure result */
A68_VC  AOABCTR;  /* avoid structure result */
A68_VC  BOABCTR_rowname;
A68_31  DOABCTR_generator;   /* proc value of non-global proc */
A68_VC  IOABCTR;  /* avoid structure result */
A68_BOOL  JOABCTR_originalhasrefs;
A68_BOOL * KOABCTR;  /* YIELD */
A68_VC  LOABCTR;  /* avoid structure result */
A68_VC  MOABCTR_controlname;
A68_31  OOABCTR_generator;   /* proc value of non-global proc */
A68_VC  TOABCTR;  /* clause result */
A68_VC  UOABCTR;  /* avoid structure result */
A68_VC * VOABCTR;  /* YIELD */
A68_INT  WOABCTR_forallmode;
A68_BOOL  XOABCTR;  /* optbool result */
A68_BOOL  YOABCTR;  /* optbool result */
A68_INT  ZOABCTR_controlmode;
A68_BOOL * APABCTR;  /* YIELD */
A68_68  DPABCTR;  /* avoid structure result */
A68_VC  EPABCTR;  /* OPERATORS - istruct -> vector */
A68_33  FPABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  GPABCTR_controlname;
A68_31  IPABCTR_generator;   /* proc value of non-global proc */
A68_VC  NPABCTR;  /* clause result */
A68_VC  OPABCTR;  /* avoid structure result */
A68_VC * PPABCTR;  /* YIELD */
A68_BOOL * QPABCTR;  /* YIELD */
A68_VC  RPABCTR;  /* avoid structure result */
A68_VC  SPABCTR_controlname;
A68_31  UPABCTR_generator;   /* proc value of non-global proc */
A68_VC  ZPABCTR;  /* clause result */
A68_VC  AQABCTR;  /* avoid structure result */
A68_VC * BQABCTR;  /* YIELD */
A68_BOOL  CQABCTR;  /* optbool result */
A68_INT  DQABCTR;  /* clause result */
A68_INT  EQABCTR_controlmode;
A68_BOOL * FQABCTR;  /* YIELD */
A68_68  IQABCTR;  /* avoid structure result */
A68_VC  JQABCTR;  /* OPERATORS - istruct -> vector */
A68_33  KQABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  LQABCTR_controlname;
A68_31  NQABCTR_generator;   /* proc value of non-global proc */
A68_VC  SQABCTR;  /* clause result */
A68_VC  TQABCTR;  /* avoid structure result */
A68_VC * UQABCTR;  /* YIELD */
A68_68  XQABCTR;  /* avoid structure result */
A68_VC  YQABCTR;  /* OPERATORS - istruct -> vector */
A68_33  ZQABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  ARABCTR_loopcounter;
A68_194  BRABCTR;  /* collateral clause result */
A68_INT  DRABCTR;  /* YIELD */
A68_VC  ERABCTR;  /* clause result */
A68_INT  FRABCTR;  /* YIELD */
A68_VC  GRABCTR;  /* avoid structure result */
A68_INT  HRABCTR;  /* YIELD */
A68_INT  JRABCTR;  /* YIELD */
A68_INT  ORABCTR;  /* YIELD */
A68_INT  RRABCTR;  /* YIELD */
A68_93  URABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  VRABCTR;  /* YIELD */
A68_93  WRABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  XRABCTR;  /* YIELD */
A68_93  YRABCTR;  /* OPERATORS - mode -> union mode */
A68_92  ZRABCTR;  /* OPERATORS - istruct -> vector */
A68_INT  ASABCTR_i;
A68_INT  BSABCTR;  /* to part of loop */
A68_VC  CSABCTR_row;
A68_194  DSABCTR;  /* collateral clause result */
A68_VC  GSABCTR;  /* clause result */
A68_VC  HSABCTR;  /* avoid structure result */
A68_93  SSABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  TSABCTR;  /* YIELD */
A68_93  WSABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  XSABCTR;  /* YIELD */
A68_93  YSABCTR;  /* OPERATORS - mode -> union mode */
A68_92  ZSABCTR;  /* OPERATORS - istruct -> vector */
A68_196  ATABCTR;  /* collateral clause result */
A68_VC  ETABCTR;  /* avoid structure result */
A68_93  GTABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  HTABCTR;  /* YIELD */
A68_93  ITABCTR;  /* OPERATORS - mode -> union mode */
A68_92  JTABCTR;  /* OPERATORS - istruct -> vector */
A68_53  LTABCTR_initialise;   /* proc value of non-global proc */
A68_53  HUABCTR_increment;   /* proc value of non-global proc */
A68_INT  BVABCTR_i;
A68_INT  CVABCTR;  /* to part of loop */
A68_194  DVABCTR;  /* collateral clause result */
A68_VC  EVABCTR;  /* avoid structure result */
A68_93  FVABCTR;  /* OPERATORS - mode -> union mode */
A68_93  GVABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  HVABCTR;  /* YIELD */
A68_93  IVABCTR;  /* OPERATORS - mode -> union mode */
A68_92  JVABCTR;  /* OPERATORS - istruct -> vector */
A68_210  KVABCTR;  /* collateral clause result */
A68_93  NVABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  OVABCTR;  /* YIELD */
A68_93  PVABCTR;  /* OPERATORS - mode -> union mode */
A68_93  SVABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  TVABCTR;  /* YIELD */
A68_93  UVABCTR;  /* OPERATORS - mode -> union mode */
A68_93  VVABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  WVABCTR;  /* YIELD */
A68_VC  XVABCTR;  /* avoid structure result */
A68_93  YVABCTR;  /* OPERATORS - mode -> union mode */
A68_93  ZVABCTR;  /* OPERATORS - mode -> union mode */
A68_92  AWABCTR;  /* OPERATORS - istruct -> vector */
A68_INT  BWABCTR_i;
A68_INT  CWABCTR;  /* to part of loop */
A68_194  DWABCTR;  /* collateral clause result */
A68_93  EWABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  FWABCTR;  /* YIELD */
A68_VC  GWABCTR;  /* avoid structure result */
A68_93  HWABCTR;  /* OPERATORS - mode -> union mode */
A68_93  IWABCTR;  /* OPERATORS - mode -> union mode */
A68_92  JWABCTR;  /* OPERATORS - istruct -> vector */
A68_190  KWABCTR;  /* collateral clause result */
A68_93  NWABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  OWABCTR;  /* YIELD */
A68_93  PWABCTR;  /* OPERATORS - mode -> union mode */
A68_93  QWABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  RWABCTR;  /* YIELD */
A68_93  SWABCTR;  /* OPERATORS - mode -> union mode */
A68_92  TWABCTR;  /* OPERATORS - istruct -> vector */
A68_176 * UWABCTR_control;
A68_INT  VWABCTR;  /* forall loop counter */
A68_184  WWABCTR;  /* collateral clause result */
A68_VC  XWABCTR;  /* avoid structure result */
A68_93  YWABCTR;  /* OPERATORS - mode -> union mode */
A68_93  BXABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  CXABCTR;  /* YIELD */
A68_93  DXABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  EXABCTR;  /* YIELD */
A68_93  FXABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  GXABCTR;  /* YIELD */
A68_93  HXABCTR;  /* OPERATORS - mode -> union mode */
A68_92  IXABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(forall);
 /* line 284: */
 /* line 285: */
{ 
A_CLOSURE( RMABCTR_generator, SMABCTR_generator, TMABCTR_generator );
(( TMABCTR_generator * ) ( RMABCTR_generator.nonlocals )) -> Controls = Controls;
A_CALLPROC(RMABCTR_generator,(A68_TRUE, &XMABCTR),(A68_TRUE, &XMABCTR,(RMABCTR_generator).nonlocals));
WMABCTR_rows = XMABCTR;
 /* line 286: */
A_CLOSURE( ZMABCTR_generator, ANABCTR_generator, BNABCTR_generator );
(( BNABCTR_generator * ) ( ZMABCTR_generator.nonlocals )) -> Controls = Controls;
A_CALLPROC(ZMABCTR_generator,(A68_TRUE, &FNABCTR),(A68_TRUE, &FNABCTR,(ZMABCTR_generator).nonlocals));
ENABCTR_modeofrows = FNABCTR;
 /* line 287: */
GNABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 291: */
 /* line 293: */
KNABCTR = ENABCTR_modeofrows.upb -1;
if ( KNABCTR != Controls.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( KNABCTR != WMABCTR_rows.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
HNABCTR_modeofrow = ENABCTR_modeofrows.data;
INABCTR_control = Controls.data;
JNABCTR_row = WMABCTR_rows.data;
for (;KNABCTR-- >= 0;
(HNABCTR_modeofrow++
,INABCTR_control++
,JNABCTR_row++
) )
{
 /* line 294: */
LNABCTR_rowvalue = (&((*Foralllist)->Value));
 /* line 295: */
(*Foralllist) = (*(&((*Foralllist)->Rest)));
 /* line 296: */
A_CALLPROC(NWQACTR_evaluate,(LNABCTR_rowvalue),(LNABCTR_rowvalue,(NWQACTR_evaluate).nonlocals));
 /* line 297: */
(*HNABCTR_modeofrow) = (*(&(LNABCTR_rowvalue->Mode)));
 /* line 298: */
MNABCTR_elemmode = A_CALLPROC(UVMACTR_elementmode,((*HNABCTR_modeofrow)),((*HNABCTR_modeofrow),(UVMACTR_elementmode).nonlocals));
 /* line 305: */
 /* line 306: */
 /* line 307: */
 /* line 308: */
if ( EWPACTR_isident(LNABCTR_rowvalue) )
{ 
 /* line 309: */
NNABCTR = RSMACTR_hasrefs((*HNABCTR_modeofrow));
if ( NNABCTR )
{ /* line 310: */
NNABCTR = KRMACTR_isflexarray((*HNABCTR_modeofrow));
}
if ( NNABCTR )
{ 
 /* line 311: */
 /* line 312: */
GYPACTR_getcfragment( LNABCTR_rowvalue, &QNABCTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(PNABCTR,'*',A68_CHAR ),QNABCTR), &RNABCTR );
ONABCTR = RNABCTR;
} 
else
{ 
 /* line 313: */
 /* line 314: */
GYPACTR_getcfragment( LNABCTR_rowvalue, &SNABCTR );
ONABCTR = SNABCTR;
} 
} 
else
{ 
VNABCTR_temp = VOQACTR_yield(UNABCTR, LNABCTR_rowvalue);
 /* line 316: */
 /* line 317: */
WNABCTR = MOMACTR_hasoneref((*HNABCTR_modeofrow));
if ( WNABCTR )
{ /* line 318: */
WNABCTR = KRMACTR_isflexarray((*HNABCTR_modeofrow));
}
 /* line 319: */
if ( WNABCTR )
{ 
 /* line 320: */
 /* line 321: */
GYPACTR_getcfragment( VNABCTR_temp, &YNABCTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(XNABCTR,'*',A68_CHAR ),YNABCTR), &ZNABCTR );
ONABCTR = ZNABCTR;
} 
else
{ 
 /* line 322: */
GYPACTR_getcfragment( VNABCTR_temp, &AOABCTR );
ONABCTR = AOABCTR;
} 
} 
BOABCTR_rowname = ONABCTR;
 /* line 323: */
A_CLOSURE( DOABCTR_generator, EOABCTR_generator, FOABCTR_generator );
(( FOABCTR_generator * ) ( DOABCTR_generator.nonlocals )) -> BOABCTR_rowname = BOABCTR_rowname;
A_CALLPROC(DOABCTR_generator,(A68_TRUE, &IOABCTR),(A68_TRUE, &IOABCTR,(DOABCTR_generator).nonlocals));
A_VASSIGN2(BOABCTR_rowname,IOABCTR,A68_CHAR ) ;
(*JNABCTR_row) = IOABCTR;
 /* line 325: */
JOABCTR_originalhasrefs = RSMACTR_hasrefs((*HNABCTR_modeofrow));
 /* line 327: */
 /* line 328: */
 /* line 329: */
 /* line 335: */
if ( (ARMACTR_isarray((*HNABCTR_modeofrow))&(QVMACTR_dimensions((*HNABCTR_modeofrow))>1)) )
{ 
KOABCTR = (&(INABCTR_control->Needstemp)) ;
(*KOABCTR) = A68_FALSE;
 /* line 336: */
 /* line 337: */
 /* line 338: */
{ 
GYPACTR_getcfragment( (&(INABCTR_control->Ident)), &LOABCTR );
MOABCTR_controlname = LOABCTR;
 /* line 339: */
A_CLOSURE( OOABCTR_generator, POABCTR_generator, QOABCTR_generator );
(( QOABCTR_generator * ) ( OOABCTR_generator.nonlocals )) -> MOABCTR_controlname = MOABCTR_controlname;
 /* line 340: */
 /* line 342: */
A_CALLPROC(OOABCTR_generator,(A68_TRUE, &UOABCTR),(A68_TRUE, &UOABCTR,(OOABCTR_generator).nonlocals));
A_VASSIGN2(MOABCTR_controlname,UOABCTR,A68_CHAR ) ;
TOABCTR = UOABCTR;
} 
 /* line 343: */
VOABCTR = (&(INABCTR_control->Control)) ;
(*VOABCTR) = TOABCTR;
} 
else
{ 
 /* line 353: */
if ( JOABCTR_originalhasrefs )
{ 
WOABCTR_forallmode = (*(&((&(INABCTR_control->Ident))->Mode)));
 /* line 355: */
 /* line 356: */
XOABCTR = FRMACTR_isfirmarray(MNABCTR_elemmode);
if ( XOABCTR )
{XOABCTR = (MNABCTR_elemmode<VFAACTR_refmark);
}
 /* line 357: */
if ( XOABCTR )
{ /* line 359: */
YOABCTR = KRMACTR_isflexarray(WOABCTR_forallmode);
if ( YOABCTR )
{YOABCTR = MOMACTR_hasoneref(WOABCTR_forallmode);
}
 /* line 360: */
XOABCTR = !YOABCTR;
}
 /* line 361: */
if ( XOABCTR )
{ 
ZOABCTR_controlmode = ((MNABCTR_elemmode+VFAACTR_refmark)+VFAACTR_refmark);
 /* line 362: */
APABCTR = (&(INABCTR_control->Needstemp)) ;
(*APABCTR) = A68_TRUE;
 /* line 363: */
 /* line 364: */
 /* line 366: */
{ 
LKOACTR_declarectemporary( ZOABCTR_controlmode, CPABCTR, &DPABCTR );
FPABCTR = DPABCTR.Name ;
GPABCTR_controlname = A_HISVEC(EPABCTR,FPABCTR,7,A68_CHAR );
 /* line 367: */
A_CLOSURE( IPABCTR_generator, JPABCTR_generator, KPABCTR_generator );
(( KPABCTR_generator * ) ( IPABCTR_generator.nonlocals )) -> GPABCTR_controlname = GPABCTR_controlname;
 /* line 368: */
 /* line 369: */
A_CALLPROC(IPABCTR_generator,(A68_TRUE, &OPABCTR),(A68_TRUE, &OPABCTR,(IPABCTR_generator).nonlocals));
A_VASSIGN2(GPABCTR_controlname,OPABCTR,A68_CHAR ) ;
NPABCTR = OPABCTR;
} 
 /* line 370: */
PPABCTR = (&(INABCTR_control->Control)) ;
(*PPABCTR) = NPABCTR;
} 
else
{ 
QPABCTR = (&(INABCTR_control->Needstemp)) ;
(*QPABCTR) = A68_FALSE;
 /* line 371: */
 /* line 372: */
 /* line 373: */
{ 
GYPACTR_getcfragment( (&(INABCTR_control->Ident)), &RPABCTR );
SPABCTR_controlname = RPABCTR;
 /* line 374: */
A_CLOSURE( UPABCTR_generator, VPABCTR_generator, WPABCTR_generator );
(( WPABCTR_generator * ) ( UPABCTR_generator.nonlocals )) -> SPABCTR_controlname = SPABCTR_controlname;
 /* line 375: */
 /* line 376: */
A_CALLPROC(UPABCTR_generator,(A68_TRUE, &AQABCTR),(A68_TRUE, &AQABCTR,(UPABCTR_generator).nonlocals));
A_VASSIGN2(SPABCTR_controlname,AQABCTR,A68_CHAR ) ;
ZPABCTR = AQABCTR;
} 
 /* line 377: */
 /* line 383: */
BQABCTR = (&(INABCTR_control->Control)) ;
(*BQABCTR) = ZPABCTR;
} 
} 
else
{ 
 /* line 384: */
 /* line 385: */
CQABCTR = FRMACTR_isfirmarray(MNABCTR_elemmode);
if ( CQABCTR )
{ /* line 386: */
CQABCTR = !RSMACTR_hasrefs(MNABCTR_elemmode);
}
if ( CQABCTR )
{ 
 /* line 388: */
 /* line 390: */
DQABCTR = (VFAACTR_refmark+VFAACTR_refmark);
} 
else
{ 
DQABCTR = VFAACTR_refmark;
} 
EQABCTR_controlmode = (MNABCTR_elemmode+DQABCTR);
 /* line 392: */
FQABCTR = (&(INABCTR_control->Needstemp)) ;
(*FQABCTR) = A68_TRUE;
 /* line 393: */
 /* line 394: */
 /* line 396: */
{ 
LKOACTR_declarectemporary( EQABCTR_controlmode, HQABCTR, &IQABCTR );
KQABCTR = IQABCTR.Name ;
LQABCTR_controlname = A_HISVEC(JQABCTR,KQABCTR,7,A68_CHAR );
 /* line 397: */
A_CLOSURE( NQABCTR_generator, OQABCTR_generator, PQABCTR_generator );
(( PQABCTR_generator * ) ( NQABCTR_generator.nonlocals )) -> LQABCTR_controlname = LQABCTR_controlname;
 /* line 398: */
 /* line 399: */
A_CALLPROC(NQABCTR_generator,(A68_TRUE, &TQABCTR),(A68_TRUE, &TQABCTR,(NQABCTR_generator).nonlocals));
A_VASSIGN2(LQABCTR_controlname,TQABCTR,A68_CHAR ) ;
SQABCTR = TQABCTR;
} 
 /* line 400: */
UQABCTR = (&(INABCTR_control->Control)) ;
(*UQABCTR) = SQABCTR;
} 
} 
}
 /* line 404: */
 /* line 405: */
LKOACTR_declarectemporary( EFAACTR_intmode, WQABCTR, &XQABCTR );
ZQABCTR = XQABCTR.Name ;
ARABCTR_loopcounter = A_HISVEC(YQABCTR,ZQABCTR,7,A68_CHAR );
 /* line 407: */
 /* line 408: */
 /* line 409: */
 /* line 410: */
DRABCTR = 1 ;
if ( XRMACTR_isistruct((*(&A_VINDEX(ENABCTR_modeofrows,DRABCTR)))) )
{ 
 /* line 411: */
FRABCTR = 1 ;
ROAAOSF_whole( A_CALLPROC(WVMACTR_istructlength,((*(&A_VINDEX(ENABCTR_modeofrows,FRABCTR)))),((*(&A_VINDEX(ENABCTR_modeofrows,FRABCTR))),(WVMACTR_istructlength).nonlocals)), 0, &GRABCTR );
ERABCTR = GRABCTR;
} 
else
{ 
 /* line 412: */
HRABCTR = 1 ;
if ( QQMACTR_isvector((*(&A_VINDEX(ENABCTR_modeofrows,HRABCTR)))) )
{ 
 /* line 413: */
JRABCTR = 1 ;
ERABCTR = A_VC_PLUS((*(&A_VINDEX(WMABCTR_rows,JRABCTR))),KRABCTR);
} 
else
{ 
 /* line 414: */
ORABCTR = 1 ;
RRABCTR = 1 ;
ERABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS((*(&A_VINDEX(WMABCTR_rows,ORABCTR))),PRABCTR),QRABCTR),(*(&A_VINDEX(WMABCTR_rows,RRABCTR)))),SRABCTR);
} 
} 
VRABCTR = A_VC_PLUS(A_VC_PLUS(ARABCTR_loopcounter,TRABCTR),ERABCTR) ;
BRABCTR.data[0] = A_UNITE(URABCTR,mode2,2,VRABCTR);
XRABCTR = ';' ;
BRABCTR.data[1] = A_UNITE(WRABCTR,mode1,1,XRABCTR);
BRABCTR.data[2] = A_UNITE(YRABCTR,mode4,4,EIAACTR_cnewline);
 /* line 416: */
MDMACTR_writecstream(A_HISVEC(ZRABCTR,BRABCTR,3,A68_93 ), GNABCTR_codestream);
 /* line 421: */
 /* line 422: */
BSABCTR = WMABCTR_rows.upb;
for ( ASABCTR_i = 2;
ASABCTR_i <= BSABCTR;
ASABCTR_i += 1 )
{ 
 /* line 423: */
CSABCTR_row = (*(&A_VINDEX(WMABCTR_rows,ASABCTR_i)));
 /* line 424: */
 /* line 425: */
 /* line 426: */
 /* line 427: */
if ( XRMACTR_isistruct((*(&A_VINDEX(ENABCTR_modeofrows,ASABCTR_i)))) )
{ 
 /* line 428: */
ROAAOSF_whole( A_CALLPROC(WVMACTR_istructlength,((*(&A_VINDEX(ENABCTR_modeofrows,ASABCTR_i)))),((*(&A_VINDEX(ENABCTR_modeofrows,ASABCTR_i))),(WVMACTR_istructlength).nonlocals)), 0, &HSABCTR );
GSABCTR = HSABCTR;
} 
else
{ 
 /* line 429: */
if ( QQMACTR_isvector((*(&A_VINDEX(ENABCTR_modeofrows,ASABCTR_i)))) )
{ 
 /* line 430: */
GSABCTR = A_VC_PLUS(CSABCTR_row,JSABCTR);
} 
else
{ 
 /* line 431: */
GSABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(CSABCTR_row,NSABCTR),OSABCTR),CSABCTR_row),PSABCTR);
} 
} 
TSABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(QSABCTR,ARABCTR_loopcounter),RSABCTR),GSABCTR) ;
DSABCTR.data[0] = A_UNITE(SSABCTR,mode2,2,TSABCTR);
XSABCTR = VSABCTR ;
DSABCTR.data[1] = A_UNITE(WSABCTR,mode2,2,XSABCTR);
DSABCTR.data[2] = A_UNITE(YSABCTR,mode4,4,EIAACTR_cnewline);
 /* line 433: */
MDMACTR_writecstream(A_HISVEC(ZSABCTR,DSABCTR,3,A68_93 ), GNABCTR_codestream);
 /* line 434: */
 /* line 435: */
 /* line 436: */
ROAAOSF_whole( ASABCTR_i, 0, &ETABCTR );
HTABCTR = A_VC_PLUS(A_VC_PLUS(DTABCTR,ETABCTR),FTABCTR) ;
ATABCTR.data[0] = A_UNITE(GTABCTR,mode2,2,HTABCTR);
ATABCTR.data[1] = A_UNITE(ITABCTR,mode4,4,EIAACTR_cnewline);
 /* line 437: */
 /* line 438: */
MDMACTR_writecstream(A_HISVEC(JTABCTR,ATABCTR,2,A68_93 ), GNABCTR_codestream);
}
 /* line 441: */
A_CLOSURE( LTABCTR_initialise, MTABCTR_initialise, NTABCTR_initialise );
(( NTABCTR_initialise * ) ( LTABCTR_initialise.nonlocals )) -> Controls = Controls;
(( NTABCTR_initialise * ) ( LTABCTR_initialise.nonlocals )) -> ENABCTR_modeofrows = ENABCTR_modeofrows;
(( NTABCTR_initialise * ) ( LTABCTR_initialise.nonlocals )) -> WMABCTR_rows = WMABCTR_rows;
 /* line 451: */
A_CLOSURE( HUABCTR_increment, IUABCTR_increment, JUABCTR_increment );
(( JUABCTR_increment * ) ( HUABCTR_increment.nonlocals )) -> ENABCTR_modeofrows = ENABCTR_modeofrows;
(( JUABCTR_increment * ) ( HUABCTR_increment.nonlocals )) -> Controls = Controls;
(( JUABCTR_increment * ) ( HUABCTR_increment.nonlocals )) -> WMABCTR_rows = WMABCTR_rows;
 /* line 464: */
 /* line 465: */
CVABCTR = Controls.upb;
for ( BVABCTR_i = 1;
BVABCTR_i <= CVABCTR;
BVABCTR_i += 1 )
{ 
 /* line 466: */
A_CALLPROC(LTABCTR_initialise,(BVABCTR_i, &EVABCTR),(BVABCTR_i, &EVABCTR,(LTABCTR_initialise).nonlocals));
DVABCTR.data[0] = A_UNITE(FVABCTR,mode2,2,EVABCTR);
HVABCTR = ';' ;
DVABCTR.data[1] = A_UNITE(GVABCTR,mode1,1,HVABCTR);
DVABCTR.data[2] = A_UNITE(IVABCTR,mode4,4,EIAACTR_cnewline);
 /* line 467: */
MDMACTR_writecstream(A_HISVEC(JVABCTR,DVABCTR,3,A68_93 ), GNABCTR_codestream);
}
 /* line 469: */
OVABCTR = MVABCTR ;
KVABCTR.data[0] = A_UNITE(NVABCTR,mode2,2,OVABCTR);
KVABCTR.data[1] = A_UNITE(PVABCTR,mode2,2,ARABCTR_loopcounter);
TVABCTR = RVABCTR ;
KVABCTR.data[2] = A_UNITE(SVABCTR,mode2,2,TVABCTR);
 /* line 470: */
KVABCTR.data[3] = A_UNITE(UVABCTR,mode4,4,EIAACTR_cnewline);
WVABCTR = '(' ;
KVABCTR.data[4] = A_UNITE(VVABCTR,mode1,1,WVABCTR);
A_CALLPROC(HUABCTR_increment,(1, &XVABCTR),(1, &XVABCTR,(HUABCTR_increment).nonlocals));
KVABCTR.data[5] = A_UNITE(YVABCTR,mode2,2,XVABCTR);
KVABCTR.data[6] = A_UNITE(ZVABCTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(AWABCTR,KVABCTR,7,A68_93 ), GNABCTR_codestream);
 /* line 472: */
 /* line 473: */
CWABCTR = Controls.upb;
for ( BWABCTR_i = 2;
BWABCTR_i <= CWABCTR;
BWABCTR_i += 1 )
{ 
 /* line 474: */
FWABCTR = ',' ;
DWABCTR.data[0] = A_UNITE(EWABCTR,mode1,1,FWABCTR);
A_CALLPROC(HUABCTR_increment,(BWABCTR_i, &GWABCTR),(BWABCTR_i, &GWABCTR,(HUABCTR_increment).nonlocals));
DWABCTR.data[1] = A_UNITE(HWABCTR,mode2,2,GWABCTR);
DWABCTR.data[2] = A_UNITE(IWABCTR,mode4,4,EIAACTR_cnewline);
 /* line 475: */
MDMACTR_writecstream(A_HISVEC(JWABCTR,DWABCTR,3,A68_93 ), GNABCTR_codestream);
}
 /* line 477: */
OWABCTR = MWABCTR ;
KWABCTR.data[0] = A_UNITE(NWABCTR,mode2,2,OWABCTR);
KWABCTR.data[1] = A_UNITE(PWABCTR,mode4,4,EIAACTR_cnewline);
RWABCTR = '{' ;
KWABCTR.data[2] = A_UNITE(QWABCTR,mode1,1,RWABCTR);
KWABCTR.data[3] = A_UNITE(SWABCTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(TWABCTR,KWABCTR,4,A68_93 ), GNABCTR_codestream);
 /* line 481: */
 /* line 482: */
VWABCTR = Controls.upb -1;
UWABCTR_control = Controls.data;
for (;VWABCTR-- >= 0;
(UWABCTR_control++
) )
{
 /* line 483: */
 /* line 484: */
 /* line 485: */
if ( (*(&(UWABCTR_control->Needstemp))) )
{ 
GYPACTR_getcfragment( (&(UWABCTR_control->Ident)), &XWABCTR );
WWABCTR.data[0] = A_UNITE(YWABCTR,mode2,2,XWABCTR);
 /* line 486: */
CXABCTR = AXABCTR ;
WWABCTR.data[1] = A_UNITE(BXABCTR,mode2,2,CXABCTR);
EXABCTR = (*(&(UWABCTR_control->Control))) ;
WWABCTR.data[2] = A_UNITE(DXABCTR,mode2,2,EXABCTR);
GXABCTR = ';' ;
WWABCTR.data[3] = A_UNITE(FXABCTR,mode1,1,GXABCTR);
WWABCTR.data[4] = A_UNITE(HXABCTR,mode4,4,EIAACTR_cnewline);
 /* line 487: */
 /* line 488: */
 /* line 489: */
MDMACTR_writecstream(A_HISVEC(IXABCTR,WWABCTR,5,A68_93 ), GNABCTR_codestream);
} 
}
 /* line 490: */
} 
A_PROC_EXIT(forall);
return;
} 
#undef NL

A68_VOID  JXABCTR_while(void)
{ 
A_PROC_ENTRY(while);
/*SKIP*/;
A_PROC_EXIT(while);
return;
} 
#undef NL

A68_VOID  LXABCTR_whiledo(A68_64 * Enquiry)
{ 
A68_INT  MXABCTR_codestream;
A68_VC  OXABCTR;  /* clause result */
A68_VC  QXABCTR;  /* avoid structure result */
A68_VC  RXABCTR_booleanexpr;
A68_190  SXABCTR;  /* collateral clause result */
A68_93  VXABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  WXABCTR;  /* YIELD */
A68_93  XXABCTR;  /* OPERATORS - mode -> union mode */
A68_93  AYABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  BYABCTR;  /* YIELD */
A68_93  CYABCTR;  /* OPERATORS - mode -> union mode */
A68_92  DYABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(whiledo);
 /* line 495: */
 /* line 496: */
{ 
MXABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 497: */
 /* line 498: */
 /* line 499: */
 /* line 501: */
if ( QWPACTR_isskip(Enquiry) )
{ 
 /* line 502: */
OXABCTR = PXABCTR;
} 
else
{ 
 /* line 503: */
NCQACTR_bracketcfragment( Enquiry, &QXABCTR );
OXABCTR = QXABCTR;
} 
RXABCTR_booleanexpr = OXABCTR;
 /* line 504: */
 /* line 505: */
WXABCTR = UXABCTR ;
SXABCTR.data[0] = A_UNITE(VXABCTR,mode2,2,WXABCTR);
SXABCTR.data[1] = A_UNITE(XXABCTR,mode2,2,RXABCTR_booleanexpr);
BYABCTR = ZXABCTR ;
SXABCTR.data[2] = A_UNITE(AYABCTR,mode2,2,BYABCTR);
SXABCTR.data[3] = A_UNITE(CYABCTR,mode4,4,EIAACTR_cnewline);
 /* line 506: */
MDMACTR_writecstream(A_HISVEC(DYABCTR,SXABCTR,4,A68_93 ), MXABCTR_codestream);
} 
A_PROC_EXIT(whiledo);
return;
} 
#undef NL

A68_VOID  EYABCTR_whileod(void)
{ 
A68_INT  FYABCTR_codestream;
A68_196  GYABCTR;  /* collateral clause result */
A68_93  HYABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  IYABCTR;  /* YIELD */
A68_93  JYABCTR;  /* OPERATORS - mode -> union mode */
A68_92  KYABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(whileod);
{ 
FYABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 511: */
IYABCTR = '}' ;
GYABCTR.data[0] = A_UNITE(HYABCTR,mode1,1,IYABCTR);
GYABCTR.data[1] = A_UNITE(JYABCTR,mode4,4,EIAACTR_cnewline);
 /* line 512: */
MDMACTR_writecstream(A_HISVEC(KYABCTR,GYABCTR,2,A68_93 ), FYABCTR_codestream);
} 
A_PROC_EXIT(whileod);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void BCABCTR(void)   /* initialise DECS loops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel","-dir",".","loops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config/a68config.m","./values.m","./modes.m","./incmode.m","./environment.m","./environ.m","./coutput.m","./clauses.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/usefulops.m","./centities.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_64  GCABCTR;  /* collateral clause result */
A68_65  HCABCTR;  /* OPERATORS - mode -> union mode */
A68_LBITS  ICABCTR;  /* YIELD */
A68_75  MYABCTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ATPACTR();   /* USE values */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
BZYACTR();   /* USE clauses */
IKAAOSF();   /* USE usefulops */
THAACTR();   /* USE centities */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20-debian/src/loops.a68";
A_config.translation_time = "Wed Apr 21 16:34:06 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "ACABCTR (from seed file) ";
A_config.spec_change_time = "Wed Apr 21 16:34:06 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS loops);
UEAALIB_a68config(LGAALIB_configinfo, FCABCTR);
 /* line 49: */
 /* line 59: */
 /* line 62: */
GCABCTR.Mode = EFAACTR_intmode;
GCABCTR.Info = PKJACTR_defaultinfo;
ICABCTR = (A68_LBITS )01U ;
GCABCTR.Extra = A_UNITE(HCABCTR,mode1,1,ICABCTR);
XCABCTR_value1 = LCABCTR_assignment(A_LOC(A68_64 ), GCABCTR);
 /* line 69: */
 /* line 70: */
 /* line 273: */
 /* line 274: */
 /* line 492: */
 /* line 494: */
 /* line 508: */
 /* line 509: */
 /* line 510: */
 /* line 514: */
MYABCTR.fn.fn_global = EYABCTR_whileod;
MYABCTR.nonlocals = A68_NIL;
LYABCTR_od = (MYABCTR);
 /* line 516: */
 /* line 518: */
 /* line 521: */
/*SKIP*/;
A_PROC_EXIT(DECS loops);
} 
#undef NL
/* end of translation of loops.a68 */
