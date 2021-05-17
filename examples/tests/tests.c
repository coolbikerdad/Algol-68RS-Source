/* UNAME:GWFAAGW */
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
#define A68_218  A68_63 
#define A68t218 A68t63            /* FLEX [] SHORT SHORT BITS */

A_PROCEDURE(A68_VOID ,A68t219,(A68_BOOL ,struct A68t63 *),(A68_BOOL ,struct A68t63 *,void *));
typedef struct A68t219  A68_219 ;    /* PROC(BOOL) MODE63 */
struct A68t221 ;

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t221 ,struct A68t63 *),(struct A68t221 ,struct A68t63 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE221) MODE63 */
A_ROW(struct A68t222 ,A68t221,1);
typedef struct A68t221  A68_221 ;    /* [] MODE222 */
struct A68t222 { A68_INT mode; union {
struct A68t63  mode1;
A68_CHAR  mode2;
A68_INT  mode3;
A68_BITS  mode4;
A68_RC  mode5;
struct A68t65  mode6;
struct A68t61  mode7;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t222  A68_222 ;    /* UNION(MODE63,CHAR,INT,BITS,MODE27,MODE65,MODE61)  */

A_PROCEDURE(A68_INT ,A68t223,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE63) INT */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t63 ,struct A68t65 *),(struct A68t63 ,struct A68t65 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE63) MODE65 */

A_PROCEDURE(A68_VOID ,A68t225,(A68_RC ,struct A68t63 *),(A68_RC ,struct A68t63 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE27) MODE63 */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t63 ,A68_RC *),(struct A68t63 ,A68_RC *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE63) MODE27 */

A_PROCEDURE(A68_BOOL ,A68t227,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE63) BOOL */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t63 ,struct A68t63 ,struct A68t63 *),(struct A68t63 ,struct A68t63 ,struct A68t63 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE63,MODE63) MODE63 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t218 *,struct A68t63 ),(struct A68t218 *,struct A68t63 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE218,MODE63) VOID */
struct A68t231 ;

