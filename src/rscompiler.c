/* UNAME:YJAACTR */
#include <algol68/Asupport.h>
A_ISTRUCT(A68_CHAR ,32,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t33);
typedef struct A68t33  A68_33 ;    /* STRUCT 7 CHAR */
struct A68t32{
struct A68t33  Prefix;
A_PAD_ISTRUCT(A68_33 ,PAD_1)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_2)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_3)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_4)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_5)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_6)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(MODE33,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t36 ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE36 */
A_VECTOR(struct A68t42 ,A68t41);
typedef struct A68t41  A68_41 ;    /* VECTOR [] MODE42 */
struct A68t42{
struct A68t31  N;
A_PAD_ISTRUCT(A68_31 ,PAD_7)
struct A68t31  F;
A_PAD_ISTRUCT(A68_31 ,PAD_8)
A68_INT  Level;
A_PAD_INT(PAD_9)
};
typedef struct A68t42  A68_42 ;    /* STRUCT(MODE31,MODE31,INT)  */
struct A68t40 { A68_INT mode; union {
A68_VC  mode1;
struct A68t41  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t40  A68_40 ;    /* UNION(REF MODE26,REF MODE41)  */
struct A68t37{
struct A68t31  F;
A_PAD_ISTRUCT(A68_31 ,PAD_10)
A68_INT  No;
A_PAD_INT(PAD_11)
A68_INT  Nl;
A_PAD_INT(PAD_12)
A68_INT  Ng;
A_PAD_INT(PAD_13)
struct A68t40  U;
};
typedef struct A68t37  A68_37 ;    /* STRUCT(MODE31,INT,INT,INT,MODE40)  */
A_VECTOR(struct A68t32 ,A68t38);
typedef struct A68t38  A68_38 ;    /* VECTOR [] MODE32 */
A_VECTOR(struct A68t33 ,A68t39);
typedef struct A68t39  A68_39 ;    /* VECTOR [] MODE33 */
struct A68t36{
struct A68t37  Xs;
struct A68t33  Ys;
A_PAD_ISTRUCT(A68_33 ,PAD_14)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_15)
struct A68t38  Keptinfo;
struct A68t39  Cnames;
};
typedef struct A68t36  A68_36 ;    /* STRUCT(MODE37,MODE33,LONG INT,REF MODE38,REF MODE39)  */
struct A68t34{
struct A68t33  Uname;
A_PAD_ISTRUCT(A68_33 ,PAD_16)
struct A68t33  Lname;
A_PAD_ISTRUCT(A68_33 ,PAD_17)
struct A68t33  Gname;
A_PAD_ISTRUCT(A68_33 ,PAD_18)
struct A68t35  Specs;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(MODE33,MODE33,MODE33,REF MODE35)  */

A_PROCEDURE(A68_VOID ,A68t43,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t44,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t45,(void),(void *));
typedef struct A68t45  A68_45 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t45 ),(struct A68t45 ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(MODE45) VOID */

A_PROCEDURE(A68_VOID ,A68t47,(A68_VC ),(A68_VC ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t47 ),(struct A68t47 ,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE47) VOID */

A_PROCEDURE(A68_VOID ,A68t49,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t50);
typedef struct A68t50  A68_50 ;    /* STRUCT 60 CHAR */
struct A68t52{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_INT  Modeproc;
A_PAD_INT(PAD_20)
struct A68t53 * El;
};
typedef struct A68t52  A68_52 ;    /* STRUCT(INT,INT,REF MODE53)  */
struct A68t53{
struct A68t52 * Am;
struct A68t53 * Rest;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(REF MODE52,REF MODE53)  */
struct A68t54{
A68_INT  Mode;
A_PAD_INT(PAD_21)
struct A68t54 * Rest;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT,REF MODE54)  */
struct A68t55{
A68_INT  Deproc;
A_PAD_INT(PAD_22)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT)  */
struct A68t56{
A68_INT  Rdenno;
A_PAD_INT(PAD_23)
struct A68t54 * Modelist;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,REF MODE54)  */
struct A68t57{
A68_INT  Deproc;
A_PAD_INT(PAD_24)
struct A68t54 * Pars;
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT,REF MODE54)  */
struct A68t58{
A68_INT  Mode;
A_PAD_INT(PAD_25)
A68_INT  Fieldno;
A_PAD_INT(PAD_26)
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_27)
struct A68t58 * Rest;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT,INT,MODE31,REF MODE58)  */
struct A68t59{
A68_INT  Rdenno;
A_PAD_INT(PAD_28)
A68_INT  Deflex;
A_PAD_INT(PAD_29)
struct A68t58 * Sels;
};
typedef struct A68t59  A68_59 ;    /* STRUCT(INT,INT,REF MODE58)  */
struct A68t60{
A68_INT  Rdenno;
A_PAD_INT(PAD_30)
A68_INT  Imode;
A_PAD_INT(PAD_31)
A68_INT  Length;
A_PAD_INT(PAD_32)
A68_INT  Deflex;
A_PAD_INT(PAD_33)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t61{
A68_INT  Rdenno;
A_PAD_INT(PAD_34)
A68_INT  Vecmode;
A_PAD_INT(PAD_35)
A68_INT  Deflex;
A_PAD_INT(PAD_36)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,INT,INT)  */
struct A68t62{
A68_INT  Rdenno;
A_PAD_INT(PAD_37)
A68_INT  Mode;
A_PAD_INT(PAD_38)
A68_INT  Nods;
A_PAD_INT(PAD_39)
A68_INT  Deflex;
A_PAD_INT(PAD_40)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t63{
A68_INT  Mode;
A_PAD_INT(PAD_41)
A68_INT  Rdenno;
A_PAD_INT(PAD_42)
struct A68t63 * Rest;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT,INT,REF MODE63)  */
struct A68t64{
A68_INT  Mode;
A_PAD_INT(PAD_43)
struct A68t63 * Stenlist;
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,REF MODE63)  */
struct A68t65{
A68_INT  Mode;
A_PAD_INT(PAD_44)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT)  */
struct A68t66 { A68_INT mode; union {
A68_INT  mode1;
struct A68t56 * mode2;
struct A68t57 * mode3;
struct A68t59 * mode4;
struct A68t60 * mode5;
struct A68t55 * mode6;
struct A68t61 * mode7;
struct A68t62 * mode8;
struct A68t64 * mode9;
struct A68t52 * mode10;
struct A68t65  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t66  A68_66 ;    /* UNION(INT,REF MODE56,REF MODE57,REF MODE59,REF MODE60,REF MODE55,REF MODE61,REF MODE62,REF MODE64,REF MODE52,MODE65)  */
struct A68t67{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_45)
A68_INT  Decno;
A_PAD_INT(PAD_46)
A68_INT  Level;
A_PAD_INT(PAD_47)
A68_INT  Mode;
A_PAD_INT(PAD_48)
A68_INT  Scope;
A_PAD_INT(PAD_49)
struct A68t67 * Rest;
};
typedef struct A68t67  A68_67 ;    /* STRUCT(MODE31,INT,INT,INT,INT,REF MODE67)  */
struct A68t68{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_50)
A68_BITS  Props;
A_PAD_BITS(PAD_51)
A68_INT  Mode;
A_PAD_INT(PAD_52)
A68_INT  Rdenno;
A_PAD_INT(PAD_53)
A68_INT  Maxname;
A_PAD_INT(PAD_54)
A68_INT  Level;
A_PAD_INT(PAD_55)
struct A68t68 * Rest;
};
typedef struct A68t68  A68_68 ;    /* STRUCT(MODE31,BITS,INT,INT,INT,INT,REF MODE68)  */
struct A68t69{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_56)
A68_INT  Labno;
A_PAD_INT(PAD_57)
A68_INT  Status;
A_PAD_INT(PAD_58)
struct A68t69 * Rest;
};
typedef struct A68t69  A68_69 ;    /* STRUCT(MODE31,INT,INT,REF MODE69)  */
struct A68t70{
A68_INT  I;
A_PAD_INT(PAD_59)
A68_INT  J;
A_PAD_INT(PAD_60)
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,INT)  */
struct A68t71{
A68_INT  I;
A_PAD_INT(PAD_61)
A68_INT  J;
A_PAD_INT(PAD_62)
A68_INT  K;
A_PAD_INT(PAD_63)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT,INT,INT)  */
struct A68t72{
A68_INT  Mode;
A_PAD_INT(PAD_64)
A68_BOOL  Loc;
A_PAD_BOOL(PAD_65)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT,BOOL)  */
struct A68t73{
A68_INT  Mode;
A_PAD_INT(PAD_66)
A68_INT  Nopars;
A_PAD_INT(PAD_67)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(INT,INT)  */
struct A68t74{
A68_INT  Mode;
A_PAD_INT(PAD_68)
A68_VC  Nu;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t75{
A68_INT  Almode;
A_PAD_INT(PAD_69)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT)  */
struct A68t76{
A68_INT  Nochars;
A_PAD_INT(PAD_70)
A68_INT  Base;
A_PAD_INT(PAD_71)
A68_VC  Chars;
};
typedef struct A68t76  A68_76 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t77{
A68_INT  Strmode;
A_PAD_INT(PAD_72)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT)  */
struct A68t78{
A68_INT  Nochars;
A_PAD_INT(PAD_73)
A68_INT  Nocases;
A_PAD_INT(PAD_74)
A68_INT  W;
A_PAD_INT(PAD_75)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT,INT,INT)  */
struct A68t80{
A68_INT  Nse;
A_PAD_INT(PAD_76)
};
typedef struct A68t80  A68_80 ;    /* STRUCT(INT)  */
struct A68t79 { A68_INT mode; union {
A68_BOOL  mode1;
A68_INT  mode2;
struct A68t69 * mode3;
struct A68t80  mode4;
struct A68t72  mode5;
struct A68t77  mode6;
struct A68t78  mode7;
struct A68t74  mode8;
struct A68t75  mode9;
struct A68t73  mode10;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t79  A68_79 ;    /* UNION(BOOL,INT,REF MODE69,MODE80,MODE72,MODE77,MODE78,MODE74,MODE75,MODE73)  */
struct A68t81{
A68_INT  Type;
A_PAD_INT(PAD_77)
struct A68t67 * Iddec;
};
typedef struct A68t81  A68_81 ;    /* STRUCT(INT,REF MODE67)  */
struct A68t82{
struct A68t69 * Lab;
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_78)
};
typedef struct A68t82  A68_82 ;    /* STRUCT(REF MODE69,BOOL)  */
struct A68t83 { A68_INT mode; union {
struct A68t81  mode1;
struct A68t82  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t83  A68_83 ;    /* UNION(MODE81,MODE82)  */
struct A68t84{
A68_BOOL  Up;
A_PAD_BOOL(PAD_79)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(BOOL)  */
struct A68t85{
A68_INT  Fn;
A_PAD_INT(PAD_80)
A68_INT  M;
A_PAD_INT(PAD_81)
A68_INT  Param;
A_PAD_INT(PAD_82)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT,INT,INT)  */
struct A68t86{
A68_INT  W;
A_PAD_INT(PAD_83)
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT)  */
struct A68t87{
A68_INT  Fn;
A_PAD_INT(PAD_84)
A68_INT  M;
A_PAD_INT(PAD_85)
A68_BITS  Props;
A_PAD_BITS(PAD_86)
A68_INT  Param;
A_PAD_INT(PAD_87)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t88{
A68_BOOL  All;
A_PAD_BOOL(PAD_88)
A68_VC  Pr;
};
typedef struct A68t88  A68_88 ;    /* STRUCT(BOOL,REF MODE26)  */
struct A68t89{
A68_INT  Charpos;
A_PAD_INT(PAD_89)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(INT)  */
struct A68t90{
A68_INT  Norden;
A_PAD_INT(PAD_90)
A68_INT  Nomodes;
A_PAD_INT(PAD_91)
A68_INT  Nolabs;
A_PAD_INT(PAD_92)
A68_INT  Nodecnos;
A_PAD_INT(PAD_93)
A68_INT  Nomodules;
A_PAD_INT(PAD_94)
A68_INT  Nolibinds;
A_PAD_INT(PAD_95)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t91{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_96)
struct A68t42  L;
struct A68t42  G;
A68_INT  Type;
A_PAD_INT(PAD_97)
};
typedef struct A68t91  A68_91 ;    /* STRUCT(MODE31,MODE42,MODE42,INT)  */
struct A68t92{
struct A68t91  Xmi;
struct A68t34  Ym;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(MODE91,MODE34)  */
struct A68t93{
struct A68t37  Xs;
struct A68t33  Ys;
A_PAD_ISTRUCT(A68_33 ,PAD_98)
};
typedef struct A68t93  A68_93 ;    /* STRUCT(MODE37,MODE33)  */
struct A68t94{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_99)
A68_INT  Maxlevel;
A_PAD_INT(PAD_100)
A68_INT  Nof;
A_PAD_INT(PAD_101)
A68_INT  Moduleno;
A_PAD_INT(PAD_102)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(MODE31,INT,INT,INT)  */
struct A68t95{
A68_INT  Moduleno;
A_PAD_INT(PAD_103)
A68_INT  Nof;
A_PAD_INT(PAD_104)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT,INT)  */
struct A68t96{
A68_INT  Type;
A_PAD_INT(PAD_105)
A68_INT  Moduleno;
A_PAD_INT(PAD_106)
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_107)
struct A68t34  Ym;
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT,INT,MODE31,MODE34)  */
struct A68t97{
A68_BOOL  Bu;
A_PAD_BOOL(PAD_108)
A68_INT  Level;
A_PAD_INT(PAD_109)
struct A68t67 * Id;
};
typedef struct A68t97  A68_97 ;    /* STRUCT(BOOL,INT,REF MODE67)  */
A_VECTOR(struct A68t71 ,A68t99);
typedef struct A68t99  A68_99 ;    /* VECTOR [] MODE71 */
A_VECTOR(A68_INT ,A68t100);
typedef struct A68t100  A68_100 ;    /* VECTOR [] INT */
struct A68t98{
struct A68t70  Body;
struct A68t99  Kset;
struct A68t100  Keeps;
A68_INT  Last;
A_PAD_INT(PAD_110)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE70,REF MODE99,REF MODE100,INT)  */
struct A68t101{
A68_INT  Body;
A_PAD_INT(PAD_111)
struct A68t100  Actuals;
A68_INT  Moduleno;
A_PAD_INT(PAD_112)
};
typedef struct A68t101  A68_101 ;    /* STRUCT(INT,REF MODE100,INT)  */
struct A68t102{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_113)
struct A68t34  Ym;
struct A68t31  Formal;
A_PAD_ISTRUCT(A68_31 ,PAD_114)
struct A68t33  Ys;
A_PAD_ISTRUCT(A68_33 ,PAD_115)
A68_INT  Level;
A_PAD_INT(PAD_116)
A68_INT  Ownlevel;
A_PAD_INT(PAD_117)
};
typedef struct A68t102  A68_102 ;    /* STRUCT(MODE31,MODE34,MODE31,MODE33,INT,INT)  */
struct A68t103{
A68_INT  Moduleno;
A_PAD_INT(PAD_118)
A68_INT  Type;
A_PAD_INT(PAD_119)
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT,INT)  */
struct A68t104{
struct A68t100  Decnos;
struct A68t100  Modes;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(REF MODE100,REF MODE100)  */
struct A68t105{
A68_INT  Moduleno;
A_PAD_INT(PAD_120)
A68_INT  Type;
A_PAD_INT(PAD_121)
A68_INT  Maxmodule;
A_PAD_INT(PAD_122)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t66 ,A68t107);
typedef struct A68t107  A68_107 ;    /* VECTOR [] MODE66 */
struct A68t106 { A68_INT mode; union {
struct A68t84  mode1;
A68_BOOL  mode2;
A68_INT  mode3;
struct A68t69 * mode4;
struct A68t80  mode5;
struct A68t72  mode6;
struct A68t77  mode7;
struct A68t78  mode8;
struct A68t74  mode9;
struct A68t75  mode10;
struct A68t73  mode11;
struct A68t81  mode12;
struct A68t82  mode13;
struct A68t85  mode14;
struct A68t89  mode15;
struct A68t86  mode16;
struct A68t87  mode17;
struct A68t90  mode18;
struct A68t107  mode19;
struct A68t88  mode20;
struct A68t91  mode21;
struct A68t37  mode22;
struct A68t94  mode23;
struct A68t95  mode24;
struct A68t96  mode25;
struct A68t97  mode26;
struct A68t98  mode27;
struct A68t101  mode28;
struct A68t102  mode29;
struct A68t100  mode30;
struct A68t103  mode31;
struct A68t104  mode32;
struct A68t105  mode33;
struct A68t68 * mode34;
struct A68t76  mode35;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t106  A68_106 ;    /* UNION(MODE84,BOOL,INT,REF MODE69,MODE80,MODE72,MODE77,MODE78,MODE74,MODE75,MODE73,MODE81,MODE82,MODE85,MODE89,MODE86,MODE87,MODE90,REF MODE107,MODE88,MODE91,MODE37,MODE94,MODE95,MODE96,MODE97,MODE98,MODE101,MODE102,REF MODE100,MODE103,MODE104,MODE105,REF MODE68,MODE76)  */
struct A68t108{
A68_INT  Lmode;
A_PAD_INT(PAD_123)
A68_INT  Rmode;
A_PAD_INT(PAD_124)
A68_INT  Ans;
A_PAD_INT(PAD_125)
A68_INT  Level;
A_PAD_INT(PAD_126)
A68_INT  Decno;
A_PAD_INT(PAD_127)
A68_INT  Scope;
A_PAD_INT(PAD_128)
struct A68t108 * Rest;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,INT,INT,INT,INT,REF MODE108)  */
struct A68t109{
A68_INT  Prio;
A_PAD_INT(PAD_129)
struct A68t108 * I;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,REF MODE108)  */
struct A68t111 { A68_INT mode; union {
struct A68t109 * mode1;
struct A68t52 * mode2;
A68_INT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t111  A68_111 ;    /* UNION(REF MODE109,REF MODE52,INT)  */
struct A68t110{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_130)
A68_INT  Level;
A_PAD_INT(PAD_131)
A68_INT  Scope;
A_PAD_INT(PAD_132)
struct A68t111  U;
struct A68t110 * Rest;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(MODE31,INT,INT,MODE111,REF MODE110)  */
struct A68t112{
struct A68t42  C;
A68_INT  Scope;
A_PAD_INT(PAD_133)
struct A68t112 * Rest;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE42,INT,REF MODE112)  */
struct A68t113{
struct A68t42  L;
struct A68t42  G;
struct A68t113 * Rest;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(MODE42,MODE42,REF MODE113)  */
struct A68t114{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_134)
A68_INT  No;
A_PAD_INT(PAD_135)
struct A68t114 * Rest;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(MODE31,INT,REF MODE114)  */
struct A68t117 { A68_INT mode; union {
struct A68t118 * mode1;
struct A68t114 * mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t117  A68_117 ;    /* UNION(REF MODE118,REF MODE114)  */
struct A68t116{
struct A68t31  Proxy;
A_PAD_ISTRUCT(A68_31 ,PAD_136)
A68_INT  Level;
A_PAD_INT(PAD_137)
struct A68t117  A;
struct A68t116 * Rest;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(MODE31,INT,MODE117,REF MODE116)  */
struct A68t118{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_138)
struct A68t116 * S;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(MODE31,REF MODE116)  */
struct A68t119{
struct A68t110 * N;
struct A68t108 * I;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(REF MODE110,REF MODE108)  */
struct A68t120 { A68_INT mode; union {
struct A68t67 * mode1;
struct A68t110 * mode2;
struct A68t119  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t120  A68_120 ;    /* UNION(REF MODE67,REF MODE110,MODE119)  */
struct A68t121{
struct A68t120  U;
struct A68t121 * Rest;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(MODE120,REF MODE121)  */
struct A68t122{
A68_INT  M;
A_PAD_INT(PAD_139)
A68_INT  Km;
A_PAD_INT(PAD_140)
struct A68t122 * Rest;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,INT,REF MODE122)  */
struct A68t125{
A68_BITS  Props;
A_PAD_BITS(PAD_141)
A68_INT  Mode;
A_PAD_INT(PAD_142)
struct A68t124 * Vlist;
struct A68t69 * Labs;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(BITS,INT,REF MODE124,REF MODE69)  */
struct A68t124{
struct A68t125  V;
A68_INT  Type;
A_PAD_INT(PAD_143)
struct A68t124 * Rest;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(MODE125,INT,REF MODE124)  */
A_VECTOR(struct A68t67 *,A68t127);
typedef struct A68t127  A68_127 ;    /* VECTOR [] REF MODE67 */
A_VECTOR(struct A68t110 *,A68t128);
typedef struct A68t128  A68_128 ;    /* VECTOR [] REF MODE110 */
struct A68t126{
struct A68t127  Ids;
struct A68t128  Indics;
struct A68t69 * Labs;
struct A68t68 * Rd;
A68_INT  Lastid;
A_PAD_INT(PAD_144)
A68_BITS  Props;
A_PAD_BITS(PAD_145)
A68_BITS  Dybits;
A_PAD_BITS(PAD_146)
A68_INT  Level;
A_PAD_INT(PAD_147)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(REF MODE127,REF MODE128,REF MODE69,REF MODE68,INT,BITS,BITS,INT)  */
struct A68t129{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_148)
A68_INT  Hash;
A_PAD_INT(PAD_149)
struct A68t108 * I;
A68_BOOL  Diadic;
A_PAD_BOOL(PAD_150)
A68_INT  Biop;
A_PAD_INT(PAD_151)
A68_BOOL  Lib;
A_PAD_BOOL(PAD_152)
struct A68t129 * Rest;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE31,INT,REF MODE108,BOOL,INT,BOOL,REF MODE129)  */
struct A68t130{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_153)
struct A68t130 * Rest;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(MODE31,REF MODE130)  */
struct A68t131{
A68_INT  Noofinds;
A_PAD_INT(PAD_154)
A68_INT  Nooftrims;
A_PAD_INT(PAD_155)
A68_BOOL  Vector;
A_PAD_BOOL(PAD_156)
A68_BITS  Bits;
A_PAD_BITS(PAD_157)
struct A68t131 * Rest;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,INT,BOOL,BITS,REF MODE131)  */
struct A68t132{
struct A68t67 ** Rid;
struct A68t67 * Id;
struct A68t132 * Rest;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(REF REF MODE67,REF MODE67,REF MODE132)  */
struct A68t133{
struct A68t31  Id;
A_PAD_ISTRUCT(A68_31 ,PAD_158)
A68_INT  Idsize;
A_PAD_INT(PAD_159)
A68_INT  Idhash;
A_PAD_INT(PAD_160)
struct A68t133 * Rest;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(MODE31,INT,INT,REF MODE133)  */

A_PROCEDURE(A68_BOOL ,A68t134,(A68_VC ,A68_INT *),(A68_VC ,A68_INT *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF MODE26,REF INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t135,(struct A68t106 ,A68_INT ),(struct A68t106 ,A68_INT ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE106,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t136,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t138,(struct A68t31 ,A68_INT ,A68_BOOL ,struct A68t92 *),(struct A68t31 ,A68_INT ,A68_BOOL ,struct A68t92 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE31,INT,BOOL) MODE92 */

A_PROCEDURE(A68_VOID ,A68t139,(struct A68t31 ,struct A68t31 ,struct A68t34 ,struct A68t93 *),(struct A68t31 ,struct A68t31 ,struct A68t34 ,struct A68t93 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE31,MODE31,MODE34) MODE93 */

A_PROCEDURE(A68_INT ,A68t140,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(REF MODE26,BOOL) INT */
struct A68t141{
A68_INT  Type;
A_PAD_INT(PAD_161)
A68_INT  Value;
A_PAD_INT(PAD_162)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,INT)  */
A_ROW(struct A68t141 ,A68t142,1);
typedef struct A68t142  A68_142 ;    /* [] MODE141 */

A_PROCEDURE(A68_BOOL ,A68t143,(struct A68t134 ,struct A68t135 ,struct A68t136 ,struct A68t137 ,struct A68t138 ,struct A68t139 ,struct A68t140 ,struct A68t142 ),(struct A68t134 ,struct A68t135 ,struct A68t136 ,struct A68t137 ,struct A68t138 ,struct A68t139 ,struct A68t140 ,struct A68t142 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE134,MODE135,MODE136,MODE137,MODE138,MODE139,MODE140,REF MODE142) BOOL */

A_PROCEDURE(struct A68t31 ,A68t144,(A68_INT ),(A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT) MODE31 */

A_PROCEDURE(A68_VOID ,A68t145,(A68_BOOL ,struct A68t107 *),(A68_BOOL ,struct A68t107 *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(BOOL) MODE107 */

A_PROCEDURE(A68_VOID ,A68t146,(A68_BOOL ,struct A68t127 *),(A68_BOOL ,struct A68t127 *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(BOOL) MODE127 */

A_PROCEDURE(A68_VOID ,A68t147,(A68_BOOL ,struct A68t128 *),(A68_BOOL ,struct A68t128 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(BOOL) MODE128 */
A_ISTRUCT(struct A68t66 ,30,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 30 MODE66 */

A_PROCEDURE(A68_BOOL ,A68t149,(struct A68t42 *,struct A68t42 *),(struct A68t42 *,struct A68t42 *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE42,REF MODE42) BOOL */

A_PROCEDURE(A68_VOID ,A68t150,(A68_INT ),(A68_INT ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(A68_BOOL ,struct A68t100 *),(A68_BOOL ,struct A68t100 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(BOOL) MODE100 */
A_ISTRUCT(A68_INT ,13,A68t152);
typedef struct A68t152  A68_152 ;    /* STRUCT 13 INT */
A_ISTRUCT(A68_INT ,17,A68t153);
typedef struct A68t153  A68_153 ;    /* STRUCT 17 INT */
A_ISTRUCT(A68_INT ,24,A68t154);
typedef struct A68t154  A68_154 ;    /* STRUCT 24 INT */
A_ISTRUCT(A68_INT ,3,A68t155);
typedef struct A68t155  A68_155 ;    /* STRUCT 3 INT */
A_ISTRUCT(A68_INT ,4,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 4 INT */
A_ISTRUCT(A68_INT ,15,A68t157);
typedef struct A68t157  A68_157 ;    /* STRUCT 15 INT */
A_ISTRUCT(A68_CHAR ,5734,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 5734 CHAR */

A_PROCEDURE(A68_INT ,A68t159,(void),(void *));
typedef struct A68t159  A68_159 ;    /* PROC INT */

A_PROCEDURE(A68_BOOL ,A68t160,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(INT,BOOL) BOOL */
struct A68t161{
A68_INT  Prio;
A_PAD_INT(PAD_163)
A68_INT  Do;
A_PAD_INT(PAD_164)
A68_BITS  Test;
A_PAD_BITS(PAD_165)
A68_INT  Ans;
A_PAD_INT(PAD_166)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,INT,BITS,INT)  */
A_VECTOR(struct A68t161 ,A68t162);
typedef struct A68t162  A68_162 ;    /* VECTOR [] MODE161 */
A_ISTRUCT(struct A68t161 ,34,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 34 MODE161 */
struct A68t164{
A68_BITS  Test;
A_PAD_BITS(PAD_167)
A68_INT  Ans;
A_PAD_INT(PAD_168)
};
typedef struct A68t164  A68_164 ;    /* STRUCT(BITS,INT)  */
A_VECTOR(struct A68t164 ,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] MODE164 */
A_ISTRUCT(struct A68t164 ,18,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 18 MODE164 */
A_ISTRUCT(A68_CHAR ,8,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_INT ,A68t169,(A68_INT ,struct A68t54 *),(A68_INT ,struct A68t54 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(INT,REF MODE54) INT */

A_PROCEDURE(A68_INT ,A68t170,(struct A68t54 *),(struct A68t54 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(REF MODE54) INT */

A_PROCEDURE(A68_INT ,A68t171,(A68_INT ,struct A68t58 *),(A68_INT ,struct A68t58 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(INT,REF MODE58) INT */

A_PROCEDURE(A68_INT ,A68t172,(A68_INT ),(A68_INT ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_INT ,A68t173,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(INT,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t174,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t175,(struct A68t108 *),(struct A68t108 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE108) INT */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t125 *),(struct A68t125 *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF MODE125) VOID */

A_PROCEDURE(struct A68t124 *,A68t177,(void),(void *));
typedef struct A68t177  A68_177 ;    /* PROC REF MODE124 */

A_PROCEDURE(A68_VOID ,A68t178,(A68_INT ,A68_INT ,A68_INT ,struct A68t31 *),(A68_INT ,A68_INT ,A68_INT ,struct A68t31 *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT,INT,INT,REF MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t31 ),(struct A68t31 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t180,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(INT,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,2,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t183,(A68_INT *,A68_INT ),(A68_INT *,A68_INT ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t184,(struct A68t125 *,A68_INT ,A68_INT ,A68_INT ,A68_BOOL ),(struct A68t125 *,A68_INT ,A68_INT ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE125,INT,INT,INT,BOOL) BOOL */

A_PROCEDURE(A68_BOOL ,A68t185,(struct A68t125 *,A68_INT ,A68_INT ,A68_BOOL ),(struct A68t125 *,A68_INT ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF MODE125,INT,INT,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t186,(struct A68t125 *,A68_INT ,A68_INT ,A68_INT ,A68_BOOL ),(struct A68t125 *,A68_INT ,A68_INT ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE125,INT,INT,INT,BOOL) INT */

A_PROCEDURE(A68_INT ,A68t187,(A68_INT ,A68_INT ,A68_INT ,A68_BOOL ),(A68_INT ,A68_INT ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(INT,INT,INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t188,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_INT ,A68t189,(A68_INT ,A68_INT ,A68_BOOL ),(A68_INT ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(INT,INT,BOOL) INT */

A_PROCEDURE(A68_INT ,A68t190,(struct A68t125 *),(struct A68t125 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE125) INT */

A_PROCEDURE(A68_INT ,A68t191,(struct A68t125 *,A68_INT ),(struct A68t125 *,A68_INT ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE125,INT) INT */

A_PROCEDURE(A68_INT ,A68t192,(struct A68t125 *,A68_INT ,A68_INT ),(struct A68t125 *,A68_INT ,A68_INT ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE125,INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t193,(struct A68t125 *,A68_INT ,A68_BOOL ),(struct A68t125 *,A68_INT ,A68_BOOL ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE125,INT,BOOL) BITS */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t124 *,A68_INT ),(struct A68t124 *,A68_INT ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE124,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t195,(A68_INT *,A68_INT *,A68_INT *,A68_INT *),(A68_INT *,A68_INT *,A68_INT *,A68_INT *,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF INT,REF INT,REF INT,REF INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t31 *,A68_INT ),(struct A68t31 *,A68_INT ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE31,INT) VOID */

A_PROCEDURE(A68_INT *,A68t197,(struct A68t66 *),(struct A68t66 *,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE66) REF INT */
A_VECTOR(struct A68t70 ,A68t198);
typedef struct A68t198  A68_198 ;    /* VECTOR [] MODE70 */

A_PROCEDURE(A68_VOID ,A68t199,(A68_BOOL ,struct A68t198 *),(A68_BOOL ,struct A68t198 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(BOOL) MODE198 */

A_PROCEDURE(A68_BOOL ,A68t200,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(INT,INT,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t201,(A68_INT ,struct A68t54 *,A68_INT ),(A68_INT ,struct A68t54 *,A68_INT ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(INT,REF MODE54,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t202,(struct A68t53 *),(struct A68t53 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE53) BOOL */

A_PROCEDURE(A68_BOOL ,A68t203,(A68_INT ),(A68_INT ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t68 *,A68_INT ,A68_INT ),(struct A68t68 *,A68_INT ,A68_INT ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE68,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t52 *),(struct A68t52 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE52) VOID */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t52 *,A68_INT ,A68_INT ),(struct A68t52 *,A68_INT ,A68_INT ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE52,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t67 *,struct A68t52 *),(struct A68t67 *,struct A68t52 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE67,REF MODE52) VOID */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t53 *),(struct A68t53 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t209,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t210,(A68_INT *),(A68_INT *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t54 *),(struct A68t54 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE54) VOID */

A_PROCEDURE(struct A68t54 *,A68t212,(struct A68t56 *,struct A68t100 ),(struct A68t56 *,struct A68t100 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF MODE56,MODE100) REF MODE54 */
A_ROW(struct A68t66 ,A68t213,1);
typedef struct A68t213  A68_213 ;    /* [] MODE66 */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t213 ),(struct A68t213 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE213) VOID */
A_ROW(A68_INT ,A68t215,1);
typedef struct A68t215  A68_215 ;    /* [] INT */

A_PROCEDURE(A68_VOID ,A68t216,(A68_BOOL ,struct A68t215 *),(A68_BOOL ,struct A68t215 *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(BOOL) MODE215 */

A_PROCEDURE(A68_BOOL ,A68t217,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t218,(struct A68t54 *,struct A68t54 *),(struct A68t54 *,struct A68t54 *,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE54,REF MODE54) BOOL */

A_PROCEDURE(struct A68t114 *,A68t219,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE31) REF MODE114 */

A_PROCEDURE(A68_VOID ,A68t220,(A68_BOOL ,struct A68t127 ,struct A68t128 ,A68_INT *,A68_INT ,A68_VC ),(A68_BOOL ,struct A68t127 ,struct A68t128 ,A68_INT *,A68_INT ,A68_VC ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(BOOL,REF MODE127,REF MODE128,REF INT,INT,REF MODE26) VOID */
A_VECTOR(A68_INT *,A68t221);
typedef struct A68t221  A68_221 ;    /* VECTOR [] REF INT */

A_PROCEDURE(A68_VOID ,A68t222,(A68_BOOL ,struct A68t221 *),(A68_BOOL ,struct A68t221 *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(BOOL) MODE221 */

A_PROCEDURE(A68_INT ,A68t223,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE31) INT */

A_PROCEDURE(struct A68t54 *,A68t224,(void),(void *));
typedef struct A68t224  A68_224 ;    /* PROC REF MODE54 */

A_PROCEDURE(A68_VOID ,A68t225,(struct A68t31 *,struct A68t31 *,struct A68t34 ),(struct A68t31 *,struct A68t31 *,struct A68t34 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE31,REF MODE31,MODE34) VOID */

A_PROCEDURE(A68_VOID ,A68t226,(A68_BOOL ,struct A68t41 *),(A68_BOOL ,struct A68t41 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(BOOL) MODE41 */

A_PROCEDURE(A68_INT ,A68t227,(struct A68t118 *,struct A68t113 *),(struct A68t118 *,struct A68t113 *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE118,REF MODE113) INT */

A_PROCEDURE(A68_VOID ,A68t228,(A68_BOOL ,struct A68t99 *),(A68_BOOL ,struct A68t99 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(BOOL) MODE99 */

A_PROCEDURE(A68_INT ,A68t229,(struct A68t121 *,A68_BOOL ,A68_VC ,struct A68t100 ,struct A68t100 ),(struct A68t121 *,A68_BOOL ,A68_VC ,struct A68t100 ,struct A68t100 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE121,BOOL,REF MODE26,REF MODE100,REF MODE100) INT */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t120 ),(struct A68t120 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE120) VOID */

A_PROCEDURE(struct A68t67 *,A68t231,(void),(void *));
typedef struct A68t231  A68_231 ;    /* PROC REF MODE67 */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t126 *,struct A68t67 *,struct A68t110 *,A68_BOOL *,struct A68t124 *),(struct A68t126 *,struct A68t67 *,struct A68t110 *,A68_BOOL *,struct A68t124 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE126,REF MODE67,REF MODE110,REF BOOL) MODE124 */

A_PROCEDURE(A68_VOID ,A68t233,(A68_INT ,struct A68t125 *),(A68_INT ,struct A68t125 *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(INT) MODE125 */

A_PROCEDURE(A68_BOOL ,A68t234,(struct A68t69 **,struct A68t69 **),(struct A68t69 **,struct A68t69 **,void *));
typedef struct A68t234  A68_234 ;    /* PROC(REF REF MODE69,REF REF MODE69) BOOL */
A_ISTRUCT(A68_CHAR ,10,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t237);
typedef struct A68t237  A68_237 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t238);
typedef struct A68t238  A68_238 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t239);
typedef struct A68t239  A68_239 ;    /* STRUCT 19 CHAR */

A_PROCEDURE(A68_INT ,A68t240,(A68_BOOL ,struct A68t52 *),(A68_BOOL ,struct A68t52 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(BOOL,REF MODE52) INT */
struct A68t241{
struct A68t54 * Ml;
struct A68t241 * Rest;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(REF MODE54,REF MODE241)  */
struct A68t242{
struct A68t57  P;
A68_INT  N;
A_PAD_INT(PAD_169)
A68_INT  Procmode;
A_PAD_INT(PAD_170)
struct A68t242 * Rest;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE57,INT,INT,REF MODE242)  */
struct A68t243{
A68_INT  Mode;
A_PAD_INT(PAD_171)
A68_INT  Nopars;
A_PAD_INT(PAD_172)
struct A68t243 * Rest;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(INT,INT,REF MODE243)  */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from incinstallation --- */
#define XDAACTR_maxchar 256
#define VDAACTR_maxid 32
#define YDAACTR_maxistruct 16777215
#define TDAACTR_upbofmodes 1023
/* --- End of imports from incinstallation --- */


/* --- Imports from incid --- */
#define NAAACTR_keptgeneratorproccorrection 6000
#define LAAACTR_minlibid 4001
#define JAAACTR_minrdno 2001
/* --- End of imports from incid --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ODAACTR(void);   /* incinstallation */
extern void BAAACTR(void);   /* incid */
/* --- end of DECS initialisation functions --- */
static A68_50   CKAACTR = {"$Id: rscompiler.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,DKAACTR,CKAACTR,60)
static A68_INT  EKAACTR_startrd;
static A68_INT  FKAACTR_startlib;
#define GKAACTR_startkmp NAAACTR_keptgeneratorproccorrection
#define HKAACTR_dchar '.'
#define IKAACTR_pchar '+'
#define JKAACTR_nchar '-'
#define KKAACTR_linesize 160
static A68_INT  LKAACTR_bolddiff;
static A68_84  MKAACTR_up1;
static A68_84  NKAACTR_down1;
static A68_106  QKAACTR_up;
static A68_106  SKAACTR_down;
#define UKAACTR_vacmode 1
#define VKAACTR_skipmode 2
#define WKAACTR_nilmode 3
#define XKAACTR_gotomode 4
#define YKAACTR_voidmode 5
#define ZKAACTR_faultmode 6
#define ALAACTR_bool 7
#define BLAACTR_char 8
#define CLAACTR_formatmode 9
#define DLAACTR_bits 11
#define ELAACTR_int 15
#define FLAACTR_real 19
#define GLAACTR_vecchar 26
#define HLAACTR_arraychar 27
#define ILAACTR_collatmode 28
#define JLAACTR_xtype 29
#define KLAACTR_ytype 30
static A68_BITS  LLAACTR_ccbit;
static A68_BITS  MLAACTR_operatorbit;
static A68_BITS  NLAACTR_valbit;
static A68_BITS  OLAACTR_holebit;
static A68_BITS  PLAACTR_globscopebit;
static A68_BITS  QLAACTR_priobit;
static A68_BITS  RLAACTR_exitbit;
static A68_BITS  SLAACTR_semibit;
static A68_BITS  TLAACTR_heapbit;
static A68_BITS  ULAACTR_decbit;
static A68_BITS  VLAACTR_vardecbit;
static A68_BITS  WLAACTR_compgenbit;
static A68_BITS  XLAACTR_elifousebit;
static A68_BITS  YLAACTR_labbit;
static A68_BITS  ZLAACTR_dontpullbit;
static A68_BITS  AMAACTR_dyprocbit;
static A68_BITS  BMAACTR_dyvardecbit;
static A68_BITS  CMAACTR_dydecbit;
static A68_BITS  DMAACTR_genprocbit;
static A68_BITS  EMAACTR_locgenbit;
static A68_BITS  FMAACTR_locdydecbit;
#define GMAACTR_xstatgrab 1
#define HMAACTR_xparampack 2
#define IMAACTR_xselect 3
#define JMAACTR_xcopy 4
#define KMAACTR_xtrim 5
#define LMAACTR_xsimpleindex 6
#define MMAACTR_xtrimindex 7
#define NMAACTR_xdyngrab 8
#define OMAACTR_xbdpack 9
#define PMAACTR_xdyop 10
#define QMAACTR_xmonop 11
#define RMAACTR_xstraight 12
#define SMAACTR_xprestraight 13
#define TMAACTR_xstrindex 14
#define UMAACTR_xassign 15
#define VMAACTR_xdefaultbd 16
#define WMAACTR_xif 1
#define XMAACTR_xcase 2
#define YMAACTR_xcaseu 3
#define ZMAACTR_xbegin 4
#define ANAACTR_xthen 5
#define BNAACTR_xin 6
#define CNAACTR_xinu 7
#define DNAACTR_xcomma 8
#define ENAACTR_xcommau 9
#define FNAACTR_xexit 10
#define GNAACTR_xout 11
#define HNAACTR_xoutu 12
#define INAACTR_xelse 13
#define JNAACTR_xfi 14
#define KNAACTR_xesac 15
#define LNAACTR_xesacu 16
#define MNAACTR_xend 17
#define NNAACTR_xcoll 18
#define ONAACTR_xcollcomma 19
#define PNAACTR_xfor 20
#define QNAACTR_xwhile 21
#define RNAACTR_xendcoll 22
#define SNAACTR_xforall 23
#define TNAACTR_xod 24
#define UNAACTR_xsemi 25
#define VNAACTR_xroutinend 27
#define WNAACTR_xuchoice 28
#define XNAACTR_xdo 29
#define YNAACTR_xfinish 30
#define ZNAACTR_xderef 17
#define AOAACTR_xcall 18
#define BOAACTR_xvoid 19
#define COAACTR_xniltom 20
#define DOAACTR_xgotoproc 21
#define EOAACTR_xgotom 22
#define FOAACTR_xwrc 23
#define GOAACTR_xwir 24
#define HOAACTR_xarrarr 26
#define IOAACTR_xvecarr 27
#define JOAACTR_xisvec 28
#define KOAACTR_xis 29
#define LOAACTR_xunite 30
#define MOAACTR_xuniteu 31
#define NOAACTR_xisarr 32
#define OOAACTR_xskiptom 33
#define POAACTR_xvec 34
#define QOAACTR_xarr 35
#define ROAACTR_xdeunite 36
#define SOAACTR_xwbvb 37
#define TOAACTR_xvac 38
#define UOAACTR_xytypetom 39
#define VOAACTR_xmtoxtype 40
#define WOAACTR_xiddec 1
#define XOAACTR_xvardec 2
#define YOAACTR_xfdec 3
#define ZOAACTR_xfordec 4
#define APAACTR_xivardec 5
#define BPAACTR_xccdec 6
#define CPAACTR_xforalldec 7
#define DPAACTR_xdummydec 8
static A68_86  EPAACTR_xwass;
static A68_86  FPAACTR_xwandth;
static A68_86  GPAACTR_xworel;
static A68_86  HPAACTR_xwindex;
static A68_86  IPAACTR_xwplusabetc;
static A68_86  JPAACTR_xwforall;
static A68_86  KPAACTR_xwloop;
static A68_80  SPAACTR_skip;
static A68_80  TPAACTR_nil;
static A68_80  UPAACTR_empty;
static A68_VC  CQAACTR_emptystring;
#define EQAACTR_nilcon (A68_113 *)A68_NIL
#define FQAACTR_nilconchk (A68_112 *)A68_NIL
#define GQAACTR_nilprl (A68_114 *)A68_NIL
#define HQAACTR_nilsubl (A68_116 *)A68_NIL
#define IQAACTR_nilkl (A68_121 *)A68_NIL
#define JQAACTR_nilkml (A68_122 *)A68_NIL
#define KQAACTR_refmark 1024
static A68_BITS  LQAACTR_decsmask;
static A68_BITS  MQAACTR_z;
static A68_BITS  NQAACTR_z1;
#define OQAACTR_nilml (A68_54 *)A68_NIL
#define PQAACTR_nilaml (A68_53 *)A68_NIL
#define QQAACTR_nilam (A68_52 *)A68_NIL
#define RQAACTR_nilsel (A68_58 *)A68_NIL
#define SQAACTR_nilind (A68_110 *)A68_NIL
#define TQAACTR_nilid (A68_67 *)A68_NIL
#define UQAACTR_nilvl (A68_124 *)A68_NIL
#define VQAACTR_nilinst (A68_108 *)A68_NIL
#define WQAACTR_nilsten (A68_64 *)A68_NIL
#define XQAACTR_nillab (A68_69 *)A68_NIL
#define YQAACTR_nillkids (A68_133 *)A68_NIL
#define ZQAACTR_nilint (A68_INT *)A68_NIL
#define ARAACTR_nilbool (A68_BOOL *)A68_NIL
static A68_BITS  BRAACTR_downbit;
static A68_BITS  CRAACTR_assmntbit;
static A68_BITS  DRAACTR_decprio;
static A68_BITS  ERAACTR_labsemi;
static A68_BITS  FRAACTR_alldecbits;
static A68_BITS  GRAACTR_notdontpull;
static A68_85  IRAACTR_opervoid;
static A68_87  KRAACTR_controlsemi;
static A68_124 * LRAACTR_freevl;
#define ASAACTR_bold 6
#define ZBBACTR_rccrd 54
#define ACBACTR_rccomment 60
#define BCBACTR_rcmatchcom 67
#define CCBACTR_rcnewline 80
#define DCBACTR_rcident 82
#define ECBACTR_rcintexp 83
#define FCBACTR_rccolon 84
#define GCBACTR_rcpragmat 90
#define HCBACTR_illegaltok 100
#define ICBACTR_colontok 110
#define JCBACTR_faultindtok 114
#define KCBACTR_bangtok 117
#define LCBACTR_stringtok 118
#define MCBACTR_ordtok 124
#define NCBACTR_crdtok 125
#define OCBACTR_labeltok 127
#define PCBACTR_identtok 132
#define QCBACTR_intdentok 146
#define RCBACTR_otherindtok 156
#define SCBACTR_otheroptok 176
#define TCBACTR_bitsdentok 177
#define UCBACTR_pointtok 130
#define VCBACTR_powertentok 175
#define WCBACTR_modenametok 158
#define XCBACTR_colonhtok 173
#define YCBACTR_biplus 200
#define ZCBACTR_biminus 201
#define ADBACTR_biequals 210
#define BDBACTR_monadic 236
#define CDBACTR_diadiconly 204
#define DDBACTR_recoversymbol 86
#define EDBACTR_frecoversymbol 87
#define FDBACTR_calllookup 99
#define RDBACTR_decreader 1
#define SDBACTR_ucreader 2
#define TDBACTR_screader 3
#define UDBACTR_formatreader 4
#define VDBACTR_startreader 5
#define FEBACTR_fltgap 2
static A68_158   UEBACTR = 
{  '\000', '\001', '\303', '\334', '@', 'K', 'q', '[',
   '\215', 'P', '\000', '\007', '\200', ' ', 'Q', '_',
   '\000', '\014', '\200', '\012', '\000', 'B', '@', '\251',
   '\200', '\015', 'I', '\273', '\000', '\013', '\000', '[',
   '\240', 'J', '\207', 'O', 'Q', '\225', '\000', '\006',
   '\200', ' ', 'Q', '\253', '\000', '[', '\240', 'J',
   '\200', 'G', 'F', '\257', '\200', 'P', 'N', '1',
   '\200', 'P', 'M', '\301', '\200', 'P', 'N', '\211',
   '\200', 'P', '@', '\231', '\200', 'P', 'N', '_',
   '\240', 'P', '\203', 'W', '@', 'Y', ' ', '\013',
   '\200', 'V', '@', '\251', '\000', '\'', ' ', '%',
   '\300', '\333', '@', '_', 'q', 'S', '\300', '\333',
   '@', 'g', 'O', '\003', ' ', '\005', '\341', '\332',
   '\300', '\331', '@', 'o', 'n', '\355', '\341', '\330',
   '\300', '\327', '`', 'u', '\306', ',', '\000', '\007',
   '\000', '\012', '\200', ',', '@', '\205', ' ', '\003',
   '\200', '\035', ' ', '\014', '\200', '\030', '@', '\215',
   '\000', '\013', '\240', '\031', '\300', '\326', '\000', '\022',
   '\000', '\021', '@', '\231', '\000', '\025', ' ', '\003',
   '\300', '\326', '@', '\237', 'm', '\017', '\300', '\326',
   '@', '\251', '\000', '\'', 'G', '\351', ' ', 'J',
   '\300', '\326', '@', '\261', '@', '\273', 'l', '\377',
   '\341', '\325', '\300', '\033', '\000', 'I', '\200', '\033',
   '`', '\261', '\304', '\324', '\000', '@', '\000', '\\',
   '`', '\313', '\300', '\323', '\000', '*', '\000', 'H',
   'l', 'C', '\306', '\030', 'A', '\305', 'A', '\327',
   'E', '\201', 'H', '\327', ' ', '\011', '\311', '\022',
   '\000', '<', 'F', 'A', '\000', '=', '\000', '4',
   'A', '\327', 'E', '\201', 'H', '\327', ' ', '\011',
   '\310', '\322', '\000', '5', '\200', '\322', '\000', '4',
   'A', '\327', 'E', '\201', 'H', '\327', ' ', '\011',
   '\311', '\321', '\000', 'D', 'F', 'U', '\000', 'B',
   '\000', '4', 'A', '\327', 'E', '\201', 'H', '\327',
   ' ', '\011', '\313', '>', '\000', '3', '\000', '0',
   '\200', '>', 'F', '\215', '\000', '2', 'F', 'A',
   'A', '\327', 'E', '\201', 'H', '\327', ' ', '\011',
   '\310', '\320', '\000', 'G', '\200', '\320', 'E', '\255',
   '\000', 'H', 'E', '\201', 'H', '\327', ' ', '\011',
   '\310', '<', '\000', '\016', 'F', '\243', '\000', '\003',
   'A', '\327', 'E', '\201', 'H', '\327', ' ', '\011',
   '\303', '\317', '\000', '\005', 'j', '\241', '\304', '\316',
   '\000', '\015', 'I', '\237', ' ', '\011', '\202', '[',
   'l', '#', '\204', 'Z', 'B', '\013', 'D', '\245',
   ' ', '\011', '\207', 'Y', '\000', '8', '\000', '4',
   'A', '\327', 'E', '\201', 'H', '\327', ' ', '\011',
   '\205', 'N', '\000', '+', '\000', '\005', 'G', '\367',
   'l', '3', '\206', 'G', '\000', '\016', '\000', 'Y',
   'I', '\375', '\000', '\003', ' ', '\011', '\204', '9',
   '\000', '\005', 'G', '\367', 'l', '3', '\203', '!',
   'J', 'E', ' ', '\011', '\205', ' ', 'H', '\017',
   'E', '\201', 'H', '\327', ' ', '\011', '\204', '\032',
   '\000', ',', '\200', ' ', ' ', '\011', '\207', '\026',
   '\000', '7', '\000', '4', 'A', '\327', 'E', '\201',
   'H', '\327', ' ', '\011', '\207', '\025', '\000', '6',
   '\000', '4', 'A', '\327', 'E', '\201', 'H', '\327',
   ' ', '\011', '\200', '\017', '\200', '3', '\000', ',',
   '\200', ' ', ' ', '\011', '\200', '\030', 'a', '\311',
   '\303', '\326', '@', '\215', '\240', '\031', '\300', '\031',
   '\000', 'E', '\000', '4', '\240', '\031', '\341', '\315',
   '\307', '\030', '\000', '-', '\200', '\030', 'A', '\365',
   '\200', '\031', '\000', '/', 'a', '\327', '\300', ';',
   '\000', 'W', '\200', ';', 'J', '[', '\000', 'X',
   '\200', '=', 'a', '\327', '\300', '\324', 'A', '\375',
   '\000', '.', 'j', 'U', '\300', '\324', '\000', '\\',
   'B', '\005', 'd', '\245', '\341', '\314', '\200', 'Z',
   'b', '\013', '\300', '\317', '\000', '\005', 'b', '\021',
   '\303', '\313', 'B', '\221', 'b', '\241', '\307', '\312',
   '\000', '\035', 'B', '\265', '\000', '.', '\000', '4',
   '\000', '\007', 'b', '\301', '\307', '\311', '\000', ' ',
   '\200', '\311', '\000', '.', '\000', '4', '\000', '\007',
   'b', '\301', '\306', '\310', '\000', '\017', 'B', '\333',
   '\000', '4', '\000', '\007', 'b', '\301', '\306', ':',
   '\000', '-', '\200', ':', '\000', '4', '\000', '\007',
   'b', '\301', '\207', 'E', 'C', 'Y', '\000', '\"',
   '\000', '.', '\000', '4', '\000', '\007', 'b', '\301',
   '\202', ',', 'd', '\221', '\205', '+', 'D', '\035',
   '\000', '4', '\000', '\007', 'b', '\301', '\211', '*',
   '\200', '\030', 'D', '\013', '\200', '\031', '\000', '\024',
   '\000', '.', '\000', '4', '\000', '\007', 'b', '\301',
   '\207', ')', 'C', 'Y', '\000', '\022', '\000', '.',
   '\000', '4', '\000', '\007', 'b', '\301', '\200', '\037',
   'D', 'U', '\000', '4', '\000', '\007', 'b', '\301',
   '\202', 'H', ' ', '\036', '\200', '7', 'b', '\231',
   '\302', '\307', ' ', '\034', '\200', '7', ' ', '\033',
   '\306', '\312', 'B', '\265', '\000', '.', '\000', '4',
   '\000', '\007', 'b', '\301', '\300', '\321', '\000', '4',
   '\000', '\010', '\240', '\321', '\303', '\016', '\000', '!',
   '\240', '\016', '\300', '\306', '\000', '\037', '\240', '\306',
   '\200', ' ', '\000', '\004', 'b', '\307', '\303', '\305',
   '\000', '\003', '\240', '\305', '\200', '\034', 'b', '\321',
   '\302', ' ', 'b', '\301', '\300', '\304', '\000', '\011',
   '\240', '\304', '\210', '@', '\200', ';', 'B', '\373',
   '\000', '/', '\200', '=', 'C', '\021', '\000', '\013',
   ' ', '+', '\200', ';', 'D', 'c', '\200', '=',
   '\000', '/', '\000', '\005', 'C', '\021', '\000', '\006',
   ' ', '+', '\306', '\324', '\000', '#', '\000', '*',
   'C', '\013', '\000', ')', ' ', '%', '\300', '=',
   ' ', '$', '\300', '\324', 'A', '\375', ' ', '\013',
   '\303', '\303', 'C', '+', ' ', '.', '\303', '\310',
   '\000', '\017', 'b', '\333', '\303', ':', '\000', '-',
   '\240', ':', '\202', '+', 'd', '\035', '\200', '\037',
   'd', 'U', '\303', '\302', 'C', 'Q', 'b', '\265',
   '\303', '\311', '\000', ' ', '\240', '\311', '\203', 'E',
   'C', 'Y', ' ', '\"', '\202', ',', 'c', '\337',
   '\205', '*', '\200', '\030', 'D', '\013', '\200', '\031',
   ' ', '\024', '\200', ')', 'C', 'Y', ' ', '\022',
   '\302', '\313', 'b', '\221', '\300', '\312', ' ', '\035',
   '\302', '\303', 'c', '+', '\303', '\310', '\000', '\017',
   'c', 'q', '\303', ':', '\000', '\010', '\240', ':',
   '\202', '+', 'c', '\235', '\200', '\037', 'c', '\321',
   '\205', '@', '\200', ';', '\200', '=', 'C', 'Y',
   ' ', '\013', '\200', ';', '\000', '&', 'C', '\211',
   '\200', '=', '\000', '\005', 'C', 'Y', ' ', '\006',
   '\341', '=', '\203', '\034', '\000', '\'', 'c', '\211',
   '\200', '\012', 'c', '\225', '\341', '=', '\200', '\034',
   '\000', '\'', 'c', '\211', '\305', '.', '\000', '\011',
   '\200', '.', 'C', 'Y', ' ', '\012', '\200', '\030',
   'C', '\257', '\200', '\031', ' ', '\007', '\300', '\317',
   'C', 'Y', 'c', '\265', '\200', ' ', 'c', '\271',
   '\302', '\031', ' ', '\016', '\300', '\034', '\000', '\014',
   '\200', '\034', 'c', '\305', '\303', ' ', 'C', '\265',
   ' ', '\015', '\300', '\317', 'C', '\257', ' ', '\015',
   '\303', '\310', '\000', '\020', 'c', 'q', '\300', ':',
   '\000', '\010', '\000', '\021', '\240', ':', '\303', '\301',
   'C', '\361', ' ', '\023', '\200', '\030', 'C', '\371',
   '\200', '\031', '\000', '\032', 'C', '\361', ' ', '\025',
   '\302', '\317', 'c', 'Y', '\200', '!', ' ', '\026',
   '\300', '\317', 'C', 'Y', '\000', '\027', 'd', '\001',
   '\302', '\031', ' ', '\030', '\200', '\034', 'C', '\371',
   ' ', '\030', '\300', '\301', 'C', '\361', '\000', '\027',
   'd', '\023', '\302', '\031', ' ', '\031', '\200', '\034',
   'D', '\013', ' ', '\031', '\306', '.', '\000', '\011',
   '\200', '.', 'C', '\021', '\000', '\012', ' ', '0',
   '\200', '\030', 'D', '3', '\200', '\031', '\000', '\007',
   ' ', ',', '\300', '\317', 'C', '\021', 'd', '9',
   '\200', ' ', 'd', '=', '\302', '\031', ' ', '1',
   '\300', '\034', '\000', '2', '\200', '\034', 'd', 'I',
   '\303', ' ', 'D', '9', ' ', '3', '\300', '\317',
   'D', '3', ' ', '3', '\303', '\310', '\000', '\020',
   'b', '\333', '\300', ':', '\000', '-', '\000', '\021',
   '\240', ':', '\304', '\324', '\000', '#', 'D', 's',
   ' ', '%', '\300', '\300', '\000', '&', 'C', '\211',
   ' ', '$', '\300', '\324', '\000', '*', 'C', '\013',
   'd', '{', '\303', '\277', '\000', '(', 'd', '\211',
   '\200', 'I', '\000', '*', 'C', '\013', 'd', '\211',
   '\341', '=', '\200', '\034', '\000', '\'', 'd', 's',
   '\306', '\276', 'C', '\337', '\000', '.', '\000', '4',
   '\000', '\007', 'b', '\301', '\300', ' ', '\000', '4',
   '\000', '\006', '\240', ' ', '\305', '\030', 'A', '\305',
   'A', '\327', 'E', '\201', 'h', '\327', '\310', '\022',
   '\000', '<', 'F', 'A', '\000', '=', '\000', '4',
   'A', '\327', 'E', '\201', 'h', '\327', '\307', '\322',
   '\000', '5', '\200', '\322', '\000', '4', 'A', '\327',
   'E', '\201', 'h', '\327', '\310', '\321', '\000', 'D',
   'F', 'U', '\000', 'B', '\000', '4', 'A', '\327',
   'E', '\201', 'h', '\327', '\312', '>', '\000', '3',
   '\000', '0', '\200', '>', 'F', '\215', '\000', '2',
   'F', 'A', 'A', '\327', 'E', '\201', 'h', '\327',
   '\307', '\320', '\000', 'G', '\200', '\320', 'E', '\255',
   '\000', 'H', 'E', '\201', 'h', '\327', '\307', '<',
   '\000', '\016', 'F', '\243', '\000', '\003', 'A', '\327',
   'E', '\201', 'h', '\327', '\303', '\317', '\000', '\005',
   'h', '\357', '\303', '\316', '\000', '\015', 'i', '\237',
   '\203', '[', '\000', '[', 'i', '}', '\206', 'Y',
   '\000', '8', '\000', '4', 'A', '\327', 'E', '\201',
   'h', '\327', '\207', 'N', '\000', '+', '\000', '\005',
   'G', '\367', '\000', '*', 'E', '\201', 'h', '\327',
   '\205', 'G', '\000', '\016', '\000', 'Y', 'I', '\375',
   ' ', '\003', '\206', '9', '\000', '\005', 'G', '\367',
   '\000', '*', 'E', '\201', 'h', '\327', '\202', '!',
   'j', 'E', '\204', ' ', 'H', '\017', 'E', '\201',
   'h', '\327', '\203', '\032', '\000', ',', '\240', ' ',
   '\206', '\026', '\000', '7', '\000', '4', 'A', '\327',
   'E', '\201', 'h', '\327', '\206', '\025', '\000', '6',
   '\000', '4', 'A', '\327', 'E', '\201', 'h', '\327',
   '\200', '\017', '\200', '3', '\000', ',', '\240', ' ',
   '\341', '\275', '\300', '\274', 'E', '\227', 'H', '\037',
   'H', '/', 'H', 'A', 'H', 'U', 'H', 'k',
   'H', '\203', 'H', '\235', 'h', '\271', '\341', '\273',
   '\306', '\011', '\000', 'F', '\200', '\011', 'E', '\255',
   '\000', 'H', 'e', '\227', '\200', '\016', 'E', '\255',
   '\000', 'I', 'e', '\227', '\303', '\030', 'A', '\305',
   'a', '\327', '\306', '\022', '\000', '<', 'F', 'A',
   '\000', '=', '\000', '4', 'a', '\327', '\305', '\322',
   '\000', '5', '\200', '\322', '\000', '4', 'a', '\327',
   '\306', '\321', '\000', 'D', 'F', 'U', '\000', 'B',
   '\000', '4', 'a', '\327', '\310', '>', '\000', '3',
   '\000', '0', '\200', '>', 'F', '\215', '\000', '2',
   'F', 'A', 'a', '\327', '\305', '\320', '\000', 'G',
   '\200', '\320', 'E', '\255', ' ', 'H', '\305', '<',
   '\000', '\016', 'F', '\243', '\000', '\003', 'a', '\327',
   '\303', '\317', '\000', '\005', 'f', '\267', '\305', '\272',
   '\000', '\015', 'G', 'i', '\000', '\003', 'a', '\327',
   '\203', '[', '\000', '[', 'g', 'A', '\204', 'Y',
   '\000', '8', '\000', '4', 'a', '\327', '\205', 'N',
   '\000', '+', '\000', '\005', 'G', '\367', ' ', '*',
   '\204', '9', '\000', '\005', 'G', '\367', ' ', '*',
   '\202', '!', 'g', '\375', '\202', ' ', 'h', '\017',
   '\204', '\026', '\000', '7', '\000', '4', 'a', '\327',
   '\200', '\025', '\000', '6', '\000', '4', 'a', '\327',
   '\300', '\022', '\000', '9', '\200', '\022', 'f', 'I',
   '\302', '\271', ' ', ';', '\300', '\022', '\000', ':',
   '\200', '\022', 'f', 'I', '\304', '\036', '\000', '>',
   'F', 'c', 'f', 'k', '\241', 'M', '\200', '.',
   'f', '\201', '\300', '\036', '\000', '?', '\200', '\036',
   '\240', '.', '\341', '\271', '\300', 'K', 'f', 'q',
   '\300', 'K', '\000', '@', '\200', 'K', '\000', 'A',
   'F', '}', '\240', '.', '\341', '.', '\240', '\320',
   '\341', '\271', '\302', 'K', 'f', 'q', '\300', '\036',
   'F', 'c', 'f', 'k', '\341', '\022', '\200', '\030',
   'F', '\225', '\240', '\031', '\300', '\324', 'A', '\375',
   '\000', '1', 'f', '\235', '\341', '\031', '\200', '\034',
   'f', '\225', '\300', '<', '\000', 'L', '\000', '9',
   '\000', '\006', 'F', '\257', ' ', '\014', '\200', '<',
   '@', 'Y', '\000', '\013', '\240', '<', '\303', '\313',
   'B', '\221', 'g', '+', '\306', '\312', '\000', '\035',
   'B', '\265', '\000', '.', '\000', '4', 'g', 'A',
   '\306', '\311', '\000', ' ', '\200', '\311', '\000', '.',
   '\000', '4', 'g', 'A', '\305', '\310', '\000', '\017',
   'B', '\333', '\000', '4', 'g', 'A', '\305', ':',
   '\000', '-', '\200', ':', '\000', '4', 'g', 'A',
   '\206', 'E', 'C', 'Y', '\000', '\"', '\000', '.',
   '\000', '4', 'g', 'A', '\205', ',', 'C', '\337',
   '\000', '.', '\000', '4', 'g', 'A', '\204', '+',
   'D', '\035', '\000', '4', 'g', 'A', '\210', '*',
   '\200', '\030', 'D', '\013', '\200', '\031', '\000', '\024',
   '\000', '.', '\000', '4', 'g', 'A', '\206', ')',
   'C', 'Y', '\000', '\022', '\000', '.', '\000', '4',
   'g', 'A', '\200', '\037', 'D', 'U', '\000', '4',
   'g', 'A', '\305', '\312', 'B', '\265', '\000', '.',
   '\000', '4', 'g', 'A', '\300', '\321', '\000', '4',
   'F', 'U', '\000', 'B', '\000', '4', 'a', '\327',
   '\307', '>', '\000', '0', '\200', '>', 'F', '\215',
   '\000', '2', 'F', 'A', 'a', '\327', '\300', '\270',
   '\000', 'K', 'g', 'U', '\304', '\030', 'A', '\305',
   '\000', 'J', 'a', '\327', '\300', '\272', '\000', '\015',
   'G', 'i', '\000', '\003', '\000', 'J', 'a', '\327',
   '\300', '\272', '\000', 'M', 'G', '{', 'G', '\307',
   '\200', '/', '\000', 'N', 'G', '\337', '\000', '\003',
   '\240', '-', '\306', '\267', 'G', '\215', 'G', '\227',
   'G', '\237', 'G', '\247', ' ', 'V', '\200', 'F',
   'G', '\257', ' ', 'Q', '\341', '\266', '\200', '0',
   '\000', 'A', '\200', ' ', ' ', 'R', '\341', '\265',
   '\200', '1', '\000', 'S', 'c', '\013', '\341', '\264',
   '\200', '2', '\000', 'T', 'c', '\013', '\341', '\263',
   '\200', '3', '\000', 'U', 'c', '\013', '\300', ' ',
   '\000', 'A', '\200', ' ', '\200', '\021', '\000', 'P',
   'A', '\375', '\000', 'W', '\000', '\011', 'g', '\301',
   '\341', '\263', '\200', '\034', 'g', '\257', '\341', '/',
   '\200', '4', 'G', '\317', ' ', 'O', '\300', '\326',
   '@', '\261', '@', '\273', 'g', '\327', '\341', '/',
   '\200', '\013', '\000', ')', 'g', '\317', '\300', '\326',
   '@', '\251', '\000', '\'', 'G', '\351', ' ', '%',
   '\341', '\262', '\200', '\027', '\000', 'I', '\200', '\033',
   '@', '\251', '\000', '(', 'g', '\351', '\300', '\317',
   'C', '\021', ' ', '4', '\304', '\030', 'A', '\305',
   '\000', 'L', 'a', '\327', '\300', '\272', '\000', '\015',
   'G', 'i', '\000', '\003', 'a', '\327', '\303', '\271',
   '\000', ')', 'a', '\327', '\300', '\020', '\000', 'O',
   '\200', '\020', 'E', '\255', ' ', 'P', '\341', '\261',
   '\300', '\010', '\000', 'F', '\200', '\010', 'E', '\255',
   'E', '\227', '\000', 'H', 'h', '\037', '\341', '\260',
   '\300', '\007', '\000', 'F', '\200', '\007', 'E', '\255',
   'E', '\227', 'H', '\037', '\000', 'H', 'h', '/',
   '\341', '\257', '\300', '\006', '\000', 'F', '\200', '\006',
   'E', '\255', 'E', '\227', 'H', '\037', 'H', '/',
   '\000', 'H', 'h', 'A', '\341', '\256', '\300', '\005',
   '\000', 'F', '\200', '\005', 'E', '\255', 'E', '\227',
   'H', '\037', 'H', '/', 'H', 'A', '\000', 'H',
   'h', 'U', '\341', '\255', '\300', '\004', '\000', 'F',
   '\200', '\004', 'E', '\255', 'E', '\227', 'H', '\037',
   'H', '/', 'H', 'A', 'H', 'U', '\000', 'H',
   'h', 'k', '\341', '\254', '\300', '\003', '\000', 'F',
   '\200', '\003', 'E', '\255', 'E', '\227', 'H', '\037',
   'H', '/', 'H', 'A', 'H', 'U', 'H', 'k',
   '\000', 'H', 'h', '\203', '\341', '\253', '\300', '\002',
   '\000', 'F', '\200', '\002', 'E', '\255', 'E', '\227',
   'H', '\037', 'H', '/', 'H', 'A', 'H', 'U',
   'H', 'k', 'H', '\203', '\000', 'H', 'h', '\235',
   '\341', '\275', '\300', '\001', '\000', 'F', '\200', '\001',
   'E', '\255', 'E', '\227', 'H', '\037', 'H', '/',
   'H', 'A', 'H', 'U', 'H', 'k', 'H', '\203',
   'H', '\235', '\000', 'H', 'h', '\271', '\341', '\252',
   '\306', 'X', '\000', 'F', '\200', 'X', 'E', '\255',
   'E', '\201', ' ', 'H', '\300', '?', '\000', 'M',
   '\200', '?', 'A', '\375', ' ', 'N', '\303', '\313',
   'B', '\221', 'i', 'c', '\306', '\312', '\000', '\035',
   'B', '\265', '\000', '.', '\000', '4', 'i', '}',
   '\306', '\311', '\000', ' ', '\200', '\311', '\000', '.',
   '\000', '4', 'i', '}', '\305', '\310', '\000', '\017',
   'B', '\333', '\000', '4', 'i', '}', '\305', ':',
   '\000', '-', '\200', ':', '\000', '4', 'i', '}',
   '\206', 'E', 'C', 'Y', '\000', '\"', '\000', '.',
   '\000', '4', 'i', '}', '\205', ',', 'C', '\337',
   '\000', '.', '\000', '4', 'i', '}', '\204', '+',
   'D', '\035', '\000', '4', 'i', '}', '\210', '*',
   '\200', '\030', 'D', '\013', '\200', '\031', '\000', '\024',
   '\000', '.', '\000', '4', 'i', '}', '\206', ')',
   'C', 'Y', '\000', '\022', '\000', '.', '\000', '4',
   'i', '}', '\200', '\037', 'D', 'U', '\000', '4',
   'i', '}', '\305', '\312', 'B', '\265', '\000', '.',
   '\000', '4', 'i', '}', '\300', '\321', '\000', '4',
   'F', 'U', '\000', 'B', '\000', '4', 'A', '\327',
   'E', '\201', 'h', '\327', '\304', '\251', 'G', 'A',
   'E', '\201', 'h', '\327', '\300', '\012', '\000', '\017',
   'I', '\215', ' ', '\003', '\200', '\012', '\000', '5',
   '\000', '<', '\000', '9', 'i', '\227', '\300', '\324',
   'A', '\375', '\000', '\012', ' ', '\013', '\306', '\272',
   'G', 'i', '\000', '\003', 'A', '\327', 'E', '\201',
   'h', '\327', '\200', 'T', '\000', ' ', '\200', ' ',
   '\200', '\030', 'I', '\273', '\200', '\031', '\000', '!',
   ' ', '&', '\300', '\250', 'I', '\301', 'i', '\367',
   '\303', '\274', '\000', '\035', 'i', '\323', '\303', ':',
   '\000', '\034', '\240', ':', '\300', ' ', '\000', '\033',
   '\240', ' ', '\206', '\320', '\200', '\030', 'I', '\351',
   'I', '\357', '\000', '\036', '\240', '\031', '\200', '\016',
   '\200', '\030', 'I', '\351', 'I', '\357', '\240', '\031',
   '\300', '\317', 'C', 'Y', ' ', '5', '\341', '\031',
   '\200', '\034', '\000', '\037', 'i', '\351', '\341', '\247',
   '\200', '\034', 'i', '\273', '\300', '\030', '\000', '5',
   '\200', '\030', 'J', '\021', '\200', '\031', '\000', '8',
   'J', '?', '\200', '\012', '\000', '9', 'i', '\227',
   '\307', '\317', '\000', '6', 'I', '\351', '\000', 'A',
   '\200', ' ', '\000', '7', 'j', '+', '\200', '[',
   '\000', 'X', '\000', 'A', '\200', ' ', '\000', '7',
   'j', '+', '\341', '\031', '\200', '\034', 'j', '1',
   '\302', '\246', 'j', '\021', '\300', ' ', '\000', 'A',
   '\200', ' ', '\000', '7', 'j', '+', '\300', '\301',
   'C', '\361', ' ', '5', '\304', '\270', 'G', '\375',
   'E', '\201', 'h', '\327', '\300', '\012', '\000', '\020',
   'I', '\215', ' ', '\003', '\341', '\031', '\200', '\034',
   'a', '\365', '\304', '\245', 'J', 'u', '\000', 'V',
   'j', '}', '\303', '\324', 'A', '\375', 'j', '\203',
   '\200', 'I', '\000', 'U', 'J', '\231', 'J', 'u',
   '\000', 'V', 'j', '}', '\341', '\277', '\200', '6',
   'A', '\375', ' ', 'T', '\341', '=', '\200', '\034',
   'j', '[', '\310', 'I', '\000', 'R', '\200', 'I',
   '\000', 'U', 'J', '\231', 'J', 'u', '\000', 'V',
   'j', '}', '\300', '\277', '\000', 'Q', 'j', '}',
   '\341', '\245', '\300', '\324', 'A', '\375', ' ', 'S',
   '\303', '\313', 'B', '\221', 'k', '\017', '\306', '\312',
   '\000', '\035', 'B', '\265', '\000', '.', '\000', '4',
   'k', '+', '\306', '\311', '\000', ' ', '\200', '\311',
   '\000', '.', '\000', '4', 'k', '+', '\305', '\310',
   '\000', '\017', 'B', '\333', '\000', '4', 'k', '+',
   '\305', ':', '\000', '-', '\200', ':', '\000', '4',
   'k', '+', '\206', 'E', 'C', 'Y', '\000', '\"',
   '\000', '.', '\000', '4', 'k', '+', '\202', ',',
   'k', '\251', '\204', '+', 'D', '\035', '\000', '4',
   'k', '+', '\210', '*', '\200', '\030', 'D', '\013',
   '\200', '\031', '\000', '\024', '\000', '.', '\000', '4',
   'k', '+', '\206', ')', 'C', 'Y', '\000', '\022',
   '\000', '.', '\000', '4', 'k', '+', '\200', '\037',
   'D', 'U', '\000', '4', 'k', '+', '\305', '\312',
   'B', '\265', '\000', '.', '\000', '4', 'k', '+',
   '\300', '\321', '\000', '4', 'F', 'U', '\000', 'B',
   '\000', '4', 'A', '\327', 'E', '\201', 'H', '\327',
   ' ', '\011', '\303', '\244', 'I', '}', ' ', '\011',
   '\300', ' ', '\000', '\007', 'k', '7', '\300', ' ',
   '\000', 'A', '\000', 'H', '\200', ' ', 'k', 'A',
   '\305', '\243', 'K', 'U', '\000', '\005', 'K', 'e',
   ' ', 'W', '\300', '\320', '\000', 'Z', '\200', '\320',
   'K', 'u', ' ', 'W', '\300', '\243', '\000', 'E',
   'k', '[', '\302', '\242', ' ', 'G', '\200', '?',
   '\000', 'F', 'c', '\013', '\341', '\241', '\200', 'D',
   '\000', 'A', '\000', 'H', '\200', ' ', 'K', 'U',
   '\000', '\005', 'k', 'e', '\300', '\240', '\000', 'C',
   'k', '{', '\304', '\324', 'C', '\013', '\000', '\005',
   'k', '\231', '\205', '\\', '\000', 'D', '\200', '.',
   '\000', '\005', 'k', '\231', '\200', '\014', '\000', 'C',
   'F', 'A', '\000', '\013', '\000', '\005', 'k', '\231',
   '\341', '\241', '\200', 'D', '\000', 'A', '\000', 'H',
   '\200', ' ', '\000', 'Z', '\200', '\320', 'k', 'u',
   '\305', '\276', 'C', '\337', '\000', '.', '\000', '4',
   'k', '+', '\300', ' ', '\000', '7', '\000', 'B',
   '\000', 'A', '\200', ' ', 'k', '\277', '\310', '?',
   '\000', '4', '\000', 'H', '\200', '?', 'K', '\341',
   '\000', '\005', 'K', '\365', ' ', 'W', '\300', '\320',
   '\000', '3', '\000', 'H', '\000', 'Z', '\200', '\320',
   'K', '\341', '\000', '\005', 'L', '\013', ' ', 'W',
   '\304', '\030', '\000', ';', 'I', '\375', ' ', '\004',
   '\300', '\301', '\000', ':', 'J', '?', '\000', ';',
   'I', '\215', ' ', '\004', '\341', '\241', '\200', 'D',
   '\000', 'B', '\000', 'A', '\200', ' ', '\000', '4',
   '\000', 'H', '\200', '?', 'K', '\341', '\000', '\005',
   'k', '\365', '\341', '\241', '\200', 'D', '\000', 'B',
   '\000', 'A', '\200', ' ', '\000', '3', '\000', 'H',
   '\000', 'Z', '\200', '\320', 'K', '\341', '\000', '\005',
   'l', '\013', '\304', '\244', '\000', '[', 'I', '}',
   ' ', '\011', '\300', ' ', '\000', '\010', '\000', 'Y',
   'k', '7', '\305', '\237', '\000', '*', 'E', '\201',
   'H', '\327', ' ', '\011', '\300', ' ', '\000', '\007',
   'k', '7', '\303', '\236', 'L', 'S', ' ', 'W',
   '\200', 'A', '\000', 'B', 'L', '\331', '\000', '$',
   ' ', 'W', '\202', 'C', 'l', '[', '\200', 'B',
   'l', '\275', '\313', '\030', '\000', '/', '\200', '\030',
   'C', '\371', '\200', '\031', '\000', '6', '\000', '\032',
   'C', '\361', '\000', '\025', '\000', '5', 'l', 'w',
   '\300', '\235', '\000', 'B', 'l', '\241', '\300', '\235',
   '\000', ',', '\200', '\235', '\000', 'Z', '\200', '\320',
   'L', '\207', '\000', '\005', 'l', '\227', '\304', '\324',
   '\000', '0', 'C', '\013', ' ', '1', '\200', '\\',
   '\000', '2', '\000', '1', '\240', '.', '\341', '\241',
   '\300', 'D', '\000', '*', '\200', 'D', 'l', 'w',
   '\300', '\235', '\000', ',', '\200', '\235', '\000', 'Z',
   '\200', '\320', '\000', '.', 'K', '\341', '\000', '\005',
   'l', '\263', '\341', '\241', '\300', 'D', '\000', '*',
   '\200', 'D', 'l', '\241', '\300', '\235', '\000', ',',
   '\200', '\235', '\000', 'Z', '\200', '\320', '\200', '.',
   '\000', '-', '\000', '\005', 'l', '\317', '\341', '\241',
   '\300', 'D', '\000', '*', '\200', 'D', 'l', '\275',
   '\300', '\235', '\000', '\"', '\200', '\235', 'l', '\341',
   '\303', '\242', '\000', '\005', 'l', '\365', '\300', '\320',
   '\000', 'Z', '\200', '\320', '\000', '#', 'G', '\367',
   '\000', '\005', 'l', '\365', '\341', '\241', '\300', 'D',
   '\000', '*', '\200', 'D', 'l', '\331', '\341', '\234',
   '\200', '\013', 'm', '\005', '\302', '\234', ' ', '+',
   '\300', '\326', '\000', ')', '`', '\251', '\302', '\233',
   'm', '\031', '\300', '\232', '\000', '%', 'n', '\311',
   '\307', ']', '\000', 'K', '\000', '\027', '\200', ']',
   '\000', 'Y', '\000', '\024', 'm', '3', '\300', '\021',
   '\000', '%', '\000', '\027', '\200', '\021', '\000', '\024',
   'n', '\267', '\205', '\003', 'M', 'U', '\000', '\026',
   '\000', 'Z', ' ', '%', '\206', '\002', 'M', '\355',
   '\000', '\026', '\000', 'Z', '\000', '%', ' ', '\023',
   '\200', '\001', 'N', 'e', '\000', '\026', '\000', 'Z',
   '\000', '%', ' ', '\023', '\300', '\030', '\000', '\021',
   'M', 'c', '\000', '\'', '\000', '\003', 'M', '\221',
   ' ', ' ', '\200', '\030', '\000', '=', 'M', 'u',
   '\200', '\031', 'M', '\215', '@', '\251', '\000', '\'',
   'G', '\351', ' ', '>', '\304', '\317', 'C', 'Y',
   '\000', '5', 'm', '\203', '\200', '!', '\000', '\026',
   ' ', '5', '\341', '\031', '\300', ' ', '\000', 'A',
   '\000', '?', '\240', ' ', '\341', '\326', '\240', '\012',
   '\302', '\231', ' ', '\037', '\304', '\021', '\000', '\030',
   '\200', '\021', 'm', '\251', '\200', '\034', '\000', '\021',
   'M', 'c', '\000', '%', 'M', '\221', ' ', ' ',
   '\303', '\326', 'M', '\271', ' ', '&', '\200', 'I',
   '\000', '\021', 'M', '\301', '\000', '(', ' ', '&',
   '\300', '\326', '\000', '\021', 'G', '\337', ' ', '\003',
   '\300', '\326', '@', '\237', 'm', '\307', '\313', ']',
   '\000', 'K', '\000', '\027', '\200', ']', '\000', 'Y',
   '\000', '\024', '\200', '\003', 'M', 'U', '\000', '\026',
   '\000', 'Z', ' ', '%', '\300', '\021', '\000', '%',
   '\000', '\027', '\200', '\021', '\000', '\024', '\200', '\003',
   'M', 'U', ' ', '\026', '\300', '\326', 'M', '\271',
   '\000', '\035', 'M', '\367', ' ', ' ', '\302', '\230',
   'n', '\005', '\200', '\034', 'M', '\271', '\000', '\034',
   'M', '\367', ' ', ' ', '\302', '\231', ' ', '\037',
   '\300', '\021', '\000', '\030', '\200', '\021', 'n', '\021',
   '\303', '\326', 'M', '\271', ' ', '\036', '\200', 'I',
   '\000', '!', 'n', '\035', '\305', '\326', '\000', '\021',
   'N', '1', '\000', '(', ' ', '\036', '\200', '\035',
   '\000', '\021', 'N', '_', '\000', '(', ' ', '\036',
   '\300', '\326', '@', '\237', 'n', '7', '\314', ']',
   '\000', 'K', '\000', '\027', '\200', ']', '\000', 'Y',
   '\000', '\024', '\200', '\002', 'M', '\355', '\000', '\026',
   '\000', 'Z', '\000', '%', ' ', '\023', '\300', '\021',
   '\000', '%', '\000', '\027', '\200', '\021', '\000', '\024',
   '\200', '\002', 'M', '\355', ' ', '\026', '\300', '\326',
   '@', '\237', 'm', '\031', '\300', '\326', 'M', '\271',
   '\000', '\031', 'n', 'm', '\302', '\231', ' ', '\033',
   '\300', '\021', '\000', '\030', '\200', '\021', 'n', 'y',
   '\303', '\326', 'M', '\271', ' ', '\032', '\200', 'I',
   '\000', '\021', 'N', '\211', '\000', '(', ' ', '\032',
   '\300', '\326', '@', '\237', 'n', '\217', '\314', ']',
   '\000', 'K', '\000', '\027', '\200', ']', '\000', 'Y',
   '\000', '\024', '\200', '\001', 'N', 'e', '\000', '\026',
   '\000', 'Z', '\000', '%', ' ', '\023', '\300', '\021',
   '\000', '%', '\000', '\027', '\200', '\021', '\000', '\024',
   '\200', '\001', 'N', 'e', ' ', '\026', '\203', '\003',
   'M', 'U', ' ', '\026', '\203', '\002', 'M', '\355',
   ' ', '\026', '\200', '\001', 'N', 'e', ' ', '\026',
   '\306', '\034', '\000', '\"', '\200', '\034', 'N', '\331',
   '\000', ' ', ' ', '#', '\300', '\231', ' ', '\023',
   '\300', '\326', 'M', '\271', 'n', '\337', '\302', '\231',
   ' ', '$', '\300', '\034', '\000', '\"', '\200', '\034',
   'N', '\331', ' ', ' ', '\341', '\332', '\300', '\227',
   'N', '\365', '`', 'g', '\241', '7', '\241', '6',
   '\241', '/', '\241', '.', '\241', '*', '\241', ')',
   '\240', '\022', '\341', '\226', '\303', '\225', '\000', '\005',
   'o', '7', '\204', '8', '@', 'g', 'P', 'm',
   'q', '\025', '\205', '1', '\200', '8', '@', 'g',
   'P', '\017', 'p', '/', '\204', '\"', '@', 'g',
   'P', '\017', 'p', '/', '\203', '\037', '@', 'g',
   'q', 'K', '\200', '\030', '\000', '\015', '@', 'Y',
   '\000', '\016', '\200', '\031', '`', 'g', '\302', '\224',
   'o', 'M', '\203', '\223', '@', 'g', 'p', '\027',
   '\200', '\036', '@', 'g', 'P', '\001', 'P', '\017',
   'P', '{', 'p', '\207', '\303', '&', 'O', '\201',
   'o', '\237', '\307', '$', '\000', '\006', '\000', '\012',
   '\200', '$', '@', '\205', '\000', '\003', '`', 'g',
   '\203', '%', 'O', '\255', '`', 'g', '\206', '!',
   '\200', '\030', 'O', '\333', 'O', '\355', '\200', '\031',
   '`', 'g', '\203', ' ', 'O', '\365', '`', 'g',
   '\200', '\023', '@', 'g', 'P', '\001', 'p', '\017',
   '\200', '&', '\200', '\030', 'O', '\217', 'O', '\223',
   'O', '\231', '\200', '\031', '`', 'g', '\341', '\222',
   '\240', '\035', '\341', '\221', '\200', '\036', '\240', '\035',
   '\341', '\031', '\200', '#', '\240', '\035', '\341', '\226',
   '\300', '\'', '\000', '\005', '\200', '\'', '@', 'g',
   '\000', '\005', 'o', '\201', '\341', '\220', '\300', '\030',
   '\000', '\010', '\000', '\012', '\200', '\030', 'A', '\375',
   '\000', '\013', 'O', '\301', '\000', '\011', '\240', '\031',
   '\341', '\031', '\300', '\034', 'O', '\311', 'o', '\325',
   '\300', '\034', '\000', '\010', '\000', '\012', '\200', '\034',
   'A', '\375', ' ', '\013', '\341', '\031', '\300', '\034',
   'o', '\311', '\300', '\217', '@', 'o', '\200', '\022',
   'o', '\343', '\341', '\216', '\300', '\217', '@', 'o',
   '\200', '\022', 'o', '\343', '\341', '\031', '\200', '\034',
   'O', '\333', 'o', '\355', '\341', '\220', '\200', '\030',
   'O', '\333', '\200', '\034', 'O', '\333', '\240', '\031',
   '\300', '\215', 'P', '\007', '`', 'g', '\241', '8',
   '\202', '1', '\240', '8', '\240', '\"', '\341', '\214',
   '\300', '\215', 'P', '\001', 'p', '\017', '\304', '\215',
   'P', '\001', 'P', '\017', 'p', '/', '\300', '\036',
   '\000', '\005', '\200', '\036', '@', 'g', 'P', '\001',
   'P', '\017', 'P', '{', 'p', '\207', '\341', '\226',
   '\300', '\213', '\000', '\005', 'P', '9', 'p', '\207',
   '\203', '#', '@', 'g', 'p', 'G', '\200', '\036',
   '@', 'g', 'P', '\017', 'p', '{', '\302', '\212',
   'p', 'S', '\200', '8', '@', 'g', 'P', 'm',
   'p', 'u', '\306', '\223', '\000', '\005', '\200', '\223',
   '@', 'g', 'P', '\001', 'p', '\017', '\204', '1',
   '\200', '8', '@', 'g', 'p', '\017', '\200', '\"',
   '@', 'g', 'p', '\017', '\341', '\211', '\200', '8',
   '@', 'g', 'p', 'm', '\341', '\210', '\300', '\212',
   'p', 'S', '\341', '\210', '\300', '#', '\000', '\005',
   '\200', '#', '@', 'g', 'p', 'G', '\341', '\226',
   '\300', '\'', '\000', '\005', '\200', '\'', '@', 'g',
   'p', '\223', '\303', '\207', '\000', '\005', 'p', '\267',
   '\204', '8', '@', 'g', 'P', 'm', 'p', '\337',
   '\206', '1', '\200', '8', '@', 'g', 'P', '\017',
   '\000', '\005', 'p', '9', '\200', '\"', '@', 'g',
   'P', '\017', '\000', '\005', 'p', '9', '\203', '\223',
   '@', 'g', 'p', '\307', '\200', '\036', '@', 'g',
   'P', '\001', 'P', '\017', 'p', '{', '\305', '\215',
   'P', '\001', 'P', '\017', '\000', '\005', 'p', '9',
   '\300', '\036', '\000', '\005', '\200', '\036', '@', 'g',
   'P', '\001', 'P', '\017', 'p', '{', '\303', '\206',
   '\000', '\005', 'p', '\373', '\206', '1', '\200', '8',
   '@', 'g', 'P', '\017', '\000', '\005', 'p', '9',
   '\200', '\"', '@', 'g', 'P', '\017', '\000', '\005',
   'p', '9', '\302', '\213', 'p', '9', '\200', '\223',
   'q', '\003', '\306', '\205', '@', 'g', 'P', '\001',
   'P', '\017', '\000', '\005', 'p', '9', '\300', '\213',
   '\000', '\005', 'p', '9', '\341', '\226', '\303', '\206',
   '\000', '\005', 'q', '/', '\205', '1', '\200', '8',
   '@', 'g', 'P', '\017', 'p', '/', '\200', '\"',
   '@', 'g', 'P', '\017', 'p', '/', '\303', '\213',
   'P', '9', 'p', '\207', '\200', '\223', 'q', '9',
   '\305', '\205', '@', 'g', 'P', '\001', 'P', '\017',
   'p', '/', '\300', '\213', '\000', '\005', 'P', '9',
   'p', '\207', '\341', '\226', '\200', '\037', '@', 'g',
   'q', 'K', '\341', '\204', '\200', '\034', '@', '_',
   'q', 'S', '\341', '\017', '\240', 'V', '\300', '\203',
   'Q', 'g', '\000', '\021', 'q', '\177', '\302', '\202',
   ' ', '\020', '\200', 'R', 'q', 'o', '\306', ' ',
   '\000', '\015', '\200', ' ', '\200', '\021', '\000', '\016',
   '\240', ' ', '\200', '!', ' ', '\017', '\341', '\201',
   '\200', 'S', '\000', '\022', '\200', ' ', 'q', '\211',
   '\341', '\201', '\200', '\034', '\000', '\023', '\000', '\022',
   '\200', 'U', 'q', '\211', '\341', ' ', '\200', '\030',
   'Q', '\235', '\240', '\031', '\300', ' ', '\000', '\012',
   '\200', ' ', 'q', '\245', '\341', '\031', '\200', '\034',
   'q', '\235', '\304', '\200', 'Q', '_', '\000', '\011',
   'q', '\303', '\200', 'Q', '\200', ' ', '\000', '\024',
   '\200', '\030', 'Q', '\325', '\200', '\031', '\000', '\032',
   ' ', '\010', '\305', '\272', '\000', '\015', 'G', 'i',
   '\000', '\003', ' ', '\013', '\200', '\030', '@', '\215',
   '\200', '\031', ' ', '\013', '\300', ' ', '\000', '\024',
   '\200', ' ', '\000', 'Z', '\200', '\320', 'Q', '\343',
   'q', '\377', '\203', 'T', '\200', ' ', ' ', '\027',
   '\200', ' ', 'q', '\355', '\302', '\216', ' ', '\025',
   '\300', '\030', '\000', '\024', '\200', '\030', 'Q', '\325',
   '\200', '\031', '\000', '\032', ' ', '\026', '\303', '\031',
   '\000', '\031', ' ', '\030', '\200', '\034', 'Q', '\325',
   ' ', '\030', '\000', '\000', '\000', '\200', '\000', '\001',
   '\370', '\000', '\002', '\000', '0', '\000', '\000', ' ',
   '\000', '\200', '\000', '\001', '\370', '\000', '\002', '\000',
   '\000', '\000', '\000', ' ', '\000', '\200', '\000', '\001',
   '\370', '\000', '\002', '\000', '\020', '\000', '\000', ' ',
   '\000', '\200', '\000', '\001', '\370', '\000', '\002', '\000',
   '0', '\000', '\000', '\000', '\000', '@', '\000', '\000',
   '\000', '\010', '\000', '\000', '\002', '\000', '\000', '\000',
   ' ', '\004', ' ', 'k', 'C', '\200', '\000', '\000',
   '\000', '\000', '\000', '\000', '\014', '\002', '\020', '\000',
   '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\014', '\002', '\000', '\000', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\000', 'H', '\001', '\000',
   '\000', '\010', '\000', '\000', '\002', '\000', '\000', '\000',
   '\014', 'J', '1', '\000', '@', '\010', '\000', '\000',
   '\002', '\000', '\000', '\000', '\014', '\000', ' ', '\000',
   '@', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\000', '\002', '\020', '\000', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\000', 'J', '\021', '\000',
   '\000', '\010', '\000', '\000', '\002', '\000', '\000', '\000',
   '\000', '\000', ' ', '\000', '@', '\200', '\000', '\000',
   '\000', '\000', '\000', '\000', '\000', 'H', '\000', '\000',
   '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   ' ', '\004', '\000', '\010', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', ' ', 'L', '\000', 'k',
   '\003', '\010', '\000', '\000', '\002', '\000', '\000', '\000',
   '\000', '@', '\020', '\000', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\000', 'B', '\020', '\000',
   '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\014', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\020', '\000', '\316', '\000',
   '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\034', '\002', '\316', '\000', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\000', 'H', '\000', '\000',
   '\000', '\010', '\000', '\000', '\002', '\000', '\000', '\000',
   ' ', '\000', '\000', 'c', '\003', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '@', '@', '\000', '\000',
   '\000', '\000', '\000', '\000', '\200', '\000', '\000', '\000',
   '\000', '@', '\000', '\000', '\000', '\000', '\000', '\000',
   '\200', '\000', '\000', '\000', '\000', 'H', '\000', '\000',
   '\000', '\000', '\000', '\000', '\200', '\000', '\000', '\000',
   '@', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\000', '\004', '\000', '\004', 'A', 'H', '\000', '\004',
   '\000', '\000', '\000', '\000', '\202', '\004', '\177', '\302',
   '\000', '\000', '\000', '\000', '\000', '\240', '\000', '\010',
   '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\000', '\000', '0', '\000', '\000', '\000', '\177', '\326',
   'A', 'H', '\000', '\005', '\000', '\001', '\000', '\000',
   '\202', '\204', '\177', '\313', '>', '\243', '\377', '\373',
   '\371', 'z', '\207', '\206', '\010', '{', '\000', '\024',
   'A', 'H', '\000', '\005', '\000', '\000', '\000', '\000',
   '\202', '\004', '\000', '\024', 'A', 'H', '\000', '\005',
   '\000', '\000', '\010', '\000', '\202', '\004', '\000', '\024',
   'A', 'H', '\000', '\005', '\000', '\001', '\010', '\000',
   '\202', '\004', '\000', ' ', '\000', '\200', '\000', '\001',
   '\370', '\002', '\002', '\000', '\000', '\000', '\000', '\000',
   '\000', '\010', '\000', '\000', '\002', '\004', '\000', '\000',
   '\000', '\000', '\000', '\002', '\000', '\001', '?', '\370',
   '\001', '0', '\204', '\200', '\000', '\023', '\000', '\000',
   '\000', '@', '\000', '\000', '\000', '\000', '\000', ' ',
   '\000', '\000', '\177', '\302', '\000', '\000', '\200', '\000',
   '\000', ' ', '\000', '\000', '\000', '\000', '\000', '\000',
   '\000', '\200', '\000', '\001', '\370', '\002', '\002', '\000',
   '\000', '\000', '\000', '\024', 'A', 'H', '\000', '\005',
   ':', '\004', '\010', '@', '\202', '\004', '@', '\024',
   'A', 'H', '\000', '\005', ':', '\005', '\010', '@',
   '\202', '\204', '`', '\024', 'A', 'H', '\000', '\005',
   ':', '\005', '\010', '@', '\202', '\204', 'p', '\024',
   'A', 'H', '\000', '\005', ':', '\005', '\010', '@',
   '\202', '\204', 'x', '\024', 'A', 'H', '\000', '\005',
   ':', '\005', '\010', '@', '\202', '\204', '|', '\024',
   'A', 'H', '\000', '\005', ':', '\005', '\010', '@',
   '\202', '\204', '~', '\024', 'A', 'H', '\000', '\005',
   ':', '\005', '\010', '@', '\202', '\204', '\177', '\024',
   'A', 'H', '\000', '\005', ':', '\005', '\010', '@',
   '\202', '\204', '\000', '\000', '@', 'H', '\000', '\004',
   '\000', '\000', '\000', '\000', '\200', '\004', '\000', '\000',
   '\000', '\000', '\000', '\001', '\010', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\001',
   '\030', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\001', '8', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\001',
   'x', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\001', '\370', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\000', '\200', '\000', '\001',
   '\370', '\000', '\002', '\000', '\000', '\000', '\177', '\326',
   'A', '\310', '\000', '\005', ':', '\025', '\010', '@',
   '\202', '\204', '\000', '\000', '\000', '\000', '\000', '\001',
   '\370', '\000', '\002', '\000', '\000', '\000', '\177', '\224',
   'A', 'H', '\000', '\005', ':', '\005', '\010', '@',
   '\202', '\204', '\177', '\302', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\024',
   'A', 'H', '\000', '\005', ':', '\005', '\010', '@',
   '\202', '\204', '\000', '\002', '\000', '\201', '\177', '\370',
   '\001', '0', '\204', '\200', '\000', '\003', '\000', '\000',
   '\000', '\010', '\000', '\000', '\000', '\004', '\000', '\000',
   '\000', '\000', '\000', ' ', '\000', '\010', '\000', '\000',
   '\000', '\004', '\000', '\000', '\000', '\000', '\000', '\002',
   '\000', '\001', '\177', '\370', '\001', '0', '\204', '\200',
   '\000', '\003', '\000', '\002', '\000', '\000', '\007', '\200',
   '\001', '\000', '\000', '\200', '\000', '\000', '\000', '\002',
   '\000', '\000', '?', '\350', '\001', '\000', '\004', '\200',
   '\000', '\003', '\377', '\377', '\377', '\377', '\177', '\377',
   '\377', '\377', '\377', '\377', '\377', '\377', '\377', '\377',
   '\377', '\367', '\377', '\377', '\377', '\377', '\377', '\377',
   '\377', '\377', '\000', '\000', '\000', '\000', '\007', '\200',
   '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\002',
   '\000', '\002', '\007', '\202', '\000', '\000', '\000', '\004',
   '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\000', '\020', '\200', '\000', '\000', '\000', '\000', '\000',
   '\000', '\000', '8', '\000', '\000', '\000', '\000', '\000',
   '\000', '\003', '\000', '\002', '\000', '\000', '\007', '\200',
   '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\001', '\000', '\000', '\200',
   '\000', '\000', '\177', '\303', '>', '\243', '\377', '\373',
   '\371', 'z', '\207', '\206', '\010', 'S', '\177', '\326',
   'A', 'H', '\000', '\005', ':', '\005', '\010', '@',
   '\202', '\204', '\000', '\000', '\000', '\000', '\000', '\001',
   '\370', '\000', '\002', '\000', '\010', '\000', '\000', '\002',
   '\000', '\001', '?', '\370', '\001', '0', '\204', '\200',
   '\000', '\003', '\177', '\300', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\000', '\002', '\000', '\002', '\000', '\000', '\000', '\004',
   '\000', '\000', '\000', '\000', '\030', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\000', '\000', 'p', '\000',
   '\000', '\000', '\177', '\303', '>', '\243', '\377', '\373',
   '\371', 'z', '\207', '\206', '\010', 's', '\177', '\303',
   '>', '\243', '\377', '\373', '\371', 'z', '\367', '\206',
   '\010', 's', '\177', '\303', '>', '\263', '\377', '\373',
   '\371', 'z', '\367', '\206', '\010', 's', '\000', '\000',
   '\000', '\004', '\000', '\010', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '<', '\313', '\377', 'c',
   'C', '\210', '\000', '\000', '\002', '\000', '\000', '\000',
   ' ', '\004', '\000', 'k', '\003', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\034', '\313', '\377', '\000',
   '@', '\210', '\000', '\000', '\002', '\000', '\000', '\000',
   '<', '\317', '\356', 'k', 'C', '\210', '\000', '\000',
   '\002', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
   '\000', '\000', '\000', '\000', '\003', '\000' 
} ; 
A_GISVEC(A68_VC ,VEBACTR,UEBACTR,5734)
#define XEBACTR_sidbwd 4619
#define YEBACTR_boolwdsize 4
#define ZEBACTR_sidstackstep 1000
#define OIBACTR_booland 65
#define PIBACTR_boolor 81
#define QIBACTR_minplus 337
#define RIBACTR_maxdiv 418
static A68_167   IJBACTR = {"**(S)** "}; 
A_GISVEC(A68_VC ,KJBACTR,IJBACTR,8)
#define NKBACTR_stringonly 1
#define OKBACTR_space 2
#define PKBACTR_letter 3
#define QKBACTR_digit 4
#define RKBACTR_stringquote 5
#define SKBACTR_openstrop 7
#define TKBACTR_matchstrop 8
#define UKBACTR_simple 20
#define VKBACTR_compstart 21
#define WKBACTR_compound 22
#define XKBACTR_compterm 23
static A68_168   SLBACTR = {"020400080a00000g"}; 
A_GISVEC(A68_VC ,ULBACTR,SLBACTR,16)
static A68_181   EDCACTR = {", "}; 
A_GISVEC(A68_VC ,FDCACTR,EDCACTR,2)
static A68_181   JDCACTR = {", "}; 
A_GISVEC(A68_VC ,KDCACTR,JDCACTR,2)
static A68_181   QDCACTR = {", "}; 
A_GISVEC(A68_VC ,RDCACTR,QDCACTR,2)
static A68_182   LECACTR = {"ILLEGAL MODE "}; 
A_GISVEC(A68_VC ,MECACTR,LECACTR,13)
static A68_181   XQCACTR = {"a1"}; 
A_GISVEC(A68_VC ,ZQCACTR,XQCACTR,2)
static A68_167   WRCACTR = {"STR-PROC"}; 
A_GISVEC(A68_VC ,XRCACTR,WRCACTR,8)
static A68_33   FSCACTR = {"STRPROC"}; 
A_GISVEC(A68_VC ,GSCACTR,FSCACTR,7)
#define ISCACTR_all 10
#define VNDACTR_genam 1
#define WNDACTR_decam 2
#define DIFACTR_checkt1 A68_FALSE
#define EIFACTR_notcheckt1 A68_TRUE
static A68_235   AJFACTR = {"  INSERTED"}; 
A_GISVEC(A68_VC ,BJFACTR,AJFACTR,10)
static A68_235   DJFACTR = {"  IGNORED1"}; 
A_GISVEC(A68_VC ,EJFACTR,DJFACTR,10)
static A68_236   FKFACTR = {"COLLECTIONLIST CALLED"}; 
A_GISVEC(A68_VC ,GKFACTR,FKFACTR,21)
static A68_237   IKFACTR = {"END OF COLLECTIONLIST CALL"}; 
A_GISVEC(A68_VC ,JKFACTR,IKFACTR,26)
static A68_238   KKFACTR = {"DUCLIST CALLED"}; 
A_GISVEC(A68_VC ,LKFACTR,KKFACTR,14)
static A68_239   NKFACTR = {"END OF DUCLIST CALL"}; 
A_GISVEC(A68_VC ,OKFACTR,NKFACTR,19)
static A68_238   WKFACTR = {"EXIT OF FORMAT"}; 
A_GISVEC(A68_VC ,XKFACTR,WKFACTR,14)
static A68_235   KLFACTR = {"EXIT OF SC"}; 
A_GISVEC(A68_VC ,LLFACTR,KLFACTR,10)
typedef struct   /* env of non-global proc */
{
int dummy;
} ESAACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} XSAACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_137  Message;
} MTAACTR_idmess;
typedef struct   /* env of non-global proc */
{
int dummy;
} HUAACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} QUAACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} XUAACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BABACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} JABACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} QBBACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * AFBACTR_upbofsidstack;
} EFBACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * LFBACTR_failpos;
A68_VC  WEBACTR_sidcode;
A68_INT * KFBACTR_crts;
A68_100 * HFBACTR_sidstack;
A68_INT * JFBACTR_stind;
A68_INT * AFBACTR_upbofsidstack;
A68_INT * MFBACTR_t1;
A68_INT  OFBACTR_boolwds3;
A_PAD_INT(PAD_173)
A68_INT  NFBACTR_sidbwdm;
A_PAD_INT(PAD_174)
} RFBACTR_analyser;
typedef struct   /* env of non-global proc */
{
A68_INT * LFBACTR_failpos;
A68_INT * JFBACTR_stind;
A68_VC  WEBACTR_sidcode;
A68_100 * HFBACTR_sidstack;
A68_INT  OFBACTR_boolwds3;
A_PAD_INT(PAD_175)
A68_INT  NFBACTR_sidbwdm;
A_PAD_INT(PAD_176)
A68_INT * MFBACTR_t1;
} YGBACTR_checkinsert;
typedef struct   /* env of non-global proc */
{
A68_INT * LSAACTR_tind;
A68_VC  HSAACTR_textbuff;
A68_INT * ITAACTR_supflts;
A68_136  Flt;
A68_INT * EEBACTR_noflts;
A68_150 * MBBACTR_abort1;
A68_BOOL * GEBACTR_fulldiags;
} WIBACTR_faultchars;
typedef struct   /* env of non-global proc */
{
A68_47  UIBACTR_faultchars;
A68_137  Message;
} SJBACTR_fault;
typedef struct   /* env of non-global proc */
{
A68_INT * ITAACTR_supflts;
A68_150  QJBACTR_fault;
A68_INT * MSAACTR_textend;
A68_BOOL * SIBACTR_moreinput;
A68_134  Input;
A68_VC  LBBACTR_textbuff1;
A68_jmp_buf  VRAACTR_endcompile2;
A_PAD_jmp_buf(PAD_177)
} XJBACTR_abort;
typedef struct   /* env of non-global proc */
{
A68_VC  HSAACTR_textbuff;
A68_INT * LSAACTR_tind;
A68_142  Charset;
A68_150  QJBACTR_fault;
A68_INT * MSAACTR_textend;
A68_INT * SSAACTR_idsize;
A68_INT * TSAACTR_idhash;
A68_31 * PSAACTR_ident;
A68_31  XTAACTR_spaces;
A_PAD_ISTRUCT(A68_31 ,PAD_178)
A68_BOOL * ZRAACTR_isint;
A68_INT * ETAACTR_stringsize;
A68_INT * HTAACTR_iv;
A68_VC  ATAACTR_string;
A68_INT * FTAACTR_noofchars;
A68_INT * ITAACTR_supflts;
A68_INT * GTAACTR_stringbase;
A68_INT * QSAACTR_compsize;
A68_INT * RSAACTR_comphash;
A68_31 * OSAACTR_compsymb;
A68_INT * BUAACTR_typechar1;
A68_140  Lookup;
A68_BOOL * HBBACTR_incom;
} BKBACTR_primread;
typedef struct   /* env of non-global proc */
{
A68_VC  HSAACTR_textbuff;
A68_INT * LSAACTR_tind;
A68_142  Charset;
A68_VC  JSAACTR_globfbuff;
A68_INT * NSAACTR_find;
A68_150  QJBACTR_fault;
A68_INT * MSAACTR_textend;
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_INT * IBBACTR_noofstrings;
A68_159  ZJBACTR_primread;
A68_INT * QSAACTR_compsize;
} EPBACTR_fprimread;
typedef struct   /* env of non-global proc */
{
A68_INT  YYAACTR_newmode1;
A_PAD_INT(PAD_179)
A68_INT * VYAACTR_lastmode;
A68_107  KUAACTR_modes;
A68_150  VJBACTR_abort;
} TRBACTR_insertprocp;
typedef struct   /* env of non-global proc */
{
A68_INT  YYAACTR_newmode1;
A_PAD_INT(PAD_180)
A68_INT * VYAACTR_lastmode;
A68_107  KUAACTR_modes;
A68_150  VJBACTR_abort;
} QSBACTR_insertunion;
typedef struct   /* env of non-global proc */
{
A68_INT * VYAACTR_lastmode;
A68_107  KUAACTR_modes;
A68_150  VJBACTR_abort;
} NTBACTR_insertstrct;
typedef struct   /* env of non-global proc */
{
A68_INT  YYAACTR_newmode1;
A_PAD_INT(PAD_181)
A68_INT * VYAACTR_lastmode;
A68_107  KUAACTR_modes;
A68_150  VJBACTR_abort;
} NUBACTR_insertprc;
typedef struct   /* env of non-global proc */
{
A68_INT * VYAACTR_lastmode;
A68_107  KUAACTR_modes;
A68_150  VJBACTR_abort;
} HVBACTR_insertarray;
typedef struct   /* env of non-global proc */
{
A68_INT * VYAACTR_lastmode;
A68_107  KUAACTR_modes;
A68_150  VJBACTR_abort;
} BWBACTR_insertvec;
typedef struct   /* env of non-global proc */
{
A68_INT  YYAACTR_newmode1;
A_PAD_INT(PAD_182)
A68_INT * VYAACTR_lastmode;
A68_107  KUAACTR_modes;
A68_150  VJBACTR_abort;
} VWBACTR_insertis;
typedef struct   /* env of non-global proc */
{
A68_169  RRBACTR_insertprocp;
} NXBACTR_insertassmntproc;
typedef struct   /* env of non-global proc */
{
A68_169  RRBACTR_insertprocp;
} WXBACTR_opproc;
typedef struct   /* env of non-global proc */
{
A68_176  NYBACTR_heapvalue;
} PYBACTR_heapvalue;
typedef struct   /* env of non-global proc */
{
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_176  VYBACTR_downandups;
} XYBACTR_downandups;
typedef struct   /* env of non-global proc */
{
A68_126 ** QYAACTR_globcurrent;
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_176  VYBACTR_downandups;
} DZBACTR_tidyv;
typedef struct   /* env of non-global proc */
{
A68_137  Message;
A68_107  NYAACTR_initmodes;
A68_126 ** QYAACTR_globcurrent;
A68_128  MABACTR_libinds;
A68_107  KUAACTR_modes;
A68_47  UIBACTR_faultchars;
} RZBACTR_faultp;
typedef struct   /* env of non-global proc */
{
A68_172  VECACTR_marker;
A68_107  KUAACTR_modes;
} XECACTR_marker;
typedef struct   /* env of non-global proc */
{
A68_172  VECACTR_marker;
A68_107  KUAACTR_modes;
} BGCACTR_assmarker;
typedef struct   /* env of non-global proc */
{
A68_107  KUAACTR_modes;
A68_172  JGCACTR_deflex;
A68_173  FVBACTR_insertarray;
A68_174  ZVBACTR_insertvec;
A68_174  TWBACTR_insertis;
A68_171  LTBACTR_insertstrct;
} LGCACTR_deflex;
typedef struct   /* env of non-global proc */
{
A68_172  VECACTR_marker;
A68_172  JGCACTR_deflex;
A68_107  KUAACTR_modes;
A68_172  ZHCACTR_enflex;
A68_173  FVBACTR_insertarray;
A68_174  ZVBACTR_insertvec;
A68_174  TWBACTR_insertis;
A68_171  LTBACTR_insertstrct;
} BICACTR_enflex;
typedef struct   /* env of non-global proc */
{
A68_169  RRBACTR_insertprocp;
A68_172  JGCACTR_deflex;
A68_54 * YVAACTR_boolnil;
} BJCACTR_mproc;
typedef struct   /* env of non-global proc */
{
A68_172  JGCACTR_deflex;
A68_135  Output;
A68_INT * FZAACTR_outlevel;
} GJCACTR_deref;
typedef struct   /* env of non-global proc */
{
A68_107  KUAACTR_modes;
A68_BOOL * XZAACTR_burestrict;
A68_150  QJBACTR_fault;
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_172  VECACTR_marker;
A68_126 ** QYAACTR_globcurrent;
} NJCACTR_deproc;
typedef struct   /* env of non-global proc */
{
A68_107  KUAACTR_modes;
A68_172  JGCACTR_deflex;
} ZJCACTR_pmode;
typedef struct   /* env of non-global proc */
{
A68_BOOL * GKCACTR_deprefable;
A68_176  EJCACTR_deref;
A68_172  JGCACTR_deflex;
A68_107  KUAACTR_modes;
A68_176  LJCACTR_deproc;
} OKCACTR_depref;
typedef struct   /* env of non-global proc */
{
A68_107  KUAACTR_modes;
} ZKCACTR_weakmode;
typedef struct   /* env of non-global proc */
{
A68_107  KUAACTR_modes;
A68_184 * HKCACTR_coerce1;
A68_178  PZBACTR_faultp;
} OLCACTR_unite;
typedef struct   /* env of non-global proc */
{
A68_107  KUAACTR_modes;
A68_174  ZVBACTR_insertvec;
A68_173  FVBACTR_insertarray;
} AMCACTR_makeflex;
typedef struct   /* env of non-global proc */
{
A68_107  KUAACTR_modes;
} JMCACTR_strbd;
typedef struct   /* env of non-global proc */
{
A68_126 ** QYAACTR_globcurrent;
A68_176  EJCACTR_deref;
A68_184 * HKCACTR_coerce1;
A68_BOOL * GKCACTR_deprefable;
A68_107  KUAACTR_modes;
A68_BOOL * GBBACTR_lastidchanged;
A68_169  RRBACTR_insertprocp;
A68_144  KTAACTR_idmess;
A68_INT * CZAACTR_lastrd;
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_31  BZAACTR_nullid;
A_PAD_ISTRUCT(A68_31 ,PAD_188)
A68_174  ZVBACTR_insertvec;
A68_172  JGCACTR_deflex;
A68_VC  ATAACTR_string;
A68_172  YLCACTR_makeflex;
A68_47  UIBACTR_faultchars;
A68_INT * GZAACTR_maxident;
} ANCACTR_strproc;
typedef struct   /* env of non-global proc */
{
A68_107  KUAACTR_modes;
A68_172  XKCACTR_weakmode;
A68_184  OSCACTR_coerce;
A68_172  HMCACTR_strbd;
A68_185  MKCACTR_depref;
A68_172  XJCACTR_pmode;
A68_172  YLCACTR_makeflex;
A68_174  ZVBACTR_insertvec;
A68_187  YMCACTR_strproc;
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_172  JGCACTR_deflex;
A68_186  MLCACTR_unite;
A68_178  PZBACTR_faultp;
A68_172  VECACTR_marker;
A68_126 ** QYAACTR_globcurrent;
} QSCACTR_coerce;
typedef struct   /* env of non-global proc */
{
A68_184  OSCACTR_coerce;
A68_172  JGCACTR_deflex;
A68_107  KUAACTR_modes;
A68_189  QWCACTR_hcfoftwo;
A68_172  XJCACTR_pmode;
} SWCACTR_hcfoftwo;
typedef struct   /* env of non-global proc */
{
A68_190  CXCACTR_hcf;
A68_189  QWCACTR_hcfoftwo;
} EXCACTR_hcf;
typedef struct   /* env of non-global proc */
{
A68_184  OSCACTR_coerce;
A68_191  MXCACTR_firmto;
} OXCACTR_firmto;
typedef struct   /* env of non-global proc */
{
A68_172  XJCACTR_pmode;
A68_107  KUAACTR_modes;
A68_174  TWBACTR_insertis;
A68_192  BYCACTR_ismode;
} DYCACTR_ismode;
typedef struct   /* env of non-global proc */
{
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_184  OSCACTR_coerce;
A68_193  RYCACTR_strong;
A68_107  KUAACTR_modes;
A68_192  BYCACTR_ismode;
A68_178  PZBACTR_faultp;
} TYCACTR_strong;
typedef struct   /* env of non-global proc */
{
A68_193  RYCACTR_strong;
A68_172  XKCACTR_weakmode;
A68_190  CXCACTR_hcf;
} QBDACTR_weak;
typedef struct   /* env of non-global proc */
{
A68_172  XJCACTR_pmode;
A68_165  NIBACTR_monops;
A68_107  KUAACTR_modes;
A68_174  ZVBACTR_insertvec;
A68_162  KIBACTR_diops;
A68_189  QWCACTR_hcfoftwo;
A68_184  OSCACTR_coerce;
A68_172  YLCACTR_makeflex;
A68_172  XKCACTR_weakmode;
} XBDACTR_findbiop;
typedef struct   /* env of non-global proc */
{
A68_INT * LSAACTR_tind;
A68_INT * MSAACTR_textend;
A68_135  Output;
A68_VC  HSAACTR_textbuff;
A68_INT * FZAACTR_outlevel;
A68_134  Input;
A68_VC  LBBACTR_textbuff1;
A68_BOOL * SIBACTR_moreinput;
A68_150  VJBACTR_abort;
A68_142  Charset;
A68_159  ZJBACTR_primread;
A68_150  EEDACTR_readcom;
A68_150  QJBACTR_fault;
} GEDACTR_readcom;
typedef struct   /* env of non-global proc */
{
A68_INT * AEBACTR_lkinserts;
A68_INT * BEBACTR_lkmodeins;
A68_133 ** YDBACTR_lkids;
A68_31 * PSAACTR_ident;
A68_INT * TSAACTR_idhash;
A68_INT * SSAACTR_idsize;
A68_133 *** ZDBACTR_lkend;
} IFDACTR_unlook;
typedef struct   /* env of non-global proc */
{
A68_INT * EEBACTR_noflts;
A68_INT * ODBACTR_next;
A68_INT * ITAACTR_supflts;
A68_INT * AEBACTR_lkinserts;
A68_159  CPBACTR_fprimread;
A68_159  ZJBACTR_primread;
A68_134  Input;
A68_VC  LBBACTR_textbuff1;
A68_INT * MSAACTR_textend;
A68_INT * JBBACTR_oldtind;
A68_INT * LSAACTR_tind;
A68_VC  HSAACTR_textbuff;
A68_BOOL * SIBACTR_moreinput;
A68_150  VJBACTR_abort;
A68_INT * MFBACTR_t1;
A68_126 ** QYAACTR_globcurrent;
A68_INT * RSAACTR_comphash;
A68_110 ** KDBACTR_cindic;
A68_108 ** LDBACTR_cinst;
A68_INT * MDBACTR_cbiop;
A68_BOOL * NDBACTR_clibop;
A68_31 * OSAACTR_compsymb;
A68_52 ** JDBACTR_decmode;
A68_162  KIBACTR_diops;
A68_INT * QDBACTR_look;
A68_128  MABACTR_libinds;
A68_196 * FFDACTR_bumodule;
A68_INT * BUAACTR_typechar1;
A68_178  PZBACTR_faultp;
A68_INT * PDBACTR_bangtype;
A68_100  TBBACTR_brackets;
A68_INT * VBBACTR_brind;
A68_BOOL * HEBACTR_inprogram;
A68_150  QJBACTR_fault;
A68_INT * YBBACTR_wronglevel;
A68_INT * WBBACTR_wrongord;
A68_INT * XBBACTR_wrongcrd;
A68_144  KTAACTR_idmess;
A68_BOOL * HBBACTR_incom;
A68_150  EEDACTR_readcom;
A68_135  Output;
A68_INT * NSAACTR_find;
A68_VC  JSAACTR_globfbuff;
A68_INT * FZAACTR_outlevel;
A68_INT * IBBACTR_noofstrings;
A68_159  GFDACTR_unlook;
} NFDACTR_reader;
typedef struct   /* env of non-global proc */
{
int dummy;
} THDACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_107  KUAACTR_modes;
A68_INT * PHDACTR_last_flex;
A68_198 * WHDACTR_test_flex;
} DIDACTR_equality;
typedef struct   /* env of non-global proc */
{
A68_201  PLDACTR_mcond;
A68_107  KUAACTR_modes;
} RLDACTR_mcond;
typedef struct   /* env of non-global proc */
{
A68_202  OMDACTR_dynamic;
} QMDACTR_dynamic;
typedef struct   /* env of non-global proc */
{
A68_150  QJBACTR_fault;
A68_107  KUAACTR_modes;
A68_203  YMDACTR_testkept;
} ANDACTR_testkept;
typedef struct   /* env of non-global proc */
{
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_172  ZICACTR_mproc;
} AODACTR_loadmodeproc;
typedef struct   /* env of non-global proc */
{
A68_202  OMDACTR_dynamic;
A68_205  YNDACTR_loadmodeproc;
A68_126 ** QYAACTR_globcurrent;
A68_BOOL * GBBACTR_lastidchanged;
A68_144  KTAACTR_idmess;
A68_172  ZICACTR_mproc;
A68_INT * CZAACTR_lastrd;
A68_31  BZAACTR_nullid;
A_PAD_ISTRUCT(A68_31 ,PAD_191)
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_172  JGCACTR_deflex;
A68_172  ZHCACTR_enflex;
A68_INT * GZAACTR_maxident;
A68_107  KUAACTR_modes;
A68_206  LODACTR_treatam;
A68_174  ZVBACTR_insertvec;
} NODACTR_treatam;
typedef struct   /* env of non-global proc */
{
A68_126 ** QYAACTR_globcurrent;
A68_202  OMDACTR_dynamic;
A68_31  BZAACTR_nullid;
A_PAD_ISTRUCT(A68_31 ,PAD_193)
A68_172  ZICACTR_mproc;
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_206  LODACTR_treatam;
} DTDACTR_modevars;
typedef struct   /* env of non-global proc */
{
A68_172  JGCACTR_deflex;
A68_INT * VYAACTR_lastmode;
A68_107  KUAACTR_modes;
A68_53 ** TYAACTR_untreated;
} KUDACTR_substitute;
typedef struct   /* env of non-global proc */
{
A68_201  PLDACTR_mcond;
A68_178  PZBACTR_faultp;
A68_209  IUDACTR_substitute;
A68_INT  YYAACTR_newmode1;
A_PAD_INT(PAD_198)
A68_53 ** TYAACTR_untreated;
} XVDACTR_checkmodes;
typedef struct   /* env of non-global proc */
{
A68_107  KUAACTR_modes;
A68_178  PZBACTR_faultp;
A68_212  HWDACTR_flattenunion;
} JWDACTR_flattenunion;
typedef struct   /* env of non-global proc */
{
A68_209  IUDACTR_substitute;
} NXDACTR_accidental_eqs;
typedef struct   /* env of non-global proc */
{
A68_126 ** QYAACTR_globcurrent;
A68_172  ZFCACTR_assmarker;
A68_150  QJBACTR_fault;
A68_172  JGCACTR_deflex;
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_BOOL * GBBACTR_lastidchanged;
A68_144  KTAACTR_idmess;
A68_172  LXBACTR_insertassmntproc;
A68_INT * CZAACTR_lastrd;
A68_31  BZAACTR_nullid;
A_PAD_ISTRUCT(A68_31 ,PAD_206)
A68_107  KUAACTR_modes;
A68_172  VECACTR_marker;
A68_150  VCEACTR_assign;
A68_172  ZHCACTR_enflex;
A68_174  ZVBACTR_insertvec;
A68_173  FVBACTR_insertarray;
A68_INT * GZAACTR_maxident;
} XCEACTR_assign;
typedef struct   /* env of non-global proc */
{
A68_114 ** IZAACTR_prl;
A68_178  PZBACTR_faultp;
} TJEACTR_findproxy;
typedef struct   /* env of non-global proc */
{
A68_INT * VYAACTR_lastmode;
A68_31  XTAACTR_spaces;
A_PAD_ISTRUCT(A68_31 ,PAD_209)
A68_107  KUAACTR_modes;
A68_172  JGCACTR_deflex;
A68_INT  DKEACTR_maxchar2;
A_PAD_INT(PAD_211)
A68_172  ZICACTR_mproc;
A68_175  UXBACTR_opproc;
A68_INT  YYAACTR_newmode1;
A_PAD_INT(PAD_212)
A68_200  BIDACTR_equality;
A68_198 * WHDACTR_test_flex;
A68_INT * PHDACTR_last_flex;
A68_135  Output;
A68_INT * TZAACTR_modulelevel;
} MKEACTR_simplespec;
typedef struct   /* env of non-global proc */
{
A68_139  Givespec;
A68_135  Output;
A68_INT * TZAACTR_modulelevel;
A68_112 ** RABACTR_concheck;
A68_126 ** QYAACTR_globcurrent;
A68_178  PZBACTR_faultp;
A68_138  Givemoduledetails;
A68_225  WTEACTR_treatspec;
A68_31  BZAACTR_nullid;
A_PAD_ISTRUCT(A68_31 ,PAD_213)
A68_220  KKEACTR_simplespec;
} YTEACTR_treatspec;
typedef struct   /* env of non-global proc */
{
A68_138  Givemoduledetails;
A68_INT * UZAACTR_nextmodule;
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_178  PZBACTR_faultp;
A68_139  Givespec;
A68_227  HVEACTR_closure;
} JVEACTR_closure;
typedef struct   /* env of non-global proc */
{
A68_INT * QSAACTR_compsize;
A68_122 ** GYEACTR_mdone;
A68_INT  YYAACTR_newmode1;
A_PAD_INT(PAD_219)
A68_122 ** HYEACTR_kmfree;
A68_107  KUAACTR_modes;
A68_INT  DKEACTR_maxchar2;
A_PAD_INT(PAD_221)
A68_169  RRBACTR_insertprocp;
A68_54 * YVAACTR_boolnil;
A68_175  UXBACTR_opproc;
} PYEACTR_makekeepinfo;
typedef struct   /* env of non-global proc */
{
A68_121 ** LZAACTR_kl;
A68_150  QJBACTR_fault;
A68_121 *** MZAACTR_rkl;
} ZCFACTR_addtokl;
typedef struct   /* env of non-global proc */
{
A68_138  Givemoduledetails;
A68_112 ** RABACTR_concheck;
A68_178  PZBACTR_faultp;
A68_INT * TZAACTR_modulelevel;
A68_135  Output;
A68_INT * UZAACTR_nextmodule;
A68_139  Givespec;
A68_220  KKEACTR_simplespec;
A68_126 ** QYAACTR_globcurrent;
A68_127  EABACTR_libids;
A68_128  MABACTR_libinds;
A68_INT * VZAACTR_nextlibno;
} UDFACTR_anonymous;
typedef struct   /* env of non-global proc */
{
A68_126 ** QYAACTR_globcurrent;
A68_INT * TSAACTR_idhash;
A68_31 * PSAACTR_ident;
A68_127  EABACTR_libids;
A68_196 * FFDACTR_bumodule;
A68_INT * ITAACTR_supflts;
A68_178  PZBACTR_faultp;
} LEFACTR_findid;
typedef struct   /* env of non-global proc */
{
A68_126 ** QYAACTR_globcurrent;
A68_INT * JFBACTR_stind;
A68_INT * VBBACTR_brind;
A68_INT * SYAACTR_modedecdepth;
A68_INT * ITAACTR_supflts;
A68_152 * JEBACTR_insertsn;
A68_153 * LEBACTR_ignorablen;
A68_154 * NEBACTR_nonducstart;
A68_155 * PEBACTR_insertsf;
A68_156 * REBACTR_ignorablef;
A68_157 * TEBACTR_nonpicstart;
A68_160  WGBACTR_checkinsert;
A68_INT * MFBACTR_t1;
A68_150  VJBACTR_abort;
A68_INT * WDBACTR_recoverdepth;
A68_47  UIBACTR_faultchars;
A68_172  LFDACTR_reader;
A68_INT * KFBACTR_crts;
A68_INT * LFBACTR_failpos;
A68_INT * ODBACTR_next;
A68_31 * PSAACTR_ident;
A68_31  XTAACTR_spaces;
A_PAD_ISTRUCT(A68_31 ,PAD_223)
A68_100 * HFBACTR_sidstack;
A68_INT * QDBACTR_look;
A68_232  GFFACTR_range;
A68_INT * LSAACTR_tind;
A68_159  PFBACTR_analyser;
A68_INT * JBBACTR_oldtind;
A68_150  QJBACTR_fault;
A68_173  FVBACTR_insertarray;
A68_178  PZBACTR_faultp;
A68_171  LTBACTR_insertstrct;
A68_52 ** JDBACTR_decmode;
A68_INT * HTAACTR_iv;
A68_174  TWBACTR_insertis;
A68_174  ZVBACTR_insertvec;
A68_172  YLCACTR_makeflex;
A68_172  LUBACTR_insertprc;
A68_172  JGCACTR_deflex;
A68_170  OSBACTR_insertunion;
A68_169  RRBACTR_insertprocp;
A68_107  KUAACTR_modes;
A68_INT * ZYAACTR_nolongs;
A68_INT  YYAACTR_newmode1;
A_PAD_INT(PAD_226)
A68_INT * VYAACTR_lastmode;
A68_INT * FZAACTR_outlevel;
A68_BOOL * GBBACTR_lastidchanged;
A68_135  Output;
A68_31  BZAACTR_nullid;
A_PAD_ISTRUCT(A68_31 ,PAD_228)
A68_INT * GZAACTR_maxident;
A68_110 ** KDBACTR_cindic;
A68_206  LODACTR_treatam;
A68_INT * BEBACTR_lkmodeins;
A68_INT * AEBACTR_lkinserts;
A68_133 *** ZDBACTR_lkend;
A68_INT * SSAACTR_idsize;
A68_INT * TSAACTR_idhash;
A68_52 * DEBACTR_lkscam;
A68_INT * CEBACTR_lktype;
A68_INT * NSAACTR_find;
A68_VC  JSAACTR_globfbuff;
A68_INT * IBBACTR_noofstrings;
A68_193  RYCACTR_strong;
A68_INT * OYAACTR_formatunion;
A68_176  NYBACTR_heapvalue;
A68_INT * EZAACTR_rdmode;
A68_159  ZJBACTR_primread;
A68_172  XJCACTR_pmode;
A68_190  CXCACTR_hcf;
A68_100  TBBACTR_brackets;
A68_INT * AZAACTR_globccmode;
A68_31 * GDBACTR_id1;
A68_144  KTAACTR_idmess;
A68_INT * PDBACTR_bangtype;
A68_231  JEFACTR_findid;
A68_BOOL * XZAACTR_burestrict;
A68_INT * WZAACTR_lastkept;
A68_203  YMDACTR_testkept;
A68_172  ZICACTR_mproc;
A68_INT * DZAACTR_labno;
A68_172  VECACTR_marker;
A68_VC  CTAACTR_str;
A68_INT * ETAACTR_stringsize;
A68_VC  ATAACTR_string;
A68_INT * FTAACTR_noofchars;
A68_INT * HDBACTR_strsize;
A68_INT * IDBACTR_strbase;
A68_INT * GTAACTR_stringbase;
A68_CHAR * DUAACTR_string1;
A68_BOOL * ZRAACTR_isint;
A68_INT * MDBACTR_cbiop;
A68_31 * OSAACTR_compsymb;
A68_INT * RSAACTR_comphash;
A68_108 ** LDBACTR_cinst;
A68_BOOL * NDBACTR_clibop;
A68_191  MXCACTR_firmto;
A68_195  VBDACTR_findbiop;
A68_128  MABACTR_libinds;
A68_142  Charset;
A68_196 * FFDACTR_bumodule;
A68_175  UXBACTR_opproc;
A68_172  ZFCACTR_assmarker;
A68_150  VCEACTR_assign;
A68_176  OBDACTR_weak;
A68_184  OSCACTR_coerce;
A68_176  EJCACTR_deref;
A68_125 * RYAACTR_enqv;
A68_INT * XDBACTR_nscreader;
A68_91 * HZAACTR_xm;
A68_138  Givemoduledetails;
A68_118 ** KZAACTR_close;
A68_INT * SZAACTR_moduleno;
A68_227  HVEACTR_closure;
A68_INT * UZAACTR_nextmodule;
A68_BOOL * HEBACTR_inprogram;
A68_INT * CZAACTR_lastrd;
A68_INT * VZAACTR_nextlibno;
A68_114 ** JZAACTR_tempprl;
A68_114 ** IZAACTR_prl;
A68_229  NYEACTR_makekeepinfo;
A68_121 ** LZAACTR_kl;
A68_INT * QSAACTR_compsize;
A68_126 * BVAACTR_globinfo;
A68_225  WTEACTR_treatspec;
A68_INT * TZAACTR_modulelevel;
A68_116 ** QZAACTR_testsubst;
A68_116 ** NZAACTR_substack;
A68_INT * RZAACTR_substlevel;
A68_219  RJEACTR_findproxy;
A68_116 ** PZAACTR_tsubst;
A68_116 ** OZAACTR_sublist;
A68_230  XCFACTR_addtokl;
A68_121 *** MZAACTR_rkl;
A68_INT * BUAACTR_typechar1;
A68_53 ** TYAACTR_untreated;
A68_209  IUDACTR_substitute;
A68_212  HWDACTR_flattenunion;
A68_214  LXDACTR_accidental_eqs;
A68_200  BIDACTR_equality;
A68_198 * WHDACTR_test_flex;
A68_INT * PHDACTR_last_flex;
A68_208  VVDACTR_checkmodes;
A68_208  BTDACTR_modevars;
A68_176  BZBACTR_tidyv;
A68_31  AUAACTR_identformat;
A_PAD_ISTRUCT(A68_31 ,PAD_232)
A68_186  MLCACTR_unite;
A68_205  YNDACTR_loadmodeproc;
A68_INT * PYAACTR_formatproc;
A68_jmp_buf  XRAACTR_endcompile;
A_PAD_jmp_buf(PAD_233)
} IFFACTR_range;
typedef struct   /* env of non-global proc */
{
A68_INT * AFBACTR_upbofsidstack;
} DGBACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} KHBACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Mess;
} DJBACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ZZBACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * EACACTR_mind;
A68_VC  CACACTR_m;
A68_jmp_buf  SZBACTR_endf;
A_PAD_jmp_buf(PAD_183)
} KACACTR_outid;
typedef struct   /* env of non-global proc */
{
A68_INT * EACACTR_mind;
A68_VC  CACACTR_m;
A68_jmp_buf  SZBACTR_endf;
A_PAD_jmp_buf(PAD_184)
} WACACTR_outboldid;
typedef struct   /* env of non-global proc */
{
A68_VC  CACACTR_m;
A68_INT * EACACTR_mind;
} KBCACTR_outchars;
typedef struct   /* env of non-global proc */
{
A68_137  Message;
A68_VC  CACACTR_m;
A68_INT * EACACTR_mind;
} RBCACTR_outmess;
typedef struct   /* env of non-global proc */
{
A68_150  YBCACTR_outint;
A68_VC  CACACTR_m;
A68_INT * EACACTR_mind;
} ACCACTR_outint;
typedef struct   /* env of non-global proc */
{
A68_VC  CACACTR_m;
A68_INT * EACACTR_mind;
A68_107  NYAACTR_initmodes;
A68_126 ** QYAACTR_globcurrent;
A68_128  MABACTR_libinds;
A68_179  UACACTR_outboldid;
A68_150  PBCACTR_outmess;
A68_180  JCCACTR_outmode;
A68_107  KUAACTR_modes;
A68_jmp_buf  SZBACTR_endf;
A_PAD_jmp_buf(PAD_185)
A68_47  IBCACTR_outchars;
A68_179  IACACTR_outid;
A68_150  YBCACTR_outint;
} LCCACTR_outmode;
typedef struct   /* env of non-global proc */
{
A68_172  VECACTR_marker;
} DFCACTR_state;
typedef struct   /* env of non-global proc */
{
A68_INT  Oldf;
A_PAD_INT(PAD_186)
A68_BOOL  Code;
A_PAD_BOOL(PAD_187)
A68_176  EJCACTR_deref;
A68_184 * HKCACTR_coerce1;
A68_INT * ENCACTR_p;
} WNCACTR_strcoerce;
typedef struct   /* env of non-global proc */
{
A68_135  Output;
A68_INT * DZCACTR_qneg;
A68_BITS * AZCACTR_qdontpull;
A68_INT * WYCACTR_n;
A68_INT * FZAACTR_outlevel;
A68_193  RYCACTR_strong;
A68_BITS * ZYCACTR_ans;
} WZCACTR_elem;
typedef struct   /* env of non-global proc */
{
A68_jmp_buf  FIDACTR_exit;
A_PAD_jmp_buf(PAD_189)
A68_INT  Lastdone;
A_PAD_INT(PAD_190)
A68_107  KUAACTR_modes;
A68_INT * PHDACTR_last_flex;
A68_198 * WHDACTR_test_flex;
} MIDACTR_f;
typedef struct   /* env of non-global proc */
{
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_205  YNDACTR_loadmodeproc;
A68_67 * FPDACTR_loc;
A68_172  ZICACTR_mproc;
A68_172  JGCACTR_deflex;
A68_172  ZHCACTR_enflex;
A68_INT * VODACTR_lastid;
A68_INT * GZAACTR_maxident;
} JPDACTR_assigngen;
typedef struct   /* env of non-global proc */
{
A68_31  BZAACTR_nullid;
A_PAD_ISTRUCT(A68_31 ,PAD_192)
A68_INT * VODACTR_lastid;
A68_107  KUAACTR_modes;
A68_172  ZHCACTR_enflex;
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_205  HPDACTR_assigngen;
A68_207  XPDACTR_assignarr;
} ZPDACTR_assignarr;
typedef struct   /* env of non-global proc */
{
A68_208  TUDACTR_subam;
A68_INT  J;
A_PAD_INT(PAD_194)
A68_INT  LUDACTR_m;
A_PAD_INT(PAD_195)
} VUDACTR_subam;
typedef struct   /* env of non-global proc */
{
A68_INT  J;
A_PAD_INT(PAD_196)
A68_INT  I;
A_PAD_INT(PAD_197)
} CVDACTR_subd;
typedef struct   /* env of non-global proc */
{
A68_100  Done;
} YWDACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  PXDACTR_l;
A_PAD_INT(PAD_199)
A68_INT  OXDACTR_u;
A_PAD_INT(PAD_200)
} TXDACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  PXDACTR_l;
A_PAD_INT(PAD_201)
A68_INT  OXDACTR_u;
A_PAD_INT(PAD_202)
} BYDACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  OXDACTR_u;
A_PAD_INT(PAD_203)
A68_INT  PXDACTR_l;
A_PAD_INT(PAD_204)
} NYDACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  PXDACTR_l;
A_PAD_INT(PAD_205)
A68_215  EYDACTR_classno;
} WYDACTR_f;
typedef struct   /* env of non-global proc */
{
A68_217  UYDACTR_f;
} GZDACTR_flist;
typedef struct   /* env of non-global proc */
{
A68_135  Output;
A68_67 * PDEACTR_lhs;
A68_INT * FZAACTR_outlevel;
A68_67 * RDEACTR_rhs;
A68_INT  Mode;
A_PAD_INT(PAD_207)
} UDEACTR_fass;
typedef struct   /* env of non-global proc */
{
A68_INT * PKEACTR_nomem;
} UKEACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * OKEACTR_basemode;
A68_INT * PKEACTR_nomem;
A68_221 * XKEACTR_modemem;
A68_222 * QKEACTR_anonymous;
} CLEACTR_remember;
typedef struct   /* env of non-global proc */
{
A68_221 * XKEACTR_modemem;
A68_INT * PKEACTR_nomem;
} NLEACTR_repmode;
typedef struct   /* env of non-global proc */
{
A68_INT * ULEACTR_noids;
} ZLEACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Ka;
A68_INT * NKEACTR_ki;
} GMEACTR_rc;
typedef struct   /* env of non-global proc */
{
A68_VC  Ka;
A68_INT * NKEACTR_ki;
} LMEACTR_rw;
typedef struct   /* env of non-global proc */
{
A68_VC  Ka;
A68_INT * NKEACTR_ki;
A68_31  XTAACTR_spaces;
A_PAD_ISTRUCT(A68_31 ,PAD_208)
} SMEACTR_rs;
typedef struct   /* env of non-global proc */
{
A68_INT * OKEACTR_basemode;
A68_107  KUAACTR_modes;
} LNEACTR_unnumber;
typedef struct   /* env of non-global proc */
{
A68_INT * VYAACTR_lastmode;
A68_INT * OKEACTR_basemode;
A68_159  JMEACTR_rw;
A68_172  JNEACTR_unnumber;
A68_159  EMEACTR_rc;
A68_210  ALEACTR_remember;
A68_107  KUAACTR_modes;
A68_172  JGCACTR_deflex;
A68_223  QMEACTR_rs;
A68_INT  DKEACTR_maxchar2;
A_PAD_INT(PAD_210)
} VNEACTR_readmodes;
typedef struct   /* env of non-global proc */
{
A68_135  Output;
A68_31 * Name;
A68_34  Ym;
A68_31 * P;
A68_93 * ZTEACTR_ys;
A68_INT * TZAACTR_modulelevel;
A68_37 * BUEACTR_xs;
A68_112 ** RABACTR_concheck;
A68_126 ** QYAACTR_globcurrent;
} GUEACTR_setc;
typedef struct   /* env of non-global proc */
{
A68_41  MUEACTR_c1;
} QUEACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * NVEACTR_i;
} DWEACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * JWEACTR_k;
} CXEACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * JWEACTR_k;
} JXEACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * QSAACTR_compsize;
A68_BOOL  Kb;
A_PAD_BOOL(PAD_214)
A68_100  Decnos;
A68_100  Modenos;
} WYEACTR_mdno;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Kb;
A_PAD_BOOL(PAD_215)
A68_VC  Ka;
A68_INT * QYEACTR_ki;
} CZEACTR_kc;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Kb;
A_PAD_BOOL(PAD_216)
A68_VC  Ka;
A68_INT * QYEACTR_ki;
} IZEACTR_kw;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Kb;
A_PAD_BOOL(PAD_217)
A68_VC  Ka;
A68_INT * QYEACTR_ki;
} RZEACTR_ks;
typedef struct   /* env of non-global proc */
{
A68_122 ** GYEACTR_mdone;
A68_INT  YYAACTR_newmode1;
A_PAD_INT(PAD_218)
A68_122 ** IAFACTR_mtodo;
A68_INT * GAFACTR_kmno;
A68_122 ** HYEACTR_kmfree;
} MAFACTR_numbermode;
typedef struct   /* env of non-global proc */
{
A68_172  KAFACTR_numbermode;
A68_122 ** IAFACTR_mtodo;
A68_122 ** GYEACTR_mdone;
A68_107  KUAACTR_modes;
A68_150  AZEACTR_kc;
A68_150  GZEACTR_kw;
A68_47  PZEACTR_ks;
A68_INT  DKEACTR_maxchar2;
A_PAD_INT(PAD_220)
} YAFACTR_keepmode;
typedef struct   /* env of non-global proc */
{
A68_126 * NFFACTR_current;
A68_126 * External;
} MHFACTR_scopel;
typedef struct   /* env of non-global proc */
{
A68_INT * SYAACTR_modedecdepth;
A68_INT * ITAACTR_supflts;
A68_100 * AIFACTR_inserts;
A68_152 * JEBACTR_insertsn;
A68_100 * BIFACTR_ignorable;
A68_153 * LEBACTR_ignorablen;
A68_100 * CIFACTR_nonstarter;
A68_154 * NEBACTR_nonducstart;
A68_155 * PEBACTR_insertsf;
A68_156 * REBACTR_ignorablef;
A68_157 * TEBACTR_nonpicstart;
A68_160  WGBACTR_checkinsert;
A68_INT * MFBACTR_t1;
A68_150  VJBACTR_abort;
A68_INT * WDBACTR_recoverdepth;
A68_47  UIBACTR_faultchars;
A68_172  LFDACTR_reader;
A68_INT * KFBACTR_crts;
A68_INT * LFBACTR_failpos;
A68_INT * ODBACTR_next;
A68_31 * PSAACTR_ident;
A68_31  XTAACTR_spaces;
A_PAD_ISTRUCT(A68_31 ,PAD_222)
A68_100 * HFBACTR_sidstack;
A68_INT * JFBACTR_stind;
A68_45 * FIFACTR_informat1;
A68_124 * XGFACTR_vlist;
A68_INT * QDBACTR_look;
A68_232  GFFACTR_range;
A68_126 * NFFACTR_current;
A68_INT * LSAACTR_tind;
A68_INT * VGFACTR_formatbrind;
A68_INT * VBBACTR_brind;
A68_INT * UGFACTR_formatstind;
A68_INT * TGFACTR_rangebrind;
A68_INT * SGFACTR_rangestind;
A68_jmp_buf  JFFACTR_exitsc;
A_PAD_jmp_buf(PAD_224)
} JIFACTR_recovery;
typedef struct   /* env of non-global proc */
{
A68_INT * GGFACTR_type;
A68_INT * HGFACTR_descno;
A68_159  PFBACTR_analyser;
A68_INT * JBBACTR_oldtind;
A68_INT * LSAACTR_tind;
A68_INT * MFBACTR_t1;
A68_172  LFDACTR_reader;
A68_150  QJBACTR_fault;
A68_203  HIFACTR_recovery;
A68_173  FVBACTR_insertarray;
A68_178  PZBACTR_faultp;
A68_171  LTBACTR_insertstrct;
A68_52 ** JDBACTR_decmode;
A68_INT * HTAACTR_iv;
A68_174  TWBACTR_insertis;
A68_174  ZVBACTR_insertvec;
A68_31 * PSAACTR_ident;
A68_172  YLCACTR_makeflex;
A68_172  LUBACTR_insertprc;
A68_172  JGCACTR_deflex;
A68_170  OSBACTR_insertunion;
A68_169  RRBACTR_insertprocp;
A68_107  KUAACTR_modes;
A68_INT * ZYAACTR_nolongs;
A68_INT  YYAACTR_newmode1;
A_PAD_INT(PAD_225)
A68_INT * VYAACTR_lastmode;
A68_150  VJBACTR_abort;
A68_INT * FZAACTR_outlevel;
A68_BOOL * GBBACTR_lastidchanged;
A68_135  Output;
A68_31  BZAACTR_nullid;
A_PAD_ISTRUCT(A68_31 ,PAD_227)
A68_INT * GZAACTR_maxident;
A68_126 ** QYAACTR_globcurrent;
A68_INT * SYAACTR_modedecdepth;
A68_233 * LGFACTR_uc1;
A68_126 * NFFACTR_current;
A68_110 ** KDBACTR_cindic;
A68_206  LODACTR_treatam;
A68_INT * QDBACTR_look;
A68_jmp_buf  LFFACTR_scstart;
A_PAD_jmp_buf(PAD_229)
} SLFACTR_declarer;
typedef struct   /* env of non-global proc */
{
A68_INT * JFBACTR_stind;
A68_INT * BEBACTR_lkmodeins;
A68_159  PFBACTR_analyser;
A68_INT * JBBACTR_oldtind;
A68_INT * LSAACTR_tind;
A68_INT * MFBACTR_t1;
A68_172  LFDACTR_reader;
A68_INT * AEBACTR_lkinserts;
A68_133 *** ZDBACTR_lkend;
A68_31 * PSAACTR_ident;
A68_INT * SSAACTR_idsize;
A68_INT * TSAACTR_idhash;
A68_INT * FZAACTR_outlevel;
A68_240  QLFACTR_declarer;
A68_52 * DEBACTR_lkscam;
A68_INT * CEBACTR_lktype;
A68_INT * GGFACTR_type;
A68_INT * ZYAACTR_nolongs;
A68_INT * ODBACTR_next;
A68_150  VJBACTR_abort;
A68_INT * KFBACTR_crts;
A68_100 * HFBACTR_sidstack;
A68_INT * VBBACTR_brind;
} RQFACTR_lookahead;
typedef struct   /* env of non-global proc */
{
A68_INT * NSAACTR_find;
A68_VC  JSAACTR_globfbuff;
A68_INT * IBBACTR_noofstrings;
A68_INT * VGFACTR_formatbrind;
A68_INT * VBBACTR_brind;
A68_INT * UGFACTR_formatstind;
A68_INT * JFBACTR_stind;
A68_135  Output;
A68_INT * FZAACTR_outlevel;
A68_159  PFBACTR_analyser;
A68_INT * MFBACTR_t1;
A68_172  LFDACTR_reader;
A68_150  QJBACTR_fault;
A68_203  HIFACTR_recovery;
A68_INT * LSAACTR_tind;
A68_INT * WGFACTR_formatcaseno;
A68_31  BZAACTR_nullid;
A_PAD_ISTRUCT(A68_31 ,PAD_230)
A68_126 * NFFACTR_current;
A68_BOOL * GBBACTR_lastidchanged;
A68_233 * LGFACTR_uc1;
A68_193  RYCACTR_strong;
A68_INT * OYAACTR_formatunion;
A68_150  VJBACTR_abort;
} DRFACTR_informat;
typedef struct   /* env of non-global proc */
{
A68_159  PFBACTR_analyser;
A68_INT * MFBACTR_t1;
A68_172  LFDACTR_reader;
A68_150  QJBACTR_fault;
A68_203  HIFACTR_recovery;
A68_240  QLFACTR_declarer;
A68_45  BRFACTR_informat;
A68_52 * OGFACTR_scam;
A68_BOOL * GHFACTR_firstaidec;
A68_jmp_buf  LFFACTR_scstart;
A_PAD_jmp_buf(PAD_231)
A68_193  RYCACTR_strong;
A68_176  NYBACTR_heapvalue;
A68_126 * NFFACTR_current;
A68_126 * External;
A68_232  GFFACTR_range;
A68_INT * GGFACTR_type;
A68_INT * EZAACTR_rdmode;
A68_172  JGCACTR_deflex;
A68_INT * LSAACTR_tind;
A68_159  ZJBACTR_primread;
A68_INT * FZAACTR_outlevel;
A68_172  XJCACTR_pmode;
A68_190  CXCACTR_hcf;
A68_100  TBBACTR_brackets;
A68_INT * VBBACTR_brind;
A68_107  KUAACTR_modes;
A68_INT * AZAACTR_globccmode;
A68_178  PZBACTR_faultp;
A68_31 * GDBACTR_id1;
A68_144  KTAACTR_idmess;
A68_INT * PDBACTR_bangtype;
A68_231  JEFACTR_findid;
A68_135  Output;
A68_BOOL * XZAACTR_burestrict;
A68_INT * WZAACTR_lastkept;
A68_203  YMDACTR_testkept;
A68_BOOL * ZGFACTR_heap;
A68_172  ZICACTR_mproc;
A68_69 ** DHFACTR_lab;
A68_31 * PSAACTR_ident;
A68_INT * DZAACTR_labno;
A68_172  VECACTR_marker;
A68_VC  CTAACTR_str;
A68_INT * ETAACTR_stringsize;
A68_VC  ATAACTR_string;
A68_INT * FTAACTR_noofchars;
A68_INT * HDBACTR_strsize;
A68_INT * IDBACTR_strbase;
A68_INT * GTAACTR_stringbase;
A68_174  TWBACTR_insertis;
A68_CHAR * DUAACTR_string1;
A68_BOOL * ZRAACTR_isint;
A68_INT * MDBACTR_cbiop;
A68_INT * ZYAACTR_nolongs;
A68_31 * OSAACTR_compsymb;
A68_INT * RSAACTR_comphash;
A68_108 ** LDBACTR_cinst;
A68_BOOL * NDBACTR_clibop;
A68_191  MXCACTR_firmto;
A68_195  VBDACTR_findbiop;
A68_128  MABACTR_libinds;
A68_142  Charset;
A68_196 * FFDACTR_bumodule;
A68_175  UXBACTR_opproc;
A68_172  ZFCACTR_assmarker;
A68_150  VCEACTR_assign;
A68_176  OBDACTR_weak;
A68_173  FVBACTR_insertarray;
A68_184  OSCACTR_coerce;
A68_174  ZVBACTR_insertvec;
A68_176  EJCACTR_deref;
A68_125 * RYAACTR_enqv;
A68_52 * DEBACTR_lkscam;
A68_INT * CEBACTR_lktype;
A68_89 * FHFACTR_xcharpos;
A68_45  PQFACTR_lookahead;
A68_150  VJBACTR_abort;
} AUFACTR_uc;
typedef struct   /* env of non-global proc */
{
A68_229  NYEACTR_makekeepinfo;
A68_121 ** LZAACTR_kl;
} HJGACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * QSAACTR_compsize;
} SJGACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_229  NYEACTR_makekeepinfo;
A68_121 ** LZAACTR_kl;
} NMGACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * QSAACTR_compsize;
} YMGACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} WNGACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} UQGACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} XVGACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_198 * WHDACTR_test_flex;
} DJDACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_159  JMEACTR_rw;
A68_INT * WNEACTR_firstmode;
A68_INT * OKEACTR_basemode;
A68_172  JNEACTR_unnumber;
} FOEACTR_rm;
typedef struct   /* env of non-global proc */
{
A68_159  EMEACTR_rc;
A68_159  DOEACTR_rm;
A68_210  ALEACTR_remember;
} LOEACTR_rml;
typedef struct   /* env of non-global proc */
{
int dummy;
} TIFACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} JRFACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_150  FSFACTR_outint;
A68_VC  JSAACTR_globfbuff;
A68_INT * NSAACTR_find;
} HSFACTR_outint;
typedef struct   /* env of non-global proc */
{
A68_VC  JSAACTR_globfbuff;
A68_INT * NSAACTR_find;
A68_150  FSFACTR_outint;
A68_INT * VRFACTR_cccount;
} QSFACTR_outcount;

A_STATIC A68_VOID  ZPAACTR_generator(A68_BOOL  YPAACTR_anonymous, A68_VC  *ReturnedValue);

A68_BOOL  URAACTR_compile(A68_134  Input, A68_135  Output, A68_136  Flt, A68_137  Message, A68_138  Givemoduledetails, A68_139  Givespec, A68_140  Lookup, A68_142  Charset);

A_STATIC A68_VOID  DSAACTR_generator(A68_BOOL  BSAACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WSAACTR_generator(A68_BOOL  USAACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_31  LTAACTR_idmess(A68_INT  M, void *NonLocals);

A_STATIC A68_VOID  GUAACTR_generator(A68_BOOL  EUAACTR_anonymous, A68_107  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PUAACTR_generator(A68_BOOL  NUAACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WUAACTR_generator(A68_BOOL  UUAACTR_anonymous, A68_128  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AABACTR_generator(A68_BOOL  YZAACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IABACTR_generator(A68_BOOL  GABACTR_anonymous, A68_128  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  VABACTR_(A68_42 * L, A68_42 * R);

A_STATIC A68_VOID  PBBACTR_generator(A68_BOOL  NBBACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DFBACTR_generator(A68_BOOL  BFBACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  QFBACTR_analyser(void *NonLocals);

A_STATIC A68_VOID  CGBACTR_generator(A68_BOOL  AGBACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  XGBACTR_checkinsert(A68_INT  T, A68_BOOL  Testnext, void *NonLocals);

A_STATIC A68_VOID  JHBACTR_generator(A68_BOOL  HHBACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VIBACTR_faultchars(A68_VC  Mess, void *NonLocals);

A_STATIC A68_VOID  CJBACTR_generator(A68_BOOL  AJBACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RJBACTR_fault(A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  WJBACTR_abort(A68_INT  Mess, void *NonLocals);

A_STATIC A68_INT  AKBACTR_primread(void *NonLocals);

A_STATIC A68_INT  DPBACTR_fprimread(void *NonLocals);

A_STATIC A68_INT  SRBACTR_insertprocp(A68_INT  Deproc, A68_54 * Pars, void *NonLocals);

A_STATIC A68_INT  PSBACTR_insertunion(A68_54 * Rm, void *NonLocals);

A_STATIC A68_INT  MTBACTR_insertstrct(A68_INT  Deflex, A68_58 * Sels, void *NonLocals);

A_STATIC A68_INT  MUBACTR_insertprc(A68_INT  Mode, void *NonLocals);

A_STATIC A68_INT  GVBACTR_insertarray(A68_INT  Mode, A68_INT  Nods, A68_INT  Deflex, void *NonLocals);

A_STATIC A68_INT  AWBACTR_insertvec(A68_INT  M, A68_INT  Deflex, void *NonLocals);

A_STATIC A68_INT  UWBACTR_insertis(A68_INT  M, A68_INT  L, void *NonLocals);

A_STATIC A68_INT  MXBACTR_insertassmntproc(A68_INT  M, void *NonLocals);

A_STATIC A68_INT  VXBACTR_opproc(A68_108 * I, void *NonLocals);

A_STATIC A68_VOID  EYBACTR_freevalue(A68_125 * V);

A_STATIC A68_124 * JYBACTR_globvlist(void);

A_STATIC A68_VOID  OYBACTR_heapvalue(A68_125 * V, void *NonLocals);

A_STATIC A68_VOID  WYBACTR_downandups(A68_125 * V, void *NonLocals);

A_STATIC A68_VOID  CZBACTR_tidyv(A68_125 * V, void *NonLocals);

A_STATIC A68_VOID  QZBACTR_faultp(A68_INT  Messno, A68_INT  M1, A68_INT  M2, A68_31 * Id, void *NonLocals);

A_STATIC A68_VOID  YZBACTR_generator(A68_BOOL  WZBACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JACACTR_outid(A68_31  Id, void *NonLocals);

A_STATIC A68_VOID  VACACTR_outboldid(A68_31  Id, void *NonLocals);

A_STATIC A68_VOID  JBCACTR_outchars(A68_VC  V, void *NonLocals);

A_STATIC A68_VOID  QBCACTR_outmess(A68_INT  N, void *NonLocals);

A_STATIC A68_VOID  ZBCACTR_outint(A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  KCCACTR_outmode(A68_INT  Mode, A68_BOOL  High, void *NonLocals);

A_STATIC A68_INT  WECACTR_marker(A68_INT  Mode, void *NonLocals);

A_STATIC A68_VOID  CFCACTR_state(A68_INT * Rd, A68_INT  Mode, void *NonLocals);

A_STATIC A68_INT  AGCACTR_assmarker(A68_INT  Mode, void *NonLocals);

A_STATIC A68_INT  KGCACTR_deflex(A68_INT  I, void *NonLocals);

A_STATIC A68_INT  AICACTR_enflex(A68_INT  M, void *NonLocals);

A_STATIC A68_INT  AJCACTR_mproc(A68_INT  Mode, void *NonLocals);

A_STATIC A68_VOID  FJCACTR_deref(A68_125 * V, void *NonLocals);

A_STATIC A68_VOID  MJCACTR_deproc(A68_125 * V, void *NonLocals);

A_STATIC A68_INT  YJCACTR_pmode(A68_INT  M, void *NonLocals);

A_STATIC A68_BOOL  NKCACTR_depref(A68_125 * V, A68_INT  Frommode, A68_INT  Tomode, A68_BOOL  Code, void *NonLocals);

A_STATIC A68_INT  YKCACTR_weakmode(A68_INT  Mode, void *NonLocals);

A_STATIC A68_INT  NLCACTR_unite(A68_125 * V, A68_INT  F, A68_INT  T, A68_INT  Str, A68_BOOL  Code, void *NonLocals);

A_STATIC A68_INT  ZLCACTR_makeflex(A68_INT  M, void *NonLocals);

A_STATIC A68_INT  IMCACTR_strbd(A68_INT  M, void *NonLocals);

A_STATIC A68_INT  ZMCACTR_strproc(A68_INT  F, A68_INT  T, A68_INT  Oldf, A68_BOOL  Code, void *NonLocals);

A_STATIC A68_VOID  VNCACTR_strcoerce(A68_INT  F, A68_INT  T, void *NonLocals);

A_STATIC A68_BOOL  PSCACTR_coerce(A68_125 * V, A68_INT  F, A68_INT  T, A68_INT  Str, A68_BOOL  Code, void *NonLocals);

A_STATIC A68_INT  RWCACTR_hcfoftwo(A68_INT  A, A68_INT  B, A68_BOOL  First, void *NonLocals);

A_STATIC A68_INT  DXCACTR_hcf(A68_125 * V, void *NonLocals);

A_STATIC A68_INT  NXCACTR_firmto(A68_125 * V, A68_INT  T, void *NonLocals);

A_STATIC A68_INT  CYCACTR_ismode(A68_125 * V, A68_INT  Mode, A68_INT  Nods, void *NonLocals);

A_STATIC A68_BITS  SYCACTR_strong(A68_125 * V, A68_INT  Tm, A68_BOOL  Newendlab, void *NonLocals);

A_STATIC A68_VOID  VZCACTR_elem(A68_124 * Vl, A68_INT  Mode, void *NonLocals);

A_STATIC A68_VOID  PBDACTR_weak(A68_125 * V, void *NonLocals);

A_STATIC A68_BOOL  WBDACTR_findbiop(A68_INT * Lmode, A68_INT * Rmode, A68_INT * Ans, A68_INT * Biop, void *NonLocals);

A_STATIC A68_VOID  FEDACTR_readcom(A68_INT  Commenttype, void *NonLocals);

A_STATIC A68_INT  HFDACTR_unlook(void *NonLocals);

A_STATIC A68_INT  MFDACTR_reader(A68_INT  Readertype, void *NonLocals);

A_STATIC A68_VOID  SHDACTR_generator(A68_BOOL  QHDACTR_anonymous, A68_198  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  CIDACTR_equality(A68_INT  I, A68_INT  J, A68_INT  Lastdone, void *NonLocals);

A_STATIC A68_VOID  LIDACTR_f(A68_INT  I, A68_INT  J, void *NonLocals);

A_STATIC A68_VOID  CJDACTR_generator(A68_BOOL  AJDACTR_anonymous, A68_198  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  QLDACTR_mcond(A68_INT  A, A68_54 * Ml, A68_INT  X, void *NonLocals);

A_STATIC A68_BOOL  PMDACTR_dynamic(A68_53 * Aml, void *NonLocals);

A_STATIC A68_BOOL  ZMDACTR_testkept(A68_INT  M, void *NonLocals);

A_STATIC A68_VOID  RNDACTR_adjscope(A68_68 * Rd, A68_INT  Level, A68_INT  Scope);

A_STATIC A68_VOID  ZNDACTR_loadmodeproc(A68_52 * A, void *NonLocals);

A_STATIC A68_VOID  MODACTR_treatam(A68_52 * Am, A68_INT  Type, A68_INT  Scope, void *NonLocals);

A_STATIC A68_VOID  IPDACTR_assigngen(A68_52 * A, void *NonLocals);

A_STATIC A68_VOID  YPDACTR_assignarr(A68_67 * Id, A68_52 * A, void *NonLocals);

A_STATIC A68_VOID  CTDACTR_modevars(A68_53 * Aml, void *NonLocals);

A_STATIC A68_VOID  JUDACTR_substitute(A68_INT  I, A68_INT  J, A68_INT  From, void *NonLocals);

A_STATIC A68_VOID  UUDACTR_subam(A68_53 * Am, void *NonLocals);

A_STATIC A68_VOID  BVDACTR_subd(A68_INT * M, void *NonLocals);

A_STATIC A68_VOID  WVDACTR_checkmodes(A68_53 * Aml, void *NonLocals);

A_STATIC A68_VOID  BWDACTR_removedupl(A68_54 * M);

A_STATIC A68_54 * IWDACTR_flattenunion(A68_56 * U, A68_100  Done, void *NonLocals);

A_STATIC A68_VOID  XWDACTR_generator(A68_BOOL  VWDACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MXDACTR_accidental_eqs(A68_213  Mds, void *NonLocals);

A_STATIC A68_VOID  SXDACTR_generator(A68_BOOL  QXDACTR_anonymous, A68_215  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AYDACTR_generator(A68_BOOL  YXDACTR_anonymous, A68_215  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MYDACTR_generator(A68_BOOL  KYDACTR_anonymous, A68_198  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  VYDACTR_f(A68_INT  Ma, A68_INT  Mb, void *NonLocals);

A_STATIC A68_BOOL  FZDACTR_flist(A68_54 * Mx, A68_54 * My, void *NonLocals);

A_STATIC A68_VOID  WCEACTR_assign(A68_INT  Mode, void *NonLocals);

A_STATIC A68_VOID  TDEACTR_fass(void *NonLocals);

A_STATIC A68_114 * SJEACTR_findproxy(A68_31 * Ident, void *NonLocals);

A_STATIC A68_VOID  LKEACTR_simplespec(A68_BOOL  Bu, A68_127  Ids, A68_128  Inds, A68_INT * Ndno, A68_INT  Scope, A68_VC  Ka, void *NonLocals);

A_STATIC A68_VOID  TKEACTR_generator(A68_BOOL  RKEACTR_anonymous, A68_221  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BLEACTR_remember(A68_INT * Modepos, void *NonLocals);

A_STATIC A68_VOID  MLEACTR_repmode(A68_INT  Old, A68_INT  New, void *NonLocals);

A_STATIC A68_VOID  YLEACTR_generator(A68_BOOL  WLEACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  FMEACTR_rc(void *NonLocals);

A_STATIC A68_INT  KMEACTR_rw(void *NonLocals);

A_STATIC A68_INT  RMEACTR_rs(A68_31 * Id, void *NonLocals);

A_STATIC A68_INT  KNEACTR_unnumber(A68_INT  Mode, void *NonLocals);

A_STATIC A68_INT  UNEACTR_readmodes(void *NonLocals);

A_STATIC A68_INT  EOEACTR_rm(void *NonLocals);

A_STATIC A68_54 * KOEACTR_rml(void *NonLocals);

A_STATIC A68_VOID  XTEACTR_treatspec(A68_31 * Name, A68_31 * P, A68_34  Ym, void *NonLocals);

A_STATIC A68_VOID  FUEACTR_setc(void *NonLocals);

A_STATIC A68_VOID  PUEACTR_generator(A68_BOOL  NUEACTR_anonymous, A68_41  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  IVEACTR_closure(A68_118 * C, A68_113 * Con, void *NonLocals);

A_STATIC A68_VOID  CWEACTR_generator(A68_BOOL  AWEACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BXEACTR_generator(A68_BOOL  ZWEACTR_anonymous, A68_99  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IXEACTR_generator(A68_BOOL  GXEACTR_anonymous, A68_41  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  OYEACTR_makekeepinfo(A68_121 * Kl, A68_BOOL  Kb, A68_VC  Ka, A68_100  Decnos, A68_100  Modenos, void *NonLocals);

A_STATIC A68_VOID  VYEACTR_mdno(A68_INT  D, A68_INT  M, void *NonLocals);

A_STATIC A68_VOID  BZEACTR_kc(A68_INT  C, void *NonLocals);

A_STATIC A68_VOID  HZEACTR_kw(A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  QZEACTR_ks(A68_VC  S, void *NonLocals);

A_STATIC A68_INT  LAFACTR_numbermode(A68_INT  Mode, void *NonLocals);

A_STATIC A68_INT  XAFACTR_keepmode(A68_INT  Mode, void *NonLocals);

A_STATIC A68_VOID  YCFACTR_addtokl(A68_120  Ki, void *NonLocals);

A_STATIC A68_VOID  TDFACTR_anonymous(A68_31 * N, A68_INT  Mn, void *NonLocals);

A_STATIC A68_67 * KEFACTR_findid(void *NonLocals);

A_STATIC A68_VOID  HFFACTR_range(A68_126 * External, A68_67 * Rdname, A68_110 * Indname, A68_BOOL * Saveexit, A68_124  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  LHFACTR_scopel(A68_69 ** L, A68_69 ** E, void *NonLocals);

A_STATIC A68_BOOL  IIFACTR_recovery(A68_INT  Readertype, void *NonLocals);

A_STATIC A68_VOID  SIFACTR_generator(A68_BOOL  QIFACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  RLFACTR_declarer(A68_BOOL  Modedec, A68_52 * Am, void *NonLocals);

A_STATIC A68_VOID  QQFACTR_lookahead(void *NonLocals);

A_STATIC A68_VOID  CRFACTR_informat(void *NonLocals);

A_STATIC A68_VOID  IRFACTR_generator(A68_BOOL  GRFACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GSFACTR_outint(A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  PSFACTR_outcount(void *NonLocals);

A_STATIC A68_VOID  ZTFACTR_uc(A68_INT  Mode, A68_125  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GJGACTR_generator(A68_BOOL  EJGACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RJGACTR_generator(A68_BOOL  PJGACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MMGACTR_generator(A68_BOOL  KMGACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XMGACTR_generator(A68_BOOL  VMGACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VNGACTR_generator(A68_BOOL  TNGACTR_anonymous, A68_128  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TQGACTR_generator(A68_BOOL  RQGACTR_anonymous, A68_128  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WVGACTR_generator(A68_BOOL  UVGACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CJDACTR_generator(A68_BOOL  AJDACTR_anonymous, A68_198  *ReturnedValue, void *NonLocals)
#define NL(x) (((DJDACTR_generator *)NonLocals)->x)
{ 
A68_198  EJDACTR;  /* clause result */
A68_198  FJDACTR;  /* OPERATORS - dynamic generator */
{ 
FJDACTR.upb = ((*NL(WHDACTR_test_flex)).upb+100) ;
( AJDACTR_anonymous? A_VLOC(A68_70 ,FJDACTR): A_VHEAP(A68_70 ,FJDACTR) );
EJDACTR = FJDACTR;
} 
*ReturnedValue = (EJDACTR);
return;
} 
#undef NL

A_STATIC A68_INT  EOEACTR_rm(void *NonLocals)
#define NL(x) (((FOEACTR_rm *)NonLocals)->x)
{ 
A68_INT  GOEACTR_m;
A68_INT  HOEACTR_n;
A68_INT  IOEACTR;  /* clause result */
A_PROC_ENTRY(rm);
{ 
GOEACTR_m = A_CALLPROC(NL(JMEACTR_rw),(),((NL(JMEACTR_rw)).nonlocals));
HOEACTR_n = (A68_INT )(A68_BITS )((A68_BITS )GOEACTR_m&LQAACTR_decsmask);
 /* line 5290: */
 /* line 5291: */
if ( (HOEACTR_n>=(*NL(WNEACTR_firstmode))) )
{ 
 /* line 5292: */
IOEACTR = ((GOEACTR_m-100)+(*NL(OKEACTR_basemode)));
} 
else
{ 
 /* line 5293: */
 /* line 5294: */
IOEACTR = A_CALLPROC(NL(JNEACTR_unnumber),(GOEACTR_m),(GOEACTR_m,(NL(JNEACTR_unnumber)).nonlocals));
} 
} 
A_PROC_EXIT(rm);
return( IOEACTR );
} 
#undef NL

A_STATIC A68_54 * KOEACTR_rml(void *NonLocals)
#define NL(x) (((LOEACTR_rml *)NonLocals)->x)
{ 
A68_INT  MOEACTR_i;
A68_54 * NOEACTR_ml;
A68_54 ** OOEACTR_rrml;
A68_INT  POEACTR;  /* to part of loop */
A68_INT  QOEACTR;  /* loop control */
A68_54  ROEACTR;  /* collateral clause result */
A68_54 * SOEACTR;  /* YIELD */
A68_54 * TOEACTR;  /* clause result */
A_PROC_ENTRY(rml);
{ 
MOEACTR_i = A_CALLPROC(NL(EMEACTR_rc),(),((NL(EMEACTR_rc)).nonlocals));
 /* line 5298: */
 /* line 5299: */
OOEACTR_rrml = (&NOEACTR_ml);
 /* line 5300: */
 /* line 5301: */
POEACTR = MOEACTR_i;
for ( QOEACTR = 1;
QOEACTR <= POEACTR;
QOEACTR += 1 )
{ 
 /* line 5302: */
ROEACTR.Mode = A_CALLPROC(NL(DOEACTR_rm),(),((NL(DOEACTR_rm)).nonlocals));
ROEACTR.Rest = (A68_54 *)A68_NIL;
SOEACTR = A_HEAP(A68_54 ) ;
(*SOEACTR) = ROEACTR ;
(*OOEACTR_rrml) = SOEACTR;
 /* line 5303: */
A_CALLPROC(NL(ALEACTR_remember),((&((*OOEACTR_rrml)->Mode))),((&((*OOEACTR_rrml)->Mode)),(NL(ALEACTR_remember)).nonlocals));
 /* line 5304: */
 /* line 5305: */
OOEACTR_rrml = (&((*OOEACTR_rrml)->Rest));
}
 /* line 5306: */
 /* line 5307: */
TOEACTR = NOEACTR_ml;
} 
A_PROC_EXIT(rml);
return( TOEACTR );
} 
#undef NL

A_STATIC A68_VOID  SIFACTR_generator(A68_BOOL  QIFACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TIFACTR_generator *)NonLocals)->x)
{ 
A68_VC  UIFACTR;  /* clause result */
A68_VC  VIFACTR;  /* OPERATORS - dynamic generator */
{ 
VIFACTR.upb = 10 ;
( QIFACTR_anonymous? A_VLOC(A68_CHAR ,VIFACTR): A_VHEAP(A68_CHAR ,VIFACTR) );
UIFACTR = VIFACTR;
} 
*ReturnedValue = (UIFACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IRFACTR_generator(A68_BOOL  GRFACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JRFACTR_generator *)NonLocals)->x)
{ 
A68_VC  KRFACTR;  /* clause result */
A68_VC  LRFACTR;  /* OPERATORS - dynamic generator */
{ 
LRFACTR.upb = (KKAACTR_linesize+1) ;
( GRFACTR_anonymous? A_VLOC(A68_CHAR ,LRFACTR): A_VHEAP(A68_CHAR ,LRFACTR) );
KRFACTR = LRFACTR;
} 
*ReturnedValue = (KRFACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GSFACTR_outint(A68_INT  I, void *NonLocals)
#define NL(x) (((HSFACTR_outint *)NonLocals)->x)
{ 
A68_INT  ISFACTR_j;
A68_INT  KSFACTR;  /* ADICOPS - MOD */
A68_INT  LSFACTR;  /* ADICOPS - MOD */
A68_INT  JSFACTR_k;
A68_INT  MSFACTR;  /* YIELD */
A68_CHAR * NSFACTR;  /* YIELD */
A_PROC_ENTRY(outint);
 /* line 6818: */
{ 
ISFACTR_j = I;
 /* line 6819: */
LSFACTR = 10 ;
JSFACTR_k = A_MOD(ISFACTR_j,LSFACTR,KSFACTR);
 /* line 6820: */
ISFACTR_j = (ISFACTR_j/10);
 /* line 6821: */
if ( (ISFACTR_j>0) )
{ 
A_CALLPROC(NL(FSFACTR_outint),(ISFACTR_j),(ISFACTR_j,(NL(FSFACTR_outint)).nonlocals));
} 
 /* line 6822: */
 /* line 6823: */
MSFACTR = (*NL(NSAACTR_find))+=1 ;
NSFACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),MSFACTR)) ;
(*NSFACTR) = (A68_SSBITS)(JSFACTR_k+(A68_INT)(unsigned char)'0');
} 
A_PROC_EXIT(outint);
return;
} 
#undef NL

A_STATIC A68_VOID  PSFACTR_outcount(void *NonLocals)
#define NL(x) (((QSFACTR_outcount *)NonLocals)->x)
{ 
A68_INT  RSFACTR;  /* YIELD */
A68_CHAR * SSFACTR;  /* YIELD */
A68_INT  TSFACTR;  /* YIELD */
A68_CHAR * USFACTR;  /* YIELD */
A_PROC_ENTRY(outcount);
{ 
RSFACTR = (*NL(NSAACTR_find))+=1 ;
SSFACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),RSFACTR)) ;
(*SSFACTR) = '(';
 /* line 6827: */
A_CALLPROC(NL(FSFACTR_outint),((*NL(VRFACTR_cccount))+=1),((*NL(VRFACTR_cccount))+=1,(NL(FSFACTR_outint)).nonlocals));
 /* line 6828: */
 /* line 6829: */
TSFACTR = (*NL(NSAACTR_find))+=1 ;
USFACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),TSFACTR)) ;
(*USFACTR) = ')';
} 
A_PROC_EXIT(outcount);
return;
} 
#undef NL

A_STATIC A68_VOID  CGBACTR_generator(A68_BOOL  AGBACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals)
#define NL(x) (((DGBACTR_generator *)NonLocals)->x)
{ 
A68_100  EGBACTR;  /* clause result */
A68_100  FGBACTR;  /* OPERATORS - dynamic generator */
{ 
FGBACTR.upb = (*NL(AFBACTR_upbofsidstack))+=ZEBACTR_sidstackstep ;
( AGBACTR_anonymous? A_VLOC(A68_INT ,FGBACTR): A_VHEAP(A68_INT ,FGBACTR) );
EGBACTR = FGBACTR;
} 
*ReturnedValue = (EGBACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JHBACTR_generator(A68_BOOL  HHBACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals)
#define NL(x) (((KHBACTR_generator *)NonLocals)->x)
{ 
A68_100  LHBACTR;  /* clause result */
A68_100  MHBACTR;  /* OPERATORS - dynamic generator */
{ 
MHBACTR.upb = 30 ;
( HHBACTR_anonymous? A_VLOC(A68_INT ,MHBACTR): A_VHEAP(A68_INT ,MHBACTR) );
LHBACTR = MHBACTR;
} 
*ReturnedValue = (LHBACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CJBACTR_generator(A68_BOOL  AJBACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DJBACTR_generator *)NonLocals)->x)
{ 
A68_VC  EJBACTR;  /* clause result */
A68_VC  FJBACTR;  /* OPERATORS - dynamic generator */
{ 
FJBACTR.upb = (NL(Mess).upb+8) ;
( AJBACTR_anonymous? A_VLOC(A68_CHAR ,FJBACTR): A_VHEAP(A68_CHAR ,FJBACTR) );
EJBACTR = FJBACTR;
} 
*ReturnedValue = (EJBACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YZBACTR_generator(A68_BOOL  WZBACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZZBACTR_generator *)NonLocals)->x)
{ 
A68_VC  AACACTR;  /* clause result */
A68_VC  BACACTR;  /* OPERATORS - dynamic generator */
{ 
BACACTR.upb = 240 ;
( WZBACTR_anonymous? A_VLOC(A68_CHAR ,BACACTR): A_VHEAP(A68_CHAR ,BACACTR) );
AACACTR = BACACTR;
} 
*ReturnedValue = (AACACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JACACTR_outid(A68_31  Id, void *NonLocals)
#define NL(x) (((KACACTR_outid *)NonLocals)->x)
{ 
A68_CHAR  LACACTR_c;
A68_INT  MACACTR_i;
A68_INT  NACACTR_i;
A68_INT  OACACTR;  /* to part of loop */
A68_VC  PACACTR;  /* OPERATORS - istruct -> vector */
A68_VC  QACACTR;  /* OPERATORS - simple index */
A68_INT  RACACTR;  /* YIELD */
A68_CHAR * SACACTR;  /* YIELD */
A_PROC_ENTRY(outid);
 /* line 2068: */
{ 
 /* line 2069: */
MACACTR_i = (*NL(EACACTR_mind));
 /* line 2070: */
 /* line 2071: */
OACACTR = VDAACTR_maxid;
for ( NACACTR_i = 1;
NACACTR_i <= OACACTR;
NACACTR_i += 1 )
{ 
 /* line 2072: */
QACACTR = A_HISVEC(PACACTR,Id,32,A68_CHAR ) ;
if ( !(((LACACTR_c = A_VINDEX(QACACTR,NACACTR_i))!=' ')) ) break;
RACACTR = (*NL(EACACTR_mind))+=1 ;
SACACTR = (&A_VINDEX(NL(CACACTR_m),RACACTR)) ;
(*SACACTR) = LACACTR_c;
}
 /* line 2073: */
if ( (MACACTR_i==(*NL(EACACTR_mind))) )
{ 
 /* line 2074: */
siglongjmp(NL(SZBACTR_endf).label,1);
} 
} 
A_PROC_EXIT(outid);
return;
} 
#undef NL

A_STATIC A68_VOID  VACACTR_outboldid(A68_31  Id, void *NonLocals)
#define NL(x) (((WACACTR_outboldid *)NonLocals)->x)
{ 
A68_CHAR  XACACTR_c;
A68_INT  YACACTR_i;
A68_INT  ZACACTR_i;
A68_INT  ABCACTR;  /* to part of loop */
A68_VC  BBCACTR;  /* OPERATORS - istruct -> vector */
A68_VC  CBCACTR;  /* OPERATORS - simple index */
A68_BOOL  DBCACTR;  /* optbool result */
A68_CHAR  EBCACTR;  /* clause result */
A68_INT  FBCACTR;  /* YIELD */
A68_CHAR * GBCACTR;  /* YIELD */
A_PROC_ENTRY(outboldid);
 /* line 2077: */
{ 
 /* line 2079: */
YACACTR_i = (*NL(EACACTR_mind));
 /* line 2080: */
 /* line 2081: */
ABCACTR = VDAACTR_maxid;
for ( ZACACTR_i = 1;
ZACACTR_i <= ABCACTR;
ZACACTR_i += 1 )
{ 
 /* line 2082: */
CBCACTR = A_HISVEC(BBCACTR,Id,32,A68_CHAR ) ;
if ( !(((XACACTR_c = A_VINDEX(CBCACTR,ZACACTR_i))!=' ')) ) break;
DBCACTR = (XACACTR_c>='a');
if ( DBCACTR )
{ /* line 2083: */
DBCACTR = (XACACTR_c<='z');
}
if ( DBCACTR )
{ 
 /* line 2084: */
 /* line 2085: */
EBCACTR = (A68_SSBITS)((A68_INT)(unsigned char)XACACTR_c+LKAACTR_bolddiff);
} 
else
{ 
 /* line 2086: */
EBCACTR = XACACTR_c;
} 
FBCACTR = (*NL(EACACTR_mind))+=1 ;
GBCACTR = (&A_VINDEX(NL(CACACTR_m),FBCACTR)) ;
(*GBCACTR) = EBCACTR;
}
 /* line 2087: */
if ( (YACACTR_i==(*NL(EACACTR_mind))) )
{ 
siglongjmp(NL(SZBACTR_endf).label,1);
} 
 /* line 2089: */
 /* line 2090: */
/*SKIP*/;
} 
A_PROC_EXIT(outboldid);
return;
} 
#undef NL

A_STATIC A68_VOID  JBCACTR_outchars(A68_VC  V, void *NonLocals)
#define NL(x) (((KBCACTR_outchars *)NonLocals)->x)
{ 
A68_INT  LBCACTR_u;
A68_VC  MBCACTR;  /* OPERATORS - trim index */
A68_VC  NBCACTR;  /* YIELD */
A_PROC_ENTRY(outchars);
 /* line 2094: */
{ 
LBCACTR_u = V.upb;
 /* line 2095: */
NBCACTR = A_VTRIM(MBCACTR,(NL(CACACTR_m)),A_VTSCRIPT(&(MBCACTR.upb),(NL(CACACTR_m)).upb,((*NL(EACACTR_mind))+1),((*NL(EACACTR_mind))+LBCACTR_u))) ;
A_VASSIGN2(V,NBCACTR,A68_CHAR );
 /* line 2096: */
 /* line 2097: */
(*NL(EACACTR_mind))+=LBCACTR_u;
} 
A_PROC_EXIT(outchars);
return;
} 
#undef NL

A_STATIC A68_VOID  QBCACTR_outmess(A68_INT  N, void *NonLocals)
#define NL(x) (((RBCACTR_outmess *)NonLocals)->x)
{ 
A68_VC  SBCACTR;  /* avoid structure result */
A68_VC  TBCACTR_v;
A68_INT  UBCACTR_u;
A68_VC  VBCACTR;  /* OPERATORS - trim index */
A68_VC  WBCACTR;  /* YIELD */
A_PROC_ENTRY(outmess);
 /* line 2100: */
{ 
A_CALLPROC(NL(Message),(N, &SBCACTR),(N, &SBCACTR,(NL(Message)).nonlocals));
TBCACTR_v = SBCACTR;
 /* line 2101: */
UBCACTR_u = TBCACTR_v.upb;
 /* line 2102: */
WBCACTR = A_VTRIM(VBCACTR,(NL(CACACTR_m)),A_VTSCRIPT(&(VBCACTR.upb),(NL(CACACTR_m)).upb,((*NL(EACACTR_mind))+1),((*NL(EACACTR_mind))+UBCACTR_u))) ;
A_VASSIGN2(TBCACTR_v,WBCACTR,A68_CHAR );
 /* line 2103: */
 /* line 2104: */
(*NL(EACACTR_mind))+=UBCACTR_u;
} 
A_PROC_EXIT(outmess);
return;
} 
#undef NL

A_STATIC A68_VOID  ZBCACTR_outint(A68_INT  I, void *NonLocals)
#define NL(x) (((ACCACTR_outint *)NonLocals)->x)
{ 
A68_INT  BCCACTR_j;
A68_INT  DCCACTR;  /* ADICOPS - MOD */
A68_INT  ECCACTR;  /* ADICOPS - MOD */
A68_INT  CCCACTR_k;
A68_INT  FCCACTR;  /* YIELD */
A68_CHAR * GCCACTR;  /* YIELD */
A_PROC_ENTRY(outint);
 /* line 2107: */
{ 
BCCACTR_j = I;
 /* line 2108: */
ECCACTR = 10 ;
CCCACTR_k = A_MOD(BCCACTR_j,ECCACTR,DCCACTR);
 /* line 2109: */
BCCACTR_j = (BCCACTR_j/10);
 /* line 2110: */
if ( (BCCACTR_j>0) )
{ 
A_CALLPROC(NL(YBCACTR_outint),(BCCACTR_j),(BCCACTR_j,(NL(YBCACTR_outint)).nonlocals));
} 
 /* line 2111: */
 /* line 2112: */
FCCACTR = (*NL(EACACTR_mind))+=1 ;
GCCACTR = (&A_VINDEX(NL(CACACTR_m),FCCACTR)) ;
(*GCCACTR) = (A68_SSBITS)(CCCACTR_k+(A68_INT)(unsigned char)'0');
} 
A_PROC_EXIT(outint);
return;
} 
#undef NL

A_STATIC A68_VOID  KCCACTR_outmode(A68_INT  Mode, A68_BOOL  High, void *NonLocals)
#define NL(x) (((LCCACTR_outmode *)NonLocals)->x)
{ 
A68_110 * OCCACTR_ri;
A68_54 * PCCACTR_ml;
A68_58 * QCCACTR_sl;
A68_128  RCCACTR_rri;
A68_INT  SCCACTR;  /* YIELD */
A68_CHAR * TCCACTR;  /* YIELD */
A68_INT  UCCACTR_j;
A68_128  VCCACTR;  /* clause result */
A68_INT  WCCACTR_i;
A68_111  XCCACTR;  /* united object - for case conformity */
A68_52 * YCCACTR_ra;
A68_66  ZCCACTR;  /* united object - for case conformity */
A68_INT  ADCACTR_p;
A68_INT  BDCACTR;  /* clause result */
A68_55 * CDCACTR_prc;
A68_56 * DDCACTR_u;
A68_INT  GDCACTR;  /* YIELD */
A68_CHAR * HDCACTR;  /* YIELD */
A68_57 * IDCACTR_pp;
A68_INT  LDCACTR;  /* YIELD */
A68_CHAR * MDCACTR;  /* YIELD */
A68_59 * NDCACTR_s;
A68_INT  ODCACTR;  /* YIELD */
A68_CHAR * PDCACTR;  /* YIELD */
A68_INT  SDCACTR;  /* YIELD */
A68_CHAR * TDCACTR;  /* YIELD */
A68_INT  UDCACTR;  /* YIELD */
A68_CHAR * VDCACTR;  /* YIELD */
A68_60 * WDCACTR_ri1;
A68_INT  XDCACTR;  /* YIELD */
A68_CHAR * YDCACTR;  /* YIELD */
A68_61 * ZDCACTR_v;
A68_62 * AECACTR_a;
A68_INT  BECACTR_mm;
A68_INT  CECACTR;  /* to part of loop */
A68_INT  DECACTR;  /* loop control */
A68_66  EECACTR;  /* united object - for case conformity */
A68_62 * FECACTR_ra;
A68_INT  GECACTR;  /* to part of loop */
A68_INT  HECACTR;  /* loop control */
A68_INT  IECACTR;  /* YIELD */
A68_CHAR * JECACTR;  /* YIELD */
A68_64 * KECACTR_sten;
A_PROC_ENTRY(outmode);
 /* line 2115: */
{ 
 /* line 2116: */
 /* line 2117: */
 /* line 2119: */
 /* line 2121: */
 /* line 2122: */
if ( (Mode<0) )
{ 
SCCACTR = (*NL(EACACTR_mind))+=1 ;
TCCACTR = (&A_VINDEX(NL(CACACTR_m),SCCACTR)) ;
(*TCCACTR) = '?';
 /* line 2123: */
 /* line 2124: */
goto NCCACTR_out;
} 
 /* line 2126: */
 /* line 2127: */
if ( ((A68_INT )(A68_BITS )((A68_BITS )Mode&LQAACTR_decsmask)>NL(NYAACTR_initmodes).upb) )
{ 
 /* line 2128: */
for ( UCCACTR_j = 1;
UCCACTR_j <= 2;
UCCACTR_j += 1 )
{ 
 /* line 2129: */
switch ( UCCACTR_j )
{ 
case 1: 
 /* line 2131: */
VCCACTR = (*(&((*NL(QYAACTR_globcurrent))->Indics)));
break;
case 2: 
VCCACTR = NL(MABACTR_libinds);
break;
default: 
A_IMP_SKIP ;
break;
} 
RCCACTR_rri = VCCACTR;
 /* line 2132: */
 /* line 2133: */
for ( WCCACTR_i = 1;
WCCACTR_i <= 64;
WCCACTR_i += 1 )
{ 
OCCACTR_ri = (*(&A_VINDEX(RCCACTR_rri,WCCACTR_i)));
 /* line 2134: */
for ( ;; )
{ 
 /* line 2135: */
if ( !((OCCACTR_ri!=SQAACTR_nilind)) ) break;
 /* line 2136: */
XCCACTR = (*(&(OCCACTR_ri->U))) ;
switch ( XCCACTR.mode )
{ 
case 2: /* REF STRUCT(INT,INT,REF MODE53)  */
YCCACTR_ra = (XCCACTR.data.mode2);
 /* line 2137: */
 /* line 2138: */
if ( ((*(&(YCCACTR_ra->Mode)))==Mode) )
{ 
A_CALLPROC(NL(UACACTR_outboldid),((*(&(OCCACTR_ri->Name)))),((*(&(OCCACTR_ri->Name))),(NL(UACACTR_outboldid)).nonlocals));
 /* line 2139: */
 /* line 2140: */
 /* line 2141: */
 /* line 2142: */
goto NCCACTR_out;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 2143: */
 /* line 2144: */
OCCACTR_ri = (*(&(OCCACTR_ri->Rest)));
}
 /* line 2145: */
}
 /* line 2146: */
}
 /* line 2147: */
} 
 /* line 2149: */
 /* line 2150: */
if ( (Mode>KQAACTR_refmark) )
{ 
A_CALLPROC(NL(PBCACTR_outmess),(92),(92,(NL(PBCACTR_outmess)).nonlocals));
 /* line 2151: */
 /* line 2152: */
A_CALLPROC(NL(JCCACTR_outmode),((Mode-KQAACTR_refmark), High),((Mode-KQAACTR_refmark), High,(NL(JCCACTR_outmode)).nonlocals));
} 
else
{ 
 /* line 2153: */
ZCCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),Mode))) ;
switch ( ZCCACTR.mode )
{ 
case 1: /* INT */
ADCACTR_p = (ZCCACTR.data.mode1);
 /* line 2154: */
 /* line 2155: */
if ( (Mode==ZKAACTR_faultmode) )
{ 
 /* line 2156: */
siglongjmp(NL(SZBACTR_endf).label,1);
} 
else
{ 
 /* line 2157: */
 /* line 2159: */
if ( (Mode==ILAACTR_collatmode) )
{ 
BDCACTR = 67;
} 
else
{ 
 /* line 2160: */
 /* line 2161: */
BDCACTR = (Mode+66);
} 
 /* line 2162: */
 /* line 2163: */
A_CALLPROC(NL(PBCACTR_outmess),(BDCACTR),(BDCACTR,(NL(PBCACTR_outmess)).nonlocals));
} 
break;
case 6: /* REF STRUCT(INT)  */
CDCACTR_prc = (ZCCACTR.data.mode6);
 /* line 2164: */
{ 
A_CALLPROC(NL(PBCACTR_outmess),(46),(46,(NL(PBCACTR_outmess)).nonlocals));
 /* line 2165: */
 /* line 2166: */
 /* line 2167: */
A_CALLPROC(NL(JCCACTR_outmode),((*(&(CDCACTR_prc->Deproc))), High),((*(&(CDCACTR_prc->Deproc))), High,(NL(JCCACTR_outmode)).nonlocals));
} 
break;
case 2: /* REF STRUCT(INT,REF MODE54)  */
DDCACTR_u = (ZCCACTR.data.mode2);
 /* line 2168: */
{ 
A_CALLPROC(NL(PBCACTR_outmess),(93),(93,(NL(PBCACTR_outmess)).nonlocals));
 /* line 2169: */
 /* line 2170: */
if ( High )
{ 
PCCACTR_ml = (*(&(DDCACTR_u->Modelist)));
 /* line 2171: */
A_CALLPROC(NL(JCCACTR_outmode),((*(&(PCCACTR_ml->Mode))), A68_FALSE),((*(&(PCCACTR_ml->Mode))), A68_FALSE,(NL(JCCACTR_outmode)).nonlocals));
 /* line 2172: */
 /* line 2173: */
if ( ((PCCACTR_ml = (*(&(PCCACTR_ml->Rest))))!=OQAACTR_nilml) )
{ 
A_CALLPROC(NL(IBCACTR_outchars),(FDCACTR),(FDCACTR,(NL(IBCACTR_outchars)).nonlocals));
 /* line 2174: */
A_CALLPROC(NL(JCCACTR_outmode),((*(&(PCCACTR_ml->Mode))), A68_FALSE),((*(&(PCCACTR_ml->Mode))), A68_FALSE,(NL(JCCACTR_outmode)).nonlocals));
 /* line 2175: */
 /* line 2176: */
if ( ((*(&(PCCACTR_ml->Rest)))!=OQAACTR_nilml) )
{ 
 /* line 2177: */
 /* line 2178: */
 /* line 2179: */
A_CALLPROC(NL(PBCACTR_outmess),(99),(99,(NL(PBCACTR_outmess)).nonlocals));
} 
} 
} 
 /* line 2180: */
 /* line 2181: */
 /* line 2183: */
GDCACTR = (*NL(EACACTR_mind))+=1 ;
HDCACTR = (&A_VINDEX(NL(CACACTR_m),GDCACTR)) ;
(*HDCACTR) = ')';
} 
break;
case 3: /* REF STRUCT(INT,REF MODE54)  */
IDCACTR_pp = (ZCCACTR.data.mode3);
 /* line 2184: */
{ 
A_CALLPROC(NL(PBCACTR_outmess),(94),(94,(NL(PBCACTR_outmess)).nonlocals));
 /* line 2185: */
 /* line 2186: */
if ( High )
{ 
PCCACTR_ml = (*(&(IDCACTR_pp->Pars)));
 /* line 2187: */
A_CALLPROC(NL(JCCACTR_outmode),((*(&(PCCACTR_ml->Mode))), A68_FALSE),((*(&(PCCACTR_ml->Mode))), A68_FALSE,(NL(JCCACTR_outmode)).nonlocals));
 /* line 2188: */
 /* line 2189: */
if ( ((PCCACTR_ml = (*(&(PCCACTR_ml->Rest))))!=OQAACTR_nilml) )
{ 
A_CALLPROC(NL(IBCACTR_outchars),(KDCACTR),(KDCACTR,(NL(IBCACTR_outchars)).nonlocals));
 /* line 2190: */
A_CALLPROC(NL(JCCACTR_outmode),((*(&(PCCACTR_ml->Mode))), A68_FALSE),((*(&(PCCACTR_ml->Mode))), A68_FALSE,(NL(JCCACTR_outmode)).nonlocals));
 /* line 2191: */
 /* line 2192: */
if ( ((*(&(PCCACTR_ml->Rest)))!=OQAACTR_nilml) )
{ 
 /* line 2193: */
 /* line 2194: */
 /* line 2195: */
A_CALLPROC(NL(PBCACTR_outmess),(99),(99,(NL(PBCACTR_outmess)).nonlocals));
} 
} 
} 
 /* line 2196: */
LDCACTR = (*NL(EACACTR_mind))+=1 ;
MDCACTR = (&A_VINDEX(NL(CACACTR_m),LDCACTR)) ;
(*MDCACTR) = ')';
 /* line 2197: */
 /* line 2198: */
 /* line 2199: */
A_CALLPROC(NL(JCCACTR_outmode),((*(&(IDCACTR_pp->Deproc))), A68_FALSE),((*(&(IDCACTR_pp->Deproc))), A68_FALSE,(NL(JCCACTR_outmode)).nonlocals));
} 
break;
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
NDCACTR_s = (ZCCACTR.data.mode4);
 /* line 2200: */
 /* line 2201: */
if ( (Mode<26) )
{ 
 /* line 2202: */
A_CALLPROC(NL(PBCACTR_outmess),((Mode+66)),((Mode+66),(NL(PBCACTR_outmess)).nonlocals));
} 
else
{ 
A_CALLPROC(NL(PBCACTR_outmess),(45),(45,(NL(PBCACTR_outmess)).nonlocals));
 /* line 2203: */
 /* line 2204: */
if ( High )
{ 
QCCACTR_sl = (*(&(NDCACTR_s->Sels)));
 /* line 2205: */
A_CALLPROC(NL(JCCACTR_outmode),((*(&(QCCACTR_sl->Mode))), A68_FALSE),((*(&(QCCACTR_sl->Mode))), A68_FALSE,(NL(JCCACTR_outmode)).nonlocals));
 /* line 2206: */
ODCACTR = (*NL(EACACTR_mind))+=1 ;
PDCACTR = (&A_VINDEX(NL(CACACTR_m),ODCACTR)) ;
(*PDCACTR) = ' ';
 /* line 2207: */
A_CALLPROC(NL(IACACTR_outid),((*(&(QCCACTR_sl->Name)))),((*(&(QCCACTR_sl->Name))),(NL(IACACTR_outid)).nonlocals));
 /* line 2208: */
 /* line 2209: */
if ( ((QCCACTR_sl = (*(&(QCCACTR_sl->Rest))))!=RQAACTR_nilsel) )
{ 
A_CALLPROC(NL(IBCACTR_outchars),(RDCACTR),(RDCACTR,(NL(IBCACTR_outchars)).nonlocals));
 /* line 2210: */
A_CALLPROC(NL(JCCACTR_outmode),((*(&(QCCACTR_sl->Mode))), A68_FALSE),((*(&(QCCACTR_sl->Mode))), A68_FALSE,(NL(JCCACTR_outmode)).nonlocals));
 /* line 2211: */
SDCACTR = (*NL(EACACTR_mind))+=1 ;
TDCACTR = (&A_VINDEX(NL(CACACTR_m),SDCACTR)) ;
(*TDCACTR) = ' ';
 /* line 2212: */
A_CALLPROC(NL(IACACTR_outid),((*(&(QCCACTR_sl->Name)))),((*(&(QCCACTR_sl->Name))),(NL(IACACTR_outid)).nonlocals));
 /* line 2213: */
 /* line 2214: */
if ( ((*(&(QCCACTR_sl->Rest)))!=RQAACTR_nilsel) )
{ 
 /* line 2215: */
 /* line 2216: */
 /* line 2217: */
A_CALLPROC(NL(PBCACTR_outmess),(99),(99,(NL(PBCACTR_outmess)).nonlocals));
} 
} 
} 
 /* line 2218: */
 /* line 2219: */
 /* line 2220: */
UDCACTR = (*NL(EACACTR_mind))+=1 ;
VDCACTR = (&A_VINDEX(NL(CACACTR_m),UDCACTR)) ;
(*VDCACTR) = ')';
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
WDCACTR_ri1 = (ZCCACTR.data.mode5);
 /* line 2221: */
{ 
A_CALLPROC(NL(YBCACTR_outint),((*(&(WDCACTR_ri1->Length)))),((*(&(WDCACTR_ri1->Length))),(NL(YBCACTR_outint)).nonlocals));
 /* line 2222: */
XDCACTR = (*NL(EACACTR_mind))+=1 ;
YDCACTR = (&A_VINDEX(NL(CACACTR_m),XDCACTR)) ;
(*YDCACTR) = ' ';
 /* line 2223: */
 /* line 2224: */
 /* line 2225: */
A_CALLPROC(NL(JCCACTR_outmode),((*(&(WDCACTR_ri1->Imode))), High),((*(&(WDCACTR_ri1->Imode))), High,(NL(JCCACTR_outmode)).nonlocals));
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
ZDCACTR_v = (ZCCACTR.data.mode7);
 /* line 2226: */
{ 
 /* line 2227: */
if ( ((*(&(ZDCACTR_v->Deflex)))<0) )
{ 
 /* line 2228: */
A_CALLPROC(NL(PBCACTR_outmess),(72),(72,(NL(PBCACTR_outmess)).nonlocals));
} 
 /* line 2229: */
A_CALLPROC(NL(PBCACTR_outmess),(97),(97,(NL(PBCACTR_outmess)).nonlocals));
 /* line 2230: */
 /* line 2231: */
 /* line 2232: */
A_CALLPROC(NL(JCCACTR_outmode),((*(&(ZDCACTR_v->Vecmode))), High),((*(&(ZDCACTR_v->Vecmode))), High,(NL(JCCACTR_outmode)).nonlocals));
} 
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
AECACTR_a = (ZCCACTR.data.mode8);
 /* line 2233: */
{ 
 /* line 2234: */
if ( ((*(&(AECACTR_a->Deflex)))<0) )
{ 
 /* line 2235: */
A_CALLPROC(NL(PBCACTR_outmess),(72),(72,(NL(PBCACTR_outmess)).nonlocals));
} 
 /* line 2236: */
A_CALLPROC(NL(PBCACTR_outmess),(43),(43,(NL(PBCACTR_outmess)).nonlocals));
 /* line 2237: */
BECACTR_mm = (*(&(AECACTR_a->Mode)));
 /* line 2238: */
 /* line 2239: */
CECACTR = ((*(&(AECACTR_a->Nods)))-1);
for ( DECACTR = 1;
DECACTR <= CECACTR;
DECACTR += 1 )
{ 
 /* line 2240: */
EECACTR = (*(&A_VINDEX(NL(KUAACTR_modes),BECACTR_mm))) ;
switch ( EECACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
FECACTR_ra = (EECACTR.data.mode8);
 /* line 2241: */
 /* line 2242: */
 /* line 2243: */
BECACTR_mm = (*(&(FECACTR_ra->Mode)));
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 2244: */
 /* line 2245: */
GECACTR = ((*(&(AECACTR_a->Nods)))-1);
for ( HECACTR = 1;
HECACTR <= GECACTR;
HECACTR += 1 )
{ 
IECACTR = (*NL(EACACTR_mind))+=1 ;
JECACTR = (&A_VINDEX(NL(CACACTR_m),IECACTR)) ;
(*JECACTR) = ',';
}
 /* line 2246: */
A_CALLPROC(NL(PBCACTR_outmess),(44),(44,(NL(PBCACTR_outmess)).nonlocals));
 /* line 2247: */
 /* line 2248: */
 /* line 2249: */
A_CALLPROC(NL(JCCACTR_outmode),(BECACTR_mm, High),(BECACTR_mm, High,(NL(JCCACTR_outmode)).nonlocals));
} 
break;
case 9: /* REF STRUCT(INT,REF MODE63)  */
KECACTR_sten = (ZCCACTR.data.mode9);
 /* line 2250: */
{ 
A_CALLPROC(NL(PBCACTR_outmess),(98),(98,(NL(PBCACTR_outmess)).nonlocals));
 /* line 2251: */
 /* line 2252: */
 /* line 2253: */
A_CALLPROC(NL(JCCACTR_outmode),((*(&(KECACTR_sten->Mode))), High),((*(&(KECACTR_sten->Mode))), High,(NL(JCCACTR_outmode)).nonlocals));
} 
break;
default: 
 /* line 2254: */
 /* line 2255: */
A_CALLPROC(NL(IBCACTR_outchars),(MECACTR),(MECACTR,(NL(IBCACTR_outchars)).nonlocals));
break;
} 
} 
 /* line 2256: */
NCCACTR_out:
 /* line 2257: */
/*SKIP*/;
} 
A_PROC_EXIT(outmode);
return;
} 
#undef NL

A_STATIC A68_VOID  CFCACTR_state(A68_INT * Rd, A68_INT  Mode, void *NonLocals)
#define NL(x) (((DFCACTR_state *)NonLocals)->x)
{ 
A68_INT  EFCACTR_i;
A68_INT  FFCACTR;  /* clause result */
A68_BOOL  GFCACTR;  /* optbool result */
A_PROC_ENTRY(state);
 /* line 2294: */
{ 
EFCACTR_i = A_CALLPROC(NL(VECACTR_marker),(Mode),(Mode,(NL(VECACTR_marker)).nonlocals));
 /* line 2295: */
 /* line 2296: */
if ( (EFCACTR_i<=(-2)) )
{ 
 /* line 2297: */
(*Rd) = (-3);
} 
else
{ 
 /* line 2298: */
if ( (EFCACTR_i>=2) )
{ 
if ( ((*Rd)>0) )
{ 
FFCACTR = 3;
} 
else
{ 
 /* line 2299: */
FFCACTR = (-3);
} 
(*Rd) = FFCACTR;
} 
else
{ 
GFCACTR = (EFCACTR_i==(-1));
if ( GFCACTR )
{ /* line 2300: */
GFCACTR = ((*Rd)>0);
}
if ( GFCACTR )
{ 
 /* line 2301: */
 /* line 2302: */
(*Rd) = (-(*Rd));
} 
} 
} 
} 
A_PROC_EXIT(state);
return;
} 
#undef NL

A_STATIC A68_VOID  VNCACTR_strcoerce(A68_INT  F, A68_INT  T, void *NonLocals)
#define NL(x) (((WNCACTR_strcoerce *)NonLocals)->x)
{ 
A68_125  XNCACTR;  /* collateral clause result */
A68_125  YNCACTR_v;
A68_INT  ZNCACTR_f1;
A_PROC_ENTRY(strcoerce);
 /* line 2673: */
{ 
XNCACTR.Props = MQAACTR_z;
XNCACTR.Mode = F;
XNCACTR.Vlist = (A68_124 *)A68_NIL;
XNCACTR.Labs = (A68_69 *)A68_NIL;
YNCACTR_v = XNCACTR;
 /* line 2674: */
ZNCACTR_f1 = F;
 /* line 2675: */
 /* line 2676: */
if ( (NL(Oldf)<KQAACTR_refmark) )
{ 
if ( NL(Code) )
{ 
A_CALLPROC(NL(EJCACTR_deref),((&YNCACTR_v)),((&YNCACTR_v),(NL(EJCACTR_deref)).nonlocals));
} 
 /* line 2677: */
 /* line 2678: */
ZNCACTR_f1-=KQAACTR_refmark;
} 
 /* line 2679: */
 /* line 2680: */
if ( !A_CALLPROC((*NL(HKCACTR_coerce1)),((&YNCACTR_v), ZNCACTR_f1, T, 7, NL(Code)),((&YNCACTR_v), ZNCACTR_f1, T, 7, NL(Code),((*NL(HKCACTR_coerce1))).nonlocals)) )
{ 
 /* line 2681: */
 /* line 2682: */
(*NL(ENCACTR_p)) = 0;
} 
} 
A_PROC_EXIT(strcoerce);
return;
} 
#undef NL

A_STATIC A68_VOID  VZCACTR_elem(A68_124 * Vl, A68_INT  Mode, void *NonLocals)
#define NL(x) (((WZCACTR_elem *)NonLocals)->x)
{ 
A68_87  XZCACTR;  /* collateral clause result */
A68_106  YZCACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(elem);
 /* line 3365: */
{ 
XZCACTR.Fn = (*(&(Vl->Type)));
 /* line 3367: */
XZCACTR.M = (Mode*(*NL(DZCACTR_qneg)));
 /* line 3368: */
XZCACTR.Props = (A68_BITS )((A68_BITS )((*(&((&(Vl->V))->Props)))&GRAACTR_notdontpull)|(*NL(AZCACTR_qdontpull)));
XZCACTR.Param = (*NL(WYCACTR_n));
 /* line 3369: */
A_CALLPROC(NL(Output),(A_UNITE(YZCACTR,mode17,17,XZCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(YZCACTR,mode17,17,XZCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 3370: */
(*NL(AZCACTR_qdontpull)) = A_CALLPROC(NL(RYCACTR_strong),((&(Vl->V)), (-Mode), A68_TRUE),((&(Vl->V)), (-Mode), A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 3371: */
(*NL(ZYCACTR_ans)) = (A68_BITS )((*NL(ZYCACTR_ans))|(*NL(AZCACTR_qdontpull)));
 /* line 3372: */
 /* line 3373: */
(*NL(DZCACTR_qneg)) = 1;
} 
A_PROC_EXIT(elem);
return;
} 
#undef NL

A_STATIC A68_VOID  LIDACTR_f(A68_INT  I, A68_INT  J, void *NonLocals)
#define NL(x) (((MIDACTR_f *)NonLocals)->x)
{ 
A68_70  PIDACTR_u;
A68_INT  QIDACTR_a;
A68_INT  RIDACTR_b;
A68_INT  SIDACTR_c;
A68_INT  TIDACTR_d;
A68_BOOL  UIDACTR;  /* optbool result */
union {  /* BIOP 99 */
A68_66 *  source;
A68_INT *  destination;
} VIDACTR; 
union {  /* BIOP 99 */
A68_66 *  source;
A68_INT *  destination;
} WIDACTR; 
A68_INT  XIDACTR_y;
A68_INT  YIDACTR;  /* to part of loop */
A68_BOOL  ZIDACTR;  /* optbool result */
A68_199  BJDACTR_generator;   /* proc value of non-global proc */
A68_198  GJDACTR;  /* avoid structure result */
A68_198  HJDACTR_new;
A68_198  IJDACTR;  /* OPERATORS - trim index */
A68_198  JJDACTR;  /* YIELD */
A68_70  KJDACTR;  /* collateral clause result */
A68_INT  LJDACTR;  /* YIELD */
A68_70 * MJDACTR;  /* YIELD */
A_PROC_ENTRY(f);
 /* line 4073: */
{ 
 /* line 4075: */
QIDACTR_a = (A68_INT )(A68_BITS )((A68_BITS )I&LQAACTR_decsmask);
 /* line 4076: */
RIDACTR_b = (A68_INT )(A68_BITS )((A68_BITS )J&LQAACTR_decsmask);
 /* line 4077: */
SIDACTR_c = (I-QIDACTR_a);
 /* line 4078: */
TIDACTR_d = (J-RIDACTR_b);
 /* line 4080: */
 /* line 4081: */
if ( (SIDACTR_c!=TIDACTR_d) )
{ 
 /* line 4082: */
siglongjmp(NL(FIDACTR_exit).label,1);
} 
 /* line 4084: */
 /* line 4085: */
if ( (QIDACTR_a==RIDACTR_b) )
{ 
 /* line 4086: */
goto OIDACTR_out;
} 
else
{ 
 /* line 4087: */
if ( (QIDACTR_a<RIDACTR_b) )
{ 
SIDACTR_c = QIDACTR_a;
 /* line 4088: */
QIDACTR_a = RIDACTR_b;
 /* line 4089: */
 /* line 4090: */
RIDACTR_b = SIDACTR_c;
} 
} 
 /* line 4092: */
UIDACTR = (QIDACTR_a<=NL(Lastdone));
if ( ! UIDACTR )
{ /* line 4093: */
VIDACTR.source = (&A_VINDEX(NL(KUAACTR_modes),QIDACTR_a)) ;
WIDACTR.source = (&A_VINDEX(NL(KUAACTR_modes),RIDACTR_b)) ;
UIDACTR = ((*(VIDACTR.destination))!=(*(WIDACTR.destination)));
}
if ( UIDACTR )
{ 
siglongjmp(NL(FIDACTR_exit).label,1);
} 
 /* line 4095: */
 /* line 4096: */
YIDACTR = (*NL(PHDACTR_last_flex));
for ( XIDACTR_y = 1;
XIDACTR_y <= YIDACTR;
XIDACTR_y += 1 )
{ 
PIDACTR_u = (*(&A_VINDEX((*NL(WHDACTR_test_flex)),XIDACTR_y)));
 /* line 4097: */
ZIDACTR = ((*(&((&PIDACTR_u)->I)))==QIDACTR_a);
if ( ZIDACTR )
{ /* line 4098: */
ZIDACTR = ((*(&((&PIDACTR_u)->J)))==RIDACTR_b);
}
if ( ZIDACTR )
{ 
 /* line 4099: */
 /* line 4100: */
goto OIDACTR_out;
} 
}
 /* line 4102: */
 /* line 4104: */
if ( ((*NL(WHDACTR_test_flex)).upb==(*NL(PHDACTR_last_flex))) )
{ 
A_CLOSURE( BJDACTR_generator, CJDACTR_generator, DJDACTR_generator );
(( DJDACTR_generator * ) ( BJDACTR_generator.nonlocals )) -> WHDACTR_test_flex = NL(WHDACTR_test_flex);
A_CALLPROC(BJDACTR_generator,(A68_FALSE, &GJDACTR),(A68_FALSE, &GJDACTR,(BJDACTR_generator).nonlocals));
HJDACTR_new = GJDACTR;
 /* line 4105: */
JJDACTR = A_VTRIM(IJDACTR,(HJDACTR_new),A_VTSCRIPT(&(IJDACTR.upb),(HJDACTR_new).upb,1,(*NL(PHDACTR_last_flex)))) ;
A_VASSIGN2((*NL(WHDACTR_test_flex)),JJDACTR,A68_70 );
 /* line 4106: */
(*NL(WHDACTR_test_flex)) = HJDACTR_new;
} 
 /* line 4107: */
KJDACTR.I = QIDACTR_a;
KJDACTR.J = RIDACTR_b;
LJDACTR = (*NL(PHDACTR_last_flex))+=1 ;
MJDACTR = (&A_VINDEX((*NL(WHDACTR_test_flex)),LJDACTR)) ;
(*MJDACTR) = KJDACTR;
 /* line 4108: */
OIDACTR_out:
 /* line 4109: */
/*SKIP*/;
} 
A_PROC_EXIT(f);
return;
} 
#undef NL

A_STATIC A68_VOID  IPDACTR_assigngen(A68_52 * A, void *NonLocals)
#define NL(x) (((JPDACTR_assigngen *)NonLocals)->x)
{ 
A68_106  KPDACTR;  /* OPERATORS - mode -> union mode */
A68_106  LPDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  MPDACTR;  /* YIELD */
A68_85  NPDACTR;  /* collateral clause result */
A68_106  OPDACTR;  /* OPERATORS - mode -> union mode */
A68_85  PPDACTR;  /* collateral clause result */
A68_106  QPDACTR;  /* OPERATORS - mode -> union mode */
A68_85  RPDACTR;  /* collateral clause result */
A68_106  SPDACTR;  /* OPERATORS - mode -> union mode */
A68_106  TPDACTR;  /* OPERATORS - mode -> union mode */
A68_106  UPDACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(assigngen);
 /* line 4405: */
{ 
A_CALLPROC(NL(Output),(A_UNITE(KPDACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel))),(A_UNITE(KPDACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4406: */
A_CALLPROC(NL(YNDACTR_loadmodeproc),(A),(A,(NL(YNDACTR_loadmodeproc)).nonlocals));
 /* line 4407: */
MPDACTR = (*(&(NL(FPDACTR_loc)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(LPDACTR,mode3,3,MPDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(LPDACTR,mode3,3,MPDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4408: */
 /* line 4409: */
NPDACTR.Fn = HMAACTR_xparampack;
 /* line 4410: */
NPDACTR.M = A_CALLPROC(NL(ZICACTR_mproc),((*(&(A->Mode)))),((*(&(A->Mode))),(NL(ZICACTR_mproc)).nonlocals));
NPDACTR.Param = 1;
A_CALLPROC(NL(Output),(A_UNITE(OPDACTR,mode14,14,NPDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(OPDACTR,mode14,14,NPDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4411: */
PPDACTR.Fn = AOAACTR_xcall;
PPDACTR.M = A_CALLPROC(NL(JGCACTR_deflex),((*(&(A->Mode)))),((*(&(A->Mode))),(NL(JGCACTR_deflex)).nonlocals));
PPDACTR.Param = 3;
A_CALLPROC(NL(Output),(A_UNITE(QPDACTR,mode14,14,PPDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(QPDACTR,mode14,14,PPDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4412: */
 /* line 4413: */
RPDACTR.Fn = UMAACTR_xassign;
 /* line 4414: */
RPDACTR.M = (A_CALLPROC(NL(ZHCACTR_enflex),((*(&(A->Mode)))),((*(&(A->Mode))),(NL(ZHCACTR_enflex)).nonlocals))+KQAACTR_refmark);
RPDACTR.Param = 1;
A_CALLPROC(NL(Output),(A_UNITE(SPDACTR,mode14,14,RPDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(SPDACTR,mode14,14,RPDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4415: */
A_CALLPROC(NL(Output),(A_UNITE(TPDACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel))),(A_UNITE(TPDACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4416: */
A_CALLPROC(NL(Output),(A_UNITE(UPDACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel))),(A_UNITE(UPDACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4417: */
 /* line 4418: */
if ( ((*NL(VODACTR_lastid))>(*NL(GZAACTR_maxident))) )
{ 
 /* line 4419: */
 /* line 4420: */
(*NL(GZAACTR_maxident)) = (*NL(VODACTR_lastid));
} 
} 
A_PROC_EXIT(assigngen);
return;
} 
#undef NL

A_STATIC A68_VOID  YPDACTR_assignarr(A68_67 * Id, A68_52 * A, void *NonLocals)
#define NL(x) (((ZPDACTR_assignarr *)NonLocals)->x)
{ 
A68_67  AQDACTR;  /* collateral clause result */
A68_67  BQDACTR_element;
A68_INT  CQDACTR_nod;
A68_INT  DQDACTR;  /* YIELD */
A68_66  EQDACTR;  /* united object - for case conformity */
A68_62 * FQDACTR_arr;
A68_INT  GQDACTR;  /* clause result */
A68_INT * HQDACTR;  /* YIELD */
A68_61 * IQDACTR_v;
A68_INT * JQDACTR;  /* YIELD */
A68_106  KQDACTR;  /* OPERATORS - mode -> union mode */
A68_87  LQDACTR;  /* collateral clause result */
A68_106  MQDACTR;  /* OPERATORS - mode -> union mode */
A68_81  NQDACTR;  /* collateral clause result */
A68_106  OQDACTR;  /* OPERATORS - mode -> union mode */
A68_87  PQDACTR;  /* collateral clause result */
A68_106  QQDACTR;  /* OPERATORS - mode -> union mode */
A68_106  RQDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  SQDACTR;  /* YIELD */
A68_87  TQDACTR;  /* collateral clause result */
A68_106  UQDACTR;  /* OPERATORS - mode -> union mode */
A68_106  VQDACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(assignarr);
 /* line 4423: */
{ 
AQDACTR.Name = NL(BZAACTR_nullid);
 /* line 4424: */
AQDACTR.Decno = (*NL(VODACTR_lastid))+=1;
AQDACTR.Level = 1;
AQDACTR.Mode = 0;
 /* line 4425: */
AQDACTR.Scope = 0;
AQDACTR.Rest = (A68_67 *)A68_NIL;
BQDACTR_element = AQDACTR;
 /* line 4426: */
 /* line 4428: */
 /* line 4429: */
DQDACTR = ((*(&(Id->Mode)))-KQAACTR_refmark) ;
EQDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),DQDACTR))) ;
switch ( EQDACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
FQDACTR_arr = (EQDACTR.data.mode8);
 /* line 4430: */
{ 
CQDACTR_nod = (*(&(FQDACTR_arr->Nods)));
 /* line 4431: */
 /* line 4432: */
if ( (CQDACTR_nod==1) )
{ 
 /* line 4433: */
 /* line 4434: */
GQDACTR = A_CALLPROC(NL(ZHCACTR_enflex),((*(&(FQDACTR_arr->Mode)))),((*(&(FQDACTR_arr->Mode))),(NL(ZHCACTR_enflex)).nonlocals));
} 
else
{ 
 /* line 4435: */
GQDACTR = (*(&(FQDACTR_arr->Mode)));
} 
 /* line 4436: */
HQDACTR = (&((&BQDACTR_element)->Mode)) ;
(*HQDACTR) = (GQDACTR+KQAACTR_refmark);
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
IQDACTR_v = (EQDACTR.data.mode7);
 /* line 4437: */
{ 
CQDACTR_nod = 1;
 /* line 4438: */
 /* line 4439: */
 /* line 4440: */
JQDACTR = (&((&BQDACTR_element)->Mode)) ;
(*JQDACTR) = (A_CALLPROC(NL(ZHCACTR_enflex),((*(&(IQDACTR_v->Vecmode)))),((*(&(IQDACTR_v->Vecmode))),(NL(ZHCACTR_enflex)).nonlocals))+KQAACTR_refmark);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 4442: */
A_CALLPROC(NL(Output),(A_UNITE(KQDACTR,mode16,16,JPAACTR_xwforall), (*NL(FZAACTR_outlevel))),(A_UNITE(KQDACTR,mode16,16,JPAACTR_xwforall), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4443: */
LQDACTR.Fn = SNAACTR_xforall;
LQDACTR.M = 0;
LQDACTR.Props = WLAACTR_compgenbit;
LQDACTR.Param = 1;
A_CALLPROC(NL(Output),(A_UNITE(MQDACTR,mode17,17,LQDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(MQDACTR,mode17,17,LQDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4444: */
NQDACTR.Type = CPAACTR_xforalldec;
NQDACTR.Iddec = (&BQDACTR_element);
A_CALLPROC(NL(Output),(A_UNITE(OQDACTR,mode12,12,NQDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(OQDACTR,mode12,12,NQDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4445: */
PQDACTR.Fn = XNAACTR_xdo;
 /* line 4446: */
PQDACTR.M = YKAACTR_voidmode;
 /* line 4447: */
PQDACTR.Props = (A68_BITS )(WLAACTR_compgenbit|SLAACTR_semibit);
PQDACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(QQDACTR,mode17,17,PQDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(QQDACTR,mode17,17,PQDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4448: */
SQDACTR = (*(&((&BQDACTR_element)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(RQDACTR,mode3,3,SQDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(RQDACTR,mode3,3,SQDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4449: */
 /* line 4450: */
if ( (CQDACTR_nod==1) )
{ 
 /* line 4451: */
A_CALLPROC(NL(HPDACTR_assigngen),(A),(A,(NL(HPDACTR_assigngen)).nonlocals));
} 
else
{ 
 /* line 4452: */
A_CALLPROC(NL(XPDACTR_assignarr),((&BQDACTR_element), A),((&BQDACTR_element), A,(NL(XPDACTR_assignarr)).nonlocals));
} 
 /* line 4453: */
TQDACTR.Fn = TNAACTR_xod;
TQDACTR.M = YKAACTR_voidmode;
TQDACTR.Props = WLAACTR_compgenbit;
TQDACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(UQDACTR,mode17,17,TQDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(UQDACTR,mode17,17,TQDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4454: */
A_CALLPROC(NL(Output),(A_UNITE(VQDACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel))),(A_UNITE(VQDACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4455: */
 /* line 4456: */
(*NL(VODACTR_lastid))-=1;
} 
A_PROC_EXIT(assignarr);
return;
} 
#undef NL

A_STATIC A68_VOID  UUDACTR_subam(A68_53 * Am, void *NonLocals)
#define NL(x) (((VUDACTR_subam *)NonLocals)->x)
{ 
A68_53 * WUDACTR_aml;
A68_INT * XUDACTR_ri;
A68_INT  YUDACTR_i;
A_PROC_ENTRY(subam);
 /* line 4628: */
{ 
WUDACTR_aml = Am;
 /* line 4630: */
for ( ;; )
{ 
 /* line 4631: */
if ( !((WUDACTR_aml!=PQAACTR_nilaml)) ) break;
XUDACTR_ri = (&((*(&(WUDACTR_aml->Am)))->Mode));
 /* line 4632: */
YUDACTR_i = (*XUDACTR_ri);
 /* line 4633: */
 /* line 4634: */
if ( (YUDACTR_i!=(-1)) )
{ 
(*XUDACTR_ri) = (-1);
 /* line 4635: */
A_CALLPROC(NL(TUDACTR_subam),((*(&((*(&(WUDACTR_aml->Am)))->El)))),((*(&((*(&(WUDACTR_aml->Am)))->El))),(NL(TUDACTR_subam)).nonlocals));
 /* line 4636: */
(*XUDACTR_ri) = YUDACTR_i;
 /* line 4637: */
 /* line 4638: */
if ( ((A68_BITS )((A68_BITS )YUDACTR_i&LQAACTR_decsmask)==(A68_BITS )NL(J)) )
{ 
 /* line 4639: */
 /* line 4640: */
(*XUDACTR_ri)+=NL(LUDACTR_m);
} 
} 
 /* line 4641: */
 /* line 4642: */
WUDACTR_aml = (*(&(WUDACTR_aml->Rest)));
}
 /* line 4643: */
} 
A_PROC_EXIT(subam);
return;
} 
#undef NL

A_STATIC A68_VOID  BVDACTR_subd(A68_INT * M, void *NonLocals)
#define NL(x) (((CVDACTR_subd *)NonLocals)->x)
{ 
A_PROC_ENTRY(subd);
 /* line 4646: */
 /* line 4647: */
if ( ((*M)==NL(J)) )
{ 
 /* line 4648: */
(*M) = NL(I);
} 
else
{ 
 /* line 4649: */
if ( ((*M)==(-NL(J))) )
{ 
 /* line 4650: */
(*M) = (-NL(I));
} 
} 
A_PROC_EXIT(subd);
return;
} 
#undef NL

A_STATIC A68_VOID  XWDACTR_generator(A68_BOOL  VWDACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals)
#define NL(x) (((YWDACTR_generator *)NonLocals)->x)
{ 
A68_100  ZWDACTR;  /* clause result */
A68_100  AXDACTR;  /* OPERATORS - dynamic generator */
{ 
AXDACTR.upb = (NL(Done).upb+1) ;
( VWDACTR_anonymous? A_VLOC(A68_INT ,AXDACTR): A_VHEAP(A68_INT ,AXDACTR) );
ZWDACTR = AXDACTR;
} 
*ReturnedValue = (ZWDACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SXDACTR_generator(A68_BOOL  QXDACTR_anonymous, A68_215  *ReturnedValue, void *NonLocals)
#define NL(x) (((TXDACTR_generator *)NonLocals)->x)
{ 
A68_215  UXDACTR;  /* clause result */
A68_215  VXDACTR;  /* OPERATORS - dynamic generator */
{ 
VXDACTR.dim[0].upb = NL(OXDACTR_u) ;
VXDACTR.dim[0].lwb = NL(PXDACTR_l) ;
A_1INITSTRIDES(VXDACTR) ;
( QXDACTR_anonymous? A_R1LOC(A68_INT ,VXDACTR): A_R1HEAP(A68_INT ,VXDACTR) );
UXDACTR = VXDACTR;
} 
*ReturnedValue = (UXDACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AYDACTR_generator(A68_BOOL  YXDACTR_anonymous, A68_215  *ReturnedValue, void *NonLocals)
#define NL(x) (((BYDACTR_generator *)NonLocals)->x)
{ 
A68_215  CYDACTR;  /* clause result */
A68_215  DYDACTR;  /* OPERATORS - dynamic generator */
{ 
DYDACTR.dim[0].upb = NL(OXDACTR_u) ;
DYDACTR.dim[0].lwb = NL(PXDACTR_l) ;
A_1INITSTRIDES(DYDACTR) ;
( YXDACTR_anonymous? A_R1LOC(A68_INT ,DYDACTR): A_R1HEAP(A68_INT ,DYDACTR) );
CYDACTR = DYDACTR;
} 
*ReturnedValue = (CYDACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MYDACTR_generator(A68_BOOL  KYDACTR_anonymous, A68_198  *ReturnedValue, void *NonLocals)
#define NL(x) (((NYDACTR_generator *)NonLocals)->x)
{ 
A68_198  OYDACTR;  /* clause result */
A68_198  PYDACTR;  /* OPERATORS - dynamic generator */
{ 
PYDACTR.upb = ((NL(OXDACTR_u)-NL(PXDACTR_l))+1) ;
( KYDACTR_anonymous? A_VLOC(A68_70 ,PYDACTR): A_VHEAP(A68_70 ,PYDACTR) );
OYDACTR = PYDACTR;
} 
*ReturnedValue = (OYDACTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  VYDACTR_f(A68_INT  Ma, A68_INT  Mb, void *NonLocals)
#define NL(x) (((WYDACTR_f *)NonLocals)->x)
{ 
A68_INT  XYDACTR_a;
A68_INT  YYDACTR_b;
A68_BOOL  ZYDACTR;  /* optbool result */
A68_BOOL  AZDACTR;  /* optbool result */
A68_BOOL  BZDACTR;  /* clause result */
A_PROC_ENTRY(f);
 /* line 4795: */
{ 
XYDACTR_a = (A68_INT )(A68_BITS )((A68_BITS )Ma&LQAACTR_decsmask);
YYDACTR_b = (A68_INT )(A68_BITS )((A68_BITS )Mb&LQAACTR_decsmask);
 /* line 4796: */
 /* line 4797: */
ZYDACTR = (Ma==Mb);
if ( ! ZYDACTR )
{AZDACTR = (XYDACTR_a>=NL(PXDACTR_l));
if ( AZDACTR )
{AZDACTR = (YYDACTR_b>=NL(PXDACTR_l));
}
if ( AZDACTR )
{AZDACTR = ((Ma-XYDACTR_a)==(Mb-YYDACTR_b));
}
 /* line 4798: */
if ( AZDACTR )
{ /* line 4799: */
AZDACTR = ((*(&A_R1INDEX(NL(EYDACTR_classno),XYDACTR_a)))==(*(&A_R1INDEX(NL(EYDACTR_classno),YYDACTR_b))));
}
ZYDACTR = AZDACTR;
}
BZDACTR = ZYDACTR;
} 
A_PROC_EXIT(f);
return( BZDACTR );
} 
#undef NL

A_STATIC A68_BOOL  FZDACTR_flist(A68_54 * Mx, A68_54 * My, void *NonLocals)
#define NL(x) (((GZDACTR_flist *)NonLocals)->x)
{ 
A68_54 * HZDACTR_slx;
A68_54 * IZDACTR_sly;
A68_BOOL  JZDACTR;  /* optbool result */
A68_BOOL  KZDACTR;  /* optbool result */
A68_BOOL  LZDACTR;  /* clause result */
A_PROC_ENTRY(flist);
 /* line 4801: */
{ 
HZDACTR_slx = Mx;
IZDACTR_sly = My;
 /* line 4802: */
for ( ;; )
{ 
JZDACTR = (HZDACTR_slx!=OQAACTR_nilml);
if ( JZDACTR )
{JZDACTR = (IZDACTR_sly!=OQAACTR_nilml);
}
 /* line 4803: */
if ( JZDACTR )
{ /* line 4804: */
JZDACTR = A_CALLPROC(NL(UYDACTR_f),((*(&(HZDACTR_slx->Mode))), (*(&(IZDACTR_sly->Mode)))),((*(&(HZDACTR_slx->Mode))), (*(&(IZDACTR_sly->Mode))),(NL(UYDACTR_f)).nonlocals));
}
if ( !(JZDACTR) ) break;
HZDACTR_slx = (*(&(HZDACTR_slx->Rest)));
 /* line 4805: */
IZDACTR_sly = (*(&(IZDACTR_sly->Rest)));
}
 /* line 4806: */
KZDACTR = (HZDACTR_slx==OQAACTR_nilml);
if ( KZDACTR )
{ /* line 4807: */
KZDACTR = (IZDACTR_sly==OQAACTR_nilml);
}
LZDACTR = KZDACTR;
} 
A_PROC_EXIT(flist);
return( LZDACTR );
} 
#undef NL

A_STATIC A68_VOID  TDEACTR_fass(void *NonLocals)
#define NL(x) (((UDEACTR_fass *)NonLocals)->x)
{ 
A68_106  VDEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  WDEACTR;  /* YIELD */
A68_106  XDEACTR;  /* OPERATORS - mode -> union mode */
A68_106  YDEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  ZDEACTR;  /* YIELD */
A68_85  AEEACTR;  /* collateral clause result */
A68_106  BEEACTR;  /* OPERATORS - mode -> union mode */
A68_85  CEEACTR;  /* collateral clause result */
A68_106  DEEACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(fass);
{ 
WDEACTR = (*(&(NL(PDEACTR_lhs)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(VDEACTR,mode3,3,WDEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(VDEACTR,mode3,3,WDEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4967: */
A_CALLPROC(NL(Output),(A_UNITE(XDEACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel))),(A_UNITE(XDEACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4968: */
ZDEACTR = (*(&(NL(RDEACTR_rhs)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(YDEACTR,mode3,3,ZDEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(YDEACTR,mode3,3,ZDEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4969: */
AEEACTR.Fn = JMAACTR_xcopy;
AEEACTR.M = (*(&(NL(RDEACTR_rhs)->Mode)));
AEEACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(BEEACTR,mode14,14,AEEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(BEEACTR,mode14,14,AEEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4970: */
CEEACTR.Fn = UMAACTR_xassign;
CEEACTR.M = (NL(Mode)+KQAACTR_refmark);
CEEACTR.Param = 1;
 /* line 4971: */
A_CALLPROC(NL(Output),(A_UNITE(DEEACTR,mode14,14,CEEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(DEEACTR,mode14,14,CEEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
A_PROC_EXIT(fass);
return;
} 
#undef NL

A_STATIC A68_VOID  TKEACTR_generator(A68_BOOL  RKEACTR_anonymous, A68_221  *ReturnedValue, void *NonLocals)
#define NL(x) (((UKEACTR_generator *)NonLocals)->x)
{ 
A68_221  VKEACTR;  /* clause result */
A68_221  WKEACTR;  /* OPERATORS - dynamic generator */
{ 
WKEACTR.upb = ((*NL(PKEACTR_nomem))+10) ;
( RKEACTR_anonymous? A_VLOC(A68_INT *,WKEACTR): A_VHEAP(A68_INT *,WKEACTR) );
VKEACTR = WKEACTR;
} 
*ReturnedValue = (VKEACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BLEACTR_remember(A68_INT * Modepos, void *NonLocals)
#define NL(x) (((CLEACTR_remember *)NonLocals)->x)
{ 
A68_221  DLEACTR;  /* avoid structure result */
A68_221  ELEACTR_temp;
A68_221  FLEACTR;  /* OPERATORS - trim index */
A68_221  GLEACTR;  /* YIELD */
A68_INT  HLEACTR;  /* YIELD */
A68_INT ** ILEACTR;  /* YIELD */
A_PROC_ENTRY(remember);
 /* line 5214: */
 /* line 5215: */
if ( ((A68_INT )(A68_BITS )((A68_BITS )(*Modepos)&LQAACTR_decsmask)>=(*NL(OKEACTR_basemode))) )
{ 
 /* line 5216: */
if ( ((*NL(PKEACTR_nomem))==(*NL(XKEACTR_modemem)).upb) )
{ 
A_CALLPROC((*NL(QKEACTR_anonymous)),(A68_FALSE, &DLEACTR),(A68_FALSE, &DLEACTR,((*NL(QKEACTR_anonymous))).nonlocals));
ELEACTR_temp = DLEACTR;
 /* line 5217: */
GLEACTR = A_VTRIM(FLEACTR,(ELEACTR_temp),A_VTSCRIPT(&(FLEACTR.upb),(ELEACTR_temp).upb,1,(*NL(PKEACTR_nomem)))) ;
A_VASSIGN2((*NL(XKEACTR_modemem)),GLEACTR,A68_INT *);
 /* line 5218: */
(*NL(XKEACTR_modemem)) = ELEACTR_temp;
} 
 /* line 5219: */
 /* line 5220: */
HLEACTR = (*NL(PKEACTR_nomem))+=1 ;
ILEACTR = (&A_VINDEX((*NL(XKEACTR_modemem)),HLEACTR)) ;
(*ILEACTR) = Modepos;
} 
A_PROC_EXIT(remember);
return;
} 
#undef NL

A_STATIC A68_VOID  MLEACTR_repmode(A68_INT  Old, A68_INT  New, void *NonLocals)
#define NL(x) (((NLEACTR_repmode *)NonLocals)->x)
{ 
A68_INT ** OLEACTR_mmi;
A68_221  PLEACTR;  /* OPERATORS - trim index */
A68_221  QLEACTR;  /* forall yield */
A68_INT  RLEACTR;  /* forall loop counter */
A68_INT  SLEACTR_r;
A_PROC_ENTRY(repmode);
 /* line 5223: */
QLEACTR = A_VTRIM(PLEACTR,((*NL(XKEACTR_modemem))),A_VTSCRIPT(&(PLEACTR.upb),((*NL(XKEACTR_modemem))).upb,1,(*NL(PKEACTR_nomem)))) ;
RLEACTR = QLEACTR.upb -1;
OLEACTR_mmi = QLEACTR.data;
for (;RLEACTR-- >= 0;
(OLEACTR_mmi++
) )
{
 /* line 5224: */
SLEACTR_r = (A68_INT )(A68_BITS )((A68_BITS )(**OLEACTR_mmi)&LQAACTR_decsmask);
 /* line 5225: */
 /* line 5226: */
if ( (SLEACTR_r==Old) )
{ 
 /* line 5227: */
 /* line 5228: */
(**OLEACTR_mmi) = ((New+(**OLEACTR_mmi))-SLEACTR_r);
} 
}
A_PROC_EXIT(repmode);
return;
} 
#undef NL

A_STATIC A68_VOID  YLEACTR_generator(A68_BOOL  WLEACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZLEACTR_generator *)NonLocals)->x)
{ 
A68_127  AMEACTR;  /* clause result */
A68_127  BMEACTR;  /* OPERATORS - dynamic generator */
{ 
BMEACTR.upb = ((*NL(ULEACTR_noids))+10) ;
( WLEACTR_anonymous? A_VLOC(A68_67 *,BMEACTR): A_VHEAP(A68_67 *,BMEACTR) );
AMEACTR = BMEACTR;
} 
*ReturnedValue = (AMEACTR);
return;
} 
#undef NL

A_STATIC A68_INT  FMEACTR_rc(void *NonLocals)
#define NL(x) (((GMEACTR_rc *)NonLocals)->x)
{ 
A68_INT  HMEACTR_c;
A68_INT  IMEACTR;  /* clause result */
A_PROC_ENTRY(rc);
{ 
HMEACTR_c = (A68_INT)(unsigned char)(*(&A_VINDEX(NL(Ka),(*NL(NKEACTR_ki)))));
 /* line 5237: */
(*NL(NKEACTR_ki))+=1;
 /* line 5238: */
 /* line 5239: */
IMEACTR = HMEACTR_c;
} 
A_PROC_EXIT(rc);
return( IMEACTR );
} 
#undef NL

A_STATIC A68_INT  KMEACTR_rw(void *NonLocals)
#define NL(x) (((LMEACTR_rw *)NonLocals)->x)
{ 
A68_INT  MMEACTR;  /* YIELD */
A68_INT  NMEACTR_c;
A68_INT  OMEACTR;  /* clause result */
A_PROC_ENTRY(rw);
{ 
MMEACTR = ((*NL(NKEACTR_ki))+1) ;
NMEACTR_c = (((A68_INT)(unsigned char)(*(&A_VINDEX(NL(Ka),(*NL(NKEACTR_ki)))))*XDAACTR_maxchar)+(A68_INT)(unsigned char)(*(&A_VINDEX(NL(Ka),MMEACTR))));
 /* line 5243: */
(*NL(NKEACTR_ki))+=2;
 /* line 5244: */
 /* line 5245: */
OMEACTR = NMEACTR_c;
} 
A_PROC_EXIT(rw);
return( OMEACTR );
} 
#undef NL

A_STATIC A68_INT  RMEACTR_rs(A68_31 * Id, void *NonLocals)
#define NL(x) (((SMEACTR_rs *)NonLocals)->x)
{ 
A68_INT  TMEACTR_u;
A68_INT  UMEACTR;  /* clause result */
A68_INT  VMEACTR_l;
A68_INT  WMEACTR_i;
A68_INT  XMEACTR_j;
A68_INT  YMEACTR;  /* to part of loop */
A68_INT  ZMEACTR;  /* YIELD */
A68_INT  ANEACTR;  /* YIELD */
A68_VC  BNEACTR;  /* OPERATORS - istruct -> vector */
A68_VC  CNEACTR_n;
A68_VC  DNEACTR;  /* OPERATORS - trim index */
A68_VC  ENEACTR;  /* OPERATORS - trim index */
A68_VC  FNEACTR;  /* YIELD */
A68_VC  GNEACTR;  /* OPERATORS - assign op */
A68_INT  HNEACTR;  /* clause result */
A_PROC_ENTRY(rs);
 /* line 5248: */
{ 
TMEACTR_u = (A68_INT)(unsigned char)(*(&A_VINDEX(NL(Ka),(*NL(NKEACTR_ki)))));
 /* line 5249: */
if ( (TMEACTR_u>VDAACTR_maxid) )
{ 
UMEACTR = VDAACTR_maxid;
} 
else
{ 
UMEACTR = TMEACTR_u;
} 
VMEACTR_l = UMEACTR;
 /* line 5250: */
WMEACTR_i = 0;
 /* line 5251: */
 /* line 5252: */
YMEACTR = VMEACTR_l;
for ( XMEACTR_j = 1;
XMEACTR_j <= YMEACTR;
XMEACTR_j += 1 )
{ 
 /* line 5253: */
ZMEACTR = ((*NL(NKEACTR_ki))+XMEACTR_j) ;
if ( !(((*(&A_VINDEX(NL(Ka),ZMEACTR)))!=' ')) ) break;
ANEACTR = ((*NL(NKEACTR_ki))+XMEACTR_j) ;
WMEACTR_i+=(A68_INT)(unsigned char)(*(&A_VINDEX(NL(Ka),ANEACTR)));
}
 /* line 5255: */
CNEACTR_n = A_ISVEC(BNEACTR,Id,32,A68_CHAR );
 /* line 5256: */
(*Id) = NL(XTAACTR_spaces);
 /* line 5257: */
FNEACTR = A_VTRIM(DNEACTR,(CNEACTR_n),A_VTSCRIPT(&(DNEACTR.upb),(CNEACTR_n).upb,1,VMEACTR_l)) ;
GNEACTR = A_VTRIM(ENEACTR,(NL(Ka)),A_VTSCRIPT(&(ENEACTR.upb),(NL(Ka)).upb,((*NL(NKEACTR_ki))+1),((*NL(NKEACTR_ki))+VMEACTR_l))) ;
A_VASSIGN2(GNEACTR,FNEACTR,A68_CHAR );
 /* line 5258: */
(*NL(NKEACTR_ki))+=(TMEACTR_u+1);
 /* line 5259: */
 /* line 5260: */
HNEACTR = (1+(A68_INT )(A68_BITS )((A68_BITS )WMEACTR_i&0X3fU));
} 
A_PROC_EXIT(rs);
return( HNEACTR );
} 
#undef NL

A_STATIC A68_INT  KNEACTR_unnumber(A68_INT  Mode, void *NonLocals)
#define NL(x) (((LNEACTR_unnumber *)NonLocals)->x)
{ 
A68_INT  MNEACTR_m;
A68_INT  NNEACTR_n;
A68_INT  ONEACTR;  /* clause result */
A68_66  RNEACTR;  /* united object - for case conformity */
A68_65  SNEACTR_sa;
A_PROC_ENTRY(unnumber);
 /* line 5264: */
{ 
MNEACTR_m = (A68_INT )(A68_BITS )((A68_BITS )Mode&LQAACTR_decsmask);
 /* line 5266: */
 /* line 5267: */
 /* line 5268: */
if ( (MNEACTR_m<100) )
{ 
ONEACTR = Mode;
} 
else
{ 
NNEACTR_n = MNEACTR_m;
 /* line 5269: */
MNEACTR_m = ((MNEACTR_m+(*NL(OKEACTR_basemode)))-100);
 /* line 5270: */
QNEACTR_aa:
 /* line 5271: */
 /* line 5272: */
RNEACTR = (*(&A_VINDEX(NL(KUAACTR_modes),MNEACTR_m))) ;
switch ( RNEACTR.mode )
{ 
case 11: /* STRUCT(INT)  */
SNEACTR_sa = (RNEACTR.data.mode11);
 /* line 5273: */
{ 
MNEACTR_m = SNEACTR_sa.Mode;
 /* line 5274: */
 /* line 5275: */
 /* line 5276: */
 /* line 5277: */
goto QNEACTR_aa;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 5278: */
 /* line 5279: */
 /* line 5280: */
ONEACTR = ((MNEACTR_m+Mode)-NNEACTR_n);
} 
} 
A_PROC_EXIT(unnumber);
return( ONEACTR );
} 
#undef NL

A_STATIC A68_INT  UNEACTR_readmodes(void *NonLocals)
#define NL(x) (((VNEACTR_readmodes *)NonLocals)->x)
{ 
A68_INT  WNEACTR_firstmode;
A68_INT  XNEACTR_i;
A68_INT  YNEACTR_j;
A68_INT  ZNEACTR_k;
A68_55  AOEACTR_prc;
A68_58 * BOEACTR_sl;
A68_58 ** COEACTR_rsl;
A68_159  DOEACTR_rm;   /* proc value of non-global proc */
A68_224  JOEACTR_rml;   /* proc value of non-global proc */
A68_55 * UOEACTR_prc;
A68_INT * VOEACTR;  /* YIELD */
A68_66  WOEACTR;  /* clause result */
A68_66  XOEACTR;  /* OPERATORS - mode -> union mode */
A68_57 * YOEACTR_hp;
A68_INT * ZOEACTR;  /* YIELD */
A68_54 ** APEACTR;  /* YIELD */
A68_66  BPEACTR;  /* OPERATORS - mode -> union mode */
A68_56  CPEACTR;  /* collateral clause result */
A68_56 * DPEACTR;  /* YIELD */
A68_66  EPEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  FPEACTR_i;
A68_INT  GPEACTR;  /* to part of loop */
A68_INT * HPEACTR;  /* YIELD */
A68_INT * IPEACTR;  /* YIELD */
A68_58 ** JPEACTR;  /* YIELD */
A68_59  KPEACTR;  /* collateral clause result */
A68_59 * LPEACTR;  /* YIELD */
A68_66  MPEACTR;  /* OPERATORS - mode -> union mode */
A68_60 * NPEACTR_hi;
A68_INT * OPEACTR;  /* YIELD */
A68_INT * PPEACTR;  /* YIELD */
A68_INT * QPEACTR;  /* YIELD */
A68_INT * RPEACTR;  /* YIELD */
A68_INT * SPEACTR;  /* YIELD */
A68_66  TPEACTR;  /* OPERATORS - mode -> union mode */
A68_61 * UPEACTR_hv;
A68_INT * VPEACTR;  /* YIELD */
A68_INT * WPEACTR;  /* YIELD */
A68_INT * XPEACTR;  /* YIELD */
A68_66  YPEACTR;  /* OPERATORS - mode -> union mode */
A68_62 * ZPEACTR_ha;
A68_INT * AQEACTR;  /* YIELD */
A68_INT * BQEACTR;  /* YIELD */
A68_INT * CQEACTR;  /* YIELD */
A68_INT * DQEACTR;  /* YIELD */
A68_66  EQEACTR;  /* OPERATORS - mode -> union mode */
A68_64 * FQEACTR_s;
A68_64  GQEACTR;  /* collateral clause result */
A68_66  HQEACTR;  /* OPERATORS - mode -> union mode */
A68_66 * IQEACTR;  /* YIELD */
A68_INT  JQEACTR;  /* clause result */
A_PROC_ENTRY(readmodes);
{ 
WNEACTR_firstmode = (((*NL(VYAACTR_lastmode))-(*NL(OKEACTR_basemode)))+101);
 /* line 5284: */
 /* line 5285: */
 /* line 5286: */
 /* line 5288: */
 /* line 5289: */
A_CLOSURE( DOEACTR_rm, EOEACTR_rm, FOEACTR_rm );
(( FOEACTR_rm * ) ( DOEACTR_rm.nonlocals )) -> JMEACTR_rw = NL(JMEACTR_rw);
(( FOEACTR_rm * ) ( DOEACTR_rm.nonlocals )) -> WNEACTR_firstmode = (&WNEACTR_firstmode);
(( FOEACTR_rm * ) ( DOEACTR_rm.nonlocals )) -> OKEACTR_basemode = NL(OKEACTR_basemode);
(( FOEACTR_rm * ) ( DOEACTR_rm.nonlocals )) -> JNEACTR_unnumber = NL(JNEACTR_unnumber);
 /* line 5296: */
 /* line 5297: */
A_CLOSURE( JOEACTR_rml, KOEACTR_rml, LOEACTR_rml );
(( LOEACTR_rml * ) ( JOEACTR_rml.nonlocals )) -> EMEACTR_rc = NL(EMEACTR_rc);
(( LOEACTR_rml * ) ( JOEACTR_rml.nonlocals )) -> DOEACTR_rm = DOEACTR_rm;
(( LOEACTR_rml * ) ( JOEACTR_rml.nonlocals )) -> ALEACTR_remember = NL(ALEACTR_remember);
 /* line 5309: */
for ( ;; )
{ 
 /* line 5310: */
if ( !(((XNEACTR_i = A_CALLPROC(NL(EMEACTR_rc),(),((NL(EMEACTR_rc)).nonlocals)))>5)) ) break;
ZNEACTR_k = ((A_CALLPROC(NL(JMEACTR_rw),(),((NL(JMEACTR_rw)).nonlocals))-100)+(*NL(OKEACTR_basemode)));
 /* line 5311: */
 /* line 5312: */
switch ( (XNEACTR_i-5) )
{ 
case 1: 
 /* line 5313: */
{ 
UOEACTR_prc = (A_HEAP(A68_55 ));
 /* line 5314: */
VOEACTR = (&(UOEACTR_prc->Deproc)) ;
(*VOEACTR) = A_CALLPROC(DOEACTR_rm,(),((DOEACTR_rm).nonlocals)) ;
A_CALLPROC(NL(ALEACTR_remember),(VOEACTR),(VOEACTR,(NL(ALEACTR_remember)).nonlocals));
 /* line 5315: */
 /* line 5316: */
 /* line 5317: */
WOEACTR = A_UNITE(XOEACTR,mode6,6,UOEACTR_prc);
} 
break;
case 2: 
{ 
YOEACTR_hp = (A_HEAP(A68_57 ));
 /* line 5318: */
ZOEACTR = (&(YOEACTR_hp->Deproc)) ;
(*ZOEACTR) = A_CALLPROC(NL(JGCACTR_deflex),(A_CALLPROC(DOEACTR_rm,(),((DOEACTR_rm).nonlocals))),(A_CALLPROC(DOEACTR_rm,(),((DOEACTR_rm).nonlocals)),(NL(JGCACTR_deflex)).nonlocals)) ;
A_CALLPROC(NL(ALEACTR_remember),(ZOEACTR),(ZOEACTR,(NL(ALEACTR_remember)).nonlocals));
 /* line 5323: */
APEACTR = (&(YOEACTR_hp->Pars)) ;
(*APEACTR) = A_CALLPROC(JOEACTR_rml,(),((JOEACTR_rml).nonlocals));
 /* line 5324: */
 /* line 5325: */
 /* line 5326: */
WOEACTR = A_UNITE(BPEACTR,mode3,3,YOEACTR_hp);
} 
break;
case 3: 
CPEACTR.Rdenno = 0;
CPEACTR.Modelist = A_CALLPROC(JOEACTR_rml,(),((JOEACTR_rml).nonlocals));
 /* line 5328: */
DPEACTR = A_HEAP(A68_56 ) ;
(*DPEACTR) = CPEACTR ;
WOEACTR = A_UNITE(EPEACTR,mode2,2,DPEACTR);
break;
case 4: 
{ 
COEACTR_rsl = (&BOEACTR_sl);
 /* line 5329: */
 /* line 5330: */
GPEACTR = A_CALLPROC(NL(EMEACTR_rc),(),((NL(EMEACTR_rc)).nonlocals));
for ( FPEACTR_i = 1;
FPEACTR_i <= GPEACTR;
FPEACTR_i += 1 )
{ 
 /* line 5331: */
(*COEACTR_rsl) = A_HEAP(A68_58 );
 /* line 5332: */
HPEACTR = (&((*COEACTR_rsl)->Fieldno)) ;
(*HPEACTR) = FPEACTR_i;
 /* line 5333: */
IPEACTR = (&((*COEACTR_rsl)->Mode)) ;
(*IPEACTR) = A_CALLPROC(DOEACTR_rm,(),((DOEACTR_rm).nonlocals)) ;
A_CALLPROC(NL(ALEACTR_remember),(IPEACTR),(IPEACTR,(NL(ALEACTR_remember)).nonlocals));
 /* line 5334: */
A_CALLPROC(NL(QMEACTR_rs),((&((*COEACTR_rsl)->Name))),((&((*COEACTR_rsl)->Name)),(NL(QMEACTR_rs)).nonlocals));
 /* line 5335: */
JPEACTR = (&((*COEACTR_rsl)->Rest)) ;
(*JPEACTR) = (A68_58 *)A68_NIL;
 /* line 5336: */
 /* line 5337: */
COEACTR_rsl = (&((*COEACTR_rsl)->Rest));
}
 /* line 5338: */
KPEACTR.Rdenno = 0;
KPEACTR.Deflex = 1;
 /* line 5339: */
KPEACTR.Sels = BOEACTR_sl;
 /* line 5341: */
LPEACTR = A_HEAP(A68_59 ) ;
(*LPEACTR) = KPEACTR ;
WOEACTR = A_UNITE(MPEACTR,mode4,4,LPEACTR);
} 
break;
case 5: 
{ 
NPEACTR_hi = (A_HEAP(A68_60 ));
 /* line 5342: */
OPEACTR = (&(NPEACTR_hi->Rdenno)) ;
(*OPEACTR) = 0;
 /* line 5343: */
PPEACTR = (&(NPEACTR_hi->Imode)) ;
(*PPEACTR) = A_CALLPROC(DOEACTR_rm,(),((DOEACTR_rm).nonlocals)) ;
A_CALLPROC(NL(ALEACTR_remember),(PPEACTR),(PPEACTR,(NL(ALEACTR_remember)).nonlocals));
 /* line 5344: */
QPEACTR = (&(NPEACTR_hi->Length)) ;
(*QPEACTR) = (A_CALLPROC(NL(EMEACTR_rc),(),((NL(EMEACTR_rc)).nonlocals))*NL(DKEACTR_maxchar2));
 /* line 5345: */
RPEACTR = (&(NPEACTR_hi->Length)) ;
(*RPEACTR)+=A_CALLPROC(NL(JMEACTR_rw),(),((NL(JMEACTR_rw)).nonlocals));
 /* line 5346: */
SPEACTR = (&(NPEACTR_hi->Deflex)) ;
(*SPEACTR) = 1;
 /* line 5347: */
 /* line 5348: */
 /* line 5349: */
WOEACTR = A_UNITE(TPEACTR,mode5,5,NPEACTR_hi);
} 
break;
case 6: 
{ 
UPEACTR_hv = (A_HEAP(A68_61 ));
 /* line 5350: */
VPEACTR = (&(UPEACTR_hv->Rdenno)) ;
(*VPEACTR) = 0;
 /* line 5351: */
WPEACTR = (&(UPEACTR_hv->Vecmode)) ;
(*WPEACTR) = A_CALLPROC(DOEACTR_rm,(),((DOEACTR_rm).nonlocals)) ;
A_CALLPROC(NL(ALEACTR_remember),(WPEACTR),(WPEACTR,(NL(ALEACTR_remember)).nonlocals));
 /* line 5352: */
XPEACTR = (&(UPEACTR_hv->Deflex)) ;
(*XPEACTR) = (A_CALLPROC(NL(EMEACTR_rc),(),((NL(EMEACTR_rc)).nonlocals))-1);
 /* line 5353: */
 /* line 5354: */
 /* line 5355: */
WOEACTR = A_UNITE(YPEACTR,mode7,7,UPEACTR_hv);
} 
break;
case 7: 
{ 
ZPEACTR_ha = (A_HEAP(A68_62 ));
 /* line 5356: */
AQEACTR = (&(ZPEACTR_ha->Rdenno)) ;
(*AQEACTR) = 0;
 /* line 5357: */
BQEACTR = (&(ZPEACTR_ha->Mode)) ;
(*BQEACTR) = A_CALLPROC(DOEACTR_rm,(),((DOEACTR_rm).nonlocals)) ;
A_CALLPROC(NL(ALEACTR_remember),(BQEACTR),(BQEACTR,(NL(ALEACTR_remember)).nonlocals));
 /* line 5358: */
CQEACTR = (&(ZPEACTR_ha->Nods)) ;
(*CQEACTR) = A_CALLPROC(NL(EMEACTR_rc),(),((NL(EMEACTR_rc)).nonlocals));
 /* line 5359: */
DQEACTR = (&(ZPEACTR_ha->Deflex)) ;
(*DQEACTR) = (A_CALLPROC(NL(EMEACTR_rc),(),((NL(EMEACTR_rc)).nonlocals))-1);
 /* line 5360: */
 /* line 5361: */
 /* line 5362: */
WOEACTR = A_UNITE(EQEACTR,mode8,8,ZPEACTR_ha);
} 
break;
case 8: 
{ 
FQEACTR_s = (A_HEAP(A68_64 ));
GQEACTR.Mode = A_CALLPROC(DOEACTR_rm,(),((DOEACTR_rm).nonlocals));
GQEACTR.Stenlist = (A68_63 *)A68_NIL;
(*FQEACTR_s) = GQEACTR;
 /* line 5363: */
A_CALLPROC(NL(ALEACTR_remember),((&(FQEACTR_s->Mode))),((&(FQEACTR_s->Mode)),(NL(ALEACTR_remember)).nonlocals));
 /* line 5364: */
 /* line 5365: */
 /* line 5366: */
WOEACTR = A_UNITE(HQEACTR,mode9,9,FQEACTR_s);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
IQEACTR = (&A_VINDEX(NL(KUAACTR_modes),ZNEACTR_k)) ;
(*IQEACTR) = WOEACTR;
 /* line 5367: */
 /* line 5368: */
if ( (ZNEACTR_k>(*NL(VYAACTR_lastmode))) )
{ 
 /* line 5369: */
 /* line 5370: */
(*NL(VYAACTR_lastmode)) = ZNEACTR_k;
} 
}
 /* line 5372: */
 /* line 5373: */
JQEACTR = XNEACTR_i;
} 
A_PROC_EXIT(readmodes);
return( JQEACTR );
} 
#undef NL

A_STATIC A68_VOID  FUEACTR_setc(void *NonLocals)
#define NL(x) (((GUEACTR_setc *)NonLocals)->x)
{ 
A68_102  HUEACTR;  /* collateral clause result */
A68_106  IUEACTR;  /* OPERATORS - mode -> union mode */
A68_112  JUEACTR;  /* collateral clause result */
A68_112 * KUEACTR;  /* YIELD */
A_PROC_ENTRY(setc);
{ 
HUEACTR.Name = (*NL(Name));
HUEACTR.Ym = NL(Ym);
HUEACTR.Formal = (*NL(P));
 /* line 5518: */
HUEACTR.Ys = (*(&(NL(ZTEACTR_ys)->Ys)));
 /* line 5519: */
HUEACTR.Level = (*NL(TZAACTR_modulelevel))+=1;
 /* line 5520: */
HUEACTR.Ownlevel = ((*(&(NL(BUEACTR_xs)->Nl)))+(*(&(NL(BUEACTR_xs)->Ng))));
A_CALLPROC(NL(Output),(A_UNITE(IUEACTR,mode29,29,HUEACTR), 2),(A_UNITE(IUEACTR,mode29,29,HUEACTR), 2,(NL(Output)).nonlocals));
 /* line 5521: */
JUEACTR.C.N = (*NL(Name));
JUEACTR.C.F = (*NL(P));
 /* line 5522: */
JUEACTR.C.Level = (*NL(TZAACTR_modulelevel));
 /* line 5524: */
JUEACTR.Scope = ((*(&((*NL(QYAACTR_globcurrent))->Lastid)))+1);
 /* line 5525: */
JUEACTR.Rest = (*NL(RABACTR_concheck));
KUEACTR = A_HEAP(A68_112 ) ;
(*KUEACTR) = JUEACTR ;
(*NL(RABACTR_concheck)) = KUEACTR;
} 
A_PROC_EXIT(setc);
return;
} 
#undef NL

A_STATIC A68_VOID  PUEACTR_generator(A68_BOOL  NUEACTR_anonymous, A68_41  *ReturnedValue, void *NonLocals)
#define NL(x) (((QUEACTR_generator *)NonLocals)->x)
{ 
A68_41  RUEACTR;  /* clause result */
A68_41  SUEACTR;  /* OPERATORS - dynamic generator */
{ 
SUEACTR.upb = NL(MUEACTR_c1).upb ;
( NUEACTR_anonymous? A_VLOC(A68_42 ,SUEACTR): A_VHEAP(A68_42 ,SUEACTR) );
RUEACTR = SUEACTR;
} 
*ReturnedValue = (RUEACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CWEACTR_generator(A68_BOOL  AWEACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals)
#define NL(x) (((DWEACTR_generator *)NonLocals)->x)
{ 
A68_100  EWEACTR;  /* clause result */
A68_100  FWEACTR;  /* OPERATORS - dynamic generator */
{ 
FWEACTR.upb = (*NL(NVEACTR_i)) ;
( AWEACTR_anonymous? A_VLOC(A68_INT ,FWEACTR): A_VHEAP(A68_INT ,FWEACTR) );
EWEACTR = FWEACTR;
} 
*ReturnedValue = (EWEACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BXEACTR_generator(A68_BOOL  ZWEACTR_anonymous, A68_99  *ReturnedValue, void *NonLocals)
#define NL(x) (((CXEACTR_generator *)NonLocals)->x)
{ 
A68_99  DXEACTR;  /* clause result */
A68_99  EXEACTR;  /* OPERATORS - dynamic generator */
{ 
EXEACTR.upb = (*NL(JWEACTR_k)) ;
( ZWEACTR_anonymous? A_VLOC(A68_71 ,EXEACTR): A_VHEAP(A68_71 ,EXEACTR) );
DXEACTR = EXEACTR;
} 
*ReturnedValue = (DXEACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IXEACTR_generator(A68_BOOL  GXEACTR_anonymous, A68_41  *ReturnedValue, void *NonLocals)
#define NL(x) (((JXEACTR_generator *)NonLocals)->x)
{ 
A68_41  KXEACTR;  /* clause result */
A68_41  LXEACTR;  /* OPERATORS - dynamic generator */
{ 
LXEACTR.upb = (*NL(JWEACTR_k)) ;
( GXEACTR_anonymous? A_VLOC(A68_42 ,LXEACTR): A_VHEAP(A68_42 ,LXEACTR) );
KXEACTR = LXEACTR;
} 
*ReturnedValue = (KXEACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VYEACTR_mdno(A68_INT  D, A68_INT  M, void *NonLocals)
#define NL(x) (((WYEACTR_mdno *)NonLocals)->x)
{ 
A68_INT * XYEACTR;  /* YIELD */
A68_INT * YYEACTR;  /* YIELD */
A_PROC_ENTRY(mdno);
 /* line 5689: */
{ 
(*NL(QSAACTR_compsize))+=1;
 /* line 5690: */
 /* line 5691: */
if ( NL(Kb) )
{ 
XYEACTR = (&A_VINDEX(NL(Decnos),(*NL(QSAACTR_compsize)))) ;
(*XYEACTR) = D;
 /* line 5692: */
 /* line 5693: */
 /* line 5694: */
YYEACTR = (&A_VINDEX(NL(Modenos),(*NL(QSAACTR_compsize)))) ;
(*YYEACTR) = M;
} 
} 
A_PROC_EXIT(mdno);
return;
} 
#undef NL

A_STATIC A68_VOID  BZEACTR_kc(A68_INT  C, void *NonLocals)
#define NL(x) (((CZEACTR_kc *)NonLocals)->x)
{ 
A68_INT  DZEACTR;  /* YIELD */
A68_CHAR * EZEACTR;  /* YIELD */
A_PROC_ENTRY(kc);
 /* line 5697: */
{ 
if ( NL(Kb) )
{ 
DZEACTR = ((*NL(QYEACTR_ki))+1) ;
EZEACTR = (&A_VINDEX(NL(Ka),DZEACTR)) ;
(*EZEACTR) = (A68_SSBITS)C;
} 
 /* line 5698: */
 /* line 5699: */
(*NL(QYEACTR_ki))+=1;
} 
A_PROC_EXIT(kc);
return;
} 
#undef NL

A_STATIC A68_VOID  HZEACTR_kw(A68_INT  I, void *NonLocals)
#define NL(x) (((IZEACTR_kw *)NonLocals)->x)
{ 
A68_INT  JZEACTR;  /* YIELD */
A68_CHAR * KZEACTR;  /* YIELD */
A68_INT  LZEACTR;  /* YIELD */
A68_INT  MZEACTR;  /* ADICOPS - MOD */
A68_CHAR * NZEACTR;  /* YIELD */
A_PROC_ENTRY(kw);
 /* line 5702: */
{ 
 /* line 5703: */
if ( NL(Kb) )
{ 
JZEACTR = ((*NL(QYEACTR_ki))+1) ;
KZEACTR = (&A_VINDEX(NL(Ka),JZEACTR)) ;
(*KZEACTR) = (A68_SSBITS)(I/XDAACTR_maxchar);
 /* line 5704: */
 /* line 5705: */
LZEACTR = ((*NL(QYEACTR_ki))+2) ;
NZEACTR = (&A_VINDEX(NL(Ka),LZEACTR)) ;
(*NZEACTR) = (A68_SSBITS)A_MOD(I,XDAACTR_maxchar,MZEACTR);
} 
 /* line 5706: */
 /* line 5707: */
(*NL(QYEACTR_ki))+=2;
} 
A_PROC_EXIT(kw);
return;
} 
#undef NL

A_STATIC A68_VOID  QZEACTR_ks(A68_VC  S, void *NonLocals)
#define NL(x) (((RZEACTR_ks *)NonLocals)->x)
{ 
A68_INT  SZEACTR_u;
A68_BOOL  TZEACTR;  /* optbool result */
A68_INT  UZEACTR;  /* YIELD */
A68_CHAR * VZEACTR;  /* YIELD */
A68_VC  WZEACTR;  /* OPERATORS - trim index */
A68_VC  XZEACTR;  /* OPERATORS - trim index */
A68_VC  YZEACTR;  /* YIELD */
A68_VC  ZZEACTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(ks);
 /* line 5711: */
{ 
SZEACTR_u = S.upb;
 /* line 5712: */
for ( ;; )
{ 
TZEACTR = (SZEACTR_u>1);
if ( TZEACTR )
{ /* line 5713: */
TZEACTR = (A_VINDEX(S,SZEACTR_u)==' ');
}
if ( !(TZEACTR) ) break;
SZEACTR_u-=1;
}
 /* line 5714: */
 /* line 5715: */
if ( NL(Kb) )
{ 
UZEACTR = ((*NL(QYEACTR_ki))+1) ;
VZEACTR = (&A_VINDEX(NL(Ka),UZEACTR)) ;
(*VZEACTR) = (A68_SSBITS)SZEACTR_u;
 /* line 5716: */
 /* line 5717: */
YZEACTR = A_VTRIM(WZEACTR,(NL(Ka)),A_VTSCRIPT(&(WZEACTR.upb),(NL(Ka)).upb,((*NL(QYEACTR_ki))+2),(((*NL(QYEACTR_ki))+SZEACTR_u)+1))) ;
ZZEACTR = A_VTRIM(XZEACTR,(S),A_VTSCRIPT(&(XZEACTR.upb),(S).upb,1,SZEACTR_u)) ;
A_VASSIGN2(ZZEACTR,YZEACTR,A68_CHAR );
} 
 /* line 5718: */
 /* line 5719: */
(*NL(QYEACTR_ki))+=(SZEACTR_u+1);
} 
A_PROC_EXIT(ks);
return;
} 
#undef NL

A_STATIC A68_INT  LAFACTR_numbermode(A68_INT  Mode, void *NonLocals)
#define NL(x) (((MAFACTR_numbermode *)NonLocals)->x)
{ 
A68_INT  NAFACTR_m;
A68_INT  OAFACTR_i;
A68_122 * PAFACTR_kml;
A68_INT  QAFACTR;  /* clause result */
A68_122 * TAFACTR;  /* clause result */
A68_122  UAFACTR;  /* collateral clause result */
A_PROC_ENTRY(numbermode);
 /* line 5727: */
{ 
NAFACTR_m = (A68_INT )(A68_BITS )((A68_BITS )Mode&LQAACTR_decsmask);
 /* line 5728: */
PAFACTR_kml = (*NL(GYEACTR_mdone));
 /* line 5729: */
 /* line 5730: */
 /* line 5731: */
if ( (NAFACTR_m<NL(YYAACTR_newmode1)) )
{ 
 /* line 5732: */
QAFACTR = Mode;
} 
else
{ 
for ( ;; )
{ 
 /* line 5733: */
if ( !((PAFACTR_kml!=JQAACTR_nilkml)) ) break;
 /* line 5734: */
if ( ((*(&(PAFACTR_kml->M)))==NAFACTR_m) )
{ 
OAFACTR_i = (*(&(PAFACTR_kml->Km)));
 /* line 5735: */
 /* line 5736: */
goto SAFACTR_out;
} 
else
{ 
 /* line 5737: */
 /* line 5738: */
PAFACTR_kml = (*(&(PAFACTR_kml->Rest)));
} 
}
 /* line 5739: */
PAFACTR_kml = (*NL(IAFACTR_mtodo));
 /* line 5741: */
for ( ;; )
{ 
 /* line 5742: */
if ( !((PAFACTR_kml!=JQAACTR_nilkml)) ) break;
 /* line 5743: */
if ( ((*(&(PAFACTR_kml->M)))==NAFACTR_m) )
{ 
OAFACTR_i = (*(&(PAFACTR_kml->Km)));
 /* line 5744: */
 /* line 5745: */
goto SAFACTR_out;
} 
else
{ 
 /* line 5746: */
 /* line 5747: */
PAFACTR_kml = (*(&(PAFACTR_kml->Rest)));
} 
}
 /* line 5748: */
OAFACTR_i = (*NL(GAFACTR_kmno))+=1;
 /* line 5749: */
 /* line 5750: */
 /* line 5751: */
if ( ((*NL(HYEACTR_kmfree))==JQAACTR_nilkml) )
{ 
TAFACTR = A_HEAP(A68_122 );
} 
else
{ 
PAFACTR_kml = (*NL(HYEACTR_kmfree));
 /* line 5752: */
(*NL(HYEACTR_kmfree)) = (*(&((*NL(HYEACTR_kmfree))->Rest)));
 /* line 5753: */
 /* line 5754: */
TAFACTR = PAFACTR_kml;
} 
UAFACTR.M = NAFACTR_m;
UAFACTR.Km = OAFACTR_i;
UAFACTR.Rest = (*NL(IAFACTR_mtodo));
(*TAFACTR) = UAFACTR ;
(*NL(IAFACTR_mtodo)) = TAFACTR;
 /* line 5755: */
SAFACTR_out:
 /* line 5756: */
 /* line 5757: */
 /* line 5758: */
QAFACTR = ((OAFACTR_i+Mode)-NAFACTR_m);
} 
} 
A_PROC_EXIT(numbermode);
return( QAFACTR );
} 
#undef NL

A_STATIC A68_INT  XAFACTR_keepmode(A68_INT  Mode, void *NonLocals)
#define NL(x) (((YAFACTR_keepmode *)NonLocals)->x)
{ 
A68_INT  ZAFACTR_i;
A68_INT  ABFACTR_j;
A68_INT  BBFACTR_l;
A68_54 * CBFACTR_ml;
A68_54 * DBFACTR_ml1;
A68_58 * EBFACTR_sl;
A68_122 * FBFACTR_kml;
A68_122 ** JBFACTR;  /* YIELD */
A68_INT  KBFACTR;  /* YIELD */
A68_66  LBFACTR;  /* united object - for case conformity */
A68_55 * MBFACTR_p;
A68_57 * NBFACTR_pp;
A68_56 * OBFACTR_u;
A68_59 * PBFACTR_s;
A68_VC  QBFACTR;  /* OPERATORS - istruct -> vector */
A68_31  RBFACTR;  /* OPERATORS - istruct -> vector */
A68_60 * SBFACTR_is;
A68_INT  TBFACTR;  /* ADICOPS - MOD */
A68_INT  UBFACTR;  /* ADICOPS - MOD */
A68_61 * VBFACTR_v;
A68_INT  WBFACTR;  /* clause result */
A68_62 * XBFACTR_a;
A68_INT  YBFACTR;  /* clause result */
A68_64 * ZBFACTR_st;
A68_INT  ACFACTR;  /* to part of loop */
A68_INT  BCFACTR;  /* loop control */
A68_INT  CCFACTR;  /* clause result */
A_PROC_ENTRY(keepmode);
 /* line 5761: */
{ 
ZAFACTR_i = A_CALLPROC(NL(KAFACTR_numbermode),(Mode),(Mode,(NL(KAFACTR_numbermode)).nonlocals));
 /* line 5762: */
 /* line 5763: */
 /* line 5764: */
 /* line 5766: */
for ( ;; )
{ 
 /* line 5767: */
if ( !(((*NL(IAFACTR_mtodo))!=JQAACTR_nilkml)) ) break;
{ 
FBFACTR_kml = (*NL(IAFACTR_mtodo));
 /* line 5768: */
(*NL(IAFACTR_mtodo)) = (*(&((*NL(IAFACTR_mtodo))->Rest)));
 /* line 5769: */
JBFACTR = (&(FBFACTR_kml->Rest)) ;
(*JBFACTR) = (*NL(GYEACTR_mdone));
 /* line 5770: */
(*NL(GYEACTR_mdone)) = FBFACTR_kml;
 /* line 5771: */
 /* line 5772: */
KBFACTR = (*(&((*NL(GYEACTR_mdone))->M))) ;
LBFACTR = (*(&A_VINDEX(NL(KUAACTR_modes),KBFACTR))) ;
switch ( LBFACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
MBFACTR_p = (LBFACTR.data.mode6);
 /* line 5773: */
{ 
A_CALLPROC(NL(AZEACTR_kc),(6),(6,(NL(AZEACTR_kc)).nonlocals));
 /* line 5774: */
A_CALLPROC(NL(GZEACTR_kw),((*(&((*NL(GYEACTR_mdone))->Km)))),((*(&((*NL(GYEACTR_mdone))->Km))),(NL(GZEACTR_kw)).nonlocals));
 /* line 5775: */
 /* line 5776: */
 /* line 5777: */
A_CALLPROC(NL(GZEACTR_kw),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(MBFACTR_p->Deproc)))),((*(&(MBFACTR_p->Deproc))),(NL(KAFACTR_numbermode)).nonlocals))),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(MBFACTR_p->Deproc)))),((*(&(MBFACTR_p->Deproc))),(NL(KAFACTR_numbermode)).nonlocals)),(NL(GZEACTR_kw)).nonlocals));
} 
break;
case 3: /* REF STRUCT(INT,REF MODE54)  */
NBFACTR_pp = (LBFACTR.data.mode3);
 /* line 5778: */
{ 
A_CALLPROC(NL(AZEACTR_kc),(7),(7,(NL(AZEACTR_kc)).nonlocals));
 /* line 5779: */
A_CALLPROC(NL(GZEACTR_kw),((*(&((*NL(GYEACTR_mdone))->Km)))),((*(&((*NL(GYEACTR_mdone))->Km))),(NL(GZEACTR_kw)).nonlocals));
 /* line 5780: */
A_CALLPROC(NL(GZEACTR_kw),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(NBFACTR_pp->Deproc)))),((*(&(NBFACTR_pp->Deproc))),(NL(KAFACTR_numbermode)).nonlocals))),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(NBFACTR_pp->Deproc)))),((*(&(NBFACTR_pp->Deproc))),(NL(KAFACTR_numbermode)).nonlocals)),(NL(GZEACTR_kw)).nonlocals));
 /* line 5781: */
CBFACTR_ml = (*(&(NBFACTR_pp->Pars)));
 /* line 5782: */
 /* line 5783: */
 /* line 5784: */
goto IBFACTR_ml;
} 
break;
case 2: /* REF STRUCT(INT,REF MODE54)  */
OBFACTR_u = (LBFACTR.data.mode2);
 /* line 5785: */
{ 
A_CALLPROC(NL(AZEACTR_kc),(8),(8,(NL(AZEACTR_kc)).nonlocals));
 /* line 5786: */
A_CALLPROC(NL(GZEACTR_kw),((*(&((*NL(GYEACTR_mdone))->Km)))),((*(&((*NL(GYEACTR_mdone))->Km))),(NL(GZEACTR_kw)).nonlocals));
 /* line 5787: */
CBFACTR_ml = (*(&(OBFACTR_u->Modelist)));
 /* line 5788: */
 /* line 5789: */
 /* line 5790: */
goto IBFACTR_ml;
} 
break;
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
PBFACTR_s = (LBFACTR.data.mode4);
 /* line 5791: */
{ 
A_CALLPROC(NL(AZEACTR_kc),(9),(9,(NL(AZEACTR_kc)).nonlocals));
 /* line 5792: */
A_CALLPROC(NL(GZEACTR_kw),((*(&((*NL(GYEACTR_mdone))->Km)))),((*(&((*NL(GYEACTR_mdone))->Km))),(NL(GZEACTR_kw)).nonlocals));
 /* line 5793: */
BBFACTR_l = 0;
 /* line 5794: */
EBFACTR_sl = (*(&(PBFACTR_s->Sels)));
 /* line 5796: */
for ( ;; )
{ 
 /* line 5797: */
if ( !((EBFACTR_sl!=RQAACTR_nilsel)) ) break;
BBFACTR_l+=1;
 /* line 5798: */
 /* line 5799: */
EBFACTR_sl = (*(&(EBFACTR_sl->Rest)));
}
 /* line 5800: */
A_CALLPROC(NL(AZEACTR_kc),(BBFACTR_l),(BBFACTR_l,(NL(AZEACTR_kc)).nonlocals));
 /* line 5801: */
EBFACTR_sl = (*(&(PBFACTR_s->Sels)));
 /* line 5803: */
for ( ;; )
{ 
 /* line 5804: */
if ( !((EBFACTR_sl!=RQAACTR_nilsel)) ) break;
A_CALLPROC(NL(GZEACTR_kw),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(EBFACTR_sl->Mode)))),((*(&(EBFACTR_sl->Mode))),(NL(KAFACTR_numbermode)).nonlocals))),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(EBFACTR_sl->Mode)))),((*(&(EBFACTR_sl->Mode))),(NL(KAFACTR_numbermode)).nonlocals)),(NL(GZEACTR_kw)).nonlocals));
 /* line 5805: */
RBFACTR = (*(&(EBFACTR_sl->Name))) ;
A_CALLPROC(NL(PZEACTR_ks),(A_HISVEC(QBFACTR,RBFACTR,32,A68_CHAR )),(A_HISVEC(QBFACTR,RBFACTR,32,A68_CHAR ),(NL(PZEACTR_ks)).nonlocals));
 /* line 5806: */
 /* line 5807: */
EBFACTR_sl = (*(&(EBFACTR_sl->Rest)));
}
 /* line 5808: */
 /* line 5809: */
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
SBFACTR_is = (LBFACTR.data.mode5);
 /* line 5810: */
{ 
A_CALLPROC(NL(AZEACTR_kc),(10),(10,(NL(AZEACTR_kc)).nonlocals));
 /* line 5811: */
A_CALLPROC(NL(GZEACTR_kw),((*(&((*NL(GYEACTR_mdone))->Km)))),((*(&((*NL(GYEACTR_mdone))->Km))),(NL(GZEACTR_kw)).nonlocals));
 /* line 5812: */
A_CALLPROC(NL(GZEACTR_kw),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(SBFACTR_is->Imode)))),((*(&(SBFACTR_is->Imode))),(NL(KAFACTR_numbermode)).nonlocals))),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(SBFACTR_is->Imode)))),((*(&(SBFACTR_is->Imode))),(NL(KAFACTR_numbermode)).nonlocals)),(NL(GZEACTR_kw)).nonlocals));
 /* line 5813: */
ABFACTR_j = ((*(&(SBFACTR_is->Length)))/NL(DKEACTR_maxchar2));
 /* line 5814: */
UBFACTR = (*(&(SBFACTR_is->Length))) ;
BBFACTR_l = A_MOD(UBFACTR,NL(DKEACTR_maxchar2),TBFACTR);
 /* line 5815: */
A_CALLPROC(NL(AZEACTR_kc),(ABFACTR_j),(ABFACTR_j,(NL(AZEACTR_kc)).nonlocals));
 /* line 5816: */
 /* line 5817: */
 /* line 5818: */
A_CALLPROC(NL(GZEACTR_kw),(BBFACTR_l),(BBFACTR_l,(NL(GZEACTR_kw)).nonlocals));
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
VBFACTR_v = (LBFACTR.data.mode7);
 /* line 5819: */
{ 
A_CALLPROC(NL(AZEACTR_kc),(11),(11,(NL(AZEACTR_kc)).nonlocals));
 /* line 5820: */
A_CALLPROC(NL(GZEACTR_kw),((*(&((*NL(GYEACTR_mdone))->Km)))),((*(&((*NL(GYEACTR_mdone))->Km))),(NL(GZEACTR_kw)).nonlocals));
 /* line 5821: */
A_CALLPROC(NL(GZEACTR_kw),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(VBFACTR_v->Vecmode)))),((*(&(VBFACTR_v->Vecmode))),(NL(KAFACTR_numbermode)).nonlocals))),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(VBFACTR_v->Vecmode)))),((*(&(VBFACTR_v->Vecmode))),(NL(KAFACTR_numbermode)).nonlocals)),(NL(GZEACTR_kw)).nonlocals));
 /* line 5822: */
if ( ((*(&(VBFACTR_v->Deflex)))<0) )
{ 
WBFACTR = 0;
} 
else
{ 
WBFACTR = 2;
} 
 /* line 5823: */
 /* line 5824: */
A_CALLPROC(NL(AZEACTR_kc),(WBFACTR),(WBFACTR,(NL(AZEACTR_kc)).nonlocals));
} 
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
XBFACTR_a = (LBFACTR.data.mode8);
 /* line 5825: */
{ 
A_CALLPROC(NL(AZEACTR_kc),(12),(12,(NL(AZEACTR_kc)).nonlocals));
 /* line 5826: */
A_CALLPROC(NL(GZEACTR_kw),((*(&((*NL(GYEACTR_mdone))->Km)))),((*(&((*NL(GYEACTR_mdone))->Km))),(NL(GZEACTR_kw)).nonlocals));
 /* line 5827: */
A_CALLPROC(NL(GZEACTR_kw),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(XBFACTR_a->Mode)))),((*(&(XBFACTR_a->Mode))),(NL(KAFACTR_numbermode)).nonlocals))),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(XBFACTR_a->Mode)))),((*(&(XBFACTR_a->Mode))),(NL(KAFACTR_numbermode)).nonlocals)),(NL(GZEACTR_kw)).nonlocals));
 /* line 5828: */
A_CALLPROC(NL(AZEACTR_kc),((*(&(XBFACTR_a->Nods)))),((*(&(XBFACTR_a->Nods))),(NL(AZEACTR_kc)).nonlocals));
 /* line 5829: */
if ( ((*(&(XBFACTR_a->Deflex)))<0) )
{ 
YBFACTR = 0;
} 
else
{ 
YBFACTR = 2;
} 
 /* line 5830: */
 /* line 5831: */
A_CALLPROC(NL(AZEACTR_kc),(YBFACTR),(YBFACTR,(NL(AZEACTR_kc)).nonlocals));
} 
break;
case 9: /* REF STRUCT(INT,REF MODE63)  */
ZBFACTR_st = (LBFACTR.data.mode9);
 /* line 5832: */
{ 
A_CALLPROC(NL(AZEACTR_kc),(13),(13,(NL(AZEACTR_kc)).nonlocals));
 /* line 5833: */
A_CALLPROC(NL(GZEACTR_kw),((*(&((*NL(GYEACTR_mdone))->Km)))),((*(&((*NL(GYEACTR_mdone))->Km))),(NL(GZEACTR_kw)).nonlocals));
 /* line 5834: */
 /* line 5835: */
 /* line 5836: */
 /* line 5837: */
A_CALLPROC(NL(GZEACTR_kw),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(ZBFACTR_st->Mode)))),((*(&(ZBFACTR_st->Mode))),(NL(KAFACTR_numbermode)).nonlocals))),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(ZBFACTR_st->Mode)))),((*(&(ZBFACTR_st->Mode))),(NL(KAFACTR_numbermode)).nonlocals)),(NL(GZEACTR_kw)).nonlocals));
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 5839: */
 /* line 5840: */
/*SKIP*/;
goto GBFACTR;
IBFACTR_ml:
 /* line 5841: */
DBFACTR_ml1 = CBFACTR_ml;
 /* line 5842: */
BBFACTR_l = 0;
 /* line 5844: */
for ( ;; )
{ 
 /* line 5845: */
if ( !((CBFACTR_ml!=OQAACTR_nilml)) ) break;
BBFACTR_l+=1;
 /* line 5846: */
 /* line 5847: */
CBFACTR_ml = (*(&(CBFACTR_ml->Rest)));
}
 /* line 5848: */
A_CALLPROC(NL(AZEACTR_kc),(BBFACTR_l),(BBFACTR_l,(NL(AZEACTR_kc)).nonlocals));
 /* line 5849: */
 /* line 5850: */
ACFACTR = BBFACTR_l;
for ( BCFACTR = 1;
BCFACTR <= ACFACTR;
BCFACTR += 1 )
{ 
A_CALLPROC(NL(GZEACTR_kw),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(DBFACTR_ml1->Mode)))),((*(&(DBFACTR_ml1->Mode))),(NL(KAFACTR_numbermode)).nonlocals))),(A_CALLPROC(NL(KAFACTR_numbermode),((*(&(DBFACTR_ml1->Mode)))),((*(&(DBFACTR_ml1->Mode))),(NL(KAFACTR_numbermode)).nonlocals)),(NL(GZEACTR_kw)).nonlocals));
 /* line 5851: */
 /* line 5852: */
DBFACTR_ml1 = (*(&(DBFACTR_ml1->Rest)));
}
 /* line 5853: */
GBFACTR: ;
} 
}
 /* line 5854: */
 /* line 5855: */
CCFACTR = ZAFACTR_i;
} 
A_PROC_EXIT(keepmode);
return( CCFACTR );
} 
#undef NL

A_STATIC A68_BOOL  LHFACTR_scopel(A68_69 ** L, A68_69 ** E, void *NonLocals)
#define NL(x) (((MHFACTR_scopel *)NonLocals)->x)
{ 
A68_69 * NHFACTR_lab;
A68_69 * OHFACTR_lab1;
A68_BOOL  PHFACTR_ans;
A68_BOOL  QHFACTR;  /* optbool result */
A68_VC  RHFACTR;  /* OPERATORS - istruct -> vector */
A68_31  SHFACTR;  /* OPERATORS - istruct -> vector */
A68_VC  THFACTR;  /* OPERATORS - istruct -> vector */
A68_31  UHFACTR;  /* OPERATORS - istruct -> vector */
A68_INT  VHFACTR;  /* clause result */
A68_INT * WHFACTR;  /* YIELD */
A68_69 ** XHFACTR;  /* YIELD */
A68_69 ** YHFACTR;  /* YIELD */
A68_BOOL  ZHFACTR;  /* clause result */
A_PROC_ENTRY(scopel);
 /* line 6093: */
{ 
NHFACTR_lab = (*(&(NL(NFFACTR_current)->Labs)));
 /* line 6094: */
(*L) = (A68_69 *)A68_NIL;
 /* line 6095: */
PHFACTR_ans = A68_FALSE;
 /* line 6097: */
for ( ;; )
{ 
 /* line 6098: */
if ( !((NHFACTR_lab!=XQAACTR_nillab)) ) break;
 /* line 6099: */
if ( ((*(&(NHFACTR_lab->Status)))!=0) )
{ 
OHFACTR_lab1 = (*(&(NL(External)->Labs)));
 /* line 6100: */
PHFACTR_ans = A68_TRUE;
 /* line 6102: */
for ( ;; )
{ 
 /* line 6103: */
QHFACTR = (OHFACTR_lab1!=XQAACTR_nillab);
if ( QHFACTR )
{ /* line 6104: */
SHFACTR = (*(&(OHFACTR_lab1->Name))) ;
UHFACTR = (*(&(NHFACTR_lab->Name))) ;
QHFACTR = A_VC_NE(A_HISVEC(RHFACTR,SHFACTR,32,A68_CHAR ),A_HISVEC(THFACTR,UHFACTR,32,A68_CHAR ));
}
if ( !(QHFACTR) ) break;
OHFACTR_lab1 = (*(&(OHFACTR_lab1->Rest)));
}
 /* line 6106: */
 /* line 6107: */
 /* line 6108: */
if ( (OHFACTR_lab1!=XQAACTR_nillab) )
{ 
 /* line 6109: */
VHFACTR = (*(&(OHFACTR_lab1->Labno)));
} 
else
{ 
 /* line 6110: */
VHFACTR = 1;
} 
WHFACTR = (&(NHFACTR_lab->Status)) ;
(*WHFACTR) = VHFACTR;
} 
 /* line 6111: */
OHFACTR_lab1 = NHFACTR_lab;
 /* line 6112: */
NHFACTR_lab = (*(&(NHFACTR_lab->Rest)));
 /* line 6113: */
 /* line 6114: */
if ( ((*(&(OHFACTR_lab1->Status)))==1) )
{ 
XHFACTR = (&(OHFACTR_lab1->Rest)) ;
(*XHFACTR) = (*E);
 /* line 6115: */
 /* line 6116: */
(*E) = OHFACTR_lab1;
} 
else
{ 
YHFACTR = (&(OHFACTR_lab1->Rest)) ;
(*YHFACTR) = (*L);
 /* line 6117: */
 /* line 6118: */
 /* line 6119: */
(*L) = OHFACTR_lab1;
} 
}
 /* line 6120: */
 /* line 6121: */
ZHFACTR = PHFACTR_ans;
} 
A_PROC_EXIT(scopel);
return( ZHFACTR );
} 
#undef NL

A_STATIC A68_BOOL  IIFACTR_recovery(A68_INT  Readertype, void *NonLocals)
#define NL(x) (((JIFACTR_recovery *)NonLocals)->x)
{ 
A68_43  RIFACTR_generator;   /* proc value of non-global proc */
A68_VC  XIFACTR;  /* avoid structure result */
A68_VC  WIFACTR_insertmess;
A68_VC  ZIFACTR;  /* avoid structure result */
A68_VC  YIFACTR_ignoremess;
A68_VC  CJFACTR;  /* OPERATORS - assign op */
A68_VC  FJFACTR;  /* OPERATORS - assign op */
A68_INT  GJFACTR_new;
A68_BOOL  HJFACTR_notfound;
A68_BOOL  IJFACTR_formatread;
A68_BOOL  JJFACTR_result;
A68_100  KJFACTR;  /* OPERATORS - istruct -> vector */
A68_100  LJFACTR;  /* OPERATORS - istruct -> vector */
A68_100  MJFACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  NJFACTR;  /* clause result */
A68_100  OJFACTR;  /* OPERATORS - istruct -> vector */
A68_100  PJFACTR;  /* OPERATORS - istruct -> vector */
A68_100  QJFACTR;  /* OPERATORS - istruct -> vector */
A68_INT  RJFACTR_i;
A68_INT  SJFACTR;  /* to part of loop */
A68_INT  TJFACTR_i;
A68_INT  UJFACTR;  /* to part of loop */
A68_INT  VJFACTR;  /* YIELD */
A68_CHAR * WJFACTR;  /* YIELD */
A68_BOOL  XJFACTR;  /* optbool result */
A68_INT  YJFACTR;  /* clause result */
A68_INT  ZJFACTR;  /* YIELD */
A68_CHAR * AKFACTR;  /* YIELD */
A68_INT  BKFACTR_i;
A68_INT  CKFACTR;  /* to part of loop */
A68_INT * DKFACTR;  /* YIELD */
A68_INT  EKFACTR;  /* clause result */
A68_124  HKFACTR;  /* collateral clause result */
A68_124  MKFACTR;  /* avoid structure result */
A68_INT  PKFACTR;  /* YIELD */
A68_BOOL  QKFACTR;  /* optbool result */
A68_BOOL  RKFACTR;  /* optbool result */
A68_BOOL  SKFACTR;  /* optbool result */
A68_BOOL  TKFACTR;  /* optbool result */
A68_BOOL  UKFACTR;  /* optbool result */
A68_INT  VKFACTR;  /* YIELD */
A68_100  YKFACTR;  /* OPERATORS - istruct -> vector */
A68_100  ZKFACTR;  /* OPERATORS - istruct -> vector */
A68_100  ALFACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  BLFACTR;  /* optbool result */
A68_INT  CLFACTR;  /* YIELD */
A68_CHAR * DLFACTR;  /* YIELD */
A68_BOOL  ELFACTR;  /* optbool result */
A68_INT  FLFACTR;  /* clause result */
A68_INT  GLFACTR;  /* YIELD */
A68_CHAR * HLFACTR;  /* YIELD */
A68_INT  ILFACTR;  /* YIELD */
A68_CHAR * JLFACTR;  /* YIELD */
A68_124  MLFACTR;  /* collateral clause result */
A68_BOOL  NLFACTR;  /* clause result */
A_PROC_ENTRY(recovery);
 /* line 6129: */
{ 
A_CLOSURE( RIFACTR_generator, SIFACTR_generator, TIFACTR_generator );
A_CALLPROC(RIFACTR_generator,(A68_TRUE, &XIFACTR),(A68_TRUE, &XIFACTR,(RIFACTR_generator).nonlocals));
WIFACTR_insertmess = XIFACTR;
A_CALLPROC(RIFACTR_generator,(A68_TRUE, &ZIFACTR),(A68_TRUE, &ZIFACTR,(RIFACTR_generator).nonlocals));
YIFACTR_ignoremess = ZIFACTR;
 /* line 6130: */
CJFACTR = BJFACTR ;
A_VASSIGN2(CJFACTR,WIFACTR_insertmess,A68_CHAR );
 /* line 6131: */
FJFACTR = EJFACTR ;
A_VASSIGN2(FJFACTR,YIFACTR_ignoremess,A68_CHAR );
 /* line 6132: */
 /* line 6133: */
(*NL(SYAACTR_modedecdepth)) = 0;
 /* line 6134: */
JJFACTR_result = A68_FALSE;
 /* line 6135: */
(*NL(ITAACTR_supflts)) = FEBACTR_fltgap;
 /* line 6136: */
 /* line 6137: */
if ( (Readertype!=UDBACTR_formatreader) )
{ 
(*NL(AIFACTR_inserts)) = A_ISVEC(KJFACTR,NL(JEBACTR_insertsn),13,A68_INT );
 /* line 6138: */
(*NL(BIFACTR_ignorable)) = A_ISVEC(LJFACTR,NL(LEBACTR_ignorablen),17,A68_INT );
 /* line 6139: */
(*NL(CIFACTR_nonstarter)) = A_ISVEC(MJFACTR,NL(NEBACTR_nonducstart),24,A68_INT );
 /* line 6140: */
 /* line 6141: */
NJFACTR = A68_FALSE;
} 
else
{ 
(*NL(AIFACTR_inserts)) = A_ISVEC(OJFACTR,NL(PEBACTR_insertsf),3,A68_INT );
 /* line 6142: */
(*NL(BIFACTR_ignorable)) = A_ISVEC(PJFACTR,NL(REBACTR_ignorablef),4,A68_INT );
 /* line 6143: */
(*NL(CIFACTR_nonstarter)) = A_ISVEC(QJFACTR,NL(TEBACTR_nonpicstart),15,A68_INT );
 /* line 6144: */
 /* line 6145: */
NJFACTR = A68_TRUE;
} 
IJFACTR_formatread = NJFACTR;
 /* line 6146: */
LIFACTR_insert:
GJFACTR_new = 1;
 /* line 6147: */
 /* line 6148: */
SJFACTR = (*NL(AIFACTR_inserts)).upb;
for ( RJFACTR_i = 1;
RJFACTR_i <= SJFACTR;
RJFACTR_i += 1 )
{ 
 /* line 6149: */
if ( !(!A_CALLPROC(NL(WGBACTR_checkinsert),((*(&A_VINDEX((*NL(AIFACTR_inserts)),RJFACTR_i))), DIFACTR_checkt1),((*(&A_VINDEX((*NL(AIFACTR_inserts)),RJFACTR_i))), DIFACTR_checkt1,(NL(WGBACTR_checkinsert)).nonlocals))) ) break;
GJFACTR_new+=1;
}
 /* line 6151: */
 /* line 6152: */
if ( (GJFACTR_new==((*NL(AIFACTR_inserts)).upb+1)) )
{ 
HJFACTR_notfound = A68_TRUE;
 /* line 6153: */
 /* line 6154: */
UJFACTR = (*NL(BIFACTR_ignorable)).upb;
for ( TJFACTR_i = 1;
TJFACTR_i <= UJFACTR;
TJFACTR_i += 1 )
{ 
 /* line 6155: */
if ( !(HJFACTR_notfound) ) break;
 /* line 6156: */
if ( ((*NL(MFBACTR_t1))==(*(&A_VINDEX((*NL(BIFACTR_ignorable)),TJFACTR_i)))) )
{ 
 /* line 6157: */
 /* line 6158: */
HJFACTR_notfound = A68_FALSE;
} 
}
 /* line 6160: */
 /* line 6161: */
if ( HJFACTR_notfound )
{ 
 /* line 6162: */
goto PIFACTR_level2;
} 
else
{ 
VJFACTR = 1 ;
WJFACTR = (&A_VINDEX(YIFACTR_ignoremess,VJFACTR)) ;
(*WJFACTR) = (A68_SSBITS)(A68_INT )(A68_BITS )((A68_BITS )(*NL(MFBACTR_t1))&(A68_BITS )63);
 /* line 6163: */
 /* line 6164: */
if ( ((*NL(MFBACTR_t1))==74) )
{ 
XJFACTR = ((*NL(WDBACTR_recoverdepth))==0);
if ( XJFACTR )
{ /* line 6165: */
XJFACTR = ((*NL(ITAACTR_supflts))==0);
}
 /* line 6167: */
if ( XJFACTR )
{ 
 /* line 6168: */
YJFACTR = 132;
} 
else
{ 
 /* line 6169: */
YJFACTR = (-1);
} 
 /* line 6170: */
A_CALLPROC(NL(VJBACTR_abort),(YJFACTR),(YJFACTR,(NL(VJBACTR_abort)).nonlocals));
} 
 /* line 6171: */
A_CALLPROC(NL(UIBACTR_faultchars),(YIFACTR_ignoremess),(YIFACTR_ignoremess,(NL(UIBACTR_faultchars)).nonlocals));
 /* line 6172: */
(*NL(ITAACTR_supflts)) = FEBACTR_fltgap;
 /* line 6173: */
(*NL(MFBACTR_t1)) = A_CALLPROC(NL(LFDACTR_reader),(Readertype),(Readertype,(NL(LFDACTR_reader)).nonlocals));
 /* line 6174: */
 /* line 6175: */
if ( A_CALLPROC(NL(WGBACTR_checkinsert),((*NL(MFBACTR_t1)), EIFACTR_notcheckt1),((*NL(MFBACTR_t1)), EIFACTR_notcheckt1,(NL(WGBACTR_checkinsert)).nonlocals)) )
{ 
(*NL(KFBACTR_crts)) = (*NL(LFBACTR_failpos));
 /* line 6176: */
 /* line 6177: */
goto NIFACTR_endrecover;
} 
else
{ 
 /* line 6178: */
 /* line 6179: */
 /* line 6180: */
goto LIFACTR_insert;
} 
} 
} 
else
{ 
(*NL(ODBACTR_next)) = ((*NL(MFBACTR_t1))+1000);
 /* line 6181: */
 /* line 6182: */
 /* line 6183: */
 /* line 6184: */
ZJFACTR = 1 ;
AKFACTR = (&A_VINDEX(WIFACTR_insertmess,ZJFACTR)) ;
(*AKFACTR) = (A68_SSBITS)(A68_INT )(A68_BITS )((A68_BITS )((*NL(MFBACTR_t1)) = (*(&A_VINDEX((*NL(AIFACTR_inserts)),GJFACTR_new))))&(A68_BITS )63);
 /* line 6185: */
if ( ((*NL(MFBACTR_t1))==32) )
{ 
(*NL(PSAACTR_ident)) = NL(XTAACTR_spaces);
} 
 /* line 6186: */
A_CALLPROC(NL(UIBACTR_faultchars),(WIFACTR_insertmess),(WIFACTR_insertmess,(NL(UIBACTR_faultchars)).nonlocals));
 /* line 6187: */
(*NL(ITAACTR_supflts))+=1;
 /* line 6188: */
(*NL(KFBACTR_crts)) = (*NL(LFBACTR_failpos));
 /* line 6189: */
 /* line 6190: */
goto NIFACTR_endrecover;
} 
 /* line 6192: */
PIFACTR_level2:
HJFACTR_notfound = A68_TRUE;
 /* line 6193: */
 /* line 6194: */
CKFACTR = (*NL(CIFACTR_nonstarter)).upb;
for ( BKFACTR_i = 1;
BKFACTR_i <= CKFACTR;
BKFACTR_i += 1 )
{ 
 /* line 6195: */
if ( !(HJFACTR_notfound) ) break;
 /* line 6196: */
if ( ((*NL(MFBACTR_t1))==(*(&A_VINDEX((*NL(CIFACTR_nonstarter)),BKFACTR_i)))) )
{ 
 /* line 6197: */
 /* line 6198: */
HJFACTR_notfound = A68_FALSE;
} 
}
 /* line 6200: */
 /* line 6201: */
if ( HJFACTR_notfound )
{ 
DKFACTR = (&A_VINDEX((*NL(HFBACTR_sidstack)),(*NL(JFBACTR_stind)))) ;
(*DKFACTR) = (*NL(LFBACTR_failpos));
 /* line 6202: */
(*NL(JFBACTR_stind))+=1;
 /* line 6203: */
(*NL(KFBACTR_crts)) = 3;
 /* line 6204: */
(*NL(ODBACTR_next)) = ((*NL(MFBACTR_t1))+1000);
 /* line 6205: */
 /* line 6206: */
 /* line 6207: */
if ( IJFACTR_formatread )
{ 
 /* line 6208: */
EKFACTR = EDBACTR_frecoversymbol;
} 
else
{ 
EKFACTR = DDBACTR_recoversymbol;
} 
(*NL(MFBACTR_t1)) = EKFACTR;
 /* line 6209: */
 /* line 6210: */
if ( (((*NL(WDBACTR_recoverdepth))+=1)>15) )
{ 
 /* line 6212: */
A_CALLPROC(NL(VJBACTR_abort),(133),(133,(NL(VJBACTR_abort)).nonlocals));
} 
 /* line 6213: */
(*NL(ITAACTR_supflts)) = (FEBACTR_fltgap+1);
 /* line 6214: */
 /* line 6215: */
if ( IJFACTR_formatread )
{ 
A_CALLPROC(NL(UIBACTR_faultchars),(GKFACTR),(GKFACTR,(NL(UIBACTR_faultchars)).nonlocals));
 /* line 6216: */
A_CALLPROC((*NL(FIFACTR_informat1)),(),(((*NL(FIFACTR_informat1))).nonlocals));
 /* line 6217: */
HKFACTR.V.Props = MQAACTR_z;
HKFACTR.V.Mode = ZKAACTR_faultmode;
HKFACTR.V.Vlist = (A68_124 *)A68_NIL;
HKFACTR.V.Labs = (A68_69 *)A68_NIL;
HKFACTR.Type = 0;
HKFACTR.Rest = (A68_124 *)A68_NIL;
(*NL(XGFACTR_vlist)) = HKFACTR;
 /* line 6218: */
(*NL(ITAACTR_supflts)) = FEBACTR_fltgap;
 /* line 6219: */
 /* line 6220: */
A_CALLPROC(NL(UIBACTR_faultchars),(JKFACTR),(JKFACTR,(NL(UIBACTR_faultchars)).nonlocals));
} 
else
{ 
A_CALLPROC(NL(UIBACTR_faultchars),(LKFACTR),(LKFACTR,(NL(UIBACTR_faultchars)).nonlocals));
 /* line 6221: */
(*NL(QDBACTR_look)) = 2;
 /* line 6222: */
A_CALLPROC(NL(GFFACTR_range),(NL(NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &MKFACTR),(NL(NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &MKFACTR,(NL(GFFACTR_range)).nonlocals));
(*NL(XGFACTR_vlist)) = MKFACTR;
 /* line 6223: */
(*NL(ITAACTR_supflts)) = FEBACTR_fltgap;
 /* line 6224: */
A_CALLPROC(NL(UIBACTR_faultchars),(OKFACTR),(OKFACTR,(NL(UIBACTR_faultchars)).nonlocals));
 /* line 6225: */
PKFACTR = (*NL(JFBACTR_stind))-=1 ;
(*NL(KFBACTR_crts)) = (*(&A_VINDEX((*NL(HFBACTR_sidstack)),PKFACTR)));
 /* line 6226: */
 /* line 6227: */
QKFACTR = (Readertype==UDBACTR_formatreader);
if ( QKFACTR )
{QKFACTR = ((*NL(MFBACTR_t1))!=25);
}
if ( QKFACTR )
{ /* line 6228: */
QKFACTR = ((*NL(MFBACTR_t1))!=28);
}
if ( QKFACTR )
{ 
(*NL(ODBACTR_next)) = ((*NL(MFBACTR_t1))+HCBACTR_illegaltok);
 /* line 6229: */
 /* line 6230: */
 /* line 6232: */
(*NL(MFBACTR_t1)) = 0;
} 
} 
 /* line 6233: */
(*NL(WDBACTR_recoverdepth))-=1;
 /* line 6234: */
 /* line 6235: */
goto NIFACTR_endrecover;
} 
else
{ 
 /* line 6236: */
RKFACTR = IJFACTR_formatread;
if ( RKFACTR )
{SKFACTR = ((*NL(MFBACTR_t1))==0);
if ( ! SKFACTR )
{SKFACTR = ((*NL(MFBACTR_t1))==38);
}
if ( ! SKFACTR )
{SKFACTR = ((*NL(MFBACTR_t1))==60);
}
 /* line 6237: */
if ( ! SKFACTR )
{TKFACTR = ((*NL(MFBACTR_t1))>39);
if ( TKFACTR )
{TKFACTR = ((*NL(MFBACTR_t1))<54);
}
SKFACTR = TKFACTR;
}
 /* line 6238: */
RKFACTR = SKFACTR;
}
if ( RKFACTR )
{ 
UKFACTR = ((*NL(MFBACTR_t1))>0);
if ( UKFACTR )
{ /* line 6239: */
UKFACTR = ((*NL(MFBACTR_t1))<60);
}
if ( UKFACTR )
{ 
 /* line 6240: */
(*NL(LSAACTR_tind))-=1;
} 
 /* line 6242: */
 /* line 6244: */
if ( ((*NL(VGFACTR_formatbrind))>=(*NL(VBBACTR_brind))) )
{ 
VKFACTR = (*NL(JFBACTR_stind)) = (*NL(UGFACTR_formatstind)) ;
(*NL(KFBACTR_crts)) = (*(&A_VINDEX((*NL(HFBACTR_sidstack)),VKFACTR)));
 /* line 6245: */
(*NL(ITAACTR_supflts)) = FEBACTR_fltgap;
 /* line 6246: */
A_CALLPROC(NL(UIBACTR_faultchars),(XKFACTR),(XKFACTR,(NL(UIBACTR_faultchars)).nonlocals));
 /* line 6247: */
JJFACTR_result = A68_TRUE;
 /* line 6248: */
(*NL(MFBACTR_t1)) = 0;
 /* line 6249: */
 /* line 6250: */
goto NIFACTR_endrecover;
} 
else
{ 
IJFACTR_formatread = A68_FALSE;
 /* line 6251: */
(*NL(AIFACTR_inserts)) = A_ISVEC(YKFACTR,NL(JEBACTR_insertsn),13,A68_INT );
 /* line 6252: */
(*NL(BIFACTR_ignorable)) = A_ISVEC(ZKFACTR,NL(LEBACTR_ignorablen),17,A68_INT );
 /* line 6253: */
(*NL(CIFACTR_nonstarter)) = A_ISVEC(ALFACTR,NL(NEBACTR_nonducstart),24,A68_INT );
 /* line 6254: */
(*NL(MFBACTR_t1)) = A_CALLPROC(NL(LFDACTR_reader),(TDBACTR_screader),(TDBACTR_screader,(NL(LFDACTR_reader)).nonlocals));
 /* line 6255: */
 /* line 6256: */
 /* line 6257: */
goto PIFACTR_level2;
} 
} 
else
{ 
BLFACTR = ((*NL(MFBACTR_t1))!=25);
if ( BLFACTR )
{BLFACTR = ((*NL(MFBACTR_t1))!=45);
}
 /* line 6258: */
if ( ! BLFACTR )
{BLFACTR = ((*NL(VBBACTR_brind))>=(*NL(TGFACTR_rangebrind)));
}
if ( ! BLFACTR )
{BLFACTR = ((*NL(TGFACTR_rangebrind))==2);
}
 /* line 6259: */
if ( BLFACTR )
{ /* line 6260: */
BLFACTR = ((*NL(MFBACTR_t1))!=60);
}
if ( BLFACTR )
{ 
CLFACTR = 1 ;
DLFACTR = (&A_VINDEX(YIFACTR_ignoremess,CLFACTR)) ;
(*DLFACTR) = (A68_SSBITS)(A68_INT )(A68_BITS )((A68_BITS )(*NL(MFBACTR_t1))&(A68_BITS )63);
 /* line 6261: */
 /* line 6262: */
if ( ((*NL(MFBACTR_t1))==74) )
{ 
ELFACTR = ((*NL(WDBACTR_recoverdepth))==0);
if ( ELFACTR )
{ /* line 6263: */
ELFACTR = ((*NL(ITAACTR_supflts))==0);
}
 /* line 6265: */
if ( ELFACTR )
{ 
 /* line 6266: */
FLFACTR = 132;
} 
else
{ 
 /* line 6267: */
FLFACTR = (-1);
} 
 /* line 6268: */
A_CALLPROC(NL(VJBACTR_abort),(FLFACTR),(FLFACTR,(NL(VJBACTR_abort)).nonlocals));
} 
 /* line 6269: */
GLFACTR = 10 ;
HLFACTR = (&A_VINDEX(YIFACTR_ignoremess,GLFACTR)) ;
(*HLFACTR) = '2';
 /* line 6270: */
(*NL(ITAACTR_supflts)) = FEBACTR_fltgap;
 /* line 6271: */
A_CALLPROC(NL(UIBACTR_faultchars),(YIFACTR_ignoremess),(YIFACTR_ignoremess,(NL(UIBACTR_faultchars)).nonlocals));
 /* line 6272: */
ILFACTR = 10 ;
JLFACTR = (&A_VINDEX(YIFACTR_ignoremess,ILFACTR)) ;
(*JLFACTR) = '1';
 /* line 6273: */
(*NL(MFBACTR_t1)) = A_CALLPROC(NL(LFDACTR_reader),(Readertype),(Readertype,(NL(LFDACTR_reader)).nonlocals));
 /* line 6274: */
 /* line 6275: */
goto PIFACTR_level2;
} 
else
{ 
(*NL(JFBACTR_stind)) = (*NL(SGFACTR_rangestind));
 /* line 6276: */
A_CALLPROC(NL(UIBACTR_faultchars),(LLFACTR),(LLFACTR,(NL(UIBACTR_faultchars)).nonlocals));
 /* line 6277: */
(*NL(KFBACTR_crts)) = (*(&A_VINDEX((*NL(HFBACTR_sidstack)),(*NL(JFBACTR_stind)))));
 /* line 6278: */
MLFACTR.V.Props = MQAACTR_z;
MLFACTR.V.Mode = ZKAACTR_faultmode;
MLFACTR.V.Vlist = (A68_124 *)A68_NIL;
MLFACTR.V.Labs = (A68_69 *)A68_NIL;
MLFACTR.Type = 0;
MLFACTR.Rest = (A68_124 *)A68_NIL;
(*NL(XGFACTR_vlist)) = MLFACTR;
 /* line 6279: */
if ( ((*NL(MFBACTR_t1))==60) )
{ 
(*NL(MFBACTR_t1)) = A_CALLPROC(NL(LFDACTR_reader),(TDBACTR_screader),(TDBACTR_screader,(NL(LFDACTR_reader)).nonlocals));
} 
 /* line 6280: */
 /* line 6281: */
siglongjmp(NL(JFFACTR_exitsc).label,1);
} 
} 
} 
 /* line 6283: */
NIFACTR_endrecover:
 /* line 6285: */
NLFACTR = JJFACTR_result;
} 
A_PROC_EXIT(recovery);
return( NLFACTR );
} 
#undef NL

A_STATIC A68_INT  RLFACTR_declarer(A68_BOOL  Modedec, A68_52 * Am, void *NonLocals)
#define NL(x) (((SLFACTR_declarer *)NonLocals)->x)
{ 
A68_INT  VLFACTR_i;
A68_INT  WLFACTR_j;
A68_INT  XLFACTR_n;
A68_INT  YLFACTR_mode;
A68_INT  ZLFACTR_dectype;
A68_INT  AMFACTR_decdescno;
A68_BOOL  BMFACTR_lic;
A68_241 * CMFACTR_mll;
A68_52 * DMFACTR_amode;
A68_53 * EMFACTR_amodelist;
A68_53 * FMFACTR_amodestack;
A68_53 * GMFACTR_aml;
A68_58 * HMFACTR_selstack;
A68_58 * IMFACTR_selist;
A68_58 * JMFACTR_sl;
A68_58 * KMFACTR_sl1;
A68_54 * LMFACTR_intstack;
A68_54 * MMFACTR_modelist;
A68_54 * NMFACTR_modestack;
A68_54 * OMFACTR_ml;
A68_INT  PMFACTR;  /* clause result */
A68_INT  QMFACTR_i;
A68_INT  RMFACTR;  /* clause result */
A68_INT  SMFACTR_i;
A68_54  TMFACTR;  /* collateral clause result */
A68_54 * UMFACTR;  /* YIELD */
A68_INT  VMFACTR_i;
A68_INT  WMFACTR;  /* to part of loop */
A68_INT  XMFACTR_i;
A68_INT * YMFACTR;  /* YIELD */
A68_VC  ZMFACTR;  /* OPERATORS - istruct -> vector */
A68_31  ANFACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BNFACTR;  /* OPERATORS - istruct -> vector */
A68_31  CNFACTR;  /* OPERATORS - istruct -> vector */
A68_54  DNFACTR;  /* collateral clause result */
A68_54 * ENFACTR;  /* YIELD */
A68_58  FNFACTR;  /* collateral clause result */
A68_58 * GNFACTR;  /* YIELD */
A68_58 ** HNFACTR;  /* YIELD */
A68_58  INFACTR;  /* collateral clause result */
A68_58 * JNFACTR;  /* YIELD */
A68_54  KNFACTR;  /* collateral clause result */
A68_54 * LNFACTR;  /* YIELD */
A68_54  MNFACTR;  /* collateral clause result */
A68_54 * NNFACTR;  /* YIELD */
A68_INT * ONFACTR;  /* YIELD */
A68_54  PNFACTR;  /* collateral clause result */
A68_54 * QNFACTR;  /* YIELD */
A68_54 ** RNFACTR;  /* YIELD */
A68_INT  SNFACTR;  /* YIELD */
A68_66  TNFACTR;  /* united object - for case conformity */
A68_56 * UNFACTR_u;
A68_INT  VNFACTR_j;
A68_54  WNFACTR;  /* collateral clause result */
A68_54 * XNFACTR;  /* YIELD */
A68_INT  YNFACTR;  /* to part of loop */
A68_INT  ZNFACTR;  /* loop control */
A68_54 ** AOFACTR;  /* YIELD */
A68_241  BOFACTR;  /* collateral clause result */
A68_241 * COFACTR;  /* YIELD */
A68_INT  DOFACTR;  /* clause result */
A68_INT  GOFACTR_k;
A68_INT  HOFACTR_i;
A68_INT  IOFACTR;  /* to part of loop */
A68_66  JOFACTR;  /* united object - for case conformity */
A68_64 * KOFACTR_st;
A68_64  LOFACTR;  /* collateral clause result */
A68_INT  MOFACTR;  /* YIELD */
A68_64 * NOFACTR;  /* YIELD */
A68_66  OOFACTR;  /* OPERATORS - mode -> union mode */
A68_66 * POFACTR;  /* YIELD */
A68_81  QOFACTR;  /* collateral clause result */
A68_67  ROFACTR;  /* collateral clause result */
A68_67 * SOFACTR;  /* YIELD */
A68_106  TOFACTR;  /* OPERATORS - mode -> union mode */
A68_INT * UOFACTR;  /* YIELD */
A68_85  VOFACTR;  /* collateral clause result */
A68_106  WOFACTR;  /* OPERATORS - mode -> union mode */
A68_85  XOFACTR;  /* collateral clause result */
A68_106  YOFACTR;  /* OPERATORS - mode -> union mode */
A68_125  ZOFACTR;  /* avoid structure result */
A68_BITS * APFACTR;  /* YIELD */
A68_53 * BPFACTR;  /* clause result */
A68_53  CPFACTR;  /* collateral clause result */
A68_53 * DPFACTR;  /* clause result */
A68_52 * EPFACTR;  /* clause result */
A68_52  FPFACTR;  /* collateral clause result */
A68_BOOL  GPFACTR;  /* optbool result */
A68_52 * HPFACTR;  /* clause result */
A68_52  IPFACTR;  /* collateral clause result */
A68_52 * JPFACTR;  /* clause result */
A68_BOOL  KPFACTR;  /* optbool result */
A68_BOOL  LPFACTR;  /* optbool result */
A68_54  MPFACTR;  /* collateral clause result */
A68_54 * NPFACTR;  /* YIELD */
A68_BOOL  OPFACTR;  /* optbool result */
A68_52 * PPFACTR;  /* clause result */
A68_52  QPFACTR;  /* collateral clause result */
A68_53 * RPFACTR;  /* clause result */
A68_53  SPFACTR;  /* collateral clause result */
A68_52 * TPFACTR;  /* clause result */
A68_BOOL  UPFACTR;  /* optbool result */
A68_53 * VPFACTR;  /* clause result */
A68_53  WPFACTR;  /* collateral clause result */
A68_53 * XPFACTR;  /* clause result */
A68_58  YPFACTR;  /* collateral clause result */
A68_58 * ZPFACTR;  /* YIELD */
A68_BOOL  AQFACTR;  /* optbool result */
A68_53 * BQFACTR;  /* clause result */
A68_53  CQFACTR;  /* collateral clause result */
A68_INT  DQFACTR;  /* clause result */
A68_58  EQFACTR;  /* collateral clause result */
A68_58 * FQFACTR;  /* YIELD */
A68_58 ** GQFACTR;  /* YIELD */
A68_53 ** HQFACTR;  /* YIELD */
A68_BOOL  IQFACTR;  /* optbool result */
A68_INT  JQFACTR;  /* clause result */
A68_52  KQFACTR;  /* clause result */
A68_52  LQFACTR;  /* collateral clause result */
A68_BOOL  MQFACTR;  /* optbool result */
A68_INT  NQFACTR;  /* clause result */
A68_INT  OQFACTR;  /* clause result */
A_PROC_ENTRY(declarer);
 /* line 6290: */
{ 
 /* line 6291: */
 /* line 6292: */
 /* line 6293: */
CMFACTR_mll = (A68_241 *)A68_NIL;
 /* line 6294: */
DMFACTR_amode = (A68_52 *)A68_NIL;
 /* line 6295: */
EMFACTR_amodelist = (A68_53 *)A68_NIL;
FMFACTR_amodestack = (A68_53 *)A68_NIL;
 /* line 6296: */
HMFACTR_selstack = (A68_58 *)A68_NIL;
IMFACTR_selist = (A68_58 *)A68_NIL;
 /* line 6297: */
LMFACTR_intstack = (A68_54 *)A68_NIL;
MMFACTR_modelist = (A68_54 *)A68_NIL;
 /* line 6298: */
NMFACTR_modestack = (A68_54 *)A68_NIL;
 /* line 6299: */
(*NL(GGFACTR_type)) = 0;
 /* line 6300: */
if ( !Modedec )
{ 
(*NL(HGFACTR_descno)) = 1;
} 
 /* line 6304: */
for ( ;; )
{ 
 /* line 6306: */
 /* line 6309: */
switch ( A_CALLPROC(NL(PFBACTR_analyser),(),((NL(PFBACTR_analyser)).nonlocals)) )
{ 
case 1: 
{ 
(*NL(JBBACTR_oldtind)) = (*NL(LSAACTR_tind));
 /* line 6310: */
 /* line 6311: */
 /* line 6314: */
(*NL(MFBACTR_t1)) = A_CALLPROC(NL(LFDACTR_reader),(RDBACTR_decreader),(RDBACTR_decreader,(NL(LFDACTR_reader)).nonlocals));
} 
break;
case 2: 
{ 
A_CALLPROC(NL(QJBACTR_fault),(134),(134,(NL(QJBACTR_fault)).nonlocals));
 /* line 6316: */
 /* line 6317: */
 /* line 6320: */
A_CALLPROC(NL(HIFACTR_recovery),(RDBACTR_decreader),(RDBACTR_decreader,(NL(HIFACTR_recovery)).nonlocals));
} 
break;
case 3: 
{ 
switch ( 2 )
{ 
case 1: 
PMFACTR = 1;
break;
default: 
A_IMP_SKIP ;
break;
} 
QMFACTR_i = PMFACTR;
 /* line 6322: */
/*SKIP*/;
} 
break;
case 4: 
{ 
switch ( 2 )
{ 
case 1: 
RMFACTR = 1;
break;
default: 
A_IMP_SKIP ;
break;
} 
SMFACTR_i = RMFACTR;
 /* line 6325: */
/*SKIP*/;
} 
break;
case 5: 
TMFACTR.Mode = (XLFACTR_n/2);
TMFACTR.Rest = LMFACTR_intstack;
 /* line 6328: */
UMFACTR = A_LOC(A68_54 ) ;
(*UMFACTR) = TMFACTR ;
LMFACTR_intstack = UMFACTR;
break;
case 6: 
{ 
WLFACTR_j = (*(&(NMFACTR_modestack->Mode)));
 /* line 6329: */
NMFACTR_modestack = (*(&(NMFACTR_modestack->Rest)));
 /* line 6330: */
XLFACTR_n = (*(&(LMFACTR_intstack->Mode)));
 /* line 6331: */
LMFACTR_intstack = (*(&(LMFACTR_intstack->Rest)));
 /* line 6332: */
 /* line 6333: */
WMFACTR = (XLFACTR_n-1);
for ( VMFACTR_i = 1;
VMFACTR_i <= WMFACTR;
VMFACTR_i += 1 )
{ 
YLFACTR_mode = A_CALLPROC(NL(FVBACTR_insertarray),(YLFACTR_mode, VMFACTR_i, 1),(YLFACTR_mode, VMFACTR_i, 1,(NL(FVBACTR_insertarray)).nonlocals));
}
 /* line 6334: */
 /* line 6335: */
 /* line 6338: */
YLFACTR_mode = A_CALLPROC(NL(FVBACTR_insertarray),(YLFACTR_mode, XLFACTR_n, WLFACTR_j),(YLFACTR_mode, XLFACTR_n, WLFACTR_j,(NL(FVBACTR_insertarray)).nonlocals));
} 
break;
case 7: 
{ 
JMFACTR_sl = IMFACTR_selist;
 /* line 6339: */
for ( XMFACTR_i = 1;;
XMFACTR_i += 1 ) 
{ 
 /* line 6340: */
if ( !((JMFACTR_sl!=RQAACTR_nilsel)) ) break;
YMFACTR = (&(JMFACTR_sl->Fieldno)) ;
(*YMFACTR) = XMFACTR_i;
 /* line 6341: */
KMFACTR_sl1 = JMFACTR_sl;
 /* line 6342: */
for ( ;; )
{ 
 /* line 6343: */
if ( !(((KMFACTR_sl1 = (*(&(KMFACTR_sl1->Rest))))!=RQAACTR_nilsel)) ) break;
 /* line 6344: */
ANFACTR = (*(&(KMFACTR_sl1->Name))) ;
CNFACTR = (*(&(JMFACTR_sl->Name))) ;
if ( A_VC_EQ(A_HISVEC(ZMFACTR,ANFACTR,32,A68_CHAR ),A_HISVEC(BNFACTR,CNFACTR,32,A68_CHAR )) )
{ 
 /* line 6346: */
 /* line 6347: */
A_CALLPROC(NL(PZBACTR_faultp),(187, 0, 0, (&(JMFACTR_sl->Name))),(187, 0, 0, (&(JMFACTR_sl->Name)),(NL(PZBACTR_faultp)).nonlocals));
} 
}
 /* line 6348: */
 /* line 6349: */
JMFACTR_sl = (*(&(JMFACTR_sl->Rest)));
}
 /* line 6350: */
 /* line 6351: */
 /* line 6354: */
YLFACTR_mode = A_CALLPROC(NL(LTBACTR_insertstrct),(1, IMFACTR_selist),(1, IMFACTR_selist,(NL(LTBACTR_insertstrct)).nonlocals));
} 
break;
case 8: 
 /* line 6357: */
YLFACTR_mode = (*(&((*NL(JDBACTR_decmode))->Mode)));
break;
case 9: 
{ 
DNFACTR.Mode = (*NL(HTAACTR_iv));
DNFACTR.Rest = NMFACTR_modestack;
ENFACTR = A_LOC(A68_54 ) ;
(*ENFACTR) = DNFACTR ;
NMFACTR_modestack = ENFACTR;
 /* line 6358: */
 /* line 6359: */
if ( ((*NL(HTAACTR_iv))==0) )
{ 
 /* line 6361: */
A_CALLPROC(NL(QJBACTR_fault),(135),(135,(NL(QJBACTR_fault)).nonlocals));
} 
else
{ 
 /* line 6362: */
if ( ((*NL(HTAACTR_iv))>YDAACTR_maxistruct) )
{ 
 /* line 6364: */
 /* line 6365: */
 /* line 6368: */
A_CALLPROC(NL(QJBACTR_fault),(195),(195,(NL(QJBACTR_fault)).nonlocals));
} 
} 
} 
break;
case 10: 
{ 
YLFACTR_mode = A_CALLPROC(NL(TWBACTR_insertis),(YLFACTR_mode, (*(&(NMFACTR_modestack->Mode)))),(YLFACTR_mode, (*(&(NMFACTR_modestack->Mode))),(NL(TWBACTR_insertis)).nonlocals));
 /* line 6369: */
 /* line 6370: */
 /* line 6373: */
NMFACTR_modestack = (*(&(NMFACTR_modestack->Rest)));
} 
break;
case 11: 
{ 
WLFACTR_j = (*(&(NMFACTR_modestack->Mode)));
 /* line 6374: */
NMFACTR_modestack = (*(&(NMFACTR_modestack->Rest)));
 /* line 6375: */
 /* line 6376: */
 /* line 6379: */
YLFACTR_mode = A_CALLPROC(NL(ZVBACTR_insertvec),(YLFACTR_mode, WLFACTR_j),(YLFACTR_mode, WLFACTR_j,(NL(ZVBACTR_insertvec)).nonlocals));
} 
break;
case 12: 
FNFACTR.Mode = YLFACTR_mode;
FNFACTR.Fieldno = 0;
FNFACTR.Name = (*NL(PSAACTR_ident));
FNFACTR.Rest = HMFACTR_selstack;
 /* line 6382: */
GNFACTR = A_HEAP(A68_58 ) ;
(*GNFACTR) = FNFACTR ;
HMFACTR_selstack = GNFACTR;
break;
case 13: 
{ 
JMFACTR_sl = HMFACTR_selstack;
 /* line 6383: */
HMFACTR_selstack = (*(&(HMFACTR_selstack->Rest)));
 /* line 6384: */
HNFACTR = (&(JMFACTR_sl->Rest)) ;
(*HNFACTR) = IMFACTR_selist;
 /* line 6385: */
 /* line 6386: */
 /* line 6389: */
IMFACTR_selist = JMFACTR_sl;
} 
break;
case 14: 
INFACTR.Mode = YLFACTR_mode;
INFACTR.Fieldno = 0;
INFACTR.Name = (*NL(PSAACTR_ident));
INFACTR.Rest = (A68_58 *)A68_NIL;
 /* line 6392: */
JNFACTR = A_HEAP(A68_58 ) ;
(*JNFACTR) = INFACTR ;
IMFACTR_selist = JNFACTR;
break;
case 15: 
KNFACTR.Mode = 1;
KNFACTR.Rest = NMFACTR_modestack;
 /* line 6395: */
LNFACTR = A_LOC(A68_54 ) ;
(*LNFACTR) = KNFACTR ;
NMFACTR_modestack = LNFACTR;
break;
case 16: 
MNFACTR.Mode = (-1);
MNFACTR.Rest = NMFACTR_modestack;
 /* line 6398: */
NNFACTR = A_LOC(A68_54 ) ;
(*NNFACTR) = MNFACTR ;
NMFACTR_modestack = NNFACTR;
break;
case 17: 
{ 
VLFACTR_i = A_CALLPROC(NL(YLCACTR_makeflex),(YLFACTR_mode),(YLFACTR_mode,(NL(YLCACTR_makeflex)).nonlocals));
 /* line 6399: */
 /* line 6400: */
if ( (VLFACTR_i==YLFACTR_mode) )
{ 
 /* line 6402: */
A_CALLPROC(NL(PZBACTR_faultp),(191, VLFACTR_i, 0, (A68_31 *)A68_NIL),(191, VLFACTR_i, 0, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
} 
else
{ 
 /* line 6403: */
ONFACTR = (&(DMFACTR_amode->Mode)) ;
(*ONFACTR) = VLFACTR_i;
} 
 /* line 6404: */
 /* line 6405: */
 /* line 6409: */
YLFACTR_mode = VLFACTR_i;
} 
break;
case 18: 
 /* line 6412: */
YLFACTR_mode+=KQAACTR_refmark;
break;
case 19: 
 /* line 6415: */
YLFACTR_mode = A_CALLPROC(NL(LUBACTR_insertprc),(A_CALLPROC(NL(JGCACTR_deflex),(YLFACTR_mode),(YLFACTR_mode,(NL(JGCACTR_deflex)).nonlocals))),(A_CALLPROC(NL(JGCACTR_deflex),(YLFACTR_mode),(YLFACTR_mode,(NL(JGCACTR_deflex)).nonlocals)),(NL(LUBACTR_insertprc)).nonlocals));
break;
case 20: 
 /* line 6418: */
YLFACTR_mode = A_CALLPROC(NL(OSBACTR_insertunion),(MMFACTR_modelist),(MMFACTR_modelist,(NL(OSBACTR_insertunion)).nonlocals));
break;
case 21: 
{ 
MMFACTR_modelist = (*(&(CMFACTR_mll->Ml)));
 /* line 6419: */
CMFACTR_mll = (*(&(CMFACTR_mll->Rest)));
 /* line 6420: */
 /* line 6421: */
 /* line 6424: */
YLFACTR_mode = A_CALLPROC(NL(RRBACTR_insertprocp),(A_CALLPROC(NL(JGCACTR_deflex),(YLFACTR_mode),(YLFACTR_mode,(NL(JGCACTR_deflex)).nonlocals)), MMFACTR_modelist),(A_CALLPROC(NL(JGCACTR_deflex),(YLFACTR_mode),(YLFACTR_mode,(NL(JGCACTR_deflex)).nonlocals)), MMFACTR_modelist,(NL(RRBACTR_insertprocp)).nonlocals));
} 
break;
case 22: 
 /* line 6427: */
YLFACTR_mode = YKAACTR_voidmode;
break;
case 23: 
{ 
PNFACTR.Mode = A_CALLPROC(NL(JGCACTR_deflex),(YLFACTR_mode),(YLFACTR_mode,(NL(JGCACTR_deflex)).nonlocals));
PNFACTR.Rest = NMFACTR_modestack;
QNFACTR = A_HEAP(A68_54 ) ;
(*QNFACTR) = PNFACTR ;
NMFACTR_modestack = QNFACTR;
 /* line 6428: */
 /* line 6429: */
 /* line 6432: */
MMFACTR_modelist = (A68_54 *)A68_NIL;
} 
break;
case 24: 
{ 
OMFACTR_ml = NMFACTR_modestack;
 /* line 6433: */
NMFACTR_modestack = (*(&(NMFACTR_modestack->Rest)));
 /* line 6434: */
RNFACTR = (&(OMFACTR_ml->Rest)) ;
(*RNFACTR) = MMFACTR_modelist;
 /* line 6435: */
 /* line 6436: */
 /* line 6439: */
MMFACTR_modelist = OMFACTR_ml;
} 
break;
case 25: 
{ 
 /* line 6440: */
if ( ((*(&(NMFACTR_modestack->Mode)))>KQAACTR_refmark) )
{ 
 /* line 6441: */
VLFACTR_i = 1;
} 
else
{ 
 /* line 6442: */
SNFACTR = (*(&(NMFACTR_modestack->Mode))) ;
TNFACTR = (*(&A_VINDEX(NL(KUAACTR_modes),SNFACTR))) ;
switch ( TNFACTR.mode )
{ 
case 2: /* REF STRUCT(INT,REF MODE54)  */
UNFACTR_u = (TNFACTR.data.mode2);
 /* line 6443: */
{ 
OMFACTR_ml = (*(&(UNFACTR_u->Modelist)));
 /* line 6444: */
NMFACTR_modestack = (*(&(NMFACTR_modestack->Rest)));
 /* line 6445: */
for ( VNFACTR_j = 1;;
VNFACTR_j += 1 ) 
{ 
 /* line 6446: */
if ( !((OMFACTR_ml!=OQAACTR_nilml)) ) break;
 /* line 6447: */
WNFACTR.Mode = (*(&(OMFACTR_ml->Mode)));
WNFACTR.Rest = NMFACTR_modestack;
XNFACTR = A_HEAP(A68_54 ) ;
(*XNFACTR) = WNFACTR ;
NMFACTR_modestack = XNFACTR;
 /* line 6448: */
OMFACTR_ml = (*(&(OMFACTR_ml->Rest)));
 /* line 6449: */
 /* line 6450: */
VLFACTR_i = VNFACTR_j;
}
 /* line 6451: */
 /* line 6452: */
} 
break;
default: 
 /* line 6453: */
 /* line 6454: */
VLFACTR_i = 1;
break;
} 
} 
 /* line 6456: */
 /* line 6457: */
YNFACTR = VLFACTR_i;
for ( ZNFACTR = 1;
ZNFACTR <= YNFACTR;
ZNFACTR += 1 )
{ 
OMFACTR_ml = NMFACTR_modestack;
 /* line 6458: */
NMFACTR_modestack = (*(&(NMFACTR_modestack->Rest)));
 /* line 6459: */
AOFACTR = (&(OMFACTR_ml->Rest)) ;
(*AOFACTR) = MMFACTR_modelist;
 /* line 6460: */
 /* line 6461: */
MMFACTR_modelist = OMFACTR_ml;
}
 /* line 6462: */
 /* line 6463: */
 /* line 6466: */
BWDACTR_removedupl(MMFACTR_modelist);
} 
break;
case 26: 
BOFACTR.Ml = MMFACTR_modelist;
BOFACTR.Rest = CMFACTR_mll;
 /* line 6469: */
COFACTR = A_LOC(A68_241 ) ;
(*COFACTR) = BOFACTR ;
CMFACTR_mll = COFACTR;
break;
case 27: 
 /* line 6472: */
(*NL(ZYAACTR_nolongs)) = 2;
break;
case 28: 
 /* line 6475: */
(*NL(ZYAACTR_nolongs)) = 1;
break;
case 29: 
 /* line 6478: */
(*NL(ZYAACTR_nolongs)) = 0;
break;
case 30: 
 /* line 6481: */
(*NL(ZYAACTR_nolongs)) = (-1);
break;
case 31: 
 /* line 6484: */
YLFACTR_mode = (((4*(*NL(MFBACTR_t1)))-137)+(*NL(ZYAACTR_nolongs)));
break;
case 32: 
 /* line 6485: */
 /* line 6486: */
if ( ((*NL(MFBACTR_t1))==94) )
{ 
DOFACTR = JLAACTR_xtype;
} 
else
{ 
 /* line 6487: */
 /* line 6488: */
if ( ((*NL(MFBACTR_t1))==95) )
{ 
DOFACTR = KLAACTR_ytype;
} 
else
{ 
 /* line 6489: */
DOFACTR = ((*NL(MFBACTR_t1))-27);
} 
} 
 /* line 6492: */
YLFACTR_mode = DOFACTR;
break;
case 33: 
 /* line 6495: */
YLFACTR_mode = ZKAACTR_faultmode;
break;
case 34: 
{ 
GOFACTR_k = A_CALLPROC(NL(JGCACTR_deflex),(YLFACTR_mode),(YLFACTR_mode,(NL(JGCACTR_deflex)).nonlocals));
 /* line 6496: */
 /* line 6497: */
IOFACTR = (*NL(VYAACTR_lastmode));
for ( HOFACTR_i = NL(YYAACTR_newmode1);
HOFACTR_i <= IOFACTR;
HOFACTR_i += 1 )
{ 
 /* line 6498: */
JOFACTR = (*(&A_VINDEX(NL(KUAACTR_modes),HOFACTR_i))) ;
switch ( JOFACTR.mode )
{ 
case 9: /* REF STRUCT(INT,REF MODE63)  */
KOFACTR_st = (JOFACTR.data.mode9);
 /* line 6499: */
 /* line 6500: */
if ( (GOFACTR_k==(*(&(KOFACTR_st->Mode)))) )
{ 
YLFACTR_mode = HOFACTR_i;
 /* line 6501: */
 /* line 6502: */
 /* line 6503: */
 /* line 6504: */
goto FOFACTR_end;
} 
break;
default: 
 /* line 6505: */
/*SKIP*/;
break;
} 
}
 /* line 6507: */
 /* line 6508: */
if ( ((*NL(VYAACTR_lastmode))<TDAACTR_upbofmodes) )
{ 
LOFACTR.Mode = GOFACTR_k;
 /* line 6509: */
LOFACTR.Stenlist = (A68_63 *)A68_NIL;
MOFACTR = YLFACTR_mode = (*NL(VYAACTR_lastmode))+=1 ;
NOFACTR = A_HEAP(A68_64 ) ;
(*NOFACTR) = LOFACTR ;
POFACTR = (&A_VINDEX(NL(KUAACTR_modes),MOFACTR)) ;
(*POFACTR) = A_UNITE(OOFACTR,mode9,9,NOFACTR);
} 
else
{ 
 /* line 6511: */
A_CALLPROC(NL(VJBACTR_abort),(206),(206,(NL(VJBACTR_abort)).nonlocals));
} 
 /* line 6513: */
FOFACTR_end:
 /* line 6514: */
 /* line 6517: */
/*SKIP*/;
} 
break;
case 35: 
{ 
(*NL(FZAACTR_outlevel))+=1;
 /* line 6518: */
XLFACTR_n = 2;
 /* line 6519: */
BMFACTR_lic = (*NL(GBBACTR_lastidchanged));
 /* line 6520: */
 /* line 6521: */
 /* line 6524: */
(*NL(GBBACTR_lastidchanged)) = A68_FALSE;
} 
break;
case 36: 
 /* line 6525: */
if ( ((*NL(GGFACTR_type))==2) )
{ 
 /* line 6527: */
A_CALLPROC(NL(QJBACTR_fault),(188),(188,(NL(QJBACTR_fault)).nonlocals));
} 
else
{ 
 /* line 6528: */
 /* line 6531: */
(*NL(GGFACTR_type)) = 1;
} 
break;
case 37: 
{ 
 /* line 6532: */
if ( (*NL(GBBACTR_lastidchanged)) )
{ 
 /* line 6533: */
QOFACTR.Type = DPAACTR_xdummydec;
ROFACTR.Name = NL(BZAACTR_nullid);
 /* line 6534: */
ROFACTR.Decno = (*NL(GZAACTR_maxident));
ROFACTR.Level = (*(&((*NL(QYAACTR_globcurrent))->Level)));
 /* line 6535: */
ROFACTR.Mode = 0;
 /* line 6536: */
ROFACTR.Scope = (*(&((*NL(QYAACTR_globcurrent))->Lastid)));
ROFACTR.Rest = (A68_67 *)A68_NIL;
SOFACTR = A_LOC(A68_67 ) ;
(*SOFACTR) = ROFACTR ;
QOFACTR.Iddec = SOFACTR;
 /* line 6537: */
 /* line 6538: */
A_CALLPROC(NL(Output),(A_UNITE(TOFACTR,mode12,12,QOFACTR), ((*NL(FZAACTR_outlevel))-1)),(A_UNITE(TOFACTR,mode12,12,QOFACTR), ((*NL(FZAACTR_outlevel))-1),(NL(Output)).nonlocals));
 /* line 6539: */
 /* line 6540: */
UOFACTR = (&((*NL(QYAACTR_globcurrent))->Lastid)) ;
(*UOFACTR) = (*NL(GZAACTR_maxident));
} 
 /* line 6542: */
(*NL(GBBACTR_lastidchanged)) = BMFACTR_lic;
 /* line 6543: */
 /* line 6544: */
if ( ((*NL(GGFACTR_type))==1) )
{ 
 /* line 6546: */
A_CALLPROC(NL(QJBACTR_fault),(188),(188,(NL(QJBACTR_fault)).nonlocals));
} 
else
{ 
 /* line 6547: */
(*NL(GGFACTR_type)) = 2;
} 
 /* line 6548: */
VOFACTR.Fn = OMAACTR_xbdpack;
VOFACTR.M = 0;
VOFACTR.Param = XLFACTR_n;
A_CALLPROC(NL(Output),(A_UNITE(WOFACTR,mode14,14,VOFACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(WOFACTR,mode14,14,VOFACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 6549: */
A_CALLPROC(NL(Output),(QKAACTR_up, (*NL(FZAACTR_outlevel))),(QKAACTR_up, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 6550: */
 /* line 6551: */
 /* line 6554: */
(*NL(FZAACTR_outlevel))-=1;
} 
break;
case 38: 
 /* line 6557: */
XLFACTR_n = 2;
break;
case 39: 
 /* line 6560: */
XLFACTR_n+=2;
break;
case 40: 
XOFACTR.Fn = VMAACTR_xdefaultbd;
XOFACTR.M = 0;
XOFACTR.Param = 0;
 /* line 6563: */
A_CALLPROC(NL(Output),(A_UNITE(YOFACTR,mode14,14,XOFACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(YOFACTR,mode14,14,XOFACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
break;
case 41: 
 /* line 6566: */
XLFACTR_n = 1;
break;
case 42: 
{ 
ZLFACTR_dectype = (*NL(GGFACTR_type));
 /* line 6567: */
(*NL(SYAACTR_modedecdepth))+=1;
 /* line 6568: */
AMFACTR_decdescno = (*NL(HGFACTR_descno));
 /* line 6569: */
A_CALLPROC((*NL(LGFACTR_uc1)),(ELAACTR_int, &ZOFACTR),(ELAACTR_int, &ZOFACTR,((*NL(LGFACTR_uc1))).nonlocals));
ZOFACTR;
 /* line 6570: */
(*NL(HGFACTR_descno)) = AMFACTR_decdescno;
 /* line 6571: */
(*NL(SYAACTR_modedecdepth))-=1;
 /* line 6572: */
(*NL(GGFACTR_type)) = ZLFACTR_dectype;
 /* line 6573: */
 /* line 6574: */
 /* line 6577: */
APFACTR = (&(NL(NFFACTR_current)->Dybits)) ;
(*APFACTR) = MQAACTR_z;
} 
break;
case 43: 
 /* line 6578: */
if ( ((*NL(GGFACTR_type))==2) )
{ 
 /* line 6579: */
if ( (DMFACTR_amode!=QQAACTR_nilam) )
{ 
 /* line 6580: */
 /* line 6581: */
if ( Modedec )
{ 
 /* line 6582: */
BPFACTR = A_HEAP(A68_53 );
} 
else
{ 
BPFACTR = A_LOC(A68_53 );
} 
CPFACTR.Am = DMFACTR_amode;
 /* line 6583: */
CPFACTR.Rest = (A68_53 *)A68_NIL;
 /* line 6584: */
(*BPFACTR) = CPFACTR ;
DPFACTR = BPFACTR;
} 
else
{ 
DPFACTR = (A68_53 *)A68_NIL;
} 
EMFACTR_amodelist = DPFACTR;
 /* line 6585: */
 /* line 6586: */
 /* line 6587: */
if ( Modedec )
{ 
 /* line 6588: */
EPFACTR = A_HEAP(A68_52 );
} 
else
{ 
 /* line 6589: */
EPFACTR = A_LOC(A68_52 );
} 
FPFACTR.Mode = YLFACTR_mode;
FPFACTR.Modeproc = (-(*(&(LMFACTR_intstack->Mode))));
FPFACTR.El = EMFACTR_amodelist;
(*EPFACTR) = FPFACTR ;
DMFACTR_amode = EPFACTR;
 /* line 6590: */
 /* line 6591: */
LMFACTR_intstack = (*(&(LMFACTR_intstack->Rest)));
} 
else
{ 
 /* line 6592: */
 /* line 6595: */
DMFACTR_amode = (A68_52 *)A68_NIL;
} 
break;
case 44: 
GPFACTR = (EMFACTR_amodelist!=PQAACTR_nilaml);
if ( GPFACTR )
{ /* line 6596: */
GPFACTR = ((*NL(GGFACTR_type))!=1);
}
if ( GPFACTR )
{ 
 /* line 6597: */
 /* line 6598: */
if ( Modedec )
{ 
 /* line 6599: */
HPFACTR = A_HEAP(A68_52 );
} 
else
{ 
HPFACTR = A_LOC(A68_52 );
} 
IPFACTR.Mode = YLFACTR_mode;
IPFACTR.Modeproc = 1;
 /* line 6600: */
IPFACTR.El = EMFACTR_amodelist;
 /* line 6601: */
(*HPFACTR) = IPFACTR ;
JPFACTR = HPFACTR;
} 
else
{ 
JPFACTR = (A68_52 *)A68_NIL;
} 
 /* line 6604: */
DMFACTR_amode = JPFACTR;
break;
case 45: 
{ 
DMFACTR_amode = (*NL(JDBACTR_decmode));
 /* line 6605: */
YLFACTR_mode = (*(&(DMFACTR_amode->Mode)));
 /* line 6606: */
KPFACTR = ((*(&(DMFACTR_amode->Modeproc)))==0);
if ( ! KPFACTR )
{ /* line 6607: */
KPFACTR = ((*NL(GGFACTR_type))==1);
}
if ( KPFACTR )
{ 
 /* line 6608: */
DMFACTR_amode = (A68_52 *)A68_NIL;
} 
else
{ 
RNDACTR_adjscope((*(&(NL(NFFACTR_current)->Rd))), (*(&((*NL(KDBACTR_cindic))->Level))), (*(&((*NL(KDBACTR_cindic))->Scope))));
 /* line 6609: */
LPFACTR = !Modedec;
if ( LPFACTR )
{ /* line 6610: */
LPFACTR = ((*(&(DMFACTR_amode->Modeproc)))<=2);
}
if ( LPFACTR )
{ 
A_CALLPROC(NL(PZBACTR_faultp),(165, YLFACTR_mode, 0, (A68_31 *)A68_NIL),(165, YLFACTR_mode, 0, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
 /* line 6612: */
 /* line 6613: */
 /* line 6614: */
 /* line 6615: */
 /* line 6618: */
YLFACTR_mode = ZKAACTR_faultmode;
} 
} 
} 
break;
case 46: 
 /* line 6621: */
DMFACTR_amode = (A68_52 *)A68_NIL;
break;
case 47: 
 /* line 6622: */
if ( ((*NL(GGFACTR_type))==2) )
{ 
MPFACTR.Mode = (*NL(HGFACTR_descno))+=1;
 /* line 6623: */
MPFACTR.Rest = LMFACTR_intstack;
 /* line 6626: */
NPFACTR = A_LOC(A68_54 ) ;
(*NPFACTR) = MPFACTR ;
LMFACTR_intstack = NPFACTR;
} 
break;
case 48: 
OPFACTR = (DMFACTR_amode!=QQAACTR_nilam);
if ( OPFACTR )
{ /* line 6627: */
OPFACTR = ((*NL(GGFACTR_type))!=1);
}
if ( OPFACTR )
{ 
if ( Modedec )
{ 
PPFACTR = A_HEAP(A68_52 );
} 
else
{ 
 /* line 6628: */
PPFACTR = A_LOC(A68_52 );
} 
QPFACTR.Mode = YLFACTR_mode;
QPFACTR.Modeproc = 1;
 /* line 6629: */
 /* line 6630: */
if ( Modedec )
{ 
 /* line 6631: */
RPFACTR = A_HEAP(A68_53 );
} 
else
{ 
RPFACTR = A_LOC(A68_53 );
} 
SPFACTR.Am = DMFACTR_amode;
SPFACTR.Rest = (A68_53 *)A68_NIL;
 /* line 6632: */
(*RPFACTR) = SPFACTR ;
QPFACTR.El = RPFACTR;
 /* line 6633: */
(*PPFACTR) = QPFACTR ;
TPFACTR = PPFACTR;
} 
else
{ 
TPFACTR = (A68_52 *)A68_NIL;
} 
 /* line 6636: */
DMFACTR_amode = TPFACTR;
break;
case 49: 
{ 
UPFACTR = (DMFACTR_amode!=QQAACTR_nilam);
if ( UPFACTR )
{ /* line 6637: */
UPFACTR = ((*NL(GGFACTR_type))!=1);
}
if ( UPFACTR )
{ 
 /* line 6638: */
 /* line 6639: */
if ( Modedec )
{ 
 /* line 6640: */
VPFACTR = A_HEAP(A68_53 );
} 
else
{ 
VPFACTR = A_LOC(A68_53 );
} 
WPFACTR.Am = DMFACTR_amode;
 /* line 6641: */
WPFACTR.Rest = (A68_53 *)A68_NIL;
 /* line 6642: */
(*VPFACTR) = WPFACTR ;
XPFACTR = VPFACTR;
} 
else
{ 
XPFACTR = (A68_53 *)A68_NIL;
} 
EMFACTR_amodelist = XPFACTR;
 /* line 6643: */
YPFACTR.Mode = YLFACTR_mode;
YPFACTR.Fieldno = 0;
YPFACTR.Name = (*NL(PSAACTR_ident));
 /* line 6644: */
YPFACTR.Rest = (A68_58 *)A68_NIL;
 /* line 6647: */
ZPFACTR = A_HEAP(A68_58 ) ;
(*ZPFACTR) = YPFACTR ;
IMFACTR_selist = ZPFACTR;
} 
break;
case 50: 
{ 
AQFACTR = (DMFACTR_amode!=QQAACTR_nilam);
if ( AQFACTR )
{ /* line 6648: */
AQFACTR = ((*NL(GGFACTR_type))!=1);
}
if ( AQFACTR )
{ 
 /* line 6649: */
 /* line 6650: */
if ( Modedec )
{ 
 /* line 6651: */
BQFACTR = A_HEAP(A68_53 );
} 
else
{ 
 /* line 6652: */
BQFACTR = A_LOC(A68_53 );
} 
CQFACTR.Am = DMFACTR_amode;
CQFACTR.Rest = FMFACTR_amodestack;
(*BQFACTR) = CQFACTR ;
FMFACTR_amodestack = BQFACTR;
 /* line 6653: */
 /* line 6654: */
 /* line 6655: */
DQFACTR = 1;
} 
else
{ 
DQFACTR = 0;
} 
VLFACTR_i = DQFACTR;
 /* line 6656: */
EQFACTR.Mode = YLFACTR_mode;
EQFACTR.Fieldno = VLFACTR_i;
EQFACTR.Name = (*NL(PSAACTR_ident));
 /* line 6657: */
EQFACTR.Rest = HMFACTR_selstack;
 /* line 6660: */
FQFACTR = A_HEAP(A68_58 ) ;
(*FQFACTR) = EQFACTR ;
HMFACTR_selstack = FQFACTR;
} 
break;
case 51: 
{ 
JMFACTR_sl = HMFACTR_selstack;
 /* line 6661: */
HMFACTR_selstack = (*(&(HMFACTR_selstack->Rest)));
 /* line 6662: */
GQFACTR = (&(JMFACTR_sl->Rest)) ;
(*GQFACTR) = IMFACTR_selist;
 /* line 6663: */
IMFACTR_selist = JMFACTR_sl;
 /* line 6664: */
 /* line 6665: */
if ( ((*(&(IMFACTR_selist->Fieldno)))!=0) )
{ 
GMFACTR_aml = FMFACTR_amodestack;
 /* line 6666: */
FMFACTR_amodestack = (*(&(FMFACTR_amodestack->Rest)));
 /* line 6667: */
HQFACTR = (&(GMFACTR_aml->Rest)) ;
(*HQFACTR) = EMFACTR_amodelist;
 /* line 6668: */
 /* line 6669: */
 /* line 6670: */
 /* line 6673: */
EMFACTR_amodelist = GMFACTR_aml;
} 
} 
break;
case 52: 
{ 
 /* line 6674: */
if ( !Modedec )
{ 
IQFACTR = ((*NL(MFBACTR_t1))!=32);
if ( IQFACTR )
{IQFACTR = ((*NL(MFBACTR_t1))!=29);
}
if ( IQFACTR )
{ /* line 6675: */
IQFACTR = ((*NL(MFBACTR_t1))!=10);
}
if ( IQFACTR )
{IQFACTR = ((*NL(MFBACTR_t1))!=24);
}
if ( IQFACTR )
{ /* line 6677: */
IQFACTR = ((*NL(MFBACTR_t1))!=62);
}
 /* line 6678: */
if ( IQFACTR )
{ 
 /* line 6679: */
JQFACTR = VNDACTR_genam;
} 
else
{ 
JQFACTR = WNDACTR_decam;
} 
 /* line 6680: */
A_CALLPROC(NL(LODACTR_treatam),(DMFACTR_amode, JQFACTR, (*(&(NL(NFFACTR_current)->Lastid)))),(DMFACTR_amode, JQFACTR, (*(&(NL(NFFACTR_current)->Lastid))),(NL(LODACTR_treatam)).nonlocals));
} 
 /* line 6681: */
 /* line 6682: */
 /* line 6683: */
if ( (DMFACTR_amode!=QQAACTR_nilam) )
{ 
KQFACTR = (*DMFACTR_amode);
} 
else
{ 
KQFACTR.Mode = YLFACTR_mode;
KQFACTR.Modeproc = 0;
 /* line 6684: */
KQFACTR.El = (A68_53 *)A68_NIL;
} 
(*Am) = KQFACTR;
 /* line 6685: */
 /* line 6686: */
 /* line 6689: */
goto ULFACTR_end;
} 
break;
case 53: 
{ 
MQFACTR = (YLFACTR_mode>1);
if ( MQFACTR )
{ /* line 6690: */
MQFACTR = (YLFACTR_mode<=(*NL(VYAACTR_lastmode)));
}
if ( MQFACTR )
{ 
 /* line 6691: */
 /* line 6692: */
NQFACTR = A_CALLPROC(NL(JGCACTR_deflex),(YLFACTR_mode),(YLFACTR_mode,(NL(JGCACTR_deflex)).nonlocals));
} 
else
{ 
NQFACTR = YLFACTR_mode;
} 
LQFACTR.Mode = YLFACTR_mode = NQFACTR;
LQFACTR.Modeproc = 0;
LQFACTR.El = (A68_53 *)A68_NIL;
(*Am) = LQFACTR;
 /* line 6693: */
 /* line 6694: */
 /* line 6697: */
goto ULFACTR_end;
} 
break;
case 54: 
 /* line 6700: */
(*NL(QDBACTR_look)) = 1;
break;
case 55: 
 /* line 6703: */
siglongjmp(NL(LFFACTR_scstart).label,1);
break;
default: 
 /* line 6705: */
 /* line 6707: */
A_CALLPROC(NL(VJBACTR_abort),(207),(207,(NL(VJBACTR_abort)).nonlocals));
break;
} 
}
 /* line 6709: */
ULFACTR_end:
 /* line 6711: */
OQFACTR = YLFACTR_mode;
} 
A_PROC_EXIT(declarer);
return( OQFACTR );
} 
#undef NL

A_STATIC A68_VOID  QQFACTR_lookahead(void *NonLocals)
#define NL(x) (((RQFACTR_lookahead *)NonLocals)->x)
{ 
A68_INT  UQFACTR_oldstind;
A68_BOOL  VQFACTR;  /* optbool result */
A68_INT  WQFACTR;  /* clause result */
A68_133  XQFACTR;  /* collateral clause result */
A68_133 * YQFACTR;  /* YIELD */
A68_INT  ZQFACTR;  /* YIELD */
A68_INT  ARFACTR;  /* clause result */
A_PROC_ENTRY(lookahead);
{ 
UQFACTR_oldstind = (*NL(JFBACTR_stind));
 /* line 6717: */
(*NL(BEBACTR_lkmodeins)) = 0;
 /* line 6719: */
for ( ;; )
{ 
 /* line 6720: */
 /* line 6725: */
switch ( A_CALLPROC(NL(PFBACTR_analyser),(),((NL(PFBACTR_analyser)).nonlocals)) )
{ 
case 1: 
{ 
(*NL(JBBACTR_oldtind)) = (*NL(LSAACTR_tind));
 /* line 6726: */
 /* line 6727: */
 /* line 6730: */
(*NL(MFBACTR_t1)) = A_CALLPROC(NL(LFDACTR_reader),(0),(0,(NL(LFDACTR_reader)).nonlocals));
} 
break;
case 2: 
{ 
(*NL(AEBACTR_lkinserts)) = 1;
 /* line 6731: */
 /* line 6732: */
 /* line 6735: */
goto TQFACTR_end;
} 
break;
case 3: 
{ 
VQFACTR = ((*NL(MFBACTR_t1))<12);
if ( ! VQFACTR )
{ /* line 6736: */
VQFACTR = ((*NL(MFBACTR_t1))==63);
}
 /* line 6737: */
if ( VQFACTR )
{ 
 /* line 6738: */
WQFACTR = 1;
} 
else
{ 
WQFACTR = 0;
} 
(*NL(AEBACTR_lkinserts)) = WQFACTR;
 /* line 6739: */
 /* line 6740: */
 /* line 6743: */
goto TQFACTR_end;
} 
break;
case 4: 
{ 
 /* line 6744: */
XQFACTR.Id = (*NL(PSAACTR_ident));
XQFACTR.Idsize = (*NL(SSAACTR_idsize));
XQFACTR.Idhash = (*NL(TSAACTR_idhash));
XQFACTR.Rest = (A68_133 *)A68_NIL;
YQFACTR = A_HEAP(A68_133 ) ;
(*YQFACTR) = XQFACTR ;
(**NL(ZDBACTR_lkend)) = YQFACTR;
 /* line 6745: */
 /* line 6746: */
 /* line 6749: */
(*NL(ZDBACTR_lkend)) = (&((**NL(ZDBACTR_lkend))->Rest));
} 
break;
case 5: 
{ 
(*NL(FZAACTR_outlevel))+=1;
 /* line 6750: */
A_CALLPROC(NL(QLFACTR_declarer),(A68_FALSE, NL(DEBACTR_lkscam)),(A68_FALSE, NL(DEBACTR_lkscam),(NL(QLFACTR_declarer)).nonlocals));
 /* line 6751: */
(*NL(FZAACTR_outlevel))-=1;
 /* line 6752: */
 /* line 6753: */
 /* line 6756: */
(*NL(CEBACTR_lktype)) = (*NL(GGFACTR_type));
} 
break;
case 6: 
{ 
(*NL(BEBACTR_lkmodeins)) = 44;
 /* line 6757: */
(*NL(AEBACTR_lkinserts)) = 1;
 /* line 6758: */
 /* line 6759: */
 /* line 6762: */
goto TQFACTR_end;
} 
break;
case 7: 
 /* line 6765: */
(*NL(BEBACTR_lkmodeins)) = 91;
break;
case 8: 
{ 
(*NL(ZYAACTR_nolongs))+=10;
 /* line 6766: */
(*NL(AEBACTR_lkinserts)) = 1;
 /* line 6767: */
 /* line 6768: */
 /* line 6771: */
goto TQFACTR_end;
} 
break;
case 9: 
{ 
(*NL(ODBACTR_next)) = 1028;
 /* line 6772: */
(*NL(AEBACTR_lkinserts)) = 0;
 /* line 6773: */
 /* line 6774: */
 /* line 6777: */
goto TQFACTR_end;
} 
break;
default: 
 /* line 6779: */
 /* line 6780: */
A_CALLPROC(NL(VJBACTR_abort),(207),(207,(NL(VJBACTR_abort)).nonlocals));
break;
} 
}
 /* line 6782: */
TQFACTR_end:
ZQFACTR = (*NL(JFBACTR_stind)) = UQFACTR_oldstind ;
(*NL(KFBACTR_crts)) = (*(&A_VINDEX((*NL(HFBACTR_sidstack)),ZQFACTR)));
 /* line 6783: */
 /* line 6784: */
if ( ((*NL(MFBACTR_t1))!=10) )
{ 
(*NL(LSAACTR_tind)) = (*NL(JBBACTR_oldtind));
 /* line 6785: */
if ( ((*NL(ODBACTR_next))!=1028) )
{ 
 /* line 6786: */
(*NL(ODBACTR_next)) = (-1);
} 
} 
else
{ 
 /* line 6787: */
(*NL(ODBACTR_next)) = 1010;
} 
 /* line 6788: */
 /* line 6789: */
if ( ((*NL(MFBACTR_t1))==25) )
{ 
 /* line 6790: */
(*NL(VBBACTR_brind))+=1;
} 
else
{ 
 /* line 6791: */
if ( ((*NL(MFBACTR_t1))==24) )
{ 
 /* line 6792: */
(*NL(VBBACTR_brind))-=1;
} 
} 
 /* line 6793: */
 /* line 6794: */
 /* line 6795: */
if ( ((*NL(AEBACTR_lkinserts))==0) )
{ 
ARFACTR = 71;
} 
else
{ 
if ( ((*NL(BEBACTR_lkmodeins))==0) )
{ 
(*NL(AEBACTR_lkinserts)) = (-1);
} 
 /* line 6796: */
 /* line 6797: */
 /* line 6798: */
ARFACTR = 24;
} 
(*NL(MFBACTR_t1)) = ARFACTR;
} 
A_PROC_EXIT(lookahead);
return;
} 
#undef NL

A_STATIC A68_VOID  CRFACTR_informat(void *NonLocals)
#define NL(x) (((DRFACTR_informat *)NonLocals)->x)
{ 
A68_43  HRFACTR_generator;   /* proc value of non-global proc */
A68_VC  NRFACTR;  /* avoid structure result */
A68_VC  MRFACTR_locfbuff;
A68_INT  ORFACTR_locfind;
A68_INT  PRFACTR_norf;
A68_INT  QRFACTR_locstrings;
A68_INT  RRFACTR_worksp;
A68_INT  SRFACTR_rep;
A68_INT  TRFACTR_bracketlevel;
A68_INT  URFACTR_tt;
A68_INT  VRFACTR_cccount;
A68_124  WRFACTR;  /* collateral clause result */
A68_124 * YRFACTR;  /* YIELD */
A68_124 * XRFACTR_case;
A68_125  ZRFACTR;  /* collateral clause result */
A68_125  ASFACTR_vcase;
A68_124 ** BSFACTR_lastcase;
A68_INT  CSFACTR;  /* YIELD */
A68_CHAR * DSFACTR;  /* YIELD */
A68_150  FSFACTR_outint;   /* proc value of non-global proc */
A68_45  OSFACTR_outcount;   /* proc value of non-global proc */
A68_INT  VSFACTR;  /* clause result */
A68_INT  WSFACTR_i;
A68_INT  XSFACTR;  /* YIELD */
A68_CHAR * YSFACTR;  /* YIELD */
A68_INT  ZSFACTR;  /* YIELD */
A68_CHAR * ATFACTR;  /* YIELD */
A68_INT  BTFACTR;  /* YIELD */
A68_CHAR * CTFACTR;  /* YIELD */
A68_81  DTFACTR;  /* collateral clause result */
A68_67  ETFACTR;  /* collateral clause result */
A68_INT * FTFACTR;  /* YIELD */
A68_67 * GTFACTR;  /* YIELD */
A68_106  HTFACTR;  /* OPERATORS - mode -> union mode */
A68_106  ITFACTR;  /* OPERATORS - mode -> union mode */
A68_INT  JTFACTR;  /* YIELD */
A68_124  KTFACTR;  /* collateral clause result */
A68_125  LTFACTR;  /* avoid structure result */
A68_124 * MTFACTR;  /* YIELD */
A68_BITS * NTFACTR;  /* YIELD */
A68_76  OTFACTR;  /* collateral clause result */
A68_VC  PTFACTR;  /* OPERATORS - trim index */
A68_106  QTFACTR;  /* OPERATORS - mode -> union mode */
A68_INT  RTFACTR;  /* clause result */
A68_78  STFACTR;  /* collateral clause result */
A68_106  TTFACTR;  /* OPERATORS - mode -> union mode */
A68_76  UTFACTR;  /* collateral clause result */
A68_VC  VTFACTR;  /* OPERATORS - trim index */
A68_106  WTFACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(informat);
{ 
A_CLOSURE( HRFACTR_generator, IRFACTR_generator, JRFACTR_generator );
A_CALLPROC(HRFACTR_generator,(A68_TRUE, &NRFACTR),(A68_TRUE, &NRFACTR,(HRFACTR_generator).nonlocals));
MRFACTR_locfbuff = NRFACTR;
 /* line 6803: */
RRFACTR_worksp = 0;
SRFACTR_rep = (-1);
 /* line 6804: */
TRFACTR_bracketlevel = 0;
VRFACTR_cccount = 0;
 /* line 6805: */
 /* line 6806: */
WRFACTR.V.Props = BRAACTR_downbit;
WRFACTR.V.Mode = ELAACTR_int;
WRFACTR.V.Vlist = (A68_124 *)A68_NIL;
WRFACTR.V.Labs = (A68_69 *)A68_NIL;
WRFACTR.Type = XMAACTR_xcase;
WRFACTR.Rest = (A68_124 *)A68_NIL;
YRFACTR = A_LOC(A68_124 ) ;
(*YRFACTR) = WRFACTR ;
XRFACTR_case = YRFACTR;
 /* line 6807: */
ZRFACTR.Props = MQAACTR_z;
ZRFACTR.Mode = (-ELAACTR_int);
ZRFACTR.Vlist = XRFACTR_case;
ZRFACTR.Labs = (A68_69 *)A68_NIL;
ASFACTR_vcase = ZRFACTR;
 /* line 6808: */
BSFACTR_lastcase = (&(XRFACTR_case->Rest));
 /* line 6809: */
(*NL(NSAACTR_find)) = 1;
 /* line 6810: */
CSFACTR = 1 ;
DSFACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),CSFACTR)) ;
(*DSFACTR) = ' ';
 /* line 6811: */
(*NL(IBBACTR_noofstrings)) = 0;
 /* line 6812: */
(*NL(VGFACTR_formatbrind)) = (*NL(VBBACTR_brind));
 /* line 6813: */
(*NL(UGFACTR_formatstind)) = (*NL(JFBACTR_stind));
 /* line 6814: */
A_CALLPROC(NL(Output),(SKAACTR_down, ((*NL(FZAACTR_outlevel))+1)),(SKAACTR_down, ((*NL(FZAACTR_outlevel))+1),(NL(Output)).nonlocals));
 /* line 6815: */
A_CALLPROC(NL(Output),(QKAACTR_up, ((*NL(FZAACTR_outlevel))+1)),(QKAACTR_up, ((*NL(FZAACTR_outlevel))+1),(NL(Output)).nonlocals));
 /* line 6817: */
A_CLOSURE( FSFACTR_outint, GSFACTR_outint, HSFACTR_outint );
(( HSFACTR_outint * ) ( FSFACTR_outint.nonlocals )) -> FSFACTR_outint = FSFACTR_outint;
(( HSFACTR_outint * ) ( FSFACTR_outint.nonlocals )) -> JSAACTR_globfbuff = NL(JSAACTR_globfbuff);
(( HSFACTR_outint * ) ( FSFACTR_outint.nonlocals )) -> NSAACTR_find = NL(NSAACTR_find);
 /* line 6825: */
 /* line 6826: */
A_CLOSURE( OSFACTR_outcount, PSFACTR_outcount, QSFACTR_outcount );
(( QSFACTR_outcount * ) ( OSFACTR_outcount.nonlocals )) -> JSAACTR_globfbuff = NL(JSAACTR_globfbuff);
(( QSFACTR_outcount * ) ( OSFACTR_outcount.nonlocals )) -> NSAACTR_find = NL(NSAACTR_find);
(( QSFACTR_outcount * ) ( OSFACTR_outcount.nonlocals )) -> FSFACTR_outint = FSFACTR_outint;
(( QSFACTR_outcount * ) ( OSFACTR_outcount.nonlocals )) -> VRFACTR_cccount = (&VRFACTR_cccount);
 /* line 6831: */
for ( ;; )
{ 
 /* line 6832: */
 /* line 6833: */
 /* line 6838: */
switch ( A_CALLPROC(NL(PFBACTR_analyser),(),((NL(PFBACTR_analyser)).nonlocals)) )
{ 
case 1: 
{ 
(*NL(MFBACTR_t1)) = A_CALLPROC(NL(LFDACTR_reader),(UDBACTR_formatreader),(UDBACTR_formatreader,(NL(LFDACTR_reader)).nonlocals));
 /* line 6839: */
 /* line 6840: */
 /* line 6843: */
SRFACTR_rep-=1;
} 
break;
case 2: 
{ 
A_CALLPROC(NL(QJBACTR_fault),(136),(136,(NL(QJBACTR_fault)).nonlocals));
 /* line 6845: */
if ( A_CALLPROC(NL(HIFACTR_recovery),(UDBACTR_formatreader),(UDBACTR_formatreader,(NL(HIFACTR_recovery)).nonlocals)) )
{ 
 /* line 6846: */
 /* line 6849: */
goto FRFACTR_exit;
} 
} 
break;
case 3: 
 /* line 6852: */
/*SKIP*/;
break;
case 4: 
{ 
switch ( 2 )
{ 
case 1: 
VSFACTR = 1;
break;
default: 
A_IMP_SKIP ;
break;
} 
WSFACTR_i = VSFACTR;
 /* line 6855: */
/*SKIP*/;
} 
break;
case 5: 
 /* line 6856: */
if ( (SRFACTR_rep==0) )
{ 
 /* line 6857: */
 /* line 6860: */
A_CALLPROC(NL(QJBACTR_fault),(137),(137,(NL(QJBACTR_fault)).nonlocals));
} 
break;
case 6: 
{ 
PRFACTR_norf = CLAACTR_formatmode;
 /* line 6861: */
 /* line 6862: */
 /* line 6865: */
A_CALLPROC(OSFACTR_outcount,(),((OSFACTR_outcount).nonlocals));
} 
break;
case 7: 
{ 
SRFACTR_rep = 0;
 /* line 6866: */
PRFACTR_norf = ELAACTR_int;
 /* line 6867: */
 /* line 6868: */
 /* line 6871: */
A_CALLPROC(OSFACTR_outcount,(),((OSFACTR_outcount).nonlocals));
} 
break;
case 8: 
{ 
PRFACTR_norf = ELAACTR_int;
 /* line 6872: */
 /* line 6874: */
if ( ((*NL(MFBACTR_t1))!=24) )
{ 
 /* line 6875: */
XSFACTR = (*NL(NSAACTR_find))+=1 ;
YSFACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),XSFACTR)) ;
(*YSFACTR) = ',';
} 
 /* line 6876: */
ZSFACTR = (*NL(NSAACTR_find))+=1 ;
ATFACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),ZSFACTR)) ;
(*ATFACTR) = 'N';
 /* line 6877: */
 /* line 6878: */
 /* line 6881: */
A_CALLPROC(OSFACTR_outcount,(),((OSFACTR_outcount).nonlocals));
} 
break;
case 9: 
 /* line 6884: */
BTFACTR = (*NL(NSAACTR_find))+=1 ;
CTFACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),BTFACTR)) ;
(*CTFACTR) = ')';
break;
case 10: 
{ 
A_VASSIGN2(NL(JSAACTR_globfbuff),MRFACTR_locfbuff,A68_CHAR );
 /* line 6885: */
ORFACTR_locfind = (*NL(NSAACTR_find));
 /* line 6886: */
QRFACTR_locstrings = (*NL(IBBACTR_noofstrings));
 /* line 6887: */
URFACTR_tt = (*NL(LSAACTR_tind));
 /* line 6888: */
(*NL(FZAACTR_outlevel))+=4;
 /* line 6889: */
 /* line 6890: */
if ( ((*NL(WGFACTR_formatcaseno))==0) )
{ 
 /* line 6891: */
DTFACTR.Type = YOAACTR_xfdec;
 /* line 6892: */
ETFACTR.Name = NL(BZAACTR_nullid);
 /* line 6893: */
FTFACTR = (&(NL(NFFACTR_current)->Lastid)) ;
ETFACTR.Decno = (*FTFACTR)+=1;
ETFACTR.Level = 0;
ETFACTR.Mode = ELAACTR_int;
 /* line 6894: */
ETFACTR.Scope = 0;
 /* line 6895: */
ETFACTR.Rest = (A68_67 *)A68_NIL;
GTFACTR = A_LOC(A68_67 ) ;
(*GTFACTR) = ETFACTR ;
DTFACTR.Iddec = GTFACTR;
 /* line 6896: */
 /* line 6897: */
A_CALLPROC(NL(Output),(A_UNITE(HTFACTR,mode12,12,DTFACTR), ((*NL(FZAACTR_outlevel))-1)),(A_UNITE(HTFACTR,mode12,12,DTFACTR), ((*NL(FZAACTR_outlevel))-1),(NL(Output)).nonlocals));
 /* line 6898: */
JTFACTR = (*(&(NL(NFFACTR_current)->Lastid))) ;
A_CALLPROC(NL(Output),(A_UNITE(ITFACTR,mode3,3,JTFACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(ITFACTR,mode3,3,JTFACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 6899: */
A_CALLPROC(NL(Output),(QKAACTR_up, (*NL(FZAACTR_outlevel))),(QKAACTR_up, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 6900: */
 /* line 6901: */
(*NL(GBBACTR_lastidchanged)) = A68_TRUE;
} 
 /* line 6902: */
 /* line 6903: */
 /* line 6904: */
A_CALLPROC((*NL(LGFACTR_uc1)),(PRFACTR_norf, &LTFACTR),(PRFACTR_norf, &LTFACTR,((*NL(LGFACTR_uc1))).nonlocals));
KTFACTR.V = LTFACTR;
 /* line 6905: */
 /* line 6906: */
if ( ((*NL(WGFACTR_formatcaseno))==0) )
{ 
 /* line 6907: */
KTFACTR.Type = BNAACTR_xin;
} 
else
{ 
 /* line 6909: */
KTFACTR.Type = DNAACTR_xcomma;
} 
KTFACTR.Rest = (A68_124 *)A68_NIL;
MTFACTR = A_LOC(A68_124 ) ;
(*MTFACTR) = KTFACTR ;
(*BSFACTR_lastcase) = MTFACTR;
 /* line 6910: */
A_CALLPROC(NL(Output),(QKAACTR_up, (*NL(FZAACTR_outlevel))),(QKAACTR_up, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 6911: */
NTFACTR = (&((&((*BSFACTR_lastcase)->V))->Props)) ;
(*NTFACTR) = (A68_BITS )((*(&((&((*BSFACTR_lastcase)->V))->Props)))|BRAACTR_downbit);
 /* line 6912: */
BSFACTR_lastcase = (&((*BSFACTR_lastcase)->Rest));
 /* line 6913: */
(*NL(WGFACTR_formatcaseno))+=1;
 /* line 6914: */
(*NL(FZAACTR_outlevel))-=4;
 /* line 6915: */
(*NL(IBBACTR_noofstrings)) = QRFACTR_locstrings;
 /* line 6916: */
A_VASSIGN2(MRFACTR_locfbuff,NL(JSAACTR_globfbuff),A68_CHAR );
 /* line 6917: */
 /* line 6918: */
if ( ((*NL(LSAACTR_tind))<URFACTR_tt) )
{ 
OTFACTR.Nochars = (-ORFACTR_locfind);
 /* line 6919: */
OTFACTR.Base = 0;
 /* line 6920: */
OTFACTR.Chars = A_VTRIM(PTFACTR,(NL(JSAACTR_globfbuff)),A_VTSCRIPT(&(PTFACTR.upb),(NL(JSAACTR_globfbuff)).upb,1,ORFACTR_locfind));
A_CALLPROC(NL(Output),(A_UNITE(QTFACTR,mode35,35,OTFACTR), ((*NL(FZAACTR_outlevel))+1)),(A_UNITE(QTFACTR,mode35,35,OTFACTR), ((*NL(FZAACTR_outlevel))+1),(NL(Output)).nonlocals));
 /* line 6921: */
(*NL(IBBACTR_noofstrings))+=ORFACTR_locfind;
 /* line 6922: */
 /* line 6923: */
 /* line 6924: */
RTFACTR = 0;
} 
else
{ 
 /* line 6925: */
RTFACTR = ORFACTR_locfind;
} 
 /* line 6928: */
(*NL(NSAACTR_find)) = RTFACTR;
} 
break;
case 11: 
{ 
 /* line 6929: */
if ( ((*NL(WGFACTR_formatcaseno))!=0) )
{ 
(*NL(FZAACTR_outlevel))+=3;
 /* line 6930: */
A_CALLPROC(NL(RYCACTR_strong),((&ASFACTR_vcase), (*NL(OYAACTR_formatunion)), A68_TRUE),((&ASFACTR_vcase), (*NL(OYAACTR_formatunion)), A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 6931: */
 /* line 6932: */
(*NL(FZAACTR_outlevel))-=3;
} 
 /* line 6933: */
A_CALLPROC(NL(Output),(SKAACTR_down, (*NL(FZAACTR_outlevel))),(SKAACTR_down, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 6934: */
STFACTR.Nochars = ((*NL(IBBACTR_noofstrings))+(*NL(NSAACTR_find)));
STFACTR.Nocases = (*NL(WGFACTR_formatcaseno));
STFACTR.W = RRFACTR_worksp;
A_CALLPROC(NL(Output),(A_UNITE(TTFACTR,mode8,8,STFACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(TTFACTR,mode8,8,STFACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 6935: */
A_CALLPROC(NL(Output),(SKAACTR_down, (*NL(FZAACTR_outlevel))),(SKAACTR_down, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 6936: */
UTFACTR.Nochars = (*NL(NSAACTR_find));
UTFACTR.Base = 0;
UTFACTR.Chars = A_VTRIM(VTFACTR,(NL(JSAACTR_globfbuff)),A_VTSCRIPT(&(VTFACTR.upb),(NL(JSAACTR_globfbuff)).upb,1,(*NL(NSAACTR_find))));
A_CALLPROC(NL(Output),(A_UNITE(WTFACTR,mode35,35,UTFACTR), ((*NL(FZAACTR_outlevel))+1)),(A_UNITE(WTFACTR,mode35,35,UTFACTR), ((*NL(FZAACTR_outlevel))+1),(NL(Output)).nonlocals));
 /* line 6937: */
A_CALLPROC(NL(Output),(QKAACTR_up, ((*NL(FZAACTR_outlevel))+1)),(QKAACTR_up, ((*NL(FZAACTR_outlevel))+1),(NL(Output)).nonlocals));
 /* line 6938: */
 /* line 6939: */
 /* line 6942: */
goto FRFACTR_exit;
} 
break;
case 12: 
 /* line 6945: */
SRFACTR_rep = 0;
break;
case 13: 
 /* line 6946: */
if ( ((TRFACTR_bracketlevel+=1)>RRFACTR_worksp) )
{ 
 /* line 6947: */
 /* line 6950: */
RRFACTR_worksp+=1;
} 
break;
case 14: 
 /* line 6953: */
TRFACTR_bracketlevel-=1;
break;
default: 
 /* line 6955: */
 /* line 6956: */
A_CALLPROC(NL(VJBACTR_abort),(207),(207,(NL(VJBACTR_abort)).nonlocals));
break;
} 
}
 /* line 6958: */
FRFACTR_exit:
 /* line 6959: */
/*SKIP*/;
} 
A_PROC_EXIT(informat);
return;
} 
#undef NL

A_STATIC A68_VOID  ZTFACTR_uc(A68_INT  Mode, A68_125  *ReturnedValue, void *NonLocals)
#define NL(x) (((AUFACTR_uc *)NonLocals)->x)
{ 
A68_52 * DUFACTR_am;
A68_124 * EUFACTR_vss;
A68_67 * FUFACTR_id;
A68_129 * GUFACTR_opstack;
A68_BOOL  HUFACTR_exitinrange;
A68_BOOL  IUFACTR_bangdi;
A68_124  JUFACTR_vlist;
A68_125 * KUFACTR_v;
A68_124 * LUFACTR_vl;
A68_124 * MUFACTR_vl1;
A68_INT  NUFACTR_m;
A68_INT  OUFACTR_n;
A68_INT  PUFACTR_next;
A68_243 * QUFACTR_codestack;
A68_242 * RUFACTR_proclist;
A68_130 * SUFACTR_selstack;
A68_INT  TUFACTR_i;
A68_INT  UUFACTR_j;
A68_INT  VUFACTR_qref;
A68_131 * WUFACTR_indstack;
A68_75  XUFACTR_xal;
A68_INT  YUFACTR;  /* clause result */
A68_INT  ZUFACTR_i;
A68_BOOL  AVFACTR;  /* optbool result */
A68_BITS * BVFACTR;  /* YIELD */
A68_BITS * CVFACTR;  /* YIELD */
A68_BITS * DVFACTR;  /* YIELD */
A68_BOOL  EVFACTR;  /* optbool result */
A68_BITS * FVFACTR;  /* YIELD */
A68_124  GVFACTR;  /* avoid structure result */
A68_124  HVFACTR;  /* collateral clause result */
A68_124 * IVFACTR;  /* YIELD */
A68_124  JVFACTR;  /* collateral clause result */
A68_124  KVFACTR;  /* avoid structure result */
A68_124 * LVFACTR;  /* YIELD */
A68_124  MVFACTR;  /* collateral clause result */
A68_124  NVFACTR;  /* avoid structure result */
A68_124 * OVFACTR;  /* YIELD */
A68_124  PVFACTR;  /* collateral clause result */
A68_124  QVFACTR;  /* avoid structure result */
A68_124 * RVFACTR;  /* YIELD */
A68_124  SVFACTR;  /* avoid structure result */
A68_125  TVFACTR;  /* collateral clause result */
A68_124 * UVFACTR;  /* YIELD */
A68_BOOL  VVFACTR;  /* optbool result */
A68_BOOL  WVFACTR;  /* optbool result */
A68_BITS  XVFACTR;  /* ADICOPS - >= */
A68_125  YVFACTR;  /* collateral clause result */
A68_124 * ZVFACTR;  /* YIELD */
A68_INT  AWFACTR;  /* YIELD */
A68_124  BWFACTR;  /* collateral clause result */
A68_124 * CWFACTR;  /* YIELD */
A68_124  DWFACTR;  /* collateral clause result */
A68_124 * EWFACTR;  /* YIELD */
A68_66  FWFACTR;  /* united object - for case conformity */
A68_56 * GWFACTR_u;
A68_INT  HWFACTR;  /* clause result */
A68_BOOL  IWFACTR;  /* optbool result */
A68_BOOL  JWFACTR;  /* optbool result */
A68_INT * KWFACTR;  /* YIELD */
A68_124  LWFACTR;  /* collateral clause result */
A68_124 * MWFACTR;  /* YIELD */
A68_124 ** NWFACTR;  /* YIELD */
A68_124 ** OWFACTR;  /* YIELD */
A68_INT  PWFACTR;  /* YIELD */
A68_INT  QWFACTR;  /* clause result */
A68_INT * RWFACTR;  /* YIELD */
A68_INT  SWFACTR;  /* YIELD */
A68_INT  TWFACTR;  /* clause result */
A68_124  UWFACTR;  /* collateral clause result */
A68_124 * VWFACTR;  /* YIELD */
A68_124  WWFACTR;  /* collateral clause result */
A68_124 * XWFACTR;  /* YIELD */
A68_124 ** YWFACTR;  /* YIELD */
A68_124 ** ZWFACTR;  /* YIELD */
A68_124  AXFACTR;  /* collateral clause result */
A68_124 * BXFACTR;  /* YIELD */
A68_BOOL  CXFACTR;  /* optbool result */
A68_124  DXFACTR;  /* collateral clause result */
A68_124 * EXFACTR;  /* YIELD */
A68_BOOL  FXFACTR;  /* optbool result */
A68_124  GXFACTR;  /* collateral clause result */
A68_124 * HXFACTR;  /* YIELD */
A68_124 ** IXFACTR;  /* YIELD */
A68_124  JXFACTR;  /* collateral clause result */
A68_124 * KXFACTR;  /* YIELD */
A68_BOOL  LXFACTR;  /* optbool result */
A68_INT * MXFACTR;  /* YIELD */
A68_125  NXFACTR;  /* collateral clause result */
A68_124  OXFACTR;  /* collateral clause result */
A68_124 * PXFACTR;  /* YIELD */
A68_BOOL  QXFACTR;  /* optbool result */
A68_124  RXFACTR;  /* collateral clause result */
A68_124 * SXFACTR;  /* YIELD */
A68_BOOL  TXFACTR;  /* optbool result */
A68_124  UXFACTR;  /* collateral clause result */
A68_124 * VXFACTR;  /* YIELD */
A68_124  WXFACTR;  /* collateral clause result */
A68_124 * XXFACTR;  /* YIELD */
A68_BOOL  YXFACTR;  /* optbool result */
A68_BITS * ZXFACTR;  /* YIELD */
A68_106  AYFACTR;  /* OPERATORS - mode -> union mode */
A68_INT  BYFACTR;  /* YIELD */
A68_BOOL  CYFACTR;  /* optbool result */
A68_BOOL  DYFACTR;  /* optbool result */
A68_124  EYFACTR;  /* collateral clause result */
A68_124 * FYFACTR;  /* YIELD */
A68_BITS * GYFACTR;  /* YIELD */
A68_72  HYFACTR;  /* collateral clause result */
A68_106  IYFACTR;  /* OPERATORS - mode -> union mode */
A68_106  JYFACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  KYFACTR;  /* YIELD */
A68_85  LYFACTR;  /* collateral clause result */
A68_106  MYFACTR;  /* OPERATORS - mode -> union mode */
A68_85  NYFACTR;  /* collateral clause result */
A68_106  OYFACTR;  /* OPERATORS - mode -> union mode */
A68_85  PYFACTR;  /* collateral clause result */
A68_106  QYFACTR;  /* OPERATORS - mode -> union mode */
A68_124  RYFACTR;  /* collateral clause result */
A68_124 * SYFACTR;  /* YIELD */
A68_BOOL  TYFACTR;  /* optbool result */
A68_VC  UYFACTR;  /* OPERATORS - istruct -> vector */
A68_31  VYFACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WYFACTR;  /* OPERATORS - istruct -> vector */
A68_69  XYFACTR;  /* collateral clause result */
A68_69 * YYFACTR;  /* YIELD */
A68_69 ** ZYFACTR;  /* YIELD */
A68_106  AZFACTR;  /* OPERATORS - mode -> union mode */
A68_124  BZFACTR;  /* collateral clause result */
A68_124 * CZFACTR;  /* YIELD */
A68_66  DZFACTR;  /* united object - for case conformity */
A68_57 * EZFACTR_pp;
A68_242  FZFACTR;  /* collateral clause result */
A68_242 * GZFACTR;  /* YIELD */
A68_242  HZFACTR;  /* collateral clause result */
A68_242 * IZFACTR;  /* YIELD */
A68_54 ** JZFACTR;  /* YIELD */
A68_INT * KZFACTR;  /* YIELD */
A68_INT * LZFACTR;  /* YIELD */
A68_85  MZFACTR;  /* collateral clause result */
A68_106  NZFACTR;  /* OPERATORS - mode -> union mode */
A68_85  OZFACTR;  /* collateral clause result */
A68_106  PZFACTR;  /* OPERATORS - mode -> union mode */
A68_INT  QZFACTR;  /* ADICOPS - ABS INT */
A68_BITS * RZFACTR;  /* YIELD */
A68_BOOL  SZFACTR;  /* optbool result */
A68_125  TZFACTR;  /* collateral clause result */
A68_125 * UZFACTR;  /* YIELD */
A68_243  VZFACTR;  /* collateral clause result */
A68_243 * WZFACTR;  /* YIELD */
A68_INT * XZFACTR;  /* YIELD */
A68_73  YZFACTR;  /* collateral clause result */
A68_106  ZZFACTR;  /* OPERATORS - mode -> union mode */
A68_124  AAGACTR;  /* collateral clause result */
A68_124 * BAGACTR;  /* YIELD */
A68_124  CAGACTR;  /* collateral clause result */
A68_124 * DAGACTR;  /* YIELD */
A68_106  EAGACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  FAGACTR;  /* YIELD */
A68_106  GAGACTR;  /* OPERATORS - mode -> union mode */
A68_106  HAGACTR;  /* OPERATORS - mode -> union mode */
A68_106  IAGACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JAGACTR;  /* OPERATORS - trim index */
A68_VC  KAGACTR;  /* OPERATORS - trim index */
A68_VC  LAGACTR;  /* YIELD */
A68_VC  MAGACTR;  /* OPERATORS - assign op */
A68_76  NAGACTR;  /* collateral clause result */
A68_VC  OAGACTR;  /* OPERATORS - trim index */
A68_106  PAGACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QAGACTR;  /* OPERATORS - trim index */
A68_VC  RAGACTR;  /* OPERATORS - trim index */
A68_VC  SAGACTR;  /* YIELD */
A68_VC  TAGACTR;  /* OPERATORS - assign op */
A68_76  UAGACTR;  /* collateral clause result */
A68_VC  VAGACTR;  /* OPERATORS - trim index */
A68_106  WAGACTR;  /* OPERATORS - mode -> union mode */
A68_INT  XAGACTR;  /* clause result */
A68_77  YAGACTR_xst;
A68_INT * ZAGACTR;  /* YIELD */
A68_106  ABGACTR;  /* OPERATORS - mode -> union mode */
A68_INT  BBGACTR;  /* YIELD */
A68_CHAR * CBGACTR;  /* YIELD */
A68_INT  DBGACTR;  /* YIELD */
A68_CHAR * EBGACTR;  /* YIELD */
A68_BOOL  FBGACTR;  /* optbool result */
A68_CHAR * GBGACTR;  /* YIELD */
A68_INT  HBGACTR;  /* clause result */
A68_74  IBGACTR;  /* collateral clause result */
A68_VC  JBGACTR;  /* OPERATORS - trim index */
A68_106  KBGACTR;  /* OPERATORS - mode -> union mode */
A68_124  LBGACTR;  /* collateral clause result */
A68_124 * MBGACTR;  /* YIELD */
A68_INT * NBGACTR;  /* YIELD */
A68_106  OBGACTR;  /* OPERATORS - mode -> union mode */
A68_106  PBGACTR;  /* OPERATORS - mode -> union mode */
A68_129  QBGACTR;  /* collateral clause result */
A68_129 * RBGACTR;  /* YIELD */
A68_129  SBGACTR;  /* collateral clause result */
A68_129 * TBGACTR;  /* YIELD */
A68_INT  ACGACTR_l;
A68_INT  BCGACTR_r;
A68_INT  CCGACTR_l1;
A68_INT  DCGACTR_r1;
A68_INT  ECGACTR_op;
A68_INT  FCGACTR_found;
A68_INT  GCGACTR_ans;
A68_108 * HCGACTR_inst;
A68_108 * ICGACTR_inst1;
A68_BOOL  JCGACTR_di;
A68_BOOL  KCGACTR_libop;
A68_INT  LCGACTR_usedlib;
A68_INT  MCGACTR;  /* clause result */
A68_BOOL  NCGACTR;  /* optbool result */
A68_BOOL  SCGACTR;  /* optbool result */
A68_BOOL  TCGACTR;  /* optbool result */
A68_BOOL  UCGACTR;  /* optbool result */
A68_BOOL  VCGACTR;  /* optbool result */
A68_INT  WCGACTR;  /* clause result */
A68_BOOL  XCGACTR;  /* optbool result */
A68_BOOL  YCGACTR;  /* optbool result */
A68_INT  ZCGACTR;  /* clause result */
A68_BOOL  ADGACTR;  /* optbool result */
A68_INT  EDGACTR;  /* YIELD */
A68_110 * DDGACTR_ri;
A68_VC  FDGACTR;  /* OPERATORS - istruct -> vector */
A68_31  GDGACTR;  /* OPERATORS - istruct -> vector */
A68_VC  HDGACTR;  /* OPERATORS - istruct -> vector */
A68_31  IDGACTR;  /* OPERATORS - istruct -> vector */
A68_111  JDGACTR;  /* united object - for case conformity */
A68_109 * KDGACTR_op;
A68_VC  LDGACTR;  /* OPERATORS - istruct -> vector */
A68_31 * MDGACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NDGACTR;  /* OPERATORS - simple index */
A68_INT  ODGACTR;  /* YIELD */
A68_INT  PDGACTR;  /* YIELD */
A68_BOOL  QDGACTR;  /* optbool result */
A68_INT  RDGACTR;  /* YIELD */
A68_106  SDGACTR;  /* OPERATORS - mode -> union mode */
A68_106  TDGACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  UDGACTR;  /* optbool result */
A68_106  VDGACTR;  /* OPERATORS - mode -> union mode */
A68_INT  WDGACTR;  /* ADICOPS - ABS INT */
A68_BITS * XDGACTR;  /* YIELD */
A68_85  YDGACTR;  /* collateral clause result */
A68_106  ZDGACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  AEGACTR;  /* optbool result */
A68_85  BEGACTR;  /* collateral clause result */
A68_106  CEGACTR;  /* OPERATORS - mode -> union mode */
A68_106  DEGACTR;  /* OPERATORS - mode -> union mode */
A68_85  EEGACTR;  /* collateral clause result */
A68_106  FEGACTR;  /* OPERATORS - mode -> union mode */
A68_125  GEGACTR;  /* collateral clause result */
A68_125 * HEGACTR;  /* YIELD */
A68_INT * IEGACTR;  /* YIELD */
A68_BITS * JEGACTR;  /* YIELD */
A68_INT * KEGACTR;  /* YIELD */
A68_66  NEGACTR;  /* united object - for case conformity */
A68_55 * OEGACTR_p;
A68_INT * PEGACTR;  /* YIELD */
A68_INT  QEGACTR;  /* ADICOPS - ABS INT */
A68_106  REGACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * SEGACTR;  /* YIELD */
A68_130  TEGACTR;  /* collateral clause result */
A68_130 * UEGACTR;  /* YIELD */
A68_66  VEGACTR;  /* united object - for case conformity */
A68_62 * WEGACTR_a;
A68_INT  XEGACTR;  /* to part of loop */
A68_INT  YEGACTR;  /* loop control */
A68_66  ZEGACTR;  /* united object - for case conformity */
A68_62 * AFGACTR_a1;
A68_66  BFGACTR;  /* united object - for case conformity */
A68_59 * CFGACTR_s;
A68_58 * DFGACTR_sels;
A68_BOOL  EFGACTR_found;
A68_INT  FFGACTR_j;
A68_BOOL  GFGACTR;  /* optbool result */
A68_VC  HFGACTR;  /* OPERATORS - istruct -> vector */
A68_31  IFGACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JFGACTR;  /* OPERATORS - istruct -> vector */
A68_31  KFGACTR;  /* OPERATORS - istruct -> vector */
A68_INT  LFGACTR_nods;
A68_INT  MFGACTR;  /* to part of loop */
A68_85  NFGACTR;  /* collateral clause result */
A68_106  OFGACTR;  /* OPERATORS - mode -> union mode */
A68_125  PFGACTR;  /* collateral clause result */
A68_125 * QFGACTR;  /* YIELD */
A68_INT * RFGACTR;  /* YIELD */
A68_BITS * SFGACTR;  /* YIELD */
A68_BITS * TFGACTR;  /* YIELD */
A68_BITS * UFGACTR;  /* YIELD */
A68_BOOL * VFGACTR;  /* YIELD */
A68_BITS * WFGACTR;  /* YIELD */
A68_INT * XFGACTR;  /* YIELD */
A68_BITS  YFGACTR_bi;
A68_BITS  ZFGACTR;  /* ADICOPS - >= */
A68_BITS  AGGACTR;  /* ADICOPS - >= */
A68_85  BGGACTR;  /* collateral clause result */
A68_106  CGGACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * DGGACTR;  /* YIELD */
A68_131  EGGACTR;  /* collateral clause result */
A68_131 * FGGACTR;  /* YIELD */
A68_INT  GGGACTR;  /* YIELD */
A68_66  HGGACTR;  /* united object - for case conformity */
A68_62 * IGGACTR_a;
A68_BOOL * JGGACTR;  /* YIELD */
A68_61 * KGGACTR_v1;
A68_60 * LGGACTR_is;
A68_64 * MGGACTR_rs;
A68_INT * NGGACTR;  /* YIELD */
A68_106  OGGACTR;  /* clause result */
A68_106  PGGACTR;  /* OPERATORS - mode -> union mode */
A68_106  QGGACTR;  /* OPERATORS - mode -> union mode */
A68_66  RGGACTR;  /* united object - for case conformity */
A68_62 * SGGACTR_a;
A68_BOOL  TGGACTR;  /* optbool result */
A68_INT  UGGACTR;  /* to part of loop */
A68_INT  VGGACTR;  /* loop control */
A68_66  WGGACTR;  /* united object - for case conformity */
A68_62 * XGGACTR_a1;
A68_61 * YGGACTR_v1;
A68_BOOL  ZGGACTR;  /* optbool result */
A68_INT  AHGACTR;  /* clause result */
A68_64 * BHGACTR_rs;
A68_BOOL  CHGACTR;  /* optbool result */
A68_85  DHGACTR;  /* collateral clause result */
A68_106  EHGACTR;  /* OPERATORS - mode -> union mode */
A68_125  FHGACTR;  /* collateral clause result */
A68_125 * GHGACTR;  /* YIELD */
A68_52 * HHGACTR;  /* YIELD */
A68_INT * IHGACTR;  /* YIELD */
A68_106  JHGACTR;  /* OPERATORS - mode -> union mode */
A68_INT * KHGACTR;  /* YIELD */
A68_106  LHGACTR;  /* OPERATORS - mode -> union mode */
A68_125  MHGACTR;  /* clause result */
A_PROC_ENTRY(uc);
 /* line 6966: */
{ 
DUFACTR_am = (A68_52 *)A68_NIL;
 /* line 6967: */
 /* line 6968: */
 /* line 6969: */
 /* line 6970: */
 /* line 6971: */
 /* line 6972: */
KUFACTR_v = (&((&JUFACTR_vlist)->V));
 /* line 6973: */
 /* line 6974: */
PUFACTR_next = (-1);
 /* line 6976: */
 /* line 6981: */
 /* line 6983: */
QUFACTR_codestack = (A68_243 *)A68_NIL;
 /* line 6984: */
 /* line 6985: */
 /* line 6986: */
 /* line 6987: */
 /* line 6988: */
 /* line 6990: */
for ( ;; )
{ 
 /* line 6994: */
 /* line 6997: */
switch ( A_CALLPROC(NL(PFBACTR_analyser),(),((NL(PFBACTR_analyser)).nonlocals)) )
{ 
case 1: 
 /* line 6998: */
if ( (PUFACTR_next>=0) )
{ 
(*NL(MFBACTR_t1)) = PUFACTR_next;
 /* line 6999: */
 /* line 7000: */
PUFACTR_next = (-1);
} 
else
{ 
 /* line 7001: */
 /* line 7004: */
(*NL(MFBACTR_t1)) = A_CALLPROC(NL(LFDACTR_reader),(SDBACTR_ucreader),(SDBACTR_ucreader,(NL(LFDACTR_reader)).nonlocals));
} 
break;
case 2: 
{ 
A_CALLPROC(NL(QJBACTR_fault),(138),(138,(NL(QJBACTR_fault)).nonlocals));
 /* line 7006: */
 /* line 7007: */
 /* line 7010: */
A_CALLPROC(NL(HIFACTR_recovery),(SDBACTR_ucreader),(SDBACTR_ucreader,(NL(HIFACTR_recovery)).nonlocals));
} 
break;
case 3: 
 /* line 7013: */
/*SKIP*/;
break;
case 4: 
{ 
switch ( 2 )
{ 
case 1: 
YUFACTR = 1;
break;
default: 
A_IMP_SKIP ;
break;
} 
ZUFACTR_i = YUFACTR;
 /* line 7016: */
/*SKIP*/;
} 
break;
case 5: 
{ 
DUFACTR_am = A_LOC(A68_52 );
 /* line 7017: */
 /* line 7018: */
 /* line 7021: */
A_CALLPROC(NL(QLFACTR_declarer),(A68_FALSE, DUFACTR_am),(A68_FALSE, DUFACTR_am,(NL(QLFACTR_declarer)).nonlocals));
} 
break;
case 6: 
 /* line 7024: */
A_CALLPROC(NL(BRFACTR_informat),(),((NL(BRFACTR_informat)).nonlocals));
break;
case 7: 
{ 
(*NL(OGFACTR_scam)) = (*DUFACTR_am);
 /* line 7025: */
(*NL(GHFACTR_firstaidec)) = A68_TRUE;
 /* line 7026: */
 /* line 7027: */
 /* line 7030: */
siglongjmp(NL(LFFACTR_scstart).label,1);
} 
break;
case 8: 
{ 
(*NL(GHFACTR_firstaidec)) = A68_TRUE;
 /* line 7031: */
 /* line 7032: */
 /* line 7035: */
siglongjmp(NL(LFFACTR_scstart).label,1);
} 
break;
case 9: 
{ 
AVFACTR = ((*NL(MFBACTR_t1))==11);
if ( ! AVFACTR )
{AVFACTR = ((*NL(MFBACTR_t1))==45);
}
if ( ! AVFACTR )
{ /* line 7037: */
AVFACTR = ((*NL(MFBACTR_t1))==13);
}
if ( AVFACTR )
{ 
 /* line 7038: */
A_CALLPROC(NL(RYCACTR_strong),((&(EUFACTR_vss->V)), YKAACTR_voidmode, A68_TRUE),((&(EUFACTR_vss->V)), YKAACTR_voidmode, A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
} 
else
{ 
 /* line 7039: */
A_CALLPROC(NL(NYBACTR_heapvalue),((&(EUFACTR_vss->V))),((&(EUFACTR_vss->V)),(NL(NYBACTR_heapvalue)).nonlocals));
} 
 /* line 7041: */
 /* line 7042: */
if ( ((*NL(MFBACTR_t1))==11) )
{ 
 /* line 7043: */
BVFACTR = (&(NL(NFFACTR_current)->Props)) ;
(*BVFACTR) = (A68_BITS )((*(&(NL(NFFACTR_current)->Props)))|(*(&(NL(NFFACTR_current)->Dybits))));
} 
else
{ 
 /* line 7044: */
if ( ((*(&(NL(NFFACTR_current)->Dybits)))!=MQAACTR_z) )
{ 
CVFACTR = (&(NL(NFFACTR_current)->Props)) ;
(*CVFACTR) = (A68_BITS )((*(&(NL(NFFACTR_current)->Props)))|ZLAACTR_dontpullbit);
 /* line 7045: */
 /* line 7046: */
DVFACTR = (&(NL(External)->Dybits)) ;
(*DVFACTR) = (A68_BITS )((*(&(NL(External)->Dybits)))|(*(&(NL(NFFACTR_current)->Dybits))));
} 
} 
 /* line 7047: */
(*KUFACTR_v) = (*(&(EUFACTR_vss->V)));
 /* line 7048: */
 /* line 7049: */
 /* line 7052: */
goto CUFACTR_exituc;
} 
break;
case 10: 
 /* line 7053: */
EVFACTR = ((MUFACTR_vl1 = (*(&((&(EUFACTR_vss->V))->Vlist))))!=UQAACTR_nilvl);
if ( EVFACTR )
{ /* line 7054: */
EVFACTR = ((*(&(MUFACTR_vl1->Type)))!=NNAACTR_xcoll);
}
if ( EVFACTR )
{ 
 /* line 7055: */
 /* line 7058: */
FVFACTR = (&((*(&(NL(NFFACTR_current)->Rd)))->Props)) ;
(*FVFACTR) = (A68_BITS )((*(&((*(&(NL(NFFACTR_current)->Rd)))->Props)))|LLAACTR_ccbit);
} 
break;
case 11: 
{ 
A_CALLPROC(NL(RYCACTR_strong),((&(EUFACTR_vss->V)), Mode, A68_TRUE),((&(EUFACTR_vss->V)), Mode, A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 7059: */
(*KUFACTR_v) = (*(&(EUFACTR_vss->V)));
 /* line 7060: */
 /* line 7061: */
 /* line 7064: */
goto CUFACTR_exituc;
} 
break;
case 12: 
 /* line 7067: */
goto CUFACTR_exituc;
break;
case 13: 
{ 
A_CALLPROC(NL(GFFACTR_range),(NL(NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &GVFACTR),(NL(NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &GVFACTR,(NL(GFFACTR_range)).nonlocals));
GVFACTR;
 /* line 7068: */
HVFACTR.V.Props = MQAACTR_z;
HVFACTR.V.Mode = YKAACTR_voidmode;
HVFACTR.V.Vlist = (A68_124 *)A68_NIL;
HVFACTR.V.Labs = (A68_69 *)A68_NIL;
HVFACTR.Type = 0;
 /* line 7069: */
HVFACTR.Rest = EUFACTR_vss;
 /* line 7072: */
IVFACTR = A_LOC(A68_124 ) ;
(*IVFACTR) = HVFACTR ;
EUFACTR_vss = IVFACTR;
} 
break;
case 14: 
A_CALLPROC(NL(GFFACTR_range),(NL(NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &KVFACTR),(NL(NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &KVFACTR,(NL(GFFACTR_range)).nonlocals));
JVFACTR.V = KVFACTR.V;
JVFACTR.Type = 0;
JVFACTR.Rest = EUFACTR_vss;
 /* line 7075: */
LVFACTR = A_LOC(A68_124 ) ;
(*LVFACTR) = JVFACTR ;
EUFACTR_vss = LVFACTR;
break;
case 15: 
{ 
 /* line 7076: */
if ( ((*NL(GGFACTR_type))==2) )
{ 
 /* line 7078: */
A_CALLPROC(NL(QJBACTR_fault),(139),(139,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 7079: */
(*NL(EZAACTR_rdmode)) = A_CALLPROC(NL(JGCACTR_deflex),((*(&(DUFACTR_am->Mode)))),((*(&(DUFACTR_am->Mode))),(NL(JGCACTR_deflex)).nonlocals));
 /* line 7080: */
A_CALLPROC(NL(GFFACTR_range),(NL(NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &NVFACTR),(NL(NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &NVFACTR,(NL(GFFACTR_range)).nonlocals));
MVFACTR.V = NVFACTR.V;
MVFACTR.Type = 0;
 /* line 7081: */
MVFACTR.Rest = EUFACTR_vss;
 /* line 7084: */
OVFACTR = A_LOC(A68_124 ) ;
(*OVFACTR) = MVFACTR ;
EUFACTR_vss = OVFACTR;
} 
break;
case 16: 
{ 
(*NL(EZAACTR_rdmode)) = YKAACTR_voidmode;
 /* line 7085: */
A_CALLPROC(NL(GFFACTR_range),(NL(NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &QVFACTR),(NL(NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &QVFACTR,(NL(GFFACTR_range)).nonlocals));
PVFACTR.V = QVFACTR.V;
PVFACTR.Type = 0;
 /* line 7086: */
PVFACTR.Rest = EUFACTR_vss;
 /* line 7090: */
RVFACTR = A_LOC(A68_124 ) ;
(*RVFACTR) = PVFACTR ;
EUFACTR_vss = RVFACTR;
} 
break;
case 17: 
{ 
 /* line 7091: */
if ( ((*NL(MFBACTR_t1))==32) )
{ 
TUFACTR_i = (*NL(LSAACTR_tind));
 /* line 7092: */
 /* line 7093: */
if ( (A_CALLPROC(NL(ZJBACTR_primread),(),((NL(ZJBACTR_primread)).nonlocals))==84) )
{ 
 /* line 7094: */
(*NL(MFBACTR_t1)) = 27;
} 
else
{ 
 /* line 7095: */
 /* line 7096: */
(*NL(LSAACTR_tind)) = TUFACTR_i;
} 
} 
 /* line 7097: */
HUFACTR_exitinrange = A68_FALSE;
 /* line 7098: */
A_CALLPROC(NL(GFFACTR_range),(NL(NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (&HUFACTR_exitinrange), &SVFACTR),(NL(NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (&HUFACTR_exitinrange), &SVFACTR,(NL(GFFACTR_range)).nonlocals));
JUFACTR_vlist = SVFACTR;
 /* line 7099: */
 /* line 7100: */
if ( ((*(&((&JUFACTR_vlist)->Rest)))!=UQAACTR_nilvl) )
{ 
TVFACTR.Props = MQAACTR_z;
TVFACTR.Mode = (-1);
UVFACTR = A_LOC(A68_124 ) ;
(*UVFACTR) = JUFACTR_vlist ;
TVFACTR.Vlist = UVFACTR;
 /* line 7101: */
TVFACTR.Labs = (A68_69 *)A68_NIL;
 /* line 7102: */
 /* line 7105: */
(*KUFACTR_v) = TVFACTR;
} 
} 
break;
case 18: 
 /* line 7108: */
(*NL(FZAACTR_outlevel))+=1;
break;
case 19: 
 /* line 7109: */
VVFACTR = ((*(&((&JUFACTR_vlist)->Rest)))==UQAACTR_nilvl);
if ( VVFACTR )
{ /* line 7110: */
WVFACTR = ((*(&((&((&JUFACTR_vlist)->V))->Vlist)))!=UQAACTR_nilvl);
if ( ! WVFACTR )
{ /* line 7111: */
XVFACTR = (*(&(KUFACTR_v->Props))) ;
WVFACTR = A_LB_GE(XVFACTR,SLAACTR_semibit);
}
if ( ! WVFACTR )
{ /* line 7112: */
WVFACTR = ((*(&(KUFACTR_v->Labs)))!=XQAACTR_nillab);
}
 /* line 7113: */
VVFACTR = WVFACTR;
}
if ( VVFACTR )
{ 
YVFACTR.Props = MQAACTR_z;
YVFACTR.Mode = (-1);
ZVFACTR = A_LOC(A68_124 ) ;
(*ZVFACTR) = JUFACTR_vlist ;
YVFACTR.Vlist = ZVFACTR;
 /* line 7114: */
YVFACTR.Labs = (A68_69 *)A68_NIL;
 /* line 7117: */
(*KUFACTR_v) = YVFACTR;
} 
break;
case 20: 
{ 
TUFACTR_i = A_CALLPROC(NL(XJCACTR_pmode),(A_CALLPROC(NL(CXCACTR_hcf),(KUFACTR_v),(KUFACTR_v,(NL(CXCACTR_hcf)).nonlocals))),(A_CALLPROC(NL(CXCACTR_hcf),(KUFACTR_v),(KUFACTR_v,(NL(CXCACTR_hcf)).nonlocals)),(NL(XJCACTR_pmode)).nonlocals));
 /* line 7118: */
PUFACTR_next = (*NL(MFBACTR_t1));
 /* line 7119: */
IUFACTR_bangdi = A68_FALSE;
 /* line 7120: */
AWFACTR = (((*NL(VBBACTR_brind))-1)-((PUFACTR_next==24))) ;
UUFACTR_j = (*(&A_VINDEX(NL(TBBACTR_brackets),AWFACTR)));
 /* line 7121: */
BWFACTR.V.Props = MQAACTR_z;
BWFACTR.V.Mode = (-TUFACTR_i);
BWFACTR.V.Vlist = (A68_124 *)A68_NIL;
BWFACTR.V.Labs = (A68_69 *)A68_NIL;
BWFACTR.Type = 0;
BWFACTR.Rest = EUFACTR_vss;
CWFACTR = A_LOC(A68_124 ) ;
(*CWFACTR) = BWFACTR ;
EUFACTR_vss = CWFACTR;
 /* line 7122: */
DWFACTR.V = (*KUFACTR_v);
DWFACTR.Type = 0;
DWFACTR.Rest = EUFACTR_vss;
EWFACTR = A_LOC(A68_124 ) ;
(*EWFACTR) = DWFACTR ;
EUFACTR_vss = EWFACTR;
 /* line 7123: */
 /* line 7124: */
FWFACTR = (*(&A_VINDEX(NL(KUAACTR_modes),TUFACTR_i))) ;
switch ( FWFACTR.mode )
{ 
case 2: /* REF STRUCT(INT,REF MODE54)  */
GWFACTR_u = (FWFACTR.data.mode2);
 /* line 7125: */
{ 
(*NL(AZAACTR_globccmode)) = TUFACTR_i;
 /* line 7126: */
IUFACTR_bangdi = A68_TRUE;
 /* line 7127: */
 /* line 7128: */
 /* line 7129: */
HWFACTR = YMAACTR_xcaseu;
} 
break;
default: 
IWFACTR = (TUFACTR_i==ELAACTR_int);
if ( ! IWFACTR )
{ /* line 7130: */
IWFACTR = (TUFACTR_i==ZKAACTR_faultmode);
}
if ( IWFACTR )
{ 
IUFACTR_bangdi = A68_TRUE;
 /* line 7131: */
 /* line 7132: */
HWFACTR = XMAACTR_xcase;
} 
else
{ 
 /* line 7133: */
if ( (TUFACTR_i==ALAACTR_bool) )
{ 
 /* line 7135: */
if ( (UUFACTR_j==57) )
{ 
A_CALLPROC(NL(QJBACTR_fault),(192),(192,(NL(QJBACTR_fault)).nonlocals));
 /* line 7137: */
 /* line 7138: */
 /* line 7139: */
HWFACTR = XMAACTR_xcase;
} 
else
{ 
 /* line 7140: */
HWFACTR = WMAACTR_xif;
} 
} 
else
{ 
A_CALLPROC(NL(PZBACTR_faultp),(140, TUFACTR_i, 0, (A68_31 *)A68_NIL),(140, TUFACTR_i, 0, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
 /* line 7142: */
 /* line 7143: */
 /* line 7144: */
HWFACTR = XMAACTR_xcase;
} 
} 
break;
} 
(*NL(MFBACTR_t1)) = HWFACTR;
 /* line 7145: */
JWFACTR = IUFACTR_bangdi;
if ( JWFACTR )
{JWFACTR = (UUFACTR_j==56);
}
if ( JWFACTR )
{ /* line 7146: */
JWFACTR = (TUFACTR_i!=ZKAACTR_faultmode);
}
if ( JWFACTR )
{ 
 /* line 7148: */
A_CALLPROC(NL(QJBACTR_fault),(193),(193,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 7149: */
IUFACTR_bangdi = (TUFACTR_i!=ZKAACTR_faultmode);
 /* line 7150: */
 /* line 7151: */
 /* line 7154: */
KWFACTR = (&(EUFACTR_vss->Type)) ;
(*KWFACTR) = (*NL(MFBACTR_t1));
} 
break;
case 21: 
{ 
(*NL(FZAACTR_outlevel))-=1;
 /* line 7155: */
LWFACTR.V = (*KUFACTR_v);
LWFACTR.Type = 0;
 /* line 7156: */
LWFACTR.Rest = EUFACTR_vss;
 /* line 7159: */
MWFACTR = A_LOC(A68_124 ) ;
(*MWFACTR) = LWFACTR ;
EUFACTR_vss = MWFACTR;
} 
break;
case 22: 
{ 
MUFACTR_vl1 = EUFACTR_vss;
 /* line 7160: */
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
 /* line 7161: */
NWFACTR = (&(MUFACTR_vl1->Rest)) ;
(*NWFACTR) = LUFACTR_vl;
 /* line 7162: */
OWFACTR = (&((&(EUFACTR_vss->V))->Vlist)) ;
(*OWFACTR) = MUFACTR_vl1;
 /* line 7163: */
LUFACTR_vl = EUFACTR_vss;
 /* line 7164: */
(*KUFACTR_v) = (*(&(EUFACTR_vss->V)));
 /* line 7165: */
 /* line 7166: */
 /* line 7169: */
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
} 
break;
case 23: 
 /* line 7170: */
if ( ((*NL(VBBACTR_brind))>1) )
{ 
 /* line 7171: */
PWFACTR = ((*NL(VBBACTR_brind))-1) ;
switch ( ((*(&A_VINDEX(NL(TBBACTR_brackets),PWFACTR)))-53) )
{ 
case 1: 
QWFACTR = 45;
break;
case 2: 
QWFACTR = 44;
break;
case 3: 
 /* line 7172: */
QWFACTR = 46;
break;
case 4: 
QWFACTR = 47;
break;
default: 
A_IMP_SKIP ;
break;
} 
TUFACTR_i = QWFACTR;
 /* line 7173: */
 /* line 7174: */
if ( (TUFACTR_i==44) )
{ 
 /* line 7176: */
(*NL(GDBACTR_id1)) = A_CALLPROC(NL(KTAACTR_idmess),(((*NL(PDBACTR_bangtype))+3)),(((*NL(PDBACTR_bangtype))+3),(NL(KTAACTR_idmess)).nonlocals)) ;
A_CALLPROC(NL(PZBACTR_faultp),(203, 0, 0, NL(GDBACTR_id1)),(203, 0, 0, NL(GDBACTR_id1),(NL(PZBACTR_faultp)).nonlocals));
} 
else
{ 
 /* line 7177: */
if ( ((*NL(PDBACTR_bangtype))!=TUFACTR_i) )
{ 
 /* line 7179: */
 /* line 7180: */
(*NL(GDBACTR_id1)) = A_CALLPROC(NL(KTAACTR_idmess),((TUFACTR_i+3)),((TUFACTR_i+3),(NL(KTAACTR_idmess)).nonlocals)) ;
A_CALLPROC(NL(PZBACTR_faultp),(118, 0, 0, NL(GDBACTR_id1)),(118, 0, 0, NL(GDBACTR_id1),(NL(PZBACTR_faultp)).nonlocals));
} 
} 
} 
else
{ 
RWFACTR = (&A_VINDEX(NL(TBBACTR_brackets),(*NL(VBBACTR_brind)))) ;
(*RWFACTR) = 54;
 /* line 7181: */
 /* line 7182: */
 /* line 7185: */
(*NL(VBBACTR_brind))+=1;
} 
break;
case 24: 
{ 
 /* line 7186: */
SWFACTR = ((*NL(VBBACTR_brind))-1) ;
switch ( ((*(&A_VINDEX(NL(TBBACTR_brackets),SWFACTR)))-53) )
{ 
case 1: 
TWFACTR = 45;
break;
case 2: 
TWFACTR = 44;
break;
case 3: 
 /* line 7187: */
TWFACTR = 48;
break;
case 4: 
TWFACTR = 49;
break;
default: 
A_IMP_SKIP ;
break;
} 
TUFACTR_i = TWFACTR;
 /* line 7188: */
 /* line 7189: */
if ( (TUFACTR_i==44) )
{ 
 /* line 7191: */
(*NL(GDBACTR_id1)) = A_CALLPROC(NL(KTAACTR_idmess),(((*NL(PDBACTR_bangtype))+3)),(((*NL(PDBACTR_bangtype))+3),(NL(KTAACTR_idmess)).nonlocals)) ;
A_CALLPROC(NL(PZBACTR_faultp),(203, 0, 0, NL(GDBACTR_id1)),(203, 0, 0, NL(GDBACTR_id1),(NL(PZBACTR_faultp)).nonlocals));
} 
else
{ 
 /* line 7192: */
if ( ((*NL(PDBACTR_bangtype))!=TUFACTR_i) )
{ 
 /* line 7194: */
 /* line 7195: */
 /* line 7199: */
(*NL(GDBACTR_id1)) = A_CALLPROC(NL(KTAACTR_idmess),((TUFACTR_i+3)),((TUFACTR_i+3),(NL(KTAACTR_idmess)).nonlocals)) ;
A_CALLPROC(NL(PZBACTR_faultp),(118, 0, 0, NL(GDBACTR_id1)),(118, 0, 0, NL(GDBACTR_id1),(NL(PZBACTR_faultp)).nonlocals));
} 
} 
} 
break;
case 25: 
UWFACTR.V = (*KUFACTR_v);
UWFACTR.Type = ANAACTR_xthen;
UWFACTR.Rest = EUFACTR_vss;
 /* line 7202: */
VWFACTR = A_LOC(A68_124 ) ;
(*VWFACTR) = UWFACTR ;
EUFACTR_vss = VWFACTR;
break;
case 26: 
{ 
LUFACTR_vl = EUFACTR_vss;
 /* line 7203: */
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
 /* line 7204: */
WWFACTR.V = (*KUFACTR_v);
WWFACTR.Type = INAACTR_xelse;
 /* line 7205: */
WWFACTR.Rest = (A68_124 *)A68_NIL;
 /* line 7208: */
XWFACTR = A_LOC(A68_124 ) ;
(*XWFACTR) = WWFACTR ;
YWFACTR = (&(LUFACTR_vl->Rest)) ;
(*YWFACTR) = XWFACTR;
} 
break;
case 27: 
{ 
LUFACTR_vl = EUFACTR_vss;
 /* line 7209: */
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
 /* line 7210: */
 /* line 7211: */
 /* line 7214: */
ZWFACTR = (&(LUFACTR_vl->Rest)) ;
(*ZWFACTR) = (A68_124 *)A68_NIL;
} 
break;
case 28: 
{ 
AXFACTR.V = (*KUFACTR_v);
AXFACTR.Type = DNAACTR_xcomma;
AXFACTR.Rest = EUFACTR_vss;
BXFACTR = A_LOC(A68_124 ) ;
(*BXFACTR) = AXFACTR ;
EUFACTR_vss = BXFACTR;
 /* line 7215: */
CXFACTR = ((A68_BITS )((*(&((&((&JUFACTR_vlist)->V))->Props)))&ERAACTR_labsemi)!=MQAACTR_z);
if ( ! CXFACTR )
{CXFACTR = HUFACTR_exitinrange;
}
 /* line 7217: */
if ( CXFACTR )
{CXFACTR = IUFACTR_bangdi;
}
if ( CXFACTR )
{ 
 /* line 7219: */
 /* line 7220: */
 /* line 7223: */
A_CALLPROC(NL(QJBACTR_fault),(159),(159,(NL(QJBACTR_fault)).nonlocals));
} 
} 
break;
case 29: 
{ 
DXFACTR.V = (*KUFACTR_v);
DXFACTR.Type = BNAACTR_xin;
DXFACTR.Rest = EUFACTR_vss;
EXFACTR = A_LOC(A68_124 ) ;
(*EXFACTR) = DXFACTR ;
EUFACTR_vss = EXFACTR;
 /* line 7224: */
FXFACTR = ((A68_BITS )((*(&((&((&JUFACTR_vlist)->V))->Props)))&ERAACTR_labsemi)!=MQAACTR_z);
if ( ! FXFACTR )
{FXFACTR = HUFACTR_exitinrange;
}
 /* line 7226: */
if ( FXFACTR )
{FXFACTR = IUFACTR_bangdi;
}
if ( FXFACTR )
{ 
 /* line 7228: */
 /* line 7229: */
 /* line 7232: */
A_CALLPROC(NL(QJBACTR_fault),(159),(159,(NL(QJBACTR_fault)).nonlocals));
} 
} 
break;
case 30: 
GXFACTR.V = (*KUFACTR_v);
GXFACTR.Type = GNAACTR_xout;
GXFACTR.Rest = (A68_124 *)A68_NIL;
 /* line 7235: */
HXFACTR = A_LOC(A68_124 ) ;
(*HXFACTR) = GXFACTR ;
LUFACTR_vl = HXFACTR;
break;
case 31: 
 /* line 7238: */
LUFACTR_vl = (A68_124 *)A68_NIL;
break;
case 32: 
{ 
MUFACTR_vl1 = EUFACTR_vss;
 /* line 7239: */
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
 /* line 7240: */
IXFACTR = (&(MUFACTR_vl1->Rest)) ;
(*IXFACTR) = LUFACTR_vl;
 /* line 7241: */
 /* line 7242: */
 /* line 7245: */
LUFACTR_vl = MUFACTR_vl1;
} 
break;
case 33: 
 /* line 7246: */
if ( !IUFACTR_bangdi )
{ 
PUFACTR_next = (*NL(MFBACTR_t1));
 /* line 7247: */
 /* line 7249: */
 /* line 7252: */
(*NL(MFBACTR_t1)) = 29;
} 
break;
case 34: 
{ 
JXFACTR.V = (*KUFACTR_v);
JXFACTR.Type = ONAACTR_xcollcomma;
JXFACTR.Rest = EUFACTR_vss;
KXFACTR = A_LOC(A68_124 ) ;
(*KXFACTR) = JXFACTR ;
EUFACTR_vss = KXFACTR;
 /* line 7253: */
 /* line 7254: */
LXFACTR = ((A68_BITS )((*(&((&((&JUFACTR_vlist)->V))->Props)))&ERAACTR_labsemi)!=MQAACTR_z);
if ( ! LXFACTR )
{LXFACTR = HUFACTR_exitinrange;
}
if ( LXFACTR )
{ 
 /* line 7256: */
 /* line 7257: */
 /* line 7260: */
A_CALLPROC(NL(QJBACTR_fault),(200),(200,(NL(QJBACTR_fault)).nonlocals));
} 
} 
break;
case 35: 
{ 
MXFACTR = (&(LUFACTR_vl->Type)) ;
(*MXFACTR) = NNAACTR_xcoll;
 /* line 7261: */
NXFACTR.Props = MQAACTR_z;
NXFACTR.Mode = (-2);
NXFACTR.Vlist = LUFACTR_vl;
 /* line 7262: */
NXFACTR.Labs = (A68_69 *)A68_NIL;
 /* line 7265: */
(*KUFACTR_v) = NXFACTR;
} 
break;
case 36: 
{ 
OXFACTR.V = (*KUFACTR_v);
OXFACTR.Type = ONAACTR_xcollcomma;
OXFACTR.Rest = (A68_124 *)A68_NIL;
PXFACTR = A_LOC(A68_124 ) ;
(*PXFACTR) = OXFACTR ;
LUFACTR_vl = PXFACTR;
 /* line 7266: */
 /* line 7267: */
QXFACTR = ((A68_BITS )((*(&((&((&JUFACTR_vlist)->V))->Props)))&ERAACTR_labsemi)!=MQAACTR_z);
if ( ! QXFACTR )
{QXFACTR = HUFACTR_exitinrange;
}
if ( QXFACTR )
{ 
 /* line 7269: */
 /* line 7270: */
 /* line 7273: */
A_CALLPROC(NL(QJBACTR_fault),(200),(200,(NL(QJBACTR_fault)).nonlocals));
} 
} 
break;
case 37: 
{ 
RXFACTR.V = (*KUFACTR_v);
RXFACTR.Type = ENAACTR_xcommau;
RXFACTR.Rest = EUFACTR_vss;
SXFACTR = A_LOC(A68_124 ) ;
(*SXFACTR) = RXFACTR ;
EUFACTR_vss = SXFACTR;
 /* line 7274: */
 /* line 7275: */
TXFACTR = ((A68_BITS )((*(&((&((&JUFACTR_vlist)->V))->Props)))&ERAACTR_labsemi)!=MQAACTR_z);
if ( ! TXFACTR )
{TXFACTR = HUFACTR_exitinrange;
}
if ( TXFACTR )
{ 
 /* line 7277: */
 /* line 7278: */
 /* line 7281: */
A_CALLPROC(NL(QJBACTR_fault),(159),(159,(NL(QJBACTR_fault)).nonlocals));
} 
} 
break;
case 38: 
UXFACTR.V = (*KUFACTR_v);
UXFACTR.Type = HNAACTR_xoutu;
UXFACTR.Rest = (A68_124 *)A68_NIL;
 /* line 7284: */
VXFACTR = A_LOC(A68_124 ) ;
(*VXFACTR) = UXFACTR ;
LUFACTR_vl = VXFACTR;
break;
case 39: 
{ 
WXFACTR.V = (*KUFACTR_v);
WXFACTR.Type = CNAACTR_xinu;
WXFACTR.Rest = EUFACTR_vss;
XXFACTR = A_LOC(A68_124 ) ;
(*XXFACTR) = WXFACTR ;
EUFACTR_vss = XXFACTR;
 /* line 7285: */
 /* line 7286: */
YXFACTR = ((A68_BITS )((*(&((&((&JUFACTR_vlist)->V))->Props)))&ERAACTR_labsemi)!=MQAACTR_z);
if ( ! YXFACTR )
{YXFACTR = HUFACTR_exitinrange;
}
if ( YXFACTR )
{ 
 /* line 7288: */
 /* line 7289: */
 /* line 7292: */
A_CALLPROC(NL(QJBACTR_fault),(159),(159,(NL(QJBACTR_fault)).nonlocals));
} 
} 
break;
case 40: 
 /* line 7295: */
ZXFACTR = (&(KUFACTR_v->Props)) ;
(*ZXFACTR) = (A68_BITS )((*(&(KUFACTR_v->Props)))|XLAACTR_elifousebit);
break;
case 41: 
{ 
FUFACTR_id = A_CALLPROC(NL(JEFACTR_findid),(),((NL(JEFACTR_findid)).nonlocals));
 /* line 7296: */
BYFACTR = (*(&(FUFACTR_id->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(AYFACTR,mode3,3,BYFACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(AYFACTR,mode3,3,BYFACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7297: */
 /* line 7298: */
CYFACTR = (*NL(XZAACTR_burestrict));
if ( CYFACTR )
{DYFACTR = ((*(&(FUFACTR_id->Decno)))<=(*NL(WZAACTR_lastkept)));
if ( DYFACTR )
{ /* line 7299: */
DYFACTR = ((*(&(FUFACTR_id->Decno)))>=0);
}
if ( ! DYFACTR )
{ /* line 7300: */
DYFACTR = ((*(&(FUFACTR_id->Decno)))>=FKAACTR_startlib);
}
 /* line 7301: */
CYFACTR = DYFACTR;
}
if ( CYFACTR )
{ 
 /* line 7302: */
A_CALLPROC(NL(YMDACTR_testkept),((*(&(FUFACTR_id->Mode)))),((*(&(FUFACTR_id->Mode))),(NL(YMDACTR_testkept)).nonlocals));
} 
 /* line 7303: */
RNDACTR_adjscope((*(&(NL(NFFACTR_current)->Rd))), (*(&(FUFACTR_id->Level))), (*(&(FUFACTR_id->Scope))));
 /* line 7304: */
EYFACTR.V.Props = MQAACTR_z;
 /* line 7306: */
 /* line 7307: */
if ( ((*(&(FUFACTR_id->Mode)))==0) )
{ 
 /* line 7308: */
EYFACTR.V.Mode = ZKAACTR_faultmode;
} 
else
{ 
EYFACTR.V.Mode = (*(&(FUFACTR_id->Mode)));
} 
 /* line 7309: */
EYFACTR.V.Vlist = (A68_124 *)A68_NIL;
EYFACTR.V.Labs = (A68_69 *)A68_NIL;
 /* line 7310: */
EYFACTR.Type = 0;
 /* line 7311: */
EYFACTR.Rest = EUFACTR_vss;
 /* line 7314: */
FYFACTR = A_LOC(A68_124 ) ;
(*FYFACTR) = EYFACTR ;
EUFACTR_vss = FYFACTR;
} 
break;
case 42: 
{ 
 /* line 7315: */
if ( ((*NL(GGFACTR_type))==1) )
{ 
 /* line 7317: */
A_CALLPROC(NL(QJBACTR_fault),(141),(141,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 7318: */
(*NL(GGFACTR_type)) = 1;
 /* line 7319: */
 /* line 7320: */
if ( !(*NL(ZGFACTR_heap)) )
{ 
 /* line 7321: */
GYFACTR = (&(NL(NFFACTR_current)->Props)) ;
(*GYFACTR) = (A68_BITS )((*(&(NL(NFFACTR_current)->Props)))|EMAACTR_locgenbit);
} 
 /* line 7323: */
 /* line 7324: */
if ( ((*(&(DUFACTR_am->Modeproc)))==0) )
{ 
HYFACTR.Mode = ((*(&(DUFACTR_am->Mode)))+KQAACTR_refmark);
HYFACTR.Loc = !(*NL(ZGFACTR_heap));
 /* line 7325: */
A_CALLPROC(NL(Output),(A_UNITE(IYFACTR,mode6,6,HYFACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(IYFACTR,mode6,6,HYFACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
else
{ 
KYFACTR = !(*NL(ZGFACTR_heap)) ;
A_CALLPROC(NL(Output),(A_UNITE(JYFACTR,mode2,2,KYFACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(JYFACTR,mode2,2,KYFACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7326: */
LYFACTR.Fn = HMAACTR_xparampack;
LYFACTR.M = A_CALLPROC(NL(ZICACTR_mproc),((*(&(DUFACTR_am->Mode)))),((*(&(DUFACTR_am->Mode))),(NL(ZICACTR_mproc)).nonlocals));
LYFACTR.Param = 1;
A_CALLPROC(NL(Output),(A_UNITE(MYFACTR,mode14,14,LYFACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(MYFACTR,mode14,14,LYFACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7327: */
NYFACTR.Fn = AOAACTR_xcall;
NYFACTR.M = (*(&(DUFACTR_am->Mode)));
NYFACTR.Param = (1+((*NL(ZGFACTR_heap))));
A_CALLPROC(NL(Output),(A_UNITE(OYFACTR,mode14,14,NYFACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(OYFACTR,mode14,14,NYFACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7328: */
PYFACTR.Fn = GMAACTR_xstatgrab;
 /* line 7330: */
PYFACTR.M = ((*(&(DUFACTR_am->Mode)))+KQAACTR_refmark);
PYFACTR.Param = (!(*NL(ZGFACTR_heap)));
 /* line 7331: */
A_CALLPROC(NL(Output),(A_UNITE(QYFACTR,mode14,14,PYFACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(QYFACTR,mode14,14,PYFACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 7332: */
(*NL(ZGFACTR_heap)) = A68_FALSE;
 /* line 7333: */
 /* line 7334: */
RYFACTR.V.Props = CRAACTR_assmntbit;
RYFACTR.V.Mode = ((*(&(DUFACTR_am->Mode)))+KQAACTR_refmark);
 /* line 7335: */
RYFACTR.V.Vlist = (A68_124 *)A68_NIL;
RYFACTR.V.Labs = (A68_69 *)A68_NIL;
RYFACTR.Type = 0;
 /* line 7336: */
RYFACTR.Rest = EUFACTR_vss;
 /* line 7339: */
SYFACTR = A_LOC(A68_124 ) ;
(*SYFACTR) = RYFACTR ;
EUFACTR_vss = SYFACTR;
} 
break;
case 43: 
 /* line 7342: */
(*NL(ZGFACTR_heap)) = A68_TRUE;
break;
case 44: 
{ 
(*NL(DHFACTR_lab)) = (*(&(NL(NFFACTR_current)->Labs)));
 /* line 7343: */
for ( ;; )
{ 
TYFACTR = ((*NL(DHFACTR_lab))!=XQAACTR_nillab);
if ( TYFACTR )
{ /* line 7344: */
VYFACTR = (*(&((*NL(DHFACTR_lab))->Name))) ;
TYFACTR = A_VC_NE(A_HISVEC(UYFACTR,VYFACTR,32,A68_CHAR ),A_HISVEC(WYFACTR,(*NL(PSAACTR_ident)),32,A68_CHAR ));
}
if ( !(TYFACTR) ) break;
(*NL(DHFACTR_lab)) = (*(&((*NL(DHFACTR_lab))->Rest)));
}
 /* line 7345: */
 /* line 7346: */
if ( ((*NL(DHFACTR_lab))==XQAACTR_nillab) )
{ 
 /* line 7347: */
XYFACTR.Name = (*NL(PSAACTR_ident));
XYFACTR.Labno = (*NL(DZAACTR_labno))+=1;
XYFACTR.Status = 1;
 /* line 7348: */
XYFACTR.Rest = (*(&(NL(NFFACTR_current)->Labs)));
YYFACTR = A_HEAP(A68_69 ) ;
(*YYFACTR) = XYFACTR ;
ZYFACTR = (&(NL(NFFACTR_current)->Labs)) ;
(*NL(DHFACTR_lab)) = (*ZYFACTR) = YYFACTR;
} 
 /* line 7349: */
A_CALLPROC(NL(Output),(A_UNITE(AZFACTR,mode4,4,(*NL(DHFACTR_lab))), (*NL(FZAACTR_outlevel))),(A_UNITE(AZFACTR,mode4,4,(*NL(DHFACTR_lab))), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7350: */
BZFACTR.V.Props = MQAACTR_z;
BZFACTR.V.Mode = XKAACTR_gotomode;
BZFACTR.V.Vlist = (A68_124 *)A68_NIL;
BZFACTR.V.Labs = (A68_69 *)A68_NIL;
BZFACTR.Type = 0;
 /* line 7351: */
BZFACTR.Rest = EUFACTR_vss;
 /* line 7355: */
CZFACTR = A_LOC(A68_124 ) ;
(*CZFACTR) = BZFACTR ;
EUFACTR_vss = CZFACTR;
} 
break;
case 45: 
{ 
TUFACTR_i = A_CALLPROC(NL(XJCACTR_pmode),(A_CALLPROC(NL(CXCACTR_hcf),((&(EUFACTR_vss->V))),((&(EUFACTR_vss->V)),(NL(CXCACTR_hcf)).nonlocals))),(A_CALLPROC(NL(CXCACTR_hcf),((&(EUFACTR_vss->V))),((&(EUFACTR_vss->V)),(NL(CXCACTR_hcf)).nonlocals)),(NL(XJCACTR_pmode)).nonlocals));
 /* line 7356: */
A_CALLPROC(NL(RYCACTR_strong),((&(EUFACTR_vss->V)), TUFACTR_i, A68_TRUE),((&(EUFACTR_vss->V)), TUFACTR_i, A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 7357: */
 /* line 7358: */
DZFACTR = (*(&A_VINDEX(NL(KUAACTR_modes),TUFACTR_i))) ;
switch ( DZFACTR.mode )
{ 
case 3: /* REF STRUCT(INT,REF MODE54)  */
EZFACTR_pp = (DZFACTR.data.mode3);
 /* line 7359: */
FZFACTR.P = (*EZFACTR_pp);
FZFACTR.N = 0;
FZFACTR.Procmode = TUFACTR_i;
 /* line 7360: */
FZFACTR.Rest = RUFACTR_proclist;
GZFACTR = A_LOC(A68_242 ) ;
(*GZFACTR) = FZFACTR ;
RUFACTR_proclist = GZFACTR;
break;
default: 
 /* line 7361: */
if ( (TUFACTR_i!=ZKAACTR_faultmode) )
{ 
 /* line 7363: */
A_CALLPROC(NL(PZBACTR_faultp),(142, TUFACTR_i, 0, (A68_31 *)A68_NIL),(142, TUFACTR_i, 0, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
} 
 /* line 7364: */
HZFACTR.P.Deproc = ZKAACTR_faultmode;
HZFACTR.P.Pars = (A68_54 *)A68_NIL;
HZFACTR.N = 0;
HZFACTR.Procmode = TUFACTR_i;
 /* line 7365: */
HZFACTR.Rest = RUFACTR_proclist;
 /* line 7366: */
 /* line 7369: */
IZFACTR = A_LOC(A68_242 ) ;
(*IZFACTR) = HZFACTR ;
RUFACTR_proclist = IZFACTR;
break;
} 
} 
break;
case 46: 
{ 
 /* line 7370: */
if ( ((*(&((&(RUFACTR_proclist->P))->Deproc)))!=ZKAACTR_faultmode) )
{ 
 /* line 7371: */
if ( ((*(&((&(RUFACTR_proclist->P))->Pars)))!=OQAACTR_nilml) )
{ 
 /* line 7372: */
 /* line 7373: */
A_CALLPROC(NL(RYCACTR_strong),((&(EUFACTR_vss->V)), (*(&((*(&((&(RUFACTR_proclist->P))->Pars)))->Mode))), A68_TRUE),((&(EUFACTR_vss->V)), (*(&((*(&((&(RUFACTR_proclist->P))->Pars)))->Mode))), A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 7374: */
 /* line 7375: */
JZFACTR = (&((&(RUFACTR_proclist->P))->Pars)) ;
(*JZFACTR) = (*(&((*(&((&(RUFACTR_proclist->P))->Pars)))->Rest)));
 /* line 7376: */
 /* line 7377: */
KZFACTR = (&(RUFACTR_proclist->N)) ;
(*KZFACTR)+=1;
} 
else
{ 
LZFACTR = (&((&(RUFACTR_proclist->P))->Deproc)) ;
(*LZFACTR) = ZKAACTR_faultmode;
 /* line 7378: */
 /* line 7380: */
 /* line 7381: */
A_CALLPROC(NL(QJBACTR_fault),(143),(143,(NL(QJBACTR_fault)).nonlocals));
} 
} 
 /* line 7382: */
 /* line 7383: */
 /* line 7386: */
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
} 
break;
case 47: 
{ 
 /* line 7387: */
if ( (*NL(XZAACTR_burestrict)) )
{ 
 /* line 7389: */
A_CALLPROC(NL(QJBACTR_fault),(108),(108,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 7390: */
MZFACTR.Fn = HMAACTR_xparampack;
 /* line 7392: */
MZFACTR.M = (*(&(RUFACTR_proclist->Procmode)));
MZFACTR.Param = (*(&(RUFACTR_proclist->N)));
A_CALLPROC(NL(Output),(A_UNITE(NZFACTR,mode14,14,MZFACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(NZFACTR,mode14,14,MZFACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7393: */
OZFACTR.Fn = AOAACTR_xcall;
OZFACTR.M = TUFACTR_i = (*(&((&(RUFACTR_proclist->P))->Deproc)));
OZFACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(PZFACTR,mode14,14,OZFACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(PZFACTR,mode14,14,OZFACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7394: */
 /* line 7395: */
QZFACTR = A_CALLPROC(NL(VECACTR_marker),(TUFACTR_i),(TUFACTR_i,(NL(VECACTR_marker)).nonlocals)) ;
if ( (A_ABS(QZFACTR)>=2) )
{ 
 /* line 7396: */
RZFACTR = (&(NL(NFFACTR_current)->Dybits)) ;
(*RZFACTR) = (A68_BITS )((*(&(NL(NFFACTR_current)->Dybits)))|AMAACTR_dyprocbit);
} 
 /* line 7397: */
SZFACTR = ((*(&((&(RUFACTR_proclist->P))->Pars)))!=OQAACTR_nilml);
if ( SZFACTR )
{ /* line 7398: */
SZFACTR = (TUFACTR_i!=ZKAACTR_faultmode);
}
if ( SZFACTR )
{ 
 /* line 7400: */
A_CALLPROC(NL(QJBACTR_fault),(144),(144,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 7401: */
TZFACTR.Props = MQAACTR_z;
TZFACTR.Mode = TUFACTR_i;
TZFACTR.Vlist = (A68_124 *)A68_NIL;
TZFACTR.Labs = (A68_69 *)A68_NIL;
UZFACTR = (&(EUFACTR_vss->V)) ;
(*UZFACTR) = TZFACTR;
 /* line 7402: */
 /* line 7403: */
 /* line 7406: */
RUFACTR_proclist = (*(&(RUFACTR_proclist->Rest)));
} 
break;
case 48: 
 /* line 7407: */
 /* line 7408: */
if ( (DUFACTR_am!=QQAACTR_nilam) )
{ 
 /* line 7409: */
VZFACTR.Mode = (*(&(DUFACTR_am->Mode)));
} 
else
{ 
VZFACTR.Mode = YKAACTR_voidmode;
} 
 /* line 7410: */
VZFACTR.Nopars = 0;
VZFACTR.Rest = QUFACTR_codestack;
 /* line 7413: */
WZFACTR = A_LOC(A68_243 ) ;
(*WZFACTR) = VZFACTR ;
QUFACTR_codestack = WZFACTR;
break;
case 49: 
{ 
XZFACTR = (&(QUFACTR_codestack->Nopars)) ;
(*XZFACTR)+=1;
 /* line 7414: */
 /* line 7415: */
 /* line 7418: */
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
} 
break;
case 50: 
{ 
YZFACTR.Mode = (*(&(QUFACTR_codestack->Mode)));
YZFACTR.Nopars = (*(&(QUFACTR_codestack->Nopars)));
A_CALLPROC(NL(Output),(A_UNITE(ZZFACTR,mode11,11,YZFACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(ZZFACTR,mode11,11,YZFACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7419: */
AAGACTR.V.Props = MQAACTR_z;
AAGACTR.V.Mode = (*(&(QUFACTR_codestack->Mode)));
AAGACTR.V.Vlist = (A68_124 *)A68_NIL;
AAGACTR.V.Labs = (A68_69 *)A68_NIL;
AAGACTR.Type = 0;
AAGACTR.Rest = EUFACTR_vss;
BAGACTR = A_LOC(A68_124 ) ;
(*BAGACTR) = AAGACTR ;
EUFACTR_vss = BAGACTR;
 /* line 7420: */
 /* line 7421: */
 /* line 7424: */
QUFACTR_codestack = (*(&(QUFACTR_codestack->Rest)));
} 
break;
case 51: 
 /* line 7427: */
DUFACTR_am = (A68_52 *)A68_NIL;
break;
case 52: 
CAGACTR.V.Props = MQAACTR_z;
CAGACTR.V.Mode = NUFACTR_m;
CAGACTR.V.Vlist = (A68_124 *)A68_NIL;
CAGACTR.V.Labs = (A68_69 *)A68_NIL;
CAGACTR.Type = 0;
CAGACTR.Rest = EUFACTR_vss;
 /* line 7430: */
DAGACTR = A_LOC(A68_124 ) ;
(*DAGACTR) = CAGACTR ;
EUFACTR_vss = DAGACTR;
break;
case 53: 
{ 
NUFACTR_m = ALAACTR_bool;
 /* line 7431: */
 /* line 7432: */
 /* line 7435: */
FAGACTR = ((*NL(MFBACTR_t1))==19) ;
A_CALLPROC(NL(Output),(A_UNITE(EAGACTR,mode2,2,FAGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(EAGACTR,mode2,2,FAGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 54: 
{ 
NUFACTR_m = WKAACTR_nilmode;
 /* line 7436: */
 /* line 7437: */
 /* line 7440: */
A_CALLPROC(NL(Output),(A_UNITE(GAGACTR,mode5,5,TPAACTR_nil), (*NL(FZAACTR_outlevel))),(A_UNITE(GAGACTR,mode5,5,TPAACTR_nil), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 55: 
{ 
NUFACTR_m = VKAACTR_skipmode;
 /* line 7441: */
 /* line 7442: */
 /* line 7445: */
A_CALLPROC(NL(Output),(A_UNITE(HAGACTR,mode5,5,SPAACTR_skip), (*NL(FZAACTR_outlevel))),(A_UNITE(HAGACTR,mode5,5,SPAACTR_skip), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 56: 
{ 
NUFACTR_m = YKAACTR_voidmode;
 /* line 7446: */
 /* line 7447: */
 /* line 7450: */
A_CALLPROC(NL(Output),(A_UNITE(IAGACTR,mode5,5,UPAACTR_empty), (*NL(FZAACTR_outlevel))),(A_UNITE(IAGACTR,mode5,5,UPAACTR_empty), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 57: 
{ 
LAGACTR = A_VTRIM(JAGACTR,(NL(CTAACTR_str)),A_VTSCRIPT(&(JAGACTR.upb),(NL(CTAACTR_str)).upb,1,(*NL(ETAACTR_stringsize)))) ;
MAGACTR = A_VTRIM(KAGACTR,(NL(ATAACTR_string)),A_VTSCRIPT(&(KAGACTR.upb),(NL(ATAACTR_string)).upb,1,(*NL(ETAACTR_stringsize)))) ;
A_VASSIGN2(MAGACTR,LAGACTR,A68_CHAR );
 /* line 7451: */
OUFACTR_n = (*NL(FTAACTR_noofchars));
 /* line 7452: */
(*NL(HDBACTR_strsize)) = (*NL(ETAACTR_stringsize));
 /* line 7453: */
 /* line 7454: */
 /* line 7457: */
(*NL(IDBACTR_strbase)) = (*NL(GTAACTR_stringbase));
} 
break;
case 58: 
{ 
 /* line 7458: */
if ( ((*NL(HDBACTR_strsize))!=0) )
{ 
NAGACTR.Nochars = (-(*NL(HDBACTR_strsize)));
NAGACTR.Base = (*NL(IDBACTR_strbase));
NAGACTR.Chars = A_VTRIM(OAGACTR,(NL(CTAACTR_str)),A_VTSCRIPT(&(OAGACTR.upb),(NL(CTAACTR_str)).upb,1,(*NL(HDBACTR_strsize))));
 /* line 7459: */
A_CALLPROC(NL(Output),(A_UNITE(PAGACTR,mode35,35,NAGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(PAGACTR,mode35,35,NAGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 7460: */
SAGACTR = A_VTRIM(QAGACTR,(NL(CTAACTR_str)),A_VTSCRIPT(&(QAGACTR.upb),(NL(CTAACTR_str)).upb,1,(*NL(ETAACTR_stringsize)))) ;
TAGACTR = A_VTRIM(RAGACTR,(NL(ATAACTR_string)),A_VTSCRIPT(&(RAGACTR.upb),(NL(ATAACTR_string)).upb,1,(*NL(ETAACTR_stringsize)))) ;
A_VASSIGN2(TAGACTR,SAGACTR,A68_CHAR );
 /* line 7461: */
OUFACTR_n+=(*NL(FTAACTR_noofchars));
 /* line 7462: */
(*NL(HDBACTR_strsize)) = (*NL(ETAACTR_stringsize));
 /* line 7463: */
 /* line 7464: */
 /* line 7467: */
(*NL(IDBACTR_strbase)) = (*NL(GTAACTR_stringbase));
} 
break;
case 59: 
UAGACTR.Nochars = (*NL(HDBACTR_strsize));
UAGACTR.Base = (*NL(IDBACTR_strbase));
 /* line 7468: */
if ( ((*NL(HDBACTR_strsize))!=0) )
{ 
 /* line 7469: */
 /* line 7470: */
UAGACTR.Chars = A_VTRIM(VAGACTR,(NL(CTAACTR_str)),A_VTSCRIPT(&(VAGACTR.upb),(NL(CTAACTR_str)).upb,1,(*NL(HDBACTR_strsize))));
} 
else
{ 
 /* line 7471: */
UAGACTR.Chars = CQAACTR_emptystring;
} 
 /* line 7474: */
A_CALLPROC(NL(Output),(A_UNITE(WAGACTR,mode35,35,UAGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(WAGACTR,mode35,35,UAGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
break;
case 60: 
 /* line 7477: */
(*NL(FZAACTR_outlevel))+=1;
break;
case 61: 
{ 
 /* line 7478: */
 /* line 7479: */
if ( (OUFACTR_n==1) )
{ 
XAGACTR = BLAACTR_char;
} 
else
{ 
 /* line 7480: */
XAGACTR = A_CALLPROC(NL(TWBACTR_insertis),(BLAACTR_char, OUFACTR_n),(BLAACTR_char, OUFACTR_n,(NL(TWBACTR_insertis)).nonlocals));
} 
NUFACTR_m = XAGACTR;
 /* line 7481: */
A_CALLPROC(NL(Output),(QKAACTR_up, (*NL(FZAACTR_outlevel))),(QKAACTR_up, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7482: */
(*NL(FZAACTR_outlevel))-=1;
 /* line 7483: */
 /* line 7484: */
ZAGACTR = (&((&YAGACTR_xst)->Strmode)) ;
(*ZAGACTR) = NUFACTR_m;
 /* line 7485: */
A_CALLPROC(NL(Output),(A_UNITE(ABGACTR,mode7,7,YAGACTR_xst), (*NL(FZAACTR_outlevel))),(A_UNITE(ABGACTR,mode7,7,YAGACTR_xst), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7486: */
 /* line 7487: */
 /* line 7490: */
A_CALLPROC(NL(Output),(SKAACTR_down, (*NL(FZAACTR_outlevel))),(SKAACTR_down, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 62: 
 /* line 7493: */
(*NL(ETAACTR_stringsize)) = 1;
break;
case 63: 
{ 
(*NL(DUAACTR_string1)) = 'r';
 /* line 7494: */
(*NL(ZRAACTR_isint)) = A68_FALSE;
 /* line 7495: */
 /* line 7496: */
 /* line 7499: */
BBGACTR = (*NL(ETAACTR_stringsize))+=1 ;
CBGACTR = (&A_VINDEX(NL(ATAACTR_string),BBGACTR)) ;
(*CBGACTR) = HKAACTR_dchar;
} 
break;
case 64: 
{ 
(*NL(DUAACTR_string1)) = 'r';
 /* line 7500: */
(*NL(ZRAACTR_isint)) = A68_FALSE;
 /* line 7501: */
 /* line 7502: */
 /* line 7505: */
DBGACTR = (*NL(ETAACTR_stringsize))+=1 ;
EBGACTR = (&A_VINDEX(NL(ATAACTR_string),DBGACTR)) ;
(*EBGACTR) = IKAACTR_pchar;
} 
break;
case 65: 
{ 
FBGACTR = ((*NL(MFBACTR_t1))>0);
if ( FBGACTR )
{ /* line 7506: */
FBGACTR = ((*NL(MFBACTR_t1))<10);
}
if ( FBGACTR )
{ 
 /* line 7507: */
if ( ((*NL(MDBACTR_cbiop))==ZCBACTR_biminus) )
{ 
 /* line 7508: */
GBGACTR = (&A_VINDEX(NL(ATAACTR_string),(*NL(ETAACTR_stringsize)))) ;
(*GBGACTR) = JKAACTR_nchar;
} 
else
{ 
 /* line 7509: */
if ( ((*NL(MDBACTR_cbiop))!=YCBACTR_biplus) )
{ 
 /* line 7511: */
 /* line 7512: */
A_CALLPROC(NL(QJBACTR_fault),(145),(145,(NL(QJBACTR_fault)).nonlocals));
} 
} 
} 
 /* line 7513: */
 /* line 7514: */
 /* line 7517: */
(*NL(ZRAACTR_isint)) = A68_FALSE;
} 
break;
case 66: 
{ 
 /* line 7518: */
 /* line 7519: */
if ( ((*NL(DUAACTR_string1))=='r') )
{ 
HBGACTR = FLAACTR_real;
} 
else
{ 
 /* line 7520: */
 /* line 7521: */
if ( ((*NL(DUAACTR_string1))=='a') )
{ 
 /* line 7522: */
HBGACTR = ELAACTR_int;
} 
else
{ 
HBGACTR = DLAACTR_bits;
} 
} 
NUFACTR_m = (HBGACTR+(*NL(ZYAACTR_nolongs)));
 /* line 7523: */
IBGACTR.Mode = NUFACTR_m;
 /* line 7524: */
if ( ((*NL(ETAACTR_stringsize))!=0) )
{ 
 /* line 7525: */
 /* line 7526: */
IBGACTR.Nu = A_VTRIM(JBGACTR,(NL(ATAACTR_string)),A_VTSCRIPT(&(JBGACTR.upb),(NL(ATAACTR_string)).upb,1,(*NL(ETAACTR_stringsize))));
} 
else
{ 
 /* line 7527: */
IBGACTR.Nu = CQAACTR_emptystring;
} 
 /* line 7528: */
 /* line 7531: */
A_CALLPROC(NL(Output),(A_UNITE(KBGACTR,mode9,9,IBGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(KBGACTR,mode9,9,IBGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 67: 
{ 
LBGACTR.V.Props = MQAACTR_z;
LBGACTR.V.Mode = Mode;
LBGACTR.V.Vlist = (A68_124 *)A68_NIL;
LBGACTR.V.Labs = (A68_69 *)A68_NIL;
LBGACTR.Type = 0;
LBGACTR.Rest = (A68_124 *)A68_NIL;
MBGACTR = A_LOC(A68_124 ) ;
(*MBGACTR) = LBGACTR ;
EUFACTR_vss = MBGACTR;
 /* line 7532: */
NBGACTR = (&((&XUFACTR_xal)->Almode)) ;
(*NBGACTR) = Mode;
 /* line 7533: */
 /* line 7534: */
 /* line 7537: */
A_CALLPROC(NL(Output),(A_UNITE(OBGACTR,mode10,10,XUFACTR_xal), (*NL(FZAACTR_outlevel))),(A_UNITE(OBGACTR,mode10,10,XUFACTR_xal), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 68: 
 /* line 7538: */
if ( ((*NL(ZYAACTR_nolongs))<6) )
{ 
 /* line 7539: */
(*NL(ZYAACTR_nolongs)) = 0;
} 
else
{ 
 /* line 7540: */
 /* line 7543: */
(*NL(ZYAACTR_nolongs))-=10;
} 
break;
case 69: 
{ 
NUFACTR_m = UKAACTR_vacmode;
 /* line 7544: */
 /* line 7545: */
 /* line 7548: */
A_CALLPROC(NL(Output),(A_UNITE(PBGACTR,mode5,5,UPAACTR_empty), (*NL(FZAACTR_outlevel))),(A_UNITE(PBGACTR,mode5,5,UPAACTR_empty), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 70: 
{ 
(*NL(FZAACTR_outlevel))+=1;
 /* line 7549: */
QBGACTR.Name = (*NL(OSAACTR_compsymb));
QBGACTR.Hash = (*NL(RSAACTR_comphash));
 /* line 7550: */
QBGACTR.I = (*NL(LDBACTR_cinst));
QBGACTR.Diadic = A68_TRUE;
QBGACTR.Biop = (*NL(MDBACTR_cbiop));
 /* line 7551: */
QBGACTR.Lib = (*NL(NDBACTR_clibop));
 /* line 7552: */
QBGACTR.Rest = GUFACTR_opstack;
 /* line 7555: */
RBGACTR = A_LOC(A68_129 ) ;
(*RBGACTR) = QBGACTR ;
GUFACTR_opstack = RBGACTR;
} 
break;
case 71: 
SBGACTR.Name = (*NL(OSAACTR_compsymb));
SBGACTR.Hash = (*NL(RSAACTR_comphash));
 /* line 7556: */
SBGACTR.I = (*NL(LDBACTR_cinst));
SBGACTR.Diadic = A68_FALSE;
SBGACTR.Biop = (*NL(MDBACTR_cbiop));
 /* line 7557: */
SBGACTR.Lib = (*NL(NDBACTR_clibop));
SBGACTR.Rest = GUFACTR_opstack;
 /* line 7560: */
TBGACTR = A_LOC(A68_129 ) ;
(*TBGACTR) = SBGACTR ;
GUFACTR_opstack = TBGACTR;
break;
case 72: 
{ 
 /* line 7561: */
 /* line 7562: */
JCGACTR_di = (*(&(GUFACTR_opstack->Diadic)));
 /* line 7563: */
KCGACTR_libop = (*(&(GUFACTR_opstack->Lib)));
 /* line 7564: */
 /* line 7571: */
DCGACTR_r1 = (*(&((&(EUFACTR_vss->V))->Mode)));
 /* line 7572: */
 /* line 7573: */
 /* line 7574: */
if ( JCGACTR_di )
{ 
 /* line 7575: */
MCGACTR = (*(&((&((*(&(EUFACTR_vss->Rest)))->V))->Mode)));
} 
else
{ 
MCGACTR = 0;
} 
CCGACTR_l1 = MCGACTR;
 /* line 7577: */
NCGACTR = (DCGACTR_r1!=ZKAACTR_faultmode);
if ( NCGACTR )
{ /* line 7578: */
NCGACTR = (CCGACTR_l1!=ZKAACTR_faultmode);
}
if ( NCGACTR )
{ 
SCGACTR = (DCGACTR_r1==VKAACTR_skipmode);
if ( ! SCGACTR )
{ /* line 7579: */
SCGACTR = (CCGACTR_l1==VKAACTR_skipmode);
}
if ( SCGACTR )
{ 
 /* line 7580: */
goto PCGACTR_notfound;
} 
 /* line 7582: */
ICGACTR_inst1 = (*(&(GUFACTR_opstack->I)));
 /* line 7583: */
 /* line 7584: */
TCGACTR = (ICGACTR_inst1!=VQAACTR_nilinst);
if ( TCGACTR )
{ /* line 7585: */
TCGACTR = ((*(&(ICGACTR_inst1->Level)))==(-1));
}
LCGACTR_usedlib = (TCGACTR);
 /* line 7586: */
RCGACTR_findop:
 /* line 7587: */
FCGACTR_found = 0;
 /* line 7588: */
for ( ;; )
{ 
 /* line 7589: */
UCGACTR = (ICGACTR_inst1!=VQAACTR_nilinst);
if ( UCGACTR )
{VCGACTR = (FCGACTR_found<=1);
if ( ! VCGACTR )
{VCGACTR = (TUFACTR_i==(*(&(ICGACTR_inst1->Level))));
}
 /* line 7590: */
UCGACTR = VCGACTR;
}
if ( !(UCGACTR) ) break;
 /* line 7591: */
if ( (JCGACTR_di==((*(&(ICGACTR_inst1->Lmode)))!=0)) )
{ 
 /* line 7592: */
 /* line 7593: */
WCGACTR = A_CALLPROC(NL(MXCACTR_firmto),((&(EUFACTR_vss->V)), (*(&(ICGACTR_inst1->Rmode)))),((&(EUFACTR_vss->V)), (*(&(ICGACTR_inst1->Rmode))),(NL(MXCACTR_firmto)).nonlocals));
} 
else
{ 
WCGACTR = 0;
} 
TUFACTR_i = WCGACTR;
 /* line 7594: */
 /* line 7595: */
XCGACTR = (TUFACTR_i>1);
if ( XCGACTR )
{XCGACTR = JCGACTR_di;
}
if ( XCGACTR )
{ 
UUFACTR_j = A_CALLPROC(NL(MXCACTR_firmto),((&((*(&(EUFACTR_vss->Rest)))->V)), (*(&(ICGACTR_inst1->Lmode)))),((&((*(&(EUFACTR_vss->Rest)))->V)), (*(&(ICGACTR_inst1->Lmode))),(NL(MXCACTR_firmto)).nonlocals));
 /* line 7596: */
if ( (UUFACTR_j<TUFACTR_i) )
{ 
 /* line 7597: */
TUFACTR_i = UUFACTR_j;
} 
} 
 /* line 7598: */
YCGACTR = (TUFACTR_i>1);
if ( YCGACTR )
{YCGACTR = (TUFACTR_i==FCGACTR_found);
}
if ( YCGACTR )
{ /* line 7599: */
YCGACTR = ((*(&(ICGACTR_inst1->Level)))>0);
}
if ( YCGACTR )
{ 
A_CALLPROC(NL(PZBACTR_faultp),(146, 0, 0, (&(GUFACTR_opstack->Name))),(146, 0, 0, (&(GUFACTR_opstack->Name)),(NL(PZBACTR_faultp)).nonlocals));
 /* line 7601: */
 /* line 7602: */
goto XBGACTR_flt;
} 
else
{ 
 /* line 7603: */
if ( (TUFACTR_i>FCGACTR_found) )
{ 
FCGACTR_found = TUFACTR_i;
 /* line 7604: */
 /* line 7605: */
HCGACTR_inst = ICGACTR_inst1;
} 
} 
 /* line 7606: */
TUFACTR_i = (*(&(ICGACTR_inst1->Level)));
 /* line 7607: */
 /* line 7608: */
ICGACTR_inst1 = (*(&(ICGACTR_inst1->Rest)));
}
 /* line 7610: */
 /* line 7611: */
if ( (FCGACTR_found>1) )
{ 
ACGACTR_l = (*(&(HCGACTR_inst->Lmode)));
 /* line 7612: */
BCGACTR_r = (*(&(HCGACTR_inst->Rmode)));
 /* line 7613: */
GCGACTR_ans = (*(&(HCGACTR_inst->Ans)));
 /* line 7614: */
ECGACTR_op = (*(&(HCGACTR_inst->Decno)));
 /* line 7615: */
RNDACTR_adjscope((*(&(NL(NFFACTR_current)->Rd))), (*(&(HCGACTR_inst->Level))), (*(&(HCGACTR_inst->Scope))));
 /* line 7616: */
 /* line 7617: */
goto VBGACTR_fnd;
} 
else
{ 
 /* line 7618: */
if ( (LCGACTR_usedlib<2) )
{ 
BCGACTR_r = A_CALLPROC(NL(CXCACTR_hcf),((&(EUFACTR_vss->V))),((&(EUFACTR_vss->V)),(NL(CXCACTR_hcf)).nonlocals));
 /* line 7619: */
 /* line 7620: */
if ( JCGACTR_di )
{ 
 /* line 7621: */
 /* line 7622: */
ZCGACTR = A_CALLPROC(NL(CXCACTR_hcf),((&((*(&(EUFACTR_vss->Rest)))->V))),((&((*(&(EUFACTR_vss->Rest)))->V)),(NL(CXCACTR_hcf)).nonlocals));
} 
else
{ 
ZCGACTR = 0;
} 
ACGACTR_l = ZCGACTR;
 /* line 7623: */
 /* line 7624: */
ADGACTR = ((ECGACTR_op = (*(&(GUFACTR_opstack->Biop))))!=0);
if ( ADGACTR )
{ /* line 7625: */
ADGACTR = A_CALLPROC(NL(VBDACTR_findbiop),((&ACGACTR_l), (&BCGACTR_r), (&GCGACTR_ans), (&ECGACTR_op)),((&ACGACTR_l), (&BCGACTR_r), (&GCGACTR_ans), (&ECGACTR_op),(NL(VBDACTR_findbiop)).nonlocals));
}
if ( ADGACTR )
{ 
 /* line 7626: */
goto VBGACTR_fnd;
} 
 /* line 7629: */
 /* line 7630: */
if ( (LCGACTR_usedlib==0) )
{ 
LCGACTR_usedlib = 2;
 /* line 7631: */
EDGACTR = (*(&(GUFACTR_opstack->Hash))) ;
DDGACTR_ri = (*(&A_VINDEX(NL(MABACTR_libinds),EDGACTR)));
 /* line 7632: */
KCGACTR_libop = A68_TRUE;
 /* line 7633: */
CDGACTR_aa:
for ( ;; )
{ 
 /* line 7634: */
if ( !((DDGACTR_ri!=SQAACTR_nilind)) ) break;
 /* line 7635: */
GDGACTR = (*(&(GUFACTR_opstack->Name))) ;
IDGACTR = (*(&(DDGACTR_ri->Name))) ;
if ( A_VC_EQ(A_HISVEC(FDGACTR,GDGACTR,32,A68_CHAR ),A_HISVEC(HDGACTR,IDGACTR,32,A68_CHAR )) )
{ 
 /* line 7636: */
JDGACTR = (*(&(DDGACTR_ri->U))) ;
switch ( JDGACTR.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE108)  */
KDGACTR_op = (JDGACTR.data.mode1);
 /* line 7637: */
{ 
ICGACTR_inst1 = (*(&(KDGACTR_op->I)));
 /* line 7638: */
 /* line 7639: */
 /* line 7640: */
goto RCGACTR_findop;
} 
break;
default: 
 /* line 7641: */
 /* line 7642: */
goto PCGACTR_notfound;
break;
} 
} 
else
{ 
 /* line 7643: */
 /* line 7644: */
DDGACTR_ri = (*(&(DDGACTR_ri->Rest)));
} 
}
 /* line 7646: */
 /* line 7647: */
if ( (LCGACTR_usedlib==2) )
{ 
LCGACTR_usedlib = 3;
 /* line 7648: */
 /* line 7649: */
MDGACTR = (&(GUFACTR_opstack->Name)) ;
NDGACTR = A_ISVEC(LDGACTR,MDGACTR,32,A68_CHAR ) ;
ODGACTR = 1 ;
PDGACTR = (A68_INT)(unsigned char)(*(&A_VINDEX(NDGACTR,ODGACTR))) ;
ECGACTR_op = (*(&((&A_R1INDEX(NL(Charset),PDGACTR))->Type)));
 /* line 7650: */
 /* line 7651: */
QDGACTR = (ECGACTR_op!=3);
if ( QDGACTR )
{QDGACTR = (ECGACTR_op!=6);
}
 /* line 7652: */
A_CALLPROC((*NL(FFDACTR_bumodule)),((&(GUFACTR_opstack->Name)), (2+(!QDGACTR))),((&(GUFACTR_opstack->Name)), (2+(!QDGACTR)),((*NL(FFDACTR_bumodule))).nonlocals));
 /* line 7653: */
KCGACTR_libop = A68_TRUE;
 /* line 7654: */
RDGACTR = (*(&(GUFACTR_opstack->Hash))) ;
DDGACTR_ri = (*(&A_VINDEX(NL(MABACTR_libinds),RDGACTR)));
 /* line 7655: */
 /* line 7656: */
 /* line 7657: */
 /* line 7658: */
goto CDGACTR_aa;
} 
} 
} 
} 
 /* line 7661: */
PCGACTR_notfound:
 /* line 7662: */
if ( JCGACTR_di )
{ 
 /* line 7663: */
A_CALLPROC(NL(PZBACTR_faultp),(147, CCGACTR_l1, DCGACTR_r1, (&(GUFACTR_opstack->Name))),(147, CCGACTR_l1, DCGACTR_r1, (&(GUFACTR_opstack->Name)),(NL(PZBACTR_faultp)).nonlocals));
} 
else
{ 
 /* line 7664: */
 /* line 7665: */
A_CALLPROC(NL(PZBACTR_faultp),(148, DCGACTR_r1, 0, (&(GUFACTR_opstack->Name))),(148, DCGACTR_r1, 0, (&(GUFACTR_opstack->Name)),(NL(PZBACTR_faultp)).nonlocals));
} 
} 
 /* line 7666: */
XBGACTR_flt:
 /* line 7667: */
if ( JCGACTR_di )
{ 
(*NL(FZAACTR_outlevel))-=1;
} 
 /* line 7668: */
GCGACTR_ans = ZKAACTR_faultmode;
 /* line 7669: */
goto ZBGACTR_anslab;
 /* line 7670: */
VBGACTR_fnd:
 /* line 7671: */
A_CALLPROC(NL(RYCACTR_strong),((&(EUFACTR_vss->V)), BCGACTR_r, A68_TRUE),((&(EUFACTR_vss->V)), BCGACTR_r, A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 7673: */
 /* line 7674: */
if ( JCGACTR_di )
{ 
A_CALLPROC(NL(Output),(QKAACTR_up, (*NL(FZAACTR_outlevel))),(QKAACTR_up, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7675: */
(*NL(FZAACTR_outlevel))-=1;
 /* line 7676: */
A_CALLPROC(NL(RYCACTR_strong),((&((*(&(EUFACTR_vss->Rest)))->V)), ACGACTR_l, A68_TRUE),((&((*(&(EUFACTR_vss->Rest)))->V)), ACGACTR_l, A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 7677: */
 /* line 7678: */
if ( ((-ECGACTR_op)==OIBACTR_booland) )
{ 
 /* line 7679: */
A_CALLPROC(NL(Output),(A_UNITE(SDGACTR,mode16,16,FPAACTR_xwandth), (*NL(FZAACTR_outlevel))),(A_UNITE(SDGACTR,mode16,16,FPAACTR_xwandth), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
else
{ 
 /* line 7680: */
if ( ((-ECGACTR_op)==PIBACTR_boolor) )
{ 
 /* line 7681: */
A_CALLPROC(NL(Output),(A_UNITE(TDGACTR,mode16,16,GPAACTR_xworel), (*NL(FZAACTR_outlevel))),(A_UNITE(TDGACTR,mode16,16,GPAACTR_xworel), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
else
{ 
UDGACTR = ((-ECGACTR_op)>=QIBACTR_minplus);
if ( UDGACTR )
{ /* line 7682: */
UDGACTR = ((-ECGACTR_op)<=RIBACTR_maxdiv);
}
if ( UDGACTR )
{ 
 /* line 7683: */
A_CALLPROC(NL(Output),(A_UNITE(VDGACTR,mode16,16,IPAACTR_xwplusabetc), (*NL(FZAACTR_outlevel))),(A_UNITE(VDGACTR,mode16,16,IPAACTR_xwplusabetc), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
} 
} 
 /* line 7684: */
 /* line 7685: */
A_CALLPROC(NL(Output),(SKAACTR_down, (*NL(FZAACTR_outlevel))),(SKAACTR_down, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 7687: */
 /* line 7688: */
WDGACTR = A_CALLPROC(NL(VECACTR_marker),(GCGACTR_ans),(GCGACTR_ans,(NL(VECACTR_marker)).nonlocals)) ;
if ( (A_ABS(WDGACTR)>=2) )
{ 
 /* line 7689: */
XDGACTR = (&(NL(NFFACTR_current)->Dybits)) ;
(*XDGACTR) = (A68_BITS )((*(&(NL(NFFACTR_current)->Dybits)))|AMAACTR_dyprocbit);
} 
 /* line 7691: */
 /* line 7692: */
if ( (ECGACTR_op<=0) )
{ 
 /* line 7693: */
 /* line 7694: */
if ( JCGACTR_di )
{ 
 /* line 7695: */
YDGACTR.Fn = PMAACTR_xdyop;
} 
else
{ 
YDGACTR.Fn = QMAACTR_xmonop;
} 
YDGACTR.M = GCGACTR_ans;
YDGACTR.Param = (-ECGACTR_op);
 /* line 7696: */
A_CALLPROC(NL(Output),(A_UNITE(ZDGACTR,mode14,14,YDGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(ZDGACTR,mode14,14,YDGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
else
{ 
 /* line 7697: */
AEGACTR = (*NL(XZAACTR_burestrict));
if ( AEGACTR )
{AEGACTR = !KCGACTR_libop;
}
if ( AEGACTR )
{ 
 /* line 7699: */
A_CALLPROC(NL(QJBACTR_fault),(149),(149,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 7700: */
BEGACTR.Fn = HMAACTR_xparampack;
 /* line 7701: */
BEGACTR.M = A_CALLPROC(NL(UXBACTR_opproc),(HCGACTR_inst),(HCGACTR_inst,(NL(UXBACTR_opproc)).nonlocals));
if ( JCGACTR_di )
{ 
BEGACTR.Param = 2;
} 
else
{ 
 /* line 7702: */
BEGACTR.Param = 1;
} 
A_CALLPROC(NL(Output),(A_UNITE(CEGACTR,mode14,14,BEGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(CEGACTR,mode14,14,BEGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7703: */
A_CALLPROC(NL(Output),(A_UNITE(DEGACTR,mode3,3,ECGACTR_op), (*NL(FZAACTR_outlevel))),(A_UNITE(DEGACTR,mode3,3,ECGACTR_op), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7704: */
EEGACTR.Fn = AOAACTR_xcall;
EEGACTR.M = GCGACTR_ans;
EEGACTR.Param = 4;
 /* line 7705: */
A_CALLPROC(NL(Output),(A_UNITE(FEGACTR,mode14,14,EEGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(FEGACTR,mode14,14,EEGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 7706: */
ZBGACTR_anslab:
 /* line 7707: */
if ( JCGACTR_di )
{ 
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
} 
 /* line 7708: */
GEGACTR.Props = MQAACTR_z;
GEGACTR.Mode = GCGACTR_ans;
GEGACTR.Vlist = (A68_124 *)A68_NIL;
GEGACTR.Labs = (A68_69 *)A68_NIL;
HEGACTR = (&(EUFACTR_vss->V)) ;
(*HEGACTR) = GEGACTR;
 /* line 7709: */
 /* line 7710: */
 /* line 7713: */
GUFACTR_opstack = (*(&(GUFACTR_opstack->Rest)));
} 
break;
case 73: 
{ 
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
 /* line 7714: */
 /* line 7715: */
 /* line 7718: */
IEGACTR = (&((&(EUFACTR_vss->V))->Mode)) ;
(*IEGACTR) = ZKAACTR_faultmode;
} 
break;
case 74: 
{ 
A_CALLPROC(NL(RYCACTR_strong),((&(EUFACTR_vss->V)), (*(&(DUFACTR_am->Mode))), A68_TRUE),((&(EUFACTR_vss->V)), (*(&(DUFACTR_am->Mode))), A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 7719: */
 /* line 7720: */
 /* line 7723: */
JEGACTR = (&((&(EUFACTR_vss->V))->Props)) ;
(*JEGACTR) = (A68_BITS )((*(&((&(EUFACTR_vss->V))->Props)))|CRAACTR_assmntbit);
} 
break;
case 75: 
{ 
 /* line 7724: */
if ( ((*NL(GGFACTR_type))==2) )
{ 
 /* line 7726: */
A_CALLPROC(NL(QJBACTR_fault),(150),(150,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 7727: */
 /* line 7728: */
 /* line 7731: */
KEGACTR = (&(DUFACTR_am->Mode)) ;
(*KEGACTR) = A_CALLPROC(NL(JGCACTR_deflex),((*(&(DUFACTR_am->Mode)))),((*(&(DUFACTR_am->Mode))),(NL(JGCACTR_deflex)).nonlocals));
} 
break;
case 76: 
 /* line 7734: */
A_CALLPROC(NL(RYCACTR_strong),((&(EUFACTR_vss->V)), YKAACTR_voidmode, A68_TRUE),((&(EUFACTR_vss->V)), YKAACTR_voidmode, A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
break;
case 77: 
{ 
 /* line 7735: */
if ( ((NUFACTR_m = A_CALLPROC(NL(CXCACTR_hcf),((&(EUFACTR_vss->V))),((&(EUFACTR_vss->V)),(NL(CXCACTR_hcf)).nonlocals)))!=ZKAACTR_faultmode) )
{ 
for ( ;; )
{ 
 /* line 7736: */
if ( !((NUFACTR_m<KQAACTR_refmark)) ) break;
 /* line 7737: */
NEGACTR = (*(&A_VINDEX(NL(KUAACTR_modes),NUFACTR_m))) ;
switch ( NEGACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
OEGACTR_p = (NEGACTR.data.mode6);
 /* line 7738: */
 /* line 7739: */
NUFACTR_m = (*(&(OEGACTR_p->Deproc)));
break;
default: 
A_CALLPROC(NL(QJBACTR_fault),(151),(151,(NL(QJBACTR_fault)).nonlocals));
 /* line 7741: */
PEGACTR = (&((&(EUFACTR_vss->V))->Mode)) ;
(*PEGACTR) = ZKAACTR_faultmode;
 /* line 7742: */
 /* line 7743: */
 /* line 7744: */
goto MEGACTR_l;
break;
} 
}
 /* line 7745: */
} 
 /* line 7746: */
A_CALLPROC(NL(RYCACTR_strong),((&(EUFACTR_vss->V)), NUFACTR_m, A68_TRUE),((&(EUFACTR_vss->V)), NUFACTR_m, A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 7747: */
 /* line 7748: */
QEGACTR = A_CALLPROC(NL(ZFCACTR_assmarker),((NUFACTR_m-KQAACTR_refmark)),((NUFACTR_m-KQAACTR_refmark),(NL(ZFCACTR_assmarker)).nonlocals)) ;
if ( (A_ABS(QEGACTR)<=2) )
{ 
 /* line 7749: */
A_CALLPROC(NL(Output),(A_UNITE(REGACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel))),(A_UNITE(REGACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 7750: */
MEGACTR_l:
 /* line 7751: */
 /* line 7754: */
/*SKIP*/;
} 
break;
case 78: 
{ 
NUFACTR_m = (*(&((&((*(&(EUFACTR_vss->Rest)))->V))->Mode)));
 /* line 7755: */
 /* line 7756: */
if ( (NUFACTR_m!=ZKAACTR_faultmode) )
{ 
A_CALLPROC(NL(RYCACTR_strong),((&(EUFACTR_vss->V)), A_CALLPROC(NL(JGCACTR_deflex),(NUFACTR_m-=KQAACTR_refmark),(NUFACTR_m-=KQAACTR_refmark,(NL(JGCACTR_deflex)).nonlocals)), A68_TRUE),((&(EUFACTR_vss->V)), A_CALLPROC(NL(JGCACTR_deflex),(NUFACTR_m-=KQAACTR_refmark),(NUFACTR_m-=KQAACTR_refmark,(NL(JGCACTR_deflex)).nonlocals)), A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 7757: */
 /* line 7758: */
A_CALLPROC(NL(VCEACTR_assign),(NUFACTR_m),(NUFACTR_m,(NL(VCEACTR_assign)).nonlocals));
} 
 /* line 7759: */
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
 /* line 7760: */
 /* line 7761: */
 /* line 7764: */
SEGACTR = (&((&(EUFACTR_vss->V))->Props)) ;
(*SEGACTR) = (A68_BITS )((*(&((&(EUFACTR_vss->V))->Props)))|CRAACTR_assmntbit);
} 
break;
case 79: 
TEGACTR.Name = (*NL(PSAACTR_ident));
TEGACTR.Rest = SUFACTR_selstack;
 /* line 7767: */
UEGACTR = A_LOC(A68_130 ) ;
(*UEGACTR) = TEGACTR ;
SUFACTR_selstack = UEGACTR;
break;
case 80: 
{ 
A_CALLPROC(NL(OBDACTR_weak),((&(EUFACTR_vss->V))),((&(EUFACTR_vss->V)),(NL(OBDACTR_weak)).nonlocals));
 /* line 7768: */
 /* line 7769: */
if ( ((NUFACTR_m = (*(&((&(EUFACTR_vss->V))->Mode))))!=ZKAACTR_faultmode) )
{ 
OUFACTR_n = 0;
 /* line 7770: */
VUFACTR_qref = (A68_INT )(A68_BITS )((A68_BITS )NUFACTR_m&(A68_BITS )KQAACTR_refmark);
 /* line 7771: */
NUFACTR_m = (A68_INT )(A68_BITS )((A68_BITS )NUFACTR_m&LQAACTR_decsmask);
 /* line 7773: */
 /* line 7774: */
VEGACTR = (*(&A_VINDEX(NL(KUAACTR_modes),NUFACTR_m))) ;
switch ( VEGACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
WEGACTR_a = (VEGACTR.data.mode8);
 /* line 7775: */
{ 
NUFACTR_m = (*(&(WEGACTR_a->Mode)));
 /* line 7776: */
OUFACTR_n = (*(&(WEGACTR_a->Nods)));
 /* line 7777: */
 /* line 7778: */
XEGACTR = (OUFACTR_n-1);
for ( YEGACTR = 1;
YEGACTR <= XEGACTR;
YEGACTR += 1 )
{ 
 /* line 7779: */
ZEGACTR = (*(&A_VINDEX(NL(KUAACTR_modes),NUFACTR_m))) ;
switch ( ZEGACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
AFGACTR_a1 = (ZEGACTR.data.mode8);
 /* line 7780: */
 /* line 7781: */
 /* line 7782: */
NUFACTR_m = (*(&(AFGACTR_a1->Mode)));
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 7783: */
 /* line 7784: */
 /* line 7785: */
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 7787: */
 /* line 7788: */
BFGACTR = (*(&A_VINDEX(NL(KUAACTR_modes),NUFACTR_m))) ;
switch ( BFGACTR.mode )
{ 
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
CFGACTR_s = (BFGACTR.data.mode4);
 /* line 7789: */
{ 
DFGACTR_sels = (*(&(CFGACTR_s->Sels)));
 /* line 7790: */
EFGACTR_found = A68_FALSE;
 /* line 7791: */
 /* line 7792: */
for ( FFGACTR_j = 1;;
FFGACTR_j += 1 ) 
{ 
 /* line 7793: */
GFGACTR = (DFGACTR_sels!=RQAACTR_nilsel);
if ( GFGACTR )
{GFGACTR = !EFGACTR_found;
}
if ( !(GFGACTR) ) break;
 /* line 7794: */
IFGACTR = (*(&(DFGACTR_sels->Name))) ;
KFGACTR = (*(&(SUFACTR_selstack->Name))) ;
if ( A_VC_EQ(A_HISVEC(HFGACTR,IFGACTR,32,A68_CHAR ),A_HISVEC(JFGACTR,KFGACTR,32,A68_CHAR )) )
{ 
TUFACTR_i = FFGACTR_j;
 /* line 7795: */
NUFACTR_m = (*(&(DFGACTR_sels->Mode)));
 /* line 7796: */
EFGACTR_found = A68_TRUE;
 /* line 7797: */
 /* line 7798: */
MFGACTR = OUFACTR_n;
for ( LFGACTR_nods = 1;
LFGACTR_nods <= MFGACTR;
LFGACTR_nods += 1 )
{ 
NUFACTR_m = A_CALLPROC(NL(FVBACTR_insertarray),(NUFACTR_m, LFGACTR_nods, 1),(NUFACTR_m, LFGACTR_nods, 1,(NL(FVBACTR_insertarray)).nonlocals));
}
 /* line 7799: */
NFGACTR.Fn = IMAACTR_xselect;
NFGACTR.M = NUFACTR_m+=VUFACTR_qref;
NFGACTR.Param = TUFACTR_i;
 /* line 7800: */
 /* line 7801: */
A_CALLPROC(NL(Output),(A_UNITE(OFGACTR,mode14,14,NFGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(OFGACTR,mode14,14,NFGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
else
{ 
 /* line 7802: */
 /* line 7803: */
DFGACTR_sels = (*(&(DFGACTR_sels->Rest)));
} 
}
 /* line 7804: */
 /* line 7805: */
if ( !EFGACTR_found )
{ 
A_CALLPROC(NL(PZBACTR_faultp),(152, 0, 0, (&(SUFACTR_selstack->Name))),(152, 0, 0, (&(SUFACTR_selstack->Name)),(NL(PZBACTR_faultp)).nonlocals));
 /* line 7807: */
 /* line 7808: */
 /* line 7809: */
 /* line 7810: */
NUFACTR_m = ZKAACTR_faultmode;
} 
} 
break;
default: 
A_CALLPROC(NL(PZBACTR_faultp),(153, (*(&((&(EUFACTR_vss->V))->Mode))), 0, (A68_31 *)A68_NIL),(153, (*(&((&(EUFACTR_vss->V))->Mode))), 0, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
 /* line 7812: */
 /* line 7813: */
NUFACTR_m = ZKAACTR_faultmode;
break;
} 
 /* line 7815: */
PFGACTR.Props = MQAACTR_z;
PFGACTR.Mode = NUFACTR_m;
PFGACTR.Vlist = (A68_124 *)A68_NIL;
 /* line 7816: */
PFGACTR.Labs = (A68_69 *)A68_NIL;
QFGACTR = (&(EUFACTR_vss->V)) ;
(*QFGACTR) = PFGACTR;
} 
 /* line 7817: */
 /* line 7818: */
 /* line 7821: */
SUFACTR_selstack = (*(&(SUFACTR_selstack->Rest)));
} 
break;
case 81: 
{ 
A_CALLPROC(NL(RYCACTR_strong),((&(EUFACTR_vss->V)), ELAACTR_int, A68_TRUE),((&(EUFACTR_vss->V)), ELAACTR_int, A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 7822: */
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
 /* line 7823: */
 /* line 7824: */
 /* line 7827: */
RFGACTR = (&(WUFACTR_indstack->Noofinds)) ;
(*RFGACTR)+=1;
} 
break;
case 82: 
{ 
A_CALLPROC(NL(RYCACTR_strong),((&(EUFACTR_vss->V)), ELAACTR_int, A68_TRUE),((&(EUFACTR_vss->V)), ELAACTR_int, A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 7828: */
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
 /* line 7829: */
 /* line 7830: */
 /* line 7833: */
SFGACTR = (&(WUFACTR_indstack->Bits)) ;
(*SFGACTR) = (A68_BITS )((*(&(WUFACTR_indstack->Bits)))|(A68_BITS )9);
} 
break;
case 83: 
{ 
A_CALLPROC(NL(RYCACTR_strong),((&(EUFACTR_vss->V)), ELAACTR_int, A68_TRUE),((&(EUFACTR_vss->V)), ELAACTR_int, A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 7834: */
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
 /* line 7835: */
 /* line 7836: */
 /* line 7839: */
TFGACTR = (&(WUFACTR_indstack->Bits)) ;
(*TFGACTR) = (A68_BITS )((*(&(WUFACTR_indstack->Bits)))|(A68_BITS )10);
} 
break;
case 84: 
{ 
A_CALLPROC(NL(RYCACTR_strong),((&(EUFACTR_vss->V)), ELAACTR_int, A68_TRUE),((&(EUFACTR_vss->V)), ELAACTR_int, A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 7840: */
EUFACTR_vss = (*(&(EUFACTR_vss->Rest)));
 /* line 7841: */
UFGACTR = (&(WUFACTR_indstack->Bits)) ;
(*UFGACTR) = (A68_BITS )((*(&(WUFACTR_indstack->Bits)))|(A68_BITS )12);
 /* line 7842: */
 /* line 7843: */
 /* line 7846: */
VFGACTR = (&(WUFACTR_indstack->Vector)) ;
(*VFGACTR) = A68_FALSE;
} 
break;
case 85: 
 /* line 7849: */
WFGACTR = (&(WUFACTR_indstack->Bits)) ;
(*WFGACTR) = (A68_BITS )((*(&(WUFACTR_indstack->Bits)))|(A68_BITS )8);
break;
case 86: 
{ 
XFGACTR = (&(WUFACTR_indstack->Nooftrims)) ;
(*XFGACTR)+=1;
 /* line 7850: */
YFGACTR_bi = (*(&(WUFACTR_indstack->Bits)));
 /* line 7851: */
UUFACTR_j = (A_LB_GE(YFGACTR_bi,NQAACTR_z1));
 /* line 7852: */
ZFGACTR = (A68_BITS )2 ;
if ( A_LB_GE(YFGACTR_bi,ZFGACTR) )
{ 
UUFACTR_j+=1;
} 
 /* line 7853: */
AGGACTR = (A68_BITS )4 ;
if ( A_LB_GE(YFGACTR_bi,AGGACTR) )
{ 
UUFACTR_j+=1;
} 
 /* line 7854: */
BGGACTR.Fn = KMAACTR_xtrim;
BGGACTR.M = (A68_INT )YFGACTR_bi;
BGGACTR.Param = UUFACTR_j;
A_CALLPROC(NL(Output),(A_UNITE(CGGACTR,mode14,14,BGGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(CGGACTR,mode14,14,BGGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7855: */
 /* line 7856: */
 /* line 7859: */
DGGACTR = (&(WUFACTR_indstack->Bits)) ;
(*DGGACTR) = MQAACTR_z;
} 
break;
case 87: 
{ 
EGGACTR.Noofinds = 0;
EGGACTR.Nooftrims = 0;
EGGACTR.Vector = A68_TRUE;
EGGACTR.Bits = MQAACTR_z;
EGGACTR.Rest = WUFACTR_indstack;
FGGACTR = A_LOC(A68_131 ) ;
(*FGGACTR) = EGGACTR ;
WUFACTR_indstack = FGGACTR;
 /* line 7860: */
A_CALLPROC(NL(OBDACTR_weak),((&(EUFACTR_vss->V))),((&(EUFACTR_vss->V)),(NL(OBDACTR_weak)).nonlocals));
 /* line 7861: */
 /* line 7862: */
if ( ((NUFACTR_m = (*(&((&(EUFACTR_vss->V))->Mode))))!=ZKAACTR_faultmode) )
{ 
 /* line 7863: */
GGGACTR = (A68_INT )(A68_BITS )((A68_BITS )NUFACTR_m&LQAACTR_decsmask) ;
HGGACTR = (*(&A_VINDEX(NL(KUAACTR_modes),GGGACTR))) ;
switch ( HGGACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
IGGACTR_a = (HGGACTR.data.mode8);
 /* line 7864: */
 /* line 7865: */
JGGACTR = (&(WUFACTR_indstack->Vector)) ;
(*JGGACTR) = A68_FALSE;
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
KGGACTR_v1 = (HGGACTR.data.mode7);
 /* line 7866: */
 /* line 7867: */
/*SKIP*/;
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
LGGACTR_is = (HGGACTR.data.mode5);
 /* line 7868: */
 /* line 7869: */
 /* line 7870: */
 /* line 7871: */
 /* line 7872: */
 /* line 7873: */
A_CALLPROC(NL(OSCACTR_coerce),((&(EUFACTR_vss->V)), NUFACTR_m, (A_CALLPROC(NL(ZVBACTR_insertvec),((*(&(LGGACTR_is->Imode))), 1),((*(&(LGGACTR_is->Imode))), 1,(NL(ZVBACTR_insertvec)).nonlocals))+(A68_INT )(A68_BITS )((A68_BITS )NUFACTR_m&(A68_BITS )KQAACTR_refmark)), ISCACTR_all, A68_TRUE),((&(EUFACTR_vss->V)), NUFACTR_m, (A_CALLPROC(NL(ZVBACTR_insertvec),((*(&(LGGACTR_is->Imode))), 1),((*(&(LGGACTR_is->Imode))), 1,(NL(ZVBACTR_insertvec)).nonlocals))+(A68_INT )(A68_BITS )((A68_BITS )NUFACTR_m&(A68_BITS )KQAACTR_refmark)), ISCACTR_all, A68_TRUE,(NL(OSCACTR_coerce)).nonlocals));
break;
case 9: /* REF STRUCT(INT,REF MODE63)  */
MGGACTR_rs = (HGGACTR.data.mode9);
 /* line 7874: */
 /* line 7875: */
if ( (NUFACTR_m>KQAACTR_refmark) )
{ 
 /* line 7876: */
 /* line 7877: */
A_CALLPROC(NL(EJCACTR_deref),((&(EUFACTR_vss->V))),((&(EUFACTR_vss->V)),(NL(EJCACTR_deref)).nonlocals));
} 
break;
default: 
A_CALLPROC(NL(PZBACTR_faultp),(155, NUFACTR_m, 0, (A68_31 *)A68_NIL),(155, NUFACTR_m, 0, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
 /* line 7879: */
 /* line 7880: */
 /* line 7881: */
NGGACTR = (&((&(EUFACTR_vss->V))->Mode)) ;
(*NGGACTR) = ZKAACTR_faultmode;
break;
} 
} 
 /* line 7882: */
if ( ((*NL(MFBACTR_t1))==59) )
{ 
OGGACTR = A_UNITE(PGGACTR,mode16,16,HPAACTR_xwindex);
} 
else
{ 
OGGACTR = A_UNITE(QGGACTR,mode16,16,JPAACTR_xwforall);
} 
 /* line 7883: */
 /* line 7886: */
A_CALLPROC(NL(Output),(OGGACTR, (*NL(FZAACTR_outlevel))),(OGGACTR, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 88: 
{ 
NUFACTR_m = (*(&((&(EUFACTR_vss->V))->Mode)));
 /* line 7887: */
OUFACTR_n = LMAACTR_xsimpleindex;
 /* line 7888: */
 /* line 7889: */
if ( (NUFACTR_m!=ZKAACTR_faultmode) )
{ 
VUFACTR_qref = (A68_INT )(A68_BITS )((A68_BITS )NUFACTR_m&(A68_BITS )KQAACTR_refmark);
 /* line 7890: */
NUFACTR_m = (A68_INT )(A68_BITS )((A68_BITS )NUFACTR_m&LQAACTR_decsmask);
 /* line 7891: */
TUFACTR_i = (*(&(WUFACTR_indstack->Noofinds)));
 /* line 7892: */
UUFACTR_j = (*(&(WUFACTR_indstack->Nooftrims)));
 /* line 7893: */
 /* line 7894: */
RGGACTR = (*(&A_VINDEX(NL(KUAACTR_modes),NUFACTR_m))) ;
switch ( RGGACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
SGGACTR_a = (RGGACTR.data.mode8);
 /* line 7895: */
 /* line 7896: */
if ( ((*(&(SGGACTR_a->Nods)))!=(TUFACTR_i+UUFACTR_j)) )
{ 
A_CALLPROC(NL(QJBACTR_fault),(156),(156,(NL(QJBACTR_fault)).nonlocals));
 /* line 7898: */
 /* line 7899: */
NUFACTR_m = ZKAACTR_faultmode;
} 
else
{ 
TGGACTR = (TUFACTR_i==0);
if ( TGGACTR )
{ /* line 7900: */
TGGACTR = ((*(&(SGGACTR_a->Deflex)))<0);
}
if ( TGGACTR )
{ 
 /* line 7901: */
 /* line 7902: */
NUFACTR_m = (A_CALLPROC(NL(FVBACTR_insertarray),((*(&(SGGACTR_a->Mode))), (*(&(SGGACTR_a->Nods))), 1),((*(&(SGGACTR_a->Mode))), (*(&(SGGACTR_a->Nods))), 1,(NL(FVBACTR_insertarray)).nonlocals))+VUFACTR_qref);
} 
else
{ 
 /* line 7903: */
UGGACTR = TUFACTR_i;
for ( VGGACTR = 1;
VGGACTR <= UGGACTR;
VGGACTR += 1 )
{ 
 /* line 7904: */
WGGACTR = (*(&A_VINDEX(NL(KUAACTR_modes),NUFACTR_m))) ;
switch ( WGGACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
XGGACTR_a1 = (WGGACTR.data.mode8);
 /* line 7905: */
 /* line 7906: */
 /* line 7907: */
NUFACTR_m = (*(&(XGGACTR_a1->Mode)));
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 7908: */
 /* line 7909: */
 /* line 7910: */
NUFACTR_m+=VUFACTR_qref;
} 
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
YGGACTR_v1 = (RGGACTR.data.mode7);
 /* line 7911: */
 /* line 7912: */
if ( ((TUFACTR_i+UUFACTR_j)!=1) )
{ 
A_CALLPROC(NL(QJBACTR_fault),(157),(157,(NL(QJBACTR_fault)).nonlocals));
 /* line 7914: */
 /* line 7915: */
 /* line 7916: */
NUFACTR_m = ZKAACTR_faultmode;
} 
else
{ 
if ( !(*(&(WUFACTR_indstack->Vector))) )
{ 
 /* line 7917: */
NUFACTR_m = (A_CALLPROC(NL(FVBACTR_insertarray),((*(&(YGGACTR_v1->Vecmode))), 1, 1),((*(&(YGGACTR_v1->Vecmode))), 1, 1,(NL(FVBACTR_insertarray)).nonlocals))+VUFACTR_qref);
} 
else
{ 
ZGGACTR = (TUFACTR_i==0);
if ( ZGGACTR )
{ /* line 7918: */
ZGGACTR = ((*(&(YGGACTR_v1->Deflex)))<0);
}
if ( ZGGACTR )
{ 
 /* line 7919: */
NUFACTR_m = (A_CALLPROC(NL(ZVBACTR_insertvec),((*(&(YGGACTR_v1->Vecmode))), 1),((*(&(YGGACTR_v1->Vecmode))), 1,(NL(ZVBACTR_insertvec)).nonlocals))+VUFACTR_qref);
} 
else
{ 
 /* line 7920: */
 /* line 7921: */
if ( (TUFACTR_i==0) )
{ 
 /* line 7922: */
AHGACTR = NUFACTR_m;
} 
else
{ 
 /* line 7923: */
AHGACTR = (*(&(YGGACTR_v1->Vecmode)));
} 
 /* line 7924: */
NUFACTR_m = (AHGACTR+VUFACTR_qref);
} 
} 
} 
break;
case 9: /* REF STRUCT(INT,REF MODE63)  */
BHGACTR_rs = (RGGACTR.data.mode9);
 /* line 7925: */
CHGACTR = (UUFACTR_j!=0);
if ( ! CHGACTR )
{ /* line 7926: */
CHGACTR = (TUFACTR_i!=1);
}
if ( CHGACTR )
{ 
A_CALLPROC(NL(QJBACTR_fault),(158),(158,(NL(QJBACTR_fault)).nonlocals));
 /* line 7928: */
 /* line 7929: */
NUFACTR_m = ZKAACTR_faultmode;
} 
else
{ 
NUFACTR_m = (*(&(BHGACTR_rs->Mode)));
 /* line 7930: */
 /* line 7931: */
 /* line 7932: */
OUFACTR_n = TMAACTR_xstrindex;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 7934: */
 /* line 7935: */
 /* line 7936: */
if ( (UUFACTR_j==0) )
{ 
 /* line 7937: */
DHGACTR.Fn = OUFACTR_n;
} 
else
{ 
DHGACTR.Fn = MMAACTR_xtrimindex;
} 
DHGACTR.M = NUFACTR_m;
DHGACTR.Param = (TUFACTR_i+UUFACTR_j);
A_CALLPROC(NL(Output),(A_UNITE(EHGACTR,mode14,14,DHGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(EHGACTR,mode14,14,DHGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7938: */
FHGACTR.Props = MQAACTR_z;
FHGACTR.Mode = NUFACTR_m;
FHGACTR.Vlist = (A68_124 *)A68_NIL;
 /* line 7939: */
FHGACTR.Labs = (A68_69 *)A68_NIL;
GHGACTR = (&(EUFACTR_vss->V)) ;
(*GHGACTR) = FHGACTR;
} 
 /* line 7940: */
 /* line 7941: */
 /* line 7944: */
WUFACTR_indstack = (*(&(WUFACTR_indstack->Rest)));
} 
break;
case 89: 
 /* line 7947: */
(*KUFACTR_v) = (*NL(RYAACTR_enqv));
break;
case 90: 
{ 
A_CALLPROC(NL(NYBACTR_heapvalue),(KUFACTR_v),(KUFACTR_v,(NL(NYBACTR_heapvalue)).nonlocals));
 /* line 7948: */
 /* line 7949: */
 /* line 7952: */
goto CUFACTR_exituc;
} 
break;
case 91: 
{ 
HHGACTR = A_LOC(A68_52 ) ;
(*HHGACTR) = (*NL(DEBACTR_lkscam)) ;
DUFACTR_am = HHGACTR;
 /* line 7953: */
 /* line 7954: */
 /* line 7957: */
(*NL(GGFACTR_type)) = (*NL(CEBACTR_lktype));
} 
break;
case 92: 
 /* line 7958: */
if ( ((*NL(MFBACTR_t1))==24) )
{ 
(*NL(MFBACTR_t1)) = 90;
 /* line 7959: */
IHGACTR = (&(NL(FHFACTR_xcharpos)->Charpos)) ;
(*IHGACTR) = (*NL(LSAACTR_tind));
 /* line 7960: */
A_CALLPROC(NL(Output),(A_UNITE(JHGACTR,mode15,15,(*NL(FHFACTR_xcharpos))), (*NL(FZAACTR_outlevel))),(A_UNITE(JHGACTR,mode15,15,(*NL(FHFACTR_xcharpos))), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7961: */
 /* line 7962: */
 /* line 7965: */
A_CALLPROC(NL(PQFACTR_lookahead),(),((NL(PQFACTR_lookahead)).nonlocals));
} 
break;
default: 
 /* line 7967: */
 /* line 7968: */
A_CALLPROC(NL(VJBACTR_abort),(207),(207,(NL(VJBACTR_abort)).nonlocals));
break;
} 
}
 /* line 7970: */
CUFACTR_exituc:
 /* line 7971: */
KHGACTR = (&(NL(FHFACTR_xcharpos)->Charpos)) ;
(*KHGACTR) = (*NL(LSAACTR_tind));
 /* line 7972: */
A_CALLPROC(NL(Output),(A_UNITE(LHGACTR,mode15,15,(*NL(FHFACTR_xcharpos))), (*NL(FZAACTR_outlevel))),(A_UNITE(LHGACTR,mode15,15,(*NL(FHFACTR_xcharpos))), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 7973: */
 /* line 7974: */
MHGACTR = (*KUFACTR_v);
} 
A_PROC_EXIT(uc);
*ReturnedValue = (MHGACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GJGACTR_generator(A68_BOOL  EJGACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HJGACTR_generator *)NonLocals)->x)
{ 
A68_VC  IJGACTR;  /* clause result */
A68_VC  JJGACTR;  /* OPERATORS - dynamic generator */
A68_100  KJGACTR;  /* OPERATORS - nil -> mode */
A68_100  LJGACTR;  /* OPERATORS - nil -> mode */
A68_VC  MJGACTR;  /* OPERATORS - nil -> mode */
{ 
JJGACTR.upb = A_CALLPROC(NL(NYEACTR_makekeepinfo),((*NL(LZAACTR_kl)), A68_FALSE, A_VVAC(MJGACTR), A_VVAC(LJGACTR), A_VVAC(KJGACTR)),((*NL(LZAACTR_kl)), A68_FALSE, A_VVAC(MJGACTR), A_VVAC(LJGACTR), A_VVAC(KJGACTR),(NL(NYEACTR_makekeepinfo)).nonlocals)) ;
( EJGACTR_anonymous? A_VLOC(A68_CHAR ,JJGACTR): A_VHEAP(A68_CHAR ,JJGACTR) );
IJGACTR = JJGACTR;
} 
*ReturnedValue = (IJGACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RJGACTR_generator(A68_BOOL  PJGACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals)
#define NL(x) (((SJGACTR_generator *)NonLocals)->x)
{ 
A68_100  TJGACTR;  /* clause result */
A68_100  UJGACTR;  /* OPERATORS - dynamic generator */
{ 
UJGACTR.upb = (*NL(QSAACTR_compsize)) ;
( PJGACTR_anonymous? A_VLOC(A68_INT ,UJGACTR): A_VHEAP(A68_INT ,UJGACTR) );
TJGACTR = UJGACTR;
} 
*ReturnedValue = (TJGACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MMGACTR_generator(A68_BOOL  KMGACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NMGACTR_generator *)NonLocals)->x)
{ 
A68_VC  OMGACTR;  /* clause result */
A68_VC  PMGACTR;  /* OPERATORS - dynamic generator */
A68_100  QMGACTR;  /* OPERATORS - nil -> mode */
A68_100  RMGACTR;  /* OPERATORS - nil -> mode */
A68_VC  SMGACTR;  /* OPERATORS - nil -> mode */
{ 
PMGACTR.upb = A_CALLPROC(NL(NYEACTR_makekeepinfo),((*NL(LZAACTR_kl)), A68_FALSE, A_VVAC(SMGACTR), A_VVAC(RMGACTR), A_VVAC(QMGACTR)),((*NL(LZAACTR_kl)), A68_FALSE, A_VVAC(SMGACTR), A_VVAC(RMGACTR), A_VVAC(QMGACTR),(NL(NYEACTR_makekeepinfo)).nonlocals)) ;
( KMGACTR_anonymous? A_VLOC(A68_CHAR ,PMGACTR): A_VHEAP(A68_CHAR ,PMGACTR) );
OMGACTR = PMGACTR;
} 
*ReturnedValue = (OMGACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XMGACTR_generator(A68_BOOL  VMGACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals)
#define NL(x) (((YMGACTR_generator *)NonLocals)->x)
{ 
A68_100  ZMGACTR;  /* clause result */
A68_100  ANGACTR;  /* OPERATORS - dynamic generator */
{ 
ANGACTR.upb = (*NL(QSAACTR_compsize)) ;
( VMGACTR_anonymous? A_VLOC(A68_INT ,ANGACTR): A_VHEAP(A68_INT ,ANGACTR) );
ZMGACTR = ANGACTR;
} 
*ReturnedValue = (ZMGACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VNGACTR_generator(A68_BOOL  TNGACTR_anonymous, A68_128  *ReturnedValue, void *NonLocals)
#define NL(x) (((WNGACTR_generator *)NonLocals)->x)
{ 
A68_128  XNGACTR;  /* clause result */
A68_128  YNGACTR;  /* OPERATORS - dynamic generator */
{ 
YNGACTR.upb = 64 ;
( TNGACTR_anonymous? A_VLOC(A68_110 *,YNGACTR): A_VHEAP(A68_110 *,YNGACTR) );
XNGACTR = YNGACTR;
} 
*ReturnedValue = (XNGACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TQGACTR_generator(A68_BOOL  RQGACTR_anonymous, A68_128  *ReturnedValue, void *NonLocals)
#define NL(x) (((UQGACTR_generator *)NonLocals)->x)
{ 
A68_128  VQGACTR;  /* clause result */
A68_128  WQGACTR;  /* OPERATORS - dynamic generator */
{ 
WQGACTR.upb = 64 ;
( RQGACTR_anonymous? A_VLOC(A68_110 *,WQGACTR): A_VHEAP(A68_110 *,WQGACTR) );
VQGACTR = WQGACTR;
} 
*ReturnedValue = (VQGACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WVGACTR_generator(A68_BOOL  UVGACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals)
#define NL(x) (((XVGACTR_generator *)NonLocals)->x)
{ 
A68_127  YVGACTR;  /* clause result */
A68_127  ZVGACTR;  /* OPERATORS - dynamic generator */
{ 
 /* line 8760: */
ZVGACTR.upb = 64 ;
( UVGACTR_anonymous? A_VLOC(A68_67 *,ZVGACTR): A_VHEAP(A68_67 *,ZVGACTR) );
YVGACTR = ZVGACTR;
} 
*ReturnedValue = (YVGACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DSAACTR_generator(A68_BOOL  BSAACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ESAACTR_generator *)NonLocals)->x)
{ 
A68_VC  FSAACTR;  /* clause result */
A68_VC  GSAACTR;  /* OPERATORS - dynamic generator */
{ 
GSAACTR.upb = (KKAACTR_linesize+1) ;
( BSAACTR_anonymous? A_VLOC(A68_CHAR ,GSAACTR): A_VHEAP(A68_CHAR ,GSAACTR) );
FSAACTR = GSAACTR;
} 
*ReturnedValue = (FSAACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WSAACTR_generator(A68_BOOL  USAACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XSAACTR_generator *)NonLocals)->x)
{ 
A68_VC  YSAACTR;  /* clause result */
A68_VC  ZSAACTR;  /* OPERATORS - dynamic generator */
{ 
ZSAACTR.upb = KKAACTR_linesize ;
( USAACTR_anonymous? A_VLOC(A68_CHAR ,ZSAACTR): A_VHEAP(A68_CHAR ,ZSAACTR) );
YSAACTR = ZSAACTR;
} 
*ReturnedValue = (YSAACTR);
return;
} 
#undef NL

A_STATIC A68_31  LTAACTR_idmess(A68_INT  M, void *NonLocals)
#define NL(x) (((MTAACTR_idmess *)NonLocals)->x)
{ 
A68_VC  NTAACTR;  /* avoid structure result */
A68_VC  OTAACTR_rc;
A68_31  PTAACTR_id;
A68_INT  QTAACTR_i;
A68_INT  RTAACTR;  /* to part of loop */
A68_CHAR  STAACTR;  /* clause result */
A68_VC  TTAACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UTAACTR;  /* OPERATORS - simple index */
A68_CHAR * VTAACTR;  /* YIELD */
A68_31  WTAACTR;  /* clause result */
A_PROC_ENTRY(idmess);
 /* line 668: */
{ 
A_CALLPROC(NL(Message),(M, &NTAACTR),(M, &NTAACTR,(NL(Message)).nonlocals));
OTAACTR_rc = NTAACTR;
 /* line 669: */
 /* line 670: */
 /* line 671: */
RTAACTR = VDAACTR_maxid;
for ( QTAACTR_i = 1;
QTAACTR_i <= RTAACTR;
QTAACTR_i += 1 )
{ 
 /* line 672: */
 /* line 673: */
if ( (QTAACTR_i>OTAACTR_rc.upb) )
{ 
STAACTR = ' ';
} 
else
{ 
 /* line 674: */
 /* line 675: */
STAACTR = A_VINDEX(OTAACTR_rc,QTAACTR_i);
} 
UTAACTR = A_ISVEC(TTAACTR,(&PTAACTR_id),32,A68_CHAR ) ;
VTAACTR = (&A_VINDEX(UTAACTR,QTAACTR_i)) ;
(*VTAACTR) = STAACTR;
}
 /* line 676: */
 /* line 677: */
WTAACTR = PTAACTR_id;
} 
A_PROC_EXIT(idmess);
return( WTAACTR );
} 
#undef NL

A_STATIC A68_VOID  GUAACTR_generator(A68_BOOL  EUAACTR_anonymous, A68_107  *ReturnedValue, void *NonLocals)
#define NL(x) (((HUAACTR_generator *)NonLocals)->x)
{ 
A68_107  IUAACTR;  /* clause result */
A68_107  JUAACTR;  /* OPERATORS - dynamic generator */
{ 
JUAACTR.upb = TDAACTR_upbofmodes ;
( EUAACTR_anonymous? A_VLOC(A68_66 ,JUAACTR): A_VHEAP(A68_66 ,JUAACTR) );
IUAACTR = JUAACTR;
} 
*ReturnedValue = (IUAACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PUAACTR_generator(A68_BOOL  NUAACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals)
#define NL(x) (((QUAACTR_generator *)NonLocals)->x)
{ 
A68_127  RUAACTR;  /* clause result */
A68_127  SUAACTR;  /* OPERATORS - dynamic generator */
{ 
SUAACTR.upb = 64 ;
( NUAACTR_anonymous? A_VLOC(A68_67 *,SUAACTR): A_VHEAP(A68_67 *,SUAACTR) );
RUAACTR = SUAACTR;
} 
*ReturnedValue = (RUAACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WUAACTR_generator(A68_BOOL  UUAACTR_anonymous, A68_128  *ReturnedValue, void *NonLocals)
#define NL(x) (((XUAACTR_generator *)NonLocals)->x)
{ 
A68_128  YUAACTR;  /* clause result */
A68_128  ZUAACTR;  /* OPERATORS - dynamic generator */
{ 
ZUAACTR.upb = 64 ;
( UUAACTR_anonymous? A_VLOC(A68_110 *,ZUAACTR): A_VHEAP(A68_110 *,ZUAACTR) );
YUAACTR = ZUAACTR;
} 
*ReturnedValue = (YUAACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AABACTR_generator(A68_BOOL  YZAACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals)
#define NL(x) (((BABACTR_generator *)NonLocals)->x)
{ 
A68_127  CABACTR;  /* clause result */
A68_127  DABACTR;  /* OPERATORS - dynamic generator */
{ 
DABACTR.upb = 64 ;
( YZAACTR_anonymous? A_VLOC(A68_67 *,DABACTR): A_VHEAP(A68_67 *,DABACTR) );
CABACTR = DABACTR;
} 
*ReturnedValue = (CABACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IABACTR_generator(A68_BOOL  GABACTR_anonymous, A68_128  *ReturnedValue, void *NonLocals)
#define NL(x) (((JABACTR_generator *)NonLocals)->x)
{ 
A68_128  KABACTR;  /* clause result */
A68_128  LABACTR;  /* OPERATORS - dynamic generator */
{ 
LABACTR.upb = 64 ;
( GABACTR_anonymous? A_VLOC(A68_110 *,LABACTR): A_VHEAP(A68_110 *,LABACTR) );
KABACTR = LABACTR;
} 
*ReturnedValue = (KABACTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  VABACTR_(A68_42 * L, A68_42 * R)
{ 
A68_VC  WABACTR;  /* OPERATORS - istruct -> vector */
A68_31  XABACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YABACTR;  /* OPERATORS - istruct -> vector */
A68_31  ZABACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  ABBACTR;  /* optbool result */
A68_VC  BBBACTR;  /* OPERATORS - istruct -> vector */
A68_31  CBBACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DBBACTR;  /* OPERATORS - istruct -> vector */
A68_31  EBBACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  FBBACTR;  /* clause result */
A_PROC_ENTRY(/=);
 /* line 753: */
XABACTR = (*(&(L->N))) ;
ZABACTR = (*(&(R->N))) ;
ABBACTR = A_VC_NE(A_HISVEC(WABACTR,XABACTR,32,A68_CHAR ),A_HISVEC(YABACTR,ZABACTR,32,A68_CHAR ));
if ( ! ABBACTR )
{CBBACTR = (*(&(L->F))) ;
EBBACTR = (*(&(R->F))) ;
ABBACTR = A_VC_NE(A_HISVEC(BBBACTR,CBBACTR,32,A68_CHAR ),A_HISVEC(DBBACTR,EBBACTR,32,A68_CHAR ));
}
FBBACTR = ABBACTR;
A_PROC_EXIT(/=);
return( FBBACTR );
} 
#undef NL

A_STATIC A68_VOID  PBBACTR_generator(A68_BOOL  NBBACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals)
#define NL(x) (((QBBACTR_generator *)NonLocals)->x)
{ 
A68_100  RBBACTR;  /* clause result */
A68_100  SBBACTR;  /* OPERATORS - dynamic generator */
{ 
SBBACTR.upb = 64 ;
( NBBACTR_anonymous? A_VLOC(A68_INT ,SBBACTR): A_VHEAP(A68_INT ,SBBACTR) );
RBBACTR = SBBACTR;
} 
*ReturnedValue = (RBBACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DFBACTR_generator(A68_BOOL  BFBACTR_anonymous, A68_100  *ReturnedValue, void *NonLocals)
#define NL(x) (((EFBACTR_generator *)NonLocals)->x)
{ 
A68_100  FFBACTR;  /* clause result */
A68_100  GFBACTR;  /* OPERATORS - dynamic generator */
{ 
GFBACTR.upb = (*NL(AFBACTR_upbofsidstack)) ;
( BFBACTR_anonymous? A_VLOC(A68_INT ,GFBACTR): A_VHEAP(A68_INT ,GFBACTR) );
FFBACTR = GFBACTR;
} 
*ReturnedValue = (FFBACTR);
return;
} 
#undef NL

A_STATIC A68_INT  QFBACTR_analyser(void *NonLocals)
#define NL(x) (((RFBACTR_analyser *)NonLocals)->x)
{ 
A68_INT  WFBACTR_u;
A68_INT  XFBACTR_v;
A68_INT  YFBACTR;  /* YIELD */
A68_INT * ZFBACTR;  /* YIELD */
A68_151  BGBACTR_generator;   /* proc value of non-global proc */
A68_100  GGBACTR;  /* avoid structure result */
A68_100  HGBACTR_new;
A68_100  IGBACTR;  /* OPERATORS - trim index */
A68_100  JGBACTR;  /* YIELD */
A68_INT  KGBACTR;  /* SHL */
A68_BITS  LGBACTR;  /* SHL */
A68_BOOL  MGBACTR;  /* clause result */
A68_INT  NGBACTR;  /* SHR */
A68_BITS  OGBACTR;  /* SHR */
A68_INT  PGBACTR;  /* YIELD */
A68_INT  QGBACTR;  /* SHL */
A68_INT  RGBACTR;  /* YIELD */
A68_INT  SGBACTR;  /* YIELD */
A68_INT  TGBACTR;  /* clause result */
A_PROC_ENTRY(analyser);
{ 
 /* line 1104: */
(*NL(LFBACTR_failpos)) = 0;
 /* line 1105: */
for ( ;; )
{ 
WFBACTR_u = (A68_INT)(unsigned char)A_VINDEX(NL(WEBACTR_sidcode),(*NL(KFBACTR_crts)));
 /* line 1106: */
YFBACTR = ((*NL(KFBACTR_crts))+1) ;
XFBACTR_v = (A68_INT)(unsigned char)A_VINDEX(NL(WEBACTR_sidcode),YFBACTR);
 /* line 1107: */
 /* line 1108: */
if ( (WFBACTR_u<128) )
{ 
if ( (WFBACTR_u<64) )
{ 
goto VFBACTR_action;
} 
 /* line 1109: */
 /* line 1110: */
if ( (WFBACTR_u<96) )
{ 
ZFBACTR = (&A_VINDEX((*NL(HFBACTR_sidstack)),(*NL(JFBACTR_stind)))) ;
(*ZFBACTR) = ((*NL(KFBACTR_crts))+2);
 /* line 1111: */
 /* line 1112: */
if ( ((*NL(JFBACTR_stind))==(*NL(AFBACTR_upbofsidstack))) )
{ 
A_CLOSURE( BGBACTR_generator, CGBACTR_generator, DGBACTR_generator );
(( DGBACTR_generator * ) ( BGBACTR_generator.nonlocals )) -> AFBACTR_upbofsidstack = NL(AFBACTR_upbofsidstack);
A_CALLPROC(BGBACTR_generator,(A68_FALSE, &GGBACTR),(A68_FALSE, &GGBACTR,(BGBACTR_generator).nonlocals));
HGBACTR_new = GGBACTR;
 /* line 1113: */
JGBACTR = A_VTRIM(IGBACTR,(HGBACTR_new),A_VTSCRIPT(&(IGBACTR.upb),(HGBACTR_new).upb,1,(*NL(HFBACTR_sidstack)).upb)) ;
A_VASSIGN2((*NL(HFBACTR_sidstack)),JGBACTR,A68_INT );
 /* line 1114: */
 /* line 1115: */
(*NL(HFBACTR_sidstack)) = HGBACTR_new;
} 
 /* line 1116: */
(*NL(JFBACTR_stind))+=1;
 /* line 1117: */
 /* line 1118: */
(*NL(LFBACTR_failpos)) = 0;
} 
 /* line 1119: */
 /* line 1120: */
KGBACTR = 8 ;
LGBACTR = (A68_BITS )((A68_BITS )WFBACTR_u&(A68_BITS )31) ;
(*NL(KFBACTR_crts)) = ((A68_INT )A_SHL(LGBACTR,KGBACTR)+XFBACTR_v);
} 
else
{ 
if ( ((*NL(LFBACTR_failpos))==0) )
{ 
(*NL(LFBACTR_failpos)) = (*NL(KFBACTR_crts));
} 
 /* line 1121: */
 /* line 1122: */
if ( (XFBACTR_v<128) )
{ 
 /* line 1123: */
MGBACTR = ((*NL(MFBACTR_t1))==XFBACTR_v);
} 
else
{ 
 /* line 1124: */
 /* line 1125: */
 /* line 1126: */
 /* line 1127: */
 /* line 1128: */
 /* line 1129: */
NGBACTR = 3 ;
OGBACTR = (A68_BITS )(*NL(MFBACTR_t1)) ;
PGBACTR = (((XFBACTR_v*NL(OFBACTR_boolwds3))+(A68_INT )A_SHR(OGBACTR,NGBACTR))+NL(NFBACTR_sidbwdm)) ;
QGBACTR = (7-(A68_INT )(A68_BITS )((A68_BITS )(*NL(MFBACTR_t1))&(A68_BITS )7)) ;
MGBACTR = ((A68_BITS )((A68_BITS )(A68_INT)(unsigned char)A_VINDEX(NL(WEBACTR_sidcode),PGBACTR)&A_SHL(NQAACTR_z1,QGBACTR))!=MQAACTR_z);
} 
if ( MGBACTR )
{ 
 /* line 1130: */
if ( (WFBACTR_u<192) )
{ 
XFBACTR_v = 1;
 /* line 1131: */
 /* line 1132: */
goto VFBACTR_action;
} 
 /* line 1133: */
(*NL(LFBACTR_failpos)) = 0;
 /* line 1134: */
 /* line 1135: */
if ( (WFBACTR_u<224) )
{ 
 /* line 1136: */
(*NL(KFBACTR_crts))+=2;
} 
else
{ 
 /* line 1137: */
 /* line 1138: */
RGBACTR = (*NL(JFBACTR_stind))-=1 ;
(*NL(KFBACTR_crts)) = (*(&A_VINDEX((*NL(HFBACTR_sidstack)),RGBACTR)));
} 
} 
else
{ 
 /* line 1139: */
if ( ((WFBACTR_u = (A68_INT )(A68_BITS )((A68_BITS )WFBACTR_u&(A68_BITS )31))==0) )
{ 
XFBACTR_v = 2;
 /* line 1140: */
 /* line 1141: */
goto TFBACTR_out;
} 
 /* line 1142: */
 /* line 1143: */
 /* line 1144: */
(*NL(KFBACTR_crts))+=(WFBACTR_u+WFBACTR_u);
} 
} 
}
 /* line 1146: */
VFBACTR_action:
 /* line 1147: */
 /* line 1148: */
if ( ((A68_INT )(A68_BITS )((A68_BITS )WFBACTR_u&(A68_BITS )63)<32) )
{ 
 /* line 1149: */
(*NL(KFBACTR_crts))+=2;
} 
else
{ 
 /* line 1150: */
SGBACTR = (*NL(JFBACTR_stind))-=1 ;
(*NL(KFBACTR_crts)) = (*(&A_VINDEX((*NL(HFBACTR_sidstack)),SGBACTR)));
} 
 /* line 1151: */
TFBACTR_out:
 /* line 1153: */
TGBACTR = XFBACTR_v;
} 
A_PROC_EXIT(analyser);
return( TGBACTR );
} 
#undef NL

A_STATIC A68_BOOL  XGBACTR_checkinsert(A68_INT  T, A68_BOOL  Testnext, void *NonLocals)
#define NL(x) (((YGBACTR_checkinsert *)NonLocals)->x)
{ 
A68_INT  BHBACTR_failcrts;
A68_INT  CHBACTR_failstind;
A68_INT  DHBACTR_symbol;
A68_INT  EHBACTR_u;
A68_INT  FHBACTR_v;
A68_INT  GHBACTR_rstind;
A68_151  IHBACTR_generator;   /* proc value of non-global proc */
A68_100  OHBACTR;  /* avoid structure result */
A68_100  NHBACTR_rsidstack;
A68_BOOL  PHBACTR_readt1;
A68_BOOL  QHBACTR_result;
A68_INT  RHBACTR;  /* YIELD */
A68_INT  SHBACTR;  /* clause result */
A68_INT  THBACTR;  /* YIELD */
A68_INT  UHBACTR;  /* YIELD */
A68_INT * VHBACTR;  /* YIELD */
A68_INT  WHBACTR;  /* SHL */
A68_BITS  XHBACTR;  /* SHL */
A68_BOOL  YHBACTR;  /* clause result */
A68_INT  ZHBACTR;  /* SHR */
A68_BITS  AIBACTR;  /* SHR */
A68_INT  BIBACTR;  /* YIELD */
A68_INT  CIBACTR;  /* SHL */
A68_BOOL  DIBACTR;  /* optbool result */
A68_INT  EIBACTR;  /* clause result */
A68_INT  FIBACTR;  /* YIELD */
A68_INT  GIBACTR;  /* YIELD */
A68_BOOL  HIBACTR;  /* clause result */
A_PROC_ENTRY(checkinsert);
 /* line 1157: */
 /* line 1158: */
{ 
BHBACTR_failcrts = (*NL(LFBACTR_failpos));
CHBACTR_failstind = (*NL(JFBACTR_stind));
 /* line 1159: */
DHBACTR_symbol = T;
GHBACTR_rstind = 1;
 /* line 1160: */
A_CLOSURE( IHBACTR_generator, JHBACTR_generator, KHBACTR_generator );
A_CALLPROC(IHBACTR_generator,(A68_TRUE, &OHBACTR),(A68_TRUE, &OHBACTR,(IHBACTR_generator).nonlocals));
NHBACTR_rsidstack = OHBACTR;
 /* line 1161: */
PHBACTR_readt1 = Testnext;
 /* line 1163: */
for ( ;; )
{ 
EHBACTR_u = (A68_INT)(unsigned char)A_VINDEX(NL(WEBACTR_sidcode),BHBACTR_failcrts);
 /* line 1164: */
RHBACTR = (BHBACTR_failcrts+1) ;
FHBACTR_v = (A68_INT)(unsigned char)A_VINDEX(NL(WEBACTR_sidcode),RHBACTR);
 /* line 1165: */
 /* line 1166: */
if ( (EHBACTR_u<128) )
{ 
 /* line 1167: */
if ( (EHBACTR_u<64) )
{ 
 /* line 1168: */
if ( (EHBACTR_u<32) )
{ 
 /* line 1169: */
BHBACTR_failcrts+=2;
} 
else
{ 
 /* line 1170: */
if ( (GHBACTR_rstind==1) )
{ 
 /* line 1171: */
THBACTR = CHBACTR_failstind-=1 ;
SHBACTR = (*(&A_VINDEX((*NL(HFBACTR_sidstack)),THBACTR)));
} 
else
{ 
 /* line 1172: */
 /* line 1173: */
UHBACTR = GHBACTR_rstind-=1 ;
SHBACTR = (*(&A_VINDEX(NHBACTR_rsidstack,UHBACTR)));
} 
 /* line 1174: */
BHBACTR_failcrts = SHBACTR;
} 
} 
else
{ 
 /* line 1175: */
if ( (EHBACTR_u<96) )
{ 
VHBACTR = (&A_VINDEX(NHBACTR_rsidstack,GHBACTR_rstind)) ;
(*VHBACTR) = (BHBACTR_failcrts+2);
 /* line 1176: */
 /* line 1177: */
GHBACTR_rstind+=1;
} 
 /* line 1178: */
 /* line 1179: */
 /* line 1180: */
WHBACTR = 8 ;
XHBACTR = (A68_BITS )((A68_BITS )EHBACTR_u&(A68_BITS )31) ;
BHBACTR_failcrts = ((A68_INT )A_SHL(XHBACTR,WHBACTR)+FHBACTR_v);
} 
} 
else
{ 
 /* line 1181: */
if ( (FHBACTR_v<128) )
{ 
 /* line 1182: */
YHBACTR = (FHBACTR_v==DHBACTR_symbol);
} 
else
{ 
 /* line 1183: */
 /* line 1184: */
 /* line 1185: */
 /* line 1186: */
 /* line 1187: */
 /* line 1188: */
ZHBACTR = 3 ;
AIBACTR = (A68_BITS )DHBACTR_symbol ;
BIBACTR = (((FHBACTR_v*NL(OFBACTR_boolwds3))+NL(NFBACTR_sidbwdm))+(A68_INT )A_SHR(AIBACTR,ZHBACTR)) ;
CIBACTR = (7-(A68_INT )(A68_BITS )((A68_BITS )DHBACTR_symbol&(A68_BITS )7)) ;
YHBACTR = ((A68_BITS )((A68_BITS )(A68_INT)(unsigned char)A_VINDEX(NL(WEBACTR_sidcode),BIBACTR)&A_SHL(NQAACTR_z1,CIBACTR))!=MQAACTR_z);
} 
if ( YHBACTR )
{ 
DIBACTR = PHBACTR_readt1;
if ( DIBACTR )
{ /* line 1189: */
DIBACTR = ((A68_INT )(A68_BITS )((A68_BITS )EHBACTR_u&(A68_BITS )223)!=193);
}
if ( DIBACTR )
{ 
QHBACTR_result = A68_TRUE;
 /* line 1190: */
 /* line 1191: */
goto AHBACTR_exit;
} 
else
{ 
 /* line 1192: */
if ( ((A68_BITS )((A68_BITS )EHBACTR_u&(A68_BITS )32)==MQAACTR_z) )
{ 
 /* line 1193: */
BHBACTR_failcrts+=2;
} 
else
{ 
 /* line 1194: */
if ( (GHBACTR_rstind==1) )
{ 
 /* line 1195: */
FIBACTR = CHBACTR_failstind-=1 ;
EIBACTR = (*(&A_VINDEX((*NL(HFBACTR_sidstack)),FIBACTR)));
} 
else
{ 
 /* line 1196: */
 /* line 1197: */
GIBACTR = GHBACTR_rstind-=1 ;
EIBACTR = (*(&A_VINDEX(NHBACTR_rsidstack,GIBACTR)));
} 
BHBACTR_failcrts = EIBACTR;
} 
 /* line 1198: */
 /* line 1199: */
if ( (EHBACTR_u<192) )
{ 
PHBACTR_readt1 = A68_TRUE;
 /* line 1200: */
 /* line 1201: */
 /* line 1202: */
 /* line 1203: */
DHBACTR_symbol = (*NL(MFBACTR_t1));
} 
} 
} 
else
{ 
 /* line 1204: */
if ( ((EHBACTR_u = (A68_INT )(A68_BITS )((A68_BITS )EHBACTR_u&(A68_BITS )31))>0) )
{ 
 /* line 1205: */
BHBACTR_failcrts+=(EHBACTR_u+EHBACTR_u);
} 
else
{ 
QHBACTR_result = A68_FALSE;
 /* line 1206: */
 /* line 1207: */
 /* line 1208: */
goto AHBACTR_exit;
} 
} 
} 
}
 /* line 1210: */
AHBACTR_exit:
 /* line 1212: */
HIBACTR = QHBACTR_result;
} 
A_PROC_EXIT(checkinsert);
return( HIBACTR );
} 
#undef NL

A_STATIC A68_VOID  VIBACTR_faultchars(A68_VC  Mess, void *NonLocals)
#define NL(x) (((WIBACTR_faultchars *)NonLocals)->x)
{ 
A68_INT  XIBACTR_i;
A68_BOOL  YIBACTR;  /* optbool result */
A68_BOOL  ZIBACTR;  /* optbool result */
A68_43  BJBACTR_generator;   /* proc value of non-global proc */
A68_VC  HJBACTR;  /* avoid structure result */
A68_VC  GJBACTR_m;
A68_VC  JJBACTR;  /* OPERATORS - trim index */
A68_VC  LJBACTR;  /* YIELD */
A68_VC  MJBACTR;  /* OPERATORS - assign op */
A68_VC  NJBACTR;  /* OPERATORS - trim index */
A68_VC  OJBACTR;  /* YIELD */
A_PROC_ENTRY(faultchars);
 /* line 1296: */
{ 
XIBACTR_i = (*NL(LSAACTR_tind));
 /* line 1297: */
for ( ;; )
{ 
YIBACTR = (XIBACTR_i>0);
if ( YIBACTR )
{ /* line 1298: */
YIBACTR = ((*(&A_VINDEX(NL(HSAACTR_textbuff),XIBACTR_i)))==' ');
}
if ( !(YIBACTR) ) break;
XIBACTR_i-=1;
}
 /* line 1300: */
 /* line 1301: */
if ( ((*NL(ITAACTR_supflts))==0) )
{ 
A_CALLPROC(NL(Flt),(Mess, XIBACTR_i),(Mess, XIBACTR_i,(NL(Flt)).nonlocals));
 /* line 1302: */
(*NL(EEBACTR_noflts))+=12;
 /* line 1303: */
ZIBACTR = ((*NL(EEBACTR_noflts))>180);
if ( ZIBACTR )
{ /* line 1304: */
ZIBACTR = ((*NL(EEBACTR_noflts))<193);
}
 /* line 1305: */
if ( ZIBACTR )
{ 
 /* line 1306: */
 /* line 1307: */
 /* line 1308: */
A_CALLPROC((*NL(MBBACTR_abort1)),(101),(101,((*NL(MBBACTR_abort1))).nonlocals));
} 
} 
else
{ 
if ( (*NL(GEBACTR_fulldiags)) )
{ 
A_CLOSURE( BJBACTR_generator, CJBACTR_generator, DJBACTR_generator );
(( DJBACTR_generator * ) ( BJBACTR_generator.nonlocals )) -> Mess = Mess;
A_CALLPROC(BJBACTR_generator,(A68_TRUE, &HJBACTR),(A68_TRUE, &HJBACTR,(BJBACTR_generator).nonlocals));
GJBACTR_m = HJBACTR;
 /* line 1309: */
LJBACTR = A_VTRIM(JJBACTR,(GJBACTR_m),A_VTSCRIPT(&(JJBACTR.upb),(GJBACTR_m).upb,1,8)) ;
MJBACTR = KJBACTR ;
A_VASSIGN2(MJBACTR,LJBACTR,A68_CHAR );
 /* line 1310: */
OJBACTR = A_VTRIM(NJBACTR,(GJBACTR_m),A_VTSCRIPT(&(NJBACTR.upb),(GJBACTR_m).upb,9,(GJBACTR_m).upb)) ;
A_VASSIGN2(Mess,OJBACTR,A68_CHAR );
 /* line 1311: */
 /* line 1312: */
 /* line 1313: */
A_CALLPROC(NL(Flt),(GJBACTR_m, XIBACTR_i),(GJBACTR_m, XIBACTR_i,(NL(Flt)).nonlocals));
} 
} 
} 
A_PROC_EXIT(faultchars);
return;
} 
#undef NL

A_STATIC A68_VOID  RJBACTR_fault(A68_INT  I, void *NonLocals)
#define NL(x) (((SJBACTR_fault *)NonLocals)->x)
{ 
A68_VC  TJBACTR;  /* avoid structure result */
A_PROC_ENTRY(fault);
A_CALLPROC(NL(Message),(I, &TJBACTR),(I, &TJBACTR,(NL(Message)).nonlocals));
A_CALLPROC(NL(UIBACTR_faultchars),(TJBACTR),(TJBACTR,(NL(UIBACTR_faultchars)).nonlocals));
A_PROC_EXIT(fault);
return;
} 
#undef NL

A_STATIC A68_VOID  WJBACTR_abort(A68_INT  Mess, void *NonLocals)
#define NL(x) (((XJBACTR_abort *)NonLocals)->x)
{ 
A68_INT  YJBACTR;  /* loop control */
A_PROC_ENTRY(abort);
 /* line 1318: */
{ 
(*NL(ITAACTR_supflts)) = 0;
 /* line 1319: */
if ( (Mess>=0) )
{ 
A_CALLPROC(NL(QJBACTR_fault),(Mess),(Mess,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 1320: */
(*NL(MSAACTR_textend))-=1;
 /* line 1321: */
 /* line 1322: */
for ( YJBACTR = 1;
YJBACTR <= 10;
YJBACTR += 1 )
{ 
 /* line 1323: */
if ( !((*NL(SIBACTR_moreinput))) ) break;
(*NL(SIBACTR_moreinput)) = A_CALLPROC(NL(Input),(NL(LBBACTR_textbuff1), NL(MSAACTR_textend)),(NL(LBBACTR_textbuff1), NL(MSAACTR_textend),(NL(Input)).nonlocals));
}
 /* line 1324: */
 /* line 1325: */
siglongjmp(NL(VRAACTR_endcompile2).label,1);
} 
A_PROC_EXIT(abort);
return;
} 
#undef NL

A_STATIC A68_INT  AKBACTR_primread(void *NonLocals)
#define NL(x) (((BKBACTR_primread *)NonLocals)->x)
{ 
A68_INT  EKBACTR_type;
A68_INT  FKBACTR_value;
A68_CHAR  GKBACTR_c;
A68_BOOL  HKBACTR_radixgiven;
A68_BOOL  IKBACTR_lastspace;
A68_INT  JKBACTR_ans;
A68_INT  KKBACTR_radix;
A68_INT  LKBACTR_origsize;
A68_INT  MKBACTR_strop;
A68_INT  YKBACTR;  /* YIELD */
A68_INT  ZKBACTR;  /* clause result */
A68_INT  ALBACTR;  /* YIELD */
A68_VC  FLBACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GLBACTR;  /* OPERATORS - simple index */
A68_INT  HLBACTR;  /* YIELD */
A68_CHAR * ILBACTR;  /* YIELD */
A68_INT  JLBACTR;  /* YIELD */
A68_INT  KLBACTR;  /* YIELD */
A68_BOOL  LLBACTR;  /* optbool result */
A68_BOOL  MLBACTR;  /* optbool result */
A68_BOOL  RLBACTR;  /* optbool result */
A68_INT  TLBACTR;  /* YIELD */
A68_VC  VLBACTR;  /* OPERATORS - simple index */
A68_CHAR * WLBACTR;  /* YIELD */
A68_INT  XLBACTR;  /* YIELD */
A68_BOOL  YLBACTR;  /* optbool result */
A68_INT  ZLBACTR;  /* YIELD */
A68_CHAR * AMBACTR;  /* YIELD */
A68_BOOL  BMBACTR;  /* optbool result */
A68_INT  CMBACTR;  /* YIELD */
A68_BOOL  DMBACTR;  /* optbool result */
A68_BOOL  EMBACTR;  /* optbool result */
A68_INT  FMBACTR;  /* YIELD */
A68_BOOL  GMBACTR;  /* clause result */
A68_INT  HMBACTR;  /* YIELD */
A68_INT  IMBACTR;  /* YIELD */
A68_INT  LMBACTR;  /* YIELD */
A68_INT  MMBACTR;  /* YIELD */
A68_BOOL  NMBACTR;  /* clause result */
A68_INT  OMBACTR;  /* YIELD */
A68_INT  PMBACTR;  /* YIELD */
A68_CHAR * QMBACTR;  /* YIELD */
A68_BOOL  RMBACTR;  /* optbool result */
A68_BOOL  SMBACTR;  /* optbool result */
A68_BOOL  TMBACTR;  /* optbool result */
A68_INT  UMBACTR;  /* clause result */
A68_BOOL  VMBACTR;  /* optbool result */
A68_BOOL  YMBACTR;  /* clause result */
A68_INT  ZMBACTR;  /* YIELD */
A68_INT  ANBACTR;  /* YIELD */
A68_BOOL  BNBACTR;  /* optbool result */
A68_INT  CNBACTR;  /* YIELD */
A68_BOOL  DNBACTR;  /* clause result */
A68_INT  ENBACTR;  /* YIELD */
A68_BOOL  FNBACTR;  /* clause result */
A68_INT  GNBACTR;  /* YIELD */
A68_CHAR * HNBACTR;  /* YIELD */
A68_BOOL  INBACTR;  /* optbool result */
A68_INT  JNBACTR;  /* clause result */
A68_INT  KNBACTR;  /* YIELD */
A68_VC  LNBACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MNBACTR;  /* OPERATORS - simple index */
A68_INT  NNBACTR;  /* YIELD */
A68_CHAR * ONBACTR;  /* YIELD */
A68_INT  PNBACTR;  /* YIELD */
A68_INT  QNBACTR;  /* YIELD */
A68_VC  RNBACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SNBACTR;  /* OPERATORS - trim index */
A68_VC  TNBACTR;  /* OPERATORS - trim index */
A68_VC  WNBACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XNBACTR;  /* OPERATORS - simple index */
A68_INT  YNBACTR;  /* YIELD */
A68_CHAR * ZNBACTR;  /* YIELD */
A68_BOOL  AOBACTR;  /* optbool result */
A68_INT  BOBACTR;  /* YIELD */
A68_INT  COBACTR;  /* YIELD */
A68_BOOL  DOBACTR;  /* optbool result */
A68_BOOL  EOBACTR;  /* optbool result */
A68_VC  FOBACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GOBACTR;  /* OPERATORS - simple index */
A68_INT  HOBACTR;  /* YIELD */
A68_INT  IOBACTR;  /* YIELD */
A68_VC  JOBACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KOBACTR;  /* OPERATORS - trim index */
A68_VC  LOBACTR;  /* OPERATORS - trim index */
A68_INT  MOBACTR;  /* YIELD */
A68_INT  NOBACTR;  /* YIELD */
A68_INT  OOBACTR;  /* YIELD */
A68_INT  POBACTR;  /* YIELD */
A68_BOOL  QOBACTR;  /* optbool result */
A68_VC  ROBACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SOBACTR;  /* OPERATORS - simple index */
A68_INT  TOBACTR;  /* YIELD */
A68_CHAR * UOBACTR;  /* YIELD */
A68_INT  VOBACTR;  /* YIELD */
A68_INT  WOBACTR;  /* YIELD */
A68_INT  XOBACTR;  /* YIELD */
A68_VC  YOBACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZOBACTR;  /* OPERATORS - trim index */
A68_VC  APBACTR;  /* OPERATORS - trim index */
A68_INT  BPBACTR;  /* clause result */
A_PROC_ENTRY(primread);
{ 
 /* line 1333: */
 /* line 1334: */
HKBACTR_radixgiven = A68_FALSE;
 /* line 1335: */
KKBACTR_radix = 10;
MKBACTR_strop = 0;
 /* line 1342: */
 /* line 1343: */
 /* line 1344: */
 /* line 1345: */
 /* line 1346: */
 /* line 1348: */
 /* line 1349: */
 /* line 1350: */
 /* line 1351: */
 /* line 1352: */
 /* line 1353: */
 /* line 1355: */
DKBACTR_l:
 /* line 1356: */
YKBACTR = (*NL(LSAACTR_tind))+=1 ;
GKBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),YKBACTR)));
 /* line 1357: */
 /* line 1361: */
 /* line 1364: */
ALBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
ZKBACTR = EKBACTR_type = (*(&((&A_R1INDEX(NL(Charset),ALBACTR))->Type)));
switch ( ZKBACTR )
{ 
case 1: 
{ 
A_CALLPROC(NL(QJBACTR_fault),(102),(102,(NL(QJBACTR_fault)).nonlocals));
 /* line 1366: */
 /* line 1367: */
 /* line 1370: */
goto DKBACTR_l;
} 
break;
case 2: 
 /* line 1371: */
if ( ((*NL(LSAACTR_tind))==(*NL(MSAACTR_textend))) )
{ 
 /* line 1372: */
JKBACTR_ans = CCBACTR_rcnewline;
} 
else
{ 
 /* line 1373: */
 /* line 1376: */
goto DKBACTR_l;
} 
break;
case 3: 
{ 
(*NL(SSAACTR_idsize)) = 0;
 /* line 1377: */
(*NL(TSAACTR_idhash)) = 0;
 /* line 1378: */
(*NL(PSAACTR_ident)) = NL(XTAACTR_spaces);
 /* line 1380: */
CLBACTR_l1:
 /* line 1381: */
if ( ((*NL(SSAACTR_idsize))!=VDAACTR_maxid) )
{ 
GLBACTR = A_ISVEC(FLBACTR,NL(PSAACTR_ident),32,A68_CHAR ) ;
HLBACTR = (*NL(SSAACTR_idsize))+=1 ;
ILBACTR = (&A_VINDEX(GLBACTR,HLBACTR)) ;
(*ILBACTR) = GKBACTR_c;
 /* line 1382: */
 /* line 1383: */
(*NL(TSAACTR_idhash))+=(A68_INT)(unsigned char)GKBACTR_c;
} 
 /* line 1385: */
ELBACTR_l2:
JLBACTR = (*NL(LSAACTR_tind))+=1 ;
GKBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),JLBACTR)));
 /* line 1386: */
KLBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
EKBACTR_type = (*(&((&A_R1INDEX(NL(Charset),KLBACTR))->Type)));
 /* line 1387: */
LLBACTR = (EKBACTR_type==OKBACTR_space);
if ( LLBACTR )
{ /* line 1388: */
LLBACTR = ((*NL(LSAACTR_tind))!=(*NL(MSAACTR_textend)));
}
if ( LLBACTR )
{ 
 /* line 1389: */
goto ELBACTR_l2;
} 
else
{ 
MLBACTR = (EKBACTR_type==PKBACTR_letter);
if ( ! MLBACTR )
{ /* line 1390: */
MLBACTR = (EKBACTR_type==QKBACTR_digit);
}
if ( MLBACTR )
{ 
 /* line 1391: */
goto CLBACTR_l1;
} 
} 
 /* line 1392: */
(*NL(LSAACTR_tind))-=1;
 /* line 1393: */
JKBACTR_ans = DCBACTR_rcident;
 /* line 1394: */
 /* line 1395: */
 /* line 1398: */
(*NL(TSAACTR_idhash)) = ((A68_INT )(A68_BITS )((A68_BITS )(*NL(TSAACTR_idhash))&(A68_BITS )63)+1);
} 
break;
case 4: 
{ 
if ( (*NL(ZRAACTR_isint)) )
{ 
(*NL(ETAACTR_stringsize)) = 0;
} 
 /* line 1399: */
LKBACTR_origsize = (*NL(ETAACTR_stringsize));
 /* line 1400: */
OLBACTR_l1:
(*NL(HTAACTR_iv)) = 0;
 /* line 1401: */
 /* line 1402: */
RLBACTR = (*NL(ZRAACTR_isint));
if ( RLBACTR )
{ /* line 1403: */
TLBACTR = (*NL(ETAACTR_stringsize))+=1 ;
VLBACTR = ULBACTR ;
WLBACTR = (&A_VINDEX(NL(ATAACTR_string),TLBACTR)) ;
RLBACTR = (((*WLBACTR) = A_VINDEX(VLBACTR,KKBACTR_radix))=='0');
}
if ( RLBACTR )
{ 
 /* line 1405: */
A_CALLPROC(NL(QJBACTR_fault),(103),(103,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 1407: */
for ( ;; )
{ 
 /* line 1408: */
XLBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
FKBACTR_value = (*(&((&A_R1INDEX(NL(Charset),XLBACTR))->Value)));
 /* line 1409: */
YLBACTR = (FKBACTR_value<KKBACTR_radix);
if ( YLBACTR )
{ /* line 1410: */
YLBACTR = (FKBACTR_value>=0);
}
 /* line 1411: */
if ( YLBACTR )
{ 
ZLBACTR = (*NL(ETAACTR_stringsize))+=1 ;
AMBACTR = (&A_VINDEX(NL(ATAACTR_string),ZLBACTR)) ;
(*AMBACTR) = GKBACTR_c;
 /* line 1412: */
 /* line 1413: */
if ( ((*NL(HTAACTR_iv))<=YDAACTR_maxistruct) )
{ 
 /* line 1414: */
 /* line 1415: */
(*NL(HTAACTR_iv)) = (((*NL(HTAACTR_iv))*KKBACTR_radix)+FKBACTR_value);
} 
} 
else
{ 
 /* line 1416: */
BMBACTR = (FKBACTR_value!=37);
if ( ! BMBACTR )
{ /* line 1417: */
BMBACTR = ((*NL(LSAACTR_tind))==(*NL(MSAACTR_textend)));
}
if ( BMBACTR )
{ 
 /* line 1418: */
goto QLBACTR_out;
} 
} 
 /* line 1420: */
 /* line 1421: */
CMBACTR = (*NL(LSAACTR_tind))+=1 ;
GKBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),CMBACTR)));
}
 /* line 1423: */
QLBACTR_out:
 /* line 1424: */
DMBACTR = (FKBACTR_value==27);
if ( DMBACTR )
{DMBACTR = !HKBACTR_radixgiven;
}
if ( DMBACTR )
{ 
EMBACTR = ((*NL(HTAACTR_iv))>16);
if ( ! EMBACTR )
{ /* line 1425: */
EMBACTR = ((*NL(HTAACTR_iv))<2);
}
if ( EMBACTR )
{ 
(*NL(HTAACTR_iv)) = 16;
 /* line 1426: */
 /* line 1428: */
A_CALLPROC(NL(QJBACTR_fault),(103),(103,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 1429: */
(*NL(ETAACTR_stringsize)) = LKBACTR_origsize;
 /* line 1430: */
HKBACTR_radixgiven = A68_TRUE;
 /* line 1431: */
KKBACTR_radix = (*NL(HTAACTR_iv));
 /* line 1433: */
for ( ;; )
{ 
 /* line 1434: */
FMBACTR = (*NL(LSAACTR_tind))+=1 ;
GKBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),FMBACTR)));
 /* line 1435: */
 /* line 1436: */
HMBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
GMBACTR = ((*(&((&A_R1INDEX(NL(Charset),HMBACTR))->Value)))==37);
if ( !GMBACTR ) break;
 /* line 1437: */
if ( ((*NL(LSAACTR_tind))==(*NL(MSAACTR_textend))) )
{ 
 /* line 1438: */
 /* line 1439: */
goto QLBACTR_out;
} 
}
 /* line 1441: */
 /* line 1442: */
 /* line 1443: */
IMBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
if ( ((*(&((&A_R1INDEX(NL(Charset),IMBACTR))->Type)))!=RKBACTR_stringquote) )
{ 
 /* line 1444: */
goto OLBACTR_l1;
} 
else
{ 
(*NL(FTAACTR_noofchars)) = 1;
 /* line 1445: */
IKBACTR_lastspace = A68_TRUE;
 /* line 1446: */
for ( ;; )
{ 
 /* line 1447: */
LMBACTR = (*NL(LSAACTR_tind))+=1 ;
GKBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),LMBACTR)));
 /* line 1448: */
MMBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
FKBACTR_value = (*(&((&A_R1INDEX(NL(Charset),MMBACTR))->Value)));
 /* line 1449: */
 /* line 1450: */
 /* line 1451: */
OMBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
NMBACTR = ((*(&((&A_R1INDEX(NL(Charset),OMBACTR))->Type)))!=RKBACTR_stringquote);
if ( !NMBACTR ) break;
PMBACTR = (*NL(ETAACTR_stringsize))+=1 ;
QMBACTR = (&A_VINDEX(NL(ATAACTR_string),PMBACTR)) ;
(*QMBACTR) = GKBACTR_c;
 /* line 1452: */
 /* line 1453: */
if ( (FKBACTR_value==37) )
{ 
 /* line 1454: */
 /* line 1455: */
if ( ((*NL(LSAACTR_tind))==(*NL(MSAACTR_textend))) )
{ 
A_CALLPROC(NL(QJBACTR_fault),(104),(104,(NL(QJBACTR_fault)).nonlocals));
 /* line 1456: */
(*NL(ITAACTR_supflts)) = FEBACTR_fltgap;
 /* line 1457: */
(*NL(LSAACTR_tind))-=1;
 /* line 1458: */
 /* line 1459: */
 /* line 1460: */
goto KMBACTR_end;
} 
else
{ 
if ( IKBACTR_lastspace )
{ 
 /* line 1461: */
(*NL(ETAACTR_stringsize))-=1;
} 
else
{ 
(*NL(FTAACTR_noofchars))+=1;
 /* line 1462: */
 /* line 1463: */
 /* line 1464: */
IKBACTR_lastspace = A68_TRUE;
} 
} 
} 
else
{ 
RMBACTR = (FKBACTR_value>=KKBACTR_radix);
if ( ! RMBACTR )
{ /* line 1465: */
RMBACTR = (FKBACTR_value<0);
}
 /* line 1466: */
if ( RMBACTR )
{ 
 /* line 1467: */
A_CALLPROC(NL(QJBACTR_fault),(105),(105,(NL(QJBACTR_fault)).nonlocals));
} 
else
{ 
 /* line 1468: */
 /* line 1469: */
IKBACTR_lastspace = A68_FALSE;
} 
} 
}
 /* line 1471: */
KMBACTR_end:
SMBACTR = IKBACTR_lastspace;
if ( ! SMBACTR )
{ /* line 1472: */
SMBACTR = ((*NL(ETAACTR_stringsize))==0);
}
if ( SMBACTR )
{ 
 /* line 1473: */
(*NL(FTAACTR_noofchars))-=1;
} 
 /* line 1474: */
TMBACTR = IKBACTR_lastspace;
if ( TMBACTR )
{ /* line 1475: */
TMBACTR = ((*NL(ETAACTR_stringsize))!=0);
}
if ( TMBACTR )
{ 
 /* line 1476: */
(*NL(ETAACTR_stringsize))-=1;
} 
 /* line 1477: */
HKBACTR_radixgiven = A68_FALSE;
 /* line 1478: */
JKBACTR_ans = LCBACTR_stringtok;
 /* line 1479: */
 /* line 1480: */
 /* line 1481: */
(*NL(GTAACTR_stringbase)) = KKBACTR_radix;
} 
} 
else
{ 
 /* line 1482: */
if ( (FKBACTR_value==14) )
{ 
 /* line 1483: */
JKBACTR_ans = ECBACTR_rcintexp;
} 
else
{ 
(*NL(LSAACTR_tind))-=1;
 /* line 1484: */
 /* line 1485: */
 /* line 1486: */
if ( HKBACTR_radixgiven )
{ 
 /* line 1487: */
UMBACTR = TCBACTR_bitsdentok;
} 
else
{ 
 /* line 1488: */
UMBACTR = QCBACTR_intdentok;
} 
JKBACTR_ans = UMBACTR;
} 
} 
 /* line 1490: */
VMBACTR = HKBACTR_radixgiven;
if ( VMBACTR )
{ /* line 1491: */
VMBACTR = ((*NL(ETAACTR_stringsize))<=(LKBACTR_origsize+1));
}
if ( VMBACTR )
{ 
A_CALLPROC(NL(QJBACTR_fault),(106),(106,(NL(QJBACTR_fault)).nonlocals));
 /* line 1493: */
 /* line 1494: */
 /* line 1495: */
 /* line 1498: */
(*NL(ITAACTR_supflts)) = FEBACTR_fltgap;
} 
} 
break;
case 5: 
{ 
(*NL(ETAACTR_stringsize)) = 0;
 /* line 1500: */
for ( ;; )
{ 
 /* line 1501: */
if ( ((*NL(LSAACTR_tind))==(*NL(MSAACTR_textend))) )
{ 
A_CALLPROC(NL(QJBACTR_fault),(104),(104,(NL(QJBACTR_fault)).nonlocals));
 /* line 1503: */
(*NL(ITAACTR_supflts)) = FEBACTR_fltgap;
 /* line 1504: */
 /* line 1505: */
 /* line 1506: */
YMBACTR = A68_FALSE;
} 
else
{ 
ZMBACTR = (*NL(LSAACTR_tind))+=1 ;
GKBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),ZMBACTR)));
 /* line 1507: */
 /* line 1508: */
ANBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
BNBACTR = ((*(&((&A_R1INDEX(NL(Charset),ANBACTR))->Type)))!=RKBACTR_stringquote);
if ( ! BNBACTR )
{{ 
CNBACTR = (*NL(LSAACTR_tind))+=1 ;
GKBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),CNBACTR)));
 /* line 1509: */
 /* line 1510: */
 /* line 1511: */
ENBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
DNBACTR = ((*(&((&A_R1INDEX(NL(Charset),ENBACTR))->Type)))==RKBACTR_stringquote);
} 
BNBACTR = DNBACTR;
}
 /* line 1512: */
YMBACTR = BNBACTR;
} 
 /* line 1513: */
FNBACTR = YMBACTR;
if ( !FNBACTR ) break;
 /* line 1514: */
GNBACTR = (*NL(ETAACTR_stringsize))+=1 ;
HNBACTR = (&A_VINDEX(NL(ATAACTR_string),GNBACTR)) ;
(*HNBACTR) = GKBACTR_c;
}
 /* line 1516: */
XMBACTR_out:
(*NL(LSAACTR_tind))-=1;
 /* line 1517: */
(*NL(GTAACTR_stringbase)) = 0;
 /* line 1518: */
(*NL(FTAACTR_noofchars)) = (*NL(ETAACTR_stringsize));
 /* line 1519: */
 /* line 1520: */
 /* line 1524: */
JKBACTR_ans = LCBACTR_stringtok;
} 
break;
case 6: 
{ 
(*NL(QSAACTR_compsize)) = (*NL(RSAACTR_comphash)) = 0;
 /* line 1525: */
(*NL(OSAACTR_compsymb)) = NL(XTAACTR_spaces);
 /* line 1526: */
(*NL(BUAACTR_typechar1)) = ASAACTR_bold;
 /* line 1528: */
for ( ;; )
{ 
INBACTR = (EKBACTR_type==ASAACTR_bold);
if ( ! INBACTR )
{ /* line 1529: */
INBACTR = (EKBACTR_type==QKBACTR_digit);
}
if ( !(INBACTR) ) break;
 /* line 1530: */
if ( ((*NL(QSAACTR_compsize))!=VDAACTR_maxid) )
{ 
 /* line 1531: */
if ( (EKBACTR_type==ASAACTR_bold) )
{ 
 /* line 1532: */
 /* line 1533: */
KNBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
JNBACTR = ((-1)-(*(&((&A_R1INDEX(NL(Charset),KNBACTR))->Value))));
} 
else
{ 
JNBACTR = (A68_INT)(unsigned char)GKBACTR_c;
} 
JKBACTR_ans = JNBACTR;
 /* line 1534: */
(*NL(RSAACTR_comphash))+=JKBACTR_ans;
 /* line 1535: */
 /* line 1536: */
MNBACTR = A_ISVEC(LNBACTR,NL(OSAACTR_compsymb),32,A68_CHAR ) ;
NNBACTR = (*NL(QSAACTR_compsize))+=1 ;
ONBACTR = (&A_VINDEX(MNBACTR,NNBACTR)) ;
(*ONBACTR) = (A68_SSBITS)JKBACTR_ans;
} 
 /* line 1537: */
PNBACTR = (*NL(LSAACTR_tind))+=1 ;
GKBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),PNBACTR)));
 /* line 1538: */
 /* line 1539: */
QNBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
EKBACTR_type = (*(&((&A_R1INDEX(NL(Charset),QNBACTR))->Type)));
}
 /* line 1541: */
(*NL(RSAACTR_comphash)) = ((A68_INT )(A68_BITS )((A68_BITS )(*NL(RSAACTR_comphash))&(A68_BITS )63)+1);
 /* line 1543: */
SNBACTR = A_ISVEC(RNBACTR,NL(OSAACTR_compsymb),32,A68_CHAR ) ;
JKBACTR_ans = A_CALLPROC(NL(Lookup),(A_VTRIM(TNBACTR,(SNBACTR),A_VTSCRIPT(&(TNBACTR.upb),(SNBACTR).upb,1,(*NL(QSAACTR_compsize)))), A68_TRUE),(A_VTRIM(TNBACTR,(SNBACTR),A_VTSCRIPT(&(TNBACTR.upb),(SNBACTR).upb,1,(*NL(QSAACTR_compsize)))), A68_TRUE,(NL(Lookup)).nonlocals));
 /* line 1544: */
 /* line 1545: */
 /* line 1548: */
(*NL(LSAACTR_tind))-=1;
} 
break;
case 7: 
 /* line 1551: */
MKBACTR_strop = 1;
break;
case 8: 
 /* line 1553: */
 /* line 1556: */
MKBACTR_strop = 2;
break;
default: 
(*NL(QSAACTR_compsize)) = (*NL(RSAACTR_comphash)) = 0;
 /* line 1557: */
(*NL(OSAACTR_compsymb)) = NL(XTAACTR_spaces);
 /* line 1558: */
(*NL(BUAACTR_typechar1)) = EKBACTR_type;
 /* line 1559: */
VNBACTR_l1:
 /* line 1560: */
if ( ((*NL(QSAACTR_compsize))!=VDAACTR_maxid) )
{ 
XNBACTR = A_ISVEC(WNBACTR,NL(OSAACTR_compsymb),32,A68_CHAR ) ;
YNBACTR = (*NL(QSAACTR_compsize))+=1 ;
ZNBACTR = (&A_VINDEX(XNBACTR,YNBACTR)) ;
(*ZNBACTR) = GKBACTR_c;
 /* line 1561: */
 /* line 1562: */
(*NL(RSAACTR_comphash))+=(A68_INT)(unsigned char)GKBACTR_c;
} 
 /* line 1564: */
AOBACTR = (EKBACTR_type!=XKBACTR_compterm);
if ( AOBACTR )
{ /* line 1565: */
AOBACTR = (EKBACTR_type!=UKBACTR_simple);
}
if ( AOBACTR )
{ 
BOBACTR = (*NL(LSAACTR_tind))+=1 ;
GKBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),BOBACTR)));
 /* line 1566: */
COBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
EKBACTR_type = (*(&((&A_R1INDEX(NL(Charset),COBACTR))->Type)));
 /* line 1567: */
DOBACTR = (EKBACTR_type==WKBACTR_compound);
if ( ! DOBACTR )
{ /* line 1568: */
DOBACTR = (EKBACTR_type==XKBACTR_compterm);
}
if ( DOBACTR )
{ 
 /* line 1569: */
goto VNBACTR_l1;
} 
else
{ 
 /* line 1570: */
 /* line 1571: */
(*NL(LSAACTR_tind))-=1;
} 
} 
 /* line 1572: */
(*NL(RSAACTR_comphash)) = ((A68_INT )(A68_BITS )((A68_BITS )(*NL(RSAACTR_comphash))&(A68_BITS )63)+1);
 /* line 1574: */
 /* line 1575: */
EOBACTR = ((*NL(QSAACTR_compsize))!=1);
if ( ! EOBACTR )
{ /* line 1576: */
GOBACTR = A_ISVEC(FOBACTR,NL(OSAACTR_compsymb),32,A68_CHAR ) ;
HOBACTR = 1 ;
IOBACTR = (A68_INT)(unsigned char)(*(&A_VINDEX(GOBACTR,HOBACTR))) ;
EOBACTR = ((JKBACTR_ans = (*(&((&A_R1INDEX(NL(Charset),IOBACTR))->Value))))==FDBACTR_calllookup);
}
if ( EOBACTR )
{ 
 /* line 1577: */
 /* line 1578: */
KOBACTR = A_ISVEC(JOBACTR,NL(OSAACTR_compsymb),32,A68_CHAR ) ;
JKBACTR_ans = A_CALLPROC(NL(Lookup),(A_VTRIM(LOBACTR,(KOBACTR),A_VTSCRIPT(&(LOBACTR.upb),(KOBACTR).upb,1,(*NL(QSAACTR_compsize)))), A68_FALSE),(A_VTRIM(LOBACTR,(KOBACTR),A_VTSCRIPT(&(LOBACTR.upb),(KOBACTR).upb,1,(*NL(QSAACTR_compsize)))), A68_FALSE,(NL(Lookup)).nonlocals));
} 
break;
} 
 /* line 1580: */
 /* line 1581: */
 /* line 1582: */
if ( (MKBACTR_strop!=0) )
{ 
MOBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
JKBACTR_ans = (*(&((&A_R1INDEX(NL(Charset),MOBACTR))->Value)));
 /* line 1583: */
NOBACTR = (*NL(LSAACTR_tind))+=1 ;
GKBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),NOBACTR)));
 /* line 1584: */
OOBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
EKBACTR_type = (*(&((&A_R1INDEX(NL(Charset),OOBACTR))->Type)));
 /* line 1585: */
POBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
FKBACTR_value = (*(&((&A_R1INDEX(NL(Charset),POBACTR))->Value)));
 /* line 1587: */
 /* line 1588: */
if ( (EKBACTR_type!=PKBACTR_letter) )
{ 
 /* line 1590: */
 /* line 1591: */
(*NL(LSAACTR_tind))-=1;
} 
else
{ 
(*NL(QSAACTR_compsize)) = (*NL(RSAACTR_comphash)) = 0;
 /* line 1592: */
(*NL(OSAACTR_compsymb)) = NL(XTAACTR_spaces);
 /* line 1593: */
(*NL(BUAACTR_typechar1)) = EKBACTR_type;
 /* line 1595: */
for ( ;; )
{ 
QOBACTR = (FKBACTR_value<=36);
if ( QOBACTR )
{ /* line 1597: */
QOBACTR = (FKBACTR_value>=0);
}
if ( !(QOBACTR) ) break;
 /* line 1598: */
if ( ((*NL(QSAACTR_compsize))!=VDAACTR_maxid) )
{ 
SOBACTR = A_ISVEC(ROBACTR,NL(OSAACTR_compsymb),32,A68_CHAR ) ;
TOBACTR = (*NL(QSAACTR_compsize))+=1 ;
UOBACTR = (&A_VINDEX(SOBACTR,TOBACTR)) ;
(*UOBACTR) = GKBACTR_c;
 /* line 1599: */
 /* line 1600: */
(*NL(RSAACTR_comphash))+=(A68_INT)(unsigned char)GKBACTR_c;
} 
 /* line 1601: */
VOBACTR = (*NL(LSAACTR_tind))+=1 ;
GKBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),VOBACTR)));
 /* line 1602: */
WOBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
EKBACTR_type = (*(&((&A_R1INDEX(NL(Charset),WOBACTR))->Type)));
 /* line 1603: */
 /* line 1604: */
XOBACTR = (A68_INT)(unsigned char)GKBACTR_c ;
FKBACTR_value = (*(&((&A_R1INDEX(NL(Charset),XOBACTR))->Value)));
}
 /* line 1605: */
(*NL(RSAACTR_comphash)) = ((A68_INT )(A68_BITS )((A68_BITS )(*NL(RSAACTR_comphash))&(A68_BITS )63)+1);
 /* line 1607: */
ZOBACTR = A_ISVEC(YOBACTR,NL(OSAACTR_compsymb),32,A68_CHAR ) ;
JKBACTR_ans = A_CALLPROC(NL(Lookup),(A_VTRIM(APBACTR,(ZOBACTR),A_VTSCRIPT(&(APBACTR.upb),(ZOBACTR).upb,1,(*NL(QSAACTR_compsize)))), A68_TRUE),(A_VTRIM(APBACTR,(ZOBACTR),A_VTSCRIPT(&(APBACTR.upb),(ZOBACTR).upb,1,(*NL(QSAACTR_compsize)))), A68_TRUE,(NL(Lookup)).nonlocals));
 /* line 1608: */
 /* line 1609: */
if ( (MKBACTR_strop==1) )
{ 
 /* line 1610: */
(*NL(LSAACTR_tind))-=1;
} 
else
{ 
 /* line 1611: */
if ( (EKBACTR_type!=TKBACTR_matchstrop) )
{ 
(*NL(LSAACTR_tind))-=1;
 /* line 1612: */
 /* line 1613: */
if ( !(*NL(HBBACTR_incom)) )
{ 
A_CALLPROC(NL(QJBACTR_fault),(107),(107,(NL(QJBACTR_fault)).nonlocals));
 /* line 1615: */
 /* line 1616: */
(*NL(ITAACTR_supflts)) = FEBACTR_fltgap;
} 
else
{ 
 /* line 1617: */
 /* line 1618: */
 /* line 1619: */
 /* line 1620: */
JKBACTR_ans = HCBACTR_illegaltok;
} 
} 
} 
} 
} 
 /* line 1621: */
(*NL(ZRAACTR_isint)) = A68_TRUE;
 /* line 1622: */
 /* line 1623: */
BPBACTR = JKBACTR_ans;
} 
A_PROC_EXIT(primread);
return( BPBACTR );
} 
#undef NL

A_STATIC A68_INT  DPBACTR_fprimread(void *NonLocals)
#define NL(x) (((EPBACTR_fprimread *)NonLocals)->x)
{ 
A68_INT  JPBACTR_type;
A68_INT  KPBACTR_value;
A68_CHAR  LPBACTR_c;
A68_INT  MPBACTR_j;
A68_INT  NPBACTR_k;
A68_INT  OPBACTR_radix;
A68_INT  PPBACTR;  /* YIELD */
A68_INT  QPBACTR;  /* YIELD */
A68_INT  RPBACTR;  /* YIELD */
A68_INT  SPBACTR;  /* YIELD */
A68_CHAR * TPBACTR;  /* YIELD */
A68_INT  UPBACTR;  /* clause result */
A68_76  VPBACTR;  /* collateral clause result */
A68_VC  WPBACTR;  /* OPERATORS - trim index */
A68_106  XPBACTR;  /* OPERATORS - mode -> union mode */
A68_INT  YPBACTR;  /* YIELD */
A68_INT  ZPBACTR;  /* YIELD */
A68_INT  AQBACTR;  /* YIELD */
A68_BOOL  BQBACTR;  /* optbool result */
A68_BOOL  CQBACTR;  /* clause result */
A68_BOOL  DQBACTR;  /* optbool result */
A68_INT  EQBACTR;  /* YIELD */
A68_CHAR * FQBACTR;  /* YIELD */
A68_INT  IQBACTR;  /* YIELD */
A68_INT  JQBACTR;  /* YIELD */
A68_INT  KQBACTR;  /* YIELD */
A68_BOOL  LQBACTR;  /* clause result */
A68_INT  MQBACTR;  /* YIELD */
A68_CHAR * NQBACTR;  /* YIELD */
A68_BOOL  OQBACTR;  /* optbool result */
A68_INT  PQBACTR;  /* YIELD */
A68_CHAR * QQBACTR;  /* YIELD */
A68_INT  RQBACTR;  /* YIELD */
A68_INT  SQBACTR;  /* YIELD */
A68_INT  TQBACTR;  /* YIELD */
A68_INT  WQBACTR;  /* YIELD */
A68_INT  XQBACTR;  /* YIELD */
A68_INT  YQBACTR;  /* YIELD */
A68_INT  ZQBACTR;  /* YIELD */
A68_CHAR * ARBACTR;  /* YIELD */
A68_INT  BRBACTR;  /* YIELD */
A68_INT  CRBACTR;  /* YIELD */
A68_INT  DRBACTR;  /* YIELD */
A68_INT  ERBACTR;  /* YIELD */
A68_CHAR * FRBACTR;  /* YIELD */
A68_BOOL  GRBACTR;  /* optbool result */
A68_INT  HRBACTR;  /* YIELD */
A68_CHAR * IRBACTR;  /* YIELD */
A68_BOOL  JRBACTR;  /* optbool result */
A68_BOOL  KRBACTR;  /* optbool result */
A68_BOOL  LRBACTR;  /* optbool result */
A68_BOOL  MRBACTR;  /* optbool result */
A68_BOOL  NRBACTR;  /* optbool result */
A68_BOOL  ORBACTR;  /* optbool result */
A_PROC_ENTRY(fprimread);
{ 
 /* line 1628: */
 /* line 1629: */
OPBACTR_radix = 0;
 /* line 1631: */
GPBACTR_l:
PPBACTR = (*NL(LSAACTR_tind))+=1 ;
LPBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),PPBACTR)));
 /* line 1632: */
QPBACTR = (A68_INT)(unsigned char)LPBACTR_c ;
JPBACTR_type = (*(&((&A_R1INDEX(NL(Charset),QPBACTR))->Type)));
 /* line 1633: */
RPBACTR = (A68_INT)(unsigned char)LPBACTR_c ;
KPBACTR_value = (*(&((&A_R1INDEX(NL(Charset),RPBACTR))->Value)));
 /* line 1635: */
IPBACTR_l1:
 /* line 1636: */
if ( (JPBACTR_type>2) )
{ 
 /* line 1637: */
SPBACTR = (*NL(NSAACTR_find))+=1 ;
TPBACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),SPBACTR)) ;
(*TPBACTR) = LPBACTR_c;
} 
 /* line 1639: */
 /* line 1640: */
 /* line 1642: */
switch ( JPBACTR_type )
{ 
case 1: 
{ 
A_CALLPROC(NL(QJBACTR_fault),(102),(102,(NL(QJBACTR_fault)).nonlocals));
 /* line 1644: */
 /* line 1645: */
 /* line 1648: */
goto GPBACTR_l ;
UPBACTR = (*(A68_INT *)A68_NIL);
} 
break;
case 2: 
 /* line 1649: */
if ( ((*NL(LSAACTR_tind))==(*NL(MSAACTR_textend))) )
{ 
 /* line 1650: */
if ( ((*NL(NSAACTR_find))!=0) )
{ 
VPBACTR.Nochars = (-(*NL(NSAACTR_find)));
 /* line 1651: */
VPBACTR.Base = 0;
 /* line 1652: */
VPBACTR.Chars = A_VTRIM(WPBACTR,(NL(JSAACTR_globfbuff)),A_VTSCRIPT(&(WPBACTR.upb),(NL(JSAACTR_globfbuff)).upb,1,(*NL(NSAACTR_find))));
A_CALLPROC(NL(Output),(A_UNITE(XPBACTR,mode35,35,VPBACTR), ((*NL(FZAACTR_outlevel))+1)),(A_UNITE(XPBACTR,mode35,35,VPBACTR), ((*NL(FZAACTR_outlevel))+1),(NL(Output)).nonlocals));
 /* line 1653: */
(*NL(IBBACTR_noofstrings))+=(*NL(NSAACTR_find));
 /* line 1654: */
 /* line 1655: */
(*NL(NSAACTR_find)) = 0;
} 
 /* line 1656: */
 /* line 1657: */
UPBACTR = CCBACTR_rcnewline;
} 
else
{ 
 /* line 1658: */
 /* line 1661: */
goto GPBACTR_l ;
UPBACTR = (*(A68_INT *)A68_NIL);
} 
break;
case 3: 
 /* line 1663: */
if ( (KPBACTR_value==28) )
{ 
for ( ;; )
{ 
 /* line 1664: */
YPBACTR = (*NL(LSAACTR_tind))+=1 ;
LPBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),YPBACTR)));
 /* line 1665: */
ZPBACTR = (A68_INT)(unsigned char)LPBACTR_c ;
JPBACTR_type = (*(&((&A_R1INDEX(NL(Charset),ZPBACTR))->Type)));
 /* line 1666: */
AQBACTR = (A68_INT)(unsigned char)LPBACTR_c ;
KPBACTR_value = (*(&((&A_R1INDEX(NL(Charset),AQBACTR))->Value)));
 /* line 1668: */
BQBACTR = (JPBACTR_type==2);
if ( BQBACTR )
{ /* line 1669: */
BQBACTR = ((*NL(LSAACTR_tind))!=(*NL(MSAACTR_textend)));
}
CQBACTR = BQBACTR;
if ( !CQBACTR ) break;
/*SKIP*/;
}
 /* line 1670: */
DQBACTR = (KPBACTR_value==130);
if ( ! DQBACTR )
{DQBACTR = (KPBACTR_value==13);
}
if ( ! DQBACTR )
{ /* line 1671: */
DQBACTR = (KPBACTR_value==10);
}
if ( ! DQBACTR )
{DQBACTR = (KPBACTR_value==14);
}
if ( ! DQBACTR )
{ /* line 1672: */
DQBACTR = (KPBACTR_value==18);
}
if ( DQBACTR )
{ 
EQBACTR = (*NL(NSAACTR_find))+=1 ;
FQBACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),EQBACTR)) ;
(*FQBACTR) = LPBACTR_c;
 /* line 1673: */
 /* line 1674: */
UPBACTR = KPBACTR_value;
} 
else
{ 
(*NL(LSAACTR_tind))-=1;
 /* line 1675: */
 /* line 1676: */
 /* line 1677: */
 /* line 1678: */
UPBACTR = 28;
} 
} 
else
{ 
 /* line 1681: */
UPBACTR = KPBACTR_value;
} 
break;
case 4: 
{ 
OPBACTR_radix = KPBACTR_value;
 /* line 1682: */
HQBACTR_m:
for ( ;; )
{ 
 /* line 1683: */
IQBACTR = (*NL(LSAACTR_tind))+=1 ;
LPBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),IQBACTR)));
 /* line 1684: */
JQBACTR = (A68_INT)(unsigned char)LPBACTR_c ;
JPBACTR_type = (*(&((&A_R1INDEX(NL(Charset),JQBACTR))->Type)));
 /* line 1685: */
KQBACTR = (A68_INT)(unsigned char)LPBACTR_c ;
KPBACTR_value = (*(&((&A_R1INDEX(NL(Charset),KQBACTR))->Value)));
 /* line 1687: */
 /* line 1688: */
LQBACTR = (JPBACTR_type==4);
if ( !LQBACTR ) break;
MQBACTR = (*NL(NSAACTR_find))+=1 ;
NQBACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),MQBACTR)) ;
(*NQBACTR) = LPBACTR_c;
 /* line 1689: */
 /* line 1690: */
if ( (OPBACTR_radix<100) )
{ 
 /* line 1691: */
 /* line 1692: */
OPBACTR_radix = ((10*OPBACTR_radix)+KPBACTR_value);
} 
}
 /* line 1694: */
OQBACTR = (JPBACTR_type==2);
if ( OQBACTR )
{ /* line 1695: */
OQBACTR = ((*NL(LSAACTR_tind))!=(*NL(MSAACTR_textend)));
}
if ( OQBACTR )
{ 
 /* line 1696: */
goto HQBACTR_m;
} 
 /* line 1697: */
 /* line 1699: */
if ( (KPBACTR_value==27) )
{ 
 /* line 1700: */
if ( (OPBACTR_radix>16) )
{ 
OPBACTR_radix = 16;
 /* line 1701: */
 /* line 1703: */
A_CALLPROC(NL(QJBACTR_fault),(103),(103,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 1704: */
PQBACTR = (*NL(NSAACTR_find))+=1 ;
QQBACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),PQBACTR)) ;
(*QQBACTR) = LPBACTR_c;
 /* line 1706: */
RQBACTR = (*NL(LSAACTR_tind))+=1 ;
LPBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),RQBACTR)));
 /* line 1707: */
SQBACTR = (A68_INT)(unsigned char)LPBACTR_c ;
JPBACTR_type = (*(&((&A_R1INDEX(NL(Charset),SQBACTR))->Type)));
 /* line 1708: */
TQBACTR = (A68_INT)(unsigned char)LPBACTR_c ;
KPBACTR_value = (*(&((&A_R1INDEX(NL(Charset),TQBACTR))->Value)));
 /* line 1709: */
 /* line 1710: */
if ( (JPBACTR_type==5) )
{ 
 /* line 1711: */
goto IPBACTR_l1;
} 
else
{ 
 /* line 1712: */
(*NL(LSAACTR_tind))-=1;
} 
 /* line 1713: */
 /* line 1714: */
UPBACTR = (-2);
} 
else
{ 
(*NL(LSAACTR_tind))-=1;
 /* line 1715: */
 /* line 1716: */
 /* line 1717: */
 /* line 1720: */
UPBACTR = 8;
} 
} 
break;
case 5: 
{ 
for ( ;; )
{ 
 /* line 1721: */
if ( ((*NL(LSAACTR_tind))==(*NL(MSAACTR_textend))) )
{ 
A_CALLPROC(NL(QJBACTR_fault),(104),(104,(NL(QJBACTR_fault)).nonlocals));
 /* line 1723: */
 /* line 1724: */
 /* line 1725: */
goto VQBACTR_out;
} 
else
{ 
WQBACTR = (*NL(LSAACTR_tind))+=1 ;
LPBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),WQBACTR)));
 /* line 1726: */
XQBACTR = (A68_INT)(unsigned char)LPBACTR_c ;
JPBACTR_type = (*(&((&A_R1INDEX(NL(Charset),XQBACTR))->Type)));
 /* line 1727: */
YQBACTR = (A68_INT)(unsigned char)LPBACTR_c ;
KPBACTR_value = (*(&((&A_R1INDEX(NL(Charset),YQBACTR))->Value)));
 /* line 1728: */
ZQBACTR = (*NL(NSAACTR_find))+=1 ;
ARBACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),ZQBACTR)) ;
(*ARBACTR) = LPBACTR_c;
 /* line 1729: */
 /* line 1731: */
 /* line 1732: */
if ( (JPBACTR_type==5) )
{ 
BRBACTR = (*NL(LSAACTR_tind))+=1 ;
LPBACTR_c = (*(&A_VINDEX(NL(HSAACTR_textbuff),BRBACTR)));
 /* line 1733: */
CRBACTR = (A68_INT)(unsigned char)LPBACTR_c ;
JPBACTR_type = (*(&((&A_R1INDEX(NL(Charset),CRBACTR))->Type)));
 /* line 1734: */
DRBACTR = (A68_INT)(unsigned char)LPBACTR_c ;
KPBACTR_value = (*(&((&A_R1INDEX(NL(Charset),DRBACTR))->Value)));
 /* line 1735: */
 /* line 1736: */
if ( (JPBACTR_type!=5) )
{ 
 /* line 1737: */
goto VQBACTR_out;
} 
else
{ 
 /* line 1738: */
 /* line 1739: */
ERBACTR = (*NL(NSAACTR_find))+=1 ;
FRBACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),ERBACTR)) ;
(*FRBACTR) = LPBACTR_c;
} 
} 
 /* line 1740: */
 /* line 1741: */
if ( (OPBACTR_radix!=0) )
{ 
GRBACTR = (KPBACTR_value>=OPBACTR_radix);
if ( GRBACTR )
{ /* line 1742: */
GRBACTR = (KPBACTR_value!=37);
}
 /* line 1743: */
if ( GRBACTR )
{ 
 /* line 1744: */
 /* line 1745: */
 /* line 1746: */
 /* line 1747: */
A_CALLPROC(NL(QJBACTR_fault),(105),(105,(NL(QJBACTR_fault)).nonlocals));
} 
} 
} 
}
 /* line 1748: */
VQBACTR_out:
(*NL(LSAACTR_tind))-=1;
 /* line 1749: */
 /* line 1750: */
if ( (JPBACTR_type==2) )
{ 
 /* line 1751: */
HRBACTR = (*NL(NSAACTR_find))+=1 ;
IRBACTR = (&A_VINDEX(NL(JSAACTR_globfbuff),HRBACTR)) ;
(*IRBACTR) = LPBACTR_c;
} 
 /* line 1752: */
 /* line 1753: */
 /* line 1755: */
UPBACTR = LCBACTR_stringtok;
} 
break;
default: 
NPBACTR_k = (*NL(LSAACTR_tind))-=1;
 /* line 1756: */
JRBACTR = ((MPBACTR_j = A_CALLPROC(NL(ZJBACTR_primread),(),((NL(ZJBACTR_primread)).nonlocals)))>=ACBACTR_rccomment);
if ( JRBACTR )
{JRBACTR = (MPBACTR_j<CCBACTR_rcnewline);
}
 /* line 1757: */
if ( ! JRBACTR )
{KRBACTR = (MPBACTR_j>=GCBACTR_rcpragmat);
if ( KRBACTR )
{KRBACTR = (MPBACTR_j<HCBACTR_illegaltok);
}
 /* line 1758: */
JRBACTR = KRBACTR;
}
if ( JRBACTR )
{ 
(*NL(NSAACTR_find))-=1;
 /* line 1759: */
 /* line 1760: */
UPBACTR = MPBACTR_j;
} 
else
{ 
 /* line 1761: */
LRBACTR = (MPBACTR_j==160);
if ( ! LRBACTR )
{MRBACTR = (MPBACTR_j==128);
if ( ! MRBACTR )
{MRBACTR = (MPBACTR_j<60);
}
if ( MRBACTR )
{MRBACTR = ((*NL(QSAACTR_compsize))==1);
}
 /* line 1762: */
LRBACTR = MRBACTR;
}
if ( ! LRBACTR )
{ /* line 1763: */
LRBACTR = (MPBACTR_j==130);
}
 /* line 1764: */
if ( LRBACTR )
{ 
UPBACTR = MPBACTR_j;
} 
else
{ 
NRBACTR = (MPBACTR_j==YCBACTR_biplus);
if ( NRBACTR )
{ /* line 1765: */
NRBACTR = ((*NL(QSAACTR_compsize))==1);
}
 /* line 1766: */
if ( NRBACTR )
{ 
UPBACTR = (-1);
} 
else
{ 
ORBACTR = (MPBACTR_j==ZCBACTR_biminus);
if ( ORBACTR )
{ /* line 1767: */
ORBACTR = ((*NL(QSAACTR_compsize))==1);
}
 /* line 1768: */
if ( ORBACTR )
{ 
UPBACTR = 0;
} 
else
{ 
 /* line 1769: */
if ( (KPBACTR_value==130) )
{ 
(*NL(LSAACTR_tind)) = (NPBACTR_k+1);
 /* line 1770: */
 /* line 1771: */
UPBACTR = 9;
} 
else
{ 
(*NL(LSAACTR_tind)) = NPBACTR_k;
 /* line 1772: */
 /* line 1773: */
 /* line 1774: */
 /* line 1775: */
UPBACTR = 100;
} 
} 
} 
} 
} 
break;
} 
} 
A_PROC_EXIT(fprimread);
return( UPBACTR );
} 
#undef NL

A_STATIC A68_INT  SRBACTR_insertprocp(A68_INT  Deproc, A68_54 * Pars, void *NonLocals)
#define NL(x) (((TRBACTR_insertprocp *)NonLocals)->x)
{ 
A68_INT  WRBACTR_j;
A68_54 * XRBACTR_ml1;
A68_54 * YRBACTR_ml2;
A68_INT  ZRBACTR_i;
A68_INT  ASBACTR;  /* to part of loop */
A68_66  BSBACTR;  /* united object - for case conformity */
A68_57 * CSBACTR_pp;
A68_BOOL  DSBACTR;  /* optbool result */
A68_BOOL  ESBACTR;  /* optbool result */
A68_BOOL  FSBACTR;  /* optbool result */
A68_BOOL  GSBACTR;  /* clause result */
A68_57  HSBACTR;  /* collateral clause result */
A68_INT  ISBACTR;  /* YIELD */
A68_57 * JSBACTR;  /* YIELD */
A68_66  KSBACTR;  /* OPERATORS - mode -> union mode */
A68_66 * LSBACTR;  /* YIELD */
A68_INT  MSBACTR;  /* clause result */
A_PROC_ENTRY(insertprocp);
 /* line 1780: */
{ 
 /* line 1781: */
 /* line 1782: */
 /* line 1783: */
ASBACTR = (*NL(VYAACTR_lastmode));
for ( ZRBACTR_i = NL(YYAACTR_newmode1);
ZRBACTR_i <= ASBACTR;
ZRBACTR_i += 1 )
{ 
 /* line 1784: */
BSBACTR = (*(&A_VINDEX(NL(KUAACTR_modes),ZRBACTR_i))) ;
switch ( BSBACTR.mode )
{ 
case 3: /* REF STRUCT(INT,REF MODE54)  */
CSBACTR_pp = (BSBACTR.data.mode3);
 /* line 1785: */
 /* line 1786: */
DSBACTR = ((*(&(CSBACTR_pp->Deproc)))==Deproc);
if ( DSBACTR )
{{ 
XRBACTR_ml1 = (*(&(CSBACTR_pp->Pars)));
 /* line 1787: */
YRBACTR_ml2 = Pars;
 /* line 1788: */
for ( ;; )
{ 
 /* line 1789: */
ESBACTR = (XRBACTR_ml1!=OQAACTR_nilml);
if ( ESBACTR )
{ /* line 1790: */
ESBACTR = (YRBACTR_ml2!=OQAACTR_nilml);
}
if ( ESBACTR )
{ /* line 1791: */
ESBACTR = ((*(&(XRBACTR_ml1->Mode)))==(*(&(YRBACTR_ml2->Mode))));
}
if ( !(ESBACTR) ) break;
XRBACTR_ml1 = (*(&(XRBACTR_ml1->Rest)));
 /* line 1792: */
 /* line 1793: */
YRBACTR_ml2 = (*(&(YRBACTR_ml2->Rest)));
}
 /* line 1794: */
FSBACTR = (XRBACTR_ml1==OQAACTR_nilml);
if ( FSBACTR )
{ /* line 1795: */
FSBACTR = (YRBACTR_ml2==OQAACTR_nilml);
}
 /* line 1796: */
GSBACTR = FSBACTR;
} 
DSBACTR = GSBACTR;
}
if ( DSBACTR )
{ 
WRBACTR_j = ZRBACTR_i;
 /* line 1797: */
 /* line 1798: */
 /* line 1799: */
 /* line 1800: */
goto VRBACTR_end;
} 
break;
default: 
 /* line 1801: */
/*SKIP*/;
break;
} 
}
 /* line 1803: */
 /* line 1804: */
if ( ((*NL(VYAACTR_lastmode))<TDAACTR_upbofmodes) )
{ 
HSBACTR.Deproc = Deproc;
 /* line 1805: */
HSBACTR.Pars = Pars;
ISBACTR = WRBACTR_j = (*NL(VYAACTR_lastmode))+=1 ;
JSBACTR = A_HEAP(A68_57 ) ;
(*JSBACTR) = HSBACTR ;
LSBACTR = (&A_VINDEX(NL(KUAACTR_modes),ISBACTR)) ;
(*LSBACTR) = A_UNITE(KSBACTR,mode3,3,JSBACTR);
} 
else
{ 
 /* line 1807: */
A_CALLPROC(NL(VJBACTR_abort),(206),(206,(NL(VJBACTR_abort)).nonlocals));
} 
 /* line 1809: */
VRBACTR_end:
 /* line 1810: */
MSBACTR = WRBACTR_j;
} 
A_PROC_EXIT(insertprocp);
return( MSBACTR );
} 
#undef NL

A_STATIC A68_INT  PSBACTR_insertunion(A68_54 * Rm, void *NonLocals)
#define NL(x) (((QSBACTR_insertunion *)NonLocals)->x)
{ 
A68_INT  TSBACTR_j;
A68_54 * USBACTR_ml1;
A68_54 * VSBACTR_ml2;
A68_INT  WSBACTR_i;
A68_INT  XSBACTR;  /* to part of loop */
A68_66  YSBACTR;  /* united object - for case conformity */
A68_56 * ZSBACTR_u;
A68_BOOL  ATBACTR;  /* optbool result */
A68_BOOL  BTBACTR;  /* optbool result */
A68_BOOL  CTBACTR;  /* clause result */
A68_56  DTBACTR;  /* collateral clause result */
A68_INT  ETBACTR;  /* YIELD */
A68_56 * FTBACTR;  /* YIELD */
A68_66  GTBACTR;  /* OPERATORS - mode -> union mode */
A68_66 * HTBACTR;  /* YIELD */
A68_INT  ITBACTR;  /* clause result */
A_PROC_ENTRY(insertunion);
 /* line 1813: */
{ 
 /* line 1814: */
 /* line 1815: */
 /* line 1816: */
XSBACTR = (*NL(VYAACTR_lastmode));
for ( WSBACTR_i = NL(YYAACTR_newmode1);
WSBACTR_i <= XSBACTR;
WSBACTR_i += 1 )
{ 
 /* line 1817: */
YSBACTR = (*(&A_VINDEX(NL(KUAACTR_modes),WSBACTR_i))) ;
switch ( YSBACTR.mode )
{ 
case 2: /* REF STRUCT(INT,REF MODE54)  */
ZSBACTR_u = (YSBACTR.data.mode2);
 /* line 1818: */
USBACTR_ml1 = Rm;
 /* line 1819: */
VSBACTR_ml2 = (*(&(ZSBACTR_u->Modelist)));
 /* line 1820: */
for ( ;; )
{ 
 /* line 1821: */
ATBACTR = (USBACTR_ml1!=OQAACTR_nilml);
if ( ATBACTR )
{ /* line 1822: */
ATBACTR = (VSBACTR_ml2!=OQAACTR_nilml);
}
if ( ATBACTR )
{ /* line 1823: */
ATBACTR = ((*(&(USBACTR_ml1->Mode)))==(*(&(VSBACTR_ml2->Mode))));
}
if ( !(ATBACTR) ) break;
USBACTR_ml1 = (*(&(USBACTR_ml1->Rest)));
 /* line 1824: */
 /* line 1825: */
VSBACTR_ml2 = (*(&(VSBACTR_ml2->Rest)));
}
 /* line 1826: */
BTBACTR = (USBACTR_ml1==OQAACTR_nilml);
if ( BTBACTR )
{ /* line 1827: */
BTBACTR = (VSBACTR_ml2==OQAACTR_nilml);
}
CTBACTR = BTBACTR;
if ( CTBACTR )
{ 
TSBACTR_j = WSBACTR_i;
 /* line 1828: */
 /* line 1829: */
 /* line 1830: */
 /* line 1831: */
goto SSBACTR_end;
} 
break;
default: 
 /* line 1832: */
/*SKIP*/;
break;
} 
}
 /* line 1834: */
 /* line 1835: */
if ( ((*NL(VYAACTR_lastmode))<TDAACTR_upbofmodes) )
{ 
DTBACTR.Rdenno = 0;
 /* line 1836: */
DTBACTR.Modelist = Rm;
ETBACTR = TSBACTR_j = (*NL(VYAACTR_lastmode))+=1 ;
FTBACTR = A_HEAP(A68_56 ) ;
(*FTBACTR) = DTBACTR ;
HTBACTR = (&A_VINDEX(NL(KUAACTR_modes),ETBACTR)) ;
(*HTBACTR) = A_UNITE(GTBACTR,mode2,2,FTBACTR);
} 
else
{ 
 /* line 1838: */
A_CALLPROC(NL(VJBACTR_abort),(206),(206,(NL(VJBACTR_abort)).nonlocals));
} 
 /* line 1840: */
SSBACTR_end:
 /* line 1841: */
ITBACTR = TSBACTR_j;
} 
A_PROC_EXIT(insertunion);
return( ITBACTR );
} 
#undef NL

A_STATIC A68_INT  MTBACTR_insertstrct(A68_INT  Deflex, A68_58 * Sels, void *NonLocals)
#define NL(x) (((NTBACTR_insertstrct *)NonLocals)->x)
{ 
A68_INT  QTBACTR_j;
A68_58 * RTBACTR_sl1;
A68_58 * STBACTR_sl2;
A68_INT  TTBACTR_i;
A68_INT  UTBACTR;  /* to part of loop */
A68_66  VTBACTR;  /* united object - for case conformity */
A68_59 * WTBACTR_str;
A68_BOOL  XTBACTR;  /* optbool result */
A68_VC  YTBACTR;  /* OPERATORS - istruct -> vector */
A68_31  ZTBACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AUBACTR;  /* OPERATORS - istruct -> vector */
A68_31  BUBACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  CUBACTR;  /* optbool result */
A68_BOOL  DUBACTR;  /* clause result */
A68_59  EUBACTR;  /* collateral clause result */
A68_INT  FUBACTR;  /* YIELD */
A68_59 * GUBACTR;  /* YIELD */
A68_66  HUBACTR;  /* OPERATORS - mode -> union mode */
A68_66 * IUBACTR;  /* YIELD */
A68_INT  JUBACTR;  /* clause result */
A_PROC_ENTRY(insertstrct);
 /* line 1844: */
{ 
 /* line 1845: */
 /* line 1846: */
 /* line 1847: */
UTBACTR = (*NL(VYAACTR_lastmode));
for ( TTBACTR_i = 22;
TTBACTR_i <= UTBACTR;
TTBACTR_i += 1 )
{ 
 /* line 1848: */
VTBACTR = (*(&A_VINDEX(NL(KUAACTR_modes),TTBACTR_i))) ;
switch ( VTBACTR.mode )
{ 
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
WTBACTR_str = (VTBACTR.data.mode4);
 /* line 1849: */
RTBACTR_sl1 = (*(&(WTBACTR_str->Sels)));
 /* line 1850: */
STBACTR_sl2 = Sels;
 /* line 1851: */
for ( ;; )
{ 
 /* line 1852: */
XTBACTR = (RTBACTR_sl1!=RQAACTR_nilsel);
if ( XTBACTR )
{ /* line 1853: */
XTBACTR = (STBACTR_sl2!=RQAACTR_nilsel);
}
if ( XTBACTR )
{ /* line 1854: */
ZTBACTR = (*(&(RTBACTR_sl1->Name))) ;
BUBACTR = (*(&(STBACTR_sl2->Name))) ;
XTBACTR = A_VC_EQ(A_HISVEC(YTBACTR,ZTBACTR,32,A68_CHAR ),A_HISVEC(AUBACTR,BUBACTR,32,A68_CHAR ));
}
if ( XTBACTR )
{ /* line 1855: */
XTBACTR = ((*(&(RTBACTR_sl1->Mode)))==(*(&(STBACTR_sl2->Mode))));
}
if ( !(XTBACTR) ) break;
RTBACTR_sl1 = (*(&(RTBACTR_sl1->Rest)));
 /* line 1856: */
 /* line 1857: */
STBACTR_sl2 = (*(&(STBACTR_sl2->Rest)));
}
 /* line 1858: */
CUBACTR = (RTBACTR_sl1==RQAACTR_nilsel);
if ( CUBACTR )
{ /* line 1859: */
CUBACTR = (STBACTR_sl2==RQAACTR_nilsel);
}
DUBACTR = CUBACTR;
if ( DUBACTR )
{ 
QTBACTR_j = TTBACTR_i;
 /* line 1860: */
 /* line 1861: */
 /* line 1862: */
 /* line 1863: */
goto PTBACTR_end;
} 
break;
default: 
 /* line 1864: */
/*SKIP*/;
break;
} 
}
 /* line 1866: */
 /* line 1867: */
if ( ((*NL(VYAACTR_lastmode))<TDAACTR_upbofmodes) )
{ 
EUBACTR.Rdenno = 0;
EUBACTR.Deflex = Deflex;
 /* line 1868: */
EUBACTR.Sels = Sels;
FUBACTR = QTBACTR_j = (*NL(VYAACTR_lastmode))+=1 ;
GUBACTR = A_HEAP(A68_59 ) ;
(*GUBACTR) = EUBACTR ;
IUBACTR = (&A_VINDEX(NL(KUAACTR_modes),FUBACTR)) ;
(*IUBACTR) = A_UNITE(HUBACTR,mode4,4,GUBACTR);
} 
else
{ 
 /* line 1870: */
A_CALLPROC(NL(VJBACTR_abort),(206),(206,(NL(VJBACTR_abort)).nonlocals));
} 
 /* line 1872: */
PTBACTR_end:
 /* line 1873: */
JUBACTR = QTBACTR_j;
} 
A_PROC_EXIT(insertstrct);
return( JUBACTR );
} 
#undef NL

A_STATIC A68_INT  MUBACTR_insertprc(A68_INT  Mode, void *NonLocals)
#define NL(x) (((NUBACTR_insertprc *)NonLocals)->x)
{ 
A68_INT  QUBACTR_j;
A68_55  RUBACTR_p;
A68_INT * SUBACTR;  /* YIELD */
A68_INT  TUBACTR_i;
A68_INT  UUBACTR;  /* to part of loop */
A68_66  VUBACTR;  /* united object - for case conformity */
A68_55 * WUBACTR_pp;
A68_INT  XUBACTR;  /* YIELD */
A68_55 * YUBACTR;  /* YIELD */
A68_66  ZUBACTR;  /* OPERATORS - mode -> union mode */
A68_66 * AVBACTR;  /* YIELD */
A68_INT  BVBACTR;  /* clause result */
A_PROC_ENTRY(insertprc);
 /* line 1876: */
{ 
 /* line 1877: */
 /* line 1878: */
SUBACTR = (&((&RUBACTR_p)->Deproc)) ;
(*SUBACTR) = Mode;
 /* line 1879: */
 /* line 1880: */
UUBACTR = (*NL(VYAACTR_lastmode));
for ( TUBACTR_i = NL(YYAACTR_newmode1);
TUBACTR_i <= UUBACTR;
TUBACTR_i += 1 )
{ 
 /* line 1881: */
VUBACTR = (*(&A_VINDEX(NL(KUAACTR_modes),TUBACTR_i))) ;
switch ( VUBACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
WUBACTR_pp = (VUBACTR.data.mode6);
 /* line 1882: */
 /* line 1883: */
if ( ((*(&(WUBACTR_pp->Deproc)))==Mode) )
{ 
QUBACTR_j = TUBACTR_i;
 /* line 1884: */
 /* line 1885: */
 /* line 1886: */
 /* line 1887: */
goto PUBACTR_end;
} 
break;
default: 
 /* line 1888: */
/*SKIP*/;
break;
} 
}
 /* line 1890: */
 /* line 1891: */
if ( ((*NL(VYAACTR_lastmode))<TDAACTR_upbofmodes) )
{ 
 /* line 1892: */
XUBACTR = QUBACTR_j = (*NL(VYAACTR_lastmode))+=1 ;
YUBACTR = A_HEAP(A68_55 ) ;
(*YUBACTR) = RUBACTR_p ;
AVBACTR = (&A_VINDEX(NL(KUAACTR_modes),XUBACTR)) ;
(*AVBACTR) = A_UNITE(ZUBACTR,mode6,6,YUBACTR);
} 
else
{ 
 /* line 1894: */
A_CALLPROC(NL(VJBACTR_abort),(206),(206,(NL(VJBACTR_abort)).nonlocals));
} 
 /* line 1896: */
PUBACTR_end:
 /* line 1898: */
BVBACTR = QUBACTR_j;
} 
A_PROC_EXIT(insertprc);
return( BVBACTR );
} 
#undef NL

A_STATIC A68_INT  GVBACTR_insertarray(A68_INT  Mode, A68_INT  Nods, A68_INT  Deflex, void *NonLocals)
#define NL(x) (((HVBACTR_insertarray *)NonLocals)->x)
{ 
A68_INT  KVBACTR_j;
A68_INT  LVBACTR_i;
A68_INT  MVBACTR;  /* to part of loop */
A68_66  NVBACTR;  /* united object - for case conformity */
A68_62 * OVBACTR_a;
A68_BOOL  PVBACTR;  /* optbool result */
A68_BOOL  QVBACTR;  /* clause result */
A68_62  RVBACTR;  /* collateral clause result */
A68_INT  SVBACTR;  /* YIELD */
A68_62 * TVBACTR;  /* YIELD */
A68_66  UVBACTR;  /* OPERATORS - mode -> union mode */
A68_66 * VVBACTR;  /* YIELD */
A68_INT  WVBACTR;  /* clause result */
A_PROC_ENTRY(insertarray);
 /* line 1901: */
{ 
 /* line 1902: */
 /* line 1903: */
MVBACTR = (*NL(VYAACTR_lastmode));
for ( LVBACTR_i = HLAACTR_arraychar;
LVBACTR_i <= MVBACTR;
LVBACTR_i += 1 )
{ 
 /* line 1904: */
NVBACTR = (*(&A_VINDEX(NL(KUAACTR_modes),LVBACTR_i))) ;
switch ( NVBACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
OVBACTR_a = (NVBACTR.data.mode8);
 /* line 1905: */
PVBACTR = ((*(&(OVBACTR_a->Mode)))==Mode);
if ( PVBACTR )
{ /* line 1906: */
PVBACTR = ((*(&(OVBACTR_a->Nods)))==Nods);
}
if ( PVBACTR )
{ /* line 1907: */
if ( ((*(&(OVBACTR_a->Deflex)))>=0) )
{ 
 /* line 1908: */
QVBACTR = (Deflex>=0);
} 
else
{ 
 /* line 1909: */
 /* line 1910: */
QVBACTR = (Deflex<0);
} 
PVBACTR = QVBACTR;
}
if ( PVBACTR )
{ 
KVBACTR_j = LVBACTR_i;
 /* line 1911: */
 /* line 1912: */
 /* line 1913: */
 /* line 1914: */
goto JVBACTR_end;
} 
break;
default: 
 /* line 1915: */
/*SKIP*/;
break;
} 
}
 /* line 1917: */
 /* line 1918: */
if ( ((*NL(VYAACTR_lastmode))<TDAACTR_upbofmodes) )
{ 
 /* line 1919: */
RVBACTR.Rdenno = 0;
RVBACTR.Mode = Mode;
RVBACTR.Nods = Nods;
 /* line 1920: */
RVBACTR.Deflex = Deflex;
SVBACTR = KVBACTR_j = (*NL(VYAACTR_lastmode))+=1 ;
TVBACTR = A_HEAP(A68_62 ) ;
(*TVBACTR) = RVBACTR ;
VVBACTR = (&A_VINDEX(NL(KUAACTR_modes),SVBACTR)) ;
(*VVBACTR) = A_UNITE(UVBACTR,mode8,8,TVBACTR);
} 
else
{ 
 /* line 1922: */
A_CALLPROC(NL(VJBACTR_abort),(206),(206,(NL(VJBACTR_abort)).nonlocals));
} 
 /* line 1924: */
JVBACTR_end:
 /* line 1926: */
WVBACTR = KVBACTR_j;
} 
A_PROC_EXIT(insertarray);
return( WVBACTR );
} 
#undef NL

A_STATIC A68_INT  AWBACTR_insertvec(A68_INT  M, A68_INT  Deflex, void *NonLocals)
#define NL(x) (((BWBACTR_insertvec *)NonLocals)->x)
{ 
A68_INT  EWBACTR_j;
A68_INT  FWBACTR_i;
A68_INT  GWBACTR;  /* to part of loop */
A68_66  HWBACTR;  /* united object - for case conformity */
A68_61 * IWBACTR_rv;
A68_BOOL  JWBACTR;  /* optbool result */
A68_BOOL  KWBACTR;  /* clause result */
A68_61  LWBACTR;  /* collateral clause result */
A68_INT  MWBACTR;  /* YIELD */
A68_61 * NWBACTR;  /* YIELD */
A68_66  OWBACTR;  /* OPERATORS - mode -> union mode */
A68_66 * PWBACTR;  /* YIELD */
A68_INT  QWBACTR;  /* clause result */
A_PROC_ENTRY(insertvec);
 /* line 1929: */
{ 
 /* line 1930: */
 /* line 1931: */
GWBACTR = (*NL(VYAACTR_lastmode));
for ( FWBACTR_i = GLAACTR_vecchar;
FWBACTR_i <= GWBACTR;
FWBACTR_i += 1 )
{ 
 /* line 1932: */
HWBACTR = (*(&A_VINDEX(NL(KUAACTR_modes),FWBACTR_i))) ;
switch ( HWBACTR.mode )
{ 
case 7: /* REF STRUCT(INT,INT,INT)  */
IWBACTR_rv = (HWBACTR.data.mode7);
 /* line 1933: */
 /* line 1934: */
JWBACTR = ((*(&(IWBACTR_rv->Vecmode)))==M);
if ( JWBACTR )
{ /* line 1935: */
if ( ((*(&(IWBACTR_rv->Deflex)))>=0) )
{ 
 /* line 1936: */
KWBACTR = (Deflex>=0);
} 
else
{ 
 /* line 1937: */
 /* line 1938: */
KWBACTR = (Deflex<0);
} 
JWBACTR = KWBACTR;
}
if ( JWBACTR )
{ 
EWBACTR_j = FWBACTR_i;
 /* line 1939: */
 /* line 1940: */
 /* line 1941: */
 /* line 1942: */
goto DWBACTR_end;
} 
break;
default: 
 /* line 1943: */
/*SKIP*/;
break;
} 
}
 /* line 1945: */
 /* line 1946: */
if ( ((*NL(VYAACTR_lastmode))<TDAACTR_upbofmodes) )
{ 
LWBACTR.Rdenno = 0;
LWBACTR.Vecmode = M;
 /* line 1947: */
LWBACTR.Deflex = Deflex;
MWBACTR = EWBACTR_j = (*NL(VYAACTR_lastmode))+=1 ;
NWBACTR = A_HEAP(A68_61 ) ;
(*NWBACTR) = LWBACTR ;
PWBACTR = (&A_VINDEX(NL(KUAACTR_modes),MWBACTR)) ;
(*PWBACTR) = A_UNITE(OWBACTR,mode7,7,NWBACTR);
} 
else
{ 
 /* line 1949: */
A_CALLPROC(NL(VJBACTR_abort),(206),(206,(NL(VJBACTR_abort)).nonlocals));
} 
 /* line 1951: */
DWBACTR_end:
 /* line 1953: */
QWBACTR = EWBACTR_j;
} 
A_PROC_EXIT(insertvec);
return( QWBACTR );
} 
#undef NL

A_STATIC A68_INT  UWBACTR_insertis(A68_INT  M, A68_INT  L, void *NonLocals)
#define NL(x) (((VWBACTR_insertis *)NonLocals)->x)
{ 
A68_INT  YWBACTR_j;
A68_INT  ZWBACTR_i;
A68_INT  AXBACTR;  /* to part of loop */
A68_66  BXBACTR;  /* united object - for case conformity */
A68_60 * CXBACTR_ri;
A68_BOOL  DXBACTR;  /* optbool result */
A68_60  EXBACTR;  /* collateral clause result */
A68_INT  FXBACTR;  /* YIELD */
A68_60 * GXBACTR;  /* YIELD */
A68_66  HXBACTR;  /* OPERATORS - mode -> union mode */
A68_66 * IXBACTR;  /* YIELD */
A68_INT  JXBACTR;  /* clause result */
A_PROC_ENTRY(insertis);
 /* line 1956: */
{ 
 /* line 1957: */
 /* line 1958: */
AXBACTR = (*NL(VYAACTR_lastmode));
for ( ZWBACTR_i = NL(YYAACTR_newmode1);
ZWBACTR_i <= AXBACTR;
ZWBACTR_i += 1 )
{ 
 /* line 1959: */
BXBACTR = (*(&A_VINDEX(NL(KUAACTR_modes),ZWBACTR_i))) ;
switch ( BXBACTR.mode )
{ 
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
CXBACTR_ri = (BXBACTR.data.mode5);
 /* line 1960: */
DXBACTR = ((*(&(CXBACTR_ri->Imode)))==M);
if ( DXBACTR )
{ /* line 1961: */
DXBACTR = ((*(&(CXBACTR_ri->Length)))==L);
}
if ( DXBACTR )
{ 
YWBACTR_j = ZWBACTR_i;
 /* line 1962: */
 /* line 1963: */
 /* line 1964: */
 /* line 1965: */
goto XWBACTR_end;
} 
break;
default: 
 /* line 1966: */
/*SKIP*/;
break;
} 
}
 /* line 1968: */
 /* line 1969: */
if ( ((*NL(VYAACTR_lastmode))<TDAACTR_upbofmodes) )
{ 
EXBACTR.Rdenno = 0;
EXBACTR.Imode = M;
EXBACTR.Length = L;
 /* line 1970: */
EXBACTR.Deflex = 1;
FXBACTR = YWBACTR_j = (*NL(VYAACTR_lastmode))+=1 ;
GXBACTR = A_HEAP(A68_60 ) ;
(*GXBACTR) = EXBACTR ;
IXBACTR = (&A_VINDEX(NL(KUAACTR_modes),FXBACTR)) ;
(*IXBACTR) = A_UNITE(HXBACTR,mode5,5,GXBACTR);
} 
else
{ 
 /* line 1972: */
A_CALLPROC(NL(VJBACTR_abort),(206),(206,(NL(VJBACTR_abort)).nonlocals));
} 
 /* line 1974: */
XWBACTR_end:
 /* line 1976: */
JXBACTR = YWBACTR_j;
} 
A_PROC_EXIT(insertis);
return( JXBACTR );
} 
#undef NL

A_STATIC A68_INT  MXBACTR_insertassmntproc(A68_INT  M, void *NonLocals)
#define NL(x) (((NXBACTR_insertassmntproc *)NonLocals)->x)
{ 
A68_54  OXBACTR;  /* collateral clause result */
A68_54  PXBACTR;  /* collateral clause result */
A68_54 * QXBACTR;  /* YIELD */
A68_INT  RXBACTR;  /* clause result */
A68_54 * SXBACTR;  /* YIELD */
A_PROC_ENTRY(insertassmntproc);
 /* line 1979: */
 /* line 1980: */
OXBACTR.Mode = (M+KQAACTR_refmark);
PXBACTR.Mode = M;
PXBACTR.Rest = (A68_54 *)A68_NIL;
 /* line 1981: */
QXBACTR = A_HEAP(A68_54 ) ;
(*QXBACTR) = PXBACTR ;
OXBACTR.Rest = QXBACTR;
SXBACTR = A_HEAP(A68_54 ) ;
(*SXBACTR) = OXBACTR ;
RXBACTR = A_CALLPROC(NL(RRBACTR_insertprocp),((M+KQAACTR_refmark), SXBACTR),((M+KQAACTR_refmark), SXBACTR,(NL(RRBACTR_insertprocp)).nonlocals));
A_PROC_EXIT(insertassmntproc);
return( RXBACTR );
} 
#undef NL

A_STATIC A68_INT  VXBACTR_opproc(A68_108 * I, void *NonLocals)
#define NL(x) (((WXBACTR_opproc *)NonLocals)->x)
{ 
A68_54  XXBACTR;  /* collateral clause result */
A68_54 * ZXBACTR;  /* YIELD */
A68_54 * YXBACTR_ml;
A68_54  AYBACTR;  /* collateral clause result */
A68_54 * BYBACTR;  /* YIELD */
A68_INT  CYBACTR;  /* clause result */
A_PROC_ENTRY(opproc);
 /* line 1984: */
{ 
XXBACTR.Mode = (*(&(I->Rmode)));
XXBACTR.Rest = (A68_54 *)A68_NIL;
ZXBACTR = A_HEAP(A68_54 ) ;
(*ZXBACTR) = XXBACTR ;
YXBACTR_ml = ZXBACTR;
 /* line 1985: */
 /* line 1986: */
if ( ((*(&(I->Lmode)))!=0) )
{ 
AYBACTR.Mode = (*(&(I->Lmode)));
 /* line 1987: */
AYBACTR.Rest = YXBACTR_ml;
BYBACTR = A_HEAP(A68_54 ) ;
(*BYBACTR) = AYBACTR ;
YXBACTR_ml = BYBACTR;
} 
 /* line 1988: */
 /* line 1989: */
CYBACTR = A_CALLPROC(NL(RRBACTR_insertprocp),((*(&(I->Ans))), YXBACTR_ml),((*(&(I->Ans))), YXBACTR_ml,(NL(RRBACTR_insertprocp)).nonlocals));
} 
A_PROC_EXIT(opproc);
return( CYBACTR );
} 
#undef NL

A_STATIC A68_VOID  EYBACTR_freevalue(A68_125 * V)
{ 
A68_BITS  FYBACTR;  /* ADICOPS - >= */
A68_124 * GYBACTR_vl;
A68_124 * HYBACTR_vl1;
A68_124 ** IYBACTR;  /* YIELD */
A_PROC_ENTRY(freevalue);
 /* line 1992: */
 /* line 1993: */
FYBACTR = (*(&(V->Props))) ;
if ( A_LB_GE(FYBACTR,TLAACTR_heapbit) )
{ 
GYBACTR_vl = (*(&(V->Vlist)));
 /* line 1994: */
for ( ;; )
{ 
 /* line 1995: */
if ( !((GYBACTR_vl!=UQAACTR_nilvl)) ) break;
HYBACTR_vl1 = GYBACTR_vl;
 /* line 1996: */
GYBACTR_vl = (*(&(GYBACTR_vl->Rest)));
 /* line 1997: */
IYBACTR = (&(HYBACTR_vl1->Rest)) ;
(*IYBACTR) = LRAACTR_freevl;
 /* line 1998: */
 /* line 1999: */
LRAACTR_freevl = HYBACTR_vl1;
}
 /* line 2000: */
} 
A_PROC_EXIT(freevalue);
return;
} 
#undef NL

A_STATIC A68_124 * JYBACTR_globvlist(void)
{ 
A68_124 * KYBACTR;  /* clause result */
A68_124 * LYBACTR_vl;
A_PROC_ENTRY(globvlist);
 /* line 2004: */
 /* line 2005: */
if ( (LRAACTR_freevl==UQAACTR_nilvl) )
{ 
KYBACTR = A_HEAP(A68_124 );
} 
else
{ 
LYBACTR_vl = LRAACTR_freevl;
 /* line 2006: */
LRAACTR_freevl = (*(&(LRAACTR_freevl->Rest)));
 /* line 2007: */
 /* line 2008: */
KYBACTR = LYBACTR_vl;
} 
A_PROC_EXIT(globvlist);
return( KYBACTR );
} 
#undef NL

A_STATIC A68_VOID  OYBACTR_heapvalue(A68_125 * V, void *NonLocals)
#define NL(x) (((PYBACTR_heapvalue *)NonLocals)->x)
{ 
A68_124 ** QYBACTR_vl;
A68_124 * RYBACTR_heapvl;
A68_124 * SYBACTR;  /* YIELD */
A68_BITS * TYBACTR;  /* YIELD */
A_PROC_ENTRY(heapvalue);
 /* line 2011: */
 /* line 2012: */
if ( ((A68_BITS )((*(&(V->Props)))&TLAACTR_heapbit)==MQAACTR_z) )
{ 
QYBACTR_vl = (&(V->Vlist));
 /* line 2013: */
 /* line 2015: */
for ( ;; )
{ 
 /* line 2016: */
if ( !(((*QYBACTR_vl)!=UQAACTR_nilvl)) ) break;
A_CALLPROC(NL(NYBACTR_heapvalue),((&((*QYBACTR_vl)->V))),((&((*QYBACTR_vl)->V)),(NL(NYBACTR_heapvalue)).nonlocals));
 /* line 2017: */
SYBACTR = JYBACTR_globvlist() ;
(*SYBACTR) = (**QYBACTR_vl) ;
(*QYBACTR_vl) = SYBACTR;
 /* line 2018: */
 /* line 2019: */
QYBACTR_vl = (&((*QYBACTR_vl)->Rest));
}
 /* line 2020: */
 /* line 2021: */
TYBACTR = (&(V->Props)) ;
(*TYBACTR) = (A68_BITS )((*(&(V->Props)))|TLAACTR_heapbit);
} 
A_PROC_EXIT(heapvalue);
return;
} 
#undef NL

A_STATIC A68_VOID  WYBACTR_downandups(A68_125 * V, void *NonLocals)
#define NL(x) (((XYBACTR_downandups *)NonLocals)->x)
{ 
A68_124 * YYBACTR_vl;
A68_BITS  ZYBACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(downandups);
 /* line 2024: */
{ 
YYBACTR_vl = (*(&(V->Vlist)));
 /* line 2026: */
for ( ;; )
{ 
 /* line 2027: */
if ( !((YYBACTR_vl!=UQAACTR_nilvl)) ) break;
 /* line 2028: */
ZYBACTR = (*(&((&(YYBACTR_vl->V))->Props))) ;
if ( A_LB_GE(ZYBACTR,BRAACTR_downbit) )
{ 
A_CALLPROC(NL(Output),(SKAACTR_down, (*NL(FZAACTR_outlevel))),(SKAACTR_down, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2029: */
 /* line 2030: */
A_CALLPROC(NL(Output),(QKAACTR_up, (*NL(FZAACTR_outlevel))),(QKAACTR_up, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 2031: */
A_CALLPROC(NL(VYBACTR_downandups),((&(YYBACTR_vl->V))),((&(YYBACTR_vl->V)),(NL(VYBACTR_downandups)).nonlocals));
 /* line 2032: */
 /* line 2033: */
YYBACTR_vl = (*(&(YYBACTR_vl->Rest)));
}
 /* line 2034: */
} 
A_PROC_EXIT(downandups);
return;
} 
#undef NL

A_STATIC A68_VOID  CZBACTR_tidyv(A68_125 * V, void *NonLocals)
#define NL(x) (((DZBACTR_tidyv *)NonLocals)->x)
{ 
A68_BITS  EZBACTR;  /* ADICOPS - >= */
A68_125  FZBACTR;  /* collateral clause result */
A68_124  GZBACTR;  /* collateral clause result */
A68_124 * HZBACTR;  /* YIELD */
A68_BITS  IZBACTR;  /* ADICOPS - >= */
A68_BITS * JZBACTR;  /* YIELD */
A68_BITS * KZBACTR;  /* YIELD */
A_PROC_ENTRY(tidyv);
 /* line 2037: */
{ 
 /* line 2038: */
if ( ((*(&(V->Vlist)))==UQAACTR_nilvl) )
{ 
 /* line 2039: */
EZBACTR = (*(&(V->Props))) ;
if ( A_LB_GE(EZBACTR,SLAACTR_semibit) )
{ 
 /* line 2040: */
FZBACTR.Props = (A68_BITS )((A68_BITS )((*(&((*NL(QYAACTR_globcurrent))->Props)))|BRAACTR_downbit)|TLAACTR_heapbit);
FZBACTR.Mode = (-1);
GZBACTR.V = (*V);
GZBACTR.Type = ZMAACTR_xbegin;
GZBACTR.Rest = (A68_124 *)A68_NIL;
 /* line 2041: */
HZBACTR = JYBACTR_globvlist() ;
(*HZBACTR) = GZBACTR ;
FZBACTR.Vlist = HZBACTR;
 /* line 2042: */
FZBACTR.Labs = (A68_69 *)A68_NIL;
(*V) = FZBACTR;
} 
else
{ 
 /* line 2043: */
IZBACTR = (*(&(V->Props))) ;
if ( A_LB_GE(IZBACTR,BRAACTR_downbit) )
{ 
 /* line 2044: */
A_CALLPROC(NL(Output),(SKAACTR_down, (*NL(FZAACTR_outlevel))),(SKAACTR_down, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 2045: */
 /* line 2046: */
 /* line 2047: */
 /* line 2048: */
JZBACTR = (&(V->Props)) ;
(*JZBACTR) = (A68_BITS )((A68_BITS )((*(&(V->Props)))|BRAACTR_downbit)|(*(&((*NL(QYAACTR_globcurrent))->Props))));
} 
} 
else
{ 
 /* line 2049: */
 /* line 2050: */
KZBACTR = (&(V->Props)) ;
(*KZBACTR) = (A68_BITS )((A68_BITS )((*(&((*NL(QYAACTR_globcurrent))->Props)))|BRAACTR_downbit)|(*(&(V->Props))));
} 
 /* line 2052: */
A_CALLPROC(NL(Output),(QKAACTR_up, (*NL(FZAACTR_outlevel))),(QKAACTR_up, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2053: */
 /* line 2054: */
A_CALLPROC(NL(VYBACTR_downandups),(V),(V,(NL(VYBACTR_downandups)).nonlocals));
} 
A_PROC_EXIT(tidyv);
return;
} 
#undef NL

A_STATIC A68_VOID  QZBACTR_faultp(A68_INT  Messno, A68_INT  M1, A68_INT  M2, A68_31 * Id, void *NonLocals)
#define NL(x) (((RZBACTR_faultp *)NonLocals)->x)
{ 
A68_VC  UZBACTR;  /* avoid structure result */
A68_VC  VZBACTR_mess;
A68_43  XZBACTR_generator;   /* proc value of non-global proc */
A68_VC  DACACTR;  /* avoid structure result */
A68_VC  CACACTR_m;
A68_INT  EACACTR_mind;
A68_BOOL  FACACTR_dot;
A68_CHAR  GACACTR_c;
A68_179  IACACTR_outid;   /* proc value of non-global proc */
A68_jmp_buf SZBACTR_endf;
A68_179  UACACTR_outboldid;   /* proc value of non-global proc */
A68_47  IBCACTR_outchars;   /* proc value of non-global proc */
A68_150  PBCACTR_outmess;   /* proc value of non-global proc */
A68_150  YBCACTR_outint;   /* proc value of non-global proc */
A68_180  JCCACTR_outmode;   /* proc value of non-global proc */
A68_INT  NECACTR_i;
A68_INT  OECACTR;  /* to part of loop */
A68_BOOL  PECACTR;  /* optbool result */
A68_BOOL  QECACTR;  /* optbool result */
A68_INT  RECACTR;  /* YIELD */
A68_CHAR * SECACTR;  /* YIELD */
A68_VC  TECACTR;  /* OPERATORS - trim index */
if ( sigsetjmp( SZBACTR_endf.label,1) ) goto TZBACTR_endf;
A_PROC_ENTRY(faultp);
 /* line 2059: */
 /* line 2060: */
{ 
A_CALLPROC(NL(Message),(Messno, &UZBACTR),(Messno, &UZBACTR,(NL(Message)).nonlocals));
VZBACTR_mess = UZBACTR;
 /* line 2061: */
A_CLOSURE( XZBACTR_generator, YZBACTR_generator, ZZBACTR_generator );
A_CALLPROC(XZBACTR_generator,(A68_TRUE, &DACACTR),(A68_TRUE, &DACACTR,(XZBACTR_generator).nonlocals));
CACACTR_m = DACACTR;
 /* line 2063: */
EACACTR_mind = 0;
 /* line 2064: */
FACACTR_dot = A68_FALSE;
 /* line 2065: */
 /* line 2067: */
A_CLOSURE( IACACTR_outid, JACACTR_outid, KACACTR_outid );
(( KACACTR_outid * ) ( IACACTR_outid.nonlocals )) -> EACACTR_mind = (&EACACTR_mind);
(( KACACTR_outid * ) ( IACACTR_outid.nonlocals )) -> CACACTR_m = CACACTR_m;
(( KACACTR_outid * ) ( IACACTR_outid.nonlocals )) -> SZBACTR_endf = SZBACTR_endf;
 /* line 2076: */
A_CLOSURE( UACACTR_outboldid, VACACTR_outboldid, WACACTR_outboldid );
(( WACACTR_outboldid * ) ( UACACTR_outboldid.nonlocals )) -> EACACTR_mind = (&EACACTR_mind);
(( WACACTR_outboldid * ) ( UACACTR_outboldid.nonlocals )) -> CACACTR_m = CACACTR_m;
(( WACACTR_outboldid * ) ( UACACTR_outboldid.nonlocals )) -> SZBACTR_endf = SZBACTR_endf;
 /* line 2093: */
A_CLOSURE( IBCACTR_outchars, JBCACTR_outchars, KBCACTR_outchars );
(( KBCACTR_outchars * ) ( IBCACTR_outchars.nonlocals )) -> CACACTR_m = CACACTR_m;
(( KBCACTR_outchars * ) ( IBCACTR_outchars.nonlocals )) -> EACACTR_mind = (&EACACTR_mind);
 /* line 2099: */
A_CLOSURE( PBCACTR_outmess, QBCACTR_outmess, RBCACTR_outmess );
(( RBCACTR_outmess * ) ( PBCACTR_outmess.nonlocals )) -> Message = NL(Message);
(( RBCACTR_outmess * ) ( PBCACTR_outmess.nonlocals )) -> CACACTR_m = CACACTR_m;
(( RBCACTR_outmess * ) ( PBCACTR_outmess.nonlocals )) -> EACACTR_mind = (&EACACTR_mind);
 /* line 2106: */
A_CLOSURE( YBCACTR_outint, ZBCACTR_outint, ACCACTR_outint );
(( ACCACTR_outint * ) ( YBCACTR_outint.nonlocals )) -> YBCACTR_outint = YBCACTR_outint;
(( ACCACTR_outint * ) ( YBCACTR_outint.nonlocals )) -> CACACTR_m = CACACTR_m;
(( ACCACTR_outint * ) ( YBCACTR_outint.nonlocals )) -> EACACTR_mind = (&EACACTR_mind);
 /* line 2114: */
A_CLOSURE( JCCACTR_outmode, KCCACTR_outmode, LCCACTR_outmode );
(( LCCACTR_outmode * ) ( JCCACTR_outmode.nonlocals )) -> CACACTR_m = CACACTR_m;
(( LCCACTR_outmode * ) ( JCCACTR_outmode.nonlocals )) -> EACACTR_mind = (&EACACTR_mind);
(( LCCACTR_outmode * ) ( JCCACTR_outmode.nonlocals )) -> NYAACTR_initmodes = NL(NYAACTR_initmodes);
(( LCCACTR_outmode * ) ( JCCACTR_outmode.nonlocals )) -> QYAACTR_globcurrent = NL(QYAACTR_globcurrent);
(( LCCACTR_outmode * ) ( JCCACTR_outmode.nonlocals )) -> MABACTR_libinds = NL(MABACTR_libinds);
(( LCCACTR_outmode * ) ( JCCACTR_outmode.nonlocals )) -> UACACTR_outboldid = UACACTR_outboldid;
(( LCCACTR_outmode * ) ( JCCACTR_outmode.nonlocals )) -> PBCACTR_outmess = PBCACTR_outmess;
(( LCCACTR_outmode * ) ( JCCACTR_outmode.nonlocals )) -> JCCACTR_outmode = JCCACTR_outmode;
(( LCCACTR_outmode * ) ( JCCACTR_outmode.nonlocals )) -> KUAACTR_modes = NL(KUAACTR_modes);
(( LCCACTR_outmode * ) ( JCCACTR_outmode.nonlocals )) -> SZBACTR_endf = SZBACTR_endf;
(( LCCACTR_outmode * ) ( JCCACTR_outmode.nonlocals )) -> IBCACTR_outchars = IBCACTR_outchars;
(( LCCACTR_outmode * ) ( JCCACTR_outmode.nonlocals )) -> IACACTR_outid = IACACTR_outid;
(( LCCACTR_outmode * ) ( JCCACTR_outmode.nonlocals )) -> YBCACTR_outint = YBCACTR_outint;
 /* line 2259: */
 /* line 2260: */
OECACTR = VZBACTR_mess.upb;
for ( NECACTR_i = 1;
NECACTR_i <= OECACTR;
NECACTR_i += 1 )
{ 
GACACTR_c = A_VINDEX(VZBACTR_mess,NECACTR_i);
 /* line 2261: */
PECACTR = FACACTR_dot;
if ( PECACTR )
{ /* line 2262: */
PECACTR = (GACACTR_c!='.');
}
if ( PECACTR )
{ 
FACACTR_dot = A68_FALSE;
 /* line 2263: */
 /* line 2264: */
if ( (GACACTR_c=='1') )
{ 
 /* line 2265: */
A_CALLPROC(JCCACTR_outmode,(M1, A68_TRUE),(M1, A68_TRUE,(JCCACTR_outmode).nonlocals));
} 
else
{ 
 /* line 2266: */
if ( (GACACTR_c=='2') )
{ 
 /* line 2267: */
A_CALLPROC(JCCACTR_outmode,(M2, A68_TRUE),(M2, A68_TRUE,(JCCACTR_outmode).nonlocals));
} 
else
{ 
 /* line 2268: */
if ( (GACACTR_c=='3') )
{ 
 /* line 2269: */
A_CALLPROC(UACACTR_outboldid,((*Id)),((*Id),(UACACTR_outboldid).nonlocals));
} 
else
{ 
 /* line 2270: */
if ( (GACACTR_c=='4') )
{ 
 /* line 2271: */
A_CALLPROC(IACACTR_outid,((*Id)),((*Id),(IACACTR_outid).nonlocals));
} 
else
{ 
 /* line 2272: */
 /* line 2273: */
A_CALLPROC(YBCACTR_outint,(M1),(M1,(YBCACTR_outint).nonlocals));
} 
} 
} 
} 
} 
else
{ 
QECACTR = !FACACTR_dot;
if ( QECACTR )
{ /* line 2274: */
QECACTR = (GACACTR_c=='.');
}
if ( QECACTR )
{ 
 /* line 2275: */
FACACTR_dot = A68_TRUE;
} 
else
{ 
RECACTR = EACACTR_mind+=1 ;
SECACTR = (&A_VINDEX(CACACTR_m,RECACTR)) ;
(*SECACTR) = GACACTR_c;
 /* line 2276: */
 /* line 2277: */
 /* line 2278: */
FACACTR_dot = A68_FALSE;
} 
} 
}
 /* line 2279: */
A_CALLPROC(NL(UIBACTR_faultchars),(A_VTRIM(TECACTR,(CACACTR_m),A_VTSCRIPT(&(TECACTR.upb),(CACACTR_m).upb,1,EACACTR_mind))),(A_VTRIM(TECACTR,(CACACTR_m),A_VTSCRIPT(&(TECACTR.upb),(CACACTR_m).upb,1,EACACTR_mind)),(NL(UIBACTR_faultchars)).nonlocals));
 /* line 2280: */
TZBACTR_endf:
 /* line 2281: */
/*SKIP*/;
} 
A_PROC_EXIT(faultp);
return;
} 
#undef NL

A_STATIC A68_INT  WECACTR_marker(A68_INT  Mode, void *NonLocals)
#define NL(x) (((XECACTR_marker *)NonLocals)->x)
{ 
A68_183  BFCACTR_state;   /* proc value of non-global proc */
A68_INT  HFCACTR;  /* clause result */
A68_66  IFCACTR;  /* united object - for case conformity */
A68_62 * JFCACTR_a;
A68_INT * KFCACTR;  /* YIELD */
A68_59 * LFCACTR_st;
A68_58 * MFCACTR_s;
A68_INT * NFCACTR;  /* YIELD */
A68_56 * OFCACTR_u;
A68_54 * PFCACTR_ml;
A68_INT * QFCACTR;  /* YIELD */
A68_61 * RFCACTR_v;
A68_INT * SFCACTR;  /* YIELD */
A68_60 * TFCACTR_is;
A68_INT * UFCACTR;  /* YIELD */
A68_55 * VFCACTR_p;
A68_57 * WFCACTR_pp;
A68_64 * XFCACTR_sten;
A_PROC_ENTRY(marker);
 /* line 2286: */
 /* line 2293: */
{ 
A_CLOSURE( BFCACTR_state, CFCACTR_state, DFCACTR_state );
(( DFCACTR_state * ) ( BFCACTR_state.nonlocals )) -> VECACTR_marker = NL(VECACTR_marker);
 /* line 2304: */
 /* line 2305: */
 /* line 2306: */
if ( (Mode<=25) )
{ 
HFCACTR = 1;
} 
else
{ 
 /* line 2307: */
 /* line 2308: */
if ( (Mode==JLAACTR_xtype) )
{ 
HFCACTR = (-3);
} 
else
{ 
 /* line 2309: */
 /* line 2310: */
if ( (Mode>=KQAACTR_refmark) )
{ 
HFCACTR = (-1);
} 
else
{ 
 /* line 2311: */
IFCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),Mode))) ;
switch ( IFCACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
JFCACTR_a = (IFCACTR.data.mode8);
 /* line 2312: */
{ 
 /* line 2313: */
if ( ((*(&(JFCACTR_a->Rdenno)))==0) )
{ 
 /* line 2314: */
KFCACTR = (&(JFCACTR_a->Rdenno)) ;
(*KFCACTR) = 2 ;
A_CALLPROC(BFCACTR_state,(KFCACTR, (*(&(JFCACTR_a->Mode)))),(KFCACTR, (*(&(JFCACTR_a->Mode))),(BFCACTR_state).nonlocals));
} 
 /* line 2315: */
 /* line 2316: */
 /* line 2317: */
HFCACTR = (*(&(JFCACTR_a->Rdenno)));
} 
break;
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
LFCACTR_st = (IFCACTR.data.mode4);
 /* line 2318: */
{ 
 /* line 2319: */
if ( ((*(&(LFCACTR_st->Rdenno)))==0) )
{ 
MFCACTR_s = (*(&(LFCACTR_st->Sels)));
 /* line 2320: */
NFCACTR = (&(LFCACTR_st->Rdenno)) ;
(*NFCACTR) = 1;
 /* line 2322: */
for ( ;; )
{ 
 /* line 2323: */
if ( !((MFCACTR_s!=RQAACTR_nilsel)) ) break;
A_CALLPROC(BFCACTR_state,((&(LFCACTR_st->Rdenno)), (*(&(MFCACTR_s->Mode)))),((&(LFCACTR_st->Rdenno)), (*(&(MFCACTR_s->Mode))),(BFCACTR_state).nonlocals));
 /* line 2324: */
 /* line 2325: */
MFCACTR_s = (*(&(MFCACTR_s->Rest)));
}
 /* line 2326: */
} 
 /* line 2327: */
 /* line 2328: */
 /* line 2329: */
HFCACTR = (*(&(LFCACTR_st->Rdenno)));
} 
break;
case 2: /* REF STRUCT(INT,REF MODE54)  */
OFCACTR_u = (IFCACTR.data.mode2);
 /* line 2330: */
{ 
 /* line 2331: */
if ( ((*(&(OFCACTR_u->Rdenno)))==0) )
{ 
PFCACTR_ml = (*(&(OFCACTR_u->Modelist)));
 /* line 2332: */
QFCACTR = (&(OFCACTR_u->Rdenno)) ;
(*QFCACTR) = 1;
 /* line 2334: */
for ( ;; )
{ 
 /* line 2335: */
if ( !((PFCACTR_ml!=OQAACTR_nilml)) ) break;
A_CALLPROC(BFCACTR_state,((&(OFCACTR_u->Rdenno)), (*(&(PFCACTR_ml->Mode)))),((&(OFCACTR_u->Rdenno)), (*(&(PFCACTR_ml->Mode))),(BFCACTR_state).nonlocals));
 /* line 2336: */
 /* line 2337: */
PFCACTR_ml = (*(&(PFCACTR_ml->Rest)));
}
 /* line 2338: */
} 
 /* line 2339: */
 /* line 2340: */
 /* line 2341: */
HFCACTR = (*(&(OFCACTR_u->Rdenno)));
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
RFCACTR_v = (IFCACTR.data.mode7);
 /* line 2342: */
{ 
 /* line 2343: */
if ( ((*(&(RFCACTR_v->Rdenno)))==0) )
{ 
 /* line 2344: */
SFCACTR = (&(RFCACTR_v->Rdenno)) ;
(*SFCACTR) = 2 ;
A_CALLPROC(BFCACTR_state,(SFCACTR, (*(&(RFCACTR_v->Vecmode)))),(SFCACTR, (*(&(RFCACTR_v->Vecmode))),(BFCACTR_state).nonlocals));
} 
 /* line 2345: */
 /* line 2346: */
 /* line 2347: */
HFCACTR = (*(&(RFCACTR_v->Rdenno)));
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
TFCACTR_is = (IFCACTR.data.mode5);
 /* line 2348: */
{ 
 /* line 2349: */
if ( ((*(&(TFCACTR_is->Rdenno)))==0) )
{ 
 /* line 2350: */
UFCACTR = (&(TFCACTR_is->Rdenno)) ;
(*UFCACTR) = 1 ;
A_CALLPROC(BFCACTR_state,(UFCACTR, (*(&(TFCACTR_is->Imode)))),(UFCACTR, (*(&(TFCACTR_is->Imode))),(BFCACTR_state).nonlocals));
} 
 /* line 2351: */
 /* line 2352: */
 /* line 2353: */
HFCACTR = (*(&(TFCACTR_is->Rdenno)));
} 
break;
case 6: /* REF STRUCT(INT)  */
VFCACTR_p = (IFCACTR.data.mode6);
 /* line 2354: */
 /* line 2355: */
HFCACTR = (-1);
break;
case 3: /* REF STRUCT(INT,REF MODE54)  */
WFCACTR_pp = (IFCACTR.data.mode3);
 /* line 2356: */
 /* line 2357: */
HFCACTR = (-1);
break;
case 9: /* REF STRUCT(INT,REF MODE63)  */
XFCACTR_sten = (IFCACTR.data.mode9);
 /* line 2359: */
 /* line 2360: */
HFCACTR = (-3);
break;
default: 
 /* line 2361: */
 /* line 2362: */
HFCACTR = 1;
break;
} 
} 
} 
} 
} 
A_PROC_EXIT(marker);
return( HFCACTR );
} 
#undef NL

A_STATIC A68_INT  AGCACTR_assmarker(A68_INT  Mode, void *NonLocals)
#define NL(x) (((BGCACTR_assmarker *)NonLocals)->x)
{ 
A68_INT  CGCACTR_i;
A68_66  DGCACTR;  /* united object - for case conformity */
A68_62 * EGCACTR_a;
A68_BOOL  FGCACTR;  /* optbool result */
A68_INT  GGCACTR;  /* clause result */
A68_INT  HGCACTR;  /* clause result */
A_PROC_ENTRY(assmarker);
 /* line 2365: */
 /* line 2366: */
{ 
CGCACTR_i = A_CALLPROC(NL(VECACTR_marker),(Mode),(Mode,(NL(VECACTR_marker)).nonlocals));
 /* line 2367: */
 /* line 2368: */
if ( (CGCACTR_i==3) )
{ 
 /* line 2369: */
DGCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),Mode))) ;
switch ( DGCACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
EGCACTR_a = (DGCACTR.data.mode8);
 /* line 2370: */
FGCACTR = ((*(&(EGCACTR_a->Nods)))!=1);
if ( FGCACTR )
{ /* line 2371: */
FGCACTR = ((*(&(EGCACTR_a->Deflex)))<0);
}
if ( FGCACTR )
{ 
 /* line 2372: */
 /* line 2373: */
if ( (A_CALLPROC(NL(VECACTR_marker),((*(&(EGCACTR_a->Mode)))),((*(&(EGCACTR_a->Mode))),(NL(VECACTR_marker)).nonlocals))<0) )
{ 
 /* line 2374: */
GGCACTR = (-2);
} 
else
{ 
 /* line 2375: */
GGCACTR = 2;
} 
 /* line 2376: */
 /* line 2377: */
CGCACTR_i = GGCACTR;
} 
break;
default: 
 /* line 2378: */
/*SKIP*/;
break;
} 
} 
 /* line 2379: */
 /* line 2380: */
HGCACTR = CGCACTR_i;
} 
A_PROC_EXIT(assmarker);
return( HGCACTR );
} 
#undef NL

A_STATIC A68_INT  KGCACTR_deflex(A68_INT  I, void *NonLocals)
#define NL(x) (((LGCACTR_deflex *)NonLocals)->x)
{ 
A68_INT  MGCACTR;  /* clause result */
A68_66  NGCACTR;  /* united object - for case conformity */
A68_62 * OGCACTR_a;
A68_INT  PGCACTR_j;
A68_INT * QGCACTR;  /* YIELD */
A68_BOOL  RGCACTR;  /* clause result */
A68_INT * SGCACTR;  /* YIELD */
A68_INT * TGCACTR;  /* YIELD */
A68_INT * UGCACTR;  /* YIELD */
A68_INT * VGCACTR;  /* YIELD */
A68_INT  WGCACTR;  /* ADICOPS - ABS INT */
A68_61 * XGCACTR_v;
A68_INT  YGCACTR_j;
A68_INT * ZGCACTR;  /* YIELD */
A68_BOOL  AHCACTR;  /* clause result */
A68_INT * BHCACTR;  /* YIELD */
A68_INT * CHCACTR;  /* YIELD */
A68_INT * DHCACTR;  /* YIELD */
A68_INT * EHCACTR;  /* YIELD */
A68_INT  FHCACTR;  /* ADICOPS - ABS INT */
A68_60 * GHCACTR_is;
A68_INT  HHCACTR_j;
A68_INT * IHCACTR;  /* YIELD */
A68_BOOL  JHCACTR;  /* clause result */
A68_INT * KHCACTR;  /* YIELD */
A68_INT * LHCACTR;  /* YIELD */
A68_59 * MHCACTR_s;
A68_58 * NHCACTR_csel;
A68_58 * OHCACTR_dsel;
A68_58 * PHCACTR_sel;
A68_INT * QHCACTR;  /* YIELD */
A68_BOOL  RHCACTR;  /* optbool result */
A68_INT * SHCACTR;  /* YIELD */
A68_58 * THCACTR;  /* YIELD */
A68_58 ** UHCACTR;  /* YIELD */
A68_INT * VHCACTR;  /* YIELD */
A68_58 ** WHCACTR;  /* YIELD */
A68_INT * XHCACTR;  /* YIELD */
A_PROC_ENTRY(deflex);
 /* line 2383: */
 /* line 2384: */
 /* line 2385: */
if ( (I>KQAACTR_refmark) )
{ 
MGCACTR = I;
} 
else
{ 
 /* line 2386: */
NGCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),I))) ;
switch ( NGCACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
OGCACTR_a = (NGCACTR.data.mode8);
 /* line 2387: */
 /* line 2388: */
 /* line 2389: */
if ( ((*(&(OGCACTR_a->Deflex)))==0) )
{ 
MGCACTR = I;
} 
else
{ 
 /* line 2390: */
if ( ((*(&(OGCACTR_a->Deflex)))==1) )
{ 
 /* line 2391: */
QGCACTR = (&(OGCACTR_a->Deflex)) ;
(*QGCACTR) = 0;
 /* line 2392: */
 /* line 2393: */
RGCACTR = ((PGCACTR_j = A_CALLPROC(NL(JGCACTR_deflex),((*(&(OGCACTR_a->Mode)))),((*(&(OGCACTR_a->Mode))),(NL(JGCACTR_deflex)).nonlocals)))==(*(&(OGCACTR_a->Mode))));
if ( RGCACTR )
{ 
SGCACTR = (&(OGCACTR_a->Deflex)) ;
(*SGCACTR) = 0;
 /* line 2394: */
 /* line 2395: */
MGCACTR = I;
} 
else
{ 
 /* line 2396: */
 /* line 2397: */
TGCACTR = (&(OGCACTR_a->Deflex)) ;
MGCACTR = (*TGCACTR) = A_CALLPROC(NL(FVBACTR_insertarray),(PGCACTR_j, (*(&(OGCACTR_a->Nods))), 1),(PGCACTR_j, (*(&(OGCACTR_a->Nods))), 1,(NL(FVBACTR_insertarray)).nonlocals));
} 
} 
else
{ 
 /* line 2398: */
if ( ((*(&(OGCACTR_a->Deflex)))==(-1)) )
{ 
UGCACTR = (&(OGCACTR_a->Deflex)) ;
(*UGCACTR) = (-I);
 /* line 2399: */
 /* line 2400: */
 /* line 2401: */
 /* line 2402: */
 /* line 2403: */
VGCACTR = (&(OGCACTR_a->Deflex)) ;
MGCACTR = (-((*VGCACTR) = (-A_CALLPROC(NL(FVBACTR_insertarray),(A_CALLPROC(NL(JGCACTR_deflex),((*(&(OGCACTR_a->Mode)))),((*(&(OGCACTR_a->Mode))),(NL(JGCACTR_deflex)).nonlocals)), (*(&(OGCACTR_a->Nods))), 1),(A_CALLPROC(NL(JGCACTR_deflex),((*(&(OGCACTR_a->Mode)))),((*(&(OGCACTR_a->Mode))),(NL(JGCACTR_deflex)).nonlocals)), (*(&(OGCACTR_a->Nods))), 1,(NL(FVBACTR_insertarray)).nonlocals)))));
} 
else
{ 
 /* line 2404: */
WGCACTR = (*(&(OGCACTR_a->Deflex))) ;
MGCACTR = A_ABS(WGCACTR);
} 
} 
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
XGCACTR_v = (NGCACTR.data.mode7);
 /* line 2405: */
 /* line 2406: */
 /* line 2407: */
if ( ((*(&(XGCACTR_v->Deflex)))==0) )
{ 
MGCACTR = I;
} 
else
{ 
 /* line 2408: */
if ( ((*(&(XGCACTR_v->Deflex)))==1) )
{ 
 /* line 2409: */
ZGCACTR = (&(XGCACTR_v->Deflex)) ;
(*ZGCACTR) = 0;
 /* line 2410: */
 /* line 2411: */
AHCACTR = ((YGCACTR_j = A_CALLPROC(NL(JGCACTR_deflex),((*(&(XGCACTR_v->Vecmode)))),((*(&(XGCACTR_v->Vecmode))),(NL(JGCACTR_deflex)).nonlocals)))==(*(&(XGCACTR_v->Vecmode))));
if ( AHCACTR )
{ 
BHCACTR = (&(XGCACTR_v->Deflex)) ;
(*BHCACTR) = 0;
 /* line 2412: */
 /* line 2413: */
MGCACTR = I;
} 
else
{ 
 /* line 2414: */
 /* line 2415: */
CHCACTR = (&(XGCACTR_v->Deflex)) ;
MGCACTR = (*CHCACTR) = A_CALLPROC(NL(ZVBACTR_insertvec),(YGCACTR_j, 1),(YGCACTR_j, 1,(NL(ZVBACTR_insertvec)).nonlocals));
} 
} 
else
{ 
 /* line 2416: */
if ( ((*(&(XGCACTR_v->Deflex)))==(-1)) )
{ 
DHCACTR = (&(XGCACTR_v->Deflex)) ;
(*DHCACTR) = (-I);
 /* line 2417: */
 /* line 2418: */
 /* line 2419: */
 /* line 2420: */
 /* line 2421: */
EHCACTR = (&(XGCACTR_v->Deflex)) ;
MGCACTR = (-((*EHCACTR) = (-A_CALLPROC(NL(ZVBACTR_insertvec),(A_CALLPROC(NL(JGCACTR_deflex),((*(&(XGCACTR_v->Vecmode)))),((*(&(XGCACTR_v->Vecmode))),(NL(JGCACTR_deflex)).nonlocals)), 1),(A_CALLPROC(NL(JGCACTR_deflex),((*(&(XGCACTR_v->Vecmode)))),((*(&(XGCACTR_v->Vecmode))),(NL(JGCACTR_deflex)).nonlocals)), 1,(NL(ZVBACTR_insertvec)).nonlocals)))));
} 
else
{ 
 /* line 2422: */
FHCACTR = (*(&(XGCACTR_v->Deflex))) ;
MGCACTR = A_ABS(FHCACTR);
} 
} 
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
GHCACTR_is = (NGCACTR.data.mode5);
 /* line 2423: */
 /* line 2424: */
 /* line 2425: */
if ( ((*(&(GHCACTR_is->Deflex)))==0) )
{ 
MGCACTR = I;
} 
else
{ 
 /* line 2426: */
if ( ((*(&(GHCACTR_is->Deflex)))==1) )
{ 
 /* line 2427: */
IHCACTR = (&(GHCACTR_is->Deflex)) ;
(*IHCACTR) = 0;
 /* line 2428: */
 /* line 2429: */
JHCACTR = ((HHCACTR_j = A_CALLPROC(NL(JGCACTR_deflex),((*(&(GHCACTR_is->Imode)))),((*(&(GHCACTR_is->Imode))),(NL(JGCACTR_deflex)).nonlocals)))==(*(&(GHCACTR_is->Imode))));
if ( JHCACTR )
{ 
KHCACTR = (&(GHCACTR_is->Deflex)) ;
(*KHCACTR) = 0;
 /* line 2430: */
 /* line 2431: */
MGCACTR = I;
} 
else
{ 
 /* line 2432: */
 /* line 2433: */
 /* line 2434: */
LHCACTR = (&(GHCACTR_is->Deflex)) ;
MGCACTR = (*LHCACTR) = A_CALLPROC(NL(TWBACTR_insertis),(HHCACTR_j, (*(&(GHCACTR_is->Length)))),(HHCACTR_j, (*(&(GHCACTR_is->Length))),(NL(TWBACTR_insertis)).nonlocals));
} 
} 
else
{ 
 /* line 2435: */
MGCACTR = (*(&(GHCACTR_is->Deflex)));
} 
} 
break;
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
MHCACTR_s = (NGCACTR.data.mode4);
 /* line 2436: */
 /* line 2437: */
 /* line 2438: */
if ( ((*(&(MHCACTR_s->Deflex)))==0) )
{ 
MGCACTR = I;
} 
else
{ 
 /* line 2439: */
if ( ((*(&(MHCACTR_s->Deflex)))==1) )
{ 
PHCACTR_sel = (*(&(MHCACTR_s->Sels)));
 /* line 2440: */
QHCACTR = (&(MHCACTR_s->Deflex)) ;
(*QHCACTR) = 0;
 /* line 2442: */
for ( ;; )
{ 
 /* line 2443: */
RHCACTR = (PHCACTR_sel!=RQAACTR_nilsel);
if ( RHCACTR )
{ /* line 2444: */
RHCACTR = (A_CALLPROC(NL(JGCACTR_deflex),((*(&(PHCACTR_sel->Mode)))),((*(&(PHCACTR_sel->Mode))),(NL(JGCACTR_deflex)).nonlocals))==(*(&(PHCACTR_sel->Mode))));
}
if ( !(RHCACTR) ) break;
PHCACTR_sel = (*(&(PHCACTR_sel->Rest)));
}
 /* line 2446: */
 /* line 2447: */
if ( (PHCACTR_sel==RQAACTR_nilsel) )
{ 
SHCACTR = (&(MHCACTR_s->Deflex)) ;
(*SHCACTR) = 0;
 /* line 2448: */
 /* line 2449: */
MGCACTR = I;
} 
else
{ 
PHCACTR_sel = (*(&(MHCACTR_s->Sels)));
 /* line 2450: */
NHCACTR_csel = (A68_58 *)A68_NIL;
 /* line 2452: */
for ( ;; )
{ 
 /* line 2453: */
if ( !((PHCACTR_sel!=RQAACTR_nilsel)) ) break;
THCACTR = A_HEAP(A68_58 ) ;
(*THCACTR) = (*PHCACTR_sel) ;
OHCACTR_dsel = THCACTR;
 /* line 2454: */
UHCACTR = (&(OHCACTR_dsel->Rest)) ;
(*UHCACTR) = NHCACTR_csel;
 /* line 2455: */
NHCACTR_csel = OHCACTR_dsel;
 /* line 2456: */
VHCACTR = (&(NHCACTR_csel->Mode)) ;
(*VHCACTR) = A_CALLPROC(NL(JGCACTR_deflex),((*(&(NHCACTR_csel->Mode)))),((*(&(NHCACTR_csel->Mode))),(NL(JGCACTR_deflex)).nonlocals));
 /* line 2457: */
 /* line 2458: */
PHCACTR_sel = (*(&(PHCACTR_sel->Rest)));
}
 /* line 2460: */
for ( ;; )
{ 
 /* line 2461: */
if ( !((NHCACTR_csel!=RQAACTR_nilsel)) ) break;
OHCACTR_dsel = (*(&(NHCACTR_csel->Rest)));
 /* line 2462: */
WHCACTR = (&(NHCACTR_csel->Rest)) ;
(*WHCACTR) = PHCACTR_sel;
 /* line 2463: */
PHCACTR_sel = NHCACTR_csel;
 /* line 2464: */
 /* line 2465: */
NHCACTR_csel = OHCACTR_dsel;
}
 /* line 2466: */
 /* line 2467: */
 /* line 2468: */
 /* line 2469: */
XHCACTR = (&(MHCACTR_s->Deflex)) ;
MGCACTR = (*XHCACTR) = A_CALLPROC(NL(LTBACTR_insertstrct),(0, PHCACTR_sel),(0, PHCACTR_sel,(NL(LTBACTR_insertstrct)).nonlocals));
} 
} 
else
{ 
 /* line 2470: */
 /* line 2471: */
MGCACTR = (*(&(MHCACTR_s->Deflex)));
} 
} 
break;
default: 
 /* line 2472: */
MGCACTR = I;
break;
} 
} 
A_PROC_EXIT(deflex);
return( MGCACTR );
} 
#undef NL

A_STATIC A68_INT  AICACTR_enflex(A68_INT  M, void *NonLocals)
#define NL(x) (((BICACTR_enflex *)NonLocals)->x)
{ 
A68_INT  DICACTR;  /* ADICOPS - ABS INT */
A68_INT  CICACTR_i;
A68_58 ** EICACTR_rsel;
A68_58 * FICACTR_old;
A68_58 * GICACTR_new;
A68_BOOL  HICACTR;  /* optbool result */
A68_BOOL  IICACTR;  /* optbool result */
A68_INT  JICACTR;  /* clause result */
A68_66  KICACTR;  /* united object - for case conformity */
A68_62 * LICACTR_a;
A68_INT  MICACTR;  /* to part of loop */
A68_INT  NICACTR;  /* loop control */
A68_66  OICACTR;  /* united object - for case conformity */
A68_62 * PICACTR_a1;
A68_INT  QICACTR_k;
A68_INT  RICACTR;  /* to part of loop */
A68_61 * SICACTR_v;
A68_60 * TICACTR_is;
A68_59 * UICACTR_s;
A68_58 * VICACTR;  /* YIELD */
A68_INT * WICACTR;  /* YIELD */
A68_58 ** XICACTR;  /* YIELD */
A_PROC_ENTRY(enflex);
 /* line 2475: */
{ 
DICACTR = A_CALLPROC(NL(VECACTR_marker),(M),(M,(NL(VECACTR_marker)).nonlocals)) ;
CICACTR_i = A_ABS(DICACTR);
 /* line 2476: */
 /* line 2477: */
 /* line 2478: */
HICACTR = (CICACTR_i==1);
if ( ! HICACTR )
{IICACTR = (CICACTR_i==2);
if ( IICACTR )
{ /* line 2479: */
IICACTR = (A_CALLPROC(NL(JGCACTR_deflex),(M),(M,(NL(JGCACTR_deflex)).nonlocals))!=M);
}
HICACTR = IICACTR;
}
 /* line 2480: */
if ( HICACTR )
{ 
JICACTR = M;
} 
else
{ 
 /* line 2481: */
KICACTR = (*(&A_VINDEX(NL(KUAACTR_modes),M))) ;
switch ( KICACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
LICACTR_a = (KICACTR.data.mode8);
 /* line 2482: */
{ 
CICACTR_i = (*(&(LICACTR_a->Mode)));
 /* line 2483: */
 /* line 2484: */
MICACTR = ((*(&(LICACTR_a->Nods)))-1);
for ( NICACTR = 1;
NICACTR <= MICACTR;
NICACTR += 1 )
{ 
 /* line 2485: */
OICACTR = (*(&A_VINDEX(NL(KUAACTR_modes),CICACTR_i))) ;
switch ( OICACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
PICACTR_a1 = (OICACTR.data.mode8);
 /* line 2486: */
 /* line 2487: */
 /* line 2488: */
CICACTR_i = (*(&(PICACTR_a1->Mode)));
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 2489: */
CICACTR_i = A_CALLPROC(NL(ZHCACTR_enflex),(CICACTR_i),(CICACTR_i,(NL(ZHCACTR_enflex)).nonlocals));
 /* line 2490: */
 /* line 2491: */
RICACTR = ((*(&(LICACTR_a->Nods)))-1);
for ( QICACTR_k = 1;
QICACTR_k <= RICACTR;
QICACTR_k += 1 )
{ 
CICACTR_i = A_CALLPROC(NL(FVBACTR_insertarray),(CICACTR_i, QICACTR_k, 1),(CICACTR_i, QICACTR_k, 1,(NL(FVBACTR_insertarray)).nonlocals));
}
 /* line 2492: */
 /* line 2493: */
 /* line 2494: */
JICACTR = A_CALLPROC(NL(FVBACTR_insertarray),(CICACTR_i, (*(&(LICACTR_a->Nods))), (-1)),(CICACTR_i, (*(&(LICACTR_a->Nods))), (-1),(NL(FVBACTR_insertarray)).nonlocals));
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
SICACTR_v = (KICACTR.data.mode7);
 /* line 2495: */
 /* line 2496: */
JICACTR = A_CALLPROC(NL(ZVBACTR_insertvec),(A_CALLPROC(NL(ZHCACTR_enflex),((*(&(SICACTR_v->Vecmode)))),((*(&(SICACTR_v->Vecmode))),(NL(ZHCACTR_enflex)).nonlocals)), (-1)),(A_CALLPROC(NL(ZHCACTR_enflex),((*(&(SICACTR_v->Vecmode)))),((*(&(SICACTR_v->Vecmode))),(NL(ZHCACTR_enflex)).nonlocals)), (-1),(NL(ZVBACTR_insertvec)).nonlocals));
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
TICACTR_is = (KICACTR.data.mode5);
 /* line 2497: */
 /* line 2498: */
JICACTR = A_CALLPROC(NL(TWBACTR_insertis),(A_CALLPROC(NL(ZHCACTR_enflex),((*(&(TICACTR_is->Imode)))),((*(&(TICACTR_is->Imode))),(NL(ZHCACTR_enflex)).nonlocals)), (*(&(TICACTR_is->Length)))),(A_CALLPROC(NL(ZHCACTR_enflex),((*(&(TICACTR_is->Imode)))),((*(&(TICACTR_is->Imode))),(NL(ZHCACTR_enflex)).nonlocals)), (*(&(TICACTR_is->Length))),(NL(TWBACTR_insertis)).nonlocals));
break;
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
UICACTR_s = (KICACTR.data.mode4);
 /* line 2499: */
{ 
EICACTR_rsel = (&GICACTR_new);
 /* line 2500: */
FICACTR_old = (*(&(UICACTR_s->Sels)));
 /* line 2502: */
for ( ;; )
{ 
 /* line 2503: */
if ( !((FICACTR_old!=RQAACTR_nilsel)) ) break;
 /* line 2504: */
VICACTR = A_HEAP(A68_58 ) ;
(*VICACTR) = (*FICACTR_old) ;
(*EICACTR_rsel) = VICACTR;
 /* line 2505: */
WICACTR = (&((*EICACTR_rsel)->Mode)) ;
(*WICACTR) = A_CALLPROC(NL(ZHCACTR_enflex),((*(&(FICACTR_old->Mode)))),((*(&(FICACTR_old->Mode))),(NL(ZHCACTR_enflex)).nonlocals));
 /* line 2506: */
FICACTR_old = (*(&(FICACTR_old->Rest)));
 /* line 2507: */
 /* line 2508: */
XICACTR = (&((*EICACTR_rsel)->Rest)) ;
(*XICACTR) = (A68_58 *)A68_NIL ;
EICACTR_rsel = XICACTR;
}
 /* line 2509: */
 /* line 2510: */
 /* line 2511: */
 /* line 2512: */
JICACTR = A_CALLPROC(NL(LTBACTR_insertstrct),(1, GICACTR_new),(1, GICACTR_new,(NL(LTBACTR_insertstrct)).nonlocals));
} 
break;
default: 
 /* line 2513: */
 /* line 2514: */
JICACTR = M;
break;
} 
} 
} 
A_PROC_EXIT(enflex);
return( JICACTR );
} 
#undef NL

A_STATIC A68_INT  AJCACTR_mproc(A68_INT  Mode, void *NonLocals)
#define NL(x) (((BJCACTR_mproc *)NonLocals)->x)
{ 
A68_INT  CJCACTR;  /* clause result */
A_PROC_ENTRY(mproc);
 /* line 2517: */
CJCACTR = A_CALLPROC(NL(RRBACTR_insertprocp),(A_CALLPROC(NL(JGCACTR_deflex),(Mode),(Mode,(NL(JGCACTR_deflex)).nonlocals)), NL(YVAACTR_boolnil)),(A_CALLPROC(NL(JGCACTR_deflex),(Mode),(Mode,(NL(JGCACTR_deflex)).nonlocals)), NL(YVAACTR_boolnil),(NL(RRBACTR_insertprocp)).nonlocals));
A_PROC_EXIT(mproc);
return( CJCACTR );
} 
#undef NL

A_STATIC A68_VOID  FJCACTR_deref(A68_125 * V, void *NonLocals)
#define NL(x) (((GJCACTR_deref *)NonLocals)->x)
{ 
A68_INT * HJCACTR;  /* YIELD */
A68_85  IJCACTR;  /* collateral clause result */
A68_106  JJCACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(deref);
 /* line 2520: */
{ 
HJCACTR = (&(V->Mode)) ;
(*HJCACTR) = A_CALLPROC(NL(JGCACTR_deflex),(((*(&(V->Mode)))-KQAACTR_refmark)),(((*(&(V->Mode)))-KQAACTR_refmark),(NL(JGCACTR_deflex)).nonlocals));
 /* line 2521: */
IJCACTR.Fn = ZNAACTR_xderef;
IJCACTR.M = (*(&(V->Mode)));
IJCACTR.Param = 0;
 /* line 2522: */
A_CALLPROC(NL(Output),(A_UNITE(JJCACTR,mode14,14,IJCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(JJCACTR,mode14,14,IJCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
A_PROC_EXIT(deref);
return;
} 
#undef NL

A_STATIC A68_VOID  MJCACTR_deproc(A68_125 * V, void *NonLocals)
#define NL(x) (((NJCACTR_deproc *)NonLocals)->x)
{ 
A68_INT  OJCACTR;  /* YIELD */
A68_66  PJCACTR;  /* united object - for case conformity */
A68_55 * QJCACTR_p;
A68_85  RJCACTR;  /* collateral clause result */
A68_106  SJCACTR;  /* OPERATORS - mode -> union mode */
A68_INT * TJCACTR;  /* YIELD */
A68_INT  UJCACTR;  /* ADICOPS - ABS INT */
A68_BITS * VJCACTR;  /* YIELD */
A_PROC_ENTRY(deproc);
 /* line 2525: */
 /* line 2526: */
OJCACTR = (*(&(V->Mode))) ;
PJCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),OJCACTR))) ;
switch ( PJCACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
QJCACTR_p = (PJCACTR.data.mode6);
 /* line 2527: */
{ 
 /* line 2528: */
if ( (*NL(XZAACTR_burestrict)) )
{ 
 /* line 2530: */
A_CALLPROC(NL(QJBACTR_fault),(108),(108,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 2531: */
RJCACTR.Fn = AOAACTR_xcall;
RJCACTR.M = (*(&(QJCACTR_p->Deproc)));
RJCACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(SJCACTR,mode14,14,RJCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(SJCACTR,mode14,14,RJCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2532: */
 /* line 2533: */
TJCACTR = (&(V->Mode)) ;
UJCACTR = A_CALLPROC(NL(VECACTR_marker),((*TJCACTR) = (*(&(QJCACTR_p->Deproc)))),((*TJCACTR) = (*(&(QJCACTR_p->Deproc))),(NL(VECACTR_marker)).nonlocals)) ;
if ( (A_ABS(UJCACTR)>=2) )
{ 
 /* line 2534: */
 /* line 2535: */
 /* line 2536: */
 /* line 2537: */
VJCACTR = (&((*NL(QYAACTR_globcurrent))->Dybits)) ;
(*VJCACTR) = (A68_BITS )((*(&((*NL(QYAACTR_globcurrent))->Dybits)))|AMAACTR_dyprocbit);
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(deproc);
return;
} 
#undef NL

A_STATIC A68_INT  YJCACTR_pmode(A68_INT  M, void *NonLocals)
#define NL(x) (((ZJCACTR_pmode *)NonLocals)->x)
{ 
A68_INT  CKCACTR_ans;
A68_66  DKCACTR;  /* united object - for case conformity */
A68_55 * EKCACTR_p;
A68_INT  FKCACTR;  /* clause result */
A_PROC_ENTRY(pmode);
 /* line 2540: */
{ 
CKCACTR_ans = M;
 /* line 2541: */
BKCACTR_aa:
 /* line 2542: */
CKCACTR_ans = (A68_INT )(A68_BITS )((A68_BITS )CKCACTR_ans&LQAACTR_decsmask);
 /* line 2543: */
 /* line 2544: */
DKCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),CKCACTR_ans))) ;
switch ( DKCACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
EKCACTR_p = (DKCACTR.data.mode6);
 /* line 2545: */
{ 
CKCACTR_ans = (*(&(EKCACTR_p->Deproc)));
 /* line 2546: */
 /* line 2547: */
 /* line 2548: */
 /* line 2549: */
goto BKCACTR_aa;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 2550: */
 /* line 2551: */
FKCACTR = A_CALLPROC(NL(JGCACTR_deflex),(CKCACTR_ans),(CKCACTR_ans,(NL(JGCACTR_deflex)).nonlocals));
} 
A_PROC_EXIT(pmode);
return( FKCACTR );
} 
#undef NL

A_STATIC A68_BOOL  NKCACTR_depref(A68_125 * V, A68_INT  Frommode, A68_INT  Tomode, A68_BOOL  Code, void *NonLocals)
#define NL(x) (((OKCACTR_depref *)NonLocals)->x)
{ 
A68_BOOL  PKCACTR;  /* clause result */
A68_INT  QKCACTR_f;
A68_INT  RKCACTR_t;
A68_BOOL  SKCACTR_ans;
A68_BOOL  TKCACTR;  /* optbool result */
A68_66  UKCACTR;  /* united object - for case conformity */
A68_55 * VKCACTR_p;
A_PROC_ENTRY(depref);
 /* line 2558: */
 /* line 2559: */
if ( !(*NL(GKCACTR_deprefable)) )
{ 
 /* line 2560: */
PKCACTR = (Frommode==Tomode);
} 
else
{ 
QKCACTR_f = Frommode;
RKCACTR_t = Tomode;
 /* line 2561: */
SKCACTR_ans = A68_TRUE;
 /* line 2563: */
for ( ;; )
{ 
 /* line 2564: */
TKCACTR = (QKCACTR_f!=RKCACTR_t);
if ( TKCACTR )
{TKCACTR = SKCACTR_ans;
}
if ( !(TKCACTR) ) break;
 /* line 2565: */
if ( (QKCACTR_f>KQAACTR_refmark) )
{ 
if ( Code )
{ 
A_CALLPROC(NL(EJCACTR_deref),(V),(V,(NL(EJCACTR_deref)).nonlocals));
} 
 /* line 2566: */
 /* line 2567: */
QKCACTR_f = A_CALLPROC(NL(JGCACTR_deflex),((QKCACTR_f-KQAACTR_refmark)),((QKCACTR_f-KQAACTR_refmark),(NL(JGCACTR_deflex)).nonlocals));
} 
else
{ 
 /* line 2568: */
UKCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),QKCACTR_f))) ;
switch ( UKCACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
VKCACTR_p = (UKCACTR.data.mode6);
 /* line 2569: */
{ 
if ( Code )
{ 
A_CALLPROC(NL(LJCACTR_deproc),(V),(V,(NL(LJCACTR_deproc)).nonlocals));
} 
 /* line 2570: */
 /* line 2571: */
 /* line 2572: */
QKCACTR_f = (*(&(VKCACTR_p->Deproc)));
} 
break;
default: 
 /* line 2573: */
 /* line 2574: */
 /* line 2575: */
SKCACTR_ans = A68_FALSE;
break;
} 
} 
}
 /* line 2576: */
 /* line 2577: */
PKCACTR = SKCACTR_ans;
} 
A_PROC_EXIT(depref);
return( PKCACTR );
} 
#undef NL

A_STATIC A68_INT  YKCACTR_weakmode(A68_INT  Mode, void *NonLocals)
#define NL(x) (((ZKCACTR_weakmode *)NonLocals)->x)
{ 
A68_INT  CLCACTR_m;
A68_INT  DLCACTR_qref;
A68_66  ELCACTR;  /* united object - for case conformity */
A68_55 * FLCACTR_p;
A68_INT  GLCACTR;  /* clause result */
A_PROC_ENTRY(weakmode);
 /* line 2580: */
{ 
CLCACTR_m = Mode;
 /* line 2581: */
DLCACTR_qref = 0;
 /* line 2582: */
for ( ;; )
{ 
 /* line 2583: */
if ( (CLCACTR_m>KQAACTR_refmark) )
{ 
DLCACTR_qref = KQAACTR_refmark;
 /* line 2584: */
 /* line 2585: */
CLCACTR_m-=KQAACTR_refmark;
} 
else
{ 
 /* line 2586: */
ELCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),CLCACTR_m))) ;
switch ( ELCACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
FLCACTR_p = (ELCACTR.data.mode6);
 /* line 2587: */
{ 
DLCACTR_qref = 0;
 /* line 2588: */
 /* line 2589: */
 /* line 2590: */
CLCACTR_m = (*(&(FLCACTR_p->Deproc)));
} 
break;
default: 
 /* line 2591: */
 /* line 2592: */
 /* line 2593: */
goto BLCACTR_out;
break;
} 
} 
}
 /* line 2594: */
BLCACTR_out:
 /* line 2595: */
GLCACTR = (CLCACTR_m+DLCACTR_qref);
} 
A_PROC_EXIT(weakmode);
return( GLCACTR );
} 
#undef NL

A_STATIC A68_INT  NLCACTR_unite(A68_125 * V, A68_INT  F, A68_INT  T, A68_INT  Str, A68_BOOL  Code, void *NonLocals)
#define NL(x) (((OLCACTR_unite *)NonLocals)->x)
{ 
A68_66  PLCACTR;  /* united object - for case conformity */
A68_56 * QLCACTR_u;
A68_INT  RLCACTR_ans;
A68_54 * SLCACTR_ml;
A68_INT  TLCACTR_i;
A68_BOOL  ULCACTR;  /* optbool result */
A68_BOOL  VLCACTR;  /* optbool result */
A68_INT  WLCACTR;  /* clause result */
A_PROC_ENTRY(unite);
 /* line 2598: */
 /* line 2599: */
PLCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),T))) ;
switch ( PLCACTR.mode )
{ 
case 2: /* REF STRUCT(INT,REF MODE54)  */
QLCACTR_u = (PLCACTR.data.mode2);
 /* line 2600: */
{ 
RLCACTR_ans = 0;
 /* line 2601: */
SLCACTR_ml = (*(&(QLCACTR_u->Modelist)));
 /* line 2602: */
 /* line 2603: */
for ( TLCACTR_i = 1;;
TLCACTR_i += 1 ) 
{ 
 /* line 2604: */
if ( !((SLCACTR_ml!=OQAACTR_nilml)) ) break;
ULCACTR = Code;
if ( ULCACTR )
{ULCACTR = (RLCACTR_ans==0);
}
 /* line 2605: */
if ( A_CALLPROC((*NL(HKCACTR_coerce1)),(V, F, (*(&(SLCACTR_ml->Mode))), Str, ULCACTR),(V, F, (*(&(SLCACTR_ml->Mode))), Str, ULCACTR,((*NL(HKCACTR_coerce1))).nonlocals)) )
{ 
 /* line 2606: */
VLCACTR = (RLCACTR_ans!=0);
if ( VLCACTR )
{VLCACTR = Code;
}
 /* line 2607: */
if ( VLCACTR )
{ 
 /* line 2608: */
A_CALLPROC(NL(PZBACTR_faultp),(109, F, T, (A68_31 *)A68_NIL),(109, F, T, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
} 
else
{ 
 /* line 2609: */
 /* line 2610: */
RLCACTR_ans = TLCACTR_i;
} 
} 
 /* line 2611: */
 /* line 2612: */
SLCACTR_ml = (*(&(SLCACTR_ml->Rest)));
}
 /* line 2613: */
 /* line 2614: */
 /* line 2615: */
WLCACTR = RLCACTR_ans;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(unite);
return( WLCACTR );
} 
#undef NL

A_STATIC A68_INT  ZLCACTR_makeflex(A68_INT  M, void *NonLocals)
#define NL(x) (((AMCACTR_makeflex *)NonLocals)->x)
{ 
A68_INT  BMCACTR_ans;
A68_66  CMCACTR;  /* united object - for case conformity */
A68_61 * DMCACTR_v;
A68_62 * EMCACTR_a;
A68_INT  FMCACTR;  /* clause result */
A_PROC_ENTRY(makeflex);
 /* line 2618: */
{ 
BMCACTR_ans = M;
 /* line 2619: */
 /* line 2620: */
if ( (M<KQAACTR_refmark) )
{ 
 /* line 2621: */
CMCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),M))) ;
switch ( CMCACTR.mode )
{ 
case 7: /* REF STRUCT(INT,INT,INT)  */
DMCACTR_v = (CMCACTR.data.mode7);
 /* line 2622: */
 /* line 2623: */
if ( ((*(&(DMCACTR_v->Deflex)))>=0) )
{ 
 /* line 2624: */
 /* line 2625: */
BMCACTR_ans = A_CALLPROC(NL(ZVBACTR_insertvec),((*(&(DMCACTR_v->Vecmode))), (-1)),((*(&(DMCACTR_v->Vecmode))), (-1),(NL(ZVBACTR_insertvec)).nonlocals));
} 
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
EMCACTR_a = (CMCACTR.data.mode8);
 /* line 2626: */
 /* line 2627: */
if ( ((*(&(EMCACTR_a->Deflex)))>=0) )
{ 
 /* line 2628: */
 /* line 2629: */
 /* line 2630: */
BMCACTR_ans = A_CALLPROC(NL(FVBACTR_insertarray),((*(&(EMCACTR_a->Mode))), (*(&(EMCACTR_a->Nods))), (-1)),((*(&(EMCACTR_a->Mode))), (*(&(EMCACTR_a->Nods))), (-1),(NL(FVBACTR_insertarray)).nonlocals));
} 
break;
default: 
 /* line 2631: */
/*SKIP*/;
break;
} 
} 
 /* line 2632: */
 /* line 2633: */
FMCACTR = BMCACTR_ans;
} 
A_PROC_EXIT(makeflex);
return( FMCACTR );
} 
#undef NL

A_STATIC A68_INT  IMCACTR_strbd(A68_INT  M, void *NonLocals)
#define NL(x) (((JMCACTR_strbd *)NonLocals)->x)
{ 
A68_66  KMCACTR;  /* united object - for case conformity */
A68_59 * LMCACTR_s;
A68_INT  MMCACTR_j;
A68_58 * NMCACTR_sels;
A68_INT  OMCACTR_i;
A68_INT  PMCACTR;  /* clause result */
A68_60 * QMCACTR_is;
A68_61 * RMCACTR_v;
A68_62 * SMCACTR_a;
A68_56 * TMCACTR_u;
A_PROC_ENTRY(strbd);
 /* line 2636: */
 /* line 2637: */
KMCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),M))) ;
switch ( KMCACTR.mode )
{ 
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
LMCACTR_s = (KMCACTR.data.mode4);
 /* line 2638: */
{ 
 /* line 2639: */
NMCACTR_sels = (*(&(LMCACTR_s->Sels)));
 /* line 2640: */
for ( OMCACTR_i = 1;;
OMCACTR_i += 1 ) 
{ 
 /* line 2641: */
if ( !((NMCACTR_sels!=RQAACTR_nilsel)) ) break;
MMCACTR_j = OMCACTR_i;
 /* line 2642: */
 /* line 2643: */
NMCACTR_sels = (*(&(NMCACTR_sels->Rest)));
}
 /* line 2644: */
 /* line 2645: */
 /* line 2646: */
PMCACTR = MMCACTR_j;
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
QMCACTR_is = (KMCACTR.data.mode5);
 /* line 2647: */
 /* line 2648: */
PMCACTR = (*(&(QMCACTR_is->Length)));
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
RMCACTR_v = (KMCACTR.data.mode7);
 /* line 2649: */
 /* line 2650: */
PMCACTR = (-1);
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
SMCACTR_a = (KMCACTR.data.mode8);
 /* line 2651: */
 /* line 2652: */
PMCACTR = ((-1)-(*(&(SMCACTR_a->Nods))));
break;
case 2: /* REF STRUCT(INT,REF MODE54)  */
TMCACTR_u = (KMCACTR.data.mode2);
 /* line 2654: */
 /* line 2655: */
PMCACTR = 1;
break;
default: 
PMCACTR = 0;
break;
} 
A_PROC_EXIT(strbd);
return( PMCACTR );
} 
#undef NL

A_STATIC A68_INT  ZMCACTR_strproc(A68_INT  F, A68_INT  T, A68_INT  Oldf, A68_BOOL  Code, void *NonLocals)
#define NL(x) (((ANCACTR_strproc *)NonLocals)->x)
{ 
A68_INT  DNCACTR_i;
A68_INT  ENCACTR_p;
A68_INT  FNCACTR_m;
A68_63 * GNCACTR_rs;
A68_INT  HNCACTR_lastid1;
A68_INT  INCACTR_ind;
A68_INT  JNCACTR_param;
A68_INT  KNCACTR_decl;
A68_BITS  LNCACTR_props1;
A68_BITS  MNCACTR_dybits1;
A68_68  NNCACTR_rd;
A68_58 * ONCACTR_sels;
A68_54 * PNCACTR_ml;
A68_67  QNCACTR_iddec;
A68_INT * RNCACTR_lastid;
A68_188  UNCACTR_strcoerce;   /* proc value of non-global proc */
A68_BOOL  AOCACTR_olddeprefable;
A68_66  BOCACTR;  /* united object - for case conformity */
A68_64 * COCACTR_sten;
A68_54  DOCACTR;  /* collateral clause result */
A68_54  EOCACTR;  /* collateral clause result */
A68_54 * FOCACTR;  /* YIELD */
A68_54 * GOCACTR;  /* YIELD */
A68_68  HOCACTR;  /* collateral clause result */
A68_106  IOCACTR;  /* OPERATORS - mode -> union mode */
A68_81  JOCACTR;  /* collateral clause result */
A68_67  KOCACTR;  /* collateral clause result */
A68_106  LOCACTR;  /* OPERATORS - mode -> union mode */
A68_81  MOCACTR;  /* collateral clause result */
A68_67  NOCACTR;  /* collateral clause result */
A68_106  OOCACTR;  /* OPERATORS - mode -> union mode */
A68_INT  POCACTR;  /* YIELD */
A68_66  QOCACTR;  /* united object - for case conformity */
A68_61 * ROCACTR_rv;
A68_106  SOCACTR;  /* OPERATORS - mode -> union mode */
A68_106  TOCACTR;  /* OPERATORS - mode -> union mode */
A68_106  UOCACTR;  /* OPERATORS - mode -> union mode */
A68_85  VOCACTR;  /* collateral clause result */
A68_106  WOCACTR;  /* OPERATORS - mode -> union mode */
A68_60 * XOCACTR_ri;
A68_106  YOCACTR;  /* OPERATORS - mode -> union mode */
A68_85  ZOCACTR;  /* collateral clause result */
A68_106  APCACTR;  /* OPERATORS - mode -> union mode */
A68_106  BPCACTR;  /* OPERATORS - mode -> union mode */
A68_106  CPCACTR;  /* OPERATORS - mode -> union mode */
A68_85  DPCACTR;  /* collateral clause result */
A68_106  EPCACTR;  /* OPERATORS - mode -> union mode */
A68_59 * FPCACTR_rst;
A68_INT  GPCACTR_j;
A68_87  HPCACTR;  /* collateral clause result */
A68_106  IPCACTR;  /* OPERATORS - mode -> union mode */
A68_106  JPCACTR;  /* OPERATORS - mode -> union mode */
A68_87  KPCACTR;  /* collateral clause result */
A68_106  LPCACTR;  /* OPERATORS - mode -> union mode */
A68_INT  MPCACTR_j;
A68_87  NPCACTR;  /* collateral clause result */
A68_106  OPCACTR;  /* OPERATORS - mode -> union mode */
A68_106  PPCACTR;  /* OPERATORS - mode -> union mode */
A68_85  QPCACTR;  /* collateral clause result */
A68_106  RPCACTR;  /* OPERATORS - mode -> union mode */
A68_87  SPCACTR;  /* collateral clause result */
A68_106  TPCACTR;  /* OPERATORS - mode -> union mode */
A68_56 * UPCACTR_ru;
A68_INT * VPCACTR;  /* YIELD */
A68_INT  WPCACTR_j;
A68_87  XPCACTR;  /* collateral clause result */
A68_106  YPCACTR;  /* OPERATORS - mode -> union mode */
A68_106  ZPCACTR;  /* OPERATORS - mode -> union mode */
A68_85  AQCACTR;  /* collateral clause result */
A68_106  BQCACTR;  /* OPERATORS - mode -> union mode */
A68_87  CQCACTR;  /* collateral clause result */
A68_106  DQCACTR;  /* OPERATORS - mode -> union mode */
A68_INT  EQCACTR_j;
A68_87  FQCACTR;  /* collateral clause result */
A68_106  GQCACTR;  /* OPERATORS - mode -> union mode */
A68_87  HQCACTR;  /* collateral clause result */
A68_106  IQCACTR;  /* OPERATORS - mode -> union mode */
A68_106  JQCACTR;  /* OPERATORS - mode -> union mode */
A68_85  KQCACTR;  /* collateral clause result */
A68_106  LQCACTR;  /* OPERATORS - mode -> union mode */
A68_87  MQCACTR;  /* collateral clause result */
A68_106  NQCACTR;  /* OPERATORS - mode -> union mode */
A68_62 * OQCACTR_ra;
A68_106  PQCACTR;  /* OPERATORS - mode -> union mode */
A68_106  QQCACTR;  /* OPERATORS - mode -> union mode */
A68_106  RQCACTR;  /* OPERATORS - mode -> union mode */
A68_85  SQCACTR;  /* collateral clause result */
A68_106  TQCACTR;  /* OPERATORS - mode -> union mode */
A68_85  UQCACTR;  /* collateral clause result */
A68_106  VQCACTR;  /* OPERATORS - mode -> union mode */
A68_74  WQCACTR;  /* collateral clause result */
A68_VC  YQCACTR;  /* OPERATORS - trim index */
A68_VC  ARCACTR;  /* YIELD */
A68_VC  BRCACTR;  /* OPERATORS - assign op */
A68_106  CRCACTR;  /* OPERATORS - mode -> union mode */
A68_85  DRCACTR;  /* collateral clause result */
A68_106  ERCACTR;  /* OPERATORS - mode -> union mode */
A68_106  FRCACTR;  /* OPERATORS - mode -> union mode */
A68_85  GRCACTR;  /* collateral clause result */
A68_106  HRCACTR;  /* OPERATORS - mode -> union mode */
A68_85  IRCACTR;  /* collateral clause result */
A68_106  JRCACTR;  /* OPERATORS - mode -> union mode */
A68_INT  KRCACTR;  /* to part of loop */
A68_INT  LRCACTR;  /* loop control */
A68_85  MRCACTR;  /* collateral clause result */
A68_106  NRCACTR;  /* OPERATORS - mode -> union mode */
A68_85  ORCACTR;  /* collateral clause result */
A68_106  PRCACTR;  /* OPERATORS - mode -> union mode */
A68_INT  QRCACTR;  /* clause result */
A68_BOOL  RRCACTR;  /* clause result */
A68_85  SRCACTR;  /* collateral clause result */
A68_106  TRCACTR;  /* OPERATORS - mode -> union mode */
A68_85  URCACTR;  /* collateral clause result */
A68_106  VRCACTR;  /* OPERATORS - mode -> union mode */
A68_87  YRCACTR;  /* collateral clause result */
A68_106  ZRCACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * ASCACTR;  /* YIELD */
A68_BITS * BSCACTR;  /* YIELD */
A68_63  CSCACTR;  /* collateral clause result */
A68_63 * DSCACTR;  /* YIELD */
A68_63 ** ESCACTR;  /* YIELD */
A68_INT  HSCACTR;  /* clause result */
A_PROC_ENTRY(strproc);
 /* line 2661: */
 /* line 2662: */
{ 
ENCACTR_p = 1;
 /* line 2663: */
 /* line 2664: */
 /* line 2665: */
 /* line 2666: */
 /* line 2667: */
 /* line 2668: */
 /* line 2669: */
 /* line 2670: */
RNCACTR_lastid = (&((*NL(QYAACTR_globcurrent))->Lastid));
 /* line 2672: */
A_CLOSURE( UNCACTR_strcoerce, VNCACTR_strcoerce, WNCACTR_strcoerce );
(( WNCACTR_strcoerce * ) ( UNCACTR_strcoerce.nonlocals )) -> Oldf = Oldf;
(( WNCACTR_strcoerce * ) ( UNCACTR_strcoerce.nonlocals )) -> Code = Code;
(( WNCACTR_strcoerce * ) ( UNCACTR_strcoerce.nonlocals )) -> EJCACTR_deref = NL(EJCACTR_deref);
(( WNCACTR_strcoerce * ) ( UNCACTR_strcoerce.nonlocals )) -> HKCACTR_coerce1 = NL(HKCACTR_coerce1);
(( WNCACTR_strcoerce * ) ( UNCACTR_strcoerce.nonlocals )) -> ENCACTR_p = (&ENCACTR_p);
 /* line 2684: */
AOCACTR_olddeprefable = (*NL(GKCACTR_deprefable));
 /* line 2685: */
(*NL(GKCACTR_deprefable)) = A68_FALSE;
 /* line 2687: */
 /* line 2688: */
BOCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),T))) ;
switch ( BOCACTR.mode )
{ 
case 9: /* REF STRUCT(INT,REF MODE63)  */
COCACTR_sten = (BOCACTR.data.mode9);
 /* line 2689: */
{ 
GNCACTR_rs = (*(&(COCACTR_sten->Stenlist)));
 /* line 2691: */
for ( ;; )
{ 
 /* line 2692: */
if ( !((GNCACTR_rs!=(A68_63 *)A68_NIL)) ) break;
 /* line 2693: */
if ( ((*(&(GNCACTR_rs->Mode)))==Oldf) )
{ 
ENCACTR_p = (*(&(GNCACTR_rs->Rdenno)));
 /* line 2694: */
 /* line 2695: */
goto CNCACTR_out;
} 
else
{ 
 /* line 2696: */
 /* line 2697: */
GNCACTR_rs = (*(&(GNCACTR_rs->Rest)));
} 
}
 /* line 2699: */
 /* line 2700: */
if ( Code )
{ 
HNCACTR_lastid1 = (*RNCACTR_lastid);
 /* line 2701: */
(*NL(GBBACTR_lastidchanged)) = A68_TRUE;
 /* line 2702: */
LNCACTR_props1 = (*(&((*NL(QYAACTR_globcurrent))->Props)));
 /* line 2703: */
MNCACTR_dybits1 = (*(&((*NL(QYAACTR_globcurrent))->Dybits)));
 /* line 2704: */
INCACTR_ind = (*RNCACTR_lastid)+=1;
 /* line 2705: */
JNCACTR_param = (*RNCACTR_lastid)+=1;
 /* line 2706: */
 /* line 2707: */
 /* line 2708: */
DOCACTR.Mode = ELAACTR_int;
EOCACTR.Mode = F;
EOCACTR.Rest = (A68_54 *)A68_NIL;
 /* line 2709: */
FOCACTR = A_HEAP(A68_54 ) ;
(*FOCACTR) = EOCACTR ;
DOCACTR.Rest = FOCACTR;
GOCACTR = A_HEAP(A68_54 ) ;
(*GOCACTR) = DOCACTR ;
DNCACTR_i = A_CALLPROC(NL(RRBACTR_insertprocp),((*(&(COCACTR_sten->Mode))), GOCACTR),((*(&(COCACTR_sten->Mode))), GOCACTR,(NL(RRBACTR_insertprocp)).nonlocals));
 /* line 2711: */
 /* line 2712: */
HOCACTR.Name = A_CALLPROC(NL(KTAACTR_idmess),(62),(62,(NL(KTAACTR_idmess)).nonlocals));
HOCACTR.Props = PLAACTR_globscopebit;
 /* line 2713: */
HOCACTR.Mode = DNCACTR_i;
HOCACTR.Rdenno = ENCACTR_p = (*NL(CZAACTR_lastrd))+=1;
HOCACTR.Maxname = 0;
 /* line 2714: */
HOCACTR.Level = 0;
HOCACTR.Rest = (A68_68 *)A68_NIL;
NNCACTR_rd = HOCACTR;
 /* line 2715: */
A_CALLPROC(NL(Output),(A_UNITE(IOCACTR,mode34,34,(&NNCACTR_rd)), (*NL(FZAACTR_outlevel))),(A_UNITE(IOCACTR,mode34,34,(&NNCACTR_rd)), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2716: */
JOCACTR.Type = YOAACTR_xfdec;
KOCACTR.Name = NL(BZAACTR_nullid);
KOCACTR.Decno = INCACTR_ind;
 /* line 2717: */
KOCACTR.Level = 1;
KOCACTR.Mode = ELAACTR_int;
 /* line 2718: */
KOCACTR.Scope = 0;
KOCACTR.Rest = (A68_67 *)A68_NIL;
QNCACTR_iddec = KOCACTR ;
JOCACTR.Iddec = (&QNCACTR_iddec);
A_CALLPROC(NL(Output),(A_UNITE(LOCACTR,mode12,12,JOCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(LOCACTR,mode12,12,JOCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2719: */
MOCACTR.Type = YOAACTR_xfdec;
NOCACTR.Name = NL(BZAACTR_nullid);
NOCACTR.Decno = JNCACTR_param;
 /* line 2720: */
NOCACTR.Level = 1;
NOCACTR.Mode = F;
 /* line 2721: */
NOCACTR.Scope = 0;
NOCACTR.Rest = (A68_67 *)A68_NIL;
QNCACTR_iddec = NOCACTR ;
MOCACTR.Iddec = (&QNCACTR_iddec);
 /* line 2722: */
A_CALLPROC(NL(Output),(A_UNITE(OOCACTR,mode12,12,MOCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(OOCACTR,mode12,12,MOCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 2724: */
 /* line 2725: */
POCACTR = (A68_INT )(A68_BITS )((A68_BITS )Oldf&LQAACTR_decsmask) ;
QOCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),POCACTR))) ;
switch ( QOCACTR.mode )
{ 
case 7: /* REF STRUCT(INT,INT,INT)  */
ROCACTR_rv = (QOCACTR.data.mode7);
 /* line 2726: */
{ 
FNCACTR_m = ((*(&(ROCACTR_rv->Vecmode)))+KQAACTR_refmark);
 /* line 2727: */
 /* line 2728: */
if ( Code )
{ 
A_CALLPROC(NL(Output),(A_UNITE(SOCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel))),(A_UNITE(SOCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2729: */
A_CALLPROC(NL(Output),(A_UNITE(TOCACTR,mode16,16,HPAACTR_xwindex), (*NL(FZAACTR_outlevel))),(A_UNITE(TOCACTR,mode16,16,HPAACTR_xwindex), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2730: */
A_CALLPROC(NL(Output),(A_UNITE(UOCACTR,mode3,3,INCACTR_ind), (*NL(FZAACTR_outlevel))),(A_UNITE(UOCACTR,mode3,3,INCACTR_ind), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2731: */
VOCACTR.Fn = LMAACTR_xsimpleindex;
VOCACTR.M = FNCACTR_m;
VOCACTR.Param = 1;
 /* line 2732: */
A_CALLPROC(NL(Output),(A_UNITE(WOCACTR,mode14,14,VOCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(WOCACTR,mode14,14,VOCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 2733: */
 /* line 2734: */
 /* line 2735: */
A_CALLPROC(UNCACTR_strcoerce,(FNCACTR_m, (*(&(COCACTR_sten->Mode)))),(FNCACTR_m, (*(&(COCACTR_sten->Mode))),(UNCACTR_strcoerce).nonlocals));
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
XOCACTR_ri = (QOCACTR.data.mode5);
 /* line 2736: */
{ 
FNCACTR_m = ((*(&(XOCACTR_ri->Imode)))+KQAACTR_refmark);
 /* line 2737: */
 /* line 2738: */
if ( Code )
{ 
A_CALLPROC(NL(Output),(A_UNITE(YOCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel))),(A_UNITE(YOCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2739: */
 /* line 2740: */
ZOCACTR.Fn = JOAACTR_xisvec;
 /* line 2741: */
 /* line 2743: */
ZOCACTR.M = (A_CALLPROC(NL(ZVBACTR_insertvec),((*(&(XOCACTR_ri->Imode))), 1),((*(&(XOCACTR_ri->Imode))), 1,(NL(ZVBACTR_insertvec)).nonlocals))+KQAACTR_refmark);
ZOCACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(APCACTR,mode14,14,ZOCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(APCACTR,mode14,14,ZOCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2744: */
A_CALLPROC(NL(Output),(A_UNITE(BPCACTR,mode16,16,HPAACTR_xwindex), (*NL(FZAACTR_outlevel))),(A_UNITE(BPCACTR,mode16,16,HPAACTR_xwindex), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2745: */
A_CALLPROC(NL(Output),(A_UNITE(CPCACTR,mode3,3,INCACTR_ind), (*NL(FZAACTR_outlevel))),(A_UNITE(CPCACTR,mode3,3,INCACTR_ind), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2746: */
DPCACTR.Fn = LMAACTR_xsimpleindex;
DPCACTR.M = FNCACTR_m;
DPCACTR.Param = 1;
 /* line 2747: */
A_CALLPROC(NL(Output),(A_UNITE(EPCACTR,mode14,14,DPCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(EPCACTR,mode14,14,DPCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 2748: */
 /* line 2749: */
 /* line 2750: */
A_CALLPROC(UNCACTR_strcoerce,(FNCACTR_m, (*(&(COCACTR_sten->Mode)))),(FNCACTR_m, (*(&(COCACTR_sten->Mode))),(UNCACTR_strcoerce).nonlocals));
} 
break;
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
FPCACTR_rst = (QOCACTR.data.mode4);
 /* line 2751: */
{ 
 /* line 2752: */
if ( Code )
{ 
ONCACTR_sels = (*(&(FPCACTR_rst->Sels)));
 /* line 2753: */
for ( GPCACTR_j = 1;;
GPCACTR_j += 1 ) 
{ 
 /* line 2754: */
if ( !((ONCACTR_sels!=RQAACTR_nilsel)) ) break;
DNCACTR_i = GPCACTR_j;
 /* line 2755: */
 /* line 2756: */
ONCACTR_sels = (*(&(ONCACTR_sels->Rest)));
}
 /* line 2757: */
HPCACTR.Fn = XMAACTR_xcase;
HPCACTR.M = ELAACTR_int;
 /* line 2759: */
HPCACTR.Props = WLAACTR_compgenbit;
HPCACTR.Param = (*(&(COCACTR_sten->Mode)));
A_CALLPROC(NL(Output),(A_UNITE(IPCACTR,mode17,17,HPCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(IPCACTR,mode17,17,HPCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2760: */
A_CALLPROC(NL(Output),(A_UNITE(JPCACTR,mode3,3,INCACTR_ind), (*NL(FZAACTR_outlevel))),(A_UNITE(JPCACTR,mode3,3,INCACTR_ind), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2761: */
KPCACTR.Fn = BNAACTR_xin;
 /* line 2762: */
KPCACTR.M = (*(&(COCACTR_sten->Mode)));
 /* line 2763: */
KPCACTR.Props = WLAACTR_compgenbit;
KPCACTR.Param = DNCACTR_i;
 /* line 2764: */
A_CALLPROC(NL(Output),(A_UNITE(LPCACTR,mode17,17,KPCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(LPCACTR,mode17,17,KPCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 2765: */
ONCACTR_sels = (*(&(FPCACTR_rst->Sels)));
 /* line 2766: */
 /* line 2767: */
for ( MPCACTR_j = 1;;
MPCACTR_j += 1 ) 
{ 
 /* line 2768: */
if ( !((ONCACTR_sels!=RQAACTR_nilsel)) ) break;
FNCACTR_m = ((*(&(ONCACTR_sels->Mode)))+KQAACTR_refmark);
 /* line 2769: */
 /* line 2770: */
if ( Code )
{ 
 /* line 2771: */
if ( (MPCACTR_j!=1) )
{ 
 /* line 2772: */
NPCACTR.Fn = DNAACTR_xcomma;
 /* line 2773: */
NPCACTR.M = (*(&(COCACTR_sten->Mode)));
 /* line 2774: */
NPCACTR.Props = WLAACTR_compgenbit;
NPCACTR.Param = MPCACTR_j;
 /* line 2775: */
A_CALLPROC(NL(Output),(A_UNITE(OPCACTR,mode17,17,NPCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(OPCACTR,mode17,17,NPCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 2776: */
A_CALLPROC(NL(Output),(A_UNITE(PPCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel))),(A_UNITE(PPCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2777: */
QPCACTR.Fn = IMAACTR_xselect;
QPCACTR.M = FNCACTR_m;
QPCACTR.Param = MPCACTR_j;
 /* line 2778: */
A_CALLPROC(NL(Output),(A_UNITE(RPCACTR,mode14,14,QPCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(RPCACTR,mode14,14,QPCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 2779: */
A_CALLPROC(UNCACTR_strcoerce,(FNCACTR_m, (*(&(COCACTR_sten->Mode)))),(FNCACTR_m, (*(&(COCACTR_sten->Mode))),(UNCACTR_strcoerce).nonlocals));
 /* line 2780: */
 /* line 2781: */
ONCACTR_sels = (*(&(ONCACTR_sels->Rest)));
}
 /* line 2782: */
 /* line 2783: */
if ( Code )
{ 
SPCACTR.Fn = KNAACTR_xesac;
SPCACTR.M = 0;
 /* line 2785: */
SPCACTR.Props = WLAACTR_compgenbit;
SPCACTR.Param = (*(&(COCACTR_sten->Mode)));
 /* line 2786: */
 /* line 2787: */
 /* line 2788: */
A_CALLPROC(NL(Output),(A_UNITE(TPCACTR,mode17,17,SPCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(TPCACTR,mode17,17,SPCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
} 
break;
case 2: /* REF STRUCT(INT,REF MODE54)  */
UPCACTR_ru = (QOCACTR.data.mode2);
 /* line 2789: */
 /* line 2790: */
if ( (Oldf>KQAACTR_refmark) )
{ 
 /* line 2791: */
ENCACTR_p = 0;
} 
else
{ 
 /* line 2792: */
if ( Code )
{ 
VPCACTR = (&((*NL(QYAACTR_globcurrent))->Lastid)) ;
KNCACTR_decl = (*VPCACTR)+=1;
 /* line 2793: */
PNCACTR_ml = (*(&(UPCACTR_ru->Modelist)));
 /* line 2794: */
 /* line 2795: */
for ( WPCACTR_j = 1;;
WPCACTR_j += 1 ) 
{ 
 /* line 2796: */
if ( !((PNCACTR_ml!=OQAACTR_nilml)) ) break;
DNCACTR_i = WPCACTR_j;
 /* line 2797: */
 /* line 2798: */
PNCACTR_ml = (*(&(PNCACTR_ml->Rest)));
}
 /* line 2799: */
XPCACTR.Fn = YMAACTR_xcaseu;
XPCACTR.M = Oldf;
 /* line 2801: */
XPCACTR.Props = WLAACTR_compgenbit;
XPCACTR.Param = (*(&(COCACTR_sten->Mode)));
A_CALLPROC(NL(Output),(A_UNITE(YPCACTR,mode17,17,XPCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(YPCACTR,mode17,17,XPCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2802: */
A_CALLPROC(NL(Output),(A_UNITE(ZPCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel))),(A_UNITE(ZPCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2803: */
AQCACTR.Fn = ZNAACTR_xderef;
AQCACTR.M = Oldf;
AQCACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(BQCACTR,mode14,14,AQCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(BQCACTR,mode14,14,AQCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2804: */
CQCACTR.Fn = CNAACTR_xinu;
 /* line 2805: */
CQCACTR.M = (*(&(COCACTR_sten->Mode)));
 /* line 2806: */
CQCACTR.Props = WLAACTR_compgenbit;
CQCACTR.Param = DNCACTR_i;
 /* line 2807: */
A_CALLPROC(NL(Output),(A_UNITE(DQCACTR,mode17,17,CQCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(DQCACTR,mode17,17,CQCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 2808: */
PNCACTR_ml = (*(&(UPCACTR_ru->Modelist)));
 /* line 2809: */
 /* line 2810: */
for ( EQCACTR_j = 1;;
EQCACTR_j += 1 ) 
{ 
 /* line 2811: */
if ( !((PNCACTR_ml!=OQAACTR_nilml)) ) break;
 /* line 2812: */
if ( Code )
{ 
 /* line 2813: */
if ( (EQCACTR_j!=1) )
{ 
 /* line 2814: */
FQCACTR.Fn = ENAACTR_xcommau;
 /* line 2815: */
FQCACTR.M = (*(&(COCACTR_sten->Mode)));
 /* line 2816: */
FQCACTR.Props = WLAACTR_compgenbit;
FQCACTR.Param = EQCACTR_j;
 /* line 2817: */
A_CALLPROC(NL(Output),(A_UNITE(GQCACTR,mode17,17,FQCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(GQCACTR,mode17,17,FQCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 2818: */
 /* line 2819: */
HQCACTR.Fn = WNAACTR_xuchoice;
 /* line 2820: */
HQCACTR.M = (*(&(PNCACTR_ml->Mode)));
 /* line 2821: */
HQCACTR.Props = WLAACTR_compgenbit;
HQCACTR.Param = EQCACTR_j;
A_CALLPROC(NL(Output),(A_UNITE(IQCACTR,mode17,17,HQCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(IQCACTR,mode17,17,HQCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2822: */
A_CALLPROC(NL(Output),(A_UNITE(JQCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel))),(A_UNITE(JQCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2823: */
 /* line 2824: */
KQCACTR.Fn = ROAACTR_xdeunite;
 /* line 2825: */
KQCACTR.M = ((*(&(PNCACTR_ml->Mode)))+KQAACTR_refmark);
KQCACTR.Param = 0;
 /* line 2826: */
A_CALLPROC(NL(Output),(A_UNITE(LQCACTR,mode14,14,KQCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(LQCACTR,mode14,14,KQCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 2827: */
 /* line 2829: */
A_CALLPROC(UNCACTR_strcoerce,(((*(&(PNCACTR_ml->Mode)))+KQAACTR_refmark), (*(&(COCACTR_sten->Mode)))),(((*(&(PNCACTR_ml->Mode)))+KQAACTR_refmark), (*(&(COCACTR_sten->Mode))),(UNCACTR_strcoerce).nonlocals));
 /* line 2830: */
 /* line 2831: */
PNCACTR_ml = (*(&(PNCACTR_ml->Rest)));
}
 /* line 2832: */
 /* line 2833: */
if ( Code )
{ 
MQCACTR.Fn = LNAACTR_xesacu;
MQCACTR.M = 0;
 /* line 2835: */
MQCACTR.Props = WLAACTR_compgenbit;
MQCACTR.Param = (*(&(COCACTR_sten->Mode)));
 /* line 2836: */
 /* line 2837: */
 /* line 2838: */
A_CALLPROC(NL(Output),(A_UNITE(NQCACTR,mode17,17,MQCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(NQCACTR,mode17,17,MQCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
} 
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
OQCACTR_ra = (QOCACTR.data.mode8);
 /* line 2839: */
{ 
FNCACTR_m = ((*(&(OQCACTR_ra->Mode)))+KQAACTR_refmark);
 /* line 2840: */
 /* line 2841: */
if ( Code )
{ 
A_CALLPROC(NL(Output),(A_UNITE(PQCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel))),(A_UNITE(PQCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2842: */
A_CALLPROC(NL(Output),(A_UNITE(QQCACTR,mode16,16,HPAACTR_xwindex), (*NL(FZAACTR_outlevel))),(A_UNITE(QQCACTR,mode16,16,HPAACTR_xwindex), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2843: */
A_CALLPROC(NL(Output),(A_UNITE(RQCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel))),(A_UNITE(RQCACTR,mode3,3,JNCACTR_param), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2844: */
 /* line 2845: */
SQCACTR.Fn = ZNAACTR_xderef;
 /* line 2846: */
SQCACTR.M = A_CALLPROC(NL(JGCACTR_deflex),((F-KQAACTR_refmark)),((F-KQAACTR_refmark),(NL(JGCACTR_deflex)).nonlocals));
SQCACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(TQCACTR,mode14,14,SQCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(TQCACTR,mode14,14,SQCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2847: */
UQCACTR.Fn = QMAACTR_xmonop;
UQCACTR.M = ELAACTR_int;
UQCACTR.Param = 50;
A_CALLPROC(NL(Output),(A_UNITE(VQCACTR,mode14,14,UQCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(VQCACTR,mode14,14,UQCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2849: */
 /* line 2850: */
WQCACTR.Mode = ELAACTR_int;
 /* line 2851: */
ARCACTR = A_VTRIM(YQCACTR,(NL(ATAACTR_string)),A_VTSCRIPT(&(YQCACTR.upb),(NL(ATAACTR_string)).upb,1,2)) ;
BRCACTR = ZQCACTR ;
A_VASSIGN2(BRCACTR,ARCACTR,A68_CHAR ) ;
WQCACTR.Nu = ARCACTR;
A_CALLPROC(NL(Output),(A_UNITE(CRCACTR,mode9,9,WQCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(CRCACTR,mode9,9,WQCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2852: */
DRCACTR.Fn = PMAACTR_xdyop;
DRCACTR.M = ELAACTR_int;
DRCACTR.Param = 17;
A_CALLPROC(NL(Output),(A_UNITE(ERCACTR,mode14,14,DRCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(ERCACTR,mode14,14,DRCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2853: */
A_CALLPROC(NL(Output),(A_UNITE(FRCACTR,mode3,3,INCACTR_ind), (*NL(FZAACTR_outlevel))),(A_UNITE(FRCACTR,mode3,3,INCACTR_ind), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2854: */
GRCACTR.Fn = PMAACTR_xdyop;
GRCACTR.M = ELAACTR_int;
GRCACTR.Param = 2;
A_CALLPROC(NL(Output),(A_UNITE(HRCACTR,mode14,14,GRCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(HRCACTR,mode14,14,GRCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2856: */
 /* line 2857: */
if ( ((*(&(OQCACTR_ra->Nods)))==1) )
{ 
 /* line 2858: */
IRCACTR.Fn = LMAACTR_xsimpleindex;
 /* line 2859: */
IRCACTR.M = FNCACTR_m;
IRCACTR.Param = 1;
 /* line 2860: */
A_CALLPROC(NL(Output),(A_UNITE(JRCACTR,mode14,14,IRCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(JRCACTR,mode14,14,IRCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
else
{ 
 /* line 2861: */
KRCACTR = ((*(&(OQCACTR_ra->Nods)))-1);
for ( LRCACTR = 1;
LRCACTR <= KRCACTR;
LRCACTR += 1 )
{ 
MRCACTR.Fn = KMAACTR_xtrim;
MRCACTR.M = 0;
MRCACTR.Param = 0;
 /* line 2862: */
A_CALLPROC(NL(Output),(A_UNITE(NRCACTR,mode14,14,MRCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(NRCACTR,mode14,14,MRCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
}
 /* line 2863: */
ORCACTR.Fn = MMAACTR_xtrimindex;
 /* line 2865: */
ORCACTR.M = FNCACTR_m;
ORCACTR.Param = (*(&(OQCACTR_ra->Nods)));
A_CALLPROC(NL(Output),(A_UNITE(PRCACTR,mode14,14,ORCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(PRCACTR,mode14,14,ORCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2866: */
 /* line 2867: */
if ( (Oldf<KQAACTR_refmark) )
{ 
 /* line 2868: */
 /* line 2869: */
QRCACTR = (FNCACTR_m-KQAACTR_refmark);
} 
else
{ 
QRCACTR = FNCACTR_m;
} 
 /* line 2870: */
 /* line 2871: */
 /* line 2873: */
RRCACTR = !A_CALLPROC((*NL(HKCACTR_coerce1)),((A68_125 *)A68_NIL, QRCACTR, (*(&(COCACTR_sten->Mode))), 6, A68_FALSE),((A68_125 *)A68_NIL, QRCACTR, (*(&(COCACTR_sten->Mode))), 6, A68_FALSE,((*NL(HKCACTR_coerce1))).nonlocals));
if ( RRCACTR )
{ 
 /* line 2874: */
SRCACTR.Fn = ZNAACTR_xderef;
 /* line 2875: */
SRCACTR.M = (FNCACTR_m-KQAACTR_refmark);
SRCACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(TRCACTR,mode14,14,SRCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(TRCACTR,mode14,14,SRCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2876: */
 /* line 2877: */
URCACTR.Fn = GMAACTR_xstatgrab;
 /* line 2878: */
 /* line 2880: */
URCACTR.M = (A_CALLPROC(NL(YLCACTR_makeflex),((FNCACTR_m-KQAACTR_refmark)),((FNCACTR_m-KQAACTR_refmark),(NL(YLCACTR_makeflex)).nonlocals))+KQAACTR_refmark);
URCACTR.Param = 0;
 /* line 2881: */
 /* line 2882: */
 /* line 2883: */
A_CALLPROC(NL(Output),(A_UNITE(VRCACTR,mode14,14,URCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(VRCACTR,mode14,14,URCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
} 
} 
 /* line 2884: */
 /* line 2885: */
 /* line 2886: */
A_CALLPROC(UNCACTR_strcoerce,(FNCACTR_m, (*(&(COCACTR_sten->Mode)))),(FNCACTR_m, (*(&(COCACTR_sten->Mode))),(UNCACTR_strcoerce).nonlocals));
} 
break;
default: 
 /* line 2887: */
if ( Code )
{ 
 /* line 2888: */
A_CALLPROC(NL(UIBACTR_faultchars),(XRCACTR),(XRCACTR,(NL(UIBACTR_faultchars)).nonlocals));
} 
else
{ 
 /* line 2889: */
 /* line 2890: */
ENCACTR_p = 0;
} 
break;
} 
 /* line 2892: */
 /* line 2893: */
if ( Code )
{ 
YRCACTR.Fn = VNAACTR_xroutinend;
YRCACTR.M = 0;
YRCACTR.Props = WLAACTR_compgenbit;
YRCACTR.Param = 0;
 /* line 2895: */
A_CALLPROC(NL(Output),(A_UNITE(ZRCACTR,mode17,17,YRCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(ZRCACTR,mode17,17,YRCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 2896: */
 /* line 2897: */
if ( ((*RNCACTR_lastid)>(*NL(GZAACTR_maxident))) )
{ 
 /* line 2898: */
(*NL(GZAACTR_maxident)) = (*RNCACTR_lastid);
} 
 /* line 2899: */
(*RNCACTR_lastid) = HNCACTR_lastid1;
 /* line 2900: */
ASCACTR = (&((*NL(QYAACTR_globcurrent))->Props)) ;
(*ASCACTR) = LNCACTR_props1;
 /* line 2901: */
 /* line 2902: */
BSCACTR = (&((*NL(QYAACTR_globcurrent))->Dybits)) ;
(*BSCACTR) = MNCACTR_dybits1;
} 
 /* line 2903: */
 /* line 2904: */
if ( (ENCACTR_p>1) )
{ 
 /* line 2905: */
CSCACTR.Mode = Oldf;
CSCACTR.Rdenno = ENCACTR_p;
 /* line 2906: */
CSCACTR.Rest = (*(&(COCACTR_sten->Stenlist)));
 /* line 2907: */
 /* line 2908: */
DSCACTR = A_HEAP(A68_63 ) ;
(*DSCACTR) = CSCACTR ;
ESCACTR = (&(COCACTR_sten->Stenlist)) ;
(*ESCACTR) = DSCACTR;
} 
} 
break;
default: 
 /* line 2909: */
A_CALLPROC(NL(UIBACTR_faultchars),(GSCACTR),(GSCACTR,(NL(UIBACTR_faultchars)).nonlocals));
break;
} 
 /* line 2910: */
CNCACTR_out:
 /* line 2911: */
(*NL(GKCACTR_deprefable)) = AOCACTR_olddeprefable;
 /* line 2912: */
 /* line 2913: */
HSCACTR = ENCACTR_p;
} 
A_PROC_EXIT(strproc);
return( HSCACTR );
} 
#undef NL

A_STATIC A68_BOOL  PSCACTR_coerce(A68_125 * V, A68_INT  F, A68_INT  T, A68_INT  Str, A68_BOOL  Code, void *NonLocals)
#define NL(x) (((QSCACTR_coerce *)NonLocals)->x)
{ 
A68_INT  TSCACTR_ans;
A68_INT  USCACTR_t1;
A68_INT  VSCACTR_f1;
A68_INT  WSCACTR_qref;
A68_INT  XSCACTR_i;
A68_INT  YSCACTR_j;
A68_INT  ZSCACTR_p3;
A68_54 * ATCACTR_ml;
A68_BITS  BTCACTR_b;
A68_BOOL  CTCACTR;  /* optbool result */
A68_BOOL  DTCACTR;  /* optbool result */
A68_BOOL  ETCACTR;  /* optbool result */
A68_66  FTCACTR;  /* united object - for case conformity */
A68_55 * GTCACTR_p;
A68_BOOL  HTCACTR;  /* clause result */
A68_INT  ITCACTR;  /* clause result */
A68_BOOL  JTCACTR;  /* optbool result */
A68_BOOL  KTCACTR;  /* optbool result */
A68_BOOL  LTCACTR;  /* clause result */
A68_INT  MTCACTR;  /* clause result */
A68_BOOL  NTCACTR;  /* optbool result */
A68_BOOL  OTCACTR;  /* optbool result */
A68_BOOL  PTCACTR;  /* clause result */
A68_BOOL  QTCACTR;  /* optbool result */
A68_INT  RTCACTR;  /* clause result */
A68_66  STCACTR;  /* united object - for case conformity */
A68_61 * TTCACTR_vec;
A68_INT  UTCACTR;  /* clause result */
A68_66  VTCACTR;  /* clause result */
A68_INT  WTCACTR;  /* YIELD */
A68_60 * XTCACTR_ri;
A68_BOOL  YTCACTR;  /* optbool result */
A68_BOOL  ZTCACTR;  /* optbool result */
A68_BOOL  AUCACTR;  /* optbool result */
A68_62 * BUCACTR_a;
A68_BOOL  CUCACTR;  /* optbool result */
A68_INT  DUCACTR;  /* clause result */
A68_INT  EUCACTR;  /* to part of loop */
A68_INT  FUCACTR;  /* loop control */
A68_66  GUCACTR;  /* united object - for case conformity */
A68_60 * HUCACTR_is;
A68_66  IUCACTR;  /* united object - for case conformity */
A68_62 * JUCACTR_a1;
A68_BOOL  KUCACTR;  /* optbool result */
A68_66  LUCACTR;  /* united object - for case conformity */
A68_61 * MUCACTR_rv;
A68_BOOL  NUCACTR;  /* optbool result */
A68_BOOL  OUCACTR;  /* optbool result */
A68_BOOL  PUCACTR;  /* optbool result */
A68_INT  QUCACTR;  /* clause result */
A68_BOOL  RUCACTR;  /* optbool result */
A68_64 * SUCACTR_s;
A68_BOOL  TUCACTR;  /* optbool result */
A68_BOOL  WUCACTR;  /* optbool result */
A68_85  XUCACTR;  /* collateral clause result */
A68_106  YUCACTR;  /* OPERATORS - mode -> union mode */
A68_106  ZUCACTR;  /* OPERATORS - mode -> union mode */
A68_56 * AVCACTR_u;
A68_BOOL  DVCACTR;  /* optbool result */
A68_INT  GVCACTR;  /* YIELD */
A68_66  HVCACTR;  /* united object - for case conformity */
A68_56 * IVCACTR_u1;
A68_INT  JVCACTR;  /* clause result */
A68_INT  KVCACTR_i;
A68_BOOL  LVCACTR;  /* optbool result */
A68_BOOL  MVCACTR;  /* clause result */
A68_INT  NVCACTR_p;
A68_BOOL  OVCACTR;  /* optbool result */
A68_59 * PVCACTR_s;
A68_BOOL  QVCACTR;  /* optbool result */
A68_60 * RVCACTR_ri;
A68_BOOL  SVCACTR;  /* optbool result */
A68_BOOL  TVCACTR;  /* optbool result */
A68_BOOL  WVCACTR;  /* optbool result */
A68_BOOL  XVCACTR;  /* optbool result */
A68_66  YVCACTR;  /* united object - for case conformity */
A68_62 * ZVCACTR_a;
A68_BOOL  AWCACTR;  /* optbool result */
A68_INT  BWCACTR;  /* clause result */
A68_85  CWCACTR;  /* collateral clause result */
A68_106  DWCACTR;  /* OPERATORS - mode -> union mode */
A68_INT  EWCACTR;  /* ADICOPS - ABS INT */
A68_BITS  FWCACTR;  /* ADICOPS - >= */
A68_BITS  GWCACTR;  /* clause result */
A68_BITS  HWCACTR;  /* ADICOPS - >= */
A68_BOOL  IWCACTR;  /* clause result */
A68_BITS * JWCACTR;  /* YIELD */
A68_BITS * KWCACTR;  /* YIELD */
A68_INT * LWCACTR;  /* YIELD */
A68_BOOL  MWCACTR;  /* clause result */
A_PROC_ENTRY(coerce);
 /* line 2930: */
 /* line 2931: */
{ 
TSCACTR_ans = (-1);
ZSCACTR_p3 = 0;
 /* line 2932: */
 /* line 2933: */
 /* line 2934: */
CTCACTR = (F==T);
if ( ! CTCACTR )
{ /* line 2935: */
CTCACTR = (F==ZKAACTR_faultmode);
}
if ( CTCACTR )
{ 
 /* line 2936: */
TSCACTR_ans = 0;
} 
else
{ 
 /* line 2937: */
DTCACTR = (Str==10);
if ( DTCACTR )
{{ 
 /* line 2938: */
if ( (F==XKAACTR_gotomode) )
{ 
ETCACTR = (T<KQAACTR_refmark);
if ( ETCACTR )
{ /* line 2939: */
FTCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),T))) ;
switch ( FTCACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
GTCACTR_p = (FTCACTR.data.mode6);
 /* line 2940: */
 /* line 2941: */
HTCACTR = A68_TRUE;
break;
default: 
 /* line 2942: */
 /* line 2943: */
HTCACTR = A68_FALSE;
break;
} 
ETCACTR = HTCACTR;
}
 /* line 2944: */
if ( ETCACTR )
{ 
 /* line 2945: */
ITCACTR = DOAACTR_xgotoproc;
} 
else
{ 
 /* line 2946: */
ITCACTR = EOAACTR_xgotom;
} 
TSCACTR_ans = ITCACTR;
} 
else
{ 
JTCACTR = (T==YKAACTR_voidmode);
if ( JTCACTR )
{ /* line 2947: */
JTCACTR = (F!=ILAACTR_collatmode);
}
if ( JTCACTR )
{ 
VSCACTR_f1 = F;
 /* line 2948: */
KTCACTR = Code;
if ( KTCACTR )
{ /* line 2949: */
KTCACTR = ((A68_BITS )((*(&(V->Props)))&CRAACTR_assmntbit)==MQAACTR_z);
}
 /* line 2950: */
if ( KTCACTR )
{ 
for ( ;; )
{ 
XSCACTR_i = A_CALLPROC(NL(XKCACTR_weakmode),(VSCACTR_f1),(VSCACTR_f1,(NL(XKCACTR_weakmode)).nonlocals));
 /* line 2951: */
 /* line 2952: */
LTCACTR = ((A68_BITS )((A68_BITS )(XSCACTR_i-VSCACTR_f1)&LQAACTR_decsmask)!=MQAACTR_z);
if ( !LTCACTR ) break;
A_CALLPROC(NL(OSCACTR_coerce),(V, VSCACTR_f1, XSCACTR_i, 2, A68_TRUE),(V, VSCACTR_f1, XSCACTR_i, 2, A68_TRUE,(NL(OSCACTR_coerce)).nonlocals));
 /* line 2953: */
 /* line 2954: */
VSCACTR_f1 = XSCACTR_i;
}
 /* line 2955: */
} 
 /* line 2956: */
 /* line 2957: */
 /* line 2958: */
if ( (VSCACTR_f1==YKAACTR_voidmode) )
{ 
 /* line 2959: */
MTCACTR = 0;
} 
else
{ 
 /* line 2960: */
MTCACTR = BOAACTR_xvoid;
} 
TSCACTR_ans = MTCACTR;
} 
else
{ 
 /* line 2961: */
if ( (F==VKAACTR_skipmode) )
{ 
 /* line 2962: */
TSCACTR_ans = OOAACTR_xskiptom;
} 
else
{ 
NTCACTR = (F==WKAACTR_nilmode);
if ( NTCACTR )
{ /* line 2963: */
NTCACTR = (T>KQAACTR_refmark);
}
if ( NTCACTR )
{ 
 /* line 2964: */
TSCACTR_ans = COAACTR_xniltom;
} 
else
{ 
OTCACTR = (F==UKAACTR_vacmode);
if ( OTCACTR )
{OTCACTR = (T<KQAACTR_refmark);
}
if ( OTCACTR )
{ /* line 2966: */
OTCACTR = ((XSCACTR_i = A_CALLPROC(NL(HMCACTR_strbd),(T),(T,(NL(HMCACTR_strbd)).nonlocals)))<0);
}
if ( OTCACTR )
{ 
ZSCACTR_p3 = ((-XSCACTR_i)-1);
 /* line 2967: */
 /* line 2968: */
TSCACTR_ans = TOAACTR_xvac;
} 
} 
} 
} 
} 
 /* line 2970: */
 /* line 2971: */
 /* line 2972: */
PTCACTR = (TSCACTR_ans>=0);
} 
DTCACTR = PTCACTR;
}
 /* line 2973: */
if ( DTCACTR )
{ 
/*SKIP*/;
} 
else
{ 
QTCACTR = (Str>=2);
if ( QTCACTR )
{ /* line 2974: */
QTCACTR = A_CALLPROC(NL(MKCACTR_depref),(V, F, T, A68_FALSE),(V, F, T, A68_FALSE,(NL(MKCACTR_depref)).nonlocals));
}
if ( QTCACTR )
{ 
if ( Code )
{ 
A_CALLPROC(NL(MKCACTR_depref),(V, F, T, A68_TRUE),(V, F, T, A68_TRUE,(NL(MKCACTR_depref)).nonlocals));
} 
 /* line 2975: */
 /* line 2976: */
TSCACTR_ans = 0;
} 
else
{ 
 /* line 2977: */
if ( (Str>=3) )
{ 
 /* line 2978: */
 /* line 2979: */
if ( (T>KQAACTR_refmark) )
{ 
 /* line 2980: */
RTCACTR = KQAACTR_refmark;
} 
else
{ 
RTCACTR = 0;
} 
WSCACTR_qref = RTCACTR;
 /* line 2981: */
USCACTR_t1 = (T-WSCACTR_qref);
 /* line 2982: */
 /* line 2983: */
 /* line 2984: */
if ( (USCACTR_t1<KQAACTR_refmark) )
{ 
 /* line 2985: */
STCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),USCACTR_t1))) ;
switch ( STCACTR.mode )
{ 
case 7: /* REF STRUCT(INT,INT,INT)  */
TTCACTR_vec = (STCACTR.data.mode7);
 /* line 2986: */
 /* line 2987: */
if ( ((*(&(TTCACTR_vec->Deflex)))>=0) )
{ 
 /* line 2988: */
if ( ((XSCACTR_i = A_CALLPROC(NL(XKCACTR_weakmode),(F),(F,(NL(XKCACTR_weakmode)).nonlocals)))>WSCACTR_qref) )
{ 
 /* line 2989: */
if ( (WSCACTR_qref==0) )
{ 
 /* line 2990: */
UTCACTR = A_CALLPROC(NL(XJCACTR_pmode),(F),(F,(NL(XJCACTR_pmode)).nonlocals));
} 
else
{ 
 /* line 2991: */
 /* line 2992: */
UTCACTR = (XSCACTR_i-KQAACTR_refmark);
} 
 /* line 2993: */
WTCACTR = VSCACTR_f1 = UTCACTR ;
VTCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),WTCACTR)));
switch ( VTCACTR.mode )
{ 
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
XTCACTR_ri = (VTCACTR.data.mode5);
 /* line 2994: */
 /* line 2996: */
YTCACTR = ((*(&(XTCACTR_ri->Imode)))==(*(&(TTCACTR_vec->Vecmode))));
if ( YTCACTR )
{ /* line 2997: */
 /* line 2998: */
 /* line 2999: */
 /* line 3000: */
YTCACTR = A_CALLPROC(NL(OSCACTR_coerce),(V, F, (VSCACTR_f1+WSCACTR_qref), 2, Code),(V, F, (VSCACTR_f1+WSCACTR_qref), 2, Code,(NL(OSCACTR_coerce)).nonlocals));
}
if ( YTCACTR )
{ 
 /* line 3001: */
 /* line 3002: */
 /* line 3003: */
TSCACTR_ans = JOAACTR_xisvec;
} 
break;
default: 
 /* line 3004: */
/*SKIP*/;
break;
} 
} 
 /* line 3005: */
ZTCACTR = (TSCACTR_ans==(-1));
if ( ZTCACTR )
{ZTCACTR = (Str>=9);
}
 /* line 3006: */
if ( ZTCACTR )
{ /* line 3007: */
 /* line 3008: */
 /* line 3009: */
ZTCACTR = A_CALLPROC(NL(OSCACTR_coerce),(V, F, ((*(&(TTCACTR_vec->Vecmode)))+WSCACTR_qref), 9, Code),(V, F, ((*(&(TTCACTR_vec->Vecmode)))+WSCACTR_qref), 9, Code,(NL(OSCACTR_coerce)).nonlocals));
}
if ( ZTCACTR )
{ 
 /* line 3010: */
TSCACTR_ans = POAACTR_xvec;
} 
 /* line 3011: */
AUCACTR = (TSCACTR_ans==(-1));
if ( AUCACTR )
{ /* line 3012: */
AUCACTR = (Str>=8);
}
if ( AUCACTR )
{ /* line 3013: */
AUCACTR = ((*(&(TTCACTR_vec->Vecmode)))==ALAACTR_bool);
}
if ( AUCACTR )
{ /* line 3014: */
AUCACTR = ((VSCACTR_f1 = A_CALLPROC(NL(XJCACTR_pmode),(F),(F,(NL(XJCACTR_pmode)).nonlocals)))>=10);
}
if ( AUCACTR )
{AUCACTR = (VSCACTR_f1<=13);
}
if ( AUCACTR )
{ /* line 3015: */
AUCACTR = (WSCACTR_qref==0);
}
if ( AUCACTR )
{ 
A_CALLPROC(NL(OSCACTR_coerce),(V, F, VSCACTR_f1, 2, Code),(V, F, VSCACTR_f1, 2, Code,(NL(OSCACTR_coerce)).nonlocals));
 /* line 3016: */
 /* line 3017: */
 /* line 3018: */
 /* line 3019: */
TSCACTR_ans = SOAACTR_xwbvb;
} 
} 
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
BUCACTR_a = (STCACTR.data.mode8);
 /* line 3020: */
 /* line 3021: */
if ( ((*(&(BUCACTR_a->Deflex)))>=0) )
{ 
CUCACTR = (Str>=4);
if ( CUCACTR )
{ /* line 3022: */
CUCACTR = ((XSCACTR_i = A_CALLPROC(NL(XKCACTR_weakmode),(F),(F,(NL(XKCACTR_weakmode)).nonlocals)))>WSCACTR_qref);
}
if ( CUCACTR )
{ 
 /* line 3023: */
if ( (WSCACTR_qref==0) )
{ 
 /* line 3024: */
DUCACTR = A_CALLPROC(NL(XJCACTR_pmode),(F),(F,(NL(XJCACTR_pmode)).nonlocals));
} 
else
{ 
 /* line 3025: */
DUCACTR = (XSCACTR_i-KQAACTR_refmark);
} 
XSCACTR_i = VSCACTR_f1 = DUCACTR;
 /* line 3026: */
YSCACTR_j = USCACTR_t1;
 /* line 3027: */
 /* line 3028: */
EUCACTR = (*(&(BUCACTR_a->Nods)));
for ( FUCACTR = 1;
FUCACTR <= EUCACTR;
FUCACTR += 1 )
{ 
 /* line 3029: */
if ( !((XSCACTR_i!=0)) ) break;
 /* line 3030: */
if ( (XSCACTR_i>KQAACTR_refmark) )
{ 
 /* line 3031: */
XSCACTR_i = 0;
} 
else
{ 
 /* line 3032: */
GUCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),XSCACTR_i))) ;
switch ( GUCACTR.mode )
{ 
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
HUCACTR_is = (GUCACTR.data.mode5);
 /* line 3033: */
 /* line 3034: */
XSCACTR_i = (*(&(HUCACTR_is->Imode)));
break;
default: 
 /* line 3035: */
 /* line 3036: */
XSCACTR_i = 0;
break;
} 
} 
 /* line 3038: */
 /* line 3039: */
IUCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),YSCACTR_j))) ;
switch ( IUCACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
JUCACTR_a1 = (IUCACTR.data.mode8);
 /* line 3040: */
 /* line 3041: */
 /* line 3042: */
YSCACTR_j = (*(&(JUCACTR_a1->Mode)));
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 3044: */
 /* line 3045: */
KUCACTR = (XSCACTR_i==YSCACTR_j);
if ( KUCACTR )
{ /* line 3046: */
KUCACTR = A_CALLPROC(NL(OSCACTR_coerce),(V, F, (VSCACTR_f1+WSCACTR_qref), 2, Code),(V, F, (VSCACTR_f1+WSCACTR_qref), 2, Code,(NL(OSCACTR_coerce)).nonlocals));
}
if ( KUCACTR )
{ 
ZSCACTR_p3 = (*(&(BUCACTR_a->Nods)));
 /* line 3047: */
 /* line 3048: */
TSCACTR_ans = NOAACTR_xisarr;
} 
else
{ 
 /* line 3049: */
if ( ((*(&(BUCACTR_a->Nods)))==1) )
{ 
 /* line 3050: */
LUCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),VSCACTR_f1))) ;
switch ( LUCACTR.mode )
{ 
case 7: /* REF STRUCT(INT,INT,INT)  */
MUCACTR_rv = (LUCACTR.data.mode7);
 /* line 3051: */
 /* line 3052: */
 /* line 3053: */
NUCACTR = ((*(&(MUCACTR_rv->Vecmode)))==(*(&(BUCACTR_a->Mode))));
if ( NUCACTR )
{ /* line 3054: */
 /* line 3055: */
 /* line 3056: */
 /* line 3057: */
NUCACTR = A_CALLPROC(NL(OSCACTR_coerce),(V, F, (VSCACTR_f1+WSCACTR_qref), 2, Code),(V, F, (VSCACTR_f1+WSCACTR_qref), 2, Code,(NL(OSCACTR_coerce)).nonlocals));
}
if ( NUCACTR )
{ 
 /* line 3058: */
 /* line 3059: */
 /* line 3060: */
TSCACTR_ans = IOAACTR_xvecarr;
} 
break;
default: 
 /* line 3061: */
 /* line 3062: */
/*SKIP*/;
break;
} 
} 
} 
} 
 /* line 3064: */
OUCACTR = (TSCACTR_ans==(-1));
if ( OUCACTR )
{ /* line 3065: */
OUCACTR = (Str>=9);
}
if ( OUCACTR )
{ 
 /* line 3066: */
 /* line 3067: */
 /* line 3068: */
 /* line 3069: */
PUCACTR = A_CALLPROC(NL(OSCACTR_coerce),(V, F, ((*(&(BUCACTR_a->Mode)))+WSCACTR_qref), 9, Code),(V, F, ((*(&(BUCACTR_a->Mode)))+WSCACTR_qref), 9, Code,(NL(OSCACTR_coerce)).nonlocals));
if ( ! PUCACTR )
{ /* line 3070: */
 /* line 3071: */
 /* line 3072: */
 /* line 3073: */
PUCACTR = A_CALLPROC(NL(OSCACTR_coerce),(V, F, (A_CALLPROC(NL(YLCACTR_makeflex),((*(&(BUCACTR_a->Mode)))),((*(&(BUCACTR_a->Mode))),(NL(YLCACTR_makeflex)).nonlocals))+WSCACTR_qref), 9, Code),(V, F, (A_CALLPROC(NL(YLCACTR_makeflex),((*(&(BUCACTR_a->Mode)))),((*(&(BUCACTR_a->Mode))),(NL(YLCACTR_makeflex)).nonlocals))+WSCACTR_qref), 9, Code,(NL(OSCACTR_coerce)).nonlocals));
}
if ( PUCACTR )
{ 
 /* line 3074: */
 /* line 3075: */
if ( ((*(&(BUCACTR_a->Nods)))>1) )
{ 
 /* line 3076: */
QUCACTR = HOAACTR_xarrarr;
} 
else
{ 
 /* line 3077: */
QUCACTR = QOAACTR_xarr;
} 
 /* line 3078: */
TSCACTR_ans = QUCACTR;
} 
} 
 /* line 3079: */
RUCACTR = (TSCACTR_ans==(-1));
if ( RUCACTR )
{ /* line 3080: */
RUCACTR = ((*(&(BUCACTR_a->Mode)))==ALAACTR_bool);
}
if ( RUCACTR )
{RUCACTR = ((*(&(BUCACTR_a->Nods)))==1);
}
if ( RUCACTR )
{ /* line 3081: */
RUCACTR = (Str>=8);
}
if ( RUCACTR )
{ /* line 3082: */
 /* line 3083: */
 /* line 3084: */
 /* line 3085: */
RUCACTR = A_CALLPROC(NL(OSCACTR_coerce),(V, F, (A_CALLPROC(NL(ZVBACTR_insertvec),((*(&(BUCACTR_a->Mode))), 1),((*(&(BUCACTR_a->Mode))), 1,(NL(ZVBACTR_insertvec)).nonlocals))+WSCACTR_qref), 8, Code),(V, F, (A_CALLPROC(NL(ZVBACTR_insertvec),((*(&(BUCACTR_a->Mode))), 1),((*(&(BUCACTR_a->Mode))), 1,(NL(ZVBACTR_insertvec)).nonlocals))+WSCACTR_qref), 8, Code,(NL(OSCACTR_coerce)).nonlocals));
}
if ( RUCACTR )
{ 
 /* line 3086: */
 /* line 3087: */
 /* line 3088: */
TSCACTR_ans = IOAACTR_xvecarr;
} 
} 
break;
case 9: /* REF STRUCT(INT,REF MODE63)  */
SUCACTR_s = (STCACTR.data.mode9);
 /* line 3089: */
TUCACTR = (Str>=5);
if ( TUCACTR )
{TUCACTR = (Str!=6);
}
if ( TUCACTR )
{ /* line 3090: */
TUCACTR = (WSCACTR_qref==0);
}
if ( TUCACTR )
{ 
VSCACTR_f1 = A_CALLPROC(NL(XKCACTR_weakmode),(F),(F,(NL(XKCACTR_weakmode)).nonlocals));
 /* line 3091: */
VUCACTR_aa:
 /* line 3092: */
 /* line 3093: */
WUCACTR = A_CALLPROC(NL(MKCACTR_depref),(V, F, VSCACTR_f1, A68_FALSE),(V, F, VSCACTR_f1, A68_FALSE,(NL(MKCACTR_depref)).nonlocals));
if ( WUCACTR )
{ /* line 3094: */
WUCACTR = ((YSCACTR_j = A_CALLPROC(NL(YMCACTR_strproc),(0, T, VSCACTR_f1, A68_FALSE),(0, T, VSCACTR_f1, A68_FALSE,(NL(YMCACTR_strproc)).nonlocals)))!=0);
}
if ( WUCACTR )
{ 
TSCACTR_ans = RMAACTR_xstraight;
 /* line 3095: */
 /* line 3096: */
if ( Code )
{ 
A_CALLPROC(NL(MKCACTR_depref),(V, F, VSCACTR_f1, A68_TRUE),(V, F, VSCACTR_f1, A68_TRUE,(NL(MKCACTR_depref)).nonlocals));
 /* line 3097: */
XSCACTR_i = (A_CALLPROC(NL(YLCACTR_makeflex),(A_CALLPROC(NL(XJCACTR_pmode),(F),(F,(NL(XJCACTR_pmode)).nonlocals))),(A_CALLPROC(NL(XJCACTR_pmode),(F),(F,(NL(XJCACTR_pmode)).nonlocals)),(NL(YLCACTR_makeflex)).nonlocals))+KQAACTR_refmark);
 /* line 3098: */
ZSCACTR_p3 = A_CALLPROC(NL(HMCACTR_strbd),((XSCACTR_i-KQAACTR_refmark)),((XSCACTR_i-KQAACTR_refmark),(NL(HMCACTR_strbd)).nonlocals));
 /* line 3099: */
 /* line 3100: */
if ( (XSCACTR_i!=VSCACTR_f1) )
{ 
 /* line 3101: */
XUCACTR.Fn = SMAACTR_xprestraight;
 /* line 3102: */
XUCACTR.M = XSCACTR_i;
XUCACTR.Param = 0;
 /* line 3103: */
A_CALLPROC(NL(Output),(A_UNITE(YUCACTR,mode14,14,XUCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(YUCACTR,mode14,14,XUCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 3104: */
 /* line 3105: */
if ( (YSCACTR_j==1) )
{ 
 /* line 3106: */
YSCACTR_j = A_CALLPROC(NL(YMCACTR_strproc),(XSCACTR_i, T, VSCACTR_f1, A68_TRUE),(XSCACTR_i, T, VSCACTR_f1, A68_TRUE,(NL(YMCACTR_strproc)).nonlocals));
} 
 /* line 3107: */
 /* line 3108: */
 /* line 3109: */
A_CALLPROC(NL(Output),(A_UNITE(ZUCACTR,mode3,3,YSCACTR_j), (*NL(FZAACTR_outlevel))),(A_UNITE(ZUCACTR,mode3,3,YSCACTR_j), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
} 
else
{ 
 /* line 3110: */
if ( (VSCACTR_f1>KQAACTR_refmark) )
{ 
VSCACTR_f1 = A_CALLPROC(NL(JGCACTR_deflex),((VSCACTR_f1-KQAACTR_refmark)),((VSCACTR_f1-KQAACTR_refmark),(NL(JGCACTR_deflex)).nonlocals));
 /* line 3111: */
 /* line 3112: */
 /* line 3113: */
 /* line 3114: */
goto VUCACTR_aa;
} 
} 
} 
break;
case 2: /* REF STRUCT(INT,REF MODE54)  */
AVCACTR_u = (STCACTR.data.mode2);
 /* line 3115: */
{ 
DVCACTR = (Str>=6);
if ( DVCACTR )
{ /* line 3116: */
DVCACTR = (WSCACTR_qref==0);
}
if ( DVCACTR )
{ 
 /* line 3117: */
GVCACTR = VSCACTR_f1 = A_CALLPROC(NL(XJCACTR_pmode),(F),(F,(NL(XJCACTR_pmode)).nonlocals)) ;
HVCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),GVCACTR))) ;
switch ( HVCACTR.mode )
{ 
case 2: /* REF STRUCT(INT,REF MODE54)  */
IVCACTR_u1 = (HVCACTR.data.mode2);
 /* line 3118: */
{ 
ATCACTR_ml = (*(&(IVCACTR_u1->Modelist)));
 /* line 3120: */
for ( ;; )
{ 
 /* line 3121: */
if ( !((ATCACTR_ml!=OQAACTR_nilml)) ) break;
 /* line 3122: */
 /* line 3123: */
 /* line 3124: */
if ( (A_CALLPROC(NL(MLCACTR_unite),(V, (*(&(ATCACTR_ml->Mode))), T, 1, A68_FALSE),(V, (*(&(ATCACTR_ml->Mode))), T, 1, A68_FALSE,(NL(MLCACTR_unite)).nonlocals))==0) )
{ 
 /* line 3125: */
goto FVCACTR_s;
} 
else
{ 
 /* line 3126: */
 /* line 3127: */
ATCACTR_ml = (*(&(ATCACTR_ml->Rest)));
} 
}
 /* line 3128: */
 /* line 3129: */
if ( A_CALLPROC(NL(OSCACTR_coerce),(V, F, VSCACTR_f1, 2, Code),(V, F, VSCACTR_f1, 2, Code,(NL(OSCACTR_coerce)).nonlocals)) )
{ 
ZSCACTR_p3 = (-1);
 /* line 3130: */
 /* line 3131: */
 /* line 3132: */
 /* line 3133: */
 /* line 3134: */
TSCACTR_ans = MOAACTR_xuniteu;
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3135: */
FVCACTR_s:
 /* line 3136: */
if ( (Str==6) )
{ 
JVCACTR = 4;
} 
else
{ 
 /* line 3137: */
JVCACTR = 5;
} 
for ( KVCACTR_i = 2;
KVCACTR_i <= JVCACTR;
KVCACTR_i += 1 )
{ 
 /* line 3138: */
if ( ((ZSCACTR_p3 = A_CALLPROC(NL(MLCACTR_unite),(V, F, T, KVCACTR_i, Code),(V, F, T, KVCACTR_i, Code,(NL(MLCACTR_unite)).nonlocals)))!=0) )
{ 
 /* line 3139: */
LVCACTR = (TSCACTR_ans>0);
if ( LVCACTR )
{LVCACTR = Code;
}
if ( LVCACTR )
{ 
 /* line 3141: */
A_CALLPROC(NL(PZBACTR_faultp),(109, F, T, (A68_31 *)A68_NIL),(109, F, T, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
} 
else
{ 
 /* line 3142: */
 /* line 3143: */
TSCACTR_ans = LOAACTR_xunite;
} 
} 
 /* line 3144: */
 /* line 3145: */
MVCACTR = (TSCACTR_ans<0);
if ( !MVCACTR ) break;
/*SKIP*/;
}
 /* line 3146: */
} 
 /* line 3147: */
CVCACTR_end:
 /* line 3149: */
 /* line 3150: */
/*SKIP*/;
} 
break;
case 1: /* INT */
NVCACTR_p = (STCACTR.data.mode1);
 /* line 3151: */
OVCACTR = (Str>=8);
if ( OVCACTR )
{OVCACTR = (WSCACTR_qref==0);
}
if ( OVCACTR )
{ /* line 3152: */
OVCACTR = (NVCACTR_p==FLAACTR_real);
}
if ( OVCACTR )
{ /* line 3153: */
OVCACTR = A_CALLPROC(NL(OSCACTR_coerce),(V, F, (USCACTR_t1-4), 2, Code),(V, F, (USCACTR_t1-4), 2, Code,(NL(OSCACTR_coerce)).nonlocals));
}
if ( OVCACTR )
{ 
 /* line 3154: */
 /* line 3155: */
TSCACTR_ans = GOAACTR_xwir;
} 
break;
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
PVCACTR_s = (STCACTR.data.mode4);
 /* line 3156: */
QVCACTR = (Str>=8);
if ( QVCACTR )
{QVCACTR = (WSCACTR_qref==0);
}
if ( QVCACTR )
{ /* line 3157: */
QVCACTR = (USCACTR_t1<=25);
}
if ( QVCACTR )
{ /* line 3158: */
QVCACTR = (USCACTR_t1>=22);
}
if ( QVCACTR )
{ /* line 3159: */
QVCACTR = A_CALLPROC(NL(OSCACTR_coerce),(V, F, (USCACTR_t1-4), 8, Code),(V, F, (USCACTR_t1-4), 8, Code,(NL(OSCACTR_coerce)).nonlocals));
}
if ( QVCACTR )
{ 
 /* line 3160: */
 /* line 3161: */
TSCACTR_ans = FOAACTR_xwrc;
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
RVCACTR_ri = (STCACTR.data.mode5);
 /* line 3162: */
SVCACTR = ((*(&(RVCACTR_ri->Length)))==1);
if ( SVCACTR )
{ /* line 3163: */
SVCACTR = (Str>=9);
}
if ( SVCACTR )
{ /* line 3164: */
SVCACTR = A_CALLPROC(NL(OSCACTR_coerce),(V, F, ((*(&(RVCACTR_ri->Imode)))+WSCACTR_qref), 8, Code),(V, F, ((*(&(RVCACTR_ri->Imode)))+WSCACTR_qref), 8, Code,(NL(OSCACTR_coerce)).nonlocals));
}
if ( SVCACTR )
{ 
 /* line 3165: */
 /* line 3166: */
 /* line 3167: */
TSCACTR_ans = KOAACTR_xis;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3169: */
TVCACTR = (TSCACTR_ans<0);
if ( TVCACTR )
{ /* line 3170: */
TVCACTR = (A_CALLPROC(NL(XKCACTR_weakmode),(F),(F,(NL(XKCACTR_weakmode)).nonlocals))>WSCACTR_qref);
}
if ( TVCACTR )
{ 
VSCACTR_f1 = A_CALLPROC(NL(XJCACTR_pmode),(F),(F,(NL(XJCACTR_pmode)).nonlocals));
 /* line 3171: */
WVCACTR = (Str>=3);
if ( WVCACTR )
{ /* line 3172: */
WVCACTR = (USCACTR_t1==JLAACTR_xtype);
}
if ( WVCACTR )
{ 
 /* line 3173: */
YSCACTR_j = VSCACTR_f1;
} 
else
{ 
XVCACTR = (Str==10);
if ( XVCACTR )
{ /* line 3174: */
XVCACTR = (VSCACTR_f1==KLAACTR_ytype);
}
if ( XVCACTR )
{ 
 /* line 3175: */
YSCACTR_j = USCACTR_t1;
} 
else
{ 
 /* line 3176: */
goto SSCACTR_e;
} 
} 
 /* line 3177: */
VVCACTR_l:
 /* line 3178: */
YVCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),YSCACTR_j))) ;
switch ( YVCACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
ZVCACTR_a = (YVCACTR.data.mode8);
 /* line 3179: */
 /* line 3180: */
if ( ((*(&(ZVCACTR_a->Nods)))>1) )
{ 
YSCACTR_j = (*(&(ZVCACTR_a->Mode)));
 /* line 3181: */
 /* line 3182: */
 /* line 3183: */
 /* line 3184: */
goto VVCACTR_l;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3185: */
XSCACTR_i = A_CALLPROC(NL(VECACTR_marker),(YSCACTR_j),(YSCACTR_j,(NL(VECACTR_marker)).nonlocals));
 /* line 3186: */
AWCACTR = (XSCACTR_i==1);
if ( ! AWCACTR )
{ /* line 3187: */
AWCACTR = (XSCACTR_i==2);
}
if ( AWCACTR )
{ 
A_CALLPROC(NL(OSCACTR_coerce),(V, F, A_CALLPROC(NL(XKCACTR_weakmode),(F),(F,(NL(XKCACTR_weakmode)).nonlocals)), 2, Code),(V, F, A_CALLPROC(NL(XKCACTR_weakmode),(F),(F,(NL(XKCACTR_weakmode)).nonlocals)), 2, Code,(NL(OSCACTR_coerce)).nonlocals));
 /* line 3188: */
 /* line 3189: */
 /* line 3190: */
if ( (USCACTR_t1==JLAACTR_xtype) )
{ 
 /* line 3191: */
BWCACTR = VOAACTR_xmtoxtype;
} 
else
{ 
 /* line 3192: */
BWCACTR = UOAACTR_xytypetom;
} 
 /* line 3193: */
 /* line 3194: */
 /* line 3195: */
TSCACTR_ans = BWCACTR;
} 
} 
} 
} 
} 
} 
} 
 /* line 3197: */
SSCACTR_e:
 /* line 3198: */
if ( Code )
{ 
 /* line 3199: */
if ( (TSCACTR_ans<0) )
{ 
 /* line 3200: */
if ( (Str==10) )
{ 
 /* line 3202: */
 /* line 3203: */
A_CALLPROC(NL(PZBACTR_faultp),(110, F, T, (A68_31 *)A68_NIL),(110, F, T, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
} 
} 
else
{ 
 /* line 3204: */
if ( (TSCACTR_ans>0) )
{ 
CWCACTR.Fn = TSCACTR_ans;
CWCACTR.M = T;
CWCACTR.Param = ZSCACTR_p3;
 /* line 3205: */
A_CALLPROC(NL(Output),(A_UNITE(DWCACTR,mode14,14,CWCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(DWCACTR,mode14,14,CWCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 3206: */
 /* line 3207: */
EWCACTR = A_CALLPROC(NL(VECACTR_marker),(T),(T,(NL(VECACTR_marker)).nonlocals)) ;
if ( (A_ABS(EWCACTR)>=2) )
{ 
 /* line 3208: */
 /* line 3209: */
FWCACTR = (*(&(V->Props))) ;
if ( A_LB_GE(FWCACTR,VLAACTR_vardecbit) )
{ 
GWCACTR = BMAACTR_dyvardecbit;
} 
else
{ 
 /* line 3210: */
 /* line 3211: */
HWCACTR = (*(&(V->Props))) ;
if ( A_LB_GE(HWCACTR,ULAACTR_decbit) )
{ 
 /* line 3212: */
GWCACTR = CMAACTR_dydecbit;
} 
else
{ 
 /* line 3213: */
GWCACTR = MQAACTR_z;
} 
} 
 /* line 3214: */
IWCACTR = ((BTCACTR_b = GWCACTR)!=MQAACTR_z);
if ( IWCACTR )
{ 
 /* line 3215: */
 /* line 3216: */
JWCACTR = (&((*NL(QYAACTR_globcurrent))->Dybits)) ;
(*JWCACTR) = (A68_BITS )((*(&((*NL(QYAACTR_globcurrent))->Dybits)))|BTCACTR_b);
} 
 /* line 3217: */
 /* line 3218: */
KWCACTR = (&(V->Props)) ;
(*KWCACTR) = (A68_BITS )((*(&(V->Props)))|ZLAACTR_dontpullbit);
} 
 /* line 3219: */
 /* line 3220: */
 /* line 3221: */
LWCACTR = (&(V->Mode)) ;
(*LWCACTR) = T;
} 
} 
 /* line 3222: */
 /* line 3223: */
MWCACTR = (TSCACTR_ans>=0);
} 
A_PROC_EXIT(coerce);
return( MWCACTR );
} 
#undef NL

A_STATIC A68_INT  RWCACTR_hcfoftwo(A68_INT  A, A68_INT  B, A68_BOOL  First, void *NonLocals)
#define NL(x) (((SWCACTR_hcfoftwo *)NonLocals)->x)
{ 
A68_INT  VWCACTR_i;
A68_BOOL  WWCACTR;  /* optbool result */
A68_66  XWCACTR;  /* united object - for case conformity */
A68_55 * YWCACTR_p;
A68_INT  ZWCACTR;  /* clause result */
A68_INT  AXCACTR;  /* clause result */
A_PROC_ENTRY(hcfoftwo);
 /* line 3228: */
{ 
VWCACTR_i = B;
 /* line 3229: */
UWCACTR_aa:
WWCACTR = (B!=ZKAACTR_faultmode);
if ( WWCACTR )
{WWCACTR = (A!=VWCACTR_i);
}
if ( WWCACTR )
{ /* line 3230: */
WWCACTR = (A!=ILAACTR_collatmode);
}
if ( WWCACTR )
{ /* line 3231: */
WWCACTR = !A_CALLPROC(NL(OSCACTR_coerce),((A68_125 *)A68_NIL, A, VWCACTR_i, ISCACTR_all, A68_FALSE),((A68_125 *)A68_NIL, A, VWCACTR_i, ISCACTR_all, A68_FALSE,(NL(OSCACTR_coerce)).nonlocals));
}
if ( WWCACTR )
{ 
 /* line 3232: */
if ( (VWCACTR_i>KQAACTR_refmark) )
{ 
VWCACTR_i = A_CALLPROC(NL(JGCACTR_deflex),((VWCACTR_i-KQAACTR_refmark)),((VWCACTR_i-KQAACTR_refmark),(NL(JGCACTR_deflex)).nonlocals));
 /* line 3233: */
 /* line 3234: */
goto UWCACTR_aa;
} 
else
{ 
 /* line 3235: */
XWCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),VWCACTR_i))) ;
switch ( XWCACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
YWCACTR_p = (XWCACTR.data.mode6);
 /* line 3236: */
{ 
VWCACTR_i = (*(&(YWCACTR_p->Deproc)));
 /* line 3237: */
 /* line 3238: */
 /* line 3239: */
goto UWCACTR_aa;
} 
break;
default: 
 /* line 3240: */
if ( First )
{ 
 /* line 3241: */
 /* line 3242: */
ZWCACTR = A_CALLPROC(NL(QWCACTR_hcfoftwo),(B, A, A68_FALSE),(B, A, A68_FALSE,(NL(QWCACTR_hcfoftwo)).nonlocals));
} 
else
{ 
 /* line 3243: */
ZWCACTR = 0;
} 
 /* line 3244: */
 /* line 3245: */
VWCACTR_i = ZWCACTR;
break;
} 
} 
} 
else
{ 
 /* line 3246: */
if ( (A==ILAACTR_collatmode) )
{ 
 /* line 3247: */
VWCACTR_i = A_CALLPROC(NL(XJCACTR_pmode),(VWCACTR_i),(VWCACTR_i,(NL(XJCACTR_pmode)).nonlocals));
} 
} 
 /* line 3248: */
 /* line 3249: */
AXCACTR = VWCACTR_i;
} 
A_PROC_EXIT(hcfoftwo);
return( AXCACTR );
} 
#undef NL

A_STATIC A68_INT  DXCACTR_hcf(A68_125 * V, void *NonLocals)
#define NL(x) (((EXCACTR_hcf *)NonLocals)->x)
{ 
A68_INT  FXCACTR;  /* clause result */
A68_124 * GXCACTR_vl1;
A68_BOOL  HXCACTR;  /* clause result */
A68_INT  IXCACTR_hmode;
A68_INT  JXCACTR_i;
A_PROC_ENTRY(hcf);
 /* line 3252: */
 /* line 3253: */
 /* line 3254: */
if ( ((*(&(V->Mode)))>=0) )
{ 
FXCACTR = (*(&(V->Mode)));
} 
else
{ 
{ 
GXCACTR_vl1 = (*(&(V->Vlist)));
 /* line 3255: */
 /* line 3256: */
HXCACTR = ((*(&(GXCACTR_vl1->Type)))!=NNAACTR_xcoll);
if ( HXCACTR )
{ 
 /* line 3257: */
if ( ((*(&(GXCACTR_vl1->Type)))<ZMAACTR_xbegin) )
{ 
 /* line 3258: */
GXCACTR_vl1 = (*(&(GXCACTR_vl1->Rest)));
} 
 /* line 3259: */
IXCACTR_hmode = A_CALLPROC(NL(CXCACTR_hcf),((&(GXCACTR_vl1->V))),((&(GXCACTR_vl1->V)),(NL(CXCACTR_hcf)).nonlocals));
 /* line 3260: */
for ( ;; )
{ 
 /* line 3261: */
if ( !((GXCACTR_vl1!=UQAACTR_nilvl)) ) break;
 /* line 3262: */
if ( ((JXCACTR_i = A_CALLPROC(NL(QWCACTR_hcfoftwo),(A_CALLPROC(NL(CXCACTR_hcf),((&(GXCACTR_vl1->V))),((&(GXCACTR_vl1->V)),(NL(CXCACTR_hcf)).nonlocals)), IXCACTR_hmode, A68_TRUE),(A_CALLPROC(NL(CXCACTR_hcf),((&(GXCACTR_vl1->V))),((&(GXCACTR_vl1->V)),(NL(CXCACTR_hcf)).nonlocals)), IXCACTR_hmode, A68_TRUE,(NL(QWCACTR_hcfoftwo)).nonlocals)))!=0) )
{ 
 /* line 3263: */
IXCACTR_hmode = JXCACTR_i;
} 
 /* line 3264: */
 /* line 3265: */
GXCACTR_vl1 = (*(&(GXCACTR_vl1->Rest)));
}
 /* line 3266: */
 /* line 3267: */
 /* line 3268: */
FXCACTR = IXCACTR_hmode;
} 
else
{ 
FXCACTR = ILAACTR_collatmode;
} 
} 
} 
A_PROC_EXIT(hcf);
return( FXCACTR );
} 
#undef NL

A_STATIC A68_INT  NXCACTR_firmto(A68_125 * V, A68_INT  T, void *NonLocals)
#define NL(x) (((OXCACTR_firmto *)NonLocals)->x)
{ 
A68_INT  RXCACTR_ans;
A68_INT  SXCACTR_i;
A68_124 * TXCACTR_vl;
A68_INT  UXCACTR_i;
A68_INT  VXCACTR;  /* clause result */
A68_BOOL  WXCACTR;  /* clause result */
A68_INT  XXCACTR;  /* clause result */
A_PROC_ENTRY(firmto);
 /* line 3272: */
{ 
RXCACTR_ans = 0;
 /* line 3273: */
 /* line 3274: */
 /* line 3275: */
if ( ((*(&(V->Mode)))>0) )
{ 
 /* line 3276: */
for ( UXCACTR_i = 1;
UXCACTR_i <= 4;
UXCACTR_i += 1 )
{ 
 /* line 3277: */
switch ( UXCACTR_i )
{ 
case 1: 
VXCACTR = ISCACTR_all;
break;
case 2: 
VXCACTR = 6;
break;
case 3: 
 /* line 3278: */
VXCACTR = 3;
break;
case 4: 
VXCACTR = 2;
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 3279: */
WXCACTR = A_CALLPROC(NL(OSCACTR_coerce),((A68_125 *)A68_NIL, (*(&(V->Mode))), T, VXCACTR, A68_FALSE),((A68_125 *)A68_NIL, (*(&(V->Mode))), T, VXCACTR, A68_FALSE,(NL(OSCACTR_coerce)).nonlocals));
if ( WXCACTR )
{ 
 /* line 3280: */
RXCACTR_ans = UXCACTR_i;
} 
else
{ 
 /* line 3281: */
 /* line 3282: */
goto QXCACTR_out;
} 
}
 /* line 3283: */
} 
else
{ 
 /* line 3284: */
if ( ((*(&((TXCACTR_vl = (*(&(V->Vlist))))->Type)))==NNAACTR_xcoll) )
{ 
 /* line 3285: */
RXCACTR_ans = 1;
} 
else
{ 
 /* line 3286: */
if ( ((*(&(TXCACTR_vl->Type)))<ZMAACTR_xbegin) )
{ 
 /* line 3287: */
TXCACTR_vl = (*(&(TXCACTR_vl->Rest)));
} 
 /* line 3288: */
for ( ;; )
{ 
 /* line 3289: */
if ( !((TXCACTR_vl!=UQAACTR_nilvl)) ) break;
 /* line 3290: */
if ( ((SXCACTR_i = A_CALLPROC(NL(MXCACTR_firmto),((&(TXCACTR_vl->V)), T),((&(TXCACTR_vl->V)), T,(NL(MXCACTR_firmto)).nonlocals)))==0) )
{ 
RXCACTR_ans = 0;
 /* line 3291: */
 /* line 3292: */
goto QXCACTR_out;
} 
else
{ 
if ( (SXCACTR_i>RXCACTR_ans) )
{ 
RXCACTR_ans = SXCACTR_i;
} 
 /* line 3293: */
 /* line 3294: */
 /* line 3295: */
TXCACTR_vl = (*(&(TXCACTR_vl->Rest)));
} 
}
 /* line 3296: */
} 
} 
 /* line 3297: */
QXCACTR_out:
 /* line 3298: */
XXCACTR = RXCACTR_ans;
} 
A_PROC_EXIT(firmto);
return( XXCACTR );
} 
#undef NL

A_STATIC A68_INT  CYCACTR_ismode(A68_125 * V, A68_INT  Mode, A68_INT  Nods, void *NonLocals)
#define NL(x) (((DYCACTR_ismode *)NonLocals)->x)
{ 
A68_124 * EYCACTR_vl;
A68_INT  FYCACTR_n;
A68_INT  GYCACTR_m;
A68_INT  HYCACTR;  /* clause result */
A68_INT  IYCACTR;  /* to part of loop */
A68_INT  JYCACTR;  /* loop control */
A68_BOOL  KYCACTR;  /* optbool result */
A68_66  LYCACTR;  /* united object - for case conformity */
A68_60 * MYCACTR_ri;
A68_INT  NYCACTR;  /* clause result */
A_PROC_ENTRY(ismode);
 /* line 3301: */
{ 
EYCACTR_vl = (*(&(V->Vlist)));
 /* line 3302: */
FYCACTR_n = 0;
 /* line 3303: */
 /* line 3304: */
 /* line 3305: */
if ( (Nods==0) )
{ 
HYCACTR = Mode;
} 
else
{ 
 /* line 3306: */
if ( (EYCACTR_vl==UQAACTR_nilvl) )
{ 
GYCACTR_m = FYCACTR_n = A_CALLPROC(NL(XJCACTR_pmode),((*(&(V->Mode)))),((*(&(V->Mode))),(NL(XJCACTR_pmode)).nonlocals));
 /* line 3307: */
IYCACTR = Nods;
for ( JYCACTR = 1;
JYCACTR <= IYCACTR;
JYCACTR += 1 )
{ 
KYCACTR = (FYCACTR_n!=0);
if ( KYCACTR )
{ /* line 3308: */
KYCACTR = (FYCACTR_n<KQAACTR_refmark);
}
if ( !(KYCACTR) ) break;
 /* line 3309: */
LYCACTR = (*(&A_VINDEX(NL(KUAACTR_modes),FYCACTR_n))) ;
switch ( LYCACTR.mode )
{ 
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
MYCACTR_ri = (LYCACTR.data.mode5);
 /* line 3311: */
 /* line 3312: */
NYCACTR = (*(&(MYCACTR_ri->Imode)));
break;
default: 
 /* line 3313: */
NYCACTR = 0;
break;
} 
FYCACTR_n = NYCACTR;
}
 /* line 3315: */
 /* line 3316: */
 /* line 3317: */
if ( (FYCACTR_n==Mode) )
{ 
HYCACTR = GYCACTR_m;
} 
else
{ 
 /* line 3318: */
 /* line 3319: */
HYCACTR = A_CALLPROC(NL(TWBACTR_insertis),(A_CALLPROC(NL(BYCACTR_ismode),(V, Mode, (Nods-1)),(V, Mode, (Nods-1),(NL(BYCACTR_ismode)).nonlocals)), 1),(A_CALLPROC(NL(BYCACTR_ismode),(V, Mode, (Nods-1)),(V, Mode, (Nods-1),(NL(BYCACTR_ismode)).nonlocals)), 1,(NL(TWBACTR_insertis)).nonlocals));
} 
} 
else
{ 
 /* line 3320: */
if ( ((*(&(EYCACTR_vl->Type)))==NNAACTR_xcoll) )
{ 
for ( ;; )
{ 
 /* line 3321: */
if ( !((EYCACTR_vl!=UQAACTR_nilvl)) ) break;
FYCACTR_n+=1;
 /* line 3322: */
 /* line 3323: */
EYCACTR_vl = (*(&(EYCACTR_vl->Rest)));
}
 /* line 3324: */
 /* line 3325: */
HYCACTR = A_CALLPROC(NL(TWBACTR_insertis),(A_CALLPROC(NL(BYCACTR_ismode),((&((*(&(V->Vlist)))->V)), Mode, (Nods-1)),((&((*(&(V->Vlist)))->V)), Mode, (Nods-1),(NL(BYCACTR_ismode)).nonlocals)), FYCACTR_n),(A_CALLPROC(NL(BYCACTR_ismode),((&((*(&(V->Vlist)))->V)), Mode, (Nods-1)),((&((*(&(V->Vlist)))->V)), Mode, (Nods-1),(NL(BYCACTR_ismode)).nonlocals)), FYCACTR_n,(NL(TWBACTR_insertis)).nonlocals));
} 
else
{ 
 /* line 3326: */
if ( ((*(&(EYCACTR_vl->Type)))==ZMAACTR_xbegin) )
{ 
 /* line 3327: */
HYCACTR = A_CALLPROC(NL(BYCACTR_ismode),((&(EYCACTR_vl->V)), Mode, Nods),((&(EYCACTR_vl->V)), Mode, Nods,(NL(BYCACTR_ismode)).nonlocals));
} 
else
{ 
 /* line 3328: */
 /* line 3329: */
 /* line 3330: */
HYCACTR = A_CALLPROC(NL(BYCACTR_ismode),((&((*(&(EYCACTR_vl->Rest)))->V)), Mode, Nods),((&((*(&(EYCACTR_vl->Rest)))->V)), Mode, Nods,(NL(BYCACTR_ismode)).nonlocals));
} 
} 
} 
} 
} 
A_PROC_EXIT(ismode);
return( HYCACTR );
} 
#undef NL

A_STATIC A68_BITS  SYCACTR_strong(A68_125 * V, A68_INT  Tm, A68_BOOL  Newendlab, void *NonLocals)
#define NL(x) (((TYCACTR_strong *)NonLocals)->x)
{ 
A68_124 * UYCACTR_vl;
A68_58 * VYCACTR_sl;
A68_INT  WYCACTR_n;
A68_INT  XYCACTR_m;
A68_INT  YYCACTR_t;
A68_BITS  ZYCACTR_ans;
A68_BITS  AZCACTR_qdontpull;
A68_INT  BZCACTR_tomode;
A68_INT  CZCACTR;  /* clause result */
A68_INT  DZCACTR_qneg;
A68_INT  EZCACTR;  /* clause result */
A68_INT  FZCACTR_pntomode;
A68_82  GZCACTR;  /* collateral clause result */
A68_106  HZCACTR;  /* OPERATORS - mode -> union mode */
A68_69 ** IZCACTR;  /* YIELD */
A68_BITS  JZCACTR;  /* ADICOPS - >= */
A68_BITS * KZCACTR;  /* YIELD */
A68_194  UZCACTR_elem;   /* proc value of non-global proc */
A68_INT  ZZCACTR_i;
A68_87  AADACTR;  /* collateral clause result */
A68_106  BADACTR;  /* OPERATORS - mode -> union mode */
A68_125  CADACTR;  /* collateral clause result */
A68_66  DADACTR;  /* united object - for case conformity */
A68_59 * EADACTR_rs;
A68_INT  FADACTR_i;
A68_BOOL  GADACTR;  /* optbool result */
A68_BOOL  HADACTR;  /* optbool result */
A68_87  IADACTR;  /* collateral clause result */
A68_106  JADACTR;  /* OPERATORS - mode -> union mode */
A68_125  KADACTR;  /* collateral clause result */
A68_60 * LADACTR_ri;
A68_61 * MADACTR_rv;
A68_62 * NADACTR_ra;
A68_INT  OADACTR;  /* to part of loop */
A68_INT  PADACTR;  /* loop control */
A68_66  QADACTR;  /* united object - for case conformity */
A68_62 * RADACTR_ra1;
A68_66  SADACTR;  /* united object - for case conformity */
A68_60 * TADACTR_ri;
A68_BOOL  UADACTR;  /* optbool result */
A68_INT  VADACTR_i;
A68_87  WADACTR;  /* collateral clause result */
A68_106  XADACTR;  /* OPERATORS - mode -> union mode */
A68_125  YADACTR;  /* collateral clause result */
A68_125  ZADACTR;  /* collateral clause result */
A68_INT  CBDACTR;  /* clause result */
A68_87  DBDACTR;  /* collateral clause result */
A68_106  EBDACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  FBDACTR;  /* optbool result */
A68_INT  GBDACTR_i;
A68_87  HBDACTR;  /* collateral clause result */
A68_106  IBDACTR;  /* OPERATORS - mode -> union mode */
A68_87  JBDACTR;  /* collateral clause result */
A68_106  KBDACTR;  /* OPERATORS - mode -> union mode */
A68_125  LBDACTR;  /* collateral clause result */
A68_BITS  MBDACTR;  /* clause result */
A_PROC_ENTRY(strong);
 /* line 3336: */
 /* line 3337: */
{ 
 /* line 3338: */
 /* line 3339: */
 /* line 3340: */
ZYCACTR_ans = MQAACTR_z;
AZCACTR_qdontpull = MQAACTR_z;
 /* line 3341: */
BZCACTR_tomode = A_ABS(Tm);
 /* line 3342: */
 /* line 3343: */
 /* line 3344: */
if ( (Tm<0) )
{ 
 /* line 3345: */
CZCACTR = (-1);
} 
else
{ 
CZCACTR = 1;
} 
DZCACTR_qneg = CZCACTR;
 /* line 3346: */
 /* line 3347: */
 /* line 3348: */
if ( Newendlab )
{ 
 /* line 3349: */
EZCACTR = BZCACTR_tomode;
} 
else
{ 
EZCACTR = (-BZCACTR_tomode);
} 
FZCACTR_pntomode = EZCACTR;
 /* line 3350: */
for ( ;; )
{ 
 /* line 3351: */
if ( !(((*(&(V->Labs)))!=XQAACTR_nillab)) ) break;
GZCACTR.Lab = (*(&(V->Labs)));
GZCACTR.Notsetting = A68_TRUE;
A_CALLPROC(NL(Output),(A_UNITE(HZCACTR,mode13,13,GZCACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(HZCACTR,mode13,13,GZCACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 3352: */
 /* line 3353: */
IZCACTR = (&(V->Labs)) ;
(*IZCACTR) = (*(&((*(&(V->Labs)))->Rest)));
}
 /* line 3355: */
 /* line 3356: */
JZCACTR = (*(&(V->Props))) ;
if ( A_LB_GE(JZCACTR,BRAACTR_downbit) )
{ 
 /* line 3357: */
A_CALLPROC(NL(Output),(SKAACTR_down, (*NL(FZAACTR_outlevel))),(SKAACTR_down, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 3359: */
 /* line 3360: */
if ( ((*(&(V->Mode)))>=0) )
{ 
A_CALLPROC(NL(OSCACTR_coerce),(V, (*(&(V->Mode))), BZCACTR_tomode, ISCACTR_all, A68_TRUE),(V, (*(&(V->Mode))), BZCACTR_tomode, ISCACTR_all, A68_TRUE,(NL(OSCACTR_coerce)).nonlocals));
 /* line 3361: */
ZYCACTR_ans = (A68_BITS )((*(&(V->Props)))&ZLAACTR_dontpullbit);
 /* line 3362: */
 /* line 3363: */
KZCACTR = (&(V->Props)) ;
(*KZCACTR) = MQAACTR_z;
} 
else
{ 
 /* line 3364: */
if ( ((*(&((UYCACTR_vl = (*(&(V->Vlist))))->Type)))==NNAACTR_xcoll) )
{ 
A_CLOSURE( UZCACTR_elem, VZCACTR_elem, WZCACTR_elem );
(( WZCACTR_elem * ) ( UZCACTR_elem.nonlocals )) -> Output = NL(Output);
(( WZCACTR_elem * ) ( UZCACTR_elem.nonlocals )) -> DZCACTR_qneg = (&DZCACTR_qneg);
(( WZCACTR_elem * ) ( UZCACTR_elem.nonlocals )) -> AZCACTR_qdontpull = (&AZCACTR_qdontpull);
(( WZCACTR_elem * ) ( UZCACTR_elem.nonlocals )) -> WYCACTR_n = (&WYCACTR_n);
(( WZCACTR_elem * ) ( UZCACTR_elem.nonlocals )) -> FZAACTR_outlevel = NL(FZAACTR_outlevel);
(( WZCACTR_elem * ) ( UZCACTR_elem.nonlocals )) -> RYCACTR_strong = NL(RYCACTR_strong);
(( WZCACTR_elem * ) ( UZCACTR_elem.nonlocals )) -> ZYCACTR_ans = (&ZYCACTR_ans);
 /* line 3375: */
 /* line 3376: */
if ( (BZCACTR_tomode<KQAACTR_refmark) )
{ 
 /* line 3377: */
if ( (BZCACTR_tomode==ILAACTR_collatmode) )
{ 
 /* line 3378: */
goto QZCACTR_free;
} 
else
{ 
 /* line 3379: */
if ( (BZCACTR_tomode==YKAACTR_voidmode) )
{ 
WYCACTR_n = FZCACTR_pntomode;
 /* line 3380: */
 /* line 3381: */
for ( ZZCACTR_i = 2;;
ZZCACTR_i += 1 ) 
{ 
 /* line 3382: */
if ( !((UYCACTR_vl!=UQAACTR_nilvl)) ) break;
A_CALLPROC(UZCACTR_elem,(UYCACTR_vl, YKAACTR_voidmode),(UYCACTR_vl, YKAACTR_voidmode,(UZCACTR_elem).nonlocals));
 /* line 3383: */
UYCACTR_vl = (*(&(UYCACTR_vl->Rest)));
 /* line 3384: */
 /* line 3385: */
WYCACTR_n = ZZCACTR_i;
}
 /* line 3386: */
AADACTR.Fn = RNAACTR_xendcoll;
AADACTR.M = 0;
 /* line 3387: */
AADACTR.Props = AZCACTR_qdontpull;
AADACTR.Param = FZCACTR_pntomode;
A_CALLPROC(NL(Output),(A_UNITE(BADACTR,mode17,17,AADACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(BADACTR,mode17,17,AADACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 3388: */
EYBACTR_freevalue(V);
 /* line 3389: */
CADACTR.Props = MQAACTR_z;
CADACTR.Mode = YKAACTR_voidmode;
CADACTR.Vlist = (A68_124 *)A68_NIL;
CADACTR.Labs = (A68_69 *)A68_NIL;
(*V) = CADACTR;
 /* line 3390: */
 /* line 3391: */
goto OZCACTR_over;
} 
} 
 /* line 3393: */
 /* line 3394: */
DADACTR = (*(&A_VINDEX(NL(KUAACTR_modes),BZCACTR_tomode))) ;
switch ( DADACTR.mode )
{ 
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
EADACTR_rs = (DADACTR.data.mode4);
 /* line 3395: */
{ 
VYCACTR_sl = (*(&(EADACTR_rs->Sels)));
 /* line 3396: */
WYCACTR_n = FZCACTR_pntomode;
 /* line 3397: */
 /* line 3398: */
for ( FADACTR_i = 2;;
FADACTR_i += 1 ) 
{ 
GADACTR = (UYCACTR_vl!=UQAACTR_nilvl);
if ( GADACTR )
{ /* line 3399: */
GADACTR = (VYCACTR_sl!=RQAACTR_nilsel);
}
if ( !(GADACTR) ) break;
A_CALLPROC(UZCACTR_elem,(UYCACTR_vl, (*(&(VYCACTR_sl->Mode)))),(UYCACTR_vl, (*(&(VYCACTR_sl->Mode))),(UZCACTR_elem).nonlocals));
 /* line 3400: */
UYCACTR_vl = (*(&(UYCACTR_vl->Rest)));
 /* line 3401: */
VYCACTR_sl = (*(&(VYCACTR_sl->Rest)));
 /* line 3402: */
 /* line 3403: */
WYCACTR_n = FADACTR_i;
}
 /* line 3404: */
 /* line 3405: */
HADACTR = (UYCACTR_vl!=UQAACTR_nilvl);
if ( ! HADACTR )
{ /* line 3406: */
HADACTR = (VYCACTR_sl!=RQAACTR_nilsel);
}
if ( HADACTR )
{ 
 /* line 3407: */
goto MZCACTR_collflt;
} 
 /* line 3408: */
IADACTR.Fn = RNAACTR_xendcoll;
IADACTR.M = 0;
 /* line 3409: */
IADACTR.Props = AZCACTR_qdontpull;
IADACTR.Param = FZCACTR_pntomode;
A_CALLPROC(NL(Output),(A_UNITE(JADACTR,mode17,17,IADACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(JADACTR,mode17,17,IADACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 3410: */
EYBACTR_freevalue(V);
 /* line 3411: */
KADACTR.Props = MQAACTR_z;
KADACTR.Mode = BZCACTR_tomode;
KADACTR.Vlist = (A68_124 *)A68_NIL;
KADACTR.Labs = (A68_69 *)A68_NIL;
(*V) = KADACTR;
 /* line 3412: */
 /* line 3413: */
 /* line 3414: */
goto OZCACTR_over;
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
LADACTR_ri = (DADACTR.data.mode5);
 /* line 3415: */
{ 
XYCACTR_m = (*(&(LADACTR_ri->Imode)));
 /* line 3416: */
 /* line 3417: */
 /* line 3418: */
WYCACTR_n = 1;
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
MADACTR_rv = (DADACTR.data.mode7);
 /* line 3419: */
{ 
XYCACTR_m = (*(&(MADACTR_rv->Vecmode)));
 /* line 3420: */
ZYCACTR_ans = ZLAACTR_dontpullbit;
 /* line 3421: */
 /* line 3422: */
 /* line 3423: */
WYCACTR_n = 1;
} 
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
NADACTR_ra = (DADACTR.data.mode8);
 /* line 3424: */
{ 
XYCACTR_m = BZCACTR_tomode;
 /* line 3425: */
ZYCACTR_ans = ZLAACTR_dontpullbit;
 /* line 3426: */
 /* line 3427: */
OADACTR = WYCACTR_n = (*(&(NADACTR_ra->Nods)));
for ( PADACTR = 1;
PADACTR <= OADACTR;
PADACTR += 1 )
{ 
 /* line 3428: */
QADACTR = (*(&A_VINDEX(NL(KUAACTR_modes),XYCACTR_m))) ;
switch ( QADACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
RADACTR_ra1 = (QADACTR.data.mode8);
 /* line 3429: */
 /* line 3430: */
 /* line 3431: */
XYCACTR_m = (*(&(RADACTR_ra1->Mode)));
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 3432: */
 /* line 3433: */
} 
break;
default: 
 /* line 3434: */
goto MZCACTR_collflt;
break;
} 
 /* line 3436: */
FZCACTR_pntomode = A_CALLPROC(NL(BYCACTR_ismode),(V, XYCACTR_m, WYCACTR_n),(V, XYCACTR_m, WYCACTR_n,(NL(BYCACTR_ismode)).nonlocals));
 /* line 3437: */
 /* line 3438: */
if ( (FZCACTR_pntomode!=BZCACTR_tomode) )
{ 
 /* line 3439: */
DZCACTR_qneg = 1;
} 
 /* line 3441: */
 /* line 3442: */
SADACTR = (*(&A_VINDEX(NL(KUAACTR_modes),FZCACTR_pntomode))) ;
switch ( SADACTR.mode )
{ 
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
TADACTR_ri = (SADACTR.data.mode5);
 /* line 3443: */
 /* line 3444: */
XYCACTR_m = (*(&(TADACTR_ri->Imode)));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 3446: */
UADACTR = !Newendlab;
if ( UADACTR )
{ /* line 3447: */
UADACTR = (FZCACTR_pntomode==BZCACTR_tomode);
}
if ( UADACTR )
{ 
 /* line 3448: */
FZCACTR_pntomode = (-FZCACTR_pntomode);
} 
 /* line 3449: */
UYCACTR_vl = (*(&(V->Vlist)));
 /* line 3450: */
WYCACTR_n = FZCACTR_pntomode;
 /* line 3451: */
 /* line 3452: */
for ( VADACTR_i = 2;;
VADACTR_i += 1 ) 
{ 
 /* line 3453: */
if ( !((UYCACTR_vl!=UQAACTR_nilvl)) ) break;
A_CALLPROC(UZCACTR_elem,(UYCACTR_vl, XYCACTR_m),(UYCACTR_vl, XYCACTR_m,(UZCACTR_elem).nonlocals));
 /* line 3454: */
WYCACTR_n = VADACTR_i;
 /* line 3455: */
 /* line 3456: */
UYCACTR_vl = (*(&(UYCACTR_vl->Rest)));
}
 /* line 3457: */
WADACTR.Fn = RNAACTR_xendcoll;
 /* line 3458: */
WADACTR.M = 0;
 /* line 3459: */
WADACTR.Props = AZCACTR_qdontpull;
WADACTR.Param = FZCACTR_pntomode;
A_CALLPROC(NL(Output),(A_UNITE(XADACTR,mode17,17,WADACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(XADACTR,mode17,17,WADACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 3460: */
EYBACTR_freevalue(V);
 /* line 3461: */
YADACTR.Props = MQAACTR_z;
YADACTR.Mode = A_ABS(FZCACTR_pntomode);
YADACTR.Vlist = (A68_124 *)A68_NIL;
YADACTR.Labs = (A68_69 *)A68_NIL;
 /* line 3462: */
 /* line 3463: */
(*V) = YADACTR ;
A_CALLPROC(NL(OSCACTR_coerce),(V, A_ABS(FZCACTR_pntomode), BZCACTR_tomode, ISCACTR_all, A68_TRUE),(V, A_ABS(FZCACTR_pntomode), BZCACTR_tomode, ISCACTR_all, A68_TRUE,(NL(OSCACTR_coerce)).nonlocals));
 /* line 3464: */
 /* line 3465: */
goto OZCACTR_over;
} 
 /* line 3467: */
MZCACTR_collflt:
 /* line 3468: */
A_CALLPROC(NL(PZBACTR_faultp),(111, BZCACTR_tomode, 0, (A68_31 *)A68_NIL),(111, BZCACTR_tomode, 0, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
 /* line 3469: */
QZCACTR_free:
EYBACTR_freevalue(V);
 /* line 3470: */
ZADACTR.Props = MQAACTR_z;
ZADACTR.Mode = BZCACTR_tomode;
ZADACTR.Vlist = (A68_124 *)A68_NIL;
ZADACTR.Labs = (A68_69 *)A68_NIL;
(*V) = ZADACTR;
 /* line 3471: */
OZCACTR_over:
 /* line 3473: */
/*SKIP*/;
} 
else
{ 
 /* line 3474: */
 /* line 3475: */
if ( ((*(&(UYCACTR_vl->Type)))==ZMAACTR_xbegin) )
{ 
 /* line 3476: */
CBDACTR = BZCACTR_tomode;
} 
else
{ 
CBDACTR = (-(*(&(V->Mode))));
} 
XYCACTR_m = CBDACTR;
 /* line 3477: */
DBDACTR.Fn = (*(&(UYCACTR_vl->Type)));
 /* line 3478: */
DBDACTR.M = (XYCACTR_m*DZCACTR_qneg);
 /* line 3479: */
DBDACTR.Props = (A68_BITS )((*(&((&(UYCACTR_vl->V))->Props)))&GRAACTR_notdontpull);
DBDACTR.Param = FZCACTR_pntomode;
A_CALLPROC(NL(Output),(A_UNITE(EBDACTR,mode17,17,DBDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(EBDACTR,mode17,17,DBDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 3480: */
ZYCACTR_ans = AZCACTR_qdontpull = A_CALLPROC(NL(RYCACTR_strong),((&(UYCACTR_vl->V)), (-XYCACTR_m), ((*(&(UYCACTR_vl->Type)))!=ZMAACTR_xbegin)),((&(UYCACTR_vl->V)), (-XYCACTR_m), ((*(&(UYCACTR_vl->Type)))!=ZMAACTR_xbegin),(NL(RYCACTR_strong)).nonlocals));
 /* line 3481: */
WYCACTR_n = (-1);
 /* line 3482: */
for ( ;; )
{ 
 /* line 3483: */
if ( !((UYCACTR_vl!=UQAACTR_nilvl)) ) break;
WYCACTR_n+=1;
 /* line 3484: */
YYCACTR_t = (*(&(UYCACTR_vl->Type)));
 /* line 3485: */
 /* line 3486: */
UYCACTR_vl = (*(&(UYCACTR_vl->Rest)));
}
 /* line 3487: */
FBDACTR = (YYCACTR_t==GNAACTR_xout);
if ( ! FBDACTR )
{ /* line 3488: */
FBDACTR = (YYCACTR_t==HNAACTR_xoutu);
}
if ( FBDACTR )
{ 
 /* line 3489: */
WYCACTR_n = ((-WYCACTR_n)+1);
} 
 /* line 3490: */
UYCACTR_vl = (*(&((*(&(V->Vlist)))->Rest)));
 /* line 3492: */
for ( GBDACTR_i = 2;;
GBDACTR_i += 1 ) 
{ 
 /* line 3493: */
if ( !((UYCACTR_vl!=UQAACTR_nilvl)) ) break;
HBDACTR.Fn = (*(&(UYCACTR_vl->Type)));
 /* line 3495: */
HBDACTR.M = BZCACTR_tomode;
 /* line 3496: */
HBDACTR.Props = (A68_BITS )((A68_BITS )((*(&((&(UYCACTR_vl->V))->Props)))&GRAACTR_notdontpull)|AZCACTR_qdontpull);
HBDACTR.Param = WYCACTR_n;
A_CALLPROC(NL(Output),(A_UNITE(IBDACTR,mode17,17,HBDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(IBDACTR,mode17,17,HBDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 3497: */
AZCACTR_qdontpull = A_CALLPROC(NL(RYCACTR_strong),((&(UYCACTR_vl->V)), (-BZCACTR_tomode), A68_FALSE),((&(UYCACTR_vl->V)), (-BZCACTR_tomode), A68_FALSE,(NL(RYCACTR_strong)).nonlocals));
 /* line 3498: */
ZYCACTR_ans = (A68_BITS )(ZYCACTR_ans|AZCACTR_qdontpull);
 /* line 3499: */
WYCACTR_n = GBDACTR_i;
 /* line 3500: */
 /* line 3501: */
UYCACTR_vl = (*(&(UYCACTR_vl->Rest)));
}
 /* line 3502: */
UYCACTR_vl = (*(&(V->Vlist)));
 /* line 3505: */
JBDACTR.Fn = ((*(&(UYCACTR_vl->Type)))+13);
JBDACTR.M = 0;
 /* line 3506: */
JBDACTR.Props = AZCACTR_qdontpull;
JBDACTR.Param = FZCACTR_pntomode;
A_CALLPROC(NL(Output),(A_UNITE(KBDACTR,mode17,17,JBDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(KBDACTR,mode17,17,JBDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 3507: */
BBDACTR_end:
EYBACTR_freevalue(V);
 /* line 3508: */
LBDACTR.Props = MQAACTR_z;
LBDACTR.Mode = BZCACTR_tomode;
LBDACTR.Vlist = (A68_124 *)A68_NIL;
 /* line 3509: */
LBDACTR.Labs = (A68_69 *)A68_NIL;
(*V) = LBDACTR;
} 
} 
 /* line 3510: */
 /* line 3511: */
MBDACTR = ZYCACTR_ans;
} 
A_PROC_EXIT(strong);
return( MBDACTR );
} 
#undef NL

A_STATIC A68_VOID  PBDACTR_weak(A68_125 * V, void *NonLocals)
#define NL(x) (((QBDACTR_weak *)NonLocals)->x)
{ 
A_PROC_ENTRY(weak);
 /* line 3514: */
A_CALLPROC(NL(RYCACTR_strong),(V, A_CALLPROC(NL(XKCACTR_weakmode),(A_CALLPROC(NL(CXCACTR_hcf),(V),(V,(NL(CXCACTR_hcf)).nonlocals))),(A_CALLPROC(NL(CXCACTR_hcf),(V),(V,(NL(CXCACTR_hcf)).nonlocals)),(NL(XKCACTR_weakmode)).nonlocals)), A68_TRUE),(V, A_CALLPROC(NL(XKCACTR_weakmode),(A_CALLPROC(NL(CXCACTR_hcf),(V),(V,(NL(CXCACTR_hcf)).nonlocals))),(A_CALLPROC(NL(CXCACTR_hcf),(V),(V,(NL(CXCACTR_hcf)).nonlocals)),(NL(XKCACTR_weakmode)).nonlocals)), A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
A_PROC_EXIT(weak);
return;
} 
#undef NL

A_STATIC A68_BOOL  WBDACTR_findbiop(A68_INT * Lmode, A68_INT * Rmode, A68_INT * Ans, A68_INT * Biop, void *NonLocals)
#define NL(x) (((XBDACTR_findbiop *)NonLocals)->x)
{ 
A68_BOOL  YBDACTR;  /* optbool result */
A68_BOOL  ZBDACTR;  /* clause result */
A68_INT  HCDACTR_rr;
A68_INT  ICDACTR_l;
A68_INT  JCDACTR_r;
A68_INT  KCDACTR_b;
A68_INT  LCDACTR_do;
A68_INT  MCDACTR_a;
A68_INT  NCDACTR_i;
A68_INT  OCDACTR_version;
A68_BITS  PCDACTR_test;
A68_BOOL  QCDACTR;  /* optbool result */
A68_INT  RCDACTR;  /* YIELD */
A68_INT  SCDACTR;  /* YIELD */
A68_66  TCDACTR;  /* united object - for case conformity */
A68_60 * UCDACTR_li;
A68_INT  VCDACTR;  /* YIELD */
A68_INT  WCDACTR;  /* YIELD */
A68_INT  XCDACTR;  /* YIELD */
A68_66  YCDACTR;  /* united object - for case conformity */
A68_60 * ZCDACTR_ri;
A68_66  ADDACTR;  /* united object - for case conformity */
A68_62 * BDDACTR_ra;
A68_BOOL  CDDACTR;  /* optbool result */
A68_INT  DDDACTR;  /* clause result */
A68_BOOL  EDDACTR;  /* optbool result */
A68_BOOL  FDDACTR;  /* optbool result */
A68_BOOL  GDDACTR;  /* optbool result */
A68_66  HDDACTR;  /* united object - for case conformity */
A68_55 * IDDACTR_p;
A68_BOOL  JDDACTR;  /* clause result */
A68_BOOL  KDDACTR;  /* optbool result */
A68_BOOL  LDDACTR;  /* optbool result */
A68_BOOL  MDDACTR;  /* optbool result */
A68_BOOL  NDDACTR;  /* optbool result */
A68_INT  ODDACTR_i;
A68_BOOL  PDDACTR;  /* clause result */
A68_BOOL  QDDACTR;  /* optbool result */
A68_BOOL  RDDACTR;  /* optbool result */
A68_BOOL  SDDACTR;  /* optbool result */
A68_BOOL  TDDACTR;  /* optbool result */
A68_66  UDDACTR;  /* united object - for case conformity */
A68_61 * VDDACTR_rv;
A68_66  WDDACTR;  /* united object - for case conformity */
A68_62 * XDDACTR_ra;
A68_66  YDDACTR;  /* united object - for case conformity */
A68_64 * ZDDACTR_rs;
A68_INT  AEDACTR;  /* SHR */
A68_INT  BEDACTR;  /* clause result */
A68_INT  CEDACTR;  /* clause result */
A_PROC_ENTRY(findbiop);
 /* line 3519: */
YBDACTR = ((*Lmode)==ZKAACTR_faultmode);
if ( ! YBDACTR )
{ /* line 3520: */
YBDACTR = ((*Rmode)==ZKAACTR_faultmode);
}
if ( YBDACTR )
{ 
(*Biop) = (-1);
 /* line 3521: */
(*Ans) = ZKAACTR_faultmode;
 /* line 3522: */
 /* line 3523: */
ZBDACTR = A68_TRUE;
} 
else
{ 
{ 
HCDACTR_rr = 0;
 /* line 3524: */
 /* line 3525: */
KCDACTR_b = (*Biop);
 /* line 3526: */
JCDACTR_r = A_CALLPROC(NL(XJCACTR_pmode),((*Rmode)),((*Rmode),(NL(XJCACTR_pmode)).nonlocals));
 /* line 3527: */
QCDACTR = (KCDACTR_b<CDBACTR_diadiconly);
if ( QCDACTR )
{ /* line 3528: */
QCDACTR = ((*Lmode)==0);
}
if ( QCDACTR )
{ 
 /* line 3529: */
KCDACTR_b+=(BDBACTR_monadic-YCBACTR_biplus);
} 
 /* line 3531: */
 /* line 3532: */
if ( (KCDACTR_b>=BDBACTR_monadic) )
{ 
if ( ((*Lmode)!=0) )
{ 
goto CCDACTR_false;
} 
 /* line 3533: */
KCDACTR_b-=BDBACTR_monadic;
 /* line 3534: */
LCDACTR_do = 1;
 /* line 3535: */
RCDACTR = (KCDACTR_b+1) ;
PCDACTR_test = A_VINDEX(NL(NIBACTR_monops),RCDACTR).Test;
 /* line 3536: */
 /* line 3537: */
SCDACTR = (KCDACTR_b+1) ;
MCDACTR_a = A_VINDEX(NL(NIBACTR_monops),SCDACTR).Ans;
} 
else
{ 
if ( ((*Lmode)==0) )
{ 
goto CCDACTR_false;
} 
 /* line 3538: */
KCDACTR_b-=YCBACTR_biplus;
 /* line 3539: */
ICDACTR_l = A_CALLPROC(NL(XJCACTR_pmode),((*Lmode)),((*Lmode),(NL(XJCACTR_pmode)).nonlocals));
 /* line 3540: */
 /* line 3541: */
TCDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),ICDACTR_l))) ;
switch ( TCDACTR.mode )
{ 
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
UCDACTR_li = (TCDACTR.data.mode5);
 /* line 3542: */
 /* line 3543: */
 /* line 3544: */
ICDACTR_l = A_CALLPROC(NL(ZVBACTR_insertvec),((*(&(UCDACTR_li->Imode))), 1),((*(&(UCDACTR_li->Imode))), 1,(NL(ZVBACTR_insertvec)).nonlocals));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3546: */
VCDACTR = (KCDACTR_b+1) ;
LCDACTR_do = A_VINDEX(NL(KIBACTR_diops),VCDACTR).Do;
 /* line 3547: */
WCDACTR = (KCDACTR_b+1) ;
PCDACTR_test = A_VINDEX(NL(KIBACTR_diops),WCDACTR).Test;
 /* line 3548: */
 /* line 3549: */
XCDACTR = (KCDACTR_b+1) ;
MCDACTR_a = A_VINDEX(NL(KIBACTR_diops),XCDACTR).Ans;
} 
 /* line 3551: */
 /* line 3552: */
YCDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),JCDACTR_r))) ;
switch ( YCDACTR.mode )
{ 
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
ZCDACTR_ri = (YCDACTR.data.mode5);
 /* line 3553: */
 /* line 3554: */
 /* line 3555: */
JCDACTR_r = A_CALLPROC(NL(ZVBACTR_insertvec),((*(&(ZCDACTR_ri->Imode))), 1),((*(&(ZCDACTR_ri->Imode))), 1,(NL(ZVBACTR_insertvec)).nonlocals));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3557: */
ECDACTR_dolab:
 /* line 3559: */
switch ( LCDACTR_do )
{ 
case 1: 
 /* line 3561: */
/*SKIP*/;
break;
case 2: 
{ 
ICDACTR_l = JCDACTR_r = A_CALLPROC(NL(QWCACTR_hcfoftwo),(ICDACTR_l, JCDACTR_r, A68_TRUE),(ICDACTR_l, JCDACTR_r, A68_TRUE,(NL(QWCACTR_hcfoftwo)).nonlocals));
 /* line 3562: */
if ( (ICDACTR_l==0) )
{ 
 /* line 3563: */
 /* line 3565: */
goto CCDACTR_false;
} 
} 
break;
case 3: 
 /* line 3566: */
ADDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),JCDACTR_r))) ;
switch ( ADDACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
BDDACTR_ra = (ADDACTR.data.mode8);
 /* line 3567: */
if ( (ICDACTR_l!=ELAACTR_int) )
{ 
 /* line 3568: */
goto CCDACTR_false;
} 
break;
default: 
 /* line 3569: */
 /* line 3571: */
goto CCDACTR_false;
break;
} 
break;
case 4: 
{ 
NCDACTR_i = ICDACTR_l;
 /* line 3572: */
ICDACTR_l = JCDACTR_r;
 /* line 3573: */
JCDACTR_r = NCDACTR_i;
 /* line 3574: */
if ( (ICDACTR_l!=ELAACTR_int) )
{ 
goto CCDACTR_false;
} 
 /* line 3575: */
 /* line 3577: */
if ( (KCDACTR_b==33) )
{ 
CDDACTR = (JCDACTR_r>=10);
if ( CDDACTR )
{ /* line 3578: */
CDDACTR = (JCDACTR_r<=13);
}
 /* line 3579: */
if ( CDDACTR )
{ 
DDDACTR = 18;
} 
else
{ 
PCDACTR_test = 0X70U;
 /* line 3580: */
 /* line 3581: */
 /* line 3582: */
DDDACTR = 16;
} 
 /* line 3583: */
 /* line 3585: */
KCDACTR_b = DDDACTR;
} 
} 
break;
case 5: 
if ( (ICDACTR_l!=ELAACTR_int) )
{ 
 /* line 3587: */
goto CCDACTR_false;
} 
break;
case 6: 
{ 
EDDACTR = (KCDACTR_b==23);
if ( EDDACTR )
{ /* line 3588: */
EDDACTR = (JCDACTR_r==ELAACTR_int);
}
if ( EDDACTR )
{FDDACTR = (ICDACTR_l==GLAACTR_vecchar);
if ( ! FDDACTR )
{FDDACTR = (ICDACTR_l==HLAACTR_arraychar);
}
 /* line 3589: */
EDDACTR = FDDACTR;
}
if ( EDDACTR )
{ 
 /* line 3590: */
HCDACTR_rr = ELAACTR_int;
} 
else
{ 
 /* line 3591: */
if ( !A_CALLPROC(NL(OSCACTR_coerce),((A68_125 *)A68_NIL, JCDACTR_r, ICDACTR_l, ISCACTR_all, A68_FALSE),((A68_125 *)A68_NIL, JCDACTR_r, ICDACTR_l, ISCACTR_all, A68_FALSE,(NL(OSCACTR_coerce)).nonlocals)) )
{ 
 /* line 3592: */
goto CCDACTR_false;
} 
} 
 /* line 3593: */
JCDACTR_r = ICDACTR_l;
 /* line 3594: */
 /* line 3595: */
 /* line 3597: */
ICDACTR_l = (A_CALLPROC(NL(YLCACTR_makeflex),(ICDACTR_l),(ICDACTR_l,(NL(YLCACTR_makeflex)).nonlocals))+KQAACTR_refmark);
} 
break;
case 7: 
{ 
ICDACTR_l = A_CALLPROC(NL(QWCACTR_hcfoftwo),((*Lmode), (*Rmode), A68_TRUE),((*Lmode), (*Rmode), A68_TRUE,(NL(QWCACTR_hcfoftwo)).nonlocals));
 /* line 3598: */
for ( ;; )
{ 
GDDACTR = (ICDACTR_l>0);
if ( GDDACTR )
{ /* line 3599: */
GDDACTR = (ICDACTR_l<KQAACTR_refmark);
}
if ( GDDACTR )
{ /* line 3600: */
HDDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),ICDACTR_l))) ;
switch ( HDDACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
IDDACTR_p = (HDDACTR.data.mode6);
 /* line 3601: */
{ 
ICDACTR_l = (*(&(IDDACTR_p->Deproc)));
 /* line 3602: */
 /* line 3603: */
 /* line 3604: */
JDDACTR = A68_TRUE;
} 
break;
default: 
 /* line 3605: */
 /* line 3606: */
JDDACTR = A68_FALSE;
break;
} 
GDDACTR = JDDACTR;
}
if ( !(GDDACTR) ) break;
/*SKIP*/;
}
 /* line 3608: */
JCDACTR_r = ICDACTR_l;
 /* line 3609: */
 /* line 3610: */
if ( (ICDACTR_l<KQAACTR_refmark) )
{ 
 /* line 3611: */
 /* line 3612: */
 /* line 3614: */
goto CCDACTR_false;
} 
} 
break;
case 8: 
{ 
NCDACTR_i = ICDACTR_l;
 /* line 3615: */
ICDACTR_l = JCDACTR_r;
 /* line 3616: */
JCDACTR_r = NCDACTR_i;
 /* line 3617: */
LCDACTR_do = 6;
 /* line 3618: */
 /* line 3619: */
 /* line 3621: */
goto ECDACTR_dolab;
} 
break;
case 9: 
{ 
NCDACTR_i = A_CALLPROC(NL(QWCACTR_hcfoftwo),(ICDACTR_l, JCDACTR_r, A68_TRUE),(ICDACTR_l, JCDACTR_r, A68_TRUE,(NL(QWCACTR_hcfoftwo)).nonlocals));
 /* line 3622: */
KDDACTR = (NCDACTR_i>=14);
if ( KDDACTR )
{ /* line 3623: */
KDDACTR = (NCDACTR_i<=25);
}
if ( KDDACTR )
{ 
 /* line 3624: */
HCDACTR_rr = ICDACTR_l = JCDACTR_r = NCDACTR_i;
} 
else
{ 
LDDACTR = (NCDACTR_i==0);
if ( LDDACTR )
{MDDACTR = (ICDACTR_l==ELAACTR_int);
if ( ! MDDACTR )
{MDDACTR = (JCDACTR_r==ELAACTR_int);
}
 /* line 3625: */
LDDACTR = MDDACTR;
}
if ( LDDACTR )
{ 
NCDACTR_i = ((ICDACTR_l+JCDACTR_r)-ELAACTR_int);
 /* line 3626: */
NDDACTR = (NCDACTR_i!=BLAACTR_char);
if ( NDDACTR )
{NDDACTR = (NCDACTR_i!=GLAACTR_vecchar);
}
if ( NDDACTR )
{ /* line 3627: */
NDDACTR = (NCDACTR_i!=HLAACTR_arraychar);
}
if ( NDDACTR )
{ 
 /* line 3628: */
goto CCDACTR_false;
} 
else
{ 
HCDACTR_rr = JCDACTR_r;
 /* line 3629: */
 /* line 3630: */
 /* line 3631: */
JCDACTR_r = NCDACTR_i;
} 
} 
else
{ 
 /* line 3632: */
 /* line 3633: */
 /* line 3634: */
goto CCDACTR_false;
} 
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 3636: */
 /* line 3637: */
if ( (PCDACTR_test==MQAACTR_z) )
{ 
 /* line 3638: */
OCDACTR_version = 1;
} 
else
{ 
OCDACTR_version = 0;
 /* line 3639: */
for ( ODDACTR_i = 1;;
ODDACTR_i += 1 ) 
{ 
 /* line 3640: */
if ( !((PCDACTR_test!=MQAACTR_z)) ) break;
 /* line 3641: */
if ( A_LB_GE(PCDACTR_test,NQAACTR_z1) )
{ 
OCDACTR_version+=1;
 /* line 3642: */
 /* line 3643: */
 /* line 3645: */
switch ( ODDACTR_i )
{ 
case 1: 
 /* line 3647: */
PDDACTR = (JCDACTR_r==ALAACTR_bool);
break;
case 2: 
 /* line 3649: */
PDDACTR = (JCDACTR_r==BLAACTR_char);
break;
case 3: 
QDDACTR = (JCDACTR_r>=10);
if ( QDDACTR )
{QDDACTR = (JCDACTR_r<=13);
}
 /* line 3651: */
PDDACTR = QDDACTR;
break;
case 4: 
 /* line 3653: */
PDDACTR = (JCDACTR_r==ELAACTR_int);
break;
case 5: 
RDDACTR = (JCDACTR_r>=14);
if ( RDDACTR )
{RDDACTR = (JCDACTR_r<=17);
}
 /* line 3655: */
PDDACTR = RDDACTR;
break;
case 6: 
SDDACTR = (JCDACTR_r>=18);
if ( SDDACTR )
{SDDACTR = (JCDACTR_r<=21);
}
 /* line 3657: */
PDDACTR = SDDACTR;
break;
case 7: 
TDDACTR = (JCDACTR_r>=22);
if ( TDDACTR )
{TDDACTR = (JCDACTR_r<=25);
}
 /* line 3659: */
PDDACTR = TDDACTR;
break;
case 8: 
 /* line 3661: */
PDDACTR = (JCDACTR_r==GLAACTR_vecchar);
break;
case 9: 
 /* line 3663: */
PDDACTR = (JCDACTR_r==HLAACTR_arraychar);
break;
case 10: 
 /* line 3664: */
UDDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),JCDACTR_r))) ;
switch ( UDDACTR.mode )
{ 
case 7: /* REF STRUCT(INT,INT,INT)  */
VDDACTR_rv = (UDDACTR.data.mode7);
 /* line 3665: */
 /* line 3666: */
PDDACTR = A68_TRUE;
break;
default: 
 /* line 3667: */
 /* line 3669: */
PDDACTR = A68_FALSE;
break;
} 
break;
case 11: 
 /* line 3670: */
WDDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),JCDACTR_r))) ;
switch ( WDDACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
XDDACTR_ra = (WDDACTR.data.mode8);
 /* line 3671: */
 /* line 3672: */
PDDACTR = A68_TRUE;
break;
default: 
 /* line 3673: */
 /* line 3675: */
PDDACTR = A68_FALSE;
break;
} 
break;
case 12: 
 /* line 3676: */
YDDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),JCDACTR_r))) ;
switch ( YDDACTR.mode )
{ 
case 9: /* REF STRUCT(INT,REF MODE63)  */
ZDDACTR_rs = (YDDACTR.data.mode9);
 /* line 3677: */
 /* line 3678: */
PDDACTR = A68_TRUE;
break;
default: 
 /* line 3679: */
 /* line 3680: */
 /* line 3681: */
PDDACTR = A68_FALSE;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
if ( PDDACTR )
{ 
 /* line 3682: */
 /* line 3683: */
goto GCDACTR_found;
} 
} 
 /* line 3684: */
 /* line 3685: */
AEDACTR = 1 ;
PCDACTR_test = A_SHR(PCDACTR_test,AEDACTR);
}
 /* line 3686: */
 /* line 3687: */
goto CCDACTR_false;
} 
 /* line 3689: */
GCDACTR_found:
 /* line 3690: */
 /* line 3691: */
 /* line 3693: */
switch ( (-MCDACTR_a) )
{ 
case 1: 
 /* line 3695: */
BEDACTR = JCDACTR_r;
break;
case 2: 
{ 
 /* line 3696: */
if ( ((A68_INT )(A68_BITS )((A68_BITS )JCDACTR_r&(A68_BITS )3)==1) )
{ 
 /* line 3697: */
goto CCDACTR_false;
} 
 /* line 3698: */
 /* line 3699: */
 /* line 3701: */
BEDACTR = (JCDACTR_r+1);
} 
break;
case 3: 
{ 
 /* line 3702: */
if ( ((A68_INT )(A68_BITS )((A68_BITS )JCDACTR_r&(A68_BITS )3)==2) )
{ 
 /* line 3703: */
goto CCDACTR_false;
} 
 /* line 3704: */
 /* line 3705: */
 /* line 3707: */
BEDACTR = (JCDACTR_r-1);
} 
break;
case 4: 
 /* line 3708: */
 /* line 3709: */
if ( (JCDACTR_r<=8) )
{ 
BEDACTR = ELAACTR_int;
} 
else
{ 
 /* line 3710: */
if ( (JCDACTR_r<14) )
{ 
 /* line 3711: */
BEDACTR = (JCDACTR_r+4);
} 
else
{ 
 /* line 3712: */
 /* line 3713: */
if ( (JCDACTR_r<22) )
{ 
BEDACTR = JCDACTR_r;
} 
else
{ 
 /* line 3714: */
 /* line 3716: */
BEDACTR = (JCDACTR_r-4);
} 
} 
} 
break;
case 5: 
 /* line 3718: */
BEDACTR = (22+(A68_INT )(A68_BITS )((A68_BITS )(JCDACTR_r+2)&(A68_BITS )3));
break;
case 6: 
 /* line 3720: */
BEDACTR = (JCDACTR_r-4);
break;
case 7: 
 /* line 3722: */
BEDACTR = ICDACTR_l;
break;
case 8: 
{ 
NCDACTR_i = JCDACTR_r;
 /* line 3723: */
JCDACTR_r = ICDACTR_l;
 /* line 3724: */
 /* line 3725: */
 /* line 3727: */
BEDACTR = ICDACTR_l = NCDACTR_i;
} 
break;
case 9: 
if ( (JCDACTR_r<18) )
{ 
BEDACTR = (JCDACTR_r+4);
} 
else
{ 
 /* line 3729: */
BEDACTR = JCDACTR_r;
} 
break;
case 10: 
if ( (JCDACTR_r!=BLAACTR_char) )
{ 
BEDACTR = JCDACTR_r;
} 
else
{ 
 /* line 3731: */
BEDACTR = GLAACTR_vecchar;
} 
break;
case 11: 
 /* line 3733: */
BEDACTR = A_CALLPROC(NL(XKCACTR_weakmode),((*Rmode)),((*Rmode),(NL(XKCACTR_weakmode)).nonlocals));
break;
case 12: 
{ 
NCDACTR_i = ICDACTR_l;
 /* line 3734: */
ICDACTR_l = JCDACTR_r;
 /* line 3735: */
 /* line 3736: */
 /* line 3737: */
 /* line 3738: */
BEDACTR = JCDACTR_r = NCDACTR_i;
} 
break;
default: 
BEDACTR = MCDACTR_a;
break;
} 
MCDACTR_a = BEDACTR;
 /* line 3740: */
(*Lmode) = ICDACTR_l;
 /* line 3741: */
 /* line 3743: */
 /* line 3744: */
if ( (HCDACTR_rr!=0) )
{ 
 /* line 3745: */
CEDACTR = HCDACTR_rr;
} 
else
{ 
CEDACTR = JCDACTR_r;
} 
(*Rmode) = CEDACTR;
 /* line 3746: */
(*Ans) = MCDACTR_a;
 /* line 3747: */
(*Biop) = (-((16*KCDACTR_b)+OCDACTR_version));
 /* line 3748: */
 /* line 3749: */
 /* line 3750: */
ZBDACTR = A68_TRUE;
goto ACDACTR;
CCDACTR_false:
 /* line 3751: */
 /* line 3752: */
ZBDACTR = A68_FALSE;
ACDACTR: ;
} 
} 
A_PROC_EXIT(findbiop);
return( ZBDACTR );
} 
#undef NL

A_STATIC A68_VOID  FEDACTR_readcom(A68_INT  Commenttype, void *NonLocals)
#define NL(x) (((GEDACTR_readcom *)NonLocals)->x)
{ 
A68_INT  JEDACTR_i;
A68_INT  KEDACTR_j;
A68_INT  LEDACTR_startcopy;
A68_INT  MEDACTR_endcopy;
A68_INT  NEDACTR;  /* clause result */
A68_88  OEDACTR;  /* collateral clause result */
A68_VC  PEDACTR;  /* OPERATORS - trim index */
A68_106  QEDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  REDACTR;  /* YIELD */
A68_CHAR * SEDACTR;  /* YIELD */
A68_INT  TEDACTR;  /* YIELD */
A68_INT  UEDACTR;  /* YIELD */
A68_BOOL  VEDACTR;  /* clause result */
A68_INT  WEDACTR;  /* clause result */
A68_BOOL  XEDACTR;  /* optbool result */
A68_BOOL  YEDACTR;  /* optbool result */
A68_88  ZEDACTR;  /* collateral clause result */
A68_VC  AFDACTR;  /* OPERATORS - trim index */
A68_106  BFDACTR;  /* OPERATORS - mode -> union mode */
A68_88  CFDACTR;  /* collateral clause result */
A68_VC  DFDACTR;  /* OPERATORS - trim index */
A68_106  EFDACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(readcom);
 /* line 3755: */
{ 
 /* line 3756: */
 /* line 3757: */
if ( (Commenttype>=GCBACTR_rcpragmat) )
{ 
 /* line 3758: */
 /* line 3759: */
NEDACTR = ((*NL(LSAACTR_tind))+1);
} 
else
{ 
NEDACTR = 0;
} 
LEDACTR_startcopy = NEDACTR;
 /* line 3761: */
IEDACTR_l:
for ( ;; )
{ 
 /* line 3762: */
if ( ((*NL(LSAACTR_tind))==(*NL(MSAACTR_textend))) )
{ 
 /* line 3763: */
if ( (LEDACTR_startcopy>0) )
{ 
 /* line 3764: */
OEDACTR.All = A68_FALSE;
 /* line 3765: */
OEDACTR.Pr = A_VTRIM(PEDACTR,(NL(HSAACTR_textbuff)),A_VTSCRIPT(&(PEDACTR.upb),(NL(HSAACTR_textbuff)).upb,LEDACTR_startcopy,(*NL(LSAACTR_tind))));
A_CALLPROC(NL(Output),(A_UNITE(QEDACTR,mode20,20,OEDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(QEDACTR,mode20,20,OEDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 3766: */
 /* line 3767: */
LEDACTR_startcopy = 0;
} 
 /* line 3768: */
(*NL(LSAACTR_tind)) = 0;
 /* line 3769: */
 /* line 3770: */
(*NL(MSAACTR_textend))-=1 ;
if ( !A_CALLPROC(NL(Input),(NL(LBBACTR_textbuff1), NL(MSAACTR_textend)),(NL(LBBACTR_textbuff1), NL(MSAACTR_textend),(NL(Input)).nonlocals)) )
{ 
(*NL(SIBACTR_moreinput)) = A68_FALSE;
 /* line 3771: */
 /* line 3773: */
A_CALLPROC(NL(VJBACTR_abort),(112),(112,(NL(VJBACTR_abort)).nonlocals));
} 
 /* line 3774: */
 /* line 3775: */
REDACTR = (*NL(MSAACTR_textend))+=1 ;
SEDACTR = (&A_VINDEX(NL(HSAACTR_textbuff),REDACTR)) ;
(*SEDACTR) = ' ';
} 
 /* line 3781: */
TEDACTR = (*NL(LSAACTR_tind))+=1 ;
UEDACTR = (A68_INT)(unsigned char)(*(&A_VINDEX(NL(HSAACTR_textbuff),TEDACTR))) ;
JEDACTR_i = (*(&((&A_R1INDEX(NL(Charset),UEDACTR))->Type)));
 /* line 3783: */
 /* line 3784: */
VEDACTR = (JEDACTR_i<ASAACTR_bold);
if ( !VEDACTR ) break;
/*SKIP*/;
}
 /* line 3786: */
 /* line 3788: */
 /* line 3789: */
if ( (JEDACTR_i==8) )
{ 
 /* line 3790: */
WEDACTR = (*NL(LSAACTR_tind));
} 
else
{ 
WEDACTR = (-1);
} 
JEDACTR_i = WEDACTR;
 /* line 3791: */
MEDACTR_endcopy = (*NL(LSAACTR_tind))-=1;
 /* line 3792: */
KEDACTR_j = A_CALLPROC(NL(ZJBACTR_primread),(),((NL(ZJBACTR_primread)).nonlocals));
 /* line 3794: */
XEDACTR = (KEDACTR_j<BCBACTR_rcmatchcom);
if ( ! XEDACTR )
{ /* line 3795: */
XEDACTR = (KEDACTR_j>=CCBACTR_rcnewline);
}
if ( XEDACTR )
{ 
 /* line 3796: */
if ( (Commenttype!=KEDACTR_j) )
{ 
if ( (JEDACTR_i>=0) )
{ 
(*NL(LSAACTR_tind)) = JEDACTR_i;
} 
 /* line 3797: */
 /* line 3798: */
 /* line 3799: */
goto IEDACTR_l;
} 
} 
else
{ 
YEDACTR = (KEDACTR_j!=(Commenttype+1));
if ( ! YEDACTR )
{ /* line 3800: */
YEDACTR = (KEDACTR_j==BCBACTR_rcmatchcom);
}
if ( YEDACTR )
{ 
 /* line 3801: */
if ( ((A68_INT )(A68_BITS )((A68_BITS )KEDACTR_j&NQAACTR_z1)==1) )
{ 
 /* line 3802: */
if ( (LEDACTR_startcopy>0) )
{ 
 /* line 3803: */
ZEDACTR.All = A68_FALSE;
 /* line 3804: */
ZEDACTR.Pr = A_VTRIM(AFDACTR,(NL(HSAACTR_textbuff)),A_VTSCRIPT(&(AFDACTR.upb),(NL(HSAACTR_textbuff)).upb,LEDACTR_startcopy,MEDACTR_endcopy));
A_CALLPROC(NL(Output),(A_UNITE(BFDACTR,mode20,20,ZEDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(BFDACTR,mode20,20,ZEDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 3805: */
 /* line 3806: */
LEDACTR_startcopy = 0;
} 
 /* line 3807: */
 /* line 3808: */
A_CALLPROC(NL(EEDACTR_readcom),(KEDACTR_j),(KEDACTR_j,(NL(EEDACTR_readcom)).nonlocals));
} 
else
{ 
 /* line 3810: */
A_CALLPROC(NL(QJBACTR_fault),(113),(113,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 3811: */
 /* line 3812: */
goto IEDACTR_l;
} 
} 
 /* line 3814: */
 /* line 3815: */
if ( (LEDACTR_startcopy>0) )
{ 
CFDACTR.All = A68_TRUE;
CFDACTR.Pr = A_VTRIM(DFDACTR,(NL(HSAACTR_textbuff)),A_VTSCRIPT(&(DFDACTR.upb),(NL(HSAACTR_textbuff)).upb,LEDACTR_startcopy,MEDACTR_endcopy));
 /* line 3816: */
 /* line 3817: */
A_CALLPROC(NL(Output),(A_UNITE(EFDACTR,mode20,20,CFDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(EFDACTR,mode20,20,CFDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
} 
A_PROC_EXIT(readcom);
return;
} 
#undef NL

A_STATIC A68_INT  HFDACTR_unlook(void *NonLocals)
#define NL(x) (((IFDACTR_unlook *)NonLocals)->x)
{ 
A68_INT  JFDACTR;  /* clause result */
A_PROC_ENTRY(unlook);
 /* line 3823: */
 /* line 3824: */
switch ( (*NL(AEBACTR_lkinserts))+=1 )
{ 
case 1: 
{ 
if ( ((*NL(BEBACTR_lkmodeins))==0) )
{ 
(*NL(AEBACTR_lkinserts)) = (-1);
} 
 /* line 3825: */
 /* line 3826: */
 /* line 3828: */
JFDACTR = 24;
} 
break;
case 2: 
{ 
 /* line 3829: */
if ( ((*NL(YDBACTR_lkids))==YQAACTR_nillkids) )
{ 
 /* line 3830: */
(*NL(AEBACTR_lkinserts)) = (-1);
} 
 /* line 3831: */
 /* line 3832: */
 /* line 3833: */
JFDACTR = (*NL(BEBACTR_lkmodeins));
} 
break;
default: 
 /* line 3834: */
 /* line 3836: */
if ( ((A68_BITS )((A68_BITS )(*NL(AEBACTR_lkinserts))&NQAACTR_z1)==MQAACTR_z) )
{ 
 /* line 3837: */
JFDACTR = 28;
} 
else
{ 
(*NL(PSAACTR_ident)) = (*(&((*NL(YDBACTR_lkids))->Id)));
 /* line 3838: */
(*NL(TSAACTR_idhash)) = (*(&((*NL(YDBACTR_lkids))->Idhash)));
 /* line 3839: */
(*NL(SSAACTR_idsize)) = (*(&((*NL(YDBACTR_lkids))->Idsize)));
 /* line 3840: */
 /* line 3841: */
if ( (((*NL(YDBACTR_lkids)) = (*(&((*NL(YDBACTR_lkids))->Rest))))==YQAACTR_nillkids) )
{ 
(*NL(AEBACTR_lkinserts)) = (-1);
 /* line 3842: */
 /* line 3843: */
(*NL(ZDBACTR_lkend)) = NL(YDBACTR_lkids);
} 
 /* line 3844: */
 /* line 3845: */
 /* line 3846: */
JFDACTR = 32;
} 
break;
} 
A_PROC_EXIT(unlook);
return( JFDACTR );
} 
#undef NL

A_STATIC A68_INT  MFDACTR_reader(A68_INT  Readertype, void *NonLocals)
#define NL(x) (((NFDACTR_reader *)NonLocals)->x)
{ 
A68_INT  OFDACTR_i;
A68_INT  PFDACTR_r;
A68_INT  QFDACTR_t;
A68_INT  RFDACTR_ans;
A68_INT  SFDACTR_case;
A68_110 * TFDACTR_ri;
A68_BOOL  UFDACTR_bb;
A68_31  VFDACTR_id1;
A68_BOOL  WFDACTR;  /* optbool result */
A68_INT  BGDACTR;  /* clause result */
A68_INT  CGDACTR;  /* YIELD */
A68_CHAR * DGDACTR;  /* YIELD */
A68_BOOL  EGDACTR;  /* optbool result */
A68_INT  FGDACTR;  /* clause result */
A68_BOOL  GGDACTR;  /* optbool result */
A68_128  LGDACTR;  /* OPERATORS - simple index */
A68_VC  MGDACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NGDACTR;  /* OPERATORS - istruct -> vector */
A68_31  OGDACTR;  /* OPERATORS - istruct -> vector */
A68_111  PGDACTR;  /* united object - for case conformity */
A68_109 * QGDACTR_op;
A68_INT  RGDACTR;  /* ADICOPS - ABS INT */
A68_52 * SGDACTR_ra;
A68_INT  TGDACTR;  /* clause result */
A68_INT  UGDACTR;  /* YIELD */
A68_BOOL  VGDACTR;  /* optbool result */
A68_110  WGDACTR;  /* collateral clause result */
A68_111  XGDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  YGDACTR;  /* YIELD */
A68_110 * ZGDACTR;  /* YIELD */
A68_110 ** AHDACTR;  /* YIELD */
A68_BOOL  BHDACTR;  /* optbool result */
A68_INT * CHDACTR;  /* YIELD */
A68_BOOL  DHDACTR;  /* optbool result */
A68_INT  EHDACTR;  /* YIELD */
A68_INT  FHDACTR;  /* YIELD */
A68_BOOL  GHDACTR;  /* optbool result */
A68_BOOL  HHDACTR;  /* optbool result */
A68_INT  IHDACTR;  /* YIELD */
A68_BOOL  JHDACTR;  /* optbool result */
A68_BOOL  KHDACTR;  /* optbool result */
A68_76  LHDACTR;  /* collateral clause result */
A68_VC  MHDACTR;  /* OPERATORS - trim index */
A68_106  NHDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  OHDACTR;  /* clause result */
A_PROC_ENTRY(reader);
 /* line 3851: */
 /* line 3852: */
{ 
SFDACTR_case = 0;
 /* line 3853: */
 /* line 3854: */
 /* line 3855: */
 /* line 3856: */
WFDACTR = ((*NL(EEBACTR_noflts))>0);
if ( WFDACTR )
{ /* line 3857: */
WFDACTR = ((*NL(ODBACTR_next))==(-1));
}
if ( WFDACTR )
{ 
 /* line 3858: */
(*NL(EEBACTR_noflts))-=1;
} 
 /* line 3859: */
 /* line 3860: */
if ( ((*NL(ITAACTR_supflts))>0) )
{ 
 /* line 3861: */
(*NL(ITAACTR_supflts))-=1;
} 
 /* line 3863: */
 /* line 3864: */
if ( ((*NL(AEBACTR_lkinserts))<0) )
{ 
YFDACTR_l:
 /* line 3865: */
 /* line 3866: */
if ( ((*NL(ODBACTR_next))==(-1)) )
{ 
 /* line 3867: */
 /* line 3868: */
if ( (Readertype==UDBACTR_formatreader) )
{ 
 /* line 3869: */
BGDACTR = A_CALLPROC(NL(CPBACTR_fprimread),(),((NL(CPBACTR_fprimread)).nonlocals));
} 
else
{ 
 /* line 3870: */
BGDACTR = A_CALLPROC(NL(ZJBACTR_primread),(),((NL(ZJBACTR_primread)).nonlocals));
} 
PFDACTR_r = BGDACTR;
} 
else
{ 
 /* line 3871: */
if ( ((*NL(ODBACTR_next))<1000) )
{ 
 /* line 3872: */
PFDACTR_r = (*NL(ODBACTR_next));
} 
else
{ 
RFDACTR_ans = ((*NL(ODBACTR_next))-900);
 /* line 3873: */
(*NL(ODBACTR_next)) = (-1);
 /* line 3874: */
 /* line 3875: */
goto AGDACTR_exit;
} 
 /* line 3876: */
 /* line 3877: */
(*NL(ODBACTR_next)) = (-1);
} 
 /* line 3879: */
 /* line 3880: */
 /* line 3881: */
switch ( ((PFDACTR_r-CCBACTR_rcnewline)+1) )
{ 
case 1: 
 /* line 3882: */
(*NL(MSAACTR_textend))-=1 ;
if ( A_CALLPROC(NL(Input),(NL(LBBACTR_textbuff1), NL(MSAACTR_textend)),(NL(LBBACTR_textbuff1), NL(MSAACTR_textend),(NL(Input)).nonlocals)) )
{ 
(*NL(JBBACTR_oldtind)) = (*NL(LSAACTR_tind)) = 0;
 /* line 3883: */
CGDACTR = (*NL(MSAACTR_textend))+=1 ;
DGDACTR = (&A_VINDEX(NL(HSAACTR_textbuff),CGDACTR)) ;
(*DGDACTR) = ' ';
 /* line 3884: */
 /* line 3885: */
goto YFDACTR_l;
} 
else
{ 
(*NL(SIBACTR_moreinput)) = A68_FALSE;
 /* line 3886: */
 /* line 3887: */
 /* line 3889: */
A_CALLPROC(NL(VJBACTR_abort),(114),(114,(NL(VJBACTR_abort)).nonlocals));
} 
break;
case 2: 
 /* line 3891: */
RFDACTR_ans = HCBACTR_illegaltok;
break;
case 3: 
{ 
RFDACTR_ans = PCBACTR_identtok;
 /* line 3892: */
 /* line 3893: */
if ( (Readertype==TDBACTR_screader) )
{ 
QFDACTR_t = (*NL(LSAACTR_tind));
 /* line 3894: */
 /* line 3895: */
if ( (A_CALLPROC(NL(ZJBACTR_primread),(),((NL(ZJBACTR_primread)).nonlocals))==FCBACTR_rccolon) )
{ 
 /* line 3896: */
RFDACTR_ans = OCBACTR_labeltok;
} 
else
{ 
 /* line 3897: */
 /* line 3898: */
 /* line 3899: */
 /* line 3901: */
(*NL(LSAACTR_tind)) = QFDACTR_t;
} 
} 
} 
break;
case 4: 
{ 
(*NL(ODBACTR_next)) = VCBACTR_powertentok;
 /* line 3902: */
 /* line 3903: */
 /* line 3905: */
RFDACTR_ans = QCBACTR_intdentok;
} 
break;
case 5: 
EGDACTR = (Readertype==SDBACTR_ucreader);
if ( EGDACTR )
{ /* line 3907: */
EGDACTR = ((*NL(MFBACTR_t1))!=33);
}
 /* line 3908: */
if ( EGDACTR )
{ 
 /* line 3909: */
FGDACTR = XCBACTR_colonhtok;
} 
else
{ 
 /* line 3911: */
FGDACTR = ICBACTR_colontok;
} 
 /* line 3912: */
RFDACTR_ans = FGDACTR;
break;
default: 
GGDACTR = (PFDACTR_r>=YCBACTR_biplus);
if ( ! GGDACTR )
{GGDACTR = (PFDACTR_r==RCBACTR_otherindtok);
}
if ( ! GGDACTR )
{ /* line 3913: */
GGDACTR = (PFDACTR_r==SCBACTR_otheroptok);
}
if ( GGDACTR )
{ 
LGDACTR = (*(&((*NL(QYAACTR_globcurrent))->Indics))) ;
TFDACTR_ri = (*(&A_VINDEX(LGDACTR,(*NL(RSAACTR_comphash)))));
 /* line 3914: */
(*NL(KDBACTR_cindic)) = (A68_110 *)A68_NIL;
 /* line 3915: */
(*NL(LDBACTR_cinst)) = (A68_108 *)A68_NIL;
 /* line 3916: */
(*NL(MDBACTR_cbiop)) = 0;
 /* line 3917: */
(*NL(NDBACTR_clibop)) = A68_FALSE;
 /* line 3918: */
IGDACTR_aa:
for ( ;; )
{ 
 /* line 3919: */
if ( !((TFDACTR_ri!=SQAACTR_nilind)) ) break;
 /* line 3920: */
OGDACTR = (*(&(TFDACTR_ri->Name))) ;
if ( A_VC_EQ(A_HISVEC(MGDACTR,(*NL(OSAACTR_compsymb)),32,A68_CHAR ),A_HISVEC(NGDACTR,OGDACTR,32,A68_CHAR )) )
{ 
(*NL(KDBACTR_cindic)) = TFDACTR_ri;
 /* line 3921: */
 /* line 3922: */
PGDACTR = (*(&(TFDACTR_ri->U))) ;
switch ( PGDACTR.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE108)  */
QGDACTR_op = (PGDACTR.data.mode1);
 /* line 3923: */
{ 
 /* line 3924: */
RGDACTR = (*(&(QGDACTR_op->Prio))) ;
RFDACTR_ans = (HCBACTR_illegaltok+A_ABS(RGDACTR));
 /* line 3925: */
(*NL(LDBACTR_cinst)) = (*(&(QGDACTR_op->I)));
 /* line 3926: */
 /* line 3927: */
if ( (PFDACTR_r>=YCBACTR_biplus) )
{ 
 /* line 3928: */
(*NL(MDBACTR_cbiop)) = PFDACTR_r;
} 
 /* line 3929: */
 /* line 3930: */
 /* line 3931: */
if ( ((*(&(TFDACTR_ri->Level)))!=0) )
{ 
 /* line 3932: */
 /* line 3933: */
 /* line 3934: */
(*NL(NDBACTR_clibop)) = A68_FALSE;
} 
} 
break;
case 2: /* REF STRUCT(INT,INT,REF MODE53)  */
SGDACTR_ra = (PGDACTR.data.mode2);
 /* line 3935: */
{ 
RFDACTR_ans = WCBACTR_modenametok;
 /* line 3936: */
 /* line 3937: */
 /* line 3938: */
(*NL(JDBACTR_decmode)) = SGDACTR_ra;
} 
break;
default: 
 /* line 3939: */
RFDACTR_ans = JCBACTR_faultindtok;
break;
} 
 /* line 3940: */
 /* line 3941: */
goto KGDACTR_out;
} 
else
{ 
 /* line 3942: */
 /* line 3943: */
TFDACTR_ri = (*(&(TFDACTR_ri->Rest)));
} 
}
 /* line 3944: */
(*NL(NDBACTR_clibop)) = A68_FALSE;
 /* line 3946: */
 /* line 3947: */
if ( (PFDACTR_r>=YCBACTR_biplus) )
{ 
(*NL(MDBACTR_cbiop)) = PFDACTR_r;
 /* line 3948: */
 /* line 3949: */
 /* line 3950: */
if ( (PFDACTR_r>=BDBACTR_monadic) )
{ 
TGDACTR = 1;
} 
else
{ 
 /* line 3951: */
 /* line 3952: */
UGDACTR = ((PFDACTR_r-YCBACTR_biplus)+1) ;
TGDACTR = A_VINDEX(NL(KIBACTR_diops),UGDACTR).Prio;
} 
RFDACTR_ans = (TGDACTR+HCBACTR_illegaltok);
} 
else
{ 
 /* line 3953: */
 /* line 3954: */
if ( ((*NL(QDBACTR_look))==2) )
{ 
 /* line 3955: */
switch ( SFDACTR_case+=1 )
{ 
case 1: 
 /* line 3956: */
TFDACTR_ri = (*(&A_VINDEX(NL(MABACTR_libinds),(*NL(RSAACTR_comphash)))));
break;
case 2: 
{ 
 /* line 3957: */
 /* line 3958: */
VGDACTR = ((*NL(BUAACTR_typechar1))!=3);
if ( VGDACTR )
{VGDACTR = ((*NL(BUAACTR_typechar1))!=6);
}
 /* line 3959: */
A_CALLPROC((*NL(FFDACTR_bumodule)),(NL(OSAACTR_compsymb), (2+(!VGDACTR))),(NL(OSAACTR_compsymb), (2+(!VGDACTR)),((*NL(FFDACTR_bumodule))).nonlocals));
 /* line 3960: */
 /* line 3961: */
 /* line 3962: */
TFDACTR_ri = (*(&A_VINDEX(NL(MABACTR_libinds),(*NL(RSAACTR_comphash)))));
} 
break;
case 3: 
{ 
 /* line 3963: */
 /* line 3964: */
WGDACTR.Name = (*NL(OSAACTR_compsymb));
WGDACTR.Level = 1;
WGDACTR.Scope = 0;
YGDACTR = 1 ;
WGDACTR.U = A_UNITE(XGDACTR,mode3,3,YGDACTR);
WGDACTR.Rest = (*(&A_VINDEX(NL(MABACTR_libinds),(*NL(RSAACTR_comphash)))));
ZGDACTR = A_HEAP(A68_110 ) ;
(*ZGDACTR) = WGDACTR ;
AHDACTR = (&A_VINDEX(NL(MABACTR_libinds),(*NL(RSAACTR_comphash)))) ;
TFDACTR_ri = (*AHDACTR) = ZGDACTR;
 /* line 3965: */
A_CALLPROC(NL(PZBACTR_faultp),(115, 0, 0, NL(OSAACTR_compsymb)),(115, 0, 0, NL(OSAACTR_compsymb),(NL(PZBACTR_faultp)).nonlocals));
 /* line 3967: */
 /* line 3968: */
 /* line 3969: */
(*NL(ITAACTR_supflts)) = FEBACTR_fltgap;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 3970: */
(*NL(NDBACTR_clibop)) = A68_TRUE;
 /* line 3971: */
 /* line 3972: */
goto IGDACTR_aa;
} 
else
{ 
BHDACTR = ((*NL(QDBACTR_look))==1);
if ( BHDACTR )
{ /* line 3973: */
BHDACTR = (SFDACTR_case==0);
}
if ( BHDACTR )
{ 
SFDACTR_case = 1;
 /* line 3974: */
TFDACTR_ri = (*(&A_VINDEX(NL(MABACTR_libinds),(*NL(RSAACTR_comphash)))));
 /* line 3975: */
 /* line 3976: */
goto IGDACTR_aa;
} 
 /* line 3977: */
 /* line 3978: */
RFDACTR_ans = RCBACTR_otherindtok;
} 
} 
 /* line 3979: */
KGDACTR_out:
 /* line 3980: */
/*SKIP*/;
} 
else
{ 
 /* line 3981: */
if ( (PFDACTR_r>=HCBACTR_illegaltok) )
{ 
 /* line 3982: */
RFDACTR_ans = PFDACTR_r;
} 
else
{ 
 /* line 3983: */
if ( (PFDACTR_r<36) )
{ 
 /* line 3984: */
RFDACTR_ans = (PFDACTR_r+121);
} 
else
{ 
 /* line 3986: */
if ( (PFDACTR_r<=44) )
{ 
RFDACTR_ans = KCBACTR_bangtok;
 /* line 3987: */
(*NL(PDBACTR_bangtype)) = (PFDACTR_r+5);
 /* line 3988: */
 /* line 3989: */
(*NL(ODBACTR_next)) = XCBACTR_colonhtok;
} 
else
{ 
 /* line 3991: */
if ( (PFDACTR_r<=49) )
{ 
RFDACTR_ans = KCBACTR_bangtok;
 /* line 3992: */
 /* line 3993: */
(*NL(PDBACTR_bangtype)) = PFDACTR_r;
} 
else
{ 
 /* line 3994: */
if ( (PFDACTR_r<ZBBACTR_rccrd) )
{ 
CHDACTR = (&A_VINDEX(NL(TBBACTR_brackets),(*NL(VBBACTR_brind)))) ;
(*CHDACTR) = (PFDACTR_r+4);
 /* line 3995: */
 /* line 3996: */
if ( ((*NL(VBBACTR_brind))<64) )
{ 
 /* line 3997: */
(*NL(VBBACTR_brind))+=1;
} 
else
{ 
 /* line 3999: */
A_CALLPROC(NL(VJBACTR_abort),(208),(208,(NL(VJBACTR_abort)).nonlocals));
} 
 /* line 4000: */
 /* line 4001: */
RFDACTR_ans = MCBACTR_ordtok;
} 
else
{ 
 /* line 4002: */
if ( (PFDACTR_r<ACBACTR_rccomment) )
{ 
 /* line 4003: */
if ( ((*NL(VBBACTR_brind))<=2) )
{ 
 /* line 4004: */
DHDACTR = ((*NL(VBBACTR_brind))==2);
if ( DHDACTR )
{DHDACTR = (*NL(HEBACTR_inprogram));
}
if ( DHDACTR )
{ /* line 4005: */
EHDACTR = 1 ;
DHDACTR = (PFDACTR_r!=(*(&A_VINDEX(NL(TBBACTR_brackets),EHDACTR))));
}
if ( DHDACTR )
{ 
 /* line 4007: */
 /* line 4008: */
A_CALLPROC(NL(QJBACTR_fault),(116),(116,(NL(QJBACTR_fault)).nonlocals));
} 
} 
else
{ 
 /* line 4009: */
FHDACTR = (*NL(VBBACTR_brind))-=1 ;
if ( ((QFDACTR_t = (*(&A_VINDEX(NL(TBBACTR_brackets),FHDACTR))))!=PFDACTR_r) )
{ 
GHDACTR = ((*NL(YBBACTR_wronglevel))==(*NL(VBBACTR_brind)));
if ( GHDACTR )
{ /* line 4010: */
GHDACTR = ((*NL(WBBACTR_wrongord))==PFDACTR_r);
}
if ( GHDACTR )
{ 
A_CALLPROC(NL(QJBACTR_fault),(116),(116,(NL(QJBACTR_fault)).nonlocals));
 /* line 4012: */
(*NL(VBBACTR_brind))+=1;
 /* line 4013: */
(*NL(XBBACTR_wrongcrd)) = (*NL(WBBACTR_wrongord)) = 0;
 /* line 4014: */
 /* line 4015: */
goto YFDACTR_l;
} 
else
{ 
HHDACTR = ((*NL(YBBACTR_wronglevel))==(*NL(VBBACTR_brind)));
if ( HHDACTR )
{ /* line 4016: */
HHDACTR = (QFDACTR_t==(*NL(XBBACTR_wrongcrd)));
}
if ( HHDACTR )
{ /* line 4017: */
IHDACTR = ((*NL(VBBACTR_brind))-1) ;
HHDACTR = ((*(&A_VINDEX(NL(TBBACTR_brackets),IHDACTR)))==PFDACTR_r);
}
if ( HHDACTR )
{ 
A_CALLPROC(NL(QJBACTR_fault),(116),(116,(NL(QJBACTR_fault)).nonlocals));
 /* line 4019: */
(*NL(VBBACTR_brind))-=1;
 /* line 4020: */
 /* line 4021: */
(*NL(XBBACTR_wrongcrd)) = (*NL(WBBACTR_wrongord)) = 0;
} 
else
{ 
(*NL(XBBACTR_wrongcrd)) = PFDACTR_r;
 /* line 4022: */
(*NL(WBBACTR_wrongord)) = QFDACTR_t;
 /* line 4023: */
(*NL(YBBACTR_wronglevel)) = ((*NL(VBBACTR_brind))-1);
 /* line 4025: */
 /* line 4026: */
 /* line 4027: */
 /* line 4028: */
 /* line 4029: */
VFDACTR_id1 = A_CALLPROC(NL(KTAACTR_idmess),(((QFDACTR_t-ZBBACTR_rccrd)+53)),(((QFDACTR_t-ZBBACTR_rccrd)+53),(NL(KTAACTR_idmess)).nonlocals)) ;
A_CALLPROC(NL(PZBACTR_faultp),(118, 0, 0, (&VFDACTR_id1)),(118, 0, 0, (&VFDACTR_id1),(NL(PZBACTR_faultp)).nonlocals));
} 
} 
} 
} 
 /* line 4031: */
 /* line 4032: */
RFDACTR_ans = NCBACTR_crdtok;
} 
else
{ 
JHDACTR = (PFDACTR_r>=BCBACTR_rcmatchcom);
if ( JHDACTR )
{ /* line 4033: */
JHDACTR = (PFDACTR_r<GCBACTR_rcpragmat);
}
if ( JHDACTR )
{ /* line 4034: */
JHDACTR = ((A68_INT )(A68_BITS )((A68_BITS )PFDACTR_r&NQAACTR_z1)==0);
}
if ( JHDACTR )
{ 
 /* line 4036: */
A_CALLPROC(NL(QJBACTR_fault),(201),(201,(NL(QJBACTR_fault)).nonlocals));
} 
else
{ 
QFDACTR_t = (*NL(LSAACTR_tind));
 /* line 4037: */
(*NL(HBBACTR_incom)) = A68_TRUE;
 /* line 4038: */
A_CALLPROC(NL(EEDACTR_readcom),(PFDACTR_r),(PFDACTR_r,(NL(EEDACTR_readcom)).nonlocals));
 /* line 4039: */
(*NL(HBBACTR_incom)) = A68_FALSE;
 /* line 4040: */
KHDACTR = (Readertype==UDBACTR_formatreader);
if ( KHDACTR )
{ /* line 4041: */
KHDACTR = ((*NL(LSAACTR_tind))<QFDACTR_t);
}
if ( KHDACTR )
{ 
LHDACTR.Nochars = (-(*NL(NSAACTR_find)));
 /* line 4042: */
LHDACTR.Base = 0;
 /* line 4043: */
LHDACTR.Chars = A_VTRIM(MHDACTR,(NL(JSAACTR_globfbuff)),A_VTSCRIPT(&(MHDACTR.upb),(NL(JSAACTR_globfbuff)).upb,1,(*NL(NSAACTR_find))));
A_CALLPROC(NL(Output),(A_UNITE(NHDACTR,mode35,35,LHDACTR), ((*NL(FZAACTR_outlevel))+1)),(A_UNITE(NHDACTR,mode35,35,LHDACTR), ((*NL(FZAACTR_outlevel))+1),(NL(Output)).nonlocals));
 /* line 4044: */
(*NL(IBBACTR_noofstrings))+=(*NL(NSAACTR_find));
 /* line 4045: */
 /* line 4046: */
(*NL(NSAACTR_find)) = 0;
} 
 /* line 4047: */
 /* line 4048: */
(*NL(JBBACTR_oldtind)) = (*NL(LSAACTR_tind));
} 
 /* line 4049: */
 /* line 4050: */
 /* line 4051: */
goto YFDACTR_l;
} 
} 
} 
} 
} 
} 
} 
break;
} 
 /* line 4053: */
AGDACTR_exit:
 /* line 4055: */
 /* line 4056: */
OHDACTR = (RFDACTR_ans-HCBACTR_illegaltok);
} 
else
{ 
 /* line 4057: */
OHDACTR = A_CALLPROC(NL(GFDACTR_unlook),(),((NL(GFDACTR_unlook)).nonlocals));
} 
} 
A_PROC_EXIT(reader);
return( OHDACTR );
} 
#undef NL

A_STATIC A68_VOID  SHDACTR_generator(A68_BOOL  QHDACTR_anonymous, A68_198  *ReturnedValue, void *NonLocals)
#define NL(x) (((THDACTR_generator *)NonLocals)->x)
{ 
A68_198  UHDACTR;  /* clause result */
A68_198  VHDACTR;  /* OPERATORS - dynamic generator */
{ 
VHDACTR.upb = 200 ;
( QHDACTR_anonymous? A_VLOC(A68_70 ,VHDACTR): A_VHEAP(A68_70 ,VHDACTR) );
UHDACTR = VHDACTR;
} 
*ReturnedValue = (UHDACTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  CIDACTR_equality(A68_INT  I, A68_INT  J, A68_INT  Lastdone, void *NonLocals)
#define NL(x) (((DIDACTR_equality *)NonLocals)->x)
{ 
A68_188  KIDACTR_f;   /* proc value of non-global proc */
A68_jmp_buf FIDACTR_exit;
A68_70  NJDACTR_p;
A68_66  OJDACTR_m2;
A68_54 * PJDACTR_ml1;
A68_54 * QJDACTR_ml2;
A68_58 * RJDACTR_sl1;
A68_58 * SJDACTR_sl2;
A68_70  TJDACTR;  /* collateral clause result */
A68_INT  UJDACTR;  /* YIELD */
A68_70 * VJDACTR;  /* YIELD */
A68_INT  WJDACTR_z;
A68_INT  XJDACTR;  /* YIELD */
A68_INT  YJDACTR;  /* YIELD */
A68_66  ZJDACTR;  /* united object - for case conformity */
A68_55 * AKDACTR_prc1;
A68_66  BKDACTR;  /* united object - for case conformity */
A68_55 * CKDACTR_prc2;
A68_57 * DKDACTR_p1;
A68_66  EKDACTR;  /* united object - for case conformity */
A68_57 * FKDACTR_p2;
A68_BOOL  GKDACTR;  /* optbool result */
A68_BOOL  HKDACTR;  /* optbool result */
A68_59 * IKDACTR_s1;
A68_66  JKDACTR;  /* united object - for case conformity */
A68_59 * KKDACTR_s2;
A68_BOOL  LKDACTR;  /* optbool result */
A68_VC  MKDACTR;  /* OPERATORS - istruct -> vector */
A68_31  NKDACTR;  /* OPERATORS - istruct -> vector */
A68_VC  OKDACTR;  /* OPERATORS - istruct -> vector */
A68_31  PKDACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  QKDACTR;  /* optbool result */
A68_56 * RKDACTR_u1;
A68_66  SKDACTR;  /* united object - for case conformity */
A68_56 * TKDACTR_u2;
A68_BOOL  UKDACTR;  /* optbool result */
A68_BOOL  VKDACTR;  /* optbool result */
A68_62 * WKDACTR_a1;
A68_66  XKDACTR;  /* united object - for case conformity */
A68_62 * YKDACTR_a2;
A68_BOOL  ZKDACTR;  /* optbool result */
A68_BOOL  ALDACTR;  /* clause result */
A68_60 * BLDACTR_is1;
A68_66  CLDACTR;  /* united object - for case conformity */
A68_60 * DLDACTR_is2;
A68_64 * ELDACTR_sten1;
A68_66  FLDACTR;  /* united object - for case conformity */
A68_64 * GLDACTR_sten2;
A68_61 * HLDACTR_v1;
A68_66  ILDACTR;  /* united object - for case conformity */
A68_61 * JLDACTR_v2;
A68_BOOL  KLDACTR;  /* clause result */
A68_BOOL  LLDACTR;  /* clause result */
if ( sigsetjmp( FIDACTR_exit.label,1) ) goto GIDACTR_exit;
A_PROC_ENTRY(equality);
 /* line 4071: */
 /* line 4072: */
{ 
A_CLOSURE( KIDACTR_f, LIDACTR_f, MIDACTR_f );
(( MIDACTR_f * ) ( KIDACTR_f.nonlocals )) -> FIDACTR_exit = FIDACTR_exit;
(( MIDACTR_f * ) ( KIDACTR_f.nonlocals )) -> Lastdone = Lastdone;
(( MIDACTR_f * ) ( KIDACTR_f.nonlocals )) -> KUAACTR_modes = NL(KUAACTR_modes);
(( MIDACTR_f * ) ( KIDACTR_f.nonlocals )) -> PHDACTR_last_flex = NL(PHDACTR_last_flex);
(( MIDACTR_f * ) ( KIDACTR_f.nonlocals )) -> WHDACTR_test_flex = NL(WHDACTR_test_flex);
 /* line 4111: */
 /* line 4112: */
 /* line 4113: */
 /* line 4114: */
 /* line 4115: */
(*NL(PHDACTR_last_flex)) = 1;
 /* line 4116: */
TJDACTR.I = I;
TJDACTR.J = J;
UJDACTR = 1 ;
VJDACTR = (&A_VINDEX((*NL(WHDACTR_test_flex)),UJDACTR)) ;
(*VJDACTR) = TJDACTR;
 /* line 4118: */
 /* line 4119: */
for ( WJDACTR_z = 1;;
WJDACTR_z += 1 ) 
{ 
 /* line 4120: */
if ( !((WJDACTR_z<=(*NL(PHDACTR_last_flex)))) ) break;
NJDACTR_p = (*(&A_VINDEX((*NL(WHDACTR_test_flex)),WJDACTR_z)));
 /* line 4121: */
XJDACTR = (*(&((&NJDACTR_p)->J))) ;
OJDACTR_m2 = (*(&A_VINDEX(NL(KUAACTR_modes),XJDACTR)));
 /* line 4122: */
 /* line 4123: */
YJDACTR = (*(&((&NJDACTR_p)->I))) ;
ZJDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),YJDACTR))) ;
switch ( ZJDACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
AKDACTR_prc1 = (ZJDACTR.data.mode6);
 /* line 4124: */
 /* line 4125: */
BKDACTR = OJDACTR_m2 ;
switch ( BKDACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
CKDACTR_prc2 = (BKDACTR.data.mode6);
 /* line 4126: */
 /* line 4127: */
A_CALLPROC(KIDACTR_f,((*(&(AKDACTR_prc1->Deproc))), (*(&(CKDACTR_prc2->Deproc)))),((*(&(AKDACTR_prc1->Deproc))), (*(&(CKDACTR_prc2->Deproc))),(KIDACTR_f).nonlocals));
break;
default: 
 /* line 4128: */
 /* line 4130: */
goto GIDACTR_exit;
break;
} 
break;
case 3: /* REF STRUCT(INT,REF MODE54)  */
DKDACTR_p1 = (ZJDACTR.data.mode3);
 /* line 4131: */
 /* line 4132: */
EKDACTR = OJDACTR_m2 ;
switch ( EKDACTR.mode )
{ 
case 3: /* REF STRUCT(INT,REF MODE54)  */
FKDACTR_p2 = (EKDACTR.data.mode3);
 /* line 4133: */
{ 
A_CALLPROC(KIDACTR_f,((*(&(DKDACTR_p1->Deproc))), (*(&(FKDACTR_p2->Deproc)))),((*(&(DKDACTR_p1->Deproc))), (*(&(FKDACTR_p2->Deproc))),(KIDACTR_f).nonlocals));
 /* line 4134: */
PJDACTR_ml1 = (*(&(DKDACTR_p1->Pars)));
 /* line 4135: */
QJDACTR_ml2 = (*(&(FKDACTR_p2->Pars)));
 /* line 4136: */
for ( ;; )
{ 
 /* line 4137: */
GKDACTR = (PJDACTR_ml1!=OQAACTR_nilml);
if ( GKDACTR )
{ /* line 4138: */
GKDACTR = (QJDACTR_ml2!=OQAACTR_nilml);
}
if ( !(GKDACTR) ) break;
A_CALLPROC(KIDACTR_f,((*(&(PJDACTR_ml1->Mode))), (*(&(QJDACTR_ml2->Mode)))),((*(&(PJDACTR_ml1->Mode))), (*(&(QJDACTR_ml2->Mode))),(KIDACTR_f).nonlocals));
 /* line 4139: */
PJDACTR_ml1 = (*(&(PJDACTR_ml1->Rest)));
 /* line 4140: */
 /* line 4141: */
QJDACTR_ml2 = (*(&(QJDACTR_ml2->Rest)));
}
 /* line 4142: */
 /* line 4143: */
HKDACTR = (PJDACTR_ml1!=OQAACTR_nilml);
if ( ! HKDACTR )
{ /* line 4144: */
HKDACTR = (QJDACTR_ml2!=OQAACTR_nilml);
}
if ( HKDACTR )
{ 
 /* line 4145: */
 /* line 4146: */
 /* line 4147: */
goto GIDACTR_exit;
} 
} 
break;
default: 
 /* line 4148: */
 /* line 4150: */
goto GIDACTR_exit;
break;
} 
break;
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
IKDACTR_s1 = (ZJDACTR.data.mode4);
 /* line 4151: */
 /* line 4152: */
JKDACTR = OJDACTR_m2 ;
switch ( JKDACTR.mode )
{ 
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
KKDACTR_s2 = (JKDACTR.data.mode4);
 /* line 4153: */
{ 
RJDACTR_sl1 = (*(&(IKDACTR_s1->Sels)));
 /* line 4154: */
SJDACTR_sl2 = (*(&(KKDACTR_s2->Sels)));
 /* line 4155: */
for ( ;; )
{ 
 /* line 4156: */
LKDACTR = (RJDACTR_sl1!=RQAACTR_nilsel);
if ( LKDACTR )
{LKDACTR = (SJDACTR_sl2!=RQAACTR_nilsel);
}
 /* line 4157: */
if ( LKDACTR )
{ /* line 4158: */
NKDACTR = (*(&(RJDACTR_sl1->Name))) ;
PKDACTR = (*(&(SJDACTR_sl2->Name))) ;
LKDACTR = A_VC_EQ(A_HISVEC(MKDACTR,NKDACTR,32,A68_CHAR ),A_HISVEC(OKDACTR,PKDACTR,32,A68_CHAR ));
}
if ( !(LKDACTR) ) break;
A_CALLPROC(KIDACTR_f,((*(&(RJDACTR_sl1->Mode))), (*(&(SJDACTR_sl2->Mode)))),((*(&(RJDACTR_sl1->Mode))), (*(&(SJDACTR_sl2->Mode))),(KIDACTR_f).nonlocals));
 /* line 4159: */
RJDACTR_sl1 = (*(&(RJDACTR_sl1->Rest)));
 /* line 4160: */
 /* line 4161: */
SJDACTR_sl2 = (*(&(SJDACTR_sl2->Rest)));
}
 /* line 4162: */
 /* line 4163: */
QKDACTR = (RJDACTR_sl1!=RQAACTR_nilsel);
if ( ! QKDACTR )
{ /* line 4164: */
QKDACTR = (SJDACTR_sl2!=RQAACTR_nilsel);
}
if ( QKDACTR )
{ 
 /* line 4165: */
 /* line 4166: */
 /* line 4167: */
goto GIDACTR_exit;
} 
} 
break;
default: 
 /* line 4168: */
 /* line 4170: */
goto GIDACTR_exit;
break;
} 
break;
case 2: /* REF STRUCT(INT,REF MODE54)  */
RKDACTR_u1 = (ZJDACTR.data.mode2);
 /* line 4171: */
 /* line 4172: */
SKDACTR = OJDACTR_m2 ;
switch ( SKDACTR.mode )
{ 
case 2: /* REF STRUCT(INT,REF MODE54)  */
TKDACTR_u2 = (SKDACTR.data.mode2);
 /* line 4173: */
{ 
PJDACTR_ml1 = (*(&(RKDACTR_u1->Modelist)));
 /* line 4174: */
QJDACTR_ml2 = (*(&(TKDACTR_u2->Modelist)));
 /* line 4175: */
for ( ;; )
{ 
 /* line 4176: */
UKDACTR = (PJDACTR_ml1!=OQAACTR_nilml);
if ( UKDACTR )
{ /* line 4177: */
UKDACTR = (QJDACTR_ml2!=OQAACTR_nilml);
}
if ( !(UKDACTR) ) break;
A_CALLPROC(KIDACTR_f,((*(&(PJDACTR_ml1->Mode))), (*(&(QJDACTR_ml2->Mode)))),((*(&(PJDACTR_ml1->Mode))), (*(&(QJDACTR_ml2->Mode))),(KIDACTR_f).nonlocals));
 /* line 4178: */
PJDACTR_ml1 = (*(&(PJDACTR_ml1->Rest)));
 /* line 4179: */
 /* line 4180: */
QJDACTR_ml2 = (*(&(QJDACTR_ml2->Rest)));
}
 /* line 4181: */
 /* line 4182: */
VKDACTR = (PJDACTR_ml1!=OQAACTR_nilml);
if ( ! VKDACTR )
{ /* line 4183: */
VKDACTR = (QJDACTR_ml2!=OQAACTR_nilml);
}
if ( VKDACTR )
{ 
 /* line 4184: */
 /* line 4185: */
 /* line 4186: */
goto GIDACTR_exit;
} 
} 
break;
default: 
 /* line 4187: */
 /* line 4189: */
goto GIDACTR_exit;
break;
} 
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
WKDACTR_a1 = (ZJDACTR.data.mode8);
 /* line 4190: */
 /* line 4191: */
XKDACTR = OJDACTR_m2 ;
switch ( XKDACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
YKDACTR_a2 = (XKDACTR.data.mode8);
 /* line 4192: */
 /* line 4193: */
ZKDACTR = ((*(&(WKDACTR_a1->Nods)))==(*(&(YKDACTR_a2->Nods))));
if ( ZKDACTR )
{ /* line 4194: */
if ( ((*(&(WKDACTR_a1->Deflex)))>=0) )
{ 
 /* line 4195: */
ALDACTR = ((*(&(YKDACTR_a2->Deflex)))>=0);
} 
else
{ 
 /* line 4196: */
 /* line 4197: */
ALDACTR = ((*(&(YKDACTR_a2->Deflex)))<0);
} 
ZKDACTR = ALDACTR;
}
if ( ZKDACTR )
{ 
 /* line 4198: */
A_CALLPROC(KIDACTR_f,((*(&(WKDACTR_a1->Mode))), (*(&(YKDACTR_a2->Mode)))),((*(&(WKDACTR_a1->Mode))), (*(&(YKDACTR_a2->Mode))),(KIDACTR_f).nonlocals));
} 
else
{ 
 /* line 4199: */
 /* line 4200: */
goto GIDACTR_exit;
} 
break;
default: 
 /* line 4201: */
 /* line 4203: */
goto GIDACTR_exit;
break;
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
BLDACTR_is1 = (ZJDACTR.data.mode5);
 /* line 4204: */
 /* line 4205: */
CLDACTR = OJDACTR_m2 ;
switch ( CLDACTR.mode )
{ 
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
DLDACTR_is2 = (CLDACTR.data.mode5);
 /* line 4206: */
 /* line 4207: */
if ( ((*(&(BLDACTR_is1->Length)))==(*(&(DLDACTR_is2->Length)))) )
{ 
 /* line 4208: */
A_CALLPROC(KIDACTR_f,((*(&(BLDACTR_is1->Imode))), (*(&(DLDACTR_is2->Imode)))),((*(&(BLDACTR_is1->Imode))), (*(&(DLDACTR_is2->Imode))),(KIDACTR_f).nonlocals));
} 
else
{ 
 /* line 4209: */
 /* line 4210: */
goto GIDACTR_exit;
} 
break;
default: 
 /* line 4211: */
 /* line 4213: */
goto GIDACTR_exit;
break;
} 
break;
case 9: /* REF STRUCT(INT,REF MODE63)  */
ELDACTR_sten1 = (ZJDACTR.data.mode9);
 /* line 4214: */
 /* line 4215: */
FLDACTR = OJDACTR_m2 ;
switch ( FLDACTR.mode )
{ 
case 9: /* REF STRUCT(INT,REF MODE63)  */
GLDACTR_sten2 = (FLDACTR.data.mode9);
 /* line 4216: */
 /* line 4217: */
A_CALLPROC(KIDACTR_f,((*(&(ELDACTR_sten1->Mode))), (*(&(GLDACTR_sten2->Mode)))),((*(&(ELDACTR_sten1->Mode))), (*(&(GLDACTR_sten2->Mode))),(KIDACTR_f).nonlocals));
break;
default: 
 /* line 4218: */
 /* line 4220: */
goto GIDACTR_exit;
break;
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
HLDACTR_v1 = (ZJDACTR.data.mode7);
 /* line 4221: */
 /* line 4222: */
ILDACTR = OJDACTR_m2 ;
switch ( ILDACTR.mode )
{ 
case 7: /* REF STRUCT(INT,INT,INT)  */
JLDACTR_v2 = (ILDACTR.data.mode7);
 /* line 4223: */
 /* line 4224: */
if ( ((*(&(HLDACTR_v1->Deflex)))>=0) )
{ 
 /* line 4225: */
KLDACTR = ((*(&(JLDACTR_v2->Deflex)))>=0);
} 
else
{ 
 /* line 4226: */
 /* line 4227: */
KLDACTR = ((*(&(JLDACTR_v2->Deflex)))<0);
} 
if ( KLDACTR )
{ 
 /* line 4228: */
A_CALLPROC(KIDACTR_f,((*(&(HLDACTR_v1->Vecmode))), (*(&(JLDACTR_v2->Vecmode)))),((*(&(HLDACTR_v1->Vecmode))), (*(&(JLDACTR_v2->Vecmode))),(KIDACTR_f).nonlocals));
} 
else
{ 
 /* line 4229: */
 /* line 4230: */
goto GIDACTR_exit;
} 
break;
default: 
 /* line 4231: */
 /* line 4232: */
goto GIDACTR_exit;
break;
} 
break;
default: 
 /* line 4233: */
 /* line 4234: */
goto GIDACTR_exit;
break;
} 
}
 /* line 4236: */
 /* line 4238: */
LLDACTR = A68_TRUE;
goto EIDACTR;
GIDACTR_exit:
 /* line 4239: */
LLDACTR = A68_FALSE;
EIDACTR: ;
} 
A_PROC_EXIT(equality);
return( LLDACTR );
} 
#undef NL

A_STATIC A68_BOOL  QLDACTR_mcond(A68_INT  A, A68_54 * Ml, A68_INT  X, void *NonLocals)
#define NL(x) (((RLDACTR_mcond *)NonLocals)->x)
{ 
A68_54 * SLDACTR_mx;
A68_54 * TLDACTR_el;
A68_58 * ULDACTR_sl;
A68_BOOL  VLDACTR;  /* optbool result */
A68_BOOL  WLDACTR;  /* clause result */
A68_54  XLDACTR;  /* collateral clause result */
A68_54 * YLDACTR;  /* YIELD */
A68_BOOL  ZLDACTR;  /* optbool result */
A68_66  AMDACTR;  /* united object - for case conformity */
A68_55 * BMDACTR_p;
A68_BOOL  CMDACTR;  /* optbool result */
A68_59 * DMDACTR_s;
A68_BOOL  EMDACTR;  /* optbool result */
A68_BOOL  FMDACTR;  /* optbool result */
A68_BOOL  GMDACTR;  /* clause result */
A68_62 * HMDACTR_ar;
A68_61 * IMDACTR_v;
A68_60 * JMDACTR_is;
A68_INT  KMDACTR;  /* clause result */
A68_56 * LMDACTR_u;
A68_BOOL  MMDACTR;  /* optbool result */
A_PROC_ENTRY(mcond);
 /* line 4245: */
{ 
SLDACTR_mx = Ml;
 /* line 4246: */
 /* line 4247: */
for ( ;; )
{ 
VLDACTR = (SLDACTR_mx!=OQAACTR_nilml);
if ( VLDACTR )
{ /* line 4248: */
VLDACTR = ((*(&(SLDACTR_mx->Mode)))!=A);
}
if ( !(VLDACTR) ) break;
SLDACTR_mx = (*(&(SLDACTR_mx->Rest)));
}
 /* line 4250: */
 /* line 4251: */
if ( (SLDACTR_mx!=OQAACTR_nilml) )
{ 
 /* line 4252: */
WLDACTR = A68_FALSE;
} 
else
{ 
XLDACTR.Mode = A;
XLDACTR.Rest = Ml;
YLDACTR = A_LOC(A68_54 ) ;
(*YLDACTR) = XLDACTR ;
SLDACTR_mx = YLDACTR;
 /* line 4253: */
 /* line 4254: */
if ( (A>KQAACTR_refmark) )
{ 
ZLDACTR = (X==2);
if ( ! ZLDACTR )
{ /* line 4255: */
ZLDACTR = A_CALLPROC(NL(PLDACTR_mcond),((A-KQAACTR_refmark), SLDACTR_mx, 1),((A-KQAACTR_refmark), SLDACTR_mx, 1,(NL(PLDACTR_mcond)).nonlocals));
}
WLDACTR = ZLDACTR;
} 
else
{ 
 /* line 4256: */
AMDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),A))) ;
switch ( AMDACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
BMDACTR_p = (AMDACTR.data.mode6);
 /* line 4257: */
CMDACTR = (X==2);
if ( ! CMDACTR )
{CMDACTR = A_CALLPROC(NL(PLDACTR_mcond),((*(&(BMDACTR_p->Deproc))), SLDACTR_mx, 1),((*(&(BMDACTR_p->Deproc))), SLDACTR_mx, 1,(NL(PLDACTR_mcond)).nonlocals));
}
 /* line 4258: */
WLDACTR = CMDACTR;
break;
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
DMDACTR_s = (AMDACTR.data.mode4);
 /* line 4259: */
EMDACTR = (X==1);
if ( ! EMDACTR )
{{ 
ULDACTR_sl = (*(&(DMDACTR_s->Sels)));
 /* line 4260: */
for ( ;; )
{ 
 /* line 4261: */
FMDACTR = (ULDACTR_sl!=RQAACTR_nilsel);
if ( FMDACTR )
{ /* line 4262: */
FMDACTR = A_CALLPROC(NL(PLDACTR_mcond),((*(&(ULDACTR_sl->Mode))), SLDACTR_mx, 2),((*(&(ULDACTR_sl->Mode))), SLDACTR_mx, 2,(NL(PLDACTR_mcond)).nonlocals));
}
if ( !(FMDACTR) ) break;
ULDACTR_sl = (*(&(ULDACTR_sl->Rest)));
}
 /* line 4263: */
 /* line 4264: */
GMDACTR = (ULDACTR_sl==RQAACTR_nilsel);
} 
EMDACTR = GMDACTR;
}
 /* line 4265: */
WLDACTR = EMDACTR;
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
HMDACTR_ar = (AMDACTR.data.mode8);
 /* line 4266: */
 /* line 4267: */
WLDACTR = A_CALLPROC(NL(PLDACTR_mcond),((*(&(HMDACTR_ar->Mode))), SLDACTR_mx, X),((*(&(HMDACTR_ar->Mode))), SLDACTR_mx, X,(NL(PLDACTR_mcond)).nonlocals));
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
IMDACTR_v = (AMDACTR.data.mode7);
 /* line 4268: */
 /* line 4269: */
WLDACTR = A_CALLPROC(NL(PLDACTR_mcond),((*(&(IMDACTR_v->Vecmode))), SLDACTR_mx, X),((*(&(IMDACTR_v->Vecmode))), SLDACTR_mx, X,(NL(PLDACTR_mcond)).nonlocals));
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
JMDACTR_is = (AMDACTR.data.mode5);
 /* line 4270: */
 /* line 4271: */
 /* line 4272: */
 /* line 4273: */
if ( ((*(&(JMDACTR_is->Length)))==1) )
{ 
 /* line 4274: */
KMDACTR = X;
} 
else
{ 
 /* line 4275: */
KMDACTR = 2;
} 
 /* line 4276: */
WLDACTR = A_CALLPROC(NL(PLDACTR_mcond),((*(&(JMDACTR_is->Imode))), SLDACTR_mx, KMDACTR),((*(&(JMDACTR_is->Imode))), SLDACTR_mx, KMDACTR,(NL(PLDACTR_mcond)).nonlocals));
break;
case 2: /* REF STRUCT(INT,REF MODE54)  */
LMDACTR_u = (AMDACTR.data.mode2);
 /* line 4277: */
{ 
TLDACTR_el = (*(&(LMDACTR_u->Modelist)));
 /* line 4278: */
for ( ;; )
{ 
 /* line 4279: */
MMDACTR = (TLDACTR_el!=OQAACTR_nilml);
if ( MMDACTR )
{ /* line 4280: */
MMDACTR = A_CALLPROC(NL(PLDACTR_mcond),((*(&(TLDACTR_el->Mode))), SLDACTR_mx, X),((*(&(TLDACTR_el->Mode))), SLDACTR_mx, X,(NL(PLDACTR_mcond)).nonlocals));
}
if ( !(MMDACTR) ) break;
TLDACTR_el = (*(&(TLDACTR_el->Rest)));
}
 /* line 4281: */
 /* line 4282: */
 /* line 4283: */
WLDACTR = (TLDACTR_el==OQAACTR_nilml);
} 
break;
default: 
 /* line 4284: */
 /* line 4285: */
 /* line 4286: */
 /* line 4287: */
WLDACTR = A68_TRUE;
break;
} 
} 
} 
} 
A_PROC_EXIT(mcond);
return( WLDACTR );
} 
#undef NL

A_STATIC A68_BOOL  PMDACTR_dynamic(A68_53 * Aml, void *NonLocals)
#define NL(x) (((QMDACTR_dynamic *)NonLocals)->x)
{ 
A68_53 * RMDACTR_x;
A68_BOOL  SMDACTR_b;
A68_BOOL  TMDACTR;  /* optbool result */
A68_BOOL  UMDACTR;  /* optbool result */
A68_BOOL  VMDACTR;  /* clause result */
A68_BOOL  WMDACTR;  /* clause result */
A_PROC_ENTRY(dynamic);
 /* line 4291: */
{ 
RMDACTR_x = Aml;
 /* line 4292: */
SMDACTR_b = A68_FALSE;
 /* line 4293: */
for ( ;; )
{ 
 /* line 4294: */
TMDACTR = (RMDACTR_x!=PQAACTR_nilaml);
if ( TMDACTR )
{TMDACTR = !SMDACTR_b;
}
if ( !(TMDACTR) ) break;
UMDACTR = SMDACTR_b;
if ( ! UMDACTR )
{ /* line 4295: */
if ( ((*(&((*(&(RMDACTR_x->Am)))->Modeproc)))==0) )
{ 
 /* line 4296: */
VMDACTR = A68_FALSE;
} 
else
{ 
 /* line 4297: */
if ( ((*(&((*(&(RMDACTR_x->Am)))->Modeproc)))!=1) )
{ 
 /* line 4298: */
VMDACTR = A68_TRUE;
} 
else
{ 
 /* line 4299: */
VMDACTR = A_CALLPROC(NL(OMDACTR_dynamic),((*(&((*(&(RMDACTR_x->Am)))->El)))),((*(&((*(&(RMDACTR_x->Am)))->El))),(NL(OMDACTR_dynamic)).nonlocals));
} 
} 
UMDACTR = VMDACTR;
}
SMDACTR_b = UMDACTR;
 /* line 4300: */
 /* line 4301: */
RMDACTR_x = (*(&(RMDACTR_x->Rest)));
}
 /* line 4302: */
 /* line 4303: */
WMDACTR = SMDACTR_b;
} 
A_PROC_EXIT(dynamic);
return( WMDACTR );
} 
#undef NL

A_STATIC A68_BOOL  ZMDACTR_testkept(A68_INT  M, void *NonLocals)
#define NL(x) (((ANDACTR_testkept *)NonLocals)->x)
{ 
A68_54 * ENDACTR_ml;
A68_58 * FNDACTR_sels;
A68_BOOL  GNDACTR;  /* clause result */
A68_66  HNDACTR;  /* united object - for case conformity */
A68_56 * INDACTR_u;
A68_59 * JNDACTR_s;
A68_60 * KNDACTR_is;
A68_61 * LNDACTR_v;
A68_62 * MNDACTR_a;
A68_64 * NNDACTR_st;
A_PROC_ENTRY(testkept);
 /* line 4307: */
{ 
 /* line 4308: */
 /* line 4309: */
 /* line 4310: */
if ( (M>KQAACTR_refmark) )
{ 
A_CALLPROC(NL(QJBACTR_fault),(119),(119,(NL(QJBACTR_fault)).nonlocals));
 /* line 4312: */
 /* line 4313: */
GNDACTR = A68_TRUE;
} 
else
{ 
 /* line 4314: */
HNDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),M))) ;
switch ( HNDACTR.mode )
{ 
case 2: /* REF STRUCT(INT,REF MODE54)  */
INDACTR_u = (HNDACTR.data.mode2);
 /* line 4315: */
{ 
ENDACTR_ml = (*(&(INDACTR_u->Modelist)));
 /* line 4316: */
for ( ;; )
{ 
 /* line 4317: */
if ( !((ENDACTR_ml!=OQAACTR_nilml)) ) break;
 /* line 4318: */
if ( A_CALLPROC(NL(YMDACTR_testkept),((*(&(ENDACTR_ml->Mode)))),((*(&(ENDACTR_ml->Mode))),(NL(YMDACTR_testkept)).nonlocals)) )
{ 
 /* line 4319: */
goto DNDACTR_true;
} 
else
{ 
 /* line 4320: */
 /* line 4321: */
ENDACTR_ml = (*(&(ENDACTR_ml->Rest)));
} 
}
 /* line 4322: */
 /* line 4323: */
 /* line 4324: */
GNDACTR = A68_FALSE;
} 
break;
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
JNDACTR_s = (HNDACTR.data.mode4);
 /* line 4325: */
{ 
FNDACTR_sels = (*(&(JNDACTR_s->Sels)));
 /* line 4326: */
for ( ;; )
{ 
 /* line 4327: */
if ( !((FNDACTR_sels!=RQAACTR_nilsel)) ) break;
 /* line 4328: */
if ( A_CALLPROC(NL(YMDACTR_testkept),((*(&(FNDACTR_sels->Mode)))),((*(&(FNDACTR_sels->Mode))),(NL(YMDACTR_testkept)).nonlocals)) )
{ 
 /* line 4329: */
goto DNDACTR_true;
} 
else
{ 
 /* line 4330: */
 /* line 4331: */
FNDACTR_sels = (*(&(FNDACTR_sels->Rest)));
} 
}
 /* line 4332: */
 /* line 4333: */
 /* line 4334: */
GNDACTR = A68_FALSE;
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
KNDACTR_is = (HNDACTR.data.mode5);
 /* line 4335: */
 /* line 4336: */
GNDACTR = A_CALLPROC(NL(YMDACTR_testkept),((*(&(KNDACTR_is->Imode)))),((*(&(KNDACTR_is->Imode))),(NL(YMDACTR_testkept)).nonlocals));
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
LNDACTR_v = (HNDACTR.data.mode7);
 /* line 4337: */
 /* line 4338: */
GNDACTR = A_CALLPROC(NL(YMDACTR_testkept),((*(&(LNDACTR_v->Vecmode)))),((*(&(LNDACTR_v->Vecmode))),(NL(YMDACTR_testkept)).nonlocals));
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
MNDACTR_a = (HNDACTR.data.mode8);
 /* line 4339: */
 /* line 4340: */
GNDACTR = A_CALLPROC(NL(YMDACTR_testkept),((*(&(MNDACTR_a->Mode)))),((*(&(MNDACTR_a->Mode))),(NL(YMDACTR_testkept)).nonlocals));
break;
case 9: /* REF STRUCT(INT,REF MODE63)  */
NNDACTR_st = (HNDACTR.data.mode9);
 /* line 4341: */
{ 
A_CALLPROC(NL(QJBACTR_fault),(120),(120,(NL(QJBACTR_fault)).nonlocals));
 /* line 4343: */
 /* line 4344: */
 /* line 4345: */
GNDACTR = A68_FALSE;
} 
break;
default: 
 /* line 4346: */
 /* line 4347: */
 /* line 4348: */
 /* line 4349: */
GNDACTR = A68_FALSE;
break;
} 
} 
goto BNDACTR;
DNDACTR_true:
 /* line 4350: */
GNDACTR = A68_TRUE;
BNDACTR: ;
} 
A_PROC_EXIT(testkept);
return( GNDACTR );
} 
#undef NL

A_STATIC A68_VOID  RNDACTR_adjscope(A68_68 * Rd, A68_INT  Level, A68_INT  Scope)
{ 
A68_68 * SNDACTR_rd1;
A68_BOOL  TNDACTR;  /* optbool result */
A68_INT * UNDACTR;  /* YIELD */
A_PROC_ENTRY(adjscope);
 /* line 4353: */
{ 
SNDACTR_rd1 = Rd;
 /* line 4354: */
for ( ;; )
{ 
 /* line 4355: */
TNDACTR = (SNDACTR_rd1!=(A68_68 *)A68_NIL);
if ( TNDACTR )
{ /* line 4356: */
TNDACTR = (Level<(*(&(SNDACTR_rd1->Level))));
}
if ( !(TNDACTR) ) break;
 /* line 4357: */
if ( ((*(&(SNDACTR_rd1->Maxname)))<Scope) )
{ 
 /* line 4358: */
UNDACTR = (&(SNDACTR_rd1->Maxname)) ;
(*UNDACTR) = Scope;
} 
 /* line 4359: */
 /* line 4360: */
SNDACTR_rd1 = (*(&(SNDACTR_rd1->Rest)));
}
 /* line 4361: */
} 
A_PROC_EXIT(adjscope);
return;
} 
#undef NL

A_STATIC A68_VOID  ZNDACTR_loadmodeproc(A68_52 * A, void *NonLocals)
#define NL(x) (((AODACTR_loadmodeproc *)NonLocals)->x)
{ 
A68_INT  BODACTR;  /* ADICOPS - ABS INT */
A68_INT  CODACTR_i;
A68_106  DODACTR;  /* OPERATORS - mode -> union mode */
A68_106  EODACTR;  /* OPERATORS - mode -> union mode */
A68_INT  FODACTR;  /* YIELD */
A68_85  GODACTR;  /* collateral clause result */
A68_106  HODACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(loadmodeproc);
 /* line 4367: */
{ 
BODACTR = (*(&(A->Modeproc))) ;
CODACTR_i = A_ABS(BODACTR);
 /* line 4368: */
 /* line 4369: */
if ( (CODACTR_i<GKAACTR_startkmp) )
{ 
 /* line 4370: */
A_CALLPROC(NL(Output),(A_UNITE(DODACTR,mode3,3,CODACTR_i), (*NL(FZAACTR_outlevel))),(A_UNITE(DODACTR,mode3,3,CODACTR_i), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
else
{ 
FODACTR = (CODACTR_i-GKAACTR_startkmp) ;
A_CALLPROC(NL(Output),(A_UNITE(EODACTR,mode3,3,FODACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(EODACTR,mode3,3,FODACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4371: */
GODACTR.Fn = ZNAACTR_xderef;
GODACTR.M = A_CALLPROC(NL(ZICACTR_mproc),((*(&(A->Mode)))),((*(&(A->Mode))),(NL(ZICACTR_mproc)).nonlocals));
GODACTR.Param = 0;
 /* line 4372: */
 /* line 4373: */
A_CALLPROC(NL(Output),(A_UNITE(HODACTR,mode14,14,GODACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(HODACTR,mode14,14,GODACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
} 
A_PROC_EXIT(loadmodeproc);
return;
} 
#undef NL

A_STATIC A68_VOID  MODACTR_treatam(A68_52 * Am, A68_INT  Type, A68_INT  Scope, void *NonLocals)
#define NL(x) (((NODACTR_treatam *)NonLocals)->x)
{ 
A68_53 * OODACTR_aml;
A68_INT * PODACTR;  /* clause result */
A68_INT * QODACTR_mp;
A68_BOOL  RODACTR;  /* optbool result */
A68_BOOL  SODACTR;  /* optbool result */
A68_53 ** TODACTR;  /* YIELD */
A68_BOOL  UODACTR;  /* optbool result */
A68_INT * VODACTR_lastid;
A68_INT  WODACTR_x;
A68_INT  XODACTR_m;
A68_INT  YODACTR_i;
A68_INT  ZODACTR_procmode;
A68_INT  APDACTR_lastid1;
A68_68  BPDACTR;  /* collateral clause result */
A68_BITS  CPDACTR;  /* clause result */
A68_68  DPDACTR_rd;
A68_67  EPDACTR;  /* collateral clause result */
A68_67  FPDACTR_loc;
A68_205  HPDACTR_assigngen;   /* proc value of non-global proc */
A68_207  XPDACTR_assignarr;   /* proc value of non-global proc */
A68_106  WQDACTR;  /* OPERATORS - mode -> union mode */
A68_81  XQDACTR;  /* collateral clause result */
A68_106  YQDACTR;  /* OPERATORS - mode -> union mode */
A68_87  ZQDACTR;  /* collateral clause result */
A68_106  ARDACTR;  /* OPERATORS - mode -> union mode */
A68_106  BRDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  CRDACTR;  /* YIELD */
A68_85  DRDACTR;  /* collateral clause result */
A68_106  ERDACTR;  /* OPERATORS - mode -> union mode */
A68_52 * FRDACTR_amel;
A68_67  GRDACTR;  /* collateral clause result */
A68_67  HRDACTR_array;
A68_81  IRDACTR;  /* collateral clause result */
A68_106  JRDACTR;  /* OPERATORS - mode -> union mode */
A68_106  KRDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  LRDACTR;  /* YIELD */
A68_106  MRDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  NRDACTR;  /* YIELD */
A68_85  ORDACTR;  /* collateral clause result */
A68_106  PRDACTR;  /* OPERATORS - mode -> union mode */
A68_66  QRDACTR;  /* united object - for case conformity */
A68_59 * RRDACTR_st;
A68_58 * SRDACTR_s;
A68_53 * TRDACTR_aml;
A68_67  URDACTR;  /* collateral clause result */
A68_67  VRDACTR_struct;
A68_81  WRDACTR;  /* collateral clause result */
A68_106  XRDACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  YRDACTR;  /* optbool result */
A68_106  ZRDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  ASDACTR;  /* YIELD */
A68_85  BSDACTR;  /* collateral clause result */
A68_106  CSDACTR;  /* OPERATORS - mode -> union mode */
A68_106  DSDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  ESDACTR;  /* YIELD */
A68_60 * FSDACTR_is;
A68_INT  GSDACTR_i;
A68_67  HSDACTR;  /* collateral clause result */
A68_67  ISDACTR_istruct;
A68_67  JSDACTR;  /* collateral clause result */
A68_67  KSDACTR_element;
A68_81  LSDACTR;  /* collateral clause result */
A68_106  MSDACTR;  /* OPERATORS - mode -> union mode */
A68_106  NSDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  OSDACTR;  /* YIELD */
A68_85  PSDACTR;  /* collateral clause result */
A68_106  QSDACTR;  /* OPERATORS - mode -> union mode */
A68_106  RSDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  SSDACTR;  /* YIELD */
A68_85  TSDACTR;  /* collateral clause result */
A68_106  USDACTR;  /* OPERATORS - mode -> union mode */
A68_87  VSDACTR;  /* collateral clause result */
A68_106  WSDACTR;  /* OPERATORS - mode -> union mode */
A68_87  XSDACTR;  /* collateral clause result */
A68_BITS  YSDACTR;  /* clause result */
A68_106  ZSDACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(treatam);
 /* line 4378: */
 /* line 4379: */
{ 
 /* line 4380: */
 /* line 4381: */
 /* line 4382: */
if ( (Am==QQAACTR_nilam) )
{ 
 /* line 4383: */
PODACTR = (A68_INT *)A68_NIL;
} 
else
{ 
PODACTR = (&(Am->Modeproc));
} 
QODACTR_mp = PODACTR;
 /* line 4385: */
RODACTR = (Am==QQAACTR_nilam);
if ( ! RODACTR )
{ /* line 4386: */
RODACTR = ((*(&(Am->Mode)))==ZKAACTR_faultmode);
}
 /* line 4387: */
if ( RODACTR )
{ 
/*SKIP*/;
} 
else
{ 
SODACTR = ((*QODACTR_mp)==1);
if ( SODACTR )
{ /* line 4388: */
SODACTR = !A_CALLPROC(NL(OMDACTR_dynamic),((*(&(Am->El)))),((*(&(Am->El))),(NL(OMDACTR_dynamic)).nonlocals));
}
if ( SODACTR )
{ 
(*QODACTR_mp) = 0;
 /* line 4389: */
 /* line 4390: */
TODACTR = (&(Am->El)) ;
(*TODACTR) = (A68_53 *)A68_NIL;
} 
else
{ 
UODACTR = ((*QODACTR_mp)>1);
if ( ! UODACTR )
{ /* line 4391: */
UODACTR = ((*QODACTR_mp)<=(-GKAACTR_startkmp));
}
if ( UODACTR )
{ 
if ( (Type==VNDACTR_genam) )
{ 
 /* line 4392: */
A_CALLPROC(NL(YNDACTR_loadmodeproc),(Am),(Am,(NL(YNDACTR_loadmodeproc)).nonlocals));
} 
} 
else
{ 
 /* line 4393: */
 /* line 4394: */
if ( ((*QODACTR_mp)!=0) )
{ 
VODACTR_lastid = (&((*NL(QYAACTR_globcurrent))->Lastid));
 /* line 4395: */
(*NL(GBBACTR_lastidchanged)) = A68_TRUE;
 /* line 4396: */
WODACTR_x = (*QODACTR_mp);
XODACTR_m = (*(&(Am->Mode)));
APDACTR_lastid1 = (*VODACTR_lastid);
 /* line 4397: */
 /* line 4398: */
BPDACTR.Name = A_CALLPROC(NL(KTAACTR_idmess),(60),(60,(NL(KTAACTR_idmess)).nonlocals));
if ( (Type==VNDACTR_genam) )
{ 
CPDACTR = NLAACTR_valbit;
} 
else
{ 
CPDACTR = MQAACTR_z;
} 
 /* line 4399: */
BPDACTR.Props = (A68_BITS )((A68_BITS )(DMAACTR_genprocbit|LLAACTR_ccbit)|CPDACTR);
BPDACTR.Mode = A_CALLPROC(NL(ZICACTR_mproc),(XODACTR_m),(XODACTR_m,(NL(ZICACTR_mproc)).nonlocals));
 /* line 4400: */
BPDACTR.Rdenno = (*QODACTR_mp) = (*NL(CZAACTR_lastrd))+=1;
BPDACTR.Maxname = Scope;
 /* line 4401: */
BPDACTR.Level = 1;
BPDACTR.Rest = (A68_68 *)A68_NIL;
DPDACTR_rd = BPDACTR;
 /* line 4402: */
EPDACTR.Name = NL(BZAACTR_nullid);
EPDACTR.Decno = (*VODACTR_lastid)+=1;
EPDACTR.Level = 1;
EPDACTR.Mode = ALAACTR_bool;
EPDACTR.Scope = 0;
EPDACTR.Rest = (A68_67 *)A68_NIL;
FPDACTR_loc = EPDACTR;
 /* line 4404: */
A_CLOSURE( HPDACTR_assigngen, IPDACTR_assigngen, JPDACTR_assigngen );
(( JPDACTR_assigngen * ) ( HPDACTR_assigngen.nonlocals )) -> Output = NL(Output);
(( JPDACTR_assigngen * ) ( HPDACTR_assigngen.nonlocals )) -> FZAACTR_outlevel = NL(FZAACTR_outlevel);
(( JPDACTR_assigngen * ) ( HPDACTR_assigngen.nonlocals )) -> YNDACTR_loadmodeproc = NL(YNDACTR_loadmodeproc);
(( JPDACTR_assigngen * ) ( HPDACTR_assigngen.nonlocals )) -> FPDACTR_loc = (&FPDACTR_loc);
(( JPDACTR_assigngen * ) ( HPDACTR_assigngen.nonlocals )) -> ZICACTR_mproc = NL(ZICACTR_mproc);
(( JPDACTR_assigngen * ) ( HPDACTR_assigngen.nonlocals )) -> JGCACTR_deflex = NL(JGCACTR_deflex);
(( JPDACTR_assigngen * ) ( HPDACTR_assigngen.nonlocals )) -> ZHCACTR_enflex = NL(ZHCACTR_enflex);
(( JPDACTR_assigngen * ) ( HPDACTR_assigngen.nonlocals )) -> VODACTR_lastid = VODACTR_lastid;
(( JPDACTR_assigngen * ) ( HPDACTR_assigngen.nonlocals )) -> GZAACTR_maxident = NL(GZAACTR_maxident);
 /* line 4422: */
A_CLOSURE( XPDACTR_assignarr, YPDACTR_assignarr, ZPDACTR_assignarr );
(( ZPDACTR_assignarr * ) ( XPDACTR_assignarr.nonlocals )) -> BZAACTR_nullid = NL(BZAACTR_nullid);
(( ZPDACTR_assignarr * ) ( XPDACTR_assignarr.nonlocals )) -> VODACTR_lastid = VODACTR_lastid;
(( ZPDACTR_assignarr * ) ( XPDACTR_assignarr.nonlocals )) -> KUAACTR_modes = NL(KUAACTR_modes);
(( ZPDACTR_assignarr * ) ( XPDACTR_assignarr.nonlocals )) -> ZHCACTR_enflex = NL(ZHCACTR_enflex);
(( ZPDACTR_assignarr * ) ( XPDACTR_assignarr.nonlocals )) -> Output = NL(Output);
(( ZPDACTR_assignarr * ) ( XPDACTR_assignarr.nonlocals )) -> FZAACTR_outlevel = NL(FZAACTR_outlevel);
(( ZPDACTR_assignarr * ) ( XPDACTR_assignarr.nonlocals )) -> HPDACTR_assigngen = HPDACTR_assigngen;
(( ZPDACTR_assignarr * ) ( XPDACTR_assignarr.nonlocals )) -> XPDACTR_assignarr = XPDACTR_assignarr;
 /* line 4458: */
A_CALLPROC(NL(Output),(A_UNITE(WQDACTR,mode34,34,(&DPDACTR_rd)), (*NL(FZAACTR_outlevel))),(A_UNITE(WQDACTR,mode34,34,(&DPDACTR_rd)), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4459: */
XQDACTR.Type = YOAACTR_xfdec;
XQDACTR.Iddec = (&FPDACTR_loc);
A_CALLPROC(NL(Output),(A_UNITE(YQDACTR,mode12,12,XQDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(YQDACTR,mode12,12,XQDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4460: */
ZQDACTR.Fn = ZMAACTR_xbegin;
ZQDACTR.M = XODACTR_m;
ZQDACTR.Props = (A68_BITS )(WLAACTR_compgenbit|SLAACTR_semibit);
ZQDACTR.Param = XODACTR_m;
A_CALLPROC(NL(Output),(A_UNITE(ARDACTR,mode17,17,ZQDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(ARDACTR,mode17,17,ZQDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4462: */
 /* line 4463: */
if ( (WODACTR_x<0) )
{ 
A_CALLPROC(NL(Output),(SKAACTR_down, (*NL(FZAACTR_outlevel))),(SKAACTR_down, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4464: */
CRDACTR = (*(&((&FPDACTR_loc)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(BRDACTR,mode3,3,CRDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(BRDACTR,mode3,3,CRDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4465: */
DRDACTR.Fn = NMAACTR_xdyngrab;
DRDACTR.M = A_CALLPROC(NL(JGCACTR_deflex),(XODACTR_m),(XODACTR_m,(NL(JGCACTR_deflex)).nonlocals));
DRDACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(ERDACTR,mode14,14,DRDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(ERDACTR,mode14,14,DRDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4466: */
 /* line 4467: */
if ( A_CALLPROC(NL(OMDACTR_dynamic),((*(&(Am->El)))),((*(&(Am->El))),(NL(OMDACTR_dynamic)).nonlocals)) )
{ 
FRDACTR_amel = (*(&((*(&(Am->El)))->Am)));
 /* line 4468: */
GRDACTR.Name = NL(BZAACTR_nullid);
GRDACTR.Decno = (*VODACTR_lastid)+=1;
 /* line 4469: */
GRDACTR.Level = 1;
GRDACTR.Mode = (A_CALLPROC(NL(ZHCACTR_enflex),(XODACTR_m),(XODACTR_m,(NL(ZHCACTR_enflex)).nonlocals))+KQAACTR_refmark);
 /* line 4470: */
GRDACTR.Scope = 0;
GRDACTR.Rest = (A68_67 *)A68_NIL;
HRDACTR_array = GRDACTR;
 /* line 4471: */
IRDACTR.Type = APAACTR_xivardec;
IRDACTR.Iddec = (&HRDACTR_array);
A_CALLPROC(NL(Output),(A_UNITE(JRDACTR,mode12,12,IRDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(JRDACTR,mode12,12,IRDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4472: */
A_CALLPROC(NL(LODACTR_treatam),(FRDACTR_amel, WNDACTR_decam, Scope),(FRDACTR_amel, WNDACTR_decam, Scope,(NL(LODACTR_treatam)).nonlocals));
 /* line 4473: */
LRDACTR = (*(&((&HRDACTR_array)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(KRDACTR,mode3,3,LRDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(KRDACTR,mode3,3,LRDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4474: */
A_CALLPROC(XPDACTR_assignarr,((&HRDACTR_array), FRDACTR_amel),((&HRDACTR_array), FRDACTR_amel,(XPDACTR_assignarr).nonlocals));
 /* line 4475: */
NRDACTR = (*(&((&HRDACTR_array)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(MRDACTR,mode3,3,NRDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(MRDACTR,mode3,3,NRDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4476: */
ORDACTR.Fn = ZNAACTR_xderef;
ORDACTR.M = XODACTR_m;
ORDACTR.Param = 0;
 /* line 4477: */
 /* line 4478: */
A_CALLPROC(NL(Output),(A_UNITE(PRDACTR,mode14,14,ORDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(PRDACTR,mode14,14,ORDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
} 
else
{ 
 /* line 4479: */
if ( (XODACTR_m!=ZKAACTR_faultmode) )
{ 
OODACTR_aml = (*(&(Am->El)));
 /* line 4480: */
for ( ;; )
{ 
 /* line 4481: */
if ( !((OODACTR_aml!=PQAACTR_nilaml)) ) break;
A_CALLPROC(NL(LODACTR_treatam),((*(&(OODACTR_aml->Am))), WNDACTR_decam, Scope),((*(&(OODACTR_aml->Am))), WNDACTR_decam, Scope,(NL(LODACTR_treatam)).nonlocals));
 /* line 4482: */
 /* line 4483: */
OODACTR_aml = (*(&(OODACTR_aml->Rest)));
}
 /* line 4484: */
 /* line 4485: */
QRDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),XODACTR_m))) ;
switch ( QRDACTR.mode )
{ 
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
RRDACTR_st = (QRDACTR.data.mode4);
 /* line 4486: */
{ 
SRDACTR_s = (*(&(RRDACTR_st->Sels)));
 /* line 4487: */
TRDACTR_aml = (*(&(Am->El)));
 /* line 4488: */
URDACTR.Name = NL(BZAACTR_nullid);
URDACTR.Decno = (*VODACTR_lastid)+=1;
 /* line 4489: */
URDACTR.Level = 1;
 /* line 4490: */
URDACTR.Mode = (A_CALLPROC(NL(ZHCACTR_enflex),(XODACTR_m),(XODACTR_m,(NL(ZHCACTR_enflex)).nonlocals))+KQAACTR_refmark);
 /* line 4491: */
URDACTR.Scope = 0;
URDACTR.Rest = (A68_67 *)A68_NIL;
VRDACTR_struct = URDACTR;
 /* line 4492: */
WRDACTR.Type = XOAACTR_xvardec;
WRDACTR.Iddec = (&VRDACTR_struct);
A_CALLPROC(NL(Output),(A_UNITE(XRDACTR,mode12,12,WRDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(XRDACTR,mode12,12,WRDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4494: */
for ( ;; )
{ 
 /* line 4495: */
if ( !((TRDACTR_aml!=PQAACTR_nilaml)) ) break;
for ( ;; )
{ 
 /* line 4496: */
YRDACTR = (SRDACTR_s!=RQAACTR_nilsel);
if ( YRDACTR )
{ /* line 4497: */
YRDACTR = ((*(&(SRDACTR_s->Mode)))!=(*(&((*(&(TRDACTR_aml->Am)))->Mode))));
}
if ( !(YRDACTR) ) break;
SRDACTR_s = (*(&(SRDACTR_s->Rest)));
}
 /* line 4499: */
 /* line 4500: */
if ( (SRDACTR_s!=RQAACTR_nilsel) )
{ 
 /* line 4501: */
if ( ((*(&((*(&(TRDACTR_aml->Am)))->Modeproc)))!=0) )
{ 
 /* line 4503: */
ASDACTR = (*(&((&VRDACTR_struct)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(ZRDACTR,mode3,3,ASDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(ZRDACTR,mode3,3,ASDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4504: */
 /* line 4505: */
BSDACTR.Fn = IMAACTR_xselect;
 /* line 4506: */
 /* line 4508: */
BSDACTR.M = (A_CALLPROC(NL(ZHCACTR_enflex),((*(&(SRDACTR_s->Mode)))),((*(&(SRDACTR_s->Mode))),(NL(ZHCACTR_enflex)).nonlocals))+KQAACTR_refmark);
BSDACTR.Param = (*(&(SRDACTR_s->Fieldno)));
A_CALLPROC(NL(Output),(A_UNITE(CSDACTR,mode14,14,BSDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(CSDACTR,mode14,14,BSDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4509: */
 /* line 4510: */
A_CALLPROC(HPDACTR_assigngen,((*(&(TRDACTR_aml->Am)))),((*(&(TRDACTR_aml->Am))),(HPDACTR_assigngen).nonlocals));
} 
 /* line 4511: */
 /* line 4512: */
SRDACTR_s = (*(&(SRDACTR_s->Rest)));
} 
 /* line 4513: */
 /* line 4514: */
TRDACTR_aml = (*(&(TRDACTR_aml->Rest)));
}
 /* line 4515: */
 /* line 4516: */
 /* line 4517: */
ESDACTR = (*(&((&VRDACTR_struct)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(DSDACTR,mode3,3,ESDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(DSDACTR,mode3,3,ESDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
FSDACTR_is = (QRDACTR.data.mode5);
 /* line 4518: */
{ 
GSDACTR_i = A_CALLPROC(NL(ZVBACTR_insertvec),(A_CALLPROC(NL(ZHCACTR_enflex),((*(&(FSDACTR_is->Imode)))),((*(&(FSDACTR_is->Imode))),(NL(ZHCACTR_enflex)).nonlocals)), 1),(A_CALLPROC(NL(ZHCACTR_enflex),((*(&(FSDACTR_is->Imode)))),((*(&(FSDACTR_is->Imode))),(NL(ZHCACTR_enflex)).nonlocals)), 1,(NL(ZVBACTR_insertvec)).nonlocals));
 /* line 4519: */
HSDACTR.Name = NL(BZAACTR_nullid);
HSDACTR.Decno = (*VODACTR_lastid)+=1;
 /* line 4520: */
HSDACTR.Level = 1;
 /* line 4521: */
HSDACTR.Mode = (A_CALLPROC(NL(ZHCACTR_enflex),(XODACTR_m),(XODACTR_m,(NL(ZHCACTR_enflex)).nonlocals))+KQAACTR_refmark);
 /* line 4522: */
HSDACTR.Scope = 0;
HSDACTR.Rest = (A68_67 *)A68_NIL;
ISDACTR_istruct = HSDACTR;
 /* line 4523: */
JSDACTR.Name = NL(BZAACTR_nullid);
JSDACTR.Decno = (*VODACTR_lastid)+=1;
 /* line 4524: */
JSDACTR.Level = 1;
JSDACTR.Mode = (GSDACTR_i+KQAACTR_refmark);
 /* line 4525: */
JSDACTR.Scope = 0;
JSDACTR.Rest = (A68_67 *)A68_NIL;
KSDACTR_element = JSDACTR;
 /* line 4526: */
LSDACTR.Type = XOAACTR_xvardec;
LSDACTR.Iddec = (&ISDACTR_istruct);
A_CALLPROC(NL(Output),(A_UNITE(MSDACTR,mode12,12,LSDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(MSDACTR,mode12,12,LSDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4527: */
OSDACTR = (*(&((&ISDACTR_istruct)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(NSDACTR,mode3,3,OSDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(NSDACTR,mode3,3,OSDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4528: */
PSDACTR.Fn = JOAACTR_xisvec;
PSDACTR.M = (GSDACTR_i+KQAACTR_refmark);
PSDACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(QSDACTR,mode14,14,PSDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(QSDACTR,mode14,14,PSDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4529: */
A_CALLPROC(XPDACTR_assignarr,((&KSDACTR_element), (*(&((*(&(Am->El)))->Am)))),((&KSDACTR_element), (*(&((*(&(Am->El)))->Am))),(XPDACTR_assignarr).nonlocals));
 /* line 4530: */
 /* line 4531: */
 /* line 4532: */
SSDACTR = (*(&((&ISDACTR_istruct)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(RSDACTR,mode3,3,SSDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(RSDACTR,mode3,3,SSDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 4533: */
TSDACTR.Fn = ZNAACTR_xderef;
TSDACTR.M = XODACTR_m;
TSDACTR.Param = 0;
 /* line 4534: */
A_CALLPROC(NL(Output),(A_UNITE(USDACTR,mode14,14,TSDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(USDACTR,mode14,14,TSDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
} 
 /* line 4535: */
VSDACTR.Fn = MNAACTR_xend;
VSDACTR.M = 0;
VSDACTR.Props = (A68_BITS )(WLAACTR_compgenbit|ZLAACTR_dontpullbit);
VSDACTR.Param = XODACTR_m;
A_CALLPROC(NL(Output),(A_UNITE(WSDACTR,mode17,17,VSDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(WSDACTR,mode17,17,VSDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4536: */
XSDACTR.Fn = VNAACTR_xroutinend;
 /* line 4537: */
XSDACTR.M = 0;
 /* line 4538: */
if ( (Type==VNDACTR_genam) )
{ 
YSDACTR = NLAACTR_valbit;
} 
else
{ 
YSDACTR = MQAACTR_z;
} 
 /* line 4540: */
XSDACTR.Props = (A68_BITS )((A68_BITS )(DMAACTR_genprocbit|WLAACTR_compgenbit)|YSDACTR);
XSDACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(ZSDACTR,mode17,17,XSDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(ZSDACTR,mode17,17,XSDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4541: */
 /* line 4542: */
if ( ((*VODACTR_lastid)>(*NL(GZAACTR_maxident))) )
{ 
 /* line 4543: */
(*NL(GZAACTR_maxident)) = (*VODACTR_lastid);
} 
 /* line 4544: */
 /* line 4545: */
 /* line 4546: */
(*VODACTR_lastid) = APDACTR_lastid1;
} 
} 
} 
} 
} 
A_PROC_EXIT(treatam);
return;
} 
#undef NL

A_STATIC A68_VOID  CTDACTR_modevars(A68_53 * Aml, void *NonLocals)
#define NL(x) (((DTDACTR_modevars *)NonLocals)->x)
{ 
A68_53 * ETDACTR_a;
A68_53 * FTDACTR_b;
A68_53 * GTDACTR_l;
A68_53 ** HTDACTR_rb;
A68_INT * ITDACTR_lastid;
A68_52 * JTDACTR_am;
A68_INT * KTDACTR_mp;
A68_67  LTDACTR_n;
A68_INT  MTDACTR_x;
A68_BOOL  NTDACTR;  /* optbool result */
A68_BOOL  OTDACTR;  /* optbool result */
A68_53 ** PTDACTR;  /* YIELD */
A68_67  QTDACTR;  /* collateral clause result */
A68_INT * RTDACTR;  /* YIELD */
A68_81  STDACTR;  /* collateral clause result */
A68_106  TTDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  UTDACTR;  /* clause result */
A68_INT  VTDACTR;  /* ADICOPS - ABS INT */
A68_106  WTDACTR;  /* OPERATORS - mode -> union mode */
A68_106  XTDACTR;  /* OPERATORS - mode -> union mode */
A68_INT  YTDACTR;  /* clause result */
A68_INT * ZTDACTR;  /* YIELD */
A68_INT * AUDACTR;  /* YIELD */
A68_85  BUDACTR;  /* collateral clause result */
A68_106  CUDACTR;  /* OPERATORS - mode -> union mode */
A68_106  DUDACTR;  /* OPERATORS - mode -> union mode */
A68_106  EUDACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(modevars);
 /* line 4550: */
{ 
ETDACTR_a = (A68_53 *)A68_NIL;
FTDACTR_b = Aml;
 /* line 4551: */
 /* line 4552: */
ITDACTR_lastid = (&((*NL(QYAACTR_globcurrent))->Lastid));
 /* line 4553: */
 /* line 4554: */
 /* line 4555: */
 /* line 4556: */
 /* line 4558: */
for ( ;; )
{ 
 /* line 4559: */
if ( !((FTDACTR_b!=PQAACTR_nilaml)) ) break;
JTDACTR_am = (*(&(FTDACTR_b->Am)));
 /* line 4560: */
KTDACTR_mp = (&(JTDACTR_am->Modeproc));
 /* line 4561: */
NTDACTR = ((*KTDACTR_mp)<0);
if ( ! NTDACTR )
{OTDACTR = ((*KTDACTR_mp)==1);
if ( OTDACTR )
{ /* line 4562: */
OTDACTR = A_CALLPROC(NL(OMDACTR_dynamic),((*(&(JTDACTR_am->El)))),((*(&(JTDACTR_am->El))),(NL(OMDACTR_dynamic)).nonlocals));
}
NTDACTR = OTDACTR;
}
if ( NTDACTR )
{ 
GTDACTR_l = (*(&(FTDACTR_b->Rest)));
 /* line 4563: */
PTDACTR = (&(FTDACTR_b->Rest)) ;
(*PTDACTR) = ETDACTR_a;
 /* line 4564: */
ETDACTR_a = FTDACTR_b;
 /* line 4565: */
 /* line 4566: */
FTDACTR_b = GTDACTR_l;
} 
else
{ 
if ( ((*KTDACTR_mp)==1) )
{ 
(*KTDACTR_mp) = 0;
} 
 /* line 4567: */
 /* line 4568: */
 /* line 4569: */
FTDACTR_b = (*(&(FTDACTR_b->Rest)));
} 
}
 /* line 4571: */
FTDACTR_b = ETDACTR_a;
 /* line 4572: */
for ( ;; )
{ 
 /* line 4573: */
if ( !((FTDACTR_b!=PQAACTR_nilaml)) ) break;
JTDACTR_am = (*(&(FTDACTR_b->Am)));
 /* line 4574: */
KTDACTR_mp = (&(JTDACTR_am->Modeproc));
 /* line 4575: */
QTDACTR.Name = NL(BZAACTR_nullid);
QTDACTR.Decno = (*ITDACTR_lastid)+=1;
 /* line 4576: */
QTDACTR.Level = 1;
QTDACTR.Mode = (A_CALLPROC(NL(ZICACTR_mproc),((*(&(JTDACTR_am->Mode)))),((*(&(JTDACTR_am->Mode))),(NL(ZICACTR_mproc)).nonlocals))+KQAACTR_refmark);
 /* line 4577: */
QTDACTR.Scope = 0;
QTDACTR.Rest = (A68_67 *)A68_NIL;
LTDACTR_n = QTDACTR;
 /* line 4578: */
 /* line 4579: */
if ( ((*KTDACTR_mp)<0) )
{ 
HTDACTR_rb = (&(FTDACTR_b->Rest));
 /* line 4581: */
for ( ;; )
{ 
 /* line 4582: */
if ( !(((*HTDACTR_rb)!=PQAACTR_nilaml)) ) break;
 /* line 4583: */
if ( ((*(&((*(&((*HTDACTR_rb)->Am)))->Modeproc)))==(*KTDACTR_mp)) )
{ 
RTDACTR = (&((*(&((*HTDACTR_rb)->Am)))->Modeproc)) ;
(*RTDACTR) = ((*ITDACTR_lastid)+GKAACTR_startkmp);
 /* line 4584: */
 /* line 4585: */
(*HTDACTR_rb) = (*(&((*HTDACTR_rb)->Rest)));
} 
else
{ 
 /* line 4586: */
 /* line 4587: */
HTDACTR_rb = (&((*HTDACTR_rb)->Rest));
} 
}
 /* line 4588: */
} 
 /* line 4590: */
STDACTR.Type = XOAACTR_xvardec;
STDACTR.Iddec = (&LTDACTR_n);
A_CALLPROC(NL(Output),(A_UNITE(TTDACTR,mode12,12,STDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(TTDACTR,mode12,12,STDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4591: */
 /* line 4592: */
if ( ((*KTDACTR_mp)<0) )
{ 
 /* line 4593: */
UTDACTR = ((-(*ITDACTR_lastid))-GKAACTR_startkmp);
} 
else
{ 
 /* line 4594: */
UTDACTR = ((*ITDACTR_lastid)+GKAACTR_startkmp);
} 
(*KTDACTR_mp) = UTDACTR;
 /* line 4595: */
 /* line 4596: */
FTDACTR_b = (*(&(FTDACTR_b->Rest)));
}
 /* line 4598: */
for ( ;; )
{ 
 /* line 4599: */
if ( !((ETDACTR_a!=PQAACTR_nilaml)) ) break;
JTDACTR_am = (*(&(ETDACTR_a->Am)));
 /* line 4600: */
ETDACTR_a = (*(&(ETDACTR_a->Rest)));
 /* line 4601: */
VTDACTR = (*(&(JTDACTR_am->Modeproc))) ;
MTDACTR_x = (A_ABS(VTDACTR)-GKAACTR_startkmp);
 /* line 4602: */
A_CALLPROC(NL(Output),(A_UNITE(WTDACTR,mode3,3,MTDACTR_x), (*NL(FZAACTR_outlevel))),(A_UNITE(WTDACTR,mode3,3,MTDACTR_x), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4603: */
A_CALLPROC(NL(Output),(A_UNITE(XTDACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel))),(A_UNITE(XTDACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4604: */
 /* line 4605: */
 /* line 4606: */
if ( ((*(&(JTDACTR_am->Modeproc)))<0) )
{ 
 /* line 4607: */
YTDACTR = (-2);
} 
else
{ 
YTDACTR = 1;
} 
ZTDACTR = (&(JTDACTR_am->Modeproc)) ;
(*ZTDACTR) = YTDACTR;
 /* line 4608: */
A_CALLPROC(NL(LODACTR_treatam),(JTDACTR_am, VNDACTR_genam, (*(&((*NL(QYAACTR_globcurrent))->Lastid)))),(JTDACTR_am, VNDACTR_genam, (*(&((*NL(QYAACTR_globcurrent))->Lastid))),(NL(LODACTR_treatam)).nonlocals));
 /* line 4609: */
AUDACTR = (&(JTDACTR_am->Modeproc)) ;
(*AUDACTR) = (MTDACTR_x+GKAACTR_startkmp);
 /* line 4610: */
 /* line 4611: */
BUDACTR.Fn = UMAACTR_xassign;
 /* line 4612: */
BUDACTR.M = (A_CALLPROC(NL(ZICACTR_mproc),((*(&(JTDACTR_am->Mode)))),((*(&(JTDACTR_am->Mode))),(NL(ZICACTR_mproc)).nonlocals))+KQAACTR_refmark);
BUDACTR.Param = 1;
A_CALLPROC(NL(Output),(A_UNITE(CUDACTR,mode14,14,BUDACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(CUDACTR,mode14,14,BUDACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4613: */
A_CALLPROC(NL(Output),(A_UNITE(DUDACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel))),(A_UNITE(DUDACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4614: */
 /* line 4615: */
A_CALLPROC(NL(Output),(A_UNITE(EUDACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel))),(A_UNITE(EUDACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
}
 /* line 4616: */
} 
A_PROC_EXIT(modevars);
return;
} 
#undef NL

A_STATIC A68_VOID  JUDACTR_substitute(A68_INT  I, A68_INT  J, A68_INT  From, void *NonLocals)
#define NL(x) (((KUDACTR_substitute *)NonLocals)->x)
{ 
A68_INT  LUDACTR_m;
A68_INT  MUDACTR_md;
A68_65  NUDACTR_asa;
A68_INT * OUDACTR;  /* YIELD */
A68_54 * PUDACTR_ml;
A68_INT * QUDACTR_r;
A68_58 * RUDACTR_sl;
A68_208  TUDACTR_subam;   /* proc value of non-global proc */
A68_210  AVDACTR_subd;   /* proc value of non-global proc */
A68_INT  DVDACTR_k;
A68_INT  EVDACTR;  /* to part of loop */
A68_66  FVDACTR;  /* OPERATORS - mode -> union mode */
A68_66 * GVDACTR;  /* YIELD */
A68_66  HVDACTR;  /* united object - for case conformity */
A68_59 * IVDACTR_s;
A68_INT * JVDACTR;  /* YIELD */
A68_61 * KVDACTR_v;
A68_60 * LVDACTR_is;
A68_55 * MVDACTR_p;
A68_56 * NVDACTR_u;
A68_57 * OVDACTR_pp;
A68_62 * PVDACTR_a;
A68_64 * QVDACTR_stn;
A68_BOOL  RVDACTR;  /* optbool result */
A68_INT  SVDACTR;  /* clause result */
A68_INT * TVDACTR;  /* YIELD */
A_PROC_ENTRY(substitute);
 /* line 4620: */
{ 
LUDACTR_m = (I-J);
MUDACTR_md = (A_CALLPROC(NL(JGCACTR_deflex),(I),(I,(NL(JGCACTR_deflex)).nonlocals))-J);
 /* line 4621: */
 /* line 4622: */
OUDACTR = (&((&NUDACTR_asa)->Mode)) ;
(*OUDACTR) = I;
 /* line 4623: */
PUDACTR_ml = (A68_54 *)A68_NIL;
 /* line 4624: */
QUDACTR_r = (A68_INT *)A68_NIL;
 /* line 4625: */
 /* line 4627: */
A_CLOSURE( TUDACTR_subam, UUDACTR_subam, VUDACTR_subam );
(( VUDACTR_subam * ) ( TUDACTR_subam.nonlocals )) -> TUDACTR_subam = TUDACTR_subam;
(( VUDACTR_subam * ) ( TUDACTR_subam.nonlocals )) -> J = J;
(( VUDACTR_subam * ) ( TUDACTR_subam.nonlocals )) -> LUDACTR_m = LUDACTR_m;
 /* line 4645: */
A_CLOSURE( AVDACTR_subd, BVDACTR_subd, CVDACTR_subd );
(( CVDACTR_subd * ) ( AVDACTR_subd.nonlocals )) -> J = J;
(( CVDACTR_subd * ) ( AVDACTR_subd.nonlocals )) -> I = I;
 /* line 4652: */
 /* line 4653: */
EVDACTR = (*NL(VYAACTR_lastmode));
for ( DVDACTR_k = From;
DVDACTR_k <= EVDACTR;
DVDACTR_k += 1 )
{ 
 /* line 4654: */
if ( (DVDACTR_k==J) )
{ 
 /* line 4655: */
GVDACTR = (&A_VINDEX(NL(KUAACTR_modes),DVDACTR_k)) ;
(*GVDACTR) = A_UNITE(FVDACTR,mode11,11,NUDACTR_asa);
} 
else
{ 
 /* line 4656: */
HVDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),DVDACTR_k))) ;
switch ( HVDACTR.mode )
{ 
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
IVDACTR_s = (HVDACTR.data.mode4);
 /* line 4657: */
{ 
RUDACTR_sl = (*(&(IVDACTR_s->Sels)));
 /* line 4658: */
A_CALLPROC(AVDACTR_subd,((&(IVDACTR_s->Deflex))),((&(IVDACTR_s->Deflex)),(AVDACTR_subd).nonlocals));
 /* line 4660: */
for ( ;; )
{ 
 /* line 4661: */
if ( !((RUDACTR_sl!=RQAACTR_nilsel)) ) break;
 /* line 4663: */
if ( ((A68_BITS )((A68_BITS )(*(&(RUDACTR_sl->Mode)))&LQAACTR_decsmask)==(A68_BITS )J) )
{ 
 /* line 4664: */
JVDACTR = (&(RUDACTR_sl->Mode)) ;
(*JVDACTR)+=LUDACTR_m;
} 
 /* line 4665: */
 /* line 4666: */
RUDACTR_sl = (*(&(RUDACTR_sl->Rest)));
}
 /* line 4667: */
 /* line 4668: */
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
KVDACTR_v = (HVDACTR.data.mode7);
 /* line 4669: */
{ 
A_CALLPROC(AVDACTR_subd,((&(KVDACTR_v->Deflex))),((&(KVDACTR_v->Deflex)),(AVDACTR_subd).nonlocals));
 /* line 4670: */
 /* line 4671: */
 /* line 4672: */
QUDACTR_r = (&(KVDACTR_v->Vecmode));
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
LVDACTR_is = (HVDACTR.data.mode5);
 /* line 4673: */
{ 
A_CALLPROC(AVDACTR_subd,((&(LVDACTR_is->Deflex))),((&(LVDACTR_is->Deflex)),(AVDACTR_subd).nonlocals));
 /* line 4674: */
 /* line 4675: */
 /* line 4676: */
QUDACTR_r = (&(LVDACTR_is->Imode));
} 
break;
case 6: /* REF STRUCT(INT)  */
MVDACTR_p = (HVDACTR.data.mode6);
 /* line 4677: */
 /* line 4678: */
QUDACTR_r = (&(MVDACTR_p->Deproc));
break;
case 2: /* REF STRUCT(INT,REF MODE54)  */
NVDACTR_u = (HVDACTR.data.mode2);
 /* line 4679: */
 /* line 4680: */
PUDACTR_ml = (*(&(NVDACTR_u->Modelist)));
break;
case 3: /* REF STRUCT(INT,REF MODE54)  */
OVDACTR_pp = (HVDACTR.data.mode3);
 /* line 4681: */
{ 
QUDACTR_r = (&(OVDACTR_pp->Deproc));
 /* line 4682: */
 /* line 4683: */
 /* line 4684: */
PUDACTR_ml = (*(&(OVDACTR_pp->Pars)));
} 
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
PVDACTR_a = (HVDACTR.data.mode8);
 /* line 4685: */
{ 
A_CALLPROC(AVDACTR_subd,((&(PVDACTR_a->Deflex))),((&(PVDACTR_a->Deflex)),(AVDACTR_subd).nonlocals));
 /* line 4686: */
 /* line 4687: */
 /* line 4688: */
QUDACTR_r = (&(PVDACTR_a->Mode));
} 
break;
case 9: /* REF STRUCT(INT,REF MODE63)  */
QVDACTR_stn = (HVDACTR.data.mode9);
 /* line 4689: */
 /* line 4690: */
 /* line 4691: */
QUDACTR_r = (&(QVDACTR_stn->Mode));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 4693: */
 /* line 4694: */
RVDACTR = (QUDACTR_r!=ZQAACTR_nilint);
if ( RVDACTR )
{ /* line 4695: */
RVDACTR = ((A68_BITS )((A68_BITS )(*QUDACTR_r)&LQAACTR_decsmask)==(A68_BITS )J);
}
if ( RVDACTR )
{ 
(*QUDACTR_r)+=LUDACTR_m;
 /* line 4696: */
 /* line 4697: */
QUDACTR_r = (A68_INT *)A68_NIL;
} 
 /* line 4699: */
for ( ;; )
{ 
 /* line 4700: */
if ( !((PUDACTR_ml!=OQAACTR_nilml)) ) break;
 /* line 4701: */
if ( ((A68_BITS )((A68_BITS )(*(&(PUDACTR_ml->Mode)))&LQAACTR_decsmask)==(A68_BITS )J) )
{ 
 /* line 4702: */
 /* line 4703: */
if ( ((*(&(PUDACTR_ml->Mode)))<KQAACTR_refmark) )
{ 
 /* line 4704: */
SVDACTR = MUDACTR_md;
} 
else
{ 
 /* line 4705: */
SVDACTR = LUDACTR_m;
} 
TVDACTR = (&(PUDACTR_ml->Mode)) ;
(*TVDACTR)+=SVDACTR;
} 
 /* line 4706: */
 /* line 4707: */
PUDACTR_ml = (*(&(PUDACTR_ml->Rest)));
}
 /* line 4708: */
 /* line 4709: */
} 
}
 /* line 4710: */
 /* line 4711: */
A_CALLPROC(TUDACTR_subam,((*NL(TYAACTR_untreated))),((*NL(TYAACTR_untreated)),(TUDACTR_subam).nonlocals));
} 
A_PROC_EXIT(substitute);
return;
} 
#undef NL

A_STATIC A68_VOID  WVDACTR_checkmodes(A68_53 * Aml, void *NonLocals)
#define NL(x) (((XVDACTR_checkmodes *)NonLocals)->x)
{ 
A68_53 * YVDACTR_a;
A68_BOOL  ZVDACTR_b;
A_PROC_ENTRY(checkmodes);
 /* line 4716: */
{ 
YVDACTR_a = Aml;
 /* line 4717: */
ZVDACTR_b = A68_TRUE;
 /* line 4718: */
for ( ;; )
{ 
 /* line 4719: */
if ( !((YVDACTR_a!=PQAACTR_nilaml)) ) break;
 /* line 4720: */
if ( !A_CALLPROC(NL(PLDACTR_mcond),((*(&((*(&(YVDACTR_a->Am)))->Mode))), (A68_54 *)A68_NIL, 0),((*(&((*(&(YVDACTR_a->Am)))->Mode))), (A68_54 *)A68_NIL, 0,(NL(PLDACTR_mcond)).nonlocals)) )
{ 
A_CALLPROC(NL(PZBACTR_faultp),(121, (*(&((*(&(YVDACTR_a->Am)))->Mode))), 0, (A68_31 *)A68_NIL),(121, (*(&((*(&(YVDACTR_a->Am)))->Mode))), 0, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
 /* line 4722: */
 /* line 4723: */
 /* line 4724: */
 /* line 4725: */
A_CALLPROC(NL(IUDACTR_substitute),(ZKAACTR_faultmode, (A68_INT )(A68_BITS )((A68_BITS )(*(&((*(&(YVDACTR_a->Am)))->Mode)))&LQAACTR_decsmask), NL(YYAACTR_newmode1)),(ZKAACTR_faultmode, (A68_INT )(A68_BITS )((A68_BITS )(*(&((*(&(YVDACTR_a->Am)))->Mode)))&LQAACTR_decsmask), NL(YYAACTR_newmode1),(NL(IUDACTR_substitute)).nonlocals));
 /* line 4726: */
 /* line 4727: */
(*NL(TYAACTR_untreated)) = (A68_53 *)A68_NIL;
} 
 /* line 4728: */
 /* line 4729: */
YVDACTR_a = (*(&(YVDACTR_a->Rest)));
}
 /* line 4730: */
} 
A_PROC_EXIT(checkmodes);
return;
} 
#undef NL

A_STATIC A68_VOID  BWDACTR_removedupl(A68_54 * M)
{ 
A68_INT  CWDACTR_mode;
A68_54 * DWDACTR_m1;
A68_54 ** EWDACTR_m2;
A_PROC_ENTRY(removedupl);
 /* line 4734: */
{ 
 /* line 4735: */
DWDACTR_m1 = M;
 /* line 4736: */
 /* line 4737: */
for ( ;; )
{ 
 /* line 4738: */
if ( !((DWDACTR_m1!=OQAACTR_nilml)) ) break;
CWDACTR_mode = (*(&(DWDACTR_m1->Mode)));
 /* line 4739: */
EWDACTR_m2 = (&(DWDACTR_m1->Rest));
 /* line 4740: */
for ( ;; )
{ 
 /* line 4741: */
if ( !(((*EWDACTR_m2)!=OQAACTR_nilml)) ) break;
 /* line 4742: */
if ( ((*(&((*EWDACTR_m2)->Mode)))==CWDACTR_mode) )
{ 
 /* line 4743: */
(*EWDACTR_m2) = (*(&((*EWDACTR_m2)->Rest)));
} 
else
{ 
 /* line 4744: */
 /* line 4745: */
EWDACTR_m2 = (&((*EWDACTR_m2)->Rest));
} 
}
 /* line 4746: */
 /* line 4747: */
DWDACTR_m1 = (*(&(DWDACTR_m1->Rest)));
}
 /* line 4748: */
} 
A_PROC_EXIT(removedupl);
return;
} 
#undef NL

A_STATIC A68_54 * IWDACTR_flattenunion(A68_56 * U, A68_100  Done, void *NonLocals)
#define NL(x) (((JWDACTR_flattenunion *)NonLocals)->x)
{ 
A68_54 * MWDACTR_n;
A68_54 * NWDACTR_p;
A68_54 ** OWDACTR_rm;
A68_INT  PWDACTR;  /* YIELD */
A68_66  QWDACTR;  /* united object - for case conformity */
A68_56 * RWDACTR_uu;
A68_INT  SWDACTR_di;
A68_INT * TWDACTR;  /* forall control - []x */
A68_INT  UWDACTR;  /* forall loop counter */
A68_151  WWDACTR_generator;   /* proc value of non-global proc */
A68_100  CXDACTR;  /* avoid structure result */
A68_100  BXDACTR_new;
A68_100  DXDACTR;  /* OPERATORS - trim index */
A68_100  EXDACTR;  /* YIELD */
A68_INT  FXDACTR;  /* YIELD */
A68_INT * GXDACTR;  /* YIELD */
A68_54  HXDACTR;  /* collateral clause result */
A68_54 * IXDACTR;  /* YIELD */
A68_54 * JXDACTR;  /* clause result */
A_PROC_ENTRY(flattenunion);
 /* line 4752: */
{ 
 /* line 4753: */
OWDACTR_rm = (&(U->Modelist));
 /* line 4754: */
for ( ;; )
{ 
 /* line 4755: */
if ( !(((*OWDACTR_rm)!=OQAACTR_nilml)) ) break;
 /* line 4756: */
if ( ((*(&((*OWDACTR_rm)->Mode)))<KQAACTR_refmark) )
{ 
 /* line 4757: */
PWDACTR = (*(&((*OWDACTR_rm)->Mode))) ;
QWDACTR = (*(&A_VINDEX(NL(KUAACTR_modes),PWDACTR))) ;
switch ( QWDACTR.mode )
{ 
case 2: /* REF STRUCT(INT,REF MODE54)  */
RWDACTR_uu = (QWDACTR.data.mode2);
 /* line 4758: */
{ 
UWDACTR = Done.upb -1;
TWDACTR = Done.data;
for (;UWDACTR-- >= 0;
(TWDACTR++
) )
{
SWDACTR_di = *TWDACTR;
 /* line 4759: */
 /* line 4760: */
if ( (SWDACTR_di==(*(&((*OWDACTR_rm)->Mode)))) )
{ 
A_CALLPROC(NL(PZBACTR_faultp),(121, (*(&((*OWDACTR_rm)->Mode))), 0, (A68_31 *)A68_NIL),(121, (*(&((*OWDACTR_rm)->Mode))), 0, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
 /* line 4761: */
 /* line 4762: */
 /* line 4763: */
goto LWDACTR_end;
} 
}
 /* line 4764: */
A_CLOSURE( WWDACTR_generator, XWDACTR_generator, YWDACTR_generator );
(( YWDACTR_generator * ) ( WWDACTR_generator.nonlocals )) -> Done = Done;
A_CALLPROC(WWDACTR_generator,(A68_TRUE, &CXDACTR),(A68_TRUE, &CXDACTR,(WWDACTR_generator).nonlocals));
BXDACTR_new = CXDACTR;
 /* line 4765: */
EXDACTR = A_VTRIM(DXDACTR,(BXDACTR_new),A_VTSCRIPT(&(DXDACTR.upb),(BXDACTR_new).upb,1,Done.upb)) ;
A_VASSIGN2(Done,EXDACTR,A68_INT );
FXDACTR = BXDACTR_new.upb ;
GXDACTR = (&A_VINDEX(BXDACTR_new,FXDACTR)) ;
(*GXDACTR) = (*(&((*OWDACTR_rm)->Mode)));
 /* line 4766: */
MWDACTR_n = A_CALLPROC(NL(HWDACTR_flattenunion),(RWDACTR_uu, BXDACTR_new),(RWDACTR_uu, BXDACTR_new,(NL(HWDACTR_flattenunion)).nonlocals));
 /* line 4767: */
NWDACTR_p = (*(&((*OWDACTR_rm)->Rest)));
 /* line 4768: */
for ( ;; )
{ 
 /* line 4769: */
if ( !((MWDACTR_n!=OQAACTR_nilml)) ) break;
 /* line 4770: */
HXDACTR.Mode = (*(&(MWDACTR_n->Mode)));
HXDACTR.Rest = (A68_54 *)A68_NIL;
IXDACTR = A_HEAP(A68_54 ) ;
(*IXDACTR) = HXDACTR ;
(*OWDACTR_rm) = IXDACTR;
 /* line 4771: */
OWDACTR_rm = (&((*OWDACTR_rm)->Rest));
 /* line 4772: */
 /* line 4773: */
MWDACTR_n = (*(&(MWDACTR_n->Rest)));
}
 /* line 4774: */
 /* line 4775: */
 /* line 4776: */
(*OWDACTR_rm) = NWDACTR_p;
} 
break;
default: 
 /* line 4777: */
 /* line 4778: */
OWDACTR_rm = (&((*OWDACTR_rm)->Rest));
break;
} 
} 
else
{ 
 /* line 4779: */
 /* line 4780: */
OWDACTR_rm = (&((*OWDACTR_rm)->Rest));
} 
}
 /* line 4781: */
LWDACTR_end:
 /* line 4782: */
JXDACTR = (*(&(U->Modelist)));
} 
A_PROC_EXIT(flattenunion);
return( JXDACTR );
} 
#undef NL

A_STATIC A68_VOID  MXDACTR_accidental_eqs(A68_213  Mds, void *NonLocals)
#define NL(x) (((NXDACTR_accidental_eqs *)NonLocals)->x)
{ 
A68_INT  OXDACTR_u;
A68_INT  PXDACTR_l;
A68_216  RXDACTR_generator;   /* proc value of non-global proc */
A68_215  XXDACTR;  /* avoid structure result */
A68_215  WXDACTR_ind;
A68_216  ZXDACTR_generator;   /* proc value of non-global proc */
A68_215  FYDACTR;  /* avoid structure result */
A68_215  EYDACTR_classno;
A68_INT  GYDACTR_i;
A68_INT  HYDACTR;  /* to part of loop */
A68_INT * IYDACTR;  /* YIELD */
A68_INT * JYDACTR;  /* YIELD */
A68_199  LYDACTR_generator;   /* proc value of non-global proc */
A68_198  RYDACTR;  /* avoid structure result */
A68_198  QYDACTR_classes;
A68_217  UYDACTR_f;   /* proc value of non-global proc */
A68_218  EZDACTR_flist;   /* proc value of non-global proc */
A68_INT  MZDACTR_nc;
A68_INT  NZDACTR_x;
A68_INT  OZDACTR_y;
A68_70 * PZDACTR_alter;
A68_70  QZDACTR;  /* collateral clause result */
A68_INT  RZDACTR;  /* YIELD */
A68_70 * SZDACTR;  /* YIELD */
A68_BOOL  TZDACTR_change;
A68_70 * UZDACTR_cx;
A68_INT  VZDACTR;  /* YIELD */
A68_INT  WZDACTR;  /* YIELD */
A68_66 * XZDACTR_mx;
A68_66  YZDACTR;  /* united object - for case conformity */
A68_INT * ZZDACTR;  /* YIELD */
A68_INT  AAEACTR;  /* YIELD */
A68_66 * BAEACTR_my;
A68_66  CAEACTR;  /* united object - for case conformity */
A68_INT  DAEACTR;  /* YIELD */
A68_INT  EAEACTR_z;
A68_INT  FAEACTR;  /* YIELD */
A68_INT * GAEACTR;  /* YIELD */
A68_INT * HAEACTR;  /* YIELD */
A68_INT * IAEACTR;  /* YIELD */
union {  /* BIOP 99 */
A68_66 *  source;
A68_INT *  destination;
} JAEACTR; 
union {  /* BIOP 99 */
A68_66 *  source;
A68_INT *  destination;
} KAEACTR; 
A68_BOOL  LAEACTR;  /* optbool result */
A68_66  MAEACTR;  /* united object - for case conformity */
A68_55 * NAEACTR_px;
A68_66  OAEACTR;  /* united object - for case conformity */
A68_55 * PAEACTR_py;
A68_BOOL  QAEACTR;  /* clause result */
A68_57 * RAEACTR_px;
A68_66  SAEACTR;  /* united object - for case conformity */
A68_57 * TAEACTR_py;
A68_BOOL  UAEACTR;  /* optbool result */
A68_59 * VAEACTR_sx;
A68_66  WAEACTR;  /* united object - for case conformity */
A68_59 * XAEACTR_sy;
A68_58 ** YAEACTR;  /* YIELD */
A68_58 ** ZAEACTR_slx;
A68_58 ** ABEACTR;  /* YIELD */
A68_58 ** BBEACTR_sly;
A68_BOOL  CBEACTR;  /* optbool result */
A68_VC  DBEACTR;  /* OPERATORS - istruct -> vector */
A68_31  EBEACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FBEACTR;  /* OPERATORS - istruct -> vector */
A68_31  GBEACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  HBEACTR;  /* optbool result */
A68_56 * IBEACTR_ux;
A68_66  JBEACTR;  /* united object - for case conformity */
A68_56 * KBEACTR_uy;
A68_62 * LBEACTR_ax;
A68_66  MBEACTR;  /* united object - for case conformity */
A68_62 * NBEACTR_ay;
A68_BOOL  OBEACTR;  /* optbool result */
A68_60 * PBEACTR_ix;
A68_66  QBEACTR;  /* united object - for case conformity */
A68_60 * RBEACTR_iy;
A68_BOOL  SBEACTR;  /* optbool result */
A68_64 * TBEACTR_sx;
A68_66  UBEACTR;  /* united object - for case conformity */
A68_64 * VBEACTR_sy;
A68_61 * WBEACTR_vx;
A68_66  XBEACTR;  /* united object - for case conformity */
A68_61 * YBEACTR_vy;
A68_INT  ZBEACTR;  /* YIELD */
A68_INT  ACEACTR_z;
A68_INT  BCEACTR;  /* YIELD */
A68_INT * CCEACTR;  /* YIELD */
A68_INT * DCEACTR;  /* YIELD */
A68_INT  ECEACTR;  /* YIELD */
A68_70  FCEACTR;  /* collateral clause result */
A68_INT * GCEACTR;  /* YIELD */
A68_INT * HCEACTR;  /* YIELD */
A68_INT  ICEACTR_i;
A68_INT  JCEACTR;  /* to part of loop */
A68_INT  KCEACTR;  /* YIELD */
A68_INT * LCEACTR;  /* YIELD */
A68_70 * MCEACTR_ci;
A68_198  NCEACTR;  /* OPERATORS - trim index */
A68_198  OCEACTR;  /* forall yield */
A68_INT  PCEACTR;  /* forall loop counter */
A68_INT  QCEACTR;  /* YIELD */
A68_INT  RCEACTR_nm;
A68_INT  SCEACTR_i;
A68_INT  TCEACTR;  /* to part of loop */
A_PROC_ENTRY(accidental_eqs);
 /* line 4787: */
{ 
OXDACTR_u = Mds.dim[0].upb;
PXDACTR_l = Mds.dim[0].lwb;
 /* line 4788: */
A_CLOSURE( RXDACTR_generator, SXDACTR_generator, TXDACTR_generator );
(( TXDACTR_generator * ) ( RXDACTR_generator.nonlocals )) -> PXDACTR_l = PXDACTR_l;
(( TXDACTR_generator * ) ( RXDACTR_generator.nonlocals )) -> OXDACTR_u = OXDACTR_u;
A_CALLPROC(RXDACTR_generator,(A68_TRUE, &XXDACTR),(A68_TRUE, &XXDACTR,(RXDACTR_generator).nonlocals));
WXDACTR_ind = XXDACTR;
 /* line 4789: */
A_CLOSURE( ZXDACTR_generator, AYDACTR_generator, BYDACTR_generator );
(( BYDACTR_generator * ) ( ZXDACTR_generator.nonlocals )) -> PXDACTR_l = PXDACTR_l;
(( BYDACTR_generator * ) ( ZXDACTR_generator.nonlocals )) -> OXDACTR_u = OXDACTR_u;
A_CALLPROC(ZXDACTR_generator,(A68_TRUE, &FYDACTR),(A68_TRUE, &FYDACTR,(ZXDACTR_generator).nonlocals));
EYDACTR_classno = FYDACTR;
 /* line 4790: */
HYDACTR = OXDACTR_u;
for ( GYDACTR_i = PXDACTR_l;
GYDACTR_i <= HYDACTR;
GYDACTR_i += 1 )
{ 
IYDACTR = (&A_R1INDEX(WXDACTR_ind,GYDACTR_i)) ;
(*IYDACTR) = GYDACTR_i;
JYDACTR = (&A_R1INDEX(EYDACTR_classno,GYDACTR_i)) ;
(*JYDACTR) = 1;
}
 /* line 4792: */
A_CLOSURE( LYDACTR_generator, MYDACTR_generator, NYDACTR_generator );
(( NYDACTR_generator * ) ( LYDACTR_generator.nonlocals )) -> OXDACTR_u = OXDACTR_u;
(( NYDACTR_generator * ) ( LYDACTR_generator.nonlocals )) -> PXDACTR_l = PXDACTR_l;
A_CALLPROC(LYDACTR_generator,(A68_TRUE, &RYDACTR),(A68_TRUE, &RYDACTR,(LYDACTR_generator).nonlocals));
QYDACTR_classes = RYDACTR;
 /* line 4794: */
A_CLOSURE( UYDACTR_f, VYDACTR_f, WYDACTR_f );
(( WYDACTR_f * ) ( UYDACTR_f.nonlocals )) -> PXDACTR_l = PXDACTR_l;
(( WYDACTR_f * ) ( UYDACTR_f.nonlocals )) -> EYDACTR_classno = EYDACTR_classno;
 /* line 4800: */
A_CLOSURE( EZDACTR_flist, FZDACTR_flist, GZDACTR_flist );
(( GZDACTR_flist * ) ( EZDACTR_flist.nonlocals )) -> UYDACTR_f = UYDACTR_f;
 /* line 4809: */
MZDACTR_nc = 1;
 /* line 4810: */
 /* line 4811: */
QZDACTR.I = PXDACTR_l;
QZDACTR.J = OXDACTR_u;
RZDACTR = 1 ;
SZDACTR = (&A_VINDEX(QYDACTR_classes,RZDACTR)) ;
(*SZDACTR) = QZDACTR;
 /* line 4812: */
TZDACTR_change = A68_TRUE;
 /* line 4813: */
for ( ;; )
{ 
 /* line 4814: */
if ( !(TZDACTR_change) ) break;
TZDACTR_change = A68_FALSE;
 /* line 4815: */
NZDACTR_x = 1;
 /* line 4816: */
for ( ;; )
{ 
 /* line 4817: */
if ( !((NZDACTR_x<=MZDACTR_nc)) ) break;
UZDACTR_cx = (&A_VINDEX(QYDACTR_classes,NZDACTR_x));
 /* line 4818: */
 /* line 4819: */
if ( ((*(&(UZDACTR_cx->I)))<(*(&(UZDACTR_cx->J)))) )
{ 
VZDACTR = (*(&(UZDACTR_cx->I))) ;
WZDACTR = (*(&A_R1INDEX(WXDACTR_ind,VZDACTR))) ;
XZDACTR_mx = (&A_R1INDEX(Mds,WZDACTR));
 /* line 4820: */
 /* line 4821: */
YZDACTR = (*XZDACTR_mx) ;
switch ( YZDACTR.mode )
{ 
case 11: /* STRUCT(INT)  */
 /* line 4822: */
 /* line 4823: */
ZZDACTR = (&(UZDACTR_cx->I)) ;
(*ZZDACTR)+=1;
break;
default: 
PZDACTR_alter = (A68_70 *)A68_NIL;
 /* line 4824: */
OZDACTR_y = ((*(&(UZDACTR_cx->I)))+1);
 /* line 4825: */
for ( ;; )
{ 
 /* line 4826: */
if ( !((OZDACTR_y<=(*(&(UZDACTR_cx->J))))) ) break;
AAEACTR = (*(&A_R1INDEX(WXDACTR_ind,OZDACTR_y))) ;
BAEACTR_my = (&A_R1INDEX(Mds,AAEACTR));
 /* line 4827: */
 /* line 4828: */
CAEACTR = (*BAEACTR_my) ;
switch ( CAEACTR.mode )
{ 
case 11: /* STRUCT(INT)  */
{ 
TZDACTR_change = A68_TRUE;
 /* line 4829: */
DAEACTR = (*(&(UZDACTR_cx->J))) ;
EAEACTR_z = (*(&A_R1INDEX(WXDACTR_ind,DAEACTR)));
 /* line 4830: */
FAEACTR = (*(&(UZDACTR_cx->J))) ;
GAEACTR = (&A_R1INDEX(WXDACTR_ind,FAEACTR)) ;
(*GAEACTR) = (*(&A_R1INDEX(WXDACTR_ind,OZDACTR_y)));
 /* line 4831: */
HAEACTR = (&A_R1INDEX(WXDACTR_ind,OZDACTR_y)) ;
(*HAEACTR) = EAEACTR_z;
 /* line 4832: */
 /* line 4833: */
 /* line 4834: */
IAEACTR = (&(UZDACTR_cx->J)) ;
(*IAEACTR)-=1;
} 
break;
default: 
 /* line 4835: */
JAEACTR.source = XZDACTR_mx ;
KAEACTR.source = BAEACTR_my ;
LAEACTR = ((*(JAEACTR.destination))==(*(KAEACTR.destination)));
if ( LAEACTR )
{ /* line 4836: */
MAEACTR = (*XZDACTR_mx) ;
switch ( MAEACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
NAEACTR_px = (MAEACTR.data.mode6);
 /* line 4837: */
 /* line 4838: */
OAEACTR = (*BAEACTR_my) ;
switch ( OAEACTR.mode )
{ 
case 6: /* REF STRUCT(INT)  */
PAEACTR_py = (OAEACTR.data.mode6);
 /* line 4839: */
QAEACTR = A_CALLPROC(UYDACTR_f,((*(&(NAEACTR_px->Deproc))), (*(&(PAEACTR_py->Deproc)))),((*(&(NAEACTR_px->Deproc))), (*(&(PAEACTR_py->Deproc))),(UYDACTR_f).nonlocals));
break;
default: 
 /* line 4840: */
 /* line 4841: */
QAEACTR = A68_FALSE;
break;
} 
break;
case 3: /* REF STRUCT(INT,REF MODE54)  */
RAEACTR_px = (MAEACTR.data.mode3);
 /* line 4842: */
 /* line 4843: */
SAEACTR = (*BAEACTR_my) ;
switch ( SAEACTR.mode )
{ 
case 3: /* REF STRUCT(INT,REF MODE54)  */
TAEACTR_py = (SAEACTR.data.mode3);
 /* line 4844: */
UAEACTR = A_CALLPROC(UYDACTR_f,((*(&(RAEACTR_px->Deproc))), (*(&(TAEACTR_py->Deproc)))),((*(&(RAEACTR_px->Deproc))), (*(&(TAEACTR_py->Deproc))),(UYDACTR_f).nonlocals));
if ( UAEACTR )
{ /* line 4845: */
UAEACTR = A_CALLPROC(EZDACTR_flist,((*(&(RAEACTR_px->Pars))), (*(&(TAEACTR_py->Pars)))),((*(&(RAEACTR_px->Pars))), (*(&(TAEACTR_py->Pars))),(EZDACTR_flist).nonlocals));
}
QAEACTR = UAEACTR;
break;
default: 
 /* line 4846: */
 /* line 4847: */
QAEACTR = A68_FALSE;
break;
} 
break;
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
VAEACTR_sx = (MAEACTR.data.mode4);
 /* line 4848: */
 /* line 4849: */
WAEACTR = (*BAEACTR_my) ;
switch ( WAEACTR.mode )
{ 
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
XAEACTR_sy = (WAEACTR.data.mode4);
 /* line 4850: */
 /* line 4851: */
{ 
YAEACTR = A_HEAP(A68_58 *) ;
(*YAEACTR) = (*(&(VAEACTR_sx->Sels))) ;
ZAEACTR_slx = YAEACTR;
 /* line 4852: */
ABEACTR = A_HEAP(A68_58 *) ;
(*ABEACTR) = (*(&(XAEACTR_sy->Sels))) ;
BBEACTR_sly = ABEACTR;
 /* line 4853: */
for ( ;; )
{ 
 /* line 4854: */
CBEACTR = ((*ZAEACTR_slx)!=RQAACTR_nilsel);
if ( CBEACTR )
{CBEACTR = ((*BBEACTR_sly)!=RQAACTR_nilsel);
}
 /* line 4855: */
if ( CBEACTR )
{EBEACTR = (*(&((*ZAEACTR_slx)->Name))) ;
GBEACTR = (*(&((*BBEACTR_sly)->Name))) ;
CBEACTR = A_VC_EQ(A_HISVEC(DBEACTR,EBEACTR,32,A68_CHAR ),A_HISVEC(FBEACTR,GBEACTR,32,A68_CHAR ));
}
 /* line 4856: */
if ( CBEACTR )
{ /* line 4857: */
CBEACTR = A_CALLPROC(UYDACTR_f,((*(&((*ZAEACTR_slx)->Mode))), (*(&((*BBEACTR_sly)->Mode)))),((*(&((*ZAEACTR_slx)->Mode))), (*(&((*BBEACTR_sly)->Mode))),(UYDACTR_f).nonlocals));
}
if ( !(CBEACTR) ) break;
(*ZAEACTR_slx) = (*(&((*ZAEACTR_slx)->Rest)));
 /* line 4858: */
(*BBEACTR_sly) = (*(&((*BBEACTR_sly)->Rest)));
}
 /* line 4859: */
HBEACTR = ((*ZAEACTR_slx)==RQAACTR_nilsel);
if ( HBEACTR )
{ /* line 4860: */
HBEACTR = ((*BBEACTR_sly)==RQAACTR_nilsel);
}
 /* line 4861: */
QAEACTR = HBEACTR;
} 
break;
default: 
 /* line 4862: */
 /* line 4863: */
QAEACTR = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(INT,REF MODE54)  */
IBEACTR_ux = (MAEACTR.data.mode2);
 /* line 4864: */
 /* line 4865: */
JBEACTR = (*BAEACTR_my) ;
switch ( JBEACTR.mode )
{ 
case 2: /* REF STRUCT(INT,REF MODE54)  */
KBEACTR_uy = (JBEACTR.data.mode2);
 /* line 4866: */
QAEACTR = A_CALLPROC(EZDACTR_flist,((*(&(IBEACTR_ux->Modelist))), (*(&(KBEACTR_uy->Modelist)))),((*(&(IBEACTR_ux->Modelist))), (*(&(KBEACTR_uy->Modelist))),(EZDACTR_flist).nonlocals));
break;
default: 
 /* line 4867: */
 /* line 4868: */
QAEACTR = A68_FALSE;
break;
} 
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
LBEACTR_ax = (MAEACTR.data.mode8);
 /* line 4869: */
 /* line 4870: */
MBEACTR = (*BAEACTR_my) ;
switch ( MBEACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
NBEACTR_ay = (MBEACTR.data.mode8);
 /* line 4871: */
OBEACTR = ((*(&(LBEACTR_ax->Nods)))==(*(&(NBEACTR_ay->Nods))));
if ( OBEACTR )
{ /* line 4872: */
OBEACTR = A_CALLPROC(UYDACTR_f,((*(&(LBEACTR_ax->Mode))), (*(&(NBEACTR_ay->Mode)))),((*(&(LBEACTR_ax->Mode))), (*(&(NBEACTR_ay->Mode))),(UYDACTR_f).nonlocals));
}
QAEACTR = OBEACTR;
break;
default: 
 /* line 4873: */
 /* line 4874: */
QAEACTR = A68_FALSE;
break;
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
PBEACTR_ix = (MAEACTR.data.mode5);
 /* line 4875: */
 /* line 4876: */
QBEACTR = (*BAEACTR_my) ;
switch ( QBEACTR.mode )
{ 
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
RBEACTR_iy = (QBEACTR.data.mode5);
 /* line 4877: */
SBEACTR = ((*(&(PBEACTR_ix->Length)))==(*(&(RBEACTR_iy->Length))));
if ( SBEACTR )
{ /* line 4878: */
SBEACTR = A_CALLPROC(UYDACTR_f,((*(&(PBEACTR_ix->Imode))), (*(&(RBEACTR_iy->Imode)))),((*(&(PBEACTR_ix->Imode))), (*(&(RBEACTR_iy->Imode))),(UYDACTR_f).nonlocals));
}
QAEACTR = SBEACTR;
break;
default: 
 /* line 4879: */
 /* line 4880: */
QAEACTR = A68_FALSE;
break;
} 
break;
case 9: /* REF STRUCT(INT,REF MODE63)  */
TBEACTR_sx = (MAEACTR.data.mode9);
 /* line 4881: */
 /* line 4882: */
UBEACTR = (*BAEACTR_my) ;
switch ( UBEACTR.mode )
{ 
case 9: /* REF STRUCT(INT,REF MODE63)  */
VBEACTR_sy = (UBEACTR.data.mode9);
 /* line 4883: */
QAEACTR = A_CALLPROC(UYDACTR_f,((*(&(TBEACTR_sx->Mode))), (*(&(VBEACTR_sy->Mode)))),((*(&(TBEACTR_sx->Mode))), (*(&(VBEACTR_sy->Mode))),(UYDACTR_f).nonlocals));
break;
default: 
 /* line 4884: */
 /* line 4885: */
QAEACTR = A68_FALSE;
break;
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
WBEACTR_vx = (MAEACTR.data.mode7);
 /* line 4886: */
 /* line 4887: */
XBEACTR = (*BAEACTR_my) ;
switch ( XBEACTR.mode )
{ 
case 7: /* REF STRUCT(INT,INT,INT)  */
YBEACTR_vy = (XBEACTR.data.mode7);
 /* line 4888: */
QAEACTR = A_CALLPROC(UYDACTR_f,((*(&(WBEACTR_vx->Vecmode))), (*(&(YBEACTR_vy->Vecmode)))),((*(&(WBEACTR_vx->Vecmode))), (*(&(YBEACTR_vy->Vecmode))),(UYDACTR_f).nonlocals));
break;
default: 
 /* line 4889: */
 /* line 4890: */
QAEACTR = A68_FALSE;
break;
} 
break;
default: 
 /* line 4891: */
 /* line 4892: */
QAEACTR = A68_FALSE;
break;
} 
LAEACTR = QAEACTR;
}
if ( LAEACTR )
{ 
 /* line 4893: */
OZDACTR_y+=1;
} 
else
{ 
TZDACTR_change = A68_TRUE;
 /* line 4894: */
ZBEACTR = (*(&(UZDACTR_cx->J))) ;
ACEACTR_z = (*(&A_R1INDEX(WXDACTR_ind,ZBEACTR)));
 /* line 4895: */
BCEACTR = (*(&(UZDACTR_cx->J))) ;
CCEACTR = (&A_R1INDEX(WXDACTR_ind,BCEACTR)) ;
(*CCEACTR) = (*(&A_R1INDEX(WXDACTR_ind,OZDACTR_y)));
 /* line 4896: */
DCEACTR = (&A_R1INDEX(WXDACTR_ind,OZDACTR_y)) ;
(*DCEACTR) = ACEACTR_z;
 /* line 4897: */
 /* line 4898: */
if ( (PZDACTR_alter==(A68_70 *)A68_NIL) )
{ 
ECEACTR = MZDACTR_nc+=1 ;
PZDACTR_alter = (&A_VINDEX(QYDACTR_classes,ECEACTR));
 /* line 4899: */
FCEACTR.I = (*(&(UZDACTR_cx->J)));
 /* line 4900: */
FCEACTR.J = (*(&(UZDACTR_cx->J)));
(*PZDACTR_alter) = FCEACTR;
} 
else
{ 
 /* line 4901: */
GCEACTR = (&(PZDACTR_alter->I)) ;
(*GCEACTR) = (*(&(UZDACTR_cx->J)));
} 
 /* line 4902: */
 /* line 4903: */
 /* line 4904: */
 /* line 4905: */
HCEACTR = (&(UZDACTR_cx->J)) ;
(*HCEACTR)-=1;
} 
break;
} 
}
 /* line 4906: */
 /* line 4907: */
if ( (PZDACTR_alter!=(A68_70 *)A68_NIL) )
{ 
 /* line 4908: */
JCEACTR = (*(&(PZDACTR_alter->J)));
for ( ICEACTR_i = (*(&(PZDACTR_alter->I)));
ICEACTR_i <= JCEACTR;
ICEACTR_i += 1 )
{ 
KCEACTR = (*(&A_R1INDEX(WXDACTR_ind,ICEACTR_i))) ;
LCEACTR = (&A_R1INDEX(EYDACTR_classno,KCEACTR)) ;
(*LCEACTR) = MZDACTR_nc;
}
 /* line 4909: */
} 
 /* line 4910: */
 /* line 4911: */
 /* line 4912: */
NZDACTR_x+=1;
break;
} 
} 
else
{ 
 /* line 4913: */
 /* line 4914: */
NZDACTR_x+=1;
} 
}
 /* line 4915: */
}
 /* line 4917: */
OCEACTR = A_VTRIM(NCEACTR,(QYDACTR_classes),A_VTSCRIPT(&(NCEACTR.upb),(QYDACTR_classes).upb,1,MZDACTR_nc)) ;
PCEACTR = OCEACTR.upb -1;
MCEACTR_ci = OCEACTR.data;
for (;PCEACTR-- >= 0;
(MCEACTR_ci++
) )
{
 /* line 4918: */
 /* line 4919: */
if ( ((*(&(MCEACTR_ci->I)))<(*(&(MCEACTR_ci->J)))) )
{ 
QCEACTR = (*(&(MCEACTR_ci->I))) ;
RCEACTR_nm = (*(&A_R1INDEX(WXDACTR_ind,QCEACTR)));
 /* line 4920: */
TCEACTR = (*(&(MCEACTR_ci->J)));
for ( SCEACTR_i = ((*(&(MCEACTR_ci->I)))+1);
SCEACTR_i <= TCEACTR;
SCEACTR_i += 1 )
{ 
 /* line 4921: */
 /* line 4922: */
A_CALLPROC(NL(IUDACTR_substitute),(RCEACTR_nm, (*(&A_R1INDEX(WXDACTR_ind,SCEACTR_i))), PXDACTR_l),(RCEACTR_nm, (*(&A_R1INDEX(WXDACTR_ind,SCEACTR_i))), PXDACTR_l,(NL(IUDACTR_substitute)).nonlocals));
}
 /* line 4923: */
 /* line 4924: */
} 
}
 /* line 4925: */
} 
A_PROC_EXIT(accidental_eqs);
return;
} 
#undef NL

A_STATIC A68_VOID  WCEACTR_assign(A68_INT  Mode, void *NonLocals)
#define NL(x) (((XCEACTR_assign *)NonLocals)->x)
{ 
A68_INT  YCEACTR_i;
A68_INT  ZCEACTR_m;
A68_58 * ADEACTR_sels;
A68_INT * BDEACTR_lastid;
A68_INT  CDEACTR;  /* ADICOPS - ABS INT */
A68_BOOL  DDEACTR;  /* optbool result */
A68_BOOL  EDEACTR;  /* optbool result */
A68_85  FDEACTR;  /* collateral clause result */
A68_106  GDEACTR;  /* OPERATORS - mode -> union mode */
A68_85  HDEACTR;  /* collateral clause result */
A68_106  IDEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  JDEACTR_lastid1;
A68_68  KDEACTR;  /* collateral clause result */
A68_68  LDEACTR_rd;
A68_67  MDEACTR_forall1;
A68_67  NDEACTR_forall2;
A68_67  ODEACTR;  /* collateral clause result */
A68_67  PDEACTR_lhs;
A68_67  QDEACTR;  /* collateral clause result */
A68_67  RDEACTR_rhs;
A68_45  SDEACTR_fass;   /* proc value of non-global proc */
A68_106  EEEACTR;  /* OPERATORS - mode -> union mode */
A68_81  FEEACTR;  /* collateral clause result */
A68_106  GEEACTR;  /* OPERATORS - mode -> union mode */
A68_81  HEEACTR;  /* collateral clause result */
A68_106  IEEACTR;  /* OPERATORS - mode -> union mode */
A68_87  JEEACTR;  /* collateral clause result */
A68_106  KEEACTR;  /* OPERATORS - mode -> union mode */
A68_66  QEEACTR;  /* united object - for case conformity */
A68_59 * REEACTR_rs;
A68_INT  SEEACTR;  /* clause result */
A68_INT * TEEACTR;  /* YIELD */
A68_INT  UEEACTR_i;
A68_106  VEEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  WEEACTR;  /* YIELD */
A68_85  XEEACTR;  /* collateral clause result */
A68_106  YEEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  ZEEACTR;  /* ADICOPS - ABS INT */
A68_106  AFEACTR;  /* OPERATORS - mode -> union mode */
A68_106  BFEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  CFEACTR;  /* YIELD */
A68_85  DFEACTR;  /* collateral clause result */
A68_106  EFEACTR;  /* OPERATORS - mode -> union mode */
A68_106  FFEACTR;  /* OPERATORS - mode -> union mode */
A68_106  GFEACTR;  /* OPERATORS - mode -> union mode */
A68_61 * HFEACTR_rv;
A68_INT  IFEACTR;  /* clause result */
A68_INT * JFEACTR;  /* YIELD */
A68_60 * KFEACTR_ri;
A68_INT  LFEACTR;  /* clause result */
A68_INT * MFEACTR;  /* YIELD */
A68_106  NFEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  OFEACTR;  /* YIELD */
A68_85  PFEACTR;  /* collateral clause result */
A68_106  QFEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  RFEACTR;  /* ADICOPS - ABS INT */
A68_106  SFEACTR;  /* OPERATORS - mode -> union mode */
A68_106  TFEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  UFEACTR;  /* YIELD */
A68_85  VFEACTR;  /* collateral clause result */
A68_106  WFEACTR;  /* OPERATORS - mode -> union mode */
A68_106  XFEACTR;  /* OPERATORS - mode -> union mode */
A68_106  YFEACTR;  /* OPERATORS - mode -> union mode */
A68_62 * ZFEACTR_ra;
A68_INT  AGEACTR;  /* clause result */
A68_INT * BGEACTR;  /* YIELD */
A68_INT  CGEACTR;  /* to part of loop */
A68_INT  DGEACTR;  /* loop control */
A68_66  EGEACTR;  /* united object - for case conformity */
A68_62 * FGEACTR_a1;
A68_INT  GGEACTR_i;
A68_INT  HGEACTR;  /* to part of loop */
A68_64 * IGEACTR_rs;
A68_56 * JGEACTR_ru;
A68_54 * KGEACTR_ml;
A68_INT  LGEACTR_caseno;
A68_INT  MGEACTR_maxcase;
A68_67  NGEACTR;  /* collateral clause result */
A68_67  OGEACTR_ccdec;
A68_INT  PGEACTR;  /* clause result */
A68_INT * QGEACTR;  /* YIELD */
A68_106  RGEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  SGEACTR;  /* YIELD */
A68_106  TGEACTR;  /* OPERATORS - mode -> union mode */
A68_106  UGEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  VGEACTR;  /* YIELD */
A68_85  WGEACTR;  /* collateral clause result */
A68_106  XGEACTR;  /* OPERATORS - mode -> union mode */
A68_106  YGEACTR;  /* OPERATORS - mode -> union mode */
A68_106  ZGEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  AHEACTR;  /* ADICOPS - ABS INT */
A68_87  BHEACTR;  /* collateral clause result */
A68_106  CHEACTR;  /* OPERATORS - mode -> union mode */
A68_106  DHEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  EHEACTR;  /* YIELD */
A68_INT  FHEACTR_i;
A68_INT  GHEACTR;  /* ADICOPS - ABS INT */
A68_INT * HHEACTR;  /* YIELD */
A68_87  IHEACTR;  /* collateral clause result */
A68_106  JHEACTR;  /* OPERATORS - mode -> union mode */
A68_87  KHEACTR;  /* collateral clause result */
A68_106  LHEACTR;  /* OPERATORS - mode -> union mode */
A68_81  MHEACTR;  /* collateral clause result */
A68_106  NHEACTR;  /* OPERATORS - mode -> union mode */
A68_106  OHEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  PHEACTR;  /* YIELD */
A68_85  QHEACTR;  /* collateral clause result */
A68_106  RHEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  SHEACTR;  /* ADICOPS - ABS INT */
A68_106  THEACTR;  /* OPERATORS - mode -> union mode */
A68_106  UHEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  VHEACTR;  /* YIELD */
A68_106  WHEACTR;  /* OPERATORS - mode -> union mode */
A68_87  XHEACTR;  /* collateral clause result */
A68_106  YHEACTR;  /* OPERATORS - mode -> union mode */
A68_106  ZHEACTR;  /* OPERATORS - mode -> union mode */
A68_106  AIEACTR;  /* OPERATORS - mode -> union mode */
A68_87  BIEACTR;  /* collateral clause result */
A68_106  CIEACTR;  /* OPERATORS - mode -> union mode */
A68_106  DIEACTR;  /* OPERATORS - mode -> union mode */
A68_106  EIEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  FIEACTR;  /* YIELD */
A68_67  GIEACTR;  /* collateral clause result */
A68_67  HIEACTR;  /* collateral clause result */
A68_106  IIEACTR;  /* OPERATORS - mode -> union mode */
A68_106  JIEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  KIEACTR;  /* YIELD */
A68_106  LIEACTR;  /* OPERATORS - mode -> union mode */
A68_87  MIEACTR;  /* collateral clause result */
A68_106  NIEACTR;  /* OPERATORS - mode -> union mode */
A68_81  OIEACTR;  /* collateral clause result */
A68_106  PIEACTR;  /* OPERATORS - mode -> union mode */
A68_81  QIEACTR;  /* collateral clause result */
A68_106  RIEACTR;  /* OPERATORS - mode -> union mode */
A68_87  SIEACTR;  /* collateral clause result */
A68_106  TIEACTR;  /* OPERATORS - mode -> union mode */
A68_106  UIEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  VIEACTR;  /* YIELD */
A68_INT  WIEACTR;  /* ADICOPS - ABS INT */
A68_106  XIEACTR;  /* OPERATORS - mode -> union mode */
A68_106  YIEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  ZIEACTR;  /* YIELD */
A68_106  AJEACTR;  /* OPERATORS - mode -> union mode */
A68_106  BJEACTR;  /* OPERATORS - mode -> union mode */
A68_87  CJEACTR;  /* collateral clause result */
A68_106  DJEACTR;  /* OPERATORS - mode -> union mode */
A68_106  EJEACTR;  /* OPERATORS - mode -> union mode */
A68_106  FJEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  GJEACTR;  /* YIELD */
A68_87  HJEACTR;  /* collateral clause result */
A68_106  IJEACTR;  /* OPERATORS - mode -> union mode */
A68_87  JJEACTR;  /* collateral clause result */
A68_106  KJEACTR;  /* OPERATORS - mode -> union mode */
A68_85  LJEACTR;  /* collateral clause result */
A68_106  MJEACTR;  /* OPERATORS - mode -> union mode */
A68_106  NJEACTR;  /* OPERATORS - mode -> union mode */
A68_85  OJEACTR;  /* collateral clause result */
A68_106  PJEACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(assign);
 /* line 4932: */
 /* line 4933: */
{ 
 /* line 4934: */
 /* line 4935: */
BDEACTR_lastid = (&((*NL(QYAACTR_globcurrent))->Lastid));
 /* line 4937: */
CDEACTR = A_CALLPROC(NL(ZFCACTR_assmarker),(Mode),(Mode,(NL(ZFCACTR_assmarker)).nonlocals)) ;
YCEACTR_i = A_ABS(CDEACTR);
 /* line 4939: */
DDEACTR = (Mode==JLAACTR_xtype);
if ( ! DDEACTR )
{ /* line 4940: */
DDEACTR = (Mode==KLAACTR_ytype);
}
if ( DDEACTR )
{ 
 /* line 4942: */
A_CALLPROC(NL(QJBACTR_fault),(190),(190,(NL(QJBACTR_fault)).nonlocals));
} 
else
{ 
 /* line 4943: */
if ( (YCEACTR_i<=2) )
{ 
EDEACTR = (YCEACTR_i==2);
if ( EDEACTR )
{ /* line 4944: */
EDEACTR = ((ZCEACTR_m = A_CALLPROC(NL(JGCACTR_deflex),(Mode),(Mode,(NL(JGCACTR_deflex)).nonlocals)))!=Mode);
}
if ( EDEACTR )
{ 
FDEACTR.Fn = JMAACTR_xcopy;
FDEACTR.M = ZCEACTR_m;
FDEACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(GDEACTR,mode14,14,FDEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(GDEACTR,mode14,14,FDEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4945: */
 /* line 4946: */
YCEACTR_i = 1;
} 
 /* line 4947: */
HDEACTR.Fn = UMAACTR_xassign;
HDEACTR.M = (Mode+KQAACTR_refmark);
HDEACTR.Param = YCEACTR_i;
 /* line 4948: */
 /* line 4949: */
A_CALLPROC(NL(Output),(A_UNITE(IDEACTR,mode14,14,HDEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(IDEACTR,mode14,14,HDEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
else
{ 
 /* line 4950: */
if ( (YCEACTR_i==3) )
{ 
JDEACTR_lastid1 = (*BDEACTR_lastid);
 /* line 4951: */
(*NL(GBBACTR_lastidchanged)) = A68_TRUE;
 /* line 4952: */
 /* line 4953: */
KDEACTR.Name = A_CALLPROC(NL(KTAACTR_idmess),(61),(61,(NL(KTAACTR_idmess)).nonlocals));
 /* line 4954: */
KDEACTR.Props = (A68_BITS )(LLAACTR_ccbit|PLAACTR_globscopebit);
 /* line 4955: */
KDEACTR.Mode = A_CALLPROC(NL(LXBACTR_insertassmntproc),(Mode),(Mode,(NL(LXBACTR_insertassmntproc)).nonlocals));
KDEACTR.Rdenno = YCEACTR_i = (*NL(CZAACTR_lastrd))+=1;
KDEACTR.Maxname = 0;
 /* line 4956: */
KDEACTR.Level = 0;
KDEACTR.Rest = (A68_68 *)A68_NIL;
LDEACTR_rd = KDEACTR;
 /* line 4957: */
 /* line 4958: */
ODEACTR.Name = NL(BZAACTR_nullid);
ODEACTR.Decno = (*BDEACTR_lastid)+=1;
 /* line 4959: */
ODEACTR.Level = 1;
ODEACTR.Mode = (Mode+KQAACTR_refmark);
 /* line 4960: */
ODEACTR.Scope = 0;
ODEACTR.Rest = (A68_67 *)A68_NIL;
PDEACTR_lhs = ODEACTR;
 /* line 4961: */
QDEACTR.Name = NL(BZAACTR_nullid);
QDEACTR.Decno = (*BDEACTR_lastid)+=1;
 /* line 4962: */
QDEACTR.Level = 1;
QDEACTR.Mode = A_CALLPROC(NL(JGCACTR_deflex),(Mode),(Mode,(NL(JGCACTR_deflex)).nonlocals));
 /* line 4963: */
QDEACTR.Scope = 0;
QDEACTR.Rest = (A68_67 *)A68_NIL;
RDEACTR_rhs = QDEACTR;
 /* line 4965: */
 /* line 4966: */
A_CLOSURE( SDEACTR_fass, TDEACTR_fass, UDEACTR_fass );
(( UDEACTR_fass * ) ( SDEACTR_fass.nonlocals )) -> Output = NL(Output);
(( UDEACTR_fass * ) ( SDEACTR_fass.nonlocals )) -> PDEACTR_lhs = (&PDEACTR_lhs);
(( UDEACTR_fass * ) ( SDEACTR_fass.nonlocals )) -> FZAACTR_outlevel = NL(FZAACTR_outlevel);
(( UDEACTR_fass * ) ( SDEACTR_fass.nonlocals )) -> RDEACTR_rhs = (&RDEACTR_rhs);
(( UDEACTR_fass * ) ( SDEACTR_fass.nonlocals )) -> Mode = Mode;
 /* line 4973: */
A_CALLPROC(NL(Output),(A_UNITE(EEEACTR,mode34,34,(&LDEACTR_rd)), (*NL(FZAACTR_outlevel))),(A_UNITE(EEEACTR,mode34,34,(&LDEACTR_rd)), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4974: */
FEEACTR.Type = YOAACTR_xfdec;
FEEACTR.Iddec = (&PDEACTR_lhs);
A_CALLPROC(NL(Output),(A_UNITE(GEEACTR,mode12,12,FEEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(GEEACTR,mode12,12,FEEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4975: */
HEEACTR.Type = YOAACTR_xfdec;
HEEACTR.Iddec = (&RDEACTR_rhs);
A_CALLPROC(NL(Output),(A_UNITE(IEEACTR,mode12,12,HEEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(IEEACTR,mode12,12,HEEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4976: */
JEEACTR.Fn = ZMAACTR_xbegin;
 /* line 4977: */
JEEACTR.M = (Mode+KQAACTR_refmark);
JEEACTR.Props = (A68_BITS )(WLAACTR_compgenbit|SLAACTR_semibit);
 /* line 4978: */
JEEACTR.Param = (Mode+KQAACTR_refmark);
A_CALLPROC(NL(Output),(A_UNITE(KEEACTR,mode17,17,JEEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(KEEACTR,mode17,17,JEEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4979: */
 /* line 4980: */
{ 
 /* line 4981: */
QEEACTR = (*(&A_VINDEX(NL(KUAACTR_modes),Mode))) ;
switch ( QEEACTR.mode )
{ 
case 4: /* REF STRUCT(INT,INT,REF MODE58)  */
REEACTR_rs = (QEEACTR.data.mode4);
 /* line 4982: */
{ 
 /* line 4983: */
 /* line 4984: */
if ( ((*(&(REEACTR_rs->Rdenno)))<0) )
{ 
 /* line 4985: */
SEEACTR = (-(*NL(CZAACTR_lastrd)));
} 
else
{ 
SEEACTR = (*NL(CZAACTR_lastrd));
} 
TEEACTR = (&(REEACTR_rs->Rdenno)) ;
(*TEEACTR) = SEEACTR;
 /* line 4986: */
ADEACTR_sels = (*(&(REEACTR_rs->Sels)));
 /* line 4987: */
 /* line 4988: */
for ( UEEACTR_i = 1;;
UEEACTR_i += 1 ) 
{ 
 /* line 4989: */
if ( !((ADEACTR_sels!=RQAACTR_nilsel)) ) break;
WEEACTR = (*(&((&PDEACTR_lhs)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(VEEACTR,mode3,3,WEEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(VEEACTR,mode3,3,WEEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4990: */
 /* line 4991: */
XEEACTR.Fn = IMAACTR_xselect;
 /* line 4992: */
XEEACTR.M = ((*(&(ADEACTR_sels->Mode)))+KQAACTR_refmark);
XEEACTR.Param = UEEACTR_i;
A_CALLPROC(NL(Output),(A_UNITE(YEEACTR,mode14,14,XEEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(YEEACTR,mode14,14,XEEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4993: */
 /* line 4994: */
ZEEACTR = A_CALLPROC(NL(VECACTR_marker),((*(&(ADEACTR_sels->Mode)))),((*(&(ADEACTR_sels->Mode))),(NL(VECACTR_marker)).nonlocals)) ;
if ( (A_ABS(ZEEACTR)<=2) )
{ 
 /* line 4995: */
A_CALLPROC(NL(Output),(A_UNITE(AFEACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel))),(A_UNITE(AFEACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 4996: */
CFEACTR = (*(&((&RDEACTR_rhs)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(BFEACTR,mode3,3,CFEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(BFEACTR,mode3,3,CFEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 4997: */
 /* line 4998: */
DFEACTR.Fn = IMAACTR_xselect;
 /* line 4999: */
DFEACTR.M = A_CALLPROC(NL(JGCACTR_deflex),((*(&(ADEACTR_sels->Mode)))),((*(&(ADEACTR_sels->Mode))),(NL(JGCACTR_deflex)).nonlocals));
DFEACTR.Param = UEEACTR_i;
A_CALLPROC(NL(Output),(A_UNITE(EFEACTR,mode14,14,DFEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(EFEACTR,mode14,14,DFEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5000: */
A_CALLPROC(NL(VCEACTR_assign),((*(&(ADEACTR_sels->Mode)))),((*(&(ADEACTR_sels->Mode))),(NL(VCEACTR_assign)).nonlocals));
 /* line 5001: */
A_CALLPROC(NL(Output),(A_UNITE(FFEACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel))),(A_UNITE(FFEACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5002: */
A_CALLPROC(NL(Output),(A_UNITE(GFEACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel))),(A_UNITE(GFEACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5003: */
 /* line 5004: */
ADEACTR_sels = (*(&(ADEACTR_sels->Rest)));
}
 /* line 5005: */
 /* line 5006: */
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
HFEACTR_rv = (QEEACTR.data.mode7);
 /* line 5007: */
{ 
ZCEACTR_m = (*(&(HFEACTR_rv->Vecmode)));
 /* line 5008: */
 /* line 5009: */
 /* line 5010: */
if ( ((*(&(HFEACTR_rv->Rdenno)))<0) )
{ 
 /* line 5011: */
IFEACTR = (-(*NL(CZAACTR_lastrd)));
} 
else
{ 
IFEACTR = (*NL(CZAACTR_lastrd));
} 
JFEACTR = (&(HFEACTR_rv->Rdenno)) ;
(*JFEACTR) = IFEACTR;
 /* line 5012: */
 /* line 5013: */
if ( ((*(&(HFEACTR_rv->Deflex)))<0) )
{ 
A_CALLPROC(SDEACTR_fass,(),((SDEACTR_fass).nonlocals));
 /* line 5014: */
ZCEACTR_m = A_CALLPROC(NL(ZHCACTR_enflex),(ZCEACTR_m),(ZCEACTR_m,(NL(ZHCACTR_enflex)).nonlocals));
 /* line 5015: */
 /* line 5016: */
goto NEEACTR_loopf;
} 
else
{ 
 /* line 5017: */
 /* line 5018: */
 /* line 5019: */
goto PEEACTR_loop;
} 
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
KFEACTR_ri = (QEEACTR.data.mode5);
 /* line 5020: */
{ 
ZCEACTR_m = A_CALLPROC(NL(ZVBACTR_insertvec),((*(&(KFEACTR_ri->Imode))), 1),((*(&(KFEACTR_ri->Imode))), 1,(NL(ZVBACTR_insertvec)).nonlocals));
 /* line 5021: */
 /* line 5022: */
 /* line 5023: */
if ( ((*(&(KFEACTR_ri->Rdenno)))<0) )
{ 
 /* line 5024: */
LFEACTR = (-(*NL(CZAACTR_lastrd)));
} 
else
{ 
LFEACTR = (*NL(CZAACTR_lastrd));
} 
MFEACTR = (&(KFEACTR_ri->Rdenno)) ;
(*MFEACTR) = LFEACTR;
 /* line 5025: */
OFEACTR = (*(&((&PDEACTR_lhs)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(NFEACTR,mode3,3,OFEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(NFEACTR,mode3,3,OFEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5026: */
PFEACTR.Fn = JOAACTR_xisvec;
PFEACTR.M = (ZCEACTR_m+KQAACTR_refmark);
PFEACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(QFEACTR,mode14,14,PFEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(QFEACTR,mode14,14,PFEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5027: */
 /* line 5028: */
RFEACTR = A_CALLPROC(NL(VECACTR_marker),(ZCEACTR_m),(ZCEACTR_m,(NL(VECACTR_marker)).nonlocals)) ;
if ( (A_ABS(RFEACTR)<=2) )
{ 
 /* line 5029: */
A_CALLPROC(NL(Output),(A_UNITE(SFEACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel))),(A_UNITE(SFEACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 5030: */
UFEACTR = (*(&((&RDEACTR_rhs)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(TFEACTR,mode3,3,UFEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(TFEACTR,mode3,3,UFEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5031: */
VFEACTR.Fn = JOAACTR_xisvec;
VFEACTR.M = ZCEACTR_m;
VFEACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(WFEACTR,mode14,14,VFEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(WFEACTR,mode14,14,VFEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5032: */
A_CALLPROC(NL(VCEACTR_assign),(ZCEACTR_m),(ZCEACTR_m,(NL(VCEACTR_assign)).nonlocals));
 /* line 5033: */
A_CALLPROC(NL(Output),(A_UNITE(XFEACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel))),(A_UNITE(XFEACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5034: */
 /* line 5035: */
 /* line 5036: */
A_CALLPROC(NL(Output),(A_UNITE(YFEACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel))),(A_UNITE(YFEACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
ZFEACTR_ra = (QEEACTR.data.mode8);
 /* line 5037: */
{ 
ZCEACTR_m = (*(&(ZFEACTR_ra->Mode)));
 /* line 5038: */
 /* line 5039: */
 /* line 5040: */
if ( ((*(&(ZFEACTR_ra->Rdenno)))<0) )
{ 
 /* line 5041: */
AGEACTR = (-(*NL(CZAACTR_lastrd)));
} 
else
{ 
AGEACTR = (*NL(CZAACTR_lastrd));
} 
BGEACTR = (&(ZFEACTR_ra->Rdenno)) ;
(*BGEACTR) = AGEACTR;
 /* line 5042: */
 /* line 5043: */
if ( ((*(&(ZFEACTR_ra->Deflex)))<0) )
{ 
A_CALLPROC(SDEACTR_fass,(),((SDEACTR_fass).nonlocals));
 /* line 5044: */
 /* line 5045: */
CGEACTR = ((*(&(ZFEACTR_ra->Nods)))-1);
for ( DGEACTR = 1;
DGEACTR <= CGEACTR;
DGEACTR += 1 )
{ 
 /* line 5046: */
EGEACTR = (*(&A_VINDEX(NL(KUAACTR_modes),ZCEACTR_m))) ;
switch ( EGEACTR.mode )
{ 
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
FGEACTR_a1 = (EGEACTR.data.mode8);
 /* line 5047: */
 /* line 5048: */
 /* line 5049: */
ZCEACTR_m = (*(&(FGEACTR_a1->Mode)));
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 5050: */
ZCEACTR_m = A_CALLPROC(NL(ZHCACTR_enflex),(ZCEACTR_m),(ZCEACTR_m,(NL(ZHCACTR_enflex)).nonlocals));
 /* line 5051: */
 /* line 5052: */
HGEACTR = ((*(&(ZFEACTR_ra->Nods)))-1);
for ( GGEACTR_i = 1;
GGEACTR_i <= HGEACTR;
GGEACTR_i += 1 )
{ 
ZCEACTR_m = A_CALLPROC(NL(FVBACTR_insertarray),(ZCEACTR_m, GGEACTR_i, 1),(ZCEACTR_m, GGEACTR_i, 1,(NL(FVBACTR_insertarray)).nonlocals));
}
 /* line 5053: */
 /* line 5054: */
goto NEEACTR_loopf;
} 
else
{ 
 /* line 5055: */
 /* line 5056: */
 /* line 5057: */
goto PEEACTR_loop;
} 
} 
break;
case 9: /* REF STRUCT(INT,REF MODE63)  */
IGEACTR_rs = (QEEACTR.data.mode9);
 /* line 5058: */
 /* line 5060: */
A_CALLPROC(NL(QJBACTR_fault),(122),(122,(NL(QJBACTR_fault)).nonlocals));
break;
case 2: /* REF STRUCT(INT,REF MODE54)  */
JGEACTR_ru = (QEEACTR.data.mode2);
 /* line 5061: */
{ 
KGEACTR_ml = (*(&(JGEACTR_ru->Modelist)));
 /* line 5062: */
LGEACTR_caseno = 1;
MGEACTR_maxcase = 0;
 /* line 5063: */
NGEACTR.Name = NL(BZAACTR_nullid);
 /* line 5064: */
NGEACTR.Decno = (*BDEACTR_lastid)+=1;
NGEACTR.Level = 1;
NGEACTR.Mode = 0;
 /* line 5065: */
NGEACTR.Scope = 0;
NGEACTR.Rest = (A68_67 *)A68_NIL;
OGEACTR_ccdec = NGEACTR;
 /* line 5066: */
 /* line 5067: */
 /* line 5068: */
if ( ((*(&(JGEACTR_ru->Rdenno)))<0) )
{ 
 /* line 5069: */
PGEACTR = (-(*NL(CZAACTR_lastrd)));
} 
else
{ 
PGEACTR = (*NL(CZAACTR_lastrd));
} 
QGEACTR = (&(JGEACTR_ru->Rdenno)) ;
(*QGEACTR) = PGEACTR;
 /* line 5070: */
SGEACTR = (*(&((&PDEACTR_lhs)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(RGEACTR,mode3,3,SGEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(RGEACTR,mode3,3,SGEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5071: */
A_CALLPROC(NL(Output),(A_UNITE(TGEACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel))),(A_UNITE(TGEACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5072: */
VGEACTR = (*(&((&RDEACTR_rhs)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(UGEACTR,mode3,3,VGEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(UGEACTR,mode3,3,VGEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5073: */
WGEACTR.Fn = UMAACTR_xassign;
WGEACTR.M = (Mode+KQAACTR_refmark);
WGEACTR.Param = 1;
A_CALLPROC(NL(Output),(A_UNITE(XGEACTR,mode14,14,WGEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(XGEACTR,mode14,14,WGEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5074: */
A_CALLPROC(NL(Output),(A_UNITE(YGEACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel))),(A_UNITE(YGEACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5075: */
A_CALLPROC(NL(Output),(A_UNITE(ZGEACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel))),(A_UNITE(ZGEACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5077: */
for ( ;; )
{ 
 /* line 5078: */
if ( !((KGEACTR_ml!=OQAACTR_nilml)) ) break;
 /* line 5079: */
AHEACTR = A_CALLPROC(NL(VECACTR_marker),((*(&(KGEACTR_ml->Mode)))),((*(&(KGEACTR_ml->Mode))),(NL(VECACTR_marker)).nonlocals)) ;
if ( (A_ABS(AHEACTR)!=1) )
{ 
 /* line 5080: */
MGEACTR_maxcase+=1;
} 
 /* line 5081: */
 /* line 5082: */
KGEACTR_ml = (*(&(KGEACTR_ml->Rest)));
}
 /* line 5083: */
BHEACTR.Fn = YMAACTR_xcaseu;
 /* line 5084: */
BHEACTR.M = Mode;
 /* line 5085: */
BHEACTR.Props = WLAACTR_compgenbit;
BHEACTR.Param = YKAACTR_voidmode;
A_CALLPROC(NL(Output),(A_UNITE(CHEACTR,mode17,17,BHEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(CHEACTR,mode17,17,BHEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5086: */
EHEACTR = (*(&((&RDEACTR_rhs)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(DHEACTR,mode3,3,EHEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(DHEACTR,mode3,3,EHEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5087: */
KGEACTR_ml = (*(&(JGEACTR_ru->Modelist)));
 /* line 5088: */
 /* line 5089: */
for ( FHEACTR_i = 1;;
FHEACTR_i += 1 ) 
{ 
 /* line 5090: */
if ( !((KGEACTR_ml!=OQAACTR_nilml)) ) break;
 /* line 5091: */
GHEACTR = A_CALLPROC(NL(VECACTR_marker),((*(&(KGEACTR_ml->Mode)))),((*(&(KGEACTR_ml->Mode))),(NL(VECACTR_marker)).nonlocals)) ;
if ( (A_ABS(GHEACTR)!=1) )
{ 
HHEACTR = (&((&OGEACTR_ccdec)->Mode)) ;
(*HHEACTR) = (*(&(KGEACTR_ml->Mode)));
 /* line 5092: */
 /* line 5093: */
 /* line 5094: */
if ( (LGEACTR_caseno==1) )
{ 
 /* line 5095: */
IHEACTR.Fn = CNAACTR_xinu;
} 
else
{ 
 /* line 5096: */
IHEACTR.Fn = ENAACTR_xcommau;
} 
 /* line 5097: */
IHEACTR.M = YKAACTR_voidmode;
 /* line 5098: */
IHEACTR.Props = WLAACTR_compgenbit;
 /* line 5099: */
 /* line 5100: */
if ( (LGEACTR_caseno==1) )
{ 
 /* line 5101: */
IHEACTR.Param = (-MGEACTR_maxcase);
} 
else
{ 
 /* line 5102: */
IHEACTR.Param = LGEACTR_caseno;
} 
A_CALLPROC(NL(Output),(A_UNITE(JHEACTR,mode17,17,IHEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(JHEACTR,mode17,17,IHEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5103: */
 /* line 5104: */
KHEACTR.Fn = WNAACTR_xuchoice;
 /* line 5105: */
KHEACTR.M = (*(&(KGEACTR_ml->Mode)));
 /* line 5106: */
 /* line 5107: */
KHEACTR.Props = (A68_BITS )(ULAACTR_decbit|WLAACTR_compgenbit);
KHEACTR.Param = FHEACTR_i;
A_CALLPROC(NL(Output),(A_UNITE(LHEACTR,mode17,17,KHEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(LHEACTR,mode17,17,KHEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5108: */
 /* line 5110: */
MHEACTR.Type = BPAACTR_xccdec;
MHEACTR.Iddec = (&OGEACTR_ccdec);
A_CALLPROC(NL(Output),(A_UNITE(NHEACTR,mode12,12,MHEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(NHEACTR,mode12,12,MHEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5111: */
PHEACTR = (*(&((&PDEACTR_lhs)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(OHEACTR,mode3,3,PHEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(OHEACTR,mode3,3,PHEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5112: */
 /* line 5113: */
QHEACTR.Fn = ROAACTR_xdeunite;
 /* line 5114: */
 /* line 5116: */
QHEACTR.M = ((ZCEACTR_m = A_CALLPROC(NL(ZHCACTR_enflex),((*(&(KGEACTR_ml->Mode)))),((*(&(KGEACTR_ml->Mode))),(NL(ZHCACTR_enflex)).nonlocals)))+KQAACTR_refmark);
QHEACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(RHEACTR,mode14,14,QHEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(RHEACTR,mode14,14,QHEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5117: */
 /* line 5118: */
SHEACTR = A_CALLPROC(NL(VECACTR_marker),(ZCEACTR_m),(ZCEACTR_m,(NL(VECACTR_marker)).nonlocals)) ;
if ( (A_ABS(SHEACTR)<=2) )
{ 
 /* line 5119: */
A_CALLPROC(NL(Output),(A_UNITE(THEACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel))),(A_UNITE(THEACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 5120: */
VHEACTR = (*(&((&OGEACTR_ccdec)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(UHEACTR,mode3,3,VHEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(UHEACTR,mode3,3,VHEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5121: */
A_CALLPROC(NL(VCEACTR_assign),(ZCEACTR_m),(ZCEACTR_m,(NL(VCEACTR_assign)).nonlocals));
 /* line 5122: */
A_CALLPROC(NL(Output),(A_UNITE(WHEACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel))),(A_UNITE(WHEACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5123: */
 /* line 5124: */
LGEACTR_caseno+=1;
} 
 /* line 5125: */
 /* line 5126: */
KGEACTR_ml = (*(&(KGEACTR_ml->Rest)));
}
 /* line 5127: */
XHEACTR.Fn = HNAACTR_xoutu;
 /* line 5128: */
XHEACTR.M = YKAACTR_voidmode;
XHEACTR.Props = WLAACTR_compgenbit;
 /* line 5129: */
XHEACTR.Param = (MGEACTR_maxcase+1);
A_CALLPROC(NL(Output),(A_UNITE(YHEACTR,mode17,17,XHEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(YHEACTR,mode17,17,XHEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5130: */
A_CALLPROC(NL(Output),(A_UNITE(ZHEACTR,mode5,5,SPAACTR_skip), (*NL(FZAACTR_outlevel))),(A_UNITE(ZHEACTR,mode5,5,SPAACTR_skip), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5131: */
A_CALLPROC(NL(Output),(A_UNITE(AIEACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel))),(A_UNITE(AIEACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5132: */
BIEACTR.Fn = LNAACTR_xesacu;
 /* line 5133: */
BIEACTR.M = YKAACTR_voidmode;
 /* line 5134: */
BIEACTR.Props = WLAACTR_compgenbit;
BIEACTR.Param = YKAACTR_voidmode;
A_CALLPROC(NL(Output),(A_UNITE(CIEACTR,mode17,17,BIEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(CIEACTR,mode17,17,BIEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5135: */
 /* line 5136: */
 /* line 5137: */
 /* line 5138: */
 /* line 5140: */
A_CALLPROC(NL(Output),(A_UNITE(DIEACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel))),(A_UNITE(DIEACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
goto LEEACTR;
PEEACTR_loop:
FIEACTR = (*(&((&PDEACTR_lhs)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(EIEACTR,mode3,3,FIEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(EIEACTR,mode3,3,FIEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5141: */
NEEACTR_loopf:
GIEACTR.Name = NL(BZAACTR_nullid);
GIEACTR.Decno = (*BDEACTR_lastid)+=1;
 /* line 5142: */
GIEACTR.Level = 1;
GIEACTR.Mode = (ZCEACTR_m+KQAACTR_refmark);
 /* line 5143: */
GIEACTR.Scope = 0;
GIEACTR.Rest = (A68_67 *)A68_NIL;
MDEACTR_forall1 = GIEACTR;
 /* line 5144: */
HIEACTR.Name = NL(BZAACTR_nullid);
HIEACTR.Decno = (*BDEACTR_lastid)+=1;
HIEACTR.Level = 1;
HIEACTR.Mode = ZCEACTR_m;
HIEACTR.Scope = 0;
HIEACTR.Rest = (A68_67 *)A68_NIL;
NDEACTR_forall2 = HIEACTR;
 /* line 5146: */
A_CALLPROC(NL(Output),(A_UNITE(IIEACTR,mode16,16,JPAACTR_xwforall), (*NL(FZAACTR_outlevel))),(A_UNITE(IIEACTR,mode16,16,JPAACTR_xwforall), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5147: */
KIEACTR = (*(&((&RDEACTR_rhs)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(JIEACTR,mode3,3,KIEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(JIEACTR,mode3,3,KIEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5148: */
A_CALLPROC(NL(Output),(A_UNITE(LIEACTR,mode16,16,JPAACTR_xwforall), (*NL(FZAACTR_outlevel))),(A_UNITE(LIEACTR,mode16,16,JPAACTR_xwforall), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5149: */
MIEACTR.Fn = SNAACTR_xforall;
MIEACTR.M = 0;
MIEACTR.Props = WLAACTR_compgenbit;
MIEACTR.Param = 2;
A_CALLPROC(NL(Output),(A_UNITE(NIEACTR,mode17,17,MIEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(NIEACTR,mode17,17,MIEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5150: */
OIEACTR.Type = CPAACTR_xforalldec;
OIEACTR.Iddec = (&NDEACTR_forall2);
A_CALLPROC(NL(Output),(A_UNITE(PIEACTR,mode12,12,OIEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(PIEACTR,mode12,12,OIEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5151: */
QIEACTR.Type = CPAACTR_xforalldec;
QIEACTR.Iddec = (&MDEACTR_forall1);
A_CALLPROC(NL(Output),(A_UNITE(RIEACTR,mode12,12,QIEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(RIEACTR,mode12,12,QIEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5152: */
SIEACTR.Fn = XNAACTR_xdo;
 /* line 5153: */
SIEACTR.M = YKAACTR_voidmode;
 /* line 5154: */
SIEACTR.Props = (A68_BITS )(WLAACTR_compgenbit|SLAACTR_semibit);
SIEACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(TIEACTR,mode17,17,SIEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(TIEACTR,mode17,17,SIEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5155: */
VIEACTR = (*(&((&MDEACTR_forall1)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(UIEACTR,mode3,3,VIEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(UIEACTR,mode3,3,VIEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5156: */
 /* line 5157: */
WIEACTR = A_CALLPROC(NL(VECACTR_marker),(ZCEACTR_m),(ZCEACTR_m,(NL(VECACTR_marker)).nonlocals)) ;
if ( (A_ABS(WIEACTR)<=2) )
{ 
 /* line 5158: */
A_CALLPROC(NL(Output),(A_UNITE(XIEACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel))),(A_UNITE(XIEACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 5159: */
ZIEACTR = (*(&((&NDEACTR_forall2)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(YIEACTR,mode3,3,ZIEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(YIEACTR,mode3,3,ZIEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5160: */
A_CALLPROC(NL(VCEACTR_assign),(ZCEACTR_m),(ZCEACTR_m,(NL(VCEACTR_assign)).nonlocals));
 /* line 5161: */
A_CALLPROC(NL(Output),(A_UNITE(AJEACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel))),(A_UNITE(AJEACTR,mode14,14,IRAACTR_opervoid), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5162: */
A_CALLPROC(NL(Output),(A_UNITE(BJEACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel))),(A_UNITE(BJEACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5163: */
CJEACTR.Fn = TNAACTR_xod;
CJEACTR.M = 0;
CJEACTR.Props = WLAACTR_compgenbit;
CJEACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(DJEACTR,mode17,17,CJEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(DJEACTR,mode17,17,CJEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5164: */
 /* line 5165: */
A_CALLPROC(NL(Output),(A_UNITE(EJEACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel))),(A_UNITE(EJEACTR,mode17,17,KRAACTR_controlsemi), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
LEEACTR: ;
} 
 /* line 5166: */
GJEACTR = (*(&((&PDEACTR_lhs)->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(FJEACTR,mode3,3,GJEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(FJEACTR,mode3,3,GJEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5167: */
HJEACTR.Fn = MNAACTR_xend;
HJEACTR.M = 0;
HJEACTR.Props = WLAACTR_compgenbit;
HJEACTR.Param = (Mode+KQAACTR_refmark);
 /* line 5169: */
A_CALLPROC(NL(Output),(A_UNITE(IJEACTR,mode17,17,HJEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(IJEACTR,mode17,17,HJEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5170: */
JJEACTR.Fn = VNAACTR_xroutinend;
JJEACTR.M = 0;
JJEACTR.Props = WLAACTR_compgenbit;
JJEACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(KJEACTR,mode17,17,JJEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(KJEACTR,mode17,17,JJEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5171: */
 /* line 5172: */
if ( ((*BDEACTR_lastid)>(*NL(GZAACTR_maxident))) )
{ 
 /* line 5173: */
(*NL(GZAACTR_maxident)) = (*BDEACTR_lastid);
} 
 /* line 5174: */
 /* line 5175: */
(*BDEACTR_lastid) = JDEACTR_lastid1;
} 
 /* line 5176: */
LJEACTR.Fn = HMAACTR_xparampack;
LJEACTR.M = A_CALLPROC(NL(LXBACTR_insertassmntproc),(Mode),(Mode,(NL(LXBACTR_insertassmntproc)).nonlocals));
LJEACTR.Param = 2;
A_CALLPROC(NL(Output),(A_UNITE(MJEACTR,mode14,14,LJEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(MJEACTR,mode14,14,LJEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5177: */
A_CALLPROC(NL(Output),(A_UNITE(NJEACTR,mode3,3,YCEACTR_i), (*NL(FZAACTR_outlevel))),(A_UNITE(NJEACTR,mode3,3,YCEACTR_i), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5178: */
OJEACTR.Fn = AOAACTR_xcall;
OJEACTR.M = (Mode+KQAACTR_refmark);
OJEACTR.Param = 0;
 /* line 5179: */
 /* line 5180: */
A_CALLPROC(NL(Output),(A_UNITE(PJEACTR,mode14,14,OJEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(PJEACTR,mode14,14,OJEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
} 
} 
A_PROC_EXIT(assign);
return;
} 
#undef NL

A_STATIC A68_114 * SJEACTR_findproxy(A68_31 * Ident, void *NonLocals)
#define NL(x) (((TJEACTR_findproxy *)NonLocals)->x)
{ 
A68_114 ** UJEACTR_rprl;
A68_114 * VJEACTR_ans;
A68_BOOL  WJEACTR;  /* optbool result */
A68_VC  XJEACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YJEACTR;  /* OPERATORS - istruct -> vector */
A68_31  ZJEACTR;  /* OPERATORS - istruct -> vector */
A68_114  AKEACTR;  /* collateral clause result */
A68_114 * BKEACTR;  /* YIELD */
A68_114 * CKEACTR;  /* clause result */
A_PROC_ENTRY(findproxy);
 /* line 5183: */
{ 
UJEACTR_rprl = NL(IZAACTR_prl);
 /* line 5184: */
 /* line 5186: */
for ( ;; )
{ 
WJEACTR = ((*UJEACTR_rprl)!=GQAACTR_nilprl);
if ( WJEACTR )
{ /* line 5187: */
ZJEACTR = (*(&((*UJEACTR_rprl)->Name))) ;
WJEACTR = A_VC_NE(A_HISVEC(XJEACTR,(*Ident),32,A68_CHAR ),A_HISVEC(YJEACTR,ZJEACTR,32,A68_CHAR ));
}
if ( !(WJEACTR) ) break;
UJEACTR_rprl = (&((*UJEACTR_rprl)->Rest));
}
 /* line 5189: */
 /* line 5190: */
 /* line 5191: */
if ( ((*UJEACTR_rprl)==GQAACTR_nilprl) )
{ 
A_CALLPROC(NL(PZBACTR_faultp),(123, 0, 0, Ident),(123, 0, 0, Ident,(NL(PZBACTR_faultp)).nonlocals));
 /* line 5192: */
AKEACTR.Name = (*Ident);
AKEACTR.No = 0;
 /* line 5193: */
AKEACTR.Rest = (A68_114 *)A68_NIL;
BKEACTR = A_HEAP(A68_114 ) ;
(*BKEACTR) = AKEACTR ;
VJEACTR_ans = BKEACTR;
} 
else
{ 
VJEACTR_ans = (*UJEACTR_rprl);
 /* line 5194: */
 /* line 5195: */
(*UJEACTR_rprl) = (*(&((*UJEACTR_rprl)->Rest)));
} 
 /* line 5196: */
 /* line 5197: */
CKEACTR = VJEACTR_ans;
} 
A_PROC_EXIT(findproxy);
return( CKEACTR );
} 
#undef NL
 /* line 5203: */
 /* line 5204: */
 /* line 5205: */

A_STATIC A68_VOID  LKEACTR_simplespec(A68_BOOL  Bu, A68_127  Ids, A68_128  Inds, A68_INT * Ndno, A68_INT  Scope, A68_VC  Ka, void *NonLocals)
#define NL(x) (((MKEACTR_simplespec *)NonLocals)->x)
{ 
A68_INT * NKEACTR_ki;
A68_INT * OKEACTR_basemode;
A68_INT * PKEACTR_nomem;
A68_222  QKEACTR_anonymous;
A68_222  SKEACTR_generator;   /* proc value of non-global proc */
A68_221 * XKEACTR_modemem;
A68_221  YKEACTR;  /* avoid structure result */
A68_210  ALEACTR_remember;   /* proc value of non-global proc */
A68_188  LLEACTR_repmode;   /* proc value of non-global proc */
A68_65  TLEACTR_asa;
A68_INT * ULEACTR_noids;
A68_146  VLEACTR_anonymous;
A68_146  XLEACTR_generator;   /* proc value of non-global proc */
A68_127  DMEACTR;  /* avoid structure result */
A68_127  CMEACTR_allids;
A68_159  EMEACTR_rc;   /* proc value of non-global proc */
A68_159  JMEACTR_rw;   /* proc value of non-global proc */
A68_223  QMEACTR_rs;   /* proc value of non-global proc */
A68_172  JNEACTR_unnumber;   /* proc value of non-global proc */
A68_159  TNEACTR_readmodes;   /* proc value of non-global proc */
A68_67 * KQEACTR_id;
A68_110 * LQEACTR_ind;
A68_52 * MQEACTR_am;
A68_109 * NQEACTR_oper;
A68_108 * OQEACTR_inst;
A68_31  PQEACTR_tempid;
A68_INT  QQEACTR_hash;
A68_INT  RQEACTR_i;
A68_INT  SQEACTR;  /* clause result */
A68_INT  TQEACTR_x;
A68_67  UQEACTR;  /* collateral clause result */
A68_67 * VQEACTR;  /* YIELD */
A68_67 ** WQEACTR;  /* YIELD */
A68_BOOL  XQEACTR;  /* optbool result */
A68_VC  YQEACTR;  /* OPERATORS - istruct -> vector */
A68_31  ZQEACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AREACTR;  /* OPERATORS - istruct -> vector */
A68_110  BREACTR;  /* collateral clause result */
A68_111  CREACTR;  /* OPERATORS - mode -> union mode */
A68_110 * DREACTR;  /* YIELD */
A68_110 ** EREACTR;  /* YIELD */
A68_52  FREACTR;  /* collateral clause result */
A68_52 * GREACTR;  /* YIELD */
A68_111  HREACTR;  /* OPERATORS - mode -> union mode */
A68_52 * IREACTR;  /* YIELD */
A68_111 * JREACTR;  /* YIELD */
A68_67  KREACTR;  /* collateral clause result */
A68_INT * LREACTR;  /* YIELD */
A68_67 * MREACTR;  /* YIELD */
A68_111  NREACTR;  /* united object - for case conformity */
A68_109 * OREACTR_op;
A68_52 * PREACTR_a;
A68_109  QREACTR;  /* collateral clause result */
A68_109 * RREACTR;  /* YIELD */
A68_111  SREACTR;  /* OPERATORS - mode -> union mode */
A68_109 * TREACTR;  /* YIELD */
A68_111 * UREACTR;  /* YIELD */
A68_INT * VREACTR;  /* YIELD */
A68_INT  WREACTR_x;
A68_INT  XREACTR_y;
A68_INT  YREACTR_z;
A68_108  ZREACTR;  /* collateral clause result */
A68_108 * ASEACTR;  /* YIELD */
A68_108 ** BSEACTR;  /* YIELD */
A68_67  CSEACTR;  /* collateral clause result */
A68_67 * DSEACTR;  /* YIELD */
A68_BOOL  ESEACTR;  /* optbool result */
A68_127  FSEACTR;  /* avoid structure result */
A68_127  GSEACTR_temp;
A68_127  HSEACTR;  /* OPERATORS - trim index */
A68_127  ISEACTR;  /* YIELD */
A68_INT  JSEACTR;  /* YIELD */
A68_67 ** KSEACTR;  /* YIELD */
A68_INT  LSEACTR_i;
A68_INT  MSEACTR;  /* to part of loop */
A68_66  NSEACTR;  /* united object - for case conformity */
A68_INT  OSEACTR_j;
A68_INT  PSEACTR;  /* to part of loop */
union {  /* BIOP 99 */
A68_66 *  source;
A68_INT *  destination;
} QSEACTR; 
union {  /* BIOP 99 */
A68_66 *  source;
A68_INT *  destination;
} RSEACTR; 
A68_BOOL  SSEACTR;  /* optbool result */
A68_70 * TSEACTR_pi;
A68_198  USEACTR;  /* OPERATORS - trim index */
A68_198  VSEACTR;  /* forall yield */
A68_INT  WSEACTR;  /* forall loop counter */
A68_INT * XSEACTR;  /* YIELD */
A68_INT  YSEACTR;  /* YIELD */
A68_66  ZSEACTR;  /* OPERATORS - mode -> union mode */
A68_66 * ATEACTR;  /* YIELD */
A68_BOOL  BTEACTR;  /* clause result */
A68_BOOL  CTEACTR;  /* clause result */
A68_66  DTEACTR;  /* united object - for case conformity */
A68_65  ETEACTR_s;
A68_66 * FTEACTR;  /* YIELD */
A68_INT * GTEACTR;  /* YIELD */
A68_66  HTEACTR;  /* OPERATORS - mode -> union mode */
A68_66 * ITEACTR;  /* YIELD */
A68_67 ** JTEACTR_id;
A68_127  KTEACTR;  /* OPERATORS - trim index */
A68_127  LTEACTR;  /* forall yield */
A68_INT  MTEACTR;  /* forall loop counter */
A68_97  NTEACTR;  /* collateral clause result */
A68_106  OTEACTR;  /* OPERATORS - mode -> union mode */
A68_66  PTEACTR;  /* united object - for case conformity */
A68_65  QTEACTR_s;
A68_BOOL  RTEACTR;  /* clause result */
A68_BOOL  STEACTR;  /* clause result */
A_PROC_ENTRY(simplespec);
 /* line 5206: */
{ 
NKEACTR_ki = (A_HEAP(A68_INT ));
(*NKEACTR_ki) = 1;
 /* line 5208: */
OKEACTR_basemode = (A_HEAP(A68_INT ));
(*OKEACTR_basemode) = ((*NL(VYAACTR_lastmode))+1);
 /* line 5210: */
PKEACTR_nomem = (A_HEAP(A68_INT ));
(*PKEACTR_nomem) = 0;
 /* line 5211: */
A_CLOSURE( SKEACTR_generator, TKEACTR_generator, UKEACTR_generator );
(( UKEACTR_generator * ) ( SKEACTR_generator.nonlocals )) -> PKEACTR_nomem = PKEACTR_nomem;
QKEACTR_anonymous = SKEACTR_generator;
 /* line 5212: */
XKEACTR_modemem = (A_HEAP(A68_221 ));
A_CALLPROC(QKEACTR_anonymous,(A68_FALSE, &YKEACTR),(A68_FALSE, &YKEACTR,(QKEACTR_anonymous).nonlocals));
(*XKEACTR_modemem) = YKEACTR;
 /* line 5213: */
A_CLOSURE( ALEACTR_remember, BLEACTR_remember, CLEACTR_remember );
(( CLEACTR_remember * ) ( ALEACTR_remember.nonlocals )) -> OKEACTR_basemode = OKEACTR_basemode;
(( CLEACTR_remember * ) ( ALEACTR_remember.nonlocals )) -> PKEACTR_nomem = PKEACTR_nomem;
(( CLEACTR_remember * ) ( ALEACTR_remember.nonlocals )) -> XKEACTR_modemem = XKEACTR_modemem;
(( CLEACTR_remember * ) ( ALEACTR_remember.nonlocals )) -> QKEACTR_anonymous = (&QKEACTR_anonymous);
 /* line 5222: */
A_CLOSURE( LLEACTR_repmode, MLEACTR_repmode, NLEACTR_repmode );
(( NLEACTR_repmode * ) ( LLEACTR_repmode.nonlocals )) -> XKEACTR_modemem = XKEACTR_modemem;
(( NLEACTR_repmode * ) ( LLEACTR_repmode.nonlocals )) -> PKEACTR_nomem = PKEACTR_nomem;
 /* line 5230: */
 /* line 5231: */
ULEACTR_noids = (A_HEAP(A68_INT ));
(*ULEACTR_noids) = 0;
 /* line 5232: */
A_CLOSURE( XLEACTR_generator, YLEACTR_generator, ZLEACTR_generator );
(( ZLEACTR_generator * ) ( XLEACTR_generator.nonlocals )) -> ULEACTR_noids = ULEACTR_noids;
VLEACTR_anonymous = XLEACTR_generator;
 /* line 5233: */
A_CALLPROC(VLEACTR_anonymous,(A68_FALSE, &DMEACTR),(A68_FALSE, &DMEACTR,(VLEACTR_anonymous).nonlocals));
CMEACTR_allids = DMEACTR;
 /* line 5235: */
 /* line 5236: */
A_CLOSURE( EMEACTR_rc, FMEACTR_rc, GMEACTR_rc );
(( GMEACTR_rc * ) ( EMEACTR_rc.nonlocals )) -> Ka = Ka;
(( GMEACTR_rc * ) ( EMEACTR_rc.nonlocals )) -> NKEACTR_ki = NKEACTR_ki;
 /* line 5241: */
 /* line 5242: */
A_CLOSURE( JMEACTR_rw, KMEACTR_rw, LMEACTR_rw );
(( LMEACTR_rw * ) ( JMEACTR_rw.nonlocals )) -> Ka = Ka;
(( LMEACTR_rw * ) ( JMEACTR_rw.nonlocals )) -> NKEACTR_ki = NKEACTR_ki;
 /* line 5247: */
A_CLOSURE( QMEACTR_rs, RMEACTR_rs, SMEACTR_rs );
(( SMEACTR_rs * ) ( QMEACTR_rs.nonlocals )) -> Ka = Ka;
(( SMEACTR_rs * ) ( QMEACTR_rs.nonlocals )) -> NKEACTR_ki = NKEACTR_ki;
(( SMEACTR_rs * ) ( QMEACTR_rs.nonlocals )) -> XTAACTR_spaces = NL(XTAACTR_spaces);
 /* line 5263: */
A_CLOSURE( JNEACTR_unnumber, KNEACTR_unnumber, LNEACTR_unnumber );
(( LNEACTR_unnumber * ) ( JNEACTR_unnumber.nonlocals )) -> OKEACTR_basemode = OKEACTR_basemode;
(( LNEACTR_unnumber * ) ( JNEACTR_unnumber.nonlocals )) -> KUAACTR_modes = NL(KUAACTR_modes);
 /* line 5282: */
 /* line 5283: */
A_CLOSURE( TNEACTR_readmodes, UNEACTR_readmodes, VNEACTR_readmodes );
(( VNEACTR_readmodes * ) ( TNEACTR_readmodes.nonlocals )) -> VYAACTR_lastmode = NL(VYAACTR_lastmode);
(( VNEACTR_readmodes * ) ( TNEACTR_readmodes.nonlocals )) -> OKEACTR_basemode = OKEACTR_basemode;
(( VNEACTR_readmodes * ) ( TNEACTR_readmodes.nonlocals )) -> JMEACTR_rw = JMEACTR_rw;
(( VNEACTR_readmodes * ) ( TNEACTR_readmodes.nonlocals )) -> JNEACTR_unnumber = JNEACTR_unnumber;
(( VNEACTR_readmodes * ) ( TNEACTR_readmodes.nonlocals )) -> EMEACTR_rc = EMEACTR_rc;
(( VNEACTR_readmodes * ) ( TNEACTR_readmodes.nonlocals )) -> ALEACTR_remember = ALEACTR_remember;
(( VNEACTR_readmodes * ) ( TNEACTR_readmodes.nonlocals )) -> KUAACTR_modes = NL(KUAACTR_modes);
(( VNEACTR_readmodes * ) ( TNEACTR_readmodes.nonlocals )) -> JGCACTR_deflex = NL(JGCACTR_deflex);
(( VNEACTR_readmodes * ) ( TNEACTR_readmodes.nonlocals )) -> QMEACTR_rs = QMEACTR_rs;
(( VNEACTR_readmodes * ) ( TNEACTR_readmodes.nonlocals )) -> DKEACTR_maxchar2 = NL(DKEACTR_maxchar2);
 /* line 5376: */
 /* line 5377: */
 /* line 5378: */
 /* line 5379: */
 /* line 5380: */
 /* line 5381: */
 /* line 5382: */
 /* line 5384: */
for ( ;; )
{ 
 /* line 5385: */
if ( !(((*NKEACTR_ki)<Ka.upb)) ) break;
RQEACTR_i = A_CALLPROC(TNEACTR_readmodes,(),((TNEACTR_readmodes).nonlocals));
 /* line 5386: */
QQEACTR_hash = A_CALLPROC(QMEACTR_rs,((&PQEACTR_tempid)),((&PQEACTR_tempid),(QMEACTR_rs).nonlocals));
 /* line 5387: */
 /* line 5388: */
if ( (RQEACTR_i<=2) )
{ 
 /* line 5389: */
if ( (RQEACTR_i==1) )
{ 
 /* line 5390: */
 /* line 5391: */
SQEACTR = (*Ndno)+=1;
} 
else
{ 
SQEACTR = (-A_CALLPROC(JMEACTR_rw,(),((JMEACTR_rw).nonlocals)));
} 
TQEACTR_x = SQEACTR;
 /* line 5392: */
 /* line 5393: */
UQEACTR.Name = PQEACTR_tempid;
 /* line 5394: */
UQEACTR.Decno = TQEACTR_x;
UQEACTR.Level = 0;
UQEACTR.Mode = A_CALLPROC(JNEACTR_unnumber,(A_CALLPROC(JMEACTR_rw,(),((JMEACTR_rw).nonlocals))),(A_CALLPROC(JMEACTR_rw,(),((JMEACTR_rw).nonlocals)),(JNEACTR_unnumber).nonlocals));
UQEACTR.Scope = Scope;
 /* line 5395: */
 /* line 5396: */
UQEACTR.Rest = (*(&A_VINDEX(Ids,QQEACTR_hash)));
 /* line 5397: */
VQEACTR = A_HEAP(A68_67 ) ;
(*VQEACTR) = UQEACTR ;
WQEACTR = (&A_VINDEX(Ids,QQEACTR_hash)) ;
(*WQEACTR) = KQEACTR_id = VQEACTR;
} 
else
{ 
LQEACTR_ind = (*(&A_VINDEX(Inds,QQEACTR_hash)));
 /* line 5399: */
for ( ;; )
{ 
 /* line 5400: */
XQEACTR = (LQEACTR_ind!=SQAACTR_nilind);
if ( XQEACTR )
{ /* line 5401: */
ZQEACTR = (*(&(LQEACTR_ind->Name))) ;
XQEACTR = A_VC_NE(A_HISVEC(YQEACTR,ZQEACTR,32,A68_CHAR ),A_HISVEC(AREACTR,PQEACTR_tempid,32,A68_CHAR ));
}
if ( !(XQEACTR) ) break;
LQEACTR_ind = (*(&(LQEACTR_ind->Rest)));
}
 /* line 5402: */
 /* line 5403: */
if ( (LQEACTR_ind==SQAACTR_nilind) )
{ 
 /* line 5404: */
BREACTR.Name = PQEACTR_tempid;
BREACTR.Level = 0;
BREACTR.Scope = Scope;
BREACTR.U = A_UNITE(CREACTR,mode2,2,MQEACTR_am);
 /* line 5405: */
BREACTR.Rest = (*(&A_VINDEX(Inds,QQEACTR_hash)));
DREACTR = A_HEAP(A68_110 ) ;
(*DREACTR) = BREACTR ;
EREACTR = (&A_VINDEX(Inds,QQEACTR_hash)) ;
LQEACTR_ind = (*EREACTR) = DREACTR;
} 
 /* line 5406: */
 /* line 5407: */
if ( (RQEACTR_i==3) )
{ 
 /* line 5408: */
FREACTR.Mode = A_CALLPROC(JNEACTR_unnumber,(A_CALLPROC(JMEACTR_rw,(),((JMEACTR_rw).nonlocals))),(A_CALLPROC(JMEACTR_rw,(),((JMEACTR_rw).nonlocals)),(JNEACTR_unnumber).nonlocals));
FREACTR.Modeproc = 0;
FREACTR.El = (A68_53 *)A68_NIL;
GREACTR = A_HEAP(A68_52 ) ;
(*GREACTR) = FREACTR ;
IREACTR = MQEACTR_am = GREACTR ;
JREACTR = (&(LQEACTR_ind->U)) ;
(*JREACTR) = A_UNITE(HREACTR,mode2,2,IREACTR);
 /* line 5409: */
A_CALLPROC(ALEACTR_remember,((&(MQEACTR_am->Mode))),((&(MQEACTR_am->Mode)),(ALEACTR_remember).nonlocals));
 /* line 5410: */
 /* line 5411: */
if ( (A_CALLPROC(EMEACTR_rc,(),((EMEACTR_rc).nonlocals))==0) )
{ 
 /* line 5412: */
 /* line 5413: */
KQEACTR_id = (A68_67 *)A68_NIL;
} 
else
{ 
 /* line 5414: */
KREACTR.Name = PQEACTR_tempid;
LREACTR = (&(MQEACTR_am->Modeproc)) ;
KREACTR.Decno = (*LREACTR) = (*Ndno)+=1;
 /* line 5415: */
KREACTR.Level = 0;
KREACTR.Mode = A_CALLPROC(NL(ZICACTR_mproc),((*(&(MQEACTR_am->Mode)))),((*(&(MQEACTR_am->Mode))),(NL(ZICACTR_mproc)).nonlocals));
KREACTR.Scope = Scope;
 /* line 5417: */
KREACTR.Rest = (A68_67 *)A68_NIL;
 /* line 5418: */
MREACTR = A_HEAP(A68_67 ) ;
(*MREACTR) = KREACTR ;
KQEACTR_id = MREACTR;
} 
} 
else
{ 
 /* line 5419: */
NREACTR = (*(&(LQEACTR_ind->U))) ;
switch ( NREACTR.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE108)  */
OREACTR_op = (NREACTR.data.mode1);
 /* line 5420: */
 /* line 5421: */
NQEACTR_oper = OREACTR_op;
break;
case 2: /* REF STRUCT(INT,INT,REF MODE53)  */
PREACTR_a = (NREACTR.data.mode2);
 /* line 5422: */
 /* line 5423: */
QREACTR.Prio = 0;
 /* line 5424: */
QREACTR.I = (A68_108 *)A68_NIL;
RREACTR = A_HEAP(A68_109 ) ;
(*RREACTR) = QREACTR ;
TREACTR = NQEACTR_oper = RREACTR ;
UREACTR = (&(LQEACTR_ind->U)) ;
(*UREACTR) = A_UNITE(SREACTR,mode1,1,TREACTR);
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 5425: */
VREACTR = (&(NQEACTR_oper->Prio)) ;
(*VREACTR) = A_CALLPROC(EMEACTR_rc,(),((EMEACTR_rc).nonlocals));
 /* line 5426: */
 /* line 5427: */
WREACTR_x = A_CALLPROC(JNEACTR_unnumber,(A_CALLPROC(JMEACTR_rw,(),((JMEACTR_rw).nonlocals))),(A_CALLPROC(JMEACTR_rw,(),((JMEACTR_rw).nonlocals)),(JNEACTR_unnumber).nonlocals));
 /* line 5428: */
XREACTR_y = A_CALLPROC(JNEACTR_unnumber,(A_CALLPROC(JMEACTR_rw,(),((JMEACTR_rw).nonlocals))),(A_CALLPROC(JMEACTR_rw,(),((JMEACTR_rw).nonlocals)),(JNEACTR_unnumber).nonlocals));
 /* line 5429: */
YREACTR_z = A_CALLPROC(JNEACTR_unnumber,(A_CALLPROC(JMEACTR_rw,(),((JMEACTR_rw).nonlocals))),(A_CALLPROC(JMEACTR_rw,(),((JMEACTR_rw).nonlocals)),(JNEACTR_unnumber).nonlocals));
 /* line 5431: */
 /* line 5432: */
 /* line 5433: */
ZREACTR.Lmode = WREACTR_x;
ZREACTR.Rmode = XREACTR_y;
ZREACTR.Ans = YREACTR_z;
 /* line 5434: */
ZREACTR.Level = 0;
 /* line 5435: */
if ( (RQEACTR_i==4) )
{ 
 /* line 5436: */
ZREACTR.Decno = (*Ndno)+=1;
} 
else
{ 
KQEACTR_id = TQAACTR_nilid;
 /* line 5437: */
 /* line 5438: */
 /* line 5439: */
ZREACTR.Decno = (-A_CALLPROC(JMEACTR_rw,(),((JMEACTR_rw).nonlocals)));
} 
 /* line 5440: */
ZREACTR.Scope = Scope;
ZREACTR.Rest = (*(&(NQEACTR_oper->I)));
ASEACTR = A_HEAP(A68_108 ) ;
(*ASEACTR) = ZREACTR ;
BSEACTR = (&(NQEACTR_oper->I)) ;
(*BSEACTR) = OQEACTR_inst = ASEACTR;
 /* line 5442: */
A_CALLPROC(ALEACTR_remember,((&(OQEACTR_inst->Lmode))),((&(OQEACTR_inst->Lmode)),(ALEACTR_remember).nonlocals));
 /* line 5443: */
A_CALLPROC(ALEACTR_remember,((&(OQEACTR_inst->Rmode))),((&(OQEACTR_inst->Rmode)),(ALEACTR_remember).nonlocals));
 /* line 5444: */
A_CALLPROC(ALEACTR_remember,((&(OQEACTR_inst->Ans))),((&(OQEACTR_inst->Ans)),(ALEACTR_remember).nonlocals));
 /* line 5445: */
 /* line 5446: */
if ( (RQEACTR_i==4) )
{ 
CSEACTR.Name = PQEACTR_tempid;
CSEACTR.Decno = (*Ndno);
 /* line 5447: */
CSEACTR.Level = 0;
CSEACTR.Mode = A_CALLPROC(NL(UXBACTR_opproc),(OQEACTR_inst),(OQEACTR_inst,(NL(UXBACTR_opproc)).nonlocals));
CSEACTR.Scope = Scope;
 /* line 5448: */
CSEACTR.Rest = (A68_67 *)A68_NIL;
 /* line 5449: */
 /* line 5450: */
DSEACTR = A_HEAP(A68_67 ) ;
(*DSEACTR) = CSEACTR ;
KQEACTR_id = DSEACTR;
} 
} 
} 
 /* line 5452: */
ESEACTR = (KQEACTR_id!=TQAACTR_nilid);
if ( ESEACTR )
{ /* line 5453: */
ESEACTR = (RQEACTR_i!=2);
}
 /* line 5454: */
if ( ESEACTR )
{ 
A_CALLPROC(ALEACTR_remember,((&(KQEACTR_id->Mode))),((&(KQEACTR_id->Mode)),(ALEACTR_remember).nonlocals));
 /* line 5455: */
 /* line 5456: */
if ( ((*ULEACTR_noids)==CMEACTR_allids.upb) )
{ 
A_CALLPROC(VLEACTR_anonymous,(A68_FALSE, &FSEACTR),(A68_FALSE, &FSEACTR,(VLEACTR_anonymous).nonlocals));
GSEACTR_temp = FSEACTR;
 /* line 5457: */
ISEACTR = A_VTRIM(HSEACTR,(GSEACTR_temp),A_VTSCRIPT(&(HSEACTR.upb),(GSEACTR_temp).upb,1,(*ULEACTR_noids))) ;
A_VASSIGN2(CMEACTR_allids,ISEACTR,A68_67 *);
 /* line 5458: */
CMEACTR_allids = GSEACTR_temp;
} 
 /* line 5459: */
 /* line 5460: */
 /* line 5461: */
JSEACTR = (*ULEACTR_noids)+=1 ;
KSEACTR = (&A_VINDEX(CMEACTR_allids,JSEACTR)) ;
(*KSEACTR) = KQEACTR_id;
} 
}
 /* line 5464: */
MSEACTR = (*NL(VYAACTR_lastmode));
for ( LSEACTR_i = (*OKEACTR_basemode);
LSEACTR_i <= MSEACTR;
LSEACTR_i += 1 )
{ 
 /* line 5465: */
 /* line 5466: */
NSEACTR = (*(&A_VINDEX(NL(KUAACTR_modes),LSEACTR_i))) ;
switch ( NSEACTR.mode )
{ 
case 11: /* STRUCT(INT)  */
 /* line 5467: */
 /* line 5468: */
/*SKIP*/;
break;
default: 
 /* line 5469: */
PSEACTR = ((*OKEACTR_basemode)-1);
for ( OSEACTR_j = NL(YYAACTR_newmode1);
OSEACTR_j <= PSEACTR;
OSEACTR_j += 1 )
{ 
 /* line 5470: */
QSEACTR.source = (&A_VINDEX(NL(KUAACTR_modes),LSEACTR_i)) ;
RSEACTR.source = (&A_VINDEX(NL(KUAACTR_modes),OSEACTR_j)) ;
SSEACTR = ((*(QSEACTR.destination))==(*(RSEACTR.destination)));
if ( SSEACTR )
{ /* line 5471: */
SSEACTR = A_CALLPROC(NL(BIDACTR_equality),(LSEACTR_i, OSEACTR_j, ((*OKEACTR_basemode)-1)),(LSEACTR_i, OSEACTR_j, ((*OKEACTR_basemode)-1),(NL(BIDACTR_equality)).nonlocals));
}
if ( SSEACTR )
{ 
VSEACTR = A_VTRIM(USEACTR,((*NL(WHDACTR_test_flex))),A_VTSCRIPT(&(USEACTR.upb),((*NL(WHDACTR_test_flex))).upb,1,(*NL(PHDACTR_last_flex)))) ;
WSEACTR = VSEACTR.upb -1;
TSEACTR_pi = VSEACTR.data;
for (;WSEACTR-- >= 0;
(TSEACTR_pi++
) )
{
 /* line 5472: */
A_CALLPROC(LLEACTR_repmode,((*(&(TSEACTR_pi->I))), (*(&(TSEACTR_pi->J)))),((*(&(TSEACTR_pi->I))), (*(&(TSEACTR_pi->J))),(LLEACTR_repmode).nonlocals));
 /* line 5473: */
XSEACTR = (&((&TLEACTR_asa)->Mode)) ;
(*XSEACTR) = (*(&(TSEACTR_pi->J)));
 /* line 5474: */
YSEACTR = (*(&(TSEACTR_pi->I))) ;
ATEACTR = (&A_VINDEX(NL(KUAACTR_modes),YSEACTR)) ;
(*ATEACTR) = A_UNITE(ZSEACTR,mode11,11,TLEACTR_asa);
}
 /* line 5475: */
 /* line 5476: */
BTEACTR = A68_FALSE;
} 
else
{ 
 /* line 5477: */
 /* line 5478: */
BTEACTR = A68_TRUE;
} 
CTEACTR = BTEACTR;
if ( !CTEACTR ) break;
/*SKIP*/;
}
 /* line 5479: */
 /* line 5480: */
break;
} 
}
 /* line 5482: */
(*NKEACTR_ki) = 0;
 /* line 5483: */
RQEACTR_i = (*OKEACTR_basemode);
 /* line 5484: */
for ( ;; )
{ 
 /* line 5485: */
if ( !((RQEACTR_i<=(*NL(VYAACTR_lastmode)))) ) break;
 /* line 5486: */
DTEACTR = (*(&A_VINDEX(NL(KUAACTR_modes),RQEACTR_i))) ;
switch ( DTEACTR.mode )
{ 
case 11: /* STRUCT(INT)  */
ETEACTR_s = (DTEACTR.data.mode11);
{ 
if ( ((*NKEACTR_ki)==0) )
{ 
(*NKEACTR_ki) = RQEACTR_i;
} 
 /* line 5487: */
 /* line 5488: */
RQEACTR_i+=1;
} 
break;
default: 
 /* line 5489: */
if ( ((*NKEACTR_ki)!=0) )
{ 
A_CALLPROC(LLEACTR_repmode,(RQEACTR_i, (*NKEACTR_ki)),(RQEACTR_i, (*NKEACTR_ki),(LLEACTR_repmode).nonlocals));
FTEACTR = (&A_VINDEX(NL(KUAACTR_modes),(*NKEACTR_ki))) ;
(*FTEACTR) = (*(&A_VINDEX(NL(KUAACTR_modes),RQEACTR_i)));
 /* line 5490: */
GTEACTR = (&((&TLEACTR_asa)->Mode)) ;
(*GTEACTR) = (*NKEACTR_ki);
ITEACTR = (&A_VINDEX(NL(KUAACTR_modes),RQEACTR_i)) ;
(*ITEACTR) = A_UNITE(HTEACTR,mode11,11,TLEACTR_asa);
 /* line 5491: */
RQEACTR_i = ((*NKEACTR_ki)+1);
 /* line 5492: */
(*NKEACTR_ki) = 0;
} 
else
{ 
 /* line 5493: */
 /* line 5494: */
 /* line 5495: */
RQEACTR_i+=1;
} 
break;
} 
}
 /* line 5497: */
LTEACTR = A_VTRIM(KTEACTR,(CMEACTR_allids),A_VTSCRIPT(&(KTEACTR.upb),(CMEACTR_allids).upb,1,(*ULEACTR_noids))) ;
MTEACTR = LTEACTR.upb -1;
JTEACTR_id = LTEACTR.data;
for (;MTEACTR-- >= 0;
(JTEACTR_id++
) )
{
 /* line 5498: */
NTEACTR.Bu = Bu;
NTEACTR.Level = (*NL(TZAACTR_modulelevel));
NTEACTR.Id = (*JTEACTR_id);
 /* line 5499: */
A_CALLPROC(NL(Output),(A_UNITE(OTEACTR,mode26,26,NTEACTR), 2),(A_UNITE(OTEACTR,mode26,26,NTEACTR), 2,(NL(Output)).nonlocals));
}
 /* line 5501: */
for ( ;; )
{ 
 /* line 5502: */
PTEACTR = (*(&A_VINDEX(NL(KUAACTR_modes),(*NL(VYAACTR_lastmode))))) ;
switch ( PTEACTR.mode )
{ 
case 11: /* STRUCT(INT)  */
QTEACTR_s = (PTEACTR.data.mode11);
 /* line 5503: */
RTEACTR = A68_TRUE;
break;
default: 
 /* line 5504: */
 /* line 5505: */
RTEACTR = A68_FALSE;
break;
} 
STEACTR = RTEACTR;
if ( !STEACTR ) break;
(*NL(VYAACTR_lastmode))-=1;
}
 /* line 5506: */
} 
A_PROC_EXIT(simplespec);
return;
} 
#undef NL

A_STATIC A68_VOID  XTEACTR_treatspec(A68_31 * Name, A68_31 * P, A68_34  Ym, void *NonLocals)
#define NL(x) (((YTEACTR_treatspec *)NonLocals)->x)
{ 
A68_93  AUEACTR;  /* avoid structure result */
A68_93  ZTEACTR_ys;
A68_37 * BUEACTR_xs;
A68_92  CUEACTR_y;
A68_91 * DUEACTR_x;
A68_45  EUEACTR_setc;   /* proc value of non-global proc */
A68_40  LUEACTR;  /* united object - for case conformity */
A68_41  MUEACTR_c1;
A68_226  OUEACTR_generator;   /* proc value of non-global proc */
A68_41  UUEACTR;  /* avoid structure result */
A68_41  TUEACTR_c;
A68_INT  VUEACTR_i;
A68_INT  WUEACTR;  /* to part of loop */
A68_92  XUEACTR;  /* avoid structure result */
A68_INT  YUEACTR;  /* clause result */
A68_INT * ZUEACTR;  /* YIELD */
A68_97  AVEACTR;  /* collateral clause result */
A68_67  BVEACTR;  /* collateral clause result */
A68_67 * CVEACTR;  /* YIELD */
A68_106  DVEACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EVEACTR_s;
A_PROC_ENTRY(treatspec);
 /* line 5511: */
{ 
A_CALLPROC(NL(Givespec),((*Name), (*P), Ym, &AUEACTR),((*Name), (*P), Ym, &AUEACTR,(NL(Givespec)).nonlocals));
ZTEACTR_ys = AUEACTR;
 /* line 5512: */
BUEACTR_xs = (&((&ZTEACTR_ys)->Xs));
 /* line 5513: */
 /* line 5514: */
DUEACTR_x = (&((&CUEACTR_y)->Xmi));
 /* line 5516: */
 /* line 5517: */
A_CLOSURE( EUEACTR_setc, FUEACTR_setc, GUEACTR_setc );
(( GUEACTR_setc * ) ( EUEACTR_setc.nonlocals )) -> Output = NL(Output);
(( GUEACTR_setc * ) ( EUEACTR_setc.nonlocals )) -> Name = Name;
(( GUEACTR_setc * ) ( EUEACTR_setc.nonlocals )) -> Ym = Ym;
(( GUEACTR_setc * ) ( EUEACTR_setc.nonlocals )) -> P = P;
(( GUEACTR_setc * ) ( EUEACTR_setc.nonlocals )) -> ZTEACTR_ys = (&ZTEACTR_ys);
(( GUEACTR_setc * ) ( EUEACTR_setc.nonlocals )) -> TZAACTR_modulelevel = NL(TZAACTR_modulelevel);
(( GUEACTR_setc * ) ( EUEACTR_setc.nonlocals )) -> BUEACTR_xs = BUEACTR_xs;
(( GUEACTR_setc * ) ( EUEACTR_setc.nonlocals )) -> RABACTR_concheck = NL(RABACTR_concheck);
(( GUEACTR_setc * ) ( EUEACTR_setc.nonlocals )) -> QYAACTR_globcurrent = NL(QYAACTR_globcurrent);
 /* line 5527: */
 /* line 5528: */
if ( ((*(&(BUEACTR_xs->No)))<=0) )
{ 
 /* line 5530: */
A_CALLPROC(NL(PZBACTR_faultp),(124, 0, 0, Name),(124, 0, 0, Name,(NL(PZBACTR_faultp)).nonlocals));
} 
else
{ 
 /* line 5531: */
LUEACTR = (*(&(BUEACTR_xs->U))) ;
switch ( LUEACTR.mode )
{ 
case 2: /* REF VECTOR [] MODE42 */
MUEACTR_c1 = (LUEACTR.data.mode2);
 /* line 5532: */
{ 
A_CLOSURE( OUEACTR_generator, PUEACTR_generator, QUEACTR_generator );
(( QUEACTR_generator * ) ( OUEACTR_generator.nonlocals )) -> MUEACTR_c1 = MUEACTR_c1;
A_CALLPROC(OUEACTR_generator,(A68_TRUE, &UUEACTR),(A68_TRUE, &UUEACTR,(OUEACTR_generator).nonlocals));
TUEACTR_c = UUEACTR;
A_VASSIGN2(MUEACTR_c1,TUEACTR_c,A68_42 );
 /* line 5533: */
 /* line 5534: */
WUEACTR = TUEACTR_c.upb;
for ( VUEACTR_i = 1;
VUEACTR_i <= WUEACTR;
VUEACTR_i += 1 )
{ 
A_CALLPROC(NL(Givemoduledetails),((*(&((&A_VINDEX(TUEACTR_c,VUEACTR_i))->N))), 0, A68_FALSE, &XUEACTR),((*(&((&A_VINDEX(TUEACTR_c,VUEACTR_i))->N))), 0, A68_FALSE, &XUEACTR,(NL(Givemoduledetails)).nonlocals));
CUEACTR_y = XUEACTR;
 /* line 5535: */
 /* line 5536: */
 /* line 5537: */
if ( ((*(&(DUEACTR_x->Type)))<=0) )
{ 
 /* line 5538: */
 /* line 5539: */
if ( ((*(&(DUEACTR_x->Type)))==(-2)) )
{ 
 /* line 5540: */
YUEACTR = 160;
} 
else
{ 
YUEACTR = 125;
} 
 /* line 5541: */
A_CALLPROC(NL(PZBACTR_faultp),(YUEACTR, 0, 0, (&((&A_VINDEX(TUEACTR_c,VUEACTR_i))->N))),(YUEACTR, 0, 0, (&((&A_VINDEX(TUEACTR_c,VUEACTR_i))->N)),(NL(PZBACTR_faultp)).nonlocals));
} 
else
{ 
 /* line 5542: */
 /* line 5543: */
 /* line 5544: */
 /* line 5545: */
A_CALLPROC(NL(WTEACTR_treatspec),((&((&A_VINDEX(TUEACTR_c,VUEACTR_i))->N)), (&((&A_VINDEX(TUEACTR_c,VUEACTR_i))->F)), (*(&((&CUEACTR_y)->Ym)))),((&((&A_VINDEX(TUEACTR_c,VUEACTR_i))->N)), (&((&A_VINDEX(TUEACTR_c,VUEACTR_i))->F)), (*(&((&CUEACTR_y)->Ym))),(NL(WTEACTR_treatspec)).nonlocals));
} 
}
 /* line 5546: */
A_CALLPROC(EUEACTR_setc,(),((EUEACTR_setc).nonlocals));
 /* line 5547: */
ZUEACTR = (&((*NL(QYAACTR_globcurrent))->Lastid)) ;
(*ZUEACTR)+=1;
 /* line 5548: */
AVEACTR.Bu = A68_FALSE;
 /* line 5549: */
AVEACTR.Level = (*NL(TZAACTR_modulelevel));
 /* line 5550: */
 /* line 5551: */
BVEACTR.Name = NL(BZAACTR_nullid);
 /* line 5552: */
BVEACTR.Decno = (*(&((*NL(QYAACTR_globcurrent))->Lastid)));
BVEACTR.Level = (*(&((*NL(QYAACTR_globcurrent))->Level)));
 /* line 5553: */
BVEACTR.Mode = ELAACTR_int;
 /* line 5554: */
BVEACTR.Scope = (*(&((*NL(QYAACTR_globcurrent))->Lastid)));
 /* line 5555: */
BVEACTR.Rest = (A68_67 *)A68_NIL;
CVEACTR = A_LOC(A68_67 ) ;
(*CVEACTR) = BVEACTR ;
AVEACTR.Id = CVEACTR;
 /* line 5556: */
 /* line 5557: */
 /* line 5558: */
A_CALLPROC(NL(Output),(A_UNITE(DVEACTR,mode26,26,AVEACTR), 2),(A_UNITE(DVEACTR,mode26,26,AVEACTR), 2,(NL(Output)).nonlocals));
} 
break;
case 1: /* REF VECTOR [] CHAR */
EVEACTR_s = (LUEACTR.data.mode1);
 /* line 5559: */
{ 
A_CALLPROC(EUEACTR_setc,(),((EUEACTR_setc).nonlocals));
 /* line 5560: */
 /* line 5561: */
 /* line 5562: */
 /* line 5563: */
 /* line 5564: */
 /* line 5565: */
 /* line 5566: */
 /* line 5567: */
 /* line 5568: */
A_CALLPROC(NL(KKEACTR_simplespec),(A68_FALSE, (*(&((*NL(QYAACTR_globcurrent))->Ids))), (*(&((*NL(QYAACTR_globcurrent))->Indics))), (&((*NL(QYAACTR_globcurrent))->Lastid)), ((*(&((*NL(QYAACTR_globcurrent))->Lastid)))+1), EVEACTR_s),(A68_FALSE, (*(&((*NL(QYAACTR_globcurrent))->Ids))), (*(&((*NL(QYAACTR_globcurrent))->Indics))), (&((*NL(QYAACTR_globcurrent))->Lastid)), ((*(&((*NL(QYAACTR_globcurrent))->Lastid)))+1), EVEACTR_s,(NL(KKEACTR_simplespec)).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
} 
A_PROC_EXIT(treatspec);
return;
} 
#undef NL

A_STATIC A68_INT  IVEACTR_closure(A68_118 * C, A68_113 * Con, void *NonLocals)
#define NL(x) (((JVEACTR_closure *)NonLocals)->x)
{ 
A68_92  LVEACTR;  /* avoid structure result */
A68_92  KVEACTR_y;
A68_91 * MVEACTR_x;
A68_INT  NVEACTR_i;
A68_INT  OVEACTR_rm;
A68_96  PVEACTR;  /* collateral clause result */
A68_106  QVEACTR;  /* OPERATORS - mode -> union mode */
A68_113  RVEACTR_ncon;
A68_42  SVEACTR;  /* clause result */
A68_42 * TVEACTR;  /* YIELD */
A68_113 ** UVEACTR;  /* YIELD */
A68_116 * VVEACTR_sb;
A68_INT  WVEACTR;  /* clause result */
A68_INT  XVEACTR;  /* clause result */
A68_BOOL  YVEACTR;  /* optbool result */
A68_113 * ZVEACTR_g;
A68_151  BWEACTR_generator;   /* proc value of non-global proc */
A68_100  HWEACTR;  /* avoid structure result */
A68_100  GWEACTR_actuals;
A68_INT  IWEACTR_j;
A68_INT  JWEACTR_k;
A68_INT  KWEACTR_l;
A68_INT  LWEACTR_u;
A68_93  MWEACTR_ys;
A68_37 * NWEACTR_xs;
A68_99  OWEACTR_kp;
A68_41  PWEACTR_kc;
A68_INT  QWEACTR;  /* to part of loop */
A68_INT  RWEACTR;  /* loop control */
A68_93  SWEACTR;  /* avoid structure result */
A68_42  TWEACTR;  /* collateral clause result */
A68_42 * UWEACTR;  /* YIELD */
A68_117  VWEACTR;  /* united object - for case conformity */
A68_118 * WWEACTR_c1;
A68_INT  XWEACTR;  /* clause result */
A68_114 * YWEACTR_p;
A68_228  AXEACTR_generator;   /* proc value of non-global proc */
A68_99  FXEACTR;  /* avoid structure result */
A68_226  HXEACTR_generator;   /* proc value of non-global proc */
A68_41  MXEACTR;  /* avoid structure result */
A68_94  NXEACTR;  /* collateral clause result */
A68_106  OXEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  PXEACTR_i;
A68_INT  QXEACTR;  /* by part of loop */
A68_71  RXEACTR;  /* collateral clause result */
A68_71 * SXEACTR;  /* YIELD */
A68_42 * TXEACTR;  /* YIELD */
A68_98  UXEACTR;  /* collateral clause result */
A68_100  VXEACTR;  /* OPERATORS - nil -> mode */
A68_106  WXEACTR;  /* OPERATORS - mode -> union mode */
A68_95  XXEACTR;  /* collateral clause result */
A68_106  YXEACTR;  /* OPERATORS - mode -> union mode */
A68_37  ZXEACTR;  /* collateral clause result */
A68_40  AYEACTR;  /* OPERATORS - mode -> union mode */
A68_106  BYEACTR;  /* OPERATORS - mode -> union mode */
A68_INT  CYEACTR;  /* YIELD */
A68_INT * DYEACTR;  /* YIELD */
A68_101  EYEACTR;  /* collateral clause result */
A68_106  FYEACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(closure);
 /* line 5571: */
 /* line 5572: */
{ 
A_CALLPROC(NL(Givemoduledetails),((*(&(C->Name))), 0, A68_TRUE, &LVEACTR),((*(&(C->Name))), 0, A68_TRUE, &LVEACTR,(NL(Givemoduledetails)).nonlocals));
KVEACTR_y = LVEACTR;
 /* line 5573: */
MVEACTR_x = (&((&KVEACTR_y)->Xmi));
 /* line 5574: */
NVEACTR_i = 0;
OVEACTR_rm = ((*NL(UZAACTR_nextmodule))+=1);
 /* line 5575: */
PVEACTR.Type = (*(&(MVEACTR_x->Type)));
PVEACTR.Moduleno = OVEACTR_rm;
PVEACTR.Name = (*(&(C->Name)));
PVEACTR.Ym = (*(&((&KVEACTR_y)->Ym)));
A_CALLPROC(NL(Output),(A_UNITE(QVEACTR,mode25,25,PVEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(QVEACTR,mode25,25,PVEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5576: */
 /* line 5577: */
 /* line 5578: */
 /* line 5579: */
if ( ((*(&((&(MVEACTR_x->G))->Level)))==0) )
{ 
 /* line 5580: */
SVEACTR = (*(&(MVEACTR_x->L)));
} 
else
{ 
SVEACTR = (*(&(MVEACTR_x->G)));
} 
TVEACTR = (&((&RVEACTR_ncon)->G)) ;
(*TVEACTR) = SVEACTR;
 /* line 5581: */
UVEACTR = (&((&RVEACTR_ncon)->Rest)) ;
(*UVEACTR) = Con;
 /* line 5582: */
VVEACTR_sb = (*(&(C->S)));
 /* line 5584: */
for ( ;; )
{ 
 /* line 5585: */
if ( !((VVEACTR_sb!=HQAACTR_nilsubl)) ) break;
NVEACTR_i+=1;
 /* line 5586: */
 /* line 5587: */
VVEACTR_sb = (*(&(VVEACTR_sb->Rest)));
}
 /* line 5589: */
 /* line 5590: */
 /* line 5591: */
if ( ((*(&(MVEACTR_x->Type)))<0) )
{ 
 /* line 5592: */
 /* line 5593: */
if ( ((*(&(MVEACTR_x->Type)))==(-1)) )
{ 
 /* line 5594: */
WVEACTR = 199;
} 
else
{ 
WVEACTR = 160;
} 
A_CALLPROC(NL(PZBACTR_faultp),(WVEACTR, 0, 0, (&(C->Name))),(WVEACTR, 0, 0, (&(C->Name)),(NL(PZBACTR_faultp)).nonlocals));
 /* line 5595: */
 /* line 5596: */
XVEACTR = 0;
} 
else
{ 
 /* line 5597: */
if ( (NVEACTR_i!=(*(&(MVEACTR_x->Type)))) )
{ 
A_CALLPROC(NL(PZBACTR_faultp),(126, 0, 0, (&(C->Name))),(126, 0, 0, (&(C->Name)),(NL(PZBACTR_faultp)).nonlocals));
 /* line 5599: */
 /* line 5600: */
XVEACTR = 0;
} 
else
{ 
YVEACTR = ((*(&((&(MVEACTR_x->L))->Level)))!=0);
if ( YVEACTR )
{ /* line 5601: */
YVEACTR = (Con!=EQAACTR_nilcon);
}
if ( YVEACTR )
{YVEACTR = VABACTR_((&(MVEACTR_x->L)), (&(Con->L)));
}
if ( YVEACTR )
{ /* line 5602: */
YVEACTR = VABACTR_((&(MVEACTR_x->L)), (&(Con->G)));
}
if ( YVEACTR )
{ 
A_CALLPROC(NL(PZBACTR_faultp),(127, 0, 0, (&(C->Name))),(127, 0, 0, (&(C->Name)),(NL(PZBACTR_faultp)).nonlocals));
 /* line 5604: */
 /* line 5605: */
XVEACTR = 0;
} 
else
{ 
 /* line 5606: */
 /* line 5607: */
if ( (NVEACTR_i==0) )
{ 
 /* line 5608: */
XVEACTR = OVEACTR_rm;
} 
else
{ 
 /* line 5609: */
A_CLOSURE( BWEACTR_generator, CWEACTR_generator, DWEACTR_generator );
(( DWEACTR_generator * ) ( BWEACTR_generator.nonlocals )) -> NVEACTR_i = (&NVEACTR_i);
A_CALLPROC(BWEACTR_generator,(A68_TRUE, &HWEACTR),(A68_TRUE, &HWEACTR,(BWEACTR_generator).nonlocals));
GWEACTR_actuals = HWEACTR;
 /* line 5610: */
 /* line 5611: */
 /* line 5612: */
NWEACTR_xs = (&((&MWEACTR_ys)->Xs));
 /* line 5613: */
 /* line 5614: */
 /* line 5615: */
VVEACTR_sb = (*(&(C->S)));
 /* line 5617: */
 /* line 5618: */
QWEACTR = NVEACTR_i;
for ( RWEACTR = 1;
RWEACTR <= QWEACTR;
RWEACTR += 1 )
{ 
A_CALLPROC(NL(Givespec),((*(&(C->Name))), (*(&(VVEACTR_sb->Proxy))), (*(&((&KVEACTR_y)->Ym))), &SWEACTR),((*(&(C->Name))), (*(&(VVEACTR_sb->Proxy))), (*(&((&KVEACTR_y)->Ym))), &SWEACTR,(NL(Givespec)).nonlocals));
MWEACTR_ys = SWEACTR;
 /* line 5619: */
TWEACTR.N = (*(&(C->Name)));
TWEACTR.F = (*(&(VVEACTR_sb->Proxy)));
TWEACTR.Level = (*(&(NWEACTR_xs->Nl)));
UWEACTR = (&((&RVEACTR_ncon)->L)) ;
(*UWEACTR) = TWEACTR;
 /* line 5621: */
 /* line 5622: */
if ( ((*(&(NWEACTR_xs->No)))<=0) )
{ 
 /* line 5624: */
A_CALLPROC(NL(PZBACTR_faultp),(128, 0, 0, (&(VVEACTR_sb->Proxy))),(128, 0, 0, (&(VVEACTR_sb->Proxy)),(NL(PZBACTR_faultp)).nonlocals));
} 
else
{ 
 /* line 5625: */
 /* line 5626: */
VWEACTR = (*(&(VVEACTR_sb->A))) ;
switch ( VWEACTR.mode )
{ 
case 1: /* REF STRUCT(MODE31,REF MODE116)  */
WWEACTR_c1 = (VWEACTR.data.mode1);
 /* line 5627: */
 /* line 5628: */
XWEACTR = A_CALLPROC(NL(HVEACTR_closure),(WWEACTR_c1, (&RVEACTR_ncon)),(WWEACTR_c1, (&RVEACTR_ncon),(NL(HVEACTR_closure)).nonlocals));
break;
case 2: /* REF STRUCT(MODE31,INT,REF MODE114)  */
YWEACTR_p = (VWEACTR.data.mode2);
 /* line 5629: */
{ 
ZVEACTR_g = (&RVEACTR_ncon);
 /* line 5630: */
JWEACTR_k = IWEACTR_j = 0;
 /* line 5632: */
for ( ;; )
{ 
 /* line 5633: */
if ( !((ZVEACTR_g!=EQAACTR_nilcon)) ) break;
IWEACTR_j+=(*(&((&(ZVEACTR_g->L))->Level)));
 /* line 5634: */
JWEACTR_k+=1;
 /* line 5635: */
LWEACTR_u = (*(&((&(ZVEACTR_g->G))->Level)));
 /* line 5636: */
 /* line 5637: */
ZVEACTR_g = (*(&(ZVEACTR_g->Rest)));
}
 /* line 5639: */
A_CLOSURE( AXEACTR_generator, BXEACTR_generator, CXEACTR_generator );
(( CXEACTR_generator * ) ( AXEACTR_generator.nonlocals )) -> JWEACTR_k = (&JWEACTR_k);
A_CALLPROC(AXEACTR_generator,(A68_TRUE, &FXEACTR),(A68_TRUE, &FXEACTR,(AXEACTR_generator).nonlocals));
OWEACTR_kp = FXEACTR;
 /* line 5640: */
A_CLOSURE( HXEACTR_generator, IXEACTR_generator, JXEACTR_generator );
(( JXEACTR_generator * ) ( HXEACTR_generator.nonlocals )) -> JWEACTR_k = (&JWEACTR_k);
A_CALLPROC(HXEACTR_generator,(A68_TRUE, &MXEACTR),(A68_TRUE, &MXEACTR,(HXEACTR_generator).nonlocals));
PWEACTR_kc = MXEACTR;
 /* line 5642: */
 /* line 5644: */
NXEACTR.Name = (*(&(YWEACTR_p->Name)));
 /* line 5645: */
NXEACTR.Maxlevel = ((*(&((&((&RVEACTR_ncon)->L))->Level)))+(*(&((&((&RVEACTR_ncon)->G))->Level))));
NXEACTR.Nof = 0;
 /* line 5646: */
NXEACTR.Moduleno = (*NL(UZAACTR_nextmodule))+=1;
A_CALLPROC(NL(Output),(A_UNITE(OXEACTR,mode23,23,NXEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(OXEACTR,mode23,23,NXEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5647: */
ZVEACTR_g = (&RVEACTR_ncon);
 /* line 5648: */
KWEACTR_l = 0;
 /* line 5649: */
 /* line 5650: */
QXEACTR = (-1);
for ( PXEACTR_i = JWEACTR_k;
( QXEACTR > 0 && PXEACTR_i <= 1) ||
( QXEACTR < 0 && PXEACTR_i >= 1) ||
( QXEACTR == 0 ) ;
PXEACTR_i += QXEACTR )
{ 
RXEACTR.I = KWEACTR_l;
 /* line 5651: */
 /* line 5652: */
if ( (JWEACTR_k==1) )
{ 
RXEACTR.J = 1;
} 
else
{ 
 /* line 5653: */
 /* line 5655: */
RXEACTR.J = ((*(&((&(ZVEACTR_g->G))->Level)))+1);
} 
 /* line 5656: */
RXEACTR.K = ((*(&((&(ZVEACTR_g->L))->Level)))+(*(&((&(ZVEACTR_g->G))->Level))));
SXEACTR = (&A_VINDEX(OWEACTR_kp,PXEACTR_i)) ;
(*SXEACTR) = RXEACTR;
 /* line 5657: */
TXEACTR = (&A_VINDEX(PWEACTR_kc,PXEACTR_i)) ;
(*TXEACTR) = (*(&(ZVEACTR_g->L)));
 /* line 5658: */
KWEACTR_l+=1;
 /* line 5659: */
 /* line 5660: */
ZVEACTR_g = (*(&(ZVEACTR_g->Rest)));
}
 /* line 5661: */
UXEACTR.Body.I = (*(&(YWEACTR_p->No)));
 /* line 5662: */
UXEACTR.Body.J = KWEACTR_l;
UXEACTR.Kset = OWEACTR_kp;
 /* line 5663: */
UXEACTR.Keeps = A_VVAC(VXEACTR);
UXEACTR.Last = KWEACTR_l;
A_CALLPROC(NL(Output),(A_UNITE(WXEACTR,mode27,27,UXEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(WXEACTR,mode27,27,UXEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5664: */
XXEACTR.Moduleno = (*NL(UZAACTR_nextmodule));
XXEACTR.Nof = 0;
A_CALLPROC(NL(Output),(A_UNITE(YXEACTR,mode24,24,XXEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(YXEACTR,mode24,24,XXEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5665: */
ZXEACTR.F = (*(&(YWEACTR_p->Name)));
 /* line 5666: */
ZXEACTR.No = (*(&(YWEACTR_p->No)));
ZXEACTR.Nl = IWEACTR_j;
 /* line 5667: */
ZXEACTR.Ng = LWEACTR_u;
ZXEACTR.U = A_UNITE(AYEACTR,mode2,2,PWEACTR_kc);
A_CALLPROC(NL(Output),(A_UNITE(BYEACTR,mode22,22,ZXEACTR), 0),(A_UNITE(BYEACTR,mode22,22,ZXEACTR), 0,(NL(Output)).nonlocals));
 /* line 5668: */
 /* line 5669: */
 /* line 5670: */
 /* line 5671: */
XWEACTR = (*NL(UZAACTR_nextmodule));
} 
break;
default: 
 /* line 5672: */
XWEACTR = 0;
break;
} 
CYEACTR = (*(&(NWEACTR_xs->No))) ;
DYEACTR = (&A_VINDEX(GWEACTR_actuals,CYEACTR)) ;
(*DYEACTR) = XWEACTR;
} 
 /* line 5673: */
 /* line 5674: */
VVEACTR_sb = (*(&(VVEACTR_sb->Rest)));
}
 /* line 5675: */
EYEACTR.Body = OVEACTR_rm;
EYEACTR.Actuals = GWEACTR_actuals;
EYEACTR.Moduleno = (*NL(UZAACTR_nextmodule))+=1;
A_CALLPROC(NL(Output),(A_UNITE(FYEACTR,mode28,28,EYEACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(FYEACTR,mode28,28,EYEACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 5676: */
 /* line 5677: */
 /* line 5678: */
XVEACTR = (*NL(UZAACTR_nextmodule));
} 
} 
} 
} 
} 
A_PROC_EXIT(closure);
return( XVEACTR );
} 
#undef NL
 /* line 5683: */
 /* line 5684: */

A_STATIC A68_INT  OYEACTR_makekeepinfo(A68_121 * Kl, A68_BOOL  Kb, A68_VC  Ka, A68_100  Decnos, A68_100  Modenos, void *NonLocals)
#define NL(x) (((PYEACTR_makekeepinfo *)NonLocals)->x)
{ 
A68_INT  QYEACTR_ki;
A68_INT  RYEACTR_d;
A68_188  UYEACTR_mdno;   /* proc value of non-global proc */
A68_150  AZEACTR_kc;   /* proc value of non-global proc */
A68_150  GZEACTR_kw;   /* proc value of non-global proc */
A68_47  PZEACTR_ks;   /* proc value of non-global proc */
A68_121 * AAFACTR_klist;
A68_INT  BAFACTR_i;
A68_INT  CAFACTR_j;
A68_INT  DAFACTR_k;
A68_INT  EAFACTR_l;
A68_INT  FAFACTR_m;
A68_INT  GAFACTR_kmno;
A68_INT  HAFACTR_keepno;
A68_122 * IAFACTR_mtodo;
A68_172  KAFACTR_numbermode;   /* proc value of non-global proc */
A68_172  WAFACTR_keepmode;   /* proc value of non-global proc */
A68_120  DCFACTR;  /* united object - for case conformity */
A68_67 * ECFACTR_idd;
A68_INT  FCFACTR;  /* clause result */
A68_VC  GCFACTR;  /* OPERATORS - istruct -> vector */
A68_31  HCFACTR;  /* OPERATORS - istruct -> vector */
A68_110 * ICFACTR_ind;
A68_111  JCFACTR;  /* united object - for case conformity */
A68_52 * KCFACTR_am;
A68_VC  LCFACTR;  /* OPERATORS - istruct -> vector */
A68_31  MCFACTR;  /* OPERATORS - istruct -> vector */
A68_119  NCFACTR_op;
A68_111  OCFACTR;  /* united object - for case conformity */
A68_109 * PCFACTR_oper;
A68_INT  QCFACTR;  /* clause result */
A68_VC  RCFACTR;  /* OPERATORS - istruct -> vector */
A68_31  SCFACTR;  /* OPERATORS - istruct -> vector */
A68_INT  TCFACTR;  /* ADICOPS - ABS INT */
A68_122 ** UCFACTR;  /* YIELD */
A68_INT  VCFACTR;  /* clause result */
A_PROC_ENTRY(makekeepinfo);
 /* line 5685: */
{ 
QYEACTR_ki = 0;
 /* line 5686: */
(*NL(QSAACTR_compsize)) = 0;
 /* line 5688: */
A_CLOSURE( UYEACTR_mdno, VYEACTR_mdno, WYEACTR_mdno );
(( WYEACTR_mdno * ) ( UYEACTR_mdno.nonlocals )) -> QSAACTR_compsize = NL(QSAACTR_compsize);
(( WYEACTR_mdno * ) ( UYEACTR_mdno.nonlocals )) -> Kb = Kb;
(( WYEACTR_mdno * ) ( UYEACTR_mdno.nonlocals )) -> Decnos = Decnos;
(( WYEACTR_mdno * ) ( UYEACTR_mdno.nonlocals )) -> Modenos = Modenos;
 /* line 5696: */
A_CLOSURE( AZEACTR_kc, BZEACTR_kc, CZEACTR_kc );
(( CZEACTR_kc * ) ( AZEACTR_kc.nonlocals )) -> Kb = Kb;
(( CZEACTR_kc * ) ( AZEACTR_kc.nonlocals )) -> Ka = Ka;
(( CZEACTR_kc * ) ( AZEACTR_kc.nonlocals )) -> QYEACTR_ki = (&QYEACTR_ki);
 /* line 5701: */
A_CLOSURE( GZEACTR_kw, HZEACTR_kw, IZEACTR_kw );
(( IZEACTR_kw * ) ( GZEACTR_kw.nonlocals )) -> Kb = Kb;
(( IZEACTR_kw * ) ( GZEACTR_kw.nonlocals )) -> Ka = Ka;
(( IZEACTR_kw * ) ( GZEACTR_kw.nonlocals )) -> QYEACTR_ki = (&QYEACTR_ki);
 /* line 5710: */
A_CLOSURE( PZEACTR_ks, QZEACTR_ks, RZEACTR_ks );
(( RZEACTR_ks * ) ( PZEACTR_ks.nonlocals )) -> Kb = Kb;
(( RZEACTR_ks * ) ( PZEACTR_ks.nonlocals )) -> Ka = Ka;
(( RZEACTR_ks * ) ( PZEACTR_ks.nonlocals )) -> QYEACTR_ki = (&QYEACTR_ki);
 /* line 5721: */
AAFACTR_klist = Kl;
 /* line 5722: */
 /* line 5723: */
GAFACTR_kmno = 99;
HAFACTR_keepno = 0;
 /* line 5724: */
IAFACTR_mtodo = (A68_122 *)A68_NIL;
 /* line 5726: */
A_CLOSURE( KAFACTR_numbermode, LAFACTR_numbermode, MAFACTR_numbermode );
(( MAFACTR_numbermode * ) ( KAFACTR_numbermode.nonlocals )) -> GYEACTR_mdone = NL(GYEACTR_mdone);
(( MAFACTR_numbermode * ) ( KAFACTR_numbermode.nonlocals )) -> YYAACTR_newmode1 = NL(YYAACTR_newmode1);
(( MAFACTR_numbermode * ) ( KAFACTR_numbermode.nonlocals )) -> IAFACTR_mtodo = (&IAFACTR_mtodo);
(( MAFACTR_numbermode * ) ( KAFACTR_numbermode.nonlocals )) -> GAFACTR_kmno = (&GAFACTR_kmno);
(( MAFACTR_numbermode * ) ( KAFACTR_numbermode.nonlocals )) -> HYEACTR_kmfree = NL(HYEACTR_kmfree);
 /* line 5760: */
A_CLOSURE( WAFACTR_keepmode, XAFACTR_keepmode, YAFACTR_keepmode );
(( YAFACTR_keepmode * ) ( WAFACTR_keepmode.nonlocals )) -> KAFACTR_numbermode = KAFACTR_numbermode;
(( YAFACTR_keepmode * ) ( WAFACTR_keepmode.nonlocals )) -> IAFACTR_mtodo = (&IAFACTR_mtodo);
(( YAFACTR_keepmode * ) ( WAFACTR_keepmode.nonlocals )) -> GYEACTR_mdone = NL(GYEACTR_mdone);
(( YAFACTR_keepmode * ) ( WAFACTR_keepmode.nonlocals )) -> KUAACTR_modes = NL(KUAACTR_modes);
(( YAFACTR_keepmode * ) ( WAFACTR_keepmode.nonlocals )) -> AZEACTR_kc = AZEACTR_kc;
(( YAFACTR_keepmode * ) ( WAFACTR_keepmode.nonlocals )) -> GZEACTR_kw = GZEACTR_kw;
(( YAFACTR_keepmode * ) ( WAFACTR_keepmode.nonlocals )) -> PZEACTR_ks = PZEACTR_ks;
(( YAFACTR_keepmode * ) ( WAFACTR_keepmode.nonlocals )) -> DKEACTR_maxchar2 = NL(DKEACTR_maxchar2);
 /* line 5857: */
QYEACTR_ki = 0;
 /* line 5859: */
for ( ;; )
{ 
 /* line 5860: */
if ( !((AAFACTR_klist!=IQAACTR_nilkl)) ) break;
 /* line 5861: */
DCFACTR = (*(&(AAFACTR_klist->U))) ;
switch ( DCFACTR.mode )
{ 
case 1: /* REF STRUCT(MODE31,INT,INT,INT,INT,REF MODE67)  */
ECFACTR_idd = (DCFACTR.data.mode1);
 /* line 5862: */
{ 
BAFACTR_i = A_CALLPROC(WAFACTR_keepmode,((*(&(ECFACTR_idd->Mode)))),((*(&(ECFACTR_idd->Mode))),(WAFACTR_keepmode).nonlocals));
 /* line 5863: */
CAFACTR_j = (*(&(ECFACTR_idd->Decno)));
 /* line 5864: */
if ( (CAFACTR_j>=0) )
{ 
FCFACTR = 1;
} 
else
{ 
FCFACTR = 2;
} 
A_CALLPROC(AZEACTR_kc,(FCFACTR),(FCFACTR,(AZEACTR_kc).nonlocals));
 /* line 5865: */
HCFACTR = (*(&(ECFACTR_idd->Name))) ;
A_CALLPROC(PZEACTR_ks,(A_HISVEC(GCFACTR,HCFACTR,32,A68_CHAR )),(A_HISVEC(GCFACTR,HCFACTR,32,A68_CHAR ),(PZEACTR_ks).nonlocals));
 /* line 5866: */
if ( (CAFACTR_j<0) )
{ 
A_CALLPROC(GZEACTR_kw,((-CAFACTR_j)),((-CAFACTR_j),(GZEACTR_kw).nonlocals));
} 
 /* line 5867: */
A_CALLPROC(GZEACTR_kw,(BAFACTR_i),(BAFACTR_i,(GZEACTR_kw).nonlocals));
 /* line 5868: */
 /* line 5869: */
if ( (CAFACTR_j>=0) )
{ 
 /* line 5870: */
 /* line 5871: */
 /* line 5872: */
A_CALLPROC(UYEACTR_mdno,((*(&(ECFACTR_idd->Decno))), (*(&(ECFACTR_idd->Mode)))),((*(&(ECFACTR_idd->Decno))), (*(&(ECFACTR_idd->Mode))),(UYEACTR_mdno).nonlocals));
} 
} 
break;
case 2: /* REF STRUCT(MODE31,INT,INT,MODE111,REF MODE110)  */
ICFACTR_ind = (DCFACTR.data.mode2);
 /* line 5873: */
 /* line 5874: */
JCFACTR = (*(&(ICFACTR_ind->U))) ;
switch ( JCFACTR.mode )
{ 
case 2: /* REF STRUCT(INT,INT,REF MODE53)  */
KCFACTR_am = (JCFACTR.data.mode2);
 /* line 5875: */
{ 
BAFACTR_i = A_CALLPROC(WAFACTR_keepmode,((*(&(KCFACTR_am->Mode)))),((*(&(KCFACTR_am->Mode))),(WAFACTR_keepmode).nonlocals));
 /* line 5876: */
 /* line 5877: */
if ( ((*(&(KCFACTR_am->Modeproc)))!=0) )
{ 
CAFACTR_j = A_CALLPROC(NL(RRBACTR_insertprocp),((*(&(KCFACTR_am->Mode))), NL(YVAACTR_boolnil)),((*(&(KCFACTR_am->Mode))), NL(YVAACTR_boolnil),(NL(RRBACTR_insertprocp)).nonlocals));
 /* line 5884: */
 /* line 5885: */
A_CALLPROC(WAFACTR_keepmode,(CAFACTR_j),(CAFACTR_j,(WAFACTR_keepmode).nonlocals));
} 
 /* line 5886: */
A_CALLPROC(AZEACTR_kc,(3),(3,(AZEACTR_kc).nonlocals));
 /* line 5887: */
MCFACTR = (*(&(ICFACTR_ind->Name))) ;
A_CALLPROC(PZEACTR_ks,(A_HISVEC(LCFACTR,MCFACTR,32,A68_CHAR )),(A_HISVEC(LCFACTR,MCFACTR,32,A68_CHAR ),(PZEACTR_ks).nonlocals));
 /* line 5888: */
A_CALLPROC(GZEACTR_kw,(BAFACTR_i),(BAFACTR_i,(GZEACTR_kw).nonlocals));
 /* line 5889: */
 /* line 5890: */
if ( ((*(&(KCFACTR_am->Modeproc)))==0) )
{ 
 /* line 5891: */
A_CALLPROC(AZEACTR_kc,(0),(0,(AZEACTR_kc).nonlocals));
} 
else
{ 
A_CALLPROC(AZEACTR_kc,(1),(1,(AZEACTR_kc).nonlocals));
 /* line 5892: */
 /* line 5893: */
 /* line 5894: */
 /* line 5895: */
 /* line 5896: */
A_CALLPROC(UYEACTR_mdno,((*(&(KCFACTR_am->Modeproc))), CAFACTR_j),((*(&(KCFACTR_am->Modeproc))), CAFACTR_j,(UYEACTR_mdno).nonlocals));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 3: /* STRUCT(REF MODE110,REF MODE108)  */
NCFACTR_op = (DCFACTR.data.mode3);
 /* line 5897: */
{ 
BAFACTR_i = A_CALLPROC(WAFACTR_keepmode,((*(&(NCFACTR_op.I->Lmode)))),((*(&(NCFACTR_op.I->Lmode))),(WAFACTR_keepmode).nonlocals));
 /* line 5898: */
CAFACTR_j = A_CALLPROC(WAFACTR_keepmode,((*(&(NCFACTR_op.I->Rmode)))),((*(&(NCFACTR_op.I->Rmode))),(WAFACTR_keepmode).nonlocals));
 /* line 5899: */
DAFACTR_k = A_CALLPROC(WAFACTR_keepmode,((*(&(NCFACTR_op.I->Ans)))),((*(&(NCFACTR_op.I->Ans))),(WAFACTR_keepmode).nonlocals));
 /* line 5900: */
A_CALLPROC(WAFACTR_keepmode,(A_CALLPROC(NL(UXBACTR_opproc),(NCFACTR_op.I),(NCFACTR_op.I,(NL(UXBACTR_opproc)).nonlocals))),(A_CALLPROC(NL(UXBACTR_opproc),(NCFACTR_op.I),(NCFACTR_op.I,(NL(UXBACTR_opproc)).nonlocals)),(WAFACTR_keepmode).nonlocals));
 /* line 5901: */
 /* line 5902: */
if ( ((RYEACTR_d = (*(&(NCFACTR_op.I->Decno))))>=0) )
{ 
 /* line 5903: */
A_CALLPROC(UYEACTR_mdno,(RYEACTR_d, A_CALLPROC(NL(UXBACTR_opproc),(NCFACTR_op.I),(NCFACTR_op.I,(NL(UXBACTR_opproc)).nonlocals))),(RYEACTR_d, A_CALLPROC(NL(UXBACTR_opproc),(NCFACTR_op.I),(NCFACTR_op.I,(NL(UXBACTR_opproc)).nonlocals)),(UYEACTR_mdno).nonlocals));
} 
 /* line 5904: */
 /* line 5905: */
OCFACTR = (*(&(NCFACTR_op.N->U))) ;
switch ( OCFACTR.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE108)  */
PCFACTR_oper = (OCFACTR.data.mode1);
 /* line 5906: */
{ 
if ( (RYEACTR_d>=0) )
{ 
QCFACTR = 4;
} 
else
{ 
QCFACTR = 5;
} 
A_CALLPROC(AZEACTR_kc,(QCFACTR),(QCFACTR,(AZEACTR_kc).nonlocals));
 /* line 5907: */
SCFACTR = (*(&(NCFACTR_op.N->Name))) ;
A_CALLPROC(PZEACTR_ks,(A_HISVEC(RCFACTR,SCFACTR,32,A68_CHAR )),(A_HISVEC(RCFACTR,SCFACTR,32,A68_CHAR ),(PZEACTR_ks).nonlocals));
 /* line 5908: */
TCFACTR = (*(&(PCFACTR_oper->Prio))) ;
A_CALLPROC(AZEACTR_kc,(A_ABS(TCFACTR)),(A_ABS(TCFACTR),(AZEACTR_kc).nonlocals));
 /* line 5909: */
A_CALLPROC(GZEACTR_kw,(BAFACTR_i),(BAFACTR_i,(GZEACTR_kw).nonlocals));
 /* line 5910: */
A_CALLPROC(GZEACTR_kw,(CAFACTR_j),(CAFACTR_j,(GZEACTR_kw).nonlocals));
 /* line 5911: */
A_CALLPROC(GZEACTR_kw,(DAFACTR_k),(DAFACTR_k,(GZEACTR_kw).nonlocals));
 /* line 5912: */
if ( (RYEACTR_d<0) )
{ 
 /* line 5913: */
 /* line 5914: */
 /* line 5915: */
 /* line 5916: */
A_CALLPROC(GZEACTR_kw,((-RYEACTR_d)),((-RYEACTR_d),(GZEACTR_kw).nonlocals));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 5918: */
 /* line 5919: */
AAFACTR_klist = (*(&(AAFACTR_klist->Rest)));
}
 /* line 5921: */
for ( ;; )
{ 
 /* line 5922: */
if ( !(((*NL(GYEACTR_mdone))!=JQAACTR_nilkml)) ) break;
IAFACTR_mtodo = (*NL(GYEACTR_mdone));
 /* line 5923: */
(*NL(GYEACTR_mdone)) = (*(&((*NL(GYEACTR_mdone))->Rest)));
 /* line 5924: */
UCFACTR = (&(IAFACTR_mtodo->Rest)) ;
(*UCFACTR) = (*NL(HYEACTR_kmfree));
 /* line 5925: */
 /* line 5926: */
(*NL(HYEACTR_kmfree)) = IAFACTR_mtodo;
}
 /* line 5927: */
 /* line 5928: */
VCFACTR = QYEACTR_ki;
} 
A_PROC_EXIT(makekeepinfo);
return( VCFACTR );
} 
#undef NL

A_STATIC A68_VOID  YCFACTR_addtokl(A68_120  Ki, void *NonLocals)
#define NL(x) (((ZCFACTR_addtokl *)NonLocals)->x)
{ 
A68_121 * ADFACTR_k;
A68_BOOL  BDFACTR;  /* optbool result */
A68_120  CDFACTR;  /* united object - for case conformity */
A68_67 * DDFACTR_idd;
A68_120  EDFACTR;  /* united object - for case conformity */
A68_67 * FDFACTR_kidd;
A68_BOOL  GDFACTR;  /* clause result */
A68_110 * HDFACTR_ind;
A68_120  IDFACTR;  /* united object - for case conformity */
A68_110 * JDFACTR_kind;
A68_119  KDFACTR_one;
A68_120  LDFACTR;  /* united object - for case conformity */
A68_119  MDFACTR_kone;
A68_BOOL  NDFACTR;  /* optbool result */
A68_121  ODFACTR;  /* collateral clause result */
A68_121 * PDFACTR;  /* YIELD */
A_PROC_ENTRY(addtokl);
 /* line 5932: */
{ 
ADFACTR_k = (*NL(LZAACTR_kl));
 /* line 5933: */
for ( ;; )
{ 
 /* line 5935: */
BDFACTR = (ADFACTR_k!=IQAACTR_nilkl);
if ( BDFACTR )
{CDFACTR = (*(&(ADFACTR_k->U))) ;
switch ( CDFACTR.mode )
{ 
case 1: /* REF STRUCT(MODE31,INT,INT,INT,INT,REF MODE67)  */
DDFACTR_idd = (CDFACTR.data.mode1);
 /* line 5936: */
 /* line 5937: */
EDFACTR = Ki ;
switch ( EDFACTR.mode )
{ 
case 1: /* REF STRUCT(MODE31,INT,INT,INT,INT,REF MODE67)  */
FDFACTR_kidd = (EDFACTR.data.mode1);
 /* line 5938: */
 /* line 5939: */
GDFACTR = (DDFACTR_idd!=FDFACTR_kidd);
break;
default: 
 /* line 5940: */
 /* line 5941: */
GDFACTR = A68_TRUE;
break;
} 
break;
case 2: /* REF STRUCT(MODE31,INT,INT,MODE111,REF MODE110)  */
HDFACTR_ind = (CDFACTR.data.mode2);
 /* line 5942: */
 /* line 5943: */
IDFACTR = Ki ;
switch ( IDFACTR.mode )
{ 
case 2: /* REF STRUCT(MODE31,INT,INT,MODE111,REF MODE110)  */
JDFACTR_kind = (IDFACTR.data.mode2);
 /* line 5944: */
 /* line 5945: */
GDFACTR = (HDFACTR_ind!=JDFACTR_kind);
break;
default: 
 /* line 5946: */
 /* line 5947: */
GDFACTR = A68_TRUE;
break;
} 
break;
case 3: /* STRUCT(REF MODE110,REF MODE108)  */
KDFACTR_one = (CDFACTR.data.mode3);
 /* line 5948: */
 /* line 5949: */
LDFACTR = Ki ;
switch ( LDFACTR.mode )
{ 
case 3: /* STRUCT(REF MODE110,REF MODE108)  */
MDFACTR_kone = (LDFACTR.data.mode3);
 /* line 5950: */
 /* line 5951: */
NDFACTR = (KDFACTR_one.N!=MDFACTR_kone.N);
if ( ! NDFACTR )
{ /* line 5952: */
NDFACTR = (KDFACTR_one.I!=MDFACTR_kone.I);
}
GDFACTR = NDFACTR;
break;
default: 
 /* line 5953: */
 /* line 5954: */
GDFACTR = A68_TRUE;
break;
} 
break;
default: 
 /* line 5955: */
 /* line 5956: */
GDFACTR = A68_TRUE;
break;
} 
BDFACTR = GDFACTR;
}
if ( !(BDFACTR) ) break;
ADFACTR_k = (*(&(ADFACTR_k->Rest)));
}
 /* line 5958: */
 /* line 5959: */
if ( (ADFACTR_k!=IQAACTR_nilkl) )
{ 
 /* line 5961: */
A_CALLPROC(NL(QJBACTR_fault),(189),(189,(NL(QJBACTR_fault)).nonlocals));
} 
else
{ 
ODFACTR.U = Ki;
ODFACTR.Rest = (A68_121 *)A68_NIL;
PDFACTR = A_HEAP(A68_121 ) ;
(*PDFACTR) = ODFACTR ;
(**NL(MZAACTR_rkl)) = PDFACTR;
 /* line 5962: */
 /* line 5963: */
 /* line 5964: */
(*NL(MZAACTR_rkl)) = (&((**NL(MZAACTR_rkl))->Rest));
} 
} 
A_PROC_EXIT(addtokl);
return;
} 
#undef NL

A_STATIC A68_VOID  TDFACTR_anonymous(A68_31 * N, A68_INT  Mn, void *NonLocals)
#define NL(x) (((UDFACTR_anonymous *)NonLocals)->x)
{ 
A68_92  WDFACTR;  /* avoid structure result */
A68_92  VDFACTR_y;
A68_91 * XDFACTR_x;
A68_93  YDFACTR_ys;
A68_37 * ZDFACTR_xs;
A68_112 * AEFACTR_c;
A68_INT  BEFACTR_scope;
A68_BOOL  CEFACTR;  /* optbool result */
A68_BOOL  DEFACTR;  /* optbool result */
A68_96  EEFACTR;  /* collateral clause result */
A68_106  FEFACTR;  /* OPERATORS - mode -> union mode */
A68_93  GEFACTR;  /* avoid structure result */
A68_40  HEFACTR;  /* united object - for case conformity */
A68_VC  IEFACTR_s;
 /* line 5969: */
{ 
A_CALLPROC(NL(Givemoduledetails),((*N), Mn, A68_FALSE, &WDFACTR),((*N), Mn, A68_FALSE, &WDFACTR,(NL(Givemoduledetails)).nonlocals));
VDFACTR_y = WDFACTR;
 /* line 5970: */
XDFACTR_x = (&((&VDFACTR_y)->Xmi));
 /* line 5971: */
 /* line 5972: */
ZDFACTR_xs = (&((&YDFACTR_ys)->Xs));
 /* line 5973: */
AEFACTR_c = (*NL(RABACTR_concheck));
 /* line 5974: */
 /* line 5976: */
for ( ;; )
{ 
CEFACTR = (AEFACTR_c!=FQAACTR_nilconchk);
if ( CEFACTR )
{ /* line 5977: */
CEFACTR = VABACTR_((&(XDFACTR_x->L)), (&(AEFACTR_c->C)));
}
if ( !(CEFACTR) ) break;
AEFACTR_c = (*(&(AEFACTR_c->Rest)));
}
 /* line 5979: */
 /* line 5980: */
if ( ((*(&(XDFACTR_x->Type)))!=(-1)) )
{ 
 /* line 5981: */
if ( (Mn==0) )
{ 
 /* line 5983: */
 /* line 5984: */
A_CALLPROC(NL(PZBACTR_faultp),(129, 0, 0, N),(129, 0, 0, N,(NL(PZBACTR_faultp)).nonlocals));
} 
} 
else
{ 
DEFACTR = (AEFACTR_c==FQAACTR_nilconchk);
if ( DEFACTR )
{ /* line 5985: */
DEFACTR = ((*(&((&(XDFACTR_x->L))->Level)))!=0);
}
if ( DEFACTR )
{ 
 /* line 5987: */
A_CALLPROC(NL(PZBACTR_faultp),(130, 0, 0, (&(XDFACTR_x->Name))),(130, 0, 0, (&(XDFACTR_x->Name)),(NL(PZBACTR_faultp)).nonlocals));
} 
else
{ 
 /* line 5988: */
if ( (AEFACTR_c==FQAACTR_nilconchk) )
{ 
BEFACTR_scope = 3;
 /* line 5989: */
 /* line 5990: */
(*NL(TZAACTR_modulelevel)) = 0;
} 
else
{ 
BEFACTR_scope = (*(&(AEFACTR_c->Scope)));
 /* line 5991: */
 /* line 5992: */
(*NL(TZAACTR_modulelevel)) = (*(&((&(AEFACTR_c->C))->Level)));
} 
 /* line 5993: */
EEFACTR.Type = (-1);
 /* line 5994: */
EEFACTR.Moduleno = (*NL(UZAACTR_nextmodule))+=1;
 /* line 5995: */
EEFACTR.Name = (*(&(XDFACTR_x->Name)));
EEFACTR.Ym = (*(&((&VDFACTR_y)->Ym)));
A_CALLPROC(NL(Output),(A_UNITE(FEFACTR,mode25,25,EEFACTR), 2),(A_UNITE(FEFACTR,mode25,25,EEFACTR), 2,(NL(Output)).nonlocals));
 /* line 5996: */
A_CALLPROC(NL(Givespec),((*(&(XDFACTR_x->Name))), (*(&(XDFACTR_x->Name))), (*(&((&VDFACTR_y)->Ym))), &GEFACTR),((*(&(XDFACTR_x->Name))), (*(&(XDFACTR_x->Name))), (*(&((&VDFACTR_y)->Ym))), &GEFACTR,(NL(Givespec)).nonlocals));
YDFACTR_ys = GEFACTR;
 /* line 5998: */
 /* line 5999: */
HEFACTR = (*(&(ZDFACTR_xs->U))) ;
switch ( HEFACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
IEFACTR_s = (HEFACTR.data.mode1);
 /* line 6000: */
 /* line 6001: */
if ( (Mn==0) )
{ 
 /* line 6002: */
 /* line 6003: */
 /* line 6004: */
 /* line 6005: */
A_CALLPROC(NL(KKEACTR_simplespec),(A68_TRUE, (*(&((*NL(QYAACTR_globcurrent))->Ids))), (*(&((*NL(QYAACTR_globcurrent))->Indics))), (&((*NL(QYAACTR_globcurrent))->Lastid)), BEFACTR_scope, IEFACTR_s),(A68_TRUE, (*(&((*NL(QYAACTR_globcurrent))->Ids))), (*(&((*NL(QYAACTR_globcurrent))->Indics))), (&((*NL(QYAACTR_globcurrent))->Lastid)), BEFACTR_scope, IEFACTR_s,(NL(KKEACTR_simplespec)).nonlocals));
} 
else
{ 
 /* line 6006: */
 /* line 6007: */
 /* line 6008: */
 /* line 6009: */
 /* line 6010: */
 /* line 6011: */
A_CALLPROC(NL(KKEACTR_simplespec),(A68_TRUE, NL(EABACTR_libids), NL(MABACTR_libinds), NL(VZAACTR_nextlibno), BEFACTR_scope, IEFACTR_s),(A68_TRUE, NL(EABACTR_libids), NL(MABACTR_libinds), NL(VZAACTR_nextlibno), BEFACTR_scope, IEFACTR_s,(NL(KKEACTR_simplespec)).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
} 
} 
return;
} 
#undef NL

A_STATIC A68_67 * KEFACTR_findid(void *NonLocals)
#define NL(x) (((LEFACTR_findid *)NonLocals)->x)
{ 
A68_127  REFACTR;  /* OPERATORS - simple index */
A68_67 * QEFACTR_id;
A68_INT  SEFACTR_i;
A68_BOOL  TEFACTR;  /* optbool result */
A68_VC  UEFACTR;  /* OPERATORS - istruct -> vector */
A68_31  VEFACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WEFACTR;  /* OPERATORS - istruct -> vector */
A68_67  XEFACTR;  /* collateral clause result */
A68_67 * YEFACTR;  /* YIELD */
A68_67 ** ZEFACTR;  /* YIELD */
A68_INT * AFFACTR;  /* YIELD */
A68_67 * BFFACTR;  /* clause result */
A_PROC_ENTRY(findid);
{ 
REFACTR = (*(&((*NL(QYAACTR_globcurrent))->Ids))) ;
QEFACTR_id = (*(&A_VINDEX(REFACTR,(*NL(TSAACTR_idhash)))));
 /* line 6017: */
SEFACTR_i = 0;
 /* line 6018: */
NEFACTR_aa:
 /* line 6019: */
for ( ;; )
{ 
TEFACTR = (QEFACTR_id!=TQAACTR_nilid);
if ( TEFACTR )
{ /* line 6020: */
VEFACTR = (*(&(QEFACTR_id->Name))) ;
TEFACTR = A_VC_NE(A_HISVEC(UEFACTR,VEFACTR,32,A68_CHAR ),A_HISVEC(WEFACTR,(*NL(PSAACTR_ident)),32,A68_CHAR ));
}
if ( !(TEFACTR) ) break;
QEFACTR_id = (*(&(QEFACTR_id->Rest)));
}
 /* line 6022: */
 /* line 6023: */
if ( (QEFACTR_id==TQAACTR_nilid) )
{ 
 /* line 6024: */
switch ( SEFACTR_i+=1 )
{ 
case 1: 
{ 
QEFACTR_id = (*(&A_VINDEX(NL(EABACTR_libids),(*NL(TSAACTR_idhash)))));
 /* line 6025: */
 /* line 6026: */
 /* line 6027: */
goto NEFACTR_aa;
} 
break;
case 2: 
{ 
A_CALLPROC((*NL(FFDACTR_bumodule)),(NL(PSAACTR_ident), 1),(NL(PSAACTR_ident), 1,((*NL(FFDACTR_bumodule))).nonlocals));
 /* line 6028: */
QEFACTR_id = (*(&A_VINDEX(NL(EABACTR_libids),(*NL(TSAACTR_idhash)))));
 /* line 6029: */
 /* line 6030: */
 /* line 6031: */
goto NEFACTR_aa;
} 
break;
case 3: 
{ 
XEFACTR.Name = (*NL(PSAACTR_ident));
XEFACTR.Decno = 1;
 /* line 6032: */
XEFACTR.Level = 1;
XEFACTR.Mode = ZKAACTR_faultmode;
XEFACTR.Scope = 0;
 /* line 6033: */
XEFACTR.Rest = (*(&A_VINDEX(NL(EABACTR_libids),(*NL(TSAACTR_idhash)))));
YEFACTR = A_HEAP(A68_67 ) ;
(*YEFACTR) = XEFACTR ;
QEFACTR_id = YEFACTR;
 /* line 6034: */
if ( ((*NL(ITAACTR_supflts))==0) )
{ 
ZEFACTR = (&A_VINDEX(NL(EABACTR_libids),(*NL(TSAACTR_idhash)))) ;
(*ZEFACTR) = QEFACTR_id;
} 
 /* line 6036: */
A_CALLPROC(NL(PZBACTR_faultp),(131, 0, 0, NL(PSAACTR_ident)),(131, 0, 0, NL(PSAACTR_ident),(NL(PZBACTR_faultp)).nonlocals));
 /* line 6037: */
 /* line 6038: */
 /* line 6039: */
 /* line 6040: */
goto PEFACTR_e;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
 /* line 6041: */
 /* line 6042: */
if ( ((*(&(QEFACTR_id->Mode)))==ZKAACTR_faultmode) )
{ 
 /* line 6043: */
AFFACTR = (&(QEFACTR_id->Decno)) ;
(*AFFACTR)+=1;
} 
 /* line 6045: */
PEFACTR_e:
 /* line 6046: */
BFFACTR = QEFACTR_id;
} 
A_PROC_EXIT(findid);
return( BFFACTR );
} 
#undef NL
 /* line 6051: */
 /* line 6052: */

A_STATIC A68_VOID  HFFACTR_range(A68_126 * External, A68_67 * Rdname, A68_110 * Indname, A68_BOOL * Saveexit, A68_124  *ReturnedValue, void *NonLocals)
#define NL(x) (((IFFACTR_range *)NonLocals)->x)
{ 
A68_126  NFFACTR_current;
A68_BOOL  OFFACTR_oldidhash;
A68_BOOL  PFFACTR_oldindichash;
A68_BITS  QFFACTR;  /* clause result */
A68_BITS * RFFACTR;  /* YIELD */
A68_INT * SFFACTR;  /* YIELD */
A68_69 ** TFFACTR;  /* YIELD */
A68_BITS * UFFACTR;  /* YIELD */
A68_132 * VFFACTR_rididlist;
A68_BITS  WFFACTR_dobits;
A68_INT  XFFACTR_doint;
A68_INT  YFFACTR_ccmode;
A68_INT  ZFFACTR_m;
A68_54 * AGFACTR_ml;
A68_52 * BGFACTR_am;
A68_INT  CGFACTR_i;
A68_INT  DGFACTR_j;
A68_INT  EGFACTR_k;
A68_INT  FGFACTR_firstmode;
A68_INT  GGFACTR_type;
A68_INT  HGFACTR_descno;
A68_67 * IGFACTR_id;
A68_110 * JGFACTR_indic;
A68_108 * KGFACTR_inst1;
A68_233  LGFACTR_uc1;
A68_67 ** MGFACTR_rid;
A68_110 ** NGFACTR_rindic;
A68_52  OGFACTR_scam;
A68_INT * PGFACTR;  /* YIELD */
A68_125  QGFACTR;  /* collateral clause result */
A68_125  RGFACTR_v;
A68_INT  SGFACTR_rangestind;
A68_INT  TGFACTR_rangebrind;
A68_INT  UGFACTR_formatstind;
A68_INT  VGFACTR_formatbrind;
A68_INT  WGFACTR_formatcaseno;
A68_124  XGFACTR_vlist;
A68_124 * YGFACTR_vl;
A68_BOOL  ZGFACTR_heap;
A68_54 * AHFACTR_parlist;
A68_54 * BHFACTR_pl;
A68_54 * CHFACTR_pl1;
A68_69 * DHFACTR_lab;
A68_69 * EHFACTR_labl;
A68_89  FHFACTR_xcharpos;
A68_BOOL  GHFACTR_firstaidec;
A68_BOOL  HHFACTR_givenmess;
A68_234  KHFACTR_scopel;   /* proc value of non-global proc */
A68_100  AIFACTR_inserts;
A68_100  BIFACTR_ignorable;
A68_100  CIFACTR_nonstarter;
A68_45  FIFACTR_informat1;
A68_203  HIFACTR_recovery;   /* proc value of non-global proc */
A68_jmp_buf JFFACTR_exitsc;
A68_240  QLFACTR_declarer;   /* proc value of non-global proc */
A68_jmp_buf LFFACTR_scstart;
A68_45  PQFACTR_lookahead;   /* proc value of non-global proc */
A68_45  BRFACTR_informat;   /* proc value of non-global proc */
A68_233  YTFACTR_uc;   /* proc value of non-global proc */
A68_INT  NHGACTR;  /* clause result */
A68_INT  OHGACTR_i;
A68_31 * PHGACTR;  /* YIELD */
A68_31 * QHGACTR;  /* YIELD */
A68_INT * RHGACTR;  /* YIELD */
A68_92  THGACTR;  /* avoid structure result */
A68_92  SHGACTR_y;
A68_42 * UHGACTR;  /* YIELD */
A68_42 * VHGACTR;  /* YIELD */
A68_106  WHGACTR;  /* OPERATORS - mode -> union mode */
A68_87  XHGACTR;  /* collateral clause result */
A68_106  YHGACTR;  /* OPERATORS - mode -> union mode */
A68_105  ZHGACTR;  /* collateral clause result */
A68_106  AIGACTR;  /* OPERATORS - mode -> union mode */
A68_94  BIGACTR;  /* collateral clause result */
A68_106  CIGACTR;  /* OPERATORS - mode -> union mode */
A68_INT * DIGACTR;  /* YIELD */
A68_81  EIGACTR;  /* collateral clause result */
A68_67  FIGACTR;  /* collateral clause result */
A68_67 * GIGACTR;  /* YIELD */
A68_106  HIGACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * IIGACTR;  /* YIELD */
A68_INT * JIGACTR;  /* YIELD */
A68_106  KIGACTR;  /* OPERATORS - mode -> union mode */
A68_125  LIGACTR;  /* avoid structure result */
A68_95  MIGACTR;  /* collateral clause result */
A68_106  NIGACTR;  /* OPERATORS - mode -> union mode */
A68_87  OIGACTR;  /* collateral clause result */
A68_106  PIGACTR;  /* OPERATORS - mode -> union mode */
A68_90  QIGACTR;  /* collateral clause result */
A68_106  RIGACTR;  /* OPERATORS - mode -> union mode */
A68_107  SIGACTR;  /* OPERATORS - trim index */
A68_106  TIGACTR;  /* OPERATORS - mode -> union mode */
A68_107  UIGACTR;  /* YIELD */
A68_103  VIGACTR;  /* collateral clause result */
A68_106  WIGACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  XIGACTR;  /* optbool result */
A68_VC  YIGACTR;  /* OPERATORS - istruct -> vector */
A68_31  ZIGACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AJGACTR;  /* OPERATORS - istruct -> vector */
A68_114  BJGACTR;  /* collateral clause result */
A68_INT * CJGACTR;  /* YIELD */
A68_114 * DJGACTR;  /* YIELD */
A68_43  FJGACTR_generator;   /* proc value of non-global proc */
A68_VC  OJGACTR;  /* avoid structure result */
A68_VC  NJGACTR_kspec;
A68_151  QJGACTR_generator;   /* proc value of non-global proc */
A68_100  WJGACTR;  /* avoid structure result */
A68_100  VJGACTR_decnos;
A68_100  YJGACTR;  /* avoid structure result */
A68_100  XJGACTR_modenos;
A68_106  ZJGACTR;  /* OPERATORS - mode -> union mode */
A68_87  AKGACTR;  /* collateral clause result */
A68_106  BKGACTR;  /* OPERATORS - mode -> union mode */
A68_90  CKGACTR;  /* collateral clause result */
A68_106  DKGACTR;  /* OPERATORS - mode -> union mode */
A68_107  EKGACTR;  /* OPERATORS - trim index */
A68_106  FKGACTR;  /* OPERATORS - mode -> union mode */
A68_107  GKGACTR;  /* YIELD */
A68_104  HKGACTR;  /* collateral clause result */
A68_106  IKGACTR;  /* OPERATORS - mode -> union mode */
A68_37  JKGACTR;  /* collateral clause result */
A68_40  KKGACTR;  /* OPERATORS - mode -> union mode */
A68_106  LKGACTR;  /* OPERATORS - mode -> union mode */
A68_69 ** MKGACTR;  /* YIELD */
A68_31 * NKGACTR;  /* YIELD */
A68_31 * OKGACTR;  /* YIELD */
A68_INT * PKGACTR;  /* YIELD */
A68_42  QKGACTR;  /* collateral clause result */
A68_42 * RKGACTR;  /* YIELD */
A68_42 * SKGACTR;  /* YIELD */
A68_42  TKGACTR;  /* collateral clause result */
A68_42 * UKGACTR;  /* YIELD */
A68_92  WKGACTR;  /* avoid structure result */
A68_92  VKGACTR_yml;
A68_92  XKGACTR_ymg;
A68_91 * YKGACTR_xml;
A68_42  ZKGACTR;  /* clause result */
A68_42 * ALGACTR;  /* YIELD */
A68_92  BLGACTR;  /* avoid structure result */
A68_INT * CLGACTR;  /* YIELD */
A68_INT  DLGACTR;  /* clause result */
A68_106  ELGACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  FLGACTR;  /* optbool result */
A68_VC  GLGACTR;  /* OPERATORS - istruct -> vector */
A68_31  HLGACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ILGACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  JLGACTR;  /* optbool result */
A68_116  KLGACTR;  /* collateral clause result */
A68_117  LLGACTR;  /* OPERATORS - mode -> union mode */
A68_116 * MLGACTR;  /* YIELD */
A68_118  NLGACTR;  /* collateral clause result */
A68_118 * OLGACTR;  /* YIELD */
A68_117  PLGACTR;  /* OPERATORS - mode -> union mode */
A68_117 * QLGACTR;  /* YIELD */
A68_117  RLGACTR;  /* OPERATORS - mode -> union mode */
A68_117 * SLGACTR;  /* YIELD */
A68_117  TLGACTR;  /* OPERATORS - mode -> union mode */
A68_114 * ULGACTR;  /* YIELD */
A68_117 * VLGACTR;  /* YIELD */
A68_116 ** WLGACTR;  /* YIELD */
A68_118  XLGACTR;  /* collateral clause result */
A68_118 * YLGACTR;  /* YIELD */
A68_120  ZLGACTR;  /* OPERATORS - mode -> union mode */
A68_67 * AMGACTR;  /* YIELD */
A68_120  BMGACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  CMGACTR;  /* optbool result */
A68_BOOL  DMGACTR;  /* optbool result */
A68_119  EMGACTR;  /* collateral clause result */
A68_120  FMGACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * GMGACTR;  /* YIELD */
A68_116  HMGACTR;  /* collateral clause result */
A68_117  IMGACTR;  /* OPERATORS - mode -> union mode */
A68_116 * JMGACTR;  /* YIELD */
A68_43  LMGACTR_generator;   /* proc value of non-global proc */
A68_VC  UMGACTR;  /* avoid structure result */
A68_VC  TMGACTR_kspec;
A68_151  WMGACTR_generator;   /* proc value of non-global proc */
A68_100  CNGACTR;  /* avoid structure result */
A68_100  BNGACTR_decnos;
A68_100  ENGACTR;  /* avoid structure result */
A68_100  DNGACTR_modes;
A68_114 * FNGACTR_p;
A68_71  GNGACTR;  /* collateral clause result */
A68_71  HNGACTR_kset;
A68_37  INGACTR;  /* collateral clause result */
A68_40  JNGACTR;  /* OPERATORS - mode -> union mode */
A68_106  KNGACTR;  /* OPERATORS - mode -> union mode */
A68_98  LNGACTR;  /* collateral clause result */
A68_99  MNGACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_106  NNGACTR;  /* OPERATORS - mode -> union mode */
A68_125  ONGACTR;  /* collateral clause result */
A68_147  UNGACTR_generator;   /* proc value of non-global proc */
A68_128  ZNGACTR;  /* avoid structure result */
A68_128  AOGACTR;  /* OPERATORS - assign op */
A68_128 * BOGACTR;  /* YIELD */
A68_BOOL  COGACTR;  /* optbool result */
A68_128  DOGACTR;  /* OPERATORS - simple index */
A68_BOOL  EOGACTR;  /* optbool result */
A68_VC  FOGACTR;  /* OPERATORS - istruct -> vector */
A68_31  GOGACTR;  /* OPERATORS - istruct -> vector */
A68_VC  HOGACTR;  /* OPERATORS - istruct -> vector */
A68_111  IOGACTR;  /* united object - for case conformity */
A68_52 * JOGACTR_a;
A68_52  KOGACTR;  /* collateral clause result */
A68_52 * LOGACTR;  /* YIELD */
A68_110  MOGACTR;  /* collateral clause result */
A68_111  NOGACTR;  /* OPERATORS - mode -> union mode */
A68_128  OOGACTR;  /* OPERATORS - simple index */
A68_128  POGACTR;  /* OPERATORS - simple index */
A68_110 * QOGACTR;  /* YIELD */
A68_110 ** ROGACTR;  /* YIELD */
A68_66  SOGACTR;  /* OPERATORS - mode -> union mode */
A68_66 * TOGACTR;  /* YIELD */
A68_53  UOGACTR;  /* collateral clause result */
A68_53 * VOGACTR;  /* YIELD */
A68_BOOL  WOGACTR;  /* optbool result */
A68_66  XOGACTR;  /* united object - for case conformity */
A68_52 * YOGACTR_a;
A68_BOOL  ZOGACTR;  /* clause result */
A68_111  APGACTR;  /* OPERATORS - mode -> union mode */
A68_111 * BPGACTR;  /* YIELD */
A68_BOOL  CPGACTR;  /* optbool result */
A68_66 * DPGACTR;  /* YIELD */
A68_INT * EPGACTR;  /* YIELD */
A68_INT  FPGACTR_i;
A68_INT  GPGACTR;  /* to part of loop */
A68_INT  HPGACTR;  /* by part of loop */
A68_66  IPGACTR;  /* united object - for case conformity */
A68_65  JPGACTR_s;
A68_52 * KPGACTR_a;
A68_INT * LPGACTR;  /* YIELD */
A68_56 * MPGACTR_u;
A68_100  NPGACTR;  /* OPERATORS - vacuum */
A68_213  OPGACTR;  /* OPERATORS - vector -> row */
A68_213  PPGACTR;  /* OPERATORS - trim index */
A68_213  QPGACTR;  /* OPERATORS - trim index */
A68_INT  RPGACTR_i;
A68_INT  SPGACTR;  /* to part of loop */
A68_66 * TPGACTR_mi;
A68_66  UPGACTR;  /* united object - for case conformity */
A68_INT  VPGACTR_j;
A68_INT  WPGACTR;  /* to part of loop */
union {  /* BIOP 99 */
A68_66 *  source;
A68_INT *  destination;
} ZPGACTR; 
union {  /* BIOP 99 */
A68_66 *  source;
A68_INT *  destination;
} AQGACTR; 
A68_BOOL  BQGACTR;  /* optbool result */
A68_70 * CQGACTR_pi;
A68_198  DQGACTR;  /* OPERATORS - trim index */
A68_198  EQGACTR;  /* forall yield */
A68_INT  FQGACTR;  /* forall loop counter */
A68_124  GQGACTR;  /* collateral clause result */
A68_BITS * HQGACTR;  /* YIELD */
A68_BITS * IQGACTR;  /* YIELD */
A68_124  JQGACTR;  /* collateral clause result */
A68_124 * KQGACTR;  /* YIELD */
A68_124 ** LQGACTR;  /* YIELD */
A68_BITS * MQGACTR;  /* YIELD */
A68_87  NQGACTR;  /* collateral clause result */
A68_106  OQGACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * PQGACTR;  /* YIELD */
A68_125  QQGACTR;  /* collateral clause result */
A68_147  SQGACTR_generator;   /* proc value of non-global proc */
A68_128  XQGACTR;  /* avoid structure result */
A68_128  YQGACTR;  /* OPERATORS - assign op */
A68_128 * ZQGACTR;  /* YIELD */
A68_128  ARGACTR;  /* OPERATORS - simple index */
A68_BOOL  BRGACTR;  /* optbool result */
A68_VC  CRGACTR;  /* OPERATORS - istruct -> vector */
A68_31  DRGACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ERGACTR;  /* OPERATORS - istruct -> vector */
A68_111  FRGACTR;  /* united object - for case conformity */
A68_52 * GRGACTR_a;
A68_BOOL  HRGACTR;  /* optbool result */
A68_110  IRGACTR;  /* collateral clause result */
A68_109  JRGACTR;  /* collateral clause result */
A68_109 * KRGACTR;  /* YIELD */
A68_111  LRGACTR;  /* OPERATORS - mode -> union mode */
A68_128  MRGACTR;  /* OPERATORS - simple index */
A68_128  NRGACTR;  /* OPERATORS - simple index */
A68_110 * ORGACTR;  /* YIELD */
A68_110 ** PRGACTR;  /* YIELD */
A68_BOOL  QRGACTR;  /* optbool result */
A68_BITS * RRGACTR;  /* YIELD */
A68_111  SRGACTR;  /* united object - for case conformity */
A68_109 * TRGACTR_op;
A68_INT * URGACTR;  /* YIELD */
A68_111  VRGACTR;  /* united object - for case conformity */
A68_109 * WRGACTR_op;
A68_108  XRGACTR;  /* collateral clause result */
A68_108 * YRGACTR;  /* YIELD */
A68_108 ** ZRGACTR;  /* YIELD */
A68_BITS * ASGACTR;  /* YIELD */
A68_BITS * BSGACTR;  /* YIELD */
A68_125  CSGACTR;  /* avoid structure result */
A68_INT * DSGACTR;  /* YIELD */
A68_67  ESGACTR;  /* collateral clause result */
A68_67 * FSGACTR;  /* YIELD */
A68_81  GSGACTR;  /* collateral clause result */
A68_106  HSGACTR;  /* OPERATORS - mode -> union mode */
A68_111  ISGACTR;  /* united object - for case conformity */
A68_109 * JSGACTR_op;
A68_108  KSGACTR;  /* collateral clause result */
A68_108 * LSGACTR;  /* YIELD */
A68_108 ** MSGACTR;  /* YIELD */
A68_66  NSGACTR;  /* united object - for case conformity */
A68_57 * OSGACTR_p;
A68_INT * PSGACTR;  /* YIELD */
A68_INT * QSGACTR;  /* YIELD */
A68_INT * RSGACTR;  /* YIELD */
A68_INT * SSGACTR;  /* YIELD */
A68_INT * TSGACTR;  /* YIELD */
A68_INT * USGACTR;  /* YIELD */
A68_INT * VSGACTR;  /* YIELD */
A68_BITS * WSGACTR;  /* YIELD */
A68_68  XSGACTR;  /* collateral clause result */
A68_68 * YSGACTR;  /* YIELD */
A68_68 ** ZSGACTR;  /* YIELD */
A68_INT * ATGACTR;  /* YIELD */
A68_106  BTGACTR;  /* OPERATORS - mode -> union mode */
A68_81  CTGACTR;  /* collateral clause result */
A68_106  DTGACTR;  /* OPERATORS - mode -> union mode */
A68_54  ETGACTR;  /* collateral clause result */
A68_54 * FTGACTR;  /* YIELD */
A68_54 ** GTGACTR;  /* YIELD */
A68_INT * HTGACTR;  /* YIELD */
A68_INT * ITGACTR;  /* YIELD */
A68_INT * JTGACTR;  /* YIELD */
A68_31 * KTGACTR;  /* YIELD */
A68_81  LTGACTR;  /* collateral clause result */
A68_106  MTGACTR;  /* OPERATORS - mode -> union mode */
A68_31 * NTGACTR;  /* YIELD */
A68_BITS * OTGACTR;  /* YIELD */
A68_111  PTGACTR;  /* united object - for case conformity */
A68_109 * QTGACTR_op;
A68_108 * RTGACTR_in;
A68_INT * STGACTR;  /* YIELD */
A68_INT * TTGACTR;  /* YIELD */
A68_INT * UTGACTR;  /* YIELD */
A68_INT * VTGACTR;  /* YIELD */
A68_BOOL  WTGACTR_b;
A68_125  XTGACTR;  /* avoid structure result */
A68_VC  YTGACTR;  /* OPERATORS - istruct -> vector */
A68_31  ZTGACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AUGACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  BUGACTR_format;
A68_124  CUGACTR;  /* collateral clause result */
A68_BOOL  DUGACTR;  /* optbool result */
A68_BITS * EUGACTR;  /* YIELD */
A68_INT  FUGACTR;  /* ADICOPS - ABS INT */
A68_BITS * GUGACTR;  /* YIELD */
A68_87  HUGACTR;  /* collateral clause result */
A68_106  IUGACTR;  /* OPERATORS - mode -> union mode */
A68_106  JUGACTR;  /* OPERATORS - mode -> union mode */
A68_68 * KUGACTR;  /* YIELD */
A68_82  LUGACTR;  /* collateral clause result */
A68_106  MUGACTR;  /* OPERATORS - mode -> union mode */
A68_82  NUGACTR;  /* collateral clause result */
A68_106  OUGACTR;  /* OPERATORS - mode -> union mode */
A68_69 ** PUGACTR;  /* YIELD */
A68_69 ** QUGACTR;  /* YIELD */
A68_124  RUGACTR;  /* collateral clause result */
A68_106  SUGACTR;  /* OPERATORS - mode -> union mode */
A68_INT  TUGACTR;  /* YIELD */
A68_106  UUGACTR;  /* OPERATORS - mode -> union mode */
A68_106  VUGACTR;  /* OPERATORS - mode -> union mode */
A68_INT  WUGACTR;  /* YIELD */
A68_85  XUGACTR;  /* collateral clause result */
A68_106  YUGACTR;  /* OPERATORS - mode -> union mode */
A68_85  ZUGACTR;  /* collateral clause result */
A68_106  AVGACTR;  /* OPERATORS - mode -> union mode */
A68_124  BVGACTR;  /* avoid structure result */
A68_INT * CVGACTR;  /* YIELD */
A68_INT * DVGACTR;  /* YIELD */
A68_31 * EVGACTR;  /* YIELD */
A68_INT * FVGACTR;  /* YIELD */
A68_81  GVGACTR;  /* collateral clause result */
A68_106  HVGACTR;  /* OPERATORS - mode -> union mode */
A68_INT  LVGACTR;  /* clause result */
A68_66  MVGACTR;  /* clause result */
A68_56 * NVGACTR_ru;
A68_87  OVGACTR;  /* collateral clause result */
A68_106  PVGACTR;  /* OPERATORS - mode -> union mode */
A68_INT * QVGACTR;  /* YIELD */
A68_81  RVGACTR;  /* collateral clause result */
A68_106  SVGACTR;  /* OPERATORS - mode -> union mode */
A68_125  TVGACTR;  /* avoid structure result */
A68_146  VVGACTR_generator;   /* proc value of non-global proc */
A68_127  AWGACTR;  /* avoid structure result */
A68_127  BWGACTR;  /* OPERATORS - assign op */
A68_127 * CWGACTR;  /* YIELD */
A68_127  DWGACTR;  /* OPERATORS - simple index */
A68_BOOL  EWGACTR;  /* optbool result */
A68_VC  FWGACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GWGACTR;  /* OPERATORS - istruct -> vector */
A68_31  HWGACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  IWGACTR;  /* optbool result */
A68_INT * JWGACTR;  /* YIELD */
A68_67  KWGACTR;  /* collateral clause result */
A68_67 * LWGACTR;  /* YIELD */
A68_BITS  MWGACTR;  /* ADICOPS - >= */
A68_INT * NWGACTR;  /* YIELD */
A68_81  OWGACTR;  /* collateral clause result */
A68_67  PWGACTR;  /* collateral clause result */
A68_67 * QWGACTR;  /* YIELD */
A68_106  RWGACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * SWGACTR;  /* YIELD */
A68_INT * TWGACTR;  /* YIELD */
A68_BITS * UWGACTR;  /* YIELD */
A68_INT * VWGACTR;  /* YIELD */
A68_125  WWGACTR;  /* avoid structure result */
A68_INT * XWGACTR;  /* YIELD */
A68_81  YWGACTR;  /* collateral clause result */
A68_106  ZWGACTR;  /* OPERATORS - mode -> union mode */
A68_INT * AXGACTR;  /* YIELD */
A68_INT * BXGACTR;  /* YIELD */
A68_BITS * CXGACTR;  /* YIELD */
A68_INT * DXGACTR;  /* YIELD */
A68_BOOL  EXGACTR;  /* optbool result */
A68_72  FXGACTR;  /* collateral clause result */
A68_106  GXGACTR;  /* OPERATORS - mode -> union mode */
A68_106  HXGACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  IXGACTR;  /* YIELD */
A68_85  JXGACTR;  /* collateral clause result */
A68_106  KXGACTR;  /* OPERATORS - mode -> union mode */
A68_85  LXGACTR;  /* collateral clause result */
A68_106  MXGACTR;  /* OPERATORS - mode -> union mode */
A68_85  NXGACTR;  /* collateral clause result */
A68_106  OXGACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * PXGACTR;  /* YIELD */
A68_BOOL  QXGACTR;  /* optbool result */
A68_81  RXGACTR;  /* collateral clause result */
A68_106  SXGACTR;  /* OPERATORS - mode -> union mode */
A68_87  TXGACTR;  /* collateral clause result */
A68_106  UXGACTR;  /* OPERATORS - mode -> union mode */
A68_106  VXGACTR;  /* OPERATORS - mode -> union mode */
A68_INT  WXGACTR;  /* YIELD */
A68_INT  XXGACTR;  /* ADICOPS - ABS INT */
A68_106  YXGACTR;  /* OPERATORS - mode -> union mode */
A68_INT * ZXGACTR;  /* YIELD */
A68_125  AYGACTR;  /* avoid structure result */
A68_85  BYGACTR;  /* collateral clause result */
A68_106  CYGACTR;  /* OPERATORS - mode -> union mode */
A68_87  DYGACTR;  /* collateral clause result */
A68_106  EYGACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * FYGACTR;  /* YIELD */
A68_BITS * GYGACTR;  /* YIELD */
A68_INT * HYGACTR;  /* YIELD */
A68_81  IYGACTR;  /* collateral clause result */
A68_106  JYGACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  KYGACTR;  /* optbool result */
A68_81  LYGACTR;  /* collateral clause result */
A68_106  MYGACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  NYGACTR;  /* optbool result */
A68_BITS  OYGACTR;  /* ADICOPS - >= */
A68_BITS * PYGACTR;  /* YIELD */
A68_INT * QYGACTR;  /* YIELD */
A68_106  RYGACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  SYGACTR;  /* optbool result */
A68_VC  TYGACTR;  /* OPERATORS - istruct -> vector */
A68_31  UYGACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VYGACTR;  /* OPERATORS - istruct -> vector */
A68_69  WYGACTR;  /* collateral clause result */
A68_69 * XYGACTR;  /* YIELD */
A68_69 ** YYGACTR;  /* YIELD */
A68_127  ZYGACTR;  /* OPERATORS - simple index */
A68_BOOL  AZGACTR;  /* optbool result */
A68_VC  BZGACTR;  /* OPERATORS - istruct -> vector */
A68_VC  CZGACTR;  /* OPERATORS - istruct -> vector */
A68_31  DZGACTR;  /* OPERATORS - istruct -> vector */
A68_INT * EZGACTR;  /* YIELD */
A68_BITS * FZGACTR;  /* YIELD */
A68_82  GZGACTR;  /* collateral clause result */
A68_106  HZGACTR;  /* OPERATORS - mode -> union mode */
A68_BITS  IZGACTR_b;
A68_BITS  JZGACTR;  /* ADICOPS - >= */
A68_124  KZGACTR;  /* collateral clause result */
A68_125  LZGACTR;  /* avoid structure result */
A68_54  MZGACTR;  /* collateral clause result */
A68_54  NZGACTR;  /* collateral clause result */
A68_54 * OZGACTR;  /* YIELD */
A68_54 * PZGACTR;  /* YIELD */
A68_54  QZGACTR;  /* collateral clause result */
A68_54 * RZGACTR;  /* YIELD */
A68_68  SZGACTR;  /* collateral clause result */
A68_68 * TZGACTR;  /* YIELD */
A68_68 ** UZGACTR;  /* YIELD */
A68_69 ** VZGACTR;  /* YIELD */
A68_INT * WZGACTR;  /* YIELD */
A68_106  XZGACTR;  /* OPERATORS - mode -> union mode */
A68_106  YZGACTR;  /* OPERATORS - mode -> union mode */
A68_124  ZZGACTR;  /* avoid structure result */
A68_125  AAHACTR;  /* clause result */
A68_87  BAHACTR;  /* collateral clause result */
A68_106  CAHACTR;  /* OPERATORS - mode -> union mode */
A68_87  DAHACTR;  /* collateral clause result */
A68_106  EAHACTR;  /* OPERATORS - mode -> union mode */
A68_87  FAHACTR;  /* collateral clause result */
A68_106  GAHACTR;  /* OPERATORS - mode -> union mode */
A68_69 ** HAHACTR;  /* YIELD */
A68_BITS  IAHACTR;  /* ADICOPS - >= */
A68_87  JAHACTR;  /* collateral clause result */
A68_106  KAHACTR;  /* OPERATORS - mode -> union mode */
A68_132  LAHACTR;  /* collateral clause result */
A68_132 * MAHACTR;  /* YIELD */
A68_INT * NAHACTR;  /* YIELD */
A68_125  OAHACTR;  /* avoid structure result */
A68_INT * PAHACTR;  /* YIELD */
A68_INT  QAHACTR;  /* YIELD */
A68_66  RAHACTR;  /* united object - for case conformity */
A68_61 * SAHACTR_rv;
A68_62 * TAHACTR_ra;
A68_INT * UAHACTR;  /* YIELD */
A68_87  VAHACTR;  /* collateral clause result */
A68_106  WAHACTR;  /* OPERATORS - mode -> union mode */
A68_INT  XAHACTR;  /* to part of loop */
A68_INT  YAHACTR;  /* loop control */
A68_67 ** ZAHACTR;  /* YIELD */
A68_67 ** ABHACTR;  /* YIELD */
A68_81  BBHACTR;  /* collateral clause result */
A68_106  CBHACTR;  /* OPERATORS - mode -> union mode */
A68_INT * DBHACTR;  /* YIELD */
A68_INT * EBHACTR;  /* YIELD */
A68_125  FBHACTR;  /* avoid structure result */
A68_125  GBHACTR;  /* avoid structure result */
A68_125  HBHACTR;  /* avoid structure result */
A68_87  IBHACTR;  /* collateral clause result */
A68_106  JBHACTR;  /* OPERATORS - mode -> union mode */
A68_INT * KBHACTR;  /* YIELD */
A68_81  LBHACTR;  /* collateral clause result */
A68_106  MBHACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  NBHACTR;  /* optbool result */
A68_BOOL  OBHACTR;  /* optbool result */
A68_125  PBHACTR;  /* collateral clause result */
A68_INT * QBHACTR;  /* YIELD */
A68_106  RBHACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * SBHACTR;  /* YIELD */
A68_INT * TBHACTR;  /* YIELD */
A68_124  UBHACTR;  /* clause result */
if ( sigsetjmp( JFFACTR_exitsc.label,1) ) goto KFFACTR_exitsc;
if ( sigsetjmp( LFFACTR_scstart.label,1) ) goto MFFACTR_scstart;
A_PROC_ENTRY(range);
 /* line 6053: */
{ 
NFFACTR_current = (*External);
 /* line 6054: */
(*NL(QYAACTR_globcurrent)) = (&NFFACTR_current);
 /* line 6055: */
OFFACTR_oldidhash = A68_TRUE;
PFFACTR_oldindichash = A68_TRUE;
 /* line 6056: */
 /* line 6057: */
 /* line 6058: */
if ( ((*(&(External->Props)))==(A68_BITS )(-1)) )
{ 
 /* line 6059: */
QFFACTR = ULAACTR_decbit;
} 
else
{ 
QFFACTR = MQAACTR_z;
} 
RFFACTR = (&((&NFFACTR_current)->Props)) ;
(*RFFACTR) = QFFACTR;
 /* line 6060: */
SFFACTR = (&((&NFFACTR_current)->Level)) ;
(*SFFACTR)+=1;
 /* line 6061: */
TFFACTR = (&((&NFFACTR_current)->Labs)) ;
(*TFFACTR) = (A68_69 *)A68_NIL;
 /* line 6062: */
UFFACTR = (&((&NFFACTR_current)->Dybits)) ;
(*UFFACTR) = MQAACTR_z;
 /* line 6064: */
 /* line 6065: */
 /* line 6066: */
 /* line 6067: */
 /* line 6068: */
 /* line 6070: */
 /* line 6071: */
 /* line 6072: */
 /* line 6073: */
 /* line 6074: */
 /* line 6075: */
 /* line 6076: */
 /* line 6077: */
 /* line 6078: */
 /* line 6079: */
PGFACTR = (&((&OGFACTR_scam)->Mode)) ;
(*PGFACTR) = ZKAACTR_faultmode;
 /* line 6080: */
QGFACTR.Props = MQAACTR_z;
QGFACTR.Mode = ZKAACTR_faultmode;
QGFACTR.Vlist = (A68_124 *)A68_NIL;
QGFACTR.Labs = (A68_69 *)A68_NIL;
RGFACTR_v = QGFACTR;
 /* line 6081: */
SGFACTR_rangestind = (*NL(JFBACTR_stind));
TGFACTR_rangebrind = (*NL(VBBACTR_brind));
 /* line 6082: */
 /* line 6083: */
 /* line 6084: */
 /* line 6085: */
 /* line 6086: */
ZGFACTR_heap = A68_FALSE;
 /* line 6087: */
AHFACTR_parlist = (A68_54 *)A68_NIL;
 /* line 6088: */
 /* line 6089: */
 /* line 6090: */
 /* line 6092: */
A_CLOSURE( KHFACTR_scopel, LHFACTR_scopel, MHFACTR_scopel );
(( MHFACTR_scopel * ) ( KHFACTR_scopel.nonlocals )) -> NFFACTR_current = (&NFFACTR_current);
(( MHFACTR_scopel * ) ( KHFACTR_scopel.nonlocals )) -> External = External;
 /* line 6124: */
 /* line 6125: */
 /* line 6126: */
 /* line 6128: */
A_CLOSURE( HIFACTR_recovery, IIFACTR_recovery, JIFACTR_recovery );
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> SYAACTR_modedecdepth = NL(SYAACTR_modedecdepth);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> ITAACTR_supflts = NL(ITAACTR_supflts);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> AIFACTR_inserts = (&AIFACTR_inserts);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> JEBACTR_insertsn = NL(JEBACTR_insertsn);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> BIFACTR_ignorable = (&BIFACTR_ignorable);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> LEBACTR_ignorablen = NL(LEBACTR_ignorablen);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> CIFACTR_nonstarter = (&CIFACTR_nonstarter);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> NEBACTR_nonducstart = NL(NEBACTR_nonducstart);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> PEBACTR_insertsf = NL(PEBACTR_insertsf);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> REBACTR_ignorablef = NL(REBACTR_ignorablef);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> TEBACTR_nonpicstart = NL(TEBACTR_nonpicstart);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> WGBACTR_checkinsert = NL(WGBACTR_checkinsert);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> MFBACTR_t1 = NL(MFBACTR_t1);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> VJBACTR_abort = NL(VJBACTR_abort);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> WDBACTR_recoverdepth = NL(WDBACTR_recoverdepth);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> UIBACTR_faultchars = NL(UIBACTR_faultchars);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> LFDACTR_reader = NL(LFDACTR_reader);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> KFBACTR_crts = NL(KFBACTR_crts);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> LFBACTR_failpos = NL(LFBACTR_failpos);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> ODBACTR_next = NL(ODBACTR_next);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> PSAACTR_ident = NL(PSAACTR_ident);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> XTAACTR_spaces = NL(XTAACTR_spaces);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> HFBACTR_sidstack = NL(HFBACTR_sidstack);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> JFBACTR_stind = NL(JFBACTR_stind);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> FIFACTR_informat1 = (&FIFACTR_informat1);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> XGFACTR_vlist = (&XGFACTR_vlist);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> QDBACTR_look = NL(QDBACTR_look);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> GFFACTR_range = NL(GFFACTR_range);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> NFFACTR_current = (&NFFACTR_current);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> LSAACTR_tind = NL(LSAACTR_tind);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> VGFACTR_formatbrind = (&VGFACTR_formatbrind);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> VBBACTR_brind = NL(VBBACTR_brind);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> UGFACTR_formatstind = (&UGFACTR_formatstind);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> TGFACTR_rangebrind = (&TGFACTR_rangebrind);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> SGFACTR_rangestind = (&SGFACTR_rangestind);
(( JIFACTR_recovery * ) ( HIFACTR_recovery.nonlocals )) -> JFFACTR_exitsc = JFFACTR_exitsc;
 /* line 6289: */
A_CLOSURE( QLFACTR_declarer, RLFACTR_declarer, SLFACTR_declarer );
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> GGFACTR_type = (&GGFACTR_type);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> HGFACTR_descno = (&HGFACTR_descno);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> PFBACTR_analyser = NL(PFBACTR_analyser);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> JBBACTR_oldtind = NL(JBBACTR_oldtind);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> LSAACTR_tind = NL(LSAACTR_tind);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> MFBACTR_t1 = NL(MFBACTR_t1);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> LFDACTR_reader = NL(LFDACTR_reader);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> QJBACTR_fault = NL(QJBACTR_fault);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> HIFACTR_recovery = HIFACTR_recovery;
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> FVBACTR_insertarray = NL(FVBACTR_insertarray);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> PZBACTR_faultp = NL(PZBACTR_faultp);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> LTBACTR_insertstrct = NL(LTBACTR_insertstrct);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> JDBACTR_decmode = NL(JDBACTR_decmode);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> HTAACTR_iv = NL(HTAACTR_iv);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> TWBACTR_insertis = NL(TWBACTR_insertis);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> ZVBACTR_insertvec = NL(ZVBACTR_insertvec);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> PSAACTR_ident = NL(PSAACTR_ident);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> YLCACTR_makeflex = NL(YLCACTR_makeflex);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> LUBACTR_insertprc = NL(LUBACTR_insertprc);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> JGCACTR_deflex = NL(JGCACTR_deflex);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> OSBACTR_insertunion = NL(OSBACTR_insertunion);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> RRBACTR_insertprocp = NL(RRBACTR_insertprocp);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> KUAACTR_modes = NL(KUAACTR_modes);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> ZYAACTR_nolongs = NL(ZYAACTR_nolongs);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> YYAACTR_newmode1 = NL(YYAACTR_newmode1);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> VYAACTR_lastmode = NL(VYAACTR_lastmode);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> VJBACTR_abort = NL(VJBACTR_abort);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> FZAACTR_outlevel = NL(FZAACTR_outlevel);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> GBBACTR_lastidchanged = NL(GBBACTR_lastidchanged);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> Output = NL(Output);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> BZAACTR_nullid = NL(BZAACTR_nullid);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> GZAACTR_maxident = NL(GZAACTR_maxident);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> QYAACTR_globcurrent = NL(QYAACTR_globcurrent);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> SYAACTR_modedecdepth = NL(SYAACTR_modedecdepth);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> LGFACTR_uc1 = (&LGFACTR_uc1);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> NFFACTR_current = (&NFFACTR_current);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> KDBACTR_cindic = NL(KDBACTR_cindic);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> LODACTR_treatam = NL(LODACTR_treatam);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> QDBACTR_look = NL(QDBACTR_look);
(( SLFACTR_declarer * ) ( QLFACTR_declarer.nonlocals )) -> LFFACTR_scstart = LFFACTR_scstart;
 /* line 6715: */
 /* line 6716: */
A_CLOSURE( PQFACTR_lookahead, QQFACTR_lookahead, RQFACTR_lookahead );
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> JFBACTR_stind = NL(JFBACTR_stind);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> BEBACTR_lkmodeins = NL(BEBACTR_lkmodeins);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> PFBACTR_analyser = NL(PFBACTR_analyser);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> JBBACTR_oldtind = NL(JBBACTR_oldtind);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> LSAACTR_tind = NL(LSAACTR_tind);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> MFBACTR_t1 = NL(MFBACTR_t1);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> LFDACTR_reader = NL(LFDACTR_reader);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> AEBACTR_lkinserts = NL(AEBACTR_lkinserts);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> ZDBACTR_lkend = NL(ZDBACTR_lkend);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> PSAACTR_ident = NL(PSAACTR_ident);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> SSAACTR_idsize = NL(SSAACTR_idsize);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> TSAACTR_idhash = NL(TSAACTR_idhash);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> FZAACTR_outlevel = NL(FZAACTR_outlevel);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> QLFACTR_declarer = QLFACTR_declarer;
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> DEBACTR_lkscam = NL(DEBACTR_lkscam);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> CEBACTR_lktype = NL(CEBACTR_lktype);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> GGFACTR_type = (&GGFACTR_type);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> ZYAACTR_nolongs = NL(ZYAACTR_nolongs);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> ODBACTR_next = NL(ODBACTR_next);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> VJBACTR_abort = NL(VJBACTR_abort);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> KFBACTR_crts = NL(KFBACTR_crts);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> HFBACTR_sidstack = NL(HFBACTR_sidstack);
(( RQFACTR_lookahead * ) ( PQFACTR_lookahead.nonlocals )) -> VBBACTR_brind = NL(VBBACTR_brind);
 /* line 6801: */
 /* line 6802: */
A_CLOSURE( BRFACTR_informat, CRFACTR_informat, DRFACTR_informat );
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> NSAACTR_find = NL(NSAACTR_find);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> JSAACTR_globfbuff = NL(JSAACTR_globfbuff);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> IBBACTR_noofstrings = NL(IBBACTR_noofstrings);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> VGFACTR_formatbrind = (&VGFACTR_formatbrind);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> VBBACTR_brind = NL(VBBACTR_brind);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> UGFACTR_formatstind = (&UGFACTR_formatstind);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> JFBACTR_stind = NL(JFBACTR_stind);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> Output = NL(Output);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> FZAACTR_outlevel = NL(FZAACTR_outlevel);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> PFBACTR_analyser = NL(PFBACTR_analyser);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> MFBACTR_t1 = NL(MFBACTR_t1);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> LFDACTR_reader = NL(LFDACTR_reader);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> QJBACTR_fault = NL(QJBACTR_fault);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> HIFACTR_recovery = HIFACTR_recovery;
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> LSAACTR_tind = NL(LSAACTR_tind);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> WGFACTR_formatcaseno = (&WGFACTR_formatcaseno);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> BZAACTR_nullid = NL(BZAACTR_nullid);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> NFFACTR_current = (&NFFACTR_current);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> GBBACTR_lastidchanged = NL(GBBACTR_lastidchanged);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> LGFACTR_uc1 = (&LGFACTR_uc1);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> RYCACTR_strong = NL(RYCACTR_strong);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> OYAACTR_formatunion = NL(OYAACTR_formatunion);
(( DRFACTR_informat * ) ( BRFACTR_informat.nonlocals )) -> VJBACTR_abort = NL(VJBACTR_abort);
 /* line 6961: */
FIFACTR_informat1 = BRFACTR_informat;
 /* line 6965: */
A_CLOSURE( YTFACTR_uc, ZTFACTR_uc, AUFACTR_uc );
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> PFBACTR_analyser = NL(PFBACTR_analyser);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> MFBACTR_t1 = NL(MFBACTR_t1);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> LFDACTR_reader = NL(LFDACTR_reader);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> QJBACTR_fault = NL(QJBACTR_fault);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> HIFACTR_recovery = HIFACTR_recovery;
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> QLFACTR_declarer = QLFACTR_declarer;
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> BRFACTR_informat = BRFACTR_informat;
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> OGFACTR_scam = (&OGFACTR_scam);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> GHFACTR_firstaidec = (&GHFACTR_firstaidec);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> LFFACTR_scstart = LFFACTR_scstart;
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> RYCACTR_strong = NL(RYCACTR_strong);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> NYBACTR_heapvalue = NL(NYBACTR_heapvalue);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> NFFACTR_current = (&NFFACTR_current);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> External = External;
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> GFFACTR_range = NL(GFFACTR_range);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> GGFACTR_type = (&GGFACTR_type);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> EZAACTR_rdmode = NL(EZAACTR_rdmode);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> JGCACTR_deflex = NL(JGCACTR_deflex);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> LSAACTR_tind = NL(LSAACTR_tind);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> ZJBACTR_primread = NL(ZJBACTR_primread);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> FZAACTR_outlevel = NL(FZAACTR_outlevel);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> XJCACTR_pmode = NL(XJCACTR_pmode);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> CXCACTR_hcf = NL(CXCACTR_hcf);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> TBBACTR_brackets = NL(TBBACTR_brackets);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> VBBACTR_brind = NL(VBBACTR_brind);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> KUAACTR_modes = NL(KUAACTR_modes);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> AZAACTR_globccmode = NL(AZAACTR_globccmode);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> PZBACTR_faultp = NL(PZBACTR_faultp);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> GDBACTR_id1 = NL(GDBACTR_id1);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> KTAACTR_idmess = NL(KTAACTR_idmess);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> PDBACTR_bangtype = NL(PDBACTR_bangtype);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> JEFACTR_findid = NL(JEFACTR_findid);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> Output = NL(Output);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> XZAACTR_burestrict = NL(XZAACTR_burestrict);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> WZAACTR_lastkept = NL(WZAACTR_lastkept);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> YMDACTR_testkept = NL(YMDACTR_testkept);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> ZGFACTR_heap = (&ZGFACTR_heap);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> ZICACTR_mproc = NL(ZICACTR_mproc);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> DHFACTR_lab = (&DHFACTR_lab);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> PSAACTR_ident = NL(PSAACTR_ident);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> DZAACTR_labno = NL(DZAACTR_labno);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> VECACTR_marker = NL(VECACTR_marker);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> CTAACTR_str = NL(CTAACTR_str);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> ETAACTR_stringsize = NL(ETAACTR_stringsize);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> ATAACTR_string = NL(ATAACTR_string);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> FTAACTR_noofchars = NL(FTAACTR_noofchars);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> HDBACTR_strsize = NL(HDBACTR_strsize);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> IDBACTR_strbase = NL(IDBACTR_strbase);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> GTAACTR_stringbase = NL(GTAACTR_stringbase);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> TWBACTR_insertis = NL(TWBACTR_insertis);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> DUAACTR_string1 = NL(DUAACTR_string1);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> ZRAACTR_isint = NL(ZRAACTR_isint);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> MDBACTR_cbiop = NL(MDBACTR_cbiop);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> ZYAACTR_nolongs = NL(ZYAACTR_nolongs);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> OSAACTR_compsymb = NL(OSAACTR_compsymb);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> RSAACTR_comphash = NL(RSAACTR_comphash);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> LDBACTR_cinst = NL(LDBACTR_cinst);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> NDBACTR_clibop = NL(NDBACTR_clibop);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> MXCACTR_firmto = NL(MXCACTR_firmto);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> VBDACTR_findbiop = NL(VBDACTR_findbiop);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> MABACTR_libinds = NL(MABACTR_libinds);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> Charset = NL(Charset);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> FFDACTR_bumodule = NL(FFDACTR_bumodule);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> UXBACTR_opproc = NL(UXBACTR_opproc);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> ZFCACTR_assmarker = NL(ZFCACTR_assmarker);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> VCEACTR_assign = NL(VCEACTR_assign);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> OBDACTR_weak = NL(OBDACTR_weak);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> FVBACTR_insertarray = NL(FVBACTR_insertarray);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> OSCACTR_coerce = NL(OSCACTR_coerce);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> ZVBACTR_insertvec = NL(ZVBACTR_insertvec);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> EJCACTR_deref = NL(EJCACTR_deref);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> RYAACTR_enqv = NL(RYAACTR_enqv);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> DEBACTR_lkscam = NL(DEBACTR_lkscam);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> CEBACTR_lktype = NL(CEBACTR_lktype);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> FHFACTR_xcharpos = (&FHFACTR_xcharpos);
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> PQFACTR_lookahead = PQFACTR_lookahead;
(( AUFACTR_uc * ) ( YTFACTR_uc.nonlocals )) -> VJBACTR_abort = NL(VJBACTR_abort);
 /* line 7976: */
LGFACTR_uc1 = YTFACTR_uc;
 /* line 7980: */
MFFACTR_scstart:
 /* line 7982: */
for ( ;; )
{ 
 /* line 7983: */
 /* line 7984: */
 /* line 7990: */
switch ( A_CALLPROC(NL(PFBACTR_analyser),(),((NL(PFBACTR_analyser)).nonlocals)) )
{ 
case 1: 
 /* line 7993: */
(*NL(MFBACTR_t1)) = A_CALLPROC(NL(LFDACTR_reader),((*NL(XDBACTR_nscreader))),((*NL(XDBACTR_nscreader)),(NL(LFDACTR_reader)).nonlocals));
break;
case 2: 
{ 
A_CALLPROC(NL(QJBACTR_fault),(138),(138,(NL(QJBACTR_fault)).nonlocals));
 /* line 7995: */
 /* line 7996: */
 /* line 7999: */
A_CALLPROC(HIFACTR_recovery,(TDBACTR_screader),(TDBACTR_screader,(HIFACTR_recovery).nonlocals));
} 
break;
case 3: 
{ 
switch ( 2 )
{ 
case 1: 
NHGACTR = 1;
break;
default: 
A_IMP_SKIP ;
break;
} 
OHGACTR_i = NHGACTR;
 /* line 8002: */
/*SKIP*/;
} 
break;
case 4: 
 /* line 8005: */
/*SKIP*/;
break;
case 5: 
if ( ((*NL(MFBACTR_t1))==28) )
{ 
 /* line 8008: */
(*NL(MFBACTR_t1)) = 68;
} 
break;
case 6: 
{ 
(*NL(FZAACTR_outlevel)) = 2;
 /* line 8009: */
PHGACTR = (&(NL(HZAACTR_xm)->Name)) ;
(*PHGACTR) = (*NL(PSAACTR_ident));
 /* line 8010: */
 /* line 8011: */
 /* line 8014: */
(*NL(XDBACTR_nscreader)) = TDBACTR_screader;
} 
break;
case 7: 
{ 
(*NL(FZAACTR_outlevel)) = 2;
 /* line 8015: */
QHGACTR = (&(NL(HZAACTR_xm)->Name)) ;
(*QHGACTR) = (*NL(PSAACTR_ident));
 /* line 8016: */
RHGACTR = (&(NL(HZAACTR_xm)->Type)) ;
(*RHGACTR) = (-1);
 /* line 8017: */
(*NL(VBBACTR_brind)) = 2;
 /* line 8018: */
 /* line 8019: */
 /* line 8022: */
(*NL(XZAACTR_burestrict)) = A68_TRUE;
} 
break;
case 8: 
{ 
A_CALLPROC(NL(Givemoduledetails),((*(&((*NL(KZAACTR_close))->Name))), 0, A68_TRUE, &THGACTR),((*(&((*NL(KZAACTR_close))->Name))), 0, A68_TRUE, &THGACTR,(NL(Givemoduledetails)).nonlocals));
SHGACTR_y = THGACTR;
 /* line 8023: */
UHGACTR = (&(NL(HZAACTR_xm)->L)) ;
(*UHGACTR) = (*(&((&((&SHGACTR_y)->Xmi))->L)));
 /* line 8024: */
VHGACTR = (&(NL(HZAACTR_xm)->G)) ;
(*VHGACTR) = (*(&((&((&SHGACTR_y)->Xmi))->G)));
 /* line 8025: */
A_CALLPROC(NL(Output),(A_UNITE(WHGACTR,mode21,21,(*NL(HZAACTR_xm))), 0),(A_UNITE(WHGACTR,mode21,21,(*NL(HZAACTR_xm))), 0,(NL(Output)).nonlocals));
 /* line 8026: */
(*NL(SZAACTR_moduleno)) = A_CALLPROC(NL(HVEACTR_closure),((*NL(KZAACTR_close)), (A68_113 *)A68_NIL),((*NL(KZAACTR_close)), (A68_113 *)A68_NIL,(NL(HVEACTR_closure)).nonlocals));
 /* line 8027: */
XHGACTR.Fn = YNAACTR_xfinish;
XHGACTR.M = 0;
XHGACTR.Props = MQAACTR_z;
XHGACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(YHGACTR,mode17,17,XHGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(YHGACTR,mode17,17,XHGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8028: */
(*NL(FZAACTR_outlevel)) = 1;
 /* line 8029: */
ZHGACTR.Moduleno = (*NL(SZAACTR_moduleno));
ZHGACTR.Type = (*(&(NL(HZAACTR_xm)->Type)));
ZHGACTR.Maxmodule = (*NL(UZAACTR_nextmodule));
A_CALLPROC(NL(Output),(A_UNITE(AIGACTR,mode33,33,ZHGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(AIGACTR,mode33,33,ZHGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8030: */
 /* line 8031: */
 /* line 8034: */
A_CALLPROC(NL(Output),(SKAACTR_down, (*NL(FZAACTR_outlevel))),(SKAACTR_down, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 9: 
{ 
(*NL(FZAACTR_outlevel)) = 3;
 /* line 8035: */
 /* line 8036: */
BIGACTR.Name = (*(&(NL(HZAACTR_xm)->Name)));
 /* line 8037: */
BIGACTR.Maxlevel = ((*(&((&(NL(HZAACTR_xm)->L))->Level)))+(*(&((&(NL(HZAACTR_xm)->G))->Level))));
BIGACTR.Nof = (*(&(NL(HZAACTR_xm)->Type)));
 /* line 8038: */
BIGACTR.Moduleno = (*NL(SZAACTR_moduleno)) = (*NL(UZAACTR_nextmodule))+=1;
 /* line 8039: */
A_CALLPROC(NL(Output),(A_UNITE(CIGACTR,mode23,23,BIGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(CIGACTR,mode23,23,BIGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8040: */
(*NL(HEBACTR_inprogram)) = A68_TRUE;
 /* line 8041: */
 /* line 8043: */
if ( ((*NL(MFBACTR_t1))==24) )
{ 
DIGACTR = (&((&NFFACTR_current)->Lastid)) ;
(*DIGACTR)+=1;
 /* line 8044: */
 /* line 8045: */
EIGACTR.Type = DPAACTR_xdummydec;
FIGACTR.Name = NL(BZAACTR_nullid);
FIGACTR.Decno = (*(&((&NFFACTR_current)->Lastid)));
FIGACTR.Level = 1;
 /* line 8046: */
FIGACTR.Mode = 0;
 /* line 8047: */
FIGACTR.Scope = (*(&((&NFFACTR_current)->Lastid)));
 /* line 8048: */
FIGACTR.Rest = (A68_67 *)A68_NIL;
GIGACTR = A_LOC(A68_67 ) ;
(*GIGACTR) = FIGACTR ;
EIGACTR.Iddec = GIGACTR;
A_CALLPROC(NL(Output),(A_UNITE(HIGACTR,mode12,12,EIGACTR), 4),(A_UNITE(HIGACTR,mode12,12,EIGACTR), 4,(NL(Output)).nonlocals));
 /* line 8049: */
 /* line 8050: */
IIGACTR = (&((&NFFACTR_current)->Props)) ;
(*IIGACTR) = (A68_BITS )(-1);
} 
 /* line 8052: */
JIGACTR = (&((&FHFACTR_xcharpos)->Charpos)) ;
(*JIGACTR) = (*NL(LSAACTR_tind));
 /* line 8053: */
A_CALLPROC(NL(Output),(A_UNITE(KIGACTR,mode15,15,FHFACTR_xcharpos), (*NL(FZAACTR_outlevel))),(A_UNITE(KIGACTR,mode15,15,FHFACTR_xcharpos), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8055: */
A_CALLPROC(YTFACTR_uc,(YKAACTR_voidmode, &LIGACTR),(YKAACTR_voidmode, &LIGACTR,(YTFACTR_uc).nonlocals));
LIGACTR;
 /* line 8056: */
A_CALLPROC(KHFACTR_scopel,((&((&NFFACTR_current)->Labs)), (&(External->Labs))),((&((&NFFACTR_current)->Labs)), (&(External->Labs)),(KHFACTR_scopel).nonlocals));
 /* line 8057: */
MIGACTR.Moduleno = (*NL(SZAACTR_moduleno));
MIGACTR.Nof = (*(&(NL(HZAACTR_xm)->Type)));
A_CALLPROC(NL(Output),(A_UNITE(NIGACTR,mode24,24,MIGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(NIGACTR,mode24,24,MIGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8058: */
OIGACTR.Fn = YNAACTR_xfinish;
OIGACTR.M = 0;
OIGACTR.Props = MQAACTR_z;
OIGACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(PIGACTR,mode17,17,OIGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(PIGACTR,mode17,17,OIGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8059: */
(*NL(FZAACTR_outlevel)) = 1;
 /* line 8060: */
QIGACTR.Norden = ((*NL(CZAACTR_lastrd))-EKAACTR_startrd);
QIGACTR.Nomodes = (*NL(VYAACTR_lastmode));
QIGACTR.Nolabs = (*NL(DZAACTR_labno));
 /* line 8061: */
QIGACTR.Nodecnos = (*NL(GZAACTR_maxident));
QIGACTR.Nomodules = (*NL(UZAACTR_nextmodule));
 /* line 8062: */
QIGACTR.Nolibinds = ((*NL(VZAACTR_nextlibno))-FKAACTR_startlib);
A_CALLPROC(NL(Output),(A_UNITE(RIGACTR,mode18,18,QIGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(RIGACTR,mode18,18,QIGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8063: */
UIGACTR = A_VTRIM(SIGACTR,(NL(KUAACTR_modes)),A_VTSCRIPT(&(SIGACTR.upb),(NL(KUAACTR_modes)).upb,1,(*NL(VYAACTR_lastmode)))) ;
A_CALLPROC(NL(Output),(A_UNITE(TIGACTR,mode19,19,UIGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(TIGACTR,mode19,19,UIGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8064: */
VIGACTR.Moduleno = (*NL(SZAACTR_moduleno));
VIGACTR.Type = (*(&(NL(HZAACTR_xm)->Type)));
A_CALLPROC(NL(Output),(A_UNITE(WIGACTR,mode31,31,VIGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(WIGACTR,mode31,31,VIGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8065: */
A_CALLPROC(NL(Output),(SKAACTR_down, (*NL(FZAACTR_outlevel))),(SKAACTR_down, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8066: */
 /* line 8067: */
 /* line 8070: */
A_CALLPROC(NL(Output),(SKAACTR_down, 2),(SKAACTR_down, 2,(NL(Output)).nonlocals));
} 
break;
case 10: 
{ 
(*NL(JZAACTR_tempprl)) = (*NL(IZAACTR_prl));
 /* line 8071: */
for ( ;; )
{ 
XIGACTR = ((*NL(JZAACTR_tempprl))!=GQAACTR_nilprl);
if ( XIGACTR )
{ /* line 8072: */
ZIGACTR = (*(&((*NL(JZAACTR_tempprl))->Name))) ;
XIGACTR = A_VC_NE(A_HISVEC(YIGACTR,ZIGACTR,32,A68_CHAR ),A_HISVEC(AJGACTR,(*NL(PSAACTR_ident)),32,A68_CHAR ));
}
if ( !(XIGACTR) ) break;
(*NL(JZAACTR_tempprl)) = (*(&((*NL(JZAACTR_tempprl))->Rest)));
}
 /* line 8073: */
 /* line 8074: */
if ( ((*NL(JZAACTR_tempprl))==GQAACTR_nilprl) )
{ 
BJGACTR.Name = (*NL(PSAACTR_ident));
CJGACTR = (&(NL(HZAACTR_xm)->Type)) ;
BJGACTR.No = (*CJGACTR)+=1;
 /* line 8075: */
BJGACTR.Rest = (*NL(IZAACTR_prl));
DJGACTR = A_HEAP(A68_114 ) ;
(*DJGACTR) = BJGACTR ;
(*NL(IZAACTR_prl)) = DJGACTR;
} 
else
{ 
 /* line 8077: */
 /* line 8078: */
 /* line 8081: */
A_CALLPROC(NL(PZBACTR_faultp),(197, 0, 0, NL(PSAACTR_ident)),(197, 0, 0, NL(PSAACTR_ident),(NL(PZBACTR_faultp)).nonlocals));
} 
} 
break;
case 11: 
{ 
A_CLOSURE( FJGACTR_generator, GJGACTR_generator, HJGACTR_generator );
(( HJGACTR_generator * ) ( FJGACTR_generator.nonlocals )) -> NYEACTR_makekeepinfo = NL(NYEACTR_makekeepinfo);
(( HJGACTR_generator * ) ( FJGACTR_generator.nonlocals )) -> LZAACTR_kl = NL(LZAACTR_kl);
A_CALLPROC(FJGACTR_generator,(A68_TRUE, &OJGACTR),(A68_TRUE, &OJGACTR,(FJGACTR_generator).nonlocals));
NJGACTR_kspec = OJGACTR;
 /* line 8082: */
A_CLOSURE( QJGACTR_generator, RJGACTR_generator, SJGACTR_generator );
(( SJGACTR_generator * ) ( QJGACTR_generator.nonlocals )) -> QSAACTR_compsize = NL(QSAACTR_compsize);
A_CALLPROC(QJGACTR_generator,(A68_TRUE, &WJGACTR),(A68_TRUE, &WJGACTR,(QJGACTR_generator).nonlocals));
VJGACTR_decnos = WJGACTR;
A_CALLPROC(QJGACTR_generator,(A68_TRUE, &YJGACTR),(A68_TRUE, &YJGACTR,(QJGACTR_generator).nonlocals));
XJGACTR_modenos = YJGACTR;
 /* line 8083: */
A_CALLPROC(NL(NYEACTR_makekeepinfo),((*NL(LZAACTR_kl)), A68_TRUE, NJGACTR_kspec, VJGACTR_decnos, XJGACTR_modenos),((*NL(LZAACTR_kl)), A68_TRUE, NJGACTR_kspec, VJGACTR_decnos, XJGACTR_modenos,(NL(NYEACTR_makekeepinfo)).nonlocals));
 /* line 8084: */
A_CALLPROC(NL(Output),(A_UNITE(ZJGACTR,mode30,30,VJGACTR_decnos), (*NL(FZAACTR_outlevel))),(A_UNITE(ZJGACTR,mode30,30,VJGACTR_decnos), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8085: */
AKGACTR.Fn = YNAACTR_xfinish;
AKGACTR.M = 0;
AKGACTR.Props = MQAACTR_z;
AKGACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(BKGACTR,mode17,17,AKGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(BKGACTR,mode17,17,AKGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8086: */
(*NL(FZAACTR_outlevel)) = 1;
 /* line 8087: */
 /* line 8088: */
if ( ((*(&((&NFFACTR_current)->Lastid)))>(*NL(GZAACTR_maxident))) )
{ 
 /* line 8089: */
(*NL(GZAACTR_maxident)) = (*(&((&NFFACTR_current)->Lastid)));
} 
 /* line 8090: */
CKGACTR.Norden = ((*NL(CZAACTR_lastrd))-EKAACTR_startrd);
CKGACTR.Nomodes = (*NL(VYAACTR_lastmode));
CKGACTR.Nolabs = (*NL(DZAACTR_labno));
 /* line 8091: */
CKGACTR.Nodecnos = (*NL(GZAACTR_maxident));
CKGACTR.Nomodules = (*NL(UZAACTR_nextmodule));
 /* line 8092: */
CKGACTR.Nolibinds = ((*NL(VZAACTR_nextlibno))-FKAACTR_startlib);
A_CALLPROC(NL(Output),(A_UNITE(DKGACTR,mode18,18,CKGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(DKGACTR,mode18,18,CKGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8093: */
GKGACTR = A_VTRIM(EKGACTR,(NL(KUAACTR_modes)),A_VTSCRIPT(&(EKGACTR.upb),(NL(KUAACTR_modes)).upb,1,(*NL(VYAACTR_lastmode)))) ;
A_CALLPROC(NL(Output),(A_UNITE(FKGACTR,mode19,19,GKGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(FKGACTR,mode19,19,GKGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8094: */
HKGACTR.Decnos = VJGACTR_decnos;
HKGACTR.Modes = XJGACTR_modenos;
A_CALLPROC(NL(Output),(A_UNITE(IKGACTR,mode32,32,HKGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(IKGACTR,mode32,32,HKGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8095: */
A_CALLPROC(NL(Output),(SKAACTR_down, (*NL(FZAACTR_outlevel))),(SKAACTR_down, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8096: */
A_CALLPROC(NL(Output),(SKAACTR_down, 2),(SKAACTR_down, 2,(NL(Output)).nonlocals));
 /* line 8097: */
JKGACTR.F = (*(&(NL(HZAACTR_xm)->Name)));
JKGACTR.No = 0;
 /* line 8098: */
JKGACTR.Nl = (*(&((&(NL(HZAACTR_xm)->L))->Level)));
 /* line 8099: */
JKGACTR.Ng = (*(&((&(NL(HZAACTR_xm)->G))->Level)));
JKGACTR.U = A_UNITE(KKGACTR,mode1,1,NJGACTR_kspec);
A_CALLPROC(NL(Output),(A_UNITE(LKGACTR,mode22,22,JKGACTR), 0),(A_UNITE(LKGACTR,mode22,22,JKGACTR), 0,(NL(Output)).nonlocals));
 /* line 8100: */
 /* line 8101: */
 /* line 8104: */
MKGACTR = (&(NL(BVAACTR_globinfo)->Labs)) ;
(*MKGACTR) = (*(&((&NFFACTR_current)->Labs)));
} 
break;
case 12: 
{ 
(*NL(WZAACTR_lastkept)) = (*(&((&NFFACTR_current)->Lastid)));
 /* line 8105: */
(*NL(FZAACTR_outlevel)) = 3;
 /* line 8106: */
 /* line 8107: */
 /* line 8110: */
(*NL(XDBACTR_nscreader)) = TDBACTR_screader;
} 
break;
case 13: 
 /* line 8113: */
NKGACTR = (&((&(NL(HZAACTR_xm)->L))->F)) ;
(*NKGACTR) = (*NL(PSAACTR_ident));
break;
case 14: 
{ 
OKGACTR = (&((&(NL(HZAACTR_xm)->L))->N)) ;
(*OKGACTR) = (*NL(PSAACTR_ident));
 /* line 8114: */
 /* line 8115: */
 /* line 8118: */
PKGACTR = (&((&(NL(HZAACTR_xm)->L))->Level)) ;
(*PKGACTR) = 1;
} 
break;
case 15: 
QKGACTR.N = NL(XTAACTR_spaces);
QKGACTR.F = NL(XTAACTR_spaces);
QKGACTR.Level = 0;
 /* line 8121: */
RKGACTR = (&(NL(HZAACTR_xm)->L)) ;
SKGACTR = (&(NL(HZAACTR_xm)->G)) ;
(*SKGACTR) = (*RKGACTR) = QKGACTR;
break;
case 16: 
TKGACTR.N = A_CALLPROC(NL(KTAACTR_idmess),(58),(58,(NL(KTAACTR_idmess)).nonlocals));
TKGACTR.F = A_CALLPROC(NL(KTAACTR_idmess),(57),(57,(NL(KTAACTR_idmess)).nonlocals));
TKGACTR.Level = 1;
 /* line 8124: */
UKGACTR = (&(NL(HZAACTR_xm)->L)) ;
(*UKGACTR) = TKGACTR;
break;
case 17: 
{ 
 /* line 8125: */
if ( ((*(&((&(NL(HZAACTR_xm)->L))->Level)))!=0) )
{ 
A_CALLPROC(NL(Givemoduledetails),((*(&((&(NL(HZAACTR_xm)->L))->N))), 0, A68_FALSE, &WKGACTR),((*(&((&(NL(HZAACTR_xm)->L))->N))), 0, A68_FALSE, &WKGACTR,(NL(Givemoduledetails)).nonlocals));
VKGACTR_yml = WKGACTR;
 /* line 8126: */
 /* line 8127: */
YKGACTR_xml = (&((&VKGACTR_yml)->Xmi));
 /* line 8128: */
 /* line 8129: */
if ( ((*(&(YKGACTR_xml->Type)))>=0) )
{ 
 /* line 8130: */
 /* line 8131: */
if ( ((*(&((&(YKGACTR_xml->G))->Level)))!=0) )
{ 
 /* line 8132: */
ZKGACTR = (*(&(YKGACTR_xml->G)));
} 
else
{ 
ZKGACTR = (*(&(YKGACTR_xml->L)));
} 
ALGACTR = (&(NL(HZAACTR_xm)->G)) ;
(*ALGACTR) = ZKGACTR;
 /* line 8133: */
 /* line 8134: */
if ( ((*(&((&(NL(HZAACTR_xm)->G))->Level)))!=0) )
{ 
 /* line 8135: */
 /* line 8136: */
A_CALLPROC(NL(Givemoduledetails),((*(&((&(NL(HZAACTR_xm)->G))->N))), 0, A68_FALSE, &BLGACTR),((*(&((&(NL(HZAACTR_xm)->G))->N))), 0, A68_FALSE, &BLGACTR,(NL(Givemoduledetails)).nonlocals));
XKGACTR_ymg = BLGACTR;
 /* line 8137: */
 /* line 8138: */
 /* line 8139: */
 /* line 8140: */
A_CALLPROC(NL(WTEACTR_treatspec),((&((&(NL(HZAACTR_xm)->G))->N)), (&((&(NL(HZAACTR_xm)->G))->F)), (*(&((&XKGACTR_ymg)->Ym)))),((&((&(NL(HZAACTR_xm)->G))->N)), (&((&(NL(HZAACTR_xm)->G))->F)), (*(&((&XKGACTR_ymg)->Ym))),(NL(WTEACTR_treatspec)).nonlocals));
} 
 /* line 8141: */
A_CALLPROC(NL(WTEACTR_treatspec),((&((&(NL(HZAACTR_xm)->L))->N)), (&((&(NL(HZAACTR_xm)->L))->F)), (*(&((&VKGACTR_yml)->Ym)))),((&((&(NL(HZAACTR_xm)->L))->N)), (&((&(NL(HZAACTR_xm)->L))->F)), (*(&((&VKGACTR_yml)->Ym))),(NL(WTEACTR_treatspec)).nonlocals));
 /* line 8142: */
 /* line 8143: */
 /* line 8144: */
CLGACTR = (&((&(NL(HZAACTR_xm)->L))->Level)) ;
(*CLGACTR) = ((*NL(TZAACTR_modulelevel))-(*(&((&(NL(HZAACTR_xm)->G))->Level))));
} 
else
{ 
 /* line 8145: */
 /* line 8146: */
if ( ((*(&(YKGACTR_xml->Type)))==(-1)) )
{ 
 /* line 8147: */
DLGACTR = 199;
} 
else
{ 
DLGACTR = 160;
} 
 /* line 8148: */
 /* line 8149: */
A_CALLPROC(NL(PZBACTR_faultp),(DLGACTR, 0, 0, (&((&(NL(HZAACTR_xm)->L))->N))),(DLGACTR, 0, 0, (&((&(NL(HZAACTR_xm)->L))->N)),(NL(PZBACTR_faultp)).nonlocals));
} 
} 
 /* line 8150: */
 /* line 8151: */
 /* line 8154: */
A_CALLPROC(NL(Output),(A_UNITE(ELGACTR,mode21,21,(*NL(HZAACTR_xm))), 0),(A_UNITE(ELGACTR,mode21,21,(*NL(HZAACTR_xm))), 0,(NL(Output)).nonlocals));
} 
break;
case 18: 
 /* line 8157: */
A_CALLPROC((*NL(FFDACTR_bumodule)),(NL(PSAACTR_ident), 0),(NL(PSAACTR_ident), 0,((*NL(FFDACTR_bumodule))).nonlocals));
break;
case 19: 
if ( ((*NL(MFBACTR_t1))==32) )
{ 
 /* line 8161: */
(*NL(MFBACTR_t1)) = 85;
} 
break;
case 20: 
{ 
(*NL(QZAACTR_testsubst)) = (*NL(NZAACTR_substack));
 /* line 8162: */
(*NL(RZAACTR_substlevel))+=1;
 /* line 8163: */
for ( ;; )
{ 
 /* line 8164: */
FLGACTR = ((*NL(QZAACTR_testsubst))!=HQAACTR_nilsubl);
if ( FLGACTR )
{ /* line 8165: */
HLGACTR = (*(&((*NL(QZAACTR_testsubst))->Proxy))) ;
JLGACTR = A_VC_NE(A_HISVEC(GLGACTR,HLGACTR,32,A68_CHAR ),A_HISVEC(ILGACTR,(*NL(PSAACTR_ident)),32,A68_CHAR ));
if ( ! JLGACTR )
{ /* line 8166: */
JLGACTR = ((*(&((*NL(QZAACTR_testsubst))->Level)))!=(*NL(RZAACTR_substlevel)));
}
 /* line 8167: */
FLGACTR = JLGACTR;
}
if ( !(FLGACTR) ) break;
(*NL(QZAACTR_testsubst)) = (*(&((*NL(QZAACTR_testsubst))->Rest)));
}
 /* line 8169: */
 /* line 8170: */
if ( ((*NL(QZAACTR_testsubst))!=HQAACTR_nilsubl) )
{ 
 /* line 8172: */
A_CALLPROC(NL(PZBACTR_faultp),(198, 0, 0, NL(PSAACTR_ident)),(198, 0, 0, NL(PSAACTR_ident),(NL(PZBACTR_faultp)).nonlocals));
} 
 /* line 8173: */
KLGACTR.Proxy = (*NL(PSAACTR_ident));
KLGACTR.Level = (*NL(RZAACTR_substlevel));
KLGACTR.A = A_UNITE(LLGACTR,mode1,1,(*NL(KZAACTR_close)));
 /* line 8174: */
KLGACTR.Rest = (*NL(NZAACTR_substack));
 /* line 8177: */
MLGACTR = A_HEAP(A68_116 ) ;
(*MLGACTR) = KLGACTR ;
(*NL(NZAACTR_substack)) = MLGACTR;
} 
break;
case 21: 
{ 
NLGACTR.Name = (*NL(PSAACTR_ident));
NLGACTR.S = (A68_116 *)A68_NIL;
OLGACTR = A_HEAP(A68_118 ) ;
(*OLGACTR) = NLGACTR ;
QLGACTR = (&((*NL(NZAACTR_substack))->A)) ;
(*QLGACTR) = A_UNITE(PLGACTR,mode1,1,OLGACTR);
 /* line 8178: */
 /* line 8179: */
 /* line 8182: */
(*NL(RZAACTR_substlevel))-=1;
} 
break;
case 22: 
{ 
SLGACTR = (&((*NL(NZAACTR_substack))->A)) ;
(*SLGACTR) = A_UNITE(RLGACTR,mode1,1,(*NL(KZAACTR_close)));
 /* line 8183: */
 /* line 8184: */
 /* line 8187: */
(*NL(RZAACTR_substlevel))-=2;
} 
break;
case 23: 
{ 
ULGACTR = A_CALLPROC(NL(RJEACTR_findproxy),(NL(PSAACTR_ident)),(NL(PSAACTR_ident),(NL(RJEACTR_findproxy)).nonlocals)) ;
VLGACTR = (&((*NL(NZAACTR_substack))->A)) ;
(*VLGACTR) = A_UNITE(TLGACTR,mode2,2,ULGACTR);
 /* line 8188: */
 /* line 8189: */
 /* line 8192: */
(*NL(RZAACTR_substlevel))-=1;
} 
break;
case 24: 
{ 
(*NL(PZAACTR_tsubst)) = (*NL(NZAACTR_substack));
 /* line 8193: */
(*NL(NZAACTR_substack)) = (*(&((*NL(NZAACTR_substack))->Rest)));
 /* line 8194: */
WLGACTR = (&((*NL(PZAACTR_tsubst))->Rest)) ;
(*WLGACTR) = (*NL(OZAACTR_sublist));
 /* line 8195: */
 /* line 8196: */
 /* line 8199: */
(*NL(OZAACTR_sublist)) = (*NL(PZAACTR_tsubst));
} 
break;
case 25: 
 /* line 8202: */
(*NL(OZAACTR_sublist)) = (A68_116 *)A68_NIL;
break;
case 26: 
{ 
XLGACTR.Name = (*(&((*NL(NZAACTR_substack))->Proxy)));
XLGACTR.S = (*NL(OZAACTR_sublist));
YLGACTR = A_HEAP(A68_118 ) ;
(*YLGACTR) = XLGACTR ;
(*NL(KZAACTR_close)) = YLGACTR;
 /* line 8203: */
 /* line 8204: */
 /* line 8207: */
(*NL(NZAACTR_substack)) = (*(&((*NL(NZAACTR_substack))->Rest)));
} 
break;
case 27: 
{ 
AMGACTR = IGFACTR_id = A_CALLPROC(NL(JEFACTR_findid),(),((NL(JEFACTR_findid)).nonlocals)) ;
A_CALLPROC(NL(XCFACTR_addtokl),(A_UNITE(ZLGACTR,mode1,1,AMGACTR)),(A_UNITE(ZLGACTR,mode1,1,AMGACTR),(NL(XCFACTR_addtokl)).nonlocals));
 /* line 8208: */
 /* line 8209: */
 /* line 8212: */
RNDACTR_adjscope((*(&((&NFFACTR_current)->Rd))), (*(&(IGFACTR_id->Level))), (*(&(IGFACTR_id->Scope))));
} 
break;
case 28: 
 /* line 8215: */
A_CALLPROC(NL(XCFACTR_addtokl),(A_UNITE(BMGACTR,mode2,2,(*NL(KDBACTR_cindic)))),(A_UNITE(BMGACTR,mode2,2,(*NL(KDBACTR_cindic))),(NL(XCFACTR_addtokl)).nonlocals));
break;
case 29: 
{ 
JGFACTR_indic = (*NL(KDBACTR_cindic));
 /* line 8216: */
 /* line 8217: */
if ( (JGFACTR_indic==SQAACTR_nilind) )
{ 
 /* line 8219: */
A_CALLPROC(NL(QJBACTR_fault),(196),(196,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 8220: */
KGFACTR_inst1 = (*NL(LDBACTR_cinst));
 /* line 8221: */
DGFACTR_j = A_CALLPROC(QLFACTR_declarer,(A68_FALSE, (&OGFACTR_scam)),(A68_FALSE, (&OGFACTR_scam),(QLFACTR_declarer).nonlocals));
 /* line 8222: */
 /* line 8223: */
 /* line 8226: */
CGFACTR_i = 0;
} 
break;
case 30: 
{ 
for ( ;; )
{ 
 /* line 8227: */
CMGACTR = (KGFACTR_inst1!=VQAACTR_nilinst);
if ( CMGACTR )
{DMGACTR = (CGFACTR_i!=(*(&(KGFACTR_inst1->Lmode))));
if ( ! DMGACTR )
{DMGACTR = (DGFACTR_j!=(*(&(KGFACTR_inst1->Rmode))));
}
 /* line 8228: */
CMGACTR = DMGACTR;
}
if ( !(CMGACTR) ) break;
KGFACTR_inst1 = (*(&(KGFACTR_inst1->Rest)));
}
 /* line 8229: */
 /* line 8230: */
if ( (KGFACTR_inst1==VQAACTR_nilinst) )
{ 
 /* line 8231: */
if ( (JGFACTR_indic!=SQAACTR_nilind) )
{ 
 /* line 8233: */
 /* line 8234: */
(*NL(OSAACTR_compsymb)) = (*(&(JGFACTR_indic->Name))) ;
A_CALLPROC(NL(PZBACTR_faultp),(161, 0, 0, NL(OSAACTR_compsymb)),(161, 0, 0, NL(OSAACTR_compsymb),(NL(PZBACTR_faultp)).nonlocals));
} 
} 
else
{ 
RNDACTR_adjscope((*(&((&NFFACTR_current)->Rd))), (*(&(KGFACTR_inst1->Level))), (*(&(KGFACTR_inst1->Scope))));
 /* line 8235: */
EMGACTR.N = JGFACTR_indic;
EMGACTR.I = KGFACTR_inst1;
 /* line 8236: */
 /* line 8237: */
 /* line 8240: */
A_CALLPROC(NL(XCFACTR_addtokl),(A_UNITE(FMGACTR,mode3,3,EMGACTR)),(A_UNITE(FMGACTR,mode3,3,EMGACTR),(NL(XCFACTR_addtokl)).nonlocals));
} 
} 
break;
case 31: 
{ 
CGFACTR_i = DGFACTR_j;
 /* line 8241: */
 /* line 8242: */
 /* line 8245: */
DGFACTR_j = A_CALLPROC(QLFACTR_declarer,(A68_FALSE, (&OGFACTR_scam)),(A68_FALSE, (&OGFACTR_scam),(QLFACTR_declarer).nonlocals));
} 
break;
case 32: 
{ 
(*NL(LZAACTR_kl)) = (A68_121 *)A68_NIL ;
(*NL(MZAACTR_rkl)) = NL(LZAACTR_kl);
 /* line 8246: */
 /* line 8247: */
if ( ((*(&((&NFFACTR_current)->Rd)))!=(A68_68 *)A68_NIL) )
{ 
 /* line 8248: */
 /* line 8249: */
GMGACTR = (&((*(&((&NFFACTR_current)->Rd)))->Props)) ;
(*GMGACTR) = (A68_BITS )((*(&((*(&((&NFFACTR_current)->Rd)))->Props)))|OLAACTR_holebit);
} 
 /* line 8250: */
HMGACTR.Proxy = (*NL(PSAACTR_ident));
HMGACTR.Level = (*NL(RZAACTR_substlevel));
HMGACTR.A = A_UNITE(IMGACTR,mode1,1,(*NL(KZAACTR_close)));
 /* line 8251: */
HMGACTR.Rest = (A68_116 *)A68_NIL;
 /* line 8254: */
JMGACTR = A_HEAP(A68_116 ) ;
(*JMGACTR) = HMGACTR ;
(*NL(NZAACTR_substack)) = JMGACTR;
} 
break;
case 33: 
{ 
A_CLOSURE( LMGACTR_generator, MMGACTR_generator, NMGACTR_generator );
(( NMGACTR_generator * ) ( LMGACTR_generator.nonlocals )) -> NYEACTR_makekeepinfo = NL(NYEACTR_makekeepinfo);
(( NMGACTR_generator * ) ( LMGACTR_generator.nonlocals )) -> LZAACTR_kl = NL(LZAACTR_kl);
A_CALLPROC(LMGACTR_generator,(A68_TRUE, &UMGACTR),(A68_TRUE, &UMGACTR,(LMGACTR_generator).nonlocals));
TMGACTR_kspec = UMGACTR;
 /* line 8255: */
A_CLOSURE( WMGACTR_generator, XMGACTR_generator, YMGACTR_generator );
(( YMGACTR_generator * ) ( WMGACTR_generator.nonlocals )) -> QSAACTR_compsize = NL(QSAACTR_compsize);
A_CALLPROC(WMGACTR_generator,(A68_TRUE, &CNGACTR),(A68_TRUE, &CNGACTR,(WMGACTR_generator).nonlocals));
BNGACTR_decnos = CNGACTR;
A_CALLPROC(WMGACTR_generator,(A68_TRUE, &ENGACTR),(A68_TRUE, &ENGACTR,(WMGACTR_generator).nonlocals));
DNGACTR_modes = ENGACTR;
 /* line 8256: */
FNGACTR_p = A_CALLPROC(NL(RJEACTR_findproxy),((&((*NL(NZAACTR_substack))->Proxy))),((&((*NL(NZAACTR_substack))->Proxy)),(NL(RJEACTR_findproxy)).nonlocals));
 /* line 8257: */
(*NL(NZAACTR_substack)) = (*(&((*NL(NZAACTR_substack))->Rest)));
 /* line 8258: */
A_CALLPROC(NL(NYEACTR_makekeepinfo),((*NL(LZAACTR_kl)), A68_TRUE, TMGACTR_kspec, BNGACTR_decnos, DNGACTR_modes),((*NL(LZAACTR_kl)), A68_TRUE, TMGACTR_kspec, BNGACTR_decnos, DNGACTR_modes,(NL(NYEACTR_makekeepinfo)).nonlocals));
 /* line 8259: */
GNGACTR.I = 1;
 /* line 8260: */
 /* line 8261: */
if ( ((*(&((&(NL(HZAACTR_xm)->G))->Level)))==0) )
{ 
 /* line 8262: */
GNGACTR.J = (*(&((&(NL(HZAACTR_xm)->L))->Level)));
} 
else
{ 
GNGACTR.J = (*(&((&(NL(HZAACTR_xm)->G))->Level)));
} 
GNGACTR.K = 0;
HNGACTR_kset = GNGACTR;
 /* line 8263: */
INGACTR.F = (*(&(FNGACTR_p->Name)));
INGACTR.No = (*(&(FNGACTR_p->No)));
INGACTR.Nl = 1;
INGACTR.Ng = (*(&((&HNGACTR_kset)->J)));
INGACTR.U = A_UNITE(JNGACTR,mode1,1,TMGACTR_kspec);
A_CALLPROC(NL(Output),(A_UNITE(KNGACTR,mode22,22,INGACTR), 0),(A_UNITE(KNGACTR,mode22,22,INGACTR), 0,(NL(Output)).nonlocals));
 /* line 8264: */
LNGACTR.Body.I = (*(&(FNGACTR_p->No)));
LNGACTR.Body.J = 0;
LNGACTR.Kset = A_VEC(MNGACTR,(&HNGACTR_kset),A68_71 *);
LNGACTR.Keeps = BNGACTR_decnos;
LNGACTR.Last = 0;
A_CALLPROC(NL(Output),(A_UNITE(NNGACTR,mode27,27,LNGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(NNGACTR,mode27,27,LNGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8265: */
ONGACTR.Props = MQAACTR_z;
ONGACTR.Mode = YKAACTR_voidmode;
ONGACTR.Vlist = (A68_124 *)A68_NIL;
 /* line 8266: */
ONGACTR.Labs = (A68_69 *)A68_NIL;
 /* line 8270: */
RGFACTR_v = ONGACTR;
} 
break;
case 34: 
{ 
 /* line 8271: */
if ( PFFACTR_oldindichash )
{ 
A_CLOSURE( UNGACTR_generator, VNGACTR_generator, WNGACTR_generator );
 /* line 8272: */
A_CALLPROC(UNGACTR_generator,(A68_TRUE, &ZNGACTR),(A68_TRUE, &ZNGACTR,(UNGACTR_generator).nonlocals));
AOGACTR = (*(&((&NFFACTR_current)->Indics))) ;
A_VASSIGN2(AOGACTR,ZNGACTR,A68_110 *) ;
BOGACTR = (&((&NFFACTR_current)->Indics)) ;
(*BOGACTR) = ZNGACTR;
 /* line 8273: */
 /* line 8274: */
PFFACTR_oldindichash = A68_FALSE;
} 
 /* line 8275: */
COGACTR = ((*NL(BUAACTR_typechar1))!=3);
if ( COGACTR )
{ /* line 8276: */
COGACTR = ((*NL(BUAACTR_typechar1))!=6);
}
if ( COGACTR )
{ 
A_CALLPROC(NL(PZBACTR_faultp),(154, 0, 0, NL(OSAACTR_compsymb)),(154, 0, 0, NL(OSAACTR_compsymb),(NL(PZBACTR_faultp)).nonlocals));
 /* line 8278: */
 /* line 8279: */
goto QNGACTR_l;
} 
 /* line 8280: */
DOGACTR = (*(&((&NFFACTR_current)->Indics))) ;
JGFACTR_indic = (*(&A_VINDEX(DOGACTR,(*NL(RSAACTR_comphash)))));
 /* line 8281: */
for ( ;; )
{ 
 /* line 8282: */
EOGACTR = (JGFACTR_indic!=SQAACTR_nilind);
if ( EOGACTR )
{ /* line 8283: */
EOGACTR = ((*(&(JGFACTR_indic->Level)))==(*(&((&NFFACTR_current)->Level))));
}
if ( !(EOGACTR) ) break;
 /* line 8284: */
GOGACTR = (*(&(JGFACTR_indic->Name))) ;
if ( A_VC_EQ(A_HISVEC(FOGACTR,GOGACTR,32,A68_CHAR ),A_HISVEC(HOGACTR,(*NL(OSAACTR_compsymb)),32,A68_CHAR )) )
{ 
 /* line 8285: */
IOGACTR = (*(&(JGFACTR_indic->U))) ;
switch ( IOGACTR.mode )
{ 
case 2: /* REF STRUCT(INT,INT,REF MODE53)  */
JOGACTR_a = (IOGACTR.data.mode2);
 /* line 8286: */
 /* line 8287: */
if ( ((*(&(JOGACTR_a->Modeproc)))==2) )
{ 
BGFACTR_am = JOGACTR_a;
 /* line 8288: */
 /* line 8289: */
 /* line 8290: */
 /* line 8291: */
goto SNGACTR_out;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 8292: */
 /* line 8294: */
A_CALLPROC(NL(PZBACTR_faultp),(162, 0, 0, NL(OSAACTR_compsymb)),(162, 0, 0, NL(OSAACTR_compsymb),(NL(PZBACTR_faultp)).nonlocals));
} 
 /* line 8295: */
 /* line 8296: */
JGFACTR_indic = (*(&(JGFACTR_indic->Rest)));
}
 /* line 8297: */
QNGACTR_l:
 /* line 8298: */
KOGACTR.Mode = (*NL(VYAACTR_lastmode))+=1;
KOGACTR.Modeproc = 2;
KOGACTR.El = (A68_53 *)A68_NIL;
LOGACTR = A_HEAP(A68_52 ) ;
(*LOGACTR) = KOGACTR ;
BGFACTR_am = LOGACTR;
 /* line 8299: */
 /* line 8300: */
MOGACTR.Name = (*NL(OSAACTR_compsymb));
 /* line 8301: */
MOGACTR.Level = (*(&((&NFFACTR_current)->Level)));
MOGACTR.Scope = (*(&((&NFFACTR_current)->Lastid)));
 /* line 8302: */
MOGACTR.U = A_UNITE(NOGACTR,mode2,2,BGFACTR_am);
 /* line 8303: */
OOGACTR = (*(&((&NFFACTR_current)->Indics))) ;
MOGACTR.Rest = (*(&A_VINDEX(OOGACTR,(*NL(RSAACTR_comphash)))));
POGACTR = (*(&((&NFFACTR_current)->Indics))) ;
QOGACTR = A_LOC(A68_110 ) ;
(*QOGACTR) = MOGACTR ;
ROGACTR = (&A_VINDEX(POGACTR,(*NL(RSAACTR_comphash)))) ;
JGFACTR_indic = (*ROGACTR) = QOGACTR;
 /* line 8304: */
TOGACTR = (&A_VINDEX(NL(KUAACTR_modes),(*NL(VYAACTR_lastmode)))) ;
(*TOGACTR) = A_UNITE(SOGACTR,mode10,10,BGFACTR_am);
 /* line 8305: */
SNGACTR_out:
 /* line 8306: */
 /* line 8309: */
(*NL(QDBACTR_look)) = 2;
} 
break;
case 35: 
{ 
CGFACTR_i = (*(&(BGFACTR_am->Mode)));
 /* line 8310: */
(*NL(RZAACTR_substlevel)) = ((*NL(VYAACTR_lastmode))-CGFACTR_i);
 /* line 8311: */
UOGACTR.Am = BGFACTR_am;
UOGACTR.Rest = (*NL(TYAACTR_untreated));
VOGACTR = A_HEAP(A68_53 ) ;
(*VOGACTR) = UOGACTR ;
(*NL(TYAACTR_untreated)) = VOGACTR;
 /* line 8312: */
DGFACTR_j = A_CALLPROC(QLFACTR_declarer,(A68_TRUE, BGFACTR_am),(A68_TRUE, BGFACTR_am,(QLFACTR_declarer).nonlocals));
 /* line 8313: */
 /* line 8314: */
if ( (GGFACTR_type==1) )
{ 
 /* line 8316: */
A_CALLPROC(NL(QJBACTR_fault),(163),(163,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 8317: */
 /* line 8318: */
if ( ((A68_BITS )((A68_BITS )(CGFACTR_i-DGFACTR_j)&LQAACTR_decsmask)==MQAACTR_z) )
{ 
A_CALLPROC(NL(QJBACTR_fault),(164),(164,(NL(QJBACTR_fault)).nonlocals));
 /* line 8320: */
 /* line 8321: */
A_CALLPROC(NL(IUDACTR_substitute),(ZKAACTR_faultmode, CGFACTR_i, FGFACTR_firstmode),(ZKAACTR_faultmode, CGFACTR_i, FGFACTR_firstmode,(NL(IUDACTR_substitute)).nonlocals));
} 
else
{ 
WOGACTR = (DGFACTR_j<KQAACTR_refmark);
if ( WOGACTR )
{ /* line 8322: */
XOGACTR = (*(&A_VINDEX(NL(KUAACTR_modes),DGFACTR_j))) ;
switch ( XOGACTR.mode )
{ 
case 10: /* REF STRUCT(INT,INT,REF MODE53)  */
YOGACTR_a = (XOGACTR.data.mode10);
 /* line 8323: */
 /* line 8324: */
if ( ((*(&(YOGACTR_a->Mode)))==DGFACTR_j) )
{ 
BGFACTR_am = YOGACTR_a;
 /* line 8325: */
 /* line 8326: */
ZOGACTR = A68_TRUE;
} 
else
{ 
 /* line 8327: */
 /* line 8328: */
ZOGACTR = A68_FALSE;
} 
break;
default: 
 /* line 8329: */
 /* line 8330: */
ZOGACTR = A68_FALSE;
break;
} 
WOGACTR = ZOGACTR;
}
if ( WOGACTR )
{ 
(*NL(TYAACTR_untreated)) = (*(&((*NL(TYAACTR_untreated))->Rest)));
 /* line 8331: */
BPGACTR = (&(JGFACTR_indic->U)) ;
(*BPGACTR) = A_UNITE(APGACTR,mode2,2,BGFACTR_am);
 /* line 8332: */
 /* line 8333: */
(*NL(VYAACTR_lastmode))-=1;
} 
else
{ 
CPGACTR = (DGFACTR_j==(*NL(VYAACTR_lastmode)));
if ( CPGACTR )
{ /* line 8334: */
CPGACTR = ((*NL(RZAACTR_substlevel))==0);
}
if ( CPGACTR )
{ 
DPGACTR = (&A_VINDEX(NL(KUAACTR_modes),CGFACTR_i)) ;
(*DPGACTR) = (*(&A_VINDEX(NL(KUAACTR_modes),DGFACTR_j)));
 /* line 8335: */
(*NL(VYAACTR_lastmode))-=1;
 /* line 8336: */
 /* line 8337: */
EPGACTR = (&(BGFACTR_am->Mode)) ;
(*EPGACTR) = CGFACTR_i;
} 
else
{ 
 /* line 8338: */
if ( (CGFACTR_i==(*NL(VYAACTR_lastmode))) )
{ 
 /* line 8339: */
(*NL(VYAACTR_lastmode))-=1;
} 
 /* line 8340: */
 /* line 8341: */
 /* line 8342: */
 /* line 8345: */
A_CALLPROC(NL(IUDACTR_substitute),(DGFACTR_j, CGFACTR_i, FGFACTR_firstmode),(DGFACTR_j, CGFACTR_i, FGFACTR_firstmode,(NL(IUDACTR_substitute)).nonlocals));
} 
} 
} 
} 
break;
case 36: 
 /* line 8346: */
{ 
 /* line 8347: */
GPGACTR = FGFACTR_firstmode;
HPGACTR = (-1);
for ( FPGACTR_i = (*NL(VYAACTR_lastmode));
( HPGACTR > 0 && FPGACTR_i <= GPGACTR) ||
( HPGACTR < 0 && FPGACTR_i >= GPGACTR) ||
( HPGACTR == 0 ) ;
FPGACTR_i += HPGACTR )
{ 
 /* line 8348: */
IPGACTR = (*(&A_VINDEX(NL(KUAACTR_modes),FPGACTR_i))) ;
switch ( IPGACTR.mode )
{ 
case 11: /* STRUCT(INT)  */
JPGACTR_s = (IPGACTR.data.mode11);
 /* line 8349: */
if ( (FPGACTR_i==(*NL(VYAACTR_lastmode))) )
{ 
 /* line 8350: */
(*NL(VYAACTR_lastmode))-=1;
} 
break;
case 10: /* REF STRUCT(INT,INT,REF MODE53)  */
KPGACTR_a = (IPGACTR.data.mode10);
 /* line 8351: */
{ 
A_CALLPROC(NL(PZBACTR_faultp),(165, FPGACTR_i, 0, (A68_31 *)A68_NIL),(165, FPGACTR_i, 0, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
 /* line 8353: */
A_CALLPROC(NL(IUDACTR_substitute),(ZKAACTR_faultmode, FPGACTR_i, FGFACTR_firstmode),(ZKAACTR_faultmode, FPGACTR_i, FGFACTR_firstmode,(NL(IUDACTR_substitute)).nonlocals));
 /* line 8354: */
 /* line 8355: */
 /* line 8356: */
LPGACTR = (&(KPGACTR_a->Modeproc)) ;
(*LPGACTR) = 0;
} 
break;
case 2: /* REF STRUCT(INT,REF MODE54)  */
MPGACTR_u = (IPGACTR.data.mode2);
 /* line 8357: */
 /* line 8358: */
BWDACTR_removedupl(A_CALLPROC(NL(HWDACTR_flattenunion),(MPGACTR_u, A_VVAC(NPGACTR)),(MPGACTR_u, A_VVAC(NPGACTR),(NL(HWDACTR_flattenunion)).nonlocals)));
break;
default: 
 /* line 8359: */
/*SKIP*/;
break;
} 
}
 /* line 8360: */
 /* line 8361: */
if ( (FGFACTR_firstmode<(*NL(VYAACTR_lastmode))) )
{ 
 /* line 8362: */
PPGACTR = A_VECARR(NL(KUAACTR_modes),OPGACTR) ;
A_CALLPROC(NL(LXDACTR_accidental_eqs),(A_R1TRIM(QPGACTR,(PPGACTR),A_RTSCRIPT(&(QPGACTR.dim[0]),&((PPGACTR).dim[0]),FGFACTR_firstmode,(*NL(VYAACTR_lastmode)),FGFACTR_firstmode))),(A_R1TRIM(QPGACTR,(PPGACTR),A_RTSCRIPT(&(QPGACTR.dim[0]),&((PPGACTR).dim[0]),FGFACTR_firstmode,(*NL(VYAACTR_lastmode)),FGFACTR_firstmode)),(NL(LXDACTR_accidental_eqs)).nonlocals));
} 
 /* line 8363: */
SPGACTR = (*NL(VYAACTR_lastmode));
for ( RPGACTR_i = FGFACTR_firstmode;
RPGACTR_i <= SPGACTR;
RPGACTR_i += 1 )
{ 
 /* line 8364: */
TPGACTR_mi = (&A_VINDEX(NL(KUAACTR_modes),RPGACTR_i));
 /* line 8365: */
 /* line 8366: */
UPGACTR = (*TPGACTR_mi) ;
switch ( UPGACTR.mode )
{ 
case 11: /* STRUCT(INT)  */
 /* line 8367: */
 /* line 8368: */
/*SKIP*/;
break;
default: 
WPGACTR = (FGFACTR_firstmode-1);
for ( VPGACTR_j = NL(YYAACTR_newmode1);
VPGACTR_j <= WPGACTR;
VPGACTR_j += 1 )
{ 
 /* line 8369: */
ZPGACTR.source = TPGACTR_mi ;
AQGACTR.source = (&A_VINDEX(NL(KUAACTR_modes),VPGACTR_j)) ;
BQGACTR = ((*(ZPGACTR.destination))==(*(AQGACTR.destination)));
if ( BQGACTR )
{BQGACTR = A_CALLPROC(NL(BIDACTR_equality),(RPGACTR_i, VPGACTR_j, (FGFACTR_firstmode-1)),(RPGACTR_i, VPGACTR_j, (FGFACTR_firstmode-1),(NL(BIDACTR_equality)).nonlocals));
}
 /* line 8370: */
if ( BQGACTR )
{ 
EQGACTR = A_VTRIM(DQGACTR,((*NL(WHDACTR_test_flex))),A_VTSCRIPT(&(DQGACTR.upb),((*NL(WHDACTR_test_flex))).upb,1,(*NL(PHDACTR_last_flex)))) ;
FQGACTR = EQGACTR.upb -1;
CQGACTR_pi = EQGACTR.data;
for (;FQGACTR-- >= 0;
(CQGACTR_pi++
) )
{
 /* line 8371: */
 /* line 8372: */
A_CALLPROC(NL(IUDACTR_substitute),((*(&(CQGACTR_pi->J))), (*(&(CQGACTR_pi->I))), FGFACTR_firstmode),((*(&(CQGACTR_pi->J))), (*(&(CQGACTR_pi->I))), FGFACTR_firstmode,(NL(IUDACTR_substitute)).nonlocals));
}
 /* line 8373: */
 /* line 8374: */
goto YPGACTR_end;
} 
 /* line 8375: */
YPGACTR_end:
 /* line 8376: */
/*SKIP*/;
}
 /* line 8377: */
 /* line 8378: */
break;
} 
}
 /* line 8381: */
A_CALLPROC(NL(VVDACTR_checkmodes),((*NL(TYAACTR_untreated))),((*NL(TYAACTR_untreated)),(NL(VVDACTR_checkmodes)).nonlocals));
 /* line 8382: */
A_CALLPROC(NL(BTDACTR_modevars),((*NL(TYAACTR_untreated))),((*NL(TYAACTR_untreated)),(NL(BTDACTR_modevars)).nonlocals));
 /* line 8383: */
 /* line 8384: */
 /* line 8387: */
(*NL(TYAACTR_untreated)) = (A68_53 *)A68_NIL;
} 
break;
case 37: 
{ 
A_CALLPROC(KHFACTR_scopel,((&((&((&XGFACTR_vlist)->V))->Labs)), (&(External->Labs))),((&((&((&XGFACTR_vlist)->V))->Labs)), (&(External->Labs)),(KHFACTR_scopel).nonlocals));
 /* line 8388: */
 /* line 8389: */
 /* line 8392: */
goto KFFACTR_exitsc;
} 
break;
case 38: 
 /* line 8395: */
goto KFFACTR_exitsc;
break;
case 39: 
{ 
A_CALLPROC(NL(BZBACTR_tidyv),((&RGFACTR_v)),((&RGFACTR_v),(NL(BZBACTR_tidyv)).nonlocals));
 /* line 8396: */
GQGACTR.V = RGFACTR_v;
GQGACTR.Type = ZMAACTR_xbegin;
 /* line 8397: */
GQGACTR.Rest = (A68_124 *)A68_NIL;
 /* line 8400: */
XGFACTR_vlist = GQGACTR;
} 
break;
case 40: 
{ 
A_CALLPROC(NL(BZBACTR_tidyv),((&RGFACTR_v)),((&RGFACTR_v),(NL(BZBACTR_tidyv)).nonlocals));
 /* line 8401: */
HQGACTR = (&((&NFFACTR_current)->Props)) ;
(*HQGACTR) = (A68_BITS )((*(&((&NFFACTR_current)->Props)))&GRAACTR_notdontpull);
 /* line 8402: */
 /* line 8403: */
IQGACTR = (&((&((&XGFACTR_vlist)->V))->Props)) ;
(*IQGACTR) = (A68_BITS )((A68_BITS )((*(&((&((&XGFACTR_vlist)->V))->Props)))|(*(&((&NFFACTR_current)->Props))))|RLAACTR_exitbit);
 /* line 8404: */
YGFACTR_vl = (&XGFACTR_vlist);
 /* line 8405: */
 /* line 8406: */
if ( (Saveexit!=ARAACTR_nilbool) )
{ 
 /* line 8407: */
(*Saveexit) = A68_TRUE;
} 
 /* line 8408: */
for ( ;; )
{ 
 /* line 8409: */
if ( !(((*(&(YGFACTR_vl->Rest)))!=UQAACTR_nilvl)) ) break;
YGFACTR_vl = (*(&(YGFACTR_vl->Rest)));
}
 /* line 8411: */
JQGACTR.V = RGFACTR_v;
JQGACTR.Type = FNAACTR_xexit;
 /* line 8412: */
JQGACTR.Rest = (A68_124 *)A68_NIL;
 /* line 8415: */
KQGACTR = JYBACTR_globvlist() ;
(*KQGACTR) = JQGACTR ;
LQGACTR = (&(YGFACTR_vl->Rest)) ;
(*LQGACTR) = KQGACTR;
} 
break;
case 41: 
{ 
MQGACTR = (&((&NFFACTR_current)->Props)) ;
(*MQGACTR) = (A68_BITS )((*(&((&NFFACTR_current)->Props)))|SLAACTR_semibit);
 /* line 8416: */
NQGACTR.Fn = UNAACTR_xsemi;
NQGACTR.M = 0;
NQGACTR.Props = (*(&((&NFFACTR_current)->Dybits)));
NQGACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(OQGACTR,mode17,17,NQGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(OQGACTR,mode17,17,NQGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8417: */
 /* line 8418: */
 /* line 8421: */
PQGACTR = (&((&NFFACTR_current)->Dybits)) ;
(*PQGACTR) = MQAACTR_z;
} 
break;
case 42: 
{ 
(*NL(QDBACTR_look)) = 0;
 /* line 8422: */
 /* line 8424: */
if ( ((*NL(MFBACTR_t1))==65) )
{ 
HGFACTR_descno = 1;
 /* line 8425: */
 /* line 8426: */
 /* line 8427: */
if ( ((*NL(SYAACTR_modedecdepth))>0) )
{ 
 /* line 8428: */
A_CALLPROC(NL(QJBACTR_fault),(202),(202,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 8429: */
 /* line 8430: */
 /* line 8431: */
 /* line 8434: */
FGFACTR_firstmode = ((*NL(VYAACTR_lastmode))+1);
} 
} 
break;
case 43: 
{ 
A_CALLPROC(NL(QJBACTR_fault),(166),(166,(NL(QJBACTR_fault)).nonlocals));
 /* line 8436: */
QQGACTR.Props = MQAACTR_z;
QQGACTR.Mode = ZKAACTR_faultmode;
QQGACTR.Vlist = (A68_124 *)A68_NIL;
 /* line 8437: */
QQGACTR.Labs = (A68_69 *)A68_NIL;
 /* line 8441: */
RGFACTR_v = QQGACTR;
} 
break;
case 44: 
{ 
 /* line 8442: */
if ( PFFACTR_oldindichash )
{ 
A_CLOSURE( SQGACTR_generator, TQGACTR_generator, UQGACTR_generator );
 /* line 8443: */
A_CALLPROC(SQGACTR_generator,(A68_TRUE, &XQGACTR),(A68_TRUE, &XQGACTR,(SQGACTR_generator).nonlocals));
YQGACTR = (*(&((&NFFACTR_current)->Indics))) ;
A_VASSIGN2(YQGACTR,XQGACTR,A68_110 *) ;
ZQGACTR = (&((&NFFACTR_current)->Indics)) ;
(*ZQGACTR) = XQGACTR;
 /* line 8444: */
PFFACTR_oldindichash = A68_FALSE;
 /* line 8445: */
 /* line 8446: */
(*NL(KDBACTR_cindic)) = (A68_110 *)A68_NIL;
} 
 /* line 8447: */
ARGACTR = (*(&((&NFFACTR_current)->Indics))) ;
JGFACTR_indic = (*(&A_VINDEX(ARGACTR,(*NL(RSAACTR_comphash)))));
 /* line 8448: */
for ( ;; )
{ 
BRGACTR = (JGFACTR_indic!=SQAACTR_nilind);
if ( BRGACTR )
{ /* line 8449: */
BRGACTR = ((*(&(JGFACTR_indic->Level)))==(*(&((&NFFACTR_current)->Level))));
}
if ( !(BRGACTR) ) break;
 /* line 8450: */
DRGACTR = (*(&(JGFACTR_indic->Name))) ;
if ( A_VC_EQ(A_HISVEC(CRGACTR,DRGACTR,32,A68_CHAR ),A_HISVEC(ERGACTR,(*NL(OSAACTR_compsymb)),32,A68_CHAR )) )
{ 
 /* line 8451: */
FRGACTR = (*(&(JGFACTR_indic->U))) ;
switch ( FRGACTR.mode )
{ 
case 2: /* REF STRUCT(INT,INT,REF MODE53)  */
GRGACTR_a = (FRGACTR.data.mode2);
 /* line 8452: */
 /* line 8454: */
 /* line 8455: */
A_CALLPROC(NL(PZBACTR_faultp),(183, 0, 0, NL(OSAACTR_compsymb)),(183, 0, 0, NL(OSAACTR_compsymb),(NL(PZBACTR_faultp)).nonlocals));
break;
default: 
 /* line 8456: */
/*SKIP*/;
break;
} 
} 
 /* line 8457: */
 /* line 8458: */
JGFACTR_indic = (*(&(JGFACTR_indic->Rest)));
}
 /* line 8459: */
HRGACTR = ((*NL(KDBACTR_cindic))==SQAACTR_nilind);
if ( ! HRGACTR )
{ /* line 8460: */
HRGACTR = ((*(&((*NL(KDBACTR_cindic))->Level)))<(*(&((&NFFACTR_current)->Level))));
}
if ( HRGACTR )
{ 
 /* line 8461: */
IRGACTR.Name = (*NL(OSAACTR_compsymb));
IRGACTR.Level = (*(&((&NFFACTR_current)->Level)));
 /* line 8462: */
IRGACTR.Scope = (*(&((&NFFACTR_current)->Lastid)));
 /* line 8463: */
 /* line 8464: */
if ( ((*NL(MFBACTR_t1))<10) )
{ 
 /* line 8465: */
JRGACTR.Prio = (*NL(MFBACTR_t1));
} 
else
{ 
JRGACTR.Prio = 1;
} 
JRGACTR.I = (*NL(LDBACTR_cinst));
 /* line 8466: */
KRGACTR = A_LOC(A68_109 ) ;
(*KRGACTR) = JRGACTR ;
IRGACTR.U = A_UNITE(LRGACTR,mode1,1,KRGACTR);
 /* line 8467: */
 /* line 8468: */
MRGACTR = (*(&((&NFFACTR_current)->Indics))) ;
IRGACTR.Rest = (*(&A_VINDEX(MRGACTR,(*NL(RSAACTR_comphash)))));
NRGACTR = (*(&((&NFFACTR_current)->Indics))) ;
ORGACTR = A_LOC(A68_110 ) ;
(*ORGACTR) = IRGACTR ;
PRGACTR = (&A_VINDEX(NRGACTR,(*NL(RSAACTR_comphash)))) ;
(*PRGACTR) = (*NL(KDBACTR_cindic)) = ORGACTR;
} 
 /* line 8469: */
JGFACTR_indic = (*NL(KDBACTR_cindic));
 /* line 8470: */
(*NL(QDBACTR_look)) = 2;
 /* line 8471: */
 /* line 8472: */
 /* line 8475: */
IGFACTR_id = (A68_67 *)A68_NIL;
} 
break;
case 45: 
{ 
QRGACTR = ((*NL(HTAACTR_iv))<1);
if ( ! QRGACTR )
{ /* line 8476: */
QRGACTR = ((*NL(HTAACTR_iv))>9);
}
if ( QRGACTR )
{ 
A_CALLPROC(NL(QJBACTR_fault),(167),(167,(NL(QJBACTR_fault)).nonlocals));
 /* line 8478: */
 /* line 8479: */
(*NL(HTAACTR_iv)) = 1;
} 
 /* line 8480: */
RRGACTR = (&((&NFFACTR_current)->Props)) ;
(*RRGACTR) = (A68_BITS )((*(&((&NFFACTR_current)->Props)))|QLAACTR_priobit);
 /* line 8481: */
 /* line 8482: */
SRGACTR = (*(&(JGFACTR_indic->U))) ;
switch ( SRGACTR.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE108)  */
TRGACTR_op = (SRGACTR.data.mode1);
 /* line 8483: */
{ 
 /* line 8484: */
if ( ((*(&(TRGACTR_op->Prio)))<0) )
{ 
 /* line 8486: */
A_CALLPROC(NL(QJBACTR_fault),(204),(204,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 8487: */
 /* line 8488: */
 /* line 8489: */
 /* line 8490: */
URGACTR = (&(TRGACTR_op->Prio)) ;
(*URGACTR) = (-(*NL(HTAACTR_iv)));
} 
break;
default: 
 /* line 8491: */
 /* line 8494: */
/*SKIP*/;
break;
} 
} 
break;
case 46: 
 /* line 8495: */
VRGACTR = (*(&(JGFACTR_indic->U))) ;
switch ( VRGACTR.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE108)  */
WRGACTR_op = (VRGACTR.data.mode1);
 /* line 8496: */
{ 
XRGACTR.Lmode = 0;
XRGACTR.Rmode = 1;
XRGACTR.Ans = 0;
XRGACTR.Level = (*(&((&NFFACTR_current)->Level)));
 /* line 8497: */
XRGACTR.Decno = 0;
 /* line 8498: */
XRGACTR.Scope = (*(&((&NFFACTR_current)->Lastid)));
XRGACTR.Rest = (*(&(WRGACTR_op->I)));
YRGACTR = A_LOC(A68_108 ) ;
(*YRGACTR) = XRGACTR ;
ZRGACTR = (&(WRGACTR_op->I)) ;
(*ZRGACTR) = YRGACTR;
 /* line 8499: */
 /* line 8500: */
 /* line 8501: */
 /* line 8502: */
ASGACTR = (&((&NFFACTR_current)->Props)) ;
(*ASGACTR) = (A68_BITS )((*(&((&NFFACTR_current)->Props)))|ULAACTR_decbit);
} 
break;
default: 
 /* line 8505: */
/*SKIP*/;
break;
} 
break;
case 47: 
{ 
(*NL(QDBACTR_look)) = 2;
 /* line 8506: */
BSGACTR = (&((&NFFACTR_current)->Props)) ;
(*BSGACTR) = (A68_BITS )((*(&((&NFFACTR_current)->Props)))|ULAACTR_decbit);
 /* line 8507: */
 /* line 8508: */
 /* line 8511: */
CGFACTR_i = A_CALLPROC(QLFACTR_declarer,(A68_FALSE, (&OGFACTR_scam)),(A68_FALSE, (&OGFACTR_scam),(QLFACTR_declarer).nonlocals));
} 
break;
case 48: 
{ 
A_CALLPROC(YTFACTR_uc,(CGFACTR_i, &CSGACTR),(CGFACTR_i, &CSGACTR,(YTFACTR_uc).nonlocals));
CSGACTR;
 /* line 8512: */
DSGACTR = (&((&NFFACTR_current)->Lastid)) ;
(*DSGACTR)+=1;
 /* line 8513: */
ESGACTR.Name = (*(&(JGFACTR_indic->Name)));
 /* line 8514: */
ESGACTR.Decno = (*(&((&NFFACTR_current)->Lastid)));
ESGACTR.Level = 1;
ESGACTR.Mode = CGFACTR_i;
 /* line 8515: */
ESGACTR.Scope = (*(&((&NFFACTR_current)->Lastid)));
ESGACTR.Rest = (A68_67 *)A68_NIL;
FSGACTR = A_LOC(A68_67 ) ;
(*FSGACTR) = ESGACTR ;
IGFACTR_id = FSGACTR;
 /* line 8516: */
GSGACTR.Type = WOAACTR_xiddec;
GSGACTR.Iddec = IGFACTR_id;
A_CALLPROC(NL(Output),(A_UNITE(HSGACTR,mode12,12,GSGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(HSGACTR,mode12,12,GSGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8517: */
 /* line 8518: */
 /* line 8521: */
DGFACTR_j = EGFACTR_k = (*(&(IGFACTR_id->Decno)));
} 
break;
case 49: 
 /* line 8522: */
ISGACTR = (*(&(JGFACTR_indic->U))) ;
switch ( ISGACTR.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE108)  */
JSGACTR_op = (ISGACTR.data.mode1);
 /* line 8523: */
{ 
KSGACTR.Lmode = 0;
KSGACTR.Rmode = 1;
KSGACTR.Ans = 0;
 /* line 8524: */
KSGACTR.Level = (*(&((&NFFACTR_current)->Level)));
KSGACTR.Decno = DGFACTR_j;
 /* line 8525: */
KSGACTR.Scope = EGFACTR_k;
KSGACTR.Rest = (*(&(JSGACTR_op->I)));
LSGACTR = A_LOC(A68_108 ) ;
(*LSGACTR) = KSGACTR ;
MSGACTR = (&(JSGACTR_op->I)) ;
(*MSGACTR) = LSGACTR;
 /* line 8526: */
 /* line 8527: */
NSGACTR = (*(&A_VINDEX(NL(KUAACTR_modes),CGFACTR_i))) ;
switch ( NSGACTR.mode )
{ 
case 3: /* REF STRUCT(INT,REF MODE54)  */
OSGACTR_p = (NSGACTR.data.mode3);
 /* line 8528: */
{ 
CHFACTR_pl1 = (*(&(OSGACTR_p->Pars)));
 /* line 8529: */
PSGACTR = (&((*(&(JSGACTR_op->I)))->Ans)) ;
(*PSGACTR) = (*(&(OSGACTR_p->Deproc)));
 /* line 8530: */
 /* line 8531: */
if ( ((*(&(CHFACTR_pl1->Rest)))!=OQAACTR_nilml) )
{ 
QSGACTR = (&((*(&(JSGACTR_op->I)))->Lmode)) ;
(*QSGACTR) = (*(&(CHFACTR_pl1->Mode)));
 /* line 8532: */
 /* line 8533: */
CHFACTR_pl1 = (*(&(CHFACTR_pl1->Rest)));
} 
 /* line 8534: */
RSGACTR = (&((*(&(JSGACTR_op->I)))->Rmode)) ;
(*RSGACTR) = (*(&(CHFACTR_pl1->Mode)));
 /* line 8535: */
 /* line 8536: */
if ( ((*(&(CHFACTR_pl1->Rest)))!=OQAACTR_nilml) )
{ 
 /* line 8538: */
 /* line 8539: */
 /* line 8540: */
 /* line 8541: */
 /* line 8542: */
 /* line 8543: */
A_CALLPROC(NL(PZBACTR_faultp),(168, 0, 0, (&(JGFACTR_indic->Name))),(168, 0, 0, (&(JGFACTR_indic->Name)),(NL(PZBACTR_faultp)).nonlocals));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
default: 
 /* line 8546: */
/*SKIP*/;
break;
} 
break;
case 50: 
{ 
DGFACTR_j = (-(*NL(HTAACTR_iv)));
 /* line 8547: */
 /* line 8548: */
 /* line 8552: */
EGFACTR_k = 0;
} 
break;
case 51: 
{ 
SSGACTR = (&(IGFACTR_id->Mode)) ;
(*SSGACTR) = ZKAACTR_faultmode;
 /* line 8553: */
TSGACTR = (&(IGFACTR_id->Scope)) ;
(*TSGACTR)-=1;
 /* line 8554: */
USGACTR = (&((&NFFACTR_current)->Lastid)) ;
(*USGACTR)-=1;
 /* line 8555: */
(*MGFACTR_rid) = IGFACTR_id;
 /* line 8556: */
 /* line 8557: */
 /* line 8560: */
JGFACTR_indic = (A68_110 *)A68_NIL;
} 
break;
case 52: 
{ 
VSGACTR = (&(IGFACTR_id->Mode)) ;
(*VSGACTR) = (KQAACTR_refmark+ZKAACTR_faultmode);
 /* line 8561: */
(*MGFACTR_rid) = IGFACTR_id;
 /* line 8562: */
JGFACTR_indic = (A68_110 *)A68_NIL;
 /* line 8563: */
 /* line 8564: */
 /* line 8567: */
WSGACTR = (&((&NFFACTR_current)->Props)) ;
(*WSGACTR) = (A68_BITS )((A68_BITS )((*(&((&NFFACTR_current)->Props)))|ULAACTR_decbit)|VLAACTR_vardecbit);
} 
break;
case 53: 
{ 
XSGACTR.Name = NL(BZAACTR_nullid);
XSGACTR.Props = MQAACTR_z;
XSGACTR.Mode = 0;
XSGACTR.Rdenno = (*NL(CZAACTR_lastrd))+=1;
 /* line 8568: */
XSGACTR.Maxname = 0;
 /* line 8569: */
XSGACTR.Level = (*(&((&NFFACTR_current)->Level)));
XSGACTR.Rest = (*(&((&NFFACTR_current)->Rd)));
YSGACTR = A_LOC(A68_68 ) ;
(*YSGACTR) = XSGACTR ;
ZSGACTR = (&((&NFFACTR_current)->Rd)) ;
(*ZSGACTR) = YSGACTR;
 /* line 8570: */
ATGACTR = (&((&FHFACTR_xcharpos)->Charpos)) ;
(*ATGACTR) = (*NL(LSAACTR_tind));
 /* line 8571: */
A_CALLPROC(NL(Output),(A_UNITE(BTGACTR,mode15,15,FHFACTR_xcharpos), (*NL(FZAACTR_outlevel))),(A_UNITE(BTGACTR,mode15,15,FHFACTR_xcharpos), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8572: */
 /* line 8573: */
 /* line 8576: */
(*NL(FZAACTR_outlevel))+=1;
} 
break;
case 54: 
 /* line 8579: */
A_CALLPROC(QLFACTR_declarer,(A68_FALSE, (&OGFACTR_scam)),(A68_FALSE, (&OGFACTR_scam),(QLFACTR_declarer).nonlocals));
break;
case 55: 
{ 
CTGACTR.Type = YOAACTR_xfdec;
CTGACTR.Iddec = IGFACTR_id;
A_CALLPROC(NL(Output),(A_UNITE(DTGACTR,mode12,12,CTGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(DTGACTR,mode12,12,CTGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8580: */
(*MGFACTR_rid) = IGFACTR_id;
 /* line 8581: */
ETGACTR.Mode = (*(&(IGFACTR_id->Mode)));
 /* line 8582: */
ETGACTR.Rest = AHFACTR_parlist;
 /* line 8585: */
FTGACTR = A_HEAP(A68_54 ) ;
(*FTGACTR) = ETGACTR ;
AHFACTR_parlist = FTGACTR;
} 
break;
case 56: 
{ 
BHFACTR_pl = (A68_54 *)A68_NIL;
 /* line 8586: */
for ( ;; )
{ 
 /* line 8587: */
if ( !((AHFACTR_parlist!=OQAACTR_nilml)) ) break;
CHFACTR_pl1 = AHFACTR_parlist;
 /* line 8588: */
AHFACTR_parlist = (*(&(AHFACTR_parlist->Rest)));
 /* line 8589: */
GTGACTR = (&(CHFACTR_pl1->Rest)) ;
(*GTGACTR) = BHFACTR_pl;
 /* line 8590: */
 /* line 8591: */
BHFACTR_pl = CHFACTR_pl1;
}
 /* line 8592: */
CGFACTR_i = A_CALLPROC(QLFACTR_declarer,(A68_FALSE, (&OGFACTR_scam)),(A68_FALSE, (&OGFACTR_scam),(QLFACTR_declarer).nonlocals));
 /* line 8593: */
HTGACTR = (&((*(&((&NFFACTR_current)->Rd)))->Mode)) ;
(*HTGACTR) = DGFACTR_j = A_CALLPROC(NL(RRBACTR_insertprocp),(CGFACTR_i, BHFACTR_pl),(CGFACTR_i, BHFACTR_pl,(NL(RRBACTR_insertprocp)).nonlocals));
 /* line 8594: */
 /* line 8595: */
if ( (Rdname!=TQAACTR_nilid) )
{ 
ITGACTR = (&(Rdname->Mode)) ;
(*ITGACTR)+=(DGFACTR_j-ZKAACTR_faultmode);
 /* line 8596: */
 /* line 8597: */
if ( ((*(&(Rdname->Mode)))<KQAACTR_refmark) )
{ 
JTGACTR = (&(Rdname->Decno)) ;
(*JTGACTR) = (*NL(CZAACTR_lastrd));
 /* line 8598: */
 /* line 8599: */
KTGACTR = (&((*(&((&NFFACTR_current)->Rd)))->Name)) ;
(*KTGACTR) = (*(&(Rdname->Name)));
} 
else
{ 
LTGACTR.Type = XOAACTR_xvardec;
LTGACTR.Iddec = Rdname;
 /* line 8600: */
 /* line 8601: */
A_CALLPROC(NL(Output),(A_UNITE(MTGACTR,mode12,12,LTGACTR), ((*NL(FZAACTR_outlevel))-1)),(A_UNITE(MTGACTR,mode12,12,LTGACTR), ((*NL(FZAACTR_outlevel))-1),(NL(Output)).nonlocals));
} 
} 
 /* line 8602: */
 /* line 8603: */
if ( (Indname!=SQAACTR_nilind) )
{ 
NTGACTR = (&((*(&((&NFFACTR_current)->Rd)))->Name)) ;
(*NTGACTR) = (*(&(Indname->Name)));
 /* line 8604: */
 /* line 8605: */
OTGACTR = (&((*(&((&NFFACTR_current)->Rd)))->Props)) ;
(*OTGACTR) = (A68_BITS )((*(&((*(&((&NFFACTR_current)->Rd)))->Props)))|MLAACTR_operatorbit);
 /* line 8606: */
 /* line 8607: */
PTGACTR = (*(&(Indname->U))) ;
switch ( PTGACTR.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE108)  */
QTGACTR_op = (PTGACTR.data.mode1);
 /* line 8608: */
{ 
RTGACTR_in = (*(&(QTGACTR_op->I)));
 /* line 8609: */
STGACTR = (&(RTGACTR_in->Ans)) ;
(*STGACTR) = CGFACTR_i;
 /* line 8610: */
TTGACTR = (&(RTGACTR_in->Decno)) ;
(*TTGACTR) = (*NL(CZAACTR_lastrd));
 /* line 8611: */
 /* line 8612: */
if ( ((*(&(BHFACTR_pl->Rest)))!=OQAACTR_nilml) )
{ 
UTGACTR = (&(RTGACTR_in->Lmode)) ;
(*UTGACTR) = (*(&(BHFACTR_pl->Mode)));
 /* line 8613: */
 /* line 8614: */
BHFACTR_pl = (*(&(BHFACTR_pl->Rest)));
} 
 /* line 8615: */
VTGACTR = (&(RTGACTR_in->Rmode)) ;
(*VTGACTR) = (*(&(BHFACTR_pl->Mode)));
 /* line 8616: */
 /* line 8617: */
if ( ((*(&(BHFACTR_pl->Rest)))!=OQAACTR_nilml) )
{ 
 /* line 8619: */
 /* line 8620: */
 /* line 8621: */
 /* line 8622: */
A_CALLPROC(NL(PZBACTR_faultp),(168, 0, 0, (&(Indname->Name))),(168, 0, 0, (&(Indname->Name)),(NL(PZBACTR_faultp)).nonlocals));
} 
} 
break;
default: 
 /* line 8623: */
 /* line 8624: */
 /* line 8627: */
/*SKIP*/;
break;
} 
} 
} 
break;
case 57: 
{ 
WTGACTR_b = (*NL(XZAACTR_burestrict));
 /* line 8628: */
(*NL(XZAACTR_burestrict)) = A68_FALSE;
 /* line 8629: */
A_CALLPROC(YTFACTR_uc,(CGFACTR_i, &XTGACTR),(CGFACTR_i, &XTGACTR,(YTFACTR_uc).nonlocals));
XTGACTR;
 /* line 8630: */
(*NL(XZAACTR_burestrict)) = WTGACTR_b;
 /* line 8631: */
ZTGACTR = (*(&((*(&((&NFFACTR_current)->Rd)))->Name))) ;
BUGACTR_format = A_VC_EQ(A_HISVEC(YTGACTR,ZTGACTR,32,A68_CHAR ),A_HISVEC(AUGACTR,NL(AUAACTR_identformat),32,A68_CHAR ));
 /* line 8632: */
 /* line 8633: */
if ( BUGACTR_format )
{ 
 /* line 8634: */
if ( (WGFACTR_formatcaseno!=0) )
{ 
 /* line 8635: */
(*NL(FZAACTR_outlevel))+=3;
} 
else
{ 
CUGACTR.V.Props = MQAACTR_z;
CUGACTR.V.Mode = CLAACTR_formatmode;
CUGACTR.V.Vlist = (A68_124 *)A68_NIL;
CUGACTR.V.Labs = (A68_69 *)A68_NIL;
CUGACTR.Type = 0;
CUGACTR.Rest = (A68_124 *)A68_NIL;
XGFACTR_vlist = CUGACTR;
 /* line 8636: */
(*NL(CZAACTR_lastrd))-=1;
 /* line 8637: */
A_CALLPROC(NL(Output),(QKAACTR_up, ((*NL(FZAACTR_outlevel))+2)),(QKAACTR_up, ((*NL(FZAACTR_outlevel))+2),(NL(Output)).nonlocals));
 /* line 8638: */
 /* line 8639: */
 /* line 8640: */
goto KFFACTR_exitsc;
} 
} 
 /* line 8641: */
DUGACTR = (Rdname==TQAACTR_nilid);
if ( DUGACTR )
{ /* line 8642: */
DUGACTR = (Indname==SQAACTR_nilind);
}
if ( DUGACTR )
{ 
 /* line 8643: */
EUGACTR = (&((*(&((&NFFACTR_current)->Rd)))->Props)) ;
(*EUGACTR) = (A68_BITS )((*(&((*(&((&NFFACTR_current)->Rd)))->Props)))|NLAACTR_valbit);
} 
 /* line 8644: */
 /* line 8645: */
FUGACTR = A_CALLPROC(NL(VECACTR_marker),(CGFACTR_i),(CGFACTR_i,(NL(VECACTR_marker)).nonlocals)) ;
if ( (A_ABS(FUGACTR)!=1) )
{ 
 /* line 8646: */
 /* line 8647: */
GUGACTR = (&((*(&((&NFFACTR_current)->Rd)))->Props)) ;
(*GUGACTR) = (A68_BITS )((*(&((*(&((&NFFACTR_current)->Rd)))->Props)))|ZLAACTR_dontpullbit);
} 
 /* line 8648: */
HUGACTR.Fn = VNAACTR_xroutinend;
 /* line 8650: */
HUGACTR.M = 0;
 /* line 8651: */
HUGACTR.Props = (A68_BITS )((*(&((*(&((&NFFACTR_current)->Rd)))->Props)))&(A68_BITS )(ZLAACTR_dontpullbit|NLAACTR_valbit));
HUGACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(IUGACTR,mode17,17,HUGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(IUGACTR,mode17,17,HUGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8652: */
A_CALLPROC(NL(Output),(QKAACTR_up, (*NL(FZAACTR_outlevel))),(QKAACTR_up, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8653: */
(*NL(FZAACTR_outlevel))-=1;
 /* line 8654: */
EHFACTR_labl = (A68_69 *)A68_NIL ;
A_CALLPROC(KHFACTR_scopel,((&((&((&XGFACTR_vlist)->V))->Labs)), (&EHFACTR_labl)),((&((&((&XGFACTR_vlist)->V))->Labs)), (&EHFACTR_labl),(KHFACTR_scopel).nonlocals));
 /* line 8655: */
KUGACTR = (*(&((&NFFACTR_current)->Rd))) ;
A_CALLPROC(NL(Output),(A_UNITE(JUGACTR,mode34,34,KUGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(JUGACTR,mode34,34,KUGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8656: */
DHFACTR_lab = (*(&((&((&XGFACTR_vlist)->V))->Labs)));
 /* line 8657: */
for ( ;; )
{ 
 /* line 8658: */
if ( !((DHFACTR_lab!=XQAACTR_nillab)) ) break;
LUGACTR.Lab = DHFACTR_lab;
LUGACTR.Notsetting = A68_TRUE;
A_CALLPROC(NL(Output),(A_UNITE(MUGACTR,mode13,13,LUGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(MUGACTR,mode13,13,LUGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8659: */
 /* line 8660: */
DHFACTR_lab = (*(&(DHFACTR_lab->Rest)));
}
 /* line 8661: */
for ( ;; )
{ 
 /* line 8662: */
if ( !((EHFACTR_labl!=XQAACTR_nillab)) ) break;
NUGACTR.Lab = DHFACTR_lab = EHFACTR_labl;
NUGACTR.Notsetting = A68_TRUE;
A_CALLPROC(NL(Output),(A_UNITE(OUGACTR,mode13,13,NUGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(OUGACTR,mode13,13,NUGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8663: */
EHFACTR_labl = (*(&(EHFACTR_labl->Rest)));
 /* line 8664: */
PUGACTR = (&(DHFACTR_lab->Rest)) ;
(*PUGACTR) = (*(&(External->Labs)));
 /* line 8665: */
 /* line 8666: */
QUGACTR = (&(External->Labs)) ;
(*QUGACTR) = DHFACTR_lab;
}
 /* line 8667: */
A_CALLPROC(NL(Output),(SKAACTR_down, (*NL(FZAACTR_outlevel))),(SKAACTR_down, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8668: */
 /* line 8669: */
if ( (Rdname==TQAACTR_nilid) )
{ 
 /* line 8670: */
if ( (Indname==SQAACTR_nilind) )
{ 
RUGACTR.V.Props = MQAACTR_z;
 /* line 8671: */
 /* line 8672: */
if ( BUGACTR_format )
{ 
 /* line 8673: */
RUGACTR.V.Mode = CLAACTR_formatmode;
} 
else
{ 
RUGACTR.V.Mode = (*(&((*(&((&NFFACTR_current)->Rd)))->Mode)));
} 
RUGACTR.V.Vlist = (A68_124 *)A68_NIL;
RUGACTR.V.Labs = (A68_69 *)A68_NIL;
RUGACTR.Type = 0;
 /* line 8674: */
RUGACTR.Rest = (A68_124 *)A68_NIL;
 /* line 8675: */
XGFACTR_vlist = RUGACTR;
} 
} 
else
{ 
 /* line 8676: */
if ( ((*(&(Rdname->Mode)))>KQAACTR_refmark) )
{ 
TUGACTR = (*(&(Rdname->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(SUGACTR,mode3,3,TUGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(SUGACTR,mode3,3,TUGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8677: */
A_CALLPROC(NL(Output),(A_UNITE(UUGACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel))),(A_UNITE(UUGACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8678: */
WUGACTR = (*(&((*(&((&NFFACTR_current)->Rd)))->Rdenno))) ;
A_CALLPROC(NL(Output),(A_UNITE(VUGACTR,mode3,3,WUGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(VUGACTR,mode3,3,WUGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8679: */
XUGACTR.Fn = UMAACTR_xassign;
XUGACTR.M = (*(&(Rdname->Mode)));
XUGACTR.Param = 1;
A_CALLPROC(NL(Output),(A_UNITE(YUGACTR,mode14,14,XUGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(YUGACTR,mode14,14,XUGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8680: */
ZUGACTR.Fn = BOAACTR_xvoid;
ZUGACTR.M = YKAACTR_voidmode;
ZUGACTR.Param = 0;
 /* line 8681: */
A_CALLPROC(NL(Output),(A_UNITE(AVGACTR,mode14,14,ZUGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(AVGACTR,mode14,14,ZUGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
} 
 /* line 8682: */
 /* line 8683: */
if ( BUGACTR_format )
{ 
A_CALLPROC(NL(Output),(QKAACTR_up, (*NL(FZAACTR_outlevel))),(QKAACTR_up, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8684: */
 /* line 8685: */
(*NL(FZAACTR_outlevel))-=2;
} 
 /* line 8686: */
 /* line 8687: */
 /* line 8690: */
goto KFFACTR_exitsc;
} 
break;
case 58: 
 /* line 8693: */
(*NL(EZAACTR_rdmode)) = A_CALLPROC(QLFACTR_declarer,(A68_FALSE, (&OGFACTR_scam)),(A68_FALSE, (&OGFACTR_scam),(QLFACTR_declarer).nonlocals));
break;
case 59: 
 /* line 8696: */
A_CALLPROC(NL(GFFACTR_range),((&NFFACTR_current), IGFACTR_id, JGFACTR_indic, (A68_BOOL *)A68_NIL, &BVGACTR),((&NFFACTR_current), IGFACTR_id, JGFACTR_indic, (A68_BOOL *)A68_NIL, &BVGACTR,(NL(GFFACTR_range)).nonlocals));
BVGACTR;
break;
case 60: 
{ 
CVGACTR = (&((*(&((&NFFACTR_current)->Rd)))->Mode)) ;
(*CVGACTR) = DGFACTR_j = A_CALLPROC(NL(LUBACTR_insertprc),(CGFACTR_i = (*NL(EZAACTR_rdmode))),(CGFACTR_i = (*NL(EZAACTR_rdmode)),(NL(LUBACTR_insertprc)).nonlocals));
 /* line 8697: */
 /* line 8698: */
if ( (Indname!=SQAACTR_nilind) )
{ 
 /* line 8700: */
A_CALLPROC(NL(PZBACTR_faultp),(170, 0, 0, (&(Indname->Name))),(170, 0, 0, (&(Indname->Name)),(NL(PZBACTR_faultp)).nonlocals));
} 
else
{ 
 /* line 8701: */
if ( (Rdname!=TQAACTR_nilid) )
{ 
DVGACTR = (&(Rdname->Mode)) ;
(*DVGACTR)+=(DGFACTR_j-ZKAACTR_faultmode);
 /* line 8702: */
 /* line 8703: */
if ( ((*(&(Rdname->Mode)))<KQAACTR_refmark) )
{ 
EVGACTR = (&((*(&((&NFFACTR_current)->Rd)))->Name)) ;
(*EVGACTR) = (*(&(Rdname->Name)));
 /* line 8704: */
 /* line 8705: */
FVGACTR = (&(Rdname->Decno)) ;
(*FVGACTR) = (*NL(CZAACTR_lastrd));
} 
else
{ 
GVGACTR.Type = XOAACTR_xvardec;
GVGACTR.Iddec = Rdname;
 /* line 8706: */
 /* line 8707: */
 /* line 8708: */
 /* line 8712: */
A_CALLPROC(NL(Output),(A_UNITE(HVGACTR,mode12,12,GVGACTR), ((*NL(FZAACTR_outlevel))-1)),(A_UNITE(HVGACTR,mode12,12,GVGACTR), ((*NL(FZAACTR_outlevel))-1),(NL(Output)).nonlocals));
} 
} 
} 
} 
break;
case 61: 
{ 
YFFACTR_ccmode = (*NL(AZAACTR_globccmode));
 /* line 8713: */
ZFFACTR_m = A_CALLPROC(QLFACTR_declarer,(A68_FALSE, (&OGFACTR_scam)),(A68_FALSE, (&OGFACTR_scam),(QLFACTR_declarer).nonlocals));
 /* line 8714: */
if ( (ZFFACTR_m>KQAACTR_refmark) )
{ 
LVGACTR = ELAACTR_int;
} 
else
{ 
LVGACTR = ZFFACTR_m;
} 
 /* line 8715: */
MVGACTR = (*(&A_VINDEX(NL(KUAACTR_modes),LVGACTR)));
switch ( MVGACTR.mode )
{ 
case 2: /* REF STRUCT(INT,REF MODE54)  */
NVGACTR_ru = (MVGACTR.data.mode2);
 /* line 8716: */
{ 
AGFACTR_ml = (*(&(NVGACTR_ru->Modelist)));
 /* line 8717: */
for ( ;; )
{ 
 /* line 8718: */
if ( !((AGFACTR_ml!=(A68_54 *)A68_NIL)) ) break;
 /* line 8719: */
if ( (A_CALLPROC(NL(MLCACTR_unite),((A68_125 *)A68_NIL, (*(&(AGFACTR_ml->Mode))), YFFACTR_ccmode, 1, A68_FALSE),((A68_125 *)A68_NIL, (*(&(AGFACTR_ml->Mode))), YFFACTR_ccmode, 1, A68_FALSE,(NL(MLCACTR_unite)).nonlocals))==0) )
{ 
ZFFACTR_m = (*(&(AGFACTR_ml->Mode)));
 /* line 8720: */
 /* line 8721: */
goto KVGACTR_flt;
} 
 /* line 8722: */
 /* line 8723: */
AGFACTR_ml = (*(&(AGFACTR_ml->Rest)));
}
 /* line 8724: */
 /* line 8725: */
 /* line 8726: */
DGFACTR_j = (-YFFACTR_ccmode);
} 
break;
default: 
 /* line 8727: */
if ( ((DGFACTR_j = A_CALLPROC(NL(MLCACTR_unite),((A68_125 *)A68_NIL, ZFFACTR_m, YFFACTR_ccmode, 1, A68_FALSE),((A68_125 *)A68_NIL, ZFFACTR_m, YFFACTR_ccmode, 1, A68_FALSE,(NL(MLCACTR_unite)).nonlocals)))==0) )
{ 
 /* line 8728: */
 /* line 8729: */
goto KVGACTR_flt;
} 
break;
} 
 /* line 8730: */
OVGACTR.Fn = WNAACTR_xuchoice;
OVGACTR.M = ZFFACTR_m;
 /* line 8732: */
 /* line 8733: */
if ( ((*NL(MFBACTR_t1))==32) )
{ 
 /* line 8734: */
OVGACTR.Props = ULAACTR_decbit;
} 
else
{ 
OVGACTR.Props = MQAACTR_z;
} 
OVGACTR.Param = DGFACTR_j;
 /* line 8735: */
 /* line 8736: */
A_CALLPROC(NL(Output),(A_UNITE(PVGACTR,mode17,17,OVGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(PVGACTR,mode17,17,OVGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
goto IVGACTR;
KVGACTR_flt:
 /* line 8737: */
A_CALLPROC(NL(PZBACTR_faultp),(171, ZFFACTR_m, YFFACTR_ccmode, (A68_31 *)A68_NIL),(171, ZFFACTR_m, YFFACTR_ccmode, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
 /* line 8739: */
 /* line 8740: */
 /* line 8743: */
QVGACTR = (&((&OGFACTR_scam)->Mode)) ;
(*QVGACTR) = ZKAACTR_faultmode;
IVGACTR: ;
} 
break;
case 62: 
{ 
(*NL(AZAACTR_globccmode)) = YFFACTR_ccmode;
 /* line 8744: */
A_CALLPROC(KHFACTR_scopel,((&((&((&XGFACTR_vlist)->V))->Labs)), (&(External->Labs))),((&((&((&XGFACTR_vlist)->V))->Labs)), (&(External->Labs)),(KHFACTR_scopel).nonlocals));
 /* line 8745: */
 /* line 8746: */
 /* line 8749: */
goto KFFACTR_exitsc;
} 
break;
case 63: 
{ 
(*MGFACTR_rid) = IGFACTR_id;
 /* line 8750: */
RVGACTR.Type = BPAACTR_xccdec;
RVGACTR.Iddec = IGFACTR_id;
 /* line 8751: */
 /* line 8754: */
A_CALLPROC(NL(Output),(A_UNITE(SVGACTR,mode12,12,RVGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(SVGACTR,mode12,12,RVGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 64: 
 /* line 8757: */
A_CALLPROC(YTFACTR_uc,(0, &TVGACTR),(0, &TVGACTR,(YTFACTR_uc).nonlocals));
RGFACTR_v = TVGACTR;
break;
case 65: 
{ 
HHFACTR_givenmess = A68_FALSE;
 /* line 8758: */
 /* line 8759: */
if ( OFFACTR_oldidhash )
{ 
A_CLOSURE( VVGACTR_generator, WVGACTR_generator, XVGACTR_generator );
A_CALLPROC(VVGACTR_generator,(A68_TRUE, &AWGACTR),(A68_TRUE, &AWGACTR,(VVGACTR_generator).nonlocals));
BWGACTR = (*(&((&NFFACTR_current)->Ids))) ;
A_VASSIGN2(BWGACTR,AWGACTR,A68_67 *) ;
CWGACTR = (&((&NFFACTR_current)->Ids)) ;
(*CWGACTR) = AWGACTR;
 /* line 8761: */
 /* line 8762: */
OFFACTR_oldidhash = A68_FALSE;
} 
 /* line 8763: */
DWGACTR = (*(&((&NFFACTR_current)->Ids))) ;
MGFACTR_rid = (&A_VINDEX(DWGACTR,(*NL(TSAACTR_idhash))));
 /* line 8764: */
IGFACTR_id = (*MGFACTR_rid);
 /* line 8765: */
(*NL(GBBACTR_lastidchanged)) = A68_TRUE;
 /* line 8766: */
 /* line 8767: */
if ( ((*NL(MFBACTR_t1))==32) )
{ 
for ( ;; )
{ 
 /* line 8768: */
EWGACTR = (IGFACTR_id!=TQAACTR_nilid);
if ( EWGACTR )
{ /* line 8769: */
EWGACTR = ((*(&(IGFACTR_id->Level)))==(*(&((&NFFACTR_current)->Level))));
}
if ( !(EWGACTR) ) break;
 /* line 8770: */
HWGACTR = (*(&(IGFACTR_id->Name))) ;
IWGACTR = A_VC_EQ(A_HISVEC(FWGACTR,(*NL(PSAACTR_ident)),32,A68_CHAR ),A_HISVEC(GWGACTR,HWGACTR,32,A68_CHAR ));
if ( IWGACTR )
{IWGACTR = !HHFACTR_givenmess;
}
if ( IWGACTR )
{ 
HHFACTR_givenmess = A68_TRUE;
 /* line 8771: */
 /* line 8773: */
A_CALLPROC(NL(PZBACTR_faultp),(172, 0, 0, NL(PSAACTR_ident)),(172, 0, 0, NL(PSAACTR_ident),(NL(PZBACTR_faultp)).nonlocals));
} 
 /* line 8774: */
 /* line 8775: */
IGFACTR_id = (*(&(IGFACTR_id->Rest)));
}
 /* line 8776: */
} 
 /* line 8777: */
JWGACTR = (&((&NFFACTR_current)->Lastid)) ;
(*JWGACTR)+=1;
 /* line 8778: */
 /* line 8779: */
 /* line 8780: */
if ( ((*NL(MFBACTR_t1))==32) )
{ 
 /* line 8781: */
KWGACTR.Name = (*NL(PSAACTR_ident));
} 
else
{ 
KWGACTR.Name = NL(XTAACTR_spaces);
} 
KWGACTR.Decno = (*(&((&NFFACTR_current)->Lastid)));
 /* line 8782: */
KWGACTR.Level = (*(&((&NFFACTR_current)->Level)));
KWGACTR.Mode = (*(&((&OGFACTR_scam)->Mode)));
 /* line 8783: */
KWGACTR.Scope = (*(&((&NFFACTR_current)->Lastid)));
 /* line 8784: */
KWGACTR.Rest = (*MGFACTR_rid);
 /* line 8787: */
LWGACTR = A_LOC(A68_67 ) ;
(*LWGACTR) = KWGACTR ;
IGFACTR_id = LWGACTR;
} 
break;
case 66: 
 /* line 8788: */
MWGACTR = (*(&((&NFFACTR_current)->Props))) ;
if ( !A_LB_GE(MWGACTR,ULAACTR_decbit) )
{ 
NWGACTR = (&((&NFFACTR_current)->Lastid)) ;
(*NWGACTR)+=1;
 /* line 8789: */
 /* line 8790: */
OWGACTR.Type = DPAACTR_xdummydec;
 /* line 8791: */
PWGACTR.Name = NL(BZAACTR_nullid);
 /* line 8792: */
PWGACTR.Decno = (*(&((&NFFACTR_current)->Lastid)));
PWGACTR.Level = (*(&((&NFFACTR_current)->Level)));
 /* line 8793: */
PWGACTR.Mode = 0;
 /* line 8794: */
PWGACTR.Scope = (*(&((&NFFACTR_current)->Lastid)));
 /* line 8795: */
PWGACTR.Rest = (A68_67 *)A68_NIL;
QWGACTR = A_LOC(A68_67 ) ;
(*QWGACTR) = PWGACTR ;
OWGACTR.Iddec = QWGACTR;
A_CALLPROC(NL(Output),(A_UNITE(RWGACTR,mode12,12,OWGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(RWGACTR,mode12,12,OWGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8796: */
SWGACTR = (&((&NFFACTR_current)->Props)) ;
(*SWGACTR) = (A68_BITS )((*(&((&NFFACTR_current)->Props)))|ULAACTR_decbit);
 /* line 8797: */
 /* line 8798: */
 /* line 8801: */
(*NL(GBBACTR_lastidchanged)) = A68_TRUE;
} 
break;
case 67: 
{ 
 /* line 8802: */
if ( GHFACTR_firstaidec )
{ 
 /* line 8803: */
if ( ZGFACTR_heap )
{ 
A_CALLPROC(NL(QJBACTR_fault),(173),(173,(NL(QJBACTR_fault)).nonlocals));
 /* line 8805: */
 /* line 8806: */
ZGFACTR_heap = A68_FALSE;
} 
 /* line 8807: */
 /* line 8808: */
if ( (GGFACTR_type==2) )
{ 
A_CALLPROC(NL(QJBACTR_fault),(174),(174,(NL(QJBACTR_fault)).nonlocals));
 /* line 8810: */
 /* line 8811: */
GGFACTR_type = 0;
} 
 /* line 8812: */
 /* line 8813: */
GHFACTR_firstaidec = A68_FALSE;
} 
 /* line 8814: */
TWGACTR = (&(IGFACTR_id->Mode)) ;
(*TWGACTR) = A_CALLPROC(NL(JGCACTR_deflex),((*(&(IGFACTR_id->Mode)))),((*(&(IGFACTR_id->Mode))),(NL(JGCACTR_deflex)).nonlocals));
 /* line 8815: */
UWGACTR = (&((&NFFACTR_current)->Props)) ;
(*UWGACTR) = (A68_BITS )((*(&((&NFFACTR_current)->Props)))|ULAACTR_decbit);
 /* line 8816: */
VWGACTR = (&((&NFFACTR_current)->Lastid)) ;
(*VWGACTR)-=1;
 /* line 8817: */
 /* line 8818: */
if ( ((*NL(MFBACTR_t1))!=92) )
{ 
A_CALLPROC(YTFACTR_uc,((*(&(IGFACTR_id->Mode))), &WWGACTR),((*(&(IGFACTR_id->Mode))), &WWGACTR,(YTFACTR_uc).nonlocals));
RGFACTR_v = WWGACTR;
 /* line 8819: */
XWGACTR = (&((&NFFACTR_current)->Lastid)) ;
(*XWGACTR) = (*(&(IGFACTR_id->Decno)));
 /* line 8820: */
YWGACTR.Type = WOAACTR_xiddec;
YWGACTR.Iddec = IGFACTR_id;
 /* line 8821: */
A_CALLPROC(NL(Output),(A_UNITE(ZWGACTR,mode12,12,YWGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(ZWGACTR,mode12,12,YWGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 8822: */
 /* line 8823: */
 /* line 8826: */
(*MGFACTR_rid) = IGFACTR_id;
} 
break;
case 68: 
{ 
AXGACTR = (&(IGFACTR_id->Scope)) ;
(*AXGACTR) = 0;
 /* line 8827: */
 /* line 8828: */
 /* line 8831: */
BXGACTR = (&(IGFACTR_id->Decno)) ;
(*BXGACTR) = (-(*NL(HTAACTR_iv)));
} 
break;
case 69: 
{ 
CXGACTR = (&((&NFFACTR_current)->Props)) ;
(*CXGACTR) = (A68_BITS )((A68_BITS )((*(&((&NFFACTR_current)->Props)))|ULAACTR_decbit)|VLAACTR_vardecbit);
 /* line 8832: */
 /* line 8833: */
if ( GHFACTR_firstaidec )
{ 
 /* line 8834: */
if ( (GGFACTR_type==1) )
{ 
 /* line 8836: */
A_CALLPROC(NL(QJBACTR_fault),(175),(175,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 8837: */
 /* line 8838: */
GHFACTR_firstaidec = A68_FALSE;
} 
 /* line 8839: */
DXGACTR = (&(IGFACTR_id->Mode)) ;
(*DXGACTR)+=KQAACTR_refmark;
 /* line 8840: */
 /* line 8841: */
EXGACTR = ((CGFACTR_i = ((((*(&((&OGFACTR_scam)->Modeproc)))!=0))+1))==1);
if ( EXGACTR )
{EXGACTR = ZGFACTR_heap;
}
if ( EXGACTR )
{ 
FXGACTR.Mode = (*(&(IGFACTR_id->Mode)));
FXGACTR.Loc = A68_FALSE;
 /* line 8842: */
A_CALLPROC(NL(Output),(A_UNITE(GXGACTR,mode6,6,FXGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(GXGACTR,mode6,6,FXGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 8843: */
 /* line 8844: */
if ( (CGFACTR_i!=1) )
{ 
A_CALLPROC(NL(YNDACTR_loadmodeproc),((&OGFACTR_scam)),((&OGFACTR_scam),(NL(YNDACTR_loadmodeproc)).nonlocals));
 /* line 8845: */
IXGACTR = !ZGFACTR_heap ;
A_CALLPROC(NL(Output),(A_UNITE(HXGACTR,mode2,2,IXGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(HXGACTR,mode2,2,IXGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8846: */
JXGACTR.Fn = HMAACTR_xparampack;
JXGACTR.M = A_CALLPROC(NL(ZICACTR_mproc),((*(&((&OGFACTR_scam)->Mode)))),((*(&((&OGFACTR_scam)->Mode))),(NL(ZICACTR_mproc)).nonlocals));
JXGACTR.Param = 1;
A_CALLPROC(NL(Output),(A_UNITE(KXGACTR,mode14,14,JXGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(KXGACTR,mode14,14,JXGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8847: */
LXGACTR.Fn = AOAACTR_xcall;
LXGACTR.M = (*(&((&OGFACTR_scam)->Mode)));
LXGACTR.Param = (1+(ZGFACTR_heap));
A_CALLPROC(NL(Output),(A_UNITE(MXGACTR,mode14,14,LXGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(MXGACTR,mode14,14,LXGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8848: */
 /* line 8849: */
if ( ZGFACTR_heap )
{ 
NXGACTR.Fn = GMAACTR_xstatgrab;
NXGACTR.M = (*(&(IGFACTR_id->Mode)));
NXGACTR.Param = 0;
 /* line 8851: */
A_CALLPROC(NL(Output),(A_UNITE(OXGACTR,mode14,14,NXGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(OXGACTR,mode14,14,NXGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
else
{ 
 /* line 8852: */
 /* line 8853: */
PXGACTR = (&((&NFFACTR_current)->Props)) ;
(*PXGACTR) = (A68_BITS )((*(&((&NFFACTR_current)->Props)))|FMAACTR_locdydecbit);
} 
} 
 /* line 8855: */
QXGACTR = ZGFACTR_heap;
if ( ! QXGACTR )
{ /* line 8856: */
QXGACTR = (CGFACTR_i!=1);
}
if ( QXGACTR )
{ 
CGFACTR_i = (2+(ZGFACTR_heap));
 /* line 8857: */
 /* line 8858: */
 /* line 8859: */
if ( ZGFACTR_heap )
{ 
 /* line 8860: */
RXGACTR.Type = WOAACTR_xiddec;
} 
else
{ 
RXGACTR.Type = APAACTR_xivardec;
} 
RXGACTR.Iddec = IGFACTR_id;
A_CALLPROC(NL(Output),(A_UNITE(SXGACTR,mode12,12,RXGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(SXGACTR,mode12,12,RXGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8861: */
 /* line 8862: */
if ( ((*NL(MFBACTR_t1))!=11) )
{ 
TXGACTR.Fn = UNAACTR_xsemi;
TXGACTR.M = 0;
TXGACTR.Props = ZLAACTR_dontpullbit;
TXGACTR.Param = 0;
 /* line 8863: */
A_CALLPROC(NL(Output),(A_UNITE(UXGACTR,mode17,17,TXGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(UXGACTR,mode17,17,TXGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 8864: */
 /* line 8865: */
 /* line 8866: */
 /* line 8869: */
ZGFACTR_heap = A68_FALSE;
} 
} 
break;
case 70: 
{ 
 /* line 8870: */
if ( (CGFACTR_i!=1) )
{ 
WXGACTR = (*(&(IGFACTR_id->Decno))) ;
A_CALLPROC(NL(Output),(A_UNITE(VXGACTR,mode3,3,WXGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(VXGACTR,mode3,3,WXGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8871: */
 /* line 8872: */
XXGACTR = A_CALLPROC(NL(ZFCACTR_assmarker),((*(&((&OGFACTR_scam)->Mode)))),((*(&((&OGFACTR_scam)->Mode))),(NL(ZFCACTR_assmarker)).nonlocals)) ;
if ( (A_ABS(XXGACTR)<=2) )
{ 
 /* line 8873: */
 /* line 8874: */
A_CALLPROC(NL(Output),(A_UNITE(YXGACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel))),(A_UNITE(YXGACTR,mode16,16,EPAACTR_xwass), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
} 
else
{ 
 /* line 8875: */
ZXGACTR = (&((&NFFACTR_current)->Lastid)) ;
(*ZXGACTR)-=1;
} 
 /* line 8876: */
A_CALLPROC(YTFACTR_uc,(A_CALLPROC(NL(JGCACTR_deflex),((*(&((&OGFACTR_scam)->Mode)))),((*(&((&OGFACTR_scam)->Mode))),(NL(JGCACTR_deflex)).nonlocals)), &AYGACTR),(A_CALLPROC(NL(JGCACTR_deflex),((*(&((&OGFACTR_scam)->Mode)))),((*(&((&OGFACTR_scam)->Mode))),(NL(JGCACTR_deflex)).nonlocals)), &AYGACTR,(YTFACTR_uc).nonlocals));
AYGACTR;
 /* line 8877: */
 /* line 8878: */
if ( (CGFACTR_i!=1) )
{ 
A_CALLPROC(NL(VCEACTR_assign),((*(&((&OGFACTR_scam)->Mode)))),((*(&((&OGFACTR_scam)->Mode))),(NL(VCEACTR_assign)).nonlocals));
 /* line 8879: */
BYGACTR.Fn = BOAACTR_xvoid;
BYGACTR.M = YKAACTR_voidmode;
BYGACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(CYGACTR,mode14,14,BYGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(CYGACTR,mode14,14,BYGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8880: */
DYGACTR.Fn = UNAACTR_xsemi;
DYGACTR.M = 0;
DYGACTR.Props = (*(&((&NFFACTR_current)->Dybits)));
DYGACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(EYGACTR,mode17,17,DYGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(EYGACTR,mode17,17,DYGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8881: */
FYGACTR = (&((&NFFACTR_current)->Props)) ;
(*FYGACTR) = (A68_BITS )((*(&((&NFFACTR_current)->Props)))|(*(&((&NFFACTR_current)->Dybits))));
 /* line 8882: */
 /* line 8883: */
GYGACTR = (&((&NFFACTR_current)->Dybits)) ;
(*GYGACTR) = MQAACTR_z;
} 
else
{ 
HYGACTR = (&((&NFFACTR_current)->Lastid)) ;
(*HYGACTR)+=1;
 /* line 8884: */
IYGACTR.Type = APAACTR_xivardec;
IYGACTR.Iddec = IGFACTR_id;
 /* line 8885: */
A_CALLPROC(NL(Output),(A_UNITE(JYGACTR,mode12,12,IYGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(JYGACTR,mode12,12,IYGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 8886: */
KYGACTR = (CGFACTR_i==3);
if ( KYGACTR )
{KYGACTR = ((*NL(MFBACTR_t1))!=11);
}
if ( KYGACTR )
{ 
ZGFACTR_heap = A68_TRUE;
} 
 /* line 8887: */
 /* line 8888: */
 /* line 8891: */
(*MGFACTR_rid) = IGFACTR_id;
} 
break;
case 71: 
{ 
 /* line 8892: */
if ( (CGFACTR_i==1) )
{ 
LYGACTR.Type = XOAACTR_xvardec;
LYGACTR.Iddec = IGFACTR_id;
 /* line 8893: */
A_CALLPROC(NL(Output),(A_UNITE(MYGACTR,mode12,12,LYGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(MYGACTR,mode12,12,LYGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
else
{ 
NYGACTR = (CGFACTR_i==3);
if ( NYGACTR )
{ /* line 8894: */
NYGACTR = ((*NL(MFBACTR_t1))!=11);
}
if ( NYGACTR )
{ 
 /* line 8895: */
ZGFACTR_heap = A68_TRUE;
} 
} 
 /* line 8896: */
 /* line 8897: */
 /* line 8900: */
(*MGFACTR_rid) = IGFACTR_id;
} 
break;
case 72: 
 /* line 8901: */
OYGACTR = (*(&((&NFFACTR_current)->Props))) ;
if ( A_LB_GE(OYGACTR,YLAACTR_labbit) )
{ 
A_CALLPROC(NL(QJBACTR_fault),(176),(176,(NL(QJBACTR_fault)).nonlocals));
 /* line 8903: */
 /* line 8904: */
 /* line 8907: */
PYGACTR = (&((&NFFACTR_current)->Props)) ;
(*PYGACTR) = (A68_BITS )((*(&((&NFFACTR_current)->Props)))&~YLAACTR_labbit);
} 
break;
case 73: 
{ 
QYGACTR = (&((&FHFACTR_xcharpos)->Charpos)) ;
(*QYGACTR) = (*NL(LSAACTR_tind));
 /* line 8908: */
A_CALLPROC(NL(Output),(A_UNITE(RYGACTR,mode15,15,FHFACTR_xcharpos), (*NL(FZAACTR_outlevel))),(A_UNITE(RYGACTR,mode15,15,FHFACTR_xcharpos), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8909: */
DHFACTR_lab = (*(&((&NFFACTR_current)->Labs)));
 /* line 8910: */
for ( ;; )
{ 
SYGACTR = (DHFACTR_lab!=XQAACTR_nillab);
if ( SYGACTR )
{ /* line 8911: */
UYGACTR = (*(&(DHFACTR_lab->Name))) ;
SYGACTR = A_VC_NE(A_HISVEC(TYGACTR,UYGACTR,32,A68_CHAR ),A_HISVEC(VYGACTR,(*NL(PSAACTR_ident)),32,A68_CHAR ));
}
if ( !(SYGACTR) ) break;
DHFACTR_lab = (*(&(DHFACTR_lab->Rest)));
}
 /* line 8913: */
 /* line 8914: */
if ( (DHFACTR_lab==XQAACTR_nillab) )
{ 
 /* line 8915: */
WYGACTR.Name = (*NL(PSAACTR_ident));
WYGACTR.Labno = (*NL(DZAACTR_labno))+=1;
WYGACTR.Status = 1;
 /* line 8916: */
WYGACTR.Rest = (*(&((&NFFACTR_current)->Labs)));
XYGACTR = A_HEAP(A68_69 ) ;
(*XYGACTR) = WYGACTR ;
YYGACTR = (&((&NFFACTR_current)->Labs)) ;
DHFACTR_lab = (*YYGACTR) = XYGACTR;
} 
else
{ 
 /* line 8917: */
if ( ((*(&(DHFACTR_lab->Status)))==0) )
{ 
 /* line 8919: */
A_CALLPROC(NL(PZBACTR_faultp),(177, 0, 0, NL(PSAACTR_ident)),(177, 0, 0, NL(PSAACTR_ident),(NL(PZBACTR_faultp)).nonlocals));
} 
} 
 /* line 8921: */
ZYGACTR = (*(&((&NFFACTR_current)->Ids))) ;
IGFACTR_id = (*(&A_VINDEX(ZYGACTR,(*NL(TSAACTR_idhash)))));
 /* line 8922: */
for ( ;; )
{ 
AZGACTR = (IGFACTR_id!=TQAACTR_nilid);
if ( AZGACTR )
{ /* line 8923: */
AZGACTR = ((*(&(IGFACTR_id->Level)))==(*(&((&NFFACTR_current)->Level))));
}
if ( !(AZGACTR) ) break;
 /* line 8924: */
DZGACTR = (*(&(IGFACTR_id->Name))) ;
if ( A_VC_EQ(A_HISVEC(BZGACTR,(*NL(PSAACTR_ident)),32,A68_CHAR ),A_HISVEC(CZGACTR,DZGACTR,32,A68_CHAR )) )
{ 
 /* line 8926: */
A_CALLPROC(NL(PZBACTR_faultp),(205, 0, 0, NL(PSAACTR_ident)),(205, 0, 0, NL(PSAACTR_ident),(NL(PZBACTR_faultp)).nonlocals));
} 
 /* line 8927: */
 /* line 8928: */
IGFACTR_id = (*(&(IGFACTR_id->Rest)));
}
 /* line 8930: */
EZGACTR = (&(DHFACTR_lab->Status)) ;
(*EZGACTR) = 0;
 /* line 8931: */
FZGACTR = (&((&NFFACTR_current)->Props)) ;
(*FZGACTR) = (A68_BITS )((*(&((&NFFACTR_current)->Props)))|YLAACTR_labbit);
 /* line 8932: */
GZGACTR.Lab = DHFACTR_lab;
GZGACTR.Notsetting = A68_FALSE;
 /* line 8933: */
 /* line 8936: */
A_CALLPROC(NL(Output),(A_UNITE(HZGACTR,mode13,13,GZGACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(HZGACTR,mode13,13,GZGACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 74: 
 /* line 8938: */
if ( ((*NL(MFBACTR_t1))==17) )
{ 
 /* line 8939: */
 /* line 8940: */
JZGACTR = IZGACTR_b = (*(&((&((&XGFACTR_vlist)->V))->Props))) ;
if ( A_LB_GE(JZGACTR,YLAACTR_labbit) )
{ 
 /* line 8942: */
A_CALLPROC(NL(QJBACTR_fault),(178),(178,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 8943: */
 /* line 8944: */
if ( ((A68_BITS )(IZGACTR_b&DRAACTR_decprio)!=MQAACTR_z) )
{ 
 /* line 8946: */
 /* line 8947: */
 /* line 8950: */
(*NL(MFBACTR_t1)) = 93;
} 
} 
break;
case 75: 
{ 
(*NL(RYAACTR_enqv)) = (*(&((&XGFACTR_vlist)->V)));
 /* line 8951: */
A_CALLPROC(YTFACTR_uc,(0, &LZGACTR),(0, &LZGACTR,(YTFACTR_uc).nonlocals));
KZGACTR.V = LZGACTR;
KZGACTR.Type = ZMAACTR_xbegin;
 /* line 8952: */
KZGACTR.Rest = (A68_124 *)A68_NIL;
 /* line 8955: */
XGFACTR_vlist = KZGACTR;
} 
break;
case 76: 
{ 
 /* line 8956: */
if ( ((*NL(PYAACTR_formatproc))==0) )
{ 
 /* line 8957: */
MZGACTR.Mode = ELAACTR_int;
NZGACTR.Mode = CLAACTR_formatmode;
NZGACTR.Rest = (A68_54 *)A68_NIL;
 /* line 8958: */
OZGACTR = A_HEAP(A68_54 ) ;
(*OZGACTR) = NZGACTR ;
MZGACTR.Rest = OZGACTR;
PZGACTR = A_HEAP(A68_54 ) ;
(*PZGACTR) = MZGACTR ;
(*NL(OYAACTR_formatunion)) = A_CALLPROC(NL(OSBACTR_insertunion),(PZGACTR),(PZGACTR,(NL(OSBACTR_insertunion)).nonlocals));
 /* line 8959: */
 /* line 8960: */
QZGACTR.Mode = ELAACTR_int;
 /* line 8961: */
QZGACTR.Rest = (A68_54 *)A68_NIL;
 /* line 8962: */
RZGACTR = A_HEAP(A68_54 ) ;
(*RZGACTR) = QZGACTR ;
(*NL(PYAACTR_formatproc)) = A_CALLPROC(NL(RRBACTR_insertprocp),((*NL(OYAACTR_formatunion)), RZGACTR),((*NL(OYAACTR_formatunion)), RZGACTR,(NL(RRBACTR_insertprocp)).nonlocals));
} 
 /* line 8963: */
SZGACTR.Name = NL(AUAACTR_identformat);
SZGACTR.Props = LLAACTR_ccbit;
 /* line 8964: */
SZGACTR.Mode = (*NL(PYAACTR_formatproc));
SZGACTR.Rdenno = (*NL(CZAACTR_lastrd))+=1;
 /* line 8965: */
SZGACTR.Maxname = 0;
 /* line 8967: */
SZGACTR.Level = (*(&((&NFFACTR_current)->Level)));
SZGACTR.Rest = (*(&((&NFFACTR_current)->Rd)));
TZGACTR = A_LOC(A68_68 ) ;
(*TZGACTR) = SZGACTR ;
UZGACTR = (&((&NFFACTR_current)->Rd)) ;
(*UZGACTR) = TZGACTR;
 /* line 8968: */
CGFACTR_i = (*NL(OYAACTR_formatunion));
 /* line 8969: */
 /* line 8970: */
 /* line 8973: */
WGFACTR_formatcaseno = 0;
} 
break;
case 77: 
{ 
XFFACTR_doint = 0;
 /* line 8974: */
WFFACTR_dobits = MQAACTR_z;
 /* line 8975: */
VZGACTR = (&((&NFFACTR_current)->Labs)) ;
(*VZGACTR) = (*(&(External->Labs)));
 /* line 8976: */
WZGACTR = (&((&FHFACTR_xcharpos)->Charpos)) ;
(*WZGACTR) = (*NL(LSAACTR_tind));
 /* line 8977: */
A_CALLPROC(NL(Output),(A_UNITE(XZGACTR,mode15,15,FHFACTR_xcharpos), (*NL(FZAACTR_outlevel))),(A_UNITE(XZGACTR,mode15,15,FHFACTR_xcharpos), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8978: */
 /* line 8979: */
 /* line 8982: */
A_CALLPROC(NL(Output),(A_UNITE(YZGACTR,mode16,16,KPAACTR_xwloop), (*NL(FZAACTR_outlevel))),(A_UNITE(YZGACTR,mode16,16,KPAACTR_xwloop), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
break;
case 78: 
{ 
A_CALLPROC(NL(GFFACTR_range),((&NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &ZZGACTR),((&NFFACTR_current), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &ZZGACTR,(NL(GFFACTR_range)).nonlocals));
XGFACTR_vlist = ZZGACTR;
 /* line 8983: */
(*NL(FZAACTR_outlevel))-=1;
 /* line 8984: */
 /* line 8985: */
 /* line 8986: */
if ( ((*(&((&XGFACTR_vlist)->Rest)))==UQAACTR_nilvl) )
{ 
AAHACTR = (*(&((&XGFACTR_vlist)->V)));
} 
else
{ 
AAHACTR.Props = MQAACTR_z;
AAHACTR.Mode = (-1);
AAHACTR.Vlist = (&XGFACTR_vlist);
 /* line 8987: */
AAHACTR.Labs = (A68_69 *)A68_NIL;
} 
RGFACTR_v = AAHACTR;
 /* line 8988: */
BAHACTR.Fn = XNAACTR_xdo;
 /* line 8989: */
BAHACTR.M = YKAACTR_voidmode;
 /* line 8991: */
BAHACTR.Props = (A68_BITS )((A68_BITS )((*(&((&RGFACTR_v)->Props)))&GRAACTR_notdontpull)|(*(&((&NFFACTR_current)->Dybits))));
BAHACTR.Param = YKAACTR_voidmode;
A_CALLPROC(NL(Output),(A_UNITE(CAHACTR,mode17,17,BAHACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(CAHACTR,mode17,17,BAHACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8992: */
A_CALLPROC(NL(RYCACTR_strong),((&RGFACTR_v), YKAACTR_voidmode, A68_TRUE),((&RGFACTR_v), YKAACTR_voidmode, A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 8993: */
DAHACTR.Fn = UNAACTR_xsemi;
DAHACTR.M = 0;
DAHACTR.Props = (*(&((&NFFACTR_current)->Dybits)));
DAHACTR.Param = 0;
A_CALLPROC(NL(Output),(A_UNITE(EAHACTR,mode17,17,DAHACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(EAHACTR,mode17,17,DAHACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8994: */
FAHACTR.Fn = TNAACTR_xod;
FAHACTR.M = 0;
FAHACTR.Props = MQAACTR_z;
FAHACTR.Param = YKAACTR_voidmode;
A_CALLPROC(NL(Output),(A_UNITE(GAHACTR,mode17,17,FAHACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(GAHACTR,mode17,17,FAHACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 8995: */
HAHACTR = (&(External->Labs)) ;
(*HAHACTR) = (*(&((&NFFACTR_current)->Labs)));
 /* line 8996: */
 /* line 8997: */
 /* line 9000: */
goto KFFACTR_exitsc;
} 
break;
case 79: 
{ 
A_CALLPROC(NL(RYCACTR_strong),((&RGFACTR_v), ALAACTR_bool, A68_TRUE),((&RGFACTR_v), ALAACTR_bool, A68_TRUE,(NL(RYCACTR_strong)).nonlocals));
 /* line 9001: */
A_CALLPROC(NL(Output),(QKAACTR_up, (*NL(FZAACTR_outlevel))),(QKAACTR_up, (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 9002: */
 /* line 9003: */
IAHACTR = (*(&((&NFFACTR_current)->Props))) ;
if ( A_LB_GE(IAHACTR,YLAACTR_labbit) )
{ 
 /* line 9005: */
A_CALLPROC(NL(QJBACTR_fault),(169),(169,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 9006: */
JAHACTR.Fn = QNAACTR_xwhile;
 /* line 9007: */
JAHACTR.M = ALAACTR_bool;
 /* line 9009: */
JAHACTR.Props = (A68_BITS )((*(&((&NFFACTR_current)->Props)))|(*(&((&NFFACTR_current)->Dybits))));
JAHACTR.Param = YKAACTR_voidmode;
A_CALLPROC(NL(Output),(A_UNITE(KAHACTR,mode17,17,JAHACTR), ((*NL(FZAACTR_outlevel))-1)),(A_UNITE(KAHACTR,mode17,17,JAHACTR), ((*NL(FZAACTR_outlevel))-1),(NL(Output)).nonlocals));
 /* line 9010: */
 /* line 9011: */
 /* line 9014: */
A_CALLPROC(NL(Output),(SKAACTR_down, ((*NL(FZAACTR_outlevel))-1)),(SKAACTR_down, ((*NL(FZAACTR_outlevel))-1),(NL(Output)).nonlocals));
} 
break;
case 80: 
{ 
LAHACTR.Rid = MGFACTR_rid;
LAHACTR.Id = IGFACTR_id;
LAHACTR.Rest = VFFACTR_rididlist;
MAHACTR = A_LOC(A68_132 ) ;
(*MAHACTR) = LAHACTR ;
VFFACTR_rididlist = MAHACTR;
 /* line 9015: */
XFFACTR_doint+=1;
 /* line 9016: */
NAHACTR = (&((&NFFACTR_current)->Lastid)) ;
(*NAHACTR)-=XFFACTR_doint;
 /* line 9017: */
A_CALLPROC(YTFACTR_uc,(0, &OAHACTR),(0, &OAHACTR,(YTFACTR_uc).nonlocals));
RGFACTR_v = OAHACTR;
 /* line 9018: */
PAHACTR = (&((&NFFACTR_current)->Lastid)) ;
(*PAHACTR)+=XFFACTR_doint;
 /* line 9019: */
CGFACTR_i = (A68_INT )(A68_BITS )((A68_BITS )(DGFACTR_j = (*(&((&RGFACTR_v)->Mode))))&(A68_BITS )KQAACTR_refmark);
 /* line 9020: */
 /* line 9021: */
QAHACTR = (DGFACTR_j-CGFACTR_i) ;
RAHACTR = (*(&A_VINDEX(NL(KUAACTR_modes),QAHACTR))) ;
switch ( RAHACTR.mode )
{ 
case 7: /* REF STRUCT(INT,INT,INT)  */
SAHACTR_rv = (RAHACTR.data.mode7);
 /* line 9022: */
 /* line 9023: */
CGFACTR_i = ((*(&(SAHACTR_rv->Vecmode)))+CGFACTR_i);
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
TAHACTR_ra = (RAHACTR.data.mode8);
 /* line 9024: */
 /* line 9025: */
CGFACTR_i = ((*(&(TAHACTR_ra->Mode)))+CGFACTR_i);
break;
default: 
A_CALLPROC(NL(PZBACTR_faultp),(179, DGFACTR_j, 0, (A68_31 *)A68_NIL),(179, DGFACTR_j, 0, (A68_31 *)A68_NIL,(NL(PZBACTR_faultp)).nonlocals));
 /* line 9027: */
 /* line 9028: */
CGFACTR_i = ZKAACTR_faultmode;
break;
} 
 /* line 9029: */
 /* line 9030: */
 /* line 9033: */
UAHACTR = (&(IGFACTR_id->Mode)) ;
(*UAHACTR) = CGFACTR_i;
} 
break;
case 81: 
{ 
VAHACTR.Fn = SNAACTR_xforall;
VAHACTR.M = 0;
VAHACTR.Props = MQAACTR_z;
VAHACTR.Param = XFFACTR_doint;
A_CALLPROC(NL(Output),(A_UNITE(WAHACTR,mode17,17,VAHACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(WAHACTR,mode17,17,VAHACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 9034: */
 /* line 9035: */
XAHACTR = XFFACTR_doint;
for ( YAHACTR = 1;
YAHACTR <= XAHACTR;
YAHACTR += 1 )
{ 
ZAHACTR = (&((*(&(VFFACTR_rididlist->Id)))->Rest)) ;
(*ZAHACTR) = (*(*(&(VFFACTR_rididlist->Rid))));
 /* line 9036: */
ABHACTR = (*(&(VFFACTR_rididlist->Rid))) ;
(*ABHACTR) = (*(&(VFFACTR_rididlist->Id)));
 /* line 9037: */
BBHACTR.Type = CPAACTR_xforalldec;
BBHACTR.Iddec = (*(&(VFFACTR_rididlist->Id)));
A_CALLPROC(NL(Output),(A_UNITE(CBHACTR,mode12,12,BBHACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(CBHACTR,mode12,12,BBHACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 9038: */
 /* line 9039: */
VFFACTR_rididlist = (*(&(VFFACTR_rididlist->Rest)));
}
 /* line 9040: */
 /* line 9041: */
 /* line 9044: */
(*NL(FZAACTR_outlevel))+=1;
} 
break;
case 82: 
{ 
WFFACTR_dobits = (A68_BITS )(WFFACTR_dobits|NQAACTR_z1);
 /* line 9045: */
DBHACTR = (&(IGFACTR_id->Mode)) ;
(*DBHACTR) = ELAACTR_int;
 /* line 9046: */
 /* line 9047: */
 /* line 9050: */
EBHACTR = (&((&NFFACTR_current)->Lastid)) ;
(*EBHACTR)-=1;
} 
break;
case 83: 
{ 
A_CALLPROC(YTFACTR_uc,(ELAACTR_int, &FBHACTR),(ELAACTR_int, &FBHACTR,(YTFACTR_uc).nonlocals));
FBHACTR;
 /* line 9051: */
WFFACTR_dobits = (A68_BITS )(WFFACTR_dobits|(A68_BITS )2);
 /* line 9052: */
 /* line 9053: */
 /* line 9056: */
XFFACTR_doint+=1;
} 
break;
case 84: 
{ 
A_CALLPROC(YTFACTR_uc,(ELAACTR_int, &GBHACTR),(ELAACTR_int, &GBHACTR,(YTFACTR_uc).nonlocals));
GBHACTR;
 /* line 9057: */
WFFACTR_dobits = (A68_BITS )(WFFACTR_dobits|(A68_BITS )4);
 /* line 9058: */
 /* line 9059: */
 /* line 9062: */
XFFACTR_doint+=1;
} 
break;
case 85: 
{ 
A_CALLPROC(YTFACTR_uc,(ELAACTR_int, &HBHACTR),(ELAACTR_int, &HBHACTR,(YTFACTR_uc).nonlocals));
HBHACTR;
 /* line 9063: */
WFFACTR_dobits = (A68_BITS )(WFFACTR_dobits|(A68_BITS )8);
 /* line 9064: */
 /* line 9065: */
 /* line 9068: */
XFFACTR_doint+=1;
} 
break;
case 86: 
{ 
IBHACTR.Fn = PNAACTR_xfor;
IBHACTR.M = 0;
IBHACTR.Props = WFFACTR_dobits;
IBHACTR.Param = XFFACTR_doint;
A_CALLPROC(NL(Output),(A_UNITE(JBHACTR,mode17,17,IBHACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(JBHACTR,mode17,17,IBHACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 9069: */
 /* line 9070: */
if ( A_LB_GE(WFFACTR_dobits,NQAACTR_z1) )
{ 
(*MGFACTR_rid) = IGFACTR_id;
 /* line 9071: */
KBHACTR = (&((&NFFACTR_current)->Lastid)) ;
(*KBHACTR)+=1;
 /* line 9072: */
LBHACTR.Type = ZOAACTR_xfordec;
LBHACTR.Iddec = IGFACTR_id;
 /* line 9073: */
A_CALLPROC(NL(Output),(A_UNITE(MBHACTR,mode12,12,LBHACTR), (*NL(FZAACTR_outlevel))),(A_UNITE(MBHACTR,mode12,12,LBHACTR), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
} 
 /* line 9074: */
 /* line 9075: */
 /* line 9078: */
(*NL(FZAACTR_outlevel))+=1;
} 
break;
case 87: 
NBHACTR = ((*NL(MFBACTR_t1))!=11);
if ( NBHACTR )
{OBHACTR = (*NL(XZAACTR_burestrict));
if ( OBHACTR )
{OBHACTR = ((*NL(MFBACTR_t1))==13);
}
 /* line 9079: */
NBHACTR = !OBHACTR;
}
if ( NBHACTR )
{ 
A_CALLPROC(NL(QJBACTR_fault),(180),(180,(NL(QJBACTR_fault)).nonlocals));
 /* line 9081: */
PBHACTR.Props = MQAACTR_z;
PBHACTR.Mode = ZKAACTR_faultmode;
PBHACTR.Vlist = (A68_124 *)A68_NIL;
 /* line 9082: */
PBHACTR.Labs = (A68_69 *)A68_NIL;
RGFACTR_v = PBHACTR;
} 
else
{ 
QBHACTR = (&((&FHFACTR_xcharpos)->Charpos)) ;
(*QBHACTR) = (*NL(LSAACTR_tind));
 /* line 9083: */
A_CALLPROC(NL(Output),(A_UNITE(RBHACTR,mode15,15,FHFACTR_xcharpos), (*NL(FZAACTR_outlevel))),(A_UNITE(RBHACTR,mode15,15,FHFACTR_xcharpos), (*NL(FZAACTR_outlevel)),(NL(Output)).nonlocals));
 /* line 9084: */
 /* line 9085: */
 /* line 9088: */
SBHACTR = (&((&NFFACTR_current)->Dybits)) ;
(*SBHACTR) = (A68_BITS )((*(&((&NFFACTR_current)->Dybits)))|ZLAACTR_dontpullbit);
} 
break;
case 88: 
{ 
 /* line 9089: */
if ( (GGFACTR_type==2) )
{ 
 /* line 9091: */
A_CALLPROC(NL(QJBACTR_fault),(181),(181,(NL(QJBACTR_fault)).nonlocals));
} 
 /* line 9092: */
 /* line 9093: */
 /* line 9096: */
TBHACTR = (&((&OGFACTR_scam)->Mode)) ;
(*TBHACTR) = A_CALLPROC(NL(JGCACTR_deflex),((*(&((&OGFACTR_scam)->Mode)))),((*(&((&OGFACTR_scam)->Mode))),(NL(JGCACTR_deflex)).nonlocals));
} 
break;
case 89: 
{ 
OGFACTR_scam = (*NL(DEBACTR_lkscam));
 /* line 9097: */
 /* line 9098: */
 /* line 9101: */
GGFACTR_type = (*NL(CEBACTR_lktype));
} 
break;
case 90: 
 /* line 9102: */
if ( ((*NL(MDBACTR_cbiop))!=ADBACTR_biequals) )
{ 
 /* line 9104: */
 /* line 9107: */
A_CALLPROC(NL(QJBACTR_fault),(182),(182,(NL(QJBACTR_fault)).nonlocals));
} 
break;
case 91: 
 /* line 9108: */
if ( ((*NL(MFBACTR_t1))==74) )
{ 
 /* line 9109: */
siglongjmp(NL(XRAACTR_endcompile).label,1);
} 
else
{ 
A_CALLPROC(NL(QJBACTR_fault),(117),(117,(NL(QJBACTR_fault)).nonlocals));
 /* line 9111: */
 /* line 9112: */
 /* line 9115: */
(*NL(ITAACTR_supflts)) = FEBACTR_fltgap;
} 
break;
default: 
 /* line 9117: */
 /* line 9118: */
A_CALLPROC(NL(VJBACTR_abort),(207),(207,(NL(VJBACTR_abort)).nonlocals));
break;
} 
}
 /* line 9121: */
KFFACTR_exitsc:
 /* line 9122: */
if ( ((*(&((&NFFACTR_current)->Lastid)))>(*NL(GZAACTR_maxident))) )
{ 
 /* line 9123: */
(*NL(GZAACTR_maxident)) = (*(&((&NFFACTR_current)->Lastid)));
} 
 /* line 9124: */
(*NL(QYAACTR_globcurrent)) = External;
 /* line 9125: */
 /* line 9127: */
UBHACTR = XGFACTR_vlist;
} 
A_PROC_EXIT(range);
*ReturnedValue = (UBHACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZPAACTR_generator(A68_BOOL  YPAACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  AQAACTR;  /* clause result */
A68_VC  BQAACTR;  /* OPERATORS - dynamic generator */
{ 
BQAACTR.upb = 0 ;
( YPAACTR_anonymous? A_VLOC(A68_CHAR ,BQAACTR): A_VHEAP(A68_CHAR ,BQAACTR) );
AQAACTR = BQAACTR;
} 
*ReturnedValue = (AQAACTR);
return;
} 
#undef NL
 /* line 636: */
 /* line 637: */
 /* line 638: */
 /* line 639: */
 /* line 640: */
 /* line 641: */
 /* line 643: */

A68_BOOL  URAACTR_compile(A68_134  Input, A68_135  Output, A68_136  Flt, A68_137  Message, A68_138  Givemoduledetails, A68_139  Givespec, A68_140  Lookup, A68_142  Charset)
{ 
A68_BOOL  ZRAACTR_isint;
A68_43  CSAACTR_generator;   /* proc value of non-global proc */
A68_VC  ISAACTR;  /* avoid structure result */
A68_VC  HSAACTR_textbuff;
A68_VC  KSAACTR;  /* avoid structure result */
A68_VC  JSAACTR_globfbuff;
A68_INT  LSAACTR_tind;
A68_INT  MSAACTR_textend;
A68_INT  NSAACTR_find;
A68_31  OSAACTR_compsymb;
A68_31  PSAACTR_ident;
A68_INT  QSAACTR_compsize;
A68_INT  RSAACTR_comphash;
A68_INT  SSAACTR_idsize;
A68_INT  TSAACTR_idhash;
A68_43  VSAACTR_generator;   /* proc value of non-global proc */
A68_VC  BTAACTR;  /* avoid structure result */
A68_VC  ATAACTR_string;
A68_VC  DTAACTR;  /* avoid structure result */
A68_VC  CTAACTR_str;
A68_INT  ETAACTR_stringsize;
A68_INT  FTAACTR_noofchars;
A68_INT  GTAACTR_stringbase;
A68_INT  HTAACTR_iv;
A68_INT  ITAACTR_supflts;
A68_144  KTAACTR_idmess;   /* proc value of non-global proc */
A68_31  XTAACTR_spaces;
A68_31  YTAACTR_re;
A68_31  ZTAACTR_im;
A68_31  AUAACTR_identformat;
A68_INT  BUAACTR_typechar1;
A68_INT  CUAACTR;  /* YIELD */
A68_CHAR * DUAACTR_string1;
A68_145  FUAACTR_generator;   /* proc value of non-global proc */
A68_107  LUAACTR;  /* avoid structure result */
A68_107  KUAACTR_modes;
A68_126  MUAACTR;  /* collateral clause result */
A68_146  OUAACTR_generator;   /* proc value of non-global proc */
A68_127  TUAACTR;  /* avoid structure result */
A68_147  VUAACTR_generator;   /* proc value of non-global proc */
A68_128  AVAACTR;  /* avoid structure result */
A68_126  BVAACTR_globinfo;
A68_INT  CVAACTR_i;
A68_127  DVAACTR;  /* OPERATORS - simple index */
A68_67 ** EVAACTR;  /* YIELD */
A68_128  FVAACTR;  /* OPERATORS - simple index */
A68_110 ** GVAACTR;  /* YIELD */
A68_58  HVAACTR_scx1;
A68_58  IVAACTR_scx2;
A68_58  JVAACTR_cx1;
A68_58  KVAACTR_cx2;
A68_58  LVAACTR_lcx1;
A68_58  MVAACTR_lcx2;
A68_58  NVAACTR_llcx1;
A68_58  OVAACTR_llcx2;
A68_59  PVAACTR_st1;
A68_59  QVAACTR_st2;
A68_59  RVAACTR_st3;
A68_59  SVAACTR_st4;
A68_61  TVAACTR;  /* collateral clause result */
A68_61  UVAACTR_vecchar1;
A68_62  VVAACTR;  /* collateral clause result */
A68_62  WVAACTR_arraychar1;
A68_54  XVAACTR;  /* collateral clause result */
A68_54  YVAACTR_boolnil;
A68_59  ZVAACTR;  /* collateral clause result */
A68_58  AWAACTR;  /* collateral clause result */
A68_58  BWAACTR;  /* collateral clause result */
A68_59  CWAACTR;  /* collateral clause result */
A68_58  DWAACTR;  /* collateral clause result */
A68_58  EWAACTR;  /* collateral clause result */
A68_59  FWAACTR;  /* collateral clause result */
A68_58  GWAACTR;  /* collateral clause result */
A68_58  HWAACTR;  /* collateral clause result */
A68_59  IWAACTR;  /* collateral clause result */
A68_58  JWAACTR;  /* collateral clause result */
A68_58  KWAACTR;  /* collateral clause result */
A68_148  LWAACTR;  /* collateral clause result */
A68_66  MWAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  NWAACTR;  /* YIELD */
A68_66  OWAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  PWAACTR;  /* YIELD */
A68_66  QWAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  RWAACTR;  /* YIELD */
A68_66  SWAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  TWAACTR;  /* YIELD */
A68_66  UWAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  VWAACTR;  /* YIELD */
A68_66  WWAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  XWAACTR;  /* YIELD */
A68_66  YWAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  ZWAACTR;  /* YIELD */
A68_66  AXAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  BXAACTR;  /* YIELD */
A68_66  CXAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  DXAACTR;  /* YIELD */
A68_66  EXAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  FXAACTR;  /* YIELD */
A68_66  GXAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  HXAACTR;  /* YIELD */
A68_66  IXAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  JXAACTR;  /* YIELD */
A68_66  KXAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  LXAACTR;  /* YIELD */
A68_66  MXAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  NXAACTR;  /* YIELD */
A68_66  OXAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  PXAACTR;  /* YIELD */
A68_66  QXAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  RXAACTR;  /* YIELD */
A68_66  SXAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  TXAACTR;  /* YIELD */
A68_66  UXAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  VXAACTR;  /* YIELD */
A68_66  WXAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  XXAACTR;  /* YIELD */
A68_66  YXAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  ZXAACTR;  /* YIELD */
A68_66  AYAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  BYAACTR;  /* YIELD */
A68_66  CYAACTR;  /* OPERATORS - mode -> union mode */
A68_66  DYAACTR;  /* OPERATORS - mode -> union mode */
A68_66  EYAACTR;  /* OPERATORS - mode -> union mode */
A68_66  FYAACTR;  /* OPERATORS - mode -> union mode */
A68_66  GYAACTR;  /* OPERATORS - mode -> union mode */
A68_66  HYAACTR;  /* OPERATORS - mode -> union mode */
A68_66  IYAACTR;  /* OPERATORS - mode -> union mode */
A68_INT  JYAACTR;  /* YIELD */
A68_66  KYAACTR;  /* OPERATORS - mode -> union mode */
A68_66  LYAACTR;  /* OPERATORS - mode -> union mode */
A68_107  MYAACTR;  /* OPERATORS - istruct -> vector */
A68_107  NYAACTR_initmodes;
A68_INT  OYAACTR_formatunion;
A68_INT  PYAACTR_formatproc;
A68_126 * QYAACTR_globcurrent;
A68_125  RYAACTR_enqv;
A68_INT  SYAACTR_modedecdepth;
A68_53 * TYAACTR_untreated;
A68_67 * UYAACTR_ri;
A68_INT  VYAACTR_lastmode;
A68_107  WYAACTR;  /* OPERATORS - trim index */
A68_107  XYAACTR;  /* YIELD */
A68_INT  YYAACTR_newmode1;
A68_INT  ZYAACTR_nolongs;
A68_INT  AZAACTR_globccmode;
A68_31  BZAACTR_nullid;
A68_INT  CZAACTR_lastrd;
A68_INT  DZAACTR_labno;
A68_INT  EZAACTR_rdmode;
A68_INT  FZAACTR_outlevel;
A68_INT  GZAACTR_maxident;
A68_91  HZAACTR_xm;
A68_114 * IZAACTR_prl;
A68_114 * JZAACTR_tempprl;
A68_118 * KZAACTR_close;
A68_121 * LZAACTR_kl;
A68_121 ** MZAACTR_rkl;
A68_116 * NZAACTR_substack;
A68_116 * OZAACTR_sublist;
A68_116 * PZAACTR_tsubst;
A68_116 * QZAACTR_testsubst;
A68_INT  RZAACTR_substlevel;
A68_INT  SZAACTR_moduleno;
A68_INT  TZAACTR_modulelevel;
A68_INT  UZAACTR_nextmodule;
A68_INT  VZAACTR_nextlibno;
A68_INT  WZAACTR_lastkept;
A68_BOOL  XZAACTR_burestrict;
A68_146  ZZAACTR_generator;   /* proc value of non-global proc */
A68_127  FABACTR;  /* avoid structure result */
A68_127  EABACTR_libids;
A68_147  HABACTR_generator;   /* proc value of non-global proc */
A68_128  NABACTR;  /* avoid structure result */
A68_128  MABACTR_libinds;
A68_INT  OABACTR_i;
A68_67 ** PABACTR;  /* YIELD */
A68_110 ** QABACTR;  /* YIELD */
A68_112 * RABACTR_concheck;
A68_INT * SABACTR;  /* YIELD */
A68_BOOL  GBBACTR_lastidchanged;
A68_BOOL  HBBACTR_incom;
A68_INT  IBBACTR_noofstrings;
A68_INT  JBBACTR_oldtind;
A68_VC  KBBACTR;  /* OPERATORS - trim index */
A68_VC  LBBACTR_textbuff1;
A68_150  MBBACTR_abort1;
A68_151  OBBACTR_generator;   /* proc value of non-global proc */
A68_100  UBBACTR;  /* avoid structure result */
A68_100  TBBACTR_brackets;
A68_INT  VBBACTR_brind;
A68_INT  WBBACTR_wrongord;
A68_INT  XBBACTR_wrongcrd;
A68_INT  YBBACTR_wronglevel;
A68_31  GDBACTR_id1;
A68_INT  HDBACTR_strsize;
A68_INT  IDBACTR_strbase;
A68_52 * JDBACTR_decmode;
A68_110 * KDBACTR_cindic;
A68_108 * LDBACTR_cinst;
A68_INT  MDBACTR_cbiop;
A68_BOOL  NDBACTR_clibop;
A68_INT  ODBACTR_next;
A68_INT  PDBACTR_bangtype;
A68_INT  QDBACTR_look;
A68_INT  WDBACTR_recoverdepth;
A68_INT  XDBACTR_nscreader;
A68_133 * YDBACTR_lkids;
A68_133 ** ZDBACTR_lkend;
A68_INT  AEBACTR_lkinserts;
A68_INT  BEBACTR_lkmodeins;
A68_INT  CEBACTR_lktype;
A68_52  DEBACTR_lkscam;
A68_INT  EEBACTR_noflts;
A68_BOOL  GEBACTR_fulldiags;
A68_BOOL  HEBACTR_inprogram;
A68_152  IEBACTR;  /* collateral clause result */
A68_152  JEBACTR_insertsn;
A68_153  KEBACTR;  /* collateral clause result */
A68_153  LEBACTR_ignorablen;
A68_154  MEBACTR;  /* collateral clause result */
A68_154  NEBACTR_nonducstart;
A68_155  OEBACTR;  /* collateral clause result */
A68_155  PEBACTR_insertsf;
A68_156  QEBACTR;  /* collateral clause result */
A68_156  REBACTR_ignorablef;
A68_157  SEBACTR;  /* collateral clause result */
A68_157  TEBACTR_nonpicstart;
A68_VC  WEBACTR_sidcode;
A68_INT  AFBACTR_upbofsidstack;
A68_151  CFBACTR_generator;   /* proc value of non-global proc */
A68_100  IFBACTR;  /* avoid structure result */
A68_100  HFBACTR_sidstack;
A68_INT  JFBACTR_stind;
A68_INT  KFBACTR_crts;
A68_INT  LFBACTR_failpos;
A68_INT  MFBACTR_t1;
A68_INT  NFBACTR_sidbwdm;
A68_INT  OFBACTR_boolwds3;
A68_159  PFBACTR_analyser;   /* proc value of non-global proc */
A68_160  WGBACTR_checkinsert;   /* proc value of non-global proc */
A68_163  IIBACTR;  /* collateral clause result */
A68_162  JIBACTR;  /* OPERATORS - istruct -> vector */
A68_162  KIBACTR_diops;
A68_166  LIBACTR;  /* collateral clause result */
A68_165  MIBACTR;  /* OPERATORS - istruct -> vector */
A68_165  NIBACTR_monops;
A68_BOOL  SIBACTR_moreinput;
A68_47  UIBACTR_faultchars;   /* proc value of non-global proc */
A68_150  QJBACTR_fault;   /* proc value of non-global proc */
A68_150  VJBACTR_abort;   /* proc value of non-global proc */
A68_jmp_buf VRAACTR_endcompile2;
A68_159  ZJBACTR_primread;   /* proc value of non-global proc */
A68_159  CPBACTR_fprimread;   /* proc value of non-global proc */
A68_169  RRBACTR_insertprocp;   /* proc value of non-global proc */
A68_170  OSBACTR_insertunion;   /* proc value of non-global proc */
A68_171  LTBACTR_insertstrct;   /* proc value of non-global proc */
A68_172  LUBACTR_insertprc;   /* proc value of non-global proc */
A68_173  FVBACTR_insertarray;   /* proc value of non-global proc */
A68_174  ZVBACTR_insertvec;   /* proc value of non-global proc */
A68_174  TWBACTR_insertis;   /* proc value of non-global proc */
A68_172  LXBACTR_insertassmntproc;   /* proc value of non-global proc */
A68_175  UXBACTR_opproc;   /* proc value of non-global proc */
A68_176  NYBACTR_heapvalue;   /* proc value of non-global proc */
A68_176  VYBACTR_downandups;   /* proc value of non-global proc */
A68_176  BZBACTR_tidyv;   /* proc value of non-global proc */
A68_178  PZBACTR_faultp;   /* proc value of non-global proc */
A68_172  VECACTR_marker;   /* proc value of non-global proc */
A68_172  ZFCACTR_assmarker;   /* proc value of non-global proc */
A68_172  JGCACTR_deflex;   /* proc value of non-global proc */
A68_172  ZHCACTR_enflex;   /* proc value of non-global proc */
A68_172  ZICACTR_mproc;   /* proc value of non-global proc */
A68_176  EJCACTR_deref;   /* proc value of non-global proc */
A68_176  LJCACTR_deproc;   /* proc value of non-global proc */
A68_172  XJCACTR_pmode;   /* proc value of non-global proc */
A68_BOOL  GKCACTR_deprefable;
A68_184  HKCACTR_coerce1;
A68_185  MKCACTR_depref;   /* proc value of non-global proc */
A68_172  XKCACTR_weakmode;   /* proc value of non-global proc */
A68_186  MLCACTR_unite;   /* proc value of non-global proc */
A68_172  YLCACTR_makeflex;   /* proc value of non-global proc */
A68_172  HMCACTR_strbd;   /* proc value of non-global proc */
A68_187  YMCACTR_strproc;   /* proc value of non-global proc */
A68_184  OSCACTR_coerce;   /* proc value of non-global proc */
A68_189  QWCACTR_hcfoftwo;   /* proc value of non-global proc */
A68_190  CXCACTR_hcf;   /* proc value of non-global proc */
A68_191  MXCACTR_firmto;   /* proc value of non-global proc */
A68_192  BYCACTR_ismode;   /* proc value of non-global proc */
A68_193  RYCACTR_strong;   /* proc value of non-global proc */
A68_176  OBDACTR_weak;   /* proc value of non-global proc */
A68_195  VBDACTR_findbiop;   /* proc value of non-global proc */
A68_150  EEDACTR_readcom;   /* proc value of non-global proc */
A68_196  FFDACTR_bumodule;
A68_159  GFDACTR_unlook;   /* proc value of non-global proc */
A68_172  LFDACTR_reader;   /* proc value of non-global proc */
A68_INT * PHDACTR_last_flex;
A68_199  RHDACTR_generator;   /* proc value of non-global proc */
A68_198  XHDACTR;  /* avoid structure result */
A68_198  WHDACTR_test_flex;
A68_200  BIDACTR_equality;   /* proc value of non-global proc */
A68_201  PLDACTR_mcond;   /* proc value of non-global proc */
A68_202  OMDACTR_dynamic;   /* proc value of non-global proc */
A68_203  YMDACTR_testkept;   /* proc value of non-global proc */
A68_205  YNDACTR_loadmodeproc;   /* proc value of non-global proc */
A68_206  LODACTR_treatam;   /* proc value of non-global proc */
A68_208  BTDACTR_modevars;   /* proc value of non-global proc */
A68_209  IUDACTR_substitute;   /* proc value of non-global proc */
A68_208  VVDACTR_checkmodes;   /* proc value of non-global proc */
A68_212  HWDACTR_flattenunion;   /* proc value of non-global proc */
A68_214  LXDACTR_accidental_eqs;   /* proc value of non-global proc */
A68_150  VCEACTR_assign;   /* proc value of non-global proc */
A68_219  RJEACTR_findproxy;   /* proc value of non-global proc */
A68_INT  DKEACTR_maxchar2;
A68_220  KKEACTR_simplespec;   /* proc value of non-global proc */
A68_225  WTEACTR_treatspec;   /* proc value of non-global proc */
A68_227  HVEACTR_closure;   /* proc value of non-global proc */
A68_122 * GYEACTR_mdone;
A68_122 * HYEACTR_kmfree;
A68_229  NYEACTR_makekeepinfo;   /* proc value of non-global proc */
A68_230  XCFACTR_addtokl;   /* proc value of non-global proc */
A68_196  SDFACTR_anonymous;   /* proc value of non-global proc */
A68_231  JEFACTR_findid;   /* proc value of non-global proc */
A68_232  GFFACTR_range;   /* proc value of non-global proc */
A68_jmp_buf XRAACTR_endcompile;
A68_124  VBHACTR;  /* avoid structure result */
A68_INT  WBHACTR;  /* clause result */
A68_69 ** XBHACTR;  /* YIELD */
A68_INT  YBHACTR_i;
A68_BOOL  ZBHACTR;  /* optbool result */
A68_BOOL  ACHACTR;  /* clause result */
if ( sigsetjmp( VRAACTR_endcompile2.label,1) ) goto WRAACTR_endcompile2;
if ( sigsetjmp( XRAACTR_endcompile.label,1) ) goto YRAACTR_endcompile;
A_PROC_ENTRY(compile);
 /* line 644: */
 /* line 657: */
{ 
ZRAACTR_isint = A68_TRUE;
 /* line 658: */
 /* line 659: */
A_CLOSURE( CSAACTR_generator, DSAACTR_generator, ESAACTR_generator );
A_CALLPROC(CSAACTR_generator,(A68_TRUE, &ISAACTR),(A68_TRUE, &ISAACTR,(CSAACTR_generator).nonlocals));
HSAACTR_textbuff = ISAACTR;
A_CALLPROC(CSAACTR_generator,(A68_TRUE, &KSAACTR),(A68_TRUE, &KSAACTR,(CSAACTR_generator).nonlocals));
JSAACTR_globfbuff = KSAACTR;
 /* line 660: */
LSAACTR_tind = 0;
MSAACTR_textend = 0;
 /* line 661: */
 /* line 662: */
TSAACTR_idhash = 1;
 /* line 663: */
A_CLOSURE( VSAACTR_generator, WSAACTR_generator, XSAACTR_generator );
A_CALLPROC(VSAACTR_generator,(A68_TRUE, &BTAACTR),(A68_TRUE, &BTAACTR,(VSAACTR_generator).nonlocals));
ATAACTR_string = BTAACTR;
A_CALLPROC(VSAACTR_generator,(A68_TRUE, &DTAACTR),(A68_TRUE, &DTAACTR,(VSAACTR_generator).nonlocals));
CTAACTR_str = DTAACTR;
 /* line 664: */
ETAACTR_stringsize = 1;
 /* line 665: */
ITAACTR_supflts = 0;
 /* line 667: */
A_CLOSURE( KTAACTR_idmess, LTAACTR_idmess, MTAACTR_idmess );
(( MTAACTR_idmess * ) ( KTAACTR_idmess.nonlocals )) -> Message = Message;
 /* line 679: */
XTAACTR_spaces = A_CALLPROC(KTAACTR_idmess,(64),(64,(KTAACTR_idmess).nonlocals));
 /* line 680: */
YTAACTR_re = A_CALLPROC(KTAACTR_idmess,(65),(65,(KTAACTR_idmess).nonlocals));
 /* line 681: */
ZTAACTR_im = A_CALLPROC(KTAACTR_idmess,(66),(66,(KTAACTR_idmess).nonlocals));
 /* line 682: */
AUAACTR_identformat = A_CALLPROC(KTAACTR_idmess,(63),(63,(KTAACTR_idmess).nonlocals));
 /* line 684: */
 /* line 685: */
CUAACTR = 1 ;
DUAACTR_string1 = (&A_VINDEX(ATAACTR_string,CUAACTR));
 /* line 687: */
A_CLOSURE( FUAACTR_generator, GUAACTR_generator, HUAACTR_generator );
A_CALLPROC(FUAACTR_generator,(A68_TRUE, &LUAACTR),(A68_TRUE, &LUAACTR,(FUAACTR_generator).nonlocals));
KUAACTR_modes = LUAACTR;
 /* line 688: */
LRAACTR_freevl = (A68_124 *)A68_NIL;
 /* line 690: */
A_CLOSURE( OUAACTR_generator, PUAACTR_generator, QUAACTR_generator );
 /* line 691: */
A_CALLPROC(OUAACTR_generator,(A68_TRUE, &TUAACTR),(A68_TRUE, &TUAACTR,(OUAACTR_generator).nonlocals));
MUAACTR.Ids = TUAACTR;
A_CLOSURE( VUAACTR_generator, WUAACTR_generator, XUAACTR_generator );
A_CALLPROC(VUAACTR_generator,(A68_TRUE, &AVAACTR),(A68_TRUE, &AVAACTR,(VUAACTR_generator).nonlocals));
MUAACTR.Indics = AVAACTR;
MUAACTR.Labs = (A68_69 *)A68_NIL;
 /* line 692: */
MUAACTR.Rd = (A68_68 *)A68_NIL;
MUAACTR.Lastid = 3;
MUAACTR.Props = MQAACTR_z;
 /* line 693: */
MUAACTR.Dybits = MQAACTR_z;
MUAACTR.Level = 0;
BVAACTR_globinfo = MUAACTR;
 /* line 694: */
 /* line 695: */
for ( CVAACTR_i = 1;
CVAACTR_i <= 64;
CVAACTR_i += 1 )
{ 
DVAACTR = (*(&((&BVAACTR_globinfo)->Ids))) ;
EVAACTR = (&A_VINDEX(DVAACTR,CVAACTR_i)) ;
(*EVAACTR) = (A68_67 *)A68_NIL;
 /* line 696: */
 /* line 697: */
FVAACTR = (*(&((&BVAACTR_globinfo)->Indics))) ;
GVAACTR = (&A_VINDEX(FVAACTR,CVAACTR_i)) ;
(*GVAACTR) = (A68_110 *)A68_NIL;
}
 /* line 699: */
 /* line 700: */
 /* line 701: */
TVAACTR.Rdenno = 2;
TVAACTR.Vecmode = BLAACTR_char;
TVAACTR.Deflex = 0;
UVAACTR_vecchar1 = TVAACTR;
 /* line 702: */
VVAACTR.Rdenno = 2;
VVAACTR.Mode = BLAACTR_char;
VVAACTR.Nods = 1;
VVAACTR.Deflex = 0;
WVAACTR_arraychar1 = VVAACTR;
 /* line 703: */
XVAACTR.Mode = ALAACTR_bool;
XVAACTR.Rest = (A68_54 *)A68_NIL;
YVAACTR_boolnil = XVAACTR;
 /* line 705: */
ZVAACTR.Rdenno = 1;
ZVAACTR.Deflex = 0;
AWAACTR.Mode = 18;
AWAACTR.Fieldno = 1;
AWAACTR.Name = YTAACTR_re;
BWAACTR.Mode = 18;
BWAACTR.Fieldno = 2;
BWAACTR.Name = ZTAACTR_im;
BWAACTR.Rest = (A68_58 *)A68_NIL;
IVAACTR_scx2 = BWAACTR ;
AWAACTR.Rest = (&IVAACTR_scx2);
HVAACTR_scx1 = AWAACTR ;
ZVAACTR.Sels = (&HVAACTR_scx1);
PVAACTR_st1 = ZVAACTR;
 /* line 706: */
CWAACTR.Rdenno = 1;
CWAACTR.Deflex = 0;
DWAACTR.Mode = 19;
DWAACTR.Fieldno = 1;
DWAACTR.Name = YTAACTR_re;
EWAACTR.Mode = 19;
EWAACTR.Fieldno = 2;
EWAACTR.Name = ZTAACTR_im;
EWAACTR.Rest = (A68_58 *)A68_NIL;
KVAACTR_cx2 = EWAACTR ;
DWAACTR.Rest = (&KVAACTR_cx2);
JVAACTR_cx1 = DWAACTR ;
CWAACTR.Sels = (&JVAACTR_cx1);
QVAACTR_st2 = CWAACTR;
 /* line 707: */
FWAACTR.Rdenno = 1;
FWAACTR.Deflex = 0;
GWAACTR.Mode = 20;
GWAACTR.Fieldno = 1;
GWAACTR.Name = YTAACTR_re;
HWAACTR.Mode = 20;
HWAACTR.Fieldno = 2;
HWAACTR.Name = ZTAACTR_im;
HWAACTR.Rest = (A68_58 *)A68_NIL;
MVAACTR_lcx2 = HWAACTR ;
GWAACTR.Rest = (&MVAACTR_lcx2);
LVAACTR_lcx1 = GWAACTR ;
FWAACTR.Sels = (&LVAACTR_lcx1);
RVAACTR_st3 = FWAACTR;
 /* line 708: */
IWAACTR.Rdenno = 1;
IWAACTR.Deflex = 0;
JWAACTR.Mode = 21;
JWAACTR.Fieldno = 1;
JWAACTR.Name = YTAACTR_re;
KWAACTR.Mode = 21;
KWAACTR.Fieldno = 2;
KWAACTR.Name = ZTAACTR_im;
KWAACTR.Rest = (A68_58 *)A68_NIL;
OVAACTR_llcx2 = KWAACTR ;
JWAACTR.Rest = (&OVAACTR_llcx2);
NVAACTR_llcx1 = JWAACTR ;
IWAACTR.Sels = (&NVAACTR_llcx1);
SVAACTR_st4 = IWAACTR;
 /* line 710: */
NWAACTR = 1 ;
LWAACTR.data[0] = A_UNITE(MWAACTR,mode1,1,NWAACTR);
PWAACTR = 2 ;
LWAACTR.data[1] = A_UNITE(OWAACTR,mode1,1,PWAACTR);
RWAACTR = 3 ;
LWAACTR.data[2] = A_UNITE(QWAACTR,mode1,1,RWAACTR);
TWAACTR = 4 ;
LWAACTR.data[3] = A_UNITE(SWAACTR,mode1,1,TWAACTR);
VWAACTR = 5 ;
LWAACTR.data[4] = A_UNITE(UWAACTR,mode1,1,VWAACTR);
XWAACTR = 6 ;
LWAACTR.data[5] = A_UNITE(WWAACTR,mode1,1,XWAACTR);
ZWAACTR = 7 ;
LWAACTR.data[6] = A_UNITE(YWAACTR,mode1,1,ZWAACTR);
BXAACTR = 8 ;
LWAACTR.data[7] = A_UNITE(AXAACTR,mode1,1,BXAACTR);
DXAACTR = 9 ;
LWAACTR.data[8] = A_UNITE(CXAACTR,mode1,1,DXAACTR);
FXAACTR = 11 ;
LWAACTR.data[9] = A_UNITE(EXAACTR,mode1,1,FXAACTR);
HXAACTR = 11 ;
LWAACTR.data[10] = A_UNITE(GXAACTR,mode1,1,HXAACTR);
JXAACTR = 11 ;
LWAACTR.data[11] = A_UNITE(IXAACTR,mode1,1,JXAACTR);
 /* line 711: */
LXAACTR = 11 ;
LWAACTR.data[12] = A_UNITE(KXAACTR,mode1,1,LXAACTR);
NXAACTR = 15 ;
LWAACTR.data[13] = A_UNITE(MXAACTR,mode1,1,NXAACTR);
PXAACTR = 15 ;
LWAACTR.data[14] = A_UNITE(OXAACTR,mode1,1,PXAACTR);
RXAACTR = 15 ;
LWAACTR.data[15] = A_UNITE(QXAACTR,mode1,1,RXAACTR);
TXAACTR = 15 ;
LWAACTR.data[16] = A_UNITE(SXAACTR,mode1,1,TXAACTR);
VXAACTR = 19 ;
LWAACTR.data[17] = A_UNITE(UXAACTR,mode1,1,VXAACTR);
XXAACTR = 19 ;
LWAACTR.data[18] = A_UNITE(WXAACTR,mode1,1,XXAACTR);
ZXAACTR = 19 ;
LWAACTR.data[19] = A_UNITE(YXAACTR,mode1,1,ZXAACTR);
 /* line 712: */
BYAACTR = 19 ;
LWAACTR.data[20] = A_UNITE(AYAACTR,mode1,1,BYAACTR);
LWAACTR.data[21] = A_UNITE(CYAACTR,mode4,4,(&PVAACTR_st1));
LWAACTR.data[22] = A_UNITE(DYAACTR,mode4,4,(&QVAACTR_st2));
LWAACTR.data[23] = A_UNITE(EYAACTR,mode4,4,(&RVAACTR_st3));
LWAACTR.data[24] = A_UNITE(FYAACTR,mode4,4,(&SVAACTR_st4));
LWAACTR.data[25] = A_UNITE(GYAACTR,mode7,7,(&UVAACTR_vecchar1));
 /* line 713: */
LWAACTR.data[26] = A_UNITE(HYAACTR,mode8,8,(&WVAACTR_arraychar1));
JYAACTR = 28 ;
LWAACTR.data[27] = A_UNITE(IYAACTR,mode1,1,JYAACTR);
 /* line 714: */
LWAACTR.data[28] = A_UNITE(KYAACTR,mode1,1,JLAACTR_xtype);
LWAACTR.data[29] = A_UNITE(LYAACTR,mode1,1,KLAACTR_ytype);
NYAACTR_initmodes = A_HISVEC(MYAACTR,LWAACTR,30,A68_66 );
 /* line 716: */
OYAACTR_formatunion = 0;
PYAACTR_formatproc = 0;
 /* line 718: */
 /* line 719: */
 /* line 720: */
SYAACTR_modedecdepth = 0;
 /* line 721: */
TYAACTR_untreated = (A68_53 *)A68_NIL;
 /* line 722: */
 /* line 723: */
VYAACTR_lastmode = NYAACTR_initmodes.upb;
 /* line 724: */
XYAACTR = A_VTRIM(WYAACTR,(KUAACTR_modes),A_VTSCRIPT(&(WYAACTR.upb),(KUAACTR_modes).upb,1,VYAACTR_lastmode)) ;
A_VASSIGN2(NYAACTR_initmodes,XYAACTR,A68_66 );
 /* line 725: */
YYAACTR_newmode1 = (VYAACTR_lastmode+1);
 /* line 726: */
ZYAACTR_nolongs = 0;
 /* line 727: */
BZAACTR_nullid = A_CALLPROC(KTAACTR_idmess,(59),(59,(KTAACTR_idmess).nonlocals));
 /* line 728: */
CZAACTR_lastrd = EKAACTR_startrd;
DZAACTR_labno = 1;
FZAACTR_outlevel = 1;
GZAACTR_maxident = 0;
 /* line 729: */
 /* line 731: */
IZAACTR_prl = (A68_114 *)A68_NIL;
 /* line 732: */
KZAACTR_close = (A68_118 *)A68_NIL;
 /* line 733: */
LZAACTR_kl = (A68_121 *)A68_NIL;
 /* line 734: */
MZAACTR_rkl = (&LZAACTR_kl);
 /* line 735: */
NZAACTR_substack = (A68_116 *)A68_NIL;
OZAACTR_sublist = (A68_116 *)A68_NIL;
PZAACTR_tsubst = (A68_116 *)A68_NIL;
QZAACTR_testsubst = (A68_116 *)A68_NIL;
 /* line 736: */
RZAACTR_substlevel = 0;
 /* line 737: */
TZAACTR_modulelevel = 0;
UZAACTR_nextmodule = 0;
 /* line 738: */
VZAACTR_nextlibno = FKAACTR_startlib;
 /* line 739: */
XZAACTR_burestrict = A68_FALSE;
 /* line 741: */
A_CLOSURE( ZZAACTR_generator, AABACTR_generator, BABACTR_generator );
A_CALLPROC(ZZAACTR_generator,(A68_TRUE, &FABACTR),(A68_TRUE, &FABACTR,(ZZAACTR_generator).nonlocals));
EABACTR_libids = FABACTR;
 /* line 742: */
A_CLOSURE( HABACTR_generator, IABACTR_generator, JABACTR_generator );
A_CALLPROC(HABACTR_generator,(A68_TRUE, &NABACTR),(A68_TRUE, &NABACTR,(HABACTR_generator).nonlocals));
MABACTR_libinds = NABACTR;
 /* line 744: */
 /* line 745: */
for ( OABACTR_i = 1;
OABACTR_i <= 64;
OABACTR_i += 1 )
{ 
PABACTR = (&A_VINDEX(EABACTR_libids,OABACTR_i)) ;
(*PABACTR) = (A68_67 *)A68_NIL;
 /* line 746: */
 /* line 747: */
QABACTR = (&A_VINDEX(MABACTR_libinds,OABACTR_i)) ;
(*QABACTR) = (A68_110 *)A68_NIL;
}
 /* line 749: */
RABACTR_concheck = (A68_112 *)A68_NIL;
 /* line 750: */
SABACTR = (&((&HZAACTR_xm)->Type)) ;
(*SABACTR) = 0;
 /* line 752: */
 /* line 755: */
 /* line 757: */
HBBACTR_incom = A68_FALSE;
 /* line 759: */
 /* line 760: */
LBBACTR_textbuff1 = A_VTRIM(KBBACTR,(HSAACTR_textbuff),A_VTSCRIPT(&(KBBACTR.upb),(HSAACTR_textbuff).upb,1,KKAACTR_linesize));
 /* line 762: */
 /* line 764: */
A_CLOSURE( OBBACTR_generator, PBBACTR_generator, QBBACTR_generator );
A_CALLPROC(OBBACTR_generator,(A68_TRUE, &UBBACTR),(A68_TRUE, &UBBACTR,(OBBACTR_generator).nonlocals));
TBBACTR_brackets = UBBACTR;
 /* line 765: */
VBBACTR_brind = 1;
 /* line 766: */
WBBACTR_wrongord = 0;
XBBACTR_wrongcrd = 0;
 /* line 768: */
 /* line 769: */
 /* line 770: */
 /* line 771: */
 /* line 772: */
 /* line 773: */
 /* line 774: */
 /* line 775: */
 /* line 777: */
 /* line 778: */
 /* line 779: */
 /* line 780: */
 /* line 781: */
 /* line 782: */
 /* line 783: */
 /* line 784: */
 /* line 785: */
 /* line 786: */
 /* line 787: */
 /* line 788: */
 /* line 789: */
 /* line 790: */
 /* line 791: */
 /* line 792: */
 /* line 793: */
 /* line 794: */
 /* line 795: */
 /* line 796: */
 /* line 797: */
 /* line 798: */
 /* line 799: */
 /* line 800: */
 /* line 801: */
 /* line 803: */
 /* line 805: */
 /* line 806: */
 /* line 807: */
 /* line 808: */
 /* line 809: */
 /* line 810: */
 /* line 812: */
ODBACTR_next = CCBACTR_rcnewline;
 /* line 813: */
QDBACTR_look = 2;
 /* line 818: */
 /* line 819: */
 /* line 820: */
 /* line 821: */
 /* line 822: */
 /* line 823: */
WDBACTR_recoverdepth = 0;
XDBACTR_nscreader = VDBACTR_startreader;
 /* line 825: */
YDBACTR_lkids = (A68_133 *)A68_NIL;
 /* line 826: */
ZDBACTR_lkend = (&YDBACTR_lkids);
 /* line 827: */
AEBACTR_lkinserts = (-1);
 /* line 828: */
 /* line 830: */
EEBACTR_noflts = (-1);
 /* line 831: */
 /* line 833: */
GEBACTR_fulldiags = A68_FALSE;
HEBACTR_inprogram = A68_FALSE;
 /* line 835: */
IEBACTR.data[0] = 11;
IEBACTR.data[1] = 32;
IEBACTR.data[2] = 22;
IEBACTR.data[3] = 14;
IEBACTR.data[4] = 24;
IEBACTR.data[5] = 28;
IEBACTR.data[6] = 10;
IEBACTR.data[7] = 61;
 /* line 836: */
IEBACTR.data[8] = 46;
IEBACTR.data[9] = 13;
IEBACTR.data[10] = 56;
 /* line 837: */
IEBACTR.data[11] = 27;
IEBACTR.data[12] = 79;
JEBACTR_insertsn = IEBACTR;
 /* line 839: */
KEBACTR.data[0] = 10;
KEBACTR.data[1] = 12;
KEBACTR.data[2] = 13;
KEBACTR.data[3] = 16;
KEBACTR.data[4] = 17;
KEBACTR.data[5] = 23;
KEBACTR.data[6] = 30;
KEBACTR.data[7] = 54;
 /* line 840: */
KEBACTR.data[8] = 56;
KEBACTR.data[9] = 63;
KEBACTR.data[10] = 73;
KEBACTR.data[11] = 74;
KEBACTR.data[12] = 75;
KEBACTR.data[13] = 76;
KEBACTR.data[14] = 78;
 /* line 841: */
KEBACTR.data[15] = 79;
KEBACTR.data[16] = 0;
LEBACTR_ignorablen = KEBACTR;
 /* line 843: */
MEBACTR.data[0] = 10;
MEBACTR.data[1] = 11;
MEBACTR.data[2] = 16;
MEBACTR.data[3] = 17;
MEBACTR.data[4] = 23;
MEBACTR.data[5] = 25;
MEBACTR.data[6] = 28;
 /* line 844: */
MEBACTR.data[7] = 45;
MEBACTR.data[8] = 54;
MEBACTR.data[9] = 56;
MEBACTR.data[10] = 61;
MEBACTR.data[11] = 63;
MEBACTR.data[12] = 68;
MEBACTR.data[13] = 69;
MEBACTR.data[14] = 73;
 /* line 845: */
MEBACTR.data[15] = 74;
MEBACTR.data[16] = 75;
MEBACTR.data[17] = 76;
MEBACTR.data[18] = 79;
MEBACTR.data[19] = 80;
MEBACTR.data[20] = 81;
MEBACTR.data[21] = 82;
 /* line 846: */
MEBACTR.data[22] = 83;
MEBACTR.data[23] = 92;
NEBACTR_nonducstart = MEBACTR;
 /* line 848: */
OEBACTR.data[0] = 42;
OEBACTR.data[1] = 28;
OEBACTR.data[2] = 56;
PEBACTR_insertsf = OEBACTR;
 /* line 850: */
QEBACTR.data[0] = 28;
QEBACTR.data[1] = 35;
QEBACTR.data[2] = 39;
QEBACTR.data[3] = 49;
REBACTR_ignorablef = QEBACTR;
 /* line 852: */
SEBACTR.data[0] = 0;
SEBACTR.data[1] = 25;
SEBACTR.data[2] = 28;
SEBACTR.data[3] = 35;
SEBACTR.data[4] = 39;
SEBACTR.data[5] = 40;
SEBACTR.data[6] = 43;
SEBACTR.data[7] = 45;
 /* line 853: */
SEBACTR.data[8] = 47;
SEBACTR.data[9] = 48;
SEBACTR.data[10] = 50;
SEBACTR.data[11] = 51;
SEBACTR.data[12] = 52;
 /* line 854: */
SEBACTR.data[13] = 53;
SEBACTR.data[14] = 60;
TEBACTR_nonpicstart = SEBACTR;
 /* line 864: */
 /* line 865: */
 /* line 866: */
 /* line 867: */
 /* line 868: */
 /* line 869: */
 /* line 870: */
 /* line 871: */
 /* line 872: */
 /* line 873: */
 /* line 874: */
 /* line 875: */
 /* line 876: */
 /* line 877: */
 /* line 878: */
 /* line 879: */
 /* line 880: */
 /* line 881: */
 /* line 882: */
 /* line 883: */
 /* line 884: */
 /* line 885: */
 /* line 886: */
 /* line 887: */
 /* line 888: */
 /* line 889: */
 /* line 890: */
 /* line 891: */
 /* line 892: */
 /* line 893: */
 /* line 894: */
 /* line 895: */
 /* line 896: */
 /* line 897: */
 /* line 898: */
 /* line 899: */
 /* line 900: */
 /* line 901: */
 /* line 902: */
 /* line 903: */
 /* line 904: */
 /* line 905: */
 /* line 906: */
 /* line 907: */
 /* line 908: */
 /* line 909: */
 /* line 910: */
 /* line 911: */
 /* line 912: */
 /* line 913: */
 /* line 914: */
 /* line 915: */
 /* line 916: */
 /* line 917: */
 /* line 918: */
 /* line 919: */
 /* line 920: */
 /* line 921: */
 /* line 922: */
 /* line 923: */
 /* line 924: */
 /* line 925: */
 /* line 926: */
 /* line 927: */
 /* line 928: */
 /* line 929: */
 /* line 930: */
 /* line 931: */
 /* line 932: */
 /* line 933: */
 /* line 934: */
 /* line 935: */
 /* line 936: */
 /* line 937: */
 /* line 938: */
 /* line 939: */
 /* line 940: */
 /* line 941: */
 /* line 942: */
 /* line 943: */
 /* line 944: */
 /* line 945: */
 /* line 946: */
 /* line 947: */
 /* line 948: */
 /* line 949: */
 /* line 950: */
 /* line 951: */
 /* line 952: */
 /* line 953: */
 /* line 954: */
 /* line 955: */
 /* line 956: */
 /* line 957: */
 /* line 958: */
 /* line 959: */
 /* line 960: */
 /* line 961: */
 /* line 962: */
 /* line 963: */
 /* line 964: */
 /* line 965: */
 /* line 966: */
 /* line 967: */
 /* line 968: */
 /* line 969: */
 /* line 970: */
 /* line 971: */
 /* line 972: */
 /* line 973: */
 /* line 974: */
 /* line 975: */
 /* line 976: */
 /* line 977: */
 /* line 978: */
 /* line 979: */
 /* line 980: */
 /* line 981: */
 /* line 982: */
 /* line 983: */
 /* line 984: */
 /* line 985: */
 /* line 986: */
 /* line 987: */
 /* line 988: */
 /* line 989: */
 /* line 990: */
 /* line 991: */
 /* line 992: */
 /* line 993: */
 /* line 994: */
 /* line 995: */
 /* line 996: */
 /* line 997: */
 /* line 998: */
 /* line 999: */
 /* line 1000: */
 /* line 1001: */
 /* line 1002: */
 /* line 1003: */
 /* line 1004: */
 /* line 1005: */
 /* line 1006: */
 /* line 1007: */
 /* line 1008: */
 /* line 1009: */
 /* line 1010: */
 /* line 1011: */
 /* line 1012: */
 /* line 1013: */
 /* line 1014: */
 /* line 1015: */
 /* line 1016: */
 /* line 1017: */
 /* line 1018: */
 /* line 1019: */
 /* line 1020: */
 /* line 1021: */
 /* line 1022: */
 /* line 1023: */
 /* line 1024: */
 /* line 1025: */
 /* line 1026: */
 /* line 1027: */
 /* line 1028: */
 /* line 1029: */
 /* line 1030: */
 /* line 1031: */
 /* line 1032: */
 /* line 1033: */
 /* line 1034: */
 /* line 1035: */
 /* line 1036: */
 /* line 1037: */
 /* line 1038: */
 /* line 1039: */
 /* line 1040: */
 /* line 1041: */
 /* line 1042: */
 /* line 1043: */
 /* line 1044: */
 /* line 1045: */
 /* line 1046: */
 /* line 1047: */
 /* line 1048: */
 /* line 1049: */
 /* line 1050: */
 /* line 1051: */
 /* line 1052: */
 /* line 1053: */
 /* line 1054: */
 /* line 1055: */
 /* line 1056: */
 /* line 1057: */
 /* line 1058: */
 /* line 1059: */
 /* line 1060: */
 /* line 1061: */
 /* line 1062: */
 /* line 1063: */
 /* line 1064: */
 /* line 1065: */
 /* line 1066: */
 /* line 1067: */
 /* line 1068: */
 /* line 1069: */
 /* line 1070: */
 /* line 1071: */
 /* line 1072: */
 /* line 1073: */
 /* line 1074: */
 /* line 1075: */
 /* line 1076: */
 /* line 1077: */
 /* line 1078: */
 /* line 1079: */
 /* line 1080: */
 /* line 1081: */
 /* line 1082: */
 /* line 1083: */
 /* line 1084: */
 /* line 1085: */
WEBACTR_sidcode = VEBACTR;
 /* line 1089: */
 /* line 1091: */
 /* line 1092: */
AFBACTR_upbofsidstack = ZEBACTR_sidstackstep;
 /* line 1093: */
A_CLOSURE( CFBACTR_generator, DFBACTR_generator, EFBACTR_generator );
(( EFBACTR_generator * ) ( CFBACTR_generator.nonlocals )) -> AFBACTR_upbofsidstack = (&AFBACTR_upbofsidstack);
A_CALLPROC(CFBACTR_generator,(A68_TRUE, &IFBACTR),(A68_TRUE, &IFBACTR,(CFBACTR_generator).nonlocals));
HFBACTR_sidstack = IFBACTR;
 /* line 1094: */
JFBACTR_stind = 1;
 /* line 1096: */
KFBACTR_crts = 1;
 /* line 1098: */
NFBACTR_sidbwdm = (XEBACTR_sidbwd-(YEBACTR_boolwdsize*384));
OFBACTR_boolwds3 = (YEBACTR_boolwdsize*3);
 /* line 1101: */
 /* line 1102: */
 /* line 1103: */
A_CLOSURE( PFBACTR_analyser, QFBACTR_analyser, RFBACTR_analyser );
(( RFBACTR_analyser * ) ( PFBACTR_analyser.nonlocals )) -> LFBACTR_failpos = (&LFBACTR_failpos);
(( RFBACTR_analyser * ) ( PFBACTR_analyser.nonlocals )) -> WEBACTR_sidcode = WEBACTR_sidcode;
(( RFBACTR_analyser * ) ( PFBACTR_analyser.nonlocals )) -> KFBACTR_crts = (&KFBACTR_crts);
(( RFBACTR_analyser * ) ( PFBACTR_analyser.nonlocals )) -> HFBACTR_sidstack = (&HFBACTR_sidstack);
(( RFBACTR_analyser * ) ( PFBACTR_analyser.nonlocals )) -> JFBACTR_stind = (&JFBACTR_stind);
(( RFBACTR_analyser * ) ( PFBACTR_analyser.nonlocals )) -> AFBACTR_upbofsidstack = (&AFBACTR_upbofsidstack);
(( RFBACTR_analyser * ) ( PFBACTR_analyser.nonlocals )) -> MFBACTR_t1 = (&MFBACTR_t1);
(( RFBACTR_analyser * ) ( PFBACTR_analyser.nonlocals )) -> OFBACTR_boolwds3 = OFBACTR_boolwds3;
(( RFBACTR_analyser * ) ( PFBACTR_analyser.nonlocals )) -> NFBACTR_sidbwdm = NFBACTR_sidbwdm;
 /* line 1156: */
A_CLOSURE( WGBACTR_checkinsert, XGBACTR_checkinsert, YGBACTR_checkinsert );
(( YGBACTR_checkinsert * ) ( WGBACTR_checkinsert.nonlocals )) -> LFBACTR_failpos = (&LFBACTR_failpos);
(( YGBACTR_checkinsert * ) ( WGBACTR_checkinsert.nonlocals )) -> JFBACTR_stind = (&JFBACTR_stind);
(( YGBACTR_checkinsert * ) ( WGBACTR_checkinsert.nonlocals )) -> WEBACTR_sidcode = WEBACTR_sidcode;
(( YGBACTR_checkinsert * ) ( WGBACTR_checkinsert.nonlocals )) -> HFBACTR_sidstack = (&HFBACTR_sidstack);
(( YGBACTR_checkinsert * ) ( WGBACTR_checkinsert.nonlocals )) -> OFBACTR_boolwds3 = OFBACTR_boolwds3;
(( YGBACTR_checkinsert * ) ( WGBACTR_checkinsert.nonlocals )) -> NFBACTR_sidbwdm = NFBACTR_sidbwdm;
(( YGBACTR_checkinsert * ) ( WGBACTR_checkinsert.nonlocals )) -> MFBACTR_t1 = (&MFBACTR_t1);
 /* line 1223: */
 /* line 1225: */
IIBACTR.data[0].Prio = 6;
IIBACTR.data[0].Do = 2;
IIBACTR.data[0].Test = 0X1f2U;
 /* line 1226: */
IIBACTR.data[0].Ans = (-10);
IIBACTR.data[1].Prio = 6;
IIBACTR.data[1].Do = 2;
IIBACTR.data[1].Test = 0X70U;
 /* line 1227: */
IIBACTR.data[1].Ans = (-1);
IIBACTR.data[2].Prio = 8;
IIBACTR.data[2].Do = 3;
IIBACTR.data[2].Test = 0X400U;
 /* line 1228: */
IIBACTR.data[2].Ans = ELAACTR_int;
IIBACTR.data[3].Prio = 8;
IIBACTR.data[3].Do = 3;
IIBACTR.data[3].Test = 0X400U;
 /* line 1229: */
IIBACTR.data[3].Ans = ELAACTR_int;
IIBACTR.data[4].Prio = 3;
IIBACTR.data[4].Do = 2;
IIBACTR.data[4].Test = 0X1U;
 /* line 1230: */
IIBACTR.data[4].Ans = (-1);
IIBACTR.data[5].Prio = 2;
IIBACTR.data[5].Do = 2;
IIBACTR.data[5].Test = 0X1U;
 /* line 1235: */
IIBACTR.data[5].Ans = (-1);
IIBACTR.data[6].Prio = 5;
IIBACTR.data[6].Do = 2;
IIBACTR.data[6].Test = 0X1b2U;
 /* line 1236: */
IIBACTR.data[6].Ans = ALAACTR_bool;
IIBACTR.data[7].Prio = 5;
IIBACTR.data[7].Do = 2;
IIBACTR.data[7].Test = 0X1b2U;
 /* line 1237: */
IIBACTR.data[7].Ans = ALAACTR_bool;
IIBACTR.data[8].Prio = 5;
IIBACTR.data[8].Do = 2;
IIBACTR.data[8].Test = 0X1b6U;
 /* line 1238: */
IIBACTR.data[8].Ans = ALAACTR_bool;
IIBACTR.data[9].Prio = 5;
IIBACTR.data[9].Do = 2;
IIBACTR.data[9].Test = 0X1b6U;
 /* line 1239: */
IIBACTR.data[9].Ans = ALAACTR_bool;
IIBACTR.data[10].Prio = 4;
IIBACTR.data[10].Do = 2;
IIBACTR.data[10].Test = 0X1f7U;
 /* line 1240: */
IIBACTR.data[10].Ans = ALAACTR_bool;
IIBACTR.data[11].Prio = 4;
IIBACTR.data[11].Do = 2;
IIBACTR.data[11].Test = 0X1f7U;
 /* line 1241: */
IIBACTR.data[11].Ans = ALAACTR_bool;
IIBACTR.data[12].Prio = 7;
IIBACTR.data[12].Do = 9;
IIBACTR.data[12].Test = 0X1f2U;
 /* line 1242: */
IIBACTR.data[12].Ans = (-10);
IIBACTR.data[13].Prio = 7;
IIBACTR.data[13].Do = 2;
IIBACTR.data[13].Test = 0X70U;
 /* line 1243: */
IIBACTR.data[13].Ans = (-9);
IIBACTR.data[14].Prio = 7;
IIBACTR.data[14].Do = 2;
IIBACTR.data[14].Test = 0X10U;
 /* line 1244: */
IIBACTR.data[14].Ans = (-1);
IIBACTR.data[15].Prio = 7;
IIBACTR.data[15].Do = 2;
IIBACTR.data[15].Test = 0X10U;
 /* line 1245: */
IIBACTR.data[15].Ans = (-1);
IIBACTR.data[16].Prio = 8;
IIBACTR.data[16].Do = 4;
IIBACTR.data[16].Test = 0X70U;
 /* line 1246: */
IIBACTR.data[16].Ans = (-8);
IIBACTR.data[17].Prio = 9;
IIBACTR.data[17].Do = 2;
IIBACTR.data[17].Test = 0X30U;
 /* line 1247: */
IIBACTR.data[17].Ans = (-5);
IIBACTR.data[18].Prio = 8;
IIBACTR.data[18].Do = 4;
IIBACTR.data[18].Test = 0X4U;
 /* line 1248: */
IIBACTR.data[18].Ans = (-8);
IIBACTR.data[19].Prio = 8;
IIBACTR.data[19].Do = 4;
IIBACTR.data[19].Test = 0X4U;
 /* line 1249: */
IIBACTR.data[19].Ans = (-8);
IIBACTR.data[20].Prio = 7;
IIBACTR.data[20].Do = 5;
IIBACTR.data[20].Test = 0X4U;
 /* line 1250: */
IIBACTR.data[20].Ans = ALAACTR_bool;
IIBACTR.data[21].Prio = 1;
IIBACTR.data[21].Do = 6;
IIBACTR.data[21].Test = 0X1f0U;
 /* line 1251: */
IIBACTR.data[21].Ans = (-7);
IIBACTR.data[22].Prio = 1;
IIBACTR.data[22].Do = 6;
IIBACTR.data[22].Test = 0X70U;
 /* line 1252: */
IIBACTR.data[22].Ans = (-7);
IIBACTR.data[23].Prio = 1;
IIBACTR.data[23].Do = 6;
IIBACTR.data[23].Test = 0X1f0U;
 /* line 1253: */
IIBACTR.data[23].Ans = (-7);
IIBACTR.data[24].Prio = 1;
IIBACTR.data[24].Do = 6;
IIBACTR.data[24].Test = 0X10U;
 /* line 1254: */
IIBACTR.data[24].Ans = (-7);
IIBACTR.data[25].Prio = 1;
IIBACTR.data[25].Do = 6;
IIBACTR.data[25].Test = 0X10U;
 /* line 1255: */
IIBACTR.data[25].Ans = (-7);
IIBACTR.data[26].Prio = 1;
IIBACTR.data[26].Do = 6;
IIBACTR.data[26].Test = 0X60U;
 /* line 1256: */
IIBACTR.data[26].Ans = (-7);
IIBACTR.data[27].Prio = 88;
IIBACTR.data[27].Do = 7;
IIBACTR.data[27].Test = MQAACTR_z;
 /* line 1257: */
IIBACTR.data[27].Ans = ALAACTR_bool;
IIBACTR.data[28].Prio = 88;
IIBACTR.data[28].Do = 7;
IIBACTR.data[28].Test = MQAACTR_z;
 /* line 1258: */
IIBACTR.data[28].Ans = ALAACTR_bool;
IIBACTR.data[29].Prio = 3;
IIBACTR.data[29].Do = 2;
IIBACTR.data[29].Test = 0X5U;
 /* line 1259: */
IIBACTR.data[29].Ans = (-1);
IIBACTR.data[30].Prio = 2;
IIBACTR.data[30].Do = 2;
IIBACTR.data[30].Test = 0X5U;
 /* line 1260: */
IIBACTR.data[30].Ans = (-1);
IIBACTR.data[31].Prio = 1;
IIBACTR.data[31].Do = 8;
IIBACTR.data[31].Test = 0X180U;
 /* line 1261: */
IIBACTR.data[31].Ans = (-12);
IIBACTR.data[32].Prio = 5;
IIBACTR.data[32].Do = 3;
IIBACTR.data[32].Test = 0X400U;
 /* line 1262: */
IIBACTR.data[32].Ans = (-11);
IIBACTR.data[33].Prio = 8;
IIBACTR.data[33].Do = 4;
IIBACTR.data[33].Test = 0X4U;
 /* line 1263: */
IIBACTR.data[33].Ans = (-8);
KIBACTR_diops = A_HISVEC(JIBACTR,IIBACTR,34,A68_161 );
 /* line 1265: */
 /* line 1267: */
LIBACTR.data[0].Test = 0X70U;
 /* line 1268: */
LIBACTR.data[0].Ans = (-1);
LIBACTR.data[1].Test = 0X70U;
 /* line 1269: */
LIBACTR.data[1].Ans = (-1);
LIBACTR.data[2].Test = 0Xe00U;
 /* line 1270: */
LIBACTR.data[2].Ans = ELAACTR_int;
LIBACTR.data[3].Test = 0Xe00U;
 /* line 1271: */
LIBACTR.data[3].Ans = ELAACTR_int;
LIBACTR.data[4].Test = 0X5U;
 /* line 1272: */
LIBACTR.data[4].Ans = (-1);
LIBACTR.data[5].Test = 0X77U;
 /* line 1273: */
LIBACTR.data[5].Ans = (-4);
LIBACTR.data[6].Test = 0X10U;
 /* line 1274: */
LIBACTR.data[6].Ans = (-6);
LIBACTR.data[7].Test = 0X8U;
 /* line 1275: */
LIBACTR.data[7].Ans = BLAACTR_char;
LIBACTR.data[8].Test = 0X74U;
 /* line 1276: */
LIBACTR.data[8].Ans = (-2);
LIBACTR.data[9].Test = 0X74U;
 /* line 1277: */
LIBACTR.data[9].Ans = (-3);
LIBACTR.data[10].Test = 0X10U;
 /* line 1278: */
LIBACTR.data[10].Ans = ALAACTR_bool;
LIBACTR.data[11].Test = 0X30U;
 /* line 1279: */
LIBACTR.data[11].Ans = ELAACTR_int;
LIBACTR.data[12].Test = 0X20U;
 /* line 1280: */
LIBACTR.data[12].Ans = (-6);
LIBACTR.data[13].Test = 0X20U;
 /* line 1281: */
LIBACTR.data[13].Ans = (-6);
LIBACTR.data[14].Test = 0X40U;
 /* line 1282: */
LIBACTR.data[14].Ans = (-6);
LIBACTR.data[15].Test = 0X40U;
 /* line 1283: */
LIBACTR.data[15].Ans = (-6);
LIBACTR.data[16].Test = 0X40U;
 /* line 1284: */
LIBACTR.data[16].Ans = (-6);
LIBACTR.data[17].Test = 0X40U;
 /* line 1285: */
LIBACTR.data[17].Ans = (-1);
NIBACTR_monops = A_HISVEC(MIBACTR,LIBACTR,18,A68_164 );
 /* line 1287: */
 /* line 1288: */
 /* line 1289: */
 /* line 1290: */
 /* line 1293: */
SIBACTR_moreinput = A68_TRUE;
 /* line 1295: */
A_CLOSURE( UIBACTR_faultchars, VIBACTR_faultchars, WIBACTR_faultchars );
(( WIBACTR_faultchars * ) ( UIBACTR_faultchars.nonlocals )) -> LSAACTR_tind = (&LSAACTR_tind);
(( WIBACTR_faultchars * ) ( UIBACTR_faultchars.nonlocals )) -> HSAACTR_textbuff = HSAACTR_textbuff;
(( WIBACTR_faultchars * ) ( UIBACTR_faultchars.nonlocals )) -> ITAACTR_supflts = (&ITAACTR_supflts);
(( WIBACTR_faultchars * ) ( UIBACTR_faultchars.nonlocals )) -> Flt = Flt;
(( WIBACTR_faultchars * ) ( UIBACTR_faultchars.nonlocals )) -> EEBACTR_noflts = (&EEBACTR_noflts);
(( WIBACTR_faultchars * ) ( UIBACTR_faultchars.nonlocals )) -> MBBACTR_abort1 = (&MBBACTR_abort1);
(( WIBACTR_faultchars * ) ( UIBACTR_faultchars.nonlocals )) -> GEBACTR_fulldiags = (&GEBACTR_fulldiags);
 /* line 1315: */
A_CLOSURE( QJBACTR_fault, RJBACTR_fault, SJBACTR_fault );
(( SJBACTR_fault * ) ( QJBACTR_fault.nonlocals )) -> UIBACTR_faultchars = UIBACTR_faultchars;
(( SJBACTR_fault * ) ( QJBACTR_fault.nonlocals )) -> Message = Message;
 /* line 1317: */
A_CLOSURE( VJBACTR_abort, WJBACTR_abort, XJBACTR_abort );
(( XJBACTR_abort * ) ( VJBACTR_abort.nonlocals )) -> ITAACTR_supflts = (&ITAACTR_supflts);
(( XJBACTR_abort * ) ( VJBACTR_abort.nonlocals )) -> QJBACTR_fault = QJBACTR_fault;
(( XJBACTR_abort * ) ( VJBACTR_abort.nonlocals )) -> MSAACTR_textend = (&MSAACTR_textend);
(( XJBACTR_abort * ) ( VJBACTR_abort.nonlocals )) -> SIBACTR_moreinput = (&SIBACTR_moreinput);
(( XJBACTR_abort * ) ( VJBACTR_abort.nonlocals )) -> Input = Input;
(( XJBACTR_abort * ) ( VJBACTR_abort.nonlocals )) -> LBBACTR_textbuff1 = LBBACTR_textbuff1;
(( XJBACTR_abort * ) ( VJBACTR_abort.nonlocals )) -> VRAACTR_endcompile2 = VRAACTR_endcompile2;
 /* line 1327: */
MBBACTR_abort1 = VJBACTR_abort;
 /* line 1330: */
 /* line 1331: */
 /* line 1332: */
A_CLOSURE( ZJBACTR_primread, AKBACTR_primread, BKBACTR_primread );
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> HSAACTR_textbuff = HSAACTR_textbuff;
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> LSAACTR_tind = (&LSAACTR_tind);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> Charset = Charset;
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> QJBACTR_fault = QJBACTR_fault;
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> MSAACTR_textend = (&MSAACTR_textend);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> SSAACTR_idsize = (&SSAACTR_idsize);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> TSAACTR_idhash = (&TSAACTR_idhash);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> PSAACTR_ident = (&PSAACTR_ident);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> XTAACTR_spaces = XTAACTR_spaces;
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> ZRAACTR_isint = (&ZRAACTR_isint);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> ETAACTR_stringsize = (&ETAACTR_stringsize);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> HTAACTR_iv = (&HTAACTR_iv);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> ATAACTR_string = ATAACTR_string;
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> FTAACTR_noofchars = (&FTAACTR_noofchars);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> ITAACTR_supflts = (&ITAACTR_supflts);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> GTAACTR_stringbase = (&GTAACTR_stringbase);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> QSAACTR_compsize = (&QSAACTR_compsize);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> RSAACTR_comphash = (&RSAACTR_comphash);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> OSAACTR_compsymb = (&OSAACTR_compsymb);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> BUAACTR_typechar1 = (&BUAACTR_typechar1);
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> Lookup = Lookup;
(( BKBACTR_primread * ) ( ZJBACTR_primread.nonlocals )) -> HBBACTR_incom = (&HBBACTR_incom);
 /* line 1626: */
 /* line 1627: */
A_CLOSURE( CPBACTR_fprimread, DPBACTR_fprimread, EPBACTR_fprimread );
(( EPBACTR_fprimread * ) ( CPBACTR_fprimread.nonlocals )) -> HSAACTR_textbuff = HSAACTR_textbuff;
(( EPBACTR_fprimread * ) ( CPBACTR_fprimread.nonlocals )) -> LSAACTR_tind = (&LSAACTR_tind);
(( EPBACTR_fprimread * ) ( CPBACTR_fprimread.nonlocals )) -> Charset = Charset;
(( EPBACTR_fprimread * ) ( CPBACTR_fprimread.nonlocals )) -> JSAACTR_globfbuff = JSAACTR_globfbuff;
(( EPBACTR_fprimread * ) ( CPBACTR_fprimread.nonlocals )) -> NSAACTR_find = (&NSAACTR_find);
(( EPBACTR_fprimread * ) ( CPBACTR_fprimread.nonlocals )) -> QJBACTR_fault = QJBACTR_fault;
(( EPBACTR_fprimread * ) ( CPBACTR_fprimread.nonlocals )) -> MSAACTR_textend = (&MSAACTR_textend);
(( EPBACTR_fprimread * ) ( CPBACTR_fprimread.nonlocals )) -> Output = Output;
(( EPBACTR_fprimread * ) ( CPBACTR_fprimread.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( EPBACTR_fprimread * ) ( CPBACTR_fprimread.nonlocals )) -> IBBACTR_noofstrings = (&IBBACTR_noofstrings);
(( EPBACTR_fprimread * ) ( CPBACTR_fprimread.nonlocals )) -> ZJBACTR_primread = ZJBACTR_primread;
(( EPBACTR_fprimread * ) ( CPBACTR_fprimread.nonlocals )) -> QSAACTR_compsize = (&QSAACTR_compsize);
 /* line 1779: */
A_CLOSURE( RRBACTR_insertprocp, SRBACTR_insertprocp, TRBACTR_insertprocp );
(( TRBACTR_insertprocp * ) ( RRBACTR_insertprocp.nonlocals )) -> YYAACTR_newmode1 = YYAACTR_newmode1;
(( TRBACTR_insertprocp * ) ( RRBACTR_insertprocp.nonlocals )) -> VYAACTR_lastmode = (&VYAACTR_lastmode);
(( TRBACTR_insertprocp * ) ( RRBACTR_insertprocp.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( TRBACTR_insertprocp * ) ( RRBACTR_insertprocp.nonlocals )) -> VJBACTR_abort = VJBACTR_abort;
 /* line 1812: */
A_CLOSURE( OSBACTR_insertunion, PSBACTR_insertunion, QSBACTR_insertunion );
(( QSBACTR_insertunion * ) ( OSBACTR_insertunion.nonlocals )) -> YYAACTR_newmode1 = YYAACTR_newmode1;
(( QSBACTR_insertunion * ) ( OSBACTR_insertunion.nonlocals )) -> VYAACTR_lastmode = (&VYAACTR_lastmode);
(( QSBACTR_insertunion * ) ( OSBACTR_insertunion.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( QSBACTR_insertunion * ) ( OSBACTR_insertunion.nonlocals )) -> VJBACTR_abort = VJBACTR_abort;
 /* line 1843: */
A_CLOSURE( LTBACTR_insertstrct, MTBACTR_insertstrct, NTBACTR_insertstrct );
(( NTBACTR_insertstrct * ) ( LTBACTR_insertstrct.nonlocals )) -> VYAACTR_lastmode = (&VYAACTR_lastmode);
(( NTBACTR_insertstrct * ) ( LTBACTR_insertstrct.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( NTBACTR_insertstrct * ) ( LTBACTR_insertstrct.nonlocals )) -> VJBACTR_abort = VJBACTR_abort;
 /* line 1875: */
A_CLOSURE( LUBACTR_insertprc, MUBACTR_insertprc, NUBACTR_insertprc );
(( NUBACTR_insertprc * ) ( LUBACTR_insertprc.nonlocals )) -> YYAACTR_newmode1 = YYAACTR_newmode1;
(( NUBACTR_insertprc * ) ( LUBACTR_insertprc.nonlocals )) -> VYAACTR_lastmode = (&VYAACTR_lastmode);
(( NUBACTR_insertprc * ) ( LUBACTR_insertprc.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( NUBACTR_insertprc * ) ( LUBACTR_insertprc.nonlocals )) -> VJBACTR_abort = VJBACTR_abort;
 /* line 1900: */
A_CLOSURE( FVBACTR_insertarray, GVBACTR_insertarray, HVBACTR_insertarray );
(( HVBACTR_insertarray * ) ( FVBACTR_insertarray.nonlocals )) -> VYAACTR_lastmode = (&VYAACTR_lastmode);
(( HVBACTR_insertarray * ) ( FVBACTR_insertarray.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( HVBACTR_insertarray * ) ( FVBACTR_insertarray.nonlocals )) -> VJBACTR_abort = VJBACTR_abort;
 /* line 1928: */
A_CLOSURE( ZVBACTR_insertvec, AWBACTR_insertvec, BWBACTR_insertvec );
(( BWBACTR_insertvec * ) ( ZVBACTR_insertvec.nonlocals )) -> VYAACTR_lastmode = (&VYAACTR_lastmode);
(( BWBACTR_insertvec * ) ( ZVBACTR_insertvec.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( BWBACTR_insertvec * ) ( ZVBACTR_insertvec.nonlocals )) -> VJBACTR_abort = VJBACTR_abort;
 /* line 1955: */
A_CLOSURE( TWBACTR_insertis, UWBACTR_insertis, VWBACTR_insertis );
(( VWBACTR_insertis * ) ( TWBACTR_insertis.nonlocals )) -> YYAACTR_newmode1 = YYAACTR_newmode1;
(( VWBACTR_insertis * ) ( TWBACTR_insertis.nonlocals )) -> VYAACTR_lastmode = (&VYAACTR_lastmode);
(( VWBACTR_insertis * ) ( TWBACTR_insertis.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( VWBACTR_insertis * ) ( TWBACTR_insertis.nonlocals )) -> VJBACTR_abort = VJBACTR_abort;
 /* line 1978: */
A_CLOSURE( LXBACTR_insertassmntproc, MXBACTR_insertassmntproc, NXBACTR_insertassmntproc );
(( NXBACTR_insertassmntproc * ) ( LXBACTR_insertassmntproc.nonlocals )) -> RRBACTR_insertprocp = RRBACTR_insertprocp;
 /* line 1983: */
A_CLOSURE( UXBACTR_opproc, VXBACTR_opproc, WXBACTR_opproc );
(( WXBACTR_opproc * ) ( UXBACTR_opproc.nonlocals )) -> RRBACTR_insertprocp = RRBACTR_insertprocp;
 /* line 1991: */
 /* line 2002: */
 /* line 2003: */
 /* line 2010: */
A_CLOSURE( NYBACTR_heapvalue, OYBACTR_heapvalue, PYBACTR_heapvalue );
(( PYBACTR_heapvalue * ) ( NYBACTR_heapvalue.nonlocals )) -> NYBACTR_heapvalue = NYBACTR_heapvalue;
 /* line 2023: */
A_CLOSURE( VYBACTR_downandups, WYBACTR_downandups, XYBACTR_downandups );
(( XYBACTR_downandups * ) ( VYBACTR_downandups.nonlocals )) -> Output = Output;
(( XYBACTR_downandups * ) ( VYBACTR_downandups.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( XYBACTR_downandups * ) ( VYBACTR_downandups.nonlocals )) -> VYBACTR_downandups = VYBACTR_downandups;
 /* line 2036: */
A_CLOSURE( BZBACTR_tidyv, CZBACTR_tidyv, DZBACTR_tidyv );
(( DZBACTR_tidyv * ) ( BZBACTR_tidyv.nonlocals )) -> QYAACTR_globcurrent = (&QYAACTR_globcurrent);
(( DZBACTR_tidyv * ) ( BZBACTR_tidyv.nonlocals )) -> Output = Output;
(( DZBACTR_tidyv * ) ( BZBACTR_tidyv.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( DZBACTR_tidyv * ) ( BZBACTR_tidyv.nonlocals )) -> VYBACTR_downandups = VYBACTR_downandups;
 /* line 2058: */
A_CLOSURE( PZBACTR_faultp, QZBACTR_faultp, RZBACTR_faultp );
(( RZBACTR_faultp * ) ( PZBACTR_faultp.nonlocals )) -> Message = Message;
(( RZBACTR_faultp * ) ( PZBACTR_faultp.nonlocals )) -> NYAACTR_initmodes = NYAACTR_initmodes;
(( RZBACTR_faultp * ) ( PZBACTR_faultp.nonlocals )) -> QYAACTR_globcurrent = (&QYAACTR_globcurrent);
(( RZBACTR_faultp * ) ( PZBACTR_faultp.nonlocals )) -> MABACTR_libinds = MABACTR_libinds;
(( RZBACTR_faultp * ) ( PZBACTR_faultp.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( RZBACTR_faultp * ) ( PZBACTR_faultp.nonlocals )) -> UIBACTR_faultchars = UIBACTR_faultchars;
 /* line 2285: */
A_CLOSURE( VECACTR_marker, WECACTR_marker, XECACTR_marker );
(( XECACTR_marker * ) ( VECACTR_marker.nonlocals )) -> VECACTR_marker = VECACTR_marker;
(( XECACTR_marker * ) ( VECACTR_marker.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
 /* line 2364: */
A_CLOSURE( ZFCACTR_assmarker, AGCACTR_assmarker, BGCACTR_assmarker );
(( BGCACTR_assmarker * ) ( ZFCACTR_assmarker.nonlocals )) -> VECACTR_marker = VECACTR_marker;
(( BGCACTR_assmarker * ) ( ZFCACTR_assmarker.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
 /* line 2382: */
A_CLOSURE( JGCACTR_deflex, KGCACTR_deflex, LGCACTR_deflex );
(( LGCACTR_deflex * ) ( JGCACTR_deflex.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( LGCACTR_deflex * ) ( JGCACTR_deflex.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
(( LGCACTR_deflex * ) ( JGCACTR_deflex.nonlocals )) -> FVBACTR_insertarray = FVBACTR_insertarray;
(( LGCACTR_deflex * ) ( JGCACTR_deflex.nonlocals )) -> ZVBACTR_insertvec = ZVBACTR_insertvec;
(( LGCACTR_deflex * ) ( JGCACTR_deflex.nonlocals )) -> TWBACTR_insertis = TWBACTR_insertis;
(( LGCACTR_deflex * ) ( JGCACTR_deflex.nonlocals )) -> LTBACTR_insertstrct = LTBACTR_insertstrct;
 /* line 2474: */
A_CLOSURE( ZHCACTR_enflex, AICACTR_enflex, BICACTR_enflex );
(( BICACTR_enflex * ) ( ZHCACTR_enflex.nonlocals )) -> VECACTR_marker = VECACTR_marker;
(( BICACTR_enflex * ) ( ZHCACTR_enflex.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
(( BICACTR_enflex * ) ( ZHCACTR_enflex.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( BICACTR_enflex * ) ( ZHCACTR_enflex.nonlocals )) -> ZHCACTR_enflex = ZHCACTR_enflex;
(( BICACTR_enflex * ) ( ZHCACTR_enflex.nonlocals )) -> FVBACTR_insertarray = FVBACTR_insertarray;
(( BICACTR_enflex * ) ( ZHCACTR_enflex.nonlocals )) -> ZVBACTR_insertvec = ZVBACTR_insertvec;
(( BICACTR_enflex * ) ( ZHCACTR_enflex.nonlocals )) -> TWBACTR_insertis = TWBACTR_insertis;
(( BICACTR_enflex * ) ( ZHCACTR_enflex.nonlocals )) -> LTBACTR_insertstrct = LTBACTR_insertstrct;
 /* line 2516: */
A_CLOSURE( ZICACTR_mproc, AJCACTR_mproc, BJCACTR_mproc );
(( BJCACTR_mproc * ) ( ZICACTR_mproc.nonlocals )) -> RRBACTR_insertprocp = RRBACTR_insertprocp;
(( BJCACTR_mproc * ) ( ZICACTR_mproc.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
(( BJCACTR_mproc * ) ( ZICACTR_mproc.nonlocals )) -> YVAACTR_boolnil = (&YVAACTR_boolnil);
 /* line 2519: */
A_CLOSURE( EJCACTR_deref, FJCACTR_deref, GJCACTR_deref );
(( GJCACTR_deref * ) ( EJCACTR_deref.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
(( GJCACTR_deref * ) ( EJCACTR_deref.nonlocals )) -> Output = Output;
(( GJCACTR_deref * ) ( EJCACTR_deref.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
 /* line 2524: */
A_CLOSURE( LJCACTR_deproc, MJCACTR_deproc, NJCACTR_deproc );
(( NJCACTR_deproc * ) ( LJCACTR_deproc.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( NJCACTR_deproc * ) ( LJCACTR_deproc.nonlocals )) -> XZAACTR_burestrict = (&XZAACTR_burestrict);
(( NJCACTR_deproc * ) ( LJCACTR_deproc.nonlocals )) -> QJBACTR_fault = QJBACTR_fault;
(( NJCACTR_deproc * ) ( LJCACTR_deproc.nonlocals )) -> Output = Output;
(( NJCACTR_deproc * ) ( LJCACTR_deproc.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( NJCACTR_deproc * ) ( LJCACTR_deproc.nonlocals )) -> VECACTR_marker = VECACTR_marker;
(( NJCACTR_deproc * ) ( LJCACTR_deproc.nonlocals )) -> QYAACTR_globcurrent = (&QYAACTR_globcurrent);
 /* line 2539: */
A_CLOSURE( XJCACTR_pmode, YJCACTR_pmode, ZJCACTR_pmode );
(( ZJCACTR_pmode * ) ( XJCACTR_pmode.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( ZJCACTR_pmode * ) ( XJCACTR_pmode.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
 /* line 2554: */
GKCACTR_deprefable = A68_TRUE;
 /* line 2555: */
 /* line 2557: */
A_CLOSURE( MKCACTR_depref, NKCACTR_depref, OKCACTR_depref );
(( OKCACTR_depref * ) ( MKCACTR_depref.nonlocals )) -> GKCACTR_deprefable = (&GKCACTR_deprefable);
(( OKCACTR_depref * ) ( MKCACTR_depref.nonlocals )) -> EJCACTR_deref = EJCACTR_deref;
(( OKCACTR_depref * ) ( MKCACTR_depref.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
(( OKCACTR_depref * ) ( MKCACTR_depref.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( OKCACTR_depref * ) ( MKCACTR_depref.nonlocals )) -> LJCACTR_deproc = LJCACTR_deproc;
 /* line 2579: */
A_CLOSURE( XKCACTR_weakmode, YKCACTR_weakmode, ZKCACTR_weakmode );
(( ZKCACTR_weakmode * ) ( XKCACTR_weakmode.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
 /* line 2597: */
A_CLOSURE( MLCACTR_unite, NLCACTR_unite, OLCACTR_unite );
(( OLCACTR_unite * ) ( MLCACTR_unite.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( OLCACTR_unite * ) ( MLCACTR_unite.nonlocals )) -> HKCACTR_coerce1 = (&HKCACTR_coerce1);
(( OLCACTR_unite * ) ( MLCACTR_unite.nonlocals )) -> PZBACTR_faultp = PZBACTR_faultp;
 /* line 2617: */
A_CLOSURE( YLCACTR_makeflex, ZLCACTR_makeflex, AMCACTR_makeflex );
(( AMCACTR_makeflex * ) ( YLCACTR_makeflex.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( AMCACTR_makeflex * ) ( YLCACTR_makeflex.nonlocals )) -> ZVBACTR_insertvec = ZVBACTR_insertvec;
(( AMCACTR_makeflex * ) ( YLCACTR_makeflex.nonlocals )) -> FVBACTR_insertarray = FVBACTR_insertarray;
 /* line 2635: */
A_CLOSURE( HMCACTR_strbd, IMCACTR_strbd, JMCACTR_strbd );
(( JMCACTR_strbd * ) ( HMCACTR_strbd.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
 /* line 2659: */
A_CLOSURE( YMCACTR_strproc, ZMCACTR_strproc, ANCACTR_strproc );
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> QYAACTR_globcurrent = (&QYAACTR_globcurrent);
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> EJCACTR_deref = EJCACTR_deref;
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> HKCACTR_coerce1 = (&HKCACTR_coerce1);
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> GKCACTR_deprefable = (&GKCACTR_deprefable);
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> GBBACTR_lastidchanged = (&GBBACTR_lastidchanged);
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> RRBACTR_insertprocp = RRBACTR_insertprocp;
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> KTAACTR_idmess = KTAACTR_idmess;
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> CZAACTR_lastrd = (&CZAACTR_lastrd);
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> Output = Output;
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> BZAACTR_nullid = BZAACTR_nullid;
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> ZVBACTR_insertvec = ZVBACTR_insertvec;
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> ATAACTR_string = ATAACTR_string;
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> YLCACTR_makeflex = YLCACTR_makeflex;
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> UIBACTR_faultchars = UIBACTR_faultchars;
(( ANCACTR_strproc * ) ( YMCACTR_strproc.nonlocals )) -> GZAACTR_maxident = (&GZAACTR_maxident);
 /* line 2917: */
 /* line 2919: */
A_CLOSURE( OSCACTR_coerce, PSCACTR_coerce, QSCACTR_coerce );
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> XKCACTR_weakmode = XKCACTR_weakmode;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> OSCACTR_coerce = OSCACTR_coerce;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> HMCACTR_strbd = HMCACTR_strbd;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> MKCACTR_depref = MKCACTR_depref;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> XJCACTR_pmode = XJCACTR_pmode;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> YLCACTR_makeflex = YLCACTR_makeflex;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> ZVBACTR_insertvec = ZVBACTR_insertvec;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> YMCACTR_strproc = YMCACTR_strproc;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> Output = Output;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> MLCACTR_unite = MLCACTR_unite;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> PZBACTR_faultp = PZBACTR_faultp;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> VECACTR_marker = VECACTR_marker;
(( QSCACTR_coerce * ) ( OSCACTR_coerce.nonlocals )) -> QYAACTR_globcurrent = (&QYAACTR_globcurrent);
 /* line 3225: */
HKCACTR_coerce1 = OSCACTR_coerce;
 /* line 3227: */
A_CLOSURE( QWCACTR_hcfoftwo, RWCACTR_hcfoftwo, SWCACTR_hcfoftwo );
(( SWCACTR_hcfoftwo * ) ( QWCACTR_hcfoftwo.nonlocals )) -> OSCACTR_coerce = OSCACTR_coerce;
(( SWCACTR_hcfoftwo * ) ( QWCACTR_hcfoftwo.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
(( SWCACTR_hcfoftwo * ) ( QWCACTR_hcfoftwo.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( SWCACTR_hcfoftwo * ) ( QWCACTR_hcfoftwo.nonlocals )) -> QWCACTR_hcfoftwo = QWCACTR_hcfoftwo;
(( SWCACTR_hcfoftwo * ) ( QWCACTR_hcfoftwo.nonlocals )) -> XJCACTR_pmode = XJCACTR_pmode;
 /* line 3251: */
A_CLOSURE( CXCACTR_hcf, DXCACTR_hcf, EXCACTR_hcf );
(( EXCACTR_hcf * ) ( CXCACTR_hcf.nonlocals )) -> CXCACTR_hcf = CXCACTR_hcf;
(( EXCACTR_hcf * ) ( CXCACTR_hcf.nonlocals )) -> QWCACTR_hcfoftwo = QWCACTR_hcfoftwo;
 /* line 3270: */
A_CLOSURE( MXCACTR_firmto, NXCACTR_firmto, OXCACTR_firmto );
(( OXCACTR_firmto * ) ( MXCACTR_firmto.nonlocals )) -> OSCACTR_coerce = OSCACTR_coerce;
(( OXCACTR_firmto * ) ( MXCACTR_firmto.nonlocals )) -> MXCACTR_firmto = MXCACTR_firmto;
 /* line 3300: */
A_CLOSURE( BYCACTR_ismode, CYCACTR_ismode, DYCACTR_ismode );
(( DYCACTR_ismode * ) ( BYCACTR_ismode.nonlocals )) -> XJCACTR_pmode = XJCACTR_pmode;
(( DYCACTR_ismode * ) ( BYCACTR_ismode.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( DYCACTR_ismode * ) ( BYCACTR_ismode.nonlocals )) -> TWBACTR_insertis = TWBACTR_insertis;
(( DYCACTR_ismode * ) ( BYCACTR_ismode.nonlocals )) -> BYCACTR_ismode = BYCACTR_ismode;
 /* line 3334: */
A_CLOSURE( RYCACTR_strong, SYCACTR_strong, TYCACTR_strong );
(( TYCACTR_strong * ) ( RYCACTR_strong.nonlocals )) -> Output = Output;
(( TYCACTR_strong * ) ( RYCACTR_strong.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( TYCACTR_strong * ) ( RYCACTR_strong.nonlocals )) -> OSCACTR_coerce = OSCACTR_coerce;
(( TYCACTR_strong * ) ( RYCACTR_strong.nonlocals )) -> RYCACTR_strong = RYCACTR_strong;
(( TYCACTR_strong * ) ( RYCACTR_strong.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( TYCACTR_strong * ) ( RYCACTR_strong.nonlocals )) -> BYCACTR_ismode = BYCACTR_ismode;
(( TYCACTR_strong * ) ( RYCACTR_strong.nonlocals )) -> PZBACTR_faultp = PZBACTR_faultp;
 /* line 3513: */
A_CLOSURE( OBDACTR_weak, PBDACTR_weak, QBDACTR_weak );
(( QBDACTR_weak * ) ( OBDACTR_weak.nonlocals )) -> RYCACTR_strong = RYCACTR_strong;
(( QBDACTR_weak * ) ( OBDACTR_weak.nonlocals )) -> XKCACTR_weakmode = XKCACTR_weakmode;
(( QBDACTR_weak * ) ( OBDACTR_weak.nonlocals )) -> CXCACTR_hcf = CXCACTR_hcf;
 /* line 3518: */
A_CLOSURE( VBDACTR_findbiop, WBDACTR_findbiop, XBDACTR_findbiop );
(( XBDACTR_findbiop * ) ( VBDACTR_findbiop.nonlocals )) -> XJCACTR_pmode = XJCACTR_pmode;
(( XBDACTR_findbiop * ) ( VBDACTR_findbiop.nonlocals )) -> NIBACTR_monops = NIBACTR_monops;
(( XBDACTR_findbiop * ) ( VBDACTR_findbiop.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( XBDACTR_findbiop * ) ( VBDACTR_findbiop.nonlocals )) -> ZVBACTR_insertvec = ZVBACTR_insertvec;
(( XBDACTR_findbiop * ) ( VBDACTR_findbiop.nonlocals )) -> KIBACTR_diops = KIBACTR_diops;
(( XBDACTR_findbiop * ) ( VBDACTR_findbiop.nonlocals )) -> QWCACTR_hcfoftwo = QWCACTR_hcfoftwo;
(( XBDACTR_findbiop * ) ( VBDACTR_findbiop.nonlocals )) -> OSCACTR_coerce = OSCACTR_coerce;
(( XBDACTR_findbiop * ) ( VBDACTR_findbiop.nonlocals )) -> YLCACTR_makeflex = YLCACTR_makeflex;
(( XBDACTR_findbiop * ) ( VBDACTR_findbiop.nonlocals )) -> XKCACTR_weakmode = XKCACTR_weakmode;
 /* line 3754: */
A_CLOSURE( EEDACTR_readcom, FEDACTR_readcom, GEDACTR_readcom );
(( GEDACTR_readcom * ) ( EEDACTR_readcom.nonlocals )) -> LSAACTR_tind = (&LSAACTR_tind);
(( GEDACTR_readcom * ) ( EEDACTR_readcom.nonlocals )) -> MSAACTR_textend = (&MSAACTR_textend);
(( GEDACTR_readcom * ) ( EEDACTR_readcom.nonlocals )) -> Output = Output;
(( GEDACTR_readcom * ) ( EEDACTR_readcom.nonlocals )) -> HSAACTR_textbuff = HSAACTR_textbuff;
(( GEDACTR_readcom * ) ( EEDACTR_readcom.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( GEDACTR_readcom * ) ( EEDACTR_readcom.nonlocals )) -> Input = Input;
(( GEDACTR_readcom * ) ( EEDACTR_readcom.nonlocals )) -> LBBACTR_textbuff1 = LBBACTR_textbuff1;
(( GEDACTR_readcom * ) ( EEDACTR_readcom.nonlocals )) -> SIBACTR_moreinput = (&SIBACTR_moreinput);
(( GEDACTR_readcom * ) ( EEDACTR_readcom.nonlocals )) -> VJBACTR_abort = VJBACTR_abort;
(( GEDACTR_readcom * ) ( EEDACTR_readcom.nonlocals )) -> Charset = Charset;
(( GEDACTR_readcom * ) ( EEDACTR_readcom.nonlocals )) -> ZJBACTR_primread = ZJBACTR_primread;
(( GEDACTR_readcom * ) ( EEDACTR_readcom.nonlocals )) -> EEDACTR_readcom = EEDACTR_readcom;
(( GEDACTR_readcom * ) ( EEDACTR_readcom.nonlocals )) -> QJBACTR_fault = QJBACTR_fault;
 /* line 3819: */
 /* line 3821: */
 /* line 3822: */
A_CLOSURE( GFDACTR_unlook, HFDACTR_unlook, IFDACTR_unlook );
(( IFDACTR_unlook * ) ( GFDACTR_unlook.nonlocals )) -> AEBACTR_lkinserts = (&AEBACTR_lkinserts);
(( IFDACTR_unlook * ) ( GFDACTR_unlook.nonlocals )) -> BEBACTR_lkmodeins = (&BEBACTR_lkmodeins);
(( IFDACTR_unlook * ) ( GFDACTR_unlook.nonlocals )) -> YDBACTR_lkids = (&YDBACTR_lkids);
(( IFDACTR_unlook * ) ( GFDACTR_unlook.nonlocals )) -> PSAACTR_ident = (&PSAACTR_ident);
(( IFDACTR_unlook * ) ( GFDACTR_unlook.nonlocals )) -> TSAACTR_idhash = (&TSAACTR_idhash);
(( IFDACTR_unlook * ) ( GFDACTR_unlook.nonlocals )) -> SSAACTR_idsize = (&SSAACTR_idsize);
(( IFDACTR_unlook * ) ( GFDACTR_unlook.nonlocals )) -> ZDBACTR_lkend = (&ZDBACTR_lkend);
 /* line 3850: */
A_CLOSURE( LFDACTR_reader, MFDACTR_reader, NFDACTR_reader );
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> EEBACTR_noflts = (&EEBACTR_noflts);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> ODBACTR_next = (&ODBACTR_next);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> ITAACTR_supflts = (&ITAACTR_supflts);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> AEBACTR_lkinserts = (&AEBACTR_lkinserts);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> CPBACTR_fprimread = CPBACTR_fprimread;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> ZJBACTR_primread = ZJBACTR_primread;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> Input = Input;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> LBBACTR_textbuff1 = LBBACTR_textbuff1;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> MSAACTR_textend = (&MSAACTR_textend);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> JBBACTR_oldtind = (&JBBACTR_oldtind);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> LSAACTR_tind = (&LSAACTR_tind);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> HSAACTR_textbuff = HSAACTR_textbuff;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> SIBACTR_moreinput = (&SIBACTR_moreinput);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> VJBACTR_abort = VJBACTR_abort;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> MFBACTR_t1 = (&MFBACTR_t1);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> QYAACTR_globcurrent = (&QYAACTR_globcurrent);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> RSAACTR_comphash = (&RSAACTR_comphash);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> KDBACTR_cindic = (&KDBACTR_cindic);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> LDBACTR_cinst = (&LDBACTR_cinst);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> MDBACTR_cbiop = (&MDBACTR_cbiop);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> NDBACTR_clibop = (&NDBACTR_clibop);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> OSAACTR_compsymb = (&OSAACTR_compsymb);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> JDBACTR_decmode = (&JDBACTR_decmode);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> KIBACTR_diops = KIBACTR_diops;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> QDBACTR_look = (&QDBACTR_look);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> MABACTR_libinds = MABACTR_libinds;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> FFDACTR_bumodule = (&FFDACTR_bumodule);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> BUAACTR_typechar1 = (&BUAACTR_typechar1);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> PZBACTR_faultp = PZBACTR_faultp;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> PDBACTR_bangtype = (&PDBACTR_bangtype);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> TBBACTR_brackets = TBBACTR_brackets;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> VBBACTR_brind = (&VBBACTR_brind);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> HEBACTR_inprogram = (&HEBACTR_inprogram);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> QJBACTR_fault = QJBACTR_fault;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> YBBACTR_wronglevel = (&YBBACTR_wronglevel);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> WBBACTR_wrongord = (&WBBACTR_wrongord);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> XBBACTR_wrongcrd = (&XBBACTR_wrongcrd);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> KTAACTR_idmess = KTAACTR_idmess;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> HBBACTR_incom = (&HBBACTR_incom);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> EEDACTR_readcom = EEDACTR_readcom;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> Output = Output;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> NSAACTR_find = (&NSAACTR_find);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> JSAACTR_globfbuff = JSAACTR_globfbuff;
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> IBBACTR_noofstrings = (&IBBACTR_noofstrings);
(( NFDACTR_reader * ) ( LFDACTR_reader.nonlocals )) -> GFDACTR_unlook = GFDACTR_unlook;
 /* line 4062: */
 /* line 4066: */
PHDACTR_last_flex = (A_HEAP(A68_INT ));
 /* line 4067: */
A_CLOSURE( RHDACTR_generator, SHDACTR_generator, THDACTR_generator );
A_CALLPROC(RHDACTR_generator,(A68_FALSE, &XHDACTR),(A68_FALSE, &XHDACTR,(RHDACTR_generator).nonlocals));
WHDACTR_test_flex = XHDACTR;
 /* line 4070: */
A_CLOSURE( BIDACTR_equality, CIDACTR_equality, DIDACTR_equality );
(( DIDACTR_equality * ) ( BIDACTR_equality.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( DIDACTR_equality * ) ( BIDACTR_equality.nonlocals )) -> PHDACTR_last_flex = PHDACTR_last_flex;
(( DIDACTR_equality * ) ( BIDACTR_equality.nonlocals )) -> WHDACTR_test_flex = (&WHDACTR_test_flex);
 /* line 4244: */
A_CLOSURE( PLDACTR_mcond, QLDACTR_mcond, RLDACTR_mcond );
(( RLDACTR_mcond * ) ( PLDACTR_mcond.nonlocals )) -> PLDACTR_mcond = PLDACTR_mcond;
(( RLDACTR_mcond * ) ( PLDACTR_mcond.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
 /* line 4290: */
A_CLOSURE( OMDACTR_dynamic, PMDACTR_dynamic, QMDACTR_dynamic );
(( QMDACTR_dynamic * ) ( OMDACTR_dynamic.nonlocals )) -> OMDACTR_dynamic = OMDACTR_dynamic;
 /* line 4306: */
A_CLOSURE( YMDACTR_testkept, ZMDACTR_testkept, ANDACTR_testkept );
(( ANDACTR_testkept * ) ( YMDACTR_testkept.nonlocals )) -> QJBACTR_fault = QJBACTR_fault;
(( ANDACTR_testkept * ) ( YMDACTR_testkept.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( ANDACTR_testkept * ) ( YMDACTR_testkept.nonlocals )) -> YMDACTR_testkept = YMDACTR_testkept;
 /* line 4352: */
 /* line 4364: */
 /* line 4366: */
A_CLOSURE( YNDACTR_loadmodeproc, ZNDACTR_loadmodeproc, AODACTR_loadmodeproc );
(( AODACTR_loadmodeproc * ) ( YNDACTR_loadmodeproc.nonlocals )) -> Output = Output;
(( AODACTR_loadmodeproc * ) ( YNDACTR_loadmodeproc.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( AODACTR_loadmodeproc * ) ( YNDACTR_loadmodeproc.nonlocals )) -> ZICACTR_mproc = ZICACTR_mproc;
 /* line 4377: */
A_CLOSURE( LODACTR_treatam, MODACTR_treatam, NODACTR_treatam );
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> OMDACTR_dynamic = OMDACTR_dynamic;
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> YNDACTR_loadmodeproc = YNDACTR_loadmodeproc;
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> QYAACTR_globcurrent = (&QYAACTR_globcurrent);
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> GBBACTR_lastidchanged = (&GBBACTR_lastidchanged);
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> KTAACTR_idmess = KTAACTR_idmess;
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> ZICACTR_mproc = ZICACTR_mproc;
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> CZAACTR_lastrd = (&CZAACTR_lastrd);
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> BZAACTR_nullid = BZAACTR_nullid;
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> Output = Output;
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> ZHCACTR_enflex = ZHCACTR_enflex;
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> GZAACTR_maxident = (&GZAACTR_maxident);
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> LODACTR_treatam = LODACTR_treatam;
(( NODACTR_treatam * ) ( LODACTR_treatam.nonlocals )) -> ZVBACTR_insertvec = ZVBACTR_insertvec;
 /* line 4549: */
A_CLOSURE( BTDACTR_modevars, CTDACTR_modevars, DTDACTR_modevars );
(( DTDACTR_modevars * ) ( BTDACTR_modevars.nonlocals )) -> QYAACTR_globcurrent = (&QYAACTR_globcurrent);
(( DTDACTR_modevars * ) ( BTDACTR_modevars.nonlocals )) -> OMDACTR_dynamic = OMDACTR_dynamic;
(( DTDACTR_modevars * ) ( BTDACTR_modevars.nonlocals )) -> BZAACTR_nullid = BZAACTR_nullid;
(( DTDACTR_modevars * ) ( BTDACTR_modevars.nonlocals )) -> ZICACTR_mproc = ZICACTR_mproc;
(( DTDACTR_modevars * ) ( BTDACTR_modevars.nonlocals )) -> Output = Output;
(( DTDACTR_modevars * ) ( BTDACTR_modevars.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( DTDACTR_modevars * ) ( BTDACTR_modevars.nonlocals )) -> LODACTR_treatam = LODACTR_treatam;
 /* line 4618: */
A_CLOSURE( IUDACTR_substitute, JUDACTR_substitute, KUDACTR_substitute );
(( KUDACTR_substitute * ) ( IUDACTR_substitute.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
(( KUDACTR_substitute * ) ( IUDACTR_substitute.nonlocals )) -> VYAACTR_lastmode = (&VYAACTR_lastmode);
(( KUDACTR_substitute * ) ( IUDACTR_substitute.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( KUDACTR_substitute * ) ( IUDACTR_substitute.nonlocals )) -> TYAACTR_untreated = (&TYAACTR_untreated);
 /* line 4715: */
A_CLOSURE( VVDACTR_checkmodes, WVDACTR_checkmodes, XVDACTR_checkmodes );
(( XVDACTR_checkmodes * ) ( VVDACTR_checkmodes.nonlocals )) -> PLDACTR_mcond = PLDACTR_mcond;
(( XVDACTR_checkmodes * ) ( VVDACTR_checkmodes.nonlocals )) -> PZBACTR_faultp = PZBACTR_faultp;
(( XVDACTR_checkmodes * ) ( VVDACTR_checkmodes.nonlocals )) -> IUDACTR_substitute = IUDACTR_substitute;
(( XVDACTR_checkmodes * ) ( VVDACTR_checkmodes.nonlocals )) -> YYAACTR_newmode1 = YYAACTR_newmode1;
(( XVDACTR_checkmodes * ) ( VVDACTR_checkmodes.nonlocals )) -> TYAACTR_untreated = (&TYAACTR_untreated);
 /* line 4733: */
 /* line 4750: */
A_CLOSURE( HWDACTR_flattenunion, IWDACTR_flattenunion, JWDACTR_flattenunion );
(( JWDACTR_flattenunion * ) ( HWDACTR_flattenunion.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( JWDACTR_flattenunion * ) ( HWDACTR_flattenunion.nonlocals )) -> PZBACTR_faultp = PZBACTR_faultp;
(( JWDACTR_flattenunion * ) ( HWDACTR_flattenunion.nonlocals )) -> HWDACTR_flattenunion = HWDACTR_flattenunion;
 /* line 4786: */
A_CLOSURE( LXDACTR_accidental_eqs, MXDACTR_accidental_eqs, NXDACTR_accidental_eqs );
(( NXDACTR_accidental_eqs * ) ( LXDACTR_accidental_eqs.nonlocals )) -> IUDACTR_substitute = IUDACTR_substitute;
 /* line 4930: */
A_CLOSURE( VCEACTR_assign, WCEACTR_assign, XCEACTR_assign );
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> QYAACTR_globcurrent = (&QYAACTR_globcurrent);
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> ZFCACTR_assmarker = ZFCACTR_assmarker;
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> QJBACTR_fault = QJBACTR_fault;
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> Output = Output;
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> GBBACTR_lastidchanged = (&GBBACTR_lastidchanged);
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> KTAACTR_idmess = KTAACTR_idmess;
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> LXBACTR_insertassmntproc = LXBACTR_insertassmntproc;
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> CZAACTR_lastrd = (&CZAACTR_lastrd);
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> BZAACTR_nullid = BZAACTR_nullid;
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> VECACTR_marker = VECACTR_marker;
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> VCEACTR_assign = VCEACTR_assign;
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> ZHCACTR_enflex = ZHCACTR_enflex;
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> ZVBACTR_insertvec = ZVBACTR_insertvec;
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> FVBACTR_insertarray = FVBACTR_insertarray;
(( XCEACTR_assign * ) ( VCEACTR_assign.nonlocals )) -> GZAACTR_maxident = (&GZAACTR_maxident);
 /* line 5182: */
A_CLOSURE( RJEACTR_findproxy, SJEACTR_findproxy, TJEACTR_findproxy );
(( TJEACTR_findproxy * ) ( RJEACTR_findproxy.nonlocals )) -> IZAACTR_prl = (&IZAACTR_prl);
(( TJEACTR_findproxy * ) ( RJEACTR_findproxy.nonlocals )) -> PZBACTR_faultp = PZBACTR_faultp;
 /* line 5199: */
DKEACTR_maxchar2 = (XDAACTR_maxchar*XDAACTR_maxchar);
 /* line 5202: */
A_CLOSURE( KKEACTR_simplespec, LKEACTR_simplespec, MKEACTR_simplespec );
(( MKEACTR_simplespec * ) ( KKEACTR_simplespec.nonlocals )) -> VYAACTR_lastmode = (&VYAACTR_lastmode);
(( MKEACTR_simplespec * ) ( KKEACTR_simplespec.nonlocals )) -> XTAACTR_spaces = XTAACTR_spaces;
(( MKEACTR_simplespec * ) ( KKEACTR_simplespec.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( MKEACTR_simplespec * ) ( KKEACTR_simplespec.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
(( MKEACTR_simplespec * ) ( KKEACTR_simplespec.nonlocals )) -> DKEACTR_maxchar2 = DKEACTR_maxchar2;
(( MKEACTR_simplespec * ) ( KKEACTR_simplespec.nonlocals )) -> ZICACTR_mproc = ZICACTR_mproc;
(( MKEACTR_simplespec * ) ( KKEACTR_simplespec.nonlocals )) -> UXBACTR_opproc = UXBACTR_opproc;
(( MKEACTR_simplespec * ) ( KKEACTR_simplespec.nonlocals )) -> YYAACTR_newmode1 = YYAACTR_newmode1;
(( MKEACTR_simplespec * ) ( KKEACTR_simplespec.nonlocals )) -> BIDACTR_equality = BIDACTR_equality;
(( MKEACTR_simplespec * ) ( KKEACTR_simplespec.nonlocals )) -> WHDACTR_test_flex = (&WHDACTR_test_flex);
(( MKEACTR_simplespec * ) ( KKEACTR_simplespec.nonlocals )) -> PHDACTR_last_flex = PHDACTR_last_flex;
(( MKEACTR_simplespec * ) ( KKEACTR_simplespec.nonlocals )) -> Output = Output;
(( MKEACTR_simplespec * ) ( KKEACTR_simplespec.nonlocals )) -> TZAACTR_modulelevel = (&TZAACTR_modulelevel);
 /* line 5510: */
A_CLOSURE( WTEACTR_treatspec, XTEACTR_treatspec, YTEACTR_treatspec );
(( YTEACTR_treatspec * ) ( WTEACTR_treatspec.nonlocals )) -> Givespec = Givespec;
(( YTEACTR_treatspec * ) ( WTEACTR_treatspec.nonlocals )) -> Output = Output;
(( YTEACTR_treatspec * ) ( WTEACTR_treatspec.nonlocals )) -> TZAACTR_modulelevel = (&TZAACTR_modulelevel);
(( YTEACTR_treatspec * ) ( WTEACTR_treatspec.nonlocals )) -> RABACTR_concheck = (&RABACTR_concheck);
(( YTEACTR_treatspec * ) ( WTEACTR_treatspec.nonlocals )) -> QYAACTR_globcurrent = (&QYAACTR_globcurrent);
(( YTEACTR_treatspec * ) ( WTEACTR_treatspec.nonlocals )) -> PZBACTR_faultp = PZBACTR_faultp;
(( YTEACTR_treatspec * ) ( WTEACTR_treatspec.nonlocals )) -> Givemoduledetails = Givemoduledetails;
(( YTEACTR_treatspec * ) ( WTEACTR_treatspec.nonlocals )) -> WTEACTR_treatspec = WTEACTR_treatspec;
(( YTEACTR_treatspec * ) ( WTEACTR_treatspec.nonlocals )) -> BZAACTR_nullid = BZAACTR_nullid;
(( YTEACTR_treatspec * ) ( WTEACTR_treatspec.nonlocals )) -> KKEACTR_simplespec = KKEACTR_simplespec;
 /* line 5570: */
A_CLOSURE( HVEACTR_closure, IVEACTR_closure, JVEACTR_closure );
(( JVEACTR_closure * ) ( HVEACTR_closure.nonlocals )) -> Givemoduledetails = Givemoduledetails;
(( JVEACTR_closure * ) ( HVEACTR_closure.nonlocals )) -> UZAACTR_nextmodule = (&UZAACTR_nextmodule);
(( JVEACTR_closure * ) ( HVEACTR_closure.nonlocals )) -> Output = Output;
(( JVEACTR_closure * ) ( HVEACTR_closure.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( JVEACTR_closure * ) ( HVEACTR_closure.nonlocals )) -> PZBACTR_faultp = PZBACTR_faultp;
(( JVEACTR_closure * ) ( HVEACTR_closure.nonlocals )) -> Givespec = Givespec;
(( JVEACTR_closure * ) ( HVEACTR_closure.nonlocals )) -> HVEACTR_closure = HVEACTR_closure;
 /* line 5680: */
GYEACTR_mdone = (A68_122 *)A68_NIL;
HYEACTR_kmfree = (A68_122 *)A68_NIL;
 /* line 5682: */
A_CLOSURE( NYEACTR_makekeepinfo, OYEACTR_makekeepinfo, PYEACTR_makekeepinfo );
(( PYEACTR_makekeepinfo * ) ( NYEACTR_makekeepinfo.nonlocals )) -> QSAACTR_compsize = (&QSAACTR_compsize);
(( PYEACTR_makekeepinfo * ) ( NYEACTR_makekeepinfo.nonlocals )) -> GYEACTR_mdone = (&GYEACTR_mdone);
(( PYEACTR_makekeepinfo * ) ( NYEACTR_makekeepinfo.nonlocals )) -> YYAACTR_newmode1 = YYAACTR_newmode1;
(( PYEACTR_makekeepinfo * ) ( NYEACTR_makekeepinfo.nonlocals )) -> HYEACTR_kmfree = (&HYEACTR_kmfree);
(( PYEACTR_makekeepinfo * ) ( NYEACTR_makekeepinfo.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( PYEACTR_makekeepinfo * ) ( NYEACTR_makekeepinfo.nonlocals )) -> DKEACTR_maxchar2 = DKEACTR_maxchar2;
(( PYEACTR_makekeepinfo * ) ( NYEACTR_makekeepinfo.nonlocals )) -> RRBACTR_insertprocp = RRBACTR_insertprocp;
(( PYEACTR_makekeepinfo * ) ( NYEACTR_makekeepinfo.nonlocals )) -> YVAACTR_boolnil = (&YVAACTR_boolnil);
(( PYEACTR_makekeepinfo * ) ( NYEACTR_makekeepinfo.nonlocals )) -> UXBACTR_opproc = UXBACTR_opproc;
 /* line 5931: */
A_CLOSURE( XCFACTR_addtokl, YCFACTR_addtokl, ZCFACTR_addtokl );
(( ZCFACTR_addtokl * ) ( XCFACTR_addtokl.nonlocals )) -> LZAACTR_kl = (&LZAACTR_kl);
(( ZCFACTR_addtokl * ) ( XCFACTR_addtokl.nonlocals )) -> QJBACTR_fault = QJBACTR_fault;
(( ZCFACTR_addtokl * ) ( XCFACTR_addtokl.nonlocals )) -> MZAACTR_rkl = (&MZAACTR_rkl);
 /* line 5968: */
A_CLOSURE( SDFACTR_anonymous, TDFACTR_anonymous, UDFACTR_anonymous );
(( UDFACTR_anonymous * ) ( SDFACTR_anonymous.nonlocals )) -> Givemoduledetails = Givemoduledetails;
(( UDFACTR_anonymous * ) ( SDFACTR_anonymous.nonlocals )) -> RABACTR_concheck = (&RABACTR_concheck);
(( UDFACTR_anonymous * ) ( SDFACTR_anonymous.nonlocals )) -> PZBACTR_faultp = PZBACTR_faultp;
(( UDFACTR_anonymous * ) ( SDFACTR_anonymous.nonlocals )) -> TZAACTR_modulelevel = (&TZAACTR_modulelevel);
(( UDFACTR_anonymous * ) ( SDFACTR_anonymous.nonlocals )) -> Output = Output;
(( UDFACTR_anonymous * ) ( SDFACTR_anonymous.nonlocals )) -> UZAACTR_nextmodule = (&UZAACTR_nextmodule);
(( UDFACTR_anonymous * ) ( SDFACTR_anonymous.nonlocals )) -> Givespec = Givespec;
(( UDFACTR_anonymous * ) ( SDFACTR_anonymous.nonlocals )) -> KKEACTR_simplespec = KKEACTR_simplespec;
(( UDFACTR_anonymous * ) ( SDFACTR_anonymous.nonlocals )) -> QYAACTR_globcurrent = (&QYAACTR_globcurrent);
(( UDFACTR_anonymous * ) ( SDFACTR_anonymous.nonlocals )) -> EABACTR_libids = EABACTR_libids;
(( UDFACTR_anonymous * ) ( SDFACTR_anonymous.nonlocals )) -> MABACTR_libinds = MABACTR_libinds;
(( UDFACTR_anonymous * ) ( SDFACTR_anonymous.nonlocals )) -> VZAACTR_nextlibno = (&VZAACTR_nextlibno);
FFDACTR_bumodule = SDFACTR_anonymous;
 /* line 6015: */
 /* line 6016: */
A_CLOSURE( JEFACTR_findid, KEFACTR_findid, LEFACTR_findid );
(( LEFACTR_findid * ) ( JEFACTR_findid.nonlocals )) -> QYAACTR_globcurrent = (&QYAACTR_globcurrent);
(( LEFACTR_findid * ) ( JEFACTR_findid.nonlocals )) -> TSAACTR_idhash = (&TSAACTR_idhash);
(( LEFACTR_findid * ) ( JEFACTR_findid.nonlocals )) -> PSAACTR_ident = (&PSAACTR_ident);
(( LEFACTR_findid * ) ( JEFACTR_findid.nonlocals )) -> EABACTR_libids = EABACTR_libids;
(( LEFACTR_findid * ) ( JEFACTR_findid.nonlocals )) -> FFDACTR_bumodule = (&FFDACTR_bumodule);
(( LEFACTR_findid * ) ( JEFACTR_findid.nonlocals )) -> ITAACTR_supflts = (&ITAACTR_supflts);
(( LEFACTR_findid * ) ( JEFACTR_findid.nonlocals )) -> PZBACTR_faultp = PZBACTR_faultp;
 /* line 6050: */
A_CLOSURE( GFFACTR_range, HFFACTR_range, IFFACTR_range );
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> QYAACTR_globcurrent = (&QYAACTR_globcurrent);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> JFBACTR_stind = (&JFBACTR_stind);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> VBBACTR_brind = (&VBBACTR_brind);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> SYAACTR_modedecdepth = (&SYAACTR_modedecdepth);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> ITAACTR_supflts = (&ITAACTR_supflts);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> JEBACTR_insertsn = (&JEBACTR_insertsn);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> LEBACTR_ignorablen = (&LEBACTR_ignorablen);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> NEBACTR_nonducstart = (&NEBACTR_nonducstart);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> PEBACTR_insertsf = (&PEBACTR_insertsf);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> REBACTR_ignorablef = (&REBACTR_ignorablef);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> TEBACTR_nonpicstart = (&TEBACTR_nonpicstart);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> WGBACTR_checkinsert = WGBACTR_checkinsert;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> MFBACTR_t1 = (&MFBACTR_t1);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> VJBACTR_abort = VJBACTR_abort;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> WDBACTR_recoverdepth = (&WDBACTR_recoverdepth);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> UIBACTR_faultchars = UIBACTR_faultchars;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> LFDACTR_reader = LFDACTR_reader;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> KFBACTR_crts = (&KFBACTR_crts);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> LFBACTR_failpos = (&LFBACTR_failpos);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> ODBACTR_next = (&ODBACTR_next);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> PSAACTR_ident = (&PSAACTR_ident);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> XTAACTR_spaces = XTAACTR_spaces;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> HFBACTR_sidstack = (&HFBACTR_sidstack);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> QDBACTR_look = (&QDBACTR_look);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> GFFACTR_range = GFFACTR_range;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> LSAACTR_tind = (&LSAACTR_tind);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> PFBACTR_analyser = PFBACTR_analyser;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> JBBACTR_oldtind = (&JBBACTR_oldtind);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> QJBACTR_fault = QJBACTR_fault;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> FVBACTR_insertarray = FVBACTR_insertarray;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> PZBACTR_faultp = PZBACTR_faultp;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> LTBACTR_insertstrct = LTBACTR_insertstrct;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> JDBACTR_decmode = (&JDBACTR_decmode);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> HTAACTR_iv = (&HTAACTR_iv);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> TWBACTR_insertis = TWBACTR_insertis;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> ZVBACTR_insertvec = ZVBACTR_insertvec;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> YLCACTR_makeflex = YLCACTR_makeflex;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> LUBACTR_insertprc = LUBACTR_insertprc;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> JGCACTR_deflex = JGCACTR_deflex;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> OSBACTR_insertunion = OSBACTR_insertunion;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> RRBACTR_insertprocp = RRBACTR_insertprocp;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> KUAACTR_modes = KUAACTR_modes;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> ZYAACTR_nolongs = (&ZYAACTR_nolongs);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> YYAACTR_newmode1 = YYAACTR_newmode1;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> VYAACTR_lastmode = (&VYAACTR_lastmode);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> FZAACTR_outlevel = (&FZAACTR_outlevel);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> GBBACTR_lastidchanged = (&GBBACTR_lastidchanged);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> Output = Output;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> BZAACTR_nullid = BZAACTR_nullid;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> GZAACTR_maxident = (&GZAACTR_maxident);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> KDBACTR_cindic = (&KDBACTR_cindic);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> LODACTR_treatam = LODACTR_treatam;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> BEBACTR_lkmodeins = (&BEBACTR_lkmodeins);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> AEBACTR_lkinserts = (&AEBACTR_lkinserts);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> ZDBACTR_lkend = (&ZDBACTR_lkend);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> SSAACTR_idsize = (&SSAACTR_idsize);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> TSAACTR_idhash = (&TSAACTR_idhash);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> DEBACTR_lkscam = (&DEBACTR_lkscam);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> CEBACTR_lktype = (&CEBACTR_lktype);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> NSAACTR_find = (&NSAACTR_find);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> JSAACTR_globfbuff = JSAACTR_globfbuff;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> IBBACTR_noofstrings = (&IBBACTR_noofstrings);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> RYCACTR_strong = RYCACTR_strong;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> OYAACTR_formatunion = (&OYAACTR_formatunion);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> NYBACTR_heapvalue = NYBACTR_heapvalue;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> EZAACTR_rdmode = (&EZAACTR_rdmode);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> ZJBACTR_primread = ZJBACTR_primread;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> XJCACTR_pmode = XJCACTR_pmode;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> CXCACTR_hcf = CXCACTR_hcf;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> TBBACTR_brackets = TBBACTR_brackets;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> AZAACTR_globccmode = (&AZAACTR_globccmode);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> GDBACTR_id1 = (&GDBACTR_id1);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> KTAACTR_idmess = KTAACTR_idmess;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> PDBACTR_bangtype = (&PDBACTR_bangtype);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> JEFACTR_findid = JEFACTR_findid;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> XZAACTR_burestrict = (&XZAACTR_burestrict);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> WZAACTR_lastkept = (&WZAACTR_lastkept);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> YMDACTR_testkept = YMDACTR_testkept;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> ZICACTR_mproc = ZICACTR_mproc;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> DZAACTR_labno = (&DZAACTR_labno);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> VECACTR_marker = VECACTR_marker;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> CTAACTR_str = CTAACTR_str;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> ETAACTR_stringsize = (&ETAACTR_stringsize);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> ATAACTR_string = ATAACTR_string;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> FTAACTR_noofchars = (&FTAACTR_noofchars);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> HDBACTR_strsize = (&HDBACTR_strsize);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> IDBACTR_strbase = (&IDBACTR_strbase);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> GTAACTR_stringbase = (&GTAACTR_stringbase);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> DUAACTR_string1 = DUAACTR_string1;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> ZRAACTR_isint = (&ZRAACTR_isint);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> MDBACTR_cbiop = (&MDBACTR_cbiop);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> OSAACTR_compsymb = (&OSAACTR_compsymb);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> RSAACTR_comphash = (&RSAACTR_comphash);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> LDBACTR_cinst = (&LDBACTR_cinst);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> NDBACTR_clibop = (&NDBACTR_clibop);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> MXCACTR_firmto = MXCACTR_firmto;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> VBDACTR_findbiop = VBDACTR_findbiop;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> MABACTR_libinds = MABACTR_libinds;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> Charset = Charset;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> FFDACTR_bumodule = (&FFDACTR_bumodule);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> UXBACTR_opproc = UXBACTR_opproc;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> ZFCACTR_assmarker = ZFCACTR_assmarker;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> VCEACTR_assign = VCEACTR_assign;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> OBDACTR_weak = OBDACTR_weak;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> OSCACTR_coerce = OSCACTR_coerce;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> EJCACTR_deref = EJCACTR_deref;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> RYAACTR_enqv = (&RYAACTR_enqv);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> XDBACTR_nscreader = (&XDBACTR_nscreader);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> HZAACTR_xm = (&HZAACTR_xm);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> Givemoduledetails = Givemoduledetails;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> KZAACTR_close = (&KZAACTR_close);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> SZAACTR_moduleno = (&SZAACTR_moduleno);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> HVEACTR_closure = HVEACTR_closure;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> UZAACTR_nextmodule = (&UZAACTR_nextmodule);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> HEBACTR_inprogram = (&HEBACTR_inprogram);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> CZAACTR_lastrd = (&CZAACTR_lastrd);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> VZAACTR_nextlibno = (&VZAACTR_nextlibno);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> JZAACTR_tempprl = (&JZAACTR_tempprl);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> IZAACTR_prl = (&IZAACTR_prl);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> NYEACTR_makekeepinfo = NYEACTR_makekeepinfo;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> LZAACTR_kl = (&LZAACTR_kl);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> QSAACTR_compsize = (&QSAACTR_compsize);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> BVAACTR_globinfo = (&BVAACTR_globinfo);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> WTEACTR_treatspec = WTEACTR_treatspec;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> TZAACTR_modulelevel = (&TZAACTR_modulelevel);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> QZAACTR_testsubst = (&QZAACTR_testsubst);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> NZAACTR_substack = (&NZAACTR_substack);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> RZAACTR_substlevel = (&RZAACTR_substlevel);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> RJEACTR_findproxy = RJEACTR_findproxy;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> PZAACTR_tsubst = (&PZAACTR_tsubst);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> OZAACTR_sublist = (&OZAACTR_sublist);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> XCFACTR_addtokl = XCFACTR_addtokl;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> MZAACTR_rkl = (&MZAACTR_rkl);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> BUAACTR_typechar1 = (&BUAACTR_typechar1);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> TYAACTR_untreated = (&TYAACTR_untreated);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> IUDACTR_substitute = IUDACTR_substitute;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> HWDACTR_flattenunion = HWDACTR_flattenunion;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> LXDACTR_accidental_eqs = LXDACTR_accidental_eqs;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> BIDACTR_equality = BIDACTR_equality;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> WHDACTR_test_flex = (&WHDACTR_test_flex);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> PHDACTR_last_flex = PHDACTR_last_flex;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> VVDACTR_checkmodes = VVDACTR_checkmodes;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> BTDACTR_modevars = BTDACTR_modevars;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> BZBACTR_tidyv = BZBACTR_tidyv;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> AUAACTR_identformat = AUAACTR_identformat;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> MLCACTR_unite = MLCACTR_unite;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> YNDACTR_loadmodeproc = YNDACTR_loadmodeproc;
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> PYAACTR_formatproc = (&PYAACTR_formatproc);
(( IFFACTR_range * ) ( GFFACTR_range.nonlocals )) -> XRAACTR_endcompile = XRAACTR_endcompile;
 /* line 9132: */
FZAACTR_outlevel = 2;
 /* line 9133: */
A_CALLPROC(GFFACTR_range,((&BVAACTR_globinfo), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &VBHACTR),((&BVAACTR_globinfo), (A68_67 *)A68_NIL, (A68_110 *)A68_NIL, (A68_BOOL *)A68_NIL, &VBHACTR,(GFFACTR_range).nonlocals));
VBHACTR;
 /* line 9135: */
YRAACTR_endcompile:
 /* line 9138: */
A_CALLPROC(Output,(SKAACTR_down, 0),(SKAACTR_down, 0,(Output).nonlocals));
 /* line 9142: */
 /* line 9143: */
if ( (EEBACTR_noflts!=(-1)) )
{ 
EEBACTR_noflts = 500;
 /* line 9144: */
 /* line 9145: */
A_CALLPROC(VJBACTR_abort,((-1)),((-1),(VJBACTR_abort).nonlocals));
} 
 /* line 9147: */
WRAACTR_endcompile2:
 /* line 9149: */
for ( ;; )
{ 
 /* line 9150: */
if ( !(((*(&((&BVAACTR_globinfo)->Labs)))!=XQAACTR_nillab)) ) break;
 /* line 9151: */
 /* line 9153: */
if ( ((*(&((*(&((&BVAACTR_globinfo)->Labs)))->Status)))==0) )
{ 
 /* line 9155: */
WBHACTR = 194;
} 
else
{ 
WBHACTR = 184;
} 
 /* line 9156: */
A_CALLPROC(PZBACTR_faultp,(WBHACTR, 0, 0, (&((*(&((&BVAACTR_globinfo)->Labs)))->Name))),(WBHACTR, 0, 0, (&((*(&((&BVAACTR_globinfo)->Labs)))->Name)),(PZBACTR_faultp).nonlocals));
 /* line 9157: */
 /* line 9158: */
XBHACTR = (&((&BVAACTR_globinfo)->Labs)) ;
(*XBHACTR) = (*(&((*(&((&BVAACTR_globinfo)->Labs)))->Rest)));
}
 /* line 9160: */
for ( ;; )
{ 
 /* line 9161: */
if ( !((IZAACTR_prl!=GQAACTR_nilprl)) ) break;
A_CALLPROC(PZBACTR_faultp,(185, 0, 0, (&(IZAACTR_prl->Name))),(185, 0, 0, (&(IZAACTR_prl->Name)),(PZBACTR_faultp).nonlocals));
 /* line 9163: */
 /* line 9164: */
IZAACTR_prl = (*(&(IZAACTR_prl->Rest)));
}
 /* line 9166: */
 /* line 9167: */
if ( (GZAACTR_maxident>=EKAACTR_startrd) )
{ 
 /* line 9169: */
A_CALLPROC(QJBACTR_fault,(210),(210,(QJBACTR_fault).nonlocals));
} 
 /* line 9170: */
 /* line 9171: */
if ( (CZAACTR_lastrd>=FKAACTR_startlib) )
{ 
 /* line 9173: */
A_CALLPROC(QJBACTR_fault,(211),(211,(QJBACTR_fault).nonlocals));
} 
 /* line 9174: */
 /* line 9175: */
if ( (VZAACTR_nextlibno>=GKAACTR_startkmp) )
{ 
 /* line 9177: */
A_CALLPROC(QJBACTR_fault,(212),(212,(QJBACTR_fault).nonlocals));
} 
 /* line 9179: */
 /* line 9180: */
if ( (EEBACTR_noflts!=(-1)) )
{ 
 /* line 9181: */
for ( YBHACTR_i = 1;
YBHACTR_i <= 64;
YBHACTR_i += 1 )
{ 
UYAACTR_ri = (*(&A_VINDEX(EABACTR_libids,YBHACTR_i)));
 /* line 9182: */
for ( ;; )
{ 
 /* line 9183: */
if ( !((UYAACTR_ri!=TQAACTR_nilid)) ) break;
EEBACTR_noflts = 10;
 /* line 9184: */
ZBHACTR = ((*(&(UYAACTR_ri->Mode)))==ZKAACTR_faultmode);
if ( ZBHACTR )
{ /* line 9185: */
ZBHACTR = ((*(&(UYAACTR_ri->Decno)))!=1);
}
 /* line 9186: */
if ( ZBHACTR )
{ 
 /* line 9187: */
A_CALLPROC(PZBACTR_faultp,(186, (*(&(UYAACTR_ri->Decno))), 0, (&(UYAACTR_ri->Name))),(186, (*(&(UYAACTR_ri->Decno))), 0, (&(UYAACTR_ri->Name)),(PZBACTR_faultp).nonlocals));
} 
 /* line 9188: */
 /* line 9189: */
UYAACTR_ri = (*(&(UYAACTR_ri->Rest)));
}
 /* line 9190: */
}
 /* line 9191: */
} 
 /* line 9193: */
 /* line 9195: */
ACHACTR = (EEBACTR_noflts==(-1));
} 
A_PROC_EXIT(compile);
return( ACHACTR );
} 
#undef NL
 /* line 2: */
 /* line 5: */
void ZJAACTR(void)   /* initialise DECS rscompiler */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel","-dir",".","rscompiler.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config/a68config.m","./incinstallation.m","./incid.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_BOOL * OKAACTR;  /* YIELD */
A68_BOOL * PKAACTR;  /* YIELD */
A68_106  RKAACTR;  /* OPERATORS - mode -> union mode */
A68_106  TKAACTR;  /* OPERATORS - mode -> union mode */
A68_INT * LPAACTR;  /* YIELD */
A68_INT * MPAACTR;  /* YIELD */
A68_INT * NPAACTR;  /* YIELD */
A68_INT * OPAACTR;  /* YIELD */
A68_INT * PPAACTR;  /* YIELD */
A68_INT * QPAACTR;  /* YIELD */
A68_INT * RPAACTR;  /* YIELD */
A68_INT * VPAACTR;  /* YIELD */
A68_INT * WPAACTR;  /* YIELD */
A68_INT * XPAACTR;  /* YIELD */
A68_VC  DQAACTR;  /* avoid structure result */
A68_85  HRAACTR;  /* collateral clause result */
A68_87  JRAACTR;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ODAACTR();   /* USE incinstallation */
BAAACTR();   /* USE incid */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20-debian/src/rscompiler.a68";
A_config.translation_time = "Wed Apr 21 16:34:03 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "YJAACTR (from seed file) ";
A_config.spec_change_time = "Wed Apr 21 16:34:03 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS rscompiler);
UEAALIB_a68config(LGAALIB_configinfo, DKAACTR);
 /* line 264: */
EKAACTR_startrd = (JAAACTR_minrdno-1);
FKAACTR_startlib = (LAAACTR_minlibid-1);
 /* line 265: */
 /* line 273: */
 /* line 279: */
 /* line 281: */
LKAACTR_bolddiff = (-32);
 /* line 288: */
 /* line 290: */
 /* line 293: */
 /* line 309: */
 /* line 311: */
 /* line 320: */
 /* line 322: */
 /* line 324: */
 /* line 327: */
 /* line 350: */
 /* line 354: */
 /* line 378: */
 /* line 381: */
 /* line 387: */
 /* line 390: */
 /* line 391: */
OKAACTR = (&((&MKAACTR_up1)->Up)) ;
(*OKAACTR) = A68_TRUE;
 /* line 392: */
PKAACTR = (&((&NKAACTR_down1)->Up)) ;
(*PKAACTR) = A68_FALSE;
 /* line 393: */
QKAACTR_up = A_UNITE(RKAACTR,mode1,1,MKAACTR_up1);
SKAACTR_down = A_UNITE(TKAACTR,mode1,1,NKAACTR_down1);
 /* line 395: */
 /* line 396: */
 /* line 397: */
 /* line 398: */
 /* line 399: */
 /* line 400: */
 /* line 401: */
 /* line 402: */
 /* line 403: */
 /* line 404: */
 /* line 405: */
 /* line 406: */
 /* line 407: */
 /* line 408: */
 /* line 409: */
 /* line 410: */
 /* line 411: */
 /* line 414: */
LLAACTR_ccbit = (A68_BITS )2;
 /* line 415: */
MLAACTR_operatorbit = (A68_BITS )4;
 /* line 416: */
NLAACTR_valbit = (A68_BITS )8;
 /* line 417: */
OLAACTR_holebit = (A68_BITS )16;
 /* line 418: */
PLAACTR_globscopebit = (A68_BITS )32;
 /* line 421: */
QLAACTR_priobit = (A68_BITS )4;
 /* line 422: */
RLAACTR_exitbit = (A68_BITS )8;
 /* line 423: */
SLAACTR_semibit = (A68_BITS )16;
 /* line 424: */
TLAACTR_heapbit = (A68_BITS )32;
 /* line 425: */
ULAACTR_decbit = (A68_BITS )64;
 /* line 426: */
VLAACTR_vardecbit = (A68_BITS )128;
 /* line 427: */
WLAACTR_compgenbit = (A68_BITS )256;
 /* line 428: */
XLAACTR_elifousebit = (A68_BITS )512;
 /* line 429: */
YLAACTR_labbit = (A68_BITS )1024;
 /* line 430: */
ZLAACTR_dontpullbit = (A68_BITS )2048;
 /* line 431: */
AMAACTR_dyprocbit = (A68_BITS )4096;
 /* line 432: */
BMAACTR_dyvardecbit = (A68_BITS )8192;
 /* line 433: */
CMAACTR_dydecbit = (A68_BITS )16384;
 /* line 434: */
DMAACTR_genprocbit = (A68_BITS )32768;
 /* line 435: */
EMAACTR_locgenbit = (A68_BITS )65536;
 /* line 436: */
FMAACTR_locdydecbit = (A68_BITS )131072;
 /* line 439: */
 /* line 440: */
 /* line 441: */
 /* line 442: */
 /* line 443: */
 /* line 444: */
 /* line 445: */
 /* line 446: */
 /* line 447: */
 /* line 448: */
 /* line 449: */
 /* line 450: */
 /* line 451: */
 /* line 452: */
 /* line 453: */
 /* line 454: */
 /* line 457: */
 /* line 458: */
 /* line 459: */
 /* line 460: */
 /* line 461: */
 /* line 462: */
 /* line 463: */
 /* line 464: */
 /* line 465: */
 /* line 466: */
 /* line 467: */
 /* line 468: */
 /* line 469: */
 /* line 470: */
 /* line 471: */
 /* line 472: */
 /* line 473: */
 /* line 474: */
 /* line 475: */
 /* line 476: */
 /* line 477: */
 /* line 478: */
 /* line 479: */
 /* line 480: */
 /* line 481: */
 /* line 482: */
 /* line 483: */
 /* line 484: */
 /* line 485: */
 /* line 488: */
 /* line 489: */
 /* line 490: */
 /* line 491: */
 /* line 492: */
 /* line 493: */
 /* line 494: */
 /* line 495: */
 /* line 496: */
 /* line 497: */
 /* line 498: */
 /* line 499: */
 /* line 500: */
 /* line 501: */
 /* line 502: */
 /* line 503: */
 /* line 504: */
 /* line 505: */
 /* line 506: */
 /* line 507: */
 /* line 508: */
 /* line 509: */
 /* line 510: */
 /* line 513: */
 /* line 514: */
 /* line 515: */
 /* line 516: */
 /* line 517: */
 /* line 518: */
 /* line 519: */
 /* line 520: */
 /* line 524: */
 /* line 525: */
LPAACTR = (&((&EPAACTR_xwass)->W)) ;
(*LPAACTR) = 1;
 /* line 526: */
MPAACTR = (&((&FPAACTR_xwandth)->W)) ;
(*MPAACTR) = 2;
 /* line 527: */
NPAACTR = (&((&GPAACTR_xworel)->W)) ;
(*NPAACTR) = 3;
 /* line 528: */
OPAACTR = (&((&HPAACTR_xwindex)->W)) ;
(*OPAACTR) = 4;
 /* line 529: */
PPAACTR = (&((&IPAACTR_xwplusabetc)->W)) ;
(*PPAACTR) = 5;
 /* line 530: */
QPAACTR = (&((&JPAACTR_xwforall)->W)) ;
(*QPAACTR) = 6;
 /* line 531: */
RPAACTR = (&((&KPAACTR_xwloop)->W)) ;
(*RPAACTR) = 7;
 /* line 533: */
 /* line 534: */
VPAACTR = (&((&SPAACTR_skip)->Nse)) ;
(*VPAACTR) = VKAACTR_skipmode;
 /* line 535: */
WPAACTR = (&((&TPAACTR_nil)->Nse)) ;
(*WPAACTR) = WKAACTR_nilmode;
 /* line 536: */
XPAACTR = (&((&UPAACTR_empty)->Nse)) ;
(*XPAACTR) = 1;
 /* line 538: */
ZPAACTR_generator( A68_TRUE, &DQAACTR );
CQAACTR_emptystring = DQAACTR;
 /* line 541: */
 /* line 548: */
 /* line 550: */
 /* line 562: */
 /* line 564: */
 /* line 565: */
 /* line 566: */
 /* line 567: */
 /* line 568: */
 /* line 569: */
 /* line 571: */
 /* line 575: */
 /* line 577: */
 /* line 583: */
 /* line 585: */
 /* line 587: */
 /* line 589: */
 /* line 591: */
 /* line 593: */
 /* line 595: */
 /* line 597: */
 /* line 599: */
 /* line 601: */
 /* line 602: */
LQAACTR_decsmask = (A68_BITS )1023;
 /* line 604: */
MQAACTR_z = (A68_BITS )0;
 /* line 605: */
NQAACTR_z1 = (A68_BITS )1;
 /* line 607: */
 /* line 608: */
 /* line 609: */
 /* line 610: */
 /* line 611: */
 /* line 612: */
 /* line 613: */
 /* line 614: */
 /* line 615: */
 /* line 616: */
 /* line 617: */
 /* line 618: */
 /* line 619: */
 /* line 621: */
BRAACTR_downbit = (A68_BITS )1;
 /* line 622: */
CRAACTR_assmntbit = (A68_BITS )2;
 /* line 623: */
DRAACTR_decprio = (A68_BITS )(ULAACTR_decbit|QLAACTR_priobit);
 /* line 624: */
ERAACTR_labsemi = (A68_BITS )(YLAACTR_labbit|SLAACTR_semibit);
 /* line 625: */
FRAACTR_alldecbits = (A68_BITS )(ULAACTR_decbit|VLAACTR_vardecbit);
 /* line 626: */
GRAACTR_notdontpull = ~ZLAACTR_dontpullbit;
 /* line 628: */
HRAACTR.Fn = BOAACTR_xvoid;
HRAACTR.M = YKAACTR_voidmode;
HRAACTR.Param = 0;
IRAACTR_opervoid = HRAACTR;
 /* line 629: */
JRAACTR.Fn = UNAACTR_xsemi;
JRAACTR.M = 0;
JRAACTR.Props = WLAACTR_compgenbit;
JRAACTR.Param = 0;
KRAACTR_controlsemi = JRAACTR;
 /* line 631: */
LRAACTR_freevl = (A68_124 *)A68_NIL;
 /* line 635: */
 /* line 9199: */
 /* line 9201: */
 /* line 9211: */
/*SKIP*/;
A_PROC_EXIT(DECS rscompiler);
} 
#undef NL
/* end of translation of rscompiler.a68 */
