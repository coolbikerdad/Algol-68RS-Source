/* UNAME:CLFAAGW */
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

A_PROCEDURE(A68_BITS ,A68t218,(A68_SSBITS ),(A68_SSBITS ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(SHORT SHORT BITS) BITS */

A_PROCEDURE(A68_INT ,A68t219,(A68_SSBITS ),(A68_SSBITS ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(SHORT SHORT BITS) INT */

A_PROCEDURE(A68_CHAR ,A68t220,(A68_SSBITS ),(A68_SSBITS ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(SHORT SHORT BITS) CHAR */

A_PROCEDURE(A68_SSBITS ,A68t221,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(BITS) SHORT SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t222,(A68_INT ),(A68_INT ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(INT) SHORT SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t223,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(CHAR) SHORT SHORT BITS */
#define A68_224  A68_63 
#define A68t224 A68t63            /* FLEX [] SHORT SHORT BITS */

A_PROCEDURE(A68_VOID ,A68t225,(A68_BOOL ,struct A68t63 *),(A68_BOOL ,struct A68t63 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(BOOL) MODE63 */
struct A68t226 { A68_INT mode; union {
struct A68t63  mode1;
A68_CHAR  mode2;
A68_INT  mode3;
A68_BITS  mode4;
A68_RC  mode5;
struct A68t65  mode6;
struct A68t61  mode7;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t226  A68_226 ;    /* UNION(MODE63,CHAR,INT,BITS,MODE27,MODE65,MODE61)  */

A_PROCEDURE(A68_BOOL ,A68t227,(A68_SSBITS ),(A68_SSBITS ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(SHORT SHORT BITS) BOOL */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t63 ,A68_INT *,A68_BOOL *),(struct A68t63 ,A68_INT *,A68_BOOL *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE63,REF INT,REF BOOL) VOID */

A_PROCEDURE(A68_INT ,A68t229,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE63) INT */

A_PROCEDURE(A68_BOOL ,A68t230,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE63) BOOL */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t63 ,struct A68t65 *),(struct A68t63 ,struct A68t65 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE63) MODE65 */

A_PROCEDURE(A68_VOID ,A68t232,(A68_BOOL ,struct A68t65 *),(A68_BOOL ,struct A68t65 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(BOOL) MODE65 */
A_ROW(struct A68t226 ,A68t233,1);
typedef struct A68t233  A68_233 ;    /* [] MODE226 */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t233 ,struct A68t63 *),(struct A68t233 ,struct A68t63 *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE233) MODE63 */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t63 ,A68_RC *),(struct A68t63 ,A68_RC *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE63) MODE27 */

A_PROCEDURE(A68_VOID ,A68t236,(A68_RC ,struct A68t63 *),(A68_RC ,struct A68t63 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE27) MODE63 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t63 ,struct A68t63 ,struct A68t63 *),(struct A68t63 ,struct A68t63 ,struct A68t63 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE63,MODE63) MODE63 */
A_ISTRUCT(struct A68t226 ,2,A68t238);
typedef struct A68t238  A68_238 ;    /* STRUCT 2 MODE226 */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t224 *,struct A68t63 ),(struct A68t224 *,struct A68t63 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE224,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t240,(A68_BOOL ,struct A68t224 *),(A68_BOOL ,struct A68t224 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(BOOL) MODE224 */

/* --- Imports from bytes --- */
extern A68_BITS  AGFAAGW_bin(A68_SSBITS );
extern A68_CHAR  GGFAAGW_repr(A68_SSBITS );
extern A68_SSBITS  JGFAAGW_bite(A68_BITS );
extern A68_SSBITS  MGFAAGW_bite(A68_INT );
extern A68_SSBITS  PGFAAGW_bite(A68_CHAR );
/* --- End of imports from bytes --- */


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
/* --- End of imports from standard --- */


/* --- DECS initialisation functions --- */
extern void WFFAAGW(void);   /* bytes */
extern void ANFAASP(void);   /* standard */
/* --- end of DECS initialisation functions --- */
A68_225  GLFAAGW_anonymous;
static A68_INT  ROFAAGW_replacementcharacter;
typedef struct   /* env of non-global proc */
{
A68_INT  SPFAAGW_length;
A_PAD_INT(PAD_28)
} WPFAAGW_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * TQFAAGW_n;
} XQFAAGW_inc;
typedef struct   /* env of non-global proc */
{
A68_INT  URFAAGW_utf8buffersize;
A_PAD_INT(PAD_29)
} YRFAAGW_generator;
typedef struct   /* env of non-global proc */
{
A68_224 * BSFAAGW_u;
A68_INT * DSFAAGW_i;
} HSFAAGW_append;
typedef struct   /* env of non-global proc */
{
A68_63  U;
} KUFAAGW_generator;
typedef struct   /* env of non-global proc */
{
A68_RC  String;
} YUFAAGW_generator;

A_STATIC A68_VOID  ILFAAGW_generator(A68_BOOL  HLFAAGW_anonymous, A68_63  *ReturnedValue);

A_STATIC A68_BOOL  NLFAAGW_isbytea(A68_SSBITS  Byte);

A_STATIC A68_BOOL  QLFAAGW_isbyteb(A68_SSBITS  Byte);

A_STATIC A68_BOOL  TLFAAGW_isbytec(A68_SSBITS  Byte);

A_STATIC A68_BOOL  WLFAAGW_isbyted(A68_SSBITS  Byte);

A_STATIC A68_BOOL  ZLFAAGW_isbytee(A68_SSBITS  Byte);

A_STATIC A68_BOOL  CMFAAGW_isbytef(A68_SSBITS  Byte);

A_STATIC A68_BOOL  FMFAAGW_isbyteg(A68_SSBITS  Byte);

A_STATIC A68_BITS  IMFAAGW_worda(A68_SSBITS  Byte);

A_STATIC A68_BITS  LMFAAGW_wordb(A68_SSBITS  Byte);

A_STATIC A68_BITS  QMFAAGW_wordc(A68_SSBITS  Byte);

A_STATIC A68_BITS  VMFAAGW_wordd(A68_SSBITS  Byte);

A_STATIC A68_BITS  ANFAAGW_worde(A68_SSBITS  Byte);

A_STATIC A68_BITS  DNFAAGW_wordf(A68_SSBITS  Byte);

A_STATIC A68_BITS  INFAAGW_wordg(A68_SSBITS  Byte);

A_STATIC A68_SSBITS  NNFAAGW_bytea(A68_INT  Codepoint);

A_STATIC A68_SSBITS  QNFAAGW_byteb(A68_INT  Codepoint);

A_STATIC A68_SSBITS  VNFAAGW_bytec(A68_INT  Codepoint);

A_STATIC A68_SSBITS  AOFAAGW_byted(A68_INT  Codepoint);

A_STATIC A68_SSBITS  FOFAAGW_bytee(A68_INT  Codepoint);

A_STATIC A68_SSBITS  IOFAAGW_bytef(A68_INT  Codepoint);

A_STATIC A68_SSBITS  NOFAAGW_byteg(A68_INT  Codepoint);

A_STATIC A68_VOID  VOFAAGW_countcodepointsandvalidate(A68_63  U, A68_INT * Length, A68_BOOL * Valid);

A68_INT  HPFAAGW_countcodepoints(A68_63  U);

A68_BOOL  MPFAAGW_valid(A68_63  U);

A68_VOID  RPFAAGW_unpackutf8(A68_63  U, A68_65  *ReturnedValue);

A_STATIC A68_VOID  VPFAAGW_generator(A68_BOOL  TPFAAGW_anonymous, A68_65  *ReturnedValue, void *NonLocals);

A68_VOID  SQFAAGW_utf8(A68_233  Substrings, A68_63  *ReturnedValue);

A_STATIC A68_VOID  WQFAAGW_inc(A68_INT  C, void *NonLocals);

A_STATIC A68_VOID  XRFAAGW_generator(A68_BOOL  VRFAAGW_anonymous, A68_63  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GSFAAGW_append(A68_INT  C, void *NonLocals);

A68_VOID  GUFAAGW_utf8toraw(A68_63  U, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  JUFAAGW_generator(A68_BOOL  HUFAAGW_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A68_VOID  UUFAAGW_rawtoutf8(A68_RC  String, A68_63  *ReturnedValue);

A_STATIC A68_VOID  XUFAAGW_generator(A68_BOOL  VUFAAGW_anonymous, A68_63  *ReturnedValue, void *NonLocals);

A68_VOID  IVFAAGW_repr(A68_63  String, A68_RC  *ReturnedValue);

A68_VOID  MVFAAGW_u(A68_RC  String, A68_63  *ReturnedValue);

A68_VOID  RVFAAGW_(A68_63  U, A68_63  V, A68_63  *ReturnedValue);

A68_VOID  AWFAAGW_(A68_224 * U, A68_63  V);

A_STATIC A68_VOID  VPFAAGW_generator(A68_BOOL  TPFAAGW_anonymous, A68_65  *ReturnedValue, void *NonLocals)
#define NL(x) (((WPFAAGW_generator *)NonLocals)->x)
{ 
A68_65  XPFAAGW;  /* clause result */
A68_65  YPFAAGW;  /* OPERATORS - dynamic generator */
{ 
YPFAAGW.dim[0].upb = NL(SPFAAGW_length) ;
YPFAAGW.dim[0].lwb = 1 ;
A_1INITSTRIDES(YPFAAGW) ;
( TPFAAGW_anonymous? A_R1LOC(A68_INT ,YPFAAGW): A_R1HEAP(A68_INT ,YPFAAGW) );
XPFAAGW = YPFAAGW;
} 
*ReturnedValue = (XPFAAGW);
return;
} 
#undef NL

A_STATIC A68_VOID  WQFAAGW_inc(A68_INT  C, void *NonLocals)
#define NL(x) (((XQFAAGW_inc *)NonLocals)->x)
{ 
A68_INT  YQFAAGW;  /* clause result */
A_PROC_ENTRY(inc);
 /* line 194: */
 /* line 195: */
if ( (C<=(-1)) )
{ 
YQFAAGW = 3;
} 
else
{ 
 /* line 196: */
if ( (C<=(A68_INT )0X7fU) )
{ 
YQFAAGW = 1;
} 
else
{ 
 /* line 197: */
if ( (C<=(A68_INT )0X7ffU) )
{ 
YQFAAGW = 2;
} 
else
{ 
 /* line 198: */
if ( (C<=(A68_INT )0XffffU) )
{ 
YQFAAGW = 3;
} 
else
{ 
 /* line 199: */
if ( (C<=(A68_INT )0X10ffffU) )
{ 
YQFAAGW = 4;
} 
else
{ 
YQFAAGW = 3;
} 
} 
} 
} 
} 
(*NL(TQFAAGW_n))+=YQFAAGW;
A_PROC_EXIT(inc);
return;
} 
#undef NL

A_STATIC A68_VOID  XRFAAGW_generator(A68_BOOL  VRFAAGW_anonymous, A68_63  *ReturnedValue, void *NonLocals)
#define NL(x) (((YRFAAGW_generator *)NonLocals)->x)
{ 
A68_63  ZRFAAGW;  /* clause result */
A68_63  ASFAAGW;  /* OPERATORS - dynamic generator */
{ 
ASFAAGW.dim[0].upb = NL(URFAAGW_utf8buffersize) ;
ASFAAGW.dim[0].lwb = 1 ;
A_1INITSTRIDES(ASFAAGW) ;
( VRFAAGW_anonymous? A_R1LOC(A68_SSBITS ,ASFAAGW): A_R1HEAP(A68_SSBITS ,ASFAAGW) );
ZRFAAGW = ASFAAGW;
} 
*ReturnedValue = (ZRFAAGW);
return;
} 
#undef NL

A_STATIC A68_VOID  GSFAAGW_append(A68_INT  C, void *NonLocals)
#define NL(x) (((HSFAAGW_append *)NonLocals)->x)
{ 
A68_SSBITS * ISFAAGW;  /* YIELD */
A68_INT  JSFAAGW;  /* YIELD */
A68_SSBITS * KSFAAGW;  /* YIELD */
A68_INT  LSFAAGW;  /* YIELD */
A68_SSBITS * MSFAAGW;  /* YIELD */
A68_SSBITS * NSFAAGW;  /* YIELD */
A68_SSBITS * OSFAAGW;  /* YIELD */
A68_INT  PSFAAGW;  /* YIELD */
A68_SSBITS * QSFAAGW;  /* YIELD */
A68_SSBITS * RSFAAGW;  /* YIELD */
A68_INT  SSFAAGW;  /* YIELD */
A68_SSBITS * TSFAAGW;  /* YIELD */
A68_INT  USFAAGW;  /* YIELD */
A68_SSBITS * VSFAAGW;  /* YIELD */
A68_SSBITS * WSFAAGW;  /* YIELD */
A68_INT  XSFAAGW;  /* YIELD */
A68_SSBITS * YSFAAGW;  /* YIELD */
A68_INT  ZSFAAGW;  /* YIELD */
A68_SSBITS * ATFAAGW;  /* YIELD */
A68_INT  BTFAAGW;  /* YIELD */
A68_SSBITS * CTFAAGW;  /* YIELD */
A68_SSBITS * DTFAAGW;  /* YIELD */
A68_INT  ETFAAGW;  /* YIELD */
A68_SSBITS * FTFAAGW;  /* YIELD */
A68_INT  GTFAAGW;  /* YIELD */
A68_SSBITS * HTFAAGW;  /* YIELD */
A_PROC_ENTRY(append);
 /* line 217: */
 /* line 218: */
{ 
 /* line 219: */
if ( (C<0) )
{ 
ISFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),(*NL(DSFAAGW_i)))) ;
(*ISFAAGW) = VNFAAGW_bytec(ROFAAGW_replacementcharacter);
 /* line 220: */
JSFAAGW = ((*NL(DSFAAGW_i))+1) ;
KSFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),JSFAAGW)) ;
(*KSFAAGW) = IOFAAGW_bytef(ROFAAGW_replacementcharacter);
 /* line 221: */
LSFAAGW = ((*NL(DSFAAGW_i))+2) ;
MSFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),LSFAAGW)) ;
(*MSFAAGW) = FOFAAGW_bytee(ROFAAGW_replacementcharacter);
 /* line 222: */
 /* line 223: */
(*NL(DSFAAGW_i))+=3;
} 
else
{ 
 /* line 224: */
if ( (C<=(A68_INT )0X7fU) )
{ 
NSFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),(*NL(DSFAAGW_i)))) ;
(*NSFAAGW) = NNFAAGW_bytea(C);
 /* line 225: */
 /* line 226: */
(*NL(DSFAAGW_i))+=1;
} 
else
{ 
 /* line 227: */
if ( (C<=(A68_INT )0X7ffU) )
{ 
OSFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),(*NL(DSFAAGW_i)))) ;
(*OSFAAGW) = QNFAAGW_byteb(C);
 /* line 228: */
PSFAAGW = ((*NL(DSFAAGW_i))+1) ;
QSFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),PSFAAGW)) ;
(*QSFAAGW) = FOFAAGW_bytee(C);
 /* line 229: */
 /* line 230: */
(*NL(DSFAAGW_i))+=2;
} 
else
{ 
 /* line 231: */
if ( (C<=(A68_INT )0XffffU) )
{ 
RSFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),(*NL(DSFAAGW_i)))) ;
(*RSFAAGW) = VNFAAGW_bytec(C);
 /* line 232: */
