/* UNAME:BPQACTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t32,(void),(void *));
typedef struct A68t32  A68_32 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t33,(A68_INT ),(A68_INT ,void *));
typedef struct A68t33  A68_33 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t35,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(INT) REF MODE26 */
struct A68t37 ;

A_PROCEDURE(A68_VOID ,A68t36,(A68_INT ,struct A68t37 ),(A68_INT ,struct A68t37 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(INT,MODE37) VOID */
A_ROW(A68_VC ,A68t37,1);
typedef struct A68t37  A68_37 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t38,(void),(void *));
typedef struct A68t38  A68_38 ;    /* PROC BITS */
struct A68t39{
A68_INT  Cfile;
A_PAD_INT(PAD_1)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(INT)  */
struct A68t40{
A68_INT  Seedfile;
A_PAD_INT(PAD_2)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t42);
typedef struct A68t42  A68_42 ;    /* STRUCT 7 CHAR */
struct A68t41 { A68_INT mode; union {
struct A68t39  mode1;
struct A68t40  mode2;
struct A68t42  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t41  A68_41 ;    /* UNION(MODE39,MODE40,MODE42,VOID)  */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ),(A68_VC ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t44,1);
typedef struct A68t44  A68_44 ;    /* [] BOOL */
struct A68t45{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_3)
A68_VC  Sourcefile;
struct A68t42  Nameseed;
A_PAD_ISTRUCT(A68_42 ,PAD_4)
struct A68t41  Nameseedorigin;
struct A68t46 * Used_modules;
A68_VC  Commandline;
struct A68t47 * Environment;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE42,MODE41,REF MODE46,REF MODE26,REF MODE47)  */
struct A68t46{
A68_VC  Modinfo_file;
struct A68t46 * Next;
};
typedef struct A68t46  A68_46 ;    /* STRUCT(REF MODE26,REF MODE46)  */
struct A68t47{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t47 * Next;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE47)  */
struct A68t49 ;
struct A68t50 ;

A_PROCEDURE(struct A68t49 *,A68t48,(A68_VC ,struct A68t50 *,A68_VC *),(A68_VC ,struct A68t50 *,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE26,REF MODE50,REF REF MODE26) REF MODE49 */
struct A68t49{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t50{
A68_VC  Dir;
struct A68t50 * Next;
};
typedef struct A68t50  A68_50 ;    /* STRUCT(REF MODE26,REF MODE50)  */
struct A68t51{
A68_INT  Mode;
A_PAD_INT(PAD_5)
A68_VC  String;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t52{
A68_INT  I;
A_PAD_INT(PAD_6)
};
typedef struct A68t52  A68_52 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t54,1);
typedef struct A68t54  A68_54 ;    /* [] INT */
struct A68t53{
A68_INT  Body;
A_PAD_INT(PAD_7)
A68_INT  Moduleno;
A_PAD_INT(PAD_8)
struct A68t54  Actuals;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(INT,INT,REF MODE54)  */
struct A68t55{
A68_INT  Mode;
A_PAD_INT(PAD_9)
A68_INT  Number;
A_PAD_INT(PAD_10)
A68_VC  Insert;
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t57{
A68_INT  Moduleno;
A_PAD_INT(PAD_11)
A68_INT  I;
A_PAD_INT(PAD_12)
A68_INT  J;
A_PAD_INT(PAD_13)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t59,1);
typedef struct A68t59  A68_59 ;    /* [] REF MODE26 */
struct A68t58{
A68_INT  Moduleno;
A_PAD_INT(PAD_14)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t59  Ysnames;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE59)  */
struct A68t56 { A68_INT mode; union {
struct A68t53  mode1;
struct A68t57  mode2;
struct A68t58  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t56  A68_56 ;    /* UNION(MODE53,MODE57,MODE58)  */
struct A68t61{
A68_INT  Nochars;
A_PAD_INT(PAD_15)
A68_INT  Nocases;
A_PAD_INT(PAD_16)
A68_INT  W;
A_PAD_INT(PAD_17)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,INT,INT)  */
struct A68t60{
struct A68t61  Info;
A68_VC  Text;
};
typedef struct A68t60  A68_60 ;    /* STRUCT(MODE61,REF MODE26)  */
struct A68t62{
A68_INT  Type;
A_PAD_INT(PAD_18)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_INT  Decno;
A_PAD_INT(PAD_20)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t63{
A68_VC  Representation;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(REF MODE26)  */
struct A68t65{
A68_INT  Nse;
A_PAD_INT(PAD_21)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT)  */
struct A68t66{
A68_INT  Labno;
A_PAD_INT(PAD_22)
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT)  */
struct A68t67{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_VC  Nu;
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t68{
A68_INT  Mode;
A_PAD_INT(PAD_24)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_25)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t69{
A68_INT  Mode;
A_PAD_INT(PAD_26)
A68_VC  Denotation;
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t70{
A68_INT  Fn;
A_PAD_INT(PAD_27)
A68_INT  Mode;
A_PAD_INT(PAD_28)
A68_INT  Param;
A_PAD_INT(PAD_29)
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,INT,INT)  */
struct A68t71{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_30)
A68_INT  Mode;
A_PAD_INT(PAD_31)
A68_INT  Rdenno;
A_PAD_INT(PAD_32)
A68_INT  Maxname;
A_PAD_INT(PAD_33)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t72{
A68_INT  W;
A_PAD_INT(PAD_34)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT)  */
struct A68t73{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_35)
A68_INT  Status;
A_PAD_INT(PAD_36)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_37)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t74{
A68_INT  Mode;
A_PAD_INT(PAD_38)
A68_BITS  Props;
A_PAD_BITS(PAD_39)
A68_INT  Param;
A_PAD_INT(PAD_40)
};
typedef struct A68t74  A68_74 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t75{
A68_BOOL  Start;
A_PAD_BOOL(PAD_41)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(BOOL)  */
struct A68t76{
A68_INT  Fn;
A_PAD_INT(PAD_42)
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_BITS  Props;
A_PAD_BITS(PAD_44)
A68_INT  Param;
A_PAD_INT(PAD_45)
};
typedef struct A68t76  A68_76 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t77{
A68_INT  Fn;
A_PAD_INT(PAD_46)
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_BITS  Props;
A_PAD_BITS(PAD_48)
A68_INT  Resultmode;
A_PAD_INT(PAD_49)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t78{
A68_INT  Fn;
A_PAD_INT(PAD_50)
A68_BITS  Props;
A_PAD_BITS(PAD_51)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT,BITS)  */
struct A68t64 { A68_INT mode; union {
struct A68t65  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t63  mode4;
struct A68t66  mode5;
struct A68t67  mode6;
struct A68t51  mode7;
struct A68t68  mode8;
struct A68t69  mode9;
struct A68t70  mode10;
struct A68t62  mode11;
struct A68t71  mode12;
struct A68t72  mode13;
struct A68t73  mode14;
struct A68t74  mode15;
struct A68t52  mode16;
struct A68t75  mode17;
struct A68t60  mode18;
struct A68t55  mode19;
struct A68t76  mode20;
struct A68t77  mode21;
struct A68t78  mode22;
struct A68t53  mode23;
struct A68t57  mode24;
struct A68t58  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t64  A68_64 ;    /* UNION(MODE65,INT,BOOL,MODE63,MODE66,MODE67,MODE51,MODE68,MODE69,MODE70,MODE62,MODE71,MODE72,MODE73,MODE74,MODE52,MODE75,MODE60,MODE55,MODE76,MODE77,MODE78,MODE53,MODE57,MODE58,VOID)  */
struct A68t79 { A68_INT mode; union {
struct A68t65  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t63  mode4;
struct A68t66  mode5;
struct A68t67  mode6;
struct A68t51  mode7;
struct A68t68  mode8;
struct A68t69  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t79  A68_79 ;    /* UNION(MODE65,INT,BOOL,MODE63,MODE66,MODE67,MODE51,MODE68,MODE69)  */
struct A68t80 { A68_INT mode; union {
struct A68t65  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t63  mode4;
struct A68t66  mode5;
struct A68t67  mode6;
struct A68t51  mode7;
struct A68t68  mode8;
struct A68t69  mode9;
struct A68t70  mode10;
struct A68t62  mode11;
struct A68t71  mode12;
struct A68t72  mode13;
struct A68t73  mode14;
struct A68t74  mode15;
struct A68t52  mode16;
struct A68t75  mode17;
struct A68t60  mode18;
struct A68t55  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t80  A68_80 ;    /* UNION(MODE65,INT,BOOL,MODE63,MODE66,MODE67,MODE51,MODE68,MODE69,MODE70,MODE62,MODE71,MODE72,MODE73,MODE74,MODE52,MODE75,MODE60,MODE55)  */
struct A68t83{
A68_INT  Rdenno;
A_PAD_INT(PAD_52)
};
typedef struct A68t83  A68_83 ;    /* STRUCT(INT)  */
struct A68t84{
A68_INT  Idno;
A_PAD_INT(PAD_53)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT)  */
struct A68t85{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_54)
A68_INT  Mode;
A_PAD_INT(PAD_55)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(MODE42,INT)  */
struct A68t86{
A68_INT  Fn;
A_PAD_INT(PAD_56)
A68_INT  Param;
A_PAD_INT(PAD_57)
struct A68t87 * Operands;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT,INT,REF MODE87)  */
struct A68t82 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t83  mode2;
struct A68t84  mode4;
struct A68t85  mode5;
A68_VC  mode6;
struct A68t66  mode7;
struct A68t65  mode8;
struct A68t86  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t82  A68_82 ;    /* UNION(LONG BITS,MODE83,VOID,MODE84,MODE85,MODE26,MODE66,MODE65,MODE86)  */
struct A68t81{
A68_INT  Mode;
A_PAD_INT(PAD_58)
A68_BITS  Info;
A_PAD_BITS(PAD_59)
struct A68t82  Extra;
};
typedef struct A68t81  A68_81 ;    /* STRUCT(INT,BITS,MODE82)  */
struct A68t87{
struct A68t81  Value;
struct A68t87 * Rest;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(MODE81,REF MODE87)  */

A_PROCEDURE(A68_BOOL ,A68t88,(struct A68t81 *,struct A68t81 *),(struct A68t81 *,struct A68t81 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(REF MODE81,REF MODE81) BOOL */

A_PROCEDURE(A68_BOOL ,A68t89,(struct A68t81 *),(struct A68t81 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF MODE81) BOOL */

A_PROCEDURE(A68_BOOL ,A68t90,(struct A68t81 *,A68_LBITS ),(struct A68t81 *,A68_LBITS ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF MODE81,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t91,(struct A68t81 *),(struct A68t81 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(REF MODE81) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t81 *,A68_VC *),(struct A68t81 *,A68_VC *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(REF MODE81) MODE26 */

A_PROCEDURE(struct A68t81 *,A68t93,(struct A68t81 *,A68_INT ),(struct A68t81 *,A68_INT ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(REF MODE81,INT) REF MODE81 */

A_PROCEDURE(A68_INT ,A68t94,(struct A68t86 ),(struct A68t86 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE86) INT */
struct A68t95{
struct A68t81 * Value;
struct A68t96 * End;
A68_INT  Type;
A_PAD_INT(PAD_60)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(REF MODE81,REF MODE96,INT)  */
struct A68t96{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_61)
A68_BOOL  Set;
A_PAD_BOOL(PAD_62)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(MODE42,BOOL)  */

A_PROCEDURE(A68_BOOL ,A68t97,(struct A68t81 *,A68_BITS ),(struct A68t81 *,A68_BITS ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE81,BITS) BOOL */

A_PROCEDURE(struct A68t81 *,A68t98,(struct A68t87 *,A68_INT ),(struct A68t87 *,A68_INT ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE87,INT) REF MODE81 */

A_PROCEDURE(A68_INT ,A68t99,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(struct A68t87 *,A68t100,(struct A68t87 *),(struct A68t87 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(REF MODE87) REF MODE87 */
struct A68t102 ;

A_PROCEDURE(struct A68t81 *,A68t101,(A68_INT ,A68_INT ,A68_BITS ,struct A68t102 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t102 ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT,INT,BITS,MODE102) REF MODE81 */
A_VECTOR(struct A68t81 *,A68t102);
typedef struct A68t102  A68_102 ;    /* VECTOR [] REF MODE81 */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t81 *),(struct A68t81 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE81) VOID */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t81 *,A68_BOOL ,A68_VC *),(struct A68t81 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE81,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t105,(struct A68t81 ),(struct A68t81 ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE81) LONG INT */

A_PROCEDURE(A68_VOID ,A68t106,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(MODE26) MODE26 */
struct A68t107 { A68_INT mode; union {
struct A68t81 * mode1;
A68_VC  mode2;
struct A68t85  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t107  A68_107 ;    /* UNION(REF MODE81,MODE26,MODE85)  */

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t107 ,A68_VC *),(struct A68t107 ,A68_VC *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE107) MODE26 */
struct A68t110 ;

A_PROCEDURE(A68_VOID ,A68t109,(struct A68t110 ,A68_VC *),(struct A68t110 ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE110) MODE26 */
A_VECTOR(struct A68t107 ,A68t110);
typedef struct A68t110  A68_110 ;    /* VECTOR [] MODE107 */

A_PROCEDURE(A68_VOID ,A68t111,(A68_VC ,struct A68t110 ,A68_VC *),(A68_VC ,struct A68t110 ,A68_VC *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE26,MODE110) MODE26 */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t110 ),(struct A68t110 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE110) VOID */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ,A68_INT ,struct A68t110 ,struct A68t85 *),(A68_VC ,A68_INT ,struct A68t110 ,struct A68t85 *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE26,INT,MODE110) MODE85 */

A_PROCEDURE(struct A68t81 *,A68t114,(struct A68t81 *),(struct A68t81 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(REF MODE81) REF MODE81 */

A_PROCEDURE(struct A68t81 *,A68t115,(A68_VC ,struct A68t81 *),(A68_VC ,struct A68t81 *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE26,REF MODE81) REF MODE81 */

A_PROCEDURE(A68_VOID ,A68t116,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t117,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE43) VOID */

A_PROCEDURE(A68_VOID ,A68t120,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_INT ,51,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 51 INT */
struct A68t123{
A68_INT  Number;
A_PAD_INT(PAD_63)
A68_INT  Procmode;
A_PAD_INT(PAD_64)
struct A68t87 * Parameters;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,INT,REF MODE87)  */

A_PROCEDURE(struct A68t87 *,A68t124,(struct A68t87 *,struct A68t87 *,A68_INT ,struct A68t87 **),(struct A68t87 *,struct A68t87 *,A68_INT ,struct A68t87 **,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE87,REF MODE87,INT,REF REF MODE87) REF MODE87 */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t70 ,struct A68t87 **,struct A68t87 *),(struct A68t70 ,struct A68t87 **,struct A68t87 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE70,REF REF MODE87,REF MODE87) VOID */

A_PROCEDURE(A68_VOID ,A68t126,(A68_INT ,A68_INT ,A68_INT ,struct A68t87 *),(A68_INT ,A68_INT ,A68_INT ,struct A68t87 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT,INT,INT,REF MODE87) VOID */

A_PROCEDURE(struct A68t87 *,A68t127,(struct A68t87 *,struct A68t87 ),(struct A68t87 *,struct A68t87 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE87,MODE87) REF MODE87 */

A_PROCEDURE(struct A68t81 *,A68t128,(struct A68t81 *,struct A68t81 ),(struct A68t81 *,struct A68t81 ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE81,MODE81) REF MODE81 */

A_PROCEDURE(struct A68t82 *,A68t129,(struct A68t82 *,struct A68t82 ),(struct A68t82 *,struct A68t82 ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE82,MODE82) REF MODE82 */
#define A68_130  A68_VC 
#define A68t130 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t87 **,A68_INT ,A68_INT ,A68_INT ,A68_BITS ,struct A68t87 *),(struct A68t87 **,A68_INT ,A68_INT ,A68_INT ,A68_BITS ,struct A68t87 *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF REF MODE87,INT,INT,INT,BITS,REF MODE87) VOID */
A_ISTRUCT(A68_CHAR ,22,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 20 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_BITS  PKJACTR_defaultinfo;
/* --- End of imports from values --- */


/* --- Imports from incoperfn --- */
#define DGAACTR_trimfn 5
#define EGAACTR_boundpackfn 9
#define KGAACTR_callfn 18
#define WGAACTR_operandsshift 18
extern A68_BITS  ZGAACTR_parammask;
/* --- End of imports from incoperfn --- */


/* --- Imports from incmode --- */
#define VEAACTR_faultmode 6
#define EFAACTR_intmode 15
#define OFAACTR_longlongcomplmode 25
#define PEAACTR_nomode 0
/* --- End of imports from incmode --- */


/* --- Imports from incimperatives --- */
/* --- End of imports from incimperatives --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
/* --- End of imports from environment --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ATPACTR(void);   /* values */
extern void XFAACTR(void);   /* incoperfn */
extern void ZDAACTR(void);   /* incmode */
extern void UAAACTR(void);   /* incimperatives */
extern void HPIACTR(void);   /* environment */
/* --- end of DECS initialisation functions --- */
static A68_121   FPQACTR = {"$Id: oper.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,GPQACTR,FPQACTR,54)
#define HPQACTR_oneop 1
#define IPQACTR_twoop 2
#define JPQACTR_paramop 3
#define KPQACTR_paramplusoneop 4
#define LPQACTR_defaultbound 5
#define MPQACTR_boundpack 6
#define NPQACTR_trim 7
#define OPQACTR_parameterpack 8
#define PPQACTR_call 9
#define QPQACTR_nullop 10
#define RPQACTR_zeroop 11
#define SPQACTR_formatop 12
static A68_54  VPQACTR_opertype;
static A68_123  XPQACTR_noparameterinfo;
static A68_123  YPQACTR_parameters;
static A68_132   WSQACTR = {"parampack without call"}; 
A_GISVEC(A68_VC ,XSQACTR,WSQACTR,22)
static A68_133   ATQACTR = {"wrong parampack for a call"}; 
A_GISVEC(A68_VC ,BTQACTR,ATQACTR,26)
static A68_134   FTQACTR = {"invalid type in oper"}; 
A_GISVEC(A68_VC ,GTQACTR,FTQACTR,20)
typedef struct   /* env of non-global proc */
{
A68_87 ** Valuestack;
A68_87 * Newspace;
} UQQACTR_newstackitem;
typedef struct   /* env of non-global proc */
{
A68_126  SQQACTR_newstackitem;
} ZRQACTR_simpleoper;

A_STATIC A68_87 * DQQACTR_breakvaluelist(A68_87 * List, A68_87 * Newbackoffrontlist, A68_INT  Index, A68_87 ** Backlistpointer);

A68_VOID  MQQACTR_oper(A68_70  Oper, A68_87 ** Valuestack, A68_87 * Newspace);

A_STATIC A68_VOID  TQQACTR_newstackitem(A68_INT  Mode, A68_INT  Fn, A68_INT  Param, A68_87 * Operands, void *NonLocals);

A_STATIC A68_87 * ARQACTR_assignment(A68_87 * YQQACTR_anonymous, A68_87  ZQQACTR_anonymous);

A_STATIC A68_81 * DRQACTR_assignment(A68_81 * BRQACTR_anonymous, A68_81  CRQACTR_anonymous);

A_STATIC A68_82 * IRQACTR_assignment(A68_82 * GRQACTR_anonymous, A68_82  HRQACTR_anonymous);

A_STATIC A68_VOID  YRQACTR_simpleoper(A68_87 ** Valuestack, A68_INT  Mode, A68_INT  Operfn, A68_INT  Numberoperands, A68_BITS  Param, A68_87 * Newspace, void *NonLocals);

A_STATIC A68_82 * IRQACTR_assignment(A68_82 * GRQACTR_anonymous, A68_82  HRQACTR_anonymous)
{ 
A68_82  JRQACTR;  /* united object - for case conformity */
A68_VC  KRQACTR_anonymous;
A68_VC  LRQACTR;  /* OPERATORS - copy to flex */
A68_130 * MRQACTR;  /* YIELD */
A68_82 * NRQACTR;  /* clause result */
{ 
(*GRQACTR_anonymous) = HRQACTR_anonymous;
JRQACTR = HRQACTR_anonymous ;
switch ( JRQACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
KRQACTR_anonymous = (JRQACTR.data.mode6);
MRQACTR = &(GRQACTR_anonymous-> data.mode6) ;
(*MRQACTR) = A_VCOPY(KRQACTR_anonymous,LRQACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
NRQACTR = GRQACTR_anonymous;
} 
return( NRQACTR );
} 
#undef NL

A_STATIC A68_81 * DRQACTR_assignment(A68_81 * BRQACTR_anonymous, A68_81  CRQACTR_anonymous)
{ 
A68_INT * ERQACTR;  /* YIELD */
A68_BITS * FRQACTR;  /* YIELD */
A68_81 * ORQACTR;  /* clause result */
{ 
ERQACTR = (&(BRQACTR_anonymous->Mode)) ;
(*ERQACTR) = CRQACTR_anonymous.Mode;
FRQACTR = (&(BRQACTR_anonymous->Info)) ;
(*FRQACTR) = CRQACTR_anonymous.Info;
IRQACTR_assignment((&(BRQACTR_anonymous->Extra)), CRQACTR_anonymous.Extra);
ORQACTR = BRQACTR_anonymous;
} 
return( ORQACTR );
} 
#undef NL

A_STATIC A68_87 * ARQACTR_assignment(A68_87 * YQQACTR_anonymous, A68_87  ZQQACTR_anonymous)
{ 
A68_87 ** PRQACTR;  /* YIELD */
A68_87 * QRQACTR;  /* clause result */
{ 
DRQACTR_assignment((&(YQQACTR_anonymous->Value)), ZQQACTR_anonymous.Value);
PRQACTR = (&(YQQACTR_anonymous->Rest)) ;
(*PRQACTR) = ZQQACTR_anonymous.Rest;
QRQACTR = YQQACTR_anonymous;
} 
return( QRQACTR );
} 
#undef NL

A_STATIC A68_VOID  TQQACTR_newstackitem(A68_INT  Mode, A68_INT  Fn, A68_INT  Param, A68_87 * Operands, void *NonLocals)
#define NL(x) (((UQQACTR_newstackitem *)NonLocals)->x)
{ 
A68_87  VQQACTR;  /* collateral clause result */
A68_86  WQQACTR;  /* collateral clause result */
A68_82  XQQACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(newstackitem);
 /* line 171: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
VQQACTR.Value.Mode = Mode;
 /* line 175: */
VQQACTR.Value.Info = PKJACTR_defaultinfo;
WQQACTR.Fn = Fn;
WQQACTR.Param = Param;
 /* line 176: */
WQQACTR.Operands = Operands;
 /* line 178: */
VQQACTR.Value.Extra = A_UNITE(XQQACTR,mode9,9,WQQACTR);
 /* line 179: */
VQQACTR.Rest = (*NL(Valuestack));
(*NL(Valuestack)) = ARQACTR_assignment(NL(Newspace), VQQACTR);
A_PROC_EXIT(newstackitem);
return;
} 
#undef NL
 /* line 183: */
 /* line 184: */
 /* line 186: */

A_STATIC A68_VOID  YRQACTR_simpleoper(A68_87 ** Valuestack, A68_INT  Mode, A68_INT  Operfn, A68_INT  Numberoperands, A68_BITS  Param, A68_87 * Newspace, void *NonLocals)
#define NL(x) (((ZRQACTR_simpleoper *)NonLocals)->x)
{ 
A68_87 * ASQACTR_operands;
A68_87 ** BSQACTR_breakpoint;
A68_INT  CSQACTR;  /* to part of loop */
A68_INT  DSQACTR;  /* loop control */
A68_BITS  ESQACTR;  /* SHL */
A_PROC_ENTRY(simpleoper);
 /* line 191: */
 /* line 193: */
{ 
ASQACTR_operands = (*Valuestack);
 /* line 194: */
BSQACTR_breakpoint = Valuestack;
 /* line 195: */
CSQACTR = Numberoperands;
for ( DSQACTR = 1;
DSQACTR <= CSQACTR;
DSQACTR += 1 )
{ 
BSQACTR_breakpoint = (&((*BSQACTR_breakpoint)->Rest));
}
 /* line 196: */
(*Valuestack) = (*BSQACTR_breakpoint);
 /* line 197: */
(*BSQACTR_breakpoint) = (A68_87 *)A68_NIL;
 /* line 199: */
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 204: */
 /* line 205: */
ESQACTR = (A68_BITS )Numberoperands ;
A_CALLPROC(NL(SQQACTR_newstackitem),(Mode, Operfn, (A68_INT )(A68_BITS )(A_SHL(ESQACTR,WGAACTR_operandsshift)|Param), ASQACTR_operands),(Mode, Operfn, (A68_INT )(A68_BITS )(A_SHL(ESQACTR,WGAACTR_operandsshift)|Param), ASQACTR_operands,(NL(SQQACTR_newstackitem)).nonlocals));
} 
A_PROC_EXIT(simpleoper);
return;
} 
#undef NL
 /* line 120: */
 /* line 122: */

A_STATIC A68_87 * DQQACTR_breakvaluelist(A68_87 * List, A68_87 * Newbackoffrontlist, A68_INT  Index, A68_87 ** Backlistpointer)
{ 
A68_87 * EQQACTR_front;
A68_87 ** FQQACTR_breakpoint;
A68_INT  GQQACTR;  /* to part of loop */
A68_INT  HQQACTR;  /* loop control */
A68_87 * IQQACTR;  /* clause result */
A_PROC_ENTRY(breakvaluelist);
 /* line 131: */
 /* line 132: */
{ 
EQQACTR_front = List;
 /* line 133: */
FQQACTR_breakpoint = (&EQQACTR_front);
 /* line 134: */
GQQACTR = Index;
for ( HQQACTR = 1;
HQQACTR <= GQQACTR;
HQQACTR += 1 )
{ 
FQQACTR_breakpoint = (&((*FQQACTR_breakpoint)->Rest));
}
 /* line 135: */
(*Backlistpointer) = (*FQQACTR_breakpoint);
 /* line 136: */
(*FQQACTR_breakpoint) = Newbackoffrontlist;
 /* line 137: */
 /* line 138: */
IQQACTR = EQQACTR_front;
} 
A_PROC_EXIT(breakvaluelist);
return( IQQACTR );
} 
#undef NL
 /* line 142: */
 /* line 144: */

A68_VOID  MQQACTR_oper(A68_70  Oper, A68_87 ** Valuestack, A68_87 * Newspace)
{ 
A68_126  SQQACTR_newstackitem;   /* proc value of non-global proc */
A68_131  XRQACTR_simpleoper;   /* proc value of non-global proc */
A68_BITS  FSQACTR_param;
A68_INT  GSQACTR_operfn;
A68_INT  HSQACTR_opermode;
A68_87 * ISQACTR_operands;
A68_87 ** JSQACTR;  /* YIELD */
A68_BITS  KSQACTR;  /* SHL */
A68_87 * LSQACTR_operands;
A68_87 ** MSQACTR;  /* YIELD */
A68_BITS  NSQACTR;  /* SHL */
A68_87 * OSQACTR_operands;
A68_87 * PSQACTR_operands;
A68_BITS  QSQACTR;  /* SHL */
A68_81  RSQACTR;  /* collateral clause result */
A68_82  SSQACTR;  /* OPERATORS - mode -> union mode */
A68_LBITS  TSQACTR;  /* YIELD */
A68_87 * USQACTR_operands;
A68_87 * VSQACTR_operands;
A68_123  YSQACTR;  /* collateral clause result */
A68_INT * ZSQACTR_procmode;
A68_87 * CTQACTR_operands;
A68_BITS  DTQACTR;  /* SHL */
A68_INT  ETQACTR;  /* clause result */
A_PROC_ENTRY(oper);
 /* line 167: */
 /* line 169: */
{ 
 /* line 170: */
A_CLOSURE( SQQACTR_newstackitem, TQQACTR_newstackitem, UQQACTR_newstackitem );
(( UQQACTR_newstackitem * ) ( SQQACTR_newstackitem.nonlocals )) -> Valuestack = Valuestack;
(( UQQACTR_newstackitem * ) ( SQQACTR_newstackitem.nonlocals )) -> Newspace = Newspace;
 /* line 181: */
 /* line 182: */
A_CLOSURE( XRQACTR_simpleoper, YRQACTR_simpleoper, ZRQACTR_simpleoper );
(( ZRQACTR_simpleoper * ) ( XRQACTR_simpleoper.nonlocals )) -> SQQACTR_newstackitem = SQQACTR_newstackitem;
 /* line 206: */
FSQACTR_param = (A68_BITS )((A68_BITS )Oper.Param&ZGAACTR_parammask);
 /* line 207: */
GSQACTR_operfn = Oper.Fn;
HSQACTR_opermode = Oper.Mode;
 /* line 208: */
 /* line 209: */
 /* line 211: */
switch ( A_R1INDEX(VPQACTR_opertype,GSQACTR_operfn) )
{ 
case 1: 
 /* line 212: */
{ 
ISQACTR_operands = (*Valuestack);
 /* line 213: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
 /* line 214: */
JSQACTR = (&(ISQACTR_operands->Rest)) ;
(*JSQACTR) = (A68_87 *)A68_NIL;
 /* line 216: */
 /* line 217: */
 /* line 218: */
 /* line 219: */
 /* line 221: */
 /* line 222: */
 /* line 223: */
 /* line 225: */
KSQACTR = 01U ;
A_CALLPROC(SQQACTR_newstackitem,(HSQACTR_opermode, GSQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(KSQACTR,WGAACTR_operandsshift)|FSQACTR_param), ISQACTR_operands),(HSQACTR_opermode, GSQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(KSQACTR,WGAACTR_operandsshift)|FSQACTR_param), ISQACTR_operands,(SQQACTR_newstackitem).nonlocals));
} 
break;
case 2: 
 /* line 226: */
{ 
LSQACTR_operands = (*Valuestack);
 /* line 227: */
(*Valuestack) = (*(&((*(&((*Valuestack)->Rest)))->Rest)));
 /* line 228: */
MSQACTR = (&((*(&(LSQACTR_operands->Rest)))->Rest)) ;
(*MSQACTR) = (A68_87 *)A68_NIL;
 /* line 229: */
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 234: */
 /* line 235: */
 /* line 236: */
 /* line 238: */
NSQACTR = 02U ;
A_CALLPROC(SQQACTR_newstackitem,(HSQACTR_opermode, GSQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(NSQACTR,WGAACTR_operandsshift)|FSQACTR_param), LSQACTR_operands),(HSQACTR_opermode, GSQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(NSQACTR,WGAACTR_operandsshift)|FSQACTR_param), LSQACTR_operands,(SQQACTR_newstackitem).nonlocals));
} 
break;
case 3: 
 /* line 240: */
{ 
OSQACTR_operands = DQQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, (A68_INT )FSQACTR_param, Valuestack);
 /* line 241: */
 /* line 242: */
 /* line 243: */
 /* line 244: */
 /* line 246: */
 /* line 247: */
 /* line 248: */
 /* line 250: */
A_CALLPROC(SQQACTR_newstackitem,(HSQACTR_opermode, GSQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(FSQACTR_param,WGAACTR_operandsshift)|FSQACTR_param), OSQACTR_operands),(HSQACTR_opermode, GSQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(FSQACTR_param,WGAACTR_operandsshift)|FSQACTR_param), OSQACTR_operands,(SQQACTR_newstackitem).nonlocals));
} 
break;
case 4: 
 /* line 252: */
{ 
PSQACTR_operands = DQQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, ((A68_INT )FSQACTR_param+1), Valuestack);
 /* line 253: */
 /* line 254: */
 /* line 255: */
 /* line 256: */
 /* line 258: */
 /* line 259: */
 /* line 260: */
 /* line 262: */
QSQACTR = (A68_BITS )((A68_INT )FSQACTR_param+1) ;
A_CALLPROC(SQQACTR_newstackitem,(HSQACTR_opermode, GSQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(QSQACTR,WGAACTR_operandsshift)|FSQACTR_param), PSQACTR_operands),(HSQACTR_opermode, GSQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(QSQACTR,WGAACTR_operandsshift)|FSQACTR_param), PSQACTR_operands,(SQQACTR_newstackitem).nonlocals));
} 
break;
case 5: 
 /* line 263: */
{ 
RSQACTR.Mode = EFAACTR_intmode;
RSQACTR.Info = PKJACTR_defaultinfo;
TSQACTR = (A68_LBITS )0X1U ;
RSQACTR.Extra = A_UNITE(SSQACTR,mode1,1,TSQACTR);
DRQACTR_assignment((&(Newspace->Value)), RSQACTR);
 /* line 264: */
 /* line 265: */
 /* line 266: */
 /* line 268: */
DQQACTR_breakvaluelist((*Valuestack), Newspace, 1, (&(Newspace->Rest)));
} 
break;
case 6: 
 /* line 270: */
{ 
USQACTR_operands = DQQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, (A68_INT )FSQACTR_param, Valuestack);
 /* line 271: */
 /* line 272: */
 /* line 273: */
 /* line 274: */
 /* line 276: */
 /* line 277: */
 /* line 278: */
 /* line 280: */
A_CALLPROC(SQQACTR_newstackitem,(VEAACTR_faultmode, EGAACTR_boundpackfn, (A68_INT )(A68_BITS )(A_SHL(FSQACTR_param,WGAACTR_operandsshift)|FSQACTR_param), USQACTR_operands),(VEAACTR_faultmode, EGAACTR_boundpackfn, (A68_INT )(A68_BITS )(A_SHL(FSQACTR_param,WGAACTR_operandsshift)|FSQACTR_param), USQACTR_operands,(SQQACTR_newstackitem).nonlocals));
} 
break;
case 7: 
 /* line 282: */
{ 
VSQACTR_operands = DQQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, (A68_INT )FSQACTR_param, Valuestack);
 /* line 283: */
 /* line 284: */
 /* line 285: */
 /* line 286: */
 /* line 288: */
 /* line 289: */
 /* line 290: */
 /* line 292: */
A_CALLPROC(SQQACTR_newstackitem,(VEAACTR_faultmode, DGAACTR_trimfn, (A68_INT )(A68_BITS )(A_SHL(FSQACTR_param,WGAACTR_operandsshift)|(A68_BITS )HSQACTR_opermode), VSQACTR_operands),(VEAACTR_faultmode, DGAACTR_trimfn, (A68_INT )(A68_BITS )(A_SHL(FSQACTR_param,WGAACTR_operandsshift)|(A68_BITS )HSQACTR_opermode), VSQACTR_operands,(SQQACTR_newstackitem).nonlocals));
} 
break;
case 8: 
 /* line 294: */
{ 
WXIACTR_assert(XSQACTR, ((*(&((&YPQACTR_parameters)->Parameters)))==(A68_87 *)A68_NIL));
 /* line 295: */
 /* line 296: */
 /* line 297: */
YSQACTR.Number = (A68_INT )FSQACTR_param;
 /* line 298: */
YSQACTR.Procmode = HSQACTR_opermode;
 /* line 299: */
 /* line 300: */
YSQACTR.Parameters = DQQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, (A68_INT )FSQACTR_param, Valuestack);
 /* line 301: */
 /* line 303: */
YPQACTR_parameters = YSQACTR;
} 
break;
case 9: 
 /* line 304: */
{ 
ZSQACTR_procmode = (&((&((*Valuestack)->Value))->Mode));
 /* line 305: */
 /* line 307: */
if ( ((*ZSQACTR_procmode)==OFAACTR_longlongcomplmode) )
{ 
 /* line 308: */
(*ZSQACTR_procmode) = (*(&((&YPQACTR_parameters)->Procmode)));
} 
else
{ 
 /* line 309: */
 /* line 310: */
 /* line 311: */
 /* line 312: */
 /* line 313: */
 /* line 315: */
WXIACTR_assert(BTQACTR, ((((((*(&((&YPQACTR_parameters)->Procmode)))==PEAACTR_nomode)|((*(&((&YPQACTR_parameters)->Procmode)))==(*ZSQACTR_procmode)))|(FSQACTR_param==01U))|(FSQACTR_param==02U))|(FSQACTR_param==03U)));
} 
 /* line 316: */
CTQACTR_operands = DQQACTR_breakvaluelist((*Valuestack), (*(&((&YPQACTR_parameters)->Parameters))), 1, Valuestack);
 /* line 317: */
 /* line 318: */
 /* line 319: */
 /* line 320: */
 /* line 322: */
DTQACTR = (A68_BITS )((*(&((&YPQACTR_parameters)->Number)))+1) ;
A_CALLPROC(SQQACTR_newstackitem,(HSQACTR_opermode, KGAACTR_callfn, (A68_INT )(A68_BITS )(A_SHL(DTQACTR,WGAACTR_operandsshift)|FSQACTR_param), CTQACTR_operands),(HSQACTR_opermode, KGAACTR_callfn, (A68_INT )(A68_BITS )(A_SHL(DTQACTR,WGAACTR_operandsshift)|FSQACTR_param), CTQACTR_operands,(SQQACTR_newstackitem).nonlocals));
 /* line 323: */
 /* line 324: */
 /* line 327: */
YPQACTR_parameters = XPQACTR_noparameterinfo;
} 
break;
case 10: 
 /* line 330: */
/*SKIP*/;
break;
case 11: 
 /* line 331: */
 /* line 332: */
 /* line 334: */
 /* line 338: */
A_CALLPROC(SQQACTR_newstackitem,(HSQACTR_opermode, GSQACTR_operfn, (A68_INT )FSQACTR_param, (A68_87 *)A68_NIL),(HSQACTR_opermode, GSQACTR_operfn, (A68_INT )FSQACTR_param, (A68_87 *)A68_NIL,(SQQACTR_newstackitem).nonlocals));
break;
case 12: 
 /* line 339: */
 /* line 340: */
 /* line 341: */
 /* line 342: */
 /* line 343: */
if ( (FSQACTR_param==0X0U) )
{ 
 /* line 344: */
ETQACTR = 2;
} 
else
{ 
ETQACTR = 3;
} 
 /* line 345: */
 /* line 347: */
 /* line 348: */
A_CALLPROC(XRQACTR_simpleoper,(Valuestack, HSQACTR_opermode, GSQACTR_operfn, ETQACTR, FSQACTR_param, Newspace),(Valuestack, HSQACTR_opermode, GSQACTR_operfn, ETQACTR, FSQACTR_param, Newspace,(XRQACTR_simpleoper).nonlocals));
break;
default: 
 /* line 349: */
 /* line 351: */
 /* line 353: */
WXIACTR_assert(GTQACTR, A68_FALSE);
break;
} 
} 
A_PROC_EXIT(oper);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void CPQACTR(void)   /* initialise DECS oper */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","-dir",".","oper.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","./values.m","./incoperfn.m","./incmode.m","./incimperatives.m","./environment.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_122  TPQACTR;  /* collateral clause result */
A68_54  UPQACTR;  /* OPERATORS - istruct to row */
A68_123  WPQACTR;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ATPACTR();   /* USE values */
XFAACTR();   /* USE incoperfn */
ZDAACTR();   /* USE incmode */
UAAACTR();   /* USE incimperatives */
HPIACTR();   /* USE environment */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/src/oper.a68";
A_config.translation_time = "Sun Apr 18 20:07:53 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "BPQACTR (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:53 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS oper);
UEAALIB_a68config(LGAALIB_configinfo, GPQACTR);
 /* line 43: */
 /* line 44: */
 /* line 45: */
 /* line 46: */
 /* line 47: */
 /* line 48: */
 /* line 49: */
 /* line 50: */
 /* line 51: */
 /* line 52: */
 /* line 53: */
 /* line 54: */
 /* line 56: */
 /* line 57: */
 /* line 58: */
 /* line 59: */
TPQACTR.data[0] = HPQACTR_oneop;
 /* line 60: */
TPQACTR.data[1] = OPQACTR_parameterpack;
 /* line 61: */
TPQACTR.data[2] = HPQACTR_oneop;
 /* line 62: */
TPQACTR.data[3] = HPQACTR_oneop;
 /* line 63: */
TPQACTR.data[4] = NPQACTR_trim;
 /* line 64: */
TPQACTR.data[5] = KPQACTR_paramplusoneop;
 /* line 65: */
TPQACTR.data[6] = KPQACTR_paramplusoneop;
 /* line 66: */
TPQACTR.data[7] = IPQACTR_twoop;
 /* line 67: */
TPQACTR.data[8] = MPQACTR_boundpack;
 /* line 68: */
TPQACTR.data[9] = IPQACTR_twoop;
 /* line 69: */
TPQACTR.data[10] = HPQACTR_oneop;
 /* line 70: */
TPQACTR.data[11] = IPQACTR_twoop;
 /* line 71: */
TPQACTR.data[12] = QPQACTR_nullop;
 /* line 72: */
TPQACTR.data[13] = IPQACTR_twoop;
 /* line 73: */
TPQACTR.data[14] = IPQACTR_twoop;
 /* line 74: */
TPQACTR.data[15] = LPQACTR_defaultbound;
 /* line 75: */
TPQACTR.data[16] = HPQACTR_oneop;
 /* line 76: */
TPQACTR.data[17] = PPQACTR_call;
 /* line 77: */
TPQACTR.data[18] = HPQACTR_oneop;
 /* line 78: */
TPQACTR.data[19] = HPQACTR_oneop;
 /* line 79: */
TPQACTR.data[20] = HPQACTR_oneop;
 /* line 80: */
TPQACTR.data[21] = HPQACTR_oneop;
 /* line 81: */
TPQACTR.data[22] = HPQACTR_oneop;
 /* line 82: */
TPQACTR.data[23] = HPQACTR_oneop;
 /* line 83: */
TPQACTR.data[24] = HPQACTR_oneop;
 /* line 84: */
TPQACTR.data[25] = HPQACTR_oneop;
 /* line 85: */
TPQACTR.data[26] = HPQACTR_oneop;
 /* line 86: */
TPQACTR.data[27] = HPQACTR_oneop;
 /* line 87: */
TPQACTR.data[28] = HPQACTR_oneop;
 /* line 88: */
TPQACTR.data[29] = HPQACTR_oneop;
 /* line 89: */
TPQACTR.data[30] = HPQACTR_oneop;
 /* line 90: */
TPQACTR.data[31] = HPQACTR_oneop;
 /* line 91: */
TPQACTR.data[32] = HPQACTR_oneop;
 /* line 92: */
TPQACTR.data[33] = HPQACTR_oneop;
 /* line 93: */
TPQACTR.data[34] = HPQACTR_oneop;
 /* line 94: */
TPQACTR.data[35] = HPQACTR_oneop;
 /* line 95: */
TPQACTR.data[36] = HPQACTR_oneop;
 /* line 96: */
TPQACTR.data[37] = HPQACTR_oneop;
 /* line 97: */
TPQACTR.data[38] = HPQACTR_oneop;
 /* line 98: */
TPQACTR.data[39] = HPQACTR_oneop;
 /* line 99: */
TPQACTR.data[40] = 999;
 /* line 100: */
TPQACTR.data[41] = 999;
 /* line 101: */
TPQACTR.data[42] = 999;
 /* line 102: */
TPQACTR.data[43] = 999;
 /* line 103: */
TPQACTR.data[44] = 999;
 /* line 104: */
TPQACTR.data[45] = 999;
 /* line 105: */
TPQACTR.data[46] = 999;
 /* line 106: */
TPQACTR.data[47] = 999;
 /* line 108: */
TPQACTR.data[48] = 999;
 /* line 110: */
TPQACTR.data[49] = RPQACTR_zeroop;
TPQACTR.data[50] = SPQACTR_formatop;
VPQACTR_opertype = A_HIS1ARR(UPQACTR,TPQACTR,A68_INT ,51);
 /* line 112: */
 /* line 114: */
WPQACTR.Number = 0;
WPQACTR.Procmode = PEAACTR_nomode;
WPQACTR.Parameters = (A68_87 *)A68_NIL;
XPQACTR_noparameterinfo = WPQACTR;
 /* line 116: */
YPQACTR_parameters = XPQACTR_noparameterinfo;
 /* line 118: */
 /* line 119: */
 /* line 140: */
 /* line 141: */
 /* line 355: */
A_PROC_EXIT(DECS oper);
} 
#undef NL
/* end of translation of oper.a68 */
