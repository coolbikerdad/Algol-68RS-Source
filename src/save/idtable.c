/* UNAME:OPKACTR */
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

A_PROCEDURE(A68_VOID ,A68t59,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t60,(void),(void *));
typedef struct A68t60  A68_60 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t61,(A68_INT ),(A68_INT ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t62,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t63,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(INT) REF MODE26 */
struct A68t65 ;

A_PROCEDURE(A68_VOID ,A68t64,(A68_INT ,struct A68t65 ),(A68_INT ,struct A68t65 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT,MODE65) VOID */
A_ROW(A68_VC ,A68t65,1);
typedef struct A68t65  A68_65 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t66,(void),(void *));
typedef struct A68t66  A68_66 ;    /* PROC BITS */
struct A68t67{
A68_INT  Cfile;
A_PAD_INT(PAD_4)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT)  */
struct A68t68{
A68_INT  Seedfile;
A_PAD_INT(PAD_5)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT)  */
struct A68t69 { A68_INT mode; union {
struct A68t67  mode1;
struct A68t68  mode2;
struct A68t56  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t69  A68_69 ;    /* UNION(MODE67,MODE68,MODE56,VOID)  */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ),(A68_VC ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t71,1);
typedef struct A68t71  A68_71 ;    /* [] BOOL */
struct A68t72{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_6)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_7)
struct A68t69  Nameseedorigin;
struct A68t73 * Used_modules;
A68_VC  Commandline;
struct A68t74 * Environment;
};
typedef struct A68t72  A68_72 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE69,REF MODE73,REF MODE26,REF MODE74)  */
struct A68t73{
A68_VC  Modinfo_file;
struct A68t73 * Next;
};
typedef struct A68t73  A68_73 ;    /* STRUCT(REF MODE26,REF MODE73)  */
struct A68t74{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t74 * Next;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE74)  */
struct A68t76 ;
struct A68t77 ;

A_PROCEDURE(struct A68t76 *,A68t75,(A68_VC ,struct A68t77 *,A68_VC *),(A68_VC ,struct A68t77 *,A68_VC *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE26,REF MODE77,REF REF MODE26) REF MODE76 */
struct A68t76{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t76  A68_76 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t77{
A68_VC  Dir;
struct A68t77 * Next;
};
typedef struct A68t77  A68_77 ;    /* STRUCT(REF MODE26,REF MODE77)  */
struct A68t78{
A68_INT  Level;
A_PAD_INT(PAD_8)
A68_INT  Block;
A_PAD_INT(PAD_9)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT,INT)  */
struct A68t79{
A68_INT  Decno;
A_PAD_INT(PAD_10)
struct A68t79 * Rest;
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT,REF MODE79)  */
struct A68t81{
A68_INT  Level;
A_PAD_INT(PAD_11)
A68_INT  Block;
A_PAD_INT(PAD_12)
A68_INT  Rdenno;
A_PAD_INT(PAD_13)
struct A68t79 * Nonlocals;
};
typedef struct A68t81  A68_81 ;    /* STRUCT(INT,INT,INT,REF MODE79)  */
struct A68t80{
struct A68t81  Env;
struct A68t80 * Rest;
};
typedef struct A68t80  A68_80 ;    /* STRUCT(MODE81,REF MODE80)  */
A_ISTRUCT(A68_CHAR ,32,A68t82);
typedef struct A68t82  A68_82 ;    /* STRUCT 32 CHAR */
struct A68t83{
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_14)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_15)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_16)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_17)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_18)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_19)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t83  A68_83 ;    /* STRUCT(MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t86 ,A68t85);
typedef struct A68t85  A68_85 ;    /* VECTOR [] MODE86 */
A_VECTOR(struct A68t92 ,A68t91);
typedef struct A68t91  A68_91 ;    /* VECTOR [] MODE92 */
struct A68t92{
struct A68t82  N;
A_PAD_ISTRUCT(A68_82 ,PAD_20)
struct A68t82  F;
A_PAD_ISTRUCT(A68_82 ,PAD_21)
A68_INT  Level;
A_PAD_INT(PAD_22)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(MODE82,MODE82,INT)  */
struct A68t90 { A68_INT mode; union {
A68_VC  mode1;
struct A68t91  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t90  A68_90 ;    /* UNION(REF MODE26,REF MODE91)  */
struct A68t87{
struct A68t82  F;
A_PAD_ISTRUCT(A68_82 ,PAD_23)
A68_INT  No;
A_PAD_INT(PAD_24)
A68_INT  Nl;
A_PAD_INT(PAD_25)
A68_INT  Ng;
A_PAD_INT(PAD_26)
struct A68t90  U;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(MODE82,INT,INT,INT,MODE90)  */
A_VECTOR(struct A68t83 ,A68t88);
typedef struct A68t88  A68_88 ;    /* VECTOR [] MODE83 */
A_VECTOR(struct A68t56 ,A68t89);
typedef struct A68t89  A68_89 ;    /* VECTOR [] MODE56 */
struct A68t86{
struct A68t87  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_27)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_28)
struct A68t88  Keptinfo;
struct A68t89  Cnames;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(MODE87,MODE56,LONG INT,REF MODE88,REF MODE89)  */
struct A68t84{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_29)
struct A68t56  Lname;
A_PAD_ISTRUCT(A68_56 ,PAD_30)
struct A68t56  Gname;
A_PAD_ISTRUCT(A68_56 ,PAD_31)
struct A68t85  Specs;
};
typedef struct A68t84  A68_84 ;    /* STRUCT(MODE56,MODE56,MODE56,REF MODE85)  */
struct A68t93{
struct A68t94 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_32)
};
typedef struct A68t93  A68_93 ;    /* STRUCT(REF MODE94,REF MODE55,INT)  */
struct A68t96{
A68_INT  Rdenno;
A_PAD_INT(PAD_33)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT)  */
struct A68t97{
A68_INT  Idno;
A_PAD_INT(PAD_34)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT)  */
struct A68t98{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_35)
A68_INT  Mode;
A_PAD_INT(PAD_36)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE56,INT)  */
struct A68t99{
A68_INT  Nse;
A_PAD_INT(PAD_37)
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT)  */
struct A68t100{
A68_INT  Fn;
A_PAD_INT(PAD_38)
A68_INT  Param;
A_PAD_INT(PAD_39)
struct A68t101 * Operands;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT,INT,REF MODE101)  */
struct A68t95 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t96  mode2;
struct A68t97  mode4;
struct A68t98  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t99  mode8;
struct A68t100  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t95  A68_95 ;    /* UNION(LONG BITS,MODE96,VOID,MODE97,MODE98,MODE26,MODE57,MODE99,MODE100)  */
struct A68t94{
A68_INT  Mode;
A_PAD_INT(PAD_40)
A68_BITS  Info;
A_PAD_BITS(PAD_41)
struct A68t95  Extra;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,BITS,MODE95)  */
struct A68t101{
struct A68t94  Value;
struct A68t101 * Rest;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE94,REF MODE101)  */