SSFAAGW = ((*NL(DSFAAGW_i))+1) ;
TSFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),SSFAAGW)) ;
(*TSFAAGW) = IOFAAGW_bytef(C);
 /* line 233: */
USFAAGW = ((*NL(DSFAAGW_i))+2) ;
VSFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),USFAAGW)) ;
(*VSFAAGW) = FOFAAGW_bytee(C);
 /* line 234: */
 /* line 235: */
(*NL(DSFAAGW_i))+=3;
} 
else
{ 
 /* line 236: */
if ( (C<=(A68_INT )0X10ffffU) )
{ 
WSFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),(*NL(DSFAAGW_i)))) ;
(*WSFAAGW) = AOFAAGW_byted(C);
 /* line 237: */
XSFAAGW = ((*NL(DSFAAGW_i))+1) ;
YSFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),XSFAAGW)) ;
(*YSFAAGW) = NOFAAGW_byteg(C);
 /* line 238: */
ZSFAAGW = ((*NL(DSFAAGW_i))+2) ;
ATFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),ZSFAAGW)) ;
(*ATFAAGW) = IOFAAGW_bytef(C);
 /* line 239: */
BTFAAGW = ((*NL(DSFAAGW_i))+3) ;
CTFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),BTFAAGW)) ;
(*CTFAAGW) = FOFAAGW_bytee(C);
 /* line 240: */
 /* line 241: */
 /* line 242: */
