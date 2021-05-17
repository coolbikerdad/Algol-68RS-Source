/* UNAME:AAAAAAA */
#include <algol68/Asupport.h>
#define A68_32  A68_RC 
#define A68t32 A68t27            /* FLEX [] CHAR */
A_ROW(struct A68t34 ,A68t33,1);
typedef struct A68t33  A68_33 ;    /* [] MODE34 */
struct A68t34 { A68_INT mode; union {
A68_RC  mode1;
A68_INT  mode2;
A68_REAL  mode3;
struct A68t31 * mode5;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t34  A68_34 ;    /* UNION(MODE27,INT,REAL,VOID,REF MODE31)  */
struct A68t31{
struct A68t32  Prog;
struct A68t33  Val;
};
typedef struct A68t31  A68_31 ;    /* STRUCT(MODE32,REF MODE33)  */

A_PROCEDURE(A68_VOID ,A68t35,(struct A68t31 *,struct A68t34 ),(struct A68t31 *,struct A68t34 ,void *));
typedef struct A68t35  A68_35 ;    /* PROC(REF MODE31,MODE34) VOID */

A_PROCEDURE(A68_VOID ,A68t36,(A68_BOOL ,struct A68t36 *),(A68_BOOL ,struct A68t36 *,void *));
typedef struct A68t36  A68_36 ;    /* PROC(BOOL) MODE36 */
struct A68t38 ;

A_PROCEDURE(A68_VOID ,A68t37,(struct A68t38 *,struct A68t34 *),(struct A68t38 *,struct A68t34 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE38) MODE34 */
struct A68t54{
A68_BOOL  Binpossible;
A_PAD_BOOL(PAD_1)
A68_BOOL  Putpossible;
A_PAD_BOOL(PAD_2)
A68_BOOL  Getpossible;
A_PAD_BOOL(PAD_3)
A68_BOOL  Setpossible;
A_PAD_BOOL(PAD_4)
A68_BOOL  Reidfpossible;
A_PAD_BOOL(PAD_5)
};
typedef struct A68t54  A68_54 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL)  */
struct A68t39{
A68_VC  Idf;
A68_VC  Reidf;
struct A68t54  Type;
};
typedef struct A68t39  A68_39 ;    /* STRUCT(REF MODE26,REF MODE26,MODE54)  */

A_PROCEDURE(A68_INT ,A68t47,(struct A68t38 *,A68_INT ,A68_INT ,A68_INT ),(struct A68t38 *,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF MODE38,INT,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t48,(struct A68t38 *),(struct A68t38 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE38) INT */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t38 *),(struct A68t38 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE38) VOID */

A_PROCEDURE(A68_BOOL ,A68t50,(struct A68t38 *,A68_INT ),(struct A68t38 *,A68_INT ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(REF MODE38,INT) BOOL */

A_PROCEDURE(A68_INT ,A68t51,(struct A68t38 *,A68_VC ),(struct A68t38 *,A68_VC ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(REF MODE38,REF MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t52,(struct A68t38 *,A68_INT ,A68_VC *),(struct A68t38 *,A68_INT ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(REF MODE38,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t53,(struct A68t38 *,A68_CHAR ),(struct A68t38 *,A68_CHAR ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF MODE38,CHAR) BOOL */

A_PROCEDURE(A68_BOOL ,A68t46,(struct A68t38 *,A68_CHAR *),(struct A68t38 *,A68_CHAR *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(REF MODE38,REF CHAR) BOOL */
struct A68t40{
struct A68t47  Estab;
struct A68t48  Open;
struct A68t49  Close;
struct A68t50  Set;
struct A68t48  Logicalend;
struct A68t51  Putbuf;
struct A68t51  Getbuf;
struct A68t52  Ensurebufspace;
struct A68t49  Flushbuffer;
struct A68t53  Putch;
struct A68t46  Getch;
struct A68t50  Control;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE47,MODE48,MODE49,MODE50,MODE48,MODE51,MODE51,MODE52,MODE49,MODE53,MODE46,MODE50)  */
A_ISTRUCT(A68_BITS ,8,A68t44);
typedef struct A68t44  A68_44 ;    /* STRUCT 8 BITS */

A_PROCEDURE(A68_BOOL ,A68t45,(struct A68t38 *),(struct A68t38 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE38) BOOL */
struct A68t41{
struct A68t44  Stringterm;
A_PAD_ISTRUCT(A68_44 ,PAD_6)
struct A68t45  Logicalfilemended;
struct A68t45  Physicalfilemended;
struct A68t45  Valueerrormended;
struct A68t46  Charerrormended;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(MODE44,MODE45,MODE45,MODE45,MODE46)  */
struct A68t43{
A68_VC  Start;
A68_INT  Max;
A_PAD_INT(PAD_7)
A68_INT  Valid;
A_PAD_INT(PAD_8)
A68_INT  Pos;
A_PAD_INT(PAD_9)
A68_BOOL  Writeback;
A_PAD_BOOL(PAD_10)
A68_BOOL  Flushafterput;
A_PAD_BOOL(PAD_11)
};
typedef struct A68t43  A68_43 ;    /* STRUCT(REF MODE26,INT,INT,INT,BOOL,BOOL)  */
struct A68t42{
A68_BOOL  Readmood;
A_PAD_BOOL(PAD_12)
A68_BOOL  Charmood;
A_PAD_BOOL(PAD_13)
A68_BOOL  Opened;
A_PAD_BOOL(PAD_14)
A68_BOOL  Ended;
A_PAD_BOOL(PAD_15)
A68_BOOL  Bol;
A_PAD_BOOL(PAD_16)
A68_INT  Backch;
A_PAD_INT(PAD_17)
A68_INT  Lasterror;
A_PAD_INT(PAD_18)
struct A68t43  Buffer;
A68_INT  Pos;
A_PAD_INT(PAD_19)
};
typedef struct A68t42  A68_42 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,MODE43,INT)  */
struct A68t38{
struct A68t39  Book;
A68_INT  Sysfile;
A_PAD_INT(PAD_20)
struct A68t40  Sys;
struct A68t41  Io;
struct A68t42  State;
};
typedef struct A68t38  A68_38 ;    /* STRUCT(MODE39,INT,MODE40,MODE41,MODE42)  */

A_PROCEDURE(A68_VOID ,A68t55,(A68_BOOL ,A68_RC *),(A68_BOOL ,A68_RC *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(BOOL) MODE27 */

A_PROCEDURE(A68_VOID ,A68t56,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,16000000,A68t57);
typedef struct A68t57  A68_57 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t57 *,16000000,A68t58);
typedef struct A68t58  A68_58 ;    /* STRUCT 16000000 REF MODE57 */
struct A68t59{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_21)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t60,(A68_BOOL ,struct A68t59 *),(A68_BOOL ,struct A68t59 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(BOOL) MODE59 */
struct A68t61{
A68_BITS * Cp;
struct A68t57 * Env;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(REF BITS,REF MODE57)  */
struct A68t62{
A68_CHAR * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_22)
A68_INT  Upb;
A_PAD_INT(PAD_23)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(REF CHAR,BITS,INT)  */
struct A68t63{
struct A68t40  Sys;
struct A68t54  Type;
struct A68t41  Defaultio;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(MODE40,MODE54,MODE41)  */
A_ROW(A68_BOOL ,A68t65,1);
typedef struct A68t65  A68_65 ;    /* [] BOOL */
A_ROW(A68_LBITS ,A68t66,1);
typedef struct A68t66  A68_66 ;    /* [] LONG BITS */
A_ROW(A68_BITS ,A68t67,1);
typedef struct A68t67  A68_67 ;    /* [] BITS */
A_ROW(A68_SBITS ,A68t68,1);
typedef struct A68t68  A68_68 ;    /* [] SHORT BITS */
A_ROW(A68_SSBITS ,A68t69,1);
typedef struct A68t69  A68_69 ;    /* [] SHORT SHORT BITS */
A_ROW(A68_LINT ,A68t70,1);
typedef struct A68t70  A68_70 ;    /* [] LONG INT */
A_ROW(A68_INT ,A68t71,1);
typedef struct A68t71  A68_71 ;    /* [] INT */
A_ROW(A68_SINT ,A68t72,1);
typedef struct A68t72  A68_72 ;    /* [] SHORT INT */
A_ROW(A68_SSINT ,A68t73,1);
typedef struct A68t73  A68_73 ;    /* [] SHORT SHORT INT */
A_ROW(A68_REAL ,A68t74,1);
typedef struct A68t74  A68_74 ;    /* [] REAL */
A_ROW(A68_SREAL ,A68t75,1);
typedef struct A68t75  A68_75 ;    /* [] SHORT REAL */
A_ROW(A68_COMPL ,A68t76,1);
typedef struct A68t76  A68_76 ;    /* [] COMPL */
A_ROW(A68_SCOMPL ,A68t77,1);
typedef struct A68t77  A68_77 ;    /* [] SHORT COMPL */
A_STRAIGHT(A68_VOID,A68t78);
typedef struct A68t78  A68_78 ;    /* STRAIGHT MODE64 */
struct A68t64 { A68_INT mode; union {
A68_CHAR * mode1;
A68_RC  mode2;
struct A68t32 * mode3;
A68_BOOL * mode4;
struct A68t65  mode5;
A68_LBITS * mode6;
struct A68t66  mode7;
A68_BITS * mode8;
struct A68t67  mode9;
A68_SBITS * mode10;
struct A68t68  mode11;
A68_SSBITS * mode12;
struct A68t69  mode13;
A68_LINT * mode14;
struct A68t70  mode15;
A68_INT * mode16;
struct A68t71  mode17;
A68_SINT * mode18;
struct A68t72  mode19;
A68_SSINT * mode20;
struct A68t73  mode21;
A68_REAL * mode22;
struct A68t74  mode23;
A68_SREAL * mode24;
struct A68t75  mode25;
A68_COMPL * mode26;
struct A68t76  mode27;
A68_SCOMPL * mode28;
struct A68t77  mode29;
struct A68t78  mode30;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t64  A68_64 ;    /* UNION(REF CHAR,REF MODE27,REF MODE32,REF BOOL,REF MODE65,REF LONG BITS,REF MODE66,REF BITS,REF MODE67,REF SHORT BITS,REF MODE68,REF SHORT SHORT BITS,REF MODE69,REF LONG INT,REF MODE70,REF INT,REF MODE71,REF SHORT INT,REF MODE72,REF SHORT SHORT INT,REF MODE73,REF REAL,REF MODE74,REF SHORT REAL,REF MODE75,REF COMPL,REF MODE76,REF SHORT COMPL,REF MODE77,MODE78)  */
A_STRAIGHT(A68_VOID,A68t80);
typedef struct A68t80  A68_80 ;    /* STRAIGHT MODE79 */
struct A68t79 { A68_INT mode; union {
A68_CHAR  mode1;
A68_RC  mode2;
A68_BOOL  mode3;
struct A68t65  mode4;
A68_LBITS  mode5;
struct A68t66  mode6;
A68_BITS  mode7;
struct A68t67  mode8;
A68_SBITS  mode9;
struct A68t68  mode10;
A68_SSBITS  mode11;
struct A68t69  mode12;
A68_LINT  mode13;
struct A68t70  mode14;
A68_INT  mode15;
struct A68t71  mode16;
A68_SINT  mode17;
struct A68t72  mode18;
A68_SSINT  mode19;
struct A68t73  mode20;
A68_REAL  mode21;
struct A68t74  mode22;
A68_SREAL  mode23;
struct A68t75  mode24;
A68_COMPL  mode25;
struct A68t76  mode26;
A68_SCOMPL  mode27;
struct A68t77  mode28;
struct A68t80  mode29;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t79  A68_79 ;    /* UNION(CHAR,MODE27,BOOL,MODE65,LONG BITS,MODE66,BITS,MODE67,SHORT BITS,MODE68,SHORT SHORT BITS,MODE69,LONG INT,MODE70,INT,MODE71,SHORT INT,MODE72,SHORT SHORT INT,MODE73,REAL,MODE74,SHORT REAL,MODE75,COMPL,MODE76,SHORT COMPL,MODE77,MODE80)  */

A_PROCEDURE(A68_REAL ,A68t81,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REAL) REAL */

A_PROCEDURE(A68_INT ,A68t82,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26,INT) INT */

A_PROCEDURE(A68_VOID ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC VOID */

A_PROCEDURE(A68_INT ,A68t84,(A68_INT ),(A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BITS *,A68t85,(A68_INT ,A68_BITS *),(A68_INT ,A68_BITS *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT,REF BITS) REF BITS */

A_PROCEDURE(A68_REAL ,A68t86,(A68_VC ),(A68_VC ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26) REAL */

A_PROCEDURE(A68_INT ,A68t87,(A68_INT ,A68_VC ,A68_INT *),(A68_INT ,A68_VC ,A68_INT *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(INT,MODE26,REF INT) INT */

A_PROCEDURE(A68_INT ,A68t88,(A68_INT ,A68_VC ,A68_INT ),(A68_INT ,A68_VC ,A68_INT ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(INT,MODE26,INT) INT */

A_PROCEDURE(A68_INT ,A68t89,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t90,(A68_VC ,A68_BITS *),(A68_VC ,A68_BITS *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE26,REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t91,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(INT,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t92,(A68_VC ),(A68_VC ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_INT ,A68t93,(A68_VC ,A68_VC ,A68_REAL ,A68_INT ,A68_INT ),(A68_VC ,A68_VC ,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE26,MODE26,REAL,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t94,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t95,(A68_BITS *,struct A68t57 *),(A68_BITS *,struct A68t57 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF BITS,REF MODE57) INT */

A_PROCEDURE(A68_INT ,A68t96,(A68_INT ,A68_CHAR *),(A68_INT ,A68_CHAR *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT,REF CHAR) INT */

A_PROCEDURE(A68_INT ,A68t97,(A68_INT ,A68_BITS ,A68_CHAR *),(A68_INT ,A68_BITS ,A68_CHAR *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT,BITS,REF CHAR) INT */

A_PROCEDURE(struct A68t57 *,A68t98,(A68_INT ),(A68_INT ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(INT) REF MODE57 */

A_PROCEDURE(A68_VOID ,A68t99,(A68_INT ),(A68_INT ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(INT) VOID */

A_PROCEDURE(struct A68t57 *,A68t100,(A68_VC ),(A68_VC ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26) REF MODE57 */

A_PROCEDURE(A68_INT ,A68t101,(void),(void *));
typedef struct A68t101  A68_101 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t102,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE26,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t103,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26,MODE26) INT */

A_PROCEDURE(A68_INT ,A68t104,(struct A68t57 *),(struct A68t57 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE57) INT */

A_PROCEDURE(A68_INT ,A68t105,(A68_INT *),(A68_INT *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF INT) INT */

A_PROCEDURE(A68_INT ,A68t106,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REAL) INT */

A_PROCEDURE(A68_BITS *,A68t107,(A68_INT ),(A68_INT ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(INT) REF BITS */

A_PROCEDURE(struct A68t57 *,A68t108,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(REF BITS) REF MODE57 */

A_PROCEDURE(A68_VOID ,A68t109,(A68_VC ,struct A68t62 *),(A68_VC ,struct A68t62 *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE26) MODE62 */
A_VECTOR(A68_BITS ,A68t110);
typedef struct A68t110  A68_110 ;    /* VECTOR [] BITS */
struct A68t111{
A68_BITS * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_24)
A68_INT  Upb;
A_PAD_INT(PAD_25)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(REF BITS,BITS,INT)  */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t110 ,struct A68t111 *),(struct A68t110 ,struct A68t111 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE110) MODE111 */
A_VECTOR(A68_INT ,A68t113);
typedef struct A68t113  A68_113 ;    /* VECTOR [] INT */
struct A68t114{
A68_INT * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_26)
A68_INT  Upb;
A_PAD_INT(PAD_27)
};
typedef struct A68t114  A68_114 ;    /* STRUCT(REF INT,BITS,INT)  */

A_PROCEDURE(A68_VOID ,A68t115,(struct A68t113 ,struct A68t114 *),(struct A68t113 ,struct A68t114 *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE113) MODE114 */

A_PROCEDURE(struct A68t61 *,A68t116,(struct A68t83 *),(struct A68t83 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE83) REF MODE61 */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t83 ,struct A68t61 *),(struct A68t83 ,struct A68t61 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE83) MODE61 */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t99 ,struct A68t61 *),(struct A68t99 ,struct A68t61 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE99) MODE61 */

A_PROCEDURE(A68_VOID ,A68t119,(A68_INT ,A68_BITS *),(A68_INT ,A68_BITS *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(INT,REF BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t119 ,struct A68t61 *),(struct A68t119 ,struct A68t61 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE119) MODE61 */

A_PROCEDURE(A68_VOID ,A68t121,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t121 ,struct A68t61 *),(struct A68t121 ,struct A68t61 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE121) MODE61 */

A_PROCEDURE(A68_BOOL ,A68t123,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REAL) BOOL */

A_PROCEDURE(A68_VOID ,A68t124,(A68_COMPL ,A68_INT ,A68_COMPL *),(A68_COMPL ,A68_INT ,A68_COMPL *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(COMPL,INT) COMPL */

A_PROCEDURE(A68_REAL ,A68t125,(A68_REAL ,A68_INT ),(A68_REAL ,A68_INT ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REAL,INT) REAL */

A_PROCEDURE(A68_VOID ,A68t126,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t127,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_RC ,A68_VC *),(A68_RC ,A68_VC *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE27) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t57 *,A68_VC *),(struct A68t57 *,A68_VC *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE57) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t130,(A68_VC ),(A68_VC ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE26) REF CHAR */

A_PROCEDURE(A68_BITS *,A68t131,(struct A68t110 ),(struct A68t110 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE110) REF BITS */

A_PROCEDURE(A68_INT *,A68t132,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE113) REF INT */

A_PROCEDURE(A68_CHAR *,A68t133,(struct A68t57 *),(struct A68t57 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REF MODE57) REF CHAR */

A_PROCEDURE(struct A68t57 *,A68t134,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF CHAR) REF MODE57 */
A_ISTRUCT(A68_CHAR ,8,A68t135);
typedef struct A68t135  A68_135 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(struct A68t135 ,A68t136,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(REAL) MODE135 */
A_ISTRUCT(A68_CHAR ,4,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t137 ,A68t138,(A68_SREAL ),(A68_SREAL ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(SHORT REAL) MODE137 */

A_PROCEDURE(A68_REAL ,A68t139,(struct A68t135 ),(struct A68t135 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE135) REAL */

A_PROCEDURE(A68_SREAL ,A68t140,(struct A68t137 ),(struct A68t137 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE137) SHORT REAL */

A_PROCEDURE(struct A68t135 ,A68t141,(A68_LBITS ),(A68_LBITS ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(LONG BITS) MODE135 */

A_PROCEDURE(struct A68t137 ,A68t142,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(BITS) MODE137 */
A_ISTRUCT(A68_CHAR ,2,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(struct A68t143 ,A68t144,(A68_SBITS ),(A68_SBITS ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(SHORT BITS) MODE143 */
A_ISTRUCT(A68_CHAR ,1,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 1 CHAR */

A_PROCEDURE(struct A68t145 ,A68t146,(A68_SSBITS ),(A68_SSBITS ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(SHORT SHORT BITS) MODE145 */

A_PROCEDURE(A68_LBITS ,A68t147,(struct A68t135 ),(struct A68t135 ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE135) LONG BITS */

A_PROCEDURE(A68_BITS ,A68t148,(struct A68t137 ),(struct A68t137 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE137) BITS */

A_PROCEDURE(A68_SBITS ,A68t149,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE143) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t150,(struct A68t145 ),(struct A68t145 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE145) SHORT SHORT BITS */
A_ISTRUCT(A68_BITS ,2,A68t151);
typedef struct A68t151  A68_151 ;    /* STRUCT 2 BITS */

A_PROCEDURE(struct A68t151 ,A68t152,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REAL) MODE151 */

A_PROCEDURE(A68_REAL ,A68t153,(struct A68t151 ),(struct A68t151 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE151) REAL */

A_PROCEDURE(struct A68t151 ,A68t154,(A68_LBITS ),(A68_LBITS ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(LONG BITS) MODE151 */

A_PROCEDURE(A68_LBITS ,A68t155,(struct A68t151 ),(struct A68t151 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE151) LONG BITS */

A_PROCEDURE(A68_REAL ,A68t156,(A68_VC ),(A68_VC ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE26) REAL */

A_PROCEDURE(A68_SREAL ,A68t157,(A68_VC ),(A68_VC ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE26) SHORT REAL */

A_PROCEDURE(A68_LBITS ,A68t158,(A68_VC ),(A68_VC ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE26) LONG BITS */

A_PROCEDURE(A68_BITS ,A68t159,(A68_VC ),(A68_VC ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE26) BITS */

A_PROCEDURE(A68_SBITS ,A68t160,(A68_VC ),(A68_VC ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE26) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t161,(A68_VC ),(A68_VC ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE26) SHORT SHORT BITS */

A_PROCEDURE(A68_VOID ,A68t162,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t163,(A68_BITS *,A68_VC *),(A68_BITS *,A68_VC *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF BITS) REF MODE26 */

A_PROCEDURE(A68_SSINT ,A68t164,(A68_SSINT ,A68_SSINT ),(A68_SSINT ,A68_SSINT ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(SHORT SHORT INT,SHORT SHORT INT) SHORT SHORT INT */

A_PROCEDURE(A68_SINT ,A68t165,(A68_SINT ,A68_SINT ),(A68_SINT ,A68_SINT ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(SHORT INT,SHORT INT) SHORT INT */

A_PROCEDURE(A68_LINT ,A68t166,(A68_LINT ,A68_LINT ),(A68_LINT ,A68_LINT ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(LONG INT,LONG INT) LONG INT */

A_PROCEDURE(A68_REAL ,A68t167,(A68_INT ,A68_REAL ),(A68_INT ,A68_REAL ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT,REAL) REAL */

A_PROCEDURE(A68_REAL ,A68t168,(A68_REAL ,A68_REAL ),(A68_REAL ,A68_REAL ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(REAL,REAL) REAL */

A_PROCEDURE(A68_SREAL ,A68t169,(A68_SREAL ,A68_SREAL ),(A68_SREAL ,A68_SREAL ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(SHORT REAL,SHORT REAL) SHORT REAL */

A_PROCEDURE(A68_BITS ,A68t170,(A68_INT ),(A68_INT ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT) BITS */

A_PROCEDURE(A68_BOOL ,A68t171,(A68_INT ,A68_LBITS ),(A68_INT ,A68_LBITS ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(INT,LONG BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t172,(A68_INT ,A68_SBITS ),(A68_INT ,A68_SBITS ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(INT,SHORT BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t173,(A68_INT ,A68_SSBITS ),(A68_INT ,A68_SSBITS ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(INT,SHORT SHORT BITS) BOOL */

A_PROCEDURE(A68_VOID ,A68t174,(A68_LBITS ,A68_RC *),(A68_LBITS ,A68_RC *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(LONG BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t175,(A68_BITS ,A68_RC *),(A68_BITS ,A68_RC *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t176,(A68_SBITS ,A68_RC *),(A68_SBITS ,A68_RC *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(SHORT BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t177,(A68_SSBITS ,A68_RC *),(A68_SSBITS ,A68_RC *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(SHORT SHORT BITS) MODE27 */

A_PROCEDURE(A68_SREAL ,A68t178,(A68_SREAL ),(A68_SREAL ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(SHORT REAL) SHORT REAL */

A_PROCEDURE(A68_REAL ,A68t179,(A68_INT *),(A68_INT *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF INT) REAL */

A_PROCEDURE(A68_REAL ,A68t180,(void),(void *));
typedef struct A68t180  A68_180 ;    /* PROC REAL */

A_PROCEDURE(A68_SREAL ,A68t181,(void),(void *));
typedef struct A68t181  A68_181 ;    /* PROC SHORT REAL */

A_PROCEDURE(A68_LINT ,A68t182,(A68_LINT ),(A68_LINT ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(LONG INT) LONG INT */

A_PROCEDURE(A68_SINT ,A68t183,(A68_SINT ),(A68_SINT ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(SHORT INT) SHORT INT */

A_PROCEDURE(A68_SSINT ,A68t184,(A68_SSINT ),(A68_SSINT ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(SHORT SHORT INT) SHORT SHORT INT */

A_PROCEDURE(A68_BOOL ,A68t185,(A68_CHAR ,A68_INT *,A68_RC ),(A68_CHAR ,A68_INT *,A68_RC ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(CHAR,REF INT,MODE27) BOOL */
struct A68t187 ;

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t187 ,A68_INT ,A68_RC *),(struct A68t187 ,A68_INT ,A68_RC *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE187,INT) MODE27 */
struct A68t187 { A68_INT mode; union {
A68_LINT  mode1;
A68_INT  mode2;
A68_SINT  mode3;
A68_SSINT  mode4;
A68_REAL  mode5;
A68_SREAL  mode6;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t187  A68_187 ;    /* UNION(LONG INT,INT,SHORT INT,SHORT SHORT INT,REAL,SHORT REAL)  */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t187 ,A68_INT ,A68_INT ,A68_RC *),(struct A68t187 ,A68_INT ,A68_INT ,A68_RC *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE187,INT,INT) MODE27 */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t187 ,A68_INT ,A68_INT ,A68_INT ,A68_RC *),(struct A68t187 ,A68_INT ,A68_INT ,A68_INT ,A68_RC *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE187,INT,INT,INT) MODE27 */
struct A68t191 ;

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t191 ),(struct A68t191 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE191) VOID */
A_VECTOR(struct A68t59 ,A68t191);
typedef struct A68t191  A68_191 ;    /* VECTOR [] MODE59 */

A_PROCEDURE(A68_INT ,A68t192,(struct A68t83 ),(struct A68t83 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE83) INT */

A_PROCEDURE(A68_INT ,A68t193,(struct A68t119 ,A68_RC ),(struct A68t119 ,A68_RC ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE119,MODE27) INT */

A_PROCEDURE(A68_VOID ,A68t194,(A68_INT ,struct A68t99 ),(A68_INT ,struct A68t99 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(INT,MODE99) VOID */

A_PROCEDURE(A68_LBITS ,A68t195,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE65) LONG BITS */

A_PROCEDURE(A68_BITS ,A68t196,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE65) BITS */

A_PROCEDURE(A68_SBITS ,A68t197,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE65) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t198,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE65) SHORT SHORT BITS */

A_PROCEDURE(A68_VOID ,A68t199,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t38 *,A68_VC *),(struct A68t38 *,A68_VC *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE38) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t38 *,A68_RC ),(struct A68t38 *,A68_RC ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE38,MODE27) VOID */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t38 *,struct A68t45 ),(struct A68t38 *,struct A68t45 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE38,MODE45) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t38 *,struct A68t46 ),(struct A68t38 *,struct A68t46 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE38,MODE46) VOID */

A_PROCEDURE(A68_INT ,A68t204,(struct A68t38 *,A68_RC ,struct A68t63 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t38 *,A68_RC ,struct A68t63 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE38,MODE27,MODE63,INT,INT,INT) INT */
struct A68t206 ;

A_PROCEDURE(A68_INT ,A68t205,(struct A68t38 *,struct A68t206 ,struct A68t63 ),(struct A68t38 *,struct A68t206 ,struct A68t63 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE38,MODE206,MODE63) INT */
struct A68t206 { A68_INT mode; union {
A68_CHAR  mode1;
A68_RC  mode2;
A68_VC  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t206  A68_206 ;    /* UNION(CHAR,MODE27,REF MODE26)  */

A_PROCEDURE(A68_INT ,A68t207,(struct A68t38 *,struct A68t63 ),(struct A68t38 *,struct A68t63 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE38,MODE63) INT */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t38 *,A68_INT ,A68_INT ,A68_INT ),(struct A68t38 *,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE38,INT,INT,INT) VOID */

A_PROCEDURE(struct A68t38 *,A68t209,(struct A68t38 *),(struct A68t38 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE38) REF MODE38 */
struct A68t211 ;

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t38 *,struct A68t211 ),(struct A68t38 *,struct A68t211 ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE38,MODE211) VOID */
A_ROW(struct A68t212 ,A68t211,1);
typedef struct A68t211  A68_211 ;    /* [] MODE212 */
struct A68t212 { A68_INT mode; union {
A68_CHAR * mode1;
A68_RC  mode2;
struct A68t32 * mode3;
A68_BOOL * mode4;
struct A68t65  mode5;
A68_LBITS * mode6;
struct A68t66  mode7;
A68_BITS * mode8;
struct A68t67  mode9;
A68_SBITS * mode10;
struct A68t68  mode11;
A68_SSBITS * mode12;
struct A68t69  mode13;
A68_LINT * mode14;
struct A68t70  mode15;
A68_INT * mode16;
struct A68t71  mode17;
A68_SINT * mode18;
struct A68t72  mode19;
A68_SSINT * mode20;
struct A68t73  mode21;
A68_REAL * mode22;
struct A68t74  mode23;
A68_SREAL * mode24;
struct A68t75  mode25;
A68_COMPL * mode26;
struct A68t76  mode27;
A68_SCOMPL * mode28;
struct A68t77  mode29;
struct A68t78  mode30;
struct A68t49  mode31;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t212  A68_212 ;    /* UNION(REF CHAR,REF MODE27,REF MODE32,REF BOOL,REF MODE65,REF LONG BITS,REF MODE66,REF BITS,REF MODE67,REF SHORT BITS,REF MODE68,REF SHORT SHORT BITS,REF MODE69,REF LONG INT,REF MODE70,REF INT,REF MODE71,REF SHORT INT,REF MODE72,REF SHORT SHORT INT,REF MODE73,REF REAL,REF MODE74,REF SHORT REAL,REF MODE75,REF COMPL,REF MODE76,REF SHORT COMPL,REF MODE77,MODE78,MODE49)  */
struct A68t214 ;

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t38 *,struct A68t214 ),(struct A68t38 *,struct A68t214 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE38,MODE214) VOID */
A_ROW(struct A68t215 ,A68t214,1);
typedef struct A68t214  A68_214 ;    /* [] MODE215 */
struct A68t215 { A68_INT mode; union {
A68_CHAR  mode1;
A68_RC  mode2;
A68_BOOL  mode3;
struct A68t65  mode4;
A68_LBITS  mode5;
struct A68t66  mode6;
A68_BITS  mode7;
struct A68t67  mode8;
A68_SBITS  mode9;
struct A68t68  mode10;
A68_SSBITS  mode11;
struct A68t69  mode12;
A68_LINT  mode13;
struct A68t70  mode14;
A68_INT  mode15;
struct A68t71  mode16;
A68_SINT  mode17;
struct A68t72  mode18;
A68_SSINT  mode19;
struct A68t73  mode20;
A68_REAL  mode21;
struct A68t74  mode22;
A68_SREAL  mode23;
struct A68t75  mode24;
A68_COMPL  mode25;
struct A68t76  mode26;
A68_SCOMPL  mode27;
struct A68t77  mode28;
struct A68t80  mode29;
struct A68t49  mode30;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t215  A68_215 ;    /* UNION(CHAR,MODE27,BOOL,MODE65,LONG BITS,MODE66,BITS,MODE67,SHORT BITS,MODE68,SHORT SHORT BITS,MODE69,LONG INT,MODE70,INT,MODE71,SHORT INT,MODE72,SHORT SHORT INT,MODE73,REAL,MODE74,SHORT REAL,MODE75,COMPL,MODE76,SHORT COMPL,MODE77,MODE80,MODE49)  */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t211 ),(struct A68t211 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE211) VOID */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t214 ),(struct A68t214 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE214) VOID */
struct A68t219 ;

A_PROCEDURE(A68_VOID ,A68t218,(struct A68t38 *,struct A68t219 ),(struct A68t38 *,struct A68t219 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE38,MODE219) VOID */
A_ROW(struct A68t64 ,A68t219,1);
typedef struct A68t219  A68_219 ;    /* [] MODE64 */
struct A68t221 ;

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t38 *,struct A68t221 ),(struct A68t38 *,struct A68t221 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE38,MODE221) VOID */
A_ROW(struct A68t79 ,A68t221,1);
typedef struct A68t221  A68_221 ;    /* [] MODE79 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t219 ),(struct A68t219 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE219) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t221 ),(struct A68t221 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE221) VOID */
struct A68t224{
struct A68t38 * F;
A68_BOOL  Ended;
A_PAD_BOOL(PAD_28)
A68_INT  Fnum;
A_PAD_INT(PAD_29)
A68_INT  N;
A_PAD_INT(PAD_30)
A68_INT  Loc;
A_PAD_INT(PAD_31)
A68_INT  Upb;
A_PAD_INT(PAD_32)
struct A68t71  Sec;
A68_RC  B;
struct A68t224 * Next;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(REF MODE38,BOOL,INT,INT,INT,INT,MODE71,MODE27,REF MODE224)  */

A_PROCEDURE(A68_VOID ,A68t225,(A68_BOOL ,struct A68t224 *),(A68_BOOL ,struct A68t224 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(BOOL) MODE224 */

A_PROCEDURE(A68_VOID ,A68t226,(A68_BOOL ,struct A68t71 *),(A68_BOOL ,struct A68t71 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(BOOL) MODE71 */
#define A68_227  A68_71 
#define A68t227 A68t71            /* FLEX [] INT */
#define A68_228  A68_224 
#define A68t228 A68t224            /* STRUCT(REF MODE38,BOOL,INT,INT,INT,INT,MODE227,MODE32,REF MODE224)  */
struct A68t229{
struct A68t32  S;
struct A68t229 * Left;
struct A68t229 * Right;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE32,REF MODE229,REF MODE229)  */
#define A68_230  A68_229 
#define A68t230 A68t229            /* STRUCT(MODE27,REF MODE229,REF MODE229)  */

A_PROCEDURE(A68_VOID ,A68t231,(A68_BOOL ,struct A68t230 *),(A68_BOOL ,struct A68t230 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(BOOL) MODE230 */
struct A68t232{
A68_CHAR  Cs;
A_PAD_CHAR(PAD_33)
};
typedef struct A68t232  A68_232 ;    /* STRUCT(CHAR)  */
struct A68t238 { A68_INT mode; union {
A68_INT  mode1;
struct A68t71  mode2;
struct A68t232  mode3;
A68_RC  mode4;
struct A68t229 * mode6;
struct A68t242 * mode7;
struct A68t239 * mode8;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t238  A68_238 ;    /* UNION(INT,MODE71,MODE232,MODE27,VOID,REF MODE229,REF MODE242,REF MODE239)  */
struct A68t237{
struct A68t238  Text;
struct A68t237 * Next;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE238,REF MODE237)  */
struct A68t239{
struct A68t32  Id;
struct A68t237 ** Textbeg;
struct A68t237 ** Textend;
struct A68t239 * Left;
struct A68t239 * Right;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE32,REF REF MODE237,REF REF MODE237,REF MODE239,REF MODE239)  */
#define A68_240  A68_239 
#define A68t240 A68t239            /* STRUCT(MODE27,REF REF MODE237,REF REF MODE237,REF MODE239,REF MODE239)  */
struct A68t241{
struct A68t229 * Par;
struct A68t241 * Next;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(REF MODE229,REF MODE241)  */
struct A68t242{
struct A68t229 * Id;
A68_BITS  Flags;
A_PAD_BITS(PAD_34)
struct A68t241 * Param;
struct A68t237 ** Textbeg;
struct A68t237 ** Textend;
struct A68t242 * Left;
struct A68t242 * Right;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(REF MODE229,BITS,REF MODE241,REF REF MODE237,REF REF MODE237,REF MODE242,REF MODE242)  */
struct A68t243 { A68_INT mode; union {
A68_INT  mode1;
struct A68t71  mode2;
struct A68t232  mode3;
A68_RC  mode4;
struct A68t229 * mode6;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t243  A68_243 ;    /* UNION(INT,MODE71,MODE232,MODE27,VOID,REF MODE229)  */

A_PROCEDURE(A68_VOID ,A68t244,(A68_BOOL ,struct A68t240 *),(A68_BOOL ,struct A68t240 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(BOOL) MODE240 */
A_ISTRUCT(A68_CHAR ,51,A68t245);
typedef struct A68t245  A68_245 ;    /* STRUCT 51 CHAR */

A_PROCEDURE(A68_VOID ,A68t246,(A68_CHAR ,A68_CHAR ,A68_RC *),(A68_CHAR ,A68_CHAR ,A68_RC *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(CHAR,CHAR) MODE27 */

A_PROCEDURE(A68_VOID ,A68t247,(A68_RC ,struct A68t243 ),(A68_RC ,struct A68t243 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE27,MODE243) VOID */

A_PROCEDURE(A68_VOID ,A68t248,(A68_RC ,struct A68t237 ),(A68_RC ,struct A68t237 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE27,MODE237) VOID */

A_PROCEDURE(A68_VOID ,A68t249,(A68_RC ,A68_RC ),(A68_RC ,A68_RC ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE27,MODE27) VOID */
A_ISTRUCT(A68_INT ,4,A68t250);
typedef struct A68t250  A68_250 ;    /* STRUCT 4 INT */

A_PROCEDURE(struct A68t224 *,A68t251,(struct A68t224 *,struct A68t224 ),(struct A68t224 *,struct A68t224 ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE224,MODE224) REF MODE224 */
A_ISTRUCT(A68_CHAR ,22,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 22 CHAR */
A_ROW(A68_RC ,A68t254,1);
typedef struct A68t254  A68_254 ;    /* [] MODE27 */
#define A68_253  A68_254 
#define A68t253 A68t254            /* [] MODE32 */

A_PROCEDURE(A68_VOID ,A68t255,(A68_BOOL ,struct A68t254 *),(A68_BOOL ,struct A68t254 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(BOOL) MODE254 */
#define A68_256  A68_254 
#define A68t256 A68t254            /* FLEX [] MODE32 */
A_ISTRUCT(A68_CHAR ,1,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_RC ,316,A68t262);
typedef struct A68t262  A68_262 ;    /* STRUCT 316 MODE27 */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t253 ,struct A68t253 ,struct A68t253 *),(struct A68t253 ,struct A68t253 ,struct A68t253 *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(REF MODE253,MODE253) REF MODE253 */
A_ROW(struct A68t229 *,A68t264,1);
typedef struct A68t264  A68_264 ;    /* [] REF MODE229 */

A_PROCEDURE(A68_VOID ,A68t265,(A68_BOOL ,struct A68t264 *),(A68_BOOL ,struct A68t264 *,void *));
typedef struct A68t265  A68_265 ;    /* PROC(BOOL) MODE264 */

A_PROCEDURE(struct A68t239 *,A68t266,(struct A68t239 *,struct A68t239 ),(struct A68t239 *,struct A68t239 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE239,MODE239) REF MODE239 */

A_PROCEDURE(A68_BOOL ,A68t267,(struct A68t214 ),(struct A68t214 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE214) BOOL */

A_PROCEDURE(A68_BOOL ,A68t268,(A68_RC ),(A68_RC ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE27) BOOL */
A_ISTRUCT(A68_CHAR ,11,A68t269);
typedef struct A68t269  A68_269 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(struct A68t215 ,5,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 5 MODE215 */
A_ISTRUCT(struct A68t215 ,3,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 3 MODE215 */
A_ISTRUCT(A68_CHAR ,10,A68t272);
typedef struct A68t272  A68_272 ;    /* STRUCT 10 CHAR */
struct A68t273 { A68_INT mode; union {
A68_RC  mode1;
A68_CHAR  mode2;
A68_INT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t273  A68_273 ;    /* UNION(MODE27,CHAR,INT,VOID)  */
A_ROW(struct A68t273 ,A68t274,1);
typedef struct A68t274  A68_274 ;    /* [] MODE273 */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t274 ),(struct A68t274 ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE274) VOID */
A_ISTRUCT(struct A68t273 ,6,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 6 MODE273 */
A_ISTRUCT(struct A68t273 ,3,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 3 MODE273 */
A_ISTRUCT(struct A68t273 ,7,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 7 MODE273 */

A_PROCEDURE(A68_VOID ,A68t279,(A68_RC ,A68_INT ),(A68_RC ,A68_INT ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE27,INT) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t280);
typedef struct A68t280  A68_280 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(A68_INT ,A68t281,(A68_CHAR ,A68_RC ),(A68_CHAR ,A68_RC ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(CHAR,MODE27) INT */

A_PROCEDURE(A68_VOID ,A68t282,(A68_RC ,A68_CHAR ,A68_RC *),(A68_RC ,A68_CHAR ,A68_RC *,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE27,CHAR) MODE27 */

A_PROCEDURE(A68_INT ,A68t283,(A68_RC ),(A68_RC ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(MODE27) INT */
A_ISTRUCT(A68_INT ,256,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 256 INT */

A_PROCEDURE(A68_VOID ,A68t285,(A68_RC ,A68_RC *),(A68_RC ,A68_RC *,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE27) MODE27 */

A_PROCEDURE(A68_CHAR ,A68t286,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_INT ,A68t287,(A68_CHAR ,struct A68t254 ),(A68_CHAR ,struct A68t254 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(CHAR,MODE254) INT */

A_PROCEDURE(A68_BOOL ,A68t288,(struct A68t229 **,A68_RC ),(struct A68t229 **,A68_RC ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(REF REF MODE229,MODE27) BOOL */
A_ISTRUCT(A68_CHAR ,41,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(struct A68t215 ,14,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 14 MODE215 */
A_ISTRUCT(struct A68t273 ,9,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 9 MODE273 */

A_PROCEDURE(A68_VOID ,A68t295,(struct A68t71 ,struct A68t237 *),(struct A68t71 ,struct A68t237 *,void *));
typedef struct A68t295  A68_295 ;    /* PROC(MODE71) MODE237 */

A_PROCEDURE(struct A68t239 *,A68t296,(struct A68t239 **,A68_RC ,A68_BOOL ,A68_BOOL ),(struct A68t239 **,A68_RC ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(REF REF MODE239,MODE27,BOOL,BOOL) REF MODE239 */

A_PROCEDURE(struct A68t229 *,A68t297,(struct A68t264 ,struct A68t229 *),(struct A68t264 ,struct A68t229 *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(REF MODE264,REF MODE229) REF MODE229 */

A_PROCEDURE(struct A68t229 *,A68t298,(struct A68t229 **,struct A68t229 *),(struct A68t229 **,struct A68t229 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF REF MODE229,REF MODE229) REF MODE229 */

A_PROCEDURE(struct A68t242 *,A68t299,(struct A68t242 **,struct A68t229 *,A68_BOOL ),(struct A68t242 **,struct A68t229 *,A68_BOOL ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF REF MODE242,REF MODE229,BOOL) REF MODE242 */

A_PROCEDURE(A68_BOOL ,A68t300,(struct A68t242 *,struct A68t229 *),(struct A68t242 *,struct A68t229 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE242,REF MODE229) BOOL */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t242 *,struct A68t237 ),(struct A68t242 *,struct A68t237 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE242,MODE237) VOID */

A_PROCEDURE(struct A68t237 *,A68t302,(struct A68t237 *,struct A68t237 ),(struct A68t237 *,struct A68t237 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF MODE237,MODE237) REF MODE237 */

A_PROCEDURE(struct A68t238 *,A68t303,(struct A68t238 *,struct A68t238 ),(struct A68t238 *,struct A68t238 ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(REF MODE238,MODE238) REF MODE238 */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t239 *,struct A68t237 ),(struct A68t239 *,struct A68t237 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(REF MODE239,MODE237) VOID */

A_PROCEDURE(struct A68t242 *,A68t305,(struct A68t242 **,struct A68t229 *),(struct A68t242 **,struct A68t229 *,void *));
typedef struct A68t305  A68_305 ;    /* PROC(REF REF MODE242,REF MODE229) REF MODE242 */
struct A68t306 { A68_INT mode; union {
A68_CHAR  mode1;
A68_RC  mode2;
A68_INT  mode3;
struct A68t71  mode4;
struct A68t229 * mode5;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t306  A68_306 ;    /* UNION(CHAR,MODE27,INT,MODE71,REF MODE229)  */
A_ROW(struct A68t306 ,A68t307,1);
typedef struct A68t307  A68_307 ;    /* [] MODE306 */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t224 *,struct A68t307 ),(struct A68t224 *,struct A68t307 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(REF MODE224,MODE307) VOID */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t224 *),(struct A68t224 *,void *));
typedef struct A68t309  A68_309 ;    /* PROC(REF MODE224) VOID */
A_ISTRUCT(struct A68t215 ,2,A68t310);
typedef struct A68t310  A68_310 ;    /* STRUCT 2 MODE215 */

A_PROCEDURE(A68_BOOL ,A68t311,(struct A68t237 **,struct A68t242 *),(struct A68t237 **,struct A68t242 *,void *));
typedef struct A68t311  A68_311 ;    /* PROC(REF REF MODE237,REF MODE242) BOOL */
struct A68t312{
struct A68t237 * Actual;
struct A68t312 * Next;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(REF MODE237,REF MODE312)  */
A_ISTRUCT(A68_CHAR ,14,A68t313);
typedef struct A68t313  A68_313 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(struct A68t273 ,2,A68t315);
typedef struct A68t315  A68_315 ;    /* STRUCT 2 MODE273 */
A_ISTRUCT(A68_CHAR ,54,A68t316);
typedef struct A68t316  A68_316 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,50,A68t317);
typedef struct A68t317  A68_317 ;    /* STRUCT 50 CHAR */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t224 *,struct A68t239 *,struct A68t71 ),(struct A68t224 *,struct A68t239 *,struct A68t71 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(REF MODE224,REF MODE239,REF MODE71) VOID */
A_ISTRUCT(struct A68t273 ,4,A68t319);
typedef struct A68t319  A68_319 ;    /* STRUCT 4 MODE273 */
A_ISTRUCT(struct A68t306 ,3,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 3 MODE306 */
A_ISTRUCT(struct A68t306 ,2,A68t321);
typedef struct A68t321  A68_321 ;    /* STRUCT 2 MODE306 */
A_ISTRUCT(A68_CHAR ,28,A68t322);
typedef struct A68t322  A68_322 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t323);
typedef struct A68t323  A68_323 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t229 **,A68_RC ),(struct A68t229 **,A68_RC ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF REF MODE229,MODE27) VOID */

A_PROCEDURE(struct A68t229 *,A68t325,(struct A68t229 *,struct A68t229 ),(struct A68t229 *,struct A68t229 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(REF MODE229,MODE229) REF MODE229 */

A_PROCEDURE(A68_BOOL ,A68t326,(struct A68t224 **,A68_RC ),(struct A68t224 **,A68_RC ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(REF REF MODE224,MODE27) BOOL */
A_ISTRUCT(struct A68t212 ,2,A68t327);
typedef struct A68t327  A68_327 ;    /* STRUCT 2 MODE212 */
A_ISTRUCT(A68_CHAR ,25,A68t328);
typedef struct A68t328  A68_328 ;    /* STRUCT 25 CHAR */

A_PROCEDURE(A68_BOOL ,A68t329,(struct A68t224 *),(struct A68t224 *,void *));
typedef struct A68t329  A68_329 ;    /* PROC(REF MODE224) BOOL */

A_PROCEDURE(A68_CHAR ,A68t330,(void),(void *));
typedef struct A68t330  A68_330 ;    /* PROC CHAR */

A_PROCEDURE(A68_VOID ,A68t331,(struct A68t32 *,A68_CHAR ),(struct A68t32 *,A68_CHAR ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(REF MODE32,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,31,A68t332);
typedef struct A68t332  A68_332 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t333,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(CHAR) VOID */
A_ISTRUCT(A68_CHAR ,30,A68t334);
typedef struct A68t334  A68_334 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_BOOL ,A68t335,(void),(void *));
typedef struct A68t335  A68_335 ;    /* PROC BOOL */
A_ISTRUCT(A68_CHAR ,29,A68t336);
typedef struct A68t336  A68_336 ;    /* STRUCT 29 CHAR */

A_PROCEDURE(A68_VOID ,A68t337,(A68_RC ),(A68_RC ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE27) VOID */

A_PROCEDURE(A68_VOID ,A68t338,(struct A68t243 *),(struct A68t243 *,void *));
typedef struct A68t338  A68_338 ;    /* PROC MODE243 */

A_PROCEDURE(struct A68t243 *,A68t339,(struct A68t243 *,struct A68t243 ),(struct A68t243 *,struct A68t243 ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE243,MODE243) REF MODE243 */
A_ISTRUCT(A68_CHAR ,32,A68t340);
typedef struct A68t340  A68_340 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t341);
typedef struct A68t341  A68_341 ;    /* STRUCT 27 CHAR */

A_PROCEDURE(A68_VOID ,A68t342,(A68_CHAR ,A68_RC *),(A68_CHAR ,A68_RC *,void *));
typedef struct A68t342  A68_342 ;    /* PROC(CHAR) MODE27 */
A_ISTRUCT(A68_CHAR ,24,A68t343);
typedef struct A68t343  A68_343 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t344);
typedef struct A68t344  A68_344 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t345);
typedef struct A68t345  A68_345 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(struct A68t215 ,4,A68t346);
typedef struct A68t346  A68_346 ;    /* STRUCT 4 MODE215 */
A_ISTRUCT(A68_CHAR ,12,A68t347);
typedef struct A68t347  A68_347 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t348);
typedef struct A68t348  A68_348 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t349);
typedef struct A68t349  A68_349 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t350);
typedef struct A68t350  A68_350 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_CHAR ,46,A68t351);
typedef struct A68t351  A68_351 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_RC ,4,A68t352);
typedef struct A68t352  A68_352 ;    /* STRUCT 4 MODE27 */
A_ISTRUCT(A68_CHAR ,49,A68t353);
typedef struct A68t353  A68_353 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t354);
typedef struct A68t354  A68_354 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t355);
typedef struct A68t355  A68_355 ;    /* STRUCT 26 CHAR */

/* --- Imports from standard --- */
extern A68_55  EAAAASP_anonymous;
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
extern A68_VOID  DJAAASP_makervc(A68_RC ,A68_VC *);
extern A68_BITS  YQAAASP_elem(A68_INT );
#define NUAAASP_blank ' '
extern A68_CHAR  PUAAASP_nullcharacter;
#define XUAAASP_nulch PUAAASP_nullcharacter
extern A68_CHAR  TUAAASP_lf;
extern A68_CHAR  VUAAASP_tabch;
extern A68_BOOL  ECBAASP_charinstring(A68_CHAR ,A68_INT *,A68_RC );
extern A68_VOID  XPBAASP_whole(struct A68t187 ,A68_INT ,A68_RC *);
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define QZBAASP_prelude A_prelude
extern A68_VOID  ZWBAASP_exit(A68_INT );
extern A68_VOID  BFCAASP_idf(struct A68t38 *,A68_VC *);
extern A68_INT  PFCAASP_logicalend(struct A68t38 *);
extern A68_VOID  UFCAASP_onlogicalfileend(struct A68t38 *,struct A68t45 );
extern A68_VOID  YFCAASP_onphysicalfileend(struct A68t38 *,struct A68t45 );
extern A68_VOID  KGCAASP_maketerm(struct A68t38 *,A68_RC );
extern A68_INT  BHCAASP_establish(struct A68t38 *,A68_RC ,struct A68t63 ,A68_INT ,A68_INT ,A68_INT );
extern A68_INT  OHCAASP_open(struct A68t38 *,struct A68t206 ,struct A68t63 );
extern A68_VOID  XICAASP_close(struct A68t38 *);
extern A68_VOID  JKCAASP_set(struct A68t38 *,A68_INT ,A68_INT ,A68_INT );
extern A68_38  VQCAASP_standerror;
extern A68_63  YZCAASP_argchannel;
extern A68_63  LDDAASP_envchannel;
extern A68_63  TGDAASP_memchannel;
extern A68_63  VRDAASP_standinchannel;
extern A68_63  XRDAASP_standoutchannel;
extern A68_63  ZRDAASP_standbackchannel;
extern A68_VOID  KTDAASP_skipterminators(struct A68t38 *);
extern A68_VOID  XTDAASP_newline(struct A68t38 *);
extern A68_VOID  UKEAASP_get(struct A68t38 *,struct A68t211 );
extern A68_VOID  DWEAASP_put(struct A68t38 *,struct A68t214 );
extern A68_VOID  VCFAASP_print(struct A68t214 );
extern A68_VOID  ADFAASP_getbin(struct A68t38 *,struct A68t219 );
/* --- End of imports from standard --- */


/* --- Imports from params --- */
extern A68_VOID  DFAAAAA_getparam(struct A68t38 *,A68_34 *);
extern A68_31 * VAAAAAA_noparam;
/* --- End of imports from params --- */


/* --- DECS initialisation functions --- */
extern void ANFAASP(void);   /* standard */
extern void BAAAAAA(void);   /* params */
/* --- end of DECS initialisation functions --- */
static A68_225  DAAAAAA_anonymous;
static A68_231  VAAAAAA_anonymous;
static A68_231  DBAAAAA_anonymous;
static A68_244  LBAAAAA_anonymous;
static A68_245   TBAAAAA = {"$Id: tang.w68,v 1.10 2005/01/21 15:34:16 sian Exp $"}; 
A_GISARR(A68_RC ,UBAAAAA,TBAAAAA,51)
static A68_RC  VBAAAAA_cvstang;
static A68_137   WBAAAAA = {".w68"}; 
A_GISARR(A68_RC ,XBAAAAA,WBAAAAA,4)
static A68_RC  YBAAAAA_webext;
static A68_137   ZBAAAAA = {".a68"}; 
A_GISARR(A68_RC ,ACAAAAA,ZBAAAAA,4)
static A68_RC  BCAAAAA_outext;
static A68_RC  EDAAAAA_boldrange;
static A68_RC  JDAAAAA_idrange;
#define KDAAAAA_nostream (A68_224 *)A68_NIL
#define LDAAAAA_noinc (A68_229 *)A68_NIL
#define MDAAAAA_nomac (A68_242 *)A68_NIL
#define NDAAAAA_nomod (A68_239 *)A68_NIL
#define ODAAAAA_nowparam (A68_241 *)A68_NIL
#define PDAAAAA_notag (A68_229 *)A68_NIL
#define QDAAAAA_notext (A68_237 *)A68_NIL
static A68_BOOL  RDAAAAA_debug;
static A68_247  VDAAAAA_debugprinttoken;
static A68_248  AEAAAAA_debugprinttext;
static A68_249  FEAAAAA_debugprintstring;
static A68_INT  HEAAAAA_history;
static A68_INT  IEAAAAA_consolepos;
static A68_BOOL  JEAAAAA_phaseone;
static A68_INT  KEAAAAA_filenumber;
static A68_229 * LEAAAAA_inctree;
static A68_224 * GFAAAAA_web;
static A68_224  JFAAAAA_output;
static A68_32  QFAAAAA_tangfn;
static A68_38  SFAAAAA_argf;
static A68_32  TFAAAAA_homedir;
static A68_32  VFAAAAA_includepaths;
static A68_252   XFAAAAA = {"/usr/share/algol68toc:"}; 
A_GISARR(A68_RC ,YFAAAAA,XFAAAAA,22)
static A68_32  BGAAAAA_arg;
static A68_INT  DGAAAAA_curmood;
static A68_253  NGAAAAA_boldsym;
static A68_257   PGAAAAA = {""}; 
A_GISARR(A68_RC ,QGAAAAA,PGAAAAA,0)
static A68_257   RGAAAAA = {""}; 
A_GISARR(A68_RC ,SGAAAAA,RGAAAAA,0)
static A68_143   TGAAAAA = {"LE"}; 
A_GISARR(A68_RC ,UGAAAAA,TGAAAAA,2)
static A68_257   VGAAAAA = {""}; 
A_GISARR(A68_RC ,WGAAAAA,VGAAAAA,0)
static A68_137   XGAAAAA = {"ELSE"}; 
A_GISARR(A68_RC ,YGAAAAA,XGAAAAA,4)
static A68_258   ZGAAAAA = {"LEVEL"}; 
A_GISARR(A68_RC ,AHAAAAA,ZGAAAAA,5)
static A68_257   BHAAAAA = {""}; 
A_GISARR(A68_RC ,CHAAAAA,BHAAAAA,0)
static A68_257   DHAAAAA = {""}; 
A_GISARR(A68_RC ,EHAAAAA,DHAAAAA,0)
static A68_257   FHAAAAA = {""}; 
A_GISARR(A68_RC ,GHAAAAA,FHAAAAA,0)
static A68_137   HHAAAAA = {"ELIF"}; 
A_GISARR(A68_RC ,IHAAAAA,HHAAAAA,4)
static A68_257   JHAAAAA = {""}; 
A_GISARR(A68_RC ,KHAAAAA,JHAAAAA,0)
static A68_137   LHAAAAA = {"FLEX"}; 
A_GISARR(A68_RC ,MHAAAAA,LHAAAAA,4)
static A68_143   NHAAAAA = {"EQ"}; 
A_GISARR(A68_RC ,OHAAAAA,NHAAAAA,2)
static A68_257   PHAAAAA = {""}; 
A_GISARR(A68_RC ,QHAAAAA,PHAAAAA,0)
static A68_257   RHAAAAA = {""}; 
A_GISARR(A68_RC ,SHAAAAA,RHAAAAA,0)
static A68_257   THAAAAA = {""}; 
A_GISARR(A68_RC ,UHAAAAA,THAAAAA,0)
static A68_257   VHAAAAA = {""}; 
A_GISARR(A68_RC ,WHAAAAA,VHAAAAA,0)
static A68_257   XHAAAAA = {""}; 
A_GISARR(A68_RC ,YHAAAAA,XHAAAAA,0)
static A68_257   ZHAAAAA = {""}; 
A_GISARR(A68_RC ,AIAAAAA,ZHAAAAA,0)
static A68_257   BIAAAAA = {""}; 
A_GISARR(A68_RC ,CIAAAAA,BIAAAAA,0)
static A68_257   DIAAAAA = {""}; 
A_GISARR(A68_RC ,EIAAAAA,DIAAAAA,0)
static A68_137   FIAAAAA = {"EXIT"}; 
A_GISARR(A68_RC ,GIAAAAA,FIAAAAA,4)
static A68_257   HIAAAAA = {""}; 
A_GISARR(A68_RC ,IIAAAAA,HIAAAAA,0)
static A68_257   JIAAAAA = {""}; 
A_GISARR(A68_RC ,KIAAAAA,JIAAAAA,0)
static A68_257   LIAAAAA = {""}; 
A_GISARR(A68_RC ,MIAAAAA,LIAAAAA,0)
static A68_257   NIAAAAA = {""}; 
A_GISARR(A68_RC ,OIAAAAA,NIAAAAA,0)
static A68_257   PIAAAAA = {""}; 
A_GISARR(A68_RC ,QIAAAAA,PIAAAAA,0)
static A68_257   RIAAAAA = {""}; 
A_GISARR(A68_RC ,SIAAAAA,RIAAAAA,0)
static A68_257   TIAAAAA = {""}; 
A_GISARR(A68_RC ,UIAAAAA,TIAAAAA,0)
static A68_137   VIAAAAA = {"KEEP"}; 
A_GISARR(A68_RC ,WIAAAAA,VIAAAAA,4)
static A68_257   XIAAAAA = {""}; 
A_GISARR(A68_RC ,YIAAAAA,XIAAAAA,0)
static A68_257   ZIAAAAA = {""}; 
A_GISARR(A68_RC ,AJAAAAA,ZIAAAAA,0)
static A68_143   BJAAAAA = {"LT"}; 
A_GISARR(A68_RC ,CJAAAAA,BJAAAAA,2)
static A68_257   DJAAAAA = {""}; 
A_GISARR(A68_RC ,EJAAAAA,DJAAAAA,0)
static A68_257   FJAAAAA = {""}; 
A_GISARR(A68_RC ,GJAAAAA,FJAAAAA,0)
static A68_257   HJAAAAA = {""}; 
A_GISARR(A68_RC ,IJAAAAA,HJAAAAA,0)
static A68_257   JJAAAAA = {""}; 
A_GISARR(A68_RC ,KJAAAAA,JJAAAAA,0)
static A68_257   LJAAAAA = {""}; 
A_GISARR(A68_RC ,MJAAAAA,LJAAAAA,0)
static A68_257   NJAAAAA = {""}; 
A_GISARR(A68_RC ,OJAAAAA,NJAAAAA,0)
static A68_137   PJAAAAA = {"ESAC"}; 
A_GISARR(A68_RC ,QJAAAAA,PJAAAAA,4)
static A68_257   RJAAAAA = {""}; 
A_GISARR(A68_RC ,SJAAAAA,RJAAAAA,0)
static A68_257   TJAAAAA = {""}; 
A_GISARR(A68_RC ,UJAAAAA,TJAAAAA,0)
static A68_257   VJAAAAA = {""}; 
A_GISARR(A68_RC ,WJAAAAA,VJAAAAA,0)
static A68_257   XJAAAAA = {""}; 
A_GISARR(A68_RC ,YJAAAAA,XJAAAAA,0)
static A68_137   ZJAAAAA = {"SKIP"}; 
A_GISARR(A68_RC ,AKAAAAA,ZJAAAAA,4)
static A68_257   BKAAAAA = {""}; 
A_GISARR(A68_RC ,CKAAAAA,BKAAAAA,0)
static A68_257   DKAAAAA = {""}; 
A_GISARR(A68_RC ,EKAAAAA,DKAAAAA,0)
static A68_143   FKAAAAA = {"RE"}; 
A_GISARR(A68_RC ,GKAAAAA,FKAAAAA,2)
static A68_137   HKAAAAA = {"HEAP"}; 
A_GISARR(A68_RC ,IKAAAAA,HKAAAAA,4)
static A68_137   JKAAAAA = {"REAL"}; 
A_GISARR(A68_RC ,KKAAAAA,JKAAAAA,4)
static A68_257   LKAAAAA = {""}; 
A_GISARR(A68_RC ,MKAAAAA,LKAAAAA,0)
static A68_259   NKAAAAA = {"STRUCT"}; 
A_GISARR(A68_RC ,OKAAAAA,NKAAAAA,6)
static A68_257   PKAAAAA = {""}; 
A_GISARR(A68_RC ,QKAAAAA,PKAAAAA,0)
static A68_260   RKAAAAA = {"REF"}; 
A_GISARR(A68_RC ,SKAAAAA,RKAAAAA,3)
static A68_143   TKAAAAA = {"UP"}; 
A_GISARR(A68_RC ,UKAAAAA,TKAAAAA,2)
static A68_257   VKAAAAA = {""}; 
A_GISARR(A68_RC ,WKAAAAA,VKAAAAA,0)
static A68_257   XKAAAAA = {""}; 
A_GISARR(A68_RC ,YKAAAAA,XKAAAAA,0)
static A68_257   ZKAAAAA = {""}; 
A_GISARR(A68_RC ,ALAAAAA,ZKAAAAA,0)
static A68_257   BLAAAAA = {""}; 
A_GISARR(A68_RC ,CLAAAAA,BLAAAAA,0)
static A68_137   DLAAAAA = {"FILE"}; 
A_GISARR(A68_RC ,ELAAAAA,DLAAAAA,4)
static A68_257   FLAAAAA = {""}; 
A_GISARR(A68_RC ,GLAAAAA,FLAAAAA,0)
static A68_257   HLAAAAA = {""}; 
A_GISARR(A68_RC ,ILAAAAA,HLAAAAA,0)
static A68_143   JLAAAAA = {"IF"}; 
A_GISARR(A68_RC ,KLAAAAA,JLAAAAA,2)
static A68_257   LLAAAAA = {""}; 
A_GISARR(A68_RC ,MLAAAAA,LLAAAAA,0)
static A68_137   NLAAAAA = {"TRUE"}; 
A_GISARR(A68_RC ,OLAAAAA,NLAAAAA,4)
static A68_257   PLAAAAA = {""}; 
A_GISARR(A68_RC ,QLAAAAA,PLAAAAA,0)
static A68_257   RLAAAAA = {""}; 
A_GISARR(A68_RC ,SLAAAAA,RLAAAAA,0)
static A68_261   TLAAAAA = {"PRAGMAT"}; 
A_GISARR(A68_RC ,ULAAAAA,TLAAAAA,7)
static A68_257   VLAAAAA = {""}; 
A_GISARR(A68_RC ,WLAAAAA,VLAAAAA,0)
static A68_137   XLAAAAA = {"PROC"}; 
A_GISARR(A68_RC ,YLAAAAA,XLAAAAA,4)
static A68_260   ZLAAAAA = {"USE"}; 
A_GISARR(A68_RC ,AMAAAAA,ZLAAAAA,3)
static A68_261   BMAAAAA = {"CHANNEL"}; 
A_GISARR(A68_RC ,CMAAAAA,BMAAAAA,7)
static A68_257   DMAAAAA = {""}; 
A_GISARR(A68_RC ,EMAAAAA,DMAAAAA,0)
static A68_257   FMAAAAA = {""}; 
A_GISARR(A68_RC ,GMAAAAA,FMAAAAA,0)
static A68_257   HMAAAAA = {""}; 
A_GISARR(A68_RC ,IMAAAAA,HMAAAAA,0)
static A68_257   JMAAAAA = {""}; 
A_GISARR(A68_RC ,KMAAAAA,JMAAAAA,0)
static A68_257   LMAAAAA = {""}; 
A_GISARR(A68_RC ,MMAAAAA,LMAAAAA,0)
static A68_257   NMAAAAA = {""}; 
A_GISARR(A68_RC ,OMAAAAA,NMAAAAA,0)
static A68_257   PMAAAAA = {""}; 
A_GISARR(A68_RC ,QMAAAAA,PMAAAAA,0)
static A68_258   RMAAAAA = {"SHORT"}; 
A_GISARR(A68_RC ,SMAAAAA,RMAAAAA,5)
static A68_257   TMAAAAA = {""}; 
A_GISARR(A68_RC ,UMAAAAA,TMAAAAA,0)
static A68_257   VMAAAAA = {""}; 
A_GISARR(A68_RC ,WMAAAAA,VMAAAAA,0)
static A68_143   XMAAAAA = {"IS"}; 
A_GISARR(A68_RC ,YMAAAAA,XMAAAAA,2)
static A68_257   ZMAAAAA = {""}; 
A_GISARR(A68_RC ,ANAAAAA,ZMAAAAA,0)
static A68_137   BNAAAAA = {"ISNT"}; 
A_GISARR(A68_RC ,CNAAAAA,BNAAAAA,4)
static A68_257   DNAAAAA = {""}; 
A_GISARR(A68_RC ,ENAAAAA,DNAAAAA,0)
static A68_257   FNAAAAA = {""}; 
A_GISARR(A68_RC ,GNAAAAA,FNAAAAA,0)
static A68_143   HNAAAAA = {"OP"}; 
A_GISARR(A68_RC ,INAAAAA,HNAAAAA,2)
static A68_257   JNAAAAA = {""}; 
A_GISARR(A68_RC ,KNAAAAA,JNAAAAA,0)
static A68_257   LNAAAAA = {""}; 
A_GISARR(A68_RC ,MNAAAAA,LNAAAAA,0)
static A68_257   NNAAAAA = {""}; 
A_GISARR(A68_RC ,ONAAAAA,NNAAAAA,0)
static A68_259   PNAAAAA = {"PLUSTO"}; 
A_GISARR(A68_RC ,QNAAAAA,PNAAAAA,6)
static A68_143   RNAAAAA = {"PR"}; 
A_GISARR(A68_RC ,SNAAAAA,RNAAAAA,2)
static A68_257   TNAAAAA = {""}; 
A_GISARR(A68_RC ,UNAAAAA,TNAAAAA,0)
static A68_137   VNAAAAA = {"REPR"}; 
A_GISARR(A68_RC ,WNAAAAA,VNAAAAA,4)
static A68_257   XNAAAAA = {""}; 
A_GISARR(A68_RC ,YNAAAAA,XNAAAAA,0)
static A68_137   ZNAAAAA = {"EDOC"}; 
A_GISARR(A68_RC ,AOAAAAA,ZNAAAAA,4)
static A68_143   BOAAAAA = {"OF"}; 
A_GISARR(A68_RC ,COAAAAA,BOAAAAA,2)
static A68_257   DOAAAAA = {""}; 
A_GISARR(A68_RC ,EOAAAAA,DOAAAAA,0)
static A68_258   FOAAAAA = {"WHILE"}; 
A_GISARR(A68_RC ,GOAAAAA,FOAAAAA,5)
static A68_257   HOAAAAA = {""}; 
A_GISARR(A68_RC ,IOAAAAA,HOAAAAA,0)
static A68_259   JOAAAAA = {"PLUSAB"}; 
A_GISARR(A68_RC ,KOAAAAA,JOAAAAA,6)
static A68_257   LOAAAAA = {""}; 
A_GISARR(A68_RC ,MOAAAAA,LOAAAAA,0)
static A68_257   NOAAAAA = {""}; 
A_GISARR(A68_RC ,OOAAAAA,NOAAAAA,0)
static A68_257   POAAAAA = {""}; 
A_GISARR(A68_RC ,QOAAAAA,POAAAAA,0)
static A68_259   ROAAAAA = {"FINISH"}; 
A_GISARR(A68_RC ,SOAAAAA,ROAAAAA,6)
static A68_257   TOAAAAA = {""}; 
A_GISARR(A68_RC ,UOAAAAA,TOAAAAA,0)
static A68_143   VOAAAAA = {"FI"}; 
A_GISARR(A68_RC ,WOAAAAA,VOAAAAA,2)
static A68_260   XOAAAAA = {"LOC"}; 
A_GISARR(A68_RC ,YOAAAAA,XOAAAAA,3)
static A68_137   ZOAAAAA = {"CODE"}; 
A_GISARR(A68_RC ,APAAAAA,ZOAAAAA,4)
static A68_258   BPAAAAA = {"COMPL"}; 
A_GISARR(A68_RC ,CPAAAAA,BPAAAAA,5)
static A68_259   DPAAAAA = {"FORMAT"}; 
A_GISARR(A68_RC ,EPAAAAA,DPAAAAA,6)
static A68_257   FPAAAAA = {""}; 
A_GISARR(A68_RC ,GPAAAAA,FPAAAAA,0)
static A68_137   HPAAAAA = {"CHAR"}; 
A_GISARR(A68_RC ,IPAAAAA,HPAAAAA,4)
static A68_257   JPAAAAA = {""}; 
A_GISARR(A68_RC ,KPAAAAA,JPAAAAA,0)
static A68_257   LPAAAAA = {""}; 
A_GISARR(A68_RC ,MPAAAAA,LPAAAAA,0)
static A68_257   NPAAAAA = {""}; 
A_GISARR(A68_RC ,OPAAAAA,NPAAAAA,0)
static A68_257   PPAAAAA = {""}; 
A_GISARR(A68_RC ,QPAAAAA,PPAAAAA,0)
static A68_257   RPAAAAA = {""}; 
A_GISARR(A68_RC ,SPAAAAA,RPAAAAA,0)
static A68_257   TPAAAAA = {""}; 
A_GISARR(A68_RC ,UPAAAAA,TPAAAAA,0)
static A68_257   VPAAAAA = {""}; 
A_GISARR(A68_RC ,WPAAAAA,VPAAAAA,0)
static A68_257   XPAAAAA = {""}; 
A_GISARR(A68_RC ,YPAAAAA,XPAAAAA,0)
static A68_143   ZPAAAAA = {"GE"}; 
A_GISARR(A68_RC ,AQAAAAA,ZPAAAAA,2)
static A68_258   BQAAAAA = {"FALSE"}; 
A_GISARR(A68_RC ,CQAAAAA,BQAAAAA,5)
static A68_137   DQAAAAA = {"LENG"}; 
A_GISARR(A68_RC ,EQAAAAA,DQAAAAA,4)
static A68_257   FQAAAAA = {""}; 
A_GISARR(A68_RC ,GQAAAAA,FQAAAAA,0)
static A68_137   HQAAAAA = {"ELEM"}; 
A_GISARR(A68_RC ,IQAAAAA,HQAAAAA,4)
static A68_261   JQAAAAA = {"COMMENT"}; 
A_GISARR(A68_RC ,KQAAAAA,JQAAAAA,7)
static A68_257   LQAAAAA = {""}; 
A_GISARR(A68_RC ,MQAAAAA,LQAAAAA,0)
static A68_143   NQAAAAA = {"NE"}; 
A_GISARR(A68_RC ,OQAAAAA,NQAAAAA,2)
static A68_257   PQAAAAA = {""}; 
A_GISARR(A68_RC ,QQAAAAA,PQAAAAA,0)
static A68_137   RQAAAAA = {"FIND"}; 
A_GISARR(A68_RC ,SQAAAAA,RQAAAAA,4)
static A68_137   TQAAAAA = {"SEMA"}; 
A_GISARR(A68_RC ,UQAAAAA,TQAAAAA,4)
static A68_257   VQAAAAA = {""}; 
A_GISARR(A68_RC ,WQAAAAA,VQAAAAA,0)
static A68_137   XQAAAAA = {"PRIO"}; 
A_GISARR(A68_RC ,YQAAAAA,XQAAAAA,4)
static A68_257   ZQAAAAA = {""}; 
A_GISARR(A68_RC ,ARAAAAA,ZQAAAAA,0)
static A68_257   BRAAAAA = {""}; 
A_GISARR(A68_RC ,CRAAAAA,BRAAAAA,0)
static A68_137   DRAAAAA = {"CASE"}; 
A_GISARR(A68_RC ,ERAAAAA,DRAAAAA,4)
static A68_260   FRAAAAA = {"FOR"}; 
A_GISARR(A68_RC ,GRAAAAA,FRAAAAA,3)
static A68_137   HRAAAAA = {"CONJ"}; 
A_GISARR(A68_RC ,IRAAAAA,HRAAAAA,4)
static A68_257   JRAAAAA = {""}; 
A_GISARR(A68_RC ,KRAAAAA,JRAAAAA,0)
static A68_137   LRAAAAA = {"OUSE"}; 
A_GISARR(A68_RC ,MRAAAAA,LRAAAAA,4)
static A68_257   NRAAAAA = {""}; 
A_GISARR(A68_RC ,ORAAAAA,NRAAAAA,0)
static A68_257   PRAAAAA = {""}; 
A_GISARR(A68_RC ,QRAAAAA,PRAAAAA,0)
static A68_261   RRAAAAA = {"OUTTYPE"}; 
A_GISARR(A68_RC ,SRAAAAA,RRAAAAA,7)
static A68_143   TRAAAAA = {"AT"}; 
A_GISARR(A68_RC ,URAAAAA,TRAAAAA,2)
static A68_257   VRAAAAA = {""}; 
A_GISARR(A68_RC ,WRAAAAA,VRAAAAA,0)
static A68_257   XRAAAAA = {""}; 
A_GISARR(A68_RC ,YRAAAAA,XRAAAAA,0)
static A68_260   ZRAAAAA = {"LWB"}; 
A_GISARR(A68_RC ,ASAAAAA,ZRAAAAA,3)
static A68_257   BSAAAAA = {""}; 
A_GISARR(A68_RC ,CSAAAAA,BSAAAAA,0)
static A68_260   DSAAAAA = {"UPB"}; 
A_GISARR(A68_RC ,ESAAAAA,DSAAAAA,3)
static A68_257   FSAAAAA = {""}; 
A_GISARR(A68_RC ,GSAAAAA,FSAAAAA,0)
static A68_143   HSAAAAA = {"GT"}; 
A_GISARR(A68_RC ,ISAAAAA,HSAAAAA,2)
static A68_257   JSAAAAA = {""}; 
A_GISARR(A68_RC ,KSAAAAA,JSAAAAA,0)
static A68_137   LSAAAAA = {"OVER"}; 
A_GISARR(A68_RC ,MSAAAAA,LSAAAAA,4)
static A68_260   NSAAAAA = {"OUT"}; 
A_GISARR(A68_RC ,OSAAAAA,NSAAAAA,3)
static A68_259   PSAAAAA = {"STRING"}; 
A_GISARR(A68_RC ,QSAAAAA,PSAAAAA,6)
static A68_257   RSAAAAA = {""}; 
A_GISARR(A68_RC ,SSAAAAA,RSAAAAA,0)
static A68_257   TSAAAAA = {""}; 
A_GISARR(A68_RC ,USAAAAA,TSAAAAA,0)
static A68_257   VSAAAAA = {""}; 
A_GISARR(A68_RC ,WSAAAAA,VSAAAAA,0)
static A68_257   XSAAAAA = {""}; 
A_GISARR(A68_RC ,YSAAAAA,XSAAAAA,0)
static A68_260   ZSAAAAA = {"PAR"}; 
A_GISARR(A68_RC ,ATAAAAA,ZSAAAAA,3)
static A68_257   BTAAAAA = {""}; 
A_GISARR(A68_RC ,CTAAAAA,BTAAAAA,0)
static A68_257   DTAAAAA = {""}; 
A_GISARR(A68_RC ,ETAAAAA,DTAAAAA,0)
static A68_137   FTAAAAA = {"BITS"}; 
A_GISARR(A68_RC ,GTAAAAA,FTAAAAA,4)
static A68_257   HTAAAAA = {""}; 
A_GISARR(A68_RC ,ITAAAAA,HTAAAAA,0)
static A68_257   JTAAAAA = {""}; 
A_GISARR(A68_RC ,KTAAAAA,JTAAAAA,0)
static A68_261   LTAAAAA = {"TIMESAB"}; 
A_GISARR(A68_RC ,MTAAAAA,LTAAAAA,7)
static A68_258   NTAAAAA = {"AFTER"}; 
A_GISARR(A68_RC ,OTAAAAA,NTAAAAA,5)
static A68_257   PTAAAAA = {""}; 
A_GISARR(A68_RC ,QTAAAAA,PTAAAAA,0)
static A68_257   RTAAAAA = {""}; 
A_GISARR(A68_RC ,STAAAAA,RTAAAAA,0)
static A68_257   TTAAAAA = {""}; 
A_GISARR(A68_RC ,UTAAAAA,TTAAAAA,0)
static A68_257   VTAAAAA = {""}; 
A_GISARR(A68_RC ,WTAAAAA,VTAAAAA,0)
static A68_257   XTAAAAA = {""}; 
A_GISARR(A68_RC ,YTAAAAA,XTAAAAA,0)
static A68_261   ZTAAAAA = {"PROGRAM"}; 
A_GISARR(A68_RC ,AUAAAAA,ZTAAAAA,7)
static A68_257   BUAAAAA = {""}; 
A_GISARR(A68_RC ,CUAAAAA,BUAAAAA,0)
static A68_137   DUAAAAA = {"FROM"}; 
A_GISARR(A68_RC ,EUAAAAA,DUAAAAA,4)
static A68_143   FUAAAAA = {"OR"}; 
A_GISARR(A68_RC ,GUAAAAA,FUAAAAA,2)
static A68_259   HUAAAAA = {"ENTIER"}; 
A_GISARR(A68_RC ,IUAAAAA,HUAAAAA,6)
static A68_257   JUAAAAA = {""}; 
A_GISARR(A68_RC ,KUAAAAA,JUAAAAA,0)
static A68_260   LUAAAAA = {"NIL"}; 
A_GISARR(A68_RC ,MUAAAAA,LUAAAAA,3)
static A68_137   NUAAAAA = {"VOID"}; 
A_GISARR(A68_RC ,OUAAAAA,NUAAAAA,4)
static A68_257   PUAAAAA = {""}; 
A_GISARR(A68_RC ,QUAAAAA,PUAAAAA,0)
static A68_259   RUAAAAA = {"INTYPE"}; 
A_GISARR(A68_RC ,SUAAAAA,RUAAAAA,6)
static A68_137   TUAAAAA = {"BOOL"}; 
A_GISARR(A68_RC ,UUAAAAA,TUAAAAA,4)
static A68_258   VUAAAAA = {"BYTES"}; 
A_GISARR(A68_RC ,WUAAAAA,VUAAAAA,5)
static A68_257   XUAAAAA = {""}; 
A_GISARR(A68_RC ,YUAAAAA,XUAAAAA,0)
static A68_143   ZUAAAAA = {"TO"}; 
A_GISARR(A68_RC ,AVAAAAA,ZUAAAAA,2)
static A68_257   BVAAAAA = {""}; 
A_GISARR(A68_RC ,CVAAAAA,BVAAAAA,0)
static A68_257   DVAAAAA = {""}; 
A_GISARR(A68_RC ,EVAAAAA,DVAAAAA,0)
static A68_137   FVAAAAA = {"THEN"}; 
A_GISARR(A68_RC ,GVAAAAA,FVAAAAA,4)
static A68_257   HVAAAAA = {""}; 
A_GISARR(A68_RC ,IVAAAAA,HVAAAAA,0)
static A68_143   JVAAAAA = {"CO"}; 
A_GISARR(A68_RC ,KVAAAAA,JVAAAAA,2)
static A68_261   LVAAAAA = {"SHORTEN"}; 
A_GISARR(A68_RC ,MVAAAAA,LVAAAAA,7)
static A68_257   NVAAAAA = {""}; 
A_GISARR(A68_RC ,OVAAAAA,NVAAAAA,0)
static A68_260   PVAAAAA = {"INT"}; 
A_GISARR(A68_RC ,QVAAAAA,PVAAAAA,3)
static A68_137   RVAAAAA = {"SIGN"}; 
A_GISARR(A68_RC ,SVAAAAA,RVAAAAA,4)
static A68_258   TVAAAAA = {"EMPTY"}; 
A_GISARR(A68_RC ,UVAAAAA,TVAAAAA,5)
static A68_257   VVAAAAA = {""}; 
A_GISARR(A68_RC ,WVAAAAA,VVAAAAA,0)
static A68_257   XVAAAAA = {""}; 
A_GISARR(A68_RC ,YVAAAAA,XVAAAAA,0)
static A68_257   ZVAAAAA = {""}; 
A_GISARR(A68_RC ,AWAAAAA,ZVAAAAA,0)
static A68_257   BWAAAAA = {""}; 
A_GISARR(A68_RC ,CWAAAAA,BWAAAAA,0)
static A68_260   DWAAAAA = {"END"}; 
A_GISARR(A68_RC ,EWAAAAA,DWAAAAA,3)
static A68_257   FWAAAAA = {""}; 
A_GISARR(A68_RC ,GWAAAAA,FWAAAAA,0)
static A68_257   HWAAAAA = {""}; 
A_GISARR(A68_RC ,IWAAAAA,HWAAAAA,0)
static A68_257   JWAAAAA = {""}; 
A_GISARR(A68_RC ,KWAAAAA,JWAAAAA,0)
static A68_259   LWAAAAA = {"OVERAB"}; 
A_GISARR(A68_RC ,MWAAAAA,LWAAAAA,6)
static A68_258   NWAAAAA = {"ROUND"}; 
A_GISARR(A68_RC ,OWAAAAA,NWAAAAA,5)
static A68_257   PWAAAAA = {""}; 
A_GISARR(A68_RC ,QWAAAAA,PWAAAAA,0)
static A68_137   RWAAAAA = {"LONG"}; 
A_GISARR(A68_RC ,SWAAAAA,RWAAAAA,4)
static A68_257   TWAAAAA = {""}; 
A_GISARR(A68_RC ,UWAAAAA,TWAAAAA,0)
static A68_137   VWAAAAA = {"MODE"}; 
A_GISARR(A68_RC ,WWAAAAA,VWAAAAA,4)
static A68_257   XWAAAAA = {""}; 
A_GISARR(A68_RC ,YWAAAAA,XWAAAAA,0)
static A68_257   ZWAAAAA = {""}; 
A_GISARR(A68_RC ,AXAAAAA,ZWAAAAA,0)
static A68_257   BXAAAAA = {""}; 
A_GISARR(A68_RC ,CXAAAAA,BXAAAAA,0)
static A68_257   DXAAAAA = {""}; 
A_GISARR(A68_RC ,EXAAAAA,DXAAAAA,0)
static A68_257   FXAAAAA = {""}; 
A_GISARR(A68_RC ,GXAAAAA,FXAAAAA,0)
static A68_257   HXAAAAA = {""}; 
A_GISARR(A68_RC ,IXAAAAA,HXAAAAA,0)
static A68_257   JXAAAAA = {""}; 
A_GISARR(A68_RC ,KXAAAAA,JXAAAAA,0)
static A68_257   LXAAAAA = {""}; 
A_GISARR(A68_RC ,MXAAAAA,LXAAAAA,0)
static A68_257   NXAAAAA = {""}; 
A_GISARR(A68_RC ,OXAAAAA,NXAAAAA,0)
static A68_257   PXAAAAA = {""}; 
A_GISARR(A68_RC ,QXAAAAA,PXAAAAA,0)
static A68_258   RXAAAAA = {"DIVAB"}; 
A_GISARR(A68_RC ,SXAAAAA,RXAAAAA,5)
static A68_257   TXAAAAA = {""}; 
A_GISARR(A68_RC ,UXAAAAA,TXAAAAA,0)
static A68_257   VXAAAAA = {""}; 
A_GISARR(A68_RC ,WXAAAAA,VXAAAAA,0)
static A68_257   XXAAAAA = {""}; 
A_GISARR(A68_RC ,YXAAAAA,XXAAAAA,0)
static A68_260   ZXAAAAA = {"ABS"}; 
A_GISARR(A68_RC ,AYAAAAA,ZXAAAAA,3)
static A68_258   BYAAAAA = {"BEGIN"}; 
A_GISARR(A68_RC ,CYAAAAA,BYAAAAA,5)
static A68_257   DYAAAAA = {""}; 
A_GISARR(A68_RC ,EYAAAAA,DYAAAAA,0)
static A68_257   FYAAAAA = {""}; 
A_GISARR(A68_RC ,GYAAAAA,FYAAAAA,0)
static A68_260   HYAAAAA = {"NOT"}; 
A_GISARR(A68_RC ,IYAAAAA,HYAAAAA,3)
static A68_143   JYAAAAA = {"OD"}; 
A_GISARR(A68_RC ,KYAAAAA,JYAAAAA,2)
static A68_260   LYAAAAA = {"ODD"}; 
A_GISARR(A68_RC ,MYAAAAA,LYAAAAA,3)
static A68_257   NYAAAAA = {""}; 
A_GISARR(A68_RC ,OYAAAAA,NYAAAAA,0)
static A68_257   PYAAAAA = {""}; 
A_GISARR(A68_RC ,QYAAAAA,PYAAAAA,0)
static A68_257   RYAAAAA = {""}; 
A_GISARR(A68_RC ,SYAAAAA,RYAAAAA,0)
static A68_257   TYAAAAA = {""}; 
A_GISARR(A68_RC ,UYAAAAA,TYAAAAA,0)
static A68_143   VYAAAAA = {"BY"}; 
A_GISARR(A68_RC ,WYAAAAA,VYAAAAA,2)
static A68_257   XYAAAAA = {""}; 
A_GISARR(A68_RC ,YYAAAAA,XYAAAAA,0)
static A68_257   ZYAAAAA = {""}; 
A_GISARR(A68_RC ,AZAAAAA,ZYAAAAA,0)
static A68_257   BZAAAAA = {""}; 
A_GISARR(A68_RC ,CZAAAAA,BZAAAAA,0)
static A68_257   DZAAAAA = {""}; 
A_GISARR(A68_RC ,EZAAAAA,DZAAAAA,0)
static A68_257   FZAAAAA = {""}; 
A_GISARR(A68_RC ,GZAAAAA,FZAAAAA,0)
static A68_257   HZAAAAA = {""}; 
A_GISARR(A68_RC ,IZAAAAA,HZAAAAA,0)
static A68_143   JZAAAAA = {"DO"}; 
A_GISARR(A68_RC ,KZAAAAA,JZAAAAA,2)
static A68_258   LZAAAAA = {"ALIEN"}; 
A_GISARR(A68_RC ,MZAAAAA,LZAAAAA,5)
static A68_257   NZAAAAA = {""}; 
A_GISARR(A68_RC ,OZAAAAA,NZAAAAA,0)
static A68_257   PZAAAAA = {""}; 
A_GISARR(A68_RC ,QZAAAAA,PZAAAAA,0)
static A68_257   RZAAAAA = {""}; 
A_GISARR(A68_RC ,SZAAAAA,RZAAAAA,0)
static A68_257   TZAAAAA = {""}; 
A_GISARR(A68_RC ,UZAAAAA,TZAAAAA,0)
static A68_257   VZAAAAA = {""}; 
A_GISARR(A68_RC ,WZAAAAA,VZAAAAA,0)
static A68_257   XZAAAAA = {""}; 
A_GISARR(A68_RC ,YZAAAAA,XZAAAAA,0)
static A68_257   ZZAAAAA = {""}; 
A_GISARR(A68_RC ,AABAAAA,ZZAAAAA,0)
static A68_257   BABAAAA = {""}; 
A_GISARR(A68_RC ,CABAAAA,BABAAAA,0)
static A68_257   DABAAAA = {""}; 
A_GISARR(A68_RC ,EABAAAA,DABAAAA,0)
static A68_257   FABAAAA = {""}; 
A_GISARR(A68_RC ,GABAAAA,FABAAAA,0)
static A68_257   HABAAAA = {""}; 
A_GISARR(A68_RC ,IABAAAA,HABAAAA,0)
static A68_257   JABAAAA = {""}; 
A_GISARR(A68_RC ,KABAAAA,JABAAAA,0)
static A68_257   LABAAAA = {""}; 
A_GISARR(A68_RC ,MABAAAA,LABAAAA,0)
static A68_257   NABAAAA = {""}; 
A_GISARR(A68_RC ,OABAAAA,NABAAAA,0)
static A68_257   PABAAAA = {""}; 
A_GISARR(A68_RC ,QABAAAA,PABAAAA,0)
static A68_257   RABAAAA = {""}; 
A_GISARR(A68_RC ,SABAAAA,RABAAAA,0)
static A68_257   TABAAAA = {""}; 
A_GISARR(A68_RC ,UABAAAA,TABAAAA,0)
static A68_257   VABAAAA = {""}; 
A_GISARR(A68_RC ,WABAAAA,VABAAAA,0)
static A68_257   XABAAAA = {""}; 
A_GISARR(A68_RC ,YABAAAA,XABAAAA,0)
static A68_257   ZABAAAA = {""}; 
A_GISARR(A68_RC ,ABBAAAA,ZABAAAA,0)
static A68_257   BBBAAAA = {""}; 
A_GISARR(A68_RC ,CBBAAAA,BBBAAAA,0)
static A68_257   DBBAAAA = {""}; 
A_GISARR(A68_RC ,EBBAAAA,DBBAAAA,0)
static A68_257   FBBAAAA = {""}; 
A_GISARR(A68_RC ,GBBAAAA,FBBAAAA,0)
static A68_257   HBBAAAA = {""}; 
A_GISARR(A68_RC ,IBBAAAA,HBBAAAA,0)
static A68_257   JBBAAAA = {""}; 
A_GISARR(A68_RC ,KBBAAAA,JBBAAAA,0)
static A68_257   LBBAAAA = {""}; 
A_GISARR(A68_RC ,MBBAAAA,LBBAAAA,0)
static A68_257   NBBAAAA = {""}; 
A_GISARR(A68_RC ,OBBAAAA,NBBAAAA,0)
static A68_257   PBBAAAA = {""}; 
A_GISARR(A68_RC ,QBBAAAA,PBBAAAA,0)
static A68_261   RBBAAAA = {"MINUSAB"}; 
A_GISARR(A68_RC ,SBBAAAA,RBBAAAA,7)
static A68_260   TBBAAAA = {"BIN"}; 
A_GISARR(A68_RC ,UBBAAAA,TBBAAAA,3)
static A68_257   VBBAAAA = {""}; 
A_GISARR(A68_RC ,WBBAAAA,VBBAAAA,0)
static A68_257   XBBAAAA = {""}; 
A_GISARR(A68_RC ,YBBAAAA,XBBAAAA,0)
static A68_257   ZBBAAAA = {""}; 
A_GISARR(A68_RC ,ACBAAAA,ZBBAAAA,0)
static A68_257   BCBAAAA = {""}; 
A_GISARR(A68_RC ,CCBAAAA,BCBAAAA,0)
static A68_257   DCBAAAA = {""}; 
A_GISARR(A68_RC ,ECBAAAA,DCBAAAA,0)
static A68_260   FCBAAAA = {"ARG"}; 
A_GISARR(A68_RC ,GCBAAAA,FCBAAAA,3)
static A68_260   HCBAAAA = {"MOD"}; 
A_GISARR(A68_RC ,ICBAAAA,HCBAAAA,3)
static A68_257   JCBAAAA = {""}; 
A_GISARR(A68_RC ,KCBAAAA,JCBAAAA,0)
static A68_257   LCBAAAA = {""}; 
A_GISARR(A68_RC ,MCBAAAA,LCBAAAA,0)
static A68_257   NCBAAAA = {""}; 
A_GISARR(A68_RC ,OCBAAAA,NCBAAAA,0)
static A68_257   PCBAAAA = {""}; 
A_GISARR(A68_RC ,QCBAAAA,PCBAAAA,0)
static A68_257   RCBAAAA = {""}; 
A_GISARR(A68_RC ,SCBAAAA,RCBAAAA,0)
static A68_137   TCBAAAA = {"DOWN"}; 
A_GISARR(A68_RC ,UCBAAAA,TCBAAAA,4)
static A68_257   VCBAAAA = {""}; 
A_GISARR(A68_RC ,WCBAAAA,VCBAAAA,0)
static A68_257   XCBAAAA = {""}; 
A_GISARR(A68_RC ,YCBAAAA,XCBAAAA,0)
static A68_257   ZCBAAAA = {""}; 
A_GISARR(A68_RC ,ADBAAAA,ZCBAAAA,0)
static A68_143   BDBAAAA = {"GO"}; 
A_GISARR(A68_RC ,CDBAAAA,BDBAAAA,2)
static A68_257   DDBAAAA = {""}; 
A_GISARR(A68_RC ,EDBAAAA,DDBAAAA,0)
static A68_137   FDBAAAA = {"GOTO"}; 
A_GISARR(A68_RC ,GDBAAAA,FDBAAAA,4)
static A68_257   HDBAAAA = {""}; 
A_GISARR(A68_RC ,IDBAAAA,HDBAAAA,0)
static A68_143   JDBAAAA = {"IM"}; 
A_GISARR(A68_RC ,KDBAAAA,JDBAAAA,2)
static A68_257   LDBAAAA = {""}; 
A_GISARR(A68_RC ,MDBAAAA,LDBAAAA,0)
static A68_257   NDBAAAA = {""}; 
A_GISARR(A68_RC ,ODBAAAA,NDBAAAA,0)
static A68_257   PDBAAAA = {""}; 
A_GISARR(A68_RC ,QDBAAAA,PDBAAAA,0)
static A68_257   RDBAAAA = {""}; 
A_GISARR(A68_RC ,SDBAAAA,RDBAAAA,0)
static A68_257   TDBAAAA = {""}; 
A_GISARR(A68_RC ,UDBAAAA,TDBAAAA,0)
static A68_257   VDBAAAA = {""}; 
A_GISARR(A68_RC ,WDBAAAA,VDBAAAA,0)
static A68_257   XDBAAAA = {""}; 
A_GISARR(A68_RC ,YDBAAAA,XDBAAAA,0)
static A68_257   ZDBAAAA = {""}; 
A_GISARR(A68_RC ,AEBAAAA,ZDBAAAA,0)
static A68_257   BEBAAAA = {""}; 
A_GISARR(A68_RC ,CEBAAAA,BEBAAAA,0)
static A68_143   DEBAAAA = {"IN"}; 
A_GISARR(A68_RC ,EEBAAAA,DEBAAAA,2)
static A68_258   FEBAAAA = {"MODAB"}; 
A_GISARR(A68_RC ,GEBAAAA,FEBAAAA,5)
static A68_257   HEBAAAA = {""}; 
A_GISARR(A68_RC ,IEBAAAA,HEBAAAA,0)
static A68_257   JEBAAAA = {""}; 
A_GISARR(A68_RC ,KEBAAAA,JEBAAAA,0)
static A68_257   LEBAAAA = {""}; 
A_GISARR(A68_RC ,MEBAAAA,LEBAAAA,0)
static A68_258   NEBAAAA = {"UNION"}; 
A_GISARR(A68_RC ,OEBAAAA,NEBAAAA,5)
static A68_257   PEBAAAA = {""}; 
A_GISARR(A68_RC ,QEBAAAA,PEBAAAA,0)
static A68_257   REBAAAA = {""}; 
A_GISARR(A68_RC ,SEBAAAA,REBAAAA,0)
static A68_257   TEBAAAA = {""}; 
A_GISARR(A68_RC ,UEBAAAA,TEBAAAA,0)
static A68_260   VEBAAAA = {"AND"}; 
A_GISARR(A68_RC ,WEBAAAA,VEBAAAA,3)
static A68_242 * IFBAAAA_macroroot;
static A68_239 * JFBAAAA_moduleroot;
static A68_264  OFBAAAA_tagroot;
static A68_INT  QFBAAAA_i;
static A68_BOOL  TFBAAAA_oneoffmacro;
static A68_242 * UFBAAAA_curmac;
static A68_239 * VFBAAAA_curmod;
static A68_239  WFBAAAA_unnamedmodule;
static A68_257   ZFBAAAA = {""}; 
A_GISARR(A68_RC ,AGBAAAA,ZFBAAAA,0)
static A68_INT  PGBAAAA_incomment;
static A68_BOOL  QGBAAAA_tagoutput;
static A68_38  RGBAAAA_monitorfile;
static A68_269   BHBAAAA = {"Monitor log"}; 
A_GISARR(A68_RC ,CHBAAAA,BHBAAAA,11)
static A68_269   HHBAAAA = {"==========="}; 
A_GISARR(A68_RC ,IHBAAAA,HHBAAAA,11)
static A68_137   XHBAAAA = {"INT("}; 
A_GISARR(A68_RC ,HIBAAAA,XHBAAAA,4)
static A68_135   MIBAAAA = {"CONTROL("}; 
A_GISVEC(A68_VC ,NIBAAAA,MIBAAAA,8)
static A68_261   VIBAAAA = {"STRING("}; 
A_GISARR(A68_RC ,WIBAAAA,VIBAAAA,7)
static A68_137   AJBAAAA = {"VOID"}; 
A_GISARR(A68_RC ,BJBAAAA,AJBAAAA,4)
static A68_135   FJBAAAA = {"REF TAG("}; 
A_GISARR(A68_RC ,GJBAAAA,FJBAAAA,8)
static A68_137   UJBAAAA = {"INT("}; 
A_GISARR(A68_RC ,ZJBAAAA,UJBAAAA,4)
static A68_259   EKBAAAA = {"[]INT("}; 
A_GISARR(A68_RC ,FKBAAAA,EKBAAAA,6)
static A68_261   DLBAAAA = {"STRING("}; 
A_GISARR(A68_RC ,ELBAAAA,DLBAAAA,7)
static A68_135   JLBAAAA = {"REF TAG("}; 
A_GISARR(A68_RC ,KLBAAAA,JLBAAAA,8)
static A68_272   PLBAAAA = {"REF MACRO("}; 
A_GISARR(A68_RC ,QLBAAAA,PLBAAAA,10)
static A68_269   VLBAAAA = {"REF MODULE("}; 
A_GISARR(A68_RC ,WLBAAAA,VLBAAAA,11)
static A68_137   AMBAAAA = {"VOID"}; 
A_GISARR(A68_RC ,BMBAAAA,AMBAAAA,4)
static A68_135   FMBAAAA = {"CONTROL("}; 
A_GISVEC(A68_VC ,GMBAAAA,FMBAAAA,8)
static A68_257   ONBAAAA = {""}; 
A_GISARR(A68_RC ,PNBAAAA,ONBAAAA,0)
static A68_260   AOBAAAA = {". ("}; 
A_GISARR(A68_RC ,BOBAAAA,AOBAAAA,3)
static A68_137   IOBAAAA = {", l."}; 
A_GISARR(A68_RC ,JOBAAAA,IOBAAAA,4)
static A68_257   MPBAAAA = {""}; 
A_GISARR(A68_RC ,NPBAAAA,MPBAAAA,0)
static A68_258   UPBAAAA = {". (l."}; 
A_GISARR(A68_RC ,VPBAAAA,UPBAAAA,5)
static A68_137   HQBAAAA = {"... "}; 
A_GISARR(A68_RC ,IQBAAAA,HQBAAAA,4)
static A68_280   TQBAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,UQBAAAA,TQBAAAA,9)
static A68_289   MUBAAAA = {"Usage: tang (d,h,v,w(paths),f(tang-file))"}; 
A_GISARR(A68_RC ,NUBAAAA,MUBAAAA,41)
static A68_290   SUBAAAA = {" d: output debugging data to tang.dbg"}; 
A_GISARR(A68_RC ,TUBAAAA,SUBAAAA,37)
static A68_291   YUBAAAA = {" f: (input file)"}; 
A_GISARR(A68_RC ,ZUBAAAA,YUBAAAA,16)
static A68_291   EVBAAAA = {" h: this message"}; 
A_GISARR(A68_RC ,FVBAAAA,EVBAAAA,16)
static A68_269   KVBAAAA = {" v: version"}; 
A_GISARR(A68_RC ,LVBAAAA,KVBAAAA,11)
static A68_289   QVBAAAA = {" w: comma-separated include path(s) to be"}; 
A_GISARR(A68_RC ,RVBAAAA,QVBAAAA,41)
static A68_292   WVBAAAA = {"     added to /usr/share/algol68toc"}; 
A_GISARR(A68_RC ,XVBAAAA,WVBAAAA,35)
static A68_257   LDCAAAA = {""}; 
A_GISARR(A68_RC ,MDCAAAA,LDCAAAA,0)
static A68_257   ODCAAAA = {""}; 
A_GISARR(A68_RC ,PDCAAAA,ODCAAAA,0)
static A68_257   WDCAAAA = {""}; 
A_GISARR(A68_RC ,XDCAAAA,WDCAAAA,0)
static A68_257   VECAAAA = {""}; 
A_GISARR(A68_RC ,WECAAAA,VECAAAA,0)
#define QFCAAAA_noactual (A68_312 *)A68_NIL
static A68_257   ZFCAAAA = {""}; 
A_GISARR(A68_RC ,AGCAAAA,ZFCAAAA,0)
static A68_280   HGCAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,IGCAAAA,HGCAAAA,9)
static A68_313   LGCAAAA = {"call of macro "}; 
static A68_314   MGCAAAA = {" not followed by \"(\""}; 
static A68_314   NGCAAAA = {", macro call ignored"}; 
A_GISARR(A68_RC ,OGCAAAA,LGCAAAA,14)
A_GISARR(A68_RC ,PGCAAAA,MGCAAAA,20)
A_GISARR(A68_RC ,QGCAAAA,NGCAAAA,20)
static A68_257   EHCAAAA = {""}; 
A_GISARR(A68_RC ,FHCAAAA,EHCAAAA,0)
static A68_280   UHCAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,VHCAAAA,UHCAAAA,9)
static A68_252   YHCAAAA = {"unexpected end of text"}; 
A_GISARR(A68_RC ,ZHCAAAA,YHCAAAA,22)
static A68_257   GICAAAA = {""}; 
A_GISARR(A68_RC ,HICAAAA,GICAAAA,0)
static A68_316   MICAAAA = {"! Fatal error: insufficient parameters in a macro call"}; 
A_GISARR(A68_RC ,NICAAAA,MICAAAA,54)
static A68_257   UICAAAA = {""}; 
A_GISARR(A68_RC ,VICAAAA,UICAAAA,0)
static A68_317   AJCAAAA = {"! Fatal error: too many parameters in a macro call"}; 
A_GISARR(A68_RC ,BJCAAAA,AJCAAAA,50)
static A68_135   WJCAAAA = {"Module \""}; 
A_GISARR(A68_RC ,XJCAAAA,WJCAAAA,8)
static A68_313   CKCAAAA = {"\" has no text!"}; 
A_GISARR(A68_RC ,DKCAAAA,CKCAAAA,14)
static A68_260   RKCAAAA = {":# "}; 
A_GISARR(A68_RC ,SKCAAAA,RKCAAAA,3)
static A68_291   XKCAAAA = {"process module: "}; 
A_GISARR(A68_RC ,YKCAAAA,XKCAAAA,16)
static A68_143   GLCAAAA = {"#:"}; 
A_GISARR(A68_RC ,HLCAAAA,GLCAAAA,2)
static A68_260   QLCAAAA = {":# "}; 
A_GISARR(A68_RC ,RLCAAAA,QLCAAAA,3)
static A68_258   IMCAAAA = {" SKIP"}; 
A_GISARR(A68_RC ,JMCAAAA,IMCAAAA,5)
static A68_280   ANCAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,BNCAAAA,ANCAAAA,9)
static A68_322   ENCAAAA = {"unexpected control sequence("}; 
static A68_323   FNCAAAA = {") in module \""}; 
A_GISVEC(A68_VC ,GNCAAAA,ENCAAAA,28)
A_GISVEC(A68_VC ,INCAAAA,FNCAAAA,13)
static A68_143   QNCAAAA = {"#:"}; 
A_GISARR(A68_RC ,RNCAAAA,QNCAAAA,2)
static A68_143   VNCAAAA = {"# "}; 
A_GISARR(A68_RC ,WNCAAAA,VNCAAAA,2)
static A68_258   SOCAAAA = {"file "}; 
static A68_252   TOCAAAA = {" has already been read"}; 
A_GISARR(A68_RC ,UOCAAAA,SOCAAAA,5)
A_GISARR(A68_RC ,VOCAAAA,TOCAAAA,22)
static A68_328   UQCAAAA = {"looking for include file "}; 
A_GISARR(A68_RC ,VQCAAAA,UQCAAAA,25)
static A68_280   TSCAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,USCAAAA,TSCAAAA,9)
static A68_332   XSCAAAA = {"input ended while gathering to "}; 
A_GISVEC(A68_VC ,YSCAAAA,XSCAAAA,31)
static A68_280   OTCAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,PTCAAAA,OTCAAAA,9)
static A68_334   STCAAAA = {"input ended while skipping to "}; 
A_GISVEC(A68_VC ,TTCAAAA,STCAAAA,30)
static A68_280   LUCAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,MUCAAAA,LUCAAAA,9)
static A68_336   PUCAAAA = {"control sequence inside !...!"}; 
A_GISARR(A68_RC ,QUCAAAA,PUCAAAA,29)
static A68_258   CVCAAAA = {"\"!{%@"}; 
A_GISARR(A68_RC ,DVCAAAA,CVCAAAA,5)
static A68_280   DXCAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,EXCAAAA,DXCAAAA,9)
static A68_340   HXCAAAA = {"input ended while searching for "}; 
static A68_261   IXCAAAA = {"COMMENT"}; 
A_GISVEC(A68_VC ,KXCAAAA,IXCAAAA,7)
static A68_143   LXCAAAA = {"CO"}; 
A_GISVEC(A68_VC ,MXCAAAA,LXCAAAA,2)
A_GISVEC(A68_VC ,NXCAAAA,HXCAAAA,32)
static A68_280   MYCAAAA = {" .abcdefr"}; 
A_GISARR(A68_RC ,NYCAAAA,MYCAAAA,9)
static A68_280   NZCAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,OZCAAAA,NZCAAAA,9)
static A68_292   RZCAAAA = {"odd number of @-symbols in a string"}; 
A_GISARR(A68_RC ,SZCAAAA,RZCAAAA,35)
static A68_280   PADAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,QADAAAA,PADAAAA,9)
static A68_341   TADAAAA = {"single @-symbol in a string"}; 
A_GISARR(A68_RC ,UADAAAA,TADAAAA,27)
static A68_257   ABDAAAA = {""}; 
A_GISARR(A68_RC ,CBDAAAA,ABDAAAA,0)
static A68_323   FBDAAAA = {"$(),;=?[\\]{|}"}; 
A_GISARR(A68_RC ,GBDAAAA,FBDAAAA,13)
static A68_269   NBDAAAA = {"%&*+-/:<=>^"}; 
A_GISARR(A68_RC ,OBDAAAA,NBDAAAA,11)
static A68_269   SBDAAAA = {"%&*+-/:<=>^"}; 
A_GISARR(A68_RC ,TBDAAAA,SBDAAAA,11)
static A68_269   YBDAAAA = {"%&*+-/:<=>^"}; 
A_GISARR(A68_RC ,ACDAAAA,YBDAAAA,11)
static A68_260   ECDAAAA = {"(l."}; 
static A68_260   FCDAAAA = {",c."}; 
static A68_269   GCDAAAA = {") get tok: "}; 
A_GISARR(A68_RC ,HCDAAAA,ECDAAAA,3)
A_GISARR(A68_RC ,LCDAAAA,FCDAAAA,3)
A_GISARR(A68_RC ,PCDAAAA,GCDAAAA,11)
static A68_280   CDDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,DDDAAAA,CDDAAAA,9)
static A68_343   GDDAAAA = {"EOF while gathering to @"}; 
A_GISVEC(A68_VC ,HDDAAAA,GDDAAAA,24)
static A68_38  VDDAAAA_hf;
static A68_137   WDDAAAA = {"HOME"}; 
A_GISARR(A68_RC ,YDDAAAA,WDDAAAA,4)
static A68_313   BEDAAAA = {"HOME undefined"}; 
A_GISARR(A68_RC ,CEDAAAA,BEDAAAA,14)
static A68_257   FEDAAAA = {""}; 
A_GISARR(A68_RC ,GEDAAAA,FEDAAAA,0)
static A68_340   JEDAAAA = {"program's arguments inaccessible"}; 
A_GISARR(A68_RC ,KEDAAAA,JEDAAAA,32)
static A68_31 * REDAAAA_rp;
static A68_INT  TEDAAAA_i;
static A68_31 * XEDAAAA_rp1;
static A68_257   ZEDAAAA = {""}; 
A_GISARR(A68_RC ,AFDAAAA,ZEDAAAA,0)
static A68_344   BFDAAAA = {"missing parameter"}; 
A_GISARR(A68_RC ,CFDAAAA,BFDAAAA,17)
static A68_INT  DFDAAAA_p;
static A68_258   EFDAAAA = {"dfhvw"}; 
A_GISARR(A68_RC ,GFDAAAA,EFDAAAA,5)
static A68_328   JFDAAAA = {"wrong number of filenames"}; 
A_GISARR(A68_RC ,KFDAAAA,JFDAAAA,25)
static A68_31 * OFDAAAA_rp2;
static A68_257   QFDAAAA = {""}; 
A_GISARR(A68_RC ,RFDAAAA,QFDAAAA,0)
static A68_291   SFDAAAA = {"missing filename"}; 
A_GISARR(A68_RC ,TFDAAAA,SFDAAAA,16)
static A68_RC  WFDAAAA_fn;
static A68_343   YFDAAAA = {"unknown parameter format"}; 
A_GISARR(A68_RC ,ZFDAAAA,YFDAAAA,24)
static A68_INT  AGDAAAA_vpos;
static A68_252   CGDAAAA = {"This is tang, version "}; 
A_GISARR(A68_RC ,DGDAAAA,CGDAAAA,22)
static A68_345   JGDAAAA = {" (C) BP64,65,66,67 Phoenix Engineering"}; 
A_GISARR(A68_RC ,KGDAAAA,JGDAAAA,38)
static A68_347   QGDAAAA = {"missing path"}; 
A_GISARR(A68_RC ,RGDAAAA,QGDAAAA,12)
static A68_INT  SGDAAAA_j;
static A68_31 * WGDAAAA_rp2;
static A68_257   YGDAAAA = {""}; 
A_GISARR(A68_RC ,ZGDAAAA,YGDAAAA,0)
static A68_347   AHDAAAA = {"missing path"}; 
A_GISARR(A68_RC ,BHDAAAA,AHDAAAA,12)
static A68_32  CHDAAAA_path;
static A68_INT  GHDAAAA_pos;
static A68_RC  NHDAAAA_dir;
static A68_32  OHDAAAA_path;
static A68_INT  QHDAAAA_pos;
static A68_343   XHDAAAA = {"unknown parameter format"}; 
A_GISARR(A68_RC ,YHDAAAA,XHDAAAA,24)
static A68_344   ZHDAAAA = {"unknown parameter"}; 
A_GISARR(A68_RC ,AIDAAAA,ZHDAAAA,17)
static A68_RC  BIDAAAA_s;
static A68_257   CIDAAAA = {""}; 
A_GISARR(A68_RC ,DIDAAAA,CIDAAAA,0)
static A68_291   EIDAAAA = {"missing filename"}; 
A_GISARR(A68_RC ,FIDAAAA,EIDAAAA,16)
static A68_343   HIDAAAA = {"unknown parameter format"}; 
A_GISARR(A68_RC ,IIDAAAA,HIDAAAA,24)
static A68_343   JIDAAAA = {"unknown parameter format"}; 
A_GISARR(A68_RC ,KIDAAAA,JIDAAAA,24)
static A68_343   OIDAAAA = {"cannot open web 68 file "}; 
A_GISARR(A68_RC ,PIDAAAA,OIDAAAA,24)
static A68_348   TIDAAAA = {"cannot establish the output file "}; 
A_GISARR(A68_RC ,UIDAAAA,TIDAAAA,33)
static A68_280   BJDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,CJDAAAA,BJDAAAA,9)
static A68_349   FJDAAAA = {"output medium full"}; 
A_GISARR(A68_RC ,GJDAAAA,FJDAAAA,18)
static A68_135   OJDAAAA = {"tang.dbg"}; 
A_GISARR(A68_RC ,PJDAAAA,OJDAAAA,8)
static A68_261   TJDAAAA = {"=\\ *123"}; 
A_GISARR(A68_RC ,UJDAAAA,TJDAAAA,7)
static A68_CHAR  WJDAAAA_ch;
static A68_258   XJDAAAA = {" *123"}; 
A_GISARR(A68_RC ,ZJDAAAA,XJDAAAA,5)
static A68_32  DKDAAAA_s;
static A68_280   KKDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,LKDAAAA,KKDAAAA,9)
static A68_350   OKDAAAA = {"no control sequences allowed in @=...@>"}; 
A_GISARR(A68_RC ,PKDAAAA,OKDAAAA,39)
static A68_272   BLDAAAA = {" 123<ADFIM"}; 
A_GISARR(A68_RC ,CLDAAAA,BLDAAAA,10)
static A68_243 * FLDAAAA_curtok;
static A68_INT  ILDAAAA_bs;
static A68_280   NLDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,OLDAAAA,NLDAAAA,9)
static A68_317   RLDAAAA = {"a macro identifier cannot be a recognised bold tag"}; 
A_GISARR(A68_RC ,SLDAAAA,RLDAAAA,50)
static A68_280   AMDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,BMDAAAA,AMDAAAA,9)
static A68_351   EMDAAAA = {"a macro formal parameter must be an identifier"}; 
A_GISARR(A68_RC ,FMDAAAA,EMDAAAA,46)
static A68_232  NMDAAAA_co;
static A68_347   PMDAAAA = {"!#&+,-/;?{|}"}; 
A_GISARR(A68_RC ,QMDAAAA,PMDAAAA,12)
static A68_137   RMDAAAA = {".:H^"}; 
A_GISARR(A68_RC ,SMDAAAA,RMDAAAA,4)
static A68_280   JNDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,KNDAAAA,JNDAAAA,9)
static A68_341   NNDAAAA = {"@= not in macro/module body"}; 
A_GISARR(A68_RC ,ONDAAAA,NNDAAAA,27)
static A68_269   TNDAAAA = {"123<@ADFIM\\"}; 
A_GISARR(A68_RC ,UNDAAAA,TNDAAAA,11)
static A68_280   ZNDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,AODAAAA,ZNDAAAA,9)
static A68_353   DODAAAA = {"level-1 sections are disallowed in included files"}; 
A_GISARR(A68_RC ,EODAAAA,DODAAAA,49)
static A68_32  IODAAAA_mtag;
static A68_CHAR  NODAAAA_ch;
static A68_260   PODAAAA = {"..."}; 
A_GISARR(A68_RC ,RODAAAA,PODAAAA,3)
static A68_239 * TODAAAA_rm;
static A68_280   ZODAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,APDAAAA,ZODAAAA,9)
static A68_354   DPDAAAA = {"unknown or duplicate module prefix"}; 
A_GISARR(A68_RC ,EPDAAAA,DPDAAAA,34)
static A68_280   RPDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,SPDAAAA,RPDAAAA,9)
static A68_351   VPDAAAA = {"unexpected module tag after a macro identifier"}; 
A_GISARR(A68_RC ,WPDAAAA,VPDAAAA,46)
static A68_280   FQDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,GQDAAAA,FQDAAAA,9)
static A68_350   JQDAAAA = {"unexpected module tag in a macro header"}; 
A_GISARR(A68_RC ,KQDAAAA,JQDAAAA,39)
static A68_260   OQDAAAA = {"..."}; 
A_GISARR(A68_RC ,QQDAAAA,OQDAAAA,3)
static A68_239 * SQDAAAA_rm;
static A68_280   YQDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,ZQDAAAA,YQDAAAA,9)
static A68_354   CRDAAAA = {"unknown or duplicate module prefix"}; 
A_GISARR(A68_RC ,DRDAAAA,CRDAAAA,34)
static A68_260   MRDAAAA = {"..."}; 
A_GISARR(A68_RC ,ORDAAAA,MRDAAAA,3)
static A68_239 * QRDAAAA_rm;
static A68_280   WRDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,XRDAAAA,WRDAAAA,9)
static A68_354   ASDAAAA = {"unknown or duplicate module prefix"}; 
A_GISARR(A68_RC ,BSDAAAA,ASDAAAA,34)
static A68_280   RSDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,SSDAAAA,RSDAAAA,9)
static A68_355   VSDAAAA = {"module tag occurs in mood "}; 
A_GISARR(A68_RC ,WSDAAAA,VSDAAAA,26)
static A68_280   MTDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,NTDAAAA,MTDAAAA,9)
static A68_355   QTDAAAA = {"module tag occurs in mood "}; 
A_GISARR(A68_RC ,RTDAAAA,QTDAAAA,26)
static A68_280   BUDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,CUDAAAA,BUDAAAA,9)
static A68_345   FUDAAAA = {"unexpected module tag in a module body"}; 
A_GISARR(A68_RC ,GUDAAAA,FUDAAAA,38)
static A68_260   MUDAAAA = {"..."}; 
A_GISARR(A68_RC ,OUDAAAA,MUDAAAA,3)
static A68_239 * QUDAAAA_rm;
static A68_280   WUDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,XUDAAAA,WUDAAAA,9)
static A68_354   AVDAAAA = {"unknown or duplicate module prefix"}; 
A_GISARR(A68_RC ,BVDAAAA,AVDAAAA,34)
static A68_280   RVDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,SVDAAAA,RVDAAAA,9)
static A68_355   VVDAAAA = {"module tag occurs in mood "}; 
A_GISARR(A68_RC ,WVDAAAA,VVDAAAA,26)
static A68_280   MWDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,NWDAAAA,MWDAAAA,9)
static A68_355   QWDAAAA = {"module tag occurs in mood "}; 
A_GISARR(A68_RC ,RWDAAAA,QWDAAAA,26)
static A68_280   KXDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,LXDAAAA,KXDAAAA,9)
static A68_341   OXDAAAA = {"unexpected control sequence"}; 
A_GISARR(A68_RC ,PXDAAAA,OXDAAAA,27)
static A68_RC  UXDAAAA_incfn;
static A68_328   ZXDAAAA = {"! Warning: included file "}; 
static A68_344   AYDAAAA = {" already included"}; 
A_GISARR(A68_RC ,BYDAAAA,ZXDAAAA,25)
A_GISARR(A68_RC ,CYDAAAA,AYDAAAA,17)
static A68_280   KYDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,LYDAAAA,KYDAAAA,9)
static A68_334   OYDAAAA = {"cannot find the included file "}; 
A_GISARR(A68_RC ,PYDAAAA,OYDAAAA,30)
static A68_280   DZDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,EZDAAAA,DZDAAAA,9)
static A68_343   HZDAAAA = {"unknown control sequence"}; 
A_GISARR(A68_RC ,IZDAAAA,HZDAAAA,24)
static A68_RC  MZDAAAA_s;
static A68_280   TZDAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,UZDAAAA,TZDAAAA,9)
static A68_334   XZDAAAA = {"macro id. delimiter unexpected"}; 
A_GISARR(A68_RC ,YZDAAAA,XZDAAAA,30)
static A68_280   HAEAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,IAEAAAA,HAEAAAA,9)
static A68_291   LAEAAAA = {"missing macro id"}; 
A_GISARR(A68_RC ,MAEAAAA,LAEAAAA,16)
static A68_280   UAEAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,VAEAAAA,UAEAAAA,9)
static A68_336   YAEAAAA = {"unexpected string in macro id"}; 
A_GISARR(A68_RC ,ZAEAAAA,YAEAAAA,29)
static A68_280   KBEAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,LBEAAAA,KBEAAAA,9)
static A68_348   OBEAAAA = {"unexpected string in macro header"}; 
A_GISARR(A68_RC ,PBEAAAA,OBEAAAA,33)
static A68_229 * XBEAAAA_tag;
static A68_280   CCEAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,DCEAAAA,CCEAAAA,9)
static A68_328   GCEAAAA = {"macro id. already defined"}; 
A_GISARR(A68_RC ,HCEAAAA,GCEAAAA,25)
static A68_280   PCEAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,QCEAAAA,PCEAAAA,9)
static A68_252   TCEAAAA = {"macro id. already read"}; 
A_GISARR(A68_RC ,UCEAAAA,TCEAAAA,22)
static A68_280   CDEAAAA = {"! Error: "}; 
A_GISARR(A68_RC ,DDEAAAA,CDEAAAA,9)
static A68_340   GDEAAAA = {"duplicate macro formal parameter"}; 
A_GISARR(A68_RC ,HDEAAAA,GDEAAAA,32)
static A68_229 * LDEAAAA_storedtag;
static A68_242 * MDEAAAA_rm;
static A68_229 * QDEAAAA_storedtag;
static A68_242 * RDEAAAA_rm;
static A68_334   AEEAAAA = {"! Did we find something wrong?"}; 
A_GISARR(A68_RC ,BEEAAAA,AEEAAAA,30)
typedef struct   /* env of non-global proc */
{
A68_CHAR  A;
A_PAD_CHAR(PAD_35)
A68_CHAR  B;
A_PAD_CHAR(PAD_36)
} ICAAAAA_generator;
typedef struct   /* env of non-global proc */
{
A68_CHAR  B;
A_PAD_CHAR(PAD_37)
A68_CHAR  A;
A_PAD_CHAR(PAD_38)
} UCAAAAA_generator;
typedef struct   /* env of non-global proc */
{
A68_RC  Tag;
} JTBAAAA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BYBAAAA_generator;
typedef struct   /* env of non-global proc */
{
A68_298  PZBAAAA_locaddtag;
} RZBAAAA_locaddtag;
typedef struct   /* env of non-global proc */
{
int dummy;
} RMCAAAA_generator;
typedef struct   /* env of non-global proc */
{
A68_jmp_buf  OPCAAAA_eof;
A_PAD_jmp_buf(PAD_39)
} BQCAAAA_anonymous;
typedef struct   /* env of non-global proc */
{
A68_224 * Inp;
A68_jmp_buf  ZQCAAAA_lab1;
A_PAD_jmp_buf(PAD_40)
} HRCAAAA_anonymous;
typedef struct   /* env of non-global proc */
{
A68_32 * KVCAAAA_s;
A68_INT * FZCAAAA_nat;
} ZZCAAAA_generator;

A_STATIC A68_VOID  FAAAAAA_generator(A68_BOOL  EAAAAAA_anonymous, A68_224  *ReturnedValue);

A_STATIC A68_VOID  HAAAAAA_generator(A68_BOOL  GAAAAAA_anonymous, A68_71  *ReturnedValue);

A_STATIC A68_VOID  LAAAAAA_generator(A68_BOOL  KAAAAAA_anonymous, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  XAAAAAA_generator(A68_BOOL  WAAAAAA_anonymous, A68_230  *ReturnedValue);

A_STATIC A68_VOID  FBAAAAA_generator(A68_BOOL  EBAAAAA_anonymous, A68_230  *ReturnedValue);

A_STATIC A68_VOID  NBAAAAA_generator(A68_BOOL  MBAAAAA_anonymous, A68_240  *ReturnedValue);

A_STATIC A68_VOID  ECAAAAA_(A68_CHAR  A, A68_CHAR  B, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  HCAAAAA_generator(A68_BOOL  FCAAAAA_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TCAAAAA_generator(A68_BOOL  RCAAAAA_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UDAAAAA_anonymous(A68_RC  S, A68_243  T);

A_STATIC A68_VOID  ZDAAAAA_anonymous(A68_RC  S, A68_237  T);

A_STATIC A68_VOID  EEAAAAA_anonymous(A68_RC  S, A68_RC  T);

A_STATIC A68_224 * TEAAAAA_assignment(A68_224 * REAAAAA_anonymous, A68_224  SEAAAAA_anonymous);

A_STATIC A68_VOID  FGAAAAA_generator(A68_BOOL  EGAAAAA_anonymous, A68_254  *ReturnedValue);

A_STATIC A68_VOID  ZEBAAAA_assignment(A68_253  XEBAAAA_anonymous, A68_254  YEBAAAA_anonymous, A68_253  *ReturnedValue);

A_STATIC A68_VOID  LFBAAAA_generator(A68_BOOL  KFBAAAA_anonymous, A68_264  *ReturnedValue);

A_STATIC A68_239 * FGBAAAA_assignment(A68_239 * DGBAAAA_anonymous, A68_240  EGBAAAA_anonymous);

A_STATIC A68_BOOL  TGBAAAA_monitor(A68_214  S);

A_STATIC A68_BOOL  YGBAAAA_startmonitor(A68_RC  Fn);

A_STATIC A68_VOID  SHBAAAA_monitorprinttoken(A68_RC  S, A68_243  T);

A_STATIC A68_VOID  PJBAAAA_monitorprinttext(A68_RC  S, A68_237  T);

A_STATIC A68_VOID  SMBAAAA_monitorprintstring(A68_RC  S, A68_RC  T);

A_STATIC A68_VOID  ANBAAAA_printout(A68_274  S);

A_STATIC A68_VOID  XNBAAAA_error(A68_INT  Status);

A_STATIC A68_VOID  PQBAAAA_simpleerror(A68_RC  S, A68_INT  Halt);

A_STATIC A68_INT  BRBAAAA_find(A68_CHAR  C, A68_RC  S);

A_STATIC A68_VOID  HRBAAAA_upto(A68_RC  S, A68_CHAR  T, A68_RC  *ReturnedValue);

A_STATIC A68_INT  NRBAAAA_lookup(A68_RC  Str);

A_STATIC A68_INT  QRBAAAA_hash(A68_RC  S);

A_STATIC A68_VOID  GSBAAAA_trim(A68_RC  S, A68_RC  *ReturnedValue);

A_STATIC A68_INT  TSBAAAA_chop(A68_CHAR  C, A68_RC  S);

A_STATIC A68_CHAR  CTBAAAA_uc(A68_CHAR  C);

A_STATIC A68_VOID  FTBAAAA_compact(A68_RC  Tag, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  ITBAAAA_generator(A68_BOOL  GTBAAAA_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  ZTBAAAA_multicase(A68_CHAR  C, A68_254  S);

A_STATIC A68_BOOL  IUBAAAA_scanincludedtree(A68_229 ** Tr, A68_RC  Fn);

A_STATIC A68_VOID  KUBAAAA_usage(void);

A_STATIC A68_VOID  EWBAAAA_inccursec(A68_INT  Level);

A_STATIC A68_VOID  NWBAAAA_printcursec(void);

A_STATIC A68_VOID  XXBAAAA_maketext(A68_71  Cursec, A68_237  *ReturnedValue);

A_STATIC A68_VOID  AYBAAAA_generator(A68_BOOL  YXBAAAA_anonymous, A68_71  *ReturnedValue, void *NonLocals);

A_STATIC A68_239 * PYBAAAA_addmoduletag(A68_239 ** Root, A68_RC  S, A68_BOOL  Adding, A68_BOOL  Prefix);

A_STATIC A68_229 * DZBAAAA_addtag(A68_264  Root, A68_229 * Tag);

A_STATIC A68_INT  GZBAAAA_hash(A68_RC  S);

A_STATIC A68_229 * QZBAAAA_locaddtag(A68_229 ** R, A68_229 * T, void *NonLocals);

A_STATIC A68_242 * YZBAAAA_addmacroid(A68_242 ** Root, A68_229 * Tag, A68_BOOL  Once);

A_STATIC A68_BOOL  HACAAAA_addmacropar(A68_242 * Rm, A68_229 * Par);

A_STATIC A68_VOID  UACAAAA_addmactext(A68_242 * Rmc, A68_237  T);

A_STATIC A68_237 * YACAAAA_assignment(A68_237 * WACAAAA_anonymous, A68_237  XACAAAA_anonymous);

A_STATIC A68_238 * BBCAAAA_assignment(A68_238 * ZACAAAA_anonymous, A68_238  ABCAAAA_anonymous);

A_STATIC A68_VOID  PBCAAAA_addmodtext(A68_239 * Rmd, A68_237  T);

A_STATIC A68_242 * UBCAAAA_searchmacro(A68_242 ** Root, A68_229 * T);

A_STATIC A68_VOID  YBCAAAA_putout(A68_224 * St, A68_307  P);

A_STATIC A68_VOID  BCCAAAA_emptythebuffer(A68_224 * St);

A_STATIC A68_BOOL  EFCAAAA_expandmacro(A68_237 ** Txt, A68_242 * Mc);

A_STATIC A68_VOID  RJCAAAA_processmodule(A68_224 * St, A68_239 * Mod, A68_71  Cursec);

A_STATIC A68_VOID  QMCAAAA_generator(A68_BOOL  OMCAAAA_anonymous, A68_71  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  COCAAAA_addfiletotree(A68_229 ** Tr, A68_RC  Fn);

A_STATIC A68_229 * GOCAAAA_assignment(A68_229 * EOCAAAA_anonymous, A68_230  FOCAAAA_anonymous);

A_STATIC A68_BOOL  BPCAAAA_addincludefile(A68_224 ** Web, A68_RC  Incfn);

A_STATIC A68_BOOL  AQCAAAA_anonymous(A68_38 * F, void *NonLocals);

A_STATIC A68_BOOL  XQCAAAA_inputln(A68_224 * Inp);

A_STATIC A68_BOOL  GRCAAAA_anonymous(A68_38 * F, void *NonLocals);

A_STATIC A68_CHAR  DSCAAAA_nextchar(void);

A_STATIC A68_VOID  KSCAAAA_gathertochar(A68_32 * S, A68_CHAR  C);

A_STATIC A68_VOID  HTCAAAA_skiptochar(A68_CHAR  C);

A_STATIC A68_BOOL  AUCAAAA_skiptobang(void);

A_STATIC A68_VOID  ZUCAAAA_skiptocs(A68_RC  Cset);

A_STATIC A68_VOID  IVCAAAA_gettok(A68_243  *ReturnedValue);

A_STATIC A68_243 * QVCAAAA_assignment(A68_243 * OVCAAAA_anonymous, A68_243  PVCAAAA_anonymous);

A_STATIC A68_VOID  YZCAAAA_generator(A68_BOOL  WZCAAAA_anonymous, A68_RC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SCDAAAA_gathertocs(A68_CHAR  C, A68_RC  *ReturnedValue);

A_STATIC A68_BOOL  MEDAAAA_anonymous(A68_38 * F);

A_STATIC A68_BOOL  WIDAAAA_anonymous(A68_38 * F);

A_STATIC A68_VOID  TEEAAAA_generator(A68_BOOL  SEEAAAA_anonymous, A68_71  *ReturnedValue);

A_STATIC A68_238 * BBCAAAA_assignment(A68_238 * ZACAAAA_anonymous, A68_238  ABCAAAA_anonymous)
{ 
A68_238  CBCAAAA;  /* united object - for case conformity */
A68_71  DBCAAAA_anonymous;
A68_71  EBCAAAA;  /* OPERATORS - copy to flex */
A68_227 * FBCAAAA;  /* YIELD */
A68_RC  GBCAAAA_anonymous;
A68_RC  HBCAAAA;  /* OPERATORS - copy to flex */
A68_32 * IBCAAAA;  /* YIELD */
A68_238 * JBCAAAA;  /* clause result */
{ 
(*ZACAAAA_anonymous) = ABCAAAA_anonymous;
CBCAAAA = ABCAAAA_anonymous ;
switch ( CBCAAAA.mode )
{ 
case 2: /* [] INT */
DBCAAAA_anonymous = (CBCAAAA.data.mode2);
FBCAAAA = &(ZACAAAA_anonymous-> data.mode2) ;
(*FBCAAAA) = A_R1COPY(DBCAAAA_anonymous,EBCAAAA,A68_INT );
break;
case 4: /* [] CHAR */
GBCAAAA_anonymous = (CBCAAAA.data.mode4);
IBCAAAA = &(ZACAAAA_anonymous-> data.mode4) ;
(*IBCAAAA) = A_R1COPY(GBCAAAA_anonymous,HBCAAAA,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
JBCAAAA = ZACAAAA_anonymous;
} 
return( JBCAAAA );
} 
#undef NL

A_STATIC A68_VOID  HAAAAAA_generator(A68_BOOL  GAAAAAA_anonymous, A68_71  *ReturnedValue)
{ 
A68_71  IAAAAAA;  /* clause result */
A68_71  JAAAAAA;  /* OPERATORS - dynamic generator */
{ 
JAAAAAA.dim[0].upb = 4 ;
JAAAAAA.dim[0].lwb = 1 ;
A_1INITSTRIDES(JAAAAAA) ;
( GAAAAAA_anonymous? A_R1LOC(A68_INT ,JAAAAAA): A_R1HEAP(A68_INT ,JAAAAAA) );
IAAAAAA = JAAAAAA;
} 
*ReturnedValue = (IAAAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  LAAAAAA_generator(A68_BOOL  KAAAAAA_anonymous, A68_RC  *ReturnedValue)
{ 
A68_RC  MAAAAAA;  /* clause result */
A68_RC  NAAAAAA;  /* OPERATORS - dynamic generator */
{ 
NAAAAAA.dim[0].upb = 256 ;
NAAAAAA.dim[0].lwb = 1 ;
A_1INITSTRIDES(NAAAAAA) ;
( KAAAAAA_anonymous? A_R1LOC(A68_CHAR ,NAAAAAA): A_R1HEAP(A68_CHAR ,NAAAAAA) );
MAAAAAA = NAAAAAA;
} 
*ReturnedValue = (MAAAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  HCAAAAA_generator(A68_BOOL  FCAAAAA_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ICAAAAA_generator *)NonLocals)->x)
{ 
A68_RC  JCAAAAA;  /* clause result */
A68_RC  KCAAAAA;  /* OPERATORS - dynamic generator */
{ 
KCAAAAA.dim[0].upb = (A68_INT)(unsigned char)NL(B) ;
KCAAAAA.dim[0].lwb = (A68_INT)(unsigned char)NL(A) ;
A_1INITSTRIDES(KCAAAAA) ;
( FCAAAAA_anonymous? A_R1LOC(A68_CHAR ,KCAAAAA): A_R1HEAP(A68_CHAR ,KCAAAAA) );
JCAAAAA = KCAAAAA;
} 
*ReturnedValue = (JCAAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  TCAAAAA_generator(A68_BOOL  RCAAAAA_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UCAAAAA_generator *)NonLocals)->x)
{ 
A68_RC  VCAAAAA;  /* clause result */
A68_RC  WCAAAAA;  /* OPERATORS - dynamic generator */
{ 
WCAAAAA.dim[0].upb = (A68_INT)(unsigned char)NL(A) ;
WCAAAAA.dim[0].lwb = (A68_INT)(unsigned char)NL(B) ;
A_1INITSTRIDES(WCAAAAA) ;
( RCAAAAA_anonymous? A_R1LOC(A68_CHAR ,WCAAAAA): A_R1HEAP(A68_CHAR ,WCAAAAA) );
VCAAAAA = WCAAAAA;
} 
*ReturnedValue = (VCAAAAA);
return;
} 
#undef NL

A_STATIC A68_INT  QRBAAAA_hash(A68_RC  S)
{ 
A68_284  RRBAAAA;  /* collateral clause result */
A68_71  SRBAAAA;  /* OPERATORS - istruct to row */
A68_71  TRBAAAA;  /* OPERATORS - trim index */
A68_71  URBAAAA;  /* OPERATORS - trim index */
A68_71  VRBAAAA_assovalues;
A68_INT  WRBAAAA;  /* clause result */
A68_INT  XRBAAAA;  /* YIELD */
A68_INT  YRBAAAA;  /* YIELD */
A68_INT  ZRBAAAA;  /* YIELD */
A68_INT  ASBAAAA;  /* YIELD */
A68_INT  BSBAAAA;  /* YIELD */
A68_INT  CSBAAAA;  /* YIELD */
A_PROC_ENTRY(hash);
{ 
RRBAAAA.data[0] = 316;
RRBAAAA.data[1] = 316;
RRBAAAA.data[2] = 316;
RRBAAAA.data[3] = 316;
RRBAAAA.data[4] = 316;
 /* line 95: */
RRBAAAA.data[5] = 316;
RRBAAAA.data[6] = 316;
RRBAAAA.data[7] = 316;
RRBAAAA.data[8] = 316;
RRBAAAA.data[9] = 316;
RRBAAAA.data[10] = 316;
RRBAAAA.data[11] = 316;
RRBAAAA.data[12] = 316;
RRBAAAA.data[13] = 316;
RRBAAAA.data[14] = 316;
RRBAAAA.data[15] = 316;
RRBAAAA.data[16] = 316;
RRBAAAA.data[17] = 316;
RRBAAAA.data[18] = 316;
RRBAAAA.data[19] = 316;
RRBAAAA.data[20] = 316;
 /* line 96: */
RRBAAAA.data[21] = 316;
RRBAAAA.data[22] = 316;
RRBAAAA.data[23] = 316;
RRBAAAA.data[24] = 316;
RRBAAAA.data[25] = 316;
RRBAAAA.data[26] = 316;
RRBAAAA.data[27] = 316;
RRBAAAA.data[28] = 316;
RRBAAAA.data[29] = 316;
RRBAAAA.data[30] = 316;
RRBAAAA.data[31] = 316;
RRBAAAA.data[32] = 316;
RRBAAAA.data[33] = 316;
RRBAAAA.data[34] = 316;
RRBAAAA.data[35] = 316;
RRBAAAA.data[36] = 316;
 /* line 97: */
RRBAAAA.data[37] = 316;
RRBAAAA.data[38] = 316;
RRBAAAA.data[39] = 316;
RRBAAAA.data[40] = 316;
RRBAAAA.data[41] = 316;
RRBAAAA.data[42] = 316;
RRBAAAA.data[43] = 316;
RRBAAAA.data[44] = 316;
RRBAAAA.data[45] = 316;
RRBAAAA.data[46] = 316;
RRBAAAA.data[47] = 316;
RRBAAAA.data[48] = 316;
RRBAAAA.data[49] = 316;
RRBAAAA.data[50] = 316;
RRBAAAA.data[51] = 316;
RRBAAAA.data[52] = 316;
 /* line 98: */
RRBAAAA.data[53] = 316;
RRBAAAA.data[54] = 316;
RRBAAAA.data[55] = 316;
RRBAAAA.data[56] = 316;
RRBAAAA.data[57] = 316;
RRBAAAA.data[58] = 316;
RRBAAAA.data[59] = 316;
RRBAAAA.data[60] = 316;
RRBAAAA.data[61] = 316;
RRBAAAA.data[62] = 316;
RRBAAAA.data[63] = 316;
RRBAAAA.data[64] = 316;
RRBAAAA.data[65] = 113;
RRBAAAA.data[66] = 95;
RRBAAAA.data[67] = 20;
RRBAAAA.data[68] = 72;
RRBAAAA.data[69] = 0;
RRBAAAA.data[70] = 5;
 /* line 99: */
RRBAAAA.data[71] = 120;
RRBAAAA.data[72] = 44;
RRBAAAA.data[73] = 50;
RRBAAAA.data[74] = 30;
RRBAAAA.data[75] = 25;
RRBAAAA.data[76] = 0;
RRBAAAA.data[77] = 122;
RRBAAAA.data[78] = 127;
RRBAAAA.data[79] = 85;
RRBAAAA.data[80] = 0;
RRBAAAA.data[81] = 5;
RRBAAAA.data[82] = 45;
RRBAAAA.data[83] = 15;
RRBAAAA.data[84] = 15;
RRBAAAA.data[85] = 52;
RRBAAAA.data[86] = 20;
RRBAAAA.data[87] = 50;
RRBAAAA.data[88] = 2;
RRBAAAA.data[89] = 70;
RRBAAAA.data[90] = 316;
 /* line 100: */
RRBAAAA.data[91] = 316;
RRBAAAA.data[92] = 316;
RRBAAAA.data[93] = 316;
RRBAAAA.data[94] = 316;
RRBAAAA.data[95] = 316;
RRBAAAA.data[96] = 316;
RRBAAAA.data[97] = 316;
RRBAAAA.data[98] = 316;
RRBAAAA.data[99] = 316;
RRBAAAA.data[100] = 316;
RRBAAAA.data[101] = 316;
RRBAAAA.data[102] = 316;
RRBAAAA.data[103] = 316;
RRBAAAA.data[104] = 316;
RRBAAAA.data[105] = 316;
RRBAAAA.data[106] = 316;
 /* line 101: */
RRBAAAA.data[107] = 316;
RRBAAAA.data[108] = 316;
RRBAAAA.data[109] = 316;
RRBAAAA.data[110] = 316;
RRBAAAA.data[111] = 316;
RRBAAAA.data[112] = 316;
RRBAAAA.data[113] = 316;
RRBAAAA.data[114] = 316;
RRBAAAA.data[115] = 316;
RRBAAAA.data[116] = 316;
RRBAAAA.data[117] = 316;
RRBAAAA.data[118] = 316;
RRBAAAA.data[119] = 316;
RRBAAAA.data[120] = 316;
RRBAAAA.data[121] = 316;
RRBAAAA.data[122] = 316;
 /* line 102: */
RRBAAAA.data[123] = 316;
RRBAAAA.data[124] = 316;
RRBAAAA.data[125] = 316;
RRBAAAA.data[126] = 316;
RRBAAAA.data[127] = 316;
RRBAAAA.data[128] = 316;
RRBAAAA.data[129] = 316;
RRBAAAA.data[130] = 316;
RRBAAAA.data[131] = 316;
RRBAAAA.data[132] = 316;
RRBAAAA.data[133] = 316;
RRBAAAA.data[134] = 316;
RRBAAAA.data[135] = 316;
RRBAAAA.data[136] = 316;
RRBAAAA.data[137] = 316;
RRBAAAA.data[138] = 316;
 /* line 103: */
RRBAAAA.data[139] = 316;
RRBAAAA.data[140] = 316;
RRBAAAA.data[141] = 316;
RRBAAAA.data[142] = 316;
RRBAAAA.data[143] = 316;
RRBAAAA.data[144] = 316;
RRBAAAA.data[145] = 316;
RRBAAAA.data[146] = 316;
RRBAAAA.data[147] = 316;
RRBAAAA.data[148] = 316;
RRBAAAA.data[149] = 316;
RRBAAAA.data[150] = 316;
RRBAAAA.data[151] = 316;
RRBAAAA.data[152] = 316;
RRBAAAA.data[153] = 316;
RRBAAAA.data[154] = 316;
 /* line 104: */
RRBAAAA.data[155] = 316;
RRBAAAA.data[156] = 316;
RRBAAAA.data[157] = 316;
RRBAAAA.data[158] = 316;
RRBAAAA.data[159] = 316;
RRBAAAA.data[160] = 316;
RRBAAAA.data[161] = 316;
RRBAAAA.data[162] = 316;
RRBAAAA.data[163] = 316;
RRBAAAA.data[164] = 316;
RRBAAAA.data[165] = 316;
RRBAAAA.data[166] = 316;
RRBAAAA.data[167] = 316;
RRBAAAA.data[168] = 316;
RRBAAAA.data[169] = 316;
RRBAAAA.data[170] = 316;
 /* line 105: */
RRBAAAA.data[171] = 316;
RRBAAAA.data[172] = 316;
RRBAAAA.data[173] = 316;
RRBAAAA.data[174] = 316;
RRBAAAA.data[175] = 316;
RRBAAAA.data[176] = 316;
RRBAAAA.data[177] = 316;
RRBAAAA.data[178] = 316;
RRBAAAA.data[179] = 316;
RRBAAAA.data[180] = 316;
RRBAAAA.data[181] = 316;
RRBAAAA.data[182] = 316;
RRBAAAA.data[183] = 316;
RRBAAAA.data[184] = 316;
RRBAAAA.data[185] = 316;
RRBAAAA.data[186] = 316;
 /* line 106: */
RRBAAAA.data[187] = 316;
RRBAAAA.data[188] = 316;
RRBAAAA.data[189] = 316;
RRBAAAA.data[190] = 316;
RRBAAAA.data[191] = 316;
RRBAAAA.data[192] = 316;
RRBAAAA.data[193] = 316;
RRBAAAA.data[194] = 316;
RRBAAAA.data[195] = 316;
RRBAAAA.data[196] = 316;
RRBAAAA.data[197] = 316;
RRBAAAA.data[198] = 316;
RRBAAAA.data[199] = 316;
RRBAAAA.data[200] = 316;
RRBAAAA.data[201] = 316;
RRBAAAA.data[202] = 316;
 /* line 107: */
RRBAAAA.data[203] = 316;
RRBAAAA.data[204] = 316;
RRBAAAA.data[205] = 316;
RRBAAAA.data[206] = 316;
RRBAAAA.data[207] = 316;
RRBAAAA.data[208] = 316;
RRBAAAA.data[209] = 316;
RRBAAAA.data[210] = 316;
RRBAAAA.data[211] = 316;
RRBAAAA.data[212] = 316;
RRBAAAA.data[213] = 316;
RRBAAAA.data[214] = 316;
RRBAAAA.data[215] = 316;
RRBAAAA.data[216] = 316;
RRBAAAA.data[217] = 316;
RRBAAAA.data[218] = 316;
 /* line 108: */
RRBAAAA.data[219] = 316;
RRBAAAA.data[220] = 316;
RRBAAAA.data[221] = 316;
RRBAAAA.data[222] = 316;
RRBAAAA.data[223] = 316;
RRBAAAA.data[224] = 316;
RRBAAAA.data[225] = 316;
RRBAAAA.data[226] = 316;
RRBAAAA.data[227] = 316;
RRBAAAA.data[228] = 316;
RRBAAAA.data[229] = 316;
RRBAAAA.data[230] = 316;
RRBAAAA.data[231] = 316;
RRBAAAA.data[232] = 316;
RRBAAAA.data[233] = 316;
RRBAAAA.data[234] = 316;
 /* line 109: */
RRBAAAA.data[235] = 316;
RRBAAAA.data[236] = 316;
RRBAAAA.data[237] = 316;
RRBAAAA.data[238] = 316;
RRBAAAA.data[239] = 316;
RRBAAAA.data[240] = 316;
RRBAAAA.data[241] = 316;
RRBAAAA.data[242] = 316;
RRBAAAA.data[243] = 316;
RRBAAAA.data[244] = 316;
RRBAAAA.data[245] = 316;
RRBAAAA.data[246] = 316;
RRBAAAA.data[247] = 316;
RRBAAAA.data[248] = 316;
RRBAAAA.data[249] = 316;
RRBAAAA.data[250] = 316;
 /* line 110: */
RRBAAAA.data[251] = 316;
RRBAAAA.data[252] = 316;
RRBAAAA.data[253] = 316;
RRBAAAA.data[254] = 316;
RRBAAAA.data[255] = 316;
TRBAAAA = A_HIS1ARR(SRBAAAA,RRBAAAA,A68_INT ,256) ;
VRBAAAA_assovalues = A_R1TRIM(URBAAAA,(TRBAAAA),A_RTSCRIPT(&(URBAAAA.dim[0]),&((TRBAAAA).dim[0]),(TRBAAAA).dim[0].lwb,(TRBAAAA).dim[0].upb,0));
 /* line 111: */
XRBAAAA = (1+S.dim[0].lwb) ;
YRBAAAA = (A68_INT)(unsigned char)A_R1INDEX(S,XRBAAAA) ;
ZRBAAAA = S.dim[0].lwb ;
ASBAAAA = (A68_INT)(unsigned char)A_R1INDEX(S,ZRBAAAA) ;
BSBAAAA = S.dim[0].upb ;
CSBAAAA = (A68_INT)(unsigned char)A_R1INDEX(S,BSBAAAA) ;
WRBAAAA = (((S.dim[0].upb+A_R1INDEX(VRBAAAA_assovalues,YRBAAAA))+A_R1INDEX(VRBAAAA_assovalues,ASBAAAA))+A_R1INDEX(VRBAAAA_assovalues,CSBAAAA));
} 
A_PROC_EXIT(hash);
return( WRBAAAA );
} 
#undef NL

A_STATIC A68_VOID  ITBAAAA_generator(A68_BOOL  GTBAAAA_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JTBAAAA_generator *)NonLocals)->x)
{ 
A68_RC  KTBAAAA;  /* clause result */
A68_RC  LTBAAAA;  /* OPERATORS - dynamic generator */
{ 
LTBAAAA.dim[0].upb = NL(Tag).dim[0].upb ;
LTBAAAA.dim[0].lwb = NL(Tag).dim[0].lwb ;
A_1INITSTRIDES(LTBAAAA) ;
( GTBAAAA_anonymous? A_R1LOC(A68_CHAR ,LTBAAAA): A_R1HEAP(A68_CHAR ,LTBAAAA) );
KTBAAAA = LTBAAAA;
} 
*ReturnedValue = (KTBAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  AYBAAAA_generator(A68_BOOL  YXBAAAA_anonymous, A68_71  *ReturnedValue, void *NonLocals)
#define NL(x) (((BYBAAAA_generator *)NonLocals)->x)
{ 
A68_71  CYBAAAA;  /* clause result */
A68_71  DYBAAAA;  /* OPERATORS - dynamic generator */
{ 
DYBAAAA.dim[0].upb = 4 ;
DYBAAAA.dim[0].lwb = 1 ;
A_1INITSTRIDES(DYBAAAA) ;
( YXBAAAA_anonymous? A_R1LOC(A68_INT ,DYBAAAA): A_R1HEAP(A68_INT ,DYBAAAA) );
CYBAAAA = DYBAAAA;
} 
*ReturnedValue = (CYBAAAA);
return;
} 
#undef NL

A_STATIC A68_INT  GZBAAAA_hash(A68_RC  S)
{ 
A68_INT  HZBAAAA;  /* clause result */
A68_INT  IZBAAAA;  /* YIELD */
A68_INT  JZBAAAA;  /* YIELD */
A68_INT  KZBAAAA;  /* ADICOPS - MOD */
A68_INT  LZBAAAA;  /* ADICOPS - MOD */
A68_INT  MZBAAAA;  /* ADICOPS - MOD */
A_PROC_ENTRY(hash);
 /* line 153: */
IZBAAAA = S.dim[0].lwb ;
JZBAAAA = S.dim[0].upb ;
LZBAAAA = ((A68_INT)(unsigned char)A_R1INDEX(S,IZBAAAA)+(2*(A68_INT)(unsigned char)A_R1INDEX(S,JZBAAAA))) ;
MZBAAAA = (1+OFBAAAA_tagroot.dim[0].upb) ;
HZBAAAA = A_MOD(LZBAAAA,MZBAAAA,KZBAAAA);
A_PROC_EXIT(hash);
return( HZBAAAA );
} 
#undef NL

A_STATIC A68_229 * QZBAAAA_locaddtag(A68_229 ** R, A68_229 * T, void *NonLocals)
#define NL(x) (((RZBAAAA_locaddtag *)NonLocals)->x)
{ 
A68_229 * SZBAAAA;  /* clause result */
A_PROC_ENTRY(locaddtag);
 /* line 154: */
if ( ((*R)==PDAAAAA_notag) )
{ 
SZBAAAA = (*R) = T;
} 
else
{ 
if ( A_RC_EQ((*(&(T->S))),(*(&((*R)->S)))) )
{ 
SZBAAAA = (*R);
} 
else
{ 
if ( A_RC_LT((*(&(T->S))),(*(&((*R)->S)))) )
{ 
 /* line 155: */
SZBAAAA = A_CALLPROC(NL(PZBAAAA_locaddtag),((&((*R)->Left)), T),((&((*R)->Left)), T,(NL(PZBAAAA_locaddtag)).nonlocals));
} 
else
{ 
SZBAAAA = A_CALLPROC(NL(PZBAAAA_locaddtag),((&((*R)->Right)), T),((&((*R)->Right)), T,(NL(PZBAAAA_locaddtag)).nonlocals));
} 
} 
} 
A_PROC_EXIT(locaddtag);
return( SZBAAAA );
} 
#undef NL

A_STATIC A68_237 * YACAAAA_assignment(A68_237 * WACAAAA_anonymous, A68_237  XACAAAA_anonymous)
{ 
A68_237 ** KBCAAAA;  /* YIELD */
A68_237 * LBCAAAA;  /* clause result */
{ 
BBCAAAA_assignment((&(WACAAAA_anonymous->Text)), XACAAAA_anonymous.Text);
KBCAAAA = (&(WACAAAA_anonymous->Next)) ;
(*KBCAAAA) = XACAAAA_anonymous.Next;
LBCAAAA = WACAAAA_anonymous;
} 
return( LBCAAAA );
} 
#undef NL

A_STATIC A68_VOID  BCCAAAA_emptythebuffer(A68_224 * St)
{ 
A68_RC  CCCAAAA;  /* OPERATORS - simple index */
A68_INT  DCCAAAA;  /* YIELD */
A68_CHAR  ECCAAAA_b1;
A68_BOOL  FCCAAAA;  /* clause result */
A68_215  GCCAAAA;  /* OPERATORS - mode -> union mode */
A68_214  HCCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_310  ICCAAAA;  /* collateral clause result */
A68_RC  JCCAAAA;  /* OPERATORS - trim index */
A68_RC  KCCAAAA;  /* OPERATORS - trim index */
A68_215  LCCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  MCCAAAA;  /* YIELD */
A68_215  NCCAAAA;  /* OPERATORS - mode -> union mode */
A68_49  OCCAAAA;  /* procedure value */
A68_214  PCCAAAA;  /* OPERATORS - istruct to row */
A68_INT * QCCAAAA;  /* YIELD */
A68_INT * RCCAAAA;  /* YIELD */
A_PROC_ENTRY(emptythebuffer);
{ 
{ 
CCCAAAA = (St->B) ;
DCCAAAA = 1 ;
ECCAAAA_b1 = (*(&A_R1INDEX(CCCAAAA,DCCAAAA)));
 /* line 176: */
FCCAAAA = ((ECCAAAA_b1=='*')|(ECCAAAA_b1=='%'));
if ( FCCAAAA )
{ 
DWEAASP_put((*(&(St->F))), A_HARR(HCCAAAA,A_UNITE(GCCAAAA,mode1,1,NUAAASP_blank),A68_215 ));
} 
} 
 /* line 177: */
JCCAAAA = (St->B) ;
MCCAAAA = A_R1TRIM(KCCAAAA,(JCCAAAA),A_RTSCRIPT(&(KCCAAAA.dim[0]),&((JCCAAAA).dim[0]),(JCCAAAA).dim[0].lwb,(*(&(St->Upb))),1)) ;
ICCAAAA.data[0] = A_UNITE(LCCAAAA,mode2,2,MCCAAAA);
OCCAAAA.fn.fn_global = XTDAASP_newline;
OCCAAAA.nonlocals = A68_NIL;
ICCAAAA.data[1] = A_UNITE(NCCAAAA,mode30,30,OCCAAAA);
DWEAASP_put((*(&(St->F))), A_HIS1ARR(PCCAAAA,ICCAAAA,A68_215 ,2));
QCCAAAA = (&(St->N)) ;
(*QCCAAAA)+=1;
RCCAAAA = (&(St->Upb)) ;
(*RCCAAAA) = 0;
} 
A_PROC_EXIT(emptythebuffer);
return;
} 
#undef NL

A_STATIC A68_VOID  QMCAAAA_generator(A68_BOOL  OMCAAAA_anonymous, A68_71  *ReturnedValue, void *NonLocals)
#define NL(x) (((RMCAAAA_generator *)NonLocals)->x)
{ 
A68_71  SMCAAAA;  /* clause result */
A68_71  TMCAAAA;  /* OPERATORS - dynamic generator */
{ 
TMCAAAA.dim[0].upb = 4 ;
TMCAAAA.dim[0].lwb = 1 ;
A_1INITSTRIDES(TMCAAAA) ;
( OMCAAAA_anonymous? A_R1LOC(A68_INT ,TMCAAAA): A_R1HEAP(A68_INT ,TMCAAAA) );
SMCAAAA = TMCAAAA;
} 
*ReturnedValue = (SMCAAAA);
return;
} 
#undef NL

A_STATIC A68_229 * GOCAAAA_assignment(A68_229 * EOCAAAA_anonymous, A68_230  FOCAAAA_anonymous)
{ 
A68_RC  HOCAAAA;  /* YIELD */
A68_RC  IOCAAAA;  /* OPERATORS - copy to flex */
A68_32 * JOCAAAA;  /* YIELD */
A68_229 ** KOCAAAA;  /* YIELD */
A68_229 ** LOCAAAA;  /* YIELD */
A68_229 * MOCAAAA;  /* clause result */
{ 
HOCAAAA = FOCAAAA_anonymous.S ;
JOCAAAA = (&(EOCAAAA_anonymous->S)) ;
(*JOCAAAA) = A_R1COPY(HOCAAAA,IOCAAAA,A68_CHAR );
KOCAAAA = (&(EOCAAAA_anonymous->Left)) ;
(*KOCAAAA) = FOCAAAA_anonymous.Left;
LOCAAAA = (&(EOCAAAA_anonymous->Right)) ;
(*LOCAAAA) = FOCAAAA_anonymous.Right;
MOCAAAA = EOCAAAA_anonymous;
} 
return( MOCAAAA );
} 
#undef NL

A_STATIC A68_BOOL  AQCAAAA_anonymous(A68_38 * F, void *NonLocals)
#define NL(x) (((BQCAAAA_anonymous *)NonLocals)->x)
{ 
A68_BOOL  CQCAAAA;  /* clause result */
A68_BOOL  DQCAAAA;  /* OPERATORS - skip to mode */
{ 
XICAASP_close(F);
siglongjmp(NL(OPCAAAA_eof).label,1);
CQCAAAA = DQCAAAA;
} 
return( CQCAAAA );
} 
#undef NL

A_STATIC A68_BOOL  GRCAAAA_anonymous(A68_38 * F, void *NonLocals)
#define NL(x) (((HRCAAAA_anonymous *)NonLocals)->x)
{ 
A68_BOOL * IRCAAAA;  /* YIELD */
A68_BOOL  JRCAAAA;  /* clause result */
A68_BOOL  KRCAAAA;  /* OPERATORS - skip to mode */
{ 
IRCAAAA = (&(NL(Inp)->Ended)) ;
(*IRCAAAA) = A68_TRUE;
siglongjmp(NL(ZQCAAAA_lab1).label,1);
JRCAAAA = KRCAAAA;
} 
return( JRCAAAA );
} 
#undef NL

A_STATIC A68_243 * QVCAAAA_assignment(A68_243 * OVCAAAA_anonymous, A68_243  PVCAAAA_anonymous)
{ 
A68_243  RVCAAAA;  /* united object - for case conformity */
A68_71  SVCAAAA_anonymous;
A68_71  TVCAAAA;  /* OPERATORS - copy to flex */
A68_227 * UVCAAAA;  /* YIELD */
A68_RC  VVCAAAA_anonymous;
A68_RC  WVCAAAA;  /* OPERATORS - copy to flex */
A68_32 * XVCAAAA;  /* YIELD */
A68_243 * YVCAAAA;  /* clause result */
{ 
(*OVCAAAA_anonymous) = PVCAAAA_anonymous;
RVCAAAA = PVCAAAA_anonymous ;
switch ( RVCAAAA.mode )
{ 
case 2: /* [] INT */
SVCAAAA_anonymous = (RVCAAAA.data.mode2);
UVCAAAA = &(OVCAAAA_anonymous-> data.mode2) ;
(*UVCAAAA) = A_R1COPY(SVCAAAA_anonymous,TVCAAAA,A68_INT );
break;
case 4: /* [] CHAR */
VVCAAAA_anonymous = (RVCAAAA.data.mode4);
XVCAAAA = &(OVCAAAA_anonymous-> data.mode4) ;
(*XVCAAAA) = A_R1COPY(VVCAAAA_anonymous,WVCAAAA,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
YVCAAAA = OVCAAAA_anonymous;
} 
return( YVCAAAA );
} 
#undef NL

A_STATIC A68_VOID  YZCAAAA_generator(A68_BOOL  WZCAAAA_anonymous, A68_RC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZZCAAAA_generator *)NonLocals)->x)
{ 
A68_RC  AADAAAA;  /* clause result */
A68_RC  BADAAAA;  /* OPERATORS - dynamic generator */
{ 
 /* line 314: */
BADAAAA.dim[0].upb = ((*NL(KVCAAAA_s)).dim[0].upb-((*NL(FZCAAAA_nat))/2)) ;
BADAAAA.dim[0].lwb = (*NL(KVCAAAA_s)).dim[0].lwb ;
A_1INITSTRIDES(BADAAAA) ;
( WZCAAAA_anonymous? A_R1LOC(A68_CHAR ,BADAAAA): A_R1HEAP(A68_CHAR ,BADAAAA) );
AADAAAA = BADAAAA;
} 
*ReturnedValue = (AADAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  FAAAAAA_generator(A68_BOOL  EAAAAAA_anonymous, A68_224  *ReturnedValue)
{ 
A68_228  OAAAAAA_anonymous;
A68_71  PAAAAAA;  /* avoid structure result */
A68_227 * QAAAAAA;  /* YIELD */
A68_RC  RAAAAAA;  /* avoid structure result */
A68_32 * SAAAAAA;  /* YIELD */
A68_224  TAAAAAA;  /* clause result */
{ 
HAAAAAA_generator( EAAAAAA_anonymous, &PAAAAAA );
QAAAAAA = (&((&OAAAAAA_anonymous)->Sec)) ;
(*QAAAAAA) = PAAAAAA;
LAAAAAA_generator( EAAAAAA_anonymous, &RAAAAAA );
SAAAAAA = (&((&OAAAAAA_anonymous)->B)) ;
(*SAAAAAA) = RAAAAAA;
TAAAAAA = OAAAAAA_anonymous;
} 
*ReturnedValue = (TAAAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  XAAAAAA_generator(A68_BOOL  WAAAAAA_anonymous, A68_230  *ReturnedValue)
{ 
A68_229  YAAAAAA_anonymous;
A68_RC  ZAAAAAA;  /* avoid structure result */
A68_32 * ABAAAAA;  /* YIELD */
A68_230  BBAAAAA;  /* clause result */
{ 
A_CALLPROC(EAAAASP_anonymous,(WAAAAAA_anonymous, &ZAAAAAA),(WAAAAAA_anonymous, &ZAAAAAA,(EAAAASP_anonymous).nonlocals));
ABAAAAA = (&((&YAAAAAA_anonymous)->S)) ;
(*ABAAAAA) = ZAAAAAA;
BBAAAAA = YAAAAAA_anonymous;
} 
*ReturnedValue = (BBAAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  FBAAAAA_generator(A68_BOOL  EBAAAAA_anonymous, A68_230  *ReturnedValue)
{ 
A68_229  GBAAAAA_anonymous;
A68_RC  HBAAAAA;  /* avoid structure result */
A68_32 * IBAAAAA;  /* YIELD */
A68_230  JBAAAAA;  /* clause result */
{ 
A_CALLPROC(EAAAASP_anonymous,(EBAAAAA_anonymous, &HBAAAAA),(EBAAAAA_anonymous, &HBAAAAA,(EAAAASP_anonymous).nonlocals));
IBAAAAA = (&((&GBAAAAA_anonymous)->S)) ;
(*IBAAAAA) = HBAAAAA;
JBAAAAA = GBAAAAA_anonymous;
} 
*ReturnedValue = (JBAAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  NBAAAAA_generator(A68_BOOL  MBAAAAA_anonymous, A68_240  *ReturnedValue)
{ 
A68_239  OBAAAAA_anonymous;
A68_RC  PBAAAAA;  /* avoid structure result */
A68_32 * QBAAAAA;  /* YIELD */
A68_240  RBAAAAA;  /* clause result */
{ 
A_CALLPROC(EAAAASP_anonymous,(MBAAAAA_anonymous, &PBAAAAA),(MBAAAAA_anonymous, &PBAAAAA,(EAAAASP_anonymous).nonlocals));
QBAAAAA = (&((&OBAAAAA_anonymous)->Id)) ;
(*QBAAAAA) = PBAAAAA;
RBAAAAA = OBAAAAA_anonymous;
} 
*ReturnedValue = (RBAAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  ECAAAAA_(A68_CHAR  A, A68_CHAR  B, A68_RC  *ReturnedValue)
{ 
A68_55  GCAAAAA_generator;   /* proc value of non-global proc */
A68_RC  MCAAAAA;  /* avoid structure result */
A68_RC  LCAAAAA_s;
A68_INT  NCAAAAA_i;
A68_INT  OCAAAAA;  /* to part of loop */
A68_CHAR * PCAAAAA;  /* YIELD */
A68_RC  QCAAAAA;  /* clause result */
A68_55  SCAAAAA_generator;   /* proc value of non-global proc */
A68_RC  YCAAAAA;  /* avoid structure result */
A68_RC  XCAAAAA_s;
A68_INT  ZCAAAAA_i;
A68_INT  ADAAAAA;  /* to part of loop */
A68_CHAR * BDAAAAA;  /* YIELD */
A_PROC_ENTRY(-);
 /* line 15: */
if ( ((A68_INT)(unsigned char)A<=(A68_INT)(unsigned char)B) )
{ 
A_CLOSURE( GCAAAAA_generator, HCAAAAA_generator, ICAAAAA_generator );
(( ICAAAAA_generator * ) ( GCAAAAA_generator.nonlocals )) -> A = A;
(( ICAAAAA_generator * ) ( GCAAAAA_generator.nonlocals )) -> B = B;
A_CALLPROC(GCAAAAA_generator,(A68_TRUE, &MCAAAAA),(A68_TRUE, &MCAAAAA,(GCAAAAA_generator).nonlocals));
LCAAAAA_s = MCAAAAA;
OCAAAAA = LCAAAAA_s.dim[0].upb;
for ( NCAAAAA_i = LCAAAAA_s.dim[0].lwb;
NCAAAAA_i <= OCAAAAA;
NCAAAAA_i += 1 )
{ 
 /* line 16: */
PCAAAAA = (&A_R1INDEX(LCAAAAA_s,NCAAAAA_i)) ;
(*PCAAAAA) = (A68_SSBITS)NCAAAAA_i;
}
QCAAAAA = LCAAAAA_s;
} 
else
{ 
A_CLOSURE( SCAAAAA_generator, TCAAAAA_generator, UCAAAAA_generator );
(( UCAAAAA_generator * ) ( SCAAAAA_generator.nonlocals )) -> B = B;
(( UCAAAAA_generator * ) ( SCAAAAA_generator.nonlocals )) -> A = A;
A_CALLPROC(SCAAAAA_generator,(A68_TRUE, &YCAAAAA),(A68_TRUE, &YCAAAAA,(SCAAAAA_generator).nonlocals));
XCAAAAA_s = YCAAAAA;
ADAAAAA = XCAAAAA_s.dim[0].upb;
for ( ZCAAAAA_i = XCAAAAA_s.dim[0].lwb;
ZCAAAAA_i <= ADAAAAA;
ZCAAAAA_i += 1 )
{ 
BDAAAAA = (&A_R1INDEX(XCAAAAA_s,ZCAAAAA_i)) ;
(*BDAAAAA) = (A68_SSBITS)ZCAAAAA_i;
}
QCAAAAA = XCAAAAA_s;
} 
A_PROC_EXIT(-);
*ReturnedValue = (QCAAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  UDAAAAA_anonymous(A68_RC  S, A68_243  T)
{ 
/*SKIP*/;
return;
} 
#undef NL

A_STATIC A68_VOID  ZDAAAAA_anonymous(A68_RC  S, A68_237  T)
{ 
/*SKIP*/;
return;
} 
#undef NL

A_STATIC A68_VOID  EEAAAAA_anonymous(A68_RC  S, A68_RC  T)
{ 
/*SKIP*/;
return;
} 
#undef NL

A_STATIC A68_224 * TEAAAAA_assignment(A68_224 * REAAAAA_anonymous, A68_224  SEAAAAA_anonymous)
{ 
A68_38 ** UEAAAAA;  /* YIELD */
A68_BOOL * VEAAAAA;  /* YIELD */
A68_INT * WEAAAAA;  /* YIELD */
A68_INT * XEAAAAA;  /* YIELD */
A68_INT * YEAAAAA;  /* YIELD */
A68_INT * ZEAAAAA;  /* YIELD */
A68_71  AFAAAAA;  /* YIELD */
A68_71  BFAAAAA;  /* OPERATORS - assign op */
A68_RC  CFAAAAA;  /* YIELD */
A68_RC  DFAAAAA;  /* OPERATORS - assign op */
A68_224 ** EFAAAAA;  /* YIELD */
A68_224 * FFAAAAA;  /* clause result */
{ 
UEAAAAA = (&(REAAAAA_anonymous->F)) ;
(*UEAAAAA) = SEAAAAA_anonymous.F;
VEAAAAA = (&(REAAAAA_anonymous->Ended)) ;
(*VEAAAAA) = SEAAAAA_anonymous.Ended;
WEAAAAA = (&(REAAAAA_anonymous->Fnum)) ;
(*WEAAAAA) = SEAAAAA_anonymous.Fnum;
XEAAAAA = (&(REAAAAA_anonymous->N)) ;
(*XEAAAAA) = SEAAAAA_anonymous.N;
YEAAAAA = (&(REAAAAA_anonymous->Loc)) ;
(*YEAAAAA) = SEAAAAA_anonymous.Loc;
ZEAAAAA = (&(REAAAAA_anonymous->Upb)) ;
(*ZEAAAAA) = SEAAAAA_anonymous.Upb;
AFAAAAA = (REAAAAA_anonymous->Sec) ;
BFAAAAA = SEAAAAA_anonymous.Sec ;
A_R1ASSIGN2(BFAAAAA,AFAAAAA,A68_INT );
CFAAAAA = (REAAAAA_anonymous->B) ;
DFAAAAA = SEAAAAA_anonymous.B ;
A_R1ASSIGN2(DFAAAAA,CFAAAAA,A68_CHAR );
EFAAAAA = (&(REAAAAA_anonymous->Next)) ;
(*EFAAAAA) = SEAAAAA_anonymous.Next;
FFAAAAA = REAAAAA_anonymous;
} 
return( FFAAAAA );
} 
#undef NL

A_STATIC A68_VOID  FGAAAAA_generator(A68_BOOL  EGAAAAA_anonymous, A68_254  *ReturnedValue)
{ 
A68_254  HGAAAAA;  /* OPERATORS - dynamic generator */
A68_256  GGAAAAA_anonymous;
A68_32 * IGAAAAA_anonymous;
A68_INT  JGAAAAA;  /* forall loop counter */
A68_RC  KGAAAAA;  /* avoid structure result */
A68_254  LGAAAAA;  /* clause result */
{ 
 /* line 33: */
HGAAAAA.dim[0].upb = 315 ;
HGAAAAA.dim[0].lwb = 0 ;
A_1INITSTRIDES(HGAAAAA) ;
( EGAAAAA_anonymous? A_R1LOC(A68_RC ,HGAAAAA): A_R1HEAP(A68_RC ,HGAAAAA) );
GGAAAAA_anonymous = HGAAAAA;
JGAAAAA = (*(&GGAAAAA_anonymous)).dim[0].upb - (*(&GGAAAAA_anonymous)).dim[0].lwb;
IGAAAAA_anonymous = (*(&GGAAAAA_anonymous)).data;
for (;JGAAAAA-- >= 0;
(IGAAAAA_anonymous += (*(&GGAAAAA_anonymous)).dim[0].stride
) )
{
A_CALLPROC(EAAAASP_anonymous,(EGAAAAA_anonymous, &KGAAAAA),(EGAAAAA_anonymous, &KGAAAAA,(EAAAASP_anonymous).nonlocals));
(*IGAAAAA_anonymous) = KGAAAAA;
}
LGAAAAA = GGAAAAA_anonymous;
} 
*ReturnedValue = (LGAAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZEBAAAA_assignment(A68_253  XEBAAAA_anonymous, A68_254  YEBAAAA_anonymous, A68_253  *ReturnedValue)
{ 
A68_32  AFBAAAA_anonymous;
A68_32 * BFBAAAA_anonymous;
A68_RC * CFBAAAA;  /* forall control - []x */
A68_INT  DFBAAAA;  /* forall loop counter */
A68_RC  EFBAAAA;  /* OPERATORS - copy to flex */
A68_253  FFBAAAA;  /* clause result */
{ 
DFBAAAA = YEBAAAA_anonymous.dim[0].upb - YEBAAAA_anonymous.dim[0].lwb;
if ( DFBAAAA != XEBAAAA_anonymous.dim[0].upb - XEBAAAA_anonymous.dim[0].lwb )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
CFBAAAA = YEBAAAA_anonymous.data;
BFBAAAA_anonymous = XEBAAAA_anonymous.data;
for (;DFBAAAA-- >= 0;
(CFBAAAA += YEBAAAA_anonymous.dim[0].stride
,BFBAAAA_anonymous += XEBAAAA_anonymous.dim[0].stride
) )
{
AFBAAAA_anonymous = *CFBAAAA;
(*BFBAAAA_anonymous) = A_R1COPY(AFBAAAA_anonymous,EFBAAAA,A68_CHAR );
}
FFBAAAA = XEBAAAA_anonymous;
} 
*ReturnedValue = (FFBAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  LFBAAAA_generator(A68_BOOL  KFBAAAA_anonymous, A68_264  *ReturnedValue)
{ 
A68_264  MFBAAAA;  /* clause result */
A68_264  NFBAAAA;  /* OPERATORS - dynamic generator */
{ 
NFBAAAA.dim[0].upb = 15 ;
NFBAAAA.dim[0].lwb = 0 ;
A_1INITSTRIDES(NFBAAAA) ;
( KFBAAAA_anonymous? A_R1LOC(A68_229 *,NFBAAAA): A_R1HEAP(A68_229 *,NFBAAAA) );
MFBAAAA = NFBAAAA;
} 
*ReturnedValue = (MFBAAAA);
return;
} 
#undef NL

A_STATIC A68_239 * FGBAAAA_assignment(A68_239 * DGBAAAA_anonymous, A68_240  EGBAAAA_anonymous)
{ 
A68_RC  GGBAAAA;  /* YIELD */
A68_RC  HGBAAAA;  /* OPERATORS - copy to flex */
A68_32 * IGBAAAA;  /* YIELD */
A68_237 *** JGBAAAA;  /* YIELD */
A68_237 *** KGBAAAA;  /* YIELD */
A68_239 ** LGBAAAA;  /* YIELD */
A68_239 ** MGBAAAA;  /* YIELD */
A68_239 * NGBAAAA;  /* clause result */
{ 
GGBAAAA = EGBAAAA_anonymous.Id ;
IGBAAAA = (&(DGBAAAA_anonymous->Id)) ;
(*IGBAAAA) = A_R1COPY(GGBAAAA,HGBAAAA,A68_CHAR );
JGBAAAA = (&(DGBAAAA_anonymous->Textbeg)) ;
(*JGBAAAA) = EGBAAAA_anonymous.Textbeg;
KGBAAAA = (&(DGBAAAA_anonymous->Textend)) ;
(*KGBAAAA) = EGBAAAA_anonymous.Textend;
LGBAAAA = (&(DGBAAAA_anonymous->Left)) ;
(*LGBAAAA) = EGBAAAA_anonymous.Left;
MGBAAAA = (&(DGBAAAA_anonymous->Right)) ;
(*MGBAAAA) = EGBAAAA_anonymous.Right;
NGBAAAA = DGBAAAA_anonymous;
} 
return( NGBAAAA );
} 
#undef NL

A_STATIC A68_BOOL  TGBAAAA_monitor(A68_214  S)
{ 
A68_VC  UGBAAAA;  /* avoid structure result */
A68_206  VGBAAAA;  /* OPERATORS - mode -> union mode */
A68_BOOL  WGBAAAA;  /* clause result */
A_PROC_ENTRY(monitor);
 /* line 63: */
BFCAASP_idf( (&RGBAAAA_monitorfile), &UGBAAAA );
if ( (OHCAASP_open((&RGBAAAA_monitorfile), A_UNITE(VGBAAAA,mode3,3,UGBAAAA), ZRDAASP_standbackchannel)!=0) )
{ 
WGBAAAA = A68_FALSE;
} 
else
{ 
JKCAASP_set((&RGBAAAA_monitorfile), 0, 0, PFCAASP_logicalend((&RGBAAAA_monitorfile)));
DWEAASP_put((&RGBAAAA_monitorfile), S);
 /* line 64: */
XICAASP_close((&RGBAAAA_monitorfile));
WGBAAAA = A68_TRUE;
} 
A_PROC_EXIT(monitor);
return( WGBAAAA );
} 
#undef NL

A_STATIC A68_BOOL  YGBAAAA_startmonitor(A68_RC  Fn)
{ 
A68_BOOL  ZGBAAAA;  /* clause result */
A68_270  AHBAAAA;  /* collateral clause result */
A68_215  DHBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  EHBAAAA;  /* YIELD */
A68_215  FHBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  GHBAAAA;  /* procedure value */
A68_215  JHBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  KHBAAAA;  /* YIELD */
A68_215  LHBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  MHBAAAA;  /* procedure value */
A68_215  NHBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  OHBAAAA;  /* procedure value */
A68_214  PHBAAAA;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(startmonitor);
 /* line 65: */
if ( (BHCAASP_establish((&RGBAAAA_monitorfile), Fn, ZRDAASP_standbackchannel, 0, 0, 0)!=0) )
{ 
ZGBAAAA = A68_FALSE;
} 
else
{ 
 /* line 66: */
EHBAAAA = CHBAAAA ;
AHBAAAA.data[0] = A_UNITE(DHBAAAA,mode2,2,EHBAAAA);
GHBAAAA.fn.fn_global = XTDAASP_newline;
GHBAAAA.nonlocals = A68_NIL;
AHBAAAA.data[1] = A_UNITE(FHBAAAA,mode30,30,GHBAAAA);
KHBAAAA = IHBAAAA ;
AHBAAAA.data[2] = A_UNITE(JHBAAAA,mode2,2,KHBAAAA);
MHBAAAA.fn.fn_global = XTDAASP_newline;
MHBAAAA.nonlocals = A68_NIL;
AHBAAAA.data[3] = A_UNITE(LHBAAAA,mode30,30,MHBAAAA);
OHBAAAA.fn.fn_global = XTDAASP_newline;
OHBAAAA.nonlocals = A68_NIL;
AHBAAAA.data[4] = A_UNITE(NHBAAAA,mode30,30,OHBAAAA);
DWEAASP_put((&RGBAAAA_monitorfile), A_HIS1ARR(PHBAAAA,AHBAAAA,A68_215 ,5));
 /* line 67: */
XICAASP_close((&RGBAAAA_monitorfile));
ZGBAAAA = A68_TRUE;
} 
A_PROC_EXIT(startmonitor);
return( ZGBAAAA );
} 
#undef NL
 /* line 68: */

A_STATIC A68_VOID  SHBAAAA_monitorprinttoken(A68_RC  S, A68_243  T)
{ 
A68_271  THBAAAA;  /* collateral clause result */
A68_215  UHBAAAA;  /* OPERATORS - mode -> union mode */
A68_243  VHBAAAA;  /* united object - for case conformity */
A68_INT  WHBAAAA_n;
A68_RC  YHBAAAA;  /* clause result */
A68_INT  ZHBAAAA;  /* YIELD */
A68_RC  AIBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_187  BIBAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  CIBAAAA;  /* YIELD */
A68_RC  DIBAAAA;  /* avoid structure result */
A68_RC  EIBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_187  FIBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  GIBAAAA;  /* avoid structure result */
A68_RC  IIBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  JIBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  KIBAAAA;  /* YIELD */
A68_232  LIBAAAA_c;
A68_VC  OIBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PIBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QIBAAAA;  /* YIELD */
A68_RC  RIBAAAA;  /* OPERATORS - vector -> row */
A68_215  SIBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  TIBAAAA;  /* YIELD */
A68_RC  UIBAAAA_st;
A68_RC  XIBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  YIBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  ZIBAAAA;  /* YIELD */
A68_215  CJBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  DJBAAAA;  /* YIELD */
A68_229 * EJBAAAA_rt;
A68_RC  HJBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  IJBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  JJBAAAA;  /* YIELD */
A68_215  KJBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  LJBAAAA;  /* procedure value */
A68_214  MJBAAAA;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(monitorprinttoken);
THBAAAA.data[0] = A_UNITE(UHBAAAA,mode2,2,S);
VHBAAAA = T ;
switch ( VHBAAAA.mode )
{ 
case 1: /* INT */
WHBAAAA_n = (VHBAAAA.data.mode1);
if ( (WHBAAAA_n<0) )
{ 
 /* line 69: */
ZHBAAAA = A_ABS(WHBAAAA_n) ;
CIBAAAA = A_ABS(WHBAAAA_n) ;
XPBAASP_whole( A_UNITE(BIBAAAA,mode2,2,CIBAAAA), 0, &DIBAAAA );
YHBAAAA = A_RC_PLUS(A_RC_PLUS(A_RC_PLUS((*(&A_R1INDEX(NGAAAAA_boldsym,ZHBAAAA))),A_HARR(AIBAAAA,'[',A68_CHAR )),DIBAAAA),A_HARR(EIBAAAA,']',A68_CHAR ));
} 
else
{ 
XPBAASP_whole( A_UNITE(FIBAAAA,mode2,2,WHBAAAA_n), 0, &GIBAAAA );
YHBAAAA = GIBAAAA;
} 
KIBAAAA = A_RC_PLUS(A_RC_PLUS(HIBAAAA,YHBAAAA),A_HARR(IIBAAAA,')',A68_CHAR )) ;
THBAAAA.data[1] = A_UNITE(JIBAAAA,mode2,2,KIBAAAA);
break;
case 3: /* STRUCT(CHAR)  */
LIBAAAA_c = (VHBAAAA.data.mode3);
 /* line 70: */
QIBAAAA = A_VC_PLUS(A_VC_PLUS(NIBAAAA,A_HVEC(OIBAAAA,LIBAAAA_c.Cs,A68_CHAR )),A_HVEC(PIBAAAA,')',A68_CHAR )) ;
TIBAAAA = A_VECARR(QIBAAAA,RIBAAAA) ;
THBAAAA.data[1] = A_UNITE(SIBAAAA,mode2,2,TIBAAAA);
break;
case 4: /* [] CHAR */
UIBAAAA_st = (VHBAAAA.data.mode4);
ZIBAAAA = A_RC_PLUS(A_RC_PLUS(WIBAAAA,UIBAAAA_st),A_HARR(XIBAAAA,')',A68_CHAR )) ;
THBAAAA.data[1] = A_UNITE(YIBAAAA,mode2,2,ZIBAAAA);
break;
case 5: /* VOID */
DJBAAAA = BJBAAAA ;
THBAAAA.data[1] = A_UNITE(CJBAAAA,mode2,2,DJBAAAA);
break;
case 6: /* REF STRUCT(MODE32,REF MODE229,REF MODE229)  */
EJBAAAA_rt = (VHBAAAA.data.mode6);
 /* line 71: */
JJBAAAA = A_RC_PLUS(A_RC_PLUS(GJBAAAA,(*(&(EJBAAAA_rt->S)))),A_HARR(HJBAAAA,')',A68_CHAR )) ;
THBAAAA.data[1] = A_UNITE(IJBAAAA,mode2,2,JJBAAAA);
break;
default: 
A_IMP_SKIP ;
break;
} 
LJBAAAA.fn.fn_global = XTDAASP_newline;
LJBAAAA.nonlocals = A68_NIL;
THBAAAA.data[2] = A_UNITE(KJBAAAA,mode30,30,LJBAAAA);
TGBAAAA_monitor(A_HIS1ARR(MJBAAAA,THBAAAA,A68_215 ,3));
A_PROC_EXIT(monitorprinttoken);
return;
} 
#undef NL

A_STATIC A68_VOID  PJBAAAA_monitorprinttext(A68_RC  S, A68_237  T)
{ 
A68_271  QJBAAAA;  /* collateral clause result */
A68_215  RJBAAAA;  /* OPERATORS - mode -> union mode */
A68_238  SJBAAAA;  /* united object - for case conformity */
A68_INT  TJBAAAA_n;
A68_RC  VJBAAAA;  /* clause result */
A68_INT  WJBAAAA;  /* YIELD */
A68_187  XJBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  YJBAAAA;  /* avoid structure result */
A68_RC  AKBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  BKBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  CKBAAAA;  /* YIELD */
A68_71  DKBAAAA_r;
A68_INT  GKBAAAA;  /* YIELD */
A68_187  HKBAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  IKBAAAA;  /* YIELD */
A68_RC  JKBAAAA;  /* avoid structure result */
A68_RC  KKBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LKBAAAA;  /* YIELD */
A68_187  MKBAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  NKBAAAA;  /* YIELD */
A68_RC  OKBAAAA;  /* avoid structure result */
A68_RC  PKBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  QKBAAAA;  /* YIELD */
A68_187  RKBAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  SKBAAAA;  /* YIELD */
A68_RC  TKBAAAA;  /* avoid structure result */
A68_RC  UKBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  VKBAAAA;  /* YIELD */
A68_187  WKBAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  XKBAAAA;  /* YIELD */
A68_RC  YKBAAAA;  /* avoid structure result */
A68_RC  ZKBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  ALBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  BLBAAAA;  /* YIELD */
A68_RC  CLBAAAA_st;
A68_RC  FLBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  GLBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  HLBAAAA;  /* YIELD */
A68_229 * ILBAAAA_tg;
A68_RC  LLBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  MLBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  NLBAAAA;  /* YIELD */
A68_242 * OLBAAAA_mc;
A68_RC  RLBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  SLBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  TLBAAAA;  /* YIELD */
A68_239 * ULBAAAA_md;
A68_RC  XLBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  YLBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  ZLBAAAA;  /* YIELD */
A68_215  CMBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  DMBAAAA;  /* YIELD */
A68_232  EMBAAAA_c;
A68_VC  HMBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IMBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JMBAAAA;  /* YIELD */
A68_RC  KMBAAAA;  /* OPERATORS - vector -> row */
A68_215  LMBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  MMBAAAA;  /* YIELD */
A68_215  NMBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  OMBAAAA;  /* procedure value */
A68_214  PMBAAAA;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(monitorprinttext);
 /* line 72: */
QJBAAAA.data[0] = A_UNITE(RJBAAAA,mode2,2,S);
SJBAAAA = T.Text ;
switch ( SJBAAAA.mode )
{ 
case 1: /* INT */
TJBAAAA_n = (SJBAAAA.data.mode1);
if ( (TJBAAAA_n<0) )
{ 
WJBAAAA = A_ABS(TJBAAAA_n) ;
VJBAAAA = (*(&A_R1INDEX(NGAAAAA_boldsym,WJBAAAA)));
} 
else
{ 
XPBAASP_whole( A_UNITE(XJBAAAA,mode2,2,TJBAAAA_n), 0, &YJBAAAA );
VJBAAAA = YJBAAAA;
} 
 /* line 73: */
CKBAAAA = A_RC_PLUS(A_RC_PLUS(ZJBAAAA,VJBAAAA),A_HARR(AKBAAAA,')',A68_CHAR )) ;
QJBAAAA.data[1] = A_UNITE(BKBAAAA,mode2,2,CKBAAAA);
break;
case 2: /* [] INT */
DKBAAAA_r = (SJBAAAA.data.mode2);
 /* line 74: */
GKBAAAA = 1 ;
IKBAAAA = A_R1INDEX(DKBAAAA_r,GKBAAAA) ;
XPBAASP_whole( A_UNITE(HKBAAAA,mode2,2,IKBAAAA), 0, &JKBAAAA );
LKBAAAA = 2 ;
NKBAAAA = A_R1INDEX(DKBAAAA_r,LKBAAAA) ;
XPBAASP_whole( A_UNITE(MKBAAAA,mode2,2,NKBAAAA), 0, &OKBAAAA );
QKBAAAA = 3 ;
SKBAAAA = A_R1INDEX(DKBAAAA_r,QKBAAAA) ;
XPBAASP_whole( A_UNITE(RKBAAAA,mode2,2,SKBAAAA), 0, &TKBAAAA );
VKBAAAA = 4 ;
XKBAAAA = A_R1INDEX(DKBAAAA_r,VKBAAAA) ;
XPBAASP_whole( A_UNITE(WKBAAAA,mode2,2,XKBAAAA), 0, &YKBAAAA );
BLBAAAA = A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(FKBAAAA,JKBAAAA),A_HARR(KKBAAAA,'.',A68_CHAR )),OKBAAAA),A_HARR(PKBAAAA,'.',A68_CHAR )),TKBAAAA),A_HARR(UKBAAAA,'.',A68_CHAR )),YKBAAAA),A_HARR(ZKBAAAA,')',A68_CHAR )) ;
QJBAAAA.data[1] = A_UNITE(ALBAAAA,mode2,2,BLBAAAA);
break;
case 4: /* [] CHAR */
CLBAAAA_st = (SJBAAAA.data.mode4);
HLBAAAA = A_RC_PLUS(A_RC_PLUS(ELBAAAA,CLBAAAA_st),A_HARR(FLBAAAA,')',A68_CHAR )) ;
QJBAAAA.data[1] = A_UNITE(GLBAAAA,mode2,2,HLBAAAA);
break;
case 6: /* REF STRUCT(MODE32,REF MODE229,REF MODE229)  */
ILBAAAA_tg = (SJBAAAA.data.mode6);
 /* line 75: */
NLBAAAA = A_RC_PLUS(A_RC_PLUS(KLBAAAA,(*(&(ILBAAAA_tg->S)))),A_HARR(LLBAAAA,')',A68_CHAR )) ;
QJBAAAA.data[1] = A_UNITE(MLBAAAA,mode2,2,NLBAAAA);
break;
case 7: /* REF STRUCT(REF MODE229,BITS,REF MODE241,REF REF MODE237,REF REF MODE237,REF MODE242,REF MODE242)  */
OLBAAAA_mc = (SJBAAAA.data.mode7);
 /* line 76: */
TLBAAAA = A_RC_PLUS(A_RC_PLUS(QLBAAAA,(*(&((*(&(OLBAAAA_mc->Id)))->S)))),A_HARR(RLBAAAA,')',A68_CHAR )) ;
QJBAAAA.data[1] = A_UNITE(SLBAAAA,mode2,2,TLBAAAA);
break;
case 8: /* REF STRUCT(MODE32,REF REF MODE237,REF REF MODE237,REF MODE239,REF MODE239)  */
ULBAAAA_md = (SJBAAAA.data.mode8);
ZLBAAAA = A_RC_PLUS(A_RC_PLUS(WLBAAAA,(*(&(ULBAAAA_md->Id)))),A_HARR(XLBAAAA,')',A68_CHAR )) ;
QJBAAAA.data[1] = A_UNITE(YLBAAAA,mode2,2,ZLBAAAA);
break;
case 5: /* VOID */
DMBAAAA = BMBAAAA ;
QJBAAAA.data[1] = A_UNITE(CMBAAAA,mode2,2,DMBAAAA);
break;
case 3: /* STRUCT(CHAR)  */
EMBAAAA_c = (SJBAAAA.data.mode3);
 /* line 77: */
JMBAAAA = A_VC_PLUS(A_VC_PLUS(GMBAAAA,A_HVEC(HMBAAAA,EMBAAAA_c.Cs,A68_CHAR )),A_HVEC(IMBAAAA,')',A68_CHAR )) ;
MMBAAAA = A_VECARR(JMBAAAA,KMBAAAA) ;
QJBAAAA.data[1] = A_UNITE(LMBAAAA,mode2,2,MMBAAAA);
break;
default: 
A_IMP_SKIP ;
break;
} 
OMBAAAA.fn.fn_global = XTDAASP_newline;
OMBAAAA.nonlocals = A68_NIL;
QJBAAAA.data[2] = A_UNITE(NMBAAAA,mode30,30,OMBAAAA);
TGBAAAA_monitor(A_HIS1ARR(PMBAAAA,QJBAAAA,A68_215 ,3));
A_PROC_EXIT(monitorprinttext);
return;
} 
#undef NL
 /* line 78: */

A_STATIC A68_VOID  SMBAAAA_monitorprintstring(A68_RC  S, A68_RC  T)
{ 
A68_271  TMBAAAA;  /* collateral clause result */
A68_215  UMBAAAA;  /* OPERATORS - mode -> union mode */
A68_215  VMBAAAA;  /* OPERATORS - mode -> union mode */
A68_215  WMBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  XMBAAAA;  /* procedure value */
A68_214  YMBAAAA;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(monitorprintstring);
TMBAAAA.data[0] = A_UNITE(UMBAAAA,mode2,2,S);
TMBAAAA.data[1] = A_UNITE(VMBAAAA,mode2,2,T);
XMBAAAA.fn.fn_global = XTDAASP_newline;
XMBAAAA.nonlocals = A68_NIL;
TMBAAAA.data[2] = A_UNITE(WMBAAAA,mode30,30,XMBAAAA);
TGBAAAA_monitor(A_HIS1ARR(YMBAAAA,TMBAAAA,A68_215 ,3));
A_PROC_EXIT(monitorprintstring);
return;
} 
#undef NL

A_STATIC A68_VOID  ANBAAAA_printout(A68_274  S)
{ 
A68_INT  BNBAAAA_i;
A68_INT  CNBAAAA;  /* to part of loop */
A68_273  DNBAAAA;  /* united object - for case conformity */
A68_RC  ENBAAAA_si;
A68_RC  FNBAAAA;  /* clause result */
A68_CHAR  GNBAAAA_ci;
A68_RC  HNBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  INBAAAA_ni;
A68_187  JNBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  KNBAAAA;  /* avoid structure result */
A68_215  LNBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  MNBAAAA;  /* procedure value */
A68_214  NNBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  QNBAAAA_outs;
A68_215  RNBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  SNBAAAA;  /* procedure value */
A68_214  TNBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  UNBAAAA;  /* OPERATORS - mode -> union mode */
A68_214  VNBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(printout);
CNBAAAA = S.dim[0].upb;
for ( BNBAAAA_i = S.dim[0].lwb;
BNBAAAA_i <= CNBAAAA;
BNBAAAA_i += 1 )
{ 
 /* line 80: */
DNBAAAA = A_R1INDEX(S,BNBAAAA_i) ;
switch ( DNBAAAA.mode )
{ 
case 1: /* [] CHAR */
ENBAAAA_si = (DNBAAAA.data.mode1);
FNBAAAA = ENBAAAA_si;
break;
case 2: /* CHAR */
GNBAAAA_ci = (DNBAAAA.data.mode2);
FNBAAAA = A_HARR(HNBAAAA,GNBAAAA_ci,A68_CHAR );
break;
case 3: /* INT */
INBAAAA_ni = (DNBAAAA.data.mode3);
XPBAASP_whole( A_UNITE(JNBAAAA,mode2,2,INBAAAA_ni), 0, &KNBAAAA );
FNBAAAA = KNBAAAA;
break;
case 4: /* VOID */
{ 
MNBAAAA.fn.fn_global = XTDAASP_newline;
MNBAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(NNBAAAA,A_UNITE(LNBAAAA,mode30,30,MNBAAAA),A68_215 ));
 /* line 81: */
IEAAAAA_consolepos = 0;
FNBAAAA = PNBAAAA;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
QNBAAAA_outs = FNBAAAA;
if ( ((IEAAAAA_consolepos+QNBAAAA_outs.dim[0].upb)>80) )
{ 
SNBAAAA.fn.fn_global = XTDAASP_newline;
SNBAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(TNBAAAA,A_UNITE(RNBAAAA,mode30,30,SNBAAAA),A68_215 ));
 /* line 82: */
IEAAAAA_consolepos = 0;
} 
VCFAASP_print(A_HARR(VNBAAAA,A_UNITE(UNBAAAA,mode2,2,QNBAAAA_outs),A68_215 ));
IEAAAAA_consolepos+=QNBAAAA_outs.dim[0].upb;
}
A_PROC_EXIT(printout);
return;
} 
#undef NL

A_STATIC A68_VOID  XNBAAAA_error(A68_INT  Status)
{ 
A68_BOOL  YNBAAAA;  /* clause result */
A68_276  ZNBAAAA;  /* collateral clause result */
A68_273  COBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  DOBAAAA;  /* YIELD */
A68_VC  EOBAAAA;  /* avoid structure result */
A68_RC  FOBAAAA;  /* OPERATORS - vector -> row */
A68_273  GOBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  HOBAAAA;  /* YIELD */
A68_273  KOBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  LOBAAAA;  /* YIELD */
A68_273  MOBAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  NOBAAAA;  /* YIELD */
A68_273  OOBAAAA;  /* OPERATORS - mode -> union mode */
A68_CHAR  POBAAAA;  /* YIELD */
A68_273  QOBAAAA;  /* OPERATORS - mode -> union mode */
A68_274  ROBAAAA;  /* OPERATORS - istruct to row */
A68_INT  SOBAAAA_k;
A68_INT  TOBAAAA;  /* to part of loop */
A68_RC  UOBAAAA;  /* OPERATORS - simple index */
A68_CHAR  VOBAAAA_bk;
A68_BOOL  WOBAAAA;  /* clause result */
A68_274  XOBAAAA;  /* clause result */
A68_273  YOBAAAA;  /* OPERATORS - mode -> union mode */
A68_274  ZOBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_273  APBAAAA;  /* OPERATORS - mode -> union mode */
A68_274  BPBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_277  CPBAAAA;  /* collateral clause result */
A68_273  DPBAAAA;  /* OPERATORS - mode -> union mode */
A68_VC  EPBAAAA;  /* YIELD */
A68_RC  FPBAAAA;  /* OPERATORS - vector -> row */
A68_273  GPBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  HPBAAAA;  /* YIELD */
A68_RC  IPBAAAA;  /* OPERATORS - trim index */
A68_RC  JPBAAAA;  /* OPERATORS - trim index */
A68_273  KPBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  LPBAAAA;  /* YIELD */
A68_273  OPBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  PPBAAAA;  /* YIELD */
A68_274  QPBAAAA;  /* OPERATORS - istruct to row */
A68_273  RPBAAAA;  /* OPERATORS - mode -> union mode */
A68_274  SPBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_278  TPBAAAA;  /* collateral clause result */
A68_273  WPBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  XPBAAAA;  /* YIELD */
A68_273  YPBAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  ZPBAAAA;  /* YIELD */
A68_273  AQBAAAA;  /* OPERATORS - mode -> union mode */
A68_CHAR  BQBAAAA;  /* YIELD */
A68_273  CQBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  DQBAAAA;  /* OPERATORS - simple index */
A68_INT  EQBAAAA;  /* YIELD */
A68_273  FQBAAAA;  /* OPERATORS - mode -> union mode */
A68_CHAR  GQBAAAA;  /* YIELD */
A68_273  JQBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  KQBAAAA;  /* YIELD */
A68_273  LQBAAAA;  /* OPERATORS - mode -> union mode */
A68_274  MQBAAAA;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(error);
if ( (HEAAAAA_history<Status) )
{ 
HEAAAAA_history = Status;
} 
 /* line 84: */
YNBAAAA = JEAAAAA_phaseone;
if ( YNBAAAA )
{ 
DOBAAAA = BOBAAAA ;
ZNBAAAA.data[0] = A_UNITE(COBAAAA,mode1,1,DOBAAAA);
BFCAASP_idf( (*(&(GFAAAAA_web->F))), &EOBAAAA );
HOBAAAA = A_VECARR(EOBAAAA,FOBAAAA) ;
ZNBAAAA.data[1] = A_UNITE(GOBAAAA,mode1,1,HOBAAAA);
LOBAAAA = JOBAAAA ;
ZNBAAAA.data[2] = A_UNITE(KOBAAAA,mode1,1,LOBAAAA);
NOBAAAA = (*(&(GFAAAAA_web->N))) ;
ZNBAAAA.data[3] = A_UNITE(MOBAAAA,mode3,3,NOBAAAA);
POBAAAA = ')' ;
ZNBAAAA.data[4] = A_UNITE(OOBAAAA,mode2,2,POBAAAA);
ZNBAAAA.data[5] = A_EMPTY(QOBAAAA,4);
ANBAAAA_printout(A_HIS1ARR(ROBAAAA,ZNBAAAA,A68_273 ,6));
 /* line 85: */
TOBAAAA = (*(&(GFAAAAA_web->Loc)));
for ( SOBAAAA_k = 1;
SOBAAAA_k <= TOBAAAA;
SOBAAAA_k += 1 )
{ 
{ 
UOBAAAA = (GFAAAAA_web->B) ;
VOBAAAA_bk = (*(&A_R1INDEX(UOBAAAA,SOBAAAA_k)));
WOBAAAA = (VOBAAAA_bk==VUAAASP_tabch);
if ( WOBAAAA )
{ 
XOBAAAA = A_HARR(ZOBAAAA,A_UNITE(YOBAAAA,mode2,2,NUAAASP_blank),A68_273 );
} 
else
{ 
XOBAAAA = A_HARR(BPBAAAA,A_UNITE(APBAAAA,mode2,2,VOBAAAA_bk),A68_273 );
} 
} 
ANBAAAA_printout(XOBAAAA);
}
 /* line 86: */
CPBAAAA.data[0] = A_EMPTY(DPBAAAA,4);
EPBAAAA = A_C_TIMES(NUAAASP_blank,(*(&(GFAAAAA_web->Loc)))) ;
HPBAAAA = A_VECARR(EPBAAAA,FPBAAAA) ;
CPBAAAA.data[1] = A_UNITE(GPBAAAA,mode1,1,HPBAAAA);
if ( ((*(&(GFAAAAA_web->Loc)))<(*(&(GFAAAAA_web->Upb)))) )
{ 
 /* line 87: */
IPBAAAA = (GFAAAAA_web->B) ;
LPBAAAA = A_R1TRIM(JPBAAAA,(IPBAAAA),A_RTSCRIPT(&(JPBAAAA.dim[0]),&((IPBAAAA).dim[0]),((*(&(GFAAAAA_web->Loc)))+1),(*(&(GFAAAAA_web->Upb))),1)) ;
CPBAAAA.data[2] = A_UNITE(KPBAAAA,mode1,1,LPBAAAA);
} 
else
{ 
PPBAAAA = NPBAAAA ;
CPBAAAA.data[2] = A_UNITE(OPBAAAA,mode1,1,PPBAAAA);
} 
ANBAAAA_printout(A_HIS1ARR(QPBAAAA,CPBAAAA,A68_273 ,3));
ANBAAAA_printout(A_HARR(SPBAAAA,A_UNITE(RPBAAAA,mode2,2,NUAAASP_blank),A68_273 ));
} 
else
{ 
XPBAAAA = VPBAAAA ;
TPBAAAA.data[0] = A_UNITE(WPBAAAA,mode1,1,XPBAAAA);
 /* line 88: */
ZPBAAAA = (*(&((&JFAAAAA_output)->N))) ;
TPBAAAA.data[1] = A_UNITE(YPBAAAA,mode3,3,ZPBAAAA);
BQBAAAA = ')' ;
TPBAAAA.data[2] = A_UNITE(AQBAAAA,mode2,2,BQBAAAA);
TPBAAAA.data[3] = A_EMPTY(CQBAAAA,4);
DQBAAAA = ((&JFAAAAA_output)->B) ;
EQBAAAA = (*(&((&JFAAAAA_output)->Upb))) ;
GQBAAAA = (*(&A_R1INDEX(DQBAAAA,EQBAAAA))) ;
TPBAAAA.data[4] = A_UNITE(FQBAAAA,mode2,2,GQBAAAA);
KQBAAAA = IQBAAAA ;
TPBAAAA.data[5] = A_UNITE(JQBAAAA,mode1,1,KQBAAAA);
TPBAAAA.data[6] = A_EMPTY(LQBAAAA,4);
ANBAAAA_printout(A_HIS1ARR(MQBAAAA,TPBAAAA,A68_273 ,7));
} 
A_PROC_EXIT(error);
return;
} 
#undef NL

A_STATIC A68_VOID  PQBAAAA_simpleerror(A68_RC  S, A68_INT  Halt)
{ 
A68_271  QQBAAAA;  /* collateral clause result */
A68_215  RQBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  SQBAAAA;  /* procedure value */
A68_215  VQBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  WQBAAAA;  /* YIELD */
A68_215  XQBAAAA;  /* OPERATORS - mode -> union mode */
A68_214  YQBAAAA;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(simpleerror);
{ 
 /* line 90: */
SQBAAAA.fn.fn_global = XTDAASP_newline;
SQBAAAA.nonlocals = A68_NIL;
QQBAAAA.data[0] = A_UNITE(RQBAAAA,mode30,30,SQBAAAA);
WQBAAAA = UQBAAAA ;
QQBAAAA.data[1] = A_UNITE(VQBAAAA,mode2,2,WQBAAAA);
QQBAAAA.data[2] = A_UNITE(XQBAAAA,mode2,2,S);
VCFAASP_print(A_HIS1ARR(YQBAAAA,QQBAAAA,A68_215 ,3));
ZWBAASP_exit(Halt);
} 
A_PROC_EXIT(simpleerror);
return;
} 
#undef NL

A_STATIC A68_INT  BRBAAAA_find(A68_CHAR  C, A68_RC  S)
{ 
A68_INT  CRBAAAA_p;
A68_BOOL  DRBAAAA;  /* clause result */
A68_INT  ERBAAAA;  /* clause result */
A_PROC_ENTRY(find);
 /* line 91: */
{ 
DRBAAAA = ECBAASP_charinstring(C, (&CRBAAAA_p), S);
if ( DRBAAAA )
{ 
ERBAAAA = CRBAAAA_p;
} 
else
{ 
ERBAAAA = (S.dim[0].lwb-1);
} 
} 
A_PROC_EXIT(find);
return( ERBAAAA );
} 
#undef NL
 /* line 92: */

A_STATIC A68_VOID  HRBAAAA_upto(A68_RC  S, A68_CHAR  T, A68_RC  *ReturnedValue)
{ 
A68_INT  IRBAAAA_toix;
A68_BOOL  JRBAAAA;  /* clause result */
A68_RC  KRBAAAA;  /* clause result */
A68_RC  LRBAAAA;  /* OPERATORS - trim index */
A_PROC_ENTRY(upto);
{ 
JRBAAAA = ECBAASP_charinstring(T, (&IRBAAAA_toix), S);
if ( JRBAAAA )
{ 
KRBAAAA = A_R1TRIM(LRBAAAA,(S),A_RTSCRIPT(&(LRBAAAA.dim[0]),&((S).dim[0]),(S).dim[0].lwb,(IRBAAAA_toix-1),S.dim[0].lwb));
} 
else
{ 
KRBAAAA = S;
} 
} 
A_PROC_EXIT(upto);
*ReturnedValue = (KRBAAAA);
return;
} 
#undef NL

A_STATIC A68_INT  NRBAAAA_lookup(A68_RC  Str)
{ 
A68_INT  DSBAAAA_key;
A68_INT  ESBAAAA;  /* clause result */
A_PROC_ENTRY(lookup);
 /* line 94: */
if ( ((Str.dim[0].upb>=2)&(Str.dim[0].upb<=7)) )
{ 
DSBAAAA_key = QRBAAAA_hash(Str);
 /* line 112: */
if ( ((DSBAAAA_key<0)|(DSBAAAA_key>315)) )
{ 
ESBAAAA = 0;
} 
else
{ 
if ( A_RC_EQ((*(&A_R1INDEX(NGAAAAA_boldsym,DSBAAAA_key))),Str) )
{ 
ESBAAAA = DSBAAAA_key;
} 
else
{ 
ESBAAAA = 0;
} 
} 
} 
else
{ 
ESBAAAA = 0;
} 
A_PROC_EXIT(lookup);
return( ESBAAAA );
} 
#undef NL

A_STATIC A68_VOID  GSBAAAA_trim(A68_RC  S, A68_RC  *ReturnedValue)
{ 
A68_INT  HSBAAAA_l;
A68_INT  ISBAAAA;  /* to part of loop */
A68_INT  JSBAAAA;  /* loop control */
A68_INT  KSBAAAA_u;
A68_INT  LSBAAAA;  /* to part of loop */
A68_INT  MSBAAAA;  /* by part of loop */
A68_INT  NSBAAAA;  /* loop control */
A68_RC  OSBAAAA;  /* clause result */
A68_RC  PSBAAAA;  /* OPERATORS - trim index */
A68_RC  QSBAAAA;  /* OPERATORS - trim index */
A_PROC_ENTRY(trim);
{ 
HSBAAAA_l = S.dim[0].lwb;
ISBAAAA = S.dim[0].upb;
for ( JSBAAAA = S.dim[0].lwb;
JSBAAAA <= ISBAAAA;
JSBAAAA += 1 )
{ 
if ( !((A_R1INDEX(S,HSBAAAA_l)<=' ')) ) break;
HSBAAAA_l+=1;
}
 /* line 114: */
KSBAAAA_u = S.dim[0].upb;
LSBAAAA = HSBAAAA_l;
MSBAAAA = (-(-(-1)));
for ( NSBAAAA = S.dim[0].upb;
( MSBAAAA > 0 && NSBAAAA <= LSBAAAA) ||
( MSBAAAA < 0 && NSBAAAA >= LSBAAAA) ||
( MSBAAAA == 0 ) ;
NSBAAAA += MSBAAAA )
{ 
if ( !((A_R1INDEX(S,KSBAAAA_u)<=' ')) ) break;
KSBAAAA_u-=1;
}
if ( (HSBAAAA_l>KSBAAAA_u) )
{ 
 /* line 115: */
OSBAAAA = A_R1TRIM(PSBAAAA,(S),A_RTSCRIPT(&(PSBAAAA.dim[0]),&((S).dim[0]),S.dim[0].lwb,(S.dim[0].lwb-1),(S.dim[0].lwb-1)));
} 
else
{ 
OSBAAAA = A_R1TRIM(QSBAAAA,(S),A_RTSCRIPT(&(QSBAAAA.dim[0]),&((S).dim[0]),HSBAAAA_l,KSBAAAA_u,HSBAAAA_l));
} 
} 
A_PROC_EXIT(trim);
*ReturnedValue = (OSBAAAA);
return;
} 
#undef NL

A_STATIC A68_INT  TSBAAAA_chop(A68_CHAR  C, A68_RC  S)
{ 
A68_INT  USBAAAA_bot;
A68_INT  VSBAAAA_top;
A68_INT  WSBAAAA_i;
A68_CHAR  XSBAAAA_si;
A68_BOOL  YSBAAAA;  /* clause result */
A68_BOOL  ZSBAAAA;  /* clause result */
A68_INT  ATBAAAA;  /* clause result */
A_PROC_ENTRY(chop);
{ 
USBAAAA_bot = S.dim[0].lwb;
VSBAAAA_top = S.dim[0].upb;
WSBAAAA_i = ((USBAAAA_bot+VSBAAAA_top)/2);
for ( ;; )
{ 
 /* line 117: */
if ( (USBAAAA_bot<=VSBAAAA_top) )
{ 
YSBAAAA = ((XSBAAAA_si = A_R1INDEX(S,WSBAAAA_i))!=C);
} 
else
{ 
YSBAAAA = A68_FALSE;
} 
ZSBAAAA = YSBAAAA;
if ( !ZSBAAAA ) break;
if ( (C<XSBAAAA_si) )
{ 
VSBAAAA_top = (WSBAAAA_i-1);
} 
else
{ 
USBAAAA_bot = (WSBAAAA_i+1);
} 
 /* line 118: */
WSBAAAA_i = ((USBAAAA_bot+VSBAAAA_top)/2);
}
if ( (USBAAAA_bot<=VSBAAAA_top) )
{ 
ATBAAAA = WSBAAAA_i;
} 
else
{ 
ATBAAAA = (S.dim[0].lwb-1);
} 
} 
A_PROC_EXIT(chop);
return( ATBAAAA );
} 
#undef NL

A_STATIC A68_CHAR  CTBAAAA_uc(A68_CHAR  C)
{ 
A68_CHAR  DTBAAAA;  /* clause result */
A_PROC_ENTRY(uc);
 /* line 119: */
if ( ((C>='a')&(C<='z')) )
{ 
DTBAAAA = (A68_SSBITS)((A68_INT)(unsigned char)C-32);
} 
else
{ 
DTBAAAA = C;
} 
A_PROC_EXIT(uc);
return( DTBAAAA );
} 
#undef NL

A_STATIC A68_VOID  FTBAAAA_compact(A68_RC  Tag, A68_RC  *ReturnedValue)
{ 
A68_55  HTBAAAA_generator;   /* proc value of non-global proc */
A68_RC  NTBAAAA;  /* avoid structure result */
A68_RC  MTBAAAA_loctag;
A68_INT  OTBAAAA_n;
A68_INT  PTBAAAA_i;
A68_INT  QTBAAAA;  /* to part of loop */
A68_CHAR  RTBAAAA_ti;
A68_BOOL  STBAAAA;  /* clause result */
A68_INT  TTBAAAA;  /* YIELD */
A68_CHAR * UTBAAAA;  /* YIELD */
A68_RC  VTBAAAA;  /* clause result */
A68_RC  WTBAAAA;  /* OPERATORS - trim index */
A_PROC_ENTRY(compact);
 /* line 120: */
{ 
A_CLOSURE( HTBAAAA_generator, ITBAAAA_generator, JTBAAAA_generator );
(( JTBAAAA_generator * ) ( HTBAAAA_generator.nonlocals )) -> Tag = Tag;
A_CALLPROC(HTBAAAA_generator,(A68_TRUE, &NTBAAAA),(A68_TRUE, &NTBAAAA,(HTBAAAA_generator).nonlocals));
MTBAAAA_loctag = NTBAAAA;
OTBAAAA_n = (Tag.dim[0].lwb-1);
 /* line 121: */
QTBAAAA = Tag.dim[0].upb;
for ( PTBAAAA_i = Tag.dim[0].lwb;
PTBAAAA_i <= QTBAAAA;
PTBAAAA_i += 1 )
{ 
{ 
RTBAAAA_ti = A_R1INDEX(Tag,PTBAAAA_i);
STBAAAA = (RTBAAAA_ti!=NUAAASP_blank);
if ( STBAAAA )
{ 
TTBAAAA = OTBAAAA_n+=1 ;
UTBAAAA = (&A_R1INDEX(MTBAAAA_loctag,TTBAAAA)) ;
(*UTBAAAA) = RTBAAAA_ti;
} 
} 
}
 /* line 122: */
VTBAAAA = A_R1TRIM(WTBAAAA,(MTBAAAA_loctag),A_RTSCRIPT(&(WTBAAAA.dim[0]),&((MTBAAAA_loctag).dim[0]),(MTBAAAA_loctag).dim[0].lwb,OTBAAAA_n,1));
} 
A_PROC_EXIT(compact);
*ReturnedValue = (VTBAAAA);
return;
} 
#undef NL

A_STATIC A68_INT  ZTBAAAA_multicase(A68_CHAR  C, A68_254  S)
{ 
A68_INT  AUBAAAA_j;
A68_INT  BUBAAAA_i;
A68_INT  CUBAAAA;  /* to part of loop */
A68_RC  DUBAAAA_si;
A68_BOOL  EUBAAAA;  /* clause result */
A68_INT  FUBAAAA;  /* clause result */
A_PROC_ENTRY(multicase);
{ 
 /* line 123: */
AUBAAAA_j = (S.dim[0].lwb-1);
CUBAAAA = S.dim[0].upb;
for ( BUBAAAA_i = S.dim[0].lwb;
BUBAAAA_i <= CUBAAAA;
BUBAAAA_i += 1 )
{ 
if ( !((AUBAAAA_j<S.dim[0].lwb)) ) break;
{ 
DUBAAAA_si = A_R1INDEX(S,BUBAAAA_i);
 /* line 124: */
EUBAAAA = (TSBAAAA_chop(C, DUBAAAA_si)>=DUBAAAA_si.dim[0].lwb);
if ( EUBAAAA )
{ 
AUBAAAA_j = BUBAAAA_i;
} 
} 
}
FUBAAAA = AUBAAAA_j;
} 
A_PROC_EXIT(multicase);
return( FUBAAAA );
} 
#undef NL

A_STATIC A68_BOOL  IUBAAAA_scanincludedtree(A68_229 ** Tr, A68_RC  Fn)
{ 
A68_BOOL  JUBAAAA;  /* clause result */
A_PROC_ENTRY(scanincludedtree);
if ( ((*Tr)==LDAAAAA_noinc) )
{ 
JUBAAAA = A68_FALSE;
} 
else
{ 
if ( A_RC_EQ(Fn,(*(&((*Tr)->S)))) )
{ 
 /* line 126: */
JUBAAAA = A68_TRUE;
} 
else
{ 
if ( A_RC_LT(Fn,(*(&((*Tr)->S)))) )
{ 
JUBAAAA = IUBAAAA_scanincludedtree((&((*Tr)->Left)), Fn);
} 
else
{ 
 /* line 127: */
JUBAAAA = IUBAAAA_scanincludedtree((&((*Tr)->Right)), Fn);
} 
} 
} 
A_PROC_EXIT(scanincludedtree);
return( JUBAAAA );
} 
#undef NL

A_STATIC A68_VOID  KUBAAAA_usage(void)
{ 
A68_293  LUBAAAA;  /* collateral clause result */
A68_215  OUBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  PUBAAAA;  /* YIELD */
A68_215  QUBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  RUBAAAA;  /* procedure value */
A68_215  UUBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  VUBAAAA;  /* YIELD */
A68_215  WUBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  XUBAAAA;  /* procedure value */
A68_215  AVBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  BVBAAAA;  /* YIELD */
A68_215  CVBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  DVBAAAA;  /* procedure value */
A68_215  GVBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  HVBAAAA;  /* YIELD */
A68_215  IVBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  JVBAAAA;  /* procedure value */
A68_215  MVBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  NVBAAAA;  /* YIELD */
A68_215  OVBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  PVBAAAA;  /* procedure value */
A68_215  SVBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  TVBAAAA;  /* YIELD */
A68_215  UVBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  VVBAAAA;  /* procedure value */
A68_215  YVBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  ZVBAAAA;  /* YIELD */
A68_215  AWBAAAA;  /* OPERATORS - mode -> union mode */
A68_49  BWBAAAA;  /* procedure value */
A68_214  CWBAAAA;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(usage);
{ 
 /* line 128: */
PUBAAAA = NUBAAAA ;
LUBAAAA.data[0] = A_UNITE(OUBAAAA,mode2,2,PUBAAAA);
 /* line 129: */
RUBAAAA.fn.fn_global = XTDAASP_newline;
RUBAAAA.nonlocals = A68_NIL;
LUBAAAA.data[1] = A_UNITE(QUBAAAA,mode30,30,RUBAAAA);
VUBAAAA = TUBAAAA ;
LUBAAAA.data[2] = A_UNITE(UUBAAAA,mode2,2,VUBAAAA);
XUBAAAA.fn.fn_global = XTDAASP_newline;
XUBAAAA.nonlocals = A68_NIL;
LUBAAAA.data[3] = A_UNITE(WUBAAAA,mode30,30,XUBAAAA);
BVBAAAA = ZUBAAAA ;
LUBAAAA.data[4] = A_UNITE(AVBAAAA,mode2,2,BVBAAAA);
 /* line 130: */
DVBAAAA.fn.fn_global = XTDAASP_newline;
DVBAAAA.nonlocals = A68_NIL;
LUBAAAA.data[5] = A_UNITE(CVBAAAA,mode30,30,DVBAAAA);
HVBAAAA = FVBAAAA ;
LUBAAAA.data[6] = A_UNITE(GVBAAAA,mode2,2,HVBAAAA);
JVBAAAA.fn.fn_global = XTDAASP_newline;
JVBAAAA.nonlocals = A68_NIL;
LUBAAAA.data[7] = A_UNITE(IVBAAAA,mode30,30,JVBAAAA);
NVBAAAA = LVBAAAA ;
LUBAAAA.data[8] = A_UNITE(MVBAAAA,mode2,2,NVBAAAA);
 /* line 131: */
PVBAAAA.fn.fn_global = XTDAASP_newline;
PVBAAAA.nonlocals = A68_NIL;
LUBAAAA.data[9] = A_UNITE(OVBAAAA,mode30,30,PVBAAAA);
TVBAAAA = RVBAAAA ;
LUBAAAA.data[10] = A_UNITE(SVBAAAA,mode2,2,TVBAAAA);
 /* line 132: */
VVBAAAA.fn.fn_global = XTDAASP_newline;
VVBAAAA.nonlocals = A68_NIL;
LUBAAAA.data[11] = A_UNITE(UVBAAAA,mode30,30,VVBAAAA);
ZVBAAAA = XVBAAAA ;
LUBAAAA.data[12] = A_UNITE(YVBAAAA,mode2,2,ZVBAAAA);
BWBAAAA.fn.fn_global = XTDAASP_newline;
BWBAAAA.nonlocals = A68_NIL;
LUBAAAA.data[13] = A_UNITE(AWBAAAA,mode30,30,BWBAAAA);
DWEAASP_put((&VQCAASP_standerror), A_HIS1ARR(CWBAAAA,LUBAAAA,A68_215 ,14));
ZWBAASP_exit(1);
} 
A_PROC_EXIT(usage);
return;
} 
#undef NL

A_STATIC A68_VOID  EWBAAAA_inccursec(A68_INT  Level)
{ 
A68_71  FWBAAAA;  /* OPERATORS - simple index */
A68_INT * GWBAAAA;  /* YIELD */
A68_INT  HWBAAAA_i;
A68_INT  IWBAAAA;  /* to part of loop */
A68_71  JWBAAAA;  /* OPERATORS - simple index */
A68_INT * KWBAAAA;  /* YIELD */
A68_71  LWBAAAA;  /* OPERATORS - simple index */
A68_INT * MWBAAAA;  /* YIELD */
A_PROC_ENTRY(inccursec);
if ( ((Level>=1)&(Level<=3)) )
{ 
 /* line 134: */
FWBAAAA = (GFAAAAA_web->Sec) ;
GWBAAAA = (&A_R1INDEX(FWBAAAA,Level)) ;
(*GWBAAAA)+=1;
IWBAAAA = (GFAAAAA_web->Sec).dim[0].upb;
for ( HWBAAAA_i = (Level+1);
HWBAAAA_i <= IWBAAAA;
HWBAAAA_i += 1 )
{ 
JWBAAAA = (GFAAAAA_web->Sec) ;
KWBAAAA = (&A_R1INDEX(JWBAAAA,HWBAAAA_i)) ;
(*KWBAAAA) = 1;
}
} 
else
{ 
 /* line 135: */
if ( (Level==4) )
{ 
LWBAAAA = (GFAAAAA_web->Sec) ;
MWBAAAA = (&A_R1INDEX(LWBAAAA,Level)) ;
(*MWBAAAA)+=1;
} 
} 
A_PROC_EXIT(inccursec);
return;
} 
#undef NL

A_STATIC A68_VOID  NWBAAAA_printcursec(void)
{ 
A68_294  OWBAAAA;  /* collateral clause result */
A68_273  PWBAAAA;  /* OPERATORS - mode -> union mode */
A68_CHAR  QWBAAAA;  /* YIELD */
A68_RC  RWBAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_187  SWBAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  TWBAAAA;  /* YIELD */
A68_RC  UWBAAAA;  /* avoid structure result */
A68_273  VWBAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  WWBAAAA;  /* YIELD */
A68_71  XWBAAAA;  /* OPERATORS - simple index */
A68_INT  YWBAAAA;  /* YIELD */
A68_273  ZWBAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  AXBAAAA;  /* YIELD */
A68_273  BXBAAAA;  /* OPERATORS - mode -> union mode */
A68_CHAR  CXBAAAA;  /* YIELD */
A68_71  DXBAAAA;  /* OPERATORS - simple index */
A68_INT  EXBAAAA;  /* YIELD */
A68_273  FXBAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  GXBAAAA;  /* YIELD */
A68_273  HXBAAAA;  /* OPERATORS - mode -> union mode */
A68_CHAR  IXBAAAA;  /* YIELD */
A68_71  JXBAAAA;  /* OPERATORS - simple index */
A68_INT  KXBAAAA;  /* YIELD */
A68_273  LXBAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  MXBAAAA;  /* YIELD */
A68_273  NXBAAAA;  /* OPERATORS - mode -> union mode */
A68_CHAR  OXBAAAA;  /* YIELD */
A68_71  PXBAAAA;  /* OPERATORS - simple index */
A68_INT  QXBAAAA;  /* YIELD */
A68_273  RXBAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  SXBAAAA;  /* YIELD */
A68_273  TXBAAAA;  /* OPERATORS - mode -> union mode */
A68_CHAR  UXBAAAA;  /* YIELD */
A68_274  VXBAAAA;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(printcursec);
QWBAAAA = '[' ;
OWBAAAA.data[0] = A_UNITE(PWBAAAA,mode2,2,QWBAAAA);
if ( ((*(&(GFAAAAA_web->Fnum)))>0) )
{ 
TWBAAAA = (*(&(GFAAAAA_web->Fnum))) ;
XPBAASP_whole( A_UNITE(SWBAAAA,mode2,2,TWBAAAA), 0, &UWBAAAA );
WWBAAAA = A_RC_PLUS(A_HARR(RWBAAAA,'I',A68_CHAR ),UWBAAAA) ;
OWBAAAA.data[1] = A_UNITE(VWBAAAA,mode1,1,WWBAAAA);
} 
else
{ 
 /* line 137: */
XWBAAAA = (GFAAAAA_web->Sec) ;
YWBAAAA = 1 ;
AXBAAAA = (*(&A_R1INDEX(XWBAAAA,YWBAAAA))) ;
OWBAAAA.data[1] = A_UNITE(ZWBAAAA,mode3,3,AXBAAAA);
} 
CXBAAAA = '.' ;
OWBAAAA.data[2] = A_UNITE(BXBAAAA,mode2,2,CXBAAAA);
DXBAAAA = (GFAAAAA_web->Sec) ;
EXBAAAA = 2 ;
GXBAAAA = (*(&A_R1INDEX(DXBAAAA,EXBAAAA))) ;
OWBAAAA.data[3] = A_UNITE(FXBAAAA,mode3,3,GXBAAAA);
IXBAAAA = '.' ;
OWBAAAA.data[4] = A_UNITE(HXBAAAA,mode2,2,IXBAAAA);
JXBAAAA = (GFAAAAA_web->Sec) ;
KXBAAAA = 3 ;
MXBAAAA = (*(&A_R1INDEX(JXBAAAA,KXBAAAA))) ;
OWBAAAA.data[5] = A_UNITE(LXBAAAA,mode3,3,MXBAAAA);
OXBAAAA = '.' ;
OWBAAAA.data[6] = A_UNITE(NXBAAAA,mode2,2,OXBAAAA);
PXBAAAA = (GFAAAAA_web->Sec) ;
QXBAAAA = 4 ;
SXBAAAA = (*(&A_R1INDEX(PXBAAAA,QXBAAAA))) ;
OWBAAAA.data[7] = A_UNITE(RXBAAAA,mode3,3,SXBAAAA);
UXBAAAA = ']' ;
OWBAAAA.data[8] = A_UNITE(TXBAAAA,mode2,2,UXBAAAA);
ANBAAAA_printout(A_HIS1ARR(VXBAAAA,OWBAAAA,A68_273 ,9));
A_PROC_EXIT(printcursec);
return;
} 
#undef NL

A_STATIC A68_VOID  XXBAAAA_maketext(A68_71  Cursec, A68_237  *ReturnedValue)
{ 
A68_226  ZXBAAAA_generator;   /* proc value of non-global proc */
A68_71  FYBAAAA;  /* avoid structure result */
A68_71  EYBAAAA_cs;
A68_INT  GYBAAAA;  /* YIELD */
A68_INT * HYBAAAA;  /* YIELD */
A68_237  IYBAAAA;  /* collateral clause result */
A68_238  JYBAAAA;  /* OPERATORS - mode -> union mode */
A68_237  KYBAAAA;  /* clause result */
A_PROC_ENTRY(maketext);
{ 
A_CLOSURE( ZXBAAAA_generator, AYBAAAA_generator, BYBAAAA_generator );
A_CALLPROC(ZXBAAAA_generator,(A68_TRUE, &FYBAAAA),(A68_TRUE, &FYBAAAA,(ZXBAAAA_generator).nonlocals));
EYBAAAA_cs = FYBAAAA;
A_R1ASSIGN2(Cursec,EYBAAAA_cs,A68_INT );
 /* line 139: */
if ( ((*(&(GFAAAAA_web->Next)))!=KDAAAAA_nostream) )
{ 
GYBAAAA = 1 ;
HYBAAAA = (&A_R1INDEX(EYBAAAA_cs,GYBAAAA)) ;
(*HYBAAAA) = (-(*(&(GFAAAAA_web->Fnum))));
} 
IYBAAAA.Text = A_UNITE(JYBAAAA,mode2,2,EYBAAAA_cs);
IYBAAAA.Next = QDAAAAA_notext;
KYBAAAA = IYBAAAA;
} 
A_PROC_EXIT(maketext);
*ReturnedValue = (KYBAAAA);
return;
} 
#undef NL

A_STATIC A68_239 * PYBAAAA_addmoduletag(A68_239 ** Root, A68_RC  S, A68_BOOL  Adding, A68_BOOL  Prefix)
{ 
A68_239 * QYBAAAA;  /* clause result */
A68_240  RYBAAAA;  /* collateral clause result */
A68_237 ** SYBAAAA;  /* YIELD */
A68_237 ** TYBAAAA;  /* YIELD */
A68_239  UYBAAAA;  /* avoid structure result */
A68_239 * VYBAAAA;  /* staticpart generator */
A68_237 *** WYBAAAA;  /* YIELD */
A68_32 * XYBAAAA;  /* YIELD */
A68_RC  YYBAAAA;  /* OPERATORS - trim index */
A68_RC  ZYBAAAA_pref;
A68_BOOL  AZBAAAA;  /* clause result */
A_PROC_ENTRY(addmoduletag);
 /* line 141: */
if ( ((*Root)==NDAAAAA_nomod) )
{ 
if ( Prefix )
{ 
QYBAAAA = NDAAAAA_nomod;
} 
else
{ 
if ( Adding )
{ 
 /* line 142: */
RYBAAAA.Id = S;
SYBAAAA = A_HEAP(A68_237 *) ;
(*SYBAAAA) = QDAAAAA_notext ;
RYBAAAA.Textbeg = SYBAAAA;
TYBAAAA = A_HEAP(A68_237 *) ;
(*TYBAAAA) = QDAAAAA_notext ;
RYBAAAA.Textend = TYBAAAA;
RYBAAAA.Left = NDAAAAA_nomod;
RYBAAAA.Right = NDAAAAA_nomod;
A_CALLPROC(LBAAAAA_anonymous,(A68_FALSE, &UYBAAAA),(A68_FALSE, &UYBAAAA,(LBAAAAA_anonymous).nonlocals));
(*Root) = FGBAAAA_assignment(A_HEAP_STATIC(A68_239 ,VYBAAAA,UYBAAAA), RYBAAAA);
 /* line 143: */
WYBAAAA = (&((*Root)->Textend)) ;
(*WYBAAAA) = (*(&((*Root)->Textbeg)));
QYBAAAA = (*Root);
} 
else
{ 
QYBAAAA = NDAAAAA_nomod;
} 
} 
} 
else
{ 
if ( (S.dim[0].upb>(*(&((*Root)->Id))).dim[0].upb) )
{ 
 /* line 144: */
if ( A_RC_LT(S,(*(&((*Root)->Id)))) )
{ 
QYBAAAA = PYBAAAA_addmoduletag((&((*Root)->Left)), S, Adding, Prefix);
} 
else
{ 
 /* line 145: */
QYBAAAA = PYBAAAA_addmoduletag((&((*Root)->Right)), S, Adding, Prefix);
} 
} 
else
{ 
if ( Prefix )
{ 
{ 
 /* line 146: */
XYBAAAA = (&((*Root)->Id)) ;
ZYBAAAA_pref = A_R1TRIM(YYBAAAA,(*XYBAAAA),A_RTSCRIPT(&(YYBAAAA.dim[0]),&((*XYBAAAA).dim[0]),(*XYBAAAA).dim[0].lwb,S.dim[0].upb,1));
AZBAAAA = A_RC_EQ(S,ZYBAAAA_pref);
if ( AZBAAAA )
{ 
 /* line 147: */
if ( ((PYBAAAA_addmoduletag((&((*Root)->Left)), S, !A68_TRUE, Prefix)==NDAAAAA_nomod)&(PYBAAAA_addmoduletag((&((*Root)->Right)), S, !A68_TRUE, Prefix)==NDAAAAA_nomod)) )
{ 
QYBAAAA = (*Root);
} 
else
{ 
 /* line 148: */
QYBAAAA = NDAAAAA_nomod;
} 
} 
else
{ 
if ( A_RC_LT(S,ZYBAAAA_pref) )
{ 
QYBAAAA = PYBAAAA_addmoduletag((&((*Root)->Left)), S, Adding, Prefix);
} 
else
{ 
 /* line 149: */
QYBAAAA = PYBAAAA_addmoduletag((&((*Root)->Right)), S, Adding, Prefix);
} 
} 
} 
} 
else
{ 
if ( A_RC_EQ(S,(*(&((*Root)->Id)))) )
{ 
QYBAAAA = (*Root);
} 
else
{ 
 /* line 150: */
if ( A_RC_LT(S,(*(&((*Root)->Id)))) )
{ 
QYBAAAA = PYBAAAA_addmoduletag((&((*Root)->Left)), S, Adding, Prefix);
} 
else
{ 
 /* line 151: */
QYBAAAA = PYBAAAA_addmoduletag((&((*Root)->Right)), S, Adding, Prefix);
} 
} 
} 
} 
} 
A_PROC_EXIT(addmoduletag);
return( QYBAAAA );
} 
#undef NL
 /* line 152: */

A_STATIC A68_229 * DZBAAAA_addtag(A68_264  Root, A68_229 * Tag)
{ 
A68_298  PZBAAAA_locaddtag;   /* proc value of non-global proc */
A68_229 * TZBAAAA;  /* clause result */
A68_INT  UZBAAAA;  /* YIELD */
A_PROC_ENTRY(addtag);
{ 
A_CLOSURE( PZBAAAA_locaddtag, QZBAAAA_locaddtag, RZBAAAA_locaddtag );
(( RZBAAAA_locaddtag * ) ( PZBAAAA_locaddtag.nonlocals )) -> PZBAAAA_locaddtag = PZBAAAA_locaddtag;
UZBAAAA = GZBAAAA_hash((*(&(Tag->S)))) ;
TZBAAAA = A_CALLPROC(PZBAAAA_locaddtag,((&A_R1INDEX(Root,UZBAAAA)), Tag),((&A_R1INDEX(Root,UZBAAAA)), Tag,(PZBAAAA_locaddtag).nonlocals));
} 
A_PROC_EXIT(addtag);
return( TZBAAAA );
} 
#undef NL

A_STATIC A68_242 * YZBAAAA_addmacroid(A68_242 ** Root, A68_229 * Tag, A68_BOOL  Once)
{ 
A68_242  ZZBAAAA;  /* collateral clause result */
A68_237 ** AACAAAA;  /* YIELD */
A68_237 ** BACAAAA;  /* YIELD */
A68_242 * CACAAAA;  /* YIELD */
A68_237 *** DACAAAA;  /* YIELD */
A68_242 * EACAAAA;  /* clause result */
A_PROC_ENTRY(addmacroid);
 /* line 157: */
if ( ((*Root)==MDAAAAA_nomac) )
{ 
ZZBAAAA.Id = Tag;
ZZBAAAA.Flags = (A68_BITS )(Once);
 /* line 158: */
ZZBAAAA.Param = ODAAAAA_nowparam;
AACAAAA = A_HEAP(A68_237 *) ;
(*AACAAAA) = QDAAAAA_notext ;
ZZBAAAA.Textbeg = AACAAAA;
BACAAAA = A_HEAP(A68_237 *) ;
(*BACAAAA) = QDAAAAA_notext ;
ZZBAAAA.Textend = BACAAAA;
ZZBAAAA.Left = MDAAAAA_nomac;
ZZBAAAA.Right = MDAAAAA_nomac;
CACAAAA = A_HEAP(A68_242 ) ;
(*CACAAAA) = ZZBAAAA ;
(*Root) = CACAAAA;
DACAAAA = (&((*Root)->Textend)) ;
(*DACAAAA) = (*(&((*Root)->Textbeg)));
 /* line 159: */
EACAAAA = (*Root);
} 
else
{ 
if ( A_RC_EQ((*(&(Tag->S))),(*(&((*(&((*Root)->Id)))->S)))) )
{ 
EACAAAA = MDAAAAA_nomac;
} 
else
{ 
 /* line 160: */
if ( A_RC_LT((*(&(Tag->S))),(*(&((*(&((*Root)->Id)))->S)))) )
{ 
EACAAAA = YZBAAAA_addmacroid((&((*Root)->Left)), Tag, Once);
} 
else
{ 
 /* line 161: */
EACAAAA = YZBAAAA_addmacroid((&((*Root)->Right)), Tag, Once);
} 
} 
} 
A_PROC_EXIT(addmacroid);
return( EACAAAA );
} 
#undef NL

A_STATIC A68_BOOL  HACAAAA_addmacropar(A68_242 * Rm, A68_229 * Par)
{ 
A68_241  IACAAAA;  /* collateral clause result */
A68_241 * JACAAAA;  /* YIELD */
A68_241 ** KACAAAA;  /* YIELD */
A68_BOOL  LACAAAA;  /* clause result */
A68_241 ** MACAAAA_locpar;
A68_BOOL  NACAAAA;  /* clause result */
A68_BOOL  OACAAAA;  /* clause result */
A68_BOOL  PACAAAA;  /* clause result */
A68_241  QACAAAA;  /* collateral clause result */
A68_241 * RACAAAA;  /* YIELD */
A_PROC_ENTRY(addmacropar);
 /* line 162: */
if ( ((*(&(Rm->Param)))==ODAAAAA_nowparam) )
{ 
IACAAAA.Par = Par;
IACAAAA.Next = ODAAAAA_nowparam;
JACAAAA = A_HEAP(A68_241 ) ;
(*JACAAAA) = IACAAAA ;
KACAAAA = (&(Rm->Param)) ;
(*KACAAAA) = JACAAAA;
 /* line 163: */
LACAAAA = A68_TRUE;
} 
else
{ 
{ 
MACAAAA_locpar = (&(Rm->Param));
for ( ;; )
{ 
if ( ((*MACAAAA_locpar)!=ODAAAAA_nowparam) )
{ 
 /* line 164: */
NACAAAA = A_RC_NE((*(&(Par->S))),(*(&((*(&((*MACAAAA_locpar)->Par)))->S))));
} 
else
{ 
NACAAAA = A68_FALSE;
} 
OACAAAA = NACAAAA;
if ( !OACAAAA ) break;
MACAAAA_locpar = (&((*MACAAAA_locpar)->Next));
}
 /* line 165: */
PACAAAA = ((*MACAAAA_locpar)==ODAAAAA_nowparam);
if ( PACAAAA )
{ 
QACAAAA.Par = Par;
QACAAAA.Next = ODAAAAA_nowparam;
RACAAAA = A_HEAP(A68_241 ) ;
(*RACAAAA) = QACAAAA ;
(*MACAAAA_locpar) = RACAAAA;
LACAAAA = A68_TRUE;
} 
else
{ 
LACAAAA = A68_FALSE;
} 
} 
} 
A_PROC_EXIT(addmacropar);
return( LACAAAA );
} 
#undef NL

A_STATIC A68_VOID  UACAAAA_addmactext(A68_242 * Rmc, A68_237  T)
{ 
A68_237 ** VACAAAA;  /* clause result */
A68_237 *** MBCAAAA;  /* YIELD */
A_PROC_ENTRY(addmactext);
 /* line 167: */
{ 
if ( ((*(*(&(Rmc->Textbeg))))==QDAAAAA_notext) )
{ 
VACAAAA = (*(&(Rmc->Textbeg)));
} 
else
{ 
VACAAAA = (*(&(Rmc->Textend)));
} 
(*VACAAAA) = YACAAAA_assignment(A_HEAP(A68_237 ), T);
 /* line 168: */
MBCAAAA = (&(Rmc->Textend)) ;
(*MBCAAAA) = (&((*(*(&(Rmc->Textend))))->Next));
} 
A_PROC_EXIT(addmactext);
return;
} 
#undef NL

A_STATIC A68_VOID  PBCAAAA_addmodtext(A68_239 * Rmd, A68_237  T)
{ 
A68_237 ** QBCAAAA;  /* clause result */
A68_237 *** RBCAAAA;  /* YIELD */
A_PROC_ENTRY(addmodtext);
{ 
if ( ((*(*(&(Rmd->Textbeg))))==QDAAAAA_notext) )
{ 
 /* line 170: */
QBCAAAA = (*(&(Rmd->Textbeg)));
} 
else
{ 
QBCAAAA = (*(&(Rmd->Textend)));
} 
(*QBCAAAA) = YACAAAA_assignment(A_HEAP(A68_237 ), T);
RBCAAAA = (&(Rmd->Textend)) ;
(*RBCAAAA) = (&((*(*(&(Rmd->Textend))))->Next));
} 
A_PROC_EXIT(addmodtext);
return;
} 
#undef NL

A_STATIC A68_242 * UBCAAAA_searchmacro(A68_242 ** Root, A68_229 * T)
{ 
A68_242 * VBCAAAA;  /* clause result */
A_PROC_ENTRY(searchmacro);
 /* line 172: */
if ( ((*Root)==MDAAAAA_nomac) )
{ 
VBCAAAA = MDAAAAA_nomac;
} 
else
{ 
if ( A_RC_EQ((*(&(T->S))),(*(&((*(&((*Root)->Id)))->S)))) )
{ 
VBCAAAA = (*Root);
} 
else
{ 
 /* line 173: */
if ( A_RC_LT((*(&(T->S))),(*(&((*(&((*Root)->Id)))->S)))) )
{ 
VBCAAAA = UBCAAAA_searchmacro((&((*Root)->Left)), T);
} 
else
{ 
VBCAAAA = UBCAAAA_searchmacro((&((*Root)->Right)), T);
} 
} 
} 
A_PROC_EXIT(searchmacro);
return( VBCAAAA );
} 
#undef NL

A_STATIC A68_VOID  YBCAAAA_putout(A68_224 * St, A68_307  P)
{ 
A68_INT  SCCAAAA_i;
A68_INT  TCCAAAA;  /* to part of loop */
A68_306  UCCAAAA;  /* united object - for case conformity */
A68_CHAR  VCCAAAA_ci;
A68_RC  WCCAAAA;  /* clause result */
A68_RC  XCCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  YCCAAAA_si;
A68_INT  ZCCAAAA;  /* YIELD */
A68_CHAR  ADCAAAA_sil;
A68_BOOL  BDCAAAA;  /* clause result */
A68_RC  CDCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  DDCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  EDCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  FDCAAAA;  /* clause result */
A68_RC  GDCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  HDCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IDCAAAA_ni;
A68_RC  JDCAAAA;  /* clause result */
A68_RC  KDCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  NDCAAAA;  /* YIELD */
A68_187  QDCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  RDCAAAA;  /* avoid structure result */
A68_71  SDCAAAA_ri;
A68_INT  TDCAAAA;  /* YIELD */
A68_RC  UDCAAAA;  /* clause result */
A68_RC  VDCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  YDCAAAA;  /* YIELD */
A68_INT  ZDCAAAA;  /* ADICOPS - ABS INT */
A68_187  AECAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  BECAAAA;  /* YIELD */
A68_RC  CECAAAA;  /* avoid structure result */
A68_RC  DECAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  EECAAAA;  /* YIELD */
A68_187  FECAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  GECAAAA;  /* YIELD */
A68_RC  HECAAAA;  /* avoid structure result */
A68_RC  IECAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  JECAAAA;  /* YIELD */
A68_187  KECAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  LECAAAA;  /* YIELD */
A68_RC  MECAAAA;  /* avoid structure result */
A68_RC  NECAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  OECAAAA;  /* YIELD */
A68_187  PECAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  QECAAAA;  /* YIELD */
A68_RC  RECAAAA;  /* avoid structure result */
A68_229 * SECAAAA_ti;
A68_RC  TECAAAA;  /* clause result */
A68_RC  UECAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  XECAAAA_outs;
A68_RC  YECAAAA;  /* OPERATORS - trim index */
A68_RC  ZECAAAA;  /* OPERATORS - trim index */
A68_RC  AFCAAAA;  /* YIELD */
A68_INT * BFCAAAA;  /* YIELD */
A_PROC_ENTRY(putout);
 /* line 175: */
{ 
TCCAAAA = P.dim[0].upb;
for ( SCCAAAA_i = P.dim[0].lwb;
SCCAAAA_i <= TCCAAAA;
SCCAAAA_i += 1 )
{ 
 /* line 178: */
UCCAAAA = A_R1INDEX(P,SCCAAAA_i) ;
switch ( UCCAAAA.mode )
{ 
case 1: /* CHAR */
VCCAAAA_ci = (UCCAAAA.data.mode1);
WCCAAAA = A_HARR(XCCAAAA,VCCAAAA_ci,A68_CHAR );
break;
case 2: /* [] CHAR */
YCCAAAA_si = (UCCAAAA.data.mode2);
{ 
ZCCAAAA = YCCAAAA_si.dim[0].lwb ;
ADCAAAA_sil = A_R1INDEX(YCCAAAA_si,ZCCAAAA);
 /* line 179: */
BDCAAAA = (QGBAAAA_tagoutput&(((ADCAAAA_sil>='0')&(ADCAAAA_sil<='9'))|(ADCAAAA_sil=='.')));
if ( BDCAAAA )
{ 
QGBAAAA_tagoutput = A68_FALSE;
WCCAAAA = A_RC_PLUS(A_RC_PLUS(A_HARR(CDCAAAA,NUAAASP_blank,A68_CHAR ),YCCAAAA_si),A_HARR(DDCAAAA,NUAAASP_blank,A68_CHAR ));
} 
else
{ 
 /* line 180: */
if ( (((ADCAAAA_sil>='0')&(ADCAAAA_sil<='9'))|(ADCAAAA_sil=='.')) )
{ 
WCCAAAA = A_RC_PLUS(YCCAAAA_si,A_HARR(EDCAAAA,NUAAASP_blank,A68_CHAR ));
} 
else
{ 
QGBAAAA_tagoutput = A68_FALSE;
FDCAAAA = A_RC_EQ(YCCAAAA_si,A_HARR(GDCAAAA,'=',A68_CHAR ));
if ( FDCAAAA )
{ 
 /* line 181: */
WCCAAAA = A_RC_PLUS(A_HARR(HDCAAAA,NUAAASP_blank,A68_CHAR ),YCCAAAA_si);
} 
else
{ 
WCCAAAA = YCCAAAA_si;
} 
} 
} 
} 
break;
case 3: /* INT */
IDCAAAA_ni = (UCCAAAA.data.mode3);
switch ( (2+A_SIGN(IDCAAAA_ni)) )
{ 
case 1: 
if ( QGBAAAA_tagoutput )
{ 
JDCAAAA = A_HARR(KDCAAAA,NUAAASP_blank,A68_CHAR );
} 
else
{ 
QGBAAAA_tagoutput = A68_TRUE;
 /* line 182: */
JDCAAAA = MDCAAAA;
} 
NDCAAAA = A_ABS(IDCAAAA_ni) ;
WCCAAAA = A_RC_PLUS(JDCAAAA,(*(&A_R1INDEX(NGAAAAA_boldsym,NDCAAAA))));
break;
case 2: 
{ 
BCCAAAA_emptythebuffer(St);
QGBAAAA_tagoutput = A68_FALSE;
WCCAAAA = PDCAAAA;
} 
break;
case 3: 
{ 
 /* line 183: */
QGBAAAA_tagoutput = A68_FALSE;
XPBAASP_whole( A_UNITE(QDCAAAA,mode2,2,IDCAAAA_ni), 0, &RDCAAAA );
WCCAAAA = RDCAAAA;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 4: /* [] INT */
SDCAAAA_ri = (UCCAAAA.data.mode4);
{ 
QGBAAAA_tagoutput = A68_FALSE;
TDCAAAA = 1 ;
if ( (A_R1INDEX(SDCAAAA_ri,TDCAAAA)<0) )
{ 
UDCAAAA = A_HARR(VDCAAAA,'I',A68_CHAR );
} 
else
{ 
UDCAAAA = XDCAAAA;
} 
 /* line 184: */
 /* line 185: */
YDCAAAA = 1 ;
ZDCAAAA = A_R1INDEX(SDCAAAA_ri,YDCAAAA) ;
BECAAAA = A_ABS(ZDCAAAA) ;
XPBAASP_whole( A_UNITE(AECAAAA,mode2,2,BECAAAA), 0, &CECAAAA );
EECAAAA = 2 ;
GECAAAA = A_R1INDEX(SDCAAAA_ri,EECAAAA) ;
XPBAASP_whole( A_UNITE(FECAAAA,mode2,2,GECAAAA), 0, &HECAAAA );
JECAAAA = 3 ;
LECAAAA = A_R1INDEX(SDCAAAA_ri,JECAAAA) ;
XPBAASP_whole( A_UNITE(KECAAAA,mode2,2,LECAAAA), 0, &MECAAAA );
OECAAAA = 4 ;
QECAAAA = A_R1INDEX(SDCAAAA_ri,OECAAAA) ;
XPBAASP_whole( A_UNITE(PECAAAA,mode2,2,QECAAAA), 0, &RECAAAA );
WCCAAAA = A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(UDCAAAA,CECAAAA),A_HARR(DECAAAA,'.',A68_CHAR )),HECAAAA),A_HARR(IECAAAA,'.',A68_CHAR )),MECAAAA),A_HARR(NECAAAA,'.',A68_CHAR )),RECAAAA);
} 
break;
case 5: /* REF STRUCT(MODE32,REF MODE229,REF MODE229)  */
SECAAAA_ti = (UCCAAAA.data.mode5);
if ( QGBAAAA_tagoutput )
{ 
TECAAAA = A_HARR(UECAAAA,NUAAASP_blank,A68_CHAR );
} 
else
{ 
QGBAAAA_tagoutput = A68_TRUE;
TECAAAA = WECAAAA;
} 
WCCAAAA = A_RC_PLUS(TECAAAA,(*(&(SECAAAA_ti->S))));
break;
default: 
A_IMP_SKIP ;
break;
} 
XECAAAA_outs = WCCAAAA;
 /* line 186: */
if ( (((*(&(St->Upb)))+XECAAAA_outs.dim[0].upb)>80) )
{ 
BCCAAAA_emptythebuffer(St);
} 
 /* line 187: */
YECAAAA = (St->B) ;
AFCAAAA = A_R1TRIM(ZECAAAA,(YECAAAA),A_RTSCRIPT(&(ZECAAAA.dim[0]),&((YECAAAA).dim[0]),((*(&(St->Upb)))+1),((*(&(St->Upb)))+XECAAAA_outs.dim[0].upb),1)) ;
A_R1ASSIGN2(XECAAAA_outs,AFCAAAA,A68_CHAR );
BFCAAAA = (&(St->Upb)) ;
(*BFCAAAA)+=XECAAAA_outs.dim[0].upb;
}
} 
A_PROC_EXIT(putout);
return;
} 
#undef NL

A_STATIC A68_BOOL  EFCAAAA_expandmacro(A68_237 ** Txt, A68_242 * Mc)
{ 
A68_237 * FFCAAAA_newtext;
A68_237 * GFCAAAA_locmactext;
A68_237 ** HFCAAAA_locnewtext;
A68_BOOL  IFCAAAA;  /* clause result */
A68_BOOL  JFCAAAA;  /* clause result */
A68_238  KFCAAAA;  /* united object - for case conformity */
A68_BOOL  LFCAAAA;  /* clause result */
A68_BOOL  MFCAAAA;  /* clause result */
A68_237  NFCAAAA;  /* collateral clause result */
A68_BOOL  OFCAAAA;  /* clause result */
A68_312 * RFCAAAA_actualparam;
A68_241 ** SFCAAAA_locformalparam;
A68_312 ** TFCAAAA_locactualparam;
A68_312  UFCAAAA;  /* collateral clause result */
A68_312 * VFCAAAA;  /* YIELD */
A68_238  WFCAAAA;  /* united object - for case conformity */
A68_RC  XFCAAAA_s;
A68_RC  YFCAAAA;  /* clause result */
A68_BOOL  BGCAAAA;  /* clause result */
A68_RC  CGCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  DGCAAAA;  /* OPERATORS - mode -> union mode */
A68_49  EGCAAAA;  /* procedure value */
A68_214  FGCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  GGCAAAA;  /* collateral clause result */
A68_273  JGCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  KGCAAAA;  /* YIELD */
A68_273  RGCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  SGCAAAA;  /* YIELD */
A68_274  TGCAAAA;  /* OPERATORS - istruct to row */
A68_237 ** UGCAAAA_loctext;
A68_BOOL  VGCAAAA;  /* clause result */
A68_238  WGCAAAA;  /* united object - for case conformity */
A68_BOOL  XGCAAAA;  /* clause result */
A68_BOOL  YGCAAAA;  /* clause result */
A68_INT  ZGCAAAA_level;
A68_237 ** AHCAAAA;  /* YIELD */
A68_238  BHCAAAA;  /* united object - for case conformity */
A68_RC  CHCAAAA_s;
A68_RC  DHCAAAA;  /* clause result */
A68_RC  GHCAAAA_curtxt;
A68_238  HHCAAAA;  /* united object - for case conformity */
A68_BOOL  IHCAAAA;  /* clause result */
A68_BOOL  JHCAAAA;  /* clause result */
A68_RC  KHCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  LHCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  MHCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  NHCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_238  OHCAAAA;  /* united object - for case conformity */
A68_BOOL  PHCAAAA;  /* clause result */
A68_215  QHCAAAA;  /* OPERATORS - mode -> union mode */
A68_49  RHCAAAA;  /* procedure value */
A68_214  SHCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  THCAAAA;  /* collateral clause result */
A68_273  WHCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  XHCAAAA;  /* YIELD */
A68_273  AICAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  BICAAAA;  /* YIELD */
A68_274  CICAAAA;  /* OPERATORS - istruct to row */
A68_238  DICAAAA;  /* united object - for case conformity */
A68_RC  EICAAAA_s;
A68_RC  FICAAAA;  /* clause result */
A68_BOOL  IICAAAA;  /* clause result */
A68_RC  JICAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  KICAAAA;  /* collateral clause result */
A68_273  LICAAAA;  /* OPERATORS - mode -> union mode */
A68_273  OICAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  PICAAAA;  /* YIELD */
A68_274  QICAAAA;  /* OPERATORS - istruct to row */
A68_238  RICAAAA;  /* united object - for case conformity */
A68_RC  SICAAAA_s;
A68_RC  TICAAAA;  /* clause result */
A68_BOOL  WICAAAA;  /* clause result */
A68_RC  XICAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  YICAAAA;  /* collateral clause result */
A68_273  ZICAAAA;  /* OPERATORS - mode -> union mode */
A68_273  CJCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  DJCAAAA;  /* YIELD */
A68_274  EJCAAAA;  /* OPERATORS - istruct to row */
A68_237 ** FJCAAAA_tmptext;
A68_238  GJCAAAA;  /* united object - for case conformity */
A68_229 * HJCAAAA_tag;
A68_BOOL  IJCAAAA;  /* clause result */
A68_BOOL  JJCAAAA;  /* clause result */
A68_BOOL  KJCAAAA;  /* clause result */
A68_237  LJCAAAA;  /* collateral clause result */
A68_237 ** MJCAAAA_locactualparamtext;
A68_237  NJCAAAA;  /* collateral clause result */
A_PROC_ENTRY(expandmacro);
{ 
FFCAAAA_newtext = QDAAAAA_notext;
 /* line 189: */
GFCAAAA_locmactext = (*(*(&(Mc->Textbeg))));
HFCAAAA_locnewtext = (&FFCAAAA_newtext);
IFCAAAA = ((*(&(Mc->Param)))==ODAAAAA_nowparam);
if ( IFCAAAA )
{ 
for ( ;; )
{ 
 /* line 190: */
if ( (GFCAAAA_locmactext==QDAAAAA_notext) )
{ 
JFCAAAA = A68_FALSE;
} 
else
{ 
KFCAAAA = (*(&(GFCAAAA_locmactext->Text))) ;
switch ( KFCAAAA.mode )
{ 
case 5: /* VOID */
LFCAAAA = A68_TRUE;
break;
default: 
 /* line 191: */
LFCAAAA = A68_FALSE;
break;
} 
JFCAAAA = !LFCAAAA;
} 
MFCAAAA = JFCAAAA;
if ( !MFCAAAA ) break;
NFCAAAA.Text = (*(&(GFCAAAA_locmactext->Text)));
NFCAAAA.Next = QDAAAAA_notext;
(*HFCAAAA_locnewtext) = YACAAAA_assignment(A_HEAP(A68_237 ), NFCAAAA);
 /* line 192: */
HFCAAAA_locnewtext = (&((*HFCAAAA_locnewtext)->Next));
GFCAAAA_locmactext = (*(&(GFCAAAA_locmactext->Next)));
}
 /* line 193: */
(*HFCAAAA_locnewtext) = (*(&((*Txt)->Next)));
(*Txt) = FFCAAAA_newtext;
OFCAAAA = A68_FALSE;
} 
else
{ 
 /* line 194: */
 /* line 195: */
RFCAAAA_actualparam = QFCAAAA_noactual;
SFCAAAA_locformalparam = (&(Mc->Param));
 /* line 196: */
TFCAAAA_locactualparam = (&RFCAAAA_actualparam);
for ( ;; )
{ 
 /* line 197: */
if ( !(((*SFCAAAA_locformalparam)!=ODAAAAA_nowparam)) ) break;
UFCAAAA.Actual = QDAAAAA_notext;
UFCAAAA.Next = QFCAAAA_noactual;
VFCAAAA = A_HEAP(A68_312 ) ;
(*VFCAAAA) = UFCAAAA ;
(*TFCAAAA_locactualparam) = VFCAAAA;
 /* line 198: */
TFCAAAA_locactualparam = (&((*TFCAAAA_locactualparam)->Next));
SFCAAAA_locformalparam = (&((*SFCAAAA_locformalparam)->Next));
}
 /* line 199: */
WFCAAAA = (*(&((*(&((*Txt)->Next)))->Text))) ;
switch ( WFCAAAA.mode )
{ 
case 4: /* [] CHAR */
XFCAAAA_s = (WFCAAAA.data.mode4);
YFCAAAA = XFCAAAA_s;
break;
default: 
YFCAAAA = AGCAAAA;
break;
} 
BGCAAAA = A_RC_NE(YFCAAAA,A_HARR(CGCAAAA,'(',A68_CHAR ));
if ( BGCAAAA )
{ 
{ 
 /* line 200: */
EGCAAAA.fn.fn_global = XTDAASP_newline;
EGCAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(FGCAAAA,A_UNITE(DGCAAAA,mode30,30,EGCAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
KGCAAAA = IGCAAAA ;
GGCAAAA.data[0] = A_UNITE(JGCAAAA,mode1,1,KGCAAAA);
 /* line 201: */
SGCAAAA = A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(OGCAAAA,(*(&((*(&(Mc->Id)))->S)))),PGCAAAA),QGCAAAA) ;
GGCAAAA.data[1] = A_UNITE(RGCAAAA,mode1,1,SGCAAAA);
ANBAAAA_printout(A_HIS1ARR(TGCAAAA,GGCAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
 /* line 202: */
OFCAAAA = A68_TRUE;
} 
else
{ 
UGCAAAA_loctext = (&((*(&((*Txt)->Next)))->Next));
 /* line 203: */
TFCAAAA_locactualparam = (&RFCAAAA_actualparam);
for ( ;; )
{ 
if ( ((*TFCAAAA_locactualparam)==QFCAAAA_noactual) )
{ 
 /* line 204: */
VGCAAAA = A68_FALSE;
} 
else
{ 
WGCAAAA = (*(&((*UGCAAAA_loctext)->Text))) ;
switch ( WGCAAAA.mode )
{ 
case 5: /* VOID */
XGCAAAA = A68_TRUE;
break;
default: 
XGCAAAA = A68_FALSE;
break;
} 
VGCAAAA = !XGCAAAA;
} 
YGCAAAA = VGCAAAA;
if ( !YGCAAAA ) break;
ZGCAAAA_level = 0;
 /* line 205: */
AHCAAAA = (&((*TFCAAAA_locactualparam)->Actual)) ;
(*AHCAAAA) = (*UGCAAAA_loctext);
for ( ;; )
{ 
BHCAAAA = (*(&((*UGCAAAA_loctext)->Text))) ;
switch ( BHCAAAA.mode )
{ 
case 4: /* [] CHAR */
CHCAAAA_s = (BHCAAAA.data.mode4);
DHCAAAA = CHCAAAA_s;
break;
default: 
 /* line 206: */
DHCAAAA = FHCAAAA;
break;
} 
GHCAAAA_curtxt = DHCAAAA;
HHCAAAA = (*(&((*UGCAAAA_loctext)->Text))) ;
switch ( HHCAAAA.mode )
{ 
case 5: /* VOID */
IHCAAAA = A68_TRUE;
break;
default: 
IHCAAAA = A68_FALSE;
break;
} 
 /* line 207: */
JHCAAAA = !(IHCAAAA|((ZGCAAAA_level==0)&(A_RC_EQ(GHCAAAA_curtxt,A_HARR(KHCAAAA,')',A68_CHAR ))|A_RC_EQ(GHCAAAA_curtxt,A_HARR(LHCAAAA,',',A68_CHAR )))));
if ( !JHCAAAA ) break;
if ( A_RC_EQ(GHCAAAA_curtxt,A_HARR(MHCAAAA,'(',A68_CHAR )) )
{ 
ZGCAAAA_level+=1;
} 
else
{ 
if ( A_RC_EQ(GHCAAAA_curtxt,A_HARR(NHCAAAA,')',A68_CHAR )) )
{ 
ZGCAAAA_level-=1;
} 
} 
 /* line 208: */
UGCAAAA_loctext = (&((*UGCAAAA_loctext)->Next));
}
OHCAAAA = (*(&((*UGCAAAA_loctext)->Text))) ;
switch ( OHCAAAA.mode )
{ 
case 5: /* VOID */
PHCAAAA = A68_TRUE;
break;
default: 
PHCAAAA = A68_FALSE;
break;
} 
if ( PHCAAAA )
{ 
{ 
RHCAAAA.fn.fn_global = XTDAASP_newline;
RHCAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(SHCAAAA,A_UNITE(QHCAAAA,mode30,30,RHCAAAA),A68_215 ));
 /* line 209: */
IEAAAAA_consolepos = 0;
XHCAAAA = VHCAAAA ;
THCAAAA.data[0] = A_UNITE(WHCAAAA,mode1,1,XHCAAAA);
BICAAAA = ZHCAAAA ;
THCAAAA.data[1] = A_UNITE(AICAAAA,mode1,1,BICAAAA);
ANBAAAA_printout(A_HIS1ARR(CICAAAA,THCAAAA,A68_273 ,2));
 /* line 210: */
XNBAAAA_error(2);
} 
} 
else
{ 
DICAAAA = (*(&((*UGCAAAA_loctext)->Text))) ;
switch ( DICAAAA.mode )
{ 
case 4: /* [] CHAR */
EICAAAA_s = (DICAAAA.data.mode4);
FICAAAA = EICAAAA_s;
break;
default: 
FICAAAA = HICAAAA;
break;
} 
 /* line 211: */
IICAAAA = (A_RC_EQ(FICAAAA,A_HARR(JICAAAA,')',A68_CHAR ))&((*(&((*TFCAAAA_locactualparam)->Next)))!=QFCAAAA_noactual));
if ( IICAAAA )
{ 
{ 
 /* line 212: */
KICAAAA.data[0] = A_EMPTY(LICAAAA,4);
PICAAAA = NICAAAA ;
KICAAAA.data[1] = A_UNITE(OICAAAA,mode1,1,PICAAAA);
ANBAAAA_printout(A_HIS1ARR(QICAAAA,KICAAAA,A68_273 ,2));
XNBAAAA_error(2);
 /* line 213: */
XICAASP_close((*(&((&JFAAAAA_output)->F))));
ZWBAASP_exit((-1));
} 
} 
else
{ 
RICAAAA = (*(&((*UGCAAAA_loctext)->Text))) ;
switch ( RICAAAA.mode )
{ 
case 4: /* [] CHAR */
SICAAAA_s = (RICAAAA.data.mode4);
TICAAAA = SICAAAA_s;
break;
default: 
TICAAAA = VICAAAA;
break;
} 
 /* line 214: */
WICAAAA = (A_RC_EQ(TICAAAA,A_HARR(XICAAAA,',',A68_CHAR ))&((*(&((*TFCAAAA_locactualparam)->Next)))==QFCAAAA_noactual));
if ( WICAAAA )
{ 
{ 
 /* line 215: */
YICAAAA.data[0] = A_EMPTY(ZICAAAA,4);
DJCAAAA = BJCAAAA ;
YICAAAA.data[1] = A_UNITE(CJCAAAA,mode1,1,DJCAAAA);
ANBAAAA_printout(A_HIS1ARR(EJCAAAA,YICAAAA,A68_273 ,2));
XNBAAAA_error(2);
 /* line 216: */
XICAASP_close((*(&((&JFAAAAA_output)->F))));
ZWBAASP_exit((-1));
} 
} 
else
{ 
FJCAAAA_tmptext = UGCAAAA_loctext;
UGCAAAA_loctext = (&((*UGCAAAA_loctext)->Next));
 /* line 217: */
(*FJCAAAA_tmptext) = QDAAAAA_notext;
TFCAAAA_locactualparam = (&((*TFCAAAA_locactualparam)->Next));
} 
} 
} 
}
 /* line 218: */
for ( ;; )
{ 
if ( !((GFCAAAA_locmactext!=QDAAAAA_notext)) ) break;
GJCAAAA = (*(&(GFCAAAA_locmactext->Text))) ;
switch ( GJCAAAA.mode )
{ 
case 6: /* REF STRUCT(MODE32,REF MODE229,REF MODE229)  */
HJCAAAA_tag = (GJCAAAA.data.mode6);
 /* line 219: */
SFCAAAA_locformalparam = (&(Mc->Param));
TFCAAAA_locactualparam = (&RFCAAAA_actualparam);
for ( ;; )
{ 
 /* line 220: */
if ( ((*SFCAAAA_locformalparam)==ODAAAAA_nowparam) )
{ 
IJCAAAA = A68_FALSE;
} 
else
{ 
IJCAAAA = (HJCAAAA_tag!=(*(&((*SFCAAAA_locformalparam)->Par))));
} 
 /* line 221: */
JJCAAAA = IJCAAAA;
if ( !JJCAAAA ) break;
SFCAAAA_locformalparam = (&((*SFCAAAA_locformalparam)->Next));
 /* line 222: */
TFCAAAA_locactualparam = (&((*TFCAAAA_locactualparam)->Next));
}
KJCAAAA = ((*SFCAAAA_locformalparam)==ODAAAAA_nowparam);
if ( KJCAAAA )
{ 
 /* line 223: */
LJCAAAA.Text = (*(&(GFCAAAA_locmactext->Text)));
LJCAAAA.Next = QDAAAAA_notext;
(*HFCAAAA_locnewtext) = YACAAAA_assignment(A_HEAP(A68_237 ), LJCAAAA);
 /* line 224: */
HFCAAAA_locnewtext = (&((*HFCAAAA_locnewtext)->Next));
} 
else
{ 
MJCAAAA_locactualparamtext = (&((*TFCAAAA_locactualparam)->Actual));
for ( ;; )
{ 
 /* line 225: */
if ( !(((*MJCAAAA_locactualparamtext)!=QDAAAAA_notext)) ) break;
(*HFCAAAA_locnewtext) = YACAAAA_assignment(A_HEAP(A68_237 ), (**MJCAAAA_locactualparamtext));
 /* line 226: */
HFCAAAA_locnewtext = (&((*HFCAAAA_locnewtext)->Next));
MJCAAAA_locactualparamtext = (&((*MJCAAAA_locactualparamtext)->Next));
}
 /* line 227: */
} 
break;
default: 
NJCAAAA.Text = (*(&(GFCAAAA_locmactext->Text)));
NJCAAAA.Next = QDAAAAA_notext;
(*HFCAAAA_locnewtext) = YACAAAA_assignment(A_HEAP(A68_237 ), NJCAAAA);
 /* line 228: */
HFCAAAA_locnewtext = (&((*HFCAAAA_locnewtext)->Next));
break;
} 
GFCAAAA_locmactext = (*(&(GFCAAAA_locmactext->Next)));
}
 /* line 229: */
(*HFCAAAA_locnewtext) = (*UGCAAAA_loctext);
(*Txt) = FFCAAAA_newtext;
OFCAAAA = A68_FALSE;
} 
} 
} 
A_PROC_EXIT(expandmacro);
return( OFCAAAA );
} 
#undef NL

A_STATIC A68_VOID  RJCAAAA_processmodule(A68_224 * St, A68_239 * Mod, A68_71  Cursec)
{ 
A68_215  SJCAAAA;  /* OPERATORS - mode -> union mode */
A68_49  TJCAAAA;  /* procedure value */
A68_214  UJCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_319  VJCAAAA;  /* collateral clause result */
A68_273  YJCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  ZJCAAAA;  /* YIELD */
A68_273  AKCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  BKCAAAA;  /* YIELD */
A68_273  EKCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  FKCAAAA;  /* YIELD */
A68_273  GKCAAAA;  /* OPERATORS - mode -> union mode */
A68_274  HKCAAAA;  /* OPERATORS - istruct to row */
A68_238  IKCAAAA;  /* united object - for case conformity */
A68_71  JKCAAAA_n;
A68_71  KKCAAAA;  /* clause result */
A68_250  LKCAAAA;  /* collateral clause result */
A68_71  MKCAAAA;  /* OPERATORS - istruct to row */
A68_320  NKCAAAA;  /* collateral clause result */
A68_306  OKCAAAA;  /* OPERATORS - mode -> union mode */
A68_CHAR  PKCAAAA;  /* YIELD */
A68_306  QKCAAAA;  /* OPERATORS - mode -> union mode */
A68_306  TKCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  UKCAAAA;  /* YIELD */
A68_307  VKCAAAA;  /* OPERATORS - istruct to row */
A68_237 ** WKCAAAA_loctxt;
A68_238  ZKCAAAA;  /* united object - for case conformity */
A68_INT  ALCAAAA_n;
A68_306  BLCAAAA;  /* OPERATORS - mode -> union mode */
A68_307  CLCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  DLCAAAA;  /* clause result */
A68_71  ELCAAAA_r;
A68_320  FLCAAAA;  /* collateral clause result */
A68_306  ILCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  JLCAAAA;  /* YIELD */
A68_306  KLCAAAA;  /* OPERATORS - mode -> union mode */
A68_306  LLCAAAA;  /* OPERATORS - mode -> union mode */
A68_307  MLCAAAA;  /* OPERATORS - istruct to row */
A68_321  NLCAAAA;  /* collateral clause result */
A68_306  OLCAAAA;  /* OPERATORS - mode -> union mode */
A68_71  PLCAAAA;  /* YIELD */
A68_306  SLCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  TLCAAAA;  /* YIELD */
A68_307  ULCAAAA;  /* OPERATORS - istruct to row */
A68_RC  VLCAAAA_s;
A68_INT  WLCAAAA;  /* YIELD */
A68_306  XLCAAAA;  /* OPERATORS - mode -> union mode */
A68_307  YLCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_306  ZLCAAAA;  /* OPERATORS - mode -> union mode */
A68_307  AMCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_229 * BMCAAAA_t;
A68_306  CMCAAAA;  /* OPERATORS - mode -> union mode */
A68_307  DMCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_242 * EMCAAAA_mc;
A68_INT  FMCAAAA;  /* ADICOPS - ELEM */
A68_INT  GMCAAAA;  /* ADICOPS - ELEM */
A68_BITS * HMCAAAA;  /* YIELD */
A68_306  KMCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  LMCAAAA;  /* YIELD */
A68_307  MMCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_239 * NMCAAAA_md;
A68_226  PMCAAAA_generator;   /* proc value of non-global proc */
A68_71  UMCAAAA;  /* avoid structure result */
A68_232  VMCAAAA_c;
A68_215  WMCAAAA;  /* OPERATORS - mode -> union mode */
A68_49  XMCAAAA;  /* procedure value */
A68_214  YMCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  ZMCAAAA;  /* collateral clause result */
A68_273  CNCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  DNCAAAA;  /* YIELD */
A68_VC  HNCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JNCAAAA;  /* YIELD */
A68_RC  KNCAAAA;  /* OPERATORS - vector -> row */
A68_RC  LNCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_273  MNCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  NNCAAAA;  /* YIELD */
A68_274  ONCAAAA;  /* OPERATORS - istruct to row */
A68_320  PNCAAAA;  /* collateral clause result */
A68_306  SNCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  TNCAAAA;  /* YIELD */
A68_306  UNCAAAA;  /* OPERATORS - mode -> union mode */
A68_306  XNCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  YNCAAAA;  /* YIELD */
A68_307  ZNCAAAA;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(processmodule);
 /* line 231: */
if ( ((*(*(&(Mod->Textbeg))))==QDAAAAA_notext) )
{ 
{ 
TJCAAAA.fn.fn_global = XTDAASP_newline;
TJCAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(UJCAAAA,A_UNITE(SJCAAAA,mode30,30,TJCAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 232: */
ZJCAAAA = XJCAAAA ;
VJCAAAA.data[0] = A_UNITE(YJCAAAA,mode1,1,ZJCAAAA);
BKCAAAA = (*(&(Mod->Id))) ;
VJCAAAA.data[1] = A_UNITE(AKCAAAA,mode1,1,BKCAAAA);
FKCAAAA = DKCAAAA ;
VJCAAAA.data[2] = A_UNITE(EKCAAAA,mode1,1,FKCAAAA);
VJCAAAA.data[3] = A_EMPTY(GKCAAAA,4);
ANBAAAA_printout(A_HIS1ARR(HKCAAAA,VJCAAAA,A68_273 ,4));
XNBAAAA_error(1);
} 
} 
else
{ 
 /* line 233: */
IKCAAAA = (*(&((*(*(&(Mod->Textbeg))))->Text))) ;
switch ( IKCAAAA.mode )
{ 
case 2: /* [] INT */
JKCAAAA_n = (IKCAAAA.data.mode2);
KKCAAAA = JKCAAAA_n;
break;
default: 
LKCAAAA.data[0] = 0;
LKCAAAA.data[1] = 0;
LKCAAAA.data[2] = 0;
LKCAAAA.data[3] = 0;
KKCAAAA = A_HIS1ARR(MKCAAAA,LKCAAAA,A68_INT ,4);
break;
} 
A_R1ASSIGN2(KKCAAAA,Cursec,A68_INT );
PKCAAAA = '#' ;
NKCAAAA.data[0] = A_UNITE(OKCAAAA,mode1,1,PKCAAAA);
NKCAAAA.data[1] = A_UNITE(QKCAAAA,mode4,4,Cursec);
UKCAAAA = SKCAAAA ;
NKCAAAA.data[2] = A_UNITE(TKCAAAA,mode2,2,UKCAAAA);
YBCAAAA_putout(St, A_HIS1ARR(VKCAAAA,NKCAAAA,A68_306 ,3));
 /* line 234: */
WKCAAAA_loctxt = (&((*(*(&(Mod->Textbeg))))->Next));
for ( ;; )
{ 
 /* line 235: */
if ( !(((*WKCAAAA_loctxt)!=QDAAAAA_notext)) ) break;
A_CALLPROC(AEAAAAA_debugprinttext,(YKCAAAA, (**WKCAAAA_loctxt)),(YKCAAAA, (**WKCAAAA_loctxt),(AEAAAAA_debugprinttext).nonlocals));
 /* line 236: */
ZKCAAAA = (*(&((*WKCAAAA_loctxt)->Text))) ;
switch ( ZKCAAAA.mode )
{ 
case 1: /* INT */
ALCAAAA_n = (ZKCAAAA.data.mode1);
{ 
YBCAAAA_putout(St, A_HARR(CLCAAAA,A_UNITE(BLCAAAA,mode3,3,ALCAAAA_n),A68_306 ));
DLCAAAA = A68_TRUE;
} 
break;
case 2: /* [] INT */
ELCAAAA_r = (ZKCAAAA.data.mode2);
{ 
JLCAAAA = HLCAAAA ;
FLCAAAA.data[0] = A_UNITE(ILCAAAA,mode2,2,JLCAAAA);
FLCAAAA.data[1] = A_UNITE(KLCAAAA,mode4,4,Cursec);
FLCAAAA.data[2] = A_UNITE(LLCAAAA,mode1,1,NUAAASP_blank);
YBCAAAA_putout(St, A_HIS1ARR(MLCAAAA,FLCAAAA,A68_306 ,3));
 /* line 237: */
PLCAAAA = A_R1ASSIGN2(ELCAAAA_r,Cursec,A68_INT ) ;
NLCAAAA.data[0] = A_UNITE(OLCAAAA,mode4,4,PLCAAAA);
TLCAAAA = RLCAAAA ;
NLCAAAA.data[1] = A_UNITE(SLCAAAA,mode2,2,TLCAAAA);
YBCAAAA_putout(St, A_HIS1ARR(ULCAAAA,NLCAAAA,A68_306 ,2));
DLCAAAA = A68_TRUE;
} 
break;
case 4: /* [] CHAR */
VLCAAAA_s = (ZKCAAAA.data.mode4);
{ 
WLCAAAA = VLCAAAA_s.dim[0].lwb ;
if ( (A_R1INDEX(VLCAAAA_s,WLCAAAA)=='\"') )
{ 
YBCAAAA_putout(St, A_HARR(YLCAAAA,A_UNITE(XLCAAAA,mode1,1,NUAAASP_blank),A68_306 ));
} 
 /* line 238: */
YBCAAAA_putout(St, A_HARR(AMCAAAA,A_UNITE(ZLCAAAA,mode2,2,VLCAAAA_s),A68_306 ));
DLCAAAA = A68_TRUE;
} 
break;
case 6: /* REF STRUCT(MODE32,REF MODE229,REF MODE229)  */
BMCAAAA_t = (ZKCAAAA.data.mode6);
{ 
YBCAAAA_putout(St, A_HARR(DMCAAAA,A_UNITE(CMCAAAA,mode5,5,BMCAAAA_t),A68_306 ));
DLCAAAA = A68_TRUE;
} 
break;
case 7: /* REF STRUCT(REF MODE229,BITS,REF MODE241,REF REF MODE237,REF REF MODE237,REF MODE242,REF MODE242)  */
EMCAAAA_mc = (ZKCAAAA.data.mode7);
 /* line 239: */
FMCAAAA = 32 ;
if ( A_ELEM(FMCAAAA,(*(&(EMCAAAA_mc->Flags))),(A68_BITS ),A_SZ_BITS) )
{ 
GMCAAAA = 31 ;
if ( !(A_ELEM(GMCAAAA,(*(&(EMCAAAA_mc->Flags))),(A68_BITS ),A_SZ_BITS)) )
{ 
 /* line 240: */
HMCAAAA = (&(EMCAAAA_mc->Flags)) ;
(*HMCAAAA) = (A68_BITS )((*(&(EMCAAAA_mc->Flags)))|YQAAASP_elem(31));
DLCAAAA = EFCAAAA_expandmacro(WKCAAAA_loctxt, EMCAAAA_mc);
} 
else
{ 
LMCAAAA = JMCAAAA ;
YBCAAAA_putout(St, A_HARR(MMCAAAA,A_UNITE(KMCAAAA,mode2,2,LMCAAAA),A68_306 ));
 /* line 241: */
DLCAAAA = A68_TRUE;
} 
} 
else
{ 
DLCAAAA = EFCAAAA_expandmacro(WKCAAAA_loctxt, EMCAAAA_mc);
} 
break;
case 8: /* REF STRUCT(MODE32,REF REF MODE237,REF REF MODE237,REF MODE239,REF MODE239)  */
NMCAAAA_md = (ZKCAAAA.data.mode8);
{ 
 /* line 242: */
A_CLOSURE( PMCAAAA_generator, QMCAAAA_generator, RMCAAAA_generator );
A_CALLPROC(PMCAAAA_generator,(A68_FALSE, &UMCAAAA),(A68_FALSE, &UMCAAAA,(PMCAAAA_generator).nonlocals));
RJCAAAA_processmodule(St, NMCAAAA_md, UMCAAAA);
DLCAAAA = A68_TRUE;
} 
break;
case 5: /* VOID */
DLCAAAA = A68_TRUE;
break;
case 3: /* STRUCT(CHAR)  */
VMCAAAA_c = (ZKCAAAA.data.mode3);
{ 
{ 
XMCAAAA.fn.fn_global = XTDAASP_newline;
XMCAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(YMCAAAA,A_UNITE(WMCAAAA,mode30,30,XMCAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 243: */
DNCAAAA = BNCAAAA ;
ZMCAAAA.data[0] = A_UNITE(CNCAAAA,mode1,1,DNCAAAA);
 /* line 244: */
JNCAAAA = A_VC_PLUS(A_VC_PLUS(GNCAAAA,A_HVEC(HNCAAAA,VMCAAAA_c.Cs,A68_CHAR )),INCAAAA) ;
NNCAAAA = A_RC_PLUS(A_RC_PLUS(A_VECARR(JNCAAAA,KNCAAAA),(*(&(Mod->Id)))),A_HARR(LNCAAAA,'\"',A68_CHAR )) ;
ZMCAAAA.data[1] = A_UNITE(MNCAAAA,mode1,1,NNCAAAA);
ANBAAAA_printout(A_HIS1ARR(ONCAAAA,ZMCAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
DLCAAAA = A68_TRUE;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
if ( DLCAAAA )
{ 
 /* line 245: */
WKCAAAA_loctxt = (&((*WKCAAAA_loctxt)->Next));
} 
}
TNCAAAA = RNCAAAA ;
PNCAAAA.data[0] = A_UNITE(SNCAAAA,mode2,2,TNCAAAA);
PNCAAAA.data[1] = A_UNITE(UNCAAAA,mode4,4,Cursec);
YNCAAAA = WNCAAAA ;
PNCAAAA.data[2] = A_UNITE(XNCAAAA,mode2,2,YNCAAAA);
YBCAAAA_putout(St, A_HIS1ARR(ZNCAAAA,PNCAAAA,A68_306 ,3));
} 
A_PROC_EXIT(processmodule);
return;
} 
#undef NL

A_STATIC A68_VOID  COCAAAA_addfiletotree(A68_229 ** Tr, A68_RC  Fn)
{ 
A68_230  DOCAAAA;  /* collateral clause result */
A68_229  NOCAAAA;  /* avoid structure result */
A68_229 * OOCAAAA;  /* staticpart generator */
A68_215  POCAAAA;  /* OPERATORS - mode -> union mode */
A68_49  QOCAAAA;  /* procedure value */
A68_214  ROCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_273  WOCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  XOCAAAA;  /* YIELD */
A68_274  YOCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(addfiletotree);
if ( ((*Tr)==LDAAAAA_noinc) )
{ 
 /* line 247: */
DOCAAAA.S = Fn;
DOCAAAA.Left = LDAAAAA_noinc;
DOCAAAA.Right = LDAAAAA_noinc;
A_CALLPROC(VAAAAAA_anonymous,(A68_FALSE, &NOCAAAA),(A68_FALSE, &NOCAAAA,(VAAAAAA_anonymous).nonlocals));
(*Tr) = GOCAAAA_assignment(A_HEAP_STATIC(A68_229 ,OOCAAAA,NOCAAAA), DOCAAAA);
} 
else
{ 
if ( A_RC_LT(Fn,(*(&((*Tr)->S)))) )
{ 
 /* line 248: */
COCAAAA_addfiletotree((&((*Tr)->Left)), Fn);
} 
else
{ 
if ( A_RC_GT(Fn,(*(&((*Tr)->S)))) )
{ 
COCAAAA_addfiletotree((&((*Tr)->Right)), Fn);
} 
else
{ 
{ 
QOCAAAA.fn.fn_global = XTDAASP_newline;
QOCAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(ROCAAAA,A_UNITE(POCAAAA,mode30,30,QOCAAAA),A68_215 ));
 /* line 249: */
IEAAAAA_consolepos = 0;
XOCAAAA = A_RC_PLUS(A_RC_PLUS(UOCAAAA,Fn),VOCAAAA) ;
ANBAAAA_printout(A_HARR(YOCAAAA,A_UNITE(WOCAAAA,mode1,1,XOCAAAA),A68_273 ));
XNBAAAA_error(1);
} 
} 
} 
} 
A_PROC_EXIT(addfiletotree);
return;
} 
#undef NL

A_STATIC A68_BOOL  BPCAAAA_addincludefile(A68_224 ** Web, A68_RC  Incfn)
{ 
A68_38 * CPCAAAA_incf;
A68_BOOL  DPCAAAA;  /* clause result */
A68_206  EPCAAAA;  /* OPERATORS - mode -> union mode */
A68_224  FPCAAAA;  /* collateral clause result */
A68_250  GPCAAAA;  /* collateral clause result */
A68_71  HPCAAAA;  /* OPERATORS - istruct to row */
A68_VC  IPCAAAA;  /* YIELD */
A68_RC  JPCAAAA;  /* OPERATORS - vector -> row */
A68_224  KPCAAAA;  /* avoid structure result */
A68_224 * LPCAAAA;  /* staticpart generator */
A68_BOOL  MPCAAAA;  /* clause result */
A68_38  SPCAAAA_pf;
A68_32  UPCAAAA;  /* avoid structure result */
A68_32  TPCAAAA_path;
A68_VC  VPCAAAA;  /* avoid structure result */
A68_206  WPCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  XPCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_45  ZPCAAAA_anonymous;   /* proc value of non-global proc */
A68_jmp_buf OPCAAAA_eof;
A68_327  EQCAAAA;  /* collateral clause result */
A68_212  FQCAAAA;  /* OPERATORS - mode -> union mode */
A68_49  GQCAAAA;  /* procedure value */
A68_212  HQCAAAA;  /* OPERATORS - mode -> union mode */
A68_211  IQCAAAA;  /* OPERATORS - istruct to row */
A68_INT  JQCAAAA;  /* YIELD */
A68_RC  KQCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_206  LQCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  MQCAAAA;  /* YIELD */
A68_224  NQCAAAA;  /* collateral clause result */
A68_250  OQCAAAA;  /* collateral clause result */
A68_71  PQCAAAA;  /* OPERATORS - istruct to row */
A68_VC  QQCAAAA;  /* YIELD */
A68_RC  RQCAAAA;  /* OPERATORS - vector -> row */
A68_224  SQCAAAA;  /* avoid structure result */
A68_224 * TQCAAAA;  /* staticpart generator */
if ( sigsetjmp( OPCAAAA_eof.label,1) ) goto PPCAAAA_eof;
A_PROC_ENTRY(addincludefile);
{ 
CPCAAAA_incf = (A_HEAP(A68_38 ));
 /* line 251: */
DPCAAAA = (OHCAASP_open(CPCAAAA_incf, A_UNITE(EPCAAAA,mode2,2,Incfn), VRDAASP_standinchannel)==0);
if ( DPCAAAA )
{ 
KEAAAAA_filenumber+=1;
 /* line 252: */
FPCAAAA.F = CPCAAAA_incf;
FPCAAAA.Ended = A68_FALSE;
FPCAAAA.Fnum = KEAAAAA_filenumber;
FPCAAAA.N = 0;
FPCAAAA.Loc = 0;
FPCAAAA.Upb = 0;
GPCAAAA.data[0] = KEAAAAA_filenumber;
GPCAAAA.data[1] = 0;
GPCAAAA.data[2] = 0;
GPCAAAA.data[3] = 0;
FPCAAAA.Sec = A_HIS1ARR(HPCAAAA,GPCAAAA,A68_INT ,4);
IPCAAAA = A_C_TIMES(NUAAASP_blank,256) ;
FPCAAAA.B = A_VECARR(IPCAAAA,JPCAAAA);
FPCAAAA.Next = (*Web);
A_CALLPROC(DAAAAAA_anonymous,(A68_FALSE, &KPCAAAA),(A68_FALSE, &KPCAAAA,(DAAAAAA_anonymous).nonlocals));
(*Web) = TEAAAAA_assignment(A_HEAP_STATIC(A68_224 ,LPCAAAA,KPCAAAA), FPCAAAA);
 /* line 253: */
COCAAAA_addfiletotree((&LEAAAAA_inctree), Incfn);
MPCAAAA = A68_TRUE;
} 
else
{ 
{ 
A_CALLPROC(EAAAASP_anonymous,(A68_TRUE, &UPCAAAA),(A68_TRUE, &UPCAAAA,(EAAAASP_anonymous).nonlocals));
TPCAAAA_path = UPCAAAA;
 /* line 254: */
DJAAASP_makervc( VFAAAAA_includepaths, &VPCAAAA );
OHCAASP_open((&SPCAAAA_pf), A_UNITE(WPCAAAA,mode3,3,VPCAAAA), TGDAASP_memchannel);
KGCAASP_maketerm((&SPCAAAA_pf), A_HARR(XPCAAAA,':',A68_CHAR ));
 /* line 255: */
A_CLOSURE( ZPCAAAA_anonymous, AQCAAAA_anonymous, BQCAAAA_anonymous );
(( BQCAAAA_anonymous * ) ( ZPCAAAA_anonymous.nonlocals )) -> OPCAAAA_eof = OPCAAAA_eof;
UFCAASP_onlogicalfileend((&SPCAAAA_pf), ZPCAAAA_anonymous);
for ( ;; )
{ 
GQCAAAA.fn.fn_global = KTDAASP_skipterminators;
GQCAAAA.nonlocals = A68_NIL;
EQCAAAA.data[0] = A_UNITE(FQCAAAA,mode31,31,GQCAAAA);
EQCAAAA.data[1] = A_UNITE(HQCAAAA,mode3,3,(&TPCAAAA_path));
UKEAASP_get((&SPCAAAA_pf), A_HIS1ARR(IQCAAAA,EQCAAAA,A68_212 ,2));
 /* line 256: */
JQCAAAA = TPCAAAA_path.dim[0].upb ;
if ( ((*(&A_R1INDEX(*(&TPCAAAA_path),JQCAAAA)))!='/') )
{ 
A_RC_PLUSAB(TPCAAAA_path,A_HARR(KQCAAAA,'/',A68_CHAR ));
} 
 /* line 257: */
MQCAAAA = A_RC_PLUS(TPCAAAA_path,Incfn) ;
if ( (OHCAASP_open(CPCAAAA_incf, A_UNITE(LQCAAAA,mode2,2,MQCAAAA), VRDAASP_standinchannel)==0) )
{ 
KEAAAAA_filenumber+=1;
NQCAAAA.F = CPCAAAA_incf;
NQCAAAA.Ended = A68_FALSE;
NQCAAAA.Fnum = KEAAAAA_filenumber;
 /* line 258: */
NQCAAAA.N = 0;
NQCAAAA.Loc = 0;
NQCAAAA.Upb = 0;
OQCAAAA.data[0] = KEAAAAA_filenumber;
OQCAAAA.data[1] = 0;
OQCAAAA.data[2] = 0;
OQCAAAA.data[3] = 0;
NQCAAAA.Sec = A_HIS1ARR(PQCAAAA,OQCAAAA,A68_INT ,4);
QQCAAAA = A_C_TIMES(NUAAASP_blank,256) ;
NQCAAAA.B = A_VECARR(QQCAAAA,RQCAAAA);
NQCAAAA.Next = (*Web);
A_CALLPROC(DAAAAAA_anonymous,(A68_FALSE, &SQCAAAA),(A68_FALSE, &SQCAAAA,(DAAAAAA_anonymous).nonlocals));
(*Web) = TEAAAAA_assignment(A_HEAP_STATIC(A68_224 ,TQCAAAA,SQCAAAA), NQCAAAA);
XICAASP_close((&SPCAAAA_pf));
 /* line 259: */
COCAAAA_addfiletotree((&LEAAAAA_inctree), Incfn);
goto RPCAAAA_found;
} 
else
{ 
 /* line 260: */
A_CALLPROC(FEAAAAA_debugprintstring,(VQCAAAA, A_RC_PLUS(TPCAAAA_path,Incfn)),(VQCAAAA, A_RC_PLUS(TPCAAAA_path,Incfn),(FEAAAAA_debugprintstring).nonlocals));
} 
}
PPCAAAA_eof:
MPCAAAA = A68_FALSE;
goto NPCAAAA;
RPCAAAA_found:
MPCAAAA = A68_TRUE;
NPCAAAA: ;
} 
} 
} 
A_PROC_EXIT(addincludefile);
return( MPCAAAA );
} 
#undef NL

A_STATIC A68_BOOL  XQCAAAA_inputln(A68_224 * Inp)
{ 
A68_CHAR  BRCAAAA_ch;
A68_INT * CRCAAAA;  /* YIELD */
A68_INT * DRCAAAA;  /* YIELD */
A68_45  FRCAAAA_anonymous;   /* proc value of non-global proc */
A68_jmp_buf ZQCAAAA_lab1;
A68_64  LRCAAAA;  /* OPERATORS - mode -> union mode */
A68_219  MRCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  NRCAAAA;  /* clause result */
A68_RC  ORCAAAA;  /* OPERATORS - simple index */
A68_INT * PRCAAAA;  /* YIELD */
A68_INT  QRCAAAA;  /* YIELD */
A68_CHAR * RRCAAAA;  /* YIELD */
A68_RC  SRCAAAA;  /* OPERATORS - trim index */
A68_RC  TRCAAAA;  /* OPERATORS - trim index */
A68_RC  URCAAAA;  /* avoid structure result */
A68_RC  VRCAAAA;  /* OPERATORS - trim index */
A68_RC  WRCAAAA_trimmedb;
A68_INT * XRCAAAA;  /* YIELD */
A68_RC  YRCAAAA;  /* OPERATORS - trim index */
A68_RC  ZRCAAAA;  /* OPERATORS - trim index */
A68_RC  ASCAAAA;  /* YIELD */
A68_INT * BSCAAAA;  /* YIELD */
A68_BOOL  CSCAAAA;  /* clause result */
if ( sigsetjmp( ZQCAAAA_lab1.label,1) ) goto ARCAAAA_lab1;
A_PROC_ENTRY(inputln);
{ 
CRCAAAA = (&(Inp->Upb)) ;
(*CRCAAAA) = 0;
DRCAAAA = (&(Inp->Loc)) ;
(*DRCAAAA) = 0;
 /* line 262: */
A_CLOSURE( FRCAAAA_anonymous, GRCAAAA_anonymous, HRCAAAA_anonymous );
(( HRCAAAA_anonymous * ) ( FRCAAAA_anonymous.nonlocals )) -> Inp = Inp;
(( HRCAAAA_anonymous * ) ( FRCAAAA_anonymous.nonlocals )) -> ZQCAAAA_lab1 = ZQCAAAA_lab1;
UFCAASP_onlogicalfileend((*(&(Inp->F))), FRCAAAA_anonymous);
 /* line 263: */
for ( ;; )
{ 
ADFAASP_getbin((*(&(Inp->F))), A_HARR(MRCAAAA,A_UNITE(LRCAAAA,mode1,1,(&BRCAAAA_ch)),A68_64 ));
NRCAAAA = (BRCAAAA_ch!=TUAAASP_lf);
if ( !NRCAAAA ) break;
ORCAAAA = (Inp->B) ;
PRCAAAA = (&(Inp->Upb)) ;
QRCAAAA = (*PRCAAAA)+=1 ;
RRCAAAA = (&A_R1INDEX(ORCAAAA,QRCAAAA)) ;
(*RRCAAAA) = BRCAAAA_ch;
}
 /* line 264: */
if ( ((*(&(Inp->Upb)))>0) )
{ 
SRCAAAA = (Inp->B) ;
GSBAAAA_trim( A_R1TRIM(TRCAAAA,(SRCAAAA),A_RTSCRIPT(&(TRCAAAA.dim[0]),&((SRCAAAA).dim[0]),(SRCAAAA).dim[0].lwb,(*(&(Inp->Upb))),1)), &URCAAAA );
WRCAAAA_trimmedb = A_R1TRIM(VRCAAAA,(URCAAAA),A_RTSCRIPT(&(VRCAAAA.dim[0]),&((URCAAAA).dim[0]),(URCAAAA).dim[0].lwb,(URCAAAA).dim[0].upb,1));
 /* line 265: */
XRCAAAA = (&(Inp->Upb)) ;
(*XRCAAAA) = WRCAAAA_trimmedb.dim[0].upb;
YRCAAAA = (Inp->B) ;
ASCAAAA = A_R1TRIM(ZRCAAAA,(YRCAAAA),A_RTSCRIPT(&(ZRCAAAA.dim[0]),&((YRCAAAA).dim[0]),(YRCAAAA).dim[0].lwb,(*(&(Inp->Upb))),1)) ;
A_R1ASSIGN2(WRCAAAA_trimmedb,ASCAAAA,A68_CHAR );
} 
BSCAAAA = (&(Inp->N)) ;
(*BSCAAAA)+=1;
CSCAAAA = A68_TRUE;
goto YQCAAAA;
ARCAAAA_lab1:
 /* line 266: */
CSCAAAA = A68_FALSE;
YQCAAAA: ;
} 
A_PROC_EXIT(inputln);
return( CSCAAAA );
} 
#undef NL

A_STATIC A68_CHAR  DSCAAAA_nextchar(void)
{ 
A68_CHAR  ESCAAAA;  /* clause result */
A68_RC  FSCAAAA;  /* OPERATORS - simple index */
A68_INT * GSCAAAA;  /* YIELD */
A68_INT  HSCAAAA;  /* YIELD */
A_PROC_ENTRY(nextchar);
 /* line 267: */
if ( (*(&(GFAAAAA_web->Ended))) )
{ 
if ( ((*(&(GFAAAAA_web->Next)))!=KDAAAAA_nostream) )
{ 
XICAASP_close((*(&(GFAAAAA_web->F))));
 /* line 268: */
GFAAAAA_web = (*(&(GFAAAAA_web->Next)));
} 
ESCAAAA = NUAAASP_blank;
} 
else
{ 
if ( ((*(&(GFAAAAA_web->Loc)))<(*(&(GFAAAAA_web->Upb)))) )
{ 
 /* line 269: */
FSCAAAA = (GFAAAAA_web->B) ;
GSCAAAA = (&(GFAAAAA_web->Loc)) ;
HSCAAAA = (*GSCAAAA)+=1 ;
ESCAAAA = (*(&A_R1INDEX(FSCAAAA,HSCAAAA)));
} 
else
{ 
for ( ;; )
{ 
if ( !((XQCAAAA_inputln(GFAAAAA_web)&((*(&(GFAAAAA_web->Upb)))==0))) ) break;
/*SKIP*/;
}
if ( (*(&(GFAAAAA_web->Ended))) )
{ 
 /* line 270: */
if ( ((*(&(GFAAAAA_web->Next)))!=KDAAAAA_nostream) )
{ 
XICAASP_close((*(&(GFAAAAA_web->F))));
 /* line 271: */
GFAAAAA_web = (*(&(GFAAAAA_web->Next)));
} 
} 
ESCAAAA = NUAAASP_blank;
} 
} 
A_PROC_EXIT(nextchar);
return( ESCAAAA );
} 
#undef NL

A_STATIC A68_VOID  KSCAAAA_gathertochar(A68_32 * S, A68_CHAR  C)
{ 
A68_CHAR  LSCAAAA_ch;
A68_BOOL  MSCAAAA;  /* clause result */
A68_RC  NSCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  OSCAAAA;  /* clause result */
A68_215  PSCAAAA;  /* OPERATORS - mode -> union mode */
A68_49  QSCAAAA;  /* procedure value */
A68_214  RSCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  SSCAAAA;  /* collateral clause result */
A68_273  VSCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  WSCAAAA;  /* YIELD */
A68_VC  ZSCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ATCAAAA;  /* YIELD */
A68_RC  BTCAAAA;  /* OPERATORS - vector -> row */
A68_273  CTCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  DTCAAAA;  /* YIELD */
A68_274  ETCAAAA;  /* OPERATORS - istruct to row */
A68_RC  FTCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(gathertochar);
 /* line 272: */
{ 
for ( ;; )
{ 
LSCAAAA_ch = DSCAAAA_nextchar();
MSCAAAA = (!(*(&(GFAAAAA_web->Ended)))&(LSCAAAA_ch!=C));
if ( !MSCAAAA ) break;
A_RC_PLUSAB((*S),A_HARR(NSCAAAA,LSCAAAA_ch,A68_CHAR ));
}
 /* line 273: */
OSCAAAA = (*(&(GFAAAAA_web->Ended)));
if ( OSCAAAA )
{ 
{ 
QSCAAAA.fn.fn_global = XTDAASP_newline;
QSCAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(RSCAAAA,A_UNITE(PSCAAAA,mode30,30,QSCAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 274: */
WSCAAAA = USCAAAA ;
SSCAAAA.data[0] = A_UNITE(VSCAAAA,mode1,1,WSCAAAA);
ATCAAAA = A_VC_PLUS(YSCAAAA,A_HVEC(ZSCAAAA,C,A68_CHAR )) ;
DTCAAAA = A_VECARR(ATCAAAA,BTCAAAA) ;
SSCAAAA.data[1] = A_UNITE(CTCAAAA,mode1,1,DTCAAAA);
ANBAAAA_printout(A_HIS1ARR(ETCAAAA,SSCAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
} 
else
{ 
A_RC_PLUSAB((*S),A_HARR(FTCAAAA,LSCAAAA_ch,A68_CHAR ));
} 
} 
A_PROC_EXIT(gathertochar);
return;
} 
#undef NL

A_STATIC A68_VOID  HTCAAAA_skiptochar(A68_CHAR  C)
{ 
A68_CHAR  ITCAAAA_ch;
A68_BOOL  JTCAAAA;  /* clause result */
A68_215  KTCAAAA;  /* OPERATORS - mode -> union mode */
A68_49  LTCAAAA;  /* procedure value */
A68_214  MTCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  NTCAAAA;  /* collateral clause result */
A68_273  QTCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  RTCAAAA;  /* YIELD */
A68_VC  UTCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VTCAAAA;  /* YIELD */
A68_RC  WTCAAAA;  /* OPERATORS - vector -> row */
A68_273  XTCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  YTCAAAA;  /* YIELD */
A68_274  ZTCAAAA;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(skiptochar);
{ 
for ( ;; )
{ 
ITCAAAA_ch = DSCAAAA_nextchar();
 /* line 276: */
JTCAAAA = (!(*(&(GFAAAAA_web->Ended)))&(ITCAAAA_ch!=C));
if ( !JTCAAAA ) break;
/*SKIP*/;
}
if ( (*(&(GFAAAAA_web->Ended))) )
{ 
{ 
LTCAAAA.fn.fn_global = XTDAASP_newline;
LTCAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(MTCAAAA,A_UNITE(KTCAAAA,mode30,30,LTCAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 277: */
RTCAAAA = PTCAAAA ;
NTCAAAA.data[0] = A_UNITE(QTCAAAA,mode1,1,RTCAAAA);
VTCAAAA = A_VC_PLUS(TTCAAAA,A_HVEC(UTCAAAA,C,A68_CHAR )) ;
YTCAAAA = A_VECARR(VTCAAAA,WTCAAAA) ;
NTCAAAA.data[1] = A_UNITE(XTCAAAA,mode1,1,YTCAAAA);
ANBAAAA_printout(A_HIS1ARR(ZTCAAAA,NTCAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
} 
} 
A_PROC_EXIT(skiptochar);
return;
} 
#undef NL

A_STATIC A68_BOOL  AUCAAAA_skiptobang(void)
{ 
A68_CHAR  EUCAAAA_ch;
A68_BOOL  FUCAAAA;  /* clause result */
A68_BOOL  GUCAAAA;  /* clause result */
A68_215  HUCAAAA;  /* OPERATORS - mode -> union mode */
A68_49  IUCAAAA;  /* procedure value */
A68_214  JUCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  KUCAAAA;  /* collateral clause result */
A68_273  NUCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  OUCAAAA;  /* YIELD */
A68_273  RUCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  SUCAAAA;  /* YIELD */
A68_274  TUCAAAA;  /* OPERATORS - istruct to row */
A68_INT * UUCAAAA;  /* YIELD */
A68_INT * VUCAAAA;  /* YIELD */
A68_BOOL  WUCAAAA;  /* clause result */
A68_BOOL  XUCAAAA;  /* clause result */
A_PROC_ENTRY(skiptobang);
{ 
for ( ;; )
{ 
for ( ;; )
{ 
EUCAAAA_ch = DSCAAAA_nextchar();
 /* line 279: */
FUCAAAA = ((!(*(&(GFAAAAA_web->Ended)))&(EUCAAAA_ch!='!'))&(EUCAAAA_ch!='@'));
if ( !FUCAAAA ) break;
/*SKIP*/;
}
 /* line 280: */
if ( ((*(&(GFAAAAA_web->Ended)))|(EUCAAAA_ch=='!')) )
{ 
GUCAAAA = A68_FALSE;
} 
else
{ 
if ( ((EUCAAAA_ch = DSCAAAA_nextchar())!='@') )
{ 
{ 
IUCAAAA.fn.fn_global = XTDAASP_newline;
IUCAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(JUCAAAA,A_UNITE(HUCAAAA,mode30,30,IUCAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 281: */
OUCAAAA = MUCAAAA ;
KUCAAAA.data[0] = A_UNITE(NUCAAAA,mode1,1,OUCAAAA);
SUCAAAA = QUCAAAA ;
KUCAAAA.data[1] = A_UNITE(RUCAAAA,mode1,1,SUCAAAA);
ANBAAAA_printout(A_HIS1ARR(TUCAAAA,KUCAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
 /* line 282: */
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
UUCAAAA = (&(GFAAAAA_web->Loc)) ;
(*UUCAAAA)-=1;
} 
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
VUCAAAA = (&(GFAAAAA_web->Loc)) ;
(*VUCAAAA)-=1;
} 
 /* line 283: */
goto DUCAAAA_err ;
GUCAAAA = (*(A68_BOOL *)A68_NIL);
} 
else
{ 
GUCAAAA = A68_TRUE;
} 
} 
WUCAAAA = GUCAAAA;
if ( !WUCAAAA ) break;
/*SKIP*/;
}
XUCAAAA = A68_TRUE;
goto BUCAAAA;
DUCAAAA_err:
XUCAAAA = A68_FALSE;
BUCAAAA: ;
} 
A_PROC_EXIT(skiptobang);
return( XUCAAAA );
} 
#undef NL

A_STATIC A68_VOID  ZUCAAAA_skiptocs(A68_RC  Cset)
{ 
A68_BOOL  AVCAAAA;  /* clause result */
A68_CHAR  BVCAAAA_ch;
A68_INT  EVCAAAA_bal;
A68_BOOL  FVCAAAA;  /* clause result */
A68_INT * GVCAAAA;  /* YIELD */
A68_BOOL  HVCAAAA;  /* clause result */
A_PROC_ENTRY(skiptocs);
for ( ;; )
{ 
if ( (*(&(GFAAAAA_web->Ended))) )
{ 
AVCAAAA = A68_FALSE;
} 
else
{ 
BVCAAAA_ch = DSCAAAA_nextchar();
 /* line 285: */
switch ( BRBAAAA_find(BVCAAAA_ch, DVCAAAA) )
{ 
case 1: 
{ 
HTCAAAA_skiptochar(BVCAAAA_ch);
AVCAAAA = A68_TRUE;
} 
break;
case 2: 
AVCAAAA = AUCAAAA_skiptobang();
break;
case 3: 
{ 
EVCAAAA_bal = 1;
 /* line 286: */
for ( ;; )
{ 
BVCAAAA_ch = DSCAAAA_nextchar();
FVCAAAA = !((BVCAAAA_ch=='}')&(EVCAAAA_bal==1));
if ( !FVCAAAA ) break;
if ( (BVCAAAA_ch=='{') )
{ 
EVCAAAA_bal+=1;
} 
else
{ 
 /* line 287: */
if ( (BVCAAAA_ch=='}') )
{ 
EVCAAAA_bal-=1;
} 
} 
}
AVCAAAA = A68_TRUE;
} 
break;
case 4: 
{ 
GVCAAAA = (&(GFAAAAA_web->Loc)) ;
(*GVCAAAA) = (*(&(GFAAAAA_web->Upb)));
 /* line 288: */
AVCAAAA = A68_TRUE;
} 
break;
case 5: 
AVCAAAA = !ECBAASP_charinstring(CTBAAAA_uc(DSCAAAA_nextchar()), A_LOC(A68_INT ), Cset);
break;
default: 
AVCAAAA = A68_TRUE;
break;
} 
} 
HVCAAAA = AVCAAAA;
if ( !HVCAAAA ) break;
/*SKIP*/;
}
A_PROC_EXIT(skiptocs);
return;
} 
#undef NL

A_STATIC A68_VOID  IVCAAAA_gettok(A68_243  *ReturnedValue)
{ 
A68_243  JVCAAAA_t;
A68_32  LVCAAAA;  /* avoid structure result */
A68_32  KVCAAAA_s;
A68_BOOL  MVCAAAA_valid;
A68_CHAR  NVCAAAA_ch;
A68_243  ZVCAAAA;  /* OPERATORS - mode -> union mode */
A68_BOOL  AWCAAAA;  /* clause result */
A68_RC  BWCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  CWCAAAA;  /* YIELD */
A68_RC  DWCAAAA;  /* OPERATORS - copy to flex */
A68_BOOL  EWCAAAA;  /* clause result */
A68_BOOL  FWCAAAA;  /* clause result */
A68_RC  GWCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * HWCAAAA;  /* YIELD */
A68_INT  IWCAAAA_bs;
A68_BOOL  JWCAAAA;  /* clause result */
A68_230  KWCAAAA;  /* collateral clause result */
A68_229  LWCAAAA;  /* avoid structure result */
A68_229 * MWCAAAA;  /* staticpart generator */
A68_243  NWCAAAA;  /* OPERATORS - mode -> union mode */
A68_229 * OWCAAAA;  /* YIELD */
A68_243  PWCAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  QWCAAAA;  /* YIELD */
A68_243  RWCAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  SWCAAAA;  /* YIELD */
A68_243  TWCAAAA;  /* avoid structure result */
A68_243  UWCAAAA;  /* united object - for case conformity */
A68_INT  VWCAAAA_n;
A68_BOOL  WWCAAAA;  /* clause result */
A68_BOOL  XWCAAAA;  /* clause result */
A68_BOOL  YWCAAAA;  /* clause result */
A68_215  ZWCAAAA;  /* OPERATORS - mode -> union mode */
A68_49  AXCAAAA;  /* procedure value */
A68_214  BXCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  CXCAAAA;  /* collateral clause result */
A68_273  FXCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  GXCAAAA;  /* YIELD */
A68_VC  JXCAAAA;  /* clause result */
A68_VC  OXCAAAA;  /* YIELD */
A68_RC  PXCAAAA;  /* OPERATORS - vector -> row */
A68_273  QXCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  RXCAAAA;  /* YIELD */
A68_274  SXCAAAA;  /* OPERATORS - istruct to row */
A68_243  TXCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  UXCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  VXCAAAA;  /* YIELD */
A68_RC  WXCAAAA;  /* OPERATORS - copy to flex */
A68_BOOL  XXCAAAA;  /* clause result */
A68_BOOL  YXCAAAA;  /* clause result */
A68_RC  ZXCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * AYCAAAA;  /* YIELD */
A68_230  BYCAAAA;  /* collateral clause result */
A68_RC  CYCAAAA;  /* avoid structure result */
A68_229  DYCAAAA;  /* avoid structure result */
A68_229 * EYCAAAA;  /* staticpart generator */
A68_243  FYCAAAA;  /* OPERATORS - mode -> union mode */
A68_229 * GYCAAAA;  /* YIELD */
A68_RC  HYCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  IYCAAAA;  /* YIELD */
A68_RC  JYCAAAA;  /* OPERATORS - copy to flex */
A68_BOOL  KYCAAAA;  /* clause result */
A68_BOOL  LYCAAAA;  /* clause result */
A68_BOOL  OYCAAAA;  /* clause result */
A68_RC  PYCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * QYCAAAA;  /* YIELD */
A68_RC  RYCAAAA;  /* avoid structure result */
A68_243  SYCAAAA;  /* OPERATORS - mode -> union mode */
A68_BOOL  TYCAAAA;  /* clause result */
A68_243  UYCAAAA;  /* clause result */
A68_243  VYCAAAA;  /* OPERATORS - mode -> union mode */
A68_232 * WYCAAAA_h;
A68_CHAR * XYCAAAA;  /* YIELD */
A68_243  YYCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  ZYCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  AZCAAAA;  /* YIELD */
A68_RC  BZCAAAA;  /* OPERATORS - copy to flex */
A68_BOOL  CZCAAAA;  /* clause result */
A68_RC  DZCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * EZCAAAA;  /* YIELD */
A68_INT  FZCAAAA_nat;
A68_BOOL  GZCAAAA_err;
A68_INT  HZCAAAA_i;
A68_INT  IZCAAAA;  /* to part of loop */
A68_215  JZCAAAA;  /* OPERATORS - mode -> union mode */
A68_49  KZCAAAA;  /* procedure value */
A68_214  LZCAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  MZCAAAA;  /* collateral clause result */
A68_273  PZCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  QZCAAAA;  /* YIELD */
A68_273  TZCAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  UZCAAAA;  /* YIELD */
A68_274  VZCAAAA;  /* OPERATORS - istruct to row */
A68_55  XZCAAAA_generator;   /* proc value of non-global proc */
A68_RC  DADAAAA;  /* avoid structure result */
A68_RC  CADAAAA_ss;
A68_INT  EADAAAA_pss;
A68_BOOL  FADAAAA_atread;
A68_INT  GADAAAA_i;
A68_INT  HADAAAA;  /* to part of loop */
A68_CHAR  IADAAAA_si;
A68_INT  JADAAAA;  /* YIELD */
A68_CHAR * KADAAAA;  /* YIELD */
A68_215  LADAAAA;  /* OPERATORS - mode -> union mode */
A68_49  MADAAAA;  /* procedure value */
A68_214  NADAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  OADAAAA;  /* collateral clause result */
A68_273  RADAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  SADAAAA;  /* YIELD */
A68_273  VADAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  WADAAAA;  /* YIELD */
A68_274  XADAAAA;  /* OPERATORS - istruct to row */
A68_INT  YADAAAA;  /* YIELD */
A68_CHAR * ZADAAAA;  /* YIELD */
A68_RC  BBDAAAA;  /* clause result */
A68_RC  DBDAAAA;  /* OPERATORS - copy to flex */
A68_243  EBDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  HBDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_243  IBDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  JBDAAAA;  /* YIELD */
A68_RC  KBDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  LBDAAAA;  /* YIELD */
A68_RC  MBDAAAA;  /* OPERATORS - copy to flex */
A68_RC  PBDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * QBDAAAA;  /* YIELD */
A68_243  RBDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  UBDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_243  VBDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  WBDAAAA;  /* YIELD */
A68_RC  XBDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  ZBDAAAA;  /* clause result */
A68_INT * BCDAAAA;  /* YIELD */
A68_243  CCDAAAA;  /* OPERATORS - mode -> union mode */
A68_BOOL  DCDAAAA;  /* clause result */
A68_187  ICDAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  JCDAAAA;  /* YIELD */
A68_RC  KCDAAAA;  /* avoid structure result */
A68_187  MCDAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  NCDAAAA;  /* YIELD */
A68_RC  OCDAAAA;  /* avoid structure result */
A68_243  QCDAAAA;  /* clause result */
A_PROC_ENTRY(gettok);
{ 
A_CALLPROC(EAAAASP_anonymous,(A68_TRUE, &LVCAAAA),(A68_TRUE, &LVCAAAA,(EAAAASP_anonymous).nonlocals));
KVCAAAA_s = LVCAAAA;
MVCAAAA_valid = A68_TRUE;
for ( ;; )
{ 
 /* line 290: */
NVCAAAA_ch = DSCAAAA_nextchar();
if ( (*(&(GFAAAAA_web->Ended))) )
{ 
QVCAAAA_assignment((&JVCAAAA_t), A_EMPTY(ZVCAAAA,5));
AWCAAAA = A68_FALSE;
} 
else
{ 
 /* line 291: */
if ( ((NVCAAAA_ch==NUAAASP_blank)|(NVCAAAA_ch==VUAAASP_tabch)) )
{ 
AWCAAAA = A68_TRUE;
} 
else
{ 
if ( ((NVCAAAA_ch>='A')&(NVCAAAA_ch<='Z')) )
{ 
CWCAAAA = A_HARR(BWCAAAA,NVCAAAA_ch,A68_CHAR ) ;
KVCAAAA_s = A_R1COPY(CWCAAAA,DWCAAAA,A68_CHAR );
for ( ;; )
{ 
 /* line 292: */
if ( ((*(&(GFAAAAA_web->Loc)))==(*(&(GFAAAAA_web->Upb)))) )
{ 
EWCAAAA = A68_FALSE;
} 
else
{ 
EWCAAAA = MVCAAAA_valid = (TSBAAAA_chop(NVCAAAA_ch = DSCAAAA_nextchar(), EDAAAAA_boldrange)>=EDAAAAA_boldrange.dim[0].lwb);
} 
 /* line 293: */
FWCAAAA = EWCAAAA;
if ( !FWCAAAA ) break;
A_RC_PLUSAB(KVCAAAA_s,A_HARR(GWCAAAA,NVCAAAA_ch,A68_CHAR ));
}
if ( !MVCAAAA_valid )
{ 
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
HWCAAAA = (&(GFAAAAA_web->Loc)) ;
(*HWCAAAA)-=1;
} 
} 
 /* line 294: */
{ 
IWCAAAA_bs = NRBAAAA_lookup(KVCAAAA_s);
JWCAAAA = (IWCAAAA_bs==0);
if ( JWCAAAA )
{ 
KWCAAAA.S = KVCAAAA_s;
KWCAAAA.Left = PDAAAAA_notag;
KWCAAAA.Right = PDAAAAA_notag;
A_CALLPROC(DBAAAAA_anonymous,(A68_FALSE, &LWCAAAA),(A68_FALSE, &LWCAAAA,(DBAAAAA_anonymous).nonlocals));
OWCAAAA = GOCAAAA_assignment(A_HEAP_STATIC(A68_229 ,MWCAAAA,LWCAAAA), KWCAAAA) ;
QVCAAAA_assignment((&JVCAAAA_t), A_UNITE(NWCAAAA,mode6,6,OWCAAAA));
 /* line 295: */
AWCAAAA = A68_FALSE;
} 
else
{ 
if ( ((IWCAAAA_bs!=192)&(IWCAAAA_bs!=127)) )
{ 
QWCAAAA = (-IWCAAAA_bs) ;
QVCAAAA_assignment((&JVCAAAA_t), A_UNITE(PWCAAAA,mode1,1,QWCAAAA));
AWCAAAA = A68_FALSE;
} 
else
{ 
if ( (PGBAAAA_incomment!=0) )
{ 
SWCAAAA = (-IWCAAAA_bs) ;
QVCAAAA_assignment((&JVCAAAA_t), A_UNITE(RWCAAAA,mode1,1,SWCAAAA));
 /* line 296: */
AWCAAAA = A68_FALSE;
} 
else
{ 
PGBAAAA_incomment = (-IWCAAAA_bs);
for ( ;; )
{ 
IVCAAAA_gettok(  &TWCAAAA );
UWCAAAA = TWCAAAA ;
switch ( UWCAAAA.mode )
{ 
case 1: /* INT */
VWCAAAA_n = (UWCAAAA.data.mode1);
 /* line 297: */
WWCAAAA = (VWCAAAA_n!=PGBAAAA_incomment);
break;
case 5: /* VOID */
WWCAAAA = A68_FALSE;
break;
default: 
WWCAAAA = A68_TRUE;
break;
} 
XWCAAAA = WWCAAAA;
if ( !XWCAAAA ) break;
/*SKIP*/;
}
PGBAAAA_incomment = 0;
 /* line 298: */
YWCAAAA = (*(&(GFAAAAA_web->Ended)));
if ( YWCAAAA )
{ 
{ 
AXCAAAA.fn.fn_global = XTDAASP_newline;
AXCAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(BXCAAAA,A_UNITE(ZWCAAAA,mode30,30,AXCAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 299: */
GXCAAAA = EXCAAAA ;
CXCAAAA.data[0] = A_UNITE(FXCAAAA,mode1,1,GXCAAAA);
if ( (PGBAAAA_incomment==127) )
{ 
JXCAAAA = KXCAAAA;
} 
else
{ 
JXCAAAA = MXCAAAA;
} 
OXCAAAA = A_VC_PLUS(NXCAAAA,JXCAAAA) ;
RXCAAAA = A_VECARR(OXCAAAA,PXCAAAA) ;
CXCAAAA.data[1] = A_UNITE(QXCAAAA,mode1,1,RXCAAAA);
ANBAAAA_printout(A_HIS1ARR(SXCAAAA,CXCAAAA,A68_273 ,2));
 /* line 300: */
XNBAAAA_error(2);
} 
QVCAAAA_assignment((&JVCAAAA_t), A_EMPTY(TXCAAAA,5));
AWCAAAA = A68_FALSE;
} 
else
{ 
AWCAAAA = A68_TRUE;
} 
} 
} 
} 
} 
} 
else
{ 
 /* line 301: */
if ( (((NVCAAAA_ch>='a')&(NVCAAAA_ch<='z'))|(NVCAAAA_ch=='_')) )
{ 
VXCAAAA = A_HARR(UXCAAAA,NVCAAAA_ch,A68_CHAR ) ;
KVCAAAA_s = A_R1COPY(VXCAAAA,WXCAAAA,A68_CHAR );
for ( ;; )
{ 
if ( (*(&(GFAAAAA_web->Ended))) )
{ 
XXCAAAA = A68_FALSE;
} 
else
{ 
 /* line 302: */
XXCAAAA = MVCAAAA_valid = (TSBAAAA_chop(NVCAAAA_ch = DSCAAAA_nextchar(), JDAAAAA_idrange)>=JDAAAAA_idrange.dim[0].lwb);
} 
YXCAAAA = XXCAAAA;
if ( !YXCAAAA ) break;
A_RC_PLUSAB(KVCAAAA_s,A_HARR(ZXCAAAA,NVCAAAA_ch,A68_CHAR ));
}
if ( !MVCAAAA_valid )
{ 
 /* line 303: */
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
AYCAAAA = (&(GFAAAAA_web->Loc)) ;
(*AYCAAAA)-=1;
} 
} 
FTBAAAA_compact( KVCAAAA_s, &CYCAAAA );
BYCAAAA.S = CYCAAAA;
BYCAAAA.Left = PDAAAAA_notag;
BYCAAAA.Right = PDAAAAA_notag;
A_CALLPROC(DBAAAAA_anonymous,(A68_FALSE, &DYCAAAA),(A68_FALSE, &DYCAAAA,(DBAAAAA_anonymous).nonlocals));
GYCAAAA = GOCAAAA_assignment(A_HEAP_STATIC(A68_229 ,EYCAAAA,DYCAAAA), BYCAAAA) ;
QVCAAAA_assignment((&JVCAAAA_t), A_UNITE(FYCAAAA,mode6,6,GYCAAAA));
 /* line 304: */
AWCAAAA = A68_FALSE;
} 
else
{ 
if ( (((NVCAAAA_ch>='0')&(NVCAAAA_ch<='9'))|(NVCAAAA_ch=='.')) )
{ 
IYCAAAA = A_HARR(HYCAAAA,NVCAAAA_ch,A68_CHAR ) ;
KVCAAAA_s = A_R1COPY(IYCAAAA,JYCAAAA,A68_CHAR );
for ( ;; )
{ 
NVCAAAA_ch = DSCAAAA_nextchar();
 /* line 305: */
KYCAAAA = (*(&(GFAAAAA_web->Ended)));
if ( KYCAAAA )
{ 
LYCAAAA = A68_FALSE;
} 
else
{ 
LYCAAAA = (((NVCAAAA_ch>='0')&(NVCAAAA_ch<='9'))|(TSBAAAA_chop(NVCAAAA_ch, NYCAAAA)>0));
} 
 /* line 306: */
OYCAAAA = LYCAAAA;
if ( !OYCAAAA ) break;
A_RC_PLUSAB(KVCAAAA_s,A_HARR(PYCAAAA,NVCAAAA_ch,A68_CHAR ));
}
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
QYCAAAA = (&(GFAAAAA_web->Loc)) ;
(*QYCAAAA)-=1;
} 
FTBAAAA_compact( KVCAAAA_s, &RYCAAAA );
QVCAAAA_assignment((&JVCAAAA_t), A_UNITE(SYCAAAA,mode4,4,RYCAAAA));
 /* line 307: */
AWCAAAA = A68_FALSE;
} 
else
{ 
if ( (NVCAAAA_ch=='@') )
{ 
NVCAAAA_ch = DSCAAAA_nextchar();
 /* line 308: */
TYCAAAA = (*(&(GFAAAAA_web->Ended)));
if ( TYCAAAA )
{ 
UYCAAAA = A_EMPTY(VYCAAAA,5);
} 
else
{ 
WYCAAAA_h = (A_HEAP(A68_232 ));
XYCAAAA = (&(WYCAAAA_h->Cs)) ;
(*XYCAAAA) = NVCAAAA_ch;
UYCAAAA = A_UNITE(YYCAAAA,mode3,3,(*WYCAAAA_h));
} 
QVCAAAA_assignment((&JVCAAAA_t), UYCAAAA);
AWCAAAA = A68_FALSE;
} 
else
{ 
 /* line 309: */
if ( (NVCAAAA_ch=='\"') )
{ 
AZCAAAA = A_HARR(ZYCAAAA,NVCAAAA_ch,A68_CHAR ) ;
KVCAAAA_s = A_R1COPY(AZCAAAA,BZCAAAA,A68_CHAR );
for ( ;; )
{ 
KSCAAAA_gathertochar((&KVCAAAA_s), NVCAAAA_ch);
 /* line 310: */
CZCAAAA = ((NVCAAAA_ch = DSCAAAA_nextchar())=='\"');
if ( !CZCAAAA ) break;
A_RC_PLUSAB(KVCAAAA_s,A_HARR(DZCAAAA,NVCAAAA_ch,A68_CHAR ));
}
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
EZCAAAA = (&(GFAAAAA_web->Loc)) ;
(*EZCAAAA)-=1;
} 
FZCAAAA_nat = 0;
 /* line 311: */
GZCAAAA_err = A68_FALSE;
IZCAAAA = KVCAAAA_s.dim[0].upb;
for ( HZCAAAA_i = KVCAAAA_s.dim[0].lwb;
HZCAAAA_i <= IZCAAAA;
HZCAAAA_i += 1 )
{ 
FZCAAAA_nat+=(((*(&A_R1INDEX(*(&KVCAAAA_s),HZCAAAA_i)))=='@'));
}
 /* line 312: */
if ( (FZCAAAA_nat & 1) )
{ 
{ 
KZCAAAA.fn.fn_global = XTDAASP_newline;
KZCAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(LZCAAAA,A_UNITE(JZCAAAA,mode30,30,KZCAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 313: */
QZCAAAA = OZCAAAA ;
MZCAAAA.data[0] = A_UNITE(PZCAAAA,mode1,1,QZCAAAA);
UZCAAAA = SZCAAAA ;
MZCAAAA.data[1] = A_UNITE(TZCAAAA,mode1,1,UZCAAAA);
ANBAAAA_printout(A_HIS1ARR(VZCAAAA,MZCAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
} 
else
{ 
if ( (FZCAAAA_nat>0) )
{ 
A_CLOSURE( XZCAAAA_generator, YZCAAAA_generator, ZZCAAAA_generator );
(( ZZCAAAA_generator * ) ( XZCAAAA_generator.nonlocals )) -> KVCAAAA_s = (&KVCAAAA_s);
(( ZZCAAAA_generator * ) ( XZCAAAA_generator.nonlocals )) -> FZCAAAA_nat = (&FZCAAAA_nat);
A_CALLPROC(XZCAAAA_generator,(A68_TRUE, &DADAAAA),(A68_TRUE, &DADAAAA,(XZCAAAA_generator).nonlocals));
CADAAAA_ss = DADAAAA;
EADAAAA_pss = (CADAAAA_ss.dim[0].lwb-1);
FADAAAA_atread = A68_FALSE;
 /* line 315: */
HADAAAA = KVCAAAA_s.dim[0].upb;
for ( GADAAAA_i = KVCAAAA_s.dim[0].lwb;
GADAAAA_i <= HADAAAA;
GADAAAA_i += 1 )
{ 
if ( !(!GZCAAAA_err) ) break;
IADAAAA_si = (*(&A_R1INDEX(*(&KVCAAAA_s),GADAAAA_i)));
if ( (IADAAAA_si=='@') )
{ 
if ( FADAAAA_atread )
{ 
JADAAAA = EADAAAA_pss+=1 ;
KADAAAA = (&A_R1INDEX(CADAAAA_ss,JADAAAA)) ;
(*KADAAAA) = IADAAAA_si;
 /* line 316: */
FADAAAA_atread = A68_FALSE;
} 
else
{ 
FADAAAA_atread = A68_TRUE;
} 
} 
else
{ 
if ( FADAAAA_atread )
{ 
{ 
MADAAAA.fn.fn_global = XTDAASP_newline;
MADAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(NADAAAA,A_UNITE(LADAAAA,mode30,30,MADAAAA),A68_215 ));
 /* line 317: */
IEAAAAA_consolepos = 0;
SADAAAA = QADAAAA ;
OADAAAA.data[0] = A_UNITE(RADAAAA,mode1,1,SADAAAA);
WADAAAA = UADAAAA ;
OADAAAA.data[1] = A_UNITE(VADAAAA,mode1,1,WADAAAA);
ANBAAAA_printout(A_HIS1ARR(XADAAAA,OADAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
 /* line 318: */
FADAAAA_atread = A68_FALSE;
GZCAAAA_err = A68_TRUE;
} 
else
{ 
YADAAAA = EADAAAA_pss+=1 ;
ZADAAAA = (&A_R1INDEX(CADAAAA_ss,YADAAAA)) ;
(*ZADAAAA) = IADAAAA_si;
} 
} 
}
if ( GZCAAAA_err )
{ 
BBDAAAA = CBDAAAA;
} 
else
{ 
BBDAAAA = CADAAAA_ss;
} 
KVCAAAA_s = A_R1COPY(BBDAAAA,DBDAAAA,A68_CHAR );
} 
} 
if ( GZCAAAA_err )
{ 
AWCAAAA = A68_TRUE;
} 
else
{ 
QVCAAAA_assignment((&JVCAAAA_t), A_UNITE(EBDAAAA,mode4,4,KVCAAAA_s));
 /* line 319: */
AWCAAAA = A68_FALSE;
} 
} 
else
{ 
if ( (NVCAAAA_ch=='#') )
{ 
HTCAAAA_skiptochar(NVCAAAA_ch);
AWCAAAA = A68_TRUE;
} 
else
{ 
 /* line 320: */
if ( (TSBAAAA_chop(NVCAAAA_ch, GBDAAAA)>0) )
{ 
JBDAAAA = A_HARR(HBDAAAA,NVCAAAA_ch,A68_CHAR ) ;
QVCAAAA_assignment((&JVCAAAA_t), A_UNITE(IBDAAAA,mode4,4,JBDAAAA));
AWCAAAA = A68_FALSE;
} 
else
{ 
if ( (NVCAAAA_ch==':') )
{ 
LBDAAAA = A_HARR(KBDAAAA,NVCAAAA_ch,A68_CHAR ) ;
KVCAAAA_s = A_R1COPY(LBDAAAA,MBDAAAA,A68_CHAR );
for ( ;; )
{ 
 /* line 321: */
if ( !(ECBAASP_charinstring(NVCAAAA_ch = DSCAAAA_nextchar(), A_LOC(A68_INT ), OBDAAAA)) ) break;
A_RC_PLUSAB(KVCAAAA_s,A_HARR(PBDAAAA,NVCAAAA_ch,A68_CHAR ));
}
 /* line 322: */
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
QBDAAAA = (&(GFAAAAA_web->Loc)) ;
(*QBDAAAA)-=1;
} 
QVCAAAA_assignment((&JVCAAAA_t), A_UNITE(RBDAAAA,mode4,4,KVCAAAA_s));
AWCAAAA = A68_FALSE;
} 
else
{ 
if ( (TSBAAAA_chop(NVCAAAA_ch, TBDAAAA)==0) )
{ 
 /* line 323: */
WBDAAAA = A_HARR(UBDAAAA,NVCAAAA_ch,A68_CHAR ) ;
QVCAAAA_assignment((&JVCAAAA_t), A_UNITE(VBDAAAA,mode4,4,WBDAAAA));
AWCAAAA = A68_FALSE;
} 
else
{ 
for ( ;; )
{ 
A_RC_PLUSAB(KVCAAAA_s,A_HARR(XBDAAAA,NVCAAAA_ch,A68_CHAR ));
NVCAAAA_ch = DSCAAAA_nextchar();
 /* line 324: */
ZBDAAAA = (TSBAAAA_chop(NVCAAAA_ch, ACDAAAA)>0);
if ( !ZBDAAAA ) break;
/*SKIP*/;
}
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
BCDAAAA = (&(GFAAAAA_web->Loc)) ;
(*BCDAAAA)-=1;
} 
QVCAAAA_assignment((&JVCAAAA_t), A_UNITE(CCDAAAA,mode4,4,KVCAAAA_s));
 /* line 325: */
AWCAAAA = A68_FALSE;
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
DCDAAAA = AWCAAAA;
if ( !DCDAAAA ) break;
/*SKIP*/;
}
 /* line 326: */
JCDAAAA = (*(&(GFAAAAA_web->N))) ;
XPBAASP_whole( A_UNITE(ICDAAAA,mode2,2,JCDAAAA), 0, &KCDAAAA );
NCDAAAA = (*(&(GFAAAAA_web->Loc))) ;
XPBAASP_whole( A_UNITE(MCDAAAA,mode2,2,NCDAAAA), 0, &OCDAAAA );
A_CALLPROC(VDAAAAA_debugprinttoken,(A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(HCDAAAA,KCDAAAA),LCDAAAA),OCDAAAA),PCDAAAA), JVCAAAA_t),(A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(HCDAAAA,KCDAAAA),LCDAAAA),OCDAAAA),PCDAAAA), JVCAAAA_t,(VDAAAAA_debugprinttoken).nonlocals));
QCDAAAA = JVCAAAA_t;
} 
A_PROC_EXIT(gettok);
*ReturnedValue = (QCDAAAA);
return;
} 
#undef NL

A_STATIC A68_VOID  SCDAAAA_gathertocs(A68_CHAR  C, A68_RC  *ReturnedValue)
{ 
A68_32  UCDAAAA;  /* avoid structure result */
A68_32  TCDAAAA_s;
A68_CHAR  VCDAAAA_ch;
A68_BOOL  WCDAAAA_sp;
A68_BOOL  XCDAAAA;  /* clause result */
A68_215  YCDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  ZCDAAAA;  /* procedure value */
A68_214  ADDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  BDDAAAA;  /* collateral clause result */
A68_273  EDDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  FDDAAAA;  /* YIELD */
A68_VC  IDDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JDDAAAA;  /* YIELD */
A68_RC  KDDAAAA;  /* OPERATORS - vector -> row */
A68_273  LDDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  MDDAAAA;  /* YIELD */
A68_274  NDDAAAA;  /* OPERATORS - istruct to row */
A68_BOOL  ODDAAAA;  /* clause result */
A68_VC  PDDAAAA;  /* YIELD */
A68_RC  QDDAAAA;  /* OPERATORS - vector -> row */
A68_RC  RDDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  SDDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  TDDAAAA;  /* clause result */
A68_RC  UDDAAAA;  /* clause result */
A_PROC_ENTRY(gathertocs);
 /* line 327: */
{ 
A_CALLPROC(EAAAASP_anonymous,(A68_TRUE, &UCDAAAA),(A68_TRUE, &UCDAAAA,(EAAAASP_anonymous).nonlocals));
TCDAAAA_s = UCDAAAA;
WCDAAAA_sp = A68_FALSE;
for ( ;; )
{ 
VCDAAAA_ch = DSCAAAA_nextchar();
XCDAAAA = (*(&(GFAAAAA_web->Ended)));
if ( XCDAAAA )
{ 
 /* line 328: */
{ 
ZCDAAAA.fn.fn_global = XTDAASP_newline;
ZCDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(ADDAAAA,A_UNITE(YCDAAAA,mode30,30,ZCDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 329: */
FDDAAAA = DDDAAAA ;
BDDAAAA.data[0] = A_UNITE(EDDAAAA,mode1,1,FDDAAAA);
JDDAAAA = A_VC_PLUS(HDDAAAA,A_HVEC(IDDAAAA,C,A68_CHAR )) ;
MDDAAAA = A_VECARR(JDDAAAA,KDDAAAA) ;
BDDAAAA.data[1] = A_UNITE(LDDAAAA,mode1,1,MDDAAAA);
ANBAAAA_printout(A_HIS1ARR(NDDAAAA,BDDAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
ODDAAAA = A68_FALSE;
} 
else
{ 
if ( (VCDAAAA_ch=='@') )
{ 
if ( ((VCDAAAA_ch = DSCAAAA_nextchar())==C) )
{ 
ODDAAAA = A68_FALSE;
} 
else
{ 
 /* line 330: */
PDDAAAA = A_C_PLUS('@',VCDAAAA_ch) ;
A_RC_PLUSAB(TCDAAAA_s,A_VECARR(PDDAAAA,QDDAAAA));
ODDAAAA = A68_TRUE;
} 
} 
else
{ 
if ( ((VCDAAAA_ch==NUAAASP_blank)|(VCDAAAA_ch==VUAAASP_tabch)) )
{ 
if ( !WCDAAAA_sp )
{ 
A_RC_PLUSAB(TCDAAAA_s,A_HARR(RDDAAAA,VCDAAAA_ch,A68_CHAR ));
 /* line 331: */
ODDAAAA = WCDAAAA_sp = A68_TRUE;
} 
else
{ 
ODDAAAA = A68_TRUE;
} 
} 
else
{ 
A_RC_PLUSAB(TCDAAAA_s,A_HARR(SDDAAAA,VCDAAAA_ch,A68_CHAR ));
ODDAAAA = !(WCDAAAA_sp = A68_FALSE);
} 
} 
} 
TDDAAAA = ODDAAAA;
if ( !TDDAAAA ) break;
/*SKIP*/;
}
UDDAAAA = TCDAAAA_s;
} 
A_PROC_EXIT(gathertocs);
*ReturnedValue = (UDDAAAA);
return;
} 
#undef NL

A_STATIC A68_BOOL  MEDAAAA_anonymous(A68_38 * F)
{ 
A68_BOOL  NEDAAAA;  /* clause result */
 /* line 336: */
{ 
XICAASP_close(F);
KUBAAAA_usage();
NEDAAAA = A68_TRUE;
} 
return( NEDAAAA );
} 
#undef NL

A_STATIC A68_BOOL  WIDAAAA_anonymous(A68_38 * F)
{ 
A68_215  XIDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  YIDAAAA;  /* procedure value */
A68_214  ZIDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  AJDAAAA;  /* collateral clause result */
A68_273  DJDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  EJDAAAA;  /* YIELD */
A68_273  HJDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  IJDAAAA;  /* YIELD */
A68_274  JJDAAAA;  /* OPERATORS - istruct to row */
A68_BOOL  KJDAAAA;  /* clause result */
{ 
{ 
YIDAAAA.fn.fn_global = XTDAASP_newline;
YIDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(ZIDAAAA,A_UNITE(XIDAAAA,mode30,30,YIDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 368: */
EJDAAAA = CJDAAAA ;
AJDAAAA.data[0] = A_UNITE(DJDAAAA,mode1,1,EJDAAAA);
IJDAAAA = GJDAAAA ;
AJDAAAA.data[1] = A_UNITE(HJDAAAA,mode1,1,IJDAAAA);
ANBAAAA_printout(A_HIS1ARR(JJDAAAA,AJDAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
ZWBAASP_exit((-1));
KJDAAAA = A68_TRUE;
} 
return( KJDAAAA );
} 
#undef NL

A_STATIC A68_VOID  TEEAAAA_generator(A68_BOOL  SEEAAAA_anonymous, A68_71  *ReturnedValue)
{ 
A68_71  UEEAAAA;  /* clause result */
A68_71  VEEAAAA;  /* OPERATORS - dynamic generator */
{ 
VEEAAAA.dim[0].upb = 4 ;
VEEAAAA.dim[0].lwb = 1 ;
A_1INITSTRIDES(VEEAAAA) ;
( SEEAAAA_anonymous? A_R1LOC(A68_INT ,VEEAAAA): A_R1HEAP(A68_INT ,VEEAAAA) );
UEEAAAA = VEEAAAA;
} 
*ReturnedValue = (UEEAAAA);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
int main(int argc, char *argv[], char *envp[])
{ 

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/usr/bin/a68toc","-s","-v","-lib","/usr/share/algol68toc","-dir","/usr/share/algol68toc","-dir","/home/neil/lib/m","-uname","seedfile","tang.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/usr/share/algol68toc/standard.m","/home/neil/lib/m/params.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_225  UAAAAAA;  /* procedure value */
A68_231  CBAAAAA;  /* procedure value */
A68_231  KBAAAAA;  /* procedure value */
A68_244  SBAAAAA;  /* procedure value */
A68_RC  CDAAAAA;  /* avoid structure result */
A68_RC  DDAAAAA;  /* avoid structure result */
A68_RC  FDAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  GDAAAAA;  /* avoid structure result */
A68_RC  HDAAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  IDAAAAA;  /* avoid structure result */
A68_247  WDAAAAA;  /* procedure value */
A68_248  BEAAAAA;  /* procedure value */
A68_249  GEAAAAA;  /* procedure value */
A68_224  MEAAAAA;  /* collateral clause result */
A68_250  NEAAAAA;  /* collateral clause result */
A68_71  OEAAAAA;  /* OPERATORS - istruct to row */
A68_VC  PEAAAAA;  /* YIELD */
A68_RC  QEAAAAA;  /* OPERATORS - vector -> row */
A68_224  HFAAAAA;  /* avoid structure result */
A68_224 * IFAAAAA;  /* staticpart generator */
A68_224  KFAAAAA;  /* avoid structure result */
A68_224  LFAAAAA;  /* collateral clause result */
A68_250  MFAAAAA;  /* collateral clause result */
A68_71  NFAAAAA;  /* OPERATORS - istruct to row */
A68_VC  OFAAAAA;  /* YIELD */
A68_RC  PFAAAAA;  /* OPERATORS - vector -> row */
A68_32  RFAAAAA;  /* avoid structure result */
A68_32  UFAAAAA;  /* avoid structure result */
A68_32  WFAAAAA;  /* avoid structure result */
A68_RC  ZFAAAAA;  /* YIELD */
A68_RC  AGAAAAA;  /* OPERATORS - copy to flex */
A68_32  CGAAAAA;  /* avoid structure result */
A68_253  MGAAAAA;  /* avoid structure result */
A68_262  OGAAAAA;  /* collateral clause result */
A68_254  GFBAAAA;  /* OPERATORS - istruct to row */
A68_253  HFBAAAA;  /* avoid structure result */
A68_264  PFBAAAA;  /* avoid structure result */
A68_INT  RFBAAAA;  /* to part of loop */
A68_229 ** SFBAAAA;  /* YIELD */
A68_239  XFBAAAA;  /* avoid structure result */
A68_240  YFBAAAA;  /* collateral clause result */
A68_237 ** BGBAAAA;  /* YIELD */
A68_237 ** CGBAAAA;  /* YIELD */
A68_237 *** OGBAAAA;  /* YIELD */
A68_BOOL  XDDAAAA;  /* clause result */
A68_206  ZDDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  AEDAAAA;  /* YIELD */
A68_212  DEDAAAA;  /* OPERATORS - mode -> union mode */
A68_211  EEDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_206  HEDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  IEDAAAA;  /* YIELD */
A68_45  OEDAAAA;  /* procedure value */
A68_34  PEDAAAA;  /* avoid structure result */
A68_34  QEDAAAA;  /* united object - for case conformity */
A68_BOOL  SEDAAAA;  /* clause result */
A68_INT  UEDAAAA;  /* to part of loop */
A68_33  VEDAAAA;  /* OPERATORS - simple index */
A68_34  WEDAAAA;  /* united object - for case conformity */
A68_BOOL  YEDAAAA;  /* clause result */
A68_BOOL  FFDAAAA;  /* clause result */
A68_32 * HFDAAAA;  /* YIELD */
A68_INT  IFDAAAA;  /* YIELD */
A68_33  LFDAAAA;  /* OPERATORS - simple index */
A68_INT  MFDAAAA;  /* YIELD */
A68_34  NFDAAAA;  /* united object - for case conformity */
A68_BOOL  PFDAAAA;  /* clause result */
A68_RC  UFDAAAA;  /* YIELD */
A68_RC  VFDAAAA;  /* OPERATORS - copy to flex */
A68_RC  XFDAAAA;  /* OPERATORS - copy to flex */
A68_346  BGDAAAA;  /* collateral clause result */
A68_215  EGDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  FGDAAAA;  /* YIELD */
A68_RC  GGDAAAA;  /* OPERATORS - trim index */
A68_RC  HGDAAAA;  /* avoid structure result */
A68_215  IGDAAAA;  /* OPERATORS - mode -> union mode */
A68_215  LGDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  MGDAAAA;  /* YIELD */
A68_215  NGDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  OGDAAAA;  /* procedure value */
A68_214  PGDAAAA;  /* OPERATORS - istruct to row */
A68_INT  TGDAAAA;  /* to part of loop */
A68_33  UGDAAAA;  /* OPERATORS - simple index */
A68_34  VGDAAAA;  /* united object - for case conformity */
A68_BOOL  XGDAAAA;  /* clause result */
A68_32  DHDAAAA;  /* avoid structure result */
A68_RC  EHDAAAA;  /* YIELD */
A68_RC  FHDAAAA;  /* OPERATORS - copy to flex */
A68_BOOL  HHDAAAA;  /* clause result */
A68_RC  IHDAAAA;  /* OPERATORS - trim index */
A68_RC  JHDAAAA;  /* OPERATORS - trim index */
A68_RC  KHDAAAA;  /* YIELD */
A68_RC  LHDAAAA;  /* OPERATORS - copy to flex */
A68_RC  MHDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  PHDAAAA;  /* avoid structure result */
A68_BOOL  RHDAAAA;  /* clause result */
A68_RC  SHDAAAA;  /* OPERATORS - trim index */
A68_RC  THDAAAA;  /* OPERATORS - trim index */
A68_RC  UHDAAAA;  /* YIELD */
A68_RC  VHDAAAA;  /* OPERATORS - copy to flex */
A68_RC  WHDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  GIDAAAA;  /* OPERATORS - copy to flex */
A68_RC  LIDAAAA;  /* OPERATORS - trim index */
A68_BOOL  MIDAAAA;  /* clause result */
A68_206  NIDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  QIDAAAA;  /* avoid structure result */
A68_RC  RIDAAAA;  /* YIELD */
A68_RC  SIDAAAA;  /* OPERATORS - copy to flex */
A68_45  LJDAAAA;  /* procedure value */
A68_INT * MJDAAAA;  /* YIELD */
A68_INT * NJDAAAA;  /* YIELD */
A68_247  QJDAAAA;  /* procedure value */
A68_248  RJDAAAA;  /* procedure value */
A68_249  SJDAAAA;  /* procedure value */
A68_INT * VJDAAAA;  /* YIELD */
A68_BOOL  YJDAAAA;  /* clause result */
A68_306  AKDAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  BKDAAAA;  /* YIELD */
A68_307  CKDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  EKDAAAA;  /* avoid structure result */
A68_BOOL  FKDAAAA;  /* clause result */
A68_215  GKDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  HKDAAAA;  /* procedure value */
A68_214  IKDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  JKDAAAA;  /* collateral clause result */
A68_273  MKDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  NKDAAAA;  /* YIELD */
A68_273  QKDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  RKDAAAA;  /* YIELD */
A68_274  SKDAAAA;  /* OPERATORS - istruct to row */
A68_RC  TKDAAAA;  /* OPERATORS - trim index */
A68_306  UKDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  VKDAAAA;  /* YIELD */
A68_307  WKDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  XKDAAAA;  /* loop control */
A68_INT * YKDAAAA;  /* YIELD */
A68_INT  ZKDAAAA;  /* loop control */
A68_INT * ALDAAAA;  /* YIELD */
A68_INT  DLDAAAA;  /* loop control */
A68_INT * ELDAAAA;  /* YIELD */
A68_243  GLDAAAA;  /* avoid structure result */
A68_243  HLDAAAA;  /* united object - for case conformity */
A68_215  JLDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  KLDAAAA;  /* procedure value */
A68_214  LLDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  MLDAAAA;  /* collateral clause result */
A68_273  PLDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  QLDAAAA;  /* YIELD */
A68_273  TLDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  ULDAAAA;  /* YIELD */
A68_274  VLDAAAA;  /* OPERATORS - istruct to row */
A68_215  WLDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  XLDAAAA;  /* procedure value */
A68_214  YLDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  ZLDAAAA;  /* collateral clause result */
A68_273  CMDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  DMDAAAA;  /* YIELD */
A68_273  GMDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  HMDAAAA;  /* YIELD */
A68_274  IMDAAAA;  /* OPERATORS - istruct to row */
A68_237  JMDAAAA;  /* collateral clause result */
A68_238  KMDAAAA;  /* OPERATORS - unite union */
A68_237  LMDAAAA;  /* collateral clause result */
A68_238  MMDAAAA;  /* OPERATORS - unite union */
A68_352  OMDAAAA;  /* collateral clause result */
A68_VC  TMDAAAA;  /* YIELD */
A68_RC  UMDAAAA;  /* OPERATORS - vector -> row */
A68_RC  VMDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  WMDAAAA;  /* clause result */
A68_254  XMDAAAA;  /* OPERATORS - istruct to row */
A68_RC  YMDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_237  ZMDAAAA;  /* collateral clause result */
A68_RC  ANDAAAA;  /* avoid structure result */
A68_238  BNDAAAA;  /* OPERATORS - mode -> union mode */
A68_237  CNDAAAA;  /* collateral clause result */
A68_RC  DNDAAAA;  /* avoid structure result */
A68_238  ENDAAAA;  /* OPERATORS - mode -> union mode */
A68_215  FNDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  GNDAAAA;  /* procedure value */
A68_214  HNDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  INDAAAA;  /* collateral clause result */
A68_273  LNDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  MNDAAAA;  /* YIELD */
A68_273  PNDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  QNDAAAA;  /* YIELD */
A68_274  RNDAAAA;  /* OPERATORS - istruct to row */
A68_RC  SNDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  VNDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  WNDAAAA;  /* procedure value */
A68_214  XNDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  YNDAAAA;  /* collateral clause result */
A68_273  BODAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  CODAAAA;  /* YIELD */
A68_273  FODAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  GODAAAA;  /* YIELD */
A68_274  HODAAAA;  /* OPERATORS - istruct to row */
A68_32  JODAAAA;  /* avoid structure result */
A68_RC  KODAAAA;  /* avoid structure result */
A68_RC  LODAAAA;  /* avoid structure result */
A68_RC  MODAAAA;  /* OPERATORS - copy to flex */
A68_INT  OODAAAA;  /* clause result */
A68_RC  QODAAAA;  /* OPERATORS - trim index */
A68_RC  SODAAAA;  /* OPERATORS - trim index */
A68_BOOL  UODAAAA;  /* clause result */
A68_215  VODAAAA;  /* OPERATORS - mode -> union mode */
A68_49  WODAAAA;  /* procedure value */
A68_214  XODAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  YODAAAA;  /* collateral clause result */
A68_273  BPDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  CPDAAAA;  /* YIELD */
A68_273  FPDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  GPDAAAA;  /* YIELD */
A68_274  HPDAAAA;  /* OPERATORS - istruct to row */
A68_237  IPDAAAA;  /* avoid structure result */
A68_237  JPDAAAA;  /* avoid structure result */
A68_237  KPDAAAA;  /* avoid structure result */
A68_INT * LPDAAAA;  /* YIELD */
A68_INT * MPDAAAA;  /* YIELD */
A68_215  NPDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  OPDAAAA;  /* procedure value */
A68_214  PPDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  QPDAAAA;  /* collateral clause result */
A68_273  TPDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  UPDAAAA;  /* YIELD */
A68_273  XPDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  YPDAAAA;  /* YIELD */
A68_274  ZPDAAAA;  /* OPERATORS - istruct to row */
A68_INT * AQDAAAA;  /* YIELD */
A68_215  BQDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  CQDAAAA;  /* procedure value */
A68_214  DQDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  EQDAAAA;  /* collateral clause result */
A68_273  HQDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  IQDAAAA;  /* YIELD */
A68_273  LQDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  MQDAAAA;  /* YIELD */
A68_274  NQDAAAA;  /* OPERATORS - istruct to row */
A68_RC  PQDAAAA;  /* OPERATORS - trim index */
A68_RC  RQDAAAA;  /* OPERATORS - trim index */
A68_BOOL  TQDAAAA;  /* clause result */
A68_215  UQDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  VQDAAAA;  /* procedure value */
A68_214  WQDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  XQDAAAA;  /* collateral clause result */
A68_273  ARDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  BRDAAAA;  /* YIELD */
A68_273  ERDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  FRDAAAA;  /* YIELD */
A68_274  GRDAAAA;  /* OPERATORS - istruct to row */
A68_237  HRDAAAA;  /* avoid structure result */
A68_237  IRDAAAA;  /* avoid structure result */
A68_237  JRDAAAA;  /* avoid structure result */
A68_INT * KRDAAAA;  /* YIELD */
A68_BOOL  LRDAAAA;  /* clause result */
A68_RC  NRDAAAA;  /* OPERATORS - trim index */
A68_RC  PRDAAAA;  /* OPERATORS - trim index */
A68_BOOL  RRDAAAA;  /* clause result */
A68_215  SRDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  TRDAAAA;  /* procedure value */
A68_214  URDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  VRDAAAA;  /* collateral clause result */
A68_273  YRDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  ZRDAAAA;  /* YIELD */
A68_273  CSDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  DSDAAAA;  /* YIELD */
A68_274  ESDAAAA;  /* OPERATORS - istruct to row */
A68_237  FSDAAAA;  /* collateral clause result */
A68_238  GSDAAAA;  /* OPERATORS - mode -> union mode */
A68_237  HSDAAAA;  /* collateral clause result */
A68_238  ISDAAAA;  /* OPERATORS - mode -> union mode */
A68_239 * JSDAAAA;  /* YIELD */
A68_237  KSDAAAA;  /* collateral clause result */
A68_238  LSDAAAA;  /* OPERATORS - mode -> union mode */
A68_239 * MSDAAAA;  /* YIELD */
A68_215  NSDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  OSDAAAA;  /* procedure value */
A68_214  PSDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  QSDAAAA;  /* collateral clause result */
A68_273  TSDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  USDAAAA;  /* YIELD */
A68_187  XSDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  YSDAAAA;  /* avoid structure result */
A68_273  ZSDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  ATDAAAA;  /* YIELD */
A68_274  BTDAAAA;  /* OPERATORS - istruct to row */
A68_237  CTDAAAA;  /* collateral clause result */
A68_238  DTDAAAA;  /* OPERATORS - mode -> union mode */
A68_239 * ETDAAAA;  /* YIELD */
A68_237  FTDAAAA;  /* collateral clause result */
A68_238  GTDAAAA;  /* OPERATORS - mode -> union mode */
A68_239 * HTDAAAA;  /* YIELD */
A68_215  ITDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  JTDAAAA;  /* procedure value */
A68_214  KTDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  LTDAAAA;  /* collateral clause result */
A68_273  OTDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  PTDAAAA;  /* YIELD */
A68_187  STDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  TTDAAAA;  /* avoid structure result */
A68_273  UTDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  VTDAAAA;  /* YIELD */
A68_274  WTDAAAA;  /* OPERATORS - istruct to row */
A68_215  XTDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  YTDAAAA;  /* procedure value */
A68_214  ZTDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  AUDAAAA;  /* collateral clause result */
A68_273  DUDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  EUDAAAA;  /* YIELD */
A68_273  HUDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  IUDAAAA;  /* YIELD */
A68_274  JUDAAAA;  /* OPERATORS - istruct to row */
A68_INT * KUDAAAA;  /* YIELD */
A68_BOOL  LUDAAAA;  /* clause result */
A68_RC  NUDAAAA;  /* OPERATORS - trim index */
A68_RC  PUDAAAA;  /* OPERATORS - trim index */
A68_BOOL  RUDAAAA;  /* clause result */
A68_215  SUDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  TUDAAAA;  /* procedure value */
A68_214  UUDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  VUDAAAA;  /* collateral clause result */
A68_273  YUDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  ZUDAAAA;  /* YIELD */
A68_273  CVDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  DVDAAAA;  /* YIELD */
A68_274  EVDAAAA;  /* OPERATORS - istruct to row */
A68_237  FVDAAAA;  /* collateral clause result */
A68_238  GVDAAAA;  /* OPERATORS - mode -> union mode */
A68_237  HVDAAAA;  /* collateral clause result */
A68_238  IVDAAAA;  /* OPERATORS - mode -> union mode */
A68_239 * JVDAAAA;  /* YIELD */
A68_237  KVDAAAA;  /* collateral clause result */
A68_238  LVDAAAA;  /* OPERATORS - mode -> union mode */
A68_239 * MVDAAAA;  /* YIELD */
A68_215  NVDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  OVDAAAA;  /* procedure value */
A68_214  PVDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  QVDAAAA;  /* collateral clause result */
A68_273  TVDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  UVDAAAA;  /* YIELD */
A68_187  XVDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  YVDAAAA;  /* avoid structure result */
A68_273  ZVDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  AWDAAAA;  /* YIELD */
A68_274  BWDAAAA;  /* OPERATORS - istruct to row */
A68_237  CWDAAAA;  /* collateral clause result */
A68_238  DWDAAAA;  /* OPERATORS - mode -> union mode */
A68_239 * EWDAAAA;  /* YIELD */
A68_237  FWDAAAA;  /* collateral clause result */
A68_238  GWDAAAA;  /* OPERATORS - mode -> union mode */
A68_239 * HWDAAAA;  /* YIELD */
A68_215  IWDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  JWDAAAA;  /* procedure value */
A68_214  KWDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  LWDAAAA;  /* collateral clause result */
A68_273  OWDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  PWDAAAA;  /* YIELD */
A68_187  SWDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  TWDAAAA;  /* avoid structure result */
A68_273  UWDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  VWDAAAA;  /* YIELD */
A68_274  WWDAAAA;  /* OPERATORS - istruct to row */
A68_237  XWDAAAA;  /* collateral clause result */
A68_RC  YWDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_238  ZWDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  AXDAAAA;  /* YIELD */
A68_237  BXDAAAA;  /* collateral clause result */
A68_RC  CXDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_238  DXDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  EXDAAAA;  /* YIELD */
A68_237  FXDAAAA;  /* avoid structure result */
A68_215  GXDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  HXDAAAA;  /* procedure value */
A68_214  IXDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  JXDAAAA;  /* collateral clause result */
A68_273  MXDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  NXDAAAA;  /* YIELD */
A68_273  QXDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  RXDAAAA;  /* YIELD */
A68_274  SXDAAAA;  /* OPERATORS - istruct to row */
A68_RC  TXDAAAA;  /* avoid structure result */
A68_BOOL  VXDAAAA;  /* clause result */
A68_215  WXDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  XXDAAAA;  /* procedure value */
A68_214  YXDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_273  DYDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  EYDAAAA;  /* YIELD */
A68_274  FYDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  GYDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  HYDAAAA;  /* procedure value */
A68_214  IYDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  JYDAAAA;  /* collateral clause result */
A68_273  MYDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  NYDAAAA;  /* YIELD */
A68_273  QYDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  RYDAAAA;  /* YIELD */
A68_274  SYDAAAA;  /* OPERATORS - istruct to row */
A68_237  TYDAAAA;  /* collateral clause result */
A68_238  UYDAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  VYDAAAA;  /* YIELD */
A68_237  WYDAAAA;  /* collateral clause result */
A68_238  XYDAAAA;  /* OPERATORS - mode -> union mode */
A68_INT  YYDAAAA;  /* YIELD */
A68_215  ZYDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  AZDAAAA;  /* procedure value */
A68_214  BZDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  CZDAAAA;  /* collateral clause result */
A68_273  FZDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  GZDAAAA;  /* YIELD */
A68_273  JZDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  KZDAAAA;  /* YIELD */
A68_274  LZDAAAA;  /* OPERATORS - istruct to row */
A68_RC  NZDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  OZDAAAA;  /* clause result */
A68_215  PZDAAAA;  /* OPERATORS - mode -> union mode */
A68_49  QZDAAAA;  /* procedure value */
A68_214  RZDAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  SZDAAAA;  /* collateral clause result */
A68_273  VZDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  WZDAAAA;  /* YIELD */
A68_273  ZZDAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  AAEAAAA;  /* YIELD */
A68_274  BAEAAAA;  /* OPERATORS - istruct to row */
A68_RC  CAEAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  DAEAAAA;  /* OPERATORS - mode -> union mode */
A68_49  EAEAAAA;  /* procedure value */
A68_214  FAEAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  GAEAAAA;  /* collateral clause result */
A68_273  JAEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  KAEAAAA;  /* YIELD */
A68_273  NAEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  OAEAAAA;  /* YIELD */
A68_274  PAEAAAA;  /* OPERATORS - istruct to row */
A68_215  QAEAAAA;  /* OPERATORS - mode -> union mode */
A68_49  RAEAAAA;  /* procedure value */
A68_214  SAEAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  TAEAAAA;  /* collateral clause result */
A68_273  WAEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  XAEAAAA;  /* YIELD */
A68_273  ABEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  BBEAAAA;  /* YIELD */
A68_274  CBEAAAA;  /* OPERATORS - istruct to row */
A68_RC  DBEAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  EBEAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_RC  FBEAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_215  GBEAAAA;  /* OPERATORS - mode -> union mode */
A68_49  HBEAAAA;  /* procedure value */
A68_214  IBEAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  JBEAAAA;  /* collateral clause result */
A68_273  MBEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  NBEAAAA;  /* YIELD */
A68_273  QBEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  RBEAAAA;  /* YIELD */
A68_274  SBEAAAA;  /* OPERATORS - istruct to row */
A68_237  TBEAAAA;  /* collateral clause result */
A68_238  UBEAAAA;  /* OPERATORS - unite union */
A68_237  VBEAAAA;  /* collateral clause result */
A68_238  WBEAAAA;  /* OPERATORS - unite union */
A68_215  YBEAAAA;  /* OPERATORS - mode -> union mode */
A68_49  ZBEAAAA;  /* procedure value */
A68_214  ACEAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  BCEAAAA;  /* collateral clause result */
A68_273  ECEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  FCEAAAA;  /* YIELD */
A68_273  ICEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  JCEAAAA;  /* YIELD */
A68_274  KCEAAAA;  /* OPERATORS - istruct to row */
A68_215  LCEAAAA;  /* OPERATORS - mode -> union mode */
A68_49  MCEAAAA;  /* procedure value */
A68_214  NCEAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  OCEAAAA;  /* collateral clause result */
A68_273  RCEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  SCEAAAA;  /* YIELD */
A68_273  VCEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  WCEAAAA;  /* YIELD */
A68_274  XCEAAAA;  /* OPERATORS - istruct to row */
A68_215  YCEAAAA;  /* OPERATORS - mode -> union mode */
A68_49  ZCEAAAA;  /* procedure value */
A68_214  ADEAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_315  BDEAAAA;  /* collateral clause result */
A68_273  EDEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  FDEAAAA;  /* YIELD */
A68_273  IDEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  JDEAAAA;  /* YIELD */
A68_274  KDEAAAA;  /* OPERATORS - istruct to row */
A68_237  NDEAAAA;  /* collateral clause result */
A68_238  ODEAAAA;  /* OPERATORS - mode -> union mode */
A68_238  PDEAAAA;  /* OPERATORS - mode -> union mode */
A68_237  SDEAAAA;  /* collateral clause result */
A68_238  TDEAAAA;  /* OPERATORS - mode -> union mode */
A68_238  UDEAAAA;  /* OPERATORS - mode -> union mode */
A68_237  VDEAAAA;  /* collateral clause result */
A68_238  WDEAAAA;  /* OPERATORS - unite union */
A68_271  XDEAAAA;  /* collateral clause result */
A68_215  YDEAAAA;  /* OPERATORS - mode -> union mode */
A68_49  ZDEAAAA;  /* procedure value */
A68_215  CEEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  DEEAAAA;  /* YIELD */
A68_215  EEEAAAA;  /* OPERATORS - mode -> union mode */
A68_49  FEEAAAA;  /* procedure value */
A68_214  GEEAAAA;  /* OPERATORS - istruct to row */
A68_310  HEEAAAA;  /* collateral clause result */
A68_RC  IEEAAAA;  /* OPERATORS - trim index */
A68_RC  JEEAAAA;  /* OPERATORS - trim index */
A68_215  KEEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  LEEAAAA;  /* YIELD */
A68_215  MEEAAAA;  /* OPERATORS - mode -> union mode */
A68_49  NEEAAAA;  /* procedure value */
A68_214  OEEAAAA;  /* OPERATORS - istruct to row */
A68_215  PEEAAAA;  /* OPERATORS - mode -> union mode */
A68_49  QEEAAAA;  /* procedure value */
A68_214  REEAAAA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_71  WEEAAAA;  /* avoid structure result */
A68_310  XEEAAAA;  /* collateral clause result */
A68_RC  YEEAAAA;  /* OPERATORS - trim index */
A68_RC  ZEEAAAA;  /* OPERATORS - trim index */
A68_215  AFEAAAA;  /* OPERATORS - mode -> union mode */
A68_RC  BFEAAAA;  /* YIELD */
A68_215  CFEAAAA;  /* OPERATORS - mode -> union mode */
A68_49  DFEAAAA;  /* procedure value */
A68_214  EFEAAAA;  /* OPERATORS - istruct to row */
A_GC_STARTUP(argc);
ANFAASP();   /* USE standard */
BAAAAAA();   /* USE params */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68-devel/Web68/tang.a68";
A_config.translation_time = "Thu May  6 16:20:12 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "AAAAAAA (other name seeds not available) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv,envp);
#endif
A_PROC_ENTRY(MAIN);
{ 
UAAAAAA.fn.fn_global = FAAAAAA_generator;
UAAAAAA.nonlocals = A68_NIL;
DAAAAAA_anonymous = UAAAAAA;
 /* line 4: */
CBAAAAA.fn.fn_global = XAAAAAA_generator;
CBAAAAA.nonlocals = A68_NIL;
VAAAAAA_anonymous = CBAAAAA;
 /* line 5: */
 /* line 6: */
KBAAAAA.fn.fn_global = FBAAAAA_generator;
KBAAAAA.nonlocals = A68_NIL;
DBAAAAA_anonymous = KBAAAAA;
 /* line 12: */
SBAAAAA.fn.fn_global = NBAAAAA_generator;
SBAAAAA.nonlocals = A68_NIL;
LBAAAAA_anonymous = SBAAAAA;
 /* line 13: */
VBAAAAA_cvstang = UBAAAAA;
 /* line 14: */
YBAAAAA_webext = XBAAAAA;
BCAAAAA_outext = ACAAAAA;
 /* line 17: */
ECAAAAA_( '0', '9', &CDAAAAA );
ECAAAAA_( 'A', 'Z', &DDAAAAA );
EDAAAAA_boldrange = A_RC_PLUS(CDAAAAA,DDAAAAA);
 /* line 18: */
ECAAAAA_( '0', '9', &GDAAAAA );
ECAAAAA_( 'a', 'z', &IDAAAAA );
JDAAAAA_idrange = A_RC_PLUS(A_RC_PLUS(A_RC_PLUS(A_HARR(FDAAAAA,NUAAASP_blank,A68_CHAR ),GDAAAAA),A_HARR(HDAAAAA,'_',A68_CHAR )),IDAAAAA);
 /* line 19: */
 /* line 20: */
 /* line 21: */
RDAAAAA_debug = A68_FALSE;
 /* line 22: */
WDAAAAA.fn.fn_global = UDAAAAA_anonymous;
WDAAAAA.nonlocals = A68_NIL;
VDAAAAA_debugprinttoken = (WDAAAAA);
 /* line 23: */
BEAAAAA.fn.fn_global = ZDAAAAA_anonymous;
BEAAAAA.nonlocals = A68_NIL;
AEAAAAA_debugprinttext = (BEAAAAA);
 /* line 24: */
GEAAAAA.fn.fn_global = EEAAAAA_anonymous;
GEAAAAA.nonlocals = A68_NIL;
FEAAAAA_debugprintstring = (GEAAAAA);
HEAAAAA_history = 0;
 /* line 25: */
IEAAAAA_consolepos = 0;
JEAAAAA_phaseone = A68_TRUE;
 /* line 26: */
KEAAAAA_filenumber = 0;
 /* line 27: */
LEAAAAA_inctree = LDAAAAA_noinc;
MEAAAAA.F = A_HEAP(A68_38 );
MEAAAAA.Ended = A68_FALSE;
MEAAAAA.Fnum = 0;
 /* line 28: */
MEAAAAA.N = 0;
MEAAAAA.Loc = 0;
MEAAAAA.Upb = 0;
NEAAAAA.data[0] = 0;
NEAAAAA.data[1] = 0;
NEAAAAA.data[2] = 0;
NEAAAAA.data[3] = 0;
MEAAAAA.Sec = A_HIS1ARR(OEAAAAA,NEAAAAA,A68_INT ,4);
PEAAAAA = A_C_TIMES(NUAAASP_blank,256) ;
MEAAAAA.B = A_VECARR(PEAAAAA,QEAAAAA);
MEAAAAA.Next = KDAAAAA_nostream;
A_CALLPROC(DAAAAAA_anonymous,(A68_FALSE, &HFAAAAA),(A68_FALSE, &HFAAAAA,(DAAAAAA_anonymous).nonlocals));
GFAAAAA_web = TEAAAAA_assignment(A_HEAP_STATIC(A68_224 ,IFAAAAA,HFAAAAA), MEAAAAA);
A_CALLPROC(DAAAAAA_anonymous,(A68_TRUE, &KFAAAAA),(A68_TRUE, &KFAAAAA,(DAAAAAA_anonymous).nonlocals));
JFAAAAA_output = KFAAAAA;
LFAAAAA.F = A_HEAP(A68_38 );
LFAAAAA.Ended = A68_FALSE;
LFAAAAA.Fnum = 0;
 /* line 29: */
LFAAAAA.N = 0;
LFAAAAA.Loc = 0;
LFAAAAA.Upb = 0;
MFAAAAA.data[0] = 0;
MFAAAAA.data[1] = 0;
MFAAAAA.data[2] = 0;
MFAAAAA.data[3] = 0;
LFAAAAA.Sec = A_HIS1ARR(NFAAAAA,MFAAAAA,A68_INT ,4);
OFAAAAA = A_C_TIMES(NUAAASP_blank,256) ;
LFAAAAA.B = A_VECARR(OFAAAAA,PFAAAAA);
LFAAAAA.Next = KDAAAAA_nostream;
TEAAAAA_assignment((&JFAAAAA_output), LFAAAAA);
A_CALLPROC(EAAAASP_anonymous,(A68_TRUE, &RFAAAAA),(A68_TRUE, &RFAAAAA,(EAAAASP_anonymous).nonlocals));
QFAAAAA_tangfn = RFAAAAA;
 /* line 30: */
A_CALLPROC(EAAAASP_anonymous,(A68_TRUE, &UFAAAAA),(A68_TRUE, &UFAAAAA,(EAAAASP_anonymous).nonlocals));
TFAAAAA_homedir = UFAAAAA;
 /* line 31: */
A_CALLPROC(EAAAASP_anonymous,(A68_TRUE, &WFAAAAA),(A68_TRUE, &WFAAAAA,(EAAAASP_anonymous).nonlocals));
VFAAAAA_includepaths = WFAAAAA;
ZFAAAAA = YFAAAAA ;
VFAAAAA_includepaths = A_R1COPY(ZFAAAAA,AGAAAAA,A68_CHAR );
 /* line 32: */
A_CALLPROC(EAAAASP_anonymous,(A68_TRUE, &CGAAAAA),(A68_TRUE, &CGAAAAA,(EAAAASP_anonymous).nonlocals));
BGAAAAA_arg = CGAAAAA;
DGAAAAA_curmood = 0;
FGAAAAA_generator( A68_FALSE, &MGAAAAA );
NGAAAAA_boldsym = MGAAAAA;
OGAAAAA.data[0] = QGAAAAA;
OGAAAAA.data[1] = SGAAAAA;
OGAAAAA.data[2] = UGAAAAA;
OGAAAAA.data[3] = WGAAAAA;
OGAAAAA.data[4] = YGAAAAA;
OGAAAAA.data[5] = AHAAAAA;
OGAAAAA.data[6] = CHAAAAA;
OGAAAAA.data[7] = EHAAAAA;
OGAAAAA.data[8] = GHAAAAA;
 /* line 34: */
OGAAAAA.data[9] = IHAAAAA;
OGAAAAA.data[10] = KHAAAAA;
OGAAAAA.data[11] = MHAAAAA;
OGAAAAA.data[12] = OHAAAAA;
OGAAAAA.data[13] = QHAAAAA;
OGAAAAA.data[14] = SHAAAAA;
OGAAAAA.data[15] = UHAAAAA;
OGAAAAA.data[16] = WHAAAAA;
OGAAAAA.data[17] = YHAAAAA;
OGAAAAA.data[18] = AIAAAAA;
OGAAAAA.data[19] = CIAAAAA;
OGAAAAA.data[20] = EIAAAAA;
OGAAAAA.data[21] = GIAAAAA;
OGAAAAA.data[22] = IIAAAAA;
OGAAAAA.data[23] = KIAAAAA;
OGAAAAA.data[24] = MIAAAAA;
OGAAAAA.data[25] = OIAAAAA;
 /* line 35: */
OGAAAAA.data[26] = QIAAAAA;
OGAAAAA.data[27] = SIAAAAA;
OGAAAAA.data[28] = UIAAAAA;
OGAAAAA.data[29] = WIAAAAA;
OGAAAAA.data[30] = YIAAAAA;
OGAAAAA.data[31] = AJAAAAA;
OGAAAAA.data[32] = CJAAAAA;
OGAAAAA.data[33] = EJAAAAA;
OGAAAAA.data[34] = GJAAAAA;
OGAAAAA.data[35] = IJAAAAA;
OGAAAAA.data[36] = KJAAAAA;
OGAAAAA.data[37] = MJAAAAA;
OGAAAAA.data[38] = OJAAAAA;
OGAAAAA.data[39] = QJAAAAA;
OGAAAAA.data[40] = SJAAAAA;
OGAAAAA.data[41] = UJAAAAA;
OGAAAAA.data[42] = WJAAAAA;
 /* line 36: */
OGAAAAA.data[43] = YJAAAAA;
OGAAAAA.data[44] = AKAAAAA;
OGAAAAA.data[45] = CKAAAAA;
OGAAAAA.data[46] = EKAAAAA;
OGAAAAA.data[47] = GKAAAAA;
OGAAAAA.data[48] = IKAAAAA;
OGAAAAA.data[49] = KKAAAAA;
OGAAAAA.data[50] = MKAAAAA;
OGAAAAA.data[51] = OKAAAAA;
OGAAAAA.data[52] = QKAAAAA;
OGAAAAA.data[53] = SKAAAAA;
OGAAAAA.data[54] = UKAAAAA;
OGAAAAA.data[55] = WKAAAAA;
OGAAAAA.data[56] = YKAAAAA;
 /* line 37: */
OGAAAAA.data[57] = ALAAAAA;
OGAAAAA.data[58] = CLAAAAA;
OGAAAAA.data[59] = ELAAAAA;
OGAAAAA.data[60] = GLAAAAA;
OGAAAAA.data[61] = ILAAAAA;
OGAAAAA.data[62] = KLAAAAA;
OGAAAAA.data[63] = MLAAAAA;
OGAAAAA.data[64] = OLAAAAA;
OGAAAAA.data[65] = QLAAAAA;
OGAAAAA.data[66] = SLAAAAA;
OGAAAAA.data[67] = ULAAAAA;
OGAAAAA.data[68] = WLAAAAA;
OGAAAAA.data[69] = YLAAAAA;
 /* line 38: */
OGAAAAA.data[70] = AMAAAAA;
OGAAAAA.data[71] = CMAAAAA;
OGAAAAA.data[72] = EMAAAAA;
OGAAAAA.data[73] = GMAAAAA;
OGAAAAA.data[74] = IMAAAAA;
OGAAAAA.data[75] = KMAAAAA;
OGAAAAA.data[76] = MMAAAAA;
OGAAAAA.data[77] = OMAAAAA;
OGAAAAA.data[78] = QMAAAAA;
OGAAAAA.data[79] = SMAAAAA;
OGAAAAA.data[80] = UMAAAAA;
OGAAAAA.data[81] = WMAAAAA;
OGAAAAA.data[82] = YMAAAAA;
OGAAAAA.data[83] = ANAAAAA;
OGAAAAA.data[84] = CNAAAAA;
 /* line 39: */
OGAAAAA.data[85] = ENAAAAA;
OGAAAAA.data[86] = GNAAAAA;
OGAAAAA.data[87] = INAAAAA;
OGAAAAA.data[88] = KNAAAAA;
OGAAAAA.data[89] = MNAAAAA;
OGAAAAA.data[90] = ONAAAAA;
OGAAAAA.data[91] = QNAAAAA;
OGAAAAA.data[92] = SNAAAAA;
OGAAAAA.data[93] = UNAAAAA;
OGAAAAA.data[94] = WNAAAAA;
OGAAAAA.data[95] = YNAAAAA;
OGAAAAA.data[96] = AOAAAAA;
OGAAAAA.data[97] = COAAAAA;
OGAAAAA.data[98] = EOAAAAA;
 /* line 40: */
OGAAAAA.data[99] = GOAAAAA;
OGAAAAA.data[100] = IOAAAAA;
OGAAAAA.data[101] = KOAAAAA;
OGAAAAA.data[102] = MOAAAAA;
OGAAAAA.data[103] = OOAAAAA;
OGAAAAA.data[104] = QOAAAAA;
OGAAAAA.data[105] = SOAAAAA;
OGAAAAA.data[106] = UOAAAAA;
OGAAAAA.data[107] = WOAAAAA;
OGAAAAA.data[108] = YOAAAAA;
OGAAAAA.data[109] = APAAAAA;
OGAAAAA.data[110] = CPAAAAA;
 /* line 41: */
OGAAAAA.data[111] = EPAAAAA;
OGAAAAA.data[112] = GPAAAAA;
OGAAAAA.data[113] = IPAAAAA;
OGAAAAA.data[114] = KPAAAAA;
OGAAAAA.data[115] = MPAAAAA;
OGAAAAA.data[116] = OPAAAAA;
OGAAAAA.data[117] = QPAAAAA;
OGAAAAA.data[118] = SPAAAAA;
OGAAAAA.data[119] = UPAAAAA;
OGAAAAA.data[120] = WPAAAAA;
OGAAAAA.data[121] = YPAAAAA;
OGAAAAA.data[122] = AQAAAAA;
OGAAAAA.data[123] = CQAAAAA;
OGAAAAA.data[124] = EQAAAAA;
OGAAAAA.data[125] = GQAAAAA;
 /* line 42: */
OGAAAAA.data[126] = IQAAAAA;
OGAAAAA.data[127] = KQAAAAA;
OGAAAAA.data[128] = MQAAAAA;
OGAAAAA.data[129] = OQAAAAA;
OGAAAAA.data[130] = QQAAAAA;
OGAAAAA.data[131] = SQAAAAA;
OGAAAAA.data[132] = UQAAAAA;
OGAAAAA.data[133] = WQAAAAA;
OGAAAAA.data[134] = YQAAAAA;
OGAAAAA.data[135] = ARAAAAA;
OGAAAAA.data[136] = CRAAAAA;
OGAAAAA.data[137] = ERAAAAA;
 /* line 43: */
OGAAAAA.data[138] = GRAAAAA;
OGAAAAA.data[139] = IRAAAAA;
OGAAAAA.data[140] = KRAAAAA;
OGAAAAA.data[141] = MRAAAAA;
OGAAAAA.data[142] = ORAAAAA;
OGAAAAA.data[143] = QRAAAAA;
OGAAAAA.data[144] = SRAAAAA;
OGAAAAA.data[145] = URAAAAA;
OGAAAAA.data[146] = WRAAAAA;
OGAAAAA.data[147] = YRAAAAA;
OGAAAAA.data[148] = ASAAAAA;
OGAAAAA.data[149] = CSAAAAA;
OGAAAAA.data[150] = ESAAAAA;
OGAAAAA.data[151] = GSAAAAA;
 /* line 44: */
OGAAAAA.data[152] = ISAAAAA;
OGAAAAA.data[153] = KSAAAAA;
OGAAAAA.data[154] = MSAAAAA;
OGAAAAA.data[155] = OSAAAAA;
OGAAAAA.data[156] = QSAAAAA;
OGAAAAA.data[157] = SSAAAAA;
OGAAAAA.data[158] = USAAAAA;
OGAAAAA.data[159] = WSAAAAA;
OGAAAAA.data[160] = YSAAAAA;
OGAAAAA.data[161] = ATAAAAA;
OGAAAAA.data[162] = CTAAAAA;
OGAAAAA.data[163] = ETAAAAA;
OGAAAAA.data[164] = GTAAAAA;
OGAAAAA.data[165] = ITAAAAA;
 /* line 45: */
OGAAAAA.data[166] = KTAAAAA;
OGAAAAA.data[167] = MTAAAAA;
OGAAAAA.data[168] = OTAAAAA;
OGAAAAA.data[169] = QTAAAAA;
OGAAAAA.data[170] = STAAAAA;
OGAAAAA.data[171] = UTAAAAA;
OGAAAAA.data[172] = WTAAAAA;
OGAAAAA.data[173] = YTAAAAA;
OGAAAAA.data[174] = AUAAAAA;
OGAAAAA.data[175] = CUAAAAA;
OGAAAAA.data[176] = EUAAAAA;
OGAAAAA.data[177] = GUAAAAA;
 /* line 46: */
OGAAAAA.data[178] = IUAAAAA;
OGAAAAA.data[179] = KUAAAAA;
OGAAAAA.data[180] = MUAAAAA;
OGAAAAA.data[181] = OUAAAAA;
OGAAAAA.data[182] = QUAAAAA;
OGAAAAA.data[183] = SUAAAAA;
OGAAAAA.data[184] = UUAAAAA;
OGAAAAA.data[185] = WUAAAAA;
OGAAAAA.data[186] = YUAAAAA;
OGAAAAA.data[187] = AVAAAAA;
OGAAAAA.data[188] = CVAAAAA;
OGAAAAA.data[189] = EVAAAAA;
OGAAAAA.data[190] = GVAAAAA;
 /* line 47: */
OGAAAAA.data[191] = IVAAAAA;
OGAAAAA.data[192] = KVAAAAA;
OGAAAAA.data[193] = MVAAAAA;
OGAAAAA.data[194] = OVAAAAA;
OGAAAAA.data[195] = QVAAAAA;
OGAAAAA.data[196] = SVAAAAA;
OGAAAAA.data[197] = UVAAAAA;
OGAAAAA.data[198] = WVAAAAA;
OGAAAAA.data[199] = YVAAAAA;
OGAAAAA.data[200] = AWAAAAA;
OGAAAAA.data[201] = CWAAAAA;
OGAAAAA.data[202] = EWAAAAA;
OGAAAAA.data[203] = GWAAAAA;
OGAAAAA.data[204] = IWAAAAA;
 /* line 48: */
OGAAAAA.data[205] = KWAAAAA;
OGAAAAA.data[206] = MWAAAAA;
OGAAAAA.data[207] = OWAAAAA;
OGAAAAA.data[208] = QWAAAAA;
OGAAAAA.data[209] = SWAAAAA;
OGAAAAA.data[210] = UWAAAAA;
OGAAAAA.data[211] = WWAAAAA;
OGAAAAA.data[212] = YWAAAAA;
OGAAAAA.data[213] = AXAAAAA;
OGAAAAA.data[214] = CXAAAAA;
OGAAAAA.data[215] = EXAAAAA;
OGAAAAA.data[216] = GXAAAAA;
OGAAAAA.data[217] = IXAAAAA;
OGAAAAA.data[218] = KXAAAAA;
OGAAAAA.data[219] = MXAAAAA;
 /* line 49: */
OGAAAAA.data[220] = OXAAAAA;
OGAAAAA.data[221] = QXAAAAA;
OGAAAAA.data[222] = SXAAAAA;
OGAAAAA.data[223] = UXAAAAA;
OGAAAAA.data[224] = WXAAAAA;
OGAAAAA.data[225] = YXAAAAA;
OGAAAAA.data[226] = AYAAAAA;
OGAAAAA.data[227] = CYAAAAA;
OGAAAAA.data[228] = EYAAAAA;
OGAAAAA.data[229] = GYAAAAA;
OGAAAAA.data[230] = IYAAAAA;
OGAAAAA.data[231] = KYAAAAA;
OGAAAAA.data[232] = MYAAAAA;
OGAAAAA.data[233] = OYAAAAA;
OGAAAAA.data[234] = QYAAAAA;
 /* line 50: */
OGAAAAA.data[235] = SYAAAAA;
OGAAAAA.data[236] = UYAAAAA;
OGAAAAA.data[237] = WYAAAAA;
OGAAAAA.data[238] = YYAAAAA;
OGAAAAA.data[239] = AZAAAAA;
OGAAAAA.data[240] = CZAAAAA;
OGAAAAA.data[241] = EZAAAAA;
OGAAAAA.data[242] = GZAAAAA;
OGAAAAA.data[243] = IZAAAAA;
OGAAAAA.data[244] = KZAAAAA;
OGAAAAA.data[245] = MZAAAAA;
OGAAAAA.data[246] = OZAAAAA;
OGAAAAA.data[247] = QZAAAAA;
OGAAAAA.data[248] = SZAAAAA;
OGAAAAA.data[249] = UZAAAAA;
OGAAAAA.data[250] = WZAAAAA;
OGAAAAA.data[251] = YZAAAAA;
 /* line 51: */
OGAAAAA.data[252] = AABAAAA;
OGAAAAA.data[253] = CABAAAA;
OGAAAAA.data[254] = EABAAAA;
OGAAAAA.data[255] = GABAAAA;
OGAAAAA.data[256] = IABAAAA;
OGAAAAA.data[257] = KABAAAA;
OGAAAAA.data[258] = MABAAAA;
OGAAAAA.data[259] = OABAAAA;
OGAAAAA.data[260] = QABAAAA;
OGAAAAA.data[261] = SABAAAA;
OGAAAAA.data[262] = UABAAAA;
OGAAAAA.data[263] = WABAAAA;
OGAAAAA.data[264] = YABAAAA;
OGAAAAA.data[265] = ABBAAAA;
OGAAAAA.data[266] = CBBAAAA;
OGAAAAA.data[267] = EBBAAAA;
OGAAAAA.data[268] = GBBAAAA;
OGAAAAA.data[269] = IBBAAAA;
OGAAAAA.data[270] = KBBAAAA;
OGAAAAA.data[271] = MBBAAAA;
 /* line 52: */
OGAAAAA.data[272] = OBBAAAA;
OGAAAAA.data[273] = QBBAAAA;
OGAAAAA.data[274] = SBBAAAA;
OGAAAAA.data[275] = UBBAAAA;
OGAAAAA.data[276] = WBBAAAA;
OGAAAAA.data[277] = YBBAAAA;
OGAAAAA.data[278] = ACBAAAA;
OGAAAAA.data[279] = CCBAAAA;
OGAAAAA.data[280] = ECBAAAA;
OGAAAAA.data[281] = GCBAAAA;
OGAAAAA.data[282] = ICBAAAA;
OGAAAAA.data[283] = KCBAAAA;
OGAAAAA.data[284] = MCBAAAA;
OGAAAAA.data[285] = OCBAAAA;
OGAAAAA.data[286] = QCBAAAA;
 /* line 53: */
OGAAAAA.data[287] = SCBAAAA;
OGAAAAA.data[288] = UCBAAAA;
OGAAAAA.data[289] = WCBAAAA;
OGAAAAA.data[290] = YCBAAAA;
OGAAAAA.data[291] = ADBAAAA;
OGAAAAA.data[292] = CDBAAAA;
OGAAAAA.data[293] = EDBAAAA;
OGAAAAA.data[294] = GDBAAAA;
OGAAAAA.data[295] = IDBAAAA;
OGAAAAA.data[296] = KDBAAAA;
OGAAAAA.data[297] = MDBAAAA;
OGAAAAA.data[298] = ODBAAAA;
OGAAAAA.data[299] = QDBAAAA;
OGAAAAA.data[300] = SDBAAAA;
OGAAAAA.data[301] = UDBAAAA;
OGAAAAA.data[302] = WDBAAAA;
OGAAAAA.data[303] = YDBAAAA;
OGAAAAA.data[304] = AEBAAAA;
 /* line 54: */
OGAAAAA.data[305] = CEBAAAA;
OGAAAAA.data[306] = EEBAAAA;
OGAAAAA.data[307] = GEBAAAA;
OGAAAAA.data[308] = IEBAAAA;
OGAAAAA.data[309] = KEBAAAA;
OGAAAAA.data[310] = MEBAAAA;
OGAAAAA.data[311] = OEBAAAA;
OGAAAAA.data[312] = QEBAAAA;
OGAAAAA.data[313] = SEBAAAA;
OGAAAAA.data[314] = UEBAAAA;
OGAAAAA.data[315] = WEBAAAA;
ZEBAAAA_assignment( NGAAAAA_boldsym, A_HIS1ARR(GFBAAAA,OGAAAAA,A68_RC ,316), &HFBAAAA );
HFBAAAA;
 /* line 55: */
IFBAAAA_macroroot = MDAAAAA_nomac;
JFBAAAA_moduleroot = NDAAAAA_nomod;
LFBAAAA_generator( A68_TRUE, &PFBAAAA );
OFBAAAA_tagroot = PFBAAAA;
 /* line 56: */
RFBAAAA = OFBAAAA_tagroot.dim[0].upb;
for ( QFBAAAA_i = OFBAAAA_tagroot.dim[0].lwb;
QFBAAAA_i <= RFBAAAA;
QFBAAAA_i += 1 )
{ 
SFBAAAA = (&A_R1INDEX(OFBAAAA_tagroot,QFBAAAA_i)) ;
(*SFBAAAA) = PDAAAAA_notag;
}
 /* line 57: */
TFBAAAA_oneoffmacro = A68_FALSE;
UFBAAAA_curmac = MDAAAAA_nomac;
 /* line 58: */
VFBAAAA_curmod = NDAAAAA_nomod;
A_CALLPROC(LBAAAAA_anonymous,(A68_TRUE, &XFBAAAA),(A68_TRUE, &XFBAAAA,(LBAAAAA_anonymous).nonlocals));
WFBAAAA_unnamedmodule = XFBAAAA;
YFBAAAA.Id = AGBAAAA;
BGBAAAA = A_HEAP(A68_237 *) ;
(*BGBAAAA) = QDAAAAA_notext ;
YFBAAAA.Textbeg = BGBAAAA;
 /* line 59: */
CGBAAAA = A_HEAP(A68_237 *) ;
(*CGBAAAA) = QDAAAAA_notext ;
YFBAAAA.Textend = CGBAAAA;
YFBAAAA.Left = NDAAAAA_nomod;
YFBAAAA.Right = NDAAAAA_nomod;
FGBAAAA_assignment((&WFBAAAA_unnamedmodule), YFBAAAA);
OGBAAAA = (&((&WFBAAAA_unnamedmodule)->Textend)) ;
(*OGBAAAA) = (*(&((&WFBAAAA_unnamedmodule)->Textbeg)));
 /* line 60: */
PGBAAAA_incomment = 0;
QGBAAAA_tagoutput = A68_FALSE;
 /* line 61: */
 /* line 62: */
/*SKIP*/;
/*SKIP*/;
 /* line 79: */
 /* line 83: */
 /* line 89: */
 /* line 93: */
 /* line 113: */
 /* line 116: */
 /* line 125: */
 /* line 133: */
 /* line 136: */
 /* line 138: */
 /* line 140: */
 /* line 156: */
 /* line 166: */
 /* line 169: */
 /* line 171: */
 /* line 174: */
 /* line 188: */
 /* line 230: */
 /* line 246: */
 /* line 250: */
 /* line 261: */
 /* line 275: */
 /* line 278: */
 /* line 284: */
 /* line 289: */
 /* line 332: */
{ 
 /* line 333: */
AEDAAAA = YDDAAAA ;
XDDAAAA = (OHCAASP_open((&VDDAAAA_hf), A_UNITE(ZDDAAAA,mode2,2,AEDAAAA), LDDAASP_envchannel)!=0);
if ( XDDAAAA )
{ 
PQBAAAA_simpleerror(CEDAAAA, 5);
} 
else
{ 
UKEAASP_get((&VDDAAAA_hf), A_HARR(EEDAAAA,A_UNITE(DEDAAAA,mode3,3,(&TFAAAAA_homedir)),A68_212 ));
XICAASP_close((&VDDAAAA_hf));
} 
} 
 /* line 334: */
IEDAAAA = GEDAAAA ;
if ( (OHCAASP_open((&SFAAAAA_argf), A_UNITE(HEDAAAA,mode2,2,IEDAAAA), YZCAASP_argchannel)!=0) )
{ 
 /* line 335: */
PQBAAAA_simpleerror(KEDAAAA, 5);
} 
else
{ 
OEDAAAA.fn.fn_global = MEDAAAA_anonymous;
OEDAAAA.nonlocals = A68_NIL;
UFCAASP_onlogicalfileend((&SFAAAAA_argf), OEDAAAA);
} 
 /* line 337: */
DFAAAAA_getparam( (&SFAAAAA_argf), &PEDAAAA );
QEDAAAA = PEDAAAA ;
switch ( QEDAAAA.mode )
{ 
case 5: /* REF STRUCT(MODE32,REF MODE33)  */
REDAAAA_rp = (QEDAAAA.data.mode5);
if ( (REDAAAA_rp==VAAAAAA_noparam) )
{ 
SEDAAAA = A68_TRUE;
} 
else
{ 
 /* line 338: */
SEDAAAA = ((*(&(REDAAAA_rp->Val))).dim[0].upb==0);
} 
if ( SEDAAAA )
{ 
KUBAAAA_usage();
} 
else
{ 
UEDAAAA = (*(&(REDAAAA_rp->Val))).dim[0].upb;
for ( TEDAAAA_i = (*(&(REDAAAA_rp->Val))).dim[0].lwb;
TEDAAAA_i <= UEDAAAA;
TEDAAAA_i += 1 )
{ 
 /* line 339: */
VEDAAAA = (*(&(REDAAAA_rp->Val))) ;
WEDAAAA = (*(&A_R1INDEX(VEDAAAA,TEDAAAA_i))) ;
switch ( WEDAAAA.mode )
{ 
case 5: /* REF STRUCT(MODE32,REF MODE33)  */
XEDAAAA_rp1 = (WEDAAAA.data.mode5);
if ( (XEDAAAA_rp1==VAAAAAA_noparam) )
{ 
YEDAAAA = A68_TRUE;
} 
else
{ 
 /* line 340: */
YEDAAAA = A_RC_EQ((*(&(XEDAAAA_rp1->Prog))),AFDAAAA);
} 
if ( YEDAAAA )
{ 
PQBAAAA_simpleerror(CFDAAAA, 5);
} 
else
{ 
{ 
 /* line 341: */
HFDAAAA = (&(XEDAAAA_rp1->Prog)) ;
IFDAAAA = (*(&(XEDAAAA_rp1->Prog))).dim[0].lwb ;
FFDAAAA = ECBAASP_charinstring((*(&A_R1INDEX(*HFDAAAA,IFDAAAA))), (&DFDAAAA_p), GFDAAAA);
if ( FFDAAAA )
{ 
switch ( DFDAAAA_p )
{ 
case 1: 
RDAAAAA_debug = A68_TRUE;
break;
case 2: 
 /* line 342: */
if ( ((*(&(XEDAAAA_rp1->Val))).dim[0].upb!=1) )
{ 
PQBAAAA_simpleerror(KFDAAAA, 5);
} 
else
{ 
 /* line 343: */
LFDAAAA = (*(&(XEDAAAA_rp1->Val))) ;
MFDAAAA = (*(&(XEDAAAA_rp1->Val))).dim[0].lwb ;
NFDAAAA = (*(&A_R1INDEX(LFDAAAA,MFDAAAA))) ;
switch ( NFDAAAA.mode )
{ 
case 5: /* REF STRUCT(MODE32,REF MODE33)  */
OFDAAAA_rp2 = (NFDAAAA.data.mode5);
if ( (OFDAAAA_rp2==VAAAAAA_noparam) )
{ 
 /* line 344: */
PFDAAAA = A68_TRUE;
} 
else
{ 
PFDAAAA = A_RC_EQ((*(&(OFDAAAA_rp2->Prog))),RFDAAAA);
} 
if ( PFDAAAA )
{ 
PQBAAAA_simpleerror(TFDAAAA, 5);
} 
else
{ 
 /* line 345: */
UFDAAAA = (*(&(OFDAAAA_rp2->Prog))) ;
QFAAAAA_tangfn = A_R1COPY(UFDAAAA,VFDAAAA,A68_CHAR );
} 
break;
case 1: /* [] CHAR */
WFDAAAA_fn = (NFDAAAA.data.mode1);
QFAAAAA_tangfn = A_R1COPY(WFDAAAA_fn,XFDAAAA,A68_CHAR );
break;
default: 
 /* line 346: */
PQBAAAA_simpleerror(ZFDAAAA, 5);
break;
} 
} 
break;
case 3: 
KUBAAAA_usage();
break;
case 4: 
{ 
AGDAAAA_vpos = BRBAAAA_find('v', VBAAAAA_cvstang);
 /* line 347: */
FGDAAAA = DGDAAAA ;
BGDAAAA.data[0] = A_UNITE(EGDAAAA,mode2,2,FGDAAAA);
 /* line 348: */
HRBAAAA_upto( A_R1TRIM(GGDAAAA,(VBAAAAA_cvstang),A_RTSCRIPT(&(GGDAAAA.dim[0]),&((VBAAAAA_cvstang).dim[0]),(AGDAAAA_vpos+2),(VBAAAAA_cvstang).dim[0].upb,1)), NUAAASP_blank, &HGDAAAA );
BGDAAAA.data[1] = A_UNITE(IGDAAAA,mode2,2,HGDAAAA);
MGDAAAA = KGDAAAA ;
BGDAAAA.data[2] = A_UNITE(LGDAAAA,mode2,2,MGDAAAA);
OGDAAAA.fn.fn_global = XTDAASP_newline;
OGDAAAA.nonlocals = A68_NIL;
BGDAAAA.data[3] = A_UNITE(NGDAAAA,mode30,30,OGDAAAA);
DWEAASP_put((&VQCAASP_standerror), A_HIS1ARR(PGDAAAA,BGDAAAA,A68_215 ,4));
ZWBAASP_exit(1);
} 
break;
case 5: 
 /* line 349: */
if ( ((*(&(XEDAAAA_rp1->Val))).dim[0].upb==0) )
{ 
PQBAAAA_simpleerror(RGDAAAA, 5);
} 
else
{ 
 /* line 350: */
TGDAAAA = (*(&(XEDAAAA_rp1->Val))).dim[0].upb;
for ( SGDAAAA_j = (*(&(XEDAAAA_rp1->Val))).dim[0].lwb;
SGDAAAA_j <= TGDAAAA;
SGDAAAA_j += 1 )
{ 
UGDAAAA = (*(&(XEDAAAA_rp1->Val))) ;
VGDAAAA = (*(&A_R1INDEX(UGDAAAA,SGDAAAA_j))) ;
switch ( VGDAAAA.mode )
{ 
case 5: /* REF STRUCT(MODE32,REF MODE33)  */
WGDAAAA_rp2 = (VGDAAAA.data.mode5);
 /* line 351: */
if ( (WGDAAAA_rp2==VAAAAAA_noparam) )
{ 
XGDAAAA = A68_TRUE;
} 
else
{ 
XGDAAAA = A_RC_EQ((*(&(WGDAAAA_rp2->Prog))),ZGDAAAA);
} 
if ( XGDAAAA )
{ 
 /* line 352: */
PQBAAAA_simpleerror(BHDAAAA, 5);
} 
else
{ 
A_CALLPROC(EAAAASP_anonymous,(A68_TRUE, &DHDAAAA),(A68_TRUE, &DHDAAAA,(EAAAASP_anonymous).nonlocals));
CHDAAAA_path = DHDAAAA;
EHDAAAA = (*(&(WGDAAAA_rp2->Prog))) ;
CHDAAAA_path = A_R1COPY(EHDAAAA,FHDAAAA,A68_CHAR );
for ( ;; )
{ 
 /* line 353: */
HHDAAAA = ECBAASP_charinstring('~', (&GHDAAAA_pos), CHDAAAA_path);
if ( !HHDAAAA ) break;
KHDAAAA = A_RC_PLUS(A_RC_PLUS(A_R1TRIM(IHDAAAA,(*(&CHDAAAA_path)),A_RTSCRIPT(&(IHDAAAA.dim[0]),&((*(&CHDAAAA_path)).dim[0]),(*(&CHDAAAA_path)).dim[0].lwb,(GHDAAAA_pos-1),1)),TFAAAAA_homedir),A_R1TRIM(JHDAAAA,(*(&CHDAAAA_path)),A_RTSCRIPT(&(JHDAAAA.dim[0]),&((*(&CHDAAAA_path)).dim[0]),(GHDAAAA_pos+1),(*(&CHDAAAA_path)).dim[0].upb,1))) ;
CHDAAAA_path = A_R1COPY(KHDAAAA,LHDAAAA,A68_CHAR );
}
 /* line 354: */
A_RC_TOPLUS(VFAAAAA_includepaths,A_RC_PLUS(CHDAAAA_path,A_HARR(MHDAAAA,':',A68_CHAR )));
} 
break;
case 1: /* [] CHAR */
NHDAAAA_dir = (VGDAAAA.data.mode1);
{ 
A_CALLPROC(EAAAASP_anonymous,(A68_TRUE, &PHDAAAA),(A68_TRUE, &PHDAAAA,(EAAAASP_anonymous).nonlocals));
OHDAAAA_path = PHDAAAA;
 /* line 355: */
for ( ;; )
{ 
RHDAAAA = ECBAASP_charinstring('~', (&QHDAAAA_pos), OHDAAAA_path);
if ( !RHDAAAA ) break;
 /* line 356: */
UHDAAAA = A_RC_PLUS(A_RC_PLUS(A_R1TRIM(SHDAAAA,(*(&OHDAAAA_path)),A_RTSCRIPT(&(SHDAAAA.dim[0]),&((*(&OHDAAAA_path)).dim[0]),(*(&OHDAAAA_path)).dim[0].lwb,(QHDAAAA_pos-1),1)),TFAAAAA_homedir),A_R1TRIM(THDAAAA,(*(&OHDAAAA_path)),A_RTSCRIPT(&(THDAAAA.dim[0]),&((*(&OHDAAAA_path)).dim[0]),(QHDAAAA_pos+1),(*(&OHDAAAA_path)).dim[0].upb,1))) ;
OHDAAAA_path = A_R1COPY(UHDAAAA,VHDAAAA,A68_CHAR );
}
 /* line 357: */
A_RC_TOPLUS(VFAAAAA_includepaths,A_RC_PLUS(OHDAAAA_path,A_HARR(WHDAAAA,':',A68_CHAR )));
} 
break;
default: 
PQBAAAA_simpleerror(YHDAAAA, 5);
break;
} 
}
 /* line 358: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
else
{ 
PQBAAAA_simpleerror(AIDAAAA, 5);
} 
} 
} 
break;
case 1: /* [] CHAR */
BIDAAAA_s = (WEDAAAA.data.mode1);
 /* line 359: */
if ( A_RC_EQ(BIDAAAA_s,DIDAAAA) )
{ 
PQBAAAA_simpleerror(FIDAAAA, 5);
} 
else
{ 
QFAAAAA_tangfn = A_R1COPY(BIDAAAA_s,GIDAAAA,A68_CHAR );
} 
break;
default: 
 /* line 360: */
PQBAAAA_simpleerror(IIDAAAA, 5);
break;
} 
}
} 
break;
default: 
 /* line 361: */
PQBAAAA_simpleerror(KIDAAAA, 5);
break;
} 
 /* line 362: */
if ( (QFAAAAA_tangfn.dim[0].upb>=5) )
{ 
if ( A_RC_NE(A_R1TRIM(LIDAAAA,(*(&QFAAAAA_tangfn)),A_RTSCRIPT(&(LIDAAAA.dim[0]),&((*(&QFAAAAA_tangfn)).dim[0]),((QFAAAAA_tangfn.dim[0].upb-YBAAAAA_webext.dim[0].upb)+1),(*(&QFAAAAA_tangfn)).dim[0].upb,1)),YBAAAAA_webext) )
{ 
 /* line 363: */
A_RC_PLUSAB(QFAAAAA_tangfn,YBAAAAA_webext);
} 
} 
else
{ 
A_RC_PLUSAB(QFAAAAA_tangfn,YBAAAAA_webext);
} 
 /* line 364: */
MIDAAAA = (OHCAASP_open((*(&(GFAAAAA_web->F))), A_UNITE(NIDAAAA,mode2,2,QFAAAAA_tangfn), VRDAASP_standinchannel)!=0);
if ( MIDAAAA )
{ 
PQBAAAA_simpleerror(A_RC_PLUS(PIDAAAA,QFAAAAA_tangfn), 2);
} 
 /* line 365: */
HRBAAAA_upto( QFAAAAA_tangfn, '.', &QIDAAAA );
RIDAAAA = A_RC_PLUS(QIDAAAA,BCAAAAA_outext) ;
BGAAAAA_arg = A_R1COPY(RIDAAAA,SIDAAAA,A68_CHAR );
 /* line 366: */
if ( (BHCAASP_establish((*(&((&JFAAAAA_output)->F))), BGAAAAA_arg, XRDAASP_standoutchannel, 0, 0, 0)!=0) )
{ 
 /* line 367: */
PQBAAAA_simpleerror(A_RC_PLUS(UIDAAAA,BGAAAAA_arg), 3);
} 
else
{ 
LJDAAAA.fn.fn_global = WIDAAAA_anonymous;
LJDAAAA.nonlocals = A68_NIL;
YFCAASP_onphysicalfileend((*(&((&JFAAAAA_output)->F))), LJDAAAA);
 /* line 369: */
MJDAAAA = (&((&JFAAAAA_output)->N)) ;
(*MJDAAAA) = 1;
NJDAAAA = (&((&JFAAAAA_output)->Loc)) ;
(*NJDAAAA) = 0;
} 
if ( RDAAAAA_debug )
{ 
 /* line 370: */
YGBAAAA_startmonitor(PJDAAAA);
QJDAAAA.fn.fn_global = SHBAAAA_monitorprinttoken;
QJDAAAA.nonlocals = A68_NIL;
VDAAAAA_debugprinttoken = QJDAAAA;
RJDAAAA.fn.fn_global = PJBAAAA_monitorprinttext;
RJDAAAA.nonlocals = A68_NIL;
AEAAAAA_debugprinttext = RJDAAAA;
 /* line 371: */
SJDAAAA.fn.fn_global = SMBAAAA_monitorprintstring;
SJDAAAA.nonlocals = A68_NIL;
FEAAAAA_debugprintstring = SJDAAAA;
} 
for ( ;; )
{ 
 /* line 372: */
ZUCAAAA_skiptocs(UJDAAAA);
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
VJDAAAA = (&(GFAAAAA_web->Loc)) ;
(*VJDAAAA)-=1;
} 
 /* line 373: */
WJDAAAA_ch = DSCAAAA_nextchar();
YJDAAAA = !ECBAASP_charinstring(WJDAAAA_ch, A_LOC(A68_INT ), ZJDAAAA);
if ( !YJDAAAA ) break;
if ( (WJDAAAA_ch=='\\') )
{ 
 /* line 374: */
BKDAAAA = 0 ;
YBCAAAA_putout((&JFAAAAA_output), A_HARR(CKDAAAA,A_UNITE(AKDAAAA,mode3,3,BKDAAAA),A68_306 ));
} 
else
{ 
{ 
A_CALLPROC(EAAAASP_anonymous,(A68_TRUE, &EKDAAAA),(A68_TRUE, &EKDAAAA,(EAAAASP_anonymous).nonlocals));
DKDAAAA_s = EKDAAAA;
KSCAAAA_gathertochar((&DKDAAAA_s), '@');
FKDAAAA = (DSCAAAA_nextchar()!='>');
if ( FKDAAAA )
{ 
{ 
HKDAAAA.fn.fn_global = XTDAASP_newline;
HKDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(IKDAAAA,A_UNITE(GKDAAAA,mode30,30,HKDAAAA),A68_215 ));
 /* line 375: */
IEAAAAA_consolepos = 0;
 /* line 376: */
NKDAAAA = LKDAAAA ;
JKDAAAA.data[0] = A_UNITE(MKDAAAA,mode1,1,NKDAAAA);
RKDAAAA = PKDAAAA ;
JKDAAAA.data[1] = A_UNITE(QKDAAAA,mode1,1,RKDAAAA);
ANBAAAA_printout(A_HIS1ARR(SKDAAAA,JKDAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
} 
else
{ 
VKDAAAA = A_R1TRIM(TKDAAAA,(*(&DKDAAAA_s)),A_RTSCRIPT(&(TKDAAAA.dim[0]),&((*(&DKDAAAA_s)).dim[0]),(*(&DKDAAAA_s)).dim[0].lwb,(DKDAAAA_s.dim[0].upb-1),1)) ;
YBCAAAA_putout((&JFAAAAA_output), A_HARR(WKDAAAA,A_UNITE(UKDAAAA,mode2,2,VKDAAAA),A68_306 ));
} 
} 
} 
}
if ( !(*(&(GFAAAAA_web->Ended))) )
{ 
for ( XKDAAAA = 1;
XKDAAAA <= 2;
XKDAAAA += 1 )
{ 
 /* line 377: */
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
YKDAAAA = (&(GFAAAAA_web->Loc)) ;
(*YKDAAAA)-=1;
} 
}
} 
DGAAAAA_curmood = 1;
 /* line 378: */
if ( !(*(&(GFAAAAA_web->Ended))) )
{ 
for ( ZKDAAAA = 1;
ZKDAAAA <= 2;
ZKDAAAA += 1 )
{ 
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
ALDAAAA = (&(GFAAAAA_web->Loc)) ;
(*ALDAAAA)-=1;
} 
}
} 
for ( ;; )
{ 
 /* line 379: */
if ( (DGAAAAA_curmood==1) )
{ 
ZUCAAAA_skiptocs(CLDAAAA);
if ( !(*(&(GFAAAAA_web->Ended))) )
{ 
for ( DLDAAAA = 1;
DLDAAAA <= 2;
DLDAAAA += 1 )
{ 
 /* line 380: */
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
ELDAAAA = (&(GFAAAAA_web->Loc)) ;
(*ELDAAAA)-=1;
} 
}
} 
} 
FLDAAAA_curtok = (A_HEAP(A68_243 ));
IVCAAAA_gettok(  &GLDAAAA );
QVCAAAA_assignment(FLDAAAA_curtok, GLDAAAA);
HLDAAAA = (*FLDAAAA_curtok) ;
switch ( HLDAAAA.mode )
{ 
case 1: /* INT */
ILDAAAA_bs = (HLDAAAA.data.mode1);
 /* line 381: */
switch ( DGAAAAA_curmood )
{ 
case 1: 
/*SKIP*/;
break;
case 2: 
{ 
{ 
KLDAAAA.fn.fn_global = XTDAASP_newline;
KLDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(LLDAAAA,A_UNITE(JLDAAAA,mode30,30,KLDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 382: */
QLDAAAA = OLDAAAA ;
MLDAAAA.data[0] = A_UNITE(PLDAAAA,mode1,1,QLDAAAA);
ULDAAAA = SLDAAAA ;
MLDAAAA.data[1] = A_UNITE(TLDAAAA,mode1,1,ULDAAAA);
ANBAAAA_printout(A_HIS1ARR(VLDAAAA,MLDAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
 /* line 383: */
DGAAAAA_curmood = 1;
} 
break;
case 3: 
{ 
{ 
XLDAAAA.fn.fn_global = XTDAASP_newline;
XLDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(YLDAAAA,A_UNITE(WLDAAAA,mode30,30,XLDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 384: */
DMDAAAA = BMDAAAA ;
ZLDAAAA.data[0] = A_UNITE(CMDAAAA,mode1,1,DMDAAAA);
HMDAAAA = FMDAAAA ;
ZLDAAAA.data[1] = A_UNITE(GMDAAAA,mode1,1,HMDAAAA);
ANBAAAA_printout(A_HIS1ARR(IMDAAAA,ZLDAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
 /* line 385: */
DGAAAAA_curmood = 1;
} 
break;
case 4: 
JMDAAAA.Text = A_UUNITE(KMDAAAA,0,(*FLDAAAA_curtok));
JMDAAAA.Next = QDAAAAA_notext;
UACAAAA_addmactext(UFBAAAA_curmac, JMDAAAA);
break;
case 5: 
LMDAAAA.Text = A_UUNITE(MMDAAAA,0,(*FLDAAAA_curtok));
LMDAAAA.Next = QDAAAAA_notext;
 /* line 386: */
PBCAAAA_addmodtext(VFBAAAA_curmod, LMDAAAA);
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 3: /* STRUCT(CHAR)  */
NMDAAAA_co = (HLDAAAA.data.mode3);
 /* line 387: */
OMDAAAA.data[0] = QMDAAAA;
OMDAAAA.data[1] = SMDAAAA;
TMDAAAA = A_C_PLUS(VUAAASP_tabch,NUAAASP_blank) ;
OMDAAAA.data[2] = A_VECARR(TMDAAAA,UMDAAAA);
OMDAAAA.data[3] = A_HARR(VMDAAAA,'=',A68_CHAR );
WMDAAAA = ZTBAAAA_multicase(CTBAAAA_uc(NMDAAAA_co.Cs), A_HIS1ARR(XMDAAAA,OMDAAAA,A68_RC ,4));
switch ( WMDAAAA )
{ 
case 1: 
/*SKIP*/;
break;
case 2: 
ZUCAAAA_skiptocs(A_HARR(YMDAAAA,'>',A68_CHAR ));
break;
case 3: 
{ 
EWBAAAA_inccursec(4);
 /* line 388: */
DGAAAAA_curmood = 1;
} 
break;
case 4: 
if ( (DGAAAAA_curmood==4) )
{ 
SCDAAAA_gathertocs( '>', &ANDAAAA );
ZMDAAAA.Text = A_UNITE(BNDAAAA,mode4,4,ANDAAAA);
ZMDAAAA.Next = QDAAAAA_notext;
 /* line 389: */
UACAAAA_addmactext(UFBAAAA_curmac, ZMDAAAA);
} 
else
{ 
if ( (DGAAAAA_curmood==5) )
{ 
SCDAAAA_gathertocs( '>', &DNDAAAA );
CNDAAAA.Text = A_UNITE(ENDAAAA,mode4,4,DNDAAAA);
CNDAAAA.Next = QDAAAAA_notext;
PBCAAAA_addmodtext(VFBAAAA_curmod, CNDAAAA);
} 
else
{ 
{ 
 /* line 390: */
GNDAAAA.fn.fn_global = XTDAASP_newline;
GNDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(HNDAAAA,A_UNITE(FNDAAAA,mode30,30,GNDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
MNDAAAA = KNDAAAA ;
INDAAAA.data[0] = A_UNITE(LNDAAAA,mode1,1,MNDAAAA);
QNDAAAA = ONDAAAA ;
INDAAAA.data[1] = A_UNITE(PNDAAAA,mode1,1,QNDAAAA);
ANBAAAA_printout(A_HIS1ARR(RNDAAAA,INDAAAA,A68_273 ,2));
 /* line 391: */
XNBAAAA_error(2);
} 
ZUCAAAA_skiptocs(A_HARR(SNDAAAA,'>',A68_CHAR ));
} 
} 
break;
default: 
switch ( TSBAAAA_chop(CTBAAAA_uc(NMDAAAA_co.Cs), UNDAAAA) )
{ 
case 1: 
 /* line 392: */
if ( ((*(&(GFAAAAA_web->Next)))!=KDAAAAA_nostream) )
{ 
{ 
WNDAAAA.fn.fn_global = XTDAASP_newline;
WNDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(XNDAAAA,A_UNITE(VNDAAAA,mode30,30,WNDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 393: */
CODAAAA = AODAAAA ;
YNDAAAA.data[0] = A_UNITE(BODAAAA,mode1,1,CODAAAA);
GODAAAA = EODAAAA ;
YNDAAAA.data[1] = A_UNITE(FODAAAA,mode1,1,GODAAAA);
ANBAAAA_printout(A_HIS1ARR(HODAAAA,YNDAAAA,A68_273 ,2));
 /* line 394: */
XNBAAAA_error(2);
} 
} 
else
{ 
EWBAAAA_inccursec(1);
NWBAAAA_printcursec();
DGAAAAA_curmood = 1;
} 
break;
case 2: 
{ 
EWBAAAA_inccursec(2);
NWBAAAA_printcursec();
 /* line 395: */
DGAAAAA_curmood = 1;
} 
break;
case 3: 
{ 
EWBAAAA_inccursec(3);
NWBAAAA_printcursec();
DGAAAAA_curmood = 1;
} 
break;
case 4: 
{ 
A_CALLPROC(EAAAASP_anonymous,(A68_TRUE, &JODAAAA),(A68_TRUE, &JODAAAA,(EAAAASP_anonymous).nonlocals));
IODAAAA_mtag = JODAAAA;
 /* line 396: */
SCDAAAA_gathertocs( '>', &KODAAAA );
GSBAAAA_trim( KODAAAA, &LODAAAA );
IODAAAA_mtag = A_R1COPY(LODAAAA,MODAAAA,A68_CHAR );
NODAAAA_ch = DSCAAAA_nextchar();
OODAAAA = DGAAAAA_curmood;
switch ( OODAAAA )
{ 
case 1: 
if ( (NODAAAA_ch=='=') )
{ 
 /* line 397: */
if ( (IODAAAA_mtag.dim[0].upb>3) )
{ 
if ( A_RC_EQ(A_R1TRIM(QODAAAA,(*(&IODAAAA_mtag)),A_RTSCRIPT(&(QODAAAA.dim[0]),&((*(&IODAAAA_mtag)).dim[0]),(IODAAAA_mtag.dim[0].upb-2),(*(&IODAAAA_mtag)).dim[0].upb,1)),RODAAAA) )
{ 
{ 
 /* line 398: */
TODAAAA_rm = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), A_R1TRIM(SODAAAA,(*(&IODAAAA_mtag)),A_RTSCRIPT(&(SODAAAA.dim[0]),&((*(&IODAAAA_mtag)).dim[0]),(*(&IODAAAA_mtag)).dim[0].lwb,(IODAAAA_mtag.dim[0].upb-3),1)), !A68_TRUE, A68_TRUE);
UODAAAA = (TODAAAA_rm==NDAAAAA_nomod);
if ( UODAAAA )
{ 
{ 
WODAAAA.fn.fn_global = XTDAASP_newline;
WODAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(XODAAAA,A_UNITE(VODAAAA,mode30,30,WODAAAA),A68_215 ));
 /* line 399: */
IEAAAAA_consolepos = 0;
CPDAAAA = APDAAAA ;
YODAAAA.data[0] = A_UNITE(BPDAAAA,mode1,1,CPDAAAA);
GPDAAAA = EPDAAAA ;
YODAAAA.data[1] = A_UNITE(FPDAAAA,mode1,1,GPDAAAA);
ANBAAAA_printout(A_HIS1ARR(HPDAAAA,YODAAAA,A68_273 ,2));
 /* line 400: */
XNBAAAA_error(2);
} 
} 
else
{ 
DGAAAAA_curmood = 5;
 /* line 401: */
XXBAAAA_maketext( (GFAAAAA_web->Sec), &IPDAAAA );
PBCAAAA_addmodtext(VFBAAAA_curmod = TODAAAA_rm, IPDAAAA);
} 
} 
} 
else
{ 
DGAAAAA_curmood = 5;
 /* line 402: */
XXBAAAA_maketext( (GFAAAAA_web->Sec), &JPDAAAA );
PBCAAAA_addmodtext(VFBAAAA_curmod = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), IODAAAA_mtag, A68_TRUE, !A68_TRUE), JPDAAAA);
} 
} 
else
{ 
DGAAAAA_curmood = 5;
 /* line 403: */
 /* line 404: */
XXBAAAA_maketext( (GFAAAAA_web->Sec), &KPDAAAA );
PBCAAAA_addmodtext(VFBAAAA_curmod = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), IODAAAA_mtag, A68_TRUE, !A68_TRUE), KPDAAAA);
} 
} 
else
{ 
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
 /* line 405: */
LPDAAAA = (&(GFAAAAA_web->Loc)) ;
(*LPDAAAA)-=1;
} 
} 
break;
case 2: 
{ 
if ( (NODAAAA_ch!='=') )
{ 
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
MPDAAAA = (&(GFAAAAA_web->Loc)) ;
(*MPDAAAA)-=1;
} 
} 
{ 
OPDAAAA.fn.fn_global = XTDAASP_newline;
OPDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(PPDAAAA,A_UNITE(NPDAAAA,mode30,30,OPDAAAA),A68_215 ));
 /* line 406: */
IEAAAAA_consolepos = 0;
 /* line 407: */
UPDAAAA = SPDAAAA ;
QPDAAAA.data[0] = A_UNITE(TPDAAAA,mode1,1,UPDAAAA);
YPDAAAA = WPDAAAA ;
QPDAAAA.data[1] = A_UNITE(XPDAAAA,mode1,1,YPDAAAA);
ANBAAAA_printout(A_HIS1ARR(ZPDAAAA,QPDAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
} 
break;
case 3: 
{ 
if ( (NODAAAA_ch!='=') )
{ 
 /* line 408: */
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
AQDAAAA = (&(GFAAAAA_web->Loc)) ;
(*AQDAAAA)-=1;
} 
} 
{ 
CQDAAAA.fn.fn_global = XTDAASP_newline;
CQDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(DQDAAAA,A_UNITE(BQDAAAA,mode30,30,CQDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 409: */
IQDAAAA = GQDAAAA ;
EQDAAAA.data[0] = A_UNITE(HQDAAAA,mode1,1,IQDAAAA);
MQDAAAA = KQDAAAA ;
EQDAAAA.data[1] = A_UNITE(LQDAAAA,mode1,1,MQDAAAA);
ANBAAAA_printout(A_HIS1ARR(NQDAAAA,EQDAAAA,A68_273 ,2));
 /* line 410: */
XNBAAAA_error(2);
} 
} 
break;
case 4: 
if ( (NODAAAA_ch=='=') )
{ 
if ( (IODAAAA_mtag.dim[0].upb>3) )
{ 
 /* line 411: */
if ( A_RC_EQ(A_R1TRIM(PQDAAAA,(*(&IODAAAA_mtag)),A_RTSCRIPT(&(PQDAAAA.dim[0]),&((*(&IODAAAA_mtag)).dim[0]),(IODAAAA_mtag.dim[0].upb-2),(*(&IODAAAA_mtag)).dim[0].upb,1)),QQDAAAA) )
{ 
{ 
SQDAAAA_rm = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), A_R1TRIM(RQDAAAA,(*(&IODAAAA_mtag)),A_RTSCRIPT(&(RQDAAAA.dim[0]),&((*(&IODAAAA_mtag)).dim[0]),(*(&IODAAAA_mtag)).dim[0].lwb,(IODAAAA_mtag.dim[0].upb-3),1)), !A68_TRUE, A68_TRUE);
 /* line 412: */
TQDAAAA = (SQDAAAA_rm==NDAAAAA_nomod);
if ( TQDAAAA )
{ 
{ 
VQDAAAA.fn.fn_global = XTDAASP_newline;
VQDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(WQDAAAA,A_UNITE(UQDAAAA,mode30,30,VQDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 413: */
BRDAAAA = ZQDAAAA ;
XQDAAAA.data[0] = A_UNITE(ARDAAAA,mode1,1,BRDAAAA);
FRDAAAA = DRDAAAA ;
XQDAAAA.data[1] = A_UNITE(ERDAAAA,mode1,1,FRDAAAA);
ANBAAAA_printout(A_HIS1ARR(GRDAAAA,XQDAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
} 
else
{ 
DGAAAAA_curmood = 5;
 /* line 414: */
XXBAAAA_maketext( (GFAAAAA_web->Sec), &HRDAAAA );
PBCAAAA_addmodtext(VFBAAAA_curmod = SQDAAAA_rm, HRDAAAA);
} 
} 
} 
else
{ 
DGAAAAA_curmood = 5;
 /* line 415: */
 /* line 416: */
XXBAAAA_maketext( (GFAAAAA_web->Sec), &IRDAAAA );
PBCAAAA_addmodtext(VFBAAAA_curmod = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), IODAAAA_mtag, A68_TRUE, !A68_TRUE), IRDAAAA);
} 
} 
else
{ 
DGAAAAA_curmood = 5;
 /* line 417: */
 /* line 418: */
XXBAAAA_maketext( (GFAAAAA_web->Sec), &JRDAAAA );
PBCAAAA_addmodtext(VFBAAAA_curmod = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), IODAAAA_mtag, A68_TRUE, !A68_TRUE), JRDAAAA);
} 
} 
else
{ 
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
KRDAAAA = (&(GFAAAAA_web->Loc)) ;
(*KRDAAAA)-=1;
} 
LRDAAAA = (IODAAAA_mtag.dim[0].upb>3);
if ( LRDAAAA )
{ 
 /* line 419: */
if ( A_RC_EQ(A_R1TRIM(NRDAAAA,(*(&IODAAAA_mtag)),A_RTSCRIPT(&(NRDAAAA.dim[0]),&((*(&IODAAAA_mtag)).dim[0]),(IODAAAA_mtag.dim[0].upb-2),(*(&IODAAAA_mtag)).dim[0].upb,1)),ORDAAAA) )
{ 
{ 
 /* line 420: */
QRDAAAA_rm = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), A_R1TRIM(PRDAAAA,(*(&IODAAAA_mtag)),A_RTSCRIPT(&(PRDAAAA.dim[0]),&((*(&IODAAAA_mtag)).dim[0]),(*(&IODAAAA_mtag)).dim[0].lwb,(IODAAAA_mtag.dim[0].upb-3),1)), !A68_TRUE, A68_TRUE);
RRDAAAA = (QRDAAAA_rm==NDAAAAA_nomod);
if ( RRDAAAA )
{ 
{ 
TRDAAAA.fn.fn_global = XTDAASP_newline;
TRDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(URDAAAA,A_UNITE(SRDAAAA,mode30,30,TRDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 421: */
ZRDAAAA = XRDAAAA ;
VRDAAAA.data[0] = A_UNITE(YRDAAAA,mode1,1,ZRDAAAA);
DSDAAAA = BSDAAAA ;
VRDAAAA.data[1] = A_UNITE(CSDAAAA,mode1,1,DSDAAAA);
ANBAAAA_printout(A_HIS1ARR(ESDAAAA,VRDAAAA,A68_273 ,2));
 /* line 422: */
XNBAAAA_error(2);
} 
} 
else
{ 
FSDAAAA.Text = A_UNITE(GSDAAAA,mode8,8,QRDAAAA_rm);
FSDAAAA.Next = QDAAAAA_notext;
PBCAAAA_addmodtext(VFBAAAA_curmod, FSDAAAA);
} 
} 
} 
else
{ 
if ( (DGAAAAA_curmood==5) )
{ 
 /* line 423: */
JSDAAAA = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), IODAAAA_mtag, A68_TRUE, !A68_TRUE) ;
HSDAAAA.Text = A_UNITE(ISDAAAA,mode8,8,JSDAAAA);
HSDAAAA.Next = QDAAAAA_notext;
PBCAAAA_addmodtext(VFBAAAA_curmod, HSDAAAA);
} 
else
{ 
 /* line 424: */
if ( (DGAAAAA_curmood==4) )
{ 
MSDAAAA = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), IODAAAA_mtag, A68_TRUE, !A68_TRUE) ;
KSDAAAA.Text = A_UNITE(LSDAAAA,mode8,8,MSDAAAA);
KSDAAAA.Next = QDAAAAA_notext;
 /* line 425: */
UACAAAA_addmactext(UFBAAAA_curmac, KSDAAAA);
} 
else
{ 
{ 
OSDAAAA.fn.fn_global = XTDAASP_newline;
OSDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(PSDAAAA,A_UNITE(NSDAAAA,mode30,30,OSDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 426: */
USDAAAA = SSDAAAA ;
QSDAAAA.data[0] = A_UNITE(TSDAAAA,mode1,1,USDAAAA);
XPBAASP_whole( A_UNITE(XSDAAAA,mode2,2,DGAAAAA_curmood), 0, &YSDAAAA );
ATDAAAA = A_RC_PLUS(WSDAAAA,YSDAAAA) ;
QSDAAAA.data[1] = A_UNITE(ZSDAAAA,mode1,1,ATDAAAA);
ANBAAAA_printout(A_HIS1ARR(BTDAAAA,QSDAAAA,A68_273 ,2));
 /* line 427: */
XNBAAAA_error(2);
} 
} 
} 
} 
} 
else
{ 
if ( (DGAAAAA_curmood==5) )
{ 
 /* line 428: */
ETDAAAA = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), IODAAAA_mtag, A68_TRUE, !A68_TRUE) ;
CTDAAAA.Text = A_UNITE(DTDAAAA,mode8,8,ETDAAAA);
CTDAAAA.Next = QDAAAAA_notext;
PBCAAAA_addmodtext(VFBAAAA_curmod, CTDAAAA);
} 
else
{ 
if ( (DGAAAAA_curmood==4) )
{ 
 /* line 429: */
HTDAAAA = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), IODAAAA_mtag, A68_TRUE, !A68_TRUE) ;
FTDAAAA.Text = A_UNITE(GTDAAAA,mode8,8,HTDAAAA);
FTDAAAA.Next = QDAAAAA_notext;
UACAAAA_addmactext(UFBAAAA_curmac, FTDAAAA);
} 
else
{ 
{ 
JTDAAAA.fn.fn_global = XTDAASP_newline;
JTDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(KTDAAAA,A_UNITE(ITDAAAA,mode30,30,JTDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 430: */
PTDAAAA = NTDAAAA ;
LTDAAAA.data[0] = A_UNITE(OTDAAAA,mode1,1,PTDAAAA);
XPBAASP_whole( A_UNITE(STDAAAA,mode2,2,DGAAAAA_curmood), 0, &TTDAAAA );
VTDAAAA = A_RC_PLUS(RTDAAAA,TTDAAAA) ;
LTDAAAA.data[1] = A_UNITE(UTDAAAA,mode1,1,VTDAAAA);
ANBAAAA_printout(A_HIS1ARR(WTDAAAA,LTDAAAA,A68_273 ,2));
 /* line 431: */
XNBAAAA_error(2);
} 
} 
} 
} 
} 
break;
case 5: 
if ( (NODAAAA_ch=='=') )
{ 
{ 
YTDAAAA.fn.fn_global = XTDAASP_newline;
YTDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(ZTDAAAA,A_UNITE(XTDAAAA,mode30,30,YTDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 432: */
EUDAAAA = CUDAAAA ;
AUDAAAA.data[0] = A_UNITE(DUDAAAA,mode1,1,EUDAAAA);
IUDAAAA = GUDAAAA ;
AUDAAAA.data[1] = A_UNITE(HUDAAAA,mode1,1,IUDAAAA);
ANBAAAA_printout(A_HIS1ARR(JUDAAAA,AUDAAAA,A68_273 ,2));
 /* line 433: */
XNBAAAA_error(2);
} 
} 
else
{ 
if ( ((*(&(GFAAAAA_web->Loc)))>=(GFAAAAA_web->B).dim[0].lwb) )
{ 
KUDAAAA = (&(GFAAAAA_web->Loc)) ;
(*KUDAAAA)-=1;
} 
LUDAAAA = (IODAAAA_mtag.dim[0].upb>3);
if ( LUDAAAA )
{ 
 /* line 434: */
if ( A_RC_EQ(A_R1TRIM(NUDAAAA,(*(&IODAAAA_mtag)),A_RTSCRIPT(&(NUDAAAA.dim[0]),&((*(&IODAAAA_mtag)).dim[0]),(IODAAAA_mtag.dim[0].upb-2),(*(&IODAAAA_mtag)).dim[0].upb,1)),OUDAAAA) )
{ 
{ 
 /* line 435: */
QUDAAAA_rm = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), A_R1TRIM(PUDAAAA,(*(&IODAAAA_mtag)),A_RTSCRIPT(&(PUDAAAA.dim[0]),&((*(&IODAAAA_mtag)).dim[0]),(*(&IODAAAA_mtag)).dim[0].lwb,(IODAAAA_mtag.dim[0].upb-3),1)), !A68_TRUE, A68_TRUE);
RUDAAAA = (QUDAAAA_rm==NDAAAAA_nomod);
if ( RUDAAAA )
{ 
{ 
TUDAAAA.fn.fn_global = XTDAASP_newline;
TUDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(UUDAAAA,A_UNITE(SUDAAAA,mode30,30,TUDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 436: */
ZUDAAAA = XUDAAAA ;
VUDAAAA.data[0] = A_UNITE(YUDAAAA,mode1,1,ZUDAAAA);
DVDAAAA = BVDAAAA ;
VUDAAAA.data[1] = A_UNITE(CVDAAAA,mode1,1,DVDAAAA);
ANBAAAA_printout(A_HIS1ARR(EVDAAAA,VUDAAAA,A68_273 ,2));
 /* line 437: */
XNBAAAA_error(2);
} 
} 
else
{ 
FVDAAAA.Text = A_UNITE(GVDAAAA,mode8,8,QUDAAAA_rm);
FVDAAAA.Next = QDAAAAA_notext;
PBCAAAA_addmodtext(VFBAAAA_curmod, FVDAAAA);
} 
} 
} 
else
{ 
if ( (DGAAAAA_curmood==5) )
{ 
 /* line 438: */
JVDAAAA = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), IODAAAA_mtag, A68_TRUE, !A68_TRUE) ;
HVDAAAA.Text = A_UNITE(IVDAAAA,mode8,8,JVDAAAA);
HVDAAAA.Next = QDAAAAA_notext;
PBCAAAA_addmodtext(VFBAAAA_curmod, HVDAAAA);
} 
else
{ 
 /* line 439: */
if ( (DGAAAAA_curmood==4) )
{ 
MVDAAAA = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), IODAAAA_mtag, A68_TRUE, !A68_TRUE) ;
KVDAAAA.Text = A_UNITE(LVDAAAA,mode8,8,MVDAAAA);
KVDAAAA.Next = QDAAAAA_notext;
 /* line 440: */
UACAAAA_addmactext(UFBAAAA_curmac, KVDAAAA);
} 
else
{ 
{ 
OVDAAAA.fn.fn_global = XTDAASP_newline;
OVDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(PVDAAAA,A_UNITE(NVDAAAA,mode30,30,OVDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 441: */
UVDAAAA = SVDAAAA ;
QVDAAAA.data[0] = A_UNITE(TVDAAAA,mode1,1,UVDAAAA);
XPBAASP_whole( A_UNITE(XVDAAAA,mode2,2,DGAAAAA_curmood), 0, &YVDAAAA );
AWDAAAA = A_RC_PLUS(WVDAAAA,YVDAAAA) ;
QVDAAAA.data[1] = A_UNITE(ZVDAAAA,mode1,1,AWDAAAA);
ANBAAAA_printout(A_HIS1ARR(BWDAAAA,QVDAAAA,A68_273 ,2));
 /* line 442: */
XNBAAAA_error(2);
} 
} 
} 
} 
} 
else
{ 
if ( (DGAAAAA_curmood==5) )
{ 
 /* line 443: */
EWDAAAA = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), IODAAAA_mtag, A68_TRUE, !A68_TRUE) ;
CWDAAAA.Text = A_UNITE(DWDAAAA,mode8,8,EWDAAAA);
CWDAAAA.Next = QDAAAAA_notext;
PBCAAAA_addmodtext(VFBAAAA_curmod, CWDAAAA);
} 
else
{ 
if ( (DGAAAAA_curmood==4) )
{ 
 /* line 444: */
HWDAAAA = PYBAAAA_addmoduletag((&JFBAAAA_moduleroot), IODAAAA_mtag, A68_TRUE, !A68_TRUE) ;
FWDAAAA.Text = A_UNITE(GWDAAAA,mode8,8,HWDAAAA);
FWDAAAA.Next = QDAAAAA_notext;
UACAAAA_addmactext(UFBAAAA_curmac, FWDAAAA);
} 
else
{ 
{ 
JWDAAAA.fn.fn_global = XTDAASP_newline;
JWDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(KWDAAAA,A_UNITE(IWDAAAA,mode30,30,JWDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 445: */
PWDAAAA = NWDAAAA ;
LWDAAAA.data[0] = A_UNITE(OWDAAAA,mode1,1,PWDAAAA);
XPBAASP_whole( A_UNITE(SWDAAAA,mode2,2,DGAAAAA_curmood), 0, &TWDAAAA );
VWDAAAA = A_RC_PLUS(RWDAAAA,TWDAAAA) ;
LWDAAAA.data[1] = A_UNITE(UWDAAAA,mode1,1,VWDAAAA);
ANBAAAA_printout(A_HIS1ARR(WWDAAAA,LWDAAAA,A68_273 ,2));
 /* line 446: */
XNBAAAA_error(2);
} 
} 
} 
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 5: 
 /* line 447: */
if ( (DGAAAAA_curmood==4) )
{ 
AXDAAAA = A_HARR(YWDAAAA,'@',A68_CHAR ) ;
XWDAAAA.Text = A_UNITE(ZWDAAAA,mode4,4,AXDAAAA);
XWDAAAA.Next = QDAAAAA_notext;
UACAAAA_addmactext(UFBAAAA_curmac, XWDAAAA);
} 
else
{ 
if ( (DGAAAAA_curmood==5) )
{ 
 /* line 448: */
EXDAAAA = A_HARR(CXDAAAA,'@',A68_CHAR ) ;
BXDAAAA.Text = A_UNITE(DXDAAAA,mode4,4,EXDAAAA);
BXDAAAA.Next = QDAAAAA_notext;
PBCAAAA_addmodtext(VFBAAAA_curmod, BXDAAAA);
} 
} 
break;
case 6: 
{ 
VFBAAAA_curmod = (&WFBAAAA_unnamedmodule);
 /* line 449: */
DGAAAAA_curmood = 5;
XXBAAAA_maketext( (GFAAAAA_web->Sec), &FXDAAAA );
PBCAAAA_addmodtext(VFBAAAA_curmod, FXDAAAA);
} 
break;
case 7: 
{ 
UFBAAAA_curmac = MDAAAAA_nomac;
 /* line 450: */
TFBAAAA_oneoffmacro = A68_TRUE;
DGAAAAA_curmood = 2;
} 
break;
case 8: 
if ( ((DGAAAAA_curmood!=1)&(DGAAAAA_curmood!=4)) )
{ 
{ 
HXDAAAA.fn.fn_global = XTDAASP_newline;
HXDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(IXDAAAA,A_UNITE(GXDAAAA,mode30,30,HXDAAAA),A68_215 ));
 /* line 451: */
IEAAAAA_consolepos = 0;
NXDAAAA = LXDAAAA ;
JXDAAAA.data[0] = A_UNITE(MXDAAAA,mode1,1,NXDAAAA);
RXDAAAA = PXDAAAA ;
JXDAAAA.data[1] = A_UNITE(QXDAAAA,mode1,1,RXDAAAA);
ANBAAAA_printout(A_HIS1ARR(SXDAAAA,JXDAAAA,A68_273 ,2));
 /* line 452: */
XNBAAAA_error(2);
} 
DGAAAAA_curmood = 1;
} 
else
{ 
UFBAAAA_curmac = MDAAAAA_nomac;
DGAAAAA_curmood = 1;
} 
break;
case 9: 
 /* line 453: */
{ 
SCDAAAA_gathertocs( '>', &TXDAAAA );
UXDAAAA_incfn = TXDAAAA;
VXDAAAA = IUBAAAA_scanincludedtree((&LEAAAAA_inctree), UXDAAAA_incfn);
if ( VXDAAAA )
{ 
{ 
XXDAAAA.fn.fn_global = XTDAASP_newline;
XXDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(YXDAAAA,A_UNITE(WXDAAAA,mode30,30,XXDAAAA),A68_215 ));
 /* line 454: */
IEAAAAA_consolepos = 0;
EYDAAAA = A_RC_PLUS(A_RC_PLUS(BYDAAAA,UXDAAAA_incfn),CYDAAAA) ;
ANBAAAA_printout(A_HARR(FYDAAAA,A_UNITE(DYDAAAA,mode1,1,EYDAAAA),A68_273 ));
 /* line 455: */
XNBAAAA_error(1);
} 
} 
else
{ 
if ( !BPCAAAA_addincludefile((&GFAAAAA_web), UXDAAAA_incfn) )
{ 
{ 
HYDAAAA.fn.fn_global = XTDAASP_newline;
HYDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(IYDAAAA,A_UNITE(GYDAAAA,mode30,30,HYDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 456: */
NYDAAAA = LYDAAAA ;
JYDAAAA.data[0] = A_UNITE(MYDAAAA,mode1,1,NYDAAAA);
RYDAAAA = A_RC_PLUS(PYDAAAA,UXDAAAA_incfn) ;
JYDAAAA.data[1] = A_UNITE(QYDAAAA,mode1,1,RYDAAAA);
ANBAAAA_printout(A_HIS1ARR(SYDAAAA,JYDAAAA,A68_273 ,2));
 /* line 457: */
XNBAAAA_error(2);
} 
} 
} 
} 
break;
case 10: 
{ 
UFBAAAA_curmac = MDAAAAA_nomac;
TFBAAAA_oneoffmacro = A68_FALSE;
DGAAAAA_curmood = 2;
} 
break;
case 11: 
 /* line 458: */
if ( (DGAAAAA_curmood==4) )
{ 
VYDAAAA = 0 ;
TYDAAAA.Text = A_UNITE(UYDAAAA,mode1,1,VYDAAAA);
TYDAAAA.Next = QDAAAAA_notext;
UACAAAA_addmactext(UFBAAAA_curmac, TYDAAAA);
} 
else
{ 
if ( (DGAAAAA_curmood==5) )
{ 
 /* line 459: */
YYDAAAA = 0 ;
WYDAAAA.Text = A_UNITE(XYDAAAA,mode1,1,YYDAAAA);
WYDAAAA.Next = QDAAAAA_notext;
PBCAAAA_addmodtext(VFBAAAA_curmod, WYDAAAA);
} 
} 
break;
default: 
{ 
AZDAAAA.fn.fn_global = XTDAASP_newline;
AZDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(BZDAAAA,A_UNITE(ZYDAAAA,mode30,30,AZDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 460: */
GZDAAAA = EZDAAAA ;
CZDAAAA.data[0] = A_UNITE(FZDAAAA,mode1,1,GZDAAAA);
KZDAAAA = IZDAAAA ;
CZDAAAA.data[1] = A_UNITE(JZDAAAA,mode1,1,KZDAAAA);
ANBAAAA_printout(A_HIS1ARR(LZDAAAA,CZDAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
DGAAAAA_curmood = 1;
break;
} 
break;
} 
break;
case 4: /* [] CHAR */
MZDAAAA_s = (HLDAAAA.data.mode4);
 /* line 461: */
switch ( DGAAAAA_curmood )
{ 
case 1: 
/*SKIP*/;
break;
case 2: 
if ( A_RC_EQ(MZDAAAA_s,A_HARR(NZDAAAA,'(',A68_CHAR )) )
{ 
 /* line 462: */
if ( (UFBAAAA_curmac==MDAAAAA_nomac) )
{ 
OZDAAAA = A68_TRUE;
} 
else
{ 
if ( ((*(&(UFBAAAA_curmac->Param)))!=ODAAAAA_nowparam) )
{ 
OZDAAAA = A68_TRUE;
} 
else
{ 
DGAAAAA_curmood = 3;
 /* line 463: */
OZDAAAA = A68_FALSE;
} 
} 
if ( OZDAAAA )
{ 
{ 
QZDAAAA.fn.fn_global = XTDAASP_newline;
QZDAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(RZDAAAA,A_UNITE(PZDAAAA,mode30,30,QZDAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 464: */
WZDAAAA = UZDAAAA ;
SZDAAAA.data[0] = A_UNITE(VZDAAAA,mode1,1,WZDAAAA);
AAEAAAA = YZDAAAA ;
SZDAAAA.data[1] = A_UNITE(ZZDAAAA,mode1,1,AAEAAAA);
ANBAAAA_printout(A_HIS1ARR(BAEAAAA,SZDAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
DGAAAAA_curmood = 1;
} 
} 
else
{ 
 /* line 465: */
if ( A_RC_EQ(MZDAAAA_s,A_HARR(CAEAAAA,'=',A68_CHAR )) )
{ 
if ( (UFBAAAA_curmac==MDAAAAA_nomac) )
{ 
{ 
EAEAAAA.fn.fn_global = XTDAASP_newline;
EAEAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(FAEAAAA,A_UNITE(DAEAAAA,mode30,30,EAEAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 466: */
KAEAAAA = IAEAAAA ;
GAEAAAA.data[0] = A_UNITE(JAEAAAA,mode1,1,KAEAAAA);
OAEAAAA = MAEAAAA ;
GAEAAAA.data[1] = A_UNITE(NAEAAAA,mode1,1,OAEAAAA);
ANBAAAA_printout(A_HIS1ARR(PAEAAAA,GAEAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
DGAAAAA_curmood = 1;
} 
else
{ 
 /* line 467: */
DGAAAAA_curmood = 4;
} 
} 
else
{ 
{ 
RAEAAAA.fn.fn_global = XTDAASP_newline;
RAEAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(SAEAAAA,A_UNITE(QAEAAAA,mode30,30,RAEAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 468: */
XAEAAAA = VAEAAAA ;
TAEAAAA.data[0] = A_UNITE(WAEAAAA,mode1,1,XAEAAAA);
BBEAAAA = ZAEAAAA ;
TAEAAAA.data[1] = A_UNITE(ABEAAAA,mode1,1,BBEAAAA);
ANBAAAA_printout(A_HIS1ARR(CBEAAAA,TAEAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
DGAAAAA_curmood = 1;
} 
} 
break;
case 3: 
 /* line 469: */
if ( (A_RC_EQ(MZDAAAA_s,A_HARR(DBEAAAA,',',A68_CHAR ))|A_RC_EQ(MZDAAAA_s,A_HARR(EBEAAAA,')',A68_CHAR ))) )
{ 
/*SKIP*/;
} 
else
{ 
if ( A_RC_EQ(MZDAAAA_s,A_HARR(FBEAAAA,'=',A68_CHAR )) )
{ 
DGAAAAA_curmood = 4;
} 
else
{ 
{ 
HBEAAAA.fn.fn_global = XTDAASP_newline;
HBEAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(IBEAAAA,A_UNITE(GBEAAAA,mode30,30,HBEAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 470: */
NBEAAAA = LBEAAAA ;
JBEAAAA.data[0] = A_UNITE(MBEAAAA,mode1,1,NBEAAAA);
RBEAAAA = PBEAAAA ;
JBEAAAA.data[1] = A_UNITE(QBEAAAA,mode1,1,RBEAAAA);
ANBAAAA_printout(A_HIS1ARR(SBEAAAA,JBEAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
 /* line 471: */
DGAAAAA_curmood = 1;
} 
} 
break;
case 4: 
TBEAAAA.Text = A_UUNITE(UBEAAAA,0,(*FLDAAAA_curtok));
TBEAAAA.Next = QDAAAAA_notext;
UACAAAA_addmactext(UFBAAAA_curmac, TBEAAAA);
break;
case 5: 
 /* line 472: */
VBEAAAA.Text = A_UUNITE(WBEAAAA,0,(*FLDAAAA_curtok));
VBEAAAA.Next = QDAAAAA_notext;
PBCAAAA_addmodtext(VFBAAAA_curmod, VBEAAAA);
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 6: /* REF STRUCT(MODE32,REF MODE229,REF MODE229)  */
XBEAAAA_tag = (HLDAAAA.data.mode6);
switch ( DGAAAAA_curmood )
{ 
case 1: 
/*SKIP*/;
break;
case 2: 
 /* line 473: */
if ( (UFBAAAA_curmac==MDAAAAA_nomac) )
{ 
 /* line 474: */
if ( ((UFBAAAA_curmac = YZBAAAA_addmacroid((&IFBAAAA_macroroot), DZBAAAA_addtag(OFBAAAA_tagroot, XBEAAAA_tag), TFBAAAA_oneoffmacro))==MDAAAAA_nomac) )
{ 
{ 
ZBEAAAA.fn.fn_global = XTDAASP_newline;
ZBEAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(ACEAAAA,A_UNITE(YBEAAAA,mode30,30,ZBEAAAA),A68_215 ));
IEAAAAA_consolepos = 0;
 /* line 475: */
FCEAAAA = DCEAAAA ;
BCEAAAA.data[0] = A_UNITE(ECEAAAA,mode1,1,FCEAAAA);
JCEAAAA = HCEAAAA ;
BCEAAAA.data[1] = A_UNITE(ICEAAAA,mode1,1,JCEAAAA);
ANBAAAA_printout(A_HIS1ARR(KCEAAAA,BCEAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
DGAAAAA_curmood = 1;
} 
} 
else
{ 
{ 
MCEAAAA.fn.fn_global = XTDAASP_newline;
MCEAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(NCEAAAA,A_UNITE(LCEAAAA,mode30,30,MCEAAAA),A68_215 ));
 /* line 476: */
IEAAAAA_consolepos = 0;
SCEAAAA = QCEAAAA ;
OCEAAAA.data[0] = A_UNITE(RCEAAAA,mode1,1,SCEAAAA);
WCEAAAA = UCEAAAA ;
OCEAAAA.data[1] = A_UNITE(VCEAAAA,mode1,1,WCEAAAA);
ANBAAAA_printout(A_HIS1ARR(XCEAAAA,OCEAAAA,A68_273 ,2));
XNBAAAA_error(2);
} 
 /* line 477: */
DGAAAAA_curmood = 1;
} 
break;
case 3: 
if ( !HACAAAA_addmacropar(UFBAAAA_curmac, DZBAAAA_addtag(OFBAAAA_tagroot, XBEAAAA_tag)) )
{ 
{ 
ZCEAAAA.fn.fn_global = XTDAASP_newline;
ZCEAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(ADEAAAA,A_UNITE(YCEAAAA,mode30,30,ZCEAAAA),A68_215 ));
 /* line 478: */
IEAAAAA_consolepos = 0;
FDEAAAA = DDEAAAA ;
BDEAAAA.data[0] = A_UNITE(EDEAAAA,mode1,1,FDEAAAA);
JDEAAAA = HDEAAAA ;
BDEAAAA.data[1] = A_UNITE(IDEAAAA,mode1,1,JDEAAAA);
ANBAAAA_printout(A_HIS1ARR(KDEAAAA,BDEAAAA,A68_273 ,2));
 /* line 479: */
XNBAAAA_error(2);
} 
DGAAAAA_curmood = 1;
} 
break;
case 4: 
{ 
LDEAAAA_storedtag = DZBAAAA_addtag(OFBAAAA_tagroot, XBEAAAA_tag);
 /* line 480: */
MDEAAAA_rm = UBCAAAA_searchmacro((&IFBAAAA_macroroot), LDEAAAA_storedtag);
 /* line 481: */
if ( (MDEAAAA_rm==MDAAAAA_nomac) )
{ 
NDEAAAA.Text = A_UNITE(ODEAAAA,mode6,6,LDEAAAA_storedtag);
} 
else
{ 
NDEAAAA.Text = A_UNITE(PDEAAAA,mode7,7,MDEAAAA_rm);
} 
NDEAAAA.Next = QDAAAAA_notext;
UACAAAA_addmactext(UFBAAAA_curmac, NDEAAAA);
} 
break;
case 5: 
{ 
QDEAAAA_storedtag = DZBAAAA_addtag(OFBAAAA_tagroot, XBEAAAA_tag);
 /* line 482: */
RDEAAAA_rm = UBCAAAA_searchmacro((&IFBAAAA_macroroot), QDEAAAA_storedtag);
 /* line 483: */
if ( (RDEAAAA_rm==MDAAAAA_nomac) )
{ 
SDEAAAA.Text = A_UNITE(TDEAAAA,mode6,6,QDEAAAA_storedtag);
} 
else
{ 
SDEAAAA.Text = A_UNITE(UDEAAAA,mode7,7,RDEAAAA_rm);
} 
SDEAAAA.Next = QDAAAAA_notext;
PBCAAAA_addmodtext(VFBAAAA_curmod, SDEAAAA);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
default: 
 /* line 484: */
VDEAAAA.Text = A_UUNITE(WDEAAAA,0,(*FLDAAAA_curtok));
VDEAAAA.Next = QDAAAAA_notext;
PBCAAAA_addmodtext((&WFBAAAA_unnamedmodule), VDEAAAA);
if ( (HEAAAAA_history>1) )
{ 
 /* line 485: */
ZDEAAAA.fn.fn_global = XTDAASP_newline;
ZDEAAAA.nonlocals = A68_NIL;
XDEAAAA.data[0] = A_UNITE(YDEAAAA,mode30,30,ZDEAAAA);
DEEAAAA = BEEAAAA ;
XDEAAAA.data[1] = A_UNITE(CEEAAAA,mode2,2,DEEAAAA);
FEEAAAA.fn.fn_global = XTDAASP_newline;
FEEAAAA.nonlocals = A68_NIL;
XDEAAAA.data[2] = A_UNITE(EEEAAAA,mode30,30,FEEAAAA);
VCFAASP_print(A_HIS1ARR(GEEAAAA,XDEAAAA,A68_215 ,3));
 /* line 486: */
if ( ((*(&((&JFAAAAA_output)->Upb)))>0) )
{ 
IEEAAAA = ((&JFAAAAA_output)->B) ;
LEEAAAA = A_R1TRIM(JEEAAAA,(IEEAAAA),A_RTSCRIPT(&(JEEAAAA.dim[0]),&((IEEAAAA).dim[0]),(IEEAAAA).dim[0].lwb,(*(&((&JFAAAAA_output)->Upb))),1)) ;
HEEAAAA.data[0] = A_UNITE(KEEAAAA,mode2,2,LEEAAAA);
NEEAAAA.fn.fn_global = XTDAASP_newline;
NEEAAAA.nonlocals = A68_NIL;
HEEAAAA.data[1] = A_UNITE(MEEAAAA,mode30,30,NEEAAAA);
DWEAASP_put((*(&((&JFAAAAA_output)->F))), A_HIS1ARR(OEEAAAA,HEEAAAA,A68_215 ,2));
} 
 /* line 487: */
XICAASP_close((*(&((&JFAAAAA_output)->F))));
ZWBAASP_exit(5);
} 
else
{ 
QEEAAAA.fn.fn_global = XTDAASP_newline;
QEEAAAA.nonlocals = A68_NIL;
VCFAASP_print(A_HARR(REEAAAA,A_UNITE(PEEAAAA,mode30,30,QEEAAAA),A68_215 ));
} 
JEAAAAA_phaseone = A68_FALSE;
 /* line 488: */
TEEAAAA_generator( A68_FALSE, &WEEAAAA );
RJCAAAA_processmodule((&JFAAAAA_output), (&WFBAAAA_unnamedmodule), WEEAAAA);
 /* line 489: */
if ( ((*(&((&JFAAAAA_output)->Upb)))>0) )
{ 
YEEAAAA = ((&JFAAAAA_output)->B) ;
BFEAAAA = A_R1TRIM(ZEEAAAA,(YEEAAAA),A_RTSCRIPT(&(ZEEAAAA.dim[0]),&((YEEAAAA).dim[0]),(YEEAAAA).dim[0].lwb,(*(&((&JFAAAAA_output)->Upb))),1)) ;
XEEAAAA.data[0] = A_UNITE(AFEAAAA,mode2,2,BFEAAAA);
DFEAAAA.fn.fn_global = XTDAASP_newline;
DFEAAAA.nonlocals = A68_NIL;
XEEAAAA.data[1] = A_UNITE(CFEAAAA,mode30,30,DFEAAAA);
DWEAASP_put((*(&((&JFAAAAA_output)->F))), A_HIS1ARR(EFEAAAA,XEEAAAA,A68_215 ,2));
} 
 /* line 490: */
XICAASP_close((*(&((&JFAAAAA_output)->F))));
ZWBAASP_exit(0);
break;
} 
}
} 
A_PROC_EXIT(MAIN);
#ifdef A_postlude
A_postlude;
#endif
return(0);
} 
#undef NL
/* end of translation of tang.a68 */
