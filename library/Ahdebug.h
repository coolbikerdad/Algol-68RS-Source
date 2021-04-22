/*   $Id: Ahdebug.h,v 1.2 2002-02-01 14:39:52 sian Exp $ */


/* 
    ************************************************************************
    This Program is the property of the Secretary of State for Defence
    (United Kingdom) acting through the Defence Research Agency (DRA). Use,
    reproduction, production of amended versions and/or transfer of this
    Program is permitted provided that:

  (a)  this legend be preserved on any such reproduction and amended version,
  (b)  any amended version of this Program be clearly marked to show the
       nature of the amendment and of the name of the amending organisation,
  and
  (c)  any recipient  of such reproduction or amended version accept the
       conditions set out in this legend.

                         Crown Copyright, (c)   1994

                             All rights reserved.

    The Secretary of State for Defence (United Kingdom) acting through his
    Defence Research Agency (DRA) gives no warranty that any element of the
    Software is suitable for any purpose and he shall not be liable for any
    loss or damage including loss or damage resulting in injury or death
    howsoever caused which results from the use of the Software, or any
    developments adaptions modifications translations and enhancements
    thereof.

    The original authors may be contacted via email on ella@dra.hmg.gb or by
    writing to ELLA Office, DRA, St Andrews Road, Malvern, Worcs WR14 3PS, UK.
    ************************************************************************

   ------------------------- Change History ---------------------------
15:08:94  Module renamed from a68_gc_debug.h to Ahdebug.h for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes. Move m/c
                                  dependant bits to sunos/Ahswitch.h and error
                                  checks to Ahcheck.h. Remove Ah*.h from the
                                  includes. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
**
**	Debugging and error handling macros
**
**      Library build-time options:
**        A_DEBUG
*/
#ifndef Ahdebug_h
#define Ahdebug_h

#include <algol68/Amacros.h>

extern void Agc_check_heap(const char *phase);
extern int Agc_debug_level;

#define A_GC_CHECK_DEBUG_DEFINES

/*
** PORTABLE DEFAULTS
*/

#ifdef A_GC_DEFAULTS
#define A_GC_DEBUG_DEFAULTS
#endif

#ifdef A_GC_DEBUG_DEFAULTS

/*
** GC_ERROR is to report eventualities that might happen even in a debugged garbage collector;
** ASSERT is to test for logical flaws that should not happen.
*/

#ifndef GC_ERROR
#include <algol68/Alibrary.h>
#define	GC_ERROR(message)	A_ERROR("Garbage collector:" #message)
#endif

#ifdef	A_DEBUG

/* We need ASSERT to be an expression so it can freely be used in macros */
#	define	ASSERT(test,fn_name,mess)	( (test) ? 0 : GC_ERROR(internal error in fn_name -- mess) )
#	define	ASSERT_DECL(declaration)	declaration;
#	define	ASSERT_INIT(initialisation)	{initialisation;}

extern int Agc_debug_level;

#include <stdio.h>

#	define	REPORT(level,mess)	{ if ( Agc_debug_level >= level ) { fprintf(stderr,mess); } }
#	define	REPORT1(level,mess,p1)	{ if ( Agc_debug_level >= level ) { fprintf(stderr,mess,p1); } }
#	define	REPORT2(level,mess,p1,p2)	{ if ( Agc_debug_level >= level ) { fprintf(stderr,mess,p1,p2); } }
#	define	REPORT3(level,mess,p1,p2,p3)	{ if ( Agc_debug_level >= level ) { fprintf(stderr,mess,p1,p2,p3); } }
#	define	REPORT4(level,mess,p1,p2,p3,p4)	{ if ( Agc_debug_level >= level ) { fprintf(stderr,mess,p1,p2,p3,p4); } }
#	define	REPORT5(level,mess,p1,p2,p3,p4,p5)	{ if ( Agc_debug_level >= level ) { fprintf(stderr,mess,p1,p2,p3,p4,p5); } }
#	define	REPORT6(level,mess,p1,p2,p3,p4,p5,p6)	{ if ( Agc_debug_level >= level ) { fprintf(stderr,mess,p1,p2,p3,p4,p5,p6); } }
#	define	REPORT7(level,mess,p1,p2,p3,p4,p5,p6,p7)	{ if ( Agc_debug_level >= level ) { fprintf(stderr,mess,p1,p2,p3,p4,p5,p6,p7); } }

#	define	REP_DECL(declaration)		declaration;
#	define	REP_DO(action)			(action)

#else

#	define	ASSERT(test,fn_name,mess)	0	/* most C compilers optimise voided constants out */
#	define	ASSERT_DECL(declaration)
#	define	ASSERT_INIT(initialisation)

#	define	REPORT(level,mess)
#	define	REPORT1(level,mess,p1)
#	define	REPORT2(level,mess,p1,p2)
#	define	REPORT3(level,mess,p1,p2,p3)
#	define	REPORT4(level,mess,p1,p2,p3,p4)
#	define	REPORT5(level,mess,p1,p2,p3,p4,p5)
#	define	REPORT6(level,mess,p1,p2,p3,p4,p5,p6)
#	define	REPORT7(level,mess,p1,p2,p3,p4,p5,p6,p7)

#	define	REP_DECL(declaration)
#	define	REP_DO(action)

#endif


#define	REP_EL(elp,MESSAGE)										\
		REPORT5(8,"Agc_collect: MESSAGE free list element number %d (elements=%d) is (0x%p -> 0x%p : size %d)\n", \
			ELNUM((elp),segctlp),(elp)->elements,(void *)(elp),(void *)ELEND((elp),segctlp),ELBYTESIZE((elp),segctlp));

#endif

#endif