A_PROCEDURE(A68_VOID ,A68t230,(A68_RC ,struct A68t231 ),(A68_RC ,struct A68t231 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE27,MODE231) VOID */
A_ROW(struct A68t232 ,A68t231,1);
typedef struct A68t231  A68_231 ;    /* [] MODE232 */
struct A68t232 { A68_INT mode; union {
A68_INT  mode1;
A68_CHAR  mode2;
A68_BOOL  mode3;
A68_BITS  mode4;
A68_RC  mode5;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t232  A68_232 ;    /* UNION(INT,CHAR,BOOL,BITS,MODE27)  */

A_PROCEDURE(A68_VOID ,A68t233,(A68_RC ,struct A68t231 ,A68_RC *),(A68_RC ,struct A68t231 ,A68_RC *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE27,MODE231) MODE27 */

A_PROCEDURE(A68_BITS ,A68t234,(A68_SSBITS ),(A68_SSBITS ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(SHORT SHORT BITS) BITS */

A_PROCEDURE(A68_INT ,A68t235,(A68_SSBITS ),(A68_SSBITS ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(SHORT SHORT BITS) INT */

A_PROCEDURE(A68_CHAR ,A68t236,(A68_SSBITS ),(A68_SSBITS ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(SHORT SHORT BITS) CHAR */

A_PROCEDURE(A68_SSBITS ,A68t237,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(BITS) SHORT SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t238,(A68_INT ),(A68_INT ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(INT) SHORT SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t239,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(CHAR) SHORT SHORT BITS */
A_ISTRUCT(struct A68t222 ,9,A68t240);
typedef struct A68t240  A68_240 ;    /* STRUCT 9 MODE222 */
A_ISTRUCT(A68_CHAR ,6,A68t241);
typedef struct A68t241  A68_241 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t242);
typedef struct A68t242  A68_242 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(struct A68t232 ,3,A68t243);
typedef struct A68t243  A68_243 ;    /* STRUCT 3 MODE232 */
A_ISTRUCT(A68_CHAR ,5,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t245,(A68_RC ,struct A68t231 ,A68_RC ),(A68_RC ,struct A68t231 ,A68_RC ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE27,MODE231,MODE27) VOID */
A_ISTRUCT(struct A68t209 ,5,A68t246);
typedef struct A68t246  A68_246 ;    /* STRUCT 5 MODE209 */
#define A68_247  A68_231 
#define A68t247 A68t231            /* FLEX [] MODE232 */

A_PROCEDURE(A68_VOID ,A68t248,(A68_INT ,struct A68t247 *,struct A68t73 *),(A68_INT ,struct A68t247 *,struct A68t73 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(INT,REF MODE247) MODE73 */
A_ISTRUCT(struct A68t209 ,3,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 3 MODE209 */
A_ISTRUCT(struct A68t209 ,4,A68t250);
typedef struct A68t250  A68_250 ;    /* STRUCT 4 MODE209 */
A_ISTRUCT(A68_CHAR ,1,A68t251);
typedef struct A68t251  A68_251 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t253);
typedef struct A68t253  A68_253 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t254);
typedef struct A68t254  A68_254 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t255);
typedef struct A68t255  A68_255 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 28 CHAR */

/* --- Imports from bytes --- */
extern A68_BITS  AGFAAGW_bin(A68_SSBITS );
extern A68_INT  DGFAAGW_abs(A68_SSBITS );
/* --- End of imports from bytes --- */


/* --- Imports from printf --- */
extern A68_VOID  ZKFAAGW_printf(A68_RC ,struct A68t231 );
extern A68_VOID  WGFAAGW_sprintf(A68_RC ,struct A68t231 ,A68_RC *);
/* --- End of imports from printf --- */


/* --- Imports from utf8 --- */
extern A68_VOID  SQFAAGW_utf8(struct A68t221 ,A68_63 *);
extern A68_VOID  RPFAAGW_unpackutf8(struct A68t63 ,A68_65 *);
extern A68_VOID  MVFAAGW_u(A68_RC ,A68_63 *);
extern A68_VOID  IVFAAGW_repr(struct A68t63 ,A68_RC *);
/* --- End of imports from utf8 --- */


/* --- Imports from standard --- */
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
extern A68_VOID  ZWBAASP_exit(A68_INT );
extern A68_VOID  XTDAASP_newline(struct A68t47 *);
extern A68_VOID  VCFAASP_print(struct A68t208 );
/* --- End of imports from standard --- */


/* --- DECS initialisation functions --- */
extern void WFFAAGW(void);   /* bytes */
extern void RGFAAGW(void);   /* printf */
extern void DLFAAGW(void);   /* utf8 */
extern void ANFAASP(void);   /* standard */
/* --- end of DECS initialisation functions --- */
static A68_131   SWFAAGW = {"A\303\277B"}; 
A_GISARR(A68_RC ,TWFAAGW,SWFAAGW,4)
static A68_63  GXFAAGW_u;
static A68_SSBITS  HXFAAGW_b;
static A68_241   KXFAAGW = {"%08b\\n"}; 
A_GISARR(A68_RC ,OXFAAGW,KXFAAGW,6)
static A68_INT  PXFAAGW_cp;
static A68_63  WXFAAGW_bytes;
static A68_242   XXFAAGW = {"%10d %06x %s"}; 
A_GISARR(A68_RC ,EYFAAGW,XXFAAGW,12)
static A68_SSBITS  FYFAAGW_b;
static A68_244   IYFAAGW = {" %08b"}; 
A_GISARR(A68_RC ,MYFAAGW,IYFAAGW,5)
static A68_131   YYFAAGW = {"\", ("}; 
A_GISARR(A68_RC ,ZYFAAGW,YYFAAGW,4)
static A68_137   OZFAAGW = {") "}; 
A_GISARR(A68_RC ,PZFAAGW,OZFAAGW,2)
static A68_131   WZFAAGW = {" = \""}; 
A_GISARR(A68_RC ,XZFAAGW,WZFAAGW,4)
static A68_244   IAGAAGW = {" /= \""}; 
A_GISARR(A68_RC ,JAGAAGW,IAGAAGW,5)
static A68_244   SAGAAGW = {"hello"}; 
static A68_251   TAGAAGW = {""}; 
static A68_244   UAGAAGW = {"hello"}; 
A_GISARR(A68_RC ,VAGAAGW,UAGAAGW,5)
A_GISARR(A68_RC ,WAGAAGW,TAGAAGW,0)
A_GISARR(A68_RC ,ABGAAGW,SAGAAGW,5)
static A68_251   BBGAAGW = {""}; 
static A68_251   CBGAAGW = {""}; 
static A68_251   DBGAAGW = {""}; 
A_GISARR(A68_RC ,EBGAAGW,DBGAAGW,0)
A_GISARR(A68_RC ,FBGAAGW,CBGAAGW,0)
A_GISARR(A68_RC ,JBGAAGW,BBGAAGW,0)
static A68_137   KBGAAGW = {"%%"}; 
static A68_251   LBGAAGW = {""}; 
A_GISARR(A68_RC ,NBGAAGW,LBGAAGW,0)
A_GISARR(A68_RC ,RBGAAGW,KBGAAGW,2)
static A68_137   SBGAAGW = {"%d"}; 
static A68_137   TBGAAGW = {"-1"}; 
A_GISARR(A68_RC ,UBGAAGW,TBGAAGW,2)
A_GISARR(A68_RC ,YBGAAGW,SBGAAGW,2)
static A68_137   ZBGAAGW = {"%d"}; 
A_GISARR(A68_RC ,ECGAAGW,ZBGAAGW,2)
static A68_137   FCGAAGW = {"%d"}; 
A_GISARR(A68_RC ,KCGAAGW,FCGAAGW,2)
static A68_137   LCGAAGW = {"%d"}; 
static A68_131   MCGAAGW = {"1337"}; 
A_GISARR(A68_RC ,NCGAAGW,MCGAAGW,4)
A_GISARR(A68_RC ,RCGAAGW,LCGAAGW,2)
static A68_137   SCGAAGW = {"%d"}; 
static A68_244   TCGAAGW = {"-1337"}; 
A_GISARR(A68_RC ,UCGAAGW,TCGAAGW,5)
A_GISARR(A68_RC ,YCGAAGW,SCGAAGW,2)
static A68_137   ZCGAAGW = {"%d"}; 
static A68_252   ADGAAGW = {"2147483647"}; 
A_GISARR(A68_RC ,BDGAAGW,ADGAAGW,10)
A_GISARR(A68_RC ,FDGAAGW,ZCGAAGW,2)
static A68_137   GDGAAGW = {"%d"}; 
static A68_253   HDGAAGW = {"-2147483648"}; 
A_GISARR(A68_RC ,IDGAAGW,HDGAAGW,11)
A_GISARR(A68_RC ,MDGAAGW,GDGAAGW,2)
static A68_137   NDGAAGW = {"%d"}; 
static A68_252   ODGAAGW = {"2147483647"}; 
A_GISARR(A68_RC ,PDGAAGW,ODGAAGW,10)
A_GISARR(A68_RC ,TDGAAGW,NDGAAGW,2)
static A68_137   UDGAAGW = {"%d"}; 
static A68_252   VDGAAGW = {"4294967295"}; 
A_GISARR(A68_RC ,WDGAAGW,VDGAAGW,10)
A_GISARR(A68_RC ,AEGAAGW,UDGAAGW,2)
static A68_254   BEGAAGW = {"%6d"}; 
static A68_241   CEGAAGW = {"  1337"}; 
A_GISARR(A68_RC ,DEGAAGW,CEGAAGW,6)
A_GISARR(A68_RC ,HEGAAGW,BEGAAGW,3)
static A68_131   IEGAAGW = {"%-6d"}; 
static A68_241   JEGAAGW = {"1337  "}; 
A_GISARR(A68_RC ,KEGAAGW,JEGAAGW,6)
A_GISARR(A68_RC ,OEGAAGW,IEGAAGW,4)
static A68_131   PEGAAGW = {"%06d"}; 
static A68_241   QEGAAGW = {"001337"}; 
A_GISARR(A68_RC ,REGAAGW,QEGAAGW,6)
A_GISARR(A68_RC ,VEGAAGW,PEGAAGW,4)
static A68_131   WEGAAGW = {"%06d"}; 
static A68_241   XEGAAGW = {"-01337"}; 
A_GISARR(A68_RC ,YEGAAGW,XEGAAGW,6)
A_GISARR(A68_RC ,CFGAAGW,WEGAAGW,4)
static A68_137   DFGAAGW = {"%x"}; 
A_GISARR(A68_RC ,IFGAAGW,DFGAAGW,2)
static A68_137   JFGAAGW = {"%x"}; 
A_GISARR(A68_RC ,OFGAAGW,JFGAAGW,2)
static A68_131   PFGAAGW = {"%08x"}; 
static A68_129   QFGAAGW = {"00abcdef"}; 
A_GISARR(A68_RC ,RFGAAGW,QFGAAGW,8)
A_GISARR(A68_RC ,VFGAAGW,PFGAAGW,4)
static A68_137   WFGAAGW = {"%x"}; 
static A68_129   XFGAAGW = {"ffffffff"}; 
A_GISARR(A68_RC ,YFGAAGW,XFGAAGW,8)
A_GISARR(A68_RC ,CGGAAGW,WFGAAGW,2)
static A68_137   DGGAAGW = {"%x"}; 
static A68_129   EGGAAGW = {"ffffffff"}; 
A_GISARR(A68_RC ,FGGAAGW,EGGAAGW,8)
A_GISARR(A68_RC ,JGGAAGW,DGGAAGW,2)
static A68_137   KGGAAGW = {"%b"}; 
static A68_255   LGGAAGW = {"11111111111111111111111111111111"}; 
A_GISARR(A68_RC ,MGGAAGW,LGGAAGW,32)
A_GISARR(A68_RC ,QGGAAGW,KGGAAGW,2)
static A68_137   RGGAAGW = {"%b"}; 
A_GISARR(A68_RC ,WGGAAGW,RGGAAGW,2)
static A68_137   XGGAAGW = {"%b"}; 
A_GISARR(A68_RC ,CHGAAGW,XGGAAGW,2)
static A68_137   DHGAAGW = {"%b"}; 
static A68_241   EHGAAGW = {"110011"}; 
A_GISARR(A68_RC ,FHGAAGW,EHGAAGW,6)
A_GISARR(A68_RC ,JHGAAGW,DHGAAGW,2)
static A68_131   KHGAAGW = {"%08b"}; 
static A68_129   LHGAAGW = {"00110011"}; 
A_GISARR(A68_RC ,MHGAAGW,LHGAAGW,8)
A_GISARR(A68_RC ,QHGAAGW,KHGAAGW,4)
static A68_254   RHGAAGW = {"%8b"}; 
static A68_129   SHGAAGW = {"  110011"}; 
A_GISARR(A68_RC ,THGAAGW,SHGAAGW,8)
A_GISARR(A68_RC ,XHGAAGW,RHGAAGW,3)
static A68_131   YHGAAGW = {"%05x"}; 
static A68_244   ZHGAAGW = {"01234"}; 
A_GISARR(A68_RC ,AIGAAGW,ZHGAAGW,5)
A_GISARR(A68_RC ,EIGAAGW,YHGAAGW,4)
static A68_131   FIGAAGW = {"%05x"}; 
static A68_244   GIGAAGW = {"00000"}; 
A_GISARR(A68_RC ,HIGAAGW,GIGAAGW,5)
A_GISARR(A68_RC ,LIGAAGW,FIGAAGW,4)
static A68_131   MIGAAGW = {"%05x"}; 
static A68_244   NIGAAGW = {"01ee7"}; 
A_GISARR(A68_RC ,OIGAAGW,NIGAAGW,5)
A_GISARR(A68_RC ,SIGAAGW,MIGAAGW,4)
static A68_131   TIGAAGW = {"%05x"}; 
static A68_129   UIGAAGW = {"dead1ee7"}; 
A_GISARR(A68_RC ,VIGAAGW,UIGAAGW,8)
A_GISARR(A68_RC ,ZIGAAGW,TIGAAGW,4)
static A68_137   AJGAAGW = {"%x"}; 
static A68_129   BJGAAGW = {"dead1ee7"}; 
A_GISARR(A68_RC ,CJGAAGW,BJGAAGW,8)
A_GISARR(A68_RC ,GJGAAGW,AJGAAGW,2)
static A68_137   HJGAAGW = {"%s"}; 
static A68_244   IJGAAGW = {"hello"}; 
static A68_244   JJGAAGW = {"hello"}; 
A_GISARR(A68_RC ,KJGAAGW,JJGAAGW,5)
A_GISARR(A68_RC ,LJGAAGW,IJGAAGW,5)
A_GISARR(A68_RC ,PJGAAGW,HJGAAGW,2)
static A68_131   QJGAAGW = {"%10s"}; 
static A68_244   RJGAAGW = {"hello"}; 
static A68_252   SJGAAGW = {"     hello"}; 
A_GISARR(A68_RC ,TJGAAGW,SJGAAGW,10)
A_GISARR(A68_RC ,UJGAAGW,RJGAAGW,5)
A_GISARR(A68_RC ,YJGAAGW,QJGAAGW,4)
static A68_244   ZJGAAGW = {"%-10s"}; 
static A68_244   AKGAAGW = {"hello"}; 
static A68_252   BKGAAGW = {"hello     "}; 
A_GISARR(A68_RC ,CKGAAGW,BKGAAGW,10)
A_GISARR(A68_RC ,DKGAAGW,AKGAAGW,5)
A_GISARR(A68_RC ,HKGAAGW,ZJGAAGW,5)
static A68_131   IKGAAGW = {"%-2s"}; 
static A68_244   JKGAAGW = {"hello"}; 
static A68_244   KKGAAGW = {"hello"}; 
A_GISARR(A68_RC ,LKGAAGW,KKGAAGW,5)
A_GISARR(A68_RC ,MKGAAGW,JKGAAGW,5)
A_GISARR(A68_RC ,QKGAAGW,IKGAAGW,4)
static A68_254   RKGAAGW = {"%2s"}; 
static A68_244   SKGAAGW = {"hello"}; 
static A68_244   TKGAAGW = {"hello"}; 
A_GISARR(A68_RC ,UKGAAGW,TKGAAGW,5)
A_GISARR(A68_RC ,VKGAAGW,SKGAAGW,5)
A_GISARR(A68_RC ,ZKGAAGW,RKGAAGW,3)
static A68_137   ALGAAGW = {"%s"}; 
static A68_254   BLGAAGW = {"123"}; 
A_GISARR(A68_RC ,CLGAAGW,BLGAAGW,3)
A_GISARR(A68_RC ,GLGAAGW,ALGAAGW,2)
static A68_137   HLGAAGW = {"%s"}; 
static A68_131   ILGAAGW = {"102a"}; 
A_GISARR(A68_RC ,JLGAAGW,ILGAAGW,4)
A_GISARR(A68_RC ,NLGAAGW,HLGAAGW,2)
#define OLGAAGW_a 'A'
static A68_137   PLGAAGW = {"%c"}; 
A_GISARR(A68_RC ,TLGAAGW,PLGAAGW,2)
static A68_137   ULGAAGW = {"%c"}; 
A_GISARR(A68_RC ,ZLGAAGW,ULGAAGW,2)
static A68_137   AMGAAGW = {"%c"}; 
A_GISARR(A68_RC ,FMGAAGW,AMGAAGW,2)
static A68_137   GMGAAGW = {"%c"}; 
A_GISARR(A68_RC ,LMGAAGW,GMGAAGW,2)
static A68_137   MMGAAGW = {"%c"}; 
A_GISARR(A68_RC ,RMGAAGW,MMGAAGW,2)
static A68_137   SMGAAGW = {"%c"}; 
A_GISARR(A68_RC ,XMGAAGW,SMGAAGW,2)
static A68_254   YMGAAGW = {"%4c"}; 
static A68_131   ZMGAAGW = {"   a"}; 
A_GISARR(A68_RC ,ANGAAGW,ZMGAAGW,4)
A_GISARR(A68_RC ,ENGAAGW,YMGAAGW,3)
static A68_131   FNGAAGW = {"%-4c"}; 
static A68_131   GNGAAGW = {"a   "}; 
A_GISARR(A68_RC ,HNGAAGW,GNGAAGW,4)
A_GISARR(A68_RC ,LNGAAGW,FNGAAGW,4)
static A68_256   MNGAAGW = {"int: %d, bits: %04x, bool: %b\\n"}; 
static A68_257   UNGAAGW = {"int: 10, bits: 1337, bool: 1"}; 
A_GISVEC(A68_VC ,VNGAAGW,UNGAAGW,28)
A_GISARR(A68_RC ,AOGAAGW,MNGAAGW,31)

A_STATIC A68_VOID  TYFAAGW_test(A68_RC  Template, A68_231  Items, A68_RC  Expected);

A_STATIC A68_VOID  EZFAAGW_straight(A68_INT  CZFAAGW_anonymous, A68_247 * DZFAAGW_anonymous, A68_73  *ReturnedValue);

A_STATIC A68_VOID  EZFAAGW_straight(A68_INT  CZFAAGW_anonymous, A68_247 * DZFAAGW_anonymous, A68_73  *ReturnedValue)
{ 
A68_73  FZFAAGW;  /* clause result */
A68_INT  GZFAAGW;  /* YIELD */
A68_73  HZFAAGW;  /* OPERATORS - unite union */
A68_232  IZFAAGW;  /* YIELD */
GZFAAGW = (((*DZFAAGW_anonymous).dim[0].lwb-1)+CZFAAGW_anonymous) ;
IZFAAGW = (*(&A_R1INDEX(*DZFAAGW_anonymous,GZFAAGW))) ;
FZFAAGW = A_UTABUNITE(HZFAAGW,"\000\017\001\003\007\002",IZFAAGW);
*ReturnedValue = (FZFAAGW);
return;
} 
#undef NL

A_STATIC A68_VOID  TYFAAGW_test(A68_RC  Template, A68_231  Items, A68_RC  Expected)
{ 
A68_246  UYFAAGW;  /* collateral clause result */
A68_209  VYFAAGW;  /* OPERATORS - mode -> union mode */
A68_CHAR  WYFAAGW;  /* YIELD */
A68_209  XYFAAGW;  /* OPERATORS - mode -> union mode */
A68_209  AZFAAGW;  /* OPERATORS - mode -> union mode */
A68_RC  BZFAAGW;  /* YIELD */
A68_231 * JZFAAGW;  /* OPERATORS - prestraight */
A68_74  KZFAAGW;  /* OPERATORS - straighten */
A68_248  LZFAAGW;  /* procedure value */
A68_209  MZFAAGW;  /* OPERATORS - mode -> union mode */
A68_74  NZFAAGW;  /* YIELD */
A68_209  QZFAAGW;  /* OPERATORS - mode -> union mode */
A68_RC  RZFAAGW;  /* YIELD */
A68_208  SZFAAGW;  /* OPERATORS - istruct to row */
A68_RC  TZFAAGW;  /* avoid structure result */
A68_RC  UZFAAGW_actual;
A68_249  VZFAAGW;  /* collateral clause result */
A68_209  YZFAAGW;  /* OPERATORS - mode -> union mode */
A68_RC  ZZFAAGW;  /* YIELD */
A68_209  AAGAAGW;  /* OPERATORS - mode -> union mode */
A68_209  BAGAAGW;  /* OPERATORS - mode -> union mode */
A68_CHAR  CAGAAGW;  /* YIELD */
A68_208  DAGAAGW;  /* OPERATORS - istruct to row */
A68_209  EAGAAGW;  /* OPERATORS - mode -> union mode */
A68_53  FAGAAGW;  /* procedure value */
A68_208  GAGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_250  HAGAAGW;  /* collateral clause result */
A68_209  KAGAAGW;  /* OPERATORS - mode -> union mode */
A68_RC  LAGAAGW;  /* YIELD */
A68_209  MAGAAGW;  /* OPERATORS - mode -> union mode */
A68_209  NAGAAGW;  /* OPERATORS - mode -> union mode */
A68_CHAR  OAGAAGW;  /* YIELD */
A68_209  PAGAAGW;  /* OPERATORS - mode -> union mode */
A68_53  QAGAAGW;  /* procedure value */
A68_208  RAGAAGW;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(test);
 /* line 25: */
 /* line 26: */
{ 
WYFAAGW = '\"' ;
UYFAAGW.data[0] = A_UNITE(VYFAAGW,mode1,1,WYFAAGW);
UYFAAGW.data[1] = A_UNITE(XYFAAGW,mode2,2,Template);
BZFAAGW = ZYFAAGW ;
UYFAAGW.data[2] = A_UNITE(AZFAAGW,mode2,2,BZFAAGW);
JZFAAGW = A_HEAP(A68_231 ) ;
* JZFAAGW = Items ;
LZFAAGW.fn.fn_global = EZFAAGW_straight;
LZFAAGW.nonlocals = A68_NIL;
NZFAAGW = A_OPSTRAIGHT(JZFAAGW,LZFAAGW,(*JZFAAGW).dim[0].upb -(*JZFAAGW).dim[0].lwb +1,KZFAAGW) ;
UYFAAGW.data[3] = A_UNITE(MZFAAGW,mode29,29,NZFAAGW);
RZFAAGW = PZFAAGW ;
UYFAAGW.data[4] = A_UNITE(QZFAAGW,mode2,2,RZFAAGW);
VCFAASP_print(A_HIS1ARR(SZFAAGW,UYFAAGW,A68_209 ,5));
 /* line 27: */
WGFAAGW_sprintf( Template, Items, &TZFAAGW );
UZFAAGW_actual = TZFAAGW;
 /* line 28: */
ZZFAAGW = XZFAAGW ;
VZFAAGW.data[0] = A_UNITE(YZFAAGW,mode2,2,ZZFAAGW);
VZFAAGW.data[1] = A_UNITE(AAGAAGW,mode2,2,UZFAAGW_actual);
CAGAAGW = '\"' ;
VZFAAGW.data[2] = A_UNITE(BAGAAGW,mode1,1,CAGAAGW);
VCFAASP_print(A_HIS1ARR(DAGAAGW,VZFAAGW,A68_209 ,3));
 /* line 29: */
 /* line 30: */
if ( A_RC_EQ(UZFAAGW_actual,Expected) )
{ 
 /* line 31: */
 /* line 32: */
FAGAAGW.fn.fn_global = XTDAASP_newline;
FAGAAGW.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(GAGAAGW,A_UNITE(EAGAAGW,mode30,30,FAGAAGW),A68_209 ));
} 
else
{ 
LAGAAGW = JAGAAGW ;
HAGAAGW.data[0] = A_UNITE(KAGAAGW,mode2,2,LAGAAGW);
HAGAAGW.data[1] = A_UNITE(MAGAAGW,mode2,2,Expected);
OAGAAGW = '\"' ;
HAGAAGW.data[2] = A_UNITE(NAGAAGW,mode1,1,OAGAAGW);
QAGAAGW.fn.fn_global = XTDAASP_newline;
QAGAAGW.nonlocals = A68_NIL;
HAGAAGW.data[3] = A_UNITE(PAGAAGW,mode30,30,QAGAAGW);
VCFAASP_print(A_HIS1ARR(RAGAAGW,HAGAAGW,A68_209 ,4));
 /* line 33: */
 /* line 34: */
 /* line 35: */
ZWBAASP_exit(1);
} 
} 
A_PROC_EXIT(test);
return;
} 
#undef NL
 /* line 3: */
 /* line 5: */
 /* line 8: */
int main(int argc, char *argv[], char *envp[])
{ 

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/usr/bin/a68toc","-s","-v","-lib","/usr/share/algol68toc","-dir","/usr/share/algol68toc","-dir","lib/m","-uname","seedfile","tests.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"lib/m/bytes.m","lib/m/printf.m","lib/m/utf8.m","/usr/share/algol68toc/standard.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_240  JWFAAGW;  /* collateral clause result */
A68_222  KWFAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  LWFAAGW;  /* YIELD */
A68_222  MWFAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  NWFAAGW;  /* YIELD */
A68_222  OWFAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  PWFAAGW;  /* YIELD */
A68_222  QWFAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  RWFAAGW;  /* YIELD */
A68_63  UWFAAGW;  /* avoid structure result */
A68_222  VWFAAGW;  /* OPERATORS - mode -> union mode */
A68_222  WWFAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  XWFAAGW;  /* YIELD */
A68_222  YWFAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  ZWFAAGW;  /* YIELD */
A68_222  AXFAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  BXFAAGW;  /* YIELD */
A68_222  CXFAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  DXFAAGW;  /* YIELD */
A68_221  EXFAAGW;  /* OPERATORS - istruct to row */
A68_63  FXFAAGW;  /* avoid structure result */
A68_SSBITS * IXFAAGW;  /* forall control - []x */
A68_INT  JXFAAGW;  /* forall loop counter */
A68_232  LXFAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  MXFAAGW;  /* YIELD */
A68_231  NXFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_65  QXFAAGW;  /* avoid structure result */
A68_INT * RXFAAGW;  /* forall control - []x */
A68_INT  SXFAAGW;  /* forall loop counter */
A68_222  TXFAAGW;  /* OPERATORS - mode -> union mode */
A68_221  UXFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_63  VXFAAGW;  /* avoid structure result */
A68_243  YXFAAGW;  /* collateral clause result */
A68_232  ZXFAAGW;  /* OPERATORS - mode -> union mode */
A68_232  AYFAAGW;  /* OPERATORS - mode -> union mode */
A68_RC  BYFAAGW;  /* avoid structure result */
A68_232  CYFAAGW;  /* OPERATORS - mode -> union mode */
A68_231  DYFAAGW;  /* OPERATORS - istruct to row */
A68_SSBITS * GYFAAGW;  /* forall control - []x */
A68_INT  HYFAAGW;  /* forall loop counter */
A68_232  JYFAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  KYFAAGW;  /* YIELD */
A68_231  LYFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_209  NYFAAGW;  /* OPERATORS - mode -> union mode */
A68_53  OYFAAGW;  /* procedure value */
A68_208  PYFAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  XAGAAGW;  /* OPERATORS - mode -> union mode */
A68_RC  YAGAAGW;  /* YIELD */
A68_231  ZAGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  GBGAAGW;  /* OPERATORS - mode -> union mode */
A68_RC  HBGAAGW;  /* YIELD */
A68_231  IBGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  MBGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  OBGAAGW;  /* OPERATORS - mode -> union mode */
A68_RC  PBGAAGW;  /* YIELD */
A68_231  QBGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  VBGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  WBGAAGW;  /* YIELD */
A68_231  XBGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  ACGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  BCGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  CCGAAGW;  /* YIELD */
A68_231  DCGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  GCGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  HCGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  ICGAAGW;  /* YIELD */
A68_231  JCGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  OCGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  PCGAAGW;  /* YIELD */
A68_231  QCGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  VCGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  WCGAAGW;  /* YIELD */
A68_231  XCGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  CDGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  DDGAAGW;  /* YIELD */
A68_231  EDGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  JDGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  KDGAAGW;  /* YIELD */
A68_231  LDGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  QDGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  RDGAAGW;  /* YIELD */
A68_231  SDGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  XDGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  YDGAAGW;  /* YIELD */
A68_231  ZDGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  EEGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  FEGAAGW;  /* YIELD */
A68_231  GEGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  LEGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  MEGAAGW;  /* YIELD */
A68_231  NEGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  SEGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  TEGAAGW;  /* YIELD */
A68_231  UEGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  ZEGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  AFGAAGW;  /* YIELD */
A68_231  BFGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  EFGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  FFGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  GFGAAGW;  /* YIELD */
A68_231  HFGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  KFGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  LFGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  MFGAAGW;  /* YIELD */
A68_231  NFGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  SFGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  TFGAAGW;  /* YIELD */
A68_231  UFGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  ZFGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  AGGAAGW;  /* YIELD */
A68_231  BGGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  GGGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  HGGAAGW;  /* YIELD */
A68_231  IGGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  NGGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  OGGAAGW;  /* YIELD */
A68_231  PGGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  SGGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  TGGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  UGGAAGW;  /* YIELD */
A68_231  VGGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  YGGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  ZGGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  AHGAAGW;  /* YIELD */
A68_231  BHGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  GHGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  HHGAAGW;  /* YIELD */
A68_231  IHGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  NHGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  OHGAAGW;  /* YIELD */
A68_231  PHGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  UHGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  VHGAAGW;  /* YIELD */
A68_231  WHGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  BIGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  CIGAAGW;  /* YIELD */
A68_231  DIGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  IIGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  JIGAAGW;  /* YIELD */
A68_231  KIGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  PIGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  QIGAAGW;  /* YIELD */
A68_231  RIGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  WIGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  XIGAAGW;  /* YIELD */
A68_231  YIGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  DJGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  EJGAAGW;  /* YIELD */
A68_231  FJGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  MJGAAGW;  /* OPERATORS - mode -> union mode */
A68_RC  NJGAAGW;  /* YIELD */
A68_231  OJGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  VJGAAGW;  /* OPERATORS - mode -> union mode */
A68_RC  WJGAAGW;  /* YIELD */
A68_231  XJGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  EKGAAGW;  /* OPERATORS - mode -> union mode */
A68_RC  FKGAAGW;  /* YIELD */
A68_231  GKGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  NKGAAGW;  /* OPERATORS - mode -> union mode */
A68_RC  OKGAAGW;  /* YIELD */
A68_231  PKGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  WKGAAGW;  /* OPERATORS - mode -> union mode */
A68_RC  XKGAAGW;  /* YIELD */
A68_231  YKGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  DLGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  ELGAAGW;  /* YIELD */
A68_231  FLGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  KLGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  LLGAAGW;  /* YIELD */
A68_231  MLGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  QLGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  RLGAAGW;  /* OPERATORS - mode -> union mode */
A68_231  SLGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  VLGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  WLGAAGW;  /* OPERATORS - mode -> union mode */
A68_CHAR  XLGAAGW;  /* YIELD */
A68_231  YLGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  BMGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  CMGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  DMGAAGW;  /* YIELD */
A68_231  EMGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  HMGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  IMGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  JMGAAGW;  /* YIELD */
A68_231  KMGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  NMGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  OMGAAGW;  /* OPERATORS - mode -> union mode */
A68_BOOL  PMGAAGW;  /* YIELD */
A68_231  QMGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  TMGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  UMGAAGW;  /* OPERATORS - mode -> union mode */
A68_CHAR  VMGAAGW;  /* YIELD */
A68_231  WMGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  BNGAAGW;  /* OPERATORS - mode -> union mode */
A68_CHAR  CNGAAGW;  /* YIELD */
A68_231  DNGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232  INGAAGW;  /* OPERATORS - mode -> union mode */
A68_CHAR  JNGAAGW;  /* YIELD */
A68_231  KNGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_243  NNGAAGW;  /* collateral clause result */
A68_232  ONGAAGW;  /* OPERATORS - mode -> union mode */
A68_INT  PNGAAGW;  /* YIELD */
A68_232  QNGAAGW;  /* OPERATORS - mode -> union mode */
A68_BITS  RNGAAGW;  /* YIELD */
A68_232  SNGAAGW;  /* OPERATORS - mode -> union mode */
A68_BOOL  TNGAAGW;  /* YIELD */
A68_VC  WNGAAGW;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XNGAAGW;  /* YIELD */
A68_RC  YNGAAGW;  /* OPERATORS - vector -> row */
A68_231  ZNGAAGW;  /* OPERATORS - istruct to row */
A_GC_STARTUP(argc);
WFFAAGW();   /* USE bytes */
RGFAAGW();   /* USE printf */
DLFAAGW();   /* USE utf8 */
ANFAASP();   /* USE standard */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/examples/tests/tests.a68";
A_config.translation_time = "Thu May  6 00:53:43 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "GWFAAGW (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv,envp);
#endif
A_PROC_ENTRY(MAIN);
{ 
LWFAAGW = (-1) ;
JWFAAGW.data[0] = A_UNITE(KWFAAGW,mode3,3,LWFAAGW);
NWFAAGW = 0X0U ;
JWFAAGW.data[1] = A_UNITE(MWFAAGW,mode4,4,NWFAAGW);
PWFAAGW = 0X7fU ;
JWFAAGW.data[2] = A_UNITE(OWFAAGW,mode4,4,PWFAAGW);
RWFAAGW = 0XffU ;
JWFAAGW.data[3] = A_UNITE(QWFAAGW,mode4,4,RWFAAGW);
MVFAAGW_u( TWFAAGW, &UWFAAGW );
JWFAAGW.data[4] = A_UNITE(VWFAAGW,mode1,1,UWFAAGW);
XWFAAGW = (A68_INT )0XffffU ;
JWFAAGW.data[5] = A_UNITE(WWFAAGW,mode3,3,XWFAAGW);
ZWFAAGW = 0X10000U ;
JWFAAGW.data[6] = A_UNITE(YWFAAGW,mode4,4,ZWFAAGW);
BXFAAGW = 0X10ffffU ;
JWFAAGW.data[7] = A_UNITE(AXFAAGW,mode4,4,BXFAAGW);
DXFAAGW = 0X1100000U ;
JWFAAGW.data[8] = A_UNITE(CXFAAGW,mode4,4,DXFAAGW);
SQFAAGW_utf8( A_HIS1ARR(EXFAAGW,JWFAAGW,A68_222 ,9), &FXFAAGW );
GXFAAGW_u = FXFAAGW;
 /* line 10: */
JXFAAGW = GXFAAGW_u.dim[0].upb - GXFAAGW_u.dim[0].lwb;
IXFAAGW = GXFAAGW_u.data;
for (;JXFAAGW-- >= 0;
(IXFAAGW += GXFAAGW_u.dim[0].stride
) )
{
HXFAAGW_b = *IXFAAGW;
 /* line 11: */
 /* line 12: */
MXFAAGW = AGFAAGW_bin(HXFAAGW_b) ;
ZKFAAGW_printf(OXFAAGW, A_HARR(NXFAAGW,A_UNITE(LXFAAGW,mode4,4,MXFAAGW),A68_232 ));
}
 /* line 15: */
RPFAAGW_unpackutf8( GXFAAGW_u, &QXFAAGW );
SXFAAGW = QXFAAGW.dim[0].upb - QXFAAGW.dim[0].lwb;
RXFAAGW = QXFAAGW.data;
for (;SXFAAGW-- >= 0;
(RXFAAGW += QXFAAGW.dim[0].stride
) )
{
PXFAAGW_cp = *RXFAAGW;
 /* line 16: */
SQFAAGW_utf8( A_HARR(UXFAAGW,A_UNITE(TXFAAGW,mode3,3,PXFAAGW_cp),A68_222 ), &VXFAAGW );
WXFAAGW_bytes = VXFAAGW;
 /* line 17: */
YXFAAGW.data[0] = A_UNITE(ZXFAAGW,mode1,1,PXFAAGW_cp);
YXFAAGW.data[1] = A_UNITE(AYFAAGW,mode1,1,PXFAAGW_cp);
IVFAAGW_repr( WXFAAGW_bytes, &BYFAAGW );
YXFAAGW.data[2] = A_UNITE(CYFAAGW,mode5,5,BYFAAGW);
ZKFAAGW_printf(EYFAAGW, A_HIS1ARR(DYFAAGW,YXFAAGW,A68_232 ,3));
 /* line 18: */
HYFAAGW = WXFAAGW_bytes.dim[0].upb - WXFAAGW_bytes.dim[0].lwb;
GYFAAGW = WXFAAGW_bytes.data;
for (;HYFAAGW-- >= 0;
(GYFAAGW += WXFAAGW_bytes.dim[0].stride
) )
{
FYFAAGW_b = *GYFAAGW;
KYFAAGW = DGFAAGW_abs(FYFAAGW_b) ;
ZKFAAGW_printf(MYFAAGW, A_HARR(LYFAAGW,A_UNITE(JYFAAGW,mode1,1,KYFAAGW),A68_232 ));
}
 /* line 19: */
 /* line 20: */
OYFAAGW.fn.fn_global = XTDAASP_newline;
OYFAAGW.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(PYFAAGW,A_UNITE(NYFAAGW,mode30,30,OYFAAGW),A68_209 ));
}
 /* line 24: */
 /* line 37: */
YAGAAGW = WAGAAGW ;
TYFAAGW_test(ABGAAGW, A_HARR(ZAGAAGW,A_UNITE(XAGAAGW,mode5,5,YAGAAGW),A68_232 ), VAGAAGW);
 /* line 38: */
HBGAAGW = FBGAAGW ;
TYFAAGW_test(JBGAAGW, A_HARR(IBGAAGW,A_UNITE(GBGAAGW,mode5,5,HBGAAGW),A68_232 ), EBGAAGW);
 /* line 39: */
PBGAAGW = NBGAAGW ;
TYFAAGW_test(RBGAAGW, A_HARR(QBGAAGW,A_UNITE(OBGAAGW,mode5,5,PBGAAGW),A68_232 ), A_HARR(MBGAAGW,'%',A68_CHAR ));
 /* line 41: */
WBGAAGW = (-1) ;
TYFAAGW_test(YBGAAGW, A_HARR(XBGAAGW,A_UNITE(VBGAAGW,mode1,1,WBGAAGW),A68_232 ), UBGAAGW);
 /* line 42: */
CCGAAGW = 0 ;
TYFAAGW_test(ECGAAGW, A_HARR(DCGAAGW,A_UNITE(BCGAAGW,mode1,1,CCGAAGW),A68_232 ), A_HARR(ACGAAGW,'0',A68_CHAR ));
 /* line 43: */
ICGAAGW = 1 ;
TYFAAGW_test(KCGAAGW, A_HARR(JCGAAGW,A_UNITE(HCGAAGW,mode1,1,ICGAAGW),A68_232 ), A_HARR(GCGAAGW,'1',A68_CHAR ));
 /* line 44: */
PCGAAGW = 1337 ;
TYFAAGW_test(RCGAAGW, A_HARR(QCGAAGW,A_UNITE(OCGAAGW,mode1,1,PCGAAGW),A68_232 ), NCGAAGW);
 /* line 45: */
WCGAAGW = (-1337) ;
TYFAAGW_test(YCGAAGW, A_HARR(XCGAAGW,A_UNITE(VCGAAGW,mode1,1,WCGAAGW),A68_232 ), UCGAAGW);
 /* line 46: */
DDGAAGW = 2147483647 ;
TYFAAGW_test(FDGAAGW, A_HARR(EDGAAGW,A_UNITE(CDGAAGW,mode1,1,DDGAAGW),A68_232 ), BDGAAGW);
 /* line 47: */
KDGAAGW = (-2147483648) ;
TYFAAGW_test(MDGAAGW, A_HARR(LDGAAGW,A_UNITE(JDGAAGW,mode1,1,KDGAAGW),A68_232 ), IDGAAGW);
 /* line 48: */
RDGAAGW = 0X7fffffffU ;
TYFAAGW_test(TDGAAGW, A_HARR(SDGAAGW,A_UNITE(QDGAAGW,mode4,4,RDGAAGW),A68_232 ), PDGAAGW);
 /* line 49: */
YDGAAGW = 0XffffffffU ;
TYFAAGW_test(AEGAAGW, A_HARR(ZDGAAGW,A_UNITE(XDGAAGW,mode4,4,YDGAAGW),A68_232 ), WDGAAGW);
 /* line 51: */
FEGAAGW = 1337 ;
TYFAAGW_test(HEGAAGW, A_HARR(GEGAAGW,A_UNITE(EEGAAGW,mode1,1,FEGAAGW),A68_232 ), DEGAAGW);
 /* line 52: */
MEGAAGW = 1337 ;
TYFAAGW_test(OEGAAGW, A_HARR(NEGAAGW,A_UNITE(LEGAAGW,mode1,1,MEGAAGW),A68_232 ), KEGAAGW);
 /* line 53: */
TEGAAGW = 1337 ;
TYFAAGW_test(VEGAAGW, A_HARR(UEGAAGW,A_UNITE(SEGAAGW,mode1,1,TEGAAGW),A68_232 ), REGAAGW);
 /* line 54: */
AFGAAGW = (-1337) ;
TYFAAGW_test(CFGAAGW, A_HARR(BFGAAGW,A_UNITE(ZEGAAGW,mode1,1,AFGAAGW),A68_232 ), YEGAAGW);
 /* line 56: */
GFGAAGW = 0 ;
TYFAAGW_test(IFGAAGW, A_HARR(HFGAAGW,A_UNITE(FFGAAGW,mode1,1,GFGAAGW),A68_232 ), A_HARR(EFGAAGW,'0',A68_CHAR ));
 /* line 57: */
MFGAAGW = 1 ;
TYFAAGW_test(OFGAAGW, A_HARR(NFGAAGW,A_UNITE(LFGAAGW,mode1,1,MFGAAGW),A68_232 ), A_HARR(KFGAAGW,'1',A68_CHAR ));
 /* line 58: */
TFGAAGW = 0XabcdefU ;
TYFAAGW_test(VFGAAGW, A_HARR(UFGAAGW,A_UNITE(SFGAAGW,mode4,4,TFGAAGW),A68_232 ), RFGAAGW);
 /* line 59: */
AGGAAGW = 0XffffffffU ;
TYFAAGW_test(CGGAAGW, A_HARR(BGGAAGW,A_UNITE(ZFGAAGW,mode4,4,AGGAAGW),A68_232 ), YFGAAGW);
 /* line 60: */
HGGAAGW = 0XffffffffU ;
TYFAAGW_test(JGGAAGW, A_HARR(IGGAAGW,A_UNITE(GGGAAGW,mode4,4,HGGAAGW),A68_232 ), FGGAAGW);
 /* line 62: */
OGGAAGW = 0XffffffffU ;
TYFAAGW_test(QGGAAGW, A_HARR(PGGAAGW,A_UNITE(NGGAAGW,mode4,4,OGGAAGW),A68_232 ), MGGAAGW);
 /* line 63: */
UGGAAGW = 0 ;
TYFAAGW_test(WGGAAGW, A_HARR(VGGAAGW,A_UNITE(TGGAAGW,mode1,1,UGGAAGW),A68_232 ), A_HARR(SGGAAGW,'0',A68_CHAR ));
 /* line 64: */
AHGAAGW = 1 ;
TYFAAGW_test(CHGAAGW, A_HARR(BHGAAGW,A_UNITE(ZGGAAGW,mode1,1,AHGAAGW),A68_232 ), A_HARR(YGGAAGW,'1',A68_CHAR ));
 /* line 65: */
HHGAAGW = 0X33U ;
TYFAAGW_test(JHGAAGW, A_HARR(IHGAAGW,A_UNITE(GHGAAGW,mode4,4,HHGAAGW),A68_232 ), FHGAAGW);
 /* line 66: */
OHGAAGW = 0X33U ;
TYFAAGW_test(QHGAAGW, A_HARR(PHGAAGW,A_UNITE(NHGAAGW,mode4,4,OHGAAGW),A68_232 ), MHGAAGW);
 /* line 67: */
VHGAAGW = 0X33U ;
TYFAAGW_test(XHGAAGW, A_HARR(WHGAAGW,A_UNITE(UHGAAGW,mode4,4,VHGAAGW),A68_232 ), THGAAGW);
 /* line 69: */
CIGAAGW = 0X1234U ;
TYFAAGW_test(EIGAAGW, A_HARR(DIGAAGW,A_UNITE(BIGAAGW,mode4,4,CIGAAGW),A68_232 ), AIGAAGW);
 /* line 70: */
JIGAAGW = 0 ;
TYFAAGW_test(LIGAAGW, A_HARR(KIGAAGW,A_UNITE(IIGAAGW,mode1,1,JIGAAGW),A68_232 ), HIGAAGW);
 /* line 71: */
QIGAAGW = 0X1ee7U ;
TYFAAGW_test(SIGAAGW, A_HARR(RIGAAGW,A_UNITE(PIGAAGW,mode4,4,QIGAAGW),A68_232 ), OIGAAGW);
 /* line 72: */
XIGAAGW = 0Xdead1ee7U ;
TYFAAGW_test(ZIGAAGW, A_HARR(YIGAAGW,A_UNITE(WIGAAGW,mode4,4,XIGAAGW),A68_232 ), VIGAAGW);
 /* line 73: */
EJGAAGW = 0Xdead1ee7U ;
TYFAAGW_test(GJGAAGW, A_HARR(FJGAAGW,A_UNITE(DJGAAGW,mode4,4,EJGAAGW),A68_232 ), CJGAAGW);
 /* line 75: */
NJGAAGW = LJGAAGW ;
TYFAAGW_test(PJGAAGW, A_HARR(OJGAAGW,A_UNITE(MJGAAGW,mode5,5,NJGAAGW),A68_232 ), KJGAAGW);
 /* line 76: */
WJGAAGW = UJGAAGW ;
TYFAAGW_test(YJGAAGW, A_HARR(XJGAAGW,A_UNITE(VJGAAGW,mode5,5,WJGAAGW),A68_232 ), TJGAAGW);
 /* line 77: */
FKGAAGW = DKGAAGW ;
TYFAAGW_test(HKGAAGW, A_HARR(GKGAAGW,A_UNITE(EKGAAGW,mode5,5,FKGAAGW),A68_232 ), CKGAAGW);
 /* line 78: */
OKGAAGW = MKGAAGW ;
TYFAAGW_test(QKGAAGW, A_HARR(PKGAAGW,A_UNITE(NKGAAGW,mode5,5,OKGAAGW),A68_232 ), LKGAAGW);
 /* line 79: */
XKGAAGW = VKGAAGW ;
TYFAAGW_test(ZKGAAGW, A_HARR(YKGAAGW,A_UNITE(WKGAAGW,mode5,5,XKGAAGW),A68_232 ), UKGAAGW);
 /* line 80: */
ELGAAGW = 123 ;
TYFAAGW_test(GLGAAGW, A_HARR(FLGAAGW,A_UNITE(DLGAAGW,mode1,1,ELGAAGW),A68_232 ), CLGAAGW);
 /* line 81: */
LLGAAGW = 0X102aU ;
TYFAAGW_test(NLGAAGW, A_HARR(MLGAAGW,A_UNITE(KLGAAGW,mode4,4,LLGAAGW),A68_232 ), JLGAAGW);
 /* line 83: */
 /* line 84: */
TYFAAGW_test(TLGAAGW, A_HARR(SLGAAGW,A_UNITE(RLGAAGW,mode2,2,OLGAAGW_a),A68_232 ), A_HARR(QLGAAGW,'A',A68_CHAR ));
 /* line 85: */
XLGAAGW = 'A' ;
TYFAAGW_test(ZLGAAGW, A_HARR(YLGAAGW,A_UNITE(WLGAAGW,mode2,2,XLGAAGW),A68_232 ), A_HARR(VLGAAGW,'A',A68_CHAR ));
 /* line 86: */
DMGAAGW = 0X41U ;
TYFAAGW_test(FMGAAGW, A_HARR(EMGAAGW,A_UNITE(CMGAAGW,mode4,4,DMGAAGW),A68_232 ), A_HARR(BMGAAGW,'A',A68_CHAR ));
 /* line 87: */
JMGAAGW = 65 ;
TYFAAGW_test(LMGAAGW, A_HARR(KMGAAGW,A_UNITE(IMGAAGW,mode1,1,JMGAAGW),A68_232 ), A_HARR(HMGAAGW,'A',A68_CHAR ));
 /* line 88: */
PMGAAGW = A68_FALSE ;
TYFAAGW_test(RMGAAGW, A_HARR(QMGAAGW,A_UNITE(OMGAAGW,mode3,3,PMGAAGW),A68_232 ), A_HARR(NMGAAGW,'0',A68_CHAR ));
 /* line 91: */
VMGAAGW = 'a' ;
TYFAAGW_test(XMGAAGW, A_HARR(WMGAAGW,A_UNITE(UMGAAGW,mode2,2,VMGAAGW),A68_232 ), A_HARR(TMGAAGW,'a',A68_CHAR ));
 /* line 92: */
CNGAAGW = 'a' ;
TYFAAGW_test(ENGAAGW, A_HARR(DNGAAGW,A_UNITE(BNGAAGW,mode2,2,CNGAAGW),A68_232 ), ANGAAGW);
 /* line 93: */
JNGAAGW = 'a' ;
TYFAAGW_test(LNGAAGW, A_HARR(KNGAAGW,A_UNITE(INGAAGW,mode2,2,JNGAAGW),A68_232 ), HNGAAGW);
 /* line 95: */
PNGAAGW = 10 ;
NNGAAGW.data[0] = A_UNITE(ONGAAGW,mode1,1,PNGAAGW);
RNGAAGW = 0X1337U ;
NNGAAGW.data[1] = A_UNITE(QNGAAGW,mode4,4,RNGAAGW);
TNGAAGW = A68_TRUE ;
NNGAAGW.data[2] = A_UNITE(SNGAAGW,mode3,3,TNGAAGW);
 /* line 97: */
 /* line 99: */
XNGAAGW = A_VC_PLUS(VNGAAGW,A_HVEC(WNGAAGW,(A68_SSBITS)10,A68_CHAR )) ;
TYFAAGW_test(AOGAAGW, A_HIS1ARR(ZNGAAGW,NNGAAGW,A68_232 ,3), A_VECARR(XNGAAGW,YNGAAGW));
} 
A_PROC_EXIT(MAIN);
#ifdef A_postlude
A_postlude;
#endif
return(0);
} 
#undef NL
/* end of translation of tests.a68 */
