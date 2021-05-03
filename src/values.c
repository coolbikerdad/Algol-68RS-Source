/* UNAME:ZSPACTR */
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

A_PROCEDURE(A68_VOID ,A68t54,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t56);
typedef struct A68t56  A68_56 ;    /* STRUCT 7 CHAR */
struct A68t55{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_1)
A68_BOOL  Set;
A_PAD_BOOL(PAD_2)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(MODE56,BOOL)  */
struct A68t57{
A68_INT  Labno;
A_PAD_INT(PAD_3)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t58,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_INT ,A68t59,(A68_INT ),(A68_INT ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t60,(A68_INT ),(A68_INT ,void *));
typedef struct A68t60  A68_60 ;    /* PROC(INT) BOOL */
struct A68t61{
A68_INT  Level;
A_PAD_INT(PAD_4)
A68_INT  Block;
A_PAD_INT(PAD_5)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t62,(struct A68t61 *),(struct A68t61 *,void *));
typedef struct A68t62  A68_62 ;    /* PROC MODE61 */

A_PROCEDURE(A68_INT ,A68t63,(void),(void *));
typedef struct A68t63  A68_63 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t64,(A68_INT ),(A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t65,(void),(void *));
typedef struct A68t65  A68_65 ;    /* PROC VOID */

A_PROCEDURE(A68_BOOL ,A68t66,(void),(void *));
typedef struct A68t66  A68_66 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t67,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t68,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t69,(struct A68t61 ,struct A68t61 ),(struct A68t61 ,struct A68t61 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE61,MODE61) BOOL */

A_PROCEDURE(A68_BOOL ,A68t70,(struct A68t61 ),(struct A68t61 ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE61) BOOL */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t73,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(INT) REF MODE26 */
struct A68t75 ;

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t75 ),(A68_INT ,struct A68t75 ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,MODE75) VOID */
A_ROW(A68_VC ,A68t75,1);
typedef struct A68t75  A68_75 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t76,(void),(void *));
typedef struct A68t76  A68_76 ;    /* PROC BITS */
struct A68t77{
A68_INT  Cfile;
A_PAD_INT(PAD_6)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT)  */
struct A68t78{
A68_INT  Seedfile;
A_PAD_INT(PAD_7)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT)  */
struct A68t79 { A68_INT mode; union {
struct A68t77  mode1;
struct A68t78  mode2;
struct A68t56  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t79  A68_79 ;    /* UNION(MODE77,MODE78,MODE56,VOID)  */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC ),(A68_VC ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t81,1);
typedef struct A68t81  A68_81 ;    /* [] BOOL */
struct A68t82{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_8)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_9)
struct A68t79  Nameseedorigin;
struct A68t83 * Used_modules;
A68_VC  Commandline;
struct A68t84 * Environment;
};
typedef struct A68t82  A68_82 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE79,REF MODE83,REF MODE26,REF MODE84)  */
struct A68t83{
A68_VC  Modinfo_file;
struct A68t83 * Next;
};
typedef struct A68t83  A68_83 ;    /* STRUCT(REF MODE26,REF MODE83)  */
struct A68t84{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t84 * Next;
};
typedef struct A68t84  A68_84 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE84)  */
struct A68t86 ;
struct A68t87 ;

A_PROCEDURE(struct A68t86 *,A68t85,(A68_VC ,struct A68t87 *,A68_VC *),(A68_VC ,struct A68t87 *,A68_VC *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE26,REF MODE87,REF REF MODE26) REF MODE86 */
struct A68t86{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t87{
A68_VC  Dir;
struct A68t87 * Next;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(REF MODE26,REF MODE87)  */
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
struct A68t94{
A68_INT  Mode;
A_PAD_INT(PAD_10)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_11)
struct A68t61  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_12)
A68_BITS  Flags;
A_PAD_BITS(PAD_13)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,INT,MODE61,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */
struct A68t95{
A68_INT  Mode;
A_PAD_INT(PAD_14)
A68_INT  Resultmode;
A_PAD_INT(PAD_15)
A68_INT  Declevel;
A_PAD_INT(PAD_16)
struct A68t61  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_17)
struct A68t56  Fnprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_18)
struct A68t56  Envprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_19)
A68_BITS  Flags;
A_PAD_BITS(PAD_20)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT,INT,INT,MODE61,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t96{
struct A68t55  Label;
struct A68t61  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_21)
A68_BITS  Flags;
A_PAD_BITS(PAD_22)
A68_INT  Alias;
A_PAD_INT(PAD_23)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(MODE55,MODE61,REF MODE26,MODE56,BITS,INT)  */

A_PROCEDURE(struct A68t94 *,A68t97,(A68_INT ),(A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT) REF MODE94 */

A_PROCEDURE(A68_VOID ,A68t98,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t99,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t94 ,A68t100,1);
typedef struct A68t100  A68_100 ;    /* [] MODE94 */
A_ROW(struct A68t95 ,A68t101,1);
typedef struct A68t101  A68_101 ;    /* [] MODE95 */
A_ROW(struct A68t96 ,A68t102,1);
typedef struct A68t102  A68_102 ;    /* [] MODE96 */
struct A68t104 ;

A_PROCEDURE(A68_VOID ,A68t103,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t104 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t104 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT,INT,INT,INT,REF MODE104) VOID */
A_ROW(A68_INT ,A68t104,1);
typedef struct A68t104  A68_104 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t105,(A68_VC ),(A68_VC ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t106,(A68_INT ,struct A68t61 *),(A68_INT ,struct A68t61 *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT) MODE61 */
struct A68t107{
struct A68t108 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_24)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(REF MODE108,REF MODE55,INT)  */
struct A68t110{
A68_INT  Rdenno;
A_PAD_INT(PAD_25)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT)  */
struct A68t111{
A68_INT  Idno;
A_PAD_INT(PAD_26)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT)  */
struct A68t112{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_27)
A68_INT  Mode;
A_PAD_INT(PAD_28)
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE56,INT)  */
struct A68t113{
A68_INT  Nse;
A_PAD_INT(PAD_29)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT)  */
struct A68t114{
A68_INT  Fn;
A_PAD_INT(PAD_30)
A68_INT  Param;
A_PAD_INT(PAD_31)
struct A68t115 * Operands;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,INT,REF MODE115)  */
struct A68t109 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t110  mode2;
struct A68t111  mode4;
struct A68t112  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t113  mode8;
struct A68t114  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t109  A68_109 ;    /* UNION(LONG BITS,MODE110,VOID,MODE111,MODE112,MODE26,MODE57,MODE113,MODE114)  */
struct A68t108{
A68_INT  Mode;
A_PAD_INT(PAD_32)
A68_BITS  Info;
A_PAD_BITS(PAD_33)
struct A68t109  Extra;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,BITS,MODE109)  */
struct A68t115{
struct A68t108  Value;
struct A68t115 * Rest;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE108,REF MODE115)  */
struct A68t116{
A68_INT  Parameters;
A_PAD_INT(PAD_34)
A68_INT  Result;
A_PAD_INT(PAD_35)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_36)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t118);
typedef struct A68t118  A68_118 ;    /* STRUCT 32 CHAR */
struct A68t117{
A68_INT  Mode;
A_PAD_INT(PAD_37)
A68_INT  Offset;
A_PAD_INT(PAD_38)
struct A68t118  Name;
A_PAD_ISTRUCT(A68_118 ,PAD_39)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,INT,MODE118)  */
struct A68t120 ;

