/* UNAME:ZZSACTR */
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

A_PROCEDURE(A68_VOID ,A68t59,(A68_VC ),(A68_VC ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t60,(void),(void *));
typedef struct A68t60  A68_60 ;    /* PROC VOID */
struct A68t62 ;

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t62 ),(struct A68t62 ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE62) VOID */
A_VECTOR(struct A68t63 ,A68t62);
typedef struct A68t62  A68_62 ;    /* VECTOR [] MODE63 */
struct A68t63 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t63  A68_63 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t65 ;

A_PROCEDURE(A68_VOID ,A68t64,(struct A68t65 ,A68_INT ),(struct A68t65 ,A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE65,INT) VOID */
A_VECTOR(struct A68t66 ,A68t65);
typedef struct A68t65  A68_65 ;    /* VECTOR [] MODE66 */
struct A68t66 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t66  A68_66 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t67,(A68_INT ),(A68_INT ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t68,(A68_INT ),(A68_INT ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(INT) BOOL */
struct A68t69{
A68_INT  Level;
A_PAD_INT(PAD_4)
A68_INT  Block;
A_PAD_INT(PAD_5)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t69 *),(struct A68t69 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC MODE69 */

A_PROCEDURE(A68_INT ,A68t71,(void),(void *));
typedef struct A68t71  A68_71 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t72,(A68_INT ),(A68_INT ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t73,(void),(void *));
typedef struct A68t73  A68_73 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t74,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t75,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t76,(struct A68t69 ,struct A68t69 ),(struct A68t69 ,struct A68t69 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE69,MODE69) BOOL */

A_PROCEDURE(A68_BOOL ,A68t77,(struct A68t69 ),(struct A68t69 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE69) BOOL */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t79,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t80,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(INT) REF MODE26 */
struct A68t82 ;

A_PROCEDURE(A68_VOID ,A68t81,(A68_INT ,struct A68t82 ),(A68_INT ,struct A68t82 ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(INT,MODE82) VOID */
A_ROW(A68_VC ,A68t82,1);
typedef struct A68t82  A68_82 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC BITS */
struct A68t84{
A68_INT  Cfile;
A_PAD_INT(PAD_6)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT)  */
struct A68t85{
A68_INT  Seedfile;
A_PAD_INT(PAD_7)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT)  */
struct A68t86 { A68_INT mode; union {
struct A68t84  mode1;
struct A68t85  mode2;
struct A68t56  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t86  A68_86 ;    /* UNION(MODE84,MODE85,MODE56,VOID)  */
A_ROW(A68_BOOL ,A68t87,1);
typedef struct A68t87  A68_87 ;    /* [] BOOL */
struct A68t88{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_8)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_9)
struct A68t86  Nameseedorigin;
struct A68t89 * Used_modules;
A68_VC  Commandline;
struct A68t90 * Environment;
};
typedef struct A68t88  A68_88 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE86,REF MODE89,REF MODE26,REF MODE90)  */
struct A68t89{
A68_VC  Modinfo_file;
struct A68t89 * Next;
};
typedef struct A68t89  A68_89 ;    /* STRUCT(REF MODE26,REF MODE89)  */
struct A68t90{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t90 * Next;
};
typedef struct A68t90  A68_90 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE90)  */
struct A68t92 ;
struct A68t93 ;

A_PROCEDURE(struct A68t92 *,A68t91,(A68_VC ,struct A68t93 *,A68_VC *),(A68_VC ,struct A68t93 *,A68_VC *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE26,REF MODE93,REF REF MODE26) REF MODE92 */
struct A68t92{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t93{
A68_VC  Dir;
struct A68t93 * Next;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(REF MODE26,REF MODE93)  */
struct A68t95 ;

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t95 *,struct A68t95 **),(struct A68t95 *,struct A68t95 **,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF MODE95,REF REF MODE95) VOID */
struct A68t97{
A68_INT  Rdenno;
A_PAD_INT(PAD_10)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT)  */
struct A68t98{
A68_INT  Idno;
A_PAD_INT(PAD_11)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT)  */
struct A68t99{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_12)
A68_INT  Mode;
A_PAD_INT(PAD_13)
};
typedef struct A68t99  A68_99 ;    /* STRUCT(MODE56,INT)  */
struct A68t100{
A68_INT  Nse;
A_PAD_INT(PAD_14)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT)  */
struct A68t101{
A68_INT  Fn;
A_PAD_INT(PAD_15)
A68_INT  Param;
A_PAD_INT(PAD_16)
struct A68t102 * Operands;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(INT,INT,REF MODE102)  */
struct A68t96 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t97  mode2;
struct A68t98  mode4;
struct A68t99  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t100  mode8;
struct A68t101  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t96  A68_96 ;    /* UNION(LONG BITS,MODE97,VOID,MODE98,MODE99,MODE26,MODE57,MODE100,MODE101)  */
struct A68t95{
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_BITS  Info;
A_PAD_BITS(PAD_18)
struct A68t96  Extra;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT,BITS,MODE96)  */
struct A68t102{
struct A68t95  Value;
struct A68t102 * Rest;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(MODE95,REF MODE102)  */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t95 *,struct A68t95 **,A68_BITS ),(struct A68t95 *,struct A68t95 **,A68_BITS ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE95,REF REF MODE95,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t95 *,struct A68t95 **,struct A68t95 **),(struct A68t95 *,struct A68t95 **,struct A68t95 **,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE95,REF REF MODE95,REF REF MODE95) VOID */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t95 *),(struct A68t95 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE95) VOID */
struct A68t106{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_20)
struct A68t69  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_21)
A68_BITS  Flags;
A_PAD_BITS(PAD_22)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT,INT,MODE69,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */
struct A68t107{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_INT  Resultmode;
A_PAD_INT(PAD_24)
A68_INT  Declevel;
A_PAD_INT(PAD_25)
struct A68t69  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_26)
struct A68t56  Fnprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_27)
struct A68t56  Envprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_28)
A68_BITS  Flags;
A_PAD_BITS(PAD_29)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,INT,INT,MODE69,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t108{
struct A68t55  Label;
struct A68t69  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_30)
A68_BITS  Flags;
A_PAD_BITS(PAD_31)
A68_INT  Alias;
A_PAD_INT(PAD_32)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(MODE55,MODE69,REF MODE26,MODE56,BITS,INT)  */

A_PROCEDURE(struct A68t106 *,A68t109,(A68_INT ),(A68_INT ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(INT) REF MODE106 */

A_PROCEDURE(A68_VOID ,A68t110,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t111,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t106 ,A68t112,1);
typedef struct A68t112  A68_112 ;    /* [] MODE106 */
A_ROW(struct A68t107 ,A68t113,1);
typedef struct A68t113  A68_113 ;    /* [] MODE107 */
A_ROW(struct A68t108 ,A68t114,1);
typedef struct A68t114  A68_114 ;    /* [] MODE108 */
struct A68t116 ;

A_PROCEDURE(A68_VOID ,A68t115,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t116 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t116 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(INT,INT,INT,INT,REF MODE116) VOID */
A_ROW(A68_INT ,A68t116,1);
typedef struct A68t116  A68_116 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t117,(A68_VC ),(A68_VC ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t118,(A68_INT ,struct A68t69 *),(A68_INT ,struct A68t69 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(INT) MODE69 */
struct A68t119{
A68_INT  Parameters;
A_PAD_INT(PAD_33)
A68_INT  Result;
A_PAD_INT(PAD_34)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_35)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 32 CHAR */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_INT  Offset;
A_PAD_INT(PAD_37)
struct A68t121  Name;
A_PAD_ISTRUCT(A68_121 ,PAD_38)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,INT,MODE121)  */
struct A68t123 ;

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) REF MODE123 */
A_VECTOR(A68_INT ,A68t123);
typedef struct A68t123  A68_123 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t120 *,A68_VC *),(struct A68t120 *,A68_VC *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE120) MODE26 */

A_PROCEDURE(A68_VOID ,A68t125,(A68_INT ,A68_VC ,struct A68t99 *),(A68_INT ,A68_VC ,struct A68t99 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT,MODE26) MODE99 */
struct A68t127 ;

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t127 ,A68_INT ),(struct A68t127 ,A68_INT ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE127,INT) VOID */
A_ROW(struct A68t128 ,A68t127,1);
typedef struct A68t127  A68_127 ;    /* [] MODE128 */
struct A68t138{
A68_INT  Mode;
A_PAD_INT(PAD_39)
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
A_PAD_INT(PAD_40)
struct A68t142 * Modelist;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t130{
A68_INT  Deproc;
A_PAD_INT(PAD_41)
struct A68t142 * Pars;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t131{
A68_INT  Rdenno;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
struct A68t141 * Sels;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,INT,REF MODE141)  */
struct A68t132{
A68_INT  Rdenno;
A_PAD_INT(PAD_44)
A68_INT  Imode;
A_PAD_INT(PAD_45)
A68_INT  Length;
A_PAD_INT(PAD_46)
A68_INT  Deflex;
A_PAD_INT(PAD_47)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t133{
A68_INT  Deproc;
A_PAD_INT(PAD_48)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT)  */
struct A68t134{
A68_INT  Rdenno;
A_PAD_INT(PAD_49)
A68_INT  Vecmode;
A_PAD_INT(PAD_50)
A68_INT  Deflex;
A_PAD_INT(PAD_51)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,INT)  */
struct A68t135{
A68_INT  Rdenno;
A_PAD_INT(PAD_52)
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_INT  Nods;
A_PAD_INT(PAD_54)
A68_INT  Deflex;
A_PAD_INT(PAD_55)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t136{
A68_INT  Mode;
A_PAD_INT(PAD_56)
struct A68t140 * Stenlist;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,REF MODE140)  */
struct A68t137{
A68_INT  Mode;
A_PAD_INT(PAD_57)
A68_INT  Modeproc;
A_PAD_INT(PAD_58)
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
A_PAD_INT(PAD_59)
A68_INT  Rdenno;
A_PAD_INT(PAD_60)
struct A68t140 * Rest;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,INT,REF MODE140)  */
struct A68t141{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_INT  Fieldno;
A_PAD_INT(PAD_62)
struct A68t121  Name;
A_PAD_ISTRUCT(A68_121 ,PAD_63)
struct A68t141 * Rest;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,INT,MODE121,REF MODE141)  */
struct A68t142{
A68_INT  Mode;
A_PAD_INT(PAD_64)
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

A_PROCEDURE(A68_VOID ,A68t148,(struct A68t86 ),(struct A68t86 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE86) VOID */

A_PROCEDURE(struct A68t56 ,A68t149,(void),(void *));
typedef struct A68t149  A68_149 ;    /* PROC MODE56 */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t56 ),(struct A68t56 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE56) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t86 ,A68_VC *),(struct A68t86 ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE86) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t152,(struct A68t95 *,struct A68t95 *),(struct A68t95 *,struct A68t95 *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE95,REF MODE95) BOOL */

A_PROCEDURE(A68_BOOL ,A68t153,(struct A68t95 *),(struct A68t95 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE95) BOOL */

A_PROCEDURE(A68_BOOL ,A68t154,(struct A68t95 *,A68_LBITS ),(struct A68t95 *,A68_LBITS ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REF MODE95,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t155,(struct A68t95 *),(struct A68t95 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE95) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t95 *,A68_VC *),(struct A68t95 *,A68_VC *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE95) MODE26 */

A_PROCEDURE(struct A68t95 *,A68t157,(struct A68t95 *,A68_INT ),(struct A68t95 *,A68_INT ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE95,INT) REF MODE95 */

A_PROCEDURE(A68_INT ,A68t158,(struct A68t101 ),(struct A68t101 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE101) INT */
struct A68t159{
struct A68t95 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_65)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(REF MODE95,REF MODE55,INT)  */

A_PROCEDURE(A68_BOOL ,A68t160,(struct A68t95 *,A68_BITS ),(struct A68t95 *,A68_BITS ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE95,BITS) BOOL */

A_PROCEDURE(struct A68t95 *,A68t161,(struct A68t102 *,A68_INT ),(struct A68t102 *,A68_INT ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE102,INT) REF MODE95 */

A_PROCEDURE(struct A68t102 *,A68t162,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE102) REF MODE102 */
struct A68t164 ;

A_PROCEDURE(struct A68t95 *,A68t163,(A68_INT ,A68_INT ,A68_BITS ,struct A68t164 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t164 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(INT,INT,BITS,MODE164) REF MODE95 */
A_VECTOR(struct A68t95 *,A68t164);
typedef struct A68t164  A68_164 ;    /* VECTOR [] REF MODE95 */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t95 *,A68_BOOL ,A68_VC *),(struct A68t95 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE95,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t166,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE95) LONG INT */
struct A68t167 { A68_INT mode; union {
struct A68t95 * mode1;
A68_VC  mode2;
struct A68t99  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t167  A68_167 ;    /* UNION(REF MODE95,MODE26,MODE99)  */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t167 ,A68_VC *),(struct A68t167 ,A68_VC *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE167) MODE26 */
struct A68t170 ;

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t170 ,A68_VC *),(struct A68t170 ,A68_VC *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE170) MODE26 */
A_VECTOR(struct A68t167 ,A68t170);
typedef struct A68t170  A68_170 ;    /* VECTOR [] MODE167 */

A_PROCEDURE(A68_VOID ,A68t171,(A68_VC ,struct A68t170 ,A68_VC *),(A68_VC ,struct A68t170 ,A68_VC *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE26,MODE170) MODE26 */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE170) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,A68_INT ,struct A68t170 ,struct A68t99 *),(A68_VC ,A68_INT ,struct A68t170 ,struct A68t99 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,INT,MODE170) MODE99 */

A_PROCEDURE(struct A68t95 *,A68t174,(struct A68t95 *),(struct A68t95 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(REF MODE95) REF MODE95 */

A_PROCEDURE(struct A68t95 *,A68t175,(A68_VC ,struct A68t95 *),(A68_VC ,struct A68t95 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE26,REF MODE95) REF MODE95 */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE59) VOID */

A_PROCEDURE(A68_VOID ,A68t178,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t95 *,struct A68t95 *),(struct A68t95 *,struct A68t95 *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE95) MODE95 */
A_ISTRUCT(A68_CHAR ,15,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t66 ,13,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 13 MODE66 */
A_ISTRUCT(A68_CHAR ,10,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t167 ,4,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 4 MODE167 */
A_ISTRUCT(A68_CHAR ,12,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t95 *,A68_INT ,struct A68t95 *),(struct A68t95 *,A68_INT ,struct A68t95 *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE95,INT) MODE95 */
A_ISTRUCT(A68_CHAR ,5,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(struct A68t167 ,2,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 2 MODE167 */
A_ISTRUCT(struct A68t167 ,3,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 3 MODE167 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  GYPACTR_getcfragment(struct A68t95 *,A68_VC *);
#define RKJACTR_atomic 0X2U
#define XKJACTR_fxwarn 0X80U
extern A68_95  DLJACTR_skipvalue;
extern A68_VOID  NCQACTR_bracketcfragment(struct A68t95 *,A68_VC *);
extern A68_VOID  ENQACTR_usemacro(A68_VC ,struct A68t170 ,A68_VC *);
extern A68_VOID  JNQACTR_emitline(struct A68t170 );
extern A68_95 * KOQACTR_yield(struct A68t95 *);
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_56  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modes --- */
extern A68_VOID  XKNACTR_ctype(A68_INT ,A68_VC *);
extern A68_BOOL  XRMACTR_isistruct(A68_INT );
extern A68_125  KLOACTR_new;
extern A68_VOID  FLNACTR_cast(A68_INT ,A68_VC *);
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define VFAACTR_refmark 1024
/* --- End of imports from incmode --- */


/* --- Imports from idtable --- */
/* --- End of imports from idtable --- */


/* --- Imports from incoperfn --- */
/* --- End of imports from incoperfn --- */


/* --- Imports from evalbase --- */
extern A68_VOID  QWQACTR_eval1(struct A68t95 *,struct A68t95 **);
/* --- End of imports from evalbase --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_81  OWIACTR_perror;
extern A68_BOOL  AQIACTR_verboseoption;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  QSLACTR_locdecstream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t65 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
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
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_179   DATACTR = {"$Id: biops.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,EATACTR,DATACTR,55)
static A68_180   FATACTR = {"BIOPS - "}; 
A_GISVEC(A68_VC ,GATACTR,FATACTR,8)
static A68_VC  HATACTR_modulename;
static A68_56   SATACTR = {"union {"}; 
A_GISVEC(A68_VC ,TATACTR,SATACTR,7)
static A68_182   WATACTR = {"  /* BIOP 99 */"}; 
A_GISVEC(A68_VC ,XATACTR,WATACTR,15)
static A68_183   ABTACTR = {""}; 
A_GISVEC(A68_VC ,BBTACTR,ABTACTR,0)
static A68_184   HBTACTR = {"  source;"}; 
A_GISVEC(A68_VC ,IBTACTR,HBTACTR,9)
static A68_185   OBTACTR = {"  destination;"}; 
A_GISVEC(A68_VC ,PBTACTR,OBTACTR,14)
static A68_186   TBTACTR = {"} "}; 
A_GISVEC(A68_VC ,UBTACTR,TBTACTR,2)
static A68_186   YBTACTR = {"; "}; 
A_GISVEC(A68_VC ,ZBTACTR,YBTACTR,2)
static A68_188   GCTACTR = {".source = "}; 
A_GISVEC(A68_VC ,HCTACTR,GCTACTR,10)
static A68_186   MCTACTR = {" ;"}; 
A_GISVEC(A68_VC ,NCTACTR,MCTACTR,2)
static A68_190   RCTACTR = {".destination"}; 
A_GISVEC(A68_VC ,SCTACTR,RCTACTR,12)
static A68_192   ODTACTR = {".data"}; 
A_GISVEC(A68_VC ,SDTACTR,ODTACTR,5)
static A68_40   DETACTR = {"BIOP"}; 
A_GISVEC(A68_VC ,EETACTR,DETACTR,4)
static A68_193   IETACTR = {"A_M"}; 
static A68_194   BFTACTR = {"invalid generic biop"}; 
A_GISVEC(A68_VC ,CFTACTR,BFTACTR,20)
A_GISVEC(A68_VC ,EFTACTR,IETACTR,3)

A68_VOID  JATACTR_biop99(A68_95 * Root, A68_95  *ReturnedValue);

A_STATIC A68_VOID  YCTACTR_cast_biop(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue);

A_STATIC A68_VOID  IDTACTR_istruct_to_amode(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue);

A_STATIC A68_VOID  BETACTR_generic_monadic_biop(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue);

A68_VOID  KFTACTR_monadicbiopsemantics(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue);

A68_VOID  JATACTR_biop99(A68_95 * Root, A68_95  *ReturnedValue)
{ 
A68_95 * KATACTR_op;
A68_95  LATACTR;  /* collateral clause result */
A68_VC  MATACTR;  /* avoid structure result */
A68_96  NATACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OATACTR;  /* OPERATORS - istruct -> vector */
A68_56  PATACTR;  /* OPERATORS - istruct -> vector */
A68_VC  QATACTR_temp;
A68_187  RATACTR;  /* collateral clause result */
A68_66  UATACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VATACTR;  /* YIELD */
A68_66  YATACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZATACTR;  /* YIELD */
A68_66  CBTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DBTACTR;  /* YIELD */
A68_66  EBTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FBTACTR;  /* avoid structure result */
A68_66  GBTACTR;  /* OPERATORS - mode -> union mode */
A68_66  JBTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KBTACTR;  /* YIELD */
A68_66  LBTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MBTACTR;  /* avoid structure result */
A68_66  NBTACTR;  /* OPERATORS - mode -> union mode */
A68_66  QBTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RBTACTR;  /* YIELD */
A68_66  SBTACTR;  /* OPERATORS - mode -> union mode */
A68_66  VBTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WBTACTR;  /* YIELD */
A68_66  XBTACTR;  /* OPERATORS - mode -> union mode */
A68_66  ACTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BCTACTR;  /* YIELD */
A68_66  CCTACTR;  /* OPERATORS - mode -> union mode */
A68_65  DCTACTR;  /* OPERATORS - istruct -> vector */
A68_189  ECTACTR;  /* collateral clause result */
A68_167  FCTACTR;  /* OPERATORS - mode -> union mode */
A68_167  ICTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JCTACTR;  /* YIELD */
A68_VC  KCTACTR;  /* avoid structure result */
A68_167  LCTACTR;  /* OPERATORS - mode -> union mode */
A68_167  OCTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PCTACTR;  /* YIELD */
A68_170  QCTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  TCTACTR;  /* avoid structure result */
A68_96  UCTACTR;  /* OPERATORS - mode -> union mode */
A68_95  VCTACTR;  /* clause result */
A_PROC_ENTRY(biop99);
 /* line 49: */
 /* line 50: */
{ 
QWQACTR_eval1(Root, (&KATACTR_op));
 /* line 51: */
 /* line 52: */
LATACTR.Mode = (*(&(Root->Mode)));
 /* line 53: */
LATACTR.Info = (A68_BITS )((A68_BITS )((*(&(KATACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 54: */
 /* line 55: */
 /* line 57: */
if ( ((*(&(Root->Mode)))==(*(&(KATACTR_op->Mode)))) )
{ 
 /* line 58: */
GYPACTR_getcfragment( KATACTR_op, &MATACTR );
LATACTR.Extra = A_UNITE(NATACTR,mode6,6,MATACTR);
} 
else
{ 
PATACTR = QIMACTR_newuniquename() ;
QATACTR_temp = A_HISVEC(OATACTR,PATACTR,7,A68_CHAR );
 /* line 59: */
 /* line 60: */
 /* line 61: */
VATACTR = TATACTR ;
RATACTR.data[0] = A_UNITE(UATACTR,mode2,2,VATACTR);
if ( AQIACTR_verboseoption )
{ 
ZATACTR = XATACTR ;
RATACTR.data[1] = A_UNITE(YATACTR,mode2,2,ZATACTR);
} 
else
{ 
DBTACTR = BBTACTR ;
RATACTR.data[1] = A_UNITE(CBTACTR,mode2,2,DBTACTR);
} 
 /* line 62: */
RATACTR.data[2] = A_UNITE(EBTACTR,mode4,4,EIAACTR_cnewline);
XKNACTR_ctype( (*(&(KATACTR_op->Mode))), &FBTACTR );
RATACTR.data[3] = A_UNITE(GBTACTR,mode2,2,FBTACTR);
KBTACTR = IBTACTR ;
RATACTR.data[4] = A_UNITE(JBTACTR,mode2,2,KBTACTR);
 /* line 63: */
RATACTR.data[5] = A_UNITE(LBTACTR,mode4,4,EIAACTR_cnewline);
XKNACTR_ctype( (*(&(Root->Mode))), &MBTACTR );
RATACTR.data[6] = A_UNITE(NBTACTR,mode2,2,MBTACTR);
RBTACTR = PBTACTR ;
RATACTR.data[7] = A_UNITE(QBTACTR,mode2,2,RBTACTR);
 /* line 64: */
RATACTR.data[8] = A_UNITE(SBTACTR,mode4,4,EIAACTR_cnewline);
WBTACTR = UBTACTR ;
RATACTR.data[9] = A_UNITE(VBTACTR,mode2,2,WBTACTR);
RATACTR.data[10] = A_UNITE(XBTACTR,mode2,2,QATACTR_temp);
 /* line 65: */
BCTACTR = ZBTACTR ;
RATACTR.data[11] = A_UNITE(ACTACTR,mode2,2,BCTACTR);
RATACTR.data[12] = A_UNITE(CCTACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(DCTACTR,RATACTR,13,A68_66 ), QSLACTR_locdecstream(VRLACTR_currentlevel()));
 /* line 66: */
ECTACTR.data[0] = A_UNITE(FCTACTR,mode2,2,QATACTR_temp);
JCTACTR = HCTACTR ;
ECTACTR.data[1] = A_UNITE(ICTACTR,mode2,2,JCTACTR);
GYPACTR_getcfragment( KATACTR_op, &KCTACTR );
ECTACTR.data[2] = A_UNITE(LCTACTR,mode2,2,KCTACTR);
PCTACTR = NCTACTR ;
ECTACTR.data[3] = A_UNITE(OCTACTR,mode2,2,PCTACTR);
JNQACTR_emitline(A_HISVEC(QCTACTR,ECTACTR,4,A68_167 ));
 /* line 67: */
 /* line 68: */
 /* line 69: */
 /* line 70: */
JIAACTR_bracket( A_VC_PLUS(QATACTR_temp,SCTACTR), &TCTACTR );
LATACTR.Extra = A_UNITE(UCTACTR,mode6,6,TCTACTR);
} 
VCTACTR = LATACTR;
} 
A_PROC_EXIT(biop99);
*ReturnedValue = (VCTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YCTACTR_cast_biop(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue)
{ 
A68_95 * ZCTACTR_op;
A68_95  ADTACTR;  /* collateral clause result */
A68_VC  BDTACTR;  /* avoid structure result */
A68_VC  CDTACTR;  /* avoid structure result */
A68_96  DDTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EDTACTR;  /* YIELD */
A68_95  FDTACTR;  /* clause result */
A_PROC_ENTRY(cast_biop);
 /* line 73: */
 /* line 74: */
{ 
QWQACTR_eval1(Root, (&ZCTACTR_op));
 /* line 75: */
 /* line 76: */
ADTACTR.Mode = (*(&(Root->Mode)));
 /* line 77: */
ADTACTR.Info = (A68_BITS )((A68_BITS )((*(&(ZCTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 78: */
 /* line 79: */
FLNACTR_cast( (*(&(Root->Mode))), &BDTACTR );
NCQACTR_bracketcfragment( KOQACTR_yield(ZCTACTR_op), &CDTACTR );
EDTACTR = A_VC_PLUS(BDTACTR,CDTACTR) ;
ADTACTR.Extra = A_UNITE(DDTACTR,mode6,6,EDTACTR);
FDTACTR = ADTACTR;
} 
A_PROC_EXIT(cast_biop);
*ReturnedValue = (FDTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IDTACTR_istruct_to_amode(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue)
{ 
A68_95 * JDTACTR_op;
A68_INT  KDTACTR_opmode;
A68_BOOL  LDTACTR;  /* optbool result */
A68_BOOL  MDTACTR;  /* clause result */
A68_95  NDTACTR;  /* collateral clause result */
A68_VC  PDTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QDTACTR;  /* avoid structure result */
A68_VC  RDTACTR;  /* avoid structure result */
A68_VC  TDTACTR;  /* avoid structure result */
A68_VC  UDTACTR;  /* avoid structure result */
A68_96  VDTACTR;  /* OPERATORS - mode -> union mode */
A68_95  WDTACTR;  /* clause result */
A68_VC  XDTACTR;  /* avoid structure result */
A68_82  YDTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(istruct_to_amode);
 /* line 82: */
 /* line 83: */
{ 
QWQACTR_eval1(Root, (&JDTACTR_op));
 /* line 84: */
KDTACTR_opmode = (*(&(JDTACTR_op->Mode)));
 /* line 85: */
LDTACTR = (KDTACTR_opmode<VFAACTR_refmark);
if ( LDTACTR )
{ /* line 86: */
LDTACTR = XRMACTR_isistruct(KDTACTR_opmode);
}
 /* line 87: */
MDTACTR = LDTACTR;
if ( MDTACTR )
{ 
 /* line 88: */
NDTACTR.Mode = (*(&(Root->Mode)));
 /* line 89: */
NDTACTR.Info = (A68_BITS )((A68_BITS )((*(&(JDTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 90: */
 /* line 91: */
 /* line 92: */
FLNACTR_cast( ((*(&(Root->Mode)))+VFAACTR_refmark), &QDTACTR );
GYPACTR_getcfragment( KOQACTR_yield(JDTACTR_op), &RDTACTR );
JIAACTR_bracket( A_VC_PLUS(RDTACTR,SDTACTR), &TDTACTR );
JIAACTR_bracket( A_VC_PLUS(A_VC_PLUS(A_HVEC(PDTACTR,'*',A68_CHAR ),QDTACTR),TDTACTR), &UDTACTR );
NDTACTR.Extra = A_UNITE(VDTACTR,mode6,6,UDTACTR);
WDTACTR = NDTACTR;
} 
else
{ 
ROAAOSF_whole( Biop, 0, &XDTACTR );
A_CALLPROC(OWIACTR_perror,(214, A_HARR(YDTACTR,XDTACTR,A68_VC )),(214, A_HARR(YDTACTR,XDTACTR,A68_VC ),(OWIACTR_perror).nonlocals));
 /* line 93: */
 /* line 94: */
WDTACTR = DLJACTR_skipvalue;
} 
} 
A_PROC_EXIT(istruct_to_amode);
*ReturnedValue = (WDTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BETACTR_generic_monadic_biop(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue)
{ 
A68_95 * CETACTR_op;
A68_VC  FETACTR;  /* avoid structure result */
A68_VC  GETACTR_biopstr;
A68_95  HETACTR;  /* collateral clause result */
A68_170  JETACTR;  /* clause result */
A68_167  KETACTR;  /* OPERATORS - mode -> union mode */
A68_95 * LETACTR;  /* YIELD */
A68_170  METACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_195  NETACTR;  /* collateral clause result */
A68_167  OETACTR;  /* OPERATORS - mode -> union mode */
A68_95 * PETACTR;  /* YIELD */
A68_99  QETACTR;  /* avoid structure result */
A68_167  RETACTR;  /* OPERATORS - mode -> union mode */
A68_170  SETACTR;  /* OPERATORS - istruct -> vector */
A68_196  TETACTR;  /* collateral clause result */
A68_167  UETACTR;  /* OPERATORS - mode -> union mode */
A68_95 * VETACTR;  /* YIELD */
A68_99  WETACTR;  /* avoid structure result */
A68_167  XETACTR;  /* OPERATORS - mode -> union mode */
A68_99  YETACTR;  /* avoid structure result */
A68_167  ZETACTR;  /* OPERATORS - mode -> union mode */
A68_170  AFTACTR;  /* OPERATORS - istruct -> vector */
A68_170  DFTACTR;  /* OPERATORS - skip to mode */
A68_VC  FFTACTR;  /* avoid structure result */
A68_96  GFTACTR;  /* OPERATORS - mode -> union mode */
A68_95  HFTACTR;  /* clause result */
A_PROC_ENTRY(generic_monadic_biop);
 /* line 109: */
 /* line 110: */
{ 
QWQACTR_eval1(Root, (&CETACTR_op));
 /* line 111: */
ROAAOSF_whole( Biop, 0, &FETACTR );
GETACTR_biopstr = A_VC_PLUS(EETACTR,FETACTR);
 /* line 112: */
 /* line 113: */
HETACTR.Mode = (*(&(Root->Mode)));
 /* line 114: */
HETACTR.Info = (A68_BITS )((A68_BITS )((*(&(CETACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 115: */
 /* line 116: */
 /* line 118: */
switch ( (Biop/1000) )
{ 
case 1: 
 /* line 120: */
LETACTR = KOQACTR_yield(CETACTR_op) ;
JETACTR = A_HVEC(METACTR,A_UNITE(KETACTR,mode1,1,LETACTR),A68_167 );
break;
case 2: 
PETACTR = KOQACTR_yield(CETACTR_op) ;
NETACTR.data[0] = A_UNITE(OETACTR,mode1,1,PETACTR);
 /* line 122: */
A_CALLPROC(KLOACTR_new,((*(&(Root->Mode))), GETACTR_biopstr, &QETACTR),((*(&(Root->Mode))), GETACTR_biopstr, &QETACTR,(KLOACTR_new).nonlocals));
NETACTR.data[1] = A_UNITE(RETACTR,mode3,3,QETACTR);
JETACTR = A_HISVEC(SETACTR,NETACTR,2,A68_167 );
break;
case 3: 
VETACTR = KOQACTR_yield(CETACTR_op) ;
TETACTR.data[0] = A_UNITE(UETACTR,mode1,1,VETACTR);
A_CALLPROC(KLOACTR_new,((*(&(Root->Mode))), GETACTR_biopstr, &WETACTR),((*(&(Root->Mode))), GETACTR_biopstr, &WETACTR,(KLOACTR_new).nonlocals));
TETACTR.data[1] = A_UNITE(XETACTR,mode3,3,WETACTR);
 /* line 123: */
 /* line 124: */
A_CALLPROC(KLOACTR_new,((*(&(CETACTR_op->Mode))), GETACTR_biopstr, &YETACTR),((*(&(CETACTR_op->Mode))), GETACTR_biopstr, &YETACTR,(KLOACTR_new).nonlocals));
TETACTR.data[2] = A_UNITE(ZETACTR,mode3,3,YETACTR);
JETACTR = A_HISVEC(AFTACTR,TETACTR,3,A68_167 );
break;
default: 
WXIACTR_assert(CFTACTR, A68_FALSE);
 /* line 125: */
 /* line 126: */
JETACTR = DFTACTR;
break;
} 
 /* line 127: */
 /* line 128: */
ENQACTR_usemacro( A_VC_PLUS(EFTACTR,GETACTR_biopstr), JETACTR, &FFTACTR );
HETACTR.Extra = A_UNITE(GFTACTR,mode6,6,FFTACTR);
HFTACTR = HETACTR;
} 
A_PROC_EXIT(generic_monadic_biop);
*ReturnedValue = (HFTACTR);
return;
} 
#undef NL

A68_VOID  KFTACTR_monadicbiopsemantics(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue)
{ 
A68_95  LFTACTR;  /* clause result */
A68_95  MFTACTR;  /* avoid structure result */
A68_95  NFTACTR;  /* avoid structure result */
A68_BOOL  OFTACTR;  /* optbool result */
A68_95  PFTACTR;  /* avoid structure result */
A68_VC  QFTACTR;  /* avoid structure result */
A68_82  RFTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(monadicbiopsemantics);
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 134: */
if ( (Biop==9999) )
{ 
 /* line 135: */
 /* line 136: */
YCTACTR_cast_biop( Root, Biop, &MFTACTR );
LFTACTR = MFTACTR;
} 
else
{ 
 /* line 137: */
 /* line 138: */
if ( (Biop==5001) )
{ 
 /* line 139: */
 /* line 140: */
IDTACTR_istruct_to_amode( Root, Biop, &NFTACTR );
LFTACTR = NFTACTR;
} 
else
{ 
OFTACTR = (Biop>1000);
if ( OFTACTR )
{ /* line 141: */
OFTACTR = (Biop<4000);
}
 /* line 142: */
if ( OFTACTR )
{ 
 /* line 143: */
 /* line 144: */
BETACTR_generic_monadic_biop( Root, Biop, &PFTACTR );
LFTACTR = PFTACTR;
} 
else
{ 
ROAAOSF_whole( Biop, 0, &QFTACTR );
A_CALLPROC(OWIACTR_perror,(213, A_HARR(RFTACTR,QFTACTR,A68_VC )),(213, A_HARR(RFTACTR,QFTACTR,A68_VC ),(OWIACTR_perror).nonlocals));
 /* line 145: */
 /* line 146: */
LFTACTR = DLJACTR_skipvalue;
} 
} 
} 
A_PROC_EXIT(monadicbiopsemantics);
*ReturnedValue = (LFTACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void AATACTR(void)   /* initialise DECS biops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","-dir",".","biops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","./values.m","./uniquenameserver.m","./modes.m","./incmode.m","./idtable.m","./incoperfn.m","./evalbase.m","./environment.m","./environ.m","./coutput.m","./centities.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
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
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/src/biops.a68";
A_config.translation_time = "Mon May  3 00:36:17 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "ZZSACTR (from seed file) ";
A_config.spec_change_time = "Mon May  3 00:36:17 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS biops);
UEAALIB_a68config(LGAALIB_configinfo, EATACTR);
 /* line 46: */
HATACTR_modulename = GATACTR;
 /* line 48: */
 /* line 72: */
 /* line 81: */
 /* line 96: */
 /* line 130: */
 /* line 148: */
 /* line 150: */
 /* line 152: */
/*SKIP*/;
A_PROC_EXIT(DECS biops);
} 
#undef NL
/* end of translation of biops.a68 */