A_PROCEDURE(A68_BOOL ,A68t102,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE70) VOID */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t106);
typedef struct A68t106  A68_106 ;    /* STRUCT 57 CHAR */
struct A68t107{
A68_INT  Mode;
A_PAD_INT(PAD_42)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_43)
struct A68t78  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_44)
A68_BITS  Flags;
A_PAD_BITS(PAD_45)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,INT,MODE78,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */
struct A68t108{
A68_INT  Mode;
A_PAD_INT(PAD_46)
A68_INT  Resultmode;
A_PAD_INT(PAD_47)
A68_INT  Declevel;
A_PAD_INT(PAD_48)
struct A68t78  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_49)
struct A68t56  Fnprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_50)
struct A68t56  Envprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_51)
A68_BITS  Flags;
A_PAD_BITS(PAD_52)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,INT,MODE78,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t109{
struct A68t55  Label;
struct A68t78  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_53)
A68_BITS  Flags;
A_PAD_BITS(PAD_54)
A68_INT  Alias;
A_PAD_INT(PAD_55)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE55,MODE78,REF MODE26,MODE56,BITS,INT)  */
A_ROW(struct A68t107 ,A68t110,1);
typedef struct A68t110  A68_110 ;    /* [] MODE107 */
A_ROW(struct A68t108 ,A68t111,1);
typedef struct A68t111  A68_111 ;    /* [] MODE108 */
A_ROW(struct A68t109 ,A68t112,1);
typedef struct A68t112  A68_112 ;    /* [] MODE109 */

