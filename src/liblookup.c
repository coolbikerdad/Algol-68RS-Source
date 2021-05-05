/* UNAME:MXKACTR */
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
struct A68t55 ;

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t55 ,struct A68t36 ),(struct A68t55 ,struct A68t36 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE55,MODE36) VOID */
struct A68t55{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t56 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,REF MODE56,BITS)  */
A_VECTOR(struct A68t58 ,A68t57);
typedef struct A68t57  A68_57 ;    /* VECTOR [] MODE58 */
struct A68t58{
struct A68t55  Msgno;
A68_VC  Text;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE55,REF MODE26)  */
struct A68t56{
A68_VC  Name;
struct A68t57  Messages;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(REF MODE26,REF MODE57)  */
struct A68t59{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t59  A68_59 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t60{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t61,(struct A68t60 ,struct A68t60 ),(struct A68t60 ,struct A68t60 ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE60,MODE60) BOOL */
struct A68t62{
struct A68t40  Access;
A_PAD_ISTRUCT(A68_40 ,PAD_4)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(MODE40)  */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t59 *,A68_VC *),(struct A68t59 *,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE59) MODE26 */

A_PROCEDURE(struct A68t59 *,A68t64,(A68_VC ,struct A68t62 ,struct A68t54 ),(A68_VC ,struct A68t62 ,struct A68t54 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE26,MODE62,MODE54) REF MODE59 */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t59 *,struct A68t54 ),(struct A68t59 *,struct A68t54 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE59,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t66,(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(REF MODE59,REF MODE26,REF INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t59 *,A68_VC ,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF MODE59,MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t59 *,A68_LINT ,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_LINT ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE59,LONG INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t59 *,A68_LINT *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_LINT *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE59,REF LONG INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t59 *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE59,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,struct A68t54 ,struct A68t60 *),(A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_VC ,struct A68t54 ,struct A68t60 *),(A68_VC ,A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,MODE26,MODE54) MODE60 */
struct A68t73{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_5)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_6)
A68_SINT  Device;
A_PAD_SINT(PAD_7)
A68_SINT  Links;
A_PAD_SINT(PAD_8)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_9)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_10)
A68_LINT  Size;
A_PAD_LINT(PAD_11)
A68_LINT  Accessed;
A_PAD_LINT(PAD_12)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_13)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_14)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t75 ;

