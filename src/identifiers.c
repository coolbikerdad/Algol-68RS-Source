/* UNAME:MKVACTR */
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

A_PROCEDURE(A68_VOID ,A68t67,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t70,(A68_INT ),(A68_INT ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t71,(A68_INT ),(A68_INT ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(INT) BOOL */
struct A68t72{
A68_INT  Level;
A_PAD_INT(PAD_4)
A68_INT  Block;
A_PAD_INT(PAD_5)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t72 *),(struct A68t72 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC MODE72 */

A_PROCEDURE(A68_INT ,A68t74,(void),(void *));
typedef struct A68t74  A68_74 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t75,(A68_INT ),(A68_INT ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t76,(void),(void *));
typedef struct A68t76  A68_76 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t77,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t78,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t79,(struct A68t72 ,struct A68t72 ),(struct A68t72 ,struct A68t72 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE72,MODE72) BOOL */

A_PROCEDURE(A68_BOOL ,A68t80,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE72) BOOL */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(INT) REF MODE26 */
struct A68t85 ;

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ,struct A68t85 ),(A68_INT ,struct A68t85 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT,MODE85) VOID */
A_ROW(A68_VC ,A68t85,1);
typedef struct A68t85  A68_85 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t86,(void),(void *));
typedef struct A68t86  A68_86 ;    /* PROC BITS */
struct A68t87{
A68_INT  Cfile;
A_PAD_INT(PAD_6)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT)  */
struct A68t88{
A68_INT  Seedfile;
A_PAD_INT(PAD_7)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(INT)  */
struct A68t89 { A68_INT mode; union {
struct A68t87  mode1;
struct A68t88  mode2;
struct A68t56  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t89  A68_89 ;    /* UNION(MODE87,MODE88,MODE56,VOID)  */
A_ROW(A68_BOOL ,A68t90,1);
typedef struct A68t90  A68_90 ;    /* [] BOOL */
struct A68t91{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_8)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_9)
struct A68t89  Nameseedorigin;
struct A68t92 * Used_modules;
A68_VC  Commandline;
struct A68t93 * Environment;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE89,REF MODE92,REF MODE26,REF MODE93)  */
struct A68t92{
A68_VC  Modinfo_file;
struct A68t92 * Next;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF MODE92)  */
struct A68t93{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t93 * Next;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE93)  */
struct A68t95 ;
struct A68t96 ;

A_PROCEDURE(struct A68t95 *,A68t94,(A68_VC ,struct A68t96 *,A68_VC *),(A68_VC ,struct A68t96 *,A68_VC *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE26,REF MODE96,REF REF MODE26) REF MODE95 */
struct A68t95{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t96{
A68_VC  Dir;
struct A68t96 * Next;
};
typedef struct A68t96  A68_96 ;    /* STRUCT(REF MODE26,REF MODE96)  */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 *,A68_BOOL ),(struct A68t98 *,A68_BOOL ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE98,BOOL) VOID */
struct A68t100{
A68_INT  Rdenno;
A_PAD_INT(PAD_10)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT)  */
struct A68t101{
A68_INT  Idno;
A_PAD_INT(PAD_11)
};
typedef struct A68t101  A68_101 ;    /* STRUCT(INT)  */
struct A68t102{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_12)
A68_INT  Mode;
A_PAD_INT(PAD_13)
};
typedef struct A68t102  A68_102 ;    /* STRUCT(MODE56,INT)  */
struct A68t103{
A68_INT  Nse;
A_PAD_INT(PAD_14)
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT)  */
struct A68t104{
A68_INT  Fn;
A_PAD_INT(PAD_15)
A68_INT  Param;
A_PAD_INT(PAD_16)
struct A68t105 * Operands;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(INT,INT,REF MODE105)  */
struct A68t99 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t100  mode2;
struct A68t101  mode4;
struct A68t102  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t103  mode8;
struct A68t104  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t99  A68_99 ;    /* UNION(LONG BITS,MODE100,VOID,MODE101,MODE102,MODE26,MODE57,MODE103,MODE104)  */
struct A68t98{
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_BITS  Info;
A_PAD_BITS(PAD_18)
struct A68t99  Extra;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT,BITS,MODE99)  */
struct A68t105{
struct A68t98  Value;
struct A68t105 * Rest;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE98,REF MODE105)  */

A_PROCEDURE(A68_VOID ,A68t106,(struct A68t98 *),(struct A68t98 *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE98) VOID */

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t105 **),(struct A68t105 **,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF REF MODE105) VOID */
struct A68t108{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_20)
struct A68t72  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_21)
A68_BITS  Flags;
A_PAD_BITS(PAD_22)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,MODE72,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */
struct A68t109{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_INT  Resultmode;
A_PAD_INT(PAD_24)
A68_INT  Declevel;
A_PAD_INT(PAD_25)
struct A68t72  Environ;
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
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,INT,INT,MODE72,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t110{
struct A68t55  Label;
struct A68t72  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_30)
A68_BITS  Flags;
A_PAD_BITS(PAD_31)
A68_INT  Alias;
A_PAD_INT(PAD_32)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(MODE55,MODE72,REF MODE26,MODE56,BITS,INT)  */

A_PROCEDURE(struct A68t108 *,A68t111,(A68_INT ),(A68_INT ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(INT) REF MODE108 */

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t108 ,A68t113,1);
typedef struct A68t113  A68_113 ;    /* [] MODE108 */
A_ROW(struct A68t109 ,A68t114,1);
typedef struct A68t114  A68_114 ;    /* [] MODE109 */
A_ROW(struct A68t110 ,A68t115,1);
typedef struct A68t115  A68_115 ;    /* [] MODE110 */
struct A68t117 ;

A_PROCEDURE(A68_VOID ,A68t116,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t117 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t117 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(INT,INT,INT,INT,REF MODE117) VOID */
A_ROW(A68_INT ,A68t117,1);
typedef struct A68t117  A68_117 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t118,(A68_VC ),(A68_VC ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t119,(A68_INT ,struct A68t72 *),(A68_INT ,struct A68t72 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(INT) MODE72 */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_33)
A68_VC  String;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t121{
A68_INT  I;
A_PAD_INT(PAD_34)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */
struct A68t122{
A68_INT  Body;
A_PAD_INT(PAD_35)
A68_INT  Moduleno;
A_PAD_INT(PAD_36)
struct A68t117  Actuals;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,INT,REF MODE117)  */
struct A68t123{
A68_INT  Mode;
A_PAD_INT(PAD_37)
A68_INT  Number;
A_PAD_INT(PAD_38)
A68_VC  Insert;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t125{
A68_INT  Moduleno;
A_PAD_INT(PAD_39)
A68_INT  I;
A_PAD_INT(PAD_40)
A68_INT  J;
A_PAD_INT(PAD_41)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t127,1);
typedef struct A68t127  A68_127 ;    /* [] REF MODE26 */
struct A68t126{
A68_INT  Moduleno;
A_PAD_INT(PAD_42)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t127  Ysnames;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE127)  */
struct A68t124 { A68_INT mode; union {
struct A68t122  mode1;
struct A68t125  mode2;
struct A68t126  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t124  A68_124 ;    /* UNION(MODE122,MODE125,MODE126)  */
struct A68t129{
A68_INT  Nochars;
A_PAD_INT(PAD_43)
A68_INT  Nocases;
A_PAD_INT(PAD_44)
A68_INT  W;
A_PAD_INT(PAD_45)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,INT,INT)  */
struct A68t128{
struct A68t129  Info;
A68_VC  Text;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE129,REF MODE26)  */
struct A68t130{
A68_INT  Type;
A_PAD_INT(PAD_46)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Decno;
A_PAD_INT(PAD_48)
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t131{
A68_VC  Representation;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(REF MODE26)  */
struct A68t133{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_VC  Nu;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t134{
A68_INT  Mode;
A_PAD_INT(PAD_50)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_51)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t135{
A68_INT  Mode;
A_PAD_INT(PAD_52)
A68_VC  Denotation;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t136{
A68_INT  Fn;
A_PAD_INT(PAD_53)
A68_INT  Mode;
A_PAD_INT(PAD_54)
A68_INT  Param;
A_PAD_INT(PAD_55)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT,INT)  */
struct A68t137{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_56)
A68_INT  Mode;
A_PAD_INT(PAD_57)
A68_INT  Rdenno;
A_PAD_INT(PAD_58)
A68_INT  Maxname;
A_PAD_INT(PAD_59)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t138{
A68_INT  W;
A_PAD_INT(PAD_60)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT)  */
struct A68t139{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_61)
A68_INT  Status;
A_PAD_INT(PAD_62)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_63)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_64)
A68_BITS  Props;
A_PAD_BITS(PAD_65)
A68_INT  Param;
A_PAD_INT(PAD_66)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t141{
A68_BOOL  Start;
A_PAD_BOOL(PAD_67)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(BOOL)  */
struct A68t142{
A68_INT  Fn;
A_PAD_INT(PAD_68)
A68_INT  Mode;
A_PAD_INT(PAD_69)
A68_BITS  Props;
A_PAD_BITS(PAD_70)
A68_INT  Param;
A_PAD_INT(PAD_71)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t143{
A68_INT  Fn;
A_PAD_INT(PAD_72)
A68_INT  Mode;
A_PAD_INT(PAD_73)
A68_BITS  Props;
A_PAD_BITS(PAD_74)
A68_INT  Resultmode;
A_PAD_INT(PAD_75)
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t144{
A68_INT  Fn;
A_PAD_INT(PAD_76)
A68_BITS  Props;
A_PAD_BITS(PAD_77)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT,BITS)  */
struct A68t132 { A68_INT mode; union {
struct A68t103  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t131  mode4;
struct A68t57  mode5;
struct A68t133  mode6;
struct A68t120  mode7;
struct A68t134  mode8;
struct A68t135  mode9;
struct A68t136  mode10;
struct A68t130  mode11;
struct A68t137  mode12;
struct A68t138  mode13;
struct A68t139  mode14;
struct A68t140  mode15;
struct A68t121  mode16;
struct A68t141  mode17;
struct A68t128  mode18;
struct A68t123  mode19;
struct A68t142  mode20;
struct A68t143  mode21;
struct A68t144  mode22;
struct A68t122  mode23;
struct A68t125  mode24;
struct A68t126  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t132  A68_132 ;    /* UNION(MODE103,INT,BOOL,MODE131,MODE57,MODE133,MODE120,MODE134,MODE135,MODE136,MODE130,MODE137,MODE138,MODE139,MODE140,MODE121,MODE141,MODE128,MODE123,MODE142,MODE143,MODE144,MODE122,MODE125,MODE126,VOID)  */
struct A68t145 { A68_INT mode; union {
struct A68t103  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t131  mode4;
struct A68t57  mode5;
struct A68t133  mode6;
struct A68t120  mode7;
struct A68t134  mode8;
struct A68t135  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t145  A68_145 ;    /* UNION(MODE103,INT,BOOL,MODE131,MODE57,MODE133,MODE120,MODE134,MODE135)  */
struct A68t146 { A68_INT mode; union {
struct A68t103  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t131  mode4;
struct A68t57  mode5;
struct A68t133  mode6;
struct A68t120  mode7;
struct A68t134  mode8;
struct A68t135  mode9;
struct A68t136  mode10;
struct A68t130  mode11;
struct A68t137  mode12;
struct A68t138  mode13;
struct A68t139  mode14;
struct A68t140  mode15;
struct A68t121  mode16;
struct A68t141  mode17;
struct A68t128  mode18;
struct A68t123  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t146  A68_146 ;    /* UNION(MODE103,INT,BOOL,MODE131,MODE57,MODE133,MODE120,MODE134,MODE135,MODE136,MODE130,MODE137,MODE138,MODE139,MODE140,MODE121,MODE141,MODE128,MODE123)  */
A_ISTRUCT(A68_CHAR ,32,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 32 CHAR */
A_VECTOR(struct A68t153 ,A68t152);
typedef struct A68t152  A68_152 ;    /* VECTOR [] MODE153 */
A_VECTOR(struct A68t160 ,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] MODE160 */
struct A68t160{
struct A68t148  N;
A_PAD_ISTRUCT(A68_148 ,PAD_78)
struct A68t148  F;
A_PAD_ISTRUCT(A68_148 ,PAD_79)
A68_INT  Level;
A_PAD_INT(PAD_80)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE148,MODE148,INT)  */
struct A68t158 { A68_INT mode; union {
A68_VC  mode1;
struct A68t159  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t158  A68_158 ;    /* UNION(REF MODE26,REF MODE159)  */
struct A68t154{
struct A68t148  F;
A_PAD_ISTRUCT(A68_148 ,PAD_81)
A68_INT  No;
A_PAD_INT(PAD_82)
A68_INT  Nl;
A_PAD_INT(PAD_83)
A68_INT  Ng;
A_PAD_INT(PAD_84)
struct A68t158  U;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(MODE148,INT,INT,INT,MODE158)  */
A_VECTOR(struct A68t157 ,A68t155);
typedef struct A68t155  A68_155 ;    /* VECTOR [] MODE157 */
struct A68t157{
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_85)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_86)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_87)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_88)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_89)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_90)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t56 ,A68t156);
typedef struct A68t156  A68_156 ;    /* VECTOR [] MODE56 */
struct A68t153{
struct A68t154  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_91)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_92)
struct A68t155  Keptinfo;
struct A68t156  Cnames;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(MODE154,MODE56,LONG INT,REF MODE155,REF MODE156)  */
struct A68t149{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_93)
struct A68t56  Lname;
A_PAD_ISTRUCT(A68_56 ,PAD_94)
struct A68t56  Gname;
A_PAD_ISTRUCT(A68_56 ,PAD_95)
struct A68t152  Specs;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(MODE56,MODE56,MODE56,REF MODE152)  */
struct A68t147{
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_96)
struct A68t149  Ym;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_97)
A68_INT  Level;
A_PAD_INT(PAD_98)
struct A68t150 * Ids;
struct A68t151 * Uses;
struct A68t147 * Rest;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(MODE148,MODE149,MODE56,INT,REF MODE150,REF MODE151,REF MODE147)  */
struct A68t150{
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_99)
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_100)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_101)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_102)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_103)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_104)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_105)
A68_INT  Mode;
A_PAD_INT(PAD_106)
A68_INT  Decno;
A_PAD_INT(PAD_107)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t150 * Rest;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(MODE148,MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE150)  */
struct A68t151{
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_108)
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_109)
struct A68t150 * Ids;
struct A68t151 * Rest;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(MODE148,MODE56,REF MODE150,REF MODE151)  */
struct A68t162{
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_110)
struct A68t160  L;
struct A68t160  G;
A68_INT  Type;
A_PAD_INT(PAD_111)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(MODE148,MODE160,MODE160,INT)  */
struct A68t163{
struct A68t56  L;
A_PAD_ISTRUCT(A68_56 ,PAD_112)
struct A68t56  G;
A_PAD_ISTRUCT(A68_56 ,PAD_113)
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE56,MODE56)  */
struct A68t161{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_114)
struct A68t162  Xmi;
struct A68t163  Checkinfo;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(MODE56,MODE162,MODE163)  */
struct A68t165 ;

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE165) VOID */
struct A68t165{
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_115)
struct A68t149  Ym;
struct A68t148  Formal;
A_PAD_ISTRUCT(A68_148 ,PAD_116)
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_117)
A68_INT  Level;
A_PAD_INT(PAD_118)
A68_INT  Ownlevel;
A_PAD_INT(PAD_119)
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE148,MODE149,MODE148,MODE56,INT,INT)  */
struct A68t167 ;

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t167 ,A68_INT ),(struct A68t167 ,A68_INT ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE167,INT) VOID */
struct A68t167{
A68_INT  Type;
A_PAD_INT(PAD_120)
A68_INT  Moduleno;
A_PAD_INT(PAD_121)
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_122)
struct A68t149  Ym;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,INT,MODE148,MODE149)  */
struct A68t169 ;

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t169 ),(struct A68t169 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE169) VOID */
struct A68t169{
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_123)
A68_INT  Decno;
A_PAD_INT(PAD_124)
A68_INT  Level;
A_PAD_INT(PAD_125)
A68_INT  Mode;
A_PAD_INT(PAD_126)
A68_INT  Scope;
A_PAD_INT(PAD_127)
struct A68t169 * Rest;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(MODE148,INT,INT,INT,INT,REF MODE169)  */
A_ROW(struct A68t147 *,A68t170,1);
typedef struct A68t170  A68_170 ;    /* [] REF MODE147 */
struct A68t172 ;

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t148 ,A68_INT ,A68_BOOL ,struct A68t172 *),(struct A68t148 ,A68_INT ,A68_BOOL ,struct A68t172 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE148,INT,BOOL) MODE172 */
struct A68t172{
struct A68t162  Xmi;
struct A68t149  Ym;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(MODE162,MODE149)  */
struct A68t174 ;

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t148 ,struct A68t148 ,struct A68t149 ,struct A68t174 *),(struct A68t148 ,struct A68t148 ,struct A68t149 ,struct A68t174 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE148,MODE148,MODE149) MODE174 */
struct A68t174{
struct A68t154  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_128)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(MODE154,MODE56)  */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t162 ),(struct A68t162 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE162) VOID */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE154) VOID */
A_ROW(struct A68t153 ,A68t177,1);
typedef struct A68t177  A68_177 ;    /* [] MODE153 */
struct A68t178{
A68_INT  Parameters;
A_PAD_INT(PAD_129)
A68_INT  Result;
A_PAD_INT(PAD_130)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t179{
A68_INT  Mode;
A_PAD_INT(PAD_132)
A68_INT  Offset;
A_PAD_INT(PAD_133)
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_134)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,INT,MODE148)  */
struct A68t181 ;

A_PROCEDURE(A68_VOID ,A68t180,(A68_INT ,struct A68t181 *),(A68_INT ,struct A68t181 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(INT) REF MODE181 */
A_VECTOR(A68_INT ,A68t181);
typedef struct A68t181  A68_181 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t179 *,A68_VC *),(struct A68t179 *,A68_VC *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REF MODE179) MODE26 */

A_PROCEDURE(A68_VOID ,A68t183,(A68_INT ,A68_VC ,struct A68t102 *),(A68_INT ,A68_VC ,struct A68t102 *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(INT,MODE26) MODE102 */
struct A68t185 ;

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t185 ,A68_INT ),(struct A68t185 ,A68_INT ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE185,INT) VOID */
A_ROW(struct A68t186 ,A68t185,1);
typedef struct A68t185  A68_185 ;    /* [] MODE186 */
struct A68t196{
A68_INT  Mode;
A_PAD_INT(PAD_135)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT)  */
struct A68t186 { A68_INT mode; union {
A68_INT  mode1;
struct A68t187 * mode2;
struct A68t188 * mode3;
struct A68t189 * mode4;
struct A68t190 * mode5;
struct A68t191 * mode6;
struct A68t192 * mode7;
struct A68t193 * mode8;
struct A68t194 * mode9;
struct A68t195 * mode10;
struct A68t196  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t186  A68_186 ;    /* UNION(INT,REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195,MODE196)  */
struct A68t187{
A68_INT  Rdenno;
A_PAD_INT(PAD_136)
struct A68t200 * Modelist;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,REF MODE200)  */
struct A68t188{
A68_INT  Deproc;
A_PAD_INT(PAD_137)
struct A68t200 * Pars;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,REF MODE200)  */
struct A68t189{
A68_INT  Rdenno;
A_PAD_INT(PAD_138)
A68_INT  Deflex;
A_PAD_INT(PAD_139)
struct A68t199 * Sels;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,INT,REF MODE199)  */
struct A68t190{
A68_INT  Rdenno;
A_PAD_INT(PAD_140)
A68_INT  Imode;
A_PAD_INT(PAD_141)
A68_INT  Length;
A_PAD_INT(PAD_142)
A68_INT  Deflex;
A_PAD_INT(PAD_143)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t191{
A68_INT  Deproc;
A_PAD_INT(PAD_144)
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT)  */
struct A68t192{
A68_INT  Rdenno;
A_PAD_INT(PAD_145)
A68_INT  Vecmode;
A_PAD_INT(PAD_146)
A68_INT  Deflex;
A_PAD_INT(PAD_147)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,INT,INT)  */
struct A68t193{
A68_INT  Rdenno;
A_PAD_INT(PAD_148)
A68_INT  Mode;
A_PAD_INT(PAD_149)
A68_INT  Nods;
A_PAD_INT(PAD_150)
A68_INT  Deflex;
A_PAD_INT(PAD_151)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t194{
A68_INT  Mode;
A_PAD_INT(PAD_152)
struct A68t198 * Stenlist;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT,REF MODE198)  */
struct A68t195{
A68_INT  Mode;
A_PAD_INT(PAD_153)
A68_INT  Modeproc;
A_PAD_INT(PAD_154)
struct A68t197 * El;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT,INT,REF MODE197)  */
struct A68t197{
struct A68t195 * Am;
struct A68t197 * Rest;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE195,REF MODE197)  */
struct A68t198{
A68_INT  Mode;
A_PAD_INT(PAD_155)
A68_INT  Rdenno;
A_PAD_INT(PAD_156)
struct A68t198 * Rest;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,INT,REF MODE198)  */
struct A68t199{
A68_INT  Mode;
A_PAD_INT(PAD_157)
A68_INT  Fieldno;
A_PAD_INT(PAD_158)
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_159)
struct A68t199 * Rest;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT,INT,MODE148,REF MODE199)  */
struct A68t200{
A68_INT  Mode;
A_PAD_INT(PAD_160)
struct A68t200 * Rest;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,REF MODE200)  */

A_PROCEDURE(A68_VOID ,A68t201,(A68_INT ,struct A68t178 *),(A68_INT ,struct A68t178 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(INT) MODE178 */
struct A68t203 ;

A_PROCEDURE(A68_VOID ,A68t202,(A68_INT ,struct A68t203 *),(A68_INT ,struct A68t203 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(INT) REF MODE203 */
A_VECTOR(struct A68t179 ,A68t203);
typedef struct A68t203  A68_203 ;    /* VECTOR [] MODE179 */

A_PROCEDURE(A68_INT ,A68t204,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t205,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t206,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_INT ,A68t207,(struct A68t181 ,struct A68t181 ),(struct A68t181 ,struct A68t181 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE181,REF MODE181) INT */

A_PROCEDURE(A68_VOID ,A68t208,(A68_INT ,struct A68t181 ,struct A68t117 *),(A68_INT ,struct A68t181 ,struct A68t117 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(INT,REF MODE181) MODE117 */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t181 ,struct A68t181 ,A68_VC *),(struct A68t181 ,struct A68t181 ,A68_VC *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE181,REF MODE181) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t89 ),(struct A68t89 ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE89) VOID */

A_PROCEDURE(struct A68t56 ,A68t211,(void),(void *));
typedef struct A68t211  A68_211 ;    /* PROC MODE56 */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t56 ),(struct A68t56 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE56) VOID */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t89 ,A68_VC *),(struct A68t89 ,A68_VC *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE89) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t214,(struct A68t98 *,struct A68t98 *),(struct A68t98 *,struct A68t98 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE98,REF MODE98) BOOL */

A_PROCEDURE(A68_BOOL ,A68t215,(struct A68t98 *),(struct A68t98 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE98) BOOL */

A_PROCEDURE(A68_BOOL ,A68t216,(struct A68t98 *,A68_LBITS ),(struct A68t98 *,A68_LBITS ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE98,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t217,(struct A68t98 *),(struct A68t98 *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE98) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t218,(struct A68t98 *,A68_VC *),(struct A68t98 *,A68_VC *,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE98) MODE26 */

A_PROCEDURE(struct A68t98 *,A68t219,(struct A68t98 *,A68_INT ),(struct A68t98 *,A68_INT ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE98,INT) REF MODE98 */

A_PROCEDURE(A68_INT ,A68t220,(struct A68t104 ),(struct A68t104 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE104) INT */
struct A68t221{
struct A68t98 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_161)
};
typedef struct A68t221  A68_221 ;    /* STRUCT(REF MODE98,REF MODE55,INT)  */

A_PROCEDURE(A68_BOOL ,A68t222,(struct A68t98 *,A68_BITS ),(struct A68t98 *,A68_BITS ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE98,BITS) BOOL */

A_PROCEDURE(struct A68t98 *,A68t223,(struct A68t105 *,A68_INT ),(struct A68t105 *,A68_INT ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE105,INT) REF MODE98 */

A_PROCEDURE(struct A68t105 *,A68t224,(struct A68t105 *),(struct A68t105 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE105) REF MODE105 */
struct A68t226 ;

A_PROCEDURE(struct A68t98 *,A68t225,(A68_INT ,A68_INT ,A68_BITS ,struct A68t226 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t226 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(INT,INT,BITS,MODE226) REF MODE98 */
A_VECTOR(struct A68t98 *,A68t226);
typedef struct A68t226  A68_226 ;    /* VECTOR [] REF MODE98 */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t98 *,A68_BOOL ,A68_VC *),(struct A68t98 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE98,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t228,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE98) LONG INT */
struct A68t229 { A68_INT mode; union {
struct A68t98 * mode1;
A68_VC  mode2;
struct A68t102  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t229  A68_229 ;    /* UNION(REF MODE98,MODE26,MODE102)  */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t229 ,A68_VC *),(struct A68t229 ,A68_VC *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE229) MODE26 */
struct A68t232 ;

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t232 ,A68_VC *),(struct A68t232 ,A68_VC *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE232) MODE26 */
A_VECTOR(struct A68t229 ,A68t232);
typedef struct A68t232  A68_232 ;    /* VECTOR [] MODE229 */

A_PROCEDURE(A68_VOID ,A68t233,(A68_VC ,struct A68t232 ,A68_VC *),(A68_VC ,struct A68t232 ,A68_VC *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE26,MODE232) MODE26 */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE232) VOID */

A_PROCEDURE(A68_VOID ,A68t235,(A68_VC ,A68_INT ,struct A68t232 ,struct A68t102 *),(A68_VC ,A68_INT ,struct A68t232 ,struct A68t102 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE26,INT,MODE232) MODE102 */

A_PROCEDURE(struct A68t98 *,A68t236,(struct A68t98 *),(struct A68t98 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE98) REF MODE98 */

A_PROCEDURE(struct A68t98 *,A68t237,(A68_VC ,struct A68t98 *),(A68_VC ,struct A68t98 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE26,REF MODE98) REF MODE98 */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE59) VOID */

A_PROCEDURE(A68_VOID ,A68t240,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t241);
typedef struct A68t241  A68_241 ;    /* STRUCT 61 CHAR */

A_PROCEDURE(A68_VOID ,A68t242,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(INT,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,11,A68t243);
typedef struct A68t243  A68_243 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t245);
typedef struct A68t245  A68_245 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t130 ),(struct A68t130 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE130) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t247);
typedef struct A68t247  A68_247 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t248);
typedef struct A68t248  A68_248 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t249,(A68_INT ,A68_INT ,A68_VC ,struct A68t56 ,A68_BITS ,A68_VC ,A68_VC ),(A68_INT ,A68_INT ,A68_VC ,struct A68t56 ,A68_BITS ,A68_VC ,A68_VC ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(INT,INT,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,1,A68t250);
typedef struct A68t250  A68_250 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t251,(A68_INT ,struct A68t98 *),(A68_INT ,struct A68t98 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(INT,REF MODE98) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_VC ,4,A68t253);
typedef struct A68t253  A68_253 ;    /* STRUCT 4 MODE26 */
A_ISTRUCT(A68_CHAR ,39,A68t254);
typedef struct A68t254  A68_254 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_VC ,3,A68t255);
typedef struct A68t255  A68_255 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(struct A68t66 ,2,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 2 MODE66 */
A_ISTRUCT(struct A68t66 ,7,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 7 MODE66 */
A_ISTRUCT(struct A68t66 ,5,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 5 MODE66 */

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t130 ,struct A68t105 **),(struct A68t130 ,struct A68t105 **,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE130,REF REF MODE105) VOID */
A_ISTRUCT(A68_CHAR ,22,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t130 ,struct A68t98 *,A68_INT ),(struct A68t130 ,struct A68t98 *,A68_INT ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE130,REF MODE98,INT) VOID */
A_ISTRUCT(A68_CHAR ,23,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t264);
typedef struct A68t264  A68_264 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(struct A68t98 *,A68t265,(struct A68t98 *,struct A68t98 ),(struct A68t98 *,struct A68t98 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE98,MODE98) REF MODE98 */

A_PROCEDURE(struct A68t99 *,A68t266,(struct A68t99 *,struct A68t99 ),(struct A68t99 *,struct A68t99 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE99,MODE99) REF MODE99 */
#define A68_267  A68_VC 
#define A68t267 A68t26            /* FLEX VECTOR [] CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t268);
typedef struct A68t268  A68_268 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t66 ,6,A68t269);
typedef struct A68t269  A68_269 ;    /* STRUCT 6 MODE66 */
A_ISTRUCT(A68_CHAR ,13,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(struct A68t66 ,4,A68t272);
typedef struct A68t272  A68_272 ;    /* STRUCT 4 MODE66 */
A_ISTRUCT(A68_CHAR ,16,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(struct A68t66 ,10,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 10 MODE66 */

A_PROCEDURE(A68_VOID ,A68t277,(A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t181 ),(A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t181 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(INT,INT,BOOL,BOOL,BOOL,REF MODE181) VOID */
A_VECTOR(A68_VC ,A68t278);
typedef struct A68t278  A68_278 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t279,(A68_BOOL ,struct A68t278 *),(A68_BOOL ,struct A68t278 *,void *));
typedef struct A68t279  A68_279 ;    /* PROC(BOOL) MODE278 */
A_ISTRUCT(struct A68t66 ,3,A68t280);
typedef struct A68t280  A68_280 ;    /* STRUCT 3 MODE66 */
A_ISTRUCT(A68_CHAR ,15,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(struct A68t66 ,8,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 8 MODE66 */
A_ISTRUCT(A68_CHAR ,18,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t287,(A68_VC ,A68_INT ,struct A68t181 ,A68_INT ,A68_INT ,struct A68t72 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t181 ,A68_INT ,A68_INT ,struct A68t72 ,A68_BITS ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(REF MODE26,INT,REF MODE181,INT,INT,MODE72,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t288,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE139) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 29 CHAR */

A_PROCEDURE(A68_VOID ,A68t292,(A68_BOOL ,struct A68t181 *),(A68_BOOL ,struct A68t181 *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(BOOL) MODE181 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  GYPACTR_getcfragment(struct A68t98 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
#define QKJACTR_constant 0X1U
#define TKJACTR_nonloc 0X8U
#define WKJACTR_isnil 0X40U
extern A68_BOOL  UUPACTR_hasattribute(struct A68t98 *,A68_BITS );
extern A68_VOID  NCQACTR_bracketcfragment(struct A68t98 *,A68_VC *);
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_56  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from unionaids --- */
extern A68_INT  SUQACTR_findints(struct A68t181 ,struct A68t181 );
extern A68_VOID  IVQACTR_uniontouniontable(struct A68t181 ,struct A68t181 ,A68_VC *);
/* --- End of imports from unionaids --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from modes --- */
extern A68_180  YVMACTR_constituents;
extern A68_VOID  XKNACTR_ctype(A68_INT ,A68_VC *);
extern A68_VOID  BLNACTR_cvartype(A68_INT ,A68_VC *);
extern A68_70  SVMACTR_deproc;
extern A68_BOOL  NSMACTR_isprocp(A68_INT );
extern A68_INT  IOMACTR_modetype(A68_INT );
extern A68_180  AWMACTR_parameters;
extern A68_BOOL  VSMACTR_iscstruct(A68_INT );
extern A68_INT  TKNACTR_givecvariabletype(A68_INT ,A68_BOOL );
extern A68_VOID  WLNACTR_ctaggedtype(A68_INT ,A68_VC *);
extern A68_VOID  CMNACTR_alignnextstructfield(A68_INT ,A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define TEAACTR_gotomode 4
#define EEAACTR_primitive 1
extern A68_INT  WFAACTR_refrefmark;
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from incinstallation --- */
/* --- End of imports from incinstallation --- */


/* --- Imports from modules --- */
extern A68_117  UAPACTR_keptdecnos;
extern A68_56  DMOACTR_nulluname;
extern A68_BOOL  XAPACTR_rscompatiblewithpreviousversion;
extern A68_177  DBPACTR_specs;
extern A68_BOOL  YAPACTR_transcompatiblewithpreviousversi;
/* --- End of imports from modules --- */


/* --- Imports from incimperatives --- */
#define MCAACTR_aliasing 2
#define LCAACTR_announcing 0
#define OCAACTR_operatorbit 004U
/* --- End of imports from incimperatives --- */


/* --- Imports from incid --- */
#define IAAACTR_maxidno 2000
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
#define OAAACTR_minlab 16384
#define LAAACTR_minlibid 4001
/* --- End of imports from incid --- */


/* --- Imports from idtable --- */
extern A68_108 * YQKACTR_get_idinfo(A68_INT );
extern A68_VOID  RRKACTR_afterbang(A68_VC ,A68_VC *);
extern A68_INT  VPKACTR_alienidno;
extern A68_108  UPKACTR_alienidinfo;
extern A68_112  LXKACTR_externaldec;
extern A68_75  MXKACTR_externalcdec;
extern A68_113  WPKACTR_ids;
extern A68_114  XPKACTR_rds;
extern A68_113  YPKACTR_libraryids;
extern A68_115  ZPKACTR_labels;
extern A68_VOID  WSKACTR_labelfullname(A68_INT ,A68_VC *);
extern A68_VOID  UTKACTR_idfullname(A68_INT ,A68_VC *);
extern A68_VOID  DTKACTR_labelbuffername(A68_INT ,A68_VC *);
#define AQKACTR_idnoflags 0X0U
#define BQKACTR_ididentityflag 0X1U
#define CQKACTR_idkeptflag 0X2U
#define DQKACTR_idccdecflag 0X4U
#define EQKACTR_idforallflag 0X8U
#define FQKACTR_idforflag 0X10U
#define GQKACTR_idformalflag 0X20U
#define HQKACTR_idoptimisedflag 0X40U
#define IQKACTR_idopflag 0X80U
#define JQKACTR_idgprocflag 0X100U
#define KQKACTR_idkeptgenprocflag 0X200U
#define LQKACTR_idloadedflag 0X400U
#define MQKACTR_idforceuseflag 0X800U
extern A68_BITS  NQKACTR_idpresetflags;
extern A68_VOID  LUKACTR_rdenvname(A68_INT ,A68_VC *);
extern A68_VOID  DUKACTR_rdfnname(A68_INT ,A68_VC *);
#define SQKACTR_rdopflag 0X10U
#define OQKACTR_rdnoflags 0X0U
#define PQKACTR_rdkeptflag 0X2U
#define RQKACTR_rdglobalflag 0X8U
extern A68_BOOL  TUKACTR_standopsym(A68_VC );
#define VQKACTR_labdeclaredflag 0X1U
#define WQKACTR_labbufferemittedflag 0X2U
/* --- End of imports from idtable --- */


/* --- Imports from evaluator --- */
extern A68_VOID  HKVACTR_evaluatestack(struct A68t105 **);
/* --- End of imports from evaluator --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  MXIACTR_portabilitywarning(A68_INT );
extern A68_VOID  VWIACTR_pwarning(A68_INT ,struct A68t85 );
extern A68_BOOL  AQIACTR_verboseoption;
extern A68_BOOL  NQIACTR_nostructresultoption;
extern A68_BOOL  OQIACTR_closuremarkoption;
extern A68_BOOL  PQIACTR_closureonstackoption;
extern A68_BOOL  RQIACTR_oldalienoption;
extern A68_59  MSIACTR_list;
extern A68_91  IYIACTR_config_info;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define GSLACTR_importsstream 2
#define HSLACTR_externstream 3
extern A68_INT  KSLACTR_nonlocdecstream(A68_INT );
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  QSLACTR_locdecstream(A68_INT );
extern A68_INT  TSLACTR_labelstream(A68_INT );
extern A68_VOID  QPLACTR_currentenviron(A68_72 *);
extern A68_INT  VRLACTR_currentlevel(void);
extern A68_INT  ZPLACTR_currentroutine(void);
extern A68_INT  CQLACTR_findroutine(A68_INT );
extern A68_BOOL  JQLACTR_nonlocalsused(void);
extern A68_BOOL  PRLACTR_isgloballevel(struct A68t72 );
/* --- End of imports from environ --- */


/* --- Imports from denotations --- */
extern A68_VOID  DRJACTR_replacecontrolchars(A68_VC ,A68_VC *);
/* --- End of imports from denotations --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t65 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t36 ,A68_VC *);
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_INT  KMAAOSF_truncate(A68_CHAR ,A68_VC );
extern A68_VOID  SNAAOSF_capitalised(A68_VC ,A68_VC *);
extern A68_BITS * PKAAOSF_orab(A68_BITS *,A68_BITS );
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ATPACTR(void);   /* values */
extern void RHMACTR(void);   /* uniquenameserver */
extern void HTQACTR(void);   /* unionaids */
extern void BCHACTR(void);   /* moduletracer */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void ODAACTR(void);   /* incinstallation */
extern void MLOACTR(void);   /* modules */
extern void UAAACTR(void);   /* incimperatives */
extern void BAAACTR(void);   /* incid */
extern void PPKACTR(void);   /* idtable */
extern void KEVACTR(void);   /* evaluator */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void LLJACTR(void);   /* denotations */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_241   QKVACTR = {"$Id: identifiers.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,RKVACTR,QKVACTR,61)
static A68_243   VKVACTR = {"identifiers"}; 
A_GISVEC(A68_VC ,WKVACTR,VKVACTR,11)
static A68_244   XKVACTR = {"identifiers("}; 
static A68_245   YKVACTR = {"): "}; 
A_GISVEC(A68_VC ,ZKVACTR,XKVACTR,12)
A_GISVEC(A68_VC ,BLVACTR,YKVACTR,3)
static A68_247   ELVACTR = {"dummy dec"}; 
A_GISVEC(A68_VC ,FLVACTR,ELVACTR,9)
static A68_248   QLVACTR = {"RS/trans keeplist inconsistency"}; 
A_GISVEC(A68_VC ,RLVACTR,QLVACTR,31)
static A68_250   KNVACTR = {""}; 
A_GISVEC(A68_VC ,MNVACTR,KNVACTR,0)
static A68_252   NOVACTR = {"#define "}; 
A_GISVEC(A68_VC ,OOVACTR,NOVACTR,8)
static A68_56   CPVACTR = {"extern "}; 
static A68_245   EPVACTR = {"();"}; 
A_GISVEC(A68_VC ,IPVACTR,EPVACTR,3)
A_GISVEC(A68_VC ,MPVACTR,CPVACTR,7)
static A68_254   QPVACTR = {"/* no definition of ALIEN supplied for "}; 
A_GISVEC(A68_VC ,RPVACTR,QPVACTR,39)
static A68_245   SPVACTR = {" */"}; 
A_GISVEC(A68_VC ,TPVACTR,SPVACTR,3)
static A68_252   SQVACTR = {"#define "}; 
A_GISVEC(A68_VC ,TQVACTR,SQVACTR,8)
static A68_250   TRVACTR = {""}; 
A_GISVEC(A68_VC ,URVACTR,TRVACTR,0)
static A68_56   XRVACTR = {"static "}; 
A_GISVEC(A68_VC ,YRVACTR,XRVACTR,7)
static A68_56   KSVACTR = {" /* OP "}; 
static A68_245   LSVACTR = {" */"}; 
A_GISVEC(A68_VC ,MSVACTR,KSVACTR,7)
A_GISVEC(A68_VC ,NSVACTR,LSVACTR,3)
static A68_250   QSVACTR = {""}; 
A_GISVEC(A68_VC ,RSVACTR,QSVACTR,0)
static A68_245   ZSVACTR = {" = "}; 
A_GISVEC(A68_VC ,ATVACTR,ZSVACTR,3)
#define DUVACTR_identity 1
#define EUVACTR_variable 2
#define FUVACTR_formalparam 3
#define GUVACTR_forcontrol 4
#define HUVACTR_initialisedvar 5
#define IUVACTR_caseconformity 6
#define JUVACTR_forallcontrol 7
#define KUVACTR_dummy 8
#define QUVACTR_noinitialvalue (A68_98 *)A68_NIL
static A68_260   DVVACTR = {"ccdec not handled here"}; 
A_GISVEC(A68_VC ,EVVACTR,DVVACTR,22)
static A68_261   OVVACTR = {"This transiddec type should not occur"}; 
A_GISVEC(A68_VC ,PVVACTR,OVVACTR,37)
static A68_263   UVVACTR = {"ccdec: not a choice dec"}; 
A_GISVEC(A68_VC ,VVVACTR,UVVACTR,23)
static A68_264   BWVACTR = {".data.mode"}; 
A_GISVEC(A68_VC ,DWVACTR,BWVACTR,10)
static A68_252   GXVACTR = {"A_UNCPY("}; 
A_GISVEC(A68_VC ,HXVACTR,GXVACTR,8)
static A68_268   OXVACTR = {");"}; 
A_GISVEC(A68_VC ,PXVACTR,OXVACTR,2)
static A68_247   WXVACTR = {".mode -= "}; 
A_GISVEC(A68_VC ,XXVACTR,WXVACTR,9)
static A68_270   NYVACTR = {".mode = \"\\000"}; 
A_GISVEC(A68_VC ,OYVACTR,NYVACTR,13)
static A68_268   SYVACTR = {"\"["}; 
A_GISVEC(A68_VC ,TYVACTR,SYVACTR,2)
static A68_56   XYVACTR = {".mode];"}; 
A_GISVEC(A68_VC ,YYVACTR,XYVACTR,7)
static A68_271   DZVACTR = {"ccdec: invalid mode index"}; 
A_GISVEC(A68_VC ,EZVACTR,DZVACTR,25)
static A68_244   MZVACTR = {"A68_jmp_buf "}; 
A_GISVEC(A68_VC ,NZVACTR,MZVACTR,12)
static A68_273   YZVACTR = {"if ( sigsetjmp( "}; 
A_GISVEC(A68_VC ,ZZVACTR,YZVACTR,16)
static A68_274   CAWACTR = {".label"}; 
A_GISVEC(A68_VC ,EAWACTR,CAWACTR,6)
static A68_243   HAWACTR = {",1) ) goto "}; 
A_GISVEC(A68_VC ,IAWACTR,HAWACTR,11)
#define UAWACTR_idtype 1
#define VAWACTR_rdtype 2
#define WAWACTR_libtype 3
#define XAWACTR_labtype 4
static A68_254   EBWACTR = {"IDENTIFIERS - library ids not supported"}; 
A_GISVEC(A68_VC ,FBWACTR,EBWACTR,39)
static A68_148   HBWACTR = {"IDENTIFIERS - invalid type of id"}; 
A_GISVEC(A68_VC ,IBWACTR,HBWACTR,32)
static A68_245   PCWACTR = {"(( "}; 
A_GISVEC(A68_VC ,QCWACTR,PCWACTR,3)
static A68_56   VCWACTR = {" * ) ( "}; 
A_GISVEC(A68_VC ,WCWACTR,VCWACTR,7)
static A68_275   BDWACTR = {".nonlocals )) -> "}; 
A_GISVEC(A68_VC ,CDWACTR,BDWACTR,17)
static A68_245   GDWACTR = {" = "}; 
A_GISVEC(A68_VC ,HDWACTR,GDWACTR,3)
static A68_250   JFWACTR = {""}; 
A_GISVEC(A68_VC ,KFWACTR,JFWACTR,0)
static A68_247   NFWACTR = {"A_STATIC "}; 
A_GISVEC(A68_VC ,OFWACTR,NFWACTR,9)
static A68_40   ZFWACTR = {"void"}; 
A_GISVEC(A68_VC ,AGWACTR,ZFWACTR,4)
static A68_268   RGWACTR = {", "}; 
A_GISVEC(A68_VC ,SGWACTR,RGWACTR,2)
static A68_268   DHWACTR = {", "}; 
A_GISVEC(A68_VC ,EHWACTR,DHWACTR,2)
static A68_250   HHWACTR = {""}; 
A_GISVEC(A68_VC ,IHWACTR,HHWACTR,0)
static A68_281   NHWACTR = {" *ReturnedValue"}; 
A_GISVEC(A68_VC ,OHWACTR,NHWACTR,15)
static A68_268   UHWACTR = {", "}; 
A_GISVEC(A68_VC ,VHWACTR,UHWACTR,2)
static A68_250   YHWACTR = {""}; 
A_GISVEC(A68_VC ,ZHWACTR,YHWACTR,0)
static A68_281   CIWACTR = {"void *NonLocals"}; 
A_GISVEC(A68_VC ,DIWACTR,CIWACTR,15)
static A68_275   SIWACTR = {"#define NL(x) ((("}; 
A_GISVEC(A68_VC ,TIWACTR,SIWACTR,17)
static A68_275   XIWACTR = {" *)NonLocals)->x)"}; 
A_GISVEC(A68_VC ,YIWACTR,XIWACTR,17)
static A68_282   QJWACTR = {"   /* proc value of non-global proc */"}; 
A_GISVEC(A68_VC ,RJWACTR,QJWACTR,38)
static A68_250   UJWACTR = {""}; 
A_GISVEC(A68_VC ,VJWACTR,UJWACTR,0)
static A68_283   KKWACTR = {"  /* proc non-locals allocated on stack */"}; 
A_GISVEC(A68_VC ,LKWACTR,KKWACTR,42)
static A68_250   OKWACTR = {""}; 
A_GISVEC(A68_VC ,PKWACTR,OKWACTR,0)
static A68_275   VKWACTR = {"A_STACK_CLOSURE( "}; 
A_GISVEC(A68_VC ,WKWACTR,VKWACTR,17)
static A68_268   ALWACTR = {", "}; 
A_GISVEC(A68_VC ,BLWACTR,ALWACTR,2)
static A68_268   FLWACTR = {", "}; 
A_GISVEC(A68_VC ,GLWACTR,FLWACTR,2)
static A68_245   KLWACTR = {" );"}; 
A_GISVEC(A68_VC ,LLWACTR,KLWACTR,3)
static A68_285   RLWACTR = {"A_MARKED_CLOSURE( "}; 
A_GISVEC(A68_VC ,SLWACTR,RLWACTR,18)
static A68_243   VLWACTR = {"A_CLOSURE( "}; 
A_GISVEC(A68_VC ,WLWACTR,VLWACTR,11)
static A68_268   AMWACTR = {", "}; 
A_GISVEC(A68_VC ,BMWACTR,AMWACTR,2)
static A68_268   FMWACTR = {", "}; 
A_GISVEC(A68_VC ,GMWACTR,FMWACTR,2)
static A68_245   KMWACTR = {" );"}; 
A_GISVEC(A68_VC ,LMWACTR,KMWACTR,3)
static A68_286   RMWACTR = {"typedef struct"}; 
A_GISVEC(A68_VC ,SMWACTR,RMWACTR,14)
static A68_248   VMWACTR = {"   /* env of non-global proc */"}; 
A_GISVEC(A68_VC ,WMWACTR,VMWACTR,31)
static A68_250   ZMWACTR = {""}; 
A_GISVEC(A68_VC ,ANWACTR,ZMWACTR,0)
static A68_286   GNWACTR = {" A68_INT mark;"}; 
A_GISVEC(A68_VC ,HNWACTR,GNWACTR,14)
static A68_250   KNWACTR = {""}; 
A_GISVEC(A68_VC ,LNWACTR,KNWACTR,0)
static A68_264   WNWACTR = {"int dummy;"}; 
A_GISVEC(A68_VC ,XNWACTR,WNWACTR,10)
static A68_268   DOWACTR = {"} "}; 
A_GISVEC(A68_VC ,EOWACTR,DOWACTR,2)
static A68_289   YPWACTR = {"IDENTIFIERS - should be aliasing to initialised label"}; 
A_GISVEC(A68_VC ,AQWACTR,YPWACTR,53)
static A68_290   CRWACTR = {"external dec: invalid decno"}; 
A_GISVEC(A68_VC ,FRWACTR,CRWACTR,27)
static A68_291   RRWACTR = {"external c dec: invalid decno"}; 
A_GISVEC(A68_VC ,URWACTR,RRWACTR,29)
static A68_247   BSWACTR = {"A_prelude"}; 
A_GISVEC(A68_VC ,ESWACTR,BSWACTR,9)
static A68_56   FTWACTR = {"extern "}; 
A_GISVEC(A68_VC ,GTWACTR,FTWACTR,7)
static A68_40   UTWACTR = {"void"}; 
A_GISVEC(A68_VC ,VTWACTR,UTWACTR,4)
static A68_250   FUWACTR = {""}; 
A_GISVEC(A68_VC ,GUWACTR,FUWACTR,0)
static A68_250   PUWACTR = {""}; 
A_GISVEC(A68_VC ,QUWACTR,PUWACTR,0)
static A68_268   ZUWACTR = {");"}; 
A_GISVEC(A68_VC ,AVWACTR,ZUWACTR,2)
static A68_56   GVWACTR = {"extern "}; 
A_GISVEC(A68_VC ,HVWACTR,GVWACTR,7)
typedef struct   /* env of non-global proc */
{
A68_INT  Decno;
A_PAD_INT(PAD_162)
A68_98 * Initvalue;
A68_BOOL  EOVACTR_kept;
A_PAD_BOOL(PAD_163)
A68_108 * XNVACTR_idinfo;
} LOVACTR_optidentity;
typedef struct   /* env of non-global proc */
{
A68_BOOL  BOVACTR_global;
A_PAD_BOOL(PAD_164)
A68_108 * XNVACTR_idinfo;
A68_INT  Decno;
A_PAD_INT(PAD_165)
A68_INT  GOVACTR_decstream;
A_PAD_INT(PAD_166)
A68_98 * Initvalue;
A68_INT  HOVACTR_codestream;
A_PAD_INT(PAD_167)
} PRVACTR_declarecvariable;
typedef struct   /* env of non-global proc */
{
A68_INT  EEWACTR_a68paramcount;
A_PAD_INT(PAD_168)
} OEWACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Global;
A_PAD_BOOL(PAD_169)
A68_BOOL  Kept;
A_PAD_BOOL(PAD_170)
A68_INT  CEWACTR_cresultmode;
A_PAD_INT(PAD_171)
A68_VC  KEWACTR_fnname;
A68_INT  FEWACTR_cparamcount;
A_PAD_INT(PAD_172)
A68_INT  EEWACTR_a68paramcount;
A_PAD_INT(PAD_173)
A68_278  TEWACTR_paramtypes;
A68_278  REWACTR_paramnames;
A68_BOOL  AEWACTR_usetempforresult;
A_PAD_BOOL(PAD_174)
A68_INT  Resultmode;
A_PAD_INT(PAD_175)
A68_BOOL  DEWACTR_fulldec;
A_PAD_BOOL(PAD_176)
} GFWACTR_prototype;
typedef struct   /* env of non-global proc */
{
int dummy;
} ZSWACTR_generator;

A_STATIC A68_VOID  UKVACTR_debugmessage(A68_INT  Level, A68_VC  M);

A68_VOID  DLVACTR_initialdummydec(A68_130  Dummydec);

A_STATIC A68_INT  KLVACTR_keeplistposition(A68_INT  Decno);

A_STATIC A68_VOID  AMVACTR_newidinfo(A68_INT  Decno, A68_INT  Mode, A68_VC  A68name, A68_56  Prefix, A68_BITS  Flags, A68_VC  Definition, A68_VC  Rhs);

A_STATIC A68_VOID  WNVACTR_outputcdeclaration(A68_INT  Decno, A68_98 * Initvalue);

A_STATIC A68_VOID  KOVACTR_optidentity(A68_VC  Rhs, void *NonLocals);

A_STATIC A68_VOID  ORVACTR_declarecvariable(void *NonLocals);

A68_VOID  CUVACTR_iddec(A68_130  Identifierdec, A68_105 ** Valuestack);

A68_VOID  TVVACTR_ccdec(A68_130  Choicedec, A68_98 * Enquiry, A68_INT  Modeindex);

A_STATIC A68_98 * JWVACTR_assignment(A68_98 * HWVACTR_anonymous, A68_98  IWVACTR_anonymous);

A_STATIC A68_99 * OWVACTR_assignment(A68_99 * MWVACTR_anonymous, A68_99  NWVACTR_anonymous);

A68_VOID  GZVACTR_declarenonlocallabel(A68_INT  Labno);

A68_VOID  TAWACTR_nonlocaldec(A68_INT  Idno, A68_INT  Level);

A_STATIC A68_VOID  WDWACTR_declarecroutine(A68_INT  Rdenno, A68_INT  Resultmode, A68_BOOL  Global, A68_BOOL  Kept, A68_BOOL  Opsym, A68_181  Params);

A_STATIC A68_VOID  NEWACTR_generator(A68_BOOL  LEWACTR_anonymous, A68_278  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FFWACTR_prototype(A68_INT  Protostream, void *NonLocals);

A68_VOID  QNWACTR_completerddec(void);

A68_VOID  UOWACTR_rddec(A68_VC  Name, A68_INT  Mode, A68_181  Paramdecnos, A68_INT  Resultmode, A68_INT  Rdenno, A68_72  Environ, A68_BITS  Props);

A68_VOID  QPWACTR_labdec(A68_139  Labeldec);

A_STATIC A68_VOID  VQWACTR_zexternaldec(A68_VC  Name, A68_56  Prefix, A68_INT  Mode, A68_INT  Decno, A68_BOOL  Optimised, A68_BOOL  Iddec, A68_BOOL  Globalproc, A68_BOOL  Genproc, A68_BOOL  Forceuse, A68_VC  Definition, A68_VC  Rhs);

A_STATIC A68_VOID  ZQWACTR_mybefore(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QRWACTR_zexternalcdec(A68_INT  Decno);

A_STATIC A68_VOID  YSWACTR_generator(A68_BOOL  WSWACTR_anonymous, A68_181  *ReturnedValue, void *NonLocals);

A68_VOID  YVWACTR_initialiseidentifiers(void);

A68_INT  CWWACTR_leveloflabel(A68_INT  Labno);

A68_VOID  FWWACTR_environoflabel(A68_INT  Labno, A68_72  *ReturnedValue);

A_STATIC A68_99 * OWVACTR_assignment(A68_99 * MWVACTR_anonymous, A68_99  NWVACTR_anonymous)
{ 
A68_99  PWVACTR;  /* united object - for case conformity */
A68_VC  QWVACTR_anonymous;
A68_VC  RWVACTR;  /* OPERATORS - copy to flex */
A68_267 * SWVACTR;  /* YIELD */
A68_99 * TWVACTR;  /* clause result */
{ 
(*MWVACTR_anonymous) = NWVACTR_anonymous;
PWVACTR = NWVACTR_anonymous ;
switch ( PWVACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
QWVACTR_anonymous = (PWVACTR.data.mode6);
SWVACTR = &(MWVACTR_anonymous-> data.mode6) ;
(*SWVACTR) = A_VCOPY(QWVACTR_anonymous,RWVACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
TWVACTR = MWVACTR_anonymous;
} 
return( TWVACTR );
} 
#undef NL

A_STATIC A68_VOID  KOVACTR_optidentity(A68_VC  Rhs, void *NonLocals)
#define NL(x) (((LOVACTR_optidentity *)NonLocals)->x)
{ 
A68_253  MOVACTR;  /* collateral clause result */
A68_VC  POVACTR;  /* avoid structure result */
A68_VC  QOVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  SOVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  TOVACTR;  /* avoid structure result */
A68_VC  UOVACTR;  /* avoid structure result */
A68_VC  ROVACTR_definition;
A68_99  VOVACTR;  /* united object - for case conformity */
A68_101  WOVACTR_id;
A68_BOOL  XOVACTR_aliendec;
A68_108 * YOVACTR;  /* clause result */
A68_108 * ZOVACTR_rhsidinfo;
A68_BITS * APVACTR;  /* YIELD */
A68_VC  BPVACTR;  /* clause result */
A68_BITS  DPVACTR;  /* ADICOPS - >= */
A68_VC  FPVACTR;  /* clause result */
A68_VC  GPVACTR;  /* avoid structure result */
A68_VC  HPVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JPVACTR;  /* avoid structure result */
A68_VC  KPVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LPVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NPVACTR;  /* avoid structure result */
A68_85  OPVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_255  PPVACTR;  /* collateral clause result */
A68_36  UPVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VPVACTR;  /* avoid structure result */
A68_VC  WPVACTR;  /* avoid structure result */
A68_VC * XPVACTR;  /* YIELD */
A68_BOOL  YPVACTR;  /* optbool result */
A68_INT  ZPVACTR;  /* YIELD */
A68_155  AQVACTR;  /* OPERATORS - simple index */
A68_INT  BQVACTR;  /* YIELD */
A68_157 * CQVACTR_keptinfo;
A68_BOOL  DQVACTR;  /* optbool result */
A68_BOOL  EQVACTR;  /* clause result */
A68_INT  FQVACTR;  /* YIELD */
A68_LINT * GQVACTR;  /* YIELD */
A68_56 * HQVACTR;  /* YIELD */
A68_255  IQVACTR;  /* collateral clause result */
A68_VC  JQVACTR;  /* OPERATORS - istruct -> vector */
A68_56  KQVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LQVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MQVACTR;  /* avoid structure result */
A68_36  NQVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  OQVACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} PQVACTR; 
A68_VC * QQVACTR;  /* YIELD */
A68_253  RQVACTR;  /* collateral clause result */
A68_VC  UQVACTR;  /* avoid structure result */
A68_VC  VQVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  WQVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XQVACTR;  /* avoid structure result */
A68_VC  YQVACTR;  /* avoid structure result */
A68_256  ZQVACTR;  /* collateral clause result */
A68_66  ARVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BRVACTR;  /* YIELD */
A68_66  CRVACTR;  /* OPERATORS - mode -> union mode */
A68_65  DRVACTR;  /* OPERATORS - istruct -> vector */
A68_INT * ERVACTR;  /* YIELD */
A68_BITS * FRVACTR;  /* YIELD */
A68_VC  GRVACTR;  /* avoid structure result */
A68_VC * HRVACTR;  /* YIELD */
A68_BITS * IRVACTR;  /* YIELD */
A68_256  JRVACTR;  /* collateral clause result */
A68_66  KRVACTR;  /* OPERATORS - mode -> union mode */
A68_66  LRVACTR;  /* OPERATORS - mode -> union mode */
A68_65  MRVACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optidentity);
 /* line 198: */
 /* line 199: */
{ 
MOVACTR.data[0] = OOVACTR;
UTKACTR_idfullname( NL(Decno), &POVACTR );
MOVACTR.data[1] = POVACTR;
MOVACTR.data[2] = A_HVEC(QOVACTR,' ',A68_CHAR );
MOVACTR.data[3] = Rhs;
JDAAOSF_concat( A_HISVEC(SOVACTR,MOVACTR,4,A68_VC ), &TOVACTR );
ZCAAOSF_makervc( TOVACTR, &UOVACTR );
ROVACTR_definition = UOVACTR;
 /* line 201: */
 /* line 202: */
VOVACTR = (*(&(NL(Initvalue)->Extra))) ;
switch ( VOVACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
WOVACTR_id = (VOVACTR.data.mode4);
 /* line 203: */
 /* line 204: */
{ 
XOVACTR_aliendec = A68_FALSE;
 /* line 205: */
 /* line 206: */
 /* line 207: */
if ( (WOVACTR_id.Idno==VPKACTR_alienidno) )
{ 
XOVACTR_aliendec = A68_TRUE;
 /* line 208: */
YOVACTR = (&UPKACTR_alienidinfo);
} 
else
{ 
 /* line 209: */
YOVACTR = YQKACTR_get_idinfo(WOVACTR_id.Idno);
} 
ZOVACTR_rhsidinfo = YOVACTR;
 /* line 212: */
 /* line 213: */
 /* line 214: */
if ( NL(EOVACTR_kept) )
{ 
 /* line 215: */
APVACTR = (&(ZOVACTR_rhsidinfo->Flags)) ;
(*APVACTR) = (A68_BITS )((*(&(ZOVACTR_rhsidinfo->Flags)))|MQKACTR_idforceuseflag);
} 
 /* line 219: */
 /* line 220: */
 /* line 221: */
if ( XOVACTR_aliendec )
{ 
 /* line 222: */
 /* line 223: */
 /* line 225: */
if ( ((*(&(ZOVACTR_rhsidinfo->Definition))).upb>0) )
{ 
 /* line 226: */
BPVACTR = (*(&(ZOVACTR_rhsidinfo->Definition)));
} 
else
{ 
 /* line 227: */
if ( RQIACTR_oldalienoption )
{ 
 /* line 228: */
 /* line 229: */
DPVACTR = (*(&(ZOVACTR_rhsidinfo->Flags))) ;
if ( A_LB_GE(DPVACTR,JQKACTR_idgprocflag) )
{ 
 /* line 230: */
XKNACTR_ctype( A_CALLPROC(SVMACTR_deproc,((*(&(ZOVACTR_rhsidinfo->Mode)))),((*(&(ZOVACTR_rhsidinfo->Mode))),(SVMACTR_deproc).nonlocals)), &GPVACTR );
FPVACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GPVACTR,A_HVEC(HPVACTR,' ',A68_CHAR )),(*(&(ZOVACTR_rhsidinfo->Name)))),IPVACTR);
} 
else
{ 
 /* line 231: */
 /* line 232: */
 /* line 233: */
BLNACTR_cvartype( (*(&(ZOVACTR_rhsidinfo->Cvariabletype))), &JPVACTR );
FPVACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(JPVACTR,A_HVEC(KPVACTR,' ',A68_CHAR )),(*(&(ZOVACTR_rhsidinfo->Name)))),A_HVEC(LPVACTR,';',A68_CHAR ));
} 
 /* line 234: */
 /* line 235: */
ZCAAOSF_makervc( A_VC_PLUS(MPVACTR,FPVACTR), &NPVACTR );
BPVACTR = NPVACTR;
} 
else
{ 
VWIACTR_pwarning(904, A_HARR(OPVACTR,(*(&(ZOVACTR_rhsidinfo->Name))),A68_VC ));
 /* line 236: */
PPVACTR.data[0] = RPVACTR;
PPVACTR.data[1] = (*(&(ZOVACTR_rhsidinfo->Name)));
PPVACTR.data[2] = TPVACTR;
 /* line 237: */
JDAAOSF_concat( A_HISVEC(UPVACTR,PPVACTR,3,A68_VC ), &VPVACTR );
ZCAAOSF_makervc( VPVACTR, &WPVACTR );
BPVACTR = WPVACTR;
} 
} 
XPVACTR = (&(NL(XNVACTR_idinfo)->Rhs)) ;
(*XPVACTR) = BPVACTR;
 /* line 239: */
 /* line 240: */
YPVACTR = NL(EOVACTR_kept);
if ( YPVACTR )
{YPVACTR = XAPACTR_rscompatiblewithpreviousversion;
}
 /* line 242: */
if ( YPVACTR )
{ 
 /* line 243: */
{ 
ZPVACTR = 1 ;
AQVACTR = (*(&((&A_R1INDEX(DBPACTR_specs,ZPVACTR))->Keptinfo))) ;
BQVACTR = KLVACTR_keeplistposition(NL(Decno)) ;
CQVACTR_keptinfo = (&A_VINDEX(AQVACTR,BQVACTR));
 /* line 244: */
DQVACTR = A_VC_NE(ROVACTR_definition,(*(&(CQVACTR_keptinfo->Definition))));
if ( ! DQVACTR )
{ /* line 245: */
DQVACTR = A_VC_NE((*(&(NL(XNVACTR_idinfo)->Rhs))),(*(&(CQVACTR_keptinfo->Rhs))));
}
 /* line 246: */
EQVACTR = DQVACTR;
if ( EQVACTR )
{ 
YAPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 247: */
FQVACTR = 1 ;
GQVACTR = (&((&A_R1INDEX(DBPACTR_specs,FQVACTR))->Timeoflastchange)) ;
(*GQVACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
 /* line 248: */
HQVACTR = (&(NL(XNVACTR_idinfo)->Prefix)) ;
(*HQVACTR) = QIMACTR_newuniquename();
 /* line 249: */
 /* line 250: */
KQVACTR = (*(&(NL(XNVACTR_idinfo)->Prefix))) ;
IQVACTR.data[0] = A_HISVEC(JQVACTR,KQVACTR,7,A68_CHAR );
IQVACTR.data[1] = A_HVEC(LQVACTR,'_',A68_CHAR );
RRKACTR_afterbang( (*(&(NL(XNVACTR_idinfo)->Name))), &MQVACTR );
IQVACTR.data[2] = MQVACTR;
JDAAOSF_concat( A_HISVEC(NQVACTR,IQVACTR,3,A68_VC ), &OQVACTR );
PQVACTR.source = OQVACTR ;
QQVACTR = (&(NL(XNVACTR_idinfo)->C_name)) ;
(*QQVACTR) = (PQVACTR.destination);
 /* line 251: */
RQVACTR.data[0] = TQVACTR;
UTKACTR_idfullname( NL(Decno), &UQVACTR );
RQVACTR.data[1] = UQVACTR;
RQVACTR.data[2] = A_HVEC(VQVACTR,' ',A68_CHAR );
RQVACTR.data[3] = Rhs;
 /* line 252: */
JDAAOSF_concat( A_HISVEC(WQVACTR,RQVACTR,4,A68_VC ), &XQVACTR );
ZCAAOSF_makervc( XQVACTR, &YQVACTR );
ROVACTR_definition = YQVACTR;
} 
} 
} 
 /* line 255: */
BRVACTR = (*(&(NL(XNVACTR_idinfo)->Rhs))) ;
ZQVACTR.data[0] = A_UNITE(ARVACTR,mode2,2,BRVACTR);
ZQVACTR.data[1] = A_UNITE(CRVACTR,mode4,4,EIAACTR_cnewline);
 /* line 256: */
MDMACTR_writecstream(A_HISVEC(DRVACTR,ZQVACTR,2,A68_66 ), KSLACTR_nonlocdecstream(0));
} 
 /* line 259: */
ERVACTR = (&(NL(XNVACTR_idinfo)->Cvariabletype)) ;
(*ERVACTR) = (*(&(ZOVACTR_rhsidinfo->Cvariabletype)));
 /* line 260: */
 /* line 261: */
 /* line 262: */
 /* line 263: */
FRVACTR = (&(NL(XNVACTR_idinfo)->Flags)) ;
(*FRVACTR) = (A68_BITS )((*(&(NL(XNVACTR_idinfo)->Flags)))|(*(&(ZOVACTR_rhsidinfo->Flags))));
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 266: */
 /* line 267: */
 /* line 268: */
if ( NL(EOVACTR_kept) )
{ 
 /* line 269: */
ZCAAOSF_makervc( ROVACTR_definition, &GRVACTR );
HRVACTR = (&(NL(XNVACTR_idinfo)->Definition)) ;
(*HRVACTR) = GRVACTR;
} 
 /* line 271: */
IRVACTR = (&(NL(XNVACTR_idinfo)->Flags)) ;
(*IRVACTR) = (A68_BITS )((*(&(NL(XNVACTR_idinfo)->Flags)))|HQKACTR_idoptimisedflag);
 /* line 273: */
JRVACTR.data[0] = A_UNITE(KRVACTR,mode2,2,ROVACTR_definition);
JRVACTR.data[1] = A_UNITE(LRVACTR,mode4,4,EIAACTR_cnewline);
 /* line 274: */
MDMACTR_writecstream(A_HISVEC(MRVACTR,JRVACTR,2,A68_66 ), KSLACTR_nonlocdecstream(0));
} 
A_PROC_EXIT(optidentity);
return;
} 
#undef NL

A_STATIC A68_VOID  ORVACTR_declarecvariable(void *NonLocals)
#define NL(x) (((PRVACTR_declarecvariable *)NonLocals)->x)
{ 
A68_257  QRVACTR;  /* collateral clause result */
A68_BOOL  RRVACTR;  /* optbool result */
A68_BITS  SRVACTR;  /* ADICOPS - >= */
A68_66  VRVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WRVACTR;  /* YIELD */
A68_66  ZRVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ASVACTR;  /* YIELD */
A68_VC  BSVACTR;  /* avoid structure result */
A68_66  CSVACTR;  /* OPERATORS - mode -> union mode */
A68_66  DSVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  ESVACTR;  /* YIELD */
A68_VC  FSVACTR;  /* avoid structure result */
A68_66  GSVACTR;  /* OPERATORS - mode -> union mode */
A68_66  HSVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  ISVACTR;  /* YIELD */
A68_BITS  JSVACTR;  /* ADICOPS - >= */
A68_66  OSVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PSVACTR;  /* YIELD */
A68_66  SSVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TSVACTR;  /* YIELD */
A68_66  USVACTR;  /* OPERATORS - mode -> union mode */
A68_65  VSVACTR;  /* OPERATORS - istruct -> vector */
A68_258  WSVACTR;  /* collateral clause result */
A68_VC  XSVACTR;  /* avoid structure result */
A68_66  YSVACTR;  /* OPERATORS - mode -> union mode */
A68_66  BTVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CTVACTR;  /* YIELD */
A68_VC  DTVACTR;  /* avoid structure result */
A68_66  ETVACTR;  /* OPERATORS - mode -> union mode */
A68_66  FTVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  GTVACTR;  /* YIELD */
A68_66  HTVACTR;  /* OPERATORS - mode -> union mode */
A68_65  ITVACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarecvariable);
{ 
RRVACTR = !NL(BOVACTR_global);
if ( ! RRVACTR )
{ /* line 280: */
SRVACTR = (*(&(NL(XNVACTR_idinfo)->Flags))) ;
RRVACTR = A_LB_GE(SRVACTR,CQKACTR_idkeptflag);
}
 /* line 281: */
if ( RRVACTR )
{ 
 /* line 282: */
WRVACTR = URVACTR ;
QRVACTR.data[0] = A_UNITE(VRVACTR,mode2,2,WRVACTR);
} 
else
{ 
 /* line 283: */
ASVACTR = YRVACTR ;
QRVACTR.data[0] = A_UNITE(ZRVACTR,mode2,2,ASVACTR);
} 
BLNACTR_cvartype( (*(&(NL(XNVACTR_idinfo)->Cvariabletype))), &BSVACTR );
QRVACTR.data[1] = A_UNITE(CSVACTR,mode2,2,BSVACTR);
 /* line 284: */
ESVACTR = ' ' ;
QRVACTR.data[2] = A_UNITE(DSVACTR,mode1,1,ESVACTR);
UTKACTR_idfullname( NL(Decno), &FSVACTR );
QRVACTR.data[3] = A_UNITE(GSVACTR,mode2,2,FSVACTR);
 /* line 285: */
ISVACTR = ';' ;
QRVACTR.data[4] = A_UNITE(HSVACTR,mode1,1,ISVACTR);
 /* line 286: */
JSVACTR = (*(&(NL(XNVACTR_idinfo)->Flags))) ;
if ( A_LB_GE(JSVACTR,IQKACTR_idopflag) )
{ 
 /* line 287: */
 /* line 288: */
PSVACTR = A_VC_PLUS(A_VC_PLUS(MSVACTR,(*(&(NL(XNVACTR_idinfo)->Name)))),NSVACTR) ;
QRVACTR.data[5] = A_UNITE(OSVACTR,mode2,2,PSVACTR);
} 
else
{ 
 /* line 290: */
TSVACTR = RSVACTR ;
QRVACTR.data[5] = A_UNITE(SSVACTR,mode2,2,TSVACTR);
} 
QRVACTR.data[6] = A_UNITE(USVACTR,mode4,4,EIAACTR_cnewline);
 /* line 291: */
MDMACTR_writecstream(A_HISVEC(VSVACTR,QRVACTR,7,A68_66 ), NL(GOVACTR_decstream));
 /* line 293: */
 /* line 294: */
 /* line 295: */
if ( (NL(Initvalue)!=(A68_98 *)A68_NIL) )
{ 
UTKACTR_idfullname( NL(Decno), &XSVACTR );
WSVACTR.data[0] = A_UNITE(YSVACTR,mode2,2,XSVACTR);
 /* line 296: */
CTVACTR = ATVACTR ;
WSVACTR.data[1] = A_UNITE(BTVACTR,mode2,2,CTVACTR);
NCQACTR_bracketcfragment( NL(Initvalue), &DTVACTR );
WSVACTR.data[2] = A_UNITE(ETVACTR,mode2,2,DTVACTR);
 /* line 298: */
GTVACTR = ';' ;
WSVACTR.data[3] = A_UNITE(FTVACTR,mode1,1,GTVACTR);
WSVACTR.data[4] = A_UNITE(HTVACTR,mode4,4,EIAACTR_cnewline);
 /* line 299: */
 /* line 300: */
 /* line 301: */
MDMACTR_writecstream(A_HISVEC(ITVACTR,WSVACTR,5,A68_66 ), NL(HOVACTR_codestream));
} 
} 
A_PROC_EXIT(declarecvariable);
return;
} 
#undef NL

A_STATIC A68_98 * JWVACTR_assignment(A68_98 * HWVACTR_anonymous, A68_98  IWVACTR_anonymous)
{ 
A68_INT * KWVACTR;  /* YIELD */
A68_BITS * LWVACTR;  /* YIELD */
A68_98 * UWVACTR;  /* clause result */
{ 
KWVACTR = (&(HWVACTR_anonymous->Mode)) ;
(*KWVACTR) = IWVACTR_anonymous.Mode;
LWVACTR = (&(HWVACTR_anonymous->Info)) ;
(*LWVACTR) = IWVACTR_anonymous.Info;
OWVACTR_assignment((&(HWVACTR_anonymous->Extra)), IWVACTR_anonymous.Extra);
UWVACTR = HWVACTR_anonymous;
} 
return( UWVACTR );
} 
#undef NL

A_STATIC A68_VOID  NEWACTR_generator(A68_BOOL  LEWACTR_anonymous, A68_278  *ReturnedValue, void *NonLocals)
#define NL(x) (((OEWACTR_generator *)NonLocals)->x)
{ 
A68_278  PEWACTR;  /* clause result */
A68_278  QEWACTR;  /* OPERATORS - dynamic generator */
{ 
QEWACTR.upb = NL(EEWACTR_a68paramcount) ;
( LEWACTR_anonymous? A_VLOC(A68_VC ,QEWACTR): A_VHEAP(A68_VC ,QEWACTR) );
PEWACTR = QEWACTR;
} 
*ReturnedValue = (PEWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FFWACTR_prototype(A68_INT  Protostream, void *NonLocals)
#define NL(x) (((GFWACTR_prototype *)NonLocals)->x)
{ 
A68_269  HFWACTR;  /* collateral clause result */
A68_66  IFWACTR;  /* OPERATORS - mode -> union mode */
A68_66  LFWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MFWACTR;  /* YIELD */
A68_66  PFWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QFWACTR;  /* YIELD */
A68_VC  RFWACTR;  /* avoid structure result */
A68_66  SFWACTR;  /* OPERATORS - mode -> union mode */
A68_66  TFWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  UFWACTR;  /* YIELD */
A68_66  VFWACTR;  /* OPERATORS - mode -> union mode */
A68_66  WFWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  XFWACTR;  /* YIELD */
A68_65  YFWACTR;  /* OPERATORS - istruct -> vector */
A68_66  BGWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CGWACTR;  /* YIELD */
A68_65  DGWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_280  EGWACTR;  /* collateral clause result */
A68_INT  FGWACTR;  /* YIELD */
A68_66  GGWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HGWACTR;  /* YIELD */
A68_66  IGWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  JGWACTR;  /* YIELD */
A68_INT  KGWACTR;  /* YIELD */
A68_66  LGWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MGWACTR;  /* YIELD */
A68_65  NGWACTR;  /* OPERATORS - istruct -> vector */
A68_INT  OGWACTR_i;
A68_INT  PGWACTR;  /* to part of loop */
A68_272  QGWACTR;  /* collateral clause result */
A68_66  TGWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UGWACTR;  /* YIELD */
A68_66  VGWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WGWACTR;  /* YIELD */
A68_66  XGWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  YGWACTR;  /* YIELD */
A68_66  ZGWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AHWACTR;  /* YIELD */
A68_65  BHWACTR;  /* OPERATORS - istruct -> vector */
A68_280  CHWACTR;  /* collateral clause result */
A68_66  FHWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GHWACTR;  /* YIELD */
A68_66  JHWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KHWACTR;  /* YIELD */
A68_VC  LHWACTR;  /* avoid structure result */
A68_66  MHWACTR;  /* OPERATORS - mode -> union mode */
A68_66  PHWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QHWACTR;  /* YIELD */
A68_65  RHWACTR;  /* OPERATORS - istruct -> vector */
A68_256  SHWACTR;  /* collateral clause result */
A68_BOOL  THWACTR;  /* optbool result */
A68_66  WHWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XHWACTR;  /* YIELD */
A68_66  AIWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BIWACTR;  /* YIELD */
A68_66  EIWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FIWACTR;  /* YIELD */
A68_65  GIWACTR;  /* OPERATORS - istruct -> vector */
A68_66  HIWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  IIWACTR;  /* YIELD */
A68_65  JIWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(prototype);
 /* line 664: */
 /* line 665: */
{ 
 /* line 666: */
 /* line 667: */
HFWACTR.data[0] = A_UNITE(IFWACTR,mode4,4,EIAACTR_cnewline);
if ( (NL(Global)&NL(Kept)) )
{ 
MFWACTR = KFWACTR ;
HFWACTR.data[1] = A_UNITE(LFWACTR,mode2,2,MFWACTR);
} 
else
{ 
 /* line 668: */
QFWACTR = OFWACTR ;
HFWACTR.data[1] = A_UNITE(PFWACTR,mode2,2,QFWACTR);
} 
 /* line 669: */
XKNACTR_ctype( NL(CEWACTR_cresultmode), &RFWACTR );
HFWACTR.data[2] = A_UNITE(SFWACTR,mode2,2,RFWACTR);
 /* line 670: */
UFWACTR = ' ' ;
HFWACTR.data[3] = A_UNITE(TFWACTR,mode1,1,UFWACTR);
 /* line 672: */
HFWACTR.data[4] = A_UNITE(VFWACTR,mode2,2,NL(KEWACTR_fnname));
XFWACTR = '(' ;
HFWACTR.data[5] = A_UNITE(WFWACTR,mode1,1,XFWACTR);
MDMACTR_writecstream(A_HISVEC(YFWACTR,HFWACTR,6,A68_66 ), Protostream);
 /* line 674: */
 /* line 675: */
 /* line 676: */
if ( (NL(FEWACTR_cparamcount)==0) )
{ 
 /* line 677: */
 /* line 678: */
CGWACTR = AGWACTR ;
MDMACTR_writecstream(A_HVEC(DGWACTR,A_UNITE(BGWACTR,mode2,2,CGWACTR),A68_66 ), Protostream);
} 
else
{ 
 /* line 679: */
 /* line 680: */
if ( (NL(EEWACTR_a68paramcount)>0) )
{ 
FGWACTR = 1 ;
HGWACTR = (*(&A_VINDEX(NL(TEWACTR_paramtypes),FGWACTR))) ;
EGWACTR.data[0] = A_UNITE(GGWACTR,mode2,2,HGWACTR);
JGWACTR = ' ' ;
EGWACTR.data[1] = A_UNITE(IGWACTR,mode1,1,JGWACTR);
KGWACTR = 1 ;
MGWACTR = (*(&A_VINDEX(NL(REWACTR_paramnames),KGWACTR))) ;
EGWACTR.data[2] = A_UNITE(LGWACTR,mode2,2,MGWACTR);
MDMACTR_writecstream(A_HISVEC(NGWACTR,EGWACTR,3,A68_66 ), Protostream);
 /* line 681: */
 /* line 682: */
PGWACTR = NL(EEWACTR_a68paramcount);
for ( OGWACTR_i = 2;
OGWACTR_i <= PGWACTR;
OGWACTR_i += 1 )
{ 
 /* line 683: */
UGWACTR = SGWACTR ;
QGWACTR.data[0] = A_UNITE(TGWACTR,mode2,2,UGWACTR);
WGWACTR = (*(&A_VINDEX(NL(TEWACTR_paramtypes),OGWACTR_i))) ;
QGWACTR.data[1] = A_UNITE(VGWACTR,mode2,2,WGWACTR);
YGWACTR = ' ' ;
QGWACTR.data[2] = A_UNITE(XGWACTR,mode1,1,YGWACTR);
AHWACTR = (*(&A_VINDEX(NL(REWACTR_paramnames),OGWACTR_i))) ;
QGWACTR.data[3] = A_UNITE(ZGWACTR,mode2,2,AHWACTR);
 /* line 684: */
MDMACTR_writecstream(A_HISVEC(BHWACTR,QGWACTR,4,A68_66 ), Protostream);
}
 /* line 685: */
} 
 /* line 688: */
 /* line 689: */
 /* line 690: */
if ( NL(AEWACTR_usetempforresult) )
{ 
 /* line 691: */
if ( (NL(EEWACTR_a68paramcount)!=0) )
{ 
GHWACTR = EHWACTR ;
CHWACTR.data[0] = A_UNITE(FHWACTR,mode2,2,GHWACTR);
} 
else
{ 
 /* line 692: */
KHWACTR = IHWACTR ;
CHWACTR.data[0] = A_UNITE(JHWACTR,mode2,2,KHWACTR);
} 
 /* line 693: */
XKNACTR_ctype( NL(Resultmode), &LHWACTR );
CHWACTR.data[1] = A_UNITE(MHWACTR,mode2,2,LHWACTR);
QHWACTR = OHWACTR ;
CHWACTR.data[2] = A_UNITE(PHWACTR,mode2,2,QHWACTR);
 /* line 694: */
MDMACTR_writecstream(A_HISVEC(RHWACTR,CHWACTR,3,A68_66 ), Protostream);
} 
 /* line 695: */
 /* line 696: */
 /* line 697: */
if ( NL(DEWACTR_fulldec) )
{ 
 /* line 698: */
THWACTR = NL(AEWACTR_usetempforresult);
if ( ! THWACTR )
{THWACTR = (NL(EEWACTR_a68paramcount)!=0);
}
if ( THWACTR )
{ 
XHWACTR = VHWACTR ;
SHWACTR.data[0] = A_UNITE(WHWACTR,mode2,2,XHWACTR);
} 
else
{ 
 /* line 700: */
BIWACTR = ZHWACTR ;
SHWACTR.data[0] = A_UNITE(AIWACTR,mode2,2,BIWACTR);
} 
FIWACTR = DIWACTR ;
SHWACTR.data[1] = A_UNITE(EIWACTR,mode2,2,FIWACTR);
 /* line 701: */
 /* line 702: */
MDMACTR_writecstream(A_HISVEC(GIWACTR,SHWACTR,2,A68_66 ), Protostream);
} 
} 
 /* line 704: */
 /* line 705: */
IIWACTR = ')' ;
MDMACTR_writecstream(A_HVEC(JIWACTR,A_UNITE(HIWACTR,mode1,1,IIWACTR),A68_66 ), Protostream);
} 
A_PROC_EXIT(prototype);
return;
} 
#undef NL

A_STATIC A68_VOID  ZQWACTR_mybefore(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_VC  ARWACTR;  /* clause result */
A68_VC  BRWACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(mybefore);
ARWACTR = A_VTRIM(BRWACTR,(S),A_VTSCRIPT(&(BRWACTR.upb),(S).upb,1,KMAAOSF_truncate(C, S)));
A_PROC_EXIT(mybefore);
*ReturnedValue = (ARWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YSWACTR_generator(A68_BOOL  WSWACTR_anonymous, A68_181  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZSWACTR_generator *)NonLocals)->x)
{ 
A68_181  ATWACTR;  /* clause result */
A68_181  BTWACTR;  /* OPERATORS - dynamic generator */
{ 
BTWACTR.upb = 0 ;
( WSWACTR_anonymous? A_VLOC(A68_INT ,BTWACTR): A_VHEAP(A68_INT ,BTWACTR) );
ATWACTR = BTWACTR;
} 
*ReturnedValue = (ATWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  UKVACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  ALVACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 47: */
 /* line 48: */
 /* line 49: */
if ( (ZCHACTR_tracelevel(WKVACTR)>=Level) )
{ 
 /* line 50: */
ROAAOSF_whole( Level, 0, &ALVACTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZKVACTR,ALVACTR),BLVACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZKVACTR,ALVACTR),BLVACTR),M),(MSIACTR_list).nonlocals));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A68_VOID  DLVACTR_initialdummydec(A68_130  Dummydec)
{ 
A68_72  GLVACTR;  /* collateral clause result */
A68_INT  HLVACTR;  /* YIELD */
A68_72 * ILVACTR;  /* YIELD */
A_PROC_ENTRY(initialdummydec);
 /* line 57: */
 /* line 58: */
{ 
WXIACTR_assert(FLVACTR, (Dummydec.Type==8));
 /* line 59: */
GLVACTR.Level = 1;
 /* line 60: */
GLVACTR.Block = 0;
HLVACTR = Dummydec.Decno ;
ILVACTR = (&((&A_R1INDEX(WPKACTR_ids,HLVACTR))->Environ)) ;
(*ILVACTR) = GLVACTR;
} 
A_PROC_EXIT(initialdummydec);
return;
} 
#undef NL

A_STATIC A68_INT  KLVACTR_keeplistposition(A68_INT  Decno)
{ 
A68_INT  LLVACTR_pos;
A68_BOOL  MLVACTR_found;
A68_INT  NLVACTR_upbkepts;
A68_BOOL  OLVACTR;  /* optbool result */
A68_INT  PLVACTR;  /* YIELD */
A68_INT  SLVACTR;  /* clause result */
A_PROC_ENTRY(keeplistposition);
 /* line 71: */
 /* line 72: */
{ 
LLVACTR_pos = 0;
 /* line 73: */
MLVACTR_found = A68_FALSE;
 /* line 74: */
NLVACTR_upbkepts = UAPACTR_keptdecnos.dim[0].upb;
 /* line 75: */
for ( ;; )
{ 
OLVACTR = !MLVACTR_found;
if ( OLVACTR )
{ /* line 76: */
OLVACTR = (LLVACTR_pos<NLVACTR_upbkepts);
}
if ( !(OLVACTR) ) break;
 /* line 77: */
PLVACTR = LLVACTR_pos+=1 ;
MLVACTR_found = ((*(&A_R1INDEX(UAPACTR_keptdecnos,PLVACTR)))==Decno);
}
 /* line 78: */
WXIACTR_assert(RLVACTR, MLVACTR_found);
 /* line 79: */
 /* line 80: */
SLVACTR = LLVACTR_pos;
} 
A_PROC_EXIT(keeplistposition);
return( SLVACTR );
} 
#undef NL
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 90: */

A_STATIC A68_VOID  AMVACTR_newidinfo(A68_INT  Decno, A68_INT  Mode, A68_VC  A68name, A68_56  Prefix, A68_BITS  Flags, A68_VC  Definition, A68_VC  Rhs)
{ 
A68_108 * BMVACTR_newid;
A68_BOOL  CMVACTR;  /* optbool result */
A68_INT  DMVACTR_cvariabletype;
A68_VC  EMVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FMVACTR;  /* OPERATORS - istruct -> vector */
A68_BITS  GMVACTR;  /* ADICOPS - >= */
A68_BOOL  HMVACTR;  /* optbool result */
A68_VC  IMVACTR;  /* OPERATORS - istruct -> vector */
A68_INT  JMVACTR;  /* YIELD */
A68_155  KMVACTR;  /* OPERATORS - simple index */
A68_INT  LMVACTR;  /* YIELD */
A68_VC  MMVACTR;  /* OPERATORS - istruct -> vector */
A68_56  NMVACTR;  /* OPERATORS - istruct -> vector */
A68_INT  OMVACTR;  /* YIELD */
A68_LINT * PMVACTR;  /* YIELD */
A68_56  QMVACTR;  /* clause result */
A68_72  RMVACTR;  /* avoid structure result */
A68_BOOL  SMVACTR;  /* optbool result */
A68_BITS  TMVACTR;  /* ADICOPS - >= */
A68_INT  UMVACTR;  /* YIELD */
A68_155  VMVACTR;  /* OPERATORS - simple index */
A68_INT  WMVACTR;  /* YIELD */
A68_157 * XMVACTR_keptinfo;
A68_BOOL  YMVACTR;  /* optbool result */
A68_BOOL  ZMVACTR;  /* optbool result */
A68_BOOL  ANVACTR;  /* clause result */
A68_INT  BNVACTR;  /* YIELD */
A68_LINT * CNVACTR;  /* YIELD */
A68_56  DNVACTR_newidprefix;
A68_BITS  ENVACTR;  /* clause result */
A68_BITS  FNVACTR_new_flags;
A68_BOOL  GNVACTR;  /* optbool result */
A68_INT  HNVACTR;  /* YIELD */
A68_VC  INVACTR;  /* clause result */
A68_VC  JNVACTR;  /* avoid structure result */
A68_VC  LNVACTR;  /* clause result */
A68_VC  NNVACTR;  /* avoid structure result */
A68_VC  ONVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PNVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} QNVACTR; 
A68_VC  RNVACTR_c_name;
A68_108  SNVACTR;  /* collateral clause result */
A68_72  TNVACTR;  /* avoid structure result */
A_PROC_ENTRY(newidinfo);
 /* line 95: */
 /* line 96: */
{ 
BMVACTR_newid = YQKACTR_get_idinfo(Decno);
 /* line 98: */
 /* line 99: */
CMVACTR = A_LB_GE(Flags,BQKACTR_ididentityflag);
if ( CMVACTR )
{CMVACTR = !A_LB_GE(Flags,HQKACTR_idoptimisedflag);
}
 /* line 100: */
if ( ! CMVACTR )
{CMVACTR = A_LB_GE(Flags,EQKACTR_idforallflag);
}
 /* line 101: */
if ( ! CMVACTR )
{CMVACTR = A_LB_GE(Flags,GQKACTR_idformalflag);
}
DMVACTR_cvariabletype = TKNACTR_givecvariabletype(Mode, CMVACTR);
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
if ( A_VC_NE(A_HISVEC(EMVACTR,Prefix,7,A68_CHAR ),A_HISVEC(FMVACTR,DMOACTR_nulluname,7,A68_CHAR )) )
{ 
 /* line 109: */
 /* line 110: */
GMVACTR = (*(&(BMVACTR_newid->Flags))) ;
HMVACTR = A_LB_GE(GMVACTR,CQKACTR_idkeptflag);
if ( HMVACTR )
{HMVACTR = XAPACTR_rscompatiblewithpreviousversion;
}
if ( HMVACTR )
{ /* line 111: */
 /* line 112: */
JMVACTR = 1 ;
KMVACTR = (*(&((&A_R1INDEX(DBPACTR_specs,JMVACTR))->Keptinfo))) ;
LMVACTR = KLVACTR_keeplistposition(Decno) ;
NMVACTR = (*(&((&A_VINDEX(KMVACTR,LMVACTR))->Prefix))) ;
HMVACTR = A_VC_NE(A_HISVEC(IMVACTR,Prefix,7,A68_CHAR ),A_HISVEC(MMVACTR,NMVACTR,7,A68_CHAR ));
}
 /* line 113: */
if ( HMVACTR )
{ 
YAPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 114: */
 /* line 116: */
OMVACTR = 1 ;
PMVACTR = (&((&A_R1INDEX(DBPACTR_specs,OMVACTR))->Timeoflastchange)) ;
(*PMVACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
} 
 /* line 117: */
 /* line 118: */
 /* line 120: */
QMVACTR = Prefix;
} 
else
{ 
QPLACTR_currentenviron(  &RMVACTR );
SMVACTR = !PRLACTR_isgloballevel(RMVACTR);
if ( ! SMVACTR )
{ /* line 122: */
TMVACTR = (*(&(BMVACTR_newid->Flags))) ;
SMVACTR = !A_LB_GE(TMVACTR,CQKACTR_idkeptflag);
}
 /* line 123: */
if ( ! SMVACTR )
{SMVACTR = !XAPACTR_rscompatiblewithpreviousversion;
}
 /* line 124: */
if ( SMVACTR )
{ 
 /* line 125: */
QMVACTR = QIMACTR_newuniquename();
} 
else
{ 
{ 
UMVACTR = 1 ;
VMVACTR = (*(&((&A_R1INDEX(DBPACTR_specs,UMVACTR))->Keptinfo))) ;
WMVACTR = KLVACTR_keeplistposition(Decno) ;
XMVACTR_keptinfo = (&A_VINDEX(VMVACTR,WMVACTR));
 /* line 128: */
 /* line 129: */
 /* line 130: */
YMVACTR = A_LB_GE(Flags,BQKACTR_ididentityflag);
if ( YMVACTR )
{YMVACTR = !(*(&(XMVACTR_keptinfo->Iddec)));
}
 /* line 132: */
if ( ! YMVACTR )
{ /* line 133: */
 /* line 134: */
ZMVACTR = A_LB_GE(Flags,HQKACTR_idoptimisedflag);
if ( ZMVACTR )
{ZMVACTR = !(*(&(XMVACTR_keptinfo->Optimised)));
}
 /* line 135: */
YMVACTR = ZMVACTR;
}
ANVACTR = YMVACTR;
if ( ANVACTR )
{ 
YAPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 136: */
BNVACTR = 1 ;
CNVACTR = (&((&A_R1INDEX(DBPACTR_specs,BNVACTR))->Timeoflastchange)) ;
(*CNVACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
 /* line 137: */
 /* line 138: */
 /* line 140: */
QMVACTR = QIMACTR_newuniquename();
} 
else
{ 
QMVACTR = (*(&(XMVACTR_keptinfo->Prefix)));
} 
} 
} 
} 
DNVACTR_newidprefix = QMVACTR;
 /* line 142: */
 /* line 144: */
if ( TUKACTR_standopsym(A68name) )
{ 
ENVACTR = IQKACTR_idopflag;
} 
else
{ 
ENVACTR = AQKACTR_idnoflags;
} 
FNVACTR_new_flags = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(BMVACTR_newid->Flags)))&NQKACTR_idpresetflags)|Flags)|ENVACTR);
 /* line 146: */
 /* line 147: */
 /* line 148: */
GNVACTR = A_LB_GE(Flags,GQKACTR_idformalflag);
if ( GNVACTR )
{GNVACTR = (A68name.upb>0);
}
if ( GNVACTR )
{ /* line 149: */
HNVACTR = 1 ;
GNVACTR = ((*(&A_VINDEX(A68name,HNVACTR)))!='!');
}
 /* line 151: */
if ( GNVACTR )
{ 
 /* line 152: */
SNAAOSF_capitalised( A68name, &JNVACTR );
INVACTR = JNVACTR;
} 
else
{ 
if ( A_LB_GE(FNVACTR_new_flags,IQKACTR_idopflag) )
{ 
LNVACTR = MNVACTR;
} 
else
{ 
RRKACTR_afterbang( A68name, &NNVACTR );
LNVACTR = NNVACTR;
} 
 /* line 153: */
QNVACTR.source = A_VC_PLUS(A_VC_PLUS(A_HISVEC(ONVACTR,DNVACTR_newidprefix,7,A68_CHAR ),A_HVEC(PNVACTR,'_',A68_CHAR )),LNVACTR) ;
INVACTR = (QNVACTR.destination);
} 
RNVACTR_c_name = INVACTR;
 /* line 155: */
 /* line 156: */
 /* line 157: */
SNVACTR.Mode = Mode;
 /* line 158: */
SNVACTR.Cvariabletype = DMVACTR_cvariabletype;
 /* line 159: */
QPLACTR_currentenviron(  &TNVACTR );
SNVACTR.Environ = TNVACTR;
 /* line 160: */
SNVACTR.Name = A68name;
 /* line 161: */
SNVACTR.C_name = RNVACTR_c_name;
 /* line 162: */
SNVACTR.Prefix = DNVACTR_newidprefix;
 /* line 163: */
SNVACTR.Flags = FNVACTR_new_flags;
 /* line 165: */
SNVACTR.Definition = Definition;
 /* line 166: */
SNVACTR.Rhs = Rhs;
(*BMVACTR_newid) = SNVACTR;
} 
A_PROC_EXIT(newidinfo);
return;
} 
#undef NL

A_STATIC A68_VOID  WNVACTR_outputcdeclaration(A68_INT  Decno, A68_98 * Initvalue)
{ 
A68_108 * XNVACTR_idinfo;
A68_INT  YNVACTR_level;
A68_INT  ZNVACTR_block;
A68_BOOL  AOVACTR;  /* optbool result */
A68_BOOL  BOVACTR_global;
A68_BOOL  COVACTR;  /* optbool result */
A68_BITS  DOVACTR;  /* ADICOPS - >= */
A68_BOOL  EOVACTR_kept;
A68_INT  FOVACTR;  /* clause result */
A68_INT  GOVACTR_decstream;
A68_INT  HOVACTR_codestream;
A68_59  JOVACTR_optidentity;   /* proc value of non-global proc */
A68_60  NRVACTR_declarecvariable;   /* proc value of non-global proc */
A68_BOOL  JTVACTR;  /* optbool result */
A68_BITS  KTVACTR;  /* ADICOPS - >= */
A68_99  LTVACTR;  /* united object - for case conformity */
A68_VC  MTVACTR;  /* avoid structure result */
A68_VC  NTVACTR_cf;
A68_BOOL  OTVACTR;  /* optbool result */
A68_BOOL  PTVACTR;  /* optbool result */
A68_BITS  QTVACTR;  /* ADICOPS - >= */
A68_101  RTVACTR_id;
A68_108 * STVACTR;  /* clause result */
A68_108 * TTVACTR_rhsidinfo;
A68_BOOL  UTVACTR;  /* optbool result */
A68_BITS  VTVACTR;  /* ADICOPS - >= */
A68_BOOL  WTVACTR;  /* optbool result */
A68_BITS  XTVACTR;  /* ADICOPS - >= */
A68_BOOL  YTVACTR;  /* clause result */
A68_VC  ZTVACTR;  /* avoid structure result */
A_PROC_ENTRY(outputcdeclaration);
 /* line 182: */
 /* line 183: */
{ 
XNVACTR_idinfo = YQKACTR_get_idinfo(Decno);
 /* line 184: */
YNVACTR_level = (*(&((&(XNVACTR_idinfo->Environ))->Level)));
 /* line 185: */
ZNVACTR_block = (*(&((&(XNVACTR_idinfo->Environ))->Block)));
 /* line 186: */
AOVACTR = (YNVACTR_level==0);
if ( AOVACTR )
{AOVACTR = (ZNVACTR_block==0);
}
BOVACTR_global = AOVACTR;
 /* line 187: */
COVACTR = BOVACTR_global;
if ( COVACTR )
{DOVACTR = (*(&(XNVACTR_idinfo->Flags))) ;
COVACTR = A_LB_GE(DOVACTR,CQKACTR_idkeptflag);
}
EOVACTR_kept = COVACTR;
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 192: */
if ( BOVACTR_global )
{ 
 /* line 193: */
FOVACTR = KSLACTR_nonlocdecstream(YNVACTR_level);
} 
else
{ 
FOVACTR = QSLACTR_locdecstream(YNVACTR_level);
} 
GOVACTR_decstream = FOVACTR;
 /* line 195: */
HOVACTR_codestream = NSLACTR_codestream(YNVACTR_level);
 /* line 197: */
A_CLOSURE( JOVACTR_optidentity, KOVACTR_optidentity, LOVACTR_optidentity );
(( LOVACTR_optidentity * ) ( JOVACTR_optidentity.nonlocals )) -> Decno = Decno;
(( LOVACTR_optidentity * ) ( JOVACTR_optidentity.nonlocals )) -> Initvalue = Initvalue;
(( LOVACTR_optidentity * ) ( JOVACTR_optidentity.nonlocals )) -> EOVACTR_kept = EOVACTR_kept;
(( LOVACTR_optidentity * ) ( JOVACTR_optidentity.nonlocals )) -> XNVACTR_idinfo = XNVACTR_idinfo;
 /* line 276: */
 /* line 277: */
 /* line 279: */
A_CLOSURE( NRVACTR_declarecvariable, ORVACTR_declarecvariable, PRVACTR_declarecvariable );
(( PRVACTR_declarecvariable * ) ( NRVACTR_declarecvariable.nonlocals )) -> BOVACTR_global = BOVACTR_global;
(( PRVACTR_declarecvariable * ) ( NRVACTR_declarecvariable.nonlocals )) -> XNVACTR_idinfo = XNVACTR_idinfo;
(( PRVACTR_declarecvariable * ) ( NRVACTR_declarecvariable.nonlocals )) -> Decno = Decno;
(( PRVACTR_declarecvariable * ) ( NRVACTR_declarecvariable.nonlocals )) -> GOVACTR_decstream = GOVACTR_decstream;
(( PRVACTR_declarecvariable * ) ( NRVACTR_declarecvariable.nonlocals )) -> Initvalue = Initvalue;
(( PRVACTR_declarecvariable * ) ( NRVACTR_declarecvariable.nonlocals )) -> HOVACTR_codestream = HOVACTR_codestream;
 /* line 303: */
 /* line 304: */
JTVACTR = (Initvalue!=(A68_98 *)A68_NIL);
if ( JTVACTR )
{ /* line 305: */
KTVACTR = (*(&(XNVACTR_idinfo->Flags))) ;
JTVACTR = A_LB_GE(KTVACTR,BQKACTR_ididentityflag);
}
if ( JTVACTR )
{ 
 /* line 306: */
LTVACTR = (*(&(Initvalue->Extra))) ;
switch ( LTVACTR.mode )
{ 
case 1: /* LONG BITS */
 /* line 307: */
 /* line 308: */
GYPACTR_getcfragment( Initvalue, &MTVACTR );
A_CALLPROC(JOVACTR_optidentity,(MTVACTR),(MTVACTR,(JOVACTR_optidentity).nonlocals));
break;
case 6: /* VECTOR [] CHAR */
NTVACTR_cf = (LTVACTR.data.mode6);
 /* line 309: */
 /* line 310: */
 /* line 311: */
OTVACTR = UUPACTR_hasattribute(Initvalue, QKJACTR_constant);
if ( OTVACTR )
{ /* line 312: */
OTVACTR = !UUPACTR_hasattribute(Initvalue, WKJACTR_isnil);
}
 /* line 313: */
if ( OTVACTR )
{ /* line 314: */
OTVACTR = (IOMACTR_modetype((*(&(Initvalue->Mode))))==EEAACTR_primitive);
}
 /* line 315: */
if ( ! OTVACTR )
{ /* line 316: */
 /* line 317: */
PTVACTR = UUPACTR_hasattribute(Initvalue, (A68_BITS )(QKJACTR_constant|WKJACTR_isnil));
if ( PTVACTR )
{ /* line 253: */
 /* line 318: */
QTVACTR = (*(&(XNVACTR_idinfo->Flags))) ;
PTVACTR = !A_LB_GE(QTVACTR,CQKACTR_idkeptflag);
}
 /* line 319: */
OTVACTR = PTVACTR;
}
if ( OTVACTR )
{ 
 /* line 320: */
 /* line 321: */
A_CALLPROC(JOVACTR_optidentity,(NTVACTR_cf),(NTVACTR_cf,(JOVACTR_optidentity).nonlocals));
} 
else
{ 
 /* line 322: */
A_CALLPROC(NRVACTR_declarecvariable,(),((NRVACTR_declarecvariable).nonlocals));
} 
break;
case 4: /* STRUCT(INT)  */
RTVACTR_id = (LTVACTR.data.mode4);
 /* line 323: */
 /* line 324: */
{ 
 /* line 325: */
 /* line 326: */
if ( (RTVACTR_id.Idno==VPKACTR_alienidno) )
{ 
STVACTR = (&UPKACTR_alienidinfo);
} 
else
{ 
 /* line 327: */
STVACTR = YQKACTR_get_idinfo(RTVACTR_id.Idno);
} 
TTVACTR_rhsidinfo = STVACTR;
 /* line 328: */
 /* line 329: */
 /* line 330: */
UTVACTR = PRLACTR_isgloballevel((*(&(TTVACTR_rhsidinfo->Environ))));
if ( UTVACTR )
{ /* line 331: */
UTVACTR = ((*(&(XNVACTR_idinfo->Mode)))==(*(&(TTVACTR_rhsidinfo->Mode))));
}
 /* line 334: */
if ( UTVACTR )
{ /* line 335: */
VTVACTR = (*(&(XNVACTR_idinfo->Flags))) ;
WTVACTR = !A_LB_GE(VTVACTR,CQKACTR_idkeptflag);
if ( ! WTVACTR )
{ /* line 336: */
WTVACTR = (RTVACTR_id.Idno==VPKACTR_alienidno);
}
if ( ! WTVACTR )
{ /* line 337: */
XTVACTR = (*(&(TTVACTR_rhsidinfo->Flags))) ;
WTVACTR = A_LB_GE(XTVACTR,CQKACTR_idkeptflag);
}
 /* line 338: */
UTVACTR = WTVACTR;
}
YTVACTR = UTVACTR;
if ( YTVACTR )
{ 
 /* line 339: */
 /* line 340: */
UTKACTR_idfullname( RTVACTR_id.Idno, &ZTVACTR );
A_CALLPROC(JOVACTR_optidentity,(ZTVACTR),(ZTVACTR,(JOVACTR_optidentity).nonlocals));
} 
else
{ 
 /* line 342: */
A_CALLPROC(NRVACTR_declarecvariable,(),((NRVACTR_declarecvariable).nonlocals));
} 
} 
break;
default: 
 /* line 343: */
 /* line 344: */
A_CALLPROC(NRVACTR_declarecvariable,(),((NRVACTR_declarecvariable).nonlocals));
break;
} 
} 
else
{ 
 /* line 345: */
A_CALLPROC(NRVACTR_declarecvariable,(),((NRVACTR_declarecvariable).nonlocals));
} 
} 
A_PROC_EXIT(outputcdeclaration);
return;
} 
#undef NL

A68_VOID  CUVACTR_iddec(A68_130  Identifierdec, A68_105 ** Valuestack)
{ 
A68_INT  LUVACTR_type;
A68_INT  MUVACTR_mode;
A68_INT  NUVACTR_decno;
A68_VC  OUVACTR_name;
A68_108 * PUVACTR_newid;
A68_98 * RUVACTR_initialvalue;
A68_VC  SUVACTR;  /* OPERATORS - nil -> mode */
A68_VC  TUVACTR;  /* OPERATORS - nil -> mode */
A68_VC  UUVACTR;  /* OPERATORS - nil -> mode */
A68_VC  VUVACTR;  /* OPERATORS - nil -> mode */
A68_VC  WUVACTR;  /* OPERATORS - nil -> mode */
A68_VC  XUVACTR;  /* OPERATORS - nil -> mode */
A68_VC  YUVACTR;  /* OPERATORS - nil -> mode */
A68_VC  ZUVACTR;  /* OPERATORS - nil -> mode */
A68_VC  AVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  BVVACTR;  /* OPERATORS - nil -> mode */
A68_98 * CVVACTR_initialvalue;
A68_INT  FVVACTR_rowmode;
A68_INT  GVVACTR_forallmode;
A68_VC  HVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  IVVACTR;  /* OPERATORS - nil -> mode */
A68_108  JVVACTR;  /* collateral clause result */
A68_72  KVVACTR;  /* avoid structure result */
A68_VC  LVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  MVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  NVVACTR;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(iddec);
 /* line 366: */
 /* line 367: */
{ 
 /* line 368: */
 /* line 369: */
 /* line 370: */
 /* line 371: */
 /* line 372: */
 /* line 373: */
 /* line 374: */
 /* line 376: */
LUVACTR_type = Identifierdec.Type;
 /* line 377: */
MUVACTR_mode = Identifierdec.Mode;
 /* line 378: */
NUVACTR_decno = Identifierdec.Decno;
 /* line 380: */
OUVACTR_name = Identifierdec.Name;
 /* line 381: */
PUVACTR_newid = YQKACTR_get_idinfo(NUVACTR_decno);
 /* line 383: */
 /* line 385: */
 /* line 386: */
switch ( LUVACTR_type )
{ 
case 1: 
 /* line 387: */
{ 
HKVACTR_evaluatestack(Valuestack);
 /* line 388: */
RUVACTR_initialvalue = (&((*Valuestack)->Value));
 /* line 389: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
 /* line 390: */
AMVACTR_newidinfo(NUVACTR_decno, MUVACTR_mode, OUVACTR_name, DMOACTR_nulluname, BQKACTR_ididentityflag, A_VVAC(TUVACTR), A_VVAC(SUVACTR));
 /* line 391: */
 /* line 392: */
 /* line 393: */
WNVACTR_outputcdeclaration(NUVACTR_decno, RUVACTR_initialvalue);
} 
break;
case 2: 
 /* line 394: */
{ 
 /* line 341: */
 /* line 395: */
 /* line 396: */
if ( (MUVACTR_mode>WFAACTR_refrefmark) )
{ 
 /* line 397: */
MXIACTR_portabilitywarning(810);
} 
 /* line 398: */
AMVACTR_newidinfo(NUVACTR_decno, MUVACTR_mode, OUVACTR_name, DMOACTR_nulluname, AQKACTR_idnoflags, A_VVAC(VUVACTR), A_VVAC(UUVACTR));
 /* line 399: */
 /* line 400: */
 /* line 401: */
WNVACTR_outputcdeclaration(NUVACTR_decno, QUVACTR_noinitialvalue);
} 
break;
case 3: 
 /* line 402: */
 /* line 403: */
 /* line 404: */
AMVACTR_newidinfo(NUVACTR_decno, MUVACTR_mode, OUVACTR_name, DMOACTR_nulluname, GQKACTR_idformalflag, A_VVAC(XUVACTR), A_VVAC(WUVACTR));
break;
case 4: 
 /* line 405: */
{ 
AMVACTR_newidinfo(NUVACTR_decno, MUVACTR_mode, OUVACTR_name, DMOACTR_nulluname, FQKACTR_idforflag, A_VVAC(ZUVACTR), A_VVAC(YUVACTR));
 /* line 406: */
 /* line 407: */
 /* line 408: */
WNVACTR_outputcdeclaration(NUVACTR_decno, QUVACTR_noinitialvalue);
} 
break;
case 5: 
 /* line 409: */
{ 
AMVACTR_newidinfo(NUVACTR_decno, MUVACTR_mode, OUVACTR_name, DMOACTR_nulluname, AQKACTR_idnoflags, A_VVAC(BVVACTR), A_VVAC(AVVACTR));
 /* line 410: */
HKVACTR_evaluatestack(Valuestack);
 /* line 411: */
CVVACTR_initialvalue = (&((*Valuestack)->Value));
 /* line 412: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
 /* line 414: */
 /* line 415: */
 /* line 416: */
WNVACTR_outputcdeclaration(NUVACTR_decno, CVVACTR_initialvalue);
} 
break;
case 6: 
 /* line 417: */
{ 
WXIACTR_assert(EVVACTR, A68_FALSE);
 /* line 418: */
 /* line 419: */
/*SKIP*/;
} 
break;
case 7: 
 /* line 424: */
{ 
FVVACTR_rowmode = (*(&((&((*Valuestack)->Value))->Mode)));
 /* line 425: */
GVVACTR_forallmode = MUVACTR_mode;
 /* line 435: */
AMVACTR_newidinfo(NUVACTR_decno, GVVACTR_forallmode, OUVACTR_name, DMOACTR_nulluname, EQKACTR_idforallflag, A_VVAC(IVVACTR), A_VVAC(HVVACTR));
 /* line 436: */
 /* line 437: */
 /* line 438: */
WNVACTR_outputcdeclaration(NUVACTR_decno, QUVACTR_noinitialvalue);
} 
break;
case 8: 
 /* line 439: */
 /* line 440: */
 /* line 441: */
JVVACTR.Mode = MUVACTR_mode;
 /* line 442: */
JVVACTR.Cvariabletype = 0;
 /* line 443: */
QPLACTR_currentenviron(  &KVVACTR );
JVVACTR.Environ = KVVACTR;
 /* line 444: */
JVVACTR.Name = OUVACTR_name;
 /* line 445: */
JVVACTR.C_name = A_VVAC(LVVACTR);
 /* line 446: */
JVVACTR.Prefix = QIMACTR_newuniquename();
 /* line 447: */
 /* line 448: */
JVVACTR.Flags = (A68_BITS )((A68_BITS )((*(&(PUVACTR_newid->Flags)))&NQKACTR_idpresetflags)|BQKACTR_ididentityflag);
 /* line 450: */
JVVACTR.Definition = A_VVAC(MVVACTR);
 /* line 451: */
JVVACTR.Rhs = A_VVAC(NVVACTR);
 /* line 452: */
(*PUVACTR_newid) = JVVACTR;
break;
default: 
 /* line 453: */
 /* line 454: */
WXIACTR_assert(PVVACTR, A68_FALSE);
break;
} 
} 
A_PROC_EXIT(iddec);
return;
} 
#undef NL
 /* line 458: */
 /* line 460: */

A68_VOID  TVVACTR_ccdec(A68_130  Choicedec, A68_98 * Enquiry, A68_INT  Modeindex)
{ 
A68_INT  WVVACTR_decno;
A68_INT  XVVACTR_choicemode;
A68_VC  YVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  ZVVACTR;  /* OPERATORS - nil -> mode */
A68_98  AWVACTR;  /* collateral clause result */
A68_VC  CWVACTR;  /* avoid structure result */
A68_VC  EWVACTR;  /* avoid structure result */
A68_99  FWVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GWVACTR;  /* YIELD */
A68_VC  VWVACTR;  /* OPERATORS - nil -> mode */
A68_VC  WWVACTR;  /* OPERATORS - nil -> mode */
A68_VC  XWVACTR;  /* avoid structure result */
A68_VC  YWVACTR_enquiryname;
A68_VC  ZWVACTR;  /* avoid structure result */
A68_VC  AXVACTR_newunionname;
A68_INT  BXVACTR_codestream;
A68_181  CXVACTR;  /* avoid structure result */
A68_181  DXVACTR;  /* avoid structure result */
A68_INT  EXVACTR_modeoffset;
A68_269  FXVACTR;  /* collateral clause result */
A68_66  IXVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JXVACTR;  /* YIELD */
A68_66  KXVACTR;  /* OPERATORS - mode -> union mode */
A68_66  LXVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  MXVACTR;  /* YIELD */
A68_66  NXVACTR;  /* OPERATORS - mode -> union mode */
A68_66  QXVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RXVACTR;  /* YIELD */
A68_66  SXVACTR;  /* OPERATORS - mode -> union mode */
A68_65  TXVACTR;  /* OPERATORS - istruct -> vector */
A68_258  UXVACTR;  /* collateral clause result */
A68_66  VXVACTR;  /* OPERATORS - mode -> union mode */
A68_66  YXVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZXVACTR;  /* YIELD */
A68_VC  AYVACTR;  /* avoid structure result */
A68_66  BYVACTR;  /* OPERATORS - mode -> union mode */
A68_66  CYVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  DYVACTR;  /* YIELD */
A68_66  EYVACTR;  /* OPERATORS - mode -> union mode */
A68_65  FYVACTR;  /* OPERATORS - istruct -> vector */
A68_181  GYVACTR;  /* avoid structure result */
A68_181  HYVACTR;  /* avoid structure result */
A68_VC  IYVACTR;  /* avoid structure result */
A68_VC  JYVACTR;  /* avoid structure result */
A68_VC  KYVACTR_uniontable;
A68_257  LYVACTR;  /* collateral clause result */
A68_66  MYVACTR;  /* OPERATORS - mode -> union mode */
A68_66  PYVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QYVACTR;  /* YIELD */
A68_66  RYVACTR;  /* OPERATORS - mode -> union mode */
A68_66  UYVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VYVACTR;  /* YIELD */
A68_66  WYVACTR;  /* OPERATORS - mode -> union mode */
A68_66  ZYVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AZVACTR;  /* YIELD */
A68_66  BZVACTR;  /* OPERATORS - mode -> union mode */
A68_65  CZVACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(ccdec);
 /* line 464: */
 /* line 465: */
{ 
WXIACTR_assert(VVVACTR, (Choicedec.Type==6));
 /* line 466: */
WVVACTR_decno = Choicedec.Decno;
 /* line 467: */
XVVACTR_choicemode = Choicedec.Mode;
 /* line 469: */
 /* line 470: */
 /* line 471: */
if ( (Modeindex>0) )
{ 
 /* line 472: */
AMVACTR_newidinfo(WVVACTR_decno, XVVACTR_choicemode, Choicedec.Name, DMOACTR_nulluname, (A68_BITS )(BQKACTR_ididentityflag|DQKACTR_idccdecflag), A_VVAC(ZVVACTR), A_VVAC(YVVACTR));
 /* line 473: */
 /* line 474: */
 /* line 475: */
 /* line 476: */
AWVACTR.Mode = XVVACTR_choicemode;
 /* line 477: */
AWVACTR.Info = PKJACTR_defaultinfo;
 /* line 478: */
 /* line 479: */
GYPACTR_getcfragment( Enquiry, &CWVACTR );
ROAAOSF_whole( Modeindex, 0, &EWVACTR );
GWVACTR = A_VC_PLUS(A_VC_PLUS(CWVACTR,DWVACTR),EWVACTR) ;
AWVACTR.Extra = A_UNITE(FWVACTR,mode6,6,GWVACTR);
 /* line 480: */
WNVACTR_outputcdeclaration(WVVACTR_decno, JWVACTR_assignment(A_LOC(A68_98 ), AWVACTR));
} 
else
{ 
 /* line 481: */
 /* line 482: */
if ( (Modeindex<0) )
{ 
 /* line 483: */
AMVACTR_newidinfo(WVVACTR_decno, XVVACTR_choicemode, Choicedec.Name, DMOACTR_nulluname, (A68_BITS )(BQKACTR_ididentityflag|DQKACTR_idccdecflag), A_VVAC(WWVACTR), A_VVAC(VWVACTR));
 /* line 484: */
WNVACTR_outputcdeclaration(WVVACTR_decno, (A68_98 *)A68_NIL);
 /* line 486: */
GYPACTR_getcfragment( Enquiry, &XWVACTR );
YWVACTR_enquiryname = XWVACTR;
 /* line 487: */
UTKACTR_idfullname( WVVACTR_decno, &ZWVACTR );
AXVACTR_newunionname = ZWVACTR;
 /* line 489: */
BXVACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 491: */
 /* line 492: */
A_CALLPROC(YVMACTR_constituents,((*(&(Enquiry->Mode))), &CXVACTR),((*(&(Enquiry->Mode))), &CXVACTR,(YVMACTR_constituents).nonlocals));
A_CALLPROC(YVMACTR_constituents,(XVVACTR_choicemode, &DXVACTR),(XVVACTR_choicemode, &DXVACTR,(YVMACTR_constituents).nonlocals));
EXVACTR_modeoffset = (SUQACTR_findints(DXVACTR, CXVACTR)-1);
 /* line 494: */
 /* line 495: */
JXVACTR = HXVACTR ;
FXVACTR.data[0] = A_UNITE(IXVACTR,mode2,2,JXVACTR);
FXVACTR.data[1] = A_UNITE(KXVACTR,mode2,2,AXVACTR_newunionname);
 /* line 496: */
MXVACTR = ',' ;
FXVACTR.data[2] = A_UNITE(LXVACTR,mode1,1,MXVACTR);
FXVACTR.data[3] = A_UNITE(NXVACTR,mode2,2,YWVACTR_enquiryname);
 /* line 497: */
RXVACTR = PXVACTR ;
FXVACTR.data[4] = A_UNITE(QXVACTR,mode2,2,RXVACTR);
FXVACTR.data[5] = A_UNITE(SXVACTR,mode4,4,EIAACTR_cnewline);
 /* line 498: */
MDMACTR_writecstream(A_HISVEC(TXVACTR,FXVACTR,6,A68_66 ), BXVACTR_codestream);
 /* line 500: */
 /* line 501: */
 /* line 502: */
if ( (EXVACTR_modeoffset>0) )
{ 
UXVACTR.data[0] = A_UNITE(VXVACTR,mode2,2,AXVACTR_newunionname);
 /* line 503: */
ZXVACTR = XXVACTR ;
UXVACTR.data[1] = A_UNITE(YXVACTR,mode2,2,ZXVACTR);
ROAAOSF_whole( EXVACTR_modeoffset, 0, &AYVACTR );
UXVACTR.data[2] = A_UNITE(BYVACTR,mode2,2,AYVACTR);
 /* line 504: */
DYVACTR = ';' ;
UXVACTR.data[3] = A_UNITE(CYVACTR,mode1,1,DYVACTR);
UXVACTR.data[4] = A_UNITE(EYVACTR,mode4,4,EIAACTR_cnewline);
 /* line 505: */
 /* line 506: */
MDMACTR_writecstream(A_HISVEC(FYVACTR,UXVACTR,5,A68_66 ), BXVACTR_codestream);
} 
else
{ 
 /* line 507: */
 /* line 510: */
if ( (EXVACTR_modeoffset<0) )
{ 
 /* line 511: */
 /* line 512: */
 /* line 513: */
A_CALLPROC(YVMACTR_constituents,(XVVACTR_choicemode, &GYVACTR),(XVVACTR_choicemode, &GYVACTR,(YVMACTR_constituents).nonlocals));
A_CALLPROC(YVMACTR_constituents,((*(&(Enquiry->Mode))), &HYVACTR),((*(&(Enquiry->Mode))), &HYVACTR,(YVMACTR_constituents).nonlocals));
IVQACTR_uniontouniontable( HYVACTR, GYVACTR, &IYVACTR );
DRJACTR_replacecontrolchars( IYVACTR, &JYVACTR );
KYVACTR_uniontable = JYVACTR;
 /* line 515: */
 /* line 516: */
LYVACTR.data[0] = A_UNITE(MYVACTR,mode2,2,AXVACTR_newunionname);
QYVACTR = OYVACTR ;
LYVACTR.data[1] = A_UNITE(PYVACTR,mode2,2,QYVACTR);
 /* line 517: */
LYVACTR.data[2] = A_UNITE(RYVACTR,mode2,2,KYVACTR_uniontable);
VYVACTR = TYVACTR ;
LYVACTR.data[3] = A_UNITE(UYVACTR,mode2,2,VYVACTR);
LYVACTR.data[4] = A_UNITE(WYVACTR,mode2,2,YWVACTR_enquiryname);
 /* line 518: */
AZVACTR = YYVACTR ;
LYVACTR.data[5] = A_UNITE(ZYVACTR,mode2,2,AZVACTR);
LYVACTR.data[6] = A_UNITE(BZVACTR,mode4,4,EIAACTR_cnewline);
 /* line 519: */
 /* line 520: */
 /* line 521: */
 /* line 522: */
MDMACTR_writecstream(A_HISVEC(CZVACTR,LYVACTR,7,A68_66 ), BXVACTR_codestream);
} 
} 
} 
else
{ 
 /* line 523: */
 /* line 524: */
WXIACTR_assert(EZVACTR, A68_FALSE);
} 
} 
} 
A_PROC_EXIT(ccdec);
return;
} 
#undef NL

A68_VOID  GZVACTR_declarenonlocallabel(A68_INT  Labno)
{ 
A68_110 * HZVACTR_labinfo;
A68_BOOL  IZVACTR;  /* clause result */
A68_BITS  JZVACTR;  /* ADICOPS - <= */
A68_INT  KZVACTR_level;
A68_272  LZVACTR;  /* collateral clause result */
A68_66  OZVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PZVACTR;  /* YIELD */
A68_VC  QZVACTR;  /* avoid structure result */
A68_66  RZVACTR;  /* OPERATORS - mode -> union mode */
A68_66  SZVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  TZVACTR;  /* YIELD */
A68_66  UZVACTR;  /* OPERATORS - mode -> union mode */
A68_INT  VZVACTR;  /* clause result */
A68_65  WZVACTR;  /* OPERATORS - istruct -> vector */
A68_269  XZVACTR;  /* collateral clause result */
A68_66  AAWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BAWACTR;  /* YIELD */
A68_VC  DAWACTR;  /* avoid structure result */
A68_66  FAWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GAWACTR;  /* YIELD */
A68_66  JAWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KAWACTR;  /* YIELD */
A68_VC  LAWACTR;  /* avoid structure result */
A68_66  MAWACTR;  /* OPERATORS - mode -> union mode */
A68_66  NAWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  OAWACTR;  /* YIELD */
A68_66  PAWACTR;  /* OPERATORS - mode -> union mode */
A68_65  QAWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarenonlocallabel);
 /* line 532: */
 /* line 533: */
{ 
{ 
HZVACTR_labinfo = (&A_R1INDEX(ZPKACTR_labels,Labno));
 /* line 534: */
 /* line 535: */
JZVACTR = (*(&(HZVACTR_labinfo->Flags))) ;
IZVACTR = !A_LB_LE(WQKACTR_labbufferemittedflag,JZVACTR);
if ( IZVACTR )
{ 
KZVACTR_level = (*(&((&(HZVACTR_labinfo->Environ))->Level)));
 /* line 537: */
 /* line 538: */
PZVACTR = NZVACTR ;
LZVACTR.data[0] = A_UNITE(OZVACTR,mode2,2,PZVACTR);
DTKACTR_labelbuffername( Labno, &QZVACTR );
LZVACTR.data[1] = A_UNITE(RZVACTR,mode2,2,QZVACTR);
 /* line 539: */
TZVACTR = ';' ;
LZVACTR.data[2] = A_UNITE(SZVACTR,mode1,1,TZVACTR);
LZVACTR.data[3] = A_UNITE(UZVACTR,mode4,4,EIAACTR_cnewline);
 /* line 540: */
if ( (KZVACTR_level==0) )
{ 
VZVACTR = KSLACTR_nonlocdecstream(KZVACTR_level);
} 
else
{ 
 /* line 541: */
VZVACTR = QSLACTR_locdecstream(KZVACTR_level);
} 
MDMACTR_writecstream(A_HISVEC(WZVACTR,LZVACTR,4,A68_66 ), VZVACTR);
 /* line 543: */
 /* line 544: */
BAWACTR = ZZVACTR ;
XZVACTR.data[0] = A_UNITE(AAWACTR,mode2,2,BAWACTR);
 /* line 545: */
DTKACTR_labelbuffername( Labno, &DAWACTR );
GAWACTR = A_VC_PLUS(DAWACTR,EAWACTR) ;
XZVACTR.data[1] = A_UNITE(FAWACTR,mode2,2,GAWACTR);
KAWACTR = IAWACTR ;
XZVACTR.data[2] = A_UNITE(JAWACTR,mode2,2,KAWACTR);
WSKACTR_labelfullname( Labno, &LAWACTR );
XZVACTR.data[3] = A_UNITE(MAWACTR,mode2,2,LAWACTR);
 /* line 546: */
OAWACTR = ';' ;
XZVACTR.data[4] = A_UNITE(NAWACTR,mode1,1,OAWACTR);
XZVACTR.data[5] = A_UNITE(PAWACTR,mode4,4,EIAACTR_cnewline);
 /* line 547: */
MDMACTR_writecstream(A_HISVEC(QAWACTR,XZVACTR,6,A68_66 ), TSLACTR_labelstream(KZVACTR_level));
 /* line 548: */
 /* line 549: */
PKAAOSF_orab((&(HZVACTR_labinfo->Flags)), WQKACTR_labbufferemittedflag);
} 
} 
} 
A_PROC_EXIT(declarenonlocallabel);
return;
} 
#undef NL

A68_VOID  TAWACTR_nonlocaldec(A68_INT  Idno, A68_INT  Level)
{ 
A68_INT  YAWACTR;  /* clause result */
A68_INT  ZAWACTR_typeofid;
A68_INT  ABWACTR_previouslevel;
A68_VC  BBWACTR;  /* avoid structure result */
A68_VC  CBWACTR_fullname;
A68_INT  DBWACTR;  /* clause result */
A68_INT  GBWACTR;  /* OPERATORS - skip to mode */
A68_INT  JBWACTR;  /* OPERATORS - skip to mode */
A68_INT  KBWACTR_ctypeofid;
A68_258  LBWACTR;  /* collateral clause result */
A68_VC  MBWACTR;  /* avoid structure result */
A68_66  NBWACTR;  /* OPERATORS - mode -> union mode */
A68_66  OBWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  PBWACTR;  /* YIELD */
A68_66  QBWACTR;  /* OPERATORS - mode -> union mode */
A68_66  RBWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  SBWACTR;  /* YIELD */
A68_66  TBWACTR;  /* OPERATORS - mode -> union mode */
A68_65  UBWACTR;  /* OPERATORS - istruct -> vector */
A68_98  VBWACTR;  /* collateral clause result */
A68_INT  WBWACTR;  /* clause result */
A68_INT  XBWACTR;  /* OPERATORS - skip to mode */
A68_INT  YBWACTR;  /* YIELD */
A68_INT  ZBWACTR;  /* OPERATORS - skip to mode */
A68_BOOL  ACWACTR;  /* clause result */
A68_101  BCWACTR_id;
A68_INT * CCWACTR;  /* YIELD */
A68_99  DCWACTR;  /* OPERATORS - mode -> union mode */
A68_100  ECWACTR_rd;
A68_INT * FCWACTR;  /* YIELD */
A68_99  GCWACTR;  /* OPERATORS - mode -> union mode */
A68_99  HCWACTR;  /* OPERATORS - skip to mode */
A68_57  ICWACTR_ld;
A68_INT * JCWACTR;  /* YIELD */
A68_99  KCWACTR;  /* OPERATORS - mode -> union mode */
A68_99  LCWACTR;  /* OPERATORS - skip to mode */
A68_98  MCWACTR_rhs;
A68_INT  NCWACTR_thisrd;
A68_276  OCWACTR;  /* collateral clause result */
A68_66  RCWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SCWACTR;  /* YIELD */
A68_VC  TCWACTR;  /* avoid structure result */
A68_66  UCWACTR;  /* OPERATORS - mode -> union mode */
A68_66  XCWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YCWACTR;  /* YIELD */
A68_VC  ZCWACTR;  /* avoid structure result */
A68_66  ADWACTR;  /* OPERATORS - mode -> union mode */
A68_66  DDWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EDWACTR;  /* YIELD */
A68_66  FDWACTR;  /* OPERATORS - mode -> union mode */
A68_66  IDWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JDWACTR;  /* YIELD */
A68_VC  KDWACTR;  /* avoid structure result */
A68_66  LDWACTR;  /* OPERATORS - mode -> union mode */
A68_66  MDWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  NDWACTR;  /* YIELD */
A68_66  ODWACTR;  /* OPERATORS - mode -> union mode */
A68_65  PDWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(nonlocaldec);
 /* line 559: */
 /* line 560: */
{ 
 /* line 561: */
 /* line 562: */
 /* line 550: */
 /* line 563: */
if ( (Idno<=IAAACTR_maxidno) )
{ 
YAWACTR = UAWACTR_idtype;
} 
else
{ 
 /* line 564: */
if ( (Idno<=KAAACTR_maxrdno) )
{ 
YAWACTR = VAWACTR_rdtype;
} 
else
{ 
 /* line 565: */
if ( (Idno<=MAAACTR_maxlibid) )
{ 
 /* line 566: */
YAWACTR = WAWACTR_libtype;
} 
else
{ 
YAWACTR = XAWACTR_labtype;
} 
} 
} 
ZAWACTR_typeofid = YAWACTR;
 /* line 567: */
ABWACTR_previouslevel = (Level-1);
 /* line 569: */
UTKACTR_idfullname( Idno, &BBWACTR );
CBWACTR_fullname = BBWACTR;
 /* line 571: */
 /* line 572: */
 /* line 573: */
switch ( ZAWACTR_typeofid )
{ 
case 1: 
 /* line 574: */
DBWACTR = (*(&((&A_R1INDEX(WPKACTR_ids,Idno))->Mode)));
break;
case 2: 
 /* line 575: */
DBWACTR = (*(&((&A_R1INDEX(XPKACTR_rds,Idno))->Mode)));
break;
case 3: 
{ 
WXIACTR_assert(FBWACTR, A68_FALSE);
 /* line 577: */
DBWACTR = GBWACTR;
} 
break;
case 4: 
DBWACTR = TEAACTR_gotomode;
break;
default: 
{ 
WXIACTR_assert(IBWACTR, A68_FALSE);
 /* line 578: */
DBWACTR = JBWACTR;
} 
break;
} 
KBWACTR_ctypeofid = DBWACTR;
 /* line 581: */
 /* line 582: */
XKNACTR_ctype( KBWACTR_ctypeofid, &MBWACTR );
LBWACTR.data[0] = A_UNITE(NBWACTR,mode2,2,MBWACTR);
PBWACTR = ' ' ;
LBWACTR.data[1] = A_UNITE(OBWACTR,mode1,1,PBWACTR);
LBWACTR.data[2] = A_UNITE(QBWACTR,mode2,2,CBWACTR_fullname);
 /* line 583: */
SBWACTR = ';' ;
LBWACTR.data[3] = A_UNITE(RBWACTR,mode1,1,SBWACTR);
LBWACTR.data[4] = A_UNITE(TBWACTR,mode4,4,EIAACTR_cnewline);
 /* line 584: */
MDMACTR_writecstream(A_HISVEC(UBWACTR,LBWACTR,5,A68_66 ), KSLACTR_nonlocdecstream(ABWACTR_previouslevel));
 /* line 585: */
CMNACTR_alignnextstructfield(KBWACTR_ctypeofid, KSLACTR_nonlocdecstream(ABWACTR_previouslevel));
 /* line 589: */
 /* line 590: */
 /* line 591: */
VBWACTR.Mode = KBWACTR_ctypeofid;
 /* line 593: */
switch ( ZAWACTR_typeofid )
{ 
case 1: 
 /* line 594: */
WBWACTR = (*(&((&((&A_R1INDEX(WPKACTR_ids,Idno))->Environ))->Level)));
break;
case 2: 
 /* line 595: */
WBWACTR = (*(&((&A_R1INDEX(XPKACTR_rds,Idno))->Declevel)));
break;
case 3: 
 /* line 596: */
WBWACTR = XBWACTR;
break;
case 4: 
 /* line 597: */
 /* line 598: */
YBWACTR = (Idno-OAAACTR_minlab) ;
WBWACTR = (*(&((&((&A_R1INDEX(ZPKACTR_labels,YBWACTR))->Environ))->Level)));
break;
default: 
 /* line 599: */
WBWACTR = ZBWACTR;
break;
} 
 /* line 600: */
 /* line 601: */
ACWACTR = (ABWACTR_previouslevel==WBWACTR);
if ( ACWACTR )
{ 
 /* line 602: */
VBWACTR.Info = PKJACTR_defaultinfo;
} 
else
{ 
 /* line 603: */
VBWACTR.Info = TKJACTR_nonloc;
} 
 /* line 604: */
switch ( ZAWACTR_typeofid )
{ 
case 1: 
{ 
CCWACTR = (&((&BCWACTR_id)->Idno)) ;
(*CCWACTR) = Idno;
 /* line 605: */
VBWACTR.Extra = A_UNITE(DCWACTR,mode4,4,BCWACTR_id);
} 
break;
case 2: 
{ 
FCWACTR = (&((&ECWACTR_rd)->Rdenno)) ;
(*FCWACTR) = Idno;
 /* line 606: */
VBWACTR.Extra = A_UNITE(GCWACTR,mode2,2,ECWACTR_rd);
} 
break;
case 3: 
 /* line 607: */
VBWACTR.Extra = HCWACTR;
break;
case 4: 
{ 
JCWACTR = (&((&ICWACTR_ld)->Labno)) ;
(*JCWACTR) = (Idno-OAAACTR_minlab);
 /* line 608: */
 /* line 609: */
VBWACTR.Extra = A_UNITE(KCWACTR,mode7,7,ICWACTR_ld);
} 
break;
default: 
 /* line 610: */
VBWACTR.Extra = LCWACTR;
break;
} 
MCWACTR_rhs = VBWACTR;
 /* line 613: */
NCWACTR_thisrd = CQLACTR_findroutine(Level);
 /* line 614: */
 /* line 615: */
SCWACTR = QCWACTR ;
OCWACTR.data[0] = A_UNITE(RCWACTR,mode2,2,SCWACTR);
LUKACTR_rdenvname( NCWACTR_thisrd, &TCWACTR );
OCWACTR.data[1] = A_UNITE(UCWACTR,mode2,2,TCWACTR);
 /* line 616: */
YCWACTR = WCWACTR ;
OCWACTR.data[2] = A_UNITE(XCWACTR,mode2,2,YCWACTR);
UTKACTR_idfullname( NCWACTR_thisrd, &ZCWACTR );
OCWACTR.data[3] = A_UNITE(ADWACTR,mode2,2,ZCWACTR);
 /* line 617: */
EDWACTR = CDWACTR ;
OCWACTR.data[4] = A_UNITE(DDWACTR,mode2,2,EDWACTR);
OCWACTR.data[5] = A_UNITE(FDWACTR,mode2,2,CBWACTR_fullname);
JDWACTR = HDWACTR ;
OCWACTR.data[6] = A_UNITE(IDWACTR,mode2,2,JDWACTR);
GYPACTR_getcfragment( (&MCWACTR_rhs), &KDWACTR );
OCWACTR.data[7] = A_UNITE(LDWACTR,mode2,2,KDWACTR);
 /* line 618: */
NDWACTR = ';' ;
OCWACTR.data[8] = A_UNITE(MDWACTR,mode1,1,NDWACTR);
OCWACTR.data[9] = A_UNITE(ODWACTR,mode4,4,EIAACTR_cnewline);
 /* line 619: */
 /* line 620: */
MDMACTR_writecstream(A_HISVEC(PDWACTR,OCWACTR,10,A68_66 ), NSLACTR_codestream(ABWACTR_previouslevel));
} 
A_PROC_EXIT(nonlocaldec);
return;
} 
#undef NL
 /* line 624: */
 /* line 626: */

A_STATIC A68_VOID  WDWACTR_declarecroutine(A68_INT  Rdenno, A68_INT  Resultmode, A68_BOOL  Global, A68_BOOL  Kept, A68_BOOL  Opsym, A68_181  Params)
{ 
A68_VC  XDWACTR;  /* avoid structure result */
A68_VC  YDWACTR_environmentctype;
A68_BOOL  ZDWACTR;  /* optbool result */
A68_BOOL  AEWACTR_usetempforresult;
A68_INT  BEWACTR;  /* clause result */
A68_INT  CEWACTR_cresultmode;
A68_BOOL  DEWACTR_fulldec;
A68_INT  EEWACTR_a68paramcount;
A68_INT  FEWACTR_cparamcount;
A68_INT  GEWACTR_codestream;
A68_VC  HEWACTR;  /* clause result */
A68_VC  IEWACTR;  /* avoid structure result */
A68_VC  JEWACTR;  /* avoid structure result */
A68_VC  KEWACTR_fnname;
A68_279  MEWACTR_generator;   /* proc value of non-global proc */
A68_278  SEWACTR;  /* avoid structure result */
A68_278  REWACTR_paramnames;
A68_278  UEWACTR;  /* avoid structure result */
A68_278  TEWACTR_paramtypes;
A68_INT * VEWACTR_param;
A68_VC * WEWACTR_paramtype;
A68_VC * XEWACTR_paramname;
A68_INT  YEWACTR;  /* forall loop counter */
A68_VC  ZEWACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} AFWACTR; 
A68_VC  BFWACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} CFWACTR; 
A68_75  EFWACTR_prototype;   /* proc value of non-global proc */
A68_256  KIWACTR;  /* collateral clause result */
A68_66  LIWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  MIWACTR;  /* YIELD */
A68_66  NIWACTR;  /* OPERATORS - mode -> union mode */
A68_65  OIWACTR;  /* OPERATORS - istruct -> vector */
A68_66  PIWACTR;  /* OPERATORS - mode -> union mode */
A68_65  QIWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_272  RIWACTR;  /* collateral clause result */
A68_66  UIWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VIWACTR;  /* YIELD */
A68_66  WIWACTR;  /* OPERATORS - mode -> union mode */
A68_66  ZIWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AJWACTR;  /* YIELD */
A68_66  BJWACTR;  /* OPERATORS - mode -> union mode */
A68_65  CJWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DJWACTR;  /* avoid structure result */
A68_VC  EJWACTR_procvaluename;
A68_VC  FJWACTR;  /* avoid structure result */
A68_VC  GJWACTR_envname;
A68_INT  HJWACTR_previouslevel;
A68_269  IJWACTR;  /* collateral clause result */
A68_VC  JJWACTR;  /* avoid structure result */
A68_66  KJWACTR;  /* OPERATORS - mode -> union mode */
A68_66  LJWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  MJWACTR;  /* YIELD */
A68_66  NJWACTR;  /* OPERATORS - mode -> union mode */
A68_66  OJWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  PJWACTR;  /* YIELD */
A68_66  SJWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TJWACTR;  /* YIELD */
A68_66  WJWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XJWACTR;  /* YIELD */
A68_66  YJWACTR;  /* OPERATORS - mode -> union mode */
A68_65  ZJWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AKWACTR;  /* OPERATORS - istruct -> vector */
A68_56  BKWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  CKWACTR_envvarname;
A68_269  DKWACTR;  /* collateral clause result */
A68_66  EKWACTR;  /* OPERATORS - mode -> union mode */
A68_66  FKWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  GKWACTR;  /* YIELD */
A68_66  HKWACTR;  /* OPERATORS - mode -> union mode */
A68_66  IKWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  JKWACTR;  /* YIELD */
A68_66  MKWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NKWACTR;  /* YIELD */
A68_66  QKWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RKWACTR;  /* YIELD */
A68_66  SKWACTR;  /* OPERATORS - mode -> union mode */
A68_65  TKWACTR;  /* OPERATORS - istruct -> vector */
A68_284  UKWACTR;  /* collateral clause result */
A68_66  XKWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YKWACTR;  /* YIELD */
A68_66  ZKWACTR;  /* OPERATORS - mode -> union mode */
A68_66  CLWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DLWACTR;  /* YIELD */
A68_66  ELWACTR;  /* OPERATORS - mode -> union mode */
A68_66  HLWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ILWACTR;  /* YIELD */
A68_66  JLWACTR;  /* OPERATORS - mode -> union mode */
A68_66  MLWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NLWACTR;  /* YIELD */
A68_66  OLWACTR;  /* OPERATORS - mode -> union mode */
A68_65  PLWACTR;  /* OPERATORS - istruct -> vector */
A68_284  QLWACTR;  /* collateral clause result */
A68_66  TLWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ULWACTR;  /* YIELD */
A68_66  XLWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YLWACTR;  /* YIELD */
A68_66  ZLWACTR;  /* OPERATORS - mode -> union mode */
A68_66  CMWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DMWACTR;  /* YIELD */
A68_66  EMWACTR;  /* OPERATORS - mode -> union mode */
A68_66  HMWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IMWACTR;  /* YIELD */
A68_66  JMWACTR;  /* OPERATORS - mode -> union mode */
A68_66  MMWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NMWACTR;  /* YIELD */
A68_66  OMWACTR;  /* OPERATORS - mode -> union mode */
A68_65  PMWACTR;  /* OPERATORS - istruct -> vector */
A68_269  QMWACTR;  /* collateral clause result */
A68_66  TMWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UMWACTR;  /* YIELD */
A68_66  XMWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YMWACTR;  /* YIELD */
A68_66  BNWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CNWACTR;  /* YIELD */
A68_66  DNWACTR;  /* OPERATORS - mode -> union mode */
A68_66  ENWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  FNWACTR;  /* YIELD */
A68_66  INWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JNWACTR;  /* YIELD */
A68_66  MNWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NNWACTR;  /* YIELD */
A68_66  ONWACTR;  /* OPERATORS - mode -> union mode */
A68_65  PNWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarecroutine);
 /* line 627: */
 /* line 628: */
{ 
LUKACTR_rdenvname( Rdenno, &XDWACTR );
YDWACTR_environmentctype = XDWACTR;
 /* line 631: */
 /* line 632: */
ZDWACTR = NQIACTR_nostructresultoption;
if ( ZDWACTR )
{ZDWACTR = VSMACTR_iscstruct(Resultmode);
}
AEWACTR_usetempforresult = ZDWACTR;
 /* line 634: */
 /* line 635: */
if ( AEWACTR_usetempforresult )
{ 
BEWACTR = UEAACTR_voidmode;
} 
else
{ 
BEWACTR = Resultmode;
} 
CEWACTR_cresultmode = BEWACTR;
 /* line 637: */
DEWACTR_fulldec = !Global;
 /* line 639: */
EEWACTR_a68paramcount = Params.upb;
 /* line 641: */
 /* line 642: */
FEWACTR_cparamcount = ((EEWACTR_a68paramcount+(AEWACTR_usetempforresult))+(DEWACTR_fulldec));
 /* line 644: */
GEWACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 646: */
 /* line 647: */
if ( DEWACTR_fulldec )
{ 
 /* line 648: */
DUKACTR_rdfnname( Rdenno, &IEWACTR );
HEWACTR = IEWACTR;
} 
else
{ 
 /* line 649: */
UTKACTR_idfullname( Rdenno, &JEWACTR );
HEWACTR = JEWACTR;
} 
KEWACTR_fnname = HEWACTR;
 /* line 651: */
A_CLOSURE( MEWACTR_generator, NEWACTR_generator, OEWACTR_generator );
(( OEWACTR_generator * ) ( MEWACTR_generator.nonlocals )) -> EEWACTR_a68paramcount = EEWACTR_a68paramcount;
A_CALLPROC(MEWACTR_generator,(A68_TRUE, &SEWACTR),(A68_TRUE, &SEWACTR,(MEWACTR_generator).nonlocals));
REWACTR_paramnames = SEWACTR;
A_CALLPROC(MEWACTR_generator,(A68_TRUE, &UEWACTR),(A68_TRUE, &UEWACTR,(MEWACTR_generator).nonlocals));
TEWACTR_paramtypes = UEWACTR;
 /* line 653: */
 /* line 654: */
YEWACTR = Params.upb -1;
if ( YEWACTR != TEWACTR_paramtypes.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( YEWACTR != REWACTR_paramnames.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
VEWACTR_param = Params.data;
WEWACTR_paramtype = TEWACTR_paramtypes.data;
XEWACTR_paramname = REWACTR_paramnames.data;
for (;YEWACTR-- >= 0;
(VEWACTR_param++
,WEWACTR_paramtype++
,XEWACTR_paramname++
) )
{
 /* line 655: */
UTKACTR_idfullname( (*VEWACTR_param), &ZEWACTR );
AFWACTR.source = ZEWACTR ;
(*XEWACTR_paramname) = (AFWACTR.destination);
 /* line 656: */
 /* line 657: */
BLNACTR_cvartype( (*(&((&A_R1INDEX(WPKACTR_ids,(*VEWACTR_param)))->Cvariabletype))), &BFWACTR );
CFWACTR.source = BFWACTR ;
(*WEWACTR_paramtype) = (CFWACTR.destination);
}
 /* line 659: */
A_CLOSURE( EFWACTR_prototype, FFWACTR_prototype, GFWACTR_prototype );
(( GFWACTR_prototype * ) ( EFWACTR_prototype.nonlocals )) -> Global = Global;
(( GFWACTR_prototype * ) ( EFWACTR_prototype.nonlocals )) -> Kept = Kept;
(( GFWACTR_prototype * ) ( EFWACTR_prototype.nonlocals )) -> CEWACTR_cresultmode = CEWACTR_cresultmode;
(( GFWACTR_prototype * ) ( EFWACTR_prototype.nonlocals )) -> KEWACTR_fnname = KEWACTR_fnname;
(( GFWACTR_prototype * ) ( EFWACTR_prototype.nonlocals )) -> FEWACTR_cparamcount = FEWACTR_cparamcount;
(( GFWACTR_prototype * ) ( EFWACTR_prototype.nonlocals )) -> EEWACTR_a68paramcount = EEWACTR_a68paramcount;
(( GFWACTR_prototype * ) ( EFWACTR_prototype.nonlocals )) -> TEWACTR_paramtypes = TEWACTR_paramtypes;
(( GFWACTR_prototype * ) ( EFWACTR_prototype.nonlocals )) -> REWACTR_paramnames = REWACTR_paramnames;
(( GFWACTR_prototype * ) ( EFWACTR_prototype.nonlocals )) -> AEWACTR_usetempforresult = AEWACTR_usetempforresult;
(( GFWACTR_prototype * ) ( EFWACTR_prototype.nonlocals )) -> Resultmode = Resultmode;
(( GFWACTR_prototype * ) ( EFWACTR_prototype.nonlocals )) -> DEWACTR_fulldec = DEWACTR_fulldec;
 /* line 708: */
A_CALLPROC(EFWACTR_prototype,(HSLACTR_externstream),(HSLACTR_externstream,(EFWACTR_prototype).nonlocals));
MIWACTR = ';' ;
KIWACTR.data[0] = A_UNITE(LIWACTR,mode1,1,MIWACTR);
KIWACTR.data[1] = A_UNITE(NIWACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(OIWACTR,KIWACTR,2,A68_66 ), HSLACTR_externstream);
 /* line 711: */
A_CALLPROC(EFWACTR_prototype,(GEWACTR_codestream),(GEWACTR_codestream,(EFWACTR_prototype).nonlocals));
MDMACTR_writecstream(A_HVEC(QIWACTR,A_UNITE(PIWACTR,mode4,4,EIAACTR_cnewline),A68_66 ), GEWACTR_codestream);
 /* line 713: */
 /* line 714: */
 /* line 715: */
if ( DEWACTR_fulldec )
{ 
VIWACTR = TIWACTR ;
RIWACTR.data[0] = A_UNITE(UIWACTR,mode2,2,VIWACTR);
RIWACTR.data[1] = A_UNITE(WIWACTR,mode2,2,YDWACTR_environmentctype);
AJWACTR = YIWACTR ;
RIWACTR.data[2] = A_UNITE(ZIWACTR,mode2,2,AJWACTR);
RIWACTR.data[3] = A_UNITE(BJWACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(CJWACTR,RIWACTR,4,A68_66 ), GEWACTR_codestream);
 /* line 717: */
UTKACTR_idfullname( Rdenno, &DJWACTR );
EJWACTR_procvaluename = DJWACTR;
 /* line 718: */
LUKACTR_rdenvname( Rdenno, &FJWACTR );
GJWACTR_envname = FJWACTR;
 /* line 719: */
HJWACTR_previouslevel = (VRLACTR_currentlevel()-1);
 /* line 722: */
 /* line 723: */
XKNACTR_ctype( (*(&((&A_R1INDEX(XPKACTR_rds,Rdenno))->Mode))), &JJWACTR );
IJWACTR.data[0] = A_UNITE(KJWACTR,mode2,2,JJWACTR);
MJWACTR = ' ' ;
IJWACTR.data[1] = A_UNITE(LJWACTR,mode1,1,MJWACTR);
IJWACTR.data[2] = A_UNITE(NJWACTR,mode2,2,EJWACTR_procvaluename);
 /* line 724: */
PJWACTR = ';' ;
IJWACTR.data[3] = A_UNITE(OJWACTR,mode1,1,PJWACTR);
 /* line 725: */
 /* line 726: */
if ( AQIACTR_verboseoption )
{ 
 /* line 727: */
TJWACTR = RJWACTR ;
IJWACTR.data[4] = A_UNITE(SJWACTR,mode2,2,TJWACTR);
} 
else
{ 
 /* line 728: */
XJWACTR = VJWACTR ;
IJWACTR.data[4] = A_UNITE(WJWACTR,mode2,2,XJWACTR);
} 
IJWACTR.data[5] = A_UNITE(YJWACTR,mode4,4,EIAACTR_cnewline);
 /* line 729: */
MDMACTR_writecstream(A_HISVEC(ZJWACTR,IJWACTR,6,A68_66 ), QSLACTR_locdecstream(HJWACTR_previouslevel));
 /* line 731: */
 /* line 732: */
 /* line 734: */
if ( PQIACTR_closureonstackoption )
{ 
BKWACTR = QIMACTR_newuniquename() ;
CKWACTR_envvarname = A_HISVEC(AKWACTR,BKWACTR,7,A68_CHAR );
 /* line 735: */
 /* line 736: */
DKWACTR.data[0] = A_UNITE(EKWACTR,mode2,2,GJWACTR_envname);
GKWACTR = ' ' ;
DKWACTR.data[1] = A_UNITE(FKWACTR,mode1,1,GKWACTR);
DKWACTR.data[2] = A_UNITE(HKWACTR,mode2,2,CKWACTR_envvarname);
 /* line 737: */
JKWACTR = ';' ;
DKWACTR.data[3] = A_UNITE(IKWACTR,mode1,1,JKWACTR);
if ( AQIACTR_verboseoption )
{ 
NKWACTR = LKWACTR ;
DKWACTR.data[4] = A_UNITE(MKWACTR,mode2,2,NKWACTR);
} 
else
{ 
 /* line 738: */
RKWACTR = PKWACTR ;
DKWACTR.data[4] = A_UNITE(QKWACTR,mode2,2,RKWACTR);
} 
DKWACTR.data[5] = A_UNITE(SKWACTR,mode4,4,EIAACTR_cnewline);
 /* line 739: */
MDMACTR_writecstream(A_HISVEC(TKWACTR,DKWACTR,6,A68_66 ), QSLACTR_locdecstream(HJWACTR_previouslevel));
 /* line 741: */
 /* line 742: */
 /* line 743: */
YKWACTR = WKWACTR ;
UKWACTR.data[0] = A_UNITE(XKWACTR,mode2,2,YKWACTR);
UKWACTR.data[1] = A_UNITE(ZKWACTR,mode2,2,EJWACTR_procvaluename);
DLWACTR = BLWACTR ;
UKWACTR.data[2] = A_UNITE(CLWACTR,mode2,2,DLWACTR);
UKWACTR.data[3] = A_UNITE(ELWACTR,mode2,2,KEWACTR_fnname);
ILWACTR = GLWACTR ;
UKWACTR.data[4] = A_UNITE(HLWACTR,mode2,2,ILWACTR);
UKWACTR.data[5] = A_UNITE(JLWACTR,mode2,2,CKWACTR_envvarname);
 /* line 744: */
NLWACTR = LLWACTR ;
UKWACTR.data[6] = A_UNITE(MLWACTR,mode2,2,NLWACTR);
UKWACTR.data[7] = A_UNITE(OLWACTR,mode4,4,EIAACTR_cnewline);
 /* line 745: */
 /* line 746: */
 /* line 748: */
MDMACTR_writecstream(A_HISVEC(PLWACTR,UKWACTR,8,A68_66 ), NSLACTR_codestream(HJWACTR_previouslevel));
} 
else
{ 
 /* line 749: */
if ( OQIACTR_closuremarkoption )
{ 
ULWACTR = SLWACTR ;
QLWACTR.data[0] = A_UNITE(TLWACTR,mode2,2,ULWACTR);
} 
else
{ 
 /* line 750: */
YLWACTR = WLWACTR ;
QLWACTR.data[0] = A_UNITE(XLWACTR,mode2,2,YLWACTR);
} 
QLWACTR.data[1] = A_UNITE(ZLWACTR,mode2,2,EJWACTR_procvaluename);
DMWACTR = BMWACTR ;
QLWACTR.data[2] = A_UNITE(CMWACTR,mode2,2,DMWACTR);
QLWACTR.data[3] = A_UNITE(EMWACTR,mode2,2,KEWACTR_fnname);
IMWACTR = GMWACTR ;
QLWACTR.data[4] = A_UNITE(HMWACTR,mode2,2,IMWACTR);
QLWACTR.data[5] = A_UNITE(JMWACTR,mode2,2,GJWACTR_envname);
 /* line 751: */
NMWACTR = LMWACTR ;
QLWACTR.data[6] = A_UNITE(MMWACTR,mode2,2,NMWACTR);
QLWACTR.data[7] = A_UNITE(OMWACTR,mode4,4,EIAACTR_cnewline);
 /* line 752: */
 /* line 753: */
MDMACTR_writecstream(A_HISVEC(PMWACTR,QLWACTR,8,A68_66 ), NSLACTR_codestream(HJWACTR_previouslevel));
} 
 /* line 756: */
 /* line 757: */
 /* line 758: */
UMWACTR = SMWACTR ;
QMWACTR.data[0] = A_UNITE(TMWACTR,mode2,2,UMWACTR);
 /* line 759: */
 /* line 760: */
if ( AQIACTR_verboseoption )
{ 
 /* line 761: */
YMWACTR = WMWACTR ;
QMWACTR.data[1] = A_UNITE(XMWACTR,mode2,2,YMWACTR);
} 
else
{ 
CNWACTR = ANWACTR ;
QMWACTR.data[1] = A_UNITE(BNWACTR,mode2,2,CNWACTR);
} 
QMWACTR.data[2] = A_UNITE(DNWACTR,mode4,4,EIAACTR_cnewline);
 /* line 762: */
FNWACTR = '{' ;
QMWACTR.data[3] = A_UNITE(ENWACTR,mode1,1,FNWACTR);
 /* line 763: */
 /* line 764: */
if ( OQIACTR_closuremarkoption )
{ 
 /* line 765: */
JNWACTR = HNWACTR ;
QMWACTR.data[4] = A_UNITE(INWACTR,mode2,2,JNWACTR);
} 
else
{ 
NNWACTR = LNWACTR ;
QMWACTR.data[4] = A_UNITE(MNWACTR,mode2,2,NNWACTR);
} 
QMWACTR.data[5] = A_UNITE(ONWACTR,mode4,4,EIAACTR_cnewline);
 /* line 766: */
 /* line 767: */
 /* line 768: */
MDMACTR_writecstream(A_HISVEC(PNWACTR,QMWACTR,6,A68_66 ), KSLACTR_nonlocdecstream(HJWACTR_previouslevel));
} 
} 
A_PROC_EXIT(declarecroutine);
return;
} 
#undef NL

A68_VOID  QNWACTR_completerddec(void)
{ 
A68_INT  RNWACTR;  /* YIELD */
A68_109 * SNWACTR_rd;
A68_BITS  TNWACTR;  /* ADICOPS - >= */
A68_INT  UNWACTR_nonlocdecstream;
A68_256  VNWACTR;  /* collateral clause result */
A68_66  YNWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZNWACTR;  /* YIELD */
A68_66  AOWACTR;  /* OPERATORS - mode -> union mode */
A68_65  BOWACTR;  /* OPERATORS - istruct -> vector */
A68_272  COWACTR;  /* collateral clause result */
A68_66  FOWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GOWACTR;  /* YIELD */
A68_VC  HOWACTR;  /* avoid structure result */
A68_66  IOWACTR;  /* OPERATORS - mode -> union mode */
A68_66  JOWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  KOWACTR;  /* YIELD */
A68_66  LOWACTR;  /* OPERATORS - mode -> union mode */
A68_65  MOWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(completerddec);
{ 
RNWACTR = ZPLACTR_currentroutine() ;
SNWACTR_rd = (&A_R1INDEX(XPKACTR_rds,RNWACTR));
 /* line 777: */
 /* line 778: */
 /* line 779: */
 /* line 781: */
TNWACTR = (*(&(SNWACTR_rd->Flags))) ;
if ( !A_LB_GE(TNWACTR,RQKACTR_rdglobalflag) )
{ 
UNWACTR_nonlocdecstream = KSLACTR_nonlocdecstream((VRLACTR_currentlevel()-1));
 /* line 782: */
 /* line 783: */
 /* line 786: */
if ( !JQLACTR_nonlocalsused() )
{ 
ZNWACTR = XNWACTR ;
VNWACTR.data[0] = A_UNITE(YNWACTR,mode2,2,ZNWACTR);
VNWACTR.data[1] = A_UNITE(AOWACTR,mode4,4,EIAACTR_cnewline);
 /* line 787: */
MDMACTR_writecstream(A_HISVEC(BOWACTR,VNWACTR,2,A68_66 ), UNWACTR_nonlocdecstream);
} 
 /* line 788: */
 /* line 789: */
GOWACTR = EOWACTR ;
COWACTR.data[0] = A_UNITE(FOWACTR,mode2,2,GOWACTR);
LUKACTR_rdenvname( ZPLACTR_currentroutine(), &HOWACTR );
COWACTR.data[1] = A_UNITE(IOWACTR,mode2,2,HOWACTR);
 /* line 790: */
KOWACTR = ';' ;
COWACTR.data[2] = A_UNITE(JOWACTR,mode1,1,KOWACTR);
COWACTR.data[3] = A_UNITE(LOWACTR,mode4,4,EIAACTR_cnewline);
 /* line 791: */
 /* line 792: */
 /* line 793: */
MDMACTR_writecstream(A_HISVEC(MOWACTR,COWACTR,4,A68_66 ), UNWACTR_nonlocdecstream);
} 
} 
A_PROC_EXIT(completerddec);
return;
} 
#undef NL
 /* line 797: */
 /* line 798: */
 /* line 799: */
 /* line 800: */
 /* line 802: */

A68_VOID  UOWACTR_rddec(A68_VC  Name, A68_INT  Mode, A68_181  Paramdecnos, A68_INT  Resultmode, A68_INT  Rdenno, A68_72  Environ, A68_BITS  Props)
{ 
A68_109 * VOWACTR_rd;
A68_INT  WOWACTR_declevel;
A68_BOOL  XOWACTR;  /* optbool result */
A68_BITS  YOWACTR;  /* clause result */
A68_BITS  ZOWACTR_otherflags;
A68_BOOL  APWACTR;  /* optbool result */
A68_BOOL  BPWACTR_global;
A68_109  CPWACTR;  /* collateral clause result */
A68_BITS  DPWACTR;  /* ADICOPS - >= */
A68_BOOL  EPWACTR;  /* optbool result */
A68_INT  FPWACTR;  /* YIELD */
A68_155  GPWACTR;  /* OPERATORS - simple index */
A68_INT  HPWACTR;  /* YIELD */
A68_157 * IPWACTR_keptinfo;
A68_BOOL  JPWACTR;  /* optbool result */
A68_BOOL  KPWACTR;  /* clause result */
A68_INT  LPWACTR;  /* YIELD */
A68_LINT * MPWACTR;  /* YIELD */
A68_BITS  NPWACTR;  /* ADICOPS - >= */
A68_BITS  OPWACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(rddec);
 /* line 803: */
 /* line 804: */
{ 
VOWACTR_rd = (&A_R1INDEX(XPKACTR_rds,Rdenno));
 /* line 805: */
WOWACTR_declevel = (VRLACTR_currentlevel()-1);
 /* line 806: */
 /* line 807: */
XOWACTR = A_LB_GE(Props,OCAACTR_operatorbit);
if ( XOWACTR )
{ /* line 808: */
XOWACTR = TUKACTR_standopsym(Name);
}
 /* line 809: */
if ( XOWACTR )
{ 
 /* line 810: */
YOWACTR = SQKACTR_rdopflag;
} 
else
{ 
YOWACTR = OQKACTR_rdnoflags;
} 
ZOWACTR_otherflags = YOWACTR;
 /* line 811: */
 /* line 812: */
APWACTR = (WOWACTR_declevel==0);
if ( ! APWACTR )
{APWACTR = PRLACTR_isgloballevel(Environ);
}
BPWACTR_global = APWACTR;
 /* line 814: */
 /* line 815: */
if ( BPWACTR_global )
{ 
 /* line 816: */
CPWACTR.Mode = Mode;
 /* line 817: */
CPWACTR.Resultmode = Resultmode;
 /* line 818: */
CPWACTR.Declevel = WOWACTR_declevel;
 /* line 819: */
CPWACTR.Environ = Environ;
 /* line 820: */
CPWACTR.Name = Name;
 /* line 821: */
 /* line 822: */
DPWACTR = (*(&(VOWACTR_rd->Flags))) ;
EPWACTR = !A_LB_GE(DPWACTR,PQKACTR_rdkeptflag);
if ( ! EPWACTR )
{EPWACTR = !XAPACTR_rscompatiblewithpreviousversion;
}
 /* line 823: */
if ( EPWACTR )
{ 
 /* line 824: */
CPWACTR.Prefix = QIMACTR_newuniquename();
} 
else
{ 
{ 
FPWACTR = 1 ;
GPWACTR = (*(&((&A_R1INDEX(DBPACTR_specs,FPWACTR))->Keptinfo))) ;
HPWACTR = KLVACTR_keeplistposition(Rdenno) ;
IPWACTR_keptinfo = (&A_VINDEX(GPWACTR,HPWACTR));
 /* line 826: */
 /* line 827: */
JPWACTR = (*(&(IPWACTR_keptinfo->Iddec)));
if ( ! JPWACTR )
{JPWACTR = (*(&(IPWACTR_keptinfo->Optimised)));
}
KPWACTR = JPWACTR;
if ( KPWACTR )
{ 
YAPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 828: */
 /* line 829: */
LPWACTR = 1 ;
MPWACTR = (&((&A_R1INDEX(DBPACTR_specs,LPWACTR))->Timeoflastchange)) ;
(*MPWACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
 /* line 830: */
 /* line 831: */
 /* line 832: */
CPWACTR.Prefix = QIMACTR_newuniquename();
} 
else
{ 
 /* line 833: */
CPWACTR.Prefix = (*(&(IPWACTR_keptinfo->Prefix)));
} 
} 
} 
 /* line 834: */
CPWACTR.Fnprefix = DMOACTR_nulluname;
 /* line 835: */
CPWACTR.Envprefix = DMOACTR_nulluname;
 /* line 836: */
 /* line 837: */
CPWACTR.Flags = (A68_BITS )((A68_BITS )((*(&(VOWACTR_rd->Flags)))|RQKACTR_rdglobalflag)|ZOWACTR_otherflags);
} 
else
{ 
 /* line 838: */
CPWACTR.Mode = Mode;
 /* line 839: */
CPWACTR.Resultmode = Resultmode;
 /* line 840: */
CPWACTR.Declevel = WOWACTR_declevel;
 /* line 841: */
CPWACTR.Environ = Environ;
 /* line 842: */
CPWACTR.Name = Name;
 /* line 843: */
CPWACTR.Prefix = QIMACTR_newuniquename();
 /* line 844: */
CPWACTR.Fnprefix = QIMACTR_newuniquename();
 /* line 845: */
CPWACTR.Envprefix = QIMACTR_newuniquename();
 /* line 846: */
 /* line 847: */
CPWACTR.Flags = (A68_BITS )((*(&(VOWACTR_rd->Flags)))|ZOWACTR_otherflags);
} 
(*VOWACTR_rd) = CPWACTR;
 /* line 848: */
 /* line 849: */
 /* line 850: */
 /* line 851: */
 /* line 852: */
 /* line 853: */
 /* line 854: */
 /* line 856: */
 /* line 857: */
NPWACTR = (*(&(VOWACTR_rd->Flags))) ;
OPWACTR = (*(&(VOWACTR_rd->Flags))) ;
WDWACTR_declarecroutine(Rdenno, Resultmode, BPWACTR_global, A_LB_GE(OPWACTR,PQKACTR_rdkeptflag), A_LB_GE(NPWACTR,SQKACTR_rdopflag), Paramdecnos);
} 
A_PROC_EXIT(rddec);
return;
} 
#undef NL

A68_VOID  QPWACTR_labdec(A68_139  Labeldec)
{ 
A68_INT  RPWACTR_labno;
A68_INT  SPWACTR_status;
A68_BOOL  TPWACTR_notsetting;
A68_VC  UPWACTR_name;
A68_110 * VPWACTR_labinfo;
A68_110  WPWACTR;  /* collateral clause result */
A68_72  XPWACTR;  /* avoid structure result */
A68_BITS  ZPWACTR;  /* ADICOPS - <= */
A68_INT * BQWACTR;  /* YIELD */
A68_BOOL * CQWACTR;  /* YIELD */
A68_280  DQWACTR;  /* collateral clause result */
A68_VC  EQWACTR;  /* avoid structure result */
A68_66  FQWACTR;  /* OPERATORS - mode -> union mode */
A68_66  GQWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  HQWACTR;  /* YIELD */
A68_66  IQWACTR;  /* OPERATORS - mode -> union mode */
A68_65  JQWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(labdec);
 /* line 860: */
 /* line 861: */
{ 
RPWACTR_labno = Labeldec.Labno;
 /* line 862: */
SPWACTR_status = Labeldec.Status;
 /* line 863: */
TPWACTR_notsetting = Labeldec.Notsetting;
 /* line 864: */
UPWACTR_name = Labeldec.Name;
 /* line 865: */
VPWACTR_labinfo = (&A_R1INDEX(ZPKACTR_labels,RPWACTR_labno));
 /* line 866: */
 /* line 867: */
if ( TPWACTR_notsetting )
{ 
 /* line 868: */
if ( (SPWACTR_status==LCAACTR_announcing) )
{ 
 /* line 869: */
WPWACTR.Label.Name = QIMACTR_newuniquename();
 /* line 870: */
WPWACTR.Label.Set = A68_FALSE;
 /* line 871: */
QPLACTR_currentenviron(  &XPWACTR );
WPWACTR.Environ = XPWACTR;
 /* line 872: */
WPWACTR.Name = UPWACTR_name;
 /* line 873: */
WPWACTR.Prefix = QIMACTR_newuniquename();
 /* line 875: */
WPWACTR.Flags = VQKACTR_labdeclaredflag;
 /* line 877: */
WPWACTR.Alias = 0;
(*VPWACTR_labinfo) = WPWACTR;
} 
else
{ 
 /* line 878: */
 /* line 879: */
if ( (SPWACTR_status>=MCAACTR_aliasing) )
{ 
ZPWACTR = (*(&((&A_R1INDEX(ZPKACTR_labels,SPWACTR_status))->Flags))) ;
WXIACTR_assert(AQWACTR, A_LB_LE(VQKACTR_labdeclaredflag,ZPWACTR));
 /* line 880: */
(*VPWACTR_labinfo) = (*(&A_R1INDEX(ZPKACTR_labels,SPWACTR_status)));
 /* line 881: */
 /* line 882: */
 /* line 884: */
BQWACTR = (&(VPWACTR_labinfo->Alias)) ;
(*BQWACTR) = SPWACTR_status;
} 
else
{ 
 /* line 885: */
 /* line 886: */
/*SKIP*/;
} 
} 
} 
else
{ 
CQWACTR = (&((&(VPWACTR_labinfo->Label))->Set)) ;
(*CQWACTR) = A68_TRUE;
 /* line 888: */
 /* line 889: */
WSKACTR_labelfullname( RPWACTR_labno, &EQWACTR );
DQWACTR.data[0] = A_UNITE(FQWACTR,mode2,2,EQWACTR);
 /* line 890: */
HQWACTR = ':' ;
DQWACTR.data[1] = A_UNITE(GQWACTR,mode1,1,HQWACTR);
DQWACTR.data[2] = A_UNITE(IQWACTR,mode4,4,EIAACTR_cnewline);
 /* line 891: */
 /* line 892: */
 /* line 893: */
MDMACTR_writecstream(A_HISVEC(JQWACTR,DQWACTR,3,A68_66 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
} 
A_PROC_EXIT(labdec);
return;
} 
#undef NL
 /* line 897: */
 /* line 898: */
 /* line 899: */
 /* line 900: */
 /* line 901: */
 /* line 902: */
 /* line 903: */
 /* line 904: */
 /* line 905: */
 /* line 907: */

A_STATIC A68_VOID  VQWACTR_zexternaldec(A68_VC  Name, A68_56  Prefix, A68_INT  Mode, A68_INT  Decno, A68_BOOL  Optimised, A68_BOOL  Iddec, A68_BOOL  Globalproc, A68_BOOL  Genproc, A68_BOOL  Forceuse, A68_VC  Definition, A68_VC  Rhs)
{ 
A68_BOOL  DRWACTR;  /* optbool result */
A68_BOOL  ERWACTR;  /* optbool result */
A68_108 * GRWACTR;  /* clause result */
A68_BITS  HRWACTR_idflags;
A68_BITS  IRWACTR;  /* clause result */
A68_BITS  JRWACTR;  /* clause result */
A68_BOOL  KRWACTR;  /* optbool result */
A68_BITS  LRWACTR;  /* clause result */
A68_BITS  MRWACTR;  /* clause result */
A68_BITS  NRWACTR;  /* clause result */
A68_VC  ORWACTR;  /* avoid structure result */
A_PROC_ENTRY(zexternaldec);
 /* line 913: */
 /* line 915: */
{ 
 /* line 917: */
DRWACTR = (Decno<=IAAACTR_maxidno);
if ( ! DRWACTR )
{ERWACTR = (Decno>=LAAACTR_minlibid);
if ( ERWACTR )
{ERWACTR = (Decno<=MAAACTR_maxlibid);
}
DRWACTR = ERWACTR;
}
WXIACTR_assert(FRWACTR, DRWACTR);
 /* line 919: */
if ( (Decno<=IAAACTR_maxidno) )
{ 
GRWACTR = (&A_R1INDEX(WPKACTR_ids,Decno));
} 
else
{ 
GRWACTR = (&A_R1INDEX(YPKACTR_libraryids,Decno));
} 
HRWACTR_idflags = (*(&(GRWACTR->Flags)));
 /* line 921: */
 /* line 922: */
 /* line 923: */
if ( Optimised )
{ 
IRWACTR = HQKACTR_idoptimisedflag;
} 
else
{ 
 /* line 924: */
IRWACTR = AQKACTR_idnoflags;
} 
if ( Iddec )
{ 
JRWACTR = BQKACTR_ididentityflag;
} 
else
{ 
 /* line 925: */
JRWACTR = AQKACTR_idnoflags;
} 
KRWACTR = Genproc;
if ( KRWACTR )
{KRWACTR = A_LB_GE(HRWACTR_idflags,CQKACTR_idkeptflag);
}
if ( KRWACTR )
{ 
LRWACTR = KQKACTR_idkeptgenprocflag;
} 
else
{ 
 /* line 926: */
LRWACTR = AQKACTR_idnoflags;
} 
if ( Globalproc )
{ 
MRWACTR = JQKACTR_idgprocflag;
} 
else
{ 
 /* line 927: */
MRWACTR = AQKACTR_idnoflags;
} 
if ( Forceuse )
{ 
NRWACTR = MQKACTR_idforceuseflag;
} 
else
{ 
NRWACTR = AQKACTR_idnoflags;
} 
 /* line 928: */
 /* line 929: */
 /* line 930: */
ZQWACTR_mybefore( Name, ' ', &ORWACTR );
AMVACTR_newidinfo(Decno, Mode, ORWACTR, Prefix, (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(IRWACTR|JRWACTR)|LRWACTR)|MRWACTR)|NRWACTR), Definition, Rhs);
} 
A_PROC_EXIT(zexternaldec);
return;
} 
#undef NL

A_STATIC A68_VOID  QRWACTR_zexternalcdec(A68_INT  Decno)
{ 
A68_BOOL  SRWACTR;  /* optbool result */
A68_BOOL  TRWACTR;  /* optbool result */
A68_108 * VRWACTR;  /* clause result */
A68_108 * WRWACTR_id;
A68_BITS  XRWACTR;  /* ADICOPS - >= */
A68_BOOL  YRWACTR;  /* optbool result */
A68_BITS  ZRWACTR;  /* ADICOPS - >= */
A68_BOOL  ASWACTR;  /* optbool result */
A68_VC  CSWACTR;  /* OPERATORS - trim index */
A68_VC  DSWACTR;  /* OPERATORS - trim index */
A68_BOOL  FSWACTR;  /* clause result */
A68_INT  GSWACTR_mode;
A68_BITS  HSWACTR;  /* ADICOPS - >= */
A68_BOOL  ISWACTR_optimised;
A68_BITS  JSWACTR;  /* ADICOPS - >= */
A68_BOOL  KSWACTR_globalproc;
A68_VC  LSWACTR_definition;
A68_VC  MSWACTR_rhs;
A68_256  NSWACTR;  /* collateral clause result */
A68_66  OSWACTR;  /* OPERATORS - mode -> union mode */
A68_66  PSWACTR;  /* OPERATORS - mode -> union mode */
A68_65  QSWACTR;  /* OPERATORS - istruct -> vector */
A68_INT  RSWACTR_deprocmode;
A68_BOOL  SSWACTR;  /* optbool result */
A68_BOOL  TSWACTR_voidresult;
A68_181  USWACTR;  /* clause result */
A68_181  VSWACTR;  /* avoid structure result */
A68_292  XSWACTR_generator;   /* proc value of non-global proc */
A68_181  CTWACTR;  /* avoid structure result */
A68_181  DTWACTR_params;
A68_258  ETWACTR;  /* collateral clause result */
A68_66  HTWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ITWACTR;  /* YIELD */
A68_INT  JTWACTR;  /* clause result */
A68_VC  KTWACTR;  /* avoid structure result */
A68_66  LTWACTR;  /* OPERATORS - mode -> union mode */
A68_66  MTWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  NTWACTR;  /* YIELD */
A68_VC  OTWACTR;  /* avoid structure result */
A68_66  PTWACTR;  /* OPERATORS - mode -> union mode */
A68_66  QTWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  RTWACTR;  /* YIELD */
A68_65  STWACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  TTWACTR;  /* optbool result */
A68_66  WTWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XTWACTR;  /* YIELD */
A68_65  YTWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  ZTWACTR_comma;
A68_INT * AUWACTR_p;
A68_INT  BUWACTR;  /* forall loop counter */
A68_256  CUWACTR;  /* collateral clause result */
A68_66  DUWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  EUWACTR;  /* YIELD */
A68_66  HUWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IUWACTR;  /* YIELD */
A68_VC  JUWACTR;  /* avoid structure result */
A68_66  KUWACTR;  /* OPERATORS - mode -> union mode */
A68_65  LUWACTR;  /* OPERATORS - istruct -> vector */
A68_280  MUWACTR;  /* collateral clause result */
A68_66  NUWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  OUWACTR;  /* YIELD */
A68_66  RUWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SUWACTR;  /* YIELD */
A68_VC  TUWACTR;  /* avoid structure result */
A68_66  UUWACTR;  /* OPERATORS - mode -> union mode */
A68_66  VUWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  WUWACTR;  /* YIELD */
A68_65  XUWACTR;  /* OPERATORS - istruct -> vector */
A68_256  YUWACTR;  /* collateral clause result */
A68_66  BVWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CVWACTR;  /* YIELD */
A68_66  DVWACTR;  /* OPERATORS - mode -> union mode */
A68_65  EVWACTR;  /* OPERATORS - istruct -> vector */
A68_269  FVWACTR;  /* collateral clause result */
A68_66  IVWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JVWACTR;  /* YIELD */
A68_VC  KVWACTR;  /* avoid structure result */
A68_66  LVWACTR;  /* OPERATORS - mode -> union mode */
A68_66  MVWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  NVWACTR;  /* YIELD */
A68_VC  OVWACTR;  /* avoid structure result */
A68_66  PVWACTR;  /* OPERATORS - mode -> union mode */
A68_66  QVWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  RVWACTR;  /* YIELD */
A68_66  SVWACTR;  /* OPERATORS - mode -> union mode */
A68_65  TVWACTR;  /* OPERATORS - istruct -> vector */
A68_256  UVWACTR;  /* collateral clause result */
A68_66  VVWACTR;  /* OPERATORS - mode -> union mode */
A68_66  WVWACTR;  /* OPERATORS - mode -> union mode */
A68_65  XVWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(zexternalcdec);
 /* line 940: */
 /* line 941: */
{ 
SRWACTR = (Decno<=IAAACTR_maxidno);
if ( ! SRWACTR )
{TRWACTR = (Decno>=LAAACTR_minlibid);
if ( TRWACTR )
{TRWACTR = (Decno<=MAAACTR_maxlibid);
}
SRWACTR = TRWACTR;
}
WXIACTR_assert(URWACTR, SRWACTR);
 /* line 943: */
if ( (Decno<=IAAACTR_maxidno) )
{ 
VRWACTR = (&A_R1INDEX(WPKACTR_ids,Decno));
} 
else
{ 
VRWACTR = (&A_R1INDEX(YPKACTR_libraryids,Decno));
} 
WRWACTR_id = VRWACTR;
 /* line 946: */
 /* line 947: */
 /* line 948: */
XRWACTR = (*(&(WRWACTR_id->Flags))) ;
YRWACTR = A_LB_GE(XRWACTR,LQKACTR_idloadedflag);
if ( ! YRWACTR )
{ /* line 949: */
ZRWACTR = (*(&(WRWACTR_id->Flags))) ;
YRWACTR = A_LB_GE(ZRWACTR,MQKACTR_idforceuseflag);
}
 /* line 950: */
if ( ! YRWACTR )
{ASWACTR = ((*(&(WRWACTR_id->Definition))).upb>=9);
if ( ASWACTR )
{CSWACTR = (*(&(WRWACTR_id->Definition))) ;
ASWACTR = A_VC_EQ(A_VTRIM(DSWACTR,(CSWACTR),A_VTSCRIPT(&(DSWACTR.upb),(CSWACTR).upb,((*(&(WRWACTR_id->Definition))).upb-8),(CSWACTR).upb)),ESWACTR);
}
 /* line 951: */
YRWACTR = ASWACTR;
}
 /* line 952: */
FSWACTR = YRWACTR;
if ( FSWACTR )
{ 
GSWACTR_mode = (*(&(WRWACTR_id->Mode)));
 /* line 953: */
HSWACTR = (*(&(WRWACTR_id->Flags))) ;
ISWACTR_optimised = A_LB_GE(HSWACTR,HQKACTR_idoptimisedflag);
 /* line 954: */
JSWACTR = (*(&(WRWACTR_id->Flags))) ;
KSWACTR_globalproc = A_LB_GE(JSWACTR,JQKACTR_idgprocflag);
 /* line 955: */
LSWACTR_definition = (*(&(WRWACTR_id->Definition)));
 /* line 956: */
MSWACTR_rhs = (*(&(WRWACTR_id->Rhs)));
 /* line 958: */
 /* line 959: */
 /* line 960: */
if ( (MSWACTR_rhs.upb>0) )
{ 
NSWACTR.data[0] = A_UNITE(OSWACTR,mode2,2,MSWACTR_rhs);
NSWACTR.data[1] = A_UNITE(PSWACTR,mode4,4,EIAACTR_cnewline);
 /* line 961: */
MDMACTR_writecstream(A_HISVEC(QSWACTR,NSWACTR,2,A68_66 ), GSLACTR_importsstream);
} 
 /* line 963: */
 /* line 964: */
 /* line 965: */
if ( (LSWACTR_definition.upb<=0) )
{ 
 /* line 966: */
 /* line 967: */
if ( KSWACTR_globalproc )
{ 
RSWACTR_deprocmode = A_CALLPROC(SVMACTR_deproc,(GSWACTR_mode),(GSWACTR_mode,(SVMACTR_deproc).nonlocals));
 /* line 968: */
SSWACTR = NQIACTR_nostructresultoption;
if ( SSWACTR )
{SSWACTR = VSMACTR_iscstruct(RSWACTR_deprocmode);
}
TSWACTR_voidresult = SSWACTR;
 /* line 970: */
if ( NSMACTR_isprocp(GSWACTR_mode) )
{ 
A_CALLPROC(AWMACTR_parameters,(GSWACTR_mode, &VSWACTR),(GSWACTR_mode, &VSWACTR,(AWMACTR_parameters).nonlocals));
USWACTR = VSWACTR;
} 
else
{ 
A_CLOSURE( XSWACTR_generator, YSWACTR_generator, ZSWACTR_generator );
A_CALLPROC(XSWACTR_generator,(A68_FALSE, &CTWACTR),(A68_FALSE, &CTWACTR,(XSWACTR_generator).nonlocals));
USWACTR = CTWACTR;
} 
DTWACTR_params = USWACTR;
 /* line 972: */
 /* line 973: */
ITWACTR = GTWACTR ;
ETWACTR.data[0] = A_UNITE(HTWACTR,mode2,2,ITWACTR);
if ( TSWACTR_voidresult )
{ 
JTWACTR = UEAACTR_voidmode;
} 
else
{ 
JTWACTR = RSWACTR_deprocmode;
} 
XKNACTR_ctype( JTWACTR, &KTWACTR );
ETWACTR.data[1] = A_UNITE(LTWACTR,mode2,2,KTWACTR);
 /* line 974: */
NTWACTR = ' ' ;
ETWACTR.data[2] = A_UNITE(MTWACTR,mode1,1,NTWACTR);
UTKACTR_idfullname( Decno, &OTWACTR );
ETWACTR.data[3] = A_UNITE(PTWACTR,mode2,2,OTWACTR);
RTWACTR = '(' ;
ETWACTR.data[4] = A_UNITE(QTWACTR,mode1,1,RTWACTR);
MDMACTR_writecstream(A_HISVEC(STWACTR,ETWACTR,5,A68_66 ), GSLACTR_importsstream);
 /* line 976: */
 /* line 977: */
TTWACTR = (DTWACTR_params.upb==0);
if ( TTWACTR )
{TTWACTR = !TSWACTR_voidresult;
}
 /* line 978: */
if ( TTWACTR )
{ 
 /* line 979: */
 /* line 980: */
XTWACTR = VTWACTR ;
MDMACTR_writecstream(A_HVEC(YTWACTR,A_UNITE(WTWACTR,mode2,2,XTWACTR),A68_66 ), GSLACTR_importsstream);
} 
else
{ 
ZTWACTR_comma = A68_FALSE;
 /* line 981: */
 /* line 982: */
BUWACTR = DTWACTR_params.upb -1;
AUWACTR_p = DTWACTR_params.data;
for (;BUWACTR-- >= 0;
(AUWACTR_p++
) )
{
 /* line 983: */
if ( ZTWACTR_comma )
{ 
EUWACTR = ',' ;
CUWACTR.data[0] = A_UNITE(DUWACTR,mode1,1,EUWACTR);
} 
else
{ 
IUWACTR = GUWACTR ;
CUWACTR.data[0] = A_UNITE(HUWACTR,mode2,2,IUWACTR);
} 
WLNACTR_ctaggedtype( (*AUWACTR_p), &JUWACTR );
CUWACTR.data[1] = A_UNITE(KUWACTR,mode2,2,JUWACTR);
MDMACTR_writecstream(A_HISVEC(LUWACTR,CUWACTR,2,A68_66 ), GSLACTR_importsstream);
 /* line 984: */
 /* line 985: */
ZTWACTR_comma = A68_TRUE;
}
 /* line 987: */
 /* line 988: */
 /* line 989: */
if ( TSWACTR_voidresult )
{ 
if ( ZTWACTR_comma )
{ 
OUWACTR = ',' ;
MUWACTR.data[0] = A_UNITE(NUWACTR,mode1,1,OUWACTR);
} 
else
{ 
SUWACTR = QUWACTR ;
MUWACTR.data[0] = A_UNITE(RUWACTR,mode2,2,SUWACTR);
} 
XKNACTR_ctype( RSWACTR_deprocmode, &TUWACTR );
MUWACTR.data[1] = A_UNITE(UUWACTR,mode2,2,TUWACTR);
WUWACTR = '*' ;
MUWACTR.data[2] = A_UNITE(VUWACTR,mode1,1,WUWACTR);
 /* line 990: */
 /* line 991: */
MDMACTR_writecstream(A_HISVEC(XUWACTR,MUWACTR,3,A68_66 ), GSLACTR_importsstream);
} 
} 
 /* line 993: */
CVWACTR = AVWACTR ;
YUWACTR.data[0] = A_UNITE(BVWACTR,mode2,2,CVWACTR);
YUWACTR.data[1] = A_UNITE(DVWACTR,mode4,4,EIAACTR_cnewline);
 /* line 995: */
 /* line 996: */
MDMACTR_writecstream(A_HISVEC(EVWACTR,YUWACTR,2,A68_66 ), GSLACTR_importsstream);
} 
else
{ 
 /* line 997: */
if ( !ISWACTR_optimised )
{ 
 /* line 998: */
JVWACTR = HVWACTR ;
FVWACTR.data[0] = A_UNITE(IVWACTR,mode2,2,JVWACTR);
BLNACTR_cvartype( (*(&(YQKACTR_get_idinfo(Decno)->Cvariabletype))), &KVWACTR );
FVWACTR.data[1] = A_UNITE(LVWACTR,mode2,2,KVWACTR);
 /* line 999: */
NVWACTR = ' ' ;
FVWACTR.data[2] = A_UNITE(MVWACTR,mode1,1,NVWACTR);
UTKACTR_idfullname( Decno, &OVWACTR );
FVWACTR.data[3] = A_UNITE(PVWACTR,mode2,2,OVWACTR);
RVWACTR = ';' ;
FVWACTR.data[4] = A_UNITE(QVWACTR,mode1,1,RVWACTR);
FVWACTR.data[5] = A_UNITE(SVWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1000: */
 /* line 1001: */
 /* line 1002: */
MDMACTR_writecstream(A_HISVEC(TVWACTR,FVWACTR,6,A68_66 ), GSLACTR_importsstream);
} 
} 
} 
else
{ 
UVWACTR.data[0] = A_UNITE(VVWACTR,mode2,2,LSWACTR_definition);
UVWACTR.data[1] = A_UNITE(WVWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1003: */
 /* line 1004: */
MDMACTR_writecstream(A_HISVEC(XVWACTR,UVWACTR,2,A68_66 ), GSLACTR_importsstream);
} 
} 
} 
A_PROC_EXIT(zexternalcdec);
return;
} 
#undef NL

A68_VOID  YVWACTR_initialiseidentifiers(void)
{ 
A68_112  ZVWACTR;  /* procedure value */
A68_75  AWWACTR;  /* procedure value */
A_PROC_ENTRY(initialiseidentifiers);
{ 
ZVWACTR.fn.fn_global = VQWACTR_zexternaldec;
ZVWACTR.nonlocals = A68_NIL;
LXKACTR_externaldec = ZVWACTR;
 /* line 1010: */
 /* line 1011: */
AWWACTR.fn.fn_global = QRWACTR_zexternalcdec;
AWWACTR.nonlocals = A68_NIL;
MXKACTR_externalcdec = AWWACTR;
} 
A_PROC_EXIT(initialiseidentifiers);
return;
} 
#undef NL

A68_INT  CWWACTR_leveloflabel(A68_INT  Labno)
{ 
A68_INT  DWWACTR;  /* clause result */
A_PROC_ENTRY(leveloflabel);
 /* line 1014: */
DWWACTR = (*(&((&((&A_R1INDEX(ZPKACTR_labels,Labno))->Environ))->Level)));
A_PROC_EXIT(leveloflabel);
return( DWWACTR );
} 
#undef NL

A68_VOID  FWWACTR_environoflabel(A68_INT  Labno, A68_72  *ReturnedValue)
{ 
A68_72  GWWACTR;  /* clause result */
A_PROC_ENTRY(environoflabel);
 /* line 1017: */
GWWACTR = (*(&((&A_R1INDEX(ZPKACTR_labels,Labno))->Environ)));
A_PROC_EXIT(environoflabel);
*ReturnedValue = (GWWACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 7: */
void NKVACTR(void)   /* initialise DECS identifiers */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel","-dir",".","identifiers.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config/a68config.m","./values.m","./uniquenameserver.m","./unionaids.m","./moduletracer.m","./modes.m","./incmode.m","./incinstallation.m","./modules.m","./incimperatives.m","./incid.m","./idtable.m","./evaluator.m","./environment.m","./environ.m","./denotations.m","./coutput.m","./centities.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ATPACTR();   /* USE values */
RHMACTR();   /* USE uniquenameserver */
HTQACTR();   /* USE unionaids */
BCHACTR();   /* USE moduletracer */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
ODAACTR();   /* USE incinstallation */
MLOACTR();   /* USE modules */
UAAACTR();   /* USE incimperatives */
BAAACTR();   /* USE incid */
PPKACTR();   /* USE idtable */
KEVACTR();   /* USE evaluator */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
LLJACTR();   /* USE denotations */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20-debian/src/identifiers.a68";
A_config.translation_time = "Wed Apr 21 16:34:05 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "MKVACTR (from seed file) ";
A_config.spec_change_time = "Wed Apr 21 16:34:05 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS identifiers);
UEAALIB_a68config(LGAALIB_configinfo, RKVACTR);
 /* line 46: */
 /* line 56: */
 /* line 62: */
 /* line 82: */
 /* line 83: */
 /* line 168: */
 /* line 348: */
 /* line 456: */
 /* line 457: */
 /* line 526: */
 /* line 552: */
 /* line 622: */
 /* line 623: */
 /* line 770: */
 /* line 775: */
 /* line 776: */
 /* line 795: */
 /* line 796: */
 /* line 859: */
 /* line 895: */
 /* line 896: */
 /* line 932: */
 /* line 934: */
 /* line 1006: */
 /* line 1007: */
 /* line 1009: */
 /* line 1013: */
 /* line 1016: */
 /* line 1019: */
 /* line 1021: */
 /* line 1028: */
/*SKIP*/;
A_PROC_EXIT(DECS identifiers);
} 
#undef NL
/* end of translation of identifiers.a68 */
