/* UNAME:APLACTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t32,(void),(void *));
typedef struct A68t32  A68_32 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t33,(A68_INT ),(A68_INT ,void *));
typedef struct A68t33  A68_33 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t35,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(INT) REF MODE26 */
struct A68t37 ;

A_PROCEDURE(A68_VOID ,A68t36,(A68_INT ,struct A68t37 ),(A68_INT ,struct A68t37 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(INT,MODE37) VOID */
A_ROW(A68_VC ,A68t37,1);
typedef struct A68t37  A68_37 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t38,(void),(void *));
typedef struct A68t38  A68_38 ;    /* PROC BITS */
struct A68t39{
A68_INT  Cfile;
A_PAD_INT(PAD_1)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(INT)  */
struct A68t40{
A68_INT  Seedfile;
A_PAD_INT(PAD_2)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t42);
typedef struct A68t42  A68_42 ;    /* STRUCT 7 CHAR */
struct A68t41 { A68_INT mode; union {
struct A68t39  mode1;
struct A68t40  mode2;
struct A68t42  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t41  A68_41 ;    /* UNION(MODE39,MODE40,MODE42,VOID)  */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ),(A68_VC ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t44,1);
typedef struct A68t44  A68_44 ;    /* [] BOOL */
struct A68t45{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_3)
A68_VC  Sourcefile;
struct A68t42  Nameseed;
A_PAD_ISTRUCT(A68_42 ,PAD_4)
struct A68t41  Nameseedorigin;
struct A68t46 * Used_modules;
A68_VC  Commandline;
struct A68t47 * Environment;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE42,MODE41,REF MODE46,REF MODE26,REF MODE47)  */
struct A68t46{
A68_VC  Modinfo_file;
struct A68t46 * Next;
};
typedef struct A68t46  A68_46 ;    /* STRUCT(REF MODE26,REF MODE46)  */
struct A68t47{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t47 * Next;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE47)  */
struct A68t49 ;
struct A68t50 ;

A_PROCEDURE(struct A68t49 *,A68t48,(A68_VC ,struct A68t50 *,A68_VC *),(A68_VC ,struct A68t50 *,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE26,REF MODE50,REF REF MODE26) REF MODE49 */
struct A68t49{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t50{
A68_VC  Dir;
struct A68t50 * Next;
};
typedef struct A68t50  A68_50 ;    /* STRUCT(REF MODE26,REF MODE50)  */
struct A68t51{
A68_INT  Level;
A_PAD_INT(PAD_5)
A68_INT  Block;
A_PAD_INT(PAD_6)
};
typedef struct A68t51  A68_51 ;    /* STRUCT(INT,INT)  */
struct A68t52{
A68_INT  Decno;
A_PAD_INT(PAD_7)
struct A68t52 * Rest;
};
typedef struct A68t52  A68_52 ;    /* STRUCT(INT,REF MODE52)  */
struct A68t54{
A68_INT  Level;
A_PAD_INT(PAD_8)
A68_INT  Block;
A_PAD_INT(PAD_9)
A68_INT  Rdenno;
A_PAD_INT(PAD_10)
struct A68t52 * Nonlocals;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT,INT,INT,REF MODE52)  */
struct A68t53{
struct A68t54  Env;
struct A68t53 * Rest;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(MODE54,REF MODE53)  */
struct A68t55{
A68_INT  Mode;
A_PAD_INT(PAD_11)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_12)
struct A68t51  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t42  Prefix;
A_PAD_ISTRUCT(A68_42 ,PAD_13)
A68_BITS  Flags;
A_PAD_BITS(PAD_14)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,INT,MODE51,REF MODE26,REF MODE26,MODE42,BITS,REF MODE26,REF MODE26)  */
struct A68t56{
A68_INT  Mode;
A_PAD_INT(PAD_15)
A68_INT  Resultmode;
A_PAD_INT(PAD_16)
A68_INT  Declevel;
A_PAD_INT(PAD_17)
struct A68t51  Environ;
A68_VC  Name;
struct A68t42  Prefix;
A_PAD_ISTRUCT(A68_42 ,PAD_18)
struct A68t42  Fnprefix;
A_PAD_ISTRUCT(A68_42 ,PAD_19)
struct A68t42  Envprefix;
A_PAD_ISTRUCT(A68_42 ,PAD_20)
A68_BITS  Flags;
A_PAD_BITS(PAD_21)
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,INT,INT,MODE51,REF MODE26,MODE42,MODE42,MODE42,BITS)  */
struct A68t58{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_22)
A68_BOOL  Set;
A_PAD_BOOL(PAD_23)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE42,BOOL)  */
struct A68t57{
struct A68t58  Label;
struct A68t51  Environ;
A68_VC  Name;
struct A68t42  Prefix;
A_PAD_ISTRUCT(A68_42 ,PAD_24)
A68_BITS  Flags;
A_PAD_BITS(PAD_25)
A68_INT  Alias;
A_PAD_INT(PAD_26)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(MODE58,MODE51,REF MODE26,MODE42,BITS,INT)  */

A_PROCEDURE(struct A68t55 *,A68t59,(A68_INT ),(A68_INT ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) REF MODE55 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,struct A68t42 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t42 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE26,MODE42,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t55 ,A68t62,1);
typedef struct A68t62  A68_62 ;    /* [] MODE55 */
A_ROW(struct A68t56 ,A68t63,1);
typedef struct A68t63  A68_63 ;    /* [] MODE56 */
A_ROW(struct A68t57 ,A68t64,1);
typedef struct A68t64  A68_64 ;    /* [] MODE57 */

A_PROCEDURE(A68_BOOL ,A68t65,(A68_INT ),(A68_INT ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t66,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(INT) MODE26 */
struct A68t68 ;

A_PROCEDURE(A68_VOID ,A68t67,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t68 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t68 ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(INT,INT,INT,INT,REF MODE68) VOID */
A_ROW(A68_INT ,A68t68,1);
typedef struct A68t68  A68_68 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t69,(A68_VC ),(A68_VC ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t70,(A68_INT ,struct A68t51 *),(A68_INT ,struct A68t51 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(INT) MODE51 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE43) VOID */

A_PROCEDURE(A68_VOID ,A68t75,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t76);
typedef struct A68t76  A68_76 ;    /* STRUCT 57 CHAR */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t51 *),(struct A68t51 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC MODE51 */

A_PROCEDURE(struct A68t54 *,A68t81,(A68_INT ),(A68_INT ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(INT) REF MODE54 */
A_ISTRUCT(A68_CHAR ,46,A68t82);
typedef struct A68t82  A68_82 ;    /* STRUCT 46 CHAR */

A_PROCEDURE(A68_INT ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t84,(A68_INT ),(A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t54 ),(struct A68t54 ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE54) VOID */

A_PROCEDURE(A68_BOOL ,A68t86,(void),(void *));
typedef struct A68t86  A68_86 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t87,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t88,(A68_INT ,struct A68t52 *),(A68_INT ,struct A68t52 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(INT,REF MODE52) BOOL */

A_PROCEDURE(A68_VOID ,A68t89,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t90,(struct A68t51 ),(struct A68t51 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE51) BOOL */

A_PROCEDURE(A68_BOOL ,A68t91,(struct A68t51 ,struct A68t51 ),(struct A68t51 ,struct A68t51 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE51,MODE51) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from incid --- */
#define OAAACTR_minlab 16384
/* --- End of imports from incid --- */


/* --- Imports from idtable --- */
extern A68_64  ZPKACTR_labels;
/* --- End of imports from idtable --- */


/* --- Imports from incenviron --- */
/* --- End of imports from incenviron --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
/* --- End of imports from environment --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAACTR(void);   /* incid */
extern void PPKACTR(void);   /* idtable */
extern void AHAACTR(void);   /* incenviron */
extern void HPIACTR(void);   /* environment */
/* --- end of DECS initialisation functions --- */
static A68_76   EPLACTR = {"$Id: environ.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,FPLACTR,EPLACTR,57)
#define GPLACTR_emptynonloclist (A68_52 *)A68_NIL
#define HPLACTR_emptyenvironstack (A68_53 *)A68_NIL
A68_51  JPLACTR_nullenviron;
static A68_54  LPLACTR_globalenviron;
static A68_53 * NPLACTR_environstack;
A68_INT  PPLACTR_highestlevel;
static A68_82   WPLACTR = {"CENTITIES: find level: incorrect nesting level"}; 
A_GISVEC(A68_VC ,XPLACTR,WPLACTR,46)
A68_32  BSLACTR_reverttopreviouslevel;
#define DSLACTR_streams_per_level 4
#define ESLACTR_preamblestream 0
#define FSLACTR_modesstream 1
#define GSLACTR_importsstream 2
#define HSLACTR_externstream 3
#define ISLACTR_lastfixedstream 3
typedef struct   /* env of non-global proc */
{
A68_88  RQLACTR_isinlist;
} TQLACTR_isinlist;

A68_VOID  QPLACTR_currentenviron(A68_51  *ReturnedValue);

A_STATIC A68_54 * UPLACTR_findenviron(A68_INT  Level);

A68_INT  ZPLACTR_currentroutine(void);

A68_INT  CQLACTR_findroutine(A68_INT  Level);

A_STATIC A68_VOID  FQLACTR_stackenviron(A68_54  Environ);

A_STATIC A68_VOID  IQLACTR_collapseenvironstack(void);

A68_BOOL  JQLACTR_nonlocalsused(void);

A68_BOOL  NQLACTR_nonlocaldeclared(A68_INT  Decno, A68_INT  Level);

A_STATIC A68_BOOL  SQLACTR_isinlist(A68_INT  Decno, A68_52 * List, void *NonLocals);

A68_VOID  ERLACTR_addnonlocal(A68_INT  Decno, A68_INT  Level);

A68_BOOL  MRLACTR_islocallevel(A68_51  E1);

A68_BOOL  PRLACTR_isgloballevel(A68_51  E1);

A68_BOOL  TRLACTR_isnewerthan(A68_51  E1, A68_51  E2);

A68_INT  VRLACTR_currentlevel(void);

A68_VOID  YRLACTR_startnewlevel(A68_INT  Rdenno);

A68_INT  KSLACTR_nonlocdecstream(A68_INT  Level);

A68_INT  NSLACTR_codestream(A68_INT  Level);

A68_INT  QSLACTR_locdecstream(A68_INT  Level);

A68_INT  TSLACTR_labelstream(A68_INT  Level);

A68_BOOL  WSLACTR_isnonlocdecstream(A68_INT  Streamno);

A68_BOOL  BTLACTR_iscodestream(A68_INT  Streamno);

A68_BOOL  GTLACTR_islocdecstream(A68_INT  Streamno);

A68_BOOL  LTLACTR_islabelstream(A68_INT  Streamno);

A_STATIC A68_BOOL  SQLACTR_isinlist(A68_INT  Decno, A68_52 * List, void *NonLocals)
#define NL(x) (((TQLACTR_isinlist *)NonLocals)->x)
{ 
A68_BOOL  UQLACTR;  /* optbool result */
A68_BOOL  VQLACTR;  /* optbool result */
A68_BOOL  WQLACTR;  /* clause result */
A_PROC_ENTRY(isinlist);
 /* line 120: */
 /* line 121: */
 /* line 123: */
UQLACTR = (List!=GPLACTR_emptynonloclist);
if ( UQLACTR )
{ /* line 124: */
 /* line 125: */
VQLACTR = (Decno==(*(&(List->Decno))));
if ( ! VQLACTR )
{VQLACTR = A_CALLPROC(NL(RQLACTR_isinlist),(Decno, (*(&(List->Rest)))),(Decno, (*(&(List->Rest))),(NL(RQLACTR_isinlist)).nonlocals));
}
 /* line 126: */
UQLACTR = VQLACTR;
}
WQLACTR = UQLACTR;
A_PROC_EXIT(isinlist);
return( WQLACTR );
} 
#undef NL

A68_VOID  QPLACTR_currentenviron(A68_51  *ReturnedValue)
{ 
A68_51  RPLACTR;  /* collateral clause result */
A68_51  SPLACTR;  /* clause result */
A_PROC_ENTRY(currentenviron);
RPLACTR.Level = (*(&((&(NPLACTR_environstack->Env))->Level)));
RPLACTR.Block = (*(&((&(NPLACTR_environstack->Env))->Block)));
SPLACTR = RPLACTR;
A_PROC_EXIT(currentenviron);
*ReturnedValue = (SPLACTR);
return;
} 
#undef NL

A_STATIC A68_54 * UPLACTR_findenviron(A68_INT  Level)
{ 
A68_53 * VPLACTR_selectenviron;
A68_54 * YPLACTR;  /* clause result */
A_PROC_ENTRY(findenviron);
 /* line 74: */
 /* line 75: */
{ 
VPLACTR_selectenviron = NPLACTR_environstack;
 /* line 76: */
for ( ;; )
{ 
 /* line 77: */
if ( !(((*(&((&(VPLACTR_selectenviron->Env))->Level)))>Level)) ) break;
 /* line 78: */
 /* line 79: */
if ( ((*(&(VPLACTR_selectenviron->Rest)))==HPLACTR_emptyenvironstack) )
{ 
 /* line 80: */
WXIACTR_assert(XPLACTR, A68_FALSE);
} 
else
{ 
 /* line 81: */
 /* line 82: */
VPLACTR_selectenviron = (*(&(VPLACTR_selectenviron->Rest)));
} 
}
 /* line 83: */
 /* line 84: */
YPLACTR = (&(VPLACTR_selectenviron->Env));
} 
A_PROC_EXIT(findenviron);
return( YPLACTR );
} 
#undef NL

A68_INT  ZPLACTR_currentroutine(void)
{ 
A68_INT  AQLACTR;  /* clause result */
A_PROC_ENTRY(currentroutine);
AQLACTR = (*(&((&(NPLACTR_environstack->Env))->Rdenno)));
A_PROC_EXIT(currentroutine);
return( AQLACTR );
} 
#undef NL

A68_INT  CQLACTR_findroutine(A68_INT  Level)
{ 
A68_INT  DQLACTR;  /* clause result */
A_PROC_ENTRY(findroutine);
DQLACTR = (*(&(UPLACTR_findenviron(Level)->Rdenno)));
A_PROC_EXIT(findroutine);
return( DQLACTR );
} 
#undef NL

A_STATIC A68_VOID  FQLACTR_stackenviron(A68_54  Environ)
{ 
A68_53  GQLACTR;  /* collateral clause result */
A68_53 * HQLACTR;  /* YIELD */
A_PROC_ENTRY(stackenviron);
 /* line 94: */
 /* line 95: */
GQLACTR.Env = Environ;
 /* line 96: */
GQLACTR.Rest = NPLACTR_environstack;
HQLACTR = A_HEAP(A68_53 ) ;
(*HQLACTR) = GQLACTR ;
NPLACTR_environstack = HQLACTR;
A_PROC_EXIT(stackenviron);
return;
} 
#undef NL

A_STATIC A68_VOID  IQLACTR_collapseenvironstack(void)
{ 
A_PROC_ENTRY(collapseenvironstack);
 /* line 104: */
NPLACTR_environstack = (*(&(NPLACTR_environstack->Rest)));
A_PROC_EXIT(collapseenvironstack);
return;
} 
#undef NL

A68_BOOL  JQLACTR_nonlocalsused(void)
{ 
A68_BOOL  KQLACTR;  /* clause result */
A_PROC_ENTRY(nonlocalsused);
KQLACTR = ((*(&((&(NPLACTR_environstack->Env))->Nonlocals)))!=GPLACTR_emptynonloclist);
A_PROC_EXIT(nonlocalsused);
return( KQLACTR );
} 
#undef NL

A68_BOOL  NQLACTR_nonlocaldeclared(A68_INT  Decno, A68_INT  Level)
{ 
A68_88  RQLACTR_isinlist;   /* proc value of non-global proc */
A68_52 * XQLACTR_nonlocals;
A68_BOOL  YQLACTR;  /* optbool result */
A68_BOOL  ZQLACTR;  /* optbool result */
A68_INT  ARLACTR;  /* YIELD */
A68_BOOL  BRLACTR;  /* clause result */
A_PROC_ENTRY(nonlocaldeclared);
 /* line 118: */
 /* line 119: */
{ 
A_CLOSURE( RQLACTR_isinlist, SQLACTR_isinlist, TQLACTR_isinlist );
(( TQLACTR_isinlist * ) ( RQLACTR_isinlist.nonlocals )) -> RQLACTR_isinlist = RQLACTR_isinlist;
 /* line 128: */
XQLACTR_nonlocals = (*(&(UPLACTR_findenviron(Level)->Nonlocals)));
 /* line 130: */
 /* line 131: */
 /* line 132: */
YQLACTR = A_CALLPROC(RQLACTR_isinlist,(Decno, XQLACTR_nonlocals),(Decno, XQLACTR_nonlocals,(RQLACTR_isinlist).nonlocals));
if ( ! YQLACTR )
{ZQLACTR = (Decno>OAAACTR_minlab);
if ( ZQLACTR )
{ARLACTR = (Decno-OAAACTR_minlab) ;
ZQLACTR = A_CALLPROC(RQLACTR_isinlist,(((*(&((&A_R1INDEX(ZPKACTR_labels,ARLACTR))->Alias)))+OAAACTR_minlab), XQLACTR_nonlocals),(((*(&((&A_R1INDEX(ZPKACTR_labels,ARLACTR))->Alias)))+OAAACTR_minlab), XQLACTR_nonlocals,(RQLACTR_isinlist).nonlocals));
}
 /* line 133: */
YQLACTR = ZQLACTR;
}
BRLACTR = YQLACTR;
} 
A_PROC_EXIT(nonlocaldeclared);
return( BRLACTR );
} 
#undef NL

A68_VOID  ERLACTR_addnonlocal(A68_INT  Decno, A68_INT  Level)
{ 
A68_INT  FRLACTR;  /* YIELD */
A68_INT  GRLACTR_alias;
A68_54 * HRLACTR_environ;
A68_52  IRLACTR;  /* collateral clause result */
A68_52 * JRLACTR;  /* YIELD */
A68_52 ** KRLACTR;  /* YIELD */
A_PROC_ENTRY(addnonlocal);
 /* line 140: */
 /* line 141: */
{ 
 /* line 142: */
 /* line 143: */
 /* line 144: */
if ( (Decno>OAAACTR_minlab) )
{ 
FRLACTR = (Decno-OAAACTR_minlab) ;
GRLACTR_alias = (*(&((&A_R1INDEX(ZPKACTR_labels,FRLACTR))->Alias)));
 /* line 145: */
 /* line 146: */
 /* line 147: */
if ( (GRLACTR_alias>1) )
{ 
 /* line 148: */
 /* line 149: */
ERLACTR_addnonlocal((GRLACTR_alias+OAAACTR_minlab), Level);
} 
} 
 /* line 151: */
HRLACTR_environ = UPLACTR_findenviron(Level);
 /* line 152: */
IRLACTR.Decno = Decno;
 /* line 153: */
IRLACTR.Rest = (*(&(HRLACTR_environ->Nonlocals)));
JRLACTR = A_HEAP(A68_52 ) ;
(*JRLACTR) = IRLACTR ;
KRLACTR = (&(HRLACTR_environ->Nonlocals)) ;
(*KRLACTR) = JRLACTR;
} 
A_PROC_EXIT(addnonlocal);
return;
} 
#undef NL

A68_BOOL  MRLACTR_islocallevel(A68_51  E1)
{ 
A68_BOOL  NRLACTR;  /* clause result */
A_PROC_ENTRY(islocallevel);
 /* line 156: */
NRLACTR = (E1.Level==(*(&((&(NPLACTR_environstack->Env))->Level))));
A_PROC_EXIT(islocallevel);
return( NRLACTR );
} 
#undef NL

A68_BOOL  PRLACTR_isgloballevel(A68_51  E1)
{ 
A68_BOOL  QRLACTR;  /* clause result */
A_PROC_ENTRY(isgloballevel);
QRLACTR = (E1.Level==0);
A_PROC_EXIT(isgloballevel);
return( QRLACTR );
} 
#undef NL

A68_BOOL  TRLACTR_isnewerthan(A68_51  E1, A68_51  E2)
{ 
A68_BOOL  URLACTR;  /* clause result */
A_PROC_ENTRY(isnewerthan);
 /* line 161: */
 /* line 162: */
if ( (E1.Level==E2.Level) )
{ 
 /* line 163: */
URLACTR = (E1.Block>E2.Block);
} 
else
{ 
 /* line 164: */
URLACTR = (E1.Level>E2.Level);
} 
A_PROC_EXIT(isnewerthan);
return( URLACTR );
} 
#undef NL

A68_INT  VRLACTR_currentlevel(void)
{ 
A68_INT  WRLACTR;  /* clause result */
A_PROC_ENTRY(currentlevel);
WRLACTR = (*(&((&(NPLACTR_environstack->Env))->Level)));
A_PROC_EXIT(currentlevel);
return( WRLACTR );
} 
#undef NL

A68_VOID  YRLACTR_startnewlevel(A68_INT  Rdenno)
{ 
A68_INT  ZRLACTR_thislevel;
A68_54  ASLACTR;  /* collateral clause result */
A_PROC_ENTRY(startnewlevel);
 /* line 173: */
 /* line 174: */
{ 
ZRLACTR_thislevel = ((*(&((&(NPLACTR_environstack->Env))->Level)))+1);
 /* line 175: */
ASLACTR.Level = ZRLACTR_thislevel;
ASLACTR.Block = 0;
ASLACTR.Rdenno = Rdenno;
ASLACTR.Nonlocals = GPLACTR_emptynonloclist;
FQLACTR_stackenviron(ASLACTR);
 /* line 176: */
 /* line 177: */
 /* line 178: */
if ( (ZRLACTR_thislevel>PPLACTR_highestlevel) )
{ 
 /* line 179: */
 /* line 180: */
PPLACTR_highestlevel = ZRLACTR_thislevel;
} 
} 
A_PROC_EXIT(startnewlevel);
return;
} 
#undef NL

A68_INT  KSLACTR_nonlocdecstream(A68_INT  Level)
{ 
A68_INT  LSLACTR;  /* clause result */
A_PROC_ENTRY(nonlocdecstream);
 /* line 201: */
LSLACTR = (((Level*DSLACTR_streams_per_level)+1)+ISLACTR_lastfixedstream);
A_PROC_EXIT(nonlocdecstream);
return( LSLACTR );
} 
#undef NL

A68_INT  NSLACTR_codestream(A68_INT  Level)
{ 
A68_INT  OSLACTR;  /* clause result */
A_PROC_ENTRY(codestream);
 /* line 203: */
OSLACTR = (((Level*DSLACTR_streams_per_level)+2)+ISLACTR_lastfixedstream);
A_PROC_EXIT(codestream);
return( OSLACTR );
} 
#undef NL

A68_INT  QSLACTR_locdecstream(A68_INT  Level)
{ 
A68_INT  RSLACTR;  /* clause result */
A_PROC_ENTRY(locdecstream);
 /* line 205: */
RSLACTR = (((Level*DSLACTR_streams_per_level)+3)+ISLACTR_lastfixedstream);
A_PROC_EXIT(locdecstream);
return( RSLACTR );
} 
#undef NL

A68_INT  TSLACTR_labelstream(A68_INT  Level)
{ 
A68_INT  USLACTR;  /* clause result */
A_PROC_ENTRY(labelstream);
 /* line 207: */
USLACTR = (((Level*DSLACTR_streams_per_level)+4)+ISLACTR_lastfixedstream);
A_PROC_EXIT(labelstream);
return( USLACTR );
} 
#undef NL

A68_BOOL  WSLACTR_isnonlocdecstream(A68_INT  Streamno)
{ 
A68_BOOL  XSLACTR;  /* optbool result */
A68_INT  YSLACTR;  /* ADICOPS - MOD */
A68_BOOL  ZSLACTR;  /* clause result */
A_PROC_ENTRY(isnonlocdecstream);
 /* line 210: */
XSLACTR = (Streamno>ISLACTR_lastfixedstream);
if ( XSLACTR )
{XSLACTR = (A_MOD(Streamno,DSLACTR_streams_per_level,YSLACTR)==3);
}
ZSLACTR = XSLACTR;
A_PROC_EXIT(isnonlocdecstream);
return( ZSLACTR );
} 
#undef NL

A68_BOOL  BTLACTR_iscodestream(A68_INT  Streamno)
{ 
A68_BOOL  CTLACTR;  /* optbool result */
A68_INT  DTLACTR;  /* ADICOPS - MOD */
A68_BOOL  ETLACTR;  /* clause result */
A_PROC_ENTRY(iscodestream);
 /* line 212: */
CTLACTR = (Streamno>ISLACTR_lastfixedstream);
if ( CTLACTR )
{CTLACTR = (A_MOD(Streamno,DSLACTR_streams_per_level,DTLACTR)==0);
}
ETLACTR = CTLACTR;
A_PROC_EXIT(iscodestream);
return( ETLACTR );
} 
#undef NL

A68_BOOL  GTLACTR_islocdecstream(A68_INT  Streamno)
{ 
A68_BOOL  HTLACTR;  /* optbool result */
A68_INT  ITLACTR;  /* ADICOPS - MOD */
A68_BOOL  JTLACTR;  /* clause result */
A_PROC_ENTRY(islocdecstream);
 /* line 214: */
HTLACTR = (Streamno>ISLACTR_lastfixedstream);
if ( HTLACTR )
{HTLACTR = (A_MOD(Streamno,DSLACTR_streams_per_level,ITLACTR)==1);
}
JTLACTR = HTLACTR;
A_PROC_EXIT(islocdecstream);
return( JTLACTR );
} 
#undef NL

A68_BOOL  LTLACTR_islabelstream(A68_INT  Streamno)
{ 
A68_BOOL  MTLACTR;  /* optbool result */
A68_INT  NTLACTR;  /* ADICOPS - MOD */
A68_BOOL  OTLACTR;  /* clause result */
A_PROC_ENTRY(islabelstream);
 /* line 216: */
MTLACTR = (Streamno>ISLACTR_lastfixedstream);
if ( MTLACTR )
{MTLACTR = (A_MOD(Streamno,DSLACTR_streams_per_level,NTLACTR)==2);
}
OTLACTR = MTLACTR;
A_PROC_EXIT(islabelstream);
return( OTLACTR );
} 
#undef NL
 /* line 1: */
 /* line 3: */
void BPLACTR(void)   /* initialise DECS environ */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20/liba68prel","-dir",".","environ.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20/a68config/a68config.m","./incid.m","./idtable.m","./incenviron.m","./environment.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_51  IPLACTR;  /* collateral clause result */
A68_54  KPLACTR;  /* collateral clause result */
A68_53  MPLACTR;  /* collateral clause result */
A68_53 * OPLACTR;  /* YIELD */
A68_32  CSLACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAACTR();   /* USE incid */
PPKACTR();   /* USE idtable */
AHAACTR();   /* USE incenviron */
HPIACTR();   /* USE environment */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20/src/environ.a68";
A_config.translation_time = "Sun Apr 18 20:07:52 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "APLACTR (from seed file) ";
A_config.spec_change_time = "Sun Apr 18 20:07:52 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS environ);
UEAALIB_a68config(LGAALIB_configinfo, FPLACTR);
 /* line 48: */
 /* line 56: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
IPLACTR.Level = 0;
IPLACTR.Block = 0;
JPLACTR_nullenviron = IPLACTR;
 /* line 61: */
KPLACTR.Level = 0;
KPLACTR.Block = 0;
KPLACTR.Rdenno = 0;
KPLACTR.Nonlocals = (A68_52 *)A68_NIL;
LPLACTR_globalenviron = KPLACTR;
 /* line 62: */
 /* line 63: */
MPLACTR.Env = LPLACTR_globalenviron;
MPLACTR.Rest = HPLACTR_emptyenvironstack;
OPLACTR = A_HEAP(A68_53 ) ;
(*OPLACTR) = MPLACTR ;
NPLACTR_environstack = OPLACTR;
 /* line 65: */
PPLACTR_highestlevel = 0;
 /* line 67: */
 /* line 68: */
 /* line 70: */
 /* line 86: */
 /* line 88: */
 /* line 90: */
 /* line 98: */
 /* line 102: */
 /* line 103: */
 /* line 106: */
 /* line 110: */
 /* line 112: */
 /* line 135: */
 /* line 155: */
 /* line 158: */
 /* line 160: */
 /* line 167: */
 /* line 169: */
 /* line 182: */
CSLACTR.fn.fn_global = IQLACTR_collapseenvironstack;
CSLACTR.nonlocals = A68_NIL;
BSLACTR_reverttopreviouslevel = (CSLACTR);
 /* line 192: */
 /* line 193: */
 /* line 194: */
 /* line 195: */
 /* line 196: */
 /* line 197: */
 /* line 198: */
 /* line 200: */
 /* line 202: */
 /* line 204: */
 /* line 206: */
 /* line 209: */
 /* line 211: */
 /* line 213: */
 /* line 215: */
 /* line 218: */
 /* line 220: */
 /* line 232: */
/*SKIP*/;
A_PROC_EXIT(DECS environ);
} 
#undef NL
/* end of translation of environ.a68 */
