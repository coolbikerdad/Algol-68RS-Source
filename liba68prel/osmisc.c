/* UNAME:QOBAOSF */
#include <algol68/Asupport.h>
A_ISTRUCT(A68_CHAR ,16000000,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t31 *,16000000,A68t32);
typedef struct A68t32  A68_32 ;    /* STRUCT 16000000 REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t33,(struct A68t31 *,A68_VC *),(struct A68t31 *,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE31) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t34,(A68_VC ),(A68_VC ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26) REF CHAR */
A_VECTOR(A68_INT ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_INT *,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) REF INT */

A_PROCEDURE(A68_CHAR *,A68t37,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE31) REF CHAR */

A_PROCEDURE(struct A68t31 *,A68t38,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(REF CHAR) REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t39,(void),(void *));
typedef struct A68t39  A68_39 ;    /* PROC VOID */
struct A68t40{
A68_BITS * Cp;
struct A68t31 * Env;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF BITS,REF MODE31)  */

A_PROCEDURE(struct A68t40 *,A68t41,(struct A68t39 *),(struct A68t39 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE39) REF MODE40 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t39 ,struct A68t40 *),(struct A68t39 ,struct A68t40 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE39) MODE40 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_INT ),(A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t43 ,struct A68t40 *),(struct A68t43 ,struct A68t40 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE43) MODE40 */

A_PROCEDURE(A68_VOID ,A68t45,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t46,(A68_VC *),(A68_VC *,void *));
typedef struct A68t46  A68_46 ;    /* PROC REF MODE26 */
struct A68t48 ;
struct A68t49 ;

