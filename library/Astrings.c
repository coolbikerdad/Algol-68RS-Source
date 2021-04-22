/* $Id: Astrings.c,v 1.2 2002-02-01 14:39:52 sian Exp $ */


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
15:08:94  Module renamed from a68_strings.c to Astrings.c for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Remove '#include <sys/types.h>' now done in
                                  Ahostenv.h for sunos. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#include <algol68/Asupport.h>

static char rcs_id[] = "$Id: Astrings.c,v 1.2 2002-02-01 14:39:52 sian Exp $";

#ifdef __STDC__
A68_BOOL A_PVCEQ(const A68_VC s, const A68_VC t)
#else
A68_BOOL A_PVCEQ(s, t)
A68_VC   s, t ;
#endif
{
	register A68_CHAR *u = s.data;
	register A68_CHAR *v = t.data;
	register A68_INT len = s.upb;

	/* any two empty strings are equal */
	if (len < 1 && t.upb < 1) return (A68_TRUE);

	/* length must be the same for non empty ones */
	if (len != t.upb) return (A68_FALSE);

	while (len && *u++ == *v++) len--;
	return(!len);
}


#ifdef __STDC__
A68_BOOL A_PRCEQ(const A68_RC s, const A68_RC t)
#else
A68_BOOL A_PRCEQ(s, t)
A68_RC   s, t ;
#endif
{
	register A68_CHAR *u = s.data;
	register A68_CHAR *v = t.data;
	register A68_INT len = s.dim[0].upb -s.dim[0].lwb +1;

	/* any two empty strings are equal */
	if (len < 1 && t.dim[0].upb -t.dim[0].lwb < 0) return (A68_TRUE);

	/* length must be the same for non empty ones */
	if (len != t.dim[0].upb -t.dim[0].lwb +1) return (A68_FALSE);

	while	(len && *u == *v)
	{ 
		u += s.dim[0].stride; 
		v += t.dim[0].stride; 
		len--;
	}
	return (!len);
}


#ifdef __STDC__
A68_BOOL A_PVCLT(const A68_VC s, const A68_VC t)
#else
A68_BOOL A_PVCLT(s,t)
A68_VC   s,t;
#endif
{
	register A68_CHAR *u  = s.data;
	register A68_CHAR *v  = t.data;
	register A68_INT len  = A_MIN( s.upb, t.upb );
	register A68_INT d	  = 0;

	if (len > 0) while (len-- && (d = *u++ -*v++) == 0);

	return (d == 0 ? (s.upb < t.upb && t.upb > 0) : (d < 0));
}


#ifdef __STDC__
A68_BOOL A_PRCLT(const A68_RC s, const A68_RC t)
#else
A68_BOOL A_PRCLT(s,t)
A68_RC   s,t;
#endif
{
	register A68_CHAR *u  = s.data;
 	register A68_CHAR *v  = t.data;
	const A_DIM * s0        = & s.dim[0];
	const A_DIM * t0        = & t.dim[0];
	register A68_INT len  = A_MIN( s0->upb - s0->lwb, t0->upb - t0->lwb)+1;
	register A68_INT d    = 0;

	if (len > 0) while ( len-- && ((d = *u -*v) == 0))
	{	
		u += s0 -> stride;
		v += t0 -> stride;
	}

	return
	(  d == 0
	?  (  s0->upb - s0->lwb < t0->upb - t0->lwb
	   && t0->upb >= t0->lwb
	   )
	:  ( d < 0 )
	);
}


#ifdef __STDC__
A68_VC    A_PCPLUS(const A68_CHAR s, const A68_CHAR t)
#else
A68_VC    A_PCPLUS (s,t)
A68_CHAR    s,t;
#endif
{
	A68_VC u;
	u.upb     = 2;
	A_VHEAP(A68_CHAR,u);
	u.data[0] = s;
	u.data[1] = t;
	return (u);
}


#ifdef __STDC__
A68_VC     A_PVCPLUS(const A68_VC s, const A68_VC t)
#else
A68_VC     A_PVCPLUS(s,t)
A68_VC     s,t;
#endif
{
	if (s.upb < 1) return (t);
	if (t.upb < 1) return (s);
	{
		A68_VC u;
		register A68_INT len_s = s.upb;
		register A68_INT len_t = t.upb;
		u.upb = len_s +len_t;
		A_VHEAP(A68_CHAR,u);

		memcpy(u.data, s.data, A_INT_size_t(len_s));
		memcpy(u.data+len_s, t.data, A_INT_size_t(len_t));

		return(u);
	}
}