(*NL(DSFAAGW_i))+=4;
} 
else
{ 
DTFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),(*NL(DSFAAGW_i)))) ;
(*DTFAAGW) = VNFAAGW_bytec(ROFAAGW_replacementcharacter);
 /* line 243: */
ETFAAGW = ((*NL(DSFAAGW_i))+1) ;
FTFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),ETFAAGW)) ;
(*FTFAAGW) = IOFAAGW_bytef(ROFAAGW_replacementcharacter);
 /* line 244: */
GTFAAGW = ((*NL(DSFAAGW_i))+2) ;
HTFAAGW = (&A_R1INDEX(*NL(BSFAAGW_u),GTFAAGW)) ;
(*HTFAAGW) = FOFAAGW_bytee(ROFAAGW_replacementcharacter);
 /* line 245: */
 /* line 246: */
 /* line 247: */
(*NL(DSFAAGW_i))+=3;
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(append);
return;
} 
#undef NL

A_STATIC A68_VOID  JUFAAGW_generator(A68_BOOL  HUFAAGW_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KUFAAGW_generator *)NonLocals)->x)
{ 
A68_RC  LUFAAGW;  /* clause result */
A68_RC  MUFAAGW;  /* OPERATORS - dynamic generator */
{ 
MUFAAGW.dim[0].upb = NL(U).dim[0].upb ;
MUFAAGW.dim[0].lwb = 1 ;
A_1INITSTRIDES(MUFAAGW) ;
( HUFAAGW_anonymous? A_R1LOC(A68_CHAR ,MUFAAGW): A_R1HEAP(A68_CHAR ,MUFAAGW) );
LUFAAGW = MUFAAGW;
} 
*ReturnedValue = (LUFAAGW);
return;
} 
#undef NL

A_STATIC A68_VOID  XUFAAGW_generator(A68_BOOL  VUFAAGW_anonymous, A68_63  *ReturnedValue, void *NonLocals)
#define NL(x) (((YUFAAGW_generator *)NonLocals)->x)
{ 
A68_63  ZUFAAGW;  /* clause result */
A68_63  AVFAAGW;  /* OPERATORS - dynamic generator */
{ 
AVFAAGW.dim[0].upb = NL(String).dim[0].upb ;
AVFAAGW.dim[0].lwb = 1 ;
A_1INITSTRIDES(AVFAAGW) ;
( VUFAAGW_anonymous? A_R1LOC(A68_SSBITS ,AVFAAGW): A_R1HEAP(A68_SSBITS ,AVFAAGW) );
ZUFAAGW = AVFAAGW;
} 
*ReturnedValue = (ZUFAAGW);
return;
} 
#undef NL

A_STATIC A68_VOID  ILFAAGW_generator(A68_BOOL  HLFAAGW_anonymous, A68_63  *ReturnedValue)
{ 
A68_63  JLFAAGW;  /* clause result */
A68_63  KLFAAGW;  /* OPERATORS - dynamic generator */
{ 
KLFAAGW.dim[0].upb = 0 ;
KLFAAGW.dim[0].lwb = 1 ;
A_1INITSTRIDES(KLFAAGW) ;
( HLFAAGW_anonymous? A_R1LOC(A68_SSBITS ,KLFAAGW): A_R1HEAP(A68_SSBITS ,KLFAAGW) );
JLFAAGW = KLFAAGW;
} 
*ReturnedValue = (JLFAAGW);
return;
} 
#undef NL

A_STATIC A68_BOOL  NLFAAGW_isbytea(A68_SSBITS  Byte)
{ 
A68_BOOL  OLFAAGW;  /* clause result */
A_PROC_ENTRY(isbytea);
OLFAAGW = ((A68_BITS )(AGFAAGW_bin(Byte)&0X80U)==0X0U);
A_PROC_EXIT(isbytea);
return( OLFAAGW );
} 
#undef NL

A_STATIC A68_BOOL  QLFAAGW_isbyteb(A68_SSBITS  Byte)
{ 
A68_BOOL  RLFAAGW;  /* clause result */
A_PROC_ENTRY(isbyteb);
RLFAAGW = ((A68_BITS )(AGFAAGW_bin(Byte)&0Xe0U)==0Xc0U);
A_PROC_EXIT(isbyteb);
return( RLFAAGW );
} 
#undef NL

A_STATIC A68_BOOL  TLFAAGW_isbytec(A68_SSBITS  Byte)
{ 
A68_BOOL  ULFAAGW;  /* clause result */
A_PROC_ENTRY(isbytec);
ULFAAGW = ((A68_BITS )(AGFAAGW_bin(Byte)&0Xf0U)==0Xe0U);
A_PROC_EXIT(isbytec);
return( ULFAAGW );
} 
#undef NL

A_STATIC A68_BOOL  WLFAAGW_isbyted(A68_SSBITS  Byte)
{ 
A68_BOOL  XLFAAGW;  /* clause result */
A_PROC_ENTRY(isbyted);
XLFAAGW = ((A68_BITS )(AGFAAGW_bin(Byte)&0Xf8U)==0Xf0U);
A_PROC_EXIT(isbyted);
return( XLFAAGW );
} 
#undef NL

A_STATIC A68_BOOL  ZLFAAGW_isbytee(A68_SSBITS  Byte)
{ 
A68_BOOL  AMFAAGW;  /* clause result */
A_PROC_ENTRY(isbytee);
AMFAAGW = ((A68_BITS )(AGFAAGW_bin(Byte)&0Xc0U)==0X80U);
A_PROC_EXIT(isbytee);
return( AMFAAGW );
} 
#undef NL

A_STATIC A68_BOOL  CMFAAGW_isbytef(A68_SSBITS  Byte)
{ 
A68_BOOL  DMFAAGW;  /* clause result */
A_PROC_ENTRY(isbytef);
DMFAAGW = ((A68_BITS )(AGFAAGW_bin(Byte)&0Xc0U)==0X80U);
A_PROC_EXIT(isbytef);
return( DMFAAGW );
} 
#undef NL

A_STATIC A68_BOOL  FMFAAGW_isbyteg(A68_SSBITS  Byte)
{ 
A68_BOOL  GMFAAGW;  /* clause result */
A_PROC_ENTRY(isbyteg);
GMFAAGW = ((A68_BITS )(AGFAAGW_bin(Byte)&0Xc0U)==0X80U);
A_PROC_EXIT(isbyteg);
return( GMFAAGW );
} 
#undef NL

