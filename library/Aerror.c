/* $Id: Aerror.c,v 1.2 2002-02-01 14:39:52 sian Exp $ */



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
15:08:94  Module renamed from a68_error.c to Aerror.c for porting.  DCT
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Use printf if not in Posix mode. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#include <algol68/Asupport.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

static char rcs_id[] = "$Id: Aerror.c,v 1.2 2002-02-01 14:39:52 sian Exp $";

A68_VOID A68_ERROR(const char *message)
{
/*
**	Reports CTRANS fatal error message, then terminates program.
*/
	static char preamble[] = "Run time fault (aborting):\n";

#ifdef _POSIX_SOURCE
	/* Print messages with low-level 'write' routine, so we don't drag in all the 'printf' code */

	write( 2 /* stderr fd */, preamble, sizeof( preamble )-1 );
	write( 2 /* stderr fd */, (char *)message, (unsigned)strlen( message ) );
	write( 2 /* stderr fd */, "\n", 1 );
#else
        /* Write not available in ansi so have to lump it.  DJS 9/12/94 */
        fprintf( stderr, "%s%s\n", preamble, message );
#endif
	abort();		/* kill program with dump */
	/* NOTREACHED */
}
