/* UNAME:GWWACTR */
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
A68_INT  Mode;
A_PAD_INT(PAD_1)
A68_VC  String;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t55{
A68_INT  I;
A_PAD_INT(PAD_2)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t57,1);
typedef struct A68t57  A68_57 ;    /* [] INT */
struct A68t56{
A68_INT  Body;
A_PAD_INT(PAD_3)
A68_INT  Moduleno;
A_PAD_INT(PAD_4)
struct A68t57  Actuals;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,INT,REF MODE57)  */
struct A68t58{
A68_INT  Mode;
A_PAD_INT(PAD_5)
A68_INT  Number;
A_PAD_INT(PAD_6)
A68_VC  Insert;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t60{
A68_INT  Moduleno;
A_PAD_INT(PAD_7)
A68_INT  I;
A_PAD_INT(PAD_8)
A68_INT  J;
A_PAD_INT(PAD_9)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t62,1);
typedef struct A68t62  A68_62 ;    /* [] REF MODE26 */
struct A68t61{
A68_INT  Moduleno;
A_PAD_INT(PAD_10)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t62  Ysnames;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
struct A68t59 { A68_INT mode; union {
struct A68t56  mode1;
struct A68t60  mode2;
struct A68t61  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t59  A68_59 ;    /* UNION(MODE56,MODE60,MODE61)  */
struct A68t64{
A68_INT  Nochars;
A_PAD_INT(PAD_11)
A68_INT  Nocases;
A_PAD_INT(PAD_12)
A68_INT  W;
A_PAD_INT(PAD_13)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,INT,INT)  */
struct A68t63{
struct A68t64  Info;
A68_VC  Text;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(MODE64,REF MODE26)  */
struct A68t65{
A68_INT  Type;
A_PAD_INT(PAD_14)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_15)
A68_INT  Decno;
A_PAD_INT(PAD_16)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t66{
A68_VC  Representation;
};
typedef struct A68t66  A68_66 ;    /* STRUCT(REF MODE26)  */
struct A68t68{
A68_INT  Nse;
A_PAD_INT(PAD_17)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT)  */
struct A68t69{
A68_INT  Labno;
A_PAD_INT(PAD_18)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT)  */
struct A68t70{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_VC  Nu;
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t71{
A68_INT  Mode;
A_PAD_INT(PAD_20)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_21)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t72{
A68_INT  Mode;
A_PAD_INT(PAD_22)
A68_VC  Denotation;
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t73{
A68_INT  Fn;
A_PAD_INT(PAD_23)
A68_INT  Mode;
A_PAD_INT(PAD_24)
A68_INT  Param;
A_PAD_INT(PAD_25)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(INT,INT,INT)  */
struct A68t74{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_26)
A68_INT  Mode;
A_PAD_INT(PAD_27)
A68_INT  Rdenno;
A_PAD_INT(PAD_28)
A68_INT  Maxname;
A_PAD_INT(PAD_29)
};
typedef struct A68t74  A68_74 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t75{
A68_INT  W;
A_PAD_INT(PAD_30)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT)  */
struct A68t76{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_31)
A68_INT  Status;
A_PAD_INT(PAD_32)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_33)
};
typedef struct A68t76  A68_76 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t77{
A68_INT  Mode;
A_PAD_INT(PAD_34)
A68_BITS  Props;
A_PAD_BITS(PAD_35)
A68_INT  Param;
A_PAD_INT(PAD_36)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t78{
A68_BOOL  Start;
A_PAD_BOOL(PAD_37)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(BOOL)  */
struct A68t79{
A68_INT  Fn;
A_PAD_INT(PAD_38)
A68_INT  Mode;
A_PAD_INT(PAD_39)
A68_BITS  Props;
A_PAD_BITS(PAD_40)
A68_INT  Param;
A_PAD_INT(PAD_41)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t80{
A68_INT  Fn;
A_PAD_INT(PAD_42)
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_BITS  Props;
A_PAD_BITS(PAD_44)
A68_INT  Resultmode;
A_PAD_INT(PAD_45)
};
typedef struct A68t80  A68_80 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t81{
A68_INT  Fn;
A_PAD_INT(PAD_46)
A68_BITS  Props;
A_PAD_BITS(PAD_47)
};
typedef struct A68t81  A68_81 ;    /* STRUCT(INT,BITS)  */
struct A68t67 { A68_INT mode; union {
struct A68t68  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t66  mode4;
struct A68t69  mode5;
struct A68t70  mode6;
struct A68t54  mode7;
struct A68t71  mode8;
struct A68t72  mode9;
struct A68t73  mode10;
struct A68t65  mode11;
struct A68t74  mode12;
struct A68t75  mode13;
struct A68t76  mode14;
struct A68t77  mode15;
struct A68t55  mode16;
struct A68t78  mode17;
struct A68t63  mode18;
struct A68t58  mode19;
struct A68t79  mode20;
struct A68t80  mode21;
struct A68t81  mode22;
struct A68t56  mode23;
struct A68t60  mode24;
struct A68t61  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t67  A68_67 ;    /* UNION(MODE68,INT,BOOL,MODE66,MODE69,MODE70,MODE54,MODE71,MODE72,MODE73,MODE65,MODE74,MODE75,MODE76,MODE77,MODE55,MODE78,MODE63,MODE58,MODE79,MODE80,MODE81,MODE56,MODE60,MODE61,VOID)  */
struct A68t82 { A68_INT mode; union {
struct A68t68  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t66  mode4;
struct A68t69  mode5;
struct A68t70  mode6;
struct A68t54  mode7;
struct A68t71  mode8;
struct A68t72  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t82  A68_82 ;    /* UNION(MODE68,INT,BOOL,MODE66,MODE69,MODE70,MODE54,MODE71,MODE72)  */
struct A68t83 { A68_INT mode; union {
struct A68t68  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t66  mode4;
struct A68t69  mode5;
struct A68t70  mode6;
struct A68t54  mode7;
struct A68t71  mode8;
struct A68t72  mode9;
struct A68t73  mode10;
struct A68t65  mode11;
struct A68t74  mode12;
struct A68t75  mode13;
struct A68t76  mode14;
struct A68t77  mode15;
struct A68t55  mode16;
struct A68t78  mode17;
struct A68t63  mode18;
struct A68t58  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t83  A68_83 ;    /* UNION(MODE68,INT,BOOL,MODE66,MODE69,MODE70,MODE54,MODE71,MODE72,MODE73,MODE65,MODE74,MODE75,MODE76,MODE77,MODE55,MODE78,MODE63,MODE58)  */

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ),(A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT) VOID */
struct A68t86 ;

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t65 ,struct A68t86 *,A68_INT ),(struct A68t65 ,struct A68t86 *,A68_INT ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE65,REF MODE86,INT) VOID */
struct A68t88{
A68_INT  Rdenno;
A_PAD_INT(PAD_48)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(INT)  */
struct A68t89{
A68_INT  Idno;
A_PAD_INT(PAD_49)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t93);
typedef struct A68t93  A68_93 ;    /* STRUCT 7 CHAR */
struct A68t90{
struct A68t93  Name;
A_PAD_ISTRUCT(A68_93 ,PAD_50)
A68_INT  Mode;
A_PAD_INT(PAD_51)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(MODE93,INT)  */
struct A68t91{
A68_INT  Fn;
A_PAD_INT(PAD_52)
A68_INT  Param;
A_PAD_INT(PAD_53)
struct A68t92 * Operands;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(INT,INT,REF MODE92)  */
struct A68t87 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t88  mode2;
struct A68t89  mode4;
struct A68t90  mode5;
A68_VC  mode6;
struct A68t69  mode7;
struct A68t68  mode8;
struct A68t91  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t87  A68_87 ;    /* UNION(LONG BITS,MODE88,VOID,MODE89,MODE90,MODE26,MODE69,MODE68,MODE91)  */
struct A68t86{
A68_INT  Mode;
A_PAD_INT(PAD_54)
A68_BITS  Info;
A_PAD_BITS(PAD_55)
struct A68t87  Extra;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT,BITS,MODE87)  */
struct A68t92{
struct A68t86  Value;
struct A68t92 * Rest;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(MODE86,REF MODE92)  */

A_PROCEDURE(A68_VOID ,A68t94,(void),(void *));
typedef struct A68t94  A68_94 ;    /* PROC VOID */
struct A68t96 ;

A_PROCEDURE(A68_VOID ,A68t95,(A68_INT ,struct A68t96 *),(A68_INT ,struct A68t96 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT) MODE96 */
struct A68t96{
A68_INT  Level;
A_PAD_INT(PAD_56)
A68_INT  Block;
A_PAD_INT(PAD_57)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t97,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(A68_VC ,struct A68t93 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t93 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE26,MODE93,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t65 ,struct A68t92 **),(struct A68t65 ,struct A68t92 **,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE65,REF REF MODE92) VOID */
A_ROW(struct A68t101 ,A68t100,1);
typedef struct A68t100  A68_100 ;    /* [] MODE101 */
struct A68t101{
A68_INT  Mode;
A_PAD_INT(PAD_58)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_59)
struct A68t96  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t93  Prefix;
A_PAD_ISTRUCT(A68_93 ,PAD_60)
A68_BITS  Flags;
A_PAD_BITS(PAD_61)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(INT,INT,MODE96,REF MODE26,REF MODE26,MODE93,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE65) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t76 ),(struct A68t76 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE76) VOID */

A_PROCEDURE(A68_INT ,A68t104,(A68_INT ),(A68_INT ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT) INT */
struct A68t106 ;

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ,A68_INT ,struct A68t106 ,A68_INT ,A68_INT ,struct A68t96 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t106 ,A68_INT ,A68_INT ,struct A68t96 ,A68_BITS ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE26,INT,REF MODE106,INT,INT,MODE96,BITS) VOID */
A_VECTOR(A68_INT ,A68t106);
typedef struct A68t106  A68_106 ;    /* VECTOR [] INT */
A_ROW(struct A68t108 ,A68t107,1);
typedef struct A68t107  A68_107 ;    /* [] MODE108 */
struct A68t108{
A68_INT  Mode;
A_PAD_INT(PAD_62)
A68_INT  Resultmode;
A_PAD_INT(PAD_63)
A68_INT  Declevel;
A_PAD_INT(PAD_64)
struct A68t96  Environ;
A68_VC  Name;
struct A68t93  Prefix;
A_PAD_ISTRUCT(A68_93 ,PAD_65)
struct A68t93  Fnprefix;
A_PAD_ISTRUCT(A68_93 ,PAD_66)
struct A68t93  Envprefix;
A_PAD_ISTRUCT(A68_93 ,PAD_67)
A68_BITS  Flags;
A_PAD_BITS(PAD_68)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,INT,MODE96,REF MODE26,MODE93,MODE93,MODE93,BITS)  */

A_PROCEDURE(A68_VOID ,A68t109,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE94) VOID */

A_PROCEDURE(A68_VOID ,A68t111,(A68_VC ),(A68_VC ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 59 CHAR */
struct A68t115{
A68_VC  Name;
A68_BITS  Value;
A_PAD_BITS(PAD_69)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE26,BITS)  */

A_PROCEDURE(A68_VOID ,A68t116,(A68_BOOL ,struct A68t115 *),(A68_BOOL ,struct A68t115 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(BOOL) MODE115 */
#define A68_117  A68_VC 
#define A68t117 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_118  A68_115 
#define A68t118 A68t115            /* STRUCT(MODE117,BITS)  */
A_ROW(struct A68t115 ,A68t119,1);
typedef struct A68t119  A68_119 ;    /* [] MODE115 */
A_ISTRUCT(A68_CHAR ,3,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t115 ,16,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 16 MODE115 */
A_ISTRUCT(A68_CHAR ,2,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t115 ,6,A68t127);
typedef struct A68t127  A68_127 ;    /* STRUCT 6 MODE115 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_BITS ,A68_BOOL ,A68_VC *),(A68_BITS ,A68_BOOL ,A68_VC *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(BITS,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t129);
typedef struct A68t129  A68_129 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t67 ,A68_VC *),(struct A68t67 ,A68_VC *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE67) MODE26 */
A_ISTRUCT(A68_CHAR ,27,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t135);
typedef struct A68t135  A68_135 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t136);
typedef struct A68t136  A68_136 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t138);
typedef struct A68t138  A68_138 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t142);
typedef struct A68t142  A68_142 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t144);
typedef struct A68t144  A68_144 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t149);
typedef struct A68t149  A68_149 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t150);
typedef struct A68t150  A68_150 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t151);
typedef struct A68t151  A68_151 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t152);
typedef struct A68t152  A68_152 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t153);
typedef struct A68t153  A68_153 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t154);
typedef struct A68t154  A68_154 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t155);
typedef struct A68t155  A68_155 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t157);
typedef struct A68t157  A68_157 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,54,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 47 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from identifiers --- */
extern A68_VOID  UTKACTR_idfullname(A68_INT ,A68_VC *);
extern A68_VOID  WCNACTR_modename(A68_INT ,A68_VC *);
/* --- End of imports from identifiers --- */


/* --- Imports from incimperatives --- */
#define NCAACTR_ccbit 002U
#define YCAACTR_compgenbit 0000400U
#define WCAACTR_decbit 0000100U
#define BDAACTR_dontpullbit 0004000U
#define EDAACTR_dydecbit 0040000U
#define CDAACTR_dyprocbit 0010000U
#define DDAACTR_dyvardecbit 0020000U
#define ZCAACTR_elifousebit 0001000U
#define TCAACTR_exitbit 0000010U
#define FDAACTR_genprocbit 0100000U
#define RCAACTR_globscopebit 040U
#define VCAACTR_heapbit 0000040U
#define QCAACTR_holebit 020U
#define ADAACTR_labbit 0002000U
#define GDAACTR_locgenbit 0200000U
#define HDAACTR_locdydecbit 0400000U
#define OCAACTR_operatorbit 004U
#define SCAACTR_priobit 0000040U
#define UCAACTR_semibit 0000020U
#define PCAACTR_valbit 010U
#define XCAACTR_vardecbit 0000200U
/* --- End of imports from incimperatives --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
extern A68_VOID  JPAAOSF_lwhole(A68_LINT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void NKVACTR(void);   /* identifiers */
extern void UAAACTR(void);   /* incimperatives */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_114   KWWACTR = {"$Id: mnemonics.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,LWWACTR,KWWACTR,59)
static A68_116  MWWACTR_anonymous;
static A68_40   ZWWACTR = {"prio"}; 
A_GISVEC(A68_VC ,AXWACTR,ZWWACTR,4)
static A68_40   BXWACTR = {"exit"}; 
A_GISVEC(A68_VC ,CXWACTR,BXWACTR,4)
static A68_40   DXWACTR = {"semi"}; 
A_GISVEC(A68_VC ,EXWACTR,DXWACTR,4)
static A68_40   FXWACTR = {"heap"}; 
A_GISVEC(A68_VC ,GXWACTR,FXWACTR,4)
static A68_120   HXWACTR = {"dec"}; 
A_GISVEC(A68_VC ,IXWACTR,HXWACTR,3)
static A68_121   JXWACTR = {"vardec"}; 
A_GISVEC(A68_VC ,KXWACTR,JXWACTR,6)
static A68_93   LXWACTR = {"compgen"}; 
A_GISVEC(A68_VC ,MXWACTR,LXWACTR,7)
static A68_122   NXWACTR = {"elifouse"}; 
A_GISVEC(A68_VC ,OXWACTR,NXWACTR,8)
static A68_120   PXWACTR = {"lab"}; 
A_GISVEC(A68_VC ,QXWACTR,PXWACTR,3)
static A68_122   RXWACTR = {"dontpull"}; 
A_GISVEC(A68_VC ,SXWACTR,RXWACTR,8)
static A68_121   TXWACTR = {"dyproc"}; 
A_GISVEC(A68_VC ,UXWACTR,TXWACTR,6)
static A68_122   VXWACTR = {"dyvardec"}; 
A_GISVEC(A68_VC ,WXWACTR,VXWACTR,8)
static A68_123   XXWACTR = {"dydec"}; 
A_GISVEC(A68_VC ,YXWACTR,XXWACTR,5)
static A68_93   ZXWACTR = {"genproc"}; 
A_GISVEC(A68_VC ,AYWACTR,ZXWACTR,7)
static A68_121   BYWACTR = {"locgen"}; 
A_GISVEC(A68_VC ,CYWACTR,BYWACTR,6)
static A68_122   DYWACTR = {"locdydec"}; 
A_GISVEC(A68_VC ,EYWACTR,DYWACTR,8)
static A68_119  GYWACTR_controlbits;
static A68_125   IYWACTR = {"cc"}; 
A_GISVEC(A68_VC ,JYWACTR,IYWACTR,2)
static A68_122   KYWACTR = {"operator"}; 
A_GISVEC(A68_VC ,LYWACTR,KYWACTR,8)
static A68_120   MYWACTR = {"val"}; 
A_GISVEC(A68_VC ,NYWACTR,MYWACTR,3)
static A68_40   OYWACTR = {"hole"}; 
A_GISVEC(A68_VC ,PYWACTR,OYWACTR,4)
static A68_93   QYWACTR = {"genproc"}; 
A_GISVEC(A68_VC ,RYWACTR,QYWACTR,7)
static A68_126   SYWACTR = {"globscope"}; 
A_GISVEC(A68_VC ,TYWACTR,SYWACTR,9)
static A68_119  VYWACTR_routinebits;
static A68_BITS  WYWACTR_maskgeneral;
static A68_BITS  XYWACTR_maskdynamica;
#define YYWACTR_maskdynamicb BDAACTR_dontpullbit
static A68_BITS  ZYWACTR_maskdynamicc;
static A68_BITS  AZWACTR_maskroutine;
#define BZWACTR_maskspecial ZCAACTR_elifousebit
static A68_BITS  CZWACTR_maskxroutine;
#define DZWACTR_fieldlength 0
static A68_129   PZWACTR = {""}; 
A_GISVEC(A68_VC ,QZWACTR,PZWACTR,0)
static A68_129   ZZWACTR = {""}; 
A_GISVEC(A68_VC ,AAXACTR,ZZWACTR,0)
static A68_129   BAXACTR = {""}; 
A_GISVEC(A68_VC ,DAXACTR,BAXACTR,0)
static A68_126   EAXACTR = {" | bits ("}; 
A_GISVEC(A68_VC ,FAXACTR,EAXACTR,9)
static A68_131   QAXACTR = {"load:nse                  ("}; 
static A68_122   RAXACTR = {"EMPTY fn"}; 
A_GISVEC(A68_VC ,TAXACTR,RAXACTR,8)
static A68_93   UAXACTR = {"SKIP fn"}; 
A_GISVEC(A68_VC ,VAXACTR,UAXACTR,7)
static A68_121   WAXACTR = {"NIL fn"}; 
A_GISVEC(A68_VC ,XAXACTR,WAXACTR,6)
static A68_132   YAXACTR = {"ERROR: nse="}; 
A_GISVEC(A68_VC ,ZAXACTR,YAXACTR,11)
A_GISVEC(A68_VC ,CBXACTR,QAXACTR,27)
static A68_131   EBXACTR = {"load:int                  ("}; 
static A68_125   FBXACTR = {"=\""}; 
A_GISVEC(A68_VC ,GBXACTR,EBXACTR,27)
A_GISVEC(A68_VC ,IBXACTR,FBXACTR,2)
static A68_131   MBXACTR = {"load:bool                 ("}; 
static A68_40   NBXACTR = {"TRUE"}; 
A_GISVEC(A68_VC ,PBXACTR,NBXACTR,4)
static A68_123   QBXACTR = {"FALSE"}; 
A_GISVEC(A68_VC ,RBXACTR,QBXACTR,5)
A_GISVEC(A68_VC ,SBXACTR,MBXACTR,27)
static A68_131   UBXACTR = {"load:char                 ("}; 
A_GISVEC(A68_VC ,VBXACTR,UBXACTR,27)
static A68_131   XBXACTR = {"load:labno                ("}; 
A_GISVEC(A68_VC ,YBXACTR,XBXACTR,27)
static A68_133   BCXACTR = {"load:number               (mode"}; 
static A68_134   CCXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,ECXACTR,CCXACTR,29)
static A68_135   GCXACTR = {" | number="}; 
A_GISVEC(A68_VC ,HCXACTR,BCXACTR,31)
A_GISVEC(A68_VC ,NCXACTR,GCXACTR,10)
static A68_133   PCXACTR = {"load:alienx               (mode"}; 
static A68_134   QCXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,SCXACTR,QCXACTR,29)
static A68_136   UCXACTR = {" | string =\""}; 
A_GISVEC(A68_VC ,VCXACTR,PCXACTR,31)
A_GISVEC(A68_VC ,BDXACTR,UCXACTR,12)
static A68_133   EDXACTR = {"load:numeric denotation   (mode"}; 
static A68_134   FDXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,HDXACTR,FDXACTR,29)
static A68_137   JDXACTR = {" | denotation="}; 
A_GISVEC(A68_VC ,KDXACTR,EDXACTR,31)
A_GISVEC(A68_VC ,QDXACTR,JDXACTR,14)
static A68_133   TDXACTR = {"load:string denotation    (mode"}; 
static A68_134   UDXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,WDXACTR,UDXACTR,29)
static A68_138   YDXACTR = {" | denotation=\""}; 
A_GISVEC(A68_VC ,ZDXACTR,TDXACTR,31)
A_GISVEC(A68_VC ,FEXACTR,YDXACTR,15)
static A68_139   HEXACTR = {"ERROR: unknown LOAD imperative"}; 
A_GISVEC(A68_VC ,IEXACTR,HEXACTR,30)
static A68_120   QEXACTR = {"UPB"}; 
A_GISVEC(A68_VC ,REXACTR,QEXACTR,3)
static A68_120   SEXACTR = {"LWB"}; 
A_GISVEC(A68_VC ,TEXACTR,SEXACTR,3)
static A68_123   UEXACTR = {"ANDTH"}; 
A_GISVEC(A68_VC ,VEXACTR,UEXACTR,5)
static A68_40   WEXACTR = {"OREL"}; 
A_GISVEC(A68_VC ,XEXACTR,WEXACTR,4)
static A68_125   AFXACTR = {"<="}; 
A_GISVEC(A68_VC ,BFXACTR,AFXACTR,2)
static A68_125   CFXACTR = {">="}; 
A_GISVEC(A68_VC ,DFXACTR,CFXACTR,2)
static A68_125   FFXACTR = {"/="}; 
A_GISVEC(A68_VC ,GFXACTR,FFXACTR,2)
static A68_40   JFXACTR = {"OVER"}; 
A_GISVEC(A68_VC ,KFXACTR,JFXACTR,4)
static A68_120   LFXACTR = {"MOD"}; 
A_GISVEC(A68_VC ,MFXACTR,LFXACTR,3)
static A68_125   NFXACTR = {"**"}; 
A_GISVEC(A68_VC ,OFXACTR,NFXACTR,2)
static A68_120   QFXACTR = {"SHL"}; 
A_GISVEC(A68_VC ,RFXACTR,QFXACTR,3)
static A68_120   SFXACTR = {"SHR"}; 
A_GISVEC(A68_VC ,TFXACTR,SFXACTR,3)
static A68_40   UFXACTR = {"ELEM"}; 
A_GISVEC(A68_VC ,VFXACTR,UFXACTR,4)
static A68_121   WFXACTR = {"PLUSAB"}; 
A_GISVEC(A68_VC ,XFXACTR,WFXACTR,6)
static A68_93   YFXACTR = {"MINUSAB"}; 
A_GISVEC(A68_VC ,ZFXACTR,YFXACTR,7)
static A68_93   AGXACTR = {"TIMESAB"}; 
A_GISVEC(A68_VC ,BGXACTR,AGXACTR,7)
static A68_121   CGXACTR = {"OVERAB"}; 
A_GISVEC(A68_VC ,DGXACTR,CGXACTR,6)
static A68_123   EGXACTR = {"MODAB"}; 
A_GISVEC(A68_VC ,FGXACTR,EGXACTR,5)
static A68_123   GGXACTR = {"DIVAB"}; 
A_GISVEC(A68_VC ,HGXACTR,GGXACTR,5)
static A68_125   IGXACTR = {"IS"}; 
A_GISVEC(A68_VC ,JGXACTR,IGXACTR,2)
static A68_40   KGXACTR = {"ISNT"}; 
A_GISVEC(A68_VC ,LGXACTR,KGXACTR,4)
static A68_120   MGXACTR = {"AND"}; 
A_GISVEC(A68_VC ,NGXACTR,MGXACTR,3)
static A68_125   OGXACTR = {"OR"}; 
A_GISVEC(A68_VC ,PGXACTR,OGXACTR,2)
static A68_121   QGXACTR = {"PLUSTO"}; 
A_GISVEC(A68_VC ,RGXACTR,QGXACTR,6)
static A68_123   SGXACTR = {"CYCLE"}; 
A_GISVEC(A68_VC ,TGXACTR,SGXACTR,5)
static A68_140   UGXACTR = {"not in standard prelude"}; 
A_GISVEC(A68_VC ,VGXACTR,UGXACTR,23)
static A68_134   YGXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,AHXACTR,YGXACTR,29)
static A68_139   IHXACTR = {"oper                      (fn="}; 
static A68_140   JHXACTR = {"statgrab | 1 operand | "}; 
static A68_141   KHXACTR = {"local generation"}; 
A_GISVEC(A68_VC ,MHXACTR,KHXACTR,16)
static A68_138   NHXACTR = {"heap generation"}; 
A_GISVEC(A68_VC ,OHXACTR,NHXACTR,15)
A_GISVEC(A68_VC ,QHXACTR,JHXACTR,23)
static A68_136   RHXACTR = {"parampack | "}; 
static A68_142   SHXACTR = {" operands | mode of proc"}; 
A_GISVEC(A68_VC ,THXACTR,RHXACTR,12)
A_GISVEC(A68_VC ,UHXACTR,SHXACTR,24)
static A68_143   VHXACTR = {"select | 1 operand | "}; 
static A68_144   WHXACTR = {"th field | result mode"}; 
A_GISVEC(A68_VC ,XHXACTR,VHXACTR,21)
A_GISVEC(A68_VC ,YHXACTR,WHXACTR,22)
static A68_139   ZHXACTR = {"copy | 1 operand | result mode"}; 
A_GISVEC(A68_VC ,AIXACTR,ZHXACTR,30)
static A68_93   BIXACTR = {"trim | "}; 
static A68_136   CIXACTR = {" operands | "}; 
static A68_125   GIXACTR = {"a:"}; 
A_GISVEC(A68_VC ,IIXACTR,GIXACTR,2)
static A68_125   JIXACTR = {":b"}; 
A_GISVEC(A68_VC ,KIXACTR,JIXACTR,2)
static A68_120   LIXACTR = {"a:b"}; 
A_GISVEC(A68_VC ,MIXACTR,LIXACTR,3)
static A68_125   NIXACTR = {"@c"}; 
A_GISVEC(A68_VC ,OIXACTR,NIXACTR,2)
static A68_40   PIXACTR = {"a:@c"}; 
A_GISVEC(A68_VC ,QIXACTR,PIXACTR,4)
static A68_40   RIXACTR = {":b@c"}; 
A_GISVEC(A68_VC ,SIXACTR,RIXACTR,4)
static A68_123   TIXACTR = {"a:b@c"}; 
A_GISVEC(A68_VC ,UIXACTR,TIXACTR,5)
static A68_129   VIXACTR = {""}; 
A_GISVEC(A68_VC ,WIXACTR,VIXACTR,0)
static A68_135   XIXACTR = {" (set LWB)"}; 
A_GISVEC(A68_VC ,ZIXACTR,XIXACTR,10)
static A68_129   AJXACTR = {""}; 
A_GISVEC(A68_VC ,BJXACTR,AJXACTR,0)
A_GISVEC(A68_VC ,CJXACTR,BIXACTR,7)
A_GISVEC(A68_VC ,DJXACTR,CIXACTR,12)
static A68_138   EJXACTR = {"simple index | "}; 
static A68_136   FJXACTR = {" operands | "}; 
static A68_145   GJXACTR = {" subscripts | result mode"}; 
A_GISVEC(A68_VC ,HJXACTR,EJXACTR,15)
A_GISVEC(A68_VC ,JJXACTR,FJXACTR,12)
A_GISVEC(A68_VC ,KJXACTR,GJXACTR,25)
static A68_146   LJXACTR = {"trim index | "}; 
static A68_140   MJXACTR = {" operands | result mode"}; 
A_GISVEC(A68_VC ,NJXACTR,LJXACTR,13)
A_GISVEC(A68_VC ,PJXACTR,MJXACTR,23)
static A68_147   QJXACTR = {"dyngrab | 2 operands | result mode"}; 
A_GISVEC(A68_VC ,RJXACTR,QJXACTR,34)
static A68_146   SJXACTR = {"bound pack | "}; 
static A68_140   TJXACTR = {" operands | result mode"}; 
A_GISVEC(A68_VC ,UJXACTR,SJXACTR,13)
A_GISVEC(A68_VC ,VJXACTR,TJXACTR,23)
static A68_143   WJXACTR = {"dyadic op | opnumber="}; 
static A68_125   XJXACTR = {"=\""}; 
static A68_136   YJXACTR = {"\" | version="}; 
static A68_137   ZJXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,AKXACTR,WJXACTR,21)
A_GISVEC(A68_VC ,CKXACTR,XJXACTR,2)
A_GISVEC(A68_VC ,EKXACTR,YJXACTR,12)
A_GISVEC(A68_VC ,JKXACTR,ZJXACTR,14)
static A68_144   KKXACTR = {"monadic op | opnumber="}; 
static A68_125   LKXACTR = {"=\""}; 
static A68_120   PKXACTR = {"UPB"}; 
A_GISVEC(A68_VC ,QKXACTR,PKXACTR,3)
static A68_120   RKXACTR = {"LWB"}; 
A_GISVEC(A68_VC ,SKXACTR,RKXACTR,3)
static A68_120   TKXACTR = {"NOT"}; 
A_GISVEC(A68_VC ,UKXACTR,TKXACTR,3)
static A68_120   VKXACTR = {"ABS"}; 
A_GISVEC(A68_VC ,WKXACTR,VKXACTR,3)
static A68_120   XKXACTR = {"BIN"}; 
A_GISVEC(A68_VC ,YKXACTR,XKXACTR,3)
static A68_40   ZKXACTR = {"REPR"}; 
A_GISVEC(A68_VC ,ALXACTR,ZKXACTR,4)
static A68_40   BLXACTR = {"LENG"}; 
A_GISVEC(A68_VC ,CLXACTR,BLXACTR,4)
static A68_93   DLXACTR = {"SHORTEN"}; 
A_GISVEC(A68_VC ,ELXACTR,DLXACTR,7)
static A68_120   FLXACTR = {"ODD"}; 
A_GISVEC(A68_VC ,GLXACTR,FLXACTR,3)
static A68_40   HLXACTR = {"SIGN"}; 
A_GISVEC(A68_VC ,ILXACTR,HLXACTR,4)
static A68_123   JLXACTR = {"ROUND"}; 
A_GISVEC(A68_VC ,KLXACTR,JLXACTR,5)
static A68_121   LLXACTR = {"ENTIER"}; 
A_GISVEC(A68_VC ,MLXACTR,LLXACTR,6)
static A68_125   NLXACTR = {"RE"}; 
A_GISVEC(A68_VC ,OLXACTR,NLXACTR,2)
static A68_125   PLXACTR = {"IM"}; 
A_GISVEC(A68_VC ,QLXACTR,PLXACTR,2)
static A68_120   RLXACTR = {"ARG"}; 
A_GISVEC(A68_VC ,SLXACTR,RLXACTR,3)
static A68_40   TLXACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,ULXACTR,TLXACTR,4)
static A68_140   VLXACTR = {"not in standard prelude"}; 
A_GISVEC(A68_VC ,WLXACTR,VLXACTR,23)
static A68_136   XLXACTR = {"\" | version="}; 
static A68_137   YLXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,ZLXACTR,KKXACTR,22)
A_GISVEC(A68_VC ,BMXACTR,LKXACTR,2)
A_GISVEC(A68_VC ,CMXACTR,XLXACTR,12)
A_GISVEC(A68_VC ,HMXACTR,YLXACTR,14)
static A68_143   IMXACTR = {"straight | 2 operands"}; 
static A68_148   JMXACTR = {" | mode of original="}; 
static A68_123   KMXACTR = {"UNION"}; 
A_GISVEC(A68_VC ,MMXACTR,KMXACTR,5)
static A68_121   NMXACTR = {"VECTOR"}; 
A_GISVEC(A68_VC ,OMXACTR,NMXACTR,6)
static A68_149   PMXACTR = {"STRUCT or I-STRUCT"}; 
A_GISVEC(A68_VC ,QMXACTR,PMXACTR,18)
static A68_122   RMXACTR = {"ARRY of "}; 
static A68_132   SMXACTR = {" dimensions"}; 
A_GISVEC(A68_VC ,TMXACTR,RMXACTR,8)
A_GISVEC(A68_VC ,VMXACTR,SMXACTR,11)
A_GISVEC(A68_VC ,WMXACTR,IMXACTR,21)
A_GISVEC(A68_VC ,XMXACTR,JMXACTR,20)
static A68_150   YMXACTR = {"prestraight | 1 operand | result mode"}; 
A_GISVEC(A68_VC ,ZMXACTR,YMXACTR,37)
static A68_151   ANXACTR = {"strindex | 2 operands | result mode"}; 
A_GISVEC(A68_VC ,BNXACTR,ANXACTR,35)
static A68_152   CNXACTR = {"assign | 2 operands | param="}; 
static A68_137   DNXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,ENXACTR,CNXACTR,28)
A_GISVEC(A68_VC ,FNXACTR,DNXACTR,14)
static A68_153   GNXACTR = {"default bound | no operands | result mode"}; 
A_GISVEC(A68_VC ,HNXACTR,GNXACTR,41)
static A68_154   INXACTR = {"deref | result mode"}; 
A_GISVEC(A68_VC ,JNXACTR,INXACTR,19)
static A68_149   KNXACTR = {"call | result mode"}; 
static A68_155   LNXACTR = {" | not operator or generator routine"}; 
A_GISVEC(A68_VC ,NNXACTR,LNXACTR,36)
static A68_156   ONXACTR = {" | invented local space generator"}; 
A_GISVEC(A68_VC ,PNXACTR,ONXACTR,33)
static A68_157   QNXACTR = {" | invented heap space generator"}; 
A_GISVEC(A68_VC ,RNXACTR,QNXACTR,32)
static A68_158   SNXACTR = {" | invented space generator within one"}; 
A_GISVEC(A68_VC ,TNXACTR,SNXACTR,38)
static A68_147   UNXACTR = {" | user defined or library routine"}; 
A_GISVEC(A68_VC ,VNXACTR,UNXACTR,34)
static A68_159   WNXACTR = {"ERROR: unknown PARAM field"}; 
A_GISVEC(A68_VC ,XNXACTR,WNXACTR,26)
A_GISVEC(A68_VC ,YNXACTR,KNXACTR,18)
static A68_40   ZNXACTR = {"VOID"}; 
A_GISVEC(A68_VC ,AOXACTR,ZNXACTR,4)
static A68_93   BOXACTR = {"NIL to "}; 
A_GISVEC(A68_VC ,COXACTR,BOXACTR,7)
static A68_142   DOXACTR = {"GOTO | procedure to mode"}; 
A_GISVEC(A68_VC ,EOXACTR,DOXACTR,24)
static A68_143   FOXACTR = {"GOTO | coerce to mode"}; 
A_GISVEC(A68_VC ,GOXACTR,FOXACTR,21)
static A68_131   HOXACTR = {"REAL to COMPL | result mode"}; 
A_GISVEC(A68_VC ,IOXACTR,HOXACTR,27)
static A68_145   JOXACTR = {"INT to REAL | result mode"}; 
A_GISVEC(A68_VC ,KOXACTR,JOXACTR,25)
static A68_149   LOXACTR = {"xxib | result mode"}; 
A_GISVEC(A68_VC ,MOXACTR,LOXACTR,18)
static A68_152   NOXACTR = {"ARRAY to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,OOXACTR,NOXACTR,28)
static A68_134   POXACTR = {"VECTOR to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,QOXACTR,POXACTR,29)
static A68_157   ROXACTR = {"I-STRUCT to VECTOR | result mode"}; 
A_GISVEC(A68_VC ,SOXACTR,ROXACTR,32)
static A68_144   TOXACTR = {"1 STRUCT | result mode"}; 
A_GISVEC(A68_VC ,UOXACTR,TOXACTR,22)
static A68_134   VOXACTR = {"unite | non UNION operand to "}; 
static A68_132   WOXACTR = {"th mode of "}; 
A_GISVEC(A68_VC ,XOXACTR,VOXACTR,29)
A_GISVEC(A68_VC ,YOXACTR,WOXACTR,11)
static A68_139   ZOXACTR = {"uniteu | UNION operand to mode"}; 
A_GISVEC(A68_VC ,APXACTR,ZOXACTR,30)
static A68_149   BPXACTR = {"isarr | coerce to "}; 
static A68_157   CPXACTR = {" dimensional array | result mode"}; 
A_GISVEC(A68_VC ,DPXACTR,BPXACTR,18)
A_GISVEC(A68_VC ,EPXACTR,CPXACTR,32)
static A68_122   FPXACTR = {"SKIP to "}; 
A_GISVEC(A68_VC ,GPXACTR,FPXACTR,8)
static A68_148   HPXACTR = {"to VEC | result mode"}; 
A_GISVEC(A68_VC ,IPXACTR,HPXACTR,20)
static A68_144   JPXACTR = {"to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,KPXACTR,JPXACTR,22)
static A68_132   LPXACTR = {"deunite to "}; 
A_GISVEC(A68_VC ,MPXACTR,LPXACTR,11)
static A68_139   NPXACTR = {"BITS to VEC BOOL | result mode"}; 
A_GISVEC(A68_VC ,OPXACTR,NPXACTR,30)
static A68_145   PPXACTR = {"vacuum | coerce EMPTY to "}; 
A_GISVEC(A68_VC ,QPXACTR,PPXACTR,25)
static A68_135   RPXACTR = {"Y TYPE to "}; 
A_GISVEC(A68_VC ,SPXACTR,RPXACTR,10)
static A68_126   TPXACTR = {"to X TYPE"}; 
A_GISVEC(A68_VC ,UPXACTR,TPXACTR,9)
static A68_141   VPXACTR = {"static generator"}; 
A_GISVEC(A68_VC ,WPXACTR,VPXACTR,16)
static A68_121   XPXACTR = {"format"}; 
A_GISVEC(A68_VC ,YPXACTR,XPXACTR,6)
static A68_123   ZPXACTR = {"SPARE"}; 
A_GISVEC(A68_VC ,AQXACTR,ZPXACTR,5)
A_GISVEC(A68_VC ,BQXACTR,IHXACTR,30)
static A68_131   DQXACTR = {"transiddec                ("}; 
static A68_148   EQXACTR = {"identity declaration"}; 
A_GISVEC(A68_VC ,GQXACTR,EQXACTR,20)
static A68_148   HQXACTR = {"variable declaration"}; 
A_GISVEC(A68_VC ,IQXACTR,HQXACTR,20)
static A68_141   JQXACTR = {"formal parameter"}; 
A_GISVEC(A68_VC ,KQXACTR,JQXACTR,16)
static A68_132   LQXACTR = {"FOR control"}; 
A_GISVEC(A68_VC ,MQXACTR,LQXACTR,11)
static A68_148   NQXACTR = {"initialised variable"}; 
A_GISVEC(A68_VC ,OQXACTR,NQXACTR,20)
static A68_152   PQXACTR = {"formal conformity identifier"}; 
A_GISVEC(A68_VC ,QQXACTR,PQXACTR,28)
static A68_137   RQXACTR = {"FORALL control"}; 
A_GISVEC(A68_VC ,SQXACTR,RQXACTR,14)
static A68_160   TQXACTR = {"dummy declaration"}; 
A_GISVEC(A68_VC ,UQXACTR,TQXACTR,17)
static A68_133   VQXACTR = {"ERROR: unknown TRANSIDDEC type="}; 
A_GISVEC(A68_VC ,WQXACTR,VQXACTR,31)
static A68_126   YQXACTR = {" | name=\""}; 
static A68_122   ZQXACTR = {"\" | mode"}; 
static A68_134   ARXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,CRXACTR,ARXACTR,29)
static A68_126   ERXACTR = {" | decno="}; 
A_GISVEC(A68_VC ,FRXACTR,DQXACTR,27)
A_GISVEC(A68_VC ,GRXACTR,YQXACTR,9)
A_GISVEC(A68_VC ,HRXACTR,ZQXACTR,8)
A_GISVEC(A68_VC ,NRXACTR,ERXACTR,9)
static A68_156   QRXACTR = {"routine                   (name=\""}; 
static A68_93   RRXACTR = {" | mode"}; 
static A68_134   SRXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,URXACTR,SRXACTR,29)
static A68_134   WRXACTR = {" | proc of unlimited lifetime"}; 
A_GISVEC(A68_VC ,YRXACTR,WRXACTR,29)
static A68_161   ZRXACTR = {" | only external id is declared in CONTEXT VOID module"}; 
A_GISVEC(A68_VC ,ASXACTR,ZRXACTR,54)
static A68_162   BSXACTR = {" | decno of external id with smallest lifetime="}; 
static A68_125   CSXACTR = {"=\""}; 
A_GISVEC(A68_VC ,DSXACTR,BSXACTR,47)
A_GISVEC(A68_VC ,FSXACTR,CSXACTR,2)
static A68_135   ISXACTR = {" | rdenno="}; 
A_GISVEC(A68_VC ,JSXACTR,QRXACTR,33)
A_GISVEC(A68_VC ,MSXACTR,RRXACTR,7)
A_GISVEC(A68_VC ,SSXACTR,ISXACTR,10)
static A68_131   VSXACTR = {"warn                      ("}; 
static A68_121   WSXACTR = {"assign"}; 
A_GISVEC(A68_VC ,YSXACTR,WSXACTR,6)
static A68_123   ZSXACTR = {"ANDTH"}; 
A_GISVEC(A68_VC ,ATXACTR,ZSXACTR,5)
static A68_40   BTXACTR = {"OREL"}; 
A_GISVEC(A68_VC ,CTXACTR,BTXACTR,4)
static A68_123   DTXACTR = {"index"}; 
A_GISVEC(A68_VC ,ETXACTR,DTXACTR,5)
static A68_135   FTXACTR = {"PLUSAB etc"}; 
A_GISVEC(A68_VC ,GTXACTR,FTXACTR,10)
static A68_121   HTXACTR = {"FORALL"}; 
A_GISVEC(A68_VC ,ITXACTR,HTXACTR,6)
static A68_40   JTXACTR = {"loop"}; 
A_GISVEC(A68_VC ,KTXACTR,JTXACTR,4)
static A68_145   LTXACTR = {"ERROR: unknown WARN field"}; 
A_GISVEC(A68_VC ,MTXACTR,LTXACTR,25)
A_GISVEC(A68_VC ,NTXACTR,VSXACTR,27)
static A68_156   PTXACTR = {"labdec                    (name=\""}; 
static A68_129   TTXACTR = {""}; 
A_GISVEC(A68_VC ,VTXACTR,TTXACTR,0)
static A68_156   WTXACTR = {" | at start serial clause; labno="}; 
A_GISVEC(A68_VC ,YTXACTR,WTXACTR,33)
static A68_114   AUXACTR = {"at start user written routine; GOTO external label | labno="}; 
A_GISVEC(A68_VC ,BUXACTR,AUXACTR,59)
static A68_126   DUXACTR = {" | labno "}; 
static A68_160   EUXACTR = {" is redefined as "}; 
A_GISVEC(A68_VC ,FUXACTR,DUXACTR,9)
A_GISVEC(A68_VC ,HUXACTR,EUXACTR,17)
static A68_156   JUXACTR = {" | actual label setting of labno="}; 
A_GISVEC(A68_VC ,KUXACTR,JUXACTR,33)
A_GISVEC(A68_VC ,MUXACTR,PTXACTR,33)
static A68_133   PUXACTR = {"uchoice                   (mode"}; 
static A68_134   QUXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,SUXACTR,QUXACTR,29)
static A68_126   UUXACTR = {" | param="}; 
A_GISVEC(A68_VC ,VUXACTR,PUXACTR,31)
A_GISVEC(A68_VC ,CVXACTR,UUXACTR,9)
static A68_131   FVXACTR = {"callmodule                ("}; 
A_GISVEC(A68_VC ,GVXACTR,FVXACTR,27)
static A68_156   JVXACTR = {"keeps                     (start="}; 
static A68_40   KVXACTR = {"TRUE"}; 
A_GISVEC(A68_VC ,MVXACTR,KVXACTR,4)
static A68_123   NVXACTR = {"FALSE"}; 
A_GISVEC(A68_VC ,OVXACTR,NVXACTR,5)
A_GISVEC(A68_VC ,PVXACTR,JVXACTR,33)
static A68_159   RVXACTR = {"load:code                 "}; 
static A68_93   SVXACTR = {"( mode="}; 
static A68_137   TVXACTR = {" | parameters="}; 
static A68_125   UVXACTR = {" )"}; 
A_GISVEC(A68_VC ,VVXACTR,RVXACTR,26)
A_GISVEC(A68_VC ,WVXACTR,SVXACTR,7)
A_GISVEC(A68_VC ,YVXACTR,TVXACTR,14)
A_GISVEC(A68_VC ,AWXACTR,UVXACTR,2)
static A68_153   CWXACTR = {"formatx                   (info=(nochars="}; 
static A68_132   DWXACTR = {" | nocases="}; 
static A68_138   EWXACTR = {" | max nesting="}; 
static A68_126   FWXACTR = {") | text="}; 
A_GISVEC(A68_VC ,GWXACTR,CWXACTR,41)
A_GISVEC(A68_VC ,IWXACTR,DWXACTR,11)
A_GISVEC(A68_VC ,KWXACTR,EWXACTR,15)
A_GISVEC(A68_VC ,MWXACTR,FWXACTR,9)
static A68_156   NWXACTR = {"ERROR: unknown PRIMARY imperative"}; 
A_GISVEC(A68_VC ,OWXACTR,NWXACTR,33)
static A68_131   QWXACTR = {"separator                 ("}; 
static A68_40   RWXACTR = {"THEN"}; 
A_GISVEC(A68_VC ,TWXACTR,RWXACTR,4)
static A68_125   UWXACTR = {"IN"}; 
A_GISVEC(A68_VC ,VWXACTR,UWXACTR,2)
static A68_120   WWXACTR = {"INu"}; 
A_GISVEC(A68_VC ,XWXACTR,WWXACTR,3)
static A68_122   YWXACTR = {"ic comma"}; 
A_GISVEC(A68_VC ,ZWXACTR,YWXACTR,8)
static A68_122   AXXACTR = {"cc comma"}; 
A_GISVEC(A68_VC ,BXXACTR,AXXACTR,8)
static A68_40   CXXACTR = {"EXIT"}; 
A_GISVEC(A68_VC ,DXXACTR,CXXACTR,4)
static A68_120   EXXACTR = {"OUT"}; 
A_GISVEC(A68_VC ,FXXACTR,EXXACTR,3)
static A68_40   GXXACTR = {"OUTu"}; 
A_GISVEC(A68_VC ,HXXACTR,GXXACTR,4)
static A68_40   IXXACTR = {"ELSE"}; 
A_GISVEC(A68_VC ,JXXACTR,IXXACTR,4)
static A68_135   KXXACTR = {"coll comma"}; 
A_GISVEC(A68_VC ,LXXACTR,KXXACTR,10)
static A68_40   MXXACTR = {"semi"}; 
A_GISVEC(A68_VC ,NXXACTR,MXXACTR,4)
static A68_125   OXXACTR = {"DO"}; 
A_GISVEC(A68_VC ,PXXACTR,OXXACTR,2)
static A68_123   QXXACTR = {"WHILE"}; 
A_GISVEC(A68_VC ,RXXACTR,QXXACTR,5)
static A68_152   SXXACTR = {"ERROR: unknown SEPARATOR fn="}; 
A_GISVEC(A68_VC ,TXXACTR,SXXACTR,28)
static A68_134   VXXACTR = {" | mode & param are undefined"}; 
A_GISVEC(A68_VC ,XXXACTR,VXXACTR,29)
static A68_93   YXXACTR = {" | mode"}; 
static A68_134   ZXXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,BYXACTR,ZXXACTR,29)
static A68_126   DYXACTR = {" | param="}; 
A_GISVEC(A68_VC ,EYXACTR,YXXACTR,7)
A_GISVEC(A68_VC ,KYXACTR,DYXACTR,9)
A_GISVEC(A68_VC ,MYXACTR,QWXACTR,27)
static A68_131   PYXACTR = {"starter                   ("}; 
static A68_93   QYXACTR = {"routine"}; 
A_GISVEC(A68_VC ,SYXACTR,QYXACTR,7)
static A68_40   TYXACTR = {"decs"}; 
A_GISVEC(A68_VC ,UYXACTR,TYXACTR,4)
static A68_122   VYXACTR = {"IF/WHILE"}; 
A_GISVEC(A68_VC ,WYXACTR,VYXACTR,8)
static A68_40   XYXACTR = {"CASE"}; 
A_GISVEC(A68_VC ,YYXACTR,XYXACTR,4)
static A68_123   ZYXACTR = {"CASEu"}; 
A_GISVEC(A68_VC ,AZXACTR,ZYXACTR,5)
static A68_123   BZXACTR = {"BEGIN"}; 
A_GISVEC(A68_VC ,CZXACTR,BZXACTR,5)
static A68_135   DZXACTR = {"coll BEGIN"}; 
A_GISVEC(A68_VC ,EZXACTR,DZXACTR,10)
static A68_120   FZXACTR = {"FOR"}; 
A_GISVEC(A68_VC ,GZXACTR,FZXACTR,3)
static A68_121   HZXACTR = {"FORALL"}; 
A_GISVEC(A68_VC ,IZXACTR,HZXACTR,6)
static A68_159   JZXACTR = {"ERROR: unknown STARTER fn="}; 
A_GISVEC(A68_VC ,KZXACTR,JZXACTR,26)
static A68_93   MZXACTR = {" | mode"}; 
static A68_134   NZXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,PZXACTR,NZXACTR,29)
static A68_137   RZXACTR = {" | result mode"}; 
static A68_134   SZXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,UZXACTR,SZXACTR,29)
static A68_126   WZXACTR = {"undefined"}; 
A_GISVEC(A68_VC ,YZXACTR,WZXACTR,9)
A_GISVEC(A68_VC ,EAYACTR,PYXACTR,27)
A_GISVEC(A68_VC ,GAYACTR,MZXACTR,7)
A_GISVEC(A68_VC ,MAYACTR,RZXACTR,14)
static A68_131   OAYACTR = {"terminator                ("}; 
static A68_125   PAYACTR = {"FI"}; 
A_GISVEC(A68_VC ,RAYACTR,PAYACTR,2)
static A68_40   SAYACTR = {"ESAC"}; 
A_GISVEC(A68_VC ,TAYACTR,SAYACTR,4)
static A68_123   UAYACTR = {"ESACu"}; 
A_GISVEC(A68_VC ,VAYACTR,UAYACTR,5)
static A68_120   WAYACTR = {"END"}; 
A_GISVEC(A68_VC ,XAYACTR,WAYACTR,3)
static A68_122   YAYACTR = {"coll END"}; 
A_GISVEC(A68_VC ,ZAYACTR,YAYACTR,8)
static A68_125   ABYACTR = {"OD"}; 
A_GISVEC(A68_VC ,BBYACTR,ABYACTR,2)
static A68_132   CBYACTR = {"routine end"}; 
A_GISVEC(A68_VC ,DBYACTR,CBYACTR,11)
static A68_121   EBYACTR = {"FINISH"}; 
A_GISVEC(A68_VC ,FBYACTR,EBYACTR,6)
static A68_122   GBYACTR = {"opt bool"}; 
A_GISVEC(A68_VC ,HBYACTR,GBYACTR,8)
static A68_134   IBYACTR = {"ERROR: unknown TERMINATOR fn="}; 
A_GISVEC(A68_VC ,JBYACTR,IBYACTR,29)
A_GISVEC(A68_VC ,LBYACTR,OAYACTR,27)
static A68_157   QBYACTR = {"composer:closure          (body="}; 
static A68_136   RBYACTR = {" | moduleno="}; 
A_GISVEC(A68_VC ,SBYACTR,QBYACTR,32)
A_GISVEC(A68_VC ,UBYACTR,RBYACTR,12)
static A68_155   XBYACTR = {"composer:synthetic module (moduleno="}; 
static A68_123   YBYACTR = {" | i="}; 
static A68_123   ZBYACTR = {" | j="}; 
A_GISVEC(A68_VC ,ACYACTR,XBYACTR,36)
A_GISVEC(A68_VC ,CCYACTR,YBYACTR,5)
A_GISVEC(A68_VC ,ECYACTR,ZBYACTR,5)
static A68_155   HCYACTR = {"composer:extern module    (moduleno="}; 
static A68_126   ICYACTR = {" | name=\""}; 
static A68_132   JCYACTR = {"\" | uname=\""}; 
static A68_132   KCYACTR = {"\" | lname=\""}; 
static A68_132   LCYACTR = {"\" | gname=\""}; 
A_GISVEC(A68_VC ,MCYACTR,HCYACTR,36)
A_GISVEC(A68_VC ,OCYACTR,ICYACTR,9)
A_GISVEC(A68_VC ,PCYACTR,JCYACTR,11)
A_GISVEC(A68_VC ,QCYACTR,KCYACTR,11)
A_GISVEC(A68_VC ,RCYACTR,LCYACTR,11)
static A68_147   TCYACTR = {"ERROR: unknown COMPOSER imperative"}; 
A_GISVEC(A68_VC ,UCYACTR,TCYACTR,34)
static A68_40   VCYACTR = {"VOID"}; 
A_GISVEC(A68_VC ,WCYACTR,VCYACTR,4)
static A68_145   XCYACTR = {"ERROR: unknown imperative"}; 
A_GISVEC(A68_VC ,YCYACTR,XCYACTR,25)
typedef struct   /* env of non-global proc */
{
int dummy;
} KZWACTR_generator;

