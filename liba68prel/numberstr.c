/* UNAME:YTCAOSF */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t32,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(void),(void *));
typedef struct A68t33  A68_33 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t34,(struct A68t33 ),(struct A68t33 ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE33) VOID */

A_PROCEDURE(A68_VOID ,A68t35,(A68_VC ),(A68_VC ,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) VOID */

A_PROCEDURE(A68_VOID ,A68t37,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t37  A68_37 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 59 CHAR */
struct A68t39 { A68_INT mode; union {
A68_SINT  mode1;
A68_INT  mode2;
A68_LINT  mode3;
A68_REAL  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t39  A68_39 ;    /* UNION(SHORT INT,INT,LONG INT,REAL)  */

A_PROCEDURE(A68_INT ,A68t40,(A68_VC ),(A68_VC ,void *));
typedef struct A68t40  A68_40 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_INT ,A68t41,(A68_VC ,A68_VC ,A68_INT ,A68_LINT ),(A68_VC ,A68_VC ,A68_INT ,A68_LINT ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE26,MODE26,INT,LONG INT) INT */

A_PROCEDURE(A68_INT ,A68t42,(A68_VC ,A68_VC ,A68_INT ,A68_INT ,A68_REAL ),(A68_VC ,A68_VC ,A68_INT ,A68_INT ,A68_REAL ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(REF MODE26,MODE26,INT,INT,REAL) INT */

A_PROCEDURE(A68_VOID ,A68t43,(struct A68t39 ,A68_INT ,A68_VC *),(struct A68t39 ,A68_INT ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE39,INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,100,A68t44);
typedef struct A68t44  A68_44 ;    /* STRUCT 100 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t45);
typedef struct A68t45  A68_45 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t46);
typedef struct A68t46  A68_46 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_VOID ,A68t47,(struct A68t39 ,A68_INT ,A68_INT ,A68_VC *),(struct A68t39 ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE39,INT,INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,8,A68t48);
typedef struct A68t48  A68_48 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t39 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *),(struct A68t39 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE39,INT,INT,INT) REF MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
/* --- end of DECS initialisation functions --- */
static A68_38   CUCAOSF = {"$Id: numberstr.a68,v 1.1.1.1 2001-05-07 10:16:11 sian Exp $"}; 
A_GISVEC(A68_VC ,DUCAOSF,CUCAOSF,59)
static A68_31  EUCAOSF_anonymous;
#include <string.h>
#define STRLEN(s) A_int_INT(strlen(A_VC_charptr(s)))

#define KUCAOSF_leng STRLEN
#include <stdio.h>
#define SPRINTFW(s,f,p1,p2) \
   A_int_INT(sprintf( A_VC_charptr(s), A_VC_charptr(f), \
                      A_INT_int(p1), A_LINT_long(p2) ))

#define LUCAOSF_sprintfw SPRINTFW
#include <stdio.h>
#define SPRINTFF(s,f,p1,p2,p3) \
   A_int_INT(sprintf( A_VC_charptr(s), A_VC_charptr(f), \
                      A_INT_int(p1), A_INT_int(p2), (double)(p3) ))

#define MUCAOSF_sprintff SPRINTFF
static A68_45   BVCAOSF = {"%*lld\000"}; 
A_GISVEC(A68_VC ,CVCAOSF,BVCAOSF,6)
static A68_45   DVCAOSF = {"%*lld\000"}; 
A_GISVEC(A68_VC ,EVCAOSF,DVCAOSF,6)
static A68_46   FVCAOSF = {"%+*lld\000"}; 
A_GISVEC(A68_VC ,GVCAOSF,FVCAOSF,7)
static A68_46   GWCAOSF = {"%#*.*f\000"}; 
A_GISVEC(A68_VC ,HWCAOSF,GWCAOSF,7)
static A68_46   IWCAOSF = {"%#*.*f\000"}; 
A_GISVEC(A68_VC ,JWCAOSF,IWCAOSF,7)
static A68_48   KWCAOSF = {"%#+*.*f\000"}; 
A_GISVEC(A68_VC ,LWCAOSF,KWCAOSF,8)
static A68_48   MXCAOSF = {"%# *.*e\000"}; 
A_GISVEC(A68_VC ,NXCAOSF,MXCAOSF,8)
static A68_48   OXCAOSF = {"%# *.*e\000"}; 
A_GISVEC(A68_VC ,PXCAOSF,OXCAOSF,8)
static A68_48   QXCAOSF = {"%#+*.*e\000"}; 
A_GISVEC(A68_VC ,RXCAOSF,QXCAOSF,8)
typedef struct   /* env of non-global proc */
{
A68_INT  HVCAOSF_l;
A_PAD_INT(PAD_1)
} LVCAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  MWCAOSF_l;
A_PAD_INT(PAD_2)
} QWCAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  SXCAOSF_l;
A_PAD_INT(PAD_3)
} WXCAOSF_generator;

A_STATIC A68_VOID  GUCAOSF_generator(A68_BOOL  FUCAOSF_anonymous, A68_VC  *ReturnedValue);

A68_VOID  PUCAOSF_whole(A68_39  Number, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KVCAOSF_generator(A68_BOOL  IVCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  VVCAOSF_fixed(A68_39  Number, A68_INT  Width, A68_INT  Digits, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PWCAOSF_generator(A68_BOOL  NWCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  BXCAOSF_float(A68_39  Number, A68_INT  Width, A68_INT  Digits, A68_INT  Expdigits, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VXCAOSF_generator(A68_BOOL  TXCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KVCAOSF_generator(A68_BOOL  IVCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LVCAOSF_generator *)NonLocals)->x)
{ 
A68_VC  MVCAOSF;  /* clause result */
A68_VC  NVCAOSF;  /* OPERATORS - dynamic generator */
{ 
NVCAOSF.upb = NL(HVCAOSF_l) ;
( IVCAOSF_anonymous? A_VLOC(A68_CHAR ,NVCAOSF): A_VHEAP(A68_CHAR ,NVCAOSF) );
MVCAOSF = NVCAOSF;
} 
*ReturnedValue = (MVCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  PWCAOSF_generator(A68_BOOL  NWCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QWCAOSF_generator *)NonLocals)->x)
{ 
A68_VC  RWCAOSF;  /* clause result */
A68_VC  SWCAOSF;  /* OPERATORS - dynamic generator */
{ 
SWCAOSF.upb = NL(MWCAOSF_l) ;
( NWCAOSF_anonymous? A_VLOC(A68_CHAR ,SWCAOSF): A_VHEAP(A68_CHAR ,SWCAOSF) );
RWCAOSF = SWCAOSF;
} 
*ReturnedValue = (RWCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VXCAOSF_generator(A68_BOOL  TXCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WXCAOSF_generator *)NonLocals)->x)
{ 
A68_VC  XXCAOSF;  /* clause result */
A68_VC  YXCAOSF;  /* OPERATORS - dynamic generator */
{ 
YXCAOSF.upb = NL(SXCAOSF_l) ;
( TXCAOSF_anonymous? A_VLOC(A68_CHAR ,YXCAOSF): A_VHEAP(A68_CHAR ,YXCAOSF) );
XXCAOSF = YXCAOSF;
} 
*ReturnedValue = (XXCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  GUCAOSF_generator(A68_BOOL  FUCAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  HUCAOSF;  /* clause result */
A68_VC  IUCAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 87: */
IUCAOSF.upb = 0 ;
( FUCAOSF_anonymous? A_VLOC(A68_CHAR ,IUCAOSF): A_VHEAP(A68_CHAR ,IUCAOSF) );
HUCAOSF = IUCAOSF;
} 
*ReturnedValue = (HUCAOSF);
return;
} 
#undef NL

A68_VOID  PUCAOSF_whole(A68_39  Number, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_39  QUCAOSF;  /* united object - for case conformity */
A68_SINT  RUCAOSF_s;
A68_LINT  SUCAOSF;  /* clause result */
A68_INT  TUCAOSF_i;
A68_LINT  UUCAOSF_l;
A68_REAL  VUCAOSF_r;
double WUCAOSF;/*ADICOPS - ROUND*/
A68_LINT  XUCAOSF_value;
A68_44  YUCAOSF_stackbuff;
A68_VC  ZUCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  AVCAOSF_buffer;
A68_INT  HVCAOSF_l;
A68_31  JVCAOSF_generator;   /* proc value of non-global proc */
A68_VC  OVCAOSF;  /* clause result */
A68_VC  PVCAOSF;  /* avoid structure result */
A68_VC  QVCAOSF;  /* OPERATORS - trim index */
A68_VC  RVCAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(whole);
 /* line 108: */
 /* line 109: */
{ 
 /* line 110: */
QUCAOSF = Number ;
switch ( QUCAOSF.mode )
{ 
case 1: /* SHORT INT */
RUCAOSF_s = (QUCAOSF.data.mode1);
 /* line 111: */
SUCAOSF = (A68_LINT )(A68_INT )RUCAOSF_s;
break;
case 2: /* INT */
TUCAOSF_i = (QUCAOSF.data.mode2);
 /* line 112: */
SUCAOSF = (A68_LINT )TUCAOSF_i;
break;
case 3: /* LONG INT */
UUCAOSF_l = (QUCAOSF.data.mode3);
 /* line 113: */
SUCAOSF = UUCAOSF_l;
break;
case 4: /* REAL */
VUCAOSF_r = (QUCAOSF.data.mode4);
 /* line 114: */
SUCAOSF = (A68_LINT )A_ROUND(WUCAOSF,VUCAOSF_r,(A68_INT ));
break;
default: 
A_IMP_SKIP ;
break;
} 
XUCAOSF_value = SUCAOSF;
 /* line 115: */
 /* line 116: */
AVCAOSF_buffer = A_ISVEC(ZUCAOSF,(&YUCAOSF_stackbuff),100,A68_CHAR );
 /* line 117: */
if ( (Width==0) )
{ 
 /* line 118: */
LUCAOSF_sprintfw(AVCAOSF_buffer, CVCAOSF, 1, XUCAOSF_value);
} 
else
{ 
if ( (Width<0) )
{ 
 /* line 119: */
LUCAOSF_sprintfw(AVCAOSF_buffer, EVCAOSF, (-Width), XUCAOSF_value);
} 
else
{ 
 /* line 120: */
LUCAOSF_sprintfw(AVCAOSF_buffer, GVCAOSF, Width, XUCAOSF_value);
} 
} 
 /* line 121: */
HVCAOSF_l = KUCAOSF_leng(AVCAOSF_buffer);
 /* line 122: */
A_CLOSURE( JVCAOSF_generator, KVCAOSF_generator, LVCAOSF_generator );
(( LVCAOSF_generator * ) ( JVCAOSF_generator.nonlocals )) -> HVCAOSF_l = HVCAOSF_l;
 /* line 123: */
A_CALLPROC(JVCAOSF_generator,(A68_FALSE, &PVCAOSF),(A68_FALSE, &PVCAOSF,(JVCAOSF_generator).nonlocals));
RVCAOSF = A_VTRIM(QVCAOSF,(AVCAOSF_buffer),A_VTSCRIPT(&(QVCAOSF.upb),(AVCAOSF_buffer).upb,1,HVCAOSF_l)) ;
A_VASSIGN2(RVCAOSF,PVCAOSF,A68_CHAR ) ;
OVCAOSF = PVCAOSF;
} 
A_PROC_EXIT(whole);
*ReturnedValue = (OVCAOSF);
return;
} 
#undef NL

A68_VOID  VVCAOSF_fixed(A68_39  Number, A68_INT  Width, A68_INT  Digits, A68_VC  *ReturnedValue)
{ 
A68_39  WVCAOSF;  /* united object - for case conformity */
A68_SINT  XVCAOSF_s;
A68_REAL  YVCAOSF;  /* clause result */
A68_INT  ZVCAOSF_i;
A68_LINT  AWCAOSF_l;
A68_REAL  BWCAOSF_r;
A68_REAL  CWCAOSF_value;
A68_44  DWCAOSF_stackbuff;
A68_VC  EWCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  FWCAOSF_buffer;
A68_INT  MWCAOSF_l;
A68_31  OWCAOSF_generator;   /* proc value of non-global proc */
A68_VC  TWCAOSF;  /* clause result */
A68_VC  UWCAOSF;  /* avoid structure result */
A68_VC  VWCAOSF;  /* OPERATORS - trim index */
A68_VC  WWCAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(fixed);
 /* line 127: */
 /* line 128: */
{ 
 /* line 129: */
WVCAOSF = Number ;
switch ( WVCAOSF.mode )
{ 
case 1: /* SHORT INT */
XVCAOSF_s = (WVCAOSF.data.mode1);
 /* line 130: */
YVCAOSF = (A68_REAL )(A68_INT )XVCAOSF_s;
break;
case 2: /* INT */
ZVCAOSF_i = (WVCAOSF.data.mode2);
 /* line 131: */
YVCAOSF = (A68_REAL )ZVCAOSF_i;
break;
case 3: /* LONG INT */
AWCAOSF_l = (WVCAOSF.data.mode3);
 /* line 132: */
YVCAOSF = (A68_REAL )((A68_LREAL )AWCAOSF_l);
break;
case 4: /* REAL */
BWCAOSF_r = (WVCAOSF.data.mode4);
 /* line 133: */
YVCAOSF = BWCAOSF_r;
break;
default: 
A_IMP_SKIP ;
break;
} 
CWCAOSF_value = YVCAOSF;
 /* line 134: */
 /* line 135: */
FWCAOSF_buffer = A_ISVEC(EWCAOSF,(&DWCAOSF_stackbuff),100,A68_CHAR );
 /* line 136: */
if ( (Width==0) )
{ 
 /* line 137: */
MUCAOSF_sprintff(FWCAOSF_buffer, HWCAOSF, 1, Digits, CWCAOSF_value);
} 
else
{ 
if ( (Width<0) )
{ 
 /* line 138: */
MUCAOSF_sprintff(FWCAOSF_buffer, JWCAOSF, (-Width), Digits, CWCAOSF_value);
} 
else
{ 
 /* line 139: */
MUCAOSF_sprintff(FWCAOSF_buffer, LWCAOSF, Width, Digits, CWCAOSF_value);
} 
} 
 /* line 140: */
MWCAOSF_l = KUCAOSF_leng(FWCAOSF_buffer);
 /* line 141: */
A_CLOSURE( OWCAOSF_generator, PWCAOSF_generator, QWCAOSF_generator );
(( QWCAOSF_generator * ) ( OWCAOSF_generator.nonlocals )) -> MWCAOSF_l = MWCAOSF_l;
 /* line 142: */
A_CALLPROC(OWCAOSF_generator,(A68_FALSE, &UWCAOSF),(A68_FALSE, &UWCAOSF,(OWCAOSF_generator).nonlocals));
WWCAOSF = A_VTRIM(VWCAOSF,(FWCAOSF_buffer),A_VTSCRIPT(&(VWCAOSF.upb),(FWCAOSF_buffer).upb,1,MWCAOSF_l)) ;
A_VASSIGN2(WWCAOSF,UWCAOSF,A68_CHAR ) ;
TWCAOSF = UWCAOSF;
} 
A_PROC_EXIT(fixed);
*ReturnedValue = (TWCAOSF);
return;
} 
#undef NL

A68_VOID  BXCAOSF_float(A68_39  Number, A68_INT  Width, A68_INT  Digits, A68_INT  Expdigits, A68_VC  *ReturnedValue)
{ 
A68_39  CXCAOSF;  /* united object - for case conformity */
A68_SINT  DXCAOSF_s;
A68_REAL  EXCAOSF;  /* clause result */
A68_INT  FXCAOSF_i;
A68_LINT  GXCAOSF_l;
A68_REAL  HXCAOSF_r;
A68_REAL  IXCAOSF_value;
A68_44  JXCAOSF_stackbuff;
A68_VC  KXCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  LXCAOSF_buffer;
A68_INT  SXCAOSF_l;
A68_31  UXCAOSF_generator;   /* proc value of non-global proc */
A68_VC  ZXCAOSF;  /* clause result */
A68_VC  AYCAOSF;  /* avoid structure result */
A68_VC  BYCAOSF;  /* OPERATORS - trim index */
A68_VC  CYCAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(float);
 /* line 146: */
 /* line 151: */
{ 
 /* line 152: */
CXCAOSF = Number ;
switch ( CXCAOSF.mode )
{ 
case 1: /* SHORT INT */
DXCAOSF_s = (CXCAOSF.data.mode1);
 /* line 153: */
EXCAOSF = (A68_REAL )(A68_INT )DXCAOSF_s;
break;
case 2: /* INT */
FXCAOSF_i = (CXCAOSF.data.mode2);
 /* line 154: */
EXCAOSF = (A68_REAL )FXCAOSF_i;
break;
case 3: /* LONG INT */
GXCAOSF_l = (CXCAOSF.data.mode3);
 /* line 155: */
EXCAOSF = (A68_REAL )((A68_LREAL )GXCAOSF_l);
break;
case 4: /* REAL */
HXCAOSF_r = (CXCAOSF.data.mode4);
 /* line 156: */
EXCAOSF = HXCAOSF_r;
break;
default: 
A_IMP_SKIP ;
break;
} 
IXCAOSF_value = EXCAOSF;
 /* line 157: */
 /* line 158: */
LXCAOSF_buffer = A_ISVEC(KXCAOSF,(&JXCAOSF_stackbuff),100,A68_CHAR );
 /* line 159: */
if ( (Width==0) )
{ 
 /* line 160: */
MUCAOSF_sprintff(LXCAOSF_buffer, NXCAOSF, 1, Digits, IXCAOSF_value);
} 
else
{ 
if ( (Width<0) )
{ 
 /* line 161: */
MUCAOSF_sprintff(LXCAOSF_buffer, PXCAOSF, (-Width), Digits, IXCAOSF_value);
} 
else
{ 
 /* line 162: */
MUCAOSF_sprintff(LXCAOSF_buffer, RXCAOSF, Width, Digits, IXCAOSF_value);
} 
} 
 /* line 163: */
SXCAOSF_l = KUCAOSF_leng(LXCAOSF_buffer);
 /* line 164: */
A_CLOSURE( UXCAOSF_generator, VXCAOSF_generator, WXCAOSF_generator );
(( WXCAOSF_generator * ) ( UXCAOSF_generator.nonlocals )) -> SXCAOSF_l = SXCAOSF_l;
 /* line 165: */
 /* line 168: */
A_CALLPROC(UXCAOSF_generator,(A68_FALSE, &AYCAOSF),(A68_FALSE, &AYCAOSF,(UXCAOSF_generator).nonlocals));
CYCAOSF = A_VTRIM(BYCAOSF,(LXCAOSF_buffer),A_VTSCRIPT(&(BYCAOSF.upb),(LXCAOSF_buffer).upb,1,SXCAOSF_l)) ;
A_VASSIGN2(CYCAOSF,AYCAOSF,A68_CHAR ) ;
ZXCAOSF = AYCAOSF;
} 
A_PROC_EXIT(float);
*ReturnedValue = (ZXCAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void ZTCAOSF(void)   /* initialise DECS numberstr */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","numberstr.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_31  JUCAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/numberstr.a68";
A_config.translation_time = "Mon May  3 00:36:16 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "YTCAOSF (from seed file) ";
A_config.spec_change_time = "Mon May  3 00:36:16 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS numberstr);
UEAALIB_a68config(LGAALIB_configinfo, DUCAOSF);
 /* line 86: */
JUCAOSF.fn.fn_global = GUCAOSF_generator;
JUCAOSF.nonlocals = A68_NIL;
EUCAOSF_anonymous = JUCAOSF;
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 98: */
 /* line 100: */
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 107: */
 /* line 126: */
 /* line 145: */
 /* line 169: */
A_PROC_EXIT(DECS numberstr);
} 
#undef NL
/* end of translation of numberstr.a68 */
