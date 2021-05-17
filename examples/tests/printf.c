/* UNAME:QGFAAGW */
#include <algol68/Asupport.h>
#define A68_31  A68_RC 
#define A68t31 A68t27            /* FLEX [] CHAR */

A_PROCEDURE(A68_VOID ,A68t32,(A68_BOOL ,A68_RC *),(A68_BOOL ,A68_RC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(BOOL) MODE27 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,16000000,A68t34);
typedef struct A68t34  A68_34 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t34 *,16000000,A68t35);
typedef struct A68t35  A68_35 ;    /* STRUCT 16000000 REF MODE34 */
struct A68t36{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_1)
};
typedef struct A68t36  A68_36 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t37,(A68_BOOL ,struct A68t36 *),(A68_BOOL ,struct A68t36 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(BOOL) MODE36 */
struct A68t38{
A68_BITS * Cp;
struct A68t34 * Env;
};
typedef struct A68t38  A68_38 ;    /* STRUCT(REF BITS,REF MODE34)  */
struct A68t39{
A68_CHAR * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_2)
A68_INT  Upb;
A_PAD_INT(PAD_3)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(REF CHAR,BITS,INT)  */
struct A68t47 ;

A_PROCEDURE(A68_INT ,A68t51,(struct A68t47 *,A68_INT ,A68_INT ,A68_INT ),(struct A68t47 *,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(REF MODE47,INT,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t52,(struct A68t47 *),(struct A68t47 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(REF MODE47) INT */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t47 *),(struct A68t47 *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF MODE47) VOID */

A_PROCEDURE(A68_BOOL ,A68t54,(struct A68t47 *,A68_INT ),(struct A68t47 *,A68_INT ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF MODE47,INT) BOOL */

A_PROCEDURE(A68_INT ,A68t55,(struct A68t47 *,A68_VC ),(struct A68t47 *,A68_VC ,void *));
typedef struct A68t55  A68_55 ;    /* PROC(REF MODE47,REF MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t56,(struct A68t47 *,A68_INT ,A68_VC *),(struct A68t47 *,A68_INT ,A68_VC *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE47,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t57,(struct A68t47 *,A68_CHAR ),(struct A68t47 *,A68_CHAR ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(REF MODE47,CHAR) BOOL */

A_PROCEDURE(A68_BOOL ,A68t46,(struct A68t47 *,A68_CHAR *),(struct A68t47 *,A68_CHAR *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(REF MODE47,REF CHAR) BOOL */
struct A68t41{
struct A68t51  Estab;
struct A68t52  Open;
struct A68t53  Close;
struct A68t54  Set;
struct A68t52  Logicalend;
struct A68t55  Putbuf;
struct A68t55  Getbuf;
struct A68t56  Ensurebufspace;
struct A68t53  Flushbuffer;
struct A68t57  Putch;
struct A68t46  Getch;
struct A68t54  Control;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(MODE51,MODE52,MODE53,MODE54,MODE52,MODE55,MODE55,MODE56,MODE53,MODE57,MODE46,MODE54)  */
struct A68t42{
A68_BOOL  Binpossible;
A_PAD_BOOL(PAD_4)
A68_BOOL  Putpossible;
A_PAD_BOOL(PAD_5)
A68_BOOL  Getpossible;
A_PAD_BOOL(PAD_6)
A68_BOOL  Setpossible;
A_PAD_BOOL(PAD_7)
A68_BOOL  Reidfpossible;
A_PAD_BOOL(PAD_8)
};
typedef struct A68t42  A68_42 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL)  */
A_ISTRUCT(A68_BITS ,8,A68t44);
typedef struct A68t44  A68_44 ;    /* STRUCT 8 BITS */

A_PROCEDURE(A68_BOOL ,A68t45,(struct A68t47 *),(struct A68t47 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE47) BOOL */
struct A68t43{
struct A68t44  Stringterm;
A_PAD_ISTRUCT(A68_44 ,PAD_9)
struct A68t45  Logicalfilemended;
struct A68t45  Physicalfilemended;
struct A68t45  Valueerrormended;
struct A68t46  Charerrormended;
};
typedef struct A68t43  A68_43 ;    /* STRUCT(MODE44,MODE45,MODE45,MODE45,MODE46)  */
struct A68t40{
struct A68t41  Sys;
struct A68t42  Type;
struct A68t43  Defaultio;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE41,MODE42,MODE43)  */
struct A68t48{
A68_VC  Idf;
A68_VC  Reidf;
struct A68t42  Type;
};
typedef struct A68t48  A68_48 ;    /* STRUCT(REF MODE26,REF MODE26,MODE42)  */
struct A68t50{
A68_VC  Start;
A68_INT  Max;
A_PAD_INT(PAD_10)
A68_INT  Valid;
A_PAD_INT(PAD_11)
A68_INT  Pos;
A_PAD_INT(PAD_12)
A68_BOOL  Writeback;
A_PAD_BOOL(PAD_13)
A68_BOOL  Flushafterput;
A_PAD_BOOL(PAD_14)
};
typedef struct A68t50  A68_50 ;    /* STRUCT(REF MODE26,INT,INT,INT,BOOL,BOOL)  */
struct A68t49{
A68_BOOL  Readmood;
A_PAD_BOOL(PAD_15)
A68_BOOL  Charmood;
A_PAD_BOOL(PAD_16)
A68_BOOL  Opened;
A_PAD_BOOL(PAD_17)
A68_BOOL  Ended;
A_PAD_BOOL(PAD_18)
A68_BOOL  Bol;
A_PAD_BOOL(PAD_19)
A68_INT  Backch;
A_PAD_INT(PAD_20)
A68_INT  Lasterror;
A_PAD_INT(PAD_21)
struct A68t50  Buffer;
A68_INT  Pos;
A_PAD_INT(PAD_22)
};
typedef struct A68t49  A68_49 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,MODE50,INT)  */
struct A68t47{
struct A68t48  Book;
A68_INT  Sysfile;
A_PAD_INT(PAD_23)
struct A68t41  Sys;
struct A68t43  Io;
struct A68t49  State;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(MODE48,INT,MODE41,MODE43,MODE49)  */
A_ROW(A68_BOOL ,A68t59,1);
typedef struct A68t59  A68_59 ;    /* [] BOOL */
A_ROW(A68_LBITS ,A68t60,1);
typedef struct A68t60  A68_60 ;    /* [] LONG BITS */
A_ROW(A68_BITS ,A68t61,1);
typedef struct A68t61  A68_61 ;    /* [] BITS */
A_ROW(A68_SBITS ,A68t62,1);
typedef struct A68t62  A68_62 ;    /* [] SHORT BITS */
A_ROW(A68_SSBITS ,A68t63,1);
typedef struct A68t63  A68_63 ;    /* [] SHORT SHORT BITS */
A_ROW(A68_LINT ,A68t64,1);
typedef struct A68t64  A68_64 ;    /* [] LONG INT */
A_ROW(A68_INT ,A68t65,1);
typedef struct A68t65  A68_65 ;    /* [] INT */
A_ROW(A68_SINT ,A68t66,1);
typedef struct A68t66  A68_66 ;    /* [] SHORT INT */
A_ROW(A68_SSINT ,A68t67,1);
typedef struct A68t67  A68_67 ;    /* [] SHORT SHORT INT */
A_ROW(A68_REAL ,A68t68,1);
typedef struct A68t68  A68_68 ;    /* [] REAL */
A_ROW(A68_SREAL ,A68t69,1);
typedef struct A68t69  A68_69 ;    /* [] SHORT REAL */
A_ROW(A68_COMPL ,A68t70,1);
typedef struct A68t70  A68_70 ;    /* [] COMPL */
A_ROW(A68_SCOMPL ,A68t71,1);
typedef struct A68t71  A68_71 ;    /* [] SHORT COMPL */
A_STRAIGHT(A68_VOID,A68t72);
typedef struct A68t72  A68_72 ;    /* STRAIGHT MODE58 */
struct A68t58 { A68_INT mode; union {
A68_CHAR * mode1;
A68_RC  mode2;
struct A68t31 * mode3;
A68_BOOL * mode4;
struct A68t59  mode5;
A68_LBITS * mode6;
struct A68t60  mode7;
A68_BITS * mode8;
struct A68t61  mode9;
A68_SBITS * mode10;
struct A68t62  mode11;
A68_SSBITS * mode12;
struct A68t63  mode13;
A68_LINT * mode14;
struct A68t64  mode15;
A68_INT * mode16;
struct A68t65  mode17;
A68_SINT * mode18;
struct A68t66  mode19;
A68_SSINT * mode20;
struct A68t67  mode21;
A68_REAL * mode22;
struct A68t68  mode23;
A68_SREAL * mode24;
struct A68t69  mode25;
A68_COMPL * mode26;
struct A68t70  mode27;
A68_SCOMPL * mode28;
struct A68t71  mode29;
struct A68t72  mode30;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t58  A68_58 ;    /* UNION(REF CHAR,REF MODE27,REF MODE31,REF BOOL,REF MODE59,REF LONG BITS,REF MODE60,REF BITS,REF MODE61,REF SHORT BITS,REF MODE62,REF SHORT SHORT BITS,REF MODE63,REF LONG INT,REF MODE64,REF INT,REF MODE65,REF SHORT INT,REF MODE66,REF SHORT SHORT INT,REF MODE67,REF REAL,REF MODE68,REF SHORT REAL,REF MODE69,REF COMPL,REF MODE70,REF SHORT COMPL,REF MODE71,MODE72)  */
A_STRAIGHT(A68_VOID,A68t74);
typedef struct A68t74  A68_74 ;    /* STRAIGHT MODE73 */
struct A68t73 { A68_INT mode; union {
A68_CHAR  mode1;
A68_RC  mode2;
A68_BOOL  mode3;
struct A68t59  mode4;
A68_LBITS  mode5;
struct A68t60  mode6;
A68_BITS  mode7;
struct A68t61  mode8;
A68_SBITS  mode9;
struct A68t62  mode10;
A68_SSBITS  mode11;
struct A68t63  mode12;
A68_LINT  mode13;
struct A68t64  mode14;
A68_INT  mode15;
struct A68t65  mode16;
A68_SINT  mode17;
struct A68t66  mode18;
A68_SSINT  mode19;
struct A68t67  mode20;
A68_REAL  mode21;
struct A68t68  mode22;
A68_SREAL  mode23;
struct A68t69  mode24;
A68_COMPL  mode25;
struct A68t70  mode26;
A68_SCOMPL  mode27;
struct A68t71  mode28;
struct A68t74  mode29;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t73  A68_73 ;    /* UNION(CHAR,MODE27,BOOL,MODE59,LONG BITS,MODE60,BITS,MODE61,SHORT BITS,MODE62,SHORT SHORT BITS,MODE63,LONG INT,MODE64,INT,MODE65,SHORT INT,MODE66,SHORT SHORT INT,MODE67,REAL,MODE68,SHORT REAL,MODE69,COMPL,MODE70,SHORT COMPL,MODE71,MODE74)  */

A_PROCEDURE(A68_REAL ,A68t75,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(REAL) REAL */

A_PROCEDURE(A68_INT ,A68t76,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE26,INT) INT */

A_PROCEDURE(A68_VOID ,A68t77,(void),(void *));
typedef struct A68t77  A68_77 ;    /* PROC VOID */

A_PROCEDURE(A68_INT ,A68t78,(A68_INT ),(A68_INT ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BITS *,A68t79,(A68_INT ,A68_BITS *),(A68_INT ,A68_BITS *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(INT,REF BITS) REF BITS */

A_PROCEDURE(A68_REAL ,A68t80,(A68_VC ),(A68_VC ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE26) REAL */

A_PROCEDURE(A68_INT ,A68t81,(A68_INT ,A68_VC ,A68_INT *),(A68_INT ,A68_VC ,A68_INT *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(INT,MODE26,REF INT) INT */

A_PROCEDURE(A68_INT ,A68t82,(A68_INT ,A68_VC ,A68_INT ),(A68_INT ,A68_VC ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(INT,MODE26,INT) INT */

A_PROCEDURE(A68_INT ,A68t83,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t84,(A68_VC ,A68_BITS *),(A68_VC ,A68_BITS *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE26,REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t85,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t86,(A68_VC ),(A68_VC ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_INT ,A68t87,(A68_VC ,A68_VC ,A68_REAL ,A68_INT ,A68_INT ),(A68_VC ,A68_VC ,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26,MODE26,REAL,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t88,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t89,(A68_BITS *,struct A68t34 *),(A68_BITS *,struct A68t34 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF BITS,REF MODE34) INT */

A_PROCEDURE(A68_INT ,A68t90,(A68_INT ,A68_CHAR *),(A68_INT ,A68_CHAR *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(INT,REF CHAR) INT */

A_PROCEDURE(A68_INT ,A68t91,(A68_INT ,A68_BITS ,A68_CHAR *),(A68_INT ,A68_BITS ,A68_CHAR *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(INT,BITS,REF CHAR) INT */

A_PROCEDURE(struct A68t34 *,A68t92,(A68_INT ),(A68_INT ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(INT) REF MODE34 */

A_PROCEDURE(A68_VOID ,A68t93,(A68_INT ),(A68_INT ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(INT) VOID */

A_PROCEDURE(struct A68t34 *,A68t94,(A68_VC ),(A68_VC ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE26) REF MODE34 */

A_PROCEDURE(A68_INT ,A68t95,(void),(void *));
typedef struct A68t95  A68_95 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t96,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE26,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t97,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE26,MODE26) INT */

A_PROCEDURE(A68_INT ,A68t98,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE34) INT */

A_PROCEDURE(A68_INT ,A68t99,(A68_INT *),(A68_INT *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(REF INT) INT */

A_PROCEDURE(A68_INT ,A68t100,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(REAL) INT */

A_PROCEDURE(A68_BITS *,A68t101,(A68_INT ),(A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT) REF BITS */

A_PROCEDURE(struct A68t34 *,A68t102,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF BITS) REF MODE34 */

A_PROCEDURE(A68_VOID ,A68t103,(A68_VC ,struct A68t39 *),(A68_VC ,struct A68t39 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26) MODE39 */
A_VECTOR(A68_BITS ,A68t104);
typedef struct A68t104  A68_104 ;    /* VECTOR [] BITS */
struct A68t105{
A68_BITS * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_24)
A68_INT  Upb;
A_PAD_INT(PAD_25)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(REF BITS,BITS,INT)  */

A_PROCEDURE(A68_VOID ,A68t106,(struct A68t104 ,struct A68t105 *),(struct A68t104 ,struct A68t105 *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(MODE104) MODE105 */
A_VECTOR(A68_INT ,A68t107);
typedef struct A68t107  A68_107 ;    /* VECTOR [] INT */
struct A68t108{
A68_INT * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_26)
A68_INT  Upb;
A_PAD_INT(PAD_27)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(REF INT,BITS,INT)  */

A_PROCEDURE(A68_VOID ,A68t109,(struct A68t107 ,struct A68t108 *),(struct A68t107 ,struct A68t108 *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE107) MODE108 */

A_PROCEDURE(struct A68t38 *,A68t110,(struct A68t77 *),(struct A68t77 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE77) REF MODE38 */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t77 ,struct A68t38 *),(struct A68t77 ,struct A68t38 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE77) MODE38 */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t93 ,struct A68t38 *),(struct A68t93 ,struct A68t38 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE93) MODE38 */

A_PROCEDURE(A68_VOID ,A68t113,(A68_INT ,A68_BITS *),(A68_INT ,A68_BITS *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(INT,REF BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t114,(struct A68t113 ,struct A68t38 *),(struct A68t113 ,struct A68t38 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE113) MODE38 */

A_PROCEDURE(A68_VOID ,A68t115,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t115 ,struct A68t38 *),(struct A68t115 ,struct A68t38 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE115) MODE38 */

A_PROCEDURE(A68_BOOL ,A68t117,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REAL) BOOL */

A_PROCEDURE(A68_VOID ,A68t118,(A68_COMPL ,A68_INT ,A68_COMPL *),(A68_COMPL ,A68_INT ,A68_COMPL *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(COMPL,INT) COMPL */

A_PROCEDURE(A68_REAL ,A68t119,(A68_REAL ,A68_INT ),(A68_REAL ,A68_INT ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(REAL,INT) REAL */

A_PROCEDURE(A68_VOID ,A68t120,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t121,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_RC ,A68_VC *),(A68_RC ,A68_VC *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE27) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t34 *,A68_VC *),(struct A68t34 *,A68_VC *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE34) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t124,(A68_VC ),(A68_VC ,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE26) REF CHAR */

A_PROCEDURE(A68_BITS *,A68t125,(struct A68t104 ),(struct A68t104 ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE104) REF BITS */

A_PROCEDURE(A68_INT *,A68t126,(struct A68t107 ),(struct A68t107 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE107) REF INT */

A_PROCEDURE(A68_CHAR *,A68t127,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE34) REF CHAR */

A_PROCEDURE(struct A68t34 *,A68t128,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF CHAR) REF MODE34 */
A_ISTRUCT(A68_CHAR ,8,A68t129);
typedef struct A68t129  A68_129 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(struct A68t129 ,A68t130,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REAL) MODE129 */
A_ISTRUCT(A68_CHAR ,4,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t131 ,A68t132,(A68_SREAL ),(A68_SREAL ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(SHORT REAL) MODE131 */

A_PROCEDURE(A68_REAL ,A68t133,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE129) REAL */

A_PROCEDURE(A68_SREAL ,A68t134,(struct A68t131 ),(struct A68t131 ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE131) SHORT REAL */

A_PROCEDURE(struct A68t129 ,A68t135,(A68_LBITS ),(A68_LBITS ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(LONG BITS) MODE129 */

A_PROCEDURE(struct A68t131 ,A68t136,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(BITS) MODE131 */
A_ISTRUCT(A68_CHAR ,2,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(struct A68t137 ,A68t138,(A68_SBITS ),(A68_SBITS ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(SHORT BITS) MODE137 */
A_ISTRUCT(A68_CHAR ,1,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 1 CHAR */

A_PROCEDURE(struct A68t139 ,A68t140,(A68_SSBITS ),(A68_SSBITS ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(SHORT SHORT BITS) MODE139 */

A_PROCEDURE(A68_LBITS ,A68t141,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE129) LONG BITS */

A_PROCEDURE(A68_BITS ,A68t142,(struct A68t131 ),(struct A68t131 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE131) BITS */

A_PROCEDURE(A68_SBITS ,A68t143,(struct A68t137 ),(struct A68t137 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE137) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t144,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE139) SHORT SHORT BITS */
A_ISTRUCT(A68_BITS ,2,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 2 BITS */

A_PROCEDURE(struct A68t145 ,A68t146,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REAL) MODE145 */

A_PROCEDURE(A68_REAL ,A68t147,(struct A68t145 ),(struct A68t145 ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE145) REAL */

A_PROCEDURE(struct A68t145 ,A68t148,(A68_LBITS ),(A68_LBITS ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(LONG BITS) MODE145 */

A_PROCEDURE(A68_LBITS ,A68t149,(struct A68t145 ),(struct A68t145 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE145) LONG BITS */

A_PROCEDURE(A68_REAL ,A68t150,(A68_VC ),(A68_VC ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE26) REAL */

A_PROCEDURE(A68_SREAL ,A68t151,(A68_VC ),(A68_VC ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE26) SHORT REAL */

A_PROCEDURE(A68_LBITS ,A68t152,(A68_VC ),(A68_VC ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE26) LONG BITS */

A_PROCEDURE(A68_BITS ,A68t153,(A68_VC ),(A68_VC ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE26) BITS */

A_PROCEDURE(A68_SBITS ,A68t154,(A68_VC ),(A68_VC ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REF MODE26) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t155,(A68_VC ),(A68_VC ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE26) SHORT SHORT BITS */

A_PROCEDURE(A68_VOID ,A68t156,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t157,(A68_BITS *,A68_VC *),(A68_BITS *,A68_VC *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF BITS) REF MODE26 */

A_PROCEDURE(A68_SSINT ,A68t158,(A68_SSINT ,A68_SSINT ),(A68_SSINT ,A68_SSINT ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(SHORT SHORT INT,SHORT SHORT INT) SHORT SHORT INT */

A_PROCEDURE(A68_SINT ,A68t159,(A68_SINT ,A68_SINT ),(A68_SINT ,A68_SINT ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(SHORT INT,SHORT INT) SHORT INT */

A_PROCEDURE(A68_LINT ,A68t160,(A68_LINT ,A68_LINT ),(A68_LINT ,A68_LINT ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(LONG INT,LONG INT) LONG INT */

A_PROCEDURE(A68_REAL ,A68t161,(A68_INT ,A68_REAL ),(A68_INT ,A68_REAL ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(INT,REAL) REAL */

A_PROCEDURE(A68_REAL ,A68t162,(A68_REAL ,A68_REAL ),(A68_REAL ,A68_REAL ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REAL,REAL) REAL */

A_PROCEDURE(A68_SREAL ,A68t163,(A68_SREAL ,A68_SREAL ),(A68_SREAL ,A68_SREAL ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(SHORT REAL,SHORT REAL) SHORT REAL */

A_PROCEDURE(A68_BITS ,A68t164,(A68_INT ),(A68_INT ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(INT) BITS */

A_PROCEDURE(A68_BOOL ,A68t165,(A68_INT ,A68_LBITS ),(A68_INT ,A68_LBITS ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT,LONG BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t166,(A68_INT ,A68_SBITS ),(A68_INT ,A68_SBITS ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(INT,SHORT BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t167,(A68_INT ,A68_SSBITS ),(A68_INT ,A68_SSBITS ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT,SHORT SHORT BITS) BOOL */

A_PROCEDURE(A68_VOID ,A68t168,(A68_LBITS ,A68_RC *),(A68_LBITS ,A68_RC *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(LONG BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t169,(A68_BITS ,A68_RC *),(A68_BITS ,A68_RC *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t170,(A68_SBITS ,A68_RC *),(A68_SBITS ,A68_RC *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(SHORT BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t171,(A68_SSBITS ,A68_RC *),(A68_SSBITS ,A68_RC *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(SHORT SHORT BITS) MODE27 */

A_PROCEDURE(A68_SREAL ,A68t172,(A68_SREAL ),(A68_SREAL ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(SHORT REAL) SHORT REAL */

A_PROCEDURE(A68_REAL ,A68t173,(A68_INT *),(A68_INT *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REF INT) REAL */

A_PROCEDURE(A68_REAL ,A68t174,(void),(void *));
typedef struct A68t174  A68_174 ;    /* PROC REAL */

A_PROCEDURE(A68_SREAL ,A68t175,(void),(void *));
typedef struct A68t175  A68_175 ;    /* PROC SHORT REAL */

A_PROCEDURE(A68_LINT ,A68t176,(A68_LINT ),(A68_LINT ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(LONG INT) LONG INT */

A_PROCEDURE(A68_SINT ,A68t177,(A68_SINT ),(A68_SINT ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(SHORT INT) SHORT INT */

A_PROCEDURE(A68_SSINT ,A68t178,(A68_SSINT ),(A68_SSINT ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(SHORT SHORT INT) SHORT SHORT INT */

A_PROCEDURE(A68_BOOL ,A68t179,(A68_CHAR ,A68_INT *,A68_RC ),(A68_CHAR ,A68_INT *,A68_RC ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(CHAR,REF INT,MODE27) BOOL */
struct A68t181 ;

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t181 ,A68_INT ,A68_RC *),(struct A68t181 ,A68_INT ,A68_RC *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE181,INT) MODE27 */
struct A68t181 { A68_INT mode; union {
A68_LINT  mode1;
A68_INT  mode2;
A68_SINT  mode3;
A68_SSINT  mode4;
A68_REAL  mode5;
A68_SREAL  mode6;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t181  A68_181 ;    /* UNION(LONG INT,INT,SHORT INT,SHORT SHORT INT,REAL,SHORT REAL)  */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t181 ,A68_INT ,A68_INT ,A68_RC *),(struct A68t181 ,A68_INT ,A68_INT ,A68_RC *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE181,INT,INT) MODE27 */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t181 ,A68_INT ,A68_INT ,A68_INT ,A68_RC *),(struct A68t181 ,A68_INT ,A68_INT ,A68_INT ,A68_RC *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE181,INT,INT,INT) MODE27 */
struct A68t185 ;

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE185) VOID */
A_VECTOR(struct A68t36 ,A68t185);
typedef struct A68t185  A68_185 ;    /* VECTOR [] MODE36 */

A_PROCEDURE(A68_INT ,A68t186,(struct A68t77 ),(struct A68t77 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE77) INT */

A_PROCEDURE(A68_INT ,A68t187,(struct A68t113 ,A68_RC ),(struct A68t113 ,A68_RC ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE113,MODE27) INT */

A_PROCEDURE(A68_VOID ,A68t188,(A68_INT ,struct A68t93 ),(A68_INT ,struct A68t93 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(INT,MODE93) VOID */

A_PROCEDURE(A68_LBITS ,A68t189,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE59) LONG BITS */

A_PROCEDURE(A68_BITS ,A68t190,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE59) BITS */

A_PROCEDURE(A68_SBITS ,A68t191,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE59) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t192,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE59) SHORT SHORT BITS */

A_PROCEDURE(A68_VOID ,A68t193,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t47 *,A68_VC *),(struct A68t47 *,A68_VC *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE47) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t47 *,A68_RC ),(struct A68t47 *,A68_RC ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE47,MODE27) VOID */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t47 *,struct A68t45 ),(struct A68t47 *,struct A68t45 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE47,MODE45) VOID */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t47 *,struct A68t46 ),(struct A68t47 *,struct A68t46 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE47,MODE46) VOID */

A_PROCEDURE(A68_INT ,A68t198,(struct A68t47 *,A68_RC ,struct A68t40 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t47 *,A68_RC ,struct A68t40 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE47,MODE27,MODE40,INT,INT,INT) INT */
struct A68t200 ;

A_PROCEDURE(A68_INT ,A68t199,(struct A68t47 *,struct A68t200 ,struct A68t40 ),(struct A68t47 *,struct A68t200 ,struct A68t40 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE47,MODE200,MODE40) INT */
struct A68t200 { A68_INT mode; union {
A68_CHAR  mode1;
A68_RC  mode2;
A68_VC  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t200  A68_200 ;    /* UNION(CHAR,MODE27,REF MODE26)  */

A_PROCEDURE(A68_INT ,A68t201,(struct A68t47 *,struct A68t40 ),(struct A68t47 *,struct A68t40 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE47,MODE40) INT */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t47 *,A68_INT ,A68_INT ,A68_INT ),(struct A68t47 *,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE47,INT,INT,INT) VOID */

A_PROCEDURE(struct A68t47 *,A68t203,(struct A68t47 *),(struct A68t47 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE47) REF MODE47 */
struct A68t205 ;

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t47 *,struct A68t205 ),(struct A68t47 *,struct A68t205 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE47,MODE205) VOID */
A_ROW(struct A68t206 ,A68t205,1);
typedef struct A68t205  A68_205 ;    /* [] MODE206 */
struct A68t206 { A68_INT mode; union {
A68_CHAR * mode1;
A68_RC  mode2;
struct A68t31 * mode3;
A68_BOOL * mode4;
struct A68t59  mode5;
A68_LBITS * mode6;
struct A68t60  mode7;
A68_BITS * mode8;
struct A68t61  mode9;
A68_SBITS * mode10;
struct A68t62  mode11;
A68_SSBITS * mode12;
struct A68t63  mode13;
A68_LINT * mode14;
struct A68t64  mode15;
A68_INT * mode16;
struct A68t65  mode17;
A68_SINT * mode18;
struct A68t66  mode19;
A68_SSINT * mode20;
struct A68t67  mode21;
A68_REAL * mode22;
struct A68t68  mode23;
A68_SREAL * mode24;
struct A68t69  mode25;
A68_COMPL * mode26;
struct A68t70  mode27;
A68_SCOMPL * mode28;
struct A68t71  mode29;
struct A68t72  mode30;
struct A68t53  mode31;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t206  A68_206 ;    /* UNION(REF CHAR,REF MODE27,REF MODE31,REF BOOL,REF MODE59,REF LONG BITS,REF MODE60,REF BITS,REF MODE61,REF SHORT BITS,REF MODE62,REF SHORT SHORT BITS,REF MODE63,REF LONG INT,REF MODE64,REF INT,REF MODE65,REF SHORT INT,REF MODE66,REF SHORT SHORT INT,REF MODE67,REF REAL,REF MODE68,REF SHORT REAL,REF MODE69,REF COMPL,REF MODE70,REF SHORT COMPL,REF MODE71,MODE72,MODE53)  */
struct A68t208 ;

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t47 *,struct A68t208 ),(struct A68t47 *,struct A68t208 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE47,MODE208) VOID */
A_ROW(struct A68t209 ,A68t208,1);
typedef struct A68t208  A68_208 ;    /* [] MODE209 */
struct A68t209 { A68_INT mode; union {
A68_CHAR  mode1;
A68_RC  mode2;
A68_BOOL  mode3;
struct A68t59  mode4;
A68_LBITS  mode5;
struct A68t60  mode6;
A68_BITS  mode7;
struct A68t61  mode8;
A68_SBITS  mode9;
struct A68t62  mode10;
A68_SSBITS  mode11;
struct A68t63  mode12;
A68_LINT  mode13;
struct A68t64  mode14;
A68_INT  mode15;
struct A68t65  mode16;
A68_SINT  mode17;
struct A68t66  mode18;
A68_SSINT  mode19;
struct A68t67  mode20;
A68_REAL  mode21;
struct A68t68  mode22;
A68_SREAL  mode23;
struct A68t69  mode24;
A68_COMPL  mode25;
struct A68t70  mode26;
A68_SCOMPL  mode27;
struct A68t71  mode28;
struct A68t74  mode29;
struct A68t53  mode30;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t209  A68_209 ;    /* UNION(CHAR,MODE27,BOOL,MODE59,LONG BITS,MODE60,BITS,MODE61,SHORT BITS,MODE62,SHORT SHORT BITS,MODE63,LONG INT,MODE64,INT,MODE65,SHORT INT,MODE66,SHORT SHORT INT,MODE67,REAL,MODE68,SHORT REAL,MODE69,COMPL,MODE70,SHORT COMPL,MODE71,MODE74,MODE53)  */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t205 ),(struct A68t205 ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE205) VOID */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE208) VOID */
struct A68t213 ;

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t47 *,struct A68t213 ),(struct A68t47 *,struct A68t213 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF MODE47,MODE213) VOID */
A_ROW(struct A68t58 ,A68t213,1);
typedef struct A68t213  A68_213 ;    /* [] MODE58 */
struct A68t215 ;

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t47 *,struct A68t215 ),(struct A68t47 *,struct A68t215 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE47,MODE215) VOID */
A_ROW(struct A68t73 ,A68t215,1);
typedef struct A68t215  A68_215 ;    /* [] MODE73 */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t213 ),(struct A68t213 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE213) VOID */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t215 ),(struct A68t215 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE215) VOID */
struct A68t218 { A68_INT mode; union {
A68_INT  mode1;
A68_CHAR  mode2;
A68_BOOL  mode3;
A68_BITS  mode4;
A68_RC  mode5;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t218  A68_218 ;    /* UNION(INT,CHAR,BOOL,BITS,MODE27)  */
A_ROW(struct A68t218 ,A68t219,1);
typedef struct A68t219  A68_219 ;    /* [] MODE218 */

A_PROCEDURE(A68_VOID ,A68t220,(A68_RC ,struct A68t219 ,A68_RC *),(A68_RC ,struct A68t219 ,A68_RC *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE27,MODE219) MODE27 */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t218 ,A68_CHAR ,A68_INT ,A68_INT ,A68_RC *),(struct A68t218 ,A68_CHAR ,A68_INT ,A68_INT ,A68_RC *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE218,CHAR,INT,INT) MODE27 */
A_ISTRUCT(A68_CHAR ,16,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_VOID ,A68t223,(A68_LINT ,A68_INT ,A68_RC *),(A68_LINT ,A68_INT ,A68_RC *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(LONG INT,INT) MODE27 */

A_PROCEDURE(A68_VOID ,A68t224,(A68_RC ,A68_INT ,A68_RC *),(A68_RC ,A68_INT ,A68_RC *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE27,INT) MODE27 */
A_ISTRUCT(A68_CHAR ,1,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_BOOL ,A68t226,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_VOID ,A68t227,(A68_RC ,struct A68t219 ),(A68_RC ,struct A68t219 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE27,MODE219) VOID */

/* --- Imports from standard --- */
extern A68_32  EAAAASP_anonymous;
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
#if !defined(SIGSTKFLT)
#define SIGSTKFLT 32
#endif
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
#if !defined(SIGPWR)
#define SIGPWR 33
#endif
/**/

#define AEAAASP_sigpwr SIGPWR
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
#define BYTESPERBITS A_size_t_INT(sizeof(A68_INT))

#define BEAAASP_bytesperbits BYTESPERBITS
/**/

#define FEAAASP_errno errno
#include <sys/socket.h>

#define CEAAASP_afunix AF_UNIX
/**/

#define DEAAASP_afinet AF_INET
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
#define INET_ATON(cp,inp) \
   A_int_INT(inet_aton(A_VC_charptr(cp),(struct in_addr *)inp))

#define UEAAASP_bsdinetaton INET_ATON
#define ISATTY(fd) A_int_INT(isatty(A_INT_int(fd)))

#define VEAAASP_bsdisatty ISATTY
#define LISTEN(s,backlog) \
   A_int_INT(listen(A_INT_int(s),A_INT_int(backlog)))

#define WEAAASP_bsdlisten LISTEN
#define SHUTDOWN(sd,direction) \
   A_int_INT(shutdown(A_INT_int(sd),A_INT_int(direction)))

#define ZEAAASP_bsdshutdown SHUTDOWN
#define SOCKET(domain,type,protocol) \
   A_int_INT(socket(A_INT_int(domain),\
                    A_INT_int(type),A_INT_int(protocol)))

#define AFAAASP_bsdsocket SOCKET
#define MKSTEMP(id) A_int_INT(mkstemp(A_VC_charptr(id)))

#define XEAAASP_bsdmkstemp MKSTEMP
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
#if defined(__MACH__)
#define ON_EXIT(p,a) (0)
#else
#define ON_EXIT(p,a) on_exit((void *)p,(void *)a)
#endif

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
extern A68_CHAR  PUAAASP_nullcharacter;
#define XUAAASP_nulch PUAAASP_nullcharacter
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define QZBAASP_prelude A_prelude
extern A68_VOID  VCFAASP_print(struct A68t208 );
/* --- End of imports from standard --- */


/* --- DECS initialisation functions --- */
extern void ANFAASP(void);   /* standard */
/* --- end of DECS initialisation functions --- */
#define XGFAAGW_defaultbase 0
static A68_222   GHFAAGW = {"0123456789abcdef"}; 
A_GISVEC(A68_VC ,HHFAAGW,GHFAAGW,16)
static A68_225   SJFAAGW = {""}; 
A_GISARR(A68_RC ,TJFAAGW,SJFAAGW,0)
typedef struct   /* env of non-global proc */
{
A68_INT  YGFAAGW_asacharacter;
A_PAD_INT(PAD_29)
} FHFAAGW_formatitem;
typedef struct   /* env of non-global proc */
{
A68_INT * WJFAAGW_i;
A68_RC  Format;
A68_CHAR * YJFAAGW_next;
} BKFAAGW_advance;
typedef struct   /* env of non-global proc */
{
A68_CHAR * YJFAAGW_next;
A68_77  ZJFAAGW_advance;
} FKFAAGW_match;
typedef struct   /* env of non-global proc */
{
A68_RC  KHFAAGW_digits;
A68_223  NHFAAGW_utoa;
} PHFAAGW_utoa;
typedef struct   /* env of non-global proc */
{
A68_CHAR  Filler;
A_PAD_CHAR(PAD_28)
} CIFAAGW_pad;

A68_VOID  WGFAAGW_sprintf(A68_RC  Format, A68_219  Items, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  EHFAAGW_formatitem(A68_218  Item, A68_CHAR  Filler, A68_INT  Width, A68_INT  Base, A68_RC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OHFAAGW_utoa(A68_LINT  N, A68_INT  B, A68_RC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BIFAAGW_pad(A68_RC  S, A68_INT  W, A68_RC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AKFAAGW_advance(void *NonLocals);

A_STATIC A68_BOOL  EKFAAGW_match(A68_CHAR  C, void *NonLocals);

A68_VOID  ZKFAAGW_printf(A68_RC  Format, A68_219  Items);

A_STATIC A68_VOID  OHFAAGW_utoa(A68_LINT  N, A68_INT  B, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PHFAAGW_utoa *)NonLocals)->x)
{ 
A68_RC  QHFAAGW;  /* clause result */
A68_INT  RHFAAGW;  /* YIELD */
A68_RC  SHFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  THFAAGW;  /* avoid structure result */
A68_LINT  UHFAAGW;  /* ADICOPS - MOD */
A68_LINT  VHFAAGW;  /* ADICOPS - MOD */
A68_INT  WHFAAGW;  /* YIELD */
A68_RC  XHFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(utoa);
 /* line 40: */
 /* line 41: */
if ( (N<(A68_LINT )B) )
{ 
 /* line 42: */
RHFAAGW = (A68_INT )N ;
QHFAAGW = A_HARR(SHFAAGW,A_R1INDEX(NL(KHFAAGW_digits),RHFAAGW),A68_CHAR );
} 
else
{ 
A_CALLPROC(NL(NHFAAGW_utoa),((N/(A68_LINT )B), B, &THFAAGW),((N/(A68_LINT )B), B, &THFAAGW,(NL(NHFAAGW_utoa)).nonlocals));
VHFAAGW = (A68_LINT )B ;
WHFAAGW = (A68_INT )A_MOD(N,VHFAAGW,UHFAAGW) ;
QHFAAGW = A_RC_PLUS(THFAAGW,A_HARR(XHFAAGW,A_R1INDEX(NL(KHFAAGW_digits),WHFAAGW),A68_CHAR ));
} 
A_PROC_EXIT(utoa);
*ReturnedValue = (QHFAAGW);
return;
} 
#undef NL

A_STATIC A68_VOID  BIFAAGW_pad(A68_RC  S, A68_INT  W, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CIFAAGW_pad *)NonLocals)->x)
{ 
A68_VC  DIFAAGW;  /* YIELD */
A68_RC  EIFAAGW;  /* OPERATORS - vector -> row */
A68_RC  FIFAAGW_padding;
A68_RC  GIFAAGW;  /* clause result */
A_PROC_ENTRY(pad);
 /* line 45: */
{ 
DIFAAGW = A_C_TIMES(NL(Filler),(A_ABS(W)-S.dim[0].upb)) ;
FIFAAGW_padding = A_VECARR(DIFAAGW,EIFAAGW);
if ( (W<0) )
{ 
GIFAAGW = A_RC_PLUS(S,FIFAAGW_padding);
} 
else
{ 
GIFAAGW = A_RC_PLUS(FIFAAGW_padding,S);
} 
} 
A_PROC_EXIT(pad);
*ReturnedValue = (GIFAAGW);
return;
} 
#undef NL
 /* line 33: */
 /* line 34: */
 /* line 35: */

A_STATIC A68_VOID  EHFAAGW_formatitem(A68_218  Item, A68_CHAR  Filler, A68_INT  Width, A68_INT  Base, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FHFAAGW_formatitem *)NonLocals)->x)
{ 
A68_VC  IHFAAGW;  /* OPERATORS - trim index */
A68_RC  JHFAAGW;  /* OPERATORS - trim index */
A68_RC  KHFAAGW_digits;
A68_223  NHFAAGW_utoa;   /* proc value of non-global proc */
A68_224  AIFAAGW_pad;   /* proc value of non-global proc */
A68_BOOL  HIFAAGW_negative;
A68_218  IIFAAGW;  /* united object - for case conformity */
A68_CHAR  JIFAAGW_c;
A68_RC  KIFAAGW;  /* clause result */
A68_RC  LIFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  MIFAAGW_s;
A68_BOOL  NIFAAGW_b;
A68_RC  OIFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  PIFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BITS  QIFAAGW_x;
A68_RC  RIFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  SIFAAGW_i;
A68_INT  TIFAAGW;  /* clause result */
A68_RC  UIFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_218  VIFAAGW;  /* united object - for case conformity */
A68_CHAR  WIFAAGW_c;
A68_RC  XIFAAGW;  /* avoid structure result */
A68_RC  YIFAAGW_s;
A68_BOOL  ZIFAAGW_b;
A68_RC  AJFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  BJFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BITS  CJFAAGW_x;
A68_INT  DJFAAGW;  /* clause result */
A68_RC  EJFAAGW;  /* avoid structure result */
A68_INT  FJFAAGW_i;
A68_INT  GJFAAGW;  /* clause result */
A68_LINT  HJFAAGW;  /* ADICOPS - ABS INT */
A68_RC  IJFAAGW;  /* avoid structure result */
A68_RC  JJFAAGW_content;
A68_RC  KJFAAGW;  /* clause result */
A68_RC  LJFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  MJFAAGW;  /* avoid structure result */
A68_RC  NJFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  OJFAAGW;  /* avoid structure result */
A68_RC  PJFAAGW;  /* avoid structure result */
A_PROC_ENTRY(formatitem);
 /* line 36: */
 /* line 37: */
{ 
IHFAAGW = HHFAAGW ;
KHFAAGW_digits = A_VTRIM(JHFAAGW,(IHFAAGW),A_VRTSCRIPT(&(JHFAAGW.dim[0]),(IHFAAGW).upb,1,(IHFAAGW).upb,0));
 /* line 39: */
A_CLOSURE( NHFAAGW_utoa, OHFAAGW_utoa, PHFAAGW_utoa );
(( PHFAAGW_utoa * ) ( NHFAAGW_utoa.nonlocals )) -> KHFAAGW_digits = KHFAAGW_digits;
(( PHFAAGW_utoa * ) ( NHFAAGW_utoa.nonlocals )) -> NHFAAGW_utoa = NHFAAGW_utoa;
 /* line 44: */
A_CLOSURE( AIFAAGW_pad, BIFAAGW_pad, CIFAAGW_pad );
(( CIFAAGW_pad * ) ( AIFAAGW_pad.nonlocals )) -> Filler = Filler;
 /* line 47: */
HIFAAGW_negative = A68_FALSE;
 /* line 48: */
 /* line 49: */
 /* line 50: */
if ( (Base==NL(YGFAAGW_asacharacter)) )
{ 
 /* line 51: */
IIFAAGW = Item ;
switch ( IIFAAGW.mode )
{ 
case 2: /* CHAR */
JIFAAGW_c = (IIFAAGW.data.mode2);
 /* line 52: */
KIFAAGW = A_HARR(LIFAAGW,JIFAAGW_c,A68_CHAR );
break;
case 5: /* [] CHAR */
MIFAAGW_s = (IIFAAGW.data.mode5);
 /* line 53: */
KIFAAGW = MIFAAGW_s;
break;
case 3: /* BOOL */
NIFAAGW_b = (IIFAAGW.data.mode3);
if ( NIFAAGW_b )
{ 
KIFAAGW = A_HARR(OIFAAGW,'1',A68_CHAR );
} 
else
{ 
 /* line 54: */
KIFAAGW = A_HARR(PIFAAGW,'0',A68_CHAR );
} 
break;
case 4: /* BITS */
QIFAAGW_x = (IIFAAGW.data.mode4);
 /* line 55: */
KIFAAGW = A_HARR(RIFAAGW,(A68_SSBITS)(A68_INT )QIFAAGW_x,A68_CHAR );
break;
case 1: /* INT */
SIFAAGW_i = (IIFAAGW.data.mode1);
if ( (SIFAAGW_i>=0) )
{ 
TIFAAGW = SIFAAGW_i;
} 
else
{ 
 /* line 56: */
TIFAAGW = (256-SIFAAGW_i);
} 
 /* line 57: */
KIFAAGW = A_HARR(UIFAAGW,(A68_SSBITS)TIFAAGW,A68_CHAR );
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
else
{ 
 /* line 58: */
VIFAAGW = Item ;
switch ( VIFAAGW.mode )
{ 
case 2: /* CHAR */
WIFAAGW_c = (VIFAAGW.data.mode2);
 /* line 59: */
A_CALLPROC(NHFAAGW_utoa,((A68_LINT )(A68_INT)(unsigned char)WIFAAGW_c, 10, &XIFAAGW),((A68_LINT )(A68_INT)(unsigned char)WIFAAGW_c, 10, &XIFAAGW,(NHFAAGW_utoa).nonlocals));
KIFAAGW = XIFAAGW;
break;
case 5: /* [] CHAR */
YIFAAGW_s = (VIFAAGW.data.mode5);
 /* line 60: */
KIFAAGW = YIFAAGW_s;
break;
case 3: /* BOOL */
ZIFAAGW_b = (VIFAAGW.data.mode3);
if ( ZIFAAGW_b )
{ 
KIFAAGW = A_HARR(AJFAAGW,'1',A68_CHAR );
} 
else
{ 
 /* line 61: */
KIFAAGW = A_HARR(BJFAAGW,'0',A68_CHAR );
} 
break;
case 4: /* BITS */
CJFAAGW_x = (VIFAAGW.data.mode4);
if ( (Base==XGFAAGW_defaultbase) )
{ 
DJFAAGW = 16;
} 
else
{ 
DJFAAGW = Base;
} 
 /* line 62: */
A_CALLPROC(NHFAAGW_utoa,((A68_LINT )(A68_LBITS )CJFAAGW_x, DJFAAGW, &EJFAAGW),((A68_LINT )(A68_LBITS )CJFAAGW_x, DJFAAGW, &EJFAAGW,(NHFAAGW_utoa).nonlocals));
KIFAAGW = EJFAAGW;
break;
case 1: /* INT */
FJFAAGW_i = (VIFAAGW.data.mode1);
{ 
HIFAAGW_negative = (FJFAAGW_i<0);
 /* line 63: */
if ( (Base==XGFAAGW_defaultbase) )
{ 
GJFAAGW = 10;
} 
else
{ 
GJFAAGW = Base;
} 
 /* line 64: */
 /* line 65: */
HJFAAGW = (A68_LINT )FJFAAGW_i ;
A_CALLPROC(NHFAAGW_utoa,(A_ABS(HJFAAGW), GJFAAGW, &IJFAAGW),(A_ABS(HJFAAGW), GJFAAGW, &IJFAAGW,(NHFAAGW_utoa).nonlocals));
KIFAAGW = IJFAAGW;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
JJFAAGW_content = KIFAAGW;
 /* line 66: */
if ( (HIFAAGW_negative&(Filler=='0')) )
{ 
 /* line 67: */
A_CALLPROC(AIFAAGW_pad,(JJFAAGW_content, (Width-1), &MJFAAGW),(JJFAAGW_content, (Width-1), &MJFAAGW,(AIFAAGW_pad).nonlocals));
KJFAAGW = A_RC_PLUS(A_HARR(LJFAAGW,'-',A68_CHAR ),MJFAAGW);
} 
else
{ 
if ( HIFAAGW_negative )
{ 
 /* line 68: */
A_CALLPROC(AIFAAGW_pad,(A_RC_PLUS(A_HARR(NJFAAGW,'-',A68_CHAR ),JJFAAGW_content), Width, &OJFAAGW),(A_RC_PLUS(A_HARR(NJFAAGW,'-',A68_CHAR ),JJFAAGW_content), Width, &OJFAAGW,(AIFAAGW_pad).nonlocals));
KJFAAGW = OJFAAGW;
} 
else
{ 
 /* line 69: */
A_CALLPROC(AIFAAGW_pad,(JJFAAGW_content, Width, &PJFAAGW),(JJFAAGW_content, Width, &PJFAAGW,(AIFAAGW_pad).nonlocals));
KJFAAGW = PJFAAGW;
} 
} 
} 
A_PROC_EXIT(formatitem);
*ReturnedValue = (KJFAAGW);
return;
} 
#undef NL

A_STATIC A68_VOID  AKFAAGW_advance(void *NonLocals)
#define NL(x) (((BKFAAGW_advance *)NonLocals)->x)
{ 
A_PROC_ENTRY(advance);
if ( ((*NL(WJFAAGW_i))>NL(Format).dim[0].upb) )
{ 
(*NL(YJFAAGW_next)) = (A68_SSBITS)0;
} 
else
{ 
(*NL(YJFAAGW_next)) = A_R1INDEX(NL(Format),(*NL(WJFAAGW_i)));
(*NL(WJFAAGW_i))+=1;
} 
A_PROC_EXIT(advance);
return;
} 
#undef NL

A_STATIC A68_BOOL  EKFAAGW_match(A68_CHAR  C, void *NonLocals)
#define NL(x) (((FKFAAGW_match *)NonLocals)->x)
{ 
A68_BOOL  GKFAAGW;  /* clause result */
A_PROC_ENTRY(match);
 /* line 80: */
if ( ((*NL(YJFAAGW_next))==C) )
{ 
A_CALLPROC(NL(ZJFAAGW_advance),(),((NL(ZJFAAGW_advance)).nonlocals));
GKFAAGW = A68_TRUE;
} 
else
{ 
GKFAAGW = A68_FALSE;
} 
A_PROC_EXIT(match);
return( GKFAAGW );
} 
#undef NL

A68_VOID  WGFAAGW_sprintf(A68_RC  Format, A68_219  Items, A68_RC  *ReturnedValue)
{ 
A68_INT  YGFAAGW_asacharacter;
A68_221  DHFAAGW_formatitem;   /* proc value of non-global proc */
A68_31  RJFAAGW;  /* avoid structure result */
A68_31  QJFAAGW_output;
A68_RC  UJFAAGW;  /* YIELD */
A68_RC  VJFAAGW;  /* OPERATORS - copy to flex */
A68_INT  WJFAAGW_i;
A68_INT  XJFAAGW_j;
A68_CHAR  YJFAAGW_next;
A68_77  ZJFAAGW_advance;   /* proc value of non-global proc */
A68_226  DKFAAGW_match;   /* proc value of non-global proc */
A68_RC  HKFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  IKFAAGW_right;
A68_CHAR  JKFAAGW;  /* clause result */
A68_CHAR  KKFAAGW_filler;
A68_INT  LKFAAGW_width;
A68_INT  MKFAAGW;  /* clause result */
A68_INT  NKFAAGW_base;
A68_RC  OKFAAGW;  /* avoid structure result */
A68_RC  PKFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  QKFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  RKFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  SKFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TKFAAGW;  /* YIELD */
A68_RC  UKFAAGW;  /* OPERATORS - vector -> row */
A68_RC  VKFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  WKFAAGW;  /* clause result */
A_PROC_ENTRY(sprintf);
 /* line 28: */
 /* line 29: */
{ 
 /* line 30: */
YGFAAGW_asacharacter = (-1);
 /* line 32: */
A_CLOSURE( DHFAAGW_formatitem, EHFAAGW_formatitem, FHFAAGW_formatitem );
(( FHFAAGW_formatitem * ) ( DHFAAGW_formatitem.nonlocals )) -> YGFAAGW_asacharacter = YGFAAGW_asacharacter;
 /* line 71: */
A_CALLPROC(EAAAASP_anonymous,(A68_TRUE, &RJFAAGW),(A68_TRUE, &RJFAAGW,(EAAAASP_anonymous).nonlocals));
QJFAAGW_output = RJFAAGW;
UJFAAGW = TJFAAGW ;
QJFAAGW_output = A_R1COPY(UJFAAGW,VJFAAGW,A68_CHAR );
 /* line 72: */
WJFAAGW_i = Format.dim[0].lwb;
 /* line 73: */
XJFAAGW_j = Items.dim[0].lwb;
 /* line 74: */
 /* line 76: */
 /* line 77: */
A_CLOSURE( ZJFAAGW_advance, AKFAAGW_advance, BKFAAGW_advance );
(( BKFAAGW_advance * ) ( ZJFAAGW_advance.nonlocals )) -> WJFAAGW_i = (&WJFAAGW_i);
(( BKFAAGW_advance * ) ( ZJFAAGW_advance.nonlocals )) -> Format = Format;
(( BKFAAGW_advance * ) ( ZJFAAGW_advance.nonlocals )) -> YJFAAGW_next = (&YJFAAGW_next);
 /* line 79: */
A_CLOSURE( DKFAAGW_match, EKFAAGW_match, FKFAAGW_match );
(( FKFAAGW_match * ) ( DKFAAGW_match.nonlocals )) -> YJFAAGW_next = (&YJFAAGW_next);
(( FKFAAGW_match * ) ( DKFAAGW_match.nonlocals )) -> ZJFAAGW_advance = ZJFAAGW_advance;
 /* line 82: */
A_CALLPROC(ZJFAAGW_advance,(),((ZJFAAGW_advance).nonlocals));
 /* line 83: */
for ( ;; )
{ 
 /* line 84: */
if ( !(!A_CALLPROC(DKFAAGW_match,((A68_SSBITS)0),((A68_SSBITS)0,(DKFAAGW_match).nonlocals))) ) break;
 /* line 85: */
if ( A_CALLPROC(DKFAAGW_match,('%'),('%',(DKFAAGW_match).nonlocals)) )
{ 
 /* line 86: */
if ( A_CALLPROC(DKFAAGW_match,('%'),('%',(DKFAAGW_match).nonlocals)) )
{ 
 /* line 87: */
A_RC_PLUSAB(QJFAAGW_output,A_HARR(HKFAAGW,'%',A68_CHAR ));
} 
else
{ 
 /* line 88: */
if ( (XJFAAGW_j<=Items.dim[0].upb) )
{ 
IKFAAGW_right = A_CALLPROC(DKFAAGW_match,('-'),('-',(DKFAAGW_match).nonlocals));
 /* line 89: */
if ( A_CALLPROC(DKFAAGW_match,('0'),('0',(DKFAAGW_match).nonlocals)) )
{ 
JKFAAGW = '0';
} 
else
{ 
JKFAAGW = ' ';
} 
KKFAAGW_filler = JKFAAGW;
 /* line 90: */
LKFAAGW_width = 0;
 /* line 91: */
for ( ;; )
{ 
 /* line 92: */
if ( !(((YJFAAGW_next>='0')&(YJFAAGW_next<='9'))) ) break;
LKFAAGW_width = ((LKFAAGW_width*10)+((A68_INT)(unsigned char)YJFAAGW_next-(A68_INT)(unsigned char)'0'));
 /* line 93: */
 /* line 94: */
A_CALLPROC(ZJFAAGW_advance,(),((ZJFAAGW_advance).nonlocals));
}
 /* line 95: */
if ( IKFAAGW_right )
{ 
LKFAAGW_width = (-LKFAAGW_width);
} 
 /* line 96: */
 /* line 97: */
if ( A_CALLPROC(DKFAAGW_match,('d'),('d',(DKFAAGW_match).nonlocals)) )
{ 
MKFAAGW = 10;
} 
else
{ 
 /* line 98: */
if ( A_CALLPROC(DKFAAGW_match,('x'),('x',(DKFAAGW_match).nonlocals)) )
{ 
MKFAAGW = 16;
} 
else
{ 
 /* line 99: */
if ( A_CALLPROC(DKFAAGW_match,('b'),('b',(DKFAAGW_match).nonlocals)) )
{ 
MKFAAGW = 2;
} 
else
{ 
 /* line 100: */
if ( A_CALLPROC(DKFAAGW_match,('s'),('s',(DKFAAGW_match).nonlocals)) )
{ 
MKFAAGW = XGFAAGW_defaultbase;
} 
else
{ 
 /* line 101: */
if ( A_CALLPROC(DKFAAGW_match,('c'),('c',(DKFAAGW_match).nonlocals)) )
{ 
MKFAAGW = YGFAAGW_asacharacter;
} 
else
{ 
A_CALLPROC(ZJFAAGW_advance,(),((ZJFAAGW_advance).nonlocals));
MKFAAGW = XGFAAGW_defaultbase;
} 
} 
} 
} 
} 
NKFAAGW_base = MKFAAGW;
 /* line 102: */
A_CALLPROC(DHFAAGW_formatitem,(A_R1INDEX(Items,XJFAAGW_j), KKFAAGW_filler, LKFAAGW_width, NKFAAGW_base, &OKFAAGW),(A_R1INDEX(Items,XJFAAGW_j), KKFAAGW_filler, LKFAAGW_width, NKFAAGW_base, &OKFAAGW,(DHFAAGW_formatitem).nonlocals));
A_RC_PLUSAB(QJFAAGW_output,OKFAAGW);
 /* line 103: */
 /* line 104: */
 /* line 105: */
XJFAAGW_j+=1;
} 
else
{ 
 /* line 106: */
 /* line 107: */
A_RC_PLUSAB(QJFAAGW_output,A_HARR(PKFAAGW,'%',A68_CHAR ));
} 
} 
} 
else
{ 
 /* line 108: */
if ( A_CALLPROC(DKFAAGW_match,('\\'),('\\',(DKFAAGW_match).nonlocals)) )
{ 
if ( A_CALLPROC(DKFAAGW_match,('n'),('n',(DKFAAGW_match).nonlocals)) )
{ 
 /* line 109: */
A_RC_PLUSAB(QJFAAGW_output,A_HARR(QKFAAGW,(A68_SSBITS)10,A68_CHAR ));
} 
else
{ 
if ( A_CALLPROC(DKFAAGW_match,('t'),('t',(DKFAAGW_match).nonlocals)) )
{ 
 /* line 110: */
A_RC_PLUSAB(QJFAAGW_output,A_HARR(RKFAAGW,(A68_SSBITS)8,A68_CHAR ));
} 
else
{ 
if ( A_CALLPROC(DKFAAGW_match,('\\'),('\\',(DKFAAGW_match).nonlocals)) )
{ 
 /* line 111: */
A_RC_PLUSAB(QJFAAGW_output,A_HARR(SKFAAGW,'\\',A68_CHAR ));
} 
else
{ 
TKFAAGW = A_C_PLUS('\\',YJFAAGW_next) ;
A_RC_PLUSAB(QJFAAGW_output,A_VECARR(TKFAAGW,UKFAAGW));
 /* line 112: */
 /* line 113: */
 /* line 114: */
A_CALLPROC(ZJFAAGW_advance,(),((ZJFAAGW_advance).nonlocals));
} 
} 
} 
} 
else
{ 
A_RC_PLUSAB(QJFAAGW_output,A_HARR(VKFAAGW,YJFAAGW_next,A68_CHAR ));
 /* line 115: */
 /* line 116: */
 /* line 117: */
A_CALLPROC(ZJFAAGW_advance,(),((ZJFAAGW_advance).nonlocals));
} 
} 
}
 /* line 118: */
 /* line 119: */
WKFAAGW = QJFAAGW_output;
} 
A_PROC_EXIT(sprintf);
*ReturnedValue = (WKFAAGW);
return;
} 
#undef NL

A68_VOID  ZKFAAGW_printf(A68_RC  Format, A68_219  Items)
{ 
A68_RC  ALFAAGW;  /* avoid structure result */
A68_209  BLFAAGW;  /* OPERATORS - mode -> union mode */
A68_208  CLFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(printf);
 /* line 123: */
 /* line 126: */
WGFAAGW_sprintf( Format, Items, &ALFAAGW );
VCFAASP_print(A_HARR(CLFAAGW,A_UNITE(BLFAAGW,mode2,2,ALFAAGW),A68_209 ));
A_PROC_EXIT(printf);
return;
} 
#undef NL
 /* line 1: */
 /* line 24: */
void RGFAAGW(void)   /* initialise DECS printf */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/usr/bin/a68toc","-s","-v","-lib","/usr/share/algol68toc","-dir","/usr/share/algol68toc","-dir","lib/m","-uname","seedfile","printf.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/usr/share/algol68toc/standard.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
ANFAASP();   /* USE standard */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/examples/tests/printf.a68";
A_config.translation_time = "Thu May  6 00:53:43 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "QGFAAGW (from seed file) ";
A_config.spec_change_time = "Thu May  6 00:53:43 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS printf);
 /* line 27: */
 /* line 122: */
 /* line 131: */
A_PROC_EXIT(DECS printf);
} 
#undef NL
/* end of translation of printf.a68 */