A_STATIC A68_VOID  OWWACTR_generator(A68_BOOL  NWWACTR_anonymous, A68_115  *ReturnedValue);

A_STATIC A68_VOID  QWWACTR_generator(A68_BOOL  PWWACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GZWACTR_bitmnemonic(A68_BITS  Props, A68_BOOL  Whichxbit, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JZWACTR_generator(A68_BOOL  HZWACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JAXACTR_imperativemnemonic(A68_67  Imperative, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MEXACTR_standardpreludeops(A68_INT  Opnumber, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QWWACTR_generator(A68_BOOL  PWWACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  RWWACTR;  /* clause result */
A68_VC  SWWACTR;  /* OPERATORS - dynamic generator */
{ 
SWWACTR.upb = 0 ;
( PWWACTR_anonymous? A_VLOC(A68_CHAR ,SWWACTR): A_VHEAP(A68_CHAR ,SWWACTR) );
RWWACTR = SWWACTR;
} 
*ReturnedValue = (RWWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JZWACTR_generator(A68_BOOL  HZWACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KZWACTR_generator *)NonLocals)->x)
{ 
A68_VC  LZWACTR;  /* clause result */
A68_VC  MZWACTR;  /* OPERATORS - dynamic generator */
{ 
MZWACTR.upb = 0 ;
( HZWACTR_anonymous? A_VLOC(A68_CHAR ,MZWACTR): A_VHEAP(A68_CHAR ,MZWACTR) );
LZWACTR = MZWACTR;
} 
*ReturnedValue = (LZWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MEXACTR_standardpreludeops(A68_INT  Opnumber, A68_VC  *ReturnedValue)
{ 
A68_VC  NEXACTR;  /* clause result */
A68_VC  OEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(standardpreludeops);
 /* line 244: */
 /* line 245: */
switch ( Opnumber )
{ 
case 1: 
NEXACTR = A_HVEC(OEXACTR,'+',A68_CHAR );
break;
case 2: 
NEXACTR = A_HVEC(PEXACTR,'-',A68_CHAR );
break;
case 3: 
NEXACTR = REXACTR;
break;
case 4: 
NEXACTR = TEXACTR;
break;
case 5: 
 /* line 246: */
NEXACTR = VEXACTR;
break;
case 6: 
NEXACTR = XEXACTR;
break;
case 7: 
NEXACTR = A_HVEC(YEXACTR,'<',A68_CHAR );
break;
case 8: 
NEXACTR = A_HVEC(ZEXACTR,'>',A68_CHAR );
break;
case 9: 
NEXACTR = BFXACTR;
break;
case 10: 
 /* line 247: */
NEXACTR = DFXACTR;
break;
case 11: 
NEXACTR = A_HVEC(EFXACTR,'=',A68_CHAR );
break;
case 12: 
NEXACTR = GFXACTR;
break;
case 13: 
NEXACTR = A_HVEC(HFXACTR,'*',A68_CHAR );
break;
case 14: 
NEXACTR = A_HVEC(IFXACTR,'/',A68_CHAR );
break;
case 15: 
 /* line 248: */
NEXACTR = KFXACTR;
break;
case 16: 
NEXACTR = MFXACTR;
break;
case 17: 
NEXACTR = OFXACTR;
break;
case 18: 
NEXACTR = A_HVEC(PFXACTR,'I',A68_CHAR );
break;
case 19: 
NEXACTR = RFXACTR;
break;
case 20: 
 /* line 249: */
NEXACTR = TFXACTR;
break;
case 21: 
NEXACTR = VFXACTR;
break;
case 22: 
NEXACTR = XFXACTR;
break;
case 23: 
NEXACTR = ZFXACTR;
break;
case 24: 
NEXACTR = BGXACTR;
break;
case 25: 
 /* line 250: */
NEXACTR = DGXACTR;
break;
case 26: 
NEXACTR = FGXACTR;
break;
case 27: 
NEXACTR = HGXACTR;
break;
case 28: 
NEXACTR = JGXACTR;
break;
case 29: 
NEXACTR = LGXACTR;
break;
case 30: 
 /* line 251: */
NEXACTR = NGXACTR;
break;
case 31: 
NEXACTR = PGXACTR;
break;
case 32: 
 /* line 252: */
NEXACTR = RGXACTR;
break;
case 33: 
 /* line 253: */
NEXACTR = TGXACTR;
break;
default: 
NEXACTR = VGXACTR;
break;
} 
A_PROC_EXIT(standardpreludeops);
*ReturnedValue = (NEXACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OWWACTR_generator(A68_BOOL  NWWACTR_anonymous, A68_115  *ReturnedValue)
{ 
A68_118  TWWACTR_anonymous;
A68_VC  UWWACTR;  /* avoid structure result */
A68_117 * VWWACTR;  /* YIELD */
A68_115  WWWACTR;  /* clause result */
{ 
QWWACTR_generator( NWWACTR_anonymous, &UWWACTR );
VWWACTR = (&((&TWWACTR_anonymous)->Name)) ;
(*VWWACTR) = UWWACTR;
WWWACTR = TWWACTR_anonymous;
} 
*ReturnedValue = (WWWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GZWACTR_bitmnemonic(A68_BITS  Props, A68_BOOL  Whichxbit, A68_VC  *ReturnedValue)
{ 
A68_109  IZWACTR_generator;   /* proc value of non-global proc */
A68_117  OZWACTR;  /* avoid structure result */
A68_117  NZWACTR_output;
A68_VC  RZWACTR;  /* YIELD */
A68_VC  SZWACTR;  /* OPERATORS - copy to flex */
A68_119  TZWACTR;  /* clause result */
A68_119  UZWACTR_whichimperative;
A68_115  VZWACTR_b;
A68_115 * WZWACTR;  /* forall control - []x */
A68_INT  XZWACTR;  /* forall loop counter */
A68_VC  YZWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CAXACTR;  /* clause result */
A68_VC  GAXACTR;  /* OPERATORS - trim index */
A68_VC  HAXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bitmnemonic);
 /* line 146: */
 /* line 147: */
{ 
A_CLOSURE( IZWACTR_generator, JZWACTR_generator, KZWACTR_generator );
A_CALLPROC(IZWACTR_generator,(A68_TRUE, &OZWACTR),(A68_TRUE, &OZWACTR,(IZWACTR_generator).nonlocals));
NZWACTR_output = OZWACTR;
RZWACTR = QZWACTR ;
NZWACTR_output = A_VCOPY(RZWACTR,SZWACTR,A68_CHAR );
 /* line 148: */
if ( Whichxbit )
{ 
TZWACTR = GYWACTR_controlbits;
} 
else
{ 
TZWACTR = VYWACTR_routinebits;
} 
UZWACTR_whichimperative = TZWACTR;
 /* line 150: */
 /* line 151: */
XZWACTR = UZWACTR_whichimperative.dim[0].upb - UZWACTR_whichimperative.dim[0].lwb;
WZWACTR = UZWACTR_whichimperative.data;
for (;XZWACTR-- >= 0;
(WZWACTR += UZWACTR_whichimperative.dim[0].stride
) )
{
VZWACTR_b = *WZWACTR;
 /* line 152: */
 /* line 153: */
if ( ((A68_BITS )(VZWACTR_b.Value&Props)!=(A68_BITS )0) )
{ 
 /* line 154: */
 /* line 155: */
A_VC_PLUSAB(NZWACTR_output,A_VC_PLUS(VZWACTR_b.Name,A_HVEC(YZWACTR,',',A68_CHAR )));
} 
}
 /* line 156: */
 /* line 157: */
 /* line 158: */
if ( A_VC_EQ(NZWACTR_output,AAXACTR) )
{ 
 /* line 159: */
CAXACTR = DAXACTR;
} 
else
{ 
 /* line 160: */
 /* line 161: */
CAXACTR = A_VC_PLUS(A_VC_PLUS(FAXACTR,A_VTRIM(GAXACTR,(*(&NZWACTR_output)),A_VTSCRIPT(&(GAXACTR.upb),(*(&NZWACTR_output)).upb,1,(NZWACTR_output.upb-1)))),A_HVEC(HAXACTR,')',A68_CHAR ));
} 
} 
A_PROC_EXIT(bitmnemonic);
*ReturnedValue = (CAXACTR);
return;
} 
#undef NL

A68_VOID  JAXACTR_imperativemnemonic(A68_67  Imperative, A68_VC  *ReturnedValue)
{ 
A68_67  KAXACTR;  /* united object - for case conformity */
A68_83  LAXACTR_p;
A68_83  MAXACTR;  /* united object - for case conformity */
A68_82  NAXACTR_l;
A68_82  OAXACTR;  /* united object - for case conformity */
A68_68  PAXACTR_si;
A68_VC  SAXACTR;  /* clause result */
A68_VC  ABXACTR;  /* avoid structure result */
A68_VC  BBXACTR;  /* clause result */
A68_INT  DBXACTR_i;
A68_VC  HBXACTR;  /* avoid structure result */
A68_VC  JBXACTR;  /* avoid structure result */
A68_VC  KBXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  LBXACTR_b;
A68_VC  OBXACTR;  /* clause result */
A68_66  TBXACTR_c;
A68_69  WBXACTR_sl;
A68_VC  ZBXACTR;  /* avoid structure result */
A68_70  ACXACTR_n;
A68_VC  DCXACTR;  /* clause result */
A68_VC  FCXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ICXACTR;  /* ADICOPS - ABS INT */
A68_VC  JCXACTR;  /* avoid structure result */
A68_VC  KCXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LCXACTR;  /* ADICOPS - ABS INT */
A68_VC  MCXACTR;  /* avoid structure result */
A68_54  OCXACTR_a;
A68_VC  RCXACTR;  /* clause result */
A68_VC  TCXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  WCXACTR;  /* ADICOPS - ABS INT */
A68_VC  XCXACTR;  /* avoid structure result */
A68_VC  YCXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ZCXACTR;  /* ADICOPS - ABS INT */
A68_VC  ADXACTR;  /* avoid structure result */
A68_VC  CDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_71  DDXACTR_o;
A68_VC  GDXACTR;  /* clause result */
A68_VC  IDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LDXACTR;  /* ADICOPS - ABS INT */
A68_VC  MDXACTR;  /* avoid structure result */
A68_VC  NDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ODXACTR;  /* ADICOPS - ABS INT */
A68_VC  PDXACTR;  /* avoid structure result */
A68_VC  RDXACTR;  /* avoid structure result */
A68_72  SDXACTR_st;
A68_VC  VDXACTR;  /* clause result */
A68_VC  XDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  AEXACTR;  /* ADICOPS - ABS INT */
A68_VC  BEXACTR;  /* avoid structure result */
A68_VC  CEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  DEXACTR;  /* ADICOPS - ABS INT */
A68_VC  EEXACTR;  /* avoid structure result */
A68_VC  GEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_73  JEXACTR_o;
A68_VC  WGXACTR;  /* avoid structure result */
A68_VC  XGXACTR_p;
A68_VC  ZGXACTR;  /* clause result */
A68_VC  BHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  CHXACTR;  /* ADICOPS - ABS INT */
A68_VC  DHXACTR;  /* avoid structure result */
A68_VC  EHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  FHXACTR;  /* ADICOPS - ABS INT */
A68_VC  GHXACTR;  /* avoid structure result */
A68_VC  HHXACTR_m;
A68_VC  LHXACTR;  /* clause result */
A68_VC  PHXACTR;  /* clause result */
A68_INT  DIXACTR;  /* ADICOPS - MOD */
A68_INT  EIXACTR;  /* ADICOPS - MOD */
A68_INT  FIXACTR;  /* ADICOPS - MOD */
A68_VC  HIXACTR;  /* clause result */
A68_VC  YIXACTR;  /* clause result */
A68_VC  IJXACTR;  /* avoid structure result */
A68_VC  OJXACTR;  /* avoid structure result */
A68_VC  BKXACTR;  /* avoid structure result */
A68_VC  DKXACTR;  /* avoid structure result */
A68_INT  FKXACTR;  /* ADICOPS - MOD */
A68_INT  GKXACTR;  /* ADICOPS - MOD */
A68_INT  HKXACTR;  /* ADICOPS - MOD */
A68_VC  IKXACTR;  /* avoid structure result */
A68_VC  MKXACTR;  /* clause result */
A68_VC  NKXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OKXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  AMXACTR;  /* avoid structure result */
A68_INT  DMXACTR;  /* ADICOPS - MOD */
A68_INT  EMXACTR;  /* ADICOPS - MOD */
A68_INT  FMXACTR;  /* ADICOPS - MOD */
A68_VC  GMXACTR;  /* avoid structure result */
A68_VC  LMXACTR;  /* clause result */
A68_VC  UMXACTR;  /* avoid structure result */
A68_VC  MNXACTR;  /* clause result */
A68_65  CQXACTR_t;
A68_VC  FQXACTR;  /* clause result */
A68_VC  XQXACTR;  /* avoid structure result */
A68_VC  BRXACTR;  /* clause result */
A68_VC  DRXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IRXACTR;  /* ADICOPS - ABS INT */
A68_VC  JRXACTR;  /* avoid structure result */
A68_VC  KRXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LRXACTR;  /* ADICOPS - ABS INT */
A68_VC  MRXACTR;  /* avoid structure result */
A68_VC  ORXACTR;  /* avoid structure result */
A68_74  PRXACTR_r;
A68_VC  TRXACTR;  /* clause result */
A68_VC  VRXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XRXACTR;  /* clause result */
A68_VC  ESXACTR;  /* avoid structure result */
A68_VC  GSXACTR;  /* avoid structure result */
A68_VC  HSXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KSXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LSXACTR;  /* avoid structure result */
A68_INT  NSXACTR;  /* ADICOPS - ABS INT */
A68_VC  OSXACTR;  /* avoid structure result */
A68_VC  PSXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  QSXACTR;  /* ADICOPS - ABS INT */
A68_VC  RSXACTR;  /* avoid structure result */
A68_VC  TSXACTR;  /* avoid structure result */
A68_75  USXACTR_w;
A68_VC  XSXACTR;  /* clause result */
A68_76  OTXACTR_l;
A68_VC  QTXACTR;  /* OPERATORS - nil -> mode */
A68_VC  RTXACTR;  /* == */
A68_VC  STXACTR;  /* == */
A68_VC  UTXACTR;  /* clause result */
A68_VC  XTXACTR;  /* clause result */
A68_VC  ZTXACTR;  /* avoid structure result */
A68_VC  CUXACTR;  /* avoid structure result */
A68_VC  GUXACTR;  /* avoid structure result */
A68_VC  IUXACTR;  /* avoid structure result */
A68_VC  LUXACTR;  /* avoid structure result */
A68_VC  NUXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_77  OUXACTR_u;
A68_VC  RUXACTR;  /* clause result */
A68_VC  TUXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  WUXACTR;  /* ADICOPS - ABS INT */
A68_VC  XUXACTR;  /* avoid structure result */
A68_VC  YUXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ZUXACTR;  /* ADICOPS - ABS INT */
A68_VC  AVXACTR;  /* avoid structure result */
A68_VC  BVXACTR;  /* avoid structure result */
A68_VC  DVXACTR;  /* avoid structure result */
A68_55  EVXACTR_c;
A68_VC  HVXACTR;  /* avoid structure result */
A68_78  IVXACTR_k;
A68_VC  LVXACTR;  /* clause result */
A68_58  QVXACTR_c;
A68_VC  XVXACTR;  /* avoid structure result */
A68_VC  ZVXACTR;  /* avoid structure result */
A68_63  BWXACTR_f;
A68_VC  HWXACTR;  /* avoid structure result */
A68_VC  JWXACTR;  /* avoid structure result */
A68_VC  LWXACTR;  /* avoid structure result */
A68_79  PWXACTR_s;
A68_VC  SWXACTR;  /* clause result */
A68_VC  UXXACTR;  /* avoid structure result */
A68_VC  WXXACTR;  /* clause result */
A68_VC  AYXACTR;  /* clause result */
A68_VC  CYXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  FYXACTR;  /* ADICOPS - ABS INT */
A68_VC  GYXACTR;  /* avoid structure result */
A68_VC  HYXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IYXACTR;  /* ADICOPS - ABS INT */
A68_VC  JYXACTR;  /* avoid structure result */
A68_VC  LYXACTR;  /* avoid structure result */
A68_VC  NYXACTR;  /* avoid structure result */
A68_80  OYXACTR_s;
A68_VC  RYXACTR;  /* clause result */
A68_VC  LZXACTR;  /* avoid structure result */
A68_VC  OZXACTR;  /* clause result */
A68_VC  QZXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TZXACTR;  /* clause result */
A68_VC  VZXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XZXACTR;  /* clause result */
A68_INT  ZZXACTR;  /* ADICOPS - ABS INT */
A68_VC  AAYACTR;  /* avoid structure result */
A68_VC  BAYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  CAYACTR;  /* ADICOPS - ABS INT */
A68_VC  DAYACTR;  /* avoid structure result */
A68_VC  FAYACTR;  /* avoid structure result */
A68_INT  HAYACTR;  /* ADICOPS - ABS INT */
A68_VC  IAYACTR;  /* avoid structure result */
A68_VC  JAYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  KAYACTR;  /* ADICOPS - ABS INT */
A68_VC  LAYACTR;  /* avoid structure result */
A68_81  NAYACTR_t;
A68_VC  QAYACTR;  /* clause result */
A68_VC  KBYACTR;  /* avoid structure result */
A68_VC  MBYACTR;  /* avoid structure result */
A68_59  NBYACTR_c;
A68_59  OBYACTR;  /* united object - for case conformity */
A68_56  PBYACTR_c;
A68_VC  TBYACTR;  /* avoid structure result */
A68_VC  VBYACTR;  /* avoid structure result */
A68_60  WBYACTR_s;
A68_VC  BCYACTR;  /* avoid structure result */
A68_VC  DCYACTR;  /* avoid structure result */
A68_VC  FCYACTR;  /* avoid structure result */
A68_61  GCYACTR_e;
A68_VC  NCYACTR;  /* avoid structure result */
A68_VC  SCYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZCYACTR;  /* clause result */
A68_VC  ADYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(imperativemnemonic);
 /* line 167: */
 /* line 168: */
KAXACTR = Imperative ;
switch ( KAXACTR.mode )
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
case 18: /* STRUCT(MODE64,REF MODE26)  */
case 19: /* STRUCT(INT,INT,REF MODE26)  */
A_UNCPY(LAXACTR_p,KAXACTR);
 /* line 169: */
 /* line 170: */
MAXACTR = LAXACTR_p ;
switch ( MAXACTR.mode )
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
A_UNCPY(NAXACTR_l,MAXACTR);
 /* line 171: */
 /* line 176: */
OAXACTR = NAXACTR_l ;
switch ( OAXACTR.mode )
{ 
case 1: /* STRUCT(INT)  */
PAXACTR_si = (OAXACTR.data.mode1);
 /* line 177: */
 /* line 179: */
switch ( PAXACTR_si.Nse )
{ 
case 1: 
SAXACTR = TAXACTR;
break;
case 2: 
 /* line 180: */
SAXACTR = VAXACTR;
break;
case 3: 
SAXACTR = XAXACTR;
break;
default: 
 /* line 181: */
ROAAOSF_whole( PAXACTR_si.Nse, DZWACTR_fieldlength, &ABXACTR );
SAXACTR = A_VC_PLUS(ZAXACTR,ABXACTR);
break;
} 
 /* line 183: */
BBXACTR = A_VC_PLUS(CBXACTR,SAXACTR);
break;
case 2: /* INT */
DBXACTR_i = (OAXACTR.data.mode2);
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 188: */
ROAAOSF_whole( DBXACTR_i, DZWACTR_fieldlength, &HBXACTR );
UTKACTR_idfullname( DBXACTR_i, &JBXACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GBXACTR,HBXACTR),IBXACTR),JBXACTR),A_HVEC(KBXACTR,'\"',A68_CHAR ));
break;
case 3: /* BOOL */
LBXACTR_b = (OAXACTR.data.mode3);
 /* line 189: */
 /* line 190: */
if ( LBXACTR_b )
{ 
OBXACTR = PBXACTR;
} 
else
{ 
OBXACTR = RBXACTR;
} 
 /* line 192: */
BBXACTR = A_VC_PLUS(SBXACTR,OBXACTR);
break;
case 4: /* STRUCT(REF MODE26)  */
TBXACTR_c = (OAXACTR.data.mode4);
 /* line 193: */
 /* line 195: */
BBXACTR = A_VC_PLUS(VBXACTR,TBXACTR_c.Representation);
break;
case 5: /* STRUCT(INT)  */
WBXACTR_sl = (OAXACTR.data.mode5);
 /* line 196: */
 /* line 197: */
 /* line 199: */
ROAAOSF_whole( WBXACTR_sl.Labno, DZWACTR_fieldlength, &ZBXACTR );
BBXACTR = A_VC_PLUS(YBXACTR,ZBXACTR);
break;
case 6: /* STRUCT(INT,REF MODE26)  */
ACXACTR_n = (OAXACTR.data.mode6);
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 203: */
if ( (ACXACTR_n.Mode<0) )
{ 
 /* line 204: */
DCXACTR = ECXACTR;
} 
else
{ 
DCXACTR = A_HVEC(FCXACTR,'=',A68_CHAR );
} 
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 209: */
ICXACTR = ACXACTR_n.Mode ;
ROAAOSF_whole( A_ABS(ICXACTR), DZWACTR_fieldlength, &JCXACTR );
LCXACTR = ACXACTR_n.Mode ;
WCNACTR_modename( A_ABS(LCXACTR), &MCXACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HCXACTR,DCXACTR),JCXACTR),A_HVEC(KCXACTR,'=',A68_CHAR )),MCXACTR),NCXACTR),ACXACTR_n.Nu);
break;
case 7: /* STRUCT(INT,REF MODE26)  */
OCXACTR_a = (OAXACTR.data.mode7);
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
if ( (OCXACTR_a.Mode<0) )
{ 
 /* line 214: */
RCXACTR = SCXACTR;
} 
else
{ 
RCXACTR = A_HVEC(TCXACTR,'=',A68_CHAR );
} 
 /* line 215: */
 /* line 216: */
 /* line 218: */
WCXACTR = OCXACTR_a.Mode ;
ROAAOSF_whole( A_ABS(WCXACTR), DZWACTR_fieldlength, &XCXACTR );
ZCXACTR = OCXACTR_a.Mode ;
WCNACTR_modename( A_ABS(ZCXACTR), &ADXACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VCXACTR,RCXACTR),XCXACTR),A_HVEC(YCXACTR,'=',A68_CHAR )),ADXACTR),BDXACTR),OCXACTR_a.String),A_HVEC(CDXACTR,'\"',A68_CHAR ));
break;
case 8: /* STRUCT(INT,LONG BITS)  */
DDXACTR_o = (OAXACTR.data.mode8);
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 222: */
if ( (DDXACTR_o.Mode<0) )
{ 
 /* line 223: */
GDXACTR = HDXACTR;
} 
else
{ 
GDXACTR = A_HVEC(IDXACTR,'=',A68_CHAR );
} 
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 229: */
LDXACTR = DDXACTR_o.Mode ;
ROAAOSF_whole( A_ABS(LDXACTR), DZWACTR_fieldlength, &MDXACTR );
ODXACTR = DDXACTR_o.Mode ;
WCNACTR_modename( A_ABS(ODXACTR), &PDXACTR );
JPAAOSF_lwhole( (A68_LINT )DDXACTR_o.Denotation, DZWACTR_fieldlength, &RDXACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(KDXACTR,GDXACTR),MDXACTR),A_HVEC(NDXACTR,'=',A68_CHAR )),PDXACTR),QDXACTR),RDXACTR);
break;
case 9: /* STRUCT(INT,REF MODE26)  */
SDXACTR_st = (OAXACTR.data.mode9);
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
if ( (SDXACTR_st.Mode<0) )
{ 
 /* line 234: */
VDXACTR = WDXACTR;
} 
else
{ 
VDXACTR = A_HVEC(XDXACTR,'=',A68_CHAR );
} 
 /* line 235: */
 /* line 236: */
 /* line 237: */
 /* line 238: */
 /* line 239: */
