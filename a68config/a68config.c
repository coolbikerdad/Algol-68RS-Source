/* UNAME:AAAALIB */
#include <algol68/Asupport.h>
A_ISTRUCT(A68_CHAR ,59,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 59 CHAR */
struct A68t32{
A68_VC  Data;
struct A68t32 * Rest;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(REF MODE26,REF MODE32)  */

A_PROCEDURE(A68_VOID ,A68t33,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t35,(void),(void *));
typedef struct A68t35  A68_35 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) VOID */
A_ISTRUCT(A68_CHAR ,227,A68t37);
typedef struct A68t37  A68_37 ;    /* STRUCT 227 CHAR */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ),(A68_VC ,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t39,(struct A68t38 ),(struct A68t38 ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE38) VOID */
A_ISTRUCT(A68_CHAR ,52,A68t40);
typedef struct A68t40  A68_40 ;    /* STRUCT 52 CHAR */
A_VECTOR(A68_VC ,A68t41);
typedef struct A68t41  A68_41 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t41 ,A68_VC *),(struct A68t41 ,A68_VC *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE41) REF MODE26 */
struct A68t43{
A68_CHAR * File;
A68_CHAR * Time;
A68_CHAR * Version;
A68_CHAR * Seed;
};
typedef struct A68t43  A68_43 ;    /* STRUCT(REF CHAR,REF CHAR,REF CHAR,REF CHAR)  */

A_PROCEDURE(A68_VOID ,A68t44,(A68_VC ,struct A68t43 *),(A68_VC ,struct A68t43 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE26,REF MODE43) VOID */

A_PROCEDURE(A68_VOID ,A68t45,(A68_CHAR *,A68_VC *),(A68_CHAR *,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF CHAR) MODE26 */

A_PROCEDURE(A68_INT ,A68t46,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(REF CHAR) INT */
A_ISTRUCT(A68_CHAR ,1000,A68t47);
typedef struct A68t47  A68_47 ;    /* STRUCT 1000 CHAR */

A_PROCEDURE(struct A68t47 *,A68t48,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF CHAR) REF MODE47 */

A_PROCEDURE(A68_VOID ,A68t49,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE26) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t50);
typedef struct A68t50  A68_50 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_VC ,6,A68t51);
typedef struct A68t51  A68_51 ;    /* STRUCT 6 MODE26 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_VC ,A68_VC ,A68_VC *),(A68_VC ,A68_VC ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE26,MODE26) REF MODE26 */
A_ISTRUCT(A68_CHAR ,2,A68t53);
typedef struct A68t53  A68_53 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_VC ,7,A68t54);
typedef struct A68t54  A68_54 ;    /* STRUCT 7 MODE26 */
A_ISTRUCT(A68_VC ,3,A68t55);
typedef struct A68t55  A68_55 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t56,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t57);
typedef struct A68t57  A68_57 ;    /* STRUCT 4 CHAR */
static A68_31   EAAALIB = {"$Id: a68config.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,FAAALIB,EAAALIB,59)
static A68_VC  GAAALIB_cfs;
A68_33  HAAALIB_anonymous;
A68_34  XAAALIB_makervc;
#define BBAALIB_nilconfigdata (A68_32 *)A68_NIL
static A68_37   DBAALIB = {"Start of the ALGOL68 RS Module chain - where a Module has been compiled using \"Ctrans\" the final three fields are the Ctrans version number, the seed for the unique name prefix for ALGOL68 identifiers and the translation date.\012"}; 
A_GISVEC(A68_VC ,EBAALIB,DBAALIB,227)
static A68_32  GBAALIB_configdata;
static A68_32 ** HBAALIB_tail;
static A68_38  KBAALIB_show_proc;
static A68_40   OBAALIB = {"Initialisation sequence - configuration information:"}; 
A_GISVEC(A68_VC ,PBAALIB,OBAALIB,52)
#include <string.h>
#define STRLEN(cp) (A68_INT)(strlen((char *) cp))

#define PCAALIB_strlen STRLEN
static A68_50   ZCAALIB = {"Ctrans_"}; 
A_GISVEC(A68_VC ,BDAALIB,ZCAALIB,7)
static A68_53   ZDAALIB = {"  "}; 
A_GISVEC(A68_VC ,AEAALIB,ZDAALIB,2)
static A68_53   OEAALIB = {"  "}; 
A_GISVEC(A68_VC ,PEAALIB,OEAALIB,2)
static A68_57   XEAALIB = {"$Id:"}; 
A_GISVEC(A68_VC ,ZEAALIB,XEAALIB,4)
static A68_57   LFAALIB = {"RSRE"}; 
A_GISVEC(A68_VC ,NFAALIB,LFAALIB,4)
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* configinfo without ACONFIG */

#define MGAALIB_a_configinfo A_configinfo
#define OGAALIB_configinfo MGAALIB_a_configinfo
typedef struct   /* env of non-global proc */
{
A68_VC  S;
} SAAALIB_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * SBAALIB_l;
} ZBAALIB_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  VEAALIB_top;
A_PAD_INT(PAD_1)
} DFAALIB_generator;

