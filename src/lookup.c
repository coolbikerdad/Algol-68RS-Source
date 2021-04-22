/* UNAME:STJACTR */
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

A_PROCEDURE(A68_VOID ,A68t51,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE43) VOID */

A_PROCEDURE(A68_VOID ,A68t55,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t56);
typedef struct A68t56  A68_56 ;    /* STRUCT 56 CHAR */
struct A68t57{
A68_VC  Word;
A68_INT  Value;
A_PAD_INT(PAD_5)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t58,(A68_BOOL ,struct A68t57 *),(A68_BOOL ,struct A68t57 *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(BOOL) MODE57 */
#define A68_59  A68_VC 
#define A68t59 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_60  A68_57 
#define A68t60 A68t57            /* STRUCT(MODE59,INT)  */
A_ROW(struct A68t57 ,A68t61,1);
typedef struct A68t61  A68_61 ;    /* [] MODE57 */
A_ROW(struct A68t61 ,A68t62,1);
typedef struct A68t62  A68_62 ;    /* [] MODE61 */
A_ISTRUCT(A68_CHAR ,2,A68t63);
typedef struct A68t63  A68_63 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t64);
typedef struct A68t64  A68_64 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,4,A68t65);
typedef struct A68t65  A68_65 ;    /* STRUCT 4 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t66);
typedef struct A68t66  A68_66 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t67);
typedef struct A68t67  A68_67 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t68);
typedef struct A68t68  A68_68 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t61 ,8,A68t69);
typedef struct A68t69  A68_69 ;    /* STRUCT 8 MODE61 */
A_ISTRUCT(struct A68t57 ,24,A68t70);
typedef struct A68t70  A68_70 ;    /* STRUCT 24 MODE57 */
A_ISTRUCT(struct A68t57 ,19,A68t71);
typedef struct A68t71  A68_71 ;    /* STRUCT 19 MODE57 */
A_ISTRUCT(struct A68t57 ,36,A68t72);
typedef struct A68t72  A68_72 ;    /* STRUCT 36 MODE57 */
A_ISTRUCT(struct A68t57 ,14,A68t73);
typedef struct A68t73  A68_73 ;    /* STRUCT 14 MODE57 */
A_ISTRUCT(struct A68t57 ,9,A68t74);
typedef struct A68t74  A68_74 ;    /* STRUCT 9 MODE57 */
A_ISTRUCT(struct A68t57 ,8,A68t75);
typedef struct A68t75  A68_75 ;    /* STRUCT 8 MODE57 */
A_ISTRUCT(struct A68t61 ,4,A68t76);
typedef struct A68t76  A68_76 ;    /* STRUCT 4 MODE61 */
A_ISTRUCT(struct A68t57 ,7,A68t77);
typedef struct A68t77  A68_77 ;    /* STRUCT 7 MODE57 */
A_ISTRUCT(struct A68t57 ,2,A68t78);
typedef struct A68t78  A68_78 ;    /* STRUCT 2 MODE57 */