AEXACTR = SDXACTR_st.Mode ;
ROAAOSF_whole( A_ABS(AEXACTR), DZWACTR_fieldlength, &BEXACTR );
DEXACTR = SDXACTR_st.Mode ;
WCNACTR_modename( A_ABS(DEXACTR), &EEXACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZDXACTR,VDXACTR),BEXACTR),A_HVEC(CEXACTR,'=',A68_CHAR )),EEXACTR),FEXACTR),SDXACTR_st.Denotation),A_HVEC(GEXACTR,'\"',A68_CHAR ));
break;
default: 
 /* line 241: */
BBXACTR = IEXACTR;
break;
} 
break;
case 10: /* STRUCT(INT,INT,INT)  */
JEXACTR_o = (MAXACTR.data.mode10);
 /* line 242: */
 /* line 243: */
{ 
 /* line 254: */
ROAAOSF_whole( JEXACTR_o.Param, DZWACTR_fieldlength, &WGXACTR );
XGXACTR_p = WGXACTR;
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 258: */
if ( (JEXACTR_o.Mode<0) )
{ 
 /* line 259: */
ZGXACTR = AHXACTR;
} 
else
{ 
 /* line 260: */
ZGXACTR = A_HVEC(BHXACTR,'=',A68_CHAR );
} 
 /* line 261: */
CHXACTR = JEXACTR_o.Mode ;
ROAAOSF_whole( A_ABS(CHXACTR), DZWACTR_fieldlength, &DHXACTR );
FHXACTR = JEXACTR_o.Mode ;
WCNACTR_modename( A_ABS(FHXACTR), &GHXACTR );
HHXACTR_m = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZGXACTR,DHXACTR),A_HVEC(EHXACTR,'=',A68_CHAR )),GHXACTR);
 /* line 263: */
 /* line 264: */
 /* line 265: */
