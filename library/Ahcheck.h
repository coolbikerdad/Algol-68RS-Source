/*  $Id: Ahcheck.h,v 1.2 2002-02-01 14:39:52 sian Exp $ */


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
14:12:94  33.001  DJS   Porting    Insert into configuration management. Takes
                                  all the checks from other Ah*.h files. 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef Ahcheck_h
#define Ahcheck_h

#include <algol68/linux/Ahhostgc.h>

/*
** INTERFACE CHECK:
** The following macros must be defined...
*/

/* Taken from Ahbasic.h */

#ifdef A_GC_CHECK_BASICS_DEFINES

#ifndef MEMZERO
#error MEMZERO not defined
#endif

#ifndef MEMEQ
#error MEMEQ not defined
#endif

#ifndef TRUE
#error TRUE not defined
#endif

#ifndef FALSE
#error FALSE not defined
#endif

#ifndef NIL
#error NIL not defined
#endif

#ifndef PTRSIZE
#error PTRSIZE not defined
#endif

#ifndef WORDSIZE
#error WORDSIZE not defined
#endif

#ifndef ALIGNED
#error ALIGNED not defined
#endif

#ifndef WORDALIGNED
#error WORDALIGNED not defined
#endif

#ifndef CALL
#error CALL not defined
#endif

/* Checks for garbage collector */

#ifdef A_GC_STACK_DEFAULTS
#error No default for machine stack decoding
#endif

#endif

/* Taken from Aharea.h */

#ifdef A_GC_CHECK_AREA_DEFINES

#ifdef A_GC_TRACINGAREA_DEFAULTS
#error No defaults for INIT_AREA and NEXT_AREA
#endif

#ifndef STEPAREA
#error STEPAREA not defined
#endif

#ifndef NILAREA
#error NILAREA not defined
#endif

#ifndef PTRINAREA
#error PTRINAREA not defined
#endif

#ifndef INIT_STACK
#error INIT_STACK not defined
#endif

#ifndef FREE_STACK
#error FREE_STACK not defined
#endif

#ifndef PUSH
#error PUSH not defined
#endif

#ifndef POP
#error POP not defined
#endif

#ifndef INIT_AREA
#error INIT_AREA not defined
#endif

#ifndef NEXT_AREA
#error NEXT_AREA not defined
#endif

#endif

/* From Ahbitmap.h */

#ifdef A_GC_CHECK_BITMAP_DEFINES

#ifndef GRAB_BITMAP
#error GRAB_BITMAP not defined
#endif

#ifndef FREE_BITMAP
#error FREE_BITMAP not defined
#endif

#ifndef SETMARK
#error SETMARK not defined
#endif

#ifndef CLRMARK
#error CLRMARK not defined
#endif

#ifndef TSTMARK
#error TSTMARK not defined
#endif

#ifndef SETMARKS
#error SETMARKS not defined
#endif

#ifndef CALCTSTMARKS
#error CALCTSTMARKS not defined
#endif

#ifndef RESTSTMARKS 
#error RESTSTMARKS not defined
#endif

#ifndef SCAN_TO_CLR
#error SCAN_TO_CLR not defined
#endif

#ifndef SCAN_TO_SET
#error SCAN_TO_SET not defined
#endif

#endif

/* From Ahclr.h */

#ifdef A_GC_CHECK_CLR_DEFINES

#ifndef CLR_AT_GRAB
#error CLR_AT_GRAB not defined
#endif

#ifndef CLR_AT_ALLOCATE
#error CLR_AT_ALLOCATE not defined
#endif

#ifndef CLR_AT_GRAB
#error CLR_AT_ALLOCATE not defined
#endif

#ifndef CLR_ELHEADER_AT_FREE
#error CLR_ELHEADER_AT_FREE not defined
#endif

#ifndef IS_CLR
#error IS_CLR not defined
#endif

#endif

/* From Ahdebug.h */

#ifdef A_GC_CHECK_DEBUG_DEFINES

#ifndef GC_ERROR
#error GC_ERROR not defined
#endif

#ifndef REP_EL
#error REP_EL not defined
#endif

#ifndef ASSERT
#error ASSERT not defined
#endif

#ifndef ASSERT_DECL
#error ASSERT_DECL not defined
#endif

#ifndef ASSERT_INIT
#error ASSERT_INIT not defined
#endif

#ifndef REPORT
#error REPORT not defined
#endif

#ifndef REPORT1
#error REPORT1 not defined
#endif

#ifndef REPORT2
#error REPORT2 not defined
#endif

#ifndef REPORT3
#error REPORT3 not defined
#endif

#ifndef REPORT4
#error REPORT4 not defined
#endif

#ifndef REPORT5
#error REPORT5 not defined
#endif

#ifndef REPORT6
#error REPORT6 not defined
#endif

#ifndef REPORT7
#error REPORT7 not defined
#endif

#ifndef REP_DECL
#error REP_DECL not defined
#endif

#ifndef REP_DO
#error REP_DO not defined
#endif

#endif

/* From Ahdesc.h */

#ifdef A_GC_CHECK_DESC_DEFINES

#ifndef ANAL_DESC
#error ANAL_DESC not defined
#endif

#endif

/* From Ahptr.h */

#ifdef A_GC_CHECK_PTR_DEFINES

#ifndef ALIGN_NEXT
#error ALIGN_NEXT not defined
#endif

#ifndef VALIDPTR
#error VALIDPTR not defined
#endif

#ifndef RESIZE1ALLOCATION
#error RESIZE1ALLOCATION not defined
#endif

#ifndef RESIZENALLOCATION
#error RESIZENALLOCATION not defined
#endif

#endif

/* From Ahseg.h */

#ifdef A_GC_CHECK_SEG_DEFINES

#ifndef SEGSTART
#error SEGSTART not defined
#endif

#ifndef SEGEND
#error SEGEND not defined
#endif

#ifndef SEGSIZE
#error SEGSIZE not defined
#endif

#ifndef SEGELSIZE
#error SEGELSIZE not defined
#endif

#ifndef SEGELS
#error SEGELS not defined
#endif

#ifndef ENCODEPTR
#error ENCODEPTR not defined
#endif

#ifndef DECODEPTR
#error DECODEPTR not defined
#endif

#ifndef CODEDNIL
#error CODEDNIL not defined
#endif

#ifndef ELEND
#error ELEND not defined
#endif

#ifndef ELNUM
#error ELNUM not defined
#endif

#ifndef ELNUMTOPTR
#error ELNUMTOPTR not defined
#endif

#ifndef ELBYTESIZE
#error ELBYTESIZE not defined
#endif

#ifndef ELPTRPLUS
#error ELPTRPLUS not defined
#endif

#ifndef ELPTRENOUGH
#error ELPTRENOUGH not defined
#endif

#ifndef ELPTRELSLEFT
#error ELPTRELSLEFT not defined
#endif

#ifndef IDENTIFY_ALIGN_EL
#error IDENTIFY_ALIGN_EL not defined
#endif

#ifndef CHECK_EL
#error CHECK_EL not defined
#endif

#ifndef GRAB_SEG
#error GRAB_SEG not defined
#endif

#ifndef FREE_SEG
#error FREE_SEG not defined
#endif

#endif

#endif





