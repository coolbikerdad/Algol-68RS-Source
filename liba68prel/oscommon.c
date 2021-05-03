/* UNAME:IFAAOSF */
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
A_ISTRUCT(A68_CHAR ,58,A68t42);
typedef struct A68t42  A68_42 ;    /* STRUCT 58 CHAR */
struct A68t43{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t43  A68_43 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t44,(A68_VC ,struct A68t43 *),(A68_VC ,struct A68t43 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE26) MODE43 */

A_PROCEDURE(A68_VOID ,A68t45,(A68_VC ,A68_VC ,struct A68t43 *),(A68_VC ,A68_VC ,struct A68t43 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE26,REF MODE26) MODE43 */
A_ISTRUCT(A68_VC ,3,A68t46);
typedef struct A68t46  A68_46 ;    /* STRUCT 3 MODE26 */
A_VECTOR(A68_VC ,A68t47);
typedef struct A68t47  A68_47 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t48,(A68_VC ,A68_VC ,struct A68t47 *),(A68_VC ,A68_VC ,struct A68t47 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE26,REF MODE26) REF MODE47 */
struct A68t49{
A68_VC  Arg;
struct A68t49 * Next;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(REF MODE26,REF MODE49)  */
A_ISTRUCT(A68_CHAR ,1000,A68t50);
typedef struct A68t50  A68_50 ;    /* STRUCT 1000 CHAR */

A_PROCEDURE(A68_CHAR *,A68t51,(void),(void *));
typedef struct A68t51  A68_51 ;    /* PROC REF CHAR */

A_PROCEDURE(A68_VOID ,A68t52,(A68_VC *),(A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t53,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_VOID ,A68t54,(A68_BOOL ,struct A68t47 *),(A68_BOOL ,struct A68t47 *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(BOOL) MODE47 */

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
static A68_42   MFAAOSF = {"$Id: oscommon.a68,v 1.1.1.1 2001-05-07 10:16:12 sian Exp $"}; 
A_GISVEC(A68_VC ,NFAAOSF,MFAAOSF,58)
static A68_31  OFAAOSF_anonymous;
static A68_VC  UFAAOSF_nullstr;
A68_43  XFAAOSF_nullfilename;
#define CGAAOSF_typec '.'
#define DGAAOSF_dirc '/'
static A68_INT  NHAAOSF_diff;
#define XIAAOSF_space 1
#define YIAAOSF_quoted_arg 2
#define ZIAAOSF_unquoted_arg 3
typedef struct   /* env of non-global proc */
{
A68_INT * YHAAOSF_windex;
A68_VC * VHAAOSF_buffer;
} BIAAOSF_write_char;
typedef struct   /* env of non-global proc */
{
A68_INT * YHAAOSF_windex;
A68_VC * VHAAOSF_buffer;
} PIAAOSF_get_arg;
typedef struct   /* env of non-global proc */
{
A68_INT * UHAAOSF_no_args;
} VJAAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_VC * VHAAOSF_buffer;
} FIAAOSF_generator;

A_STATIC A68_VOID  QFAAOSF_generator(A68_BOOL  PFAAOSF_anonymous, A68_VC  *ReturnedValue);

A68_VOID  ZFAAOSF_parse_basic(A68_VC  Name, A68_43  *ReturnedValue);

A68_VOID  WGAAOSF_parse_default(A68_VC  Name, A68_VC  Default, A68_43  *ReturnedValue);

A68_VOID  QHAAOSF_parse_prompt(A68_VC  First_arg, A68_VC  Argstring, A68_47  *ReturnedValue);

A_STATIC A68_CHAR * AIAAOSF_write_char(void *NonLocals);

A_STATIC A68_VOID  EIAAOSF_generator(A68_BOOL  CIAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OIAAOSF_get_arg(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_CHAR  VIAAOSF_lower(A68_CHAR  C);

A_STATIC A68_VOID  UJAAOSF_generator(A68_BOOL  SJAAOSF_anonymous, A68_47  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EIAAOSF_generator(A68_BOOL  CIAAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FIAAOSF_generator *)NonLocals)->x)
{ 
A68_VC  GIAAOSF;  /* clause result */
A68_VC  HIAAOSF;  /* OPERATORS - dynamic generator */
{ 
HIAAOSF.upb = ((*NL(VHAAOSF_buffer)).upb+1000) ;
( CIAAOSF_anonymous? A_VLOC(A68_CHAR ,HIAAOSF): A_VHEAP(A68_CHAR ,HIAAOSF) );
GIAAOSF = HIAAOSF;
} 
*ReturnedValue = (GIAAOSF);
return;
} 
#undef NL

A_STATIC A68_CHAR * AIAAOSF_write_char(void *NonLocals)
#define NL(x) (((BIAAOSF_write_char *)NonLocals)->x)
{ 
A68_31  DIAAOSF_generator;   /* proc value of non-global proc */
A68_VC  IIAAOSF;  /* avoid structure result */
A68_VC  JIAAOSF_new;
A68_VC  KIAAOSF;  /* OPERATORS - trim index */
A68_VC  LIAAOSF;  /* YIELD */
A68_CHAR * MIAAOSF;  /* clause result */
A_PROC_ENTRY(write_char);
{ 
 /* line 140: */
if ( (((*NL(YHAAOSF_windex))+=1)>(*NL(VHAAOSF_buffer)).upb) )
{ 
A_CLOSURE( DIAAOSF_generator, EIAAOSF_generator, FIAAOSF_generator );
(( FIAAOSF_generator * ) ( DIAAOSF_generator.nonlocals )) -> VHAAOSF_buffer = NL(VHAAOSF_buffer);
A_CALLPROC(DIAAOSF_generator,(A68_FALSE, &IIAAOSF),(A68_FALSE, &IIAAOSF,(DIAAOSF_generator).nonlocals));
JIAAOSF_new = IIAAOSF;
 /* line 141: */
LIAAOSF = A_VTRIM(KIAAOSF,(JIAAOSF_new),A_VTSCRIPT(&(KIAAOSF.upb),(JIAAOSF_new).upb,1,(*NL(VHAAOSF_buffer)).upb)) ;
A_VASSIGN2((*NL(VHAAOSF_buffer)),LIAAOSF,A68_CHAR );
 /* line 142: */
 /* line 143: */
(*NL(VHAAOSF_buffer)) = JIAAOSF_new;
} 
 /* line 144: */
 /* line 145: */
MIAAOSF = (&A_VINDEX((*NL(VHAAOSF_buffer)),(*NL(YHAAOSF_windex))));
} 
A_PROC_EXIT(write_char);
return( MIAAOSF );
} 
#undef NL

A_STATIC A68_VOID  OIAAOSF_get_arg(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PIAAOSF_get_arg *)NonLocals)->x)
{ 
A68_INT  QIAAOSF_end;
A68_VC  RIAAOSF;  /* clause result */
A68_VC  SIAAOSF;  /* OPERATORS - trim index */
A68_VC  TIAAOSF;  /* avoid structure result */
A_PROC_ENTRY(get_arg);
{ 
QIAAOSF_end = (*NL(YHAAOSF_windex));
 /* line 150: */
(*NL(YHAAOSF_windex)) = 0;
 /* line 151: */
 /* line 152: */
ZCAAOSF_makervc( A_VTRIM(SIAAOSF,((*NL(VHAAOSF_buffer))),A_VTSCRIPT(&(SIAAOSF.upb),((*NL(VHAAOSF_buffer))).upb,1,QIAAOSF_end)), &TIAAOSF );
RIAAOSF = TIAAOSF;
} 
A_PROC_EXIT(get_arg);
*ReturnedValue = (RIAAOSF);
return;
} 
#undef NL

A_STATIC A68_CHAR  VIAAOSF_lower(A68_CHAR  C)
{ 
A68_CHAR  WIAAOSF;  /* clause result */
A_PROC_ENTRY(lower);
WIAAOSF = C;
A_PROC_EXIT(lower);
return( WIAAOSF );
} 
#undef NL

A_STATIC A68_VOID  UJAAOSF_generator(A68_BOOL  SJAAOSF_anonymous, A68_47  *ReturnedValue, void *NonLocals)
#define NL(x) (((VJAAOSF_generator *)NonLocals)->x)
{ 
A68_47  WJAAOSF;  /* clause result */
A68_47  XJAAOSF;  /* OPERATORS - dynamic generator */
{ 
XJAAOSF.upb = ((*NL(UHAAOSF_no_args))+1) ;
( SJAAOSF_anonymous? A_VLOC(A68_VC ,XJAAOSF): A_VHEAP(A68_VC ,XJAAOSF) );
WJAAOSF = XJAAOSF;
} 
*ReturnedValue = (WJAAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  QFAAOSF_generator(A68_BOOL  PFAAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  RFAAOSF;  /* clause result */
A68_VC  SFAAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 56: */
SFAAOSF.upb = 0 ;
( PFAAOSF_anonymous? A_VLOC(A68_CHAR ,SFAAOSF): A_VHEAP(A68_CHAR ,SFAAOSF) );
RFAAOSF = SFAAOSF;
} 
*ReturnedValue = (RFAAOSF);
return;
} 
#undef NL

A68_VOID  ZFAAOSF_parse_basic(A68_VC  Name, A68_43  *ReturnedValue)
{ 
A68_43  AGAAOSF;  /* collateral clause result */
A68_43  BGAAOSF_ans;
A68_INT  EGAAOSF_typepos;
A68_INT  FGAAOSF_dirpos;
A68_INT  GGAAOSF_typemax;
A68_INT  HGAAOSF_i;
A68_INT  IGAAOSF;  /* by part of loop */
A68_CHAR  JGAAOSF_c;
A68_BOOL  KGAAOSF;  /* optbool result */
A68_VC  LGAAOSF;  /* OPERATORS - trim index */
A68_VC * MGAAOSF;  /* YIELD */
A68_VC  NGAAOSF;  /* OPERATORS - trim index */
A68_VC * OGAAOSF;  /* YIELD */
A68_VC  PGAAOSF;  /* OPERATORS - trim index */
A68_VC * QGAAOSF;  /* YIELD */
A68_VC  RGAAOSF;  /* OPERATORS - trim index */
A68_VC * SGAAOSF;  /* YIELD */
A68_43  TGAAOSF;  /* clause result */
A_PROC_ENTRY(parse_basic);
 /* line 62: */
 /* line 64: */
{ 
AGAAOSF.Filename = Name;
AGAAOSF.Directory = UFAAOSF_nullstr;
AGAAOSF.Name = UFAAOSF_nullstr;
AGAAOSF.Type = UFAAOSF_nullstr;
BGAAOSF_ans = AGAAOSF;
 /* line 66: */
 /* line 68: */
EGAAOSF_typepos = (-1);
FGAAOSF_dirpos = (-1);
GGAAOSF_typemax = Name.upb;
 /* line 69: */
IGAAOSF = (-1);
for ( HGAAOSF_i = Name.upb;
( IGAAOSF > 0 && HGAAOSF_i <= 1) ||
( IGAAOSF < 0 && HGAAOSF_i >= 1) ||
( IGAAOSF == 0 ) ;
HGAAOSF_i += IGAAOSF )
{ 
 /* line 70: */
if ( !((FGAAOSF_dirpos<0)) ) break;
JGAAOSF_c = (*(&A_VINDEX(Name,HGAAOSF_i)));
 /* line 71: */
KGAAOSF = (FGAAOSF_dirpos<0);
if ( KGAAOSF )
{ /* line 72: */
KGAAOSF = (JGAAOSF_c==CGAAOSF_typec);
}
if ( KGAAOSF )
{ 
 /* line 73: */
EGAAOSF_typepos = HGAAOSF_i;
} 
else
{ 
 /* line 75: */
if ( (JGAAOSF_c==DGAAOSF_dirc) )
{ 
 /* line 79: */
 /* line 80: */
FGAAOSF_dirpos = HGAAOSF_i;
} 
} 
}
 /* line 81: */
 /* line 82: */
if ( (EGAAOSF_typepos>0) )
{ 
 /* line 83: */
MGAAOSF = (&((&BGAAOSF_ans)->Type)) ;
(*MGAAOSF) = A_VTRIM(LGAAOSF,(Name),A_VTSCRIPT(&(LGAAOSF.upb),(Name).upb,EGAAOSF_typepos,GGAAOSF_typemax));
} 
else
{ 
 /* line 84: */
EGAAOSF_typepos = (Name.upb+1);
} 
 /* line 85: */
 /* line 86: */
if ( (FGAAOSF_dirpos>0) )
{ 
OGAAOSF = (&((&BGAAOSF_ans)->Directory)) ;
(*OGAAOSF) = A_VTRIM(NGAAOSF,(Name),A_VTSCRIPT(&(NGAAOSF.upb),(Name).upb,1,FGAAOSF_dirpos));
 /* line 87: */
 /* line 88: */
QGAAOSF = (&((&BGAAOSF_ans)->Name)) ;
(*QGAAOSF) = A_VTRIM(PGAAOSF,(Name),A_VTSCRIPT(&(PGAAOSF.upb),(Name).upb,(FGAAOSF_dirpos+1),(EGAAOSF_typepos-1)));
} 
else
{ 
 /* line 89: */
SGAAOSF = (&((&BGAAOSF_ans)->Name)) ;
(*SGAAOSF) = A_VTRIM(RGAAOSF,(Name),A_VTSCRIPT(&(RGAAOSF.upb),(Name).upb,1,(EGAAOSF_typepos-1)));
} 
 /* line 90: */
 /* line 91: */
TGAAOSF = BGAAOSF_ans;
} 
A_PROC_EXIT(parse_basic);
*ReturnedValue = (TGAAOSF);
return;
} 
#undef NL

A68_VOID  WGAAOSF_parse_default(A68_VC  Name, A68_VC  Default, A68_43  *ReturnedValue)
{ 
A68_43  YGAAOSF;  /* avoid structure result */
A68_43  XGAAOSF_ans;
A68_43  ZGAAOSF;  /* avoid structure result */
A68_43  AHAAOSF_def;
A68_BOOL  BHAAOSF_changed;
A68_BOOL  CHAAOSF;  /* optbool result */
A68_VC * DHAAOSF;  /* YIELD */
A68_BOOL  EHAAOSF;  /* optbool result */
A68_VC * FHAAOSF;  /* YIELD */
A68_BOOL  GHAAOSF;  /* optbool result */
A68_VC * HHAAOSF;  /* YIELD */
A68_46  IHAAOSF;  /* collateral clause result */
A68_35  JHAAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  KHAAOSF;  /* avoid structure result */
A68_VC * LHAAOSF;  /* YIELD */
A68_43  MHAAOSF;  /* clause result */
A_PROC_ENTRY(parse_default);
 /* line 95: */
 /* line 96: */
{ 
ZFAAOSF_parse_basic( Name, &YGAAOSF );
XGAAOSF_ans = YGAAOSF;
 /* line 97: */
ZFAAOSF_parse_basic( Default, &ZGAAOSF );
AHAAOSF_def = ZGAAOSF;
 /* line 98: */
BHAAOSF_changed = A68_FALSE;
 /* line 99: */
CHAAOSF = ((*(&((&XGAAOSF_ans)->Directory))).upb==0);
if ( CHAAOSF )
{ /* line 100: */
CHAAOSF = (AHAAOSF_def.Directory.upb>0);
}
if ( CHAAOSF )
{ 
BHAAOSF_changed = A68_TRUE;
 /* line 101: */
DHAAOSF = (&((&XGAAOSF_ans)->Directory)) ;
(*DHAAOSF) = AHAAOSF_def.Directory;
} 
 /* line 102: */
EHAAOSF = ((*(&((&XGAAOSF_ans)->Name))).upb==0);
if ( EHAAOSF )
{ /* line 103: */
EHAAOSF = (AHAAOSF_def.Name.upb>0);
}
if ( EHAAOSF )
{ 
BHAAOSF_changed = A68_TRUE;
 /* line 104: */
FHAAOSF = (&((&XGAAOSF_ans)->Name)) ;
(*FHAAOSF) = AHAAOSF_def.Name;
} 
 /* line 105: */
GHAAOSF = ((*(&((&XGAAOSF_ans)->Type))).upb==0);
if ( GHAAOSF )
{ /* line 106: */
GHAAOSF = (AHAAOSF_def.Type.upb>0);
}
if ( GHAAOSF )
{ 
BHAAOSF_changed = A68_TRUE;
 /* line 107: */
HHAAOSF = (&((&XGAAOSF_ans)->Type)) ;
(*HHAAOSF) = AHAAOSF_def.Type;
} 
 /* line 108: */
 /* line 109: */
if ( BHAAOSF_changed )
{ 
IHAAOSF.data[0] = (*(&((&XGAAOSF_ans)->Directory)));
IHAAOSF.data[1] = (*(&((&XGAAOSF_ans)->Name)));
IHAAOSF.data[2] = (*(&((&XGAAOSF_ans)->Type)));
 /* line 110: */
JDAAOSF_concat( A_HISVEC(JHAAOSF,IHAAOSF,3,A68_VC ), &KHAAOSF );
LHAAOSF = (&((&XGAAOSF_ans)->Filename)) ;
(*LHAAOSF) = KHAAOSF;
} 
 /* line 111: */
 /* line 112: */
MHAAOSF = XGAAOSF_ans;
} 
A_PROC_EXIT(parse_default);
*ReturnedValue = (MHAAOSF);
return;
} 
#undef NL

A68_VOID  QHAAOSF_parse_prompt(A68_VC  First_arg, A68_VC  Argstring, A68_47  *ReturnedValue)
{ 
A68_49 * SHAAOSF_arglist;
A68_49 ** THAAOSF_tail;
A68_INT  UHAAOSF_no_args;
A68_VC  WHAAOSF;  /* OPERATORS - istruct -> vector */
A68_50 * XHAAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  VHAAOSF_buffer;
A68_INT  YHAAOSF_windex;
A68_51  ZHAAOSF_write_char;   /* proc value of non-global proc */
A68_52  NIAAOSF_get_arg;   /* proc value of non-global proc */
A68_INT  AJAAOSF_state;
A68_CHAR  BJAAOSF_quote_to_match;
A68_INT  CJAAOSF_startpos;
A68_INT  DJAAOSF_i;
A68_INT  EJAAOSF_i;
A68_INT  FJAAOSF;  /* to part of loop */
A68_CHAR  GJAAOSF_c;
A68_BOOL  HJAAOSF;  /* optbool result */
A68_CHAR * IJAAOSF;  /* YIELD */
A68_CHAR * JJAAOSF;  /* YIELD */
A68_BOOL  KJAAOSF;  /* optbool result */
A68_49  LJAAOSF;  /* collateral clause result */
A68_VC  MJAAOSF;  /* avoid structure result */
A68_49 * NJAAOSF;  /* YIELD */
A68_CHAR * OJAAOSF;  /* YIELD */
A68_49  PJAAOSF;  /* collateral clause result */
A68_VC  QJAAOSF;  /* avoid structure result */
A68_49 * RJAAOSF;  /* YIELD */
A68_54  TJAAOSF_generator;   /* proc value of non-global proc */
A68_47  YJAAOSF;  /* avoid structure result */
A68_47  ZJAAOSF_new_args;
A68_INT  AKAAOSF;  /* YIELD */
A68_VC * BKAAOSF;  /* YIELD */
A68_49 * CKAAOSF_this_arg;
A68_VC * DKAAOSF_v;
A68_47  EKAAOSF;  /* OPERATORS - trim index */
A68_47  FKAAOSF;  /* forall yield */
A68_INT  GKAAOSF;  /* forall loop counter */
A68_47  HKAAOSF;  /* clause result */
A_PROC_ENTRY(parse_prompt);
 /* line 121: */
 /* line 128: */
{ 
 /* line 129: */
 /* line 130: */
THAAOSF_tail = (&SHAAOSF_arglist);
 /* line 131: */
UHAAOSF_no_args = 0;
 /* line 134: */
XHAAOSF = A_LOC(A68_50 ) ;
VHAAOSF_buffer = A_ISVEC(WHAAOSF,XHAAOSF,1000,A68_CHAR );
 /* line 135: */
YHAAOSF_windex = 0;
 /* line 137: */
 /* line 138: */
 /* line 139: */
A_CLOSURE( ZHAAOSF_write_char, AIAAOSF_write_char, BIAAOSF_write_char );
(( BIAAOSF_write_char * ) ( ZHAAOSF_write_char.nonlocals )) -> YHAAOSF_windex = (&YHAAOSF_windex);
(( BIAAOSF_write_char * ) ( ZHAAOSF_write_char.nonlocals )) -> VHAAOSF_buffer = (&VHAAOSF_buffer);
 /* line 147: */
 /* line 148: */
 /* line 149: */
A_CLOSURE( NIAAOSF_get_arg, OIAAOSF_get_arg, PIAAOSF_get_arg );
(( PIAAOSF_get_arg * ) ( NIAAOSF_get_arg.nonlocals )) -> YHAAOSF_windex = (&YHAAOSF_windex);
(( PIAAOSF_get_arg * ) ( NIAAOSF_get_arg.nonlocals )) -> VHAAOSF_buffer = (&VHAAOSF_buffer);
 /* line 154: */
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 164: */
 /* line 165: */
AJAAOSF_state = XIAAOSF_space;
 /* line 166: */
 /* line 167: */
 /* line 168: */
DJAAOSF_i = 0;
 /* line 170: */
 /* line 171: */
FJAAOSF = Argstring.upb;
for ( EJAAOSF_i = 1;
EJAAOSF_i <= FJAAOSF;
EJAAOSF_i += 1 )
{ 
GJAAOSF_c = (*(&A_VINDEX(Argstring,EJAAOSF_i)));
 /* line 172: */
 /* line 174: */
switch ( AJAAOSF_state )
{ 
case 1: 
HJAAOSF = (GJAAOSF_c=='\'');
if ( ! HJAAOSF )
{HJAAOSF = (GJAAOSF_c=='`');
}
if ( ! HJAAOSF )
{ /* line 175: */
HJAAOSF = (GJAAOSF_c=='\"');
}
if ( HJAAOSF )
{ 
BJAAOSF_quote_to_match = GJAAOSF_c;
 /* line 176: */
AJAAOSF_state = YIAAOSF_quoted_arg;
} 
else
{ 
 /* line 177: */
if ( (GJAAOSF_c!=' ') )
{ 
AJAAOSF_state = ZIAAOSF_unquoted_arg;
 /* line 178: */
 /* line 181: */
IJAAOSF = A_CALLPROC(ZHAAOSF_write_char,(),((ZHAAOSF_write_char).nonlocals)) ;
(*IJAAOSF) = VIAAOSF_lower(GJAAOSF_c);
} 
} 
break;
case 2: 
 /* line 182: */
if ( (GJAAOSF_c==BJAAOSF_quote_to_match) )
{ 
 /* line 183: */
AJAAOSF_state = ZIAAOSF_unquoted_arg;
} 
else
{ 
 /* line 184: */
 /* line 187: */
JJAAOSF = A_CALLPROC(ZHAAOSF_write_char,(),((ZHAAOSF_write_char).nonlocals)) ;
(*JJAAOSF) = GJAAOSF_c;
} 
break;
case 3: 
KJAAOSF = (GJAAOSF_c=='\'');
if ( ! KJAAOSF )
{KJAAOSF = (GJAAOSF_c=='`');
}
if ( ! KJAAOSF )
{ /* line 188: */
KJAAOSF = (GJAAOSF_c=='\"');
}
if ( KJAAOSF )
{ 
 /* line 189: */
AJAAOSF_state = YIAAOSF_quoted_arg;
} 
else
{ 
 /* line 190: */
if ( (GJAAOSF_c==' ') )
{ 
AJAAOSF_state = XIAAOSF_space;
 /* line 191: */
UHAAOSF_no_args+=1;
 /* line 192: */
A_CALLPROC(NIAAOSF_get_arg,( &MJAAOSF),( &MJAAOSF,(NIAAOSF_get_arg).nonlocals));
LJAAOSF.Arg = MJAAOSF;
LJAAOSF.Next = (A68_49 *)A68_NIL;
NJAAOSF = A_HEAP(A68_49 ) ;
(*NJAAOSF) = LJAAOSF ;
(*THAAOSF_tail) = NJAAOSF;
 /* line 193: */
 /* line 194: */
THAAOSF_tail = (&((*THAAOSF_tail)->Next));
} 
else
{ 
 /* line 195: */
 /* line 196: */
 /* line 197: */
OJAAOSF = A_CALLPROC(ZHAAOSF_write_char,(),((ZHAAOSF_write_char).nonlocals)) ;
(*OJAAOSF) = VIAAOSF_lower(GJAAOSF_c);
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 204: */
 /* line 205: */
if ( (AJAAOSF_state!=XIAAOSF_space) )
{ 
UHAAOSF_no_args+=1;
 /* line 206: */
A_CALLPROC(NIAAOSF_get_arg,( &QJAAOSF),( &QJAAOSF,(NIAAOSF_get_arg).nonlocals));
PJAAOSF.Arg = QJAAOSF;
 /* line 207: */
PJAAOSF.Next = (A68_49 *)A68_NIL;
RJAAOSF = A_HEAP(A68_49 ) ;
(*RJAAOSF) = PJAAOSF ;
(*THAAOSF_tail) = RJAAOSF;
} 
 /* line 209: */
A_CLOSURE( TJAAOSF_generator, UJAAOSF_generator, VJAAOSF_generator );
(( VJAAOSF_generator * ) ( TJAAOSF_generator.nonlocals )) -> UHAAOSF_no_args = (&UHAAOSF_no_args);
A_CALLPROC(TJAAOSF_generator,(A68_FALSE, &YJAAOSF),(A68_FALSE, &YJAAOSF,(TJAAOSF_generator).nonlocals));
ZJAAOSF_new_args = YJAAOSF;
 /* line 211: */
AKAAOSF = 1 ;
BKAAOSF = (&A_VINDEX(ZJAAOSF_new_args,AKAAOSF)) ;
(*BKAAOSF) = First_arg;
 /* line 213: */
CKAAOSF_this_arg = SHAAOSF_arglist;
 /* line 214: */
 /* line 215: */
FKAAOSF = A_VTRIM(EKAAOSF,(ZJAAOSF_new_args),A_VTSCRIPT(&(EKAAOSF.upb),(ZJAAOSF_new_args).upb,2,(ZJAAOSF_new_args).upb)) ;
GKAAOSF = FKAAOSF.upb -1;
DKAAOSF_v = FKAAOSF.data;
for (;GKAAOSF-- >= 0;
(DKAAOSF_v++
) )
{
(*DKAAOSF_v) = (*(&(CKAAOSF_this_arg->Arg)));
CKAAOSF_this_arg = (*(&(CKAAOSF_this_arg->Next)));
}
 /* line 217: */
 /* line 218: */
 /* line 221: */
HKAAOSF = ZJAAOSF_new_args;
} 
A_PROC_EXIT(parse_prompt);
*ReturnedValue = (HKAAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void JFAAOSF(void)   /* initialise DECS oscommon */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","oscommon.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/strops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_31  TFAAOSF;  /* procedure value */
A68_VC  VFAAOSF;  /* avoid structure result */
A68_43  WFAAOSF;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCAAOSF();   /* USE strops */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/oscommon.a68";
A_config.translation_time = "Mon May  3 00:36:15 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "IFAAOSF (from seed file) ";
A_config.spec_change_time = "Mon May  3 00:36:15 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS oscommon);
UEAALIB_a68config(LGAALIB_configinfo, NFAAOSF);
 /* line 49: */
TFAAOSF.fn.fn_global = QFAAOSF_generator;
TFAAOSF.nonlocals = A68_NIL;
OFAAOSF_anonymous = TFAAOSF;
 /* line 58: */
A_CALLPROC(OFAAOSF_anonymous,(A68_TRUE, &VFAAOSF),(A68_TRUE, &VFAAOSF,(OFAAOSF_anonymous).nonlocals));
UFAAOSF_nullstr = VFAAOSF;
 /* line 59: */
WFAAOSF.Filename = UFAAOSF_nullstr;
WFAAOSF.Directory = UFAAOSF_nullstr;
WFAAOSF.Name = UFAAOSF_nullstr;
WFAAOSF.Type = UFAAOSF_nullstr;
XFAAOSF_nullfilename = WFAAOSF;
 /* line 61: */
 /* line 94: */
 /* line 118: */
NHAAOSF_diff = ((A68_INT)(unsigned char)'A'-(A68_INT)(unsigned char)'a');
 /* line 120: */
 /* line 223: */
A_PROC_EXIT(DECS oscommon);
} 
#undef NL
/* end of translation of oscommon.a68 */