A_STATIC A68_BITS  IMFAAGW_worda(A68_SSBITS  Byte)
{ 
A68_BITS  JMFAAGW;  /* clause result */
A_PROC_ENTRY(worda);
JMFAAGW = AGFAAGW_bin(Byte);
A_PROC_EXIT(worda);
return( JMFAAGW );
} 
#undef NL

A_STATIC A68_BITS  LMFAAGW_wordb(A68_SSBITS  Byte)
{ 
A68_BITS  MMFAAGW;  /* clause result */
A68_INT  NMFAAGW;  /* SHL */
A68_BITS  OMFAAGW;  /* SHL */
A_PROC_ENTRY(wordb);
NMFAAGW = 6 ;
OMFAAGW = (A68_BITS )(AGFAAGW_bin(Byte)&0X1fU) ;
MMFAAGW = A_SHL(OMFAAGW,NMFAAGW);
A_PROC_EXIT(wordb);
return( MMFAAGW );
} 
#undef NL

A_STATIC A68_BITS  QMFAAGW_wordc(A68_SSBITS  Byte)
{ 
A68_BITS  RMFAAGW;  /* clause result */
A68_INT  SMFAAGW;  /* SHL */
A68_BITS  TMFAAGW;  /* SHL */
A_PROC_ENTRY(wordc);
SMFAAGW = 12 ;
TMFAAGW = (A68_BITS )(AGFAAGW_bin(Byte)&0XfU) ;
RMFAAGW = A_SHL(TMFAAGW,SMFAAGW);
A_PROC_EXIT(wordc);
return( RMFAAGW );
} 
#undef NL

A_STATIC A68_BITS  VMFAAGW_wordd(A68_SSBITS  Byte)
{ 
A68_BITS  WMFAAGW;  /* clause result */
A68_INT  XMFAAGW;  /* SHL */
A68_BITS  YMFAAGW;  /* SHL */
A_PROC_ENTRY(wordd);
XMFAAGW = 18 ;
YMFAAGW = (A68_BITS )(AGFAAGW_bin(Byte)&0X7U) ;
WMFAAGW = A_SHL(YMFAAGW,XMFAAGW);
A_PROC_EXIT(wordd);
return( WMFAAGW );
} 
#undef NL

A_STATIC A68_BITS  ANFAAGW_worde(A68_SSBITS  Byte)
{ 
A68_BITS  BNFAAGW;  /* clause result */
A_PROC_ENTRY(worde);
BNFAAGW = (A68_BITS )(AGFAAGW_bin(Byte)&0X3fU);
A_PROC_EXIT(worde);
return( BNFAAGW );
} 
#undef NL

A_STATIC A68_BITS  DNFAAGW_wordf(A68_SSBITS  Byte)
{ 
A68_BITS  ENFAAGW;  /* clause result */
A68_INT  FNFAAGW;  /* SHL */
A68_BITS  GNFAAGW;  /* SHL */
A_PROC_ENTRY(wordf);
FNFAAGW = 6 ;
GNFAAGW = (A68_BITS )(AGFAAGW_bin(Byte)&0X3fU) ;
ENFAAGW = A_SHL(GNFAAGW,FNFAAGW);
A_PROC_EXIT(wordf);
return( ENFAAGW );
} 
#undef NL

A_STATIC A68_BITS  INFAAGW_wordg(A68_SSBITS  Byte)
{ 
A68_BITS  JNFAAGW;  /* clause result */
A68_INT  KNFAAGW;  /* SHL */
A68_BITS  LNFAAGW;  /* SHL */
A_PROC_ENTRY(wordg);
KNFAAGW = 12 ;
LNFAAGW = (A68_BITS )(AGFAAGW_bin(Byte)&0X3fU) ;
JNFAAGW = A_SHL(LNFAAGW,KNFAAGW);
A_PROC_EXIT(wordg);
return( JNFAAGW );
} 
#undef NL

A_STATIC A68_SSBITS  NNFAAGW_bytea(A68_INT  Codepoint)
{ 
A68_SSBITS  ONFAAGW;  /* clause result */
A_PROC_ENTRY(bytea);
ONFAAGW = MGFAAGW_bite(Codepoint);
A_PROC_EXIT(bytea);
return( ONFAAGW );
} 
#undef NL

A_STATIC A68_SSBITS  QNFAAGW_byteb(A68_INT  Codepoint)
{ 
A68_SSBITS  RNFAAGW;  /* clause result */
A68_INT  SNFAAGW;  /* SHR */
A68_BITS  TNFAAGW;  /* SHR */
A_PROC_ENTRY(byteb);
SNFAAGW = 6 ;
TNFAAGW = (A68_BITS )Codepoint ;
RNFAAGW = JGFAAGW_bite((A68_BITS )(0Xc0U|(A68_BITS )(A_SHR(TNFAAGW,SNFAAGW)&0X1fU)));
A_PROC_EXIT(byteb);
return( RNFAAGW );
} 
#undef NL

A_STATIC A68_SSBITS  VNFAAGW_bytec(A68_INT  Codepoint)
{ 
A68_SSBITS  WNFAAGW;  /* clause result */
A68_INT  XNFAAGW;  /* SHR */
A68_BITS  YNFAAGW;  /* SHR */
A_PROC_ENTRY(bytec);
XNFAAGW = 12 ;
YNFAAGW = (A68_BITS )Codepoint ;
WNFAAGW = JGFAAGW_bite((A68_BITS )(0Xe0U|(A68_BITS )(A_SHR(YNFAAGW,XNFAAGW)&0XfU)));
A_PROC_EXIT(bytec);
return( WNFAAGW );
} 
#undef NL

A_STATIC A68_SSBITS  AOFAAGW_byted(A68_INT  Codepoint)
{ 
A68_SSBITS  BOFAAGW;  /* clause result */
A68_INT  COFAAGW;  /* SHR */
A68_BITS  DOFAAGW;  /* SHR */
A_PROC_ENTRY(byted);
COFAAGW = 18 ;
DOFAAGW = (A68_BITS )Codepoint ;
BOFAAGW = JGFAAGW_bite((A68_BITS )(0Xf0U|(A68_BITS )(A_SHR(DOFAAGW,COFAAGW)&0X7U)));
A_PROC_EXIT(byted);
return( BOFAAGW );
} 
#undef NL

A_STATIC A68_SSBITS  FOFAAGW_bytee(A68_INT  Codepoint)
{ 
A68_SSBITS  GOFAAGW;  /* clause result */
A_PROC_ENTRY(bytee);
GOFAAGW = JGFAAGW_bite((A68_BITS )(0X80U|(A68_BITS )((A68_BITS )Codepoint&0X3fU)));
A_PROC_EXIT(bytee);
return( GOFAAGW );
} 
#undef NL

A_STATIC A68_SSBITS  IOFAAGW_bytef(A68_INT  Codepoint)
{ 
A68_SSBITS  JOFAAGW;  /* clause result */
A68_INT  KOFAAGW;  /* SHR */
A68_BITS  LOFAAGW;  /* SHR */
A_PROC_ENTRY(bytef);
KOFAAGW = 6 ;
LOFAAGW = (A68_BITS )Codepoint ;
JOFAAGW = JGFAAGW_bite((A68_BITS )(0X80U|(A68_BITS )(A_SHR(LOFAAGW,KOFAAGW)&0X3fU)));
A_PROC_EXIT(bytef);
return( JOFAAGW );
} 
#undef NL

A_STATIC A68_SSBITS  NOFAAGW_byteg(A68_INT  Codepoint)
{ 
A68_SSBITS  OOFAAGW;  /* clause result */
A68_INT  POFAAGW;  /* SHR */
A68_BITS  QOFAAGW;  /* SHR */
A_PROC_ENTRY(byteg);
POFAAGW = 12 ;
QOFAAGW = (A68_BITS )Codepoint ;
OOFAAGW = JGFAAGW_bite((A68_BITS )(0X80U|(A68_BITS )(A_SHR(QOFAAGW,POFAAGW)&0X3fU)));
A_PROC_EXIT(byteg);
return( OOFAAGW );
} 
#undef NL