A_PROCEDURE(struct A68t73 *,A68t74,(struct A68t75 ,struct A68t54 ),(struct A68t75 ,struct A68t54 ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE75,MODE54) REF MODE73 */
struct A68t75 { A68_INT mode; union {
struct A68t59 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t75  A68_75 ;    /* UNION(REF MODE59,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t76,(struct A68t59 *),(struct A68t59 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(REF MODE59) BOOL */

A_PROCEDURE(A68_BITS *,A68t77,(A68_VC ,struct A68t54 ),(A68_VC ,struct A68t54 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE26,MODE54) REF BITS */

A_PROCEDURE(A68_VOID ,A68t78,(A68_BITS *,struct A68t54 ),(A68_BITS *,struct A68t54 ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(REF BITS,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t79,(A68_BITS *,struct A68t54 ,A68_VC *),(A68_BITS *,struct A68t54 ,A68_VC *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF BITS,MODE54) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC *),(A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t82,(void),(void *));
typedef struct A68t82  A68_82 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t83,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ),(A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t85,(A68_VC ,struct A68t54 ),(A68_VC ,struct A68t54 ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE26,MODE54) INT */

A_PROCEDURE(A68_INT ,A68t86,(void),(void *));
typedef struct A68t86  A68_86 ;    /* PROC INT */
struct A68t87{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC ,A68_VC ,struct A68t54 ,struct A68t87 *),(A68_VC ,A68_VC ,struct A68t54 ,struct A68t87 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE26,MODE26,MODE54) MODE87 */

A_PROCEDURE(A68_VOID ,A68t89,(struct A68t36 *),(struct A68t36 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC MODE36 */

A_PROCEDURE(A68_VOID ,A68t90,(A68_VC ,struct A68t54 ,struct A68t36 *),(A68_VC ,struct A68t54 ,struct A68t36 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE26,MODE54) MODE36 */
struct A68t92 ;

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t92 ,struct A68t54 ,struct A68t54 ),(struct A68t92 ,struct A68t54 ,struct A68t54 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE92,MODE54,MODE54) VOID */
A_VECTOR(A68_INT ,A68t92);
typedef struct A68t92  A68_92 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t92 ,struct A68t54 ),(struct A68t92 ,struct A68t54 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE92,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(A68_INT ,struct A68t54 ,struct A68t54 *),(A68_INT ,struct A68t54 ,struct A68t54 *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(INT,MODE54) MODE54 */

A_PROCEDURE(A68_VOID ,A68t95,(void),(void *));
typedef struct A68t95  A68_95 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t96,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(BITS) VOID */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE98) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(A68_VC ),(A68_VC ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE26) VOID */
struct A68t99{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t99  A68_99 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t100,(A68_BOOL ,struct A68t99 *),(A68_BOOL ,struct A68t99 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(BOOL) MODE99 */
struct A68t102 ;

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t102 ,struct A68t54 ),(struct A68t102 ,struct A68t54 ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE102,MODE54) VOID */
A_VECTOR(struct A68t99 ,A68t102);
typedef struct A68t102  A68_102 ;    /* VECTOR [] MODE99 */
struct A68t103{
A68_INT  Rdenno;
A_PAD_INT(PAD_16)
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_INT  Nods;
A_PAD_INT(PAD_18)
A68_INT  Deflex;
A_PAD_INT(PAD_19)
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t105);
typedef struct A68t105  A68_105 ;    /* STRUCT 32 CHAR */
struct A68t104{
struct A68t105  N;
A_PAD_ISTRUCT(A68_105 ,PAD_20)
struct A68t105  F;
A_PAD_ISTRUCT(A68_105 ,PAD_21)
A68_INT  Level;
A_PAD_INT(PAD_22)
};
typedef struct A68t104  A68_104 ;    /* STRUCT(MODE105,MODE105,INT)  */
struct A68t106{
struct A68t105  Name;
A_PAD_ISTRUCT(A68_105 ,PAD_23)
A68_INT  Decno;
A_PAD_INT(PAD_24)
A68_INT  Level;
A_PAD_INT(PAD_25)
A68_INT  Mode;
A_PAD_INT(PAD_26)
A68_INT  Scope;
A_PAD_INT(PAD_27)
struct A68t106 * Rest;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(MODE105,INT,INT,INT,INT,REF MODE106)  */
struct A68t107{
A68_INT  Rdenno;
A_PAD_INT(PAD_28)
A68_INT  Imode;
A_PAD_INT(PAD_29)
A68_INT  Length;
A_PAD_INT(PAD_30)
A68_INT  Deflex;
A_PAD_INT(PAD_31)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t116{
A68_INT  Mode;
A_PAD_INT(PAD_32)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT)  */
struct A68t108 { A68_INT mode; union {
A68_INT  mode1;
struct A68t109 * mode2;
struct A68t110 * mode3;
struct A68t111 * mode4;
struct A68t107 * mode5;
struct A68t112 * mode6;
struct A68t113 * mode7;
struct A68t103 * mode8;
struct A68t114 * mode9;
struct A68t115 * mode10;
struct A68t116  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t108  A68_108 ;    /* UNION(INT,REF MODE109,REF MODE110,REF MODE111,REF MODE107,REF MODE112,REF MODE113,REF MODE103,REF MODE114,REF MODE115,MODE116)  */
struct A68t109{
A68_INT  Rdenno;
A_PAD_INT(PAD_33)
struct A68t120 * Modelist;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,REF MODE120)  */
struct A68t110{
A68_INT  Deproc;
A_PAD_INT(PAD_34)
struct A68t120 * Pars;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT,REF MODE120)  */
struct A68t111{
A68_INT  Rdenno;
A_PAD_INT(PAD_35)
A68_INT  Deflex;
A_PAD_INT(PAD_36)
struct A68t119 * Sels;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT,INT,REF MODE119)  */
struct A68t112{
A68_INT  Deproc;
A_PAD_INT(PAD_37)
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT)  */
struct A68t113{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
A68_INT  Vecmode;
A_PAD_INT(PAD_39)
A68_INT  Deflex;
A_PAD_INT(PAD_40)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,INT,INT)  */
struct A68t114{
A68_INT  Mode;
A_PAD_INT(PAD_41)
struct A68t118 * Stenlist;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,REF MODE118)  */
struct A68t115{
A68_INT  Mode;
A_PAD_INT(PAD_42)
A68_INT  Modeproc;
A_PAD_INT(PAD_43)
struct A68t117 * El;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,INT,REF MODE117)  */
struct A68t117{
struct A68t115 * Am;
struct A68t117 * Rest;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(REF MODE115,REF MODE117)  */
struct A68t118{
A68_INT  Mode;
A_PAD_INT(PAD_44)
A68_INT  Rdenno;
A_PAD_INT(PAD_45)
struct A68t118 * Rest;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,INT,REF MODE118)  */
struct A68t119{
A68_INT  Mode;
A_PAD_INT(PAD_46)
A68_INT  Fieldno;
A_PAD_INT(PAD_47)
struct A68t105  Name;
A_PAD_ISTRUCT(A68_105 ,PAD_48)
struct A68t119 * Rest;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT,MODE105,REF MODE119)  */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_49)
struct A68t120 * Rest;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,REF MODE120)  */
A_ISTRUCT(A68_CHAR ,7,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 7 CHAR */
A_VECTOR(struct A68t125 ,A68t124);
typedef struct A68t124  A68_124 ;    /* VECTOR [] MODE125 */
A_VECTOR(struct A68t104 ,A68t131);
typedef struct A68t131  A68_131 ;    /* VECTOR [] MODE104 */
struct A68t130 { A68_INT mode; union {
A68_VC  mode1;
struct A68t131  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t130  A68_130 ;    /* UNION(REF MODE26,REF MODE131)  */
struct A68t126{
struct A68t105  F;
A_PAD_ISTRUCT(A68_105 ,PAD_50)
A68_INT  No;
A_PAD_INT(PAD_51)
A68_INT  Nl;
A_PAD_INT(PAD_52)
A68_INT  Ng;
A_PAD_INT(PAD_53)
struct A68t130  U;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE105,INT,INT,INT,MODE130)  */
A_VECTOR(struct A68t129 ,A68t127);
typedef struct A68t127  A68_127 ;    /* VECTOR [] MODE129 */
struct A68t129{
struct A68t121  Prefix;
A_PAD_ISTRUCT(A68_121 ,PAD_54)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_55)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_56)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_57)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_58)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_59)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE121,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t121 ,A68t128);
typedef struct A68t128  A68_128 ;    /* VECTOR [] MODE121 */
struct A68t125{
struct A68t126  Xs;
struct A68t121  Ys;
A_PAD_ISTRUCT(A68_121 ,PAD_60)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_61)
struct A68t127  Keptinfo;
struct A68t128  Cnames;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(MODE126,MODE121,LONG INT,REF MODE127,REF MODE128)  */
struct A68t123{
struct A68t121  Uname;
A_PAD_ISTRUCT(A68_121 ,PAD_62)
struct A68t121  Lname;
A_PAD_ISTRUCT(A68_121 ,PAD_63)
struct A68t121  Gname;
A_PAD_ISTRUCT(A68_121 ,PAD_64)
struct A68t124  Specs;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(MODE121,MODE121,MODE121,REF MODE124)  */
struct A68t122{
struct A68t105  Name;
A_PAD_ISTRUCT(A68_105 ,PAD_65)
struct A68t123  Ym;
struct A68t105  Formal;
A_PAD_ISTRUCT(A68_105 ,PAD_66)
struct A68t121  Ys;
A_PAD_ISTRUCT(A68_121 ,PAD_67)
A68_INT  Level;
A_PAD_INT(PAD_68)
A68_INT  Ownlevel;
A_PAD_INT(PAD_69)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(MODE105,MODE123,MODE105,MODE121,INT,INT)  */
struct A68t132{
struct A68t105  Name;
A_PAD_ISTRUCT(A68_105 ,PAD_70)
struct A68t104  L;
struct A68t104  G;
A68_INT  Type;
A_PAD_INT(PAD_71)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(MODE105,MODE104,MODE104,INT)  */
struct A68t133{
A68_INT  Norden;
A_PAD_INT(PAD_72)
A68_INT  Nomodes;
A_PAD_INT(PAD_73)
A68_INT  Nolabs;
A_PAD_INT(PAD_74)
A68_INT  Nodecnos;
A_PAD_INT(PAD_75)
A68_INT  Nomodules;
A_PAD_INT(PAD_76)
A68_INT  Nolibinds;
A_PAD_INT(PAD_77)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t134{
A68_INT  Type;
A_PAD_INT(PAD_78)
A68_INT  Moduleno;
A_PAD_INT(PAD_79)
struct A68t105  Name;
A_PAD_ISTRUCT(A68_105 ,PAD_80)
struct A68t123  Ym;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,MODE105,MODE123)  */
struct A68t135{
struct A68t132  Xmi;
struct A68t123  Ym;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE132,MODE123)  */
struct A68t136{
struct A68t126  Xs;
struct A68t121  Ys;
A_PAD_ISTRUCT(A68_121 ,PAD_81)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(MODE126,MODE121)  */

A_PROCEDURE(A68_VOID ,A68t137,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT) REF MODE26 */
struct A68t141 ;

A_PROCEDURE(A68_VOID ,A68t140,(A68_INT ,struct A68t141 ),(A68_INT ,struct A68t141 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT,MODE141) VOID */
A_ROW(A68_VC ,A68t141,1);
typedef struct A68t141  A68_141 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t142,(void),(void *));
typedef struct A68t142  A68_142 ;    /* PROC BITS */
struct A68t143{
A68_INT  Cfile;
A_PAD_INT(PAD_82)
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT)  */
struct A68t144{
A68_INT  Seedfile;
A_PAD_INT(PAD_83)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT)  */
struct A68t145 { A68_INT mode; union {
struct A68t143  mode1;
struct A68t144  mode2;
struct A68t121  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t145  A68_145 ;    /* UNION(MODE143,MODE144,MODE121,VOID)  */
A_ROW(A68_BOOL ,A68t146,1);
typedef struct A68t146  A68_146 ;    /* [] BOOL */
struct A68t147{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_84)
A68_VC  Sourcefile;
struct A68t121  Nameseed;
A_PAD_ISTRUCT(A68_121 ,PAD_85)
struct A68t145  Nameseedorigin;
struct A68t148 * Used_modules;
A68_VC  Commandline;
struct A68t149 * Environment;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE121,MODE145,REF MODE148,REF MODE26,REF MODE149)  */
struct A68t148{
A68_VC  Modinfo_file;
struct A68t148 * Next;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(REF MODE26,REF MODE148)  */
struct A68t149{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t149 * Next;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE149)  */
struct A68t151 ;

A_PROCEDURE(struct A68t59 *,A68t150,(A68_VC ,struct A68t151 *,A68_VC *),(A68_VC ,struct A68t151 *,A68_VC *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE26,REF MODE151,REF REF MODE26) REF MODE59 */
struct A68t151{
A68_VC  Dir;
struct A68t151 * Next;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(REF MODE26,REF MODE151)  */

A_PROCEDURE(A68_BOOL ,A68t152,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t153,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t154,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE95) VOID */

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 59 CHAR */
struct A68t157{
A68_VC  Symbol;
struct A68t105 * Module;
struct A68t157 * Next;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(REF MODE26,REF MODE105,REF MODE157)  */

A_PROCEDURE(A68_VOID ,A68t158,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t162,(A68_VC ,struct A68t158 ),(A68_VC ,struct A68t158 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE26,MODE158) VOID */
A_ISTRUCT(A68_CHAR ,16,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 17 CHAR */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,struct A68t105 *),(A68_VC ,struct A68t105 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,REF MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t105 ,struct A68t59 *,A68_BOOL ,struct A68t135 *),(struct A68t105 ,struct A68t59 *,A68_BOOL ,struct A68t135 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE105,REF MODE59,BOOL) MODE135 */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t174 ),(struct A68t174 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE174) VOID */
A_ISTRUCT(A68_CHAR ,27,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t157 *),(struct A68t157 *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REF MODE157) VOID */
A_ISTRUCT(A68_CHAR ,18,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(struct A68t105 ,A68t180,(struct A68t105 ,struct A68t157 *),(struct A68t105 ,struct A68t157 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE105,REF MODE157) MODE105 */

A_PROCEDURE(struct A68t105 ,A68t181,(struct A68t105 ,A68_INT ,struct A68t174 ),(struct A68t105 ,A68_INT ,struct A68t174 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE105,INT,MODE174) MODE105 */

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


/* --- Imports from incinstallation --- */
#define XDAACTR_maxchar 256
/* --- End of imports from incinstallation --- */


/* --- Imports from environment --- */
extern A68_VOID  VWIACTR_pwarning(A68_INT ,struct A68t141 );
extern A68_98  MSIACTR_list;
extern A68_59 * BJJACTR_find_and_open_file(A68_VC ,struct A68t151 *,A68_VC *);
extern A68_151 * FRIACTR_library_directory;
extern A68_151 * CRIACTR_nil_dirlist;
/* --- End of imports from environment --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_54  RIBAOSF_ignore_msg;
extern A68_59 * SSBAOSF_nil_file;
extern A68_BITS * SRBAOSF_null_dirptr;
extern A68_BITS * NBCAOSF_open_directory(A68_VC ,struct A68t54 );
extern A68_VOID  WBCAOSF_close_directory(A68_BITS *,struct A68t54 );
extern A68_VOID  CCCAOSF_get_next_dir_entry(A68_BITS *,struct A68t54 ,A68_VC *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc = argc; A_argv = argv; A_envp = envp

#define DHCAOSF_prelude A_prelude
#include <signal.h>

#define WKCAOSF_sighup SIGHUP
/**/

#define XKCAOSF_sigint SIGINT
/**/

#define YKCAOSF_sigquit SIGQUIT
/**/

#define ZKCAOSF_sigill SIGILL
/**/

#define ALCAOSF_sigtrap SIGTRAP
/**/

#define BLCAOSF_sigabrt SIGABRT
/**/

#define CLCAOSF_sigbus SIGBUS
/**/

#define DLCAOSF_sigfpe SIGFPE
/**/

#define ELCAOSF_sigkill SIGKILL
/**/

#define FLCAOSF_sigusr1 SIGUSR1
/**/

#define GLCAOSF_sigsegv SIGSEGV
/**/

#define HLCAOSF_sigusr2 SIGUSR2
/**/

#define ILCAOSF_sigpipe SIGPIPE
/**/

#define JLCAOSF_sigalrm SIGALRM
/**/

#define KLCAOSF_sigterm SIGTERM
#if !defined(SIGSTKFLT)
#define SIGSTKFLT 32
#endif
/**/

#define LLCAOSF_sigstkflt SIGSTKFLT
/**/

#define MLCAOSF_sigchld SIGCHLD
/**/

#define NLCAOSF_sigcont SIGCONT
/**/

#define OLCAOSF_sigstop SIGSTOP
/**/

#define PLCAOSF_sigtstp SIGTSTP
/**/

#define QLCAOSF_sigttin SIGTTIN
/**/

#define RLCAOSF_sigttou SIGTTOU
/**/

#define SLCAOSF_sigurg SIGURG
/**/

#define TLCAOSF_sigxcpu SIGXCPU
/**/

#define ULCAOSF_sigxfsz SIGXFSZ
/**/

#define VLCAOSF_sigvtalrm SIGVTALRM
/**/

#define WLCAOSF_sigprof SIGPROF
/**/

#define XLCAOSF_sigwinch SIGWINCH
/**/

#define YLCAOSF_sigio SIGIO
#if !defined(SIGPWR)
#define SIGPWR 33
#endif
/**/

#define ZLCAOSF_sigpwr SIGPWR
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <algol68/Alibrary.h>

#define BOBAOSF_alwayscollect A_ALWAYS_COLLECT
#include <algol68/Alibrary.h>

#define COBAOSF_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include <algol68/Alibrary.h>

#define DOBAOSF_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osif --- */


/* --- Imports from usefulops --- */
extern A68_VOID  BNAAOSF_before(A68_VC ,A68_CHAR ,A68_VC *);
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_VOID  WRAAOSF_xc(A68_INT ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BCHACTR(void);   /* moduletracer */
extern void ODAACTR(void);   /* incinstallation */
extern void HPIACTR(void);   /* environment */
extern void CSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_156   QXKACTR = {"$Id: liblookup.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,RXKACTR,QXKACTR,59)
#define SXKACTR_nilmap (A68_157 *)A68_NIL
static A68_105   TXKACTR = {"                                "}; 
static A68_105  UXKACTR_nullid;
static A68_157 * VXKACTR_idtable;
static A68_157 * WXKACTR_compoundtable;
static A68_157 * XXKACTR_boldtable;
static A68_159   BYKACTR = {"liblookup"}; 
A_GISVEC(A68_VC ,CYKACTR,BYKACTR,9)
static A68_160   DYKACTR = {"LIBLOOKUP("}; 
static A68_161   EYKACTR = {"): "}; 
A_GISVEC(A68_VC ,FYKACTR,DYKACTR,10)
A_GISVEC(A68_VC ,HYKACTR,EYKACTR,3)
static A68_163   SYKACTR = {"Decoded spec is:"}; 
A_GISVEC(A68_VC ,TYKACTR,SYKACTR,16)
static A68_164   FZKACTR = {"IDENTIFIER: \""}; 
static A68_121   GZKACTR = {"\" mode="}; 
A_GISVEC(A68_VC ,HZKACTR,FZKACTR,13)
A_GISVEC(A68_VC ,IZKACTR,GZKACTR,7)
static A68_165   XZKACTR = {"BIVAL: \""}; 
static A68_121   YZKACTR = {"\" mode="}; 
static A68_121   ZZKACTR = {" bival="}; 
A_GISVEC(A68_VC ,AALACTR,XZKACTR,8)
A_GISVEC(A68_VC ,BALACTR,YZKACTR,7)
A_GISVEC(A68_VC ,DALACTR,ZZKACTR,7)
static A68_163   OALACTR = {" has gen routine"}; 
A_GISVEC(A68_VC ,QALACTR,OALACTR,16)
static A68_166   RALACTR = {" no gen routine"}; 
A_GISVEC(A68_VC ,SALACTR,RALACTR,15)
static A68_167   UALACTR = {"modename: \""}; 
static A68_121   VALACTR = {"\" mode="}; 
A_GISVEC(A68_VC ,WALACTR,UALACTR,11)
A_GISVEC(A68_VC ,XALACTR,VALACTR,7)
static A68_167   RBLACTR = {"OPERATOR: \""}; 
static A68_121   SBLACTR = {"\" prio="}; 
static A68_168   TBLACTR = {" lhs="}; 
static A68_168   UBLACTR = {" rhs="}; 
static A68_168   VBLACTR = {" res="}; 
A_GISVEC(A68_VC ,WBLACTR,RBLACTR,11)
A_GISVEC(A68_VC ,XBLACTR,SBLACTR,7)
A_GISVEC(A68_VC ,ZBLACTR,TBLACTR,5)
A_GISVEC(A68_VC ,BCLACTR,UBLACTR,5)
A_GISVEC(A68_VC ,DCLACTR,VBLACTR,5)
static A68_121   BDLACTR = {"BIOP: \""}; 
static A68_121   CDLACTR = {"\" prio="}; 
static A68_168   DDLACTR = {" lhs="}; 
static A68_168   EDLACTR = {" rhs="}; 
static A68_168   FDLACTR = {" res="}; 
static A68_169   GDLACTR = {" biop="}; 
A_GISVEC(A68_VC ,HDLACTR,BDLACTR,7)
A_GISVEC(A68_VC ,IDLACTR,CDLACTR,7)
A_GISVEC(A68_VC ,KDLACTR,DDLACTR,5)
A_GISVEC(A68_VC ,MDLACTR,EDLACTR,5)
A_GISVEC(A68_VC ,ODLACTR,FDLACTR,5)
A_GISVEC(A68_VC ,QDLACTR,GDLACTR,6)
static A68_167   AELACTR = {"proc: mode="}; 
static A68_168   BELACTR = {" res="}; 
A_GISVEC(A68_VC ,CELACTR,AELACTR,11)
A_GISVEC(A68_VC ,EELACTR,BELACTR,5)
static A68_170   PELACTR = {"procp: mode="}; 
static A68_168   QELACTR = {" res="}; 
static A68_165   RELACTR = {" params="}; 
A_GISVEC(A68_VC ,SELACTR,PELACTR,12)
A_GISVEC(A68_VC ,UELACTR,QELACTR,5)
A_GISVEC(A68_VC ,WELACTR,RELACTR,8)
static A68_170   DFLACTR = {"union: mode="}; 
static A68_165   EFLACTR = {" nmodes="}; 
A_GISVEC(A68_VC ,FFLACTR,DFLACTR,12)
A_GISVEC(A68_VC ,HFLACTR,EFLACTR,8)
static A68_164   QFLACTR = {"struct: mode="}; 
static A68_159   RFLACTR = {" nfields="}; 
A_GISVEC(A68_VC ,SFLACTR,QFLACTR,13)
A_GISVEC(A68_VC ,UFLACTR,RFLACTR,9)
static A68_171   IGLACTR = {"istruct: mode="}; 
static A68_160   JGLACTR = {" elemmode="}; 
static A68_159   KGLACTR = {" noelems="}; 
A_GISVEC(A68_VC ,LGLACTR,IGLACTR,14)
A_GISVEC(A68_VC ,NGLACTR,JGLACTR,10)
A_GISVEC(A68_VC ,PGLACTR,KGLACTR,9)
static A68_159   ZGLACTR = {"non-flex "}; 
A_GISVEC(A68_VC ,BHLACTR,ZGLACTR,9)
static A68_168   CHLACTR = {"flex "}; 
A_GISVEC(A68_VC ,DHLACTR,CHLACTR,5)
static A68_164   FHLACTR = {"vector: mode="}; 
static A68_160   GHLACTR = {" elemmode="}; 
A_GISVEC(A68_VC ,HHLACTR,FHLACTR,13)
A_GISVEC(A68_VC ,JHLACTR,GHLACTR,10)
static A68_159   UHLACTR = {"non-flex "}; 
A_GISVEC(A68_VC ,WHLACTR,UHLACTR,9)
static A68_168   XHLACTR = {"flex "}; 
A_GISVEC(A68_VC ,YHLACTR,XHLACTR,5)
static A68_170   AILACTR = {"array: mode="}; 
static A68_160   BILACTR = {" elemmode="}; 
static A68_169   CILACTR = {" dims="}; 
A_GISVEC(A68_VC ,DILACTR,AILACTR,12)
A_GISVEC(A68_VC ,FILACTR,BILACTR,10)
A_GISVEC(A68_VC ,HILACTR,CILACTR,6)
static A68_166   RILACTR = {"straight: mode="}; 
static A68_160   SILACTR = {" elemmode="}; 
A_GISVEC(A68_VC ,TILACTR,RILACTR,15)
A_GISVEC(A68_VC ,VILACTR,SILACTR,10)
static A68_172   XILACTR = {"   invalid type: "}; 
A_GISVEC(A68_VC ,YILACTR,XILACTR,17)
static A68_164   DJLACTR = {"process spec("}; 
A_GISVEC(A68_VC ,EJLACTR,DJLACTR,13)
static A68_BOOL  QLLACTR_initialised;
static A68_176   WLLACTR = {"Initialising library lookup"}; 
A_GISVEC(A68_VC ,XLLACTR,WLLACTR,27)
static A68_166   DMLACTR = {"add_lib_module("}; 
A_GISVEC(A68_VC ,EMLACTR,DMLACTR,15)
static A68_177   HNLACTR = {".m"}; 
A_GISVEC(A68_VC ,JNLACTR,HNLACTR,2)
static A68_159   KNLACTR = {"liblookup"}; 
A_GISVEC(A68_VC ,LNLACTR,KNLACTR,9)
static A68_168   QNLACTR = {" --> "}; 
A_GISVEC(A68_VC ,RNLACTR,QNLACTR,5)
static A68_170   VNLACTR = {"id table is:"}; 
A_GISVEC(A68_VC ,WNLACTR,VNLACTR,12)
static A68_179   XNLACTR = {"compound table is:"}; 
A_GISVEC(A68_VC ,YNLACTR,XNLACTR,18)
static A68_171   ZNLACTR = {"bold table is:"}; 
A_GISVEC(A68_VC ,AOLACTR,ZNLACTR,14)
static A68_167   KOLACTR = {"looking up "}; 
A_GISVEC(A68_VC ,LOLACTR,KOLACTR,11)
static A68_160   NOLACTR = {" not found"}; 
A_GISVEC(A68_VC ,OOLACTR,NOLACTR,10)
static A68_160   QOLACTR = {" found in "}; 
A_GISVEC(A68_VC ,ROLACTR,QOLACTR,10)
typedef struct   /* env of non-global proc */
{
A68_174  Unpackmodinfo;
} CMLACTR_add_lib_module;

A_STATIC A68_VOID  AYKACTR_debugmessage(A68_INT  Level, A68_VC  M);

A_STATIC A68_INT  JYKACTR_vtoi(A68_VC  V);

A68_VOID  QYKACTR_decodespec(A68_VC  Spec, A68_158  Debugmessage);

A_STATIC A68_VOID  CJLACTR_processspec(A68_VC  Spec, A68_105 * Currentmodule);

A_STATIC A68_VOID  SLLACTR_init_liblookup(A68_174  Unpackmodinfo);

A_STATIC A68_VOID  BMLACTR_add_lib_module(A68_VC  Filename, void *NonLocals);

A_STATIC A68_VOID  ONLACTR_printmap(A68_157 * Map);

A_STATIC A68_105  DOLACTR_lookup_in_table(A68_105  Id, A68_157 * Map);

A68_105  YOLACTR_lookup_library(A68_105  Id, A68_INT  Type, A68_174  Unpackmodinfo);

A_STATIC A68_VOID  BMLACTR_add_lib_module(A68_VC  Filename, void *NonLocals)
#define NL(x) (((CMLACTR_add_lib_module *)NonLocals)->x)
{ 
A68_VC  FMLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GMLACTR_fullname;
A68_59 * HMLACTR_f;
A68_BOOL  IMLACTR;  /* clause result */
A68_141  JMLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_105  KMLACTR_currentmodule;
A68_VC  LMLACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MMLACTR;  /* OPERATORS - trim index */
A68_VC  NMLACTR;  /* OPERATORS - trim index */
A68_VC  OMLACTR;  /* OPERATORS - trim index */
A68_VC  PMLACTR;  /* YIELD */
A68_VC  QMLACTR;  /* OPERATORS - assign op */
A68_135  RMLACTR;  /* avoid structure result */
A68_135  SMLACTR_ymodinfo;
A68_BOOL  TMLACTR;  /* clause result */
A68_124  UMLACTR;  /* OPERATORS - simple index */
A68_INT  VMLACTR;  /* YIELD */
A68_130  WMLACTR;  /* united object - for case conformity */
A68_VC  XMLACTR_s;
A68_VC  YMLACTR;  /* clause result */
A68_VC  ZMLACTR_spec;
A68_105 * ANLACTR;  /* YIELD */
A_PROC_ENTRY(add_lib_module);
 /* line 338: */
 /* line 339: */
{ 
 /* line 313: */
AYKACTR_debugmessage(5, A_VC_PLUS(A_VC_PLUS(EMLACTR,Filename),A_HVEC(FMLACTR,')',A68_CHAR )));
 /* line 340: */
 /* line 341: */
HMLACTR_f = BJJACTR_find_and_open_file(Filename, FRIACTR_library_directory, (&GMLACTR_fullname));
 /* line 342: */
 /* line 343: */
 /* line 344: */
IMLACTR = (HMLACTR_f==SSBAOSF_nil_file);
if ( IMLACTR )
{ 
 /* line 345: */
 /* line 346: */
VWIACTR_pwarning(817, A_HARR(JMLACTR,GMLACTR_fullname,A68_VC ));
} 
else
{ 
{ 
KMLACTR_currentmodule = UXKACTR_nullid;
 /* line 347: */
MMLACTR = A_ISVEC(LMLACTR,(&KMLACTR_currentmodule),32,A68_CHAR ) ;
PMLACTR = A_VTRIM(NMLACTR,(MMLACTR),A_VTSCRIPT(&(NMLACTR.upb),(MMLACTR).upb,1,(Filename.upb-2))) ;
QMLACTR = A_VTRIM(OMLACTR,(Filename),A_VTSCRIPT(&(OMLACTR.upb),(Filename).upb,1,(Filename.upb-2))) ;
A_VASSIGN2(QMLACTR,PMLACTR,A68_CHAR );
 /* line 348: */
A_CALLPROC(NL(Unpackmodinfo),(KMLACTR_currentmodule, HMLACTR_f, A68_TRUE, &RMLACTR),(KMLACTR_currentmodule, HMLACTR_f, A68_TRUE, &RMLACTR,(NL(Unpackmodinfo)).nonlocals));
SMLACTR_ymodinfo = RMLACTR;
 /* line 349: */
 /* line 350: */
 /* line 351: */
TMLACTR = (SMLACTR_ymodinfo.Ym.Specs.upb==1);
if ( TMLACTR )
{ 
UMLACTR = SMLACTR_ymodinfo.Ym.Specs ;
VMLACTR = 1 ;
WMLACTR = (*(&((&((&A_VINDEX(UMLACTR,VMLACTR))->Xs))->U))) ;
switch ( WMLACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
XMLACTR_s = (WMLACTR.data.mode1);
YMLACTR = XMLACTR_s;
break;
default: 
A_IMP_SKIP ;
break;
} 
ZMLACTR_spec = YMLACTR;
 /* line 352: */
 /* line 356: */
ANLACTR = A_HEAP(A68_105 ) ;
(*ANLACTR) = KMLACTR_currentmodule ;
CJLACTR_processspec(ZMLACTR_spec, ANLACTR);
} 
} 
} 
} 
A_PROC_EXIT(add_lib_module);
return;
} 
#undef NL

A_STATIC A68_VOID  ONLACTR_printmap(A68_157 * Map)
{ 
A68_157 * PNLACTR_current;
A68_VC  SNLACTR;  /* OPERATORS - istruct -> vector */
A68_105  TNLACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UNLACTR;  /* avoid structure result */
A_PROC_ENTRY(printmap);
 /* line 375: */
 /* line 376: */
{ 
PNLACTR_current = Map;
 /* line 377: */
for ( ;; )
{ 
 /* line 378: */
 /* line 379: */
if ( !((PNLACTR_current!=(A68_157 *)A68_NIL)) ) break;
TNLACTR = (*(*(&(PNLACTR_current->Module)))) ;
BNAAOSF_before( A_HISVEC(SNLACTR,TNLACTR,32,A68_CHAR ), ' ', &UNLACTR );
AYKACTR_debugmessage(10, A_VC_PLUS(A_VC_PLUS((*(&(PNLACTR_current->Symbol))),RNLACTR),UNLACTR));
 /* line 380: */
 /* line 381: */
PNLACTR_current = (*(&(PNLACTR_current->Next)));
}
 /* line 382: */
} 
A_PROC_EXIT(printmap);
return;
} 
#undef NL

A_STATIC A68_VOID  AYKACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  GYKACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 70: */
 /* line 71: */
if ( (ZCHACTR_tracelevel(CYKACTR)>=Level) )
{ 
 /* line 72: */
ROAAOSF_whole( Level, 0, &GYKACTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FYKACTR,GYKACTR),HYKACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FYKACTR,GYKACTR),HYKACTR),M),(MSIACTR_list).nonlocals));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A_STATIC A68_INT  JYKACTR_vtoi(A68_VC  V)
{ 
A68_INT  KYKACTR_res;
A68_INT  LYKACTR_i;
A68_INT  MYKACTR;  /* to part of loop */
A68_INT  NYKACTR;  /* clause result */
A_PROC_ENTRY(vtoi);
 /* line 80: */
 /* line 81: */
{ 
KYKACTR_res = 0;
 /* line 82: */
 /* line 83: */
MYKACTR = V.upb;
for ( LYKACTR_i = 1;
LYKACTR_i <= MYKACTR;
LYKACTR_i += 1 )
{ 
 /* line 84: */
 /* line 85: */
KYKACTR_res = ((XDAACTR_maxchar*KYKACTR_res)+(A68_INT)(unsigned char)A_VINDEX(V,LYKACTR_i));
}
 /* line 86: */
 /* line 87: */
NYKACTR = KYKACTR_res;
} 
A_PROC_EXIT(vtoi);
return( NYKACTR );
} 
#undef NL

A68_VOID  QYKACTR_decodespec(A68_VC  Spec, A68_158  Debugmessage)
{ 
A68_INT  RYKACTR_index;
A68_INT  UYKACTR_type;
A68_INT  VYKACTR;  /* clause result */
A68_INT  WYKACTR_namelength;
A68_VC  XYKACTR;  /* OPERATORS - trim index */
A68_VC  YYKACTR;  /* OPERATORS - trim index */
A68_VC  ZYKACTR;  /* OPERATORS - trim index */
A68_VC  AZKACTR_name;
A68_VC  BZKACTR;  /* OPERATORS - trim index */
A68_VC  CZKACTR;  /* OPERATORS - trim index */
A68_VC  DZKACTR;  /* OPERATORS - trim index */
A68_INT  EZKACTR_mode;
A68_VC  JZKACTR;  /* avoid structure result */
A68_INT  KZKACTR_namelength;
A68_VC  LZKACTR;  /* OPERATORS - trim index */
A68_VC  MZKACTR;  /* OPERATORS - trim index */
A68_VC  NZKACTR;  /* OPERATORS - trim index */
A68_VC  OZKACTR_name;
A68_VC  PZKACTR;  /* OPERATORS - trim index */
A68_VC  QZKACTR;  /* OPERATORS - trim index */
A68_VC  RZKACTR;  /* OPERATORS - trim index */
A68_INT  SZKACTR_bival;
A68_VC  TZKACTR;  /* OPERATORS - trim index */
A68_VC  UZKACTR;  /* OPERATORS - trim index */
A68_VC  VZKACTR;  /* OPERATORS - trim index */
A68_INT  WZKACTR_mode;
A68_VC  CALACTR;  /* avoid structure result */
A68_VC  EALACTR;  /* avoid structure result */
A68_INT  FALACTR_namelength;
A68_VC  GALACTR;  /* OPERATORS - trim index */
A68_VC  HALACTR;  /* OPERATORS - trim index */
A68_VC  IALACTR;  /* OPERATORS - trim index */
A68_VC  JALACTR_name;
A68_VC  KALACTR;  /* OPERATORS - trim index */
A68_VC  LALACTR;  /* OPERATORS - trim index */
A68_VC  MALACTR;  /* OPERATORS - trim index */
A68_INT  NALACTR_mode;
A68_VC  PALACTR;  /* clause result */
A68_VC  TALACTR_gen;
A68_VC  YALACTR;  /* avoid structure result */
A68_INT  ZALACTR_namelength;
A68_VC  ABLACTR;  /* OPERATORS - trim index */
A68_VC  BBLACTR;  /* OPERATORS - trim index */
A68_VC  CBLACTR;  /* OPERATORS - trim index */
A68_VC  DBLACTR_name;
A68_INT  EBLACTR_prio;
A68_VC  FBLACTR;  /* OPERATORS - trim index */
A68_VC  GBLACTR;  /* OPERATORS - trim index */
A68_VC  HBLACTR;  /* OPERATORS - trim index */
A68_INT  IBLACTR_lhsmode;
A68_VC  JBLACTR;  /* OPERATORS - trim index */
A68_VC  KBLACTR;  /* OPERATORS - trim index */
A68_VC  LBLACTR;  /* OPERATORS - trim index */
A68_INT  MBLACTR_rhsmode;
A68_VC  NBLACTR;  /* OPERATORS - trim index */
A68_VC  OBLACTR;  /* OPERATORS - trim index */
A68_VC  PBLACTR;  /* OPERATORS - trim index */
A68_INT  QBLACTR_resmode;
A68_VC  YBLACTR;  /* avoid structure result */
A68_VC  ACLACTR;  /* avoid structure result */
A68_VC  CCLACTR;  /* avoid structure result */
A68_VC  ECLACTR;  /* avoid structure result */
A68_INT  FCLACTR_namelength;
A68_VC  GCLACTR;  /* OPERATORS - trim index */
A68_VC  HCLACTR;  /* OPERATORS - trim index */
A68_VC  ICLACTR;  /* OPERATORS - trim index */
A68_VC  JCLACTR_name;
A68_INT  KCLACTR_prio;
A68_VC  LCLACTR;  /* OPERATORS - trim index */
A68_VC  MCLACTR;  /* OPERATORS - trim index */
A68_VC  NCLACTR;  /* OPERATORS - trim index */
A68_INT  OCLACTR_lhsmode;
A68_VC  PCLACTR;  /* OPERATORS - trim index */
A68_VC  QCLACTR;  /* OPERATORS - trim index */
A68_VC  RCLACTR;  /* OPERATORS - trim index */
A68_INT  SCLACTR_rhsmode;
A68_VC  TCLACTR;  /* OPERATORS - trim index */
A68_VC  UCLACTR;  /* OPERATORS - trim index */
A68_VC  VCLACTR;  /* OPERATORS - trim index */
A68_INT  WCLACTR_resmode;
A68_VC  XCLACTR;  /* OPERATORS - trim index */
A68_VC  YCLACTR;  /* OPERATORS - trim index */
A68_VC  ZCLACTR;  /* OPERATORS - trim index */
A68_INT  ADLACTR_biop;
A68_VC  JDLACTR;  /* avoid structure result */
A68_VC  LDLACTR;  /* avoid structure result */
A68_VC  NDLACTR;  /* avoid structure result */
A68_VC  PDLACTR;  /* avoid structure result */
A68_VC  RDLACTR;  /* avoid structure result */
A68_VC  SDLACTR;  /* OPERATORS - trim index */
A68_VC  TDLACTR;  /* OPERATORS - trim index */
A68_VC  UDLACTR;  /* OPERATORS - trim index */
A68_INT  VDLACTR_mode;
A68_VC  WDLACTR;  /* OPERATORS - trim index */
A68_VC  XDLACTR;  /* OPERATORS - trim index */
A68_VC  YDLACTR;  /* OPERATORS - trim index */
A68_INT  ZDLACTR_res;
A68_VC  DELACTR;  /* avoid structure result */
A68_VC  FELACTR;  /* avoid structure result */
A68_VC  GELACTR;  /* OPERATORS - trim index */
A68_VC  HELACTR;  /* OPERATORS - trim index */
A68_VC  IELACTR;  /* OPERATORS - trim index */
A68_INT  JELACTR_mode;
A68_VC  KELACTR;  /* OPERATORS - trim index */
A68_VC  LELACTR;  /* OPERATORS - trim index */
A68_VC  MELACTR;  /* OPERATORS - trim index */
A68_INT  NELACTR_res;
A68_INT  OELACTR_params;
A68_VC  TELACTR;  /* avoid structure result */
A68_VC  VELACTR;  /* avoid structure result */
A68_VC  XELACTR;  /* avoid structure result */
A68_VC  YELACTR;  /* OPERATORS - trim index */
A68_VC  ZELACTR;  /* OPERATORS - trim index */
A68_VC  AFLACTR;  /* OPERATORS - trim index */
A68_INT  BFLACTR_mode;
A68_INT  CFLACTR_nmodes;
A68_VC  GFLACTR;  /* avoid structure result */
A68_VC  IFLACTR;  /* avoid structure result */
A68_VC  JFLACTR;  /* OPERATORS - trim index */
A68_VC  KFLACTR;  /* OPERATORS - trim index */
A68_VC  LFLACTR;  /* OPERATORS - trim index */
A68_INT  MFLACTR_mode;
A68_INT  NFLACTR_nfields;
A68_INT  OFLACTR;  /* to part of loop */
A68_INT  PFLACTR;  /* loop control */
A68_VC  TFLACTR;  /* avoid structure result */
A68_VC  VFLACTR;  /* avoid structure result */
A68_VC  WFLACTR;  /* OPERATORS - trim index */
A68_VC  XFLACTR;  /* OPERATORS - trim index */
A68_VC  YFLACTR;  /* OPERATORS - trim index */
A68_INT  ZFLACTR_mode;
A68_VC  AGLACTR;  /* OPERATORS - trim index */
A68_VC  BGLACTR;  /* OPERATORS - trim index */
A68_VC  CGLACTR;  /* OPERATORS - trim index */
A68_INT  DGLACTR_elemmode;
A68_VC  EGLACTR;  /* OPERATORS - trim index */
A68_VC  FGLACTR;  /* OPERATORS - trim index */
A68_VC  GGLACTR;  /* OPERATORS - trim index */
A68_INT  HGLACTR_noelems;
A68_VC  MGLACTR;  /* avoid structure result */
A68_VC  OGLACTR;  /* avoid structure result */
A68_VC  QGLACTR;  /* avoid structure result */
A68_VC  RGLACTR;  /* OPERATORS - trim index */
A68_VC  SGLACTR;  /* OPERATORS - trim index */
A68_VC  TGLACTR;  /* OPERATORS - trim index */
A68_INT  UGLACTR_mode;
A68_VC  VGLACTR;  /* OPERATORS - trim index */
A68_VC  WGLACTR;  /* OPERATORS - trim index */
A68_VC  XGLACTR;  /* OPERATORS - trim index */
A68_INT  YGLACTR_elemmode;
A68_VC  AHLACTR;  /* clause result */
A68_VC  EHLACTR_flex;
A68_VC  IHLACTR;  /* avoid structure result */
A68_VC  KHLACTR;  /* avoid structure result */
A68_VC  LHLACTR;  /* OPERATORS - trim index */
A68_VC  MHLACTR;  /* OPERATORS - trim index */
A68_VC  NHLACTR;  /* OPERATORS - trim index */
A68_INT  OHLACTR_mode;
A68_VC  PHLACTR;  /* OPERATORS - trim index */
A68_VC  QHLACTR;  /* OPERATORS - trim index */
A68_VC  RHLACTR;  /* OPERATORS - trim index */
A68_INT  SHLACTR_elemmode;
A68_INT  THLACTR_dims;
A68_VC  VHLACTR;  /* clause result */
A68_VC  ZHLACTR_flex;
A68_VC  EILACTR;  /* avoid structure result */
A68_VC  GILACTR;  /* avoid structure result */
A68_VC  IILACTR;  /* avoid structure result */
A68_VC  JILACTR;  /* OPERATORS - trim index */
A68_VC  KILACTR;  /* OPERATORS - trim index */
A68_VC  LILACTR;  /* OPERATORS - trim index */
A68_INT  MILACTR_mode;
A68_VC  NILACTR;  /* OPERATORS - trim index */
A68_VC  OILACTR;  /* OPERATORS - trim index */
A68_VC  PILACTR;  /* OPERATORS - trim index */
A68_INT  QILACTR_elemmode;
A68_VC  UILACTR;  /* avoid structure result */
A68_VC  WILACTR;  /* avoid structure result */
A68_VC  ZILACTR;  /* avoid structure result */
A_PROC_ENTRY(decodespec);
 /* line 90: */
 /* line 91: */
{ 
RYKACTR_index = 1;
 /* line 92: */
A_CALLPROC(Debugmessage,(5, TYKACTR),(5, TYKACTR,(Debugmessage).nonlocals));
 /* line 93: */
for ( ;; )
{ 
 /* line 94: */
 /* line 95: */
if ( !((Spec.upb>RYKACTR_index)) ) break;
{ 
UYKACTR_type = (A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index);
RYKACTR_index+=1;
 /* line 96: */
VYKACTR = UYKACTR_type;
switch ( VYKACTR )
{ 
case 1: 
 /* line 97: */
{ 
WYKACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index);
RYKACTR_index+=1;
 /* line 98: */
YYKACTR = A_VTRIM(XYKACTR,(Spec),A_VTSCRIPT(&(XYKACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
AZKACTR_name = A_VTRIM(ZYKACTR,(YYKACTR),A_VTSCRIPT(&(ZYKACTR.upb),(YYKACTR).upb,1,WYKACTR_namelength));
 /* line 99: */
RYKACTR_index+=WYKACTR_namelength;
 /* line 100: */
CZKACTR = A_VTRIM(BZKACTR,(Spec),A_VTSCRIPT(&(BZKACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
EZKACTR_mode = JYKACTR_vtoi(A_VTRIM(DZKACTR,(CZKACTR),A_VTSCRIPT(&(DZKACTR.upb),(CZKACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
WRAAOSF_xc( EZKACTR_mode, &JZKACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HZKACTR,AZKACTR_name),IZKACTR),JZKACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HZKACTR,AZKACTR_name),IZKACTR),JZKACTR),(Debugmessage).nonlocals));
} 
break;
case 2: 
 /* line 105: */
{ 
KZKACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index);
RYKACTR_index+=1;
 /* line 106: */
MZKACTR = A_VTRIM(LZKACTR,(Spec),A_VTSCRIPT(&(LZKACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
OZKACTR_name = A_VTRIM(NZKACTR,(MZKACTR),A_VTSCRIPT(&(NZKACTR.upb),(MZKACTR).upb,1,KZKACTR_namelength));
 /* line 107: */
RYKACTR_index+=KZKACTR_namelength;
 /* line 108: */
QZKACTR = A_VTRIM(PZKACTR,(Spec),A_VTSCRIPT(&(PZKACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
SZKACTR_bival = JYKACTR_vtoi(A_VTRIM(RZKACTR,(QZKACTR),A_VTSCRIPT(&(RZKACTR.upb),(QZKACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 109: */
UZKACTR = A_VTRIM(TZKACTR,(Spec),A_VTSCRIPT(&(TZKACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
WZKACTR_mode = JYKACTR_vtoi(A_VTRIM(VZKACTR,(UZKACTR),A_VTSCRIPT(&(VZKACTR.upb),(UZKACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 110: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
WRAAOSF_xc( WZKACTR_mode, &CALACTR );
WRAAOSF_xc( SZKACTR_bival, &EALACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(AALACTR,OZKACTR_name),BALACTR),CALACTR),DALACTR),EALACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(AALACTR,OZKACTR_name),BALACTR),CALACTR),DALACTR),EALACTR),(Debugmessage).nonlocals));
} 
break;
case 3: 
 /* line 116: */
{ 
FALACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index);
RYKACTR_index+=1;
 /* line 117: */
HALACTR = A_VTRIM(GALACTR,(Spec),A_VTSCRIPT(&(GALACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
JALACTR_name = A_VTRIM(IALACTR,(HALACTR),A_VTSCRIPT(&(IALACTR.upb),(HALACTR).upb,1,FALACTR_namelength));
 /* line 118: */
RYKACTR_index+=FALACTR_namelength;
 /* line 119: */
LALACTR = A_VTRIM(KALACTR,(Spec),A_VTSCRIPT(&(KALACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
NALACTR_mode = JYKACTR_vtoi(A_VTRIM(MALACTR,(LALACTR),A_VTSCRIPT(&(MALACTR.upb),(LALACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
if ( ((A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index)==1) )
{ 
 /* line 124: */
PALACTR = QALACTR;
} 
else
{ 
PALACTR = SALACTR;
} 
TALACTR_gen = PALACTR;
 /* line 125: */
RYKACTR_index+=1;
 /* line 126: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
WRAAOSF_xc( NALACTR_mode, &YALACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WALACTR,JALACTR_name),XALACTR),YALACTR),TALACTR_gen)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WALACTR,JALACTR_name),XALACTR),YALACTR),TALACTR_gen),(Debugmessage).nonlocals));
} 
break;
case 4: 
 /* line 130: */
{ 
ZALACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index);
RYKACTR_index+=1;
 /* line 131: */
BBLACTR = A_VTRIM(ABLACTR,(Spec),A_VTSCRIPT(&(ABLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
DBLACTR_name = A_VTRIM(CBLACTR,(BBLACTR),A_VTSCRIPT(&(CBLACTR.upb),(BBLACTR).upb,1,ZALACTR_namelength));
 /* line 132: */
RYKACTR_index+=ZALACTR_namelength;
 /* line 133: */
EBLACTR_prio = (A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index);
RYKACTR_index+=1;
 /* line 134: */
GBLACTR = A_VTRIM(FBLACTR,(Spec),A_VTSCRIPT(&(FBLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
IBLACTR_lhsmode = JYKACTR_vtoi(A_VTRIM(HBLACTR,(GBLACTR),A_VTSCRIPT(&(HBLACTR.upb),(GBLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 135: */
KBLACTR = A_VTRIM(JBLACTR,(Spec),A_VTSCRIPT(&(JBLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
MBLACTR_rhsmode = JYKACTR_vtoi(A_VTRIM(LBLACTR,(KBLACTR),A_VTSCRIPT(&(LBLACTR.upb),(KBLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 136: */
OBLACTR = A_VTRIM(NBLACTR,(Spec),A_VTSCRIPT(&(NBLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
QBLACTR_resmode = JYKACTR_vtoi(A_VTRIM(PBLACTR,(OBLACTR),A_VTSCRIPT(&(PBLACTR.upb),(OBLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 137: */
 /* line 138: */
 /* line 139: */
 /* line 140: */
 /* line 141: */
 /* line 142: */
 /* line 143: */
WRAAOSF_xc( EBLACTR_prio, &YBLACTR );
WRAAOSF_xc( IBLACTR_lhsmode, &ACLACTR );
WRAAOSF_xc( MBLACTR_rhsmode, &CCLACTR );
WRAAOSF_xc( QBLACTR_resmode, &ECLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WBLACTR,DBLACTR_name),XBLACTR),YBLACTR),ZBLACTR),ACLACTR),BCLACTR),CCLACTR),DCLACTR),ECLACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WBLACTR,DBLACTR_name),XBLACTR),YBLACTR),ZBLACTR),ACLACTR),BCLACTR),CCLACTR),DCLACTR),ECLACTR),(Debugmessage).nonlocals));
} 
break;
case 5: 
 /* line 144: */
{ 
FCLACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index);
RYKACTR_index+=1;
 /* line 145: */
HCLACTR = A_VTRIM(GCLACTR,(Spec),A_VTSCRIPT(&(GCLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
JCLACTR_name = A_VTRIM(ICLACTR,(HCLACTR),A_VTSCRIPT(&(ICLACTR.upb),(HCLACTR).upb,1,FCLACTR_namelength));
 /* line 146: */
RYKACTR_index+=FCLACTR_namelength;
 /* line 147: */
KCLACTR_prio = (A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index);
RYKACTR_index+=1;
 /* line 148: */
MCLACTR = A_VTRIM(LCLACTR,(Spec),A_VTSCRIPT(&(LCLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
OCLACTR_lhsmode = JYKACTR_vtoi(A_VTRIM(NCLACTR,(MCLACTR),A_VTSCRIPT(&(NCLACTR.upb),(MCLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 149: */
QCLACTR = A_VTRIM(PCLACTR,(Spec),A_VTSCRIPT(&(PCLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
SCLACTR_rhsmode = JYKACTR_vtoi(A_VTRIM(RCLACTR,(QCLACTR),A_VTSCRIPT(&(RCLACTR.upb),(QCLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 150: */
UCLACTR = A_VTRIM(TCLACTR,(Spec),A_VTSCRIPT(&(TCLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
WCLACTR_resmode = JYKACTR_vtoi(A_VTRIM(VCLACTR,(UCLACTR),A_VTSCRIPT(&(VCLACTR.upb),(UCLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 151: */
YCLACTR = A_VTRIM(XCLACTR,(Spec),A_VTSCRIPT(&(XCLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
ADLACTR_biop = JYKACTR_vtoi(A_VTRIM(ZCLACTR,(YCLACTR),A_VTSCRIPT(&(ZCLACTR.upb),(YCLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 152: */
 /* line 153: */
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 158: */
WRAAOSF_xc( KCLACTR_prio, &JDLACTR );
WRAAOSF_xc( OCLACTR_lhsmode, &LDLACTR );
WRAAOSF_xc( SCLACTR_rhsmode, &NDLACTR );
WRAAOSF_xc( WCLACTR_resmode, &PDLACTR );
WRAAOSF_xc( ADLACTR_biop, &RDLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HDLACTR,JCLACTR_name),IDLACTR),JDLACTR),KDLACTR),LDLACTR),MDLACTR),NDLACTR),ODLACTR),PDLACTR),QDLACTR),RDLACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HDLACTR,JCLACTR_name),IDLACTR),JDLACTR),KDLACTR),LDLACTR),MDLACTR),NDLACTR),ODLACTR),PDLACTR),QDLACTR),RDLACTR),(Debugmessage).nonlocals));
} 
break;
case 6: 
 /* line 159: */
{ 
TDLACTR = A_VTRIM(SDLACTR,(Spec),A_VTSCRIPT(&(SDLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
VDLACTR_mode = JYKACTR_vtoi(A_VTRIM(UDLACTR,(TDLACTR),A_VTSCRIPT(&(UDLACTR.upb),(TDLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 160: */
XDLACTR = A_VTRIM(WDLACTR,(Spec),A_VTSCRIPT(&(WDLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
ZDLACTR_res = JYKACTR_vtoi(A_VTRIM(YDLACTR,(XDLACTR),A_VTSCRIPT(&(YDLACTR.upb),(XDLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 161: */
 /* line 162: */
 /* line 163: */
 /* line 164: */
WRAAOSF_xc( VDLACTR_mode, &DELACTR );
WRAAOSF_xc( ZDLACTR_res, &FELACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(CELACTR,DELACTR),EELACTR),FELACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(CELACTR,DELACTR),EELACTR),FELACTR),(Debugmessage).nonlocals));
} 
break;
case 7: 
 /* line 165: */
{ 
HELACTR = A_VTRIM(GELACTR,(Spec),A_VTSCRIPT(&(GELACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
JELACTR_mode = JYKACTR_vtoi(A_VTRIM(IELACTR,(HELACTR),A_VTSCRIPT(&(IELACTR.upb),(HELACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 166: */
LELACTR = A_VTRIM(KELACTR,(Spec),A_VTSCRIPT(&(KELACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
NELACTR_res = JYKACTR_vtoi(A_VTRIM(MELACTR,(LELACTR),A_VTSCRIPT(&(MELACTR.upb),(LELACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 167: */
OELACTR_params = (A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index);
RYKACTR_index+=1;
 /* line 168: */
RYKACTR_index+=(2*OELACTR_params);
 /* line 169: */
 /* line 170: */
 /* line 171: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
WRAAOSF_xc( JELACTR_mode, &TELACTR );
WRAAOSF_xc( NELACTR_res, &VELACTR );
WRAAOSF_xc( OELACTR_params, &XELACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SELACTR,TELACTR),UELACTR),VELACTR),WELACTR),XELACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SELACTR,TELACTR),UELACTR),VELACTR),WELACTR),XELACTR),(Debugmessage).nonlocals));
} 
break;
case 8: 
 /* line 175: */
{ 
ZELACTR = A_VTRIM(YELACTR,(Spec),A_VTSCRIPT(&(YELACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
BFLACTR_mode = JYKACTR_vtoi(A_VTRIM(AFLACTR,(ZELACTR),A_VTSCRIPT(&(AFLACTR.upb),(ZELACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 176: */
CFLACTR_nmodes = (A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index);
RYKACTR_index+=1;
 /* line 177: */
RYKACTR_index+=(2*CFLACTR_nmodes);
 /* line 178: */
 /* line 179: */
 /* line 180: */
 /* line 181: */
 /* line 182: */
WRAAOSF_xc( BFLACTR_mode, &GFLACTR );
WRAAOSF_xc( CFLACTR_nmodes, &IFLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FFLACTR,GFLACTR),HFLACTR),IFLACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FFLACTR,GFLACTR),HFLACTR),IFLACTR),(Debugmessage).nonlocals));
} 
break;
case 9: 
 /* line 183: */
{ 
KFLACTR = A_VTRIM(JFLACTR,(Spec),A_VTSCRIPT(&(JFLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
MFLACTR_mode = JYKACTR_vtoi(A_VTRIM(LFLACTR,(KFLACTR),A_VTSCRIPT(&(LFLACTR.upb),(KFLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 184: */
NFLACTR_nfields = (A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index);
RYKACTR_index+=1;
 /* line 185: */
 /* line 186: */
OFLACTR = NFLACTR_nfields;
for ( PFLACTR = 1;
PFLACTR <= OFLACTR;
PFLACTR += 1 )
{ 
RYKACTR_index+=2;
 /* line 187: */
 /* line 188: */
RYKACTR_index+=((A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index)+1);
}
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
WRAAOSF_xc( MFLACTR_mode, &TFLACTR );
WRAAOSF_xc( NFLACTR_nfields, &VFLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SFLACTR,TFLACTR),UFLACTR),VFLACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SFLACTR,TFLACTR),UFLACTR),VFLACTR),(Debugmessage).nonlocals));
} 
break;
case 10: 
 /* line 194: */
{ 
XFLACTR = A_VTRIM(WFLACTR,(Spec),A_VTSCRIPT(&(WFLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
ZFLACTR_mode = JYKACTR_vtoi(A_VTRIM(YFLACTR,(XFLACTR),A_VTSCRIPT(&(YFLACTR.upb),(XFLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 195: */
BGLACTR = A_VTRIM(AGLACTR,(Spec),A_VTSCRIPT(&(AGLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
DGLACTR_elemmode = JYKACTR_vtoi(A_VTRIM(CGLACTR,(BGLACTR),A_VTSCRIPT(&(CGLACTR.upb),(BGLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 196: */
FGLACTR = A_VTRIM(EGLACTR,(Spec),A_VTSCRIPT(&(EGLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
HGLACTR_noelems = JYKACTR_vtoi(A_VTRIM(GGLACTR,(FGLACTR),A_VTSCRIPT(&(GGLACTR.upb),(FGLACTR).upb,1,3)));
RYKACTR_index+=3;
 /* line 197: */
 /* line 198: */
 /* line 199: */
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 203: */
WRAAOSF_xc( ZFLACTR_mode, &MGLACTR );
WRAAOSF_xc( DGLACTR_elemmode, &OGLACTR );
WRAAOSF_xc( HGLACTR_noelems, &QGLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(LGLACTR,MGLACTR),NGLACTR),OGLACTR),PGLACTR),QGLACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(LGLACTR,MGLACTR),NGLACTR),OGLACTR),PGLACTR),QGLACTR),(Debugmessage).nonlocals));
} 
break;
case 11: 
 /* line 204: */
{ 
SGLACTR = A_VTRIM(RGLACTR,(Spec),A_VTSCRIPT(&(RGLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
UGLACTR_mode = JYKACTR_vtoi(A_VTRIM(TGLACTR,(SGLACTR),A_VTSCRIPT(&(TGLACTR.upb),(SGLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 205: */
WGLACTR = A_VTRIM(VGLACTR,(Spec),A_VTSCRIPT(&(VGLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
YGLACTR_elemmode = JYKACTR_vtoi(A_VTRIM(XGLACTR,(WGLACTR),A_VTSCRIPT(&(XGLACTR.upb),(WGLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 206: */
 /* line 207: */
if ( ((A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index)==2) )
{ 
AHLACTR = BHLACTR;
} 
else
{ 
AHLACTR = DHLACTR;
} 
EHLACTR_flex = AHLACTR;
 /* line 208: */
RYKACTR_index+=1;
 /* line 209: */
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
 /* line 214: */
WRAAOSF_xc( UGLACTR_mode, &IHLACTR );
WRAAOSF_xc( YGLACTR_elemmode, &KHLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EHLACTR_flex,HHLACTR),IHLACTR),JHLACTR),KHLACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EHLACTR_flex,HHLACTR),IHLACTR),JHLACTR),KHLACTR),(Debugmessage).nonlocals));
} 
break;
case 12: 
 /* line 215: */
{ 
MHLACTR = A_VTRIM(LHLACTR,(Spec),A_VTSCRIPT(&(LHLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
OHLACTR_mode = JYKACTR_vtoi(A_VTRIM(NHLACTR,(MHLACTR),A_VTSCRIPT(&(NHLACTR.upb),(MHLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 216: */
QHLACTR = A_VTRIM(PHLACTR,(Spec),A_VTSCRIPT(&(PHLACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
SHLACTR_elemmode = JYKACTR_vtoi(A_VTRIM(RHLACTR,(QHLACTR),A_VTSCRIPT(&(RHLACTR.upb),(QHLACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 217: */
THLACTR_dims = (A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index);
RYKACTR_index+=1;
 /* line 218: */
 /* line 219: */
if ( ((A68_INT)(unsigned char)A_VINDEX(Spec,RYKACTR_index)==2) )
{ 
VHLACTR = WHLACTR;
} 
else
{ 
VHLACTR = YHLACTR;
} 
ZHLACTR_flex = VHLACTR;
 /* line 220: */
RYKACTR_index+=1;
 /* line 221: */
 /* line 222: */
 /* line 223: */
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 227: */
WRAAOSF_xc( OHLACTR_mode, &EILACTR );
WRAAOSF_xc( SHLACTR_elemmode, &GILACTR );
WRAAOSF_xc( THLACTR_dims, &IILACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZHLACTR_flex,DILACTR),EILACTR),FILACTR),GILACTR),HILACTR),IILACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZHLACTR_flex,DILACTR),EILACTR),FILACTR),GILACTR),HILACTR),IILACTR),(Debugmessage).nonlocals));
} 
break;
case 13: 
 /* line 228: */
{ 
KILACTR = A_VTRIM(JILACTR,(Spec),A_VTSCRIPT(&(JILACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
MILACTR_mode = JYKACTR_vtoi(A_VTRIM(LILACTR,(KILACTR),A_VTSCRIPT(&(LILACTR.upb),(KILACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 229: */
OILACTR = A_VTRIM(NILACTR,(Spec),A_VTSCRIPT(&(NILACTR.upb),(Spec).upb,RYKACTR_index,(Spec).upb)) ;
QILACTR_elemmode = JYKACTR_vtoi(A_VTRIM(PILACTR,(OILACTR),A_VTSCRIPT(&(PILACTR.upb),(OILACTR).upb,1,2)));
RYKACTR_index+=2;
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
 /* line 234: */
WRAAOSF_xc( MILACTR_mode, &UILACTR );
WRAAOSF_xc( QILACTR_elemmode, &WILACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(TILACTR,UILACTR),VILACTR),WILACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(TILACTR,UILACTR),VILACTR),WILACTR),(Debugmessage).nonlocals));
} 
break;
default: 
WRAAOSF_xc( UYKACTR_type, &ZILACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(YILACTR,ZILACTR)),(5, A_VC_PLUS(YILACTR,ZILACTR),(Debugmessage).nonlocals));
 /* line 235: */
 /* line 236: */
RYKACTR_index = Spec.upb;
break;
} 
} 
}
 /* line 238: */
} 
A_PROC_EXIT(decodespec);
return;
} 
#undef NL

A_STATIC A68_VOID  CJLACTR_processspec(A68_VC  Spec, A68_105 * Currentmodule)
{ 
A68_VC  FJLACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GJLACTR;  /* avoid structure result */
A68_VC  HJLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IJLACTR_index;
A68_INT  JJLACTR_type;
A68_INT  KJLACTR;  /* clause result */
A68_INT  LJLACTR_namelength;
A68_VC  MJLACTR;  /* OPERATORS - trim index */
A68_VC  NJLACTR;  /* OPERATORS - trim index */
A68_VC  OJLACTR;  /* OPERATORS - trim index */
A68_VC  PJLACTR_name;
A68_157  QJLACTR;  /* collateral clause result */
A68_VC  RJLACTR;  /* avoid structure result */
A68_157 * SJLACTR;  /* YIELD */
A68_INT  TJLACTR_namelength;
A68_VC  UJLACTR;  /* OPERATORS - trim index */
A68_VC  VJLACTR;  /* OPERATORS - trim index */
A68_VC  WJLACTR;  /* OPERATORS - trim index */
A68_VC  XJLACTR_name;
A68_157  YJLACTR;  /* collateral clause result */
A68_VC  ZJLACTR;  /* avoid structure result */
A68_157 * AKLACTR;  /* YIELD */
A68_INT  BKLACTR_namelength;
A68_VC  CKLACTR;  /* OPERATORS - trim index */
A68_VC  DKLACTR;  /* OPERATORS - trim index */
A68_VC  EKLACTR;  /* OPERATORS - trim index */
A68_VC  FKLACTR_name;
A68_157  GKLACTR;  /* collateral clause result */
A68_VC  HKLACTR;  /* avoid structure result */
A68_157 * IKLACTR;  /* YIELD */
A68_INT  JKLACTR_namelength;
A68_VC  KKLACTR;  /* OPERATORS - trim index */
A68_VC  LKLACTR;  /* OPERATORS - trim index */
A68_VC  MKLACTR;  /* OPERATORS - trim index */
A68_VC  NKLACTR_name;
A68_INT  OKLACTR;  /* YIELD */
A68_CHAR  PKLACTR_c;
A68_BOOL  QKLACTR;  /* optbool result */
A68_BOOL  RKLACTR;  /* clause result */
A68_157 ** SKLACTR;  /* clause result */
A68_157 ** TKLACTR_table;
A68_157  UKLACTR;  /* collateral clause result */
A68_VC  VKLACTR;  /* avoid structure result */
A68_157 * WKLACTR;  /* YIELD */
A68_INT  XKLACTR_namelength;
A68_VC  YKLACTR;  /* OPERATORS - trim index */
A68_VC  ZKLACTR;  /* OPERATORS - trim index */
A68_VC  ALLACTR;  /* OPERATORS - trim index */
A68_VC  BLLACTR_name;
A68_INT  CLLACTR;  /* YIELD */
A68_CHAR  DLLACTR_c;
A68_BOOL  ELLACTR;  /* optbool result */
A68_BOOL  FLLACTR;  /* clause result */
A68_157 ** GLLACTR;  /* clause result */
A68_157 ** HLLACTR_table;
A68_157  ILLACTR;  /* collateral clause result */
A68_VC  JLLACTR;  /* avoid structure result */
A68_157 * KLLACTR;  /* YIELD */
A68_INT  LLLACTR_params;
A68_INT  MLLACTR_nmodes;
A68_INT  NLLACTR_nfields;
A68_INT  OLLACTR;  /* to part of loop */
A68_INT  PLLACTR;  /* loop control */
A_PROC_ENTRY(processspec);
 /* line 244: */
 /* line 245: */
{ 
 /* line 237: */
BNAAOSF_before( A_HISVEC(FJLACTR,(*Currentmodule),32,A68_CHAR ), ' ', &GJLACTR );
AYKACTR_debugmessage(10, A_VC_PLUS(A_VC_PLUS(EJLACTR,GJLACTR),A_HVEC(HJLACTR,')',A68_CHAR )));
 /* line 246: */
IJLACTR_index = 1;
 /* line 247: */
for ( ;; )
{ 
 /* line 248: */
 /* line 249: */
if ( !((Spec.upb>IJLACTR_index)) ) break;
{ 
JJLACTR_type = (A68_INT)(unsigned char)A_VINDEX(Spec,IJLACTR_index);
IJLACTR_index+=1;
 /* line 250: */
KJLACTR = JJLACTR_type;
switch ( KJLACTR )
{ 
case 1: 
 /* line 251: */
{ 
LJLACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,IJLACTR_index);
IJLACTR_index+=1;
 /* line 252: */
NJLACTR = A_VTRIM(MJLACTR,(Spec),A_VTSCRIPT(&(MJLACTR.upb),(Spec).upb,IJLACTR_index,(Spec).upb)) ;
PJLACTR_name = A_VTRIM(OJLACTR,(NJLACTR),A_VTSCRIPT(&(OJLACTR.upb),(NJLACTR).upb,1,LJLACTR_namelength));
 /* line 253: */
ZCAAOSF_makervc( PJLACTR_name, &RJLACTR );
QJLACTR.Symbol = RJLACTR;
QJLACTR.Module = Currentmodule;
QJLACTR.Next = VXKACTR_idtable;
SJLACTR = A_HEAP(A68_157 ) ;
(*SJLACTR) = QJLACTR ;
VXKACTR_idtable = SJLACTR;
 /* line 254: */
 /* line 255: */
 /* line 256: */
IJLACTR_index+=(LJLACTR_namelength+2);
} 
break;
case 2: 
 /* line 257: */
{ 
TJLACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,IJLACTR_index);
IJLACTR_index+=1;
 /* line 258: */
VJLACTR = A_VTRIM(UJLACTR,(Spec),A_VTSCRIPT(&(UJLACTR.upb),(Spec).upb,IJLACTR_index,(Spec).upb)) ;
XJLACTR_name = A_VTRIM(WJLACTR,(VJLACTR),A_VTSCRIPT(&(WJLACTR.upb),(VJLACTR).upb,1,TJLACTR_namelength));
 /* line 259: */
ZCAAOSF_makervc( XJLACTR_name, &ZJLACTR );
YJLACTR.Symbol = ZJLACTR;
YJLACTR.Module = Currentmodule;
YJLACTR.Next = VXKACTR_idtable;
AKLACTR = A_HEAP(A68_157 ) ;
(*AKLACTR) = YJLACTR ;
VXKACTR_idtable = AKLACTR;
 /* line 260: */
 /* line 261: */
 /* line 262: */
IJLACTR_index+=(TJLACTR_namelength+4);
} 
break;
case 3: 
 /* line 263: */
{ 
BKLACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,IJLACTR_index);
IJLACTR_index+=1;
 /* line 264: */
DKLACTR = A_VTRIM(CKLACTR,(Spec),A_VTSCRIPT(&(CKLACTR.upb),(Spec).upb,IJLACTR_index,(Spec).upb)) ;
FKLACTR_name = A_VTRIM(EKLACTR,(DKLACTR),A_VTSCRIPT(&(EKLACTR.upb),(DKLACTR).upb,1,BKLACTR_namelength));
 /* line 265: */
ZCAAOSF_makervc( FKLACTR_name, &HKLACTR );
GKLACTR.Symbol = HKLACTR;
GKLACTR.Module = Currentmodule;
GKLACTR.Next = XXKACTR_boldtable;
IKLACTR = A_HEAP(A68_157 ) ;
(*IKLACTR) = GKLACTR ;
XXKACTR_boldtable = IKLACTR;
 /* line 266: */
 /* line 267: */
 /* line 268: */
IJLACTR_index+=(BKLACTR_namelength+3);
} 
break;
case 4: 
 /* line 269: */
{ 
JKLACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,IJLACTR_index);
IJLACTR_index+=1;
 /* line 270: */
LKLACTR = A_VTRIM(KKLACTR,(Spec),A_VTSCRIPT(&(KKLACTR.upb),(Spec).upb,IJLACTR_index,(Spec).upb)) ;
NKLACTR_name = A_VTRIM(MKLACTR,(LKLACTR),A_VTSCRIPT(&(MKLACTR.upb),(LKLACTR).upb,1,JKLACTR_namelength));
 /* line 271: */
{ 
OKLACTR = 1 ;
PKLACTR_c = A_VINDEX(NKLACTR_name,OKLACTR);
QKLACTR = (PKLACTR_c>='a');
if ( QKLACTR )
{QKLACTR = (PKLACTR_c<='z');
}
RKLACTR = QKLACTR;
if ( RKLACTR )
{ 
SKLACTR = (&XXKACTR_boldtable);
} 
else
{ 
SKLACTR = (&WXKACTR_compoundtable);
} 
} 
TKLACTR_table = SKLACTR;
 /* line 272: */
ZCAAOSF_makervc( NKLACTR_name, &VKLACTR );
UKLACTR.Symbol = VKLACTR;
UKLACTR.Module = Currentmodule;
UKLACTR.Next = (*TKLACTR_table);
WKLACTR = A_HEAP(A68_157 ) ;
(*WKLACTR) = UKLACTR ;
(*TKLACTR_table) = WKLACTR;
 /* line 273: */
 /* line 274: */
 /* line 275: */
IJLACTR_index+=(JKLACTR_namelength+7);
} 
break;
case 5: 
 /* line 276: */
{ 
XKLACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,IJLACTR_index);
IJLACTR_index+=1;
 /* line 277: */
ZKLACTR = A_VTRIM(YKLACTR,(Spec),A_VTSCRIPT(&(YKLACTR.upb),(Spec).upb,IJLACTR_index,(Spec).upb)) ;
BLLACTR_name = A_VTRIM(ALLACTR,(ZKLACTR),A_VTSCRIPT(&(ALLACTR.upb),(ZKLACTR).upb,1,XKLACTR_namelength));
 /* line 278: */
{ 
CLLACTR = 1 ;
DLLACTR_c = A_VINDEX(BLLACTR_name,CLLACTR);
ELLACTR = (DLLACTR_c>='a');
if ( ELLACTR )
{ELLACTR = (DLLACTR_c<='z');
}
FLLACTR = ELLACTR;
if ( FLLACTR )
{ 
GLLACTR = (&XXKACTR_boldtable);
} 
else
{ 
GLLACTR = (&WXKACTR_compoundtable);
} 
} 
HLLACTR_table = GLLACTR;
 /* line 279: */
ZCAAOSF_makervc( BLLACTR_name, &JLLACTR );
ILLACTR.Symbol = JLLACTR;
ILLACTR.Module = Currentmodule;
ILLACTR.Next = (*HLLACTR_table);
KLLACTR = A_HEAP(A68_157 ) ;
(*KLLACTR) = ILLACTR ;
(*HLLACTR_table) = KLLACTR;
 /* line 280: */
 /* line 281: */
 /* line 283: */
IJLACTR_index+=(XKLACTR_namelength+9);
} 
break;
case 6: 
 /* line 284: */
IJLACTR_index+=4;
break;
case 7: 
 /* line 285: */
{ 
IJLACTR_index+=4;
 /* line 286: */
LLLACTR_params = (A68_INT)(unsigned char)A_VINDEX(Spec,IJLACTR_index);
 /* line 287: */
 /* line 288: */
 /* line 289: */
IJLACTR_index+=((2*LLLACTR_params)+1);
} 
break;
case 8: 
 /* line 290: */
{ 
IJLACTR_index+=2;
 /* line 291: */
MLLACTR_nmodes = (A68_INT)(unsigned char)A_VINDEX(Spec,IJLACTR_index);
 /* line 292: */
 /* line 293: */
 /* line 294: */
IJLACTR_index+=((2*MLLACTR_nmodes)+1);
} 
break;
case 9: 
 /* line 295: */
{ 
IJLACTR_index+=2;
 /* line 296: */
NLLACTR_nfields = (A68_INT)(unsigned char)A_VINDEX(Spec,IJLACTR_index);
IJLACTR_index+=1;
 /* line 297: */
 /* line 298: */
OLLACTR = NLLACTR_nfields;
for ( PLLACTR = 1;
PLLACTR <= OLLACTR;
PLLACTR += 1 )
{ 
IJLACTR_index+=2;
 /* line 299: */
 /* line 300: */
IJLACTR_index+=((A68_INT)(unsigned char)A_VINDEX(Spec,IJLACTR_index)+1);
}
 /* line 301: */
 /* line 303: */
} 
break;
case 10: 
 /* line 305: */
IJLACTR_index+=7;
break;
case 11: 
 /* line 307: */
IJLACTR_index+=5;
break;
case 12: 
 /* line 309: */
IJLACTR_index+=6;
break;
case 13: 
 /* line 310: */
 /* line 311: */
IJLACTR_index+=4;
break;
default: 
 /* line 312: */
IJLACTR_index = Spec.upb;
break;
} 
} 
}
 /* line 314: */
} 
A_PROC_EXIT(processspec);
return;
} 
#undef NL

A_STATIC A68_VOID  SLLACTR_init_liblookup(A68_174  Unpackmodinfo)
{ 
A68_BITS * TLLACTR_d;
A68_BOOL  ULLACTR;  /* clause result */
A68_141  VLLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  AMLACTR_add_lib_module;   /* proc value of non-global proc */
A68_VC  BNLACTR;  /* avoid structure result */
A68_VC  CNLACTR_filename;
A68_BOOL  DNLACTR;  /* clause result */
A68_VC  ENLACTR;  /* OPERATORS - nil -> mode */
A68_VC  FNLACTR;  /* != */
A68_BOOL  GNLACTR;  /* optbool result */
A68_VC  INLACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(init_liblookup);
 /* line 327: */
 /* line 328: */
{ 
QLLACTR_initialised = A68_TRUE;
 /* line 329: */
TLLACTR_d = NBCAOSF_open_directory((*(&(FRIACTR_library_directory->Dir))), RIBAOSF_ignore_msg);
 /* line 330: */
 /* line 331: */
 /* line 332: */
ULLACTR = (TLLACTR_d==SRBAOSF_null_dirptr);
if ( ULLACTR )
{ 
VWIACTR_pwarning(816, A_HARR(VLLACTR,(*(&(FRIACTR_library_directory->Dir))),A68_VC ));
 /* line 333: */
 /* line 334: */
 /* line 335: */
FRIACTR_library_directory = CRIACTR_nil_dirlist;
} 
else
{ 
AYKACTR_debugmessage(1, XLLACTR);
 /* line 337: */
A_CLOSURE( AMLACTR_add_lib_module, BMLACTR_add_lib_module, CMLACTR_add_lib_module );
(( CMLACTR_add_lib_module * ) ( AMLACTR_add_lib_module.nonlocals )) -> Unpackmodinfo = Unpackmodinfo;
 /* line 358: */
for ( ;; )
{ 
 /* line 359: */
CCCAOSF_get_next_dir_entry( TLLACTR_d, RIBAOSF_ignore_msg, &BNLACTR );
CNLACTR_filename = BNLACTR;
 /* line 360: */
 /* line 361: */
 /* line 362: */
FNLACTR = A_VVAC(ENLACTR) ;
DNLACTR = ! A_VSTRUCTCOMP(CNLACTR_filename,FNLACTR);
if ( !DNLACTR ) break;
 /* line 363: */
 /* line 364: */
GNLACTR = (CNLACTR_filename.upb>2);
if ( GNLACTR )
{ /* line 365: */
GNLACTR = A_VC_EQ(A_VTRIM(INLACTR,(CNLACTR_filename),A_VTSCRIPT(&(INLACTR.upb),(CNLACTR_filename).upb,(CNLACTR_filename.upb-1),(CNLACTR_filename).upb)),JNLACTR);
}
 /* line 366: */
if ( GNLACTR )
{ 
 /* line 367: */
 /* line 368: */
A_CALLPROC(AMLACTR_add_lib_module,(CNLACTR_filename),(CNLACTR_filename,(AMLACTR_add_lib_module).nonlocals));
} 
}
 /* line 370: */
WBCAOSF_close_directory(TLLACTR_d, RIBAOSF_ignore_msg);
 /* line 372: */
 /* line 373: */
 /* line 374: */
if ( (ZCHACTR_tracelevel(LNLACTR)>=10) )
{ 
 /* line 384: */
AYKACTR_debugmessage(10, WNLACTR);
ONLACTR_printmap(VXKACTR_idtable);
 /* line 385: */
AYKACTR_debugmessage(10, YNLACTR);
ONLACTR_printmap(WXKACTR_compoundtable);
 /* line 386: */
AYKACTR_debugmessage(10, AOLACTR);
 /* line 387: */
 /* line 388: */
ONLACTR_printmap(XXKACTR_boldtable);
} 
} 
} 
A_PROC_EXIT(init_liblookup);
return;
} 
#undef NL

A_STATIC A68_105  DOLACTR_lookup_in_table(A68_105  Id, A68_157 * Map)
{ 
A68_VC  HOLACTR;  /* OPERATORS - istruct -> vector */
A68_VC  IOLACTR;  /* avoid structure result */
A68_VC  JOLACTR_reqd_symbol;
A68_157 * MOLACTR_current_map;
A68_105  POLACTR;  /* clause result */
A68_VC  SOLACTR;  /* OPERATORS - istruct -> vector */
A68_105  TOLACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UOLACTR;  /* avoid structure result */
A_PROC_ENTRY(lookup_in_table);
 /* line 391: */
 /* line 392: */
{ 
BNAAOSF_before( A_HISVEC(HOLACTR,Id,32,A68_CHAR ), ' ', &IOLACTR );
JOLACTR_reqd_symbol = IOLACTR;
 /* line 394: */
AYKACTR_debugmessage(1, A_VC_PLUS(LOLACTR,JOLACTR_reqd_symbol));
 /* line 396: */
MOLACTR_current_map = Map;
 /* line 398: */
for ( ;; )
{ 
 /* line 399: */
 /* line 400: */
if ( !((MOLACTR_current_map!=SXKACTR_nilmap)) ) break;
if ( A_VC_EQ((*(&(MOLACTR_current_map->Symbol))),JOLACTR_reqd_symbol) )
{ 
goto GOLACTR_found;
} 
 /* line 401: */
 /* line 402: */
MOLACTR_current_map = (*(&(MOLACTR_current_map->Next)));
}
 /* line 404: */
AYKACTR_debugmessage(1, A_VC_PLUS(JOLACTR_reqd_symbol,OOLACTR));
 /* line 405: */
 /* line 406: */
POLACTR = UXKACTR_nullid;
goto EOLACTR;
GOLACTR_found:
 /* line 407: */
TOLACTR = (*(*(&(MOLACTR_current_map->Module)))) ;
BNAAOSF_before( A_VC_PLUS(A_VC_PLUS(JOLACTR_reqd_symbol,ROLACTR),A_HISVEC(SOLACTR,TOLACTR,32,A68_CHAR )), ' ', &UOLACTR );
AYKACTR_debugmessage(1, UOLACTR);
 /* line 408: */
 /* line 409: */
POLACTR = (*(*(&(MOLACTR_current_map->Module))));
EOLACTR: ;
} 
A_PROC_EXIT(lookup_in_table);
return( POLACTR );
} 
#undef NL

A68_105  YOLACTR_lookup_library(A68_105  Id, A68_INT  Type, A68_174  Unpackmodinfo)
{ 
A68_105  ZOLACTR;  /* clause result */
A68_157 * APLACTR;  /* clause result */
A_PROC_ENTRY(lookup_library);
 /* line 419: */
 /* line 420: */
 /* line 421: */
 /* line 423: */
if ( (FRIACTR_library_directory==CRIACTR_nil_dirlist) )
{ 
 /* line 424: */
ZOLACTR = UXKACTR_nullid;
} 
else
{ 
if ( !QLLACTR_initialised )
{ 
SLLACTR_init_liblookup(Unpackmodinfo);
} 
 /* line 426: */
switch ( Type )
{ 
case 1: 
APLACTR = VXKACTR_idtable;
break;
case 2: 
APLACTR = WXKACTR_compoundtable;
break;
case 3: 
APLACTR = XXKACTR_boldtable;
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 427: */
ZOLACTR = DOLACTR_lookup_in_table(Id, APLACTR);
} 
A_PROC_EXIT(lookup_library);
return( ZOLACTR );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void NXKACTR(void)   /* initialise DECS liblookup */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","-dir",".","liblookup.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","./moduletracer.m","./incinstallation.m","./environment.m","./common.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osif.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCHACTR();   /* USE moduletracer */
ODAACTR();   /* USE incinstallation */
HPIACTR();   /* USE environment */
CSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/src/liblookup.a68";
A_config.translation_time = "Wed May  5 17:38:59 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "MXKACTR (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:59 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS liblookup);
UEAALIB_a68config(LGAALIB_configinfo, RXKACTR);
 /* line 53: */
 /* line 55: */
 /* line 56: */
UXKACTR_nullid = TXKACTR;
 /* line 58: */
 /* line 59: */
VXKACTR_idtable = SXKACTR_nilmap;
 /* line 60: */
WXKACTR_compoundtable = SXKACTR_nilmap;
 /* line 61: */
XXKACTR_boldtable = SXKACTR_nilmap;
 /* line 66: */
 /* line 79: */
 /* line 89: */
 /* line 240: */
 /* line 321: */
QLLACTR_initialised = A68_FALSE;
 /* line 323: */
 /* line 390: */
 /* line 411: */
 /* line 429: */
 /* line 431: */
 /* line 433: */
/*SKIP*/;
A_PROC_EXIT(DECS liblookup);
} 
#undef NL
/* end of translation of liblookup.a68 */
