/* UNAME:AKJACTR */
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
struct A68t43{
A68_INT  Mode;
A_PAD_INT(PAD_19)
struct A68t43 * Rest;
};
typedef struct A68t43  A68_43 ;    /* STRUCT(INT,REF MODE43)  */
struct A68t44{
A68_INT  Deproc;
A_PAD_INT(PAD_20)
};
typedef struct A68t44  A68_44 ;    /* STRUCT(INT)  */
struct A68t45{
A68_INT  Rdenno;
A_PAD_INT(PAD_21)
struct A68t43 * Modelist;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(INT,REF MODE43)  */
struct A68t46{
A68_INT  Deproc;
A_PAD_INT(PAD_22)
struct A68t43 * Pars;
};
typedef struct A68t46  A68_46 ;    /* STRUCT(INT,REF MODE43)  */
struct A68t47{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_INT  Fieldno;
A_PAD_INT(PAD_24)
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_25)
struct A68t47 * Rest;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(INT,INT,MODE31,REF MODE47)  */
struct A68t48{
A68_INT  Rdenno;
A_PAD_INT(PAD_26)
A68_INT  Deflex;
A_PAD_INT(PAD_27)
struct A68t47 * Sels;
};
typedef struct A68t48  A68_48 ;    /* STRUCT(INT,INT,REF MODE47)  */
struct A68t49{
A68_INT  Rdenno;
A_PAD_INT(PAD_28)
A68_INT  Imode;
A_PAD_INT(PAD_29)
A68_INT  Length;
A_PAD_INT(PAD_30)
A68_INT  Deflex;
A_PAD_INT(PAD_31)
};
typedef struct A68t49  A68_49 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t50{
A68_INT  Rdenno;
A_PAD_INT(PAD_32)
A68_INT  Vecmode;
A_PAD_INT(PAD_33)
A68_INT  Deflex;
A_PAD_INT(PAD_34)
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,INT,INT)  */
struct A68t51{
A68_INT  Rdenno;
A_PAD_INT(PAD_35)
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_INT  Nods;
A_PAD_INT(PAD_37)
A68_INT  Deflex;
A_PAD_INT(PAD_38)
};
typedef struct A68t51  A68_51 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t52{
A68_INT  Mode;
A_PAD_INT(PAD_39)
struct A68t53 * Stenlist;
};
typedef struct A68t52  A68_52 ;    /* STRUCT(INT,REF MODE53)  */
struct A68t53{
A68_INT  Mode;
A_PAD_INT(PAD_40)
A68_INT  Rdenno;
A_PAD_INT(PAD_41)
struct A68t53 * Rest;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(INT,INT,REF MODE53)  */
struct A68t54{
A68_INT  Mode;
A_PAD_INT(PAD_42)
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT)  */
struct A68t55 { A68_INT mode; union {
A68_INT  mode1;
struct A68t45 * mode2;
struct A68t46 * mode3;
struct A68t48 * mode4;
struct A68t49 * mode5;
struct A68t44 * mode6;
struct A68t50 * mode7;
struct A68t51 * mode8;
struct A68t52 * mode9;
struct A68t56 * mode10;
struct A68t54  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t55  A68_55 ;    /* UNION(INT,REF MODE45,REF MODE46,REF MODE48,REF MODE49,REF MODE44,REF MODE50,REF MODE51,REF MODE52,REF MODE56,MODE54)  */
struct A68t56{
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_INT  Modeproc;
A_PAD_INT(PAD_44)
struct A68t57 * El;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,INT,REF MODE57)  */
struct A68t57{
struct A68t56 * Am;
struct A68t57 * Rest;
};
typedef struct A68t57  A68_57 ;    /* STRUCT(REF MODE56,REF MODE57)  */
struct A68t58{
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
struct A68t58 * Rest;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE31,INT,INT,INT,INT,REF MODE58)  */
struct A68t59{
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
struct A68t59 * Rest;
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE31,BITS,INT,INT,INT,INT,REF MODE59)  */
struct A68t60{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_56)
A68_INT  Labno;
A_PAD_INT(PAD_57)
A68_INT  Status;
A_PAD_INT(PAD_58)
struct A68t60 * Rest;
};
typedef struct A68t60  A68_60 ;    /* STRUCT(MODE31,INT,INT,REF MODE60)  */
struct A68t61{
A68_INT  I;
A_PAD_INT(PAD_59)
A68_INT  J;
A_PAD_INT(PAD_60)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,INT)  */
struct A68t62{
A68_INT  I;
A_PAD_INT(PAD_61)
A68_INT  J;
A_PAD_INT(PAD_62)
A68_INT  K;
A_PAD_INT(PAD_63)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT,INT,INT)  */
struct A68t63{
A68_INT  Mode;
A_PAD_INT(PAD_64)
A68_BOOL  Loc;
A_PAD_BOOL(PAD_65)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT,BOOL)  */
struct A68t64{
A68_INT  Mode;
A_PAD_INT(PAD_66)
A68_INT  Nopars;
A_PAD_INT(PAD_67)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,INT)  */
struct A68t65{
A68_INT  Mode;
A_PAD_INT(PAD_68)
A68_VC  Nu;
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t66{
A68_INT  Almode;
A_PAD_INT(PAD_69)
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT)  */
struct A68t67{
A68_INT  Nochars;
A_PAD_INT(PAD_70)
A68_INT  Base;
A_PAD_INT(PAD_71)
A68_VC  Chars;
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t68{
A68_INT  Strmode;
A_PAD_INT(PAD_72)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT)  */
struct A68t69{
A68_INT  Nochars;
A_PAD_INT(PAD_73)
A68_INT  Nocases;
A_PAD_INT(PAD_74)
A68_INT  W;
A_PAD_INT(PAD_75)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT,INT,INT)  */
struct A68t71{
A68_INT  Nse;
A_PAD_INT(PAD_76)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT)  */
struct A68t70 { A68_INT mode; union {
A68_BOOL  mode1;
A68_INT  mode2;
struct A68t60 * mode3;
struct A68t71  mode4;
struct A68t63  mode5;
struct A68t68  mode6;
struct A68t69  mode7;
struct A68t65  mode8;
struct A68t66  mode9;
struct A68t64  mode10;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t70  A68_70 ;    /* UNION(BOOL,INT,REF MODE60,MODE71,MODE63,MODE68,MODE69,MODE65,MODE66,MODE64)  */
struct A68t72{
A68_INT  Type;
A_PAD_INT(PAD_77)
struct A68t58 * Iddec;
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT,REF MODE58)  */
struct A68t73{
struct A68t60 * Lab;
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_78)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(REF MODE60,BOOL)  */
struct A68t74 { A68_INT mode; union {
struct A68t72  mode1;
struct A68t73  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t74  A68_74 ;    /* UNION(MODE72,MODE73)  */
struct A68t75{
A68_BOOL  Up;
A_PAD_BOOL(PAD_79)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(BOOL)  */
struct A68t76{
A68_INT  Fn;
A_PAD_INT(PAD_80)
A68_INT  M;
A_PAD_INT(PAD_81)
A68_INT  Param;
A_PAD_INT(PAD_82)
};
typedef struct A68t76  A68_76 ;    /* STRUCT(INT,INT,INT)  */
struct A68t77{
A68_INT  Charpos;
A_PAD_INT(PAD_83)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT)  */
struct A68t78{
A68_BOOL  All;
A_PAD_BOOL(PAD_84)
A68_VC  Pr;
};
typedef struct A68t78  A68_78 ;    /* STRUCT(BOOL,REF MODE26)  */
struct A68t79{
A68_INT  W;
A_PAD_INT(PAD_85)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT)  */
struct A68t80{
A68_INT  Fn;
A_PAD_INT(PAD_86)
A68_INT  M;
A_PAD_INT(PAD_87)
A68_BITS  Props;
A_PAD_BITS(PAD_88)
A68_INT  Param;
A_PAD_INT(PAD_89)
};
typedef struct A68t80  A68_80 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t81{
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
typedef struct A68t81  A68_81 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t82{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_96)
struct A68t42  L;
struct A68t42  G;
A68_INT  Type;
A_PAD_INT(PAD_97)
};
typedef struct A68t82  A68_82 ;    /* STRUCT(MODE31,MODE42,MODE42,INT)  */
struct A68t83{
struct A68t82  Xmi;
struct A68t34  Ym;
};
typedef struct A68t83  A68_83 ;    /* STRUCT(MODE82,MODE34)  */
struct A68t84{
struct A68t37  Xs;
struct A68t33  Ys;
A_PAD_ISTRUCT(A68_33 ,PAD_98)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(MODE37,MODE33)  */
struct A68t85{
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_99)
A68_INT  Maxlevel;
A_PAD_INT(PAD_100)
A68_INT  Nof;
A_PAD_INT(PAD_101)
A68_INT  Moduleno;
A_PAD_INT(PAD_102)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(MODE31,INT,INT,INT)  */
struct A68t86{
A68_INT  Moduleno;
A_PAD_INT(PAD_103)
A68_INT  Nof;
A_PAD_INT(PAD_104)
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT,INT)  */
struct A68t87{
A68_INT  Type;
A_PAD_INT(PAD_105)
A68_INT  Moduleno;
A_PAD_INT(PAD_106)
struct A68t31  Name;
A_PAD_ISTRUCT(A68_31 ,PAD_107)
struct A68t34  Ym;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT,INT,MODE31,MODE34)  */
struct A68t88{
A68_BOOL  Bu;
A_PAD_BOOL(PAD_108)
A68_INT  Level;
A_PAD_INT(PAD_109)
struct A68t58 * Id;
};
typedef struct A68t88  A68_88 ;    /* STRUCT(BOOL,INT,REF MODE58)  */
A_VECTOR(struct A68t62 ,A68t90);
typedef struct A68t90  A68_90 ;    /* VECTOR [] MODE62 */
A_VECTOR(A68_INT ,A68t91);
typedef struct A68t91  A68_91 ;    /* VECTOR [] INT */
struct A68t89{
struct A68t61  Body;
struct A68t90  Kset;
struct A68t91  Keeps;
A68_INT  Last;
A_PAD_INT(PAD_110)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(MODE61,REF MODE90,REF MODE91,INT)  */
struct A68t92{
A68_INT  Body;
A_PAD_INT(PAD_111)
struct A68t91  Actuals;
A68_INT  Moduleno;
A_PAD_INT(PAD_112)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT,REF MODE91,INT)  */
struct A68t93{
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
typedef struct A68t93  A68_93 ;    /* STRUCT(MODE31,MODE34,MODE31,MODE33,INT,INT)  */
struct A68t94{
A68_INT  Moduleno;
A_PAD_INT(PAD_118)
A68_INT  Type;
A_PAD_INT(PAD_119)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,INT)  */
struct A68t95{
struct A68t91  Decnos;
struct A68t91  Modes;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(REF MODE91,REF MODE91)  */
struct A68t96{
A68_INT  Moduleno;
A_PAD_INT(PAD_120)
A68_INT  Type;
A_PAD_INT(PAD_121)
A68_INT  Maxmodule;
A_PAD_INT(PAD_122)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t55 ,A68t98);
typedef struct A68t98  A68_98 ;    /* VECTOR [] MODE55 */
struct A68t97 { A68_INT mode; union {
struct A68t75  mode1;
A68_BOOL  mode2;
A68_INT  mode3;
struct A68t60 * mode4;
struct A68t71  mode5;
struct A68t63  mode6;
struct A68t68  mode7;
struct A68t69  mode8;
struct A68t65  mode9;
struct A68t66  mode10;
struct A68t64  mode11;
struct A68t72  mode12;
struct A68t73  mode13;
struct A68t76  mode14;
struct A68t77  mode15;
struct A68t79  mode16;
struct A68t80  mode17;
struct A68t81  mode18;
struct A68t98  mode19;
struct A68t78  mode20;
struct A68t82  mode21;
struct A68t37  mode22;
struct A68t85  mode23;
struct A68t86  mode24;
struct A68t87  mode25;
struct A68t88  mode26;
struct A68t89  mode27;
struct A68t92  mode28;
struct A68t93  mode29;
struct A68t91  mode30;
struct A68t94  mode31;
struct A68t95  mode32;
struct A68t96  mode33;
struct A68t59 * mode34;
struct A68t67  mode35;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t97  A68_97 ;    /* UNION(MODE75,BOOL,INT,REF MODE60,MODE71,MODE63,MODE68,MODE69,MODE65,MODE66,MODE64,MODE72,MODE73,MODE76,MODE77,MODE79,MODE80,MODE81,REF MODE98,MODE78,MODE82,MODE37,MODE85,MODE86,MODE87,MODE88,MODE89,MODE92,MODE93,REF MODE91,MODE94,MODE95,MODE96,REF MODE59,MODE67)  */
struct A68t100 ;
struct A68t101 ;
struct A68t102 ;
struct A68t103 ;
struct A68t104 ;
struct A68t105 ;
struct A68t106 ;
struct A68t107 ;

A_PROCEDURE(A68_BOOL ,A68t99,(struct A68t100 ,struct A68t101 ,struct A68t102 ,struct A68t103 ,struct A68t104 ,struct A68t105 ,struct A68t106 ,struct A68t107 ),(struct A68t100 ,struct A68t101 ,struct A68t102 ,struct A68t103 ,struct A68t104 ,struct A68t105 ,struct A68t106 ,struct A68t107 ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE100,MODE101,MODE102,MODE103,MODE104,MODE105,MODE106,REF MODE107) BOOL */

A_PROCEDURE(A68_BOOL ,A68t100,(A68_VC ,A68_INT *),(A68_VC ,A68_INT *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(REF MODE26,REF INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t97 ,A68_INT ),(struct A68t97 ,A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE97,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t102,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t31 ,A68_INT ,A68_BOOL ,struct A68t83 *),(struct A68t31 ,A68_INT ,A68_BOOL ,struct A68t83 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE31,INT,BOOL) MODE83 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t31 ,struct A68t31 ,struct A68t34 ,struct A68t84 *),(struct A68t31 ,struct A68t31 ,struct A68t34 ,struct A68t84 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE31,MODE31,MODE34) MODE84 */

A_PROCEDURE(A68_INT ,A68t106,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE26,BOOL) INT */
A_ROW(struct A68t108 ,A68t107,1);
typedef struct A68t107  A68_107 ;    /* [] MODE108 */
struct A68t108{
A68_INT  Type;
A_PAD_INT(PAD_123)
A68_INT  Value;
A_PAD_INT(PAD_124)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t109,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t110,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t111,(void),(void *));
typedef struct A68t111  A68_111 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ),(A68_VC ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t114,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE113) VOID */

A_PROCEDURE(A68_VOID ,A68t115,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 56 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from rscompiler --- */
/* --- End of imports from rscompiler --- */


/* --- Imports from incinstallation --- */
/* --- End of imports from incinstallation --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ZJAACTR(void);   /* rscompiler */
extern void ODAACTR(void);   /* incinstallation */
/* --- end of DECS initialisation functions --- */
static A68_116   EKJACTR = {"$Id: common.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,FKJACTR,EKJACTR,56)
 /* line 1: */
 /* line 3: */
void BKJACTR(void)   /* initialise DECS common */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel","-dir",".","common.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config/a68config.m","./rscompiler.m","./incinstallation.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ZJAACTR();   /* USE rscompiler */
ODAACTR();   /* USE incinstallation */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20-debian/src/common.a68";
A_config.translation_time = "Wed Apr 21 16:34:05 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "AKJACTR (from seed file) ";
A_config.spec_change_time = "Wed Apr 21 16:34:05 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS common);
UEAALIB_a68config(LGAALIB_configinfo, FKJACTR);
 /* line 46: */
 /* line 47: */
 /* line 51: */
/*SKIP*/;
A_PROC_EXIT(DECS common);
} 
#undef NL
/* end of translation of common.a68 */