A_STATIC A68_VOID  VOFAAGW_countcodepointsandvalidate(A68_63  U, A68_INT * Length, A68_BOOL * Valid)
{ 
A68_INT  WOFAAGW_i;
A68_BOOL  XOFAAGW;  /* optbool result */
A68_INT  YOFAAGW;  /* YIELD */
A68_BOOL  ZOFAAGW;  /* optbool result */
A68_INT  APFAAGW;  /* YIELD */
A68_INT  BPFAAGW;  /* YIELD */
A68_BOOL  CPFAAGW;  /* optbool result */
A68_INT  DPFAAGW;  /* YIELD */
A68_INT  EPFAAGW;  /* YIELD */
A68_INT  FPFAAGW;  /* YIELD */
A_PROC_ENTRY(countcodepointsandvalidate);
 /* line 132: */
 /* line 133: */
{ 
(*Valid) = A68_TRUE;
 /* line 134: */
(*Length) = 0;
 /* line 135: */
WOFAAGW_i = U.dim[0].lwb;
 /* line 136: */
for ( ;; )
{ 
 /* line 137: */
if ( !((WOFAAGW_i<=U.dim[0].upb)) ) break;
 /* line 138: */
if ( NLFAAGW_isbytea(A_R1INDEX(U,WOFAAGW_i)) )
{ 
 /* line 139: */
WOFAAGW_i+=1;
} 
else
{ 
XOFAAGW = QLFAAGW_isbyteb(A_R1INDEX(U,WOFAAGW_i));
if ( XOFAAGW )
{XOFAAGW = ((WOFAAGW_i+1)<=U.dim[0].upb);
}
if ( XOFAAGW )
{YOFAAGW = (WOFAAGW_i+1) ;
XOFAAGW = ZLFAAGW_isbytee(A_R1INDEX(U,YOFAAGW));
}
 /* line 140: */
if ( XOFAAGW )
{ 
 /* line 141: */
WOFAAGW_i+=2;
} 
else
{ 
ZOFAAGW = TLFAAGW_isbytec(A_R1INDEX(U,WOFAAGW_i));
if ( ZOFAAGW )
{ZOFAAGW = ((WOFAAGW_i+2)<=U.dim[0].upb);
}
if ( ZOFAAGW )
{APFAAGW = (WOFAAGW_i+1) ;
ZOFAAGW = CMFAAGW_isbytef(A_R1INDEX(U,APFAAGW));
}
if ( ZOFAAGW )
{BPFAAGW = (WOFAAGW_i+2) ;
ZOFAAGW = ZLFAAGW_isbytee(A_R1INDEX(U,BPFAAGW));
}
 /* line 142: */
if ( ZOFAAGW )
{ 
 /* line 143: */
WOFAAGW_i+=3;
} 
else
{ 
CPFAAGW = WLFAAGW_isbyted(A_R1INDEX(U,WOFAAGW_i));
if ( CPFAAGW )
{CPFAAGW = ((WOFAAGW_i+3)<=U.dim[0].upb);
}
if ( CPFAAGW )
{DPFAAGW = (WOFAAGW_i+1) ;
CPFAAGW = FMFAAGW_isbyteg(A_R1INDEX(U,DPFAAGW));
}
if ( CPFAAGW )
{EPFAAGW = (WOFAAGW_i+2) ;
CPFAAGW = CMFAAGW_isbytef(A_R1INDEX(U,EPFAAGW));
}
if ( CPFAAGW )
{FPFAAGW = (WOFAAGW_i+3) ;
CPFAAGW = ZLFAAGW_isbytee(A_R1INDEX(U,FPFAAGW));
}
 /* line 144: */
if ( CPFAAGW )
{ 
 /* line 145: */
 /* line 146: */
WOFAAGW_i+=4;
} 
else
{ 
(*Valid) = A68_FALSE;
 /* line 147: */
 /* line 148: */
WOFAAGW_i+=1;
} 
} 
} 
} 
 /* line 149: */
 /* line 150: */
(*Length)+=1;
}
 /* line 151: */
} 
A_PROC_EXIT(countcodepointsandvalidate);
return;
} 
#undef NL

A68_INT  HPFAAGW_countcodepoints(A68_63  U)
{ 
A68_INT  IPFAAGW_i;
A68_BOOL  JPFAAGW_v;
A68_INT  KPFAAGW;  /* clause result */
A_PROC_ENTRY(countcodepoints);
{ 
VOFAAGW_countcodepointsandvalidate(U, (&IPFAAGW_i), (&JPFAAGW_v));
KPFAAGW = IPFAAGW_i;
} 
A_PROC_EXIT(countcodepoints);
return( KPFAAGW );
} 
#undef NL

A68_BOOL  MPFAAGW_valid(A68_63  U)
{ 
A68_INT  NPFAAGW_i;
A68_BOOL  OPFAAGW_v;
A68_BOOL  PPFAAGW;  /* clause result */
A_PROC_ENTRY(valid);
{ 
VOFAAGW_countcodepointsandvalidate(U, (&NPFAAGW_i), (&OPFAAGW_v));
PPFAAGW = OPFAAGW_v;
} 
A_PROC_EXIT(valid);
return( PPFAAGW );
} 
#undef NL

