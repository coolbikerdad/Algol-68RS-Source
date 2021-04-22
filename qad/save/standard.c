/* UNAME:SMFAASP */
#include <algol68/Asupport.h>
A_ISTRUCT(struct A68t32 *,16000000,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 16000000 REF MODE32 */
A_ISTRUCT(A68_CHAR ,16000000,A68t32);
typedef struct A68t32  A68_32 ;    /* STRUCT 16000000 CHAR */
struct A68t34 ;

A_PROCEDURE(A68_VOID ,A68t33,(struct A68t34 ),(struct A68t34 ,void *));
typedef struct A68t33  A68_33 ;    /* PROC(MODE34) VOID */
A_VECTOR(struct A68t35 ,A68t34);
typedef struct A68t34  A68_34 ;    /* VECTOR [] MODE35 */
struct A68t35{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_1)
};
typedef struct A68t35  A68_35 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_INT ,A68t36,(A68_VC ),(A68_VC ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t37,(void),(void *));
typedef struct A68t37  A68_37 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t38,(A68_INT ),(A68_INT ,void *));
typedef struct A68t38  A68_38 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t39,(struct A68t37 ),(struct A68t37 ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE37) INT */
struct A68t41 ;

A_PROCEDURE(A68_INT ,A68t40,(struct A68t41 ,A68_RC ),(struct A68t41 ,A68_RC ,void *));
typedef struct A68t40  A68_40 ;    /* PROC(MODE41,MODE27) INT */

