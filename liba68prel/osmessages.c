/* UNAME:TIBAOSF */
#include <algol68/Asupport.h>
struct A68t31{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t32 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t31  A68_31 ;    /* STRUCT(INT,REF MODE32,BITS)  */
A_VECTOR(struct A68t34 ,A68t33);
typedef struct A68t33  A68_33 ;    /* VECTOR [] MODE34 */
struct A68t34{
struct A68t31  Msgno;
A68_VC  Text;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(MODE31,REF MODE26)  */
struct A68t32{
A68_VC  Name;
struct A68t33  Messages;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(REF MODE26,REF MODE33)  */

A_PROCEDURE(A68_VOID ,A68t35,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_VC ,A68t36);
typedef struct A68t36  A68_36 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t37,(A68_BOOL ,struct A68t36 *),(A68_BOOL ,struct A68t36 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(BOOL) MODE36 */

A_PROCEDURE(A68_VOID ,A68t38,(struct A68t31 ,struct A68t36 ),(struct A68t31 ,struct A68t36 ,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE31,MODE36) VOID */
A_VECTOR(struct A68t41 ,A68t40);
typedef struct A68t40  A68_40 ;    /* VECTOR [] MODE41 */
struct A68t41{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t39{
A68_VC  Name;
struct A68t33  Messages;
A68_BOOL * Initialised;
struct A68t40  Setup;
};
typedef struct A68t39  A68_39 ;    /* STRUCT(MODE26,REF MODE33,REF BOOL,MODE40)  */

A_PROCEDURE(A68_VOID ,A68t42,(A68_BOOL ,struct A68t39 *),(A68_BOOL ,struct A68t39 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(BOOL) MODE39 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t44);
typedef struct A68t44  A68_44 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t36 ,struct A68t44 *),(struct A68t36 ,struct A68t44 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE36) MODE44 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t44 ,struct A68t36 *),(struct A68t44 ,struct A68t36 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(MODE44) MODE36 */
struct A68t48 ;

A_PROCEDURE(A68_BOOL ,A68t47,(struct A68t48 ),(struct A68t48 ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE48) BOOL */
struct A68t48 { A68_INT mode; union {
struct A68t31  mode1;
struct A68t34  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t48  A68_48 ;    /* UNION(MODE31,MODE34)  */

A_PROCEDURE(A68_INT ,A68t49,(struct A68t31 ),(struct A68t31 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE31) INT */

A_PROCEDURE(A68_VOID ,A68t50,(A68_INT ,struct A68t39 ,struct A68t31 *),(A68_INT ,struct A68t39 ,struct A68t31 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(INT,MODE39) MODE31 */

A_PROCEDURE(A68_BOOL ,A68t51,(struct A68t31 ,struct A68t39 ),(struct A68t31 ,struct A68t39 ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE31,MODE39) BOOL */

A_PROCEDURE(A68_VOID ,A68t52,(struct A68t31 ,struct A68t36 ,struct A68t34 *),(struct A68t31 ,struct A68t36 ,struct A68t34 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE31,MODE36) MODE34 */

A_PROCEDURE(A68_VOID ,A68t53,(void),(void *));
typedef struct A68t53  A68_53 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t53 ),(struct A68t53 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t55,(A68_VC ),(A68_VC ,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t56,(struct A68t55 ),(struct A68t55 ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE55) VOID */

A_PROCEDURE(A68_VOID ,A68t57,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t58);
typedef struct A68t58  A68_58 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t59);
typedef struct A68t59  A68_59 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t60,(A68_BOOL ,struct A68t33 *),(A68_BOOL ,struct A68t33 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(BOOL) MODE33 */
A_ISTRUCT(A68_CHAR ,41,A68t61);
typedef struct A68t61  A68_61 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t62);
typedef struct A68t62  A68_62 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t63);
typedef struct A68t63  A68_63 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t64);
typedef struct A68t64  A68_64 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t65);
typedef struct A68t65  A68_65 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t66);
typedef struct A68t66  A68_66 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t67);
typedef struct A68t67  A68_67 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t68);
typedef struct A68t68  A68_68 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t69);
typedef struct A68t69  A68_69 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t70);
typedef struct A68t70  A68_70 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t71);
typedef struct A68t71  A68_71 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t72);
typedef struct A68t72  A68_72 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,69,A68t73);
typedef struct A68t73  A68_73 ;    /* STRUCT 69 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t74);
typedef struct A68t74  A68_74 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t75);
typedef struct A68t75  A68_75 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,59,A68t76);
typedef struct A68t76  A68_76 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t77);
typedef struct A68t77  A68_77 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t78);
typedef struct A68t78  A68_78 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t79);
typedef struct A68t79  A68_79 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t80);
typedef struct A68t80  A68_80 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(struct A68t41 ,27,A68t81);
typedef struct A68t81  A68_81 ;    /* STRUCT 27 MODE41 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_INT ,struct A68t31 *),(A68_INT ,struct A68t31 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(INT) MODE31 */

A_PROCEDURE(A68_BOOL ,A68t83,(struct A68t31 ),(struct A68t31 ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE31) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from messageproc --- */
extern A68_BITS  JVAAOSF_system_class;
extern A68_BITS  KVAAOSF_fatal_class;
extern A68_BITS  LVAAOSF_user_class;
extern A68_VOID  XYAAOSF_make_msgno(A68_INT ,struct A68t39 ,A68_31 *);
extern A68_BOOL  YZAAOSF_is_facility_msg(struct A68t31 ,struct A68t39 );
/* --- End of imports from messageproc --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ZRAAOSF(void);   /* messageproc */
/* --- end of DECS initialisation functions --- */
static A68_58   XIBAOSF = {"$Id: osmessages.a68,v 1.1.1.1 2001-05-07 10:16:12 sian Exp $"}; 
A_GISVEC(A68_VC ,YIBAOSF,XIBAOSF,60)
#define ZIBAOSF_max_os_messages 57
static A68_59   BJBAOSF = {"osinterface"}; 
A_GISVEC(A68_VC ,CJBAOSF,BJBAOSF,11)
static A68_61   KJBAOSF = {"Aborted due to unexpected VAX/VMS error *"}; 
A_GISVEC(A68_VC ,LJBAOSF,KJBAOSF,41)
static A68_62   MJBAOSF = {"File \"*\" not found"}; 
A_GISVEC(A68_VC ,NJBAOSF,MJBAOSF,18)
static A68_63   OJBAOSF = {"Error in file name \"*\""}; 
A_GISVEC(A68_VC ,PJBAOSF,OJBAOSF,22)
static A68_64   QJBAOSF = {"File \"*\" locked by another user"}; 
A_GISVEC(A68_VC ,RJBAOSF,QJBAOSF,31)
static A68_65   SJBAOSF = {"Could not open file \"*\""}; 
A_GISVEC(A68_VC ,TJBAOSF,SJBAOSF,23)
static A68_66   UJBAOSF = {"Insufficient virtual memory available"}; 
A_GISVEC(A68_VC ,VJBAOSF,UJBAOSF,37)
static A68_67   WJBAOSF = {"get_ethernet_address - length = *"}; 
A_GISVEC(A68_VC ,XJBAOSF,WJBAOSF,33)
static A68_68   YJBAOSF = {"Insufficient virtual memory"}; 
A_GISVEC(A68_VC ,ZJBAOSF,YJBAOSF,27)
static A68_65   AKBAOSF = {"Cannot spawn subprocess"}; 
A_GISVEC(A68_VC ,BKBAOSF,AKBAOSF,23)
static A68_69   CKBAOSF = {"File name  \"*\"  should not contain wildcards"}; 
A_GISVEC(A68_VC ,DKBAOSF,CKBAOSF,44)
static A68_70   EKBAOSF = {"Deadlock detected whilst trying to lock file \"*\""}; 
A_GISVEC(A68_VC ,FKBAOSF,EKBAOSF,48)
static A68_71   GKBAOSF = {"Error whilst trying to lock file \"*\""}; 
A_GISVEC(A68_VC ,HKBAOSF,GKBAOSF,36)
static A68_72   IKBAOSF = {"Unable to lock file : \"*\""}; 
A_GISVEC(A68_VC ,JKBAOSF,IKBAOSF,25)
static A68_69   KKBAOSF = {"fault with sys_readef OF exclusive_open_file"}; 
A_GISVEC(A68_VC ,LKBAOSF,KKBAOSF,44)
static A68_73   MKBAOSF = {"Insufficient privilege. Ask your System Manager for SYSLCK privilege."}; 
A_GISVEC(A68_VC ,NKBAOSF,MKBAOSF,69)
static A68_74   OKBAOSF = {"exclusive_open: *"}; 
A_GISVEC(A68_VC ,PKBAOSF,OKBAOSF,17)
static A68_75   QKBAOSF = {"Line too long"}; 
A_GISVEC(A68_VC ,RKBAOSF,QKBAOSF,13)
static A68_59   SKBAOSF = {"End of file"}; 
A_GISVEC(A68_VC ,TKBAOSF,SKBAOSF,11)
static A68_76   UKBAOSF = {"You can only trap user interrupts in an interactive session"}; 
A_GISVEC(A68_VC ,VKBAOSF,UKBAOSF,59)
static A68_77   WKBAOSF = {"Operation aborted after user interrupt"}; 
A_GISVEC(A68_VC ,XKBAOSF,WKBAOSF,38)
static A68_59   YKBAOSF = {"*: No match"}; 
A_GISVEC(A68_VC ,ZKBAOSF,YKBAOSF,11)
static A68_78   ALBAOSF = {"*: Ambiguous"}; 
A_GISVEC(A68_VC ,BLBAOSF,ALBAOSF,12)
static A68_79   CLBAOSF = {"parse_filename: Buffer overflow expanding *"}; 
A_GISVEC(A68_VC ,DLBAOSF,CLBAOSF,43)
static A68_80   ELBAOSF = {"parse_filename: \"echo\" failed"}; 
A_GISVEC(A68_VC ,FLBAOSF,ELBAOSF,29)
static A68_74   GLBAOSF = {"Null filename \"*\""}; 
A_GISVEC(A68_VC ,HLBAOSF,GLBAOSF,17)
static A68_71   ILBAOSF = {"Invalid call to exclusive_close_file"}; 
A_GISVEC(A68_VC ,JLBAOSF,ILBAOSF,36)
static A68_80   KLBAOSF = {"Invalid call to truncate_file"}; 
A_GISVEC(A68_VC ,LLBAOSF,KLBAOSF,29)
static A68_39  NLBAOSF_os_facility;
static A68_34 * VLBAOSF_message;

A_STATIC A68_VOID  EJBAOSF_generator(A68_BOOL  DJBAOSF_anonymous, A68_33  *ReturnedValue);

A68_VOID  PLBAOSF_os_msg(A68_INT  Number, A68_31  *ReturnedValue);

A68_BOOL  TLBAOSF_is_os_msg(A68_31  Msgno);

A_STATIC A68_VOID  EJBAOSF_generator(A68_BOOL  DJBAOSF_anonymous, A68_33  *ReturnedValue)
{ 
A68_33  FJBAOSF;  /* clause result */
A68_33  GJBAOSF;  /* OPERATORS - dynamic generator */
{ 
GJBAOSF.upb = ZIBAOSF_max_os_messages ;
( DJBAOSF_anonymous? A_VLOC(A68_34 ,GJBAOSF): A_VHEAP(A68_34 ,GJBAOSF) );
FJBAOSF = GJBAOSF;
} 
*ReturnedValue = (FJBAOSF);
return;
} 
#undef NL

A68_VOID  PLBAOSF_os_msg(A68_INT  Number, A68_31  *ReturnedValue)
{ 
A68_31  QLBAOSF;  /* clause result */
A68_31  RLBAOSF;  /* avoid structure result */
A_PROC_ENTRY(os_msg);
XYAAOSF_make_msgno( Number, NLBAOSF_os_facility, &RLBAOSF );
QLBAOSF = RLBAOSF;
A_PROC_EXIT(os_msg);
*ReturnedValue = (QLBAOSF);
return;
} 
#undef NL

A68_BOOL  TLBAOSF_is_os_msg(A68_31  Msgno)
{ 
A68_BOOL  ULBAOSF;  /* clause result */
A_PROC_ENTRY(is_os_msg);
ULBAOSF = YZAAOSF_is_facility_msg(Msgno, NLBAOSF_os_facility);
A_PROC_EXIT(is_os_msg);
return( ULBAOSF );
} 
#undef NL
 /* line 1: */
 /* line 4: */
void UIBAOSF(void)   /* initialise DECS osmessages */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","osmessages.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/messageproc.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_39  AJBAOSF;  /* collateral clause result */
A68_33  HJBAOSF;  /* avoid structure result */
A68_BOOL * IJBAOSF;  /* YIELD */
A68_81  JJBAOSF;  /* collateral clause result */
A68_40  MLBAOSF;  /* OPERATORS - istruct -> vector */
A68_33  WLBAOSF;  /* forall yield */
A68_INT  XLBAOSF;  /* forall loop counter */
A68_34  YLBAOSF;  /* collateral clause result */
A68_VC  ZLBAOSF;  /* OPERATORS - nil -> mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ZRAAOSF();   /* USE messageproc */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osmessages.a68";
A_config.translation_time = "Wed May  5 17:38:58 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "TIBAOSF (from seed file) ";
A_config.spec_change_time = "Wed May  5 17:38:58 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osmessages);
UEAALIB_a68config(LGAALIB_configinfo, YIBAOSF);
 /* line 66: */
 /* line 68: */
 /* line 69: */
AJBAOSF.Name = CJBAOSF;
 /* line 70: */
EJBAOSF_generator( A68_TRUE, &HJBAOSF );
AJBAOSF.Messages = HJBAOSF;
 /* line 71: */
IJBAOSF = A_LOC(A68_BOOL ) ;
(*IJBAOSF) = A68_FALSE ;
AJBAOSF.Initialised = IJBAOSF;
 /* line 73: */
JJBAOSF.data[0].Number = 1;
JJBAOSF.data[0].Class = KVAAOSF_fatal_class;
 /* line 75: */
JJBAOSF.data[0].Text = LJBAOSF;
JJBAOSF.data[1].Number = 5;
JJBAOSF.data[1].Class = LVAAOSF_user_class;
 /* line 76: */
JJBAOSF.data[1].Text = NJBAOSF;
JJBAOSF.data[2].Number = 6;
JJBAOSF.data[2].Class = LVAAOSF_user_class;
 /* line 77: */
JJBAOSF.data[2].Text = PJBAOSF;
JJBAOSF.data[3].Number = 7;
JJBAOSF.data[3].Class = LVAAOSF_user_class;
 /* line 78: */
JJBAOSF.data[3].Text = RJBAOSF;
JJBAOSF.data[4].Number = 8;
JJBAOSF.data[4].Class = LVAAOSF_user_class;
 /* line 80: */
JJBAOSF.data[4].Text = TJBAOSF;
JJBAOSF.data[5].Number = 9;
JJBAOSF.data[5].Class = KVAAOSF_fatal_class;
 /* line 82: */
JJBAOSF.data[5].Text = VJBAOSF;
JJBAOSF.data[6].Number = 13;
JJBAOSF.data[6].Class = KVAAOSF_fatal_class;
 /* line 84: */
JJBAOSF.data[6].Text = XJBAOSF;
JJBAOSF.data[7].Number = 17;
JJBAOSF.data[7].Class = LVAAOSF_user_class;
 /* line 85: */
JJBAOSF.data[7].Text = ZJBAOSF;
JJBAOSF.data[8].Number = 18;
JJBAOSF.data[8].Class = LVAAOSF_user_class;
 /* line 87: */
JJBAOSF.data[8].Text = BKBAOSF;
JJBAOSF.data[9].Number = 21;
JJBAOSF.data[9].Class = LVAAOSF_user_class;
 /* line 89: */
JJBAOSF.data[9].Text = DKBAOSF;
JJBAOSF.data[10].Number = 25;
JJBAOSF.data[10].Class = LVAAOSF_user_class;
 /* line 90: */
JJBAOSF.data[10].Text = FKBAOSF;
JJBAOSF.data[11].Number = 26;
JJBAOSF.data[11].Class = LVAAOSF_user_class;
 /* line 91: */
JJBAOSF.data[11].Text = HKBAOSF;
JJBAOSF.data[12].Number = 27;
JJBAOSF.data[12].Class = LVAAOSF_user_class;
 /* line 92: */
JJBAOSF.data[12].Text = JKBAOSF;
JJBAOSF.data[13].Number = 28;
JJBAOSF.data[13].Class = LVAAOSF_user_class;
 /* line 93: */
JJBAOSF.data[13].Text = LKBAOSF;
JJBAOSF.data[14].Number = 29;
JJBAOSF.data[14].Class = KVAAOSF_fatal_class;
 /* line 94: */
JJBAOSF.data[14].Text = NKBAOSF;
JJBAOSF.data[15].Number = 30;
JJBAOSF.data[15].Class = JVAAOSF_system_class;
 /* line 96: */
JJBAOSF.data[15].Text = PKBAOSF;
JJBAOSF.data[16].Number = 33;
JJBAOSF.data[16].Class = LVAAOSF_user_class;
 /* line 97: */
JJBAOSF.data[16].Text = RKBAOSF;
JJBAOSF.data[17].Number = 34;
JJBAOSF.data[17].Class = LVAAOSF_user_class;
 /* line 99: */
JJBAOSF.data[17].Text = TKBAOSF;
JJBAOSF.data[18].Number = 37;
JJBAOSF.data[18].Class = KVAAOSF_fatal_class;
 /* line 101: */
JJBAOSF.data[18].Text = VKBAOSF;
JJBAOSF.data[19].Number = 41;
JJBAOSF.data[19].Class = LVAAOSF_user_class;
 /* line 103: */
JJBAOSF.data[19].Text = XKBAOSF;
JJBAOSF.data[20].Number = 45;
JJBAOSF.data[20].Class = KVAAOSF_fatal_class;
 /* line 104: */
JJBAOSF.data[20].Text = ZKBAOSF;
JJBAOSF.data[21].Number = 46;
JJBAOSF.data[21].Class = KVAAOSF_fatal_class;
 /* line 105: */
JJBAOSF.data[21].Text = BLBAOSF;
JJBAOSF.data[22].Number = 47;
JJBAOSF.data[22].Class = KVAAOSF_fatal_class;
 /* line 106: */
JJBAOSF.data[22].Text = DLBAOSF;
JJBAOSF.data[23].Number = 48;
JJBAOSF.data[23].Class = KVAAOSF_fatal_class;
 /* line 107: */
JJBAOSF.data[23].Text = FLBAOSF;
JJBAOSF.data[24].Number = 49;
JJBAOSF.data[24].Class = LVAAOSF_user_class;
 /* line 109: */
JJBAOSF.data[24].Text = HLBAOSF;
JJBAOSF.data[25].Number = 53;
JJBAOSF.data[25].Class = JVAAOSF_system_class;
 /* line 111: */
JJBAOSF.data[25].Text = JLBAOSF;
JJBAOSF.data[26].Number = 57;
JJBAOSF.data[26].Class = JVAAOSF_system_class;
 /* line 112: */
JJBAOSF.data[26].Text = LLBAOSF;
AJBAOSF.Setup = A_HISVEC(MLBAOSF,JJBAOSF,27,A68_41 );
NLBAOSF_os_facility = AJBAOSF;
 /* line 114: */
 /* line 116: */
 /* line 118: */
 /* line 119: */
WLBAOSF = NLBAOSF_os_facility.Messages ;
XLBAOSF = WLBAOSF.upb -1;
VLBAOSF_message = WLBAOSF.data;
for (;XLBAOSF-- >= 0;
(VLBAOSF_message++
) )
{
YLBAOSF.Msgno.Number = 0;
YLBAOSF.Msgno.Facility = (A68_32 *)A68_NIL;
YLBAOSF.Msgno.Class = 0X0U;
YLBAOSF.Text = A_VVAC(ZLBAOSF);
(*VLBAOSF_message) = YLBAOSF;
}
 /* line 121: */
 /* line 122: */
A_PROC_EXIT(DECS osmessages);
} 
#undef NL
/* end of translation of osmessages.a68 */