A_PROCEDURE(A68_INT ,A68t79,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF MODE26,BOOL) INT */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from environment --- */
extern A68_BOOL  MQIACTR_longlongoption;
/* --- End of imports from environment --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void HPIACTR(void);   /* environment */
/* --- end of DECS initialisation functions --- */
static A68_56   WTJACTR = {"$Id: lookup.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,XTJACTR,WTJACTR,56)
static A68_58  YTJACTR_anonymous;
static A68_63   PUJACTR = {"of"}; 
A_GISVEC(A68_VC ,QUJACTR,PUJACTR,2)
static A68_63   RUJACTR = {"co"}; 
A_GISVEC(A68_VC ,SUJACTR,RUJACTR,2)
static A68_63   TUJACTR = {"if"}; 
A_GISVEC(A68_VC ,UUJACTR,TUJACTR,2)
static A68_63   VUJACTR = {"fi"}; 
A_GISVEC(A68_VC ,WUJACTR,VUJACTR,2)
static A68_63   XUJACTR = {"do"}; 
A_GISVEC(A68_VC ,YUJACTR,XUJACTR,2)
static A68_63   ZUJACTR = {"in"}; 
A_GISVEC(A68_VC ,AVJACTR,ZUJACTR,2)
static A68_63   BVJACTR = {"or"}; 
A_GISVEC(A68_VC ,CVJACTR,BVJACTR,2)
static A68_63   DVJACTR = {"to"}; 
A_GISVEC(A68_VC ,EVJACTR,DVJACTR,2)
static A68_63   FVJACTR = {"od"}; 
A_GISVEC(A68_VC ,GVJACTR,FVJACTR,2)
static A68_63   HVJACTR = {"is"}; 
A_GISVEC(A68_VC ,IVJACTR,HVJACTR,2)
static A68_63   JVJACTR = {"op"}; 
A_GISVEC(A68_VC ,KVJACTR,JVJACTR,2)
static A68_63   LVJACTR = {"ge"}; 
A_GISVEC(A68_VC ,MVJACTR,LVJACTR,2)
static A68_63   NVJACTR = {"by"}; 
A_GISVEC(A68_VC ,OVJACTR,NVJACTR,2)
static A68_63   PVJACTR = {"at"}; 
A_GISVEC(A68_VC ,QVJACTR,PVJACTR,2)
static A68_63   RVJACTR = {"ne"}; 
A_GISVEC(A68_VC ,SVJACTR,RVJACTR,2)
static A68_63   TVJACTR = {"up"}; 
A_GISVEC(A68_VC ,UVJACTR,TVJACTR,2)
static A68_63   VVJACTR = {"le"}; 
A_GISVEC(A68_VC ,WVJACTR,VVJACTR,2)
static A68_63   XVJACTR = {"eq"}; 
A_GISVEC(A68_VC ,YVJACTR,XVJACTR,2)
static A68_63   ZVJACTR = {"im"}; 
A_GISVEC(A68_VC ,AWJACTR,ZVJACTR,2)
static A68_63   BWJACTR = {"re"}; 
A_GISVEC(A68_VC ,CWJACTR,BWJACTR,2)
static A68_63   DWJACTR = {"go"}; 
A_GISVEC(A68_VC ,EWJACTR,DWJACTR,2)
static A68_63   FWJACTR = {"gt"}; 
A_GISVEC(A68_VC ,GWJACTR,FWJACTR,2)
static A68_63   HWJACTR = {"lt"}; 
A_GISVEC(A68_VC ,IWJACTR,HWJACTR,2)
static A68_63   JWJACTR = {"pr"}; 
A_GISVEC(A68_VC ,KWJACTR,JWJACTR,2)
static A68_64   NWJACTR = {"int"}; 
A_GISVEC(A68_VC ,OWJACTR,NWJACTR,3)
static A68_64   PWJACTR = {"ref"}; 
A_GISVEC(A68_VC ,QWJACTR,PWJACTR,3)
static A68_64   RWJACTR = {"and"}; 
A_GISVEC(A68_VC ,SWJACTR,RWJACTR,3)
static A68_64   TWJACTR = {"abs"}; 
A_GISVEC(A68_VC ,UWJACTR,TWJACTR,3)
static A68_64   VWJACTR = {"nil"}; 
A_GISVEC(A68_VC ,WWJACTR,VWJACTR,3)
static A68_64   XWJACTR = {"bin"}; 
A_GISVEC(A68_VC ,YWJACTR,XWJACTR,3)
static A68_64   ZWJACTR = {"end"}; 
A_GISVEC(A68_VC ,AXJACTR,ZWJACTR,3)
static A68_64   BXJACTR = {"for"}; 
A_GISVEC(A68_VC ,CXJACTR,BXJACTR,3)
static A68_64   DXJACTR = {"not"}; 
A_GISVEC(A68_VC ,EXJACTR,DXJACTR,3)
static A68_64   FXJACTR = {"out"}; 
A_GISVEC(A68_VC ,GXJACTR,FXJACTR,3)
static A68_64   HXJACTR = {"loc"}; 
A_GISVEC(A68_VC ,IXJACTR,HXJACTR,3)
static A68_64   JXJACTR = {"upb"}; 
A_GISVEC(A68_VC ,KXJACTR,JXJACTR,3)
static A68_64   LXJACTR = {"mod"}; 
A_GISVEC(A68_VC ,MXJACTR,LXJACTR,3)
static A68_64   NXJACTR = {"shr"}; 
A_GISVEC(A68_VC ,OXJACTR,NXJACTR,3)
static A68_64   PXJACTR = {"odd"}; 
A_GISVEC(A68_VC ,QXJACTR,PXJACTR,3)
static A68_64   RXJACTR = {"shl"}; 
A_GISVEC(A68_VC ,SXJACTR,RXJACTR,3)
static A68_64   TXJACTR = {"lwb"}; 
A_GISVEC(A68_VC ,UXJACTR,TXJACTR,3)
static A68_64   VXJACTR = {"arg"}; 
A_GISVEC(A68_VC ,WXJACTR,VXJACTR,3)
static A68_64   XXJACTR = {"use"}; 
A_GISVEC(A68_VC ,YXJACTR,XXJACTR,3)
static A68_65   BYJACTR = {"then"}; 
A_GISVEC(A68_VC ,CYJACTR,BYJACTR,4)
static A68_65   DYJACTR = {"else"}; 
A_GISVEC(A68_VC ,EYJACTR,DYJACTR,4)
static A68_65   FYJACTR = {"skip"}; 
A_GISVEC(A68_VC ,GYJACTR,FYJACTR,4)
static A68_65   HYJACTR = {"proc"}; 
A_GISVEC(A68_VC ,IYJACTR,HYJACTR,4)
static A68_65   JYJACTR = {"isnt"}; 
A_GISVEC(A68_VC ,KYJACTR,JYJACTR,4)
static A68_65   LYJACTR = {"case"}; 
A_GISVEC(A68_VC ,MYJACTR,LYJACTR,4)
static A68_65   NYJACTR = {"true"}; 
A_GISVEC(A68_VC ,OYJACTR,NYJACTR,4)
static A68_65   PYJACTR = {"esac"}; 
A_GISVEC(A68_VC ,QYJACTR,PYJACTR,4)
static A68_65   RYJACTR = {"bool"}; 
A_GISVEC(A68_VC ,SYJACTR,RYJACTR,4)
static A68_65   TYJACTR = {"void"}; 
A_GISVEC(A68_VC ,UYJACTR,TYJACTR,4)
static A68_65   VYJACTR = {"char"}; 
A_GISVEC(A68_VC ,WYJACTR,VYJACTR,4)
static A68_65   XYJACTR = {"goto"}; 
A_GISVEC(A68_VC ,YYJACTR,XYJACTR,4)
static A68_65   ZYJACTR = {"elif"}; 
A_GISVEC(A68_VC ,AZJACTR,ZYJACTR,4)
static A68_65   BZJACTR = {"bits"}; 
A_GISVEC(A68_VC ,CZJACTR,BZJACTR,4)
static A68_65   DZJACTR = {"mode"}; 
A_GISVEC(A68_VC ,EZJACTR,DZJACTR,4)
static A68_65   FZJACTR = {"from"}; 
A_GISVEC(A68_VC ,GZJACTR,FZJACTR,4)
static A68_65   HZJACTR = {"real"}; 
A_GISVEC(A68_VC ,IZJACTR,HZJACTR,4)
static A68_65   JZJACTR = {"repr"}; 
A_GISVEC(A68_VC ,KZJACTR,JZJACTR,4)
static A68_65   LZJACTR = {"leng"}; 
A_GISVEC(A68_VC ,MZJACTR,LZJACTR,4)
static A68_65   NZJACTR = {"long"}; 
A_GISVEC(A68_VC ,OZJACTR,NZJACTR,4)
static A68_65   PZJACTR = {"elem"}; 
A_GISVEC(A68_VC ,QZJACTR,PZJACTR,4)
static A68_65   RZJACTR = {"exit"}; 
A_GISVEC(A68_VC ,SZJACTR,RZJACTR,4)
static A68_65   TZJACTR = {"sign"}; 
A_GISVEC(A68_VC ,UZJACTR,TZJACTR,4)
static A68_65   VZJACTR = {"flex"}; 
A_GISVEC(A68_VC ,WZJACTR,VZJACTR,4)
static A68_65   XZJACTR = {"heap"}; 
A_GISVEC(A68_VC ,YZJACTR,XZJACTR,4)
static A68_65   ZZJACTR = {"prio"}; 
A_GISVEC(A68_VC ,AAKACTR,ZZJACTR,4)
static A68_65   BAKACTR = {"ouse"}; 
A_GISVEC(A68_VC ,CAKACTR,BAKACTR,4)
static A68_65   DAKACTR = {"over"}; 
A_GISVEC(A68_VC ,EAKACTR,DAKACTR,4)
static A68_65   FAKACTR = {"conj"}; 
A_GISVEC(A68_VC ,GAKACTR,FAKACTR,4)
static A68_65   HAKACTR = {"decs"}; 
A_GISVEC(A68_VC ,IAKACTR,HAKACTR,4)
static A68_65   JAKACTR = {"down"}; 
A_GISVEC(A68_VC ,KAKACTR,JAKACTR,4)
static A68_65   LAKACTR = {"here"}; 
A_GISVEC(A68_VC ,MAKACTR,LAKACTR,4)
static A68_65   NAKACTR = {"keep"}; 
A_GISVEC(A68_VC ,OAKACTR,NAKACTR,4)
static A68_65   PAKACTR = {"biop"}; 
A_GISVEC(A68_VC ,QAKACTR,PAKACTR,4)
static A68_65   RAKACTR = {"orel"}; 
A_GISVEC(A68_VC ,SAKACTR,RAKACTR,4)
static A68_65   TAKACTR = {"code"}; 
A_GISVEC(A68_VC ,UAKACTR,TAKACTR,4)
static A68_66   XAKACTR = {"while"}; 
A_GISVEC(A68_VC ,YAKACTR,XAKACTR,5)
static A68_66   ZAKACTR = {"false"}; 
A_GISVEC(A68_VC ,ABKACTR,ZAKACTR,5)
static A68_66   BBKACTR = {"begin"}; 
A_GISVEC(A68_VC ,CBKACTR,BBKACTR,5)
static A68_66   DBKACTR = {"union"}; 
A_GISVEC(A68_VC ,EBKACTR,DBKACTR,5)
static A68_66   FBKACTR = {"compl"}; 
A_GISVEC(A68_VC ,GBKACTR,FBKACTR,5)
static A68_66   HBKACTR = {"round"}; 
A_GISVEC(A68_VC ,IBKACTR,HBKACTR,5)
static A68_66   JBKACTR = {"divab"}; 
A_GISVEC(A68_VC ,KBKACTR,JBKACTR,5)
static A68_66   LBKACTR = {"short"}; 
A_GISVEC(A68_VC ,MBKACTR,LBKACTR,5)
static A68_66   NBKACTR = {"modab"}; 
A_GISVEC(A68_VC ,OBKACTR,NBKACTR,5)
static A68_66   PBKACTR = {"empty"}; 
A_GISVEC(A68_VC ,QBKACTR,PBKACTR,5)
static A68_66   RBKACTR = {"alien"}; 
A_GISVEC(A68_VC ,SBKACTR,RBKACTR,5)
static A68_66   TBKACTR = {"andth"}; 
A_GISVEC(A68_VC ,UBKACTR,TBKACTR,5)
static A68_66   VBKACTR = {"xtype"}; 
A_GISVEC(A68_VC ,WBKACTR,VBKACTR,5)
static A68_66   XBKACTR = {"ytype"}; 
A_GISVEC(A68_VC ,YBKACTR,XBKACTR,5)
static A68_67   BCKACTR = {"struct"}; 
A_GISVEC(A68_VC ,CCKACTR,BCKACTR,6)
static A68_67   DCKACTR = {"plusab"}; 
A_GISVEC(A68_VC ,ECKACTR,DCKACTR,6)
static A68_67   FCKACTR = {"entier"}; 
A_GISVEC(A68_VC ,GCKACTR,FCKACTR,6)
static A68_67   HCKACTR = {"finish"}; 
A_GISVEC(A68_VC ,ICKACTR,HCKACTR,6)
static A68_67   JCKACTR = {"format"}; 
A_GISVEC(A68_VC ,KCKACTR,JCKACTR,6)
static A68_67   LCKACTR = {"overab"}; 
A_GISVEC(A68_VC ,MCKACTR,LCKACTR,6)
static A68_67   NCKACTR = {"vector"}; 
A_GISVEC(A68_VC ,OCKACTR,NCKACTR,6)
static A68_67   PCKACTR = {"forall"}; 
A_GISVEC(A68_VC ,QCKACTR,PCKACTR,6)
static A68_67   RCKACTR = {"plusto"}; 
A_GISVEC(A68_VC ,SCKACTR,RCKACTR,6)
static A68_42   VCKACTR = {"minusab"}; 
A_GISVEC(A68_VC ,WCKACTR,VCKACTR,7)
static A68_42   XCKACTR = {"comment"}; 
A_GISVEC(A68_VC ,YCKACTR,XCKACTR,7)
static A68_42   ZCKACTR = {"timesab"}; 
A_GISVEC(A68_VC ,ADKACTR,ZCKACTR,7)
static A68_42   BDKACTR = {"program"}; 
A_GISVEC(A68_VC ,CDKACTR,BDKACTR,7)
static A68_42   DDKACTR = {"shorten"}; 
A_GISVEC(A68_VC ,EDKACTR,DDKACTR,7)
static A68_42   FDKACTR = {"compose"}; 
A_GISVEC(A68_VC ,GDKACTR,FDKACTR,7)
static A68_42   HDKACTR = {"context"}; 
A_GISVEC(A68_VC ,IDKACTR,HDKACTR,7)
static A68_42   JDKACTR = {"pragmat"}; 
A_GISVEC(A68_VC ,KDKACTR,JDKACTR,7)
static A68_68   NDKACTR = {"straight"}; 
A_GISVEC(A68_VC ,ODKACTR,NDKACTR,8)
static A68_62  RDKACTR_longlongboldset;
static A68_63   XDKACTR = {"of"}; 
A_GISVEC(A68_VC ,YDKACTR,XDKACTR,2)
static A68_63   ZDKACTR = {"co"}; 
A_GISVEC(A68_VC ,AEKACTR,ZDKACTR,2)
static A68_63   BEKACTR = {"if"}; 
A_GISVEC(A68_VC ,CEKACTR,BEKACTR,2)
static A68_63   DEKACTR = {"fi"}; 
A_GISVEC(A68_VC ,EEKACTR,DEKACTR,2)
static A68_63   FEKACTR = {"do"}; 
A_GISVEC(A68_VC ,GEKACTR,FEKACTR,2)
static A68_63   HEKACTR = {"in"}; 
A_GISVEC(A68_VC ,IEKACTR,HEKACTR,2)
static A68_63   JEKACTR = {"or"}; 
A_GISVEC(A68_VC ,KEKACTR,JEKACTR,2)
static A68_63   LEKACTR = {"to"}; 
A_GISVEC(A68_VC ,MEKACTR,LEKACTR,2)
static A68_63   NEKACTR = {"od"}; 
A_GISVEC(A68_VC ,OEKACTR,NEKACTR,2)
static A68_63   PEKACTR = {"is"}; 
A_GISVEC(A68_VC ,QEKACTR,PEKACTR,2)
static A68_63   REKACTR = {"op"}; 
A_GISVEC(A68_VC ,SEKACTR,REKACTR,2)
static A68_63   TEKACTR = {"ge"}; 
A_GISVEC(A68_VC ,UEKACTR,TEKACTR,2)
static A68_63   VEKACTR = {"by"}; 
A_GISVEC(A68_VC ,WEKACTR,VEKACTR,2)
static A68_63   XEKACTR = {"at"}; 
A_GISVEC(A68_VC ,YEKACTR,XEKACTR,2)
static A68_63   ZEKACTR = {"ne"}; 
A_GISVEC(A68_VC ,AFKACTR,ZEKACTR,2)
static A68_63   BFKACTR = {"up"}; 
A_GISVEC(A68_VC ,CFKACTR,BFKACTR,2)
static A68_63   DFKACTR = {"le"}; 
A_GISVEC(A68_VC ,EFKACTR,DFKACTR,2)
static A68_63   FFKACTR = {"eq"}; 
A_GISVEC(A68_VC ,GFKACTR,FFKACTR,2)
static A68_63   HFKACTR = {"im"}; 
A_GISVEC(A68_VC ,IFKACTR,HFKACTR,2)
static A68_63   JFKACTR = {"re"}; 
A_GISVEC(A68_VC ,KFKACTR,JFKACTR,2)
static A68_63   LFKACTR = {"go"}; 
A_GISVEC(A68_VC ,MFKACTR,LFKACTR,2)
static A68_63   NFKACTR = {"gt"}; 
A_GISVEC(A68_VC ,OFKACTR,NFKACTR,2)
static A68_63   PFKACTR = {"lt"}; 
A_GISVEC(A68_VC ,QFKACTR,PFKACTR,2)
static A68_63   RFKACTR = {"pr"}; 
A_GISVEC(A68_VC ,SFKACTR,RFKACTR,2)
static A68_64   VFKACTR = {"int"}; 
A_GISVEC(A68_VC ,WFKACTR,VFKACTR,3)
static A68_64   XFKACTR = {"ref"}; 
A_GISVEC(A68_VC ,YFKACTR,XFKACTR,3)
static A68_64   ZFKACTR = {"and"}; 
A_GISVEC(A68_VC ,AGKACTR,ZFKACTR,3)
static A68_64   BGKACTR = {"abs"}; 
A_GISVEC(A68_VC ,CGKACTR,BGKACTR,3)
static A68_64   DGKACTR = {"nil"}; 
A_GISVEC(A68_VC ,EGKACTR,DGKACTR,3)
static A68_64   FGKACTR = {"bin"}; 
A_GISVEC(A68_VC ,GGKACTR,FGKACTR,3)
static A68_64   HGKACTR = {"end"}; 
A_GISVEC(A68_VC ,IGKACTR,HGKACTR,3)
static A68_64   JGKACTR = {"for"}; 
A_GISVEC(A68_VC ,KGKACTR,JGKACTR,3)
static A68_64   LGKACTR = {"not"}; 
A_GISVEC(A68_VC ,MGKACTR,LGKACTR,3)
static A68_64   NGKACTR = {"out"}; 
A_GISVEC(A68_VC ,OGKACTR,NGKACTR,3)
static A68_64   PGKACTR = {"loc"}; 
A_GISVEC(A68_VC ,QGKACTR,PGKACTR,3)
static A68_64   RGKACTR = {"upb"}; 
A_GISVEC(A68_VC ,SGKACTR,RGKACTR,3)
static A68_64   TGKACTR = {"mod"}; 
A_GISVEC(A68_VC ,UGKACTR,TGKACTR,3)
static A68_64   VGKACTR = {"shr"}; 
A_GISVEC(A68_VC ,WGKACTR,VGKACTR,3)
static A68_64   XGKACTR = {"odd"}; 
A_GISVEC(A68_VC ,YGKACTR,XGKACTR,3)
static A68_64   ZGKACTR = {"shl"}; 
A_GISVEC(A68_VC ,AHKACTR,ZGKACTR,3)
static A68_64   BHKACTR = {"lwb"}; 
A_GISVEC(A68_VC ,CHKACTR,BHKACTR,3)
static A68_64   DHKACTR = {"arg"}; 
A_GISVEC(A68_VC ,EHKACTR,DHKACTR,3)
static A68_64   FHKACTR = {"use"}; 
A_GISVEC(A68_VC ,GHKACTR,FHKACTR,3)
static A68_65   JHKACTR = {"then"}; 
A_GISVEC(A68_VC ,KHKACTR,JHKACTR,4)
static A68_65   LHKACTR = {"else"}; 
A_GISVEC(A68_VC ,MHKACTR,LHKACTR,4)
static A68_65   NHKACTR = {"skip"}; 
A_GISVEC(A68_VC ,OHKACTR,NHKACTR,4)
static A68_65   PHKACTR = {"proc"}; 
A_GISVEC(A68_VC ,QHKACTR,PHKACTR,4)
static A68_65   RHKACTR = {"isnt"}; 
A_GISVEC(A68_VC ,SHKACTR,RHKACTR,4)
static A68_65   THKACTR = {"case"}; 
A_GISVEC(A68_VC ,UHKACTR,THKACTR,4)
static A68_65   VHKACTR = {"true"}; 
A_GISVEC(A68_VC ,WHKACTR,VHKACTR,4)
static A68_65   XHKACTR = {"esac"}; 
A_GISVEC(A68_VC ,YHKACTR,XHKACTR,4)
static A68_65   ZHKACTR = {"bool"}; 
A_GISVEC(A68_VC ,AIKACTR,ZHKACTR,4)
static A68_65   BIKACTR = {"void"}; 
A_GISVEC(A68_VC ,CIKACTR,BIKACTR,4)
static A68_65   DIKACTR = {"char"}; 
A_GISVEC(A68_VC ,EIKACTR,DIKACTR,4)
static A68_65   FIKACTR = {"goto"}; 
A_GISVEC(A68_VC ,GIKACTR,FIKACTR,4)
static A68_65   HIKACTR = {"elif"}; 
A_GISVEC(A68_VC ,IIKACTR,HIKACTR,4)
static A68_65   JIKACTR = {"bits"}; 
A_GISVEC(A68_VC ,KIKACTR,JIKACTR,4)
static A68_65   LIKACTR = {"mode"}; 
A_GISVEC(A68_VC ,MIKACTR,LIKACTR,4)
static A68_65   NIKACTR = {"from"}; 
A_GISVEC(A68_VC ,OIKACTR,NIKACTR,4)
static A68_65   PIKACTR = {"real"}; 
A_GISVEC(A68_VC ,QIKACTR,PIKACTR,4)
static A68_65   RIKACTR = {"repr"}; 
A_GISVEC(A68_VC ,SIKACTR,RIKACTR,4)
static A68_65   TIKACTR = {"leng"}; 
A_GISVEC(A68_VC ,UIKACTR,TIKACTR,4)
static A68_65   VIKACTR = {"long"}; 
A_GISVEC(A68_VC ,WIKACTR,VIKACTR,4)
static A68_65   XIKACTR = {"elem"}; 
A_GISVEC(A68_VC ,YIKACTR,XIKACTR,4)
static A68_65   ZIKACTR = {"exit"}; 
A_GISVEC(A68_VC ,AJKACTR,ZIKACTR,4)
static A68_65   BJKACTR = {"sign"}; 
A_GISVEC(A68_VC ,CJKACTR,BJKACTR,4)
static A68_65   DJKACTR = {"flex"}; 
A_GISVEC(A68_VC ,EJKACTR,DJKACTR,4)
static A68_65   FJKACTR = {"heap"}; 
A_GISVEC(A68_VC ,GJKACTR,FJKACTR,4)
static A68_65   HJKACTR = {"prio"}; 
A_GISVEC(A68_VC ,IJKACTR,HJKACTR,4)
static A68_65   JJKACTR = {"ouse"}; 
A_GISVEC(A68_VC ,KJKACTR,JJKACTR,4)
static A68_65   LJKACTR = {"over"}; 
A_GISVEC(A68_VC ,MJKACTR,LJKACTR,4)
static A68_65   NJKACTR = {"conj"}; 
A_GISVEC(A68_VC ,OJKACTR,NJKACTR,4)
static A68_65   PJKACTR = {"decs"}; 
A_GISVEC(A68_VC ,QJKACTR,PJKACTR,4)
static A68_65   RJKACTR = {"down"}; 
A_GISVEC(A68_VC ,SJKACTR,RJKACTR,4)
static A68_65   TJKACTR = {"here"}; 
A_GISVEC(A68_VC ,UJKACTR,TJKACTR,4)
static A68_65   VJKACTR = {"keep"}; 
A_GISVEC(A68_VC ,WJKACTR,VJKACTR,4)
static A68_65   XJKACTR = {"biop"}; 
A_GISVEC(A68_VC ,YJKACTR,XJKACTR,4)
static A68_65   ZJKACTR = {"orel"}; 
A_GISVEC(A68_VC ,AKKACTR,ZJKACTR,4)
static A68_65   BKKACTR = {"code"}; 
A_GISVEC(A68_VC ,CKKACTR,BKKACTR,4)
static A68_66   FKKACTR = {"while"}; 
A_GISVEC(A68_VC ,GKKACTR,FKKACTR,5)
static A68_66   HKKACTR = {"false"}; 
A_GISVEC(A68_VC ,IKKACTR,HKKACTR,5)
static A68_66   JKKACTR = {"begin"}; 
A_GISVEC(A68_VC ,KKKACTR,JKKACTR,5)
static A68_66   LKKACTR = {"union"}; 
A_GISVEC(A68_VC ,MKKACTR,LKKACTR,5)
static A68_66   NKKACTR = {"compl"}; 
A_GISVEC(A68_VC ,OKKACTR,NKKACTR,5)
static A68_66   PKKACTR = {"round"}; 
A_GISVEC(A68_VC ,QKKACTR,PKKACTR,5)
static A68_66   RKKACTR = {"divab"}; 
A_GISVEC(A68_VC ,SKKACTR,RKKACTR,5)
static A68_66   TKKACTR = {"short"}; 
A_GISVEC(A68_VC ,UKKACTR,TKKACTR,5)
static A68_66   VKKACTR = {"modab"}; 
A_GISVEC(A68_VC ,WKKACTR,VKKACTR,5)
static A68_66   XKKACTR = {"empty"}; 
A_GISVEC(A68_VC ,YKKACTR,XKKACTR,5)
static A68_66   ZKKACTR = {"alien"}; 
A_GISVEC(A68_VC ,ALKACTR,ZKKACTR,5)
static A68_66   BLKACTR = {"andth"}; 
A_GISVEC(A68_VC ,CLKACTR,BLKACTR,5)
static A68_66   DLKACTR = {"xtype"}; 
A_GISVEC(A68_VC ,ELKACTR,DLKACTR,5)
static A68_66   FLKACTR = {"ytype"}; 
A_GISVEC(A68_VC ,GLKACTR,FLKACTR,5)
static A68_67   JLKACTR = {"struct"}; 
A_GISVEC(A68_VC ,KLKACTR,JLKACTR,6)
static A68_67   LLKACTR = {"plusab"}; 
A_GISVEC(A68_VC ,MLKACTR,LLKACTR,6)
static A68_67   NLKACTR = {"entier"}; 
A_GISVEC(A68_VC ,OLKACTR,NLKACTR,6)
static A68_67   PLKACTR = {"finish"}; 
A_GISVEC(A68_VC ,QLKACTR,PLKACTR,6)
static A68_67   RLKACTR = {"format"}; 
A_GISVEC(A68_VC ,SLKACTR,RLKACTR,6)
static A68_67   TLKACTR = {"overab"}; 
A_GISVEC(A68_VC ,ULKACTR,TLKACTR,6)
static A68_67   VLKACTR = {"vector"}; 
A_GISVEC(A68_VC ,WLKACTR,VLKACTR,6)
static A68_67   XLKACTR = {"forall"}; 
A_GISVEC(A68_VC ,YLKACTR,XLKACTR,6)
static A68_67   ZLKACTR = {"plusto"}; 
A_GISVEC(A68_VC ,AMKACTR,ZLKACTR,6)
static A68_42   DMKACTR = {"minusab"}; 
A_GISVEC(A68_VC ,EMKACTR,DMKACTR,7)
static A68_42   FMKACTR = {"comment"}; 
A_GISVEC(A68_VC ,GMKACTR,FMKACTR,7)
static A68_42   HMKACTR = {"timesab"}; 
A_GISVEC(A68_VC ,IMKACTR,HMKACTR,7)
static A68_42   JMKACTR = {"program"}; 
A_GISVEC(A68_VC ,KMKACTR,JMKACTR,7)
static A68_42   LMKACTR = {"shorten"}; 
A_GISVEC(A68_VC ,MMKACTR,LMKACTR,7)
static A68_42   NMKACTR = {"compose"}; 
A_GISVEC(A68_VC ,OMKACTR,NMKACTR,7)
static A68_42   PMKACTR = {"context"}; 
A_GISVEC(A68_VC ,QMKACTR,PMKACTR,7)
static A68_42   RMKACTR = {"pragmat"}; 
A_GISVEC(A68_VC ,SMKACTR,RMKACTR,7)
static A68_68   VMKACTR = {"straight"}; 
A_GISVEC(A68_VC ,WMKACTR,VMKACTR,8)
static A68_62  ZMKACTR_shortshortboldset;
static A68_63   DNKACTR = {":="}; 
A_GISVEC(A68_VC ,ENKACTR,DNKACTR,2)
static A68_63   FNKACTR = {"/="}; 
A_GISVEC(A68_VC ,GNKACTR,FNKACTR,2)
static A68_63   HNKACTR = {">="}; 
A_GISVEC(A68_VC ,INKACTR,HNKACTR,2)
static A68_63   JNKACTR = {"<="}; 
A_GISVEC(A68_VC ,KNKACTR,JNKACTR,2)
static A68_63   LNKACTR = {"**"}; 
A_GISVEC(A68_VC ,MNKACTR,LNKACTR,2)
static A68_63   NNKACTR = {"%*"}; 
A_GISVEC(A68_VC ,ONKACTR,NNKACTR,2)
static A68_63   PNKACTR = {"+*"}; 
A_GISVEC(A68_VC ,QNKACTR,PNKACTR,2)
static A68_64   TNKACTR = {"+:="}; 
A_GISVEC(A68_VC ,UNKACTR,TNKACTR,3)
static A68_64   VNKACTR = {"-:="}; 
A_GISVEC(A68_VC ,WNKACTR,VNKACTR,3)
static A68_64   XNKACTR = {":=:"}; 
A_GISVEC(A68_VC ,YNKACTR,XNKACTR,3)
static A68_64   ZNKACTR = {"*:="}; 
A_GISVEC(A68_VC ,AOKACTR,ZNKACTR,3)
static A68_64   BOKACTR = {"/:="}; 
A_GISVEC(A68_VC ,COKACTR,BOKACTR,3)
static A68_64   DOKACTR = {"%:="}; 
A_GISVEC(A68_VC ,EOKACTR,DOKACTR,3)
static A68_64   FOKACTR = {"+=:"}; 
A_GISVEC(A68_VC ,GOKACTR,FOKACTR,3)
static A68_65   JOKACTR = {":/=:"}; 
A_GISVEC(A68_VC ,KOKACTR,JOKACTR,4)
static A68_65   LOKACTR = {"%*:="}; 
A_GISVEC(A68_VC ,MOKACTR,LOKACTR,4)
static A68_62  POKACTR_symbolset;
static A68_63   JPKACTR = {"or"}; 
A_GISVEC(A68_VC ,KPKACTR,JPKACTR,2)
static A68_64   NPKACTR = {"and"}; 
A_GISVEC(A68_VC ,OPKACTR,NPKACTR,3)

A_STATIC A68_VOID  AUJACTR_generator(A68_BOOL  ZTJACTR_anonymous, A68_57  *ReturnedValue);

A_STATIC A68_VOID  CUJACTR_generator(A68_BOOL  BUJACTR_anonymous, A68_VC  *ReturnedValue);

A68_INT  SOKACTR_lookup(A68_VC  Word, A68_BOOL  Bold);

A68_INT  HPKACTR_optboollookup(A68_VC  Word, A68_BOOL  Bold);

A_STATIC A68_VOID  CUJACTR_generator(A68_BOOL  BUJACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  DUJACTR;  /* clause result */
A68_VC  EUJACTR;  /* OPERATORS - dynamic generator */
{ 
EUJACTR.upb = 0 ;
( BUJACTR_anonymous? A_VLOC(A68_CHAR ,EUJACTR): A_VHEAP(A68_CHAR ,EUJACTR) );
DUJACTR = EUJACTR;
} 
*ReturnedValue = (DUJACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AUJACTR_generator(A68_BOOL  ZTJACTR_anonymous, A68_57  *ReturnedValue)
{ 
A68_60  FUJACTR_anonymous;
A68_VC  GUJACTR;  /* avoid structure result */
A68_59 * HUJACTR;  /* YIELD */
A68_57  IUJACTR;  /* clause result */
{ 
CUJACTR_generator( ZTJACTR_anonymous, &GUJACTR );
HUJACTR = (&((&FUJACTR_anonymous)->Word)) ;
(*HUJACTR) = GUJACTR;
IUJACTR = FUJACTR_anonymous;
} 
*ReturnedValue = (IUJACTR);
return;
} 
#undef NL

A68_INT  SOKACTR_lookup(A68_VC  Word, A68_BOOL  Bold)
{ 
A68_62  WOKACTR;  /* clause result */
A68_62  XOKACTR_set;
A68_INT  YOKACTR_answer;
A68_57  ZOKACTR_pair;
A68_INT  APKACTR;  /* YIELD */
A68_61  BPKACTR;  /* forall yield */
A68_57 * CPKACTR;  /* forall control - []x */
A68_INT  DPKACTR;  /* forall loop counter */
A68_INT  EPKACTR;  /* clause result */
A_PROC_ENTRY(lookup);
 /* line 345: */
 /* line 347: */
{ 
 /* line 348: */
if ( Bold )
{ 
 /* line 349: */
if ( MQIACTR_longlongoption )
{ 
WOKACTR = RDKACTR_longlongboldset;
} 
else
{ 
 /* line 350: */
 /* line 351: */
WOKACTR = ZMKACTR_shortshortboldset;
} 
} 
else
{ 
WOKACTR = POKACTR_symbolset;
} 
XOKACTR_set = WOKACTR;
 /* line 353: */
 /* line 355: */
 /* line 356: */
 /* line 358: */
if ( (Word.upb<=XOKACTR_set.dim[0].upb) )
{ 
 /* line 359: */
APKACTR = Word.upb ;
BPKACTR = A_R1INDEX(XOKACTR_set,APKACTR) ;
DPKACTR = BPKACTR.dim[0].upb - BPKACTR.dim[0].lwb;
CPKACTR = BPKACTR.data;
for (;DPKACTR-- >= 0;
(CPKACTR += BPKACTR.dim[0].stride
) )
{
ZOKACTR_pair = *CPKACTR;
 /* line 360: */
 /* line 361: */
 /* line 363: */
if ( A_VC_EQ(Word,ZOKACTR_pair.Word) )
{ 
YOKACTR_answer = ZOKACTR_pair.Value;
 /* line 364: */
 /* line 365: */
 /* line 366: */
goto VOKACTR_foundit;
} 
}
 /* line 367: */
} 
 /* line 372: */
if ( Bold )
{ 
EPKACTR = 156;
} 
else
{ 
 /* line 373: */
 /* line 375: */
EPKACTR = 176;
} 
goto TOKACTR;
VOKACTR_foundit:
 /* line 377: */
EPKACTR = YOKACTR_answer;
TOKACTR: ;
} 
A_PROC_EXIT(lookup);
return( EPKACTR );
} 
#undef NL

A68_INT  HPKACTR_optboollookup(A68_VC  Word, A68_BOOL  Bold)
{ 
A68_BOOL  IPKACTR;  /* optbool result */
A68_INT  LPKACTR;  /* clause result */
A68_BOOL  MPKACTR;  /* optbool result */
A_PROC_ENTRY(optboollookup);
 /* line 387: */
IPKACTR = Bold;
if ( IPKACTR )
{ /* line 388: */
IPKACTR = A_VC_EQ(Word,KPKACTR);
}
 /* line 390: */
if ( IPKACTR )
{ 
LPKACTR = 205;
} 
else
{ 
MPKACTR = Bold;
if ( MPKACTR )
{ /* line 391: */
MPKACTR = A_VC_EQ(Word,OPKACTR);
}
 /* line 393: */
if ( MPKACTR )
{ 
 /* line 394: */
LPKACTR = 204;
} 
else
{ 
 /* line 395: */
LPKACTR = SOKACTR_lookup(Word, Bold);
} 
} 
A_PROC_EXIT(optboollookup);
return( LPKACTR );
} 
#undef NL
 /* line 1: */
 /* line 3: */
void TTJACTR(void)   /* initialise DECS lookup */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.20-debian/liba68prel","-dir",".","lookup.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.20-debian/a68config/a68config.m","./environment.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_58  JUJACTR;  /* procedure value */
A68_69  KUJACTR;  /* collateral clause result */
A68_57  LUJACTR;  /* collateral clause result */
A68_VC  MUJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_61  NUJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_70  OUJACTR;  /* collateral clause result */
A68_61  LWJACTR;  /* OPERATORS - istruct to row */
A68_71  MWJACTR;  /* collateral clause result */
A68_61  ZXJACTR;  /* OPERATORS - istruct to row */
A68_72  AYJACTR;  /* collateral clause result */
A68_61  VAKACTR;  /* OPERATORS - istruct to row */
A68_73  WAKACTR;  /* collateral clause result */
A68_61  ZBKACTR;  /* OPERATORS - istruct to row */
A68_74  ACKACTR;  /* collateral clause result */
A68_61  TCKACTR;  /* OPERATORS - istruct to row */
A68_75  UCKACTR;  /* collateral clause result */
A68_61  LDKACTR;  /* OPERATORS - istruct to row */
A68_57  MDKACTR;  /* collateral clause result */
A68_61  PDKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_62  QDKACTR;  /* OPERATORS - istruct to row */
A68_69  SDKACTR;  /* collateral clause result */
A68_57  TDKACTR;  /* collateral clause result */
A68_VC  UDKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_61  VDKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_70  WDKACTR;  /* collateral clause result */
A68_61  TFKACTR;  /* OPERATORS - istruct to row */
A68_71  UFKACTR;  /* collateral clause result */
A68_61  HHKACTR;  /* OPERATORS - istruct to row */
A68_72  IHKACTR;  /* collateral clause result */
A68_61  DKKACTR;  /* OPERATORS - istruct to row */
A68_73  EKKACTR;  /* collateral clause result */
A68_61  HLKACTR;  /* OPERATORS - istruct to row */
A68_74  ILKACTR;  /* collateral clause result */
A68_61  BMKACTR;  /* OPERATORS - istruct to row */
A68_75  CMKACTR;  /* collateral clause result */
A68_61  TMKACTR;  /* OPERATORS - istruct to row */
A68_57  UMKACTR;  /* collateral clause result */
A68_61  XMKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_62  YMKACTR;  /* OPERATORS - istruct to row */
A68_76  ANKACTR;  /* collateral clause result */
A68_61  BNKACTR;  /* OPERATORS - vacuum */
A68_77  CNKACTR;  /* collateral clause result */
A68_61  RNKACTR;  /* OPERATORS - istruct to row */
A68_77  SNKACTR;  /* collateral clause result */
A68_61  HOKACTR;  /* OPERATORS - istruct to row */
A68_78  IOKACTR;  /* collateral clause result */
A68_61  NOKACTR;  /* OPERATORS - istruct to row */
A68_62  OOKACTR;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
HPIACTR();   /* USE environment */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.20-debian/src/lookup.a68";
A_config.translation_time = "Wed Apr 21 16:34:05 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "STJACTR (from seed file) ";
A_config.spec_change_time = "Wed Apr 21 16:34:05 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS lookup);
UEAALIB_a68config(LGAALIB_configinfo, XTJACTR);
 /* line 47: */
JUJACTR.fn.fn_global = AUJACTR_generator;
JUJACTR.nonlocals = A68_NIL;
YTJACTR_anonymous = JUJACTR;
 /* line 49: */
 /* line 50: */
 /* line 51: */
 /* line 52: */
LUJACTR.Word = A_HVEC(MUJACTR,'i',A68_CHAR );
 /* line 53: */
LUJACTR.Value = 217;
 /* line 54: */
KUJACTR.data[0] = A_HARR(NUJACTR,LUJACTR,A68_57 );
 /* line 55: */
OUJACTR.data[0].Word = QUJACTR;
 /* line 56: */
OUJACTR.data[0].Value = 116;
OUJACTR.data[1].Word = SUJACTR;
 /* line 57: */
OUJACTR.data[1].Value = 60;
OUJACTR.data[2].Word = UUJACTR;
 /* line 58: */
OUJACTR.data[2].Value = 52;
OUJACTR.data[3].Word = WUJACTR;
 /* line 59: */
OUJACTR.data[3].Value = 56;
OUJACTR.data[4].Word = YUJACTR;
 /* line 60: */
OUJACTR.data[4].Value = 147;
OUJACTR.data[5].Word = AVJACTR;
 /* line 61: */
OUJACTR.data[5].Value = 47;
OUJACTR.data[6].Word = CVJACTR;
 /* line 62: */
OUJACTR.data[6].Value = 230;
OUJACTR.data[7].Word = EVJACTR;
 /* line 63: */
OUJACTR.data[7].Value = 151;
OUJACTR.data[8].Word = GVJACTR;
 /* line 64: */
OUJACTR.data[8].Value = 145;
OUJACTR.data[9].Word = IVJACTR;
 /* line 65: */
OUJACTR.data[9].Value = 227;
OUJACTR.data[10].Word = KVJACTR;
 /* line 66: */
OUJACTR.data[10].Value = 167;
OUJACTR.data[11].Word = MVJACTR;
 /* line 67: */
OUJACTR.data[11].Value = 209;
OUJACTR.data[12].Word = OVJACTR;
 /* line 68: */
OUJACTR.data[12].Value = 150;
OUJACTR.data[13].Word = QVJACTR;
 /* line 69: */
OUJACTR.data[13].Value = 154;
OUJACTR.data[14].Word = SVJACTR;
 /* line 70: */
OUJACTR.data[14].Value = 211;
OUJACTR.data[15].Word = UVJACTR;
 /* line 71: */
OUJACTR.data[15].Value = 233;
OUJACTR.data[16].Word = WVJACTR;
 /* line 72: */
OUJACTR.data[16].Value = 208;
OUJACTR.data[17].Word = YVJACTR;
 /* line 73: */
OUJACTR.data[17].Value = 210;
OUJACTR.data[18].Word = AWJACTR;
 /* line 74: */
OUJACTR.data[18].Value = 251;
OUJACTR.data[19].Word = CWJACTR;
 /* line 75: */
OUJACTR.data[19].Value = 250;
OUJACTR.data[20].Word = EWJACTR;
 /* line 76: */
OUJACTR.data[20].Value = 115;
OUJACTR.data[21].Word = GWJACTR;
 /* line 77: */
OUJACTR.data[21].Value = 207;
OUJACTR.data[22].Word = IWJACTR;
 /* line 78: */
OUJACTR.data[22].Value = 206;
OUJACTR.data[23].Word = KWJACTR;
 /* line 79: */
 /* line 80: */
OUJACTR.data[23].Value = 65;
KUJACTR.data[1] = A_HIS1ARR(LWJACTR,OUJACTR,A68_57 ,24);
 /* line 81: */
MWJACTR.data[0].Word = OWJACTR;
 /* line 82: */
MWJACTR.data[0].Value = 138;
MWJACTR.data[1].Word = QWJACTR;
 /* line 83: */
MWJACTR.data[1].Value = 141;
MWJACTR.data[2].Word = SWJACTR;
 /* line 84: */
MWJACTR.data[2].Value = 229;
MWJACTR.data[3].Word = UWJACTR;
 /* line 85: */
MWJACTR.data[3].Value = 241;
MWJACTR.data[4].Word = WWJACTR;
 /* line 86: */
MWJACTR.data[4].Value = 121;
MWJACTR.data[5].Word = YWJACTR;
 /* line 87: */
MWJACTR.data[5].Value = 242;
MWJACTR.data[6].Word = AXJACTR;
 /* line 88: */
MWJACTR.data[6].Value = 55;
MWJACTR.data[7].Word = CXJACTR;
 /* line 89: */
MWJACTR.data[7].Value = 148;
MWJACTR.data[8].Word = EXJACTR;
 /* line 90: */
MWJACTR.data[8].Value = 240;
MWJACTR.data[9].Word = GXJACTR;
 /* line 91: */
MWJACTR.data[9].Value = 49;
MWJACTR.data[10].Word = IXJACTR;
 /* line 92: */
MWJACTR.data[10].Value = 157;
MWJACTR.data[11].Word = KXJACTR;
 /* line 93: */
MWJACTR.data[11].Value = 202;
MWJACTR.data[12].Word = MXJACTR;
 /* line 94: */
MWJACTR.data[12].Value = 215;
MWJACTR.data[13].Word = OXJACTR;
 /* line 95: */
MWJACTR.data[13].Value = 219;
MWJACTR.data[14].Word = QXJACTR;
 /* line 96: */
MWJACTR.data[14].Value = 246;
MWJACTR.data[15].Word = SXJACTR;
 /* line 97: */
MWJACTR.data[15].Value = 218;
MWJACTR.data[16].Word = UXJACTR;
 /* line 98: */
MWJACTR.data[16].Value = 203;
MWJACTR.data[17].Word = WXJACTR;
 /* line 99: */
MWJACTR.data[17].Value = 252;
MWJACTR.data[18].Word = YXJACTR;
 /* line 100: */
 /* line 101: */
MWJACTR.data[18].Value = 183;
KUJACTR.data[2] = A_HIS1ARR(ZXJACTR,MWJACTR,A68_57 ,19);
 /* line 102: */
AYJACTR.data[0].Word = CYJACTR;
 /* line 103: */
AYJACTR.data[0].Value = 46;
AYJACTR.data[1].Word = EYJACTR;
 /* line 104: */
AYJACTR.data[1].Value = 48;
AYJACTR.data[2].Word = GYJACTR;
 /* line 105: */
AYJACTR.data[2].Value = 122;
AYJACTR.data[3].Word = IYJACTR;
 /* line 106: */
AYJACTR.data[3].Value = 144;
AYJACTR.data[4].Word = KYJACTR;
 /* line 107: */
AYJACTR.data[4].Value = 228;
AYJACTR.data[5].Word = MYJACTR;
 /* line 108: */
AYJACTR.data[5].Value = 53;
AYJACTR.data[6].Word = OYJACTR;
 /* line 109: */
AYJACTR.data[6].Value = 119;
AYJACTR.data[7].Word = QYJACTR;
 /* line 110: */
AYJACTR.data[7].Value = 57;
AYJACTR.data[8].Word = SYJACTR;
 /* line 111: */
AYJACTR.data[8].Value = 134;
AYJACTR.data[9].Word = UYJACTR;
 /* line 112: */
AYJACTR.data[9].Value = 133;
AYJACTR.data[10].Word = WYJACTR;
 /* line 113: */
AYJACTR.data[10].Value = 135;
AYJACTR.data[11].Word = YYJACTR;
 /* line 114: */
AYJACTR.data[11].Value = 126;
AYJACTR.data[12].Word = AZJACTR;
 /* line 115: */
AYJACTR.data[12].Value = 43;
AYJACTR.data[13].Word = CZJACTR;
 /* line 116: */
AYJACTR.data[13].Value = 137;
AYJACTR.data[14].Word = EZJACTR;
 /* line 117: */
AYJACTR.data[14].Value = 165;
AYJACTR.data[15].Word = GZJACTR;
 /* line 118: */
AYJACTR.data[15].Value = 149;
AYJACTR.data[16].Word = IZJACTR;
 /* line 119: */
AYJACTR.data[16].Value = 139;
AYJACTR.data[17].Word = KZJACTR;
 /* line 120: */
AYJACTR.data[17].Value = 243;
AYJACTR.data[18].Word = MZJACTR;
 /* line 121: */
AYJACTR.data[18].Value = 244;
AYJACTR.data[19].Word = OZJACTR;
 /* line 122: */
AYJACTR.data[19].Value = 155;
AYJACTR.data[20].Word = QZJACTR;
 /* line 123: */
AYJACTR.data[20].Value = 220;
AYJACTR.data[21].Word = SZJACTR;
 /* line 124: */
AYJACTR.data[21].Value = 123;
AYJACTR.data[22].Word = UZJACTR;
 /* line 125: */
AYJACTR.data[22].Value = 247;
AYJACTR.data[23].Word = WZJACTR;
 /* line 126: */
AYJACTR.data[23].Value = 131;
AYJACTR.data[24].Word = YZJACTR;
 /* line 127: */
AYJACTR.data[24].Value = 178;
AYJACTR.data[25].Word = AAKACTR;
 /* line 128: */
AYJACTR.data[25].Value = 166;
AYJACTR.data[26].Word = CAKACTR;
 /* line 129: */
AYJACTR.data[26].Value = 44;
AYJACTR.data[27].Word = EAKACTR;
 /* line 130: */
AYJACTR.data[27].Value = 214;
AYJACTR.data[28].Word = GAKACTR;
 /* line 131: */
AYJACTR.data[28].Value = 253;
AYJACTR.data[29].Word = IAKACTR;
 /* line 132: */
AYJACTR.data[29].Value = 180;
AYJACTR.data[30].Word = KAKACTR;
 /* line 133: */
AYJACTR.data[30].Value = 219;
AYJACTR.data[31].Word = MAKACTR;
 /* line 134: */
AYJACTR.data[31].Value = 184;
AYJACTR.data[32].Word = OAKACTR;
 /* line 135: */
AYJACTR.data[32].Value = 113;
AYJACTR.data[33].Word = QAKACTR;
 /* line 136: */
AYJACTR.data[33].Value = 192;
AYJACTR.data[34].Word = SAKACTR;
 /* line 137: */
AYJACTR.data[34].Value = 205;
AYJACTR.data[35].Word = UAKACTR;
 /* line 138: */
 /* line 139: */
AYJACTR.data[35].Value = 162;
KUJACTR.data[3] = A_HIS1ARR(VAKACTR,AYJACTR,A68_57 ,36);
 /* line 140: */
WAKACTR.data[0].Word = YAKACTR;
 /* line 141: */
WAKACTR.data[0].Value = 152;
WAKACTR.data[1].Word = ABKACTR;
 /* line 142: */
WAKACTR.data[1].Value = 120;
WAKACTR.data[2].Word = CBKACTR;
 /* line 143: */
WAKACTR.data[2].Value = 51;
WAKACTR.data[3].Word = EBKACTR;
 /* line 144: */
WAKACTR.data[3].Value = 142;
WAKACTR.data[4].Word = GBKACTR;
 /* line 145: */
WAKACTR.data[4].Value = 140;
WAKACTR.data[5].Word = IBKACTR;
 /* line 146: */
WAKACTR.data[5].Value = 248;
WAKACTR.data[6].Word = KBKACTR;
 /* line 147: */
WAKACTR.data[6].Value = 226;
WAKACTR.data[7].Word = MBKACTR;
 /* line 148: */
WAKACTR.data[7].Value = 172;
WAKACTR.data[8].Word = OBKACTR;
 /* line 149: */
WAKACTR.data[8].Value = 225;
WAKACTR.data[9].Word = QBKACTR;
 /* line 150: */
WAKACTR.data[9].Value = 189;
WAKACTR.data[10].Word = SBKACTR;
 /* line 151: */
WAKACTR.data[10].Value = 112;
WAKACTR.data[11].Word = UBKACTR;
 /* line 152: */
WAKACTR.data[11].Value = 204;
WAKACTR.data[12].Word = WBKACTR;
 /* line 153: */
WAKACTR.data[12].Value = 194;
WAKACTR.data[13].Word = YBKACTR;
 /* line 155: */
 /* line 156: */
WAKACTR.data[13].Value = 195;
KUJACTR.data[4] = A_HIS1ARR(ZBKACTR,WAKACTR,A68_57 ,14);
 /* line 157: */
ACKACTR.data[0].Word = CCKACTR;
 /* line 158: */
ACKACTR.data[0].Value = 143;
ACKACTR.data[1].Word = ECKACTR;
 /* line 159: */
ACKACTR.data[1].Value = 221;
ACKACTR.data[2].Word = GCKACTR;
 /* line 160: */
ACKACTR.data[2].Value = 249;
ACKACTR.data[3].Word = ICKACTR;
 /* line 161: */
ACKACTR.data[3].Value = 174;
ACKACTR.data[4].Word = KCKACTR;
 /* line 162: */
ACKACTR.data[4].Value = 136;
ACKACTR.data[5].Word = MCKACTR;
 /* line 163: */
ACKACTR.data[5].Value = 224;
ACKACTR.data[6].Word = OCKACTR;
 /* line 164: */
ACKACTR.data[6].Value = 164;
ACKACTR.data[7].Word = QCKACTR;
 /* line 165: */
ACKACTR.data[7].Value = 170;
ACKACTR.data[8].Word = SCKACTR;
 /* line 166: */
 /* line 167: */
ACKACTR.data[8].Value = 231;
KUJACTR.data[5] = A_HIS1ARR(TCKACTR,ACKACTR,A68_57 ,9);
 /* line 168: */
UCKACTR.data[0].Word = WCKACTR;
 /* line 169: */
UCKACTR.data[0].Value = 222;
UCKACTR.data[1].Word = YCKACTR;
 /* line 170: */
UCKACTR.data[1].Value = 61;
UCKACTR.data[2].Word = ADKACTR;
 /* line 171: */
UCKACTR.data[2].Value = 223;
UCKACTR.data[3].Word = CDKACTR;
 /* line 172: */
UCKACTR.data[3].Value = 179;
UCKACTR.data[4].Word = EDKACTR;
 /* line 173: */
UCKACTR.data[4].Value = 245;
UCKACTR.data[5].Word = GDKACTR;
 /* line 174: */
UCKACTR.data[5].Value = 181;
UCKACTR.data[6].Word = IDKACTR;
 /* line 175: */
UCKACTR.data[6].Value = 182;
UCKACTR.data[7].Word = KDKACTR;
 /* line 176: */
 /* line 177: */
UCKACTR.data[7].Value = 66;
KUJACTR.data[6] = A_HIS1ARR(LDKACTR,UCKACTR,A68_57 ,8);
 /* line 178: */
MDKACTR.Word = ODKACTR;
 /* line 179: */
MDKACTR.Value = 169;
 /* line 180: */
KUJACTR.data[7] = A_HARR(PDKACTR,MDKACTR,A68_57 );
RDKACTR_longlongboldset = A_HIS1ARR(QDKACTR,KUJACTR,A68_61 ,8);
 /* line 182: */
 /* line 183: */
 /* line 184: */
 /* line 185: */
TDKACTR.Word = A_HVEC(UDKACTR,'i',A68_CHAR );
 /* line 186: */
TDKACTR.Value = 217;
 /* line 187: */
SDKACTR.data[0] = A_HARR(VDKACTR,TDKACTR,A68_57 );
 /* line 188: */
WDKACTR.data[0].Word = YDKACTR;
 /* line 189: */
WDKACTR.data[0].Value = 116;
WDKACTR.data[1].Word = AEKACTR;
 /* line 190: */
WDKACTR.data[1].Value = 60;
WDKACTR.data[2].Word = CEKACTR;
 /* line 191: */
WDKACTR.data[2].Value = 52;
WDKACTR.data[3].Word = EEKACTR;
 /* line 192: */
WDKACTR.data[3].Value = 56;
WDKACTR.data[4].Word = GEKACTR;
 /* line 193: */
WDKACTR.data[4].Value = 147;
WDKACTR.data[5].Word = IEKACTR;
 /* line 194: */
WDKACTR.data[5].Value = 47;
WDKACTR.data[6].Word = KEKACTR;
 /* line 195: */
WDKACTR.data[6].Value = 230;
WDKACTR.data[7].Word = MEKACTR;
 /* line 196: */
WDKACTR.data[7].Value = 151;
WDKACTR.data[8].Word = OEKACTR;
 /* line 197: */
WDKACTR.data[8].Value = 145;
WDKACTR.data[9].Word = QEKACTR;
 /* line 198: */
WDKACTR.data[9].Value = 227;
WDKACTR.data[10].Word = SEKACTR;
 /* line 199: */
WDKACTR.data[10].Value = 167;
WDKACTR.data[11].Word = UEKACTR;
 /* line 200: */
WDKACTR.data[11].Value = 209;
WDKACTR.data[12].Word = WEKACTR;
 /* line 201: */
WDKACTR.data[12].Value = 150;
WDKACTR.data[13].Word = YEKACTR;
 /* line 202: */
WDKACTR.data[13].Value = 154;
WDKACTR.data[14].Word = AFKACTR;
 /* line 203: */
WDKACTR.data[14].Value = 211;
WDKACTR.data[15].Word = CFKACTR;
 /* line 204: */
WDKACTR.data[15].Value = 233;
WDKACTR.data[16].Word = EFKACTR;
 /* line 205: */
WDKACTR.data[16].Value = 208;
WDKACTR.data[17].Word = GFKACTR;
 /* line 206: */
WDKACTR.data[17].Value = 210;
WDKACTR.data[18].Word = IFKACTR;
 /* line 207: */
WDKACTR.data[18].Value = 251;
WDKACTR.data[19].Word = KFKACTR;
 /* line 208: */
WDKACTR.data[19].Value = 250;
WDKACTR.data[20].Word = MFKACTR;
 /* line 209: */
WDKACTR.data[20].Value = 115;
WDKACTR.data[21].Word = OFKACTR;
 /* line 210: */
WDKACTR.data[21].Value = 207;
WDKACTR.data[22].Word = QFKACTR;
 /* line 211: */
WDKACTR.data[22].Value = 206;
WDKACTR.data[23].Word = SFKACTR;
 /* line 212: */
 /* line 213: */
WDKACTR.data[23].Value = 65;
SDKACTR.data[1] = A_HIS1ARR(TFKACTR,WDKACTR,A68_57 ,24);
 /* line 214: */
UFKACTR.data[0].Word = WFKACTR;
 /* line 215: */
UFKACTR.data[0].Value = 138;
UFKACTR.data[1].Word = YFKACTR;
 /* line 216: */
UFKACTR.data[1].Value = 141;
UFKACTR.data[2].Word = AGKACTR;
 /* line 217: */
UFKACTR.data[2].Value = 229;
UFKACTR.data[3].Word = CGKACTR;
 /* line 218: */
UFKACTR.data[3].Value = 241;
UFKACTR.data[4].Word = EGKACTR;
 /* line 219: */
UFKACTR.data[4].Value = 121;
UFKACTR.data[5].Word = GGKACTR;
 /* line 220: */
UFKACTR.data[5].Value = 242;
UFKACTR.data[6].Word = IGKACTR;
 /* line 221: */
UFKACTR.data[6].Value = 55;
UFKACTR.data[7].Word = KGKACTR;
 /* line 222: */
UFKACTR.data[7].Value = 148;
UFKACTR.data[8].Word = MGKACTR;
 /* line 223: */
UFKACTR.data[8].Value = 240;
UFKACTR.data[9].Word = OGKACTR;
 /* line 224: */
UFKACTR.data[9].Value = 49;
UFKACTR.data[10].Word = QGKACTR;
 /* line 225: */
UFKACTR.data[10].Value = 157;
UFKACTR.data[11].Word = SGKACTR;
 /* line 226: */
UFKACTR.data[11].Value = 202;
UFKACTR.data[12].Word = UGKACTR;
 /* line 227: */
UFKACTR.data[12].Value = 215;
UFKACTR.data[13].Word = WGKACTR;
 /* line 228: */
UFKACTR.data[13].Value = 219;
UFKACTR.data[14].Word = YGKACTR;
 /* line 229: */
UFKACTR.data[14].Value = 246;
UFKACTR.data[15].Word = AHKACTR;
 /* line 230: */
UFKACTR.data[15].Value = 218;
UFKACTR.data[16].Word = CHKACTR;
 /* line 231: */
UFKACTR.data[16].Value = 203;
UFKACTR.data[17].Word = EHKACTR;
 /* line 232: */
UFKACTR.data[17].Value = 252;
UFKACTR.data[18].Word = GHKACTR;
 /* line 233: */
 /* line 234: */
UFKACTR.data[18].Value = 183;
SDKACTR.data[2] = A_HIS1ARR(HHKACTR,UFKACTR,A68_57 ,19);
 /* line 235: */
IHKACTR.data[0].Word = KHKACTR;
 /* line 236: */
IHKACTR.data[0].Value = 46;
IHKACTR.data[1].Word = MHKACTR;
 /* line 237: */
IHKACTR.data[1].Value = 48;
IHKACTR.data[2].Word = OHKACTR;
 /* line 238: */
IHKACTR.data[2].Value = 122;
IHKACTR.data[3].Word = QHKACTR;
 /* line 239: */
IHKACTR.data[3].Value = 144;
IHKACTR.data[4].Word = SHKACTR;
 /* line 240: */
IHKACTR.data[4].Value = 228;
IHKACTR.data[5].Word = UHKACTR;
 /* line 241: */
IHKACTR.data[5].Value = 53;
IHKACTR.data[6].Word = WHKACTR;
 /* line 242: */
IHKACTR.data[6].Value = 119;
IHKACTR.data[7].Word = YHKACTR;
 /* line 243: */
IHKACTR.data[7].Value = 57;
IHKACTR.data[8].Word = AIKACTR;
 /* line 244: */
IHKACTR.data[8].Value = 134;
IHKACTR.data[9].Word = CIKACTR;
 /* line 245: */
IHKACTR.data[9].Value = 133;
IHKACTR.data[10].Word = EIKACTR;
 /* line 246: */
IHKACTR.data[10].Value = 135;
IHKACTR.data[11].Word = GIKACTR;
 /* line 247: */
IHKACTR.data[11].Value = 126;
IHKACTR.data[12].Word = IIKACTR;
 /* line 248: */
IHKACTR.data[12].Value = 43;
IHKACTR.data[13].Word = KIKACTR;
 /* line 249: */
IHKACTR.data[13].Value = 137;
IHKACTR.data[14].Word = MIKACTR;
 /* line 250: */
IHKACTR.data[14].Value = 165;
IHKACTR.data[15].Word = OIKACTR;
 /* line 251: */
IHKACTR.data[15].Value = 149;
IHKACTR.data[16].Word = QIKACTR;
 /* line 252: */
IHKACTR.data[16].Value = 139;
IHKACTR.data[17].Word = SIKACTR;
 /* line 253: */
IHKACTR.data[17].Value = 243;
IHKACTR.data[18].Word = UIKACTR;
 /* line 254: */
IHKACTR.data[18].Value = 245;
IHKACTR.data[19].Word = WIKACTR;
 /* line 255: */
IHKACTR.data[19].Value = 172;
IHKACTR.data[20].Word = YIKACTR;
 /* line 256: */
IHKACTR.data[20].Value = 220;
IHKACTR.data[21].Word = AJKACTR;
 /* line 257: */
IHKACTR.data[21].Value = 123;
IHKACTR.data[22].Word = CJKACTR;
 /* line 258: */
IHKACTR.data[22].Value = 247;
IHKACTR.data[23].Word = EJKACTR;
 /* line 259: */
IHKACTR.data[23].Value = 131;
IHKACTR.data[24].Word = GJKACTR;
 /* line 260: */
IHKACTR.data[24].Value = 178;
IHKACTR.data[25].Word = IJKACTR;
 /* line 261: */
IHKACTR.data[25].Value = 166;
IHKACTR.data[26].Word = KJKACTR;
 /* line 262: */
IHKACTR.data[26].Value = 44;
IHKACTR.data[27].Word = MJKACTR;
 /* line 263: */
IHKACTR.data[27].Value = 214;
IHKACTR.data[28].Word = OJKACTR;
 /* line 264: */
IHKACTR.data[28].Value = 253;
IHKACTR.data[29].Word = QJKACTR;
 /* line 265: */
IHKACTR.data[29].Value = 180;
IHKACTR.data[30].Word = SJKACTR;
 /* line 266: */
IHKACTR.data[30].Value = 219;
IHKACTR.data[31].Word = UJKACTR;
 /* line 267: */
IHKACTR.data[31].Value = 184;
IHKACTR.data[32].Word = WJKACTR;
 /* line 268: */
IHKACTR.data[32].Value = 113;
IHKACTR.data[33].Word = YJKACTR;
 /* line 269: */
IHKACTR.data[33].Value = 192;
IHKACTR.data[34].Word = AKKACTR;
 /* line 270: */
IHKACTR.data[34].Value = 205;
IHKACTR.data[35].Word = CKKACTR;
 /* line 271: */
 /* line 272: */
IHKACTR.data[35].Value = 162;
SDKACTR.data[3] = A_HIS1ARR(DKKACTR,IHKACTR,A68_57 ,36);
 /* line 273: */
EKKACTR.data[0].Word = GKKACTR;
 /* line 274: */
EKKACTR.data[0].Value = 152;
EKKACTR.data[1].Word = IKKACTR;
 /* line 275: */
EKKACTR.data[1].Value = 120;
EKKACTR.data[2].Word = KKKACTR;
 /* line 276: */
EKKACTR.data[2].Value = 51;
EKKACTR.data[3].Word = MKKACTR;
 /* line 277: */
EKKACTR.data[3].Value = 142;
EKKACTR.data[4].Word = OKKACTR;
 /* line 278: */
EKKACTR.data[4].Value = 140;
EKKACTR.data[5].Word = QKKACTR;
 /* line 279: */
EKKACTR.data[5].Value = 248;
EKKACTR.data[6].Word = SKKACTR;
 /* line 280: */
EKKACTR.data[6].Value = 226;
EKKACTR.data[7].Word = UKKACTR;
 /* line 281: */
EKKACTR.data[7].Value = 155;
EKKACTR.data[8].Word = WKKACTR;
 /* line 282: */
EKKACTR.data[8].Value = 225;
EKKACTR.data[9].Word = YKKACTR;
 /* line 283: */
EKKACTR.data[9].Value = 189;
EKKACTR.data[10].Word = ALKACTR;
 /* line 284: */
EKKACTR.data[10].Value = 112;
EKKACTR.data[11].Word = CLKACTR;
 /* line 285: */
EKKACTR.data[11].Value = 204;
EKKACTR.data[12].Word = ELKACTR;
 /* line 286: */
EKKACTR.data[12].Value = 194;
EKKACTR.data[13].Word = GLKACTR;
 /* line 288: */
 /* line 289: */
EKKACTR.data[13].Value = 195;
SDKACTR.data[4] = A_HIS1ARR(HLKACTR,EKKACTR,A68_57 ,14);
 /* line 290: */
ILKACTR.data[0].Word = KLKACTR;
 /* line 291: */
ILKACTR.data[0].Value = 143;
ILKACTR.data[1].Word = MLKACTR;
 /* line 292: */
ILKACTR.data[1].Value = 221;
ILKACTR.data[2].Word = OLKACTR;
 /* line 293: */
ILKACTR.data[2].Value = 249;
ILKACTR.data[3].Word = QLKACTR;
 /* line 294: */
ILKACTR.data[3].Value = 174;
ILKACTR.data[4].Word = SLKACTR;
 /* line 295: */
ILKACTR.data[4].Value = 136;
ILKACTR.data[5].Word = ULKACTR;
 /* line 296: */
ILKACTR.data[5].Value = 224;
ILKACTR.data[6].Word = WLKACTR;
 /* line 297: */
ILKACTR.data[6].Value = 164;
ILKACTR.data[7].Word = YLKACTR;
 /* line 298: */
ILKACTR.data[7].Value = 170;
ILKACTR.data[8].Word = AMKACTR;
 /* line 299: */
 /* line 300: */
ILKACTR.data[8].Value = 231;
SDKACTR.data[5] = A_HIS1ARR(BMKACTR,ILKACTR,A68_57 ,9);
 /* line 301: */
CMKACTR.data[0].Word = EMKACTR;
 /* line 302: */
CMKACTR.data[0].Value = 222;
CMKACTR.data[1].Word = GMKACTR;
 /* line 303: */
CMKACTR.data[1].Value = 61;
CMKACTR.data[2].Word = IMKACTR;
 /* line 304: */
CMKACTR.data[2].Value = 223;
CMKACTR.data[3].Word = KMKACTR;
 /* line 305: */
CMKACTR.data[3].Value = 179;
CMKACTR.data[4].Word = MMKACTR;
 /* line 306: */
CMKACTR.data[4].Value = 244;
CMKACTR.data[5].Word = OMKACTR;
 /* line 307: */
CMKACTR.data[5].Value = 181;
CMKACTR.data[6].Word = QMKACTR;
 /* line 308: */
CMKACTR.data[6].Value = 182;
CMKACTR.data[7].Word = SMKACTR;
 /* line 309: */
 /* line 310: */
CMKACTR.data[7].Value = 66;
SDKACTR.data[6] = A_HIS1ARR(TMKACTR,CMKACTR,A68_57 ,8);
 /* line 311: */
UMKACTR.Word = WMKACTR;
 /* line 312: */
UMKACTR.Value = 169;
 /* line 313: */
SDKACTR.data[7] = A_HARR(XMKACTR,UMKACTR,A68_57 );
ZMKACTR_shortshortboldset = A_HIS1ARR(YMKACTR,SDKACTR,A68_61 ,8);
 /* line 315: */
 /* line 316: */
 /* line 317: */
 /* line 318: */
 /* line 319: */
ANKACTR.data[0] = A_R1VAC(BNKACTR);
 /* line 320: */
CNKACTR.data[0].Word = ENKACTR;
 /* line 321: */
CNKACTR.data[0].Value = 163;
CNKACTR.data[1].Word = GNKACTR;
 /* line 322: */
CNKACTR.data[1].Value = 211;
CNKACTR.data[2].Word = INKACTR;
 /* line 323: */
CNKACTR.data[2].Value = 209;
CNKACTR.data[3].Word = KNKACTR;
 /* line 324: */
CNKACTR.data[3].Value = 208;
CNKACTR.data[4].Word = MNKACTR;
 /* line 325: */
CNKACTR.data[4].Value = 216;
CNKACTR.data[5].Word = ONKACTR;
 /* line 326: */
CNKACTR.data[5].Value = 215;
CNKACTR.data[6].Word = QNKACTR;
 /* line 327: */
 /* line 328: */
CNKACTR.data[6].Value = 217;
ANKACTR.data[1] = A_HIS1ARR(RNKACTR,CNKACTR,A68_57 ,7);
 /* line 329: */
SNKACTR.data[0].Word = UNKACTR;
 /* line 330: */
SNKACTR.data[0].Value = 221;
SNKACTR.data[1].Word = WNKACTR;
 /* line 331: */
SNKACTR.data[1].Value = 222;
SNKACTR.data[2].Word = YNKACTR;
 /* line 332: */
SNKACTR.data[2].Value = 227;
SNKACTR.data[3].Word = AOKACTR;
 /* line 333: */
SNKACTR.data[3].Value = 223;
SNKACTR.data[4].Word = COKACTR;
 /* line 334: */
SNKACTR.data[4].Value = 226;
SNKACTR.data[5].Word = EOKACTR;
 /* line 335: */
SNKACTR.data[5].Value = 224;
SNKACTR.data[6].Word = GOKACTR;
 /* line 336: */
 /* line 337: */
SNKACTR.data[6].Value = 231;
ANKACTR.data[2] = A_HIS1ARR(HOKACTR,SNKACTR,A68_57 ,7);
 /* line 338: */
IOKACTR.data[0].Word = KOKACTR;
 /* line 339: */
IOKACTR.data[0].Value = 228;
IOKACTR.data[1].Word = MOKACTR;
 /* line 340: */
 /* line 341: */
IOKACTR.data[1].Value = 225;
ANKACTR.data[3] = A_HIS1ARR(NOKACTR,IOKACTR,A68_57 ,2);
POKACTR_symbolset = A_HIS1ARR(OOKACTR,ANKACTR,A68_61 ,4);
 /* line 344: */
 /* line 380: */
 /* line 409: */
 /* line 411: */
 /* line 413: */
/*SKIP*/;
A_PROC_EXIT(DECS lookup);
} 
#undef NL
/* end of translation of lookup.a68 */
