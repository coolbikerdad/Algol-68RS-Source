/* UNAME:BGAAASP */
#include <algol68/Asupport.h>
struct A68t31 { A68_INT mode; union {
A68_LINT  mode1;
A68_INT  mode2;
A68_SINT  mode3;
A68_SSINT  mode4;
A68_REAL  mode5;
A68_SREAL  mode6;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t31  A68_31 ;    /* UNION(LONG INT,INT,SHORT INT,SHORT SHORT INT,REAL,SHORT REAL)  */
#define A68_32  A68_RC 
#define A68t32 A68t27            /* FLEX [] CHAR */

A_PROCEDURE(A68_VOID ,A68t33,(A68_BOOL ,A68_RC *),(A68_BOOL ,A68_RC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(BOOL) MODE27 */

A_PROCEDURE(A68_VOID ,A68t34,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,16000000,A68t35);
typedef struct A68t35  A68_35 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t35 *,16000000,A68t36);
typedef struct A68t36  A68_36 ;    /* STRUCT 16000000 REF MODE35 */
struct A68t37{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_1)
};
typedef struct A68t37  A68_37 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t38,(A68_BOOL ,struct A68t37 *),(A68_BOOL ,struct A68t37 *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(BOOL) MODE37 */
struct A68t39{
A68_BITS * Cp;
struct A68t35 * Env;
};
typedef struct A68t39  A68_39 ;    /* STRUCT(REF BITS,REF MODE35)  */
struct A68t40{
A68_CHAR * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_2)
A68_INT  Upb;
A_PAD_INT(PAD_3)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF CHAR,BITS,INT)  */
struct A68t41{
A68_BITS * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_4)
A68_INT  Upb;
A_PAD_INT(PAD_5)
};
typedef struct A68t41  A68_41 ;    /* STRUCT(REF BITS,BITS,INT)  */
struct A68t42{
A68_INT * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_6)
A68_INT  Upb;
A_PAD_INT(PAD_7)
};
typedef struct A68t42  A68_42 ;    /* STRUCT(REF INT,BITS,INT)  */
A_ISTRUCT(A68_BITS ,8,A68t43);
typedef struct A68t43  A68_43 ;    /* STRUCT 8 BITS */
struct A68t44{
A68_VC  Start;
A68_INT  Max;
A_PAD_INT(PAD_8)
A68_INT  Valid;
A_PAD_INT(PAD_9)
A68_INT  Pos;
A_PAD_INT(PAD_10)
A68_BOOL  Writeback;
A_PAD_BOOL(PAD_11)
A68_BOOL  Flushafterput;
A_PAD_BOOL(PAD_12)
};
typedef struct A68t44  A68_44 ;    /* STRUCT(REF MODE26,INT,INT,INT,BOOL,BOOL)  */
struct A68t45{
A68_BOOL  Binpossible;
A_PAD_BOOL(PAD_13)
A68_BOOL  Putpossible;
A_PAD_BOOL(PAD_14)
A68_BOOL  Getpossible;
A_PAD_BOOL(PAD_15)
A68_BOOL  Setpossible;
A_PAD_BOOL(PAD_16)
A68_BOOL  Reidfpossible;
A_PAD_BOOL(PAD_17)
};
typedef struct A68t45  A68_45 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL)  */
struct A68t46{
A68_VC  Idf;
A68_VC  Reidf;
struct A68t45  Type;
};
typedef struct A68t46  A68_46 ;    /* STRUCT(REF MODE26,REF MODE26,MODE45)  */
struct A68t56 ;

