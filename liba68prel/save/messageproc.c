/* UNAME:YRAAOSF */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t32,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(MODE26) REF MODE26 */
struct A68t35 ;

A_PROCEDURE(A68_VOID ,A68t34,(struct A68t35 ,A68_VC *),(struct A68t35 ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE35) REF MODE26 */
A_VECTOR(A68_VC ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t36,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t36  A68_36 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t37,(void),(void *));
typedef struct A68t37  A68_37 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t38,(struct A68t37 ),(struct A68t37 ,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE37) VOID */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ),(A68_VC ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t40,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t40  A68_40 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t41,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t42);
typedef struct A68t42  A68_42 ;    /* STRUCT 61 CHAR */
struct A68t44{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t46 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t44  A68_44 ;    /* STRUCT(INT,REF MODE46,BITS)  */
struct A68t45{
struct A68t44  Msgno;
A68_VC  Text;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(MODE44,REF MODE26)  */
A_VECTOR(struct A68t45 ,A68t47);
typedef struct A68t47  A68_47 ;    /* VECTOR [] MODE45 */
struct A68t46{
A68_VC  Name;
struct A68t47  Messages;
};
typedef struct A68t46  A68_46 ;    /* STRUCT(REF MODE26,REF MODE47)  */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t44 ,struct A68t35 ),(struct A68t44 ,struct A68t35 ,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE44,MODE35) VOID */
A_VECTOR(struct A68t50 ,A68t51);
typedef struct A68t51  A68_51 ;    /* VECTOR [] MODE50 */
struct A68t50{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t49{
A68_VC  Name;
struct A68t47  Messages;
A68_BOOL * Initialised;
struct A68t51  Setup;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(MODE26,REF MODE47,REF BOOL,MODE51)  */

A_PROCEDURE(A68_VOID ,A68t52,(A68_BOOL ,struct A68t35 *),(A68_BOOL ,struct A68t35 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(BOOL) MODE35 */

A_PROCEDURE(A68_VOID ,A68t53,(A68_BOOL ,struct A68t49 *),(A68_BOOL ,struct A68t49 *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(BOOL) MODE49 */
#define A68_54  A68_VC 
#define A68t54 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_55  A68_35 
#define A68t55 A68t35            /* FLEX VECTOR [] MODE54 */

A_PROCEDURE(A68_VOID ,A68t56,(A68_BOOL ,struct A68t51 *),(A68_BOOL ,struct A68t51 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(BOOL) MODE51 */
#define A68_57  A68_50 
#define A68t57 A68t50            /* STRUCT(INT,BITS,MODE54)  */
#define A68_58  A68_51 
#define A68t58 A68t51            /* FLEX VECTOR [] MODE57 */

A_PROCEDURE(A68_VOID ,A68t59,(A68_BOOL ,struct A68t50 *),(A68_BOOL ,struct A68t50 *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(BOOL) MODE50 */
#define A68_60  A68_49 
#define A68t60 A68t49            /* STRUCT(MODE54,REF MODE47,REF BOOL,MODE58)  */

A_PROCEDURE(A68_BITS ,A68t61,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(BITS,BITS) BITS */
A_VECTOR(A68_VC ,A68t62);
typedef struct A68t62  A68_62 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t35 ,struct A68t62 *),(struct A68t35 ,struct A68t62 *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(MODE35) MODE62 */

A_PROCEDURE(A68_VOID ,A68t64,(struct A68t62 ,struct A68t35 *),(struct A68t62 ,struct A68t35 *,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE62) MODE35 */
A_ISTRUCT(A68_CHAR ,11,A68t65);
typedef struct A68t65  A68_65 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,4,A68t66);
typedef struct A68t66  A68_66 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(A68_VOID ,A68t67,(A68_BOOL ,struct A68t47 *),(A68_BOOL ,struct A68t47 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(BOOL) MODE47 */
struct A68t68 { A68_INT mode; union {
struct A68t44  mode1;
struct A68t45  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t68  A68_68 ;    /* UNION(MODE44,MODE45)  */

A_PROCEDURE(A68_BITS ,A68t69,(struct A68t68 ),(struct A68t68 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE68) BITS */

A_PROCEDURE(A68_BOOL ,A68t70,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t71,(struct A68t68 ),(struct A68t68 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE68) BOOL */

A_PROCEDURE(A68_INT ,A68t72,(struct A68t44 ),(struct A68t44 ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE44) INT */
A_ISTRUCT(A68_CHAR ,2048,A68t73);
typedef struct A68t73  A68_73 ;    /* STRUCT 2048 CHAR */

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t49 ,struct A68t44 *),(A68_INT ,struct A68t49 ,struct A68t44 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,MODE49) MODE44 */

A_PROCEDURE(A68_BOOL ,A68t75,(struct A68t44 ,struct A68t49 ),(struct A68t44 ,struct A68t49 ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE44,MODE49) BOOL */

A_PROCEDURE(A68_VOID ,A68t76,(struct A68t44 ,struct A68t35 ,struct A68t45 *),(struct A68t44 ,struct A68t35 ,struct A68t45 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE44,MODE35) MODE45 */

A_PROCEDURE(A68_VOID ,A68t77,(A68_VC ,struct A68t45 *),(A68_VC ,struct A68t45 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE26) MODE45 */
A_ISTRUCT(A68_CHAR ,16,A68t78);
typedef struct A68t78  A68_78 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t79);
typedef struct A68t79  A68_79 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_VC ,4,A68t80);
typedef struct A68t80  A68_80 ;    /* STRUCT 4 MODE26 */
A_ISTRUCT(A68_CHAR ,20,A68t81);
typedef struct A68t81  A68_81 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t82);
typedef struct A68t82  A68_82 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t83);
typedef struct A68t83  A68_83 ;    /* STRUCT 23 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from strops --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_VOID  JDAAOSF_concat(struct A68t35 ,A68_VC *);
/* --- End of imports from strops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BCAAOSF(void);   /* strops */
/* --- end of DECS initialisation functions --- */
static A68_42   CSAAOSF = {"$Id: messageproc.a68,v 1.1.1.1 2001-05-07 10:16:12 sian Exp $"}; 
A_GISVEC(A68_VC ,DSAAOSF,CSAAOSF,61)
A68_31  ESAAOSF_anonymous;
A68_52  FSAAOSF_anonymous;
A68_53  GSAAOSF_anonymous;
static A68_65   XTAAOSF = {"direct call"}; 
A_GISVEC(A68_VC ,YTAAOSF,XTAAOSF,11)
A68_VC  ZTAAOSF_s;
A68_46  GUAAOSF_nilmsg;
A68_44  IUAAOSF_system;
A68_44  KUAAOSF_fatal;
A68_44  MUAAOSF_user;
A68_44  OUAAOSF_error;
A68_44  QUAAOSF_outerr;
A68_44  SUAAOSF_log;
A68_44  UUAAOSF_output;
A68_44  WUAAOSF_logpart;
A68_44  YUAAOSF_outpart;
A68_44  AVAAOSF_diag0;
A68_44  CVAAOSF_diag1;
A68_44  EVAAOSF_diag2;
A68_44  GVAAOSF_diag3;
A68_44  IVAAOSF_diag4;
A68_BITS  JVAAOSF_system_class;
A68_BITS  KVAAOSF_fatal_class;
A68_BITS  LVAAOSF_user_class;
A68_BITS  MVAAOSF_error_class;
A68_BITS  NVAAOSF_outerr_class;
A68_BITS  OVAAOSF_log_class;
A68_BITS  PVAAOSF_output_class;
A68_BITS  QVAAOSF_logpart_class;
A68_BITS  RVAAOSF_outpart_class;
A68_BITS  SVAAOSF_diag0_class;
A68_BITS  TVAAOSF_diag1_class;
A68_BITS  UVAAOSF_diag2_class;
A68_BITS  VVAAOSF_diag3_class;
A68_BITS  WVAAOSF_diag4_class;
static A68_66   YVAAOSF = {"????"}; 
A_GISVEC(A68_VC ,ZVAAOSF,YVAAOSF,4)
static A68_45  BWAAOSF_unsetmsg;
A68_35  LWAAOSF_nullmsg;
A68_47  QWAAOSF_no_messages;
A68_INT  SWAAOSF_diagnostic_level;
#define RYAAOSF_buf_size 2048
static A68_VC  UYAAOSF_buffer;
static A68_78   MABAOSF = {"translate_msg:  "}; 
A_GISVEC(A68_VC ,NABAOSF,MABAOSF,16)
static A68_79   OABAOSF = {" - "}; 
A_GISVEC(A68_VC ,PABAOSF,OABAOSF,3)
static A68_81   WABAOSF = {"unset message number"}; 
A_GISVEC(A68_VC ,YABAOSF,WABAOSF,20)
static A68_82   BBBAOSF = {"number out of range"}; 
A_GISVEC(A68_VC ,CBBAOSF,BBBAOSF,19)
static A68_83   QBBAOSF = {"insufficient parameters"}; 
A_GISVEC(A68_VC ,RBBAOSF,QBBAOSF,23)
static A68_78   TBBAOSF = {"message too long"}; 
A_GISVEC(A68_VC ,UBBAOSF,TBBAOSF,16)
static A68_78   YBBAOSF = {"message too long"}; 
A_GISVEC(A68_VC ,ZBBAOSF,YBBAOSF,16)
static A68_82   BCBAOSF = {"too many parameters"}; 
A_GISVEC(A68_VC ,CCBAOSF,BCBAOSF,19)
static A68_81   JCBAOSF = {"UPB params must be 1"}; 
A_GISVEC(A68_VC ,KCBAOSF,JCBAOSF,20)
typedef struct   /* env of non-global proc */
{
A68_44  Msgno;
} JABAOSF_fail;
typedef struct   /* env of non-global proc */
{
A68_BOOL * JBBAOSF_failed;
A68_45 * EBBAOSF_message;
A68_77  HABAOSF_fail;
} NBBAOSF_make_sysmsg;

A_STATIC A68_VOID  ISAAOSF_generator(A68_BOOL  HSAAOSF_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NSAAOSF_generator(A68_BOOL  MSAAOSF_anonymous, A68_35  *ReturnedValue);

A_STATIC A68_VOID  WSAAOSF_generator(A68_BOOL  VSAAOSF_anonymous, A68_49  *ReturnedValue);

A_STATIC A68_VOID  YSAAOSF_generator(A68_BOOL  XSAAOSF_anonymous, A68_51  *ReturnedValue);

A_STATIC A68_VOID  CTAAOSF_generator(A68_BOOL  BTAAOSF_anonymous, A68_50  *ReturnedValue);

A_STATIC A68_BITS  UTAAOSF_xor(A68_BITS  A, A68_BITS  B);

A_STATIC A68_VOID  BUAAOSF_generator(A68_BOOL  AUAAOSF_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DWAAOSF_generator(A68_BOOL  CWAAOSF_anonymous, A68_35  *ReturnedValue);

A_STATIC A68_VOID  NWAAOSF_generator(A68_BOOL  MWAAOSF_anonymous, A68_47  *ReturnedValue);

A_STATIC A68_BITS  UWAAOSF_get(A68_68  M);

A_STATIC A68_BOOL  AXAAOSF_enabled(A68_BITS  M);

A68_BOOL  FXAAOSF_sysfault_msg(A68_68  Msg);

A68_BOOL  JXAAOSF_error_msg(A68_68  Msg);

A68_BOOL  PXAAOSF_abort_msg(A68_68  Msg);

A68_BOOL  UXAAOSF_cli_msg(A68_68  Msg);

A68_BOOL  ZXAAOSF_log_msg(A68_68  Msg);

A68_BOOL  EYAAOSF_out_msg(A68_68  Msg);

A68_BOOL  JYAAOSF_newline_msg(A68_68  Msg);

A68_BOOL  MYAAOSF_diag_msg(A68_68  Msg);

A68_INT  PYAAOSF_msg_number(A68_44  Msgno);

A68_VOID  XYAAOSF_make_msgno(A68_INT  Number, A68_49  Facility, A68_44  *ReturnedValue);

A68_BOOL  YZAAOSF_is_facility_msg(A68_44  Msgno, A68_49  Facility);

A68_VOID  EABAOSF_translate_msg(A68_44  Msgno, A68_35  Params, A68_45  *ReturnedValue);

A_STATIC A68_VOID  IABAOSF_fail(A68_VC  Text, A68_45  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MBBAOSF_make_sysmsg(A68_VC  Text, void *NonLocals);

A_STATIC A68_VOID  CTAAOSF_generator(A68_BOOL  BTAAOSF_anonymous, A68_50  *ReturnedValue)
{ 
A68_57  DTAAOSF_anonymous;
A68_VC  ETAAOSF;  /* avoid structure result */
A68_54 * FTAAOSF;  /* YIELD */
A68_50  GTAAOSF;  /* clause result */
{ 
A_CALLPROC(ESAAOSF_anonymous,(BTAAOSF_anonymous, &ETAAOSF),(BTAAOSF_anonymous, &ETAAOSF,(ESAAOSF_anonymous).nonlocals));
FTAAOSF = (&((&DTAAOSF_anonymous)->Text)) ;
(*FTAAOSF) = ETAAOSF;
GTAAOSF = DTAAOSF_anonymous;
} 
*ReturnedValue = (GTAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  YSAAOSF_generator(A68_BOOL  XSAAOSF_anonymous, A68_51  *ReturnedValue)
{ 
A68_51  ATAAOSF;  /* OPERATORS - dynamic generator */
A68_58  ZSAAOSF_anonymous;
A68_57 * HTAAOSF_anonymous;
A68_INT  ITAAOSF;  /* forall loop counter */
A68_50  JTAAOSF;  /* avoid structure result */
A68_51  KTAAOSF;  /* clause result */
{ 
 /* line 95: */
ATAAOSF.upb = 0 ;
( XSAAOSF_anonymous? A_VLOC(A68_50 ,ATAAOSF): A_VHEAP(A68_50 ,ATAAOSF) );
ZSAAOSF_anonymous = ATAAOSF;
ITAAOSF = (*(&ZSAAOSF_anonymous)).upb -1;
HTAAOSF_anonymous = (*(&ZSAAOSF_anonymous)).data;
for (;ITAAOSF-- >= 0;
(HTAAOSF_anonymous++
) )
{
CTAAOSF_generator( XSAAOSF_anonymous, &JTAAOSF );
(*HTAAOSF_anonymous) = JTAAOSF;
}
KTAAOSF = ZSAAOSF_anonymous;
} 
*ReturnedValue = (KTAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  IABAOSF_fail(A68_VC  Text, A68_45  *ReturnedValue, void *NonLocals)
#define NL(x) (((JABAOSF_fail *)NonLocals)->x)
{ 
A68_45  KABAOSF;  /* collateral clause result */
A68_80  LABAOSF;  /* collateral clause result */
A68_35  QABAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RABAOSF;  /* avoid structure result */
A68_45  SABAOSF;  /* clause result */
A_PROC_ENTRY(fail);
 /* line 258: */
KABAOSF.Msgno.Number = NL(Msgno).Number;
KABAOSF.Msgno.Facility = NL(Msgno).Facility;
 /* line 259: */
KABAOSF.Msgno.Class = IUAAOSF_system.Class;
LABAOSF.data[0] = NABAOSF;
LABAOSF.data[1] = (*(&(NL(Msgno).Facility->Name)));
LABAOSF.data[2] = PABAOSF;
LABAOSF.data[3] = Text;
JDAAOSF_concat( A_HISVEC(QABAOSF,LABAOSF,4,A68_VC ), &RABAOSF );
KABAOSF.Text = RABAOSF;
SABAOSF = KABAOSF;
A_PROC_EXIT(fail);
*ReturnedValue = (SABAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  MBBAOSF_make_sysmsg(A68_VC  Text, void *NonLocals)
#define NL(x) (((NBBAOSF_make_sysmsg *)NonLocals)->x)
{ 
A68_45  OBBAOSF;  /* avoid structure result */
A_PROC_ENTRY(make_sysmsg);
 /* line 275: */
{ 
(*NL(JBBAOSF_failed)) = A68_TRUE;
A_CALLPROC(NL(HABAOSF_fail),(Text, &OBBAOSF),(Text, &OBBAOSF,(NL(HABAOSF_fail)).nonlocals));
(*NL(EBBAOSF_message)) = OBBAOSF;
} 
A_PROC_EXIT(make_sysmsg);
return;
} 
#undef NL

A_STATIC A68_VOID  ISAAOSF_generator(A68_BOOL  HSAAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  JSAAOSF;  /* clause result */
A68_VC  KSAAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 84: */
KSAAOSF.upb = 0 ;
( HSAAOSF_anonymous? A_VLOC(A68_CHAR ,KSAAOSF): A_VHEAP(A68_CHAR ,KSAAOSF) );
JSAAOSF = KSAAOSF;
} 
*ReturnedValue = (JSAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NSAAOSF_generator(A68_BOOL  MSAAOSF_anonymous, A68_35  *ReturnedValue)
{ 
A68_35  PSAAOSF;  /* OPERATORS - dynamic generator */
A68_55  OSAAOSF_anonymous;
A68_54 * QSAAOSF_anonymous;
A68_INT  RSAAOSF;  /* forall loop counter */
A68_VC  SSAAOSF;  /* avoid structure result */
A68_35  TSAAOSF;  /* clause result */
{ 
 /* line 93: */
PSAAOSF.upb = 0 ;
( MSAAOSF_anonymous? A_VLOC(A68_VC ,PSAAOSF): A_VHEAP(A68_VC ,PSAAOSF) );
OSAAOSF_anonymous = PSAAOSF;
RSAAOSF = (*(&OSAAOSF_anonymous)).upb -1;
QSAAOSF_anonymous = (*(&OSAAOSF_anonymous)).data;
for (;RSAAOSF-- >= 0;
(QSAAOSF_anonymous++
) )
{
A_CALLPROC(ESAAOSF_anonymous,(MSAAOSF_anonymous, &SSAAOSF),(MSAAOSF_anonymous, &SSAAOSF,(ESAAOSF_anonymous).nonlocals));
(*QSAAOSF_anonymous) = SSAAOSF;
}
TSAAOSF = OSAAOSF_anonymous;
} 
*ReturnedValue = (TSAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  WSAAOSF_generator(A68_BOOL  VSAAOSF_anonymous, A68_49  *ReturnedValue)
{ 
A68_60  LTAAOSF_anonymous;
A68_VC  MTAAOSF;  /* avoid structure result */
A68_54 * NTAAOSF;  /* YIELD */
A68_51  OTAAOSF;  /* avoid structure result */
A68_58 * PTAAOSF;  /* YIELD */
A68_49  QTAAOSF;  /* clause result */
{ 
A_CALLPROC(ESAAOSF_anonymous,(VSAAOSF_anonymous, &MTAAOSF),(VSAAOSF_anonymous, &MTAAOSF,(ESAAOSF_anonymous).nonlocals));
NTAAOSF = (&((&LTAAOSF_anonymous)->Name)) ;
(*NTAAOSF) = MTAAOSF;
YSAAOSF_generator( VSAAOSF_anonymous, &OTAAOSF );
PTAAOSF = (&((&LTAAOSF_anonymous)->Setup)) ;
(*PTAAOSF) = OTAAOSF;
QTAAOSF = LTAAOSF_anonymous;
} 
*ReturnedValue = (QTAAOSF);
return;
} 
#undef NL

A_STATIC A68_BITS  UTAAOSF_xor(A68_BITS  A, A68_BITS  B)
{ 
A68_BITS  VTAAOSF;  /* clause result */
A_PROC_ENTRY(xor);
VTAAOSF = (A68_BITS )((A68_BITS )(A&~B)|(A68_BITS )(B&~A));
A_PROC_EXIT(xor);
return( VTAAOSF );
} 
#undef NL

A_STATIC A68_VOID  BUAAOSF_generator(A68_BOOL  AUAAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  CUAAOSF;  /* clause result */
A68_VC  DUAAOSF;  /* OPERATORS - dynamic generator */
{ 
DUAAOSF.upb = ZTAAOSF_s.upb ;
( AUAAOSF_anonymous? A_VLOC(A68_CHAR ,DUAAOSF): A_VHEAP(A68_CHAR ,DUAAOSF) );
CUAAOSF = DUAAOSF;
} 
*ReturnedValue = (CUAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  DWAAOSF_generator(A68_BOOL  CWAAOSF_anonymous, A68_35  *ReturnedValue)
{ 
A68_35  FWAAOSF;  /* OPERATORS - dynamic generator */
A68_55  EWAAOSF_anonymous;
A68_54 * GWAAOSF_anonymous;
A68_INT  HWAAOSF;  /* forall loop counter */
A68_VC  IWAAOSF;  /* avoid structure result */
A68_35  JWAAOSF;  /* clause result */
{ 
FWAAOSF.upb = 0 ;
( CWAAOSF_anonymous? A_VLOC(A68_VC ,FWAAOSF): A_VHEAP(A68_VC ,FWAAOSF) );
EWAAOSF_anonymous = FWAAOSF;
HWAAOSF = (*(&EWAAOSF_anonymous)).upb -1;
GWAAOSF_anonymous = (*(&EWAAOSF_anonymous)).data;
for (;HWAAOSF-- >= 0;
(GWAAOSF_anonymous++
) )
{
A_CALLPROC(ESAAOSF_anonymous,(CWAAOSF_anonymous, &IWAAOSF),(CWAAOSF_anonymous, &IWAAOSF,(ESAAOSF_anonymous).nonlocals));
(*GWAAOSF_anonymous) = IWAAOSF;
}
JWAAOSF = EWAAOSF_anonymous;
} 
*ReturnedValue = (JWAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NWAAOSF_generator(A68_BOOL  MWAAOSF_anonymous, A68_47  *ReturnedValue)
{ 
A68_47  OWAAOSF;  /* clause result */
A68_47  PWAAOSF;  /* OPERATORS - dynamic generator */
{ 
PWAAOSF.upb = 0 ;
( MWAAOSF_anonymous? A_VLOC(A68_45 ,PWAAOSF): A_VHEAP(A68_45 ,PWAAOSF) );
OWAAOSF = PWAAOSF;
} 
*ReturnedValue = (OWAAOSF);
return;
} 
#undef NL

A_STATIC A68_BITS  UWAAOSF_get(A68_68  M)
{ 
A68_68  VWAAOSF;  /* united object - for case conformity */
A68_44  WWAAOSF_mno;
A68_BITS  XWAAOSF;  /* clause result */
A68_45  YWAAOSF_msg;
A_PROC_ENTRY(get);
 /* line 183: */
VWAAOSF = M ;
switch ( VWAAOSF.mode )
{ 
case 1: /* STRUCT(INT,REF MODE46,BITS)  */
WWAAOSF_mno = (VWAAOSF.data.mode1);
 /* line 184: */
XWAAOSF = WWAAOSF_mno.Class;
break;
case 2: /* STRUCT(MODE44,REF MODE26)  */
YWAAOSF_msg = (VWAAOSF.data.mode2);
 /* line 185: */
XWAAOSF = YWAAOSF_msg.Msgno.Class;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(get);
return( XWAAOSF );
} 
#undef NL

A_STATIC A68_BOOL  AXAAOSF_enabled(A68_BITS  M)
{ 
A68_BOOL  BXAAOSF;  /* optbool result */
A68_BOOL  CXAAOSF;  /* optbool result */
A68_BOOL  DXAAOSF;  /* clause result */
A_PROC_ENTRY(enabled);
 /* line 188: */
BXAAOSF = ((A68_BITS )(M&0X40U)!=0X40U);
if ( ! BXAAOSF )
{BXAAOSF = (SWAAOSF_diagnostic_level>1);
}
 /* line 189: */
if ( ! BXAAOSF )
{CXAAOSF = (SWAAOSF_diagnostic_level==1);
if ( CXAAOSF )
{CXAAOSF = ((A68_BITS )(M&0X20U)!=0X20U);
}
BXAAOSF = CXAAOSF;
}
DXAAOSF = BXAAOSF;
A_PROC_EXIT(enabled);
return( DXAAOSF );
} 
#undef NL

A68_BOOL  FXAAOSF_sysfault_msg(A68_68  Msg)
{ 
A68_BITS  GXAAOSF_m;
A68_BOOL  HXAAOSF;  /* clause result */
A_PROC_ENTRY(sysfault_msg);
 /* line 192: */
{ 
GXAAOSF_m = UWAAOSF_get(Msg);
HXAAOSF = (GXAAOSF_m==0X0U);
} 
A_PROC_EXIT(sysfault_msg);
return( HXAAOSF );
} 
#undef NL

A68_BOOL  JXAAOSF_error_msg(A68_68  Msg)
{ 
A68_BITS  KXAAOSF_m;
A68_BOOL  LXAAOSF;  /* optbool result */
A68_BOOL  MXAAOSF;  /* optbool result */
A68_BOOL  NXAAOSF;  /* clause result */
A_PROC_ENTRY(error_msg);
 /* line 195: */
{ 
KXAAOSF_m = UWAAOSF_get(Msg);
LXAAOSF = (KXAAOSF_m==0X0U);
if ( ! LXAAOSF )
{LXAAOSF = ((A68_BITS )(KXAAOSF_m&0X10U)!=0X0U);
}
 /* line 196: */
if ( ! LXAAOSF )
{MXAAOSF = ((A68_BITS )(KXAAOSF_m&0X2U)==0X2U);
if ( MXAAOSF )
{MXAAOSF = AXAAOSF_enabled(KXAAOSF_m);
}
LXAAOSF = MXAAOSF;
}
NXAAOSF = LXAAOSF;
} 
A_PROC_EXIT(error_msg);
return( NXAAOSF );
} 
#undef NL

A68_BOOL  PXAAOSF_abort_msg(A68_68  Msg)
{ 
A68_BITS  QXAAOSF_m;
A68_BOOL  RXAAOSF;  /* optbool result */
A68_BOOL  SXAAOSF;  /* clause result */
A_PROC_ENTRY(abort_msg);
 /* line 199: */
{ 
QXAAOSF_m = UWAAOSF_get(Msg);
RXAAOSF = (QXAAOSF_m==0X0U);
if ( ! RXAAOSF )
{RXAAOSF = ((A68_BITS )(QXAAOSF_m&0X1U)==0X1U);
}
SXAAOSF = RXAAOSF;
} 
A_PROC_EXIT(abort_msg);
return( SXAAOSF );
} 
#undef NL

A68_BOOL  UXAAOSF_cli_msg(A68_68  Msg)
{ 
A68_BITS  VXAAOSF_m;
A68_BOOL  WXAAOSF;  /* optbool result */
A68_BOOL  XXAAOSF;  /* clause result */
A_PROC_ENTRY(cli_msg);
 /* line 202: */
{ 
VXAAOSF_m = UWAAOSF_get(Msg);
WXAAOSF = ((A68_BITS )(VXAAOSF_m&0X2U)==0X2U);
if ( WXAAOSF )
{WXAAOSF = AXAAOSF_enabled(VXAAOSF_m);
}
XXAAOSF = WXAAOSF;
} 
A_PROC_EXIT(cli_msg);
return( XXAAOSF );
} 
#undef NL

A68_BOOL  ZXAAOSF_log_msg(A68_68  Msg)
{ 
A68_BITS  AYAAOSF_m;
A68_BOOL  BYAAOSF;  /* optbool result */
A68_BOOL  CYAAOSF;  /* clause result */
A_PROC_ENTRY(log_msg);
 /* line 205: */
{ 
AYAAOSF_m = UWAAOSF_get(Msg);
BYAAOSF = ((A68_BITS )(AYAAOSF_m&0X4U)==0X4U);
if ( BYAAOSF )
{BYAAOSF = AXAAOSF_enabled(AYAAOSF_m);
}
CYAAOSF = BYAAOSF;
} 
A_PROC_EXIT(log_msg);
return( CYAAOSF );
} 
#undef NL

A68_BOOL  EYAAOSF_out_msg(A68_68  Msg)
{ 
A68_BITS  FYAAOSF_m;
A68_BOOL  GYAAOSF;  /* optbool result */
A68_BOOL  HYAAOSF;  /* clause result */
A_PROC_ENTRY(out_msg);
 /* line 208: */
{ 
FYAAOSF_m = UWAAOSF_get(Msg);
GYAAOSF = ((A68_BITS )(FYAAOSF_m&0X8U)==0X8U);
if ( GYAAOSF )
{GYAAOSF = AXAAOSF_enabled(FYAAOSF_m);
}
HYAAOSF = GYAAOSF;
} 
A_PROC_EXIT(out_msg);
return( HYAAOSF );
} 
#undef NL

A68_BOOL  JYAAOSF_newline_msg(A68_68  Msg)
{ 
A68_BOOL  KYAAOSF;  /* clause result */
A_PROC_ENTRY(newline_msg);
 /* line 211: */
KYAAOSF = ((A68_BITS )(UWAAOSF_get(Msg)&0X80U)!=0X80U);
A_PROC_EXIT(newline_msg);
return( KYAAOSF );
} 
#undef NL

A68_BOOL  MYAAOSF_diag_msg(A68_68  Msg)
{ 
A68_BOOL  NYAAOSF;  /* clause result */
A_PROC_ENTRY(diag_msg);
 /* line 214: */
NYAAOSF = ((A68_BITS )(UWAAOSF_get(Msg)&0X40U)==0X40U);
A_PROC_EXIT(diag_msg);
return( NYAAOSF );
} 
#undef NL

A68_INT  PYAAOSF_msg_number(A68_44  Msgno)
{ 
A68_INT  QYAAOSF;  /* clause result */
A_PROC_ENTRY(msg_number);
QYAAOSF = Msgno.Number;
A_PROC_EXIT(msg_number);
return( QYAAOSF );
} 
#undef NL

A68_VOID  XYAAOSF_make_msgno(A68_INT  Number, A68_49  Facility, A68_44  *ReturnedValue)
{ 
A68_47  YYAAOSF_messages;
A68_INT  ZYAAOSF_upb;
A68_45 * AZAAOSF_msg;
A68_INT  BZAAOSF;  /* forall loop counter */
A68_46 * CZAAOSF_msgfacility;
A68_46  DZAAOSF;  /* collateral clause result */
A68_VC  EZAAOSF;  /* avoid structure result */
A68_50  FZAAOSF_setup;
A68_51  GZAAOSF;  /* forall yield */
A68_50 * HZAAOSF;  /* forall control - []x */
A68_INT  IZAAOSF;  /* forall loop counter */
A68_45  JZAAOSF;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} KZAAOSF; 
A68_INT  LZAAOSF;  /* YIELD */
A68_45 * MZAAOSF;  /* YIELD */
A68_BOOL * NZAAOSF;  /* YIELD */
A68_BOOL  OZAAOSF;  /* optbool result */
A68_44  PZAAOSF;  /* collateral clause result */
A68_46  QZAAOSF;  /* collateral clause result */
A68_VC  RZAAOSF;  /* avoid structure result */
A68_46 * SZAAOSF;  /* YIELD */
A68_44  TZAAOSF;  /* clause result */
A68_44  UZAAOSF_no;
A68_44  VZAAOSF;  /* collateral clause result */
A_PROC_ENTRY(make_msgno);
 /* line 223: */
 /* line 224: */
{ 
YYAAOSF_messages = Facility.Messages;
 /* line 225: */
ZYAAOSF_upb = YYAAOSF_messages.upb;
 /* line 227: */
 /* line 228: */
if ( !(*Facility.Initialised) )
{ 
BZAAOSF = YYAAOSF_messages.upb -1;
AZAAOSF_msg = YYAAOSF_messages.data;
for (;BZAAOSF-- >= 0;
(AZAAOSF_msg++
) )
{
(*AZAAOSF_msg) = BWAAOSF_unsetmsg;
}
 /* line 229: */
CZAAOSF_msgfacility = (A_HEAP(A68_46 ));
ZCAAOSF_makervc( Facility.Name, &EZAAOSF );
DZAAOSF.Name = EZAAOSF;
DZAAOSF.Messages = YYAAOSF_messages;
(*CZAAOSF_msgfacility) = DZAAOSF;
 /* line 230: */
 /* line 231: */
GZAAOSF = Facility.Setup ;
IZAAOSF = GZAAOSF.upb -1;
HZAAOSF = GZAAOSF.data;
for (;IZAAOSF-- >= 0;
(HZAAOSF++
) )
{
FZAAOSF_setup = *HZAAOSF;
 /* line 232: */
JZAAOSF.Msgno.Number = FZAAOSF_setup.Number;
JZAAOSF.Msgno.Facility = CZAAOSF_msgfacility;
 /* line 233: */
JZAAOSF.Msgno.Class = FZAAOSF_setup.Class;
 /* line 234: */
KZAAOSF.source = FZAAOSF_setup.Text ;
JZAAOSF.Text = (KZAAOSF.destination);
LZAAOSF = FZAAOSF_setup.Number ;
MZAAOSF = (&A_VINDEX(YYAAOSF_messages,LZAAOSF)) ;
(*MZAAOSF) = JZAAOSF;
}
 /* line 235: */
 /* line 236: */
NZAAOSF = Facility.Initialised ;
(*NZAAOSF) = A68_TRUE;
} 
 /* line 237: */
OZAAOSF = (Number<=0);
if ( ! OZAAOSF )
{ /* line 238: */
OZAAOSF = (Number>ZYAAOSF_upb);
}
if ( OZAAOSF )
{ 
PZAAOSF.Number = Number;
ZCAAOSF_makervc( Facility.Name, &RZAAOSF );
QZAAOSF.Name = RZAAOSF;
QZAAOSF.Messages = YYAAOSF_messages;
 /* line 239: */
SZAAOSF = A_HEAP(A68_46 ) ;
(*SZAAOSF) = QZAAOSF ;
PZAAOSF.Facility = SZAAOSF;
 /* line 240: */
PZAAOSF.Class = IUAAOSF_system.Class;
TZAAOSF = PZAAOSF;
} 
else
{ 
UZAAOSF_no = (*(&((&A_VINDEX(YYAAOSF_messages,Number))->Msgno)));
 /* line 241: */
 /* line 242: */
if ( (UZAAOSF_no.Number<=0) )
{ 
VZAAOSF.Number = UZAAOSF_no.Number;
VZAAOSF.Facility = UZAAOSF_no.Facility;
 /* line 243: */
 /* line 244: */
VZAAOSF.Class = IUAAOSF_system.Class;
TZAAOSF = VZAAOSF;
} 
else
{ 
 /* line 245: */
 /* line 246: */
TZAAOSF = UZAAOSF_no;
} 
} 
} 
A_PROC_EXIT(make_msgno);
*ReturnedValue = (TZAAOSF);
return;
} 
#undef NL

A68_BOOL  YZAAOSF_is_facility_msg(A68_44  Msgno, A68_49  Facility)
{ 
A68_BOOL  ZZAAOSF;  /* clause result */
A68_47  AABAOSF;  /* == */
A68_47  BABAOSF;  /* == */
A_PROC_ENTRY(is_facility_msg);
 /* line 250: */
AABAOSF = Facility.Messages ;
BABAOSF = (*(&(Msgno.Facility->Messages))) ;
ZZAAOSF = A_VSTRUCTCOMP(BABAOSF,AABAOSF);
A_PROC_EXIT(is_facility_msg);
return( ZZAAOSF );
} 
#undef NL

A68_VOID  EABAOSF_translate_msg(A68_44  Msgno, A68_35  Params, A68_45  *ReturnedValue)
{ 
A68_77  HABAOSF_fail;   /* proc value of non-global proc */
A68_46 * TABAOSF_facility;
A68_47  UABAOSF_messages;
A68_INT  VABAOSF_number;
A68_45  XABAOSF;  /* clause result */
A68_45  ZABAOSF;  /* avoid structure result */
A68_BOOL  ABBAOSF;  /* optbool result */
A68_45  DBBAOSF;  /* avoid structure result */
A68_45  EBBAOSF_message;
A68_VC  FBBAOSF_text;
A68_INT  GBBAOSF_bind;
A68_INT  HBBAOSF_tind;
A68_INT  IBBAOSF_pno;
A68_BOOL  JBBAOSF_failed;
A68_39  LBBAOSF_make_sysmsg;   /* proc value of non-global proc */
A68_BOOL  PBBAOSF;  /* optbool result */
A68_VC  SBBAOSF_p;
A68_INT  VBBAOSF_lwb;
A68_VC  WBBAOSF;  /* OPERATORS - trim index */
A68_VC  XBBAOSF;  /* YIELD */
A68_CHAR * ACBAOSF;  /* YIELD */
A68_45  DCBAOSF;  /* avoid structure result */
A68_45  ECBAOSF;  /* collateral clause result */
A68_VC  FCBAOSF;  /* OPERATORS - trim index */
A68_45  GCBAOSF;  /* collateral clause result */
A68_INT  HCBAOSF;  /* YIELD */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} ICBAOSF; 
A68_45  LCBAOSF;  /* avoid structure result */
A_PROC_ENTRY(translate_msg);
 /* line 254: */
 /* line 257: */
{ 
A_CLOSURE( HABAOSF_fail, IABAOSF_fail, JABAOSF_fail );
(( JABAOSF_fail * ) ( HABAOSF_fail.nonlocals )) -> Msgno = Msgno;
 /* line 261: */
 /* line 262: */
if ( (Msgno.Facility!=(&GUAAOSF_nilmsg)) )
{ 
TABAOSF_facility = Msgno.Facility;
 /* line 263: */
UABAOSF_messages = (*(&(TABAOSF_facility->Messages)));
 /* line 264: */
VABAOSF_number = Msgno.Number;
 /* line 265: */
 /* line 266: */
if ( (VABAOSF_number<0) )
{ 
 /* line 267: */
A_CALLPROC(HABAOSF_fail,(YABAOSF, &ZABAOSF),(YABAOSF, &ZABAOSF,(HABAOSF_fail).nonlocals));
XABAOSF = ZABAOSF;
} 
else
{ 
ABBAOSF = (VABAOSF_number==0);
if ( ! ABBAOSF )
{ /* line 268: */
ABBAOSF = (VABAOSF_number>UABAOSF_messages.upb);
}
if ( ABBAOSF )
{ 
 /* line 269: */
A_CALLPROC(HABAOSF_fail,(CBBAOSF, &DBBAOSF),(CBBAOSF, &DBBAOSF,(HABAOSF_fail).nonlocals));
XABAOSF = DBBAOSF;
} 
else
{ 
EBBAOSF_message = (*(&A_VINDEX(UABAOSF_messages,VABAOSF_number)));
 /* line 270: */
FBBAOSF_text = (*(&((&EBBAOSF_message)->Text)));
 /* line 271: */
GBBAOSF_bind = 0;
HBBAOSF_tind = 0;
IBBAOSF_pno = 0;
 /* line 272: */
JBBAOSF_failed = A68_FALSE;
 /* line 274: */
A_CLOSURE( LBBAOSF_make_sysmsg, MBBAOSF_make_sysmsg, NBBAOSF_make_sysmsg );
(( NBBAOSF_make_sysmsg * ) ( LBBAOSF_make_sysmsg.nonlocals )) -> JBBAOSF_failed = (&JBBAOSF_failed);
(( NBBAOSF_make_sysmsg * ) ( LBBAOSF_make_sysmsg.nonlocals )) -> EBBAOSF_message = (&EBBAOSF_message);
(( NBBAOSF_make_sysmsg * ) ( LBBAOSF_make_sysmsg.nonlocals )) -> HABAOSF_fail = HABAOSF_fail;
 /* line 277: */
for ( ;; )
{ 
 /* line 278: */
PBBAOSF = ((HBBAOSF_tind+=1)<=FBBAOSF_text.upb);
if ( PBBAOSF )
{PBBAOSF = !JBBAOSF_failed;
}
if ( !(PBBAOSF) ) break;
 /* line 279: */
if ( (A_VINDEX(FBBAOSF_text,HBBAOSF_tind)=='*') )
{ 
 /* line 280: */
if ( ((IBBAOSF_pno+=1)>Params.upb) )
{ 
 /* line 281: */
A_CALLPROC(LBBAOSF_make_sysmsg,(RBBAOSF),(RBBAOSF,(LBBAOSF_make_sysmsg).nonlocals));
} 
else
{ 
SBBAOSF_p = A_VINDEX(Params,IBBAOSF_pno);
 /* line 282: */
 /* line 283: */
if ( ((GBBAOSF_bind+SBBAOSF_p.upb)>RYAAOSF_buf_size) )
{ 
 /* line 284: */
A_CALLPROC(LBBAOSF_make_sysmsg,(UBBAOSF),(UBBAOSF,(LBBAOSF_make_sysmsg).nonlocals));
} 
else
{ 
VBBAOSF_lwb = (GBBAOSF_bind+1);
 /* line 285: */
 /* line 286: */
 /* line 287: */
 /* line 288: */
XBBAOSF = A_VTRIM(WBBAOSF,(UYAAOSF_buffer),A_VTSCRIPT(&(WBBAOSF.upb),(UYAAOSF_buffer).upb,VBBAOSF_lwb,(GBBAOSF_bind+=SBBAOSF_p.upb))) ;
A_VASSIGN2(SBBAOSF_p,XBBAOSF,A68_CHAR );
} 
} 
} 
else
{ 
 /* line 289: */
if ( ((GBBAOSF_bind+=1)>RYAAOSF_buf_size) )
{ 
 /* line 290: */
A_CALLPROC(LBBAOSF_make_sysmsg,(ZBBAOSF),(ZBBAOSF,(LBBAOSF_make_sysmsg).nonlocals));
} 
else
{ 
 /* line 291: */
 /* line 292: */
ACBAOSF = (&A_VINDEX(UYAAOSF_buffer,GBBAOSF_bind)) ;
(*ACBAOSF) = A_VINDEX(FBBAOSF_text,HBBAOSF_tind);
} 
} 
}
 /* line 293: */
 /* line 294: */
 /* line 295: */
if ( JBBAOSF_failed )
{ 
XABAOSF = EBBAOSF_message;
} 
else
{ 
 /* line 296: */
if ( (IBBAOSF_pno<Params.upb) )
{ 
 /* line 297: */
A_CALLPROC(HABAOSF_fail,(CCBAOSF, &DCBAOSF),(CCBAOSF, &DCBAOSF,(HABAOSF_fail).nonlocals));
XABAOSF = DCBAOSF;
} 
else
{ 
ECBAOSF.Msgno = (*(&((&EBBAOSF_message)->Msgno)));
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 301: */
ECBAOSF.Text = A_VTRIM(FCBAOSF,(UYAAOSF_buffer),A_VTSCRIPT(&(FCBAOSF.upb),(UYAAOSF_buffer).upb,1,GBBAOSF_bind));
XABAOSF = ECBAOSF;
} 
} 
} 
} 
} 
else
{ 
 /* line 302: */
if ( (Params.upb==1) )
{ 
GCBAOSF.Msgno = Msgno;
 /* line 303: */
HCBAOSF = 1 ;
ICBAOSF.source = A_VINDEX(Params,HCBAOSF) ;
GCBAOSF.Text = (ICBAOSF.destination);
XABAOSF = GCBAOSF;
} 
else
{ 
 /* line 304: */
 /* line 305: */
 /* line 306: */
 /* line 309: */
A_CALLPROC(HABAOSF_fail,(KCBAOSF, &LCBAOSF),(KCBAOSF, &LCBAOSF,(HABAOSF_fail).nonlocals));
XABAOSF = LCBAOSF;
} 
} 
} 
A_PROC_EXIT(translate_msg);
*ReturnedValue = (XABAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void ZRAAOSF(void)   /* initialise DECS messageproc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","messageproc.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/strops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_31  LSAAOSF;  /* procedure value */
A68_52  USAAOSF;  /* procedure value */
A68_53  RTAAOSF;  /* procedure value */
A68_46  WTAAOSF;  /* collateral clause result */
A68_VC  EUAAOSF;  /* avoid structure result */
A68_47  FUAAOSF;  /* OPERATORS - nil -> mode */
A68_44  HUAAOSF;  /* collateral clause result */
A68_44  JUAAOSF;  /* collateral clause result */
A68_44  LUAAOSF;  /* collateral clause result */
A68_44  NUAAOSF;  /* collateral clause result */
A68_44  PUAAOSF;  /* collateral clause result */
A68_44  RUAAOSF;  /* collateral clause result */
A68_44  TUAAOSF;  /* collateral clause result */
A68_44  VUAAOSF;  /* collateral clause result */
A68_44  XUAAOSF;  /* collateral clause result */
A68_44  ZUAAOSF;  /* collateral clause result */
A68_44  BVAAOSF;  /* collateral clause result */
A68_44  DVAAOSF;  /* collateral clause result */
A68_44  FVAAOSF;  /* collateral clause result */
A68_44  HVAAOSF;  /* collateral clause result */
A68_45  XVAAOSF;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} AWAAOSF; 
A68_35  KWAAOSF;  /* avoid structure result */
A68_47  RWAAOSF;  /* avoid structure result */
A68_VC  SYAAOSF;  /* OPERATORS - istruct -> vector */
A68_73 * TYAAOSF;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCAAOSF();   /* USE strops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/liba68prel/messageproc.a68";
A_config.translation_time = "Sun Apr 18 20:07:49 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "YRAAOSF (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:49 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS messageproc);
UEAALIB_a68config(LGAALIB_configinfo, DSAAOSF);
 /* line 78: */
 /* line 83: */
LSAAOSF.fn.fn_global = ISAAOSF_generator;
LSAAOSF.nonlocals = A68_NIL;
ESAAOSF_anonymous = LSAAOSF;
USAAOSF.fn.fn_global = NSAAOSF_generator;
USAAOSF.nonlocals = A68_NIL;
FSAAOSF_anonymous = USAAOSF;
RTAAOSF.fn.fn_global = WSAAOSF_generator;
RTAAOSF.nonlocals = A68_NIL;
GSAAOSF_anonymous = RTAAOSF;
 /* line 97: */
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 105: */
 /* line 106: */
{ 
ZTAAOSF_s = YTAAOSF;
BUAAOSF_generator( A68_TRUE, &EUAAOSF );
A_VASSIGN2(ZTAAOSF_s,EUAAOSF,A68_CHAR ) ;
WTAAOSF.Name = EUAAOSF;
} 
WTAAOSF.Messages = A_VVAC(FUAAOSF);
GUAAOSF_nilmsg = WTAAOSF;
 /* line 142: */
 /* line 144: */
HUAAOSF.Number = 0;
HUAAOSF.Facility = (&GUAAOSF_nilmsg);
HUAAOSF.Class = 0X000U;
IUAAOSF_system = HUAAOSF;
 /* line 146: */
JUAAOSF.Number = 0;
JUAAOSF.Facility = (&GUAAOSF_nilmsg);
JUAAOSF.Class = 0X011U;
KUAAOSF_fatal = JUAAOSF;
 /* line 147: */
LUAAOSF.Number = 0;
LUAAOSF.Facility = (&GUAAOSF_nilmsg);
LUAAOSF.Class = 0X012U;
MUAAOSF_user = LUAAOSF;
 /* line 148: */
NUAAOSF.Number = 0;
NUAAOSF.Facility = (&GUAAOSF_nilmsg);
NUAAOSF.Class = 0X014U;
OUAAOSF_error = NUAAOSF;
 /* line 149: */
PUAAOSF.Number = 0;
PUAAOSF.Facility = (&GUAAOSF_nilmsg);
PUAAOSF.Class = 0X018U;
QUAAOSF_outerr = PUAAOSF;
 /* line 151: */
RUAAOSF.Number = 0;
RUAAOSF.Facility = (&GUAAOSF_nilmsg);
RUAAOSF.Class = 0X024U;
SUAAOSF_log = RUAAOSF;
 /* line 152: */
TUAAOSF.Number = 0;
TUAAOSF.Facility = (&GUAAOSF_nilmsg);
TUAAOSF.Class = 0X028U;
UUAAOSF_output = TUAAOSF;
 /* line 153: */
VUAAOSF.Number = 0;
VUAAOSF.Facility = (&GUAAOSF_nilmsg);
VUAAOSF.Class = 0X0a4U;
WUAAOSF_logpart = VUAAOSF;
 /* line 154: */
XUAAOSF.Number = 0;
XUAAOSF.Facility = (&GUAAOSF_nilmsg);
XUAAOSF.Class = 0X0a8U;
YUAAOSF_outpart = XUAAOSF;
 /* line 156: */
ZUAAOSF.Number = 0;
ZUAAOSF.Facility = (&GUAAOSF_nilmsg);
ZUAAOSF.Class = 0X042U;
AVAAOSF_diag0 = ZUAAOSF;
 /* line 157: */
BVAAOSF.Number = 0;
BVAAOSF.Facility = (&GUAAOSF_nilmsg);
BVAAOSF.Class = 0X044U;
CVAAOSF_diag1 = BVAAOSF;
 /* line 158: */
DVAAOSF.Number = 0;
DVAAOSF.Facility = (&GUAAOSF_nilmsg);
DVAAOSF.Class = 0X048U;
EVAAOSF_diag2 = DVAAOSF;
 /* line 159: */
FVAAOSF.Number = 0;
FVAAOSF.Facility = (&GUAAOSF_nilmsg);
FVAAOSF.Class = 0X064U;
GVAAOSF_diag3 = FVAAOSF;
 /* line 160: */
HVAAOSF.Number = 0;
HVAAOSF.Facility = (&GUAAOSF_nilmsg);
HVAAOSF.Class = 0X068U;
IVAAOSF_diag4 = HVAAOSF;
 /* line 162: */
JVAAOSF_system_class = IUAAOSF_system.Class;
 /* line 163: */
KVAAOSF_fatal_class = KUAAOSF_fatal.Class;
 /* line 164: */
LVAAOSF_user_class = MUAAOSF_user.Class;
 /* line 165: */
MVAAOSF_error_class = OUAAOSF_error.Class;
 /* line 166: */
NVAAOSF_outerr_class = QUAAOSF_outerr.Class;
 /* line 167: */
OVAAOSF_log_class = SUAAOSF_log.Class;
 /* line 168: */
PVAAOSF_output_class = UUAAOSF_output.Class;
 /* line 169: */
QVAAOSF_logpart_class = WUAAOSF_logpart.Class;
 /* line 170: */
RVAAOSF_outpart_class = YUAAOSF_outpart.Class;
 /* line 171: */
SVAAOSF_diag0_class = AVAAOSF_diag0.Class;
 /* line 172: */
TVAAOSF_diag1_class = CVAAOSF_diag1.Class;
 /* line 173: */
UVAAOSF_diag2_class = EVAAOSF_diag2.Class;
 /* line 174: */
VVAAOSF_diag3_class = GVAAOSF_diag3.Class;
 /* line 175: */
WVAAOSF_diag4_class = IVAAOSF_diag4.Class;
 /* line 177: */
XVAAOSF.Msgno.Number = (-1);
XVAAOSF.Msgno.Facility = (&GUAAOSF_nilmsg);
XVAAOSF.Msgno.Class = IUAAOSF_system.Class;
AWAAOSF.source = ZVAAOSF ;
XVAAOSF.Text = (AWAAOSF.destination);
BWAAOSF_unsetmsg = XVAAOSF;
 /* line 178: */
DWAAOSF_generator( A68_TRUE, &KWAAOSF );
LWAAOSF_nullmsg = KWAAOSF;
 /* line 179: */
NWAAOSF_generator( A68_TRUE, &RWAAOSF );
QWAAOSF_no_messages = RWAAOSF;
 /* line 180: */
SWAAOSF_diagnostic_level = 0;
 /* line 182: */
 /* line 187: */
 /* line 191: */
 /* line 194: */
 /* line 198: */
 /* line 201: */
 /* line 204: */
 /* line 207: */
 /* line 210: */
 /* line 213: */
 /* line 216: */
 /* line 218: */
 /* line 219: */
TYAAOSF = A_LOC(A68_73 ) ;
UYAAOSF_buffer = A_ISVEC(SYAAOSF,TYAAOSF,2048,A68_CHAR );
 /* line 222: */
 /* line 249: */
 /* line 253: */
 /* line 323: */
A_PROC_EXIT(DECS messageproc);
} 
#undef NL
/* end of translation of messageproc.a68 */
