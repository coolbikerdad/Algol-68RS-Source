/* UNAME:AZYACTR */
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

A_PROCEDURE(A68_INT ,A68t54,(A68_INT ),(A68_INT ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t55,(A68_INT ),(A68_INT ,void *));
typedef struct A68t55  A68_55 ;    /* PROC(INT) BOOL */
struct A68t56{
A68_INT  Level;
A_PAD_INT(PAD_1)
A68_INT  Block;
A_PAD_INT(PAD_2)
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t57,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC MODE56 */

A_PROCEDURE(A68_INT ,A68t58,(void),(void *));
typedef struct A68t58  A68_58 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t59,(A68_INT ),(A68_INT ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t60,(void),(void *));
typedef struct A68t60  A68_60 ;    /* PROC VOID */

A_PROCEDURE(A68_BOOL ,A68t61,(void),(void *));
typedef struct A68t61  A68_61 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t62,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t63,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t64,(struct A68t56 ,struct A68t56 ),(struct A68t56 ,struct A68t56 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE56,MODE56) BOOL */

A_PROCEDURE(A68_BOOL ,A68t65,(struct A68t56 ),(struct A68t56 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(MODE56) BOOL */

A_PROCEDURE(A68_VOID ,A68t66,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t67,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t68,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(INT) REF MODE26 */
struct A68t70 ;

A_PROCEDURE(A68_VOID ,A68t69,(A68_INT ,struct A68t70 ),(A68_INT ,struct A68t70 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(INT,MODE70) VOID */
A_ROW(A68_VC ,A68t70,1);
typedef struct A68t70  A68_70 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t71,(void),(void *));
typedef struct A68t71  A68_71 ;    /* PROC BITS */
struct A68t72{
A68_INT  Cfile;
A_PAD_INT(PAD_3)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT)  */
struct A68t73{
A68_INT  Seedfile;
A_PAD_INT(PAD_4)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t75);
typedef struct A68t75  A68_75 ;    /* STRUCT 7 CHAR */
struct A68t74 { A68_INT mode; union {
struct A68t72  mode1;
struct A68t73  mode2;
struct A68t75  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t74  A68_74 ;    /* UNION(MODE72,MODE73,MODE75,VOID)  */

A_PROCEDURE(A68_VOID ,A68t76,(A68_VC ),(A68_VC ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t77,1);
typedef struct A68t77  A68_77 ;    /* [] BOOL */
struct A68t78{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_5)
A68_VC  Sourcefile;
struct A68t75  Nameseed;
A_PAD_ISTRUCT(A68_75 ,PAD_6)
struct A68t74  Nameseedorigin;
struct A68t79 * Used_modules;
A68_VC  Commandline;
struct A68t80 * Environment;
};
typedef struct A68t78  A68_78 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE75,MODE74,REF MODE79,REF MODE26,REF MODE80)  */
struct A68t79{
A68_VC  Modinfo_file;
struct A68t79 * Next;
};
typedef struct A68t79  A68_79 ;    /* STRUCT(REF MODE26,REF MODE79)  */
struct A68t80{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t80 * Next;
};
typedef struct A68t80  A68_80 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE80)  */
struct A68t82 ;
struct A68t83 ;

A_PROCEDURE(struct A68t82 *,A68t81,(A68_VC ,struct A68t83 *,A68_VC *),(A68_VC ,struct A68t83 *,A68_VC *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26,REF MODE83,REF REF MODE26) REF MODE82 */
struct A68t82{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t82  A68_82 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t83{
A68_VC  Dir;
struct A68t83 * Next;
};
typedef struct A68t83  A68_83 ;    /* STRUCT(REF MODE26,REF MODE83)  */

A_PROCEDURE(A68_VOID ,A68t84,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(BOOL) MODE26 */
struct A68t85{
struct A68t75  Name;
A_PAD_ISTRUCT(A68_75 ,PAD_7)
A68_BOOL  Set;
A_PAD_BOOL(PAD_8)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(MODE75,BOOL)  */
struct A68t86{
A68_INT  Labno;
A_PAD_INT(PAD_9)
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26) MODE26 */
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
struct A68t96{
A68_INT  Rdenno;
A_PAD_INT(PAD_10)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT)  */
struct A68t97{
A68_INT  Idno;
A_PAD_INT(PAD_11)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT)  */
struct A68t98{
struct A68t75  Name;
A_PAD_ISTRUCT(A68_75 ,PAD_12)
A68_INT  Mode;
A_PAD_INT(PAD_13)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE75,INT)  */
struct A68t99{
A68_INT  Nse;
A_PAD_INT(PAD_14)
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT)  */
struct A68t100{
A68_INT  Fn;
A_PAD_INT(PAD_15)
A68_INT  Param;
A_PAD_INT(PAD_16)
struct A68t101 * Operands;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT,INT,REF MODE101)  */
struct A68t95 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t96  mode2;
struct A68t97  mode4;
struct A68t98  mode5;
A68_VC  mode6;
struct A68t86  mode7;
struct A68t99  mode8;
struct A68t100  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t95  A68_95 ;    /* UNION(LONG BITS,MODE96,VOID,MODE97,MODE98,MODE26,MODE86,MODE99,MODE100)  */
struct A68t94{
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_BITS  Info;
A_PAD_BITS(PAD_18)
struct A68t95  Extra;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,BITS,MODE95)  */
struct A68t101{
struct A68t94  Value;
struct A68t101 * Rest;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE94,REF MODE101)  */

A_PROCEDURE(A68_BOOL ,A68t102,(struct A68t94 *,struct A68t94 *),(struct A68t94 *,struct A68t94 *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE94,REF MODE94) BOOL */

A_PROCEDURE(A68_BOOL ,A68t103,(struct A68t94 *),(struct A68t94 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE94) BOOL */

A_PROCEDURE(A68_BOOL ,A68t104,(struct A68t94 *,A68_LBITS ),(struct A68t94 *,A68_LBITS ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE94,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t105,(struct A68t94 *),(struct A68t94 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE94) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t106,(struct A68t94 *,A68_VC *),(struct A68t94 *,A68_VC *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE94) MODE26 */

A_PROCEDURE(struct A68t94 *,A68t107,(struct A68t94 *,A68_INT ),(struct A68t94 *,A68_INT ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF MODE94,INT) REF MODE94 */

A_PROCEDURE(A68_INT ,A68t108,(struct A68t100 ),(struct A68t100 ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE100) INT */
struct A68t109{
struct A68t94 * Value;
struct A68t85 * End;
A68_INT  Type;
A_PAD_INT(PAD_19)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(REF MODE94,REF MODE85,INT)  */

A_PROCEDURE(A68_BOOL ,A68t110,(struct A68t94 *,A68_BITS ),(struct A68t94 *,A68_BITS ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE94,BITS) BOOL */

A_PROCEDURE(struct A68t94 *,A68t111,(struct A68t101 *,A68_INT ),(struct A68t101 *,A68_INT ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE101,INT) REF MODE94 */

A_PROCEDURE(struct A68t101 *,A68t112,(struct A68t101 *),(struct A68t101 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE101) REF MODE101 */
struct A68t114 ;

A_PROCEDURE(struct A68t94 *,A68t113,(A68_INT ,A68_INT ,A68_BITS ,struct A68t114 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t114 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(INT,INT,BITS,MODE114) REF MODE94 */
A_VECTOR(struct A68t94 *,A68t114);
typedef struct A68t114  A68_114 ;    /* VECTOR [] REF MODE94 */

A_PROCEDURE(A68_VOID ,A68t115,(struct A68t94 *),(struct A68t94 *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(REF MODE94) VOID */

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t94 *,A68_BOOL ,A68_VC *),(struct A68t94 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE94,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t117,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE94) LONG INT */
struct A68t118 { A68_INT mode; union {
struct A68t94 * mode1;
A68_VC  mode2;
struct A68t98  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t118  A68_118 ;    /* UNION(REF MODE94,MODE26,MODE98)  */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t118 ,A68_VC *),(struct A68t118 ,A68_VC *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE118) MODE26 */
struct A68t121 ;

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t121 ,A68_VC *),(struct A68t121 ,A68_VC *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE121) MODE26 */
A_VECTOR(struct A68t118 ,A68t121);
typedef struct A68t121  A68_121 ;    /* VECTOR [] MODE118 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_VC ,struct A68t121 ,A68_VC *),(A68_VC ,struct A68t121 ,A68_VC *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE26,MODE121) MODE26 */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t121 ),(struct A68t121 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE121) VOID */

A_PROCEDURE(A68_VOID ,A68t124,(A68_VC ,A68_INT ,struct A68t121 ,struct A68t98 *),(A68_VC ,A68_INT ,struct A68t121 ,struct A68t98 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE26,INT,MODE121) MODE98 */

A_PROCEDURE(struct A68t94 *,A68t125,(struct A68t94 *),(struct A68t94 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE94) REF MODE94 */

A_PROCEDURE(struct A68t94 *,A68t126,(A68_VC ,struct A68t94 *),(A68_VC ,struct A68t94 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE26,REF MODE94) REF MODE94 */
struct A68t127{
A68_INT  Mode;
A_PAD_INT(PAD_20)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_21)
struct A68t56  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t75  Prefix;
A_PAD_ISTRUCT(A68_75 ,PAD_22)
A68_BITS  Flags;
A_PAD_BITS(PAD_23)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,INT,MODE56,REF MODE26,REF MODE26,MODE75,BITS,REF MODE26,REF MODE26)  */
struct A68t128{
A68_INT  Mode;
A_PAD_INT(PAD_24)
A68_INT  Resultmode;
A_PAD_INT(PAD_25)
A68_INT  Declevel;
A_PAD_INT(PAD_26)
struct A68t56  Environ;
A68_VC  Name;
struct A68t75  Prefix;
A_PAD_ISTRUCT(A68_75 ,PAD_27)
struct A68t75  Fnprefix;
A_PAD_ISTRUCT(A68_75 ,PAD_28)
struct A68t75  Envprefix;
A_PAD_ISTRUCT(A68_75 ,PAD_29)
A68_BITS  Flags;
A_PAD_BITS(PAD_30)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT,INT,INT,MODE56,REF MODE26,MODE75,MODE75,MODE75,BITS)  */
struct A68t129{
struct A68t85  Label;
struct A68t56  Environ;
A68_VC  Name;
struct A68t75  Prefix;
A_PAD_ISTRUCT(A68_75 ,PAD_31)
A68_BITS  Flags;
A_PAD_BITS(PAD_32)
A68_INT  Alias;
A_PAD_INT(PAD_33)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE85,MODE56,REF MODE26,MODE75,BITS,INT)  */

A_PROCEDURE(struct A68t127 *,A68t130,(A68_INT ),(A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(INT) REF MODE127 */

A_PROCEDURE(A68_VOID ,A68t131,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,struct A68t75 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t75 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE26,MODE75,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t127 ,A68t133,1);
typedef struct A68t133  A68_133 ;    /* [] MODE127 */
A_ROW(struct A68t128 ,A68t134,1);
typedef struct A68t134  A68_134 ;    /* [] MODE128 */
A_ROW(struct A68t129 ,A68t135,1);
typedef struct A68t135  A68_135 ;    /* [] MODE129 */
struct A68t137 ;

A_PROCEDURE(A68_VOID ,A68t136,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t137 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t137 ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT,INT,INT,INT,REF MODE137) VOID */
A_ROW(A68_INT ,A68t137,1);
typedef struct A68t137  A68_137 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t138,(A68_VC ),(A68_VC ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,struct A68t56 *),(A68_INT ,struct A68t56 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT) MODE56 */

A_PROCEDURE(A68_BOOL ,A68t140,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t94 *,A68_BOOL ),(struct A68t94 *,A68_BOOL ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(REF MODE94,BOOL) VOID */
struct A68t143 ;

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t143 ,struct A68t94 *,A68_BOOL ),(struct A68t143 ,struct A68t94 *,A68_BOOL ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE143,REF MODE94,BOOL) VOID */
struct A68t144{
A68_VC  Representation;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(REF MODE26)  */
struct A68t145{
A68_INT  Mode;
A_PAD_INT(PAD_34)
A68_VC  Nu;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t146{
A68_INT  Mode;
A_PAD_INT(PAD_35)
A68_VC  String;
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t147{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_37)
};
typedef struct A68t147  A68_147 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t148{
A68_INT  Mode;
A_PAD_INT(PAD_38)
A68_VC  Denotation;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t149{
A68_INT  Fn;
A_PAD_INT(PAD_39)
A68_INT  Mode;
A_PAD_INT(PAD_40)
A68_INT  Param;
A_PAD_INT(PAD_41)
};
typedef struct A68t149  A68_149 ;    /* STRUCT(INT,INT,INT)  */
struct A68t150{
A68_INT  Type;
A_PAD_INT(PAD_42)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_INT  Decno;
A_PAD_INT(PAD_44)
};
typedef struct A68t150  A68_150 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t151{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_45)
A68_INT  Mode;
A_PAD_INT(PAD_46)
A68_INT  Rdenno;
A_PAD_INT(PAD_47)
A68_INT  Maxname;
A_PAD_INT(PAD_48)
};
typedef struct A68t151  A68_151 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t152{
A68_INT  W;
A_PAD_INT(PAD_49)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(INT)  */
struct A68t153{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_50)
A68_INT  Status;
A_PAD_INT(PAD_51)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_52)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t154{
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_BITS  Props;
A_PAD_BITS(PAD_54)
A68_INT  Param;
A_PAD_INT(PAD_55)
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t155{
A68_INT  I;
A_PAD_INT(PAD_56)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT)  */
struct A68t156{
A68_BOOL  Start;
A_PAD_BOOL(PAD_57)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(BOOL)  */
struct A68t166{
A68_INT  Nochars;
A_PAD_INT(PAD_58)
A68_INT  Nocases;
A_PAD_INT(PAD_59)
A68_INT  W;
A_PAD_INT(PAD_60)
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT,INT,INT)  */
struct A68t157{
struct A68t166  Info;
A68_VC  Text;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(MODE166,REF MODE26)  */
struct A68t158{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_INT  Number;
A_PAD_INT(PAD_62)
A68_VC  Insert;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t159{
A68_INT  Fn;
A_PAD_INT(PAD_63)
A68_INT  Mode;
A_PAD_INT(PAD_64)
A68_BITS  Props;
A_PAD_BITS(PAD_65)
A68_INT  Param;
A_PAD_INT(PAD_66)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t160{
A68_INT  Fn;
A_PAD_INT(PAD_67)
A68_INT  Mode;
A_PAD_INT(PAD_68)
A68_BITS  Props;
A_PAD_BITS(PAD_69)
A68_INT  Resultmode;
A_PAD_INT(PAD_70)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t161{
A68_INT  Fn;
A_PAD_INT(PAD_71)
A68_BITS  Props;
A_PAD_BITS(PAD_72)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,BITS)  */
struct A68t162{
A68_INT  Body;
A_PAD_INT(PAD_73)
A68_INT  Moduleno;
A_PAD_INT(PAD_74)
struct A68t137  Actuals;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,INT,REF MODE137)  */
struct A68t163{
A68_INT  Moduleno;
A_PAD_INT(PAD_75)
A68_INT  I;
A_PAD_INT(PAD_76)
A68_INT  J;
A_PAD_INT(PAD_77)
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t165,1);
typedef struct A68t165  A68_165 ;    /* [] REF MODE26 */
struct A68t164{
A68_INT  Moduleno;
A_PAD_INT(PAD_78)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t165  Ysnames;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE165)  */
struct A68t143 { A68_INT mode; union {
struct A68t99  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t144  mode4;
struct A68t86  mode5;
struct A68t145  mode6;
struct A68t146  mode7;
struct A68t147  mode8;
struct A68t148  mode9;
struct A68t149  mode10;
struct A68t150  mode11;
struct A68t151  mode12;
struct A68t152  mode13;
struct A68t153  mode14;
struct A68t154  mode15;
struct A68t155  mode16;
struct A68t156  mode17;
struct A68t157  mode18;
struct A68t158  mode19;
struct A68t159  mode20;
struct A68t160  mode21;
struct A68t161  mode22;
struct A68t162  mode23;
struct A68t163  mode24;
struct A68t164  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t143  A68_143 ;    /* UNION(MODE99,INT,BOOL,MODE144,MODE86,MODE145,MODE146,MODE147,MODE148,MODE149,MODE150,MODE151,MODE152,MODE153,MODE154,MODE155,MODE156,MODE157,MODE158,MODE159,MODE160,MODE161,MODE162,MODE163,MODE164,VOID)  */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t101 **),(struct A68t101 **,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF REF MODE101) VOID */
struct A68t168{
A68_INT  Parameters;
A_PAD_INT(PAD_79)
A68_INT  Result;
A_PAD_INT(PAD_80)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_81)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 32 CHAR */
struct A68t169{
A68_INT  Mode;
A_PAD_INT(PAD_82)
A68_INT  Offset;
A_PAD_INT(PAD_83)
struct A68t170  Name;
A_PAD_ISTRUCT(A68_170 ,PAD_84)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT,INT,MODE170)  */
struct A68t172 ;

A_PROCEDURE(A68_VOID ,A68t171,(A68_INT ,struct A68t172 *),(A68_INT ,struct A68t172 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(INT) REF MODE172 */
A_VECTOR(A68_INT ,A68t172);
typedef struct A68t172  A68_172 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t169 *,A68_VC *),(struct A68t169 *,A68_VC *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REF MODE169) MODE26 */

A_PROCEDURE(A68_VOID ,A68t174,(A68_INT ,A68_VC ,struct A68t98 *),(A68_INT ,A68_VC ,struct A68t98 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT,MODE26) MODE98 */
struct A68t176 ;

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t176 ,A68_INT ),(struct A68t176 ,A68_INT ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE176,INT) VOID */
A_ROW(struct A68t177 ,A68t176,1);
typedef struct A68t176  A68_176 ;    /* [] MODE177 */
struct A68t187{
A68_INT  Mode;
A_PAD_INT(PAD_85)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT)  */
struct A68t177 { A68_INT mode; union {
A68_INT  mode1;
struct A68t178 * mode2;
struct A68t179 * mode3;
struct A68t180 * mode4;
struct A68t181 * mode5;
struct A68t182 * mode6;
struct A68t183 * mode7;
struct A68t184 * mode8;
struct A68t185 * mode9;
struct A68t186 * mode10;
struct A68t187  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t177  A68_177 ;    /* UNION(INT,REF MODE178,REF MODE179,REF MODE180,REF MODE181,REF MODE182,REF MODE183,REF MODE184,REF MODE185,REF MODE186,MODE187)  */
struct A68t178{
A68_INT  Rdenno;
A_PAD_INT(PAD_86)
struct A68t191 * Modelist;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT,REF MODE191)  */
struct A68t179{
A68_INT  Deproc;
A_PAD_INT(PAD_87)
struct A68t191 * Pars;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,REF MODE191)  */
struct A68t180{
A68_INT  Rdenno;
A_PAD_INT(PAD_88)
A68_INT  Deflex;
A_PAD_INT(PAD_89)
struct A68t190 * Sels;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT,INT,REF MODE190)  */
struct A68t181{
A68_INT  Rdenno;
A_PAD_INT(PAD_90)
A68_INT  Imode;
A_PAD_INT(PAD_91)
A68_INT  Length;
A_PAD_INT(PAD_92)
A68_INT  Deflex;
A_PAD_INT(PAD_93)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t182{
A68_INT  Deproc;
A_PAD_INT(PAD_94)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT)  */
struct A68t183{
A68_INT  Rdenno;
A_PAD_INT(PAD_95)
A68_INT  Vecmode;
A_PAD_INT(PAD_96)
A68_INT  Deflex;
A_PAD_INT(PAD_97)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,INT,INT)  */
struct A68t184{
A68_INT  Rdenno;
A_PAD_INT(PAD_98)
A68_INT  Mode;
A_PAD_INT(PAD_99)
A68_INT  Nods;
A_PAD_INT(PAD_100)
A68_INT  Deflex;
A_PAD_INT(PAD_101)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t185{
A68_INT  Mode;
A_PAD_INT(PAD_102)
struct A68t189 * Stenlist;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT,REF MODE189)  */
struct A68t186{
A68_INT  Mode;
A_PAD_INT(PAD_103)
A68_INT  Modeproc;
A_PAD_INT(PAD_104)
struct A68t188 * El;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,INT,REF MODE188)  */
struct A68t188{
struct A68t186 * Am;
struct A68t188 * Rest;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(REF MODE186,REF MODE188)  */
struct A68t189{
A68_INT  Mode;
A_PAD_INT(PAD_105)
A68_INT  Rdenno;
A_PAD_INT(PAD_106)
struct A68t189 * Rest;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,INT,REF MODE189)  */
struct A68t190{
A68_INT  Mode;
A_PAD_INT(PAD_107)
A68_INT  Fieldno;
A_PAD_INT(PAD_108)
struct A68t170  Name;
A_PAD_ISTRUCT(A68_170 ,PAD_109)
struct A68t190 * Rest;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,INT,MODE170,REF MODE190)  */
struct A68t191{
A68_INT  Mode;
A_PAD_INT(PAD_110)
struct A68t191 * Rest;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,REF MODE191)  */

A_PROCEDURE(A68_VOID ,A68t192,(A68_INT ,struct A68t168 *),(A68_INT ,struct A68t168 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(INT) MODE168 */
struct A68t194 ;

A_PROCEDURE(A68_VOID ,A68t193,(A68_INT ,struct A68t194 *),(A68_INT ,struct A68t194 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(INT) REF MODE194 */
A_VECTOR(struct A68t169 ,A68t194);
typedef struct A68t194  A68_194 ;    /* VECTOR [] MODE169 */

A_PROCEDURE(A68_INT ,A68t195,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t196,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t197,(struct A68t172 ,struct A68t172 ),(struct A68t172 ,struct A68t172 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE172,REF MODE172) INT */

A_PROCEDURE(A68_VOID ,A68t198,(A68_INT ,struct A68t172 ,struct A68t137 *),(A68_INT ,struct A68t172 ,struct A68t137 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(INT,REF MODE172) MODE137 */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t172 ,struct A68t172 ,A68_VC *),(struct A68t172 ,struct A68t172 ,A68_VC *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE172,REF MODE172) REF MODE26 */
struct A68t200 { A68_INT mode; union {
struct A68t162  mode1;
struct A68t163  mode2;
struct A68t164  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t200  A68_200 ;    /* UNION(MODE162,MODE163,MODE164)  */
struct A68t201 { A68_INT mode; union {
struct A68t99  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t144  mode4;
struct A68t86  mode5;
struct A68t145  mode6;
struct A68t146  mode7;
struct A68t147  mode8;
struct A68t148  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t201  A68_201 ;    /* UNION(MODE99,INT,BOOL,MODE144,MODE86,MODE145,MODE146,MODE147,MODE148)  */
struct A68t202 { A68_INT mode; union {
struct A68t99  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t144  mode4;
struct A68t86  mode5;
struct A68t145  mode6;
struct A68t146  mode7;
struct A68t147  mode8;
struct A68t148  mode9;
struct A68t149  mode10;
struct A68t150  mode11;
struct A68t151  mode12;
struct A68t152  mode13;
struct A68t153  mode14;
struct A68t154  mode15;
struct A68t155  mode16;
struct A68t156  mode17;
struct A68t157  mode18;
struct A68t158  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t202  A68_202 ;    /* UNION(MODE99,INT,BOOL,MODE144,MODE86,MODE145,MODE146,MODE147,MODE148,MODE149,MODE150,MODE151,MODE152,MODE153,MODE154,MODE155,MODE156,MODE157,MODE158)  */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t76 ),(struct A68t76 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t205,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 57 CHAR */
struct A68t207{
A68_BOOL  Block;
A_PAD_BOOL(PAD_111)
A68_BOOL  Dynamicresult;
A_PAD_BOOL(PAD_112)
A68_BOOL  Discardeddynamicresult;
A_PAD_BOOL(PAD_113)
A68_INT  Type;
A_PAD_INT(PAD_114)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(BOOL,BOOL,BOOL,INT)  */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t207 ,struct A68t85 **,A68_BOOL *),(struct A68t207 ,struct A68t85 **,A68_BOOL *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE207,REF REF MODE85,REF BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t207 ,struct A68t85 *,struct A68t85 *,A68_BOOL ,A68_BOOL ),(struct A68t207 ,struct A68t85 *,struct A68t85 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE207,REF MODE85,REF MODE85,BOOL,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,42,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t211);
typedef struct A68t211  A68_211 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(struct A68t93 ,3,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 3 MODE93 */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t101 **,struct A68t109 ),(struct A68t101 **,struct A68t109 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF REF MODE101,MODE109) VOID */
A_ISTRUCT(A68_CHAR ,13,A68t214);
typedef struct A68t214  A68_214 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(struct A68t95 *,A68t215,(struct A68t95 *,struct A68t95 ),(struct A68t95 *,struct A68t95 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE95,MODE95) REF MODE95 */
#define A68_216  A68_VC 
#define A68t216 A68t26            /* FLEX VECTOR [] CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,56,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t93 ,4,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 4 MODE93 */
A_ISTRUCT(A68_CHAR ,64,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 64 CHAR */

A_PROCEDURE(A68_VOID ,A68t223,(A68_BOOL ,A68_BOOL ),(A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(BOOL,BOOL) VOID */
A_ISTRUCT(struct A68t93 ,2,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 2 MODE93 */

A_PROCEDURE(A68_VOID ,A68t225,(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t85 *),(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t85 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(BOOL,BOOL,BOOL,REF MODE85) VOID */
A_ISTRUCT(A68_CHAR ,41,A68t226);
typedef struct A68t226  A68_226 ;    /* STRUCT 41 CHAR */

A_PROCEDURE(A68_VOID ,A68t227,(A68_INT ,A68_INT ,struct A68t77 ),(A68_INT ,A68_INT ,struct A68t77 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(INT,INT,REF MODE77) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t93 ,5,A68t230);
typedef struct A68t230  A68_230 ;    /* STRUCT 5 MODE93 */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t154 ,struct A68t94 ,struct A68t77 ),(struct A68t154 ,struct A68t94 ,struct A68t77 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE154,MODE94,REF MODE77) VOID */
A_ISTRUCT(A68_CHAR ,10,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t93 ,6,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 6 MODE93 */
A_ISTRUCT(A68_CHAR ,9,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t93 ,8,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 8 MODE93 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t154 ,struct A68t94 *,struct A68t77 ),(struct A68t154 ,struct A68t94 *,struct A68t77 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE154,REF MODE94,REF MODE77) VOID */
A_ISTRUCT(A68_CHAR ,35,A68t238);
typedef struct A68t238  A68_238 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(struct A68t93 ,7,A68t239);
typedef struct A68t239  A68_239 ;    /* STRUCT 7 MODE93 */
A_ISTRUCT(A68_CHAR ,6,A68t240);
typedef struct A68t240  A68_240 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t241,(A68_BOOL ,struct A68t109 ),(A68_BOOL ,struct A68t109 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(BOOL,MODE109) VOID */
A_ISTRUCT(A68_CHAR ,12,A68t242);
typedef struct A68t242  A68_242 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t243,(A68_BOOL ,struct A68t94 *),(A68_BOOL ,struct A68t94 *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(BOOL,REF MODE94) VOID */
A_ISTRUCT(A68_CHAR ,14,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t207 ,struct A68t109 ,struct A68t85 *,A68_BOOL ,A68_BOOL ,A68_BOOL ),(struct A68t207 ,struct A68t109 ,struct A68t85 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE207,MODE109,REF MODE85,BOOL,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t246,(A68_BOOL ,A68_BOOL ,struct A68t109 ),(A68_BOOL ,A68_BOOL ,struct A68t109 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(BOOL,BOOL,MODE109) VOID */

A_PROCEDURE(A68_VOID ,A68t247,(A68_VC ,A68_INT ,struct A68t101 *,struct A68t98 *),(A68_VC ,A68_INT ,struct A68t101 *,struct A68t98 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE26,INT,REF MODE101) MODE98 */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t101 *),(struct A68t101 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE101) VOID */
A_ISTRUCT(A68_CHAR ,20,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 20 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from incimperatives --- */
/* --- End of imports from incimperatives --- */


/* --- Imports from unionaids --- */
extern A68_VOID  IVQACTR_uniontouniontable(struct A68t172 ,struct A68t172 ,A68_VC *);
/* --- End of imports from unionaids --- */


/* --- Imports from modes --- */
extern A68_171  YVMACTR_constituents;
extern A68_VOID  LKOACTR_declarectemporary(A68_INT ,A68_VC ,A68_98 *);
extern A68_VOID  WCNACTR_modename(A68_INT ,A68_VC *);
extern A68_INT  HCNACTR_finddeflexmode(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define WEAACTR_boolmode 7
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from evaluator --- */
extern A68_141  YEVACTR_calltrace;
extern A68_115  NWQACTR_evaluate;
extern A68_VOID  HKVACTR_evaluatestack(struct A68t101 **);
/* --- End of imports from evaluator --- */


/* --- Imports from tracer --- */
/* --- End of imports from tracer --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from idtable --- */
extern A68_VOID  LRKACTR_idname(A68_INT ,A68_VC *);
extern A68_VOID  UTKACTR_idfullname(A68_INT ,A68_VC *);
/* --- End of imports from idtable --- */


/* --- Imports from values --- */
extern A68_BOOL  QWPACTR_isskip(struct A68t94 *);
extern A68_BOOL  IWPACTR_istemp(struct A68t94 *);
extern A68_VOID  GYPACTR_getcfragment(struct A68t94 *,A68_VC *);
extern A68_101 * MKJACTR_nilvaluelist;
extern A68_94 * VOQACTR_yield(A68_VC ,struct A68t94 *);
/* --- End of imports from values --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t92 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  VJAACTR_curly(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  PXIACTR_error(A68_INT );
extern A68_VOID  NWIACTR_pmessage(A68_INT ,struct A68t70 );
extern A68_BOOL  EQIACTR_skipoption;
extern A68_BOOL  AQIACTR_verboseoption;
extern A68_VOID  JXIACTR_warning(A68_INT );
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void UAAACTR(void);   /* incimperatives */
extern void HTQACTR(void);   /* unionaids */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void KEVACTR(void);   /* evaluator */
extern void HUYACTR(void);   /* tracer */
extern void BCHACTR(void);   /* moduletracer */
extern void PPKACTR(void);   /* idtable */
extern void ATPACTR(void);   /* values */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_206   EZYACTR = {"$Id: clauses.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,FZYACTR,EZYACTR,57)
static A68_210   BAZACTR = {"evaluate no result: mode of value not void"}; 
A_GISVEC(A68_VC ,CAZACTR,BAZACTR,42)
static A68_211   EAZACTR = {""}; 
A_GISVEC(A68_VC ,FAZACTR,EAZACTR,0)
static A68_75   OAZACTR = {"clauses"}; 
A_GISVEC(A68_VC ,PAZACTR,OAZACTR,7)
static A68_214   XAZACTR = {"clause result"}; 
A_GISVEC(A68_VC ,GBZACTR,XAZACTR,13)
static A68_217   PBZACTR = {"evaluate result: unknown value OF answer"}; 
A_GISVEC(A68_VC ,QBZACTR,PBZACTR,40)
static A68_211   RBZACTR = {""}; 
A_GISVEC(A68_VC ,SBZACTR,RBZACTR,0)
static A68_218   VBZACTR = {"evaluate result: value of value stack has incorrect mode"}; 
A_GISVEC(A68_VC ,WBZACTR,VBZACTR,56)
static A68_219   XBZACTR = {"; "}; 
A_GISVEC(A68_VC ,YBZACTR,XBZACTR,2)
static A68_220   ECZACTR = {" = "}; 
A_GISVEC(A68_VC ,FCZACTR,ECZACTR,3)
static A68_222   TCZACTR = {"evaluate simple enquiry: value of value stack has incorrect mode"}; 
A_GISVEC(A68_VC ,UCZACTR,TCZACTR,64)
static A68_219   BDZACTR = {"{ "}; 
A_GISVEC(A68_VC ,CDZACTR,BDZACTR,2)
static A68_226   NDZACTR = {"clauses: end: end of clause label not set"}; 
A_GISVEC(A68_VC ,ODZACTR,NDZACTR,41)
static A68_220   UDZACTR = {": ;"}; 
A_GISVEC(A68_VC ,VDZACTR,UDZACTR,3)
static A68_219   BEZACTR = {"} "}; 
A_GISVEC(A68_VC ,CEZACTR,BEZACTR,2)
static A68_228   PEZACTR = {"A_ERROR(\"Bad case conformity - two choices for mode\");"}; 
A_GISVEC(A68_VC ,QEZACTR,PEZACTR,54)
static A68_229   XEZACTR = {"case "}; 
A_GISVEC(A68_VC ,YEZACTR,XEZACTR,5)
static A68_219   DFZACTR = {": "}; 
A_GISVEC(A68_VC ,EFZACTR,DFZACTR,2)
static A68_220   HFZACTR = {"/* "}; 
static A68_220   IFZACTR = {" */"}; 
A_GISVEC(A68_VC ,JFZACTR,HFZACTR,3)
A_GISVEC(A68_VC ,LFZACTR,IFZACTR,3)
static A68_211   OFZACTR = {""}; 
A_GISVEC(A68_VC ,PFZACTR,OFZACTR,0)
static A68_232   KGZACTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,MGZACTR,KGZACTR,10)
static A68_229   QGZACTR = {"if ( "}; 
A_GISVEC(A68_VC ,RGZACTR,QGZACTR,5)
static A68_219   VGZACTR = {" )"}; 
A_GISVEC(A68_VC ,WGZACTR,VGZACTR,2)
static A68_219   AHZACTR = {"{ "}; 
A_GISVEC(A68_VC ,BHZACTR,AHZACTR,2)
static A68_219   IHZACTR = {"} "}; 
A_GISVEC(A68_VC ,JHZACTR,IHZACTR,2)
static A68_40   NHZACTR = {"else"}; 
A_GISVEC(A68_VC ,OHZACTR,NHZACTR,4)
static A68_219   SHZACTR = {"{ "}; 
A_GISVEC(A68_VC ,THZACTR,SHZACTR,2)
static A68_232   AIZACTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,CIZACTR,AIZACTR,10)
static A68_234   GIZACTR = {"switch ( "}; 
A_GISVEC(A68_VC ,HIZACTR,GIZACTR,9)
static A68_219   LIZACTR = {" )"}; 
A_GISVEC(A68_VC ,MIZACTR,LIZACTR,2)
static A68_219   QIZACTR = {"{ "}; 
A_GISVEC(A68_VC ,RIZACTR,QIZACTR,2)
static A68_235   VIZACTR = {"case 1: "}; 
A_GISVEC(A68_VC ,WIZACTR,VIZACTR,8)
static A68_238   FJZACTR = {"united object - for case conformity"}; 
A_GISVEC(A68_VC ,GJZACTR,FJZACTR,35)
static A68_234   LJZACTR = {"switch ( "}; 
A_GISVEC(A68_VC ,MJZACTR,LJZACTR,9)
static A68_229   QJZACTR = {".mode"}; 
A_GISVEC(A68_VC ,RJZACTR,QJZACTR,5)
static A68_219   UJZACTR = {" )"}; 
A_GISVEC(A68_VC ,VJZACTR,UJZACTR,2)
static A68_219   ZJZACTR = {"{ "}; 
A_GISVEC(A68_VC ,AKZACTR,ZJZACTR,2)
static A68_240   IKZACTR = {"break;"}; 
A_GISVEC(A68_VC ,JKZACTR,IKZACTR,6)
static A68_229   NKZACTR = {"case "}; 
A_GISVEC(A68_VC ,OKZACTR,NKZACTR,5)
static A68_219   TKZACTR = {": "}; 
A_GISVEC(A68_VC ,UKZACTR,TKZACTR,2)
static A68_240   FLZACTR = {"break;"}; 
A_GISVEC(A68_VC ,GLZACTR,FLZACTR,6)
static A68_240   OLZACTR = {"break;"}; 
A_GISVEC(A68_VC ,PLZACTR,OLZACTR,6)
static A68_234   TLZACTR = {"default: "}; 
A_GISVEC(A68_VC ,ULZACTR,TLZACTR,9)
A68_60  ZLZACTR_outu;
static A68_242   GMZACTR = {"A_IMP_SKIP ;"}; 
A_GISVEC(A68_VC ,HMZACTR,GMZACTR,12)
static A68_240   OMZACTR = {"break;"}; 
A_GISVEC(A68_VC ,PMZACTR,OMZACTR,6)
static A68_219   TMZACTR = {"} "}; 
A_GISVEC(A68_VC ,UMZACTR,TMZACTR,2)
A68_241  ZMZACTR_esacu;
static A68_242   HNZACTR = {"A_IMP_SKIP ;"}; 
A_GISVEC(A68_VC ,INZACTR,HNZACTR,12)
static A68_219   ONZACTR = {"} "}; 
A_GISVEC(A68_VC ,PNZACTR,ONZACTR,2)
static A68_244   AOZACTR = {"optbool result"}; 
A_GISVEC(A68_VC ,COZACTR,AOZACTR,14)
static A68_220   JOZACTR = {" = "}; 
A_GISVEC(A68_VC ,KOZACTR,JOZACTR,3)
static A68_75   YOZACTR = {"if ( ! "}; 
A_GISVEC(A68_VC ,ZOZACTR,YOZACTR,7)
static A68_229   CPZACTR = {"if ( "}; 
A_GISVEC(A68_VC ,DPZACTR,CPZACTR,5)
static A68_219   HPZACTR = {" )"}; 
A_GISVEC(A68_VC ,IPZACTR,HPZACTR,2)
A68_208  VPZACTR_startseries;
static A68_210   LQZACTR = {"clauses: exit: end of series label not set"}; 
A_GISVEC(A68_VC ,MQZACTR,LQZACTR,42)
static A68_229   OQZACTR = {"goto "}; 
A_GISVEC(A68_VC ,PQZACTR,OQZACTR,5)
static A68_235   MRZACTR = {"#define "}; 
A_GISVEC(A68_VC ,NRZACTR,MRZACTR,8)
static A68_75   BSZACTR = {"#undef "}; 
A_GISVEC(A68_VC ,CSZACTR,BSZACTR,7)
static A68_249   WSZACTR = {"yield of code insert"}; 
A_GISVEC(A68_VC ,XSZACTR,WSZACTR,20)
static A68_240   ZSZACTR = {"RESULT"}; 
A_GISVEC(A68_VC ,CTZACTR,ZSZACTR,6)
static A68_240   ITZACTR = {"RESULT"}; 
A_GISVEC(A68_VC ,JTZACTR,ITZACTR,6)
typedef struct   /* env of non-global proc */
{
A68_INT  FRZACTR_stream;
A_PAD_INT(PAD_115)
} KRZACTR_emitdefine;
typedef struct   /* env of non-global proc */
{
A68_INT  FRZACTR_stream;
A_PAD_INT(PAD_116)
} ZRZACTR_emitundefine;
typedef struct   /* env of non-global proc */
{
A68_205  IRZACTR_emitdefine;
A68_248  JSZACTR_emitcode;
A68_76  XRZACTR_emitundefine;
A68_INT  Mode;
A_PAD_INT(PAD_117)
A68_98 * ERZACTR_result;
A68_VC  Code;
A68_INT  FRZACTR_stream;
A_PAD_INT(PAD_118)
} LSZACTR_emitcode;

A68_VOID  JZYACTR_startclause(A68_207  Properties, A68_85 ** Endofclause, A68_BOOL * Discardlevelactivated);

A68_VOID  PZYACTR_endclause(A68_207  Properties, A68_85 * Endofanswer, A68_85 * Endofclause, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack);

A_STATIC A68_BOOL  SZYACTR_cf(A68_INT  M1, A68_INT  M2);

A68_VOID  VZYACTR_evaluatenoresult(A68_101 ** Valuestack);

A68_VOID  TAZACTR_evaluateresult(A68_101 ** Valuestack, A68_109  Answer);

A_STATIC A68_95 * ABZACTR_assignment(A68_95 * YAZACTR_anonymous, A68_95  ZAZACTR_anonymous);

A68_VOID  RCZACTR_evaluatesimpleenquiry(A68_101 ** Valuestack, A68_109  Answer);

A68_VOID  ZCZACTR_begin(A68_BOOL  Seriescontainslabel, A68_BOOL  Routinebody);

A68_VOID  LDZACTR_end(A68_BOOL  Dynamicresult, A68_BOOL  Seriescontainsexit, A68_BOOL  Routinebody, A68_85 * Endofclauselabel);

A_STATIC A68_VOID  KEZACTR_outputcaseulabel(A68_INT  Mode, A68_INT  Casenumber, A68_77  Case);

A_STATIC A68_VOID  XFZACTR_subunionchoice(A68_154  Uchoice, A68_94  Union, A68_77  Case);

A68_VOID  JGZACTR_then(A68_94 * Enquiry);

A68_VOID  GHZACTR_else(void);

A68_VOID  ZHZACTR_casein(A68_94 * Enquiry);

A68_VOID  EJZACTR_inu(A68_154  Uchoice, A68_94 * Union, A68_77  Case);

A68_VOID  GKZACTR_comma(A68_INT  Caseno);

A68_VOID  CLZACTR_commau(A68_154  Uchoice, A68_94  Union, A68_77  Case);

A68_VOID  LLZACTR_out(void);

A68_VOID  DMZACTR_esac(A68_BOOL  Outpart, A68_109  Answer);

A68_VOID  DNZACTR_fi(A68_BOOL  Elsepart, A68_109  Answer);

A68_VOID  WNZACTR_optboolwarning(A68_BOOL  Orel, A68_94 * Operand1);

A68_VOID  PPZACTR_optbooloper(void);

A68_VOID  DQZACTR_endseries(A68_207  Properties, A68_109  Answer, A68_85 * Endofseries, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack, A68_BOOL  Seriescontainsexit);

A68_VOID  GQZACTR_semi(A68_BOOL  Outstandingdynamicresult, A68_BOOL  Declaration);

A68_VOID  KQZACTR_exit(A68_BOOL  Dynamicresult, A68_BOOL  Firstexit, A68_109  Seriesanswer);

A68_VOID  DRZACTR_codeinsert(A68_VC  Code, A68_INT  Mode, A68_101 * Visibles, A68_98  *ReturnedValue);

A_STATIC A68_VOID  JRZACTR_emitdefine(A68_VC  Symbol, A68_VC  Text, void *NonLocals);

A_STATIC A68_VOID  YRZACTR_emitundefine(A68_VC  Symbol, void *NonLocals);

A_STATIC A68_VOID  KSZACTR_emitcode(A68_101 * List, void *NonLocals);

A_STATIC A68_95 * ABZACTR_assignment(A68_95 * YAZACTR_anonymous, A68_95  ZAZACTR_anonymous)
{ 
A68_95  BBZACTR;  /* united object - for case conformity */
A68_VC  CBZACTR_anonymous;
A68_VC  DBZACTR;  /* OPERATORS - copy to flex */
A68_216 * EBZACTR;  /* YIELD */
A68_95 * FBZACTR;  /* clause result */
{ 
(*YAZACTR_anonymous) = ZAZACTR_anonymous;
BBZACTR = ZAZACTR_anonymous ;
switch ( BBZACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
CBZACTR_anonymous = (BBZACTR.data.mode6);
EBZACTR = &(YAZACTR_anonymous-> data.mode6) ;
(*EBZACTR) = A_VCOPY(CBZACTR_anonymous,DBZACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
FBZACTR = YAZACTR_anonymous;
} 
return( FBZACTR );
} 
#undef NL

A_STATIC A68_VOID  JRZACTR_emitdefine(A68_VC  Symbol, A68_VC  Text, void *NonLocals)
#define NL(x) (((KRZACTR_emitdefine *)NonLocals)->x)
{ 
A68_230  LRZACTR;  /* collateral clause result */
A68_93  ORZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PRZACTR;  /* YIELD */
A68_93  QRZACTR;  /* OPERATORS - mode -> union mode */
A68_93  RRZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  SRZACTR;  /* YIELD */
A68_93  TRZACTR;  /* OPERATORS - mode -> union mode */
A68_93  URZACTR;  /* OPERATORS - mode -> union mode */
A68_92  VRZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitdefine);
 /* line 541: */
PRZACTR = NRZACTR ;
LRZACTR.data[0] = A_UNITE(ORZACTR,mode2,2,PRZACTR);
LRZACTR.data[1] = A_UNITE(QRZACTR,mode2,2,Symbol);
SRZACTR = ' ' ;
LRZACTR.data[2] = A_UNITE(RRZACTR,mode1,1,SRZACTR);
 /* line 542: */
LRZACTR.data[3] = A_UNITE(TRZACTR,mode2,2,Text);
LRZACTR.data[4] = A_UNITE(URZACTR,mode4,4,EIAACTR_cnewline);
 /* line 543: */
MDMACTR_writecstream(A_HISVEC(VRZACTR,LRZACTR,5,A68_93 ), NL(FRZACTR_stream));
A_PROC_EXIT(emitdefine);
return;
} 
#undef NL

A_STATIC A68_VOID  YRZACTR_emitundefine(A68_VC  Symbol, void *NonLocals)
#define NL(x) (((ZRZACTR_emitundefine *)NonLocals)->x)
{ 
A68_212  ASZACTR;  /* collateral clause result */
A68_93  DSZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ESZACTR;  /* YIELD */
A68_93  FSZACTR;  /* OPERATORS - mode -> union mode */
A68_93  GSZACTR;  /* OPERATORS - mode -> union mode */
A68_92  HSZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitundefine);
 /* line 547: */
ESZACTR = CSZACTR ;
ASZACTR.data[0] = A_UNITE(DSZACTR,mode2,2,ESZACTR);
 /* line 548: */
ASZACTR.data[1] = A_UNITE(FSZACTR,mode2,2,Symbol);
ASZACTR.data[2] = A_UNITE(GSZACTR,mode4,4,EIAACTR_cnewline);
 /* line 549: */
MDMACTR_writecstream(A_HISVEC(HSZACTR,ASZACTR,3,A68_93 ), NL(FRZACTR_stream));
A_PROC_EXIT(emitundefine);
return;
} 
#undef NL

A_STATIC A68_VOID  KSZACTR_emitcode(A68_101 * List, void *NonLocals)
#define NL(x) (((LSZACTR_emitcode *)NonLocals)->x)
{ 
A68_INT  MSZACTR_id;
A68_95  NSZACTR;  /* united object - for case conformity */
A68_97  OSZACTR_i;
A68_VC  PSZACTR;  /* avoid structure result */
A68_VC  QSZACTR;  /* avoid structure result */
A68_VC  RSZACTR;  /* avoid structure result */
A68_96  SSZACTR_r;
A68_VC  TSZACTR;  /* avoid structure result */
A68_VC  USZACTR;  /* avoid structure result */
A68_VC  VSZACTR;  /* avoid structure result */
A68_98  YSZACTR;  /* avoid structure result */
A68_VC  ATZACTR;  /* OPERATORS - istruct -> vector */
A68_75  BTZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DTZACTR;  /* avoid structure result */
A68_93  ETZACTR;  /* OPERATORS - mode -> union mode */
A68_92  FTZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  GTZACTR;  /* OPERATORS - mode -> union mode */
A68_92  HTZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(emitcode);
 /* line 552: */
 /* line 553: */
{ 
 /* line 554: */
if ( (List!=MKJACTR_nilvaluelist) )
{ 
 /* line 555: */
 /* line 556: */
NSZACTR = (*(&((&(List->Value))->Extra))) ;
switch ( NSZACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
OSZACTR_i = (NSZACTR.data.mode4);
 /* line 557: */
{ 
MSZACTR_id = OSZACTR_i.Idno;
 /* line 558: */
UTKACTR_idfullname( MSZACTR_id, &PSZACTR );
LRKACTR_idname( MSZACTR_id, &QSZACTR );
A_CALLPROC(NL(IRZACTR_emitdefine),(QSZACTR, PSZACTR),(QSZACTR, PSZACTR,(NL(IRZACTR_emitdefine)).nonlocals));
 /* line 559: */
A_CALLPROC(NL(JSZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(JSZACTR_emitcode)).nonlocals));
 /* line 560: */
 /* line 561: */
 /* line 562: */
LRKACTR_idname( MSZACTR_id, &RSZACTR );
A_CALLPROC(NL(XRZACTR_emitundefine),(RSZACTR),(RSZACTR,(NL(XRZACTR_emitundefine)).nonlocals));
} 
break;
case 2: /* STRUCT(INT)  */
SSZACTR_r = (NSZACTR.data.mode2);
 /* line 563: */
{ 
MSZACTR_id = SSZACTR_r.Rdenno;
 /* line 564: */
UTKACTR_idfullname( MSZACTR_id, &TSZACTR );
LRKACTR_idname( MSZACTR_id, &USZACTR );
A_CALLPROC(NL(IRZACTR_emitdefine),(USZACTR, TSZACTR),(USZACTR, TSZACTR,(NL(IRZACTR_emitdefine)).nonlocals));
 /* line 565: */
A_CALLPROC(NL(JSZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(JSZACTR_emitcode)).nonlocals));
 /* line 566: */
 /* line 567: */
 /* line 568: */
LRKACTR_idname( MSZACTR_id, &VSZACTR );
A_CALLPROC(NL(XRZACTR_emitundefine),(VSZACTR),(VSZACTR,(NL(XRZACTR_emitundefine)).nonlocals));
} 
break;
default: 
PXIACTR_error(902);
 /* line 569: */
 /* line 570: */
 /* line 571: */
A_CALLPROC(NL(JSZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(JSZACTR_emitcode)).nonlocals));
break;
} 
} 
else
{ 
 /* line 572: */
if ( (NL(Mode)!=UEAACTR_voidmode) )
{ 
 /* line 575: */
LKOACTR_declarectemporary( NL(Mode), XSZACTR, &YSZACTR );
(*NL(ERZACTR_result)) = YSZACTR;
 /* line 576: */
 /* line 577: */
BTZACTR = (*(&(NL(ERZACTR_result)->Name))) ;
A_CALLPROC(NL(IRZACTR_emitdefine),(CTZACTR, A_HISVEC(ATZACTR,BTZACTR,7,A68_CHAR )),(CTZACTR, A_HISVEC(ATZACTR,BTZACTR,7,A68_CHAR ),(NL(IRZACTR_emitdefine)).nonlocals));
} 
 /* line 578: */
VJAACTR_curly( NL(Code), &DTZACTR );
MDMACTR_writecstream(A_HVEC(FTZACTR,A_UNITE(ETZACTR,mode2,2,DTZACTR),A68_93 ), NL(FRZACTR_stream));
 /* line 579: */
MDMACTR_writecstream(A_HVEC(HTZACTR,A_UNITE(GTZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), NL(FRZACTR_stream));
 /* line 580: */
 /* line 581: */
if ( (NL(Mode)!=UEAACTR_voidmode) )
{ 
 /* line 582: */
 /* line 583: */
 /* line 584: */
A_CALLPROC(NL(XRZACTR_emitundefine),(JTZACTR),(JTZACTR,(NL(XRZACTR_emitundefine)).nonlocals));
} 
} 
} 
A_PROC_EXIT(emitcode);
return;
} 
#undef NL
 /* line 56: */
 /* line 58: */

A68_VOID  JZYACTR_startclause(A68_207  Properties, A68_85 ** Endofclause, A68_BOOL * Discardlevelactivated)
{ 
A_PROC_ENTRY(startclause);
 /* line 65: */
 /* line 67: */
/*SKIP*/;
A_PROC_EXIT(startclause);
return;
} 
#undef NL
 /* line 71: */
 /* line 72: */
 /* line 73: */

A68_VOID  PZYACTR_endclause(A68_207  Properties, A68_85 * Endofanswer, A68_85 * Endofclause, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack)
{ 
A_PROC_ENTRY(endclause);
 /* line 81: */
 /* line 83: */
/*SKIP*/;
A_PROC_EXIT(endclause);
return;
} 
#undef NL

A_STATIC A68_BOOL  SZYACTR_cf(A68_INT  M1, A68_INT  M2)
{ 
A68_BOOL  TZYACTR;  /* clause result */
A_PROC_ENTRY(cf);
 /* line 89: */
TZYACTR = (HCNACTR_finddeflexmode(M1)==HCNACTR_finddeflexmode(M2));
A_PROC_EXIT(cf);
return( TZYACTR );
} 
#undef NL

A68_VOID  VZYACTR_evaluatenoresult(A68_101 ** Valuestack)
{ 
A68_94 * WZYACTR_value;
A68_95  XZYACTR;  /* united object - for case conformity */
A68_BOOL  YZYACTR;  /* clause result */
A68_BOOL  ZZYACTR;  /* clause result */
A68_INT  AAZACTR_codestream;
A68_212  DAZACTR;  /* collateral clause result */
A68_93  GAZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HAZACTR;  /* YIELD */
A68_VC  IAZACTR;  /* avoid structure result */
A68_93  JAZACTR;  /* OPERATORS - mode -> union mode */
A68_93  KAZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  LAZACTR;  /* YIELD */
A68_93  MAZACTR;  /* OPERATORS - mode -> union mode */
A68_92  NAZACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  QAZACTR;  /* optbool result */
A_PROC_ENTRY(evaluatenoresult);
 /* line 105: */
 /* line 106: */
{ 
 /* line 107: */
 /* line 108: */
if ( ((*Valuestack)!=MKJACTR_nilvaluelist) )
{ 
WZYACTR_value = (&((*Valuestack)->Value));
 /* line 109: */
XZYACTR = (*(&(WZYACTR_value->Extra))) ;
switch ( XZYACTR.mode )
{ 
case 3: /* VOID */
YZYACTR = A68_TRUE;
break;
default: 
 /* line 110: */
YZYACTR = A68_FALSE;
break;
} 
 /* line 111: */
 /* line 112: */
 /* line 113: */
ZZYACTR = (YZYACTR&((*(&(WZYACTR_value->Mode)))==UEAACTR_voidmode));
if ( ZZYACTR )
{ 
 /* line 114: */
 /* line 115: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
} 
else
{ 
AAZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 116: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
 /* line 117: */
A_CALLPROC(NWQACTR_evaluate,(WZYACTR_value),(WZYACTR_value,(NWQACTR_evaluate).nonlocals));
 /* line 118: */
 /* line 119: */
WXIACTR_assert(CAZACTR, ((*(&(WZYACTR_value->Mode)))==UEAACTR_voidmode));
 /* line 120: */
 /* line 121: */
if ( QWPACTR_isskip(WZYACTR_value) )
{ 
HAZACTR = FAZACTR ;
DAZACTR.data[0] = A_UNITE(GAZACTR,mode2,2,HAZACTR);
} 
else
{ 
GYPACTR_getcfragment( WZYACTR_value, &IAZACTR );
DAZACTR.data[0] = A_UNITE(JAZACTR,mode2,2,IAZACTR);
} 
 /* line 123: */
LAZACTR = ';' ;
DAZACTR.data[1] = A_UNITE(KAZACTR,mode1,1,LAZACTR);
DAZACTR.data[2] = A_UNITE(MAZACTR,mode4,4,EIAACTR_cnewline);
 /* line 124: */
 /* line 125: */
MDMACTR_writecstream(A_HISVEC(NAZACTR,DAZACTR,3,A68_93 ), AAZACTR_codestream);
} 
 /* line 126: */
 /* line 127: */
QAZACTR = (ZCHACTR_tracelevel(PAZACTR)!=0);
if ( QAZACTR )
{ /* line 128: */
QAZACTR = ((*Valuestack)!=MKJACTR_nilvaluelist);
}
if ( QAZACTR )
{ 
 /* line 129: */
 /* line 130: */
 /* line 131: */
A_CALLPROC(YEVACTR_calltrace,((&((*Valuestack)->Value)), A68_FALSE),((&((*Valuestack)->Value)), A68_FALSE,(YEVACTR_calltrace).nonlocals));
} 
} 
} 
A_PROC_EXIT(evaluatenoresult);
return;
} 
#undef NL

A68_VOID  TAZACTR_evaluateresult(A68_101 ** Valuestack, A68_109  Answer)
{ 
A68_94 * UAZACTR_ansvalue;
A68_INT  VAZACTR_codestream;
A68_95  WAZACTR;  /* united object - for case conformity */
A68_98  HBZACTR;  /* avoid structure result */
A68_95  IBZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JBZACTR;  /* clause result */
A68_VC  KBZACTR;  /* avoid structure result */
A68_98  LBZACTR_t;
A68_VC  MBZACTR;  /* OPERATORS - istruct -> vector */
A68_75  NBZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  OBZACTR_c;
A68_VC  TBZACTR_assignee;
A68_94 * UBZACTR_value;
A68_93  ZBZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ACZACTR;  /* YIELD */
A68_92  BCZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_221  CCZACTR;  /* collateral clause result */
A68_93  DCZACTR;  /* OPERATORS - mode -> union mode */
A68_93  GCZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HCZACTR;  /* YIELD */
A68_VC  ICZACTR;  /* avoid structure result */
A68_93  JCZACTR;  /* OPERATORS - mode -> union mode */
A68_93  KCZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  LCZACTR;  /* YIELD */
A68_92  MCZACTR;  /* OPERATORS - istruct -> vector */
A68_93  NCZACTR;  /* OPERATORS - mode -> union mode */
A68_92  OCZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(evaluateresult);
 /* line 146: */
 /* line 147: */
{ 
UAZACTR_ansvalue = Answer.Value;
 /* line 148: */
 /* line 149: */
if ( ((*(&(UAZACTR_ansvalue->Mode)))==UEAACTR_voidmode) )
{ 
 /* line 150: */
 /* line 151: */
VZYACTR_evaluatenoresult(Valuestack);
} 
else
{ 
VAZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 153: */
 /* line 154: */
 /* line 155: */
WAZACTR = (*(&(UAZACTR_ansvalue->Extra))) ;
switch ( WAZACTR.mode )
{ 
case 3: /* VOID */
 /* line 156: */
 /* line 157: */
{ 
 /* line 159: */
 /* line 161: */
LKOACTR_declarectemporary( (*(&(UAZACTR_ansvalue->Mode))), GBZACTR, &HBZACTR );
ABZACTR_assignment((&(UAZACTR_ansvalue->Extra)), A_UNITE(IBZACTR,mode5,5,HBZACTR));
 /* line 162: */
 /* line 163: */
 /* line 164: */
GYPACTR_getcfragment( UAZACTR_ansvalue, &KBZACTR );
JBZACTR = KBZACTR;
} 
break;
case 5: /* STRUCT(MODE75,INT)  */
LBZACTR_t = (WAZACTR.data.mode5);
 /* line 165: */
 /* line 166: */
NBZACTR = LBZACTR_t.Name ;
JBZACTR = A_HISVEC(MBZACTR,NBZACTR,7,A68_CHAR );
break;
case 6: /* VECTOR [] CHAR */
OBZACTR_c = (WAZACTR.data.mode6);
 /* line 167: */
 /* line 168: */
JBZACTR = OBZACTR_c;
break;
default: 
WXIACTR_assert(QBZACTR, A68_FALSE);
 /* line 169: */
JBZACTR = SBZACTR;
break;
} 
TBZACTR_assignee = JBZACTR;
 /* line 171: */
UBZACTR_value = (&((*Valuestack)->Value));
 /* line 172: */
HKVACTR_evaluatestack(Valuestack);
 /* line 173: */
 /* line 174: */
WXIACTR_assert(WBZACTR, SZYACTR_cf((*(&(UAZACTR_ansvalue->Mode))), (*(&((&((*Valuestack)->Value))->Mode)))));
 /* line 175: */
 /* line 176: */
if ( QWPACTR_isskip(UBZACTR_value) )
{ 
 /* line 177: */
 /* line 178: */
ACZACTR = YBZACTR ;
MDMACTR_writecstream(A_HVEC(BCZACTR,A_UNITE(ZBZACTR,mode2,2,ACZACTR),A68_93 ), VAZACTR_codestream);
} 
else
{ 
CCZACTR.data[0] = A_UNITE(DCZACTR,mode2,2,TBZACTR_assignee);
HCZACTR = FCZACTR ;
CCZACTR.data[1] = A_UNITE(GCZACTR,mode2,2,HCZACTR);
GYPACTR_getcfragment( UBZACTR_value, &ICZACTR );
CCZACTR.data[2] = A_UNITE(JCZACTR,mode2,2,ICZACTR);
LCZACTR = ';' ;
CCZACTR.data[3] = A_UNITE(KCZACTR,mode1,1,LCZACTR);
 /* line 180: */
 /* line 181: */
MDMACTR_writecstream(A_HISVEC(MCZACTR,CCZACTR,4,A68_93 ), VAZACTR_codestream);
} 
 /* line 182: */
MDMACTR_writecstream(A_HVEC(OCZACTR,A_UNITE(NCZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), VAZACTR_codestream);
 /* line 183: */
 /* line 184: */
 /* line 185: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
} 
} 
A_PROC_EXIT(evaluateresult);
return;
} 
#undef NL
 /* line 190: */

A68_VOID  RCZACTR_evaluatesimpleenquiry(A68_101 ** Valuestack, A68_109  Answer)
{ 
A68_94 * SCZACTR_value;
A68_VC  VCZACTR;  /* avoid structure result */
A68_95  WCZACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(evaluatesimpleenquiry);
 /* line 196: */
 /* line 197: */
{ 
SCZACTR_value = (&((*Valuestack)->Value));
 /* line 198: */
HKVACTR_evaluatestack(Valuestack);
 /* line 199: */
 /* line 200: */
WXIACTR_assert(UCZACTR, SZYACTR_cf((*(&(Answer.Value->Mode))), (*(&(SCZACTR_value->Mode)))));
 /* line 201: */
GYPACTR_getcfragment( SCZACTR_value, &VCZACTR );
ABZACTR_assignment((&(Answer.Value->Extra)), A_UNITE(WCZACTR,mode6,6,VCZACTR));
 /* line 202: */
 /* line 203: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
} 
A_PROC_EXIT(evaluatesimpleenquiry);
return;
} 
#undef NL

A68_VOID  ZCZACTR_begin(A68_BOOL  Seriescontainslabel, A68_BOOL  Routinebody)
{ 
A68_224  ADZACTR;  /* collateral clause result */
A68_93  DDZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EDZACTR;  /* YIELD */
A68_93  FDZACTR;  /* OPERATORS - mode -> union mode */
A68_92  GDZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(begin);
 /* line 211: */
 /* line 212: */
EDZACTR = CDZACTR ;
ADZACTR.data[0] = A_UNITE(DDZACTR,mode2,2,EDZACTR);
ADZACTR.data[1] = A_UNITE(FDZACTR,mode4,4,EIAACTR_cnewline);
 /* line 213: */
MDMACTR_writecstream(A_HISVEC(GDZACTR,ADZACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
A_PROC_EXIT(begin);
return;
} 
#undef NL
 /* line 218: */

A68_VOID  LDZACTR_end(A68_BOOL  Dynamicresult, A68_BOOL  Seriescontainsexit, A68_BOOL  Routinebody, A68_85 * Endofclauselabel)
{ 
A68_INT  MDZACTR_codestream;
A68_212  PDZACTR;  /* collateral clause result */
A68_VC  QDZACTR;  /* OPERATORS - istruct -> vector */
A68_75  RDZACTR;  /* OPERATORS - istruct -> vector */
A68_93  SDZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TDZACTR;  /* YIELD */
A68_93  WDZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XDZACTR;  /* YIELD */
A68_93  YDZACTR;  /* OPERATORS - mode -> union mode */
A68_92  ZDZACTR;  /* OPERATORS - istruct -> vector */
A68_224  AEZACTR;  /* collateral clause result */
A68_93  DEZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EEZACTR;  /* YIELD */
A68_93  FEZACTR;  /* OPERATORS - mode -> union mode */
A68_92  GEZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(end);
 /* line 219: */
 /* line 220: */
{ 
MDZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 221: */
 /* line 222: */
 /* line 223: */
if ( Seriescontainsexit )
{ 
WXIACTR_assert(ODZACTR, (Endofclauselabel!=(A68_85 *)A68_NIL));
 /* line 224: */
 /* line 225: */
RDZACTR = (*(&(Endofclauselabel->Name))) ;
TDZACTR = A_HISVEC(QDZACTR,RDZACTR,7,A68_CHAR ) ;
PDZACTR.data[0] = A_UNITE(SDZACTR,mode2,2,TDZACTR);
 /* line 226: */
XDZACTR = VDZACTR ;
PDZACTR.data[1] = A_UNITE(WDZACTR,mode2,2,XDZACTR);
PDZACTR.data[2] = A_UNITE(YDZACTR,mode4,4,EIAACTR_cnewline);
 /* line 227: */
 /* line 228: */
MDMACTR_writecstream(A_HISVEC(ZDZACTR,PDZACTR,3,A68_93 ), MDZACTR_codestream);
} 
 /* line 229: */
EEZACTR = CEZACTR ;
AEZACTR.data[0] = A_UNITE(DEZACTR,mode2,2,EEZACTR);
AEZACTR.data[1] = A_UNITE(FEZACTR,mode4,4,EIAACTR_cnewline);
 /* line 230: */
MDMACTR_writecstream(A_HISVEC(GEZACTR,AEZACTR,2,A68_93 ), MDZACTR_codestream);
} 
A_PROC_EXIT(end);
return;
} 
#undef NL
 /* line 250: */

A_STATIC A68_VOID  KEZACTR_outputcaseulabel(A68_INT  Mode, A68_INT  Casenumber, A68_77  Case)
{ 
A68_INT  LEZACTR_codestream;
A68_VC  MEZACTR;  /* avoid structure result */
A68_70  NEZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_224  OEZACTR;  /* collateral clause result */
A68_93  REZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SEZACTR;  /* YIELD */
A68_93  TEZACTR;  /* OPERATORS - mode -> union mode */
A68_92  UEZACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL * VEZACTR;  /* YIELD */
A68_230  WEZACTR;  /* collateral clause result */
A68_93  ZEZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AFZACTR;  /* YIELD */
A68_VC  BFZACTR;  /* avoid structure result */
A68_93  CFZACTR;  /* OPERATORS - mode -> union mode */
A68_93  FFZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GFZACTR;  /* YIELD */
A68_VC  KFZACTR;  /* avoid structure result */
A68_93  MFZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NFZACTR;  /* YIELD */
A68_93  QFZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RFZACTR;  /* YIELD */
A68_93  SFZACTR;  /* OPERATORS - mode -> union mode */
A68_92  TFZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outputcaseulabel);
 /* line 256: */
 /* line 257: */
{ 
LEZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 258: */
 /* line 259: */
 /* line 260: */
if ( (*(&A_R1INDEX(Case,Casenumber))) )
{ 
WCNACTR_modename( Mode, &MEZACTR );
NWIACTR_pmessage(720, A_HARR(NEZACTR,MEZACTR,A68_VC ));
 /* line 261: */
 /* line 262: */
 /* line 264: */
SEZACTR = QEZACTR ;
OEZACTR.data[0] = A_UNITE(REZACTR,mode2,2,SEZACTR);
OEZACTR.data[1] = A_UNITE(TEZACTR,mode4,4,EIAACTR_cnewline);
 /* line 265: */
 /* line 266: */
 /* line 267: */
MDMACTR_writecstream(A_HISVEC(UEZACTR,OEZACTR,2,A68_93 ), LEZACTR_codestream);
} 
else
{ 
VEZACTR = (&A_R1INDEX(Case,Casenumber)) ;
(*VEZACTR) = A68_TRUE;
 /* line 268: */
 /* line 269: */
AFZACTR = YEZACTR ;
WEZACTR.data[0] = A_UNITE(ZEZACTR,mode2,2,AFZACTR);
ROAAOSF_whole( Casenumber, 0, &BFZACTR );
WEZACTR.data[1] = A_UNITE(CFZACTR,mode2,2,BFZACTR);
 /* line 270: */
GFZACTR = EFZACTR ;
WEZACTR.data[2] = A_UNITE(FFZACTR,mode2,2,GFZACTR);
 /* line 271: */
if ( AQIACTR_verboseoption )
{ 
 /* line 272: */
 /* line 273: */
WCNACTR_modename( Mode, &KFZACTR );
NFZACTR = A_VC_PLUS(A_VC_PLUS(JFZACTR,KFZACTR),LFZACTR) ;
WEZACTR.data[3] = A_UNITE(MFZACTR,mode2,2,NFZACTR);
} 
else
{ 
 /* line 274: */
RFZACTR = PFZACTR ;
WEZACTR.data[3] = A_UNITE(QFZACTR,mode2,2,RFZACTR);
} 
WEZACTR.data[4] = A_UNITE(SFZACTR,mode4,4,EIAACTR_cnewline);
 /* line 275: */
 /* line 276: */
 /* line 277: */
MDMACTR_writecstream(A_HISVEC(TFZACTR,WEZACTR,5,A68_93 ), LEZACTR_codestream);
} 
} 
A_PROC_EXIT(outputcaseulabel);
return;
} 
#undef NL
 /* line 281: */
 /* line 283: */

A_STATIC A68_VOID  XFZACTR_subunionchoice(A68_154  Uchoice, A68_94  Union, A68_77  Case)
{ 
A68_172  YFZACTR;  /* avoid structure result */
A68_172  ZFZACTR_modesofunion;
A68_172  AGZACTR;  /* avoid structure result */
A68_VC  BGZACTR;  /* avoid structure result */
A68_VC  CGZACTR;  /* OPERATORS - trim index */
A68_VC  DGZACTR;  /* YIELD */
A68_RC  EGZACTR;  /* OPERATORS - vector -> row */
A68_RC  FGZACTR_table;
A68_INT  GGZACTR_i;
A68_INT  HGZACTR;  /* to part of loop */
A_PROC_ENTRY(subunionchoice);
 /* line 288: */
 /* line 289: */
{ 
A_CALLPROC(YVMACTR_constituents,(Union.Mode, &YFZACTR),(Union.Mode, &YFZACTR,(YVMACTR_constituents).nonlocals));
ZFZACTR_modesofunion = YFZACTR;
 /* line 290: */
 /* line 292: */
 /* line 293: */
 /* line 294: */
A_CALLPROC(YVMACTR_constituents,(Uchoice.Mode, &AGZACTR),(Uchoice.Mode, &AGZACTR,(YVMACTR_constituents).nonlocals));
IVQACTR_uniontouniontable( ZFZACTR_modesofunion, AGZACTR, &BGZACTR );
DGZACTR = A_VTRIM(CGZACTR,(BGZACTR),A_VTSCRIPT(&(CGZACTR.upb),(BGZACTR).upb,1,(BGZACTR).upb)) ;
FGZACTR_table = A_VECARR(DGZACTR,EGZACTR);
 /* line 295: */
 /* line 296: */
HGZACTR = FGZACTR_table.dim[0].upb;
for ( GGZACTR_i = 1;
GGZACTR_i <= HGZACTR;
GGZACTR_i += 1 )
{ 
 /* line 297: */
if ( ((A68_INT)(unsigned char)A_R1INDEX(FGZACTR_table,GGZACTR_i)!=0) )
{ 
 /* line 298: */
 /* line 299: */
KEZACTR_outputcaseulabel((*(&A_VINDEX(ZFZACTR_modesofunion,GGZACTR_i))), GGZACTR_i, Case);
} 
}
 /* line 300: */
 /* line 301: */
/*SKIP*/;
} 
A_PROC_EXIT(subunionchoice);
return;
} 
#undef NL

A68_VOID  JGZACTR_then(A68_94 * Enquiry)
{ 
A68_VC  LGZACTR;  /* clause result */
A68_VC  NGZACTR;  /* avoid structure result */
A68_VC  OGZACTR_booleanexpr;
A68_233  PGZACTR;  /* collateral clause result */
A68_93  SGZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TGZACTR;  /* YIELD */
A68_93  UGZACTR;  /* OPERATORS - mode -> union mode */
A68_93  XGZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YGZACTR;  /* YIELD */
A68_93  ZGZACTR;  /* OPERATORS - mode -> union mode */
A68_93  CHZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DHZACTR;  /* YIELD */
A68_93  EHZACTR;  /* OPERATORS - mode -> union mode */
A68_92  FHZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(then);
 /* line 304: */
 /* line 306: */
{ 
 /* line 307: */
 /* line 308: */
if ( QWPACTR_isskip(Enquiry) )
{ 
 /* line 309: */
LGZACTR = MGZACTR;
} 
else
{ 
GYPACTR_getcfragment( Enquiry, &NGZACTR );
LGZACTR = NGZACTR;
} 
OGZACTR_booleanexpr = LGZACTR;
 /* line 310: */
 /* line 311: */
TGZACTR = RGZACTR ;
PGZACTR.data[0] = A_UNITE(SGZACTR,mode2,2,TGZACTR);
PGZACTR.data[1] = A_UNITE(UGZACTR,mode2,2,OGZACTR_booleanexpr);
YGZACTR = WGZACTR ;
PGZACTR.data[2] = A_UNITE(XGZACTR,mode2,2,YGZACTR);
 /* line 312: */
PGZACTR.data[3] = A_UNITE(ZGZACTR,mode4,4,EIAACTR_cnewline);
 /* line 313: */
DHZACTR = BHZACTR ;
PGZACTR.data[4] = A_UNITE(CHZACTR,mode2,2,DHZACTR);
PGZACTR.data[5] = A_UNITE(EHZACTR,mode4,4,EIAACTR_cnewline);
 /* line 314: */
 /* line 315: */
MDMACTR_writecstream(A_HISVEC(FHZACTR,PGZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
A_PROC_EXIT(then);
return;
} 
#undef NL

A68_VOID  GHZACTR_else(void)
{ 
A68_233  HHZACTR;  /* collateral clause result */
A68_93  KHZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LHZACTR;  /* YIELD */
A68_93  MHZACTR;  /* OPERATORS - mode -> union mode */
A68_93  PHZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QHZACTR;  /* YIELD */
A68_93  RHZACTR;  /* OPERATORS - mode -> union mode */
A68_93  UHZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VHZACTR;  /* YIELD */
A68_93  WHZACTR;  /* OPERATORS - mode -> union mode */
A68_92  XHZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(else);
LHZACTR = JHZACTR ;
HHZACTR.data[0] = A_UNITE(KHZACTR,mode2,2,LHZACTR);
HHZACTR.data[1] = A_UNITE(MHZACTR,mode4,4,EIAACTR_cnewline);
QHZACTR = OHZACTR ;
HHZACTR.data[2] = A_UNITE(PHZACTR,mode2,2,QHZACTR);
HHZACTR.data[3] = A_UNITE(RHZACTR,mode4,4,EIAACTR_cnewline);
 /* line 321: */
VHZACTR = THZACTR ;
HHZACTR.data[4] = A_UNITE(UHZACTR,mode2,2,VHZACTR);
HHZACTR.data[5] = A_UNITE(WHZACTR,mode4,4,EIAACTR_cnewline);
 /* line 322: */
 /* line 323: */
MDMACTR_writecstream(A_HISVEC(XHZACTR,HHZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
A_PROC_EXIT(else);
return;
} 
#undef NL

A68_VOID  ZHZACTR_casein(A68_94 * Enquiry)
{ 
A68_VC  BIZACTR;  /* clause result */
A68_VC  DIZACTR;  /* avoid structure result */
A68_VC  EIZACTR_integerexpr;
A68_236  FIZACTR;  /* collateral clause result */
A68_93  IIZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JIZACTR;  /* YIELD */
A68_93  KIZACTR;  /* OPERATORS - mode -> union mode */
A68_93  NIZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OIZACTR;  /* YIELD */
A68_93  PIZACTR;  /* OPERATORS - mode -> union mode */
A68_93  SIZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TIZACTR;  /* YIELD */
A68_93  UIZACTR;  /* OPERATORS - mode -> union mode */
A68_93  XIZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YIZACTR;  /* YIELD */
A68_93  ZIZACTR;  /* OPERATORS - mode -> union mode */
A68_92  AJZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(casein);
 /* line 326: */
 /* line 328: */
{ 
 /* line 329: */
 /* line 330: */
if ( QWPACTR_isskip(Enquiry) )
{ 
 /* line 331: */
BIZACTR = CIZACTR;
} 
else
{ 
GYPACTR_getcfragment( Enquiry, &DIZACTR );
BIZACTR = DIZACTR;
} 
EIZACTR_integerexpr = BIZACTR;
 /* line 332: */
 /* line 333: */
JIZACTR = HIZACTR ;
FIZACTR.data[0] = A_UNITE(IIZACTR,mode2,2,JIZACTR);
FIZACTR.data[1] = A_UNITE(KIZACTR,mode2,2,EIZACTR_integerexpr);
OIZACTR = MIZACTR ;
FIZACTR.data[2] = A_UNITE(NIZACTR,mode2,2,OIZACTR);
 /* line 334: */
FIZACTR.data[3] = A_UNITE(PIZACTR,mode4,4,EIAACTR_cnewline);
TIZACTR = RIZACTR ;
FIZACTR.data[4] = A_UNITE(SIZACTR,mode2,2,TIZACTR);
 /* line 335: */
FIZACTR.data[5] = A_UNITE(UIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 336: */
YIZACTR = WIZACTR ;
FIZACTR.data[6] = A_UNITE(XIZACTR,mode2,2,YIZACTR);
FIZACTR.data[7] = A_UNITE(ZIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 337: */
 /* line 338: */
MDMACTR_writecstream(A_HISVEC(AJZACTR,FIZACTR,8,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
A_PROC_EXIT(casein);
return;
} 
#undef NL
 /* line 342: */
 /* line 344: */

A68_VOID  EJZACTR_inu(A68_154  Uchoice, A68_94 * Union, A68_77  Case)
{ 
A68_VC  HJZACTR;  /* avoid structure result */
A68_VC  IJZACTR_unitedobject;
A68_INT  JJZACTR_codestream;
A68_239  KJZACTR;  /* collateral clause result */
A68_93  NJZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OJZACTR;  /* YIELD */
A68_93  PJZACTR;  /* OPERATORS - mode -> union mode */
A68_93  SJZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TJZACTR;  /* YIELD */
A68_93  WJZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XJZACTR;  /* YIELD */
A68_93  YJZACTR;  /* OPERATORS - mode -> union mode */
A68_93  BKZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CKZACTR;  /* YIELD */
A68_93  DKZACTR;  /* OPERATORS - mode -> union mode */
A68_92  EKZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(inu);
 /* line 345: */
 /* line 348: */
{ 
GYPACTR_getcfragment( VOQACTR_yield(GJZACTR, Union), &HJZACTR );
IJZACTR_unitedobject = HJZACTR;
 /* line 349: */
JJZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 350: */
 /* line 351: */
OJZACTR = MJZACTR ;
KJZACTR.data[0] = A_UNITE(NJZACTR,mode2,2,OJZACTR);
KJZACTR.data[1] = A_UNITE(PJZACTR,mode2,2,IJZACTR_unitedobject);
TJZACTR = RJZACTR ;
KJZACTR.data[2] = A_UNITE(SJZACTR,mode2,2,TJZACTR);
XJZACTR = VJZACTR ;
KJZACTR.data[3] = A_UNITE(WJZACTR,mode2,2,XJZACTR);
 /* line 352: */
KJZACTR.data[4] = A_UNITE(YJZACTR,mode4,4,EIAACTR_cnewline);
 /* line 353: */
CKZACTR = AKZACTR ;
KJZACTR.data[5] = A_UNITE(BKZACTR,mode2,2,CKZACTR);
KJZACTR.data[6] = A_UNITE(DKZACTR,mode4,4,EIAACTR_cnewline);
 /* line 354: */
MDMACTR_writecstream(A_HISVEC(EKZACTR,KJZACTR,7,A68_93 ), JJZACTR_codestream);
 /* line 355: */
 /* line 356: */
 /* line 357: */
if ( (Uchoice.Param<0) )
{ 
 /* line 358: */
XFZACTR_subunionchoice(Uchoice, (*Union), Case);
} 
else
{ 
 /* line 359: */
 /* line 360: */
KEZACTR_outputcaseulabel(Uchoice.Mode, Uchoice.Param, Case);
} 
} 
A_PROC_EXIT(inu);
return;
} 
#undef NL

A68_VOID  GKZACTR_comma(A68_INT  Caseno)
{ 
A68_233  HKZACTR;  /* collateral clause result */
A68_93  KKZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LKZACTR;  /* YIELD */
A68_93  MKZACTR;  /* OPERATORS - mode -> union mode */
A68_93  PKZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QKZACTR;  /* YIELD */
A68_VC  RKZACTR;  /* avoid structure result */
A68_93  SKZACTR;  /* OPERATORS - mode -> union mode */
A68_93  VKZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WKZACTR;  /* YIELD */
A68_93  XKZACTR;  /* OPERATORS - mode -> union mode */
A68_92  YKZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(comma);
 /* line 363: */
 /* line 365: */
LKZACTR = JKZACTR ;
HKZACTR.data[0] = A_UNITE(KKZACTR,mode2,2,LKZACTR);
 /* line 366: */
HKZACTR.data[1] = A_UNITE(MKZACTR,mode4,4,EIAACTR_cnewline);
QKZACTR = OKZACTR ;
HKZACTR.data[2] = A_UNITE(PKZACTR,mode2,2,QKZACTR);
ROAAOSF_whole( Caseno, 0, &RKZACTR );
HKZACTR.data[3] = A_UNITE(SKZACTR,mode2,2,RKZACTR);
 /* line 367: */
WKZACTR = UKZACTR ;
HKZACTR.data[4] = A_UNITE(VKZACTR,mode2,2,WKZACTR);
HKZACTR.data[5] = A_UNITE(XKZACTR,mode4,4,EIAACTR_cnewline);
 /* line 368: */
 /* line 369: */
MDMACTR_writecstream(A_HISVEC(YKZACTR,HKZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
A_PROC_EXIT(comma);
return;
} 
#undef NL
 /* line 373: */
 /* line 375: */

A68_VOID  CLZACTR_commau(A68_154  Uchoice, A68_94  Union, A68_77  Case)
{ 
A68_INT  DLZACTR_codestream;
A68_224  ELZACTR;  /* collateral clause result */
A68_93  HLZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ILZACTR;  /* YIELD */
A68_93  JLZACTR;  /* OPERATORS - mode -> union mode */
A68_92  KLZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(commau);
 /* line 376: */
 /* line 377: */
{ 
DLZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 378: */
ILZACTR = GLZACTR ;
ELZACTR.data[0] = A_UNITE(HLZACTR,mode2,2,ILZACTR);
ELZACTR.data[1] = A_UNITE(JLZACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(KLZACTR,ELZACTR,2,A68_93 ), DLZACTR_codestream);
 /* line 379: */
 /* line 380: */
 /* line 381: */
if ( (Uchoice.Param<0) )
{ 
 /* line 382: */
XFZACTR_subunionchoice(Uchoice, Union, Case);
} 
else
{ 
 /* line 383: */
 /* line 384: */
KEZACTR_outputcaseulabel(Uchoice.Mode, Uchoice.Param, Case);
} 
} 
A_PROC_EXIT(commau);
return;
} 
#undef NL

A68_VOID  LLZACTR_out(void)
{ 
A68_INT  MLZACTR_codestream;
A68_221  NLZACTR;  /* collateral clause result */
A68_93  QLZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RLZACTR;  /* YIELD */
A68_93  SLZACTR;  /* OPERATORS - mode -> union mode */
A68_93  VLZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WLZACTR;  /* YIELD */
A68_93  XLZACTR;  /* OPERATORS - mode -> union mode */
A68_92  YLZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(out);
{ 
MLZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 389: */
 /* line 390: */
RLZACTR = PLZACTR ;
NLZACTR.data[0] = A_UNITE(QLZACTR,mode2,2,RLZACTR);
NLZACTR.data[1] = A_UNITE(SLZACTR,mode4,4,EIAACTR_cnewline);
WLZACTR = ULZACTR ;
NLZACTR.data[2] = A_UNITE(VLZACTR,mode2,2,WLZACTR);
NLZACTR.data[3] = A_UNITE(XLZACTR,mode4,4,EIAACTR_cnewline);
 /* line 392: */
 /* line 393: */
MDMACTR_writecstream(A_HISVEC(YLZACTR,NLZACTR,4,A68_93 ), MLZACTR_codestream);
} 
A_PROC_EXIT(out);
return;
} 
#undef NL

A68_VOID  DMZACTR_esac(A68_BOOL  Outpart, A68_109  Answer)
{ 
A68_INT  EMZACTR_codestream;
A68_INT  FMZACTR_resultmode;
A68_93  IMZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JMZACTR;  /* YIELD */
A68_92  KMZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  LMZACTR;  /* OPERATORS - mode -> union mode */
A68_92  MMZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_221  NMZACTR;  /* collateral clause result */
A68_93  QMZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RMZACTR;  /* YIELD */
A68_93  SMZACTR;  /* OPERATORS - mode -> union mode */
A68_93  VMZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WMZACTR;  /* YIELD */
A68_93  XMZACTR;  /* OPERATORS - mode -> union mode */
A68_92  YMZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(esac);
 /* line 398: */
 /* line 399: */
{ 
EMZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 400: */
FMZACTR_resultmode = (*(&(Answer.Value->Mode)));
 /* line 402: */
 /* line 403: */
 /* line 404: */
if ( !Outpart )
{ 
 /* line 405: */
 /* line 407: */
if ( ((FMZACTR_resultmode==UEAACTR_voidmode)&EQIACTR_skipoption) )
{ 
 /* line 410: */
/*SKIP*/;
} 
else
{ 
LLZACTR_out();
 /* line 411: */
JMZACTR = HMZACTR ;
MDMACTR_writecstream(A_HVEC(KMZACTR,A_UNITE(IMZACTR,mode2,2,JMZACTR),A68_93 ), EMZACTR_codestream);
 /* line 412: */
 /* line 413: */
 /* line 414: */
MDMACTR_writecstream(A_HVEC(MMZACTR,A_UNITE(LMZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), EMZACTR_codestream);
} 
} 
 /* line 415: */
 /* line 416: */
RMZACTR = PMZACTR ;
NMZACTR.data[0] = A_UNITE(QMZACTR,mode2,2,RMZACTR);
NMZACTR.data[1] = A_UNITE(SMZACTR,mode4,4,EIAACTR_cnewline);
WMZACTR = UMZACTR ;
NMZACTR.data[2] = A_UNITE(VMZACTR,mode2,2,WMZACTR);
NMZACTR.data[3] = A_UNITE(XMZACTR,mode4,4,EIAACTR_cnewline);
 /* line 418: */
 /* line 419: */
MDMACTR_writecstream(A_HISVEC(YMZACTR,NMZACTR,4,A68_93 ), EMZACTR_codestream);
} 
A_PROC_EXIT(esac);
return;
} 
#undef NL

A68_VOID  DNZACTR_fi(A68_BOOL  Elsepart, A68_109  Answer)
{ 
A68_INT  ENZACTR_codestream;
A68_INT  FNZACTR_resultmode;
A68_224  GNZACTR;  /* collateral clause result */
A68_93  JNZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KNZACTR;  /* YIELD */
A68_93  LNZACTR;  /* OPERATORS - mode -> union mode */
A68_92  MNZACTR;  /* OPERATORS - istruct -> vector */
A68_224  NNZACTR;  /* collateral clause result */
A68_93  QNZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RNZACTR;  /* YIELD */
A68_93  SNZACTR;  /* OPERATORS - mode -> union mode */
A68_92  TNZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(fi);
 /* line 424: */
 /* line 425: */
{ 
ENZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 426: */
FNZACTR_resultmode = (*(&(Answer.Value->Mode)));
 /* line 427: */
 /* line 428: */
if ( !Elsepart )
{ 
 /* line 429: */
 /* line 431: */
if ( !(FNZACTR_resultmode==UEAACTR_voidmode) )
{ 
GHZACTR_else();
 /* line 432: */
KNZACTR = INZACTR ;
GNZACTR.data[0] = A_UNITE(JNZACTR,mode2,2,KNZACTR);
GNZACTR.data[1] = A_UNITE(LNZACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(MNZACTR,GNZACTR,2,A68_93 ), ENZACTR_codestream);
 /* line 433: */
 /* line 434: */
 /* line 435: */
JXIACTR_warning(316);
} 
} 
 /* line 436: */
RNZACTR = PNZACTR ;
NNZACTR.data[0] = A_UNITE(QNZACTR,mode2,2,RNZACTR);
NNZACTR.data[1] = A_UNITE(SNZACTR,mode4,4,EIAACTR_cnewline);
 /* line 437: */
MDMACTR_writecstream(A_HISVEC(TNZACTR,NNZACTR,2,A68_93 ), ENZACTR_codestream);
} 
A_PROC_EXIT(fi);
return;
} 
#undef NL
 /* line 447: */

A68_VOID  WNZACTR_optboolwarning(A68_BOOL  Orel, A68_94 * Operand1)
{ 
A68_INT  XNZACTR_codestream;
A68_VC  YNZACTR;  /* clause result */
A68_VC  ZNZACTR;  /* avoid structure result */
A68_98  DOZACTR;  /* avoid structure result */
A68_98  BOZACTR_temp;
A68_230  EOZACTR;  /* collateral clause result */
A68_VC  FOZACTR;  /* OPERATORS - istruct -> vector */
A68_75  GOZACTR;  /* OPERATORS - istruct -> vector */
A68_93  HOZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IOZACTR;  /* YIELD */
A68_93  LOZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MOZACTR;  /* YIELD */
A68_VC  NOZACTR;  /* avoid structure result */
A68_93  OOZACTR;  /* OPERATORS - mode -> union mode */
A68_93  POZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  QOZACTR;  /* YIELD */
A68_93  ROZACTR;  /* OPERATORS - mode -> union mode */
A68_92  SOZACTR;  /* OPERATORS - istruct -> vector */
A68_95  TOZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UOZACTR;  /* OPERATORS - istruct -> vector */
A68_75  VOZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WOZACTR_tester;
A68_230  XOZACTR;  /* collateral clause result */
A68_93  APZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BPZACTR;  /* YIELD */
A68_93  EPZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FPZACTR;  /* YIELD */
A68_93  GPZACTR;  /* OPERATORS - mode -> union mode */
A68_93  JPZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KPZACTR;  /* YIELD */
A68_93  LPZACTR;  /* OPERATORS - mode -> union mode */
A68_93  MPZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  NPZACTR;  /* YIELD */
A68_92  OPZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optboolwarning);
 /* line 448: */
 /* line 449: */
{ 
XNZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 450: */
A_CALLPROC(NWQACTR_evaluate,(Operand1),(Operand1,(NWQACTR_evaluate).nonlocals));
 /* line 451: */
 /* line 452: */
 /* line 453: */
 /* line 455: */
if ( IWPACTR_istemp(Operand1) )
{ 
 /* line 457: */
GYPACTR_getcfragment( Operand1, &ZNZACTR );
YNZACTR = ZNZACTR;
} 
else
{ 
LKOACTR_declarectemporary( WEAACTR_boolmode, COZACTR, &DOZACTR );
BOZACTR_temp = DOZACTR;
 /* line 458: */
 /* line 459: */
GOZACTR = (*(&((&BOZACTR_temp)->Name))) ;
IOZACTR = A_HISVEC(FOZACTR,GOZACTR,7,A68_CHAR ) ;
EOZACTR.data[0] = A_UNITE(HOZACTR,mode2,2,IOZACTR);
MOZACTR = KOZACTR ;
EOZACTR.data[1] = A_UNITE(LOZACTR,mode2,2,MOZACTR);
GYPACTR_getcfragment( Operand1, &NOZACTR );
EOZACTR.data[2] = A_UNITE(OOZACTR,mode2,2,NOZACTR);
 /* line 461: */
QOZACTR = ';' ;
EOZACTR.data[3] = A_UNITE(POZACTR,mode1,1,QOZACTR);
EOZACTR.data[4] = A_UNITE(ROZACTR,mode4,4,EIAACTR_cnewline);
 /* line 462: */
MDMACTR_writecstream(A_HISVEC(SOZACTR,EOZACTR,5,A68_93 ), XNZACTR_codestream);
 /* line 465: */
ABZACTR_assignment((&(Operand1->Extra)), A_UNITE(TOZACTR,mode5,5,BOZACTR_temp));
 /* line 466: */
 /* line 467: */
VOZACTR = (*(&((&BOZACTR_temp)->Name))) ;
YNZACTR = A_HISVEC(UOZACTR,VOZACTR,7,A68_CHAR );
} 
WOZACTR_tester = YNZACTR;
 /* line 468: */
 /* line 469: */
if ( Orel )
{ 
BPZACTR = ZOZACTR ;
XOZACTR.data[0] = A_UNITE(APZACTR,mode2,2,BPZACTR);
} 
else
{ 
FPZACTR = DPZACTR ;
XOZACTR.data[0] = A_UNITE(EPZACTR,mode2,2,FPZACTR);
} 
XOZACTR.data[1] = A_UNITE(GPZACTR,mode2,2,WOZACTR_tester);
 /* line 470: */
KPZACTR = IPZACTR ;
XOZACTR.data[2] = A_UNITE(JPZACTR,mode2,2,KPZACTR);
 /* line 471: */
XOZACTR.data[3] = A_UNITE(LPZACTR,mode4,4,EIAACTR_cnewline);
NPZACTR = '{' ;
XOZACTR.data[4] = A_UNITE(MPZACTR,mode1,1,NPZACTR);
 /* line 472: */
 /* line 473: */
MDMACTR_writecstream(A_HISVEC(OPZACTR,XOZACTR,5,A68_93 ), XNZACTR_codestream);
} 
A_PROC_EXIT(optboolwarning);
return;
} 
#undef NL

A68_VOID  PPZACTR_optbooloper(void)
{ 
A68_224  QPZACTR;  /* collateral clause result */
A68_93  RPZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  SPZACTR;  /* YIELD */
A68_93  TPZACTR;  /* OPERATORS - mode -> union mode */
A68_92  UPZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optbooloper);
SPZACTR = '}' ;
QPZACTR.data[0] = A_UNITE(RPZACTR,mode1,1,SPZACTR);
QPZACTR.data[1] = A_UNITE(TPZACTR,mode4,4,EIAACTR_cnewline);
 /* line 478: */
MDMACTR_writecstream(A_HISVEC(UPZACTR,QPZACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
A_PROC_EXIT(optbooloper);
return;
} 
#undef NL
 /* line 493: */
 /* line 494: */
 /* line 495: */
 /* line 496: */

A68_VOID  DQZACTR_endseries(A68_207  Properties, A68_109  Answer, A68_85 * Endofseries, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack, A68_BOOL  Seriescontainsexit)
{ 
A_PROC_ENTRY(endseries);
 /* line 497: */
 /* line 499: */
 /* line 500: */
 /* line 501: */
 /* line 502: */
 /* line 504: */
 /* line 505: */
PZYACTR_endclause(Properties, Answer.End, Endofseries, Discardlevelactivated, Pullstack);
A_PROC_EXIT(endseries);
return;
} 
#undef NL

A68_VOID  GQZACTR_semi(A68_BOOL  Outstandingdynamicresult, A68_BOOL  Declaration)
{ 
A_PROC_ENTRY(semi);
 /* line 508: */
 /* line 510: */
/*SKIP*/;
A_PROC_EXIT(semi);
return;
} 
#undef NL

A68_VOID  KQZACTR_exit(A68_BOOL  Dynamicresult, A68_BOOL  Firstexit, A68_109  Seriesanswer)
{ 
A68_221  NQZACTR;  /* collateral clause result */
A68_93  QQZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RQZACTR;  /* YIELD */
A68_VC  SQZACTR;  /* OPERATORS - istruct -> vector */
A68_75  TQZACTR;  /* OPERATORS - istruct -> vector */
A68_93  UQZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VQZACTR;  /* YIELD */
A68_93  WQZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  XQZACTR;  /* YIELD */
A68_93  YQZACTR;  /* OPERATORS - mode -> union mode */
A68_92  ZQZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(exit);
 /* line 513: */
 /* line 515: */
{ 
WXIACTR_assert(MQZACTR, (Seriesanswer.End!=(A68_85 *)A68_NIL));
 /* line 516: */
 /* line 517: */
RQZACTR = PQZACTR ;
NQZACTR.data[0] = A_UNITE(QQZACTR,mode2,2,RQZACTR);
TQZACTR = (*(&(Seriesanswer.End->Name))) ;
VQZACTR = A_HISVEC(SQZACTR,TQZACTR,7,A68_CHAR ) ;
NQZACTR.data[1] = A_UNITE(UQZACTR,mode2,2,VQZACTR);
 /* line 518: */
XQZACTR = ';' ;
NQZACTR.data[2] = A_UNITE(WQZACTR,mode1,1,XQZACTR);
NQZACTR.data[3] = A_UNITE(YQZACTR,mode4,4,EIAACTR_cnewline);
 /* line 519: */
 /* line 520: */
MDMACTR_writecstream(A_HISVEC(ZQZACTR,NQZACTR,4,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
A_PROC_EXIT(exit);
return;
} 
#undef NL
 /* line 532: */
 /* line 534: */

A68_VOID  DRZACTR_codeinsert(A68_VC  Code, A68_INT  Mode, A68_101 * Visibles, A68_98  *ReturnedValue)
{ 
A68_98  ERZACTR_result;
A68_INT  FRZACTR_stream;
A68_205  IRZACTR_emitdefine;   /* proc value of non-global proc */
A68_76  XRZACTR_emitundefine;   /* proc value of non-global proc */
A68_248  JSZACTR_emitcode;   /* proc value of non-global proc */
A68_98  KTZACTR;  /* clause result */
A_PROC_ENTRY(codeinsert);
 /* line 535: */
 /* line 536: */
{ 
 /* line 537: */
FRZACTR_stream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 539: */
A_CLOSURE( IRZACTR_emitdefine, JRZACTR_emitdefine, KRZACTR_emitdefine );
(( KRZACTR_emitdefine * ) ( IRZACTR_emitdefine.nonlocals )) -> FRZACTR_stream = FRZACTR_stream;
 /* line 545: */
A_CLOSURE( XRZACTR_emitundefine, YRZACTR_emitundefine, ZRZACTR_emitundefine );
(( ZRZACTR_emitundefine * ) ( XRZACTR_emitundefine.nonlocals )) -> FRZACTR_stream = FRZACTR_stream;
 /* line 551: */
A_CLOSURE( JSZACTR_emitcode, KSZACTR_emitcode, LSZACTR_emitcode );
(( LSZACTR_emitcode * ) ( JSZACTR_emitcode.nonlocals )) -> IRZACTR_emitdefine = IRZACTR_emitdefine;
(( LSZACTR_emitcode * ) ( JSZACTR_emitcode.nonlocals )) -> JSZACTR_emitcode = JSZACTR_emitcode;
(( LSZACTR_emitcode * ) ( JSZACTR_emitcode.nonlocals )) -> XRZACTR_emitundefine = XRZACTR_emitundefine;
(( LSZACTR_emitcode * ) ( JSZACTR_emitcode.nonlocals )) -> Mode = Mode;
(( LSZACTR_emitcode * ) ( JSZACTR_emitcode.nonlocals )) -> ERZACTR_result = (&ERZACTR_result);
(( LSZACTR_emitcode * ) ( JSZACTR_emitcode.nonlocals )) -> Code = Code;
(( LSZACTR_emitcode * ) ( JSZACTR_emitcode.nonlocals )) -> FRZACTR_stream = FRZACTR_stream;
 /* line 586: */
A_CALLPROC(JSZACTR_emitcode,(Visibles),(Visibles,(JSZACTR_emitcode).nonlocals));
 /* line 587: */
 /* line 588: */
KTZACTR = ERZACTR_result;
} 
A_PROC_EXIT(codeinsert);
*ReturnedValue = (KTZACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void BZYACTR(void)   /* initialise DECS clauses */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel","-dir",".","clauses.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config/a68config.m","./incimperatives.m","./unionaids.m","./modes.m","./incmode.m","./evaluator.m","./tracer.m","./moduletracer.m","./idtable.m","./values.m","./coutput.m","./centities.m","./environment.m","./environ.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_60  AMZACTR;  /* procedure value */
A68_241  ANZACTR;  /* procedure value */
A68_208  WPZACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
UAAACTR();   /* USE incimperatives */
HTQACTR();   /* USE unionaids */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
KEVACTR();   /* USE evaluator */
HUYACTR();   /* USE tracer */
BCHACTR();   /* USE moduletracer */
PPKACTR();   /* USE idtable */
ATPACTR();   /* USE values */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20-debian/src/clauses.a68";
A_config.translation_time = "Wed Apr 21 16:34:05 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "AZYACTR (from seed file) ";
A_config.spec_change_time = "Wed Apr 21 16:34:05 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS clauses);
UEAALIB_a68config(LGAALIB_configinfo, FZYACTR);
 /* line 51: */
 /* line 52: */
 /* line 54: */
 /* line 55: */
 /* line 69: */
 /* line 70: */
 /* line 85: */
 /* line 91: */
 /* line 133: */
 /* line 187: */
 /* line 188: */
 /* line 210: */
 /* line 215: */
 /* line 216: */
 /* line 247: */
 /* line 248: */
 /* line 279: */
 /* line 280: */
 /* line 303: */
 /* line 317: */
 /* line 318: */
 /* line 320: */
 /* line 325: */
 /* line 340: */
 /* line 341: */
 /* line 362: */
 /* line 371: */
 /* line 372: */
 /* line 386: */
 /* line 387: */
 /* line 388: */
 /* line 395: */
AMZACTR.fn.fn_global = LLZACTR_out;
AMZACTR.nonlocals = A68_NIL;
ZLZACTR_outu = (AMZACTR);
 /* line 397: */
 /* line 421: */
ANZACTR.fn.fn_global = DMZACTR_esac;
ANZACTR.nonlocals = A68_NIL;
ZMZACTR_esacu = (ANZACTR);
 /* line 423: */
 /* line 444: */
 /* line 445: */
 /* line 475: */
 /* line 476: */
 /* line 477: */
 /* line 485: */
 /* line 489: */
WPZACTR.fn.fn_global = JZYACTR_startclause;
WPZACTR.nonlocals = A68_NIL;
VPZACTR_startseries = (WPZACTR);
 /* line 491: */
 /* line 492: */
 /* line 507: */
 /* line 512: */
 /* line 528: */
 /* line 529: */
 /* line 590: */
 /* line 592: */
 /* line 605: */
/*SKIP*/;
A_PROC_EXIT(DECS clauses);
} 
#undef NL
/* end of translation of clauses.a68 */
