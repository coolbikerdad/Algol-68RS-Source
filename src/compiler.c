/* UNAME:MYABCTR */
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

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t59 ,struct A68t55 **,A68_BOOL *),(struct A68t59 ,struct A68t55 **,A68_BOOL *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE59,REF REF MODE55,REF BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t59 ,struct A68t55 *,struct A68t55 *,A68_BOOL ,A68_BOOL ),(struct A68t59 ,struct A68t55 *,struct A68t55 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE59,REF MODE55,REF MODE55,BOOL,BOOL) VOID */
struct A68t63 ;

A_PROCEDURE(A68_VOID ,A68t62,(A68_BOOL ,A68_BOOL ,struct A68t63 ),(A68_BOOL ,A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(BOOL,BOOL,MODE63) VOID */
struct A68t63{
struct A68t64 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_8)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(REF MODE64,REF MODE55,INT)  */
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
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_11)
A68_INT  Mode;
A_PAD_INT(PAD_12)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(MODE56,INT)  */
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
struct A68t57  mode7;
struct A68t69  mode8;
struct A68t70  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t65  A68_65 ;    /* UNION(LONG BITS,MODE66,VOID,MODE67,MODE68,MODE26,MODE57,MODE69,MODE70)  */
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

A_PROCEDURE(A68_VOID ,A68t73,(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t55 *),(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t55 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(BOOL,BOOL,BOOL,REF MODE55) VOID */

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

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t59 ,struct A68t63 ,struct A68t55 *,A68_BOOL ,A68_BOOL ,A68_BOOL ),(struct A68t59 ,struct A68t63 ,struct A68t55 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE59,MODE63,REF MODE55,BOOL,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t71 **,struct A68t63 ),(struct A68t71 **,struct A68t63 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF REF MODE71,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t71 **),(struct A68t71 **,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_INT ,struct A68t71 *,struct A68t68 *),(A68_VC ,A68_INT ,struct A68t71 *,struct A68t68 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,INT,REF MODE71) MODE68 */
struct A68t87{
A68_INT  Rdenno;
A_PAD_INT(PAD_21)
A68_INT  Mode;
A_PAD_INT(PAD_22)
A68_INT  Nods;
A_PAD_INT(PAD_23)
A68_INT  Deflex;
A_PAD_INT(PAD_24)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t89);
typedef struct A68t89  A68_89 ;    /* STRUCT 32 CHAR */
struct A68t88{
struct A68t89  N;
A_PAD_ISTRUCT(A68_89 ,PAD_25)
struct A68t89  F;
A_PAD_ISTRUCT(A68_89 ,PAD_26)
A68_INT  Level;
A_PAD_INT(PAD_27)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(MODE89,MODE89,INT)  */
struct A68t90{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_28)
A68_INT  Decno;
A_PAD_INT(PAD_29)
A68_INT  Level;
A_PAD_INT(PAD_30)
A68_INT  Mode;
A_PAD_INT(PAD_31)
A68_INT  Scope;
A_PAD_INT(PAD_32)
struct A68t90 * Rest;
};
typedef struct A68t90  A68_90 ;    /* STRUCT(MODE89,INT,INT,INT,INT,REF MODE90)  */
struct A68t91{
A68_INT  Rdenno;
A_PAD_INT(PAD_33)
A68_INT  Imode;
A_PAD_INT(PAD_34)
A68_INT  Length;
A_PAD_INT(PAD_35)
A68_INT  Deflex;
A_PAD_INT(PAD_36)
};
typedef struct A68t91  A68_91 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t100{
A68_INT  Mode;
A_PAD_INT(PAD_37)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT)  */
struct A68t92 { A68_INT mode; union {
A68_INT  mode1;
struct A68t93 * mode2;
struct A68t94 * mode3;
struct A68t95 * mode4;
struct A68t91 * mode5;
struct A68t96 * mode6;
struct A68t97 * mode7;
struct A68t87 * mode8;
struct A68t98 * mode9;
struct A68t99 * mode10;
struct A68t100  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t92  A68_92 ;    /* UNION(INT,REF MODE93,REF MODE94,REF MODE95,REF MODE91,REF MODE96,REF MODE97,REF MODE87,REF MODE98,REF MODE99,MODE100)  */
struct A68t93{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
struct A68t104 * Modelist;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT,REF MODE104)  */
struct A68t94{
A68_INT  Deproc;
A_PAD_INT(PAD_39)
struct A68t104 * Pars;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,REF MODE104)  */
struct A68t95{
A68_INT  Rdenno;
A_PAD_INT(PAD_40)
A68_INT  Deflex;
A_PAD_INT(PAD_41)
struct A68t103 * Sels;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT,INT,REF MODE103)  */
struct A68t96{
A68_INT  Deproc;
A_PAD_INT(PAD_42)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT)  */
struct A68t97{
A68_INT  Rdenno;
A_PAD_INT(PAD_43)
A68_INT  Vecmode;
A_PAD_INT(PAD_44)
A68_INT  Deflex;
A_PAD_INT(PAD_45)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT,INT,INT)  */
struct A68t98{
A68_INT  Mode;
A_PAD_INT(PAD_46)
struct A68t102 * Stenlist;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT,REF MODE102)  */
struct A68t99{
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Modeproc;
A_PAD_INT(PAD_48)
struct A68t101 * El;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT,INT,REF MODE101)  */
struct A68t101{
struct A68t99 * Am;
struct A68t101 * Rest;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(REF MODE99,REF MODE101)  */
struct A68t102{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_INT  Rdenno;
A_PAD_INT(PAD_50)
struct A68t102 * Rest;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(INT,INT,REF MODE102)  */
struct A68t103{
A68_INT  Mode;
A_PAD_INT(PAD_51)
A68_INT  Fieldno;
A_PAD_INT(PAD_52)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_53)
struct A68t103 * Rest;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT,INT,MODE89,REF MODE103)  */
struct A68t104{
A68_INT  Mode;
A_PAD_INT(PAD_54)
struct A68t104 * Rest;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(INT,REF MODE104)  */
A_VECTOR(struct A68t108 ,A68t107);
typedef struct A68t107  A68_107 ;    /* VECTOR [] MODE108 */
A_VECTOR(struct A68t88 ,A68t114);
typedef struct A68t114  A68_114 ;    /* VECTOR [] MODE88 */
struct A68t113 { A68_INT mode; union {
A68_VC  mode1;
struct A68t114  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t113  A68_113 ;    /* UNION(REF MODE26,REF MODE114)  */
struct A68t109{
struct A68t89  F;
A_PAD_ISTRUCT(A68_89 ,PAD_55)
A68_INT  No;
A_PAD_INT(PAD_56)
A68_INT  Nl;
A_PAD_INT(PAD_57)
A68_INT  Ng;
A_PAD_INT(PAD_58)
struct A68t113  U;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE89,INT,INT,INT,MODE113)  */
A_VECTOR(struct A68t112 ,A68t110);
typedef struct A68t110  A68_110 ;    /* VECTOR [] MODE112 */
struct A68t112{
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_59)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_60)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_61)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_62)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_63)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_64)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t56 ,A68t111);
typedef struct A68t111  A68_111 ;    /* VECTOR [] MODE56 */
struct A68t108{
struct A68t109  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_65)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_66)
struct A68t110  Keptinfo;
struct A68t111  Cnames;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(MODE109,MODE56,LONG INT,REF MODE110,REF MODE111)  */
struct A68t106{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_67)
struct A68t56  Lname;
A_PAD_ISTRUCT(A68_56 ,PAD_68)
struct A68t56  Gname;
A_PAD_ISTRUCT(A68_56 ,PAD_69)
struct A68t107  Specs;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(MODE56,MODE56,MODE56,REF MODE107)  */
struct A68t105{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_70)
struct A68t106  Ym;
struct A68t89  Formal;
A_PAD_ISTRUCT(A68_89 ,PAD_71)
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_72)
A68_INT  Level;
A_PAD_INT(PAD_73)
A68_INT  Ownlevel;
A_PAD_INT(PAD_74)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE89,MODE106,MODE89,MODE56,INT,INT)  */
struct A68t115{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_75)
struct A68t88  L;
struct A68t88  G;
A68_INT  Type;
A_PAD_INT(PAD_76)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE89,MODE88,MODE88,INT)  */
struct A68t116{
A68_INT  Norden;
A_PAD_INT(PAD_77)
A68_INT  Nomodes;
A_PAD_INT(PAD_78)
A68_INT  Nolabs;
A_PAD_INT(PAD_79)
A68_INT  Nodecnos;
A_PAD_INT(PAD_80)
A68_INT  Nomodules;
A_PAD_INT(PAD_81)
A68_INT  Nolibinds;
A_PAD_INT(PAD_82)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t117{
A68_INT  Type;
A_PAD_INT(PAD_83)
A68_INT  Moduleno;
A_PAD_INT(PAD_84)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_85)
struct A68t106  Ym;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,INT,MODE89,MODE106)  */
struct A68t118{
struct A68t115  Xmi;
struct A68t106  Ym;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(MODE115,MODE106)  */
struct A68t119{
struct A68t109  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_86)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(MODE109,MODE56)  */

A_PROCEDURE(A68_VOID ,A68t120,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE26,REF MODE26) VOID */
struct A68t122 ;
struct A68t123 ;
struct A68t124 ;

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t122 ,struct A68t123 ,struct A68t124 ,A68_INT ,struct A68t64 *),(struct A68t122 ,struct A68t123 ,struct A68t124 ,A68_INT ,struct A68t64 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE122,MODE123,REF MODE124,INT,REF MODE64) VOID */
struct A68t122{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_87)
A68_INT  Mode;
A_PAD_INT(PAD_88)
A68_INT  Rdenno;
A_PAD_INT(PAD_89)
A68_INT  Maxname;
A_PAD_INT(PAD_90)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t123{
A68_INT  Level;
A_PAD_INT(PAD_91)
A68_INT  Block;
A_PAD_INT(PAD_92)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,INT)  */
A_VECTOR(A68_INT ,A68t124);
typedef struct A68t124  A68_124 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t122 ,struct A68t64 *),(struct A68t122 ,struct A68t64 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE122,REF MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t122 ,A68_VC ,A68_VC ,struct A68t64 *),(struct A68t122 ,A68_VC ,A68_VC ,struct A68t64 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE122,REF MODE26,REF MODE26,REF MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t127,(A68_VC ),(A68_VC ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t128,(A68_VC ,A68_VC ,A68_BOOL ),(A68_VC ,A68_VC ,A68_BOOL ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE26,REF MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t129,(A68_VC ,struct A68t55 *),(A68_VC ,struct A68t55 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE26,REF MODE55) VOID */

A_PROCEDURE(A68_INT ,A68t130,(A68_INT ),(A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t131,(A68_INT ),(A68_INT ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t123 *),(struct A68t123 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC MODE123 */

A_PROCEDURE(A68_INT ,A68t133,(void),(void *));
typedef struct A68t133  A68_133 ;    /* PROC INT */

A_PROCEDURE(A68_BOOL ,A68t134,(void),(void *));
typedef struct A68t134  A68_134 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t135,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t136,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t137,(struct A68t123 ,struct A68t123 ),(struct A68t123 ,struct A68t123 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE123,MODE123) BOOL */

A_PROCEDURE(A68_BOOL ,A68t138,(struct A68t123 ),(struct A68t123 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE123) BOOL */

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t140,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t141,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT) REF MODE26 */
struct A68t143 ;

A_PROCEDURE(A68_VOID ,A68t142,(A68_INT ,struct A68t143 ),(A68_INT ,struct A68t143 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(INT,MODE143) VOID */
A_ROW(A68_VC ,A68t143,1);
typedef struct A68t143  A68_143 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t144,(void),(void *));
typedef struct A68t144  A68_144 ;    /* PROC BITS */
struct A68t145{
A68_INT  Cfile;
A_PAD_INT(PAD_93)
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT)  */
struct A68t146{
A68_INT  Seedfile;
A_PAD_INT(PAD_94)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT)  */
struct A68t147 { A68_INT mode; union {
struct A68t145  mode1;
struct A68t146  mode2;
struct A68t56  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t147  A68_147 ;    /* UNION(MODE145,MODE146,MODE56,VOID)  */

A_PROCEDURE(A68_VOID ,A68t148,(A68_VC ),(A68_VC ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE26) VOID */
struct A68t149{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_95)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_96)
struct A68t147  Nameseedorigin;
struct A68t150 * Used_modules;
A68_VC  Commandline;
struct A68t151 * Environment;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE147,REF MODE150,REF MODE26,REF MODE151)  */
struct A68t150{
A68_VC  Modinfo_file;
struct A68t150 * Next;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(REF MODE26,REF MODE150)  */
struct A68t151{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t151 * Next;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE151)  */
struct A68t153 ;
struct A68t154 ;

A_PROCEDURE(struct A68t153 *,A68t152,(A68_VC ,struct A68t154 *,A68_VC *),(A68_VC ,struct A68t154 *,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE26,REF MODE154,REF REF MODE26) REF MODE153 */
struct A68t153{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t154{
A68_VC  Dir;
struct A68t154 * Next;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(REF MODE26,REF MODE154)  */
struct A68t156 ;

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t156 ,struct A68t64 *,A68_INT ),(struct A68t156 ,struct A68t64 *,A68_INT ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE156,REF MODE64,INT) VOID */
struct A68t156{
A68_INT  Type;
A_PAD_INT(PAD_97)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_98)
A68_INT  Decno;
A_PAD_INT(PAD_99)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t157,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(INT) MODE123 */

A_PROCEDURE(A68_VOID ,A68t158,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t156 ,struct A68t71 **),(struct A68t156 ,struct A68t71 **,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE156,REF REF MODE71) VOID */
A_ROW(struct A68t161 ,A68t160,1);
typedef struct A68t160  A68_160 ;    /* [] MODE161 */
struct A68t161{
A68_INT  Mode;
A_PAD_INT(PAD_100)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_101)
struct A68t123  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_102)
A68_BITS  Flags;
A_PAD_BITS(PAD_103)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,INT,MODE123,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t156 ),(struct A68t156 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE156) VOID */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t164 ),(struct A68t164 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE164) VOID */
struct A68t164{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_104)
A68_INT  Status;
A_PAD_INT(PAD_105)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t164  A68_164 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t165,(A68_VC ,A68_INT ,struct A68t124 ,A68_INT ,A68_INT ,struct A68t123 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t124 ,A68_INT ,A68_INT ,struct A68t123 ,A68_BITS ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE26,INT,REF MODE124,INT,INT,MODE123,BITS) VOID */
A_ROW(struct A68t167 ,A68t166,1);
typedef struct A68t166  A68_166 ;    /* [] MODE167 */
struct A68t167{
A68_INT  Mode;
A_PAD_INT(PAD_107)
A68_INT  Resultmode;
A_PAD_INT(PAD_108)
A68_INT  Declevel;
A_PAD_INT(PAD_109)
struct A68t123  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_110)
struct A68t56  Fnprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_111)
struct A68t56  Envprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_112)
A68_BITS  Flags;
A_PAD_BITS(PAD_113)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,INT,INT,MODE123,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t168{
A68_INT  Mode;
A_PAD_INT(PAD_114)
A68_VC  String;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t169{
A68_INT  I;
A_PAD_INT(PAD_115)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t171,1);
typedef struct A68t171  A68_171 ;    /* [] INT */
struct A68t170{
A68_INT  Body;
A_PAD_INT(PAD_116)
A68_INT  Moduleno;
A_PAD_INT(PAD_117)
struct A68t171  Actuals;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(INT,INT,REF MODE171)  */
struct A68t172{
A68_INT  Mode;
A_PAD_INT(PAD_118)
A68_INT  Number;
A_PAD_INT(PAD_119)
A68_VC  Insert;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t174{
A68_INT  Moduleno;
A_PAD_INT(PAD_120)
A68_INT  I;
A_PAD_INT(PAD_121)
A68_INT  J;
A_PAD_INT(PAD_122)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t176,1);
typedef struct A68t176  A68_176 ;    /* [] REF MODE26 */
struct A68t175{
A68_INT  Moduleno;
A_PAD_INT(PAD_123)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t176  Ysnames;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE176)  */
struct A68t173 { A68_INT mode; union {
struct A68t170  mode1;
struct A68t174  mode2;
struct A68t175  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t173  A68_173 ;    /* UNION(MODE170,MODE174,MODE175)  */
struct A68t178{
A68_INT  Nochars;
A_PAD_INT(PAD_124)
A68_INT  Nocases;
A_PAD_INT(PAD_125)
A68_INT  W;
A_PAD_INT(PAD_126)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT,INT,INT)  */
struct A68t177{
struct A68t178  Info;
A68_VC  Text;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(MODE178,REF MODE26)  */
struct A68t179{
A68_VC  Representation;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(REF MODE26)  */
struct A68t181{
A68_INT  Mode;
A_PAD_INT(PAD_127)
A68_VC  Nu;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t182{
A68_INT  Mode;
A_PAD_INT(PAD_128)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_129)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t183{
A68_INT  Mode;
A_PAD_INT(PAD_130)
A68_VC  Denotation;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t184{
A68_INT  Fn;
A_PAD_INT(PAD_131)
A68_INT  Mode;
A_PAD_INT(PAD_132)
A68_INT  Param;
A_PAD_INT(PAD_133)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,INT,INT)  */
struct A68t185{
A68_INT  W;
A_PAD_INT(PAD_134)
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT)  */
struct A68t186{
A68_BOOL  Start;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(BOOL)  */
struct A68t187{
A68_INT  Fn;
A_PAD_INT(PAD_136)
A68_INT  Mode;
A_PAD_INT(PAD_137)
A68_BITS  Props;
A_PAD_BITS(PAD_138)
A68_INT  Param;
A_PAD_INT(PAD_139)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t188{
A68_INT  Fn;
A_PAD_INT(PAD_140)
A68_INT  Mode;
A_PAD_INT(PAD_141)
A68_BITS  Props;
A_PAD_BITS(PAD_142)
A68_INT  Resultmode;
A_PAD_INT(PAD_143)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t189{
A68_INT  Fn;
A_PAD_INT(PAD_144)
A68_BITS  Props;
A_PAD_BITS(PAD_145)
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,BITS)  */
struct A68t180 { A68_INT mode; union {
struct A68t69  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t179  mode4;
struct A68t57  mode5;
struct A68t181  mode6;
struct A68t168  mode7;
struct A68t182  mode8;
struct A68t183  mode9;
struct A68t184  mode10;
struct A68t156  mode11;
struct A68t122  mode12;
struct A68t185  mode13;
struct A68t164  mode14;
struct A68t79  mode15;
struct A68t169  mode16;
struct A68t186  mode17;
struct A68t177  mode18;
struct A68t172  mode19;
struct A68t187  mode20;
struct A68t188  mode21;
struct A68t189  mode22;
struct A68t170  mode23;
struct A68t174  mode24;
struct A68t175  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t180  A68_180 ;    /* UNION(MODE69,INT,BOOL,MODE179,MODE57,MODE181,MODE168,MODE182,MODE183,MODE184,MODE156,MODE122,MODE185,MODE164,MODE79,MODE169,MODE186,MODE177,MODE172,MODE187,MODE188,MODE189,MODE170,MODE174,MODE175,VOID)  */
struct A68t190 { A68_INT mode; union {
struct A68t69  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t179  mode4;
struct A68t57  mode5;
struct A68t181  mode6;
struct A68t168  mode7;
struct A68t182  mode8;
struct A68t183  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t190  A68_190 ;    /* UNION(MODE69,INT,BOOL,MODE179,MODE57,MODE181,MODE168,MODE182,MODE183)  */
struct A68t191 { A68_INT mode; union {
struct A68t69  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t179  mode4;
struct A68t57  mode5;
struct A68t181  mode6;
struct A68t168  mode7;
struct A68t182  mode8;
struct A68t183  mode9;
struct A68t184  mode10;
struct A68t156  mode11;
struct A68t122  mode12;
struct A68t185  mode13;
struct A68t164  mode14;
struct A68t79  mode15;
struct A68t169  mode16;
struct A68t186  mode17;
struct A68t177  mode18;
struct A68t172  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t191  A68_191 ;    /* UNION(MODE69,INT,BOOL,MODE179,MODE57,MODE181,MODE168,MODE182,MODE183,MODE184,MODE156,MODE122,MODE185,MODE164,MODE79,MODE169,MODE186,MODE177,MODE172)  */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t116 *,struct A68t180 *,struct A68t171 ),(struct A68t116 *,struct A68t180 *,struct A68t171 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE116,REF MODE180,REF MODE171) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t190 ,struct A68t64 *),(struct A68t190 ,struct A68t64 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE190) MODE64 */
struct A68t194{
struct A68t64 * Control;
struct A68t64 * Step;
A68_BOOL  Forpart;
A_PAD_BOOL(PAD_146)
A68_BOOL  Frompart;
A_PAD_BOOL(PAD_147)
A68_BOOL  Bypart;
A_PAD_BOOL(PAD_148)
A68_BOOL  Topart;
A_PAD_BOOL(PAD_149)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF MODE64,REF MODE64,BOOL,BOOL,BOOL,BOOL)  */
struct A68t195{
struct A68t64  Ident;
A68_VC  Control;
A68_BOOL  Needstemp;
A_PAD_BOOL(PAD_150)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE64,REF MODE26,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t194 *,A68_INT ,struct A68t71 **),(struct A68t194 *,A68_INT ,struct A68t71 **,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE194,INT,REF REF MODE71) VOID */
struct A68t198 ;

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t198 ,struct A68t71 **),(struct A68t198 ,struct A68t71 **,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE198,REF REF MODE71) VOID */
A_VECTOR(struct A68t195 ,A68t198);
typedef struct A68t198  A68_198 ;    /* VECTOR [] MODE195 */
struct A68t199{
A68_INT  Parameters;
A_PAD_INT(PAD_151)
A68_INT  Result;
A_PAD_INT(PAD_152)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_153)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t200{
A68_INT  Mode;
A_PAD_INT(PAD_154)
A68_INT  Offset;
A_PAD_INT(PAD_155)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_156)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,INT,MODE89)  */

A_PROCEDURE(A68_VOID ,A68t201,(A68_INT ,struct A68t124 *),(A68_INT ,struct A68t124 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(INT) REF MODE124 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t200 *,A68_VC *),(struct A68t200 *,A68_VC *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE200) MODE26 */

A_PROCEDURE(A68_VOID ,A68t203,(A68_INT ,A68_VC ,struct A68t68 *),(A68_INT ,A68_VC ,struct A68t68 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(INT,MODE26) MODE68 */
struct A68t205 ;

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t205 ,A68_INT ),(struct A68t205 ,A68_INT ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE205,INT) VOID */
A_ROW(struct A68t92 ,A68t205,1);
typedef struct A68t205  A68_205 ;    /* [] MODE92 */

A_PROCEDURE(A68_VOID ,A68t206,(A68_INT ,struct A68t199 *),(A68_INT ,struct A68t199 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(INT) MODE199 */
struct A68t208 ;

A_PROCEDURE(A68_VOID ,A68t207,(A68_INT ,struct A68t208 *),(A68_INT ,struct A68t208 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(INT) REF MODE208 */
A_VECTOR(struct A68t200 ,A68t208);
typedef struct A68t208  A68_208 ;    /* VECTOR [] MODE200 */

A_PROCEDURE(A68_INT ,A68t209,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t210,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(INT,INT) MODE26 */
struct A68t211{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_157)
struct A68t106  Ym;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_158)
A68_INT  Level;
A_PAD_INT(PAD_159)
struct A68t212 * Ids;
struct A68t213 * Uses;
struct A68t211 * Rest;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(MODE89,MODE106,MODE56,INT,REF MODE212,REF MODE213,REF MODE211)  */
struct A68t212{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_160)
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_161)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_162)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_163)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_164)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_165)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_166)
A68_INT  Mode;
A_PAD_INT(PAD_167)
A68_INT  Decno;
A_PAD_INT(PAD_168)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t212 * Rest;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE89,MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE212)  */
struct A68t213{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_169)
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_170)
struct A68t212 * Ids;
struct A68t213 * Rest;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE89,MODE56,REF MODE212,REF MODE213)  */
struct A68t215{
struct A68t56  L;
A_PAD_ISTRUCT(A68_56 ,PAD_171)
struct A68t56  G;
A_PAD_ISTRUCT(A68_56 ,PAD_172)
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE56,MODE56)  */
struct A68t214{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_173)
struct A68t115  Xmi;
struct A68t215  Checkinfo;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE56,MODE115,MODE215)  */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t105 ),(struct A68t105 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t117 ,A68_INT ),(struct A68t117 ,A68_INT ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE117,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t218,(struct A68t90 ),(struct A68t90 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE90) VOID */
A_ROW(struct A68t211 *,A68t219,1);
typedef struct A68t219  A68_219 ;    /* [] REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t89 ,A68_INT ,A68_BOOL ,struct A68t118 *),(struct A68t89 ,A68_INT ,A68_BOOL ,struct A68t118 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE89,INT,BOOL) MODE118 */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t89 ,struct A68t89 ,struct A68t106 ,struct A68t119 *),(struct A68t89 ,struct A68t89 ,struct A68t106 ,struct A68t119 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE89,MODE89,MODE106) MODE119 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE115) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE109) VOID */
A_ROW(struct A68t108 ,A68t224,1);
typedef struct A68t224  A68_224 ;    /* [] MODE108 */

A_PROCEDURE(A68_BOOL ,A68t225,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t184 ,struct A68t71 **,struct A68t71 *),(struct A68t184 ,struct A68t71 **,struct A68t71 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE184,REF REF MODE71,REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t147 ),(struct A68t147 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE147) VOID */

A_PROCEDURE(struct A68t56 ,A68t228,(void),(void *));
typedef struct A68t228  A68_228 ;    /* PROC MODE56 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t56 ),(struct A68t56 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE56) VOID */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t147 ,A68_VC *),(struct A68t147 ,A68_VC *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE147) MODE26 */
struct A68t232 ;

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE232) VOID */
A_VECTOR(struct A68t233 ,A68t232);
typedef struct A68t232  A68_232 ;    /* VECTOR [] MODE233 */
struct A68t233 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t233  A68_233 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t235 ;

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t235 ,A68_INT ),(struct A68t235 ,A68_INT ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE235,INT) VOID */
A_VECTOR(struct A68t236 ,A68t235);
typedef struct A68t235  A68_235 ;    /* VECTOR [] MODE236 */
struct A68t236 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t236  A68_236 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_BOOL ,A68t237,(struct A68t64 *,struct A68t64 *),(struct A68t64 *,struct A68t64 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE64,REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t238,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t239,(struct A68t64 *,A68_LBITS ),(struct A68t64 *,A68_LBITS ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE64,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t240,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE64) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t64 *,A68_VC *),(struct A68t64 *,A68_VC *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE64) MODE26 */

A_PROCEDURE(struct A68t64 *,A68t242,(struct A68t64 *,A68_INT ),(struct A68t64 *,A68_INT ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE64,INT) REF MODE64 */

A_PROCEDURE(A68_INT ,A68t243,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE70) INT */

A_PROCEDURE(A68_BOOL ,A68t244,(struct A68t64 *,A68_BITS ),(struct A68t64 *,A68_BITS ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE64,BITS) BOOL */

A_PROCEDURE(struct A68t64 *,A68t245,(struct A68t71 *,A68_INT ),(struct A68t71 *,A68_INT ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE71,INT) REF MODE64 */

A_PROCEDURE(struct A68t71 *,A68t246,(struct A68t71 *),(struct A68t71 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE71) REF MODE71 */
struct A68t248 ;

A_PROCEDURE(struct A68t64 *,A68t247,(A68_INT ,A68_INT ,A68_BITS ,struct A68t248 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t248 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(INT,INT,BITS,MODE248) REF MODE64 */
A_VECTOR(struct A68t64 *,A68t248);
typedef struct A68t248  A68_248 ;    /* VECTOR [] REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t64 *,A68_BOOL ,A68_VC *),(struct A68t64 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE64,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t250,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE64) LONG INT */
struct A68t251 { A68_INT mode; union {
struct A68t64 * mode1;
A68_VC  mode2;
struct A68t68  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t251  A68_251 ;    /* UNION(REF MODE64,MODE26,MODE68)  */

A_PROCEDURE(A68_VOID ,A68t252,(struct A68t251 ,A68_VC *),(struct A68t251 ,A68_VC *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE251) MODE26 */
struct A68t254 ;

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t254 ,A68_VC *),(struct A68t254 ,A68_VC *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE254) MODE26 */
A_VECTOR(struct A68t251 ,A68t254);
typedef struct A68t254  A68_254 ;    /* VECTOR [] MODE251 */

A_PROCEDURE(A68_VOID ,A68t255,(A68_VC ,struct A68t254 ,A68_VC *),(A68_VC ,struct A68t254 ,A68_VC *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE26,MODE254) MODE26 */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t254 ),(struct A68t254 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE254) VOID */

A_PROCEDURE(A68_VOID ,A68t257,(A68_VC ,A68_INT ,struct A68t254 ,struct A68t68 *),(A68_VC ,A68_INT ,struct A68t254 ,struct A68t68 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE26,INT,MODE254) MODE68 */

A_PROCEDURE(struct A68t64 *,A68t258,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REF MODE64) REF MODE64 */

A_PROCEDURE(struct A68t64 *,A68t259,(A68_VC ,struct A68t64 *),(A68_VC ,struct A68t64 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE26,REF MODE64) REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t148 ),(struct A68t148 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE148) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t180 *),(struct A68t180 *,void *));
typedef struct A68t264  A68_264 ;    /* PROC MODE180 */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t264 ,struct A68t116 *,struct A68t171 ),(struct A68t264 ,struct A68t116 *,struct A68t171 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE264,REF MODE116,REF MODE171) VOID */
A_ISTRUCT(A68_CHAR ,33,A68t266);
typedef struct A68t266  A68_266 ;    /* STRUCT 33 CHAR */

A_PROCEDURE(A68_VOID ,A68t267,(A68_VC ,A68_BOOL ,A68_BOOL ),(A68_VC ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE26,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(A68_BOOL ,struct A68t63 ,A68_BOOL ),(A68_BOOL ,struct A68t63 ,A68_BOOL ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(BOOL,MODE63,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t122 ),(struct A68t122 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE122) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t272,(A68_BOOL ,struct A68t124 *),(A68_BOOL ,struct A68t124 *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(BOOL) MODE124 */
A_ISTRUCT(A68_CHAR ,23,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 41 CHAR */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t59 ,struct A68t63 ),(struct A68t59 ,struct A68t63 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE59,MODE63) VOID */
A_ISTRUCT(A68_CHAR ,22,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_VOID ,A68t278,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE63) VOID */
A_ISTRUCT(A68_CHAR ,38,A68t279);
typedef struct A68t279  A68_279 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t188 ,A68_BOOL ,struct A68t63 ,struct A68t71 *),(struct A68t188 ,A68_BOOL ,struct A68t63 ,struct A68t71 *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE188,BOOL,MODE63,REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t188 ,A68_BOOL ,struct A68t63 ),(struct A68t188 ,A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE188,BOOL,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t156 *),(struct A68t156 *,void *));
typedef struct A68t282  A68_282 ;    /* PROC MODE156 */

A_PROCEDURE(struct A68t64 *,A68t283,(struct A68t64 *,struct A68t64 ),(struct A68t64 *,struct A68t64 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF MODE64,MODE64) REF MODE64 */

A_PROCEDURE(struct A68t65 *,A68t284,(struct A68t65 *,struct A68t65 ),(struct A68t65 *,struct A68t65 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE65,MODE65) REF MODE65 */
#define A68_285  A68_VC 
#define A68t285 A68t26            /* FLEX VECTOR [] CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t287,(A68_BOOL ,struct A68t80 *),(A68_BOOL ,struct A68t80 *,void *));
typedef struct A68t287  A68_287 ;    /* PROC(BOOL) MODE80 */

A_PROCEDURE(A68_VOID ,A68t288,(struct A68t188 ,struct A68t63 ),(struct A68t188 ,struct A68t63 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE188,MODE63) VOID */
struct A68t289 { A68_INT mode; union {
struct A68t200 * mode1;
A68_INT  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t289  A68_289 ;    /* UNION(REF MODE200,INT,VOID)  */

A_PROCEDURE(A68_VOID ,A68t290,(A68_VC ,struct A68t289 ,A68_VC *),(A68_VC ,struct A68t289 ,A68_VC *,void *));
typedef struct A68t290  A68_290 ;    /* PROC(MODE26,MODE289) MODE26 */
A_ISTRUCT(A68_CHAR ,6,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,73,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 73 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t297,(struct A68t188 ,A68_BOOL ,struct A68t63 ,struct A68t71 **),(struct A68t188 ,A68_BOOL ,struct A68t63 ,struct A68t71 **,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE188,BOOL,MODE63,REF REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t298,(A68_BOOL ,struct A68t198 *),(A68_BOOL ,struct A68t198 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(BOOL) MODE198 */

A_PROCEDURE(struct A68t71 *,A68t299,(struct A68t71 *,struct A68t71 ),(struct A68t71 *,struct A68t71 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE71,MODE71) REF MODE71 */
A_ISTRUCT(A68_CHAR ,26,A68t300);
typedef struct A68t300  A68_300 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t301);
typedef struct A68t301  A68_301 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t302);
typedef struct A68t302  A68_302 ;    /* STRUCT 30 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  GYPACTR_getcfragment(struct A68t64 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
extern A68_71 * MKJACTR_nilvaluelist;
extern A68_64  DLJACTR_skipvalue;
/* --- End of imports from values --- */


/* --- Imports from coutput --- */
/* --- End of imports from coutput --- */


/* --- Imports from uniquenameserver --- */
extern A68_56  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from oper --- */
extern A68_VOID  MQQACTR_oper(struct A68t184 ,struct A68t71 **,struct A68t71 *);
/* --- End of imports from oper --- */


/* --- Imports from moduletracer --- */
/* --- End of imports from moduletracer --- */


/* --- Imports from modules --- */
extern A68_115 * BBPACTR_currentmodinfo;
extern A68_BOOL  WMOACTR_composition;
extern A68_214  ABPACTR_currentmodule;
extern A68_VOID  IEPACTR_initialiseunames(void);
/* --- End of imports from modules --- */


/* --- Imports from modes --- */
extern A68_201  YVMACTR_constituents;
extern A68_VOID  RFNACTR_cfieldname(struct A68t200 *,A68_VC *);
extern A68_VOID  LKOACTR_declarectemporary(A68_INT ,A68_VC ,A68_68 *);
extern A68_BOOL  OTMACTR_dynamic(A68_INT );
extern A68_INT  IOMACTR_modetype(A68_INT );
extern A68_201  AWMACTR_parameters;
extern A68_VOID  STMACTR_procinfo(A68_INT ,A68_199 *);
extern A68_VOID  EVMACTR_structfields(A68_INT ,A68_208 *);
extern A68_INT  HCNACTR_finddeflexmode(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define WEAACTR_boolmode 7
#define YEAACTR_formatmode 9
#define EFAACTR_intmode 15
#define JEAACTR_istruct 6
#define FEAACTR_proc 2
#define GEAACTR_procp 3
#define IEAACTR_struct 5
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from loops --- */
extern A68_VOID  BDABCTR_for(struct A68t194 *,A68_INT ,struct A68t71 **);
extern A68_VOID  PMABCTR_forall(struct A68t198 ,struct A68t71 **);
extern A68_VOID  JXABCTR_while(void);
extern A68_VOID  LXABCTR_whiledo(struct A68t64 *);
extern A68_VOID  EYABCTR_whileod(void);
extern A68_75  LYABCTR_od;
/* --- End of imports from loops --- */


/* --- Imports from loads --- */
extern A68_VOID  YVZACTR_load(struct A68t190 ,A68_64 *);
/* --- End of imports from loads --- */


/* --- Imports from initialiser --- */
extern A68_VOID  UTZACTR_initialise(struct A68t116 *,struct A68t180 *,struct A68t171 );
/* --- End of imports from initialiser --- */


/* --- Imports from incvalue --- */
#define ELJACTR_voidresult 0
#define FLJACTR_memoryresult 1
#define HLJACTR_routineresult 3
#define ILJACTR_enquiryresult 4
#define JLJACTR_optboolresult 5
#define KLJACTR_noparticularresult 6
/* --- End of imports from incvalue --- */


/* --- Imports from incoperfn --- */
#define QGAACTR_formatfn 51
/* --- End of imports from incoperfn --- */


/* --- Imports from incimperatives --- */
#define JCAACTR_andthwarn 2
#define HBAACTR_beginfn 4
#define KDAACTR_bypartbit 004U
#define FBAACTR_casefn 2
#define GBAACTR_caseufn 3
#define NCAACTR_ccbit 002U
#define IBAACTR_collbeginfn 5
#define VBAACTR_collcommafn 10
#define WCAACTR_decbit 0000100U
#define DBAACTR_decsfn 0
#define XBAACTR_dofn 12
#define BDAACTR_dontpullbit 0004000U
extern A68_BITS  MDAACTR_dybits;
#define ECAACTR_endcollfn 5
#define BCAACTR_esacfn 2
#define CCAACTR_esacufn 3
#define RBAACTR_exitfn 6
#define TCAACTR_exitbit 0000010U
#define HCAACTR_finishfn 8
#define JBAACTR_forfn 6
#define IDAACTR_forpartbit 001U
#define KBAACTR_forallfn 7
#define JDAACTR_frompartbit 002U
#define EBAACTR_iffn 1
#define ADAACTR_labbit 0002000U
#define KCAACTR_orelwarn 3
#define GCAACTR_routinendfn 7
#define WBAACTR_semifn 11
#define LBAACTR_separatoroffset 7
extern A68_INT  ZBAACTR_terminatoroffset;
#define LDAACTR_topartbit 010U
#define PCAACTR_valbit 010U
#define YBAACTR_whilefn 13
/* --- End of imports from incimperatives --- */


/* --- Imports from identifiers --- */
extern A68_VOID  TVVACTR_ccdec(struct A68t156 ,struct A68t64 *,A68_INT );
extern A68_VOID  FWWACTR_environoflabel(A68_INT ,A68_123 *);
extern A68_VOID  CUVACTR_iddec(struct A68t156 ,struct A68t71 **);
extern A68_160  WPKACTR_ids;
extern A68_VOID  DLVACTR_initialdummydec(struct A68t156 );
extern A68_VOID  QPWACTR_labdec(struct A68t164 );
/* --- End of imports from identifiers --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  PXIACTR_error(A68_INT );
extern A68_VOID  KDHACTR_message(A68_INT ,A68_VC *);
extern A68_VOID  SXIACTR_terminalerror(A68_INT );
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_VOID  YRLACTR_startnewlevel(A68_INT );
extern A68_75  BSLACTR_reverttopreviouslevel;
extern A68_BOOL  TRLACTR_isnewerthan(struct A68t123 ,struct A68t123 );
/* --- End of imports from environ --- */


/* --- Imports from entryandreturn --- */
extern A68_VOID  JPYACTR_startmodule(A68_VC ,A68_VC );
extern A68_VOID  VSYACTR_endmodule(void);
extern A68_VOID  SMYACTR_startroutine(struct A68t122 ,struct A68t123 ,struct A68t124 ,A68_INT ,struct A68t64 *);
extern A68_VOID  LNYACTR_endroutine(struct A68t122 ,struct A68t64 *);
extern A68_VOID  UQYACTR_startdecsmodule(A68_VC ,A68_VC );
extern A68_VOID  QSYACTR_startprocmodule(struct A68t122 ,A68_VC ,A68_VC ,struct A68t64 *);
extern A68_VOID  VTYACTR_enddecsmodule(A68_VC );
/* --- End of imports from entryandreturn --- */


/* --- Imports from clauses --- */
extern A68_VOID  KQZACTR_exit(A68_BOOL ,A68_BOOL ,struct A68t63 );
extern A68_VOID  GQZACTR_semi(A68_BOOL ,A68_BOOL );
extern A68_VOID  ZCZACTR_begin(A68_BOOL ,A68_BOOL );
extern A68_VOID  LDZACTR_end(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t55 *);
extern A68_VOID  JGZACTR_then(struct A68t64 *);
extern A68_VOID  GHZACTR_else(void);
extern A68_VOID  DNZACTR_fi(A68_BOOL ,struct A68t63 );
extern A68_VOID  ZHZACTR_casein(struct A68t64 *);
extern A68_VOID  GKZACTR_comma(A68_INT );
extern A68_VOID  LLZACTR_out(void);
extern A68_VOID  DMZACTR_esac(A68_BOOL ,struct A68t63 );
extern A68_VOID  EJZACTR_inu(struct A68t79 ,struct A68t64 *,struct A68t80 );
extern A68_VOID  CLZACTR_commau(struct A68t79 ,struct A68t64 ,struct A68t80 );
extern A68_75  ZLZACTR_outu;
extern A68_76  ZMZACTR_esacu;
extern A68_VOID  WNZACTR_optboolwarning(A68_BOOL ,struct A68t64 *);
extern A68_VOID  PPZACTR_optbooloper(void);
extern A68_60  VPZACTR_startseries;
extern A68_VOID  DQZACTR_endseries(struct A68t59 ,struct A68t63 ,struct A68t55 *,A68_BOOL ,A68_BOOL ,A68_BOOL );
extern A68_VOID  TAZACTR_evaluateresult(struct A68t71 **,struct A68t63 );
extern A68_VOID  VZYACTR_evaluatenoresult(struct A68t71 **);
extern A68_VOID  RCZACTR_evaluatesimpleenquiry(struct A68t71 **,struct A68t63 );
extern A68_VOID  DRZACTR_codeinsert(A68_VC ,A68_INT ,struct A68t71 *,A68_68 *);
/* --- End of imports from clauses --- */


/* --- Imports from centities --- */
extern A68_55  HIAACTR_unsetlabel;
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
extern A68_VOID  RMAAOSF_scanto(A68_CHAR ,A68_VC ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ATPACTR(void);   /* values */
extern void PTLACTR(void);   /* coutput */
extern void RHMACTR(void);   /* uniquenameserver */
extern void CPQACTR(void);   /* oper */
extern void BCHACTR(void);   /* moduletracer */
extern void MLOACTR(void);   /* modules */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void BCABCTR(void);   /* loops */
extern void ZTZACTR(void);   /* loads */
extern void LTZACTR(void);   /* initialiser */
extern void GKJACTR(void);   /* incvalue */
extern void XFAACTR(void);   /* incoperfn */
extern void UAAACTR(void);   /* incimperatives */
extern void NKVACTR(void);   /* identifiers */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void BDYACTR(void);   /* entryandreturn */
extern void BZYACTR(void);   /* clauses */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_263   QYABCTR = {"$Id: compiler.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,RYABCTR,QYABCTR,58)
static A68_266   MZABCTR = {"Composition modules not supported"}; 
A_GISVEC(A68_VC ,NZABCTR,MZABCTR,33)
static A68_270   OABBCTR = {"generator routine"}; 
static A68_271   PABBCTR = {"!generator"}; 
A_GISVEC(A68_VC ,QABBCTR,PABBCTR,10)
A_GISVEC(A68_VC ,RABBCTR,OABBCTR,17)
static A68_273   VBBBCTR = {"COMPILER: fdec expected"}; 
A_GISVEC(A68_VC ,WBBBCTR,VBBBCTR,23)
static A68_274   XBBBCTR = {"COMPILER: fdec has unexpected mode"}; 
A_GISVEC(A68_VC ,YBBBCTR,XBBBCTR,34)
static A68_275   ACBBCTR = {"COMPILER: TRANSIDDEC (fdec) expected here"}; 
A_GISVEC(A68_VC ,BCBBCTR,ACBBCTR,41)
static A68_277   TCBBCTR = {"end OF answer ISNT NIL"}; 
A_GISVEC(A68_VC ,UCBBCTR,TCBBCTR,22)
static A68_279   IDBBCTR = {"exit not permitted in <enquiry clause>"}; 
A_GISVEC(A68_VC ,JDBBCTR,IDBBCTR,38)
static A68_286   OGBBCTR = {"fn OF starter = caseu fn"}; 
A_GISVEC(A68_VC ,PGBBCTR,OGBBCTR,24)
static A68_291   KIBBCTR = {".data["}; 
A_GISVEC(A68_VC ,LIBBCTR,KIBBCTR,6)
static A68_292   OIBBCTR = {""}; 
A_GISVEC(A68_VC ,PIBBCTR,OIBBCTR,0)
static A68_293   QIBBCTR = {"compiler:collateral clause - unknown selector"}; 
A_GISVEC(A68_VC ,RIBBCTR,QIBBCTR,45)
static A68_292   SIBBCTR = {""}; 
A_GISVEC(A68_VC ,TIBBCTR,SIBBCTR,0)
static A68_294   AJBBCTR = {"compiler: collateral clause result is neither struct nor istruct nor void"}; 
A_GISVEC(A68_VC ,BJBBCTR,AJBBCTR,73)
static A68_292   FJBBCTR = {""}; 
A_GISVEC(A68_VC ,HJBBCTR,FJBBCTR,0)
static A68_286   JJBBCTR = {"collateral clause result"}; 
A_GISVEC(A68_VC ,KJBBCTR,JJBBCTR,24)
static A68_273   HKBBCTR = {"fn OF s = coll comma fn"}; 
A_GISVEC(A68_VC ,IKBBCTR,HKBBCTR,23)
static A68_295   WKBBCTR = {"fn OF t = end coll fn"}; 
A_GISVEC(A68_VC ,XKBBCTR,WKBBCTR,21)
static A68_296   QLBBCTR = {"fn OF s = do fn"}; 
A_GISVEC(A68_VC ,RLBBCTR,QLBBCTR,15)
static A68_89   JOBBCTR = {"no closed clause OPTBOOL results"}; 
A_GISVEC(A68_VC ,KOBBCTR,JOBBCTR,32)
static A68_89   HPBBCTR = {"no choice clause OPTBOOL results"}; 
A_GISVEC(A68_VC ,IPBBCTR,HPBBCTR,32)
static A68_300   FRBBCTR = {"PROC modules not supported"}; 
A_GISVEC(A68_VC ,GRBBCTR,FRBBCTR,26)
static A68_301   JRBBCTR = {"rest OF value stack IS nil value list"}; 
A_GISVEC(A68_VC ,KRBBCTR,JRBBCTR,37)
static A68_302   NRBBCTR = {"invalid imperative in 'phrase'"}; 
A_GISVEC(A68_VC ,ORBBCTR,NRBBCTR,30)
static A68_296   KSBBCTR = {"module: ROUTINE"}; 
A_GISVEC(A68_VC ,LSBBCTR,KSBBCTR,15)
static A68_270   QSBBCTR = {"generator routine"}; 
static A68_271   RSBBCTR = {"!generator"}; 
A_GISVEC(A68_VC ,SSBBCTR,RSBBCTR,10)
A_GISVEC(A68_VC ,TSBBCTR,QSBBCTR,17)
typedef struct   /* env of non-global proc */
{
A68_180 * YYABCTR_nextimperative;
A68_180 * WYABCTR_currentimperative;
A68_264  Nextstreamimperative;
} CZABCTR_read;
typedef struct   /* env of non-global proc */
{
A68_180 * YYABCTR_nextimperative;
A68_264  Nextstreamimperative;
} IZABCTR_lookahead;
typedef struct   /* env of non-global proc */
{
A68_75  AZABCTR_read;
A68_180 * WYABCTR_currentimperative;
A68_75  GZABCTR_lookahead;
A68_180 * YYABCTR_nextimperative;
} TZABCTR_module;
typedef struct   /* env of non-global proc */
{
A68_75  AZABCTR_read;
A68_180 * WYABCTR_currentimperative;
A68_75  VZABCTR_skiproutine;
} XZABCTR_skiproutine;
typedef struct   /* env of non-global proc */
{
A68_75  GZABCTR_lookahead;
A68_180 * YYABCTR_nextimperative;
A68_75  AZABCTR_read;
A68_75  VZABCTR_skiproutine;
A68_180 * WYABCTR_currentimperative;
A68_268 * UZABCTR_phrase_;
} FABBCTR_routine;
typedef struct   /* env of non-global proc */
{
A68_268 * UZABCTR_phrase_;
A68_180 * WYABCTR_currentimperative;
} ICBBCTR_serialclause;
typedef struct   /* env of non-global proc */
{
A68_268 * UZABCTR_phrase_;
A68_180 * WYABCTR_currentimperative;
} CDBBCTR_enquiryclause;
typedef struct   /* env of non-global proc */
{
A68_276  GCBBCTR_serialclause;
A68_75  AZABCTR_read;
A68_180 * WYABCTR_currentimperative;
A68_278  ADBBCTR_enquiryclause;
A68_268  ODBBCTR_phrase;
A68_269  DABBCTR_routine;
} QDBBCTR_phrase;
typedef struct   /* env of non-global proc */
{
int dummy;
} CBBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  YABBCTR_paramcount;
A_PAD_INT(PAD_174)
} NBBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_276  GCBBCTR_serialclause;
A68_75  AZABCTR_read;
A68_180 * WYABCTR_currentimperative;
A68_278  ADBBCTR_enquiryclause;
A68_268  ODBBCTR_phrase;
A68_71 ** RDBBCTR_valuestack;
} YDBBCTR_enclosedclause;
typedef struct   /* env of non-global proc */
{
A68_71 ** RDBBCTR_valuestack;
A68_268  ODBBCTR_phrase;
} OPBBCTR_optboolexpression;
typedef struct   /* env of non-global proc */
{
A68_276  GCBBCTR_serialclause;
} FEBBCTR_closedclause;
typedef struct   /* env of non-global proc */
{
A68_75  AZABCTR_read;
A68_180 * WYABCTR_currentimperative;
A68_278  ADBBCTR_enquiryclause;
A68_276  GCBBCTR_serialclause;
} WEBBCTR_choiceclause;
typedef struct   /* env of non-global proc */
{
A68_268  ODBBCTR_phrase;
A68_180 * WYABCTR_currentimperative;
} ZHBBCTR_collateralclause;
typedef struct   /* env of non-global proc */
{
A68_75  AZABCTR_read;
A68_180 * WYABCTR_currentimperative;
A68_278  ADBBCTR_enquiryclause;
A68_276  GCBBCTR_serialclause;
} DLBBCTR_loopbody;
typedef struct   /* env of non-global proc */
{
A68_75  AZABCTR_read;
A68_180 * WYABCTR_currentimperative;
A68_76  BLBBCTR_loopbody;
} DMBBCTR_loopclause;
typedef struct   /* env of non-global proc */
{
A68_75  AZABCTR_read;
A68_180 * WYABCTR_currentimperative;
A68_76  BLBBCTR_loopbody;
} BNBBCTR_forallclause;
typedef struct   /* env of non-global proc */
{
A68_75  AZABCTR_read;
A68_180 * WYABCTR_currentimperative;
A68_79 * XEBBCTR_uchoice;
} AFBBCTR_readuchoiceimperative;
typedef struct   /* env of non-global proc */
{
A68_75  AZABCTR_read;
A68_180 * WYABCTR_currentimperative;
} IFBBCTR_iddecimperative;
typedef struct   /* env of non-global proc */
{
A68_124  BHBBCTR_cons;
} FHBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  ENBBCTR_controlcount;
A_PAD_INT(PAD_175)
} INBBCTR_generator;

A68_VOID  VYABCTR_translator(A68_264  Nextstreamimperative, A68_116 * Xsizes, A68_171  Keptdecnos);

A_STATIC A68_VOID  BZABCTR_read(void *NonLocals);

A_STATIC A68_VOID  HZABCTR_lookahead(void *NonLocals);

A_STATIC A68_VOID  LZABCTR_compositionmodule(void);

A_STATIC A68_VOID  SZABCTR_module(A68_VC  Modulename, A68_BOOL  Decsmodule, A68_BOOL  Prelude, void *NonLocals);

A_STATIC A68_VOID  WZABCTR_skiproutine(void *NonLocals);

A_STATIC A68_VOID  EABBCTR_routine(A68_122  Routine, void *NonLocals);

A_STATIC A68_VOID  BBBBCTR_generator(A68_BOOL  ZABBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MBBBCTR_generator(A68_BOOL  KBBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HCBBCTR_serialclause(A68_59  Properties, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  BDBBCTR_enquiryclause(A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  PDBBCTR_phrase(A68_BOOL  Body, A68_63  Answer, A68_BOOL  Simple, void *NonLocals);

A_STATIC A68_VOID  XDBBCTR_enclosedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 * Newvalue, void *NonLocals);

A_STATIC A68_VOID  EEBBCTR_closedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  VEBBCTR_choiceclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  ZEBBCTR_readuchoiceimperative(void *NonLocals);

A_STATIC A68_VOID  HFBBCTR_iddecimperative(A68_156  *ReturnedValue, void *NonLocals);

A_STATIC A68_64 * AGBBCTR_assignment(A68_64 * YFBBCTR_anonymous, A68_64  ZFBBCTR_anonymous);

A_STATIC A68_65 * FGBBCTR_assignment(A68_65 * DGBBCTR_anonymous, A68_65  EGBBCTR_anonymous);

A_STATIC A68_VOID  EHBBCTR_generator(A68_BOOL  CHBBCTR_anonymous, A68_80  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YHBBCTR_collateralclause(A68_188  Starter, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  DIBBCTR_collateralunitassignee(A68_VC  Temp, A68_289  Selector, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CLBBCTR_loopbody(A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  CMBBCTR_loopclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Frobytlist, void *NonLocals);

A_STATIC A68_VOID  ANBBCTR_forallclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Foralllist, void *NonLocals);

A_STATIC A68_VOID  HNBBCTR_generator(A68_BOOL  FNBBCTR_anonymous, A68_198  *ReturnedValue, void *NonLocals);

A_STATIC A68_71 * FOBBCTR_assignment(A68_71 * DOBBCTR_anonymous, A68_71  EOBBCTR_anonymous);

A_STATIC A68_VOID  NPBBCTR_optboolexpression(A68_INT  Warn, void *NonLocals);

A_STATIC A68_65 * FGBBCTR_assignment(A68_65 * DGBBCTR_anonymous, A68_65  EGBBCTR_anonymous)
{ 
A68_65  GGBBCTR;  /* united object - for case conformity */
A68_VC  HGBBCTR_anonymous;
A68_VC  IGBBCTR;  /* OPERATORS - copy to flex */
A68_285 * JGBBCTR;  /* YIELD */
A68_65 * KGBBCTR;  /* clause result */
{ 
(*DGBBCTR_anonymous) = EGBBCTR_anonymous;
GGBBCTR = EGBBCTR_anonymous ;
switch ( GGBBCTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
HGBBCTR_anonymous = (GGBBCTR.data.mode6);
JGBBCTR = &(DGBBCTR_anonymous-> data.mode6) ;
(*JGBBCTR) = A_VCOPY(HGBBCTR_anonymous,IGBBCTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
KGBBCTR = DGBBCTR_anonymous;
} 
return( KGBBCTR );
} 
#undef NL

A_STATIC A68_VOID  ZEBBCTR_readuchoiceimperative(void *NonLocals)
#define NL(x) (((AFBBCTR_readuchoiceimperative *)NonLocals)->x)
{ 
A68_180  BFBBCTR;  /* united object - for case conformity */
A68_79  CFBBCTR_u;
A68_BOOL  DFBBCTR;  /* clause result */
A68_164  EFBBCTR_l;
A68_BOOL  FFBBCTR;  /* clause result */
A_PROC_ENTRY(readuchoiceimperative);
for ( ;; )
{ 
 /* line 460: */
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 461: */
 /* line 462: */
BFBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( BFBBCTR.mode )
{ 
case 15: /* STRUCT(INT,BITS,INT)  */
CFBBCTR_u = (BFBBCTR.data.mode15);
{ 
(*NL(XEBBCTR_uchoice)) = CFBBCTR_u;
 /* line 463: */
DFBBCTR = A68_FALSE;
} 
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
EFBBCTR_l = (BFBBCTR.data.mode14);
{ 
QPWACTR_labdec(EFBBCTR_l);
 /* line 464: */
 /* line 465: */
DFBBCTR = A68_TRUE;
} 
break;
default: 
SXIACTR_terminalerror(668);
 /* line 466: */
 /* line 467: */
 /* line 468: */
DFBBCTR = A68_FALSE;
break;
} 
 /* line 469: */
FFBBCTR = DFBBCTR;
if ( !FFBBCTR ) break;
/*SKIP*/;
}
A_PROC_EXIT(readuchoiceimperative);
return;
} 
#undef NL

A_STATIC A68_VOID  HFBBCTR_iddecimperative(A68_156  *ReturnedValue, void *NonLocals)
#define NL(x) (((IFBBCTR_iddecimperative *)NonLocals)->x)
{ 
A68_180  JFBBCTR;  /* united object - for case conformity */
A68_156  KFBBCTR_iddec;
A68_156  LFBBCTR;  /* clause result */
A68_156  MFBBCTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(iddecimperative);
{ 
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 476: */
 /* line 477: */
JFBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( JFBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
KFBBCTR_iddec = (JFBBCTR.data.mode11);
 /* line 478: */
 /* line 479: */
LFBBCTR = KFBBCTR_iddec;
break;
default: 
SXIACTR_terminalerror(669);
 /* line 480: */
 /* line 481: */
LFBBCTR = MFBBCTR;
break;
} 
} 
A_PROC_EXIT(iddecimperative);
*ReturnedValue = (LFBBCTR);
return;
} 
#undef NL

A_STATIC A68_64 * AGBBCTR_assignment(A68_64 * YFBBCTR_anonymous, A68_64  ZFBBCTR_anonymous)
{ 
A68_INT * BGBBCTR;  /* YIELD */
A68_BITS * CGBBCTR;  /* YIELD */
A68_64 * LGBBCTR;  /* clause result */
{ 
BGBBCTR = (&(YFBBCTR_anonymous->Mode)) ;
(*BGBBCTR) = ZFBBCTR_anonymous.Mode;
CGBBCTR = (&(YFBBCTR_anonymous->Info)) ;
(*CGBBCTR) = ZFBBCTR_anonymous.Info;
FGBBCTR_assignment((&(YFBBCTR_anonymous->Extra)), ZFBBCTR_anonymous.Extra);
LGBBCTR = YFBBCTR_anonymous;
} 
return( LGBBCTR );
} 
#undef NL

A_STATIC A68_VOID  EHBBCTR_generator(A68_BOOL  CHBBCTR_anonymous, A68_80  *ReturnedValue, void *NonLocals)
#define NL(x) (((FHBBCTR_generator *)NonLocals)->x)
{ 
A68_80  GHBBCTR;  /* clause result */
A68_80  HHBBCTR;  /* OPERATORS - dynamic generator */
{ 
HHBBCTR.dim[0].upb = NL(BHBBCTR_cons).upb ;
HHBBCTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(HHBBCTR) ;
( CHBBCTR_anonymous? A_R1LOC(A68_BOOL ,HHBBCTR): A_R1HEAP(A68_BOOL ,HHBBCTR) );
GHBBCTR = HHBBCTR;
} 
*ReturnedValue = (GHBBCTR);
return;
} 
#undef NL
 /* line 628: */

A_STATIC A68_VOID  DIBBCTR_collateralunitassignee(A68_VC  Temp, A68_289  Selector, A68_VC  *ReturnedValue)
{ 
A68_289  EIBBCTR;  /* united object - for case conformity */
A68_200 * FIBBCTR_sf;
A68_VC  GIBBCTR;  /* clause result */
A68_VC  HIBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IIBBCTR;  /* avoid structure result */
A68_INT  JIBBCTR_i;
A68_VC  MIBBCTR;  /* avoid structure result */
A68_VC  NIBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(collateralunitassignee);
 /* line 635: */
 /* line 636: */
EIBBCTR = Selector ;
switch ( EIBBCTR.mode )
{ 
case 1: /* REF STRUCT(INT,INT,MODE89)  */
FIBBCTR_sf = (EIBBCTR.data.mode1);
 /* line 637: */
 /* line 638: */
RFNACTR_cfieldname( FIBBCTR_sf, &IIBBCTR );
GIBBCTR = A_VC_PLUS(A_VC_PLUS(Temp,A_HVEC(HIBBCTR,'.',A68_CHAR )),IIBBCTR);
break;
case 2: /* INT */
JIBBCTR_i = (EIBBCTR.data.mode2);
 /* line 639: */
 /* line 640: */
ROAAOSF_whole( (JIBBCTR_i-1), 0, &MIBBCTR );
GIBBCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(Temp,LIBBCTR),MIBBCTR),A_HVEC(NIBBCTR,']',A68_CHAR ));
break;
case 3: /* VOID */
 /* line 641: */
 /* line 642: */
GIBBCTR = PIBBCTR;
break;
default: 
WXIACTR_assert(RIBBCTR, A68_FALSE);
 /* line 643: */
GIBBCTR = TIBBCTR;
break;
} 
A_PROC_EXIT(collateralunitassignee);
*ReturnedValue = (GIBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HNBBCTR_generator(A68_BOOL  FNBBCTR_anonymous, A68_198  *ReturnedValue, void *NonLocals)
#define NL(x) (((INBBCTR_generator *)NonLocals)->x)
{ 
A68_198  JNBBCTR;  /* clause result */
A68_198  KNBBCTR;  /* OPERATORS - dynamic generator */
{ 
KNBBCTR.upb = NL(ENBBCTR_controlcount) ;
( FNBBCTR_anonymous? A_VLOC(A68_195 ,KNBBCTR): A_VHEAP(A68_195 ,KNBBCTR) );
JNBBCTR = KNBBCTR;
} 
*ReturnedValue = (JNBBCTR);
return;
} 
#undef NL
 /* line 396: */
 /* line 398: */

A_STATIC A68_VOID  EEBBCTR_closedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((FEBBCTR_closedclause *)NonLocals)->x)
{ 
A68_59  GEBBCTR;  /* collateral clause result */
A68_BITS  HEBBCTR;  /* ADICOPS - >= */
A68_INT  IEBBCTR;  /* ADICOPS - ABS INT */
A68_59  JEBBCTR_properties;
A68_63  KEBBCTR_ccanswer;
A68_BITS  LEBBCTR;  /* ADICOPS - >= */
A68_BOOL  MEBBCTR_seriescontainsexit;
A68_55  NEBBCTR;  /* collateral clause result */
A68_55 * OEBBCTR;  /* YIELD */
A68_55 ** PEBBCTR;  /* YIELD */
A68_BITS  QEBBCTR;  /* ADICOPS - >= */
A_PROC_ENTRY(closedclause);
 /* line 404: */
 /* line 406: */
{ 
 /* line 407: */
HEBBCTR = Starter.Props ;
GEBBCTR.Block = (A_LB_GE(HEBBCTR,WCAACTR_decbit)&!Body);
 /* line 408: */
IEBBCTR = Starter.Resultmode ;
GEBBCTR.Dynamicresult = OTMACTR_dynamic(A_ABS(IEBBCTR));
 /* line 410: */
GEBBCTR.Discardeddynamicresult = ((A68_BITS )(Starter.Props&MDAACTR_dybits)!=0X0U);
GEBBCTR.Type = Starter.Fn;
JEBBCTR_properties = GEBBCTR;
 /* line 411: */
KEBBCTR_ccanswer = Answer;
 /* line 412: */
 /* line 413: */
LEBBCTR = Starter.Props ;
MEBBCTR_seriescontainsexit = A_LB_GE(LEBBCTR,TCAACTR_exitbit);
 /* line 414: */
 /* line 415: */
 /* line 416: */
if ( MEBBCTR_seriescontainsexit )
{ 
 /* line 417: */
NEBBCTR.Name = QIMACTR_newuniquename();
 /* line 418: */
NEBBCTR.Set = A68_TRUE;
OEBBCTR = A_HEAP(A68_55 ) ;
(*OEBBCTR) = NEBBCTR ;
PEBBCTR = (&((&KEBBCTR_ccanswer)->End)) ;
(*PEBBCTR) = OEBBCTR;
} 
 /* line 419: */
QEBBCTR = Starter.Props ;
ZCZACTR_begin(A_LB_GE(QEBBCTR,ADAACTR_labbit), Body);
 /* line 420: */
A_CALLPROC(NL(GCBBCTR_serialclause),(JEBBCTR_properties, KEBBCTR_ccanswer),(JEBBCTR_properties, KEBBCTR_ccanswer,(NL(GCBBCTR_serialclause)).nonlocals));
 /* line 421: */
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 426: */
 /* line 427: */
LDZACTR_end(JEBBCTR_properties.Dynamicresult, MEBBCTR_seriescontainsexit, Body, (*(&((&KEBBCTR_ccanswer)->End))));
} 
A_PROC_EXIT(closedclause);
return;
} 
#undef NL
 /* line 431: */
 /* line 433: */

A_STATIC A68_VOID  VEBBCTR_choiceclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((WEBBCTR_choiceclause *)NonLocals)->x)
{ 
A68_79  XEBBCTR_uchoice;
A68_75  YEBBCTR_readuchoiceimperative;   /* proc value of non-global proc */
A68_282  GFBBCTR_iddecimperative;   /* proc value of non-global proc */
A68_INT  NFBBCTR;  /* ADICOPS - ABS INT */
A68_INT  OFBBCTR_resultmode;
A68_BOOL  PFBBCTR_discardlevelactivated;
A68_INT  QFBBCTR_enquirytype;
A68_64  RFBBCTR_enquiry;
A68_80  SFBBCTR_case;
A68_55 * TFBBCTR_endofchoiceclause;
A68_BOOL  UFBBCTR_elsepart;
A68_BOOL  VFBBCTR_outpart;
A68_64  WFBBCTR;  /* collateral clause result */
A68_65  XFBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  MGBBCTR;  /* collateral clause result */
A68_65  NGBBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  QGBBCTR;  /* ADICOPS - ABS INT */
A68_INT  RGBBCTR_umode;
A68_64  SGBBCTR;  /* collateral clause result */
A68_65  TGBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  UGBBCTR;  /* collateral clause result */
A68_63  VGBBCTR;  /* collateral clause result */
A68_63  WGBBCTR_seriesanswer;
A68_59  XGBBCTR_seriesproperties;
A68_180  YGBBCTR;  /* united object - for case conformity */
A68_187  ZGBBCTR_s;
A68_124  AHBBCTR;  /* avoid structure result */
A68_124  BHBBCTR_cons;
A68_287  DHBBCTR_generator;   /* proc value of non-global proc */
A68_80  IHBBCTR;  /* avoid structure result */
A68_BOOL * JHBBCTR_c;
A68_INT  KHBBCTR;  /* forall loop counter */
A68_BITS  LHBBCTR;  /* ADICOPS - >= */
A68_156  MHBBCTR;  /* avoid structure result */
A68_BITS  NHBBCTR;  /* ADICOPS - >= */
A68_156  OHBBCTR;  /* avoid structure result */
A68_59  PHBBCTR;  /* collateral clause result */
A68_BITS  QHBBCTR;  /* ADICOPS - >= */
A68_INT  RHBBCTR;  /* ADICOPS - ABS INT */
A68_BOOL  SHBBCTR;  /* clause result */
A68_189  THBBCTR_t;
A68_BOOL  UHBBCTR;  /* clause result */
A_PROC_ENTRY(choiceclause);
 /* line 445: */
 /* line 447: */
{ 
 /* line 452: */
 /* line 459: */
A_CLOSURE( YEBBCTR_readuchoiceimperative, ZEBBCTR_readuchoiceimperative, AFBBCTR_readuchoiceimperative );
(( AFBBCTR_readuchoiceimperative * ) ( YEBBCTR_readuchoiceimperative.nonlocals )) -> AZABCTR_read = NL(AZABCTR_read);
(( AFBBCTR_readuchoiceimperative * ) ( YEBBCTR_readuchoiceimperative.nonlocals )) -> WYABCTR_currentimperative = NL(WYABCTR_currentimperative);
(( AFBBCTR_readuchoiceimperative * ) ( YEBBCTR_readuchoiceimperative.nonlocals )) -> XEBBCTR_uchoice = (&XEBBCTR_uchoice);
 /* line 471: */
 /* line 475: */
A_CLOSURE( GFBBCTR_iddecimperative, HFBBCTR_iddecimperative, IFBBCTR_iddecimperative );
(( IFBBCTR_iddecimperative * ) ( GFBBCTR_iddecimperative.nonlocals )) -> AZABCTR_read = NL(AZABCTR_read);
(( IFBBCTR_iddecimperative * ) ( GFBBCTR_iddecimperative.nonlocals )) -> WYABCTR_currentimperative = NL(WYABCTR_currentimperative);
 /* line 483: */
NFBBCTR = Starter.Resultmode ;
OFBBCTR_resultmode = A_ABS(NFBBCTR);
 /* line 484: */
PFBBCTR_discardlevelactivated = A68_FALSE;
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
TFBBCTR_endofchoiceclause = Answer.End;
 /* line 489: */
UFBBCTR_elsepart = A68_FALSE;
 /* line 490: */
VFBBCTR_outpart = A68_FALSE;
 /* line 492: */
 /* line 493: */
if ( (Starter.Fn==EBAACTR_iffn) )
{ 
WFBBCTR.Mode = WEAACTR_boolmode;
WFBBCTR.Info = PKJACTR_defaultinfo;
WFBBCTR.Extra = A_EMPTY(XFBBCTR,3);
AGBBCTR_assignment((&RFBBCTR_enquiry), WFBBCTR);
 /* line 494: */
 /* line 496: */
QFBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
else
{ 
 /* line 497: */
if ( (Starter.Fn==FBAACTR_casefn) )
{ 
MGBBCTR.Mode = EFAACTR_intmode;
MGBBCTR.Info = PKJACTR_defaultinfo;
MGBBCTR.Extra = A_EMPTY(NGBBCTR,3);
AGBBCTR_assignment((&RFBBCTR_enquiry), MGBBCTR);
 /* line 498: */
 /* line 500: */
QFBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
else
{ 
WXIACTR_assert(PGBBCTR, (Starter.Fn==GBAACTR_caseufn));
 /* line 501: */
QGBBCTR = Starter.Mode ;
RGBBCTR_umode = A_ABS(QGBBCTR);
 /* line 502: */
SGBBCTR.Mode = RGBBCTR_umode;
SGBBCTR.Info = PKJACTR_defaultinfo;
SGBBCTR.Extra = A_EMPTY(TGBBCTR,3);
AGBBCTR_assignment((&RFBBCTR_enquiry), SGBBCTR);
 /* line 503: */
 /* line 505: */
QFBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
} 
 /* line 507: */
UGBBCTR.Value = (&RFBBCTR_enquiry);
UGBBCTR.End = (A68_55 *)A68_NIL;
UGBBCTR.Type = QFBBCTR_enquirytype;
A_CALLPROC(NL(ADBBCTR_enquiryclause),(UGBBCTR),(UGBBCTR,(NL(ADBBCTR_enquiryclause)).nonlocals));
 /* line 509: */
 /* line 510: */
 /* line 511: */
VGBBCTR.Value = Answer.Value;
 /* line 513: */
VGBBCTR.End = TFBBCTR_endofchoiceclause;
VGBBCTR.Type = Answer.Type;
WGBBCTR_seriesanswer = VGBBCTR;
 /* line 514: */
 /* line 516: */
for ( ;; )
{ 
 /* line 517: */
YGBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( YGBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
ZGBBCTR_s = (YGBBCTR.data.mode20);
 /* line 518: */
{ 
 /* line 519: */
 /* line 521: */
switch ( ZGBBCTR_s.Fn )
{ 
case 1: 
 /* line 522: */
{ 
UFBBCTR_elsepart = (ZGBBCTR_s.Param==2);
 /* line 523: */
 /* line 524: */
 /* line 527: */
JGZACTR_then((&RFBBCTR_enquiry));
} 
break;
case 2: 
 /* line 528: */
{ 
VFBBCTR_outpart = (ZGBBCTR_s.Param<0);
 /* line 529: */
 /* line 530: */
 /* line 533: */
ZHZACTR_casein((&RFBBCTR_enquiry));
} 
break;
case 3: 
 /* line 534: */
{ 
VFBBCTR_outpart = (ZGBBCTR_s.Param<0);
 /* line 535: */
A_CALLPROC(YEBBCTR_readuchoiceimperative,(),((YEBBCTR_readuchoiceimperative).nonlocals));
 /* line 536: */
A_CALLPROC(YVMACTR_constituents,((*(&((&RFBBCTR_enquiry)->Mode))), &AHBBCTR),((*(&((&RFBBCTR_enquiry)->Mode))), &AHBBCTR,(YVMACTR_constituents).nonlocals));
BHBBCTR_cons = AHBBCTR;
 /* line 537: */
 /* line 538: */
A_CLOSURE( DHBBCTR_generator, EHBBCTR_generator, FHBBCTR_generator );
(( FHBBCTR_generator * ) ( DHBBCTR_generator.nonlocals )) -> BHBBCTR_cons = BHBBCTR_cons;
A_CALLPROC(DHBBCTR_generator,(A68_TRUE, &IHBBCTR),(A68_TRUE, &IHBBCTR,(DHBBCTR_generator).nonlocals));
SFBBCTR_case = IHBBCTR;
 /* line 539: */
 /* line 540: */
KHBBCTR = SFBBCTR_case.dim[0].upb - SFBBCTR_case.dim[0].lwb;
JHBBCTR_c = SFBBCTR_case.data;
for (;KHBBCTR-- >= 0;
(JHBBCTR_c += SFBBCTR_case.dim[0].stride
) )
{
(*JHBBCTR_c) = A68_FALSE;
}
 /* line 541: */
 /* line 542: */
 /* line 543: */
 /* line 545: */
EJZACTR_inu(XEBBCTR_uchoice, (&RFBBCTR_enquiry), SFBBCTR_case);
 /* line 546: */
 /* line 547: */
 /* line 548: */
LHBBCTR = (*(&((&XEBBCTR_uchoice)->Props))) ;
if ( A_LB_GE(LHBBCTR,WCAACTR_decbit) )
{ 
 /* line 549: */
 /* line 551: */
 /* line 552: */
 /* line 553: */
 /* line 556: */
A_CALLPROC(GFBBCTR_iddecimperative,( &MHBBCTR),( &MHBBCTR,(GFBBCTR_iddecimperative).nonlocals));
TVVACTR_ccdec(MHBBCTR, (&RFBBCTR_enquiry), (*(&((&XEBBCTR_uchoice)->Param))));
} 
} 
break;
case 4: 
 /* line 558: */
GKZACTR_comma(ZGBBCTR_s.Param);
break;
case 5: 
 /* line 559: */
{ 
A_CALLPROC(YEBBCTR_readuchoiceimperative,(),((YEBBCTR_readuchoiceimperative).nonlocals));
 /* line 560: */
 /* line 561: */
 /* line 562: */
 /* line 564: */
CLZACTR_commau(XEBBCTR_uchoice, RFBBCTR_enquiry, SFBBCTR_case);
 /* line 565: */
 /* line 566: */
 /* line 567: */
NHBBCTR = (*(&((&XEBBCTR_uchoice)->Props))) ;
if ( A_LB_GE(NHBBCTR,WCAACTR_decbit) )
{ 
 /* line 568: */
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 575: */
A_CALLPROC(GFBBCTR_iddecimperative,( &OHBBCTR),( &OHBBCTR,(GFBBCTR_iddecimperative).nonlocals));
TVVACTR_ccdec(OHBBCTR, (&RFBBCTR_enquiry), (*(&((&XEBBCTR_uchoice)->Param))));
} 
} 
break;
case 6: 
 /* line 577: */
SXIACTR_terminalerror(665);
break;
case 7: 
 /* line 579: */
LLZACTR_out();
break;
case 8: 
 /* line 583: */
A_CALLPROC(ZLZACTR_outu,(),((ZLZACTR_outu).nonlocals));
break;
case 9: 
 /* line 584: */
GHZACTR_else();
break;
default: 
 /* line 585: */
SXIACTR_terminalerror(665);
break;
} 
 /* line 587: */
 /* line 588: */
 /* line 589: */
QHBBCTR = ZGBBCTR_s.Props ;
PHBBCTR.Block = A_LB_GE(QHBBCTR,WCAACTR_decbit);
 /* line 590: */
RHBBCTR = ZGBBCTR_s.Mode ;
PHBBCTR.Dynamicresult = OTMACTR_dynamic(A_ABS(RHBBCTR));
 /* line 591: */
PHBBCTR.Discardeddynamicresult = ((A68_BITS )(ZGBBCTR_s.Props&MDAACTR_dybits)!=0X0U);
 /* line 592: */
PHBBCTR.Type = (ZGBBCTR_s.Fn+LBAACTR_separatoroffset);
XGBBCTR_seriesproperties = PHBBCTR;
 /* line 593: */
 /* line 594: */
 /* line 596: */
SHBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
THBBCTR_t = (YGBBCTR.data.mode22);
 /* line 597: */
{ 
 /* line 598: */
 /* line 599: */
if ( (THBBCTR_t.Fn==CCAACTR_esacufn) )
{ 
 /* line 600: */
A_CALLPROC(ZMZACTR_esacu,(VFBBCTR_outpart, Answer),(VFBBCTR_outpart, Answer,(ZMZACTR_esacu).nonlocals));
} 
else
{ 
 /* line 601: */
 /* line 602: */
if ( (THBBCTR_t.Fn==BCAACTR_esacfn) )
{ 
 /* line 603: */
 /* line 604: */
DMZACTR_esac(VFBBCTR_outpart, Answer);
} 
else
{ 
 /* line 605: */
DNZACTR_fi(UFBBCTR_elsepart, Answer);
} 
} 
 /* line 607: */
 /* line 608: */
 /* line 609: */
 /* line 610: */
SHBBCTR = A68_FALSE;
} 
break;
default: 
SXIACTR_terminalerror(657);
 /* line 611: */
 /* line 612: */
 /* line 613: */
SHBBCTR = A68_FALSE;
break;
} 
 /* line 614: */
UHBBCTR = SHBBCTR;
if ( !UHBBCTR ) break;
 /* line 615: */
A_CALLPROC(NL(GCBBCTR_serialclause),(XGBBCTR_seriesproperties, WGBBCTR_seriesanswer),(XGBBCTR_seriesproperties, WGBBCTR_seriesanswer,(NL(GCBBCTR_serialclause)).nonlocals));
}
 /* line 616: */
} 
A_PROC_EXIT(choiceclause);
return;
} 
#undef NL

A_STATIC A68_VOID  YHBBCTR_collateralclause(A68_188  Starter, A68_63  Answer, void *NonLocals)
#define NL(x) (((ZHBBCTR_collateralclause *)NonLocals)->x)
{ 
A68_INT  UIBBCTR;  /* ADICOPS - ABS INT */
A68_INT  VIBBCTR_resultmode;
A68_INT  WIBBCTR_resulttype;
A68_BOOL  XIBBCTR_structure;
A68_BOOL  YIBBCTR_istruct;
A68_BOOL  ZIBBCTR_void;
A68_208  CJBBCTR_fields;
A68_208  DJBBCTR;  /* avoid structure result */
A68_64 * EJBBCTR_collateralvalue;
A68_VC  GJBBCTR;  /* clause result */
A68_65  IJBBCTR;  /* united object - for case conformity */
A68_68  LJBBCTR;  /* avoid structure result */
A68_65  MJBBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  NJBBCTR;  /* avoid structure result */
A68_VC  OJBBCTR_collateraltemp;
A68_64  PJBBCTR;  /* collateral clause result */
A68_INT  QJBBCTR;  /* ADICOPS - ABS INT */
A68_289  RJBBCTR;  /* clause result */
A68_INT  SJBBCTR;  /* YIELD */
A68_289  TJBBCTR;  /* OPERATORS - mode -> union mode */
A68_200 * UJBBCTR;  /* YIELD */
A68_289  VJBBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  WJBBCTR;  /* YIELD */
A68_289  XJBBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  YJBBCTR;  /* avoid structure result */
A68_65  ZJBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  AKBBCTR_phrasevalue;
A68_55  BKBBCTR_endofphrase;
A68_63  CKBBCTR;  /* collateral clause result */
A68_63  DKBBCTR_phraseanswer;
A68_INT  EKBBCTR_i;
A68_180  FKBBCTR;  /* united object - for case conformity */
A68_187  GKBBCTR_s;
A68_64  JKBBCTR;  /* collateral clause result */
A68_INT  KKBBCTR;  /* ADICOPS - ABS INT */
A68_289  LKBBCTR;  /* clause result */
A68_INT  MKBBCTR;  /* YIELD */
A68_289  NKBBCTR;  /* OPERATORS - mode -> union mode */
A68_200 * OKBBCTR;  /* YIELD */
A68_289  PKBBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  QKBBCTR;  /* YIELD */
A68_289  RKBBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  SKBBCTR;  /* avoid structure result */
A68_65  TKBBCTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  UKBBCTR;  /* clause result */
A68_189  VKBBCTR_t;
A68_BOOL  YKBBCTR;  /* clause result */
A_PROC_ENTRY(collateralclause);
 /* line 623: */
 /* line 624: */
{ 
 /* line 625: */
 /* line 626: */
 /* line 645: */
UIBBCTR = Starter.Resultmode ;
VIBBCTR_resultmode = A_ABS(UIBBCTR);
 /* line 646: */
WIBBCTR_resulttype = IOMACTR_modetype(VIBBCTR_resultmode);
 /* line 647: */
XIBBCTR_structure = (WIBBCTR_resulttype==IEAACTR_struct);
 /* line 648: */
YIBBCTR_istruct = (WIBBCTR_resulttype==JEAACTR_istruct);
 /* line 649: */
ZIBBCTR_void = (VIBBCTR_resultmode==UEAACTR_voidmode);
 /* line 651: */
 /* line 652: */
 /* line 653: */
WXIACTR_assert(BJBBCTR, ((XIBBCTR_structure|YIBBCTR_istruct)|ZIBBCTR_void));
 /* line 655: */
 /* line 656: */
 /* line 657: */
if ( XIBBCTR_structure )
{ 
 /* line 658: */
EVMACTR_structfields( VIBBCTR_resultmode, &DJBBCTR );
CJBBCTR_fields = DJBBCTR;
} 
 /* line 660: */
EJBBCTR_collateralvalue = Answer.Value;
 /* line 667: */
 /* line 668: */
 /* line 669: */
 /* line 670: */
if ( ((*(&(EJBBCTR_collateralvalue->Mode)))==UEAACTR_voidmode) )
{ 
GJBBCTR = HJBBCTR;
} 
else
{ 
 /* line 671: */
IJBBCTR = (*(&(EJBBCTR_collateralvalue->Extra))) ;
switch ( IJBBCTR.mode )
{ 
case 3: /* VOID */
 /* line 673: */
 /* line 675: */
 /* line 676: */
 /* line 677: */
LKOACTR_declarectemporary( (*(&(EJBBCTR_collateralvalue->Mode))), KJBBCTR, &LJBBCTR );
FGBBCTR_assignment((&(EJBBCTR_collateralvalue->Extra)), A_UNITE(MJBBCTR,mode5,5,LJBBCTR));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 678: */
 /* line 679: */
GYPACTR_getcfragment( EJBBCTR_collateralvalue, &NJBBCTR );
GJBBCTR = NJBBCTR;
} 
OJBBCTR_collateraltemp = GJBBCTR;
 /* line 682: */
 /* line 683: */
 /* line 684: */
QJBBCTR = Starter.Mode ;
PJBBCTR.Mode = A_ABS(QJBBCTR);
 /* line 686: */
PJBBCTR.Info = PKJACTR_defaultinfo;
 /* line 687: */
if ( XIBBCTR_structure )
{ 
 /* line 688: */
SJBBCTR = 1 ;
UJBBCTR = (&A_VINDEX(CJBBCTR_fields,SJBBCTR)) ;
RJBBCTR = A_UNITE(TJBBCTR,mode1,1,UJBBCTR);
} 
else
{ 
 /* line 689: */
if ( YIBBCTR_istruct )
{ 
 /* line 690: */
WJBBCTR = 1 ;
RJBBCTR = A_UNITE(VJBBCTR,mode2,2,WJBBCTR);
} 
else
{ 
 /* line 691: */
RJBBCTR = A_EMPTY(XJBBCTR,3);
} 
} 
 /* line 692: */
DIBBCTR_collateralunitassignee( OJBBCTR_collateraltemp, RJBBCTR, &YJBBCTR );
PJBBCTR.Extra = A_UNITE(ZJBBCTR,mode6,6,YJBBCTR);
AKBBCTR_phrasevalue = PJBBCTR;
 /* line 694: */
BKBBCTR_endofphrase = HIAACTR_unsetlabel;
 /* line 696: */
 /* line 697: */
CKBBCTR.Value = (&AKBBCTR_phrasevalue);
CKBBCTR.End = (&BKBBCTR_endofphrase);
CKBBCTR.Type = Answer.Type;
DKBBCTR_phraseanswer = CKBBCTR;
 /* line 699: */
 /* line 700: */
for ( EKBBCTR_i = 1;;
EKBBCTR_i += 1 ) 
{ 
A_CALLPROC(NL(ODBBCTR_phrase),(A68_FALSE, DKBBCTR_phraseanswer, A68_FALSE),(A68_FALSE, DKBBCTR_phraseanswer, A68_FALSE,(NL(ODBBCTR_phrase)).nonlocals));
 /* line 701: */
 /* line 702: */
FKBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( FKBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
GKBBCTR_s = (FKBBCTR.data.mode20);
 /* line 703: */
 /* line 704: */
{ 
WXIACTR_assert(IKBBCTR, (GKBBCTR_s.Fn==VBAACTR_collcommafn));
 /* line 706: */
 /* line 707: */
 /* line 708: */
KKBBCTR = GKBBCTR_s.Mode ;
JKBBCTR.Mode = A_ABS(KKBBCTR);
 /* line 710: */
JKBBCTR.Info = PKJACTR_defaultinfo;
 /* line 711: */
if ( XIBBCTR_structure )
{ 
 /* line 712: */
MKBBCTR = GKBBCTR_s.Param ;
OKBBCTR = (&A_VINDEX(CJBBCTR_fields,MKBBCTR)) ;
LKBBCTR = A_UNITE(NKBBCTR,mode1,1,OKBBCTR);
} 
else
{ 
 /* line 713: */
if ( YIBBCTR_istruct )
{ 
 /* line 714: */
QKBBCTR = GKBBCTR_s.Param ;
LKBBCTR = A_UNITE(PKBBCTR,mode2,2,QKBBCTR);
} 
else
{ 
 /* line 715: */
LKBBCTR = A_EMPTY(RKBBCTR,3);
} 
} 
 /* line 716: */
DIBBCTR_collateralunitassignee( OJBBCTR_collateraltemp, LKBBCTR, &SKBBCTR );
JKBBCTR.Extra = A_UNITE(TKBBCTR,mode6,6,SKBBCTR);
AGBBCTR_assignment((&AKBBCTR_phrasevalue), JKBBCTR);
 /* line 717: */
 /* line 718: */
 /* line 720: */
UKBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
VKBBCTR_t = (FKBBCTR.data.mode22);
 /* line 721: */
 /* line 722: */
{ 
WXIACTR_assert(XKBBCTR, (VKBBCTR_t.Fn==ECAACTR_endcollfn));
 /* line 723: */
 /* line 724: */
 /* line 725: */
 /* line 726: */
UKBBCTR = A68_FALSE;
} 
break;
default: 
SXIACTR_terminalerror(658);
 /* line 727: */
 /* line 728: */
 /* line 729: */
UKBBCTR = A68_FALSE;
break;
} 
 /* line 731: */
YKBBCTR = UKBBCTR;
if ( !YKBBCTR ) break;
/*SKIP*/;
}
 /* line 732: */
} 
A_PROC_EXIT(collateralclause);
return;
} 
#undef NL
 /* line 737: */

A_STATIC A68_VOID  CLBBCTR_loopbody(A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((DLBBCTR_loopbody *)NonLocals)->x)
{ 
A68_55  ELBBCTR_endofseries;
A68_180  FLBBCTR;  /* united object - for case conformity */
A68_187  GLBBCTR_whileordo;
A68_59  HLBBCTR;  /* collateral clause result */
A68_BITS  ILBBCTR;  /* ADICOPS - >= */
A68_59  JLBBCTR_loopproperties;
A68_64  KLBBCTR;  /* collateral clause result */
A68_65  LLBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  MLBBCTR_enquiry;
A68_63  NLBBCTR;  /* collateral clause result */
A68_180  OLBBCTR;  /* united object - for case conformity */
A68_187  PLBBCTR_s;
A68_59  SLBBCTR;  /* collateral clause result */
A68_BITS  TLBBCTR;  /* ADICOPS - >= */
A68_59  ULBBCTR_seriesproperties;
A68_63  VLBBCTR;  /* collateral clause result */
A68_63  WLBBCTR;  /* collateral clause result */
A_PROC_ENTRY(loopbody);
 /* line 742: */
 /* line 743: */
{ 
ELBBCTR_endofseries = HIAACTR_unsetlabel;
 /* line 744: */
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 745: */
 /* line 746: */
FLBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( FLBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
GLBBCTR_whileordo = (FLBBCTR.data.mode20);
 /* line 747: */
 /* line 748: */
{ 
 /* line 749: */
ILBBCTR = GLBBCTR_whileordo.Props ;
HLBBCTR.Block = (A_LB_GE(ILBBCTR,WCAACTR_decbit)&!Body);
 /* line 750: */
HLBBCTR.Dynamicresult = A68_FALSE;
 /* line 751: */
HLBBCTR.Discardeddynamicresult = ((A68_BITS )(GLBBCTR_whileordo.Props&MDAACTR_dybits)!=0X0U);
 /* line 752: */
HLBBCTR.Type = (GLBBCTR_whileordo.Fn+LBAACTR_separatoroffset);
JLBBCTR_loopproperties = HLBBCTR;
 /* line 754: */
 /* line 755: */
 /* line 756: */
if ( (GLBBCTR_whileordo.Fn==YBAACTR_whilefn) )
{ 
KLBBCTR.Mode = WEAACTR_boolmode;
KLBBCTR.Info = PKJACTR_defaultinfo;
KLBBCTR.Extra = A_EMPTY(LLBBCTR,3);
MLBBCTR_enquiry = KLBBCTR;
 /* line 757: */
JXABCTR_while();
 /* line 758: */
 /* line 759: */
NLBBCTR.Value = (&MLBBCTR_enquiry);
NLBBCTR.End = (A68_55 *)A68_NIL;
NLBBCTR.Type = ILJACTR_enquiryresult;
A_CALLPROC(NL(ADBBCTR_enquiryclause),(NLBBCTR),(NLBBCTR,(NL(ADBBCTR_enquiryclause)).nonlocals));
 /* line 760: */
LXABCTR_whiledo((&MLBBCTR_enquiry));
 /* line 762: */
 /* line 763: */
OLBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( OLBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
PLBBCTR_s = (OLBBCTR.data.mode20);
 /* line 764: */
 /* line 765: */
{ 
WXIACTR_assert(RLBBCTR, (PLBBCTR_s.Fn==XBAACTR_dofn));
 /* line 766: */
 /* line 767: */
 /* line 768: */
 /* line 769: */
TLBBCTR = PLBBCTR_s.Props ;
SLBBCTR.Block = (A_LB_GE(TLBBCTR,WCAACTR_decbit)&!JLBBCTR_loopproperties.Block);
 /* line 770: */
SLBBCTR.Dynamicresult = A68_FALSE;
 /* line 771: */
SLBBCTR.Discardeddynamicresult = ((A68_BITS )(PLBBCTR_s.Props&MDAACTR_dybits)!=0X0U);
 /* line 772: */
SLBBCTR.Type = (PLBBCTR_s.Fn+LBAACTR_separatoroffset);
ULBBCTR_seriesproperties = SLBBCTR;
 /* line 773: */
 /* line 774: */
 /* line 775: */
VLBBCTR.Value = Answer.Value;
VLBBCTR.End = (&ELBBCTR_endofseries);
 /* line 776: */
VLBBCTR.Type = ELJACTR_voidresult;
 /* line 777: */
 /* line 778: */
 /* line 779: */
A_CALLPROC(NL(GCBBCTR_serialclause),(ULBBCTR_seriesproperties, VLBBCTR),(ULBBCTR_seriesproperties, VLBBCTR,(NL(GCBBCTR_serialclause)).nonlocals));
} 
break;
default: 
 /* line 780: */
SXIACTR_terminalerror(666);
break;
} 
 /* line 782: */
 /* line 784: */
 /* line 786: */
EYABCTR_whileod();
} 
else
{ 
 /* line 787: */
WLBBCTR.Value = Answer.Value;
WLBBCTR.End = (&ELBBCTR_endofseries);
 /* line 788: */
WLBBCTR.Type = ELJACTR_voidresult;
A_CALLPROC(NL(GCBBCTR_serialclause),(JLBBCTR_loopproperties, WLBBCTR),(JLBBCTR_loopproperties, WLBBCTR,(NL(GCBBCTR_serialclause)).nonlocals));
 /* line 789: */
 /* line 790: */
 /* line 791: */
 /* line 792: */
 /* line 793: */
A_CALLPROC(LYABCTR_od,(),((LYABCTR_od).nonlocals));
} 
} 
break;
default: 
 /* line 794: */
 /* line 795: */
SXIACTR_terminalerror(666);
break;
} 
} 
A_PROC_EXIT(loopbody);
return;
} 
#undef NL
 /* line 799: */
 /* line 800: */
 /* line 802: */

A_STATIC A68_VOID  CMBBCTR_loopclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Frobytlist, void *NonLocals)
#define NL(x) (((DMBBCTR_loopclause *)NonLocals)->x)
{ 
A68_55  EMBBCTR_startofloop;
A68_55 * FMBBCTR_endofloop;
A68_64  GMBBCTR_control;
A68_64  HMBBCTR_step;
A68_194  IMBBCTR;  /* collateral clause result */
A68_BITS  JMBBCTR;  /* ADICOPS - >= */
A68_BITS  KMBBCTR;  /* ADICOPS - >= */
A68_BITS  LMBBCTR;  /* ADICOPS - >= */
A68_BITS  MMBBCTR;  /* ADICOPS - >= */
A68_194  NMBBCTR_loop;
A68_180  OMBBCTR;  /* united object - for case conformity */
A68_156  PMBBCTR_id;
A68_64  QMBBCTR;  /* collateral clause result */
A68_INT  RMBBCTR;  /* YIELD */
A68_67  SMBBCTR_iden;
A68_INT * TMBBCTR;  /* YIELD */
A68_65  UMBBCTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(loopclause);
 /* line 806: */
 /* line 807: */
{ 
EMBBCTR_startofloop = HIAACTR_unsetlabel;
 /* line 808: */
FMBBCTR_endofloop = Answer.End;
 /* line 809: */
GMBBCTR_control = DLJACTR_skipvalue;
 /* line 810: */
HMBBCTR_step = DLJACTR_skipvalue;
 /* line 812: */
 /* line 813: */
IMBBCTR.Control = (&GMBBCTR_control);
 /* line 814: */
IMBBCTR.Step = (&HMBBCTR_step);
 /* line 815: */
JMBBCTR = Starter.Props ;
IMBBCTR.Forpart = A_LB_GE(JMBBCTR,IDAACTR_forpartbit);
 /* line 816: */
KMBBCTR = Starter.Props ;
IMBBCTR.Frompart = A_LB_GE(KMBBCTR,JDAACTR_frompartbit);
 /* line 817: */
LMBBCTR = Starter.Props ;
IMBBCTR.Bypart = A_LB_GE(LMBBCTR,KDAACTR_bypartbit);
 /* line 818: */
MMBBCTR = Starter.Props ;
IMBBCTR.Topart = A_LB_GE(MMBBCTR,LDAACTR_topartbit);
NMBBCTR_loop = IMBBCTR;
 /* line 820: */
 /* line 821: */
if ( (*(&((&NMBBCTR_loop)->Forpart))) )
{ 
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 822: */
 /* line 823: */
OMBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( OMBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
PMBBCTR_id = (OMBBCTR.data.mode11);
 /* line 824: */
{ 
CUVACTR_iddec(PMBBCTR_id, (A68_71 **)A68_NIL);
 /* line 825: */
 /* line 826: */
 /* line 827: */
RMBBCTR = PMBBCTR_id.Decno ;
QMBBCTR.Mode = (*(&((&A_R1INDEX(WPKACTR_ids,RMBBCTR))->Mode)));
 /* line 828: */
QMBBCTR.Info = PKJACTR_defaultinfo;
{ 
 /* line 829: */
TMBBCTR = (&((&SMBBCTR_iden)->Idno)) ;
(*TMBBCTR) = PMBBCTR_id.Decno;
 /* line 830: */
 /* line 831: */
 /* line 832: */
QMBBCTR.Extra = A_UNITE(UMBBCTR,mode4,4,SMBBCTR_iden);
} 
 /* line 833: */
 /* line 834: */
AGBBCTR_assignment((&GMBBCTR_control), QMBBCTR);
} 
break;
default: 
 /* line 835: */
 /* line 836: */
SXIACTR_terminalerror(666);
break;
} 
} 
 /* line 838: */
BDABCTR_for((&NMBBCTR_loop), Starter.Resultmode, Frobytlist);
 /* line 839: */
 /* line 840: */
A_CALLPROC(NL(BLBBCTR_loopbody),(Body, Answer),(Body, Answer,(NL(BLBBCTR_loopbody)).nonlocals));
} 
A_PROC_EXIT(loopclause);
return;
} 
#undef NL
 /* line 844: */
 /* line 845: */
 /* line 847: */

A_STATIC A68_VOID  ANBBCTR_forallclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Foralllist, void *NonLocals)
#define NL(x) (((BNBBCTR_forallclause *)NonLocals)->x)
{ 
A68_55  CNBBCTR_startofloop;
A68_55 * DNBBCTR_endofloop;
A68_INT  ENBBCTR_controlcount;
A68_298  GNBBCTR_generator;   /* proc value of non-global proc */
A68_198  MNBBCTR;  /* avoid structure result */
A68_198  LNBBCTR_controls;
A68_71 ** NNBBCTR_thisforalllist;
A68_195 * ONBBCTR_control;
A68_INT  PNBBCTR;  /* forall loop counter */
A68_180  QNBBCTR;  /* united object - for case conformity */
A68_156  RNBBCTR_id;
A68_64  SNBBCTR;  /* collateral clause result */
A68_INT  TNBBCTR;  /* YIELD */
A68_67  UNBBCTR_iden;
A68_INT * VNBBCTR;  /* YIELD */
A68_65  WNBBCTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(forallclause);
 /* line 851: */
 /* line 852: */
{ 
CNBBCTR_startofloop = HIAACTR_unsetlabel;
 /* line 853: */
DNBBCTR_endofloop = Answer.End;
 /* line 854: */
ENBBCTR_controlcount = Starter.Resultmode;
 /* line 855: */
A_CLOSURE( GNBBCTR_generator, HNBBCTR_generator, INBBCTR_generator );
(( INBBCTR_generator * ) ( GNBBCTR_generator.nonlocals )) -> ENBBCTR_controlcount = ENBBCTR_controlcount;
A_CALLPROC(GNBBCTR_generator,(A68_TRUE, &MNBBCTR),(A68_TRUE, &MNBBCTR,(GNBBCTR_generator).nonlocals));
LNBBCTR_controls = MNBBCTR;
 /* line 857: */
NNBBCTR_thisforalllist = Foralllist;
 /* line 859: */
 /* line 860: */
PNBBCTR = LNBBCTR_controls.upb -1;
ONBBCTR_control = LNBBCTR_controls.data;
for (;PNBBCTR-- >= 0;
(ONBBCTR_control++
) )
{
 /* line 861: */
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 862: */
 /* line 863: */
QNBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( QNBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
RNBBCTR_id = (QNBBCTR.data.mode11);
 /* line 864: */
 /* line 871: */
{ 
CUVACTR_iddec(RNBBCTR_id, NNBBCTR_thisforalllist);
 /* line 872: */
NNBBCTR_thisforalllist = (&((*NNBBCTR_thisforalllist)->Rest));
 /* line 874: */
 /* line 875: */
 /* line 876: */
TNBBCTR = RNBBCTR_id.Decno ;
SNBBCTR.Mode = (*(&((&A_R1INDEX(WPKACTR_ids,TNBBCTR))->Mode)));
 /* line 877: */
SNBBCTR.Info = PKJACTR_defaultinfo;
{ 
 /* line 878: */
VNBBCTR = (&((&UNBBCTR_iden)->Idno)) ;
(*VNBBCTR) = RNBBCTR_id.Decno;
 /* line 879: */
 /* line 880: */
 /* line 881: */
SNBBCTR.Extra = A_UNITE(WNBBCTR,mode4,4,UNBBCTR_iden);
} 
 /* line 882: */
 /* line 883: */
AGBBCTR_assignment((&(ONBBCTR_control->Ident)), SNBBCTR);
} 
break;
default: 
 /* line 884: */
 /* line 885: */
SXIACTR_terminalerror(666);
break;
} 
}
 /* line 887: */
PMABCTR_forall(LNBBCTR_controls, Foralllist);
 /* line 888: */
 /* line 889: */
A_CALLPROC(NL(BLBBCTR_loopbody),(Body, Answer),(Body, Answer,(NL(BLBBCTR_loopbody)).nonlocals));
} 
A_PROC_EXIT(forallclause);
return;
} 
#undef NL

A_STATIC A68_71 * FOBBCTR_assignment(A68_71 * DOBBCTR_anonymous, A68_71  EOBBCTR_anonymous)
{ 
A68_71 ** GOBBCTR;  /* YIELD */
A68_71 * HOBBCTR;  /* clause result */
{ 
AGBBCTR_assignment((&(DOBBCTR_anonymous->Value)), EOBBCTR_anonymous.Value);
GOBBCTR = (&(DOBBCTR_anonymous->Rest)) ;
(*GOBBCTR) = EOBBCTR_anonymous.Rest;
HOBBCTR = DOBBCTR_anonymous;
} 
return( HOBBCTR );
} 
#undef NL

A_STATIC A68_VOID  BBBBCTR_generator(A68_BOOL  ZABBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals)
#define NL(x) (((CBBBCTR_generator *)NonLocals)->x)
{ 
A68_124  DBBBCTR;  /* clause result */
A68_124  EBBBCTR;  /* OPERATORS - dynamic generator */
{ 
EBBBCTR.upb = 0 ;
( ZABBCTR_anonymous? A_VLOC(A68_INT ,EBBBCTR): A_VHEAP(A68_INT ,EBBBCTR) );
DBBBCTR = EBBBCTR;
} 
*ReturnedValue = (DBBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MBBBCTR_generator(A68_BOOL  KBBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals)
#define NL(x) (((NBBBCTR_generator *)NonLocals)->x)
{ 
A68_124  OBBBCTR;  /* clause result */
A68_124  PBBBCTR;  /* OPERATORS - dynamic generator */
{ 
PBBBCTR.upb = NL(YABBCTR_paramcount) ;
( KBBBCTR_anonymous? A_VLOC(A68_INT ,PBBBCTR): A_VHEAP(A68_INT ,PBBBCTR) );
OBBBCTR = PBBBCTR;
} 
*ReturnedValue = (OBBBCTR);
return;
} 
#undef NL
 /* line 369: */
 /* line 370: */
 /* line 372: */

A_STATIC A68_VOID  XDBBCTR_enclosedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 * Newvalue, void *NonLocals)
#define NL(x) (((YDBBCTR_enclosedclause *)NonLocals)->x)
{ 
A68_281  DEBBCTR_closedclause;   /* proc value of non-global proc */
A68_281  UEBBCTR_choiceclause;   /* proc value of non-global proc */
A68_288  XHBBCTR_collateralclause;   /* proc value of non-global proc */
A68_76  BLBBCTR_loopbody;   /* proc value of non-global proc */
A68_297  BMBBCTR_loopclause;   /* proc value of non-global proc */
A68_297  ZMBBCTR_forallclause;   /* proc value of non-global proc */
A68_55  XNBBCTR_endofclause;
A68_INT  YNBBCTR;  /* ADICOPS - ABS INT */
A68_INT  ZNBBCTR_resultmode;
A68_INT  AOBBCTR_type;
A68_71  BOBBCTR;  /* collateral clause result */
A68_65  COBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  IOBBCTR;  /* collateral clause result */
A68_63  LOBBCTR;  /* collateral clause result */
A68_BITS  MOBBCTR;  /* ADICOPS - >= */
A68_INT  NOBBCTR;  /* ADICOPS - ABS INT */
A68_INT  OOBBCTR;  /* ADICOPS - ABS INT */
A68_INT  POBBCTR_resultmode;
A68_BOOL  QOBBCTR_newanswer;
A68_71  ROBBCTR;  /* collateral clause result */
A68_65  SOBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  TOBBCTR;  /* collateral clause result */
A68_63  UOBBCTR;  /* collateral clause result */
A68_71 * VOBBCTR_valuelist;
A68_INT  WOBBCTR;  /* to part of loop */
A68_INT  XOBBCTR;  /* loop control */
A68_71  YOBBCTR;  /* collateral clause result */
A68_65  ZOBBCTR;  /* OPERATORS - mode -> union mode */
A68_297  APBBCTR;  /* clause result */
A68_63  BPBBCTR;  /* collateral clause result */
A68_INT  CPBBCTR;  /* ADICOPS - ABS INT */
A68_INT  DPBBCTR_resultmode;
A68_71  EPBBCTR;  /* collateral clause result */
A68_65  FPBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  GPBBCTR;  /* collateral clause result */
A68_63  JPBBCTR;  /* collateral clause result */
A68_INT  KPBBCTR;  /* ADICOPS - ABS INT */
A_PROC_ENTRY(enclosedclause);
 /* line 392: */
 /* line 394: */
{ 
 /* line 395: */
A_CLOSURE( DEBBCTR_closedclause, EEBBCTR_closedclause, FEBBCTR_closedclause );
(( FEBBCTR_closedclause * ) ( DEBBCTR_closedclause.nonlocals )) -> GCBBCTR_serialclause = NL(GCBBCTR_serialclause);
 /* line 429: */
 /* line 430: */
A_CLOSURE( UEBBCTR_choiceclause, VEBBCTR_choiceclause, WEBBCTR_choiceclause );
(( WEBBCTR_choiceclause * ) ( UEBBCTR_choiceclause.nonlocals )) -> AZABCTR_read = NL(AZABCTR_read);
(( WEBBCTR_choiceclause * ) ( UEBBCTR_choiceclause.nonlocals )) -> WYABCTR_currentimperative = NL(WYABCTR_currentimperative);
(( WEBBCTR_choiceclause * ) ( UEBBCTR_choiceclause.nonlocals )) -> ADBBCTR_enquiryclause = NL(ADBBCTR_enquiryclause);
(( WEBBCTR_choiceclause * ) ( UEBBCTR_choiceclause.nonlocals )) -> GCBBCTR_serialclause = NL(GCBBCTR_serialclause);
 /* line 618: */
A_CLOSURE( XHBBCTR_collateralclause, YHBBCTR_collateralclause, ZHBBCTR_collateralclause );
(( ZHBBCTR_collateralclause * ) ( XHBBCTR_collateralclause.nonlocals )) -> ODBBCTR_phrase = NL(ODBBCTR_phrase);
(( ZHBBCTR_collateralclause * ) ( XHBBCTR_collateralclause.nonlocals )) -> WYABCTR_currentimperative = NL(WYABCTR_currentimperative);
 /* line 734: */
 /* line 735: */
A_CLOSURE( BLBBCTR_loopbody, CLBBCTR_loopbody, DLBBCTR_loopbody );
(( DLBBCTR_loopbody * ) ( BLBBCTR_loopbody.nonlocals )) -> AZABCTR_read = NL(AZABCTR_read);
(( DLBBCTR_loopbody * ) ( BLBBCTR_loopbody.nonlocals )) -> WYABCTR_currentimperative = NL(WYABCTR_currentimperative);
(( DLBBCTR_loopbody * ) ( BLBBCTR_loopbody.nonlocals )) -> ADBBCTR_enquiryclause = NL(ADBBCTR_enquiryclause);
(( DLBBCTR_loopbody * ) ( BLBBCTR_loopbody.nonlocals )) -> GCBBCTR_serialclause = NL(GCBBCTR_serialclause);
 /* line 797: */
 /* line 798: */
A_CLOSURE( BMBBCTR_loopclause, CMBBCTR_loopclause, DMBBCTR_loopclause );
(( DMBBCTR_loopclause * ) ( BMBBCTR_loopclause.nonlocals )) -> AZABCTR_read = NL(AZABCTR_read);
(( DMBBCTR_loopclause * ) ( BMBBCTR_loopclause.nonlocals )) -> WYABCTR_currentimperative = NL(WYABCTR_currentimperative);
(( DMBBCTR_loopclause * ) ( BMBBCTR_loopclause.nonlocals )) -> BLBBCTR_loopbody = BLBBCTR_loopbody;
 /* line 842: */
 /* line 843: */
A_CLOSURE( ZMBBCTR_forallclause, ANBBCTR_forallclause, BNBBCTR_forallclause );
(( BNBBCTR_forallclause * ) ( ZMBBCTR_forallclause.nonlocals )) -> AZABCTR_read = NL(AZABCTR_read);
(( BNBBCTR_forallclause * ) ( ZMBBCTR_forallclause.nonlocals )) -> WYABCTR_currentimperative = NL(WYABCTR_currentimperative);
(( BNBBCTR_forallclause * ) ( ZMBBCTR_forallclause.nonlocals )) -> BLBBCTR_loopbody = BLBBCTR_loopbody;
 /* line 893: */
XNBBCTR_endofclause = HIAACTR_unsetlabel;
 /* line 895: */
 /* line 896: */
if ( (Starter.Fn==HBAACTR_beginfn) )
{ 
 /* line 897: */
if ( ((Starter.Mode>0)&!Body) )
{ 
YNBBCTR = Starter.Resultmode ;
ZNBBCTR_resultmode = A_ABS(YNBBCTR);
 /* line 898: */
AOBBCTR_type = KLJACTR_noparticularresult;
 /* line 900: */
 /* line 901: */
BOBBCTR.Value.Mode = ZNBBCTR_resultmode;
BOBBCTR.Value.Info = PKJACTR_defaultinfo;
BOBBCTR.Value.Extra = A_EMPTY(COBBCTR,3);
BOBBCTR.Rest = (*NL(RDBBCTR_valuestack));
(*NL(RDBBCTR_valuestack)) = FOBBCTR_assignment(Newvalue, BOBBCTR);
 /* line 903: */
 /* line 904: */
 /* line 905: */
 /* line 906: */
 /* line 907: */
IOBBCTR.Value = (&((*NL(RDBBCTR_valuestack))->Value));
 /* line 909: */
IOBBCTR.End = (&XNBBCTR_endofclause);
 /* line 910: */
IOBBCTR.Type = Answer.Type;
 /* line 911: */
 /* line 912: */
A_CALLPROC(DEBBCTR_closedclause,(Starter, Body, IOBBCTR),(Starter, Body, IOBBCTR,(DEBBCTR_closedclause).nonlocals));
} 
else
{ 
WXIACTR_assert(KOBBCTR, (Answer.Type!=JLJACTR_optboolresult));
 /* line 913: */
 /* line 914: */
 /* line 915: */
 /* line 916: */
 /* line 917: */
LOBBCTR.Value = Answer.Value;
 /* line 918: */
 /* line 919: */
if ( (Answer.End==(A68_55 *)A68_NIL) )
{ 
 /* line 920: */
LOBBCTR.End = (&XNBBCTR_endofclause);
} 
else
{ 
 /* line 921: */
LOBBCTR.End = Answer.End;
} 
 /* line 922: */
 /* line 923: */
MOBBCTR = Starter.Props ;
if ( A_LB_GE(MOBBCTR,TCAACTR_exitbit) )
{ 
 /* line 924: */
NOBBCTR = Answer.Type ;
LOBBCTR.Type = A_ABS(NOBBCTR);
} 
else
{ 
 /* line 925: */
 /* line 926: */
LOBBCTR.Type = Answer.Type;
} 
 /* line 927: */
 /* line 928: */
A_CALLPROC(DEBBCTR_closedclause,(Starter, Body, LOBBCTR),(Starter, Body, LOBBCTR,(DEBBCTR_closedclause).nonlocals));
} 
} 
else
{ 
 /* line 929: */
if ( (Starter.Fn==IBAACTR_collbeginfn) )
{ 
OOBBCTR = Starter.Resultmode ;
POBBCTR_resultmode = A_ABS(OOBBCTR);
 /* line 930: */
QOBBCTR_newanswer = (Starter.Mode>0);
 /* line 932: */
 /* line 933: */
 /* line 934: */
if ( (QOBBCTR_newanswer|(Answer.Type==HLJACTR_routineresult)) )
{ 
 /* line 935: */
 /* line 936: */
ROBBCTR.Value.Mode = POBBCTR_resultmode;
 /* line 938: */
ROBBCTR.Value.Info = PKJACTR_defaultinfo;
 /* line 940: */
ROBBCTR.Value.Extra = A_EMPTY(SOBBCTR,3);
ROBBCTR.Rest = (*NL(RDBBCTR_valuestack));
(*NL(RDBBCTR_valuestack)) = FOBBCTR_assignment(Newvalue, ROBBCTR);
 /* line 941: */
 /* line 942: */
 /* line 943: */
 /* line 944: */
TOBBCTR.Value = (&((*NL(RDBBCTR_valuestack))->Value));
TOBBCTR.End = (A68_55 *)A68_NIL;
 /* line 945: */
TOBBCTR.Type = KLJACTR_noparticularresult;
 /* line 946: */
 /* line 948: */
A_CALLPROC(XHBBCTR_collateralclause,(Starter, TOBBCTR),(Starter, TOBBCTR,(XHBBCTR_collateralclause).nonlocals));
} 
else
{ 
 /* line 949: */
 /* line 950: */
UOBBCTR.Value = Answer.Value;
UOBBCTR.End = (A68_55 *)A68_NIL;
 /* line 951: */
UOBBCTR.Type = KLJACTR_noparticularresult;
 /* line 952: */
 /* line 953: */
A_CALLPROC(XHBBCTR_collateralclause,(Starter, UOBBCTR),(Starter, UOBBCTR,(XHBBCTR_collateralclause).nonlocals));
} 
} 
else
{ 
 /* line 954: */
 /* line 955: */
if ( ((Starter.Fn==JBAACTR_forfn)|(Starter.Fn==KBAACTR_forallfn)) )
{ 
VOBBCTR_valuelist = (*NL(RDBBCTR_valuestack));
 /* line 957: */
 /* line 958: */
WOBBCTR = Starter.Resultmode;
for ( XOBBCTR = 1;
XOBBCTR <= WOBBCTR;
XOBBCTR += 1 )
{ 
 /* line 959: */
(*NL(RDBBCTR_valuestack)) = (*(&((*NL(RDBBCTR_valuestack))->Rest)));
}
 /* line 961: */
 /* line 962: */
YOBBCTR.Value.Mode = UEAACTR_voidmode;
YOBBCTR.Value.Info = PKJACTR_defaultinfo;
YOBBCTR.Value.Extra = A_EMPTY(ZOBBCTR,3);
YOBBCTR.Rest = (*NL(RDBBCTR_valuestack));
(*NL(RDBBCTR_valuestack)) = FOBBCTR_assignment(Newvalue, YOBBCTR);
 /* line 964: */
 /* line 965: */
 /* line 966: */
if ( (Starter.Fn==JBAACTR_forfn) )
{ 
 /* line 967: */
APBBCTR = BMBBCTR_loopclause;
} 
else
{ 
APBBCTR = ZMBBCTR_forallclause;
} 
 /* line 968: */
 /* line 969: */
BPBBCTR.Value = (&((*NL(RDBBCTR_valuestack))->Value));
BPBBCTR.End = (&XNBBCTR_endofclause);
BPBBCTR.Type = ELJACTR_voidresult;
 /* line 971: */
 /* line 973: */
 /* line 974: */
A_CALLPROC(APBBCTR,(Starter, Body, BPBBCTR, (&VOBBCTR_valuelist)),(Starter, Body, BPBBCTR, (&VOBBCTR_valuelist),(APBBCTR).nonlocals));
} 
else
{ 
 /* line 975: */
 /* line 976: */
if ( ((Starter.Mode>0)&!Body) )
{ 
CPBBCTR = Starter.Resultmode ;
DPBBCTR_resultmode = A_ABS(CPBBCTR);
 /* line 978: */
 /* line 979: */
EPBBCTR.Value.Mode = DPBBCTR_resultmode;
EPBBCTR.Value.Info = PKJACTR_defaultinfo;
EPBBCTR.Value.Extra = A_EMPTY(FPBBCTR,3);
EPBBCTR.Rest = (*NL(RDBBCTR_valuestack));
(*NL(RDBBCTR_valuestack)) = FOBBCTR_assignment(Newvalue, EPBBCTR);
 /* line 981: */
 /* line 982: */
 /* line 983: */
 /* line 984: */
 /* line 985: */
GPBBCTR.Value = (&((*NL(RDBBCTR_valuestack))->Value));
 /* line 987: */
GPBBCTR.End = (&XNBBCTR_endofclause);
 /* line 988: */
GPBBCTR.Type = FLJACTR_memoryresult;
 /* line 989: */
 /* line 990: */
A_CALLPROC(UEBBCTR_choiceclause,(Starter, Body, GPBBCTR),(Starter, Body, GPBBCTR,(UEBBCTR_choiceclause).nonlocals));
} 
else
{ 
WXIACTR_assert(IPBBCTR, (Answer.Type!=JLJACTR_optboolresult));
 /* line 991: */
 /* line 992: */
 /* line 993: */
 /* line 994: */
 /* line 995: */
JPBBCTR.Value = Answer.Value;
 /* line 996: */
 /* line 997: */
if ( (Answer.End==(A68_55 *)A68_NIL) )
{ 
 /* line 998: */
JPBBCTR.End = (&XNBBCTR_endofclause);
} 
else
{ 
 /* line 1000: */
JPBBCTR.End = Answer.End;
} 
 /* line 1001: */
KPBBCTR = Answer.Type ;
JPBBCTR.Type = A_ABS(KPBBCTR);
 /* line 1002: */
 /* line 1003: */
A_CALLPROC(UEBBCTR_choiceclause,(Starter, Body, JPBBCTR),(Starter, Body, JPBBCTR,(UEBBCTR_choiceclause).nonlocals));
} 
} 
} 
} 
} 
A_PROC_EXIT(enclosedclause);
return;
} 
#undef NL

A_STATIC A68_VOID  NPBBCTR_optboolexpression(A68_INT  Warn, void *NonLocals)
#define NL(x) (((OPBBCTR_optboolexpression *)NonLocals)->x)
{ 
A68_64 * PPBBCTR_operand;
A68_BOOL  QPBBCTR_orel;
A68_63  RPBBCTR;  /* collateral clause result */
A_PROC_ENTRY(optboolexpression);
 /* line 1009: */
 /* line 1010: */
{ 
PPBBCTR_operand = (&((*NL(RDBBCTR_valuestack))->Value));
 /* line 1011: */
QPBBCTR_orel = (Warn==KCAACTR_orelwarn);
 /* line 1012: */
WNZACTR_optboolwarning(QPBBCTR_orel, PPBBCTR_operand);
 /* line 1014: */
 /* line 1015: */
 /* line 1016: */
RPBBCTR.Value = PPBBCTR_operand;
RPBBCTR.End = (A68_55 *)A68_NIL;
RPBBCTR.Type = KLJACTR_noparticularresult;
 /* line 1017: */
 /* line 1018: */
A_CALLPROC(NL(ODBBCTR_phrase),(A68_FALSE, RPBBCTR, A68_FALSE),(A68_FALSE, RPBBCTR, A68_FALSE,(NL(ODBBCTR_phrase)).nonlocals));
 /* line 1019: */
 /* line 1020: */
PPZACTR_optbooloper();
} 
A_PROC_EXIT(optboolexpression);
return;
} 
#undef NL

A_STATIC A68_VOID  WZABCTR_skiproutine(void *NonLocals)
#define NL(x) (((XZABCTR_skiproutine *)NonLocals)->x)
{ 
A68_180  YZABCTR;  /* united object - for case conformity */
A68_BOOL  ZZABCTR;  /* clause result */
A68_189  AABBCTR_t;
A68_BOOL  BABBCTR;  /* clause result */
A_PROC_ENTRY(skiproutine);
for ( ;; )
{ 
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 133: */
 /* line 134: */
YZABCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( YZABCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
{ 
A_CALLPROC(NL(VZABCTR_skiproutine),(),((NL(VZABCTR_skiproutine)).nonlocals));
 /* line 135: */
ZZABCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
AABBCTR_t = (YZABCTR.data.mode22);
 /* line 136: */
ZZABCTR = (AABBCTR_t.Fn!=GCAACTR_routinendfn);
break;
default: 
 /* line 137: */
 /* line 138: */
ZZABCTR = A68_TRUE;
break;
} 
 /* line 140: */
BABBCTR = ZZABCTR;
if ( !BABBCTR ) break;
/*SKIP*/;
}
A_PROC_EXIT(skiproutine);
return;
} 
#undef NL

A_STATIC A68_VOID  EABBCTR_routine(A68_122  Routine, void *NonLocals)
#define NL(x) (((FABBCTR_routine *)NonLocals)->x)
{ 
A68_INT  HABBCTR;  /* YIELD */
A68_123  GABBCTR_environ;
A68_180  IABBCTR;  /* united object - for case conformity */
A68_164  JABBCTR_label;
A68_123  KABBCTR;  /* avoid structure result */
A68_123  LABBCTR_labelenviron;
A68_BOOL  MABBCTR;  /* clause result */
A68_122  NABBCTR_r;
A68_BOOL  SABBCTR;  /* clause result */
A68_INT  TABBCTR_resulttype;
A68_64  UABBCTR_result;
A68_55 * VABBCTR_endofroutine;
A68_199  WABBCTR;  /* avoid structure result */
A68_199  XABBCTR_proc;
A68_INT  YABBCTR_paramcount;
A68_272  ABBBCTR_generator;   /* proc value of non-global proc */
A68_124  FBBBCTR;  /* avoid structure result */
A68_124  GBBBCTR_nulllist;
A68_124  HBBBCTR_parammodes;
A68_124  IBBBCTR_paramdecnos;
A68_124  JBBBCTR;  /* avoid structure result */
A68_272  LBBBCTR_generator;   /* proc value of non-global proc */
A68_124  QBBBCTR;  /* avoid structure result */
A68_INT  RBBBCTR_i;
A68_INT  SBBBCTR;  /* to part of loop */
A68_180  TBBBCTR;  /* united object - for case conformity */
A68_156  UBBBCTR_id;
A68_INT * ZBBBCTR;  /* YIELD */
A68_63  CCBBCTR;  /* collateral clause result */
A68_BITS  DCBBCTR;  /* ADICOPS - >= */
A_PROC_ENTRY(routine);
 /* line 147: */
 /* line 148: */
{ 
HABBCTR = Routine.Maxname ;
GABBCTR_environ = (*(&((&A_R1INDEX(WPKACTR_ids,HABBCTR))->Environ)));
 /* line 150: */
for ( ;; )
{ 
A_CALLPROC(NL(GZABCTR_lookahead),(),((NL(GZABCTR_lookahead)).nonlocals));
 /* line 151: */
 /* line 152: */
IABBCTR = (*NL(YYABCTR_nextimperative)) ;
switch ( IABBCTR.mode )
{ 
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
JABBCTR_label = (IABBCTR.data.mode14);
 /* line 153: */
 /* line 154: */
{ 
QPWACTR_labdec(JABBCTR_label);
 /* line 155: */
 /* line 156: */
FWWACTR_environoflabel( JABBCTR_label.Labno, &KABBCTR );
LABBCTR_labelenviron = KABBCTR;
 /* line 157: */
 /* line 158: */
if ( TRLACTR_isnewerthan(LABBCTR_labelenviron, GABBCTR_environ) )
{ 
 /* line 159: */
GABBCTR_environ = LABBCTR_labelenviron;
} 
 /* line 160: */
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 161: */
 /* line 163: */
MABBCTR = A68_TRUE;
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
NABBCTR_r = (IABBCTR.data.mode12);
 /* line 164: */
 /* line 165: */
 /* line 167: */
if ( (IOMACTR_modetype(Routine.Mode)==GEAACTR_procp) )
{ 
WXIACTR_assert(RABBCTR, A_VC_EQ(NABBCTR_r.Name,QABBCTR));
 /* line 168: */
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 169: */
A_CALLPROC(NL(VZABCTR_skiproutine),(),((NL(VZABCTR_skiproutine)).nonlocals));
 /* line 170: */
 /* line 171: */
MABBCTR = A68_TRUE;
} 
else
{ 
 /* line 172: */
 /* line 173: */
MABBCTR = A68_FALSE;
} 
break;
default: 
 /* line 174: */
 /* line 175: */
MABBCTR = A68_FALSE;
break;
} 
 /* line 177: */
SABBCTR = MABBCTR;
if ( !SABBCTR ) break;
/*SKIP*/;
}
 /* line 179: */
TABBCTR_resulttype = HLJACTR_routineresult;
 /* line 180: */
 /* line 181: */
 /* line 183: */
YRLACTR_startnewlevel(Routine.Rdenno);
 /* line 185: */
STMACTR_procinfo( Routine.Mode, &WABBCTR );
XABBCTR_proc = WABBCTR;
 /* line 186: */
YABBCTR_paramcount = XABBCTR_proc.Parameters;
 /* line 187: */
A_CLOSURE( ABBBCTR_generator, BBBBCTR_generator, CBBBCTR_generator );
A_CALLPROC(ABBBCTR_generator,(A68_FALSE, &FBBBCTR),(A68_FALSE, &FBBBCTR,(ABBBCTR_generator).nonlocals));
GBBBCTR_nulllist = FBBBCTR;
 /* line 188: */
 /* line 189: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
if ( (YABBCTR_paramcount>0) )
{ 
A_CALLPROC(AWMACTR_parameters,(Routine.Mode, &JBBBCTR),(Routine.Mode, &JBBBCTR,(AWMACTR_parameters).nonlocals));
HBBBCTR_parammodes = JBBBCTR;
 /* line 194: */
A_CLOSURE( LBBBCTR_generator, MBBBCTR_generator, NBBBCTR_generator );
(( NBBBCTR_generator * ) ( LBBBCTR_generator.nonlocals )) -> YABBCTR_paramcount = YABBCTR_paramcount;
A_CALLPROC(LBBBCTR_generator,(A68_FALSE, &QBBBCTR),(A68_FALSE, &QBBBCTR,(LBBBCTR_generator).nonlocals));
IBBBCTR_paramdecnos = QBBBCTR;
 /* line 195: */
 /* line 196: */
SBBBCTR = YABBCTR_paramcount;
for ( RBBBCTR_i = 1;
RBBBCTR_i <= SBBBCTR;
RBBBCTR_i += 1 )
{ 
 /* line 197: */
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 198: */
 /* line 199: */
TBBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( TBBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
UBBBCTR_id = (TBBBCTR.data.mode11);
 /* line 200: */
 /* line 201: */
{ 
 /* line 202: */
WXIACTR_assert(WBBBCTR, (UBBBCTR_id.Type==3));
 /* line 203: */
 /* line 204: */
WXIACTR_assert(YBBBCTR, (HCNACTR_finddeflexmode(UBBBCTR_id.Mode)==HCNACTR_finddeflexmode((*(&A_VINDEX(HBBBCTR_parammodes,RBBBCTR_i))))));
 /* line 205: */
ZBBBCTR = (&A_VINDEX(IBBBCTR_paramdecnos,RBBBCTR_i)) ;
(*ZBBBCTR) = UBBBCTR_id.Decno;
 /* line 206: */
 /* line 207: */
 /* line 208: */
 /* line 210: */
CUVACTR_iddec(UBBBCTR_id, (A68_71 **)A68_NIL);
} 
break;
default: 
 /* line 211: */
 /* line 212: */
WXIACTR_assert(BCBBCTR, A68_FALSE);
break;
} 
}
 /* line 213: */
 /* line 214: */
} 
else
{ 
 /* line 215: */
IBBBCTR_paramdecnos = GBBBCTR_nulllist;
} 
 /* line 217: */
 /* line 218: */
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 223: */
SMYACTR_startroutine(Routine, GABBCTR_environ, IBBBCTR_paramdecnos, XABBCTR_proc.Result, (&UABBCTR_result));
 /* line 228: */
 /* line 229: */
 /* line 230: */
CCBBCTR.Value = (&UABBCTR_result);
CCBBCTR.End = VABBCTR_endofroutine;
CCBBCTR.Type = TABBCTR_resulttype;
 /* line 231: */
 /* line 232: */
DCBBCTR = Routine.Props ;
A_CALLPROC((*NL(UZABCTR_phrase_)),(A_LB_GE(DCBBCTR,NCAACTR_ccbit), CCBBCTR, A68_FALSE),(A_LB_GE(DCBBCTR,NCAACTR_ccbit), CCBBCTR, A68_FALSE,((*NL(UZABCTR_phrase_))).nonlocals));
 /* line 235: */
LNYACTR_endroutine(Routine, (&UABBCTR_result));
 /* line 236: */
 /* line 237: */
A_CALLPROC(BSLACTR_reverttopreviouslevel,(),((BSLACTR_reverttopreviouslevel).nonlocals));
} 
A_PROC_EXIT(routine);
return;
} 
#undef NL

A_STATIC A68_VOID  HCBBCTR_serialclause(A68_59  Properties, A68_63  Answer, void *NonLocals)
#define NL(x) (((ICBBCTR_serialclause *)NonLocals)->x)
{ 
A68_55 * JCBBCTR_endofseries;
A68_BOOL  KCBBCTR_discardlevelactivated;
A68_BOOL  LCBBCTR_firstexit;
A68_63  MCBBCTR;  /* collateral clause result */
A68_63  NCBBCTR_seriesanswer;
A68_180  OCBBCTR;  /* united object - for case conformity */
A68_187  PCBBCTR_s;
A68_BITS  QCBBCTR;  /* ADICOPS - >= */
A68_BOOL  RCBBCTR_dontpullbitset;
A68_BOOL  SCBBCTR;  /* clause result */
A68_189  VCBBCTR_t;
A68_59  WCBBCTR;  /* collateral clause result */
A68_BITS  XCBBCTR;  /* ADICOPS - >= */
A68_BOOL  YCBBCTR;  /* clause result */
A_PROC_ENTRY(serialclause);
 /* line 246: */
 /* line 247: */
{ 
JCBBCTR_endofseries = Answer.End;
 /* line 248: */
KCBBCTR_discardlevelactivated = A68_FALSE;
 /* line 249: */
LCBBCTR_firstexit = A68_TRUE;
 /* line 251: */
 /* line 252: */
 /* line 253: */
 /* line 255: */
A_CALLPROC(VPZACTR_startseries,(Properties, (&JCBBCTR_endofseries), (&KCBBCTR_discardlevelactivated)),(Properties, (&JCBBCTR_endofseries), (&KCBBCTR_discardlevelactivated),(VPZACTR_startseries).nonlocals));
 /* line 257: */
 /* line 258: */
MCBBCTR.Value = Answer.Value;
MCBBCTR.End = JCBBCTR_endofseries;
MCBBCTR.Type = Answer.Type;
NCBBCTR_seriesanswer = MCBBCTR;
 /* line 260: */
for ( ;; )
{ 
A_CALLPROC((*NL(UZABCTR_phrase_)),(A68_FALSE, NCBBCTR_seriesanswer, A68_FALSE),(A68_FALSE, NCBBCTR_seriesanswer, A68_FALSE,((*NL(UZABCTR_phrase_))).nonlocals));
 /* line 262: */
 /* line 263: */
OCBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( OCBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
PCBBCTR_s = (OCBBCTR.data.mode20);
 /* line 264: */
 /* line 266: */
{ 
QCBBCTR = PCBBCTR_s.Props ;
RCBBCTR_dontpullbitset = A_LB_GE(QCBBCTR,BDAACTR_dontpullbit);
 /* line 267: */
 /* line 268: */
 /* line 269: */
if ( (PCBBCTR_s.Fn==WBAACTR_semifn) )
{ 
 /* line 271: */
GQZACTR_semi(((A68_BITS )(PCBBCTR_s.Props&MDAACTR_dybits)!=0X0U), RCBBCTR_dontpullbitset);
 /* line 272: */
 /* line 273: */
SCBBCTR = A68_TRUE;
} 
else
{ 
 /* line 274: */
 /* line 275: */
if ( (PCBBCTR_s.Fn==RBAACTR_exitfn) )
{ 
WXIACTR_assert(UCBBCTR, (Answer.End!=(A68_55 *)A68_NIL));
 /* line 276: */
 /* line 277: */
 /* line 278: */
 /* line 280: */
KQZACTR_exit(RCBBCTR_dontpullbitset, LCBBCTR_firstexit, NCBBCTR_seriesanswer);
 /* line 281: */
LCBBCTR_firstexit = A68_FALSE;
 /* line 282: */
 /* line 283: */
 /* line 284: */
SCBBCTR = A68_TRUE;
} 
else
{ 
 /* line 285: */
 /* line 286: */
 /* line 287: */
 /* line 288: */
 /* line 290: */
DQZACTR_endseries(Properties, Answer, JCBBCTR_endofseries, KCBBCTR_discardlevelactivated, RCBBCTR_dontpullbitset, !LCBBCTR_firstexit);
 /* line 291: */
 /* line 292: */
 /* line 293: */
 /* line 295: */
SCBBCTR = A68_FALSE;
} 
} 
} 
break;
case 22: /* STRUCT(INT,BITS)  */
VCBBCTR_t = (OCBBCTR.data.mode22);
 /* line 296: */
 /* line 298: */
{ 
 /* line 299: */
WCBBCTR.Block = Properties.Block;
 /* line 300: */
WCBBCTR.Dynamicresult = Properties.Dynamicresult;
 /* line 301: */
WCBBCTR.Discardeddynamicresult = Properties.Discardeddynamicresult;
 /* line 302: */
WCBBCTR.Type = (VCBBCTR_t.Fn+ZBAACTR_terminatoroffset);
 /* line 303: */
 /* line 304: */
 /* line 305: */
 /* line 306: */
 /* line 308: */
XCBBCTR = ~VCBBCTR_t.Props ;
DQZACTR_endseries(WCBBCTR, Answer, JCBBCTR_endofseries, KCBBCTR_discardlevelactivated, A_LB_GE(XCBBCTR,BDAACTR_dontpullbit), !LCBBCTR_firstexit);
 /* line 309: */
 /* line 310: */
 /* line 311: */
 /* line 312: */
SCBBCTR = A68_FALSE;
} 
break;
default: 
SXIACTR_terminalerror(656);
 /* line 313: */
 /* line 314: */
 /* line 315: */
SCBBCTR = A68_FALSE;
break;
} 
 /* line 317: */
YCBBCTR = SCBBCTR;
if ( !YCBBCTR ) break;
/*SKIP*/;
}
 /* line 318: */
} 
A_PROC_EXIT(serialclause);
return;
} 
#undef NL

A_STATIC A68_VOID  BDBBCTR_enquiryclause(A68_63  Answer, void *NonLocals)
#define NL(x) (((CDBBCTR_enquiryclause *)NonLocals)->x)
{ 
A68_BOOL  DDBBCTR_simple;
A68_180  EDBBCTR;  /* united object - for case conformity */
A68_187  FDBBCTR_s;
A68_BITS  GDBBCTR;  /* ADICOPS - >= */
A68_BOOL  HDBBCTR;  /* clause result */
A68_BOOL  KDBBCTR;  /* clause result */
A_PROC_ENTRY(enquiryclause);
 /* line 330: */
 /* line 331: */
{ 
DDBBCTR_simple = A68_TRUE;
 /* line 332: */
for ( ;; )
{ 
A_CALLPROC((*NL(UZABCTR_phrase_)),(A68_FALSE, Answer, DDBBCTR_simple),(A68_FALSE, Answer, DDBBCTR_simple,((*NL(UZABCTR_phrase_))).nonlocals));
 /* line 333: */
 /* line 334: */
EDBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( EDBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
FDBBCTR_s = (EDBBCTR.data.mode20);
 /* line 335: */
 /* line 336: */
 /* line 337: */
if ( (FDBBCTR_s.Fn==WBAACTR_semifn) )
{ 
 /* line 338: */
 /* line 339: */
GDBBCTR = FDBBCTR_s.Props ;
GQZACTR_semi(((A68_BITS )(FDBBCTR_s.Props&MDAACTR_dybits)!=0X0U), A_LB_GE(GDBBCTR,BDAACTR_dontpullbit));
 /* line 340: */
 /* line 341: */
 /* line 342: */
HDBBCTR = A68_TRUE;
} 
else
{ 
WXIACTR_assert(JDBBCTR, (FDBBCTR_s.Fn!=RBAACTR_exitfn));
 /* line 343: */
 /* line 344: */
 /* line 345: */
HDBBCTR = A68_FALSE;
} 
break;
default: 
 /* line 346: */
 /* line 347: */
HDBBCTR = A68_FALSE;
break;
} 
 /* line 348: */
KDBBCTR = HDBBCTR;
if ( !KDBBCTR ) break;
DDBBCTR_simple = A68_FALSE;
 /* line 349: */
 /* line 350: */
/*SKIP*/;
}
 /* line 351: */
} 
A_PROC_EXIT(enquiryclause);
return;
} 
#undef NL

A_STATIC A68_VOID  PDBBCTR_phrase(A68_BOOL  Body, A68_63  Answer, A68_BOOL  Simple, void *NonLocals)
#define NL(x) (((QDBBCTR_phrase *)NonLocals)->x)
{ 
A68_71 * RDBBCTR_valuestack;
A68_280  WDBBCTR_enclosedclause;   /* proc value of non-global proc */
A68_77  MPBBCTR_optboolexpression;   /* proc value of non-global proc */
A68_BOOL  SPBBCTR_simpleenquiry;
A68_180  TPBBCTR;  /* united object - for case conformity */
A68_191  UPBBCTR_p;
A68_191  VPBBCTR;  /* united object - for case conformity */
A68_190  WPBBCTR_l;
A68_71  XPBBCTR;  /* collateral clause result */
A68_64  YPBBCTR;  /* avoid structure result */
A68_184  ZPBBCTR_op;
A68_156  AQBBCTR_id;
A68_172  BQBBCTR_c;
A68_71 * CQBBCTR_visible;
A68_INT  DQBBCTR_i;
A68_INT  EQBBCTR;  /* to part of loop */
A68_71  FQBBCTR;  /* collateral clause result */
A68_68  GQBBCTR;  /* avoid structure result */
A68_68  HQBBCTR_temp;
A68_71  IQBBCTR;  /* collateral clause result */
A68_65  JQBBCTR;  /* OPERATORS - mode -> union mode */
A68_177  KQBBCTR_format;
A68_71  LQBBCTR;  /* collateral clause result */
A68_183  MQBBCTR;  /* collateral clause result */
A68_190  NQBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  OQBBCTR;  /* avoid structure result */
A68_71  PQBBCTR;  /* collateral clause result */
A68_182  QQBBCTR;  /* collateral clause result */
A68_190  RQBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  SQBBCTR;  /* avoid structure result */
A68_184  TQBBCTR;  /* collateral clause result */
A68_122  UQBBCTR_r;
A68_122  VQBBCTR_savedr;
A68_BITS  WQBBCTR;  /* ADICOPS - >= */
A68_71  XQBBCTR;  /* collateral clause result */
A68_190  YQBBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  ZQBBCTR;  /* YIELD */
A68_64  ARBBCTR;  /* avoid structure result */
A68_185  BRBBCTR_w;
A68_164  CRBBCTR_l;
A68_79  DRBBCTR_u;
A68_169  ERBBCTR_c;
A68_BOOL  HRBBCTR;  /* clause result */
A68_187  IRBBCTR_s;
A68_BOOL  LRBBCTR;  /* optbool result */
A68_188  MRBBCTR_s;
A68_BOOL  PRBBCTR;  /* clause result */
A_PROC_ENTRY(phrase);
 /* line 364: */
 /* line 365: */
{ 
RDBBCTR_valuestack = (A68_71 *)A68_NIL;
 /* line 367: */
 /* line 368: */
A_CLOSURE( WDBBCTR_enclosedclause, XDBBCTR_enclosedclause, YDBBCTR_enclosedclause );
(( YDBBCTR_enclosedclause * ) ( WDBBCTR_enclosedclause.nonlocals )) -> GCBBCTR_serialclause = NL(GCBBCTR_serialclause);
(( YDBBCTR_enclosedclause * ) ( WDBBCTR_enclosedclause.nonlocals )) -> AZABCTR_read = NL(AZABCTR_read);
(( YDBBCTR_enclosedclause * ) ( WDBBCTR_enclosedclause.nonlocals )) -> WYABCTR_currentimperative = NL(WYABCTR_currentimperative);
(( YDBBCTR_enclosedclause * ) ( WDBBCTR_enclosedclause.nonlocals )) -> ADBBCTR_enquiryclause = NL(ADBBCTR_enquiryclause);
(( YDBBCTR_enclosedclause * ) ( WDBBCTR_enclosedclause.nonlocals )) -> ODBBCTR_phrase = NL(ODBBCTR_phrase);
(( YDBBCTR_enclosedclause * ) ( WDBBCTR_enclosedclause.nonlocals )) -> RDBBCTR_valuestack = (&RDBBCTR_valuestack);
 /* line 1005: */
A_CLOSURE( MPBBCTR_optboolexpression, NPBBCTR_optboolexpression, OPBBCTR_optboolexpression );
(( OPBBCTR_optboolexpression * ) ( MPBBCTR_optboolexpression.nonlocals )) -> RDBBCTR_valuestack = (&RDBBCTR_valuestack);
(( OPBBCTR_optboolexpression * ) ( MPBBCTR_optboolexpression.nonlocals )) -> ODBBCTR_phrase = NL(ODBBCTR_phrase);
 /* line 1024: */
SPBBCTR_simpleenquiry = Simple;
 /* line 1025: */
for ( ;; )
{ 
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 1026: */
 /* line 1027: */
TPBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( TPBBCTR.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* INT */
case 3: /* BOOL */
case 4: /* STRUCT(REF MODE26)  */
case 5: /* STRUCT(INT)  */
case 6: /* STRUCT(INT,REF MODE26)  */
case 7: /* STRUCT(INT,REF MODE26)  */
case 8: /* STRUCT(INT,LONG BITS)  */
case 9: /* STRUCT(INT,REF MODE26)  */
case 10: /* STRUCT(INT,INT,INT)  */
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
case 13: /* STRUCT(INT)  */
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
case 15: /* STRUCT(INT,BITS,INT)  */
case 16: /* STRUCT(INT)  */
case 17: /* STRUCT(BOOL)  */
case 18: /* STRUCT(MODE178,REF MODE26)  */
case 19: /* STRUCT(INT,INT,REF MODE26)  */
A_UNCPY(UPBBCTR_p,TPBBCTR);
 /* line 1028: */
{ 
 /* line 1029: */
VPBBCTR = UPBBCTR_p ;
switch ( VPBBCTR.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* INT */
case 3: /* BOOL */
case 4: /* STRUCT(REF MODE26)  */
case 5: /* STRUCT(INT)  */
case 6: /* STRUCT(INT,REF MODE26)  */
case 7: /* STRUCT(INT,REF MODE26)  */
case 8: /* STRUCT(INT,LONG BITS)  */
case 9: /* STRUCT(INT,REF MODE26)  */
A_UNCPY(WPBBCTR_l,VPBBCTR);
 /* line 1030: */
 /* line 1031: */
YVZACTR_load( WPBBCTR_l, &YPBBCTR );
XPBBCTR.Value = YPBBCTR;
XPBBCTR.Rest = RDBBCTR_valuestack;
 /* line 1032: */
RDBBCTR_valuestack = FOBBCTR_assignment(A_LOC(A68_71 ), XPBBCTR);
break;
case 10: /* STRUCT(INT,INT,INT)  */
ZPBBCTR_op = (VPBBCTR.data.mode10);
 /* line 1033: */
 /* line 1034: */
MQQACTR_oper(ZPBBCTR_op, (&RDBBCTR_valuestack), A_LOC(A68_71 ));
break;
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
AQBBCTR_id = (VPBBCTR.data.mode11);
 /* line 1035: */
 /* line 1037: */
CUVACTR_iddec(AQBBCTR_id, (&RDBBCTR_valuestack));
break;
case 19: /* STRUCT(INT,INT,REF MODE26)  */
BQBBCTR_c = (VPBBCTR.data.mode19);
 /* line 1038: */
 /* line 1039: */
{ 
CQBBCTR_visible = MKJACTR_nilvaluelist;
 /* line 1040: */
 /* line 1041: */
EQBBCTR = BQBBCTR_c.Number;
for ( DQBBCTR_i = 1;
DQBBCTR_i <= EQBBCTR;
DQBBCTR_i += 1 )
{ 
 /* line 1042: */
FQBBCTR.Value = (*(&(RDBBCTR_valuestack->Value)));
FQBBCTR.Rest = CQBBCTR_visible;
CQBBCTR_visible = FOBBCTR_assignment(A_LOC(A68_71 ), FQBBCTR);
 /* line 1043: */
 /* line 1044: */
RDBBCTR_valuestack = (*(&(RDBBCTR_valuestack->Rest)));
}
 /* line 1045: */
 /* line 1046: */
DRZACTR_codeinsert( BQBBCTR_c.Insert, BQBBCTR_c.Mode, CQBBCTR_visible, &GQBBCTR );
HQBBCTR_temp = GQBBCTR;
 /* line 1047: */
 /* line 1048: */
if ( (BQBBCTR_c.Mode!=UEAACTR_voidmode) )
{ 
 /* line 1049: */
IQBBCTR.Value.Mode = BQBBCTR_c.Mode;
IQBBCTR.Value.Info = PKJACTR_defaultinfo;
IQBBCTR.Value.Extra = A_UNITE(JQBBCTR,mode5,5,HQBBCTR_temp);
 /* line 1050: */
IQBBCTR.Rest = RDBBCTR_valuestack;
 /* line 1051: */
 /* line 1052: */
RDBBCTR_valuestack = FOBBCTR_assignment(A_LOC(A68_71 ), IQBBCTR);
} 
} 
break;
case 18: /* STRUCT(MODE178,REF MODE26)  */
KQBBCTR_format = (VPBBCTR.data.mode18);
 /* line 1053: */
 /* line 1054: */
{ 
 /* line 1055: */
 /* line 1056: */
 /* line 1057: */
 /* line 1058: */
MQBBCTR.Mode = YEAACTR_formatmode;
 /* line 1059: */
MQBBCTR.Denotation = KQBBCTR_format.Text;
 /* line 1060: */
YVZACTR_load( A_UNITE(NQBBCTR,mode9,9,MQBBCTR), &OQBBCTR );
LQBBCTR.Value = OQBBCTR;
 /* line 1061: */
 /* line 1062: */
 /* line 1063: */
QQBBCTR.Mode = EFAACTR_intmode;
 /* line 1064: */
 /* line 1065: */
QQBBCTR.Denotation = (A68_LBITS )(A68_BITS )KQBBCTR_format.Info.W;
 /* line 1067: */
YVZACTR_load( A_UNITE(RQBBCTR,mode8,8,QQBBCTR), &SQBBCTR );
PQBBCTR.Value = SQBBCTR;
 /* line 1068: */
PQBBCTR.Rest = RDBBCTR_valuestack;
LQBBCTR.Rest = FOBBCTR_assignment(A_LOC(A68_71 ), PQBBCTR);
RDBBCTR_valuestack = FOBBCTR_assignment(A_LOC(A68_71 ), LQBBCTR);
 /* line 1070: */
 /* line 1071: */
 /* line 1072: */
 /* line 1073: */
TQBBCTR.Fn = QGAACTR_formatfn;
 /* line 1075: */
TQBBCTR.Mode = YEAACTR_formatmode;
TQBBCTR.Param = KQBBCTR_format.Info.Nocases;
 /* line 1076: */
 /* line 1078: */
 /* line 1079: */
 /* line 1081: */
MQQACTR_oper(TQBBCTR, (&RDBBCTR_valuestack), A_LOC(A68_71 ));
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
UQBBCTR_r = (VPBBCTR.data.mode12);
 /* line 1092: */
 /* line 1093: */
{ 
VQBBCTR_savedr = UQBBCTR_r;
 /* line 1094: */
A_CALLPROC(NL(DABBCTR_routine),(UQBBCTR_r),(UQBBCTR_r,(NL(DABBCTR_routine)).nonlocals));
 /* line 1095: */
 /* line 1096: */
WQBBCTR = (*(&((&VQBBCTR_savedr)->Props))) ;
if ( A_LB_GE(WQBBCTR,PCAACTR_valbit) )
{ 
 /* line 1097: */
ZQBBCTR = (*(&((&VQBBCTR_savedr)->Rdenno))) ;
YVZACTR_load( A_UNITE(YQBBCTR,mode2,2,ZQBBCTR), &ARBBCTR );
XQBBCTR.Value = ARBBCTR;
 /* line 1098: */
XQBBCTR.Rest = RDBBCTR_valuestack;
 /* line 1099: */
 /* line 1101: */
RDBBCTR_valuestack = FOBBCTR_assignment(A_LOC(A68_71 ), XQBBCTR);
} 
} 
break;
case 13: /* STRUCT(INT)  */
BRBBCTR_w = (VPBBCTR.data.mode13);
 /* line 1102: */
 /* line 1103: */
 /* line 1104: */
if ( ((BRBBCTR_w.W==KCAACTR_orelwarn)|(BRBBCTR_w.W==JCAACTR_andthwarn)) )
{ 
 /* line 1105: */
 /* line 1107: */
A_CALLPROC(MPBBCTR_optboolexpression,(BRBBCTR_w.W),(BRBBCTR_w.W,(MPBBCTR_optboolexpression).nonlocals));
} 
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
CRBBCTR_l = (VPBBCTR.data.mode14);
 /* line 1108: */
 /* line 1110: */
QPWACTR_labdec(CRBBCTR_l);
break;
case 15: /* STRUCT(INT,BITS,INT)  */
DRBBCTR_u = (VPBBCTR.data.mode15);
 /* line 1112: */
 /* line 1114: */
SXIACTR_terminalerror(670);
break;
case 16: /* STRUCT(INT)  */
ERBBCTR_c = (VPBBCTR.data.mode16);
 /* line 1115: */
 /* line 1117: */
WXIACTR_assert(GRBBCTR, A68_FALSE);
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1118: */
 /* line 1119: */
 /* line 1121: */
HRBBCTR = A68_TRUE;
} 
break;
case 20: /* STRUCT(INT,INT,BITS,INT)  */
IRBBCTR_s = (TPBBCTR.data.mode20);
 /* line 1122: */
{ 
 /* line 1123: */
 /* line 1124: */
if ( (RDBBCTR_valuestack!=MKJACTR_nilvaluelist) )
{ 
WXIACTR_assert(KRBBCTR, ((*(&(RDBBCTR_valuestack->Rest)))==MKJACTR_nilvaluelist));
 /* line 1125: */
 /* line 1126: */
if ( (IRBBCTR_s.Fn==WBAACTR_semifn) )
{ 
 /* line 1127: */
VZYACTR_evaluatenoresult((&RDBBCTR_valuestack));
} 
else
{ 
 /* line 1128: */
 /* line 1129: */
LRBBCTR = (Answer.Type==ILJACTR_enquiryresult);
if ( LRBBCTR )
{LRBBCTR = SPBBCTR_simpleenquiry;
}
 /* line 1130: */
if ( LRBBCTR )
{ 
 /* line 1131: */
RCZACTR_evaluatesimpleenquiry((&RDBBCTR_valuestack), Answer);
} 
else
{ 
 /* line 1132: */
 /* line 1133: */
TAZACTR_evaluateresult((&RDBBCTR_valuestack), Answer);
} 
} 
} 
 /* line 1134: */
 /* line 1135: */
 /* line 1137: */
HRBBCTR = A68_FALSE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
 /* line 1138: */
{ 
 /* line 1139: */
if ( (RDBBCTR_valuestack!=MKJACTR_nilvaluelist) )
{ 
 /* line 1140: */
TAZACTR_evaluateresult((&RDBBCTR_valuestack), Answer);
} 
 /* line 1141: */
 /* line 1142: */
 /* line 1144: */
HRBBCTR = A68_FALSE;
} 
break;
case 21: /* STRUCT(INT,INT,BITS,INT)  */
MRBBCTR_s = (TPBBCTR.data.mode21);
 /* line 1145: */
{ 
A_CALLPROC(WDBBCTR_enclosedclause,(MRBBCTR_s, Body, Answer, A_LOC(A68_71 )),(MRBBCTR_s, Body, Answer, A_LOC(A68_71 ),(WDBBCTR_enclosedclause).nonlocals));
 /* line 1146: */
SPBBCTR_simpleenquiry = A68_FALSE;
 /* line 1147: */
 /* line 1148: */
 /* line 1150: */
HRBBCTR = A68_TRUE;
} 
break;
default: 
WXIACTR_assert(ORBBCTR, A68_FALSE);
 /* line 1151: */
 /* line 1152: */
 /* line 1153: */
HRBBCTR = A68_FALSE;
break;
} 
 /* line 1155: */
PRBBCTR = HRBBCTR;
if ( !PRBBCTR ) break;
/*SKIP*/;
}
 /* line 1157: */
} 
A_PROC_EXIT(phrase);
return;
} 
#undef NL

A_STATIC A68_VOID  BZABCTR_read(void *NonLocals)
#define NL(x) (((CZABCTR_read *)NonLocals)->x)
{ 
A68_180  DZABCTR;  /* united object - for case conformity */
A68_180  EZABCTR;  /* avoid structure result */
A68_180  FZABCTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(read);
 /* line 75: */
DZABCTR = (*NL(YYABCTR_nextimperative)) ;
switch ( DZABCTR.mode )
{ 
case 26: /* VOID */
 /* line 76: */
 /* line 77: */
A_CALLPROC(NL(Nextstreamimperative),( &EZABCTR),( &EZABCTR,(NL(Nextstreamimperative)).nonlocals));
(*NL(WYABCTR_currentimperative)) = EZABCTR;
break;
default: 
(*NL(WYABCTR_currentimperative)) = (*NL(YYABCTR_nextimperative));
 /* line 78: */
 /* line 79: */
(*NL(YYABCTR_nextimperative)) = A_EMPTY(FZABCTR,26);
break;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  HZABCTR_lookahead(void *NonLocals)
#define NL(x) (((IZABCTR_lookahead *)NonLocals)->x)
{ 
A68_180  JZABCTR;  /* united object - for case conformity */
A68_180  KZABCTR;  /* avoid structure result */
A_PROC_ENTRY(lookahead);
 /* line 89: */
JZABCTR = (*NL(YYABCTR_nextimperative)) ;
switch ( JZABCTR.mode )
{ 
case 26: /* VOID */
 /* line 90: */
 /* line 91: */
A_CALLPROC(NL(Nextstreamimperative),( &KZABCTR),( &KZABCTR,(NL(Nextstreamimperative)).nonlocals));
(*NL(YYABCTR_nextimperative)) = KZABCTR;
break;
default: 
 /* line 92: */
SXIACTR_terminalerror(602);
break;
} 
A_PROC_EXIT(lookahead);
return;
} 
#undef NL

A_STATIC A68_VOID  LZABCTR_compositionmodule(void)
{ 
A_PROC_ENTRY(compositionmodule);
WXIACTR_assert(NZABCTR, A68_FALSE);
A_PROC_EXIT(compositionmodule);
return;
} 
#undef NL
 /* line 105: */
 /* line 106: */

A_STATIC A68_VOID  SZABCTR_module(A68_VC  Modulename, A68_BOOL  Decsmodule, A68_BOOL  Prelude, void *NonLocals)
#define NL(x) (((TZABCTR_module *)NonLocals)->x)
{ 
A68_268  UZABCTR_phrase_;
A68_75  VZABCTR_skiproutine;   /* proc value of non-global proc */
A68_269  DABBCTR_routine;   /* proc value of non-global proc */
A68_276  GCBBCTR_serialclause;   /* proc value of non-global proc */
A68_278  ADBBCTR_enquiryclause;   /* proc value of non-global proc */
A68_268  ODBBCTR_phrase;   /* proc value of non-global proc */
A68_55 * QRBBCTR_endofmodule;
A68_64 * RRBBCTR_result;
A68_59  SRBBCTR;  /* collateral clause result */
A68_59  TRBBCTR_properties;
A68_VC  URBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * VRBBCTR;  /* OPERATORS - istruct -> vector */
A68_64  WRBBCTR;  /* collateral clause result */
A68_65  XRBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  YRBBCTR;  /* collateral clause result */
A68_180  ZRBBCTR;  /* united object - for case conformity */
A68_156  ASBBCTR_id;
A68_180  BSBBCTR;  /* united object - for case conformity */
A68_122  CSBBCTR_r;
A68_BOOL  DSBBCTR;  /* clause result */
A68_VC  ESBBCTR;  /* avoid structure result */
A68_122  FSBBCTR_r;
A68_VC  GSBBCTR;  /* avoid structure result */
A68_180  HSBBCTR;  /* united object - for case conformity */
A68_122  ISBBCTR_r;
A68_122  JSBBCTR;  /* clause result */
A68_122  MSBBCTR;  /* OPERATORS - skip to mode */
A68_122  NSBBCTR_routine;
A68_180  OSBBCTR;  /* united object - for case conformity */
A68_122  PSBBCTR_r;
A68_BOOL  USBBCTR;  /* clause result */
A68_BOOL  VSBBCTR;  /* clause result */
A68_VC  WSBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * XSBBCTR;  /* OPERATORS - istruct -> vector */
A68_63  YSBBCTR;  /* collateral clause result */
A68_BITS  ZSBBCTR;  /* ADICOPS - >= */
A68_180  ATBBCTR;  /* united object - for case conformity */
A68_189  BTBBCTR_t;
A68_BOOL  CTBBCTR;  /* clause result */
A68_VC  DTBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * ETBBCTR;  /* OPERATORS - istruct -> vector */
A68_64  FTBBCTR;  /* collateral clause result */
A68_65  GTBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  HTBBCTR;  /* collateral clause result */
A_PROC_ENTRY(module);
 /* line 122: */
 /* line 123: */
{ 
 /* line 128: */
 /* line 132: */
A_CLOSURE( VZABCTR_skiproutine, WZABCTR_skiproutine, XZABCTR_skiproutine );
(( XZABCTR_skiproutine * ) ( VZABCTR_skiproutine.nonlocals )) -> AZABCTR_read = NL(AZABCTR_read);
(( XZABCTR_skiproutine * ) ( VZABCTR_skiproutine.nonlocals )) -> WYABCTR_currentimperative = NL(WYABCTR_currentimperative);
(( XZABCTR_skiproutine * ) ( VZABCTR_skiproutine.nonlocals )) -> VZABCTR_skiproutine = VZABCTR_skiproutine;
 /* line 142: */
A_CLOSURE( DABBCTR_routine, EABBCTR_routine, FABBCTR_routine );
(( FABBCTR_routine * ) ( DABBCTR_routine.nonlocals )) -> GZABCTR_lookahead = NL(GZABCTR_lookahead);
(( FABBCTR_routine * ) ( DABBCTR_routine.nonlocals )) -> YYABCTR_nextimperative = NL(YYABCTR_nextimperative);
(( FABBCTR_routine * ) ( DABBCTR_routine.nonlocals )) -> AZABCTR_read = NL(AZABCTR_read);
(( FABBCTR_routine * ) ( DABBCTR_routine.nonlocals )) -> VZABCTR_skiproutine = VZABCTR_skiproutine;
(( FABBCTR_routine * ) ( DABBCTR_routine.nonlocals )) -> WYABCTR_currentimperative = NL(WYABCTR_currentimperative);
(( FABBCTR_routine * ) ( DABBCTR_routine.nonlocals )) -> UZABCTR_phrase_ = (&UZABCTR_phrase_);
 /* line 239: */
A_CLOSURE( GCBBCTR_serialclause, HCBBCTR_serialclause, ICBBCTR_serialclause );
(( ICBBCTR_serialclause * ) ( GCBBCTR_serialclause.nonlocals )) -> UZABCTR_phrase_ = (&UZABCTR_phrase_);
(( ICBBCTR_serialclause * ) ( GCBBCTR_serialclause.nonlocals )) -> WYABCTR_currentimperative = NL(WYABCTR_currentimperative);
 /* line 320: */
A_CLOSURE( ADBBCTR_enquiryclause, BDBBCTR_enquiryclause, CDBBCTR_enquiryclause );
(( CDBBCTR_enquiryclause * ) ( ADBBCTR_enquiryclause.nonlocals )) -> UZABCTR_phrase_ = (&UZABCTR_phrase_);
(( CDBBCTR_enquiryclause * ) ( ADBBCTR_enquiryclause.nonlocals )) -> WYABCTR_currentimperative = NL(WYABCTR_currentimperative);
 /* line 353: */
A_CLOSURE( ODBBCTR_phrase, PDBBCTR_phrase, QDBBCTR_phrase );
(( QDBBCTR_phrase * ) ( ODBBCTR_phrase.nonlocals )) -> GCBBCTR_serialclause = GCBBCTR_serialclause;
(( QDBBCTR_phrase * ) ( ODBBCTR_phrase.nonlocals )) -> AZABCTR_read = NL(AZABCTR_read);
(( QDBBCTR_phrase * ) ( ODBBCTR_phrase.nonlocals )) -> WYABCTR_currentimperative = NL(WYABCTR_currentimperative);
(( QDBBCTR_phrase * ) ( ODBBCTR_phrase.nonlocals )) -> ADBBCTR_enquiryclause = ADBBCTR_enquiryclause;
(( QDBBCTR_phrase * ) ( ODBBCTR_phrase.nonlocals )) -> ODBBCTR_phrase = ODBBCTR_phrase;
(( QDBBCTR_phrase * ) ( ODBBCTR_phrase.nonlocals )) -> DABBCTR_routine = DABBCTR_routine;
 /* line 1159: */
UZABCTR_phrase_ = ODBBCTR_phrase;
 /* line 1164: */
 /* line 1165: */
 /* line 1167: */
A_CALLPROC(NL(GZABCTR_lookahead),(),((NL(GZABCTR_lookahead)).nonlocals));
 /* line 1169: */
 /* line 1170: */
 /* line 1171: */
if ( Decsmodule )
{ 
SRBBCTR.Block = A68_FALSE;
SRBBCTR.Dynamicresult = A68_FALSE;
SRBBCTR.Discardeddynamicresult = A68_TRUE;
SRBBCTR.Type = DBAACTR_decsfn;
TRBBCTR_properties = SRBBCTR;
 /* line 1173: */
VRBBCTR = (&((&ABPACTR_currentmodule)->Uname)) ;
UQYACTR_startdecsmodule(A_ISVEC(URBBCTR,VRBBCTR,7,A68_CHAR ), Modulename);
 /* line 1175: */
WRBBCTR.Mode = UEAACTR_voidmode;
WRBBCTR.Info = PKJACTR_defaultinfo;
WRBBCTR.Extra = A_EMPTY(XRBBCTR,3);
RRBBCTR_result = AGBBCTR_assignment(A_LOC(A68_64 ), WRBBCTR);
 /* line 1177: */
 /* line 1178: */
YRBBCTR.Value = RRBBCTR_result;
YRBBCTR.End = QRBBCTR_endofmodule;
YRBBCTR.Type = ELJACTR_voidresult;
A_CALLPROC(GCBBCTR_serialclause,(TRBBCTR_properties, YRBBCTR),(TRBBCTR_properties, YRBBCTR,(GCBBCTR_serialclause).nonlocals));
 /* line 1180: */
 /* line 1181: */
 /* line 1182: */
VTYACTR_enddecsmodule(Modulename);
} 
else
{ 
 /* line 1183: */
ZRBBCTR = (*NL(YYABCTR_nextimperative)) ;
switch ( ZRBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
ASBBCTR_id = (ZRBBCTR.data.mode11);
 /* line 1184: */
{ 
DLVACTR_initialdummydec(ASBBCTR_id);
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
A_CALLPROC(NL(GZABCTR_lookahead),(),((NL(GZABCTR_lookahead)).nonlocals));
 /* line 1185: */
 /* line 1186: */
BSBBCTR = (*NL(YYABCTR_nextimperative)) ;
switch ( BSBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
CSBBCTR_r = (BSBBCTR.data.mode12);
 /* line 1187: */
KDHACTR_message( 59, &ESBBCTR );
DSBBCTR = A_VC_EQ(CSBBCTR_r.Name,ESBBCTR);
break;
default: 
 /* line 1188: */
 /* line 1189: */
 /* line 1190: */
DSBBCTR = A68_FALSE;
break;
} 
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
FSBBCTR_r = (ZRBBCTR.data.mode12);
 /* line 1191: */
 /* line 1192: */
KDHACTR_message( 59, &GSBBCTR );
DSBBCTR = A_VC_EQ(FSBBCTR_r.Name,GSBBCTR);
break;
default: 
 /* line 1193: */
 /* line 1194: */
 /* line 1196: */
DSBBCTR = A68_FALSE;
break;
} 
if ( DSBBCTR )
{ 
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 1197: */
 /* line 1198: */
 /* line 1199: */
HSBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( HSBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
ISBBCTR_r = (HSBBCTR.data.mode12);
 /* line 1200: */
JSBBCTR = ISBBCTR_r;
break;
default: 
WXIACTR_assert(LSBBCTR, A68_FALSE);
 /* line 1201: */
JSBBCTR = MSBBCTR;
break;
} 
NSBBCTR_routine = JSBBCTR;
 /* line 1203: */
 /* line 1204: */
 /* line 1206: */
if ( (IOMACTR_modetype(NSBBCTR_routine.Mode)==GEAACTR_procp) )
{ 
for ( ;; )
{ 
 /* line 1207: */
A_CALLPROC(NL(GZABCTR_lookahead),(),((NL(GZABCTR_lookahead)).nonlocals));
 /* line 1208: */
 /* line 1209: */
 /* line 1210: */
OSBBCTR = (*NL(YYABCTR_nextimperative)) ;
switch ( OSBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
PSBBCTR_r = (OSBBCTR.data.mode12);
 /* line 1211: */
 /* line 1212: */
{ 
WXIACTR_assert(TSBBCTR, A_VC_EQ(PSBBCTR_r.Name,SSBBCTR));
 /* line 1213: */
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 1214: */
A_CALLPROC(VZABCTR_skiproutine,(),((VZABCTR_skiproutine).nonlocals));
 /* line 1215: */
 /* line 1216: */
 /* line 1217: */
USBBCTR = A68_TRUE;
} 
break;
default: 
 /* line 1218: */
 /* line 1219: */
USBBCTR = A68_FALSE;
break;
} 
 /* line 1221: */
VSBBCTR = USBBCTR;
if ( !VSBBCTR ) break;
/*SKIP*/;
}
 /* line 1222: */
} 
 /* line 1224: */
 /* line 1225: */
 /* line 1226: */
 /* line 1227: */
 /* line 1229: */
XSBBCTR = (&((&ABPACTR_currentmodule)->Uname)) ;
QSYACTR_startprocmodule(NSBBCTR_routine, A_ISVEC(WSBBCTR,XSBBCTR,7,A68_CHAR ), Modulename, RRBBCTR_result);
 /* line 1231: */
 /* line 1232: */
if ( OTMACTR_dynamic((*(&(RRBBCTR_result->Mode)))) )
{ 
 /* line 1233: */
PXIACTR_error(340);
} 
 /* line 1235: */
 /* line 1236: */
 /* line 1237: */
YSBBCTR.Value = RRBBCTR_result;
YSBBCTR.End = QRBBCTR_endofmodule;
YSBBCTR.Type = HLJACTR_routineresult;
 /* line 1238: */
 /* line 1239: */
ZSBBCTR = NSBBCTR_routine.Props ;
A_CALLPROC(ODBBCTR_phrase,(A_LB_GE(ZSBBCTR,NCAACTR_ccbit), YSBBCTR, A68_FALSE),(A_LB_GE(ZSBBCTR,NCAACTR_ccbit), YSBBCTR, A68_FALSE,(ODBBCTR_phrase).nonlocals));
 /* line 1240: */
VSYACTR_endmodule();
 /* line 1243: */
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 1244: */
 /* line 1245: */
 /* line 1246: */
 /* line 1247: */
if ( ((IOMACTR_modetype(NSBBCTR_routine.Mode)==FEAACTR_proc)&((*(&(RRBBCTR_result->Mode)))!=UEAACTR_voidmode)) )
{ 
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
} 
 /* line 1248: */
A_CALLPROC(NL(AZABCTR_read),(),((NL(AZABCTR_read)).nonlocals));
 /* line 1249: */
 /* line 1250: */
ATBBCTR = (*NL(WYABCTR_currentimperative)) ;
switch ( ATBBCTR.mode )
{ 
case 22: /* STRUCT(INT,BITS)  */
BTBBCTR_t = (ATBBCTR.data.mode22);
 /* line 1251: */
CTBBCTR = (BTBBCTR_t.Fn!=HCAACTR_finishfn);
break;
default: 
 /* line 1252: */
 /* line 1253: */
CTBBCTR = A68_TRUE;
break;
} 
if ( CTBBCTR )
{ 
 /* line 1254: */
 /* line 1255: */
 /* line 1257: */
SXIACTR_terminalerror(628);
} 
} 
else
{ 
ETBBCTR = (&((&ABPACTR_currentmodule)->Uname)) ;
JPYACTR_startmodule(A_ISVEC(DTBBCTR,ETBBCTR,7,A68_CHAR ), Modulename);
 /* line 1258: */
FTBBCTR.Mode = UEAACTR_voidmode;
FTBBCTR.Info = PKJACTR_defaultinfo;
FTBBCTR.Extra = A_EMPTY(GTBBCTR,3);
RRBBCTR_result = AGBBCTR_assignment(A_LOC(A68_64 ), FTBBCTR);
 /* line 1259: */
 /* line 1260: */
 /* line 1261: */
 /* line 1262: */
HTBBCTR.Value = RRBBCTR_result;
 /* line 1264: */
HTBBCTR.End = QRBBCTR_endofmodule;
HTBBCTR.Type = ELJACTR_voidresult;
 /* line 1265: */
 /* line 1266: */
A_CALLPROC(ODBBCTR_phrase,(A68_FALSE, HTBBCTR, A68_FALSE),(A68_FALSE, HTBBCTR, A68_FALSE,(ODBBCTR_phrase).nonlocals));
 /* line 1267: */
 /* line 1268: */
 /* line 1269: */
VSYACTR_endmodule();
} 
} 
} 
A_PROC_EXIT(module);
return;
} 
#undef NL
 /* line 59: */
 /* line 61: */

A68_VOID  VYABCTR_translator(A68_264  Nextstreamimperative, A68_116 * Xsizes, A68_171  Keptdecnos)
{ 
A68_180  XYABCTR;  /* OPERATORS - mode -> union mode */
A68_180  WYABCTR_currentimperative;
A68_180  ZYABCTR;  /* OPERATORS - mode -> union mode */
A68_180  YYABCTR_nextimperative;
A68_75  AZABCTR_read;   /* proc value of non-global proc */
A68_75  GZABCTR_lookahead;   /* proc value of non-global proc */
A68_267  RZABCTR_module;   /* proc value of non-global proc */
A68_VC  ITBBCTR;  /* OPERATORS - istruct -> vector */
A68_89 * JTBBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  KTBBCTR;  /* avoid structure result */
A68_VC  LTBBCTR_modulename;
A68_BOOL  MTBBCTR_decsmodule;
A68_BOOL  NTBBCTR_contextvoid;
A_PROC_ENTRY(translator);
 /* line 62: */
 /* line 64: */
{ 
WYABCTR_currentimperative = A_EMPTY(XYABCTR,26);
 /* line 65: */
YYABCTR_nextimperative = A_EMPTY(ZYABCTR,26);
 /* line 67: */
 /* line 73: */
 /* line 74: */
A_CLOSURE( AZABCTR_read, BZABCTR_read, CZABCTR_read );
(( CZABCTR_read * ) ( AZABCTR_read.nonlocals )) -> YYABCTR_nextimperative = (&YYABCTR_nextimperative);
(( CZABCTR_read * ) ( AZABCTR_read.nonlocals )) -> WYABCTR_currentimperative = (&WYABCTR_currentimperative);
(( CZABCTR_read * ) ( AZABCTR_read.nonlocals )) -> Nextstreamimperative = Nextstreamimperative;
 /* line 81: */
 /* line 87: */
 /* line 88: */
A_CLOSURE( GZABCTR_lookahead, HZABCTR_lookahead, IZABCTR_lookahead );
(( IZABCTR_lookahead * ) ( GZABCTR_lookahead.nonlocals )) -> YYABCTR_nextimperative = (&YYABCTR_nextimperative);
(( IZABCTR_lookahead * ) ( GZABCTR_lookahead.nonlocals )) -> Nextstreamimperative = Nextstreamimperative;
 /* line 94: */
 /* line 100: */
 /* line 103: */
 /* line 104: */
A_CLOSURE( RZABCTR_module, SZABCTR_module, TZABCTR_module );
(( TZABCTR_module * ) ( RZABCTR_module.nonlocals )) -> AZABCTR_read = AZABCTR_read;
(( TZABCTR_module * ) ( RZABCTR_module.nonlocals )) -> WYABCTR_currentimperative = (&WYABCTR_currentimperative);
(( TZABCTR_module * ) ( RZABCTR_module.nonlocals )) -> GZABCTR_lookahead = GZABCTR_lookahead;
(( TZABCTR_module * ) ( RZABCTR_module.nonlocals )) -> YYABCTR_nextimperative = (&YYABCTR_nextimperative);
 /* line 1273: */
JTBBCTR = (&(BBPACTR_currentmodinfo->Name)) ;
RMAAOSF_scanto( ' ', A_ISVEC(ITBBCTR,JTBBCTR,32,A68_CHAR ), &KTBBCTR );
LTBBCTR_modulename = KTBBCTR;
 /* line 1275: */
MTBBCTR_decsmodule = ((*(&(BBPACTR_currentmodinfo->Type)))==(-1));
 /* line 1276: */
NTBBCTR_contextvoid = ((*(&((&(BBPACTR_currentmodinfo->L))->Level)))==0);
 /* line 1278: */
UTZACTR_initialise(Xsizes, (&WYABCTR_currentimperative), Keptdecnos);
 /* line 1280: */
 /* line 1281: */
 /* line 1282: */
if ( WMOACTR_composition )
{ 
 /* line 1283: */
 /* line 1284: */
SXIACTR_terminalerror(806);
} 
else
{ 
IEPACTR_initialiseunames();
 /* line 1285: */
 /* line 1286: */
 /* line 1288: */
 /* line 1290: */
A_CALLPROC(RZABCTR_module,(LTBBCTR_modulename, MTBBCTR_decsmodule, NTBBCTR_contextvoid),(LTBBCTR_modulename, MTBBCTR_decsmodule, NTBBCTR_contextvoid,(RZABCTR_module).nonlocals));
} 
} 
A_PROC_EXIT(translator);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 6: */
 /* line 8: */
void NYABCTR(void)   /* initialise DECS compiler */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel","-dir",".","compiler.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config/a68config.m","./values.m","./coutput.m","./uniquenameserver.m","./oper.m","./moduletracer.m","./modules.m","./modes.m","./incmode.m","./loops.m","./loads.m","./initialiser.m","./incvalue.m","./incoperfn.m","./incimperatives.m","./identifiers.m","./environment.m","./environ.m","./entryandreturn.m","./common.m","./clauses.m","./centities.m","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ATPACTR();   /* USE values */
PTLACTR();   /* USE coutput */
RHMACTR();   /* USE uniquenameserver */
CPQACTR();   /* USE oper */
BCHACTR();   /* USE moduletracer */
MLOACTR();   /* USE modules */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
BCABCTR();   /* USE loops */
ZTZACTR();   /* USE loads */
LTZACTR();   /* USE initialiser */
GKJACTR();   /* USE incvalue */
XFAACTR();   /* USE incoperfn */
UAAACTR();   /* USE incimperatives */
NKVACTR();   /* USE identifiers */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
BDYACTR();   /* USE entryandreturn */
BZYACTR();   /* USE clauses */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20-debian/src/compiler.a68";
A_config.translation_time = "Wed Apr 21 16:34:06 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "MYABCTR (from seed file) ";
A_config.spec_change_time = "Wed Apr 21 16:34:06 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS compiler);
UEAALIB_a68config(LGAALIB_configinfo, RYABCTR);
 /* line 57: */
 /* line 58: */
 /* line 1292: */
A_PROC_EXIT(DECS compiler);
} 
#undef NL
/* end of translation of compiler.a68 */