#ifdef __STDC__
A68_RC     A_PRCPLUS(const A68_RC s, const A68_RC t)
#else
A68_RC     A_PRCPLUS(s,t)
A68_RC     s,t;
#endif
{
	if (s.dim[0].upb < s.dim[0].lwb) return (t);
	if (t.dim[0].upb < t.dim[0].lwb) return (s);
	{
		A68_RC u;
		register A68_INT len_s = s.dim[0].upb - s.dim[0].lwb +1;
		register A68_INT len_t = t.dim[0].upb - t.dim[0].lwb +1;
		A_INITDIM(0,u,s.dim[0].lwb,s.dim[0].lwb+len_s+len_t-1,1);
		A_R1HEAP(A68_CHAR,u);

		if	(t.dim[0].stride == 1)
			memcpy(u.data+len_s, t.data, A_INT_size_t(len_t));
		else 
		{       register A68_CHAR *x = u.data +len_s;
			register A68_CHAR *y = t.data;
			while (len_t--) { *x++ = *y; y += t.dim[0].stride; }
		}

		if	(s.dim[0].stride == 1)
			memcpy(u.data, s.data, A_INT_size_t(len_s));
		else 
		{       register A68_CHAR *x = u.data;
			register A68_CHAR *y = s.data;
			while (len_s--) { *x++ = *y; y += s.dim[0].stride; }
		}

		return (u);
	}                     
}


#ifdef __STDC__
A68_VC   A_PCTIMES(const A68_CHAR c, A68_INT n)
#else
A68_VC   A_PCTIMES(c,n)
A68_CHAR c;
A68_INT  n;
#endif
{
	A68_VC   s;
	A68_CHAR *newdata;
	/* if n is not positive then return empty string */
	if	(n < 1)
	{
		A68_VC empty;
		return( A_VVAC(empty) );
	}
	s.upb = n;
	A_VHEAP(A68_CHAR,s);
	newdata = s.data;
	while (n--) *newdata++ = c;
	return(s);
}


#ifdef __STDC__
A68_VC     A_PVCTIMES(const A68_VC s, A68_INT n)
#else
A68_VC     A_PVCTIMES(s,n)
A68_VC     s;
A68_INT    n;
#endif
{
	register A68_INT len = s.upb;

	/* if s is empty or n is not positive then return empty string */
	if	(len < 1 || n < 1)
	{
		A68_VC empty;
		return( A_VVAC(empty) );
	}
	else
	{
		A68_VC   t;
		A68_CHAR *c;
		register A68_INT l = 0;
		t.upb = n * len;
		A_VHEAP(A68_CHAR,t);
		c = t.data;
		while (n--) memcpy (c +(l++*len), s.data, A_INT_size_t(len));
		return (t);
	}
}


#ifdef __STDC__
A68_RC   A_PRCTIMES(const A68_RC s, A68_INT n)
#else
A68_RC   A_PRCTIMES(s,n)
A68_RC   s;
A68_INT  n;
#endif
{
	register A68_INT len = s.dim[0].upb -s.dim[0].lwb +1;

	/* if s is empty or n is not positive then return empty string */
	if	(len < 1 || n < 1)
	{
		A68_RC empty;
		return( A_R1VAC(empty) );
	}
	else
	{
		A68_RC   t;
		A68_CHAR *c;
		register A68_INT l = 0;

		A_INITDIM(0,t,s.dim[0].lwb,s.dim[0].lwb+n*len-1,1);
		A_R1HEAP(A68_CHAR,t);
		c = t.data;

		if	(t.dim[0].stride == 1)
			while (n--) memcpy( c +(l++*len), s.data, A_INT_size_t(len));
		else
			/* cannot use memcpy */
			while (n--)
			{
				register A68_CHAR *x = c +(l++*len);
				register A68_CHAR *y = s.data;
				register A68_INT   z = len;
				while (z--)
				{	*x++ = *y; y += s.dim[0].stride;
				}
			}
		return (t);
	}
}