switch ( JEXACTR_o.Fn )
{ 
case 1: 
 /* line 266: */
 /* line 267: */
 /* line 268: */
if ( (JEXACTR_o.Param==(A68_TRUE)) )
{ 
 /* line 269: */
LHXACTR = MHXACTR;
} 
else
{ 
LHXACTR = OHXACTR;
} 
 /* line 271: */
PHXACTR = A_VC_PLUS(A_VC_PLUS(QHXACTR,LHXACTR),HHXACTR_m);
break;
case 2: 
 /* line 273: */
PHXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(THXACTR,XGXACTR_p),UHXACTR),HHXACTR_m);
break;
case 3: 
 /* line 274: */
 /* line 276: */
PHXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(XHXACTR,XGXACTR_p),YHXACTR),HHXACTR_m);
break;
case 4: 
 /* line 278: */
PHXACTR = A_VC_PLUS(AIXACTR,HHXACTR_m);
break;
case 5: 
 /* line 279: */
 /* line 280: */
EIXACTR = JEXACTR_o.Mode ;
FIXACTR = 8 ;
switch ( A_MOD(EIXACTR,FIXACTR,DIXACTR) )
{ 
case 1: 
HIXACTR = IIXACTR;
break;
case 2: 
HIXACTR = KIXACTR;
break;
case 3: 
 /* line 281: */
HIXACTR = MIXACTR;
break;
case 4: 
HIXACTR = OIXACTR;
break;
case 5: 
HIXACTR = QIXACTR;
break;
case 6: 
 /* line 283: */
HIXACTR = SIXACTR;
break;
case 7: 
 /* line 284: */
HIXACTR = UIXACTR;
break;
default: 
HIXACTR = WIXACTR;
break;
} 
 /* line 285: */