A_PROCEDURE(struct A68t107 *,A68t113,(A68_INT ),(A68_INT ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(INT) REF MODE107 */
A_ISTRUCT(A68_CHAR ,27,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t118,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t119,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(INT,INT) MODE26 */
A_ISTRUCT(A68_CHAR ,46,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 46 CHAR */

A_PROCEDURE(A68_BOOL ,A68t121,(A68_INT ),(A68_INT ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ,struct A68t78 *),(A68_INT ,struct A68t78 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) MODE78 */
A_ISTRUCT(A68_CHAR ,35,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 35 CHAR */

A_PROCEDURE(A68_BOOL ,A68t124,(A68_VC ),(A68_VC ,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,34,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 34 CHAR */
A_ROW(A68_INT ,A68t126,1);
typedef struct A68t126  A68_126 ;    /* [] INT */

A_PROCEDURE(A68_VOID ,A68t127,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t126 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t126 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(INT,INT,INT,INT,REF MODE126) VOID */

A_PROCEDURE(A68_VOID ,A68t128,(A68_BOOL ,struct A68t110 *),(A68_BOOL ,struct A68t110 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(BOOL) MODE110 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_BOOL ,struct A68t111 *),(A68_BOOL ,struct A68t111 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(BOOL) MODE111 */

A_PROCEDURE(A68_VOID ,A68t130,(A68_BOOL ,struct A68t112 *),(A68_BOOL ,struct A68t112 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(BOOL) MODE112 */
A_ISTRUCT(A68_CHAR ,21,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_VOID ,A68t133,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from incvalue --- */
#define NKJACTR_noidno 0
/* --- End of imports from incvalue --- */


/* --- Imports from incinstallation --- */
/* --- End of imports from incinstallation --- */


/* --- Imports from incid --- */
#define GAAACTR_globalidno 2
#define NAAACTR_keptgeneratorproccorrection 6000
#define IAAACTR_maxidno 2000
extern A68_INT  TAAACTR_maxkeptgeneratorproc;
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
#define HAAACTR_minidno 3
#define OAAACTR_minlab 16384
#define LAAACTR_minlibid 4001
#define QAAACTR_minopidno 32768
#define JAAACTR_minrdno 2001
/* --- End of imports from incid --- */


/* --- Imports from incenviron --- */
/* --- End of imports from incenviron --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_70  MSIACTR_list;
/* --- End of imports from environment --- */


/* --- Imports from centities --- */
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
extern A68_BOOL  QRAAOSF_charinstring(A68_CHAR ,A68_INT *,A68_VC );
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BCHACTR(void);   /* moduletracer */
extern void GKJACTR(void);   /* incvalue */
extern void ODAACTR(void);   /* incinstallation */
extern void BAAACTR(void);   /* incid */
extern void AHAACTR(void);   /* incenviron */
extern void HPIACTR(void);   /* environment */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_106   SPKACTR = {"$Id: idtable.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,TPKACTR,SPKACTR,57)
A68_107  UPKACTR_alienidinfo;
A68_INT  VPKACTR_alienidno;
A68_110  WPKACTR_ids;
A68_111  XPKACTR_rds;
A68_110  YPKACTR_libraryids;
A68_112  ZPKACTR_labels;
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
A68_BITS  NQKACTR_idpresetflags;
#define OQKACTR_rdnoflags 0X0U
#define PQKACTR_rdkeptflag 0X2U
#define QQKACTR_rdnonlocalsflag 0X4U
#define RQKACTR_rdglobalflag 0X8U
#define SQKACTR_rdopflag 0X10U
#define TQKACTR_rdloadedflag 0X20U
#define UQKACTR_labnoflags 0X0U
#define VQKACTR_labdeclaredflag 0X1U
#define WQKACTR_labbufferemittedflag 0X2U
static A68_114   BRKACTR = {"id info: out of range decno"}; 
A_GISVEC(A68_VC ,CRKACTR,BRKACTR,27)
static A68_115   GRKACTR = {"identifiers"}; 
A_GISVEC(A68_VC ,HRKACTR,GRKACTR,11)
static A68_116   IRKACTR = {"IDTABLE: "}; 
A_GISVEC(A68_VC ,JRKACTR,IRKACTR,9)
static A68_117   NRKACTR = {""}; 
A_GISVEC(A68_VC ,ORKACTR,NRKACTR,0)
static A68_117   XRKACTR = {""}; 
A_GISVEC(A68_VC ,YRKACTR,XRKACTR,0)
static A68_120   KSKACTR = {"IDTABLE: rd select name: invalid prefix number"}; 
A_GISVEC(A68_VC ,LSKACTR,KSKACTR,46)
static A68_117   MSKACTR = {""}; 
A_GISVEC(A68_VC ,NSKACTR,MSKACTR,0)
static A68_117   PSKACTR = {""}; 
A_GISVEC(A68_VC ,RSKACTR,PSKACTR,0)
static A68_117   WTKACTR = {""}; 
A_GISVEC(A68_VC ,XTKACTR,WTKACTR,0)
static A68_123   GUKACTR = {"IDTABLE: rd fn name: invalid rdenno"}; 
A_GISVEC(A68_VC ,HUKACTR,GUKACTR,35)
static A68_117   IUKACTR = {""}; 
A_GISVEC(A68_VC ,JUKACTR,IUKACTR,0)
static A68_123   OUKACTR = {"IDTABLE: rd fn name: invalid rdenno"}; 
A_GISVEC(A68_VC ,PUKACTR,OUKACTR,35)
static A68_117   QUKACTR = {""}; 
A_GISVEC(A68_VC ,RUKACTR,QUKACTR,0)
static A68_125   UUKACTR = {"IDTABLE: standop sym: null id name"}; 
A_GISVEC(A68_VC ,VUKACTR,UUKACTR,34)
static A68_115   XUKACTR = {"%&+-*/:<=>?"}; 
A_GISVEC(A68_VC ,YUKACTR,XUKACTR,11)
static A68_131   WWKACTR = {"kept identifiers are:"}; 
A_GISVEC(A68_VC ,XWKACTR,WWKACTR,21)
static A68_132   FXKACTR = {"IDTABLE: kept decno is a label"}; 
A_GISVEC(A68_VC ,GXKACTR,FXKACTR,30)
A68_133  LXKACTR_externaldec;
A68_61  MXKACTR_externalcdec;
typedef struct   /* env of non-global proc */
{
A68_INT  No_decnos;
A_PAD_INT(PAD_56)
} JVKACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  No_rdennos;
A_PAD_INT(PAD_57)
} QVKACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  No_libinds;
A_PAD_INT(PAD_58)
} XVKACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  No_labels;
A_PAD_INT(PAD_59)
} EWKACTR_generator;

A68_107 * YQKACTR_get_idinfo(A68_INT  Decno);

A_STATIC A68_VOID  FRKACTR_debugmessage(A68_VC  M);

A68_VOID  LRKACTR_idname(A68_INT  Idno, A68_VC  *ReturnedValue);

A68_VOID  RRKACTR_afterbang(A68_VC  Name, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BSKACTR_rdselectname(A68_INT  Prefix, A68_INT  Rdenno, A68_VC  *ReturnedValue);

A68_VOID  WSKACTR_labelfullname(A68_INT  Labno, A68_VC  *ReturnedValue);

A68_VOID  DTKACTR_labelbuffername(A68_INT  Labno, A68_VC  *ReturnedValue);

A68_BOOL  KTKACTR_labelisset(A68_INT  Labno);

A68_BOOL  NTKACTR_labelisdeclared(A68_INT  Labno);

A68_VOID  RTKACTR_labelenviron(A68_INT  Labno, A68_78  *ReturnedValue);

A68_VOID  UTKACTR_idfullname(A68_INT  Idno, A68_VC  *ReturnedValue);

A68_VOID  DUKACTR_rdfnname(A68_INT  Rdenno, A68_VC  *ReturnedValue);

A68_VOID  LUKACTR_rdenvname(A68_INT  Rdenno, A68_VC  *ReturnedValue);

A68_BOOL  TUKACTR_standopsym(A68_VC  Idname);

A68_VOID  FVKACTR_initialiseids(A68_INT  No_decnos, A68_INT  No_libinds, A68_INT  No_labels, A68_INT  No_rdennos, A68_126  Keptdecnos);

A_STATIC A68_VOID  IVKACTR_generator(A68_BOOL  GVKACTR_anonymous, A68_110  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PVKACTR_generator(A68_BOOL  NVKACTR_anonymous, A68_111  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WVKACTR_generator(A68_BOOL  UVKACTR_anonymous, A68_110  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DWKACTR_generator(A68_BOOL  BWKACTR_anonymous, A68_112  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IVKACTR_generator(A68_BOOL  GVKACTR_anonymous, A68_110  *ReturnedValue, void *NonLocals)
#define NL(x) (((JVKACTR_generator *)NonLocals)->x)
{ 
A68_110  KVKACTR;  /* clause result */
A68_110  LVKACTR;  /* OPERATORS - dynamic generator */
{ 
LVKACTR.dim[0].upb = NL(No_decnos) ;
LVKACTR.dim[0].lwb = GAAACTR_globalidno ;
A_1INITSTRIDES(LVKACTR) ;
( GVKACTR_anonymous? A_R1LOC(A68_107 ,LVKACTR): A_R1HEAP(A68_107 ,LVKACTR) );
KVKACTR = LVKACTR;
} 
*ReturnedValue = (KVKACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PVKACTR_generator(A68_BOOL  NVKACTR_anonymous, A68_111  *ReturnedValue, void *NonLocals)
#define NL(x) (((QVKACTR_generator *)NonLocals)->x)
{ 
A68_111  RVKACTR;  /* clause result */
A68_111  SVKACTR;  /* OPERATORS - dynamic generator */
{ 
SVKACTR.dim[0].upb = ((JAAACTR_minrdno-1)+NL(No_rdennos)) ;
SVKACTR.dim[0].lwb = JAAACTR_minrdno ;
A_1INITSTRIDES(SVKACTR) ;
( NVKACTR_anonymous? A_R1LOC(A68_108 ,SVKACTR): A_R1HEAP(A68_108 ,SVKACTR) );
RVKACTR = SVKACTR;
} 
*ReturnedValue = (RVKACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WVKACTR_generator(A68_BOOL  UVKACTR_anonymous, A68_110  *ReturnedValue, void *NonLocals)
#define NL(x) (((XVKACTR_generator *)NonLocals)->x)
{ 
A68_110  YVKACTR;  /* clause result */
A68_110  ZVKACTR;  /* OPERATORS - dynamic generator */
{ 
ZVKACTR.dim[0].upb = ((LAAACTR_minlibid-1)+NL(No_libinds)) ;
ZVKACTR.dim[0].lwb = LAAACTR_minlibid ;
A_1INITSTRIDES(ZVKACTR) ;
( UVKACTR_anonymous? A_R1LOC(A68_107 ,ZVKACTR): A_R1HEAP(A68_107 ,ZVKACTR) );
YVKACTR = ZVKACTR;
} 
*ReturnedValue = (YVKACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DWKACTR_generator(A68_BOOL  BWKACTR_anonymous, A68_112  *ReturnedValue, void *NonLocals)
#define NL(x) (((EWKACTR_generator *)NonLocals)->x)
{ 
A68_112  FWKACTR;  /* clause result */
A68_112  GWKACTR;  /* OPERATORS - dynamic generator */
{ 
GWKACTR.dim[0].upb = NL(No_labels) ;
GWKACTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(GWKACTR) ;
( BWKACTR_anonymous? A_R1LOC(A68_109 ,GWKACTR): A_R1HEAP(A68_109 ,GWKACTR) );
FWKACTR = GWKACTR;
} 
*ReturnedValue = (FWKACTR);
return;
} 
#undef NL

A68_107 * YQKACTR_get_idinfo(A68_INT  Decno)
{ 
A68_107 * ZQKACTR;  /* clause result */
A68_BOOL  ARKACTR;  /* optbool result */
A68_107 * DRKACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_idinfo);
 /* line 188: */
 /* line 189: */
if ( (Decno<=IAAACTR_maxidno) )
{ 
 /* line 190: */
ZQKACTR = (&A_R1INDEX(WPKACTR_ids,Decno));
} 
else
{ 
ARKACTR = (Decno>=LAAACTR_minlibid);
if ( ARKACTR )
{ /* line 191: */
ARKACTR = (Decno<=MAAACTR_maxlibid);
}
if ( ARKACTR )
{ 
 /* line 192: */
ZQKACTR = (&A_R1INDEX(YPKACTR_libraryids,Decno));
} 
else
{ 
WXIACTR_assert(CRKACTR, A68_FALSE);
 /* line 193: */
ZQKACTR = DRKACTR;
} 
} 
A_PROC_EXIT(get_idinfo);
return( ZQKACTR );
} 
#undef NL

A_STATIC A68_VOID  FRKACTR_debugmessage(A68_VC  M)
{ 
A_PROC_ENTRY(debugmessage);
 /* line 199: */
 /* line 200: */
if ( (ZCHACTR_tracelevel(HRKACTR)!=0) )
{ 
 /* line 201: */
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(JRKACTR,M)),(A_VC_PLUS(JRKACTR,M),(MSIACTR_list).nonlocals));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A68_VOID  LRKACTR_idname(A68_INT  Idno, A68_VC  *ReturnedValue)
{ 
A68_VC  MRKACTR;  /* clause result */
A68_INT  PRKACTR;  /* YIELD */
A_PROC_ENTRY(idname);
 /* line 207: */
 /* line 208: */
 /* line 209: */
if ( (Idno==VPKACTR_alienidno) )
{ 
MRKACTR = (*(&((&UPKACTR_alienidinfo)->Name)));
} 
else
{ 
 /* line 210: */
 /* line 211: */
if ( ((Idno==NKJACTR_noidno)|(Idno>QAAACTR_minopidno)) )
{ 
MRKACTR = ORKACTR;
} 
else
{ 
 /* line 212: */
if ( (Idno<=IAAACTR_maxidno) )
{ 
 /* line 213: */
MRKACTR = (*(&((&A_R1INDEX(WPKACTR_ids,Idno))->Name)));
} 
else
{ 
 /* line 214: */
if ( (Idno<=KAAACTR_maxrdno) )
{ 
 /* line 215: */
MRKACTR = (*(&((&A_R1INDEX(XPKACTR_rds,Idno))->Name)));
} 
else
{ 
 /* line 216: */
if ( (Idno<=MAAACTR_maxlibid) )
{ 
 /* line 217: */
MRKACTR = (*(&((&A_R1INDEX(YPKACTR_libraryids,Idno))->Name)));
} 
else
{ 
 /* line 218: */
PRKACTR = (Idno-OAAACTR_minlab) ;
MRKACTR = (*(&((&A_R1INDEX(ZPKACTR_labels,PRKACTR))->Name)));
} 
} 
} 
} 
} 
A_PROC_EXIT(idname);
*ReturnedValue = (MRKACTR);
return;
} 
#undef NL

A68_VOID  RRKACTR_afterbang(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_INT  SRKACTR_upb;
A68_BOOL  TRKACTR;  /* optbool result */
A68_INT  URKACTR;  /* YIELD */
A68_VC  VRKACTR;  /* clause result */
A68_VC  WRKACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(afterbang);
 /* line 221: */
{ 
SRKACTR_upb = Name.upb;
 /* line 222: */
TRKACTR = (SRKACTR_upb>0);
if ( TRKACTR )
{URKACTR = 1 ;
TRKACTR = ((*(&A_VINDEX(Name,URKACTR)))=='!');
}
if ( TRKACTR )
{ 
if ( (SRKACTR_upb>1) )
{ 
VRKACTR = A_VTRIM(WRKACTR,(Name),A_VTSCRIPT(&(WRKACTR.upb),(Name).upb,2,(Name).upb));
} 
else
{ 
VRKACTR = YRKACTR;
} 
} 
else
{ 
 /* line 223: */
VRKACTR = Name;
} 
} 
A_PROC_EXIT(afterbang);
*ReturnedValue = (VRKACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BSKACTR_rdselectname(A68_INT  Prefix, A68_INT  Rdenno, A68_VC  *ReturnedValue)
{ 
A68_108 * CSKACTR_rd;
A68_VC  DSKACTR;  /* clause result */
A68_VC  ESKACTR;  /* OPERATORS - istruct -> vector */
A68_56  FSKACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GSKACTR;  /* OPERATORS - istruct -> vector */
A68_56  HSKACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ISKACTR;  /* OPERATORS - istruct -> vector */
A68_56  JSKACTR;  /* OPERATORS - istruct -> vector */
A68_BITS  OSKACTR;  /* ADICOPS - >= */
A68_VC  QSKACTR;  /* clause result */
A68_VC  SSKACTR;  /* avoid structure result */
A68_VC  TSKACTR;  /* clause result */
A68_VC  USKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(rdselectname);
 /* line 226: */
 /* line 227: */
{ 
CSKACTR_rd = (&A_R1INDEX(XPKACTR_rds,Rdenno));
 /* line 228: */
 /* line 229: */
 /* line 230: */
switch ( Prefix )
{ 
case 1: 
 /* line 231: */
FSKACTR = (*(&(CSKACTR_rd->Prefix))) ;
DSKACTR = A_HISVEC(ESKACTR,FSKACTR,7,A68_CHAR );
break;
case 2: 
 /* line 233: */
HSKACTR = (*(&(CSKACTR_rd->Fnprefix))) ;
DSKACTR = A_HISVEC(GSKACTR,HSKACTR,7,A68_CHAR );
break;
case 3: 
 /* line 235: */
JSKACTR = (*(&(CSKACTR_rd->Envprefix))) ;
DSKACTR = A_HISVEC(ISKACTR,JSKACTR,7,A68_CHAR );
break;
default: 
WXIACTR_assert(LSKACTR, A68_FALSE);
 /* line 236: */
DSKACTR = NSKACTR;
break;
} 
 /* line 237: */
 /* line 238: */
 /* line 239: */
OSKACTR = (*(&(CSKACTR_rd->Flags))) ;
if ( A_LB_GE(OSKACTR,SQKACTR_rdopflag) )
{ 
 /* line 240: */
QSKACTR = RSKACTR;
} 
else
{ 
 /* line 241: */
RRKACTR_afterbang( (*(&(CSKACTR_rd->Name))), &SSKACTR );
QSKACTR = SSKACTR;
} 
TSKACTR = A_VC_PLUS(A_VC_PLUS(DSKACTR,A_HVEC(USKACTR,'_',A68_CHAR )),QSKACTR);
} 
A_PROC_EXIT(rdselectname);
*ReturnedValue = (TSKACTR);
return;
} 
#undef NL

A68_VOID  WSKACTR_labelfullname(A68_INT  Labno, A68_VC  *ReturnedValue)
{ 
A68_109 * XSKACTR_labinfo;
A68_VC  YSKACTR;  /* clause result */
A68_VC  ZSKACTR;  /* OPERATORS - istruct -> vector */
A68_56  ATKACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BTKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(labelfullname);
 /* line 247: */
{ 
XSKACTR_labinfo = (&A_R1INDEX(ZPKACTR_labels,Labno));
 /* line 248: */
 /* line 249: */
ATKACTR = (*(&(XSKACTR_labinfo->Prefix))) ;
YSKACTR = A_VC_PLUS(A_VC_PLUS(A_HISVEC(ZSKACTR,ATKACTR,7,A68_CHAR ),A_HVEC(BTKACTR,'_',A68_CHAR )),(*(&(XSKACTR_labinfo->Name))));
} 
A_PROC_EXIT(labelfullname);
*ReturnedValue = (YSKACTR);
return;
} 
#undef NL

A68_VOID  DTKACTR_labelbuffername(A68_INT  Labno, A68_VC  *ReturnedValue)
{ 
A68_109 * ETKACTR_labinfo;
A68_VC  FTKACTR;  /* clause result */
A68_VC  GTKACTR;  /* OPERATORS - istruct -> vector */
A68_56  HTKACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ITKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(labelbuffername);
 /* line 255: */
 /* line 256: */
{ 
ETKACTR_labinfo = (&A_R1INDEX(ZPKACTR_labels,Labno));
 /* line 257: */
 /* line 258: */
HTKACTR = (*(&((&(ETKACTR_labinfo->Label))->Name))) ;
FTKACTR = A_VC_PLUS(A_VC_PLUS(A_HISVEC(GTKACTR,HTKACTR,7,A68_CHAR ),A_HVEC(ITKACTR,'_',A68_CHAR )),(*(&(ETKACTR_labinfo->Name))));
} 
A_PROC_EXIT(labelbuffername);
*ReturnedValue = (FTKACTR);
return;
} 
#undef NL

A68_BOOL  KTKACTR_labelisset(A68_INT  Labno)
{ 
A68_BOOL  LTKACTR;  /* clause result */
A_PROC_ENTRY(labelisset);
 /* line 261: */
LTKACTR = (*(&((&((&A_R1INDEX(ZPKACTR_labels,Labno))->Label))->Set)));
A_PROC_EXIT(labelisset);
return( LTKACTR );
} 
#undef NL

A68_BOOL  NTKACTR_labelisdeclared(A68_INT  Labno)
{ 
A68_BOOL  OTKACTR;  /* clause result */
A68_BITS  PTKACTR;  /* ADICOPS - <= */
A_PROC_ENTRY(labelisdeclared);
 /* line 264: */
PTKACTR = (*(&((&A_R1INDEX(ZPKACTR_labels,Labno))->Flags))) ;
OTKACTR = A_LB_LE(VQKACTR_labdeclaredflag,PTKACTR);
A_PROC_EXIT(labelisdeclared);
return( OTKACTR );
} 
#undef NL

A68_VOID  RTKACTR_labelenviron(A68_INT  Labno, A68_78  *ReturnedValue)
{ 
A68_78  STKACTR;  /* clause result */
A_PROC_ENTRY(labelenviron);
 /* line 267: */
STKACTR = (*(&((&A_R1INDEX(ZPKACTR_labels,Labno))->Environ)));
A_PROC_EXIT(labelenviron);
*ReturnedValue = (STKACTR);
return;
} 
#undef NL

A68_VOID  UTKACTR_idfullname(A68_INT  Idno, A68_VC  *ReturnedValue)
{ 
A68_VC  VTKACTR;  /* clause result */
A68_107 * YTKACTR_id;
A68_VC  ZTKACTR;  /* avoid structure result */
A68_107 * AUKACTR_id;
A68_VC  BUKACTR;  /* avoid structure result */
A_PROC_ENTRY(idfullname);
 /* line 270: */
 /* line 274: */
{ 
 /* line 275: */
 /* line 276: */
if ( (Idno==VPKACTR_alienidno) )
{ 
VTKACTR = (*(&((&UPKACTR_alienidinfo)->Name)));
} 
else
{ 
 /* line 278: */
 /* line 280: */
if ( ((Idno==NKJACTR_noidno)|(Idno>QAAACTR_minopidno)) )
{ 
VTKACTR = XTKACTR;
} 
else
{ 
 /* line 281: */
if ( (Idno<=IAAACTR_maxidno) )
{ 
YTKACTR_id = (&A_R1INDEX(WPKACTR_ids,Idno));
 /* line 282: */
 /* line 284: */
VTKACTR = (*(&(YTKACTR_id->C_name)));
} 
else
{ 
 /* line 285: */
if ( (Idno<=KAAACTR_maxrdno) )
{ 
 /* line 287: */
BSKACTR_rdselectname( 1, Idno, &ZTKACTR );
VTKACTR = ZTKACTR;
} 
else
{ 
 /* line 288: */
if ( (Idno<=MAAACTR_maxlibid) )
{ 
AUKACTR_id = (&A_R1INDEX(YPKACTR_libraryids,Idno));
 /* line 289: */
 /* line 291: */
 /* line 292: */
VTKACTR = (*(&(AUKACTR_id->C_name)));
} 
else
{ 
 /* line 293: */
 /* line 294: */
DTKACTR_labelbuffername( (Idno-OAAACTR_minlab), &BUKACTR );
VTKACTR = BUKACTR;
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(idfullname);
*ReturnedValue = (VTKACTR);
return;
} 
#undef NL

A68_VOID  DUKACTR_rdfnname(A68_INT  Rdenno, A68_VC  *ReturnedValue)
{ 
A68_VC  EUKACTR;  /* clause result */
A68_VC  FUKACTR;  /* avoid structure result */
A_PROC_ENTRY(rdfnname);
 /* line 297: */
 /* line 298: */
 /* line 299: */
if ( ((Rdenno>=JAAACTR_minrdno)&(Rdenno<=KAAACTR_maxrdno)) )
{ 
 /* line 300: */
BSKACTR_rdselectname( 2, Rdenno, &FUKACTR );
EUKACTR = FUKACTR;
} 
else
{ 
WXIACTR_assert(HUKACTR, A68_FALSE);
 /* line 301: */
EUKACTR = JUKACTR;
} 
A_PROC_EXIT(rdfnname);
*ReturnedValue = (EUKACTR);
return;
} 
#undef NL

A68_VOID  LUKACTR_rdenvname(A68_INT  Rdenno, A68_VC  *ReturnedValue)
{ 
A68_VC  MUKACTR;  /* clause result */
A68_VC  NUKACTR;  /* avoid structure result */
A_PROC_ENTRY(rdenvname);
 /* line 304: */
 /* line 305: */
 /* line 306: */
if ( ((Rdenno>=JAAACTR_minrdno)&(Rdenno<=KAAACTR_maxrdno)) )
{ 
 /* line 307: */
BSKACTR_rdselectname( 3, Rdenno, &NUKACTR );
MUKACTR = NUKACTR;
} 
else
{ 
WXIACTR_assert(PUKACTR, A68_FALSE);
 /* line 308: */
MUKACTR = RUKACTR;
} 
A_PROC_EXIT(rdenvname);
*ReturnedValue = (MUKACTR);
return;
} 
#undef NL

A68_BOOL  TUKACTR_standopsym(A68_VC  Idname)
{ 
A68_BOOL  WUKACTR;  /* clause result */
A68_INT  ZUKACTR;  /* YIELD */
A_PROC_ENTRY(standopsym);
 /* line 314: */
 /* line 315: */
 /* line 316: */
if ( (Idname.upb<=0) )
{ 
WXIACTR_assert(VUKACTR, A68_FALSE);
 /* line 317: */
 /* line 318: */
WUKACTR = A68_FALSE;
} 
else
{ 
 /* line 319: */
ZUKACTR = 1 ;
WUKACTR = QRAAOSF_charinstring(A_VINDEX(Idname,ZUKACTR), A_LOC(A68_INT ), YUKACTR);
} 
A_PROC_EXIT(standopsym);
return( WUKACTR );
} 
#undef NL
 /* line 324: */

A68_VOID  FVKACTR_initialiseids(A68_INT  No_decnos, A68_INT  No_libinds, A68_INT  No_labels, A68_INT  No_rdennos, A68_126  Keptdecnos)
{ 
A68_128  HVKACTR_generator;   /* proc value of non-global proc */
A68_110  MVKACTR;  /* avoid structure result */
A68_129  OVKACTR_generator;   /* proc value of non-global proc */
A68_111  TVKACTR;  /* avoid structure result */
A68_128  VVKACTR_generator;   /* proc value of non-global proc */
A68_110  AWKACTR;  /* avoid structure result */
A68_130  CWKACTR_generator;   /* proc value of non-global proc */
A68_112  HWKACTR;  /* avoid structure result */
A68_107 * IWKACTR_id;
A68_INT  JWKACTR;  /* forall loop counter */
A68_BITS * KWKACTR;  /* YIELD */
A68_108 * LWKACTR_rd;
A68_INT  MWKACTR;  /* forall loop counter */
A68_BITS * NWKACTR;  /* YIELD */
A68_107 * OWKACTR_id;
A68_INT  PWKACTR;  /* forall loop counter */
A68_BITS * QWKACTR;  /* YIELD */
A68_109 * RWKACTR_lab;
A68_INT  SWKACTR;  /* forall loop counter */
A68_BITS * TWKACTR;  /* YIELD */
A68_126  UWKACTR;  /* OPERATORS - nil -> mode */
A68_126  VWKACTR;  /* != */
A68_INT * YWKACTR_decno;
A68_INT  ZWKACTR;  /* forall loop counter */
A68_VC  AXKACTR;  /* avoid structure result */
A68_BITS * BXKACTR;  /* YIELD */
A68_BITS * CXKACTR;  /* YIELD */
A68_BITS * DXKACTR;  /* YIELD */
A68_BITS * EXKACTR;  /* YIELD */
A68_78  HXKACTR;  /* collateral clause result */
A68_78 * IXKACTR;  /* YIELD */
A68_78  JXKACTR;  /* collateral clause result */
A68_78 * KXKACTR;  /* YIELD */
A_PROC_ENTRY(initialiseids);
 /* line 325: */
 /* line 326: */
{ 
A_CLOSURE( HVKACTR_generator, IVKACTR_generator, JVKACTR_generator );
(( JVKACTR_generator * ) ( HVKACTR_generator.nonlocals )) -> No_decnos = No_decnos;
A_CALLPROC(HVKACTR_generator,(A68_FALSE, &MVKACTR),(A68_FALSE, &MVKACTR,(HVKACTR_generator).nonlocals));
WPKACTR_ids = MVKACTR;
 /* line 327: */
A_CLOSURE( OVKACTR_generator, PVKACTR_generator, QVKACTR_generator );
(( QVKACTR_generator * ) ( OVKACTR_generator.nonlocals )) -> No_rdennos = No_rdennos;
A_CALLPROC(OVKACTR_generator,(A68_FALSE, &TVKACTR),(A68_FALSE, &TVKACTR,(OVKACTR_generator).nonlocals));
XPKACTR_rds = TVKACTR;
 /* line 328: */
A_CLOSURE( VVKACTR_generator, WVKACTR_generator, XVKACTR_generator );
(( XVKACTR_generator * ) ( VVKACTR_generator.nonlocals )) -> No_libinds = No_libinds;
A_CALLPROC(VVKACTR_generator,(A68_FALSE, &AWKACTR),(A68_FALSE, &AWKACTR,(VVKACTR_generator).nonlocals));
YPKACTR_libraryids = AWKACTR;
 /* line 329: */
A_CLOSURE( CWKACTR_generator, DWKACTR_generator, EWKACTR_generator );
(( EWKACTR_generator * ) ( CWKACTR_generator.nonlocals )) -> No_labels = No_labels;
A_CALLPROC(CWKACTR_generator,(A68_FALSE, &HWKACTR),(A68_FALSE, &HWKACTR,(CWKACTR_generator).nonlocals));
ZPKACTR_labels = HWKACTR;
 /* line 331: */
JWKACTR = WPKACTR_ids.dim[0].upb - WPKACTR_ids.dim[0].lwb;
IWKACTR_id = WPKACTR_ids.data;
for (;JWKACTR-- >= 0;
(IWKACTR_id += WPKACTR_ids.dim[0].stride
) )
{
KWKACTR = (&(IWKACTR_id->Flags)) ;
(*KWKACTR) = AQKACTR_idnoflags;
}
 /* line 332: */
MWKACTR = XPKACTR_rds.dim[0].upb - XPKACTR_rds.dim[0].lwb;
LWKACTR_rd = XPKACTR_rds.data;
for (;MWKACTR-- >= 0;
(LWKACTR_rd += XPKACTR_rds.dim[0].stride
) )
{
NWKACTR = (&(LWKACTR_rd->Flags)) ;
(*NWKACTR) = OQKACTR_rdnoflags;
}
 /* line 333: */
PWKACTR = YPKACTR_libraryids.dim[0].upb - YPKACTR_libraryids.dim[0].lwb;
OWKACTR_id = YPKACTR_libraryids.data;
for (;PWKACTR-- >= 0;
(OWKACTR_id += YPKACTR_libraryids.dim[0].stride
) )
{
QWKACTR = (&(OWKACTR_id->Flags)) ;
(*QWKACTR) = AQKACTR_idnoflags;
}
 /* line 334: */
SWKACTR = ZPKACTR_labels.dim[0].upb - ZPKACTR_labels.dim[0].lwb;
RWKACTR_lab = ZPKACTR_labels.data;
for (;SWKACTR-- >= 0;
(RWKACTR_lab += ZPKACTR_labels.dim[0].stride
) )
{
TWKACTR = (&(RWKACTR_lab->Flags)) ;
(*TWKACTR) = UQKACTR_labnoflags;
}
 /* line 342: */
 /* line 343: */
 /* line 344: */
VWKACTR = A_R1VAC(UWKACTR) ;
if ( ! A_RSTRUCTCOMP(Keptdecnos,VWKACTR) )
{ 
FRKACTR_debugmessage(XWKACTR);
 /* line 346: */
 /* line 347: */
ZWKACTR = Keptdecnos.dim[0].upb - Keptdecnos.dim[0].lwb;
YWKACTR_decno = Keptdecnos.data;
for (;ZWKACTR-- >= 0;
(YWKACTR_decno += Keptdecnos.dim[0].stride
) )
{
 /* line 348: */
ROAAOSF_whole( (*YWKACTR_decno), 0, &AXKACTR );
FRKACTR_debugmessage(AXKACTR);
 /* line 349: */
 /* line 350: */
if ( ((*YWKACTR_decno)<=IAAACTR_maxidno) )
{ 
 /* line 351: */
BXKACTR = (&((&A_R1INDEX(WPKACTR_ids,(*YWKACTR_decno)))->Flags)) ;
(*BXKACTR) = CQKACTR_idkeptflag;
} 
else
{ 
 /* line 352: */
if ( ((*YWKACTR_decno)<=KAAACTR_maxrdno) )
{ 
 /* line 353: */
CXKACTR = (&((&A_R1INDEX(XPKACTR_rds,(*YWKACTR_decno)))->Flags)) ;
(*CXKACTR) = PQKACTR_rdkeptflag;
} 
else
{ 
 /* line 354: */
if ( ((*YWKACTR_decno)<=MAAACTR_maxlibid) )
{ 
 /* line 355: */
DXKACTR = (&((&A_R1INDEX(YPKACTR_libraryids,(*YWKACTR_decno)))->Flags)) ;
(*DXKACTR) = CQKACTR_idkeptflag;
} 
else
{ 
 /* line 356: */
 /* line 357: */
if ( ((*YWKACTR_decno)<=TAAACTR_maxkeptgeneratorproc) )
{ 
(*YWKACTR_decno)-=NAAACTR_keptgeneratorproccorrection;
 /* line 358: */
 /* line 360: */
EXKACTR = (&((&A_R1INDEX(WPKACTR_ids,(*YWKACTR_decno)))->Flags)) ;
(*EXKACTR) = (A68_BITS )(CQKACTR_idkeptflag|KQKACTR_idkeptgenprocflag);
} 
else
{ 
 /* line 361: */
 /* line 362: */
WXIACTR_assert(GXKACTR, A68_FALSE);
} 
} 
} 
} 
}
 /* line 363: */
} 
 /* line 365: */
HXKACTR.Level = 0;
HXKACTR.Block = 0;
IXKACTR = (&((&A_R1INDEX(WPKACTR_ids,GAAACTR_globalidno))->Environ)) ;
(*IXKACTR) = HXKACTR;
 /* line 366: */
JXKACTR.Level = 0;
 /* line 367: */
JXKACTR.Block = 0;
KXKACTR = (&((&A_R1INDEX(WPKACTR_ids,HAAACTR_minidno))->Environ)) ;
(*KXKACTR) = JXKACTR;
} 
A_PROC_EXIT(initialiseids);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void PPKACTR(void)   /* initialise DECS idtable */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","-dir",".","idtable.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","./moduletracer.m","./incvalue.m","./incinstallation.m","./incid.m","./incenviron.m","./environment.m","./centities.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCHACTR();   /* USE moduletracer */
GKJACTR();   /* USE incvalue */
ODAACTR();   /* USE incinstallation */
BAAACTR();   /* USE incid */
AHAACTR();   /* USE incenviron */
HPIACTR();   /* USE environment */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/src/idtable.a68";
A_config.translation_time = "Sun Apr 18 20:07:52 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "OPKACTR (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:52 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS idtable);
UEAALIB_a68config(LGAALIB_configinfo, TPKACTR);
 /* line 95: */
 /* line 124: */
 /* line 142: */
 /* line 143: */
VPKACTR_alienidno = (-1);
 /* line 147: */
 /* line 148: */
 /* line 149: */
 /* line 150: */
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 158: */
 /* line 159: */
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 163: */
 /* line 165: */
 /* line 166: */
 /* line 167: */
 /* line 169: */
NQKACTR_idpresetflags = (A68_BITS )(CQKACTR_idkeptflag|KQKACTR_idkeptgenprocflag);
 /* line 174: */
 /* line 175: */
 /* line 176: */
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 183: */
 /* line 184: */
 /* line 185: */
 /* line 187: */
 /* line 195: */
 /* line 203: */
 /* line 220: */
 /* line 225: */
 /* line 243: */
 /* line 251: */
 /* line 260: */
 /* line 263: */
 /* line 266: */
 /* line 269: */
 /* line 296: */
 /* line 303: */
 /* line 310: */
 /* line 321: */
 /* line 322: */
 /* line 369: */
 /* line 372: */
 /* line 374: */
 /* line 376: */
 /* line 378: */
 /* line 391: */
/*SKIP*/;
A_PROC_EXIT(DECS idtable);
} 
#undef NL
/* end of translation of idtable.a68 */
