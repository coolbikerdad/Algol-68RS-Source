/* UNAME:CTAAASP */
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

A_PROCEDURE(struct A68t140 ,A68t141,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(REAL) MODE140 */

A_PROCEDURE(A68_REAL ,A68t142,(struct A68t140 ),(struct A68t140 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE140) REAL */

A_PROCEDURE(struct A68t140 ,A68t143,(A68_LBITS ),(A68_LBITS ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(LONG BITS) MODE140 */

A_PROCEDURE(A68_LBITS ,A68t144,(struct A68t140 ),(struct A68t140 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE140) LONG BITS */

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

A_PROCEDURE(A68_SREAL ,A68t176,(A68_SREAL ),(A68_SREAL ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(SHORT REAL) SHORT REAL */

A_PROCEDURE(A68_LINT ,A68t177,(A68_LINT *),(A68_LINT *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(REF LONG INT) LONG INT */

A_PROCEDURE(A68_REAL ,A68t178,(A68_INT *),(A68_INT *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REF INT) REAL */

A_PROCEDURE(A68_REAL ,A68t179,(void),(void *));
typedef struct A68t179  A68_179 ;    /* PROC REAL */

A_PROCEDURE(A68_SREAL ,A68t180,(void),(void *));
typedef struct A68t180  A68_180 ;    /* PROC SHORT REAL */

A_PROCEDURE(A68_LINT ,A68t181,(A68_LINT ),(A68_LINT ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(LONG INT) LONG INT */

A_PROCEDURE(A68_SINT ,A68t182,(A68_SINT ),(A68_SINT ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(SHORT INT) SHORT INT */

A_PROCEDURE(A68_SSINT ,A68t183,(A68_SSINT ),(A68_SSINT ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(SHORT SHORT INT) SHORT SHORT INT */

A_PROCEDURE(struct A68t43 ,A68t184,(A68_RC ),(A68_RC ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE27) MODE43 */

A_PROCEDURE(A68_BOOL ,A68t185,(A68_CHAR ,struct A68t43 ),(A68_CHAR ,struct A68t43 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(CHAR,MODE43) BOOL */

/* --- Imports from spops --- */
extern A68_REAL  WHAAASP_(A68_REAL ,A68_INT );
extern A68_BITS  YQAAASP_elem(A68_INT );
/* --- End of imports from spops --- */


/* --- Imports from spaliens --- */
#include <fenv.h>
#include <math.h>
#include <limits.h>

#define VFAAASP_fetonearest FE_TONEAREST
/**/

#define WFAAASP_fedownward FE_DOWNWARD
/**/

#define XFAAASP_fesetround fesetround
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
extern void CGAAASP(void);   /* spops */
extern void YAAAASP(void);   /* spaliens */
extern void BAAAASP(void);   /* spmodes */
/* --- end of DECS initialisation functions --- */
#define GTAAASP_intlengths 2
#define HTAAASP_intshorths 3
#define ITAAASP_reallengths 1
#define JTAAASP_realshorths 2
#define KTAAASP_bitslengths 2
#define LTAAASP_bitsshorths 3
#define MTAAASP_byteslengths 0
#define NTAAASP_bytesshorths 0
A68_LINT  PTAAASP_longmaxint;
#define QTAAASP_longintwidth 19
#define RTAAASP_intwidth 10
#define STAAASP_shortintwidth 5
#define TTAAASP_shortshortintwidth 3
#define UTAAASP_longbitswidth 64
#define VTAAASP_bitswidth 32
#define WTAAASP_shortbitswidth 16
#define XTAAASP_shortshortbitswidth 8
#define YTAAASP_byteswidth 0
#define ZTAAASP_charbinbytes 1
#define AUAAASP_shortshortintbinbytes 1
#define BUAAASP_shortintbinbytes 2
#define CUAAASP_intbinbytes 4
#define DUAAASP_longintbinbytes 8
#define EUAAASP_shortshortbitsbinbytes 1
#define FUAAASP_shortbitsbinbytes 2
#define GUAAASP_bitsbinbytes 4
#define HUAAASP_longbitsbinbytes 8
#define IUAAASP_boolbinbytes 4
#define JUAAASP_realbinbytes 8
#define KUAAASP_shortrealbinbytes 4
#define LUAAASP_complbinbytes 16
#define MUAAASP_shortcomplbinbytes 8
#define NUAAASP_blank ' '
#define OUAAASP_errorchar '*'
A68_CHAR  PUAAASP_nullcharacter;
#define QUAAASP_flip 'T'
#define RUAAASP_flop 'F'
A68_CHAR  SUAAASP_cr;
A68_CHAR  TUAAASP_lf;
A68_CHAR  UUAAASP_ff;
A68_CHAR  VUAAASP_tabch;
A68_CHAR  WUAAASP_esc;
#define XUAAASP_nulch PUAAASP_nullcharacter
A68_CHAR  YUAAASP_eofchar;
static A68_BITS  ZUAAASP_bwm;
#define AVAAASP_minreal 0.1976262583364986e-322
#define BVAAASP_maxreal 1.79769313486231571e+308
A68_SREAL  CVAAASP_shortminreal;
A68_SREAL  DVAAASP_shortmaxreal;
#define EVAAASP_expwidth 3
#define FVAAASP_shortexpwidth 2
A68_SREAL  GVAAASP_shortpi;
#define LWAAASP_log2 0.30102999566398120
#define MWAAASP_c1 2147001325
#define NWAAASP_c2 715136305
static A68_LINT  QWAAASP_longc1;
static A68_LINT  RWAAASP_longc2;
A68_INT  SWAAASP_lastrandom;
A68_LINT  TWAAASP_longlastrandom;
A68_43  FZAAASP_radix10digit;
A68_43  HZAAASP_radix2digit;
A68_43  JZAAASP_radix4digit;
A68_43  LZAAASP_radix8digit;
A68_43  NZAAASP_radix16digit;
A68_43  PZAAASP_timestentothepower;
A68_43  RZAAASP_flipflop;
A68_43  TZAAASP_plusitimes;
A68_43  VZAAASP_lfbag;

A68_SREAL  IVAAASP_shortsqrt(A68_SREAL  X);

A68_SREAL  LVAAASP_shortexp(A68_SREAL  X);

A68_SREAL  OVAAASP_shortln(A68_SREAL  X);

A68_SREAL  RVAAASP_shortlog(A68_SREAL  X);

A68_SREAL  UVAAASP_shortcos(A68_SREAL  X);

A68_SREAL  XVAAASP_shortsin(A68_SREAL  X);

A68_SREAL  AWAAASP_shorttan(A68_SREAL  X);

A68_SREAL  DWAAASP_shortarccos(A68_SREAL  X);

A68_SREAL  GWAAASP_shortarcsin(A68_SREAL  X);

A68_SREAL  JWAAASP_shortarctan(A68_SREAL  X);

A_STATIC A68_INT  XWAAASP_prbs(A68_INT * R);

A_STATIC A68_LINT  AXAAASP_longprbs(A68_LINT * R);

A68_REAL  DXAAASP_nextrandom(A68_INT * R);

A68_REAL  FXAAASP_random(void);

A68_SREAL  HXAAASP_shortrandom(void);

A68_LINT  KXAAASP_longrandomint(A68_LINT  N);

A68_INT  PXAAASP_randomint(A68_INT  N);

A68_SINT  UXAAASP_shortrandomint(A68_SINT  N);

A68_SSINT  ZXAAASP_shortshortrandomint(A68_SSINT  N);

A68_43  EYAAASP_stringtobag(A68_RC  S);

A68_BOOL  WYAAASP_elem(A68_CHAR  K, A68_43  M);

A68_SREAL  IVAAASP_shortsqrt(A68_SREAL  X)
{ 
A68_SREAL  JVAAASP;  /* clause result */
A_PROC_ENTRY(shortsqrt);
JVAAASP = (A68_SREAL )ECAAASP_sqrt((A68_REAL )X);
A_PROC_EXIT(shortsqrt);
return( JVAAASP );
} 
#undef NL

A68_SREAL  LVAAASP_shortexp(A68_SREAL  X)
{ 
A68_SREAL  MVAAASP;  /* clause result */
A_PROC_ENTRY(shortexp);
MVAAASP = (A68_SREAL )FCAAASP_exp((A68_REAL )X);
A_PROC_EXIT(shortexp);
return( MVAAASP );
} 
#undef NL

A68_SREAL  OVAAASP_shortln(A68_SREAL  X)
{ 
A68_SREAL  PVAAASP;  /* clause result */
A_PROC_ENTRY(shortln);
PVAAASP = (A68_SREAL )GCAAASP_ln((A68_REAL )X);
A_PROC_EXIT(shortln);
return( PVAAASP );
} 
#undef NL

A68_SREAL  RVAAASP_shortlog(A68_SREAL  X)
{ 
A68_SREAL  SVAAASP;  /* clause result */
A_PROC_ENTRY(shortlog);
SVAAASP = (A68_SREAL )HCAAASP_log((A68_REAL )X);
A_PROC_EXIT(shortlog);
return( SVAAASP );
} 
#undef NL

A68_SREAL  UVAAASP_shortcos(A68_SREAL  X)
{ 
A68_SREAL  VVAAASP;  /* clause result */
A_PROC_ENTRY(shortcos);
VVAAASP = (A68_SREAL )ICAAASP_cos((A68_REAL )X);
A_PROC_EXIT(shortcos);
return( VVAAASP );
} 
#undef NL

A68_SREAL  XVAAASP_shortsin(A68_SREAL  X)
{ 
A68_SREAL  YVAAASP;  /* clause result */
A_PROC_ENTRY(shortsin);
YVAAASP = (A68_SREAL )JCAAASP_sin((A68_REAL )X);
A_PROC_EXIT(shortsin);
return( YVAAASP );
} 
#undef NL

A68_SREAL  AWAAASP_shorttan(A68_SREAL  X)
{ 
A68_SREAL  BWAAASP;  /* clause result */
A_PROC_ENTRY(shorttan);
BWAAASP = (A68_SREAL )KCAAASP_tan((A68_REAL )X);
A_PROC_EXIT(shorttan);
return( BWAAASP );
} 
#undef NL

A68_SREAL  DWAAASP_shortarccos(A68_SREAL  X)
{ 
A68_SREAL  EWAAASP;  /* clause result */
A_PROC_ENTRY(shortarccos);
EWAAASP = (A68_SREAL )LCAAASP_arccos((A68_REAL )X);
A_PROC_EXIT(shortarccos);
return( EWAAASP );
} 
#undef NL

A68_SREAL  GWAAASP_shortarcsin(A68_SREAL  X)
{ 
A68_SREAL  HWAAASP;  /* clause result */
A_PROC_ENTRY(shortarcsin);
HWAAASP = (A68_SREAL )MCAAASP_arcsin((A68_REAL )X);
A_PROC_EXIT(shortarcsin);
return( HWAAASP );
} 
#undef NL

A68_SREAL  JWAAASP_shortarctan(A68_SREAL  X)
{ 
A68_SREAL  KWAAASP;  /* clause result */
A_PROC_ENTRY(shortarctan);
KWAAASP = (A68_SREAL )NCAAASP_arctan((A68_REAL )X);
A_PROC_EXIT(shortarctan);
return( KWAAASP );
} 
#undef NL

A_STATIC A68_INT  XWAAASP_prbs(A68_INT * R)
{ 
A68_INT  YWAAASP;  /* clause result */
A_PROC_ENTRY(prbs);
YWAAASP = (*R) = ((MWAAASP_c1*A_ABS((*R)))+NWAAASP_c2);
A_PROC_EXIT(prbs);
return( YWAAASP );
} 
#undef NL

A_STATIC A68_LINT  AXAAASP_longprbs(A68_LINT * R)
{ 
A68_LINT  BXAAASP;  /* clause result */
A_PROC_ENTRY(longprbs);
BXAAASP = (*R) = ((QWAAASP_longc1*A_ABS((*R)))+RWAAASP_longc2);
A_PROC_EXIT(longprbs);
return( BXAAASP );
} 
#undef NL

A68_REAL  DXAAASP_nextrandom(A68_INT * R)
{ 
A68_REAL  EXAAASP;  /* clause result */
A_PROC_ENTRY(nextrandom);
EXAAASP = (WHAAASP_((A68_REAL )XWAAASP_prbs(R), (-32))+0.5);
A_PROC_EXIT(nextrandom);
return( EXAAASP );
} 
#undef NL

A68_REAL  FXAAASP_random(void)
{ 
A68_REAL  GXAAASP;  /* clause result */
A_PROC_ENTRY(random);
GXAAASP = DXAAASP_nextrandom((&SWAAASP_lastrandom));
A_PROC_EXIT(random);
return( GXAAASP );
} 
#undef NL

A68_SREAL  HXAAASP_shortrandom(void)
{ 
A68_SREAL  IXAAASP;  /* clause result */
A_PROC_ENTRY(shortrandom);
IXAAASP = (A68_SREAL )FXAAASP_random();
A_PROC_EXIT(shortrandom);
return( IXAAASP );
} 
#undef NL

A68_LINT  KXAAASP_longrandomint(A68_LINT  N)
{ 
A68_LINT  LXAAASP;  /* clause result */
A68_LINT  MXAAASP;  /* ADICOPS - MOD */
A68_LINT  NXAAASP;  /* ADICOPS - MOD */
A_PROC_ENTRY(longrandomint);
NXAAASP = AXAAASP_longprbs((&TWAAASP_longlastrandom)) ;
LXAAASP = (A_MOD(NXAAASP,N,MXAAASP)+1);
A_PROC_EXIT(longrandomint);
return( LXAAASP );
} 
#undef NL

A68_INT  PXAAASP_randomint(A68_INT  N)
{ 
A68_INT  QXAAASP;  /* clause result */
A68_INT  RXAAASP;  /* ADICOPS - MOD */
A68_INT  SXAAASP;  /* ADICOPS - MOD */
A_PROC_ENTRY(randomint);
SXAAASP = XWAAASP_prbs((&SWAAASP_lastrandom)) ;
QXAAASP = (A_MOD(SXAAASP,N,RXAAASP)+1);
A_PROC_EXIT(randomint);
return( QXAAASP );
} 
#undef NL

A68_SINT  UXAAASP_shortrandomint(A68_SINT  N)
{ 
A68_SINT  VXAAASP;  /* clause result */
A68_SINT  WXAAASP;  /* ADICOPS - MOD */
A68_SINT  XXAAASP;  /* ADICOPS - MOD */
A_PROC_ENTRY(shortrandomint);
 /* line 136: */
XXAAASP = (A68_SINT )XWAAASP_prbs((&SWAAASP_lastrandom)) ;
VXAAASP = (A_MOD(XXAAASP,N,WXAAASP)+1);
A_PROC_EXIT(shortrandomint);
return( VXAAASP );
} 
#undef NL

A68_SSINT  ZXAAASP_shortshortrandomint(A68_SSINT  N)
{ 
A68_SSINT  AYAAASP;  /* clause result */
A68_SSINT  BYAAASP;  /* ADICOPS - MOD */
A68_SSINT  CYAAASP;  /* ADICOPS - MOD */
A_PROC_ENTRY(shortshortrandomint);
 /* line 138: */
CYAAASP = (A68_SSINT )(A68_SINT )XWAAASP_prbs((&SWAAASP_lastrandom)) ;
AYAAASP = (A_MOD(CYAAASP,N,BYAAASP)+1);
A_PROC_EXIT(shortshortrandomint);
return( AYAAASP );
} 
#undef NL

A68_43  EYAAASP_stringtobag(A68_RC  S)
{ 
A68_43  FYAAASP_cb;
A68_INT  GYAAASP_i;
A68_113  HYAAASP;  /* OPERATORS - istruct -> vector */
A68_INT  IYAAASP;  /* to part of loop */
A68_113  JYAAASP;  /* OPERATORS - istruct -> vector */
A68_113  KYAAASP;  /* OPERATORS - simple index */
A68_BITS * LYAAASP;  /* YIELD */
A68_INT  MYAAASP_i;
A68_INT  NYAAASP;  /* to part of loop */
A68_INT  OYAAASP_as;
A68_113  PYAAASP;  /* OPERATORS - istruct -> vector */
A68_113  QYAAASP;  /* OPERATORS - simple index */
A68_INT  RYAAASP;  /* YIELD */
A68_BITS * SYAAASP_bits;
A68_43  TYAAASP;  /* clause result */
A_PROC_ENTRY(stringtobag);
 /* line 141: */
 /* line 142: */
{ 
 /* line 143: */
IYAAASP = A_HISVEC(HYAAASP,FYAAASP_cb,8,A68_BITS ).upb;
for ( GYAAASP_i = 1;
GYAAASP_i <= IYAAASP;
GYAAASP_i += 1 )
{ 
KYAAASP = A_ISVEC(JYAAASP,(&FYAAASP_cb),8,A68_BITS ) ;
LYAAASP = (&A_VINDEX(KYAAASP,GYAAASP_i)) ;
(*LYAAASP) = 0X0U;
}
 /* line 144: */
 /* line 145: */
NYAAASP = S.dim[0].upb;
for ( MYAAASP_i = S.dim[0].lwb;
MYAAASP_i <= NYAAASP;
MYAAASP_i += 1 )
{ 
 /* line 146: */
OYAAASP_as = (A68_INT)(unsigned char)A_R1INDEX(S,MYAAASP_i);
 /* line 147: */
QYAAASP = A_ISVEC(PYAAASP,(&FYAAASP_cb),8,A68_BITS ) ;
RYAAASP = (1+(OYAAASP_as/VTAAASP_bitswidth)) ;
SYAAASP_bits = (&A_VINDEX(QYAAASP,RYAAASP));
 /* line 148: */
 /* line 149: */
(*SYAAASP_bits) = (A68_BITS )(YQAAASP_elem((1+(A68_INT )(A68_BITS )((A68_BITS )OYAAASP_as&ZUAAASP_bwm)))|(*SYAAASP_bits));
}
 /* line 150: */
 /* line 151: */
TYAAASP = FYAAASP_cb;
} 
A_PROC_EXIT(stringtobag);
return( TYAAASP );
} 
#undef NL

A68_BOOL  WYAAASP_elem(A68_CHAR  K, A68_43  M)
{ 
A68_BOOL  XYAAASP;  /* clause result */
A68_113  YYAAASP;  /* OPERATORS - istruct -> vector */
A68_113  ZYAAASP;  /* OPERATORS - simple index */
A68_INT  AZAAASP;  /* SHR */
A68_BITS  BZAAASP;  /* SHR */
A68_INT  CZAAASP;  /* YIELD */
A68_INT  DZAAASP;  /* ADICOPS - ELEM */
A_PROC_ENTRY(elem);
 /* line 154: */
ZYAAASP = A_HISVEC(YYAAASP,M,8,A68_BITS ) ;
AZAAASP = 5 ;
BZAAASP = (A68_BITS )(A68_INT)(unsigned char)K ;
CZAAASP = (1+(A68_INT )A_SHR(BZAAASP,AZAAASP)) ;
DZAAASP = (1+(A68_INT )(A68_BITS )((A68_BITS )(A68_INT)(unsigned char)K&ZUAAASP_bwm)) ;
XYAAASP = A_ELEM(DZAAASP,A_VINDEX(ZYAAASP,CZAAASP),(A68_BITS ),A_SZ_BITS);
A_PROC_EXIT(elem);
return( XYAAASP );
} 
#undef NL
 /* line 2: */
 /* line 36: */
void DTAAASP(void)   /* initialise DECS spplain */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-s","-uname","seedfile","-staredit","1234ABCD","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir",".","spplain.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"./spops.m","./spaliens.m","./spmodes.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_LINT  OTAAASP;  /* yield of code insert */
A68_INT  OWAAASP;  /* SHL */
A68_LBITS  PWAAASP;  /* SHL */
A68_INT  UWAAASP;  /* SHL */
A68_LBITS  VWAAASP;  /* SHL */
A68_43  EZAAASP;  /* collateral clause result */
A68_43  GZAAASP;  /* collateral clause result */
A68_43  IZAAASP;  /* collateral clause result */
A68_43  KZAAASP;  /* collateral clause result */
A68_43  MZAAASP;  /* collateral clause result */
A68_43  OZAAASP;  /* collateral clause result */
A68_43  QZAAASP;  /* collateral clause result */
A68_43  SZAAASP;  /* collateral clause result */
A68_43  UZAAASP;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
CGAAASP();   /* USE spops */
YAAAASP();   /* USE spaliens */
BAAAASP();   /* USE spmodes */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/qad/spplain.a68";
A_config.translation_time = "Sun Apr 18 20:08:21 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "CTAAASP (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:08:21 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS spplain);
 /* line 37: */
 /* line 38: */
 /* line 39: */
 /* line 41: */
 /* line 42: */
#define RESULT OTAAASP
{long long unsigned int l = 0x0; l = ~l; RESULT=(long long int)(l >> 1);
}
#undef RESULT
PTAAASP_longmaxint = OTAAASP;
 /* line 44: */
 /* line 45: */
 /* line 46: */
 /* line 47: */
 /* line 49: */
 /* line 50: */
 /* line 51: */
 /* line 52: */
 /* line 54: */
 /* line 56: */
 /* line 57: */
 /* line 59: */
 /* line 60: */
 /* line 61: */
 /* line 62: */
 /* line 64: */
 /* line 65: */
 /* line 66: */
 /* line 67: */
 /* line 69: */
 /* line 71: */
 /* line 72: */
 /* line 74: */
 /* line 75: */
 /* line 77: */
PUAAASP_nullcharacter = (A68_SSBITS)0;
 /* line 78: */
 /* line 80: */
 /* line 81: */
SUAAASP_cr = (A68_SSBITS)13;
TUAAASP_lf = (A68_SSBITS)10;
UUAAASP_ff = (A68_SSBITS)12;
 /* line 82: */
VUAAASP_tabch = (A68_SSBITS)9;
WUAAASP_esc = (A68_SSBITS)27;
 /* line 83: */
YUAAASP_eofchar = (A68_SSBITS)26;
 /* line 85: */
ZUAAASP_bwm = (A68_BITS )(VTAAASP_bitswidth-1);
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 91: */
 /* line 92: */
CVAAASP_shortminreal = (A68_SREAL )1.17549435082228751e-38;
 /* line 93: */
DVAAASP_shortmaxreal = (A68_SREAL )3.40282346638528860e+38;
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 99: */
GVAAASP_shortpi = (A68_SREAL )HBAAASP_pi;
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 113: */
 /* line 115: */
 /* line 116: */
 /* line 117: */
 /* line 119: */
 /* line 120: */
OWAAASP = 32 ;
PWAAASP = (A68_LBITS )(A68_LINT )MWAAASP_c1 ;
QWAAASP_longc1 = (A68_LINT )(A68_LBITS )(A_SHL(PWAAASP,OWAAASP)|(A68_LBITS )(A68_LINT )NWAAASP_c2);
 /* line 121: */
RWAAASP_longc2 = (A68_LINT )NWAAASP_c2;
 /* line 123: */
SWAAASP_lastrandom = (A68_INT )0Xdeadd0d0U;
 /* line 124: */
UWAAASP = 32 ;
VWAAASP = 0Xdeadd0d0U ;
TWAAASP_longlastrandom = (A68_LINT )(A68_LBITS )(A_SHL(VWAAASP,UWAAASP)|0Xdeadd0d0U);
 /* line 126: */
 /* line 127: */
 /* line 129: */
 /* line 130: */
 /* line 131: */
 /* line 133: */
 /* line 134: */
 /* line 135: */
 /* line 137: */
 /* line 140: */
 /* line 153: */
 /* line 156: */
EZAAASP.data[0] = 0X0U;
EZAAASP.data[1] = 0X0000ffc0U;
EZAAASP.data[2] = 0X0U;
EZAAASP.data[3] = 0X0U;
EZAAASP.data[4] = 0X0U;
EZAAASP.data[5] = 0X0U;
EZAAASP.data[6] = 0X0U;
EZAAASP.data[7] = 0X0U;
FZAAASP_radix10digit = EZAAASP;
 /* line 157: */
GZAAASP.data[0] = 0X0U;
GZAAASP.data[1] = 0X0000c000U;
GZAAASP.data[2] = 0X0U;
GZAAASP.data[3] = 0X0U;
GZAAASP.data[4] = 0X0U;
GZAAASP.data[5] = 0X0U;
GZAAASP.data[6] = 0X0U;
GZAAASP.data[7] = 0X0U;
HZAAASP_radix2digit = GZAAASP;
 /* line 158: */
IZAAASP.data[0] = 0X0U;
IZAAASP.data[1] = 0X0000f000U;
IZAAASP.data[2] = 0X0U;
IZAAASP.data[3] = 0X0U;
IZAAASP.data[4] = 0X0U;
IZAAASP.data[5] = 0X0U;
IZAAASP.data[6] = 0X0U;
IZAAASP.data[7] = 0X0U;
JZAAASP_radix4digit = IZAAASP;
 /* line 159: */
KZAAASP.data[0] = 0X0U;
KZAAASP.data[1] = 0X0000ff00U;
KZAAASP.data[2] = 0X0U;
KZAAASP.data[3] = 0X0U;
KZAAASP.data[4] = 0X0U;
KZAAASP.data[5] = 0X0U;
KZAAASP.data[6] = 0X0U;
KZAAASP.data[7] = 0X0U;
LZAAASP_radix8digit = KZAAASP;
 /* line 160: */
MZAAASP.data[0] = 0X0U;
MZAAASP.data[1] = 0X0000ffc0U;
MZAAASP.data[2] = 0X0U;
MZAAASP.data[3] = 0X7fffffe0U;
MZAAASP.data[4] = 0X0U;
MZAAASP.data[5] = 0X0U;
MZAAASP.data[6] = 0X0U;
MZAAASP.data[7] = 0X0U;
NZAAASP_radix16digit = MZAAASP;
 /* line 161: */
OZAAASP.data[0] = 0X0U;
OZAAASP.data[1] = 0X0U;
OZAAASP.data[2] = 0X04000008U;
OZAAASP.data[3] = 0X04000000U;
OZAAASP.data[4] = 0X0U;
OZAAASP.data[5] = 0X0U;
OZAAASP.data[6] = 0X0U;
OZAAASP.data[7] = 0X0U;
PZAAASP_timestentothepower = OZAAASP;
 /* line 162: */
QZAAASP.data[0] = 0X0U;
QZAAASP.data[1] = 0X0U;
QZAAASP.data[2] = 0X02000800U;
QZAAASP.data[3] = 0X0U;
QZAAASP.data[4] = 0X0U;
QZAAASP.data[5] = 0X0U;
QZAAASP.data[6] = 0X0U;
QZAAASP.data[7] = 0X0U;
RZAAASP_flipflop = QZAAASP;
 /* line 163: */
SZAAASP.data[0] = 0X0U;
SZAAASP.data[1] = 0X0U;
SZAAASP.data[2] = 0X00400000U;
SZAAASP.data[3] = 0X00400000U;
SZAAASP.data[4] = 0X0U;
SZAAASP.data[5] = 0X0U;
SZAAASP.data[6] = 0X0U;
SZAAASP.data[7] = 0X0U;
TZAAASP_plusitimes = SZAAASP;
 /* line 164: */
UZAAASP.data[0] = 0X00200000U;
UZAAASP.data[1] = 0X0U;
UZAAASP.data[2] = 0X0U;
UZAAASP.data[3] = 0X0U;
UZAAASP.data[4] = 0X0U;
UZAAASP.data[5] = 0X0U;
UZAAASP.data[6] = 0X0U;
UZAAASP.data[7] = 0X0U;
VZAAASP_lfbag = UZAAASP;
 /* line 166: */
 /* line 168: */
 /* line 222: */
/*SKIP*/;
A_PROC_EXIT(DECS spplain);
} 
#undef NL
/* end of translation of spplain.a68 */