A_PROCEDURE(A68_INT ,A68t48,(struct A68t56 *,A68_INT ,A68_INT ,A68_INT ),(struct A68t56 *,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE56,INT,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t49,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE56) INT */

A_PROCEDURE(A68_VOID ,A68t50,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(REF MODE56) VOID */

A_PROCEDURE(A68_BOOL ,A68t51,(struct A68t56 *,A68_INT ),(struct A68t56 *,A68_INT ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(REF MODE56,INT) BOOL */

A_PROCEDURE(A68_INT ,A68t52,(struct A68t56 *,A68_VC ),(struct A68t56 *,A68_VC ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(REF MODE56,REF MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t56 *,A68_INT ,A68_VC *),(struct A68t56 *,A68_INT ,A68_VC *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF MODE56,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t54,(struct A68t56 *,A68_CHAR ),(struct A68t56 *,A68_CHAR ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF MODE56,CHAR) BOOL */

A_PROCEDURE(A68_BOOL ,A68t55,(struct A68t56 *,A68_CHAR *),(struct A68t56 *,A68_CHAR *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(REF MODE56,REF CHAR) BOOL */
struct A68t47{
struct A68t48  Estab;
struct A68t49  Open;
struct A68t50  Close;
struct A68t51  Set;
struct A68t49  Logicalend;
struct A68t52  Putbuf;
struct A68t52  Getbuf;
struct A68t53  Ensurebufspace;
struct A68t50  Flushbuffer;
struct A68t54  Putch;
struct A68t55  Getch;
struct A68t51  Control;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(MODE48,MODE49,MODE50,MODE51,MODE49,MODE52,MODE52,MODE53,MODE50,MODE54,MODE55,MODE51)  */

A_PROCEDURE(A68_BOOL ,A68t59,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(REF MODE56) BOOL */
struct A68t57{
struct A68t43  Stringterm;
A_PAD_ISTRUCT(A68_43 ,PAD_18)
struct A68t59  Logicalfilemended;
struct A68t59  Physicalfilemended;
struct A68t59  Valueerrormended;
struct A68t55  Charerrormended;
};
typedef struct A68t57  A68_57 ;    /* STRUCT(MODE43,MODE59,MODE59,MODE59,MODE55)  */
struct A68t58{
A68_BOOL  Readmood;
A_PAD_BOOL(PAD_19)
A68_BOOL  Charmood;
A_PAD_BOOL(PAD_20)
A68_BOOL  Opened;
A_PAD_BOOL(PAD_21)
A68_BOOL  Ended;
A_PAD_BOOL(PAD_22)
A68_BOOL  Bol;
A_PAD_BOOL(PAD_23)
A68_INT  Backch;
A_PAD_INT(PAD_24)
A68_INT  Lasterror;
A_PAD_INT(PAD_25)
struct A68t44  Buffer;
A68_INT  Pos;
A_PAD_INT(PAD_26)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,MODE44,INT)  */
struct A68t56{
struct A68t46  Book;
A68_INT  Sysfile;
A_PAD_INT(PAD_27)
struct A68t47  Sys;
struct A68t57  Io;
struct A68t58  State;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(MODE46,INT,MODE47,MODE57,MODE58)  */
struct A68t60{
struct A68t47  Sys;
struct A68t45  Type;
struct A68t57  Defaultio;
};
typedef struct A68t60  A68_60 ;    /* STRUCT(MODE47,MODE45,MODE57)  */
A_ISTRUCT(A68_SSBITS ,32,A68t62);
typedef struct A68t62  A68_62 ;    /* STRUCT 32 SHORT SHORT BITS */
struct A68t61{
A68_BITS  Ciflag;
A_PAD_BITS(PAD_28)
A68_BITS  Coflag;
A_PAD_BITS(PAD_29)
A68_BITS  Ccflag;
A_PAD_BITS(PAD_30)
A68_BITS  Clflag;
A_PAD_BITS(PAD_31)
A68_SSBITS  Cline;
A_PAD_SSBITS(PAD_32)
struct A68t62  Ccc;
A_PAD_ISTRUCT(A68_62 ,PAD_33)
A68_BITS  Cispeed;
A_PAD_BITS(PAD_34)
A68_BITS  Cospeed;
A_PAD_BITS(PAD_35)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(BITS,BITS,BITS,BITS,SHORT SHORT BITS,MODE62,BITS,BITS)  */
A_ROW(A68_BOOL ,A68t64,1);
typedef struct A68t64  A68_64 ;    /* [] BOOL */
A_ROW(A68_LBITS ,A68t65,1);
typedef struct A68t65  A68_65 ;    /* [] LONG BITS */
A_ROW(A68_BITS ,A68t66,1);
typedef struct A68t66  A68_66 ;    /* [] BITS */
A_ROW(A68_SBITS ,A68t67,1);
typedef struct A68t67  A68_67 ;    /* [] SHORT BITS */
A_ROW(A68_SSBITS ,A68t68,1);
typedef struct A68t68  A68_68 ;    /* [] SHORT SHORT BITS */
A_ROW(A68_LINT ,A68t69,1);
typedef struct A68t69  A68_69 ;    /* [] LONG INT */
A_ROW(A68_INT ,A68t70,1);
typedef struct A68t70  A68_70 ;    /* [] INT */
A_ROW(A68_SINT ,A68t71,1);
typedef struct A68t71  A68_71 ;    /* [] SHORT INT */
A_ROW(A68_SSINT ,A68t72,1);
typedef struct A68t72  A68_72 ;    /* [] SHORT SHORT INT */
A_ROW(A68_REAL ,A68t73,1);
typedef struct A68t73  A68_73 ;    /* [] REAL */
A_ROW(A68_SREAL ,A68t74,1);
typedef struct A68t74  A68_74 ;    /* [] SHORT REAL */
A_ROW(A68_COMPL ,A68t75,1);
typedef struct A68t75  A68_75 ;    /* [] COMPL */
A_ROW(A68_SCOMPL ,A68t76,1);
typedef struct A68t76  A68_76 ;    /* [] SHORT COMPL */
A_STRAIGHT(A68_VOID,A68t77);
typedef struct A68t77  A68_77 ;    /* STRAIGHT MODE63 */
struct A68t63 { A68_INT mode; union {
A68_CHAR * mode1;
A68_RC  mode2;
struct A68t32 * mode3;
A68_BOOL * mode4;
struct A68t64  mode5;
A68_LBITS * mode6;
struct A68t65  mode7;
A68_BITS * mode8;
struct A68t66  mode9;
A68_SBITS * mode10;
struct A68t67  mode11;
A68_SSBITS * mode12;
struct A68t68  mode13;
A68_LINT * mode14;
struct A68t69  mode15;
A68_INT * mode16;
struct A68t70  mode17;
A68_SINT * mode18;
struct A68t71  mode19;
A68_SSINT * mode20;
struct A68t72  mode21;
A68_REAL * mode22;
struct A68t73  mode23;
A68_SREAL * mode24;
struct A68t74  mode25;
A68_COMPL * mode26;
struct A68t75  mode27;
A68_SCOMPL * mode28;
struct A68t76  mode29;
struct A68t77  mode30;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t63  A68_63 ;    /* UNION(REF CHAR,REF MODE27,REF MODE32,REF BOOL,REF MODE64,REF LONG BITS,REF MODE65,REF BITS,REF MODE66,REF SHORT BITS,REF MODE67,REF SHORT SHORT BITS,REF MODE68,REF LONG INT,REF MODE69,REF INT,REF MODE70,REF SHORT INT,REF MODE71,REF SHORT SHORT INT,REF MODE72,REF REAL,REF MODE73,REF SHORT REAL,REF MODE74,REF COMPL,REF MODE75,REF SHORT COMPL,REF MODE76,MODE77)  */
A_STRAIGHT(A68_VOID,A68t79);
typedef struct A68t79  A68_79 ;    /* STRAIGHT MODE78 */
struct A68t78 { A68_INT mode; union {
A68_CHAR  mode1;
A68_RC  mode2;
A68_BOOL  mode3;
struct A68t64  mode4;
A68_LBITS  mode5;
struct A68t65  mode6;
A68_BITS  mode7;
struct A68t66  mode8;
A68_SBITS  mode9;
struct A68t67  mode10;
A68_SSBITS  mode11;
struct A68t68  mode12;
A68_LINT  mode13;
struct A68t69  mode14;
A68_INT  mode15;
struct A68t70  mode16;
A68_SINT  mode17;
struct A68t71  mode18;
A68_SSINT  mode19;
struct A68t72  mode20;
A68_REAL  mode21;
struct A68t73  mode22;
A68_SREAL  mode23;
struct A68t74  mode24;
A68_COMPL  mode25;
struct A68t75  mode26;
A68_SCOMPL  mode27;
struct A68t76  mode28;
struct A68t79  mode29;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t78  A68_78 ;    /* UNION(CHAR,MODE27,BOOL,MODE64,LONG BITS,MODE65,BITS,MODE66,SHORT BITS,MODE67,SHORT SHORT BITS,MODE68,LONG INT,MODE69,INT,MODE70,SHORT INT,MODE71,SHORT SHORT INT,MODE72,REAL,MODE73,SHORT REAL,MODE74,COMPL,MODE75,SHORT COMPL,MODE76,MODE79)  */

A_PROCEDURE(A68_INT ,A68t80,(A68_INT ),(A68_INT ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_INT ,A68t81,(void),(void *));
typedef struct A68t81  A68_81 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t82,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REAL) INT */

A_PROCEDURE(A68_REAL ,A68t83,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REAL) REAL */

A_PROCEDURE(A68_INT ,A68t84,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE26,INT) INT */

A_PROCEDURE(A68_VOID ,A68t85,(void),(void *));
typedef struct A68t85  A68_85 ;    /* PROC VOID */

A_PROCEDURE(A68_BITS *,A68t86,(A68_INT ,A68_BITS *),(A68_INT ,A68_BITS *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(INT,REF BITS) REF BITS */

A_PROCEDURE(A68_REAL ,A68t87,(A68_VC ),(A68_VC ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26) REAL */

A_PROCEDURE(A68_INT ,A68t88,(A68_INT ,A68_VC ,A68_INT *),(A68_INT ,A68_VC ,A68_INT *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(INT,MODE26,REF INT) INT */

A_PROCEDURE(A68_INT ,A68t89,(A68_INT ,A68_VC ,A68_INT ),(A68_INT ,A68_VC ,A68_INT ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(INT,MODE26,INT) INT */

A_PROCEDURE(A68_INT ,A68t90,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(struct A68t36 *,A68t91,(A68_VC ),(A68_VC ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE26) REF MODE36 */

A_PROCEDURE(A68_INT ,A68t92,(A68_VC ,A68_BITS *),(A68_VC ,A68_BITS *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE26,REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t93,(A68_VC ),(A68_VC ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_INT ,A68t94,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(INT,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t95,(A68_VC ,A68_VC ,A68_REAL ,A68_INT ,A68_INT ),(A68_VC ,A68_VC ,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(MODE26,MODE26,REAL,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t96,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t97,(A68_BITS *,struct A68t35 *),(A68_BITS *,struct A68t35 *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF BITS,REF MODE35) INT */

A_PROCEDURE(A68_INT ,A68t98,(A68_INT ,A68_CHAR *),(A68_INT ,A68_CHAR *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(INT,REF CHAR) INT */

A_PROCEDURE(A68_INT ,A68t99,(A68_INT ,A68_BITS ,A68_CHAR *),(A68_INT ,A68_BITS ,A68_CHAR *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(INT,BITS,REF CHAR) INT */

A_PROCEDURE(struct A68t35 *,A68t100,(A68_INT ),(A68_INT ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(INT) REF MODE35 */

A_PROCEDURE(A68_VOID ,A68t101,(A68_INT ),(A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT) VOID */

A_PROCEDURE(struct A68t35 *,A68t102,(A68_VC ),(A68_VC ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE26) REF MODE35 */

A_PROCEDURE(A68_INT ,A68t103,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t104,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,MODE26) INT */

A_PROCEDURE(A68_INT ,A68t105,(struct A68t35 *),(struct A68t35 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE35) INT */

A_PROCEDURE(A68_INT ,A68t106,(A68_INT *),(A68_INT *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF INT) INT */

A_PROCEDURE(A68_BITS *,A68t107,(A68_INT ),(A68_INT ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(INT) REF BITS */

A_PROCEDURE(struct A68t35 *,A68t108,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(REF BITS) REF MODE35 */

A_PROCEDURE(struct A68t35 *,A68t109,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF CHAR) REF MODE35 */

A_PROCEDURE(A68_CHAR *,A68t110,(struct A68t35 *),(struct A68t35 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE35) REF CHAR */

A_PROCEDURE(struct A68t36 *,A68t111,(struct A68t35 *),(struct A68t35 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE35) REF MODE36 */

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ,struct A68t40 *),(A68_VC ,struct A68t40 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE26) MODE40 */
A_VECTOR(A68_BITS ,A68t113);
typedef struct A68t113  A68_113 ;    /* VECTOR [] BITS */

A_PROCEDURE(A68_VOID ,A68t114,(struct A68t113 ,struct A68t41 *),(struct A68t113 ,struct A68t41 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE113) MODE41 */
A_VECTOR(A68_INT ,A68t115);
typedef struct A68t115  A68_115 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t115 ,struct A68t42 *),(struct A68t115 ,struct A68t42 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE115) MODE42 */

A_PROCEDURE(struct A68t39 *,A68t117,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE85) REF MODE39 */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t85 ,struct A68t39 *),(struct A68t85 ,struct A68t39 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE85) MODE39 */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t101 ,struct A68t39 *),(struct A68t101 ,struct A68t39 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE101) MODE39 */

A_PROCEDURE(A68_VOID ,A68t120,(A68_INT ,A68_BITS *),(A68_INT ,A68_BITS *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(INT,REF BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t120 ,struct A68t39 *),(struct A68t120 ,struct A68t39 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE120) MODE39 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t122 ,struct A68t39 *),(struct A68t122 ,struct A68t39 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE122) MODE39 */
A_ISTRUCT(A68_CHAR ,8,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(struct A68t124 ,A68t125,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REAL) MODE124 */
A_ISTRUCT(A68_CHAR ,4,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t126 ,A68t127,(A68_SREAL ),(A68_SREAL ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(SHORT REAL) MODE126 */

A_PROCEDURE(A68_REAL ,A68t128,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE124) REAL */

A_PROCEDURE(A68_SREAL ,A68t129,(struct A68t126 ),(struct A68t126 ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(MODE126) SHORT REAL */

A_PROCEDURE(struct A68t124 ,A68t130,(A68_LBITS ),(A68_LBITS ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(LONG BITS) MODE124 */

A_PROCEDURE(struct A68t126 ,A68t131,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(BITS) MODE126 */
A_ISTRUCT(A68_CHAR ,2,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(struct A68t132 ,A68t133,(A68_SBITS ),(A68_SBITS ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(SHORT BITS) MODE132 */
A_ISTRUCT(A68_CHAR ,1,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 1 CHAR */

A_PROCEDURE(struct A68t134 ,A68t135,(A68_SSBITS ),(A68_SSBITS ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(SHORT SHORT BITS) MODE134 */

A_PROCEDURE(A68_LBITS ,A68t136,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE124) LONG BITS */

A_PROCEDURE(A68_BITS ,A68t137,(struct A68t126 ),(struct A68t126 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE126) BITS */

A_PROCEDURE(A68_SBITS ,A68t138,(struct A68t132 ),(struct A68t132 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE132) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t139,(struct A68t134 ),(struct A68t134 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE134) SHORT SHORT BITS */
A_ISTRUCT(A68_BITS ,2,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 2 BITS */

A_PROCEDURE(struct A68t140 ,A68t141,(A68_LBITS ),(A68_LBITS ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(LONG BITS) MODE140 */

A_PROCEDURE(A68_LBITS ,A68t142,(struct A68t140 ),(struct A68t140 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE140) LONG BITS */

A_PROCEDURE(struct A68t140 ,A68t143,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REAL) MODE140 */

A_PROCEDURE(A68_REAL ,A68t144,(struct A68t140 ),(struct A68t140 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE140) REAL */

A_PROCEDURE(A68_BOOL ,A68t145,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REAL) BOOL */

A_PROCEDURE(A68_VOID ,A68t146,(A68_COMPL ,A68_INT ,A68_COMPL *),(A68_COMPL ,A68_INT ,A68_COMPL *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(COMPL,INT) COMPL */

A_PROCEDURE(A68_REAL ,A68t147,(A68_REAL ,A68_INT ),(A68_REAL ,A68_INT ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(REAL,INT) REAL */

A_PROCEDURE(A68_VOID ,A68t148,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t149,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t150,(A68_RC ,A68_VC *),(A68_RC ,A68_VC *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE27) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t35 *,A68_VC *),(struct A68t35 *,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE35) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t152,(A68_VC ),(A68_VC ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE26) REF CHAR */

A_PROCEDURE(A68_BITS *,A68t153,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE113) REF BITS */

A_PROCEDURE(A68_INT *,A68t154,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE115) REF INT */

A_PROCEDURE(A68_REAL ,A68t155,(A68_VC ),(A68_VC ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE26) REAL */

A_PROCEDURE(A68_SREAL ,A68t156,(A68_VC ),(A68_VC ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE26) SHORT REAL */

A_PROCEDURE(A68_LBITS ,A68t157,(A68_VC ),(A68_VC ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE26) LONG BITS */

A_PROCEDURE(A68_BITS ,A68t158,(A68_VC ),(A68_VC ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE26) BITS */

A_PROCEDURE(A68_SBITS ,A68t159,(A68_VC ),(A68_VC ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE26) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t160,(A68_VC ),(A68_VC ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE26) SHORT SHORT BITS */

A_PROCEDURE(A68_VOID ,A68t161,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t162,(A68_BITS *,A68_VC *),(A68_BITS *,A68_VC *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF BITS) REF MODE26 */

A_PROCEDURE(A68_SSINT ,A68t163,(A68_SSINT ,A68_SSINT ),(A68_SSINT ,A68_SSINT ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(SHORT SHORT INT,SHORT SHORT INT) SHORT SHORT INT */

A_PROCEDURE(A68_SINT ,A68t164,(A68_SINT ,A68_SINT ),(A68_SINT ,A68_SINT ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(SHORT INT,SHORT INT) SHORT INT */

A_PROCEDURE(A68_LINT ,A68t165,(A68_LINT ,A68_LINT ),(A68_LINT ,A68_LINT ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(LONG INT,LONG INT) LONG INT */

A_PROCEDURE(A68_REAL ,A68t166,(A68_INT ,A68_REAL ),(A68_INT ,A68_REAL ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(INT,REAL) REAL */

A_PROCEDURE(A68_REAL ,A68t167,(A68_REAL ,A68_REAL ),(A68_REAL ,A68_REAL ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REAL,REAL) REAL */

A_PROCEDURE(A68_SREAL ,A68t168,(A68_SREAL ,A68_SREAL ),(A68_SREAL ,A68_SREAL ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(SHORT REAL,SHORT REAL) SHORT REAL */

A_PROCEDURE(A68_VOID ,A68t169,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t170,(struct A68t61 *),(struct A68t61 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(REF MODE61) REF CHAR */

A_PROCEDURE(A68_BITS ,A68t171,(A68_INT ),(A68_INT ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(INT) BITS */

A_PROCEDURE(A68_BOOL ,A68t172,(A68_INT ,A68_LBITS ),(A68_INT ,A68_LBITS ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(INT,LONG BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t173,(A68_INT ,A68_SBITS ),(A68_INT ,A68_SBITS ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(INT,SHORT BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t174,(A68_INT ,A68_SSBITS ),(A68_INT ,A68_SSBITS ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT,SHORT SHORT BITS) BOOL */

A_PROCEDURE(struct A68t43 ,A68t175,(struct A68t43 ,struct A68t43 ),(struct A68t43 ,struct A68t43 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE43,MODE43) MODE43 */

/* --- Imports from spaliens --- */
#include <fenv.h>
#include <math.h>
#include <limits.h>

#define VFAAASP_fetonearest FE_TONEAREST
/**/

#define WFAAASP_fedownward FE_DOWNWARD
/**/

#define XFAAASP_fesetround fesetround
extern A68_INT  YFAAASP_fegetround(void);
/**/

#define BGAAASP_lrint lrint
#include <stdio.h>

#define BBAAASP_nullccharptr NULL
/**/

#define CBAAASP_maxabschar A68_MAX_CHAR
/**/

#define DBAAASP_maxint A68_MAX_INT
/**/

#define EBAAASP_shortmaxint A68_MAX_SINT
/**/

#define FBAAASP_shortshortmaxint A68_MAX_SSINT
#include <math.h>

#define GBAAASP_infinity HUGE_VAL
/**/

#define HBAAASP_pi M_PI
#include <float.h>

#define IBAAASP_shortrealprecision FLT_MANT_DIG
/**/

#define JBAAASP_shortrealwidth FLT_DIG
/**/

#define KBAAASP_shortsmallreal FLT_EPSILON
/**/

#define LBAAASP_shortminexp FLT_MIN_EXP
/**/

#define MBAAASP_shortmaxexp FLT_MAX_EXP
/**/

#define NBAAASP_realprecision DBL_MANT_DIG
/**/

#define OBAAASP_realwidth DBL_DIG
/**/

#define PBAAASP_smallreal DBL_EPSILON
/**/

#define QBAAASP_minexp DBL_MIN_EXP
/**/

#define RBAAASP_maxexp DBL_MAX_EXP
#include <errno.h>

#define XBAAASP_erangeerr ERANGE
#include <fcntl.h>

#define YBAAASP_ordonly O_RDONLY
/**/

#define ZBAAASP_owronly O_WRONLY
/**/

#define ACAAASP_ordwr O_RDWR
/**/

#define BCAAASP_ocreat O_CREAT
/**/

#define CCAAASP_otrunc O_TRUNC
/**/

#define DCAAASP_oexcl O_EXCL
/**/

#define ECAAASP_sqrt sqrt
/**/

#define FCAAASP_exp exp
/**/

#define GCAAASP_ln log
/**/

#define HCAAASP_log log10
/**/

#define ICAAASP_cos cos
/**/

#define JCAAASP_sin sin
/**/

#define KCAAASP_tan tan
/**/

#define LCAAASP_arccos acos
/**/

#define MCAAASP_arcsin asin
/**/

#define NCAAASP_arctan atan
#include <termios.h>

#define OCAAASP_termiosvtime VTIME
/**/

#define PCAAASP_termiosvmin VMIN
/**/

#define QCAAASP_tcsanow TCSANOW
/**/

#define RCAAASP_isig ISIG
/**/

#define SCAAASP_icanon ICANON
/**/

#define TCAAASP_echo ECHO
#include <signal.h>

#define XCAAASP_sighup SIGHUP
/**/

#define YCAAASP_sigint SIGINT
/**/

#define ZCAAASP_sigquit SIGQUIT
/**/

#define ADAAASP_sigill SIGILL
/**/

#define BDAAASP_sigtrap SIGTRAP
/**/

#define CDAAASP_sigabrt SIGABRT
/**/

#define DDAAASP_sigbus SIGBUS
/**/

#define EDAAASP_sigfpe SIGFPE
/**/

#define FDAAASP_sigkill SIGKILL
/**/

#define GDAAASP_sigusr1 SIGUSR1
/**/

#define HDAAASP_sigsegv SIGSEGV
/**/

#define IDAAASP_sigusr2 SIGUSR2
/**/

#define JDAAASP_sigpipe SIGPIPE
/**/

#define KDAAASP_sigalrm SIGALRM
/**/

#define LDAAASP_sigterm SIGTERM
/**/

#define MDAAASP_sigstkflt SIGSTKFLT
/**/

#define NDAAASP_sigchld SIGCHLD
/**/

#define ODAAASP_sigcont SIGCONT
/**/

#define PDAAASP_sigstop SIGSTOP
/**/

#define QDAAASP_sigtstp SIGTSTP
/**/

#define RDAAASP_sigttin SIGTTIN
/**/

#define SDAAASP_sigttou SIGTTOU
/**/

#define TDAAASP_sigurg SIGURG
/**/

#define UDAAASP_sigxcpu SIGXCPU
/**/

#define VDAAASP_sigxfsz SIGXFSZ
/**/

#define WDAAASP_sigvtalrm SIGVTALRM
/**/

#define XDAAASP_sigprof SIGPROF
/**/

#define YDAAASP_sigwinch SIGWINCH
/**/

#define ZDAAASP_sigio SIGIO
/**/

#define AEAAASP_sigpwr SIGPWR
#define BYTESPERBITS A_size_t_INT(sizeof(A68_INT))

#define BEAAASP_bytesperbits BYTESPERBITS
/**/

#define FEAAASP_errno errno
#include <sys/socket.h>

#define CEAAASP_afunix AF_UNIX
/**/

#define DEAAASP_afinet AF_INET
/**/

#define EEAAASP_sockstream SOCK_STREAM
#include <algol68/Alibrary.h>
#define A_PARAM(name,value) \
A_int_INT(Agc_param(A_VC_charptr(name),A_INT_int(value)))

#define GEAAASP_gc_param A_PARAM
/**/

#define HEAAASP_garbage_collect Agc_collect
#include <algol68/Alibrary.h>

#define IEAAASP_alwayscollect A_ALWAYS_COLLECT
#include <algol68/Alibrary.h>

#define JEAAASP_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include <algol68/Alibrary.h>

#define KEAAASP_defaultpolicy A_DEFAULT_POLICY
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define RAISE(sig) raise(A_INT_int(A_INT_int(sig)))

#define LEAAASP_ansiraise RAISE
#define SIGNAL(sig,handler) \
  (void *)signal(A_INT_int(sig),(void *)handler)

#define MEAAASP_ansisignal SIGNAL
#define STRTOD(s) strtod(A_VC_charptr(s),NULL)

#define NEAAASP_ansistrtod STRTOD
#define ACCEPT(s,addr,addrlen) \
    A_int_INT(accept(A_INT_int(s),\
              (struct sockaddr *)A_VC_charptr(addr),(socklen_t *)addrlen))

#define OEAAASP_bsdaccept ACCEPT
#define BIND(sockfd,addr,addrlen) \
   A_int_INT(bind(A_INT_int(sockfd),\
                  (struct sockaddr *)A_VC_charptr(addr),A_INT_int(addrlen)))

#define PEAAASP_bsdbind BIND
#define CHMOD(path,mode) \
   A_int_INT(chmod(A_VC_charptr(path),A_INT_int(mode)))

#define QEAAASP_bsdchmod CHMOD
#define CONNECT(sockfd,servaddr,addrlen) \
   A_int_INT(connect(A_INT_int(sockfd),\
             (struct sockaddr *)A_VC_charptr(servaddr),A_INT_int(addrlen)))

#define REAAASP_bsdconnect CONNECT
#define FCHMOD(fd,mode) A_int_INT(fchmod(A_INT_int(fd),A_INT_int(mode)))

#define SEAAASP_bsdfchmod FCHMOD
#include <netdb.h>
#define GETHOSTBYNAME(host) (void *)gethostbyname(A_VC_charptr(host))

#define TEAAASP_bsdgethostbyname GETHOSTBYNAME
#define INET_ATON(cp,inp) \
   A_int_INT(inet_aton(A_VC_charptr(cp),(struct in_addr *)inp))

#define UEAAASP_bsdinetaton INET_ATON
#define ISATTY(fd) A_int_INT(isatty(A_INT_int(fd)))

#define VEAAASP_bsdisatty ISATTY
#define LISTEN(s,backlog) \
   A_int_INT(listen(A_INT_int(s),A_INT_int(backlog)))

#define WEAAASP_bsdlisten LISTEN
#define MKSTEMP(id) A_int_INT(mkstemp(A_VC_charptr(id)))

#define XEAAASP_bsdmkstemp MKSTEMP
#define SHUTDOWN(sd,direction) \
   A_int_INT(shutdown(A_INT_int(sd),A_INT_int(direction)))

#define ZEAAASP_bsdshutdown SHUTDOWN
#define SOCKET(domain,type,protocol) \
   A_int_INT(socket(A_INT_int(domain),\
                    A_INT_int(type),A_INT_int(protocol)))

#define AFAAASP_bsdsocket SOCKET
#include <stdio.h>
#define REAL_SNPRINTF(buff,fmt,num,wd,prec) \
  A_int_INT(snprintf(A_VC_charptr(buff), \
                     A_INT_int(buff.upb), \
                     A_VC_charptr(fmt), \
                     (double)num,A_INT_int(wd), \
                                 A_INT_int(prec)))

#define YEAAASP_bsdrealsnprintf REAL_SNPRINTF
#define AT_EXIT(p) atexit((void *)p)

#define BFAAASP_isoatexit AT_EXIT
#define ON_EXIT(p,a) on_exit((void *)p,(void *)a)

#define CFAAASP_linuxonexit ON_EXIT
#define TCGETATTR(fd,t) \
    A_int_INT(tcgetattr(A_INT_int(fd), (struct termios*)t))

#define DFAAASP_linuxtcgetattr TCGETATTR
#define TCSETATTR(fd,opt,t) \
    A_int_INT(tcsetattr(A_INT_int(fd), A_INT_int(opt),(struct termios*)t))

#define EFAAASP_linuxtcsetattr TCSETATTR
/**/

#define VCAAASP_posixseekcur SEEK_CUR
/**/

#define WCAAASP_posixseekend SEEK_END
#include <sys/types.h>
#include <unistd.h>

#define UCAAASP_posixseekset SEEK_SET
#define STRERROR(e) (void *)strerror(e)

#define QFAAASP_posixstrerror STRERROR
#define CLOSE(fd) A_int_INT(close(A_INT_int(fd)))

#define FFAAASP_posixclose CLOSE
#define CREAT(path,mode) \
   A_int_INT(creat(A_VC_charptr(path),A_INT_int(mode)))

#define GFAAASP_posixcreat CREAT
#define EXIT(n) exit(n)

#define HFAAASP_posixexit EXIT
#define GETENV(id) (void *)getenv(A_VC_charptr(id))

#define IFAAASP_posixgetenv GETENV
#define LSEEK(fd,offset,whence) \
   A_int_INT(lseek(A_INT_int(fd),A_INT_int(offset),A_INT_int(whence)))

#define MFAAASP_posixlseek LSEEK
#define OPEN(path,flags,mode) \
   A_int_INT(open(A_VC_charptr(path),A_INT_int(flags),A_INT_int(mode)))

#define NFAAASP_posixopen OPEN
#define READ(fd,buf,count) \
   A_int_INT(read(A_INT_int(fd),A_VC_charptr(buf),A_INT_int(count)))

#define OFAAASP_posixread READ
#define RENAME(old,new) \
   A_int_INT(rename(A_VC_charptr(old),A_VC_charptr(new)))

#define PFAAASP_posixrename RENAME
#define STRLEN(s) strlen((char *)s)

#define RFAAASP_posixstrlen STRLEN
#define TIME(t) A_time_t_INT(time(A_RI_time_tptr(t)))

#define SFAAASP_posixtime TIME
#define UNLINK(path) A_int_INT(unlink(A_VC_charptr(path)))

#define TFAAASP_posixunlink UNLINK
#define WRITE(fd,buf,count) \
   A_int_INT(write(A_INT_int(fd),A_VC_charptr(buf),A_INT_int(count)))

#define UFAAASP_posixwrite WRITE
/* --- End of imports from spaliens --- */


/* --- Imports from spmodes --- */
/* --- End of imports from spmodes --- */


/* --- DECS initialisation functions --- */
extern void YAAAASP(void);   /* spaliens */
extern void BAAAASP(void);   /* spmodes */
/* --- end of DECS initialisation functions --- */
A68_BITS * GGAAASP_nilfuncptr;
#define HGAAASP_fp32signmask 0X80000000U
#define IGAAASP_fp32expmask 0X7f800000U
#define JGAAASP_fp32mantmask 0X7fffffU
#define KGAAASP_fp32manttopbit 0X400000U
#define LGAAASP_fp32bitsafterexp 23
#define MGAAASP_fp64signmask 0X80000000U
#define NGAAASP_fp64expmask 0X7ff00000U
#define OGAAASP_fp64mantmask 0XfffffU
#define PGAAASP_fp64manttopbit 0X80000U
#define QGAAASP_fp64bitsafterexp 20
#define RGAAASP_fp64mantword 1
#define SGAAASP_fp64expword 2
typedef struct   /* env of non-global proc */
{
int dummy;
} LIAAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  S;
} XIAAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_RC  S;
} HJAAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Str;
} WMAAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Bytes;
A_PAD_INT(PAD_36)
} SQAAASP_generator;

A68_BOOL  UGAAASP_valid(A68_REAL  X);

A68_VOID  FHAAASP_(A68_COMPL  A, A68_INT  N, A68_COMPL  *ReturnedValue);

A68_REAL  WHAAASP_(A68_REAL  A, A68_INT  E);

A68_VOID  HIAAASP_makervc(A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KIAAASP_generator(A68_BOOL  IIAAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  TIAAASP_makervc(A68_VC  S, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WIAAASP_generator(A68_BOOL  UIAAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  DJAAASP_makervc(A68_RC  S, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GJAAASP_generator(A68_BOOL  EJAAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  SJAAASP_cstrtorvc(A68_35 * S, A68_VC  *ReturnedValue);

A68_CHAR * ZJAAASP_vctocharptr(A68_VC  Buf);

A68_BITS * DKAAASP_vbtocptr(A68_113  Buf);

A68_INT * HKAAASP_vitointptr(A68_115  Buf);

A68_35 * LKAAASP_strtocstr(A68_VC  S);

A68_REAL  PKAAASP_flatrvr(A68_VC  V);

A68_SREAL  YKAAASP_flatrvsr(A68_VC  V);

A68_LBITS  HLAAASP_flatrvlb(A68_VC  V);

A68_BITS  QLAAASP_flatrvb(A68_VC  V);

A68_SBITS  ZLAAASP_flatrvsb(A68_VC  V);

A68_SSBITS  IMAAASP_flatrvssb(A68_VC  V);

A68_VOID  SMAAASP_z(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VMAAASP_generator(A68_BOOL  TMAAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  HNAAASP_cptrtorvc(A68_BITS * Cptr, A68_VC  *ReturnedValue);

A68_SSINT  NNAAASP_min(A68_SSINT  A, A68_SSINT  B);

A68_SINT  SNAAASP_min(A68_SINT  A, A68_SINT  B);

A68_INT  XNAAASP_min(A68_INT  A, A68_INT  B);

A68_LINT  COAAASP_min(A68_LINT  A, A68_LINT  B);

A68_REAL  HOAAASP_min(A68_REAL  A, A68_INT  B);

A68_REAL  MOAAASP_min(A68_INT  A, A68_REAL  B);

A68_REAL  ROAAASP_min(A68_REAL  A, A68_REAL  B);

A68_SREAL  WOAAASP_min(A68_SREAL  A, A68_SREAL  B);

A68_SSINT  BPAAASP_max(A68_SSINT  A, A68_SSINT  B);

A68_SINT  GPAAASP_max(A68_SINT  A, A68_SINT  B);

A68_INT  LPAAASP_max(A68_INT  A, A68_INT  B);

A68_LINT  QPAAASP_max(A68_LINT  A, A68_LINT  B);

A68_REAL  VPAAASP_max(A68_REAL  A, A68_INT  B);

A68_REAL  AQAAASP_max(A68_INT  A, A68_REAL  B);

A68_REAL  FQAAASP_max(A68_REAL  A, A68_REAL  B);

A68_SREAL  KQAAASP_max(A68_SREAL  A, A68_SREAL  B);

A68_VOID  OQAAASP_sysbuff(A68_INT  Bytes, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RQAAASP_generator(A68_BOOL  PQAAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BITS  YQAAASP_elem(A68_INT  N);

A68_BOOL  ERAAASP_elem(A68_INT  N, A68_LBITS  Lb);

A68_BOOL  SRAAASP_elem(A68_INT  N, A68_SBITS  Sb);

A68_BOOL  YRAAASP_elem(A68_INT  N, A68_SSBITS  Ssb);

A68_43  ESAAASP_(A68_43  S, A68_43  T);

A68_INT  SSAAASP_round(A68_REAL  R);

A68_INT  YSAAASP_entier(A68_REAL  R);

A_STATIC A68_VOID  KIAAASP_generator(A68_BOOL  IIAAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LIAAASP_generator *)NonLocals)->x)
{ 
A68_VC  MIAAASP;  /* clause result */
A68_VC  NIAAASP;  /* OPERATORS - dynamic generator */
{ 
NIAAASP.upb = 1 ;
( IIAAASP_anonymous? A_VLOC(A68_CHAR ,NIAAASP): A_VHEAP(A68_CHAR ,NIAAASP) );
MIAAASP = NIAAASP;
} 
*ReturnedValue = (MIAAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  WIAAASP_generator(A68_BOOL  UIAAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XIAAASP_generator *)NonLocals)->x)
{ 
A68_VC  YIAAASP;  /* clause result */
A68_VC  ZIAAASP;  /* OPERATORS - dynamic generator */
{ 
ZIAAASP.upb = NL(S).upb ;
( UIAAASP_anonymous? A_VLOC(A68_CHAR ,ZIAAASP): A_VHEAP(A68_CHAR ,ZIAAASP) );
YIAAASP = ZIAAASP;
} 
*ReturnedValue = (YIAAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  GJAAASP_generator(A68_BOOL  EJAAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HJAAASP_generator *)NonLocals)->x)
{ 
A68_VC  IJAAASP;  /* clause result */
A68_VC  JJAAASP;  /* OPERATORS - dynamic generator */
{ 
JJAAASP.upb = ((NL(S).dim[0].upb-NL(S).dim[0].lwb)+1) ;
( EJAAASP_anonymous? A_VLOC(A68_CHAR ,JJAAASP): A_VHEAP(A68_CHAR ,JJAAASP) );
IJAAASP = JJAAASP;
} 
*ReturnedValue = (IJAAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  VMAAASP_generator(A68_BOOL  TMAAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WMAAASP_generator *)NonLocals)->x)
{ 
A68_VC  XMAAASP;  /* clause result */
A68_VC  YMAAASP;  /* OPERATORS - dynamic generator */
{ 
YMAAASP.upb = (NL(Str).upb+1) ;
( TMAAASP_anonymous? A_VLOC(A68_CHAR ,YMAAASP): A_VHEAP(A68_CHAR ,YMAAASP) );
XMAAASP = YMAAASP;
} 
*ReturnedValue = (XMAAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  RQAAASP_generator(A68_BOOL  PQAAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SQAAASP_generator *)NonLocals)->x)
{ 
A68_VC  TQAAASP;  /* clause result */
A68_VC  UQAAASP;  /* OPERATORS - dynamic generator */
{ 
UQAAASP.upb = NL(Bytes) ;
( PQAAASP_anonymous? A_VLOC(A68_CHAR ,UQAAASP): A_VHEAP(A68_CHAR ,UQAAASP) );
TQAAASP = UQAAASP;
} 
*ReturnedValue = (TQAAASP);
return;
} 
#undef NL

A68_BOOL  UGAAASP_valid(A68_REAL  X)
{ 
union {  /* BIOP 99 */
A68_REAL   source;
A68_140   destination;
} VGAAASP; 
A68_140  WGAAASP_xx;
A68_113  XGAAASP;  /* OPERATORS - istruct -> vector */
A68_113  YGAAASP;  /* OPERATORS - simple index */
A68_BITS  ZGAAASP_xe;
A68_BOOL  AHAAASP;  /* clause result */
A68_INT  BHAAASP;  /* SHR */
A68_BITS  CHAAASP;  /* SHR */
A_PROC_ENTRY(valid);
 /* line 98: */
 /* line 99: */
{ 
VGAAASP.source = X ;
WGAAASP_xx = (VGAAASP.destination);
 /* line 100: */
YGAAASP = A_HISVEC(XGAAASP,WGAAASP_xx,2,A68_BITS ) ;
ZGAAASP_xe = A_VINDEX(YGAAASP,SGAAASP_fp64expword);
 /* line 101: */
 /* line 102: */
BHAAASP = 31 ;
CHAAASP = (A68_BITS )((A68_INT )(A68_BITS )(ZGAAASP_xe&0X7fffffffU)-(A68_INT )0X7ff00000U) ;
AHAAASP = (0X1U==A_SHR(CHAAASP,BHAAASP));
} 
A_PROC_EXIT(valid);
return( AHAAASP );
} 
#undef NL

A68_VOID  FHAAASP_(A68_COMPL  A, A68_INT  N, A68_COMPL  *ReturnedValue)
{ 
A68_COMPL  GHAAASP;  /* REAL to COMPLEX */
A68_COMPL  HHAAASP_b;
A68_COMPL  IHAAASP;  /* collateral clause result */
A68_COMPL  JHAAASP;  /* ADICOPS - TIMES COMPL */
A68_COMPL  KHAAASP_c;
A68_COMPL  LHAAASP;  /* collateral clause result */
A68_COMPL  MHAAASP;  /* REAL to COMPLEX */
A68_COMPL  NHAAASP;  /* ADICOPS - TIMES COMPL L op */
A68_COMPL  OHAAASP;  /* ADICOPS - TIMES COMPL */
A68_COMPL  PHAAASP_rawresult;
A68_BOOL  QHAAASP;  /* optbool result */
A68_BOOL  RHAAASP;  /* clause result */
A68_COMPL  SHAAASP;  /* clause result */
A68_COMPL  THAAASP;  /* REAL to COMPLEX */
A_PROC_ENTRY(**);
 /* line 105: */
{ 
HHAAASP_b = (A_COMPL_RC(GHAAASP,(A68_REAL )N));
 /* line 106: */
IHAAASP.Re = GCAAASP_ln(A_COMPL_ABS(A));
IHAAASP.Im = A_COMPL_ARG(A);
KHAAASP_c = A_COMPL_TIMES(JHAAASP,HHAAASP_b,IHAAASP);
 /* line 107: */
LHAAASP.Re = ICAAASP_cos(A_COMPL_IM(KHAAASP_c));
LHAAASP.Im = JCAAASP_sin(A_COMPL_IM(KHAAASP_c));
NHAAASP = A_COMPL_RC(MHAAASP,FCAAASP_exp(A_COMPL_RE(KHAAASP_c))) ;
PHAAASP_rawresult = A_COMPL_TIMES(OHAAASP,NHAAASP,LHAAASP);
 /* line 108: */
 /* line 109: */
QHAAASP = UGAAASP_valid(PHAAASP_rawresult.Re);
if ( QHAAASP )
{QHAAASP = UGAAASP_valid(PHAAASP_rawresult.Im);
}
 /* line 110: */
RHAAASP = QHAAASP;
if ( RHAAASP )
{ 
 /* line 111: */
SHAAASP = PHAAASP_rawresult;
} 
else
{ 
SHAAASP = A_COMPL_RC(THAAASP,(A68_REAL )0);
} 
} 
A_PROC_EXIT(**);
*ReturnedValue = (SHAAASP);
return;
} 
#undef NL

A68_REAL  WHAAASP_(A68_REAL  A, A68_INT  E)
{ 
union {  /* BIOP 99 */
A68_REAL   source;
A68_140   destination;
} YHAAASP; 
A68_140  XHAAASP_b;
A68_113  ZHAAASP;  /* OPERATORS - istruct -> vector */
A68_113  AIAAASP;  /* OPERATORS - simple index */
A68_BITS * BIAAASP_bexp;
A68_BITS  CIAAASP;  /* SHR */
A68_BITS  DIAAASP;  /* SHL */
A68_REAL  EIAAASP;  /* clause result */
union {  /* BIOP 99 */
A68_140   source;
A68_REAL   destination;
} FIAAASP; 
A_PROC_ENTRY(&*);
 /* line 116: */
 /* line 117: */
{ 
YHAAASP.source = A ;
XHAAASP_b = (YHAAASP.destination);
AIAAASP = A_ISVEC(ZHAAASP,(&XHAAASP_b),2,A68_BITS ) ;
BIAAASP_bexp = (&A_VINDEX(AIAAASP,SGAAASP_fp64expword));
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
CIAAASP = (A68_BITS )((*BIAAASP_bexp)&NGAAASP_fp64expmask) ;
DIAAASP = (A68_BITS )((A68_INT )A_SHR(CIAAASP,QGAAASP_fp64bitsafterexp)+E) ;
(*BIAAASP_bexp) = (A68_BITS )((A68_BITS )((*BIAAASP_bexp)&~NGAAASP_fp64expmask)|A_SHL(DIAAASP,QGAAASP_fp64bitsafterexp));
 /* line 122: */
 /* line 123: */
FIAAASP.source = XHAAASP_b ;
EIAAASP = (FIAAASP.destination);
} 
A_PROC_EXIT(&*);
return( EIAAASP );
} 
#undef NL

A68_VOID  HIAAASP_makervc(A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_34  JIAAASP_generator;   /* proc value of non-global proc */
A68_VC  OIAAASP;  /* clause result */
A68_VC  PIAAASP;  /* avoid structure result */
A68_VC  QIAAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RIAAASP;  /* OPERATORS - assign op */
A_PROC_ENTRY(makervc);
A_CLOSURE( JIAAASP_generator, KIAAASP_generator, LIAAASP_generator );
A_CALLPROC(JIAAASP_generator,(A68_FALSE, &PIAAASP),(A68_FALSE, &PIAAASP,(JIAAASP_generator).nonlocals));
RIAAASP = A_HVEC(QIAAASP,C,A68_CHAR ) ;
A_VASSIGN2(RIAAASP,PIAAASP,A68_CHAR ) ;
OIAAASP = PIAAASP;
A_PROC_EXIT(makervc);
*ReturnedValue = (OIAAASP);
return;
} 
#undef NL

A68_VOID  TIAAASP_makervc(A68_VC  S, A68_VC  *ReturnedValue)
{ 
A68_34  VIAAASP_generator;   /* proc value of non-global proc */
A68_VC  AJAAASP;  /* clause result */
A68_VC  BJAAASP;  /* avoid structure result */
A_PROC_ENTRY(makervc);
A_CLOSURE( VIAAASP_generator, WIAAASP_generator, XIAAASP_generator );
(( XIAAASP_generator * ) ( VIAAASP_generator.nonlocals )) -> S = S;
A_CALLPROC(VIAAASP_generator,(A68_FALSE, &BJAAASP),(A68_FALSE, &BJAAASP,(VIAAASP_generator).nonlocals));
A_VASSIGN2(S,BJAAASP,A68_CHAR ) ;
AJAAASP = BJAAASP;
A_PROC_EXIT(makervc);
*ReturnedValue = (AJAAASP);
return;
} 
#undef NL

A68_VOID  DJAAASP_makervc(A68_RC  S, A68_VC  *ReturnedValue)
{ 
A68_34  FJAAASP_generator;   /* proc value of non-global proc */
A68_VC  KJAAASP;  /* avoid structure result */
A68_VC  LJAAASP_v;
A68_INT  MJAAASP_i;
A68_INT  NJAAASP;  /* to part of loop */
A68_INT  OJAAASP;  /* YIELD */
A68_CHAR * PJAAASP;  /* YIELD */
A68_VC  QJAAASP;  /* clause result */
A_PROC_ENTRY(makervc);
 /* line 128: */
 /* line 129: */
{ 
A_CLOSURE( FJAAASP_generator, GJAAASP_generator, HJAAASP_generator );
(( HJAAASP_generator * ) ( FJAAASP_generator.nonlocals )) -> S = S;
A_CALLPROC(FJAAASP_generator,(A68_FALSE, &KJAAASP),(A68_FALSE, &KJAAASP,(FJAAASP_generator).nonlocals));
LJAAASP_v = KJAAASP;
 /* line 130: */
 /* line 131: */
NJAAASP = S.dim[0].upb;
for ( MJAAASP_i = S.dim[0].lwb;
MJAAASP_i <= NJAAASP;
MJAAASP_i += 1 )
{ 
 /* line 132: */
 /* line 133: */
OJAAASP = ((MJAAASP_i-S.dim[0].lwb)+1) ;
PJAAASP = (&A_VINDEX(LJAAASP_v,OJAAASP)) ;
(*PJAAASP) = A_R1INDEX(S,MJAAASP_i);
}
 /* line 134: */
 /* line 135: */
QJAAASP = LJAAASP_v;
} 
A_PROC_EXIT(makervc);
*ReturnedValue = (QJAAASP);
return;
} 
#undef NL

A68_VOID  SJAAASP_cstrtorvc(A68_35 * S, A68_VC  *ReturnedValue)
{ 
A68_VC  TJAAASP;  /* clause result */
A68_VC  UJAAASP;  /* OPERATORS - nil -> mode */
A68_VC  VJAAASP;  /* OPERATORS - istruct -> vector */
A68_VC  WJAAASP;  /* OPERATORS - trim index */
A68_VC  XJAAASP;  /* OPERATORS - trim index */
A_PROC_ENTRY(cstrtorvc);
 /* line 142: */
if ( (S==(A68_35 *)A68_NIL) )
{ 
TJAAASP = A_VVAC(UJAAASP);
} 
else
{ 
WJAAASP = A_ISVEC(VJAAASP,S,16000000,A68_CHAR ) ;
TJAAASP = A_VTRIM(XJAAASP,(WJAAASP),A_VTSCRIPT(&(XJAAASP.upb),(WJAAASP).upb,1,RFAAASP_posixstrlen(S)));
} 
A_PROC_EXIT(cstrtorvc);
*ReturnedValue = (TJAAASP);
return;
} 
#undef NL

A68_CHAR * ZJAAASP_vctocharptr(A68_VC  Buf)
{ 
A68_CHAR * AKAAASP;  /* clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_40   destination;
} BKAAASP; 
A_PROC_ENTRY(vctocharptr);
 /* line 151: */
BKAAASP.source = Buf ;
AKAAASP = (BKAAASP.destination).Data;
A_PROC_EXIT(vctocharptr);
return( AKAAASP );
} 
#undef NL

A68_BITS * DKAAASP_vbtocptr(A68_113  Buf)
{ 
A68_BITS * EKAAASP;  /* clause result */
union {  /* BIOP 99 */
A68_113   source;
A68_41   destination;
} FKAAASP; 
A_PROC_ENTRY(vbtocptr);
FKAAASP.source = Buf ;
EKAAASP = (FKAAASP.destination).Data;
A_PROC_EXIT(vbtocptr);
return( EKAAASP );
} 
#undef NL

A68_INT * HKAAASP_vitointptr(A68_115  Buf)
{ 
A68_INT * IKAAASP;  /* clause result */
union {  /* BIOP 99 */
A68_115   source;
A68_42   destination;
} JKAAASP; 
A_PROC_ENTRY(vitointptr);
JKAAASP.source = Buf ;
IKAAASP = (JKAAASP.destination).Data;
A_PROC_EXIT(vitointptr);
return( IKAAASP );
} 
#undef NL

A68_35 * LKAAASP_strtocstr(A68_VC  S)
{ 
A68_35 * MKAAASP;  /* clause result */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_35 *  destination;
} NKAAASP; 
A_PROC_ENTRY(strtocstr);
NKAAASP.source = ZJAAASP_vctocharptr(S) ;
MKAAASP = (NKAAASP.destination);
A_PROC_EXIT(strtocstr);
return( MKAAASP );
} 
#undef NL

A68_REAL  PKAAASP_flatrvr(A68_VC  V)
{ 
A68_124  QKAAASP_s;
A68_INT  RKAAASP_i;
A68_VC  SKAAASP;  /* OPERATORS - istruct -> vector */
A68_VC  TKAAASP;  /* OPERATORS - simple index */
A68_CHAR * UKAAASP;  /* YIELD */
A68_REAL  VKAAASP;  /* clause result */
union {  /* BIOP 99 */
A68_124   source;
A68_REAL   destination;
} WKAAASP; 
A_PROC_ENTRY(flatrvr);
 /* line 158: */
 /* line 159: */
{ 
 /* line 160: */
for ( RKAAASP_i = 1;
RKAAASP_i <= 8;
RKAAASP_i += 1 )
{ 
TKAAASP = A_ISVEC(SKAAASP,(&QKAAASP_s),8,A68_CHAR ) ;
UKAAASP = (&A_VINDEX(TKAAASP,RKAAASP_i)) ;
(*UKAAASP) = (*(&A_VINDEX(V,RKAAASP_i)));
}
 /* line 161: */
 /* line 162: */
WKAAASP.source = QKAAASP_s ;
VKAAASP = (WKAAASP.destination);
} 
A_PROC_EXIT(flatrvr);
return( VKAAASP );
} 
#undef NL

A68_SREAL  YKAAASP_flatrvsr(A68_VC  V)
{ 
A68_126  ZKAAASP_s;
A68_INT  ALAAASP_i;
A68_VC  BLAAASP;  /* OPERATORS - istruct -> vector */
A68_VC  CLAAASP;  /* OPERATORS - simple index */
A68_CHAR * DLAAASP;  /* YIELD */
A68_SREAL  ELAAASP;  /* clause result */
union {  /* BIOP 99 */
A68_126   source;
A68_SREAL   destination;
} FLAAASP; 
A_PROC_ENTRY(flatrvsr);
 /* line 165: */
 /* line 166: */
{ 
 /* line 167: */
for ( ALAAASP_i = 1;
ALAAASP_i <= 4;
ALAAASP_i += 1 )
{ 
CLAAASP = A_ISVEC(BLAAASP,(&ZKAAASP_s),4,A68_CHAR ) ;
DLAAASP = (&A_VINDEX(CLAAASP,ALAAASP_i)) ;
(*DLAAASP) = (*(&A_VINDEX(V,ALAAASP_i)));
}
 /* line 168: */
 /* line 169: */
FLAAASP.source = ZKAAASP_s ;
ELAAASP = (FLAAASP.destination);
} 
A_PROC_EXIT(flatrvsr);
return( ELAAASP );
} 
#undef NL

A68_LBITS  HLAAASP_flatrvlb(A68_VC  V)
{ 
A68_124  ILAAASP_s;
A68_INT  JLAAASP_i;
A68_VC  KLAAASP;  /* OPERATORS - istruct -> vector */
A68_VC  LLAAASP;  /* OPERATORS - simple index */
A68_CHAR * MLAAASP;  /* YIELD */
A68_LBITS  NLAAASP;  /* clause result */
union {  /* BIOP 99 */
A68_124   source;
A68_LBITS   destination;
} OLAAASP; 
A_PROC_ENTRY(flatrvlb);
 /* line 172: */
 /* line 173: */
{ 
 /* line 174: */
for ( JLAAASP_i = 1;
JLAAASP_i <= 8;
JLAAASP_i += 1 )
{ 
LLAAASP = A_ISVEC(KLAAASP,(&ILAAASP_s),8,A68_CHAR ) ;
MLAAASP = (&A_VINDEX(LLAAASP,JLAAASP_i)) ;
(*MLAAASP) = (*(&A_VINDEX(V,JLAAASP_i)));
}
 /* line 175: */
 /* line 176: */
OLAAASP.source = ILAAASP_s ;
NLAAASP = (OLAAASP.destination);
} 
A_PROC_EXIT(flatrvlb);
return( NLAAASP );
} 
#undef NL

A68_BITS  QLAAASP_flatrvb(A68_VC  V)
{ 
A68_126  RLAAASP_s;
A68_INT  SLAAASP_i;
A68_VC  TLAAASP;  /* OPERATORS - istruct -> vector */
A68_VC  ULAAASP;  /* OPERATORS - simple index */
A68_CHAR * VLAAASP;  /* YIELD */
A68_BITS  WLAAASP;  /* clause result */
union {  /* BIOP 99 */
A68_126   source;
A68_BITS   destination;
} XLAAASP; 
A_PROC_ENTRY(flatrvb);
 /* line 179: */
 /* line 180: */
{ 
 /* line 181: */
for ( SLAAASP_i = 1;
SLAAASP_i <= 4;
SLAAASP_i += 1 )
{ 
ULAAASP = A_ISVEC(TLAAASP,(&RLAAASP_s),4,A68_CHAR ) ;
VLAAASP = (&A_VINDEX(ULAAASP,SLAAASP_i)) ;
(*VLAAASP) = (*(&A_VINDEX(V,SLAAASP_i)));
}
 /* line 182: */
 /* line 183: */
XLAAASP.source = RLAAASP_s ;
WLAAASP = (XLAAASP.destination);
} 
A_PROC_EXIT(flatrvb);
return( WLAAASP );
} 
#undef NL

A68_SBITS  ZLAAASP_flatrvsb(A68_VC  V)
{ 
A68_132  AMAAASP_s;
A68_INT  BMAAASP_i;
A68_VC  CMAAASP;  /* OPERATORS - istruct -> vector */
A68_VC  DMAAASP;  /* OPERATORS - simple index */
A68_CHAR * EMAAASP;  /* YIELD */
A68_SBITS  FMAAASP;  /* clause result */
union {  /* BIOP 99 */
A68_132   source;
A68_SBITS   destination;
} GMAAASP; 
A_PROC_ENTRY(flatrvsb);
 /* line 186: */
 /* line 187: */
{ 
 /* line 188: */
for ( BMAAASP_i = 1;
BMAAASP_i <= 2;
BMAAASP_i += 1 )
{ 
DMAAASP = A_ISVEC(CMAAASP,(&AMAAASP_s),2,A68_CHAR ) ;
EMAAASP = (&A_VINDEX(DMAAASP,BMAAASP_i)) ;
(*EMAAASP) = (*(&A_VINDEX(V,BMAAASP_i)));
}
 /* line 189: */
 /* line 190: */
GMAAASP.source = AMAAASP_s ;
FMAAASP = (GMAAASP.destination);
} 
A_PROC_EXIT(flatrvsb);
return( FMAAASP );
} 
#undef NL

A68_SSBITS  IMAAASP_flatrvssb(A68_VC  V)
{ 
A68_134  JMAAASP_s;
A68_VC  KMAAASP;  /* OPERATORS - istruct -> vector */
A68_VC  LMAAASP;  /* OPERATORS - simple index */
A68_INT  MMAAASP;  /* YIELD */
A68_INT  NMAAASP;  /* YIELD */
A68_CHAR * OMAAASP;  /* YIELD */
A68_SSBITS  PMAAASP;  /* clause result */
union {  /* BIOP 99 */
A68_134   source;
A68_SSBITS   destination;
} QMAAASP; 
A_PROC_ENTRY(flatrvssb);
 /* line 193: */
 /* line 194: */
{ 
 /* line 195: */
LMAAASP = A_ISVEC(KMAAASP,(&JMAAASP_s),1,A68_CHAR ) ;
MMAAASP = 1 ;
NMAAASP = 1 ;
OMAAASP = (&A_VINDEX(LMAAASP,MMAAASP)) ;
(*OMAAASP) = (*(&A_VINDEX(V,NMAAASP)));
 /* line 196: */
 /* line 197: */
QMAAASP.source = JMAAASP_s ;
PMAAASP = (QMAAASP.destination);
} 
A_PROC_EXIT(flatrvssb);
return( PMAAASP );
} 
#undef NL

A68_VOID  SMAAASP_z(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_34  UMAAASP_generator;   /* proc value of non-global proc */
A68_VC  ANAAASP;  /* avoid structure result */
A68_VC  ZMAAASP_v;
A68_VC  BNAAASP;  /* OPERATORS - trim index */
A68_VC  CNAAASP;  /* YIELD */
A68_INT  DNAAASP;  /* YIELD */
A68_CHAR * ENAAASP;  /* YIELD */
A68_VC  FNAAASP;  /* clause result */
A_PROC_ENTRY(z);
 /* line 201: */
 /* line 202: */
{ 
A_CLOSURE( UMAAASP_generator, VMAAASP_generator, WMAAASP_generator );
(( WMAAASP_generator * ) ( UMAAASP_generator.nonlocals )) -> Str = Str;
A_CALLPROC(UMAAASP_generator,(A68_TRUE, &ANAAASP),(A68_TRUE, &ANAAASP,(UMAAASP_generator).nonlocals));
ZMAAASP_v = ANAAASP;
 /* line 203: */
CNAAASP = A_VTRIM(BNAAASP,(ZMAAASP_v),A_VTSCRIPT(&(BNAAASP.upb),(ZMAAASP_v).upb,1,Str.upb)) ;
A_VASSIGN2(Str,CNAAASP,A68_CHAR );
DNAAASP = ZMAAASP_v.upb ;
ENAAASP = (&A_VINDEX(ZMAAASP_v,DNAAASP)) ;
(*ENAAASP) = (A68_SSBITS)0;
 /* line 204: */
 /* line 205: */
FNAAASP = ZMAAASP_v;
} 
A_PROC_EXIT(z);
*ReturnedValue = (FNAAASP);
return;
} 
#undef NL

A68_VOID  HNAAASP_cptrtorvc(A68_BITS * Cptr, A68_VC  *ReturnedValue)
{ 
A68_VC  INAAASP;  /* clause result */
union {  /* BIOP 99 */
A68_BITS *  source;
A68_35 *  destination;
} JNAAASP; 
A68_VC  KNAAASP;  /* avoid structure result */
A_PROC_ENTRY(cptrtorvc);
JNAAASP.source = Cptr ;
SJAAASP_cstrtorvc( (JNAAASP.destination), &KNAAASP );
INAAASP = KNAAASP;
A_PROC_EXIT(cptrtorvc);
*ReturnedValue = (INAAASP);
return;
} 
#undef NL

A68_SSINT  NNAAASP_min(A68_SSINT  A, A68_SSINT  B)
{ 
A68_SSINT  ONAAASP;  /* yield of code insert */
A68_SSINT  PNAAASP;  /* clause result */
A_PROC_ENTRY(min);
 /* line 227: */
#define a A
#define b B
#define RESULT ONAAASP
{RESULT=A_MIN(a,b);
}
#undef RESULT
#undef b
#undef a
PNAAASP = ONAAASP;
A_PROC_EXIT(min);
return( PNAAASP );
} 
#undef NL

A68_SINT  SNAAASP_min(A68_SINT  A, A68_SINT  B)
{ 
A68_SINT  TNAAASP;  /* yield of code insert */
A68_SINT  UNAAASP;  /* clause result */
A_PROC_ENTRY(min);
#define a A
#define b B
#define RESULT TNAAASP
{RESULT=A_MIN(a,b);
}
#undef RESULT
#undef b
#undef a
UNAAASP = TNAAASP;
A_PROC_EXIT(min);
return( UNAAASP );
} 
#undef NL

A68_INT  XNAAASP_min(A68_INT  A, A68_INT  B)
{ 
A68_INT  YNAAASP;  /* yield of code insert */
A68_INT  ZNAAASP;  /* clause result */
A_PROC_ENTRY(min);
#define a A
#define b B
#define RESULT YNAAASP
{RESULT=A_MIN(a,b);
}
#undef RESULT
#undef b
#undef a
ZNAAASP = YNAAASP;
A_PROC_EXIT(min);
return( ZNAAASP );
} 
#undef NL

A68_LINT  COAAASP_min(A68_LINT  A, A68_LINT  B)
{ 
A68_LINT  DOAAASP;  /* yield of code insert */
A68_LINT  EOAAASP;  /* clause result */
A_PROC_ENTRY(min);
#define a A
#define b B
#define RESULT DOAAASP
{RESULT=A_MIN(a,b);
}
#undef RESULT
#undef b
#undef a
EOAAASP = DOAAASP;
A_PROC_EXIT(min);
return( EOAAASP );
} 
#undef NL

A68_REAL  HOAAASP_min(A68_REAL  A, A68_INT  B)
{ 
A68_REAL  IOAAASP;  /* yield of code insert */
A68_REAL  JOAAASP;  /* clause result */
A_PROC_ENTRY(min);
#define a A
#define b B
#define RESULT IOAAASP
{RESULT=A_MIN(a,b);
}
#undef RESULT
#undef b
#undef a
JOAAASP = IOAAASP;
A_PROC_EXIT(min);
return( JOAAASP );
} 
#undef NL

A68_REAL  MOAAASP_min(A68_INT  A, A68_REAL  B)
{ 
A68_REAL  NOAAASP;  /* yield of code insert */
A68_REAL  OOAAASP;  /* clause result */
A_PROC_ENTRY(min);
#define a A
#define b B
#define RESULT NOAAASP
{RESULT=A_MIN(a,b);
}
#undef RESULT
#undef b
#undef a
OOAAASP = NOAAASP;
A_PROC_EXIT(min);
return( OOAAASP );
} 
#undef NL

A68_REAL  ROAAASP_min(A68_REAL  A, A68_REAL  B)
{ 
A68_REAL  SOAAASP;  /* yield of code insert */
A68_REAL  TOAAASP;  /* clause result */
A_PROC_ENTRY(min);
#define a A
#define b B
#define RESULT SOAAASP
{RESULT=A_MIN(a,b);
}
#undef RESULT
#undef b
#undef a
TOAAASP = SOAAASP;
A_PROC_EXIT(min);
return( TOAAASP );
} 
#undef NL

A68_SREAL  WOAAASP_min(A68_SREAL  A, A68_SREAL  B)
{ 
A68_SREAL  XOAAASP;  /* yield of code insert */
A68_SREAL  YOAAASP;  /* clause result */
A_PROC_ENTRY(min);
#define a A
#define b B
#define RESULT XOAAASP
{RESULT=A_MIN(a,b);
}
#undef RESULT
#undef b
#undef a
YOAAASP = XOAAASP;
A_PROC_EXIT(min);
return( YOAAASP );
} 
#undef NL

A68_SSINT  BPAAASP_max(A68_SSINT  A, A68_SSINT  B)
{ 
A68_SSINT  CPAAASP;  /* yield of code insert */
A68_SSINT  DPAAASP;  /* clause result */
A_PROC_ENTRY(max);
#define a A
#define b B
#define RESULT CPAAASP
{RESULT=A_MAX(a,b);
}
#undef RESULT
#undef b
#undef a
DPAAASP = CPAAASP;
A_PROC_EXIT(max);
return( DPAAASP );
} 
#undef NL

A68_SINT  GPAAASP_max(A68_SINT  A, A68_SINT  B)
{ 
A68_SINT  HPAAASP;  /* yield of code insert */
A68_SINT  IPAAASP;  /* clause result */
A_PROC_ENTRY(max);
#define a A
#define b B
#define RESULT HPAAASP
{RESULT=A_MAX(a,b);
}
#undef RESULT
#undef b
#undef a
IPAAASP = HPAAASP;
A_PROC_EXIT(max);
return( IPAAASP );
} 
#undef NL

A68_INT  LPAAASP_max(A68_INT  A, A68_INT  B)
{ 
A68_INT  MPAAASP;  /* yield of code insert */
A68_INT  NPAAASP;  /* clause result */
A_PROC_ENTRY(max);
#define a A
#define b B
#define RESULT MPAAASP
{RESULT=A_MAX(a,b);
}
#undef RESULT
#undef b
#undef a
NPAAASP = MPAAASP;
A_PROC_EXIT(max);
return( NPAAASP );
} 
#undef NL

A68_LINT  QPAAASP_max(A68_LINT  A, A68_LINT  B)
{ 
A68_LINT  RPAAASP;  /* yield of code insert */
A68_LINT  SPAAASP;  /* clause result */
A_PROC_ENTRY(max);
#define a A
#define b B
#define RESULT RPAAASP
{RESULT=A_MAX(a,b);
}
#undef RESULT
#undef b
#undef a
SPAAASP = RPAAASP;
A_PROC_EXIT(max);
return( SPAAASP );
} 
#undef NL

A68_REAL  VPAAASP_max(A68_REAL  A, A68_INT  B)
{ 
A68_REAL  WPAAASP;  /* yield of code insert */
A68_REAL  XPAAASP;  /* clause result */
A_PROC_ENTRY(max);
#define a A
#define b B
#define RESULT WPAAASP
{RESULT=A_MAX(a,b);
}
#undef RESULT
#undef b
#undef a
XPAAASP = WPAAASP;
A_PROC_EXIT(max);
return( XPAAASP );
} 
#undef NL

A68_REAL  AQAAASP_max(A68_INT  A, A68_REAL  B)
{ 
A68_REAL  BQAAASP;  /* yield of code insert */
A68_REAL  CQAAASP;  /* clause result */
A_PROC_ENTRY(max);
#define a A
#define b B
#define RESULT BQAAASP
{RESULT=A_MAX(a,b);
}
#undef RESULT
#undef b
#undef a
CQAAASP = BQAAASP;
A_PROC_EXIT(max);
return( CQAAASP );
} 
#undef NL

A68_REAL  FQAAASP_max(A68_REAL  A, A68_REAL  B)
{ 
A68_REAL  GQAAASP;  /* yield of code insert */
A68_REAL  HQAAASP;  /* clause result */
A_PROC_ENTRY(max);
#define a A
#define b B
#define RESULT GQAAASP
{RESULT=A_MAX(a,b);
}
#undef RESULT
#undef b
#undef a
HQAAASP = GQAAASP;
A_PROC_EXIT(max);
return( HQAAASP );
} 
#undef NL

A68_SREAL  KQAAASP_max(A68_SREAL  A, A68_SREAL  B)
{ 
A68_SREAL  LQAAASP;  /* yield of code insert */
A68_SREAL  MQAAASP;  /* clause result */
A_PROC_ENTRY(max);
 /* line 246: */
#define a A
#define b B
#define RESULT LQAAASP
{RESULT=A_MAX(a,b);
}
#undef RESULT
#undef b
#undef a
MQAAASP = LQAAASP;
A_PROC_EXIT(max);
return( MQAAASP );
} 
#undef NL

A68_VOID  OQAAASP_sysbuff(A68_INT  Bytes, A68_VC  *ReturnedValue)
{ 
A68_34  QQAAASP_generator;   /* proc value of non-global proc */
A68_VC  VQAAASP;  /* clause result */
A68_VC  WQAAASP;  /* avoid structure result */
A_PROC_ENTRY(sysbuff);
A_CLOSURE( QQAAASP_generator, RQAAASP_generator, SQAAASP_generator );
(( SQAAASP_generator * ) ( QQAAASP_generator.nonlocals )) -> Bytes = Bytes;
A_CALLPROC(QQAAASP_generator,(A68_FALSE, &WQAAASP),(A68_FALSE, &WQAAASP,(QQAAASP_generator).nonlocals));
VQAAASP = WQAAASP;
A_PROC_EXIT(sysbuff);
*ReturnedValue = (VQAAASP);
return;
} 
#undef NL

A68_BITS  YQAAASP_elem(A68_INT  N)
{ 
A68_BITS  ZQAAASP;  /* clause result */
A68_INT  ARAAASP;  /* SHR */
A68_BITS  BRAAASP;  /* SHR */
A_PROC_ENTRY(elem);
ARAAASP = (N-1) ;
BRAAASP = 0X80000000U ;
ZQAAASP = A_SHR(BRAAASP,ARAAASP);
A_PROC_EXIT(elem);
return( ZQAAASP );
} 
#undef NL

A68_BOOL  ERAAASP_elem(A68_INT  N, A68_LBITS  Lb)
{ 
union {  /* BIOP 99 */
A68_LBITS   source;
A68_140   destination;
} FRAAASP; 
A68_140  GRAAASP_s2t;
A68_BOOL  HRAAASP;  /* clause result */
A68_BOOL  IRAAASP;  /* clause result */
A68_113  JRAAASP;  /* OPERATORS - istruct -> vector */
A68_113  KRAAASP;  /* OPERATORS - simple index */
A68_INT  LRAAASP;  /* YIELD */
A68_113  MRAAASP;  /* OPERATORS - istruct -> vector */
A68_113  NRAAASP;  /* OPERATORS - simple index */
A68_INT  ORAAASP;  /* YIELD */
A68_INT  PRAAASP;  /* ADICOPS - ELEM */
A_PROC_ENTRY(elem);
 /* line 255: */
{ 
FRAAASP.source = Lb ;
GRAAASP_s2t = (FRAAASP.destination);
 /* line 256: */
HRAAASP = (N<=32);
if ( HRAAASP )
{ 
 /* line 257: */
KRAAASP = A_HISVEC(JRAAASP,GRAAASP_s2t,2,A68_BITS ) ;
LRAAASP = 2 ;
IRAAASP = A_ELEM(N,A_VINDEX(KRAAASP,LRAAASP),(A68_BITS ),A_SZ_BITS);
} 
else
{ 
 /* line 258: */
NRAAASP = A_HISVEC(MRAAASP,GRAAASP_s2t,2,A68_BITS ) ;
ORAAASP = 1 ;
PRAAASP = (N-32) ;
IRAAASP = A_ELEM(PRAAASP,A_VINDEX(NRAAASP,ORAAASP),(A68_BITS ),A_SZ_BITS);
} 
} 
A_PROC_EXIT(elem);
return( IRAAASP );
} 
#undef NL

A68_BOOL  SRAAASP_elem(A68_INT  N, A68_SBITS  Sb)
{ 
A68_BITS  TRAAASP_b;
A68_BOOL  URAAASP;  /* clause result */
A68_INT  VRAAASP;  /* ADICOPS - ELEM */
A_PROC_ENTRY(elem);
 /* line 261: */
{ 
TRAAASP_b = (A68_BITS )Sb;
VRAAASP = (N+16) ;
URAAASP = A_ELEM(VRAAASP,TRAAASP_b,(A68_BITS ),A_SZ_BITS);
} 
A_PROC_EXIT(elem);
return( URAAASP );
} 
#undef NL

A68_BOOL  YRAAASP_elem(A68_INT  N, A68_SSBITS  Ssb)
{ 
A68_BITS  ZRAAASP_b;
A68_BOOL  ASAAASP;  /* clause result */
A68_INT  BSAAASP;  /* ADICOPS - ELEM */
A_PROC_ENTRY(elem);
 /* line 264: */
{ 
ZRAAASP_b = (A68_BITS )(A68_SBITS )Ssb;
BSAAASP = (N+24) ;
ASAAASP = A_ELEM(BSAAASP,ZRAAASP_b,(A68_BITS ),A_SZ_BITS);
} 
A_PROC_EXIT(elem);
return( ASAAASP );
} 
#undef NL

A68_43  ESAAASP_(A68_43  S, A68_43  T)
{ 
A68_43  FSAAASP_r;
A68_INT  GSAAASP_i;
A68_113  HSAAASP;  /* OPERATORS - istruct -> vector */
A68_INT  ISAAASP;  /* to part of loop */
A68_113  JSAAASP;  /* OPERATORS - istruct -> vector */
A68_113  KSAAASP;  /* OPERATORS - simple index */
A68_113  LSAAASP;  /* OPERATORS - istruct -> vector */
A68_113  MSAAASP;  /* OPERATORS - simple index */
A68_113  NSAAASP;  /* OPERATORS - istruct -> vector */
A68_113  OSAAASP;  /* OPERATORS - simple index */
A68_BITS * PSAAASP;  /* YIELD */
A68_43  QSAAASP;  /* clause result */
A_PROC_ENTRY(+);
 /* line 267: */
 /* line 268: */
{ 
 /* line 269: */
 /* line 270: */
ISAAASP = A_HISVEC(HSAAASP,FSAAASP_r,8,A68_BITS ).upb;
for ( GSAAASP_i = 1;
GSAAASP_i <= ISAAASP;
GSAAASP_i += 1 )
{ 
 /* line 271: */
 /* line 272: */
KSAAASP = A_ISVEC(JSAAASP,(&FSAAASP_r),8,A68_BITS ) ;
MSAAASP = A_HISVEC(LSAAASP,S,8,A68_BITS ) ;
OSAAASP = A_HISVEC(NSAAASP,T,8,A68_BITS ) ;
PSAAASP = (&A_VINDEX(KSAAASP,GSAAASP_i)) ;
(*PSAAASP) = (A68_BITS )(A_VINDEX(MSAAASP,GSAAASP_i)|A_VINDEX(OSAAASP,GSAAASP_i));
}
 /* line 273: */
 /* line 274: */
QSAAASP = FSAAASP_r;
} 
A_PROC_EXIT(+);
return( QSAAASP );
} 
#undef NL

A68_INT  SSAAASP_round(A68_REAL  R)
{ 
A68_REAL  TSAAASP_lr;
A68_INT  USAAASP_method;
A68_INT  VSAAASP_i;
A68_INT  WSAAASP;  /* clause result */
A_PROC_ENTRY(round);
 /* line 277: */
 /* line 278: */
{ 
 /* line 279: */
 /* line 280: */
if ( (R>((A68_REAL )DBAAASP_maxint)) )
{ 
 /* line 281: */
TSAAASP_lr = (A68_REAL )DBAAASP_maxint;
} 
else
{ 
 /* line 282: */
if ( (R<((A68_REAL )(-DBAAASP_maxint))) )
{ 
 /* line 283: */
TSAAASP_lr = (A68_REAL )(-DBAAASP_maxint);
} 
else
{ 
 /* line 284: */
TSAAASP_lr = R;
} 
} 
 /* line 286: */
USAAASP_method = YFAAASP_fegetround();
 /* line 287: */
XFAAASP_fesetround(VFAAASP_fetonearest);
 /* line 288: */
VSAAASP_i = BGAAASP_lrint(TSAAASP_lr);
 /* line 289: */
XFAAASP_fesetround(USAAASP_method);
 /* line 290: */
 /* line 291: */
WSAAASP = VSAAASP_i;
} 
A_PROC_EXIT(round);
return( WSAAASP );
} 
#undef NL

A68_INT  YSAAASP_entier(A68_REAL  R)
{ 
A68_REAL  ZSAAASP_lr;
A68_INT  ATAAASP_method;
A68_INT  BTAAASP_i;
A68_INT  CTAAASP;  /* clause result */
A_PROC_ENTRY(entier);
 /* line 294: */
 /* line 295: */
{ 
 /* line 296: */
 /* line 297: */
if ( (R>((A68_REAL )DBAAASP_maxint)) )
{ 
 /* line 298: */
ZSAAASP_lr = (A68_REAL )DBAAASP_maxint;
} 
else
{ 
 /* line 299: */
if ( (R<((A68_REAL )(-DBAAASP_maxint))) )
{ 
 /* line 300: */
ZSAAASP_lr = (A68_REAL )(-DBAAASP_maxint);
} 
else
{ 
 /* line 301: */
ZSAAASP_lr = R;
} 
} 
 /* line 303: */
ATAAASP_method = YFAAASP_fegetround();
 /* line 304: */
XFAAASP_fesetround(WFAAASP_fedownward);
 /* line 305: */
BTAAASP_i = BGAAASP_lrint(R);
 /* line 306: */
XFAAASP_fesetround(ATAAASP_method);
 /* line 307: */
 /* line 308: */
CTAAASP = BTAAASP_i;
} 
A_PROC_EXIT(entier);
return( CTAAASP );
} 
#undef NL
 /* line 2: */
 /* line 38: */
void CGAAASP(void)   /* initialise DECS spops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-s","-uname","seedfile","-staredit","1234ABCD","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir",".","spops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"./spaliens.m","./spmodes.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
union {  /* BIOP 99 */
A68_INT   source;
A68_BITS *  destination;
} FGAAASP; 
if( A_invoked ) return;
A_invoked = A68_TRUE;
YAAAASP();   /* USE spaliens */
BAAAASP();   /* USE spmodes */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/qad/spops.a68";
A_config.translation_time = "Sun Apr 18 20:08:21 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "BGAAASP (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:08:21 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS spops);
 /* line 39: */
 /* line 41: */
 /* line 42: */
 /* line 43: */
 /* line 44: */
 /* line 46: */
FGAAASP.source = (-1) ;
GGAAASP_nilfuncptr = (FGAAASP.destination);
 /* line 48: */
 /* line 49: */
 /* line 50: */
 /* line 52: */
 /* line 53: */
 /* line 54: */
 /* line 55: */
 /* line 56: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
 /* line 61: */
 /* line 63: */
 /* line 64: */
 /* line 65: */
 /* line 66: */
 /* line 68: */
 /* line 69: */
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 75: */
 /* line 76: */
 /* line 78: */
 /* line 79: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 84: */
 /* line 85: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 97: */
 /* line 104: */
 /* line 113: */
 /* line 115: */
 /* line 125: */
 /* line 126: */
 /* line 127: */
 /* line 137: */
 /* line 144: */
 /* line 153: */
 /* line 154: */
 /* line 155: */
 /* line 157: */
 /* line 164: */
 /* line 171: */
 /* line 178: */
 /* line 185: */
 /* line 192: */
 /* line 200: */
 /* line 223: */
 /* line 225: */
 /* line 226: */
 /* line 228: */
 /* line 229: */
 /* line 230: */
 /* line 232: */
 /* line 233: */
 /* line 234: */
 /* line 235: */
 /* line 237: */
 /* line 238: */
 /* line 239: */
 /* line 240: */
 /* line 242: */
 /* line 243: */
 /* line 244: */
 /* line 245: */
 /* line 248: */
 /* line 250: */
 /* line 252: */
 /* line 254: */
 /* line 260: */
 /* line 263: */
 /* line 266: */
 /* line 276: */
 /* line 293: */
 /* line 310: */
 /* line 311: */
 /* line 367: */
/*SKIP*/;
A_PROC_EXIT(DECS spops);
} 
#undef NL
/* end of translation of spops.a68 */