if ( (JEXACTR_o.Mode>7) )
{ 
YIXACTR = ZIXACTR;
} 
else
{ 
YIXACTR = BJXACTR;
} 
 /* line 287: */
PHXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(CJXACTR,XGXACTR_p),DJXACTR),HIXACTR),YIXACTR);
break;
case 6: 
 /* line 288: */
 /* line 290: */
ROAAOSF_whole( (1+JEXACTR_o.Param), 0, &IJXACTR );
PHXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HJXACTR,IJXACTR),JJXACTR),XGXACTR_p),KJXACTR),HHXACTR_m);
break;
case 7: 
 /* line 291: */
 /* line 293: */
ROAAOSF_whole( (1+JEXACTR_o.Param), 0, &OJXACTR );
PHXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NJXACTR,OJXACTR),PJXACTR),HHXACTR_m);
break;
case 8: 
 /* line 295: */
PHXACTR = A_VC_PLUS(RJXACTR,HHXACTR_m);
break;
case 9: 
 /* line 297: */
PHXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(UJXACTR,XGXACTR_p),VJXACTR),HHXACTR_m);
break;
case 10: 
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 301: */
 /* line 302: */
 /* line 304: */
ROAAOSF_whole( (JEXACTR_o.Param/16), DZWACTR_fieldlength, &BKXACTR );
MEXACTR_standardpreludeops( ((JEXACTR_o.Param/16)+1), &DKXACTR );
GKXACTR = JEXACTR_o.Param ;
HKXACTR = 16 ;
ROAAOSF_whole( A_MOD(GKXACTR,HKXACTR,FKXACTR), DZWACTR_fieldlength, &IKXACTR );
PHXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(AKXACTR,BKXACTR),CKXACTR),DKXACTR),EKXACTR),IKXACTR),JKXACTR),HHXACTR_m);
break;
case 11: 
 /* line 305: */
 /* line 306: */
 /* line 307: */
