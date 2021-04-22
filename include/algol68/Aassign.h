/* $Id: Aassign.h,v 1.2 2002-02-19 11:40:12 sian Exp $ */


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
13:05:94  Module renamed from a68_assign.h to Aassign.h for porting.  DCT
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes. #include
                                  Ahostenv.h 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
 *	Assignment macros
 *	The associated functions are in a68_assign.c
*/

#ifndef Aassign_h
#define Aassign_h

#include <algol68/linux/Ahostenv.h>

/*	assign2 for vector[]	*/
#define	A_VASSIGN2(src,dest,elemtype)\
	(A_PVASSIGN((char *)(src).data,(char *)(dest).data,\
	(src).upb,(dest).upb,A_size_t_INT(sizeof(elemtype))), dest)

/*	assign2 for []	*/
#define A_R1ASSIGN2(src,dest,elemtype)\
	(A_PR1ASSIGN((char *)(src).data,(char *)(dest).data,\
	(src).dim,(dest).dim,A_size_t_INT(sizeof(elemtype))), dest)

/*	assign2 for [,]	*/
#define A_R2ASSIGN2(src,dest,elemtype)\
	(A_PR2ASSIGN((char *)(src).data,(char *)(dest).data,\
	(src).dim,(dest).dim,A_size_t_INT(sizeof(elemtype))), dest)

/*	assign2 for [,,]	*/
#define A_R3ASSIGN2(src,dest,elemtype)\
	(A_PR3ASSIGN((char *)(src).data,(char *)(dest).data,\
	(src).dim,(dest).dim,A_size_t_INT(sizeof(elemtype))), dest)

/*	assign1 for vector, [], [,] and [,,]	*/
/*	copy descriptors			*/
/*	copy to flex	*/
#define	A_VCOPY(src,dest,elemtype)\
	( dest = src, A_VHEAP(elemtype,dest),\
	  A_VASSIGN2(src,dest,elemtype), dest)

/*	copy []		*/
#define	A_R1COPY(src,dest,elemtype)\
	( dest=src,A_1INITSTRIDES(dest),A_R1HEAP(elemtype,dest),\
	  A_R1ASSIGN2(src,dest,elemtype),dest)

/*	copy [,]		*/
#define	A_R2COPY(src,dest,elemtype)\
	( dest=src,A_2INITSTRIDES(dest),A_R2HEAP(elemtype,dest),\
	  A_R2ASSIGN2(src,dest,elemtype),dest)

/*	copy [,,]		*/
#define	A_R3COPY(src,dest,elemtype)\
	( dest=src,A_3INITSTRIDES(dest),A_R3HEAP(elemtype,dest),\
	  A_R3ASSIGN2(src,dest,elemtype),dest)

/*	union copy	*/
#define	A_UNCPY(dest,src)\
	memcpy( (char *)&dest,(char *)&src, (size_t) sizeof(dest))

#endif