A_PROCEDURE(A68_VOID ,A68t41,(A68_INT ,A68_BITS *),(A68_INT ,A68_BITS *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(INT,REF BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t42,(A68_INT ,struct A68t38 ),(A68_INT ,struct A68t38 ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT,MODE38) VOID */
struct A68t44 ;

A_PROCEDURE(A68_LBITS ,A68t43,(struct A68t44 ),(struct A68t44 ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE44) LONG BITS */
A_ROW(A68_BOOL ,A68t44,1);
typedef struct A68t44  A68_44 ;    /* [] BOOL */

A_PROCEDURE(A68_BITS ,A68t45,(struct A68t44 ),(struct A68t44 ,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE44) BITS */

A_PROCEDURE(A68_SBITS ,A68t46,(struct A68t44 ),(struct A68t44 ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(MODE44) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t47,(struct A68t44 ),(struct A68t44 ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE44) SHORT SHORT BITS */

A_PROCEDURE(A68_VOID ,A68t48,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(INT) REF MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_BOOL ,A68t49,(struct A68t50 *),(struct A68t50 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE50) BOOL */
struct A68t65{
A68_BOOL  Binpossible;
A_PAD_BOOL(PAD_2)
A68_BOOL  Putpossible;
A_PAD_BOOL(PAD_3)
A68_BOOL  Getpossible;
A_PAD_BOOL(PAD_4)
A68_BOOL  Setpossible;
A_PAD_BOOL(PAD_5)
A68_BOOL  Reidfpossible;
A_PAD_BOOL(PAD_6)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL)  */
struct A68t51{
A68_VC  Idf;
A68_VC  Reidf;
struct A68t65  Type;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(REF MODE26,REF MODE26,MODE65)  */

A_PROCEDURE(A68_INT ,A68t58,(struct A68t50 *,A68_INT ,A68_INT ,A68_INT ),(struct A68t50 *,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF MODE50,INT,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t59,(struct A68t50 *),(struct A68t50 *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(REF MODE50) INT */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t50 *),(struct A68t50 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(REF MODE50) VOID */

A_PROCEDURE(A68_BOOL ,A68t61,(struct A68t50 *,A68_INT ),(struct A68t50 *,A68_INT ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE50,INT) BOOL */

A_PROCEDURE(A68_INT ,A68t62,(struct A68t50 *,A68_VC ),(struct A68t50 *,A68_VC ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(REF MODE50,REF MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t50 *,A68_INT ,A68_VC *),(struct A68t50 *,A68_INT ,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE50,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t64,(struct A68t50 *,A68_CHAR ),(struct A68t50 *,A68_CHAR ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(REF MODE50,CHAR) BOOL */

A_PROCEDURE(A68_BOOL ,A68t57,(struct A68t50 *,A68_CHAR *),(struct A68t50 *,A68_CHAR *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(REF MODE50,REF CHAR) BOOL */
struct A68t52{
struct A68t58  Estab;
struct A68t59  Open;
struct A68t60  Close;
struct A68t61  Set;
struct A68t59  Logicalend;
struct A68t62  Putbuf;
struct A68t62  Getbuf;
struct A68t63  Ensurebufspace;
struct A68t60  Flushbuffer;
struct A68t64  Putch;
struct A68t57  Getch;
struct A68t61  Control;
};
typedef struct A68t52  A68_52 ;    /* STRUCT(MODE58,MODE59,MODE60,MODE61,MODE59,MODE62,MODE62,MODE63,MODE60,MODE64,MODE57,MODE61)  */
A_ISTRUCT(A68_BITS ,8,A68t56);
typedef struct A68t56  A68_56 ;    /* STRUCT 8 BITS */
struct A68t53{
struct A68t56  Stringterm;
A_PAD_ISTRUCT(A68_56 ,PAD_7)
struct A68t49  Logicalfilemended;
struct A68t49  Physicalfilemended;
struct A68t49  Valueerrormended;
struct A68t57  Charerrormended;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(MODE56,MODE49,MODE49,MODE49,MODE57)  */
struct A68t55{
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
typedef struct A68t55  A68_55 ;    /* STRUCT(REF MODE26,INT,INT,INT,BOOL,BOOL)  */
struct A68t54{
A68_BOOL  Readmood;
A_PAD_BOOL(PAD_13)
A68_BOOL  Charmood;
A_PAD_BOOL(PAD_14)
A68_BOOL  Opened;
A_PAD_BOOL(PAD_15)
A68_BOOL  Ended;
A_PAD_BOOL(PAD_16)
A68_BOOL  Bol;
A_PAD_BOOL(PAD_17)
A68_INT  Backch;
A_PAD_INT(PAD_18)
A68_INT  Lasterror;
A_PAD_INT(PAD_19)
struct A68t55  Buffer;
A68_INT  Pos;
A_PAD_INT(PAD_20)
};
typedef struct A68t54  A68_54 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,MODE55,INT)  */
struct A68t50{
struct A68t51  Book;
A68_INT  Sysfile;
A_PAD_INT(PAD_21)
struct A68t52  Sys;
struct A68t53  Io;
struct A68t54  State;
};
typedef struct A68t50  A68_50 ;    /* STRUCT(MODE51,INT,MODE52,MODE53,MODE54)  */

A_PROCEDURE(A68_VOID ,A68t66,(struct A68t50 *,A68_VC *),(struct A68t50 *,A68_VC *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(REF MODE50) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t50 *,A68_RC ),(struct A68t50 *,A68_RC ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF MODE50,MODE27) VOID */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t50 *,struct A68t49 ),(struct A68t50 *,struct A68t49 ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE50,MODE49) VOID */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t50 *,struct A68t57 ),(struct A68t50 *,struct A68t57 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE50,MODE57) VOID */
struct A68t71 ;

A_PROCEDURE(A68_INT ,A68t70,(struct A68t50 *,A68_RC ,struct A68t71 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t50 *,A68_RC ,struct A68t71 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE50,MODE27,MODE71,INT,INT,INT) INT */
struct A68t71{
struct A68t52  Sys;
struct A68t65  Type;
struct A68t53  Defaultio;
};
typedef struct A68t71  A68_71 ;    /* STRUCT(MODE52,MODE65,MODE53)  */
struct A68t73 ;

A_PROCEDURE(A68_INT ,A68t72,(struct A68t50 *,struct A68t73 ,struct A68t71 ),(struct A68t50 *,struct A68t73 ,struct A68t71 ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(REF MODE50,MODE73,MODE71) INT */
struct A68t73 { A68_INT mode; union {
A68_CHAR  mode1;
A68_RC  mode2;
A68_VC  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t73  A68_73 ;    /* UNION(CHAR,MODE27,REF MODE26)  */

A_PROCEDURE(A68_INT ,A68t74,(struct A68t50 *,struct A68t71 ),(struct A68t50 *,struct A68t71 ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(REF MODE50,MODE71) INT */

A_PROCEDURE(A68_VOID ,A68t75,(struct A68t50 *,A68_INT ,A68_INT ,A68_INT ),(struct A68t50 *,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(REF MODE50,INT,INT,INT) VOID */

A_PROCEDURE(struct A68t50 *,A68t76,(struct A68t50 *),(struct A68t50 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(REF MODE50) REF MODE50 */
struct A68t78 ;

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t50 *,struct A68t78 ),(struct A68t50 *,struct A68t78 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF MODE50,MODE78) VOID */
A_ROW(struct A68t79 ,A68t78,1);
typedef struct A68t78  A68_78 ;    /* [] MODE79 */
A_ROW(A68_LBITS ,A68t81,1);
typedef struct A68t81  A68_81 ;    /* [] LONG BITS */
A_ROW(A68_BITS ,A68t82,1);
typedef struct A68t82  A68_82 ;    /* [] BITS */
A_ROW(A68_SBITS ,A68t83,1);
typedef struct A68t83  A68_83 ;    /* [] SHORT BITS */
A_ROW(A68_SSBITS ,A68t84,1);
typedef struct A68t84  A68_84 ;    /* [] SHORT SHORT BITS */
A_ROW(A68_LINT ,A68t85,1);
typedef struct A68t85  A68_85 ;    /* [] LONG INT */
A_ROW(A68_INT ,A68t86,1);
typedef struct A68t86  A68_86 ;    /* [] INT */
A_ROW(A68_SINT ,A68t87,1);
typedef struct A68t87  A68_87 ;    /* [] SHORT INT */
A_ROW(A68_SSINT ,A68t88,1);
typedef struct A68t88  A68_88 ;    /* [] SHORT SHORT INT */
A_ROW(A68_REAL ,A68t89,1);
typedef struct A68t89  A68_89 ;    /* [] REAL */
A_ROW(A68_SREAL ,A68t90,1);
typedef struct A68t90  A68_90 ;    /* [] SHORT REAL */
A_ROW(A68_COMPL ,A68t91,1);
typedef struct A68t91  A68_91 ;    /* [] COMPL */
A_ROW(A68_SCOMPL ,A68t92,1);
typedef struct A68t92  A68_92 ;    /* [] SHORT COMPL */
A_STRAIGHT(A68_VOID,A68t93);
typedef struct A68t93  A68_93 ;    /* STRAIGHT MODE94 */
struct A68t94 { A68_INT mode; union {
A68_CHAR * mode1;
A68_RC  mode2;
struct A68t80 * mode3;
A68_BOOL * mode4;
struct A68t44  mode5;
A68_LBITS * mode6;
struct A68t81  mode7;
A68_BITS * mode8;
struct A68t82  mode9;
A68_SBITS * mode10;
struct A68t83  mode11;
A68_SSBITS * mode12;
struct A68t84  mode13;
A68_LINT * mode14;
struct A68t85  mode15;
A68_INT * mode16;
struct A68t86  mode17;
A68_SINT * mode18;
struct A68t87  mode19;
A68_SSINT * mode20;
struct A68t88  mode21;
A68_REAL * mode22;
struct A68t89  mode23;
A68_SREAL * mode24;
struct A68t90  mode25;
A68_COMPL * mode26;
struct A68t91  mode27;
A68_SCOMPL * mode28;
struct A68t92  mode29;
struct A68t93  mode30;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t94  A68_94 ;    /* UNION(REF CHAR,REF MODE27,REF MODE80,REF BOOL,REF MODE44,REF LONG BITS,REF MODE81,REF BITS,REF MODE82,REF SHORT BITS,REF MODE83,REF SHORT SHORT BITS,REF MODE84,REF LONG INT,REF MODE85,REF INT,REF MODE86,REF SHORT INT,REF MODE87,REF SHORT SHORT INT,REF MODE88,REF REAL,REF MODE89,REF SHORT REAL,REF MODE90,REF COMPL,REF MODE91,REF SHORT COMPL,REF MODE92,MODE93)  */
struct A68t79 { A68_INT mode; union {
A68_CHAR * mode1;
A68_RC  mode2;
struct A68t80 * mode3;
A68_BOOL * mode4;
struct A68t44  mode5;
A68_LBITS * mode6;
struct A68t81  mode7;
A68_BITS * mode8;
struct A68t82  mode9;
A68_SBITS * mode10;
struct A68t83  mode11;
A68_SSBITS * mode12;
struct A68t84  mode13;
A68_LINT * mode14;
struct A68t85  mode15;
A68_INT * mode16;
struct A68t86  mode17;
A68_SINT * mode18;
struct A68t87  mode19;
A68_SSINT * mode20;
struct A68t88  mode21;
A68_REAL * mode22;
struct A68t89  mode23;
A68_SREAL * mode24;
struct A68t90  mode25;
A68_COMPL * mode26;
struct A68t91  mode27;
A68_SCOMPL * mode28;
struct A68t92  mode29;
struct A68t93  mode30;
struct A68t60  mode31;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t79  A68_79 ;    /* UNION(REF CHAR,REF MODE27,REF MODE80,REF BOOL,REF MODE44,REF LONG BITS,REF MODE81,REF BITS,REF MODE82,REF SHORT BITS,REF MODE83,REF SHORT SHORT BITS,REF MODE84,REF LONG INT,REF MODE85,REF INT,REF MODE86,REF SHORT INT,REF MODE87,REF SHORT SHORT INT,REF MODE88,REF REAL,REF MODE89,REF SHORT REAL,REF MODE90,REF COMPL,REF MODE91,REF SHORT COMPL,REF MODE92,MODE93,MODE60)  */
#define A68_80  A68_RC 
#define A68t80 A68t27            /* FLEX [] CHAR */
struct A68t96 ;

A_PROCEDURE(A68_VOID ,A68t95,(struct A68t50 *,struct A68t96 ),(struct A68t50 *,struct A68t96 ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE50,MODE96) VOID */
A_ROW(struct A68t97 ,A68t96,1);
typedef struct A68t96  A68_96 ;    /* [] MODE97 */
A_STRAIGHT(A68_VOID,A68t98);
typedef struct A68t98  A68_98 ;    /* STRAIGHT MODE99 */
struct A68t99 { A68_INT mode; union {
A68_CHAR  mode1;
A68_RC  mode2;
A68_BOOL  mode3;
struct A68t44  mode4;
A68_LBITS  mode5;
struct A68t81  mode6;
A68_BITS  mode7;
struct A68t82  mode8;
A68_SBITS  mode9;
struct A68t83  mode10;
A68_SSBITS  mode11;
struct A68t84  mode12;
A68_LINT  mode13;
struct A68t85  mode14;
A68_INT  mode15;
struct A68t86  mode16;
A68_SINT  mode17;
struct A68t87  mode18;
A68_SSINT  mode19;
struct A68t88  mode20;
A68_REAL  mode21;
struct A68t89  mode22;
A68_SREAL  mode23;
struct A68t90  mode24;
A68_COMPL  mode25;
struct A68t91  mode26;
A68_SCOMPL  mode27;
struct A68t92  mode28;
struct A68t98  mode29;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t99  A68_99 ;    /* UNION(CHAR,MODE27,BOOL,MODE44,LONG BITS,MODE81,BITS,MODE82,SHORT BITS,MODE83,SHORT SHORT BITS,MODE84,LONG INT,MODE85,INT,MODE86,SHORT INT,MODE87,SHORT SHORT INT,MODE88,REAL,MODE89,SHORT REAL,MODE90,COMPL,MODE91,SHORT COMPL,MODE92,MODE98)  */
struct A68t97 { A68_INT mode; union {
A68_CHAR  mode1;
A68_RC  mode2;
A68_BOOL  mode3;
struct A68t44  mode4;
A68_LBITS  mode5;
struct A68t81  mode6;
A68_BITS  mode7;
struct A68t82  mode8;
A68_SBITS  mode9;
struct A68t83  mode10;
A68_SSBITS  mode11;
struct A68t84  mode12;
A68_LINT  mode13;
struct A68t85  mode14;
A68_INT  mode15;
struct A68t86  mode16;
A68_SINT  mode17;
struct A68t87  mode18;
A68_SSINT  mode19;
struct A68t88  mode20;
A68_REAL  mode21;
struct A68t89  mode22;
A68_SREAL  mode23;
struct A68t90  mode24;
A68_COMPL  mode25;
struct A68t91  mode26;
A68_SCOMPL  mode27;
struct A68t92  mode28;
struct A68t98  mode29;
struct A68t60  mode30;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t97  A68_97 ;    /* UNION(CHAR,MODE27,BOOL,MODE44,LONG BITS,MODE81,BITS,MODE82,SHORT BITS,MODE83,SHORT SHORT BITS,MODE84,LONG INT,MODE85,INT,MODE86,SHORT INT,MODE87,SHORT SHORT INT,MODE88,REAL,MODE89,SHORT REAL,MODE90,COMPL,MODE91,SHORT COMPL,MODE92,MODE98,MODE60)  */

A_PROCEDURE(A68_VOID ,A68t100,(struct A68t78 ),(struct A68t78 ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE78) VOID */

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE96) VOID */
struct A68t103 ;

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t50 *,struct A68t103 ),(struct A68t50 *,struct A68t103 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE50,MODE103) VOID */
A_ROW(struct A68t94 ,A68t103,1);
typedef struct A68t103  A68_103 ;    /* [] MODE94 */
struct A68t105 ;

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t50 *,struct A68t105 ),(struct A68t50 *,struct A68t105 ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE50,MODE105) VOID */
A_ROW(struct A68t99 ,A68t105,1);
typedef struct A68t105  A68_105 ;    /* [] MODE99 */

A_PROCEDURE(A68_VOID ,A68t106,(struct A68t103 ),(struct A68t103 ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(MODE103) VOID */

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t105 ),(struct A68t105 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE105) VOID */

A_PROCEDURE(A68_BOOL ,A68t108,(A68_LINT *,A68_INT ),(A68_LINT *,A68_INT ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(REF LONG INT,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t109,(A68_INT *,A68_INT ),(A68_INT *,A68_INT ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF INT,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t110,(A68_SINT *,A68_INT ),(A68_SINT *,A68_INT ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF SHORT INT,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t111,(A68_SSINT *,A68_INT ),(A68_SSINT *,A68_INT ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF SHORT SHORT INT,INT) BOOL */
struct A68t113 ;

A_PROCEDURE(A68_BOOL ,A68t112,(A68_RC ,A68_INT ,A68_BOOL ,struct A68t113 ),(A68_RC ,A68_INT ,A68_BOOL ,struct A68t113 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE27,INT,BOOL,MODE113) BOOL */
struct A68t113 { A68_INT mode; union {
A68_REAL * mode1;
A68_SREAL * mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t113  A68_113 ;    /* UNION(REF REAL,REF SHORT REAL)  */

A_PROCEDURE(A68_INT ,A68t114,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(CHAR) INT */

A_PROCEDURE(A68_BOOL ,A68t115,(A68_CHAR ,A68_INT *,A68_RC ),(A68_CHAR ,A68_INT *,A68_RC ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(CHAR,REF INT,MODE27) BOOL */
struct A68t116 { A68_INT mode; union {
A68_LINT  mode1;
A68_INT  mode2;
A68_SINT  mode3;
A68_SSINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t116  A68_116 ;    /* UNION(LONG INT,INT,SHORT INT,SHORT SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t117,(struct A68t116 ),(struct A68t116 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE116) INT */
struct A68t118 { A68_INT mode; union {
A68_REAL  mode1;
A68_SREAL  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t118  A68_118 ;    /* UNION(REAL,SHORT REAL)  */

A_PROCEDURE(A68_INT ,A68t119,(struct A68t118 ),(struct A68t118 ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE118) INT */

A_PROCEDURE(A68_INT ,A68t120,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE113) INT */

A_PROCEDURE(A68_INT ,A68t121,(A68_BOOL ,A68_INT ),(A68_BOOL ,A68_INT ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(BOOL,INT) INT */
struct A68t123 ;

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t123 ,A68_INT ,A68_RC *),(struct A68t123 ,A68_INT ,A68_RC *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE123,INT) MODE27 */
struct A68t123 { A68_INT mode; union {
A68_LINT  mode1;
A68_INT  mode2;
A68_SINT  mode3;
A68_SSINT  mode4;
A68_REAL  mode5;
A68_SREAL  mode6;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t123  A68_123 ;    /* UNION(LONG INT,INT,SHORT INT,SHORT SHORT INT,REAL,SHORT REAL)  */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t123 ,A68_INT ,A68_INT ,A68_RC *),(struct A68t123 ,A68_INT ,A68_INT ,A68_RC *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE123,INT,INT) MODE27 */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t123 ,A68_INT ,A68_INT ,A68_INT ,A68_RC *),(struct A68t123 ,A68_INT ,A68_INT ,A68_INT ,A68_RC *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE123,INT,INT,INT) MODE27 */

A_PROCEDURE(A68_VOID ,A68t126,(A68_LBITS ,A68_RC *),(A68_LBITS ,A68_RC *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(LONG BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t127,(A68_BITS ,A68_RC *),(A68_BITS ,A68_RC *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_SBITS ,A68_RC *),(A68_SBITS ,A68_RC *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(SHORT BITS) MODE27 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_SSBITS ,A68_RC *),(A68_SSBITS ,A68_RC *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(SHORT SHORT BITS) MODE27 */

A_PROCEDURE(A68_SREAL ,A68t130,(A68_SREAL ),(A68_SREAL ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(SHORT REAL) SHORT REAL */

A_PROCEDURE(A68_REAL ,A68t131,(A68_INT *),(A68_INT *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF INT) REAL */

A_PROCEDURE(A68_REAL ,A68t132,(void),(void *));
typedef struct A68t132  A68_132 ;    /* PROC REAL */

A_PROCEDURE(A68_SREAL ,A68t133,(void),(void *));
typedef struct A68t133  A68_133 ;    /* PROC SHORT REAL */

A_PROCEDURE(A68_LINT ,A68t134,(A68_LINT ),(A68_LINT ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(LONG INT) LONG INT */

A_PROCEDURE(A68_INT ,A68t135,(A68_INT ),(A68_INT ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_SINT ,A68t136,(A68_SINT ),(A68_SINT ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(SHORT INT) SHORT INT */

A_PROCEDURE(A68_SSINT ,A68t137,(A68_SSINT ),(A68_SSINT ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(SHORT SHORT INT) SHORT SHORT INT */

A_PROCEDURE(struct A68t56 ,A68t138,(A68_RC ),(A68_RC ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE27) MODE56 */

A_PROCEDURE(A68_BOOL ,A68t139,(A68_CHAR ,struct A68t56 ),(A68_CHAR ,struct A68t56 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(CHAR,MODE56) BOOL */

A_PROCEDURE(A68_BITS *,A68t140,(A68_INT ),(A68_INT ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT) REF BITS */

A_PROCEDURE(struct A68t32 *,A68t141,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(REF BITS) REF MODE32 */

A_PROCEDURE(struct A68t32 *,A68t142,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF CHAR) REF MODE32 */

A_PROCEDURE(A68_CHAR *,A68t143,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF MODE32) REF CHAR */

A_PROCEDURE(A68_INT ,A68t144,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE32) INT */

A_PROCEDURE(struct A68t31 *,A68t145,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE32) REF MODE31 */
struct A68t146{
A68_CHAR * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_22)
A68_INT  Upb;
A_PAD_INT(PAD_23)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(REF CHAR,BITS,INT)  */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC ,struct A68t146 *),(A68_VC ,struct A68t146 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE26) MODE146 */
A_VECTOR(A68_BITS ,A68t148);
typedef struct A68t148  A68_148 ;    /* VECTOR [] BITS */
struct A68t149{
A68_BITS * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_24)
A68_INT  Upb;
A_PAD_INT(PAD_25)
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF BITS,BITS,INT)  */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t148 ,struct A68t149 *),(struct A68t148 ,struct A68t149 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE148) MODE149 */
A_VECTOR(A68_INT ,A68t151);
typedef struct A68t151  A68_151 ;    /* VECTOR [] INT */
struct A68t152{
A68_INT * Data;
A68_BITS  Gc;
A_PAD_BITS(PAD_26)
A68_INT  Upb;
A_PAD_INT(PAD_27)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(REF INT,BITS,INT)  */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t151 ,struct A68t152 *),(struct A68t151 ,struct A68t152 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE151) MODE152 */
struct A68t154{
A68_BITS * Cp;
struct A68t32 * Env;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(REF BITS,REF MODE32)  */

A_PROCEDURE(struct A68t154 *,A68t155,(struct A68t37 *),(struct A68t37 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE37) REF MODE154 */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t37 ,struct A68t154 *),(struct A68t37 ,struct A68t154 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE37) MODE154 */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t38 ,struct A68t154 *),(struct A68t38 ,struct A68t154 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE38) MODE154 */

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t41 ,struct A68t154 *),(struct A68t41 ,struct A68t154 *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE41) MODE154 */

A_PROCEDURE(A68_VOID ,A68t159,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t159 ,struct A68t154 *),(struct A68t159 ,struct A68t154 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE159) MODE154 */
A_ISTRUCT(A68_CHAR ,8,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(struct A68t161 ,A68t162,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REAL) MODE161 */
A_ISTRUCT(A68_CHAR ,4,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t163 ,A68t164,(A68_SREAL ),(A68_SREAL ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(SHORT REAL) MODE163 */

A_PROCEDURE(A68_REAL ,A68t165,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE161) REAL */

A_PROCEDURE(A68_SREAL ,A68t166,(struct A68t163 ),(struct A68t163 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE163) SHORT REAL */

A_PROCEDURE(struct A68t161 ,A68t167,(A68_LBITS ),(A68_LBITS ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(LONG BITS) MODE161 */

A_PROCEDURE(struct A68t163 ,A68t168,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(BITS) MODE163 */
A_ISTRUCT(A68_CHAR ,2,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(struct A68t169 ,A68t170,(A68_SBITS ),(A68_SBITS ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(SHORT BITS) MODE169 */
A_ISTRUCT(A68_CHAR ,1,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 1 CHAR */

A_PROCEDURE(struct A68t171 ,A68t172,(A68_SSBITS ),(A68_SSBITS ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(SHORT SHORT BITS) MODE171 */

A_PROCEDURE(A68_LBITS ,A68t173,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE161) LONG BITS */

A_PROCEDURE(A68_BITS ,A68t174,(struct A68t163 ),(struct A68t163 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE163) BITS */

A_PROCEDURE(A68_SBITS ,A68t175,(struct A68t169 ),(struct A68t169 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE169) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t176,(struct A68t171 ),(struct A68t171 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE171) SHORT SHORT BITS */
A_ISTRUCT(A68_BITS ,2,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 2 BITS */

A_PROCEDURE(struct A68t177 ,A68t178,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REAL) MODE177 */

A_PROCEDURE(A68_REAL ,A68t179,(struct A68t177 ),(struct A68t177 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE177) REAL */

A_PROCEDURE(struct A68t177 ,A68t180,(A68_LBITS ),(A68_LBITS ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(LONG BITS) MODE177 */

A_PROCEDURE(A68_LBITS ,A68t181,(struct A68t177 ),(struct A68t177 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE177) LONG BITS */

A_PROCEDURE(A68_INT ,A68t182,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REAL) INT */

A_PROCEDURE(A68_BOOL ,A68t183,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REAL) BOOL */

A_PROCEDURE(A68_VOID ,A68t184,(A68_COMPL ,A68_INT ,A68_COMPL *),(A68_COMPL ,A68_INT ,A68_COMPL *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(COMPL,INT) COMPL */

A_PROCEDURE(A68_REAL ,A68t185,(A68_REAL ,A68_INT ),(A68_REAL ,A68_INT ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REAL,INT) REAL */

A_PROCEDURE(A68_VOID ,A68t186,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t187,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t188,(A68_RC ,A68_VC *),(A68_RC ,A68_VC *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE27) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t32 *,A68_VC *),(struct A68t32 *,A68_VC *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE32) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t190,(A68_VC ),(A68_VC ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE26) REF CHAR */

A_PROCEDURE(A68_BITS *,A68t191,(struct A68t148 ),(struct A68t148 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE148) REF BITS */

A_PROCEDURE(A68_INT *,A68t192,(struct A68t151 ),(struct A68t151 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE151) REF INT */

A_PROCEDURE(struct A68t32 *,A68t193,(A68_VC ),(A68_VC ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE26) REF MODE32 */

A_PROCEDURE(A68_REAL ,A68t194,(A68_VC ),(A68_VC ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE26) REAL */

A_PROCEDURE(A68_SREAL ,A68t195,(A68_VC ),(A68_VC ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE26) SHORT REAL */

A_PROCEDURE(A68_LBITS ,A68t196,(A68_VC ),(A68_VC ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE26) LONG BITS */

A_PROCEDURE(A68_BITS ,A68t197,(A68_VC ),(A68_VC ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE26) BITS */

A_PROCEDURE(A68_SBITS ,A68t198,(A68_VC ),(A68_VC ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE26) SHORT BITS */

A_PROCEDURE(A68_SSBITS ,A68t199,(A68_VC ),(A68_VC ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE26) SHORT SHORT BITS */

A_PROCEDURE(A68_VOID ,A68t200,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t201,(A68_BITS *,A68_VC *),(A68_BITS *,A68_VC *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF BITS) REF MODE26 */

A_PROCEDURE(A68_SSINT ,A68t202,(A68_SSINT ,A68_SSINT ),(A68_SSINT ,A68_SSINT ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(SHORT SHORT INT,SHORT SHORT INT) SHORT SHORT INT */

A_PROCEDURE(A68_SINT ,A68t203,(A68_SINT ,A68_SINT ),(A68_SINT ,A68_SINT ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(SHORT INT,SHORT INT) SHORT INT */

A_PROCEDURE(A68_INT ,A68t204,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_LINT ,A68t205,(A68_LINT ,A68_LINT ),(A68_LINT ,A68_LINT ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(LONG INT,LONG INT) LONG INT */

A_PROCEDURE(A68_REAL ,A68t206,(A68_INT ,A68_REAL ),(A68_INT ,A68_REAL ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(INT,REAL) REAL */

A_PROCEDURE(A68_REAL ,A68t207,(A68_REAL ,A68_REAL ),(A68_REAL ,A68_REAL ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REAL,REAL) REAL */

A_PROCEDURE(A68_SREAL ,A68t208,(A68_SREAL ,A68_SREAL ),(A68_SREAL ,A68_SREAL ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(SHORT REAL,SHORT REAL) SHORT REAL */
A_ISTRUCT(A68_SSBITS ,32,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 32 SHORT SHORT BITS */
struct A68t209{
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
struct A68t210  Ccc;
A_PAD_ISTRUCT(A68_210 ,PAD_33)
A68_BITS  Cispeed;
A_PAD_BITS(PAD_34)
A68_BITS  Cospeed;
A_PAD_BITS(PAD_35)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(BITS,BITS,BITS,BITS,SHORT SHORT BITS,MODE210,BITS,BITS)  */

A_PROCEDURE(A68_CHAR *,A68t211,(struct A68t209 *),(struct A68t209 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE209) REF CHAR */

A_PROCEDURE(A68_BITS ,A68t212,(A68_INT ),(A68_INT ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(INT) BITS */

A_PROCEDURE(A68_BOOL ,A68t213,(A68_INT ,A68_LBITS ),(A68_INT ,A68_LBITS ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(INT,LONG BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t214,(A68_INT ,A68_SBITS ),(A68_INT ,A68_SBITS ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(INT,SHORT BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t215,(A68_INT ,A68_SSBITS ),(A68_INT ,A68_SSBITS ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(INT,SHORT SHORT BITS) BOOL */

A_PROCEDURE(struct A68t56 ,A68t216,(struct A68t56 ,struct A68t56 ),(struct A68t56 ,struct A68t56 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE56,MODE56) MODE56 */

A_PROCEDURE(A68_INT ,A68t217,(void),(void *));
typedef struct A68t217  A68_217 ;    /* PROC INT */

A_PROCEDURE(A68_REAL ,A68t218,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REAL) REAL */

A_PROCEDURE(A68_INT ,A68t219,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE26,INT) INT */

A_PROCEDURE(A68_BITS *,A68t220,(A68_INT ,A68_BITS *),(A68_INT ,A68_BITS *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(INT,REF BITS) REF BITS */

A_PROCEDURE(A68_REAL ,A68t221,(A68_VC ),(A68_VC ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE26) REAL */

A_PROCEDURE(A68_INT ,A68t222,(A68_INT ,A68_VC ,A68_INT *),(A68_INT ,A68_VC ,A68_INT *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(INT,MODE26,REF INT) INT */

A_PROCEDURE(A68_INT ,A68t223,(A68_INT ,A68_VC ,A68_INT ),(A68_INT ,A68_VC ,A68_INT ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(INT,MODE26,INT) INT */

A_PROCEDURE(struct A68t31 *,A68t224,(A68_VC ),(A68_VC ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE26) REF MODE31 */

A_PROCEDURE(A68_INT ,A68t225,(A68_VC ,A68_BITS *),(A68_VC ,A68_BITS *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE26,REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t226,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(INT,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t227,(A68_VC ,A68_VC ,A68_REAL ,A68_INT ,A68_INT ),(A68_VC ,A68_VC ,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE26,MODE26,REAL,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t228,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t229,(A68_BITS *,struct A68t32 *),(A68_BITS *,struct A68t32 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF BITS,REF MODE32) INT */

A_PROCEDURE(A68_INT ,A68t230,(A68_INT ,A68_CHAR *),(A68_INT ,A68_CHAR *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(INT,REF CHAR) INT */

A_PROCEDURE(A68_INT ,A68t231,(A68_INT ,A68_BITS ,A68_CHAR *),(A68_INT ,A68_BITS ,A68_CHAR *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(INT,BITS,REF CHAR) INT */

A_PROCEDURE(struct A68t32 *,A68t232,(A68_INT ),(A68_INT ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(INT) REF MODE32 */

A_PROCEDURE(A68_INT ,A68t233,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE26,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t234,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE26,MODE26) INT */

A_PROCEDURE(A68_INT ,A68t235,(A68_INT *),(A68_INT *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF INT) INT */

A_PROCEDURE(A68_VOID ,A68t236,(A68_BOOL ,A68_RC *),(A68_BOOL ,A68_RC *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(BOOL) MODE27 */

A_PROCEDURE(A68_VOID ,A68t237,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t238,(A68_BOOL ,struct A68t35 *),(A68_BOOL ,struct A68t35 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(BOOL) MODE35 */

A_PROCEDURE(A68_VOID ,A68t239,(A68_BOOL ,struct A68t80 *),(A68_BOOL ,struct A68t80 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(BOOL) MODE80 */

/* --- Imports from spmodes --- */
/* --- End of imports from spmodes --- */


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


/* --- Imports from spops --- */
/* --- End of imports from spops --- */


/* --- Imports from spplain --- */
extern A68_CHAR  PUAAASP_nullcharacter;
#define XUAAASP_nulch PUAAASP_nullcharacter
/* --- End of imports from spplain --- */


/* --- Imports from spconvert --- */
/* --- End of imports from spconvert --- */


/* --- Imports from transput --- */
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define QZBAASP_prelude A_prelude
/* --- End of imports from transput --- */


/* --- DECS initialisation functions --- */
extern void BAAAASP(void);   /* spmodes */
extern void YAAAASP(void);   /* spaliens */
extern void CGAAASP(void);   /* spops */
extern void DTAAASP(void);   /* spplain */
extern void WZAAASP(void);   /* spconvert */
extern void NVBAASP(void);   /* transput */
/* --- end of DECS initialisation functions --- */
 /* line 2: */
 /* line 3: */
 /* line 45: */
void TMFAASP(void)   /* initialise DECS standard */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-s","-uname","seedfile","-staredit","1234ABCD","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir",".","standard.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"./spmodes.m","./spaliens.m","./spops.m","./spplain.m","./spconvert.m","./transput.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAAASP();   /* USE spmodes */
YAAAASP();   /* USE spaliens */
CGAAASP();   /* USE spops */
DTAAASP();   /* USE spplain */
WZAAASP();   /* USE spconvert */
NVBAASP();   /* USE transput */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/qad/standard.a68";
A_config.translation_time = "Sun Apr 18 20:08:22 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "SMFAASP (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:08:22 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS standard);
 /* line 46: */
 /* line 239: */
/*SKIP*/;
A_PROC_EXIT(DECS standard);
} 
#undef NL
/* end of translation of standard.a68 */