switch ( ((JEXACTR_o.Param/16)+1) )
{ 
case 1: 
MKXACTR = A_HVEC(NKXACTR,'+',A68_CHAR );
break;
case 2: 
MKXACTR = A_HVEC(OKXACTR,'-',A68_CHAR );
break;
case 3: 
MKXACTR = QKXACTR;
break;
case 4: 
MKXACTR = SKXACTR;
break;
case 5: 
 /* line 308: */
MKXACTR = UKXACTR;
break;
case 6: 
MKXACTR = WKXACTR;
break;
case 7: 
MKXACTR = YKXACTR;
break;
case 8: 
MKXACTR = ALXACTR;
break;
case 9: 
MKXACTR = CLXACTR;
break;
case 10: 
 /* line 309: */
MKXACTR = ELXACTR;
break;
case 11: 
MKXACTR = GLXACTR;
break;
case 12: 
MKXACTR = ILXACTR;
break;
case 13: 
MKXACTR = KLXACTR;
break;
case 14: 
MKXACTR = MLXACTR;
break;
case 15: 
 /* line 310: */
MKXACTR = OLXACTR;
break;
case 16: 
MKXACTR = QLXACTR;
break;
case 17: 
 /* line 311: */
MKXACTR = SLXACTR;
break;
case 18: 
 /* line 312: */
MKXACTR = ULXACTR;
break;
default: 
MKXACTR = WLXACTR;
break;
} 
 /* line 313: */
 /* line 314: */
 /* line 315: */
 /* line 317: */
ROAAOSF_whole( (JEXACTR_o.Param/16), DZWACTR_fieldlength, &AMXACTR );
EMXACTR = JEXACTR_o.Param ;
FMXACTR = 16 ;
ROAAOSF_whole( A_MOD(EMXACTR,FMXACTR,DMXACTR), DZWACTR_fieldlength, &GMXACTR );
PHXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZLXACTR,AMXACTR),BMXACTR),MKXACTR),CMXACTR),GMXACTR),HMXACTR),HHXACTR_m);
break;
case 12: 
 /* line 318: */
 /* line 319: */
if ( (JEXACTR_o.Param==1) )
{ 
LMXACTR = MMXACTR;
} 
else
{ 
 /* line 320: */
if ( (JEXACTR_o.Param==(-1)) )
{ 
LMXACTR = OMXACTR;
} 
else
{ 
 /* line 321: */
if ( (JEXACTR_o.Param>1) )
{ 
LMXACTR = QMXACTR;
} 
else
{ 
 /* line 322: */
 /* line 323: */
ROAAOSF_whole( ((-1)-JEXACTR_o.Param), DZWACTR_fieldlength, &UMXACTR );
LMXACTR = A_VC_PLUS(A_VC_PLUS(TMXACTR,UMXACTR),VMXACTR);
} 
} 
} 
 /* line 325: */
PHXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WMXACTR,HHXACTR_m),XMXACTR),LMXACTR);
break;
case 13: 
 /* line 327: */
PHXACTR = A_VC_PLUS(ZMXACTR,HHXACTR_m);
break;
case 14: 
 /* line 329: */
PHXACTR = A_VC_PLUS(BNXACTR,HHXACTR_m);
break;
case 15: 
 /* line 331: */
PHXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ENXACTR,XGXACTR_p),FNXACTR),HHXACTR_m);
break;
case 16: 
 /* line 333: */
PHXACTR = A_VC_PLUS(HNXACTR,HHXACTR_m);
break;
case 17: 
 /* line 335: */
PHXACTR = A_VC_PLUS(JNXACTR,HHXACTR_m);
break;
case 18: 
 /* line 336: */
 /* line 337: */
switch ( (JEXACTR_o.Param+1) )
{ 
case 1: 
 /* line 338: */
MNXACTR = NNXACTR;
break;
case 2: 
 /* line 339: */
MNXACTR = PNXACTR;
break;
case 3: 
 /* line 340: */
MNXACTR = RNXACTR;
break;
case 4: 
 /* line 342: */
MNXACTR = TNXACTR;
break;
case 5: 
MNXACTR = VNXACTR;
break;
default: 
 /* line 343: */
MNXACTR = A_VC_PLUS(XNXACTR,XGXACTR_p);
break;
} 
 /* line 345: */
PHXACTR = A_VC_PLUS(A_VC_PLUS(YNXACTR,HHXACTR_m),MNXACTR);
break;
case 19: 
 /* line 347: */
