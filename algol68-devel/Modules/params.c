/* UNAME:AAAAAAA */
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
struct A68t218{
struct A68t31  V;
A68_INT  Ty;
A_PAD_INT(PAD_28)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(MODE31,INT)  */
#define A68_219  A68_218 
#define A68t219 A68t218            /* STRUCT(MODE27,INT)  */

A_PROCEDURE(A68_VOID ,A68t220,(A68_BOOL ,struct A68t219 *),(A68_BOOL ,struct A68t219 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(BOOL) MODE219 */
struct A68t222 { A68_INT mode; union {
A68_RC  mode1;
A68_INT  mode2;
A68_REAL  mode3;
struct A68t224 * mode5;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t222  A68_222 ;    /* UNION(MODE27,INT,REAL,VOID,REF MODE224)  */
A_ROW(struct A68t222 ,A68t223,1);
typedef struct A68t223  A68_223 ;    /* [] MODE222 */
struct A68t224{
struct A68t31  Prog;
struct A68t223  Val;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(MODE31,REF MODE223)  */
#define A68_225  A68_224 
#define A68t225 A68t224            /* STRUCT(MODE27,REF MODE223)  */

A_PROCEDURE(A68_VOID ,A68t226,(A68_BOOL ,struct A68t225 *),(A68_BOOL ,struct A68t225 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(BOOL) MODE225 */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t224 *,struct A68t222 ),(struct A68t224 *,struct A68t222 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE224,MODE222) VOID */

A_PROCEDURE(A68_VOID ,A68t228,(A68_BOOL ,struct A68t223 *),(A68_BOOL ,struct A68t223 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(BOOL) MODE223 */

A_PROCEDURE(struct A68t222 *,A68t229,(struct A68t222 *,struct A68t222 ),(struct A68t222 *,struct A68t222 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE222,MODE222) REF MODE222 */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t223 ,struct A68t223 ,struct A68t223 *),(struct A68t223 ,struct A68t223 ,struct A68t223 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE223,MODE223) REF MODE223 */

A_PROCEDURE(struct A68t218 *,A68t231,(struct A68t47 *),(struct A68t47 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE47) REF MODE218 */
A_ISTRUCT(A68_CHAR ,1,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(struct A68t218 *,A68t233,(struct A68t218 *,struct A68t218 ),(struct A68t218 *,struct A68t218 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF MODE218,MODE218) REF MODE218 */
A_ISTRUCT(struct A68t206 ,3,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 3 MODE206 */
A_ISTRUCT(A68_CHAR ,3,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t47 *,struct A68t222 *),(struct A68t47 *,struct A68t222 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE47) MODE222 */
A_ISTRUCT(struct A68t209 ,2,A68t238);
typedef struct A68t238  A68_238 ;    /* STRUCT 2 MODE209 */

A_PROCEDURE(struct A68t224 *,A68t239,(struct A68t224 *,struct A68t224 ),(struct A68t224 *,struct A68t224 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE224,MODE224) REF MODE224 */
struct A68t240 { A68_INT mode; union {
A68_INT  mode1;
A68_REAL  mode2;
A68_RC  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t240  A68_240 ;    /* UNION(INT,REAL,MODE27)  */

A_PROCEDURE(A68_VOID ,A68t241,(A68_BOOL ,struct A68t224 *),(A68_BOOL ,struct A68t224 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(BOOL) MODE224 */

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
#define NUAAASP_blank ' '
extern A68_CHAR  PUAAASP_nullcharacter;
#define XUAAASP_nulch PUAAASP_nullcharacter
extern A68_CHAR  VUAAASP_tabch;
extern A68_BOOL  ECBAASP_charinstring(A68_CHAR ,A68_INT *,A68_RC );
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define QZBAASP_prelude A_prelude
extern A68_VOID  UFCAASP_onlogicalfileend(struct A68t47 *,struct A68t45 );
extern A68_VOID  KGCAASP_maketerm(struct A68t47 *,A68_RC );
extern A68_INT  DICAASP_create(struct A68t47 *,struct A68t40 );
extern A68_VOID  KJCAASP_scratch(struct A68t47 *);
extern A68_VOID  YJCAASP_reset(struct A68t47 *);
extern A68_47  WQCAASP_standback;
extern A68_40  ZRDAASP_standbackchannel;
extern A68_VOID  ETDAASP_backspace(struct A68t47 *);
extern A68_VOID  UKEAASP_get(struct A68t47 *,struct A68t205 );
extern A68_VOID  DWEAASP_put(struct A68t47 *,struct A68t208 );
/* --- End of imports from standard --- */


/* --- DECS initialisation functions --- */
extern void ANFAASP(void);   /* standard */
/* --- end of DECS initialisation functions --- */
static A68_220  EAAAAAA_anonymous;
A68_226  MAAAAAA_anonymous;
#define UAAAAAA_notok (A68_218 *)A68_NIL
A68_224 * VAAAAAA_noparam;
static A68_222  WAAAAAA_prevval;
static A68_232   NCAAAAA = {""}; 
A_GISARR(A68_RC ,OCAAAAA,NCAAAAA,0)
static A68_131   IDAAAAA = {"\"(,)"}; 
A_GISARR(A68_RC ,JDAAAAA,IDAAAAA,4)
static A68_235   GEAAAAA = {"/.~"}; 
A_GISARR(A68_RC ,HEAAAAA,GEAAAAA,3)
static A68_235   IEAAAAA = {"(,)"}; 
A_GISVEC(A68_VC ,JEAAAAA,IEAAAAA,3)
static A68_236   SEAAAAA = {" 0123456789-+.e"}; 
A_GISVEC(A68_VC ,UEAAAAA,SEAAAAA,15)
typedef struct   /* env of non-global proc */
{
A68_224 * Rp;
} EBAAAAA_generator;
typedef struct   /* env of non-global proc */
{
A68_jmp_buf  HCAAAAA_eof;
A_PAD_jmp_buf(PAD_29)
} CDAAAAA_anonymous;
typedef struct   /* env of non-global proc */
{
A68_REAL * TFAAAAA_r;
A68_jmp_buf  RFAAAAA_eofr;
A_PAD_jmp_buf(PAD_30)
} CGAAAAA_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT * PGAAAAA_n;
A68_jmp_buf  NGAAAAA_eofi;
A_PAD_jmp_buf(PAD_31)
} YGAAAAA_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} LHAAAAA_generator;

A_STATIC A68_VOID  GAAAAAA_generator(A68_BOOL  FAAAAAA_anonymous, A68_219  *ReturnedValue);

A_STATIC A68_VOID  OAAAAAA_generator(A68_BOOL  NAAAAAA_anonymous, A68_225  *ReturnedValue);

A68_VOID  ABAAAAA_(A68_224 * Rp, A68_222  V);

A_STATIC A68_VOID  DBAAAAA_generator(A68_BOOL  BBAAAAA_anonymous, A68_223  *ReturnedValue, void *NonLocals);

A_STATIC A68_222 * LBAAAAA_assignment(A68_222 * JBAAAAA_anonymous, A68_222  KBAAAAA_anonymous);

A_STATIC A68_VOID  UBAAAAA_assignment(A68_223  SBAAAAA_anonymous, A68_223  TBAAAAA_anonymous, A68_223  *ReturnedValue);

A_STATIC A68_218 * FCAAAAA_getpartok(A68_47 * F);

A_STATIC A68_218 * RCAAAAA_assignment(A68_218 * PCAAAAA_anonymous, A68_219  QCAAAAA_anonymous);

A_STATIC A68_BOOL  BDAAAAA_anonymous(A68_47 * Ff, void *NonLocals);

A68_VOID  DFAAAAA_getparam(A68_47 * F, A68_222  *ReturnedValue);

A_STATIC A68_BOOL  BGAAAAA_anonymous(A68_47 * F, void *NonLocals);

A_STATIC A68_BOOL  XGAAAAA_anonymous(A68_47 * F, void *NonLocals);

A_STATIC A68_VOID  KHAAAAA_generator(A68_BOOL  IHAAAAA_anonymous, A68_223  *ReturnedValue, void *NonLocals);

A_STATIC A68_224 * RHAAAAA_assignment(A68_224 * PHAAAAA_anonymous, A68_225  QHAAAAA_anonymous);

A_STATIC A68_VOID  DBAAAAA_generator(A68_BOOL  BBAAAAA_anonymous, A68_223  *ReturnedValue, void *NonLocals)
#define NL(x) (((EBAAAAA_generator *)NonLocals)->x)
{ 
A68_223  FBAAAAA;  /* clause result */
A68_223  GBAAAAA;  /* OPERATORS - dynamic generator */
{ 
GBAAAAA.dim[0].upb = (1+(*(&(NL(Rp)->Val))).dim[0].upb) ;
GBAAAAA.dim[0].lwb = 1 ;
A_1INITSTRIDES(GBAAAAA) ;
( BBAAAAA_anonymous? A_R1LOC(A68_222 ,GBAAAAA): A_R1HEAP(A68_222 ,GBAAAAA) );
FBAAAAA = GBAAAAA;
} 
*ReturnedValue = (FBAAAAA);
return;
} 
#undef NL

A_STATIC A68_222 * LBAAAAA_assignment(A68_222 * JBAAAAA_anonymous, A68_222  KBAAAAA_anonymous)
{ 
A68_222  MBAAAAA;  /* united object - for case conformity */
A68_RC  NBAAAAA_anonymous;
A68_RC  OBAAAAA;  /* OPERATORS - copy to flex */
A68_31 * PBAAAAA;  /* YIELD */
A68_222 * QBAAAAA;  /* clause result */
{ 
(*JBAAAAA_anonymous) = KBAAAAA_anonymous;
MBAAAAA = KBAAAAA_anonymous ;
switch ( MBAAAAA.mode )
{ 
case 1: /* [] CHAR */
NBAAAAA_anonymous = (MBAAAAA.data.mode1);
PBAAAAA = &(JBAAAAA_anonymous-> data.mode1) ;
(*PBAAAAA) = A_R1COPY(NBAAAAA_anonymous,OBAAAAA,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
QBAAAAA = JBAAAAA_anonymous;
} 
return( QBAAAAA );
} 
#undef NL

A_STATIC A68_VOID  UBAAAAA_assignment(A68_223  SBAAAAA_anonymous, A68_223  TBAAAAA_anonymous, A68_223  *ReturnedValue)
{ 
A68_222  VBAAAAA_anonymous;
A68_222 * WBAAAAA_anonymous;
A68_222 * XBAAAAA;  /* forall control - []x */
A68_INT  YBAAAAA;  /* forall loop counter */
A68_223  ZBAAAAA;  /* clause result */
{ 
YBAAAAA = TBAAAAA_anonymous.dim[0].upb - TBAAAAA_anonymous.dim[0].lwb;
if ( YBAAAAA != SBAAAAA_anonymous.dim[0].upb - SBAAAAA_anonymous.dim[0].lwb )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
XBAAAAA = TBAAAAA_anonymous.data;
WBAAAAA_anonymous = SBAAAAA_anonymous.data;
for (;YBAAAAA-- >= 0;
(XBAAAAA += TBAAAAA_anonymous.dim[0].stride
,WBAAAAA_anonymous += SBAAAAA_anonymous.dim[0].stride
) )
{
VBAAAAA_anonymous = *XBAAAAA;
LBAAAAA_assignment(WBAAAAA_anonymous, VBAAAAA_anonymous);
}
ZBAAAAA = SBAAAAA_anonymous;
} 
*ReturnedValue = (ZBAAAAA);
return;
} 
#undef NL

A_STATIC A68_218 * RCAAAAA_assignment(A68_218 * PCAAAAA_anonymous, A68_219  QCAAAAA_anonymous)
{ 
A68_RC  SCAAAAA;  /* YIELD */
A68_RC  TCAAAAA;  /* OPERATORS - copy to flex */
A68_31 * UCAAAAA;  /* YIELD */
A68_INT * VCAAAAA;  /* YIELD */
A68_218 * WCAAAAA;  /* clause result */
{ 
SCAAAAA = QCAAAAA_anonymous.V ;
UCAAAAA = (&(PCAAAAA_anonymous->V)) ;
(*UCAAAAA) = A_R1COPY(SCAAAAA,TCAAAAA,A68_CHAR );
VCAAAAA = (&(PCAAAAA_anonymous->Ty)) ;
(*VCAAAAA) = QCAAAAA_anonymous.Ty;
WCAAAAA = PCAAAAA_anonymous;
} 
return( WCAAAAA );
} 
#undef NL

A_STATIC A68_BOOL  BDAAAAA_anonymous(A68_47 * Ff, void *NonLocals)
#define NL(x) (((CDAAAAA_anonymous *)NonLocals)->x)
{ 
A68_BOOL  DDAAAAA;  /* clause result */
A68_BOOL  EDAAAAA;  /* OPERATORS - skip to mode */
{ 
siglongjmp(NL(HCAAAAA_eof).label,1);
DDAAAAA = EDAAAAA;
} 
return( DDAAAAA );
} 
#undef NL

A_STATIC A68_BOOL  BGAAAAA_anonymous(A68_47 * F, void *NonLocals)
#define NL(x) (((CGAAAAA_anonymous *)NonLocals)->x)
{ 
A68_BOOL  DGAAAAA;  /* clause result */
A68_BOOL  EGAAAAA;  /* OPERATORS - skip to mode */
{ 
(*NL(TFAAAAA_r)) = 0.0;
siglongjmp(NL(RFAAAAA_eofr).label,1);
DGAAAAA = EGAAAAA;
} 
return( DGAAAAA );
} 
#undef NL

A_STATIC A68_BOOL  XGAAAAA_anonymous(A68_47 * F, void *NonLocals)
#define NL(x) (((YGAAAAA_anonymous *)NonLocals)->x)
{ 
A68_BOOL  ZGAAAAA;  /* clause result */
A68_BOOL  AHAAAAA;  /* OPERATORS - skip to mode */
{ 
(*NL(PGAAAAA_n)) = 0;
siglongjmp(NL(NGAAAAA_eofi).label,1);
ZGAAAAA = AHAAAAA;
} 
return( ZGAAAAA );
} 
#undef NL

A_STATIC A68_VOID  KHAAAAA_generator(A68_BOOL  IHAAAAA_anonymous, A68_223  *ReturnedValue, void *NonLocals)
#define NL(x) (((LHAAAAA_generator *)NonLocals)->x)
{ 
A68_223  MHAAAAA;  /* clause result */
A68_223  NHAAAAA;  /* OPERATORS - dynamic generator */
{ 
NHAAAAA.dim[0].upb = 0 ;
NHAAAAA.dim[0].lwb = 1 ;
A_1INITSTRIDES(NHAAAAA) ;
( IHAAAAA_anonymous? A_R1LOC(A68_222 ,NHAAAAA): A_R1HEAP(A68_222 ,NHAAAAA) );
MHAAAAA = NHAAAAA;
} 
*ReturnedValue = (MHAAAAA);
return;
} 
#undef NL

A_STATIC A68_224 * RHAAAAA_assignment(A68_224 * PHAAAAA_anonymous, A68_225  QHAAAAA_anonymous)
{ 
A68_RC  SHAAAAA;  /* YIELD */
A68_RC  THAAAAA;  /* OPERATORS - copy to flex */
A68_31 * UHAAAAA;  /* YIELD */
A68_223 * VHAAAAA;  /* YIELD */
A68_224 * WHAAAAA;  /* clause result */
{ 
SHAAAAA = QHAAAAA_anonymous.Prog ;
UHAAAAA = (&(PHAAAAA_anonymous->Prog)) ;
(*UHAAAAA) = A_R1COPY(SHAAAAA,THAAAAA,A68_CHAR );
VHAAAAA = (&(PHAAAAA_anonymous->Val)) ;
(*VHAAAAA) = QHAAAAA_anonymous.Val;
WHAAAAA = PHAAAAA_anonymous;
} 
return( WHAAAAA );
} 
#undef NL

A_STATIC A68_VOID  GAAAAAA_generator(A68_BOOL  FAAAAAA_anonymous, A68_219  *ReturnedValue)
{ 
A68_218  HAAAAAA_anonymous;
A68_RC  IAAAAAA;  /* avoid structure result */
A68_31 * JAAAAAA;  /* YIELD */
A68_219  KAAAAAA;  /* clause result */
{ 
A_CALLPROC(EAAAASP_anonymous,(FAAAAAA_anonymous, &IAAAAAA),(FAAAAAA_anonymous, &IAAAAAA,(EAAAASP_anonymous).nonlocals));
JAAAAAA = (&((&HAAAAAA_anonymous)->V)) ;
(*JAAAAAA) = IAAAAAA;
KAAAAAA = HAAAAAA_anonymous;
} 
*ReturnedValue = (KAAAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  OAAAAAA_generator(A68_BOOL  NAAAAAA_anonymous, A68_225  *ReturnedValue)
{ 
A68_224  PAAAAAA_anonymous;
A68_RC  QAAAAAA;  /* avoid structure result */
A68_31 * RAAAAAA;  /* YIELD */
A68_225  SAAAAAA;  /* clause result */
{ 
A_CALLPROC(EAAAASP_anonymous,(NAAAAAA_anonymous, &QAAAAAA),(NAAAAAA_anonymous, &QAAAAAA,(EAAAASP_anonymous).nonlocals));
RAAAAAA = (&((&PAAAAAA_anonymous)->Prog)) ;
(*RAAAAAA) = QAAAAAA;
SAAAAAA = PAAAAAA_anonymous;
} 
*ReturnedValue = (SAAAAAA);
return;
} 
#undef NL

A68_VOID  ABAAAAA_(A68_224 * Rp, A68_222  V)
{ 
A68_228  CBAAAAA_generator;   /* proc value of non-global proc */
A68_223  HBAAAAA;  /* avoid structure result */
A68_223  IBAAAAA_hv;
A68_INT  RBAAAAA;  /* YIELD */
A68_223  ACAAAAA;  /* OPERATORS - trim index */
A68_223  BCAAAAA;  /* avoid structure result */
A68_INT  CCAAAAA;  /* YIELD */
A68_223 * DCAAAAA;  /* YIELD */
A_PROC_ENTRY(+:=);
{ 
A_CLOSURE( CBAAAAA_generator, DBAAAAA_generator, EBAAAAA_generator );
(( EBAAAAA_generator * ) ( CBAAAAA_generator.nonlocals )) -> Rp = Rp;
A_CALLPROC(CBAAAAA_generator,(A68_FALSE, &HBAAAAA),(A68_FALSE, &HBAAAAA,(CBAAAAA_generator).nonlocals));
IBAAAAA_hv = HBAAAAA;
if ( (IBAAAAA_hv.dim[0].upb==1) )
{ 
 /* line 7: */
RBAAAAA = 1 ;
LBAAAAA_assignment((&A_R1INDEX(IBAAAAA_hv,RBAAAAA)), V);
} 
else
{ 
UBAAAAA_assignment( A_R1TRIM(ACAAAAA,(IBAAAAA_hv),A_RTSCRIPT(&(ACAAAAA.dim[0]),&((IBAAAAA_hv).dim[0]),(IBAAAAA_hv).dim[0].lwb,(IBAAAAA_hv.dim[0].upb-1),1)), (*(&(Rp->Val))), &BCAAAAA );
BCAAAAA;
CCAAAAA = IBAAAAA_hv.dim[0].upb ;
LBAAAAA_assignment((&A_R1INDEX(IBAAAAA_hv,CCAAAAA)), V);
} 
DCAAAAA = (&(Rp->Val)) ;
(*DCAAAAA) = IBAAAAA_hv;
} 
A_PROC_EXIT(+:=);
return;
} 
#undef NL

A_STATIC A68_218 * FCAAAAA_getpartok(A68_47 * F)
{ 
A68_218  JCAAAAA;  /* avoid structure result */
A68_218 * KCAAAAA;  /* staticpart generator */
A68_218 * LCAAAAA_hp;
A68_219  MCAAAAA;  /* collateral clause result */
A68_CHAR  XCAAAAA_ch;
A68_INT  YCAAAAA_p;
A68_45  ADAAAAA_anonymous;   /* proc value of non-global proc */
A68_jmp_buf HCAAAAA_eof;
A68_206  FDAAAAA;  /* OPERATORS - mode -> union mode */
A68_205  GDAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  HDAAAAA;  /* clause result */
A68_INT  KDAAAAA;  /* clause result */
A68_RC  LDAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31  NDAAAAA;  /* avoid structure result */
A68_31  MDAAAAA_s;
A68_234  ODAAAAA;  /* collateral clause result */
A68_206  PDAAAAA;  /* OPERATORS - mode -> union mode */
A68_206  QDAAAAA;  /* OPERATORS - mode -> union mode */
A68_CHAR * RDAAAAA;  /* YIELD */
A68_206  SDAAAAA;  /* OPERATORS - mode -> union mode */
A68_205  TDAAAAA;  /* OPERATORS - istruct to row */
A68_31 * UDAAAAA;  /* YIELD */
A68_BOOL  VDAAAAA;  /* clause result */
A68_RC  WDAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31 * XDAAAAA;  /* YIELD */
A68_INT * YDAAAAA;  /* YIELD */
A68_218 * ZDAAAAA;  /* clause result */
A68_219  AEAAAAA;  /* collateral clause result */
A68_RC  BEAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_219  CEAAAAA;  /* collateral clause result */
A68_RC  DEAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_219  EEAAAAA;  /* collateral clause result */
A68_RC  FEAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KEAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LEAAAAA;  /* YIELD */
A68_RC  MEAAAAA;  /* OPERATORS - vector -> row */
A68_RC  NEAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31 * OEAAAAA;  /* YIELD */
A68_206  PEAAAAA;  /* OPERATORS - mode -> union mode */
A68_205  QEAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * REAAAAA;  /* YIELD */
A68_VC  TEAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VEAAAAA;  /* YIELD */
A68_RC  WEAAAAA;  /* OPERATORS - vector -> row */
A68_RC  XEAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31 * YEAAAAA;  /* YIELD */
A68_206  ZEAAAAA;  /* OPERATORS - mode -> union mode */
A68_205  AFAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * BFAAAAA;  /* YIELD */
if ( sigsetjmp( HCAAAAA_eof.label,1) ) goto ICAAAAA_eof;
A_PROC_ENTRY(getpartok);
{ 
A_CALLPROC(EAAAAAA_anonymous,(A68_FALSE, &JCAAAAA),(A68_FALSE, &JCAAAAA,(EAAAAAA_anonymous).nonlocals));
LCAAAAA_hp = A_HEAP_STATIC(A68_218 ,KCAAAAA,JCAAAAA);
MCAAAAA.V = OCAAAAA;
MCAAAAA.Ty = 0;
RCAAAAA_assignment(LCAAAAA_hp, MCAAAAA);
 /* line 9: */
A_CLOSURE( ADAAAAA_anonymous, BDAAAAA_anonymous, CDAAAAA_anonymous );
(( CDAAAAA_anonymous * ) ( ADAAAAA_anonymous.nonlocals )) -> HCAAAAA_eof = HCAAAAA_eof;
UFCAASP_onlogicalfileend(F, ADAAAAA_anonymous);
 /* line 10: */
for ( ;; )
{ 
UKEAASP_get(F, A_HARR(GDAAAAA,A_UNITE(FDAAAAA,mode1,1,(&XCAAAAA_ch)),A68_206 ));
HDAAAAA = ((XCAAAAA_ch==NUAAASP_blank)|(XCAAAAA_ch==VUAAASP_tabch));
if ( !HDAAAAA ) break;
/*SKIP*/;
}
 /* line 11: */
if ( ECBAASP_charinstring(XCAAAAA_ch, (&YCAAAAA_p), JDAAAAA) )
{ 
KDAAAAA = YCAAAAA_p;
} 
else
{ 
KDAAAAA = 0;
} 
switch ( KDAAAAA )
{ 
case 1: 
{ 
 /* line 12: */
KGCAASP_maketerm(F, A_HARR(LDAAAAA,'\"',A68_CHAR ));
for ( ;; )
{ 
A_CALLPROC(EAAAASP_anonymous,(A68_TRUE, &NDAAAAA),(A68_TRUE, &NDAAAAA,(EAAAASP_anonymous).nonlocals));
MDAAAAA_s = NDAAAAA;
ODAAAAA.data[0] = A_UNITE(PDAAAAA,mode3,3,(&MDAAAAA_s));
RDAAAAA = A_LOC(A68_CHAR ) ;
ODAAAAA.data[1] = A_UNITE(QDAAAAA,mode1,1,RDAAAAA);
ODAAAAA.data[2] = A_UNITE(SDAAAAA,mode1,1,(&XCAAAAA_ch));
UKEAASP_get(F, A_HIS1ARR(TDAAAAA,ODAAAAA,A68_206 ,3));
UDAAAAA = (&(LCAAAAA_hp->V)) ;
A_RC_PLUSAB((*UDAAAAA),MDAAAAA_s);
VDAAAAA = (XCAAAAA_ch=='\"');
if ( !VDAAAAA ) break;
 /* line 13: */
XDAAAAA = (&(LCAAAAA_hp->V)) ;
A_RC_PLUSAB((*XDAAAAA),A_HARR(WDAAAAA,'\"',A68_CHAR ));
}
ETDAASP_backspace(F);
YDAAAAA = (&(LCAAAAA_hp->Ty)) ;
(*YDAAAAA) = 4;
ZDAAAAA = LCAAAAA_hp;
} 
break;
case 2: 
AEAAAAA.V = A_HARR(BEAAAAA,XCAAAAA_ch,A68_CHAR );
AEAAAAA.Ty = 1;
ZDAAAAA = RCAAAAA_assignment(LCAAAAA_hp, AEAAAAA);
break;
case 3: 
CEAAAAA.V = A_HARR(DEAAAAA,XCAAAAA_ch,A68_CHAR );
CEAAAAA.Ty = 2;
ZDAAAAA = RCAAAAA_assignment(LCAAAAA_hp, CEAAAAA);
break;
case 4: 
 /* line 14: */
EEAAAAA.V = A_HARR(FEAAAAA,XCAAAAA_ch,A68_CHAR );
EEAAAAA.Ty = 3;
ZDAAAAA = RCAAAAA_assignment(LCAAAAA_hp, EEAAAAA);
break;
default: 
 /* line 15: */
if ( ((((XCAAAAA_ch>='a')&(XCAAAAA_ch<='z'))|((XCAAAAA_ch>='A')&(XCAAAAA_ch<='Z')))|ECBAASP_charinstring(XCAAAAA_ch, A_LOC(A68_INT ), HEAAAAA)) )
{ 
for ( ;; )
{ 
LEAAAAA = A_VC_PLUS(JEAAAAA,A_HVEC(KEAAAAA,XUAAASP_nulch,A68_CHAR )) ;
if ( !(!ECBAASP_charinstring(XCAAAAA_ch, A_LOC(A68_INT ), A_VECARR(LEAAAAA,MEAAAAA))) ) break;
 /* line 16: */
if ( ((XCAAAAA_ch!=NUAAASP_blank)&(XCAAAAA_ch!=VUAAASP_tabch)) )
{ 
OEAAAAA = (&(LCAAAAA_hp->V)) ;
A_RC_PLUSAB((*OEAAAAA),A_HARR(NEAAAAA,XCAAAAA_ch,A68_CHAR ));
} 
UKEAASP_get(F, A_HARR(QEAAAAA,A_UNITE(PEAAAAA,mode1,1,(&XCAAAAA_ch)),A68_206 ));
}
REAAAAA = (&(LCAAAAA_hp->Ty)) ;
(*REAAAAA) = 6;
ETDAASP_backspace(F);
 /* line 17: */
ZDAAAAA = LCAAAAA_hp;
} 
else
{ 
if ( ((((XCAAAAA_ch>='0')&(XCAAAAA_ch<='9'))|(XCAAAAA_ch=='-'))|(XCAAAAA_ch=='+')) )
{ 
for ( ;; )
{ 
 /* line 18: */
VEAAAAA = A_VC_PLUS(A_HVEC(TEAAAAA,VUAAASP_tabch,A68_CHAR ),UEAAAAA) ;
if ( !(ECBAASP_charinstring(XCAAAAA_ch, A_LOC(A68_INT ), A_VECARR(VEAAAAA,WEAAAAA))) ) break;
if ( ((XCAAAAA_ch!=NUAAASP_blank)&(XCAAAAA_ch!=VUAAASP_tabch)) )
{ 
 /* line 19: */
YEAAAAA = (&(LCAAAAA_hp->V)) ;
A_RC_PLUSAB((*YEAAAAA),A_HARR(XEAAAAA,XCAAAAA_ch,A68_CHAR ));
} 
UKEAASP_get(F, A_HARR(AFAAAAA,A_UNITE(ZEAAAAA,mode1,1,(&XCAAAAA_ch)),A68_206 ));
}
BFAAAAA = (&(LCAAAAA_hp->Ty)) ;
(*BFAAAAA) = 5;
ETDAASP_backspace(F);
ZDAAAAA = LCAAAAA_hp;
} 
else
{ 
 /* line 20: */
if ( (XCAAAAA_ch==XUAAASP_nulch) )
{ 
ZDAAAAA = LCAAAAA_hp;
} 
else
{ 
ETDAASP_backspace(F);
ZDAAAAA = UAAAAAA_notok;
} 
} 
} 
break;
} 
goto GCAAAAA;
ICAAAAA_eof:
ZDAAAAA = LCAAAAA_hp;
GCAAAAA: ;
} 
A_PROC_EXIT(getpartok);
return( ZDAAAAA );
} 
#undef NL

A68_VOID  DFAAAAA_getparam(A68_47 * F, A68_222  *ReturnedValue)
{ 
A68_218 * EFAAAAA_rp;
A68_BOOL  FFAAAAA;  /* clause result */
A68_222  GFAAAAA;  /* clause result */
A68_222  HFAAAAA;  /* OPERATORS - mode -> union mode */
A68_222  IFAAAAA;  /* avoid structure result */
A68_222  JFAAAAA;  /* united object - for case conformity */
A68_222  KFAAAAA;  /* OPERATORS - mode -> union mode */
A68_222  LFAAAAA;  /* avoid structure result */
A68_222  MFAAAAA;  /* OPERATORS - mode -> union mode */
A68_222  NFAAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  OFAAAAA;  /* YIELD */
A68_RC  PFAAAAA_s;
A68_BOOL  QFAAAAA;  /* clause result */
A68_REAL  TFAAAAA_r;
A68_238  UFAAAAA;  /* collateral clause result */
A68_209  VFAAAAA;  /* OPERATORS - mode -> union mode */
A68_209  WFAAAAA;  /* OPERATORS - mode -> union mode */
A68_CHAR  XFAAAAA;  /* YIELD */
A68_208  YFAAAAA;  /* OPERATORS - istruct to row */
A68_45  AGAAAAA_anonymous;   /* proc value of non-global proc */
A68_jmp_buf RFAAAAA_eofr;
A68_206  FGAAAAA;  /* OPERATORS - mode -> union mode */
A68_205  GGAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_222  HGAAAAA;  /* OPERATORS - mode -> union mode */
A68_BOOL  IGAAAAA_dig;
A68_INT  JGAAAAA_i;
A68_INT  KGAAAAA;  /* to part of loop */
A68_BOOL  LGAAAAA;  /* clause result */
A68_222  MGAAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  PGAAAAA_n;
A68_238  QGAAAAA;  /* collateral clause result */
A68_209  RGAAAAA;  /* OPERATORS - mode -> union mode */
A68_209  SGAAAAA;  /* OPERATORS - mode -> union mode */
A68_CHAR  TGAAAAA;  /* YIELD */
A68_208  UGAAAAA;  /* OPERATORS - istruct to row */
A68_45  WGAAAAA_anonymous;   /* proc value of non-global proc */
A68_jmp_buf NGAAAAA_eofi;
A68_206  BHAAAAA;  /* OPERATORS - mode -> union mode */
A68_205  CHAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_222  DHAAAAA;  /* OPERATORS - mode -> union mode */
A68_224  EHAAAAA;  /* avoid structure result */
A68_224 * FHAAAAA;  /* staticpart generator */
A68_224 * GHAAAAA_hp;
A68_225  HHAAAAA;  /* collateral clause result */
A68_228  JHAAAAA_generator;   /* proc value of non-global proc */
A68_223  OHAAAAA;  /* avoid structure result */
A68_222  XHAAAAA;  /* OPERATORS - mode -> union mode */
A68_222  ZHAAAAA;  /* avoid structure result */
A68_222  YHAAAAA_v;
A68_222  AIAAAAA;  /* united object - for case conformity */
A68_240  BIAAAAA_u;
A68_222  CIAAAAA;  /* OPERATORS - unite union */
A68_BOOL  DIAAAAA;  /* clause result */
A68_224 * EIAAAAA_p;
A68_222  FIAAAAA;  /* OPERATORS - mode -> union mode */
A68_BOOL  GIAAAAA;  /* clause result */
A68_222  HIAAAAA;  /* OPERATORS - mode -> union mode */
A68_222  IIAAAAA;  /* OPERATORS - mode -> union mode */
if ( sigsetjmp( RFAAAAA_eofr.label,1) ) goto SFAAAAA_eofr;
if ( sigsetjmp( NGAAAAA_eofi.label,1) ) goto OGAAAAA_eofi;
A_PROC_ENTRY(getparam);
{ 
EFAAAAA_rp = FCAAAAA_getpartok(F);
 /* line 22: */
FFAAAAA = (EFAAAAA_rp==UAAAAAA_notok);
if ( FFAAAAA )
{ 
GFAAAAA = A_UNITE(HFAAAAA,mode5,5,VAAAAAA_noparam);
} 
else
{ 
switch ( (*(&(EFAAAAA_rp->Ty))) )
{ 
case 1: 
DFAAAAA_getparam( F, &IFAAAAA );
GFAAAAA = IFAAAAA;
break;
case 2: 
JFAAAAA = WAAAAAA_prevval ;
switch ( JFAAAAA.mode )
{ 
case 5: /* REF STRUCT(MODE31,REF MODE223)  */
GFAAAAA = A_EMPTY(KFAAAAA,4);
break;
default: 
 /* line 23: */
DFAAAAA_getparam( F, &LFAAAAA );
GFAAAAA = LFAAAAA;
break;
} 
break;
case 3: 
GFAAAAA = A_EMPTY(MFAAAAA,4);
break;
case 4: 
OFAAAAA = (*(&(EFAAAAA_rp->V))) ;
GFAAAAA = (*LBAAAAA_assignment((&WAAAAAA_prevval), A_UNITE(NFAAAAA,mode1,1,OFAAAAA)));
break;
case 5: 
{ 
PFAAAAA_s = (*(&(EFAAAAA_rp->V)));
 /* line 24: */
QFAAAAA = (ECBAASP_charinstring('.', A_LOC(A68_INT ), PFAAAAA_s)|ECBAASP_charinstring('e', A_LOC(A68_INT ), PFAAAAA_s));
if ( QFAAAAA )
{ 
 /* line 25: */
DICAASP_create((&WQCAASP_standback), ZRDAASP_standbackchannel);
UFAAAAA.data[0] = A_UNITE(VFAAAAA,mode2,2,PFAAAAA_s);
XFAAAAA = 'A' ;
UFAAAAA.data[1] = A_UNITE(WFAAAAA,mode1,1,XFAAAAA);
DWEAASP_put((&WQCAASP_standback), A_HIS1ARR(YFAAAAA,UFAAAAA,A68_209 ,2));
YJCAASP_reset((&WQCAASP_standback));
 /* line 26: */
A_CLOSURE( AGAAAAA_anonymous, BGAAAAA_anonymous, CGAAAAA_anonymous );
(( CGAAAAA_anonymous * ) ( AGAAAAA_anonymous.nonlocals )) -> TFAAAAA_r = (&TFAAAAA_r);
(( CGAAAAA_anonymous * ) ( AGAAAAA_anonymous.nonlocals )) -> RFAAAAA_eofr = RFAAAAA_eofr;
UFCAASP_onlogicalfileend((&WQCAASP_standback), AGAAAAA_anonymous);
 /* line 27: */
UKEAASP_get((&WQCAASP_standback), A_HARR(GGAAAAA,A_UNITE(FGAAAAA,mode22,22,(&TFAAAAA_r)),A68_206 ));
SFAAAAA_eofr:
KJCAASP_scratch((&WQCAASP_standback));
GFAAAAA = (*LBAAAAA_assignment((&WAAAAAA_prevval), A_UNITE(HGAAAAA,mode3,3,TFAAAAA_r)));
} 
else
{ 
{ 
IGAAAAA_dig = A68_FALSE;
 /* line 28: */
KGAAAAA = PFAAAAA_s.dim[0].upb;
for ( JGAAAAA_i = PFAAAAA_s.dim[0].lwb;
JGAAAAA_i <= KGAAAAA;
JGAAAAA_i += 1 )
{ 
if ( !(!(IGAAAAA_dig = ((A_R1INDEX(PFAAAAA_s,JGAAAAA_i)>='0')&(A_R1INDEX(PFAAAAA_s,JGAAAAA_i)<='9')))) ) break;
/*SKIP*/;
}
 /* line 29: */
LGAAAAA = !IGAAAAA_dig;
if ( LGAAAAA )
{ 
GFAAAAA = (*LBAAAAA_assignment((&WAAAAAA_prevval), A_UNITE(MGAAAAA,mode1,1,PFAAAAA_s)));
} 
else
{ 
DICAASP_create((&WQCAASP_standback), ZRDAASP_standbackchannel);
 /* line 30: */
QGAAAAA.data[0] = A_UNITE(RGAAAAA,mode2,2,PFAAAAA_s);
TGAAAAA = 'A' ;
QGAAAAA.data[1] = A_UNITE(SGAAAAA,mode1,1,TGAAAAA);
DWEAASP_put((&WQCAASP_standback), A_HIS1ARR(UGAAAAA,QGAAAAA,A68_209 ,2));
YJCAASP_reset((&WQCAASP_standback));
 /* line 31: */
A_CLOSURE( WGAAAAA_anonymous, XGAAAAA_anonymous, YGAAAAA_anonymous );
(( YGAAAAA_anonymous * ) ( WGAAAAA_anonymous.nonlocals )) -> PGAAAAA_n = (&PGAAAAA_n);
(( YGAAAAA_anonymous * ) ( WGAAAAA_anonymous.nonlocals )) -> NGAAAAA_eofi = NGAAAAA_eofi;
UFCAASP_onlogicalfileend((&WQCAASP_standback), WGAAAAA_anonymous);
UKEAASP_get((&WQCAASP_standback), A_HARR(CHAAAAA,A_UNITE(BHAAAAA,mode16,16,(&PGAAAAA_n)),A68_206 ));
OGAAAAA_eofi:
KJCAASP_scratch((&WQCAASP_standback));
 /* line 32: */
GFAAAAA = (*LBAAAAA_assignment((&WAAAAAA_prevval), A_UNITE(DHAAAAA,mode2,2,PGAAAAA_n)));
} 
} 
} 
} 
break;
case 6: 
{ 
A_CALLPROC(MAAAAAA_anonymous,(A68_FALSE, &EHAAAAA),(A68_FALSE, &EHAAAAA,(MAAAAAA_anonymous).nonlocals));
GHAAAAA_hp = A_HEAP_STATIC(A68_224 ,FHAAAAA,EHAAAAA);
HHAAAAA.Prog = (*(&(EFAAAAA_rp->V)));
A_CLOSURE( JHAAAAA_generator, KHAAAAA_generator, LHAAAAA_generator );
A_CALLPROC(JHAAAAA_generator,(A68_FALSE, &OHAAAAA),(A68_FALSE, &OHAAAAA,(JHAAAAA_generator).nonlocals));
HHAAAAA.Val = OHAAAAA;
RHAAAAA_assignment(GHAAAAA_hp, HHAAAAA);
 /* line 33: */
LBAAAAA_assignment((&WAAAAAA_prevval), A_UNITE(XHAAAAA,mode5,5,GHAAAAA_hp));
for ( ;; )
{ 
DFAAAAA_getparam( F, &ZHAAAAA );
YHAAAAA_v = ZHAAAAA;
AIAAAAA = YHAAAAA_v ;
switch ( AIAAAAA.mode )
{ 
case 1: /* [] CHAR */
case 2: /* INT */
case 3: /* REAL */
A_UNCPY(BIAAAAA_u,AIAAAAA);
BIAAAAA_u.mode = "\000\003\001\002\0\000"[AIAAAAA.mode];
{ 
 /* line 34: */
ABAAAAA_(GHAAAAA_hp, A_UTABUNITE(CIAAAAA,"\000\002\003\001",BIAAAAA_u));
DIAAAAA = A68_TRUE;
} 
break;
case 4: /* VOID */
DIAAAAA = A68_FALSE;
break;
case 5: /* REF STRUCT(MODE31,REF MODE223)  */
EIAAAAA_p = (AIAAAAA.data.mode5);
if ( (EIAAAAA_p==VAAAAAA_noparam) )
{ 
DIAAAAA = A68_FALSE;
} 
else
{ 
ABAAAAA_(GHAAAAA_hp, A_UNITE(FIAAAAA,mode5,5,EIAAAAA_p));
 /* line 35: */
DIAAAAA = A68_TRUE;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
GIAAAAA = DIAAAAA;
if ( !GIAAAAA ) break;
/*SKIP*/;
}
GFAAAAA = A_UNITE(HIAAAAA,mode5,5,GHAAAAA_hp);
} 
break;
default: 
GFAAAAA = A_UNITE(IIAAAAA,mode5,5,VAAAAAA_noparam);
break;
} 
} 
} 
A_PROC_EXIT(getparam);
*ReturnedValue = (GFAAAAA);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
void BAAAAAA(void)   /* initialise DECS params */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/usr/bin/a68toc","-s","-v","-lib","/usr/share/algol68toc","-dir","/usr/share/algol68toc","-uname","seedfile","params.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/usr/share/algol68toc/standard.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_220  LAAAAAA;  /* procedure value */
A68_226  TAAAAAA;  /* procedure value */
A68_222  XAAAAAA;  /* OPERATORS - mode -> union mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
ANFAASP();   /* USE standard */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68-devel/Modules/params.a68";
A_config.translation_time = "Thu May  6 16:03:13 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "AAAAAAA (other name seeds not available) ";
A_config.spec_change_time = "Thu May  6 16:03:13 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS params);
LAAAAAA.fn.fn_global = GAAAAAA_generator;
LAAAAAA.nonlocals = A68_NIL;
EAAAAAA_anonymous = LAAAAAA;
 /* line 3: */
TAAAAAA.fn.fn_global = OAAAAAA_generator;
TAAAAAA.nonlocals = A68_NIL;
MAAAAAA_anonymous = TAAAAAA;
 /* line 4: */
 /* line 5: */
VAAAAAA_noparam = (A68_224 *)A68_NIL;
WAAAAAA_prevval = A_UNITE(XAAAAAA,mode5,5,VAAAAAA_noparam);
 /* line 6: */
 /* line 8: */
 /* line 21: */
 /* line 36: */
/*SKIP*/;
A_PROC_EXIT(DECS params);
} 
#undef NL
/* end of translation of params.a68 */