A_PROCEDURE(A68_VOID ,A68t47,(A68_INT ,struct A68t48 ,struct A68t49 ),(A68_INT ,struct A68t48 ,struct A68t49 ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(INT,MODE48,MODE49) VOID */
A_VECTOR(A68_VC ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t50 ,struct A68t48 ),(struct A68t50 ,struct A68t48 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE50,MODE48) VOID */
struct A68t50{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t51 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,REF MODE51,BITS)  */
A_VECTOR(struct A68t53 ,A68t52);
typedef struct A68t52  A68_52 ;    /* VECTOR [] MODE53 */
struct A68t53{
struct A68t50  Msgno;
A68_VC  Text;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(MODE50,REF MODE26)  */
struct A68t51{
A68_VC  Name;
struct A68t52  Messages;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(REF MODE26,REF MODE52)  */

A_PROCEDURE(A68_INT *,A68t54,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t55,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t56,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t57,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t58,(struct A68t48 ,A68_VC *),(struct A68t48 ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE48) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t59,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t62);
typedef struct A68t62  A68_62 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t62 ,A68t63,(A68_INT ),(A68_INT ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(INT) MODE62 */

A_PROCEDURE(A68_INT ,A68t64,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t65,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t66,(A68_VC ),(A68_VC ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t67,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t68,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t69,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t70,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t73,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t74,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t75,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t76,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ),(A68_VC ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t79,(struct A68t78 ),(struct A68t78 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE78) VOID */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,52,A68t81);
typedef struct A68t81  A68_81 ;    /* STRUCT 52 CHAR */

A_PROCEDURE(struct A68t31 *,A68t82,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF MODE26,INT) REF MODE31 */

A_PROCEDURE(struct A68t31 *,A68t83,(A68_VC ),(A68_VC ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE26) REF MODE31 */

A_PROCEDURE(A68_LINT ,A68t84,(A68_INT ),(A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT) LONG INT */

A_PROCEDURE(struct A68t31 *,A68t85,(A68_LINT *),(A68_LINT *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF LONG INT) REF MODE31 */

A_PROCEDURE(struct A68t31 *,A68t86,(A68_INT ),(A68_INT ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(INT) REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC *),(A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC MODE26 */

A_PROCEDURE(A68_LINT ,A68t88,(void),(void *));
typedef struct A68t88  A68_88 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t89,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t90,(A68_VC ,struct A68t49 ),(A68_VC ,struct A68t49 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE26,MODE49) INT */
A_ISTRUCT(A68_CHAR ,5,A68t91);
typedef struct A68t91  A68_91 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t92);
typedef struct A68t92  A68_92 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t93);
typedef struct A68t93  A68_93 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t94);
typedef struct A68t94  A68_94 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_VC ,2,A68t95);
typedef struct A68t95  A68_95 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_INT ,A68t96,(void),(void *));
typedef struct A68t96  A68_96 ;    /* PROC INT */

/* --- Imports from a68config --- */
extern A68_VOID  ABAALIB_a68init(struct A68t39 );
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_VOID  VHBAOSF_errnotext(A68_VC *);
extern A68_VOID  SEBAOSF_osifmessage(A68_INT ,struct A68t48 ,struct A68t49 );
/* --- End of imports from oserrors --- */


/* --- Imports from cif --- */
#include <stdio.h>

#define IAAAOSF_nullccharptr NULL
/**/

#define VBAAOSF_shortshortmaxint (A68_SSINT)A68_MAX_SSINT
/**/

#define WBAAOSF_shortmaxint (A68_SINT)A68_MAX_SINT
/**/

#define XBAAOSF_maxint (A68_INT)A68_MAX_INT
/**/

#define YBAAOSF_longmaxint (A68_LINT)A68_MAX_LINT
/**/

#define ZBAAOSF_maxabschar (A68_INT)A68_MAX_CHAR
/**/

#define ACAAOSF_bitswidth A_SZ_BITS
extern A68_VOID  MAAAOSF_cstringtorvc(struct A68t31 *,A68_VC *);
extern A68_VOID  CBAAOSF_nullstr(A68_VC ,A68_VC *);
/* --- End of imports from cif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IKAAOSF(void);   /* usefulops */
extern void MCBAOSF(void);   /* oserrors */
extern void BAAAOSF(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_81   UOBAOSF = {"$Id: osmisc.a68,v 1.2 2001-09-27 13:06:01 sian Exp $"}; 
A_GISVEC(A68_VC ,VOBAOSF,UOBAOSF,52)
#include <unistd.h>
#define GETCWD(buf,size) \
   ((void *)(getcwd(A_VC_charptr(buf),A_INT_size_t(size))))

#define WOBAOSF_getcwd GETCWD
#include <stdlib.h>
#define GETENV(name) ((void *)getenv(A_VC_charptr(name)))

#define XOBAOSF_getenv GETENV
#include <time.h>
#define TIME(x) A_time_t_LINT(time((time_t *)NULL))

#define YOBAOSF_time TIME
#include <time.h>
#define CTIME(timer) ((void *)ctime((A_RLI_time_tptr(timer))))

#define ZOBAOSF_ctime CTIME
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
#include <stdlib.h>
#define SYSTEM(string) A_int_INT(system(A_VC_charptr(string)))

#define BPBAOSF_system SYSTEM
#include <sys/times.h>
clock_t A_times()
{ struct tms TMS;
  times(&TMS);
  return TMS.tms_utime + TMS.tms_stime + TMS.tms_cutime + TMS.tms_cstime;
}
#define TIMES(x) A_clock_t_LINT(A_times())

#define CPBAOSF_times TIMES
#include <unistd.h>
#define GETLOGIN(x) ((void *)getlogin())

#define DPBAOSF_getlogin GETLOGIN
#define FPBAOSF_bufsize 1000
static A68_91   JQBAOSF = {"SHELL"}; 
A_GISVEC(A68_VC ,KQBAOSF,JQBAOSF,5)
static A68_92   OQBAOSF = {"/bin/bash"}; 
A_GISVEC(A68_VC ,PQBAOSF,OQBAOSF,9)
static A68_93   QQBAOSF = {"/bin/bash --login"}; 
A_GISVEC(A68_VC ,RQBAOSF,QQBAOSF,17)
static A68_94   SQBAOSF = {"/bin/sh"}; 
A_GISVEC(A68_VC ,TQBAOSF,SQBAOSF,7)
A68_LINT  BRBAOSF_clk_tck;
#include <unistd.h>
#define SYSCONF(name) A_long_LINT(sysconf(A_INT_int(name)))

#define JRBAOSF_sysconf SYSCONF
#include <unistd.h>

#define KRBAOSF_sc_clk_tck A_int_INT(_SC_CLK_TCK)
typedef struct   /* env of non-global proc */
{
int dummy;
} JPBAOSF_generator;

A68_VOID  EPBAOSF_get_working_directory(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IPBAOSF_generator(A68_BOOL  GPBAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  QPBAOSF_get_env_var(A68_VC  Envname, A68_VC  *ReturnedValue);

A68_LINT  VPBAOSF_get_time(void);

A68_VOID  YPBAOSF_local_time_str(A68_LINT  Time, A68_VC  *ReturnedValue);

A68_INT  HQBAOSF_execute_os_command(A68_VC  Command, A68_49  Msg);

A68_INT  CRBAOSF_get_cpu_time(void);

A68_VOID  ERBAOSF_get_login_name(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IRBAOSF_init_osmisc(void);

A_STATIC A68_VOID  IPBAOSF_generator(A68_BOOL  GPBAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JPBAOSF_generator *)NonLocals)->x)
{ 
A68_VC  KPBAOSF;  /* clause result */
A68_VC  LPBAOSF;  /* OPERATORS - dynamic generator */
{ 
LPBAOSF.upb = FPBAOSF_bufsize ;
( GPBAOSF_anonymous? A_VLOC(A68_CHAR ,LPBAOSF): A_VHEAP(A68_CHAR ,LPBAOSF) );
KPBAOSF = LPBAOSF;
} 
*ReturnedValue = (KPBAOSF);
return;
} 
#undef NL

A68_VOID  EPBAOSF_get_working_directory(A68_VC  *ReturnedValue)
{ 
A68_76  HPBAOSF_generator;   /* proc value of non-global proc */
A68_VC  MPBAOSF;  /* clause result */
A68_VC  NPBAOSF;  /* avoid structure result */
A68_VC  OPBAOSF;  /* avoid structure result */
A_PROC_ENTRY(get_working_directory);
{ 
 /* line 117: */
A_CLOSURE( HPBAOSF_generator, IPBAOSF_generator, JPBAOSF_generator );
 /* line 118: */
A_CALLPROC(HPBAOSF_generator,(A68_FALSE, &NPBAOSF),(A68_FALSE, &NPBAOSF,(HPBAOSF_generator).nonlocals));
MAAAOSF_cstringtorvc( WOBAOSF_getcwd(NPBAOSF, FPBAOSF_bufsize), &OPBAOSF );
MPBAOSF = OPBAOSF;
} 
A_PROC_EXIT(get_working_directory);
*ReturnedValue = (MPBAOSF);
return;
} 
#undef NL

A68_VOID  QPBAOSF_get_env_var(A68_VC  Envname, A68_VC  *ReturnedValue)
{ 
A68_VC  RPBAOSF;  /* clause result */
A68_VC  SPBAOSF;  /* avoid structure result */
A68_VC  TPBAOSF;  /* avoid structure result */
A68_VC  UPBAOSF;  /* avoid structure result */
A_PROC_ENTRY(get_env_var);
 /* line 129: */
 /* line 130: */
 /* line 131: */
CBAAOSF_nullstr( Envname, &SPBAOSF );
MAAAOSF_cstringtorvc( XOBAOSF_getenv(SPBAOSF), &TPBAOSF );
ZCAAOSF_makervc( TPBAOSF, &UPBAOSF );
RPBAOSF = UPBAOSF;
A_PROC_EXIT(get_env_var);
*ReturnedValue = (RPBAOSF);
return;
} 
#undef NL

A68_LINT  VPBAOSF_get_time(void)
{ 
A68_LINT  WPBAOSF;  /* clause result */
A_PROC_ENTRY(get_time);
WPBAOSF = YOBAOSF_time(0);
A_PROC_EXIT(get_time);
return( WPBAOSF );
} 
#undef NL

A68_VOID  YPBAOSF_local_time_str(A68_LINT  Time, A68_VC  *ReturnedValue)
{ 
A68_LINT * ZPBAOSF;  /* YIELD */
A68_VC  AQBAOSF;  /* avoid structure result */
A68_VC  BQBAOSF_time_str;
A68_VC  CQBAOSF;  /* clause result */
A68_VC  DQBAOSF;  /* OPERATORS - trim index */
A68_VC  EQBAOSF;  /* avoid structure result */
A_PROC_ENTRY(local_time_str);
 /* line 148: */
 /* line 149: */
{ 
ZPBAOSF = A_LOC(A68_LINT ) ;
(*ZPBAOSF) = Time ;
MAAAOSF_cstringtorvc( ZOBAOSF_ctime(ZPBAOSF), &AQBAOSF );
BQBAOSF_time_str = AQBAOSF;
 /* line 150: */
 /* line 151: */
ZCAAOSF_makervc( A_VTRIM(DQBAOSF,(BQBAOSF_time_str),A_VTSCRIPT(&(DQBAOSF.upb),(BQBAOSF_time_str).upb,1,(BQBAOSF_time_str.upb-1))), &EQBAOSF );
CQBAOSF = EQBAOSF;
} 
A_PROC_EXIT(local_time_str);
*ReturnedValue = (CQBAOSF);
return;
} 
#undef NL
 /* line 169: */

A68_INT  HQBAOSF_execute_os_command(A68_VC  Command, A68_49  Msg)
{ 
A68_VC  IQBAOSF;  /* clause result */
A68_VC  LQBAOSF;  /* avoid structure result */
A68_VC  MQBAOSF_shell;
A68_BOOL  NQBAOSF;  /* clause result */
A68_VC  UQBAOSF_program;
A68_VC  VQBAOSF;  /* avoid structure result */
A68_INT  WQBAOSF_result;
A68_95  XQBAOSF;  /* collateral clause result */
A68_VC  YQBAOSF;  /* avoid structure result */
A68_48  ZQBAOSF;  /* OPERATORS - istruct -> vector */
A68_INT  ARBAOSF;  /* clause result */
A_PROC_ENTRY(execute_os_command);
 /* line 170: */
 /* line 172: */
{ 
 /* line 173: */
 /* line 174: */
 /* line 176: */
if ( (Command.upb>0) )
{ 
 /* line 177: */
IQBAOSF = Command;
} 
else
{ 
{ 
QPBAOSF_get_env_var( KQBAOSF, &LQBAOSF );
MQBAOSF_shell = LQBAOSF;
 /* line 178: */
 /* line 179: */
 /* line 180: */
NQBAOSF = (MQBAOSF_shell.upb>0);
if ( NQBAOSF )
{ 
 /* line 181: */
 /* line 182: */
if ( A_VC_EQ(MQBAOSF_shell,PQBAOSF) )
{ 
 /* line 183: */
IQBAOSF = RQBAOSF;
} 
else
{ 
 /* line 184: */
 /* line 185: */
IQBAOSF = MQBAOSF_shell;
} 
} 
else
{ 
IQBAOSF = TQBAOSF;
} 
} 
} 
UQBAOSF_program = IQBAOSF;
 /* line 187: */
CBAAOSF_nullstr( UQBAOSF_program, &VQBAOSF );
WQBAOSF_result = BPBAOSF_system(VQBAOSF);
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 192: */
if ( (WQBAOSF_result<0) )
{ 
XQBAOSF.data[0] = Command;
VHBAOSF_errnotext(  &YQBAOSF );
XQBAOSF.data[1] = YQBAOSF;
 /* line 193: */
SEBAOSF_osifmessage(81, A_HISVEC(ZQBAOSF,XQBAOSF,2,A68_VC ), Msg);
} 
 /* line 195: */
 /* line 196: */
ARBAOSF = WQBAOSF_result;
} 
A_PROC_EXIT(execute_os_command);
return( ARBAOSF );
} 
#undef NL

A68_INT  CRBAOSF_get_cpu_time(void)
{ 
A68_INT  DRBAOSF;  /* clause result */
A_PROC_ENTRY(get_cpu_time);
 /* line 209: */
DRBAOSF = (A68_INT )((CPBAOSF_times(0)*100)/BRBAOSF_clk_tck);
A_PROC_EXIT(get_cpu_time);
return( DRBAOSF );
} 
#undef NL

A68_VOID  ERBAOSF_get_login_name(A68_VC  *ReturnedValue)
{ 
A68_VC  FRBAOSF;  /* clause result */
A68_VC  GRBAOSF;  /* avoid structure result */
A68_VC  HRBAOSF;  /* avoid structure result */
A_PROC_ENTRY(get_login_name);
MAAAOSF_cstringtorvc( DPBAOSF_getlogin(0), &GRBAOSF );
ZCAAOSF_makervc( GRBAOSF, &HRBAOSF );
FRBAOSF = HRBAOSF;
A_PROC_EXIT(get_login_name);
*ReturnedValue = (FRBAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  IRBAOSF_init_osmisc(void)
{ 
A_PROC_ENTRY(init_osmisc);
{ 
 /* line 224: */
 /* line 225: */
 /* line 227: */
 /* line 228: */
 /* line 229: */
 /* line 231: */
 /* line 232: */
BRBAOSF_clk_tck = JRBAOSF_sysconf(KRBAOSF_sc_clk_tck);
} 
A_PROC_EXIT(init_osmisc);
return;
} 
#undef NL
 /* line 1: */
 /* line 5: */
void ROBAOSF(void)   /* initialise DECS osmisc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/neil/Algol-68RS/algol68toc-1.21/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/a68config","-dir","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel","osmisc.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/neil/Algol-68RS/algol68toc-1.21/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/neil/Algol-68RS/algol68toc-1.21/a68config/a68config.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/usefulops.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/oserrors.m","/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_39  LRBAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IKAAOSF();   /* USE usefulops */
MCBAOSF();   /* USE oserrors */
BAAAOSF();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/home/neil/Algol-68RS/algol68toc-1.21/liba68prel/osmisc.a68";
A_config.translation_time = "Mon May  3 00:36:16 2021";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "QOBAOSF (from seed file) ";
A_config.spec_change_time = "Mon May  3 00:36:16 2021";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osmisc);
UEAALIB_a68config(LGAALIB_configinfo, VOBAOSF);
 /* line 61: */
 /* line 62: */
 /* line 63: */
 /* line 64: */
 /* line 65: */
 /* line 67: */
 /* line 68: */
 /* line 69: */
 /* line 70: */
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 75: */
 /* line 77: */
 /* line 78: */
 /* line 79: */
 /* line 80: */
 /* line 82: */
 /* line 83: */
 /* line 86: */
 /* line 87: */
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 101: */
 /* line 102: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 114: */
 /* line 115: */
 /* line 116: */
 /* line 126: */
 /* line 128: */
 /* line 139: */
 /* line 147: */
 /* line 166: */
 /* line 167: */
 /* line 204: */
 /* line 206: */
 /* line 207: */
 /* line 208: */
 /* line 216: */
 /* line 217: */
 /* line 220: */
 /* line 221: */
 /* line 223: */
 /* line 234: */
 /* line 236: */
 /* line 240: */
LRBAOSF.fn.fn_global = IRBAOSF_init_osmisc;
LRBAOSF.nonlocals = A68_NIL;
ABAALIB_a68init(LRBAOSF);
A_PROC_EXIT(DECS osmisc);
} 
#undef NL
/* end of translation of osmisc.a68 */