A_PROCEDURE(A68_VOID ,A68t119,(A68_INT ,struct A68t120 *),(A68_INT ,struct A68t120 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(INT) REF MODE120 */
A_VECTOR(A68_INT ,A68t120);
typedef struct A68t120  A68_120 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t117 *,A68_VC *),(struct A68t117 *,A68_VC *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(REF MODE117) MODE26 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ,A68_VC ,struct A68t112 *),(A68_INT ,A68_VC ,struct A68t112 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT,MODE26) MODE112 */
struct A68t124 ;

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t124 ,A68_INT ),(struct A68t124 ,A68_INT ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE124,INT) VOID */
A_ROW(struct A68t125 ,A68t124,1);
typedef struct A68t124  A68_124 ;    /* [] MODE125 */
struct A68t135{
A68_INT  Mode;
A_PAD_INT(PAD_40)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT)  */
struct A68t125 { A68_INT mode; union {
A68_INT  mode1;
struct A68t126 * mode2;
struct A68t127 * mode3;
struct A68t128 * mode4;
struct A68t129 * mode5;
struct A68t130 * mode6;
struct A68t131 * mode7;
struct A68t132 * mode8;
struct A68t133 * mode9;
struct A68t134 * mode10;
struct A68t135  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t125  A68_125 ;    /* UNION(INT,REF MODE126,REF MODE127,REF MODE128,REF MODE129,REF MODE130,REF MODE131,REF MODE132,REF MODE133,REF MODE134,MODE135)  */
struct A68t126{
A68_INT  Rdenno;
A_PAD_INT(PAD_41)
struct A68t139 * Modelist;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT,REF MODE139)  */
struct A68t127{
A68_INT  Deproc;
A_PAD_INT(PAD_42)
struct A68t139 * Pars;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,REF MODE139)  */
struct A68t128{
A68_INT  Rdenno;
A_PAD_INT(PAD_43)
A68_INT  Deflex;
A_PAD_INT(PAD_44)
struct A68t138 * Sels;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT,INT,REF MODE138)  */
struct A68t129{
A68_INT  Rdenno;
A_PAD_INT(PAD_45)
A68_INT  Imode;
A_PAD_INT(PAD_46)
A68_INT  Length;
A_PAD_INT(PAD_47)
A68_INT  Deflex;
A_PAD_INT(PAD_48)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t130{
A68_INT  Deproc;
A_PAD_INT(PAD_49)
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT)  */
struct A68t131{
A68_INT  Rdenno;
A_PAD_INT(PAD_50)
A68_INT  Vecmode;
A_PAD_INT(PAD_51)
A68_INT  Deflex;
A_PAD_INT(PAD_52)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,INT,INT)  */
struct A68t132{
A68_INT  Rdenno;
A_PAD_INT(PAD_53)
A68_INT  Mode;
A_PAD_INT(PAD_54)
A68_INT  Nods;
A_PAD_INT(PAD_55)
A68_INT  Deflex;
A_PAD_INT(PAD_56)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t133{
A68_INT  Mode;
A_PAD_INT(PAD_57)
struct A68t137 * Stenlist;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,REF MODE137)  */
struct A68t134{
A68_INT  Mode;
A_PAD_INT(PAD_58)
A68_INT  Modeproc;
A_PAD_INT(PAD_59)
struct A68t136 * El;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,REF MODE136)  */
struct A68t136{
struct A68t134 * Am;
struct A68t136 * Rest;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(REF MODE134,REF MODE136)  */
struct A68t137{
A68_INT  Mode;
A_PAD_INT(PAD_60)
A68_INT  Rdenno;
A_PAD_INT(PAD_61)
struct A68t137 * Rest;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,REF MODE137)  */
struct A68t138{
A68_INT  Mode;
A_PAD_INT(PAD_62)
A68_INT  Fieldno;
A_PAD_INT(PAD_63)
struct A68t118  Name;
A_PAD_ISTRUCT(A68_118 ,PAD_64)
struct A68t138 * Rest;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,INT,MODE118,REF MODE138)  */
struct A68t139{
A68_INT  Mode;
A_PAD_INT(PAD_65)
struct A68t139 * Rest;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,REF MODE139)  */

A_PROCEDURE(A68_VOID ,A68t140,(A68_INT ,struct A68t116 *),(A68_INT ,struct A68t116 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT) MODE116 */
struct A68t142 ;

A_PROCEDURE(A68_VOID ,A68t141,(A68_INT ,struct A68t142 *),(A68_INT ,struct A68t142 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT) REF MODE142 */
A_VECTOR(struct A68t117 ,A68t142);
typedef struct A68t142  A68_142 ;    /* VECTOR [] MODE117 */

A_PROCEDURE(A68_INT ,A68t143,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE65) VOID */

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t80 ),(struct A68t80 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE80) VOID */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 56 CHAR */
A_VECTOR(struct A68t108 *,A68t149);
typedef struct A68t149  A68_149 ;    /* VECTOR [] REF MODE108 */

A_PROCEDURE(struct A68t108 *,A68t150,(A68_INT ,A68_INT ,A68_BITS ,struct A68t149 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t149 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(INT,INT,BITS,MODE149) REF MODE108 */

A_PROCEDURE(struct A68t115 *,A68t151,(struct A68t115 *,struct A68t115 ),(struct A68t115 *,struct A68t115 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE115,MODE115) REF MODE115 */

A_PROCEDURE(struct A68t108 *,A68t152,(struct A68t108 *,struct A68t108 ),(struct A68t108 *,struct A68t108 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE108,MODE108) REF MODE108 */

A_PROCEDURE(struct A68t109 *,A68t153,(struct A68t109 *,struct A68t109 ),(struct A68t109 *,struct A68t109 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE109,MODE109) REF MODE109 */
#define A68_154  A68_VC 
#define A68t154 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_BOOL ,A68t155,(struct A68t108 *,A68_BITS ),(struct A68t108 *,A68_BITS ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE108,BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t156,(struct A68t108 *,struct A68t108 *),(struct A68t108 *,struct A68t108 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE108,REF MODE108) BOOL */

A_PROCEDURE(A68_BOOL ,A68t157,(struct A68t108 *),(struct A68t108 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE108) BOOL */

A_PROCEDURE(A68_BOOL ,A68t158,(struct A68t108 *,A68_LBITS ),(struct A68t108 *,A68_LBITS ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE108,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t159,(struct A68t108 *),(struct A68t108 *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE108) LONG BITS */
A_ISTRUCT(A68_CHAR ,49,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,55,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_VC ,3,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t108 *,A68_VC *),(struct A68t108 *,A68_VC *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE108) MODE26 */

A_PROCEDURE(A68_VOID ,A68t166,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE26,INT) MODE26 */
A_ISTRUCT(A68_CHAR ,15,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t93 ,8,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 8 MODE93 */
A_ISTRUCT(A68_CHAR ,59,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t173);
typedef struct A68t173  A68_173 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,50,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 50 CHAR */

A_PROCEDURE(struct A68t108 *,A68t179,(struct A68t115 *,A68_INT ),(struct A68t115 *,A68_INT ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF MODE115,INT) REF MODE108 */

A_PROCEDURE(struct A68t115 *,A68t180,(struct A68t115 *),(struct A68t115 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE115) REF MODE115 */

A_PROCEDURE(A68_INT ,A68t181,(struct A68t114 ),(struct A68t114 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE114) INT */

A_PROCEDURE(struct A68t108 *,A68t182,(struct A68t108 *,A68_INT ),(struct A68t108 *,A68_INT ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REF MODE108,INT) REF MODE108 */
A_ISTRUCT(A68_CHAR ,44,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 44 CHAR */

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t108 *),(struct A68t108 *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE108) VOID */
A_ISTRUCT(A68_CHAR ,40,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_LINT ,A68t193,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE108) LONG INT */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t108 *,A68_BOOL ,A68_VC *),(struct A68t108 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE108,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,12,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 31 CHAR */
struct A68t197 { A68_INT mode; union {
struct A68t108 * mode1;
A68_VC  mode2;
struct A68t112  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t197  A68_197 ;    /* UNION(REF MODE108,MODE26,MODE112)  */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t197 ,A68_VC *),(struct A68t197 ,A68_VC *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE197) MODE26 */
A_ISTRUCT(A68_CHAR ,58,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 58 CHAR */
A_VECTOR(struct A68t197 ,A68t200);
typedef struct A68t200  A68_200 ;    /* VECTOR [] MODE197 */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t200 ,A68_VC *),(struct A68t200 ,A68_VC *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE200) MODE26 */
A_ISTRUCT(A68_CHAR ,35,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t204,(A68_VC ,struct A68t200 ,A68_VC *),(A68_VC ,struct A68t200 ,A68_VC *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE26,MODE200) MODE26 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t200 ),(struct A68t200 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE200) VOID */
A_ISTRUCT(struct A68t93 ,2,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 2 MODE93 */

A_PROCEDURE(A68_VOID ,A68t207,(A68_VC ,A68_INT ,struct A68t200 ,struct A68t112 *),(A68_VC ,A68_INT ,struct A68t200 ,struct A68t112 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE26,INT,MODE200) MODE112 */
A_ISTRUCT(struct A68t197 ,4,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 4 MODE197 */

A_PROCEDURE(struct A68t108 *,A68t209,(struct A68t108 *),(struct A68t108 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE108) REF MODE108 */

A_PROCEDURE(struct A68t108 *,A68t210,(A68_VC ,struct A68t108 *),(A68_VC ,struct A68t108 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE26,REF MODE108) REF MODE108 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from modes --- */
extern A68_VOID  LKOACTR_declarectemporary(A68_INT ,A68_VC ,A68_112 *);
extern A68_INT  BTMACTR_derefmode(A68_INT );
extern A68_BOOL  RSMACTR_hasrefs(A68_INT );
extern A68_BOOL  FRMACTR_isfirmarray(A68_INT );
extern A68_VOID  WCNACTR_modename(A68_INT ,A68_VC *);
extern A68_122  KLOACTR_new;
extern A68_INT  TKNACTR_givecvariabletype(A68_INT ,A68_BOOL );
/* --- End of imports from modes --- */


/* --- Imports from incvalue --- */
extern A68_115 * MKJACTR_nilvaluelist;
extern A68_108  DLJACTR_skipvalue;
extern A68_BITS  PKJACTR_defaultinfo;
#define QKJACTR_constant 0X1U
#define RKJACTR_atomic 0X2U
#define TKJACTR_nonloc 0X8U
#define VKJACTR_lvalue 0X20U
#define XKJACTR_fxwarn 0X80U
/* --- End of imports from incvalue --- */


/* --- Imports from incid --- */
#define IAAACTR_maxidno 2000
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
#define OAAACTR_minlab 16384
#define LAAACTR_minlibid 4001
#define JAAACTR_minrdno 2001
/* --- End of imports from incid --- */


/* --- Imports from incoperfn --- */
#define WGAACTR_operandsshift 18
extern A68_BITS  ZGAACTR_parammask;
/* --- End of imports from incoperfn --- */


/* --- Imports from incmode --- */
#define VFAACTR_refmark 1024
/* --- End of imports from incmode --- */


/* --- Imports from idtable --- */
extern A68_94 * YQKACTR_get_idinfo(A68_INT );
extern A68_101  XPKACTR_rds;
extern A68_VOID  WSKACTR_labelfullname(A68_INT ,A68_VC *);
extern A68_VOID  UTKACTR_idfullname(A68_INT ,A68_VC *);
extern A68_VOID  DTKACTR_labelbuffername(A68_INT ,A68_VC *);
#define JQKACTR_idgprocflag 0X100U
#define RQKACTR_rdglobalflag 0X8U
extern A68_VOID  RTKACTR_labelenviron(A68_INT ,A68_61 *);
extern A68_BOOL  NTKACTR_labelisdeclared(A68_INT );
/* --- End of imports from idtable --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t92 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t36 ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
extern A68_VOID  JPAAOSF_lwhole(A68_LINT ,A68_INT ,A68_VC *);
extern A68_VOID  BQAAOSF_hex(A68_LBITS ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void DNMACTR(void);   /* modes */
extern void GKJACTR(void);   /* incvalue */
extern void BAAACTR(void);   /* incid */
extern void XFAACTR(void);   /* incoperfn */
extern void ZDAACTR(void);   /* incmode */
extern void PPKACTR(void);   /* idtable */
extern void PTLACTR(void);   /* coutput */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_148   DTPACTR = {"$Id: values.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,ETPACTR,DTPACTR,56)
static A68_160   DXPACTR = {"VALUES - GETCONSTANT, value has no such component"}; 
A_GISVEC(A68_VC ,EXPACTR,DXPACTR,49)
static A68_161   IXPACTR = {"VALUES - ref string: level is invalid"}; 
A_GISVEC(A68_VC ,KXPACTR,IXPACTR,37)
static A68_162   SXPACTR = {"IDENTIFIERS - id ref level: ref levels are incompatable"}; 
A_GISVEC(A68_VC ,UXPACTR,SXPACTR,55)
static A68_163   ZXPACTR = {"NL("}; 
A_GISVEC(A68_VC ,AYPACTR,ZXPACTR,3)
static A68_167   LYPACTR = {"procedure value"}; 
A_GISVEC(A68_VC ,MYPACTR,LYPACTR,15)
static A68_168   TYPACTR = {".fn.fn_global = "}; 
A_GISVEC(A68_VC ,UYPACTR,TYPACTR,16)
static A68_169   CZPACTR = {".nonlocals = A68_NIL;"}; 
A_GISVEC(A68_VC ,DZPACTR,CZPACTR,21)
static A68_171   RZPACTR = {"VALUES - GETCFRAGMENT: attempt to take address of temporary"}; 
A_GISVEC(A68_VC ,SZPACTR,RZPACTR,59)
static A68_56   BAQACTR = {"A68_NIL"}; 
A_GISVEC(A68_VC ,CAQACTR,BAQACTR,7)
static A68_172   DAQACTR = {"/*SKIP*/"}; 
A_GISVEC(A68_VC ,EAQACTR,DAQACTR,8)
static A68_173   FAQACTR = {"/*EMPTY*/"}; 
A_GISVEC(A68_VC ,GAQACTR,FAQACTR,9)
static A68_174   HAQACTR = {"/* UNDEFINED NSE */"}; 
A_GISVEC(A68_VC ,IAQACTR,HAQACTR,19)
static A68_175   TAQACTR = {""}; 
A_GISVEC(A68_VC ,UAQACTR,TAQACTR,0)
static A68_176   ZAQACTR = {"VALUES: GETCRAGMENT: invalid id no"}; 
A_GISVEC(A68_VC ,CBQACTR,ZAQACTR,34)
static A68_177   GBQACTR = {"VALUES: GETCFRAGMENT: non-local used gproc"}; 
A_GISVEC(A68_VC ,HBQACTR,GBQACTR,42)
static A68_175   UBQACTR = {""}; 
A_GISVEC(A68_VC ,VBQACTR,UBQACTR,0)
static A68_171   BCQACTR = {"VALUES - GETCFRAGMENT: attempt to evaluate undeclared label"}; 
A_GISVEC(A68_VC ,CCQACTR,BCQACTR,59)
static A68_178   JCQACTR = {"VALUES - GETCFRAGMENT, value has no such component"}; 
A_GISVEC(A68_VC ,KCQACTR,JCQACTR,50)
static A68_183   UDQACTR = {"OPERAND - VALUE parameter is not a TREEOPER."}; 
A_GISVEC(A68_VC ,VDQACTR,UDQACTR,44)
static A68_185   ZDQACTR = {"VALUES - deref value: cannot deref value"}; 
A_GISVEC(A68_VC ,AEQACTR,ZDQACTR,40)
static A68_172   HEQACTR = {"SPARE op"}; 
A_GISVEC(A68_VC ,IEQACTR,HEQACTR,8)
static A68_172   LEQACTR = {"statgrab"}; 
A_GISVEC(A68_VC ,NEQACTR,LEQACTR,8)
static A68_186   OEQACTR = {"tree generator"}; 
A_GISVEC(A68_VC ,PEQACTR,OEQACTR,14)
static A68_187   QEQACTR = {"select"}; 
A_GISVEC(A68_VC ,REQACTR,QEQACTR,6)
static A68_40   SEQACTR = {"copy"}; 
A_GISVEC(A68_VC ,TEQACTR,SEQACTR,4)
static A68_40   UEQACTR = {"trim"}; 
A_GISVEC(A68_VC ,VEQACTR,UEQACTR,4)
static A68_188   WEQACTR = {"simpleindex"}; 
A_GISVEC(A68_VC ,XEQACTR,WEQACTR,11)
static A68_173   YEQACTR = {"trimindex"}; 
A_GISVEC(A68_VC ,ZEQACTR,YEQACTR,9)
static A68_56   AFQACTR = {"dyngrab"}; 
A_GISVEC(A68_VC ,BFQACTR,AFQACTR,7)
static A68_173   CFQACTR = {"boundpack"}; 
A_GISVEC(A68_VC ,DFQACTR,CFQACTR,9)
static A68_173   EFQACTR = {"dyadic op"}; 
A_GISVEC(A68_VC ,FFQACTR,EFQACTR,9)
static A68_189   GFQACTR = {"monadic op"}; 
A_GISVEC(A68_VC ,HFQACTR,GFQACTR,10)
static A68_172   IFQACTR = {"straight"}; 
A_GISVEC(A68_VC ,JFQACTR,IFQACTR,8)
static A68_188   KFQACTR = {"prestraight"}; 
A_GISVEC(A68_VC ,LFQACTR,KFQACTR,11)
static A68_172   MFQACTR = {"strindex"}; 
A_GISVEC(A68_VC ,NFQACTR,MFQACTR,8)
static A68_187   OFQACTR = {"assign"}; 
A_GISVEC(A68_VC ,PFQACTR,OFQACTR,6)
static A68_186   QFQACTR = {"!! RS def. bnd"}; 
A_GISVEC(A68_VC ,RFQACTR,QFQACTR,14)
static A68_190   SFQACTR = {"deref"}; 
A_GISVEC(A68_VC ,TFQACTR,SFQACTR,5)
static A68_40   UFQACTR = {"call"}; 
A_GISVEC(A68_VC ,VFQACTR,UFQACTR,4)
static A68_40   WFQACTR = {"void"}; 
A_GISVEC(A68_VC ,XFQACTR,WFQACTR,4)
static A68_187   YFQACTR = {"niltom"}; 
A_GISVEC(A68_VC ,ZFQACTR,YFQACTR,6)
static A68_172   AGQACTR = {"gotoproc"}; 
A_GISVEC(A68_VC ,BGQACTR,AGQACTR,8)
static A68_190   CGQACTR = {"gotom"}; 
A_GISVEC(A68_VC ,DGQACTR,CGQACTR,5)
static A68_188   EGQACTR = {"realtocompl"}; 
A_GISVEC(A68_VC ,FGQACTR,EGQACTR,11)
static A68_173   GGQACTR = {"inttoreal"}; 
A_GISVEC(A68_VC ,HGQACTR,GGQACTR,9)
static A68_191   IGQACTR = {"68R inttobits"}; 
A_GISVEC(A68_VC ,JGQACTR,IGQACTR,13)
static A68_187   KGQACTR = {"arrarr"}; 
A_GISVEC(A68_VC ,LGQACTR,KGQACTR,6)
static A68_187   MGQACTR = {"vecarr"}; 
A_GISVEC(A68_VC ,NGQACTR,MGQACTR,6)
static A68_190   OGQACTR = {"isvec"}; 
A_GISVEC(A68_VC ,PGQACTR,OGQACTR,5)
static A68_192   QGQACTR = {"is"}; 
A_GISVEC(A68_VC ,RGQACTR,QGQACTR,2)
static A68_190   SGQACTR = {"unite"}; 
A_GISVEC(A68_VC ,TGQACTR,SGQACTR,5)
static A68_187   UGQACTR = {"uniteu"}; 
A_GISVEC(A68_VC ,VGQACTR,UGQACTR,6)
static A68_190   WGQACTR = {"isarr"}; 
A_GISVEC(A68_VC ,XGQACTR,WGQACTR,5)
static A68_56   YGQACTR = {"skiptom"}; 
A_GISVEC(A68_VC ,ZGQACTR,YGQACTR,7)
static A68_163   AHQACTR = {"vec"}; 
A_GISVEC(A68_VC ,BHQACTR,AHQACTR,3)
static A68_163   CHQACTR = {"arr"}; 
A_GISVEC(A68_VC ,DHQACTR,CHQACTR,3)
static A68_56   EHQACTR = {"deunite"}; 
A_GISVEC(A68_VC ,FHQACTR,EHQACTR,7)
static A68_191   GHQACTR = {"bitstov[]bool"}; 
A_GISVEC(A68_VC ,HHQACTR,GHQACTR,13)
static A68_163   IHQACTR = {"vac"}; 
A_GISVEC(A68_VC ,JHQACTR,IHQACTR,3)
static A68_172   KHQACTR = {"ytypetom"}; 
A_GISVEC(A68_VC ,LHQACTR,KHQACTR,8)
static A68_172   MHQACTR = {"mtoxtype"}; 
A_GISVEC(A68_VC ,NHQACTR,MHQACTR,8)
static A68_168   OHQACTR = {"static generator"}; 
A_GISVEC(A68_VC ,PHQACTR,OHQACTR,16)
static A68_187   QHQACTR = {"format"}; 
A_GISVEC(A68_VC ,RHQACTR,QHQACTR,6)
static A68_192   SHQACTR = {" ?"}; 
A_GISVEC(A68_VC ,UHQACTR,SHQACTR,2)
static A68_163   YHQACTR = {"NIL"}; 
A_GISVEC(A68_VC ,AIQACTR,YHQACTR,3)
static A68_189   DIQACTR = {"SKIP value"}; 
A_GISVEC(A68_VC ,EIQACTR,DIQACTR,10)
static A68_189   FIQACTR = {"skip value"}; 
A_GISVEC(A68_VC ,GIQACTR,FIQACTR,10)
static A68_192   HIQACTR = {"( "}; 
static A68_192   IIQACTR = {", "}; 
static A68_190   KIQACTR = {"EMPTY"}; 
A_GISVEC(A68_VC ,MIQACTR,KIQACTR,5)
static A68_189   OIQACTR = {"constant: "}; 
A_GISVEC(A68_VC ,PIQACTR,OIQACTR,10)
static A68_56   SIQACTR = {"label: "}; 
A_GISVEC(A68_VC ,TIQACTR,SIQACTR,7)
static A68_195   WIQACTR = {"identifier: "}; 
A_GISVEC(A68_VC ,XIQACTR,WIQACTR,12)
static A68_188   AJQACTR = {"temporary: "}; 
A_GISVEC(A68_VC ,BJQACTR,AJQACTR,11)
static A68_188   FJQACTR = {"cfragment: "}; 
A_GISVEC(A68_VC ,GJQACTR,FJQACTR,11)
static A68_195   IJQACTR = {"empty or vac"}; 
A_GISVEC(A68_VC ,JJQACTR,IJQACTR,12)
static A68_40   KJQACTR = {"skip"}; 
A_GISVEC(A68_VC ,LJQACTR,KJQACTR,4)
static A68_163   MJQACTR = {"nil"}; 
A_GISVEC(A68_VC ,NJQACTR,MJQACTR,3)
static A68_118   OJQACTR = {"TRACER - Unknown nse constituent"}; 
A_GISVEC(A68_VC ,PJQACTR,OJQACTR,32)
static A68_186   RJQACTR = {" routineinfo: "}; 
A_GISVEC(A68_VC ,SJQACTR,RJQACTR,14)
static A68_163   YJQACTR = {" ( "}; 
static A68_172   ZJQACTR = {", .... )"}; 
A_GISVEC(A68_VC ,AKQACTR,YJQACTR,3)
A_GISVEC(A68_VC ,CKQACTR,ZJQACTR,8)
static A68_163   DKQACTR = {" ( "}; 
static A68_189   EKQACTR = {", no ops: "}; 
static A68_173   FKQACTR = {", param: "}; 
static A68_192   GKQACTR = {" )"}; 
A_GISVEC(A68_VC ,HKQACTR,DKQACTR,3)
A_GISVEC(A68_VC ,JKQACTR,EKQACTR,10)
A_GISVEC(A68_VC ,MKQACTR,FKQACTR,9)
A_GISVEC(A68_VC ,OKQACTR,GKQACTR,2)
static A68_196   PKQACTR = {"TRACER - Unknown EXTRA in value"}; 
A_GISVEC(A68_VC ,QKQACTR,PKQACTR,31)
static A68_192   RKQACTR = {" )"}; 
A_GISVEC(A68_VC ,SKQACTR,HIQACTR,2)
A_GISVEC(A68_VC ,UKQACTR,IIQACTR,2)
A_GISVEC(A68_VC ,VKQACTR,RKQACTR,2)
static A68_199   GLQACTR = {"VALUES - uvalue to cfragment: unknown constituent of union"}; 
A_GISVEC(A68_VC ,HLQACTR,GLQACTR,58)
static A68_202   LLQACTR = {"VALUES - join uvalue: no parameters"}; 
A_GISVEC(A68_VC ,MLQACTR,LLQACTR,35)
static A68_203   CMQACTR = {"VALUES - comma separate: no parameters"}; 
A_GISVEC(A68_VC ,DMQACTR,CMQACTR,38)
static A68_163   XNQACTR = {" = "}; 
A_GISVEC(A68_VC ,YNQACTR,XNQACTR,3)
static A68_192   DOQACTR = {" ;"}; 
A_GISVEC(A68_VC ,EOQACTR,DOQACTR,2)
static A68_190   LOQACTR = {"YIELD"}; 
A_GISVEC(A68_VC ,OOQACTR,LOQACTR,5)
typedef struct   /* env of non-global proc */
{
int dummy;
} QLQACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HMQACTR_generator;

A68_108 * JTPACTR_tree(A68_INT  Mode, A68_INT  Fn, A68_BITS  Param, A68_149  Operands);

A_STATIC A68_115 * STPACTR_assignment(A68_115 * QTPACTR_anonymous, A68_115  RTPACTR_anonymous);

A_STATIC A68_108 * VTPACTR_assignment(A68_108 * TTPACTR_anonymous, A68_108  UTPACTR_anonymous);

A_STATIC A68_109 * AUPACTR_assignment(A68_109 * YTPACTR_anonymous, A68_109  ZTPACTR_anonymous);

A_STATIC A68_BITS  QUPACTR_xor(A68_BITS  A, A68_BITS  B);

A68_BOOL  UUPACTR_hasattribute(A68_108 * Value, A68_BITS  A);

A68_BOOL  ZUPACTR_(A68_108 * V1, A68_108 * V2);

A68_BOOL  IVPACTR_(A68_108 * V1, A68_108 * V2);

A68_BOOL  LVPACTR_isconstant(A68_108 * Value);

A68_BOOL  QVPACTR_isconstant(A68_108 * Value, A68_LBITS  Const);

A_STATIC A68_BOOL  VVPACTR_isroutineinfo(A68_108 * Value);

A_STATIC A68_BOOL  ZVPACTR_isatomic(A68_108 * Value);

A68_BOOL  EWPACTR_isident(A68_108 * Value);

A68_BOOL  IWPACTR_istemp(A68_108 * Value);

A68_BOOL  MWPACTR_iscfragment(A68_108 * Value);

A68_BOOL  QWPACTR_isskip(A68_108 * Value);

A68_BOOL  VWPACTR_isaname(A68_108 * Op);

A68_LBITS  ZWPACTR_getconstant(A68_108 * Value);

A_STATIC A68_VOID  HXPACTR_refstring(A68_INT  Level, A68_VC  *ReturnedValue);

A68_INT  PXPACTR_idreflevel(A68_INT  Mode, A68_INT  Ctype);

A68_VOID  XXPACTR_nlmacro(A68_VC  Cf, A68_VC  *ReturnedValue);

A68_VOID  GYPACTR_getcfragment(A68_108 * Value, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KYPACTR_makeprocvalue(A68_VC  Name, A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  NCQACTR_bracketcfragment(A68_108 * Value, A68_VC  *ReturnedValue);

A68_108 * UCQACTR_indexvaluelist(A68_115 * List, A68_INT  Index);

A68_115 * ADQACTR_reversevaluelist(A68_115 * List);

A68_INT  HDQACTR_operandsof(A68_114  Treeoper);

A68_INT  LDQACTR_paramof(A68_114  Treeoper);

A68_108 * PDQACTR_operand(A68_108 * Oper, A68_INT  Rand);

A68_VOID  YDQACTR_derefvalue(A68_108 * Value);

A68_VOID  DEQACTR_enrefvalue(A68_108 * Value);

A_STATIC A68_VOID  GEQACTR_fnname(A68_INT  Fn, A68_VC  *ReturnedValue);

A68_VOID  XHQACTR_valuestring(A68_108 * Value, A68_BOOL  Brief, A68_VC  *ReturnedValue);

A68_VOID  XKQACTR_uvaluetocfragment(A68_197  U, A68_VC  *ReturnedValue);

A68_VOID  KLQACTR_joinuvalue(A68_200  Items, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PLQACTR_generator(A68_BOOL  NLQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BMQACTR_commaseparate(A68_200  Items, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GMQACTR_generator(A68_BOOL  EMQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  YMQACTR_commalist(A68_200  Items, A68_VC  *ReturnedValue);

A68_VOID  ENQACTR_usemacro(A68_VC  Macro, A68_200  Arguments, A68_VC  *ReturnedValue);

A68_VOID  JNQACTR_emitline(A68_200  Uv);

A68_VOID  SNQACTR_yieldtemporary(A68_VC  Comment, A68_INT  Mode, A68_200  Op, A68_112  *ReturnedValue);

A68_108 * KOQACTR_yield(A68_108 * Op);

A68_108 * VOQACTR_yield(A68_VC  Comment, A68_108 * Op);

A_STATIC A68_109 * AUPACTR_assignment(A68_109 * YTPACTR_anonymous, A68_109  ZTPACTR_anonymous)
{ 
A68_109  BUPACTR;  /* united object - for case conformity */
A68_VC  CUPACTR_anonymous;
A68_VC  DUPACTR;  /* OPERATORS - copy to flex */
A68_154 * EUPACTR;  /* YIELD */
A68_109 * FUPACTR;  /* clause result */
{ 
(*YTPACTR_anonymous) = ZTPACTR_anonymous;
BUPACTR = ZTPACTR_anonymous ;
switch ( BUPACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
CUPACTR_anonymous = (BUPACTR.data.mode6);
EUPACTR = &(YTPACTR_anonymous-> data.mode6) ;
(*EUPACTR) = A_VCOPY(CUPACTR_anonymous,DUPACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
FUPACTR = YTPACTR_anonymous;
} 
return( FUPACTR );
} 
#undef NL

A_STATIC A68_108 * VTPACTR_assignment(A68_108 * TTPACTR_anonymous, A68_108  UTPACTR_anonymous)
{ 
A68_INT * WTPACTR;  /* YIELD */
A68_BITS * XTPACTR;  /* YIELD */
A68_108 * GUPACTR;  /* clause result */
{ 
WTPACTR = (&(TTPACTR_anonymous->Mode)) ;
(*WTPACTR) = UTPACTR_anonymous.Mode;
XTPACTR = (&(TTPACTR_anonymous->Info)) ;
(*XTPACTR) = UTPACTR_anonymous.Info;
AUPACTR_assignment((&(TTPACTR_anonymous->Extra)), UTPACTR_anonymous.Extra);
GUPACTR = TTPACTR_anonymous;
} 
return( GUPACTR );
} 
#undef NL

A_STATIC A68_115 * STPACTR_assignment(A68_115 * QTPACTR_anonymous, A68_115  RTPACTR_anonymous)
{ 
A68_115 ** HUPACTR;  /* YIELD */
A68_115 * IUPACTR;  /* clause result */
{ 
VTPACTR_assignment((&(QTPACTR_anonymous->Value)), RTPACTR_anonymous.Value);
HUPACTR = (&(QTPACTR_anonymous->Rest)) ;
(*HUPACTR) = RTPACTR_anonymous.Rest;
IUPACTR = QTPACTR_anonymous;
} 
return( IUPACTR );
} 
#undef NL

A_STATIC A68_VOID  KYPACTR_makeprocvalue(A68_VC  Name, A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_112  NYPACTR;  /* avoid structure result */
A68_VC  OYPACTR;  /* OPERATORS - istruct -> vector */
A68_56  PYPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  QYPACTR_tempname;
A68_170  RYPACTR;  /* collateral clause result */
A68_93  SYPACTR;  /* OPERATORS - mode -> union mode */
A68_93  VYPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WYPACTR;  /* YIELD */
A68_93  XYPACTR;  /* OPERATORS - mode -> union mode */
A68_93  YYPACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZYPACTR;  /* YIELD */
A68_93  AZPACTR;  /* OPERATORS - mode -> union mode */
A68_93  BZPACTR;  /* OPERATORS - mode -> union mode */
A68_93  EZPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FZPACTR;  /* YIELD */
A68_93  GZPACTR;  /* OPERATORS - mode -> union mode */
A68_92  HZPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  IZPACTR;  /* clause result */
A_PROC_ENTRY(makeprocvalue);
 /* line 189: */
 /* line 190: */
{ 
LKOACTR_declarectemporary( Mode, MYPACTR, &NYPACTR );
PYPACTR = NYPACTR.Name ;
QYPACTR_tempname = A_HISVEC(OYPACTR,PYPACTR,7,A68_CHAR );
 /* line 191: */
 /* line 192: */
RYPACTR.data[0] = A_UNITE(SYPACTR,mode2,2,QYPACTR_tempname);
WYPACTR = UYPACTR ;
RYPACTR.data[1] = A_UNITE(VYPACTR,mode2,2,WYPACTR);
RYPACTR.data[2] = A_UNITE(XYPACTR,mode2,2,Name);
ZYPACTR = ';' ;
RYPACTR.data[3] = A_UNITE(YYPACTR,mode1,1,ZYPACTR);
 /* line 193: */
RYPACTR.data[4] = A_UNITE(AZPACTR,mode4,4,EIAACTR_cnewline);
RYPACTR.data[5] = A_UNITE(BZPACTR,mode2,2,QYPACTR_tempname);
 /* line 194: */
FZPACTR = DZPACTR ;
RYPACTR.data[6] = A_UNITE(EZPACTR,mode2,2,FZPACTR);
RYPACTR.data[7] = A_UNITE(GZPACTR,mode4,4,EIAACTR_cnewline);
 /* line 195: */
MDMACTR_writecstream(A_HISVEC(HZPACTR,RYPACTR,8,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
 /* line 196: */
 /* line 197: */
IZPACTR = QYPACTR_tempname;
} 
A_PROC_EXIT(makeprocvalue);
*ReturnedValue = (IZPACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PLQACTR_generator(A68_BOOL  NLQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QLQACTR_generator *)NonLocals)->x)
{ 
A68_VC  RLQACTR;  /* clause result */
A68_VC  SLQACTR;  /* OPERATORS - dynamic generator */
{ 
SLQACTR.upb = 0 ;
( NLQACTR_anonymous? A_VLOC(A68_CHAR ,SLQACTR): A_VHEAP(A68_CHAR ,SLQACTR) );
RLQACTR = SLQACTR;
} 
*ReturnedValue = (RLQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GMQACTR_generator(A68_BOOL  EMQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HMQACTR_generator *)NonLocals)->x)
{ 
A68_VC  IMQACTR;  /* clause result */
A68_VC  JMQACTR;  /* OPERATORS - dynamic generator */
{ 
JMQACTR.upb = 0 ;
( EMQACTR_anonymous? A_VLOC(A68_CHAR ,JMQACTR): A_VHEAP(A68_CHAR ,JMQACTR) );
IMQACTR = JMQACTR;
} 
*ReturnedValue = (IMQACTR);
return;
} 
#undef NL

A68_108 * JTPACTR_tree(A68_INT  Mode, A68_INT  Fn, A68_BITS  Param, A68_149  Operands)
{ 
A68_115 * KTPACTR_operandlist;
A68_INT  LTPACTR_upboperands;
A68_108 * MTPACTR_operand;
A68_108 ** NTPACTR;  /* forall control - []x */
A68_INT  OTPACTR;  /* forall loop counter */
A68_115  PTPACTR;  /* collateral clause result */
A68_108  JUPACTR;  /* collateral clause result */
A68_114  KUPACTR;  /* collateral clause result */
A68_BITS  LUPACTR;  /* SHL */
A68_109  MUPACTR;  /* OPERATORS - mode -> union mode */
A68_108 * NUPACTR;  /* clause result */
A_PROC_ENTRY(tree);
 /* line 54: */
 /* line 55: */
{ 
KTPACTR_operandlist = (A68_115 *)A68_NIL;
 /* line 56: */
LTPACTR_upboperands = Operands.upb;
 /* line 58: */
 /* line 59: */
OTPACTR = Operands.upb -1;
NTPACTR = Operands.data;
for (;OTPACTR-- >= 0;
(NTPACTR++
) )
{
MTPACTR_operand = *NTPACTR;
PTPACTR.Value = (*MTPACTR_operand);
 /* line 60: */
PTPACTR.Rest = KTPACTR_operandlist;
KTPACTR_operandlist = STPACTR_assignment(A_HEAP(A68_115 ), PTPACTR);
}
 /* line 62: */
 /* line 63: */
 /* line 64: */
JUPACTR.Mode = Mode;
 /* line 66: */
JUPACTR.Info = PKJACTR_defaultinfo;
 /* line 67: */
KUPACTR.Fn = Fn;
 /* line 69: */
LUPACTR = (A68_BITS )LTPACTR_upboperands ;
KUPACTR.Param = (A68_INT )(A68_BITS )(A_SHL(LUPACTR,WGAACTR_operandsshift)|(A68_BITS )(Param&ZGAACTR_parammask));
 /* line 70: */
KUPACTR.Operands = KTPACTR_operandlist;
 /* line 71: */
JUPACTR.Extra = A_UNITE(MUPACTR,mode9,9,KUPACTR);
NUPACTR = VTPACTR_assignment(A_HEAP(A68_108 ), JUPACTR);
} 
A_PROC_EXIT(tree);
return( NUPACTR );
} 
#undef NL

A_STATIC A68_BITS  QUPACTR_xor(A68_BITS  A, A68_BITS  B)
{ 
A68_BITS  RUPACTR;  /* clause result */
A_PROC_ENTRY(xor);
RUPACTR = (A68_BITS )((A68_BITS )(A|B)&~(A68_BITS )(A&B));
A_PROC_EXIT(xor);
return( RUPACTR );
} 
#undef NL

A68_BOOL  UUPACTR_hasattribute(A68_108 * Value, A68_BITS  A)
{ 
A68_BOOL  VUPACTR;  /* clause result */
A68_BITS  WUPACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(hasattribute);
 /* line 81: */
WUPACTR = (*(&(Value->Info))) ;
VUPACTR = A_LB_GE(WUPACTR,A);
A_PROC_EXIT(hasattribute);
return( VUPACTR );
} 
#undef NL

A68_BOOL  ZUPACTR_(A68_108 * V1, A68_108 * V2)
{ 
A68_109  AVPACTR;  /* united object - for case conformity */
A68_109  BVPACTR;  /* united object - for case conformity */
A68_BOOL  CVPACTR;  /* clause result */
A68_LBITS  DVPACTR_b1;
A68_109  EVPACTR;  /* united object - for case conformity */
A68_LBITS  FVPACTR_b2;
A_PROC_ENTRY(=);
 /* line 90: */
 /* line 91: */
AVPACTR = (*(&(V1->Extra))) ;
switch ( AVPACTR.mode )
{ 
case 3: /* VOID */
 /* line 92: */
BVPACTR = (*(&(V2->Extra))) ;
switch ( BVPACTR.mode )
{ 
case 3: /* VOID */
 /* line 93: */
CVPACTR = ((*(&(V1->Mode)))==(*(&(V2->Mode))));
break;
default: 
 /* line 94: */
 /* line 95: */
CVPACTR = A68_FALSE;
break;
} 
break;
case 1: /* LONG BITS */
DVPACTR_b1 = (AVPACTR.data.mode1);
EVPACTR = (*(&(V2->Extra))) ;
switch ( EVPACTR.mode )
{ 
case 1: /* LONG BITS */
FVPACTR_b2 = (EVPACTR.data.mode1);
CVPACTR = (DVPACTR_b1==FVPACTR_b2);
break;
default: 
 /* line 96: */
CVPACTR = A68_FALSE;
break;
} 
break;
default: 
 /* line 97: */
CVPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(=);
return( CVPACTR );
} 
#undef NL

A68_BOOL  IVPACTR_(A68_108 * V1, A68_108 * V2)
{ 
A68_BOOL  JVPACTR;  /* clause result */
A_PROC_ENTRY(/=);
JVPACTR = !ZUPACTR_(V1, V2);
A_PROC_EXIT(/=);
return( JVPACTR );
} 
#undef NL

A68_BOOL  LVPACTR_isconstant(A68_108 * Value)
{ 
A68_109  MVPACTR;  /* united object - for case conformity */
A68_BOOL  NVPACTR;  /* clause result */
A_PROC_ENTRY(isconstant);
 /* line 106: */
MVPACTR = (*(&(Value->Extra))) ;
switch ( MVPACTR.mode )
{ 
case 1: /* LONG BITS */
NVPACTR = A68_TRUE;
break;
case 6: /* VECTOR [] CHAR */
NVPACTR = UUPACTR_hasattribute(Value, QKJACTR_constant);
break;
default: 
NVPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isconstant);
return( NVPACTR );
} 
#undef NL

A68_BOOL  QVPACTR_isconstant(A68_108 * Value, A68_LBITS  Const)
{ 
A68_109  RVPACTR;  /* united object - for case conformity */
A68_LBITS  SVPACTR_b;
A68_BOOL  TVPACTR;  /* clause result */
A_PROC_ENTRY(isconstant);
 /* line 109: */
RVPACTR = (*(&(Value->Extra))) ;
switch ( RVPACTR.mode )
{ 
case 1: /* LONG BITS */
SVPACTR_b = (RVPACTR.data.mode1);
TVPACTR = (SVPACTR_b==Const);
break;
default: 
TVPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isconstant);
return( TVPACTR );
} 
#undef NL

A_STATIC A68_BOOL  VVPACTR_isroutineinfo(A68_108 * Value)
{ 
A68_109  WVPACTR;  /* united object - for case conformity */
A68_BOOL  XVPACTR;  /* clause result */
A_PROC_ENTRY(isroutineinfo);
 /* line 112: */
WVPACTR = (*(&(Value->Extra))) ;
switch ( WVPACTR.mode )
{ 
case 2: /* STRUCT(INT)  */
XVPACTR = A68_TRUE;
break;
default: 
XVPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isroutineinfo);
return( XVPACTR );
} 
#undef NL

A_STATIC A68_BOOL  ZVPACTR_isatomic(A68_108 * Value)
{ 
A68_109  AWPACTR;  /* united object - for case conformity */
A68_BOOL  BWPACTR;  /* clause result */
A68_BOOL  CWPACTR;  /* optbool result */
A_PROC_ENTRY(isatomic);
 /* line 115: */
 /* line 116: */
AWPACTR = (*(&(Value->Extra))) ;
switch ( AWPACTR.mode )
{ 
case 1: /* LONG BITS */
 /* line 117: */
BWPACTR = A68_TRUE;
break;
case 5: /* STRUCT(MODE56,INT)  */
 /* line 118: */
BWPACTR = A68_TRUE;
break;
case 4: /* STRUCT(INT)  */
 /* line 119: */
BWPACTR = A68_TRUE;
break;
case 6: /* VECTOR [] CHAR */
CWPACTR = UUPACTR_hasattribute(Value, QKJACTR_constant);
if ( ! CWPACTR )
{ /* line 120: */
CWPACTR = UUPACTR_hasattribute(Value, RKJACTR_atomic);
}
BWPACTR = CWPACTR;
break;
default: 
 /* line 121: */
BWPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isatomic);
return( BWPACTR );
} 
#undef NL

A68_BOOL  EWPACTR_isident(A68_108 * Value)
{ 
A68_109  FWPACTR;  /* united object - for case conformity */
A68_BOOL  GWPACTR;  /* clause result */
A_PROC_ENTRY(isident);
 /* line 127: */
FWPACTR = (*(&(Value->Extra))) ;
switch ( FWPACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
GWPACTR = A68_TRUE;
break;
default: 
GWPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isident);
return( GWPACTR );
} 
#undef NL

A68_BOOL  IWPACTR_istemp(A68_108 * Value)
{ 
A68_109  JWPACTR;  /* united object - for case conformity */
A68_BOOL  KWPACTR;  /* clause result */
A_PROC_ENTRY(istemp);
 /* line 130: */
JWPACTR = (*(&(Value->Extra))) ;
switch ( JWPACTR.mode )
{ 
case 5: /* STRUCT(MODE56,INT)  */
KWPACTR = A68_TRUE;
break;
default: 
KWPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(istemp);
return( KWPACTR );
} 
#undef NL

A68_BOOL  MWPACTR_iscfragment(A68_108 * Value)
{ 
A68_109  NWPACTR;  /* united object - for case conformity */
A68_BOOL  OWPACTR;  /* clause result */
A_PROC_ENTRY(iscfragment);
 /* line 133: */
NWPACTR = (*(&(Value->Extra))) ;
switch ( NWPACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
OWPACTR = A68_TRUE;
break;
default: 
OWPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(iscfragment);
return( OWPACTR );
} 
#undef NL

A68_BOOL  QWPACTR_isskip(A68_108 * Value)
{ 
A68_109  RWPACTR;  /* united object - for case conformity */
A68_113  SWPACTR_tn;
A68_BOOL  TWPACTR;  /* clause result */
A_PROC_ENTRY(isskip);
 /* line 136: */
RWPACTR = (*(&(Value->Extra))) ;
switch ( RWPACTR.mode )
{ 
case 8: /* STRUCT(INT)  */
SWPACTR_tn = (RWPACTR.data.mode8);
TWPACTR = (SWPACTR_tn.Nse==2);
break;
default: 
TWPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isskip);
return( TWPACTR );
} 
#undef NL

A68_BOOL  VWPACTR_isaname(A68_108 * Op)
{ 
A68_109  WWPACTR;  /* united object - for case conformity */
A68_BOOL  XWPACTR;  /* clause result */
A_PROC_ENTRY(isaname);
 /* line 139: */
 /* line 140: */
WWPACTR = (*(&(Op->Extra))) ;
switch ( WWPACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
 /* line 141: */
XWPACTR = A68_TRUE;
break;
case 5: /* STRUCT(MODE56,INT)  */
 /* line 142: */
XWPACTR = A68_TRUE;
break;
default: 
 /* line 143: */
XWPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isaname);
return( XWPACTR );
} 
#undef NL

A68_LBITS  ZWPACTR_getconstant(A68_108 * Value)
{ 
A68_109  AXPACTR;  /* united object - for case conformity */
A68_LBITS  BXPACTR_b;
A68_LBITS  CXPACTR;  /* clause result */
A68_LBITS  FXPACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(getconstant);
 /* line 146: */
 /* line 147: */
AXPACTR = (*(&(Value->Extra))) ;
switch ( AXPACTR.mode )
{ 
case 1: /* LONG BITS */
BXPACTR_b = (AXPACTR.data.mode1);
 /* line 148: */
CXPACTR = BXPACTR_b;
break;
default: 
WXIACTR_assert(EXPACTR, A68_FALSE);
 /* line 149: */
CXPACTR = FXPACTR;
break;
} 
A_PROC_EXIT(getconstant);
return( CXPACTR );
} 
#undef NL

A_STATIC A68_VOID  HXPACTR_refstring(A68_INT  Level, A68_VC  *ReturnedValue)
{ 
A68_BOOL  JXPACTR;  /* optbool result */
A68_CHAR  LXPACTR;  /* clause result */
A68_VC  MXPACTR;  /* clause result */
A_PROC_ENTRY(refstring);
 /* line 161: */
 /* line 162: */
{ 
JXPACTR = (Level>=(-1));
if ( JXPACTR )
{JXPACTR = (Level<32);
}
WXIACTR_assert(KXPACTR, JXPACTR);
 /* line 163: */
if ( (Level>0) )
{ 
LXPACTR = '*';
} 
else
{ 
 /* line 164: */
LXPACTR = '&';
} 
MXPACTR = A_C_TIMES(LXPACTR,A_ABS(Level));
} 
A_PROC_EXIT(refstring);
*ReturnedValue = (MXPACTR);
return;
} 
#undef NL

A68_INT  PXPACTR_idreflevel(A68_INT  Mode, A68_INT  Ctype)
{ 
A68_BOOL  QXPACTR_firmarray;
A68_INT  RXPACTR_diff;
A68_BOOL  TXPACTR;  /* optbool result */
A68_INT  VXPACTR;  /* clause result */
A_PROC_ENTRY(idreflevel);
 /* line 167: */
 /* line 168: */
{ 
QXPACTR_firmarray = FRMACTR_isfirmarray(Mode);
 /* line 169: */
 /* line 170: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
 /* line 175: */
RXPACTR_diff = (((Ctype/VFAACTR_refmark)+(QXPACTR_firmarray))-((Mode/VFAACTR_refmark)+((QXPACTR_firmarray&!RSMACTR_hasrefs(Mode)))));
 /* line 176: */
 /* line 177: */
TXPACTR = (RXPACTR_diff>=0);
if ( ! TXPACTR )
{TXPACTR = (RXPACTR_diff==(-1));
}
WXIACTR_assert(UXPACTR, TXPACTR);
 /* line 178: */
 /* line 179: */
VXPACTR = RXPACTR_diff;
} 
A_PROC_EXIT(idreflevel);
return( VXPACTR );
} 
#undef NL

A68_VOID  XXPACTR_nlmacro(A68_VC  Cf, A68_VC  *ReturnedValue)
{ 
A68_164  YXPACTR;  /* collateral clause result */
A68_VC  BYPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CYPACTR;  /* clause result */
A68_36  DYPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EYPACTR;  /* avoid structure result */
A_PROC_ENTRY(nlmacro);
YXPACTR.data[0] = AYPACTR;
YXPACTR.data[1] = Cf;
YXPACTR.data[2] = A_HVEC(BYPACTR,')',A68_CHAR );
JDAAOSF_concat( A_HISVEC(DYPACTR,YXPACTR,3,A68_VC ), &EYPACTR );
CYPACTR = EYPACTR;
A_PROC_EXIT(nlmacro);
*ReturnedValue = (CYPACTR);
return;
} 
#undef NL

A68_VOID  GYPACTR_getcfragment(A68_108 * Value, A68_VC  *ReturnedValue)
{ 
A68_109  JZPACTR;  /* united object - for case conformity */
A68_VC  KZPACTR_c;
A68_VC  LZPACTR;  /* clause result */
A68_112  MZPACTR_t;
A68_INT  NZPACTR_vmode;
A68_INT  OZPACTR;  /* clause result */
A68_INT  PZPACTR_rmode;
A68_INT  QZPACTR_diff;
A68_VC  TZPACTR;  /* avoid structure result */
A68_VC  UZPACTR;  /* OPERATORS - istruct -> vector */
A68_56  VZPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WZPACTR_result;
A68_VC  XZPACTR;  /* avoid structure result */
A68_LBITS  YZPACTR_b;
A68_VC  ZZPACTR;  /* avoid structure result */
A68_113  AAQACTR_nihil;
A68_110  JAQACTR_r;
A68_INT  KAQACTR_rd;
A68_BOOL  LAQACTR;  /* clause result */
A68_95 * MAQACTR_rdinfo;
A68_BITS  NAQACTR;  /* ADICOPS - >= */
A68_VC  OAQACTR;  /* avoid structure result */
A68_VC  PAQACTR;  /* avoid structure result */
A68_VC  QAQACTR;  /* avoid structure result */
A68_VC  RAQACTR;  /* avoid structure result */
A68_VC  SAQACTR;  /* avoid structure result */
A68_111  VAQACTR_i;
A68_BOOL  WAQACTR_bracketsrequired;
A68_BOOL  XAQACTR_nonlocal;
A68_INT  YAQACTR_id;
A68_BOOL  ABQACTR;  /* optbool result */
A68_BOOL  BBQACTR;  /* optbool result */
A68_94 * DBQACTR_idinfo;
A68_BITS  EBQACTR;  /* ADICOPS - >= */
A68_BOOL  FBQACTR_isgproc;
A68_VC  IBQACTR;  /* clause result */
A68_VC  JBQACTR;  /* avoid structure result */
A68_VC  KBQACTR;  /* avoid structure result */
A68_INT  LBQACTR;  /* clause result */
A68_INT  MBQACTR_reqda68mode;
A68_INT  NBQACTR;  /* clause result */
A68_INT  OBQACTR_reqdcmode;
A68_INT  PBQACTR_diff;
A68_VC  QBQACTR;  /* avoid structure result */
A68_VC  RBQACTR;  /* clause result */
A68_VC  SBQACTR;  /* avoid structure result */
A68_VC  TBQACTR;  /* avoid structure result */
A68_VC  WBQACTR;  /* avoid structure result */
A68_VC  XBQACTR_body;
A68_VC  YBQACTR;  /* avoid structure result */
A68_57  ZBQACTR_label;
A68_INT  ACQACTR_l;
A68_VC  DCQACTR;  /* avoid structure result */
A68_61  ECQACTR;  /* avoid structure result */
A68_VC  FCQACTR;  /* avoid structure result */
A68_VC  GCQACTR;  /* avoid structure result */
A68_VC  HCQACTR;  /* avoid structure result */
A68_VC  ICQACTR;  /* avoid structure result */
A68_VC  LCQACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(getcfragment);
 /* line 187: */
 /* line 188: */
{ 
 /* line 199: */
 /* line 201: */
JZPACTR = (*(&(Value->Extra))) ;
switch ( JZPACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
KZPACTR_c = (JZPACTR.data.mode6);
 /* line 203: */
LZPACTR = KZPACTR_c;
break;
case 5: /* STRUCT(MODE56,INT)  */
MZPACTR_t = (JZPACTR.data.mode5);
 /* line 204: */
{ 
NZPACTR_vmode = (*(&(Value->Mode)));
 /* line 205: */
 /* line 206: */
 /* line 207: */
if ( UUPACTR_hasattribute(Value, VKJACTR_lvalue) )
{ 
 /* line 208: */
 /* line 209: */
OZPACTR = BTMACTR_derefmode(NZPACTR_vmode);
} 
else
{ 
OZPACTR = NZPACTR_vmode;
} 
PZPACTR_rmode = OZPACTR;
 /* line 210: */
QZPACTR_diff = PXPACTR_idreflevel(PZPACTR_rmode, MZPACTR_t.Mode);
 /* line 211: */
 /* line 212: */
WXIACTR_assert(SZPACTR, (QZPACTR_diff>=0));
 /* line 213: */
HXPACTR_refstring( QZPACTR_diff, &TZPACTR );
VZPACTR = MZPACTR_t.Name ;
WZPACTR_result = A_VC_PLUS(TZPACTR,A_HISVEC(UZPACTR,VZPACTR,7,A68_CHAR ));
 /* line 214: */
if ( (QZPACTR_diff>0) )
{ 
JIAACTR_bracket( WZPACTR_result, &XZPACTR );
LZPACTR = XZPACTR;
} 
else
{ 
 /* line 215: */
 /* line 217: */
LZPACTR = WZPACTR_result;
} 
} 
break;
case 1: /* LONG BITS */
YZPACTR_b = (JZPACTR.data.mode1);
 /* line 219: */
JPAAOSF_lwhole( (A68_LINT )YZPACTR_b, 0, &ZZPACTR );
LZPACTR = ZZPACTR;
break;
case 8: /* STRUCT(INT)  */
AAQACTR_nihil = (JZPACTR.data.mode8);
 /* line 220: */
 /* line 221: */
switch ( AAQACTR_nihil.Nse )
{ 
case 1: 
LZPACTR = CAQACTR;
break;
case 2: 
 /* line 222: */
LZPACTR = EAQACTR;
break;
case 3: 
 /* line 223: */
LZPACTR = GAQACTR;
break;
default: 
 /* line 225: */
LZPACTR = IAQACTR;
break;
} 
break;
case 2: /* STRUCT(INT)  */
JAQACTR_r = (JZPACTR.data.mode2);
 /* line 226: */
{ 
{ 
KAQACTR_rd = JAQACTR_r.Rdenno;
 /* line 227: */
 /* line 228: */
 /* line 229: */
 /* line 230: */
LAQACTR = ((KAQACTR_rd<=KAAACTR_maxrdno)&(KAQACTR_rd>=JAAACTR_minrdno));
if ( LAQACTR )
{ 
MAQACTR_rdinfo = (&A_R1INDEX(XPKACTR_rds,KAQACTR_rd));
 /* line 231: */
 /* line 232: */
NAQACTR = (*(&(MAQACTR_rdinfo->Flags))) ;
if ( A_LB_GE(NAQACTR,RQKACTR_rdglobalflag) )
{ 
 /* line 233: */
UTKACTR_idfullname( KAQACTR_rd, &OAQACTR );
KYPACTR_makeprocvalue( OAQACTR, (*(&(MAQACTR_rdinfo->Mode))), &PAQACTR );
LZPACTR = PAQACTR;
} 
else
{ 
 /* line 234: */
if ( UUPACTR_hasattribute(Value, TKJACTR_nonloc) )
{ 
 /* line 235: */
UTKACTR_idfullname( KAQACTR_rd, &QAQACTR );
XXPACTR_nlmacro( QAQACTR, &RAQACTR );
LZPACTR = RAQACTR;
} 
else
{ 
 /* line 236: */
 /* line 237: */
 /* line 238: */
UTKACTR_idfullname( KAQACTR_rd, &SAQACTR );
LZPACTR = SAQACTR;
} 
} 
} 
else
{ 
 /* line 241: */
LZPACTR = UAQACTR;
} 
} 
} 
break;
case 4: /* STRUCT(INT)  */
VAQACTR_i = (JZPACTR.data.mode4);
 /* line 242: */
 /* line 243: */
{ 
WAQACTR_bracketsrequired = A68_FALSE;
 /* line 244: */
XAQACTR_nonlocal = UUPACTR_hasattribute(Value, TKJACTR_nonloc);
 /* line 246: */
YAQACTR_id = VAQACTR_i.Idno;
 /* line 247: */
 /* line 248: */
 /* line 239: */
ABQACTR = (YAQACTR_id<=IAAACTR_maxidno);
if ( ! ABQACTR )
{BBQACTR = (YAQACTR_id>=LAAACTR_minlibid);
if ( BBQACTR )
{BBQACTR = (YAQACTR_id<=MAAACTR_maxlibid);
}
ABQACTR = BBQACTR;
}
WXIACTR_assert(CBQACTR, ABQACTR);
 /* line 249: */
DBQACTR_idinfo = YQKACTR_get_idinfo(YAQACTR_id);
 /* line 250: */
EBQACTR = (*(&(DBQACTR_idinfo->Flags))) ;
FBQACTR_isgproc = A_LB_GE(EBQACTR,JQKACTR_idgprocflag);
 /* line 251: */
 /* line 252: */
 /* line 253: */
 /* line 254: */
if ( FBQACTR_isgproc )
{ 
WXIACTR_assert(HBQACTR, !XAQACTR_nonlocal);
 /* line 255: */
 /* line 256: */
 /* line 262: */
UTKACTR_idfullname( YAQACTR_id, &JBQACTR );
KYPACTR_makeprocvalue( JBQACTR, (*(&(DBQACTR_idinfo->Mode))), &KBQACTR );
IBQACTR = KBQACTR;
} 
else
{ 
 /* line 263: */
if ( UUPACTR_hasattribute(Value, VKJACTR_lvalue) )
{ 
 /* line 264: */
 /* line 265: */
LBQACTR = BTMACTR_derefmode((*(&(Value->Mode))));
} 
else
{ 
LBQACTR = (*(&(Value->Mode)));
} 
MBQACTR_reqda68mode = LBQACTR;
 /* line 266: */
 /* line 267: */
 /* line 268: */
if ( XAQACTR_nonlocal )
{ 
 /* line 269: */
NBQACTR = TKNACTR_givecvariabletype((*(&(YQKACTR_get_idinfo(YAQACTR_id)->Mode))), A68_TRUE);
} 
else
{ 
 /* line 270: */
NBQACTR = (*(&(YQKACTR_get_idinfo(YAQACTR_id)->Cvariabletype)));
} 
OBQACTR_reqdcmode = NBQACTR;
 /* line 271: */
PBQACTR_diff = PXPACTR_idreflevel(MBQACTR_reqda68mode, OBQACTR_reqdcmode);
 /* line 272: */
WAQACTR_bracketsrequired = (PBQACTR_diff!=0);
 /* line 273: */
 /* line 274: */
 /* line 276: */
HXPACTR_refstring( PBQACTR_diff, &QBQACTR );
IBQACTR = QBQACTR;
} 
if ( XAQACTR_nonlocal )
{ 
 /* line 277: */
 /* line 278: */
UTKACTR_idfullname( VAQACTR_i.Idno, &SBQACTR );
XXPACTR_nlmacro( SBQACTR, &TBQACTR );
RBQACTR = TBQACTR;
} 
else
{ 
 /* line 279: */
if ( FBQACTR_isgproc )
{ 
RBQACTR = VBQACTR;
} 
else
{ 
 /* line 280: */
UTKACTR_idfullname( VAQACTR_i.Idno, &WBQACTR );
RBQACTR = WBQACTR;
} 
} 
XBQACTR_body = A_VC_PLUS(IBQACTR,RBQACTR);
 /* line 281: */
 /* line 282: */
if ( WAQACTR_bracketsrequired )
{ 
 /* line 283: */
 /* line 284: */
JIAACTR_bracket( XBQACTR_body, &YBQACTR );
LZPACTR = YBQACTR;
} 
else
{ 
 /* line 285: */
 /* line 287: */
LZPACTR = XBQACTR_body;
} 
} 
break;
case 7: /* STRUCT(INT)  */
ZBQACTR_label = (JZPACTR.data.mode7);
 /* line 288: */
 /* line 289: */
{ 
ACQACTR_l = ZBQACTR_label.Labno;
 /* line 290: */
 /* line 291: */
 /* line 292: */
ROAAOSF_whole( ACQACTR_l, 0, &DCQACTR );
WXIACTR_assert(A_VC_PLUS(CCQACTR,DCQACTR), NTKACTR_labelisdeclared(ACQACTR_l));
 /* line 293: */
 /* line 294: */
RTKACTR_labelenviron( ACQACTR_l, &ECQACTR );
if ( (VRLACTR_currentlevel()==ECQACTR.Level) )
{ 
 /* line 295: */
WSKACTR_labelfullname( ACQACTR_l, &FCQACTR );
LZPACTR = FCQACTR;
} 
else
{ 
 /* line 296: */
if ( UUPACTR_hasattribute(Value, TKJACTR_nonloc) )
{ 
 /* line 297: */
DTKACTR_labelbuffername( ACQACTR_l, &GCQACTR );
XXPACTR_nlmacro( GCQACTR, &HCQACTR );
LZPACTR = HCQACTR;
} 
else
{ 
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 302: */
 /* line 303: */
DTKACTR_labelbuffername( ACQACTR_l, &ICQACTR );
LZPACTR = ICQACTR;
} 
} 
} 
break;
default: 
WXIACTR_assert(KCQACTR, A68_FALSE);
 /* line 304: */
 /* line 305: */
LZPACTR = LCQACTR;
break;
} 
} 
A_PROC_EXIT(getcfragment);
*ReturnedValue = (LZPACTR);
return;
} 
#undef NL

A68_VOID  NCQACTR_bracketcfragment(A68_108 * Value, A68_VC  *ReturnedValue)
{ 
A68_VC  OCQACTR;  /* clause result */
A68_VC  PCQACTR;  /* avoid structure result */
A68_VC  QCQACTR;  /* avoid structure result */
A68_VC  RCQACTR;  /* avoid structure result */
A_PROC_ENTRY(bracketcfragment);
 /* line 308: */
 /* line 309: */
{ 
 /* line 310: */
 /* line 311: */
if ( ZVPACTR_isatomic(Value) )
{ 
GYPACTR_getcfragment( Value, &PCQACTR );
OCQACTR = PCQACTR;
} 
else
{ 
 /* line 312: */
 /* line 313: */
GYPACTR_getcfragment( Value, &QCQACTR );
JIAACTR_bracket( QCQACTR, &RCQACTR );
OCQACTR = RCQACTR;
} 
} 
A_PROC_EXIT(bracketcfragment);
*ReturnedValue = (OCQACTR);
return;
} 
#undef NL

A68_108 * UCQACTR_indexvaluelist(A68_115 * List, A68_INT  Index)
{ 
A68_115 * VCQACTR_position;
A68_INT  WCQACTR;  /* to part of loop */
A68_INT  XCQACTR;  /* loop control */
A68_108 * YCQACTR;  /* clause result */
A_PROC_ENTRY(indexvaluelist);
 /* line 321: */
 /* line 322: */
{ 
VCQACTR_position = List;
 /* line 323: */
WCQACTR = (Index-1);
for ( XCQACTR = 1;
XCQACTR <= WCQACTR;
XCQACTR += 1 )
{ 
VCQACTR_position = (*(&(VCQACTR_position->Rest)));
}
 /* line 324: */
 /* line 325: */
YCQACTR = (&(VCQACTR_position->Value));
} 
A_PROC_EXIT(indexvaluelist);
return( YCQACTR );
} 
#undef NL

A68_115 * ADQACTR_reversevaluelist(A68_115 * List)
{ 
A68_115 * BDQACTR_last;
A68_115 * CDQACTR_this;
A68_115 * DDQACTR_next;
A68_115 ** EDQACTR;  /* YIELD */
A68_115 * FDQACTR;  /* clause result */
A_PROC_ENTRY(reversevaluelist);
 /* line 331: */
 /* line 332: */
{ 
BDQACTR_last = (A68_115 *)A68_NIL;
CDQACTR_this = List;
 /* line 333: */
for ( ;; )
{ 
 /* line 334: */
 /* line 335: */
if ( !((CDQACTR_this!=MKJACTR_nilvaluelist)) ) break;
DDQACTR_next = (*(&(CDQACTR_this->Rest)));
 /* line 336: */
EDQACTR = (&(CDQACTR_this->Rest)) ;
(*EDQACTR) = BDQACTR_last;
 /* line 337: */
BDQACTR_last = CDQACTR_this;
 /* line 338: */
 /* line 339: */
CDQACTR_this = DDQACTR_next;
}
 /* line 340: */
 /* line 341: */
FDQACTR = BDQACTR_last;
} 
A_PROC_EXIT(reversevaluelist);
return( FDQACTR );
} 
#undef NL

A68_INT  HDQACTR_operandsof(A68_114  Treeoper)
{ 
A68_INT  IDQACTR;  /* clause result */
A68_BITS  JDQACTR;  /* SHR */
A_PROC_ENTRY(operandsof);
 /* line 349: */
JDQACTR = (A68_BITS )Treeoper.Param ;
IDQACTR = (A68_INT )A_SHR(JDQACTR,WGAACTR_operandsshift);
A_PROC_EXIT(operandsof);
return( IDQACTR );
} 
#undef NL

A68_INT  LDQACTR_paramof(A68_114  Treeoper)
{ 
A68_INT  MDQACTR;  /* clause result */
A_PROC_ENTRY(paramof);
 /* line 356: */
MDQACTR = (A68_INT )(A68_BITS )((A68_BITS )Treeoper.Param&ZGAACTR_parammask);
A_PROC_EXIT(paramof);
return( MDQACTR );
} 
#undef NL

A68_108 * PDQACTR_operand(A68_108 * Oper, A68_INT  Rand)
{ 
A68_109  QDQACTR;  /* united object - for case conformity */
A68_114  RDQACTR_rator;
A68_INT  SDQACTR_totalrands;
A68_108 * TDQACTR;  /* clause result */
A68_108 * WDQACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(operand);
 /* line 360: */
 /* line 361: */
QDQACTR = (*(&(Oper->Extra))) ;
switch ( QDQACTR.mode )
{ 
case 9: /* STRUCT(INT,INT,REF MODE115)  */
RDQACTR_rator = (QDQACTR.data.mode9);
 /* line 362: */
 /* line 363: */
{ 
SDQACTR_totalrands = HDQACTR_operandsof(RDQACTR_rator);
 /* line 364: */
 /* line 365: */
 /* line 366: */
TDQACTR = UCQACTR_indexvaluelist(RDQACTR_rator.Operands, ((SDQACTR_totalrands+1)-Rand));
} 
break;
default: 
WXIACTR_assert(VDQACTR, A68_FALSE);
 /* line 367: */
TDQACTR = WDQACTR;
break;
} 
A_PROC_EXIT(operand);
return( TDQACTR );
} 
#undef NL

A68_VOID  YDQACTR_derefvalue(A68_108 * Value)
{ 
A68_INT * BEQACTR;  /* YIELD */
A_PROC_ENTRY(derefvalue);
 /* line 370: */
 /* line 372: */
{ 
WXIACTR_assert(AEQACTR, ((*(&(Value->Mode)))>VFAACTR_refmark));
 /* line 373: */
 /* line 374: */
BEQACTR = (&(Value->Mode)) ;
(*BEQACTR)-=VFAACTR_refmark;
} 
A_PROC_EXIT(derefvalue);
return;
} 
#undef NL

A68_VOID  DEQACTR_enrefvalue(A68_108 * Value)
{ 
A68_INT * EEQACTR;  /* YIELD */
A_PROC_ENTRY(enrefvalue);
 /* line 377: */
 /* line 378: */
 /* line 379: */
EEQACTR = (&(Value->Mode)) ;
(*EEQACTR)+=VFAACTR_refmark;
A_PROC_EXIT(enrefvalue);
return;
} 
#undef NL

A_STATIC A68_VOID  GEQACTR_fnname(A68_INT  Fn, A68_VC  *ReturnedValue)
{ 
A68_VC  JEQACTR_spare;
A68_INT  KEQACTR;  /* clause result */
A68_VC  MEQACTR;  /* clause result */
A68_VC  THQACTR;  /* avoid structure result */
A_PROC_ENTRY(fnname);
 /* line 382: */
 /* line 383: */
{ 
JEQACTR_spare = IEQACTR;
 /* line 384: */
 /* line 385: */
 /* line 386: */
KEQACTR = Fn;
switch ( KEQACTR )
{ 
case 1: 
 /* line 387: */
MEQACTR = NEQACTR;
break;
case 2: 
 /* line 388: */
MEQACTR = PEQACTR;
break;
case 3: 
 /* line 389: */
MEQACTR = REQACTR;
break;
case 4: 
 /* line 390: */
MEQACTR = TEQACTR;
break;
case 5: 
 /* line 391: */
MEQACTR = VEQACTR;
break;
case 6: 
 /* line 392: */
MEQACTR = XEQACTR;
break;
case 7: 
 /* line 393: */
MEQACTR = ZEQACTR;
break;
case 8: 
 /* line 394: */
MEQACTR = BFQACTR;
break;
case 9: 
 /* line 395: */
MEQACTR = DFQACTR;
break;
case 10: 
 /* line 396: */
MEQACTR = FFQACTR;
break;
case 11: 
 /* line 397: */
MEQACTR = HFQACTR;
break;
case 12: 
 /* line 398: */
MEQACTR = JFQACTR;
break;
case 13: 
 /* line 399: */
MEQACTR = LFQACTR;
break;
case 14: 
 /* line 400: */
MEQACTR = NFQACTR;
break;
case 15: 
 /* line 401: */
MEQACTR = PFQACTR;
break;
case 16: 
 /* line 402: */
MEQACTR = RFQACTR;
break;
case 17: 
 /* line 403: */
MEQACTR = TFQACTR;
break;
case 18: 
 /* line 404: */
MEQACTR = VFQACTR;
break;
case 19: 
 /* line 405: */
MEQACTR = XFQACTR;
break;
case 20: 
 /* line 406: */
MEQACTR = ZFQACTR;
break;
case 21: 
 /* line 407: */
MEQACTR = BGQACTR;
break;
case 22: 
 /* line 408: */
MEQACTR = DGQACTR;
break;
case 23: 
 /* line 409: */
MEQACTR = FGQACTR;
break;
case 24: 
 /* line 410: */
MEQACTR = HGQACTR;
break;
case 25: 
 /* line 411: */
MEQACTR = JGQACTR;
break;
case 26: 
 /* line 412: */
MEQACTR = LGQACTR;
break;
case 27: 
 /* line 413: */
MEQACTR = NGQACTR;
break;
case 28: 
 /* line 414: */
MEQACTR = PGQACTR;
break;
case 29: 
 /* line 415: */
MEQACTR = RGQACTR;
break;
case 30: 
 /* line 416: */
MEQACTR = TGQACTR;
break;
case 31: 
 /* line 417: */
MEQACTR = VGQACTR;
break;
case 32: 
 /* line 418: */
MEQACTR = XGQACTR;
break;
case 33: 
 /* line 419: */
MEQACTR = ZGQACTR;
break;
case 34: 
 /* line 420: */
MEQACTR = BHQACTR;
break;
case 35: 
 /* line 421: */
MEQACTR = DHQACTR;
break;
case 36: 
 /* line 422: */
MEQACTR = FHQACTR;
break;
case 37: 
 /* line 423: */
MEQACTR = HHQACTR;
break;
case 38: 
 /* line 424: */
MEQACTR = JHQACTR;
break;
case 39: 
 /* line 425: */
MEQACTR = LHQACTR;
break;
case 40: 
 /* line 426: */
MEQACTR = NHQACTR;
break;
case 41: 
 /* line 427: */
MEQACTR = JEQACTR_spare;
break;
case 42: 
 /* line 428: */
MEQACTR = JEQACTR_spare;
break;
case 43: 
 /* line 429: */
MEQACTR = JEQACTR_spare;
break;
case 44: 
 /* line 430: */
MEQACTR = JEQACTR_spare;
break;
case 45: 
 /* line 431: */
MEQACTR = JEQACTR_spare;
break;
case 46: 
 /* line 432: */
MEQACTR = JEQACTR_spare;
break;
case 47: 
 /* line 433: */
MEQACTR = JEQACTR_spare;
break;
case 48: 
 /* line 434: */
MEQACTR = JEQACTR_spare;
break;
case 49: 
 /* line 436: */
MEQACTR = JEQACTR_spare;
break;
case 50: 
 /* line 438: */
MEQACTR = PHQACTR;
break;
case 51: 
MEQACTR = RHQACTR;
break;
default: 
 /* line 439: */
ROAAOSF_whole( Fn, 0, &THQACTR );
MEQACTR = A_VC_PLUS(THQACTR,UHQACTR);
break;
} 
} 
A_PROC_EXIT(fnname);
*ReturnedValue = (MEQACTR);
return;
} 
#undef NL

A68_VOID  XHQACTR_valuestring(A68_108 * Value, A68_BOOL  Brief, A68_VC  *ReturnedValue)
{ 
A68_VC  ZHQACTR;  /* clause result */
union {  /* BIOP 99 */
A68_108   source;
A68_LINT   destination;
} BIQACTR; 
A68_LINT  CIQACTR;  /* OPERATORS - skip to mode */
A68_109  JIQACTR;  /* united object - for case conformity */
A68_VC  LIQACTR;  /* clause result */
A68_LBITS  NIQACTR_bb;
A68_VC  QIQACTR;  /* avoid structure result */
A68_57  RIQACTR_l;
A68_VC  UIQACTR;  /* avoid structure result */
A68_111  VIQACTR_id;
A68_VC  YIQACTR;  /* avoid structure result */
A68_112  ZIQACTR_tmp;
A68_VC  CJQACTR;  /* OPERATORS - istruct -> vector */
A68_56  DJQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EJQACTR_c;
A68_113  HJQACTR_s;
A68_110  QJQACTR_r;
A68_VC  TJQACTR;  /* avoid structure result */
A68_VC  UJQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VJQACTR;  /* avoid structure result */
A68_VC  WJQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_114  XJQACTR_o;
A68_VC  BKQACTR;  /* avoid structure result */
A68_VC  IKQACTR;  /* avoid structure result */
A68_BITS  KKQACTR;  /* SHR */
A68_VC  LKQACTR;  /* avoid structure result */
A68_VC  NKQACTR;  /* avoid structure result */
A68_VC  TKQACTR;  /* avoid structure result */
A_PROC_ENTRY(valuestring);
 /* line 444: */
 /* line 445: */
 /* line 446: */
if ( (Value==(A68_108 *)A68_NIL) )
{ 
ZHQACTR = AIQACTR;
} 
else
{ 
 /* line 448: */
 /* line 449: */
BIQACTR.source = (*Value) ;
if ( ((BIQACTR.destination)==CIQACTR) )
{ 
ZHQACTR = EIQACTR;
} 
else
{ 
 /* line 450: */
 /* line 451: */
if ( ZUPACTR_(Value, VTPACTR_assignment(A_LOC(A68_108 ), DLJACTR_skipvalue)) )
{ 
ZHQACTR = GIQACTR;
} 
else
{ 
 /* line 452: */
 /* line 453: */
 /* line 454: */
JIQACTR = (*(&(Value->Extra))) ;
switch ( JIQACTR.mode )
{ 
case 3: /* VOID */
 /* line 455: */
LIQACTR = MIQACTR;
break;
case 1: /* LONG BITS */
NIQACTR_bb = (JIQACTR.data.mode1);
 /* line 456: */
BQAAOSF_hex( NIQACTR_bb, 24, &QIQACTR );
LIQACTR = A_VC_PLUS(PIQACTR,QIQACTR);
break;
case 7: /* STRUCT(INT)  */
RIQACTR_l = (JIQACTR.data.mode7);
 /* line 457: */
UTKACTR_idfullname( (RIQACTR_l.Labno+OAAACTR_minlab), &UIQACTR );
LIQACTR = A_VC_PLUS(TIQACTR,UIQACTR);
break;
case 4: /* STRUCT(INT)  */
VIQACTR_id = (JIQACTR.data.mode4);
 /* line 458: */
UTKACTR_idfullname( VIQACTR_id.Idno, &YIQACTR );
LIQACTR = A_VC_PLUS(XIQACTR,YIQACTR);
break;
case 5: /* STRUCT(MODE56,INT)  */
ZIQACTR_tmp = (JIQACTR.data.mode5);
 /* line 459: */
DJQACTR = ZIQACTR_tmp.Name ;
LIQACTR = A_VC_PLUS(BJQACTR,A_HISVEC(CJQACTR,DJQACTR,7,A68_CHAR ));
break;
case 6: /* VECTOR [] CHAR */
EJQACTR_c = (JIQACTR.data.mode6);
 /* line 460: */
LIQACTR = A_VC_PLUS(GJQACTR,EJQACTR_c);
break;
case 8: /* STRUCT(INT)  */
HJQACTR_s = (JIQACTR.data.mode8);
 /* line 461: */
 /* line 462: */
switch ( HJQACTR_s.Nse )
{ 
case 1: 
LIQACTR = JJQACTR;
break;
case 2: 
 /* line 463: */
LIQACTR = LJQACTR;
break;
case 3: 
 /* line 464: */
LIQACTR = NJQACTR;
break;
default: 
 /* line 465: */
LIQACTR = PJQACTR;
break;
} 
break;
case 2: /* STRUCT(INT)  */
QJQACTR_r = (JIQACTR.data.mode2);
 /* line 466: */
 /* line 467: */
 /* line 468: */
UTKACTR_idfullname( QJQACTR_r.Rdenno, &TJQACTR );
ROAAOSF_whole( QJQACTR_r.Rdenno, 0, &VJQACTR );
LIQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SJQACTR,TJQACTR),A_HVEC(UJQACTR,'(',A68_CHAR )),VJQACTR),A_HVEC(WJQACTR,')',A68_CHAR ));
break;
case 9: /* STRUCT(INT,INT,REF MODE115)  */
XJQACTR_o = (JIQACTR.data.mode9);
 /* line 469: */
 /* line 470: */
if ( Brief )
{ 
 /* line 471: */
GEQACTR_fnname( XJQACTR_o.Fn, &BKQACTR );
LIQACTR = A_VC_PLUS(A_VC_PLUS(AKQACTR,BKQACTR),CKQACTR);
} 
else
{ 
 /* line 472: */
 /* line 473: */
 /* line 474: */
 /* line 475: */
 /* line 477: */
 /* line 478: */
 /* line 479: */
GEQACTR_fnname( XJQACTR_o.Fn, &IKQACTR );
KKQACTR = (A68_BITS )XJQACTR_o.Param ;
ROAAOSF_whole( (A68_INT )A_SHR(KKQACTR,WGAACTR_operandsshift), 0, &LKQACTR );
ROAAOSF_whole( (A68_INT )(A68_BITS )((A68_BITS )XJQACTR_o.Param&ZGAACTR_parammask), 0, &NKQACTR );
LIQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HKQACTR,IKQACTR),JKQACTR),LKQACTR),MKQACTR),NKQACTR),OKQACTR);
} 
break;
default: 
 /* line 480: */
LIQACTR = QKQACTR;
break;
} 
 /* line 481: */
WCNACTR_modename( (*(&(Value->Mode))), &TKQACTR );
ZHQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SKQACTR,TKQACTR),UKQACTR),LIQACTR),VKQACTR);
} 
} 
} 
A_PROC_EXIT(valuestring);
*ReturnedValue = (ZHQACTR);
return;
} 
#undef NL

A68_VOID  XKQACTR_uvaluetocfragment(A68_197  U, A68_VC  *ReturnedValue)
{ 
A68_197  YKQACTR;  /* united object - for case conformity */
A68_108 * ZKQACTR_rv;
A68_VC  ALQACTR;  /* clause result */
A68_VC  BLQACTR;  /* avoid structure result */
A68_VC  CLQACTR_c;
A68_112  DLQACTR_t;
A68_VC  ELQACTR;  /* OPERATORS - istruct -> vector */
A68_56  FLQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ILQACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(uvaluetocfragment);
 /* line 492: */
 /* line 493: */
YKQACTR = U ;
switch ( YKQACTR.mode )
{ 
case 1: /* REF STRUCT(INT,BITS,MODE109)  */
ZKQACTR_rv = (YKQACTR.data.mode1);
 /* line 494: */
GYPACTR_getcfragment( ZKQACTR_rv, &BLQACTR );
ALQACTR = BLQACTR;
break;
case 2: /* VECTOR [] CHAR */
CLQACTR_c = (YKQACTR.data.mode2);
 /* line 495: */
ALQACTR = CLQACTR_c;
break;
case 3: /* STRUCT(MODE56,INT)  */
DLQACTR_t = (YKQACTR.data.mode3);
 /* line 496: */
 /* line 497: */
FLQACTR = DLQACTR_t.Name ;
ALQACTR = A_HISVEC(ELQACTR,FLQACTR,7,A68_CHAR );
break;
default: 
WXIACTR_assert(HLQACTR, A68_FALSE);
 /* line 498: */
ALQACTR = ILQACTR;
break;
} 
A_PROC_EXIT(uvaluetocfragment);
*ReturnedValue = (ALQACTR);
return;
} 
#undef NL

A68_VOID  KLQACTR_joinuvalue(A68_200  Items, A68_VC  *ReturnedValue)
{ 
A68_54  OLQACTR_generator;   /* proc value of non-global proc */
A68_154  ULQACTR;  /* avoid structure result */
A68_154  TLQACTR_result;
A68_197  VLQACTR_i;
A68_197 * WLQACTR;  /* forall control - []x */
A68_INT  XLQACTR;  /* forall loop counter */
A68_VC  YLQACTR;  /* avoid structure result */
A68_VC  ZLQACTR;  /* clause result */
A_PROC_ENTRY(joinuvalue);
 /* line 501: */
 /* line 502: */
{ 
WXIACTR_assert(MLQACTR, (Items.upb>=1));
 /* line 503: */
A_CLOSURE( OLQACTR_generator, PLQACTR_generator, QLQACTR_generator );
A_CALLPROC(OLQACTR_generator,(A68_TRUE, &ULQACTR),(A68_TRUE, &ULQACTR,(OLQACTR_generator).nonlocals));
TLQACTR_result = ULQACTR;
 /* line 504: */
 /* line 505: */
XLQACTR = Items.upb -1;
WLQACTR = Items.data;
for (;XLQACTR-- >= 0;
(WLQACTR++
) )
{
VLQACTR_i = *WLQACTR;
 /* line 506: */
XKQACTR_uvaluetocfragment( VLQACTR_i, &YLQACTR );
A_VC_PLUSAB(TLQACTR_result,YLQACTR);
}
 /* line 507: */
 /* line 508: */
ZLQACTR = TLQACTR_result;
} 
A_PROC_EXIT(joinuvalue);
*ReturnedValue = (ZLQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BMQACTR_commaseparate(A68_200  Items, A68_VC  *ReturnedValue)
{ 
A68_54  FMQACTR_generator;   /* proc value of non-global proc */
A68_154  LMQACTR;  /* avoid structure result */
A68_154  KMQACTR_result;
A68_INT  MMQACTR;  /* YIELD */
A68_VC  NMQACTR;  /* avoid structure result */
A68_VC  OMQACTR;  /* OPERATORS - copy to flex */
A68_197  PMQACTR_i;
A68_200  QMQACTR;  /* OPERATORS - trim index */
A68_200  RMQACTR;  /* forall yield */
A68_197 * SMQACTR;  /* forall control - []x */
A68_INT  TMQACTR;  /* forall loop counter */
A68_VC  UMQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VMQACTR;  /* avoid structure result */
A68_VC  WMQACTR;  /* clause result */
A_PROC_ENTRY(commaseparate);
 /* line 511: */
 /* line 512: */
{ 
WXIACTR_assert(DMQACTR, (Items.upb>=1));
 /* line 519: */
A_CLOSURE( FMQACTR_generator, GMQACTR_generator, HMQACTR_generator );
A_CALLPROC(FMQACTR_generator,(A68_TRUE, &LMQACTR),(A68_TRUE, &LMQACTR,(FMQACTR_generator).nonlocals));
KMQACTR_result = LMQACTR;
 /* line 520: */
MMQACTR = 1 ;
XKQACTR_uvaluetocfragment( A_VINDEX(Items,MMQACTR), &NMQACTR );
KMQACTR_result = A_VCOPY(NMQACTR,OMQACTR,A68_CHAR );
 /* line 521: */
 /* line 522: */
if ( (Items.upb>1) )
{ 
 /* line 523: */
RMQACTR = A_VTRIM(QMQACTR,(Items),A_VTSCRIPT(&(QMQACTR.upb),(Items).upb,2,(Items).upb)) ;
TMQACTR = RMQACTR.upb -1;
SMQACTR = RMQACTR.data;
for (;TMQACTR-- >= 0;
(SMQACTR++
) )
{
PMQACTR_i = *SMQACTR;
 /* line 524: */
XKQACTR_uvaluetocfragment( PMQACTR_i, &VMQACTR );
A_VC_PLUSAB(KMQACTR_result,A_VC_PLUS(A_HVEC(UMQACTR,',',A68_CHAR ),VMQACTR));
}
 /* line 525: */
} 
 /* line 526: */
 /* line 527: */
WMQACTR = KMQACTR_result;
} 
A_PROC_EXIT(commaseparate);
*ReturnedValue = (WMQACTR);
return;
} 
#undef NL

A68_VOID  YMQACTR_commalist(A68_200  Items, A68_VC  *ReturnedValue)
{ 
A68_VC  ZMQACTR;  /* clause result */
A68_VC  ANQACTR;  /* avoid structure result */
A68_VC  BNQACTR;  /* avoid structure result */
A_PROC_ENTRY(commalist);
 /* line 530: */
BMQACTR_commaseparate( Items, &ANQACTR );
JIAACTR_bracket( ANQACTR, &BNQACTR );
ZMQACTR = BNQACTR;
A_PROC_EXIT(commalist);
*ReturnedValue = (ZMQACTR);
return;
} 
#undef NL

A68_VOID  ENQACTR_usemacro(A68_VC  Macro, A68_200  Arguments, A68_VC  *ReturnedValue)
{ 
A68_VC  FNQACTR;  /* clause result */
A68_VC  GNQACTR;  /* avoid structure result */
A68_VC  HNQACTR;  /* avoid structure result */
A_PROC_ENTRY(usemacro);
 /* line 533: */
BMQACTR_commaseparate( Arguments, &GNQACTR );
JIAACTR_bracket( GNQACTR, &HNQACTR );
FNQACTR = A_VC_PLUS(Macro,HNQACTR);
A_PROC_EXIT(usemacro);
*ReturnedValue = (FNQACTR);
return;
} 
#undef NL

A68_VOID  JNQACTR_emitline(A68_200  Uv)
{ 
A68_206  KNQACTR;  /* collateral clause result */
A68_VC  LNQACTR;  /* avoid structure result */
A68_93  MNQACTR;  /* OPERATORS - mode -> union mode */
A68_93  NNQACTR;  /* OPERATORS - mode -> union mode */
A68_92  ONQACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitline);
 /* line 538: */
KLQACTR_joinuvalue( Uv, &LNQACTR );
KNQACTR.data[0] = A_UNITE(MNQACTR,mode2,2,LNQACTR);
KNQACTR.data[1] = A_UNITE(NNQACTR,mode4,4,EIAACTR_cnewline);
 /* line 540: */
MDMACTR_writecstream(A_HISVEC(ONQACTR,KNQACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
A_PROC_EXIT(emitline);
return;
} 
#undef NL
 /* line 544: */
 /* line 546: */

A68_VOID  SNQACTR_yieldtemporary(A68_VC  Comment, A68_INT  Mode, A68_200  Op, A68_112  *ReturnedValue)
{ 
A68_112  TNQACTR;  /* avoid structure result */
A68_112  UNQACTR_t;
A68_208  VNQACTR;  /* collateral clause result */
A68_197  WNQACTR;  /* OPERATORS - mode -> union mode */
A68_197  ZNQACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AOQACTR;  /* YIELD */
A68_VC  BOQACTR;  /* avoid structure result */
A68_197  COQACTR;  /* OPERATORS - mode -> union mode */
A68_197  FOQACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GOQACTR;  /* YIELD */
A68_200  HOQACTR;  /* OPERATORS - istruct -> vector */
A68_112  IOQACTR;  /* clause result */
A_PROC_ENTRY(yieldtemporary);
 /* line 547: */
 /* line 548: */
{ 
A_CALLPROC(KLOACTR_new,(Mode, Comment, &TNQACTR),(Mode, Comment, &TNQACTR,(KLOACTR_new).nonlocals));
UNQACTR_t = TNQACTR;
 /* line 549: */
VNQACTR.data[0] = A_UNITE(WNQACTR,mode3,3,UNQACTR_t);
AOQACTR = YNQACTR ;
VNQACTR.data[1] = A_UNITE(ZNQACTR,mode2,2,AOQACTR);
KLQACTR_joinuvalue( Op, &BOQACTR );
VNQACTR.data[2] = A_UNITE(COQACTR,mode2,2,BOQACTR);
GOQACTR = EOQACTR ;
VNQACTR.data[3] = A_UNITE(FOQACTR,mode2,2,GOQACTR);
JNQACTR_emitline(A_HISVEC(HOQACTR,VNQACTR,4,A68_197 ));
 /* line 550: */
 /* line 551: */
IOQACTR = UNQACTR_t;
} 
A_PROC_EXIT(yieldtemporary);
*ReturnedValue = (IOQACTR);
return;
} 
#undef NL

A68_108 * KOQACTR_yield(A68_108 * Op)
{ 
A68_197  MOQACTR;  /* OPERATORS - mode -> union mode */
A68_200  NOQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_112  POQACTR;  /* avoid structure result */
A68_109  QOQACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * ROQACTR;  /* YIELD */
A68_108 * SOQACTR;  /* clause result */
A_PROC_ENTRY(yield);
 /* line 554: */
{ 
 /* line 555: */
if ( !VWPACTR_isaname(Op) )
{ 
SNQACTR_yieldtemporary( OOQACTR, (*(&(Op->Mode))), A_HVEC(NOQACTR,A_UNITE(MOQACTR,mode1,1,Op),A68_197 ), &POQACTR );
AUPACTR_assignment((&(Op->Extra)), A_UNITE(QOQACTR,mode5,5,POQACTR));
 /* line 556: */
 /* line 557: */
ROQACTR = (&(Op->Info)) ;
(*ROQACTR) = (A68_BITS )((A68_BITS )((*(&(Op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
} 
 /* line 558: */
 /* line 559: */
SOQACTR = Op;
} 
A_PROC_EXIT(yield);
return( SOQACTR );
} 
#undef NL

A68_108 * VOQACTR_yield(A68_VC  Comment, A68_108 * Op)
{ 
A68_197  WOQACTR;  /* OPERATORS - mode -> union mode */
A68_200  XOQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_112  YOQACTR;  /* avoid structure result */
A68_109  ZOQACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * APQACTR;  /* YIELD */
A68_108 * BPQACTR;  /* clause result */
A_PROC_ENTRY(yield);
 /* line 562: */
{ 
 /* line 563: */
if ( !VWPACTR_isaname(Op) )
{ 
SNQACTR_yieldtemporary( Comment, (*(&(Op->Mode))), A_HVEC(XOQACTR,A_UNITE(WOQACTR,mode1,1,Op),A68_197 ), &YOQACTR );
AUPACTR_assignment((&(Op->Extra)), A_UNITE(ZOQACTR,mode5,5,YOQACTR));
 /* line 564: */
 /* line 565: */
APQACTR = (&(Op->Info)) ;
(*APQACTR) = (A68_BITS )((A68_BITS )((*(&(Op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
} 
 /* line 566: */
 /* line 567: */
BPQACTR = Op;
} 
A_PROC_EXIT(yield);
return( BPQACTR );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 6: */
 /* line 7: */
 /* line 9: */
void ATPACTR(void)   /* initialise DECS values */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","-dir",".","values.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","./modes.m","./incvalue.m","./incid.m","./incoperfn.m","./incmode.m","./idtable.m","./coutput.m","./environment.m","./environ.m","./centities.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
DNMACTR();   /* USE modes */
GKJACTR();   /* USE incvalue */
BAAACTR();   /* USE incid */
XFAACTR();   /* USE incoperfn */
ZDAACTR();   /* USE incmode */
PPKACTR();   /* USE idtable */
PTLACTR();   /* USE coutput */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/src/values.a68";
A_config.translation_time = "Mon May  3 00:36:17 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "ZSPACTR (from seed file) ";
A_config.spec_change_time = "Mon May  3 00:36:17 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS values);
UEAALIB_a68config(LGAALIB_configinfo, ETPACTR);
 /* line 48: */
 /* line 77: */
 /* line 79: */
 /* line 89: */
 /* line 99: */
 /* line 103: */
 /* line 105: */
 /* line 108: */
 /* line 111: */
 /* line 114: */
 /* line 126: */
 /* line 129: */
 /* line 132: */
 /* line 135: */
 /* line 138: */
 /* line 145: */
 /* line 155: */
 /* line 166: */
 /* line 184: */
 /* line 186: */
 /* line 307: */
 /* line 317: */
 /* line 327: */
 /* line 345: */
 /* line 352: */
 /* line 358: */
 /* line 359: */
 /* line 369: */
 /* line 376: */
 /* line 381: */
 /* line 441: */
 /* line 443: */
 /* line 489: */
 /* line 491: */
 /* line 500: */
 /* line 510: */
 /* line 529: */
 /* line 532: */
 /* line 535: */
 /* line 542: */
 /* line 543: */
 /* line 553: */
 /* line 561: */
 /* line 569: */
 /* line 571: */
 /* line 607: */
/*SKIP*/;
A_PROC_EXIT(DECS values);
} 
#undef NL
/* end of translation of values.a68 */
