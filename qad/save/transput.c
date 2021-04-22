/* UNAME:MVBAASP */
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
struct A68t190 ;

A_PROCEDURE(A68_BOOL ,A68t189,(A68_RC ,A68_INT ,A68_BOOL ,struct A68t190 ),(A68_RC ,A68_INT ,A68_BOOL ,struct A68t190 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE27,INT,BOOL,MODE190) BOOL */
struct A68t190 { A68_INT mode; union {
A68_REAL * mode1;
A68_SREAL * mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t190  A68_190 ;    /* UNION(REF REAL,REF SHORT REAL)  */

A_PROCEDURE(A68_INT ,A68t191,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(CHAR) INT */

A_PROCEDURE(A68_BOOL ,A68t192,(A68_CHAR ,A68_INT *,A68_RC ),(A68_CHAR ,A68_INT *,A68_RC ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(CHAR,REF INT,MODE27) BOOL */
struct A68t193 { A68_INT mode; union {
A68_LINT  mode1;
A68_INT  mode2;
A68_SINT  mode3;
A68_SSINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t193  A68_193 ;    /* UNION(LONG INT,INT,SHORT INT,SHORT SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t194,(struct A68t193 ),(struct A68t193 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE193) INT */
struct A68t195 { A68_INT mode; union {
A68_REAL  mode1;
A68_SREAL  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t195  A68_195 ;    /* UNION(REAL,SHORT REAL)  */

A_PROCEDURE(A68_INT ,A68t196,(struct A68t195 ),(struct A68t195 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE195) INT */

A_PROCEDURE(A68_INT ,A68t197,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE190) INT */

A_PROCEDURE(A68_INT ,A68t198,(A68_BOOL ,A68_INT ),(A68_BOOL ,A68_INT ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(BOOL,INT) INT */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t31 ,A68_INT ,A68_RC *),(struct A68t31 ,A68_INT ,A68_RC *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE31,INT) MODE27 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t31 ,A68_INT ,A68_INT ,A68_RC *),(struct A68t31 ,A68_INT ,A68_INT ,A68_RC *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE31,INT,INT) MODE27 */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t31 ,A68_INT ,A68_INT ,A68_INT ,A68_RC *),(struct A68t31 ,A68_INT ,A68_INT ,A68_INT ,A68_RC *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE31,INT,INT,INT) MODE27 */

A_PROCEDURE(A68_VOID ,A68t202,(A68_LBITS ,A68_RC *),(A68_LBITS ,A68_RC *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(LONG BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t203,(A68_BITS ,A68_RC *),(A68_BITS ,A68_RC *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t204,(A68_SBITS ,A68_RC *),(A68_SBITS ,A68_RC *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(SHORT BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t205,(A68_SSBITS ,A68_RC *),(A68_SSBITS ,A68_RC *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(SHORT SHORT BITS) MODE27 */
A_VECTOR(struct A68t37 ,A68t206);
typedef struct A68t206  A68_206 ;    /* VECTOR [] MODE37 */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t206 ),(struct A68t206 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE206) VOID */
A_ISTRUCT(A68_CHAR ,22,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_INT ,A68t211,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE85) INT */

A_PROCEDURE(A68_INT ,A68t212,(struct A68t129 ,A68_RC ),(struct A68t129 ,A68_RC ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE129,MODE27) INT */

A_PROCEDURE(A68_VOID ,A68t213,(A68_INT ,struct A68t101 ),(A68_INT ,struct A68t101 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(INT,MODE101) VOID */

A_PROCEDURE(A68_LBITS ,A68t214,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE64) LONG BITS */

A_PROCEDURE(A68_BITS ,A68t215,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE64) BITS */

A_PROCEDURE(A68_SBITS ,A68t216,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE64) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t217,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE64) SHORT SHORT BITS */
A_VECTOR(A68_VC ,A68t218);
typedef struct A68t218  A68_218 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t218 ,A68_VC *),(struct A68t218 ,A68_VC *,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE218) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t220,(A68_VC *),(A68_VC *,void *));
typedef struct A68t220  A68_220 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t221,(A68_BOOL ,struct A68t218 *),(A68_BOOL ,struct A68t218 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(BOOL) MODE218 */
A_VECTOR(struct A68t35 *,A68t222);
typedef struct A68t222  A68_222 ;    /* VECTOR [] REF MODE35 */

A_PROCEDURE(A68_VOID ,A68t223,(A68_INT ,struct A68t44 *),(A68_INT ,struct A68t44 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(INT) MODE44 */
A_ISTRUCT(A68_CHAR ,14,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_VC ,5,A68t226);
typedef struct A68t226  A68_226 ;    /* STRUCT 5 REF MODE26 */
A_ROW(A68_RC ,A68t228,1);
typedef struct A68t228  A68_228 ;    /* [] MODE27 */
#define A68_227  A68_228 
#define A68t227 A68t228            /* [] MODE32 */
A_ISTRUCT(A68_CHAR ,28,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t230);
typedef struct A68t230  A68_230 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t231);
typedef struct A68t231  A68_231 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_RC ,12,A68t237);
typedef struct A68t237  A68_237 ;    /* STRUCT 12 MODE27 */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t56 *,A68_INT ),(struct A68t56 *,A68_INT ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF MODE56,INT) VOID */
A_ISTRUCT(A68_CHAR ,16,A68t239);
typedef struct A68t239  A68_239 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t56 *,A68_VC *),(struct A68t56 *,A68_VC *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE56) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t56 *,A68_RC ),(struct A68t56 *,A68_RC ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE56,MODE27) VOID */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t56 *,struct A68t59 ),(struct A68t56 *,struct A68t59 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE56,MODE59) VOID */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t56 *,struct A68t55 ),(struct A68t56 *,struct A68t55 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE56,MODE55) VOID */

A_PROCEDURE(A68_INT ,A68t244,(struct A68t56 *,A68_RC ,struct A68t60 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t56 *,A68_RC ,struct A68t60 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE56,MODE27,MODE60,INT,INT,INT) INT */
A_ISTRUCT(A68_CHAR ,1,A68t245);
typedef struct A68t245  A68_245 ;    /* STRUCT 0 CHAR */
struct A68t246 { A68_INT mode; union {
A68_CHAR  mode1;
A68_RC  mode2;
A68_VC  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t246  A68_246 ;    /* UNION(CHAR,MODE27,REF MODE26)  */

A_PROCEDURE(A68_INT ,A68t247,(struct A68t56 *,struct A68t246 ,struct A68t60 ),(struct A68t56 *,struct A68t246 ,struct A68t60 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE56,MODE246,MODE60) INT */

A_PROCEDURE(A68_INT ,A68t248,(struct A68t56 *,struct A68t60 ),(struct A68t56 *,struct A68t60 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE56,MODE60) INT */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t56 *,A68_INT ,A68_INT ,A68_INT ),(struct A68t56 *,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE56,INT,INT,INT) VOID */

A_PROCEDURE(A68_BITS ,A68t250,(struct A68t45 ),(struct A68t45 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE45) BITS */
A_ISTRUCT(A68_CHAR ,9,A68t251);
typedef struct A68t251  A68_251 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 11 CHAR */
A_VECTOR(A68_SSBITS ,A68t253);
typedef struct A68t253  A68_253 ;    /* VECTOR [] SHORT SHORT BITS */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t36 *,A68_INT ,struct A68t227 *),(struct A68t36 *,A68_INT ,struct A68t227 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE36,INT) REF MODE227 */

A_PROCEDURE(A68_VOID ,A68t255,(A68_BOOL ,struct A68t228 *),(A68_BOOL ,struct A68t228 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(BOOL) MODE228 */
#define A68_256  A68_228 
#define A68t256 A68t228            /* FLEX [] MODE32 */

A_PROCEDURE(A68_INT ,A68t257,(A68_VC ,A68_BITS *),(A68_VC ,A68_BITS *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF MODE26,REF BITS) INT */

A_PROCEDURE(struct A68t56 *,A68t258,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REF MODE56) REF MODE56 */

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t56 *,A68_CHAR ),(struct A68t56 *,A68_CHAR ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(REF MODE56,CHAR) VOID */

A_PROCEDURE(A68_CHAR ,A68t260,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE56) CHAR */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t56 *,A68_VC ),(struct A68t56 *,A68_VC ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(REF MODE56,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t56 *,A68_RC ),(struct A68t56 *,A68_RC ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(REF MODE56,REF MODE27) VOID */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t56 *,A68_CHAR *),(struct A68t56 *,A68_CHAR *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(REF MODE56,REF CHAR) VOID */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t56 *,A68_LBITS *),(struct A68t56 *,A68_LBITS *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE56,REF LONG BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t56 *,A68_BITS *),(struct A68t56 *,A68_BITS *,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE56,REF BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t56 *,A68_SBITS *),(struct A68t56 *,A68_SBITS *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE56,REF SHORT BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t56 *,A68_SSBITS *),(struct A68t56 *,A68_SSBITS *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE56,REF SHORT SHORT BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t56 *,struct A68t65 ),(struct A68t56 *,struct A68t65 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE56,REF MODE65) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t56 *,struct A68t66 ),(struct A68t56 *,struct A68t66 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF MODE56,REF MODE66) VOID */

A_PROCEDURE(A68_VOID ,A68t270,(struct A68t56 *,struct A68t67 ),(struct A68t56 *,struct A68t67 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(REF MODE56,REF MODE67) VOID */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t56 *,struct A68t68 ),(struct A68t56 *,struct A68t68 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(REF MODE56,REF MODE68) VOID */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t56 *,A68_LINT *),(struct A68t56 *,A68_LINT *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF MODE56,REF LONG INT) VOID */

A_PROCEDURE(A68_VOID ,A68t273,(struct A68t56 *,A68_INT *),(struct A68t56 *,A68_INT *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(REF MODE56,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t274,(struct A68t56 *,A68_SINT *),(struct A68t56 *,A68_SINT *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(REF MODE56,REF SHORT INT) VOID */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t56 *,A68_SSINT *),(struct A68t56 *,A68_SSINT *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(REF MODE56,REF SHORT SHORT INT) VOID */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t56 *,struct A68t69 ),(struct A68t56 *,struct A68t69 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE56,REF MODE69) VOID */

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t56 *,struct A68t70 ),(struct A68t56 *,struct A68t70 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(REF MODE56,REF MODE70) VOID */

A_PROCEDURE(A68_VOID ,A68t278,(struct A68t56 *,struct A68t71 ),(struct A68t56 *,struct A68t71 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(REF MODE56,REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t279,(struct A68t56 *,struct A68t72 ),(struct A68t56 *,struct A68t72 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE56,REF MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t56 *,A68_LBITS ),(struct A68t56 *,A68_LBITS ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(REF MODE56,LONG BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t56 *,A68_BITS ),(struct A68t56 *,A68_BITS ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(REF MODE56,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t56 *,A68_SBITS ),(struct A68t56 *,A68_SBITS ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(REF MODE56,SHORT BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t283,(struct A68t56 *,A68_SSBITS ),(struct A68t56 *,A68_SSBITS ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF MODE56,SHORT SHORT BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t284,(struct A68t56 *,struct A68t65 ),(struct A68t56 *,struct A68t65 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE56,MODE65) VOID */

A_PROCEDURE(A68_VOID ,A68t285,(struct A68t56 *,struct A68t66 ),(struct A68t56 *,struct A68t66 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(REF MODE56,MODE66) VOID */

A_PROCEDURE(A68_VOID ,A68t286,(struct A68t56 *,struct A68t67 ),(struct A68t56 *,struct A68t67 ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(REF MODE56,MODE67) VOID */

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t56 *,struct A68t68 ),(struct A68t56 *,struct A68t68 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(REF MODE56,MODE68) VOID */
struct A68t288 { A68_INT mode; union {
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
struct A68t50  mode31;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t288  A68_288 ;    /* UNION(REF CHAR,REF MODE27,REF MODE32,REF BOOL,REF MODE64,REF LONG BITS,REF MODE65,REF BITS,REF MODE66,REF SHORT BITS,REF MODE67,REF SHORT SHORT BITS,REF MODE68,REF LONG INT,REF MODE69,REF INT,REF MODE70,REF SHORT INT,REF MODE71,REF SHORT SHORT INT,REF MODE72,REF REAL,REF MODE73,REF SHORT REAL,REF MODE74,REF COMPL,REF MODE75,REF SHORT COMPL,REF MODE76,MODE77,MODE50)  */
A_ROW(struct A68t288 ,A68t289,1);
typedef struct A68t289  A68_289 ;    /* [] MODE288 */

A_PROCEDURE(A68_VOID ,A68t290,(struct A68t56 *,struct A68t289 ),(struct A68t56 *,struct A68t289 ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(REF MODE56,MODE289) VOID */

A_PROCEDURE(A68_VOID ,A68t291,(struct A68t43 ,A68_CHAR ),(struct A68t43 ,A68_CHAR ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(MODE43,CHAR) VOID */

A_PROCEDURE(A68_BOOL ,A68t292,(A68_LINT *),(A68_LINT *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(REF LONG INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t293,(A68_INT *),(A68_INT *,void *));
typedef struct A68t293  A68_293 ;    /* PROC(REF INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t294,(A68_SINT *),(A68_SINT *,void *));
typedef struct A68t294  A68_294 ;    /* PROC(REF SHORT INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t295,(A68_SSINT *),(A68_SSINT *,void *));
typedef struct A68t295  A68_295 ;    /* PROC(REF SHORT SHORT INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t296,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(MODE190) BOOL */

A_PROCEDURE(A68_VOID ,A68t297,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t297  A68_297 ;    /* PROC(BOOL) VOID */
struct A68t298 { A68_INT mode; union {
A68_LINT * mode1;
A68_INT * mode2;
A68_SINT * mode3;
A68_SSINT * mode4;
A68_REAL * mode5;
A68_SREAL * mode6;
A68_COMPL * mode7;
A68_SCOMPL * mode8;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t298  A68_298 ;    /* UNION(REF LONG INT,REF INT,REF SHORT INT,REF SHORT SHORT INT,REF REAL,REF SHORT REAL,REF COMPL,REF SHORT COMPL)  */
A_VECTOR(A68_BOOL ,A68t299);
typedef struct A68t299  A68_299 ;    /* VECTOR [] BOOL */

A_PROCEDURE(A68_VOID ,A68t300,(A68_BOOL ,struct A68t299 *),(A68_BOOL ,struct A68t299 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC(BOOL) MODE299 */
struct A68t301 { A68_INT mode; union {
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
struct A68t50  mode30;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t301  A68_301 ;    /* UNION(CHAR,MODE27,BOOL,MODE64,LONG BITS,MODE65,BITS,MODE66,SHORT BITS,MODE67,SHORT SHORT BITS,MODE68,LONG INT,MODE69,INT,MODE70,SHORT INT,MODE71,SHORT SHORT INT,MODE72,REAL,MODE73,SHORT REAL,MODE74,COMPL,MODE75,SHORT COMPL,MODE76,MODE79,MODE50)  */
A_ROW(struct A68t301 ,A68t302,1);
typedef struct A68t302  A68_302 ;    /* [] MODE301 */

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t56 *,struct A68t302 ),(struct A68t56 *,struct A68t302 ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(REF MODE56,MODE302) VOID */
struct A68t304 { A68_INT mode; union {
A68_LINT  mode1;
A68_INT  mode2;
A68_SINT  mode3;
A68_SSINT  mode4;
A68_REAL  mode5;
A68_SREAL  mode6;
A68_COMPL  mode7;
A68_SCOMPL  mode8;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t304  A68_304 ;    /* UNION(LONG INT,INT,SHORT INT,SHORT SHORT INT,REAL,SHORT REAL,COMPL,SHORT COMPL)  */
A_ISTRUCT(A68_CHAR ,3,A68t305);
typedef struct A68t305  A68_305 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t301 ,3,A68t306);
typedef struct A68t306  A68_306 ;    /* STRUCT 3 MODE301 */

A_PROCEDURE(A68_VOID ,A68t307,(struct A68t289 ),(struct A68t289 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE289) VOID */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t302 ),(struct A68t302 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE302) VOID */
A_ROW(struct A68t63 ,A68t309,1);
typedef struct A68t309  A68_309 ;    /* [] MODE63 */

A_PROCEDURE(A68_VOID ,A68t310,(struct A68t56 *,struct A68t309 ),(struct A68t56 *,struct A68t309 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF MODE56,MODE309) VOID */
A_ISTRUCT(struct A68t63 ,2,A68t311);
typedef struct A68t311  A68_311 ;    /* STRUCT 2 MODE63 */
A_ROW(struct A68t78 ,A68t312,1);
typedef struct A68t312  A68_312 ;    /* [] MODE78 */

A_PROCEDURE(A68_VOID ,A68t313,(struct A68t56 *,struct A68t312 ),(struct A68t56 *,struct A68t312 ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(REF MODE56,MODE312) VOID */
A_ISTRUCT(struct A68t78 ,2,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 2 MODE78 */

A_PROCEDURE(A68_VOID ,A68t315,(struct A68t309 ),(struct A68t309 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE309) VOID */

A_PROCEDURE(A68_VOID ,A68t316,(struct A68t312 ),(struct A68t312 ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE312) VOID */

/* --- Imports from spconvert --- */
extern A68_BOOL  RABAASP_add(A68_LINT *,A68_INT );
extern A68_BOOL  VABAASP_add(A68_INT *,A68_INT );
extern A68_BOOL  ZABAASP_add(A68_SINT *,A68_INT );
extern A68_BOOL  DBBAASP_add(A68_SSINT *,A68_INT );
extern A68_BOOL  JBBAASP_stringtolreal(A68_RC ,A68_INT ,A68_BOOL ,struct A68t190 );
extern A68_INT  ZBBAASP_chardig(A68_CHAR );
extern A68_INT  KCBAASP_intwidth(struct A68t193 );
extern A68_INT  OCBAASP_realwidth(struct A68t195 );
extern A68_INT  SCBAASP_rrealwidth(struct A68t190 );
extern A68_INT  WCBAASP_expwidth(struct A68t195 );
extern A68_VOID  XPBAASP_whole(struct A68t31 ,A68_INT ,A68_RC *);
extern A68_VOID  ARBAASP_float(struct A68t31 ,A68_INT ,A68_INT ,A68_INT ,A68_RC *);
/* --- End of imports from spconvert --- */


/* --- Imports from spops --- */
extern A68_VOID  HIAAASP_makervc(A68_CHAR ,A68_VC *);
extern A68_VOID  TIAAASP_makervc(A68_VC ,A68_VC *);
extern A68_VOID  DJAAASP_makervc(A68_RC ,A68_VC *);
extern A68_VOID  SJAAASP_cstrtorvc(struct A68t35 *,A68_VC *);
extern A68_CHAR * ZJAAASP_vctocharptr(A68_VC );
extern A68_REAL  PKAAASP_flatrvr(A68_VC );
extern A68_SREAL  YKAAASP_flatrvsr(A68_VC );
extern A68_LBITS  HLAAASP_flatrvlb(A68_VC );
extern A68_BITS  QLAAASP_flatrvb(A68_VC );
extern A68_SBITS  ZLAAASP_flatrvsb(A68_VC );
extern A68_SSBITS  IMAAASP_flatrvssb(A68_VC );
extern A68_VOID  SMAAASP_z(A68_VC ,A68_VC *);
extern A68_INT  XNAAASP_min(A68_INT ,A68_INT );
extern A68_INT  LPAAASP_max(A68_INT ,A68_INT );
extern A68_VOID  OQAAASP_sysbuff(A68_INT ,A68_VC *);
extern A68_BOOL  ERAAASP_elem(A68_INT ,A68_LBITS );
extern A68_BOOL  SRAAASP_elem(A68_INT ,A68_SBITS );
extern A68_BOOL  YRAAASP_elem(A68_INT ,A68_SSBITS );
/* --- End of imports from spops --- */


/* --- Imports from spplain --- */
#define UTAAASP_longbitswidth 64
#define VTAAASP_bitswidth 32
#define WTAAASP_shortbitswidth 16
#define XTAAASP_shortshortbitswidth 8
#define ZTAAASP_charbinbytes 1
#define AUAAASP_shortshortintbinbytes 1
#define BUAAASP_shortintbinbytes 2
#define CUAAASP_intbinbytes 4
#define DUAAASP_longintbinbytes 8
#define EUAAASP_shortshortbitsbinbytes 1
#define FUAAASP_shortbitsbinbytes 2
#define GUAAASP_bitsbinbytes 4
#define HUAAASP_longbitsbinbytes 8
#define NUAAASP_blank ' '
extern A68_CHAR  PUAAASP_nullcharacter;
#define XUAAASP_nulch PUAAASP_nullcharacter
#define QUAAASP_flip 'T'
#define RUAAASP_flop 'F'
extern A68_CHAR  TUAAASP_lf;
extern A68_CHAR  UUAAASP_ff;
extern A68_CHAR  YUAAASP_eofchar;
extern A68_43  EYAAASP_stringtobag(A68_RC );
extern A68_BOOL  WYAAASP_elem(A68_CHAR ,struct A68t43 );
extern A68_43  FZAAASP_radix10digit;
extern A68_43  PZAAASP_timestentothepower;
extern A68_43  RZAAASP_flipflop;
extern A68_43  TZAAASP_plusitimes;
extern A68_43  VZAAASP_lfbag;
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
extern void WZAAASP(void);   /* spconvert */
extern void CGAAASP(void);   /* spops */
extern void DTAAASP(void);   /* spplain */
extern void YAAAASP(void);   /* spaliens */
extern void BAAAASP(void);   /* spmodes */
/* --- end of DECS initialisation functions --- */
static A68_INT  QVBAASP_savedpolicy;
static A68_135   WVBAASP = {"SET "}; 
A_GISVEC(A68_VC ,XVBAASP,WVBAASP,4)
static A68_208   ZVBAASP = {"Error=>set_gc_params: "}; 
A_GISVEC(A68_VC ,AWBAASP,ZVBAASP,22)
static A68_135   EWBAASP = {"GET "}; 
A_GISVEC(A68_VC ,FWBAASP,EWBAASP,4)
static A68_209   IWBAASP = {"Error=>get_gc_param: "}; 
A_GISVEC(A68_VC ,JWBAASP,IWBAASP,21)
static A68_210   NWBAASP = {"POLICY"}; 
A_GISVEC(A68_VC ,OWBAASP,NWBAASP,6)
static A68_210   QWBAASP = {"POLICY"}; 
A_GISVEC(A68_VC ,RWBAASP,QWBAASP,6)
static A68_210   VWBAASP = {"POLICY"}; 
A_GISVEC(A68_VC ,WWBAASP,VWBAASP,6)
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define QZBAASP_prelude A_prelude
int A_argc=0;
char **A_argv=NULL;
char **A_envp=NULL;

#define RZBAASP_define_argc_argv_envp dummy
A68_INT  SZBAASP_argc;
A68_36 * TZBAASP_argv;
A68_36 * UZBAASP_envp;
static A68_BOOL  VZBAASP_args_initialised;
static A68_218  WZBAASP_arguments;
static A68_44  WACAASP_nobuffer;
#define CBCAASP_zeropos 0
static A68_224   KBCAASP = {"system error ("}; 
A_GISVEC(A68_VC ,LBCAASP,KBCAASP,14)
static A68_225   OBCAASP = {") on "}; 
A_GISVEC(A68_VC ,PBCAASP,OBCAASP,5)
#define VBCAASP_physicalfileendnotmended 255
#define WBCAASP_logicalfileendnotmended 254
#define XBCAASP_standinredirected 253
#define YBCAASP_environmentstringunset 252
#define ZBCAASP_environmentstringestaberr 251
#define ACCAASP_estabinvalidparameters 250
#define BCCAASP_openinvalidparameters 249
#define CCCAASP_noprogramargs 248
#define DCCAASP_valueerrornotmended 247
#define ECCAASP_estabcannotresolveinetaddr 246
#define FCCAASP_estabinetaliaswronglength 245
static A68_229   HCCAASP = {"physical file end not mended"}; 
A_GISARR(A68_RC ,ICCAASP,HCCAASP,28)
static A68_230   JCCAASP = {"logical file end not mended"}; 
A_GISARR(A68_RC ,KCCAASP,JCCAASP,27)
static A68_231   LCCAASP = {"stand in redirected"}; 
A_GISARR(A68_RC ,MCCAASP,LCCAASP,19)
static A68_232   NCCAASP = {"environment string unset"}; 
A_GISARR(A68_RC ,OCCAASP,NCCAASP,24)
static A68_229   PCCAASP = {"environment string estab err"}; 
A_GISARR(A68_RC ,QCCAASP,PCCAASP,28)
static A68_232   RCCAASP = {"estab invalid parameters"}; 
A_GISARR(A68_RC ,SCCAASP,RCCAASP,24)
static A68_233   TCCAASP = {"open invalid parameters"}; 
A_GISARR(A68_RC ,UCCAASP,TCCAASP,23)
static A68_234   VCCAASP = {"no program args"}; 
A_GISARR(A68_RC ,WCCAASP,VCCAASP,15)
static A68_208   XCCAASP = {"value error not mended"}; 
A_GISARR(A68_RC ,YCCAASP,XCCAASP,22)
static A68_235   ZCCAASP = {"estab cannot resolve inet addr"}; 
A_GISARR(A68_RC ,ADCAASP,ZCCAASP,30)
static A68_236   BDCAASP = {"estab inet alias wrong length"}; 
A_GISARR(A68_RC ,CDCAASP,BDCAASP,29)
static A68_208   DDCAASP = {"unknown transput error"}; 
A_GISARR(A68_RC ,EDCAASP,DDCAASP,22)
static A68_228  GDCAASP_transerrtxt;
static A68_239   LDCAASP = {"transput error ("}; 
A_GISVEC(A68_VC ,MDCAASP,LDCAASP,16)
static A68_225   QDCAASP = {") on "}; 
A_GISVEC(A68_VC ,RDCAASP,QDCAASP,5)
A68_45  YDCAASP_standinbook;
A68_45  AECAASP_standoutbook;
A68_45  CECAASP_standbackbook;
static A68_45  EECAASP_iorabook;
static A68_45  GECAASP_iobook;
static A68_58  IECAASP_initstate;
static A68_58  KECAASP_initclosedstate;
static A68_245   EHCAASP = {""}; 
A_GISVEC(A68_VC ,FHCAASP,EHCAASP,0)
static A68_224   MICAASP = {"/tmp/qadXXXXXX"}; 
A_GISVEC(A68_VC ,NICAASP,MICAASP,14)
static A68_245   EJCAASP = {""}; 
A_GISVEC(A68_VC ,FJCAASP,EJCAASP,0)
static A68_57  DLCAASP_defaultioprocs;
#define ELCAASP_expectcrlf A68_FALSE
#define FLCAASP_sysstdin 0
#define GLCAASP_sysstdout 1
#define HLCAASP_sysstderr 2
static A68_VC  CNCAASP_charbuffer;
static A68_47  MPCAASP_unbufsysprocs;
static A68_58  OPCAASP_charbufstate;
static A68_133   UPCAASP = {"stand in"}; 
A_GISVEC(A68_VC ,WPCAASP,UPCAASP,8)
A68_56  ZPCAASP_standin;
static A68_251   FQCAASP = {"stand out"}; 
A_GISVEC(A68_VC ,HQCAASP,FQCAASP,9)
A68_56  KQCAASP_standout;
static A68_252   QQCAASP = {"stand error"}; 
A_GISVEC(A68_VC ,SQCAASP,QQCAASP,11)
A68_56  VQCAASP_standerror;
A68_56  WQCAASP_standback;
static A68_47  RUCAASP_sysprocs;
static A68_VC  WUCAASP_kbdbuffer;
static A68_61  YUCAASP_tattr;
static A68_61  ZUCAASP_tattrorig;
A68_60  CXCAASP_kbdchannel;
A68_60  YZCAASP_argchannel;
static A68_245   JADAASP = {""}; 
A_GISVEC(A68_VC ,KADAASP,JADAASP,0)
A68_60  LDDAASP_envchannel;
static A68_245   CEDAASP = {""}; 
A_GISVEC(A68_VC ,DEDAASP,CEDAASP,0)
A68_60  TGDAASP_memchannel;
#define UGDAASP_backlogqueuesize 5
#define PKDAASP_sockaddrunsz 110
#define QKDAASP_sockaddrinsz 16
A68_60  YQDAASP_clientsocketchannel;
A68_60  MRDAASP_serversocketchannel;
A68_60  ORDAASP_standinchannel;
A68_60  QRDAASP_standoutchannel;
A68_60  SRDAASP_standbackchannel;
static A68_305   FXEAASP = {" i "}; 
A_GISARR(A68_RC ,GXEAASP,FXEAASP,3)
static A68_305   AYEAASP = {" i "}; 
A_GISARR(A68_RC ,BYEAASP,AYEAASP,3)
typedef struct   /* env of non-global proc */
{
A68_INT * VYBAASP_len;
} BZBAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HICAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  OADAASP_csl;
A_PAD_INT(PAD_36)
} TADAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * YGDAASP_n;
A68_INT  L;
A_PAD_INT(PAD_38)
} FHDAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ALDAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} FNDAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BQDAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} NVDAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_CHAR * VKEAASP_k;
A68_56 * F;
} ALEAASP_mendchar;
typedef struct   /* env of non-global proc */
{
A68_CHAR * VKEAASP_k;
A68_56 * F;
} GLEAASP_skipinitialspaces;
typedef struct   /* env of non-global proc */
{
A68_CHAR * VKEAASP_k;
A68_56 * F;
} JLEAASP_skipspaces;
typedef struct   /* env of non-global proc */
{
A68_CHAR * VKEAASP_k;
A68_85  HLEAASP_skipspaces;
A68_291  YKEAASP_mendchar;
A68_56 * F;
} NLEAASP_readlonginteger;
typedef struct   /* env of non-global proc */
{
A68_CHAR * VKEAASP_k;
A68_85  HLEAASP_skipspaces;
A68_291  YKEAASP_mendchar;
A68_56 * F;
} YLEAASP_readinteger;
typedef struct   /* env of non-global proc */
{
A68_CHAR * VKEAASP_k;
A68_85  HLEAASP_skipspaces;
A68_291  YKEAASP_mendchar;
A68_56 * F;
} JMEAASP_readshortinteger;
typedef struct   /* env of non-global proc */
{
A68_CHAR * VKEAASP_k;
A68_85  HLEAASP_skipspaces;
A68_291  YKEAASP_mendchar;
A68_56 * F;
} UMEAASP_readshortshortinteger;
typedef struct   /* env of non-global proc */
{
A68_CHAR * VKEAASP_k;
A68_85  HLEAASP_skipspaces;
A68_291  YKEAASP_mendchar;
A68_56 * F;
A68_293  WLEAASP_readinteger;
} FNEAASP_readlreal;
typedef struct   /* env of non-global proc */
{
int dummy;
} LREAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} YREAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} LSEAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} YSEAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} PUEAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_RC * SUEAASP_s;
} AVEAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HDFAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_RC * KDFAASP_rc;
} TDFAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OFFAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AGFAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} KGFAASP_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} WGFAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  L;
A_PAD_INT(PAD_37)
} LHDAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  INEAASP_lrw;
A_PAD_INT(PAD_39)
} MNEAASP_generator;
typedef struct   /* env of non-global proc */
{
A68_CHAR * VKEAASP_k;
A68_291  YKEAASP_mendchar;
A68_BOOL * TNEAASP_sig;
A68_INT * RNEAASP_index;
A68_INT  INEAASP_lrw;
A_PAD_INT(PAD_40)
A68_RC  PNEAASP_s;
A68_INT * SNEAASP_exp;
A68_56 * F;
} XNEAASP_readdigits;

A68_VOID  SVBAASP_set_gc_params(A68_206  Gcparams);

A68_INT  DWBAASP_get_gc_param(A68_VC  Name);

A68_VOID  MWBAASP_disable_garbage_collector(void);

A68_VOID  TWBAASP_enable_garbage_collector(void);

A68_VOID  ZWBAASP_exit(A68_INT  N);

A68_INT  BXBAASP_atexit(A68_85  P);

A68_INT  GXBAASP_onexit(A68_129  P, A68_RC  Arg);

A68_VOID  MXBAASP_stop(void);

A68_VOID  PXBAASP_onsignal(A68_INT  Sig, A68_101  Handler);

A68_LBITS  SXBAASP_longbitspack(A68_64  Vb);

A68_BITS  ZXBAASP_bitspack(A68_64  Vb);

A68_SBITS  GYBAASP_shortbitspack(A68_64  Vb);

A68_SSBITS  NYBAASP_shortshortbitspack(A68_64  Vb);

A_STATIC A68_VOID  UYBAASP_concat(A68_218  Strs, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  AZBAASP_generator(A68_BOOL  YYBAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XZBAASP_commandline(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DACAASP_generator(A68_BOOL  CACAASP_anonymous, A68_218  *ReturnedValue);

A_STATIC A68_VOID  YACAASP_newfilebuffer(A68_INT  Mtu, A68_44  *ReturnedValue);

A68_VOID  EBCAASP_errortext(A68_INT  E, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IBCAASP_systemerror(A68_56 * F);

A_STATIC A68_VOID  JDCAASP_transputerror(A68_56 * F, A68_INT  Err);

A68_BOOL  MECAASP_setpossible(A68_56 * F);

A68_BOOL  PECAASP_getpossible(A68_56 * F);

A68_BOOL  SECAASP_putpossible(A68_56 * F);

A68_BOOL  VECAASP_binpossible(A68_56 * F);

A68_BOOL  YECAASP_reidfpossible(A68_56 * F);

A68_VOID  BFCAASP_idf(A68_56 * F, A68_VC  *ReturnedValue);

A68_VOID  FFCAASP_reidf(A68_56 * F, A68_RC  Newidf);

A68_INT  MFCAASP_currentpos(A68_56 * F);

A68_INT  PFCAASP_logicalend(A68_56 * F);

A68_VOID  UFCAASP_onlogicalfileend(A68_56 * F, A68_59  P);

A68_VOID  YFCAASP_onphysicalfileend(A68_56 * F, A68_59  P);

A68_VOID  CGCAASP_onvalueerror(A68_56 * F, A68_59  P);

A68_VOID  GGCAASP_oncharerror(A68_56 * F, A68_55  P);

A68_VOID  KGCAASP_maketerm(A68_56 * F, A68_RC  Term);

A_STATIC A68_VOID  OGCAASP_setreadmood(A68_56 * F);

A_STATIC A68_VOID  SGCAASP_setwritemood(A68_56 * F);

A68_INT  BHCAASP_establish(A68_56 * F, A68_RC  Idf, A68_60  Chann, A68_INT  P, A68_INT  L, A68_INT  C);

A68_INT  OHCAASP_open(A68_56 * F, A68_246  Idf, A68_60  Chann);

A68_INT  DICAASP_create(A68_56 * F, A68_60  Chann);

A_STATIC A68_VOID  GICAASP_generator(A68_BOOL  EICAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  XICAASP_close(A68_56 * F);

A68_VOID  KJCAASP_scratch(A68_56 * F);

A68_VOID  PJCAASP_lock(A68_56 * F);

A68_VOID  YJCAASP_reset(A68_56 * F);

A68_VOID  JKCAASP_set(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C);

A68_BOOL  PKCAASP_nofileend(A68_56 * F);

A68_BOOL  SKCAASP_ignorevalueerror(A68_56 * F);

A68_BOOL  WKCAASP_ignorecharerror(A68_56 * F, A68_CHAR * Ch);

A_STATIC A68_BITS  JLCAASP_accessmode(A68_45  Type);

A_STATIC A68_INT  PLCAASP_sysestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C);

A_STATIC A68_INT  YLCAASP_sysopen(A68_56 * F);

A_STATIC A68_VOID  HMCAASP_sysclose(A68_56 * F);

A_STATIC A68_INT  KMCAASP_sysgetbuf(A68_56 * F, A68_VC  Buf);

A_STATIC A68_INT  SMCAASP_sysputbuf(A68_56 * F, A68_VC  Buf);

A_STATIC A68_VOID  ZMCAASP_generator(A68_BOOL  YMCAASP_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  GNCAASP_sysgetch(A68_56 * F, A68_CHAR * C);

A_STATIC A68_BOOL  MNCAASP_sysputch(A68_56 * F, A68_CHAR  C);

A_STATIC A68_BOOL  UNCAASP_sysset(A68_56 * F, A68_INT  P);

A_STATIC A68_INT  BOCAASP_syslpos(A68_56 * F);

A_STATIC A68_VOID  LOCAASP_syscpos(A68_56 * F);

A_STATIC A68_BOOL  QOCAASP_nocontrolstream(A68_56 * F, A68_INT  I);

A_STATIC A68_VOID  CPCAASP_anonymous(A68_56 * F, A68_INT  Bytes, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HPCAASP_anonymous(A68_56 * F);

A_STATIC A68_VOID  RPCAASP_generator(A68_BOOL  QPCAASP_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CQCAASP_generator(A68_BOOL  BQCAASP_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NQCAASP_generator(A68_BOOL  MQCAASP_anonymous, A68_VC  *ReturnedValue);

A68_VOID  YQCAASP_setflushafterput(A68_56 * F);

A_STATIC A68_VOID  BRCAASP_sysflushbuffer(A68_56 * F);

A_STATIC A68_VOID  LRCAASP_ensurebufspace(A68_56 * F, A68_INT  Bytes, A68_VC  *ReturnedValue);

A_STATIC A68_INT  DSCAASP_buffestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C);

A_STATIC A68_INT  KSCAASP_buffopen(A68_56 * F);

A_STATIC A68_VOID  RSCAASP_buffclose(A68_56 * F);

A_STATIC A68_BOOL  WSCAASP_buffset(A68_56 * F, A68_INT  Pos);

A_STATIC A68_INT  BTCAASP_bufflpos(A68_56 * F);

A_STATIC A68_INT  GTCAASP_buffputbuf(A68_56 * F, A68_VC  B);

A_STATIC A68_INT  KTCAASP_buffgetbuf(A68_56 * F, A68_VC  B);

A_STATIC A68_BOOL  OTCAASP_buffgetch(A68_56 * F, A68_CHAR * C);

A_STATIC A68_BOOL  XTCAASP_buffputch(A68_56 * F, A68_CHAR  C);

A_STATIC A68_VOID  TUCAASP_generator(A68_BOOL  SUCAASP_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_INT  BVCAASP_kbdopen(A68_56 * F);

A_STATIC A68_INT  VVCAASP_kbdestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C);

A_STATIC A68_VOID  YVCAASP_kbdclose(A68_56 * F);

A_STATIC A68_BOOL  EWCAASP_kbdgetch(A68_56 * F, A68_CHAR * Ch);

A_STATIC A68_VOID  KWCAASP_kbdensurebufspace(A68_56 * F, A68_INT  N, A68_VC  *ReturnedValue);

A_STATIC A68_INT  EXCAASP_argopen(A68_56 * F);

A_STATIC A68_INT  TXCAASP_argestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C);

A_STATIC A68_VOID  WXCAASP_argclose(A68_56 * F);

A_STATIC A68_BOOL  ZXCAASP_argset(A68_56 * F, A68_INT  P);

A_STATIC A68_INT  DYCAASP_arglpos(A68_56 * F);

A_STATIC A68_INT  HYCAASP_argputbuf(A68_56 * F, A68_VC  B);

A_STATIC A68_INT  LYCAASP_arggetbuf(A68_56 * F, A68_VC  B);

A_STATIC A68_VOID  OYCAASP_argflushbuffer(A68_56 * F);

A_STATIC A68_VOID  RYCAASP_argensurebytes(A68_56 * F, A68_INT  Bytes, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  CZCAASP_argputch(A68_56 * F, A68_CHAR  C);

A_STATIC A68_BOOL  GZCAASP_arggetch(A68_56 * F, A68_CHAR * C);

A_STATIC A68_INT  DADAASP_envestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C);

A_STATIC A68_INT  GADAASP_envopen(A68_56 * F);

A_STATIC A68_VOID  SADAASP_generator(A68_BOOL  QADAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JBDAASP_envclose(A68_56 * F);

A_STATIC A68_BOOL  MBDAASP_envset(A68_56 * F, A68_INT  P);

A_STATIC A68_INT  QBDAASP_envlpos(A68_56 * F);

A_STATIC A68_INT  UBDAASP_envputbuf(A68_56 * F, A68_VC  Buf);

A_STATIC A68_INT  YBDAASP_envgetbuf(A68_56 * F, A68_VC  Buf);

A_STATIC A68_VOID  BCDAASP_envflushbuffer(A68_56 * F);

A_STATIC A68_VOID  ECDAASP_envensurebytes(A68_56 * F, A68_INT  Bytes, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  PCDAASP_envputch(A68_56 * F, A68_CHAR  C);

A_STATIC A68_BOOL  TCDAASP_envgetch(A68_56 * F, A68_CHAR * C);

A_STATIC A68_INT  QDDAASP_memestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C);

A_STATIC A68_INT  AEDAASP_memopen(A68_56 * F);

A_STATIC A68_VOID  JEDAASP_memclose(A68_56 * F);

A_STATIC A68_BOOL  MEDAASP_memset(A68_56 * F, A68_INT  P);

A_STATIC A68_INT  QEDAASP_memlpos(A68_56 * F);

A_STATIC A68_INT  UEDAASP_memputbuf(A68_56 * F, A68_VC  Buf);

A_STATIC A68_INT  YEDAASP_memgetbuf(A68_56 * F, A68_VC  Buf);

A_STATIC A68_VOID  BFDAASP_memflushbuffer(A68_56 * F);

A_STATIC A68_VOID  EFDAASP_memensurebytes(A68_56 * F, A68_INT  Bytes, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  UFDAASP_memputch(A68_56 * F, A68_CHAR  C);

A_STATIC A68_BOOL  CGDAASP_memgetch(A68_56 * F, A68_CHAR * C);

A_STATIC A68_VOID  XGDAASP_sysunpackstraddrlist(A68_36 * A, A68_INT  L, A68_227  *ReturnedValue);

A_STATIC A68_VOID  EHDAASP_generator(A68_BOOL  CHDAASP_anonymous, A68_228  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KHDAASP_generator(A68_BOOL  IHDAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  TIDAASP_sysgetinetaddr(A68_VC  Host, A68_BITS * Iaddr);

A_STATIC A68_VOID  TJDAASP_sockflushbuffer(A68_56 * Sf);

A_STATIC A68_VOID  BKDAASP_sockensurebufspace(A68_56 * Sf, A68_INT  Bytes, A68_VC  *ReturnedValue);

A_STATIC A68_INT  VKDAASP_clientsockestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C);

A_STATIC A68_VOID  ZKDAASP_generator(A68_BOOL  XKDAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  ANDAASP_serversockestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C);

A_STATIC A68_VOID  ENDAASP_generator(A68_BOOL  CNDAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  VODAASP_sockopen(A68_56 * S);

A_STATIC A68_VOID  YODAASP_sockclose(A68_56 * S);

A_STATIC A68_INT  APDAASP_socklpos(A68_56 * S);

A_STATIC A68_BOOL  EPDAASP_sockset(A68_56 * S, A68_INT  P);

A_STATIC A68_BOOL  JPDAASP_sockgetch(A68_56 * F, A68_CHAR * C);

A_STATIC A68_BOOL  PPDAASP_sockputch(A68_56 * F, A68_CHAR  C);

A68_56 * XPDAASP_accept(A68_56 * S);

A_STATIC A68_VOID  AQDAASP_generator(A68_BOOL  YPDAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  URDAASP_flushbuffer(A68_56 * F);

A68_VOID  XRDAASP_filebuffer(A68_56 * F, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BSDAASP_putch(A68_56 * F, A68_CHAR  C);

A_STATIC A68_CHAR  HSDAASP_getch(A68_56 * F);

A68_VOID  VSDAASP_space(A68_56 * F);

A68_VOID  XSDAASP_backspace(A68_56 * F);

A_STATIC A68_VOID  ATDAASP_backch(A68_56 * F, A68_CHAR  C);

A68_VOID  DTDAASP_skipterminators(A68_56 * F);

A_STATIC A68_CHAR  ITDAASP_getchar(A68_56 * F);

A_STATIC A68_VOID  NTDAASP_skiptochar(A68_56 * F, A68_CHAR  Ch);

A68_VOID  QTDAASP_newline(A68_56 * F);

A68_VOID  STDAASP_newpage(A68_56 * F);

A_STATIC A68_VOID  VTDAASP_read(A68_56 * F, A68_VC  Rc);

A_STATIC A68_VOID  NUDAASP_read(A68_56 * F, A68_RC  Rc);

A_STATIC A68_VOID  JVDAASP_read(A68_56 * F, A68_CHAR * C);

A_STATIC A68_VOID  MVDAASP_generator(A68_BOOL  KVDAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VVDAASP_read(A68_56 * F, A68_LBITS * B);

A_STATIC A68_VOID  DWDAASP_read(A68_56 * F, A68_BITS * B);

A_STATIC A68_VOID  LWDAASP_read(A68_56 * F, A68_SBITS * B);

A_STATIC A68_VOID  TWDAASP_read(A68_56 * F, A68_SSBITS * B);

A_STATIC A68_VOID  BXDAASP_read(A68_56 * F, A68_65  Rb);

A_STATIC A68_VOID  WXDAASP_read(A68_56 * F, A68_66  Rb);

A_STATIC A68_VOID  RYDAASP_read(A68_56 * F, A68_67  Rb);

A_STATIC A68_VOID  MZDAASP_read(A68_56 * F, A68_68  Rb);

A_STATIC A68_VOID  LAEAASP_read(A68_56 * F, A68_LINT * N);

A_STATIC A68_VOID  PAEAASP_read(A68_56 * F, A68_INT * N);

A_STATIC A68_VOID  TAEAASP_read(A68_56 * F, A68_SINT * N);

A_STATIC A68_VOID  XAEAASP_read(A68_56 * F, A68_SSINT * N);

A_STATIC A68_VOID  BBEAASP_read(A68_56 * F, A68_69  Rn);

A_STATIC A68_VOID  WBEAASP_read(A68_56 * F, A68_70  Rn);

A_STATIC A68_VOID  RCEAASP_read(A68_56 * F, A68_71  Rn);

A_STATIC A68_VOID  MDEAASP_read(A68_56 * F, A68_72  Rn);

A_STATIC A68_VOID  LEEAASP_write(A68_56 * F, A68_LBITS  B);

A_STATIC A68_VOID  XEEAASP_write(A68_56 * F, A68_BITS  B);

A_STATIC A68_VOID  JFEAASP_write(A68_56 * F, A68_SBITS  B);

A_STATIC A68_VOID  VFEAASP_write(A68_56 * F, A68_SSBITS  B);

A_STATIC A68_VOID  HGEAASP_write(A68_56 * F, A68_CHAR  C);

A_STATIC A68_VOID  KGEAASP_write(A68_56 * F, A68_65  Rb);

A_STATIC A68_VOID  JHEAASP_write(A68_56 * F, A68_66  Rb);

A_STATIC A68_VOID  IIEAASP_write(A68_56 * F, A68_67  Rb);

A_STATIC A68_VOID  HJEAASP_write(A68_56 * F, A68_68  Rb);

A_STATIC A68_VOID  BKEAASP_write(A68_56 * F, A68_RC  Rc);

A68_VOID  NKEAASP_get(A68_56 * F, A68_289  X);

A_STATIC A68_VOID  ZKEAASP_mendchar(A68_43  S, A68_CHAR  Sugg, void *NonLocals);

A_STATIC A68_VOID  FLEAASP_skipinitialspaces(void *NonLocals);

A_STATIC A68_VOID  ILEAASP_skipspaces(void *NonLocals);

A_STATIC A68_BOOL  MLEAASP_readlonginteger(A68_LINT * I, void *NonLocals);

A_STATIC A68_BOOL  XLEAASP_readinteger(A68_INT * I, void *NonLocals);

A_STATIC A68_BOOL  IMEAASP_readshortinteger(A68_SINT * I, void *NonLocals);

A_STATIC A68_BOOL  TMEAASP_readshortshortinteger(A68_SSINT * I, void *NonLocals);

A_STATIC A68_BOOL  ENEAASP_readlreal(A68_190  R, void *NonLocals);

A_STATIC A68_VOID  LNEAASP_generator(A68_BOOL  JNEAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WNEAASP_readdigits(A68_BOOL  After, void *NonLocals);

A_STATIC A68_VOID  KREAASP_generator(A68_BOOL  IREAASP_anonymous, A68_299  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XREAASP_generator(A68_BOOL  VREAASP_anonymous, A68_299  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KSEAASP_generator(A68_BOOL  ISEAASP_anonymous, A68_299  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XSEAASP_generator(A68_BOOL  VSEAASP_anonymous, A68_299  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OUEAASP_generator(A68_BOOL  MUEAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZUEAASP_generator(A68_BOOL  XUEAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A68_VOID  WVEAASP_put(A68_56 * F, A68_302  X);

A68_VOID  MCFAASP_read(A68_289  X);

A68_VOID  OCFAASP_print(A68_302  X);

A68_VOID  QCFAASP_write(A68_302  X);

A68_VOID  TCFAASP_getbin(A68_56 * F, A68_309  Items);

A_STATIC A68_VOID  GDFAASP_generator(A68_BOOL  EDFAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SDFAASP_generator(A68_BOOL  QDFAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NFFAASP_generator(A68_BOOL  LFFAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZFFAASP_generator(A68_BOOL  XFFAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JGFAASP_generator(A68_BOOL  HGFAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VGFAASP_generator(A68_BOOL  TGFAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  QIFAASP_putbin(A68_56 * F, A68_312  Items);

A68_VOID  QMFAASP_readbin(A68_309  Items);

A68_VOID  SMFAASP_writebin(A68_312  Items);

A_STATIC A68_VOID  KHDAASP_generator(A68_BOOL  IHDAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LHDAASP_generator *)NonLocals)->x)
{ 
A68_RC  MHDAASP;  /* clause result */
A68_RC  NHDAASP;  /* OPERATORS - dynamic generator */
{ 
NHDAASP.dim[0].upb = NL(L) ;
NHDAASP.dim[0].lwb = 1 ;
A_1INITSTRIDES(NHDAASP) ;
( IHDAASP_anonymous? A_R1LOC(A68_CHAR ,NHDAASP): A_R1HEAP(A68_CHAR ,NHDAASP) );
MHDAASP = NHDAASP;
} 
*ReturnedValue = (MHDAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  LNEAASP_generator(A68_BOOL  JNEAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((MNEAASP_generator *)NonLocals)->x)
{ 
A68_RC  NNEAASP;  /* clause result */
A68_RC  ONEAASP;  /* OPERATORS - dynamic generator */
{ 
ONEAASP.dim[0].upb = NL(INEAASP_lrw) ;
ONEAASP.dim[0].lwb = 0 ;
A_1INITSTRIDES(ONEAASP) ;
( JNEAASP_anonymous? A_R1LOC(A68_CHAR ,ONEAASP): A_R1HEAP(A68_CHAR ,ONEAASP) );
NNEAASP = ONEAASP;
} 
*ReturnedValue = (NNEAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  WNEAASP_readdigits(A68_BOOL  After, void *NonLocals)
#define NL(x) (((XNEAASP_readdigits *)NonLocals)->x)
{ 
A68_INT  YNEAASP_i;
A68_BOOL  ZNEAASP;  /* clause result */
A68_INT  AOEAASP;  /* YIELD */
A68_CHAR * BOEAASP;  /* YIELD */
A68_BOOL  COEAASP;  /* clause result */
A68_BOOL  DOEAASP;  /* clause result */
A_PROC_ENTRY(readdigits);
 /* line 1919: */
 /* line 1920: */
{ 
YNEAASP_i = (After);
 /* line 1921: */
 /* line 1922: */
if ( !WYAAASP_elem((*NL(VKEAASP_k)), FZAAASP_radix10digit) )
{ 
 /* line 1923: */
A_CALLPROC(NL(YKEAASP_mendchar),(FZAAASP_radix10digit, '0'),(FZAAASP_radix10digit, '0',(NL(YKEAASP_mendchar)).nonlocals));
} 
 /* line 1925: */
for ( ;; )
{ 
 /* line 1926: */
 /* line 1927: */
if ( !WYAAASP_elem((*NL(VKEAASP_k)), FZAAASP_radix10digit) )
{ 
 /* line 1928: */
 /* line 1929: */
ZNEAASP = A68_FALSE;
} 
else
{ 
 /* line 1930: */
if ( (*NL(TNEAASP_sig)) = ((*NL(TNEAASP_sig))|((*NL(VKEAASP_k))!='0')) )
{ 
if ( ((*NL(RNEAASP_index))<NL(INEAASP_lrw)) )
{ 
AOEAASP = (*NL(RNEAASP_index))+=1 ;
BOEAASP = (&A_R1INDEX(NL(PNEAASP_s),AOEAASP)) ;
(*BOEAASP) = (*NL(VKEAASP_k));
} 
else
{ 
 /* line 1931: */
(*NL(SNEAASP_exp))+=1;
} 
} 
 /* line 1932: */
(*NL(SNEAASP_exp))-=YNEAASP_i;
 /* line 1933: */
 /* line 1934: */
COEAASP = ((*NL(VKEAASP_k))!=TUAAASP_lf);
if ( COEAASP )
{ 
(*NL(VKEAASP_k)) = HSDAASP_getch(NL(F));
 /* line 1935: */
ZNEAASP = A68_TRUE;
} 
else
{ 
 /* line 1936: */
 /* line 1937: */
ZNEAASP = A68_FALSE;
} 
} 
DOEAASP = ZNEAASP;
if ( !DOEAASP ) break;
/*SKIP*/;
}
 /* line 1938: */
} 
A_PROC_EXIT(readdigits);
return;
} 
#undef NL

A_STATIC A68_VOID  AZBAASP_generator(A68_BOOL  YYBAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BZBAASP_generator *)NonLocals)->x)
{ 
A68_VC  CZBAASP;  /* clause result */
A68_VC  DZBAASP;  /* OPERATORS - dynamic generator */
{ 
DZBAASP.upb = ((*NL(VYBAASP_len))+1) ;
( YYBAASP_anonymous? A_VLOC(A68_CHAR ,DZBAASP): A_VHEAP(A68_CHAR ,DZBAASP) );
CZBAASP = DZBAASP;
} 
*ReturnedValue = (CZBAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  DACAASP_generator(A68_BOOL  CACAASP_anonymous, A68_218  *ReturnedValue)
{ 
A68_218  EACAASP;  /* clause result */
A68_218  FACAASP;  /* OPERATORS - dynamic generator */
{ 
FACAASP.upb = (2*SZBAASP_argc) ;
( CACAASP_anonymous? A_VLOC(A68_VC ,FACAASP): A_VHEAP(A68_VC ,FACAASP) );
EACAASP = FACAASP;
} 
*ReturnedValue = (EACAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  GICAASP_generator(A68_BOOL  EICAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HICAASP_generator *)NonLocals)->x)
{ 
A68_VC  IICAASP;  /* clause result */
A68_VC  JICAASP;  /* OPERATORS - dynamic generator */
{ 
JICAASP.upb = 14 ;
( EICAASP_anonymous? A_VLOC(A68_CHAR ,JICAASP): A_VHEAP(A68_CHAR ,JICAASP) );
IICAASP = JICAASP;
} 
*ReturnedValue = (IICAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  SADAASP_generator(A68_BOOL  QADAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TADAASP_generator *)NonLocals)->x)
{ 
A68_VC  UADAASP;  /* clause result */
A68_VC  VADAASP;  /* OPERATORS - dynamic generator */
{ 
VADAASP.upb = (1+NL(OADAASP_csl)) ;
( QADAASP_anonymous? A_VLOC(A68_CHAR ,VADAASP): A_VHEAP(A68_CHAR ,VADAASP) );
UADAASP = VADAASP;
} 
*ReturnedValue = (UADAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  EHDAASP_generator(A68_BOOL  CHDAASP_anonymous, A68_228  *ReturnedValue, void *NonLocals)
#define NL(x) (((FHDAASP_generator *)NonLocals)->x)
{ 
A68_228  HHDAASP;  /* OPERATORS - dynamic generator */
A68_256  GHDAASP_anonymous;
A68_33  JHDAASP_generator;   /* proc value of non-global proc */
A68_32 * OHDAASP_anonymous;
A68_INT  PHDAASP;  /* forall loop counter */
A68_RC  QHDAASP;  /* avoid structure result */
A68_228  RHDAASP;  /* clause result */
{ 
HHDAASP.dim[0].upb = (*NL(YGDAASP_n)) ;
HHDAASP.dim[0].lwb = 1 ;
A_1INITSTRIDES(HHDAASP) ;
( CHDAASP_anonymous? A_R1LOC(A68_RC ,HHDAASP): A_R1HEAP(A68_RC ,HHDAASP) );
GHDAASP_anonymous = HHDAASP;
A_CLOSURE( JHDAASP_generator, KHDAASP_generator, LHDAASP_generator );
(( LHDAASP_generator * ) ( JHDAASP_generator.nonlocals )) -> L = NL(L);
PHDAASP = (*(&GHDAASP_anonymous)).dim[0].upb - (*(&GHDAASP_anonymous)).dim[0].lwb;
OHDAASP_anonymous = (*(&GHDAASP_anonymous)).data;
for (;PHDAASP-- >= 0;
(OHDAASP_anonymous += (*(&GHDAASP_anonymous)).dim[0].stride
) )
{
A_CALLPROC(JHDAASP_generator,(CHDAASP_anonymous, &QHDAASP),(CHDAASP_anonymous, &QHDAASP,(JHDAASP_generator).nonlocals));
(*OHDAASP_anonymous) = QHDAASP;
}
RHDAASP = GHDAASP_anonymous;
} 
*ReturnedValue = (RHDAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  ZKDAASP_generator(A68_BOOL  XKDAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ALDAASP_generator *)NonLocals)->x)
{ 
A68_VC  BLDAASP;  /* clause result */
A68_VC  CLDAASP;  /* OPERATORS - dynamic generator */
{ 
CLDAASP.upb = LPAAASP_max(PKDAASP_sockaddrunsz, QKDAASP_sockaddrinsz) ;
( XKDAASP_anonymous? A_VLOC(A68_CHAR ,CLDAASP): A_VHEAP(A68_CHAR ,CLDAASP) );
BLDAASP = CLDAASP;
} 
*ReturnedValue = (BLDAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  ENDAASP_generator(A68_BOOL  CNDAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FNDAASP_generator *)NonLocals)->x)
{ 
A68_VC  GNDAASP;  /* clause result */
A68_VC  HNDAASP;  /* OPERATORS - dynamic generator */
{ 
HNDAASP.upb = LPAAASP_max(PKDAASP_sockaddrunsz, QKDAASP_sockaddrinsz) ;
( CNDAASP_anonymous? A_VLOC(A68_CHAR ,HNDAASP): A_VHEAP(A68_CHAR ,HNDAASP) );
GNDAASP = HNDAASP;
} 
*ReturnedValue = (GNDAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  AQDAASP_generator(A68_BOOL  YPDAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BQDAASP_generator *)NonLocals)->x)
{ 
A68_VC  CQDAASP;  /* clause result */
A68_VC  DQDAASP;  /* OPERATORS - dynamic generator */
{ 
DQDAASP.upb = PKDAASP_sockaddrunsz ;
( YPDAASP_anonymous? A_VLOC(A68_CHAR ,DQDAASP): A_VHEAP(A68_CHAR ,DQDAASP) );
CQDAASP = DQDAASP;
} 
*ReturnedValue = (CQDAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  MVDAASP_generator(A68_BOOL  KVDAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NVDAASP_generator *)NonLocals)->x)
{ 
A68_VC  OVDAASP;  /* clause result */
A68_VC  PVDAASP;  /* OPERATORS - dynamic generator */
{ 
PVDAASP.upb = 1 ;
( KVDAASP_anonymous? A_VLOC(A68_CHAR ,PVDAASP): A_VHEAP(A68_CHAR ,PVDAASP) );
OVDAASP = PVDAASP;
} 
*ReturnedValue = (OVDAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  ZKEAASP_mendchar(A68_43  S, A68_CHAR  Sugg, void *NonLocals)
#define NL(x) (((ALEAASP_mendchar *)NonLocals)->x)
{ 
A68_55  BLEAASP;  /* CALL */
A68_BOOL  CLEAASP;  /* clause result */
A68_BOOL  DLEAASP;  /* clause result */
A_PROC_ENTRY(mendchar);
 /* line 1809: */
(*NL(VKEAASP_k)) = Sugg;
 /* line 1810: */
 /* line 1811: */
BLEAASP = (*(&((&(NL(F)->Io))->Charerrormended))) ;
if ( A_CALLPROC(BLEAASP,(NL(F), NL(VKEAASP_k)),(NL(F), NL(VKEAASP_k),(BLEAASP).nonlocals)) )
{ 
 /* line 1812: */
CLEAASP = WYAAASP_elem((*NL(VKEAASP_k)), S);
} 
else
{ 
 /* line 1813: */
 /* line 1814: */
CLEAASP = A68_FALSE;
} 
DLEAASP = !CLEAASP;
if ( DLEAASP )
{ 
 /* line 1815: */
(*NL(VKEAASP_k)) = Sugg;
} 
A_PROC_EXIT(mendchar);
return;
} 
#undef NL

A_STATIC A68_VOID  FLEAASP_skipinitialspaces(void *NonLocals)
#define NL(x) (((GLEAASP_skipinitialspaces *)NonLocals)->x)
{ 
A_PROC_ENTRY(skipinitialspaces);
for ( ;; )
{ 
if ( !((((*NL(VKEAASP_k)) = HSDAASP_getch(NL(F)))<=NUAAASP_blank)) ) break;
/*SKIP*/;
}
A_PROC_EXIT(skipinitialspaces);
return;
} 
#undef NL

A_STATIC A68_VOID  ILEAASP_skipspaces(void *NonLocals)
#define NL(x) (((JLEAASP_skipspaces *)NonLocals)->x)
{ 
A_PROC_ENTRY(skipspaces);
for ( ;; )
{ 
if ( !((((*NL(VKEAASP_k)) = HSDAASP_getch(NL(F)))==NUAAASP_blank)) ) break;
/*SKIP*/;
}
A_PROC_EXIT(skipspaces);
return;
} 
#undef NL

A_STATIC A68_BOOL  MLEAASP_readlonginteger(A68_LINT * I, void *NonLocals)
#define NL(x) (((NLEAASP_readlonginteger *)NonLocals)->x)
{ 
A68_BOOL  OLEAASP_ok;
A68_BOOL  PLEAASP_neg;
A68_LINT  QLEAASP_j;
A68_BOOL  RLEAASP;  /* clause result */
A68_BOOL  SLEAASP;  /* clause result */
A68_LINT  TLEAASP;  /* clause result */
A68_BOOL  ULEAASP;  /* clause result */
A_PROC_ENTRY(readlonginteger);
 /* line 1824: */
 /* line 1825: */
{ 
OLEAASP_ok = A68_TRUE;
PLEAASP_neg = ((*NL(VKEAASP_k))=='-');
 /* line 1826: */
if ( (PLEAASP_neg|((*NL(VKEAASP_k))=='+')) )
{ 
A_CALLPROC(NL(HLEAASP_skipspaces),(),((NL(HLEAASP_skipspaces)).nonlocals));
} 
 /* line 1827: */
 /* line 1828: */
if ( !WYAAASP_elem((*NL(VKEAASP_k)), FZAAASP_radix10digit) )
{ 
 /* line 1829: */
A_CALLPROC(NL(YKEAASP_mendchar),(FZAAASP_radix10digit, '0'),(FZAAASP_radix10digit, '0',(NL(YKEAASP_mendchar)).nonlocals));
} 
 /* line 1831: */
QLEAASP_j = (A68_LINT )ZBBAASP_chardig((*NL(VKEAASP_k)));
 /* line 1833: */
for ( ;; )
{ 
 /* line 1834: */
(*NL(VKEAASP_k)) = ITDAASP_getchar(NL(F));
 /* line 1835: */
 /* line 1836: */
if ( !WYAAASP_elem((*NL(VKEAASP_k)), FZAAASP_radix10digit) )
{ 
ATDAASP_backch(NL(F), (*NL(VKEAASP_k)));
 /* line 1837: */
RLEAASP = A68_FALSE;
} 
else
{ 
if ( OLEAASP_ok )
{ 
OLEAASP_ok = RABAASP_add((&QLEAASP_j), ZBBAASP_chardig((*NL(VKEAASP_k))));
} 
 /* line 1838: */
 /* line 1839: */
RLEAASP = A68_TRUE;
} 
SLEAASP = RLEAASP;
if ( !SLEAASP ) break;
/*SKIP*/;
}
 /* line 1841: */
if ( OLEAASP_ok )
{ 
if ( PLEAASP_neg )
{ 
TLEAASP = (-QLEAASP_j);
} 
else
{ 
TLEAASP = QLEAASP_j;
} 
(*I) = TLEAASP;
} 
 /* line 1842: */
 /* line 1843: */
ULEAASP = OLEAASP_ok;
} 
A_PROC_EXIT(readlonginteger);
return( ULEAASP );
} 
#undef NL

A_STATIC A68_BOOL  XLEAASP_readinteger(A68_INT * I, void *NonLocals)
#define NL(x) (((YLEAASP_readinteger *)NonLocals)->x)
{ 
A68_BOOL  ZLEAASP_ok;
A68_BOOL  AMEAASP_neg;
A68_INT  BMEAASP_j;
A68_BOOL  CMEAASP;  /* clause result */
A68_BOOL  DMEAASP;  /* clause result */
A68_INT  EMEAASP;  /* clause result */
A68_BOOL  FMEAASP;  /* clause result */
A_PROC_ENTRY(readinteger);
 /* line 1846: */
 /* line 1847: */
{ 
ZLEAASP_ok = A68_TRUE;
AMEAASP_neg = ((*NL(VKEAASP_k))=='-');
 /* line 1848: */
if ( (AMEAASP_neg|((*NL(VKEAASP_k))=='+')) )
{ 
A_CALLPROC(NL(HLEAASP_skipspaces),(),((NL(HLEAASP_skipspaces)).nonlocals));
} 
 /* line 1849: */
 /* line 1850: */
if ( !WYAAASP_elem((*NL(VKEAASP_k)), FZAAASP_radix10digit) )
{ 
 /* line 1851: */
A_CALLPROC(NL(YKEAASP_mendchar),(FZAAASP_radix10digit, '0'),(FZAAASP_radix10digit, '0',(NL(YKEAASP_mendchar)).nonlocals));
} 
 /* line 1853: */
BMEAASP_j = ZBBAASP_chardig((*NL(VKEAASP_k)));
 /* line 1855: */
for ( ;; )
{ 
 /* line 1856: */
(*NL(VKEAASP_k)) = ITDAASP_getchar(NL(F));
 /* line 1857: */
 /* line 1858: */
if ( !WYAAASP_elem((*NL(VKEAASP_k)), FZAAASP_radix10digit) )
{ 
ATDAASP_backch(NL(F), (*NL(VKEAASP_k)));
 /* line 1859: */
CMEAASP = A68_FALSE;
} 
else
{ 
if ( ZLEAASP_ok )
{ 
ZLEAASP_ok = VABAASP_add((&BMEAASP_j), ZBBAASP_chardig((*NL(VKEAASP_k))));
} 
 /* line 1860: */
 /* line 1861: */
CMEAASP = A68_TRUE;
} 
DMEAASP = CMEAASP;
if ( !DMEAASP ) break;
/*SKIP*/;
}
 /* line 1863: */
if ( ZLEAASP_ok )
{ 
if ( AMEAASP_neg )
{ 
EMEAASP = (-BMEAASP_j);
} 
else
{ 
EMEAASP = BMEAASP_j;
} 
(*I) = EMEAASP;
} 
 /* line 1864: */
 /* line 1865: */
FMEAASP = ZLEAASP_ok;
} 
A_PROC_EXIT(readinteger);
return( FMEAASP );
} 
#undef NL

A_STATIC A68_BOOL  IMEAASP_readshortinteger(A68_SINT * I, void *NonLocals)
#define NL(x) (((JMEAASP_readshortinteger *)NonLocals)->x)
{ 
A68_BOOL  KMEAASP_ok;
A68_BOOL  LMEAASP_neg;
A68_SINT  MMEAASP_j;
A68_BOOL  NMEAASP;  /* clause result */
A68_BOOL  OMEAASP;  /* clause result */
A68_SINT  PMEAASP;  /* clause result */
A68_BOOL  QMEAASP;  /* clause result */
A_PROC_ENTRY(readshortinteger);
 /* line 1868: */
 /* line 1869: */
{ 
KMEAASP_ok = A68_TRUE;
LMEAASP_neg = ((*NL(VKEAASP_k))=='-');
 /* line 1870: */
if ( (LMEAASP_neg|((*NL(VKEAASP_k))=='+')) )
{ 
A_CALLPROC(NL(HLEAASP_skipspaces),(),((NL(HLEAASP_skipspaces)).nonlocals));
} 
 /* line 1871: */
 /* line 1872: */
if ( !WYAAASP_elem((*NL(VKEAASP_k)), FZAAASP_radix10digit) )
{ 
 /* line 1873: */
A_CALLPROC(NL(YKEAASP_mendchar),(FZAAASP_radix10digit, '0'),(FZAAASP_radix10digit, '0',(NL(YKEAASP_mendchar)).nonlocals));
} 
 /* line 1875: */
MMEAASP_j = (A68_SINT )ZBBAASP_chardig((*NL(VKEAASP_k)));
 /* line 1877: */
for ( ;; )
{ 
 /* line 1878: */
(*NL(VKEAASP_k)) = ITDAASP_getchar(NL(F));
 /* line 1879: */
 /* line 1880: */
if ( !WYAAASP_elem((*NL(VKEAASP_k)), FZAAASP_radix10digit) )
{ 
ATDAASP_backch(NL(F), (*NL(VKEAASP_k)));
 /* line 1881: */
NMEAASP = A68_FALSE;
} 
else
{ 
if ( KMEAASP_ok )
{ 
KMEAASP_ok = ZABAASP_add((&MMEAASP_j), ZBBAASP_chardig((*NL(VKEAASP_k))));
} 
 /* line 1882: */
 /* line 1883: */
NMEAASP = A68_TRUE;
} 
OMEAASP = NMEAASP;
if ( !OMEAASP ) break;
/*SKIP*/;
}
 /* line 1885: */
if ( KMEAASP_ok )
{ 
if ( LMEAASP_neg )
{ 
PMEAASP = (-MMEAASP_j);
} 
else
{ 
PMEAASP = MMEAASP_j;
} 
(*I) = PMEAASP;
} 
 /* line 1886: */
 /* line 1887: */
QMEAASP = KMEAASP_ok;
} 
A_PROC_EXIT(readshortinteger);
return( QMEAASP );
} 
#undef NL

A_STATIC A68_BOOL  TMEAASP_readshortshortinteger(A68_SSINT * I, void *NonLocals)
#define NL(x) (((UMEAASP_readshortshortinteger *)NonLocals)->x)
{ 
A68_BOOL  VMEAASP_ok;
A68_BOOL  WMEAASP_neg;
A68_SSINT  XMEAASP_j;
A68_BOOL  YMEAASP;  /* clause result */
A68_BOOL  ZMEAASP;  /* clause result */
A68_SSINT  ANEAASP;  /* clause result */
A68_BOOL  BNEAASP;  /* clause result */
A_PROC_ENTRY(readshortshortinteger);
 /* line 1890: */
 /* line 1891: */
{ 
VMEAASP_ok = A68_TRUE;
WMEAASP_neg = ((*NL(VKEAASP_k))=='-');
 /* line 1892: */
if ( (WMEAASP_neg|((*NL(VKEAASP_k))=='+')) )
{ 
A_CALLPROC(NL(HLEAASP_skipspaces),(),((NL(HLEAASP_skipspaces)).nonlocals));
} 
 /* line 1893: */
 /* line 1894: */
if ( !WYAAASP_elem((*NL(VKEAASP_k)), FZAAASP_radix10digit) )
{ 
 /* line 1895: */
A_CALLPROC(NL(YKEAASP_mendchar),(FZAAASP_radix10digit, '0'),(FZAAASP_radix10digit, '0',(NL(YKEAASP_mendchar)).nonlocals));
} 
 /* line 1897: */
XMEAASP_j = (A68_SSINT )(A68_SINT )ZBBAASP_chardig((*NL(VKEAASP_k)));
 /* line 1899: */
for ( ;; )
{ 
 /* line 1900: */
(*NL(VKEAASP_k)) = ITDAASP_getchar(NL(F));
 /* line 1901: */
 /* line 1902: */
if ( !WYAAASP_elem((*NL(VKEAASP_k)), FZAAASP_radix10digit) )
{ 
ATDAASP_backch(NL(F), (*NL(VKEAASP_k)));
 /* line 1903: */
YMEAASP = A68_FALSE;
} 
else
{ 
if ( VMEAASP_ok )
{ 
VMEAASP_ok = DBBAASP_add((&XMEAASP_j), ZBBAASP_chardig((*NL(VKEAASP_k))));
} 
 /* line 1904: */
 /* line 1905: */
YMEAASP = A68_TRUE;
} 
ZMEAASP = YMEAASP;
if ( !ZMEAASP ) break;
/*SKIP*/;
}
 /* line 1907: */
if ( VMEAASP_ok )
{ 
if ( WMEAASP_neg )
{ 
ANEAASP = (-XMEAASP_j);
} 
else
{ 
ANEAASP = XMEAASP_j;
} 
(*I) = ANEAASP;
} 
 /* line 1908: */
 /* line 1909: */
BNEAASP = VMEAASP_ok;
} 
A_PROC_EXIT(readshortshortinteger);
return( BNEAASP );
} 
#undef NL

A_STATIC A68_BOOL  ENEAASP_readlreal(A68_190  R, void *NonLocals)
#define NL(x) (((FNEAASP_readlreal *)NonLocals)->x)
{ 
A68_BOOL  GNEAASP_ok;
A68_BOOL  HNEAASP_neg;
A68_INT  INEAASP_lrw;
A68_33  KNEAASP_generator;   /* proc value of non-global proc */
A68_RC  QNEAASP;  /* avoid structure result */
A68_RC  PNEAASP_s;
A68_INT  RNEAASP_index;
A68_INT  SNEAASP_exp;
A68_BOOL  TNEAASP_sig;
A68_297  VNEAASP_readdigits;   /* proc value of non-global proc */
A68_INT  EOEAASP_e;
A68_BOOL  FOEAASP;  /* clause result */
A68_RC  GOEAASP;  /* OPERATORS - trim index */
A_PROC_ENTRY(readlreal);
 /* line 1912: */
 /* line 1913: */
{ 
GNEAASP_ok = A68_TRUE;
HNEAASP_neg = ((*NL(VKEAASP_k))=='-');
INEAASP_lrw = SCBAASP_rrealwidth(R);
 /* line 1914: */
if ( (HNEAASP_neg|((*NL(VKEAASP_k))=='+')) )
{ 
A_CALLPROC(NL(HLEAASP_skipspaces),(),((NL(HLEAASP_skipspaces)).nonlocals));
} 
 /* line 1915: */
A_CLOSURE( KNEAASP_generator, LNEAASP_generator, MNEAASP_generator );
(( MNEAASP_generator * ) ( KNEAASP_generator.nonlocals )) -> INEAASP_lrw = INEAASP_lrw;
A_CALLPROC(KNEAASP_generator,(A68_TRUE, &QNEAASP),(A68_TRUE, &QNEAASP,(KNEAASP_generator).nonlocals));
PNEAASP_s = QNEAASP;
RNEAASP_index = (-1);
SNEAASP_exp = 0;
 /* line 1916: */
TNEAASP_sig = A68_FALSE;
 /* line 1918: */
A_CLOSURE( VNEAASP_readdigits, WNEAASP_readdigits, XNEAASP_readdigits );
(( XNEAASP_readdigits * ) ( VNEAASP_readdigits.nonlocals )) -> VKEAASP_k = NL(VKEAASP_k);
(( XNEAASP_readdigits * ) ( VNEAASP_readdigits.nonlocals )) -> YKEAASP_mendchar = NL(YKEAASP_mendchar);
(( XNEAASP_readdigits * ) ( VNEAASP_readdigits.nonlocals )) -> TNEAASP_sig = (&TNEAASP_sig);
(( XNEAASP_readdigits * ) ( VNEAASP_readdigits.nonlocals )) -> RNEAASP_index = (&RNEAASP_index);
(( XNEAASP_readdigits * ) ( VNEAASP_readdigits.nonlocals )) -> INEAASP_lrw = INEAASP_lrw;
(( XNEAASP_readdigits * ) ( VNEAASP_readdigits.nonlocals )) -> PNEAASP_s = PNEAASP_s;
(( XNEAASP_readdigits * ) ( VNEAASP_readdigits.nonlocals )) -> SNEAASP_exp = (&SNEAASP_exp);
(( XNEAASP_readdigits * ) ( VNEAASP_readdigits.nonlocals )) -> F = NL(F);
 /* line 1940: */
if ( ((*NL(VKEAASP_k))!='.') )
{ 
A_CALLPROC(VNEAASP_readdigits,(A68_FALSE),(A68_FALSE,(VNEAASP_readdigits).nonlocals));
} 
 /* line 1941: */
 /* line 1942: */
if ( ((*NL(VKEAASP_k))=='.') )
{ 
(*NL(VKEAASP_k)) = ITDAASP_getchar(NL(F));
 /* line 1943: */
A_CALLPROC(VNEAASP_readdigits,(A68_TRUE),(A68_TRUE,(VNEAASP_readdigits).nonlocals));
} 
 /* line 1945: */
 /* line 1946: */
 /* line 1947: */
if ( WYAAASP_elem((*NL(VKEAASP_k)), PZAAASP_timestentothepower) )
{ 
A_CALLPROC(NL(HLEAASP_skipspaces),(),((NL(HLEAASP_skipspaces)).nonlocals));
GNEAASP_ok = A_CALLPROC(NL(WLEAASP_readinteger),((&EOEAASP_e)),((&EOEAASP_e),(NL(WLEAASP_readinteger)).nonlocals));
 /* line 1948: */
 /* line 1949: */
if ( GNEAASP_ok = (GNEAASP_ok&((A_SIGN(EOEAASP_e)!=A_SIGN(SNEAASP_exp))|(A_ABS(EOEAASP_e)<=(DBAAASP_maxint-A_ABS(SNEAASP_exp))))) )
{ 
 /* line 1950: */
 /* line 1951: */
SNEAASP_exp+=EOEAASP_e;
} 
} 
else
{ 
 /* line 1952: */
ATDAASP_backch(NL(F), (*NL(VKEAASP_k)));
} 
 /* line 1954: */
if ( !GNEAASP_ok )
{ 
 /* line 1955: */
FOEAASP = A68_FALSE;
} 
else
{ 
 /* line 1956: */
 /* line 1957: */
FOEAASP = JBBAASP_stringtolreal(A_R1TRIM(GOEAASP,(PNEAASP_s),A_RTSCRIPT(&(GOEAASP.dim[0]),&((PNEAASP_s).dim[0]),(PNEAASP_s).dim[0].lwb,RNEAASP_index,1)), SNEAASP_exp, HNEAASP_neg, R);
} 
} 
A_PROC_EXIT(readlreal);
return( FOEAASP );
} 
#undef NL

A_STATIC A68_VOID  KREAASP_generator(A68_BOOL  IREAASP_anonymous, A68_299  *ReturnedValue, void *NonLocals)
#define NL(x) (((LREAASP_generator *)NonLocals)->x)
{ 
A68_299  MREAASP;  /* clause result */
A68_299  NREAASP;  /* OPERATORS - dynamic generator */
{ 
NREAASP.upb = UTAAASP_longbitswidth ;
( IREAASP_anonymous? A_VLOC(A68_BOOL ,NREAASP): A_VHEAP(A68_BOOL ,NREAASP) );
MREAASP = NREAASP;
} 
*ReturnedValue = (MREAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  XREAASP_generator(A68_BOOL  VREAASP_anonymous, A68_299  *ReturnedValue, void *NonLocals)
#define NL(x) (((YREAASP_generator *)NonLocals)->x)
{ 
A68_299  ZREAASP;  /* clause result */
A68_299  ASEAASP;  /* OPERATORS - dynamic generator */
{ 
ASEAASP.upb = VTAAASP_bitswidth ;
( VREAASP_anonymous? A_VLOC(A68_BOOL ,ASEAASP): A_VHEAP(A68_BOOL ,ASEAASP) );
ZREAASP = ASEAASP;
} 
*ReturnedValue = (ZREAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  KSEAASP_generator(A68_BOOL  ISEAASP_anonymous, A68_299  *ReturnedValue, void *NonLocals)
#define NL(x) (((LSEAASP_generator *)NonLocals)->x)
{ 
A68_299  MSEAASP;  /* clause result */
A68_299  NSEAASP;  /* OPERATORS - dynamic generator */
{ 
NSEAASP.upb = WTAAASP_shortbitswidth ;
( ISEAASP_anonymous? A_VLOC(A68_BOOL ,NSEAASP): A_VHEAP(A68_BOOL ,NSEAASP) );
MSEAASP = NSEAASP;
} 
*ReturnedValue = (MSEAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  XSEAASP_generator(A68_BOOL  VSEAASP_anonymous, A68_299  *ReturnedValue, void *NonLocals)
#define NL(x) (((YSEAASP_generator *)NonLocals)->x)
{ 
A68_299  ZSEAASP;  /* clause result */
A68_299  ATEAASP;  /* OPERATORS - dynamic generator */
{ 
ATEAASP.upb = XTAAASP_shortshortbitswidth ;
( VSEAASP_anonymous? A_VLOC(A68_BOOL ,ATEAASP): A_VHEAP(A68_BOOL ,ATEAASP) );
ZSEAASP = ATEAASP;
} 
*ReturnedValue = (ZSEAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  OUEAASP_generator(A68_BOOL  MUEAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PUEAASP_generator *)NonLocals)->x)
{ 
A68_RC  QUEAASP;  /* clause result */
A68_RC  RUEAASP;  /* OPERATORS - dynamic generator */
{ 
RUEAASP.dim[0].upb = 256 ;
RUEAASP.dim[0].lwb = 1 ;
A_1INITSTRIDES(RUEAASP) ;
( MUEAASP_anonymous? A_R1LOC(A68_CHAR ,RUEAASP): A_R1HEAP(A68_CHAR ,RUEAASP) );
QUEAASP = RUEAASP;
} 
*ReturnedValue = (QUEAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  ZUEAASP_generator(A68_BOOL  XUEAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((AVEAASP_generator *)NonLocals)->x)
{ 
A68_RC  BVEAASP;  /* clause result */
A68_RC  CVEAASP;  /* OPERATORS - dynamic generator */
{ 
CVEAASP.dim[0].upb = (2*(*NL(SUEAASP_s)).dim[0].upb) ;
CVEAASP.dim[0].lwb = 1 ;
A_1INITSTRIDES(CVEAASP) ;
( XUEAASP_anonymous? A_R1LOC(A68_CHAR ,CVEAASP): A_R1HEAP(A68_CHAR ,CVEAASP) );
BVEAASP = CVEAASP;
} 
*ReturnedValue = (BVEAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  GDFAASP_generator(A68_BOOL  EDFAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HDFAASP_generator *)NonLocals)->x)
{ 
A68_RC  IDFAASP;  /* clause result */
A68_RC  JDFAASP;  /* OPERATORS - dynamic generator */
{ 
JDFAASP.dim[0].upb = 256 ;
JDFAASP.dim[0].lwb = 1 ;
A_1INITSTRIDES(JDFAASP) ;
( EDFAASP_anonymous? A_R1LOC(A68_CHAR ,JDFAASP): A_R1HEAP(A68_CHAR ,JDFAASP) );
IDFAASP = JDFAASP;
} 
*ReturnedValue = (IDFAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  SDFAASP_generator(A68_BOOL  QDFAASP_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TDFAASP_generator *)NonLocals)->x)
{ 
A68_RC  UDFAASP;  /* clause result */
A68_RC  VDFAASP;  /* OPERATORS - dynamic generator */
{ 
VDFAASP.dim[0].upb = (2*(*NL(KDFAASP_rc)).dim[0].upb) ;
VDFAASP.dim[0].lwb = 1 ;
A_1INITSTRIDES(VDFAASP) ;
( QDFAASP_anonymous? A_R1LOC(A68_CHAR ,VDFAASP): A_R1HEAP(A68_CHAR ,VDFAASP) );
UDFAASP = VDFAASP;
} 
*ReturnedValue = (UDFAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  NFFAASP_generator(A68_BOOL  LFFAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OFFAASP_generator *)NonLocals)->x)
{ 
A68_VC  PFFAASP;  /* clause result */
A68_VC  QFFAASP;  /* OPERATORS - dynamic generator */
{ 
QFFAASP.upb = 8 ;
( LFFAASP_anonymous? A_VLOC(A68_CHAR ,QFFAASP): A_VHEAP(A68_CHAR ,QFFAASP) );
PFFAASP = QFFAASP;
} 
*ReturnedValue = (PFFAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  ZFFAASP_generator(A68_BOOL  XFFAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((AGFAASP_generator *)NonLocals)->x)
{ 
A68_VC  BGFAASP;  /* clause result */
A68_VC  CGFAASP;  /* OPERATORS - dynamic generator */
{ 
CGFAASP.upb = 8 ;
( XFFAASP_anonymous? A_VLOC(A68_CHAR ,CGFAASP): A_VHEAP(A68_CHAR ,CGFAASP) );
BGFAASP = CGFAASP;
} 
*ReturnedValue = (BGFAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  JGFAASP_generator(A68_BOOL  HGFAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KGFAASP_generator *)NonLocals)->x)
{ 
A68_VC  LGFAASP;  /* clause result */
A68_VC  MGFAASP;  /* OPERATORS - dynamic generator */
{ 
MGFAASP.upb = 4 ;
( HGFAASP_anonymous? A_VLOC(A68_CHAR ,MGFAASP): A_VHEAP(A68_CHAR ,MGFAASP) );
LGFAASP = MGFAASP;
} 
*ReturnedValue = (LGFAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  VGFAASP_generator(A68_BOOL  TGFAASP_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WGFAASP_generator *)NonLocals)->x)
{ 
A68_VC  XGFAASP;  /* clause result */
A68_VC  YGFAASP;  /* OPERATORS - dynamic generator */
{ 
YGFAASP.upb = 4 ;
( TGFAASP_anonymous? A_VLOC(A68_CHAR ,YGFAASP): A_VHEAP(A68_CHAR ,YGFAASP) );
XGFAASP = YGFAASP;
} 
*ReturnedValue = (XGFAASP);
return;
} 
#undef NL

A68_VOID  SVBAASP_set_gc_params(A68_206  Gcparams)
{ 
A68_37  TVBAASP_p;
A68_37 * UVBAASP;  /* forall control - []x */
A68_INT  VVBAASP;  /* forall loop counter */
A68_VC  YVBAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BWBAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(set_gc_params);
 /* line 69: */
 /* line 70: */
VVBAASP = Gcparams.upb -1;
UVBAASP = Gcparams.data;
for (;VVBAASP-- >= 0;
(UVBAASP++
) )
{
TVBAASP_p = *UVBAASP;
 /* line 71: */
 /* line 72: */
if ( (GEAAASP_gc_param(A_VC_PLUS(A_VC_PLUS(XVBAASP,TVBAASP_p.Name),A_HVEC(YVBAASP,XUAAASP_nulch,A68_CHAR )), TVBAASP_p.Value)!=TVBAASP_p.Value) )
{ 
 /* line 73: */
 /* line 74: */
 /* line 75: */
UFAAASP_posixwrite(2, A_VC_PLUS(A_VC_PLUS(AWBAASP,TVBAASP_p.Name),A_HVEC(BWBAASP,TUAAASP_lf,A68_CHAR )), (23+TVBAASP_p.Name.upb));
} 
}
A_PROC_EXIT(set_gc_params);
return;
} 
#undef NL

A68_INT  DWBAASP_get_gc_param(A68_VC  Name)
{ 
A68_VC  GWBAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  HWBAASP_value;
A68_VC  KWBAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LWBAASP;  /* clause result */
A_PROC_ENTRY(get_gc_param);
 /* line 78: */
 /* line 79: */
{ 
HWBAASP_value = GEAAASP_gc_param(A_VC_PLUS(A_VC_PLUS(FWBAASP,Name),A_HVEC(GWBAASP,XUAAASP_nulch,A68_CHAR )), 0);
 /* line 80: */
 /* line 81: */
if ( (HWBAASP_value==(-1)) )
{ 
 /* line 82: */
UFAAASP_posixwrite(2, A_VC_PLUS(A_VC_PLUS(JWBAASP,Name),A_HVEC(KWBAASP,TUAAASP_lf,A68_CHAR )), (22+Name.upb));
} 
 /* line 83: */
 /* line 84: */
LWBAASP = HWBAASP_value;
} 
A_PROC_EXIT(get_gc_param);
return( LWBAASP );
} 
#undef NL

A68_VOID  MWBAASP_disable_garbage_collector(void)
{ 
A68_37  PWBAASP;  /* collateral clause result */
A68_206  SWBAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(disable_garbage_collector);
{ 
QVBAASP_savedpolicy = DWBAASP_get_gc_param(OWBAASP);
 /* line 89: */
PWBAASP.Name = RWBAASP;
PWBAASP.Value = JEAAASP_alwaysgrowheap;
 /* line 90: */
SVBAASP_set_gc_params(A_HVEC(SWBAASP,PWBAASP,A68_37 ));
} 
A_PROC_EXIT(disable_garbage_collector);
return;
} 
#undef NL

A68_VOID  TWBAASP_enable_garbage_collector(void)
{ 
A68_37  UWBAASP;  /* collateral clause result */
A68_206  XWBAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(enable_garbage_collector);
UWBAASP.Name = WWBAASP;
UWBAASP.Value = QVBAASP_savedpolicy;
SVBAASP_set_gc_params(A_HVEC(XWBAASP,UWBAASP,A68_37 ));
A_PROC_EXIT(enable_garbage_collector);
return;
} 
#undef NL

A68_VOID  ZWBAASP_exit(A68_INT  N)
{ 
A_PROC_ENTRY(exit);
HFAAASP_posixexit(N);
A_PROC_EXIT(exit);
return;
} 
#undef NL

A68_INT  BXBAASP_atexit(A68_85  P)
{ 
A68_INT  CXBAASP;  /* clause result */
union {  /* BIOP 99 */
A68_85   source;
A68_39   destination;
} DXBAASP; 
A_PROC_ENTRY(atexit);
DXBAASP.source = P ;
CXBAASP = BFAAASP_isoatexit((DXBAASP.destination).Cp);
A_PROC_EXIT(atexit);
return( CXBAASP );
} 
#undef NL

A68_INT  GXBAASP_onexit(A68_129  P, A68_RC  Arg)
{ 
A68_INT  HXBAASP;  /* clause result */
A68_VC  IXBAASP;  /* avoid structure result */
A68_VC  JXBAASP;  /* avoid structure result */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_35 *  destination;
} KXBAASP; 
union {  /* BIOP 99 */
A68_129   source;
A68_39   destination;
} LXBAASP; 
A_PROC_ENTRY(onexit);
 /* line 102: */
DJAAASP_makervc( Arg, &IXBAASP );
SMAAASP_z( IXBAASP, &JXBAASP );
KXBAASP.source = ZJAAASP_vctocharptr(JXBAASP) ;
LXBAASP.source = P ;
HXBAASP = CFAAASP_linuxonexit((LXBAASP.destination).Cp, (KXBAASP.destination));
A_PROC_EXIT(onexit);
return( HXBAASP );
} 
#undef NL

A68_VOID  MXBAASP_stop(void)
{ 
A_PROC_ENTRY(stop);
ZWBAASP_exit(0);
A_PROC_EXIT(stop);
return;
} 
#undef NL

A68_VOID  PXBAASP_onsignal(A68_INT  Sig, A68_101  Handler)
{ 
union {  /* BIOP 99 */
A68_101   source;
A68_39   destination;
} QXBAASP; 
A_PROC_ENTRY(onsignal);
 /* line 109: */
QXBAASP.source = Handler ;
MEAAASP_ansisignal(Sig, (QXBAASP.destination).Cp);
A_PROC_EXIT(onsignal);
return;
} 
#undef NL

A68_LBITS  SXBAASP_longbitspack(A68_64  Vb)
{ 
A68_LBITS  TXBAASP_t;
A68_INT  UXBAASP_i;
A68_INT  VXBAASP;  /* to part of loop */
A68_INT  WXBAASP;  /* SHL */
A68_LBITS  XXBAASP;  /* clause result */
A_PROC_ENTRY(longbitspack);
 /* line 114: */
 /* line 115: */
{ 
TXBAASP_t = 0X0U;
 /* line 116: */
 /* line 117: */
VXBAASP = XNAAASP_min(UTAAASP_longbitswidth, Vb.dim[0].upb);
for ( UXBAASP_i = Vb.dim[0].lwb;
UXBAASP_i <= VXBAASP;
UXBAASP_i += 1 )
{ 
 /* line 118: */
 /* line 119: */
WXBAASP = 1 ;
TXBAASP_t = (A68_LBITS )(A_SHL(TXBAASP_t,WXBAASP)|(A68_LBITS )(A68_BITS )(A_R1INDEX(Vb,UXBAASP_i)));
}
 /* line 120: */
 /* line 121: */
XXBAASP = TXBAASP_t;
} 
A_PROC_EXIT(longbitspack);
return( XXBAASP );
} 
#undef NL

A68_BITS  ZXBAASP_bitspack(A68_64  Vb)
{ 
A68_BITS  AYBAASP_t;
A68_INT  BYBAASP_i;
A68_INT  CYBAASP;  /* to part of loop */
A68_INT  DYBAASP;  /* SHL */
A68_BITS  EYBAASP;  /* clause result */
A_PROC_ENTRY(bitspack);
 /* line 124: */
 /* line 125: */
{ 
AYBAASP_t = 0X0U;
 /* line 126: */
 /* line 127: */
CYBAASP = XNAAASP_min(VTAAASP_bitswidth, Vb.dim[0].upb);
for ( BYBAASP_i = Vb.dim[0].lwb;
BYBAASP_i <= CYBAASP;
BYBAASP_i += 1 )
{ 
 /* line 128: */
 /* line 129: */
DYBAASP = 1 ;
AYBAASP_t = (A68_BITS )(A_SHL(AYBAASP_t,DYBAASP)|(A68_BITS )(A_R1INDEX(Vb,BYBAASP_i)));
}
 /* line 130: */
 /* line 131: */
EYBAASP = AYBAASP_t;
} 
A_PROC_EXIT(bitspack);
return( EYBAASP );
} 
#undef NL

A68_SBITS  GYBAASP_shortbitspack(A68_64  Vb)
{ 
A68_SBITS  HYBAASP_t;
A68_INT  IYBAASP_i;
A68_INT  JYBAASP;  /* to part of loop */
A68_INT  KYBAASP;  /* SHL */
A68_SBITS  LYBAASP;  /* clause result */
A_PROC_ENTRY(shortbitspack);
 /* line 134: */
 /* line 135: */
{ 
HYBAASP_t = 0X0U;
 /* line 136: */
 /* line 137: */
JYBAASP = XNAAASP_min(WTAAASP_shortbitswidth, Vb.dim[0].upb);
for ( IYBAASP_i = Vb.dim[0].lwb;
IYBAASP_i <= JYBAASP;
IYBAASP_i += 1 )
{ 
 /* line 138: */
 /* line 139: */
KYBAASP = 1 ;
HYBAASP_t = (A68_SBITS )(A_SHL(HYBAASP_t,KYBAASP)|(A68_SBITS )(A68_BITS )(A_R1INDEX(Vb,IYBAASP_i)));
}
 /* line 140: */
 /* line 141: */
LYBAASP = HYBAASP_t;
} 
A_PROC_EXIT(shortbitspack);
return( LYBAASP );
} 
#undef NL

A68_SSBITS  NYBAASP_shortshortbitspack(A68_64  Vb)
{ 
A68_SSBITS  OYBAASP_t;
A68_INT  PYBAASP_i;
A68_INT  QYBAASP;  /* to part of loop */
A68_INT  RYBAASP;  /* SHL */
A68_SSBITS  SYBAASP;  /* clause result */
A_PROC_ENTRY(shortshortbitspack);
 /* line 144: */
 /* line 145: */
{ 
OYBAASP_t = 0X0U;
 /* line 146: */
 /* line 147: */
QYBAASP = XNAAASP_min(XTAAASP_shortshortbitswidth, Vb.dim[0].upb);
for ( PYBAASP_i = Vb.dim[0].lwb;
PYBAASP_i <= QYBAASP;
PYBAASP_i += 1 )
{ 
 /* line 148: */
 /* line 149: */
RYBAASP = 1 ;
OYBAASP_t = (A68_SSBITS )(A_SHL(OYBAASP_t,RYBAASP)|(A68_SSBITS )(A68_SBITS )(A68_BITS )(A_R1INDEX(Vb,PYBAASP_i)));
}
 /* line 150: */
 /* line 151: */
SYBAASP = OYBAASP_t;
} 
A_PROC_EXIT(shortshortbitspack);
return( SYBAASP );
} 
#undef NL

A_STATIC A68_VOID  UYBAASP_concat(A68_218  Strs, A68_VC  *ReturnedValue)
{ 
A68_INT  VYBAASP_len;
A68_INT  WYBAASP_i;
A68_INT  XYBAASP;  /* to part of loop */
A68_34  ZYBAASP_generator;   /* proc value of non-global proc */
A68_VC  EZBAASP;  /* avoid structure result */
A68_VC  FZBAASP_y;
A68_INT  GZBAASP_i;
A68_INT  HZBAASP;  /* to part of loop */
A68_VC  IZBAASP_str;
A68_INT  JZBAASP_lwb;
A68_INT  KZBAASP_upb;
A68_VC  LZBAASP;  /* OPERATORS - trim index */
A68_VC  MZBAASP;  /* YIELD */
A68_INT  NZBAASP;  /* YIELD */
A68_CHAR * OZBAASP;  /* YIELD */
A68_VC  PZBAASP;  /* clause result */
A_PROC_ENTRY(concat);
 /* line 156: */
 /* line 157: */
{ 
VYBAASP_len = 0;
 /* line 158: */
 /* line 159: */
XYBAASP = Strs.upb;
for ( WYBAASP_i = 1;
WYBAASP_i <= XYBAASP;
WYBAASP_i += 1 )
{ 
 /* line 160: */
 /* line 161: */
VYBAASP_len+=A_VINDEX(Strs,WYBAASP_i).upb;
}
 /* line 162: */
A_CLOSURE( ZYBAASP_generator, AZBAASP_generator, BZBAASP_generator );
(( BZBAASP_generator * ) ( ZYBAASP_generator.nonlocals )) -> VYBAASP_len = (&VYBAASP_len);
A_CALLPROC(ZYBAASP_generator,(A68_FALSE, &EZBAASP),(A68_FALSE, &EZBAASP,(ZYBAASP_generator).nonlocals));
FZBAASP_y = EZBAASP;
 /* line 163: */
VYBAASP_len = 0;
 /* line 164: */
 /* line 165: */
HZBAASP = Strs.upb;
for ( GZBAASP_i = 1;
GZBAASP_i <= HZBAASP;
GZBAASP_i += 1 )
{ 
 /* line 166: */
IZBAASP_str = A_VINDEX(Strs,GZBAASP_i);
 /* line 167: */
JZBAASP_lwb = (VYBAASP_len+1);
KZBAASP_upb = (VYBAASP_len+IZBAASP_str.upb);
VYBAASP_len+=IZBAASP_str.upb;
 /* line 168: */
 /* line 169: */
MZBAASP = A_VTRIM(LZBAASP,(FZBAASP_y),A_VTSCRIPT(&(LZBAASP.upb),(FZBAASP_y).upb,JZBAASP_lwb,KZBAASP_upb)) ;
A_VASSIGN2(IZBAASP_str,MZBAASP,A68_CHAR );
}
 /* line 170: */
NZBAASP = FZBAASP_y.upb ;
OZBAASP = (&A_VINDEX(FZBAASP_y,NZBAASP)) ;
(*OZBAASP) = PUAAASP_nullcharacter;
 /* line 171: */
 /* line 172: */
PZBAASP = FZBAASP_y;
} 
A_PROC_EXIT(concat);
*ReturnedValue = (PZBAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  XZBAASP_commandline(A68_VC  *ReturnedValue)
{ 
A68_VC  YZBAASP;  /* clause result */
A68_VC  ZZBAASP;  /* avoid structure result */
A68_INT  AACAASP;  /* yield of code insert */
A68_VC  BACAASP;  /* OPERATORS - nil -> mode */
A68_218  GACAASP;  /* avoid structure result */
A68_36 * HACAASP;  /* yield of code insert */
A68_36 * IACAASP;  /* yield of code insert */
A68_INT  JACAASP_a;
A68_INT  KACAASP;  /* to part of loop */
A68_VC  LACAASP;  /* clause result */
A68_VC  MACAASP;  /* avoid structure result */
A68_222  NACAASP;  /* OPERATORS - istruct -> vector */
A68_222  OACAASP;  /* OPERATORS - simple index */
A68_INT  PACAASP;  /* YIELD */
A68_VC  QACAASP;  /* avoid structure result */
A68_VC  RACAASP;  /* avoid structure result */
A68_VC * SACAASP;  /* YIELD */
A68_VC  TACAASP;  /* avoid structure result */
A_PROC_ENTRY(commandline);
if ( VZBAASP_args_initialised )
{ 
 /* line 196: */
UYBAASP_concat( WZBAASP_arguments, &ZZBAASP );
YZBAASP = ZZBAASP;
} 
else
{ 
#define RESULT AACAASP
{RESULT=A_argc;
}
#undef RESULT
 /* line 197: */
 /* line 198: */
if ( ((SZBAASP_argc = AACAASP)==0) )
{ 
 /* line 199: */
YZBAASP = A_VVAC(BACAASP);
} 
else
{ 
DACAASP_generator( A68_FALSE, &GACAASP );
WZBAASP_arguments = GACAASP;
 /* line 201: */
#define RESULT HACAASP
{RESULT=(void *)A_argv;
}
#undef RESULT
TZBAASP_argv = HACAASP;
 /* line 202: */
#define RESULT IACAASP
{RESULT=(void *)A_envp;
}
#undef RESULT
UZBAASP_envp = IACAASP;
 /* line 204: */
 /* line 205: */
KACAASP = WZBAASP_arguments.upb;
for ( JACAASP_a = 1;
JACAASP_a <= KACAASP;
JACAASP_a += 1 )
{ 
 /* line 206: */
 /* line 207: */
 /* line 208: */
if ( !(JACAASP_a & 1) )
{ 
HIAAASP_makervc( NUAAASP_blank, &MACAASP );
LACAASP = MACAASP;
} 
else
{ 
 /* line 209: */
 /* line 210: */
OACAASP = A_ISVEC(NACAASP,TZBAASP_argv,16000000,A68_35 *) ;
PACAASP = ((JACAASP_a+1)/2) ;
SJAAASP_cstrtorvc( (*(&A_VINDEX(OACAASP,PACAASP))), &QACAASP );
TIAAASP_makervc( QACAASP, &RACAASP );
LACAASP = RACAASP;
} 
SACAASP = (&A_VINDEX(WZBAASP_arguments,JACAASP_a)) ;
(*SACAASP) = LACAASP;
}
 /* line 211: */
VZBAASP_args_initialised = A68_TRUE;
 /* line 212: */
 /* line 213: */
UYBAASP_concat( WZBAASP_arguments, &TACAASP );
YZBAASP = TACAASP;
} 
} 
A_PROC_EXIT(commandline);
*ReturnedValue = (YZBAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  YACAASP_newfilebuffer(A68_INT  Mtu, A68_44  *ReturnedValue)
{ 
A68_44  ZACAASP;  /* clause result */
A68_44  ABCAASP;  /* collateral clause result */
A68_VC  BBCAASP;  /* avoid structure result */
A_PROC_ENTRY(newfilebuffer);
 /* line 220: */
 /* line 221: */
 /* line 222: */
if ( (Mtu==0) )
{ 
ZACAASP = WACAASP_nobuffer;
} 
else
{ 
OQAAASP_sysbuff( Mtu, &BBCAASP );
ABCAASP.Start = BBCAASP;
ABCAASP.Max = Mtu;
ABCAASP.Valid = 0;
ABCAASP.Pos = 0;
ABCAASP.Writeback = A68_FALSE;
 /* line 223: */
ABCAASP.Flushafterput = A68_FALSE;
ZACAASP = ABCAASP;
} 
A_PROC_EXIT(newfilebuffer);
*ReturnedValue = (ZACAASP);
return;
} 
#undef NL

A68_VOID  EBCAASP_errortext(A68_INT  E, A68_VC  *ReturnedValue)
{ 
A68_VC  FBCAASP;  /* clause result */
A68_VC  GBCAASP;  /* avoid structure result */
A_PROC_ENTRY(errortext);
SJAAASP_cstrtorvc( QFAAASP_posixstrerror(E), &GBCAASP );
FBCAASP = GBCAASP;
A_PROC_EXIT(errortext);
*ReturnedValue = (FBCAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  IBCAASP_systemerror(A68_56 * F)
{ 
A68_226  JBCAASP;  /* collateral clause result */
A68_VC  MBCAASP;  /* avoid structure result */
A68_VC  NBCAASP;  /* avoid structure result */
A68_VC  QBCAASP;  /* avoid structure result */
A68_VC  RBCAASP;  /* avoid structure result */
A68_218  SBCAASP;  /* OPERATORS - istruct -> vector */
A68_VC  TBCAASP;  /* avoid structure result */
A68_VC  UBCAASP_et;
A_PROC_ENTRY(systemerror);
 /* line 230: */
 /* line 231: */
{ 
 /* line 232: */
TIAAASP_makervc( LBCAASP, &MBCAASP );
JBCAASP.data[0] = MBCAASP;
 /* line 233: */
SJAAASP_cstrtorvc( QFAAASP_posixstrerror(FEAAASP_errno), &NBCAASP );
JBCAASP.data[1] = NBCAASP;
TIAAASP_makervc( PBCAASP, &QBCAASP );
JBCAASP.data[2] = QBCAASP;
JBCAASP.data[3] = (*(&((&(F->Book))->Idf)));
HIAAASP_makervc( TUAAASP_lf, &RBCAASP );
JBCAASP.data[4] = RBCAASP;
UYBAASP_concat( A_HISVEC(SBCAASP,JBCAASP,5,A68_VC ), &TBCAASP );
UBCAASP_et = TBCAASP;
 /* line 234: */
UFAAASP_posixwrite(2, UBCAASP_et, (UBCAASP_et.upb-1));
 /* line 235: */
 /* line 236: */
ZWBAASP_exit(FEAAASP_errno);
} 
A_PROC_EXIT(systemerror);
return;
} 
#undef NL

A_STATIC A68_VOID  JDCAASP_transputerror(A68_56 * F, A68_INT  Err)
{ 
A68_226  KDCAASP;  /* collateral clause result */
A68_VC  NDCAASP;  /* avoid structure result */
A68_INT  ODCAASP;  /* clause result */
A68_VC  PDCAASP;  /* avoid structure result */
A68_VC  SDCAASP;  /* avoid structure result */
A68_VC  TDCAASP;  /* avoid structure result */
A68_218  UDCAASP;  /* OPERATORS - istruct -> vector */
A68_VC  VDCAASP;  /* avoid structure result */
A68_VC  WDCAASP_et;
A_PROC_ENTRY(transputerror);
 /* line 266: */
 /* line 267: */
{ 
 /* line 268: */
TIAAASP_makervc( MDCAASP, &NDCAASP );
KDCAASP.data[0] = NDCAASP;
if ( (Err>246) )
{ 
ODCAASP = (256-Err);
} 
else
{ 
ODCAASP = 9;
} 
 /* line 269: */
DJAAASP_makervc( A_R1INDEX(GDCAASP_transerrtxt,ODCAASP), &PDCAASP );
KDCAASP.data[1] = PDCAASP;
TIAAASP_makervc( RDCAASP, &SDCAASP );
KDCAASP.data[2] = SDCAASP;
KDCAASP.data[3] = (*(&((&(F->Book))->Idf)));
HIAAASP_makervc( TUAAASP_lf, &TDCAASP );
KDCAASP.data[4] = TDCAASP;
UYBAASP_concat( A_HISVEC(UDCAASP,KDCAASP,5,A68_VC ), &VDCAASP );
WDCAASP_et = VDCAASP;
 /* line 270: */
UFAAASP_posixwrite(2, WDCAASP_et, (WDCAASP_et.upb-1));
 /* line 271: */
 /* line 272: */
ZWBAASP_exit(Err);
} 
A_PROC_EXIT(transputerror);
return;
} 
#undef NL

A68_BOOL  MECAASP_setpossible(A68_56 * F)
{ 
A68_BOOL  NECAASP;  /* clause result */
A_PROC_ENTRY(setpossible);
NECAASP = (*(&((&((&(F->Book))->Type))->Setpossible)));
A_PROC_EXIT(setpossible);
return( NECAASP );
} 
#undef NL

A68_BOOL  PECAASP_getpossible(A68_56 * F)
{ 
A68_BOOL  QECAASP;  /* clause result */
A_PROC_ENTRY(getpossible);
QECAASP = (*(&((&((&(F->Book))->Type))->Getpossible)));
A_PROC_EXIT(getpossible);
return( QECAASP );
} 
#undef NL

A68_BOOL  SECAASP_putpossible(A68_56 * F)
{ 
A68_BOOL  TECAASP;  /* clause result */
A_PROC_ENTRY(putpossible);
TECAASP = (*(&((&((&(F->Book))->Type))->Putpossible)));
A_PROC_EXIT(putpossible);
return( TECAASP );
} 
#undef NL

A68_BOOL  VECAASP_binpossible(A68_56 * F)
{ 
A68_BOOL  WECAASP;  /* clause result */
A_PROC_ENTRY(binpossible);
WECAASP = (*(&((&((&(F->Book))->Type))->Binpossible)));
A_PROC_EXIT(binpossible);
return( WECAASP );
} 
#undef NL

A68_BOOL  YECAASP_reidfpossible(A68_56 * F)
{ 
A68_BOOL  ZECAASP;  /* clause result */
A_PROC_ENTRY(reidfpossible);
ZECAASP = (*(&((&((&(F->Book))->Type))->Reidfpossible)));
A_PROC_EXIT(reidfpossible);
return( ZECAASP );
} 
#undef NL

A68_VOID  BFCAASP_idf(A68_56 * F, A68_VC  *ReturnedValue)
{ 
A68_VC  CFCAASP;  /* clause result */
A_PROC_ENTRY(idf);
CFCAASP = (*(&((&(F->Book))->Idf)));
A_PROC_EXIT(idf);
*ReturnedValue = (CFCAASP);
return;
} 
#undef NL

A68_VOID  FFCAASP_reidf(A68_56 * F, A68_RC  Newidf)
{ 
A68_BOOL  GFCAASP;  /* optbool result */
A68_VC  HFCAASP;  /* clause result */
A68_VC  IFCAASP;  /* avoid structure result */
A68_VC  JFCAASP;  /* OPERATORS - nil -> mode */
A68_VC * KFCAASP;  /* YIELD */
A_PROC_ENTRY(reidf);
 /* line 296: */
 /* line 297: */
 /* line 298: */
 /* line 300: */
GFCAASP = (*(&((&((&(F->Book))->Type))->Reidfpossible)));
if ( GFCAASP )
{GFCAASP = (*(&((&(F->State))->Opened)));
}
 /* line 301: */
if ( GFCAASP )
{ 
 /* line 302: */
DJAAASP_makervc( Newidf, &IFCAASP );
HFCAASP = IFCAASP;
} 
else
{ 
HFCAASP = A_VVAC(JFCAASP);
} 
KFCAASP = (&((&(F->Book))->Reidf)) ;
(*KFCAASP) = HFCAASP;
A_PROC_EXIT(reidf);
return;
} 
#undef NL

A68_INT  MFCAASP_currentpos(A68_56 * F)
{ 
A68_INT  NFCAASP;  /* clause result */
A_PROC_ENTRY(currentpos);
NFCAASP = (*(&((&(F->State))->Pos)));
A_PROC_EXIT(currentpos);
return( NFCAASP );
} 
#undef NL

A68_INT  PFCAASP_logicalend(A68_56 * F)
{ 
A68_INT  QFCAASP;  /* clause result */
A68_49  RFCAASP;  /* CALL */
A_PROC_ENTRY(logicalend);
RFCAASP = (*(&((&(F->Sys))->Logicalend))) ;
QFCAASP = A_CALLPROC(RFCAASP,(F),(F,(RFCAASP).nonlocals));
A_PROC_EXIT(logicalend);
return( QFCAASP );
} 
#undef NL
 /* line 309: */

A68_VOID  UFCAASP_onlogicalfileend(A68_56 * F, A68_59  P)
{ 
A68_59 * VFCAASP;  /* YIELD */
A_PROC_ENTRY(onlogicalfileend);
 /* line 310: */
VFCAASP = (&((&(F->Io))->Logicalfilemended)) ;
(*VFCAASP) = P;
A_PROC_EXIT(onlogicalfileend);
return;
} 
#undef NL
 /* line 313: */

A68_VOID  YFCAASP_onphysicalfileend(A68_56 * F, A68_59  P)
{ 
A68_59 * ZFCAASP;  /* YIELD */
A_PROC_ENTRY(onphysicalfileend);
 /* line 314: */
ZFCAASP = (&((&(F->Io))->Physicalfilemended)) ;
(*ZFCAASP) = P;
A_PROC_EXIT(onphysicalfileend);
return;
} 
#undef NL

A68_VOID  CGCAASP_onvalueerror(A68_56 * F, A68_59  P)
{ 
A68_59 * DGCAASP;  /* YIELD */
A_PROC_ENTRY(onvalueerror);
 /* line 317: */
DGCAASP = (&((&(F->Io))->Valueerrormended)) ;
(*DGCAASP) = P;
A_PROC_EXIT(onvalueerror);
return;
} 
#undef NL

A68_VOID  GGCAASP_oncharerror(A68_56 * F, A68_55  P)
{ 
A68_55 * HGCAASP;  /* YIELD */
A_PROC_ENTRY(oncharerror);
 /* line 320: */
HGCAASP = (&((&(F->Io))->Charerrormended)) ;
(*HGCAASP) = P;
A_PROC_EXIT(oncharerror);
return;
} 
#undef NL

A68_VOID  KGCAASP_maketerm(A68_56 * F, A68_RC  Term)
{ 
A68_RC  LGCAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_43 * MGCAASP;  /* YIELD */
A_PROC_ENTRY(maketerm);
 /* line 323: */
MGCAASP = (&((&(F->Io))->Stringterm)) ;
(*MGCAASP) = EYAAASP_stringtobag(A_RC_PLUS(A_HARR(LGCAASP,TUAAASP_lf,A68_CHAR ),Term));
A_PROC_EXIT(maketerm);
return;
} 
#undef NL

A_STATIC A68_VOID  OGCAASP_setreadmood(A68_56 * F)
{ 
A68_50  PGCAASP;  /* CALL */
A68_BOOL * QGCAASP;  /* YIELD */
A_PROC_ENTRY(setreadmood);
 /* line 326: */
 /* line 327: */
 /* line 328: */
if ( !(*(&((&(F->State))->Readmood))) )
{ 
PGCAASP = (*(&((&(F->Sys))->Flushbuffer))) ;
A_CALLPROC(PGCAASP,(F),(F,(PGCAASP).nonlocals));
 /* line 329: */
 /* line 330: */
QGCAASP = (&((&(F->State))->Readmood)) ;
(*QGCAASP) = A68_TRUE;
} 
A_PROC_EXIT(setreadmood);
return;
} 
#undef NL

A_STATIC A68_VOID  SGCAASP_setwritemood(A68_56 * F)
{ 
A68_50  TGCAASP;  /* CALL */
A68_BOOL * UGCAASP;  /* YIELD */
A_PROC_ENTRY(setwritemood);
 /* line 333: */
 /* line 334: */
 /* line 335: */
if ( (*(&((&(F->State))->Readmood))) )
{ 
TGCAASP = (*(&((&(F->Sys))->Flushbuffer))) ;
A_CALLPROC(TGCAASP,(F),(F,(TGCAASP).nonlocals));
 /* line 336: */
 /* line 337: */
UGCAASP = (&((&(F->State))->Readmood)) ;
(*UGCAASP) = A68_FALSE;
} 
A_PROC_EXIT(setwritemood);
return;
} 
#undef NL

A68_INT  BHCAASP_establish(A68_56 * F, A68_RC  Idf, A68_60  Chann, A68_INT  P, A68_INT  L, A68_INT  C)
{ 
A68_56  CHCAASP;  /* collateral clause result */
A68_VC  DHCAASP;  /* avoid structure result */
A68_VC  GHCAASP;  /* avoid structure result */
A68_48  HHCAASP;  /* CALL */
A68_INT  IHCAASP_r;
A68_BOOL * JHCAASP;  /* YIELD */
A68_INT  KHCAASP;  /* clause result */
A_PROC_ENTRY(establish);
 /* line 340: */
 /* line 341: */
{ 
DJAAASP_makervc( Idf, &DHCAASP );
CHCAASP.Book.Idf = DHCAASP;
TIAAASP_makervc( FHCAASP, &GHCAASP );
CHCAASP.Book.Reidf = GHCAASP;
 /* line 342: */
CHCAASP.Book.Type = Chann.Type;
CHCAASP.Sysfile = 0;
CHCAASP.Sys = Chann.Sys;
CHCAASP.Io = Chann.Defaultio;
CHCAASP.State = KECAASP_initclosedstate;
(*F) = CHCAASP;
 /* line 344: */
HHCAASP = Chann.Sys.Estab ;
IHCAASP_r = A_CALLPROC(HHCAASP,(F, P, L, C),(F, P, L, C,(HHCAASP).nonlocals));
JHCAASP = (&((&(F->State))->Opened)) ;
(*JHCAASP) = (IHCAASP_r==0);
 /* line 345: */
 /* line 346: */
KHCAASP = IHCAASP_r;
} 
A_PROC_EXIT(establish);
return( KHCAASP );
} 
#undef NL

A68_INT  OHCAASP_open(A68_56 * F, A68_246  Idf, A68_60  Chann)
{ 
A68_56  PHCAASP;  /* collateral clause result */
A68_246  QHCAASP;  /* united object - for case conformity */
A68_CHAR  RHCAASP_c;
A68_VC  SHCAASP;  /* avoid structure result */
A68_RC  THCAASP_s;
A68_VC  UHCAASP;  /* avoid structure result */
A68_VC  VHCAASP_r;
A68_VC  WHCAASP;  /* OPERATORS - nil -> mode */
A68_INT  XHCAASP_r;
A68_49  YHCAASP;  /* CALL */
A68_BOOL * ZHCAASP;  /* YIELD */
A68_INT  AICAASP;  /* clause result */
A_PROC_ENTRY(open);
 /* line 349: */
 /* line 350: */
{ 
QHCAASP = Idf ;
switch ( QHCAASP.mode )
{ 
case 1: /* CHAR */
RHCAASP_c = (QHCAASP.data.mode1);
 /* line 351: */
HIAAASP_makervc( RHCAASP_c, &SHCAASP );
PHCAASP.Book.Idf = SHCAASP;
break;
case 2: /* [] CHAR */
THCAASP_s = (QHCAASP.data.mode2);
 /* line 352: */
DJAAASP_makervc( THCAASP_s, &UHCAASP );
PHCAASP.Book.Idf = UHCAASP;
break;
case 3: /* REF VECTOR [] CHAR */
VHCAASP_r = (QHCAASP.data.mode3);
 /* line 353: */
PHCAASP.Book.Idf = VHCAASP_r;
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 354: */
PHCAASP.Book.Reidf = A_VVAC(WHCAASP);
 /* line 355: */
PHCAASP.Book.Type = Chann.Type;
 /* line 356: */
PHCAASP.Sysfile = 0;
PHCAASP.Sys = Chann.Sys;
PHCAASP.Io = Chann.Defaultio;
PHCAASP.State = KECAASP_initclosedstate;
(*F) = PHCAASP;
 /* line 357: */
 /* line 358: */
YHCAASP = Chann.Sys.Open ;
ZHCAASP = (&((&(F->State))->Opened)) ;
(*ZHCAASP) = ((XHCAASP_r = A_CALLPROC(YHCAASP,(F),(F,(YHCAASP).nonlocals)))==0);
 /* line 359: */
 /* line 360: */
AICAASP = XHCAASP_r;
} 
A_PROC_EXIT(open);
return( AICAASP );
} 
#undef NL

A68_INT  DICAASP_create(A68_56 * F, A68_60  Chann)
{ 
A68_34  FICAASP_generator;   /* proc value of non-global proc */
A68_VC  LICAASP;  /* avoid structure result */
A68_VC  KICAASP_uniqueid;
A68_VC  OICAASP;  /* OPERATORS - assign op */
A68_INT  PICAASP_createsysfile;
A68_56  QICAASP;  /* collateral clause result */
A68_VC  RICAASP;  /* OPERATORS - nil -> mode */
A68_INT  SICAASP_r;
A68_49  TICAASP;  /* CALL */
A68_BOOL * UICAASP;  /* YIELD */
A68_INT  VICAASP;  /* clause result */
A_PROC_ENTRY(create);
 /* line 363: */
 /* line 364: */
{ 
A_CLOSURE( FICAASP_generator, GICAASP_generator, HICAASP_generator );
A_CALLPROC(FICAASP_generator,(A68_TRUE, &LICAASP),(A68_TRUE, &LICAASP,(FICAASP_generator).nonlocals));
KICAASP_uniqueid = LICAASP;
OICAASP = NICAASP ;
A_VASSIGN2(OICAASP,KICAASP_uniqueid,A68_CHAR );
 /* line 365: */
PICAASP_createsysfile = XEAAASP_bsdmkstemp(KICAASP_uniqueid);
 /* line 366: */
QICAASP.Book.Idf = KICAASP_uniqueid;
QICAASP.Book.Reidf = A_VVAC(RICAASP);
 /* line 367: */
QICAASP.Book.Type = Chann.Type;
 /* line 368: */
QICAASP.Sysfile = PICAASP_createsysfile;
QICAASP.Sys = Chann.Sys;
QICAASP.Io = Chann.Defaultio;
QICAASP.State = KECAASP_initclosedstate;
(*F) = QICAASP;
 /* line 369: */
 /* line 370: */
TICAASP = Chann.Sys.Open ;
UICAASP = (&((&(F->State))->Opened)) ;
(*UICAASP) = ((SICAASP_r = A_CALLPROC(TICAASP,(F),(F,(TICAASP).nonlocals)))==0);
 /* line 371: */
 /* line 372: */
VICAASP = SICAASP_r;
} 
A_PROC_EXIT(create);
return( VICAASP );
} 
#undef NL

A68_VOID  XICAASP_close(A68_56 * F)
{ 
A68_50  YICAASP;  /* CALL */
A68_BOOL * ZICAASP;  /* YIELD */
A68_VC  AJCAASP;  /* OPERATORS - nil -> mode */
A68_VC  BJCAASP;  /* != */
A68_VC  CJCAASP;  /* != */
A68_BOOL  DJCAASP;  /* optbool result */
A68_VC  GJCAASP;  /* avoid structure result */
A68_VC  HJCAASP;  /* avoid structure result */
A68_BOOL * IJCAASP;  /* YIELD */
A_PROC_ENTRY(close);
 /* line 375: */
 /* line 376: */
 /* line 377: */
if ( (*(&((&(F->State))->Opened))) )
{ 
YICAASP = (*(&((&(F->Sys))->Close))) ;
A_CALLPROC(YICAASP,(F),(F,(YICAASP).nonlocals));
ZICAASP = (&((&(F->State))->Opened)) ;
(*ZICAASP) = A68_FALSE;
 /* line 378: */
BJCAASP = A_VVAC(AJCAASP) ;
CJCAASP = (*(&((&(F->Book))->Reidf))) ;
DJCAASP = ! A_VSTRUCTCOMP(CJCAASP,BJCAASP);
if ( DJCAASP )
{ /* line 379: */
DJCAASP = A_VC_NE((*(&((&(F->Book))->Reidf))),FJCAASP);
}
 /* line 380: */
if ( DJCAASP )
{ 
 /* line 381: */
SMAAASP_z( (*(&((&(F->Book))->Reidf))), &GJCAASP );
SMAAASP_z( (*(&((&(F->Book))->Idf))), &HJCAASP );
if ( (PFAAASP_posixrename(HJCAASP, GJCAASP)==(-1)) )
{ 
 /* line 382: */
 /* line 383: */
IBCAASP_systemerror(F);
} 
} 
 /* line 384: */
 /* line 385: */
IJCAASP = (&((&(F->State))->Ended)) ;
(*IJCAASP) = A68_TRUE;
} 
A_PROC_EXIT(close);
return;
} 
#undef NL

A68_VOID  KJCAASP_scratch(A68_56 * F)
{ 
A68_50  LJCAASP;  /* CALL */
A68_BOOL * MJCAASP;  /* YIELD */
A68_BOOL * NJCAASP;  /* YIELD */
A_PROC_ENTRY(scratch);
 /* line 389: */
 /* line 390: */
 /* line 391: */
if ( (*(&((&(F->State))->Opened))) )
{ 
LJCAASP = (*(&((&(F->Sys))->Close))) ;
A_CALLPROC(LJCAASP,(F),(F,(LJCAASP).nonlocals));
MJCAASP = (&((&(F->State))->Opened)) ;
(*MJCAASP) = A68_FALSE;
 /* line 392: */
TFAAASP_posixunlink((*(&((&(F->Book))->Idf))));
 /* line 393: */
 /* line 394: */
NJCAASP = (&((&(F->State))->Ended)) ;
(*NJCAASP) = A68_TRUE;
} 
A_PROC_EXIT(scratch);
return;
} 
#undef NL

A68_VOID  PJCAASP_lock(A68_56 * F)
{ 
A68_50  QJCAASP;  /* CALL */
A68_BOOL  RJCAASP;  /* optbool result */
A68_VC  SJCAASP;  /* OPERATORS - nil -> mode */
A68_VC  TJCAASP;  /* != */
A68_VC  UJCAASP;  /* != */
A68_BOOL * VJCAASP;  /* YIELD */
A68_BOOL * WJCAASP;  /* YIELD */
A_PROC_ENTRY(lock);
 /* line 397: */
 /* line 399: */
 /* line 400: */
if ( (*(&((&(F->State))->Opened))) )
{ 
QJCAASP = (*(&((&(F->Sys))->Close))) ;
A_CALLPROC(QJCAASP,(F),(F,(QJCAASP).nonlocals));
 /* line 401: */
 /* line 402: */
 /* line 403: */
RJCAASP = (*(&((&((&(F->Book))->Type))->Reidfpossible)));
if ( RJCAASP )
{ /* line 404: */
TJCAASP = A_VVAC(SJCAASP) ;
UJCAASP = (*(&((&(F->Book))->Reidf))) ;
RJCAASP = ! A_VSTRUCTCOMP(UJCAASP,TJCAASP);
}
 /* line 405: */
if ( RJCAASP )
{ 
 /* line 406: */
if ( (PFAAASP_posixrename((*(&((&(F->Book))->Idf))), (*(&((&(F->Book))->Reidf))))==(-1)) )
{ 
 /* line 407: */
IBCAASP_systemerror(F);
} 
else
{ 
 /* line 408: */
 /* line 409: */
QEAAASP_bsdchmod((*(&((&(F->Book))->Reidf))), 0);
} 
} 
else
{ 
 /* line 410: */
QEAAASP_bsdchmod((*(&((&(F->Book))->Idf))), 0);
} 
 /* line 411: */
VJCAASP = (&((&(F->State))->Opened)) ;
(*VJCAASP) = A68_FALSE;
 /* line 412: */
 /* line 413: */
WJCAASP = (&((&(F->State))->Ended)) ;
(*WJCAASP) = A68_TRUE;
} 
A_PROC_EXIT(lock);
return;
} 
#undef NL

A68_VOID  YJCAASP_reset(A68_56 * F)
{ 
A68_BOOL * ZJCAASP;  /* YIELD */
A68_INT * AKCAASP;  /* YIELD */
A68_BOOL  BKCAASP;  /* optbool result */
A68_51  CKCAASP;  /* CALL */
A68_INT * DKCAASP;  /* YIELD */
A68_BOOL * EKCAASP;  /* YIELD */
A_PROC_ENTRY(reset);
 /* line 417: */
 /* line 418: */
 /* line 419: */
if ( (*(&((&((&(F->Book))->Type))->Setpossible))) )
{ 
ZJCAASP = (&((&(F->State))->Ended)) ;
(*ZJCAASP) = A68_FALSE;
 /* line 420: */
AKCAASP = (&((&(F->State))->Backch)) ;
(*AKCAASP) = (-1);
 /* line 421: */
 /* line 422: */
 /* line 423: */
BKCAASP = (*(&((&(F->State))->Opened)));
if ( BKCAASP )
{ /* line 424: */
CKCAASP = (*(&((&(F->Sys))->Set))) ;
BKCAASP = A_CALLPROC(CKCAASP,(F, CBCAASP_zeropos),(F, CBCAASP_zeropos,(CKCAASP).nonlocals));
}
if ( BKCAASP )
{ 
 /* line 425: */
 /* line 426: */
DKCAASP = (&((&(F->State))->Pos)) ;
(*DKCAASP) = CBCAASP_zeropos;
} 
else
{ 
if ( (*(&((&(F->State))->Opened))) )
{ 
 /* line 427: */
 /* line 428: */
EKCAASP = (&((&(F->State))->Ended)) ;
(*EKCAASP) = A68_TRUE;
} 
} 
} 
A_PROC_EXIT(reset);
return;
} 
#undef NL

A68_VOID  JKCAASP_set(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C)
{ 
A68_BOOL  KKCAASP;  /* optbool result */
A68_INT * LKCAASP;  /* YIELD */
A68_51  MKCAASP;  /* CALL */
A68_INT * NKCAASP;  /* YIELD */
A_PROC_ENTRY(set);
 /* line 432: */
 /* line 433: */
 /* line 435: */
KKCAASP = (*(&((&((&(F->Book))->Type))->Setpossible)));
if ( KKCAASP )
{KKCAASP = !(*(&((&(F->State))->Ended)));
}
 /* line 437: */
if ( KKCAASP )
{KKCAASP = (*(&((&(F->State))->Opened)));
}
 /* line 438: */
if ( KKCAASP )
{ 
LKCAASP = (&((&(F->State))->Backch)) ;
(*LKCAASP) = (-1);
 /* line 439: */
MKCAASP = (*(&((&(F->Sys))->Set))) ;
if ( A_CALLPROC(MKCAASP,(F, C),(F, C,(MKCAASP).nonlocals)) )
{ 
 /* line 440: */
NKCAASP = (&((&(F->State))->Pos)) ;
(*NKCAASP) = C;
} 
} 
A_PROC_EXIT(set);
return;
} 
#undef NL

A68_BOOL  PKCAASP_nofileend(A68_56 * F)
{ 
A68_BOOL  QKCAASP;  /* clause result */
A_PROC_ENTRY(nofileend);
QKCAASP = A68_FALSE;
A_PROC_EXIT(nofileend);
return( QKCAASP );
} 
#undef NL

A68_BOOL  SKCAASP_ignorevalueerror(A68_56 * F)
{ 
A68_BOOL  TKCAASP;  /* clause result */
A_PROC_ENTRY(ignorevalueerror);
TKCAASP = A68_FALSE;
A_PROC_EXIT(ignorevalueerror);
return( TKCAASP );
} 
#undef NL

A68_BOOL  WKCAASP_ignorecharerror(A68_56 * F, A68_CHAR * Ch)
{ 
A68_BOOL  XKCAASP;  /* clause result */
A_PROC_ENTRY(ignorecharerror);
XKCAASP = A68_FALSE;
A_PROC_EXIT(ignorecharerror);
return( XKCAASP );
} 
#undef NL

A_STATIC A68_BITS  JLCAASP_accessmode(A68_45  Type)
{ 
A68_BITS  KLCAASP;  /* clause result */
A_PROC_ENTRY(accessmode);
 /* line 467: */
 /* line 468: */
if ( (Type.Getpossible&Type.Putpossible) )
{ 
KLCAASP = ACAAASP_ordwr;
} 
else
{ 
 /* line 469: */
if ( Type.Putpossible )
{ 
KLCAASP = ZBAAASP_owronly;
} 
else
{ 
 /* line 470: */
if ( Type.Getpossible )
{ 
 /* line 471: */
KLCAASP = YBAAASP_ordonly;
} 
else
{ 
KLCAASP = YBAAASP_ordonly;
} 
} 
} 
A_PROC_EXIT(accessmode);
return( KLCAASP );
} 
#undef NL

A_STATIC A68_INT  PLCAASP_sysestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C)
{ 
A68_INT  QLCAASP_defaultmode;
A68_VC  RLCAASP;  /* avoid structure result */
A68_INT  SLCAASP_r;
A68_BOOL  TLCAASP;  /* clause result */
A68_INT * ULCAASP;  /* YIELD */
A68_INT  VLCAASP;  /* clause result */
A68_INT * WLCAASP;  /* YIELD */
A_PROC_ENTRY(sysestab);
 /* line 474: */
{ 
QLCAASP_defaultmode = (A68_INT )0644U;
 /* line 476: */
 /* line 477: */
 /* line 478: */
 /* line 479: */
SMAAASP_z( (*(&((&(F->Book))->Idf))), &RLCAASP );
SLCAASP_r = NFAAASP_posixopen(RLCAASP, (A68_INT )(A68_BITS )((A68_BITS )(JLCAASP_accessmode((*(&((&(F->Book))->Type))))|BCAAASP_ocreat)|CCAAASP_otrunc), QLCAASP_defaultmode);
 /* line 481: */
 /* line 482: */
 /* line 483: */
TLCAASP = (SLCAASP_r>=0);
if ( TLCAASP )
{ 
ULCAASP = (&(F->Sysfile)) ;
(*ULCAASP) = SLCAASP_r;
 /* line 484: */
 /* line 485: */
 /* line 486: */
WLCAASP = (&((&(F->State))->Lasterror)) ;
VLCAASP = (*WLCAASP) = 0;
} 
else
{ 
VLCAASP = FEAAASP_errno;
} 
} 
A_PROC_EXIT(sysestab);
return( VLCAASP );
} 
#undef NL

A_STATIC A68_INT  YLCAASP_sysopen(A68_56 * F)
{ 
A68_INT  ZLCAASP_defaultmode;
A68_VC  AMCAASP;  /* avoid structure result */
A68_INT  BMCAASP_r;
A68_BOOL  CMCAASP;  /* clause result */
A68_INT * DMCAASP;  /* YIELD */
A68_INT  EMCAASP;  /* clause result */
A68_INT * FMCAASP;  /* YIELD */
A_PROC_ENTRY(sysopen);
 /* line 490: */
{ 
ZLCAASP_defaultmode = (A68_INT )0444U;
 /* line 492: */
 /* line 493: */
 /* line 494: */
SMAAASP_z( (*(&((&(F->Book))->Idf))), &AMCAASP );
BMCAASP_r = NFAAASP_posixopen(AMCAASP, (A68_INT )JLCAASP_accessmode((*(&((&(F->Book))->Type)))), ZLCAASP_defaultmode);
 /* line 496: */
 /* line 497: */
 /* line 498: */
CMCAASP = (BMCAASP_r>=0);
if ( CMCAASP )
{ 
DMCAASP = (&(F->Sysfile)) ;
(*DMCAASP) = BMCAASP_r;
 /* line 499: */
 /* line 500: */
 /* line 501: */
FMCAASP = (&((&(F->State))->Lasterror)) ;
EMCAASP = (*FMCAASP) = 0;
} 
else
{ 
EMCAASP = FEAAASP_errno;
} 
} 
A_PROC_EXIT(sysopen);
return( EMCAASP );
} 
#undef NL

A_STATIC A68_VOID  HMCAASP_sysclose(A68_56 * F)
{ 
A_PROC_ENTRY(sysclose);
 /* line 505: */
 /* line 506: */
if ( (FFAAASP_posixclose((*(&(F->Sysfile))))<0) )
{ 
 /* line 507: */
IBCAASP_systemerror(F);
} 
A_PROC_EXIT(sysclose);
return;
} 
#undef NL

A_STATIC A68_INT  KMCAASP_sysgetbuf(A68_56 * F, A68_VC  Buf)
{ 
A68_INT  LMCAASP_r;
A68_BOOL  MMCAASP;  /* clause result */
A68_INT  NMCAASP;  /* clause result */
A68_INT  OMCAASP;  /* OPERATORS - skip to mode */
A68_INT * PMCAASP;  /* YIELD */
A_PROC_ENTRY(sysgetbuf);
 /* line 511: */
{ 
LMCAASP_r = OFAAASP_posixread((*(&(F->Sysfile))), Buf, Buf.upb);
 /* line 512: */
MMCAASP = (LMCAASP_r<0);
if ( MMCAASP )
{ 
IBCAASP_systemerror(F);
 /* line 513: */
NMCAASP = OMCAASP;
} 
else
{ 
PMCAASP = (&((&(F->State))->Lasterror)) ;
(*PMCAASP) = 0;
 /* line 514: */
NMCAASP = LMCAASP_r;
} 
} 
A_PROC_EXIT(sysgetbuf);
return( NMCAASP );
} 
#undef NL

A_STATIC A68_INT  SMCAASP_sysputbuf(A68_56 * F, A68_VC  Buf)
{ 
A68_INT  TMCAASP_r;
A68_BOOL  UMCAASP;  /* clause result */
A68_INT  VMCAASP;  /* clause result */
A68_INT  WMCAASP;  /* OPERATORS - skip to mode */
A68_INT * XMCAASP;  /* YIELD */
A_PROC_ENTRY(sysputbuf);
 /* line 518: */
{ 
TMCAASP_r = UFAAASP_posixwrite((*(&(F->Sysfile))), Buf, Buf.upb);
 /* line 519: */
UMCAASP = (TMCAASP_r<0);
if ( UMCAASP )
{ 
IBCAASP_systemerror(F);
 /* line 520: */
VMCAASP = WMCAASP;
} 
else
{ 
XMCAASP = (&((&(F->State))->Lasterror)) ;
(*XMCAASP) = 0;
 /* line 521: */
VMCAASP = TMCAASP_r;
} 
} 
A_PROC_EXIT(sysputbuf);
return( VMCAASP );
} 
#undef NL

A_STATIC A68_VOID  ZMCAASP_generator(A68_BOOL  YMCAASP_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ANCAASP;  /* clause result */
A68_VC  BNCAASP;  /* OPERATORS - dynamic generator */
{ 
BNCAASP.upb = BEAAASP_bytesperbits ;
( YMCAASP_anonymous? A_VLOC(A68_CHAR ,BNCAASP): A_VHEAP(A68_CHAR ,BNCAASP) );
ANCAASP = BNCAASP;
} 
*ReturnedValue = (ANCAASP);
return;
} 
#undef NL

A_STATIC A68_BOOL  GNCAASP_sysgetch(A68_56 * F, A68_CHAR * C)
{ 
A68_VC  HNCAASP;  /* OPERATORS - trim index */
A68_INT  INCAASP;  /* YIELD */
A68_BOOL  JNCAASP;  /* clause result */
A_PROC_ENTRY(sysgetch);
 /* line 526: */
 /* line 527: */
if ( (KMCAASP_sysgetbuf(F, A_VTRIM(HNCAASP,(CNCAASP_charbuffer),A_VTSCRIPT(&(HNCAASP.upb),(CNCAASP_charbuffer).upb,1,1)))!=0) )
{ 
INCAASP = 1 ;
(*C) = (*(&A_VINDEX(CNCAASP_charbuffer,INCAASP)));
 /* line 528: */
JNCAASP = A68_TRUE;
} 
else
{ 
 /* line 529: */
JNCAASP = A68_FALSE;
} 
A_PROC_EXIT(sysgetch);
return( JNCAASP );
} 
#undef NL

A_STATIC A68_BOOL  MNCAASP_sysputch(A68_56 * F, A68_CHAR  C)
{ 
A68_INT  NNCAASP;  /* YIELD */
A68_CHAR * ONCAASP;  /* YIELD */
A68_BOOL  PNCAASP;  /* clause result */
A68_VC  QNCAASP;  /* OPERATORS - trim index */
A68_BOOL  RNCAASP;  /* clause result */
A_PROC_ENTRY(sysputch);
 /* line 532: */
NNCAASP = 1 ;
ONCAASP = (&A_VINDEX(CNCAASP_charbuffer,NNCAASP)) ;
(*ONCAASP) = C;
 /* line 533: */
PNCAASP = (SMCAASP_sysputbuf(F, A_VTRIM(QNCAASP,(CNCAASP_charbuffer),A_VTSCRIPT(&(QNCAASP.upb),(CNCAASP_charbuffer).upb,1,1)))!=0);
if ( PNCAASP )
{ 
 /* line 534: */
RNCAASP = A68_TRUE;
} 
else
{ 
 /* line 535: */
RNCAASP = A68_FALSE;
} 
A_PROC_EXIT(sysputch);
return( RNCAASP );
} 
#undef NL

A_STATIC A68_BOOL  UNCAASP_sysset(A68_56 * F, A68_INT  P)
{ 
A68_INT  VNCAASP_r;
A68_BOOL  WNCAASP;  /* clause result */
A68_BOOL  XNCAASP;  /* clause result */
A68_BOOL  YNCAASP;  /* OPERATORS - skip to mode */
A68_INT * ZNCAASP;  /* YIELD */
A_PROC_ENTRY(sysset);
 /* line 538: */
{ 
VNCAASP_r = MFAAASP_posixlseek((*(&(F->Sysfile))), P, UCAAASP_posixseekset);
 /* line 539: */
 /* line 540: */
WNCAASP = (VNCAASP_r<0);
if ( WNCAASP )
{ 
IBCAASP_systemerror(F);
 /* line 541: */
XNCAASP = YNCAASP;
} 
else
{ 
ZNCAASP = (&((&(F->State))->Lasterror)) ;
(*ZNCAASP) = 0;
 /* line 542: */
XNCAASP = A68_TRUE;
} 
} 
A_PROC_EXIT(sysset);
return( XNCAASP );
} 
#undef NL

A_STATIC A68_INT  BOCAASP_syslpos(A68_56 * F)
{ 
A68_INT  COCAASP_curr;
A68_BOOL  DOCAASP;  /* clause result */
A68_INT  EOCAASP;  /* clause result */
A68_INT  FOCAASP;  /* OPERATORS - skip to mode */
A68_INT  GOCAASP_end;
A68_BOOL  HOCAASP;  /* clause result */
A68_INT  IOCAASP;  /* OPERATORS - skip to mode */
A68_INT  JOCAASP;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(syslpos);
 /* line 545: */
{ 
COCAASP_curr = MFAAASP_posixlseek((*(&(F->Sysfile))), 0, VCAAASP_posixseekcur);
 /* line 546: */
DOCAASP = (COCAASP_curr<0);
if ( DOCAASP )
{ 
IBCAASP_systemerror(F);
 /* line 547: */
EOCAASP = FOCAASP;
} 
else
{ 
{ 
GOCAASP_end = MFAAASP_posixlseek((*(&(F->Sysfile))), 0, WCAAASP_posixseekend);
 /* line 548: */
HOCAASP = (GOCAASP_end<0);
if ( HOCAASP )
{ 
IBCAASP_systemerror(F);
 /* line 549: */
EOCAASP = IOCAASP;
} 
else
{ 
 /* line 550: */
if ( (MFAAASP_posixlseek((*(&(F->Sysfile))), COCAASP_curr, UCAAASP_posixseekset)<0) )
{ 
IBCAASP_systemerror(F);
 /* line 551: */
 /* line 552: */
EOCAASP = JOCAASP;
} 
else
{ 
EOCAASP = GOCAASP_end;
} 
} 
} 
} 
} 
A_PROC_EXIT(syslpos);
return( EOCAASP );
} 
#undef NL

A_STATIC A68_VOID  LOCAASP_syscpos(A68_56 * F)
{ 
A68_INT * MOCAASP;  /* YIELD */
A68_INT * NOCAASP;  /* YIELD */
A_PROC_ENTRY(syscpos);
 /* line 555: */
 /* line 556: */
 /* line 557: */
MOCAASP = (&((&(F->State))->Pos)) ;
NOCAASP = (&((&((&(F->State))->Buffer))->Pos)) ;
(*NOCAASP) = (*MOCAASP) = MFAAASP_posixlseek((*(&(F->Sysfile))), 0, VCAAASP_posixseekcur);
A_PROC_EXIT(syscpos);
return;
} 
#undef NL

A_STATIC A68_BOOL  QOCAASP_nocontrolstream(A68_56 * F, A68_INT  I)
{ 
A68_BOOL  ROCAASP;  /* clause result */
A_PROC_ENTRY(nocontrolstream);
ROCAASP = A68_FALSE;
A_PROC_EXIT(nocontrolstream);
return( ROCAASP );
} 
#undef NL

A_STATIC A68_VOID  CPCAASP_anonymous(A68_56 * F, A68_INT  Bytes, A68_VC  *ReturnedValue)
{ 
A68_VC  DPCAASP;  /* clause result */
A68_VC  EPCAASP;  /* OPERATORS - skip to mode */
DPCAASP = EPCAASP;
*ReturnedValue = (DPCAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  HPCAASP_anonymous(A68_56 * F)
{ 
/*SKIP*/;
return;
} 
#undef NL

A_STATIC A68_VOID  RPCAASP_generator(A68_BOOL  QPCAASP_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  SPCAASP;  /* clause result */
A68_VC  TPCAASP;  /* OPERATORS - dynamic generator */
{ 
TPCAASP.upb = 8 ;
( QPCAASP_anonymous? A_VLOC(A68_CHAR ,TPCAASP): A_VHEAP(A68_CHAR ,TPCAASP) );
SPCAASP = TPCAASP;
} 
*ReturnedValue = (SPCAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  CQCAASP_generator(A68_BOOL  BQCAASP_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  DQCAASP;  /* clause result */
A68_VC  EQCAASP;  /* OPERATORS - dynamic generator */
{ 
EQCAASP.upb = 9 ;
( BQCAASP_anonymous? A_VLOC(A68_CHAR ,EQCAASP): A_VHEAP(A68_CHAR ,EQCAASP) );
DQCAASP = EQCAASP;
} 
*ReturnedValue = (DQCAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  NQCAASP_generator(A68_BOOL  MQCAASP_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  OQCAASP;  /* clause result */
A68_VC  PQCAASP;  /* OPERATORS - dynamic generator */
{ 
PQCAASP.upb = 11 ;
( MQCAASP_anonymous? A_VLOC(A68_CHAR ,PQCAASP): A_VHEAP(A68_CHAR ,PQCAASP) );
OQCAASP = PQCAASP;
} 
*ReturnedValue = (OQCAASP);
return;
} 
#undef NL

A68_VOID  YQCAASP_setflushafterput(A68_56 * F)
{ 
A68_BOOL * ZQCAASP;  /* YIELD */
A_PROC_ENTRY(setflushafterput);
 /* line 624: */
ZQCAASP = (&((&((&(F->State))->Buffer))->Flushafterput)) ;
(*ZQCAASP) = A68_TRUE;
A_PROC_EXIT(setflushafterput);
return;
} 
#undef NL

A_STATIC A68_VOID  BRCAASP_sysflushbuffer(A68_56 * F)
{ 
A68_VC  CRCAASP;  /* OPERATORS - trim index */
A68_VC  DRCAASP;  /* OPERATORS - trim index */
A68_59  ERCAASP;  /* CALL */
A68_BOOL * FRCAASP;  /* YIELD */
A68_INT  GRCAASP;  /* ADICOPS - ABS INT */
A68_INT * HRCAASP;  /* YIELD */
A68_INT * IRCAASP;  /* YIELD */
A_PROC_ENTRY(sysflushbuffer);
 /* line 627: */
 /* line 628: */
{ 
 /* line 629: */
 /* line 630: */
if ( (*(&((&((&(F->State))->Buffer))->Writeback))) )
{ 
 /* line 631: */
 /* line 632: */
 /* line 633: */
CRCAASP = (*(&((&((&(F->State))->Buffer))->Start))) ;
if ( (SMCAASP_sysputbuf(F, A_VTRIM(DRCAASP,(CRCAASP),A_VTSCRIPT(&(DRCAASP.upb),(CRCAASP).upb,1,(*(&((&((&(F->State))->Buffer))->Valid))))))<(*(&((&((&(F->State))->Buffer))->Valid)))) )
{ 
 /* line 634: */
ERCAASP = (*(&((&(F->Io))->Physicalfilemended))) ;
if ( A_CALLPROC(ERCAASP,(F),(F,(ERCAASP).nonlocals)) )
{ 
 /* line 635: */
BRCAASP_sysflushbuffer(F);
} 
else
{ 
 /* line 636: */
 /* line 637: */
JDCAASP_transputerror(F, VBCAASP_physicalfileendnotmended);
} 
} 
 /* line 638: */
 /* line 639: */
FRCAASP = (&((&((&(F->State))->Buffer))->Writeback)) ;
(*FRCAASP) = A68_FALSE;
} 
else
{ 
 /* line 640: */
GRCAASP = (*(&(F->Sysfile))) ;
if ( (A_ABS(GRCAASP)>2) )
{ 
 /* line 641: */
UNCAASP_sysset(F, (*(&((&(F->State))->Pos))));
} 
} 
 /* line 643: */
HRCAASP = (&((&((&(F->State))->Buffer))->Pos)) ;
(*HRCAASP) = (*(&((&(F->State))->Pos)));
 /* line 644: */
 /* line 645: */
IRCAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*IRCAASP) = 0;
} 
A_PROC_EXIT(sysflushbuffer);
return;
} 
#undef NL

A_STATIC A68_VOID  LRCAASP_ensurebufspace(A68_56 * F, A68_INT  Bytes, A68_VC  *ReturnedValue)
{ 
A68_INT  MRCAASP_curr;
A68_INT  NRCAASP;  /* clause result */
A68_BOOL  ORCAASP;  /* clause result */
A68_INT  PRCAASP;  /* clause result */
A68_VC  QRCAASP;  /* OPERATORS - trim index */
A68_VC  RRCAASP;  /* OPERATORS - trim index */
A68_INT * SRCAASP;  /* YIELD */
A68_INT * TRCAASP;  /* YIELD */
A68_VC  URCAASP;  /* clause result */
A68_VC  VRCAASP;  /* OPERATORS - trim index */
A68_VC  WRCAASP;  /* OPERATORS - trim index */
A68_VC  XRCAASP;  /* OPERATORS - trim index */
A68_VC  YRCAASP;  /* OPERATORS - trim index */
A_PROC_ENTRY(ensurebufspace);
 /* line 648: */
 /* line 649: */
{ 
MRCAASP_curr = ((*(&((&(F->State))->Pos)))-(*(&((&((&(F->State))->Buffer))->Pos))));
 /* line 651: */
 /* line 652: */
 /* line 653: */
if ( (*(&((&(F->State))->Readmood))) )
{ 
 /* line 654: */
NRCAASP = (*(&((&((&(F->State))->Buffer))->Valid)));
} 
else
{ 
 /* line 655: */
NRCAASP = (*(&((&((&(F->State))->Buffer))->Max)));
} 
 /* line 656: */
ORCAASP = ((MRCAASP_curr+Bytes)>NRCAASP);
if ( ORCAASP )
{ 
BRCAASP_sysflushbuffer(F);
 /* line 658: */
 /* line 659: */
 /* line 660: */
if ( (*(&((&(F->State))->Readmood))) )
{ 
 /* line 661: */
 /* line 663: */
 /* line 664: */
QRCAASP = (*(&((&((&(F->State))->Buffer))->Start))) ;
PRCAASP = KMCAASP_sysgetbuf(F, A_VTRIM(RRCAASP,(QRCAASP),A_VTSCRIPT(&(RRCAASP.upb),(QRCAASP).upb,1,(*(&((&((&(F->State))->Buffer))->Max))))));
} 
else
{ 
PRCAASP = 0;
} 
SRCAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*SRCAASP) = PRCAASP;
 /* line 666: */
TRCAASP = (&((&((&(F->State))->Buffer))->Pos)) ;
(*TRCAASP) = (*(&((&(F->State))->Pos)));
 /* line 667: */
 /* line 668: */
 /* line 669: */
VRCAASP = (*(&((&((&(F->State))->Buffer))->Start))) ;
URCAASP = A_VTRIM(WRCAASP,(VRCAASP),A_VTSCRIPT(&(WRCAASP.upb),(VRCAASP).upb,1,Bytes));
} 
else
{ 
 /* line 670: */
XRCAASP = (*(&((&((&(F->State))->Buffer))->Start))) ;
URCAASP = A_VTRIM(YRCAASP,(XRCAASP),A_VTSCRIPT(&(YRCAASP.upb),(XRCAASP).upb,(MRCAASP_curr+1),(MRCAASP_curr+Bytes)));
} 
} 
A_PROC_EXIT(ensurebufspace);
*ReturnedValue = (URCAASP);
return;
} 
#undef NL

A_STATIC A68_INT  DSCAASP_buffestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C)
{ 
A68_INT  ESCAASP_r;
A68_BOOL  FSCAASP;  /* clause result */
A68_44  GSCAASP;  /* avoid structure result */
A68_44 * HSCAASP;  /* YIELD */
A68_INT  ISCAASP;  /* clause result */
A_PROC_ENTRY(buffestab);
 /* line 673: */
{ 
ESCAASP_r = PLCAASP_sysestab(F, P, L, C);
 /* line 674: */
FSCAASP = (ESCAASP_r==0);
if ( FSCAASP )
{ 
YACAASP_newfilebuffer( 4096, &GSCAASP );
HSCAASP = (&((&(F->State))->Buffer)) ;
(*HSCAASP) = GSCAASP;
 /* line 675: */
 /* line 676: */
ISCAASP = 0;
} 
else
{ 
ISCAASP = ESCAASP_r;
} 
} 
A_PROC_EXIT(buffestab);
return( ISCAASP );
} 
#undef NL

A_STATIC A68_INT  KSCAASP_buffopen(A68_56 * F)
{ 
A68_INT  LSCAASP_r;
A68_BOOL  MSCAASP;  /* clause result */
A68_44  NSCAASP;  /* avoid structure result */
A68_44 * OSCAASP;  /* YIELD */
A68_INT  PSCAASP;  /* clause result */
A_PROC_ENTRY(buffopen);
 /* line 679: */
{ 
LSCAASP_r = YLCAASP_sysopen(F);
 /* line 680: */
MSCAASP = (LSCAASP_r==0);
if ( MSCAASP )
{ 
YACAASP_newfilebuffer( 4096, &NSCAASP );
OSCAASP = (&((&(F->State))->Buffer)) ;
(*OSCAASP) = NSCAASP;
 /* line 681: */
 /* line 682: */
PSCAASP = 0;
} 
else
{ 
PSCAASP = LSCAASP_r;
} 
} 
A_PROC_EXIT(buffopen);
return( PSCAASP );
} 
#undef NL

A_STATIC A68_VOID  RSCAASP_buffclose(A68_56 * F)
{ 
A68_VC  SSCAASP;  /* OPERATORS - nil -> mode */
A68_VC * TSCAASP;  /* YIELD */
A_PROC_ENTRY(buffclose);
 /* line 685: */
 /* line 686: */
{ 
BRCAASP_sysflushbuffer(F);
 /* line 687: */
HMCAASP_sysclose(F);
 /* line 688: */
 /* line 689: */
TSCAASP = (&((&((&(F->State))->Buffer))->Start)) ;
(*TSCAASP) = A_VVAC(SSCAASP);
} 
A_PROC_EXIT(buffclose);
return;
} 
#undef NL

A_STATIC A68_BOOL  WSCAASP_buffset(A68_56 * F, A68_INT  Pos)
{ 
A68_BOOL  XSCAASP;  /* optbool result */
A68_INT * YSCAASP;  /* YIELD */
A68_BOOL  ZSCAASP;  /* clause result */
A_PROC_ENTRY(buffset);
 /* line 692: */
 /* line 693: */
XSCAASP = (*(&((&((&(F->State))->Buffer))->Writeback)));
if ( ! XSCAASP )
{XSCAASP = (Pos<(*(&((&((&(F->State))->Buffer))->Pos))));
}
 /* line 694: */
if ( ! XSCAASP )
{ /* line 695: */
XSCAASP = (Pos>((*(&((&((&(F->State))->Buffer))->Pos)))+(*(&((&((&(F->State))->Buffer))->Valid)))));
}
 /* line 696: */
if ( XSCAASP )
{ 
BRCAASP_sysflushbuffer(F);
UNCAASP_sysset(F, Pos);
 /* line 697: */
YSCAASP = (&((&((&(F->State))->Buffer))->Pos)) ;
(*YSCAASP) = Pos;
 /* line 698: */
ZSCAASP = A68_TRUE;
} 
else
{ 
 /* line 699: */
ZSCAASP = A68_TRUE;
} 
A_PROC_EXIT(buffset);
return( ZSCAASP );
} 
#undef NL

A_STATIC A68_INT  BTCAASP_bufflpos(A68_56 * F)
{ 
A68_INT  CTCAASP_sys;
A68_INT  DTCAASP;  /* clause result */
A_PROC_ENTRY(bufflpos);
 /* line 702: */
 /* line 703: */
{ 
CTCAASP_sys = BOCAASP_syslpos(F);
 /* line 705: */
 /* line 706: */
DTCAASP = LPAAASP_max(CTCAASP_sys, ((*(&((&((&(F->State))->Buffer))->Pos)))+(*(&((&((&(F->State))->Buffer))->Valid)))));
} 
A_PROC_EXIT(bufflpos);
return( DTCAASP );
} 
#undef NL

A_STATIC A68_INT  GTCAASP_buffputbuf(A68_56 * F, A68_VC  B)
{ 
A68_INT  HTCAASP;  /* clause result */
A_PROC_ENTRY(buffputbuf);
 /* line 709: */
{ 
BRCAASP_sysflushbuffer(F);
HTCAASP = SMCAASP_sysputbuf(F, B);
} 
A_PROC_EXIT(buffputbuf);
return( HTCAASP );
} 
#undef NL

A_STATIC A68_INT  KTCAASP_buffgetbuf(A68_56 * F, A68_VC  B)
{ 
A68_INT  LTCAASP;  /* clause result */
A_PROC_ENTRY(buffgetbuf);
 /* line 712: */
{ 
BRCAASP_sysflushbuffer(F);
LTCAASP = KMCAASP_sysgetbuf(F, B);
} 
A_PROC_EXIT(buffgetbuf);
return( LTCAASP );
} 
#undef NL

A_STATIC A68_BOOL  OTCAASP_buffgetch(A68_56 * F, A68_CHAR * C)
{ 
A68_VC  PTCAASP;  /* avoid structure result */
A68_INT  QTCAASP;  /* YIELD */
A68_BOOL  RTCAASP;  /* clause result */
A68_BOOL  STCAASP;  /* clause result */
A68_59  TTCAASP;  /* CALL */
A68_BOOL  UTCAASP;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(buffgetch);
 /* line 715: */
LRCAASP_ensurebufspace( F, 1, &PTCAASP );
QTCAASP = 1 ;
(*C) = (*(&A_VINDEX(PTCAASP,QTCAASP)));
 /* line 716: */
 /* line 717: */
RTCAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))>0);
if ( RTCAASP )
{ 
 /* line 718: */
STCAASP = A68_TRUE;
} 
else
{ 
 /* line 719: */
TTCAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(TTCAASP,(F),(F,(TTCAASP).nonlocals)) )
{ 
 /* line 720: */
STCAASP = OTCAASP_buffgetch(F, C);
} 
else
{ 
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
 /* line 721: */
STCAASP = UTCAASP;
} 
} 
A_PROC_EXIT(buffgetch);
return( STCAASP );
} 
#undef NL

A_STATIC A68_BOOL  XTCAASP_buffputch(A68_56 * F, A68_CHAR  C)
{ 
A68_VC  YTCAASP;  /* avoid structure result */
A68_INT  ZTCAASP;  /* YIELD */
A68_CHAR * AUCAASP;  /* YIELD */
A68_INT * BUCAASP;  /* YIELD */
A68_BOOL * CUCAASP;  /* YIELD */
A68_BOOL  DUCAASP;  /* clause result */
A_PROC_ENTRY(buffputch);
 /* line 724: */
 /* line 725: */
{ 
LRCAASP_ensurebufspace( F, 1, &YTCAASP );
ZTCAASP = 1 ;
AUCAASP = (&A_VINDEX(YTCAASP,ZTCAASP)) ;
(*AUCAASP) = C;
 /* line 726: */
BUCAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*BUCAASP)+=1;
 /* line 727: */
CUCAASP = (&((&((&(F->State))->Buffer))->Writeback)) ;
(*CUCAASP) = A68_TRUE;
 /* line 728: */
 /* line 729: */
DUCAASP = A68_TRUE;
} 
A_PROC_EXIT(buffputch);
return( DUCAASP );
} 
#undef NL

A_STATIC A68_VOID  TUCAASP_generator(A68_BOOL  SUCAASP_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  UUCAASP;  /* clause result */
A68_VC  VUCAASP;  /* OPERATORS - dynamic generator */
{ 
VUCAASP.upb = 4 ;
( SUCAASP_anonymous? A_VLOC(A68_CHAR ,VUCAASP): A_VHEAP(A68_CHAR ,VUCAASP) );
UUCAASP = VUCAASP;
} 
*ReturnedValue = (UUCAASP);
return;
} 
#undef NL

A_STATIC A68_INT  BVCAASP_kbdopen(A68_56 * F)
{ 
A68_INT  CVCAASP;  /* clause result */
union {  /* BIOP 99 */
A68_61 *  source;
A68_CHAR *  destination;
} DVCAASP; 
A68_61  EVCAASP;  /* collateral clause result */
A68_253  FVCAASP;  /* OPERATORS - istruct -> vector */
A68_62 * GVCAASP;  /* OPERATORS - istruct -> vector */
A68_253  HVCAASP;  /* OPERATORS - simple index */
A68_SSBITS * IVCAASP;  /* YIELD */
A68_253  JVCAASP;  /* OPERATORS - istruct -> vector */
A68_62 * KVCAASP;  /* OPERATORS - istruct -> vector */
A68_253  LVCAASP;  /* OPERATORS - simple index */
A68_SSBITS * MVCAASP;  /* YIELD */
union {  /* BIOP 99 */
A68_61 *  source;
A68_CHAR *  destination;
} NVCAASP; 
A68_58  OVCAASP;  /* collateral clause result */
A68_58 * PVCAASP;  /* YIELD */
A68_INT * QVCAASP;  /* YIELD */
A_PROC_ENTRY(kbdopen);
 /* line 749: */
 /* line 750: */
 /* line 751: */
if ( (VEAAASP_bsdisatty(FLCAASP_sysstdin)!=1) )
{ 
 /* line 752: */
CVCAASP = XBCAASP_standinredirected;
} 
else
{ 
DVCAASP.source = (&ZUCAASP_tattrorig) ;
DFAAASP_linuxtcgetattr(FLCAASP_sysstdin, (DVCAASP.destination));
 /* line 754: */
EVCAASP.Ciflag = 0X0U;
EVCAASP.Coflag = 0X0U;
EVCAASP.Ccflag = (*(&((&ZUCAASP_tattrorig)->Ccflag)));
EVCAASP.Clflag = 0X0U;
 /* line 755: */
EVCAASP.Cline = (*(&((&ZUCAASP_tattrorig)->Cline)));
EVCAASP.Ccc = (*(&((&ZUCAASP_tattrorig)->Ccc)));
EVCAASP.Cispeed = 0X0U;
EVCAASP.Cospeed = 0X0U;
YUCAASP_tattr = EVCAASP;
 /* line 756: */
GVCAASP = (&((&YUCAASP_tattr)->Ccc)) ;
HVCAASP = A_ISVEC(FVCAASP,GVCAASP,32,A68_SSBITS ) ;
IVCAASP = (&A_VINDEX(HVCAASP,PCAAASP_termiosvmin)) ;
(*IVCAASP) = 0X1U;
 /* line 757: */
KVCAASP = (&((&YUCAASP_tattr)->Ccc)) ;
LVCAASP = A_ISVEC(JVCAASP,KVCAASP,32,A68_SSBITS ) ;
MVCAASP = (&A_VINDEX(LVCAASP,OCAAASP_termiosvtime)) ;
(*MVCAASP) = 0X0U;
 /* line 758: */
NVCAASP.source = (&YUCAASP_tattr) ;
EFAAASP_linuxtcsetattr(FLCAASP_sysstdin, QCAAASP_tcsanow, (NVCAASP.destination));
 /* line 760: */
 /* line 761: */
OVCAASP.Readmood = A68_TRUE;
 /* line 762: */
OVCAASP.Charmood = A68_TRUE;
 /* line 763: */
OVCAASP.Opened = A68_TRUE;
 /* line 764: */
OVCAASP.Ended = A68_FALSE;
 /* line 765: */
OVCAASP.Bol = A68_TRUE;
 /* line 766: */
OVCAASP.Backch = (-1);
 /* line 767: */
OVCAASP.Lasterror = 0;
OVCAASP.Buffer.Start = WUCAASP_kbdbuffer;
OVCAASP.Buffer.Max = 1;
OVCAASP.Buffer.Valid = 0;
OVCAASP.Buffer.Pos = 0;
OVCAASP.Buffer.Writeback = A68_FALSE;
 /* line 768: */
OVCAASP.Buffer.Flushafterput = A68_FALSE;
OVCAASP.Pos = 0;
PVCAASP = (&(F->State)) ;
(*PVCAASP) = OVCAASP;
 /* line 769: */
QVCAASP = (&(F->Sysfile)) ;
(*QVCAASP) = FLCAASP_sysstdin;
 /* line 770: */
 /* line 771: */
CVCAASP = 0;
} 
A_PROC_EXIT(kbdopen);
return( CVCAASP );
} 
#undef NL

A_STATIC A68_INT  VVCAASP_kbdestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C)
{ 
A68_INT  WVCAASP;  /* clause result */
A_PROC_ENTRY(kbdestab);
WVCAASP = BVCAASP_kbdopen(F);
A_PROC_EXIT(kbdestab);
return( WVCAASP );
} 
#undef NL

A_STATIC A68_VOID  YVCAASP_kbdclose(A68_56 * F)
{ 
union {  /* BIOP 99 */
A68_61 *  source;
A68_CHAR *  destination;
} ZVCAASP; 
A68_BOOL * AWCAASP;  /* YIELD */
A68_BOOL * BWCAASP;  /* YIELD */
A_PROC_ENTRY(kbdclose);
 /* line 776: */
 /* line 777: */
{ 
ZVCAASP.source = (&ZUCAASP_tattrorig) ;
EFAAASP_linuxtcsetattr((*(&(F->Sysfile))), QCAAASP_tcsanow, (ZVCAASP.destination));
 /* line 778: */
AWCAASP = (&((&(F->State))->Opened)) ;
(*AWCAASP) = A68_FALSE;
 /* line 779: */
 /* line 780: */
BWCAASP = (&((&(F->State))->Ended)) ;
(*BWCAASP) = A68_TRUE;
} 
A_PROC_EXIT(kbdclose);
return;
} 
#undef NL

A_STATIC A68_BOOL  EWCAASP_kbdgetch(A68_56 * F, A68_CHAR * Ch)
{ 
A68_INT  FWCAASP;  /* YIELD */
A68_INT * GWCAASP;  /* YIELD */
A68_BOOL  HWCAASP;  /* clause result */
A_PROC_ENTRY(kbdgetch);
 /* line 785: */
 /* line 786: */
{ 
for ( ;; )
{ 
if ( !((OFAAASP_posixread((*(&(F->Sysfile))), WUCAASP_kbdbuffer, 1)!=1)) ) break;
/*SKIP*/;
}
 /* line 787: */
FWCAASP = 1 ;
(*Ch) = (*(&A_VINDEX(WUCAASP_kbdbuffer,FWCAASP)));
GWCAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*GWCAASP) = 1;
 /* line 788: */
HWCAASP = A68_TRUE;
} 
A_PROC_EXIT(kbdgetch);
return( HWCAASP );
} 
#undef NL

A_STATIC A68_VOID  KWCAASP_kbdensurebufspace(A68_56 * F, A68_INT  N, A68_VC  *ReturnedValue)
{ 
A68_INT  LWCAASP;  /* YIELD */
A68_VC  MWCAASP;  /* clause result */
A68_INT  NWCAASP;  /* YIELD */
A68_VC  OWCAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(kbdensurebufspace);
 /* line 791: */
 /* line 792: */
{ 
LWCAASP = 1 ;
EWCAASP_kbdgetch(F, (&A_VINDEX(WUCAASP_kbdbuffer,LWCAASP)));
 /* line 793: */
 /* line 794: */
NWCAASP = 1 ;
MWCAASP = A_VEC(OWCAASP,(&A_VINDEX(WUCAASP_kbdbuffer,NWCAASP)),A68_CHAR *);
} 
A_PROC_EXIT(kbdensurebufspace);
*ReturnedValue = (MWCAASP);
return;
} 
#undef NL

A_STATIC A68_INT  EXCAASP_argopen(A68_56 * F)
{ 
A68_58  FXCAASP;  /* collateral clause result */
A68_58 * GXCAASP;  /* YIELD */
A68_BOOL  HXCAASP;  /* clause result */
A68_VC  IXCAASP;  /* avoid structure result */
A68_VC * JXCAASP;  /* YIELD */
A68_INT  KXCAASP;  /* clause result */
A68_44 * LXCAASP_fb;
A68_INT * MXCAASP;  /* YIELD */
A68_INT * NXCAASP;  /* YIELD */
A68_RC  OXCAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(argopen);
 /* line 810: */
FXCAASP.Readmood = A68_TRUE;
FXCAASP.Charmood = A68_TRUE;
FXCAASP.Opened = A68_TRUE;
FXCAASP.Ended = A68_FALSE;
FXCAASP.Bol = A68_TRUE;
FXCAASP.Backch = (-1);
FXCAASP.Lasterror = 0;
FXCAASP.Buffer = WACAASP_nobuffer;
FXCAASP.Pos = 0;
GXCAASP = (&(F->State)) ;
(*GXCAASP) = FXCAASP;
 /* line 811: */
 /* line 812: */
 /* line 813: */
XZBAASP_commandline(  &IXCAASP );
JXCAASP = (&((&((&(F->State))->Buffer))->Start)) ;
(*JXCAASP) = IXCAASP ;
HXCAASP = (JXCAASP==(A68_VC *)A68_NIL);
if ( HXCAASP )
{ 
 /* line 814: */
KXCAASP = CCCAASP_noprogramargs;
} 
else
{ 
LXCAASP_fb = (&((&(F->State))->Buffer));
 /* line 815: */
MXCAASP = (&(LXCAASP_fb->Valid)) ;
NXCAASP = (&(LXCAASP_fb->Max)) ;
(*NXCAASP) = (*MXCAASP) = (*(&(LXCAASP_fb->Start))).upb;
 /* line 816: */
KGCAASP_maketerm(F, A_HARR(OXCAASP,NUAAASP_blank,A68_CHAR ));
 /* line 817: */
 /* line 818: */
KXCAASP = 0;
} 
A_PROC_EXIT(argopen);
return( KXCAASP );
} 
#undef NL

A_STATIC A68_INT  TXCAASP_argestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C)
{ 
A68_INT  UXCAASP;  /* clause result */
A_PROC_ENTRY(argestab);
UXCAASP = EXCAASP_argopen(F);
A_PROC_EXIT(argestab);
return( UXCAASP );
} 
#undef NL

A_STATIC A68_VOID  WXCAASP_argclose(A68_56 * F)
{ 
A_PROC_ENTRY(argclose);
/*SKIP*/;
A_PROC_EXIT(argclose);
return;
} 
#undef NL

A_STATIC A68_BOOL  ZXCAASP_argset(A68_56 * F, A68_INT  P)
{ 
A68_INT * AYCAASP;  /* YIELD */
A68_BOOL  BYCAASP;  /* clause result */
A_PROC_ENTRY(argset);
 /* line 825: */
 /* line 826: */
{ 
AYCAASP = (&((&(F->State))->Lasterror)) ;
(*AYCAASP) = 0;
 /* line 827: */
 /* line 828: */
BYCAASP = ((P>=0)&(P<=(*(&((&((&(F->State))->Buffer))->Valid)))));
} 
A_PROC_EXIT(argset);
return( BYCAASP );
} 
#undef NL

A_STATIC A68_INT  DYCAASP_arglpos(A68_56 * F)
{ 
A68_INT  EYCAASP;  /* clause result */
A_PROC_ENTRY(arglpos);
EYCAASP = (*(&((&((&(F->State))->Buffer))->Max)));
A_PROC_EXIT(arglpos);
return( EYCAASP );
} 
#undef NL

A_STATIC A68_INT  HYCAASP_argputbuf(A68_56 * F, A68_VC  B)
{ 
A68_INT  IYCAASP;  /* clause result */
A_PROC_ENTRY(argputbuf);
IYCAASP = 0;
A_PROC_EXIT(argputbuf);
return( IYCAASP );
} 
#undef NL

A_STATIC A68_INT  LYCAASP_arggetbuf(A68_56 * F, A68_VC  B)
{ 
A68_INT  MYCAASP;  /* clause result */
A_PROC_ENTRY(arggetbuf);
MYCAASP = 0;
A_PROC_EXIT(arggetbuf);
return( MYCAASP );
} 
#undef NL

A_STATIC A68_VOID  OYCAASP_argflushbuffer(A68_56 * F)
{ 
A_PROC_ENTRY(argflushbuffer);
/*SKIP*/;
A_PROC_EXIT(argflushbuffer);
return;
} 
#undef NL

A_STATIC A68_VOID  RYCAASP_argensurebytes(A68_56 * F, A68_INT  Bytes, A68_VC  *ReturnedValue)
{ 
A68_44 * SYCAASP_fb;
A68_BOOL  TYCAASP;  /* clause result */
A68_INT * UYCAASP;  /* YIELD */
A68_VC  VYCAASP;  /* clause result */
A68_VC  WYCAASP;  /* OPERATORS - trim index */
A68_VC  XYCAASP;  /* OPERATORS - trim index */
A68_VC  YYCAASP;  /* OPERATORS - trim index */
A68_VC  ZYCAASP;  /* OPERATORS - trim index */
A_PROC_ENTRY(argensurebytes);
 /* line 838: */
{ 
SYCAASP_fb = (&((&(F->State))->Buffer));
 /* line 839: */
 /* line 840: */
 /* line 841: */
TYCAASP = ((*(&((&(F->State))->Pos)))==(*(&(SYCAASP_fb->Valid))));
if ( TYCAASP )
{ 
UYCAASP = (&(SYCAASP_fb->Valid)) ;
(*UYCAASP) = 0;
 /* line 842: */
 /* line 843: */
WYCAASP = (*(&(SYCAASP_fb->Start))) ;
VYCAASP = A_VTRIM(XYCAASP,(WYCAASP),A_VTSCRIPT(&(XYCAASP.upb),(WYCAASP).upb,1,Bytes));
} 
else
{ 
 /* line 844: */
YYCAASP = (*(&(SYCAASP_fb->Start))) ;
VYCAASP = A_VTRIM(ZYCAASP,(YYCAASP),A_VTSCRIPT(&(ZYCAASP.upb),(YYCAASP).upb,((*(&((&(F->State))->Pos)))+1),((*(&((&(F->State))->Pos)))+Bytes)));
} 
} 
A_PROC_EXIT(argensurebytes);
*ReturnedValue = (VYCAASP);
return;
} 
#undef NL

A_STATIC A68_BOOL  CZCAASP_argputch(A68_56 * F, A68_CHAR  C)
{ 
A68_BOOL  DZCAASP;  /* clause result */
A_PROC_ENTRY(argputch);
DZCAASP = A68_FALSE;
A_PROC_EXIT(argputch);
return( DZCAASP );
} 
#undef NL

A_STATIC A68_BOOL  GZCAASP_arggetch(A68_56 * F, A68_CHAR * C)
{ 
A68_BOOL  HZCAASP;  /* clause result */
A68_BOOL * IZCAASP;  /* YIELD */
A68_VC  JZCAASP;  /* avoid structure result */
A68_INT  KZCAASP;  /* YIELD */
A_PROC_ENTRY(arggetch);
 /* line 849: */
 /* line 850: */
if ( ((*(&((&(F->State))->Pos)))>=(*(&((&((&(F->State))->Buffer))->Valid)))) )
{ 
 /* line 851: */
 /* line 852: */
IZCAASP = (&((&(F->State))->Ended)) ;
HZCAASP = !((*IZCAASP) = A68_TRUE);
} 
else
{ 
RYCAASP_argensurebytes( F, ZTAAASP_charbinbytes, &JZCAASP );
KZCAASP = 1 ;
(*C) = (*(&A_VINDEX(JZCAASP,KZCAASP)));
 /* line 853: */
 /* line 854: */
HZCAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))>0);
} 
A_PROC_EXIT(arggetch);
return( HZCAASP );
} 
#undef NL

A_STATIC A68_INT  DADAASP_envestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C)
{ 
A68_INT  EADAASP;  /* clause result */
A_PROC_ENTRY(envestab);
EADAASP = ZBCAASP_environmentstringestaberr;
A_PROC_EXIT(envestab);
return( EADAASP );
} 
#undef NL

A_STATIC A68_INT  GADAASP_envopen(A68_56 * F)
{ 
A68_35 * HADAASP_cs;
A68_BOOL  IADAASP;  /* optbool result */
A68_VC  LADAASP;  /* avoid structure result */
A68_BOOL  MADAASP;  /* clause result */
A68_INT  NADAASP;  /* clause result */
A68_INT  OADAASP_csl;
A68_58  PADAASP;  /* collateral clause result */
A68_34  RADAASP_generator;   /* proc value of non-global proc */
A68_VC  WADAASP;  /* avoid structure result */
A68_VC  XADAASP;  /* OPERATORS - istruct -> vector */
A68_VC  YADAASP;  /* OPERATORS - trim index */
A68_VC  ZADAASP;  /* OPERATORS - trim index */
A68_VC  ABDAASP;  /* OPERATORS - assign op */
A68_58 * BBDAASP;  /* YIELD */
A68_INT * CBDAASP;  /* YIELD */
A68_INT * DBDAASP;  /* YIELD */
A68_VC  EBDAASP;  /* YIELD */
A68_RC  FBDAASP;  /* OPERATORS - vector -> row */
A68_43 * GBDAASP;  /* YIELD */
A68_INT * HBDAASP;  /* YIELD */
A_PROC_ENTRY(envopen);
 /* line 870: */
{ 
 /* line 871: */
 /* line 873: */
IADAASP = ((&((&(F->Book))->Idf))==(A68_VC *)A68_NIL);
if ( ! IADAASP )
{ /* line 874: */
IADAASP = A_VC_EQ((*(&((&(F->Book))->Idf))),KADAASP);
}
 /* line 875: */
if ( ! IADAASP )
{ /* line 876: */
SMAAASP_z( (*(&((&(F->Book))->Idf))), &LADAASP );
IADAASP = ((HADAASP_cs = IFAAASP_posixgetenv(LADAASP))==(A68_35 *)A68_NIL);
}
 /* line 877: */
MADAASP = IADAASP;
if ( MADAASP )
{ 
 /* line 878: */
NADAASP = YBCAASP_environmentstringunset;
} 
else
{ 
OADAASP_csl = RFAAASP_posixstrlen(HADAASP_cs);
 /* line 879: */
PADAASP.Readmood = A68_TRUE;
PADAASP.Charmood = A68_TRUE;
PADAASP.Opened = A68_TRUE;
PADAASP.Ended = A68_FALSE;
PADAASP.Bol = A68_TRUE;
PADAASP.Backch = (-1);
 /* line 880: */
PADAASP.Lasterror = 0;
A_CLOSURE( RADAASP_generator, SADAASP_generator, TADAASP_generator );
(( TADAASP_generator * ) ( RADAASP_generator.nonlocals )) -> OADAASP_csl = OADAASP_csl;
A_CALLPROC(RADAASP_generator,(A68_FALSE, &WADAASP),(A68_FALSE, &WADAASP,(RADAASP_generator).nonlocals));
YADAASP = A_ISVEC(XADAASP,HADAASP_cs,16000000,A68_CHAR ) ;
ABDAASP = A_VTRIM(ZADAASP,(YADAASP),A_VTSCRIPT(&(ZADAASP.upb),(YADAASP).upb,1,(OADAASP_csl+1))) ;
A_VASSIGN2(ABDAASP,WADAASP,A68_CHAR ) ;
PADAASP.Buffer.Start = WADAASP;
PADAASP.Buffer.Max = 0;
PADAASP.Buffer.Valid = 0;
PADAASP.Buffer.Pos = 0;
PADAASP.Buffer.Writeback = A68_FALSE;
PADAASP.Buffer.Flushafterput = A68_FALSE;
PADAASP.Pos = CBCAASP_zeropos;
BBDAASP = (&(F->State)) ;
(*BBDAASP) = PADAASP;
 /* line 881: */
 /* line 882: */
CBDAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
DBDAASP = (&((&((&(F->State))->Buffer))->Max)) ;
(*DBDAASP) = (*CBDAASP) = (*(&((&((&(F->State))->Buffer))->Start))).upb;
 /* line 883: */
EBDAASP = A_C_PLUS(XUAAASP_nulch,TUAAASP_lf) ;
GBDAASP = (&((&(F->Io))->Stringterm)) ;
(*GBDAASP) = EYAAASP_stringtobag(A_VECARR(EBDAASP,FBDAASP));
 /* line 884: */
HBDAASP = (&(F->Sysfile)) ;
(*HBDAASP) = (-1);
 /* line 885: */
 /* line 886: */
NADAASP = 0;
} 
} 
A_PROC_EXIT(envopen);
return( NADAASP );
} 
#undef NL

A_STATIC A68_VOID  JBDAASP_envclose(A68_56 * F)
{ 
A_PROC_ENTRY(envclose);
/*SKIP*/;
A_PROC_EXIT(envclose);
return;
} 
#undef NL

A_STATIC A68_BOOL  MBDAASP_envset(A68_56 * F, A68_INT  P)
{ 
A68_INT * NBDAASP;  /* YIELD */
A68_BOOL  OBDAASP;  /* clause result */
A_PROC_ENTRY(envset);
 /* line 891: */
 /* line 892: */
{ 
NBDAASP = (&((&(F->State))->Lasterror)) ;
(*NBDAASP) = 0;
 /* line 893: */
 /* line 894: */
OBDAASP = ((P>=0)&(P<=(*(&((&((&(F->State))->Buffer))->Valid)))));
} 
A_PROC_EXIT(envset);
return( OBDAASP );
} 
#undef NL

A_STATIC A68_INT  QBDAASP_envlpos(A68_56 * F)
{ 
A68_INT  RBDAASP;  /* clause result */
A_PROC_ENTRY(envlpos);
RBDAASP = (*(&((&((&(F->State))->Buffer))->Valid)));
A_PROC_EXIT(envlpos);
return( RBDAASP );
} 
#undef NL

A_STATIC A68_INT  UBDAASP_envputbuf(A68_56 * F, A68_VC  Buf)
{ 
A68_INT  VBDAASP;  /* clause result */
A_PROC_ENTRY(envputbuf);
VBDAASP = Buf.upb;
A_PROC_EXIT(envputbuf);
return( VBDAASP );
} 
#undef NL

A_STATIC A68_INT  YBDAASP_envgetbuf(A68_56 * F, A68_VC  Buf)
{ 
A68_INT  ZBDAASP;  /* clause result */
A_PROC_ENTRY(envgetbuf);
ZBDAASP = Buf.upb;
A_PROC_EXIT(envgetbuf);
return( ZBDAASP );
} 
#undef NL

A_STATIC A68_VOID  BCDAASP_envflushbuffer(A68_56 * F)
{ 
A_PROC_ENTRY(envflushbuffer);
/*SKIP*/;
A_PROC_EXIT(envflushbuffer);
return;
} 
#undef NL

A_STATIC A68_VOID  ECDAASP_envensurebytes(A68_56 * F, A68_INT  Bytes, A68_VC  *ReturnedValue)
{ 
A68_44 * FCDAASP_fb;
A68_BOOL  GCDAASP;  /* clause result */
A68_INT * HCDAASP;  /* YIELD */
A68_VC  ICDAASP;  /* clause result */
A68_VC  JCDAASP;  /* OPERATORS - trim index */
A68_VC  KCDAASP;  /* OPERATORS - trim index */
A68_VC  LCDAASP;  /* OPERATORS - trim index */
A68_VC  MCDAASP;  /* OPERATORS - trim index */
A_PROC_ENTRY(envensurebytes);
 /* line 904: */
{ 
FCDAASP_fb = (&((&(F->State))->Buffer));
 /* line 905: */
 /* line 906: */
GCDAASP = ((*(&((&(F->State))->Pos)))==(*(&(FCDAASP_fb->Valid))));
if ( GCDAASP )
{ 
HCDAASP = (&(FCDAASP_fb->Valid)) ;
(*HCDAASP) = 0;
 /* line 907: */
JCDAASP = (*(&(FCDAASP_fb->Start))) ;
ICDAASP = A_VTRIM(KCDAASP,(JCDAASP),A_VTSCRIPT(&(KCDAASP.upb),(JCDAASP).upb,1,Bytes));
} 
else
{ 
 /* line 908: */
LCDAASP = (*(&(FCDAASP_fb->Start))) ;
ICDAASP = A_VTRIM(MCDAASP,(LCDAASP),A_VTSCRIPT(&(MCDAASP.upb),(LCDAASP).upb,((*(&((&(F->State))->Pos)))+1),((*(&((&(F->State))->Pos)))+Bytes)));
} 
} 
A_PROC_EXIT(envensurebytes);
*ReturnedValue = (ICDAASP);
return;
} 
#undef NL

A_STATIC A68_BOOL  PCDAASP_envputch(A68_56 * F, A68_CHAR  C)
{ 
A68_BOOL  QCDAASP;  /* clause result */
A_PROC_ENTRY(envputch);
QCDAASP = A68_FALSE;
A_PROC_EXIT(envputch);
return( QCDAASP );
} 
#undef NL

A_STATIC A68_BOOL  TCDAASP_envgetch(A68_56 * F, A68_CHAR * C)
{ 
A68_BOOL  UCDAASP;  /* clause result */
A68_BOOL * VCDAASP;  /* YIELD */
A68_VC  WCDAASP;  /* avoid structure result */
A68_INT  XCDAASP;  /* YIELD */
A_PROC_ENTRY(envgetch);
 /* line 913: */
 /* line 914: */
if ( ((*(&((&(F->State))->Pos)))>=(*(&((&((&(F->State))->Buffer))->Valid)))) )
{ 
 /* line 915: */
 /* line 916: */
VCDAASP = (&((&(F->State))->Ended)) ;
UCDAASP = !((*VCDAASP) = A68_TRUE);
} 
else
{ 
ECDAASP_envensurebytes( F, 1, &WCDAASP );
XCDAASP = 1 ;
(*C) = (*(&A_VINDEX(WCDAASP,XCDAASP)));
 /* line 917: */
 /* line 918: */
UCDAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))>0);
} 
A_PROC_EXIT(envgetch);
return( UCDAASP );
} 
#undef NL

A_STATIC A68_INT  QDDAASP_memestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C)
{ 
A68_58  RDDAASP;  /* collateral clause result */
A68_58 * SDDAASP;  /* YIELD */
A68_BOOL  TDDAASP;  /* clause result */
A68_44  UDDAASP;  /* collateral clause result */
A68_VC  VDDAASP;  /* avoid structure result */
A68_44 * WDDAASP;  /* YIELD */
A68_INT * XDDAASP;  /* YIELD */
A68_INT  YDDAASP;  /* clause result */
A_PROC_ENTRY(memestab);
 /* line 933: */
RDDAASP.Readmood = A68_FALSE;
RDDAASP.Charmood = A68_FALSE;
RDDAASP.Opened = A68_TRUE;
RDDAASP.Ended = A68_FALSE;
RDDAASP.Bol = A68_TRUE;
RDDAASP.Backch = (-1);
RDDAASP.Lasterror = 0;
RDDAASP.Buffer = WACAASP_nobuffer;
RDDAASP.Pos = CBCAASP_zeropos;
SDDAASP = (&(F->State)) ;
(*SDDAASP) = RDDAASP;
 /* line 934: */
 /* line 935: */
 /* line 936: */
TDDAASP = (((P==1)&(L==1))&(C>0));
if ( TDDAASP )
{ 
OQAAASP_sysbuff( C, &VDDAASP );
UDDAASP.Start = VDDAASP;
UDDAASP.Max = C;
UDDAASP.Valid = 0;
UDDAASP.Pos = 0;
UDDAASP.Writeback = A68_FALSE;
UDDAASP.Flushafterput = A68_FALSE;
WDDAASP = (&((&(F->State))->Buffer)) ;
(*WDDAASP) = UDDAASP;
 /* line 937: */
XDDAASP = (&(F->Sysfile)) ;
(*XDDAASP) = (-1);
 /* line 938: */
 /* line 939: */
 /* line 940: */
YDDAASP = 0;
} 
else
{ 
YDDAASP = ACCAASP_estabinvalidparameters;
} 
A_PROC_EXIT(memestab);
return( YDDAASP );
} 
#undef NL

A_STATIC A68_INT  AEDAASP_memopen(A68_56 * F)
{ 
A68_BOOL  BEDAASP;  /* optbool result */
A68_INT  EEDAASP;  /* clause result */
A68_58  FEDAASP;  /* collateral clause result */
A68_58 * GEDAASP;  /* YIELD */
A68_INT * HEDAASP;  /* YIELD */
A_PROC_ENTRY(memopen);
 /* line 943: */
 /* line 945: */
BEDAASP = ((&((&(F->Book))->Idf))==(A68_VC *)A68_NIL);
if ( ! BEDAASP )
{ /* line 946: */
BEDAASP = A_VC_EQ((*(&((&(F->Book))->Idf))),DEDAASP);
}
 /* line 947: */
if ( BEDAASP )
{ 
 /* line 948: */
EEDAASP = BCCAASP_openinvalidparameters;
} 
else
{ 
FEDAASP.Readmood = A68_TRUE;
FEDAASP.Charmood = A68_FALSE;
FEDAASP.Opened = A68_TRUE;
FEDAASP.Ended = A68_FALSE;
FEDAASP.Bol = A68_TRUE;
FEDAASP.Backch = (-1);
 /* line 949: */
FEDAASP.Lasterror = 0;
FEDAASP.Buffer.Start = (*(&((&(F->Book))->Idf)));
 /* line 950: */
FEDAASP.Buffer.Max = (*(&((&(F->Book))->Idf))).upb;
FEDAASP.Buffer.Valid = (*(&((&(F->Book))->Idf))).upb;
FEDAASP.Buffer.Pos = 0;
FEDAASP.Buffer.Writeback = A68_FALSE;
FEDAASP.Buffer.Flushafterput = A68_FALSE;
FEDAASP.Pos = 0;
GEDAASP = (&(F->State)) ;
(*GEDAASP) = FEDAASP;
 /* line 951: */
HEDAASP = (&(F->Sysfile)) ;
(*HEDAASP) = (-1);
 /* line 952: */
 /* line 953: */
EEDAASP = 0;
} 
A_PROC_EXIT(memopen);
return( EEDAASP );
} 
#undef NL

A_STATIC A68_VOID  JEDAASP_memclose(A68_56 * F)
{ 
A_PROC_ENTRY(memclose);
/*SKIP*/;
A_PROC_EXIT(memclose);
return;
} 
#undef NL

A_STATIC A68_BOOL  MEDAASP_memset(A68_56 * F, A68_INT  P)
{ 
A68_INT * NEDAASP;  /* YIELD */
A68_BOOL  OEDAASP;  /* clause result */
A_PROC_ENTRY(memset);
 /* line 958: */
 /* line 959: */
{ 
NEDAASP = (&((&(F->State))->Lasterror)) ;
(*NEDAASP) = 0;
 /* line 960: */
 /* line 961: */
OEDAASP = ((P>=0)&(P<=(*(&((&((&(F->State))->Buffer))->Max)))));
} 
A_PROC_EXIT(memset);
return( OEDAASP );
} 
#undef NL

A_STATIC A68_INT  QEDAASP_memlpos(A68_56 * F)
{ 
A68_INT  REDAASP;  /* clause result */
A_PROC_ENTRY(memlpos);
REDAASP = (*(&((&((&(F->State))->Buffer))->Valid)));
A_PROC_EXIT(memlpos);
return( REDAASP );
} 
#undef NL

A_STATIC A68_INT  UEDAASP_memputbuf(A68_56 * F, A68_VC  Buf)
{ 
A68_INT  VEDAASP;  /* clause result */
A_PROC_ENTRY(memputbuf);
VEDAASP = 0;
A_PROC_EXIT(memputbuf);
return( VEDAASP );
} 
#undef NL

A_STATIC A68_INT  YEDAASP_memgetbuf(A68_56 * F, A68_VC  Buf)
{ 
A68_INT  ZEDAASP;  /* clause result */
A_PROC_ENTRY(memgetbuf);
ZEDAASP = 0;
A_PROC_EXIT(memgetbuf);
return( ZEDAASP );
} 
#undef NL

A_STATIC A68_VOID  BFDAASP_memflushbuffer(A68_56 * F)
{ 
A_PROC_ENTRY(memflushbuffer);
/*SKIP*/;
A_PROC_EXIT(memflushbuffer);
return;
} 
#undef NL

A_STATIC A68_VOID  EFDAASP_memensurebytes(A68_56 * F, A68_INT  Bytes, A68_VC  *ReturnedValue)
{ 
A68_44 * FFDAASP_fb;
A68_INT  GFDAASP;  /* clause result */
A68_BOOL  HFDAASP;  /* clause result */
A68_INT * IFDAASP;  /* YIELD */
A68_59  JFDAASP;  /* CALL */
A68_VC  KFDAASP;  /* avoid structure result */
A68_59  LFDAASP;  /* CALL */
A68_VC  MFDAASP;  /* avoid structure result */
A68_VC  NFDAASP;  /* clause result */
A68_VC  OFDAASP;  /* OPERATORS - trim index */
A68_VC  PFDAASP;  /* OPERATORS - trim index */
A68_VC  QFDAASP;  /* OPERATORS - trim index */
A68_VC  RFDAASP;  /* OPERATORS - trim index */
A_PROC_ENTRY(memensurebytes);
 /* line 971: */
{ 
FFDAASP_fb = (&((&(F->State))->Buffer));
 /* line 972: */
 /* line 973: */
 /* line 974: */
if ( (*(&((&(F->State))->Readmood))) )
{ 
 /* line 975: */
GFDAASP = (*(&(FFDAASP_fb->Valid)));
} 
else
{ 
 /* line 976: */
GFDAASP = (*(&(FFDAASP_fb->Max)));
} 
 /* line 977: */
HFDAASP = (((*(&((&(F->State))->Pos)))+Bytes)>GFDAASP);
if ( HFDAASP )
{ 
IFDAASP = (&(FFDAASP_fb->Valid)) ;
(*IFDAASP) = 0;
 /* line 978: */
 /* line 979: */
 /* line 980: */
if ( (*(&((&(F->State))->Readmood))) )
{ 
 /* line 981: */
JFDAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(JFDAASP,(F),(F,(JFDAASP).nonlocals)) )
{ 
 /* line 982: */
EFDAASP_memensurebytes( F, Bytes, &KFDAASP );
KFDAASP;
} 
else
{ 
 /* line 983: */
 /* line 984: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 985: */
LFDAASP = (*(&((&(F->Io))->Physicalfilemended))) ;
if ( A_CALLPROC(LFDAASP,(F),(F,(LFDAASP).nonlocals)) )
{ 
 /* line 986: */
EFDAASP_memensurebytes( F, Bytes, &MFDAASP );
MFDAASP;
} 
else
{ 
 /* line 987: */
JDCAASP_transputerror(F, VBCAASP_physicalfileendnotmended);
} 
} 
 /* line 988: */
 /* line 989: */
OFDAASP = (*(&(FFDAASP_fb->Start))) ;
NFDAASP = A_VTRIM(PFDAASP,(OFDAASP),A_VTSCRIPT(&(PFDAASP.upb),(OFDAASP).upb,1,Bytes));
} 
else
{ 
 /* line 990: */
QFDAASP = (*(&(FFDAASP_fb->Start))) ;
NFDAASP = A_VTRIM(RFDAASP,(QFDAASP),A_VTSCRIPT(&(RFDAASP.upb),(QFDAASP).upb,((*(&((&(F->State))->Pos)))+1),((*(&((&(F->State))->Pos)))+Bytes)));
} 
} 
A_PROC_EXIT(memensurebytes);
*ReturnedValue = (NFDAASP);
return;
} 
#undef NL

A_STATIC A68_BOOL  UFDAASP_memputch(A68_56 * F, A68_CHAR  C)
{ 
A68_BOOL  VFDAASP;  /* clause result */
A68_VC  WFDAASP;  /* avoid structure result */
A68_INT  XFDAASP;  /* YIELD */
A68_CHAR * YFDAASP;  /* YIELD */
A68_INT * ZFDAASP;  /* YIELD */
A_PROC_ENTRY(memputch);
 /* line 993: */
 /* line 994: */
if ( ((*(&((&(F->State))->Pos)))==(*(&((&((&(F->State))->Buffer))->Max)))) )
{ 
 /* line 995: */
 /* line 996: */
VFDAASP = A68_FALSE;
} 
else
{ 
EFDAASP_memensurebytes( F, 1, &WFDAASP );
XFDAASP = 1 ;
YFDAASP = (&A_VINDEX(WFDAASP,XFDAASP)) ;
(*YFDAASP) = C;
 /* line 997: */
ZFDAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*ZFDAASP)+=1;
 /* line 998: */
 /* line 999: */
VFDAASP = A68_TRUE;
} 
A_PROC_EXIT(memputch);
return( VFDAASP );
} 
#undef NL

A_STATIC A68_BOOL  CGDAASP_memgetch(A68_56 * F, A68_CHAR * C)
{ 
A68_BOOL  DGDAASP;  /* clause result */
A68_VC  EGDAASP;  /* avoid structure result */
A68_INT  FGDAASP;  /* YIELD */
A_PROC_ENTRY(memgetch);
 /* line 1002: */
 /* line 1003: */
if ( ((*(&((&(F->State))->Pos)))>=(*(&((&((&(F->State))->Buffer))->Valid)))) )
{ 
 /* line 1004: */
 /* line 1005: */
DGDAASP = A68_FALSE;
} 
else
{ 
EFDAASP_memensurebytes( F, 1, &EGDAASP );
FGDAASP = 1 ;
(*C) = (*(&A_VINDEX(EGDAASP,FGDAASP)));
 /* line 1006: */
 /* line 1007: */
DGDAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))>0);
} 
A_PROC_EXIT(memgetch);
return( DGDAASP );
} 
#undef NL

A_STATIC A68_VOID  XGDAASP_sysunpackstraddrlist(A68_36 * A, A68_INT  L, A68_227  *ReturnedValue)
{ 
A68_INT  YGDAASP_n;
A68_INT  ZGDAASP_i;
A68_222  AHDAASP;  /* OPERATORS - istruct -> vector */
A68_222  BHDAASP;  /* OPERATORS - simple index */
A68_255  DHDAASP_generator;   /* proc value of non-global proc */
A68_227  SHDAASP;  /* avoid structure result */
A68_227  THDAASP_hrs;
A68_INT  UHDAASP_i;
A68_INT  VHDAASP;  /* to part of loop */
A68_222  WHDAASP;  /* OPERATORS - istruct -> vector */
A68_222  XHDAASP;  /* OPERATORS - simple index */
A68_35 * YHDAASP_ai;
A68_VC  ZHDAASP;  /* OPERATORS - istruct -> vector */
A68_VC  AIDAASP;  /* OPERATORS - trim index */
A68_VC  BIDAASP;  /* OPERATORS - trim index */
A68_VC  CIDAASP;  /* YIELD */
A68_RC  DIDAASP;  /* OPERATORS - vector -> row */
A68_RC  EIDAASP;  /* YIELD */
A68_RC  FIDAASP;  /* OPERATORS - copy to flex */
A68_32 * GIDAASP;  /* YIELD */
A68_INT  HIDAASP_i;
A68_INT  IIDAASP;  /* to part of loop */
A68_222  JIDAASP;  /* OPERATORS - istruct -> vector */
A68_222  KIDAASP;  /* OPERATORS - simple index */
A68_VC  LIDAASP;  /* avoid structure result */
A68_RC  MIDAASP;  /* OPERATORS - vector -> row */
A68_RC  NIDAASP;  /* YIELD */
A68_RC  OIDAASP;  /* OPERATORS - copy to flex */
A68_32 * PIDAASP;  /* YIELD */
A68_227  QIDAASP;  /* clause result */
A_PROC_ENTRY(sysunpackstraddrlist);
 /* line 1034: */
 /* line 1037: */
{ 
YGDAASP_n = 0;
 /* line 1038: */
for ( ZGDAASP_i = 1;;
ZGDAASP_i += 1 ) 
{ 
BHDAASP = A_ISVEC(AHDAASP,A,16000000,A68_35 *) ;
if ( !(((*(&A_VINDEX(BHDAASP,ZGDAASP_i)))!=(A68_35 *)A68_NIL)) ) break;
YGDAASP_n+=1;
}
 /* line 1039: */
A_CLOSURE( DHDAASP_generator, EHDAASP_generator, FHDAASP_generator );
(( FHDAASP_generator * ) ( DHDAASP_generator.nonlocals )) -> YGDAASP_n = (&YGDAASP_n);
(( FHDAASP_generator * ) ( DHDAASP_generator.nonlocals )) -> L = L;
A_CALLPROC(DHDAASP_generator,(A68_FALSE, &SHDAASP),(A68_FALSE, &SHDAASP,(DHDAASP_generator).nonlocals));
THDAASP_hrs = SHDAASP;
 /* line 1041: */
 /* line 1042: */
 /* line 1043: */
if ( (L>0) )
{ 
 /* line 1044: */
VHDAASP = YGDAASP_n;
for ( UHDAASP_i = 1;
UHDAASP_i <= VHDAASP;
UHDAASP_i += 1 )
{ 
 /* line 1045: */
XHDAASP = A_ISVEC(WHDAASP,A,16000000,A68_35 *) ;
YHDAASP_ai = (*(&A_VINDEX(XHDAASP,UHDAASP_i)));
 /* line 1046: */
 /* line 1047: */
AIDAASP = A_ISVEC(ZHDAASP,YHDAASP_ai,16000000,A68_CHAR ) ;
CIDAASP = A_VTRIM(BIDAASP,(AIDAASP),A_VTSCRIPT(&(BIDAASP.upb),(AIDAASP).upb,1,L)) ;
EIDAASP = A_VECARR(CIDAASP,DIDAASP) ;
GIDAASP = (&A_R1INDEX(THDAASP_hrs,UHDAASP_i)) ;
(*GIDAASP) = A_R1COPY(EIDAASP,FIDAASP,A68_CHAR );
}
 /* line 1048: */
 /* line 1049: */
} 
else
{ 
 /* line 1050: */
IIDAASP = YGDAASP_n;
for ( HIDAASP_i = 1;
HIDAASP_i <= IIDAASP;
HIDAASP_i += 1 )
{ 
 /* line 1051: */
 /* line 1052: */
KIDAASP = A_ISVEC(JIDAASP,A,16000000,A68_35 *) ;
SJAAASP_cstrtorvc( (*(&A_VINDEX(KIDAASP,HIDAASP_i))), &LIDAASP );
NIDAASP = A_VECARR(LIDAASP,MIDAASP) ;
PIDAASP = (&A_R1INDEX(THDAASP_hrs,YGDAASP_n)) ;
(*PIDAASP) = A_R1COPY(NIDAASP,OIDAASP,A68_CHAR );
}
 /* line 1053: */
} 
 /* line 1055: */
 /* line 1056: */
QIDAASP = THDAASP_hrs;
} 
A_PROC_EXIT(sysunpackstraddrlist);
*ReturnedValue = (QIDAASP);
return;
} 
#undef NL

A_STATIC A68_INT  TIDAASP_sysgetinetaddr(A68_VC  Host, A68_BITS * Iaddr)
{ 
A68_INT  UIDAASP;  /* YIELD */
A68_CHAR  VIDAASP_h1;
A68_BOOL  WIDAASP;  /* clause result */
A68_INT  XIDAASP;  /* clause result */
A68_VC  YIDAASP;  /* avoid structure result */
A68_36 * ZIDAASP_hosthostent;
A68_BOOL  AJDAASP;  /* clause result */
A68_222  BJDAASP;  /* OPERATORS - istruct -> vector */
A68_222  CJDAASP;  /* OPERATORS - simple index */
A68_INT  DJDAASP;  /* YIELD */
union {  /* BIOP 99 */
A68_35 *  source;
A68_INT   destination;
} EJDAASP; 
A68_INT  FJDAASP_hlength;
A68_222  GJDAASP;  /* OPERATORS - istruct -> vector */
A68_222  HJDAASP;  /* OPERATORS - simple index */
A68_INT  IJDAASP;  /* YIELD */
union {  /* BIOP 99 */
A68_35 *  source;
A68_36 *  destination;
} JJDAASP; 
A68_227  KJDAASP;  /* avoid structure result */
A68_227  LJDAASP_haddrlist;
A68_BOOL  MJDAASP;  /* clause result */
A68_INT  NJDAASP;  /* YIELD */
A68_INT  OJDAASP;  /* YIELD */
A68_RC  PJDAASP_hl1;
A68_INT  QJDAASP_i;
A68_INT  RJDAASP;  /* SHL */
A_PROC_ENTRY(sysgetinetaddr);
 /* line 1059: */
{ 
UIDAASP = 1 ;
VIDAASP_h1 = (*(&A_VINDEX(Host,UIDAASP)));
 /* line 1060: */
 /* line 1061: */
WIDAASP = ((VIDAASP_h1>='0')&(VIDAASP_h1<='9'));
if ( WIDAASP )
{ 
 /* line 1062: */
 /* line 1063: */
if ( (UEAAASP_bsdinetaton(Host, Iaddr)==0) )
{ 
 /* line 1064: */
XIDAASP = ACCAASP_estabinvalidparameters;
} 
else
{ 
 /* line 1065: */
 /* line 1066: */
XIDAASP = 0;
} 
} 
else
{ 
{ 
SMAAASP_z( Host, &YIDAASP );
ZIDAASP_hosthostent = TEAAASP_bsdgethostbyname(YIDAASP);
 /* line 1067: */
 /* line 1068: */
 /* line 1069: */
AJDAASP = (ZIDAASP_hosthostent==(A68_36 *)A68_NIL);
if ( AJDAASP )
{ 
 /* line 1070: */
XIDAASP = ECCAASP_estabcannotresolveinetaddr;
} 
else
{ 
{ 
CJDAASP = A_ISVEC(BJDAASP,ZIDAASP_hosthostent,16000000,A68_35 *) ;
DJDAASP = 4 ;
EJDAASP.source = (*(&A_VINDEX(CJDAASP,DJDAASP))) ;
FJDAASP_hlength = (EJDAASP.destination);
 /* line 1071: */
 /* line 1072: */
 /* line 1073: */
HJDAASP = A_ISVEC(GJDAASP,ZIDAASP_hosthostent,16000000,A68_35 *) ;
IJDAASP = 5 ;
JJDAASP.source = (*(&A_VINDEX(HJDAASP,IJDAASP))) ;
XGDAASP_sysunpackstraddrlist( (JJDAASP.destination), FJDAASP_hlength, &KJDAASP );
LJDAASP_haddrlist = KJDAASP;
 /* line 1075: */
 /* line 1076: */
if ( (LJDAASP_haddrlist.dim[0].upb>0) )
{ 
 /* line 1077: */
NJDAASP = 1 ;
MJDAASP = ((*(&A_R1INDEX(LJDAASP_haddrlist,NJDAASP))).dim[0].upb!=FJDAASP_hlength);
} 
else
{ 
 /* line 1078: */
 /* line 1079: */
 /* line 1080: */
MJDAASP = A68_TRUE;
} 
if ( MJDAASP )
{ 
 /* line 1081: */
XIDAASP = FCCAASP_estabinetaliaswronglength;
} 
else
{ 
OJDAASP = 1 ;
PJDAASP_hl1 = (*(&A_R1INDEX(LJDAASP_haddrlist,OJDAASP)));
(*Iaddr) = 0X0U;
 /* line 1083: */
 /* line 1084: */
for ( QJDAASP_i = 1;
QJDAASP_i <= 4;
QJDAASP_i += 1 )
{ 
 /* line 1085: */
 /* line 1086: */
RJDAASP = 8 ;
(*Iaddr) = (A68_BITS )(A_SHL((*Iaddr),RJDAASP)|(A68_BITS )((A68_BITS )(A68_INT)(unsigned char)A_R1INDEX(PJDAASP_hl1,QJDAASP_i)&0XffU));
}
 /* line 1088: */
 /* line 1089: */
XIDAASP = 0;
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(sysgetinetaddr);
return( XIDAASP );
} 
#undef NL

A_STATIC A68_VOID  TJDAASP_sockflushbuffer(A68_56 * Sf)
{ 
A68_VC  UJDAASP;  /* OPERATORS - trim index */
A68_VC  VJDAASP;  /* OPERATORS - trim index */
A68_BOOL * WJDAASP;  /* YIELD */
A68_INT * XJDAASP;  /* YIELD */
A68_INT * YJDAASP;  /* YIELD */
A_PROC_ENTRY(sockflushbuffer);
 /* line 1092: */
 /* line 1093: */
{ 
 /* line 1094: */
 /* line 1095: */
if ( (*(&((&((&(Sf->State))->Buffer))->Writeback))) )
{ 
 /* line 1096: */
UJDAASP = (*(&((&((&(Sf->State))->Buffer))->Start))) ;
SMCAASP_sysputbuf(Sf, A_VTRIM(VJDAASP,(UJDAASP),A_VTSCRIPT(&(VJDAASP.upb),(UJDAASP).upb,1,(*(&((&((&(Sf->State))->Buffer))->Valid))))));
 /* line 1097: */
 /* line 1098: */
WJDAASP = (&((&((&(Sf->State))->Buffer))->Writeback)) ;
(*WJDAASP) = A68_FALSE;
} 
 /* line 1099: */
XJDAASP = (&((&((&(Sf->State))->Buffer))->Valid)) ;
(*XJDAASP) = 0;
 /* line 1100: */
 /* line 1101: */
YJDAASP = (&((&((&(Sf->State))->Buffer))->Pos)) ;
(*YJDAASP) = (*(&((&(Sf->State))->Pos)));
} 
A_PROC_EXIT(sockflushbuffer);
return;
} 
#undef NL

A_STATIC A68_VOID  BKDAASP_sockensurebufspace(A68_56 * Sf, A68_INT  Bytes, A68_VC  *ReturnedValue)
{ 
A68_INT  CKDAASP_curr;
A68_INT  DKDAASP;  /* clause result */
A68_BOOL  EKDAASP;  /* clause result */
A68_INT  FKDAASP;  /* clause result */
A68_VC  GKDAASP;  /* OPERATORS - trim index */
A68_VC  HKDAASP;  /* OPERATORS - trim index */
A68_INT * IKDAASP;  /* YIELD */
A68_INT * JKDAASP;  /* YIELD */
A68_VC  KKDAASP;  /* clause result */
A68_VC  LKDAASP;  /* OPERATORS - trim index */
A68_VC  MKDAASP;  /* OPERATORS - trim index */
A68_VC  NKDAASP;  /* OPERATORS - trim index */
A68_VC  OKDAASP;  /* OPERATORS - trim index */
A_PROC_ENTRY(sockensurebufspace);
 /* line 1104: */
{ 
CKDAASP_curr = ((*(&((&(Sf->State))->Pos)))-(*(&((&((&(Sf->State))->Buffer))->Pos))));
 /* line 1105: */
 /* line 1106: */
 /* line 1107: */
if ( (*(&((&(Sf->State))->Readmood))) )
{ 
 /* line 1108: */
DKDAASP = (*(&((&((&(Sf->State))->Buffer))->Valid)));
} 
else
{ 
 /* line 1109: */
DKDAASP = (*(&((&((&(Sf->State))->Buffer))->Max)));
} 
 /* line 1110: */
EKDAASP = ((CKDAASP_curr+Bytes)>DKDAASP);
if ( EKDAASP )
{ 
TJDAASP_sockflushbuffer(Sf);
 /* line 1111: */
 /* line 1112: */
 /* line 1113: */
if ( (*(&((&(Sf->State))->Readmood))) )
{ 
 /* line 1114: */
 /* line 1115: */
 /* line 1116: */
GKDAASP = (*(&((&((&(Sf->State))->Buffer))->Start))) ;
FKDAASP = KMCAASP_sysgetbuf(Sf, A_VTRIM(HKDAASP,(GKDAASP),A_VTSCRIPT(&(HKDAASP.upb),(GKDAASP).upb,1,(*(&((&((&(Sf->State))->Buffer))->Max))))));
} 
else
{ 
FKDAASP = 0;
} 
IKDAASP = (&((&((&(Sf->State))->Buffer))->Valid)) ;
(*IKDAASP) = FKDAASP;
 /* line 1117: */
JKDAASP = (&((&((&(Sf->State))->Buffer))->Pos)) ;
(*JKDAASP) = (*(&((&(Sf->State))->Pos)));
 /* line 1118: */
 /* line 1119: */
LKDAASP = (*(&((&((&(Sf->State))->Buffer))->Start))) ;
KKDAASP = A_VTRIM(MKDAASP,(LKDAASP),A_VTSCRIPT(&(MKDAASP.upb),(LKDAASP).upb,1,Bytes));
} 
else
{ 
 /* line 1120: */
NKDAASP = (*(&((&((&(Sf->State))->Buffer))->Start))) ;
KKDAASP = A_VTRIM(OKDAASP,(NKDAASP),A_VTSCRIPT(&(OKDAASP.upb),(NKDAASP).upb,(CKDAASP_curr+1),(CKDAASP_curr+Bytes)));
} 
} 
A_PROC_EXIT(sockensurebufspace);
*ReturnedValue = (KKDAASP);
return;
} 
#undef NL

A_STATIC A68_INT  VKDAASP_clientsockestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C)
{ 
A68_INT  WKDAASP;  /* clause result */
A68_34  YKDAASP_generator;   /* proc value of non-global proc */
A68_VC  DLDAASP;  /* avoid structure result */
A68_VC  ELDAASP_sockaddr;
A68_VC  FLDAASP;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_SBITS   source;
A68_141   destination;
} GLDAASP; 
A68_VC  HLDAASP;  /* OPERATORS - istruct -> vector */
A68_141  ILDAASP;  /* OPERATORS - istruct -> vector */
A68_VC  JLDAASP;  /* YIELD */
A68_VC  KLDAASP;  /* OPERATORS - assign op */
A68_BOOL  LLDAASP;  /* clause result */
A68_INT  MLDAASP_u;
A68_VC  NLDAASP;  /* OPERATORS - trim index */
A68_VC  OLDAASP;  /* OPERATORS - trim index */
A68_VC  PLDAASP;  /* OPERATORS - trim index */
A68_VC  QLDAASP;  /* YIELD */
A68_VC  RLDAASP;  /* OPERATORS - assign op */
A68_INT * SLDAASP;  /* YIELD */
A68_58  TLDAASP;  /* collateral clause result */
A68_44  ULDAASP;  /* avoid structure result */
A68_58 * VLDAASP;  /* YIELD */
A68_BOOL  WLDAASP;  /* clause result */
A68_INT * XLDAASP;  /* YIELD */
A68_BITS  YLDAASP_inetaddr;
A68_BOOL  ZLDAASP;  /* clause result */
A68_INT * AMDAASP;  /* YIELD */
A68_58  BMDAASP;  /* collateral clause result */
A68_44  CMDAASP;  /* avoid structure result */
A68_58 * DMDAASP;  /* YIELD */
union {  /* BIOP 99 */
A68_SBITS   source;
A68_141   destination;
} EMDAASP; 
A68_RC  FMDAASP;  /* OPERATORS - istruct to row */
A68_141  GMDAASP;  /* OPERATORS - istruct to row */
A68_RC  HMDAASP_htos;
A68_INT  IMDAASP;  /* YIELD */
A68_INT  JMDAASP;  /* YIELD */
A68_CHAR * KMDAASP;  /* YIELD */
A68_INT  LMDAASP;  /* YIELD */
A68_INT  MMDAASP;  /* YIELD */
A68_CHAR * NMDAASP;  /* YIELD */
A68_VC  OMDAASP;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_BITS   source;
A68_135   destination;
} PMDAASP; 
A68_VC  QMDAASP;  /* OPERATORS - istruct -> vector */
A68_135  RMDAASP;  /* OPERATORS - istruct -> vector */
A68_VC  SMDAASP;  /* YIELD */
A68_VC  TMDAASP;  /* OPERATORS - assign op */
A68_BOOL  UMDAASP;  /* clause result */
A68_INT * VMDAASP;  /* YIELD */
A_PROC_ENTRY(clientsockestab);
 /* line 1127: */
 /* line 1128: */
 /* line 1129: */
if ( ((P!=CEAAASP_afunix)&(P!=DEAAASP_afinet)) )
{ 
 /* line 1130: */
WKDAASP = ACCAASP_estabinvalidparameters;
} 
else
{ 
{ 
A_CLOSURE( YKDAASP_generator, ZKDAASP_generator, ALDAASP_generator );
A_CALLPROC(YKDAASP_generator,(A68_FALSE, &DLDAASP),(A68_FALSE, &DLDAASP,(YKDAASP_generator).nonlocals));
ELDAASP_sockaddr = DLDAASP;
 /* line 1131: */
GLDAASP.source = (A68_SBITS )(A68_BITS )P ;
ILDAASP = (GLDAASP.destination) ;
JLDAASP = A_VTRIM(FLDAASP,(ELDAASP_sockaddr),A_VTSCRIPT(&(FLDAASP.upb),(ELDAASP_sockaddr).upb,1,2)) ;
KLDAASP = A_HISVEC(HLDAASP,ILDAASP,2,A68_CHAR ) ;
A_VASSIGN2(KLDAASP,JLDAASP,A68_CHAR );
 /* line 1132: */
 /* line 1133: */
 /* line 1134: */
LLDAASP = (P==CEAAASP_afunix);
if ( LLDAASP )
{ 
 /* line 1136: */
MLDAASP_u = XNAAASP_min((PKDAASP_sockaddrunsz-3), (*(&((&(F->Book))->Idf))).upb);
 /* line 1137: */
OLDAASP = (*(&((&(F->Book))->Idf))) ;
QLDAASP = A_VTRIM(NLDAASP,(ELDAASP_sockaddr),A_VTSCRIPT(&(NLDAASP.upb),(ELDAASP_sockaddr).upb,3,(2+MLDAASP_u))) ;
RLDAASP = A_VTRIM(PLDAASP,(OLDAASP),A_VTSCRIPT(&(PLDAASP.upb),(OLDAASP).upb,1,MLDAASP_u)) ;
A_VASSIGN2(RLDAASP,QLDAASP,A68_CHAR );
 /* line 1139: */
 /* line 1140: */
 /* line 1141: */
SLDAASP = (&(F->Sysfile)) ;
if ( (((*SLDAASP) = AFAAASP_bsdsocket(P, EEAAASP_sockstream, 0))==(-1)) )
{ 
 /* line 1142: */
WKDAASP = FEAAASP_errno;
} 
else
{ 
TLDAASP.Readmood = A68_FALSE;
TLDAASP.Charmood = A68_FALSE;
TLDAASP.Opened = A68_TRUE;
TLDAASP.Ended = A68_FALSE;
TLDAASP.Bol = A68_TRUE;
TLDAASP.Backch = (-1);
 /* line 1143: */
TLDAASP.Lasterror = 0;
YACAASP_newfilebuffer( C, &ULDAASP );
TLDAASP.Buffer = ULDAASP;
TLDAASP.Pos = CBCAASP_zeropos;
VLDAASP = (&(F->State)) ;
(*VLDAASP) = TLDAASP;
 /* line 1144: */
 /* line 1145: */
 /* line 1146: */
WLDAASP = (REAAASP_bsdconnect((*(&(F->Sysfile))), ELDAASP_sockaddr, PKDAASP_sockaddrunsz)==(-1));
if ( WLDAASP )
{ 
WKDAASP = FEAAASP_errno;
} 
else
{ 
 /* line 1147: */
 /* line 1148: */
 /* line 1149: */
XLDAASP = (&((&(F->State))->Lasterror)) ;
WKDAASP = (*XLDAASP) = 0;
} 
} 
} 
else
{ 
{ 
YLDAASP_inetaddr = 0X0U;
 /* line 1150: */
 /* line 1151: */
 /* line 1152: */
ZLDAASP = (TIDAASP_sysgetinetaddr((*(&((&(F->Book))->Idf))), (&YLDAASP_inetaddr))!=0);
if ( ZLDAASP )
{ 
WKDAASP = ACCAASP_estabinvalidparameters;
} 
else
{ 
 /* line 1153: */
 /* line 1154: */
AMDAASP = (&(F->Sysfile)) ;
if ( (((*AMDAASP) = AFAAASP_bsdsocket(P, EEAAASP_sockstream, 0))==(-1)) )
{ 
 /* line 1155: */
WKDAASP = FEAAASP_errno;
} 
else
{ 
{ 
BMDAASP.Readmood = A68_FALSE;
BMDAASP.Charmood = A68_FALSE;
BMDAASP.Opened = A68_TRUE;
BMDAASP.Ended = A68_FALSE;
BMDAASP.Bol = A68_TRUE;
BMDAASP.Backch = (-1);
 /* line 1156: */
BMDAASP.Lasterror = 0;
YACAASP_newfilebuffer( C, &CMDAASP );
BMDAASP.Buffer = CMDAASP;
BMDAASP.Pos = CBCAASP_zeropos;
DMDAASP = (&(F->State)) ;
(*DMDAASP) = BMDAASP;
 /* line 1157: */
EMDAASP.source = (A68_SBITS )(A68_BITS )L ;
GMDAASP = (EMDAASP.destination) ;
HMDAASP_htos = A_HIS1ARR(FMDAASP,GMDAASP,A68_CHAR ,2);
 /* line 1158: */
IMDAASP = 3 ;
JMDAASP = 2 ;
KMDAASP = (&A_VINDEX(ELDAASP_sockaddr,IMDAASP)) ;
(*KMDAASP) = A_R1INDEX(HMDAASP_htos,JMDAASP);
LMDAASP = 4 ;
MMDAASP = 1 ;
NMDAASP = (&A_VINDEX(ELDAASP_sockaddr,LMDAASP)) ;
(*NMDAASP) = A_R1INDEX(HMDAASP_htos,MMDAASP);
 /* line 1159: */
PMDAASP.source = YLDAASP_inetaddr ;
RMDAASP = (PMDAASP.destination) ;
SMDAASP = A_VTRIM(OMDAASP,(ELDAASP_sockaddr),A_VTSCRIPT(&(OMDAASP.upb),(ELDAASP_sockaddr).upb,5,8)) ;
TMDAASP = A_HISVEC(QMDAASP,RMDAASP,4,A68_CHAR ) ;
A_VASSIGN2(TMDAASP,SMDAASP,A68_CHAR );
 /* line 1160: */
 /* line 1161: */
 /* line 1162: */
UMDAASP = (REAAASP_bsdconnect((*(&(F->Sysfile))), ELDAASP_sockaddr, QKDAASP_sockaddrinsz)==(-1));
if ( UMDAASP )
{ 
WKDAASP = FEAAASP_errno;
} 
else
{ 
 /* line 1163: */
VMDAASP = (&((&(F->State))->Lasterror)) ;
WKDAASP = (*VMDAASP) = 0;
} 
} 
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(clientsockestab);
return( WKDAASP );
} 
#undef NL

A_STATIC A68_INT  ANDAASP_serversockestab(A68_56 * F, A68_INT  P, A68_INT  L, A68_INT  C)
{ 
A68_INT  BNDAASP;  /* clause result */
A68_34  DNDAASP_generator;   /* proc value of non-global proc */
A68_VC  INDAASP;  /* avoid structure result */
A68_VC  JNDAASP_sockaddr;
A68_VC  KNDAASP;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_SBITS   source;
A68_141   destination;
} LNDAASP; 
A68_VC  MNDAASP;  /* OPERATORS - istruct -> vector */
A68_141  NNDAASP;  /* OPERATORS - istruct -> vector */
A68_VC  ONDAASP;  /* YIELD */
A68_VC  PNDAASP;  /* OPERATORS - assign op */
A68_BOOL  QNDAASP;  /* clause result */
A68_INT  RNDAASP_u;
A68_VC  SNDAASP;  /* OPERATORS - trim index */
A68_VC  TNDAASP;  /* OPERATORS - trim index */
A68_VC  UNDAASP;  /* OPERATORS - trim index */
A68_VC  VNDAASP;  /* YIELD */
A68_VC  WNDAASP;  /* OPERATORS - assign op */
A68_INT * XNDAASP;  /* YIELD */
A68_INT * YNDAASP;  /* YIELD */
A68_BITS  ZNDAASP_inetaddr;
A68_BOOL  AODAASP;  /* clause result */
A68_INT * BODAASP;  /* YIELD */
union {  /* BIOP 99 */
A68_SBITS   source;
A68_141   destination;
} CODAASP; 
A68_RC  DODAASP;  /* OPERATORS - istruct to row */
A68_141  EODAASP;  /* OPERATORS - istruct to row */
A68_RC  FODAASP_htos;
A68_INT  GODAASP;  /* YIELD */
A68_INT  HODAASP;  /* YIELD */
A68_CHAR * IODAASP;  /* YIELD */
A68_INT  JODAASP;  /* YIELD */
A68_INT  KODAASP;  /* YIELD */
A68_CHAR * LODAASP;  /* YIELD */
A68_VC  MODAASP;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_BITS   source;
A68_135   destination;
} NODAASP; 
A68_VC  OODAASP;  /* OPERATORS - istruct -> vector */
A68_135  PODAASP;  /* OPERATORS - istruct -> vector */
A68_VC  QODAASP;  /* YIELD */
A68_VC  RODAASP;  /* OPERATORS - assign op */
A68_BOOL  SODAASP;  /* clause result */
A68_INT * TODAASP;  /* YIELD */
A_PROC_ENTRY(serversockestab);
 /* line 1166: */
 /* line 1167: */
 /* line 1168: */
if ( ((P!=CEAAASP_afunix)&(P!=DEAAASP_afinet)) )
{ 
 /* line 1169: */
BNDAASP = ACCAASP_estabinvalidparameters;
} 
else
{ 
{ 
A_CLOSURE( DNDAASP_generator, ENDAASP_generator, FNDAASP_generator );
A_CALLPROC(DNDAASP_generator,(A68_FALSE, &INDAASP),(A68_FALSE, &INDAASP,(DNDAASP_generator).nonlocals));
JNDAASP_sockaddr = INDAASP;
 /* line 1170: */
LNDAASP.source = (A68_SBITS )(A68_BITS )P ;
NNDAASP = (LNDAASP.destination) ;
ONDAASP = A_VTRIM(KNDAASP,(JNDAASP_sockaddr),A_VTSCRIPT(&(KNDAASP.upb),(JNDAASP_sockaddr).upb,1,2)) ;
PNDAASP = A_HISVEC(MNDAASP,NNDAASP,2,A68_CHAR ) ;
A_VASSIGN2(PNDAASP,ONDAASP,A68_CHAR );
 /* line 1171: */
 /* line 1172: */
 /* line 1173: */
QNDAASP = (P==CEAAASP_afunix);
if ( QNDAASP )
{ 
 /* line 1175: */
RNDAASP_u = XNAAASP_min((PKDAASP_sockaddrunsz-3), (*(&((&(F->Book))->Idf))).upb);
 /* line 1176: */
TNDAASP = (*(&((&(F->Book))->Idf))) ;
VNDAASP = A_VTRIM(SNDAASP,(JNDAASP_sockaddr),A_VTSCRIPT(&(SNDAASP.upb),(JNDAASP_sockaddr).upb,3,(2+RNDAASP_u))) ;
WNDAASP = A_VTRIM(UNDAASP,(TNDAASP),A_VTSCRIPT(&(UNDAASP.upb),(TNDAASP).upb,1,RNDAASP_u)) ;
A_VASSIGN2(WNDAASP,VNDAASP,A68_CHAR );
 /* line 1177: */
TFAAASP_posixunlink((*(&((&(F->Book))->Idf))));
 /* line 1179: */
 /* line 1180: */
 /* line 1181: */
XNDAASP = (&(F->Sysfile)) ;
if ( (((*XNDAASP) = AFAAASP_bsdsocket(P, EEAAASP_sockstream, 0))==(-1)) )
{ 
BNDAASP = FEAAASP_errno;
} 
else
{ 
 /* line 1182: */
 /* line 1183: */
if ( (PEAAASP_bsdbind((*(&(F->Sysfile))), JNDAASP_sockaddr, PKDAASP_sockaddrunsz)==(-1)) )
{ 
BNDAASP = FEAAASP_errno;
} 
else
{ 
 /* line 1184: */
 /* line 1185: */
if ( (WEAAASP_bsdlisten((*(&(F->Sysfile))), UGDAASP_backlogqueuesize)==(-1)) )
{ 
BNDAASP = FEAAASP_errno;
} 
else
{ 
 /* line 1186: */
 /* line 1187: */
 /* line 1188: */
YNDAASP = (&((&(F->State))->Lasterror)) ;
BNDAASP = (*YNDAASP) = 0;
} 
} 
} 
} 
else
{ 
{ 
 /* line 1189: */
 /* line 1190: */
 /* line 1191: */
AODAASP = (TIDAASP_sysgetinetaddr((*(&((&(F->Book))->Idf))), (&ZNDAASP_inetaddr))!=0);
if ( AODAASP )
{ 
BNDAASP = ACCAASP_estabinvalidparameters;
} 
else
{ 
 /* line 1192: */
 /* line 1193: */
BODAASP = (&(F->Sysfile)) ;
if ( (((*BODAASP) = AFAAASP_bsdsocket(P, EEAAASP_sockstream, 0))==(-1)) )
{ 
 /* line 1194: */
BNDAASP = FEAAASP_errno;
} 
else
{ 
{ 
CODAASP.source = (A68_SBITS )(A68_BITS )L ;
EODAASP = (CODAASP.destination) ;
FODAASP_htos = A_HIS1ARR(DODAASP,EODAASP,A68_CHAR ,2);
 /* line 1195: */
GODAASP = 3 ;
HODAASP = 2 ;
IODAASP = (&A_VINDEX(JNDAASP_sockaddr,GODAASP)) ;
(*IODAASP) = A_R1INDEX(FODAASP_htos,HODAASP);
JODAASP = 4 ;
KODAASP = 1 ;
LODAASP = (&A_VINDEX(JNDAASP_sockaddr,JODAASP)) ;
(*LODAASP) = A_R1INDEX(FODAASP_htos,KODAASP);
 /* line 1196: */
NODAASP.source = ZNDAASP_inetaddr ;
PODAASP = (NODAASP.destination) ;
QODAASP = A_VTRIM(MODAASP,(JNDAASP_sockaddr),A_VTSCRIPT(&(MODAASP.upb),(JNDAASP_sockaddr).upb,5,8)) ;
RODAASP = A_HISVEC(OODAASP,PODAASP,4,A68_CHAR ) ;
A_VASSIGN2(RODAASP,QODAASP,A68_CHAR );
 /* line 1197: */
 /* line 1198: */
 /* line 1199: */
SODAASP = (PEAAASP_bsdbind((*(&(F->Sysfile))), JNDAASP_sockaddr, QKDAASP_sockaddrinsz)==(-1));
if ( SODAASP )
{ 
BNDAASP = FEAAASP_errno;
} 
else
{ 
 /* line 1200: */
 /* line 1201: */
if ( (WEAAASP_bsdlisten((*(&(F->Sysfile))), UGDAASP_backlogqueuesize)==(-1)) )
{ 
BNDAASP = FEAAASP_errno;
} 
else
{ 
 /* line 1202: */
TODAASP = (&((&(F->State))->Lasterror)) ;
BNDAASP = (*TODAASP) = 0;
} 
} 
} 
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(serversockestab);
return( BNDAASP );
} 
#undef NL

A_STATIC A68_INT  VODAASP_sockopen(A68_56 * S)
{ 
A68_INT  WODAASP;  /* clause result */
A_PROC_ENTRY(sockopen);
WODAASP = BCCAASP_openinvalidparameters;
A_PROC_EXIT(sockopen);
return( WODAASP );
} 
#undef NL

A_STATIC A68_VOID  YODAASP_sockclose(A68_56 * S)
{ 
A_PROC_ENTRY(sockclose);
 /* line 1207: */
 /* line 1208: */
{ 
 /* line 1209: */
if ( (*(&((&((&(S->State))->Buffer))->Writeback))) )
{ 
 /* line 1210: */
TJDAASP_sockflushbuffer(S);
} 
 /* line 1211: */
ZEAAASP_bsdshutdown((*(&(S->Sysfile))), 2);
 /* line 1212: */
 /* line 1213: */
HMCAASP_sysclose(S);
} 
A_PROC_EXIT(sockclose);
return;
} 
#undef NL

A_STATIC A68_INT  APDAASP_socklpos(A68_56 * S)
{ 
A68_INT  BPDAASP;  /* clause result */
A_PROC_ENTRY(socklpos);
 /* line 1216: */
BPDAASP = ((*(&((&((&(S->State))->Buffer))->Pos)))+(*(&((&((&(S->State))->Buffer))->Valid))));
A_PROC_EXIT(socklpos);
return( BPDAASP );
} 
#undef NL

A_STATIC A68_BOOL  EPDAASP_sockset(A68_56 * S, A68_INT  P)
{ 
A68_INT * FPDAASP;  /* YIELD */
A68_BOOL  GPDAASP;  /* clause result */
A_PROC_ENTRY(sockset);
 /* line 1219: */
 /* line 1220: */
if ( (*(&((&((&(S->State))->Buffer))->Writeback))) )
{ 
TJDAASP_sockflushbuffer(S);
FPDAASP = (&((&((&(S->State))->Buffer))->Pos)) ;
(*FPDAASP) = P;
 /* line 1221: */
GPDAASP = A68_TRUE;
} 
else
{ 
 /* line 1222: */
GPDAASP = A68_TRUE;
} 
A_PROC_EXIT(sockset);
return( GPDAASP );
} 
#undef NL

A_STATIC A68_BOOL  JPDAASP_sockgetch(A68_56 * F, A68_CHAR * C)
{ 
A68_VC  KPDAASP;  /* avoid structure result */
A68_INT  LPDAASP;  /* YIELD */
A68_BOOL  MPDAASP;  /* clause result */
A_PROC_ENTRY(sockgetch);
 /* line 1225: */
 /* line 1226: */
{ 
BKDAASP_sockensurebufspace( F, 1, &KPDAASP );
LPDAASP = 1 ;
(*C) = (*(&A_VINDEX(KPDAASP,LPDAASP)));
 /* line 1227: */
 /* line 1228: */
MPDAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))>0);
} 
A_PROC_EXIT(sockgetch);
return( MPDAASP );
} 
#undef NL

A_STATIC A68_BOOL  PPDAASP_sockputch(A68_56 * F, A68_CHAR  C)
{ 
A68_VC  QPDAASP;  /* avoid structure result */
A68_INT  RPDAASP;  /* YIELD */
A68_CHAR * SPDAASP;  /* YIELD */
A68_INT * TPDAASP;  /* YIELD */
A68_BOOL  UPDAASP;  /* clause result */
A68_BOOL * VPDAASP;  /* YIELD */
A_PROC_ENTRY(sockputch);
 /* line 1231: */
 /* line 1232: */
{ 
BKDAASP_sockensurebufspace( F, 1, &QPDAASP );
RPDAASP = 1 ;
SPDAASP = (&A_VINDEX(QPDAASP,RPDAASP)) ;
(*SPDAASP) = C;
 /* line 1233: */
TPDAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*TPDAASP)+=1;
 /* line 1234: */
 /* line 1235: */
VPDAASP = (&((&((&(F->State))->Buffer))->Writeback)) ;
UPDAASP = (*VPDAASP) = A68_TRUE;
} 
A_PROC_EXIT(sockputch);
return( UPDAASP );
} 
#undef NL

A68_56 * XPDAASP_accept(A68_56 * S)
{ 
A68_34  ZPDAASP_generator;   /* proc value of non-global proc */
A68_VC  EQDAASP;  /* avoid structure result */
A68_VC  FQDAASP_clientaddress;
A68_56 * GQDAASP_clientsock;
A68_44  HQDAASP;  /* avoid structure result */
A68_44 * IQDAASP;  /* YIELD */
A68_INT * JQDAASP;  /* YIELD */
A68_56 * KQDAASP;  /* clause result */
A_PROC_ENTRY(accept);
 /* line 1238: */
 /* line 1239: */
{ 
A_CLOSURE( ZPDAASP_generator, AQDAASP_generator, BQDAASP_generator );
A_CALLPROC(ZPDAASP_generator,(A68_FALSE, &EQDAASP),(A68_FALSE, &EQDAASP,(ZPDAASP_generator).nonlocals));
FQDAASP_clientaddress = EQDAASP;
 /* line 1240: */
GQDAASP_clientsock = (A_HEAP(A68_56 ));
(*GQDAASP_clientsock) = (*S);
 /* line 1241: */
YACAASP_newfilebuffer( (*(&((&((&(S->State))->Buffer))->Max))), &HQDAASP );
IQDAASP = (&((&(GQDAASP_clientsock->State))->Buffer)) ;
(*IQDAASP) = HQDAASP;
 /* line 1242: */
JQDAASP = (&(GQDAASP_clientsock->Sysfile)) ;
(*JQDAASP) = OEAAASP_bsdaccept((*(&(S->Sysfile))), FQDAASP_clientaddress, A_LOC(A68_INT ));
 /* line 1243: */
 /* line 1244: */
KQDAASP = GQDAASP_clientsock;
} 
A_PROC_EXIT(accept);
return( KQDAASP );
} 
#undef NL

A68_VOID  URDAASP_flushbuffer(A68_56 * F)
{ 
A68_50  VRDAASP;  /* CALL */
A_PROC_ENTRY(flushbuffer);
VRDAASP = (*(&((&(F->Sys))->Flushbuffer))) ;
A_CALLPROC(VRDAASP,(F),(F,(VRDAASP).nonlocals));
A_PROC_EXIT(flushbuffer);
return;
} 
#undef NL

A68_VOID  XRDAASP_filebuffer(A68_56 * F, A68_VC  *ReturnedValue)
{ 
A68_VC  YRDAASP;  /* clause result */
A_PROC_ENTRY(filebuffer);
YRDAASP = (*(&((&((&(F->State))->Buffer))->Start)));
A_PROC_EXIT(filebuffer);
*ReturnedValue = (YRDAASP);
return;
} 
#undef NL

A_STATIC A68_VOID  BSDAASP_putch(A68_56 * F, A68_CHAR  C)
{ 
A68_54  CSDAASP;  /* CALL */
A68_BOOL * DSDAASP;  /* YIELD */
A68_INT * ESDAASP;  /* YIELD */
A68_59  FSDAASP;  /* CALL */
A_PROC_ENTRY(putch);
 /* line 1296: */
 /* line 1297: */
CSDAASP = (*(&((&(F->Sys))->Putch))) ;
if ( A_CALLPROC(CSDAASP,(F, C),(F, C,(CSDAASP).nonlocals)) )
{ 
DSDAASP = (&((&(F->State))->Bol)) ;
(*DSDAASP) = (C==TUAAASP_lf);
 /* line 1298: */
ESDAASP = (&((&(F->State))->Pos)) ;
(*ESDAASP)+=1;
} 
else
{ 
 /* line 1299: */
FSDAASP = (*(&((&(F->Io))->Physicalfilemended))) ;
if ( A_CALLPROC(FSDAASP,(F),(F,(FSDAASP).nonlocals)) )
{ 
 /* line 1300: */
BSDAASP_putch(F, C);
} 
else
{ 
 /* line 1301: */
JDCAASP_transputerror(F, VBCAASP_physicalfileendnotmended);
} 
} 
A_PROC_EXIT(putch);
return;
} 
#undef NL

A_STATIC A68_CHAR  HSDAASP_getch(A68_56 * F)
{ 
A68_BOOL  ISDAASP;  /* optbool result */
A68_CHAR  JSDAASP_ch;
A68_INT * KSDAASP;  /* YIELD */
A68_CHAR  LSDAASP;  /* clause result */
A68_CHAR  MSDAASP_ch;
A68_55  NSDAASP;  /* CALL */
A68_BOOL  OSDAASP;  /* optbool result */
A68_BOOL  PSDAASP;  /* clause result */
A68_INT * QSDAASP;  /* YIELD */
A68_BOOL * RSDAASP;  /* YIELD */
A68_59  SSDAASP;  /* CALL */
A68_CHAR  TSDAASP;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(getch);
 /* line 1304: */
 /* line 1305: */
ISDAASP = ((*(&((&(F->State))->Backch)))!=(-1));
if ( ISDAASP )
{ISDAASP = !(*(&((&(F->State))->Ended)));
}
 /* line 1306: */
if ( ISDAASP )
{ 
JSDAASP_ch = (A68_SSBITS)(*(&((&(F->State))->Backch)));
 /* line 1307: */
KSDAASP = (&((&(F->State))->Backch)) ;
(*KSDAASP) = (-1);
 /* line 1308: */
 /* line 1309: */
 /* line 1310: */
LSDAASP = JSDAASP_ch;
} 
else
{ 
{ 
MSDAASP_ch = YUAAASP_eofchar;
 /* line 1311: */
NSDAASP = (*(&((&(F->Sys))->Getch))) ;
OSDAASP = A_CALLPROC(NSDAASP,(F, (&MSDAASP_ch)),(F, (&MSDAASP_ch),(NSDAASP).nonlocals));
if ( OSDAASP )
{ /* line 1312: */
OSDAASP = (MSDAASP_ch!=YUAAASP_eofchar);
}
PSDAASP = OSDAASP;
if ( PSDAASP )
{ 
QSDAASP = (&((&(F->State))->Pos)) ;
(*QSDAASP)+=1;
RSDAASP = (&((&(F->State))->Bol)) ;
(*RSDAASP) = (MSDAASP_ch==TUAAASP_lf);
 /* line 1313: */
LSDAASP = MSDAASP_ch;
} 
else
{ 
 /* line 1314: */
SSDAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(SSDAASP,(F),(F,(SSDAASP).nonlocals)) )
{ 
 /* line 1315: */
LSDAASP = HSDAASP_getch(F);
} 
else
{ 
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
 /* line 1316: */
LSDAASP = TSDAASP;
} 
} 
} 
} 
A_PROC_EXIT(getch);
return( LSDAASP );
} 
#undef NL

A68_VOID  VSDAASP_space(A68_56 * F)
{ 
A_PROC_ENTRY(space);
JKCAASP_set(F, 0, 0, ((*(&((&(F->State))->Pos)))+1));
A_PROC_EXIT(space);
return;
} 
#undef NL

A68_VOID  XSDAASP_backspace(A68_56 * F)
{ 
A_PROC_ENTRY(backspace);
JKCAASP_set(F, 0, 0, ((*(&((&(F->State))->Pos)))-1));
A_PROC_EXIT(backspace);
return;
} 
#undef NL

A_STATIC A68_VOID  ATDAASP_backch(A68_56 * F, A68_CHAR  C)
{ 
A68_INT * BTDAASP;  /* YIELD */
A_PROC_ENTRY(backch);
BTDAASP = (&((&(F->State))->Backch)) ;
(*BTDAASP) = (A68_INT)(unsigned char)C;
A_PROC_EXIT(backch);
return;
} 
#undef NL

A68_VOID  DTDAASP_skipterminators(A68_56 * F)
{ 
A68_CHAR  ETDAASP_c;
A68_BOOL  FTDAASP;  /* clause result */
A68_INT * GTDAASP;  /* YIELD */
A_PROC_ENTRY(skipterminators);
 /* line 1325: */
 /* line 1326: */
{ 
 /* line 1327: */
for ( ;; )
{ 
ETDAASP_c = HSDAASP_getch(F);
FTDAASP = WYAAASP_elem(ETDAASP_c, (*(&((&(F->Io))->Stringterm))));
if ( !FTDAASP ) break;
/*SKIP*/;
}
 /* line 1328: */
 /* line 1329: */
GTDAASP = (&((&(F->State))->Backch)) ;
(*GTDAASP) = (A68_INT)(unsigned char)ETDAASP_c;
} 
A_PROC_EXIT(skipterminators);
return;
} 
#undef NL

A_STATIC A68_CHAR  ITDAASP_getchar(A68_56 * F)
{ 
A68_CHAR  JTDAASP_c;
A68_CHAR  KTDAASP;  /* clause result */
A_PROC_ENTRY(getchar);
 /* line 1332: */
 /* line 1333: */
{ 
 /* line 1334: */
for ( ;; )
{ 
if ( !(((JTDAASP_c = HSDAASP_getch(F))<' ')) ) break;
/*SKIP*/;
}
 /* line 1335: */
 /* line 1336: */
KTDAASP = JTDAASP_c;
} 
A_PROC_EXIT(getchar);
return( KTDAASP );
} 
#undef NL

A_STATIC A68_VOID  NTDAASP_skiptochar(A68_56 * F, A68_CHAR  Ch)
{ 
A68_CHAR  OTDAASP_c;
A_PROC_ENTRY(skiptochar);
 /* line 1339: */
 /* line 1340: */
{ 
 /* line 1341: */
for ( ;; )
{ 
if ( !(((OTDAASP_c = HSDAASP_getch(F))!=Ch)) ) break;
/*SKIP*/;
}
 /* line 1342: */
} 
A_PROC_EXIT(skiptochar);
return;
} 
#undef NL

A68_VOID  QTDAASP_newline(A68_56 * F)
{ 
A_PROC_ENTRY(newline);
 /* line 1345: */
if ( (*(&((&(F->State))->Readmood))) )
{ 
NTDAASP_skiptochar(F, TUAAASP_lf);
} 
else
{ 
BSDAASP_putch(F, TUAAASP_lf);
} 
A_PROC_EXIT(newline);
return;
} 
#undef NL

A68_VOID  STDAASP_newpage(A68_56 * F)
{ 
A_PROC_ENTRY(newpage);
 /* line 1348: */
if ( (*(&((&(F->State))->Readmood))) )
{ 
NTDAASP_skiptochar(F, UUAAASP_ff);
} 
else
{ 
BSDAASP_putch(F, UUAAASP_ff);
} 
A_PROC_EXIT(newpage);
return;
} 
#undef NL

A_STATIC A68_VOID  VTDAASP_read(A68_56 * F, A68_VC  Rc)
{ 
A68_VC  WTDAASP;  /* OPERATORS - trim index */
A68_VC  XTDAASP;  /* OPERATORS - trim index */
A68_53  YTDAASP;  /* CALL */
A68_VC  ZTDAASP;  /* avoid structure result */
A68_VC  AUDAASP_buf;
A68_BOOL  BUDAASP;  /* clause result */
A68_INT  CUDAASP_v;
A68_VC  DUDAASP;  /* OPERATORS - trim index */
A68_VC  EUDAASP;  /* OPERATORS - trim index */
A68_VC  FUDAASP;  /* YIELD */
A68_VC  GUDAASP;  /* OPERATORS - assign op */
A68_59  HUDAASP;  /* CALL */
A68_VC  IUDAASP;  /* OPERATORS - trim index */
A68_59  JUDAASP;  /* CALL */
A68_INT * KUDAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1355: */
 /* line 1356: */
 /* line 1357: */
if ( (Rc.upb>(*(&((&((&(F->State))->Buffer))->Max)))) )
{ 
VTDAASP_read(F, A_VTRIM(WTDAASP,(Rc),A_VTSCRIPT(&(WTDAASP.upb),(Rc).upb,1,(*(&((&((&(F->State))->Buffer))->Max))))));
 /* line 1358: */
 /* line 1359: */
 /* line 1360: */
VTDAASP_read(F, A_VTRIM(XTDAASP,(Rc),A_VTSCRIPT(&(XTDAASP.upb),(Rc).upb,((*(&((&((&(F->State))->Buffer))->Max)))+1),(Rc).upb)));
} 
else
{ 
{ 
YTDAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(YTDAASP,(F, Rc.upb, &ZTDAASP),(F, Rc.upb, &ZTDAASP,(YTDAASP).nonlocals));
AUDAASP_buf = ZTDAASP;
 /* line 1361: */
 /* line 1362: */
 /* line 1363: */
BUDAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<Rc.upb);
if ( BUDAASP )
{ 
 /* line 1364: */
 /* line 1365: */
if ( ((*(&((&((&(F->State))->Buffer))->Valid)))>0) )
{ 
CUDAASP_v = (*(&((&((&(F->State))->Buffer))->Valid)));
 /* line 1366: */
FUDAASP = A_VTRIM(DUDAASP,(Rc),A_VTSCRIPT(&(DUDAASP.upb),(Rc).upb,1,CUDAASP_v)) ;
GUDAASP = A_VTRIM(EUDAASP,(AUDAASP_buf),A_VTSCRIPT(&(EUDAASP.upb),(AUDAASP_buf).upb,1,CUDAASP_v)) ;
A_VASSIGN2(GUDAASP,FUDAASP,A68_CHAR );
 /* line 1367: */
 /* line 1368: */
HUDAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(HUDAASP,(F),(F,(HUDAASP).nonlocals)) )
{ 
 /* line 1369: */
VTDAASP_read(F, A_VTRIM(IUDAASP,(Rc),A_VTSCRIPT(&(IUDAASP.upb),(Rc).upb,(CUDAASP_v+1),(Rc).upb)));
} 
else
{ 
 /* line 1370: */
 /* line 1371: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1372: */
JUDAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(JUDAASP,(F),(F,(JUDAASP).nonlocals)) )
{ 
 /* line 1373: */
VTDAASP_read(F, Rc);
} 
else
{ 
 /* line 1374: */
 /* line 1375: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
} 
else
{ 
A_VASSIGN2(AUDAASP_buf,Rc,A68_CHAR );
 /* line 1376: */
KUDAASP = (&((&(F->State))->Pos)) ;
(*KUDAASP)+=Rc.upb;
} 
} 
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  NUDAASP_read(A68_56 * F, A68_RC  Rc)
{ 
A68_RC  OUDAASP;  /* OPERATORS - trim index */
A68_RC  PUDAASP;  /* OPERATORS - trim index */
A68_53  QUDAASP;  /* CALL */
A68_VC  RUDAASP;  /* avoid structure result */
A68_VC  SUDAASP_buf;
A68_BOOL  TUDAASP;  /* clause result */
A68_INT  UUDAASP_v;
A68_RC  VUDAASP;  /* OPERATORS - trim index */
A68_VC  WUDAASP;  /* OPERATORS - trim index */
A68_VC  XUDAASP;  /* YIELD */
A68_RC  YUDAASP;  /* OPERATORS - vector -> row */
A68_RC  ZUDAASP;  /* YIELD */
A68_RC  AVDAASP;  /* OPERATORS - assign op */
A68_59  BVDAASP;  /* CALL */
A68_RC  CVDAASP;  /* OPERATORS - trim index */
A68_59  DVDAASP;  /* CALL */
A68_RC  EVDAASP;  /* OPERATORS - vector -> row */
A68_RC  FVDAASP;  /* OPERATORS - assign op */
A68_INT * GVDAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1380: */
 /* line 1381: */
 /* line 1382: */
if ( (Rc.dim[0].upb>(*(&((&((&(F->State))->Buffer))->Max)))) )
{ 
NUDAASP_read(F, A_R1TRIM(OUDAASP,(Rc),A_RTSCRIPT(&(OUDAASP.dim[0]),&((Rc).dim[0]),(Rc).dim[0].lwb,(*(&((&((&(F->State))->Buffer))->Max))),1)));
 /* line 1383: */
 /* line 1384: */
 /* line 1385: */
NUDAASP_read(F, A_R1TRIM(PUDAASP,(Rc),A_RTSCRIPT(&(PUDAASP.dim[0]),&((Rc).dim[0]),((*(&((&((&(F->State))->Buffer))->Max)))+1),(Rc).dim[0].upb,1)));
} 
else
{ 
{ 
QUDAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(QUDAASP,(F, Rc.dim[0].upb, &RUDAASP),(F, Rc.dim[0].upb, &RUDAASP,(QUDAASP).nonlocals));
SUDAASP_buf = RUDAASP;
 /* line 1386: */
 /* line 1387: */
 /* line 1388: */
TUDAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<Rc.dim[0].upb);
if ( TUDAASP )
{ 
 /* line 1389: */
 /* line 1390: */
if ( ((*(&((&((&(F->State))->Buffer))->Valid)))>0) )
{ 
UUDAASP_v = (*(&((&((&(F->State))->Buffer))->Valid)));
 /* line 1391: */
XUDAASP = A_VTRIM(WUDAASP,(SUDAASP_buf),A_VTSCRIPT(&(WUDAASP.upb),(SUDAASP_buf).upb,1,UUDAASP_v)) ;
ZUDAASP = A_R1TRIM(VUDAASP,(Rc),A_RTSCRIPT(&(VUDAASP.dim[0]),&((Rc).dim[0]),(Rc).dim[0].lwb,UUDAASP_v,1)) ;
AVDAASP = A_VECARR(XUDAASP,YUDAASP) ;
A_R1ASSIGN2(AVDAASP,ZUDAASP,A68_CHAR );
 /* line 1392: */
 /* line 1393: */
BVDAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(BVDAASP,(F),(F,(BVDAASP).nonlocals)) )
{ 
 /* line 1394: */
NUDAASP_read(F, A_R1TRIM(CVDAASP,(Rc),A_RTSCRIPT(&(CVDAASP.dim[0]),&((Rc).dim[0]),(UUDAASP_v+1),(Rc).dim[0].upb,1)));
} 
else
{ 
 /* line 1395: */
 /* line 1396: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1397: */
DVDAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(DVDAASP,(F),(F,(DVDAASP).nonlocals)) )
{ 
 /* line 1398: */
NUDAASP_read(F, Rc);
} 
else
{ 
 /* line 1399: */
 /* line 1400: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
} 
else
{ 
FVDAASP = A_VECARR(SUDAASP_buf,EVDAASP) ;
A_R1ASSIGN2(FVDAASP,Rc,A68_CHAR );
 /* line 1401: */
GVDAASP = (&((&(F->State))->Pos)) ;
(*GVDAASP)+=Rc.dim[0].upb;
} 
} 
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  JVDAASP_read(A68_56 * F, A68_CHAR * C)
{ 
A68_34  LVDAASP_generator;   /* proc value of non-global proc */
A68_VC  RVDAASP;  /* avoid structure result */
A68_VC  QVDAASP_vc;
A68_INT  SVDAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1405: */
{ 
A_CLOSURE( LVDAASP_generator, MVDAASP_generator, NVDAASP_generator );
A_CALLPROC(LVDAASP_generator,(A68_TRUE, &RVDAASP),(A68_TRUE, &RVDAASP,(LVDAASP_generator).nonlocals));
QVDAASP_vc = RVDAASP;
VTDAASP_read(F, QVDAASP_vc);
SVDAASP = 1 ;
(*C) = (*(&A_VINDEX(QVDAASP_vc,SVDAASP)));
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  VVDAASP_read(A68_56 * F, A68_LBITS * B)
{ 
A68_53  WVDAASP;  /* CALL */
A68_VC  XVDAASP;  /* avoid structure result */
A68_BOOL  YVDAASP;  /* clause result */
A68_59  ZVDAASP;  /* CALL */
A68_INT * AWDAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1408: */
WVDAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(WVDAASP,(F, HUAAASP_longbitsbinbytes, &XVDAASP),(F, HUAAASP_longbitsbinbytes, &XVDAASP,(WVDAASP).nonlocals));
(*B) = HLAAASP_flatrvlb(XVDAASP);
 /* line 1409: */
 /* line 1410: */
 /* line 1411: */
YVDAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<HUAAASP_longbitsbinbytes);
if ( YVDAASP )
{ 
 /* line 1412: */
ZVDAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(ZVDAASP,(F),(F,(ZVDAASP).nonlocals)) )
{ 
 /* line 1413: */
VVDAASP_read(F, B);
} 
else
{ 
 /* line 1414: */
 /* line 1415: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1416: */
AWDAASP = (&((&(F->State))->Pos)) ;
(*AWDAASP)+=HUAAASP_longbitsbinbytes;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  DWDAASP_read(A68_56 * F, A68_BITS * B)
{ 
A68_53  EWDAASP;  /* CALL */
A68_VC  FWDAASP;  /* avoid structure result */
A68_BOOL  GWDAASP;  /* clause result */
A68_59  HWDAASP;  /* CALL */
A68_INT * IWDAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1419: */
EWDAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(EWDAASP,(F, GUAAASP_bitsbinbytes, &FWDAASP),(F, GUAAASP_bitsbinbytes, &FWDAASP,(EWDAASP).nonlocals));
(*B) = QLAAASP_flatrvb(FWDAASP);
 /* line 1420: */
 /* line 1421: */
 /* line 1422: */
GWDAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<GUAAASP_bitsbinbytes);
if ( GWDAASP )
{ 
 /* line 1423: */
HWDAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(HWDAASP,(F),(F,(HWDAASP).nonlocals)) )
{ 
 /* line 1424: */
DWDAASP_read(F, B);
} 
else
{ 
 /* line 1425: */
 /* line 1426: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1427: */
IWDAASP = (&((&(F->State))->Pos)) ;
(*IWDAASP)+=GUAAASP_bitsbinbytes;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  LWDAASP_read(A68_56 * F, A68_SBITS * B)
{ 
A68_53  MWDAASP;  /* CALL */
A68_VC  NWDAASP;  /* avoid structure result */
A68_BOOL  OWDAASP;  /* clause result */
A68_59  PWDAASP;  /* CALL */
A68_INT * QWDAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1430: */
MWDAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(MWDAASP,(F, FUAAASP_shortbitsbinbytes, &NWDAASP),(F, FUAAASP_shortbitsbinbytes, &NWDAASP,(MWDAASP).nonlocals));
(*B) = ZLAAASP_flatrvsb(NWDAASP);
 /* line 1431: */
 /* line 1432: */
 /* line 1433: */
OWDAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<FUAAASP_shortbitsbinbytes);
if ( OWDAASP )
{ 
 /* line 1434: */
PWDAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(PWDAASP,(F),(F,(PWDAASP).nonlocals)) )
{ 
 /* line 1435: */
LWDAASP_read(F, B);
} 
else
{ 
 /* line 1436: */
 /* line 1437: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1438: */
QWDAASP = (&((&(F->State))->Pos)) ;
(*QWDAASP)+=FUAAASP_shortbitsbinbytes;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  TWDAASP_read(A68_56 * F, A68_SSBITS * B)
{ 
A68_53  UWDAASP;  /* CALL */
A68_VC  VWDAASP;  /* avoid structure result */
A68_BOOL  WWDAASP;  /* clause result */
A68_59  XWDAASP;  /* CALL */
A68_INT * YWDAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1441: */
UWDAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(UWDAASP,(F, EUAAASP_shortshortbitsbinbytes, &VWDAASP),(F, EUAAASP_shortshortbitsbinbytes, &VWDAASP,(UWDAASP).nonlocals));
(*B) = IMAAASP_flatrvssb(VWDAASP);
 /* line 1442: */
 /* line 1443: */
 /* line 1444: */
WWDAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<EUAAASP_shortshortbitsbinbytes);
if ( WWDAASP )
{ 
 /* line 1445: */
XWDAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(XWDAASP,(F),(F,(XWDAASP).nonlocals)) )
{ 
 /* line 1446: */
TWDAASP_read(F, B);
} 
else
{ 
 /* line 1447: */
 /* line 1448: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1449: */
YWDAASP = (&((&(F->State))->Pos)) ;
(*YWDAASP)+=EUAAASP_shortshortbitsbinbytes;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  BXDAASP_read(A68_56 * F, A68_65  Rb)
{ 
A68_INT  CXDAASP_numbytes;
A68_BOOL  DXDAASP;  /* clause result */
A68_INT  EXDAASP_mk;
A68_65  FXDAASP;  /* OPERATORS - trim index */
A68_65  GXDAASP;  /* OPERATORS - trim index */
A68_53  HXDAASP;  /* CALL */
A68_VC  IXDAASP;  /* avoid structure result */
A68_VC  JXDAASP_buf;
A68_BOOL  KXDAASP;  /* clause result */
A68_59  LXDAASP;  /* CALL */
A68_INT  MXDAASP_i;
A68_INT  NXDAASP;  /* to part of loop */
A68_INT  OXDAASP;  /* SHL */
A68_BITS  PXDAASP;  /* SHL */
A68_INT  QXDAASP_i8;
A68_VC  RXDAASP;  /* OPERATORS - trim index */
A68_LBITS * SXDAASP;  /* YIELD */
A68_INT * TXDAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1452: */
{ 
CXDAASP_numbytes = (HUAAASP_longbitsbinbytes*Rb.dim[0].upb);
 /* line 1453: */
 /* line 1454: */
 /* line 1455: */
DXDAASP = (CXDAASP_numbytes>(*(&((&((&(F->State))->Buffer))->Max))));
if ( DXDAASP )
{ 
EXDAASP_mk = ((*(&((&((&(F->State))->Buffer))->Max)))/HUAAASP_longbitsbinbytes);
 /* line 1456: */
BXDAASP_read(F, A_R1TRIM(FXDAASP,(Rb),A_RTSCRIPT(&(FXDAASP.dim[0]),&((Rb).dim[0]),(Rb).dim[0].lwb,EXDAASP_mk,1)));
 /* line 1457: */
 /* line 1458: */
BXDAASP_read(F, A_R1TRIM(GXDAASP,(Rb),A_RTSCRIPT(&(GXDAASP.dim[0]),&((Rb).dim[0]),(EXDAASP_mk+1),(Rb).dim[0].upb,1)));
} 
else
{ 
{ 
HXDAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(HXDAASP,(F, CXDAASP_numbytes, &IXDAASP),(F, CXDAASP_numbytes, &IXDAASP,(HXDAASP).nonlocals));
JXDAASP_buf = IXDAASP;
 /* line 1459: */
 /* line 1460: */
 /* line 1461: */
KXDAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<CXDAASP_numbytes);
if ( KXDAASP )
{ 
 /* line 1462: */
LXDAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(LXDAASP,(F),(F,(LXDAASP).nonlocals)) )
{ 
 /* line 1463: */
BXDAASP_read(F, Rb);
} 
else
{ 
 /* line 1464: */
 /* line 1465: */
 /* line 1466: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1467: */
NXDAASP = Rb.dim[0].upb;
for ( MXDAASP_i = 1;
MXDAASP_i <= NXDAASP;
MXDAASP_i += 1 )
{ 
 /* line 1468: */
OXDAASP = 3 ;
PXDAASP = (A68_BITS )(MXDAASP_i-1) ;
QXDAASP_i8 = ((A68_INT )A_SHL(PXDAASP,OXDAASP)+1);
 /* line 1469: */
 /* line 1470: */
SXDAASP = (&A_R1INDEX(Rb,MXDAASP_i)) ;
(*SXDAASP) = HLAAASP_flatrvlb(A_VTRIM(RXDAASP,(JXDAASP_buf),A_VTSCRIPT(&(RXDAASP.upb),(JXDAASP_buf).upb,QXDAASP_i8,(QXDAASP_i8+7))));
}
 /* line 1471: */
 /* line 1472: */
TXDAASP = (&((&(F->State))->Pos)) ;
(*TXDAASP)+=CXDAASP_numbytes;
} 
} 
} 
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  WXDAASP_read(A68_56 * F, A68_66  Rb)
{ 
A68_INT  XXDAASP_numbytes;
A68_BOOL  YXDAASP;  /* clause result */
A68_INT  ZXDAASP_mk;
A68_66  AYDAASP;  /* OPERATORS - trim index */
A68_66  BYDAASP;  /* OPERATORS - trim index */
A68_53  CYDAASP;  /* CALL */
A68_VC  DYDAASP;  /* avoid structure result */
A68_VC  EYDAASP_buf;
A68_BOOL  FYDAASP;  /* clause result */
A68_59  GYDAASP;  /* CALL */
A68_INT  HYDAASP_i;
A68_INT  IYDAASP;  /* to part of loop */
A68_INT  JYDAASP;  /* SHL */
A68_BITS  KYDAASP;  /* SHL */
A68_INT  LYDAASP_i4;
A68_VC  MYDAASP;  /* OPERATORS - trim index */
A68_BITS * NYDAASP;  /* YIELD */
A68_INT * OYDAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1475: */
{ 
XXDAASP_numbytes = (GUAAASP_bitsbinbytes*Rb.dim[0].upb);
 /* line 1476: */
 /* line 1477: */
 /* line 1478: */
YXDAASP = (XXDAASP_numbytes>(*(&((&((&(F->State))->Buffer))->Max))));
if ( YXDAASP )
{ 
ZXDAASP_mk = ((*(&((&((&(F->State))->Buffer))->Max)))/GUAAASP_bitsbinbytes);
 /* line 1479: */
WXDAASP_read(F, A_R1TRIM(AYDAASP,(Rb),A_RTSCRIPT(&(AYDAASP.dim[0]),&((Rb).dim[0]),(Rb).dim[0].lwb,ZXDAASP_mk,1)));
 /* line 1480: */
 /* line 1481: */
WXDAASP_read(F, A_R1TRIM(BYDAASP,(Rb),A_RTSCRIPT(&(BYDAASP.dim[0]),&((Rb).dim[0]),(ZXDAASP_mk+1),(Rb).dim[0].upb,1)));
} 
else
{ 
{ 
CYDAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(CYDAASP,(F, XXDAASP_numbytes, &DYDAASP),(F, XXDAASP_numbytes, &DYDAASP,(CYDAASP).nonlocals));
EYDAASP_buf = DYDAASP;
 /* line 1482: */
 /* line 1483: */
 /* line 1484: */
FYDAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<XXDAASP_numbytes);
if ( FYDAASP )
{ 
 /* line 1485: */
GYDAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(GYDAASP,(F),(F,(GYDAASP).nonlocals)) )
{ 
 /* line 1486: */
WXDAASP_read(F, Rb);
} 
else
{ 
 /* line 1487: */
 /* line 1488: */
 /* line 1489: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1490: */
IYDAASP = Rb.dim[0].upb;
for ( HYDAASP_i = 1;
HYDAASP_i <= IYDAASP;
HYDAASP_i += 1 )
{ 
 /* line 1491: */
JYDAASP = 2 ;
KYDAASP = (A68_BITS )(HYDAASP_i-1) ;
LYDAASP_i4 = ((A68_INT )A_SHL(KYDAASP,JYDAASP)+1);
 /* line 1492: */
 /* line 1493: */
NYDAASP = (&A_R1INDEX(Rb,HYDAASP_i)) ;
(*NYDAASP) = QLAAASP_flatrvb(A_VTRIM(MYDAASP,(EYDAASP_buf),A_VTSCRIPT(&(MYDAASP.upb),(EYDAASP_buf).upb,LYDAASP_i4,(LYDAASP_i4+3))));
}
 /* line 1494: */
 /* line 1495: */
OYDAASP = (&((&(F->State))->Pos)) ;
(*OYDAASP)+=XXDAASP_numbytes;
} 
} 
} 
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  RYDAASP_read(A68_56 * F, A68_67  Rb)
{ 
A68_INT  SYDAASP_numbytes;
A68_BOOL  TYDAASP;  /* clause result */
A68_INT  UYDAASP_mk;
A68_67  VYDAASP;  /* OPERATORS - trim index */
A68_67  WYDAASP;  /* OPERATORS - trim index */
A68_53  XYDAASP;  /* CALL */
A68_VC  YYDAASP;  /* avoid structure result */
A68_VC  ZYDAASP_buf;
A68_BOOL  AZDAASP;  /* clause result */
A68_59  BZDAASP;  /* CALL */
A68_INT  CZDAASP_i;
A68_INT  DZDAASP;  /* to part of loop */
A68_INT  EZDAASP;  /* SHL */
A68_BITS  FZDAASP;  /* SHL */
A68_INT  GZDAASP_i2;
A68_VC  HZDAASP;  /* OPERATORS - trim index */
A68_SBITS * IZDAASP;  /* YIELD */
A68_INT * JZDAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1498: */
{ 
SYDAASP_numbytes = (FUAAASP_shortbitsbinbytes*Rb.dim[0].upb);
 /* line 1499: */
 /* line 1500: */
 /* line 1501: */
TYDAASP = (SYDAASP_numbytes>(*(&((&((&(F->State))->Buffer))->Max))));
if ( TYDAASP )
{ 
UYDAASP_mk = ((*(&((&((&(F->State))->Buffer))->Max)))/FUAAASP_shortbitsbinbytes);
 /* line 1502: */
RYDAASP_read(F, A_R1TRIM(VYDAASP,(Rb),A_RTSCRIPT(&(VYDAASP.dim[0]),&((Rb).dim[0]),(Rb).dim[0].lwb,UYDAASP_mk,1)));
 /* line 1503: */
 /* line 1504: */
RYDAASP_read(F, A_R1TRIM(WYDAASP,(Rb),A_RTSCRIPT(&(WYDAASP.dim[0]),&((Rb).dim[0]),(UYDAASP_mk+1),(Rb).dim[0].upb,1)));
} 
else
{ 
{ 
XYDAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(XYDAASP,(F, SYDAASP_numbytes, &YYDAASP),(F, SYDAASP_numbytes, &YYDAASP,(XYDAASP).nonlocals));
ZYDAASP_buf = YYDAASP;
 /* line 1505: */
 /* line 1506: */
 /* line 1507: */
AZDAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<SYDAASP_numbytes);
if ( AZDAASP )
{ 
 /* line 1508: */
BZDAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(BZDAASP,(F),(F,(BZDAASP).nonlocals)) )
{ 
 /* line 1509: */
RYDAASP_read(F, Rb);
} 
else
{ 
 /* line 1510: */
 /* line 1511: */
 /* line 1512: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1513: */
DZDAASP = Rb.dim[0].upb;
for ( CZDAASP_i = 1;
CZDAASP_i <= DZDAASP;
CZDAASP_i += 1 )
{ 
 /* line 1514: */
EZDAASP = 1 ;
FZDAASP = (A68_BITS )(CZDAASP_i-1) ;
GZDAASP_i2 = ((A68_INT )A_SHL(FZDAASP,EZDAASP)+1);
 /* line 1515: */
 /* line 1516: */
IZDAASP = (&A_R1INDEX(Rb,CZDAASP_i)) ;
(*IZDAASP) = ZLAAASP_flatrvsb(A_VTRIM(HZDAASP,(ZYDAASP_buf),A_VTSCRIPT(&(HZDAASP.upb),(ZYDAASP_buf).upb,GZDAASP_i2,(GZDAASP_i2+1))));
}
 /* line 1517: */
 /* line 1518: */
JZDAASP = (&((&(F->State))->Pos)) ;
(*JZDAASP)+=SYDAASP_numbytes;
} 
} 
} 
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  MZDAASP_read(A68_56 * F, A68_68  Rb)
{ 
A68_INT  NZDAASP_numbytes;
A68_BOOL  OZDAASP;  /* clause result */
A68_INT  PZDAASP_mk;
A68_68  QZDAASP;  /* OPERATORS - trim index */
A68_68  RZDAASP;  /* OPERATORS - trim index */
A68_53  SZDAASP;  /* CALL */
A68_VC  TZDAASP;  /* avoid structure result */
A68_VC  UZDAASP_buf;
A68_BOOL  VZDAASP;  /* clause result */
A68_INT  WZDAASP_v;
A68_INT  XZDAASP_i;
A68_INT  YZDAASP;  /* to part of loop */
A68_VC  ZZDAASP;  /* OPERATORS - trim index */
A68_SSBITS * AAEAASP;  /* YIELD */
A68_59  BAEAASP;  /* CALL */
A68_68  CAEAASP;  /* OPERATORS - trim index */
A68_59  DAEAASP;  /* CALL */
A68_INT  EAEAASP_i;
A68_INT  FAEAASP;  /* to part of loop */
A68_VC  GAEAASP;  /* OPERATORS - trim index */
A68_SSBITS * HAEAASP;  /* YIELD */
A68_INT * IAEAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1521: */
{ 
NZDAASP_numbytes = (EUAAASP_shortshortbitsbinbytes*Rb.dim[0].upb);
 /* line 1522: */
 /* line 1523: */
 /* line 1524: */
OZDAASP = (NZDAASP_numbytes>(*(&((&((&(F->State))->Buffer))->Max))));
if ( OZDAASP )
{ 
PZDAASP_mk = ((*(&((&((&(F->State))->Buffer))->Max)))/EUAAASP_shortshortbitsbinbytes);
 /* line 1525: */
MZDAASP_read(F, A_R1TRIM(QZDAASP,(Rb),A_RTSCRIPT(&(QZDAASP.dim[0]),&((Rb).dim[0]),(Rb).dim[0].lwb,PZDAASP_mk,1)));
 /* line 1526: */
 /* line 1527: */
MZDAASP_read(F, A_R1TRIM(RZDAASP,(Rb),A_RTSCRIPT(&(RZDAASP.dim[0]),&((Rb).dim[0]),(PZDAASP_mk+1),(Rb).dim[0].upb,1)));
} 
else
{ 
{ 
SZDAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(SZDAASP,(F, NZDAASP_numbytes, &TZDAASP),(F, NZDAASP_numbytes, &TZDAASP,(SZDAASP).nonlocals));
UZDAASP_buf = TZDAASP;
 /* line 1528: */
 /* line 1529: */
 /* line 1530: */
VZDAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<NZDAASP_numbytes);
if ( VZDAASP )
{ 
 /* line 1531: */
 /* line 1532: */
if ( ((*(&((&((&(F->State))->Buffer))->Valid)))>0) )
{ 
WZDAASP_v = (*(&((&((&(F->State))->Buffer))->Valid)));
 /* line 1533: */
YZDAASP = WZDAASP_v;
for ( XZDAASP_i = 1;
XZDAASP_i <= YZDAASP;
XZDAASP_i += 1 )
{ 
AAEAASP = (&A_R1INDEX(Rb,XZDAASP_i)) ;
(*AAEAASP) = IMAAASP_flatrvssb(A_VTRIM(ZZDAASP,(UZDAASP_buf),A_VTSCRIPT(&(ZZDAASP.upb),(UZDAASP_buf).upb,XZDAASP_i,XZDAASP_i)));
}
 /* line 1534: */
 /* line 1535: */
BAEAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(BAEAASP,(F),(F,(BAEAASP).nonlocals)) )
{ 
 /* line 1536: */
MZDAASP_read(F, A_R1TRIM(CAEAASP,(Rb),A_RTSCRIPT(&(CAEAASP.dim[0]),&((Rb).dim[0]),(WZDAASP_v+1),(Rb).dim[0].upb,1)));
} 
else
{ 
 /* line 1537: */
 /* line 1538: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1539: */
DAEAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(DAEAASP,(F),(F,(DAEAASP).nonlocals)) )
{ 
 /* line 1540: */
MZDAASP_read(F, Rb);
} 
else
{ 
 /* line 1541: */
 /* line 1542: */
 /* line 1543: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
} 
else
{ 
 /* line 1544: */
FAEAASP = Rb.dim[0].upb;
for ( EAEAASP_i = 1;
EAEAASP_i <= FAEAASP;
EAEAASP_i += 1 )
{ 
 /* line 1545: */
 /* line 1546: */
HAEAASP = (&A_R1INDEX(Rb,EAEAASP_i)) ;
(*HAEAASP) = IMAAASP_flatrvssb(A_VTRIM(GAEAASP,(UZDAASP_buf),A_VTSCRIPT(&(GAEAASP.upb),(UZDAASP_buf).upb,EAEAASP_i,EAEAASP_i)));
}
 /* line 1547: */
 /* line 1548: */
IAEAASP = (&((&(F->State))->Pos)) ;
(*IAEAASP)+=NZDAASP_numbytes;
} 
} 
} 
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  LAEAASP_read(A68_56 * F, A68_LINT * N)
{ 
A68_LBITS  MAEAASP_b;
A_PROC_ENTRY(read);
 /* line 1551: */
{ 
VVDAASP_read(F, (&MAEAASP_b));
(*N) = (A68_LINT )MAEAASP_b;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  PAEAASP_read(A68_56 * F, A68_INT * N)
{ 
A68_BITS  QAEAASP_b;
A_PROC_ENTRY(read);
 /* line 1554: */
{ 
DWDAASP_read(F, (&QAEAASP_b));
(*N) = (A68_INT )QAEAASP_b;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  TAEAASP_read(A68_56 * F, A68_SINT * N)
{ 
A68_SBITS  UAEAASP_b;
A_PROC_ENTRY(read);
 /* line 1557: */
{ 
LWDAASP_read(F, (&UAEAASP_b));
(*N) = (A68_SINT )UAEAASP_b;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  XAEAASP_read(A68_56 * F, A68_SSINT * N)
{ 
A68_SSBITS  YAEAASP_b;
A_PROC_ENTRY(read);
 /* line 1560: */
{ 
TWDAASP_read(F, (&YAEAASP_b));
(*N) = (A68_SSINT )YAEAASP_b;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  BBEAASP_read(A68_56 * F, A68_69  Rn)
{ 
A68_INT  CBEAASP_numbytes;
A68_BOOL  DBEAASP;  /* clause result */
A68_INT  EBEAASP_mk;
A68_69  FBEAASP;  /* OPERATORS - trim index */
A68_69  GBEAASP;  /* OPERATORS - trim index */
A68_53  HBEAASP;  /* CALL */
A68_VC  IBEAASP;  /* avoid structure result */
A68_VC  JBEAASP_buf;
A68_BOOL  KBEAASP;  /* clause result */
A68_59  LBEAASP;  /* CALL */
A68_INT  MBEAASP_i;
A68_INT  NBEAASP;  /* to part of loop */
A68_INT  OBEAASP;  /* SHL */
A68_BITS  PBEAASP;  /* SHL */
A68_INT  QBEAASP_i8;
A68_VC  RBEAASP;  /* OPERATORS - trim index */
A68_LINT * SBEAASP;  /* YIELD */
A68_INT * TBEAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1563: */
{ 
CBEAASP_numbytes = (DUAAASP_longintbinbytes*Rn.dim[0].upb);
 /* line 1564: */
 /* line 1565: */
 /* line 1566: */
DBEAASP = (CBEAASP_numbytes>(*(&((&((&(F->State))->Buffer))->Max))));
if ( DBEAASP )
{ 
EBEAASP_mk = ((*(&((&((&(F->State))->Buffer))->Max)))/DUAAASP_longintbinbytes);
 /* line 1567: */
BBEAASP_read(F, A_R1TRIM(FBEAASP,(Rn),A_RTSCRIPT(&(FBEAASP.dim[0]),&((Rn).dim[0]),(Rn).dim[0].lwb,EBEAASP_mk,1)));
 /* line 1568: */
 /* line 1569: */
BBEAASP_read(F, A_R1TRIM(GBEAASP,(Rn),A_RTSCRIPT(&(GBEAASP.dim[0]),&((Rn).dim[0]),(EBEAASP_mk+1),(Rn).dim[0].upb,1)));
} 
else
{ 
{ 
HBEAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(HBEAASP,(F, CBEAASP_numbytes, &IBEAASP),(F, CBEAASP_numbytes, &IBEAASP,(HBEAASP).nonlocals));
JBEAASP_buf = IBEAASP;
 /* line 1570: */
 /* line 1571: */
 /* line 1572: */
KBEAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<CBEAASP_numbytes);
if ( KBEAASP )
{ 
 /* line 1573: */
LBEAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(LBEAASP,(F),(F,(LBEAASP).nonlocals)) )
{ 
 /* line 1574: */
BBEAASP_read(F, Rn);
} 
else
{ 
 /* line 1575: */
 /* line 1576: */
 /* line 1577: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1578: */
NBEAASP = Rn.dim[0].upb;
for ( MBEAASP_i = 1;
MBEAASP_i <= NBEAASP;
MBEAASP_i += 1 )
{ 
 /* line 1579: */
OBEAASP = 3 ;
PBEAASP = (A68_BITS )(MBEAASP_i-1) ;
QBEAASP_i8 = ((A68_INT )A_SHL(PBEAASP,OBEAASP)+1);
 /* line 1580: */
 /* line 1581: */
SBEAASP = (&A_R1INDEX(Rn,MBEAASP_i)) ;
(*SBEAASP) = (A68_LINT )HLAAASP_flatrvlb(A_VTRIM(RBEAASP,(JBEAASP_buf),A_VTSCRIPT(&(RBEAASP.upb),(JBEAASP_buf).upb,QBEAASP_i8,(QBEAASP_i8+7))));
}
 /* line 1582: */
 /* line 1583: */
TBEAASP = (&((&(F->State))->Pos)) ;
(*TBEAASP)+=CBEAASP_numbytes;
} 
} 
} 
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  WBEAASP_read(A68_56 * F, A68_70  Rn)
{ 
A68_INT  XBEAASP_numbytes;
A68_BOOL  YBEAASP;  /* clause result */
A68_INT  ZBEAASP_mk;
A68_70  ACEAASP;  /* OPERATORS - trim index */
A68_70  BCEAASP;  /* OPERATORS - trim index */
A68_53  CCEAASP;  /* CALL */
A68_VC  DCEAASP;  /* avoid structure result */
A68_VC  ECEAASP_buf;
A68_BOOL  FCEAASP;  /* clause result */
A68_59  GCEAASP;  /* CALL */
A68_INT  HCEAASP_i;
A68_INT  ICEAASP;  /* to part of loop */
A68_INT  JCEAASP;  /* SHL */
A68_BITS  KCEAASP;  /* SHL */
A68_INT  LCEAASP_i4;
A68_VC  MCEAASP;  /* OPERATORS - trim index */
A68_INT * NCEAASP;  /* YIELD */
A68_INT * OCEAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1586: */
{ 
XBEAASP_numbytes = (CUAAASP_intbinbytes*Rn.dim[0].upb);
 /* line 1587: */
 /* line 1588: */
 /* line 1589: */
YBEAASP = (XBEAASP_numbytes>(*(&((&((&(F->State))->Buffer))->Max))));
if ( YBEAASP )
{ 
ZBEAASP_mk = ((*(&((&((&(F->State))->Buffer))->Max)))/CUAAASP_intbinbytes);
 /* line 1590: */
WBEAASP_read(F, A_R1TRIM(ACEAASP,(Rn),A_RTSCRIPT(&(ACEAASP.dim[0]),&((Rn).dim[0]),(Rn).dim[0].lwb,ZBEAASP_mk,1)));
 /* line 1591: */
 /* line 1592: */
WBEAASP_read(F, A_R1TRIM(BCEAASP,(Rn),A_RTSCRIPT(&(BCEAASP.dim[0]),&((Rn).dim[0]),(ZBEAASP_mk+1),(Rn).dim[0].upb,1)));
} 
else
{ 
{ 
CCEAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(CCEAASP,(F, XBEAASP_numbytes, &DCEAASP),(F, XBEAASP_numbytes, &DCEAASP,(CCEAASP).nonlocals));
ECEAASP_buf = DCEAASP;
 /* line 1593: */
 /* line 1594: */
 /* line 1595: */
FCEAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<XBEAASP_numbytes);
if ( FCEAASP )
{ 
 /* line 1596: */
GCEAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(GCEAASP,(F),(F,(GCEAASP).nonlocals)) )
{ 
 /* line 1597: */
WBEAASP_read(F, Rn);
} 
else
{ 
 /* line 1598: */
 /* line 1599: */
 /* line 1600: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1601: */
ICEAASP = Rn.dim[0].upb;
for ( HCEAASP_i = 1;
HCEAASP_i <= ICEAASP;
HCEAASP_i += 1 )
{ 
 /* line 1602: */
JCEAASP = 2 ;
KCEAASP = (A68_BITS )(HCEAASP_i-1) ;
LCEAASP_i4 = ((A68_INT )A_SHL(KCEAASP,JCEAASP)+1);
 /* line 1603: */
 /* line 1604: */
NCEAASP = (&A_R1INDEX(Rn,HCEAASP_i)) ;
(*NCEAASP) = (A68_INT )QLAAASP_flatrvb(A_VTRIM(MCEAASP,(ECEAASP_buf),A_VTSCRIPT(&(MCEAASP.upb),(ECEAASP_buf).upb,LCEAASP_i4,(LCEAASP_i4+3))));
}
 /* line 1605: */
 /* line 1606: */
OCEAASP = (&((&(F->State))->Pos)) ;
(*OCEAASP)+=XBEAASP_numbytes;
} 
} 
} 
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  RCEAASP_read(A68_56 * F, A68_71  Rn)
{ 
A68_INT  SCEAASP_numbytes;
A68_BOOL  TCEAASP;  /* clause result */
A68_INT  UCEAASP_mk;
A68_71  VCEAASP;  /* OPERATORS - trim index */
A68_71  WCEAASP;  /* OPERATORS - trim index */
A68_53  XCEAASP;  /* CALL */
A68_VC  YCEAASP;  /* avoid structure result */
A68_VC  ZCEAASP_buf;
A68_BOOL  ADEAASP;  /* clause result */
A68_59  BDEAASP;  /* CALL */
A68_INT  CDEAASP_i;
A68_INT  DDEAASP;  /* to part of loop */
A68_INT  EDEAASP;  /* SHL */
A68_BITS  FDEAASP;  /* SHL */
A68_INT  GDEAASP_i2;
A68_VC  HDEAASP;  /* OPERATORS - trim index */
A68_SINT * IDEAASP;  /* YIELD */
A68_INT * JDEAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1609: */
{ 
SCEAASP_numbytes = (BUAAASP_shortintbinbytes*Rn.dim[0].upb);
 /* line 1610: */
 /* line 1611: */
 /* line 1612: */
TCEAASP = (SCEAASP_numbytes>(*(&((&((&(F->State))->Buffer))->Max))));
if ( TCEAASP )
{ 
UCEAASP_mk = ((*(&((&((&(F->State))->Buffer))->Max)))/BUAAASP_shortintbinbytes);
 /* line 1613: */
RCEAASP_read(F, A_R1TRIM(VCEAASP,(Rn),A_RTSCRIPT(&(VCEAASP.dim[0]),&((Rn).dim[0]),(Rn).dim[0].lwb,UCEAASP_mk,1)));
 /* line 1614: */
 /* line 1615: */
RCEAASP_read(F, A_R1TRIM(WCEAASP,(Rn),A_RTSCRIPT(&(WCEAASP.dim[0]),&((Rn).dim[0]),(UCEAASP_mk+1),(Rn).dim[0].upb,1)));
} 
else
{ 
{ 
XCEAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(XCEAASP,(F, SCEAASP_numbytes, &YCEAASP),(F, SCEAASP_numbytes, &YCEAASP,(XCEAASP).nonlocals));
ZCEAASP_buf = YCEAASP;
 /* line 1616: */
 /* line 1617: */
 /* line 1618: */
ADEAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<SCEAASP_numbytes);
if ( ADEAASP )
{ 
 /* line 1619: */
BDEAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(BDEAASP,(F),(F,(BDEAASP).nonlocals)) )
{ 
 /* line 1620: */
RCEAASP_read(F, Rn);
} 
else
{ 
 /* line 1621: */
 /* line 1622: */
 /* line 1623: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1624: */
DDEAASP = Rn.dim[0].upb;
for ( CDEAASP_i = 1;
CDEAASP_i <= DDEAASP;
CDEAASP_i += 1 )
{ 
 /* line 1625: */
EDEAASP = 1 ;
FDEAASP = (A68_BITS )(CDEAASP_i-1) ;
GDEAASP_i2 = ((A68_INT )A_SHL(FDEAASP,EDEAASP)+1);
 /* line 1626: */
 /* line 1627: */
IDEAASP = (&A_R1INDEX(Rn,CDEAASP_i)) ;
(*IDEAASP) = (A68_SINT )ZLAAASP_flatrvsb(A_VTRIM(HDEAASP,(ZCEAASP_buf),A_VTSCRIPT(&(HDEAASP.upb),(ZCEAASP_buf).upb,GDEAASP_i2,(GDEAASP_i2+1))));
}
 /* line 1628: */
 /* line 1629: */
JDEAASP = (&((&(F->State))->Pos)) ;
(*JDEAASP)+=SCEAASP_numbytes;
} 
} 
} 
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  MDEAASP_read(A68_56 * F, A68_72  Rn)
{ 
A68_INT  NDEAASP_numbytes;
A68_BOOL  ODEAASP;  /* clause result */
A68_INT  PDEAASP_mk;
A68_72  QDEAASP;  /* OPERATORS - trim index */
A68_72  RDEAASP;  /* OPERATORS - trim index */
A68_53  SDEAASP;  /* CALL */
A68_VC  TDEAASP;  /* avoid structure result */
A68_VC  UDEAASP_buf;
A68_BOOL  VDEAASP;  /* clause result */
A68_INT  WDEAASP_v;
A68_INT  XDEAASP_i;
A68_INT  YDEAASP;  /* to part of loop */
A68_VC  ZDEAASP;  /* OPERATORS - trim index */
A68_SSINT * AEEAASP;  /* YIELD */
A68_59  BEEAASP;  /* CALL */
A68_72  CEEAASP;  /* OPERATORS - trim index */
A68_59  DEEAASP;  /* CALL */
A68_INT  EEEAASP_i;
A68_INT  FEEAASP;  /* to part of loop */
A68_VC  GEEAASP;  /* OPERATORS - trim index */
A68_SSINT * HEEAASP;  /* YIELD */
A68_INT * IEEAASP;  /* YIELD */
A_PROC_ENTRY(read);
 /* line 1632: */
{ 
NDEAASP_numbytes = (AUAAASP_shortshortintbinbytes*Rn.dim[0].upb);
 /* line 1633: */
 /* line 1634: */
 /* line 1635: */
ODEAASP = (NDEAASP_numbytes>(*(&((&((&(F->State))->Buffer))->Max))));
if ( ODEAASP )
{ 
PDEAASP_mk = ((*(&((&((&(F->State))->Buffer))->Max)))/AUAAASP_shortshortintbinbytes);
 /* line 1636: */
MDEAASP_read(F, A_R1TRIM(QDEAASP,(Rn),A_RTSCRIPT(&(QDEAASP.dim[0]),&((Rn).dim[0]),(Rn).dim[0].lwb,PDEAASP_mk,1)));
 /* line 1637: */
 /* line 1638: */
MDEAASP_read(F, A_R1TRIM(RDEAASP,(Rn),A_RTSCRIPT(&(RDEAASP.dim[0]),&((Rn).dim[0]),(PDEAASP_mk+1),(Rn).dim[0].upb,1)));
} 
else
{ 
{ 
SDEAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(SDEAASP,(F, NDEAASP_numbytes, &TDEAASP),(F, NDEAASP_numbytes, &TDEAASP,(SDEAASP).nonlocals));
UDEAASP_buf = TDEAASP;
 /* line 1639: */
 /* line 1640: */
 /* line 1641: */
VDEAASP = ((*(&((&((&(F->State))->Buffer))->Valid)))<NDEAASP_numbytes);
if ( VDEAASP )
{ 
 /* line 1642: */
 /* line 1643: */
if ( ((*(&((&((&(F->State))->Buffer))->Valid)))>0) )
{ 
WDEAASP_v = (*(&((&((&(F->State))->Buffer))->Valid)));
 /* line 1644: */
 /* line 1645: */
YDEAASP = WDEAASP_v;
for ( XDEAASP_i = 1;
XDEAASP_i <= YDEAASP;
XDEAASP_i += 1 )
{ 
 /* line 1646: */
 /* line 1647: */
AEEAASP = (&A_R1INDEX(Rn,XDEAASP_i)) ;
(*AEEAASP) = (A68_SSINT )IMAAASP_flatrvssb(A_VTRIM(ZDEAASP,(UDEAASP_buf),A_VTSCRIPT(&(ZDEAASP.upb),(UDEAASP_buf).upb,XDEAASP_i,XDEAASP_i)));
}
 /* line 1648: */
 /* line 1649: */
BEEAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(BEEAASP,(F),(F,(BEEAASP).nonlocals)) )
{ 
 /* line 1650: */
MDEAASP_read(F, A_R1TRIM(CEEAASP,(Rn),A_RTSCRIPT(&(CEEAASP.dim[0]),&((Rn).dim[0]),(WDEAASP_v+1),(Rn).dim[0].upb,1)));
} 
else
{ 
 /* line 1651: */
 /* line 1652: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
else
{ 
 /* line 1653: */
DEEAASP = (*(&((&(F->Io))->Logicalfilemended))) ;
if ( A_CALLPROC(DEEAASP,(F),(F,(DEEAASP).nonlocals)) )
{ 
 /* line 1654: */
MDEAASP_read(F, Rn);
} 
else
{ 
 /* line 1655: */
 /* line 1656: */
 /* line 1657: */
JDCAASP_transputerror(F, WBCAASP_logicalfileendnotmended);
} 
} 
} 
else
{ 
 /* line 1658: */
FEEAASP = Rn.dim[0].upb;
for ( EEEAASP_i = 1;
EEEAASP_i <= FEEAASP;
EEEAASP_i += 1 )
{ 
 /* line 1659: */
 /* line 1660: */
HEEAASP = (&A_R1INDEX(Rn,EEEAASP_i)) ;
(*HEEAASP) = (A68_SSINT )IMAAASP_flatrvssb(A_VTRIM(GEEAASP,(UDEAASP_buf),A_VTSCRIPT(&(GEEAASP.upb),(UDEAASP_buf).upb,EEEAASP_i,EEEAASP_i)));
}
 /* line 1661: */
 /* line 1662: */
IEEAASP = (&((&(F->State))->Pos)) ;
(*IEEAASP)+=NDEAASP_numbytes;
} 
} 
} 
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  LEEAASP_write(A68_56 * F, A68_LBITS  B)
{ 
A68_53  MEEAASP;  /* CALL */
A68_VC  NEEAASP;  /* avoid structure result */
union {  /* BIOP 99 */
A68_LBITS   source;
A68_133   destination;
} OEEAASP; 
A68_VC  PEEAASP;  /* OPERATORS - istruct -> vector */
A68_133  QEEAASP;  /* OPERATORS - istruct -> vector */
A68_VC  REEAASP;  /* OPERATORS - assign op */
A68_INT * SEEAASP;  /* YIELD */
A68_BOOL * TEEAASP;  /* YIELD */
A68_INT * UEEAASP;  /* YIELD */
A_PROC_ENTRY(write);
 /* line 1665: */
 /* line 1666: */
{ 
MEEAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(MEEAASP,(F, HUAAASP_longbitsbinbytes, &NEEAASP),(F, HUAAASP_longbitsbinbytes, &NEEAASP,(MEEAASP).nonlocals));
OEEAASP.source = B ;
QEEAASP = (OEEAASP.destination) ;
REEAASP = A_HISVEC(PEEAASP,QEEAASP,8,A68_CHAR ) ;
A_VASSIGN2(REEAASP,NEEAASP,A68_CHAR );
 /* line 1667: */
SEEAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*SEEAASP)+=HUAAASP_longbitsbinbytes;
 /* line 1668: */
TEEAASP = (&((&((&(F->State))->Buffer))->Writeback)) ;
(*TEEAASP) = A68_TRUE;
 /* line 1669: */
 /* line 1670: */
UEEAASP = (&((&(F->State))->Pos)) ;
(*UEEAASP)+=HUAAASP_longbitsbinbytes;
} 
A_PROC_EXIT(write);
return;
} 
#undef NL

A_STATIC A68_VOID  XEEAASP_write(A68_56 * F, A68_BITS  B)
{ 
A68_53  YEEAASP;  /* CALL */
A68_VC  ZEEAASP;  /* avoid structure result */
union {  /* BIOP 99 */
A68_BITS   source;
A68_135   destination;
} AFEAASP; 
A68_VC  BFEAASP;  /* OPERATORS - istruct -> vector */
A68_135  CFEAASP;  /* OPERATORS - istruct -> vector */
A68_VC  DFEAASP;  /* OPERATORS - assign op */
A68_INT * EFEAASP;  /* YIELD */
A68_BOOL * FFEAASP;  /* YIELD */
A68_INT * GFEAASP;  /* YIELD */
A_PROC_ENTRY(write);
 /* line 1673: */
 /* line 1674: */
{ 
YEEAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(YEEAASP,(F, GUAAASP_bitsbinbytes, &ZEEAASP),(F, GUAAASP_bitsbinbytes, &ZEEAASP,(YEEAASP).nonlocals));
AFEAASP.source = B ;
CFEAASP = (AFEAASP.destination) ;
DFEAASP = A_HISVEC(BFEAASP,CFEAASP,4,A68_CHAR ) ;
A_VASSIGN2(DFEAASP,ZEEAASP,A68_CHAR );
 /* line 1675: */
EFEAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*EFEAASP)+=GUAAASP_bitsbinbytes;
 /* line 1676: */
FFEAASP = (&((&((&(F->State))->Buffer))->Writeback)) ;
(*FFEAASP) = A68_TRUE;
 /* line 1677: */
 /* line 1678: */
GFEAASP = (&((&(F->State))->Pos)) ;
(*GFEAASP)+=GUAAASP_bitsbinbytes;
} 
A_PROC_EXIT(write);
return;
} 
#undef NL

A_STATIC A68_VOID  JFEAASP_write(A68_56 * F, A68_SBITS  B)
{ 
A68_53  KFEAASP;  /* CALL */
A68_VC  LFEAASP;  /* avoid structure result */
union {  /* BIOP 99 */
A68_SBITS   source;
A68_141   destination;
} MFEAASP; 
A68_VC  NFEAASP;  /* OPERATORS - istruct -> vector */
A68_141  OFEAASP;  /* OPERATORS - istruct -> vector */
A68_VC  PFEAASP;  /* OPERATORS - assign op */
A68_INT * QFEAASP;  /* YIELD */
A68_BOOL * RFEAASP;  /* YIELD */
A68_INT * SFEAASP;  /* YIELD */
A_PROC_ENTRY(write);
 /* line 1681: */
 /* line 1682: */
{ 
KFEAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(KFEAASP,(F, FUAAASP_shortbitsbinbytes, &LFEAASP),(F, FUAAASP_shortbitsbinbytes, &LFEAASP,(KFEAASP).nonlocals));
MFEAASP.source = B ;
OFEAASP = (MFEAASP.destination) ;
PFEAASP = A_HISVEC(NFEAASP,OFEAASP,2,A68_CHAR ) ;
A_VASSIGN2(PFEAASP,LFEAASP,A68_CHAR );
 /* line 1683: */
QFEAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*QFEAASP)+=FUAAASP_shortbitsbinbytes;
 /* line 1684: */
RFEAASP = (&((&((&(F->State))->Buffer))->Writeback)) ;
(*RFEAASP) = A68_TRUE;
 /* line 1685: */
 /* line 1686: */
SFEAASP = (&((&(F->State))->Pos)) ;
(*SFEAASP)+=FUAAASP_shortbitsbinbytes;
} 
A_PROC_EXIT(write);
return;
} 
#undef NL

A_STATIC A68_VOID  VFEAASP_write(A68_56 * F, A68_SSBITS  B)
{ 
A68_53  WFEAASP;  /* CALL */
A68_VC  XFEAASP;  /* avoid structure result */
union {  /* BIOP 99 */
A68_SSBITS   source;
A68_143   destination;
} YFEAASP; 
A68_VC  ZFEAASP;  /* OPERATORS - istruct -> vector */
A68_143  AGEAASP;  /* OPERATORS - istruct -> vector */
A68_VC  BGEAASP;  /* OPERATORS - assign op */
A68_INT * CGEAASP;  /* YIELD */
A68_BOOL * DGEAASP;  /* YIELD */
A68_INT * EGEAASP;  /* YIELD */
A_PROC_ENTRY(write);
 /* line 1689: */
 /* line 1690: */
{ 
WFEAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(WFEAASP,(F, EUAAASP_shortshortbitsbinbytes, &XFEAASP),(F, EUAAASP_shortshortbitsbinbytes, &XFEAASP,(WFEAASP).nonlocals));
YFEAASP.source = B ;
AGEAASP = (YFEAASP.destination) ;
BGEAASP = A_HISVEC(ZFEAASP,AGEAASP,1,A68_CHAR ) ;
A_VASSIGN2(BGEAASP,XFEAASP,A68_CHAR );
 /* line 1691: */
CGEAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*CGEAASP)+=EUAAASP_shortshortbitsbinbytes;
 /* line 1692: */
DGEAASP = (&((&((&(F->State))->Buffer))->Writeback)) ;
(*DGEAASP) = A68_TRUE;
 /* line 1693: */
 /* line 1694: */
EGEAASP = (&((&(F->State))->Pos)) ;
(*EGEAASP)+=EUAAASP_shortshortbitsbinbytes;
} 
A_PROC_EXIT(write);
return;
} 
#undef NL

A_STATIC A68_VOID  HGEAASP_write(A68_56 * F, A68_CHAR  C)
{ 
A_PROC_ENTRY(write);
VFEAASP_write(F, (A68_SSBITS )(A68_SBITS )(A68_BITS )(A68_INT)(unsigned char)C);
A_PROC_EXIT(write);
return;
} 
#undef NL

A_STATIC A68_VOID  KGEAASP_write(A68_56 * F, A68_65  Rb)
{ 
A68_INT  LGEAASP_numbytes;
A68_BOOL  MGEAASP;  /* clause result */
A68_INT  NGEAASP_mk;
A68_65  OGEAASP;  /* OPERATORS - trim index */
A68_65  PGEAASP;  /* OPERATORS - trim index */
A68_53  QGEAASP;  /* CALL */
A68_VC  RGEAASP;  /* avoid structure result */
A68_VC  SGEAASP_buf;
A68_INT  TGEAASP_i;
A68_INT  UGEAASP;  /* to part of loop */
A68_INT  VGEAASP;  /* SHL */
A68_BITS  WGEAASP;  /* SHL */
A68_INT  XGEAASP_ik;
A68_VC  YGEAASP;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_LBITS   source;
A68_133   destination;
} ZGEAASP; 
A68_VC  AHEAASP;  /* OPERATORS - istruct -> vector */
A68_133  BHEAASP;  /* OPERATORS - istruct -> vector */
A68_VC  CHEAASP;  /* YIELD */
A68_VC  DHEAASP;  /* OPERATORS - assign op */
A68_INT * EHEAASP;  /* YIELD */
A68_BOOL * FHEAASP;  /* YIELD */
A68_INT * GHEAASP;  /* YIELD */
A_PROC_ENTRY(write);
 /* line 1699: */
{ 
LGEAASP_numbytes = (HUAAASP_longbitsbinbytes*Rb.dim[0].upb);
 /* line 1700: */
 /* line 1701: */
 /* line 1702: */
MGEAASP = (LGEAASP_numbytes>(*(&((&((&(F->State))->Buffer))->Max))));
if ( MGEAASP )
{ 
NGEAASP_mk = ((*(&((&((&(F->State))->Buffer))->Max)))/HUAAASP_longbitsbinbytes);
 /* line 1703: */
KGEAASP_write(F, A_R1TRIM(OGEAASP,(Rb),A_RTSCRIPT(&(OGEAASP.dim[0]),&((Rb).dim[0]),(Rb).dim[0].lwb,NGEAASP_mk,1)));
 /* line 1704: */
 /* line 1705: */
KGEAASP_write(F, A_R1TRIM(PGEAASP,(Rb),A_RTSCRIPT(&(PGEAASP.dim[0]),&((Rb).dim[0]),(NGEAASP_mk+1),(Rb).dim[0].upb,1)));
} 
else
{ 
QGEAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(QGEAASP,(F, LGEAASP_numbytes, &RGEAASP),(F, LGEAASP_numbytes, &RGEAASP,(QGEAASP).nonlocals));
SGEAASP_buf = RGEAASP;
 /* line 1706: */
 /* line 1707: */
UGEAASP = Rb.dim[0].upb;
for ( TGEAASP_i = 1;
TGEAASP_i <= UGEAASP;
TGEAASP_i += 1 )
{ 
 /* line 1708: */
VGEAASP = 3 ;
WGEAASP = (A68_BITS )(TGEAASP_i-1) ;
XGEAASP_ik = ((A68_INT )A_SHL(WGEAASP,VGEAASP)+1);
 /* line 1709: */
 /* line 1710: */
ZGEAASP.source = A_R1INDEX(Rb,TGEAASP_i) ;
BHEAASP = (ZGEAASP.destination) ;
CHEAASP = A_VTRIM(YGEAASP,(SGEAASP_buf),A_VTSCRIPT(&(YGEAASP.upb),(SGEAASP_buf).upb,XGEAASP_ik,(XGEAASP_ik+7))) ;
DHEAASP = A_HISVEC(AHEAASP,BHEAASP,8,A68_CHAR ) ;
A_VASSIGN2(DHEAASP,CHEAASP,A68_CHAR );
}
 /* line 1712: */
EHEAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*EHEAASP)+=LGEAASP_numbytes;
 /* line 1713: */
FHEAASP = (&((&((&(F->State))->Buffer))->Writeback)) ;
(*FHEAASP) = A68_TRUE;
 /* line 1714: */
 /* line 1715: */
GHEAASP = (&((&(F->State))->Pos)) ;
(*GHEAASP)+=LGEAASP_numbytes;
} 
} 
A_PROC_EXIT(write);
return;
} 
#undef NL

A_STATIC A68_VOID  JHEAASP_write(A68_56 * F, A68_66  Rb)
{ 
A68_INT  KHEAASP_numbytes;
A68_BOOL  LHEAASP;  /* clause result */
A68_INT  MHEAASP_mk;
A68_66  NHEAASP;  /* OPERATORS - trim index */
A68_66  OHEAASP;  /* OPERATORS - trim index */
A68_53  PHEAASP;  /* CALL */
A68_VC  QHEAASP;  /* avoid structure result */
A68_VC  RHEAASP_buf;
A68_INT  SHEAASP_i;
A68_INT  THEAASP;  /* to part of loop */
A68_INT  UHEAASP;  /* SHL */
A68_BITS  VHEAASP;  /* SHL */
A68_INT  WHEAASP_ik;
A68_VC  XHEAASP;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_BITS   source;
A68_135   destination;
} YHEAASP; 
A68_VC  ZHEAASP;  /* OPERATORS - istruct -> vector */
A68_135  AIEAASP;  /* OPERATORS - istruct -> vector */
A68_VC  BIEAASP;  /* YIELD */
A68_VC  CIEAASP;  /* OPERATORS - assign op */
A68_INT * DIEAASP;  /* YIELD */
A68_BOOL * EIEAASP;  /* YIELD */
A68_INT * FIEAASP;  /* YIELD */
A_PROC_ENTRY(write);
 /* line 1718: */
{ 
KHEAASP_numbytes = (GUAAASP_bitsbinbytes*Rb.dim[0].upb);
 /* line 1719: */
 /* line 1720: */
 /* line 1721: */
LHEAASP = (KHEAASP_numbytes>(*(&((&((&(F->State))->Buffer))->Max))));
if ( LHEAASP )
{ 
MHEAASP_mk = ((*(&((&((&(F->State))->Buffer))->Max)))/GUAAASP_bitsbinbytes);
 /* line 1722: */
JHEAASP_write(F, A_R1TRIM(NHEAASP,(Rb),A_RTSCRIPT(&(NHEAASP.dim[0]),&((Rb).dim[0]),(Rb).dim[0].lwb,MHEAASP_mk,1)));
 /* line 1723: */
 /* line 1724: */
JHEAASP_write(F, A_R1TRIM(OHEAASP,(Rb),A_RTSCRIPT(&(OHEAASP.dim[0]),&((Rb).dim[0]),(MHEAASP_mk+1),(Rb).dim[0].upb,1)));
} 
else
{ 
PHEAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(PHEAASP,(F, KHEAASP_numbytes, &QHEAASP),(F, KHEAASP_numbytes, &QHEAASP,(PHEAASP).nonlocals));
RHEAASP_buf = QHEAASP;
 /* line 1725: */
 /* line 1726: */
THEAASP = Rb.dim[0].upb;
for ( SHEAASP_i = 1;
SHEAASP_i <= THEAASP;
SHEAASP_i += 1 )
{ 
 /* line 1728: */
UHEAASP = 2 ;
VHEAASP = (A68_BITS )(SHEAASP_i-1) ;
WHEAASP_ik = ((A68_INT )A_SHL(VHEAASP,UHEAASP)+1);
 /* line 1729: */
 /* line 1730: */
YHEAASP.source = A_R1INDEX(Rb,SHEAASP_i) ;
AIEAASP = (YHEAASP.destination) ;
BIEAASP = A_VTRIM(XHEAASP,(RHEAASP_buf),A_VTSCRIPT(&(XHEAASP.upb),(RHEAASP_buf).upb,WHEAASP_ik,(WHEAASP_ik+3))) ;
CIEAASP = A_HISVEC(ZHEAASP,AIEAASP,4,A68_CHAR ) ;
A_VASSIGN2(CIEAASP,BIEAASP,A68_CHAR );
}
 /* line 1732: */
DIEAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*DIEAASP)+=KHEAASP_numbytes;
 /* line 1733: */
EIEAASP = (&((&((&(F->State))->Buffer))->Writeback)) ;
(*EIEAASP) = A68_TRUE;
 /* line 1734: */
 /* line 1735: */
FIEAASP = (&((&(F->State))->Pos)) ;
(*FIEAASP)+=KHEAASP_numbytes;
} 
} 
A_PROC_EXIT(write);
return;
} 
#undef NL

A_STATIC A68_VOID  IIEAASP_write(A68_56 * F, A68_67  Rb)
{ 
A68_INT  JIEAASP_numbytes;
A68_BOOL  KIEAASP;  /* clause result */
A68_INT  LIEAASP_mk;
A68_67  MIEAASP;  /* OPERATORS - trim index */
A68_67  NIEAASP;  /* OPERATORS - trim index */
A68_53  OIEAASP;  /* CALL */
A68_VC  PIEAASP;  /* avoid structure result */
A68_VC  QIEAASP_buf;
A68_INT  RIEAASP_i;
A68_INT  SIEAASP;  /* to part of loop */
A68_INT  TIEAASP;  /* SHL */
A68_BITS  UIEAASP;  /* SHL */
A68_INT  VIEAASP_ik;
A68_VC  WIEAASP;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_SBITS   source;
A68_141   destination;
} XIEAASP; 
A68_VC  YIEAASP;  /* OPERATORS - istruct -> vector */
A68_141  ZIEAASP;  /* OPERATORS - istruct -> vector */
A68_VC  AJEAASP;  /* YIELD */
A68_VC  BJEAASP;  /* OPERATORS - assign op */
A68_INT * CJEAASP;  /* YIELD */
A68_BOOL * DJEAASP;  /* YIELD */
A68_INT * EJEAASP;  /* YIELD */
A_PROC_ENTRY(write);
 /* line 1738: */
{ 
JIEAASP_numbytes = (FUAAASP_shortbitsbinbytes*Rb.dim[0].upb);
 /* line 1739: */
 /* line 1740: */
 /* line 1741: */
KIEAASP = (JIEAASP_numbytes>(*(&((&((&(F->State))->Buffer))->Max))));
if ( KIEAASP )
{ 
LIEAASP_mk = ((*(&((&((&(F->State))->Buffer))->Max)))/FUAAASP_shortbitsbinbytes);
 /* line 1742: */
IIEAASP_write(F, A_R1TRIM(MIEAASP,(Rb),A_RTSCRIPT(&(MIEAASP.dim[0]),&((Rb).dim[0]),(Rb).dim[0].lwb,LIEAASP_mk,1)));
 /* line 1743: */
 /* line 1744: */
IIEAASP_write(F, A_R1TRIM(NIEAASP,(Rb),A_RTSCRIPT(&(NIEAASP.dim[0]),&((Rb).dim[0]),(LIEAASP_mk+1),(Rb).dim[0].upb,1)));
} 
else
{ 
OIEAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(OIEAASP,(F, JIEAASP_numbytes, &PIEAASP),(F, JIEAASP_numbytes, &PIEAASP,(OIEAASP).nonlocals));
QIEAASP_buf = PIEAASP;
 /* line 1745: */
 /* line 1746: */
SIEAASP = Rb.dim[0].upb;
for ( RIEAASP_i = 1;
RIEAASP_i <= SIEAASP;
RIEAASP_i += 1 )
{ 
 /* line 1747: */
TIEAASP = 1 ;
UIEAASP = (A68_BITS )(RIEAASP_i-1) ;
VIEAASP_ik = ((A68_INT )A_SHL(UIEAASP,TIEAASP)+1);
 /* line 1748: */
 /* line 1749: */
XIEAASP.source = A_R1INDEX(Rb,RIEAASP_i) ;
ZIEAASP = (XIEAASP.destination) ;
AJEAASP = A_VTRIM(WIEAASP,(QIEAASP_buf),A_VTSCRIPT(&(WIEAASP.upb),(QIEAASP_buf).upb,VIEAASP_ik,(VIEAASP_ik+1))) ;
BJEAASP = A_HISVEC(YIEAASP,ZIEAASP,2,A68_CHAR ) ;
A_VASSIGN2(BJEAASP,AJEAASP,A68_CHAR );
}
 /* line 1751: */
CJEAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*CJEAASP)+=JIEAASP_numbytes;
 /* line 1752: */
DJEAASP = (&((&((&(F->State))->Buffer))->Writeback)) ;
(*DJEAASP) = A68_TRUE;
 /* line 1753: */
 /* line 1754: */
EJEAASP = (&((&(F->State))->Pos)) ;
(*EJEAASP)+=JIEAASP_numbytes;
} 
} 
A_PROC_EXIT(write);
return;
} 
#undef NL

A_STATIC A68_VOID  HJEAASP_write(A68_56 * F, A68_68  Rb)
{ 
A68_INT  IJEAASP_mk;
A68_68  JJEAASP;  /* OPERATORS - trim index */
A68_68  KJEAASP;  /* OPERATORS - trim index */
A68_53  LJEAASP;  /* CALL */
A68_VC  MJEAASP;  /* avoid structure result */
A68_VC  NJEAASP_buf;
A68_INT  OJEAASP_i;
A68_INT  PJEAASP;  /* to part of loop */
A68_VC  QJEAASP;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_SSBITS   source;
A68_143   destination;
} RJEAASP; 
A68_VC  SJEAASP;  /* OPERATORS - istruct -> vector */
A68_143  TJEAASP;  /* OPERATORS - istruct -> vector */
A68_VC  UJEAASP;  /* YIELD */
A68_VC  VJEAASP;  /* OPERATORS - assign op */
A68_INT * WJEAASP;  /* YIELD */
A68_BOOL * XJEAASP;  /* YIELD */
A68_INT * YJEAASP;  /* YIELD */
A_PROC_ENTRY(write);
 /* line 1757: */
 /* line 1758: */
 /* line 1759: */
if ( (Rb.dim[0].upb>(*(&((&((&(F->State))->Buffer))->Max)))) )
{ 
IJEAASP_mk = (*(&((&((&(F->State))->Buffer))->Max)));
 /* line 1760: */
HJEAASP_write(F, A_R1TRIM(JJEAASP,(Rb),A_RTSCRIPT(&(JJEAASP.dim[0]),&((Rb).dim[0]),(Rb).dim[0].lwb,IJEAASP_mk,1)));
 /* line 1761: */
 /* line 1762: */
HJEAASP_write(F, A_R1TRIM(KJEAASP,(Rb),A_RTSCRIPT(&(KJEAASP.dim[0]),&((Rb).dim[0]),(IJEAASP_mk+1),(Rb).dim[0].upb,1)));
} 
else
{ 
LJEAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(LJEAASP,(F, Rb.dim[0].upb, &MJEAASP),(F, Rb.dim[0].upb, &MJEAASP,(LJEAASP).nonlocals));
NJEAASP_buf = MJEAASP;
 /* line 1763: */
 /* line 1764: */
PJEAASP = Rb.dim[0].upb;
for ( OJEAASP_i = 1;
OJEAASP_i <= PJEAASP;
OJEAASP_i += 1 )
{ 
 /* line 1765: */
 /* line 1766: */
RJEAASP.source = A_R1INDEX(Rb,OJEAASP_i) ;
TJEAASP = (RJEAASP.destination) ;
UJEAASP = A_VTRIM(QJEAASP,(NJEAASP_buf),A_VTSCRIPT(&(QJEAASP.upb),(NJEAASP_buf).upb,OJEAASP_i,OJEAASP_i)) ;
VJEAASP = A_HISVEC(SJEAASP,TJEAASP,1,A68_CHAR ) ;
A_VASSIGN2(VJEAASP,UJEAASP,A68_CHAR );
}
 /* line 1768: */
WJEAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*WJEAASP)+=Rb.dim[0].upb;
 /* line 1770: */
XJEAASP = (&((&((&(F->State))->Buffer))->Writeback)) ;
(*XJEAASP) = A68_TRUE;
 /* line 1771: */
 /* line 1772: */
YJEAASP = (&((&(F->State))->Pos)) ;
(*YJEAASP)+=Rb.dim[0].upb;
} 
A_PROC_EXIT(write);
return;
} 
#undef NL

A_STATIC A68_VOID  BKEAASP_write(A68_56 * F, A68_RC  Rc)
{ 
A68_RC  CKEAASP;  /* OPERATORS - trim index */
A68_RC  DKEAASP;  /* OPERATORS - trim index */
A68_53  EKEAASP;  /* CALL */
A68_VC  FKEAASP;  /* avoid structure result */
A68_RC  GKEAASP;  /* OPERATORS - vector -> row */
A68_RC  HKEAASP;  /* YIELD */
A68_INT * IKEAASP;  /* YIELD */
A68_BOOL * JKEAASP;  /* YIELD */
A68_INT * KKEAASP;  /* YIELD */
A_PROC_ENTRY(write);
 /* line 1775: */
 /* line 1776: */
 /* line 1777: */
if ( (Rc.dim[0].upb>(*(&((&((&(F->State))->Buffer))->Max)))) )
{ 
BKEAASP_write(F, A_R1TRIM(CKEAASP,(Rc),A_RTSCRIPT(&(CKEAASP.dim[0]),&((Rc).dim[0]),(Rc).dim[0].lwb,(*(&((&((&(F->State))->Buffer))->Max))),1)));
 /* line 1778: */
 /* line 1779: */
 /* line 1780: */
BKEAASP_write(F, A_R1TRIM(DKEAASP,(Rc),A_RTSCRIPT(&(DKEAASP.dim[0]),&((Rc).dim[0]),((*(&((&((&(F->State))->Buffer))->Max)))+1),(Rc).dim[0].upb,1)));
} 
else
{ 
EKEAASP = (*(&((&(F->Sys))->Ensurebufspace))) ;
A_CALLPROC(EKEAASP,(F, Rc.dim[0].upb, &FKEAASP),(F, Rc.dim[0].upb, &FKEAASP,(EKEAASP).nonlocals));
HKEAASP = A_VECARR(FKEAASP,GKEAASP) ;
A_R1ASSIGN2(Rc,HKEAASP,A68_CHAR );
 /* line 1781: */
IKEAASP = (&((&((&(F->State))->Buffer))->Valid)) ;
(*IKEAASP)+=Rc.dim[0].upb;
 /* line 1782: */
JKEAASP = (&((&((&(F->State))->Buffer))->Writeback)) ;
(*JKEAASP) = A68_TRUE;
 /* line 1783: */
 /* line 1784: */
KKEAASP = (&((&(F->State))->Pos)) ;
(*KKEAASP)+=Rc.dim[0].upb;
} 
A_PROC_EXIT(write);
return;
} 
#undef NL

A68_VOID  NKEAASP_get(A68_56 * F, A68_289  X)
{ 
A68_BOOL  OKEAASP;  /* optbool result */
A68_BOOL * PKEAASP;  /* YIELD */
A68_INT  QKEAASP_i;
A68_INT  RKEAASP;  /* to part of loop */
A68_288  SKEAASP;  /* united object - for case conformity */
A68_50  TKEAASP_pf;
A68_63  UKEAASP_si;
A68_CHAR  VKEAASP_k;
A68_291  YKEAASP_mendchar;   /* proc value of non-global proc */
A68_85  ELEAASP_skipinitialspaces;   /* proc value of non-global proc */
A68_85  HLEAASP_skipspaces;   /* proc value of non-global proc */
A68_292  LLEAASP_readlonginteger;   /* proc value of non-global proc */
A68_293  WLEAASP_readinteger;   /* proc value of non-global proc */
A68_294  HMEAASP_readshortinteger;   /* proc value of non-global proc */
A68_295  SMEAASP_readshortshortinteger;   /* proc value of non-global proc */
A68_296  DNEAASP_readlreal;   /* proc value of non-global proc */
A68_63  HOEAASP;  /* united object - for case conformity */
A68_298  IOEAASP_irc;
A68_298  JOEAASP;  /* united object - for case conformity */
A68_LINT * KOEAASP_ii;
A68_BOOL  LOEAASP;  /* clause result */
A68_INT * MOEAASP_ii;
A68_SINT * NOEAASP_ii;
A68_SSINT * OOEAASP_ii;
A68_190  POEAASP_rr;
A68_COMPL * QOEAASP_zz;
A68_190  ROEAASP;  /* OPERATORS - mode -> union mode */
A68_REAL * SOEAASP;  /* YIELD */
A68_BOOL  TOEAASP_ok;
A68_190  UOEAASP;  /* OPERATORS - mode -> union mode */
A68_REAL * VOEAASP;  /* YIELD */
A68_SCOMPL * WOEAASP_zz;
A68_190  XOEAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL * YOEAASP;  /* YIELD */
A68_BOOL  ZOEAASP_ok;
A68_190  APEAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL * BPEAASP;  /* YIELD */
A68_BOOL  CPEAASP;  /* clause result */
A68_59  DPEAASP;  /* CALL */
A68_69  EPEAASP_rii;
A68_INT  FPEAASP_i;
A68_INT  GPEAASP;  /* to part of loop */
A68_288  HPEAASP;  /* OPERATORS - mode -> union mode */
A68_LINT * IPEAASP;  /* YIELD */
A68_289  JPEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_70  KPEAASP_rii;
A68_INT  LPEAASP_i;
A68_INT  MPEAASP;  /* to part of loop */
A68_288  NPEAASP;  /* OPERATORS - mode -> union mode */
A68_INT * OPEAASP;  /* YIELD */
A68_289  PPEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_71  QPEAASP_rii;
A68_INT  RPEAASP_i;
A68_INT  SPEAASP;  /* to part of loop */
A68_288  TPEAASP;  /* OPERATORS - mode -> union mode */
A68_SINT * UPEAASP;  /* YIELD */
A68_289  VPEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_72  WPEAASP_rii;
A68_INT  XPEAASP_i;
A68_INT  YPEAASP;  /* to part of loop */
A68_288  ZPEAASP;  /* OPERATORS - mode -> union mode */
A68_SSINT * AQEAASP;  /* YIELD */
A68_289  BQEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_73  CQEAASP_rri;
A68_INT  DQEAASP_i;
A68_INT  EQEAASP;  /* to part of loop */
A68_288  FQEAASP;  /* OPERATORS - mode -> union mode */
A68_REAL * GQEAASP;  /* YIELD */
A68_289  HQEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_74  IQEAASP_rri;
A68_INT  JQEAASP_i;
A68_INT  KQEAASP;  /* to part of loop */
A68_288  LQEAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL * MQEAASP;  /* YIELD */
A68_289  NQEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  OQEAASP_rzz;
A68_INT  PQEAASP_i;
A68_INT  QQEAASP;  /* to part of loop */
A68_288  RQEAASP;  /* OPERATORS - mode -> union mode */
A68_COMPL * SQEAASP;  /* YIELD */
A68_289  TQEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_76  UQEAASP_rzz;
A68_INT  VQEAASP_i;
A68_INT  WQEAASP;  /* to part of loop */
A68_288  XQEAASP;  /* OPERATORS - mode -> union mode */
A68_SCOMPL * YQEAASP;  /* YIELD */
A68_289  ZQEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL * AREAASP_bb;
A68_64  BREAASP_rbb;
A68_INT  CREAASP_i;
A68_INT  DREAASP;  /* to part of loop */
A68_288  EREAASP;  /* OPERATORS - mode -> union mode */
A68_BOOL * FREAASP;  /* YIELD */
A68_289  GREAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_LBITS * HREAASP_lb;
A68_300  JREAASP_generator;   /* proc value of non-global proc */
A68_299  PREAASP;  /* avoid structure result */
A68_299  OREAASP_b;
A68_INT  QREAASP_i;
A68_INT  RREAASP;  /* to part of loop */
A68_BOOL * SREAASP;  /* YIELD */
A68_64  TREAASP;  /* OPERATORS - vector -> row */
A68_BITS * UREAASP_lb;
A68_300  WREAASP_generator;   /* proc value of non-global proc */
A68_299  CSEAASP;  /* avoid structure result */
A68_299  BSEAASP_b;
A68_INT  DSEAASP_i;
A68_INT  ESEAASP;  /* to part of loop */
A68_BOOL * FSEAASP;  /* YIELD */
A68_64  GSEAASP;  /* OPERATORS - vector -> row */
A68_SBITS * HSEAASP_lb;
A68_300  JSEAASP_generator;   /* proc value of non-global proc */
A68_299  PSEAASP;  /* avoid structure result */
A68_299  OSEAASP_b;
A68_INT  QSEAASP_i;
A68_INT  RSEAASP;  /* to part of loop */
A68_BOOL * SSEAASP;  /* YIELD */
A68_64  TSEAASP;  /* OPERATORS - vector -> row */
A68_SSBITS * USEAASP_lb;
A68_300  WSEAASP_generator;   /* proc value of non-global proc */
A68_299  CTEAASP;  /* avoid structure result */
A68_299  BTEAASP_b;
A68_INT  DTEAASP_i;
A68_INT  ETEAASP;  /* to part of loop */
A68_BOOL * FTEAASP;  /* YIELD */
A68_64  GTEAASP;  /* OPERATORS - vector -> row */
A68_65  HTEAASP_rlb;
A68_INT  ITEAASP_i;
A68_INT  JTEAASP;  /* to part of loop */
A68_288  KTEAASP;  /* OPERATORS - mode -> union mode */
A68_LBITS * LTEAASP;  /* YIELD */
A68_289  MTEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_66  NTEAASP_rlb;
A68_INT  OTEAASP_i;
A68_INT  PTEAASP;  /* to part of loop */
A68_288  QTEAASP;  /* OPERATORS - mode -> union mode */
A68_BITS * RTEAASP;  /* YIELD */
A68_289  STEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_67  TTEAASP_rlb;
A68_INT  UTEAASP_i;
A68_INT  VTEAASP;  /* to part of loop */
A68_288  WTEAASP;  /* OPERATORS - mode -> union mode */
A68_SBITS * XTEAASP;  /* YIELD */
A68_289  YTEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_68  ZTEAASP_rlb;
A68_INT  AUEAASP_i;
A68_INT  BUEAASP;  /* to part of loop */
A68_288  CUEAASP;  /* OPERATORS - mode -> union mode */
A68_SSBITS * DUEAASP;  /* YIELD */
A68_289  EUEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_CHAR * FUEAASP_cc;
A68_RC  GUEAASP_ss;
A68_INT  HUEAASP_i;
A68_INT  IUEAASP;  /* to part of loop */
A68_CHAR * JUEAASP;  /* YIELD */
A68_32 * KUEAASP_ss;
A68_INT  LUEAASP_index;
A68_33  NUEAASP_generator;   /* proc value of non-global proc */
A68_RC  TUEAASP;  /* avoid structure result */
A68_RC  SUEAASP_s;
A68_BOOL  UUEAASP;  /* clause result */
A68_BOOL  VUEAASP;  /* clause result */
A68_BOOL  WUEAASP;  /* clause result */
A68_33  YUEAASP_generator;   /* proc value of non-global proc */
A68_RC  DVEAASP;  /* avoid structure result */
A68_RC  EVEAASP_t;
A68_RC  FVEAASP;  /* OPERATORS - trim index */
A68_RC  GVEAASP;  /* YIELD */
A68_INT  HVEAASP;  /* YIELD */
A68_CHAR * IVEAASP;  /* YIELD */
A68_RC  JVEAASP;  /* OPERATORS - trim index */
A68_RC  KVEAASP;  /* YIELD */
A68_RC  LVEAASP;  /* OPERATORS - copy to flex */
A68_77  MVEAASP_st;
A68_INT  NVEAASP_i;
A68_INT  OVEAASP;  /* to part of loop */
A68_77  PVEAASP;  /* OPERATORS - straight index */
A68_63  QVEAASP;  /* OPERATORS - straight index result */
A68_288  RVEAASP;  /* OPERATORS - unite union */
A68_63  SVEAASP;  /* YIELD */
A68_289  TVEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(get);
 /* line 1790: */
 /* line 1791: */
 /* line 1793: */
OKEAASP = (*(&((&(F->State))->Opened)));
if ( OKEAASP )
{OKEAASP = !(*(&((&(F->State))->Ended)));
}
 /* line 1795: */
if ( OKEAASP )
{OKEAASP = (*(&((&((&(F->Book))->Type))->Getpossible)));
}
 /* line 1796: */
if ( OKEAASP )
{ 
OGCAASP_setreadmood(F);
PKEAASP = (&((&(F->State))->Charmood)) ;
(*PKEAASP) = A68_TRUE;
 /* line 1798: */
 /* line 1799: */
RKEAASP = X.dim[0].upb;
for ( QKEAASP_i = X.dim[0].lwb;
QKEAASP_i <= RKEAASP;
QKEAASP_i += 1 )
{ 
 /* line 1800: */
 /* line 1801: */
 /* line 1802: */
SKEAASP = A_R1INDEX(X,QKEAASP_i) ;
switch ( SKEAASP.mode )
{ 
case 31: /* PROC(REF MODE56) VOID */
TKEAASP_pf = (SKEAASP.data.mode31);
 /* line 1804: */
A_CALLPROC(TKEAASP_pf,(F),(F,(TKEAASP_pf).nonlocals));
break;
case 1: /* REF CHAR */
case 2: /* REF [] CHAR */
case 3: /* REF FLEX [] CHAR */
case 4: /* REF BOOL */
case 5: /* REF [] BOOL */
case 6: /* REF LONG BITS */
case 7: /* REF [] LONG BITS */
case 8: /* REF BITS */
case 9: /* REF [] BITS */
case 10: /* REF SHORT BITS */
case 11: /* REF [] SHORT BITS */
case 12: /* REF SHORT SHORT BITS */
case 13: /* REF [] SHORT SHORT BITS */
case 14: /* REF LONG INT */
case 15: /* REF [] LONG INT */
case 16: /* REF INT */
case 17: /* REF [] INT */
case 18: /* REF SHORT INT */
case 19: /* REF [] SHORT INT */
case 20: /* REF SHORT SHORT INT */
case 21: /* REF [] SHORT SHORT INT */
case 22: /* REF REAL */
case 23: /* REF [] REAL */
case 24: /* REF SHORT REAL */
case 25: /* REF [] SHORT REAL */
case 26: /* REF COMPL */
case 27: /* REF [] COMPL */
case 28: /* REF SHORT COMPL */
case 29: /* REF [] SHORT COMPL */
case 30: /* STRAIGHT MODE63 */
A_UNCPY(UKEAASP_si,SKEAASP);
 /* line 1805: */
 /* line 1806: */
{ 
 /* line 1808: */
A_CLOSURE( YKEAASP_mendchar, ZKEAASP_mendchar, ALEAASP_mendchar );
(( ALEAASP_mendchar * ) ( YKEAASP_mendchar.nonlocals )) -> VKEAASP_k = (&VKEAASP_k);
(( ALEAASP_mendchar * ) ( YKEAASP_mendchar.nonlocals )) -> F = F;
 /* line 1817: */
 /* line 1818: */
A_CLOSURE( ELEAASP_skipinitialspaces, FLEAASP_skipinitialspaces, GLEAASP_skipinitialspaces );
(( GLEAASP_skipinitialspaces * ) ( ELEAASP_skipinitialspaces.nonlocals )) -> VKEAASP_k = (&VKEAASP_k);
(( GLEAASP_skipinitialspaces * ) ( ELEAASP_skipinitialspaces.nonlocals )) -> F = F;
 /* line 1820: */
 /* line 1821: */
A_CLOSURE( HLEAASP_skipspaces, ILEAASP_skipspaces, JLEAASP_skipspaces );
(( JLEAASP_skipspaces * ) ( HLEAASP_skipspaces.nonlocals )) -> VKEAASP_k = (&VKEAASP_k);
(( JLEAASP_skipspaces * ) ( HLEAASP_skipspaces.nonlocals )) -> F = F;
 /* line 1823: */
A_CLOSURE( LLEAASP_readlonginteger, MLEAASP_readlonginteger, NLEAASP_readlonginteger );
(( NLEAASP_readlonginteger * ) ( LLEAASP_readlonginteger.nonlocals )) -> VKEAASP_k = (&VKEAASP_k);
(( NLEAASP_readlonginteger * ) ( LLEAASP_readlonginteger.nonlocals )) -> HLEAASP_skipspaces = HLEAASP_skipspaces;
(( NLEAASP_readlonginteger * ) ( LLEAASP_readlonginteger.nonlocals )) -> YKEAASP_mendchar = YKEAASP_mendchar;
(( NLEAASP_readlonginteger * ) ( LLEAASP_readlonginteger.nonlocals )) -> F = F;
 /* line 1845: */
A_CLOSURE( WLEAASP_readinteger, XLEAASP_readinteger, YLEAASP_readinteger );
(( YLEAASP_readinteger * ) ( WLEAASP_readinteger.nonlocals )) -> VKEAASP_k = (&VKEAASP_k);
(( YLEAASP_readinteger * ) ( WLEAASP_readinteger.nonlocals )) -> HLEAASP_skipspaces = HLEAASP_skipspaces;
(( YLEAASP_readinteger * ) ( WLEAASP_readinteger.nonlocals )) -> YKEAASP_mendchar = YKEAASP_mendchar;
(( YLEAASP_readinteger * ) ( WLEAASP_readinteger.nonlocals )) -> F = F;
 /* line 1867: */
A_CLOSURE( HMEAASP_readshortinteger, IMEAASP_readshortinteger, JMEAASP_readshortinteger );
(( JMEAASP_readshortinteger * ) ( HMEAASP_readshortinteger.nonlocals )) -> VKEAASP_k = (&VKEAASP_k);
(( JMEAASP_readshortinteger * ) ( HMEAASP_readshortinteger.nonlocals )) -> HLEAASP_skipspaces = HLEAASP_skipspaces;
(( JMEAASP_readshortinteger * ) ( HMEAASP_readshortinteger.nonlocals )) -> YKEAASP_mendchar = YKEAASP_mendchar;
(( JMEAASP_readshortinteger * ) ( HMEAASP_readshortinteger.nonlocals )) -> F = F;
 /* line 1889: */
A_CLOSURE( SMEAASP_readshortshortinteger, TMEAASP_readshortshortinteger, UMEAASP_readshortshortinteger );
(( UMEAASP_readshortshortinteger * ) ( SMEAASP_readshortshortinteger.nonlocals )) -> VKEAASP_k = (&VKEAASP_k);
(( UMEAASP_readshortshortinteger * ) ( SMEAASP_readshortshortinteger.nonlocals )) -> HLEAASP_skipspaces = HLEAASP_skipspaces;
(( UMEAASP_readshortshortinteger * ) ( SMEAASP_readshortshortinteger.nonlocals )) -> YKEAASP_mendchar = YKEAASP_mendchar;
(( UMEAASP_readshortshortinteger * ) ( SMEAASP_readshortshortinteger.nonlocals )) -> F = F;
 /* line 1911: */
A_CLOSURE( DNEAASP_readlreal, ENEAASP_readlreal, FNEAASP_readlreal );
(( FNEAASP_readlreal * ) ( DNEAASP_readlreal.nonlocals )) -> VKEAASP_k = (&VKEAASP_k);
(( FNEAASP_readlreal * ) ( DNEAASP_readlreal.nonlocals )) -> HLEAASP_skipspaces = HLEAASP_skipspaces;
(( FNEAASP_readlreal * ) ( DNEAASP_readlreal.nonlocals )) -> YKEAASP_mendchar = YKEAASP_mendchar;
(( FNEAASP_readlreal * ) ( DNEAASP_readlreal.nonlocals )) -> F = F;
(( FNEAASP_readlreal * ) ( DNEAASP_readlreal.nonlocals )) -> WLEAASP_readinteger = WLEAASP_readinteger;
 /* line 1959: */
 /* line 1960: */
 /* line 1964: */
HOEAASP = UKEAASP_si ;
switch ( HOEAASP.mode )
{ 
case 14: /* REF LONG INT */
case 16: /* REF INT */
case 18: /* REF SHORT INT */
case 20: /* REF SHORT SHORT INT */
case 22: /* REF REAL */
case 24: /* REF SHORT REAL */
case 26: /* REF COMPL */
case 28: /* REF SHORT COMPL */
A_UNCPY(IOEAASP_irc,HOEAASP);
IOEAASP_irc.mode = "\000\0\0\0\0\0\0\0\0\0\0\0\0\0\001\0\002\0\003\0\004\0\005\0\006\0\007\0\010\0\000"[HOEAASP.mode];
 /* line 1965: */
 /* line 1966: */
{ 
A_CALLPROC(ELEAASP_skipinitialspaces,(),((ELEAASP_skipinitialspaces).nonlocals));
 /* line 1967: */
 /* line 1969: */
 /* line 1970: */
JOEAASP = IOEAASP_irc ;
switch ( JOEAASP.mode )
{ 
case 1: /* REF LONG INT */
KOEAASP_ii = (JOEAASP.data.mode1);
 /* line 1971: */
LOEAASP = A_CALLPROC(LLEAASP_readlonginteger,(KOEAASP_ii),(KOEAASP_ii,(LLEAASP_readlonginteger).nonlocals));
break;
case 2: /* REF INT */
MOEAASP_ii = (JOEAASP.data.mode2);
 /* line 1972: */
LOEAASP = A_CALLPROC(WLEAASP_readinteger,(MOEAASP_ii),(MOEAASP_ii,(WLEAASP_readinteger).nonlocals));
break;
case 3: /* REF SHORT INT */
NOEAASP_ii = (JOEAASP.data.mode3);
 /* line 1973: */
LOEAASP = A_CALLPROC(HMEAASP_readshortinteger,(NOEAASP_ii),(NOEAASP_ii,(HMEAASP_readshortinteger).nonlocals));
break;
case 4: /* REF SHORT SHORT INT */
OOEAASP_ii = (JOEAASP.data.mode4);
 /* line 1974: */
 /* line 1975: */
LOEAASP = A_CALLPROC(SMEAASP_readshortshortinteger,(OOEAASP_ii),(OOEAASP_ii,(SMEAASP_readshortshortinteger).nonlocals));
break;
case 5: /* REF REAL */
case 6: /* REF SHORT REAL */
A_UNCPY(POEAASP_rr,JOEAASP);
POEAASP_rr.mode -= 4;
 /* line 1976: */
 /* line 1977: */
LOEAASP = A_CALLPROC(DNEAASP_readlreal,(POEAASP_rr),(POEAASP_rr,(DNEAASP_readlreal).nonlocals));
break;
case 7: /* REF COMPL */
QOEAASP_zz = (JOEAASP.data.mode7);
 /* line 1978: */
 /* line 1979: */
{ 
SOEAASP = (&(QOEAASP_zz->Re)) ;
TOEAASP_ok = A_CALLPROC(DNEAASP_readlreal,(A_UNITE(ROEAASP,mode1,1,SOEAASP)),(A_UNITE(ROEAASP,mode1,1,SOEAASP),(DNEAASP_readlreal).nonlocals));
 /* line 1980: */
A_CALLPROC(HLEAASP_skipspaces,(),((HLEAASP_skipspaces).nonlocals));
 /* line 1981: */
 /* line 1982: */
if ( !WYAAASP_elem(VKEAASP_k, TZAAASP_plusitimes) )
{ 
 /* line 1983: */
A_CALLPROC(YKEAASP_mendchar,(TZAAASP_plusitimes, 'i'),(TZAAASP_plusitimes, 'i',(YKEAASP_mendchar).nonlocals));
} 
 /* line 1984: */
A_CALLPROC(HLEAASP_skipspaces,(),((HLEAASP_skipspaces).nonlocals));
 /* line 1985: */
 /* line 1986: */
 /* line 1987: */
VOEAASP = (&(QOEAASP_zz->Im)) ;
LOEAASP = (TOEAASP_ok&A_CALLPROC(DNEAASP_readlreal,(A_UNITE(UOEAASP,mode1,1,VOEAASP)),(A_UNITE(UOEAASP,mode1,1,VOEAASP),(DNEAASP_readlreal).nonlocals)));
} 
break;
case 8: /* REF SHORT COMPL */
WOEAASP_zz = (JOEAASP.data.mode8);
 /* line 1988: */
 /* line 1989: */
{ 
YOEAASP = (&(WOEAASP_zz->Re)) ;
ZOEAASP_ok = A_CALLPROC(DNEAASP_readlreal,(A_UNITE(XOEAASP,mode2,2,YOEAASP)),(A_UNITE(XOEAASP,mode2,2,YOEAASP),(DNEAASP_readlreal).nonlocals));
 /* line 1990: */
A_CALLPROC(HLEAASP_skipspaces,(),((HLEAASP_skipspaces).nonlocals));
 /* line 1991: */
 /* line 1992: */
if ( !WYAAASP_elem(VKEAASP_k, TZAAASP_plusitimes) )
{ 
 /* line 1993: */
A_CALLPROC(YKEAASP_mendchar,(TZAAASP_plusitimes, 'i'),(TZAAASP_plusitimes, 'i',(YKEAASP_mendchar).nonlocals));
} 
 /* line 1994: */
A_CALLPROC(HLEAASP_skipspaces,(),((HLEAASP_skipspaces).nonlocals));
 /* line 1995: */
 /* line 1996: */
 /* line 1997: */
 /* line 1998: */
BPEAASP = (&(WOEAASP_zz->Im)) ;
LOEAASP = (ZOEAASP_ok&A_CALLPROC(DNEAASP_readlreal,(A_UNITE(APEAASP,mode2,2,BPEAASP)),(A_UNITE(APEAASP,mode2,2,BPEAASP),(DNEAASP_readlreal).nonlocals)));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1999: */
CPEAASP = !LOEAASP;
if ( CPEAASP )
{ 
 /* line 2000: */
DPEAASP = (*(&((&(F->Io))->Valueerrormended))) ;
if ( !A_CALLPROC(DPEAASP,(F),(F,(DPEAASP).nonlocals)) )
{ 
 /* line 2001: */
 /* line 2002: */
 /* line 2003: */
 /* line 2005: */
JDCAASP_transputerror(F, DCCAASP_valueerrornotmended);
} 
} 
} 
break;
case 15: /* REF [] LONG INT */
EPEAASP_rii = (HOEAASP.data.mode15);
 /* line 2006: */
 /* line 2007: */
GPEAASP = EPEAASP_rii.dim[0].upb;
for ( FPEAASP_i = EPEAASP_rii.dim[0].lwb;
FPEAASP_i <= GPEAASP;
FPEAASP_i += 1 )
{ 
IPEAASP = (&A_R1INDEX(EPEAASP_rii,FPEAASP_i)) ;
NKEAASP_get(F, A_HARR(JPEAASP,A_UNITE(HPEAASP,mode14,14,IPEAASP),A68_288 ));
}
 /* line 2008: */
break;
case 17: /* REF [] INT */
KPEAASP_rii = (HOEAASP.data.mode17);
 /* line 2009: */
 /* line 2010: */
MPEAASP = KPEAASP_rii.dim[0].upb;
for ( LPEAASP_i = KPEAASP_rii.dim[0].lwb;
LPEAASP_i <= MPEAASP;
LPEAASP_i += 1 )
{ 
OPEAASP = (&A_R1INDEX(KPEAASP_rii,LPEAASP_i)) ;
NKEAASP_get(F, A_HARR(PPEAASP,A_UNITE(NPEAASP,mode16,16,OPEAASP),A68_288 ));
}
 /* line 2011: */
break;
case 19: /* REF [] SHORT INT */
QPEAASP_rii = (HOEAASP.data.mode19);
 /* line 2012: */
 /* line 2013: */
SPEAASP = QPEAASP_rii.dim[0].upb;
for ( RPEAASP_i = QPEAASP_rii.dim[0].lwb;
RPEAASP_i <= SPEAASP;
RPEAASP_i += 1 )
{ 
UPEAASP = (&A_R1INDEX(QPEAASP_rii,RPEAASP_i)) ;
NKEAASP_get(F, A_HARR(VPEAASP,A_UNITE(TPEAASP,mode18,18,UPEAASP),A68_288 ));
}
 /* line 2014: */
break;
case 21: /* REF [] SHORT SHORT INT */
WPEAASP_rii = (HOEAASP.data.mode21);
 /* line 2015: */
 /* line 2016: */
YPEAASP = WPEAASP_rii.dim[0].upb;
for ( XPEAASP_i = WPEAASP_rii.dim[0].lwb;
XPEAASP_i <= YPEAASP;
XPEAASP_i += 1 )
{ 
AQEAASP = (&A_R1INDEX(WPEAASP_rii,XPEAASP_i)) ;
NKEAASP_get(F, A_HARR(BQEAASP,A_UNITE(ZPEAASP,mode20,20,AQEAASP),A68_288 ));
}
 /* line 2017: */
break;
case 23: /* REF [] REAL */
CQEAASP_rri = (HOEAASP.data.mode23);
 /* line 2018: */
 /* line 2019: */
EQEAASP = CQEAASP_rri.dim[0].upb;
for ( DQEAASP_i = CQEAASP_rri.dim[0].lwb;
DQEAASP_i <= EQEAASP;
DQEAASP_i += 1 )
{ 
GQEAASP = (&A_R1INDEX(CQEAASP_rri,DQEAASP_i)) ;
NKEAASP_get(F, A_HARR(HQEAASP,A_UNITE(FQEAASP,mode22,22,GQEAASP),A68_288 ));
}
 /* line 2020: */
break;
case 25: /* REF [] SHORT REAL */
IQEAASP_rri = (HOEAASP.data.mode25);
 /* line 2021: */
 /* line 2022: */
KQEAASP = IQEAASP_rri.dim[0].upb;
for ( JQEAASP_i = IQEAASP_rri.dim[0].lwb;
JQEAASP_i <= KQEAASP;
JQEAASP_i += 1 )
{ 
MQEAASP = (&A_R1INDEX(IQEAASP_rri,JQEAASP_i)) ;
NKEAASP_get(F, A_HARR(NQEAASP,A_UNITE(LQEAASP,mode24,24,MQEAASP),A68_288 ));
}
 /* line 2023: */
break;
case 27: /* REF [] COMPL */
OQEAASP_rzz = (HOEAASP.data.mode27);
 /* line 2024: */
 /* line 2025: */
QQEAASP = OQEAASP_rzz.dim[0].upb;
for ( PQEAASP_i = OQEAASP_rzz.dim[0].lwb;
PQEAASP_i <= QQEAASP;
PQEAASP_i += 1 )
{ 
SQEAASP = (&A_R1INDEX(OQEAASP_rzz,PQEAASP_i)) ;
NKEAASP_get(F, A_HARR(TQEAASP,A_UNITE(RQEAASP,mode26,26,SQEAASP),A68_288 ));
}
 /* line 2026: */
break;
case 29: /* REF [] SHORT COMPL */
UQEAASP_rzz = (HOEAASP.data.mode29);
 /* line 2027: */
 /* line 2028: */
WQEAASP = UQEAASP_rzz.dim[0].upb;
for ( VQEAASP_i = UQEAASP_rzz.dim[0].lwb;
VQEAASP_i <= WQEAASP;
VQEAASP_i += 1 )
{ 
YQEAASP = (&A_R1INDEX(UQEAASP_rzz,VQEAASP_i)) ;
NKEAASP_get(F, A_HARR(ZQEAASP,A_UNITE(XQEAASP,mode28,28,YQEAASP),A68_288 ));
}
 /* line 2030: */
break;
case 4: /* REF BOOL */
AREAASP_bb = (HOEAASP.data.mode4);
 /* line 2031: */
 /* line 2032: */
{ 
A_CALLPROC(ELEAASP_skipinitialspaces,(),((ELEAASP_skipinitialspaces).nonlocals));
 /* line 2033: */
 /* line 2034: */
if ( !WYAAASP_elem(VKEAASP_k, RZAAASP_flipflop) )
{ 
 /* line 2035: */
A_CALLPROC(YKEAASP_mendchar,(RZAAASP_flipflop, RUAAASP_flop),(RZAAASP_flipflop, RUAAASP_flop,(YKEAASP_mendchar).nonlocals));
} 
 /* line 2036: */
 /* line 2037: */
 /* line 2038: */
(*AREAASP_bb) = (VKEAASP_k==QUAAASP_flip);
} 
break;
case 5: /* REF [] BOOL */
BREAASP_rbb = (HOEAASP.data.mode5);
 /* line 2039: */
 /* line 2040: */
DREAASP = BREAASP_rbb.dim[0].upb;
for ( CREAASP_i = BREAASP_rbb.dim[0].lwb;
CREAASP_i <= DREAASP;
CREAASP_i += 1 )
{ 
FREAASP = (&A_R1INDEX(BREAASP_rbb,CREAASP_i)) ;
NKEAASP_get(F, A_HARR(GREAASP,A_UNITE(EREAASP,mode4,4,FREAASP),A68_288 ));
}
 /* line 2042: */
break;
case 6: /* REF LONG BITS */
HREAASP_lb = (HOEAASP.data.mode6);
 /* line 2043: */
 /* line 2044: */
{ 
A_CLOSURE( JREAASP_generator, KREAASP_generator, LREAASP_generator );
A_CALLPROC(JREAASP_generator,(A68_TRUE, &PREAASP),(A68_TRUE, &PREAASP,(JREAASP_generator).nonlocals));
OREAASP_b = PREAASP;
 /* line 2046: */
 /* line 2047: */
RREAASP = UTAAASP_longbitswidth;
for ( QREAASP_i = 1;
QREAASP_i <= RREAASP;
QREAASP_i += 1 )
{ 
 /* line 2048: */
A_CALLPROC(ELEAASP_skipinitialspaces,(),((ELEAASP_skipinitialspaces).nonlocals));
 /* line 2049: */
 /* line 2050: */
if ( !WYAAASP_elem(VKEAASP_k, RZAAASP_flipflop) )
{ 
 /* line 2051: */
A_CALLPROC(YKEAASP_mendchar,(RZAAASP_flipflop, RUAAASP_flop),(RZAAASP_flipflop, RUAAASP_flop,(YKEAASP_mendchar).nonlocals));
} 
 /* line 2052: */
 /* line 2053: */
SREAASP = (&A_VINDEX(OREAASP_b,QREAASP_i)) ;
(*SREAASP) = (VKEAASP_k==QUAAASP_flip);
}
 /* line 2054: */
 /* line 2055: */
 /* line 2056: */
(*HREAASP_lb) = SXBAASP_longbitspack(A_VECARR(OREAASP_b,TREAASP));
} 
break;
case 8: /* REF BITS */
UREAASP_lb = (HOEAASP.data.mode8);
 /* line 2057: */
 /* line 2058: */
{ 
A_CLOSURE( WREAASP_generator, XREAASP_generator, YREAASP_generator );
A_CALLPROC(WREAASP_generator,(A68_TRUE, &CSEAASP),(A68_TRUE, &CSEAASP,(WREAASP_generator).nonlocals));
BSEAASP_b = CSEAASP;
 /* line 2060: */
 /* line 2061: */
ESEAASP = VTAAASP_bitswidth;
for ( DSEAASP_i = 1;
DSEAASP_i <= ESEAASP;
DSEAASP_i += 1 )
{ 
 /* line 2062: */
A_CALLPROC(ELEAASP_skipinitialspaces,(),((ELEAASP_skipinitialspaces).nonlocals));
 /* line 2063: */
 /* line 2064: */
if ( !WYAAASP_elem(VKEAASP_k, RZAAASP_flipflop) )
{ 
 /* line 2065: */
A_CALLPROC(YKEAASP_mendchar,(RZAAASP_flipflop, RUAAASP_flop),(RZAAASP_flipflop, RUAAASP_flop,(YKEAASP_mendchar).nonlocals));
} 
 /* line 2066: */
 /* line 2067: */
FSEAASP = (&A_VINDEX(BSEAASP_b,DSEAASP_i)) ;
(*FSEAASP) = (VKEAASP_k==QUAAASP_flip);
}
 /* line 2068: */
 /* line 2069: */
 /* line 2070: */
(*UREAASP_lb) = ZXBAASP_bitspack(A_VECARR(BSEAASP_b,GSEAASP));
} 
break;
case 10: /* REF SHORT BITS */
HSEAASP_lb = (HOEAASP.data.mode10);
 /* line 2071: */
 /* line 2072: */
{ 
A_CLOSURE( JSEAASP_generator, KSEAASP_generator, LSEAASP_generator );
A_CALLPROC(JSEAASP_generator,(A68_TRUE, &PSEAASP),(A68_TRUE, &PSEAASP,(JSEAASP_generator).nonlocals));
OSEAASP_b = PSEAASP;
 /* line 2074: */
 /* line 2075: */
RSEAASP = WTAAASP_shortbitswidth;
for ( QSEAASP_i = 1;
QSEAASP_i <= RSEAASP;
QSEAASP_i += 1 )
{ 
 /* line 2076: */
A_CALLPROC(ELEAASP_skipinitialspaces,(),((ELEAASP_skipinitialspaces).nonlocals));
 /* line 2077: */
 /* line 2078: */
if ( !WYAAASP_elem(VKEAASP_k, RZAAASP_flipflop) )
{ 
 /* line 2079: */
A_CALLPROC(YKEAASP_mendchar,(RZAAASP_flipflop, RUAAASP_flop),(RZAAASP_flipflop, RUAAASP_flop,(YKEAASP_mendchar).nonlocals));
} 
 /* line 2080: */
 /* line 2081: */
SSEAASP = (&A_VINDEX(OSEAASP_b,QSEAASP_i)) ;
(*SSEAASP) = (VKEAASP_k==QUAAASP_flip);
}
 /* line 2082: */
 /* line 2083: */
 /* line 2084: */
(*HSEAASP_lb) = GYBAASP_shortbitspack(A_VECARR(OSEAASP_b,TSEAASP));
} 
break;
case 12: /* REF SHORT SHORT BITS */
USEAASP_lb = (HOEAASP.data.mode12);
 /* line 2085: */
 /* line 2086: */
{ 
A_CLOSURE( WSEAASP_generator, XSEAASP_generator, YSEAASP_generator );
A_CALLPROC(WSEAASP_generator,(A68_TRUE, &CTEAASP),(A68_TRUE, &CTEAASP,(WSEAASP_generator).nonlocals));
BTEAASP_b = CTEAASP;
 /* line 2088: */
 /* line 2089: */
ETEAASP = XTAAASP_shortshortbitswidth;
for ( DTEAASP_i = 1;
DTEAASP_i <= ETEAASP;
DTEAASP_i += 1 )
{ 
 /* line 2090: */
A_CALLPROC(ELEAASP_skipinitialspaces,(),((ELEAASP_skipinitialspaces).nonlocals));
 /* line 2091: */
 /* line 2092: */
if ( !WYAAASP_elem(VKEAASP_k, RZAAASP_flipflop) )
{ 
 /* line 2093: */
A_CALLPROC(YKEAASP_mendchar,(RZAAASP_flipflop, RUAAASP_flop),(RZAAASP_flipflop, RUAAASP_flop,(YKEAASP_mendchar).nonlocals));
} 
 /* line 2094: */
 /* line 2095: */
FTEAASP = (&A_VINDEX(BTEAASP_b,DTEAASP_i)) ;
(*FTEAASP) = (VKEAASP_k==QUAAASP_flip);
}
 /* line 2096: */
 /* line 2097: */
 /* line 2099: */
(*USEAASP_lb) = NYBAASP_shortshortbitspack(A_VECARR(BTEAASP_b,GTEAASP));
} 
break;
case 7: /* REF [] LONG BITS */
HTEAASP_rlb = (HOEAASP.data.mode7);
 /* line 2100: */
 /* line 2101: */
JTEAASP = HTEAASP_rlb.dim[0].upb;
for ( ITEAASP_i = HTEAASP_rlb.dim[0].lwb;
ITEAASP_i <= JTEAASP;
ITEAASP_i += 1 )
{ 
LTEAASP = (&A_R1INDEX(HTEAASP_rlb,ITEAASP_i)) ;
NKEAASP_get(F, A_HARR(MTEAASP,A_UNITE(KTEAASP,mode6,6,LTEAASP),A68_288 ));
}
 /* line 2102: */
break;
case 9: /* REF [] BITS */
NTEAASP_rlb = (HOEAASP.data.mode9);
 /* line 2103: */
 /* line 2104: */
PTEAASP = NTEAASP_rlb.dim[0].upb;
for ( OTEAASP_i = NTEAASP_rlb.dim[0].lwb;
OTEAASP_i <= PTEAASP;
OTEAASP_i += 1 )
{ 
RTEAASP = (&A_R1INDEX(NTEAASP_rlb,OTEAASP_i)) ;
NKEAASP_get(F, A_HARR(STEAASP,A_UNITE(QTEAASP,mode8,8,RTEAASP),A68_288 ));
}
 /* line 2105: */
break;
case 11: /* REF [] SHORT BITS */
TTEAASP_rlb = (HOEAASP.data.mode11);
 /* line 2106: */
 /* line 2107: */
VTEAASP = TTEAASP_rlb.dim[0].upb;
for ( UTEAASP_i = TTEAASP_rlb.dim[0].lwb;
UTEAASP_i <= VTEAASP;
UTEAASP_i += 1 )
{ 
XTEAASP = (&A_R1INDEX(TTEAASP_rlb,UTEAASP_i)) ;
NKEAASP_get(F, A_HARR(YTEAASP,A_UNITE(WTEAASP,mode10,10,XTEAASP),A68_288 ));
}
 /* line 2108: */
break;
case 13: /* REF [] SHORT SHORT BITS */
ZTEAASP_rlb = (HOEAASP.data.mode13);
 /* line 2109: */
 /* line 2110: */
BUEAASP = ZTEAASP_rlb.dim[0].upb;
for ( AUEAASP_i = ZTEAASP_rlb.dim[0].lwb;
AUEAASP_i <= BUEAASP;
AUEAASP_i += 1 )
{ 
DUEAASP = (&A_R1INDEX(ZTEAASP_rlb,AUEAASP_i)) ;
NKEAASP_get(F, A_HARR(EUEAASP,A_UNITE(CUEAASP,mode12,12,DUEAASP),A68_288 ));
}
 /* line 2112: */
break;
case 1: /* REF CHAR */
FUEAASP_cc = (HOEAASP.data.mode1);
 /* line 2113: */
(*FUEAASP_cc) = ITDAASP_getchar(F);
break;
case 2: /* REF [] CHAR */
GUEAASP_ss = (HOEAASP.data.mode2);
 /* line 2114: */
 /* line 2115: */
IUEAASP = GUEAASP_ss.dim[0].upb;
for ( HUEAASP_i = GUEAASP_ss.dim[0].lwb;
HUEAASP_i <= IUEAASP;
HUEAASP_i += 1 )
{ 
JUEAASP = (&A_R1INDEX(GUEAASP_ss,HUEAASP_i)) ;
(*JUEAASP) = ITDAASP_getchar(F);
}
 /* line 2116: */
break;
case 3: /* REF FLEX [] CHAR */
KUEAASP_ss = (HOEAASP.data.mode3);
 /* line 2117: */
 /* line 2118: */
{ 
LUEAASP_index = 0;
 /* line 2119: */
A_CLOSURE( NUEAASP_generator, OUEAASP_generator, PUEAASP_generator );
A_CALLPROC(NUEAASP_generator,(A68_TRUE, &TUEAASP),(A68_TRUE, &TUEAASP,(NUEAASP_generator).nonlocals));
SUEAASP_s = TUEAASP;
 /* line 2120: */
for ( ;; )
{ 
 /* line 2121: */
VKEAASP_k = HSDAASP_getch(F);
 /* line 2122: */
 /* line 2123: */
UUEAASP = WYAAASP_elem(VKEAASP_k, (*(&((&(F->Io))->Stringterm))));
if ( UUEAASP )
{ 
ATDAASP_backch(F, VKEAASP_k);
 /* line 2124: */
VUEAASP = A68_FALSE;
} 
else
{ 
 /* line 2125: */
 /* line 2126: */
VUEAASP = A68_TRUE;
} 
 /* line 2127: */
WUEAASP = VUEAASP;
if ( !WUEAASP ) break;
 /* line 2128: */
if ( (LUEAASP_index==SUEAASP_s.dim[0].upb) )
{ 
A_CLOSURE( YUEAASP_generator, ZUEAASP_generator, AVEAASP_generator );
(( AVEAASP_generator * ) ( YUEAASP_generator.nonlocals )) -> SUEAASP_s = (&SUEAASP_s);
A_CALLPROC(YUEAASP_generator,(A68_FALSE, &DVEAASP),(A68_FALSE, &DVEAASP,(YUEAASP_generator).nonlocals));
EVEAASP_t = DVEAASP;
GVEAASP = A_R1TRIM(FVEAASP,(EVEAASP_t),A_RTSCRIPT(&(FVEAASP.dim[0]),&((EVEAASP_t).dim[0]),(EVEAASP_t).dim[0].lwb,SUEAASP_s.dim[0].upb,1)) ;
A_R1ASSIGN2(SUEAASP_s,GVEAASP,A68_CHAR );
 /* line 2129: */
SUEAASP_s = EVEAASP_t;
} 
 /* line 2130: */
 /* line 2131: */
HVEAASP = LUEAASP_index+=1 ;
IVEAASP = (&A_R1INDEX(SUEAASP_s,HVEAASP)) ;
(*IVEAASP) = VKEAASP_k;
}
 /* line 2132: */
 /* line 2133: */
 /* line 2134: */
KVEAASP = A_R1TRIM(JVEAASP,(SUEAASP_s),A_RTSCRIPT(&(JVEAASP.dim[0]),&((SUEAASP_s).dim[0]),(SUEAASP_s).dim[0].lwb,LUEAASP_index,1)) ;
(*KUEAASP_ss) = A_R1COPY(KVEAASP,LVEAASP,A68_CHAR );
} 
break;
case 30: /* STRAIGHT MODE63 */
MVEAASP_st = (HOEAASP.data.mode30);
 /* line 2135: */
OVEAASP = MVEAASP_st.upb;
for ( NVEAASP_i =  1;
NVEAASP_i <= OVEAASP;
NVEAASP_i += 1 )
{ 
SVEAASP = A_STRINDEX_RTN(MVEAASP_st,NVEAASP_i,PVEAASP,QVEAASP) ;
NKEAASP_get(F, A_HARR(TVEAASP,A_UUNITE(RVEAASP,0,SVEAASP),A68_288 ));
}
 /* line 2136: */
 /* line 2137: */
 /* line 2138: */
 /* line 2139: */
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
}
 /* line 2140: */
} 
A_PROC_EXIT(get);
return;
} 
#undef NL

A68_VOID  WVEAASP_put(A68_56 * F, A68_302  X)
{ 
A68_BOOL  XVEAASP;  /* optbool result */
A68_BOOL * YVEAASP;  /* YIELD */
A68_INT  ZVEAASP_i;
A68_INT  AWEAASP;  /* to part of loop */
A68_301  BWEAASP;  /* united object - for case conformity */
A68_50  CWEAASP_pf;
A68_78  DWEAASP_so;
A68_78  EWEAASP;  /* united object - for case conformity */
A68_304  FWEAASP_nc;
A68_304  GWEAASP;  /* united object - for case conformity */
A68_193  HWEAASP_k;
A68_31  IWEAASP;  /* OPERATORS - unite union */
A68_RC  JWEAASP;  /* avoid structure result */
A68_301  KWEAASP;  /* OPERATORS - mode -> union mode */
A68_302  LWEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_195  MWEAASP_r;
A68_INT  NWEAASP_rw;
A68_INT  OWEAASP_ew;
A68_31  PWEAASP;  /* OPERATORS - unite union */
A68_RC  QWEAASP;  /* avoid structure result */
A68_301  RWEAASP;  /* OPERATORS - mode -> union mode */
A68_302  SWEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_COMPL  TWEAASP_z;
A68_195  UWEAASP;  /* OPERATORS - mode -> union mode */
A68_REAL  VWEAASP;  /* YIELD */
A68_INT  WWEAASP_rw;
A68_195  XWEAASP;  /* OPERATORS - mode -> union mode */
A68_REAL  YWEAASP;  /* YIELD */
A68_INT  ZWEAASP_ew;
A68_306  AXEAASP;  /* collateral clause result */
A68_31  BXEAASP;  /* OPERATORS - mode -> union mode */
A68_REAL  CXEAASP;  /* YIELD */
A68_RC  DXEAASP;  /* avoid structure result */
A68_301  EXEAASP;  /* OPERATORS - mode -> union mode */
A68_301  HXEAASP;  /* OPERATORS - mode -> union mode */
A68_RC  IXEAASP;  /* YIELD */
A68_31  JXEAASP;  /* OPERATORS - mode -> union mode */
A68_REAL  KXEAASP;  /* YIELD */
A68_RC  LXEAASP;  /* avoid structure result */
A68_301  MXEAASP;  /* OPERATORS - mode -> union mode */
A68_302  NXEAASP;  /* OPERATORS - istruct to row */
A68_SCOMPL  OXEAASP_z;
A68_195  PXEAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL  QXEAASP;  /* YIELD */
A68_INT  RXEAASP_rw;
A68_195  SXEAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL  TXEAASP;  /* YIELD */
A68_INT  UXEAASP_ew;
A68_306  VXEAASP;  /* collateral clause result */
A68_31  WXEAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL  XXEAASP;  /* YIELD */
A68_RC  YXEAASP;  /* avoid structure result */
A68_301  ZXEAASP;  /* OPERATORS - mode -> union mode */
A68_301  CYEAASP;  /* OPERATORS - mode -> union mode */
A68_RC  DYEAASP;  /* YIELD */
A68_31  EYEAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL  FYEAASP;  /* YIELD */
A68_RC  GYEAASP;  /* avoid structure result */
A68_301  HYEAASP;  /* OPERATORS - mode -> union mode */
A68_302  IYEAASP;  /* OPERATORS - istruct to row */
A68_69  JYEAASP_nn;
A68_INT  KYEAASP_i;
A68_INT  LYEAASP;  /* to part of loop */
A68_301  MYEAASP;  /* OPERATORS - mode -> union mode */
A68_LINT  NYEAASP;  /* YIELD */
A68_302  OYEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_70  PYEAASP_nn;
A68_INT  QYEAASP_i;
A68_INT  RYEAASP;  /* to part of loop */
A68_301  SYEAASP;  /* OPERATORS - mode -> union mode */
A68_INT  TYEAASP;  /* YIELD */
A68_302  UYEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_71  VYEAASP_nn;
A68_INT  WYEAASP_i;
A68_INT  XYEAASP;  /* to part of loop */
A68_301  YYEAASP;  /* OPERATORS - mode -> union mode */
A68_SINT  ZYEAASP;  /* YIELD */
A68_302  AZEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_72  BZEAASP_nn;
A68_INT  CZEAASP_i;
A68_INT  DZEAASP;  /* to part of loop */
A68_301  EZEAASP;  /* OPERATORS - mode -> union mode */
A68_SSINT  FZEAASP;  /* YIELD */
A68_302  GZEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_73  HZEAASP_nn;
A68_INT  IZEAASP_i;
A68_INT  JZEAASP;  /* to part of loop */
A68_301  KZEAASP;  /* OPERATORS - mode -> union mode */
A68_REAL  LZEAASP;  /* YIELD */
A68_302  MZEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_74  NZEAASP_nn;
A68_INT  OZEAASP_i;
A68_INT  PZEAASP;  /* to part of loop */
A68_301  QZEAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL  RZEAASP;  /* YIELD */
A68_302  SZEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  TZEAASP_nn;
A68_INT  UZEAASP_i;
A68_INT  VZEAASP;  /* to part of loop */
A68_301  WZEAASP;  /* OPERATORS - mode -> union mode */
A68_COMPL  XZEAASP;  /* YIELD */
A68_302  YZEAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_76  ZZEAASP_nn;
A68_INT  AAFAASP_i;
A68_INT  BAFAASP;  /* to part of loop */
A68_301  CAFAASP;  /* OPERATORS - mode -> union mode */
A68_SCOMPL  DAFAASP;  /* YIELD */
A68_302  EAFAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  FAFAASP_b;
A68_CHAR  GAFAASP;  /* clause result */
A68_64  HAFAASP_rb;
A68_INT  IAFAASP_i;
A68_INT  JAFAASP;  /* to part of loop */
A68_CHAR  KAFAASP;  /* clause result */
A68_LBITS  LAFAASP_lt;
A68_INT  MAFAASP_k;
A68_INT  NAFAASP;  /* to part of loop */
A68_CHAR  OAFAASP;  /* clause result */
A68_BITS  PAFAASP_t;
A68_INT  QAFAASP_k;
A68_INT  RAFAASP;  /* to part of loop */
A68_CHAR  SAFAASP;  /* clause result */
A68_SBITS  TAFAASP_st;
A68_INT  UAFAASP_k;
A68_INT  VAFAASP;  /* to part of loop */
A68_CHAR  WAFAASP;  /* clause result */
A68_SSBITS  XAFAASP_sst;
A68_INT  YAFAASP_k;
A68_INT  ZAFAASP;  /* to part of loop */
A68_CHAR  ABFAASP;  /* clause result */
A68_65  BBFAASP_rlh;
A68_INT  CBFAASP_i;
A68_INT  DBFAASP;  /* to part of loop */
A68_INT  EBFAASP_k;
A68_INT  FBFAASP;  /* to part of loop */
A68_CHAR  GBFAASP;  /* clause result */
A68_66  HBFAASP_rh;
A68_INT  IBFAASP_i;
A68_INT  JBFAASP;  /* to part of loop */
A68_INT  KBFAASP_k;
A68_INT  LBFAASP;  /* to part of loop */
A68_CHAR  MBFAASP;  /* clause result */
A68_67  NBFAASP_rsh;
A68_INT  OBFAASP_i;
A68_INT  PBFAASP;  /* to part of loop */
A68_INT  QBFAASP_k;
A68_INT  RBFAASP;  /* to part of loop */
A68_CHAR  SBFAASP;  /* clause result */
A68_68  TBFAASP_rssh;
A68_INT  UBFAASP_i;
A68_INT  VBFAASP;  /* to part of loop */
A68_INT  WBFAASP_k;
A68_INT  XBFAASP;  /* to part of loop */
A68_CHAR  YBFAASP;  /* clause result */
A68_CHAR  ZBFAASP_c;
A68_RC  ACFAASP_ss;
A68_INT  BCFAASP_i;
A68_INT  CCFAASP;  /* to part of loop */
A68_79  DCFAASP_st;
A68_INT  ECFAASP_i;
A68_INT  FCFAASP;  /* to part of loop */
A68_79  GCFAASP;  /* OPERATORS - straight index */
A68_78  HCFAASP;  /* OPERATORS - straight index result */
A68_301  ICFAASP;  /* OPERATORS - unite union */
A68_78  JCFAASP;  /* YIELD */
A68_302  KCFAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(put);
 /* line 2143: */
 /* line 2144: */
 /* line 2146: */
XVEAASP = (*(&((&(F->State))->Opened)));
if ( XVEAASP )
{XVEAASP = !(*(&((&(F->State))->Ended)));
}
 /* line 2148: */
if ( XVEAASP )
{XVEAASP = (*(&((&((&(F->Book))->Type))->Putpossible)));
}
 /* line 2149: */
if ( XVEAASP )
{ 
SGCAASP_setwritemood(F);
YVEAASP = (&((&(F->State))->Charmood)) ;
(*YVEAASP) = A68_TRUE;
 /* line 2151: */
 /* line 2152: */
AWEAASP = X.dim[0].upb;
for ( ZVEAASP_i = X.dim[0].lwb;
ZVEAASP_i <= AWEAASP;
ZVEAASP_i += 1 )
{ 
 /* line 2153: */
 /* line 2154: */
 /* line 2155: */
BWEAASP = A_R1INDEX(X,ZVEAASP_i) ;
switch ( BWEAASP.mode )
{ 
case 30: /* PROC(REF MODE56) VOID */
CWEAASP_pf = (BWEAASP.data.mode30);
 /* line 2156: */
A_CALLPROC(CWEAASP_pf,(F),(F,(CWEAASP_pf).nonlocals));
break;
case 1: /* CHAR */
case 2: /* [] CHAR */
case 3: /* BOOL */
case 4: /* [] BOOL */
case 5: /* LONG BITS */
case 6: /* [] LONG BITS */
case 7: /* BITS */
case 8: /* [] BITS */
case 9: /* SHORT BITS */
case 10: /* [] SHORT BITS */
case 11: /* SHORT SHORT BITS */
case 12: /* [] SHORT SHORT BITS */
case 13: /* LONG INT */
case 14: /* [] LONG INT */
case 15: /* INT */
case 16: /* [] INT */
case 17: /* SHORT INT */
case 18: /* [] SHORT INT */
case 19: /* SHORT SHORT INT */
case 20: /* [] SHORT SHORT INT */
case 21: /* REAL */
case 22: /* [] REAL */
case 23: /* SHORT REAL */
case 24: /* [] SHORT REAL */
case 25: /* COMPL */
case 26: /* [] COMPL */
case 27: /* SHORT COMPL */
case 28: /* [] SHORT COMPL */
case 29: /* STRAIGHT MODE78 */
A_UNCPY(DWEAASP_so,BWEAASP);
 /* line 2157: */
 /* line 2158: */
{ 
 /* line 2159: */
 /* line 2160: */
EWEAASP = DWEAASP_so ;
switch ( EWEAASP.mode )
{ 
case 13: /* LONG INT */
case 15: /* INT */
case 17: /* SHORT INT */
case 19: /* SHORT SHORT INT */
case 21: /* REAL */
case 23: /* SHORT REAL */
case 25: /* COMPL */
case 27: /* SHORT COMPL */
A_UNCPY(FWEAASP_nc,EWEAASP);
FWEAASP_nc.mode = "\000\0\0\0\0\0\0\0\0\0\0\0\0\001\0\002\0\003\0\004\0\005\0\006\0\007\0\010\0\000"[EWEAASP.mode];
 /* line 2161: */
 /* line 2162: */
{ 
if ( !(*(&((&(F->State))->Bol))) )
{ 
BSDAASP_putch(F, NUAAASP_blank);
} 
 /* line 2164: */
 /* line 2165: */
 /* line 2166: */
GWEAASP = FWEAASP_nc ;
switch ( GWEAASP.mode )
{ 
case 1: /* LONG INT */
case 2: /* INT */
case 3: /* SHORT INT */
case 4: /* SHORT SHORT INT */
A_UNCPY(HWEAASP_k,GWEAASP);
 /* line 2167: */
 /* line 2168: */
XPBAASP_whole( A_UUNITE(IWEAASP,0,HWEAASP_k), (1+KCBAASP_intwidth(HWEAASP_k)), &JWEAASP );
WVEAASP_put(F, A_HARR(LWEAASP,A_UNITE(KWEAASP,mode2,2,JWEAASP),A68_301 ));
break;
case 5: /* REAL */
case 6: /* SHORT REAL */
A_UNCPY(MWEAASP_r,GWEAASP);
MWEAASP_r.mode -= 4;
 /* line 2169: */
{ 
NWEAASP_rw = OCBAASP_realwidth(MWEAASP_r);
OWEAASP_ew = WCBAASP_expwidth(MWEAASP_r);
 /* line 2170: */
 /* line 2171: */
ARBAASP_float( A_UUNITE(PWEAASP,4,MWEAASP_r), ((NWEAASP_rw+OWEAASP_ew)+3), NWEAASP_rw, OWEAASP_ew, &QWEAASP );
WVEAASP_put(F, A_HARR(SWEAASP,A_UNITE(RWEAASP,mode2,2,QWEAASP),A68_301 ));
} 
break;
case 7: /* COMPL */
TWEAASP_z = (GWEAASP.data.mode7);
 /* line 2172: */
{ 
VWEAASP = TWEAASP_z.Re ;
WWEAASP_rw = OCBAASP_realwidth(A_UNITE(UWEAASP,mode1,1,VWEAASP));
YWEAASP = TWEAASP_z.Re ;
ZWEAASP_ew = WCBAASP_expwidth(A_UNITE(XWEAASP,mode1,1,YWEAASP));
 /* line 2173: */
CXEAASP = TWEAASP_z.Re ;
ARBAASP_float( A_UNITE(BXEAASP,mode5,5,CXEAASP), ((WWEAASP_rw+ZWEAASP_ew)+3), WWEAASP_rw, ZWEAASP_ew, &DXEAASP );
AXEAASP.data[0] = A_UNITE(EXEAASP,mode2,2,DXEAASP);
 /* line 2174: */
IXEAASP = GXEAASP ;
AXEAASP.data[1] = A_UNITE(HXEAASP,mode2,2,IXEAASP);
KXEAASP = TWEAASP_z.Im ;
ARBAASP_float( A_UNITE(JXEAASP,mode5,5,KXEAASP), ((WWEAASP_rw+ZWEAASP_ew)+3), WWEAASP_rw, ZWEAASP_ew, &LXEAASP );
AXEAASP.data[2] = A_UNITE(MXEAASP,mode2,2,LXEAASP);
 /* line 2175: */
WVEAASP_put(F, A_HIS1ARR(NXEAASP,AXEAASP,A68_301 ,3));
} 
break;
case 8: /* SHORT COMPL */
OXEAASP_z = (GWEAASP.data.mode8);
 /* line 2176: */
{ 
QXEAASP = OXEAASP_z.Re ;
RXEAASP_rw = OCBAASP_realwidth(A_UNITE(PXEAASP,mode2,2,QXEAASP));
TXEAASP = OXEAASP_z.Re ;
UXEAASP_ew = WCBAASP_expwidth(A_UNITE(SXEAASP,mode2,2,TXEAASP));
 /* line 2177: */
XXEAASP = OXEAASP_z.Re ;
ARBAASP_float( A_UNITE(WXEAASP,mode6,6,XXEAASP), ((RXEAASP_rw+UXEAASP_ew)+3), RXEAASP_rw, UXEAASP_ew, &YXEAASP );
VXEAASP.data[0] = A_UNITE(ZXEAASP,mode2,2,YXEAASP);
 /* line 2178: */
DYEAASP = BYEAASP ;
VXEAASP.data[1] = A_UNITE(CYEAASP,mode2,2,DYEAASP);
FYEAASP = OXEAASP_z.Im ;
ARBAASP_float( A_UNITE(EYEAASP,mode6,6,FYEAASP), ((RXEAASP_rw+UXEAASP_ew)+3), RXEAASP_rw, UXEAASP_ew, &GYEAASP );
VXEAASP.data[2] = A_UNITE(HYEAASP,mode2,2,GYEAASP);
 /* line 2179: */
 /* line 2180: */
 /* line 2182: */
WVEAASP_put(F, A_HIS1ARR(IYEAASP,VXEAASP,A68_301 ,3));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 14: /* [] LONG INT */
JYEAASP_nn = (EWEAASP.data.mode14);
 /* line 2183: */
LYEAASP = JYEAASP_nn.dim[0].upb;
for ( KYEAASP_i = JYEAASP_nn.dim[0].lwb;
KYEAASP_i <= LYEAASP;
KYEAASP_i += 1 )
{ 
NYEAASP = A_R1INDEX(JYEAASP_nn,KYEAASP_i) ;
WVEAASP_put(F, A_HARR(OYEAASP,A_UNITE(MYEAASP,mode13,13,NYEAASP),A68_301 ));
}
 /* line 2184: */
break;
case 16: /* [] INT */
PYEAASP_nn = (EWEAASP.data.mode16);
 /* line 2185: */
RYEAASP = PYEAASP_nn.dim[0].upb;
for ( QYEAASP_i = PYEAASP_nn.dim[0].lwb;
QYEAASP_i <= RYEAASP;
QYEAASP_i += 1 )
{ 
TYEAASP = A_R1INDEX(PYEAASP_nn,QYEAASP_i) ;
WVEAASP_put(F, A_HARR(UYEAASP,A_UNITE(SYEAASP,mode15,15,TYEAASP),A68_301 ));
}
 /* line 2186: */
break;
case 18: /* [] SHORT INT */
VYEAASP_nn = (EWEAASP.data.mode18);
 /* line 2187: */
XYEAASP = VYEAASP_nn.dim[0].upb;
for ( WYEAASP_i = VYEAASP_nn.dim[0].lwb;
WYEAASP_i <= XYEAASP;
WYEAASP_i += 1 )
{ 
ZYEAASP = A_R1INDEX(VYEAASP_nn,WYEAASP_i) ;
WVEAASP_put(F, A_HARR(AZEAASP,A_UNITE(YYEAASP,mode17,17,ZYEAASP),A68_301 ));
}
 /* line 2188: */
break;
case 20: /* [] SHORT SHORT INT */
BZEAASP_nn = (EWEAASP.data.mode20);
 /* line 2189: */
DZEAASP = BZEAASP_nn.dim[0].upb;
for ( CZEAASP_i = BZEAASP_nn.dim[0].lwb;
CZEAASP_i <= DZEAASP;
CZEAASP_i += 1 )
{ 
FZEAASP = A_R1INDEX(BZEAASP_nn,CZEAASP_i) ;
WVEAASP_put(F, A_HARR(GZEAASP,A_UNITE(EZEAASP,mode19,19,FZEAASP),A68_301 ));
}
 /* line 2190: */
break;
case 22: /* [] REAL */
HZEAASP_nn = (EWEAASP.data.mode22);
 /* line 2191: */
JZEAASP = HZEAASP_nn.dim[0].upb;
for ( IZEAASP_i = HZEAASP_nn.dim[0].lwb;
IZEAASP_i <= JZEAASP;
IZEAASP_i += 1 )
{ 
LZEAASP = A_R1INDEX(HZEAASP_nn,IZEAASP_i) ;
WVEAASP_put(F, A_HARR(MZEAASP,A_UNITE(KZEAASP,mode21,21,LZEAASP),A68_301 ));
}
 /* line 2192: */
break;
case 24: /* [] SHORT REAL */
NZEAASP_nn = (EWEAASP.data.mode24);
 /* line 2193: */
PZEAASP = NZEAASP_nn.dim[0].upb;
for ( OZEAASP_i = NZEAASP_nn.dim[0].lwb;
OZEAASP_i <= PZEAASP;
OZEAASP_i += 1 )
{ 
RZEAASP = A_R1INDEX(NZEAASP_nn,OZEAASP_i) ;
WVEAASP_put(F, A_HARR(SZEAASP,A_UNITE(QZEAASP,mode23,23,RZEAASP),A68_301 ));
}
 /* line 2194: */
break;
case 26: /* [] COMPL */
TZEAASP_nn = (EWEAASP.data.mode26);
 /* line 2195: */
VZEAASP = TZEAASP_nn.dim[0].upb;
for ( UZEAASP_i = TZEAASP_nn.dim[0].lwb;
UZEAASP_i <= VZEAASP;
UZEAASP_i += 1 )
{ 
XZEAASP = A_R1INDEX(TZEAASP_nn,UZEAASP_i) ;
WVEAASP_put(F, A_HARR(YZEAASP,A_UNITE(WZEAASP,mode25,25,XZEAASP),A68_301 ));
}
 /* line 2196: */
break;
case 28: /* [] SHORT COMPL */
ZZEAASP_nn = (EWEAASP.data.mode28);
 /* line 2197: */
BAFAASP = ZZEAASP_nn.dim[0].upb;
for ( AAFAASP_i = ZZEAASP_nn.dim[0].lwb;
AAFAASP_i <= BAFAASP;
AAFAASP_i += 1 )
{ 
DAFAASP = A_R1INDEX(ZZEAASP_nn,AAFAASP_i) ;
WVEAASP_put(F, A_HARR(EAFAASP,A_UNITE(CAFAASP,mode27,27,DAFAASP),A68_301 ));
}
 /* line 2199: */
break;
case 3: /* BOOL */
FAFAASP_b = (EWEAASP.data.mode3);
if ( FAFAASP_b )
{ 
GAFAASP = QUAAASP_flip;
} 
else
{ 
GAFAASP = RUAAASP_flop;
} 
 /* line 2200: */
BSDAASP_putch(F, GAFAASP);
break;
case 4: /* [] BOOL */
HAFAASP_rb = (EWEAASP.data.mode4);
 /* line 2201: */
JAFAASP = HAFAASP_rb.dim[0].upb;
for ( IAFAASP_i = HAFAASP_rb.dim[0].lwb;
IAFAASP_i <= JAFAASP;
IAFAASP_i += 1 )
{ 
if ( A_R1INDEX(HAFAASP_rb,IAFAASP_i) )
{ 
KAFAASP = QUAAASP_flip;
} 
else
{ 
KAFAASP = RUAAASP_flop;
} 
BSDAASP_putch(F, KAFAASP);
}
 /* line 2203: */
break;
case 5: /* LONG BITS */
LAFAASP_lt = (EWEAASP.data.mode5);
 /* line 2204: */
 /* line 2205: */
NAFAASP = UTAAASP_longbitswidth;
for ( MAFAASP_k = 1;
MAFAASP_k <= NAFAASP;
MAFAASP_k += 1 )
{ 
if ( ERAAASP_elem(MAFAASP_k, LAFAASP_lt) )
{ 
OAFAASP = QUAAASP_flip;
} 
else
{ 
OAFAASP = RUAAASP_flop;
} 
BSDAASP_putch(F, OAFAASP);
}
 /* line 2206: */
break;
case 7: /* BITS */
PAFAASP_t = (EWEAASP.data.mode7);
 /* line 2207: */
 /* line 2208: */
RAFAASP = VTAAASP_bitswidth;
for ( QAFAASP_k = 1;
QAFAASP_k <= RAFAASP;
QAFAASP_k += 1 )
{ 
if ( A_ELEM(QAFAASP_k,PAFAASP_t,(A68_BITS ),A_SZ_BITS) )
{ 
SAFAASP = QUAAASP_flip;
} 
else
{ 
SAFAASP = RUAAASP_flop;
} 
BSDAASP_putch(F, SAFAASP);
}
 /* line 2209: */
break;
case 9: /* SHORT BITS */
TAFAASP_st = (EWEAASP.data.mode9);
 /* line 2210: */
 /* line 2211: */
VAFAASP = WTAAASP_shortbitswidth;
for ( UAFAASP_k = 1;
UAFAASP_k <= VAFAASP;
UAFAASP_k += 1 )
{ 
if ( SRAAASP_elem(UAFAASP_k, TAFAASP_st) )
{ 
WAFAASP = QUAAASP_flip;
} 
else
{ 
WAFAASP = RUAAASP_flop;
} 
BSDAASP_putch(F, WAFAASP);
}
 /* line 2212: */
break;
case 11: /* SHORT SHORT BITS */
XAFAASP_sst = (EWEAASP.data.mode11);
 /* line 2213: */
 /* line 2214: */
ZAFAASP = XTAAASP_shortshortbitswidth;
for ( YAFAASP_k = 1;
YAFAASP_k <= ZAFAASP;
YAFAASP_k += 1 )
{ 
if ( YRAAASP_elem(YAFAASP_k, XAFAASP_sst) )
{ 
ABFAASP = QUAAASP_flip;
} 
else
{ 
ABFAASP = RUAAASP_flop;
} 
BSDAASP_putch(F, ABFAASP);
}
 /* line 2216: */
break;
case 6: /* [] LONG BITS */
BBFAASP_rlh = (EWEAASP.data.mode6);
 /* line 2217: */
 /* line 2218: */
DBFAASP = BBFAASP_rlh.dim[0].upb;
for ( CBFAASP_i = BBFAASP_rlh.dim[0].lwb;
CBFAASP_i <= DBFAASP;
CBFAASP_i += 1 )
{ 
 /* line 2219: */
 /* line 2220: */
FBFAASP = UTAAASP_longbitswidth;
for ( EBFAASP_k = 1;
EBFAASP_k <= FBFAASP;
EBFAASP_k += 1 )
{ 
if ( ERAAASP_elem(EBFAASP_k, A_R1INDEX(BBFAASP_rlh,EBFAASP_k)) )
{ 
GBFAASP = QUAAASP_flip;
} 
else
{ 
GBFAASP = RUAAASP_flop;
} 
BSDAASP_putch(F, GBFAASP);
}
 /* line 2221: */
}
 /* line 2222: */
break;
case 8: /* [] BITS */
HBFAASP_rh = (EWEAASP.data.mode8);
 /* line 2223: */
 /* line 2224: */
JBFAASP = HBFAASP_rh.dim[0].upb;
for ( IBFAASP_i = HBFAASP_rh.dim[0].lwb;
IBFAASP_i <= JBFAASP;
IBFAASP_i += 1 )
{ 
 /* line 2225: */
 /* line 2226: */
LBFAASP = VTAAASP_bitswidth;
for ( KBFAASP_k = 1;
KBFAASP_k <= LBFAASP;
KBFAASP_k += 1 )
{ 
if ( A_ELEM(KBFAASP_k,A_R1INDEX(HBFAASP_rh,KBFAASP_k),(A68_BITS ),A_SZ_BITS) )
{ 
MBFAASP = QUAAASP_flip;
} 
else
{ 
MBFAASP = RUAAASP_flop;
} 
BSDAASP_putch(F, MBFAASP);
}
 /* line 2227: */
}
 /* line 2228: */
break;
case 10: /* [] SHORT BITS */
NBFAASP_rsh = (EWEAASP.data.mode10);
 /* line 2229: */
 /* line 2230: */
PBFAASP = NBFAASP_rsh.dim[0].upb;
for ( OBFAASP_i = NBFAASP_rsh.dim[0].lwb;
OBFAASP_i <= PBFAASP;
OBFAASP_i += 1 )
{ 
 /* line 2231: */
 /* line 2232: */
RBFAASP = WTAAASP_shortbitswidth;
for ( QBFAASP_k = 1;
QBFAASP_k <= RBFAASP;
QBFAASP_k += 1 )
{ 
if ( SRAAASP_elem(QBFAASP_k, A_R1INDEX(NBFAASP_rsh,QBFAASP_k)) )
{ 
SBFAASP = QUAAASP_flip;
} 
else
{ 
SBFAASP = RUAAASP_flop;
} 
BSDAASP_putch(F, SBFAASP);
}
 /* line 2233: */
}
 /* line 2234: */
break;
case 12: /* [] SHORT SHORT BITS */
TBFAASP_rssh = (EWEAASP.data.mode12);
 /* line 2235: */
 /* line 2236: */
VBFAASP = TBFAASP_rssh.dim[0].upb;
for ( UBFAASP_i = TBFAASP_rssh.dim[0].lwb;
UBFAASP_i <= VBFAASP;
UBFAASP_i += 1 )
{ 
 /* line 2237: */
 /* line 2238: */
XBFAASP = XTAAASP_shortshortbitswidth;
for ( WBFAASP_k = 1;
WBFAASP_k <= XBFAASP;
WBFAASP_k += 1 )
{ 
if ( YRAAASP_elem(WBFAASP_k, A_R1INDEX(TBFAASP_rssh,WBFAASP_k)) )
{ 
YBFAASP = QUAAASP_flip;
} 
else
{ 
YBFAASP = RUAAASP_flop;
} 
BSDAASP_putch(F, YBFAASP);
}
 /* line 2239: */
}
 /* line 2241: */
break;
case 1: /* CHAR */
ZBFAASP_c = (EWEAASP.data.mode1);
 /* line 2242: */
BSDAASP_putch(F, ZBFAASP_c);
break;
case 2: /* [] CHAR */
ACFAASP_ss = (EWEAASP.data.mode2);
 /* line 2243: */
CCFAASP = ACFAASP_ss.dim[0].upb;
for ( BCFAASP_i = ACFAASP_ss.dim[0].lwb;
BCFAASP_i <= CCFAASP;
BCFAASP_i += 1 )
{ 
BSDAASP_putch(F, A_R1INDEX(ACFAASP_ss,BCFAASP_i));
}
 /* line 2245: */
break;
case 29: /* STRAIGHT MODE78 */
DCFAASP_st = (EWEAASP.data.mode29);
 /* line 2246: */
FCFAASP = DCFAASP_st.upb;
for ( ECFAASP_i =  1;
ECFAASP_i <= FCFAASP;
ECFAASP_i += 1 )
{ 
JCFAASP = A_STRINDEX_RTN(DCFAASP_st,ECFAASP_i,GCFAASP,HCFAASP) ;
WVEAASP_put(F, A_HARR(KCFAASP,A_UUNITE(ICFAASP,0,JCFAASP),A68_301 ));
}
 /* line 2247: */
 /* line 2248: */
 /* line 2249: */
 /* line 2250: */
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
}
 /* line 2252: */
if ( (*(&((&((&(F->State))->Buffer))->Flushafterput))) )
{ 
 /* line 2253: */
URDAASP_flushbuffer(F);
} 
} 
A_PROC_EXIT(put);
return;
} 
#undef NL

A68_VOID  MCFAASP_read(A68_289  X)
{ 
A_PROC_ENTRY(read);
NKEAASP_get((&ZPCAASP_standin), X);
A_PROC_EXIT(read);
return;
} 
#undef NL

A68_VOID  OCFAASP_print(A68_302  X)
{ 
A_PROC_ENTRY(print);
WVEAASP_put((&KQCAASP_standout), X);
A_PROC_EXIT(print);
return;
} 
#undef NL

A68_VOID  QCFAASP_write(A68_302  X)
{ 
A_PROC_ENTRY(write);
WVEAASP_put((&KQCAASP_standout), X);
A_PROC_EXIT(write);
return;
} 
#undef NL

A68_VOID  TCFAASP_getbin(A68_56 * F, A68_309  Items)
{ 
A68_BOOL  UCFAASP;  /* optbool result */
A68_BOOL * VCFAASP;  /* YIELD */
A68_INT  WCFAASP_n;
A68_INT  XCFAASP;  /* to part of loop */
A68_63  YCFAASP;  /* united object - for case conformity */
A68_CHAR * ZCFAASP_c;
A68_RC  ADFAASP_rc;
A68_RC  BDFAASP;  /* OPERATORS - trim index */
A68_32 * CDFAASP_rs;
A68_CHAR  DDFAASP_ch;
A68_33  FDFAASP_generator;   /* proc value of non-global proc */
A68_RC  LDFAASP;  /* avoid structure result */
A68_RC  KDFAASP_rc;
A68_INT  MDFAASP_u;
A68_BOOL  NDFAASP;  /* clause result */
A68_INT  ODFAASP;  /* YIELD */
A68_CHAR * PDFAASP;  /* YIELD */
A68_33  RDFAASP_generator;   /* proc value of non-global proc */
A68_RC  WDFAASP;  /* avoid structure result */
A68_RC  XDFAASP_t;
A68_RC  YDFAASP;  /* OPERATORS - trim index */
A68_RC  ZDFAASP;  /* YIELD */
A68_RC  AEFAASP;  /* OPERATORS - trim index */
A68_RC  BEFAASP;  /* YIELD */
A68_RC  CEFAASP;  /* OPERATORS - copy to flex */
A68_BOOL * DEFAASP_b;
A68_BITS  EEFAASP_t;
A68_BOOL  FEFAASP;  /* clause result */
A68_64  GEFAASP_rb;
A68_INT  HEFAASP_i;
A68_INT  IEFAASP;  /* to part of loop */
A68_BITS  JEFAASP_t;
A68_BOOL  KEFAASP;  /* clause result */
A68_BOOL * LEFAASP;  /* YIELD */
A68_LINT * MEFAASP_i;
A68_INT * NEFAASP_i;
A68_SINT * OEFAASP_i;
A68_SSINT * PEFAASP_i;
A68_69  QEFAASP_rn;
A68_69  REFAASP;  /* OPERATORS - trim index */
A68_70  SEFAASP_rn;
A68_70  TEFAASP;  /* OPERATORS - trim index */
A68_71  UEFAASP_rn;
A68_71  VEFAASP;  /* OPERATORS - trim index */
A68_72  WEFAASP_rn;
A68_72  XEFAASP;  /* OPERATORS - trim index */
A68_LBITS * YEFAASP_b;
A68_BITS * ZEFAASP_b;
A68_SBITS * AFFAASP_b;
A68_SSBITS * BFFAASP_b;
A68_65  CFFAASP_rb;
A68_65  DFFAASP;  /* OPERATORS - trim index */
A68_66  EFFAASP_rb;
A68_66  FFFAASP;  /* OPERATORS - trim index */
A68_67  GFFAASP_rb;
A68_67  HFFAASP;  /* OPERATORS - trim index */
A68_68  IFFAASP_rb;
A68_68  JFFAASP;  /* OPERATORS - trim index */
A68_REAL * KFFAASP_r;
A68_34  MFFAASP_generator;   /* proc value of non-global proc */
A68_VC  SFFAASP;  /* avoid structure result */
A68_VC  RFFAASP_v8;
A68_REAL  TFFAASP;  /* clause result */
A68_73  UFFAASP_rr;
A68_INT  VFFAASP_i;
A68_INT  WFFAASP;  /* to part of loop */
A68_34  YFFAASP_generator;   /* proc value of non-global proc */
A68_VC  EGFAASP;  /* avoid structure result */
A68_VC  DGFAASP_v8;
A68_REAL * FGFAASP;  /* YIELD */
A68_SREAL * GGFAASP_r;
A68_34  IGFAASP_generator;   /* proc value of non-global proc */
A68_VC  OGFAASP;  /* avoid structure result */
A68_VC  NGFAASP_v4;
A68_SREAL  PGFAASP;  /* clause result */
A68_74  QGFAASP_rr;
A68_INT  RGFAASP_i;
A68_INT  SGFAASP;  /* to part of loop */
A68_34  UGFAASP_generator;   /* proc value of non-global proc */
A68_VC  AHFAASP;  /* avoid structure result */
A68_VC  ZGFAASP_v4;
A68_SREAL * BHFAASP;  /* YIELD */
A68_COMPL * CHFAASP_z;
A68_311  DHFAASP;  /* collateral clause result */
A68_63  EHFAASP;  /* OPERATORS - mode -> union mode */
A68_REAL * FHFAASP;  /* YIELD */
A68_63  GHFAASP;  /* OPERATORS - mode -> union mode */
A68_REAL * HHFAASP;  /* YIELD */
A68_309  IHFAASP;  /* OPERATORS - istruct to row */
A68_75  JHFAASP_rz;
A68_INT  KHFAASP_i;
A68_INT  LHFAASP;  /* to part of loop */
A68_311  MHFAASP;  /* collateral clause result */
A68_63  NHFAASP;  /* OPERATORS - mode -> union mode */
A68_REAL * OHFAASP;  /* YIELD */
A68_63  PHFAASP;  /* OPERATORS - mode -> union mode */
A68_REAL * QHFAASP;  /* YIELD */
A68_309  RHFAASP;  /* OPERATORS - istruct to row */
A68_SCOMPL * SHFAASP_sz;
A68_311  THFAASP;  /* collateral clause result */
A68_63  UHFAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL * VHFAASP;  /* YIELD */
A68_63  WHFAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL * XHFAASP;  /* YIELD */
A68_309  YHFAASP;  /* OPERATORS - istruct to row */
A68_76  ZHFAASP_rsz;
A68_INT  AIFAASP_i;
A68_INT  BIFAASP;  /* to part of loop */
A68_311  CIFAASP;  /* collateral clause result */
A68_63  DIFAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL * EIFAASP;  /* YIELD */
A68_63  FIFAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL * GIFAASP;  /* YIELD */
A68_309  HIFAASP;  /* OPERATORS - istruct to row */
A68_77  IIFAASP_st;
A68_INT  JIFAASP_i;
A68_INT  KIFAASP;  /* to part of loop */
A68_77  LIFAASP;  /* OPERATORS - straight index */
A68_63  MIFAASP;  /* OPERATORS - straight index result */
A68_309  NIFAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(getbin);
 /* line 2263: */
 /* line 2265: */
 /* line 2267: */
UCFAASP = (*(&((&(F->State))->Opened)));
if ( UCFAASP )
{UCFAASP = (*(&((&((&(F->Book))->Type))->Getpossible)));
}
 /* line 2269: */
if ( UCFAASP )
{UCFAASP = (*(&((&((&(F->Book))->Type))->Binpossible)));
}
 /* line 2270: */
if ( UCFAASP )
{ 
OGCAASP_setreadmood(F);
VCFAASP = (&((&(F->State))->Charmood)) ;
(*VCFAASP) = A68_FALSE;
 /* line 2272: */
 /* line 2273: */
XCFAASP = Items.dim[0].upb;
for ( WCFAASP_n = 1;
WCFAASP_n <= XCFAASP;
WCFAASP_n += 1 )
{ 
 /* line 2274: */
 /* line 2275: */
 /* line 2276: */
YCFAASP = A_R1INDEX(Items,WCFAASP_n) ;
switch ( YCFAASP.mode )
{ 
case 1: /* REF CHAR */
ZCFAASP_c = (YCFAASP.data.mode1);
 /* line 2277: */
JVDAASP_read(F, ZCFAASP_c);
break;
case 2: /* REF [] CHAR */
ADFAASP_rc = (YCFAASP.data.mode2);
 /* line 2278: */
NUDAASP_read(F, A_R1TRIM(BDFAASP,(ADFAASP_rc),A_RTSCRIPT(&(BDFAASP.dim[0]),&((ADFAASP_rc).dim[0]),(ADFAASP_rc).dim[0].lwb,(ADFAASP_rc).dim[0].upb,1)));
break;
case 3: /* REF FLEX [] CHAR */
CDFAASP_rs = (YCFAASP.data.mode3);
 /* line 2279: */
 /* line 2280: */
{ 
 /* line 2281: */
A_CLOSURE( FDFAASP_generator, GDFAASP_generator, HDFAASP_generator );
A_CALLPROC(FDFAASP_generator,(A68_FALSE, &LDFAASP),(A68_FALSE, &LDFAASP,(FDFAASP_generator).nonlocals));
KDFAASP_rc = LDFAASP;
 /* line 2282: */
MDFAASP_u = (KDFAASP_rc.dim[0].lwb-1);
 /* line 2284: */
for ( ;; )
{ 
JVDAASP_read(F, (&DDFAASP_ch));
 /* line 2285: */
 /* line 2286: */
NDFAASP = !WYAAASP_elem(DDFAASP_ch, (*(&((&(F->Io))->Stringterm))));
if ( !NDFAASP ) break;
ODFAASP = MDFAASP_u+=1 ;
PDFAASP = (&A_R1INDEX(KDFAASP_rc,ODFAASP)) ;
(*PDFAASP) = DDFAASP_ch;
 /* line 2287: */
 /* line 2288: */
if ( (MDFAASP_u==KDFAASP_rc.dim[0].upb) )
{ 
A_CLOSURE( RDFAASP_generator, SDFAASP_generator, TDFAASP_generator );
(( TDFAASP_generator * ) ( RDFAASP_generator.nonlocals )) -> KDFAASP_rc = (&KDFAASP_rc);
A_CALLPROC(RDFAASP_generator,(A68_FALSE, &WDFAASP),(A68_FALSE, &WDFAASP,(RDFAASP_generator).nonlocals));
XDFAASP_t = WDFAASP;
ZDFAASP = A_R1TRIM(YDFAASP,(XDFAASP_t),A_RTSCRIPT(&(YDFAASP.dim[0]),&((XDFAASP_t).dim[0]),(XDFAASP_t).dim[0].lwb,MDFAASP_u,1)) ;
A_R1ASSIGN2(KDFAASP_rc,ZDFAASP,A68_CHAR );
 /* line 2289: */
 /* line 2290: */
KDFAASP_rc = XDFAASP_t;
} 
}
 /* line 2291: */
 /* line 2292: */
 /* line 2294: */
BEFAASP = A_R1TRIM(AEFAASP,(KDFAASP_rc),A_RTSCRIPT(&(AEFAASP.dim[0]),&((KDFAASP_rc).dim[0]),(KDFAASP_rc).dim[0].lwb,MDFAASP_u,1)) ;
(*CDFAASP_rs) = A_R1COPY(BEFAASP,CEFAASP,A68_CHAR );
} 
break;
case 4: /* REF BOOL */
DEFAASP_b = (YCFAASP.data.mode4);
{ 
DWDAASP_read(F, (&EEFAASP_t));
FEFAASP = (EEFAASP_t!=0X0U);
} 
 /* line 2295: */
(*DEFAASP_b) = FEFAASP;
break;
case 5: /* REF [] BOOL */
GEFAASP_rb = (YCFAASP.data.mode5);
 /* line 2296: */
IEFAASP = GEFAASP_rb.dim[0].upb;
for ( HEFAASP_i = GEFAASP_rb.dim[0].lwb;
HEFAASP_i <= IEFAASP;
HEFAASP_i += 1 )
{ 
 /* line 2297: */
{ 
DWDAASP_read(F, (&JEFAASP_t));
 /* line 2298: */
KEFAASP = (JEFAASP_t!=0X0U);
} 
LEFAASP = (&A_R1INDEX(GEFAASP_rb,HEFAASP_i)) ;
(*LEFAASP) = KEFAASP;
}
 /* line 2300: */
break;
case 14: /* REF LONG INT */
MEFAASP_i = (YCFAASP.data.mode14);
 /* line 2301: */
LAEAASP_read(F, MEFAASP_i);
break;
case 16: /* REF INT */
NEFAASP_i = (YCFAASP.data.mode16);
 /* line 2302: */
PAEAASP_read(F, NEFAASP_i);
break;
case 18: /* REF SHORT INT */
OEFAASP_i = (YCFAASP.data.mode18);
 /* line 2303: */
TAEAASP_read(F, OEFAASP_i);
break;
case 20: /* REF SHORT SHORT INT */
PEFAASP_i = (YCFAASP.data.mode20);
 /* line 2305: */
XAEAASP_read(F, PEFAASP_i);
break;
case 15: /* REF [] LONG INT */
QEFAASP_rn = (YCFAASP.data.mode15);
 /* line 2306: */
BBEAASP_read(F, A_R1TRIM(REFAASP,(QEFAASP_rn),A_RTSCRIPT(&(REFAASP.dim[0]),&((QEFAASP_rn).dim[0]),(QEFAASP_rn).dim[0].lwb,(QEFAASP_rn).dim[0].upb,1)));
break;
case 17: /* REF [] INT */
SEFAASP_rn = (YCFAASP.data.mode17);
 /* line 2307: */
WBEAASP_read(F, A_R1TRIM(TEFAASP,(SEFAASP_rn),A_RTSCRIPT(&(TEFAASP.dim[0]),&((SEFAASP_rn).dim[0]),(SEFAASP_rn).dim[0].lwb,(SEFAASP_rn).dim[0].upb,1)));
break;
case 19: /* REF [] SHORT INT */
UEFAASP_rn = (YCFAASP.data.mode19);
 /* line 2308: */
RCEAASP_read(F, A_R1TRIM(VEFAASP,(UEFAASP_rn),A_RTSCRIPT(&(VEFAASP.dim[0]),&((UEFAASP_rn).dim[0]),(UEFAASP_rn).dim[0].lwb,(UEFAASP_rn).dim[0].upb,1)));
break;
case 21: /* REF [] SHORT SHORT INT */
WEFAASP_rn = (YCFAASP.data.mode21);
 /* line 2310: */
MDEAASP_read(F, A_R1TRIM(XEFAASP,(WEFAASP_rn),A_RTSCRIPT(&(XEFAASP.dim[0]),&((WEFAASP_rn).dim[0]),(WEFAASP_rn).dim[0].lwb,(WEFAASP_rn).dim[0].upb,1)));
break;
case 6: /* REF LONG BITS */
YEFAASP_b = (YCFAASP.data.mode6);
 /* line 2311: */
VVDAASP_read(F, YEFAASP_b);
break;
case 8: /* REF BITS */
ZEFAASP_b = (YCFAASP.data.mode8);
 /* line 2312: */
DWDAASP_read(F, ZEFAASP_b);
break;
case 10: /* REF SHORT BITS */
AFFAASP_b = (YCFAASP.data.mode10);
 /* line 2313: */
LWDAASP_read(F, AFFAASP_b);
break;
case 12: /* REF SHORT SHORT BITS */
BFFAASP_b = (YCFAASP.data.mode12);
 /* line 2315: */
TWDAASP_read(F, BFFAASP_b);
break;
case 7: /* REF [] LONG BITS */
CFFAASP_rb = (YCFAASP.data.mode7);
 /* line 2316: */
BXDAASP_read(F, A_R1TRIM(DFFAASP,(CFFAASP_rb),A_RTSCRIPT(&(DFFAASP.dim[0]),&((CFFAASP_rb).dim[0]),(CFFAASP_rb).dim[0].lwb,(CFFAASP_rb).dim[0].upb,1)));
break;
case 9: /* REF [] BITS */
EFFAASP_rb = (YCFAASP.data.mode9);
 /* line 2317: */
WXDAASP_read(F, A_R1TRIM(FFFAASP,(EFFAASP_rb),A_RTSCRIPT(&(FFFAASP.dim[0]),&((EFFAASP_rb).dim[0]),(EFFAASP_rb).dim[0].lwb,(EFFAASP_rb).dim[0].upb,1)));
break;
case 11: /* REF [] SHORT BITS */
GFFAASP_rb = (YCFAASP.data.mode11);
 /* line 2318: */
RYDAASP_read(F, A_R1TRIM(HFFAASP,(GFFAASP_rb),A_RTSCRIPT(&(HFFAASP.dim[0]),&((GFFAASP_rb).dim[0]),(GFFAASP_rb).dim[0].lwb,(GFFAASP_rb).dim[0].upb,1)));
break;
case 13: /* REF [] SHORT SHORT BITS */
IFFAASP_rb = (YCFAASP.data.mode13);
 /* line 2320: */
MZDAASP_read(F, A_R1TRIM(JFFAASP,(IFFAASP_rb),A_RTSCRIPT(&(JFFAASP.dim[0]),&((IFFAASP_rb).dim[0]),(IFFAASP_rb).dim[0].lwb,(IFFAASP_rb).dim[0].upb,1)));
break;
case 22: /* REF REAL */
KFFAASP_r = (YCFAASP.data.mode22);
{ 
A_CLOSURE( MFFAASP_generator, NFFAASP_generator, OFFAASP_generator );
A_CALLPROC(MFFAASP_generator,(A68_TRUE, &SFFAASP),(A68_TRUE, &SFFAASP,(MFFAASP_generator).nonlocals));
RFFAASP_v8 = SFFAASP;
VTDAASP_read(F, RFFAASP_v8);
 /* line 2321: */
TFFAASP = PKAAASP_flatrvr(RFFAASP_v8);
} 
 /* line 2322: */
(*KFFAASP_r) = TFFAASP;
break;
case 23: /* REF [] REAL */
UFFAASP_rr = (YCFAASP.data.mode23);
 /* line 2323: */
WFFAASP = UFFAASP_rr.dim[0].upb;
for ( VFFAASP_i = UFFAASP_rr.dim[0].lwb;
VFFAASP_i <= WFFAASP;
VFFAASP_i += 1 )
{ 
 /* line 2324: */
A_CLOSURE( YFFAASP_generator, ZFFAASP_generator, AGFAASP_generator );
A_CALLPROC(YFFAASP_generator,(A68_TRUE, &EGFAASP),(A68_TRUE, &EGFAASP,(YFFAASP_generator).nonlocals));
DGFAASP_v8 = EGFAASP;
VTDAASP_read(F, DGFAASP_v8);
 /* line 2325: */
 /* line 2326: */
FGFAASP = (&A_R1INDEX(UFFAASP_rr,VFFAASP_i)) ;
(*FGFAASP) = PKAAASP_flatrvr(DGFAASP_v8);
}
 /* line 2328: */
break;
case 24: /* REF SHORT REAL */
GGFAASP_r = (YCFAASP.data.mode24);
{ 
A_CLOSURE( IGFAASP_generator, JGFAASP_generator, KGFAASP_generator );
A_CALLPROC(IGFAASP_generator,(A68_TRUE, &OGFAASP),(A68_TRUE, &OGFAASP,(IGFAASP_generator).nonlocals));
NGFAASP_v4 = OGFAASP;
VTDAASP_read(F, NGFAASP_v4);
 /* line 2329: */
PGFAASP = YKAAASP_flatrvsr(NGFAASP_v4);
} 
 /* line 2330: */
(*GGFAASP_r) = PGFAASP;
break;
case 25: /* REF [] SHORT REAL */
QGFAASP_rr = (YCFAASP.data.mode25);
 /* line 2331: */
 /* line 2332: */
SGFAASP = QGFAASP_rr.dim[0].upb;
for ( RGFAASP_i = QGFAASP_rr.dim[0].lwb;
RGFAASP_i <= SGFAASP;
RGFAASP_i += 1 )
{ 
 /* line 2333: */
A_CLOSURE( UGFAASP_generator, VGFAASP_generator, WGFAASP_generator );
A_CALLPROC(UGFAASP_generator,(A68_TRUE, &AHFAASP),(A68_TRUE, &AHFAASP,(UGFAASP_generator).nonlocals));
ZGFAASP_v4 = AHFAASP;
VTDAASP_read(F, ZGFAASP_v4);
 /* line 2334: */
 /* line 2335: */
BHFAASP = (&A_R1INDEX(QGFAASP_rr,RGFAASP_i)) ;
(*BHFAASP) = YKAAASP_flatrvsr(ZGFAASP_v4);
}
 /* line 2337: */
break;
case 26: /* REF COMPL */
CHFAASP_z = (YCFAASP.data.mode26);
FHFAASP = (&(CHFAASP_z->Re)) ;
DHFAASP.data[0] = A_UNITE(EHFAASP,mode22,22,FHFAASP);
HHFAASP = (&(CHFAASP_z->Im)) ;
DHFAASP.data[1] = A_UNITE(GHFAASP,mode22,22,HHFAASP);
 /* line 2338: */
TCFAASP_getbin(F, A_HIS1ARR(IHFAASP,DHFAASP,A68_63 ,2));
break;
case 27: /* REF [] COMPL */
JHFAASP_rz = (YCFAASP.data.mode27);
 /* line 2339: */
LHFAASP = JHFAASP_rz.dim[0].upb;
for ( KHFAASP_i = JHFAASP_rz.dim[0].lwb;
KHFAASP_i <= LHFAASP;
KHFAASP_i += 1 )
{ 
OHFAASP = (&((&A_R1INDEX(JHFAASP_rz,KHFAASP_i))->Re)) ;
MHFAASP.data[0] = A_UNITE(NHFAASP,mode22,22,OHFAASP);
QHFAASP = (&((&A_R1INDEX(JHFAASP_rz,KHFAASP_i))->Im)) ;
MHFAASP.data[1] = A_UNITE(PHFAASP,mode22,22,QHFAASP);
TCFAASP_getbin(F, A_HIS1ARR(RHFAASP,MHFAASP,A68_63 ,2));
}
 /* line 2341: */
break;
case 28: /* REF SHORT COMPL */
SHFAASP_sz = (YCFAASP.data.mode28);
 /* line 2342: */
VHFAASP = (&(SHFAASP_sz->Re)) ;
THFAASP.data[0] = A_UNITE(UHFAASP,mode24,24,VHFAASP);
XHFAASP = (&(SHFAASP_sz->Im)) ;
THFAASP.data[1] = A_UNITE(WHFAASP,mode24,24,XHFAASP);
 /* line 2343: */
TCFAASP_getbin(F, A_HIS1ARR(YHFAASP,THFAASP,A68_63 ,2));
break;
case 29: /* REF [] SHORT COMPL */
ZHFAASP_rsz = (YCFAASP.data.mode29);
 /* line 2344: */
 /* line 2345: */
BIFAASP = ZHFAASP_rsz.dim[0].upb;
for ( AIFAASP_i = ZHFAASP_rsz.dim[0].lwb;
AIFAASP_i <= BIFAASP;
AIFAASP_i += 1 )
{ 
EIFAASP = (&((&A_R1INDEX(ZHFAASP_rsz,AIFAASP_i))->Re)) ;
CIFAASP.data[0] = A_UNITE(DIFAASP,mode24,24,EIFAASP);
GIFAASP = (&((&A_R1INDEX(ZHFAASP_rsz,AIFAASP_i))->Im)) ;
CIFAASP.data[1] = A_UNITE(FIFAASP,mode24,24,GIFAASP);
TCFAASP_getbin(F, A_HIS1ARR(HIFAASP,CIFAASP,A68_63 ,2));
}
 /* line 2347: */
break;
case 30: /* STRAIGHT MODE63 */
IIFAASP_st = (YCFAASP.data.mode30);
 /* line 2348: */
 /* line 2349: */
KIFAASP = IIFAASP_st.upb;
for ( JIFAASP_i =  1;
JIFAASP_i <= KIFAASP;
JIFAASP_i += 1 )
{ 
TCFAASP_getbin(F, A_HARR(NIFAASP,A_STRINDEX_RTN(IIFAASP_st,JIFAASP_i,LIFAASP,MIFAASP),A68_63 ));
}
 /* line 2350: */
 /* line 2351: */
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 2352: */
} 
A_PROC_EXIT(getbin);
return;
} 
#undef NL

A68_VOID  QIFAASP_putbin(A68_56 * F, A68_312  Items)
{ 
A68_BOOL  RIFAASP;  /* optbool result */
A68_BOOL * SIFAASP;  /* YIELD */
A68_INT  TIFAASP_n;
A68_INT  UIFAASP;  /* to part of loop */
A68_78  VIFAASP;  /* united object - for case conformity */
A68_CHAR  WIFAASP_c;
A68_RC  XIFAASP_rc;
A68_RC  YIFAASP;  /* OPERATORS - trim index */
A68_BOOL  ZIFAASP_b;
A68_64  AJFAASP_rb;
A68_INT  BJFAASP_i;
A68_INT  CJFAASP;  /* to part of loop */
A68_LBITS  DJFAASP_b;
A68_BITS  EJFAASP_b;
A68_SBITS  FJFAASP_b;
A68_SSBITS  GJFAASP_b;
A68_65  HJFAASP_rb;
A68_INT  IJFAASP_i;
A68_INT  JJFAASP;  /* to part of loop */
A68_66  KJFAASP_rb;
A68_INT  LJFAASP_i;
A68_INT  MJFAASP;  /* to part of loop */
A68_67  NJFAASP_rb;
A68_INT  OJFAASP_i;
A68_INT  PJFAASP;  /* to part of loop */
A68_68  QJFAASP_rb;
A68_INT  RJFAASP_i;
A68_INT  SJFAASP;  /* to part of loop */
A68_LINT  TJFAASP_i;
A68_INT  UJFAASP_i;
A68_SINT  VJFAASP_i;
A68_SSINT  WJFAASP_i;
A68_69  XJFAASP_ri;
A68_INT  YJFAASP_i;
A68_INT  ZJFAASP;  /* to part of loop */
A68_70  AKFAASP_ri;
A68_INT  BKFAASP_i;
A68_INT  CKFAASP;  /* to part of loop */
A68_71  DKFAASP_ri;
A68_INT  EKFAASP_i;
A68_INT  FKFAASP;  /* to part of loop */
A68_72  GKFAASP_ri;
A68_INT  HKFAASP_i;
A68_INT  IKFAASP;  /* to part of loop */
A68_REAL  JKFAASP_r;
union {  /* BIOP 99 */
A68_REAL   source;
A68_133   destination;
} KKFAASP; 
A68_RC  LKFAASP;  /* OPERATORS - istruct to row */
A68_133  MKFAASP;  /* OPERATORS - istruct to row */
A68_73  NKFAASP_rr;
A68_INT  OKFAASP_i;
A68_INT  PKFAASP;  /* to part of loop */
union {  /* BIOP 99 */
A68_REAL   source;
A68_133   destination;
} QKFAASP; 
A68_RC  RKFAASP;  /* OPERATORS - istruct to row */
A68_133  SKFAASP;  /* OPERATORS - istruct to row */
A68_SREAL  TKFAASP_r;
union {  /* BIOP 99 */
A68_SREAL   source;
A68_135   destination;
} UKFAASP; 
A68_RC  VKFAASP;  /* OPERATORS - istruct to row */
A68_135  WKFAASP;  /* OPERATORS - istruct to row */
A68_74  XKFAASP_rr;
A68_INT  YKFAASP_i;
A68_INT  ZKFAASP;  /* to part of loop */
union {  /* BIOP 99 */
A68_SREAL   source;
A68_135   destination;
} ALFAASP; 
A68_RC  BLFAASP;  /* OPERATORS - istruct to row */
A68_135  CLFAASP;  /* OPERATORS - istruct to row */
A68_COMPL  DLFAASP_z;
A68_314  ELFAASP;  /* collateral clause result */
A68_78  FLFAASP;  /* OPERATORS - mode -> union mode */
A68_REAL  GLFAASP;  /* YIELD */
A68_78  HLFAASP;  /* OPERATORS - mode -> union mode */
A68_REAL  ILFAASP;  /* YIELD */
A68_312  JLFAASP;  /* OPERATORS - istruct to row */
A68_75  KLFAASP_rz;
A68_INT  LLFAASP_i;
A68_INT  MLFAASP;  /* to part of loop */
A68_314  NLFAASP;  /* collateral clause result */
A68_78  OLFAASP;  /* OPERATORS - mode -> union mode */
A68_REAL  PLFAASP;  /* YIELD */
A68_78  QLFAASP;  /* OPERATORS - mode -> union mode */
A68_REAL  RLFAASP;  /* YIELD */
A68_312  SLFAASP;  /* OPERATORS - istruct to row */
A68_SCOMPL  TLFAASP_z;
A68_314  ULFAASP;  /* collateral clause result */
A68_78  VLFAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL  WLFAASP;  /* YIELD */
A68_78  XLFAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL  YLFAASP;  /* YIELD */
A68_312  ZLFAASP;  /* OPERATORS - istruct to row */
A68_76  AMFAASP_rz;
A68_INT  BMFAASP_i;
A68_INT  CMFAASP;  /* to part of loop */
A68_314  DMFAASP;  /* collateral clause result */
A68_78  EMFAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL  FMFAASP;  /* YIELD */
A68_78  GMFAASP;  /* OPERATORS - mode -> union mode */
A68_SREAL  HMFAASP;  /* YIELD */
A68_312  IMFAASP;  /* OPERATORS - istruct to row */
A68_79  JMFAASP_st;
A68_INT  KMFAASP_i;
A68_INT  LMFAASP;  /* to part of loop */
A68_79  MMFAASP;  /* OPERATORS - straight index */
A68_78  NMFAASP;  /* OPERATORS - straight index result */
A68_312  OMFAASP;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(putbin);
 /* line 2356: */
 /* line 2358: */
 /* line 2360: */
RIFAASP = (*(&((&(F->State))->Opened)));
if ( RIFAASP )
{RIFAASP = (*(&((&((&(F->Book))->Type))->Putpossible)));
}
 /* line 2362: */
if ( RIFAASP )
{RIFAASP = (*(&((&((&(F->Book))->Type))->Binpossible)));
}
 /* line 2363: */
if ( RIFAASP )
{ 
SGCAASP_setwritemood(F);
SIFAASP = (&((&(F->State))->Charmood)) ;
(*SIFAASP) = A68_FALSE;
 /* line 2365: */
 /* line 2366: */
UIFAASP = Items.dim[0].upb;
for ( TIFAASP_n = 1;
TIFAASP_n <= UIFAASP;
TIFAASP_n += 1 )
{ 
 /* line 2367: */
 /* line 2368: */
 /* line 2369: */
VIFAASP = A_R1INDEX(Items,TIFAASP_n) ;
switch ( VIFAASP.mode )
{ 
case 1: /* CHAR */
WIFAASP_c = (VIFAASP.data.mode1);
 /* line 2370: */
HGEAASP_write(F, WIFAASP_c);
break;
case 2: /* [] CHAR */
XIFAASP_rc = (VIFAASP.data.mode2);
 /* line 2372: */
BKEAASP_write(F, A_R1TRIM(YIFAASP,(XIFAASP_rc),A_RTSCRIPT(&(YIFAASP.dim[0]),&((XIFAASP_rc).dim[0]),(XIFAASP_rc).dim[0].lwb,(XIFAASP_rc).dim[0].upb,1)));
break;
case 3: /* BOOL */
ZIFAASP_b = (VIFAASP.data.mode3);
 /* line 2373: */
XEEAASP_write(F, (A68_BITS )(ZIFAASP_b));
break;
case 4: /* [] BOOL */
AJFAASP_rb = (VIFAASP.data.mode4);
CJFAASP = AJFAASP_rb.dim[0].upb;
for ( BJFAASP_i = AJFAASP_rb.dim[0].lwb;
BJFAASP_i <= CJFAASP;
BJFAASP_i += 1 )
{ 
XEEAASP_write(F, (A68_BITS )(A_R1INDEX(AJFAASP_rb,BJFAASP_i)));
}
 /* line 2375: */
break;
case 5: /* LONG BITS */
DJFAASP_b = (VIFAASP.data.mode5);
 /* line 2376: */
LEEAASP_write(F, DJFAASP_b);
break;
case 7: /* BITS */
EJFAASP_b = (VIFAASP.data.mode7);
 /* line 2377: */
XEEAASP_write(F, EJFAASP_b);
break;
case 9: /* SHORT BITS */
FJFAASP_b = (VIFAASP.data.mode9);
 /* line 2378: */
JFEAASP_write(F, FJFAASP_b);
break;
case 11: /* SHORT SHORT BITS */
GJFAASP_b = (VIFAASP.data.mode11);
 /* line 2380: */
VFEAASP_write(F, GJFAASP_b);
break;
case 6: /* [] LONG BITS */
HJFAASP_rb = (VIFAASP.data.mode6);
 /* line 2381: */
JJFAASP = HJFAASP_rb.dim[0].upb;
for ( IJFAASP_i = HJFAASP_rb.dim[0].lwb;
IJFAASP_i <= JJFAASP;
IJFAASP_i += 1 )
{ 
LEEAASP_write(F, A_R1INDEX(HJFAASP_rb,IJFAASP_i));
}
 /* line 2382: */
break;
case 8: /* [] BITS */
KJFAASP_rb = (VIFAASP.data.mode8);
MJFAASP = KJFAASP_rb.dim[0].upb;
for ( LJFAASP_i = KJFAASP_rb.dim[0].lwb;
LJFAASP_i <= MJFAASP;
LJFAASP_i += 1 )
{ 
XEEAASP_write(F, A_R1INDEX(KJFAASP_rb,LJFAASP_i));
}
 /* line 2383: */
break;
case 10: /* [] SHORT BITS */
NJFAASP_rb = (VIFAASP.data.mode10);
 /* line 2384: */
PJFAASP = NJFAASP_rb.dim[0].upb;
for ( OJFAASP_i = NJFAASP_rb.dim[0].lwb;
OJFAASP_i <= PJFAASP;
OJFAASP_i += 1 )
{ 
JFEAASP_write(F, A_R1INDEX(NJFAASP_rb,OJFAASP_i));
}
 /* line 2385: */
break;
case 12: /* [] SHORT SHORT BITS */
QJFAASP_rb = (VIFAASP.data.mode12);
 /* line 2386: */
SJFAASP = QJFAASP_rb.dim[0].upb;
for ( RJFAASP_i = QJFAASP_rb.dim[0].lwb;
RJFAASP_i <= SJFAASP;
RJFAASP_i += 1 )
{ 
VFEAASP_write(F, A_R1INDEX(QJFAASP_rb,RJFAASP_i));
}
 /* line 2388: */
break;
case 13: /* LONG INT */
TJFAASP_i = (VIFAASP.data.mode13);
 /* line 2389: */
LEEAASP_write(F, (A68_LBITS )TJFAASP_i);
break;
case 15: /* INT */
UJFAASP_i = (VIFAASP.data.mode15);
 /* line 2390: */
XEEAASP_write(F, (A68_BITS )UJFAASP_i);
break;
case 17: /* SHORT INT */
VJFAASP_i = (VIFAASP.data.mode17);
 /* line 2391: */
JFEAASP_write(F, (A68_SBITS )VJFAASP_i);
break;
case 19: /* SHORT SHORT INT */
WJFAASP_i = (VIFAASP.data.mode19);
 /* line 2392: */
 /* line 2394: */
VFEAASP_write(F, (A68_SSBITS )WJFAASP_i);
break;
case 14: /* [] LONG INT */
XJFAASP_ri = (VIFAASP.data.mode14);
 /* line 2395: */
ZJFAASP = XJFAASP_ri.dim[0].upb;
for ( YJFAASP_i = XJFAASP_ri.dim[0].lwb;
YJFAASP_i <= ZJFAASP;
YJFAASP_i += 1 )
{ 
LEEAASP_write(F, (A68_LBITS )A_R1INDEX(XJFAASP_ri,YJFAASP_i));
}
 /* line 2396: */
break;
case 16: /* [] INT */
AKFAASP_ri = (VIFAASP.data.mode16);
CKFAASP = AKFAASP_ri.dim[0].upb;
for ( BKFAASP_i = AKFAASP_ri.dim[0].lwb;
BKFAASP_i <= CKFAASP;
BKFAASP_i += 1 )
{ 
XEEAASP_write(F, (A68_BITS )A_R1INDEX(AKFAASP_ri,BKFAASP_i));
}
 /* line 2397: */
break;
case 18: /* [] SHORT INT */
DKFAASP_ri = (VIFAASP.data.mode18);
 /* line 2398: */
FKFAASP = DKFAASP_ri.dim[0].upb;
for ( EKFAASP_i = DKFAASP_ri.dim[0].lwb;
EKFAASP_i <= FKFAASP;
EKFAASP_i += 1 )
{ 
JFEAASP_write(F, (A68_SBITS )A_R1INDEX(DKFAASP_ri,EKFAASP_i));
}
 /* line 2399: */
break;
case 20: /* [] SHORT SHORT INT */
GKFAASP_ri = (VIFAASP.data.mode20);
 /* line 2400: */
IKFAASP = GKFAASP_ri.dim[0].upb;
for ( HKFAASP_i = GKFAASP_ri.dim[0].lwb;
HKFAASP_i <= IKFAASP;
HKFAASP_i += 1 )
{ 
VFEAASP_write(F, (A68_SSBITS )A_R1INDEX(GKFAASP_ri,HKFAASP_i));
}
 /* line 2402: */
break;
case 21: /* REAL */
JKFAASP_r = (VIFAASP.data.mode21);
 /* line 2403: */
KKFAASP.source = JKFAASP_r ;
MKFAASP = (KKFAASP.destination) ;
BKEAASP_write(F, A_HIS1ARR(LKFAASP,MKFAASP,A68_CHAR ,8));
break;
case 22: /* [] REAL */
NKFAASP_rr = (VIFAASP.data.mode22);
PKFAASP = NKFAASP_rr.dim[0].upb;
for ( OKFAASP_i = NKFAASP_rr.dim[0].lwb;
OKFAASP_i <= PKFAASP;
OKFAASP_i += 1 )
{ 
QKFAASP.source = A_R1INDEX(NKFAASP_rr,OKFAASP_i) ;
SKFAASP = (QKFAASP.destination) ;
BKEAASP_write(F, A_HIS1ARR(RKFAASP,SKFAASP,A68_CHAR ,8));
}
 /* line 2405: */
break;
case 23: /* SHORT REAL */
TKFAASP_r = (VIFAASP.data.mode23);
 /* line 2406: */
UKFAASP.source = TKFAASP_r ;
WKFAASP = (UKFAASP.destination) ;
BKEAASP_write(F, A_HIS1ARR(VKFAASP,WKFAASP,A68_CHAR ,4));
break;
case 24: /* [] SHORT REAL */
XKFAASP_rr = (VIFAASP.data.mode24);
 /* line 2407: */
ZKFAASP = XKFAASP_rr.dim[0].upb;
for ( YKFAASP_i = XKFAASP_rr.dim[0].lwb;
YKFAASP_i <= ZKFAASP;
YKFAASP_i += 1 )
{ 
ALFAASP.source = A_R1INDEX(XKFAASP_rr,YKFAASP_i) ;
CLFAASP = (ALFAASP.destination) ;
BKEAASP_write(F, A_HIS1ARR(BLFAASP,CLFAASP,A68_CHAR ,4));
}
 /* line 2409: */
break;
case 25: /* COMPL */
DLFAASP_z = (VIFAASP.data.mode25);
GLFAASP = DLFAASP_z.Re ;
ELFAASP.data[0] = A_UNITE(FLFAASP,mode21,21,GLFAASP);
ILFAASP = DLFAASP_z.Im ;
ELFAASP.data[1] = A_UNITE(HLFAASP,mode21,21,ILFAASP);
 /* line 2410: */
QIFAASP_putbin(F, A_HIS1ARR(JLFAASP,ELFAASP,A68_78 ,2));
break;
case 26: /* [] COMPL */
KLFAASP_rz = (VIFAASP.data.mode26);
 /* line 2411: */
MLFAASP = KLFAASP_rz.dim[0].upb;
for ( LLFAASP_i = KLFAASP_rz.dim[0].lwb;
LLFAASP_i <= MLFAASP;
LLFAASP_i += 1 )
{ 
PLFAASP = A_R1INDEX(KLFAASP_rz,LLFAASP_i).Re ;
NLFAASP.data[0] = A_UNITE(OLFAASP,mode21,21,PLFAASP);
RLFAASP = A_R1INDEX(KLFAASP_rz,LLFAASP_i).Im ;
NLFAASP.data[1] = A_UNITE(QLFAASP,mode21,21,RLFAASP);
QIFAASP_putbin(F, A_HIS1ARR(SLFAASP,NLFAASP,A68_78 ,2));
}
 /* line 2413: */
break;
case 27: /* SHORT COMPL */
TLFAASP_z = (VIFAASP.data.mode27);
 /* line 2414: */
WLFAASP = TLFAASP_z.Re ;
ULFAASP.data[0] = A_UNITE(VLFAASP,mode23,23,WLFAASP);
YLFAASP = TLFAASP_z.Im ;
ULFAASP.data[1] = A_UNITE(XLFAASP,mode23,23,YLFAASP);
 /* line 2415: */
QIFAASP_putbin(F, A_HIS1ARR(ZLFAASP,ULFAASP,A68_78 ,2));
break;
case 28: /* [] SHORT COMPL */
AMFAASP_rz = (VIFAASP.data.mode28);
 /* line 2416: */
 /* line 2417: */
CMFAASP = AMFAASP_rz.dim[0].upb;
for ( BMFAASP_i = AMFAASP_rz.dim[0].lwb;
BMFAASP_i <= CMFAASP;
BMFAASP_i += 1 )
{ 
FMFAASP = A_R1INDEX(AMFAASP_rz,BMFAASP_i).Re ;
DMFAASP.data[0] = A_UNITE(EMFAASP,mode23,23,FMFAASP);
HMFAASP = A_R1INDEX(AMFAASP_rz,BMFAASP_i).Im ;
DMFAASP.data[1] = A_UNITE(GMFAASP,mode23,23,HMFAASP);
QIFAASP_putbin(F, A_HIS1ARR(IMFAASP,DMFAASP,A68_78 ,2));
}
 /* line 2419: */
break;
case 29: /* STRAIGHT MODE78 */
JMFAASP_st = (VIFAASP.data.mode29);
 /* line 2420: */
 /* line 2421: */
LMFAASP = JMFAASP_st.upb;
for ( KMFAASP_i =  1;
KMFAASP_i <= LMFAASP;
KMFAASP_i += 1 )
{ 
QIFAASP_putbin(F, A_HARR(OMFAASP,A_STRINDEX_RTN(JMFAASP_st,KMFAASP_i,MMFAASP,NMFAASP),A68_78 ));
}
 /* line 2422: */
 /* line 2423: */
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 2425: */
 /* line 2426: */
if ( (*(&((&((&(F->State))->Buffer))->Flushafterput))) )
{ 
 /* line 2427: */
 /* line 2428: */
URDAASP_flushbuffer(F);
} 
} 
A_PROC_EXIT(putbin);
return;
} 
#undef NL

A68_VOID  QMFAASP_readbin(A68_309  Items)
{ 
A_PROC_ENTRY(readbin);
TCFAASP_getbin((&WQCAASP_standback), Items);
A_PROC_EXIT(readbin);
return;
} 
#undef NL

A68_VOID  SMFAASP_writebin(A68_312  Items)
{ 
A_PROC_ENTRY(writebin);
QIFAASP_putbin((&WQCAASP_standback), Items);
A_PROC_EXIT(writebin);
return;
} 
#undef NL
 /* line 2: */
 /* line 65: */
void NVBAASP(void)   /* initialise DECS transput */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-s","-uname","seedfile","-staredit","1234ABCD","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir",".","transput.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"./spconvert.m","./spops.m","./spplain.m","./spaliens.m","./spmodes.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_44  UACAASP;  /* collateral clause result */
A68_VC  VACAASP;  /* OPERATORS - nil -> mode */
A68_237  GCCAASP;  /* collateral clause result */
A68_228  FDCAASP;  /* OPERATORS - istruct to row */
A68_45  XDCAASP;  /* collateral clause result */
A68_45  ZDCAASP;  /* collateral clause result */
A68_45  BECAASP;  /* collateral clause result */
A68_45  DECAASP;  /* collateral clause result */
A68_45  FECAASP;  /* collateral clause result */
A68_58  HECAASP;  /* collateral clause result */
A68_58  JECAASP;  /* collateral clause result */
A68_57  YKCAASP;  /* collateral clause result */
A68_59  ZKCAASP;  /* procedure value */
A68_59  ALCAASP;  /* procedure value */
A68_59  BLCAASP;  /* procedure value */
A68_55  CLCAASP;  /* procedure value */
A68_VC  DNCAASP;  /* avoid structure result */
A68_47  SOCAASP;  /* collateral clause result */
A68_48  TOCAASP;  /* procedure value */
A68_49  UOCAASP;  /* procedure value */
A68_50  VOCAASP;  /* procedure value */
A68_51  WOCAASP;  /* procedure value */
A68_49  XOCAASP;  /* procedure value */
A68_52  YOCAASP;  /* procedure value */
A68_52  ZOCAASP;  /* procedure value */
A68_53  FPCAASP;  /* procedure value */
A68_50  IPCAASP;  /* procedure value */
A68_54  JPCAASP;  /* procedure value */
A68_55  KPCAASP;  /* procedure value */
A68_51  LPCAASP;  /* procedure value */
A68_58  NPCAASP;  /* collateral clause result */
A68_56  PPCAASP;  /* collateral clause result */
A68_VC  VPCAASP;  /* avoid structure result */
A68_VC  XPCAASP;  /* OPERATORS - assign op */
A68_VC  YPCAASP;  /* OPERATORS - nil -> mode */
A68_56  AQCAASP;  /* collateral clause result */
A68_VC  GQCAASP;  /* avoid structure result */
A68_VC  IQCAASP;  /* OPERATORS - assign op */
A68_VC  JQCAASP;  /* OPERATORS - nil -> mode */
A68_56  LQCAASP;  /* collateral clause result */
A68_VC  RQCAASP;  /* avoid structure result */
A68_VC  TQCAASP;  /* OPERATORS - assign op */
A68_VC  UQCAASP;  /* OPERATORS - nil -> mode */
A68_47  EUCAASP;  /* collateral clause result */
A68_48  FUCAASP;  /* procedure value */
A68_49  GUCAASP;  /* procedure value */
A68_50  HUCAASP;  /* procedure value */
A68_51  IUCAASP;  /* procedure value */
A68_49  JUCAASP;  /* procedure value */
A68_52  KUCAASP;  /* procedure value */
A68_52  LUCAASP;  /* procedure value */
A68_53  MUCAASP;  /* procedure value */
A68_50  NUCAASP;  /* procedure value */
A68_54  OUCAASP;  /* procedure value */
A68_55  PUCAASP;  /* procedure value */
A68_51  QUCAASP;  /* procedure value */
A68_VC  XUCAASP;  /* avoid structure result */
A68_60  PWCAASP;  /* collateral clause result */
A68_48  QWCAASP;  /* procedure value */
A68_49  RWCAASP;  /* procedure value */
A68_50  SWCAASP;  /* procedure value */
A68_51  TWCAASP;  /* OPERATORS - skip to mode */
A68_49  UWCAASP;  /* OPERATORS - skip to mode */
A68_52  VWCAASP;  /* OPERATORS - skip to mode */
A68_52  WWCAASP;  /* OPERATORS - skip to mode */
A68_53  XWCAASP;  /* procedure value */
A68_50  YWCAASP;  /* OPERATORS - skip to mode */
A68_54  ZWCAASP;  /* OPERATORS - skip to mode */
A68_55  AXCAASP;  /* procedure value */
A68_51  BXCAASP;  /* procedure value */
A68_60  LZCAASP;  /* collateral clause result */
A68_48  MZCAASP;  /* procedure value */
A68_49  NZCAASP;  /* procedure value */
A68_50  OZCAASP;  /* procedure value */
A68_51  PZCAASP;  /* procedure value */
A68_49  QZCAASP;  /* procedure value */
A68_52  RZCAASP;  /* procedure value */
A68_52  SZCAASP;  /* procedure value */
A68_53  TZCAASP;  /* procedure value */
A68_50  UZCAASP;  /* procedure value */
A68_54  VZCAASP;  /* procedure value */
A68_55  WZCAASP;  /* procedure value */
A68_51  XZCAASP;  /* procedure value */
A68_60  YCDAASP;  /* collateral clause result */
A68_48  ZCDAASP;  /* procedure value */
A68_49  ADDAASP;  /* procedure value */
A68_50  BDDAASP;  /* procedure value */
A68_51  CDDAASP;  /* procedure value */
A68_49  DDDAASP;  /* procedure value */
A68_52  EDDAASP;  /* procedure value */
A68_52  FDDAASP;  /* procedure value */
A68_53  GDDAASP;  /* procedure value */
A68_50  HDDAASP;  /* procedure value */
A68_54  IDDAASP;  /* procedure value */
A68_55  JDDAASP;  /* procedure value */
A68_51  KDDAASP;  /* procedure value */
A68_60  GGDAASP;  /* collateral clause result */
A68_48  HGDAASP;  /* procedure value */
A68_49  IGDAASP;  /* procedure value */
A68_50  JGDAASP;  /* procedure value */
A68_51  KGDAASP;  /* procedure value */
A68_49  LGDAASP;  /* procedure value */
A68_52  MGDAASP;  /* procedure value */
A68_52  NGDAASP;  /* procedure value */
A68_53  OGDAASP;  /* procedure value */
A68_50  PGDAASP;  /* procedure value */
A68_54  QGDAASP;  /* procedure value */
A68_55  RGDAASP;  /* procedure value */
A68_51  SGDAASP;  /* procedure value */
A68_60  LQDAASP;  /* collateral clause result */
A68_48  MQDAASP;  /* procedure value */
A68_49  NQDAASP;  /* procedure value */
A68_50  OQDAASP;  /* procedure value */
A68_51  PQDAASP;  /* procedure value */
A68_49  QQDAASP;  /* procedure value */
A68_52  RQDAASP;  /* OPERATORS - skip to mode */
A68_52  SQDAASP;  /* OPERATORS - skip to mode */
A68_53  TQDAASP;  /* procedure value */
A68_50  UQDAASP;  /* procedure value */
A68_54  VQDAASP;  /* procedure value */
A68_55  WQDAASP;  /* procedure value */
A68_51  XQDAASP;  /* procedure value */
A68_60  ZQDAASP;  /* collateral clause result */
A68_48  ARDAASP;  /* procedure value */
A68_49  BRDAASP;  /* procedure value */
A68_50  CRDAASP;  /* procedure value */
A68_51  DRDAASP;  /* procedure value */
A68_49  ERDAASP;  /* procedure value */
A68_52  FRDAASP;  /* OPERATORS - skip to mode */
A68_52  GRDAASP;  /* OPERATORS - skip to mode */
A68_53  HRDAASP;  /* procedure value */
A68_50  IRDAASP;  /* procedure value */
A68_54  JRDAASP;  /* procedure value */
A68_55  KRDAASP;  /* procedure value */
A68_51  LRDAASP;  /* procedure value */
A68_60  NRDAASP;  /* collateral clause result */
A68_60  PRDAASP;  /* collateral clause result */
A68_60  RRDAASP;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
WZAAASP();   /* USE spconvert */
CGAAASP();   /* USE spops */
DTAAASP();   /* USE spplain */
YAAAASP();   /* USE spaliens */
BAAAASP();   /* USE spmodes */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/qad/transput.a68";
A_config.translation_time = "Sun Apr 18 20:08:22 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "MVBAASP (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:08:22 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS transput);
 /* line 67: */
 /* line 77: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 92: */
 /* line 93: */
 /* line 97: */
 /* line 99: */
 /* line 101: */
 /* line 104: */
 /* line 108: */
 /* line 113: */
 /* line 123: */
 /* line 133: */
 /* line 143: */
 /* line 155: */
 /* line 175: */
 /* line 176: */
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 181: */
 /* line 182: */
 /* line 183: */
 /* line 184: */
 /* line 186: */
 /* line 187: */
 /* line 189: */
VZBAASP_args_initialised = A68_FALSE;
 /* line 191: */
 /* line 193: */
 /* line 194: */
 /* line 195: */
 /* line 217: */
UACAASP.Start = A_VVAC(VACAASP);
UACAASP.Max = 0;
UACAASP.Valid = 0;
UACAASP.Pos = 0;
UACAASP.Writeback = A68_FALSE;
UACAASP.Flushafterput = A68_FALSE;
WACAASP_nobuffer = UACAASP;
 /* line 219: */
 /* line 225: */
 /* line 227: */
 /* line 229: */
 /* line 238: */
 /* line 239: */
 /* line 240: */
 /* line 241: */
 /* line 242: */
 /* line 243: */
 /* line 244: */
 /* line 245: */
 /* line 246: */
 /* line 247: */
 /* line 248: */
 /* line 249: */
 /* line 251: */
 /* line 252: */
 /* line 253: */
GCCAASP.data[0] = ICCAASP;
 /* line 254: */
GCCAASP.data[1] = KCCAASP;
 /* line 255: */
GCCAASP.data[2] = MCCAASP;
 /* line 256: */
GCCAASP.data[3] = OCCAASP;
 /* line 257: */
GCCAASP.data[4] = QCCAASP;
 /* line 258: */
GCCAASP.data[5] = SCCAASP;
 /* line 259: */
GCCAASP.data[6] = UCCAASP;
 /* line 260: */
GCCAASP.data[7] = WCCAASP;
 /* line 261: */
GCCAASP.data[8] = YCCAASP;
 /* line 262: */
GCCAASP.data[9] = ADCAASP;
 /* line 263: */
GCCAASP.data[10] = CDCAASP;
GCCAASP.data[11] = EDCAASP;
GDCAASP_transerrtxt = A_HIS1ARR(FDCAASP,GCCAASP,A68_RC ,12);
 /* line 265: */
 /* line 274: */
 /* line 275: */
XDCAASP.Binpossible = A68_TRUE;
XDCAASP.Putpossible = A68_FALSE;
XDCAASP.Getpossible = A68_TRUE;
XDCAASP.Setpossible = A68_TRUE;
XDCAASP.Reidfpossible = A68_FALSE;
YDCAASP_standinbook = XDCAASP;
 /* line 276: */
ZDCAASP.Binpossible = A68_TRUE;
ZDCAASP.Putpossible = A68_TRUE;
ZDCAASP.Getpossible = A68_FALSE;
ZDCAASP.Setpossible = A68_TRUE;
ZDCAASP.Reidfpossible = A68_FALSE;
AECAASP_standoutbook = ZDCAASP;
 /* line 277: */
BECAASP.Binpossible = A68_TRUE;
BECAASP.Putpossible = A68_TRUE;
BECAASP.Getpossible = A68_TRUE;
BECAASP.Setpossible = A68_TRUE;
BECAASP.Reidfpossible = A68_TRUE;
CECAASP_standbackbook = BECAASP;
 /* line 278: */
DECAASP.Binpossible = A68_TRUE;
DECAASP.Putpossible = A68_TRUE;
DECAASP.Getpossible = A68_TRUE;
DECAASP.Setpossible = A68_TRUE;
DECAASP.Reidfpossible = A68_FALSE;
EECAASP_iorabook = DECAASP;
 /* line 279: */
FECAASP.Binpossible = A68_TRUE;
FECAASP.Putpossible = A68_TRUE;
FECAASP.Getpossible = A68_TRUE;
FECAASP.Setpossible = A68_FALSE;
FECAASP.Reidfpossible = A68_FALSE;
GECAASP_iobook = FECAASP;
 /* line 281: */
 /* line 282: */
HECAASP.Readmood = A68_TRUE;
HECAASP.Charmood = A68_FALSE;
HECAASP.Opened = A68_TRUE;
HECAASP.Ended = A68_FALSE;
HECAASP.Bol = A68_TRUE;
HECAASP.Backch = (-1);
HECAASP.Lasterror = 0;
HECAASP.Buffer = WACAASP_nobuffer;
HECAASP.Pos = CBCAASP_zeropos;
IECAASP_initstate = HECAASP;
 /* line 283: */
JECAASP.Readmood = A68_FALSE;
JECAASP.Charmood = A68_FALSE;
JECAASP.Opened = A68_FALSE;
JECAASP.Ended = A68_FALSE;
JECAASP.Bol = A68_TRUE;
JECAASP.Backch = (-1);
JECAASP.Lasterror = 0;
JECAASP.Buffer = WACAASP_nobuffer;
JECAASP.Pos = CBCAASP_zeropos;
KECAASP_initclosedstate = JECAASP;
 /* line 286: */
 /* line 287: */
 /* line 288: */
 /* line 289: */
 /* line 290: */
 /* line 291: */
 /* line 293: */
 /* line 295: */
 /* line 304: */
 /* line 306: */
 /* line 308: */
 /* line 312: */
 /* line 316: */
 /* line 319: */
 /* line 322: */
 /* line 325: */
 /* line 332: */
 /* line 339: */
 /* line 348: */
 /* line 362: */
 /* line 374: */
 /* line 388: */
 /* line 396: */
 /* line 416: */
 /* line 431: */
 /* line 443: */
 /* line 445: */
 /* line 447: */
 /* line 449: */
 /* line 450: */
 /* line 451: */
 /* line 452: */
YKCAASP.Stringterm = VZAAASP_lfbag;
 /* line 453: */
ZKCAASP.fn.fn_global = PKCAASP_nofileend;
ZKCAASP.nonlocals = A68_NIL;
YKCAASP.Logicalfilemended = ZKCAASP;
 /* line 454: */
ALCAASP.fn.fn_global = PKCAASP_nofileend;
ALCAASP.nonlocals = A68_NIL;
YKCAASP.Physicalfilemended = ALCAASP;
 /* line 456: */
BLCAASP.fn.fn_global = SKCAASP_ignorevalueerror;
BLCAASP.nonlocals = A68_NIL;
YKCAASP.Valueerrormended = BLCAASP;
CLCAASP.fn.fn_global = WKCAASP_ignorecharerror;
CLCAASP.nonlocals = A68_NIL;
YKCAASP.Charerrormended = CLCAASP;
DLCAASP_defaultioprocs = YKCAASP;
 /* line 459: */
 /* line 461: */
 /* line 462: */
 /* line 463: */
 /* line 464: */
 /* line 466: */
 /* line 473: */
 /* line 489: */
 /* line 504: */
 /* line 510: */
 /* line 517: */
 /* line 523: */
ZMCAASP_generator( A68_TRUE, &DNCAASP );
CNCAASP_charbuffer = DNCAASP;
 /* line 525: */
 /* line 531: */
 /* line 537: */
 /* line 544: */
 /* line 554: */
 /* line 559: */
 /* line 561: */
 /* line 563: */
 /* line 564: */
TOCAASP.fn.fn_global = PLCAASP_sysestab;
TOCAASP.nonlocals = A68_NIL;
SOCAASP.Estab = TOCAASP;
UOCAASP.fn.fn_global = YLCAASP_sysopen;
UOCAASP.nonlocals = A68_NIL;
SOCAASP.Open = UOCAASP;
 /* line 565: */
VOCAASP.fn.fn_global = HMCAASP_sysclose;
VOCAASP.nonlocals = A68_NIL;
SOCAASP.Close = VOCAASP;
WOCAASP.fn.fn_global = UNCAASP_sysset;
WOCAASP.nonlocals = A68_NIL;
SOCAASP.Set = WOCAASP;
 /* line 566: */
XOCAASP.fn.fn_global = BOCAASP_syslpos;
XOCAASP.nonlocals = A68_NIL;
SOCAASP.Logicalend = XOCAASP;
YOCAASP.fn.fn_global = SMCAASP_sysputbuf;
YOCAASP.nonlocals = A68_NIL;
SOCAASP.Putbuf = YOCAASP;
 /* line 567: */
ZOCAASP.fn.fn_global = KMCAASP_sysgetbuf;
ZOCAASP.nonlocals = A68_NIL;
SOCAASP.Getbuf = ZOCAASP;
 /* line 568: */
FPCAASP.fn.fn_global = CPCAASP_anonymous;
FPCAASP.nonlocals = A68_NIL;
SOCAASP.Ensurebufspace = FPCAASP;
 /* line 569: */
IPCAASP.fn.fn_global = HPCAASP_anonymous;
IPCAASP.nonlocals = A68_NIL;
SOCAASP.Flushbuffer = IPCAASP;
JPCAASP.fn.fn_global = MNCAASP_sysputch;
JPCAASP.nonlocals = A68_NIL;
SOCAASP.Putch = JPCAASP;
 /* line 571: */
KPCAASP.fn.fn_global = GNCAASP_sysgetch;
KPCAASP.nonlocals = A68_NIL;
SOCAASP.Getch = KPCAASP;
LPCAASP.fn.fn_global = QOCAASP_nocontrolstream;
LPCAASP.nonlocals = A68_NIL;
SOCAASP.Control = LPCAASP;
MPCAASP_unbufsysprocs = SOCAASP;
 /* line 573: */
 /* line 574: */
NPCAASP.Readmood = A68_TRUE;
NPCAASP.Charmood = A68_FALSE;
NPCAASP.Opened = A68_TRUE;
NPCAASP.Ended = A68_FALSE;
NPCAASP.Bol = A68_TRUE;
NPCAASP.Backch = (-1);
 /* line 575: */
NPCAASP.Lasterror = 0;
NPCAASP.Buffer.Start = CNCAASP_charbuffer;
NPCAASP.Buffer.Max = 4;
NPCAASP.Buffer.Valid = 0;
NPCAASP.Buffer.Pos = CBCAASP_zeropos;
NPCAASP.Buffer.Writeback = A68_FALSE;
NPCAASP.Buffer.Flushafterput = A68_TRUE;
NPCAASP.Pos = CBCAASP_zeropos;
OPCAASP_charbufstate = NPCAASP;
 /* line 581: */
 /* line 582: */
 /* line 583: */
RPCAASP_generator( A68_FALSE, &VPCAASP );
XPCAASP = WPCAASP ;
A_VASSIGN2(XPCAASP,VPCAASP,A68_CHAR ) ;
PPCAASP.Book.Idf = VPCAASP;
 /* line 584: */
PPCAASP.Book.Reidf = A_VVAC(YPCAASP);
PPCAASP.Book.Type.Binpossible = A68_FALSE;
PPCAASP.Book.Type.Putpossible = A68_FALSE;
PPCAASP.Book.Type.Getpossible = A68_TRUE;
PPCAASP.Book.Type.Setpossible = A68_FALSE;
 /* line 585: */
PPCAASP.Book.Type.Reidfpossible = A68_FALSE;
 /* line 586: */
PPCAASP.Sysfile = FLCAASP_sysstdin;
 /* line 587: */
PPCAASP.Sys = MPCAASP_unbufsysprocs;
 /* line 589: */
PPCAASP.Io = DLCAASP_defaultioprocs;
PPCAASP.State = IECAASP_initstate;
ZPCAASP_standin = PPCAASP;
 /* line 591: */
 /* line 592: */
 /* line 593: */
CQCAASP_generator( A68_FALSE, &GQCAASP );
IQCAASP = HQCAASP ;
A_VASSIGN2(IQCAASP,GQCAASP,A68_CHAR ) ;
AQCAASP.Book.Idf = GQCAASP;
 /* line 594: */
AQCAASP.Book.Reidf = A_VVAC(JQCAASP);
AQCAASP.Book.Type.Binpossible = A68_FALSE;
AQCAASP.Book.Type.Putpossible = A68_TRUE;
AQCAASP.Book.Type.Getpossible = A68_FALSE;
AQCAASP.Book.Type.Setpossible = A68_FALSE;
 /* line 595: */
AQCAASP.Book.Type.Reidfpossible = A68_FALSE;
 /* line 596: */
AQCAASP.Sysfile = GLCAASP_sysstdout;
 /* line 597: */
AQCAASP.Sys = MPCAASP_unbufsysprocs;
 /* line 599: */
AQCAASP.Io = DLCAASP_defaultioprocs;
AQCAASP.State = IECAASP_initstate;
KQCAASP_standout = AQCAASP;
 /* line 601: */
 /* line 602: */
 /* line 603: */
NQCAASP_generator( A68_FALSE, &RQCAASP );
TQCAASP = SQCAASP ;
A_VASSIGN2(TQCAASP,RQCAASP,A68_CHAR ) ;
LQCAASP.Book.Idf = RQCAASP;
 /* line 604: */
LQCAASP.Book.Reidf = A_VVAC(UQCAASP);
LQCAASP.Book.Type.Binpossible = A68_TRUE;
LQCAASP.Book.Type.Putpossible = A68_TRUE;
LQCAASP.Book.Type.Getpossible = A68_FALSE;
LQCAASP.Book.Type.Setpossible = A68_FALSE;
 /* line 605: */
LQCAASP.Book.Type.Reidfpossible = A68_FALSE;
 /* line 606: */
LQCAASP.Sysfile = HLCAASP_sysstderr;
 /* line 607: */
LQCAASP.Sys = MPCAASP_unbufsysprocs;
 /* line 609: */
LQCAASP.Io = DLCAASP_defaultioprocs;
LQCAASP.State = IECAASP_initstate;
VQCAASP_standerror = LQCAASP;
 /* line 612: */
 /* line 623: */
 /* line 626: */
 /* line 647: */
 /* line 672: */
 /* line 678: */
 /* line 684: */
 /* line 691: */
 /* line 701: */
 /* line 708: */
 /* line 711: */
 /* line 714: */
 /* line 723: */
 /* line 731: */
 /* line 732: */
 /* line 733: */
FUCAASP.fn.fn_global = DSCAASP_buffestab;
FUCAASP.nonlocals = A68_NIL;
EUCAASP.Estab = FUCAASP;
GUCAASP.fn.fn_global = KSCAASP_buffopen;
GUCAASP.nonlocals = A68_NIL;
EUCAASP.Open = GUCAASP;
 /* line 734: */
HUCAASP.fn.fn_global = RSCAASP_buffclose;
HUCAASP.nonlocals = A68_NIL;
EUCAASP.Close = HUCAASP;
IUCAASP.fn.fn_global = WSCAASP_buffset;
IUCAASP.nonlocals = A68_NIL;
EUCAASP.Set = IUCAASP;
 /* line 735: */
JUCAASP.fn.fn_global = BTCAASP_bufflpos;
JUCAASP.nonlocals = A68_NIL;
EUCAASP.Logicalend = JUCAASP;
KUCAASP.fn.fn_global = GTCAASP_buffputbuf;
KUCAASP.nonlocals = A68_NIL;
EUCAASP.Putbuf = KUCAASP;
 /* line 736: */
LUCAASP.fn.fn_global = KTCAASP_buffgetbuf;
LUCAASP.nonlocals = A68_NIL;
EUCAASP.Getbuf = LUCAASP;
MUCAASP.fn.fn_global = LRCAASP_ensurebufspace;
MUCAASP.nonlocals = A68_NIL;
EUCAASP.Ensurebufspace = MUCAASP;
 /* line 737: */
NUCAASP.fn.fn_global = BRCAASP_sysflushbuffer;
NUCAASP.nonlocals = A68_NIL;
EUCAASP.Flushbuffer = NUCAASP;
OUCAASP.fn.fn_global = XTCAASP_buffputch;
OUCAASP.nonlocals = A68_NIL;
EUCAASP.Putch = OUCAASP;
 /* line 739: */
PUCAASP.fn.fn_global = OTCAASP_buffgetch;
PUCAASP.nonlocals = A68_NIL;
EUCAASP.Getch = PUCAASP;
QUCAASP.fn.fn_global = QOCAASP_nocontrolstream;
QUCAASP.nonlocals = A68_NIL;
EUCAASP.Control = QUCAASP;
RUCAASP_sysprocs = EUCAASP;
 /* line 745: */
TUCAASP_generator( A68_TRUE, &XUCAASP );
WUCAASP_kbdbuffer = XUCAASP;
 /* line 746: */
 /* line 748: */
 /* line 773: */
 /* line 775: */
 /* line 783: */
 /* line 790: */
 /* line 796: */
 /* line 797: */
QWCAASP.fn.fn_global = VVCAASP_kbdestab;
QWCAASP.nonlocals = A68_NIL;
PWCAASP.Sys.Estab = QWCAASP;
RWCAASP.fn.fn_global = BVCAASP_kbdopen;
RWCAASP.nonlocals = A68_NIL;
PWCAASP.Sys.Open = RWCAASP;
 /* line 798: */
SWCAASP.fn.fn_global = YVCAASP_kbdclose;
SWCAASP.nonlocals = A68_NIL;
PWCAASP.Sys.Close = SWCAASP;
PWCAASP.Sys.Set = TWCAASP;
 /* line 799: */
PWCAASP.Sys.Logicalend = UWCAASP;
PWCAASP.Sys.Putbuf = VWCAASP;
 /* line 800: */
PWCAASP.Sys.Getbuf = WWCAASP;
 /* line 801: */
XWCAASP.fn.fn_global = KWCAASP_kbdensurebufspace;
XWCAASP.nonlocals = A68_NIL;
PWCAASP.Sys.Ensurebufspace = XWCAASP;
 /* line 802: */
PWCAASP.Sys.Flushbuffer = YWCAASP;
 /* line 803: */
PWCAASP.Sys.Putch = ZWCAASP;
AXCAASP.fn.fn_global = EWCAASP_kbdgetch;
AXCAASP.nonlocals = A68_NIL;
PWCAASP.Sys.Getch = AXCAASP;
 /* line 804: */
BXCAASP.fn.fn_global = QOCAASP_nocontrolstream;
BXCAASP.nonlocals = A68_NIL;
PWCAASP.Sys.Control = BXCAASP;
PWCAASP.Type.Binpossible = A68_TRUE;
PWCAASP.Type.Putpossible = A68_FALSE;
PWCAASP.Type.Getpossible = A68_TRUE;
PWCAASP.Type.Setpossible = A68_FALSE;
 /* line 805: */
PWCAASP.Type.Reidfpossible = A68_FALSE;
PWCAASP.Defaultio = DLCAASP_defaultioprocs;
CXCAASP_kbdchannel = PWCAASP;
 /* line 809: */
 /* line 820: */
 /* line 822: */
 /* line 824: */
 /* line 830: */
 /* line 832: */
 /* line 833: */
 /* line 835: */
 /* line 837: */
 /* line 846: */
 /* line 848: */
 /* line 856: */
 /* line 857: */
 /* line 858: */
MZCAASP.fn.fn_global = TXCAASP_argestab;
MZCAASP.nonlocals = A68_NIL;
LZCAASP.Sys.Estab = MZCAASP;
NZCAASP.fn.fn_global = EXCAASP_argopen;
NZCAASP.nonlocals = A68_NIL;
LZCAASP.Sys.Open = NZCAASP;
 /* line 859: */
OZCAASP.fn.fn_global = WXCAASP_argclose;
OZCAASP.nonlocals = A68_NIL;
LZCAASP.Sys.Close = OZCAASP;
PZCAASP.fn.fn_global = ZXCAASP_argset;
PZCAASP.nonlocals = A68_NIL;
LZCAASP.Sys.Set = PZCAASP;
QZCAASP.fn.fn_global = DYCAASP_arglpos;
QZCAASP.nonlocals = A68_NIL;
LZCAASP.Sys.Logicalend = QZCAASP;
RZCAASP.fn.fn_global = HYCAASP_argputbuf;
RZCAASP.nonlocals = A68_NIL;
LZCAASP.Sys.Putbuf = RZCAASP;
 /* line 860: */
SZCAASP.fn.fn_global = LYCAASP_arggetbuf;
SZCAASP.nonlocals = A68_NIL;
LZCAASP.Sys.Getbuf = SZCAASP;
TZCAASP.fn.fn_global = RYCAASP_argensurebytes;
TZCAASP.nonlocals = A68_NIL;
LZCAASP.Sys.Ensurebufspace = TZCAASP;
 /* line 861: */
UZCAASP.fn.fn_global = OYCAASP_argflushbuffer;
UZCAASP.nonlocals = A68_NIL;
LZCAASP.Sys.Flushbuffer = UZCAASP;
VZCAASP.fn.fn_global = CZCAASP_argputch;
VZCAASP.nonlocals = A68_NIL;
LZCAASP.Sys.Putch = VZCAASP;
 /* line 862: */
WZCAASP.fn.fn_global = GZCAASP_arggetch;
WZCAASP.nonlocals = A68_NIL;
LZCAASP.Sys.Getch = WZCAASP;
 /* line 863: */
XZCAASP.fn.fn_global = QOCAASP_nocontrolstream;
XZCAASP.nonlocals = A68_NIL;
LZCAASP.Sys.Control = XZCAASP;
LZCAASP.Type.Binpossible = A68_FALSE;
LZCAASP.Type.Putpossible = A68_FALSE;
LZCAASP.Type.Getpossible = A68_TRUE;
LZCAASP.Type.Setpossible = A68_TRUE;
LZCAASP.Type.Reidfpossible = A68_FALSE;
LZCAASP.Defaultio = DLCAASP_defaultioprocs;
YZCAASP_argchannel = LZCAASP;
 /* line 867: */
 /* line 869: */
 /* line 888: */
 /* line 890: */
 /* line 896: */
 /* line 898: */
 /* line 899: */
 /* line 901: */
 /* line 903: */
 /* line 910: */
 /* line 912: */
 /* line 920: */
 /* line 921: */
 /* line 922: */
ZCDAASP.fn.fn_global = DADAASP_envestab;
ZCDAASP.nonlocals = A68_NIL;
YCDAASP.Sys.Estab = ZCDAASP;
ADDAASP.fn.fn_global = GADAASP_envopen;
ADDAASP.nonlocals = A68_NIL;
YCDAASP.Sys.Open = ADDAASP;
 /* line 923: */
BDDAASP.fn.fn_global = JBDAASP_envclose;
BDDAASP.nonlocals = A68_NIL;
YCDAASP.Sys.Close = BDDAASP;
CDDAASP.fn.fn_global = MBDAASP_envset;
CDDAASP.nonlocals = A68_NIL;
YCDAASP.Sys.Set = CDDAASP;
DDDAASP.fn.fn_global = QBDAASP_envlpos;
DDDAASP.nonlocals = A68_NIL;
YCDAASP.Sys.Logicalend = DDDAASP;
EDDAASP.fn.fn_global = UBDAASP_envputbuf;
EDDAASP.nonlocals = A68_NIL;
YCDAASP.Sys.Putbuf = EDDAASP;
 /* line 924: */
FDDAASP.fn.fn_global = YBDAASP_envgetbuf;
FDDAASP.nonlocals = A68_NIL;
YCDAASP.Sys.Getbuf = FDDAASP;
GDDAASP.fn.fn_global = ECDAASP_envensurebytes;
GDDAASP.nonlocals = A68_NIL;
YCDAASP.Sys.Ensurebufspace = GDDAASP;
 /* line 925: */
HDDAASP.fn.fn_global = BCDAASP_envflushbuffer;
HDDAASP.nonlocals = A68_NIL;
YCDAASP.Sys.Flushbuffer = HDDAASP;
IDDAASP.fn.fn_global = PCDAASP_envputch;
IDDAASP.nonlocals = A68_NIL;
YCDAASP.Sys.Putch = IDDAASP;
 /* line 926: */
JDDAASP.fn.fn_global = TCDAASP_envgetch;
JDDAASP.nonlocals = A68_NIL;
YCDAASP.Sys.Getch = JDDAASP;
 /* line 927: */
KDDAASP.fn.fn_global = QOCAASP_nocontrolstream;
KDDAASP.nonlocals = A68_NIL;
YCDAASP.Sys.Control = KDDAASP;
YCDAASP.Type.Binpossible = A68_FALSE;
YCDAASP.Type.Putpossible = A68_FALSE;
YCDAASP.Type.Getpossible = A68_TRUE;
YCDAASP.Type.Setpossible = A68_TRUE;
 /* line 928: */
YCDAASP.Type.Reidfpossible = A68_FALSE;
YCDAASP.Defaultio = DLCAASP_defaultioprocs;
LDDAASP_envchannel = YCDAASP;
 /* line 932: */
 /* line 942: */
 /* line 955: */
 /* line 957: */
 /* line 963: */
 /* line 965: */
 /* line 966: */
 /* line 968: */
 /* line 970: */
 /* line 992: */
 /* line 1001: */
 /* line 1009: */
 /* line 1010: */
 /* line 1011: */
HGDAASP.fn.fn_global = QDDAASP_memestab;
HGDAASP.nonlocals = A68_NIL;
GGDAASP.Sys.Estab = HGDAASP;
IGDAASP.fn.fn_global = AEDAASP_memopen;
IGDAASP.nonlocals = A68_NIL;
GGDAASP.Sys.Open = IGDAASP;
 /* line 1012: */
JGDAASP.fn.fn_global = JEDAASP_memclose;
JGDAASP.nonlocals = A68_NIL;
GGDAASP.Sys.Close = JGDAASP;
KGDAASP.fn.fn_global = MEDAASP_memset;
KGDAASP.nonlocals = A68_NIL;
GGDAASP.Sys.Set = KGDAASP;
 /* line 1013: */
LGDAASP.fn.fn_global = QEDAASP_memlpos;
LGDAASP.nonlocals = A68_NIL;
GGDAASP.Sys.Logicalend = LGDAASP;
MGDAASP.fn.fn_global = UEDAASP_memputbuf;
MGDAASP.nonlocals = A68_NIL;
GGDAASP.Sys.Putbuf = MGDAASP;
 /* line 1014: */
NGDAASP.fn.fn_global = YEDAASP_memgetbuf;
NGDAASP.nonlocals = A68_NIL;
GGDAASP.Sys.Getbuf = NGDAASP;
OGDAASP.fn.fn_global = EFDAASP_memensurebytes;
OGDAASP.nonlocals = A68_NIL;
GGDAASP.Sys.Ensurebufspace = OGDAASP;
 /* line 1015: */
PGDAASP.fn.fn_global = BFDAASP_memflushbuffer;
PGDAASP.nonlocals = A68_NIL;
GGDAASP.Sys.Flushbuffer = PGDAASP;
QGDAASP.fn.fn_global = UFDAASP_memputch;
QGDAASP.nonlocals = A68_NIL;
GGDAASP.Sys.Putch = QGDAASP;
 /* line 1016: */
RGDAASP.fn.fn_global = CGDAASP_memgetch;
RGDAASP.nonlocals = A68_NIL;
GGDAASP.Sys.Getch = RGDAASP;
 /* line 1017: */
SGDAASP.fn.fn_global = QOCAASP_nocontrolstream;
SGDAASP.nonlocals = A68_NIL;
GGDAASP.Sys.Control = SGDAASP;
GGDAASP.Type = EECAASP_iorabook;
GGDAASP.Defaultio = DLCAASP_defaultioprocs;
TGDAASP_memchannel = GGDAASP;
 /* line 1031: */
 /* line 1033: */
 /* line 1058: */
 /* line 1091: */
 /* line 1103: */
 /* line 1122: */
 /* line 1123: */
 /* line 1124: */
 /* line 1126: */
 /* line 1165: */
 /* line 1204: */
 /* line 1206: */
 /* line 1215: */
 /* line 1218: */
 /* line 1224: */
 /* line 1230: */
 /* line 1237: */
 /* line 1247: */
 /* line 1248: */
MQDAASP.fn.fn_global = VKDAASP_clientsockestab;
MQDAASP.nonlocals = A68_NIL;
LQDAASP.Sys.Estab = MQDAASP;
NQDAASP.fn.fn_global = VODAASP_sockopen;
NQDAASP.nonlocals = A68_NIL;
LQDAASP.Sys.Open = NQDAASP;
 /* line 1249: */
OQDAASP.fn.fn_global = YODAASP_sockclose;
OQDAASP.nonlocals = A68_NIL;
LQDAASP.Sys.Close = OQDAASP;
PQDAASP.fn.fn_global = EPDAASP_sockset;
PQDAASP.nonlocals = A68_NIL;
LQDAASP.Sys.Set = PQDAASP;
 /* line 1250: */
QQDAASP.fn.fn_global = APDAASP_socklpos;
QQDAASP.nonlocals = A68_NIL;
LQDAASP.Sys.Logicalend = QQDAASP;
LQDAASP.Sys.Putbuf = RQDAASP;
 /* line 1251: */
LQDAASP.Sys.Getbuf = SQDAASP;
 /* line 1252: */
TQDAASP.fn.fn_global = BKDAASP_sockensurebufspace;
TQDAASP.nonlocals = A68_NIL;
LQDAASP.Sys.Ensurebufspace = TQDAASP;
 /* line 1253: */
UQDAASP.fn.fn_global = TJDAASP_sockflushbuffer;
UQDAASP.nonlocals = A68_NIL;
LQDAASP.Sys.Flushbuffer = UQDAASP;
VQDAASP.fn.fn_global = PPDAASP_sockputch;
VQDAASP.nonlocals = A68_NIL;
LQDAASP.Sys.Putch = VQDAASP;
 /* line 1254: */
WQDAASP.fn.fn_global = JPDAASP_sockgetch;
WQDAASP.nonlocals = A68_NIL;
LQDAASP.Sys.Getch = WQDAASP;
 /* line 1255: */
XQDAASP.fn.fn_global = QOCAASP_nocontrolstream;
XQDAASP.nonlocals = A68_NIL;
LQDAASP.Sys.Control = XQDAASP;
 /* line 1256: */
LQDAASP.Type = GECAASP_iobook;
LQDAASP.Defaultio = DLCAASP_defaultioprocs;
YQDAASP_clientsocketchannel = LQDAASP;
 /* line 1258: */
 /* line 1259: */
ARDAASP.fn.fn_global = ANDAASP_serversockestab;
ARDAASP.nonlocals = A68_NIL;
ZQDAASP.Sys.Estab = ARDAASP;
BRDAASP.fn.fn_global = VODAASP_sockopen;
BRDAASP.nonlocals = A68_NIL;
ZQDAASP.Sys.Open = BRDAASP;
 /* line 1260: */
CRDAASP.fn.fn_global = YODAASP_sockclose;
CRDAASP.nonlocals = A68_NIL;
ZQDAASP.Sys.Close = CRDAASP;
DRDAASP.fn.fn_global = EPDAASP_sockset;
DRDAASP.nonlocals = A68_NIL;
ZQDAASP.Sys.Set = DRDAASP;
 /* line 1261: */
ERDAASP.fn.fn_global = APDAASP_socklpos;
ERDAASP.nonlocals = A68_NIL;
ZQDAASP.Sys.Logicalend = ERDAASP;
ZQDAASP.Sys.Putbuf = FRDAASP;
 /* line 1262: */
ZQDAASP.Sys.Getbuf = GRDAASP;
 /* line 1263: */
HRDAASP.fn.fn_global = BKDAASP_sockensurebufspace;
HRDAASP.nonlocals = A68_NIL;
ZQDAASP.Sys.Ensurebufspace = HRDAASP;
 /* line 1264: */
IRDAASP.fn.fn_global = TJDAASP_sockflushbuffer;
IRDAASP.nonlocals = A68_NIL;
ZQDAASP.Sys.Flushbuffer = IRDAASP;
JRDAASP.fn.fn_global = PPDAASP_sockputch;
JRDAASP.nonlocals = A68_NIL;
ZQDAASP.Sys.Putch = JRDAASP;
 /* line 1265: */
KRDAASP.fn.fn_global = JPDAASP_sockgetch;
KRDAASP.nonlocals = A68_NIL;
ZQDAASP.Sys.Getch = KRDAASP;
 /* line 1266: */
LRDAASP.fn.fn_global = QOCAASP_nocontrolstream;
LRDAASP.nonlocals = A68_NIL;
ZQDAASP.Sys.Control = LRDAASP;
 /* line 1267: */
ZQDAASP.Type = GECAASP_iobook;
ZQDAASP.Defaultio = DLCAASP_defaultioprocs;
MRDAASP_serversocketchannel = ZQDAASP;
 /* line 1269: */
 /* line 1270: */
 /* line 1271: */
 /* line 1272: */
NRDAASP.Sys = RUCAASP_sysprocs;
 /* line 1274: */
NRDAASP.Type = YDCAASP_standinbook;
NRDAASP.Defaultio = DLCAASP_defaultioprocs;
ORDAASP_standinchannel = NRDAASP;
 /* line 1276: */
 /* line 1277: */
 /* line 1278: */
 /* line 1279: */
PRDAASP.Sys = RUCAASP_sysprocs;
 /* line 1281: */
PRDAASP.Type = AECAASP_standoutbook;
PRDAASP.Defaultio = DLCAASP_defaultioprocs;
QRDAASP_standoutchannel = PRDAASP;
 /* line 1283: */
 /* line 1284: */
 /* line 1285: */
 /* line 1286: */
RRDAASP.Sys = RUCAASP_sysprocs;
 /* line 1288: */
RRDAASP.Type = CECAASP_standbackbook;
RRDAASP.Defaultio = DLCAASP_defaultioprocs;
SRDAASP_standbackchannel = RRDAASP;
 /* line 1290: */
 /* line 1291: */
 /* line 1295: */
 /* line 1303: */
 /* line 1318: */
 /* line 1319: */
 /* line 1321: */
 /* line 1324: */
 /* line 1331: */
 /* line 1338: */
 /* line 1344: */
 /* line 1347: */
 /* line 1352: */
 /* line 1354: */
 /* line 1379: */
 /* line 1404: */
 /* line 1407: */
 /* line 1418: */
 /* line 1429: */
 /* line 1440: */
 /* line 1451: */
 /* line 1474: */
 /* line 1497: */
 /* line 1520: */
 /* line 1550: */
 /* line 1553: */
 /* line 1556: */
 /* line 1559: */
 /* line 1562: */
 /* line 1585: */
 /* line 1608: */
 /* line 1631: */
 /* line 1664: */
 /* line 1672: */
 /* line 1680: */
 /* line 1688: */
 /* line 1696: */
 /* line 1698: */
 /* line 1717: */
 /* line 1737: */
 /* line 1756: */
 /* line 1774: */
 /* line 1789: */
 /* line 2142: */
 /* line 2255: */
 /* line 2257: */
 /* line 2258: */
 /* line 2262: */
 /* line 2355: */
 /* line 2430: */
 /* line 2431: */
 /* line 2433: */
 /* line 2435: */
 /* line 2480: */
/*SKIP*/;
A_PROC_EXIT(DECS transput);
} 
#undef NL
/* end of translation of transput.a68 */
