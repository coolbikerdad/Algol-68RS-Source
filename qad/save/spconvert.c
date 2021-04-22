/* UNAME:VZAAASP */
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

A_PROCEDURE(A68_SREAL ,A68t107,(A68_SREAL ),(A68_SREAL ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(SHORT REAL) SHORT REAL */

A_PROCEDURE(A68_REAL ,A68t108,(A68_INT *),(A68_INT *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(REF INT) REAL */

A_PROCEDURE(A68_REAL ,A68t109,(void),(void *));
typedef struct A68t109  A68_109 ;    /* PROC REAL */

A_PROCEDURE(A68_SREAL ,A68t110,(void),(void *));
typedef struct A68t110  A68_110 ;    /* PROC SHORT REAL */

A_PROCEDURE(A68_LINT ,A68t111,(A68_LINT ),(A68_LINT ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(LONG INT) LONG INT */

A_PROCEDURE(A68_SINT ,A68t112,(A68_SINT ),(A68_SINT ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(SHORT INT) SHORT INT */

A_PROCEDURE(A68_SSINT ,A68t113,(A68_SSINT ),(A68_SSINT ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(SHORT SHORT INT) SHORT SHORT INT */

A_PROCEDURE(struct A68t43 ,A68t114,(A68_RC ),(A68_RC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE27) MODE43 */

A_PROCEDURE(A68_BOOL ,A68t115,(A68_CHAR ,struct A68t43 ),(A68_CHAR ,struct A68t43 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(CHAR,MODE43) BOOL */

A_PROCEDURE(A68_BITS *,A68t116,(A68_INT ),(A68_INT ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(INT) REF BITS */

A_PROCEDURE(struct A68t35 *,A68t117,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF BITS) REF MODE35 */

A_PROCEDURE(struct A68t35 *,A68t118,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(REF CHAR) REF MODE35 */

A_PROCEDURE(A68_CHAR *,A68t119,(struct A68t35 *),(struct A68t35 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(REF MODE35) REF CHAR */

A_PROCEDURE(struct A68t36 *,A68t120,(struct A68t35 *),(struct A68t35 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE35) REF MODE36 */

A_PROCEDURE(A68_VOID ,A68t121,(A68_VC ,struct A68t40 *),(A68_VC ,struct A68t40 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE26) MODE40 */
A_VECTOR(A68_BITS ,A68t122);
typedef struct A68t122  A68_122 ;    /* VECTOR [] BITS */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t122 ,struct A68t41 *),(struct A68t122 ,struct A68t41 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE122) MODE41 */
A_VECTOR(A68_INT ,A68t124);
typedef struct A68t124  A68_124 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t124 ,struct A68t42 *),(struct A68t124 ,struct A68t42 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE124) MODE42 */

A_PROCEDURE(struct A68t39 *,A68t126,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE85) REF MODE39 */

A_PROCEDURE(A68_VOID ,A68t127,(struct A68t85 ,struct A68t39 *),(struct A68t85 ,struct A68t39 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE85) MODE39 */

A_PROCEDURE(A68_VOID ,A68t128,(struct A68t101 ,struct A68t39 *),(struct A68t101 ,struct A68t39 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE101) MODE39 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_INT ,A68_BITS *),(A68_INT ,A68_BITS *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(INT,REF BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t129 ,struct A68t39 *),(struct A68t129 ,struct A68t39 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE129) MODE39 */

A_PROCEDURE(A68_VOID ,A68t131,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t131 ,struct A68t39 *),(struct A68t131 ,struct A68t39 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE131) MODE39 */
A_ISTRUCT(A68_CHAR ,8,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(struct A68t133 ,A68t134,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REAL) MODE133 */
A_ISTRUCT(A68_CHAR ,4,A68t135);
typedef struct A68t135  A68_135 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t135 ,A68t136,(A68_SREAL ),(A68_SREAL ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(SHORT REAL) MODE135 */

A_PROCEDURE(A68_REAL ,A68t137,(struct A68t133 ),(struct A68t133 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE133) REAL */

A_PROCEDURE(A68_SREAL ,A68t138,(struct A68t135 ),(struct A68t135 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE135) SHORT REAL */

A_PROCEDURE(struct A68t133 ,A68t139,(A68_LBITS ),(A68_LBITS ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(LONG BITS) MODE133 */

A_PROCEDURE(struct A68t135 ,A68t140,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(BITS) MODE135 */
A_ISTRUCT(A68_CHAR ,2,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(struct A68t141 ,A68t142,(A68_SBITS ),(A68_SBITS ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(SHORT BITS) MODE141 */
A_ISTRUCT(A68_CHAR ,1,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 1 CHAR */

A_PROCEDURE(struct A68t143 ,A68t144,(A68_SSBITS ),(A68_SSBITS ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(SHORT SHORT BITS) MODE143 */

A_PROCEDURE(A68_LBITS ,A68t145,(struct A68t133 ),(struct A68t133 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE133) LONG BITS */

A_PROCEDURE(A68_BITS ,A68t146,(struct A68t135 ),(struct A68t135 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE135) BITS */

A_PROCEDURE(A68_SBITS ,A68t147,(struct A68t141 ),(struct A68t141 ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE141) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t148,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE143) SHORT SHORT BITS */
A_ISTRUCT(A68_BITS ,2,A68t149);
typedef struct A68t149  A68_149 ;    /* STRUCT 2 BITS */

A_PROCEDURE(struct A68t149 ,A68t150,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REAL) MODE149 */

A_PROCEDURE(A68_REAL ,A68t151,(struct A68t149 ),(struct A68t149 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE149) REAL */

A_PROCEDURE(struct A68t149 ,A68t152,(A68_LBITS ),(A68_LBITS ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(LONG BITS) MODE149 */

A_PROCEDURE(A68_LBITS ,A68t153,(struct A68t149 ),(struct A68t149 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE149) LONG BITS */

A_PROCEDURE(A68_BOOL ,A68t154,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REAL) BOOL */

A_PROCEDURE(A68_VOID ,A68t155,(A68_COMPL ,A68_INT ,A68_COMPL *),(A68_COMPL ,A68_INT ,A68_COMPL *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(COMPL,INT) COMPL */

A_PROCEDURE(A68_REAL ,A68t156,(A68_REAL ,A68_INT ),(A68_REAL ,A68_INT ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REAL,INT) REAL */

A_PROCEDURE(A68_VOID ,A68t157,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t158,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t159,(A68_RC ,A68_VC *),(A68_RC ,A68_VC *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE27) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t35 *,A68_VC *),(struct A68t35 *,A68_VC *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE35) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t161,(A68_VC ),(A68_VC ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE26) REF CHAR */

A_PROCEDURE(A68_BITS *,A68t162,(struct A68t122 ),(struct A68t122 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE122) REF BITS */

A_PROCEDURE(A68_INT *,A68t163,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE124) REF INT */

A_PROCEDURE(A68_REAL ,A68t164,(A68_VC ),(A68_VC ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF MODE26) REAL */

A_PROCEDURE(A68_SREAL ,A68t165,(A68_VC ),(A68_VC ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE26) SHORT REAL */

A_PROCEDURE(A68_LBITS ,A68t166,(A68_VC ),(A68_VC ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(REF MODE26) LONG BITS */

A_PROCEDURE(A68_BITS ,A68t167,(A68_VC ),(A68_VC ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF MODE26) BITS */

A_PROCEDURE(A68_SBITS ,A68t168,(A68_VC ),(A68_VC ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(REF MODE26) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t169,(A68_VC ),(A68_VC ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE26) SHORT SHORT BITS */

A_PROCEDURE(A68_VOID ,A68t170,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t171,(A68_BITS *,A68_VC *),(A68_BITS *,A68_VC *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF BITS) REF MODE26 */

A_PROCEDURE(A68_SSINT ,A68t172,(A68_SSINT ,A68_SSINT ),(A68_SSINT ,A68_SSINT ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(SHORT SHORT INT,SHORT SHORT INT) SHORT SHORT INT */

A_PROCEDURE(A68_SINT ,A68t173,(A68_SINT ,A68_SINT ),(A68_SINT ,A68_SINT ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(SHORT INT,SHORT INT) SHORT INT */

A_PROCEDURE(A68_LINT ,A68t174,(A68_LINT ,A68_LINT ),(A68_LINT ,A68_LINT ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(LONG INT,LONG INT) LONG INT */

A_PROCEDURE(A68_REAL ,A68t175,(A68_INT ,A68_REAL ),(A68_INT ,A68_REAL ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT,REAL) REAL */

A_PROCEDURE(A68_REAL ,A68t176,(A68_REAL ,A68_REAL ),(A68_REAL ,A68_REAL ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REAL,REAL) REAL */

A_PROCEDURE(A68_SREAL ,A68t177,(A68_SREAL ,A68_SREAL ),(A68_SREAL ,A68_SREAL ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(SHORT REAL,SHORT REAL) SHORT REAL */

A_PROCEDURE(A68_VOID ,A68t178,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t179,(struct A68t61 *),(struct A68t61 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF MODE61) REF CHAR */

A_PROCEDURE(A68_BITS ,A68t180,(A68_INT ),(A68_INT ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(INT) BITS */

A_PROCEDURE(A68_BOOL ,A68t181,(A68_INT ,A68_LBITS ),(A68_INT ,A68_LBITS ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(INT,LONG BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t182,(A68_INT ,A68_SBITS ),(A68_INT ,A68_SBITS ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(INT,SHORT BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t183,(A68_INT ,A68_SSBITS ),(A68_INT ,A68_SSBITS ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(INT,SHORT SHORT BITS) BOOL */

A_PROCEDURE(struct A68t43 ,A68t184,(struct A68t43 ,struct A68t43 ),(struct A68t43 ,struct A68t43 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE43,MODE43) MODE43 */

A_PROCEDURE(A68_BOOL ,A68t185,(A68_LINT *,A68_INT ),(A68_LINT *,A68_INT ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF LONG INT,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t186,(A68_INT *,A68_INT ),(A68_INT *,A68_INT ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF INT,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t187,(A68_SINT *,A68_INT ),(A68_SINT *,A68_INT ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF SHORT INT,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t188,(A68_SSINT *,A68_INT ),(A68_SSINT *,A68_INT ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF SHORT SHORT INT,INT) BOOL */
struct A68t189 { A68_INT mode; union {
A68_REAL * mode1;
A68_SREAL * mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t189  A68_189 ;    /* UNION(REF REAL,REF SHORT REAL)  */

A_PROCEDURE(A68_BOOL ,A68t190,(A68_RC ,A68_INT ,A68_BOOL ,struct A68t189 ),(A68_RC ,A68_INT ,A68_BOOL ,struct A68t189 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE27,INT,BOOL,MODE189) BOOL */

A_PROCEDURE(A68_CHAR ,A68t191,(A68_INT ),(A68_INT ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(INT) CHAR */

A_PROCEDURE(A68_INT ,A68t192,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(CHAR) INT */

A_PROCEDURE(A68_BOOL ,A68t193,(A68_CHAR ,A68_INT *,A68_RC ),(A68_CHAR ,A68_INT *,A68_RC ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(CHAR,REF INT,MODE27) BOOL */
struct A68t194 { A68_INT mode; union {
A68_LINT  mode1;
A68_INT  mode2;
A68_SINT  mode3;
A68_SSINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t194  A68_194 ;    /* UNION(LONG INT,INT,SHORT INT,SHORT SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t195,(struct A68t194 ),(struct A68t194 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE194) INT */
struct A68t196 { A68_INT mode; union {
A68_REAL  mode1;
A68_SREAL  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t196  A68_196 ;    /* UNION(REAL,SHORT REAL)  */

A_PROCEDURE(A68_INT ,A68t197,(struct A68t196 ),(struct A68t196 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE196) INT */

A_PROCEDURE(A68_INT ,A68t198,(struct A68t189 ),(struct A68t189 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE189) INT */

A_PROCEDURE(A68_INT ,A68t199,(struct A68t194 ,A68_INT *,A68_INT ,A68_RC ),(struct A68t194 ,A68_INT *,A68_INT ,A68_RC ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE194,REF INT,INT,REF MODE27) INT */
struct A68t200 { A68_INT mode; union {
A68_INT  mode1;
A68_SINT  mode2;
A68_SSINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t200  A68_200 ;    /* UNION(INT,SHORT INT,SHORT SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t201,(struct A68t31 ),(struct A68t31 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE31) INT */

A_PROCEDURE(A68_INT ,A68t202,(A68_BOOL ,A68_INT ),(A68_BOOL ,A68_INT ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(BOOL,INT) INT */

A_PROCEDURE(A68_BOOL ,A68t203,(A68_RC ,A68_INT *,A68_INT ),(A68_RC ,A68_INT *,A68_INT ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE27,REF INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t204,(A68_RC ,A68_INT ,A68_INT ),(A68_RC ,A68_INT ,A68_INT ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE27,INT,INT) VOID */

A_PROCEDURE(A68_INT ,A68t205,(struct A68t31 ,A68_INT ,A68_INT *,A68_RC ),(struct A68t31 ,A68_INT ,A68_INT *,A68_RC ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE31,INT,REF INT,REF MODE27) INT */
A_ISTRUCT(A68_CHAR ,11,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 11 CHAR */
struct A68t207 { A68_INT mode; union {
A68_REAL  mode1;
A68_SREAL  mode2;
A68_INT  mode3;
A68_SINT  mode4;
A68_SSINT  mode5;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t207  A68_207 ;    /* UNION(REAL,SHORT REAL,INT,SHORT INT,SHORT SHORT INT)  */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t31 ,A68_INT ,A68_INT ,A68_RC *),(struct A68t31 ,A68_INT ,A68_INT ,A68_RC *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE31,INT,INT) MODE27 */
A_ISTRUCT(A68_CHAR ,3,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t31 ,A68_INT ,A68_RC *),(struct A68t31 ,A68_INT ,A68_RC *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE31,INT) MODE27 */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t31 ,A68_INT ,A68_INT ,A68_INT ,A68_RC *),(struct A68t31 ,A68_INT ,A68_INT ,A68_INT ,A68_RC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE31,INT,INT,INT) MODE27 */

A_PROCEDURE(A68_VOID ,A68t212,(A68_LBITS ,A68_RC *),(A68_LBITS ,A68_RC *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(LONG BITS) MODE27 */
A_ISTRUCT(A68_CHAR ,16,A68t213);
typedef struct A68t213  A68_213 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_VOID ,A68t214,(A68_BITS ,A68_RC *),(A68_BITS ,A68_RC *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t215,(A68_SBITS ,A68_RC *),(A68_SBITS ,A68_RC *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(SHORT BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t216,(A68_SSBITS ,A68_RC *),(A68_SSBITS ,A68_RC *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(SHORT SHORT BITS) MODE27 */

/* --- Imports from spops --- */
#define NGAAASP_fp64expmask 0X7ff00000U
#define QGAAASP_fp64bitsafterexp 20
#define SGAAASP_fp64expword 2
extern A68_INT  YSAAASP_entier(A68_REAL );
extern A68_BOOL  UGAAASP_valid(A68_REAL );
extern A68_VOID  DJAAASP_makervc(A68_RC ,A68_VC *);
extern A68_VOID  SMAAASP_z(A68_VC ,A68_VC *);
extern A68_INT  XNAAASP_min(A68_INT ,A68_INT );
extern A68_INT  LPAAASP_max(A68_INT ,A68_INT );
/* --- End of imports from spops --- */


/* --- Imports from spplain --- */
extern A68_LINT  PTAAASP_longmaxint;
#define QTAAASP_longintwidth 19
#define RTAAASP_intwidth 10
#define STAAASP_shortintwidth 5
#define TTAAASP_shortshortintwidth 3
#define NUAAASP_blank ' '
#define OUAAASP_errorchar '*'
extern A68_CHAR  PUAAASP_nullcharacter;
#define XUAAASP_nulch PUAAASP_nullcharacter
extern A68_SREAL  DVAAASP_shortmaxreal;
#define EVAAASP_expwidth 3
#define FVAAASP_shortexpwidth 2
#define LWAAASP_log2 0.30102999566398120
/* --- End of imports from spplain --- */


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
extern void DTAAASP(void);   /* spplain */
extern void YAAAASP(void);   /* spaliens */
extern void BAAAASP(void);   /* spmodes */
/* --- end of DECS initialisation functions --- */
static A68_LINT  ZZAAASP_longamax;
static A68_LINT  CABAASP_longdmax;
static A68_INT  DABAASP_amax;
static A68_INT  GABAASP_dmax;
static A68_SINT  HABAASP_shortamax;
static A68_SINT  KABAASP_shortdmax;
static A68_SSINT  LABAASP_shortshortamax;
static A68_SSINT  OABAASP_shortshortdmax;
static A68_206   THBAASP = {"%-+*2$.*3$f"}; 
A_GISVEC(A68_VC ,UHBAASP,THBAASP,11)
static A68_141   OJBAASP = {" 0"}; 
A_GISARR(A68_RC ,QJBAASP,OJBAASP,2)
static A68_206   QKBAASP = {"%-+*2$.*3$e"}; 
A_GISVEC(A68_VC ,RKBAASP,QKBAASP,11)
static A68_209   WOBAASP = {"NaN"}; 
A_GISVEC(A68_VC ,XOBAASP,WOBAASP,3)
static A68_141   DPBAASP = {"0."}; 
A_GISVEC(A68_VC ,EPBAASP,DPBAASP,2)
typedef struct   /* env of non-global proc */
{
A68_RC  S;
A68_INT * P;
} OHBAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  VJBAASP_q;
A_PAD_INT(PAD_36)
A68_INT  After;
A_PAD_INT(PAD_37)
} LKBAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * P;
A68_LINT  JMBAASP_x;
A_PAD_LINT(PAD_38)
} OMBAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  IOBAASP_upb;
A_PAD_INT(PAD_39)
A68_INT  XNBAASP_abswidth;
A_PAD_INT(PAD_40)
} MOBAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  BQBAASP_upb;
A_PAD_INT(PAD_41)
} HQBAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  ERBAASP_abswidth;
A_PAD_INT(PAD_42)
A68_INT  FRBAASP_signafter;
A_PAD_INT(PAD_43)
} URBAASP_generator;

A68_BOOL  RABAASP_add(A68_LINT * A, A68_INT  D);

A68_BOOL  VABAASP_add(A68_INT * A, A68_INT  D);

A68_BOOL  ZABAASP_add(A68_SINT * A, A68_INT  D);

A68_BOOL  DBBAASP_add(A68_SSINT * A, A68_INT  D);

A68_BOOL  JBBAASP_stringtolreal(A68_RC  S, A68_INT  Exp, A68_BOOL  Neg, A68_189  X);

A_STATIC A68_CHAR  WBBAASP_digchar(A68_INT  X);

A68_INT  ZBBAASP_chardig(A68_CHAR  X);

A68_BOOL  ECBAASP_charinstring(A68_CHAR  C, A68_INT * I, A68_RC  S);

A68_INT  KCBAASP_intwidth(A68_194  X);

A68_INT  OCBAASP_realwidth(A68_196  X);

A68_INT  SCBAASP_rrealwidth(A68_189  X);

A68_INT  WCBAASP_expwidth(A68_196  X);

A_STATIC A68_INT  DDBAASP_subwhole(A68_194  X, A68_INT * First, A68_INT  Upb, A68_RC  S);

A_STATIC A68_INT  JEBAASP_log10(A68_31  V);

A68_INT  RFBAASP_explength(A68_BOOL  Signexp, A68_INT  Exponent);

A_STATIC A68_BOOL  ZFBAASP_searchforroundingpoint(A68_RC  S, A68_INT * Rp, A68_INT  Last);

A_STATIC A68_VOID  LGBAASP_spround(A68_RC  S, A68_INT  Rp, A68_INT  Last);

A_STATIC A68_INT  UGBAASP_subfixed(A68_31  V, A68_INT  After, A68_INT * P, A68_RC  S);

A_STATIC A68_VOID  NHBAASP_generator(A68_BOOL  LHBAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  NJBAASP_subfloat(A68_31  V, A68_INT  After, A68_INT * P, A68_RC  S);

A_STATIC A68_VOID  KKBAASP_generator(A68_BOOL  IKBAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NMBAASP_generator(A68_BOOL  LMBAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A68_VOID  WNBAASP_fixed(A68_31  V, A68_INT  Width, A68_INT  After, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  LOBAASP_generator(A68_BOOL  JOBAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A68_VOID  XPBAASP_whole(A68_31  V, A68_INT  Width, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  GQBAASP_generator(A68_BOOL  EQBAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A68_VOID  ARBAASP_float(A68_31  V, A68_INT  Width, A68_INT  After, A68_INT  Exp, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  TRBAASP_generator(A68_BOOL  RRBAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A68_VOID  GTBAASP_hex(A68_LBITS  V, A68_RC  *ReturnedValue);

A68_VOID  VTBAASP_hex(A68_BITS  V, A68_RC  *ReturnedValue);

A68_VOID  KUBAASP_hex(A68_SBITS  V, A68_RC  *ReturnedValue);

A68_VOID  ZUBAASP_hex(A68_SSBITS  V, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  NHBAASP_generator(A68_BOOL  LHBAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OHBAASP_generator *)NonLocals)->x)
{ 
A68_VC  PHBAASP;  /* clause result */
A68_VC  QHBAASP;  /* OPERATORS - dynamic generator */
{ 
QHBAASP.upb = ((NL(S).dim[0].upb+2)+(((*NL(P))<0))) ;
( LHBAASP_anonymous? A_VLOC(A68_CHAR ,QHBAASP): A_VHEAP(A68_CHAR ,QHBAASP) );
PHBAASP = QHBAASP;
} 
*ReturnedValue = (PHBAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  KKBAASP_generator(A68_BOOL  IKBAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LKBAASP_generator *)NonLocals)->x)
{ 
A68_VC  MKBAASP;  /* clause result */
A68_VC  NKBAASP;  /* OPERATORS - dynamic generator */
{ 
NKBAASP.upb = ((NL(VJBAASP_q)+NL(After))+9) ;
( IKBAASP_anonymous? A_VLOC(A68_CHAR ,NKBAASP): A_VHEAP(A68_CHAR ,NKBAASP) );
MKBAASP = NKBAASP;
} 
*ReturnedValue = (MKBAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  NMBAASP_generator(A68_BOOL  LMBAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OMBAASP_generator *)NonLocals)->x)
{ 
A68_RC  PMBAASP;  /* clause result */
A68_RC  QMBAASP;  /* OPERATORS - dynamic generator */
A68_31  RMBAASP;  /* OPERATORS - mode -> union mode */
{ 
QMBAASP.dim[0].upb = (*NL(P)) = JEBAASP_log10(A_UNITE(RMBAASP,mode1,1,NL(JMBAASP_x))) ;
QMBAASP.dim[0].lwb = 1 ;
A_1INITSTRIDES(QMBAASP) ;
( LMBAASP_anonymous? A_R1LOC(A68_CHAR ,QMBAASP): A_R1HEAP(A68_CHAR ,QMBAASP) );
PMBAASP = QMBAASP;
} 
*ReturnedValue = (PMBAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  LOBAASP_generator(A68_BOOL  JOBAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((MOBAASP_generator *)NonLocals)->x)
{ 
A68_RC  NOBAASP;  /* clause result */
A68_RC  OOBAASP;  /* OPERATORS - dynamic generator */
{ 
OOBAASP.dim[0].upb = NL(IOBAASP_upb) ;
OOBAASP.dim[0].lwb = (XNAAASP_min(0, (NL(IOBAASP_upb)-NL(XNBAASP_abswidth)))-2) ;
A_1INITSTRIDES(OOBAASP) ;
( JOBAASP_anonymous? A_R1LOC(A68_CHAR ,OOBAASP): A_R1HEAP(A68_CHAR ,OOBAASP) );
NOBAASP = OOBAASP;
} 
*ReturnedValue = (NOBAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  GQBAASP_generator(A68_BOOL  EQBAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HQBAASP_generator *)NonLocals)->x)
{ 
A68_RC  IQBAASP;  /* clause result */
A68_RC  JQBAASP;  /* OPERATORS - dynamic generator */
{ 
JQBAASP.dim[0].upb = NL(BQBAASP_upb) ;
JQBAASP.dim[0].lwb = 0 ;
A_1INITSTRIDES(JQBAASP) ;
( EQBAASP_anonymous? A_R1LOC(A68_CHAR ,JQBAASP): A_R1HEAP(A68_CHAR ,JQBAASP) );
IQBAASP = JQBAASP;
} 
*ReturnedValue = (IQBAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  TRBAASP_generator(A68_BOOL  RRBAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((URBAASP_generator *)NonLocals)->x)
{ 
A68_RC  VRBAASP;  /* clause result */
A68_RC  WRBAASP;  /* OPERATORS - dynamic generator */
{ 
WRBAASP.dim[0].upb = (NL(ERBAASP_abswidth)-NL(FRBAASP_signafter)) ;
WRBAASP.dim[0].lwb = (-1) ;
A_1INITSTRIDES(WRBAASP) ;
( RRBAASP_anonymous? A_R1LOC(A68_CHAR ,WRBAASP): A_R1HEAP(A68_CHAR ,WRBAASP) );
VRBAASP = WRBAASP;
} 
*ReturnedValue = (VRBAASP);
return;
} 
#undef NL

A68_BOOL  RABAASP_add(A68_LINT * A, A68_INT  D)
{ 
A68_BOOL  SABAASP;  /* clause result */
A_PROC_ENTRY(add);
 /* line 46: */
 /* line 47: */
if ( (((*A)>ZZAAASP_longamax)|(((*A)==ZZAAASP_longamax)&((A68_LINT )D>CABAASP_longdmax))) )
{ 
 /* line 48: */
SABAASP = A68_FALSE;
} 
else
{ 
(*A) = ((10*(*A))+(A68_LINT )D);
 /* line 49: */
SABAASP = A68_TRUE;
} 
A_PROC_EXIT(add);
return( SABAASP );
} 
#undef NL

A68_BOOL  VABAASP_add(A68_INT * A, A68_INT  D)
{ 
A68_BOOL  WABAASP;  /* clause result */
A_PROC_ENTRY(add);
 /* line 52: */
 /* line 53: */
if ( (((*A)>DABAASP_amax)|(((*A)==DABAASP_amax)&(D>GABAASP_dmax))) )
{ 
 /* line 54: */
WABAASP = A68_FALSE;
} 
else
{ 
(*A) = ((10*(*A))+D);
 /* line 55: */
WABAASP = A68_TRUE;
} 
A_PROC_EXIT(add);
return( WABAASP );
} 
#undef NL

A68_BOOL  ZABAASP_add(A68_SINT * A, A68_INT  D)
{ 
A68_BOOL  ABBAASP;  /* clause result */
A_PROC_ENTRY(add);
 /* line 58: */
 /* line 59: */
if ( (((*A)>HABAASP_shortamax)|(((*A)==HABAASP_shortamax)&((A68_SINT )D>KABAASP_shortdmax))) )
{ 
 /* line 60: */
ABBAASP = A68_FALSE;
} 
else
{ 
(*A) = ((10*(*A))+(A68_SINT )D);
 /* line 61: */
ABBAASP = A68_TRUE;
} 
A_PROC_EXIT(add);
return( ABBAASP );
} 
#undef NL

A68_BOOL  DBBAASP_add(A68_SSINT * A, A68_INT  D)
{ 
A68_BOOL  EBBAASP;  /* clause result */
A_PROC_ENTRY(add);
 /* line 64: */
 /* line 65: */
 /* line 66: */
if ( (((*A)>LABAASP_shortshortamax)|(((*A)==LABAASP_shortshortamax)&((A68_SSINT )(A68_SINT )D>OABAASP_shortshortdmax))) )
{ 
 /* line 67: */
EBBAASP = A68_FALSE;
} 
else
{ 
(*A) = ((10*(*A))+(A68_SSINT )(A68_SINT )D);
 /* line 68: */
EBBAASP = A68_TRUE;
} 
A_PROC_EXIT(add);
return( EBBAASP );
} 
#undef NL

A68_BOOL  JBBAASP_stringtolreal(A68_RC  S, A68_INT  Exp, A68_BOOL  Neg, A68_189  X)
{ 
A68_VC  KBBAASP;  /* avoid structure result */
A68_VC  LBBAASP;  /* avoid structure result */
A68_REAL  MBBAASP_res;
A68_INT  NBBAASP_e;
A68_REAL  OBBAASP;  /* clause result */
A68_REAL  PBBAASP;  /* ADICOPS - ** */
A68_REAL  QBBAASP_a;
A68_189  RBBAASP;  /* clause result */
A68_REAL * SBBAASP_r;
A68_BOOL  TBBAASP;  /* clause result */
A68_SREAL * UBBAASP_r;
A_PROC_ENTRY(stringtolreal);
 /* line 73: */
 /* line 74: */
DJAAASP_makervc( S, &KBBAASP );
SMAAASP_z( KBBAASP, &LBBAASP );
MBBAASP_res = NEAAASP_ansistrtod(LBBAASP);
NBBAASP_e = FEAAASP_errno;
 /* line 75: */
if ( Neg )
{ 
OBBAASP = (A68_REAL )(-1);
} 
else
{ 
OBBAASP = (A68_REAL )1;
} 
PBBAASP = 10.0 ;
QBBAASP_a = ((OBBAASP*MBBAASP_res)*A_LR_POWER(PBBAASP,Exp,(A68_REAL )));
 /* line 77: */
 /* line 78: */
 /* line 79: */
RBBAASP = X;
switch ( RBBAASP.mode )
{ 
case 1: /* REF REAL */
SBBAASP_r = (RBBAASP.data.mode1);
 /* line 80: */
if ( (((NBBAASP_e==XBAAASP_erangeerr)|(QBBAASP_a==GBAAASP_infinity))|(QBBAASP_a==(-GBAAASP_infinity))) )
{ 
 /* line 81: */
TBBAASP = A68_FALSE;
} 
else
{ 
(*SBBAASP_r) = QBBAASP_a;
 /* line 82: */
 /* line 83: */
TBBAASP = A68_TRUE;
} 
break;
case 2: /* REF SHORT REAL */
UBBAASP_r = (RBBAASP.data.mode2);
 /* line 84: */
 /* line 85: */
 /* line 86: */
if ( (((((NBBAASP_e==XBAAASP_erangeerr)|(QBBAASP_a==GBAAASP_infinity))|(QBBAASP_a==(-GBAAASP_infinity)))|(QBBAASP_a>(A68_REAL )DVAAASP_shortmaxreal))|(QBBAASP_a<(A68_REAL )(-DVAAASP_shortmaxreal))) )
{ 
 /* line 87: */
TBBAASP = A68_FALSE;
} 
else
{ 
(*UBBAASP_r) = (A68_SREAL )QBBAASP_a;
 /* line 88: */
 /* line 89: */
TBBAASP = A68_TRUE;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(stringtolreal);
return( TBBAASP );
} 
#undef NL

A_STATIC A68_CHAR  WBBAASP_digchar(A68_INT  X)
{ 
A68_CHAR  XBBAASP;  /* clause result */
A_PROC_ENTRY(digchar);
 /* line 93: */
if ( (X>9) )
{ 
XBBAASP = (A68_SSBITS)(((A68_INT)(unsigned char)'a'+X)-10);
} 
else
{ 
XBBAASP = (A68_SSBITS)((A68_INT)(unsigned char)'0'+X);
} 
A_PROC_EXIT(digchar);
return( XBBAASP );
} 
#undef NL

A68_INT  ZBBAASP_chardig(A68_CHAR  X)
{ 
A68_INT  ACBAASP;  /* clause result */
A_PROC_ENTRY(chardig);
 /* line 97: */
if ( (X>'9') )
{ 
ACBAASP = (((A68_INT)(unsigned char)X-(A68_INT)(unsigned char)'a')+10);
} 
else
{ 
ACBAASP = ((A68_INT)(unsigned char)X-(A68_INT)(unsigned char)'0');
} 
A_PROC_EXIT(chardig);
return( ACBAASP );
} 
#undef NL

A68_BOOL  ECBAASP_charinstring(A68_CHAR  C, A68_INT * I, A68_RC  S)
{ 
A68_BOOL  FCBAASP_found;
A68_INT  GCBAASP_k;
A68_INT  HCBAASP;  /* to part of loop */
A68_BOOL  ICBAASP;  /* clause result */
A_PROC_ENTRY(charinstring);
 /* line 101: */
{ 
FCBAASP_found = A68_FALSE;
 /* line 102: */
HCBAASP = S.dim[0].upb;
for ( GCBAASP_k = S.dim[0].lwb;
GCBAASP_k <= HCBAASP;
GCBAASP_k += 1 )
{ 
 /* line 103: */
if ( !(!FCBAASP_found) ) break;
if ( (C==A_R1INDEX(S,GCBAASP_k)) )
{ 
(*I) = GCBAASP_k;
FCBAASP_found = A68_TRUE;
} 
}
 /* line 104: */
ICBAASP = FCBAASP_found;
} 
A_PROC_EXIT(charinstring);
return( ICBAASP );
} 
#undef NL

A68_INT  KCBAASP_intwidth(A68_194  X)
{ 
A68_194  LCBAASP;  /* united object - for case conformity */
A68_INT  MCBAASP;  /* clause result */
A_PROC_ENTRY(intwidth);
 /* line 108: */
LCBAASP = X ;
switch ( LCBAASP.mode )
{ 
case 1: /* LONG INT */
 /* line 109: */
MCBAASP = QTAAASP_longintwidth;
break;
case 2: /* INT */
 /* line 110: */
MCBAASP = RTAAASP_intwidth;
break;
case 3: /* SHORT INT */
 /* line 111: */
MCBAASP = STAAASP_shortintwidth;
break;
case 4: /* SHORT SHORT INT */
 /* line 112: */
MCBAASP = TTAAASP_shortshortintwidth;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(intwidth);
return( MCBAASP );
} 
#undef NL

A68_INT  OCBAASP_realwidth(A68_196  X)
{ 
A68_196  PCBAASP;  /* united object - for case conformity */
A68_INT  QCBAASP;  /* clause result */
A_PROC_ENTRY(realwidth);
 /* line 115: */
PCBAASP = X ;
switch ( PCBAASP.mode )
{ 
case 1: /* REAL */
QCBAASP = OBAAASP_realwidth;
break;
case 2: /* SHORT REAL */
QCBAASP = JBAAASP_shortrealwidth;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(realwidth);
return( QCBAASP );
} 
#undef NL

A68_INT  SCBAASP_rrealwidth(A68_189  X)
{ 
A68_189  TCBAASP;  /* united object - for case conformity */
A68_INT  UCBAASP;  /* clause result */
A_PROC_ENTRY(rrealwidth);
 /* line 118: */
TCBAASP = X ;
switch ( TCBAASP.mode )
{ 
case 1: /* REF REAL */
UCBAASP = OBAAASP_realwidth;
break;
case 2: /* REF SHORT REAL */
UCBAASP = JBAAASP_shortrealwidth;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(rrealwidth);
return( UCBAASP );
} 
#undef NL

A68_INT  WCBAASP_expwidth(A68_196  X)
{ 
A68_196  XCBAASP;  /* united object - for case conformity */
A68_INT  YCBAASP;  /* clause result */
A_PROC_ENTRY(expwidth);
 /* line 121: */
XCBAASP = X ;
switch ( XCBAASP.mode )
{ 
case 1: /* REAL */
YCBAASP = EVAAASP_expwidth;
break;
case 2: /* SHORT REAL */
YCBAASP = FVAAASP_shortexpwidth;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(expwidth);
return( YCBAASP );
} 
#undef NL
 /* line 126: */

A_STATIC A68_INT  DDBAASP_subwhole(A68_194  X, A68_INT * First, A68_INT  Upb, A68_RC  S)
{ 
A68_194  EDBAASP;  /* united object - for case conformity */
A68_LINT  FDBAASP_x;
A68_LINT  GDBAASP_n;
A68_INT  HDBAASP_f;
A68_INT  IDBAASP;  /* YIELD */
A68_LINT  JDBAASP;  /* ADICOPS - MOD */
A68_LINT  KDBAASP;  /* ADICOPS - MOD */
A68_CHAR * LDBAASP;  /* YIELD */
A68_BOOL  MDBAASP;  /* clause result */
A68_INT  NDBAASP_i;
A68_INT  ODBAASP;  /* to part of loop */
A68_CHAR * PDBAASP;  /* YIELD */
A68_INT  QDBAASP;  /* clause result */
A68_200  RDBAASP_x;
A68_200  SDBAASP;  /* united object - for case conformity */
A68_INT  TDBAASP_i;
A68_INT  UDBAASP;  /* clause result */
A68_SINT  VDBAASP_i;
A68_SSINT  WDBAASP_i;
A68_INT  XDBAASP_n;
A68_INT  YDBAASP_sign;
A68_INT  ZDBAASP_f;
A68_INT  AEBAASP;  /* YIELD */
A68_INT  BEBAASP;  /* ADICOPS - MOD */
A68_INT  CEBAASP;  /* ADICOPS - MOD */
A68_CHAR * DEBAASP;  /* YIELD */
A68_BOOL  EEBAASP;  /* clause result */
A68_INT  FEBAASP_i;
A68_INT  GEBAASP;  /* to part of loop */
A68_CHAR * HEBAASP;  /* YIELD */
A_PROC_ENTRY(subwhole);
 /* line 132: */
 /* line 133: */
EDBAASP = X ;
switch ( EDBAASP.mode )
{ 
case 1: /* LONG INT */
FDBAASP_x = (EDBAASP.data.mode1);
 /* line 134: */
 /* line 135: */
{ 
GDBAASP_n = A_ABS(FDBAASP_x);
HDBAASP_f = (*First);
(*First) = (Upb+1);
 /* line 136: */
for ( ;; )
{ 
 /* line 137: */
IDBAASP = (*First)-=1 ;
KDBAASP = 10 ;
LDBAASP = (&A_R1INDEX(S,IDBAASP)) ;
(*LDBAASP) = WBBAASP_digchar((A68_INT )A_MOD(GDBAASP_n,KDBAASP,JDBAASP));
 /* line 138: */
GDBAASP_n/=10;
 /* line 139: */
 /* line 140: */
MDBAASP = (GDBAASP_n!=0);
if ( !MDBAASP ) break;
/*SKIP*/;
}
 /* line 141: */
ODBAASP = ((*First)-1);
for ( NDBAASP_i = HDBAASP_f;
NDBAASP_i <= ODBAASP;
NDBAASP_i += 1 )
{ 
PDBAASP = (&A_R1INDEX(S,NDBAASP_i)) ;
(*PDBAASP) = ' ';
}
 /* line 142: */
 /* line 143: */
 /* line 144: */
QDBAASP = A_SIGN(FDBAASP_x);
} 
break;
case 2: /* INT */
case 3: /* SHORT INT */
case 4: /* SHORT SHORT INT */
A_UNCPY(RDBAASP_x,EDBAASP);
RDBAASP_x.mode -= 1;
 /* line 145: */
 /* line 146: */
{ 
SDBAASP = RDBAASP_x ;
switch ( SDBAASP.mode )
{ 
case 1: /* INT */
TDBAASP_i = (SDBAASP.data.mode1);
 /* line 147: */
UDBAASP = TDBAASP_i;
break;
case 2: /* SHORT INT */
VDBAASP_i = (SDBAASP.data.mode2);
 /* line 148: */
UDBAASP = (A68_INT )VDBAASP_i;
break;
case 3: /* SHORT SHORT INT */
WDBAASP_i = (SDBAASP.data.mode3);
UDBAASP = (A68_INT )(A68_SINT )WDBAASP_i;
break;
default: 
A_IMP_SKIP ;
break;
} 
XDBAASP_n = UDBAASP;
 /* line 149: */
YDBAASP_sign = A_SIGN(XDBAASP_n);
XDBAASP_n = A_ABS(XDBAASP_n);
 /* line 150: */
ZDBAASP_f = (*First);
(*First) = (Upb+1);
 /* line 152: */
for ( ;; )
{ 
 /* line 153: */
AEBAASP = (*First)-=1 ;
CEBAASP = 10 ;
DEBAASP = (&A_R1INDEX(S,AEBAASP)) ;
(*DEBAASP) = WBBAASP_digchar(A_MOD(XDBAASP_n,CEBAASP,BEBAASP));
 /* line 154: */
XDBAASP_n/=10;
 /* line 155: */
 /* line 156: */
EEBAASP = (XDBAASP_n!=0);
if ( !EEBAASP ) break;
/*SKIP*/;
}
 /* line 158: */
GEBAASP = ((*First)-1);
for ( FEBAASP_i = ZDBAASP_f;
FEBAASP_i <= GEBAASP;
FEBAASP_i += 1 )
{ 
HEBAASP = (&A_R1INDEX(S,FEBAASP_i)) ;
(*HEBAASP) = ' ';
}
 /* line 159: */
 /* line 160: */
 /* line 161: */
QDBAASP = YDBAASP_sign;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(subwhole);
return( QDBAASP );
} 
#undef NL

A_STATIC A68_INT  JEBAASP_log10(A68_31  V)
{ 
A68_31  KEBAASP;  /* united object - for case conformity */
A68_196  LEBAASP_x;
A68_196  MEBAASP;  /* united object - for case conformity */
A68_REAL  NEBAASP_a;
A68_REAL  OEBAASP;  /* clause result */
A68_SREAL  PEBAASP_a;
A68_REAL  QEBAASP;  /* ADICOPS - ABS REAL */
A68_REAL  REBAASP_r;
A68_BOOL  SEBAASP;  /* clause result */
A68_INT  TEBAASP;  /* clause result */
union {  /* BIOP 99 */
A68_REAL   source;
A68_149   destination;
} UEBAASP; 
A68_149  VEBAASP_b;
A68_122  WEBAASP;  /* OPERATORS - istruct -> vector */
A68_122  XEBAASP;  /* OPERATORS - simple index */
A68_BITS  YEBAASP;  /* SHR */
A68_200  ZEBAASP_x;
A68_200  AFBAASP;  /* united object - for case conformity */
A68_INT  BFBAASP_n;
A68_INT  CFBAASP;  /* clause result */
A68_SINT  DFBAASP_n;
A68_INT  EFBAASP;  /* ADICOPS - ABS INT */
A68_SSINT  FFBAASP_n;
A68_INT  GFBAASP;  /* ADICOPS - ABS INT */
A68_BITS  HFBAASP_r;
A68_INT  IFBAASP_p;
A68_INT  JFBAASP;  /* SHR */
A68_LINT  KFBAASP_x;
A68_LBITS  LFBAASP_r;
A68_BOOL  MFBAASP;  /* clause result */
A68_INT  NFBAASP_p;
A68_INT  OFBAASP;  /* SHR */
A_PROC_ENTRY(log10);
 /* line 165: */
 /* line 166: */
KEBAASP = V ;
switch ( KEBAASP.mode )
{ 
case 5: /* REAL */
case 6: /* SHORT REAL */
A_UNCPY(LEBAASP_x,KEBAASP);
LEBAASP_x.mode -= 4;
 /* line 167: */
{ 
MEBAASP = LEBAASP_x ;
switch ( MEBAASP.mode )
{ 
case 1: /* REAL */
NEBAASP_a = (MEBAASP.data.mode1);
OEBAASP = A_ABS(NEBAASP_a);
break;
case 2: /* SHORT REAL */
PEBAASP_a = (MEBAASP.data.mode2);
QEBAASP = (A68_REAL )PEBAASP_a ;
OEBAASP = A_ABS(QEBAASP);
break;
default: 
A_IMP_SKIP ;
break;
} 
REBAASP_r = OEBAASP;
 /* line 168: */
 /* line 169: */
 /* line 170: */
SEBAASP = (REBAASP_r<1.0);
if ( SEBAASP )
{ 
 /* line 171: */
TEBAASP = 0;
} 
else
{ 
UEBAASP.source = REBAASP_r ;
VEBAASP_b = (UEBAASP.destination);
 /* line 172: */
 /* line 174: */
 /* line 175: */
 /* line 176: */
XEBAASP = A_HISVEC(WEBAASP,VEBAASP_b,2,A68_BITS ) ;
YEBAASP = (A68_BITS )(A_VINDEX(XEBAASP,SGAAASP_fp64expword)&NGAAASP_fp64expmask) ;
TEBAASP = LPAAASP_max(0, (1+YSAAASP_entier((LWAAASP_log2*((A68_REAL )((1+(A68_INT )A_SHR(YEBAASP,QGAAASP_fp64bitsafterexp))-RBAAASP_maxexp))))));
} 
} 
break;
case 2: /* INT */
case 3: /* SHORT INT */
case 4: /* SHORT SHORT INT */
A_UNCPY(ZEBAASP_x,KEBAASP);
ZEBAASP_x.mode -= 1;
 /* line 177: */
{ 
AFBAASP = ZEBAASP_x ;
switch ( AFBAASP.mode )
{ 
case 1: /* INT */
BFBAASP_n = (AFBAASP.data.mode1);
 /* line 178: */
CFBAASP = A_ABS(BFBAASP_n);
break;
case 2: /* SHORT INT */
DFBAASP_n = (AFBAASP.data.mode2);
 /* line 179: */
EFBAASP = (A68_INT )DFBAASP_n ;
CFBAASP = A_ABS(EFBAASP);
break;
case 3: /* SHORT SHORT INT */
FFBAASP_n = (AFBAASP.data.mode3);
GFBAASP = (A68_INT )(A68_SINT )FFBAASP_n ;
CFBAASP = A_ABS(GFBAASP);
break;
default: 
A_IMP_SKIP ;
break;
} 
HFBAASP_r = (A68_BITS )CFBAASP;
 /* line 180: */
IFBAASP_p = 0;
 /* line 181: */
for ( ;; )
{ 
if ( !((HFBAASP_r!=0X0U)) ) break;
JFBAASP = 1 ;
HFBAASP_r = A_SHR(HFBAASP_r,JFBAASP);
IFBAASP_p+=1;
}
 /* line 182: */
 /* line 183: */
TEBAASP = LPAAASP_max(0, (1+YSAAASP_entier((LWAAASP_log2*((A68_REAL )IFBAASP_p)))));
} 
break;
case 1: /* LONG INT */
KFBAASP_x = (KEBAASP.data.mode1);
{ 
LFBAASP_r = (A68_LBITS )A_ABS(KFBAASP_x);
MFBAASP = (LFBAASP_r==0X0U);
if ( MFBAASP )
{ 
 /* line 184: */
TEBAASP = 1;
} 
else
{ 
NFBAASP_p = 0;
 /* line 185: */
for ( ;; )
{ 
if ( !((LFBAASP_r!=0X0U)) ) break;
OFBAASP = 1 ;
LFBAASP_r = A_SHR(LFBAASP_r,OFBAASP);
NFBAASP_p+=1;
}
 /* line 186: */
TEBAASP = LPAAASP_max(0, (1+YSAAASP_entier((LWAAASP_log2*((A68_REAL )NFBAASP_p)))));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(log10);
return( TEBAASP );
} 
#undef NL

A68_INT  RFBAASP_explength(A68_BOOL  Signexp, A68_INT  Exponent)
{ 
A68_INT  SFBAASP;  /* clause result */
A68_INT  TFBAASP;  /* clause result */
A68_31  UFBAASP;  /* OPERATORS - mode -> union mode */
A68_LINT  VFBAASP;  /* YIELD */
A_PROC_ENTRY(explength);
 /* line 192: */
 /* line 187: */
if ( (Signexp|(Exponent<0)) )
{ 
SFBAASP = 1;
} 
else
{ 
SFBAASP = 0;
} 
VFBAASP = (A68_LINT )Exponent ;
TFBAASP = (JEBAASP_log10(A_UNITE(UFBAASP,mode1,1,VFBAASP))+SFBAASP);
A_PROC_EXIT(explength);
return( TFBAASP );
} 
#undef NL

A_STATIC A68_BOOL  ZFBAASP_searchforroundingpoint(A68_RC  S, A68_INT * Rp, A68_INT  Last)
{ 
A68_CHAR  AGBAASP_c;
A68_BOOL  BGBAASP;  /* clause result */
A68_BOOL  CGBAASP;  /* clause result */
A68_CHAR  DGBAASP;  /* clause result */
A68_INT  EGBAASP;  /* YIELD */
A68_BOOL  FGBAASP;  /* clause result */
A68_INT  GGBAASP;  /* YIELD */
A68_BOOL  HGBAASP;  /* clause result */
A_PROC_ENTRY(searchforroundingpoint);
 /* line 196: */
{ 
 /* line 197: */
 /* line 198: */
if ( (((*Rp) = (Last+1))>S.dim[0].upb) )
{ 
 /* line 199: */
BGBAASP = A68_TRUE;
} 
else
{ 
 /* line 200: */
 /* line 201: */
BGBAASP = (((AGBAASP_c = (*(&A_R1INDEX(S,(*Rp)))))=='.')&((*Rp)==S.dim[0].upb));
} 
if ( BGBAASP )
{ 
 /* line 202: */
CGBAASP = A68_FALSE;
} 
else
{ 
if ( (AGBAASP_c=='.') )
{ 
EGBAASP = ((*Rp)+1) ;
DGBAASP = (*(&A_R1INDEX(S,EGBAASP)));
} 
else
{ 
DGBAASP = AGBAASP_c;
} 
 /* line 203: */
 /* line 204: */
FGBAASP = (ZBBAASP_chardig(DGBAASP)>=5);
if ( FGBAASP )
{ 
for ( ;; )
{ 
GGBAASP = (*Rp)-=1 ;
AGBAASP_c = (*(&A_R1INDEX(S,GGBAASP)));
HGBAASP = ((AGBAASP_c=='9')|(AGBAASP_c=='.'));
if ( !HGBAASP ) break;
/*SKIP*/;
}
 /* line 205: */
 /* line 206: */
CGBAASP = ((*Rp)==0);
} 
else
{ 
 /* line 207: */
CGBAASP = A68_FALSE;
} 
} 
} 
A_PROC_EXIT(searchforroundingpoint);
return( CGBAASP );
} 
#undef NL

A_STATIC A68_VOID  LGBAASP_spround(A68_RC  S, A68_INT  Rp, A68_INT  Last)
{ 
A68_CHAR * MGBAASP_srp;
A68_INT  NGBAASP_i;
A68_INT  OGBAASP;  /* to part of loop */
A68_CHAR * PGBAASP_si;
A_PROC_ENTRY(spround);
 /* line 211: */
 /* line 212: */
 /* line 213: */
if ( (Rp<=Last) )
{ 
MGBAASP_srp = (&A_R1INDEX(S,Rp));
(*MGBAASP_srp) = WBBAASP_digchar((ZBBAASP_chardig((*MGBAASP_srp))+1));
 /* line 214: */
 /* line 215: */
OGBAASP = Last;
for ( NGBAASP_i = (Rp+1);
NGBAASP_i <= OGBAASP;
NGBAASP_i += 1 )
{ 
 /* line 216: */
PGBAASP_si = (&A_R1INDEX(S,NGBAASP_i));
if ( ((*PGBAASP_si)!='.') )
{ 
 /* line 217: */
(*PGBAASP_si) = '0';
} 
}
 /* line 218: */
} 
A_PROC_EXIT(spround);
return;
} 
#undef NL

A_STATIC A68_INT  UGBAASP_subfixed(A68_31  V, A68_INT  After, A68_INT * P, A68_RC  S)
{ 
A68_INT  VGBAASP_i;
A68_INT  WGBAASP;  /* to part of loop */
A68_CHAR * XGBAASP;  /* YIELD */
A68_INT  YGBAASP;  /* YIELD */
A68_CHAR * ZGBAASP;  /* YIELD */
A68_31  AHBAASP;  /* united object - for case conformity */
A68_196  BHBAASP_x;
A68_196  CHBAASP;  /* united object - for case conformity */
A68_REAL  DHBAASP_rr;
A68_REAL  EHBAASP;  /* clause result */
A68_SREAL  FHBAASP_rr;
A68_REAL  GHBAASP_r;
A68_BOOL  HHBAASP;  /* clause result */
A68_INT  IHBAASP;  /* YIELD */
A68_CHAR * JHBAASP;  /* YIELD */
A68_INT  KHBAASP;  /* clause result */
A68_34  MHBAASP_generator;   /* proc value of non-global proc */
A68_VC  SHBAASP;  /* avoid structure result */
A68_VC  RHBAASP_buff;
A68_INT  VHBAASP;  /* YIELD */
A68_CHAR * WHBAASP;  /* YIELD */
A68_RC  XHBAASP;  /* OPERATORS - trim index */
A68_VC  YHBAASP;  /* YIELD */
A68_RC  ZHBAASP;  /* OPERATORS - vector -> row */
A68_RC  AIBAASP;  /* YIELD */
A68_RC  BIBAASP;  /* OPERATORS - assign op */
A68_RC  CIBAASP;  /* OPERATORS - trim index */
A68_VC  DIBAASP;  /* OPERATORS - trim index */
A68_VC  EIBAASP;  /* YIELD */
A68_RC  FIBAASP;  /* OPERATORS - vector -> row */
A68_RC  GIBAASP;  /* YIELD */
A68_RC  HIBAASP;  /* OPERATORS - assign op */
A68_RC  IIBAASP;  /* OPERATORS - trim index */
A68_VC  JIBAASP;  /* OPERATORS - trim index */
A68_VC  KIBAASP;  /* YIELD */
A68_RC  LIBAASP;  /* OPERATORS - vector -> row */
A68_RC  MIBAASP;  /* YIELD */
A68_RC  NIBAASP;  /* OPERATORS - assign op */
A68_INT  OIBAASP;  /* to part of loop */
A68_INT  PIBAASP;  /* loop control */
A68_194  QIBAASP_x;
A68_INT  RIBAASP_sign;
A68_INT  SIBAASP_point;
A68_INT  TIBAASP_first;
A68_RC  UIBAASP;  /* OPERATORS - trim index */
A68_BOOL  VIBAASP;  /* clause result */
A68_INT  WIBAASP_uf;
A68_RC  XIBAASP;  /* OPERATORS - trim index */
A68_RC  YIBAASP;  /* OPERATORS - trim index */
A68_RC  ZIBAASP;  /* YIELD */
A68_RC  AJBAASP;  /* OPERATORS - assign op */
A68_INT  BJBAASP_i;
A68_INT  CJBAASP;  /* to part of loop */
A68_CHAR * DJBAASP;  /* YIELD */
A68_INT  EJBAASP;  /* YIELD */
A68_CHAR * FJBAASP;  /* YIELD */
A68_INT  GJBAASP_i;
A68_INT  HJBAASP;  /* to part of loop */
A68_CHAR * IJBAASP;  /* YIELD */
A_PROC_ENTRY(subfixed);
 /* line 222: */
 /* line 228: */
{ 
WGBAASP = (-1);
for ( VGBAASP_i = S.dim[0].lwb;
VGBAASP_i <= WGBAASP;
VGBAASP_i += 1 )
{ 
XGBAASP = (&A_R1INDEX(S,VGBAASP_i)) ;
(*XGBAASP) = NUAAASP_blank;
}
YGBAASP = 0 ;
ZGBAASP = (&A_R1INDEX(S,YGBAASP)) ;
(*ZGBAASP) = '0';
 /* line 230: */
 /* line 231: */
 /* line 232: */
AHBAASP = V ;
switch ( AHBAASP.mode )
{ 
case 5: /* REAL */
case 6: /* SHORT REAL */
A_UNCPY(BHBAASP_x,AHBAASP);
BHBAASP_x.mode -= 4;
 /* line 233: */
{ 
CHBAASP = BHBAASP_x ;
switch ( CHBAASP.mode )
{ 
case 1: /* REAL */
DHBAASP_rr = (CHBAASP.data.mode1);
EHBAASP = DHBAASP_rr;
break;
case 2: /* SHORT REAL */
FHBAASP_rr = (CHBAASP.data.mode2);
EHBAASP = (A68_REAL )FHBAASP_rr;
break;
default: 
A_IMP_SKIP ;
break;
} 
GHBAASP_r = EHBAASP;
 /* line 234: */
 /* line 235: */
HHBAASP = !UGAAASP_valid(GHBAASP_r);
if ( HHBAASP )
{ 
IHBAASP = S.dim[0].lwb ;
JHBAASP = (&A_R1INDEX(S,IHBAASP)) ;
(*JHBAASP) = OUAAASP_errorchar;
 /* line 236: */
 /* line 237: */
KHBAASP = 0;
} 
else
{ 
A_CLOSURE( MHBAASP_generator, NHBAASP_generator, OHBAASP_generator );
(( OHBAASP_generator * ) ( MHBAASP_generator.nonlocals )) -> S = S;
(( OHBAASP_generator * ) ( MHBAASP_generator.nonlocals )) -> P = P;
A_CALLPROC(MHBAASP_generator,(A68_TRUE, &SHBAASP),(A68_TRUE, &SHBAASP,(MHBAASP_generator).nonlocals));
RHBAASP_buff = SHBAASP;
 /* line 239: */
 /* line 240: */
 /* line 241: */
 /* line 242: */
 /* line 243: */
YEAAASP_bsdrealsnprintf(RHBAASP_buff, UHBAASP, GHBAASP_r, (RHBAASP_buff.upb-1), (After+1));
 /* line 245: */
 /* line 246: */
if ( (GHBAASP_r==0.0) )
{ 
VHBAASP = 1 ;
WHBAASP = (&A_R1INDEX(S,VHBAASP)) ;
(*WHBAASP) = '.';
YHBAASP = A_C_TIMES('0',(S.dim[0].upb-1)) ;
AIBAASP = A_R1TRIM(XHBAASP,(S),A_RTSCRIPT(&(XHBAASP.dim[0]),&((S).dim[0]),2,(S).dim[0].upb,1)) ;
BIBAASP = A_VECARR(YHBAASP,ZHBAASP) ;
A_R1ASSIGN2(BIBAASP,AIBAASP,A68_CHAR );
 /* line 247: */
(*P) = 0;
} 
else
{ 
 /* line 248: */
 /* line 249: */
if ( ((*P)<0) )
{ 
(*P) = (RHBAASP_buff.upb-1);
 /* line 250: */
for ( ;; )
{ 
if ( !((((*(&A_VINDEX(RHBAASP_buff,(*P))))!='.')&((*P)>1))) ) break;
(*P)-=1;
}
 /* line 251: */
EIBAASP = A_VTRIM(DIBAASP,(RHBAASP_buff),A_VTSCRIPT(&(DIBAASP.upb),(RHBAASP_buff).upb,(*P),(RHBAASP_buff.upb-1))) ;
GIBAASP = A_R1TRIM(CIBAASP,(S),A_RTSCRIPT(&(CIBAASP.dim[0]),&((S).dim[0]),1,(RHBAASP_buff.upb-(*P)),1)) ;
HIBAASP = A_VECARR(EIBAASP,FIBAASP) ;
A_R1ASSIGN2(HIBAASP,GIBAASP,A68_CHAR );
 /* line 252: */
 /* line 253: */
 /* line 254: */
(*P) = 1;
} 
else
{ 
KIBAASP = A_VTRIM(JIBAASP,(RHBAASP_buff),A_VTSCRIPT(&(JIBAASP.upb),(RHBAASP_buff).upb,2,(S.dim[0].upb+1))) ;
MIBAASP = A_R1TRIM(IIBAASP,(S),A_RTSCRIPT(&(IIBAASP.dim[0]),&((S).dim[0]),1,S.dim[0].upb,1)) ;
NIBAASP = A_VECARR(KIBAASP,LIBAASP) ;
A_R1ASSIGN2(NIBAASP,MIBAASP,A68_CHAR );
 /* line 255: */
(*P) = 1;
 /* line 256: */
OIBAASP = S.dim[0].upb;
for ( PIBAASP = (*P);
PIBAASP <= OIBAASP;
PIBAASP += 1 )
{ 
if ( !(((*(&A_R1INDEX(S,(*P))))!='.')) ) break;
(*P)+=1;
}
 /* line 257: */
} 
} 
 /* line 259: */
 /* line 260: */
 /* line 261: */
KHBAASP = A_SIGN(GHBAASP_r);
} 
} 
break;
case 1: /* LONG INT */
case 2: /* INT */
case 3: /* SHORT INT */
case 4: /* SHORT SHORT INT */
A_UNCPY(QIBAASP_x,AHBAASP);
 /* line 262: */
 /* line 263: */
{ 
SIBAASP_point = ((*P)+1);
TIBAASP_first = 1;
 /* line 264: */
RIBAASP_sign = DDBAASP_subwhole(QIBAASP_x, (&TIBAASP_first), SIBAASP_point, A_R1TRIM(UIBAASP,(S),A_RTSCRIPT(&(UIBAASP.dim[0]),&((S).dim[0]),0,SIBAASP_point,0)));
 /* line 265: */
 /* line 266: */
 /* line 267: */
VIBAASP = (TIBAASP_first>1);
if ( VIBAASP )
{ 
WIBAASP_uf = ((SIBAASP_point-TIBAASP_first)+1);
 /* line 269: */
ZIBAASP = A_R1TRIM(XIBAASP,(S),A_RTSCRIPT(&(XIBAASP.dim[0]),&((S).dim[0]),1,WIBAASP_uf,1)) ;
AJBAASP = A_R1TRIM(YIBAASP,(S),A_RTSCRIPT(&(YIBAASP.dim[0]),&((S).dim[0]),TIBAASP_first,SIBAASP_point,1)) ;
A_R1ASSIGN2(AJBAASP,ZIBAASP,A68_CHAR );
 /* line 270: */
CJBAASP = S.dim[0].upb;
for ( BJBAASP_i = (WIBAASP_uf+1);
BJBAASP_i <= CJBAASP;
BJBAASP_i += 1 )
{ 
DJBAASP = (&A_R1INDEX(S,BJBAASP_i)) ;
(*DJBAASP) = '0';
}
 /* line 271: */
 /* line 272: */
SIBAASP_point = WIBAASP_uf;
} 
 /* line 273: */
EJBAASP = (*P) = XNAAASP_min((SIBAASP_point+1), S.dim[0].upb) ;
FJBAASP = (&A_R1INDEX(S,EJBAASP)) ;
(*FJBAASP) = '.';
 /* line 274: */
HJBAASP = S.dim[0].upb;
for ( GJBAASP_i = ((*P)+1);
GJBAASP_i <= HJBAASP;
GJBAASP_i += 1 )
{ 
IJBAASP = (&A_R1INDEX(S,GJBAASP_i)) ;
(*IJBAASP) = '0';
}
 /* line 275: */
 /* line 276: */
 /* line 277: */
 /* line 278: */
KHBAASP = RIBAASP_sign;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(subfixed);
return( KHBAASP );
} 
#undef NL

A_STATIC A68_INT  NJBAASP_subfloat(A68_31  V, A68_INT  After, A68_INT * P, A68_RC  S)
{ 
A68_RC  PJBAASP;  /* OPERATORS - trim index */
A68_RC  RJBAASP;  /* YIELD */
A68_RC  SJBAASP;  /* OPERATORS - assign op */
A68_31  TJBAASP;  /* clause result */
A68_207  UJBAASP_x;
A68_INT  VJBAASP_q;
A68_207  WJBAASP;  /* united object - for case conformity */
A68_REAL  XJBAASP_rr;
A68_REAL  YJBAASP;  /* clause result */
A68_SREAL  ZJBAASP_rr;
A68_INT  AKBAASP_n;
A68_SINT  BKBAASP_n;
A68_SSINT  CKBAASP_n;
A68_REAL  DKBAASP_r;
A68_BOOL  EKBAASP;  /* clause result */
A68_INT  FKBAASP;  /* YIELD */
A68_CHAR * GKBAASP;  /* YIELD */
A68_INT  HKBAASP;  /* clause result */
A68_34  JKBAASP_generator;   /* proc value of non-global proc */
A68_VC  PKBAASP;  /* avoid structure result */
A68_VC  OKBAASP_buff;
A68_RC  SKBAASP;  /* OPERATORS - trim index */
A68_VC  TKBAASP;  /* OPERATORS - trim index */
A68_VC  UKBAASP;  /* YIELD */
A68_RC  VKBAASP;  /* OPERATORS - vector -> row */
A68_RC  WKBAASP;  /* YIELD */
A68_RC  XKBAASP;  /* OPERATORS - assign op */
A68_INT  YKBAASP;  /* YIELD */
A68_CHAR * ZKBAASP;  /* YIELD */
A68_BOOL  ALBAASP;  /* clause result */
A68_INT  BLBAASP;  /* YIELD */
A68_INT  CLBAASP;  /* YIELD */
A68_CHAR * DLBAASP;  /* YIELD */
A68_RC  ELBAASP;  /* OPERATORS - trim index */
A68_VC  FLBAASP;  /* OPERATORS - trim index */
A68_VC  GLBAASP;  /* YIELD */
A68_RC  HLBAASP;  /* OPERATORS - vector -> row */
A68_RC  ILBAASP;  /* YIELD */
A68_RC  JLBAASP;  /* OPERATORS - assign op */
A68_INT  KLBAASP;  /* YIELD */
A68_INT  LLBAASP;  /* YIELD */
A68_CHAR * MLBAASP;  /* YIELD */
A68_RC  NLBAASP;  /* OPERATORS - trim index */
A68_VC  OLBAASP;  /* OPERATORS - trim index */
A68_VC  PLBAASP;  /* YIELD */
A68_RC  QLBAASP;  /* OPERATORS - vector -> row */
A68_RC  RLBAASP;  /* YIELD */
A68_RC  SLBAASP;  /* OPERATORS - assign op */
A68_RC  TLBAASP;  /* OPERATORS - trim index */
A68_VC  ULBAASP;  /* OPERATORS - trim index */
A68_VC  VLBAASP;  /* YIELD */
A68_RC  WLBAASP;  /* OPERATORS - vector -> row */
A68_RC  XLBAASP;  /* YIELD */
A68_RC  YLBAASP;  /* OPERATORS - assign op */
A68_BOOL  ZLBAASP;  /* clause result */
A68_INT  AMBAASP;  /* YIELD */
A68_INT  BMBAASP;  /* clause result */
A68_INT  CMBAASP_s;
A68_INT  DMBAASP;  /* YIELD */
A68_INT  EMBAASP;  /* YIELD */
A68_INT  FMBAASP;  /* YIELD */
A68_CHAR  GMBAASP_c;
A68_BOOL  HMBAASP;  /* clause result */
A68_INT  IMBAASP;  /* clause result */
A68_LINT  JMBAASP_x;
A68_INT  KMBAASP_before;
A68_33  MMBAASP_generator;   /* proc value of non-global proc */
A68_RC  TMBAASP;  /* avoid structure result */
A68_RC  SMBAASP_ss;
A68_INT  UMBAASP_first;
A68_194  VMBAASP;  /* OPERATORS - mode -> union mode */
A68_INT  WMBAASP_sign;
A68_RC  XMBAASP;  /* OPERATORS - trim index */
A68_RC  YMBAASP;  /* OPERATORS - trim index */
A68_RC  ZMBAASP;  /* YIELD */
A68_RC  ANBAASP;  /* OPERATORS - assign op */
A68_INT  BNBAASP;  /* YIELD */
A68_CHAR * CNBAASP;  /* YIELD */
A68_INT  DNBAASP;  /* ADICOPS - SIGN */
A68_RC  ENBAASP;  /* OPERATORS - trim index */
A68_RC  FNBAASP;  /* OPERATORS - trim index */
A68_RC  GNBAASP;  /* YIELD */
A68_RC  HNBAASP;  /* OPERATORS - assign op */
A68_INT  INBAASP_i;
A68_INT  JNBAASP;  /* to part of loop */
A68_CHAR * KNBAASP;  /* YIELD */
A68_RC  LNBAASP;  /* OPERATORS - trim index */
A68_RC  MNBAASP;  /* OPERATORS - trim index */
A68_RC  NNBAASP;  /* YIELD */
A68_RC  ONBAASP;  /* OPERATORS - assign op */
A68_RC  PNBAASP;  /* OPERATORS - trim index */
A68_RC  QNBAASP;  /* OPERATORS - trim index */
A68_RC  RNBAASP;  /* YIELD */
A68_RC  SNBAASP;  /* OPERATORS - assign op */
A_PROC_ENTRY(subfloat);
 /* line 281: */
RJBAASP = A_R1TRIM(PJBAASP,(S),A_RTSCRIPT(&(PJBAASP.dim[0]),&((S).dim[0]),(-1),0,1)) ;
SJBAASP = QJBAASP ;
A_R1ASSIGN2(SJBAASP,RJBAASP,A68_CHAR );
 /* line 282: */
 /* line 283: */
TJBAASP = V;
switch ( TJBAASP.mode )
{ 
case 2: /* INT */
case 3: /* SHORT INT */
case 4: /* SHORT SHORT INT */
case 5: /* REAL */
case 6: /* SHORT REAL */
A_UNCPY(UJBAASP_x,TJBAASP);
UJBAASP_x.mode = "\000\0\003\004\005\001\002"[TJBAASP.mode];
 /* line 284: */
{ 
VJBAASP_q = (*P);
 /* line 285: */
WJBAASP = UJBAASP_x ;
switch ( WJBAASP.mode )
{ 
case 1: /* REAL */
XJBAASP_rr = (WJBAASP.data.mode1);
 /* line 286: */
YJBAASP = XJBAASP_rr;
break;
case 2: /* SHORT REAL */
ZJBAASP_rr = (WJBAASP.data.mode2);
 /* line 287: */
YJBAASP = (A68_REAL )ZJBAASP_rr;
break;
case 3: /* INT */
AKBAASP_n = (WJBAASP.data.mode3);
 /* line 288: */
YJBAASP = (A68_REAL )AKBAASP_n;
break;
case 4: /* SHORT INT */
BKBAASP_n = (WJBAASP.data.mode4);
 /* line 289: */
YJBAASP = (A68_REAL )(A68_INT )BKBAASP_n;
break;
case 5: /* SHORT SHORT INT */
CKBAASP_n = (WJBAASP.data.mode5);
YJBAASP = (A68_REAL )(A68_INT )(A68_SINT )CKBAASP_n;
break;
default: 
A_IMP_SKIP ;
break;
} 
DKBAASP_r = YJBAASP;
 /* line 290: */
 /* line 291: */
EKBAASP = !UGAAASP_valid(DKBAASP_r);
if ( EKBAASP )
{ 
FKBAASP = (-1) ;
GKBAASP = (&A_R1INDEX(S,FKBAASP)) ;
(*GKBAASP) = OUAAASP_errorchar;
 /* line 292: */
 /* line 301: */
HKBAASP = 0;
} 
else
{ 
{ 
A_CLOSURE( JKBAASP_generator, KKBAASP_generator, LKBAASP_generator );
(( LKBAASP_generator * ) ( JKBAASP_generator.nonlocals )) -> VJBAASP_q = VJBAASP_q;
(( LKBAASP_generator * ) ( JKBAASP_generator.nonlocals )) -> After = After;
A_CALLPROC(JKBAASP_generator,(A68_TRUE, &PKBAASP),(A68_TRUE, &PKBAASP,(JKBAASP_generator).nonlocals));
OKBAASP_buff = PKBAASP;
 /* line 308: */
 /* line 309: */
 /* line 310: */
 /* line 311: */
 /* line 312: */
YEAAASP_bsdrealsnprintf(OKBAASP_buff, RKBAASP, DKBAASP_r, (OKBAASP_buff.upb-1), (VJBAASP_q+After));
 /* line 325: */
 /* line 326: */
if ( (VJBAASP_q==1) )
{ 
 /* line 327: */
UKBAASP = A_VTRIM(TKBAASP,(OKBAASP_buff),A_VTSCRIPT(&(TKBAASP.upb),(OKBAASP_buff).upb,2,((3+After)+VJBAASP_q))) ;
WKBAASP = A_R1TRIM(SKBAASP,(S),A_RTSCRIPT(&(SKBAASP.dim[0]),&((S).dim[0]),1,((2+After)+VJBAASP_q),1)) ;
XKBAASP = A_VECARR(UKBAASP,VKBAASP) ;
A_R1ASSIGN2(XKBAASP,WKBAASP,A68_CHAR );
} 
else
{ 
YKBAASP = (VJBAASP_q+1) ;
ZKBAASP = (&A_R1INDEX(S,YKBAASP)) ;
(*ZKBAASP) = '.';
 /* line 328: */
 /* line 329: */
ALBAASP = (VJBAASP_q==0);
if ( ALBAASP )
{ 
BLBAASP = 2 ;
CLBAASP = 2 ;
DLBAASP = (&A_R1INDEX(S,BLBAASP)) ;
(*DLBAASP) = (*(&A_VINDEX(OKBAASP_buff,CLBAASP)));
 /* line 330: */
 /* line 331: */
 /* line 332: */
GLBAASP = A_VTRIM(FLBAASP,(OKBAASP_buff),A_VTSCRIPT(&(FLBAASP.upb),(OKBAASP_buff).upb,4,(3+After))) ;
ILBAASP = A_R1TRIM(ELBAASP,(S),A_RTSCRIPT(&(ELBAASP.dim[0]),&((S).dim[0]),3,(2+After),1)) ;
JLBAASP = A_VECARR(GLBAASP,HLBAASP) ;
A_R1ASSIGN2(JLBAASP,ILBAASP,A68_CHAR );
} 
else
{ 
KLBAASP = 1 ;
LLBAASP = 2 ;
MLBAASP = (&A_R1INDEX(S,KLBAASP)) ;
(*MLBAASP) = (*(&A_VINDEX(OKBAASP_buff,LLBAASP)));
 /* line 333: */
PLBAASP = A_VTRIM(OLBAASP,(OKBAASP_buff),A_VTSCRIPT(&(OLBAASP.upb),(OKBAASP_buff).upb,4,(2+VJBAASP_q))) ;
RLBAASP = A_R1TRIM(NLBAASP,(S),A_RTSCRIPT(&(NLBAASP.dim[0]),&((S).dim[0]),2,VJBAASP_q,1)) ;
SLBAASP = A_VECARR(PLBAASP,QLBAASP) ;
A_R1ASSIGN2(SLBAASP,RLBAASP,A68_CHAR );
 /* line 334: */
 /* line 335: */
VLBAASP = A_VTRIM(ULBAASP,(OKBAASP_buff),A_VTSCRIPT(&(ULBAASP.upb),(OKBAASP_buff).upb,(3+VJBAASP_q),((3+VJBAASP_q)+After))) ;
XLBAASP = A_R1TRIM(TLBAASP,(S),A_RTSCRIPT(&(TLBAASP.dim[0]),&((S).dim[0]),(2+VJBAASP_q),((2+VJBAASP_q)+After),1)) ;
YLBAASP = A_VECARR(VLBAASP,WLBAASP) ;
A_R1ASSIGN2(YLBAASP,XLBAASP,A68_CHAR );
} 
} 
 /* line 336: */
 /* line 337: */
ZLBAASP = (DKBAASP_r==0.0);
if ( ZLBAASP )
{ 
(*P) = VJBAASP_q;
 /* line 338: */
 /* line 339: */
HKBAASP = 0;
} 
else
{ 
AMBAASP = (OKBAASP_buff.upb-4) ;
if ( ((*(&A_VINDEX(OKBAASP_buff,AMBAASP)))=='-') )
{ 
BMBAASP = (-1);
} 
else
{ 
BMBAASP = 1;
} 
CMBAASP_s = BMBAASP;
 /* line 340: */
DMBAASP = (OKBAASP_buff.upb-3) ;
EMBAASP = (OKBAASP_buff.upb-2) ;
(*P) = ((ZBBAASP_chardig((*(&A_VINDEX(OKBAASP_buff,DMBAASP))))*10)+ZBBAASP_chardig((*(&A_VINDEX(OKBAASP_buff,EMBAASP)))));
 /* line 341: */
{ 
FMBAASP = (OKBAASP_buff.upb-1) ;
GMBAASP_c = (*(&A_VINDEX(OKBAASP_buff,FMBAASP)));
HMBAASP = (GMBAASP_c!=' ');
if ( HMBAASP )
{ 
IMBAASP = (((*P)*10)+ZBBAASP_chardig(GMBAASP_c));
} 
else
{ 
IMBAASP = (*P);
} 
} 
(*P) = ((IMBAASP*CMBAASP_s)+1);
 /* line 342: */
 /* line 343: */
 /* line 344: */
HKBAASP = A_SIGN(DKBAASP_r);
} 
} 
} 
} 
break;
case 1: /* LONG INT */
JMBAASP_x = (TJBAASP.data.mode1);
 /* line 345: */
 /* line 346: */
{ 
KMBAASP_before = (*P);
 /* line 347: */
A_CLOSURE( MMBAASP_generator, NMBAASP_generator, OMBAASP_generator );
(( OMBAASP_generator * ) ( MMBAASP_generator.nonlocals )) -> P = P;
(( OMBAASP_generator * ) ( MMBAASP_generator.nonlocals )) -> JMBAASP_x = JMBAASP_x;
A_CALLPROC(MMBAASP_generator,(A68_TRUE, &TMBAASP),(A68_TRUE, &TMBAASP,(MMBAASP_generator).nonlocals));
SMBAASP_ss = TMBAASP;
 /* line 348: */
UMBAASP_first = 1;
 /* line 349: */
WMBAASP_sign = DDBAASP_subwhole(A_UNITE(VMBAASP,mode1,1,JMBAASP_x), (&UMBAASP_first), SMBAASP_ss.dim[0].upb, SMBAASP_ss);
 /* line 351: */
ZMBAASP = A_R1TRIM(XMBAASP,(S),A_RTSCRIPT(&(XMBAASP.dim[0]),&((S).dim[0]),1,KMBAASP_before,1)) ;
ANBAASP = A_R1TRIM(YMBAASP,(SMBAASP_ss),A_RTSCRIPT(&(YMBAASP.dim[0]),&((SMBAASP_ss).dim[0]),UMBAASP_first,((UMBAASP_first+KMBAASP_before)-1),1)) ;
A_R1ASSIGN2(ANBAASP,ZMBAASP,A68_CHAR );
 /* line 352: */
BNBAASP = (KMBAASP_before+1) ;
CNBAASP = (&A_R1INDEX(S,BNBAASP)) ;
(*CNBAASP) = '.';
 /* line 357: */
 /* line 358: */
 /* line 360: */
DNBAASP = (((SMBAASP_ss.dim[0].upb-S.dim[0].upb)-UMBAASP_first)+2) ;
switch ( (A_SIGN(DNBAASP)+2) )
{ 
case 1: 
 /* line 361: */
{ 
GNBAASP = A_R1TRIM(ENBAASP,(S),A_RTSCRIPT(&(ENBAASP.dim[0]),&((S).dim[0]),(KMBAASP_before+2),((SMBAASP_ss.dim[0].upb-UMBAASP_first)+2),1)) ;
HNBAASP = A_R1TRIM(FNBAASP,(SMBAASP_ss),A_RTSCRIPT(&(FNBAASP.dim[0]),&((SMBAASP_ss).dim[0]),(UMBAASP_first+KMBAASP_before),(SMBAASP_ss).dim[0].upb,1)) ;
A_R1ASSIGN2(HNBAASP,GNBAASP,A68_CHAR );
 /* line 362: */
 /* line 363: */
JNBAASP = S.dim[0].upb;
for ( INBAASP_i = ((SMBAASP_ss.dim[0].upb-UMBAASP_first)+3);
INBAASP_i <= JNBAASP;
INBAASP_i += 1 )
{ 
 /* line 364: */
 /* line 365: */
KNBAASP = (&A_R1INDEX(S,INBAASP_i)) ;
(*KNBAASP) = '0';
}
 /* line 366: */
 /* line 368: */
} 
break;
case 2: 
 /* line 370: */
NNBAASP = A_R1TRIM(LNBAASP,(S),A_RTSCRIPT(&(LNBAASP.dim[0]),&((S).dim[0]),(KMBAASP_before+2),(S).dim[0].upb,1)) ;
ONBAASP = A_R1TRIM(MNBAASP,(SMBAASP_ss),A_RTSCRIPT(&(MNBAASP.dim[0]),&((SMBAASP_ss).dim[0]),(UMBAASP_first+KMBAASP_before),(SMBAASP_ss).dim[0].upb,1)) ;
A_R1ASSIGN2(ONBAASP,NNBAASP,A68_CHAR );
break;
case 3: 
 /* line 371: */
RNBAASP = A_R1TRIM(PNBAASP,(S),A_RTSCRIPT(&(PNBAASP.dim[0]),&((S).dim[0]),(KMBAASP_before+2),(S).dim[0].upb,1)) ;
SNBAASP = A_R1TRIM(QNBAASP,(SMBAASP_ss),A_RTSCRIPT(&(QNBAASP.dim[0]),&((SMBAASP_ss).dim[0]),(UMBAASP_first+KMBAASP_before),((S.dim[0].upb-UMBAASP_first)+2),1)) ;
A_R1ASSIGN2(SNBAASP,RNBAASP,A68_CHAR );
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 372: */
 /* line 373: */
 /* line 374: */
HKBAASP = WMBAASP_sign;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(subfloat);
return( HKBAASP );
} 
#undef NL

A68_VOID  WNBAASP_fixed(A68_31  V, A68_INT  Width, A68_INT  After, A68_RC  *ReturnedValue)
{ 
A68_INT  XNBAASP_abswidth;
A68_BOOL  YNBAASP_poswidth;
A68_BOOL  ZNBAASP_zerowidth;
A68_INT  AOBAASP_point;
A68_INT  BOBAASP_length;
A68_BOOL  COBAASP;  /* clause result */
A68_RC  DOBAASP;  /* clause result */
A68_VC  EOBAASP;  /* YIELD */
A68_RC  FOBAASP;  /* OPERATORS - vector -> row */
A68_INT  GOBAASP;  /* clause result */
A68_INT  HOBAASP_aft;
A68_INT  IOBAASP_upb;
A68_33  KOBAASP_generator;   /* proc value of non-global proc */
A68_RC  QOBAASP;  /* avoid structure result */
A68_RC  POBAASP_s;
A68_INT  ROBAASP_sign;
A68_BOOL  SOBAASP;  /* clause result */
A68_INT  TOBAASP;  /* YIELD */
A68_VC  UOBAASP;  /* YIELD */
A68_RC  VOBAASP;  /* OPERATORS - vector -> row */
A68_VC  YOBAASP;  /* YIELD */
A68_RC  ZOBAASP;  /* OPERATORS - vector -> row */
A68_VC  APBAASP;  /* clause result */
A68_VC  BPBAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CPBAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FPBAASP;  /* YIELD */
A68_RC  GPBAASP;  /* OPERATORS - vector -> row */
A68_VC  HPBAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IPBAASP;  /* YIELD */
A68_RC  JPBAASP;  /* OPERATORS - vector -> row */
A68_INT  KPBAASP_last;
A68_INT  LPBAASP_first;
A68_INT  MPBAASP_rp;
A68_BOOL  NPBAASP;  /* clause result */
A68_VC  OPBAASP;  /* YIELD */
A68_RC  PPBAASP;  /* OPERATORS - vector -> row */
A68_CHAR  QPBAASP;  /* clause result */
A68_INT  RPBAASP;  /* YIELD */
A68_CHAR * SPBAASP;  /* YIELD */
A68_INT  TPBAASP;  /* clause result */
A68_RC  UPBAASP;  /* OPERATORS - trim index */
A_PROC_ENTRY(fixed);
 /* line 378: */
{ 
XNBAASP_abswidth = A_ABS(Width);
 /* line 379: */
YNBAASP_poswidth = (Width>0);
ZNBAASP_zerowidth = (Width==0);
 /* line 380: */
AOBAASP_point = (JEBAASP_log10(V)-1);
BOBAASP_length = (XNBAASP_abswidth-(YNBAASP_poswidth));
 /* line 383: */
 /* line 384: */
 /* line 386: */
 /* line 387: */
COBAASP = ((After<0)|(!ZNBAASP_zerowidth&((After>=BOBAASP_length)|(AOBAASP_point>BOBAASP_length))));
if ( COBAASP )
{ 
 /* line 388: */
 /* line 389: */
EOBAASP = A_C_TIMES(OUAAASP_errorchar,LPAAASP_max(1, XNBAASP_abswidth)) ;
DOBAASP = A_VECARR(EOBAASP,FOBAASP);
} 
else
{ 
{ 
if ( ZNBAASP_zerowidth )
{ 
GOBAASP = After;
} 
else
{ 
GOBAASP = XNAAASP_min(After, (BOBAASP_length-AOBAASP_point));
} 
HOBAASP_aft = GOBAASP;
 /* line 392: */
IOBAASP_upb = ((AOBAASP_point+HOBAASP_aft)+3);
 /* line 393: */
A_CLOSURE( KOBAASP_generator, LOBAASP_generator, MOBAASP_generator );
(( MOBAASP_generator * ) ( KOBAASP_generator.nonlocals )) -> IOBAASP_upb = IOBAASP_upb;
(( MOBAASP_generator * ) ( KOBAASP_generator.nonlocals )) -> XNBAASP_abswidth = XNBAASP_abswidth;
A_CALLPROC(KOBAASP_generator,(A68_TRUE, &QOBAASP),(A68_TRUE, &QOBAASP,(KOBAASP_generator).nonlocals));
POBAASP_s = QOBAASP;
 /* line 394: */
ROBAASP_sign = UGBAASP_subfixed(V, HOBAASP_aft, (&AOBAASP_point), POBAASP_s);
 /* line 395: */
 /* line 396: */
 /* line 397: */
TOBAASP = POBAASP_s.dim[0].lwb ;
SOBAASP = ((*(&A_R1INDEX(POBAASP_s,TOBAASP)))==OUAAASP_errorchar);
if ( SOBAASP )
{ 
 /* line 398: */
if ( (XNBAASP_abswidth<3) )
{ 
 /* line 399: */
UOBAASP = A_C_TIMES(OUAAASP_errorchar,LPAAASP_max(1, XNBAASP_abswidth)) ;
DOBAASP = A_VECARR(UOBAASP,VOBAASP);
} 
else
{ 
 /* line 400: */
 /* line 401: */
 /* line 404: */
YOBAASP = A_VC_PLUS(A_C_TIMES(OUAAASP_errorchar,(XNBAASP_abswidth-3)),XOBAASP) ;
DOBAASP = A_VECARR(YOBAASP,ZOBAASP);
} 
} 
else
{ 
 /* line 405: */
 /* line 406: */
if ( (ROBAASP_sign==0) )
{ 
 /* line 407: */
if ( (After>0) )
{ 
if ( YNBAASP_poswidth )
{ 
APBAASP = A_HVEC(BPBAASP,'+',A68_CHAR );
} 
else
{ 
APBAASP = A_HVEC(CPBAASP,NUAAASP_blank,A68_CHAR );
} 
 /* line 408: */
FPBAASP = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_C_TIMES(NUAAASP_blank,((XNBAASP_abswidth-After)-3)),APBAASP),EPBAASP),A_C_TIMES('0',After)) ;
DOBAASP = A_VECARR(FPBAASP,GPBAASP);
} 
else
{ 
 /* line 409: */
 /* line 410: */
 /* line 411: */
IPBAASP = A_VC_PLUS(A_C_TIMES(NUAAASP_blank,(XNBAASP_abswidth-1)),A_HVEC(HPBAASP,'0',A68_CHAR )) ;
DOBAASP = A_VECARR(IPBAASP,JPBAASP);
} 
} 
else
{ 
{ 
KPBAASP_last = (AOBAASP_point+HOBAASP_aft);
LPBAASP_first = 1;
 /* line 412: */
 /* line 413: */
if ( ZNBAASP_zerowidth )
{ 
 /* line 414: */
 /* line 415: */
BOBAASP_length = KPBAASP_last;
} 
else
{ 
BOBAASP_length = (XNBAASP_abswidth-(((ROBAASP_sign<0)|YNBAASP_poswidth)));
 /* line 416: */
 /* line 417: */
KPBAASP_last = XNAAASP_min(KPBAASP_last, BOBAASP_length);
} 
 /* line 420: */
 /* line 421: */
 /* line 422: */
if ( ZFBAASP_searchforroundingpoint(POBAASP_s, (&MPBAASP_rp), KPBAASP_last) )
{ 
LPBAASP_first = 0;
 /* line 423: */
if ( (!ZNBAASP_zerowidth&(KPBAASP_last==BOBAASP_length)) )
{ 
 /* line 425: */
KPBAASP_last-=1;
} 
} 
 /* line 426: */
if ( (KPBAASP_last==AOBAASP_point) )
{ 
KPBAASP_last-=1;
} 
 /* line 428: */
if ( ((AOBAASP_point==1)&(KPBAASP_last<BOBAASP_length)) )
{ 
LPBAASP_first = 0;
} 
 /* line 430: */
 /* line 432: */
 /* line 433: */
NPBAASP = ((AOBAASP_point>(KPBAASP_last+1))|(KPBAASP_last<LPBAASP_first));
if ( NPBAASP )
{ 
 /* line 434: */
 /* line 435: */
OPBAASP = A_C_TIMES(OUAAASP_errorchar,XNBAASP_abswidth) ;
DOBAASP = A_VECARR(OPBAASP,PPBAASP);
} 
else
{ 
if ( (ROBAASP_sign<0) )
{ 
QPBAASP = '-';
} 
else
{ 
if ( YNBAASP_poswidth )
{ 
QPBAASP = '+';
} 
else
{ 
QPBAASP = ' ';
} 
} 
RPBAASP = (LPBAASP_first-1) ;
SPBAASP = (&A_R1INDEX(POBAASP_s,RPBAASP)) ;
(*SPBAASP) = QPBAASP;
 /* line 436: */
LGBAASP_spround(POBAASP_s, MPBAASP_rp, KPBAASP_last);
 /* line 437: */
if ( ZNBAASP_zerowidth )
{ 
TPBAASP = (LPBAASP_first-((ROBAASP_sign<0)));
} 
else
{ 
TPBAASP = ((KPBAASP_last-XNBAASP_abswidth)+1);
} 
 /* line 438: */
DOBAASP = A_R1TRIM(UPBAASP,(POBAASP_s),A_RTSCRIPT(&(UPBAASP.dim[0]),&((POBAASP_s).dim[0]),TPBAASP,KPBAASP_last,1));
} 
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(fixed);
*ReturnedValue = (DOBAASP);
return;
} 
#undef NL

A68_VOID  XPBAASP_whole(A68_31  V, A68_INT  Width, A68_RC  *ReturnedValue)
{ 
A68_31  YPBAASP;  /* united object - for case conformity */
A68_194  ZPBAASP_x;
A68_INT  AQBAASP_abswidth;
A68_INT  BQBAASP_upb;
A68_INT  CQBAASP_lwb;
A68_INT  DQBAASP_first;
A68_33  FQBAASP_generator;   /* proc value of non-global proc */
A68_RC  LQBAASP;  /* avoid structure result */
A68_RC  KQBAASP_s;
A68_INT  MQBAASP_sign;
A68_BOOL  NQBAASP;  /* clause result */
A68_CHAR  OQBAASP;  /* clause result */
A68_INT  PQBAASP;  /* YIELD */
A68_CHAR * QQBAASP;  /* YIELD */
A68_RC  RQBAASP;  /* clause result */
A68_RC  SQBAASP;  /* OPERATORS - trim index */
A68_VC  TQBAASP;  /* YIELD */
A68_RC  UQBAASP;  /* OPERATORS - vector -> row */
A68_RC  VQBAASP;  /* avoid structure result */
A_PROC_ENTRY(whole);
 /* line 442: */
 /* line 443: */
YPBAASP = V ;
switch ( YPBAASP.mode )
{ 
case 1: /* LONG INT */
case 2: /* INT */
case 3: /* SHORT INT */
case 4: /* SHORT SHORT INT */
A_UNCPY(ZPBAASP_x,YPBAASP);
 /* line 444: */
{ 
AQBAASP_abswidth = A_ABS(Width);
 /* line 445: */
BQBAASP_upb = LPAAASP_max(AQBAASP_abswidth, KCBAASP_intwidth(ZPBAASP_x));
 /* line 446: */
CQBAASP_lwb = ((BQBAASP_upb-AQBAASP_abswidth)+1);
 /* line 447: */
DQBAASP_first = CQBAASP_lwb;
 /* line 448: */
A_CLOSURE( FQBAASP_generator, GQBAASP_generator, HQBAASP_generator );
(( HQBAASP_generator * ) ( FQBAASP_generator.nonlocals )) -> BQBAASP_upb = BQBAASP_upb;
A_CALLPROC(FQBAASP_generator,(A68_TRUE, &LQBAASP),(A68_TRUE, &LQBAASP,(FQBAASP_generator).nonlocals));
KQBAASP_s = LQBAASP;
 /* line 449: */
{ 
MQBAASP_sign = DDBAASP_subwhole(ZPBAASP_x, (&DQBAASP_first), BQBAASP_upb, KQBAASP_s);
 /* line 450: */
NQBAASP = ((MQBAASP_sign<0)|(Width>0));
if ( NQBAASP )
{ 
if ( (MQBAASP_sign<0) )
{ 
OQBAASP = '-';
} 
else
{ 
 /* line 451: */
OQBAASP = '+';
} 
PQBAASP = DQBAASP_first-=1 ;
QQBAASP = (&A_R1INDEX(KQBAASP_s,PQBAASP)) ;
(*QQBAASP) = OQBAASP;
} 
} 
 /* line 455: */
if ( (Width==0) )
{ 
CQBAASP_lwb = DQBAASP_first;
} 
 /* line 456: */
 /* line 457: */
 /* line 458: */
if ( (DQBAASP_first>=CQBAASP_lwb) )
{ 
 /* line 459: */
 /* line 460: */
RQBAASP = A_R1TRIM(SQBAASP,(KQBAASP_s),A_RTSCRIPT(&(SQBAASP.dim[0]),&((KQBAASP_s).dim[0]),CQBAASP_lwb,(KQBAASP_s).dim[0].upb,1));
} 
else
{ 
 /* line 461: */
 /* line 462: */
TQBAASP = A_C_TIMES(OUAAASP_errorchar,AQBAASP_abswidth) ;
RQBAASP = A_VECARR(TQBAASP,UQBAASP);
} 
} 
break;
default: 
 /* line 463: */
WNBAASP_fixed( V, Width, 0, &VQBAASP );
RQBAASP = VQBAASP;
break;
} 
A_PROC_EXIT(whole);
*ReturnedValue = (RQBAASP);
return;
} 
#undef NL

A68_VOID  ARBAASP_float(A68_31  V, A68_INT  Width, A68_INT  After, A68_INT  Exp, A68_RC  *ReturnedValue)
{ 
A68_INT  BRBAASP_locafter;
A68_INT  CRBAASP_locexp;
A68_INT  DRBAASP;  /* clause result */
A68_INT  ERBAASP_abswidth;
A68_INT  FRBAASP_signafter;
A68_INT  GRBAASP_expplaces;
A68_INT  HRBAASP_last;
A68_INT  IRBAASP_before;
A68_BOOL  JRBAASP;  /* clause result */
A68_RC  KRBAASP;  /* clause result */
A68_VC  LRBAASP;  /* YIELD */
A68_RC  MRBAASP;  /* OPERATORS - vector -> row */
A68_BOOL  NRBAASP_expsign;
A68_INT  ORBAASP_first;
A68_INT  PRBAASP_exponent;
A68_INT  QRBAASP_rp;
A68_33  SRBAASP_generator;   /* proc value of non-global proc */
A68_RC  YRBAASP;  /* avoid structure result */
A68_RC  XRBAASP_s;
A68_INT  ZRBAASP_sign;
A68_BOOL  ASBAASP;  /* clause result */
A68_INT  BSBAASP;  /* YIELD */
A68_VC  CSBAASP;  /* YIELD */
A68_RC  DSBAASP;  /* OPERATORS - vector -> row */
A68_CHAR * ESBAASP;  /* YIELD */
A68_CHAR  FSBAASP;  /* clause result */
A68_INT  GSBAASP;  /* YIELD */
A68_CHAR * HSBAASP;  /* YIELD */
A68_BOOL  ISBAASP;  /* clause result */
A68_INT  JSBAASP;  /* ADICOPS - SIGN */
A68_INT  KSBAASP;  /* YIELD */
A68_CHAR * LSBAASP_sb1;
A68_CHAR * MSBAASP;  /* YIELD */
A68_BOOL  NSBAASP;  /* clause result */
A68_VC  OSBAASP;  /* YIELD */
A68_RC  PSBAASP;  /* OPERATORS - vector -> row */
A68_INT  QSBAASP;  /* clause result */
A68_INT  RSBAASP_p;
A68_INT  SSBAASP;  /* YIELD */
A68_CHAR * TSBAASP;  /* YIELD */
A68_CHAR  USBAASP;  /* clause result */
A68_INT  VSBAASP;  /* YIELD */
A68_CHAR * WSBAASP;  /* YIELD */
A68_INT  XSBAASP;  /* YIELD */
A68_CHAR * YSBAASP;  /* YIELD */
A68_INT  ZSBAASP_l;
A68_194  ATBAASP;  /* OPERATORS - mode -> union mode */
A68_CHAR  BTBAASP;  /* clause result */
A68_INT  CTBAASP;  /* YIELD */
A68_CHAR * DTBAASP;  /* YIELD */
A68_RC  ETBAASP;  /* OPERATORS - trim index */
A_PROC_ENTRY(float);
 /* line 467: */
{ 
 /* line 469: */
 /* line 470: */
 /* line 471: */
if ( (Exp==0) )
{ 
if ( (After>0) )
{ 
DRBAASP = (After-1);
} 
else
{ 
DRBAASP = After;
} 
BRBAASP_locafter = DRBAASP;
 /* line 472: */
CRBAASP_locexp = (-1);
} 
else
{ 
BRBAASP_locafter = After;
 /* line 473: */
CRBAASP_locexp = Exp;
} 
 /* line 475: */
 /* line 476: */
ERBAASP_abswidth = A_ABS(Width);
 /* line 477: */
FRBAASP_signafter = A_SIGN(BRBAASP_locafter);
 /* line 478: */
GRBAASP_expplaces = A_ABS(CRBAASP_locexp);
 /* line 479: */
HRBAASP_last = ((ERBAASP_abswidth-GRBAASP_expplaces)-2);
 /* line 483: */
IRBAASP_before = ((HRBAASP_last-BRBAASP_locafter)-FRBAASP_signafter);
 /* line 485: */
 /* line 487: */
 /* line 488: */
JRBAASP = ((A_SIGN(IRBAASP_before)+FRBAASP_signafter)<=0);
if ( JRBAASP )
{ 
 /* line 489: */
 /* line 490: */
LRBAASP = A_C_TIMES(OUAAASP_errorchar,LPAAASP_max(1, ERBAASP_abswidth)) ;
KRBAASP = A_VECARR(LRBAASP,MRBAASP);
} 
else
{ 
{ 
NRBAASP_expsign = (CRBAASP_locexp>0);
 /* line 491: */
 /* line 492: */
ORBAASP_first = 1;
 /* line 493: */
PRBAASP_exponent = IRBAASP_before;
 /* line 494: */
QRBAASP_rp = (HRBAASP_last+1);
 /* line 495: */
A_CLOSURE( SRBAASP_generator, TRBAASP_generator, URBAASP_generator );
(( URBAASP_generator * ) ( SRBAASP_generator.nonlocals )) -> ERBAASP_abswidth = ERBAASP_abswidth;
(( URBAASP_generator * ) ( SRBAASP_generator.nonlocals )) -> FRBAASP_signafter = FRBAASP_signafter;
A_CALLPROC(SRBAASP_generator,(A68_TRUE, &YRBAASP),(A68_TRUE, &YRBAASP,(SRBAASP_generator).nonlocals));
XRBAASP_s = YRBAASP;
 /* line 496: */
ZRBAASP_sign = NJBAASP_subfloat(V, BRBAASP_locafter, (&PRBAASP_exponent), XRBAASP_s);
 /* line 497: */
 /* line 498: */
 /* line 499: */
BSBAASP = XRBAASP_s.dim[0].lwb ;
ASBAASP = ((*(&A_R1INDEX(XRBAASP_s,BSBAASP)))==OUAAASP_errorchar);
if ( ASBAASP )
{ 
 /* line 500: */
 /* line 504: */
CSBAASP = A_C_TIMES(OUAAASP_errorchar,LPAAASP_max(1, ERBAASP_abswidth)) ;
KRBAASP = A_VECARR(CSBAASP,DSBAASP);
} 
else
{ 
PRBAASP_exponent-=IRBAASP_before;
 /* line 506: */
for ( ;; )
{ 
 /* line 507: */
 /* line 508: */
 /* line 509: */
if ( (QRBAASP_rp>HRBAASP_last) )
{ 
 /* line 510: */
 /* line 517: */
if ( ZFBAASP_searchforroundingpoint(XRBAASP_s, (&QRBAASP_rp), HRBAASP_last) )
{ 
ORBAASP_first = 0;
 /* line 518: */
ESBAASP = (&A_R1INDEX(XRBAASP_s,IRBAASP_before)) ;
(*ESBAASP) = '.';
 /* line 519: */
 /* line 520: */
 /* line 525: */
if ( (IRBAASP_before==0) )
{ 
QRBAASP_rp = 1;
 /* line 526: */
 /* line 531: */
FSBAASP = '0';
} 
else
{ 
FSBAASP = '9';
} 
GSBAASP = (IRBAASP_before+1) ;
HSBAASP = (&A_R1INDEX(XRBAASP_s,GSBAASP)) ;
(*HSBAASP) = FSBAASP;
 /* line 532: */
IRBAASP_before-=1;
HRBAASP_last-=1;
 /* line 533: */
 /* line 534: */
PRBAASP_exponent+=1;
} 
} 
 /* line 535: */
 /* line 538: */
 /* line 539: */
ISBAASP = ((RFBAASP_explength(NRBAASP_expsign, PRBAASP_exponent)>GRBAASP_expplaces)&(HRBAASP_last>=ORBAASP_first));
if ( !ISBAASP ) break;
HRBAASP_last-=1;
GRBAASP_expplaces+=1;
 /* line 540: */
 /* line 541: */
 /* line 544: */
JSBAASP = ((HRBAASP_last-IRBAASP_before)-1) ;
switch ( (A_SIGN(JSBAASP)+2) )
{ 
case 1: 
{ 
IRBAASP_before-=1;
if ( (ZRBAASP_sign!=0) )
{ 
 /* line 546: */
PRBAASP_exponent+=1;
} 
} 
break;
case 2: 
{ 
IRBAASP_before+=1;
if ( (ZRBAASP_sign!=0) )
{ 
PRBAASP_exponent-=1;
} 
 /* line 547: */
KSBAASP = (IRBAASP_before+1) ;
LSBAASP_sb1 = (&A_R1INDEX(XRBAASP_s,KSBAASP));
MSBAASP = (&A_R1INDEX(XRBAASP_s,IRBAASP_before)) ;
(*MSBAASP) = (*LSBAASP_sb1);
 /* line 550: */
 /* line 552: */
(*LSBAASP_sb1) = '.';
} 
break;
default: 
 /* line 553: */
/*SKIP*/;
break;
} 
}
 /* line 554: */
 /* line 555: */
 /* line 556: */
NSBAASP = (HRBAASP_last<ORBAASP_first);
if ( NSBAASP )
{ 
 /* line 557: */
 /* line 558: */
OSBAASP = A_C_TIMES(OUAAASP_errorchar,ERBAASP_abswidth) ;
KRBAASP = A_VECARR(OSBAASP,PSBAASP);
} 
else
{ 
LGBAASP_spround(XRBAASP_s, QRBAASP_rp, HRBAASP_last);
 /* line 559: */
if ( (ZRBAASP_sign==0) )
{ 
QSBAASP = 0;
} 
else
{ 
QSBAASP = ORBAASP_first;
} 
RSBAASP_p = QSBAASP;
 /* line 560: */
for ( ;; )
{ 
 /* line 561: */
 /* line 562: */
SSBAASP = (RSBAASP_p+1) ;
if ( !(((((*(&A_R1INDEX(XRBAASP_s,RSBAASP_p)))=='0')&((*(&A_R1INDEX(XRBAASP_s,SSBAASP)))!='.'))&(RSBAASP_p<HRBAASP_last))) ) break;
TSBAASP = (&A_R1INDEX(XRBAASP_s,RSBAASP_p)) ;
(*TSBAASP) = ' ';
 /* line 563: */
RSBAASP_p+=1;
}
 /* line 565: */
if ( (ZRBAASP_sign==(-1)) )
{ 
USBAASP = '-';
} 
else
{ 
if ( (Width>0) )
{ 
USBAASP = '+';
} 
else
{ 
USBAASP = ' ';
} 
} 
VSBAASP = (RSBAASP_p-1) ;
WSBAASP = (&A_R1INDEX(XRBAASP_s,VSBAASP)) ;
(*WSBAASP) = USBAASP;
 /* line 566: */
XSBAASP = HRBAASP_last+=1 ;
YSBAASP = (&A_R1INDEX(XRBAASP_s,XSBAASP)) ;
(*YSBAASP) = 'e';
 /* line 567: */
ZSBAASP_l = (HRBAASP_last+GRBAASP_expplaces);
 /* line 569: */
HRBAASP_last+=1 ;
ZRBAASP_sign = DDBAASP_subwhole(A_UNITE(ATBAASP,mode2,2,PRBAASP_exponent), (&HRBAASP_last), ZSBAASP_l, XRBAASP_s);
 /* line 570: */
if ( ((ZRBAASP_sign<0)|NRBAASP_expsign) )
{ 
if ( (ZRBAASP_sign<0) )
{ 
BTBAASP = '-';
} 
else
{ 
BTBAASP = '+';
} 
CTBAASP = (HRBAASP_last-1) ;
DTBAASP = (&A_R1INDEX(XRBAASP_s,CTBAASP)) ;
(*DTBAASP) = BTBAASP;
} 
 /* line 572: */
 /* line 573: */
KRBAASP = A_R1TRIM(ETBAASP,(XRBAASP_s),A_RTSCRIPT(&(ETBAASP.dim[0]),&((XRBAASP_s).dim[0]),(ORBAASP_first-1),ZSBAASP_l,1));
} 
} 
} 
} 
} 
A_PROC_EXIT(float);
*ReturnedValue = (KRBAASP);
return;
} 
#undef NL

A68_VOID  GTBAASP_hex(A68_LBITS  V, A68_RC  *ReturnedValue)
{ 
A68_213  HTBAASP_s;
A68_LBITS  ITBAASP_t;
A68_INT  JTBAASP_i;
A68_VC  KTBAASP;  /* OPERATORS - istruct -> vector */
A68_INT  LTBAASP;  /* to part of loop */
A68_VC  MTBAASP;  /* OPERATORS - istruct -> vector */
A68_VC  NTBAASP;  /* OPERATORS - simple index */
A68_VC  OTBAASP;  /* OPERATORS - istruct -> vector */
A68_INT  PTBAASP;  /* YIELD */
A68_CHAR * QTBAASP;  /* YIELD */
A68_INT  RTBAASP;  /* SHR */
A68_RC  STBAASP;  /* clause result */
A68_RC  TTBAASP;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(hex);
 /* line 576: */
 /* line 577: */
{ 
 /* line 578: */
ITBAASP_t = V;
 /* line 579: */
 /* line 580: */
LTBAASP = A_HISVEC(KTBAASP,HTBAASP_s,16,A68_CHAR ).upb;
for ( JTBAASP_i = 1;
JTBAASP_i <= LTBAASP;
JTBAASP_i += 1 )
{ 
 /* line 581: */
NTBAASP = A_ISVEC(MTBAASP,(&HTBAASP_s),16,A68_CHAR ) ;
PTBAASP = ((A_HISVEC(OTBAASP,HTBAASP_s,16,A68_CHAR ).upb-JTBAASP_i)+1) ;
QTBAASP = (&A_VINDEX(NTBAASP,PTBAASP)) ;
(*QTBAASP) = WBBAASP_digchar((A68_INT )(A68_BITS )(A68_LBITS )(ITBAASP_t&0XfU));
 /* line 582: */
 /* line 583: */
RTBAASP = 4 ;
ITBAASP_t = A_SHR(ITBAASP_t,RTBAASP);
}
 /* line 584: */
 /* line 585: */
STBAASP = A_HIS1ARR(TTBAASP,HTBAASP_s,A68_CHAR ,16);
} 
A_PROC_EXIT(hex);
*ReturnedValue = (STBAASP);
return;
} 
#undef NL

A68_VOID  VTBAASP_hex(A68_BITS  V, A68_RC  *ReturnedValue)
{ 
A68_133  WTBAASP_s;
A68_BITS  XTBAASP_t;
A68_INT  YTBAASP_i;
A68_VC  ZTBAASP;  /* OPERATORS - istruct -> vector */
A68_INT  AUBAASP;  /* to part of loop */
A68_VC  BUBAASP;  /* OPERATORS - istruct -> vector */
A68_VC  CUBAASP;  /* OPERATORS - simple index */
A68_VC  DUBAASP;  /* OPERATORS - istruct -> vector */
A68_INT  EUBAASP;  /* YIELD */
A68_CHAR * FUBAASP;  /* YIELD */
A68_INT  GUBAASP;  /* SHR */
A68_RC  HUBAASP;  /* clause result */
A68_RC  IUBAASP;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(hex);
 /* line 588: */
 /* line 589: */
{ 
 /* line 590: */
XTBAASP_t = V;
 /* line 591: */
 /* line 592: */
AUBAASP = A_HISVEC(ZTBAASP,WTBAASP_s,8,A68_CHAR ).upb;
for ( YTBAASP_i = 1;
YTBAASP_i <= AUBAASP;
YTBAASP_i += 1 )
{ 
 /* line 593: */
CUBAASP = A_ISVEC(BUBAASP,(&WTBAASP_s),8,A68_CHAR ) ;
EUBAASP = ((A_HISVEC(DUBAASP,WTBAASP_s,8,A68_CHAR ).upb-YTBAASP_i)+1) ;
FUBAASP = (&A_VINDEX(CUBAASP,EUBAASP)) ;
(*FUBAASP) = WBBAASP_digchar((A68_INT )(A68_BITS )(XTBAASP_t&0XfU));
 /* line 594: */
 /* line 595: */
GUBAASP = 4 ;
XTBAASP_t = A_SHR(XTBAASP_t,GUBAASP);
}
 /* line 596: */
 /* line 597: */
HUBAASP = A_HIS1ARR(IUBAASP,WTBAASP_s,A68_CHAR ,8);
} 
A_PROC_EXIT(hex);
*ReturnedValue = (HUBAASP);
return;
} 
#undef NL

A68_VOID  KUBAASP_hex(A68_SBITS  V, A68_RC  *ReturnedValue)
{ 
A68_135  LUBAASP_s;
A68_SBITS  MUBAASP_t;
A68_INT  NUBAASP_i;
A68_VC  OUBAASP;  /* OPERATORS - istruct -> vector */
A68_INT  PUBAASP;  /* to part of loop */
A68_VC  QUBAASP;  /* OPERATORS - istruct -> vector */
A68_VC  RUBAASP;  /* OPERATORS - simple index */
A68_VC  SUBAASP;  /* OPERATORS - istruct -> vector */
A68_INT  TUBAASP;  /* YIELD */
A68_CHAR * UUBAASP;  /* YIELD */
A68_INT  VUBAASP;  /* SHR */
A68_RC  WUBAASP;  /* clause result */
A68_RC  XUBAASP;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(hex);
 /* line 600: */
 /* line 601: */
{ 
 /* line 602: */
MUBAASP_t = V;
 /* line 603: */
 /* line 604: */
PUBAASP = A_HISVEC(OUBAASP,LUBAASP_s,4,A68_CHAR ).upb;
for ( NUBAASP_i = 1;
NUBAASP_i <= PUBAASP;
NUBAASP_i += 1 )
{ 
 /* line 605: */
RUBAASP = A_ISVEC(QUBAASP,(&LUBAASP_s),4,A68_CHAR ) ;
TUBAASP = ((A_HISVEC(SUBAASP,LUBAASP_s,4,A68_CHAR ).upb-NUBAASP_i)+1) ;
UUBAASP = (&A_VINDEX(RUBAASP,TUBAASP)) ;
(*UUBAASP) = WBBAASP_digchar((A68_INT )(A68_SINT )(A68_SBITS )(MUBAASP_t&0XfU));
 /* line 606: */
 /* line 607: */
VUBAASP = 4 ;
MUBAASP_t = A_SHR(MUBAASP_t,VUBAASP);
}
 /* line 608: */
 /* line 609: */
WUBAASP = A_HIS1ARR(XUBAASP,LUBAASP_s,A68_CHAR ,4);
} 
A_PROC_EXIT(hex);
*ReturnedValue = (WUBAASP);
return;
} 
#undef NL

A68_VOID  ZUBAASP_hex(A68_SSBITS  V, A68_RC  *ReturnedValue)
{ 
A68_141  AVBAASP_s;
A68_SSBITS  BVBAASP_t;
A68_INT  CVBAASP_i;
A68_VC  DVBAASP;  /* OPERATORS - istruct -> vector */
A68_INT  EVBAASP;  /* to part of loop */
A68_VC  FVBAASP;  /* OPERATORS - istruct -> vector */
A68_VC  GVBAASP;  /* OPERATORS - simple index */
A68_VC  HVBAASP;  /* OPERATORS - istruct -> vector */
A68_INT  IVBAASP;  /* YIELD */
A68_CHAR * JVBAASP;  /* YIELD */
A68_INT  KVBAASP;  /* SHR */
A68_RC  LVBAASP;  /* clause result */
A68_RC  MVBAASP;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(hex);
 /* line 612: */
 /* line 613: */
{ 
 /* line 614: */
BVBAASP_t = V;
 /* line 615: */
 /* line 616: */
EVBAASP = A_HISVEC(DVBAASP,AVBAASP_s,2,A68_CHAR ).upb;
for ( CVBAASP_i = 1;
CVBAASP_i <= EVBAASP;
CVBAASP_i += 1 )
{ 
 /* line 617: */
GVBAASP = A_ISVEC(FVBAASP,(&AVBAASP_s),2,A68_CHAR ) ;
IVBAASP = ((A_HISVEC(HVBAASP,AVBAASP_s,2,A68_CHAR ).upb-CVBAASP_i)+1) ;
JVBAASP = (&A_VINDEX(GVBAASP,IVBAASP)) ;
(*JVBAASP) = WBBAASP_digchar((A68_INT )(A68_SINT )(A68_SSINT )(A68_SSBITS )(BVBAASP_t&0XfU));
 /* line 618: */
 /* line 619: */
KVBAASP = 4 ;
BVBAASP_t = A_SHR(BVBAASP_t,KVBAASP);
}
 /* line 620: */
 /* line 621: */
LVBAASP = A_HIS1ARR(MVBAASP,AVBAASP_s,A68_CHAR ,2);
} 
A_PROC_EXIT(hex);
*ReturnedValue = (LVBAASP);
return;
} 
#undef NL
 /* line 2: */
 /* line 28: */
void WZAAASP(void)   /* initialise DECS spconvert */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-s","-uname","seedfile","-staredit","1234ABCD","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir",".","spconvert.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"./spops.m","./spplain.m","./spaliens.m","./spmodes.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_LINT  AABAASP;  /* ADICOPS - MOD */
A68_LINT  BABAASP;  /* ADICOPS - MOD */
A68_INT  EABAASP;  /* ADICOPS - MOD */
A68_INT  FABAASP;  /* ADICOPS - MOD */
A68_SINT  IABAASP;  /* ADICOPS - MOD */
A68_SINT  JABAASP;  /* ADICOPS - MOD */
A68_SSINT  MABAASP;  /* ADICOPS - MOD */
A68_SSINT  NABAASP;  /* ADICOPS - MOD */
if( A_invoked ) return;
A_invoked = A68_TRUE;
CGAAASP();   /* USE spops */
DTAAASP();   /* USE spplain */
YAAAASP();   /* USE spaliens */
BAAAASP();   /* USE spmodes */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/qad/spconvert.a68";
A_config.translation_time = "Sun Apr 18 20:08:21 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "VZAAASP (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:08:21 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS spconvert);
 /* line 29: */
ZZAAASP_longamax = (PTAAASP_longmaxint/10);
 /* line 30: */
BABAASP = 10 ;
CABAASP_longdmax = A_MOD(PTAAASP_longmaxint,BABAASP,AABAASP);
 /* line 32: */
 /* line 33: */
DABAASP_amax = (DBAAASP_maxint/10);
 /* line 34: */
FABAASP = 10 ;
GABAASP_dmax = A_MOD(DBAAASP_maxint,FABAASP,EABAASP);
 /* line 36: */
 /* line 37: */
HABAASP_shortamax = (EBAAASP_shortmaxint/10);
 /* line 38: */
JABAASP = 10 ;
KABAASP_shortdmax = A_MOD(EBAAASP_shortmaxint,JABAASP,IABAASP);
 /* line 40: */
 /* line 41: */
LABAASP_shortshortamax = (FBAAASP_shortshortmaxint/10);
 /* line 42: */
NABAASP = 10 ;
OABAASP_shortshortdmax = A_MOD(FBAAASP_shortshortmaxint,NABAASP,MABAASP);
 /* line 44: */
 /* line 45: */
 /* line 51: */
 /* line 57: */
 /* line 63: */
 /* line 71: */
 /* line 72: */
 /* line 92: */
 /* line 96: */
 /* line 100: */
 /* line 107: */
 /* line 114: */
 /* line 117: */
 /* line 120: */
 /* line 124: */
 /* line 125: */
 /* line 164: */
 /* line 190: */
 /* line 191: */
 /* line 195: */
 /* line 210: */
 /* line 221: */
 /* line 280: */
 /* line 377: */
 /* line 441: */
 /* line 466: */
 /* line 575: */
 /* line 587: */
 /* line 599: */
 /* line 611: */
 /* line 623: */
 /* line 625: */
 /* line 638: */
/*SKIP*/;
A_PROC_EXIT(DECS spconvert);
} 
#undef NL
/* end of translation of spconvert.a68 */
