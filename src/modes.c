/* UNAME:CNMACTR */
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
struct A68t54{
A68_INT  Rdenno;
A_PAD_INT(PAD_1)
A68_INT  Mode;
A_PAD_INT(PAD_2)
A68_INT  Nods;
A_PAD_INT(PAD_3)
A68_INT  Deflex;
A_PAD_INT(PAD_4)
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t56);
typedef struct A68t56  A68_56 ;    /* STRUCT 32 CHAR */
struct A68t55{
struct A68t56  N;
A_PAD_ISTRUCT(A68_56 ,PAD_5)
struct A68t56  F;
A_PAD_ISTRUCT(A68_56 ,PAD_6)
A68_INT  Level;
A_PAD_INT(PAD_7)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(MODE56,MODE56,INT)  */
struct A68t57{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_8)
A68_INT  Decno;
A_PAD_INT(PAD_9)
A68_INT  Level;
A_PAD_INT(PAD_10)
A68_INT  Mode;
A_PAD_INT(PAD_11)
A68_INT  Scope;
A_PAD_INT(PAD_12)
struct A68t57 * Rest;
};
typedef struct A68t57  A68_57 ;    /* STRUCT(MODE56,INT,INT,INT,INT,REF MODE57)  */
struct A68t58{
A68_INT  Rdenno;
A_PAD_INT(PAD_13)
A68_INT  Imode;
A_PAD_INT(PAD_14)
A68_INT  Length;
A_PAD_INT(PAD_15)
A68_INT  Deflex;
A_PAD_INT(PAD_16)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t67{
A68_INT  Mode;
A_PAD_INT(PAD_17)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT)  */
struct A68t59 { A68_INT mode; union {
A68_INT  mode1;
struct A68t60 * mode2;
struct A68t61 * mode3;
struct A68t62 * mode4;
struct A68t58 * mode5;
struct A68t63 * mode6;
struct A68t64 * mode7;
struct A68t54 * mode8;
struct A68t65 * mode9;
struct A68t66 * mode10;
struct A68t67  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t59  A68_59 ;    /* UNION(INT,REF MODE60,REF MODE61,REF MODE62,REF MODE58,REF MODE63,REF MODE64,REF MODE54,REF MODE65,REF MODE66,MODE67)  */
struct A68t60{
A68_INT  Rdenno;
A_PAD_INT(PAD_18)
struct A68t71 * Modelist;
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT,REF MODE71)  */
struct A68t61{
A68_INT  Deproc;
A_PAD_INT(PAD_19)
struct A68t71 * Pars;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,REF MODE71)  */
struct A68t62{
A68_INT  Rdenno;
A_PAD_INT(PAD_20)
A68_INT  Deflex;
A_PAD_INT(PAD_21)
struct A68t70 * Sels;
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT,INT,REF MODE70)  */
struct A68t63{
A68_INT  Deproc;
A_PAD_INT(PAD_22)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT)  */
struct A68t64{
A68_INT  Rdenno;
A_PAD_INT(PAD_23)
A68_INT  Vecmode;
A_PAD_INT(PAD_24)
A68_INT  Deflex;
A_PAD_INT(PAD_25)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,INT,INT)  */
struct A68t65{
A68_INT  Mode;
A_PAD_INT(PAD_26)
struct A68t69 * Stenlist;
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT,REF MODE69)  */
struct A68t66{
A68_INT  Mode;
A_PAD_INT(PAD_27)
A68_INT  Modeproc;
A_PAD_INT(PAD_28)
struct A68t68 * El;
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT,INT,REF MODE68)  */
struct A68t68{
struct A68t66 * Am;
struct A68t68 * Rest;
};
typedef struct A68t68  A68_68 ;    /* STRUCT(REF MODE66,REF MODE68)  */
struct A68t69{
A68_INT  Mode;
A_PAD_INT(PAD_29)
A68_INT  Rdenno;
A_PAD_INT(PAD_30)
struct A68t69 * Rest;
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT,INT,REF MODE69)  */
struct A68t70{
A68_INT  Mode;
A_PAD_INT(PAD_31)
A68_INT  Fieldno;
A_PAD_INT(PAD_32)
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_33)
struct A68t70 * Rest;
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,INT,MODE56,REF MODE70)  */
struct A68t71{
A68_INT  Mode;
A_PAD_INT(PAD_34)
struct A68t71 * Rest;
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT,REF MODE71)  */
A_ISTRUCT(A68_CHAR ,7,A68t72);
typedef struct A68t72  A68_72 ;    /* STRUCT 7 CHAR */
A_VECTOR(struct A68t76 ,A68t75);
typedef struct A68t75  A68_75 ;    /* VECTOR [] MODE76 */
A_VECTOR(struct A68t55 ,A68t82);
typedef struct A68t82  A68_82 ;    /* VECTOR [] MODE55 */
struct A68t81 { A68_INT mode; union {
A68_VC  mode1;
struct A68t82  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t81  A68_81 ;    /* UNION(REF MODE26,REF MODE82)  */
struct A68t77{
struct A68t56  F;
A_PAD_ISTRUCT(A68_56 ,PAD_35)
A68_INT  No;
A_PAD_INT(PAD_36)
A68_INT  Nl;
A_PAD_INT(PAD_37)
A68_INT  Ng;
A_PAD_INT(PAD_38)
struct A68t81  U;
};
typedef struct A68t77  A68_77 ;    /* STRUCT(MODE56,INT,INT,INT,MODE81)  */
A_VECTOR(struct A68t80 ,A68t78);
typedef struct A68t78  A68_78 ;    /* VECTOR [] MODE80 */
struct A68t80{
struct A68t72  Prefix;
A_PAD_ISTRUCT(A68_72 ,PAD_39)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_40)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_41)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_42)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_43)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_44)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t80  A68_80 ;    /* STRUCT(MODE72,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t72 ,A68t79);
typedef struct A68t79  A68_79 ;    /* VECTOR [] MODE72 */
struct A68t76{
struct A68t77  Xs;
struct A68t72  Ys;
A_PAD_ISTRUCT(A68_72 ,PAD_45)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_46)
struct A68t78  Keptinfo;
struct A68t79  Cnames;
};
typedef struct A68t76  A68_76 ;    /* STRUCT(MODE77,MODE72,LONG INT,REF MODE78,REF MODE79)  */
struct A68t74{
struct A68t72  Uname;
A_PAD_ISTRUCT(A68_72 ,PAD_47)
struct A68t72  Lname;
A_PAD_ISTRUCT(A68_72 ,PAD_48)
struct A68t72  Gname;
A_PAD_ISTRUCT(A68_72 ,PAD_49)
struct A68t75  Specs;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(MODE72,MODE72,MODE72,REF MODE75)  */
struct A68t73{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_50)
struct A68t74  Ym;
struct A68t56  Formal;
A_PAD_ISTRUCT(A68_56 ,PAD_51)
struct A68t72  Ys;
A_PAD_ISTRUCT(A68_72 ,PAD_52)
A68_INT  Level;
A_PAD_INT(PAD_53)
A68_INT  Ownlevel;
A_PAD_INT(PAD_54)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(MODE56,MODE74,MODE56,MODE72,INT,INT)  */
struct A68t83{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_55)
struct A68t55  L;
struct A68t55  G;
A68_INT  Type;
A_PAD_INT(PAD_56)
};
typedef struct A68t83  A68_83 ;    /* STRUCT(MODE56,MODE55,MODE55,INT)  */
struct A68t84{
A68_INT  Norden;
A_PAD_INT(PAD_57)
A68_INT  Nomodes;
A_PAD_INT(PAD_58)
A68_INT  Nolabs;
A_PAD_INT(PAD_59)
A68_INT  Nodecnos;
A_PAD_INT(PAD_60)
A68_INT  Nomodules;
A_PAD_INT(PAD_61)
A68_INT  Nolibinds;
A_PAD_INT(PAD_62)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t85{
A68_INT  Type;
A_PAD_INT(PAD_63)
A68_INT  Moduleno;
A_PAD_INT(PAD_64)
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_65)
struct A68t74  Ym;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT,INT,MODE56,MODE74)  */
struct A68t86{
struct A68t83  Xmi;
struct A68t74  Ym;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(MODE83,MODE74)  */
struct A68t87{
struct A68t77  Xs;
struct A68t72  Ys;
A_PAD_ISTRUCT(A68_72 ,PAD_66)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(MODE77,MODE72)  */

A_PROCEDURE(A68_INT ,A68t88,(A68_INT ),(A68_INT ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t89,(A68_INT ),(A68_INT ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(INT) BOOL */
struct A68t90{
A68_INT  Level;
A_PAD_INT(PAD_67)
A68_INT  Block;
A_PAD_INT(PAD_68)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t90 *),(struct A68t90 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC MODE90 */

A_PROCEDURE(A68_INT ,A68t92,(void),(void *));
typedef struct A68t92  A68_92 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t93,(A68_INT ),(A68_INT ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(void),(void *));
typedef struct A68t94  A68_94 ;    /* PROC VOID */

A_PROCEDURE(A68_BOOL ,A68t95,(void),(void *));
typedef struct A68t95  A68_95 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t96,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t97,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t98,(struct A68t90 ,struct A68t90 ),(struct A68t90 ,struct A68t90 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE90,MODE90) BOOL */

A_PROCEDURE(A68_BOOL ,A68t99,(struct A68t90 ),(struct A68t90 ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE90) BOOL */

A_PROCEDURE(A68_VOID ,A68t100,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t101,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t102,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(INT) REF MODE26 */
struct A68t104 ;

A_PROCEDURE(A68_VOID ,A68t103,(A68_INT ,struct A68t104 ),(A68_INT ,struct A68t104 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT,MODE104) VOID */
A_ROW(A68_VC ,A68t104,1);
typedef struct A68t104  A68_104 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t105,(void),(void *));
typedef struct A68t105  A68_105 ;    /* PROC BITS */
struct A68t106{
A68_INT  Cfile;
A_PAD_INT(PAD_69)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT)  */
struct A68t107{
A68_INT  Seedfile;
A_PAD_INT(PAD_70)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT)  */
struct A68t108 { A68_INT mode; union {
struct A68t106  mode1;
struct A68t107  mode2;
struct A68t72  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t108  A68_108 ;    /* UNION(MODE106,MODE107,MODE72,VOID)  */

A_PROCEDURE(A68_VOID ,A68t109,(A68_VC ),(A68_VC ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t110,1);
typedef struct A68t110  A68_110 ;    /* [] BOOL */
struct A68t111{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_71)
A68_VC  Sourcefile;
struct A68t72  Nameseed;
A_PAD_ISTRUCT(A68_72 ,PAD_72)
struct A68t108  Nameseedorigin;
struct A68t112 * Used_modules;
A68_VC  Commandline;
struct A68t113 * Environment;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE72,MODE108,REF MODE112,REF MODE26,REF MODE113)  */
struct A68t112{
A68_VC  Modinfo_file;
struct A68t112 * Next;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(REF MODE26,REF MODE112)  */
struct A68t113{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t113 * Next;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE113)  */
struct A68t115 ;
struct A68t116 ;

A_PROCEDURE(struct A68t115 *,A68t114,(A68_VC ,struct A68t116 *,A68_VC *),(A68_VC ,struct A68t116 *,A68_VC *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26,REF MODE116,REF REF MODE26) REF MODE115 */
struct A68t115{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t116{
A68_VC  Dir;
struct A68t116 * Next;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(REF MODE26,REF MODE116)  */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(struct A68t72 ,A68t118,(void),(void *));
typedef struct A68t118  A68_118 ;    /* PROC MODE72 */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t108 ,A68_VC *),(struct A68t108 ,A68_VC *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE108) MODE26 */
struct A68t121{
struct A68t122 * Value;
struct A68t123 * End;
A68_INT  Type;
A_PAD_INT(PAD_73)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(REF MODE122,REF MODE123,INT)  */
struct A68t125{
A68_INT  Rdenno;
A_PAD_INT(PAD_74)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT)  */
struct A68t126{
A68_INT  Idno;
A_PAD_INT(PAD_75)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT)  */
struct A68t127{
struct A68t72  Name;
A_PAD_ISTRUCT(A68_72 ,PAD_76)
A68_INT  Mode;
A_PAD_INT(PAD_77)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE72,INT)  */
struct A68t128{
A68_INT  Labno;
A_PAD_INT(PAD_78)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT)  */
struct A68t129{
A68_INT  Nse;
A_PAD_INT(PAD_79)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT)  */
struct A68t130{
A68_INT  Fn;
A_PAD_INT(PAD_80)
A68_INT  Param;
A_PAD_INT(PAD_81)
struct A68t131 * Operands;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,INT,REF MODE131)  */
struct A68t124 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t125  mode2;
struct A68t126  mode4;
struct A68t127  mode5;
A68_VC  mode6;
struct A68t128  mode7;
struct A68t129  mode8;
struct A68t130  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t124  A68_124 ;    /* UNION(LONG BITS,MODE125,VOID,MODE126,MODE127,MODE26,MODE128,MODE129,MODE130)  */
struct A68t122{
A68_INT  Mode;
A_PAD_INT(PAD_82)
A68_BITS  Info;
A_PAD_BITS(PAD_83)
struct A68t124  Extra;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,BITS,MODE124)  */
struct A68t123{
struct A68t72  Name;
A_PAD_ISTRUCT(A68_72 ,PAD_84)
A68_BOOL  Set;
A_PAD_BOOL(PAD_85)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(MODE72,BOOL)  */
struct A68t131{
struct A68t122  Value;
struct A68t131 * Rest;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(MODE122,REF MODE131)  */
struct A68t133 ;

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t133 ),(struct A68t133 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE133) VOID */
A_VECTOR(struct A68t134 ,A68t133);
typedef struct A68t133  A68_133 ;    /* VECTOR [] MODE134 */
struct A68t134 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t134  A68_134 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t136 ;

A_PROCEDURE(A68_VOID ,A68t135,(struct A68t136 ,A68_INT ),(struct A68t136 ,A68_INT ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE136,INT) VOID */
A_VECTOR(struct A68t137 ,A68t136);
typedef struct A68t136  A68_136 ;    /* VECTOR [] MODE137 */
struct A68t137 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t137  A68_137 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_BOOL ,A68t138,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t139,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t140,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE94) VOID */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE109) VOID */

A_PROCEDURE(A68_VOID ,A68t143,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t144);
typedef struct A68t144  A68_144 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_VOID ,A68t145,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,5,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 3 CHAR */
struct A68t149{
A68_INT  Mode;
A_PAD_INT(PAD_86)
A68_INT  Offset;
A_PAD_INT(PAD_87)
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_88)
};
typedef struct A68t149  A68_149 ;    /* STRUCT(INT,INT,MODE56)  */
A_VECTOR(A68_INT ,A68t151);
typedef struct A68t151  A68_151 ;    /* VECTOR [] INT */
A_VECTOR(struct A68t149 ,A68t152);
typedef struct A68t152  A68_152 ;    /* VECTOR [] MODE149 */
struct A68t150 { A68_INT mode; union {
A68_INT  mode1;
struct A68t151  mode2;
struct A68t152  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t150  A68_150 ;    /* UNION(INT,REF MODE151,REF MODE152,VOID)  */
struct A68t153{
A68_INT  Type;
A_PAD_INT(PAD_89)
A68_INT  Auxmode;
A_PAD_INT(PAD_90)
A68_INT  Deflexedmode;
A_PAD_INT(PAD_91)
A68_BOOL  Finalised;
A_PAD_BOOL(PAD_92)
struct A68t150  Extra;
A68_BITS  Flags;
A_PAD_BITS(PAD_93)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,INT,INT,BOOL,MODE150,BITS)  */
struct A68t154{
A68_INT  Parameters;
A_PAD_INT(PAD_94)
A68_INT  Result;
A_PAD_INT(PAD_95)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_96)
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT,INT,BOOL)  */
A_ROW(struct A68t153 ,A68t155,1);
typedef struct A68t155  A68_155 ;    /* [] MODE153 */

A_PROCEDURE(A68_BITS ,A68t156,(A68_INT ),(A68_INT ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(INT) BITS */

A_PROCEDURE(A68_VOID ,A68t157,(A68_INT ,struct A68t154 *),(A68_INT ,struct A68t154 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(INT) MODE154 */
A_ISTRUCT(A68_CHAR ,31,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 45 CHAR */

A_PROCEDURE(A68_VOID ,A68t160,(A68_INT ,struct A68t151 *),(A68_INT ,struct A68t151 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(INT) REF MODE151 */
A_ISTRUCT(A68_CHAR ,19,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_VOID ,A68t163,(A68_INT ,struct A68t152 *),(A68_INT ,struct A68t152 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(INT) REF MODE152 */
A_ISTRUCT(A68_CHAR ,42,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 49 CHAR */
struct A68t166{
A68_INT  Thismode;
A_PAD_INT(PAD_97)
struct A68t151  Auxmode;
A68_INT  Dims;
A_PAD_INT(PAD_98)
struct A68t166 * Next;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT,REF MODE151,INT,REF MODE166)  */

A_PROCEDURE(A68_VOID ,A68t167,(A68_INT ,struct A68t151 ,A68_INT ,struct A68t166 **),(A68_INT ,struct A68t151 ,A68_INT ,struct A68t166 **,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT,MODE151,INT,REF REF MODE166) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(A68_BOOL ,struct A68t151 *),(A68_BOOL ,struct A68t151 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(BOOL) MODE151 */

A_PROCEDURE(A68_BOOL ,A68t169,(struct A68t151 ,struct A68t151 ),(struct A68t151 ,struct A68t151 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE151,MODE151) BOOL */

A_PROCEDURE(A68_INT ,A68t170,(A68_INT ,struct A68t151 ,A68_INT ),(A68_INT ,struct A68t151 ,A68_INT ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT,MODE151,INT) INT */
A_ISTRUCT(A68_CHAR ,28,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 36 CHAR */
A_VECTOR(struct A68t56 ,A68t173);
typedef struct A68t173  A68_173 ;    /* VECTOR [] MODE56 */

A_PROCEDURE(A68_VOID ,A68t174,(A68_BOOL ,struct A68t173 *),(A68_BOOL ,struct A68t173 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(BOOL) MODE173 */
A_ISTRUCT(A68_CHAR ,54,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 54 CHAR */

A_PROCEDURE(A68_INT ,A68t176,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(INT,BOOL) INT */
A_ISTRUCT(A68_CHAR ,46,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,57,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t151 ,A68_VC *),(struct A68t151 ,A68_VC *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE151) MODE26 */
#define A68_182  A68_VC 
#define A68t182 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t152 ,A68_VC *),(struct A68t152 ,A68_VC *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE152) MODE26 */

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t149 *,A68_VC *),(struct A68t149 *,A68_VC *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE149) MODE26 */

A_PROCEDURE(A68_VOID ,A68t185,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(INT,INT) MODE26 */
A_ISTRUCT(A68_CHAR ,18,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_VOID ,A68t191,(A68_INT ,A68_BOOL ,A68_VC *),(A68_INT ,A68_BOOL ,A68_VC *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(INT,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,11,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(struct A68t137 ,6,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 6 MODE137 */
A_ISTRUCT(A68_CHAR ,14,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t195,(A68_INT ,A68_INT ,A68_BOOL ),(A68_INT ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(INT,INT,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t137 ,7,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 7 MODE137 */
A_ISTRUCT(A68_CHAR ,12,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(struct A68t137 ,12,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 12 MODE137 */
A_ISTRUCT(struct A68t137 ,3,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 3 MODE137 */
A_ISTRUCT(struct A68t137 ,2,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 2 MODE137 */
A_ISTRUCT(A68_CHAR ,9,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(struct A68t137 ,4,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 4 MODE137 */
A_ISTRUCT(struct A68t137 ,5,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 5 MODE137 */
A_ISTRUCT(A68_CHAR ,43,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 10 CHAR */
A_ROW(struct A68t59 ,A68t208,1);
typedef struct A68t208  A68_208 ;    /* [] MODE59 */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t208 ,A68_INT ),(struct A68t208 ,A68_INT ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE208,INT) VOID */
A_ISTRUCT(A68_CHAR ,27,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 27 CHAR */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t71 *,struct A68t151 *),(struct A68t71 *,struct A68t151 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE71) REF MODE151 */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t70 *,struct A68t152 *),(struct A68t70 *,struct A68t152 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF MODE70) REF MODE152 */

A_PROCEDURE(A68_VOID ,A68t213,(A68_BOOL ,struct A68t152 *),(A68_BOOL ,struct A68t152 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(BOOL) MODE152 */

A_PROCEDURE(A68_VOID ,A68t214,(A68_BOOL ,struct A68t155 *),(A68_BOOL ,struct A68t155 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(BOOL) MODE155 */

A_PROCEDURE(A68_VOID ,A68t215,(A68_INT ,A68_VC ,struct A68t127 *),(A68_INT ,A68_VC ,struct A68t127 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(INT,MODE26) MODE127 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t136 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from incvalue --- */
/* --- End of imports from incvalue --- */


/* --- Imports from uniquenameserver --- */
extern A68_72  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from incmode --- */
#define AFAACTR_bitsmode 11
#define WEAACTR_boolmode 7
#define XEAACTR_charmode 8
#define MFAACTR_complmode 23
#define VEAACTR_faultmode 6
#define UFAACTR_firstnonfixedmode 31
#define MEAACTR_flexrow 9
#define NEAACTR_flexvector 10
#define TEAACTR_gotomode 4
#define EFAACTR_intmode 15
#define JEAACTR_istruct 6
#define BFAACTR_longbitsmode 12
#define NFAACTR_longcomplmode 24
#define FFAACTR_longintmode 16
#define CFAACTR_longlongbitsmode 13
#define OFAACTR_longlongcomplmode 25
#define GFAACTR_longlongintmode 17
#define KFAACTR_longlongrealmode 21
#define JFAACTR_longrealmode 20
#define PEAACTR_nomode 0
#define EEAACTR_primitive 1
#define FEAACTR_proc 2
#define GEAACTR_procp 3
#define IFAACTR_realmode 19
extern A68_INT  WFAACTR_refrefmark;
#define VFAACTR_refmark 1024
#define KEAACTR_row 7
#define ZEAACTR_shortbitsmode 10
#define LFAACTR_shortcomplmode 22
#define DFAACTR_shortintmode 14
#define HFAACTR_shortrealmode 18
#define OEAACTR_straight 11
#define IEAACTR_struct 5
#define HEAACTR_union 4
#define LEAACTR_vector 8
#define PFAACTR_vectorrowofcharmode 26
#define UEAACTR_voidmode 5
#define SFAACTR_xtypemode 29
#define TFAACTR_ytypemode 30
/* --- End of imports from incmode --- */


/* --- Imports from incinstallation --- */
/* --- End of imports from incinstallation --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_BOOL  MQIACTR_longlongoption;
extern A68_VOID  KDHACTR_message(A68_INT ,A68_VC *);
extern A68_VOID  SXIACTR_terminalerror(A68_INT );
extern A68_BOOL  AQIACTR_verboseoption;
extern A68_BOOL  NQIACTR_nostructresultoption;
extern A68_109  MSIACTR_list;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define FSLACTR_modesstream 1
extern A68_INT  QSLACTR_locdecstream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from usefulops --- */
extern A68_VOID  RMAAOSF_scanto(A68_CHAR ,A68_VC ,A68_VC *);
extern A68_VOID  SNAAOSF_capitalised(A68_VC ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void THAACTR(void);   /* centities */
extern void BCHACTR(void);   /* moduletracer */
extern void PTLACTR(void);   /* coutput */
extern void GKJACTR(void);   /* incvalue */
extern void RHMACTR(void);   /* uniquenameserver */
extern void ZDAACTR(void);   /* incmode */
extern void ODAACTR(void);   /* incinstallation */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_144   GNMACTR = {"$Id: modes.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,HNMACTR,GNMACTR,55)
static A68_146   LNMACTR = {"modes"}; 
A_GISVEC(A68_VC ,MNMACTR,LNMACTR,5)
static A68_147   NNMACTR = {"MODES("}; 
static A68_148   ONMACTR = {"): "}; 
A_GISVEC(A68_VC ,PNMACTR,NNMACTR,6)
A_GISVEC(A68_VC ,RNMACTR,ONMACTR,3)
static A68_146   TNMACTR = {"modes"}; 
A_GISVEC(A68_VC ,VNMACTR,TNMACTR,5)
static A68_155  WNMACTR_modes;
#define XNMACTR_dynamicbit 0X4U
#define YNMACTR_needsinitbit 0X8U
#define ZNMACTR_hasdescriptors 0X10U
#define AOMACTR_typedefoutput 0X20U
#define BOMACTR_deflexoutput 0X40U
#define COMACTR_incompletetypeoutput 0X80U
static A68_158   TTMACTR = {"MODES - proc info: non-REF mode"}; 
A_GISVEC(A68_VC ,UTMACTR,TTMACTR,31)
static A68_159   WTMACTR = {"MODES - proc info: mode type is proc or procp"}; 
A_GISVEC(A68_VC ,XTMACTR,WTMACTR,45)
static A68_161   OUMACTR = {"union or procp mode"}; 
A_GISVEC(A68_VC ,PUMACTR,OUMACTR,19)
static A68_162   YUMACTR = {"istruct, row, or flex row mode"}; 
A_GISVEC(A68_VC ,ZUMACTR,YUMACTR,30)
static A68_164   HVMACTR = {"MODES - struct field: mode is not a struct"}; 
A_GISVEC(A68_VC ,IVMACTR,HVMACTR,42)
static A68_165   MVMACTR = {"MODES - struct fields: mode table is inconsistent"}; 
A_GISVEC(A68_VC ,NVMACTR,MVMACTR,49)
A68_88  SVMACTR_deproc;
A68_88  UVMACTR_elementmode;
A68_88  WVMACTR_istructlength;
A68_160  YVMACTR_constituents;
A68_160  AWMACTR_parameters;
static A68_166 * CWMACTR_rowlist;
static A68_166 * DWMACTR_vectorlist;
static A68_166 * EWMACTR_structlist;
static A68_166 * FWMACTR_unionlist;
static A68_171   RXMACTR = {"MODES - lookup: unknown list"}; 
A_GISVEC(A68_VC ,SXMACTR,RXMACTR,28)
static A68_172   ZXMACTR = {"MODES - lookup: struct fields is NIL"}; 
A_GISVEC(A68_VC ,CYMACTR,ZXMACTR,36)
static A68_172   TYMACTR = {"MODES - lookup: struct fields is NIL"}; 
A_GISVEC(A68_VC ,WYMACTR,TYMACTR,36)
static A68_175   GZMACTR = {"MODES - lookup: mode isnt row, vector, struct or union"}; 
A_GISVEC(A68_VC ,HZMACTR,GZMACTR,54)
static A68_177   HANACTR = {"MODES - find deflex mode: struct fields is NIL"}; 
A_GISVEC(A68_VC ,KANACTR,HANACTR,46)
static A68_177   BBNACTR = {"MODES - find deflex mode: struct fields is NIL"}; 
A_GISVEC(A68_VC ,EBNACTR,BBNACTR,46)
static A68_178   PBNACTR = {"MODES - find deflex mode: mode list extra is NIL"}; 
A_GISVEC(A68_VC ,SBNACTR,PBNACTR,48)
static A68_179   CCNACTR = {"MODES - find deflex mode: deflexed mode is undefined for "}; 
A_GISVEC(A68_VC ,DCNACTR,CCNACTR,57)
static A68_180   PCNACTR = {""}; 
A_GISVEC(A68_VC ,QCNACTR,PCNACTR,0)
static A68_40   SCNACTR = {"MODE"}; 
A_GISVEC(A68_VC ,TCNACTR,SCNACTR,4)
static A68_180   BDNACTR = {""}; 
A_GISVEC(A68_VC ,CDNACTR,BDNACTR,0)
static A68_186   GGNACTR = {"cannot map vacmode"}; 
A_GISVEC(A68_VC ,HGNACTR,GGNACTR,18)
static A68_161   KGNACTR = {"cannot map skipmode"}; 
A_GISVEC(A68_VC ,LGNACTR,KGNACTR,19)
static A68_148   NGNACTR = {"NIL"}; 
A_GISVEC(A68_VC ,OGNACTR,NGNACTR,3)
static A68_72   PGNACTR = {"jmp_buf"}; 
A_GISVEC(A68_VC ,QGNACTR,PGNACTR,7)
static A68_40   RGNACTR = {"VOID"}; 
A_GISVEC(A68_VC ,SGNACTR,RGNACTR,4)
static A68_187   TGNACTR = {"cannot map faultmode"}; 
A_GISVEC(A68_VC ,UGNACTR,TGNACTR,20)
static A68_40   WGNACTR = {"BOOL"}; 
A_GISVEC(A68_VC ,XGNACTR,WGNACTR,4)
static A68_40   YGNACTR = {"CHAR"}; 
A_GISVEC(A68_VC ,ZGNACTR,YGNACTR,4)
static A68_187   AHNACTR = {"FORMAT not supported"}; 
A_GISVEC(A68_VC ,BHNACTR,AHNACTR,20)
static A68_146   DHNACTR = {"SBITS"}; 
A_GISVEC(A68_VC ,EHNACTR,DHNACTR,5)
static A68_146   FHNACTR = {"LBITS"}; 
A_GISVEC(A68_VC ,GHNACTR,FHNACTR,5)
static A68_40   HHNACTR = {"BITS"}; 
A_GISVEC(A68_VC ,IHNACTR,HHNACTR,4)
static A68_146   JHNACTR = {"LBITS"}; 
A_GISVEC(A68_VC ,KHNACTR,JHNACTR,5)
static A68_146   LHNACTR = {"SBITS"}; 
A_GISVEC(A68_VC ,MHNACTR,LHNACTR,5)
static A68_147   NHNACTR = {"LLBITS"}; 
A_GISVEC(A68_VC ,OHNACTR,NHNACTR,6)
static A68_147   PHNACTR = {"SSBITS"}; 
A_GISVEC(A68_VC ,QHNACTR,PHNACTR,6)
static A68_40   RHNACTR = {"SINT"}; 
A_GISVEC(A68_VC ,SHNACTR,RHNACTR,4)
static A68_40   THNACTR = {"LINT"}; 
A_GISVEC(A68_VC ,UHNACTR,THNACTR,4)
static A68_148   VHNACTR = {"INT"}; 
A_GISVEC(A68_VC ,WHNACTR,VHNACTR,3)
static A68_40   XHNACTR = {"LINT"}; 
A_GISVEC(A68_VC ,YHNACTR,XHNACTR,4)
static A68_40   ZHNACTR = {"SINT"}; 
A_GISVEC(A68_VC ,AINACTR,ZHNACTR,4)
static A68_146   BINACTR = {"LLINT"}; 
A_GISVEC(A68_VC ,CINACTR,BINACTR,5)
static A68_146   DINACTR = {"SSINT"}; 
A_GISVEC(A68_VC ,EINACTR,DINACTR,5)
static A68_146   FINACTR = {"SREAL"}; 
A_GISVEC(A68_VC ,GINACTR,FINACTR,5)
static A68_146   HINACTR = {"LREAL"}; 
A_GISVEC(A68_VC ,IINACTR,HINACTR,5)
static A68_40   JINACTR = {"REAL"}; 
A_GISVEC(A68_VC ,KINACTR,JINACTR,4)
static A68_146   LINACTR = {"LREAL"}; 
A_GISVEC(A68_VC ,MINACTR,LINACTR,5)
static A68_146   NINACTR = {"SREAL"}; 
A_GISVEC(A68_VC ,OINACTR,NINACTR,5)
static A68_147   PINACTR = {"LLREAL"}; 
A_GISVEC(A68_VC ,QINACTR,PINACTR,6)
static A68_147   RINACTR = {"SSREAL"}; 
A_GISVEC(A68_VC ,SINACTR,RINACTR,6)
static A68_147   TINACTR = {"SCOMPL"}; 
A_GISVEC(A68_VC ,UINACTR,TINACTR,6)
static A68_147   VINACTR = {"LCOMPL"}; 
A_GISVEC(A68_VC ,WINACTR,VINACTR,6)
static A68_146   XINACTR = {"COMPL"}; 
A_GISVEC(A68_VC ,YINACTR,XINACTR,5)
static A68_147   ZINACTR = {"LCOMPL"}; 
A_GISVEC(A68_VC ,AJNACTR,ZINACTR,6)
static A68_147   BJNACTR = {"SCOMPL"}; 
A_GISVEC(A68_VC ,CJNACTR,BJNACTR,6)
static A68_72   DJNACTR = {"LLCOMPL"}; 
A_GISVEC(A68_VC ,EJNACTR,DJNACTR,7)
static A68_72   FJNACTR = {"SSCOMPL"}; 
A_GISVEC(A68_VC ,GJNACTR,FJNACTR,7)
static A68_188   HJNACTR = {"VC"}; 
A_GISVEC(A68_VC ,IJNACTR,HJNACTR,2)
static A68_188   JJNACTR = {"RC"}; 
A_GISVEC(A68_VC ,KJNACTR,JJNACTR,2)
static A68_189   LJNACTR = {"cannot map collatmode"}; 
A_GISVEC(A68_VC ,MJNACTR,LJNACTR,21)
static A68_161   OJNACTR = {"XTYPE not supported"}; 
A_GISVEC(A68_VC ,PJNACTR,OJNACTR,19)
static A68_161   RJNACTR = {"YTYPE not supported"}; 
A_GISVEC(A68_VC ,SJNACTR,RJNACTR,19)
static A68_146   UJNACTR = {"mode "}; 
static A68_190   VJNACTR = {" is not built in"}; 
A_GISVEC(A68_VC ,WJNACTR,UJNACTR,5)
A_GISVEC(A68_VC ,YJNACTR,VJNACTR,16)
static A68_40   FKNACTR = {"A68_"}; 
A_GISVEC(A68_VC ,HKNACTR,FKNACTR,4)
static A68_192   JKNACTR = {"struct A68t"}; 
A_GISVEC(A68_VC ,LKNACTR,JKNACTR,11)
static A68_40   MKNACTR = {"A68_"}; 
A_GISVEC(A68_VC ,NKNACTR,MKNACTR,4)
static A68_146   LLNACTR = {"A_SZ_"}; 
A_GISVEC(A68_VC ,NLNACTR,LLNACTR,5)
static A68_40   RLNACTR = {"A68t"}; 
A_GISVEC(A68_VC ,TLNACTR,RLNACTR,4)
static A68_INT  ZLNACTR_padno;
static A68_147   EMNACTR = {"A_PAD_"}; 
A_GISVEC(A68_VC ,FMNACTR,EMNACTR,6)
static A68_146   KMNACTR = {"(PAD_"}; 
A_GISVEC(A68_VC ,LMNACTR,KMNACTR,5)
static A68_194   WMNACTR = {"A_PAD_ISTRUCT("}; 
A_GISVEC(A68_VC ,XMNACTR,WMNACTR,14)
static A68_146   CNNACTR = {",PAD_"}; 
A_GISVEC(A68_VC ,DNNACTR,CNNACTR,5)
static A68_190   UNNACTR = {"write c typedef("}; 
A_GISVEC(A68_VC ,VNNACTR,UNNACTR,16)
static A68_196   ZNNACTR = {"typedef "}; 
A_GISVEC(A68_VC ,AONACTR,ZNNACTR,8)
static A68_148   CONACTR = {"/* "}; 
static A68_148   DONACTR = {" */"}; 
A_GISVEC(A68_VC ,FONACTR,CONACTR,3)
A_GISVEC(A68_VC ,HONACTR,DONACTR,3)
static A68_180   IONACTR = {""}; 
A_GISVEC(A68_VC ,JONACTR,IONACTR,0)
static A68_146   ZONACTR = {";    "}; 
A_GISVEC(A68_VC ,APNACTR,ZONACTR,5)
static A68_196   NPNACTR = {"#define "}; 
A_GISVEC(A68_VC ,OPNACTR,NPNACTR,8)
static A68_196   YPNACTR = {"#define "}; 
A_GISVEC(A68_VC ,ZPNACTR,YPNACTR,8)
static A68_198   IQNACTR = {"            "}; 
A_GISVEC(A68_VC ,JQNACTR,IQNACTR,12)
static A68_198   WRNACTR = {"A_PROCEDURE("}; 
A_GISVEC(A68_VC ,XRNACTR,WRNACTR,12)
static A68_188   HSNACTR = {",("}; 
A_GISVEC(A68_VC ,ISNACTR,HSNACTR,2)
static A68_40   NSNACTR = {"void"}; 
A_GISVEC(A68_VC ,OSNACTR,NSNACTR,4)
static A68_180   YSNACTR = {""}; 
A_GISVEC(A68_VC ,ZSNACTR,YSNACTR,0)
static A68_180   ITNACTR = {""}; 
A_GISVEC(A68_VC ,JTNACTR,ITNACTR,0)
static A68_148   RTNACTR = {"),("}; 
A_GISVEC(A68_VC ,STNACTR,RTNACTR,3)
static A68_180   CUNACTR = {""}; 
A_GISVEC(A68_VC ,DUNACTR,CUNACTR,0)
static A68_180   MUNACTR = {""}; 
A_GISVEC(A68_VC ,NUNACTR,MUNACTR,0)
static A68_180   YUNACTR = {""}; 
A_GISVEC(A68_VC ,ZUNACTR,YUNACTR,0)
static A68_202   CVNACTR = {"void *));"}; 
A_GISVEC(A68_VC ,DVNACTR,CVNACTR,9)
static A68_202   PVNACTR = {"A_VECTOR("}; 
A_GISVEC(A68_VC ,QVNACTR,PVNACTR,9)
static A68_188   ZVNACTR = {");"}; 
A_GISVEC(A68_VC ,AWNACTR,ZVNACTR,2)
static A68_147   NWNACTR = {"A_ROW("}; 
A_GISVEC(A68_VC ,OWNACTR,NWNACTR,6)
static A68_188   AXNACTR = {");"}; 
A_GISVEC(A68_VC ,BXNACTR,AXNACTR,2)
static A68_72   OXNACTR = {";      "}; 
A_GISVEC(A68_VC ,PXNACTR,OXNACTR,7)
static A68_72   CYNACTR = {"struct "}; 
A_GISVEC(A68_VC ,DYNACTR,CYNACTR,7)
static A68_203   IYNACTR = {" { A68_INT mode; union {"}; 
A_GISVEC(A68_VC ,JYNACTR,IYNACTR,24)
static A68_146   VYNACTR = {" mode"}; 
A_GISVEC(A68_VC ,WYNACTR,VYNACTR,5)
static A68_206   GZNACTR = {"} data __attribute__ ((__aligned__(8))); };"}; 
A_GISVEC(A68_VC ,HZNACTR,GZNACTR,43)
static A68_72   UZNACTR = {"struct "}; 
A_GISVEC(A68_VC ,VZNACTR,UZNACTR,7)
static A68_188   QAOACTR = {"};"}; 
A_GISVEC(A68_VC ,RAOACTR,QAOACTR,2)
static A68_207   ZAOACTR = {"A_ISTRUCT("}; 
A_GISVEC(A68_VC ,ABOACTR,ZAOACTR,10)
static A68_188   OBOACTR = {");"}; 
A_GISVEC(A68_VC ,PBOACTR,OBOACTR,2)
static A68_192   WBOACTR = {"A_STRAIGHT("}; 
static A68_196   XBOACTR = {"A68_VOID"}; 
A_GISVEC(A68_VC ,ZBOACTR,XBOACTR,8)
A_GISVEC(A68_VC ,BCOACTR,WBOACTR,11)
static A68_188   ICOACTR = {");"}; 
A_GISVEC(A68_VC ,JCOACTR,ICOACTR,2)
static A68_210   TCOACTR = {"initialise mode table(REF ["}; 
static A68_147   UCOACTR = {"] MDE)"}; 
A_GISVEC(A68_VC ,VCOACTR,TCOACTR,27)
A_GISVEC(A68_VC ,XCOACTR,UCOACTR,6)
static A68_188   QJOACTR = {": "}; 
A_GISVEC(A68_VC ,SJOACTR,QJOACTR,2)
static A68_186   UJOACTR = {"------------------"}; 
A_GISVEC(A68_VC ,VJOACTR,UJOACTR,18)
static A68_188   ZJOACTR = {": "}; 
static A68_194   AKOACTR = {" ---deflex--> "}; 
static A68_188   BKOACTR = {": "}; 
A_GISVEC(A68_VC ,DKOACTR,ZJOACTR,2)
A_GISVEC(A68_VC ,FKOACTR,AKOACTR,14)
A_GISVEC(A68_VC ,HKOACTR,BKOACTR,2)
static A68_146   ALOACTR = {"  /* "}; 
static A68_148   BLOACTR = {" */"}; 
A_GISVEC(A68_VC ,CLOACTR,ALOACTR,5)
A_GISVEC(A68_VC ,DLOACTR,BLOACTR,3)
A68_215  KLOACTR_new;
typedef struct   /* env of non-global proc */
{
A68_151  RWMACTR_xmodes;
} WWMACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_152  YXMACTR_strctfields;
} GYMACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_152  GANACTR_strctfields;
} OANACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_151  GBNACTR_deflexedmodestemp;
} KBNACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Mode;
A_PAD_INT(PAD_99)
} IDNACTR_rowmodename;
typedef struct   /* env of non-global proc */
{
A68_VC  BONACTR_typedef;
A68_VC  KONACTR_comment;
A68_INT  Stream;
A_PAD_INT(PAD_100)
} QONACTR_emittagtypedef;
typedef struct   /* env of non-global proc */
{
A68_INT  Stream;
A_PAD_INT(PAD_101)
A68_VC  KONACTR_comment;
} KPNACTR_emitdeflextypedef;
typedef struct   /* env of non-global proc */
{
A68_153 * YNNACTR_entry;
A68_INT  QNNACTR_mode;
A_PAD_INT(PAD_102)
A68_INT  Stream;
A_PAD_INT(PAD_103)
} RQNACTR_emitincompletetype;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Pre_declare;
A_PAD_BOOL(PAD_104)
A68_94  PQNACTR_emitincompletetype;
A68_153 * YNNACTR_entry;
A68_INT  QNNACTR_mode;
A_PAD_INT(PAD_105)
A68_INT  Stream;
A_PAD_INT(PAD_106)
A68_93  OONACTR_emittagtypedef;
} DRNACTR_emitproctypedef;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Pre_declare;
A_PAD_BOOL(PAD_107)
A68_94  PQNACTR_emitincompletetype;
A68_INT  QNNACTR_mode;
A_PAD_INT(PAD_108)
A68_INT  Stream;
A_PAD_INT(PAD_109)
A68_93  OONACTR_emittagtypedef;
A68_153 * YNNACTR_entry;
A68_97  IPNACTR_emitdeflextypedef;
} KVNACTR_emitvectortypedef;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Pre_declare;
A_PAD_BOOL(PAD_110)
A68_94  PQNACTR_emitincompletetype;
A68_INT  QNNACTR_mode;
A_PAD_INT(PAD_111)
A68_INT  Stream;
A_PAD_INT(PAD_112)
A68_93  OONACTR_emittagtypedef;
A68_153 * YNNACTR_entry;
A68_97  IPNACTR_emitdeflextypedef;
} IWNACTR_emitarraytypedef;
typedef struct   /* env of non-global proc */
{
A68_INT  YCOACTR_unset;
A_PAD_INT(PAD_113)
A68_208  Mdes;
} BDOACTR_initialisemodes;
typedef struct   /* env of non-global proc */
{
A68_93  LHOACTR_finalisemode;
} NHOACTR_finalisemode;
typedef struct   /* env of non-global proc */
{
A68_INT  Nomodes;
A_PAD_INT(PAD_114)
} BJOACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} RDNACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} IENACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} NRNACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * IEOACTR_i;
} NEOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * XEOACTR_i;
} CFOACTR_generator;

A_STATIC A68_VOID  KNMACTR_debugmessage(A68_INT  Level, A68_VC  M);

A_STATIC A68_BOOL  SNMACTR_debugging(void);

A68_INT  EOMACTR_deref(A68_INT  Mode);

A68_INT  IOMACTR_modetype(A68_INT  Mode);

A68_BOOL  MOMACTR_hasoneref(A68_INT  M);

A68_BOOL  QOMACTR_isbool(A68_INT  M);

A68_BOOL  TOMACTR_ischar(A68_INT  M);

A68_BOOL  WOMACTR_isint(A68_INT  M);

A68_BOOL  ZOMACTR_islbits(A68_INT  M);

A68_BOOL  DPMACTR_islint(A68_INT  M);

A68_BOOL  HPMACTR_islreal(A68_INT  M);

A68_BOOL  LPMACTR_islcompl(A68_INT  M);

A68_BOOL  PPMACTR_isvec(A68_INT  M);

A68_BOOL  TPMACTR_isrow(A68_INT  M);

A68_BOOL  XPMACTR_isfirmarray(A68_INT  M);

A68_BOOL  BQMACTR_isstraight(A68_INT  M);

A68_BOOL  EQMACTR_isflexvec(A68_INT  M);

A68_BOOL  IQMACTR_isflexrow(A68_INT  M);

A68_BOOL  MQMACTR_isflexarray(A68_INT  M);

A68_BOOL  QQMACTR_isvector(A68_INT  Mode);

A68_BOOL  VQMACTR_isrow(A68_INT  Mode);

A68_BOOL  ARMACTR_isarray(A68_INT  Mode);

A68_BOOL  FRMACTR_isfirmarray(A68_INT  Mode);

A68_BOOL  KRMACTR_isflexarray(A68_INT  Mode);

A68_BOOL  PRMACTR_isstruct(A68_INT  Mode);

A68_BOOL  TRMACTR_isunion(A68_INT  Mode);

A68_BOOL  XRMACTR_isistruct(A68_INT  Mode);

A_STATIC A68_BOOL  BSMACTR_isstraight(A68_INT  Mode);

A68_BOOL  FSMACTR_iscompl(A68_INT  Mode);

A68_BOOL  JSMACTR_isproc(A68_INT  Mode);

A68_BOOL  NSMACTR_isprocp(A68_INT  Mode);

A68_BOOL  RSMACTR_hasrefs(A68_INT  Mode);

A68_BOOL  VSMACTR_iscstruct(A68_INT  Mode);

A68_INT  BTMACTR_derefmode(A68_INT  Mode);

A68_INT  ETMACTR_derefmodeok(A68_INT  Mode);

A_STATIC A68_INT  HTMACTR_auxmode(A68_INT  Mode);

A_STATIC A68_BITS  LTMACTR_flags(A68_INT  Mode);

A68_BOOL  OTMACTR_dynamic(A68_INT  Mode);

A68_VOID  STMACTR_procinfo(A68_INT  Mode, A68_154  *ReturnedValue);

A_STATIC A68_BOOL  GUMACTR_dynamicdescriptor(A68_INT  Mode);

A_STATIC A68_VOID  LUMACTR_modelistextra(A68_INT  Mode, A68_151  *ReturnedValue);

A_STATIC A68_INT  VUMACTR_intextra(A68_INT  Mode);

A68_VOID  EVMACTR_structfields(A68_INT  Mode, A68_152  *ReturnedValue);

A68_INT  QVMACTR_dimensions(A68_INT  Mode);

A_STATIC A68_VOID  KWMACTR_addtolist(A68_INT  Thismode, A68_151  Auxmodes, A68_INT  Dims, A68_166 ** List);

A_STATIC A68_VOID  VWMACTR_generator(A68_BOOL  TWMACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  DXMACTR_(A68_151  A, A68_151  B);

A_STATIC A68_BOOL  KXMACTR_(A68_151  A, A68_151  B);

A_STATIC A68_INT  PXMACTR_lookup(A68_INT  Mode, A68_151  Auxmode, A68_INT  Dims);

A_STATIC A68_VOID  FYMACTR_generator(A68_BOOL  DYMACTR_anonymous, A68_173  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  LZMACTR_deflexedmode(A68_INT  Mode, A68_BOOL  Toplevel);

A_STATIC A68_INT  SZMACTR_findthedeflexmode(A68_INT  Mode, A68_BOOL  Toplevel);

A_STATIC A68_VOID  NANACTR_generator(A68_BOOL  LANACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JBNACTR_generator(A68_BOOL  HBNACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals);

A68_INT  HCNACTR_finddeflexmode(A68_INT  Mode);

A_STATIC A68_VOID  KCNACTR_auxmodename(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  WCNACTR_modename(A68_INT  Mode, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HDNACTR_rowmodename(A68_VC  Rowtype, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NDNACTR_modelist(A68_151  Modelist, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QDNACTR_generator(A68_BOOL  ODNACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EENACTR_fieldlist(A68_152  Fields, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HENACTR_generator(A68_BOOL  FENACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  RFNACTR_cfieldname(A68_149 * Sf, A68_VC  *ReturnedValue);

A68_VOID  ZFNACTR_select(A68_INT  Mode, A68_INT  Field, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  EGNACTR_builtinmode(A68_INT  Mode, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CKNACTR_givectype(A68_INT  Mode, A68_BOOL  Tagged, A68_VC  *ReturnedValue);

A68_INT  TKNACTR_givecvariabletype(A68_INT  Mode, A68_BOOL  Identity);

A68_VOID  XKNACTR_ctype(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  BLNACTR_cvartype(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  FLNACTR_cast(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  KLNACTR_csizeof(A68_INT  Mode, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QLNACTR_ctag(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  WLNACTR_ctaggedtype(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  CMNACTR_alignnextstructfield(A68_INT  Fieldmode, A68_INT  Stream);

A_STATIC A68_VOID  PNNACTR_writectypedef(A68_INT  Underefedmode, A68_INT  Stream, A68_BOOL  Pre_declare);

A_STATIC A68_VOID  PONACTR_emittagtypedef(A68_INT  Mode, void *NonLocals);

A_STATIC A68_VOID  JPNACTR_emitdeflextypedef(A68_INT  Mode, A68_INT  Deflexmode, void *NonLocals);

A_STATIC A68_VOID  QQNACTR_emitincompletetype(void *NonLocals);

A_STATIC A68_VOID  CRNACTR_emitproctypedef(void *NonLocals);

A_STATIC A68_VOID  MRNACTR_generator(A68_BOOL  KRNACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JVNACTR_emitvectortypedef(void *NonLocals);

A_STATIC A68_VOID  HWNACTR_emitarraytypedef(void *NonLocals);

A68_VOID  SCOACTR_initialisemodetable(A68_208  Mdes, A68_INT  Nomodes);

A_STATIC A68_VOID  ADOACTR_initialisemodes(void *NonLocals);

A_STATIC A68_VOID  HEOACTR_reducedmodelist(A68_71 * Modelist, A68_151  *ReturnedValue);

A_STATIC A68_VOID  MEOACTR_generator(A68_BOOL  KEOACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WEOACTR_reducedselist(A68_70 * Selist, A68_152  *ReturnedValue);

A_STATIC A68_VOID  BFOACTR_generator(A68_BOOL  ZEOACTR_anonymous, A68_152  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MHOACTR_finalisemode(A68_INT  Mode, void *NonLocals);

A_STATIC A68_VOID  AJOACTR_generator(A68_BOOL  YIOACTR_anonymous, A68_155  *ReturnedValue, void *NonLocals);

A68_VOID  LKOACTR_declarectemporary(A68_INT  Mode, A68_VC  Commenttext, A68_127  *ReturnedValue);

A_STATIC A68_VOID  MEOACTR_generator(A68_BOOL  KEOACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals)
#define NL(x) (((NEOACTR_generator *)NonLocals)->x)
{ 
A68_151  OEOACTR;  /* clause result */
A68_151  PEOACTR;  /* OPERATORS - dynamic generator */
{ 
PEOACTR.upb = (*NL(IEOACTR_i)) ;
( KEOACTR_anonymous? A_VLOC(A68_INT ,PEOACTR): A_VHEAP(A68_INT ,PEOACTR) );
OEOACTR = PEOACTR;
} 
*ReturnedValue = (OEOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BFOACTR_generator(A68_BOOL  ZEOACTR_anonymous, A68_152  *ReturnedValue, void *NonLocals)
#define NL(x) (((CFOACTR_generator *)NonLocals)->x)
{ 
A68_152  DFOACTR;  /* clause result */
A68_152  EFOACTR;  /* OPERATORS - dynamic generator */
{ 
EFOACTR.upb = (*NL(XEOACTR_i)) ;
( ZEOACTR_anonymous? A_VLOC(A68_149 ,EFOACTR): A_VHEAP(A68_149 ,EFOACTR) );
DFOACTR = EFOACTR;
} 
*ReturnedValue = (DFOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QDNACTR_generator(A68_BOOL  ODNACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RDNACTR_generator *)NonLocals)->x)
{ 
A68_VC  SDNACTR;  /* clause result */
A68_VC  TDNACTR;  /* OPERATORS - dynamic generator */
{ 
TDNACTR.upb = 0 ;
( ODNACTR_anonymous? A_VLOC(A68_CHAR ,TDNACTR): A_VHEAP(A68_CHAR ,TDNACTR) );
SDNACTR = TDNACTR;
} 
*ReturnedValue = (SDNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HENACTR_generator(A68_BOOL  FENACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IENACTR_generator *)NonLocals)->x)
{ 
A68_VC  JENACTR;  /* clause result */
A68_VC  KENACTR;  /* OPERATORS - dynamic generator */
{ 
KENACTR.upb = 0 ;
( FENACTR_anonymous? A_VLOC(A68_CHAR ,KENACTR): A_VHEAP(A68_CHAR ,KENACTR) );
JENACTR = KENACTR;
} 
*ReturnedValue = (JENACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MRNACTR_generator(A68_BOOL  KRNACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals)
#define NL(x) (((NRNACTR_generator *)NonLocals)->x)
{ 
A68_151  ORNACTR;  /* clause result */
A68_151  PRNACTR;  /* OPERATORS - dynamic generator */
{ 
PRNACTR.upb = 0 ;
( KRNACTR_anonymous? A_VLOC(A68_INT ,PRNACTR): A_VHEAP(A68_INT ,PRNACTR) );
ORNACTR = PRNACTR;
} 
*ReturnedValue = (ORNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HEOACTR_reducedmodelist(A68_71 * Modelist, A68_151  *ReturnedValue)
{ 
A68_INT  IEOACTR_i;
A68_71 * JEOACTR_list;
A68_168  LEOACTR_generator;   /* proc value of non-global proc */
A68_151  QEOACTR;  /* avoid structure result */
A68_151  REOACTR_extra;
A68_INT * SEOACTR_mode;
A68_INT  TEOACTR;  /* forall loop counter */
A68_151  UEOACTR;  /* clause result */
A_PROC_ENTRY(reducedmodelist);
 /* line 1179: */
 /* line 1180: */
{ 
IEOACTR_i = 0;
 /* line 1181: */
JEOACTR_list = Modelist;
 /* line 1183: */
for ( ;; )
{ 
 /* line 1184: */
 /* line 1185: */
if ( !((JEOACTR_list!=(A68_71 *)A68_NIL)) ) break;
JEOACTR_list = (*(&(JEOACTR_list->Rest)));
 /* line 1186: */
 /* line 1187: */
IEOACTR_i+=1;
}
 /* line 1189: */
A_CLOSURE( LEOACTR_generator, MEOACTR_generator, NEOACTR_generator );
(( NEOACTR_generator * ) ( LEOACTR_generator.nonlocals )) -> IEOACTR_i = (&IEOACTR_i);
A_CALLPROC(LEOACTR_generator,(A68_FALSE, &QEOACTR),(A68_FALSE, &QEOACTR,(LEOACTR_generator).nonlocals));
REOACTR_extra = QEOACTR;
 /* line 1190: */
JEOACTR_list = Modelist;
 /* line 1192: */
 /* line 1193: */
TEOACTR = REOACTR_extra.upb -1;
SEOACTR_mode = REOACTR_extra.data;
for (;TEOACTR-- >= 0;
(SEOACTR_mode++
) )
{
 /* line 1194: */
(*SEOACTR_mode) = (*(&(JEOACTR_list->Mode)));
 /* line 1195: */
 /* line 1196: */
JEOACTR_list = (*(&(JEOACTR_list->Rest)));
}
 /* line 1198: */
 /* line 1200: */
UEOACTR = REOACTR_extra;
} 
A_PROC_EXIT(reducedmodelist);
*ReturnedValue = (UEOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WEOACTR_reducedselist(A68_70 * Selist, A68_152  *ReturnedValue)
{ 
A68_INT  XEOACTR_i;
A68_70 * YEOACTR_list;
A68_213  AFOACTR_generator;   /* proc value of non-global proc */
A68_152  FFOACTR;  /* avoid structure result */
A68_152  GFOACTR_fields;
A68_149 * HFOACTR_field;
A68_INT  IFOACTR;  /* forall loop counter */
A68_INT * JFOACTR;  /* YIELD */
A68_56 * KFOACTR;  /* YIELD */
A68_152  LFOACTR;  /* clause result */
A_PROC_ENTRY(reducedselist);
 /* line 1206: */
 /* line 1207: */
{ 
XEOACTR_i = 0;
 /* line 1208: */
YEOACTR_list = Selist;
 /* line 1210: */
for ( ;; )
{ 
 /* line 1211: */
 /* line 1212: */
if ( !((YEOACTR_list!=(A68_70 *)A68_NIL)) ) break;
YEOACTR_list = (*(&(YEOACTR_list->Rest)));
 /* line 1213: */
 /* line 1214: */
XEOACTR_i+=1;
}
 /* line 1216: */
A_CLOSURE( AFOACTR_generator, BFOACTR_generator, CFOACTR_generator );
(( CFOACTR_generator * ) ( AFOACTR_generator.nonlocals )) -> XEOACTR_i = (&XEOACTR_i);
A_CALLPROC(AFOACTR_generator,(A68_FALSE, &FFOACTR),(A68_FALSE, &FFOACTR,(AFOACTR_generator).nonlocals));
GFOACTR_fields = FFOACTR;
 /* line 1217: */
YEOACTR_list = Selist;
 /* line 1219: */
 /* line 1220: */
IFOACTR = GFOACTR_fields.upb -1;
HFOACTR_field = GFOACTR_fields.data;
for (;IFOACTR-- >= 0;
(HFOACTR_field++
) )
{
 /* line 1221: */
JFOACTR = (&(HFOACTR_field->Mode)) ;
(*JFOACTR) = (*(&(YEOACTR_list->Mode)));
 /* line 1222: */
KFOACTR = (&(HFOACTR_field->Name)) ;
(*KFOACTR) = (*(&(YEOACTR_list->Name)));
 /* line 1223: */
 /* line 1224: */
YEOACTR_list = (*(&(YEOACTR_list->Rest)));
}
 /* line 1226: */
 /* line 1228: */
LFOACTR = GFOACTR_fields;
} 
A_PROC_EXIT(reducedselist);
*ReturnedValue = (LFOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VWMACTR_generator(A68_BOOL  TWMACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals)
#define NL(x) (((WWMACTR_generator *)NonLocals)->x)
{ 
A68_151  XWMACTR;  /* clause result */
A68_151  YWMACTR;  /* OPERATORS - dynamic generator */
{ 
YWMACTR.upb = NL(RWMACTR_xmodes).upb ;
( TWMACTR_anonymous? A_VLOC(A68_INT ,YWMACTR): A_VHEAP(A68_INT ,YWMACTR) );
XWMACTR = YWMACTR;
} 
*ReturnedValue = (XWMACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FYMACTR_generator(A68_BOOL  DYMACTR_anonymous, A68_173  *ReturnedValue, void *NonLocals)
#define NL(x) (((GYMACTR_generator *)NonLocals)->x)
{ 
A68_173  HYMACTR;  /* clause result */
A68_173  IYMACTR;  /* OPERATORS - dynamic generator */
{ 
IYMACTR.upb = NL(YXMACTR_strctfields).upb ;
( DYMACTR_anonymous? A_VLOC(A68_56 ,IYMACTR): A_VHEAP(A68_56 ,IYMACTR) );
HYMACTR = IYMACTR;
} 
*ReturnedValue = (HYMACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NANACTR_generator(A68_BOOL  LANACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals)
#define NL(x) (((OANACTR_generator *)NonLocals)->x)
{ 
A68_151  PANACTR;  /* clause result */
A68_151  QANACTR;  /* OPERATORS - dynamic generator */
{ 
QANACTR.upb = NL(GANACTR_strctfields).upb ;
( LANACTR_anonymous? A_VLOC(A68_INT ,QANACTR): A_VHEAP(A68_INT ,QANACTR) );
PANACTR = QANACTR;
} 
*ReturnedValue = (PANACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JBNACTR_generator(A68_BOOL  HBNACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals)
#define NL(x) (((KBNACTR_generator *)NonLocals)->x)
{ 
A68_151  LBNACTR;  /* clause result */
A68_151  MBNACTR;  /* OPERATORS - dynamic generator */
{ 
MBNACTR.upb = NL(GBNACTR_deflexedmodestemp).upb ;
( HBNACTR_anonymous? A_VLOC(A68_INT ,MBNACTR): A_VHEAP(A68_INT ,MBNACTR) );
LBNACTR = MBNACTR;
} 
*ReturnedValue = (LBNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HDNACTR_rowmodename(A68_VC  Rowtype, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IDNACTR_rowmodename *)NonLocals)->x)
{ 
A68_VC  JDNACTR;  /* clause result */
A68_VC  KDNACTR;  /* avoid structure result */
A68_VC  LDNACTR;  /* avoid structure result */
A_PROC_ENTRY(rowmodename);
 /* line 624: */
 /* line 625: */
 /* line 626: */
 /* line 627: */
KDHACTR_message( 44, &KDNACTR );
KCNACTR_auxmodename( A_CALLPROC(UVMACTR_elementmode,(NL(Mode)),(NL(Mode),(UVMACTR_elementmode).nonlocals)), &LDNACTR );
JDNACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(Rowtype,A_C_TIMES(',',(QVMACTR_dimensions(NL(Mode))-1))),KDNACTR),LDNACTR);
A_PROC_EXIT(rowmodename);
*ReturnedValue = (JDNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NDNACTR_modelist(A68_151  Modelist, A68_VC  *ReturnedValue)
{ 
A68_139  PDNACTR_generator;   /* proc value of non-global proc */
A68_182  VDNACTR;  /* avoid structure result */
A68_182  UDNACTR_result;
A68_INT  WDNACTR_mode;
A68_INT * XDNACTR;  /* forall control - []x */
A68_INT  YDNACTR;  /* forall loop counter */
A68_VC  ZDNACTR;  /* avoid structure result */
A68_VC  AENACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BENACTR;  /* clause result */
A68_VC  CENACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(modelist);
 /* line 630: */
 /* line 631: */
{ 
A_CLOSURE( PDNACTR_generator, QDNACTR_generator, RDNACTR_generator );
A_CALLPROC(PDNACTR_generator,(A68_TRUE, &VDNACTR),(A68_TRUE, &VDNACTR,(PDNACTR_generator).nonlocals));
UDNACTR_result = VDNACTR;
 /* line 632: */
 /* line 633: */
YDNACTR = Modelist.upb -1;
XDNACTR = Modelist.data;
for (;YDNACTR-- >= 0;
(XDNACTR++
) )
{
WDNACTR_mode = *XDNACTR;
 /* line 634: */
 /* line 635: */
KCNACTR_auxmodename( WDNACTR_mode, &ZDNACTR );
A_VC_PLUSAB(UDNACTR_result,A_VC_PLUS(ZDNACTR,A_HVEC(AENACTR,',',A68_CHAR )));
}
 /* line 636: */
 /* line 637: */
BENACTR = A_VTRIM(CENACTR,(*(&UDNACTR_result)),A_VTSCRIPT(&(CENACTR.upb),(*(&UDNACTR_result)).upb,1,(UDNACTR_result.upb-1)));
} 
A_PROC_EXIT(modelist);
*ReturnedValue = (BENACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EENACTR_fieldlist(A68_152  Fields, A68_VC  *ReturnedValue)
{ 
A68_139  GENACTR_generator;   /* proc value of non-global proc */
A68_182  MENACTR;  /* avoid structure result */
A68_182  LENACTR_result;
A68_149  NENACTR_field;
A68_149 * OENACTR;  /* forall control - []x */
A68_INT  PENACTR;  /* forall loop counter */
A68_VC  QENACTR;  /* avoid structure result */
A68_VC  RENACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SENACTR;  /* clause result */
A68_VC  TENACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(fieldlist);
 /* line 640: */
 /* line 641: */
{ 
A_CLOSURE( GENACTR_generator, HENACTR_generator, IENACTR_generator );
A_CALLPROC(GENACTR_generator,(A68_TRUE, &MENACTR),(A68_TRUE, &MENACTR,(GENACTR_generator).nonlocals));
LENACTR_result = MENACTR;
 /* line 642: */
 /* line 643: */
PENACTR = Fields.upb -1;
OENACTR = Fields.data;
for (;PENACTR-- >= 0;
(OENACTR++
) )
{
NENACTR_field = *OENACTR;
 /* line 644: */
 /* line 645: */
KCNACTR_auxmodename( NENACTR_field.Mode, &QENACTR );
A_VC_PLUSAB(LENACTR_result,A_VC_PLUS(QENACTR,A_HVEC(RENACTR,',',A68_CHAR )));
}
 /* line 646: */
 /* line 647: */
SENACTR = A_VTRIM(TENACTR,(*(&LENACTR_result)),A_VTSCRIPT(&(TENACTR.upb),(*(&LENACTR_result)).upb,1,(LENACTR_result.upb-1)));
} 
A_PROC_EXIT(fieldlist);
*ReturnedValue = (SENACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PONACTR_emittagtypedef(A68_INT  Mode, void *NonLocals)
#define NL(x) (((QONACTR_emittagtypedef *)NonLocals)->x)
{ 
A68_197  RONACTR;  /* collateral clause result */
A68_137  SONACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TONACTR;  /* avoid structure result */
A68_137  UONACTR;  /* OPERATORS - mode -> union mode */
A68_137  VONACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  WONACTR;  /* YIELD */
A68_VC  XONACTR;  /* avoid structure result */
A68_137  YONACTR;  /* OPERATORS - mode -> union mode */
A68_137  BPNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CPNACTR;  /* YIELD */
A68_137  DPNACTR;  /* OPERATORS - mode -> union mode */
A68_137  EPNACTR;  /* OPERATORS - mode -> union mode */
A68_136  FPNACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emittagtypedef);
 /* line 851: */
RONACTR.data[0] = A_UNITE(SONACTR,mode2,2,NL(BONACTR_typedef));
 /* line 852: */
WLNACTR_ctaggedtype( Mode, &TONACTR );
RONACTR.data[1] = A_UNITE(UONACTR,mode2,2,TONACTR);
WONACTR = ' ' ;
RONACTR.data[2] = A_UNITE(VONACTR,mode1,1,WONACTR);
BLNACTR_cvartype( Mode, &XONACTR );
RONACTR.data[3] = A_UNITE(YONACTR,mode2,2,XONACTR);
CPNACTR = APNACTR ;
RONACTR.data[4] = A_UNITE(BPNACTR,mode2,2,CPNACTR);
 /* line 854: */
RONACTR.data[5] = A_UNITE(DPNACTR,mode2,2,NL(KONACTR_comment));
RONACTR.data[6] = A_UNITE(EPNACTR,mode4,4,EIAACTR_cnewline);
 /* line 855: */
MDMACTR_writecstream(A_HISVEC(FPNACTR,RONACTR,7,A68_137 ), NL(Stream));
A_PROC_EXIT(emittagtypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  JPNACTR_emitdeflextypedef(A68_INT  Mode, A68_INT  Deflexmode, void *NonLocals)
#define NL(x) (((KPNACTR_emitdeflextypedef *)NonLocals)->x)
{ 
A68_BITS  LPNACTR;  /* ADICOPS - >= */
A68_199  MPNACTR;  /* collateral clause result */
A68_137  PPNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QPNACTR;  /* YIELD */
A68_VC  RPNACTR;  /* avoid structure result */
A68_137  SPNACTR;  /* OPERATORS - mode -> union mode */
A68_137  TPNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  UPNACTR;  /* YIELD */
A68_VC  VPNACTR;  /* avoid structure result */
A68_137  WPNACTR;  /* OPERATORS - mode -> union mode */
A68_137  XPNACTR;  /* OPERATORS - mode -> union mode */
A68_137  AQNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BQNACTR;  /* YIELD */
A68_VC  CQNACTR;  /* avoid structure result */
A68_137  DQNACTR;  /* OPERATORS - mode -> union mode */
A68_137  EQNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  FQNACTR;  /* YIELD */
A68_VC  GQNACTR;  /* avoid structure result */
A68_137  HQNACTR;  /* OPERATORS - mode -> union mode */
A68_137  KQNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LQNACTR;  /* YIELD */
A68_137  MQNACTR;  /* OPERATORS - mode -> union mode */
A68_137  NQNACTR;  /* OPERATORS - mode -> union mode */
A68_136  OQNACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitdeflextypedef);
 /* line 858: */
 /* line 859: */
{ 
PNNACTR_writectypedef(Deflexmode, NL(Stream), A68_FALSE);
 /* line 861: */
 /* line 862: */
 /* line 864: */
LPNACTR = LTMACTR_flags(Mode) ;
if ( !A_LB_GE(LPNACTR,AOMACTR_typedefoutput) )
{ 
QPNACTR = OPNACTR ;
MPNACTR.data[0] = A_UNITE(PPNACTR,mode2,2,QPNACTR);
BLNACTR_cvartype( Mode, &RPNACTR );
MPNACTR.data[1] = A_UNITE(SPNACTR,mode2,2,RPNACTR);
UPNACTR = ' ' ;
MPNACTR.data[2] = A_UNITE(TPNACTR,mode1,1,UPNACTR);
 /* line 865: */
BLNACTR_cvartype( Deflexmode, &VPNACTR );
MPNACTR.data[3] = A_UNITE(WPNACTR,mode2,2,VPNACTR);
MPNACTR.data[4] = A_UNITE(XPNACTR,mode4,4,EIAACTR_cnewline);
BQNACTR = ZPNACTR ;
MPNACTR.data[5] = A_UNITE(AQNACTR,mode2,2,BQNACTR);
QLNACTR_ctag( Mode, &CQNACTR );
MPNACTR.data[6] = A_UNITE(DQNACTR,mode2,2,CQNACTR);
FQNACTR = ' ' ;
MPNACTR.data[7] = A_UNITE(EQNACTR,mode1,1,FQNACTR);
 /* line 866: */
QLNACTR_ctag( Deflexmode, &GQNACTR );
MPNACTR.data[8] = A_UNITE(HQNACTR,mode2,2,GQNACTR);
LQNACTR = JQNACTR ;
MPNACTR.data[9] = A_UNITE(KQNACTR,mode2,2,LQNACTR);
 /* line 867: */
MPNACTR.data[10] = A_UNITE(MQNACTR,mode2,2,NL(KONACTR_comment));
MPNACTR.data[11] = A_UNITE(NQNACTR,mode4,4,EIAACTR_cnewline);
 /* line 868: */
 /* line 869: */
 /* line 870: */
MDMACTR_writecstream(A_HISVEC(OQNACTR,MPNACTR,12,A68_137 ), NL(Stream));
} 
} 
A_PROC_EXIT(emitdeflextypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  QQNACTR_emitincompletetype(void *NonLocals)
#define NL(x) (((RQNACTR_emitincompletetype *)NonLocals)->x)
{ 
A68_BITS  SQNACTR;  /* ADICOPS - >= */
A68_200  TQNACTR;  /* collateral clause result */
A68_VC  UQNACTR;  /* avoid structure result */
A68_137  VQNACTR;  /* OPERATORS - mode -> union mode */
A68_137  WQNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  XQNACTR;  /* YIELD */
A68_137  YQNACTR;  /* OPERATORS - mode -> union mode */
A68_136  ZQNACTR;  /* OPERATORS - istruct -> vector */
A68_BITS * ARNACTR;  /* YIELD */
A_PROC_ENTRY(emitincompletetype);
 /* line 874: */
 /* line 875: */
SQNACTR = (*(&(NL(YNNACTR_entry)->Flags))) ;
if ( !A_LB_GE(SQNACTR,COMACTR_incompletetypeoutput) )
{ 
WLNACTR_ctaggedtype( NL(QNNACTR_mode), &UQNACTR );
TQNACTR.data[0] = A_UNITE(VQNACTR,mode2,2,UQNACTR);
XQNACTR = ';' ;
TQNACTR.data[1] = A_UNITE(WQNACTR,mode1,1,XQNACTR);
TQNACTR.data[2] = A_UNITE(YQNACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(ZQNACTR,TQNACTR,3,A68_137 ), NL(Stream));
 /* line 876: */
 /* line 877: */
ARNACTR = (&(NL(YNNACTR_entry)->Flags)) ;
(*ARNACTR) = (A68_BITS )((*(&(NL(YNNACTR_entry)->Flags)))|COMACTR_incompletetypeoutput);
} 
A_PROC_EXIT(emitincompletetype);
return;
} 
#undef NL

A_STATIC A68_VOID  CRNACTR_emitproctypedef(void *NonLocals)
#define NL(x) (((DRNACTR_emitproctypedef *)NonLocals)->x)
{ 
A68_BITS * ERNACTR;  /* YIELD */
A68_INT  FRNACTR_deprocmode;
A68_BOOL  GRNACTR;  /* optbool result */
A68_BOOL  HRNACTR_needsstructresultparam;
A68_151  IRNACTR;  /* clause result */
A68_151  JRNACTR;  /* avoid structure result */
A68_168  LRNACTR_generator;   /* proc value of non-global proc */
A68_151  QRNACTR;  /* avoid structure result */
A68_151  RRNACTR_params;
A68_INT * SRNACTR_p;
A68_INT  TRNACTR;  /* forall loop counter */
A68_193  URNACTR;  /* collateral clause result */
A68_137  VRNACTR;  /* OPERATORS - mode -> union mode */
A68_137  YRNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZRNACTR;  /* YIELD */
A68_INT  ASNACTR;  /* clause result */
A68_VC  BSNACTR;  /* avoid structure result */
A68_137  CSNACTR;  /* OPERATORS - mode -> union mode */
A68_137  DSNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  ESNACTR;  /* YIELD */
A68_VC  FSNACTR;  /* avoid structure result */
A68_137  GSNACTR;  /* OPERATORS - mode -> union mode */
A68_137  JSNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KSNACTR;  /* YIELD */
A68_136  LSNACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  MSNACTR;  /* optbool result */
A68_137  PSNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QSNACTR;  /* YIELD */
A68_136  RSNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  SSNACTR_comma;
A68_INT * TSNACTR_p;
A68_INT  USNACTR;  /* forall loop counter */
A68_201  VSNACTR;  /* collateral clause result */
A68_137  WSNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  XSNACTR;  /* YIELD */
A68_137  ATNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BTNACTR;  /* YIELD */
A68_VC  CTNACTR;  /* avoid structure result */
A68_137  DTNACTR;  /* OPERATORS - mode -> union mode */
A68_136  ETNACTR;  /* OPERATORS - istruct -> vector */
A68_200  FTNACTR;  /* collateral clause result */
A68_137  GTNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  HTNACTR;  /* YIELD */
A68_137  KTNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LTNACTR;  /* YIELD */
A68_VC  MTNACTR;  /* avoid structure result */
A68_137  NTNACTR;  /* OPERATORS - mode -> union mode */
A68_137  OTNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  PTNACTR;  /* YIELD */
A68_136  QTNACTR;  /* OPERATORS - istruct -> vector */
A68_137  TTNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UTNACTR;  /* YIELD */
A68_136  VTNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  WTNACTR_comma;
A68_INT * XTNACTR_p;
A68_INT  YTNACTR;  /* forall loop counter */
A68_201  ZTNACTR;  /* collateral clause result */
A68_137  AUNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  BUNACTR;  /* YIELD */
A68_137  EUNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FUNACTR;  /* YIELD */
A68_VC  GUNACTR;  /* avoid structure result */
A68_137  HUNACTR;  /* OPERATORS - mode -> union mode */
A68_136  IUNACTR;  /* OPERATORS - istruct -> vector */
A68_200  JUNACTR;  /* collateral clause result */
A68_137  KUNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  LUNACTR;  /* YIELD */
A68_137  OUNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PUNACTR;  /* YIELD */
A68_VC  QUNACTR;  /* avoid structure result */
A68_137  RUNACTR;  /* OPERATORS - mode -> union mode */
A68_137  SUNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  TUNACTR;  /* YIELD */
A68_136  UUNACTR;  /* OPERATORS - istruct -> vector */
A68_200  VUNACTR;  /* collateral clause result */
A68_137  WUNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  XUNACTR;  /* YIELD */
A68_137  AVNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BVNACTR;  /* YIELD */
A68_137  EVNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FVNACTR;  /* YIELD */
A68_137  GVNACTR;  /* OPERATORS - mode -> union mode */
A68_136  HVNACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitproctypedef);
 /* line 884: */
if ( NL(Pre_declare) )
{ 
 /* line 885: */
A_CALLPROC(NL(PQNACTR_emitincompletetype),(),((NL(PQNACTR_emitincompletetype)).nonlocals));
} 
else
{ 
ERNACTR = (&(NL(YNNACTR_entry)->Flags)) ;
(*ERNACTR) = (A68_BITS )((*(&(NL(YNNACTR_entry)->Flags)))|AOMACTR_typedefoutput);
 /* line 887: */
FRNACTR_deprocmode = A_CALLPROC(SVMACTR_deproc,(NL(QNNACTR_mode)),(NL(QNNACTR_mode),(SVMACTR_deproc).nonlocals));
 /* line 888: */
GRNACTR = NQIACTR_nostructresultoption;
if ( GRNACTR )
{GRNACTR = VSMACTR_iscstruct(FRNACTR_deprocmode);
}
HRNACTR_needsstructresultparam = GRNACTR;
 /* line 890: */
if ( NSMACTR_isprocp(NL(QNNACTR_mode)) )
{ 
A_CALLPROC(AWMACTR_parameters,(NL(QNNACTR_mode), &JRNACTR),(NL(QNNACTR_mode), &JRNACTR,(AWMACTR_parameters).nonlocals));
IRNACTR = JRNACTR;
} 
else
{ 
A_CLOSURE( LRNACTR_generator, MRNACTR_generator, NRNACTR_generator );
A_CALLPROC(LRNACTR_generator,(A68_FALSE, &QRNACTR),(A68_FALSE, &QRNACTR,(LRNACTR_generator).nonlocals));
IRNACTR = QRNACTR;
} 
RRNACTR_params = IRNACTR;
 /* line 894: */
PNNACTR_writectypedef(EOMACTR_deref(FRNACTR_deprocmode), NL(Stream), A68_TRUE);
 /* line 896: */
 /* line 897: */
TRNACTR = RRNACTR_params.upb -1;
SRNACTR_p = RRNACTR_params.data;
for (;TRNACTR-- >= 0;
(SRNACTR_p++
) )
{
 /* line 898: */
 /* line 899: */
PNNACTR_writectypedef(EOMACTR_deref((*SRNACTR_p)), NL(Stream), A68_TRUE);
}
 /* line 903: */
 /* line 904: */
 /* line 905: */
URNACTR.data[0] = A_UNITE(VRNACTR,mode4,4,EIAACTR_cnewline);
 /* line 906: */
ZRNACTR = XRNACTR ;
URNACTR.data[1] = A_UNITE(YRNACTR,mode2,2,ZRNACTR);
if ( HRNACTR_needsstructresultparam )
{ 
ASNACTR = UEAACTR_voidmode;
} 
else
{ 
ASNACTR = FRNACTR_deprocmode;
} 
WLNACTR_ctaggedtype( ASNACTR, &BSNACTR );
URNACTR.data[2] = A_UNITE(CSNACTR,mode2,2,BSNACTR);
 /* line 907: */
ESNACTR = ',' ;
URNACTR.data[3] = A_UNITE(DSNACTR,mode1,1,ESNACTR);
 /* line 908: */
QLNACTR_ctag( NL(QNNACTR_mode), &FSNACTR );
URNACTR.data[4] = A_UNITE(GSNACTR,mode2,2,FSNACTR);
KSNACTR = ISNACTR ;
URNACTR.data[5] = A_UNITE(JSNACTR,mode2,2,KSNACTR);
MDMACTR_writecstream(A_HISVEC(LSNACTR,URNACTR,6,A68_137 ), NL(Stream));
 /* line 910: */
 /* line 911: */
MSNACTR = (RRNACTR_params.upb==0);
if ( MSNACTR )
{MSNACTR = !HRNACTR_needsstructresultparam;
}
 /* line 912: */
if ( MSNACTR )
{ 
 /* line 913: */
 /* line 914: */
QSNACTR = OSNACTR ;
MDMACTR_writecstream(A_HVEC(RSNACTR,A_UNITE(PSNACTR,mode2,2,QSNACTR),A68_137 ), NL(Stream));
} 
else
{ 
SSNACTR_comma = A68_FALSE;
 /* line 915: */
 /* line 916: */
USNACTR = RRNACTR_params.upb -1;
TSNACTR_p = RRNACTR_params.data;
for (;USNACTR-- >= 0;
(TSNACTR_p++
) )
{
 /* line 917: */
if ( SSNACTR_comma )
{ 
XSNACTR = ',' ;
VSNACTR.data[0] = A_UNITE(WSNACTR,mode1,1,XSNACTR);
} 
else
{ 
BTNACTR = ZSNACTR ;
VSNACTR.data[0] = A_UNITE(ATNACTR,mode2,2,BTNACTR);
} 
WLNACTR_ctaggedtype( (*TSNACTR_p), &CTNACTR );
VSNACTR.data[1] = A_UNITE(DTNACTR,mode2,2,CTNACTR);
MDMACTR_writecstream(A_HISVEC(ETNACTR,VSNACTR,2,A68_137 ), NL(Stream));
 /* line 918: */
 /* line 919: */
SSNACTR_comma = A68_TRUE;
}
 /* line 921: */
 /* line 922: */
 /* line 923: */
if ( HRNACTR_needsstructresultparam )
{ 
if ( SSNACTR_comma )
{ 
HTNACTR = ',' ;
FTNACTR.data[0] = A_UNITE(GTNACTR,mode1,1,HTNACTR);
} 
else
{ 
LTNACTR = JTNACTR ;
FTNACTR.data[0] = A_UNITE(KTNACTR,mode2,2,LTNACTR);
} 
WLNACTR_ctaggedtype( FRNACTR_deprocmode, &MTNACTR );
FTNACTR.data[1] = A_UNITE(NTNACTR,mode2,2,MTNACTR);
PTNACTR = '*' ;
FTNACTR.data[2] = A_UNITE(OTNACTR,mode1,1,PTNACTR);
 /* line 924: */
 /* line 925: */
MDMACTR_writecstream(A_HISVEC(QTNACTR,FTNACTR,3,A68_137 ), NL(Stream));
} 
} 
 /* line 927: */
UTNACTR = STNACTR ;
MDMACTR_writecstream(A_HVEC(VTNACTR,A_UNITE(TTNACTR,mode2,2,UTNACTR),A68_137 ), NL(Stream));
 /* line 929: */
WTNACTR_comma = A68_FALSE;
 /* line 930: */
 /* line 931: */
YTNACTR = RRNACTR_params.upb -1;
XTNACTR_p = RRNACTR_params.data;
for (;YTNACTR-- >= 0;
(XTNACTR_p++
) )
{
 /* line 932: */
if ( WTNACTR_comma )
{ 
BUNACTR = ',' ;
ZTNACTR.data[0] = A_UNITE(AUNACTR,mode1,1,BUNACTR);
} 
else
{ 
FUNACTR = DUNACTR ;
ZTNACTR.data[0] = A_UNITE(EUNACTR,mode2,2,FUNACTR);
} 
WLNACTR_ctaggedtype( (*XTNACTR_p), &GUNACTR );
ZTNACTR.data[1] = A_UNITE(HUNACTR,mode2,2,GUNACTR);
MDMACTR_writecstream(A_HISVEC(IUNACTR,ZTNACTR,2,A68_137 ), NL(Stream));
 /* line 933: */
 /* line 934: */
WTNACTR_comma = A68_TRUE;
}
 /* line 936: */
 /* line 937: */
 /* line 938: */
if ( HRNACTR_needsstructresultparam )
{ 
if ( WTNACTR_comma )
{ 
LUNACTR = ',' ;
JUNACTR.data[0] = A_UNITE(KUNACTR,mode1,1,LUNACTR);
} 
else
{ 
PUNACTR = NUNACTR ;
JUNACTR.data[0] = A_UNITE(OUNACTR,mode2,2,PUNACTR);
} 
WLNACTR_ctaggedtype( FRNACTR_deprocmode, &QUNACTR );
JUNACTR.data[1] = A_UNITE(RUNACTR,mode2,2,QUNACTR);
TUNACTR = '*' ;
JUNACTR.data[2] = A_UNITE(SUNACTR,mode1,1,TUNACTR);
MDMACTR_writecstream(A_HISVEC(UUNACTR,JUNACTR,3,A68_137 ), NL(Stream));
 /* line 939: */
 /* line 940: */
WTNACTR_comma = A68_TRUE;
} 
 /* line 942: */
if ( WTNACTR_comma )
{ 
XUNACTR = ',' ;
VUNACTR.data[0] = A_UNITE(WUNACTR,mode1,1,XUNACTR);
} 
else
{ 
BVNACTR = ZUNACTR ;
VUNACTR.data[0] = A_UNITE(AVNACTR,mode2,2,BVNACTR);
} 
FVNACTR = DVNACTR ;
VUNACTR.data[1] = A_UNITE(EVNACTR,mode2,2,FVNACTR);
VUNACTR.data[2] = A_UNITE(GVNACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(HVNACTR,VUNACTR,3,A68_137 ), NL(Stream));
 /* line 944: */
 /* line 946: */
A_CALLPROC(NL(OONACTR_emittagtypedef),(NL(QNNACTR_mode)),(NL(QNNACTR_mode),(NL(OONACTR_emittagtypedef)).nonlocals));
} 
A_PROC_EXIT(emitproctypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  JVNACTR_emitvectortypedef(void *NonLocals)
#define NL(x) (((KVNACTR_emitvectortypedef *)NonLocals)->x)
{ 
A68_INT  LVNACTR_deflexmode;
A68_BOOL  MVNACTR;  /* clause result */
A68_INT  NVNACTR_elemmode;
A68_193  OVNACTR;  /* collateral clause result */
A68_137  RVNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SVNACTR;  /* YIELD */
A68_VC  TVNACTR;  /* avoid structure result */
A68_137  UVNACTR;  /* OPERATORS - mode -> union mode */
A68_137  VVNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  WVNACTR;  /* YIELD */
A68_VC  XVNACTR;  /* avoid structure result */
A68_137  YVNACTR;  /* OPERATORS - mode -> union mode */
A68_137  BWNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CWNACTR;  /* YIELD */
A68_137  DWNACTR;  /* OPERATORS - mode -> union mode */
A68_136  EWNACTR;  /* OPERATORS - istruct -> vector */
A68_BITS * FWNACTR;  /* YIELD */
A_PROC_ENTRY(emitvectortypedef);
 /* line 952: */
if ( NL(Pre_declare) )
{ 
A_CALLPROC(NL(PQNACTR_emitincompletetype),(),((NL(PQNACTR_emitincompletetype)).nonlocals));
} 
else
{ 
{ 
LVNACTR_deflexmode = HCNACTR_finddeflexmode(NL(QNNACTR_mode));
 /* line 953: */
 /* line 955: */
 /* line 957: */
MVNACTR = (LVNACTR_deflexmode==NL(QNNACTR_mode));
if ( MVNACTR )
{ 
NVNACTR_elemmode = A_CALLPROC(UVMACTR_elementmode,(NL(QNNACTR_mode)),(NL(QNNACTR_mode),(UVMACTR_elementmode).nonlocals));
 /* line 959: */
 /* line 960: */
SVNACTR = QVNACTR ;
OVNACTR.data[0] = A_UNITE(RVNACTR,mode2,2,SVNACTR);
 /* line 961: */
WLNACTR_ctaggedtype( NVNACTR_elemmode, &TVNACTR );
OVNACTR.data[1] = A_UNITE(UVNACTR,mode2,2,TVNACTR);
WVNACTR = ',' ;
OVNACTR.data[2] = A_UNITE(VVNACTR,mode1,1,WVNACTR);
 /* line 962: */
QLNACTR_ctag( NL(QNNACTR_mode), &XVNACTR );
OVNACTR.data[3] = A_UNITE(YVNACTR,mode2,2,XVNACTR);
 /* line 963: */
CWNACTR = AWNACTR ;
OVNACTR.data[4] = A_UNITE(BWNACTR,mode2,2,CWNACTR);
OVNACTR.data[5] = A_UNITE(DWNACTR,mode4,4,EIAACTR_cnewline);
 /* line 964: */
MDMACTR_writecstream(A_HISVEC(EWNACTR,OVNACTR,6,A68_137 ), NL(Stream));
 /* line 965: */
A_CALLPROC(NL(OONACTR_emittagtypedef),(NL(QNNACTR_mode)),(NL(QNNACTR_mode),(NL(OONACTR_emittagtypedef)).nonlocals));
 /* line 967: */
FWNACTR = (&(NL(YNNACTR_entry)->Flags)) ;
(*FWNACTR) = (A68_BITS )((*(&(NL(YNNACTR_entry)->Flags)))|AOMACTR_typedefoutput);
 /* line 968: */
 /* line 969: */
 /* line 970: */
PNNACTR_writectypedef(NVNACTR_elemmode, NL(Stream), A68_FALSE);
} 
else
{ 
 /* line 971: */
A_CALLPROC(NL(IPNACTR_emitdeflextypedef),(NL(QNNACTR_mode), LVNACTR_deflexmode),(NL(QNNACTR_mode), LVNACTR_deflexmode,(NL(IPNACTR_emitdeflextypedef)).nonlocals));
} 
} 
} 
A_PROC_EXIT(emitvectortypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  HWNACTR_emitarraytypedef(void *NonLocals)
#define NL(x) (((IWNACTR_emitarraytypedef *)NonLocals)->x)
{ 
A68_INT  JWNACTR_deflexmode;
A68_BOOL  KWNACTR;  /* clause result */
A68_INT  LWNACTR_elemmode;
A68_197  MWNACTR;  /* collateral clause result */
A68_VC  PWNACTR;  /* avoid structure result */
A68_137  QWNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RWNACTR;  /* YIELD */
A68_137  SWNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  TWNACTR;  /* YIELD */
A68_VC  UWNACTR;  /* avoid structure result */
A68_137  VWNACTR;  /* OPERATORS - mode -> union mode */
A68_137  WWNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  XWNACTR;  /* YIELD */
A68_VC  YWNACTR;  /* avoid structure result */
A68_137  ZWNACTR;  /* OPERATORS - mode -> union mode */
A68_137  CXNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DXNACTR;  /* YIELD */
A68_137  EXNACTR;  /* OPERATORS - mode -> union mode */
A68_136  FXNACTR;  /* OPERATORS - istruct -> vector */
A68_BITS * GXNACTR;  /* YIELD */
A_PROC_ENTRY(emitarraytypedef);
 /* line 977: */
if ( NL(Pre_declare) )
{ 
A_CALLPROC(NL(PQNACTR_emitincompletetype),(),((NL(PQNACTR_emitincompletetype)).nonlocals));
} 
else
{ 
{ 
JWNACTR_deflexmode = HCNACTR_finddeflexmode(NL(QNNACTR_mode));
 /* line 978: */
 /* line 980: */
 /* line 981: */
KWNACTR = (JWNACTR_deflexmode==NL(QNNACTR_mode));
if ( KWNACTR )
{ 
LWNACTR_elemmode = A_CALLPROC(UVMACTR_elementmode,(NL(QNNACTR_mode)),(NL(QNNACTR_mode),(UVMACTR_elementmode).nonlocals));
 /* line 983: */
 /* line 984: */
 /* line 985: */
WLNACTR_ctaggedtype( LWNACTR_elemmode, &PWNACTR );
RWNACTR = A_VC_PLUS(OWNACTR,PWNACTR) ;
MWNACTR.data[0] = A_UNITE(QWNACTR,mode2,2,RWNACTR);
TWNACTR = ',' ;
MWNACTR.data[1] = A_UNITE(SWNACTR,mode1,1,TWNACTR);
 /* line 986: */
QLNACTR_ctag( NL(QNNACTR_mode), &UWNACTR );
MWNACTR.data[2] = A_UNITE(VWNACTR,mode2,2,UWNACTR);
XWNACTR = ',' ;
MWNACTR.data[3] = A_UNITE(WWNACTR,mode1,1,XWNACTR);
 /* line 987: */
ROAAOSF_whole( QVMACTR_dimensions(NL(QNNACTR_mode)), 0, &YWNACTR );
MWNACTR.data[4] = A_UNITE(ZWNACTR,mode2,2,YWNACTR);
 /* line 988: */
DXNACTR = BXNACTR ;
MWNACTR.data[5] = A_UNITE(CXNACTR,mode2,2,DXNACTR);
MWNACTR.data[6] = A_UNITE(EXNACTR,mode4,4,EIAACTR_cnewline);
 /* line 989: */
MDMACTR_writecstream(A_HISVEC(FXNACTR,MWNACTR,7,A68_137 ), NL(Stream));
 /* line 990: */
A_CALLPROC(NL(OONACTR_emittagtypedef),(NL(QNNACTR_mode)),(NL(QNNACTR_mode),(NL(OONACTR_emittagtypedef)).nonlocals));
 /* line 992: */
GXNACTR = (&(NL(YNNACTR_entry)->Flags)) ;
(*GXNACTR) = (A68_BITS )((*(&(NL(YNNACTR_entry)->Flags)))|AOMACTR_typedefoutput);
 /* line 993: */
 /* line 994: */
 /* line 995: */
PNNACTR_writectypedef(LWNACTR_elemmode, NL(Stream), A68_FALSE);
} 
else
{ 
 /* line 996: */
A_CALLPROC(NL(IPNACTR_emitdeflextypedef),(NL(QNNACTR_mode), JWNACTR_deflexmode),(NL(QNNACTR_mode), JWNACTR_deflexmode,(NL(IPNACTR_emitdeflextypedef)).nonlocals));
} 
} 
} 
A_PROC_EXIT(emitarraytypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  ADOACTR_initialisemodes(void *NonLocals)
#define NL(x) (((BDOACTR_initialisemodes *)NonLocals)->x)
{ 
A68_153  CDOACTR;  /* collateral clause result */
A68_150  DDOACTR;  /* OPERATORS - mode -> union mode */
A68_153  EDOACTR_primitiveentry;
A68_153  FDOACTR;  /* collateral clause result */
A68_150  GDOACTR;  /* OPERATORS - mode -> union mode */
A68_153  HDOACTR_procentry;
A68_153  IDOACTR;  /* collateral clause result */
A68_150  JDOACTR;  /* OPERATORS - mode -> union mode */
A68_153  KDOACTR_procpentry;
A68_153  LDOACTR;  /* collateral clause result */
A68_150  MDOACTR;  /* OPERATORS - mode -> union mode */
A68_153  NDOACTR_unionentry;
A68_153  ODOACTR;  /* collateral clause result */
A68_150  PDOACTR;  /* OPERATORS - mode -> union mode */
A68_153  QDOACTR_structentry;
A68_153  RDOACTR;  /* collateral clause result */
A68_150  SDOACTR;  /* OPERATORS - mode -> union mode */
A68_153  TDOACTR_istructentry;
A68_153  UDOACTR;  /* collateral clause result */
A68_150  VDOACTR;  /* OPERATORS - mode -> union mode */
A68_153  WDOACTR_vectorentry;
A68_153  XDOACTR;  /* collateral clause result */
A68_150  YDOACTR;  /* OPERATORS - mode -> union mode */
A68_153  ZDOACTR_rowentry;
A68_153  AEOACTR;  /* collateral clause result */
A68_150  BEOACTR;  /* OPERATORS - mode -> union mode */
A68_153  CEOACTR_straightentry;
A68_153  DEOACTR;  /* collateral clause result */
A68_150  EEOACTR;  /* OPERATORS - mode -> union mode */
A68_153  FEOACTR_dummyentry;
A68_INT  MFOACTR_i;
A68_59 * NFOACTR_mde;
A68_153 * OFOACTR_mode;
A68_208  PFOACTR;  /* OPERATORS - trim index */
A68_208  QFOACTR;  /* forall yield */
A68_155  RFOACTR;  /* OPERATORS - trim index */
A68_155  SFOACTR;  /* forall yield */
A68_INT  TFOACTR;  /* forall loop counter */
A68_59  UFOACTR;  /* united object - for case conformity */
A68_INT  VFOACTR_primitive;
A68_INT * WFOACTR;  /* YIELD */
A68_153  XFOACTR;  /* clause result */
A68_63 * YFOACTR_proc;
A68_INT * ZFOACTR;  /* YIELD */
A68_61 * AGOACTR_procp;
A68_INT * BGOACTR;  /* YIELD */
A68_151  CGOACTR;  /* avoid structure result */
A68_150  DGOACTR;  /* OPERATORS - mode -> union mode */
A68_150 * EGOACTR;  /* YIELD */
A68_60 * FGOACTR_union;
A68_151  GGOACTR;  /* avoid structure result */
A68_150  HGOACTR;  /* OPERATORS - mode -> union mode */
A68_150 * IGOACTR;  /* YIELD */
A68_62 * JGOACTR_struct;
A68_152  KGOACTR;  /* avoid structure result */
A68_150  LGOACTR;  /* OPERATORS - mode -> union mode */
A68_150 * MGOACTR;  /* YIELD */
A68_58 * NGOACTR_istruct;
A68_INT * OGOACTR;  /* YIELD */
A68_150  PGOACTR;  /* OPERATORS - mode -> union mode */
A68_INT  QGOACTR;  /* YIELD */
A68_150 * RGOACTR;  /* YIELD */
A68_54 * SGOACTR_array;
A68_151  TGOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  UGOACTR;  /* clause result */
A68_INT * VGOACTR;  /* YIELD */
A68_INT * WGOACTR;  /* YIELD */
A68_150  XGOACTR;  /* OPERATORS - mode -> union mode */
A68_INT  YGOACTR;  /* YIELD */
A68_150 * ZGOACTR;  /* YIELD */
A68_64 * AHOACTR_vctor;
A68_151  BHOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  CHOACTR;  /* clause result */
A68_INT * DHOACTR;  /* YIELD */
A68_INT * EHOACTR;  /* YIELD */
A68_65 * FHOACTR_straight;
A68_INT * GHOACTR;  /* YIELD */
A68_153 * HHOACTR;  /* YIELD */
A68_153 * IHOACTR;  /* YIELD */
A68_153 * JHOACTR;  /* YIELD */
A_PROC_ENTRY(initialisemodes);
{ 
CDOACTR.Type = EEAACTR_primitive;
CDOACTR.Auxmode = NL(YCOACTR_unset);
CDOACTR.Deflexedmode = PEAACTR_nomode;
CDOACTR.Finalised = A68_TRUE;
CDOACTR.Extra = A_EMPTY(DDOACTR,4);
CDOACTR.Flags = 0X0U;
EDOACTR_primitiveentry = CDOACTR;
 /* line 1165: */
FDOACTR.Type = FEAACTR_proc;
FDOACTR.Auxmode = NL(YCOACTR_unset);
FDOACTR.Deflexedmode = PEAACTR_nomode;
FDOACTR.Finalised = A68_FALSE;
FDOACTR.Extra = A_EMPTY(GDOACTR,4);
FDOACTR.Flags = 0X0U;
HDOACTR_procentry = FDOACTR;
 /* line 1166: */
IDOACTR.Type = GEAACTR_procp;
IDOACTR.Auxmode = NL(YCOACTR_unset);
IDOACTR.Deflexedmode = PEAACTR_nomode;
IDOACTR.Finalised = A68_FALSE;
IDOACTR.Extra = A_UNITE(JDOACTR,mode1,1,NL(YCOACTR_unset));
IDOACTR.Flags = 0X0U;
KDOACTR_procpentry = IDOACTR;
 /* line 1167: */
LDOACTR.Type = HEAACTR_union;
LDOACTR.Auxmode = NL(YCOACTR_unset);
LDOACTR.Deflexedmode = PEAACTR_nomode;
LDOACTR.Finalised = A68_FALSE;
LDOACTR.Extra = A_UNITE(MDOACTR,mode1,1,NL(YCOACTR_unset));
LDOACTR.Flags = 0X0U;
NDOACTR_unionentry = LDOACTR;
 /* line 1168: */
ODOACTR.Type = IEAACTR_struct;
ODOACTR.Auxmode = NL(YCOACTR_unset);
ODOACTR.Deflexedmode = PEAACTR_nomode;
ODOACTR.Finalised = A68_FALSE;
ODOACTR.Extra = A_UNITE(PDOACTR,mode1,1,NL(YCOACTR_unset));
ODOACTR.Flags = 0X0U;
QDOACTR_structentry = ODOACTR;
 /* line 1169: */
RDOACTR.Type = JEAACTR_istruct;
RDOACTR.Auxmode = NL(YCOACTR_unset);
RDOACTR.Deflexedmode = PEAACTR_nomode;
RDOACTR.Finalised = A68_FALSE;
RDOACTR.Extra = A_UNITE(SDOACTR,mode1,1,NL(YCOACTR_unset));
RDOACTR.Flags = 0X0U;
TDOACTR_istructentry = RDOACTR;
 /* line 1170: */
UDOACTR.Type = NL(YCOACTR_unset);
UDOACTR.Auxmode = NL(YCOACTR_unset);
UDOACTR.Deflexedmode = PEAACTR_nomode;
UDOACTR.Finalised = A68_TRUE;
UDOACTR.Extra = A_EMPTY(VDOACTR,4);
UDOACTR.Flags = XNMACTR_dynamicbit;
WDOACTR_vectorentry = UDOACTR;
 /* line 1171: */
XDOACTR.Type = NL(YCOACTR_unset);
XDOACTR.Auxmode = NL(YCOACTR_unset);
XDOACTR.Deflexedmode = PEAACTR_nomode;
XDOACTR.Finalised = A68_FALSE;
XDOACTR.Extra = A_UNITE(YDOACTR,mode1,1,NL(YCOACTR_unset));
XDOACTR.Flags = XNMACTR_dynamicbit;
ZDOACTR_rowentry = XDOACTR;
 /* line 1172: */
AEOACTR.Type = OEAACTR_straight;
AEOACTR.Auxmode = NL(YCOACTR_unset);
AEOACTR.Deflexedmode = PEAACTR_nomode;
AEOACTR.Finalised = A68_TRUE;
AEOACTR.Extra = A_EMPTY(BEOACTR,4);
AEOACTR.Flags = XNMACTR_dynamicbit;
CEOACTR_straightentry = AEOACTR;
 /* line 1173: */
DEOACTR.Type = NL(YCOACTR_unset);
DEOACTR.Auxmode = NL(YCOACTR_unset);
DEOACTR.Deflexedmode = PEAACTR_nomode;
DEOACTR.Finalised = A68_TRUE;
DEOACTR.Extra = A_UNITE(EEOACTR,mode1,1,NL(YCOACTR_unset));
DEOACTR.Flags = 0X0U;
FEOACTR_dummyentry = DEOACTR;
 /* line 1175: */
 /* line 1202: */
 /* line 1232: */
MFOACTR_i = 1;
 /* line 1234: */
 /* line 1235: */
QFOACTR = A_R1TRIM(PFOACTR,(NL(Mdes)),A_RTSCRIPT(&(PFOACTR.dim[0]),&((NL(Mdes)).dim[0]),MFOACTR_i,(NL(Mdes)).dim[0].upb,1)) ;
SFOACTR = A_R1TRIM(RFOACTR,(WNMACTR_modes),A_RTSCRIPT(&(RFOACTR.dim[0]),&((WNMACTR_modes).dim[0]),MFOACTR_i,(WNMACTR_modes).dim[0].upb,1)) ;
TFOACTR = QFOACTR.dim[0].upb - QFOACTR.dim[0].lwb;
if ( TFOACTR != SFOACTR.dim[0].upb - SFOACTR.dim[0].lwb )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
NFOACTR_mde = QFOACTR.data;
OFOACTR_mode = SFOACTR.data;
for (;TFOACTR-- >= 0;
(NFOACTR_mde += QFOACTR.dim[0].stride
,OFOACTR_mode += SFOACTR.dim[0].stride
) )
{
 /* line 1236: */
 /* line 1238: */
 /* line 1239: */
UFOACTR = (*NFOACTR_mde) ;
switch ( UFOACTR.mode )
{ 
case 1: /* INT */
VFOACTR_primitive = (UFOACTR.data.mode1);
 /* line 1240: */
{ 
WFOACTR = (&((&EDOACTR_primitiveentry)->Auxmode)) ;
(*WFOACTR) = VFOACTR_primitive;
 /* line 1241: */
 /* line 1242: */
 /* line 1244: */
XFOACTR = EDOACTR_primitiveentry;
} 
break;
case 6: /* REF STRUCT(INT)  */
YFOACTR_proc = (UFOACTR.data.mode6);
 /* line 1245: */
{ 
ZFOACTR = (&((&HDOACTR_procentry)->Auxmode)) ;
(*ZFOACTR) = (*(&(YFOACTR_proc->Deproc)));
 /* line 1246: */
 /* line 1247: */
 /* line 1249: */
XFOACTR = HDOACTR_procentry;
} 
break;
case 3: /* REF STRUCT(INT,REF MODE71)  */
AGOACTR_procp = (UFOACTR.data.mode3);
 /* line 1250: */
{ 
BGOACTR = (&((&KDOACTR_procpentry)->Auxmode)) ;
(*BGOACTR) = (*(&(AGOACTR_procp->Deproc)));
 /* line 1251: */
HEOACTR_reducedmodelist( (*(&(AGOACTR_procp->Pars))), &CGOACTR );
EGOACTR = (&((&KDOACTR_procpentry)->Extra)) ;
(*EGOACTR) = A_UNITE(DGOACTR,mode2,2,CGOACTR);
 /* line 1252: */
 /* line 1253: */
 /* line 1255: */
XFOACTR = KDOACTR_procpentry;
} 
break;
case 2: /* REF STRUCT(INT,REF MODE71)  */
FGOACTR_union = (UFOACTR.data.mode2);
 /* line 1256: */
{ 
HEOACTR_reducedmodelist( (*(&(FGOACTR_union->Modelist))), &GGOACTR );
IGOACTR = (&((&NDOACTR_unionentry)->Extra)) ;
(*IGOACTR) = A_UNITE(HGOACTR,mode2,2,GGOACTR);
 /* line 1257: */
 /* line 1258: */
 /* line 1260: */
XFOACTR = NDOACTR_unionentry;
} 
break;
case 4: /* REF STRUCT(INT,INT,REF MODE70)  */
JGOACTR_struct = (UFOACTR.data.mode4);
 /* line 1261: */
{ 
WEOACTR_reducedselist( (*(&(JGOACTR_struct->Sels))), &KGOACTR );
MGOACTR = (&((&QDOACTR_structentry)->Extra)) ;
(*MGOACTR) = A_UNITE(LGOACTR,mode3,3,KGOACTR);
 /* line 1262: */
 /* line 1263: */
 /* line 1265: */
XFOACTR = QDOACTR_structentry;
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
NGOACTR_istruct = (UFOACTR.data.mode5);
 /* line 1266: */
{ 
OGOACTR = (&((&TDOACTR_istructentry)->Auxmode)) ;
(*OGOACTR) = (*(&(NGOACTR_istruct->Imode)));
 /* line 1267: */
QGOACTR = (*(&(NGOACTR_istruct->Length))) ;
RGOACTR = (&((&TDOACTR_istructentry)->Extra)) ;
(*RGOACTR) = A_UNITE(PGOACTR,mode1,1,QGOACTR);
 /* line 1268: */
 /* line 1269: */
 /* line 1271: */
XFOACTR = TDOACTR_istructentry;
} 
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
SGOACTR_array = (UFOACTR.data.mode8);
 /* line 1272: */
{ 
 /* line 1273: */
 /* line 1274: */
if ( ((*(&(SGOACTR_array->Deflex)))>=0) )
{ 
KWMACTR_addtolist(MFOACTR_i, A_HVEC(TGOACTR,(*(&(SGOACTR_array->Mode))),A68_INT ), (*(&(SGOACTR_array->Nods))), (&CWMACTR_rowlist));
 /* line 1275: */
 /* line 1276: */
 /* line 1277: */
UGOACTR = KEAACTR_row;
} 
else
{ 
UGOACTR = MEAACTR_flexrow;
} 
VGOACTR = (&((&ZDOACTR_rowentry)->Type)) ;
(*VGOACTR) = UGOACTR;
 /* line 1278: */
WGOACTR = (&((&ZDOACTR_rowentry)->Auxmode)) ;
(*WGOACTR) = (*(&(SGOACTR_array->Mode)));
 /* line 1279: */
YGOACTR = (*(&(SGOACTR_array->Nods))) ;
ZGOACTR = (&((&ZDOACTR_rowentry)->Extra)) ;
(*ZGOACTR) = A_UNITE(XGOACTR,mode1,1,YGOACTR);
 /* line 1280: */
 /* line 1281: */
 /* line 1283: */
XFOACTR = ZDOACTR_rowentry;
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
AHOACTR_vctor = (UFOACTR.data.mode7);
 /* line 1284: */
{ 
 /* line 1285: */
 /* line 1286: */
if ( ((*(&(AHOACTR_vctor->Deflex)))>=0) )
{ 
KWMACTR_addtolist(MFOACTR_i, A_HVEC(BHOACTR,(*(&(AHOACTR_vctor->Vecmode))),A68_INT ), 1, (&DWMACTR_vectorlist));
 /* line 1287: */
 /* line 1288: */
 /* line 1289: */
CHOACTR = LEAACTR_vector;
} 
else
{ 
CHOACTR = NEAACTR_flexvector;
} 
DHOACTR = (&((&WDOACTR_vectorentry)->Type)) ;
(*DHOACTR) = CHOACTR;
 /* line 1290: */
EHOACTR = (&((&WDOACTR_vectorentry)->Auxmode)) ;
(*EHOACTR) = (*(&(AHOACTR_vctor->Vecmode)));
 /* line 1291: */
 /* line 1292: */
 /* line 1294: */
XFOACTR = WDOACTR_vectorentry;
} 
break;
case 9: /* REF STRUCT(INT,REF MODE69)  */
FHOACTR_straight = (UFOACTR.data.mode9);
 /* line 1295: */
{ 
GHOACTR = (&((&CEOACTR_straightentry)->Auxmode)) ;
(*GHOACTR) = (*(&(FHOACTR_straight->Mode)));
 /* line 1296: */
 /* line 1297: */
 /* line 1299: */
XFOACTR = CEOACTR_straightentry;
} 
break;
case 11: /* STRUCT(INT)  */
 /* line 1301: */
XFOACTR = FEOACTR_dummyentry;
break;
default: 
SXIACTR_terminalerror(630);
 /* line 1302: */
 /* line 1303: */
XFOACTR = FEOACTR_dummyentry;
break;
} 
(*OFOACTR_mode) = XFOACTR;
 /* line 1304: */
 /* line 1305: */
MFOACTR_i+=1;
}
 /* line 1307: */
HHOACTR = (&A_R1INDEX(WNMACTR_modes,TFAACTR_ytypemode)) ;
IHOACTR = (&A_R1INDEX(WNMACTR_modes,SFAACTR_xtypemode)) ;
(*IHOACTR) = (*HHOACTR) = (*(&A_R1INDEX(WNMACTR_modes,PFAACTR_vectorrowofcharmode)));
 /* line 1308: */
 /* line 1310: */
JHOACTR = (&A_R1INDEX(WNMACTR_modes,PEAACTR_nomode)) ;
(*JHOACTR) = FEOACTR_dummyentry;
} 
A_PROC_EXIT(initialisemodes);
return;
} 
#undef NL

A_STATIC A68_VOID  MHOACTR_finalisemode(A68_INT  Mode, void *NonLocals)
#define NL(x) (((NHOACTR_finalisemode *)NonLocals)->x)
{ 
A68_INT  OHOACTR;  /* YIELD */
A68_153 * PHOACTR_entry;
A68_BOOL * QHOACTR;  /* YIELD */
A68_INT  RHOACTR;  /* clause result */
A68_INT  SHOACTR;  /* clause result */
A68_INT  THOACTR;  /* YIELD */
A68_INT  UHOACTR_type;
A68_BITS * VHOACTR;  /* YIELD */
A68_150  WHOACTR;  /* united object - for case conformity */
A68_151  XHOACTR_params;
A68_INT  YHOACTR;  /* YIELD */
A68_INT  ZHOACTR_type;
A68_BITS * AIOACTR;  /* YIELD */
A68_INT * BIOACTR_param;
A68_INT  CIOACTR;  /* forall loop counter */
A68_BITS  DIOACTR;  /* ADICOPS - >= */
A68_BITS * EIOACTR;  /* YIELD */
A68_150  FIOACTR;  /* united object - for case conformity */
A68_151  GIOACTR_constituents;
A68_INT * HIOACTR_constituent;
A68_INT  IIOACTR;  /* forall loop counter */
A68_BITS * JIOACTR;  /* YIELD */
A68_150  KIOACTR;  /* united object - for case conformity */
A68_152  LIOACTR_fields;
A68_149 * MIOACTR_field;
A68_INT  NIOACTR;  /* forall loop counter */
A68_INT  OIOACTR_fieldmode;
A68_BITS * PIOACTR;  /* YIELD */
A68_150  QIOACTR;  /* united object - for case conformity */
A68_INT  RIOACTR_istructlength;
A68_INT  SIOACTR_imode;
A68_BITS * TIOACTR;  /* YIELD */
A68_150  UIOACTR;  /* united object - for case conformity */
A68_INT  VIOACTR_nods;
A68_INT  WIOACTR;  /* YIELD */
A68_INT * XIOACTR;  /* YIELD */
A_PROC_ENTRY(finalisemode);
 /* line 1320: */
 /* line 1322: */
{ 
OHOACTR = EOMACTR_deref(Mode) ;
PHOACTR_entry = (&A_R1INDEX(WNMACTR_modes,OHOACTR));
 /* line 1324: */
 /* line 1325: */
 /* line 1326: */
if ( !(*(&(PHOACTR_entry->Finalised))) )
{ 
QHOACTR = (&(PHOACTR_entry->Finalised)) ;
(*QHOACTR) = A68_TRUE;
 /* line 1328: */
if ( ((*(&(PHOACTR_entry->Type)))==MEAACTR_flexrow) )
{ 
RHOACTR = 3;
} 
else
{ 
 /* line 1329: */
RHOACTR = 1;
} 
 /* line 1332: */
SHOACTR = ((*(&(PHOACTR_entry->Type)))-RHOACTR);
switch ( SHOACTR )
{ 
case 1: 
{ 
 /* line 1333: */
if ( ((*(&(PHOACTR_entry->Auxmode)))<VFAACTR_refmark) )
{ 
THOACTR = (*(&(PHOACTR_entry->Auxmode))) ;
UHOACTR_type = (*(&((&A_R1INDEX(WNMACTR_modes,THOACTR))->Type)));
 /* line 1334: */
 /* line 1335: */
 /* line 1336: */
if ( ((((UHOACTR_type==KEAACTR_row)|(UHOACTR_type==LEAACTR_vector))|(UHOACTR_type==MEAACTR_flexrow))|(UHOACTR_type==NEAACTR_flexvector)) )
{ 
 /* line 1337: */
 /* line 1338: */
 /* line 1339: */
 /* line 1342: */
VHOACTR = (&(PHOACTR_entry->Flags)) ;
(*VHOACTR) = (A68_BITS )((*(&(PHOACTR_entry->Flags)))|ZNMACTR_hasdescriptors);
} 
} 
} 
break;
case 2: 
WHOACTR = (*(&(PHOACTR_entry->Extra))) ;
switch ( WHOACTR.mode )
{ 
case 2: /* REF VECTOR [] INT */
XHOACTR_params = (WHOACTR.data.mode2);
 /* line 1343: */
{ 
 /* line 1344: */
if ( ((*(&(PHOACTR_entry->Auxmode)))<VFAACTR_refmark) )
{ 
YHOACTR = (*(&(PHOACTR_entry->Auxmode))) ;
ZHOACTR_type = (*(&((&A_R1INDEX(WNMACTR_modes,YHOACTR))->Type)));
 /* line 1345: */
 /* line 1346: */
 /* line 1347: */
if ( ((((ZHOACTR_type==KEAACTR_row)|(ZHOACTR_type==LEAACTR_vector))|(ZHOACTR_type==MEAACTR_flexrow))|(ZHOACTR_type==NEAACTR_flexvector)) )
{ 
 /* line 1348: */
 /* line 1349: */
AIOACTR = (&(PHOACTR_entry->Flags)) ;
(*AIOACTR) = (A68_BITS )((*(&(PHOACTR_entry->Flags)))|ZNMACTR_hasdescriptors);
} 
} 
 /* line 1350: */
 /* line 1351: */
CIOACTR = XHOACTR_params.upb -1;
BIOACTR_param = XHOACTR_params.data;
for (;CIOACTR-- >= 0;
(BIOACTR_param++
) )
{
 /* line 1352: */
 /* line 1353: */
DIOACTR = ~(*(&(PHOACTR_entry->Flags))) ;
if ( !(A_LB_GE(DIOACTR,ZNMACTR_hasdescriptors)) ) break;
 /* line 1354: */
if ( GUMACTR_dynamicdescriptor((*BIOACTR_param)) )
{ 
 /* line 1355: */
 /* line 1356: */
EIOACTR = (&(PHOACTR_entry->Flags)) ;
(*EIOACTR) = (A68_BITS )((*(&(PHOACTR_entry->Flags)))|ZNMACTR_hasdescriptors);
} 
}
 /* line 1357: */
 /* line 1359: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 3: 
FIOACTR = (*(&(PHOACTR_entry->Extra))) ;
switch ( FIOACTR.mode )
{ 
case 2: /* REF VECTOR [] INT */
GIOACTR_constituents = (FIOACTR.data.mode2);
 /* line 1361: */
 /* line 1362: */
IIOACTR = GIOACTR_constituents.upb -1;
HIOACTR_constituent = GIOACTR_constituents.data;
for (;IIOACTR-- >= 0;
(HIOACTR_constituent++
) )
{
 /* line 1363: */
A_CALLPROC(NL(LHOACTR_finalisemode),((*HIOACTR_constituent)),((*HIOACTR_constituent),(NL(LHOACTR_finalisemode)).nonlocals));
 /* line 1364: */
 /* line 1365: */
JIOACTR = (&(PHOACTR_entry->Flags)) ;
(*JIOACTR) = (A68_BITS )((*(&(PHOACTR_entry->Flags)))|LTMACTR_flags((*HIOACTR_constituent)));
}
 /* line 1366: */
 /* line 1368: */
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 4: 
KIOACTR = (*(&(PHOACTR_entry->Extra))) ;
switch ( KIOACTR.mode )
{ 
case 3: /* REF VECTOR [] MODE149 */
LIOACTR_fields = (KIOACTR.data.mode3);
 /* line 1370: */
 /* line 1371: */
NIOACTR = LIOACTR_fields.upb -1;
MIOACTR_field = LIOACTR_fields.data;
for (;NIOACTR-- >= 0;
(MIOACTR_field++
) )
{
 /* line 1372: */
OIOACTR_fieldmode = (*(&(MIOACTR_field->Mode)));
 /* line 1373: */
A_CALLPROC(NL(LHOACTR_finalisemode),(OIOACTR_fieldmode),(OIOACTR_fieldmode,(NL(LHOACTR_finalisemode)).nonlocals));
 /* line 1374: */
 /* line 1375: */
PIOACTR = (&(PHOACTR_entry->Flags)) ;
(*PIOACTR) = (A68_BITS )((*(&(PHOACTR_entry->Flags)))|LTMACTR_flags(OIOACTR_fieldmode));
}
 /* line 1376: */
 /* line 1378: */
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 5: 
QIOACTR = (*(&(PHOACTR_entry->Extra))) ;
switch ( QIOACTR.mode )
{ 
case 1: /* INT */
RIOACTR_istructlength = (QIOACTR.data.mode1);
 /* line 1380: */
{ 
SIOACTR_imode = (*(&(PHOACTR_entry->Auxmode)));
 /* line 1381: */
A_CALLPROC(NL(LHOACTR_finalisemode),(SIOACTR_imode),(SIOACTR_imode,(NL(LHOACTR_finalisemode)).nonlocals));
 /* line 1382: */
 /* line 1383: */
 /* line 1385: */
TIOACTR = (&(PHOACTR_entry->Flags)) ;
(*TIOACTR) = (A68_BITS )((*(&(PHOACTR_entry->Flags)))|LTMACTR_flags(SIOACTR_imode));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 6: 
UIOACTR = (*(&(PHOACTR_entry->Extra))) ;
switch ( UIOACTR.mode )
{ 
case 1: /* INT */
VIOACTR_nods = (UIOACTR.data.mode1);
 /* line 1387: */
 /* line 1388: */
{ 
 /* line 1389: */
 /* line 1390: */
if ( (VIOACTR_nods>1) )
{ 
A_CALLPROC(NL(LHOACTR_finalisemode),((*(&(PHOACTR_entry->Auxmode)))),((*(&(PHOACTR_entry->Auxmode))),(NL(LHOACTR_finalisemode)).nonlocals));
 /* line 1391: */
 /* line 1392: */
 /* line 1393: */
 /* line 1394: */
WIOACTR = (*(&(PHOACTR_entry->Auxmode))) ;
XIOACTR = (&(PHOACTR_entry->Auxmode)) ;
(*XIOACTR) = (*(&((&A_R1INDEX(WNMACTR_modes,WIOACTR))->Auxmode)));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
default: 
 /* line 1395: */
 /* line 1396: */
 /* line 1397: */
SXIACTR_terminalerror(631);
break;
} 
} 
} 
A_PROC_EXIT(finalisemode);
return;
} 
#undef NL

A_STATIC A68_VOID  AJOACTR_generator(A68_BOOL  YIOACTR_anonymous, A68_155  *ReturnedValue, void *NonLocals)
#define NL(x) (((BJOACTR_generator *)NonLocals)->x)
{ 
A68_155  CJOACTR;  /* clause result */
A68_155  DJOACTR;  /* OPERATORS - dynamic generator */
{ 
DJOACTR.dim[0].upb = NL(Nomodes) ;
DJOACTR.dim[0].lwb = PEAACTR_nomode ;
A_1INITSTRIDES(DJOACTR) ;
( YIOACTR_anonymous? A_R1LOC(A68_153 ,DJOACTR): A_R1HEAP(A68_153 ,DJOACTR) );
CJOACTR = DJOACTR;
} 
*ReturnedValue = (CJOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KNMACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  QNMACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 53: */
if ( (ZCHACTR_tracelevel(MNMACTR)>=Level) )
{ 
ROAAOSF_whole( Level, 0, &QNMACTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PNMACTR,QNMACTR),RNMACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PNMACTR,QNMACTR),RNMACTR),M),(MSIACTR_list).nonlocals));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A_STATIC A68_BOOL  SNMACTR_debugging(void)
{ 
A68_BOOL  UNMACTR;  /* clause result */
A_PROC_ENTRY(debugging);
UNMACTR = (ZCHACTR_tracelevel(VNMACTR)>0);
A_PROC_EXIT(debugging);
return( UNMACTR );
} 
#undef NL

A68_INT  EOMACTR_deref(A68_INT  Mode)
{ 
A68_INT  FOMACTR;  /* clause result */
A68_INT  GOMACTR;  /* ADICOPS - MOD */
A_PROC_ENTRY(deref);
 /* line 92: */
if ( (Mode==PEAACTR_nomode) )
{ 
FOMACTR = PEAACTR_nomode;
} 
else
{ 
FOMACTR = A_MOD(Mode,VFAACTR_refmark,GOMACTR);
} 
A_PROC_EXIT(deref);
return( FOMACTR );
} 
#undef NL

A68_INT  IOMACTR_modetype(A68_INT  Mode)
{ 
A68_INT  JOMACTR;  /* clause result */
A68_INT  KOMACTR;  /* YIELD */
A_PROC_ENTRY(modetype);
 /* line 98: */
KOMACTR = EOMACTR_deref(Mode) ;
JOMACTR = (*(&((&A_R1INDEX(WNMACTR_modes,KOMACTR))->Type)));
A_PROC_EXIT(modetype);
return( JOMACTR );
} 
#undef NL

A68_BOOL  MOMACTR_hasoneref(A68_INT  M)
{ 
A68_BOOL  NOMACTR;  /* optbool result */
A68_BOOL  OOMACTR;  /* clause result */
A_PROC_ENTRY(hasoneref);
NOMACTR = (M>=VFAACTR_refmark);
if ( NOMACTR )
{NOMACTR = (M<WFAACTR_refrefmark);
}
OOMACTR = NOMACTR;
A_PROC_EXIT(hasoneref);
return( OOMACTR );
} 
#undef NL

A68_BOOL  QOMACTR_isbool(A68_INT  M)
{ 
A68_BOOL  ROMACTR;  /* clause result */
A_PROC_ENTRY(isbool);
ROMACTR = (M==WEAACTR_boolmode);
A_PROC_EXIT(isbool);
return( ROMACTR );
} 
#undef NL

A68_BOOL  TOMACTR_ischar(A68_INT  M)
{ 
A68_BOOL  UOMACTR;  /* clause result */
A_PROC_ENTRY(ischar);
UOMACTR = (M==XEAACTR_charmode);
A_PROC_EXIT(ischar);
return( UOMACTR );
} 
#undef NL

A68_BOOL  WOMACTR_isint(A68_INT  M)
{ 
A68_BOOL  XOMACTR;  /* clause result */
A_PROC_ENTRY(isint);
XOMACTR = (M==EFAACTR_intmode);
A_PROC_EXIT(isint);
return( XOMACTR );
} 
#undef NL

A68_BOOL  ZOMACTR_islbits(A68_INT  M)
{ 
A68_BOOL  APMACTR;  /* optbool result */
A68_BOOL  BPMACTR;  /* clause result */
A_PROC_ENTRY(islbits);
APMACTR = (M==ZEAACTR_shortbitsmode);
if ( ! APMACTR )
{APMACTR = (M==AFAACTR_bitsmode);
}
 /* line 110: */
if ( ! APMACTR )
{APMACTR = (M==BFAACTR_longbitsmode);
}
if ( ! APMACTR )
{APMACTR = (M==CFAACTR_longlongbitsmode);
}
BPMACTR = APMACTR;
A_PROC_EXIT(islbits);
return( BPMACTR );
} 
#undef NL

A68_BOOL  DPMACTR_islint(A68_INT  M)
{ 
A68_BOOL  EPMACTR;  /* optbool result */
A68_BOOL  FPMACTR;  /* clause result */
A_PROC_ENTRY(islint);
EPMACTR = (M==DFAACTR_shortintmode);
if ( ! EPMACTR )
{EPMACTR = (M==EFAACTR_intmode);
}
 /* line 112: */
if ( ! EPMACTR )
{EPMACTR = (M==FFAACTR_longintmode);
}
if ( ! EPMACTR )
{EPMACTR = (M==GFAACTR_longlongintmode);
}
FPMACTR = EPMACTR;
A_PROC_EXIT(islint);
return( FPMACTR );
} 
#undef NL

A68_BOOL  HPMACTR_islreal(A68_INT  M)
{ 
A68_BOOL  IPMACTR;  /* optbool result */
A68_BOOL  JPMACTR;  /* clause result */
A_PROC_ENTRY(islreal);
IPMACTR = (M==HFAACTR_shortrealmode);
if ( ! IPMACTR )
{IPMACTR = (M==IFAACTR_realmode);
}
 /* line 114: */
if ( ! IPMACTR )
{IPMACTR = (M==JFAACTR_longrealmode);
}
if ( ! IPMACTR )
{IPMACTR = (M==KFAACTR_longlongrealmode);
}
JPMACTR = IPMACTR;
A_PROC_EXIT(islreal);
return( JPMACTR );
} 
#undef NL

A68_BOOL  LPMACTR_islcompl(A68_INT  M)
{ 
A68_BOOL  MPMACTR;  /* optbool result */
A68_BOOL  NPMACTR;  /* clause result */
A_PROC_ENTRY(islcompl);
MPMACTR = (M==LFAACTR_shortcomplmode);
if ( ! MPMACTR )
{MPMACTR = (M==MFAACTR_complmode);
}
 /* line 116: */
if ( ! MPMACTR )
{MPMACTR = (M==NFAACTR_longcomplmode);
}
if ( ! MPMACTR )
{MPMACTR = (M==OFAACTR_longlongcomplmode);
}
NPMACTR = MPMACTR;
A_PROC_EXIT(islcompl);
return( NPMACTR );
} 
#undef NL

A68_BOOL  PPMACTR_isvec(A68_INT  M)
{ 
A68_BOOL  QPMACTR;  /* optbool result */
A68_BOOL  RPMACTR;  /* clause result */
A_PROC_ENTRY(isvec);
QPMACTR = (M<VFAACTR_refmark);
if ( QPMACTR )
{QPMACTR = ((*(&((&A_R1INDEX(WNMACTR_modes,M))->Type)))==LEAACTR_vector);
}
RPMACTR = QPMACTR;
A_PROC_EXIT(isvec);
return( RPMACTR );
} 
#undef NL

A68_BOOL  TPMACTR_isrow(A68_INT  M)
{ 
A68_BOOL  UPMACTR;  /* optbool result */
A68_BOOL  VPMACTR;  /* clause result */
A_PROC_ENTRY(isrow);
UPMACTR = (M<VFAACTR_refmark);
if ( UPMACTR )
{UPMACTR = ((*(&((&A_R1INDEX(WNMACTR_modes,M))->Type)))==KEAACTR_row);
}
VPMACTR = UPMACTR;
A_PROC_EXIT(isrow);
return( VPMACTR );
} 
#undef NL

A68_BOOL  XPMACTR_isfirmarray(A68_INT  M)
{ 
A68_BOOL  YPMACTR;  /* optbool result */
A68_BOOL  ZPMACTR;  /* clause result */
A_PROC_ENTRY(isfirmarray);
YPMACTR = PPMACTR_isvec(M);
if ( ! YPMACTR )
{YPMACTR = TPMACTR_isrow(M);
}
ZPMACTR = YPMACTR;
A_PROC_EXIT(isfirmarray);
return( ZPMACTR );
} 
#undef NL

A68_BOOL  BQMACTR_isstraight(A68_INT  M)
{ 
A68_BOOL  CQMACTR;  /* clause result */
A_PROC_ENTRY(isstraight);
CQMACTR = ((*(&((&A_R1INDEX(WNMACTR_modes,M))->Type)))==OEAACTR_straight);
A_PROC_EXIT(isstraight);
return( CQMACTR );
} 
#undef NL

A68_BOOL  EQMACTR_isflexvec(A68_INT  M)
{ 
A68_BOOL  FQMACTR;  /* optbool result */
A68_BOOL  GQMACTR;  /* clause result */
A_PROC_ENTRY(isflexvec);
FQMACTR = (M>=VFAACTR_refmark);
if ( FQMACTR )
{FQMACTR = (M<WFAACTR_refrefmark);
}
 /* line 130: */
if ( FQMACTR )
{FQMACTR = (IOMACTR_modetype(M)==NEAACTR_flexvector);
}
GQMACTR = FQMACTR;
A_PROC_EXIT(isflexvec);
return( GQMACTR );
} 
#undef NL

A68_BOOL  IQMACTR_isflexrow(A68_INT  M)
{ 
A68_BOOL  JQMACTR;  /* optbool result */
A68_BOOL  KQMACTR;  /* clause result */
A_PROC_ENTRY(isflexrow);
JQMACTR = (M>=VFAACTR_refmark);
if ( JQMACTR )
{JQMACTR = (M<WFAACTR_refrefmark);
}
 /* line 132: */
if ( JQMACTR )
{JQMACTR = (IOMACTR_modetype(M)==MEAACTR_flexrow);
}
KQMACTR = JQMACTR;
A_PROC_EXIT(isflexrow);
return( KQMACTR );
} 
#undef NL

A68_BOOL  MQMACTR_isflexarray(A68_INT  M)
{ 
A68_BOOL  NQMACTR;  /* optbool result */
A68_BOOL  OQMACTR;  /* clause result */
A_PROC_ENTRY(isflexarray);
NQMACTR = EQMACTR_isflexvec(M);
if ( ! NQMACTR )
{NQMACTR = IQMACTR_isflexrow(M);
}
OQMACTR = NQMACTR;
A_PROC_EXIT(isflexarray);
return( OQMACTR );
} 
#undef NL

A68_BOOL  QQMACTR_isvector(A68_INT  Mode)
{ 
A68_INT  RQMACTR_type;
A68_BOOL  SQMACTR;  /* optbool result */
A68_BOOL  TQMACTR;  /* clause result */
A_PROC_ENTRY(isvector);
 /* line 141: */
 /* line 142: */
{ 
RQMACTR_type = IOMACTR_modetype(Mode);
 /* line 143: */
SQMACTR = (RQMACTR_type==LEAACTR_vector);
if ( ! SQMACTR )
{ /* line 144: */
SQMACTR = (RQMACTR_type==NEAACTR_flexvector);
}
TQMACTR = SQMACTR;
} 
A_PROC_EXIT(isvector);
return( TQMACTR );
} 
#undef NL

A68_BOOL  VQMACTR_isrow(A68_INT  Mode)
{ 
A68_INT  WQMACTR_type;
A68_BOOL  XQMACTR;  /* optbool result */
A68_BOOL  YQMACTR;  /* clause result */
A_PROC_ENTRY(isrow);
 /* line 151: */
 /* line 152: */
{ 
WQMACTR_type = IOMACTR_modetype(Mode);
 /* line 153: */
XQMACTR = (WQMACTR_type==KEAACTR_row);
if ( ! XQMACTR )
{ /* line 154: */
XQMACTR = (WQMACTR_type==MEAACTR_flexrow);
}
YQMACTR = XQMACTR;
} 
A_PROC_EXIT(isrow);
return( YQMACTR );
} 
#undef NL

A68_BOOL  ARMACTR_isarray(A68_INT  Mode)
{ 
A68_INT  BRMACTR_type;
A68_BOOL  CRMACTR;  /* optbool result */
A68_BOOL  DRMACTR;  /* clause result */
A_PROC_ENTRY(isarray);
 /* line 162: */
 /* line 163: */
{ 
BRMACTR_type = IOMACTR_modetype(Mode);
 /* line 164: */
CRMACTR = (BRMACTR_type==KEAACTR_row);
if ( ! CRMACTR )
{CRMACTR = (BRMACTR_type==LEAACTR_vector);
}
 /* line 165: */
if ( ! CRMACTR )
{CRMACTR = (BRMACTR_type==MEAACTR_flexrow);
}
if ( ! CRMACTR )
{ /* line 166: */
CRMACTR = (BRMACTR_type==NEAACTR_flexvector);
}
DRMACTR = CRMACTR;
} 
A_PROC_EXIT(isarray);
return( DRMACTR );
} 
#undef NL

A68_BOOL  FRMACTR_isfirmarray(A68_INT  Mode)
{ 
A68_INT  GRMACTR_type;
A68_BOOL  HRMACTR;  /* optbool result */
A68_BOOL  IRMACTR;  /* clause result */
A_PROC_ENTRY(isfirmarray);
 /* line 173: */
 /* line 174: */
{ 
GRMACTR_type = IOMACTR_modetype(Mode);
 /* line 175: */
HRMACTR = (GRMACTR_type==KEAACTR_row);
if ( ! HRMACTR )
{ /* line 176: */
HRMACTR = (GRMACTR_type==LEAACTR_vector);
}
IRMACTR = HRMACTR;
} 
A_PROC_EXIT(isfirmarray);
return( IRMACTR );
} 
#undef NL

A68_BOOL  KRMACTR_isflexarray(A68_INT  Mode)
{ 
A68_INT  LRMACTR_type;
A68_BOOL  MRMACTR;  /* optbool result */
A68_BOOL  NRMACTR;  /* clause result */
A_PROC_ENTRY(isflexarray);
 /* line 183: */
 /* line 184: */
{ 
LRMACTR_type = IOMACTR_modetype(Mode);
 /* line 185: */
MRMACTR = (LRMACTR_type==MEAACTR_flexrow);
if ( ! MRMACTR )
{ /* line 186: */
MRMACTR = (LRMACTR_type==NEAACTR_flexvector);
}
NRMACTR = MRMACTR;
} 
A_PROC_EXIT(isflexarray);
return( NRMACTR );
} 
#undef NL

A68_BOOL  PRMACTR_isstruct(A68_INT  Mode)
{ 
A68_INT  QRMACTR_type;
A68_BOOL  RRMACTR;  /* clause result */
A_PROC_ENTRY(isstruct);
 /* line 193: */
 /* line 194: */
{ 
QRMACTR_type = IOMACTR_modetype(Mode);
 /* line 195: */
 /* line 196: */
RRMACTR = (QRMACTR_type==IEAACTR_struct);
} 
A_PROC_EXIT(isstruct);
return( RRMACTR );
} 
#undef NL

A68_BOOL  TRMACTR_isunion(A68_INT  Mode)
{ 
A68_INT  URMACTR_type;
A68_BOOL  VRMACTR;  /* clause result */
A_PROC_ENTRY(isunion);
 /* line 203: */
 /* line 204: */
{ 
URMACTR_type = IOMACTR_modetype(Mode);
 /* line 205: */
 /* line 206: */
VRMACTR = (URMACTR_type==HEAACTR_union);
} 
A_PROC_EXIT(isunion);
return( VRMACTR );
} 
#undef NL

A68_BOOL  XRMACTR_isistruct(A68_INT  Mode)
{ 
A68_INT  YRMACTR_type;
A68_BOOL  ZRMACTR;  /* clause result */
A_PROC_ENTRY(isistruct);
 /* line 213: */
 /* line 214: */
{ 
YRMACTR_type = IOMACTR_modetype(Mode);
 /* line 215: */
 /* line 216: */
ZRMACTR = (YRMACTR_type==JEAACTR_istruct);
} 
A_PROC_EXIT(isistruct);
return( ZRMACTR );
} 
#undef NL

A_STATIC A68_BOOL  BSMACTR_isstraight(A68_INT  Mode)
{ 
A68_INT  CSMACTR_type;
A68_BOOL  DSMACTR;  /* clause result */
A_PROC_ENTRY(isstraight);
 /* line 223: */
 /* line 224: */
{ 
CSMACTR_type = IOMACTR_modetype(Mode);
 /* line 225: */
 /* line 226: */
DSMACTR = (CSMACTR_type==OEAACTR_straight);
} 
A_PROC_EXIT(isstraight);
return( DSMACTR );
} 
#undef NL

A68_BOOL  FSMACTR_iscompl(A68_INT  Mode)
{ 
A68_INT  GSMACTR_norefmode;
A68_BOOL  HSMACTR;  /* clause result */
A_PROC_ENTRY(iscompl);
 /* line 233: */
 /* line 234: */
{ 
GSMACTR_norefmode = EOMACTR_deref(Mode);
 /* line 235: */
 /* line 236: */
HSMACTR = ((GSMACTR_norefmode>=LFAACTR_shortcomplmode)&(GSMACTR_norefmode<=OFAACTR_longlongcomplmode));
} 
A_PROC_EXIT(iscompl);
return( HSMACTR );
} 
#undef NL

A68_BOOL  JSMACTR_isproc(A68_INT  Mode)
{ 
A68_INT  KSMACTR_m;
A68_BOOL  LSMACTR;  /* clause result */
A_PROC_ENTRY(isproc);
 /* line 243: */
 /* line 244: */
{ 
KSMACTR_m = IOMACTR_modetype(Mode);
 /* line 245: */
 /* line 246: */
LSMACTR = (KSMACTR_m==FEAACTR_proc);
} 
A_PROC_EXIT(isproc);
return( LSMACTR );
} 
#undef NL

A68_BOOL  NSMACTR_isprocp(A68_INT  Mode)
{ 
A68_INT  OSMACTR_m;
A68_BOOL  PSMACTR;  /* clause result */
A_PROC_ENTRY(isprocp);
 /* line 253: */
 /* line 254: */
{ 
OSMACTR_m = IOMACTR_modetype(Mode);
 /* line 255: */
 /* line 256: */
PSMACTR = (OSMACTR_m==GEAACTR_procp);
} 
A_PROC_EXIT(isprocp);
return( PSMACTR );
} 
#undef NL

A68_BOOL  RSMACTR_hasrefs(A68_INT  Mode)
{ 
A68_BOOL  SSMACTR;  /* clause result */
A68_INT  TSMACTR;  /* ADICOPS - MOD */
A_PROC_ENTRY(hasrefs);
 /* line 262: */
SSMACTR = !(A_MOD(Mode,VFAACTR_refmark,TSMACTR)==Mode);
A_PROC_EXIT(hasrefs);
return( SSMACTR );
} 
#undef NL

A68_BOOL  VSMACTR_iscstruct(A68_INT  Mode)
{ 
A68_BOOL  WSMACTR;  /* optbool result */
A68_BOOL  XSMACTR;  /* optbool result */
A68_BOOL  YSMACTR;  /* optbool result */
A68_BOOL  ZSMACTR;  /* clause result */
A_PROC_ENTRY(iscstruct);
 /* line 274: */
WSMACTR = MOMACTR_hasoneref(Mode);
if ( WSMACTR )
{WSMACTR = FRMACTR_isfirmarray(Mode);
}
 /* line 276: */
if ( ! WSMACTR )
{ /* line 277: */
XSMACTR = (Mode<VFAACTR_refmark);
if ( XSMACTR )
{YSMACTR = ARMACTR_isarray(Mode);
if ( ! YSMACTR )
{YSMACTR = TRMACTR_isunion(Mode);
}
if ( ! YSMACTR )
{ /* line 278: */
YSMACTR = PRMACTR_isstruct(Mode);
}
if ( ! YSMACTR )
{YSMACTR = JSMACTR_isproc(Mode);
}
if ( ! YSMACTR )
{YSMACTR = NSMACTR_isprocp(Mode);
}
XSMACTR = YSMACTR;
}
WSMACTR = XSMACTR;
}
ZSMACTR = WSMACTR;
A_PROC_EXIT(iscstruct);
return( ZSMACTR );
} 
#undef NL

A68_INT  BTMACTR_derefmode(A68_INT  Mode)
{ 
A68_INT  CTMACTR;  /* clause result */
A_PROC_ENTRY(derefmode);
 /* line 284: */
 /* line 285: */
{ 
 /* line 286: */
if ( (Mode<VFAACTR_refmark) )
{ 
 /* line 287: */
SXIACTR_terminalerror(632);
} 
 /* line 288: */
 /* line 289: */
CTMACTR = (Mode-VFAACTR_refmark);
} 
A_PROC_EXIT(derefmode);
return( CTMACTR );
} 
#undef NL

A68_INT  ETMACTR_derefmodeok(A68_INT  Mode)
{ 
A68_INT  FTMACTR;  /* clause result */
A_PROC_ENTRY(derefmodeok);
 /* line 293: */
if ( (Mode>VFAACTR_refmark) )
{ 
FTMACTR = (Mode-VFAACTR_refmark);
} 
else
{ 
FTMACTR = Mode;
} 
A_PROC_EXIT(derefmodeok);
return( FTMACTR );
} 
#undef NL

A_STATIC A68_INT  HTMACTR_auxmode(A68_INT  Mode)
{ 
A68_INT  ITMACTR;  /* clause result */
A68_INT  JTMACTR;  /* YIELD */
A_PROC_ENTRY(auxmode);
 /* line 299: */
JTMACTR = EOMACTR_deref(Mode) ;
ITMACTR = (*(&((&A_R1INDEX(WNMACTR_modes,JTMACTR))->Auxmode)));
A_PROC_EXIT(auxmode);
return( ITMACTR );
} 
#undef NL

A_STATIC A68_BITS  LTMACTR_flags(A68_INT  Mode)
{ 
A68_BITS  MTMACTR;  /* clause result */
A_PROC_ENTRY(flags);
 /* line 305: */
 /* line 306: */
if ( (Mode<VFAACTR_refmark) )
{ 
 /* line 307: */
 /* line 308: */
MTMACTR = (*(&((&A_R1INDEX(WNMACTR_modes,Mode))->Flags)));
} 
else
{ 
MTMACTR = (A68_BITS )0;
} 
A_PROC_EXIT(flags);
return( MTMACTR );
} 
#undef NL

A68_BOOL  OTMACTR_dynamic(A68_INT  Mode)
{ 
A68_BOOL  PTMACTR;  /* clause result */
A68_BITS  QTMACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(dynamic);
 /* line 316: */
 /* line 317: */
if ( (Mode<VFAACTR_refmark) )
{ 
 /* line 318: */
QTMACTR = (*(&((&A_R1INDEX(WNMACTR_modes,Mode))->Flags))) ;
PTMACTR = A_LB_GE(QTMACTR,XNMACTR_dynamicbit);
} 
else
{ 
 /* line 319: */
PTMACTR = A68_FALSE;
} 
A_PROC_EXIT(dynamic);
return( PTMACTR );
} 
#undef NL

A68_VOID  STMACTR_procinfo(A68_INT  Mode, A68_154  *ReturnedValue)
{ 
A68_153 * VTMACTR_m;
A68_150  YTMACTR;  /* united object - for case conformity */
A68_151  ZTMACTR_params;
A68_INT  AUMACTR;  /* clause result */
A68_INT  BUMACTR_parameters;
A68_154  CUMACTR;  /* collateral clause result */
A68_BITS  DUMACTR;  /* ADICOPS - >= */
A68_154  EUMACTR;  /* clause result */
A_PROC_ENTRY(procinfo);
 /* line 325: */
 /* line 326: */
{ 
WXIACTR_assert(UTMACTR, (Mode<VFAACTR_refmark));
 /* line 327: */
VTMACTR_m = (&A_R1INDEX(WNMACTR_modes,Mode));
 /* line 328: */
 /* line 329: */
WXIACTR_assert(XTMACTR, (((*(&(VTMACTR_m->Type)))==FEAACTR_proc)|((*(&(VTMACTR_m->Type)))==GEAACTR_procp)));
 /* line 331: */
YTMACTR = (*(&(VTMACTR_m->Extra))) ;
switch ( YTMACTR.mode )
{ 
case 2: /* REF VECTOR [] INT */
ZTMACTR_params = (YTMACTR.data.mode2);
AUMACTR = ZTMACTR_params.upb;
break;
default: 
AUMACTR = 0;
break;
} 
BUMACTR_parameters = AUMACTR;
 /* line 333: */
CUMACTR.Parameters = BUMACTR_parameters;
CUMACTR.Result = (*(&(VTMACTR_m->Auxmode)));
 /* line 334: */
DUMACTR = (*(&(VTMACTR_m->Flags))) ;
CUMACTR.Hasdescriptors = A_LB_GE(DUMACTR,ZNMACTR_hasdescriptors);
EUMACTR = CUMACTR;
} 
A_PROC_EXIT(procinfo);
*ReturnedValue = (EUMACTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  GUMACTR_dynamicdescriptor(A68_INT  Mode)
{ 
A68_INT  HUMACTR;  /* YIELD */
A68_INT  IUMACTR_type;
A68_BOOL  JUMACTR;  /* clause result */
A_PROC_ENTRY(dynamicdescriptor);
 /* line 341: */
 /* line 342: */
if ( (Mode<WFAACTR_refrefmark) )
{ 
HUMACTR = EOMACTR_deref(Mode) ;
IUMACTR_type = (*(&((&A_R1INDEX(WNMACTR_modes,HUMACTR))->Type)));
 /* line 343: */
 /* line 344: */
 /* line 345: */
JUMACTR = (((IUMACTR_type==LEAACTR_vector)|(IUMACTR_type==KEAACTR_row))|((Mode<VFAACTR_refmark)&((IUMACTR_type==NEAACTR_flexvector)|(IUMACTR_type==MEAACTR_flexrow))));
} 
else
{ 
 /* line 346: */
JUMACTR = A68_FALSE;
} 
A_PROC_EXIT(dynamicdescriptor);
return( JUMACTR );
} 
#undef NL

A_STATIC A68_VOID  LUMACTR_modelistextra(A68_INT  Mode, A68_151  *ReturnedValue)
{ 
A68_INT  MUMACTR;  /* YIELD */
A68_153 * NUMACTR_m;
A68_150  QUMACTR;  /* united object - for case conformity */
A68_151  RUMACTR_modelist;
A68_151  SUMACTR;  /* clause result */
A68_151  TUMACTR;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(modelistextra);
 /* line 352: */
 /* line 353: */
{ 
MUMACTR = EOMACTR_deref(Mode) ;
NUMACTR_m = (&A_R1INDEX(WNMACTR_modes,MUMACTR));
 /* line 354: */
WXIACTR_assert(PUMACTR, (((*(&(NUMACTR_m->Type)))==GEAACTR_procp)|((*(&(NUMACTR_m->Type)))==HEAACTR_union)));
 /* line 356: */
QUMACTR = (*(&(NUMACTR_m->Extra))) ;
switch ( QUMACTR.mode )
{ 
case 2: /* REF VECTOR [] INT */
RUMACTR_modelist = (QUMACTR.data.mode2);
SUMACTR = RUMACTR_modelist;
break;
default: 
 /* line 357: */
SUMACTR = A_VVAC(TUMACTR);
break;
} 
} 
A_PROC_EXIT(modelistextra);
*ReturnedValue = (SUMACTR);
return;
} 
#undef NL

A_STATIC A68_INT  VUMACTR_intextra(A68_INT  Mode)
{ 
A68_INT  WUMACTR;  /* YIELD */
A68_153 * XUMACTR_m;
A68_150  AVMACTR;  /* united object - for case conformity */
A68_INT  BVMACTR_i;
A68_INT  CVMACTR;  /* clause result */
A_PROC_ENTRY(intextra);
 /* line 363: */
 /* line 364: */
{ 
WUMACTR = EOMACTR_deref(Mode) ;
XUMACTR_m = (&A_R1INDEX(WNMACTR_modes,WUMACTR));
 /* line 365: */
 /* line 366: */
WXIACTR_assert(ZUMACTR, ((((*(&(XUMACTR_m->Type)))==JEAACTR_istruct)|((*(&(XUMACTR_m->Type)))==KEAACTR_row))|((*(&(XUMACTR_m->Type)))==MEAACTR_flexrow)));
 /* line 367: */
AVMACTR = (*(&(XUMACTR_m->Extra))) ;
switch ( AVMACTR.mode )
{ 
case 1: /* INT */
BVMACTR_i = (AVMACTR.data.mode1);
CVMACTR = BVMACTR_i;
break;
default: 
 /* line 368: */
CVMACTR = 0;
break;
} 
} 
A_PROC_EXIT(intextra);
return( CVMACTR );
} 
#undef NL

A68_VOID  EVMACTR_structfields(A68_INT  Mode, A68_152  *ReturnedValue)
{ 
A68_INT  FVMACTR;  /* YIELD */
A68_153 * GVMACTR_m;
A68_150  JVMACTR;  /* united object - for case conformity */
A68_152  KVMACTR_fields;
A68_152  LVMACTR;  /* clause result */
A68_152  OVMACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(structfields);
 /* line 374: */
 /* line 375: */
{ 
FVMACTR = EOMACTR_deref(Mode) ;
GVMACTR_m = (&A_R1INDEX(WNMACTR_modes,FVMACTR));
 /* line 376: */
WXIACTR_assert(IVMACTR, ((*(&(GVMACTR_m->Type)))==IEAACTR_struct));
 /* line 377: */
 /* line 378: */
JVMACTR = (*(&(GVMACTR_m->Extra))) ;
switch ( JVMACTR.mode )
{ 
case 3: /* REF VECTOR [] MODE149 */
KVMACTR_fields = (JVMACTR.data.mode3);
 /* line 379: */
LVMACTR = KVMACTR_fields;
break;
default: 
WXIACTR_assert(NVMACTR, A68_FALSE);
 /* line 380: */
 /* line 381: */
 /* line 382: */
LVMACTR = OVMACTR;
break;
} 
} 
A_PROC_EXIT(structfields);
*ReturnedValue = (LVMACTR);
return;
} 
#undef NL

A68_INT  QVMACTR_dimensions(A68_INT  Mode)
{ 
A68_INT  RVMACTR;  /* clause result */
A_PROC_ENTRY(dimensions);
 /* line 388: */
if ( QQMACTR_isvector(EOMACTR_deref(Mode)) )
{ 
RVMACTR = 1;
} 
else
{ 
RVMACTR = VUMACTR_intextra(Mode);
} 
A_PROC_EXIT(dimensions);
return( RVMACTR );
} 
#undef NL
 /* line 403: */

A_STATIC A68_VOID  KWMACTR_addtolist(A68_INT  Thismode, A68_151  Auxmodes, A68_INT  Dims, A68_166 ** List)
{ 
A68_INT  MWMACTR;  /* YIELD */
A68_INT  LWMACTR_xmde;
A68_INT  NWMACTR;  /* to part of loop */
A68_INT  OWMACTR;  /* loop control */
A68_151  PWMACTR;  /* clause result */
A68_151  QWMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_151  RWMACTR_xmodes;
A68_166  SWMACTR;  /* collateral clause result */
A68_168  UWMACTR_generator;   /* proc value of non-global proc */
A68_151  ZWMACTR;  /* avoid structure result */
A68_166 * AXMACTR;  /* YIELD */
A_PROC_ENTRY(addtolist);
 /* line 404: */
 /* line 406: */
{ 
 /* line 407: */
if ( (List==(&CWMACTR_rowlist)) )
{ 
MWMACTR = 1 ;
LWMACTR_xmde = A_VINDEX(Auxmodes,MWMACTR);
 /* line 408: */
NWMACTR = (Dims-1);
for ( OWMACTR = 1;
OWMACTR <= NWMACTR;
OWMACTR += 1 )
{ 
LWMACTR_xmde = HTMACTR_auxmode(LWMACTR_xmde);
}
 /* line 409: */
 /* line 410: */
PWMACTR = A_HVEC(QWMACTR,LWMACTR_xmde,A68_INT );
} 
else
{ 
PWMACTR = Auxmodes;
} 
RWMACTR_xmodes = PWMACTR;
 /* line 412: */
 /* line 413: */
 /* line 414: */
SWMACTR.Thismode = EOMACTR_deref(Thismode);
A_CLOSURE( UWMACTR_generator, VWMACTR_generator, WWMACTR_generator );
(( WWMACTR_generator * ) ( UWMACTR_generator.nonlocals )) -> RWMACTR_xmodes = RWMACTR_xmodes;
 /* line 415: */
A_CALLPROC(UWMACTR_generator,(A68_FALSE, &ZWMACTR),(A68_FALSE, &ZWMACTR,(UWMACTR_generator).nonlocals));
A_VASSIGN2(RWMACTR_xmodes,ZWMACTR,A68_INT ) ;
SWMACTR.Auxmode = ZWMACTR;
 /* line 416: */
SWMACTR.Dims = Dims;
 /* line 417: */
SWMACTR.Next = (*List);
AXMACTR = A_HEAP(A68_166 ) ;
(*AXMACTR) = SWMACTR ;
(*List) = AXMACTR;
} 
A_PROC_EXIT(addtolist);
return;
} 
#undef NL

A_STATIC A68_BOOL  DXMACTR_(A68_151  A, A68_151  B)
{ 
A68_BOOL  EXMACTR_eq;
A68_INT  FXMACTR_i;
A68_INT  GXMACTR;  /* to part of loop */
A68_BOOL  HXMACTR;  /* clause result */
A_PROC_ENTRY(=);
 /* line 420: */
 /* line 421: */
 /* line 422: */
if ( (A.upb==B.upb) )
{ 
 /* line 423: */
GXMACTR = A.upb;
for ( FXMACTR_i = 1;
FXMACTR_i <= GXMACTR;
FXMACTR_i += 1 )
{ 
 /* line 424: */
if ( !(EXMACTR_eq = (A_VINDEX(A,FXMACTR_i)==A_VINDEX(B,FXMACTR_i))) ) break;
/*SKIP*/;
}
 /* line 425: */
 /* line 426: */
HXMACTR = EXMACTR_eq;
} 
else
{ 
 /* line 427: */
HXMACTR = A68_FALSE;
} 
A_PROC_EXIT(=);
return( HXMACTR );
} 
#undef NL

A_STATIC A68_BOOL  KXMACTR_(A68_151  A, A68_151  B)
{ 
A68_BOOL  LXMACTR;  /* clause result */
A_PROC_ENTRY(/=);
LXMACTR = !DXMACTR_(A, B);
A_PROC_EXIT(/=);
return( LXMACTR );
} 
#undef NL

A_STATIC A68_INT  PXMACTR_lookup(A68_INT  Mode, A68_151  Auxmode, A68_INT  Dims)
{ 
A68_166 * QXMACTR;  /* clause result */
A68_166 * TXMACTR;  /* OPERATORS - skip to mode */
A68_166 * UXMACTR_current;
A68_BOOL  VXMACTR;  /* optbool result */
A68_BOOL  WXMACTR;  /* optbool result */
A68_152  XXMACTR;  /* avoid structure result */
A68_152  YXMACTR_strctfields;
A68_152  AYMACTR;  /* OPERATORS - nil -> mode */
A68_152  BYMACTR;  /* != */
A68_174  EYMACTR_generator;   /* proc value of non-global proc */
A68_173  KYMACTR;  /* avoid structure result */
A68_173  JYMACTR_fieldnames;
A68_149 * LYMACTR_strctfield;
A68_56 * MYMACTR_fieldname;
A68_INT  NYMACTR;  /* forall loop counter */
A68_BOOL  OYMACTR;  /* optbool result */
A68_BOOL  PYMACTR;  /* optbool result */
A68_BOOL  QYMACTR_equal;
A68_152  RYMACTR;  /* avoid structure result */
A68_152  SYMACTR_strctfields;
A68_152  UYMACTR;  /* OPERATORS - nil -> mode */
A68_152  VYMACTR;  /* != */
A68_56 * XYMACTR_fieldname;
A68_149 * YYMACTR_strctfield;
A68_INT  ZYMACTR;  /* forall loop counter */
A68_VC  AZMACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BZMACTR;  /* OPERATORS - istruct -> vector */
A68_56  CZMACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  DZMACTR;  /* clause result */
A68_BOOL  EZMACTR;  /* optbool result */
A68_BOOL  FZMACTR;  /* optbool result */
A68_INT  IZMACTR;  /* clause result */
A_PROC_ENTRY(lookup);
 /* line 432: */
 /* line 433: */
{ 
 /* line 434: */
if ( VQMACTR_isrow(Mode) )
{ 
QXMACTR = CWMACTR_rowlist;
} 
else
{ 
 /* line 435: */
if ( QQMACTR_isvector(Mode) )
{ 
QXMACTR = DWMACTR_vectorlist;
} 
else
{ 
 /* line 436: */
if ( PRMACTR_isstruct(Mode) )
{ 
QXMACTR = EWMACTR_structlist;
} 
else
{ 
 /* line 437: */
if ( TRMACTR_isunion(Mode) )
{ 
QXMACTR = FWMACTR_unionlist;
} 
else
{ 
WXIACTR_assert(SXMACTR, A68_FALSE);
 /* line 438: */
 /* line 439: */
QXMACTR = TXMACTR;
} 
} 
} 
} 
UXMACTR_current = QXMACTR;
 /* line 441: */
 /* line 442: */
 /* line 443: */
if ( VQMACTR_isrow(Mode) )
{ 
for ( ;; )
{ 
 /* line 444: */
VXMACTR = (UXMACTR_current!=(A68_166 *)A68_NIL);
if ( VXMACTR )
{ /* line 445: */
WXMACTR = KXMACTR_((*(&(UXMACTR_current->Auxmode))), Auxmode);
if ( ! WXMACTR )
{ /* line 446: */
WXMACTR = ((*(&(UXMACTR_current->Dims)))!=Dims);
}
 /* line 447: */
VXMACTR = WXMACTR;
}
 /* line 448: */
if ( !(VXMACTR) ) break;
 /* line 449: */
UXMACTR_current = (*(&(UXMACTR_current->Next)));
}
 /* line 450: */
} 
else
{ 
 /* line 451: */
 /* line 456: */
if ( PRMACTR_isstruct(Mode) )
{ 
EVMACTR_structfields( Mode, &XXMACTR );
YXMACTR_strctfields = XXMACTR;
 /* line 457: */
 /* line 458: */
BYMACTR = A_VVAC(AYMACTR) ;
WXIACTR_assert(CYMACTR, ! A_VSTRUCTCOMP(YXMACTR_strctfields,BYMACTR));
 /* line 459: */
A_CLOSURE( EYMACTR_generator, FYMACTR_generator, GYMACTR_generator );
(( GYMACTR_generator * ) ( EYMACTR_generator.nonlocals )) -> YXMACTR_strctfields = YXMACTR_strctfields;
A_CALLPROC(EYMACTR_generator,(A68_TRUE, &KYMACTR),(A68_TRUE, &KYMACTR,(EYMACTR_generator).nonlocals));
JYMACTR_fieldnames = KYMACTR;
 /* line 461: */
 /* line 462: */
NYMACTR = YXMACTR_strctfields.upb -1;
if ( NYMACTR != JYMACTR_fieldnames.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
LYMACTR_strctfield = YXMACTR_strctfields.data;
MYMACTR_fieldname = JYMACTR_fieldnames.data;
for (;NYMACTR-- >= 0;
(LYMACTR_strctfield++
,MYMACTR_fieldname++
) )
{
 /* line 463: */
(*MYMACTR_fieldname) = (*(&(LYMACTR_strctfield->Name)));
}
 /* line 465: */
for ( ;; )
{ 
 /* line 466: */
OYMACTR = (UXMACTR_current!=(A68_166 *)A68_NIL);
if ( OYMACTR )
{ /* line 467: */
PYMACTR = DXMACTR_((*(&(UXMACTR_current->Auxmode))), Auxmode);
if ( PYMACTR )
{{ 
 /* line 468: */
 /* line 469: */
EVMACTR_structfields( (*(&(UXMACTR_current->Thismode))), &RYMACTR );
SYMACTR_strctfields = RYMACTR;
 /* line 470: */
 /* line 471: */
VYMACTR = A_VVAC(UYMACTR) ;
WXIACTR_assert(WYMACTR, ! A_VSTRUCTCOMP(SYMACTR_strctfields,VYMACTR));
 /* line 473: */
 /* line 474: */
ZYMACTR = JYMACTR_fieldnames.upb -1;
if ( ZYMACTR != SYMACTR_strctfields.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
XYMACTR_fieldname = JYMACTR_fieldnames.data;
YYMACTR_strctfield = SYMACTR_strctfields.data;
for (;ZYMACTR-- >= 0;
(XYMACTR_fieldname++
,YYMACTR_strctfield++
) )
{
 /* line 475: */
 /* line 476: */
CZMACTR = (*(&(YYMACTR_strctfield->Name))) ;
if ( !(QYMACTR_equal = A_VC_EQ(A_HISVEC(AZMACTR,(*XYMACTR_fieldname),32,A68_CHAR ),A_HISVEC(BZMACTR,CZMACTR,32,A68_CHAR ))) ) break;
/*SKIP*/;
}
 /* line 477: */
 /* line 478: */
 /* line 479: */
DZMACTR = QYMACTR_equal;
} 
PYMACTR = DZMACTR;
}
 /* line 480: */
OYMACTR = !PYMACTR;
}
 /* line 481: */
if ( !(OYMACTR) ) break;
 /* line 482: */
UXMACTR_current = (*(&(UXMACTR_current->Next)));
}
 /* line 483: */
} 
else
{ 
EZMACTR = QQMACTR_isvector(Mode);
if ( ! EZMACTR )
{ /* line 484: */
EZMACTR = TRMACTR_isunion(Mode);
}
 /* line 485: */
if ( EZMACTR )
{ 
for ( ;; )
{ 
 /* line 486: */
FZMACTR = (UXMACTR_current!=(A68_166 *)A68_NIL);
if ( FZMACTR )
{ /* line 487: */
FZMACTR = KXMACTR_((*(&(UXMACTR_current->Auxmode))), Auxmode);
}
 /* line 488: */
if ( !(FZMACTR) ) break;
 /* line 489: */
UXMACTR_current = (*(&(UXMACTR_current->Next)));
}
 /* line 490: */
} 
else
{ 
 /* line 491: */
WXIACTR_assert(HZMACTR, A68_FALSE);
} 
} 
} 
 /* line 493: */
 /* line 494: */
 /* line 495: */
if ( (UXMACTR_current==(A68_166 *)A68_NIL) )
{ 
 /* line 496: */
IZMACTR = VEAACTR_faultmode;
} 
else
{ 
 /* line 498: */
IZMACTR = (*(&(UXMACTR_current->Thismode)));
} 
} 
A_PROC_EXIT(lookup);
return( IZMACTR );
} 
#undef NL

A_STATIC A68_INT  LZMACTR_deflexedmode(A68_INT  Mode, A68_BOOL  Toplevel)
{ 
A68_INT  MZMACTR;  /* YIELD */
A68_INT  NZMACTR;  /* clause result */
A68_BOOL  OZMACTR;  /* optbool result */
A68_INT  PZMACTR;  /* YIELD */
A_PROC_ENTRY(deflexedmode);
 /* line 506: */
 /* line 507: */
 /* line 508: */
MZMACTR = EOMACTR_deref(Mode) ;
if ( ((*(&((&A_R1INDEX(WNMACTR_modes,MZMACTR))->Deflexedmode)))==PEAACTR_nomode) )
{ 
NZMACTR = PEAACTR_nomode;
} 
else
{ 
OZMACTR = !Toplevel;
if ( OZMACTR )
{OZMACTR = KRMACTR_isflexarray(Mode);
}
if ( OZMACTR )
{ /* line 509: */
OZMACTR = (Mode>VFAACTR_refmark);
}
 /* line 511: */
if ( OZMACTR )
{ 
NZMACTR = Mode;
} 
else
{ 
 /* line 512: */
PZMACTR = EOMACTR_deref(Mode) ;
NZMACTR = ((*(&((&A_R1INDEX(WNMACTR_modes,PZMACTR))->Deflexedmode)))+((Mode/VFAACTR_refmark)*VFAACTR_refmark));
} 
} 
A_PROC_EXIT(deflexedmode);
return( NZMACTR );
} 
#undef NL

A_STATIC A68_INT  SZMACTR_findthedeflexmode(A68_INT  Mode, A68_BOOL  Toplevel)
{ 
A68_INT  TZMACTR_d;
A68_BOOL  UZMACTR;  /* clause result */
A68_INT  VZMACTR;  /* clause result */
A68_BITS  WZMACTR;  /* ADICOPS - >= */
A68_INT  XZMACTR_derefedmode;
A68_INT  YZMACTR_refs;
A68_BITS * ZZMACTR;  /* YIELD */
A68_BOOL  AANACTR;  /* clause result */
A68_151  BANACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  CANACTR_l;
A68_INT  DANACTR;  /* clause result */
A68_INT * EANACTR;  /* YIELD */
A68_152  FANACTR;  /* avoid structure result */
A68_152  GANACTR_strctfields;
A68_152  IANACTR;  /* OPERATORS - nil -> mode */
A68_152  JANACTR;  /* != */
A68_168  MANACTR_generator;   /* proc value of non-global proc */
A68_151  SANACTR;  /* avoid structure result */
A68_151  RANACTR_deflexedmodes;
A68_INT * TANACTR_thisdeflexedmode;
A68_149 * UANACTR_strct;
A68_INT  VANACTR;  /* forall loop counter */
A68_INT  WANACTR_l;
A68_INT  XANACTR;  /* clause result */
A68_INT * YANACTR;  /* YIELD */
A68_152  ZANACTR;  /* avoid structure result */
A68_152  ABNACTR_deflexedstrctfields;
A68_152  CBNACTR;  /* OPERATORS - nil -> mode */
A68_152  DBNACTR;  /* != */
A68_151  FBNACTR;  /* avoid structure result */
A68_151  GBNACTR_deflexedmodestemp;
A68_168  IBNACTR_generator;   /* proc value of non-global proc */
A68_151  OBNACTR;  /* avoid structure result */
A68_151  NBNACTR_deflexedmodes;
A68_151  QBNACTR;  /* OPERATORS - nil -> mode */
A68_151  RBNACTR;  /* != */
A68_INT * TBNACTR_thisdeflexedmode;
A68_INT  UBNACTR;  /* forall loop counter */
A68_INT  VBNACTR_l;
A68_INT  WBNACTR;  /* clause result */
A68_INT * XBNACTR;  /* YIELD */
A68_BOOL  YBNACTR;  /* optbool result */
A68_INT * ZBNACTR;  /* YIELD */
A68_INT * ACNACTR;  /* YIELD */
A68_INT * BCNACTR;  /* YIELD */
A68_VC  ECNACTR;  /* avoid structure result */
A68_INT  FCNACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(findthedeflexmode);
 /* line 515: */
{ 
TZMACTR_d = LZMACTR_deflexedmode(Mode, Toplevel);
 /* line 516: */
 /* line 517: */
 /* line 518: */
UZMACTR = (TZMACTR_d!=PEAACTR_nomode);
if ( UZMACTR )
{ 
VZMACTR = TZMACTR_d;
} 
else
{ 
 /* line 519: */
 /* line 526: */
WZMACTR = LTMACTR_flags(EOMACTR_deref(Mode)) ;
if ( A_LB_GE(WZMACTR,BOMACTR_deflexoutput) )
{ 
VZMACTR = Mode;
} 
else
{ 
{ 
XZMACTR_derefedmode = EOMACTR_deref(Mode);
 /* line 527: */
YZMACTR_refs = ((Mode/VFAACTR_refmark)*VFAACTR_refmark);
 /* line 529: */
ZZMACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Flags)) ;
(*ZZMACTR) = (A68_BITS )((*(&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Flags)))|BOMACTR_deflexoutput);
 /* line 530: */
 /* line 531: */
 /* line 532: */
AANACTR = ARMACTR_isarray(Mode);
if ( AANACTR )
{ 
 /* line 533: */
 /* line 534: */
 /* line 535: */
CANACTR_l = PXMACTR_lookup(Mode, A_HVEC(BANACTR,SZMACTR_findthedeflexmode(A_CALLPROC(UVMACTR_elementmode,(Mode),(Mode,(UVMACTR_elementmode).nonlocals)), A68_FALSE),A68_INT ), QVMACTR_dimensions(Mode));
 /* line 536: */
 /* line 537: */
 /* line 538: */
if ( (CANACTR_l==VEAACTR_faultmode) )
{ 
 /* line 539: */
DANACTR = XZMACTR_derefedmode;
} 
else
{ 
DANACTR = CANACTR_l;
} 
EANACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Deflexedmode)) ;
(*EANACTR) = DANACTR;
 /* line 540: */
 /* line 541: */
VZMACTR = LZMACTR_deflexedmode(Mode, Toplevel);
} 
else
{ 
 /* line 542: */
 /* line 543: */
if ( PRMACTR_isstruct(Mode) )
{ 
EVMACTR_structfields( Mode, &FANACTR );
GANACTR_strctfields = FANACTR;
 /* line 544: */
 /* line 545: */
JANACTR = A_VVAC(IANACTR) ;
WXIACTR_assert(KANACTR, ! A_VSTRUCTCOMP(GANACTR_strctfields,JANACTR));
 /* line 546: */
A_CLOSURE( MANACTR_generator, NANACTR_generator, OANACTR_generator );
(( OANACTR_generator * ) ( MANACTR_generator.nonlocals )) -> GANACTR_strctfields = GANACTR_strctfields;
A_CALLPROC(MANACTR_generator,(A68_TRUE, &SANACTR),(A68_TRUE, &SANACTR,(MANACTR_generator).nonlocals));
RANACTR_deflexedmodes = SANACTR;
 /* line 548: */
 /* line 549: */
VANACTR = RANACTR_deflexedmodes.upb -1;
if ( VANACTR != GANACTR_strctfields.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
TANACTR_thisdeflexedmode = RANACTR_deflexedmodes.data;
UANACTR_strct = GANACTR_strctfields.data;
for (;VANACTR-- >= 0;
(TANACTR_thisdeflexedmode++
,UANACTR_strct++
) )
{
 /* line 550: */
(*TANACTR_thisdeflexedmode) = SZMACTR_findthedeflexmode((*(&(UANACTR_strct->Mode))), A68_FALSE);
}
 /* line 551: */
WANACTR_l = PXMACTR_lookup(Mode, RANACTR_deflexedmodes, 0);
 /* line 552: */
 /* line 553: */
if ( (WANACTR_l==VEAACTR_faultmode) )
{ 
KWMACTR_addtolist(Mode, RANACTR_deflexedmodes, 0, (&EWMACTR_structlist));
 /* line 554: */
 /* line 555: */
 /* line 556: */
XANACTR = XZMACTR_derefedmode;
} 
else
{ 
XANACTR = WANACTR_l;
} 
YANACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Deflexedmode)) ;
(*YANACTR) = XANACTR;
 /* line 558: */
 /* line 559: */
 /* line 562: */
if ( (LZMACTR_deflexedmode(Mode, Toplevel)!=Mode) )
{ 
EVMACTR_structfields( LZMACTR_deflexedmode(Mode, Toplevel), &ZANACTR );
ABNACTR_deflexedstrctfields = ZANACTR;
 /* line 563: */
 /* line 564: */
 /* line 565: */
DBNACTR = A_VVAC(CBNACTR) ;
WXIACTR_assert(EBNACTR, ! A_VSTRUCTCOMP(ABNACTR_deflexedstrctfields,DBNACTR));
} 
 /* line 567: */
 /* line 568: */
VZMACTR = LZMACTR_deflexedmode(Mode, Toplevel);
} 
else
{ 
 /* line 569: */
 /* line 570: */
if ( TRMACTR_isunion(Mode) )
{ 
LUMACTR_modelistextra( Mode, &FBNACTR );
GBNACTR_deflexedmodestemp = FBNACTR;
 /* line 571: */
A_CLOSURE( IBNACTR_generator, JBNACTR_generator, KBNACTR_generator );
(( KBNACTR_generator * ) ( IBNACTR_generator.nonlocals )) -> GBNACTR_deflexedmodestemp = GBNACTR_deflexedmodestemp;
A_CALLPROC(IBNACTR_generator,(A68_TRUE, &OBNACTR),(A68_TRUE, &OBNACTR,(IBNACTR_generator).nonlocals));
NBNACTR_deflexedmodes = OBNACTR;
A_VASSIGN2(GBNACTR_deflexedmodestemp,NBNACTR_deflexedmodes,A68_INT );
 /* line 572: */
 /* line 573: */
RBNACTR = A_VVAC(QBNACTR) ;
WXIACTR_assert(SBNACTR, ! A_VSTRUCTCOMP(NBNACTR_deflexedmodes,RBNACTR));
 /* line 575: */
 /* line 576: */
UBNACTR = NBNACTR_deflexedmodes.upb -1;
TBNACTR_thisdeflexedmode = NBNACTR_deflexedmodes.data;
for (;UBNACTR-- >= 0;
(TBNACTR_thisdeflexedmode++
) )
{
 /* line 577: */
(*TBNACTR_thisdeflexedmode) = SZMACTR_findthedeflexmode((*TBNACTR_thisdeflexedmode), A68_FALSE);
}
 /* line 579: */
VBNACTR_l = PXMACTR_lookup(Mode, NBNACTR_deflexedmodes, 0);
 /* line 580: */
 /* line 581: */
if ( (VBNACTR_l==VEAACTR_faultmode) )
{ 
KWMACTR_addtolist(Mode, NBNACTR_deflexedmodes, 0, (&FWMACTR_unionlist));
 /* line 582: */
 /* line 583: */
 /* line 584: */
WBNACTR = XZMACTR_derefedmode;
} 
else
{ 
WBNACTR = VBNACTR_l;
} 
XBNACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Deflexedmode)) ;
(*XBNACTR) = WBNACTR;
 /* line 586: */
 /* line 587: */
VZMACTR = LZMACTR_deflexedmode(Mode, Toplevel);
} 
else
{ 
YBNACTR = JSMACTR_isproc(Mode);
if ( ! YBNACTR )
{ /* line 588: */
YBNACTR = NSMACTR_isprocp(Mode);
}
if ( YBNACTR )
{ 
ZBNACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Deflexedmode)) ;
(*ZBNACTR) = XZMACTR_derefedmode;
 /* line 589: */
 /* line 590: */
VZMACTR = Mode;
} 
else
{ 
 /* line 591: */
if ( XRMACTR_isistruct(Mode) )
{ 
ACNACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Deflexedmode)) ;
(*ACNACTR) = XZMACTR_derefedmode;
 /* line 592: */
 /* line 593: */
VZMACTR = Mode;
} 
else
{ 
 /* line 594: */
if ( BSMACTR_isstraight(Mode) )
{ 
BCNACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Deflexedmode)) ;
(*BCNACTR) = XZMACTR_derefedmode;
 /* line 595: */
 /* line 596: */
VZMACTR = Mode;
} 
else
{ 
ROAAOSF_whole( Mode, 0, &ECNACTR );
WXIACTR_assert(A_VC_PLUS(DCNACTR,ECNACTR), A68_FALSE);
 /* line 597: */
 /* line 598: */
VZMACTR = FCNACTR;
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(findthedeflexmode);
return( VZMACTR );
} 
#undef NL

A68_INT  HCNACTR_finddeflexmode(A68_INT  Mode)
{ 
A68_INT  ICNACTR;  /* clause result */
A_PROC_ENTRY(finddeflexmode);
 /* line 601: */
ICNACTR = SZMACTR_findthedeflexmode(Mode, A68_TRUE);
A_PROC_EXIT(finddeflexmode);
return( ICNACTR );
} 
#undef NL

A_STATIC A68_VOID  KCNACTR_auxmodename(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  LCNACTR;  /* clause result */
A68_VC  MCNACTR;  /* avoid structure result */
A68_VC  NCNACTR;  /* avoid structure result */
A68_INT  OCNACTR_type;
A68_VC  RCNACTR;  /* avoid structure result */
A68_VC  UCNACTR;  /* avoid structure result */
A_PROC_ENTRY(auxmodename);
 /* line 604: */
 /* line 605: */
if ( (Mode>VFAACTR_refmark) )
{ 
 /* line 606: */
KDHACTR_message( 92, &MCNACTR );
KCNACTR_auxmodename( (Mode-VFAACTR_refmark), &NCNACTR );
LCNACTR = A_VC_PLUS(MCNACTR,NCNACTR);
} 
else
{ 
OCNACTR_type = IOMACTR_modetype(Mode);
 /* line 607: */
 /* line 608: */
if ( ((Mode<=OFAACTR_longlongcomplmode)|(OCNACTR_type==EEAACTR_primitive)) )
{ 
if ( (Mode==TEAACTR_gotomode) )
{ 
LCNACTR = QCNACTR;
} 
else
{ 
 /* line 609: */
 /* line 610: */
KDHACTR_message( (66+Mode), &RCNACTR );
LCNACTR = RCNACTR;
} 
} 
else
{ 
 /* line 611: */
 /* line 612: */
ROAAOSF_whole( Mode, 0, &UCNACTR );
LCNACTR = A_VC_PLUS(TCNACTR,UCNACTR);
} 
} 
A_PROC_EXIT(auxmodename);
*ReturnedValue = (LCNACTR);
return;
} 
#undef NL

A68_VOID  WCNACTR_modename(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  XCNACTR;  /* clause result */
A68_VC  YCNACTR;  /* avoid structure result */
A68_VC  ZCNACTR;  /* avoid structure result */
A68_INT  ADNACTR_type;
A68_VC  DDNACTR;  /* avoid structure result */
A68_140  GDNACTR_rowmodename;   /* proc value of non-global proc */
A68_VC  UENACTR;  /* avoid structure result */
A68_VC  VENACTR_typemess;
A68_VC  WENACTR;  /* avoid structure result */
A68_151  XENACTR;  /* avoid structure result */
A68_VC  YENACTR;  /* avoid structure result */
A68_VC  ZENACTR;  /* avoid structure result */
A68_VC  AFNACTR;  /* avoid structure result */
A68_151  BFNACTR;  /* avoid structure result */
A68_VC  CFNACTR;  /* avoid structure result */
A68_VC  DFNACTR;  /* avoid structure result */
A68_152  EFNACTR;  /* avoid structure result */
A68_VC  FFNACTR;  /* avoid structure result */
A68_VC  GFNACTR;  /* avoid structure result */
A68_VC  HFNACTR;  /* avoid structure result */
A68_VC  IFNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JFNACTR;  /* avoid structure result */
A68_VC  KFNACTR;  /* avoid structure result */
A68_VC  LFNACTR;  /* avoid structure result */
A68_VC  MFNACTR;  /* avoid structure result */
A68_VC  NFNACTR;  /* avoid structure result */
A68_VC  OFNACTR;  /* avoid structure result */
A68_VC  PFNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(modename);
 /* line 615: */
 /* line 616: */
 /* line 617: */
if ( (Mode>VFAACTR_refmark) )
{ 
 /* line 618: */
 /* line 619: */
KDHACTR_message( 92, &YCNACTR );
WCNACTR_modename( (Mode-VFAACTR_refmark), &ZCNACTR );
XCNACTR = A_VC_PLUS(YCNACTR,ZCNACTR);
} 
else
{ 
ADNACTR_type = IOMACTR_modetype(Mode);
 /* line 620: */
 /* line 621: */
if ( ((Mode<=OFAACTR_longlongcomplmode)|(ADNACTR_type==EEAACTR_primitive)) )
{ 
if ( (Mode==TEAACTR_gotomode) )
{ 
XCNACTR = CDNACTR;
} 
else
{ 
 /* line 622: */
 /* line 623: */
KDHACTR_message( (66+Mode), &DDNACTR );
XCNACTR = DDNACTR;
} 
} 
else
{ 
A_CLOSURE( GDNACTR_rowmodename, HDNACTR_rowmodename, IDNACTR_rowmodename );
(( IDNACTR_rowmodename * ) ( GDNACTR_rowmodename.nonlocals )) -> Mode = Mode;
 /* line 629: */
 /* line 639: */
 /* line 649: */
KDHACTR_message( (550+ADNACTR_type), &UENACTR );
VENACTR_typemess = UENACTR;
 /* line 650: */
 /* line 651: */
 /* line 653: */
switch ( (ADNACTR_type-1) )
{ 
case 1: 
 /* line 655: */
KCNACTR_auxmodename( A_CALLPROC(SVMACTR_deproc,(Mode),(Mode,(SVMACTR_deproc).nonlocals)), &WENACTR );
XCNACTR = A_VC_PLUS(VENACTR_typemess,WENACTR);
break;
case 2: 
 /* line 656: */
 /* line 658: */
LUMACTR_modelistextra( Mode, &XENACTR );
NDNACTR_modelist( XENACTR, &YENACTR );
KDHACTR_message( 562, &ZENACTR );
KCNACTR_auxmodename( A_CALLPROC(SVMACTR_deproc,(Mode),(Mode,(SVMACTR_deproc).nonlocals)), &AFNACTR );
XCNACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VENACTR_typemess,YENACTR),ZENACTR),AFNACTR);
break;
case 3: 
 /* line 660: */
LUMACTR_modelistextra( Mode, &BFNACTR );
NDNACTR_modelist( BFNACTR, &CFNACTR );
KDHACTR_message( 562, &DFNACTR );
XCNACTR = A_VC_PLUS(A_VC_PLUS(VENACTR_typemess,CFNACTR),DFNACTR);
break;
case 4: 
 /* line 662: */
EVMACTR_structfields( Mode, &EFNACTR );
EENACTR_fieldlist( EFNACTR, &FFNACTR );
KDHACTR_message( 562, &GFNACTR );
XCNACTR = A_VC_PLUS(A_VC_PLUS(VENACTR_typemess,FFNACTR),GFNACTR);
break;
case 5: 
 /* line 663: */
 /* line 665: */
ROAAOSF_whole( A_CALLPROC(WVMACTR_istructlength,(Mode),(Mode,(WVMACTR_istructlength).nonlocals)), 0, &HFNACTR );
KCNACTR_auxmodename( A_CALLPROC(UVMACTR_elementmode,(Mode),(Mode,(UVMACTR_elementmode).nonlocals)), &JFNACTR );
XCNACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VENACTR_typemess,HFNACTR),A_HVEC(IFNACTR,' ',A68_CHAR )),JFNACTR);
break;
case 6: 
 /* line 667: */
A_CALLPROC(GDNACTR_rowmodename,(VENACTR_typemess, &KFNACTR),(VENACTR_typemess, &KFNACTR,(GDNACTR_rowmodename).nonlocals));
XCNACTR = KFNACTR;
break;
case 7: 
 /* line 669: */
A_CALLPROC(GDNACTR_rowmodename,(VENACTR_typemess, &LFNACTR),(VENACTR_typemess, &LFNACTR,(GDNACTR_rowmodename).nonlocals));
XCNACTR = LFNACTR;
break;
case 8: 
 /* line 671: */
A_CALLPROC(GDNACTR_rowmodename,(VENACTR_typemess, &MFNACTR),(VENACTR_typemess, &MFNACTR,(GDNACTR_rowmodename).nonlocals));
XCNACTR = MFNACTR;
break;
case 9: 
 /* line 673: */
A_CALLPROC(GDNACTR_rowmodename,(VENACTR_typemess, &NFNACTR),(VENACTR_typemess, &NFNACTR,(GDNACTR_rowmodename).nonlocals));
XCNACTR = NFNACTR;
break;
case 10: 
 /* line 674: */
 /* line 676: */
KCNACTR_auxmodename( A_CALLPROC(UVMACTR_elementmode,(Mode),(Mode,(UVMACTR_elementmode).nonlocals)), &OFNACTR );
XCNACTR = A_VC_PLUS(VENACTR_typemess,OFNACTR);
break;
default: 
 /* line 677: */
 /* line 678: */
XCNACTR = A_HVEC(PFNACTR,'?',A68_CHAR );
break;
} 
} 
} 
A_PROC_EXIT(modename);
*ReturnedValue = (XCNACTR);
return;
} 
#undef NL

A68_VOID  RFNACTR_cfieldname(A68_149 * Sf, A68_VC  *ReturnedValue)
{ 
A68_VC  SFNACTR;  /* clause result */
A68_VC  TFNACTR;  /* OPERATORS - istruct -> vector */
A68_56 * UFNACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VFNACTR;  /* avoid structure result */
A68_VC  WFNACTR;  /* avoid structure result */
A_PROC_ENTRY(cfieldname);
 /* line 684: */
 /* line 685: */
 /* line 686: */
UFNACTR = (&(Sf->Name)) ;
RMAAOSF_scanto( ' ', A_ISVEC(TFNACTR,UFNACTR,32,A68_CHAR ), &VFNACTR );
SNAAOSF_capitalised( VFNACTR, &WFNACTR );
SFNACTR = WFNACTR;
A_PROC_EXIT(cfieldname);
*ReturnedValue = (SFNACTR);
return;
} 
#undef NL

A68_VOID  ZFNACTR_select(A68_INT  Mode, A68_INT  Field, A68_VC  *ReturnedValue)
{ 
A68_VC  AGNACTR;  /* clause result */
A68_152  BGNACTR;  /* avoid structure result */
A68_VC  CGNACTR;  /* avoid structure result */
A_PROC_ENTRY(select);
 /* line 692: */
 /* line 693: */
 /* line 694: */
EVMACTR_structfields( Mode, &BGNACTR );
RFNACTR_cfieldname( (&A_VINDEX(BGNACTR,Field)), &CGNACTR );
AGNACTR = CGNACTR;
A_PROC_EXIT(select);
*ReturnedValue = (AGNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EGNACTR_builtinmode(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_INT  FGNACTR_m;
A68_VC  IGNACTR;  /* clause result */
A68_VC  JGNACTR;  /* OPERATORS - skip to mode */
A68_VC  MGNACTR;  /* OPERATORS - skip to mode */
A68_VC  VGNACTR;  /* OPERATORS - skip to mode */
A68_VC  CHNACTR;  /* OPERATORS - skip to mode */
A68_VC  NJNACTR;  /* OPERATORS - skip to mode */
A68_VC  QJNACTR;  /* OPERATORS - skip to mode */
A68_VC  TJNACTR;  /* OPERATORS - skip to mode */
A68_VC  XJNACTR;  /* avoid structure result */
A68_VC  ZJNACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(builtinmode);
 /* line 697: */
 /* line 698: */
{ 
FGNACTR_m = EOMACTR_deref(Mode);
 /* line 699: */
 /* line 700: */
switch ( FGNACTR_m )
{ 
case 1: 
{ 
WXIACTR_assert(HGNACTR, A68_FALSE);
 /* line 701: */
IGNACTR = JGNACTR;
} 
break;
case 2: 
{ 
WXIACTR_assert(LGNACTR, A68_FALSE);
 /* line 702: */
IGNACTR = MGNACTR;
} 
break;
case 3: 
 /* line 703: */
IGNACTR = OGNACTR;
break;
case 4: 
 /* line 704: */
IGNACTR = QGNACTR;
break;
case 5: 
 /* line 705: */
IGNACTR = SGNACTR;
break;
case 6: 
{ 
WXIACTR_assert(UGNACTR, A68_FALSE);
 /* line 706: */
IGNACTR = VGNACTR;
} 
break;
case 7: 
 /* line 707: */
IGNACTR = XGNACTR;
break;
case 8: 
 /* line 708: */
IGNACTR = ZGNACTR;
break;
case 9: 
{ 
WXIACTR_assert(BHNACTR, A68_FALSE);
 /* line 709: */
IGNACTR = CHNACTR;
} 
break;
case 10: 
if ( MQIACTR_longlongoption )
{ 
IGNACTR = EHNACTR;
} 
else
{ 
 /* line 710: */
IGNACTR = GHNACTR;
} 
break;
case 11: 
 /* line 711: */
IGNACTR = IHNACTR;
break;
case 12: 
if ( MQIACTR_longlongoption )
{ 
IGNACTR = KHNACTR;
} 
else
{ 
 /* line 712: */
IGNACTR = MHNACTR;
} 
break;
case 13: 
if ( MQIACTR_longlongoption )
{ 
IGNACTR = OHNACTR;
} 
else
{ 
 /* line 713: */
IGNACTR = QHNACTR;
} 
break;
case 14: 
if ( MQIACTR_longlongoption )
{ 
IGNACTR = SHNACTR;
} 
else
{ 
 /* line 714: */
IGNACTR = UHNACTR;
} 
break;
case 15: 
 /* line 715: */
IGNACTR = WHNACTR;
break;
case 16: 
if ( MQIACTR_longlongoption )
{ 
IGNACTR = YHNACTR;
} 
else
{ 
 /* line 716: */
IGNACTR = AINACTR;
} 
break;
case 17: 
if ( MQIACTR_longlongoption )
{ 
IGNACTR = CINACTR;
} 
else
{ 
 /* line 717: */
IGNACTR = EINACTR;
} 
break;
case 18: 
if ( MQIACTR_longlongoption )
{ 
IGNACTR = GINACTR;
} 
else
{ 
 /* line 718: */
IGNACTR = IINACTR;
} 
break;
case 19: 
 /* line 719: */
IGNACTR = KINACTR;
break;
case 20: 
if ( MQIACTR_longlongoption )
{ 
IGNACTR = MINACTR;
} 
else
{ 
 /* line 720: */
IGNACTR = OINACTR;
} 
break;
case 21: 
if ( MQIACTR_longlongoption )
{ 
IGNACTR = QINACTR;
} 
else
{ 
 /* line 721: */
IGNACTR = SINACTR;
} 
break;
case 22: 
if ( MQIACTR_longlongoption )
{ 
IGNACTR = UINACTR;
} 
else
{ 
 /* line 722: */
IGNACTR = WINACTR;
} 
break;
case 23: 
 /* line 723: */
IGNACTR = YINACTR;
break;
case 24: 
if ( MQIACTR_longlongoption )
{ 
IGNACTR = AJNACTR;
} 
else
{ 
 /* line 724: */
IGNACTR = CJNACTR;
} 
break;
case 25: 
if ( MQIACTR_longlongoption )
{ 
IGNACTR = EJNACTR;
} 
else
{ 
 /* line 725: */
IGNACTR = GJNACTR;
} 
break;
case 26: 
 /* line 726: */
IGNACTR = IJNACTR;
break;
case 27: 
 /* line 727: */
IGNACTR = KJNACTR;
break;
case 28: 
{ 
WXIACTR_assert(MJNACTR, A68_FALSE);
 /* line 728: */
IGNACTR = NJNACTR;
} 
break;
case 29: 
{ 
WXIACTR_assert(PJNACTR, A68_FALSE);
 /* line 729: */
IGNACTR = QJNACTR;
} 
break;
case 30: 
{ 
WXIACTR_assert(SJNACTR, A68_FALSE);
 /* line 730: */
IGNACTR = TJNACTR;
} 
break;
default: 
ROAAOSF_whole( Mode, 0, &XJNACTR );
WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(WJNACTR,XJNACTR),YJNACTR), A68_FALSE);
 /* line 731: */
 /* line 732: */
IGNACTR = ZJNACTR;
break;
} 
} 
A_PROC_EXIT(builtinmode);
*ReturnedValue = (IGNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CKNACTR_givectype(A68_INT  Mode, A68_BOOL  Tagged, A68_VC  *ReturnedValue)
{ 
A68_INT  DKNACTR_basicmode;
A68_BOOL  EKNACTR;  /* clause result */
A68_VC  GKNACTR;  /* clause result */
A68_VC  IKNACTR;  /* avoid structure result */
A68_VC  KKNACTR;  /* clause result */
A68_VC  OKNACTR;  /* avoid structure result */
A68_VC  PKNACTR;  /* clause result */
A68_VC  QKNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(givectype);
 /* line 738: */
 /* line 739: */
 /* line 740: */
{ 
DKNACTR_basicmode = EOMACTR_deref(Mode);
 /* line 741: */
 /* line 742: */
 /* line 743: */
EKNACTR = (DKNACTR_basicmode<UFAACTR_firstnonfixedmode);
if ( EKNACTR )
{ 
 /* line 744: */
 /* line 745: */
EGNACTR_builtinmode( DKNACTR_basicmode, &IKNACTR );
GKNACTR = A_VC_PLUS(HKNACTR,IKNACTR);
} 
else
{ 
if ( Tagged )
{ 
KKNACTR = LKNACTR;
} 
else
{ 
KKNACTR = NKNACTR;
} 
 /* line 746: */
ROAAOSF_whole( DKNACTR_basicmode, 0, &OKNACTR );
GKNACTR = A_VC_PLUS(KKNACTR,OKNACTR);
} 
} 
 /* line 747: */
 /* line 748: */
PKNACTR = A_VC_PLUS(A_VC_PLUS(GKNACTR,A_HVEC(QKNACTR,' ',A68_CHAR )),A_C_TIMES('*',(Mode/VFAACTR_refmark)));
A_PROC_EXIT(givectype);
*ReturnedValue = (PKNACTR);
return;
} 
#undef NL

A68_INT  TKNACTR_givecvariabletype(A68_INT  Mode, A68_BOOL  Identity)
{ 
A68_INT  UKNACTR;  /* clause result */
A68_INT  VKNACTR;  /* clause result */
A_PROC_ENTRY(givecvariabletype);
 /* line 751: */
 /* line 753: */
 /* line 754: */
if ( Identity )
{ 
if ( FRMACTR_isfirmarray(Mode) )
{ 
UKNACTR = ETMACTR_derefmodeok(Mode);
} 
else
{ 
 /* line 755: */
 /* line 756: */
UKNACTR = Mode;
} 
} 
else
{ 
if ( FRMACTR_isfirmarray(Mode) )
{ 
VKNACTR = ETMACTR_derefmodeok(Mode);
} 
else
{ 
VKNACTR = Mode;
} 
 /* line 757: */
UKNACTR = ETMACTR_derefmodeok(VKNACTR);
} 
A_PROC_EXIT(givecvariabletype);
return( UKNACTR );
} 
#undef NL

A68_VOID  XKNACTR_ctype(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  YKNACTR;  /* clause result */
A68_VC  ZKNACTR;  /* avoid structure result */
A_PROC_ENTRY(ctype);
 /* line 760: */
CKNACTR_givectype( TKNACTR_givecvariabletype(Mode, A68_TRUE), A68_FALSE, &ZKNACTR );
YKNACTR = ZKNACTR;
A_PROC_EXIT(ctype);
*ReturnedValue = (YKNACTR);
return;
} 
#undef NL

A68_VOID  BLNACTR_cvartype(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  CLNACTR;  /* clause result */
A68_VC  DLNACTR;  /* avoid structure result */
A_PROC_ENTRY(cvartype);
 /* line 763: */
CKNACTR_givectype( Mode, A68_FALSE, &DLNACTR );
CLNACTR = DLNACTR;
A_PROC_EXIT(cvartype);
*ReturnedValue = (CLNACTR);
return;
} 
#undef NL

A68_VOID  FLNACTR_cast(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  GLNACTR;  /* clause result */
A68_VC  HLNACTR;  /* avoid structure result */
A68_VC  ILNACTR;  /* avoid structure result */
A_PROC_ENTRY(cast);
 /* line 766: */
XKNACTR_ctype( Mode, &HLNACTR );
JIAACTR_bracket( HLNACTR, &ILNACTR );
GLNACTR = ILNACTR;
A_PROC_EXIT(cast);
*ReturnedValue = (GLNACTR);
return;
} 
#undef NL

A68_VOID  KLNACTR_csizeof(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  MLNACTR;  /* clause result */
A68_VC  OLNACTR;  /* avoid structure result */
A_PROC_ENTRY(csizeof);
EGNACTR_builtinmode( Mode, &OLNACTR );
MLNACTR = A_VC_PLUS(NLNACTR,OLNACTR);
A_PROC_EXIT(csizeof);
*ReturnedValue = (MLNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QLNACTR_ctag(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  SLNACTR;  /* clause result */
A68_VC  ULNACTR;  /* avoid structure result */
A_PROC_ENTRY(ctag);
 /* line 771: */
ROAAOSF_whole( Mode, 0, &ULNACTR );
SLNACTR = A_VC_PLUS(TLNACTR,ULNACTR);
A_PROC_EXIT(ctag);
*ReturnedValue = (SLNACTR);
return;
} 
#undef NL

A68_VOID  WLNACTR_ctaggedtype(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  XLNACTR;  /* clause result */
A68_VC  YLNACTR;  /* avoid structure result */
A_PROC_ENTRY(ctaggedtype);
 /* line 774: */
CKNACTR_givectype( TKNACTR_givecvariabletype(Mode, A68_TRUE), A68_TRUE, &YLNACTR );
XLNACTR = YLNACTR;
A_PROC_EXIT(ctaggedtype);
*ReturnedValue = (XLNACTR);
return;
} 
#undef NL

A68_VOID  CMNACTR_alignnextstructfield(A68_INT  Fieldmode, A68_INT  Stream)
{ 
A68_193  DMNACTR;  /* collateral clause result */
A68_137  GMNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HMNACTR;  /* YIELD */
A68_VC  IMNACTR;  /* avoid structure result */
A68_137  JMNACTR;  /* OPERATORS - mode -> union mode */
A68_137  MMNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NMNACTR;  /* YIELD */
A68_VC  OMNACTR;  /* avoid structure result */
A68_137  PMNACTR;  /* OPERATORS - mode -> union mode */
A68_137  QMNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  RMNACTR;  /* YIELD */
A68_137  SMNACTR;  /* OPERATORS - mode -> union mode */
A68_136  TMNACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  UMNACTR;  /* optbool result */
A68_193  VMNACTR;  /* collateral clause result */
A68_137  YMNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZMNACTR;  /* YIELD */
A68_VC  ANNACTR;  /* avoid structure result */
A68_137  BNNACTR;  /* OPERATORS - mode -> union mode */
A68_137  ENNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FNNACTR;  /* YIELD */
A68_VC  GNNACTR;  /* avoid structure result */
A68_137  HNNACTR;  /* OPERATORS - mode -> union mode */
A68_137  INNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  JNNACTR;  /* YIELD */
A68_137  KNNACTR;  /* OPERATORS - mode -> union mode */
A68_136  LNNACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(alignnextstructfield);
 /* line 785: */
 /* line 786: */
 /* line 787: */
if ( (Fieldmode<PFAACTR_vectorrowofcharmode) )
{ 
 /* line 788: */
HMNACTR = FMNACTR ;
DMNACTR.data[0] = A_UNITE(GMNACTR,mode2,2,HMNACTR);
EGNACTR_builtinmode( Fieldmode, &IMNACTR );
DMNACTR.data[1] = A_UNITE(JMNACTR,mode2,2,IMNACTR);
 /* line 789: */
NMNACTR = LMNACTR ;
DMNACTR.data[2] = A_UNITE(MMNACTR,mode2,2,NMNACTR);
ROAAOSF_whole( ZLNACTR_padno+=1, 0, &OMNACTR );
DMNACTR.data[3] = A_UNITE(PMNACTR,mode2,2,OMNACTR);
 /* line 790: */
RMNACTR = ')' ;
DMNACTR.data[4] = A_UNITE(QMNACTR,mode1,1,RMNACTR);
DMNACTR.data[5] = A_UNITE(SMNACTR,mode4,4,EIAACTR_cnewline);
 /* line 791: */
MDMACTR_writecstream(A_HISVEC(TMNACTR,DMNACTR,6,A68_137 ), Stream);
} 
else
{ 
UMNACTR = (Fieldmode<VFAACTR_refmark);
if ( UMNACTR )
{ /* line 792: */
UMNACTR = XRMACTR_isistruct(Fieldmode);
}
 /* line 793: */
if ( UMNACTR )
{ 
 /* line 794: */
ZMNACTR = XMNACTR ;
VMNACTR.data[0] = A_UNITE(YMNACTR,mode2,2,ZMNACTR);
CKNACTR_givectype( Fieldmode, A68_FALSE, &ANNACTR );
VMNACTR.data[1] = A_UNITE(BNNACTR,mode2,2,ANNACTR);
 /* line 795: */
FNNACTR = DNNACTR ;
VMNACTR.data[2] = A_UNITE(ENNACTR,mode2,2,FNNACTR);
ROAAOSF_whole( ZLNACTR_padno+=1, 0, &GNNACTR );
VMNACTR.data[3] = A_UNITE(HNNACTR,mode2,2,GNNACTR);
 /* line 796: */
JNNACTR = ')' ;
VMNACTR.data[4] = A_UNITE(INNACTR,mode1,1,JNNACTR);
VMNACTR.data[5] = A_UNITE(KNNACTR,mode4,4,EIAACTR_cnewline);
 /* line 797: */
MDMACTR_writecstream(A_HISVEC(LNNACTR,VMNACTR,6,A68_137 ), Stream);
} 
} 
A_PROC_EXIT(alignnextstructfield);
return;
} 
#undef NL

A_STATIC A68_VOID  PNNACTR_writectypedef(A68_INT  Underefedmode, A68_INT  Stream, A68_BOOL  Pre_declare)
{ 
A68_INT  QNNACTR_mode;
A68_BOOL  RNNACTR;  /* optbool result */
A68_BITS  SNNACTR;  /* ADICOPS - >= */
A68_BOOL  TNNACTR;  /* clause result */
A68_VC  WNNACTR;  /* avoid structure result */
A68_VC  XNNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_153 * YNNACTR_entry;
A68_VC  BONACTR_typedef;
A68_VC  EONACTR;  /* clause result */
A68_VC  GONACTR;  /* avoid structure result */
A68_VC  KONACTR_comment;
A68_VC  LONACTR;  /* avoid structure result */
A68_VC  MONACTR_typedefname;
A68_93  OONACTR_emittagtypedef;   /* proc value of non-global proc */
A68_97  IPNACTR_emitdeflextypedef;   /* proc value of non-global proc */
A68_94  PQNACTR_emitincompletetype;   /* proc value of non-global proc */
A68_94  BRNACTR_emitproctypedef;   /* proc value of non-global proc */
A68_94  IVNACTR_emitvectortypedef;   /* proc value of non-global proc */
A68_94  GWNACTR_emitarraytypedef;   /* proc value of non-global proc */
A68_193  HXNACTR;  /* collateral clause result */
A68_137  IXNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JXNACTR;  /* avoid structure result */
A68_137  KXNACTR;  /* OPERATORS - mode -> union mode */
A68_137  LXNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  MXNACTR;  /* YIELD */
A68_137  NXNACTR;  /* OPERATORS - mode -> union mode */
A68_137  QXNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RXNACTR;  /* YIELD */
A68_137  SXNACTR;  /* OPERATORS - mode -> union mode */
A68_136  TXNACTR;  /* OPERATORS - istruct -> vector */
A68_INT  UXNACTR_deflexmode;
A68_BOOL  VXNACTR;  /* clause result */
A68_151  WXNACTR;  /* avoid structure result */
A68_151  XXNACTR_umodes;
A68_INT * YXNACTR_umode;
A68_INT  ZXNACTR;  /* forall loop counter */
A68_BITS  AYNACTR;  /* ADICOPS - >= */
A68_204  BYNACTR;  /* collateral clause result */
A68_137  EYNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FYNACTR;  /* YIELD */
A68_VC  GYNACTR;  /* avoid structure result */
A68_137  HYNACTR;  /* OPERATORS - mode -> union mode */
A68_137  KYNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LYNACTR;  /* YIELD */
A68_137  MYNACTR;  /* OPERATORS - mode -> union mode */
A68_136  NYNACTR;  /* OPERATORS - istruct -> vector */
A68_INT  OYNACTR_i;
A68_INT  PYNACTR;  /* to part of loop */
A68_INT  QYNACTR_thismode;
A68_BOOL  RYNACTR;  /* clause result */
A68_205  SYNACTR;  /* collateral clause result */
A68_VC  TYNACTR;  /* avoid structure result */
A68_137  UYNACTR;  /* OPERATORS - mode -> union mode */
A68_137  XYNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YYNACTR;  /* YIELD */
A68_VC  ZYNACTR;  /* avoid structure result */
A68_137  AZNACTR;  /* OPERATORS - mode -> union mode */
A68_137  BZNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  CZNACTR;  /* YIELD */
A68_137  DZNACTR;  /* OPERATORS - mode -> union mode */
A68_136  EZNACTR;  /* OPERATORS - istruct -> vector */
A68_201  FZNACTR;  /* collateral clause result */
A68_137  IZNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JZNACTR;  /* YIELD */
A68_137  KZNACTR;  /* OPERATORS - mode -> union mode */
A68_136  LZNACTR;  /* OPERATORS - istruct -> vector */
A68_INT  MZNACTR_deflexmode;
A68_BOOL  NZNACTR;  /* clause result */
A68_152  OZNACTR;  /* avoid structure result */
A68_152  PZNACTR_fields;
A68_149 * QZNACTR_field;
A68_INT  RZNACTR;  /* forall loop counter */
A68_BITS  SZNACTR;  /* ADICOPS - >= */
A68_201  TZNACTR;  /* collateral clause result */
A68_VC  WZNACTR;  /* avoid structure result */
A68_VC  XZNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_137  YZNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZZNACTR;  /* YIELD */
A68_137  AAOACTR;  /* OPERATORS - mode -> union mode */
A68_136  BAOACTR;  /* OPERATORS - istruct -> vector */
A68_149 * CAOACTR_field;
A68_INT  DAOACTR;  /* forall loop counter */
A68_205  EAOACTR;  /* collateral clause result */
A68_VC  FAOACTR;  /* avoid structure result */
A68_137  GAOACTR;  /* OPERATORS - mode -> union mode */
A68_137  HAOACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  IAOACTR;  /* YIELD */
A68_VC  JAOACTR;  /* avoid structure result */
A68_137  KAOACTR;  /* OPERATORS - mode -> union mode */
A68_137  LAOACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  MAOACTR;  /* YIELD */
A68_137  NAOACTR;  /* OPERATORS - mode -> union mode */
A68_136  OAOACTR;  /* OPERATORS - istruct -> vector */
A68_201  PAOACTR;  /* collateral clause result */
A68_137  SAOACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TAOACTR;  /* YIELD */
A68_137  UAOACTR;  /* OPERATORS - mode -> union mode */
A68_136  VAOACTR;  /* OPERATORS - istruct -> vector */
A68_INT  WAOACTR_elemmode;
A68_BITS  XAOACTR;  /* ADICOPS - >= */
A68_197  YAOACTR;  /* collateral clause result */
A68_VC  BBOACTR;  /* avoid structure result */
A68_137  CBOACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DBOACTR;  /* YIELD */
A68_137  EBOACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  FBOACTR;  /* YIELD */
A68_137  GBOACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  HBOACTR;  /* YIELD */
A68_VC  IBOACTR;  /* avoid structure result */
A68_137  JBOACTR;  /* OPERATORS - mode -> union mode */
A68_137  KBOACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  LBOACTR;  /* YIELD */
A68_VC  MBOACTR;  /* avoid structure result */
A68_137  NBOACTR;  /* OPERATORS - mode -> union mode */
A68_137  QBOACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RBOACTR;  /* YIELD */
A68_137  SBOACTR;  /* OPERATORS - mode -> union mode */
A68_136  TBOACTR;  /* OPERATORS - istruct -> vector */
A68_INT  UBOACTR_elemmode;
A68_205  VBOACTR;  /* collateral clause result */
A68_VC  YBOACTR;  /* clause result */
A68_VC  ACOACTR;  /* avoid structure result */
A68_137  CCOACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DCOACTR;  /* YIELD */
A68_137  ECOACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  FCOACTR;  /* YIELD */
A68_VC  GCOACTR;  /* avoid structure result */
A68_137  HCOACTR;  /* OPERATORS - mode -> union mode */
A68_137  KCOACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LCOACTR;  /* YIELD */
A68_137  MCOACTR;  /* OPERATORS - mode -> union mode */
A68_136  NCOACTR;  /* OPERATORS - istruct -> vector */
A68_BITS * OCOACTR;  /* YIELD */
A68_BITS * PCOACTR;  /* YIELD */
A_PROC_ENTRY(writectypedef);
 /* line 827: */
{ 
QNNACTR_mode = EOMACTR_deref(Underefedmode);
 /* line 834: */
 /* line 835: */
RNNACTR = (TKNACTR_givecvariabletype(Underefedmode, A68_TRUE)<VFAACTR_refmark);
if ( RNNACTR )
{ /* line 836: */
RNNACTR = (QNNACTR_mode>=UFAACTR_firstnonfixedmode);
}
if ( RNNACTR )
{ /* line 837: */
SNNACTR = LTMACTR_flags(QNNACTR_mode) ;
RNNACTR = !A_LB_GE(SNNACTR,AOMACTR_typedefoutput);
}
 /* line 838: */
TNNACTR = RNNACTR;
if ( TNNACTR )
{ 
ROAAOSF_whole( QNNACTR_mode, 0, &WNNACTR );
KNMACTR_debugmessage(5, A_VC_PLUS(A_VC_PLUS(VNNACTR,WNNACTR),A_HVEC(XNNACTR,')',A68_CHAR )));
 /* line 840: */
YNNACTR_entry = (&A_R1INDEX(WNMACTR_modes,QNNACTR_mode));
 /* line 842: */
BONACTR_typedef = AONACTR;
 /* line 843: */
 /* line 844: */
if ( AQIACTR_verboseoption )
{ 
 /* line 845: */
 /* line 846: */
WCNACTR_modename( QNNACTR_mode, &GONACTR );
EONACTR = A_VC_PLUS(A_VC_PLUS(FONACTR,GONACTR),HONACTR);
} 
else
{ 
EONACTR = JONACTR;
} 
KONACTR_comment = EONACTR;
 /* line 847: */
BLNACTR_cvartype( QNNACTR_mode, &LONACTR );
MONACTR_typedefname = LONACTR;
 /* line 849: */
A_CLOSURE( OONACTR_emittagtypedef, PONACTR_emittagtypedef, QONACTR_emittagtypedef );
(( QONACTR_emittagtypedef * ) ( OONACTR_emittagtypedef.nonlocals )) -> BONACTR_typedef = BONACTR_typedef;
(( QONACTR_emittagtypedef * ) ( OONACTR_emittagtypedef.nonlocals )) -> KONACTR_comment = KONACTR_comment;
(( QONACTR_emittagtypedef * ) ( OONACTR_emittagtypedef.nonlocals )) -> Stream = Stream;
 /* line 857: */
A_CLOSURE( IPNACTR_emitdeflextypedef, JPNACTR_emitdeflextypedef, KPNACTR_emitdeflextypedef );
(( KPNACTR_emitdeflextypedef * ) ( IPNACTR_emitdeflextypedef.nonlocals )) -> Stream = Stream;
(( KPNACTR_emitdeflextypedef * ) ( IPNACTR_emitdeflextypedef.nonlocals )) -> KONACTR_comment = KONACTR_comment;
 /* line 872: */
 /* line 873: */
A_CLOSURE( PQNACTR_emitincompletetype, QQNACTR_emitincompletetype, RQNACTR_emitincompletetype );
(( RQNACTR_emitincompletetype * ) ( PQNACTR_emitincompletetype.nonlocals )) -> YNNACTR_entry = YNNACTR_entry;
(( RQNACTR_emitincompletetype * ) ( PQNACTR_emitincompletetype.nonlocals )) -> QNNACTR_mode = QNNACTR_mode;
(( RQNACTR_emitincompletetype * ) ( PQNACTR_emitincompletetype.nonlocals )) -> Stream = Stream;
 /* line 879: */
 /* line 880: */
 /* line 882: */
A_CLOSURE( BRNACTR_emitproctypedef, CRNACTR_emitproctypedef, DRNACTR_emitproctypedef );
(( DRNACTR_emitproctypedef * ) ( BRNACTR_emitproctypedef.nonlocals )) -> Pre_declare = Pre_declare;
(( DRNACTR_emitproctypedef * ) ( BRNACTR_emitproctypedef.nonlocals )) -> PQNACTR_emitincompletetype = PQNACTR_emitincompletetype;
(( DRNACTR_emitproctypedef * ) ( BRNACTR_emitproctypedef.nonlocals )) -> YNNACTR_entry = YNNACTR_entry;
(( DRNACTR_emitproctypedef * ) ( BRNACTR_emitproctypedef.nonlocals )) -> QNNACTR_mode = QNNACTR_mode;
(( DRNACTR_emitproctypedef * ) ( BRNACTR_emitproctypedef.nonlocals )) -> Stream = Stream;
(( DRNACTR_emitproctypedef * ) ( BRNACTR_emitproctypedef.nonlocals )) -> OONACTR_emittagtypedef = OONACTR_emittagtypedef;
 /* line 948: */
 /* line 949: */
 /* line 950: */
A_CLOSURE( IVNACTR_emitvectortypedef, JVNACTR_emitvectortypedef, KVNACTR_emitvectortypedef );
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> Pre_declare = Pre_declare;
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> PQNACTR_emitincompletetype = PQNACTR_emitincompletetype;
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> QNNACTR_mode = QNNACTR_mode;
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> Stream = Stream;
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> OONACTR_emittagtypedef = OONACTR_emittagtypedef;
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> YNNACTR_entry = YNNACTR_entry;
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> IPNACTR_emitdeflextypedef = IPNACTR_emitdeflextypedef;
 /* line 973: */
 /* line 974: */
 /* line 975: */
A_CLOSURE( GWNACTR_emitarraytypedef, HWNACTR_emitarraytypedef, IWNACTR_emitarraytypedef );
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> Pre_declare = Pre_declare;
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> PQNACTR_emitincompletetype = PQNACTR_emitincompletetype;
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> QNNACTR_mode = QNNACTR_mode;
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> Stream = Stream;
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> OONACTR_emittagtypedef = OONACTR_emittagtypedef;
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> YNNACTR_entry = YNNACTR_entry;
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> IPNACTR_emitdeflextypedef = IPNACTR_emitdeflextypedef;
 /* line 998: */
 /* line 1000: */
switch ( IOMACTR_modetype(QNNACTR_mode) )
{ 
case 1: 
 /* line 1002: */
HXNACTR.data[0] = A_UNITE(IXNACTR,mode2,2,BONACTR_typedef);
XKNACTR_ctype( HTMACTR_auxmode(QNNACTR_mode), &JXNACTR );
HXNACTR.data[1] = A_UNITE(KXNACTR,mode2,2,JXNACTR);
MXNACTR = ' ' ;
HXNACTR.data[2] = A_UNITE(LXNACTR,mode1,1,MXNACTR);
 /* line 1003: */
HXNACTR.data[3] = A_UNITE(NXNACTR,mode2,2,MONACTR_typedefname);
 /* line 1004: */
RXNACTR = A_VC_PLUS(PXNACTR,KONACTR_comment) ;
HXNACTR.data[4] = A_UNITE(QXNACTR,mode2,2,RXNACTR);
HXNACTR.data[5] = A_UNITE(SXNACTR,mode4,4,EIAACTR_cnewline);
 /* line 1005: */
 /* line 1006: */
 /* line 1008: */
MDMACTR_writecstream(A_HISVEC(TXNACTR,HXNACTR,6,A68_137 ), Stream);
break;
case 2: 
 /* line 1010: */
A_CALLPROC(BRNACTR_emitproctypedef,(),((BRNACTR_emitproctypedef).nonlocals));
break;
case 3: 
 /* line 1012: */
A_CALLPROC(BRNACTR_emitproctypedef,(),((BRNACTR_emitproctypedef).nonlocals));
break;
case 4: 
 /* line 1013: */
 /* line 1015: */
if ( Pre_declare )
{ 
A_CALLPROC(PQNACTR_emitincompletetype,(),((PQNACTR_emitincompletetype).nonlocals));
} 
else
{ 
{ 
UXNACTR_deflexmode = HCNACTR_finddeflexmode(QNNACTR_mode);
 /* line 1016: */
 /* line 1017: */
 /* line 1018: */
VXNACTR = (UXNACTR_deflexmode==QNNACTR_mode);
if ( VXNACTR )
{ 
LUMACTR_modelistextra( QNNACTR_mode, &WXNACTR );
XXNACTR_umodes = WXNACTR;
 /* line 1020: */
 /* line 1021: */
ZXNACTR = XXNACTR_umodes.upb -1;
YXNACTR_umode = XXNACTR_umodes.data;
for (;ZXNACTR-- >= 0;
(YXNACTR_umode++
) )
{
 /* line 1022: */
PNNACTR_writectypedef((*YXNACTR_umode), Stream, A68_FALSE);
}
 /* line 1024: */
 /* line 1025: */
 /* line 1027: */
AYNACTR = LTMACTR_flags(QNNACTR_mode) ;
if ( !A_LB_GE(AYNACTR,AOMACTR_typedefoutput) )
{ 
FYNACTR = DYNACTR ;
BYNACTR.data[0] = A_UNITE(EYNACTR,mode2,2,FYNACTR);
 /* line 1028: */
QLNACTR_ctag( QNNACTR_mode, &GYNACTR );
BYNACTR.data[1] = A_UNITE(HYNACTR,mode2,2,GYNACTR);
 /* line 1030: */
LYNACTR = JYNACTR ;
BYNACTR.data[2] = A_UNITE(KYNACTR,mode2,2,LYNACTR);
BYNACTR.data[3] = A_UNITE(MYNACTR,mode4,4,EIAACTR_cnewline);
 /* line 1031: */
MDMACTR_writecstream(A_HISVEC(NYNACTR,BYNACTR,4,A68_137 ), Stream);
 /* line 1032: */
 /* line 1033: */
PYNACTR = XXNACTR_umodes.upb;
for ( OYNACTR_i = 1;
OYNACTR_i <= PYNACTR;
OYNACTR_i += 1 )
{ 
 /* line 1034: */
{ 
QYNACTR_thismode = (*(&A_VINDEX(XXNACTR_umodes,OYNACTR_i)));
 /* line 1035: */
 /* line 1036: */
 /* line 1038: */
RYNACTR = (QYNACTR_thismode!=UEAACTR_voidmode);
if ( RYNACTR )
{ 
WLNACTR_ctaggedtype( QYNACTR_thismode, &TYNACTR );
SYNACTR.data[0] = A_UNITE(UYNACTR,mode2,2,TYNACTR);
 /* line 1039: */
YYNACTR = WYNACTR ;
SYNACTR.data[1] = A_UNITE(XYNACTR,mode2,2,YYNACTR);
ROAAOSF_whole( OYNACTR_i, 0, &ZYNACTR );
SYNACTR.data[2] = A_UNITE(AZNACTR,mode2,2,ZYNACTR);
 /* line 1041: */
CZNACTR = ';' ;
SYNACTR.data[3] = A_UNITE(BZNACTR,mode1,1,CZNACTR);
SYNACTR.data[4] = A_UNITE(DZNACTR,mode4,4,EIAACTR_cnewline);
 /* line 1042: */
 /* line 1043: */
MDMACTR_writecstream(A_HISVEC(EZNACTR,SYNACTR,5,A68_137 ), Stream);
} 
} 
}
 /* line 1045: */
 /* line 1044: */
JZNACTR = HZNACTR ;
FZNACTR.data[0] = A_UNITE(IZNACTR,mode2,2,JZNACTR);
FZNACTR.data[1] = A_UNITE(KZNACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(LZNACTR,FZNACTR,2,A68_137 ), Stream);
 /* line 1046: */
 /* line 1047: */
 /* line 1048: */
A_CALLPROC(OONACTR_emittagtypedef,(QNNACTR_mode),(QNNACTR_mode,(OONACTR_emittagtypedef).nonlocals));
} 
} 
else
{ 
 /* line 1049: */
 /* line 1051: */
A_CALLPROC(IPNACTR_emitdeflextypedef,(QNNACTR_mode, UXNACTR_deflexmode),(QNNACTR_mode, UXNACTR_deflexmode,(IPNACTR_emitdeflextypedef).nonlocals));
} 
} 
} 
break;
case 5: 
 /* line 1052: */
 /* line 1054: */
if ( Pre_declare )
{ 
A_CALLPROC(PQNACTR_emitincompletetype,(),((PQNACTR_emitincompletetype).nonlocals));
} 
else
{ 
{ 
MZNACTR_deflexmode = HCNACTR_finddeflexmode(QNNACTR_mode);
 /* line 1055: */
 /* line 1056: */
 /* line 1057: */
NZNACTR = (MZNACTR_deflexmode==QNNACTR_mode);
if ( NZNACTR )
{ 
EVMACTR_structfields( QNNACTR_mode, &OZNACTR );
PZNACTR_fields = OZNACTR;
 /* line 1059: */
 /* line 1060: */
RZNACTR = PZNACTR_fields.upb -1;
QZNACTR_field = PZNACTR_fields.data;
for (;RZNACTR-- >= 0;
(QZNACTR_field++
) )
{
 /* line 1061: */
 /* line 1062: */
PNNACTR_writectypedef((*(&(QZNACTR_field->Mode))), Stream, A68_FALSE);
}
 /* line 1064: */
 /* line 1065: */
 /* line 1067: */
SZNACTR = LTMACTR_flags(QNNACTR_mode) ;
if ( !A_LB_GE(SZNACTR,AOMACTR_typedefoutput) )
{ 
QLNACTR_ctag( QNNACTR_mode, &WZNACTR );
ZZNACTR = A_VC_PLUS(A_VC_PLUS(VZNACTR,WZNACTR),A_HVEC(XZNACTR,'{',A68_CHAR )) ;
TZNACTR.data[0] = A_UNITE(YZNACTR,mode2,2,ZZNACTR);
TZNACTR.data[1] = A_UNITE(AAOACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(BAOACTR,TZNACTR,2,A68_137 ), Stream);
 /* line 1068: */
 /* line 1069: */
DAOACTR = PZNACTR_fields.upb -1;
CAOACTR_field = PZNACTR_fields.data;
for (;DAOACTR-- >= 0;
(CAOACTR_field++
) )
{
 /* line 1071: */
WLNACTR_ctaggedtype( (*(&(CAOACTR_field->Mode))), &FAOACTR );
EAOACTR.data[0] = A_UNITE(GAOACTR,mode2,2,FAOACTR);
 /* line 1072: */
IAOACTR = ' ' ;
EAOACTR.data[1] = A_UNITE(HAOACTR,mode1,1,IAOACTR);
RFNACTR_cfieldname( CAOACTR_field, &JAOACTR );
EAOACTR.data[2] = A_UNITE(KAOACTR,mode2,2,JAOACTR);
 /* line 1073: */
MAOACTR = ';' ;
EAOACTR.data[3] = A_UNITE(LAOACTR,mode1,1,MAOACTR);
EAOACTR.data[4] = A_UNITE(NAOACTR,mode4,4,EIAACTR_cnewline);
 /* line 1074: */
MDMACTR_writecstream(A_HISVEC(OAOACTR,EAOACTR,5,A68_137 ), Stream);
 /* line 1075: */
 /* line 1076: */
CMNACTR_alignnextstructfield((*(&(CAOACTR_field->Mode))), Stream);
}
 /* line 1077: */
TAOACTR = RAOACTR ;
PAOACTR.data[0] = A_UNITE(SAOACTR,mode2,2,TAOACTR);
PAOACTR.data[1] = A_UNITE(UAOACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(VAOACTR,PAOACTR,2,A68_137 ), Stream);
 /* line 1078: */
 /* line 1079: */
 /* line 1080: */
A_CALLPROC(OONACTR_emittagtypedef,(QNNACTR_mode),(QNNACTR_mode,(OONACTR_emittagtypedef).nonlocals));
} 
} 
else
{ 
 /* line 1081: */
 /* line 1083: */
A_CALLPROC(IPNACTR_emitdeflextypedef,(QNNACTR_mode, MZNACTR_deflexmode),(QNNACTR_mode, MZNACTR_deflexmode,(IPNACTR_emitdeflextypedef).nonlocals));
} 
} 
} 
break;
case 6: 
 /* line 1084: */
 /* line 1086: */
if ( Pre_declare )
{ 
 /* line 1087: */
A_CALLPROC(PQNACTR_emitincompletetype,(),((PQNACTR_emitincompletetype).nonlocals));
} 
else
{ 
WAOACTR_elemmode = A_CALLPROC(UVMACTR_elementmode,(QNNACTR_mode),(QNNACTR_mode,(UVMACTR_elementmode).nonlocals));
 /* line 1088: */
PNNACTR_writectypedef(WAOACTR_elemmode, Stream, A68_FALSE);
 /* line 1090: */
 /* line 1091: */
 /* line 1093: */
XAOACTR = LTMACTR_flags(QNNACTR_mode) ;
if ( !A_LB_GE(XAOACTR,AOMACTR_typedefoutput) )
{ 
 /* line 1094: */
WLNACTR_ctaggedtype( WAOACTR_elemmode, &BBOACTR );
DBOACTR = A_VC_PLUS(ABOACTR,BBOACTR) ;
YAOACTR.data[0] = A_UNITE(CBOACTR,mode2,2,DBOACTR);
 /* line 1095: */
FBOACTR = ',' ;
YAOACTR.data[1] = A_UNITE(EBOACTR,mode1,1,FBOACTR);
 /* line 1096: */
 /* line 1097: */
if ( (VUMACTR_intextra(QNNACTR_mode)==0) )
{ 
HBOACTR = '1' ;
YAOACTR.data[2] = A_UNITE(GBOACTR,mode1,1,HBOACTR);
} 
else
{ 
 /* line 1098: */
ROAAOSF_whole( VUMACTR_intextra(QNNACTR_mode), 0, &IBOACTR );
YAOACTR.data[2] = A_UNITE(JBOACTR,mode2,2,IBOACTR);
} 
 /* line 1099: */
LBOACTR = ',' ;
YAOACTR.data[3] = A_UNITE(KBOACTR,mode1,1,LBOACTR);
QLNACTR_ctag( QNNACTR_mode, &MBOACTR );
YAOACTR.data[4] = A_UNITE(NBOACTR,mode2,2,MBOACTR);
 /* line 1101: */
RBOACTR = PBOACTR ;
YAOACTR.data[5] = A_UNITE(QBOACTR,mode2,2,RBOACTR);
YAOACTR.data[6] = A_UNITE(SBOACTR,mode4,4,EIAACTR_cnewline);
 /* line 1102: */
MDMACTR_writecstream(A_HISVEC(TBOACTR,YAOACTR,7,A68_137 ), Stream);
 /* line 1103: */
 /* line 1104: */
 /* line 1105: */
 /* line 1107: */
A_CALLPROC(OONACTR_emittagtypedef,(QNNACTR_mode),(QNNACTR_mode,(OONACTR_emittagtypedef).nonlocals));
} 
} 
break;
case 7: 
 /* line 1109: */
A_CALLPROC(GWNACTR_emitarraytypedef,(),((GWNACTR_emitarraytypedef).nonlocals));
break;
case 8: 
 /* line 1111: */
A_CALLPROC(IVNACTR_emitvectortypedef,(),((IVNACTR_emitvectortypedef).nonlocals));
break;
case 9: 
 /* line 1113: */
A_CALLPROC(GWNACTR_emitarraytypedef,(),((GWNACTR_emitarraytypedef).nonlocals));
break;
case 10: 
 /* line 1115: */
A_CALLPROC(IVNACTR_emitvectortypedef,(),((IVNACTR_emitvectortypedef).nonlocals));
break;
case 11: 
 /* line 1116: */
 /* line 1118: */
if ( Pre_declare )
{ 
 /* line 1119: */
A_CALLPROC(PQNACTR_emitincompletetype,(),((PQNACTR_emitincompletetype).nonlocals));
} 
else
{ 
UBOACTR_elemmode = A_CALLPROC(UVMACTR_elementmode,(QNNACTR_mode),(QNNACTR_mode,(UVMACTR_elementmode).nonlocals));
 /* line 1121: */
 /* line 1122: */
 /* line 1124: */
 /* line 1125: */
if ( NQIACTR_nostructresultoption )
{ 
YBOACTR = ZBOACTR;
} 
else
{ 
 /* line 1126: */
WLNACTR_ctaggedtype( UBOACTR_elemmode, &ACOACTR );
YBOACTR = ACOACTR;
} 
DCOACTR = A_VC_PLUS(BCOACTR,YBOACTR) ;
VBOACTR.data[0] = A_UNITE(CCOACTR,mode2,2,DCOACTR);
 /* line 1127: */
FCOACTR = ',' ;
VBOACTR.data[1] = A_UNITE(ECOACTR,mode1,1,FCOACTR);
QLNACTR_ctag( QNNACTR_mode, &GCOACTR );
VBOACTR.data[2] = A_UNITE(HCOACTR,mode2,2,GCOACTR);
 /* line 1129: */
LCOACTR = JCOACTR ;
VBOACTR.data[3] = A_UNITE(KCOACTR,mode2,2,LCOACTR);
VBOACTR.data[4] = A_UNITE(MCOACTR,mode4,4,EIAACTR_cnewline);
 /* line 1130: */
MDMACTR_writecstream(A_HISVEC(NCOACTR,VBOACTR,5,A68_137 ), Stream);
 /* line 1131: */
A_CALLPROC(OONACTR_emittagtypedef,(QNNACTR_mode),(QNNACTR_mode,(OONACTR_emittagtypedef).nonlocals));
 /* line 1132: */
OCOACTR = (&(YNNACTR_entry->Flags)) ;
(*OCOACTR) = (A68_BITS )((*(&(YNNACTR_entry->Flags)))|AOMACTR_typedefoutput);
 /* line 1134: */
 /* line 1135: */
 /* line 1136: */
 /* line 1137: */
PNNACTR_writectypedef(UBOACTR_elemmode, Stream, A68_FALSE);
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1139: */
 /* line 1140: */
 /* line 1141: */
if ( !Pre_declare )
{ 
 /* line 1142: */
 /* line 1143: */
PCOACTR = (&(YNNACTR_entry->Flags)) ;
(*PCOACTR) = (A68_BITS )((*(&(YNNACTR_entry->Flags)))|AOMACTR_typedefoutput);
} 
} 
} 
A_PROC_EXIT(writectypedef);
return;
} 
#undef NL

A68_VOID  SCOACTR_initialisemodetable(A68_208  Mdes, A68_INT  Nomodes)
{ 
A68_VC  WCOACTR;  /* avoid structure result */
A68_INT  YCOACTR_unset;
A68_94  ZCOACTR_initialisemodes;   /* proc value of non-global proc */
A68_93  LHOACTR_finalisemode;   /* proc value of non-global proc */
A68_214  ZIOACTR_generator;   /* proc value of non-global proc */
A68_155  EJOACTR;  /* avoid structure result */
A68_INT  FJOACTR_i;
A68_INT  GJOACTR;  /* to part of loop */
A68_INT  HJOACTR_i;
A68_INT  IJOACTR;  /* to part of loop */
A68_INT * JJOACTR;  /* YIELD */
A68_BITS * KJOACTR;  /* YIELD */
A68_INT  LJOACTR_i;
A68_INT  MJOACTR;  /* to part of loop */
A68_INT * NJOACTR;  /* YIELD */
A68_INT  OJOACTR_i;
A68_INT  PJOACTR;  /* to part of loop */
A68_VC  RJOACTR;  /* avoid structure result */
A68_VC  TJOACTR;  /* avoid structure result */
A68_INT  WJOACTR_i;
A68_INT  XJOACTR;  /* to part of loop */
A68_INT  YJOACTR_deflex;
A68_VC  CKOACTR;  /* avoid structure result */
A68_VC  EKOACTR;  /* avoid structure result */
A68_VC  GKOACTR;  /* avoid structure result */
A68_VC  IKOACTR;  /* avoid structure result */
A_PROC_ENTRY(initialisemodetable);
 /* line 1154: */
 /* line 1155: */
{ 
ROAAOSF_whole( Mdes.dim[0].upb, 0, &WCOACTR );
KNMACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(VCOACTR,WCOACTR),XCOACTR));
 /* line 1157: */
YCOACTR_unset = (-1);
 /* line 1159: */
 /* line 1160: */
 /* line 1164: */
A_CLOSURE( ZCOACTR_initialisemodes, ADOACTR_initialisemodes, BDOACTR_initialisemodes );
(( BDOACTR_initialisemodes * ) ( ZCOACTR_initialisemodes.nonlocals )) -> YCOACTR_unset = YCOACTR_unset;
(( BDOACTR_initialisemodes * ) ( ZCOACTR_initialisemodes.nonlocals )) -> Mdes = Mdes;
 /* line 1312: */
A_CLOSURE( LHOACTR_finalisemode, MHOACTR_finalisemode, NHOACTR_finalisemode );
(( NHOACTR_finalisemode * ) ( LHOACTR_finalisemode.nonlocals )) -> LHOACTR_finalisemode = LHOACTR_finalisemode;
 /* line 1401: */
A_CLOSURE( ZIOACTR_generator, AJOACTR_generator, BJOACTR_generator );
(( BJOACTR_generator * ) ( ZIOACTR_generator.nonlocals )) -> Nomodes = Nomodes;
A_CALLPROC(ZIOACTR_generator,(A68_FALSE, &EJOACTR),(A68_FALSE, &EJOACTR,(ZIOACTR_generator).nonlocals));
WNMACTR_modes = EJOACTR;
 /* line 1402: */
A_CALLPROC(ZCOACTR_initialisemodes,(),((ZCOACTR_initialisemodes).nonlocals));
 /* line 1404: */
 /* line 1405: */
GJOACTR = Nomodes;
for ( FJOACTR_i = LFAACTR_shortcomplmode;
FJOACTR_i <= GJOACTR;
FJOACTR_i += 1 )
{ 
 /* line 1406: */
 /* line 1407: */
A_CALLPROC(LHOACTR_finalisemode,(FJOACTR_i),(FJOACTR_i,(LHOACTR_finalisemode).nonlocals));
}
 /* line 1414: */
 /* line 1415: */
IJOACTR = (UFAACTR_firstnonfixedmode-1);
for ( HJOACTR_i = PEAACTR_nomode;
HJOACTR_i <= IJOACTR;
HJOACTR_i += 1 )
{ 
JJOACTR = (&((&A_R1INDEX(WNMACTR_modes,HJOACTR_i))->Deflexedmode)) ;
(*JJOACTR) = HJOACTR_i;
 /* line 1416: */
 /* line 1417: */
KJOACTR = (&((&A_R1INDEX(WNMACTR_modes,HJOACTR_i))->Flags)) ;
(*KJOACTR) = (A68_BITS )((*(&((&A_R1INDEX(WNMACTR_modes,HJOACTR_i))->Flags)))|BOMACTR_deflexoutput);
}
 /* line 1418: */
 /* line 1419: */
MJOACTR = Nomodes;
for ( LJOACTR_i = UFAACTR_firstnonfixedmode;
LJOACTR_i <= MJOACTR;
LJOACTR_i += 1 )
{ 
NJOACTR = (&((&A_R1INDEX(WNMACTR_modes,LJOACTR_i))->Deflexedmode)) ;
(*NJOACTR) = PEAACTR_nomode;
}
 /* line 1421: */
 /* line 1422: */
 /* line 1423: */
if ( SNMACTR_debugging() )
{ 
 /* line 1424: */
PJOACTR = Nomodes;
for ( OJOACTR_i = UFAACTR_firstnonfixedmode;
OJOACTR_i <= PJOACTR;
OJOACTR_i += 1 )
{ 
 /* line 1425: */
 /* line 1426: */
ROAAOSF_whole( OJOACTR_i, 0, &RJOACTR );
WCNACTR_modename( OJOACTR_i, &TJOACTR );
KNMACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(RJOACTR,SJOACTR),TJOACTR));
}
 /* line 1427: */
 /* line 1428: */
KNMACTR_debugmessage(5, VJOACTR);
} 
 /* line 1431: */
 /* line 1432: */
XJOACTR = Nomodes;
for ( WJOACTR_i = UFAACTR_firstnonfixedmode;
WJOACTR_i <= XJOACTR;
WJOACTR_i += 1 )
{ 
 /* line 1433: */
PNNACTR_writectypedef(WJOACTR_i, FSLACTR_modesstream, A68_FALSE);
 /* line 1434: */
 /* line 1435: */
 /* line 1436: */
if ( SNMACTR_debugging() )
{ 
YJOACTR_deflex = LZMACTR_deflexedmode(WJOACTR_i, A68_TRUE);
 /* line 1437: */
 /* line 1438: */
 /* line 1439: */
 /* line 1440: */
 /* line 1441: */
 /* line 1442: */
ROAAOSF_whole( WJOACTR_i, 0, &CKOACTR );
WCNACTR_modename( WJOACTR_i, &EKOACTR );
ROAAOSF_whole( YJOACTR_deflex, 0, &GKOACTR );
WCNACTR_modename( YJOACTR_deflex, &IKOACTR );
KNMACTR_debugmessage(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(CKOACTR,DKOACTR),EKOACTR),FKOACTR),GKOACTR),HKOACTR),IKOACTR));
} 
}
 /* line 1443: */
} 
A_PROC_EXIT(initialisemodetable);
return;
} 
#undef NL

A68_VOID  LKOACTR_declarectemporary(A68_INT  Mode, A68_VC  Commenttext, A68_127  *ReturnedValue)
{ 
A68_INT  MKOACTR_locdecstream;
A68_INT  NKOACTR_cvt;
A68_127  OKOACTR_newtemp;
A68_72 * PKOACTR;  /* YIELD */
A68_INT * QKOACTR;  /* YIELD */
A68_VC  RKOACTR;  /* avoid structure result */
A68_VC  SKOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TKOACTR;  /* OPERATORS - istruct -> vector */
A68_72  UKOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VKOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_137  WKOACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XKOACTR;  /* YIELD */
A68_136  YKOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  ZKOACTR;  /* optbool result */
A68_137  ELOACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FLOACTR;  /* YIELD */
A68_136  GLOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_137  HLOACTR;  /* OPERATORS - mode -> union mode */
A68_136  ILOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_127  JLOACTR;  /* clause result */
A_PROC_ENTRY(declarectemporary);
 /* line 1452: */
 /* line 1453: */
{ 
MKOACTR_locdecstream = QSLACTR_locdecstream(VRLACTR_currentlevel());
 /* line 1454: */
NKOACTR_cvt = TKNACTR_givecvariabletype(Mode, A68_TRUE);
 /* line 1455: */
 /* line 1456: */
PKOACTR = (&((&OKOACTR_newtemp)->Name)) ;
(*PKOACTR) = QIMACTR_newuniquename();
 /* line 1457: */
QKOACTR = (&((&OKOACTR_newtemp)->Mode)) ;
(*QKOACTR) = NKOACTR_cvt;
 /* line 1458: */
 /* line 1459: */
 /* line 1461: */
BLNACTR_cvartype( NKOACTR_cvt, &RKOACTR );
UKOACTR = (*(&((&OKOACTR_newtemp)->Name))) ;
XKOACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(RKOACTR,A_HVEC(SKOACTR,' ',A68_CHAR )),A_HISVEC(TKOACTR,UKOACTR,7,A68_CHAR )),A_HVEC(VKOACTR,';',A68_CHAR )) ;
MDMACTR_writecstream(A_HVEC(YKOACTR,A_UNITE(WKOACTR,mode2,2,XKOACTR),A68_137 ), MKOACTR_locdecstream);
 /* line 1462: */
ZKOACTR = AQIACTR_verboseoption;
if ( ZKOACTR )
{ /* line 1463: */
ZKOACTR = (Commenttext.upb>0);
}
 /* line 1464: */
if ( ZKOACTR )
{ 
 /* line 1466: */
 /* line 1467: */
FLOACTR = A_VC_PLUS(A_VC_PLUS(CLOACTR,Commenttext),DLOACTR) ;
MDMACTR_writecstream(A_HVEC(GLOACTR,A_UNITE(ELOACTR,mode2,2,FLOACTR),A68_137 ), MKOACTR_locdecstream);
} 
 /* line 1468: */
MDMACTR_writecstream(A_HVEC(ILOACTR,A_UNITE(HLOACTR,mode4,4,EIAACTR_cnewline),A68_137 ), MKOACTR_locdecstream);
 /* line 1469: */
 /* line 1470: */
JLOACTR = OKOACTR_newtemp;
} 
A_PROC_EXIT(declarectemporary);
*ReturnedValue = (JLOACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void DNMACTR(void)   /* initialise DECS modes */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","-dir",".","modes.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","./centities.m","./moduletracer.m","./coutput.m","./incvalue.m","./uniquenameserver.m","./incmode.m","./incinstallation.m","./environment.m","./environ.m","./common.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_88  TVMACTR;  /* procedure value */
A68_88  VVMACTR;  /* procedure value */
A68_88  XVMACTR;  /* procedure value */
A68_160  ZVMACTR;  /* procedure value */
A68_160  BWMACTR;  /* procedure value */
A68_215  LLOACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
THAACTR();   /* USE centities */
BCHACTR();   /* USE moduletracer */
PTLACTR();   /* USE coutput */
GKJACTR();   /* USE incvalue */
RHMACTR();   /* USE uniquenameserver */
ZDAACTR();   /* USE incmode */
ODAACTR();   /* USE incinstallation */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/src/modes.a68";
A_config.translation_time = "Wed May  5 17:38:59 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "CNMACTR (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:59 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS modes);
UEAALIB_a68config(LGAALIB_configinfo, HNMACTR);
 /* line 52: */
 /* line 55: */
 /* line 57: */
 /* line 76: */
 /* line 78: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 88: */
 /* line 94: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 111: */
 /* line 113: */
 /* line 115: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 125: */
 /* line 129: */
 /* line 131: */
 /* line 133: */
 /* line 136: */
 /* line 146: */
 /* line 156: */
 /* line 168: */
 /* line 178: */
 /* line 188: */
 /* line 198: */
 /* line 208: */
 /* line 218: */
 /* line 228: */
 /* line 238: */
 /* line 248: */
 /* line 258: */
 /* line 264: */
 /* line 280: */
 /* line 291: */
 /* line 295: */
 /* line 301: */
 /* line 310: */
 /* line 321: */
 /* line 336: */
 /* line 348: */
 /* line 359: */
 /* line 370: */
 /* line 384: */
 /* line 390: */
TVMACTR.fn.fn_global = HTMACTR_auxmode;
TVMACTR.nonlocals = A68_NIL;
SVMACTR_deproc = (TVMACTR);
 /* line 391: */
VVMACTR.fn.fn_global = HTMACTR_auxmode;
VVMACTR.nonlocals = A68_NIL;
UVMACTR_elementmode = (VVMACTR);
 /* line 392: */
XVMACTR.fn.fn_global = VUMACTR_intextra;
XVMACTR.nonlocals = A68_NIL;
WVMACTR_istructlength = (XVMACTR);
 /* line 394: */
ZVMACTR.fn.fn_global = LUMACTR_modelistextra;
ZVMACTR.nonlocals = A68_NIL;
YVMACTR_constituents = (ZVMACTR);
 /* line 395: */
BWMACTR.fn.fn_global = LUMACTR_modelistextra;
BWMACTR.nonlocals = A68_NIL;
AWMACTR_parameters = (BWMACTR);
 /* line 397: */
 /* line 399: */
CWMACTR_rowlist = (A68_166 *)A68_NIL;
DWMACTR_vectorlist = (A68_166 *)A68_NIL;
 /* line 400: */
EWMACTR_structlist = (A68_166 *)A68_NIL;
FWMACTR_unionlist = (A68_166 *)A68_NIL;
 /* line 402: */
 /* line 419: */
 /* line 429: */
 /* line 431: */
 /* line 500: */
 /* line 514: */
 /* line 600: */
 /* line 603: */
 /* line 614: */
 /* line 680: */
 /* line 688: */
 /* line 696: */
 /* line 734: */
 /* line 750: */
 /* line 759: */
 /* line 762: */
 /* line 765: */
 /* line 768: */
 /* line 770: */
 /* line 773: */
 /* line 776: */
ZLNACTR_padno = 0;
 /* line 778: */
 /* line 799: */
 /* line 1145: */
 /* line 1445: */
 /* line 1472: */
LLOACTR.fn.fn_global = LKOACTR_declarectemporary;
LLOACTR.nonlocals = A68_NIL;
KLOACTR_new = (LLOACTR);
 /* line 1474: */
 /* line 1476: */
 /* line 1492: */
/*SKIP*/;
A_PROC_EXIT(DECS modes);
} 
#undef NL
/* end of translation of modes.a68 */