A_STATIC A68_VOID  JAAALIB_generator(A68_BOOL  IAAALIB_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  OAAALIB_anonymous(A68_VC  S, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RAAALIB_generator(A68_BOOL  PAAALIB_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  ABAALIB_a68init(A68_35  Init_proc);

A_STATIC A68_VOID  JBAALIB_anonymous(A68_VC  S);

A68_VOID  NBAALIB_showa68config(A68_38  Show);

A_STATIC A68_VOID  RBAALIB_concat(A68_41  Strs, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YBAALIB_generator(A68_BOOL  WBAALIB_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MCAALIB_(A68_VC  Config, A68_43 * Td);

A_STATIC A68_VOID  OCAALIB_tostr(A68_CHAR * Cp, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XCAALIB_version(A68_VC  V, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FDAALIB_time(A68_VC  T, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RDAALIB_seed(A68_VC  S, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WDAALIB_trans_config(A68_VC  C, A68_VC  S, A68_VC  *ReturnedValue);

A68_VOID  UEAALIB_a68config(A68_VC  C, A68_VC  S);

A_STATIC A68_VOID  CFAALIB_generator(A68_BOOL  AFAALIB_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JGAALIB_show_a68config(A68_38  Show);

A_STATIC A68_VOID  NGAALIB_init(void);

A_STATIC A68_VOID  RAAALIB_generator(A68_BOOL  PAAALIB_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SAAALIB_generator *)NonLocals)->x)
{ 
A68_VC  TAAALIB;  /* clause result */
A68_VC  UAAALIB;  /* OPERATORS - dynamic generator */
{ 
UAAALIB.upb = NL(S).upb ;
( PAAALIB_anonymous? A_VLOC(A68_CHAR ,UAAALIB): A_VHEAP(A68_CHAR ,UAAALIB) );
TAAALIB = UAAALIB;
} 
*ReturnedValue = (TAAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  YBAALIB_generator(A68_BOOL  WBAALIB_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZBAALIB_generator *)NonLocals)->x)
{ 
A68_VC  ACAALIB;  /* clause result */
A68_VC  BCAALIB;  /* OPERATORS - dynamic generator */
{ 
BCAALIB.upb = (*NL(SBAALIB_l)) ;
( WBAALIB_anonymous? A_VLOC(A68_CHAR ,BCAALIB): A_VHEAP(A68_CHAR ,BCAALIB) );
ACAALIB = BCAALIB;
} 
*ReturnedValue = (ACAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  CFAALIB_generator(A68_BOOL  AFAALIB_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DFAALIB_generator *)NonLocals)->x)
{ 
A68_VC  EFAALIB;  /* clause result */
A68_VC  FFAALIB;  /* OPERATORS - dynamic generator */
{ 
FFAALIB.upb = NL(VEAALIB_top) ;
( AFAALIB_anonymous? A_VLOC(A68_CHAR ,FFAALIB): A_VHEAP(A68_CHAR ,FFAALIB) );
EFAALIB = FFAALIB;
} 
*ReturnedValue = (EFAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  JAAALIB_generator(A68_BOOL  IAAALIB_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  KAAALIB;  /* clause result */
A68_VC  LAAALIB;  /* OPERATORS - dynamic generator */
{ 
 /* line 58: */
LAAALIB.upb = 0 ;
( IAAALIB_anonymous? A_VLOC(A68_CHAR ,LAAALIB): A_VHEAP(A68_CHAR ,LAAALIB) );
KAAALIB = LAAALIB;
} 
*ReturnedValue = (KAAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  OAAALIB_anonymous(A68_VC  S, A68_VC  *ReturnedValue)
{ 
A68_33  QAAALIB_generator;   /* proc value of non-global proc */
A68_VC  VAAALIB;  /* clause result */
A68_VC  WAAALIB;  /* avoid structure result */
A_CLOSURE( QAAALIB_generator, RAAALIB_generator, SAAALIB_generator );
(( SAAALIB_generator * ) ( QAAALIB_generator.nonlocals )) -> S = S;
A_CALLPROC(QAAALIB_generator,(A68_FALSE, &WAAALIB),(A68_FALSE, &WAAALIB,(QAAALIB_generator).nonlocals));
A_VASSIGN2(S,WAAALIB,A68_CHAR ) ;
VAAALIB = WAAALIB;
*ReturnedValue = (VAAALIB);
return;
} 
#undef NL

A68_VOID  ABAALIB_a68init(A68_35  Init_proc)
{ 
A_PROC_ENTRY(a68init);
A_CALLPROC(Init_proc,(),((Init_proc).nonlocals));
A_PROC_EXIT(a68init);
return;
} 
#undef NL

A_STATIC A68_VOID  JBAALIB_anonymous(A68_VC  S)
{ 
/*SKIP*/;
return;
} 
#undef NL

A68_VOID  NBAALIB_showa68config(A68_38  Show)
{ 
A_PROC_ENTRY(showa68config);
 /* line 83: */
 /* line 87: */
{ 
KBAALIB_show_proc = Show;
 /* line 88: */
 /* line 89: */
A_CALLPROC(KBAALIB_show_proc,(PBAALIB),(PBAALIB,(KBAALIB_show_proc).nonlocals));
} 
A_PROC_EXIT(showa68config);
return;
} 
#undef NL

A_STATIC A68_VOID  RBAALIB_concat(A68_41  Strs, A68_VC  *ReturnedValue)
{ 
A68_INT  SBAALIB_l;
A68_VC  TBAALIB_st;
A68_VC * UBAALIB;  /* forall control - []x */
A68_INT  VBAALIB;  /* forall loop counter */
A68_33  XBAALIB_generator;   /* proc value of non-global proc */
A68_VC  CCAALIB;  /* avoid structure result */
A68_VC  DCAALIB_ans;
A68_VC  ECAALIB_str;
A68_VC * FCAALIB;  /* forall control - []x */
A68_INT  GCAALIB;  /* forall loop counter */
A68_VC  HCAALIB;  /* OPERATORS - trim index */
A68_VC  ICAALIB;  /* YIELD */
A68_VC  JCAALIB;  /* clause result */
A_PROC_ENTRY(concat);
 /* line 92: */
 /* line 94: */
{ 
SBAALIB_l = 0;
 /* line 95: */
 /* line 96: */
VBAALIB = Strs.upb -1;
UBAALIB = Strs.data;
for (;VBAALIB-- >= 0;
(UBAALIB++
) )
{
TBAALIB_st = *UBAALIB;
SBAALIB_l+=TBAALIB_st.upb;
}
 /* line 97: */
A_CLOSURE( XBAALIB_generator, YBAALIB_generator, ZBAALIB_generator );
(( ZBAALIB_generator * ) ( XBAALIB_generator.nonlocals )) -> SBAALIB_l = (&SBAALIB_l);
A_CALLPROC(XBAALIB_generator,(A68_FALSE, &CCAALIB),(A68_FALSE, &CCAALIB,(XBAALIB_generator).nonlocals));
DCAALIB_ans = CCAALIB;
 /* line 98: */
SBAALIB_l = 0;
 /* line 99: */
 /* line 100: */
GCAALIB = Strs.upb -1;
FCAALIB = Strs.data;
for (;GCAALIB-- >= 0;
(FCAALIB++
) )
{
ECAALIB_str = *FCAALIB;
ICAALIB = A_VTRIM(HCAALIB,(DCAALIB_ans),A_VTSCRIPT(&(HCAALIB.upb),(DCAALIB_ans).upb,(SBAALIB_l+1),(SBAALIB_l+ECAALIB_str.upb))) ;
A_VASSIGN2(ECAALIB_str,ICAALIB,A68_CHAR );
 /* line 101: */
 /* line 102: */
SBAALIB_l+=ECAALIB_str.upb;
}
 /* line 103: */
 /* line 104: */
JCAALIB = DCAALIB_ans;
} 
A_PROC_EXIT(concat);
*ReturnedValue = (JCAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  MCAALIB_(A68_VC  Config, A68_43 * Td)
{ 
A_PROC_ENTRY(>>>);
 /* line 113: */
 /* line 114: */
 /* line 115: */
 /* line 116: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
#define config Config
#define td Td
{A_CONFIG_INFO *A_config = (A_CONFIG_INFO*)(config.data);
td->File = (A68_CHAR*)(A_config->source_file);
td->Time = (A68_CHAR*)(A_config->translation_time);
td->Version = (A68_CHAR*)(A_config->ctrans_version);
td->Seed = (A68_CHAR*)(A_config->name_seed);
}
#undef td
#undef config
A_PROC_EXIT(>>>);
return;
} 
#undef NL

A_STATIC A68_VOID  OCAALIB_tostr(A68_CHAR * Cp, A68_VC  *ReturnedValue)
{ 
A68_VC  QCAALIB;  /* clause result */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_47 *  destination;
} RCAALIB; 
A68_VC  SCAALIB;  /* OPERATORS - istruct -> vector */
A68_47 * TCAALIB;  /* OPERATORS - istruct -> vector */
A68_VC  UCAALIB;  /* OPERATORS - trim index */
A68_VC  VCAALIB;  /* OPERATORS - trim index */
A_PROC_ENTRY(tostr);
 /* line 123: */
 /* line 125: */
{ 
 /* line 126: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
RCAALIB.source = Cp ;
TCAALIB = (RCAALIB.destination) ;
UCAALIB = A_ISVEC(SCAALIB,TCAALIB,1000,A68_CHAR ) ;
QCAALIB = A_VTRIM(VCAALIB,(UCAALIB),A_VTSCRIPT(&(VCAALIB.upb),(UCAALIB).upb,1,PCAALIB_strlen(Cp)));
} 
A_PROC_EXIT(tostr);
*ReturnedValue = (QCAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  XCAALIB_version(A68_VC  V, A68_VC  *ReturnedValue)
{ 
A68_BOOL  YCAALIB;  /* optbool result */
A68_VC  ADAALIB;  /* OPERATORS - trim index */
A68_VC  CDAALIB;  /* clause result */
A68_VC  DDAALIB;  /* OPERATORS - trim index */
A_PROC_ENTRY(version);
 /* line 133: */
YCAALIB = (V.upb>7);
if ( YCAALIB )
{YCAALIB = A_VC_EQ(A_VTRIM(ADAALIB,(V),A_VTSCRIPT(&(ADAALIB.upb),(V).upb,1,7)),BDAALIB);
}
if ( YCAALIB )
{ 
CDAALIB = A_VTRIM(DDAALIB,(V),A_VTSCRIPT(&(DDAALIB.upb),(V).upb,8,(V).upb));
} 
else
{ 
CDAALIB = V;
} 
A_PROC_EXIT(version);
*ReturnedValue = (CDAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  FDAALIB_time(A68_VC  T, A68_VC  *ReturnedValue)
{ 
A68_51  GDAALIB;  /* collateral clause result */
A68_VC  HDAALIB;  /* OPERATORS - trim index */
A68_VC  IDAALIB;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JDAALIB;  /* OPERATORS - trim index */
A68_VC  KDAALIB;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LDAALIB;  /* OPERATORS - trim index */
A68_VC  MDAALIB;  /* OPERATORS - trim index */
A68_VC  NDAALIB;  /* clause result */
A68_41  ODAALIB;  /* OPERATORS - istruct -> vector */
A68_VC  PDAALIB;  /* avoid structure result */
A_PROC_ENTRY(time);
 /* line 136: */
 /* line 137: */
if ( (T.upb==24) )
{ 
GDAALIB.data[0] = A_VTRIM(HDAALIB,(T),A_VTSCRIPT(&(HDAALIB.upb),(T).upb,9,10));
GDAALIB.data[1] = A_HVEC(IDAALIB,'-',A68_CHAR );
GDAALIB.data[2] = A_VTRIM(JDAALIB,(T),A_VTSCRIPT(&(JDAALIB.upb),(T).upb,5,7));
GDAALIB.data[3] = A_HVEC(KDAALIB,'-',A68_CHAR );
GDAALIB.data[4] = A_VTRIM(LDAALIB,(T),A_VTSCRIPT(&(LDAALIB.upb),(T).upb,21,24));
GDAALIB.data[5] = A_VTRIM(MDAALIB,(T),A_VTSCRIPT(&(MDAALIB.upb),(T).upb,11,16));
 /* line 138: */
 /* line 139: */
RBAALIB_concat( A_HISVEC(ODAALIB,GDAALIB,6,A68_VC ), &PDAALIB );
NDAALIB = PDAALIB;
} 
else
{ 
NDAALIB = T;
} 
A_PROC_EXIT(time);
*ReturnedValue = (NDAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  RDAALIB_seed(A68_VC  S, A68_VC  *ReturnedValue)
{ 
A68_VC  SDAALIB;  /* clause result */
A68_VC  TDAALIB;  /* OPERATORS - trim index */
A_PROC_ENTRY(seed);
 /* line 142: */
 /* line 143: */
if ( (S.upb>7) )
{ 
 /* line 144: */
 /* line 145: */
SDAALIB = A_VTRIM(TDAALIB,(S),A_VTSCRIPT(&(TDAALIB.upb),(S).upb,1,7));
} 
else
{ 
SDAALIB = S;
} 
A_PROC_EXIT(seed);
*ReturnedValue = (SDAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  WDAALIB_trans_config(A68_VC  C, A68_VC  S, A68_VC  *ReturnedValue)
{ 
A68_43  XDAALIB_td;
A68_54  YDAALIB;  /* collateral clause result */
A68_VC  BEAALIB;  /* avoid structure result */
A68_VC  CEAALIB;  /* avoid structure result */
A68_VC  DEAALIB;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EEAALIB;  /* avoid structure result */
A68_VC  FEAALIB;  /* avoid structure result */
A68_VC  GEAALIB;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HEAALIB;  /* avoid structure result */
A68_VC  IEAALIB;  /* avoid structure result */
A68_VC  JEAALIB;  /* clause result */
A68_41  KEAALIB;  /* OPERATORS - istruct -> vector */
A68_VC  LEAALIB;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} MEAALIB; 
A68_55  NEAALIB;  /* collateral clause result */
A68_41  QEAALIB;  /* OPERATORS - istruct -> vector */
A68_VC  REAALIB;  /* avoid structure result */
A_PROC_ENTRY(trans_config);
 /* line 148: */
 /* line 149: */
if ( (C.upb==(-777)) )
{ 
 /* line 150: */
MCAALIB_(C, (&XDAALIB_td));
 /* line 151: */
YDAALIB.data[0] = S;
YDAALIB.data[1] = AEAALIB;
OCAALIB_tostr( (*(&((&XDAALIB_td)->Version))), &BEAALIB );
XCAALIB_version( BEAALIB, &CEAALIB );
YDAALIB.data[2] = CEAALIB;
 /* line 152: */
YDAALIB.data[3] = A_HVEC(DEAALIB,' ',A68_CHAR );
OCAALIB_tostr( (*(&((&XDAALIB_td)->Seed))), &EEAALIB );
RDAALIB_seed( EEAALIB, &FEAALIB );
YDAALIB.data[4] = FEAALIB;
YDAALIB.data[5] = A_HVEC(GEAALIB,' ',A68_CHAR );
OCAALIB_tostr( (*(&((&XDAALIB_td)->Time))), &HEAALIB );
FDAALIB_time( HEAALIB, &IEAALIB );
YDAALIB.data[6] = IEAALIB;
 /* line 153: */
RBAALIB_concat( A_HISVEC(KEAALIB,YDAALIB,7,A68_VC ), &LEAALIB );
JEAALIB = LEAALIB;
} 
else
{ 
 /* line 154: */
 /* line 155: */
if ( (C.upb==0) )
{ 
MEAALIB.source = S ;
JEAALIB = (MEAALIB.destination);
} 
else
{ 
NEAALIB.data[0] = S;
NEAALIB.data[1] = PEAALIB;
NEAALIB.data[2] = C;
 /* line 156: */
RBAALIB_concat( A_HISVEC(QEAALIB,NEAALIB,3,A68_VC ), &REAALIB );
JEAALIB = REAALIB;
} 
} 
A_PROC_EXIT(trans_config);
*ReturnedValue = (JEAALIB);
return;
} 
#undef NL

A68_VOID  UEAALIB_a68config(A68_VC  C, A68_VC  S)
{ 
A68_INT  VEAALIB_top;
A68_BOOL  WEAALIB;  /* optbool result */
A68_VC  YEAALIB;  /* OPERATORS - trim index */
A68_33  BFAALIB_generator;   /* proc value of non-global proc */
A68_VC  HFAALIB;  /* avoid structure result */
A68_VC  GFAALIB_ns;
A68_INT  IFAALIB_p1;
A68_INT  JFAALIB_p2;
A68_CHAR  KFAALIB_ch;
A68_VC  MFAALIB;  /* OPERATORS - trim index */
A68_VC  OFAALIB;  /* YIELD */
A68_VC  PFAALIB;  /* OPERATORS - assign op */
A68_BOOL  QFAALIB;  /* optbool result */
A68_INT  RFAALIB;  /* YIELD */
A68_BOOL  SFAALIB;  /* optbool result */
A68_INT  TFAALIB;  /* YIELD */
A68_INT  UFAALIB;  /* loop control */
A68_INT  VFAALIB;  /* YIELD */
A68_CHAR * WFAALIB;  /* YIELD */
A68_BOOL  XFAALIB;  /* optbool result */
A68_INT  YFAALIB;  /* YIELD */
A68_BOOL  ZFAALIB;  /* clause result */
A68_BOOL  AGAALIB;  /* clause result */
A68_VC  BGAALIB;  /* clause result */
A68_VC  CGAALIB;  /* OPERATORS - trim index */
A68_VC  DGAALIB;  /* avoid structure result */
A68_VC  EGAALIB;  /* avoid structure result */
A68_VC  FGAALIB_str;
A68_32  GGAALIB;  /* collateral clause result */
A68_32 * HGAALIB;  /* YIELD */
A_PROC_ENTRY(a68config);
 /* line 164: */
 /* line 168: */
{ 
VEAALIB_top = S.upb;
 /* line 169: */
WEAALIB = (VEAALIB_top>4);
if ( WEAALIB )
{ /* line 170: */
WEAALIB = A_VC_EQ(A_VTRIM(YEAALIB,(S),A_VTSCRIPT(&(YEAALIB.upb),(S).upb,1,4)),ZEAALIB);
}
if ( WEAALIB )
{ 
A_CLOSURE( BFAALIB_generator, CFAALIB_generator, DFAALIB_generator );
(( DFAALIB_generator * ) ( BFAALIB_generator.nonlocals )) -> VEAALIB_top = VEAALIB_top;
A_CALLPROC(BFAALIB_generator,(A68_TRUE, &HFAALIB),(A68_TRUE, &HFAALIB,(BFAALIB_generator).nonlocals));
GFAALIB_ns = HFAALIB;
A_VASSIGN2(S,GFAALIB_ns,A68_CHAR );
 /* line 171: */
IFAALIB_p1 = 4;
JFAALIB_p2 = 4;
 /* line 172: */
 /* line 173: */
OFAALIB = A_VTRIM(MFAALIB,(GFAALIB_ns),A_VTSCRIPT(&(MFAALIB.upb),(GFAALIB_ns).upb,1,4)) ;
PFAALIB = NFAALIB ;
A_VASSIGN2(PFAALIB,OFAALIB,A68_CHAR );
 /* line 175: */
for ( ;; )
{ 
QFAALIB = (JFAALIB_p2<VEAALIB_top);
if ( QFAALIB )
{RFAALIB = JFAALIB_p2+=1 ;
QFAALIB = (A_VINDEX(S,RFAALIB)!='.');
}
if ( !(QFAALIB) ) break;
/*SKIP*/;
}
 /* line 176: */
IFAALIB_p1 = (JFAALIB_p2-1);
 /* line 177: */
for ( ;; )
{ 
SFAALIB = (JFAALIB_p2<VEAALIB_top);
if ( SFAALIB )
{TFAALIB = JFAALIB_p2+=1 ;
SFAALIB = (A_VINDEX(S,TFAALIB)!=' ');
}
if ( !(SFAALIB) ) break;
/*SKIP*/;
}
 /* line 178: */
KFAALIB_ch = ' ';
 /* line 179: */
 /* line 180: */
for ( UFAALIB = 1;
UFAALIB <= 2;
UFAALIB += 1 )
{ 
 /* line 181: */
for ( ;; )
{ 
{ 
VFAALIB = IFAALIB_p1+=1 ;
WFAALIB = (&A_VINDEX(GFAALIB_ns,VFAALIB)) ;
(*WFAALIB) = KFAALIB_ch;
 /* line 182: */
XFAALIB = (JFAALIB_p2<VEAALIB_top);
if ( XFAALIB )
{YFAALIB = JFAALIB_p2+=1 ;
XFAALIB = ((KFAALIB_ch = A_VINDEX(S,YFAALIB))!=':');
}
 /* line 183: */
ZFAALIB = XFAALIB;
} 
AGAALIB = ZFAALIB;
if ( !AGAALIB ) break;
/*SKIP*/;
}
 /* line 184: */
}
 /* line 185: */
 /* line 186: */
WDAALIB_trans_config( C, A_VTRIM(CGAALIB,(GFAALIB_ns),A_VTSCRIPT(&(CGAALIB.upb),(GFAALIB_ns).upb,1,IFAALIB_p1)), &DGAALIB );
BGAALIB = DGAALIB;
} 
else
{ 
 /* line 187: */
WDAALIB_trans_config( C, S, &EGAALIB );
BGAALIB = EGAALIB;
} 
FGAALIB_str = BGAALIB;
 /* line 188: */
 /* line 189: */
GGAALIB.Data = FGAALIB_str;
GGAALIB.Rest = BBAALIB_nilconfigdata;
HGAALIB = A_HEAP(A68_32 ) ;
(*HGAALIB) = GGAALIB ;
HBAALIB_tail = (&(((*HBAALIB_tail) = HGAALIB)->Rest));
 /* line 190: */
 /* line 191: */
A_CALLPROC(KBAALIB_show_proc,(FGAALIB_str),(FGAALIB_str,(KBAALIB_show_proc).nonlocals));
} 
A_PROC_EXIT(a68config);
return;
} 
#undef NL

A68_VOID  JGAALIB_show_a68config(A68_38  Show)
{ 
A68_32 * KGAALIB_ptr;
A_PROC_ENTRY(show_a68config);
 /* line 194: */
 /* line 196: */
{ 
KGAALIB_ptr = (&GBAALIB_configdata);
 /* line 197: */
for ( ;; )
{ 
 /* line 198: */
if ( !((KGAALIB_ptr!=BBAALIB_nilconfigdata)) ) break;
A_CALLPROC(Show,((*(&(KGAALIB_ptr->Data)))),((*(&(KGAALIB_ptr->Data))),(Show).nonlocals));
KGAALIB_ptr = (*(&(KGAALIB_ptr->Rest)));
}
 /* line 199: */
} 
A_PROC_EXIT(show_a68config);
return;
} 
#undef NL

A_STATIC A68_VOID  NGAALIB_init(void)
{ 
A_PROC_ENTRY(init);
{ 
 /* line 235: */
UEAALIB_a68config(OGAALIB_configinfo, GAAALIB_cfs);
 /* line 236: */
 /* line 237: */
/*SKIP*/;
} 
A_PROC_EXIT(init);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void BAAALIB(void)   /* initialise DECS a68config */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir",".","a68config.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_33  MAAALIB;  /* procedure value */
A68_34  YAAALIB;  /* procedure value */
A68_32  CBAALIB;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} FBAALIB; 
A68_38  LBAALIB;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.a68";
A_config.translation_time = "Wed May  5 17:38:58 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "AAAALIB (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:58 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS a68config);
GAAALIB_cfs = FAAALIB;
 /* line 56: */
MAAALIB.fn.fn_global = JAAALIB_generator;
MAAALIB.nonlocals = A68_NIL;
HAAALIB_anonymous = MAAALIB;
 /* line 63: */
 /* line 64: */
YAAALIB.fn.fn_global = OAAALIB_anonymous;
YAAALIB.nonlocals = A68_NIL;
XAAALIB_makervc = (YAAALIB);
 /* line 69: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 75: */
 /* line 76: */
 /* line 77: */
FBAALIB.source = EBAALIB ;
CBAALIB.Data = (FBAALIB.destination);
CBAALIB.Rest = BBAALIB_nilconfigdata;
GBAALIB_configdata = CBAALIB;
 /* line 78: */
HBAALIB_tail = (&((&GBAALIB_configdata)->Rest));
 /* line 79: */
LBAALIB.fn.fn_global = JBAALIB_anonymous;
LBAALIB.nonlocals = A68_NIL;
KBAALIB_show_proc = (LBAALIB);
 /* line 82: */
 /* line 91: */
 /* line 109: */
 /* line 110: */
 /* line 112: */
 /* line 122: */
 /* line 132: */
 /* line 135: */
 /* line 141: */
 /* line 147: */
 /* line 163: */
 /* line 193: */
 /* line 209: */
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
 /* line 222: */
 /* line 228: */
 /* line 229: */
 /* line 230: */
 /* line 243: */
 /* line 245: */
 /* line 246: */
 /* line 249: */
#define init NGAALIB_init
{ACONFIG;       /* Invoke the macro to setup A_configinfo */
init();
}
#undef init
 /* line 252: */
A_PROC_EXIT(DECS a68config);
} 
#undef NL
/* end of translation of a68config.a68 */
