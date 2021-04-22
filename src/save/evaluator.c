/* UNAME:JEVACTR */
#include <algol68/Asupport.h>
struct A68t32 ;
struct A68t33 ;

A_PROCEDURE(A68_VOID ,A68t31,(struct A68t32 *,struct A68t33 ,struct A68t32 *),(struct A68t32 *,struct A68t33 ,struct A68t32 *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(REF MODE32,MODE33) MODE32 */
struct A68t36{
A68_INT  Rdenno;
A_PAD_INT(PAD_1)
};
typedef struct A68t36  A68_36 ;    /* STRUCT(INT)  */
struct A68t37{
A68_INT  Idno;
A_PAD_INT(PAD_2)
};
typedef struct A68t37  A68_37 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t41);
typedef struct A68t41  A68_41 ;    /* STRUCT 7 CHAR */
struct A68t38{
struct A68t41  Name;
A_PAD_ISTRUCT(A68_41 ,PAD_3)
A68_INT  Mode;
A_PAD_INT(PAD_4)
};
typedef struct A68t38  A68_38 ;    /* STRUCT(MODE41,INT)  */
struct A68t39{
A68_INT  Labno;
A_PAD_INT(PAD_5)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(INT)  */
struct A68t40{
A68_INT  Nse;
A_PAD_INT(PAD_6)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(INT)  */
struct A68t33{
A68_INT  Fn;
A_PAD_INT(PAD_7)
A68_INT  Param;
A_PAD_INT(PAD_8)
struct A68t34 * Operands;
};
typedef struct A68t33  A68_33 ;    /* STRUCT(INT,INT,REF MODE34)  */
struct A68t35 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t36  mode2;
struct A68t37  mode4;
struct A68t38  mode5;
A68_VC  mode6;
struct A68t39  mode7;
struct A68t40  mode8;
struct A68t33  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t35  A68_35 ;    /* UNION(LONG BITS,MODE36,VOID,MODE37,MODE38,MODE26,MODE39,MODE40,MODE33)  */
struct A68t32{
A68_INT  Mode;
A_PAD_INT(PAD_9)
A68_BITS  Info;
A_PAD_BITS(PAD_10)
struct A68t35  Extra;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(INT,BITS,MODE35)  */
struct A68t34{
struct A68t32  Value;
struct A68t34 * Rest;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(MODE32,REF MODE34)  */
struct A68t43{
A68_INT  Level;
A_PAD_INT(PAD_11)
A68_INT  Block;
A_PAD_INT(PAD_12)
};
typedef struct A68t43  A68_43 ;    /* STRUCT(INT,INT)  */
struct A68t42{
A68_INT  Mode;
A_PAD_INT(PAD_13)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_14)
struct A68t43  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t41  Prefix;
A_PAD_ISTRUCT(A68_41 ,PAD_15)
A68_BITS  Flags;
A_PAD_BITS(PAD_16)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t42  A68_42 ;    /* STRUCT(INT,INT,MODE43,REF MODE26,REF MODE26,MODE41,BITS,REF MODE26,REF MODE26)  */
struct A68t44{
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_INT  Resultmode;
A_PAD_INT(PAD_18)
A68_INT  Declevel;
A_PAD_INT(PAD_19)
struct A68t43  Environ;
A68_VC  Name;
struct A68t41  Prefix;
A_PAD_ISTRUCT(A68_41 ,PAD_20)
struct A68t41  Fnprefix;
A_PAD_ISTRUCT(A68_41 ,PAD_21)
struct A68t41  Envprefix;
A_PAD_ISTRUCT(A68_41 ,PAD_22)
A68_BITS  Flags;
A_PAD_BITS(PAD_23)
};
typedef struct A68t44  A68_44 ;    /* STRUCT(INT,INT,INT,MODE43,REF MODE26,MODE41,MODE41,MODE41,BITS)  */
struct A68t46{
struct A68t41  Name;
A_PAD_ISTRUCT(A68_41 ,PAD_24)
A68_BOOL  Set;
A_PAD_BOOL(PAD_25)
};
typedef struct A68t46  A68_46 ;    /* STRUCT(MODE41,BOOL)  */
struct A68t45{
struct A68t46  Label;
struct A68t43  Environ;
A68_VC  Name;
struct A68t41  Prefix;
A_PAD_ISTRUCT(A68_41 ,PAD_26)
A68_BITS  Flags;
A_PAD_BITS(PAD_27)
A68_INT  Alias;
A_PAD_INT(PAD_28)
};
typedef struct A68t45  A68_45 ;    /* STRUCT(MODE46,MODE43,REF MODE26,MODE41,BITS,INT)  */

A_PROCEDURE(struct A68t42 *,A68t47,(A68_INT ),(A68_INT ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(INT) REF MODE42 */

A_PROCEDURE(A68_VOID ,A68t48,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t49,(A68_VC ,struct A68t41 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t41 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE26,MODE41,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t50,(A68_INT ),(A68_INT ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(INT) VOID */
A_ROW(struct A68t42 ,A68t51,1);
typedef struct A68t51  A68_51 ;    /* [] MODE42 */
A_ROW(struct A68t44 ,A68t52,1);
typedef struct A68t52  A68_52 ;    /* [] MODE44 */
A_ROW(struct A68t45 ,A68t53,1);
typedef struct A68t53  A68_53 ;    /* [] MODE45 */

A_PROCEDURE(A68_BOOL ,A68t54,(A68_INT ),(A68_INT ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t55,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(INT) MODE26 */
struct A68t57 ;

A_PROCEDURE(A68_VOID ,A68t56,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t57 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t57 ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(INT,INT,INT,INT,REF MODE57) VOID */
A_ROW(A68_INT ,A68t57,1);
typedef struct A68t57  A68_57 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t58,(A68_VC ),(A68_VC ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t59,(A68_INT ,struct A68t43 *),(A68_INT ,struct A68t43 *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) MODE43 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t62,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t63,(void),(void *));
typedef struct A68t63  A68_63 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t64,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t65,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(INT) REF MODE26 */
struct A68t67 ;

A_PROCEDURE(A68_VOID ,A68t66,(A68_INT ,struct A68t67 ),(A68_INT ,struct A68t67 ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(INT,MODE67) VOID */
A_ROW(A68_VC ,A68t67,1);
typedef struct A68t67  A68_67 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t68,(void),(void *));
typedef struct A68t68  A68_68 ;    /* PROC BITS */
struct A68t69{
A68_INT  Cfile;
A_PAD_INT(PAD_29)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT)  */
struct A68t70{
A68_INT  Seedfile;
A_PAD_INT(PAD_30)
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT)  */
struct A68t71 { A68_INT mode; union {
struct A68t69  mode1;
struct A68t70  mode2;
struct A68t41  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t71  A68_71 ;    /* UNION(MODE69,MODE70,MODE41,VOID)  */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ),(A68_VC ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t73,1);
typedef struct A68t73  A68_73 ;    /* [] BOOL */
struct A68t74{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_31)
A68_VC  Sourcefile;
struct A68t41  Nameseed;
A_PAD_ISTRUCT(A68_41 ,PAD_32)
struct A68t71  Nameseedorigin;
struct A68t75 * Used_modules;
A68_VC  Commandline;
struct A68t76 * Environment;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE41,MODE71,REF MODE75,REF MODE26,REF MODE76)  */
struct A68t75{
A68_VC  Modinfo_file;
struct A68t75 * Next;
};
typedef struct A68t75  A68_75 ;    /* STRUCT(REF MODE26,REF MODE75)  */
struct A68t76{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t76 * Next;
};
typedef struct A68t76  A68_76 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE76)  */
struct A68t78 ;
struct A68t79 ;

A_PROCEDURE(struct A68t78 *,A68t77,(A68_VC ,struct A68t79 *,A68_VC *),(A68_VC ,struct A68t79 *,A68_VC *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE26,REF MODE79,REF REF MODE26) REF MODE78 */
struct A68t78{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t78  A68_78 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t79{
A68_VC  Dir;
struct A68t79 * Next;
};
typedef struct A68t79  A68_79 ;    /* STRUCT(REF MODE26,REF MODE79)  */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t32 *,struct A68t32 **),(struct A68t32 *,struct A68t32 **,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE32,REF REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t32 *,struct A68t32 **,A68_BITS ),(struct A68t32 *,struct A68t32 **,A68_BITS ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF MODE32,REF REF MODE32,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t32 *,struct A68t32 **,struct A68t32 **),(struct A68t32 *,struct A68t32 **,struct A68t32 **,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF MODE32,REF REF MODE32,REF REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REF MODE32) VOID */
struct A68t85 ;

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE85) VOID */
A_VECTOR(struct A68t86 ,A68t85);
typedef struct A68t85  A68_85 ;    /* VECTOR [] MODE86 */
struct A68t86 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t86  A68_86 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t88 ;

A_PROCEDURE(A68_VOID ,A68t87,(struct A68t88 ,A68_INT ),(struct A68t88 ,A68_INT ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE88,INT) VOID */
A_VECTOR(struct A68t89 ,A68t88);
typedef struct A68t88  A68_88 ;    /* VECTOR [] MODE89 */
struct A68t89 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t89  A68_89 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t71 ),(struct A68t71 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE71) VOID */

A_PROCEDURE(struct A68t41 ,A68t91,(void),(void *));
typedef struct A68t91  A68_91 ;    /* PROC MODE41 */

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t41 ),(struct A68t41 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE41) VOID */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t71 ,A68_VC *),(struct A68t71 ,A68_VC *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE71) MODE26 */
struct A68t94{
A68_INT  Parameters;
A_PAD_INT(PAD_33)
A68_INT  Result;
A_PAD_INT(PAD_34)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_35)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t96);
typedef struct A68t96  A68_96 ;    /* STRUCT 32 CHAR */
struct A68t95{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_INT  Offset;
A_PAD_INT(PAD_37)
struct A68t96  Name;
A_PAD_ISTRUCT(A68_96 ,PAD_38)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT,INT,MODE96)  */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(A68_INT ,struct A68t98 *),(A68_INT ,struct A68t98 *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT) REF MODE98 */
A_VECTOR(A68_INT ,A68t98);
typedef struct A68t98  A68_98 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t95 *,A68_VC *),(struct A68t95 *,A68_VC *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(REF MODE95) MODE26 */

A_PROCEDURE(A68_VOID ,A68t100,(A68_INT ,A68_VC ,struct A68t38 *),(A68_INT ,A68_VC ,struct A68t38 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(INT,MODE26) MODE38 */

A_PROCEDURE(A68_INT ,A68t101,(A68_INT ),(A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT) INT */
struct A68t103 ;

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t103 ,A68_INT ),(struct A68t103 ,A68_INT ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE103,INT) VOID */
A_ROW(struct A68t104 ,A68t103,1);
typedef struct A68t103  A68_103 ;    /* [] MODE104 */
struct A68t114{
A68_INT  Mode;
A_PAD_INT(PAD_39)
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT)  */
struct A68t104 { A68_INT mode; union {
A68_INT  mode1;
struct A68t105 * mode2;
struct A68t106 * mode3;
struct A68t107 * mode4;
struct A68t108 * mode5;
struct A68t109 * mode6;
struct A68t110 * mode7;
struct A68t111 * mode8;
struct A68t112 * mode9;
struct A68t113 * mode10;
struct A68t114  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t104  A68_104 ;    /* UNION(INT,REF MODE105,REF MODE106,REF MODE107,REF MODE108,REF MODE109,REF MODE110,REF MODE111,REF MODE112,REF MODE113,MODE114)  */
struct A68t105{
A68_INT  Rdenno;
A_PAD_INT(PAD_40)
struct A68t118 * Modelist;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(INT,REF MODE118)  */
struct A68t106{
A68_INT  Deproc;
A_PAD_INT(PAD_41)
struct A68t118 * Pars;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT,REF MODE118)  */
struct A68t107{
A68_INT  Rdenno;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
struct A68t117 * Sels;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,INT,REF MODE117)  */
struct A68t108{
A68_INT  Rdenno;
A_PAD_INT(PAD_44)
A68_INT  Imode;
A_PAD_INT(PAD_45)
A68_INT  Length;
A_PAD_INT(PAD_46)
A68_INT  Deflex;
A_PAD_INT(PAD_47)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t109{
A68_INT  Deproc;
A_PAD_INT(PAD_48)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT)  */
struct A68t110{
A68_INT  Rdenno;
A_PAD_INT(PAD_49)
A68_INT  Vecmode;
A_PAD_INT(PAD_50)
A68_INT  Deflex;
A_PAD_INT(PAD_51)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT,INT,INT)  */
struct A68t111{
A68_INT  Rdenno;
A_PAD_INT(PAD_52)
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_INT  Nods;
A_PAD_INT(PAD_54)
A68_INT  Deflex;
A_PAD_INT(PAD_55)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t112{
A68_INT  Mode;
A_PAD_INT(PAD_56)
struct A68t116 * Stenlist;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT,REF MODE116)  */
struct A68t113{
A68_INT  Mode;
A_PAD_INT(PAD_57)
A68_INT  Modeproc;
A_PAD_INT(PAD_58)
struct A68t115 * El;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,INT,REF MODE115)  */
struct A68t115{
struct A68t113 * Am;
struct A68t115 * Rest;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(REF MODE113,REF MODE115)  */
struct A68t116{
A68_INT  Mode;
A_PAD_INT(PAD_59)
A68_INT  Rdenno;
A_PAD_INT(PAD_60)
struct A68t116 * Rest;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,REF MODE116)  */
struct A68t117{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_INT  Fieldno;
A_PAD_INT(PAD_62)
struct A68t96  Name;
A_PAD_ISTRUCT(A68_96 ,PAD_63)
struct A68t117 * Rest;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,INT,MODE96,REF MODE117)  */
struct A68t118{
A68_INT  Mode;
A_PAD_INT(PAD_64)
struct A68t118 * Rest;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,REF MODE118)  */

A_PROCEDURE(A68_VOID ,A68t119,(A68_INT ,struct A68t94 *),(A68_INT ,struct A68t94 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(INT) MODE94 */
struct A68t121 ;

A_PROCEDURE(A68_VOID ,A68t120,(A68_INT ,struct A68t121 *),(A68_INT ,struct A68t121 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(INT) REF MODE121 */
A_VECTOR(struct A68t95 ,A68t121);
typedef struct A68t121  A68_121 ;    /* VECTOR [] MODE95 */

A_PROCEDURE(A68_INT ,A68t122,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t123,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t124,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(INT,INT) MODE26 */
struct A68t125{
struct A68t32 * Value;
struct A68t46 * End;
A68_INT  Type;
A_PAD_INT(PAD_65)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(REF MODE32,REF MODE46,INT)  */

A_PROCEDURE(A68_BOOL ,A68t126,(struct A68t32 *,struct A68t32 *),(struct A68t32 *,struct A68t32 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE32,REF MODE32) BOOL */

A_PROCEDURE(A68_BOOL ,A68t127,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE32) BOOL */

A_PROCEDURE(A68_BOOL ,A68t128,(struct A68t32 *,A68_LBITS ),(struct A68t32 *,A68_LBITS ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE32,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t129,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE32) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t32 *,A68_VC *),(struct A68t32 *,A68_VC *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE32) MODE26 */

A_PROCEDURE(struct A68t32 *,A68t131,(struct A68t32 *,A68_INT ),(struct A68t32 *,A68_INT ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE32,INT) REF MODE32 */

A_PROCEDURE(A68_INT ,A68t132,(struct A68t33 ),(struct A68t33 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE33) INT */

A_PROCEDURE(A68_BOOL ,A68t133,(struct A68t32 *,A68_BITS ),(struct A68t32 *,A68_BITS ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REF MODE32,BITS) BOOL */

A_PROCEDURE(struct A68t32 *,A68t134,(struct A68t34 *,A68_INT ),(struct A68t34 *,A68_INT ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF MODE34,INT) REF MODE32 */

A_PROCEDURE(A68_INT ,A68t135,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(struct A68t34 *,A68t136,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(REF MODE34) REF MODE34 */
struct A68t138 ;

A_PROCEDURE(struct A68t32 *,A68t137,(A68_INT ,A68_INT ,A68_BITS ,struct A68t138 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t138 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT,INT,BITS,MODE138) REF MODE32 */
A_VECTOR(struct A68t32 *,A68t138);
typedef struct A68t138  A68_138 ;    /* VECTOR [] REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t139,(struct A68t32 *,A68_BOOL ,A68_VC *),(struct A68t32 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(REF MODE32,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t140,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE32) LONG INT */
struct A68t141 { A68_INT mode; union {
struct A68t32 * mode1;
A68_VC  mode2;
struct A68t38  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t141  A68_141 ;    /* UNION(REF MODE32,MODE26,MODE38)  */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t141 ,A68_VC *),(struct A68t141 ,A68_VC *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE141) MODE26 */
struct A68t144 ;

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t144 ,A68_VC *),(struct A68t144 ,A68_VC *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE144) MODE26 */
A_VECTOR(struct A68t141 ,A68t144);
typedef struct A68t144  A68_144 ;    /* VECTOR [] MODE141 */

A_PROCEDURE(A68_VOID ,A68t145,(A68_VC ,struct A68t144 ,A68_VC *),(A68_VC ,struct A68t144 ,A68_VC *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE26,MODE144) MODE26 */

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t144 ),(struct A68t144 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE144) VOID */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC ,A68_INT ,struct A68t144 ,struct A68t38 *),(A68_VC ,A68_INT ,struct A68t144 ,struct A68t38 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE26,INT,MODE144) MODE38 */

A_PROCEDURE(struct A68t32 *,A68t148,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE32) REF MODE32 */

A_PROCEDURE(struct A68t32 *,A68t149,(A68_VC ,struct A68t32 *),(A68_VC ,struct A68t32 *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE26,REF MODE32) REF MODE32 */

A_PROCEDURE(A68_INT ,A68t150,(struct A68t98 ,struct A68t98 ),(struct A68t98 ,struct A68t98 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE98,REF MODE98) INT */

A_PROCEDURE(A68_VOID ,A68t151,(A68_INT ,struct A68t98 ,struct A68t57 *),(A68_INT ,struct A68t98 ,struct A68t57 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(INT,REF MODE98) MODE57 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t98 ,struct A68t98 ,A68_VC *),(struct A68t98 ,struct A68t98 ,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE98,REF MODE98) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t153,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_INT ,A68t154,(A68_VC ),(A68_VC ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t158,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t32 *,A68_BOOL ),(struct A68t32 *,A68_BOOL ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE32,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,26,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 26 CHAR */
A_ROW(struct A68t31 ,A68t163,1);
typedef struct A68t163  A68_163 ;    /* [] MODE31 */
A_ISTRUCT(A68_CHAR ,40,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(struct A68t31 ,51,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 51 MODE31 */
A_ISTRUCT(A68_CHAR ,43,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 43 CHAR */

A_PROCEDURE(struct A68t32 *,A68t171,(struct A68t32 *,struct A68t32 ),(struct A68t32 *,struct A68t32 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE32,MODE32) REF MODE32 */

A_PROCEDURE(struct A68t35 *,A68t172,(struct A68t35 *,struct A68t35 ),(struct A68t35 *,struct A68t35 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF MODE35,MODE35) REF MODE35 */
#define A68_173  A68_VC 
#define A68t173 A68t26            /* FLEX VECTOR [] CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t34 **),(struct A68t34 **,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF REF MODE34) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from moduletracer --- */
/* --- End of imports from moduletracer --- */


/* --- Imports from unionaids --- */
/* --- End of imports from unionaids --- */


/* --- Imports from values --- */
extern A68_BITS  PKJACTR_defaultinfo;
extern A68_34 * MKJACTR_nilvaluelist;
extern A68_34 * ADQACTR_reversevaluelist(struct A68t34 *);
extern A68_32  DLJACTR_skipvalue;
/* --- End of imports from values --- */


/* --- Imports from incvalue --- */
/* --- End of imports from incvalue --- */


/* --- Imports from modes --- */
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
/* --- End of imports from incmode --- */


/* --- Imports from uniquenameserver --- */
/* --- End of imports from uniquenameserver --- */


/* --- Imports from coutput --- */
/* --- End of imports from coutput --- */


/* --- Imports from evalbase --- */
extern A68_83  NWQACTR_evaluate;
/* --- End of imports from evalbase --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_BITS  PJJACTR_tracelevelflags(void);
extern A68_BOOL  LJJACTR_traceon;
extern A68_VOID  JXIACTR_warning(A68_INT );
/* --- End of imports from environment --- */


/* --- Imports from centities --- */
/* --- End of imports from centities --- */


/* --- Imports from idtable --- */
/* --- End of imports from idtable --- */


/* --- Imports from operators --- */
extern A68_VOID  HERACTR_simpleindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  FKRACTR_trimindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  MRRACTR_straightindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  VSRACTR_straighten(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  UWRACTR_assignop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  XYRACTR_derefop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  YZRACTR_callop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  IGSACTR_voidop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  SHSACTR_niltomodeop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  OLSACTR_rowstorowrows(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  NMSACTR_vectortorow(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_31  HWSACTR_scalartovector;
extern A68_VOID  DNSACTR_modetostruct1mode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  SNSACTR_unitesimple(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  JPSACTR_uniteunion(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  QSSACTR_istructtorow(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  YQSACTR_istructtovector(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  LWSACTR_skiptomode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_31  FWSACTR_scalartorow;
extern A68_VOID  OYSACTR_vacuum(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  NZSACTR_staticgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  ABRACTR_staticpartgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  YBRACTR_selectop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  WCRACTR_copytoflex(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  BPRACTR_dynamicgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  IISACTR_gototoproc(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  VISACTR_gototomode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  MKSACTR_inttoreal(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  WKSACTR_realtocomplex(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  TWSACTR_deunite(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  IXSACTR_bitstorowbool(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  BZSACTR_ytypetom(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  HZSACTR_mtoxtype(struct A68t32 *,struct A68t33 ,A68_32 *);
/* --- End of imports from operators --- */


/* --- Imports from adicops --- */
extern A68_VOID  WDVACTR_dyadicsem(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  MZTACTR_monadicsem(struct A68t32 *,struct A68t33 ,A68_32 *);
/* --- End of imports from adicops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BCHACTR(void);   /* moduletracer */
extern void HTQACTR(void);   /* unionaids */
extern void ATPACTR(void);   /* values */
extern void GKJACTR(void);   /* incvalue */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void RHMACTR(void);   /* uniquenameserver */
extern void PTLACTR(void);   /* coutput */
extern void IWQACTR(void);   /* evalbase */
extern void HPIACTR(void);   /* environment */
extern void THAACTR(void);   /* centities */
extern void PPKACTR(void);   /* idtable */
extern void DYQACTR(void);   /* operators */
extern void SFTACTR(void);   /* adicops */
/* --- end of DECS initialisation functions --- */
static A68_159   NEVACTR = {"$Id: evaluator.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,OEVACTR,NEVACTR,59)
static A68_160   TEVACTR = {"/* UNIMPLEMENTED OPER */"}; 
A_GISVEC(A68_VC ,UEVACTR,TEVACTR,24)
A68_161  YEVACTR_calltrace;
#define ZEVACTR_tracealllevels 0X800000U
static A68_162   DFVACTR = {"EVALUATE - spare op number"}; 
A_GISVEC(A68_VC ,EFVACTR,DFVACTR,26)
static A68_164   OFVACTR = {"EVALUATE - trim implemented by trimindex"}; 
A_GISVEC(A68_VC ,PFVACTR,OFVACTR,40)
static A68_165   YFVACTR = {"EVALUATE - boundpack implemented by dynamic generator"}; 
A_GISVEC(A68_VC ,ZFVACTR,YFVACTR,53)
static A68_166   JGVACTR = {"EVALUATE - prestraight implemented by straighten"}; 
A_GISVEC(A68_VC ,KGVACTR,JGVACTR,48)
static A68_167   SGVACTR = {"EVALUATE - default bound implemented by load"}; 
A_GISVEC(A68_VC ,TGVACTR,SGVACTR,44)
static A68_168   IHVACTR = {"EVALUATE - 25 68R inttobits no longer implemented"}; 
A_GISVEC(A68_VC ,JHVACTR,IHVACTR,49)
static A68_163  LIVACTR_opersemantics;
static A68_170   OIVACTR = {"EVALUATE - evaluator passed a NIL reference"}; 
A_GISVEC(A68_VC ,PIVACTR,OIVACTR,43)
static A68_41   KJVACTR = {"A68_NIL"}; 
A_GISVEC(A68_VC ,LJVACTR,KJVACTR,7)
static A68_174   OJVACTR = {"EVALUATE - Unknown NSE"}; 
A_GISVEC(A68_VC ,PJVACTR,OJVACTR,22)
static A68_175   VJVACTR = {"/* VOID? */"}; 
A_GISVEC(A68_VC ,WJVACTR,VJVACTR,11)
static A68_166   ZJVACTR = {"EVALUATE - evaluation not defined for this value"}; 
A_GISVEC(A68_VC ,AKVACTR,ZJVACTR,48)

A_STATIC A68_VOID  REVACTR_unimplementedop(A68_32 * Root, A68_33  Oper, A68_32  *ReturnedValue);

A_STATIC A68_VOID  CFVACTR_spareop(A68_32 * Value, A68_33  Oper, A68_32  *ReturnedValue);

A_STATIC A68_VOID  NFVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  XFVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  IGVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  RGVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  HHVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  NIVACTR_evalnotrace(A68_32 * Root);

A_STATIC A68_32 * UIVACTR_assignment(A68_32 * SIVACTR_anonymous, A68_32  TIVACTR_anonymous);

A_STATIC A68_35 * ZIVACTR_assignment(A68_35 * XIVACTR_anonymous, A68_35  YIVACTR_anonymous);

A_STATIC A68_VOID  CKVACTR_evaltrace(A68_32 * Root);

A68_VOID  HKVACTR_evaluatestack(A68_34 ** Valuestack);

A68_VOID  JKVACTR_initialiseevaluator(void);

A_STATIC A68_35 * ZIVACTR_assignment(A68_35 * XIVACTR_anonymous, A68_35  YIVACTR_anonymous)
{ 
A68_35  AJVACTR;  /* united object - for case conformity */
A68_VC  BJVACTR_anonymous;
A68_VC  CJVACTR;  /* OPERATORS - copy to flex */
A68_173 * DJVACTR;  /* YIELD */
A68_35 * EJVACTR;  /* clause result */
{ 
(*XIVACTR_anonymous) = YIVACTR_anonymous;
AJVACTR = YIVACTR_anonymous ;
switch ( AJVACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
BJVACTR_anonymous = (AJVACTR.data.mode6);
DJVACTR = &(XIVACTR_anonymous-> data.mode6) ;
(*DJVACTR) = A_VCOPY(BJVACTR_anonymous,CJVACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
EJVACTR = XIVACTR_anonymous;
} 
return( EJVACTR );
} 
#undef NL

A_STATIC A68_32 * UIVACTR_assignment(A68_32 * SIVACTR_anonymous, A68_32  TIVACTR_anonymous)
{ 
A68_INT * VIVACTR;  /* YIELD */
A68_BITS * WIVACTR;  /* YIELD */
A68_32 * FJVACTR;  /* clause result */
{ 
VIVACTR = (&(SIVACTR_anonymous->Mode)) ;
(*VIVACTR) = TIVACTR_anonymous.Mode;
WIVACTR = (&(SIVACTR_anonymous->Info)) ;
(*WIVACTR) = TIVACTR_anonymous.Info;
ZIVACTR_assignment((&(SIVACTR_anonymous->Extra)), TIVACTR_anonymous.Extra);
FJVACTR = SIVACTR_anonymous;
} 
return( FJVACTR );
} 
#undef NL

A_STATIC A68_VOID  REVACTR_unimplementedop(A68_32 * Root, A68_33  Oper, A68_32  *ReturnedValue)
{ 
A68_32  SEVACTR;  /* collateral clause result */
A68_35  VEVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WEVACTR;  /* YIELD */
A68_32  XEVACTR;  /* clause result */
A_PROC_ENTRY(unimplementedop);
 /* line 47: */
 /* line 48: */
{ 
SEVACTR.Mode = (*(&(Root->Mode)));
SEVACTR.Info = PKJACTR_defaultinfo;
 /* line 49: */
WEVACTR = UEVACTR ;
SEVACTR.Extra = A_UNITE(VEVACTR,mode6,6,WEVACTR);
XEVACTR = SEVACTR;
} 
A_PROC_EXIT(unimplementedop);
*ReturnedValue = (XEVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CFVACTR_spareop(A68_32 * Value, A68_33  Oper, A68_32  *ReturnedValue)
{ 
A68_32  FFVACTR;  /* clause result */
A_PROC_ENTRY(spareop);
 /* line 56: */
{ 
WXIACTR_assert(EFVACTR, A68_FALSE);
FFVACTR = DLJACTR_skipvalue;
} 
A_PROC_EXIT(spareop);
*ReturnedValue = (FFVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NFVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  QFVACTR;  /* clause result */
 /* line 64: */
{ 
WXIACTR_assert(PFVACTR, A68_FALSE);
QFVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (QFVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XFVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  AGVACTR;  /* clause result */
A68_32  BGVACTR;  /* OPERATORS - skip to mode */
 /* line 69: */
{ 
WXIACTR_assert(ZFVACTR, A68_FALSE);
AGVACTR = BGVACTR;
} 
*ReturnedValue = (AGVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IGVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  LGVACTR;  /* clause result */
 /* line 74: */
{ 
WXIACTR_assert(KGVACTR, A68_FALSE);
LGVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (LGVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RGVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  UGVACTR;  /* clause result */
A68_32  VGVACTR;  /* OPERATORS - skip to mode */
 /* line 78: */
{ 
WXIACTR_assert(TGVACTR, A68_FALSE);
UGVACTR = VGVACTR;
} 
*ReturnedValue = (UGVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HHVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  KHVACTR;  /* clause result */
 /* line 88: */
{ 
WXIACTR_assert(JHVACTR, A68_FALSE);
KHVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (KHVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NIVACTR_evalnotrace(A68_32 * Root)
{ 
A68_35  QIVACTR;  /* united object - for case conformity */
A68_33  RIVACTR_rator;
A68_INT  GJVACTR;  /* YIELD */
A68_31  HJVACTR;  /* CALL */
A68_32  IJVACTR;  /* avoid structure result */
A68_40  JJVACTR_nihil;
A68_35  MJVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NJVACTR;  /* YIELD */
A68_36  QJVACTR_r;
A68_37  RJVACTR_id;
A68_38  SJVACTR_temp;
A68_39  TJVACTR_label;
A68_VC  UJVACTR_cf;
A68_35  XJVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YJVACTR;  /* YIELD */
A_PROC_ENTRY(evalnotrace);
 /* line 120: */
 /* line 121: */
{ 
WXIACTR_assert(PIVACTR, (Root!=(A68_32 *)A68_NIL));
 /* line 122: */
 /* line 123: */
QIVACTR = (*(&(Root->Extra))) ;
switch ( QIVACTR.mode )
{ 
case 9: /* STRUCT(INT,INT,REF MODE34)  */
RIVACTR_rator = (QIVACTR.data.mode9);
 /* line 124: */
 /* line 126: */
GJVACTR = RIVACTR_rator.Fn ;
HJVACTR = A_R1INDEX(LIVACTR_opersemantics,GJVACTR) ;
A_CALLPROC(HJVACTR,(Root, RIVACTR_rator, &IJVACTR),(Root, RIVACTR_rator, &IJVACTR,(HJVACTR).nonlocals));
UIVACTR_assignment(Root, IJVACTR);
break;
case 8: /* STRUCT(INT)  */
JJVACTR_nihil = (QIVACTR.data.mode8);
 /* line 127: */
 /* line 128: */
switch ( JJVACTR_nihil.Nse )
{ 
case 1: 
 /* line 129: */
/*SKIP*/;
break;
case 2: 
 /* line 130: */
/*SKIP*/;
break;
case 3: 
 /* line 131: */
NJVACTR = LJVACTR ;
ZIVACTR_assignment((&(Root->Extra)), A_UNITE(MJVACTR,mode6,6,NJVACTR));
break;
default: 
WXIACTR_assert(PJVACTR, A68_FALSE);
 /* line 132: */
 /* line 134: */
/*SKIP*/;
break;
} 
break;
case 1: /* LONG BITS */
 /* line 135: */
 /* line 137: */
/*SKIP*/;
break;
case 2: /* STRUCT(INT)  */
QJVACTR_r = (QIVACTR.data.mode2);
 /* line 138: */
 /* line 140: */
/*SKIP*/;
break;
case 4: /* STRUCT(INT)  */
RJVACTR_id = (QIVACTR.data.mode4);
 /* line 141: */
 /* line 143: */
/*SKIP*/;
break;
case 5: /* STRUCT(MODE41,INT)  */
SJVACTR_temp = (QIVACTR.data.mode5);
 /* line 144: */
 /* line 146: */
/*SKIP*/;
break;
case 7: /* STRUCT(INT)  */
TJVACTR_label = (QIVACTR.data.mode7);
 /* line 147: */
 /* line 149: */
/*SKIP*/;
break;
case 6: /* VECTOR [] CHAR */
UJVACTR_cf = (QIVACTR.data.mode6);
 /* line 150: */
 /* line 152: */
/*SKIP*/;
break;
case 3: /* VOID */
 /* line 153: */
 /* line 155: */
YJVACTR = WJVACTR ;
ZIVACTR_assignment((&(Root->Extra)), A_UNITE(XJVACTR,mode6,6,YJVACTR));
break;
default: 
 /* line 156: */
 /* line 157: */
WXIACTR_assert(AKVACTR, A68_FALSE);
break;
} 
} 
A_PROC_EXIT(evalnotrace);
return;
} 
#undef NL

A_STATIC A68_VOID  CKVACTR_evaltrace(A68_32 * Root)
{ 
A68_BITS  DKVACTR;  /* ADICOPS - >= */
A68_83  EKVACTR;  /* procedure value */
A68_83  FKVACTR;  /* procedure value */
A_PROC_ENTRY(evaltrace);
 /* line 164: */
 /* line 165: */
{ 
A_CALLPROC(YEVACTR_calltrace,(Root, A68_FALSE),(Root, A68_FALSE,(YEVACTR_calltrace).nonlocals));
 /* line 166: */
 /* line 167: */
DKVACTR = PJJACTR_tracelevelflags() ;
if ( A_LB_GE(DKVACTR,ZEVACTR_tracealllevels) )
{ 
 /* line 169: */
 /* line 170: */
NIVACTR_evalnotrace(Root);
} 
else
{ 
EKVACTR.fn.fn_global = NIVACTR_evalnotrace;
EKVACTR.nonlocals = A68_NIL;
NWQACTR_evaluate = EKVACTR;
 /* line 171: */
NIVACTR_evalnotrace(Root);
 /* line 172: */
 /* line 173: */
FKVACTR.fn.fn_global = CKVACTR_evaltrace;
FKVACTR.nonlocals = A68_NIL;
NWQACTR_evaluate = FKVACTR;
} 
 /* line 174: */
 /* line 175: */
A_CALLPROC(YEVACTR_calltrace,(Root, A68_TRUE),(Root, A68_TRUE,(YEVACTR_calltrace).nonlocals));
} 
A_PROC_EXIT(evaltrace);
return;
} 
#undef NL

A68_VOID  HKVACTR_evaluatestack(A68_34 ** Valuestack)
{ 
A68_34 * IKVACTR_kcatseulav;
A_PROC_ENTRY(evaluatestack);
 /* line 185: */
 /* line 186: */
 /* line 187: */
if ( ((*(&((*Valuestack)->Rest)))==MKJACTR_nilvaluelist) )
{ 
 /* line 188: */
 /* line 189: */
A_CALLPROC(NWQACTR_evaluate,((&((*Valuestack)->Value))),((&((*Valuestack)->Value)),(NWQACTR_evaluate).nonlocals));
} 
else
{ 
IKVACTR_kcatseulav = ADQACTR_reversevaluelist((*Valuestack));
 /* line 190: */
for ( ;; )
{ 
 /* line 191: */
 /* line 192: */
if ( !(((*(&(IKVACTR_kcatseulav->Rest)))!=MKJACTR_nilvaluelist)) ) break;
A_CALLPROC(NWQACTR_evaluate,((&(IKVACTR_kcatseulav->Value))),((&(IKVACTR_kcatseulav->Value)),(NWQACTR_evaluate).nonlocals));
 /* line 193: */
 /* line 194: */
IKVACTR_kcatseulav = (*(&(IKVACTR_kcatseulav->Rest)));
}
 /* line 195: */
JXIACTR_warning(799);
 /* line 197: */
(*Valuestack) = IKVACTR_kcatseulav;
 /* line 198: */
 /* line 199: */
A_CALLPROC(NWQACTR_evaluate,((&((*Valuestack)->Value))),((&((*Valuestack)->Value)),(NWQACTR_evaluate).nonlocals));
} 
A_PROC_EXIT(evaluatestack);
return;
} 
#undef NL

A68_VOID  JKVACTR_initialiseevaluator(void)
{ 
A68_83  KKVACTR;  /* clause result */
A68_83  LKVACTR;  /* procedure value */
A68_83  MKVACTR;  /* procedure value */
A_PROC_ENTRY(initialiseevaluator);
if ( LJJACTR_traceon )
{ 
LKVACTR.fn.fn_global = CKVACTR_evaltrace;
LKVACTR.nonlocals = A68_NIL;
KKVACTR = LKVACTR;
} 
else
{ 
 /* line 204: */
MKVACTR.fn.fn_global = NIVACTR_evalnotrace;
MKVACTR.nonlocals = A68_NIL;
KKVACTR = MKVACTR;
} 
NWQACTR_evaluate = KKVACTR;
A_PROC_EXIT(initialiseevaluator);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void KEVACTR(void)   /* initialise DECS evaluator */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","-dir",".","evaluator.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","./moduletracer.m","./unionaids.m","./values.m","./incvalue.m","./modes.m","./incmode.m","./uniquenameserver.m","./coutput.m","./evalbase.m","./environment.m","./centities.m","./idtable.m","./operators.m","./adicops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_169  GFVACTR;  /* collateral clause result */
A68_31  HFVACTR;  /* procedure value */
A68_31  IFVACTR;  /* procedure value */
A68_31  JFVACTR;  /* procedure value */
A68_31  KFVACTR;  /* procedure value */
A68_31  RFVACTR;  /* procedure value */
A68_31  SFVACTR;  /* procedure value */
A68_31  TFVACTR;  /* procedure value */
A68_31  UFVACTR;  /* procedure value */
A68_31  CGVACTR;  /* procedure value */
A68_31  DGVACTR;  /* procedure value */
A68_31  EGVACTR;  /* procedure value */
A68_31  FGVACTR;  /* procedure value */
A68_31  MGVACTR;  /* procedure value */
A68_31  NGVACTR;  /* procedure value */
A68_31  OGVACTR;  /* procedure value */
A68_31  WGVACTR;  /* procedure value */
A68_31  XGVACTR;  /* procedure value */
A68_31  YGVACTR;  /* procedure value */
A68_31  ZGVACTR;  /* procedure value */
A68_31  AHVACTR;  /* procedure value */
A68_31  BHVACTR;  /* procedure value */
A68_31  CHVACTR;  /* procedure value */
A68_31  DHVACTR;  /* procedure value */
A68_31  EHVACTR;  /* procedure value */
A68_31  LHVACTR;  /* procedure value */
A68_31  MHVACTR;  /* procedure value */
A68_31  NHVACTR;  /* procedure value */
A68_31  OHVACTR;  /* procedure value */
A68_31  PHVACTR;  /* procedure value */
A68_31  QHVACTR;  /* procedure value */
A68_31  RHVACTR;  /* procedure value */
A68_31  SHVACTR;  /* procedure value */
A68_31  THVACTR;  /* procedure value */
A68_31  UHVACTR;  /* procedure value */
A68_31  VHVACTR;  /* procedure value */
A68_31  WHVACTR;  /* procedure value */
A68_31  XHVACTR;  /* procedure value */
A68_31  YHVACTR;  /* procedure value */
A68_31  ZHVACTR;  /* procedure value */
A68_31  AIVACTR;  /* procedure value */
A68_31  BIVACTR;  /* procedure value */
A68_31  CIVACTR;  /* procedure value */
A68_31  DIVACTR;  /* procedure value */
A68_31  EIVACTR;  /* procedure value */
A68_31  FIVACTR;  /* procedure value */
A68_31  GIVACTR;  /* procedure value */
A68_31  HIVACTR;  /* procedure value */
A68_31  IIVACTR;  /* procedure value */
A68_31  JIVACTR;  /* procedure value */
A68_163  KIVACTR;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCHACTR();   /* USE moduletracer */
HTQACTR();   /* USE unionaids */
ATPACTR();   /* USE values */
GKJACTR();   /* USE incvalue */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
RHMACTR();   /* USE uniquenameserver */
PTLACTR();   /* USE coutput */
IWQACTR();   /* USE evalbase */
HPIACTR();   /* USE environment */
THAACTR();   /* USE centities */
PPKACTR();   /* USE idtable */
DYQACTR();   /* USE operators */
SFTACTR();   /* USE adicops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/src/evaluator.a68";
A_config.translation_time = "Sun Apr 18 20:07:53 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "JEVACTR (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:53 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS evaluator);
UEAALIB_a68config(LGAALIB_configinfo, OEVACTR);
 /* line 46: */
 /* line 51: */
 /* line 53: */
 /* line 55: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
HFVACTR.fn.fn_global = ABRACTR_staticpartgenerator;
HFVACTR.nonlocals = A68_NIL;
GFVACTR.data[0] = HFVACTR;
 /* line 61: */
IFVACTR.fn.fn_global = CFVACTR_spareop;
IFVACTR.nonlocals = A68_NIL;
GFVACTR.data[1] = IFVACTR;
 /* line 62: */
JFVACTR.fn.fn_global = YBRACTR_selectop;
JFVACTR.nonlocals = A68_NIL;
GFVACTR.data[2] = JFVACTR;
 /* line 63: */
KFVACTR.fn.fn_global = WCRACTR_copytoflex;
KFVACTR.nonlocals = A68_NIL;
GFVACTR.data[3] = KFVACTR;
 /* line 65: */
RFVACTR.fn.fn_global = NFVACTR_anonymous;
RFVACTR.nonlocals = A68_NIL;
GFVACTR.data[4] = RFVACTR;
 /* line 66: */
SFVACTR.fn.fn_global = HERACTR_simpleindexop;
SFVACTR.nonlocals = A68_NIL;
GFVACTR.data[5] = SFVACTR;
 /* line 67: */
TFVACTR.fn.fn_global = FKRACTR_trimindexop;
TFVACTR.nonlocals = A68_NIL;
GFVACTR.data[6] = TFVACTR;
 /* line 68: */
UFVACTR.fn.fn_global = BPRACTR_dynamicgenerator;
UFVACTR.nonlocals = A68_NIL;
GFVACTR.data[7] = UFVACTR;
 /* line 70: */
CGVACTR.fn.fn_global = XFVACTR_anonymous;
CGVACTR.nonlocals = A68_NIL;
GFVACTR.data[8] = CGVACTR;
 /* line 71: */
DGVACTR.fn.fn_global = WDVACTR_dyadicsem;
DGVACTR.nonlocals = A68_NIL;
GFVACTR.data[9] = DGVACTR;
 /* line 72: */
EGVACTR.fn.fn_global = MZTACTR_monadicsem;
EGVACTR.nonlocals = A68_NIL;
GFVACTR.data[10] = EGVACTR;
 /* line 73: */
FGVACTR.fn.fn_global = VSRACTR_straighten;
FGVACTR.nonlocals = A68_NIL;
GFVACTR.data[11] = FGVACTR;
 /* line 75: */
MGVACTR.fn.fn_global = IGVACTR_anonymous;
MGVACTR.nonlocals = A68_NIL;
GFVACTR.data[12] = MGVACTR;
 /* line 76: */
NGVACTR.fn.fn_global = MRRACTR_straightindexop;
NGVACTR.nonlocals = A68_NIL;
GFVACTR.data[13] = NGVACTR;
 /* line 77: */
OGVACTR.fn.fn_global = UWRACTR_assignop;
OGVACTR.nonlocals = A68_NIL;
GFVACTR.data[14] = OGVACTR;
 /* line 79: */
WGVACTR.fn.fn_global = RGVACTR_anonymous;
WGVACTR.nonlocals = A68_NIL;
GFVACTR.data[15] = WGVACTR;
 /* line 80: */
XGVACTR.fn.fn_global = XYRACTR_derefop;
XGVACTR.nonlocals = A68_NIL;
GFVACTR.data[16] = XGVACTR;
 /* line 81: */
YGVACTR.fn.fn_global = YZRACTR_callop;
YGVACTR.nonlocals = A68_NIL;
GFVACTR.data[17] = YGVACTR;
 /* line 82: */
ZGVACTR.fn.fn_global = IGSACTR_voidop;
ZGVACTR.nonlocals = A68_NIL;
GFVACTR.data[18] = ZGVACTR;
 /* line 83: */
AHVACTR.fn.fn_global = SHSACTR_niltomodeop;
AHVACTR.nonlocals = A68_NIL;
GFVACTR.data[19] = AHVACTR;
 /* line 84: */
BHVACTR.fn.fn_global = IISACTR_gototoproc;
BHVACTR.nonlocals = A68_NIL;
GFVACTR.data[20] = BHVACTR;
 /* line 85: */
CHVACTR.fn.fn_global = VISACTR_gototomode;
CHVACTR.nonlocals = A68_NIL;
GFVACTR.data[21] = CHVACTR;
 /* line 86: */
DHVACTR.fn.fn_global = WKSACTR_realtocomplex;
DHVACTR.nonlocals = A68_NIL;
GFVACTR.data[22] = DHVACTR;
 /* line 87: */
EHVACTR.fn.fn_global = MKSACTR_inttoreal;
EHVACTR.nonlocals = A68_NIL;
GFVACTR.data[23] = EHVACTR;
 /* line 89: */
LHVACTR.fn.fn_global = HHVACTR_anonymous;
LHVACTR.nonlocals = A68_NIL;
GFVACTR.data[24] = LHVACTR;
 /* line 90: */
MHVACTR.fn.fn_global = OLSACTR_rowstorowrows;
MHVACTR.nonlocals = A68_NIL;
GFVACTR.data[25] = MHVACTR;
 /* line 91: */
NHVACTR.fn.fn_global = NMSACTR_vectortorow;
NHVACTR.nonlocals = A68_NIL;
GFVACTR.data[26] = NHVACTR;
 /* line 92: */
OHVACTR.fn.fn_global = YQSACTR_istructtovector;
OHVACTR.nonlocals = A68_NIL;
GFVACTR.data[27] = OHVACTR;
 /* line 93: */
PHVACTR.fn.fn_global = DNSACTR_modetostruct1mode;
PHVACTR.nonlocals = A68_NIL;
GFVACTR.data[28] = PHVACTR;
 /* line 94: */
QHVACTR.fn.fn_global = SNSACTR_unitesimple;
QHVACTR.nonlocals = A68_NIL;
GFVACTR.data[29] = QHVACTR;
 /* line 95: */
RHVACTR.fn.fn_global = JPSACTR_uniteunion;
RHVACTR.nonlocals = A68_NIL;
GFVACTR.data[30] = RHVACTR;
 /* line 96: */
SHVACTR.fn.fn_global = QSSACTR_istructtorow;
SHVACTR.nonlocals = A68_NIL;
GFVACTR.data[31] = SHVACTR;
 /* line 97: */
THVACTR.fn.fn_global = LWSACTR_skiptomode;
THVACTR.nonlocals = A68_NIL;
GFVACTR.data[32] = THVACTR;
 /* line 98: */
GFVACTR.data[33] = HWSACTR_scalartovector;
 /* line 99: */
GFVACTR.data[34] = FWSACTR_scalartorow;
 /* line 100: */
UHVACTR.fn.fn_global = TWSACTR_deunite;
UHVACTR.nonlocals = A68_NIL;
GFVACTR.data[35] = UHVACTR;
 /* line 101: */
VHVACTR.fn.fn_global = IXSACTR_bitstorowbool;
VHVACTR.nonlocals = A68_NIL;
GFVACTR.data[36] = VHVACTR;
 /* line 102: */
WHVACTR.fn.fn_global = OYSACTR_vacuum;
WHVACTR.nonlocals = A68_NIL;
GFVACTR.data[37] = WHVACTR;
 /* line 103: */
XHVACTR.fn.fn_global = BZSACTR_ytypetom;
XHVACTR.nonlocals = A68_NIL;
GFVACTR.data[38] = XHVACTR;
 /* line 104: */
YHVACTR.fn.fn_global = HZSACTR_mtoxtype;
YHVACTR.nonlocals = A68_NIL;
GFVACTR.data[39] = YHVACTR;
 /* line 105: */
ZHVACTR.fn.fn_global = CFVACTR_spareop;
ZHVACTR.nonlocals = A68_NIL;
GFVACTR.data[40] = ZHVACTR;
 /* line 106: */
AIVACTR.fn.fn_global = CFVACTR_spareop;
AIVACTR.nonlocals = A68_NIL;
GFVACTR.data[41] = AIVACTR;
 /* line 107: */
BIVACTR.fn.fn_global = CFVACTR_spareop;
BIVACTR.nonlocals = A68_NIL;
GFVACTR.data[42] = BIVACTR;
 /* line 108: */
CIVACTR.fn.fn_global = CFVACTR_spareop;
CIVACTR.nonlocals = A68_NIL;
GFVACTR.data[43] = CIVACTR;
 /* line 109: */
DIVACTR.fn.fn_global = CFVACTR_spareop;
DIVACTR.nonlocals = A68_NIL;
GFVACTR.data[44] = DIVACTR;
 /* line 110: */
EIVACTR.fn.fn_global = CFVACTR_spareop;
EIVACTR.nonlocals = A68_NIL;
GFVACTR.data[45] = EIVACTR;
 /* line 111: */
FIVACTR.fn.fn_global = CFVACTR_spareop;
FIVACTR.nonlocals = A68_NIL;
GFVACTR.data[46] = FIVACTR;
 /* line 112: */
GIVACTR.fn.fn_global = CFVACTR_spareop;
GIVACTR.nonlocals = A68_NIL;
GFVACTR.data[47] = GIVACTR;
 /* line 114: */
HIVACTR.fn.fn_global = CFVACTR_spareop;
HIVACTR.nonlocals = A68_NIL;
GFVACTR.data[48] = HIVACTR;
 /* line 116: */
IIVACTR.fn.fn_global = NZSACTR_staticgenerator;
IIVACTR.nonlocals = A68_NIL;
GFVACTR.data[49] = IIVACTR;
JIVACTR.fn.fn_global = REVACTR_unimplementedop;
JIVACTR.nonlocals = A68_NIL;
GFVACTR.data[50] = JIVACTR;
LIVACTR_opersemantics = A_HIS1ARR(KIVACTR,GFVACTR,A68_31 ,51);
 /* line 119: */
 /* line 163: */
 /* line 184: */
 /* line 201: */
 /* line 202: */
 /* line 207: */
A_PROC_EXIT(DECS evaluator);
} 
#undef NL
/* end of translation of evaluator.a68 */