A68_VOID  RPFAAGW_unpackutf8(A68_63  U, A68_65  *ReturnedValue)
{ 
A68_INT  SPFAAGW_length;
A68_232  UPFAAGW_generator;   /* proc value of non-global proc */
A68_65  AQFAAGW;  /* avoid structure result */
A68_65  ZPFAAGW_codepoints;
A68_INT  BQFAAGW_i;
A68_INT  CQFAAGW_j;
A68_INT  DQFAAGW_j;
A68_INT  EQFAAGW;  /* to part of loop */
A68_INT * FQFAAGW;  /* YIELD */
A68_INT  GQFAAGW;  /* YIELD */
A68_INT * HQFAAGW;  /* YIELD */
A68_INT  IQFAAGW;  /* YIELD */
A68_INT  JQFAAGW;  /* YIELD */
A68_INT * KQFAAGW;  /* YIELD */
A68_INT  LQFAAGW;  /* YIELD */
A68_INT  MQFAAGW;  /* YIELD */
A68_INT  NQFAAGW;  /* YIELD */
A68_INT * OQFAAGW;  /* YIELD */
A68_INT * PQFAAGW;  /* YIELD */
A68_65  QQFAAGW;  /* clause result */
A_PROC_ENTRY(unpackutf8);
 /* line 161: */
 /* line 162: */
{ 
SPFAAGW_length = HPFAAGW_countcodepoints(U);
 /* line 163: */
A_CLOSURE( UPFAAGW_generator, VPFAAGW_generator, WPFAAGW_generator );
(( WPFAAGW_generator * ) ( UPFAAGW_generator.nonlocals )) -> SPFAAGW_length = SPFAAGW_length;
A_CALLPROC(UPFAAGW_generator,(A68_TRUE, &AQFAAGW),(A68_TRUE, &AQFAAGW,(UPFAAGW_generator).nonlocals));
ZPFAAGW_codepoints = AQFAAGW;
 /* line 164: */
BQFAAGW_i = 1;
 /* line 165: */
CQFAAGW_j = 1;
 /* line 166: */
EQFAAGW = SPFAAGW_length;
for ( DQFAAGW_j = 1;
DQFAAGW_j <= EQFAAGW;
DQFAAGW_j += 1 )
{ 
 /* line 167: */
 /* line 168: */
if ( NLFAAGW_isbytea(A_R1INDEX(U,BQFAAGW_i)) )
{ 
FQFAAGW = (&A_R1INDEX(ZPFAAGW_codepoints,DQFAAGW_j)) ;
(*FQFAAGW) = (A68_INT )IMFAAGW_worda(A_R1INDEX(U,BQFAAGW_i));
 /* line 169: */
 /* line 170: */
BQFAAGW_i+=1;
} 
else
{ 
 /* line 171: */
if ( QLFAAGW_isbyteb(A_R1INDEX(U,BQFAAGW_i)) )
{ 
GQFAAGW = (BQFAAGW_i+1) ;
HQFAAGW = (&A_R1INDEX(ZPFAAGW_codepoints,DQFAAGW_j)) ;
(*HQFAAGW) = (A68_INT )(A68_BITS )(LMFAAGW_wordb(A_R1INDEX(U,BQFAAGW_i))|ANFAAGW_worde(A_R1INDEX(U,GQFAAGW)));
 /* line 172: */
 /* line 173: */
BQFAAGW_i+=2;
} 
else
{ 
 /* line 174: */
if ( TLFAAGW_isbytec(A_R1INDEX(U,BQFAAGW_i)) )
{ 
IQFAAGW = (BQFAAGW_i+1) ;
JQFAAGW = (BQFAAGW_i+2) ;
KQFAAGW = (&A_R1INDEX(ZPFAAGW_codepoints,DQFAAGW_j)) ;
(*KQFAAGW) = (A68_INT )(A68_BITS )((A68_BITS )(QMFAAGW_wordc(A_R1INDEX(U,BQFAAGW_i))|DNFAAGW_wordf(A_R1INDEX(U,IQFAAGW)))|ANFAAGW_worde(A_R1INDEX(U,JQFAAGW)));
 /* line 175: */
 /* line 176: */
BQFAAGW_i+=3;
} 
else
{ 
 /* line 177: */
if ( WLFAAGW_isbyted(A_R1INDEX(U,BQFAAGW_i)) )
{ 
LQFAAGW = (BQFAAGW_i+1) ;
MQFAAGW = (BQFAAGW_i+2) ;
NQFAAGW = (BQFAAGW_i+3) ;
OQFAAGW = (&A_R1INDEX(ZPFAAGW_codepoints,DQFAAGW_j)) ;
(*OQFAAGW) = (A68_INT )(A68_BITS )((A68_BITS )((A68_BITS )(VMFAAGW_wordd(A_R1INDEX(U,BQFAAGW_i))|INFAAGW_wordg(A_R1INDEX(U,LQFAAGW)))|DNFAAGW_wordf(A_R1INDEX(U,MQFAAGW)))|ANFAAGW_worde(A_R1INDEX(U,NQFAAGW)));
 /* line 178: */
 /* line 179: */
 /* line 180: */
BQFAAGW_i+=4;
} 
else
{ 
PQFAAGW = (&A_R1INDEX(ZPFAAGW_codepoints,DQFAAGW_j)) ;
(*PQFAAGW) = A_ABS(ROFAAGW_replacementcharacter);
 /* line 181: */
 /* line 182: */
 /* line 183: */
BQFAAGW_i+=1;
} 
} 
} 
} 
}
 /* line 184: */
 /* line 185: */
QQFAAGW = ZPFAAGW_codepoints;
} 
A_PROC_EXIT(unpackutf8);
*ReturnedValue = (QQFAAGW);
return;
} 
#undef NL

