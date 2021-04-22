/* $Id: Aindex.c,v 1.2 2002-02-01 14:39:52 sian Exp $ */


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
15:08:94  Module renamed from a68_index.c to Aindex.c for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
	Indexing and trimming functions
	The associated macros are in a68_macros.h
*/

#include <algol68/Asupport.h>

static char rcs_id[] = "$Id: Aindex.c,v 1.2 2002-02-01 14:39:52 sian Exp $";

#ifdef __STDC__
A68_INT A_B1CHECK(const A_DIM  *dim, const A68_INT i)
#else
A68_INT	A_B1CHECK(dim,i)
register A_DIM	* dim;       /* []triples containing the upb,lwb,stride */
register A68_INT i;	     /* the index being checked */
#endif
{           
	A68_BCHECK(i,dim[0].lwb,dim[0].upb);
	return( A_NR1INDEX(dim,i) );
}

#ifdef __STDC__
A68_INT A_B2CHECK(const A_DIM *dim, const A68_INT i, const A68_INT j)
#else
A68_INT	A_B2CHECK(dim,i,j)
register A_DIM	* dim;       /* []triples containing the upb,lwb,stride */
register A68_INT i,j;	     /* the indicies being checked */
#endif
{           
	A68_BCHECK(i,dim[0].lwb,dim[0].upb);
	A68_BCHECK(j,dim[1].lwb,dim[1].upb);
	return( A_NR2INDEX(dim,i,j) );
}

#ifdef __STDC__
A68_INT A_B3CHECK(const A_DIM *dim, const A68_INT i, const A68_INT j, const A68_INT k)
#else
A68_INT	A_B3CHECK(dim,i,j,k)
register A_DIM	* dim;       /* []triples containing the upb,lwb,stride */
register A68_INT i,j,k;	     /* the indicies being checked */
#endif
{           
	A68_BCHECK(i,dim[0].lwb,dim[0].upb);
	A68_BCHECK(j,dim[1].lwb,dim[1].upb);
	A68_BCHECK(k,dim[2].lwb,dim[2].upb);
	return( A_NR3INDEX(dim,i,j,k) );
}

#ifdef __STDC__
A68_INT A_VTSCRIPT(A68_INT *newupb, const A68_INT oldupb, const A68_INT lwb, const A68_INT upb)
#else
A68_INT	A_VTSCRIPT(newupb,oldupb,lwb,upb)
register A68_INT * newupb;
register A68_INT oldupb, lwb, upb;
#endif
{
	if ( upb > oldupb || lwb < 1 )
	{ A_ERROR("Vector trimscript out of bounds") ;}
	* newupb = upb - lwb + 1;
	return( lwb );
}

#ifdef __STDC__
A68_INT A_VRTSCRIPT(A_DIM *new, const A68_INT oldupb, const A68_INT lwb, const A68_INT upb, const A68_INT rlb)
#else
A68_INT	A_VRTSCRIPT(new,oldupb,lwb,upb,rlb)
register A_DIM * new;
	 A68_INT oldupb;
register A68_INT lwb, upb, rlb;
#endif
{
	if ( upb > oldupb || lwb < 1 )
	{ A_ERROR("Vector(to row) trimscript out of bounds") ;}
	new[0].lwb    = rlb;
	new[0].upb    = upb - lwb + rlb;
	new[0].stride = 1;
	return( lwb );
}

#ifdef __STDC__
A68_INT A_RTSCRIPT(A_DIM *new, const A_DIM *old, const A68_INT lwb, const A68_INT upb, const A68_INT rlb)
#else
A68_INT	A_RTSCRIPT(new,old,lwb,upb,rlb)
register A_DIM * new;
	 A_DIM * old;
register A68_INT lwb, upb, rlb;
#endif
{
	if ( lwb < old[0].lwb || upb > old[0].upb )
	{ A_ERROR("Row trimscript out of bounds");
	}
	new[0].lwb    = rlb;
	new[0].upb    = upb - lwb + rlb;
	new[0].stride = old[0].stride;
	return( lwb );
}

/*
	Trim indexing functions
	- these are just row indexing functions without bound checks
*/

#ifdef __STDC__
A68_INT A_T1INDEX(const A_DIM *old, const A68_INT lwb)
#else
A68_INT	A_T1INDEX(old,lwb)
register A_DIM * old;
register A68_INT lwb;
#endif
{
	return( A_NR1INDEX(old,lwb) );
}

#ifdef __STDC__
A68_INT A_T2INDEX(const A_DIM *old, const A68_INT lwb1, const A68_INT lwb2)
#else
A68_INT	A_T2INDEX(old,lwb1,lwb2)
register A_DIM * old;
register A68_INT lwb1, lwb2;
#endif
{
	return( A_NR2INDEX(old,lwb1,lwb2) );
}

#ifdef __STDC__
A68_INT A_T3INDEX(const A_DIM *old, const A68_INT lwb1, const A68_INT lwb2, const A68_INT lwb3)
#else
A68_INT	A_T3INDEX(old,lwb1,lwb2,lwb3)
register A_DIM * old;
register A68_INT lwb1, lwb2, lwb3;
#endif
{
	return( A_NR3INDEX(old,lwb1,lwb2,lwb3) );
}