PHXACTR = AOXACTR;
break;
case 20: 
 /* line 349: */
PHXACTR = A_VC_PLUS(COXACTR,HHXACTR_m);
break;
case 21: 
 /* line 351: */
PHXACTR = A_VC_PLUS(EOXACTR,HHXACTR_m);
break;
case 22: 
 /* line 353: */
PHXACTR = A_VC_PLUS(GOXACTR,HHXACTR_m);
break;
case 23: 
 /* line 355: */
PHXACTR = A_VC_PLUS(IOXACTR,HHXACTR_m);
break;
case 24: 
 /* line 357: */
PHXACTR = A_VC_PLUS(KOXACTR,HHXACTR_m);
break;
case 25: 
 /* line 359: */
PHXACTR = A_VC_PLUS(MOXACTR,HHXACTR_m);
break;
case 26: 
 /* line 361: */
PHXACTR = A_VC_PLUS(OOXACTR,HHXACTR_m);
break;
case 27: 
 /* line 363: */
PHXACTR = A_VC_PLUS(QOXACTR,HHXACTR_m);
break;
case 28: 
 /* line 365: */
PHXACTR = A_VC_PLUS(SOXACTR,HHXACTR_m);
break;
case 29: 
 /* line 367: */
PHXACTR = A_VC_PLUS(UOXACTR,HHXACTR_m);
break;
case 30: 
 /* line 369: */
PHXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(XOXACTR,XGXACTR_p),YOXACTR),HHXACTR_m);
break;
case 31: 
 /* line 371: */
PHXACTR = A_VC_PLUS(APXACTR,HHXACTR_m);
break;
case 32: 
 /* line 372: */
 /* line 374: */
PHXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(DPXACTR,XGXACTR_p),EPXACTR),HHXACTR_m);
break;
case 33: 
 /* line 376: */
PHXACTR = A_VC_PLUS(GPXACTR,HHXACTR_m);
break;
case 34: 
 /* line 378: */
PHXACTR = A_VC_PLUS(IPXACTR,HHXACTR_m);
break;
case 35: 
 /* line 380: */
PHXACTR = A_VC_PLUS(KPXACTR,HHXACTR_m);
break;
case 36: 
 /* line 382: */
PHXACTR = A_VC_PLUS(MPXACTR,HHXACTR_m);
break;
case 37: 
 /* line 384: */
PHXACTR = A_VC_PLUS(OPXACTR,HHXACTR_m);
break;
case 38: 
 /* line 386: */
PHXACTR = A_VC_PLUS(QPXACTR,HHXACTR_m);
break;
case 39: 
 /* line 388: */
PHXACTR = A_VC_PLUS(SPXACTR,HHXACTR_m);
break;
case 40: 
 /* line 390: */
 /* line 391: */
PHXACTR = A_VC_PLUS(HHXACTR_m,UPXACTR);
break;
default: 
 /* line 392: */
 /* line 393: */
if ( (JEXACTR_o.Fn==50) )
{ 
PHXACTR = WPXACTR;
} 
else
{ 
 /* line 394: */
 /* line 395: */
if ( (JEXACTR_o.Fn==51) )
{ 
 /* line 396: */
PHXACTR = YPXACTR;
} 
else
{ 
 /* line 397: */
 /* line 398: */
PHXACTR = AQXACTR;
} 
} 
break;
} 
 /* line 400: */
BBXACTR = A_VC_PLUS(BQXACTR,PHXACTR);
} 
break;
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
CQXACTR_t = (MAXACTR.data.mode11);
 /* line 401: */
 /* line 402: */
 /* line 403: */
switch ( CQXACTR_t.Type )
{ 
case 1: 
 /* line 404: */
FQXACTR = GQXACTR;
break;
case 2: 
 /* line 405: */
FQXACTR = IQXACTR;
break;
case 3: 
 /* line 406: */
FQXACTR = KQXACTR;
break;
case 4: 
 /* line 407: */
FQXACTR = MQXACTR;
break;
case 5: 
 /* line 408: */
FQXACTR = OQXACTR;
break;
case 6: 
 /* line 409: */
FQXACTR = QQXACTR;
break;
case 7: 
 /* line 411: */
FQXACTR = SQXACTR;
break;
case 8: 
FQXACTR = UQXACTR;
break;
default: 
 /* line 412: */
 /* line 413: */
ROAAOSF_whole( CQXACTR_t.Type, DZWACTR_fieldlength, &XQXACTR );
FQXACTR = A_VC_PLUS(WQXACTR,XQXACTR);
break;
} 
 /* line 414: */
 /* line 415: */
 /* line 416: */
if ( (CQXACTR_t.Mode<0) )
{ 
BRXACTR = CRXACTR;
} 
else
{ 
BRXACTR = A_HVEC(DRXACTR,'=',A68_CHAR );
} 
 /* line 417: */
 /* line 418: */
 /* line 419: */
 /* line 421: */
IRXACTR = CQXACTR_t.Mode ;
ROAAOSF_whole( A_ABS(IRXACTR), DZWACTR_fieldlength, &JRXACTR );
LRXACTR = CQXACTR_t.Mode ;
WCNACTR_modename( A_ABS(LRXACTR), &MRXACTR );
ROAAOSF_whole( CQXACTR_t.Decno, DZWACTR_fieldlength, &ORXACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FRXACTR,FQXACTR),GRXACTR),CQXACTR_t.Name),HRXACTR),BRXACTR),JRXACTR),A_HVEC(KRXACTR,'=',A68_CHAR )),MRXACTR),NRXACTR),ORXACTR);
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
PRXACTR_r = (MAXACTR.data.mode12);
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 425: */
if ( (PRXACTR_r.Mode<0) )
{ 
TRXACTR = URXACTR;
} 
else
{ 
TRXACTR = A_HVEC(VRXACTR,'=',A68_CHAR );
} 
 /* line 426: */
 /* line 427: */
 /* line 430: */
 /* line 431: */
 /* line 432: */
if ( (PRXACTR_r.Maxname<3) )
{ 
XRXACTR = YRXACTR;
} 
else
{ 
 /* line 433: */
 /* line 434: */
if ( (PRXACTR_r.Maxname==3) )
{ 
XRXACTR = ASXACTR;
} 
else
{ 
 /* line 435: */
 /* line 436: */
 /* line 437: */
ROAAOSF_whole( PRXACTR_r.Maxname, DZWACTR_fieldlength, &ESXACTR );
UTKACTR_idfullname( PRXACTR_r.Maxname, &GSXACTR );
XRXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(DSXACTR,ESXACTR),FSXACTR),GSXACTR),A_HVEC(HSXACTR,'\"',A68_CHAR ));
} 
} 
 /* line 438: */
 /* line 440: */
GZWACTR_bitmnemonic( (A68_BITS )(PRXACTR_r.Props&CZWACTR_maskxroutine), A68_FALSE, &LSXACTR );
NSXACTR = PRXACTR_r.Mode ;
ROAAOSF_whole( A_ABS(NSXACTR), DZWACTR_fieldlength, &OSXACTR );
QSXACTR = PRXACTR_r.Mode ;
WCNACTR_modename( A_ABS(QSXACTR), &RSXACTR );
ROAAOSF_whole( PRXACTR_r.Rdenno, DZWACTR_fieldlength, &TSXACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(JSXACTR,PRXACTR_r.Name),A_HVEC(KSXACTR,'\"',A68_CHAR )),LSXACTR),MSXACTR),TRXACTR),OSXACTR),A_HVEC(PSXACTR,'=',A68_CHAR )),RSXACTR),XRXACTR),SSXACTR),TSXACTR);
break;
case 13: /* STRUCT(INT)  */
USXACTR_w = (MAXACTR.data.mode13);
 /* line 441: */
 /* line 442: */
 /* line 443: */
switch ( USXACTR_w.W )
{ 
case 1: 
XSXACTR = YSXACTR;
break;
case 2: 
XSXACTR = ATXACTR;
break;
case 3: 
XSXACTR = CTXACTR;
break;
case 4: 
 /* line 444: */
XSXACTR = ETXACTR;
break;
case 5: 
XSXACTR = GTXACTR;
break;
case 6: 
 /* line 445: */
XSXACTR = ITXACTR;
break;
case 7: 
 /* line 446: */
XSXACTR = KTXACTR;
break;
default: 
XSXACTR = MTXACTR;
break;
} 
 /* line 448: */
BBXACTR = A_VC_PLUS(NTXACTR,XSXACTR);
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
OTXACTR_l = (MAXACTR.data.mode14);
 /* line 449: */
 /* line 450: */
RTXACTR = A_VVAC(QTXACTR) ;
STXACTR = OTXACTR_l.Name ;
if ( A_VSTRUCTCOMP(STXACTR,RTXACTR) )
{ 
UTXACTR = VTXACTR;
} 
else
{ 
 /* line 451: */
UTXACTR = OTXACTR_l.Name;
} 
 /* line 453: */
if ( OTXACTR_l.Notsetting )
{ 
 /* line 455: */
switch ( (OTXACTR_l.Status+1) )
{ 
case 1: 
 /* line 457: */
ROAAOSF_whole( OTXACTR_l.Labno, DZWACTR_fieldlength, &ZTXACTR );
XTXACTR = A_VC_PLUS(YTXACTR,ZTXACTR);
break;
case 2: 
 /* line 458: */
 /* line 459: */
 /* line 460: */
ROAAOSF_whole( OTXACTR_l.Labno, DZWACTR_fieldlength, &CUXACTR );
XTXACTR = A_VC_PLUS(BUXACTR,CUXACTR);
break;
default: 
 /* line 461: */
 /* line 462: */
 /* line 463: */
 /* line 464: */
ROAAOSF_whole( OTXACTR_l.Status, DZWACTR_fieldlength, &GUXACTR );
ROAAOSF_whole( OTXACTR_l.Labno, DZWACTR_fieldlength, &IUXACTR );
XTXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FUXACTR,GUXACTR),HUXACTR),IUXACTR);
break;
} 
} 
else
{ 
 /* line 465: */
 /* line 466: */
ROAAOSF_whole( OTXACTR_l.Labno, DZWACTR_fieldlength, &LUXACTR );
XTXACTR = A_VC_PLUS(KUXACTR,LUXACTR);
} 
 /* line 468: */
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MUXACTR,UTXACTR),A_HVEC(NUXACTR,'\"',A68_CHAR )),XTXACTR);
break;
case 15: /* STRUCT(INT,BITS,INT)  */
OUXACTR_u = (MAXACTR.data.mode15);
 /* line 469: */
 /* line 470: */
if ( (OUXACTR_u.Mode<0) )
{ 
RUXACTR = SUXACTR;
} 
else
{ 
RUXACTR = A_HVEC(TUXACTR,'=',A68_CHAR );
} 
 /* line 471: */
 /* line 472: */
 /* line 473: */
 /* line 474: */
 /* line 476: */
WUXACTR = OUXACTR_u.Mode ;
ROAAOSF_whole( A_ABS(WUXACTR), DZWACTR_fieldlength, &XUXACTR );
ZUXACTR = OUXACTR_u.Mode ;
WCNACTR_modename( A_ABS(ZUXACTR), &AVXACTR );
GZWACTR_bitmnemonic( (A68_BITS )(OUXACTR_u.Props&WCAACTR_decbit), A68_TRUE, &BVXACTR );
ROAAOSF_whole( OUXACTR_u.Param, DZWACTR_fieldlength, &DVXACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VUXACTR,RUXACTR),XUXACTR),A_HVEC(YUXACTR,'=',A68_CHAR )),AVXACTR),BVXACTR),CVXACTR),DVXACTR);
break;
case 16: /* STRUCT(INT)  */
EVXACTR_c = (MAXACTR.data.mode16);
 /* line 477: */
 /* line 478: */
 /* line 480: */
ROAAOSF_whole( EVXACTR_c.I, DZWACTR_fieldlength, &HVXACTR );
BBXACTR = A_VC_PLUS(GVXACTR,HVXACTR);
break;
case 17: /* STRUCT(BOOL)  */
IVXACTR_k = (MAXACTR.data.mode17);
 /* line 481: */
 /* line 482: */
if ( IVXACTR_k.Start )
{ 
LVXACTR = MVXACTR;
} 
else
{ 
LVXACTR = OVXACTR;
} 
 /* line 484: */
BBXACTR = A_VC_PLUS(PVXACTR,LVXACTR);
break;
case 19: /* STRUCT(INT,INT,REF MODE26)  */
QVXACTR_c = (MAXACTR.data.mode19);
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
 /* line 490: */
ROAAOSF_whole( QVXACTR_c.Mode, 0, &XVXACTR );
ROAAOSF_whole( QVXACTR_c.Number, 0, &ZVXACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VVXACTR,WVXACTR),XVXACTR),YVXACTR),ZVXACTR),AWXACTR);
break;
case 18: /* STRUCT(MODE64,REF MODE26)  */
BWXACTR_f = (MAXACTR.data.mode18);
 /* line 491: */
 /* line 492: */
 /* line 493: */
 /* line 494: */
 /* line 495: */
 /* line 496: */
 /* line 497: */
 /* line 498: */
 /* line 499: */
ROAAOSF_whole( BWXACTR_f.Info.Nochars, DZWACTR_fieldlength, &HWXACTR );
ROAAOSF_whole( BWXACTR_f.Info.Nocases, DZWACTR_fieldlength, &JWXACTR );
ROAAOSF_whole( BWXACTR_f.Info.W, DZWACTR_fieldlength, &LWXACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GWXACTR,HWXACTR),IWXACTR),JWXACTR),KWXACTR),LWXACTR),MWXACTR),BWXACTR_f.Text);
break;
default: 
 /* line 502: */
BBXACTR = OWXACTR;
break;
} 
break;
case 20: /* STRUCT(INT,INT,BITS,INT)  */
PWXACTR_s = (KAXACTR.data.mode20);
 /* line 503: */
 /* line 504: */
switch ( PWXACTR_s.Fn )
{ 
case 1: 
SWXACTR = TWXACTR;
break;
case 2: 
SWXACTR = VWXACTR;
break;
case 3: 
 /* line 505: */
SWXACTR = XWXACTR;
break;
case 4: 
SWXACTR = ZWXACTR;
break;
case 5: 
SWXACTR = BXXACTR;
break;
case 6: 
 /* line 506: */
SWXACTR = DXXACTR;
break;
case 7: 
SWXACTR = FXXACTR;
break;
case 8: 
SWXACTR = HXXACTR;
break;
case 9: 
 /* line 507: */
SWXACTR = JXXACTR;
break;
case 10: 
SWXACTR = LXXACTR;
break;
case 11: 
SWXACTR = NXXACTR;
break;
case 12: 
 /* line 509: */
SWXACTR = PXXACTR;
break;
case 13: 
 /* line 510: */
SWXACTR = RXXACTR;
break;
default: 
 /* line 511: */
 /* line 512: */
 /* line 513: */
ROAAOSF_whole( PWXACTR_s.Fn, DZWACTR_fieldlength, &UXXACTR );
SWXACTR = A_VC_PLUS(TXXACTR,UXXACTR);
break;
} 
 /* line 514: */
 /* line 515: */
 /* line 516: */
 /* line 518: */