A68_VOID  SQFAAGW_utf8(A68_233  Substrings, A68_63  *ReturnedValue)
{ 
A68_INT  TQFAAGW_n;
A68_93  VQFAAGW_inc;   /* proc value of non-global proc */
A68_226  ZQFAAGW_substring;
A68_226 * ARFAAGW;  /* forall control - []x */
A68_INT  BRFAAGW;  /* forall loop counter */
A68_226  CRFAAGW;  /* united object - for case conformity */
A68_63  DRFAAGW_bytes;
A68_CHAR  ERFAAGW_char;
A68_RC  FRFAAGW_latin1;
A68_CHAR  GRFAAGW_c;
A68_CHAR * HRFAAGW;  /* forall control - []x */
A68_INT  IRFAAGW;  /* forall loop counter */
A68_INT  JRFAAGW_code;
A68_BITS  KRFAAGW_code;
A68_61  LRFAAGW_codes;
A68_BITS  MRFAAGW_c;
A68_BITS * NRFAAGW;  /* forall control - []x */
A68_INT  ORFAAGW;  /* forall loop counter */
A68_65  PRFAAGW_codes;
A68_INT  QRFAAGW_c;
A68_INT * RRFAAGW;  /* forall control - []x */
A68_INT  SRFAAGW;  /* forall loop counter */
A68_INT  TRFAAGW;  /* clause result */
A68_INT  URFAAGW_utf8buffersize;
A68_225  WRFAAGW_generator;   /* proc value of non-global proc */
A68_224  CSFAAGW;  /* avoid structure result */
A68_224  BSFAAGW_u;
A68_INT  DSFAAGW_i;
A68_93  FSFAAGW_append;   /* proc value of non-global proc */
A68_226  ITFAAGW_substring;
A68_226 * JTFAAGW;  /* forall control - []x */
A68_INT  KTFAAGW;  /* forall loop counter */
A68_226  LTFAAGW;  /* united object - for case conformity */
A68_63  MTFAAGW_bytes;
A68_63  NTFAAGW;  /* OPERATORS - trim index */
A68_63  OTFAAGW;  /* YIELD */
A68_CHAR  PTFAAGW_character;
A68_RC  QTFAAGW_latin1;
A68_CHAR  RTFAAGW_c;
A68_CHAR * STFAAGW;  /* forall control - []x */
A68_INT  TTFAAGW;  /* forall loop counter */
A68_INT  UTFAAGW_code;
A68_BITS  VTFAAGW_code;
A68_61  WTFAAGW_codes;
A68_BITS  XTFAAGW_w;
A68_BITS * YTFAAGW;  /* forall control - []x */
A68_INT  ZTFAAGW;  /* forall loop counter */
A68_65  AUFAAGW_codes;
A68_INT  BUFAAGW_i;
A68_INT * CUFAAGW;  /* forall control - []x */
A68_INT  DUFAAGW;  /* forall loop counter */
A68_63  EUFAAGW;  /* clause result */
A_PROC_ENTRY(utf8);
 /* line 189: */
 /* line 191: */
{ 
 /* line 192: */
{ 
TQFAAGW_n = 0;
 /* line 193: */
A_CLOSURE( VQFAAGW_inc, WQFAAGW_inc, XQFAAGW_inc );
(( XQFAAGW_inc * ) ( VQFAAGW_inc.nonlocals )) -> TQFAAGW_n = (&TQFAAGW_n);
 /* line 200: */
BRFAAGW = Substrings.dim[0].upb - Substrings.dim[0].lwb;
ARFAAGW = Substrings.data;
for (;BRFAAGW-- >= 0;
(ARFAAGW += Substrings.dim[0].stride
) )
{
ZQFAAGW_substring = *ARFAAGW;
 /* line 201: */
 /* line 202: */
CRFAAGW = ZQFAAGW_substring ;
switch ( CRFAAGW.mode )
{ 
case 1: /* [] SHORT SHORT BITS */
DRFAAGW_bytes = (CRFAAGW.data.mode1);
 /* line 203: */
TQFAAGW_n+=DRFAAGW_bytes.dim[0].upb;
break;
case 2: /* CHAR */
ERFAAGW_char = (CRFAAGW.data.mode2);
 /* line 204: */
A_CALLPROC(VQFAAGW_inc,((A68_INT)(unsigned char)ERFAAGW_char),((A68_INT)(unsigned char)ERFAAGW_char,(VQFAAGW_inc).nonlocals));
break;
case 5: /* [] CHAR */
FRFAAGW_latin1 = (CRFAAGW.data.mode5);
IRFAAGW = FRFAAGW_latin1.dim[0].upb - FRFAAGW_latin1.dim[0].lwb;
HRFAAGW = FRFAAGW_latin1.data;
for (;IRFAAGW-- >= 0;
(HRFAAGW += FRFAAGW_latin1.dim[0].stride
) )
{
GRFAAGW_c = *HRFAAGW;
A_CALLPROC(VQFAAGW_inc,((A68_INT)(unsigned char)GRFAAGW_c),((A68_INT)(unsigned char)GRFAAGW_c,(VQFAAGW_inc).nonlocals));
}
 /* line 205: */
break;
case 3: /* INT */
JRFAAGW_code = (CRFAAGW.data.mode3);
 /* line 206: */
A_CALLPROC(VQFAAGW_inc,(JRFAAGW_code),(JRFAAGW_code,(VQFAAGW_inc).nonlocals));
break;
case 4: /* BITS */
KRFAAGW_code = (CRFAAGW.data.mode4);
 /* line 207: */
A_CALLPROC(VQFAAGW_inc,((A68_INT )KRFAAGW_code),((A68_INT )KRFAAGW_code,(VQFAAGW_inc).nonlocals));
break;
case 7: /* [] BITS */
LRFAAGW_codes = (CRFAAGW.data.mode7);
ORFAAGW = LRFAAGW_codes.dim[0].upb - LRFAAGW_codes.dim[0].lwb;
NRFAAGW = LRFAAGW_codes.data;
for (;ORFAAGW-- >= 0;
(NRFAAGW += LRFAAGW_codes.dim[0].stride
) )
{
MRFAAGW_c = *NRFAAGW;
A_CALLPROC(VQFAAGW_inc,((A68_INT )MRFAAGW_c),((A68_INT )MRFAAGW_c,(VQFAAGW_inc).nonlocals));
}
 /* line 208: */
break;
case 6: /* [] INT */
PRFAAGW_codes = (CRFAAGW.data.mode6);
SRFAAGW = PRFAAGW_codes.dim[0].upb - PRFAAGW_codes.dim[0].lwb;
RRFAAGW = PRFAAGW_codes.data;
for (;SRFAAGW-- >= 0;
(RRFAAGW += PRFAAGW_codes.dim[0].stride
) )
{
QRFAAGW_c = *RRFAAGW;
A_CALLPROC(VQFAAGW_inc,(QRFAAGW_c),(QRFAAGW_c,(VQFAAGW_inc).nonlocals));
}
 /* line 209: */
 /* line 210: */
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 211: */
TRFAAGW = TQFAAGW_n;
} 
URFAAGW_utf8buffersize = TRFAAGW;
 /* line 213: */
A_CLOSURE( WRFAAGW_generator, XRFAAGW_generator, YRFAAGW_generator );
(( YRFAAGW_generator * ) ( WRFAAGW_generator.nonlocals )) -> URFAAGW_utf8buffersize = URFAAGW_utf8buffersize;
A_CALLPROC(WRFAAGW_generator,(A68_TRUE, &CSFAAGW),(A68_TRUE, &CSFAAGW,(WRFAAGW_generator).nonlocals));
BSFAAGW_u = CSFAAGW;
 /* line 214: */
DSFAAGW_i = 1;
 /* line 216: */
A_CLOSURE( FSFAAGW_append, GSFAAGW_append, HSFAAGW_append );
(( HSFAAGW_append * ) ( FSFAAGW_append.nonlocals )) -> BSFAAGW_u = (&BSFAAGW_u);
(( HSFAAGW_append * ) ( FSFAAGW_append.nonlocals )) -> DSFAAGW_i = (&DSFAAGW_i);
 /* line 249: */
KTFAAGW = Substrings.dim[0].upb - Substrings.dim[0].lwb;
JTFAAGW = Substrings.data;
for (;KTFAAGW-- >= 0;
(JTFAAGW += Substrings.dim[0].stride
) )
{
ITFAAGW_substring = *JTFAAGW;
 /* line 250: */
 /* line 251: */
LTFAAGW = ITFAAGW_substring ;
switch ( LTFAAGW.mode )
{ 
case 1: /* [] SHORT SHORT BITS */
MTFAAGW_bytes = (LTFAAGW.data.mode1);
{ 
OTFAAGW = A_R1TRIM(NTFAAGW,(*(&BSFAAGW_u)),A_RTSCRIPT(&(NTFAAGW.dim[0]),&((*(&BSFAAGW_u)).dim[0]),DSFAAGW_i,((DSFAAGW_i+MTFAAGW_bytes.dim[0].upb)-1),1)) ;
A_R1ASSIGN2(MTFAAGW_bytes,OTFAAGW,A68_SSBITS );
 /* line 252: */
DSFAAGW_i+=MTFAAGW_bytes.dim[0].upb;
} 
break;
case 2: /* CHAR */
PTFAAGW_character = (LTFAAGW.data.mode2);
 /* line 253: */
A_CALLPROC(FSFAAGW_append,((A68_INT)(unsigned char)PTFAAGW_character),((A68_INT)(unsigned char)PTFAAGW_character,(FSFAAGW_append).nonlocals));
break;
case 5: /* [] CHAR */
QTFAAGW_latin1 = (LTFAAGW.data.mode5);
TTFAAGW = QTFAAGW_latin1.dim[0].upb - QTFAAGW_latin1.dim[0].lwb;
STFAAGW = QTFAAGW_latin1.data;
for (;TTFAAGW-- >= 0;
(STFAAGW += QTFAAGW_latin1.dim[0].stride
) )
{
RTFAAGW_c = *STFAAGW;
A_CALLPROC(FSFAAGW_append,((A68_INT)(unsigned char)RTFAAGW_c),((A68_INT)(unsigned char)RTFAAGW_c,(FSFAAGW_append).nonlocals));
}
 /* line 254: */
break;
case 3: /* INT */
UTFAAGW_code = (LTFAAGW.data.mode3);
 /* line 255: */
A_CALLPROC(FSFAAGW_append,(UTFAAGW_code),(UTFAAGW_code,(FSFAAGW_append).nonlocals));
break;
case 4: /* BITS */
VTFAAGW_code = (LTFAAGW.data.mode4);
 /* line 256: */
A_CALLPROC(FSFAAGW_append,((A68_INT )VTFAAGW_code),((A68_INT )VTFAAGW_code,(FSFAAGW_append).nonlocals));
break;
case 7: /* [] BITS */
WTFAAGW_codes = (LTFAAGW.data.mode7);
ZTFAAGW = WTFAAGW_codes.dim[0].upb - WTFAAGW_codes.dim[0].lwb;
YTFAAGW = WTFAAGW_codes.data;
for (;ZTFAAGW-- >= 0;
(YTFAAGW += WTFAAGW_codes.dim[0].stride
) )
{
XTFAAGW_w = *YTFAAGW;
A_CALLPROC(FSFAAGW_append,((A68_INT )XTFAAGW_w),((A68_INT )XTFAAGW_w,(FSFAAGW_append).nonlocals));
}
 /* line 257: */
break;
case 6: /* [] INT */
AUFAAGW_codes = (LTFAAGW.data.mode6);
DUFAAGW = AUFAAGW_codes.dim[0].upb - AUFAAGW_codes.dim[0].lwb;
CUFAAGW = AUFAAGW_codes.data;
for (;DUFAAGW-- >= 0;
(CUFAAGW += AUFAAGW_codes.dim[0].stride
) )
{
BUFAAGW_i = *CUFAAGW;
A_CALLPROC(FSFAAGW_append,(BUFAAGW_i),(BUFAAGW_i,(FSFAAGW_append).nonlocals));
}
 /* line 258: */
 /* line 259: */
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 260: */
 /* line 261: */
EUFAAGW = BSFAAGW_u;
} 
A_PROC_EXIT(utf8);
*ReturnedValue = (EUFAAGW);
return;
} 
#undef NL

A68_VOID  GUFAAGW_utf8toraw(A68_63  U, A68_RC  *ReturnedValue)
{ 
A68_32  IUFAAGW_generator;   /* proc value of non-global proc */
A68_31  OUFAAGW;  /* avoid structure result */
A68_31  NUFAAGW_string;
A68_INT  PUFAAGW_i;
A68_INT  QUFAAGW;  /* to part of loop */
A68_CHAR * RUFAAGW;  /* YIELD */
A68_RC  SUFAAGW;  /* clause result */
A_PROC_ENTRY(utf8toraw);
 /* line 268: */
 /* line 269: */
{ 
A_CLOSURE( IUFAAGW_generator, JUFAAGW_generator, KUFAAGW_generator );
(( KUFAAGW_generator * ) ( IUFAAGW_generator.nonlocals )) -> U = U;
A_CALLPROC(IUFAAGW_generator,(A68_TRUE, &OUFAAGW),(A68_TRUE, &OUFAAGW,(IUFAAGW_generator).nonlocals));
NUFAAGW_string = OUFAAGW;
 /* line 270: */
QUFAAGW = U.dim[0].upb;
for ( PUFAAGW_i = 1;
PUFAAGW_i <= QUFAAGW;
PUFAAGW_i += 1 )
{ 
RUFAAGW = (&A_R1INDEX(*(&NUFAAGW_string),PUFAAGW_i)) ;
(*RUFAAGW) = GGFAAGW_repr(A_R1INDEX(U,PUFAAGW_i));
}
 /* line 271: */
 /* line 272: */
SUFAAGW = NUFAAGW_string;
} 
A_PROC_EXIT(utf8toraw);
*ReturnedValue = (SUFAAGW);
return;
} 
#undef NL

A68_VOID  UUFAAGW_rawtoutf8(A68_RC  String, A68_63  *ReturnedValue)
{ 
A68_225  WUFAAGW_generator;   /* proc value of non-global proc */
A68_224  CVFAAGW;  /* avoid structure result */
A68_224  BVFAAGW_u;
A68_INT  DVFAAGW_i;
A68_INT  EVFAAGW;  /* to part of loop */
A68_SSBITS * FVFAAGW;  /* YIELD */
A68_63  GVFAAGW;  /* clause result */
A_PROC_ENTRY(rawtoutf8);
 /* line 276: */
 /* line 277: */
{ 
A_CLOSURE( WUFAAGW_generator, XUFAAGW_generator, YUFAAGW_generator );
(( YUFAAGW_generator * ) ( WUFAAGW_generator.nonlocals )) -> String = String;
A_CALLPROC(WUFAAGW_generator,(A68_TRUE, &CVFAAGW),(A68_TRUE, &CVFAAGW,(WUFAAGW_generator).nonlocals));
BVFAAGW_u = CVFAAGW;
 /* line 278: */
EVFAAGW = String.dim[0].upb;
for ( DVFAAGW_i = 1;
DVFAAGW_i <= EVFAAGW;
DVFAAGW_i += 1 )
{ 
FVFAAGW = (&A_R1INDEX(*(&BVFAAGW_u),DVFAAGW_i)) ;
(*FVFAAGW) = PGFAAGW_bite(A_R1INDEX(String,DVFAAGW_i));
}
 /* line 279: */
 /* line 280: */
GVFAAGW = BVFAAGW_u;
} 
A_PROC_EXIT(rawtoutf8);
*ReturnedValue = (GVFAAGW);
return;
} 
#undef NL

A68_VOID  IVFAAGW_repr(A68_63  String, A68_RC  *ReturnedValue)
{ 
A68_RC  JVFAAGW;  /* clause result */
A68_RC  KVFAAGW;  /* avoid structure result */
A_PROC_ENTRY(repr);
GUFAAGW_utf8toraw( String, &KVFAAGW );
JVFAAGW = KVFAAGW;
A_PROC_EXIT(repr);
*ReturnedValue = (JVFAAGW);
return;
} 
#undef NL

A68_VOID  MVFAAGW_u(A68_RC  String, A68_63  *ReturnedValue)
{ 
A68_63  NVFAAGW;  /* clause result */
A68_63  OVFAAGW;  /* avoid structure result */
A_PROC_ENTRY(u);
UUFAAGW_rawtoutf8( String, &OVFAAGW );
NVFAAGW = OVFAAGW;
A_PROC_EXIT(u);
*ReturnedValue = (NVFAAGW);
return;
} 
#undef NL

A68_VOID  RVFAAGW_(A68_63  U, A68_63  V, A68_63  *ReturnedValue)
{ 
A68_238  SVFAAGW;  /* collateral clause result */
A68_226  TVFAAGW;  /* OPERATORS - mode -> union mode */
A68_226  UVFAAGW;  /* OPERATORS - mode -> union mode */
A68_63  VVFAAGW;  /* clause result */
A68_233  WVFAAGW;  /* OPERATORS - istruct to row */
A68_63  XVFAAGW;  /* avoid structure result */
A_PROC_ENTRY(+);
SVFAAGW.data[0] = A_UNITE(TVFAAGW,mode1,1,U);
SVFAAGW.data[1] = A_UNITE(UVFAAGW,mode1,1,V);
SQFAAGW_utf8( A_HIS1ARR(WVFAAGW,SVFAAGW,A68_226 ,2), &XVFAAGW );
VVFAAGW = XVFAAGW;
A_PROC_EXIT(+);
*ReturnedValue = (VVFAAGW);
return;
} 
#undef NL

A68_VOID  AWFAAGW_(A68_224 * U, A68_63  V)
{ 
A68_238  BWFAAGW;  /* collateral clause result */
A68_226  CWFAAGW;  /* OPERATORS - mode -> union mode */
A68_226  DWFAAGW;  /* OPERATORS - mode -> union mode */
A68_233  EWFAAGW;  /* OPERATORS - istruct to row */
A68_63  FWFAAGW;  /* avoid structure result */
A68_63  GWFAAGW;  /* OPERATORS - copy to flex */
A_PROC_ENTRY(+:=);
BWFAAGW.data[0] = A_UNITE(CWFAAGW,mode1,1,(*U));
BWFAAGW.data[1] = A_UNITE(DWFAAGW,mode1,1,V);
 /* line 295: */
SQFAAGW_utf8( A_HIS1ARR(EWFAAGW,BWFAAGW,A68_226 ,2), &FWFAAGW );
(*U) = A_R1COPY(FWFAAGW,GWFAAGW,A68_SSBITS );
A_PROC_EXIT(+:=);
return;
} 
#undef NL
 /* line 3: */
 /* line 68: */
void DLFAAGW(void)   /* initialise DECS utf8 */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/usr/bin/a68toc","-s","-v","-lib","/usr/share/algol68toc","-dir","/usr/share/algol68toc","-dir","lib/m","-uname","seedfile","utf8.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"lib/m/bytes.m","/usr/share/algol68toc/standard.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_225  LLFAAGW;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
WFFAAGW();   /* USE bytes */
ANFAASP();   /* USE standard */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/examples/tests/utf8.a68";
A_config.translation_time = "Thu May  6 00:53:43 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "CLFAAGW (from seed file) ";
A_config.spec_change_time = "Thu May  6 00:53:43 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS utf8);
LLFAAGW.fn.fn_global = ILFAAGW_generator;
LLFAAGW.nonlocals = A68_NIL;
GLFAAGW_anonymous = LLFAAGW;
 /* line 73: */
 /* line 99: */
 /* line 100: */
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 124: */
 /* line 125: */
 /* line 128: */
ROFAAGW_replacementcharacter = (A68_INT )0XfffdU;
 /* line 131: */
 /* line 154: */
 /* line 157: */
 /* line 160: */
 /* line 188: */
 /* line 267: */
 /* line 275: */
 /* line 283: */
 /* line 286: */
 /* line 289: */
 /* line 292: */
 /* line 308: */
A_PROC_EXIT(DECS utf8);
} 
#undef NL
/* end of translation of utf8.a68 */