if ( (PWXACTR_s.Fn==11) )
{ 
 /* line 519: */
WXXACTR = XXXACTR;
} 
else
{ 
 /* line 520: */
if ( (PWXACTR_s.Mode<0) )
{ 
AYXACTR = BYXACTR;
} 
else
{ 
AYXACTR = A_HVEC(CYXACTR,'=',A68_CHAR );
} 
 /* line 521: */
 /* line 522: */
 /* line 523: */
 /* line 524: */
FYXACTR = PWXACTR_s.Mode ;
ROAAOSF_whole( A_ABS(FYXACTR), DZWACTR_fieldlength, &GYXACTR );
IYXACTR = PWXACTR_s.Mode ;
WCNACTR_modename( A_ABS(IYXACTR), &JYXACTR );
ROAAOSF_whole( PWXACTR_s.Param, DZWACTR_fieldlength, &LYXACTR );
WXXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EYXACTR,AYXACTR),GYXACTR),A_HVEC(HYXACTR,'=',A68_CHAR )),JYXACTR),KYXACTR),LYXACTR);
} 
 /* line 528: */
GZWACTR_bitmnemonic( (A68_BITS )(PWXACTR_s.Props&(A68_BITS )((A68_BITS )(WYWACTR_maskgeneral|XYWACTR_maskdynamica)|BZWACTR_maskspecial)), A68_TRUE, &NYXACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MYXACTR,SWXACTR),NYXACTR),WXXACTR);
break;
case 21: /* STRUCT(INT,INT,BITS,INT)  */
OYXACTR_s = (KAXACTR.data.mode21);
 /* line 529: */
 /* line 530: */
switch ( (OYXACTR_s.Fn+2) )
{ 
case 1: 
RYXACTR = SYXACTR;
break;
case 2: 
 /* line 531: */
RYXACTR = UYXACTR;
break;
case 3: 
 /* line 532: */
RYXACTR = WYXACTR;
break;
case 4: 
 /* line 533: */
RYXACTR = YYXACTR;
break;
case 5: 
 /* line 534: */
RYXACTR = AZXACTR;
break;
case 6: 
 /* line 535: */
RYXACTR = CZXACTR;
break;
case 7: 
 /* line 536: */
RYXACTR = EZXACTR;
break;
case 8: 
 /* line 538: */
RYXACTR = GZXACTR;
break;
case 9: 
 /* line 539: */
RYXACTR = IZXACTR;
break;
default: 
 /* line 540: */
 /* line 541: */
 /* line 542: */
ROAAOSF_whole( OYXACTR_s.Fn, DZWACTR_fieldlength, &LZXACTR );
RYXACTR = A_VC_PLUS(KZXACTR,LZXACTR);
break;
} 
 /* line 543: */
 /* line 544: */
if ( (OYXACTR_s.Mode<0) )
{ 
OZXACTR = PZXACTR;
} 
else
{ 
OZXACTR = A_HVEC(QZXACTR,'=',A68_CHAR );
} 
 /* line 545: */
 /* line 546: */
 /* line 547: */
if ( (OYXACTR_s.Resultmode<0) )
{ 
TZXACTR = UZXACTR;
} 
else
{ 
TZXACTR = A_HVEC(VZXACTR,'=',A68_CHAR );
} 
 /* line 548: */
 /* line 549: */
 /* line 550: */
if ( ((OYXACTR_s.Fn==6)|(OYXACTR_s.Fn==7)) )
{ 
XZXACTR = YZXACTR;
} 
else
{ 
 /* line 551: */
 /* line 552: */
ZZXACTR = OYXACTR_s.Resultmode ;
ROAAOSF_whole( A_ABS(ZZXACTR), DZWACTR_fieldlength, &AAYACTR );
CAYACTR = OYXACTR_s.Resultmode ;
WCNACTR_modename( A_ABS(CAYACTR), &DAYACTR );
XZXACTR = A_VC_PLUS(A_VC_PLUS(AAYACTR,A_HVEC(BAYACTR,'=',A68_CHAR )),DAYACTR);
} 
 /* line 555: */
GZWACTR_bitmnemonic( OYXACTR_s.Props, A68_TRUE, &FAYACTR );
HAYACTR = OYXACTR_s.Mode ;
ROAAOSF_whole( A_ABS(HAYACTR), DZWACTR_fieldlength, &IAYACTR );
KAYACTR = OYXACTR_s.Mode ;
WCNACTR_modename( A_ABS(KAYACTR), &LAYACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EAYACTR,RYXACTR),FAYACTR),GAYACTR),OZXACTR),IAYACTR),A_HVEC(JAYACTR,'=',A68_CHAR )),LAYACTR),MAYACTR),TZXACTR),XZXACTR);
break;
case 22: /* STRUCT(INT,BITS)  */
NAYACTR_t = (KAXACTR.data.mode22);
 /* line 556: */
 /* line 557: */
switch ( NAYACTR_t.Fn )
{ 
case 1: 
QAYACTR = RAYACTR;
break;
case 2: 
QAYACTR = TAYACTR;
break;
case 3: 
 /* line 558: */
QAYACTR = VAYACTR;
break;
case 4: 
QAYACTR = XAYACTR;
break;
case 5: 
QAYACTR = ZAYACTR;
break;
case 6: 
 /* line 559: */
QAYACTR = BBYACTR;
break;
case 7: 
QAYACTR = DBYACTR;
break;
case 8: 
 /* line 560: */
QAYACTR = FBYACTR;
break;
case 9: 
 /* line 561: */
QAYACTR = HBYACTR;
break;
default: 
 /* line 562: */
 /* line 563: */
 /* line 564: */
ROAAOSF_whole( NAYACTR_t.Fn, DZWACTR_fieldlength, &KBYACTR );
QAYACTR = A_VC_PLUS(JBYACTR,KBYACTR);
break;
} 
 /* line 568: */
GZWACTR_bitmnemonic( NAYACTR_t.Props, A68_TRUE, &MBYACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(LBYACTR,QAYACTR),MBYACTR);
break;
case 23: /* STRUCT(INT,INT,REF MODE57)  */
case 24: /* STRUCT(INT,INT,INT)  */
case 25: /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
A_UNCPY(NBYACTR_c,KAXACTR);
NBYACTR_c.mode -= 22;
 /* line 569: */
OBYACTR = NBYACTR_c ;
switch ( OBYACTR.mode )
{ 
case 1: /* STRUCT(INT,INT,REF MODE57)  */
PBYACTR_c = (OBYACTR.data.mode1);
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 574: */
ROAAOSF_whole( PBYACTR_c.Body, DZWACTR_fieldlength, &TBYACTR );
ROAAOSF_whole( PBYACTR_c.Moduleno, DZWACTR_fieldlength, &VBYACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SBYACTR,TBYACTR),UBYACTR),VBYACTR);
break;
case 2: /* STRUCT(INT,INT,INT)  */
WBYACTR_s = (OBYACTR.data.mode2);
 /* line 575: */
 /* line 576: */
 /* line 577: */
 /* line 578: */
ROAAOSF_whole( WBYACTR_s.Moduleno, DZWACTR_fieldlength, &BCYACTR );
ROAAOSF_whole( WBYACTR_s.I, DZWACTR_fieldlength, &DCYACTR );
ROAAOSF_whole( WBYACTR_s.J, DZWACTR_fieldlength, &FCYACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ACYACTR,BCYACTR),CCYACTR),DCYACTR),ECYACTR),FCYACTR);
break;
case 3: /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
GCYACTR_e = (OBYACTR.data.mode3);
 /* line 579: */
 /* line 580: */
 /* line 581: */
 /* line 582: */
 /* line 583: */
 /* line 585: */
 /* line 587: */
ROAAOSF_whole( GCYACTR_e.Moduleno, DZWACTR_fieldlength, &NCYACTR );
BBXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MCYACTR,NCYACTR),OCYACTR),GCYACTR_e.Name),PCYACTR),GCYACTR_e.Uname),QCYACTR),GCYACTR_e.Lname),RCYACTR),GCYACTR_e.Gname),A_HVEC(SCYACTR,'\"',A68_CHAR ));
break;
default: 
 /* line 591: */
BBXACTR = UCYACTR;
break;
} 
break;
case 26: /* VOID */
 /* line 592: */
 /* line 593: */
BBXACTR = WCYACTR;
break;
default: 
 /* line 598: */
BBXACTR = YCYACTR;
break;
} 
ZCYACTR = A_VC_PLUS(BBXACTR,A_HVEC(ADYACTR,')',A68_CHAR ));
A_PROC_EXIT(imperativemnemonic);
*ReturnedValue = (ZCYACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void HWWACTR(void)   /* initialise DECS mnemonics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","-dir",".","mnemonics.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","./identifiers.m","./incimperatives.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_116  XWWACTR;  /* procedure value */
A68_124  YWWACTR;  /* collateral clause result */
A68_119  FYWACTR;  /* OPERATORS - istruct to row */
A68_127  HYWACTR;  /* collateral clause result */
A68_119  UYWACTR;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
NKVACTR();   /* USE identifiers */
UAAACTR();   /* USE incimperatives */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/src/mnemonics.a68";
A_config.translation_time = "Sun Apr 18 20:07:53 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "GWWACTR (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:53 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mnemonics);
UEAALIB_a68config(LGAALIB_configinfo, LWWACTR);
 /* line 64: */
XWWACTR.fn.fn_global = OWWACTR_generator;
XWWACTR.nonlocals = A68_NIL;
MWWACTR_anonymous = XWWACTR;
 /* line 66: */
 /* line 67: */
 /* line 68: */
YWWACTR.data[0].Name = AXWACTR;
 /* line 69: */
YWWACTR.data[0].Value = SCAACTR_priobit;
YWWACTR.data[1].Name = CXWACTR;
 /* line 70: */
YWWACTR.data[1].Value = TCAACTR_exitbit;
YWWACTR.data[2].Name = EXWACTR;
 /* line 71: */
YWWACTR.data[2].Value = UCAACTR_semibit;
YWWACTR.data[3].Name = GXWACTR;
 /* line 72: */
YWWACTR.data[3].Value = VCAACTR_heapbit;
YWWACTR.data[4].Name = IXWACTR;
 /* line 73: */
YWWACTR.data[4].Value = WCAACTR_decbit;
YWWACTR.data[5].Name = KXWACTR;
 /* line 74: */
YWWACTR.data[5].Value = XCAACTR_vardecbit;
YWWACTR.data[6].Name = MXWACTR;
 /* line 75: */
YWWACTR.data[6].Value = YCAACTR_compgenbit;
YWWACTR.data[7].Name = OXWACTR;
 /* line 76: */
YWWACTR.data[7].Value = ZCAACTR_elifousebit;
YWWACTR.data[8].Name = QXWACTR;
 /* line 77: */
YWWACTR.data[8].Value = ADAACTR_labbit;
YWWACTR.data[9].Name = SXWACTR;
 /* line 78: */
YWWACTR.data[9].Value = BDAACTR_dontpullbit;
YWWACTR.data[10].Name = UXWACTR;
 /* line 79: */
YWWACTR.data[10].Value = CDAACTR_dyprocbit;
YWWACTR.data[11].Name = WXWACTR;
 /* line 80: */
YWWACTR.data[11].Value = DDAACTR_dyvardecbit;
YWWACTR.data[12].Name = YXWACTR;
 /* line 81: */
YWWACTR.data[12].Value = EDAACTR_dydecbit;
YWWACTR.data[13].Name = AYWACTR;
 /* line 82: */
YWWACTR.data[13].Value = FDAACTR_genprocbit;
YWWACTR.data[14].Name = CYWACTR;
 /* line 83: */
YWWACTR.data[14].Value = GDAACTR_locgenbit;
YWWACTR.data[15].Name = EYWACTR;
 /* line 84: */
YWWACTR.data[15].Value = HDAACTR_locdydecbit;
GYWACTR_controlbits = A_HIS1ARR(FYWACTR,YWWACTR,A68_115 ,16);
 /* line 86: */
 /* line 87: */
 /* line 88: */
HYWACTR.data[0].Name = JYWACTR;
 /* line 89: */
HYWACTR.data[0].Value = NCAACTR_ccbit;
HYWACTR.data[1].Name = LYWACTR;
 /* line 90: */
HYWACTR.data[1].Value = OCAACTR_operatorbit;
HYWACTR.data[2].Name = NYWACTR;
 /* line 91: */
HYWACTR.data[2].Value = PCAACTR_valbit;
HYWACTR.data[3].Name = PYWACTR;
 /* line 92: */
HYWACTR.data[3].Value = QCAACTR_holebit;
HYWACTR.data[4].Name = RYWACTR;
 /* line 93: */
HYWACTR.data[4].Value = FDAACTR_genprocbit;
HYWACTR.data[5].Name = TYWACTR;
 /* line 94: */
HYWACTR.data[5].Value = RCAACTR_globscopebit;
VYWACTR_routinebits = A_HIS1ARR(UYWACTR,HYWACTR,A68_115 ,6);
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
WYWACTR_maskgeneral = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(SCAACTR_priobit|UCAACTR_semibit)|WCAACTR_decbit)|XCAACTR_vardecbit)|ADAACTR_labbit)|TCAACTR_exitbit)|GDAACTR_locgenbit)|HDAACTR_locdydecbit);
 /* line 112: */
 /* line 113: */
XYWACTR_maskdynamica = (A68_BITS )((A68_BITS )(CDAACTR_dyprocbit|DDAACTR_dyvardecbit)|EDAACTR_dydecbit);
 /* line 114: */
 /* line 115: */
 /* line 116: */
ZYWACTR_maskdynamicc = (A68_BITS )((A68_BITS )((A68_BITS )(BDAACTR_dontpullbit|CDAACTR_dyprocbit)|DDAACTR_dyvardecbit)|EDAACTR_dydecbit);
 /* line 117: */
 /* line 118: */
AZWACTR_maskroutine = (A68_BITS )((A68_BITS )(FDAACTR_genprocbit|RCAACTR_globscopebit)|PCAACTR_valbit);
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
CZWACTR_maskxroutine = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(NCAACTR_ccbit|OCAACTR_operatorbit)|PCAACTR_valbit)|QCAACTR_holebit)|RCAACTR_globscopebit)|FDAACTR_genprocbit);
 /* line 124: */
 /* line 145: */
 /* line 163: */
 /* line 602: */
A_PROC_EXIT(DECS mnemonics);
} 
#undef NL
/* end of translation of mnemonics.a68 */
