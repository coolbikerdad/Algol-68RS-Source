/* $Id: Aassign.c,v 1.2 2002-02-01 14:39:52 sian Exp $ */
  

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
15:08:94  Module renamed from a68_assign.c to Aassign.c for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Remove '#include <sys/types.h>' now done in
                                  Ahostenv.h for sunos, included via
                                  Asupport.h 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
 *	Assignment functions
 *	The associated macros are in a68_assign.h
 */

#include <algol68/Asupport.h>

static char rcs_id[] = "$Id: Aassign.c,v 1.2 2002-02-01 14:39:52 sian Exp $";

/*	copy vec	*/

A68_VOID A_PVASSIGN( const void *p_d1, void *p_d2, A68_INT upb1, const A68_INT upb2, const A68_INT length)
/*
 *  d1		contiguous data area to be copied from
 *  d2		contiguous data area to be copied to
 *  upb1,2	the upper bounds 
 *  length	length of an element
 */
{
  const char *d1 = p_d1;
  char *d2 = p_d2;
	if (upb1 != upb2)
		A_ERROR("A_PVASSIGN: bounds do not match in VECTOR[] assignment");
	if (d2 >= d1 && d2 <= d1 +upb1 *length)
	{
		d1 += (upb1 -1) *length;
		d2 += (upb2 -1) *length;

		if (length == 1)
			while (upb1-- >= 1) *(char *)d2-- = *(char *)d1--;
		else
			/* We can still use memcpy to copy individual elems */

			for (;upb1-- >= 1; d1 -= length, d2 -= length)
				memcpy (d2,d1,A_INT_size_t(length));
	}
	else
	if (d1 >= d2 && d1 <= d2 +upb2 *length)
		if (length == 1)
			while (upb1-- >= 1) *(char *)d2++ = *(char *)d1++;
		else
			/* We can still use memcpy to copy individual elems */

			for (;upb1-- >= 1; d1 += length, d2 += length)
				memcpy (d2,d1,A_INT_size_t(length));
	else
		memcpy(d2,d1,A_INT_size_t(upb1*length));
}


/*	copy []		*/

#ifdef __STDC__
A68_VOID A_PR1ASSIGN( const void *p_d1, void *p_d2, const A_DIM dim1[1], const A_DIM dim2[1], const A68_INT length)
#else
A68_VOID A_PR1ASSIGN(	d1, d2,
		dim1, dim2, length)
char 		*d1, *d2;
A68_INT		length;
A_DIM		dim1[1], dim2[1];
#endif

/*
 *  d1		data area to be copied from
 *  d2		contiguous data area to be copied to
 *  dim1,2	the descriptors for the 1st dimension
 *  length	length of an element
 */
{
#ifdef __STDC__
  const char *d1 = p_d1;
  char *d2 = p_d2;
#endif
	register A68_INT no1, bstride1, bstride2;

	no1 = dim1[0].upb -dim1[0].lwb;
	bstride1 = length *dim1[0].stride;
	bstride2 = length *dim2[0].stride;

	if (no1 != dim2[0].upb -dim2[0].lwb)
		A_ERROR("ASSIGN2: bounds do not match in [] assignment");
	else
	if (d2 >= d1 && d2 <= d1 +(no1 +1) *bstride1)
	{
		/*  Right overlap:
		 *  [][][][][]
		 *        [][][][][]
		 *  We copy from right to left
		 */
		d1 += no1 *bstride1;
		d2 += no1 *bstride2;

		if (length == 1)
			for (;no1-- >= 0; d1 -= bstride1, d2 -= bstride2)
				*(char *)d2 = *(char *)d1;
		else
			/* We can still use memcpy to copy individual elems */

			for (;no1-- >= 0; d1 -= bstride1, d2 -= bstride2)
				memcpy (d2,d1,A_INT_size_t(length));
	}
	else
	if (dim1[0].stride == 1 && dim2[0].stride == 1 &&
	    ! (d1 >= d2 && d1 <= d2 +(no1 +1) *bstride2))

		/* No overlap & contiguous */
		memcpy (d2, d1, A_INT_size_t((no1 +1) *length));
	else
	if (length == 1)
		for (;no1-- >= 0; d1 += bstride1, d2 += bstride2)
			*(char *)d2 = *(char *)d1;
	else
		/* We can still use memcpy to copy individual elems */
		for (;no1-- >= 0; d1 += bstride1, d2 += bstride2)
			memcpy (d2,d1,A_INT_size_t(length));
}


/*	copy [,]	*/

#ifdef __STDC__
A68_VOID A_PR2ASSIGN( const void *p_d1, void *p_d2, const A_DIM dim1[2], const A_DIM dim2[2], const A68_INT length )
#else
A68_VOID A_PR2ASSIGN(	d1,d2,
		dim1, dim2,
	  	length)
char		*d1, *d2;
A68_INT		length;
A_DIM		dim1[2], dim2[2];
#endif

/*
 *  d1		data area to be copied from
 *  d2		contiguous data area to be copied to
 *  length	length of an element
 */
{
#ifdef __STDC__
  const char *d1 = p_d1;
  char *d2 = p_d2;
#endif
	register A68_INT l11, l21, no10, no11,
		     stride10, stride11, stride20, stride21;
	A68_INT	     oldno11;

	no10 = dim1[0].upb -dim1[0].lwb;
	no11 = dim1[1].upb -dim1[1].lwb;
	oldno11 = no11;

	/* Note that the strides are NOT multiplied by length */

	stride10 = dim1[0].stride;
	stride11 = dim1[1].stride;
	stride20 = dim2[0].stride;
	stride21 = dim2[1].stride;

	if (no10 != dim2[0].upb -dim2[0].lwb ||
	    no11 != dim2[1].upb -dim2[1].lwb)
		A_ERROR("A_PR2ASSIGN: bounds do not match in [,] assignment");
	else
	if (d2 >= d1 && d2 < d1 +(no10*stride10 +(no11+1)*stride11) *length)

		/*  Right overlap:
 		 *  [][]  [][]  [][]  [][]
 		 *    [][]  [][]  [][]  [][]
 		 */

		if (length == 1)
		{
			d1 += no10*stride10 +no11*stride11;
			d2 += no10*stride20 +no11*stride21;

			/* note that stride isnt multiplied by length */
			for (;no10-- >= 0; d1 -= stride10, d2 -= stride20)
				for (no11 = oldno11, l11 = 0, l21 = 0; no11-- >= 0;
				     l11 -= stride11, l21 -= stride21)
					*((char *)d2 +l21) = *((char *)d1 +l11);
		}
		else
		{	/* We can still use memcpy for individual elements */

			d1 += (no10*stride10 +no11*stride11) *length;
			d2 += (no10*stride20 +no11*stride21) *length;

			stride10 *= length;
			stride11 *= length;
			stride20 *= length;
			stride21 *= length;

			for (;no10-- >= 0; d1 -= stride10, d2 -= stride20)
				for (no11 = oldno11, l11 = 0, l21 = 0; no11-- >= 0;
				     l11 -= stride11, l21 -= stride21)
					memcpy(d2 +l21, d1 +l11, A_INT_size_t(length));
		}
	else
	if (stride11 == 1       && stride21 == 1 &&
	    stride10 == no11 +1 && stride20 == no11 +1 &&
	    ! (d1 >= d2 && d1 < d2 +(no10*stride20 +(no11+1)) *length))

		/* No overlap & contiguous */
		memcpy (d2, d1, A_INT_size_t((no10 +1) *(no11 +1) *length));
	else
	if (length == 1)

		/* note that stride isnt multiplied by length */
		for (;no10-- >= 0; d1 += stride10, d2 += stride20)
			for (no11 = oldno11, l11 = 0, l21 = 0; no11-- >= 0;
			     l11 += stride11, l21 += stride21)
				*((char *)d2 +l21) = *((char *)d1 +l11);
	else
	{	/* We can still use memcpy for individual elements */

		stride10 *= length;
		stride11 *= length;
		stride20 *= length;
		stride21 *= length;

		for (;no10-- >= 0; d1 += stride10, d2 += stride20)
			for (no11 = oldno11, l11 = 0, l21 = 0; no11-- >= 0;
			     l11 += stride11, l21 += stride21)
				memcpy(d2 +l21, d1 +l11, A_INT_size_t(length));
	}
}


/*	copy [,,]	*/

#ifdef __STDC__
A68_VOID A_PR3ASSIGN( const void *p_d1, void *p_d2, const A_DIM dim1[3], const A_DIM dim2[3], const A68_INT length )
#else
A68_VOID A_PR3ASSIGN(	d1,d2,
		dim1, dim2,
	   	length)
char		*d1, *d2;
A68_INT		length;
A_DIM		dim1[3], dim2[3];
#endif

/*
 *  d1		data area to be copied from
 *  d2		contiguous data area to be copied to
 *  length	length of an element
 */
{
#ifdef __STDC__
  const char *d1 = p_d1;
  char *d2 = p_d2;
#endif
	register A68_INT l11, l12, l21, l22,
		     no10, no11, no12,
		     stride10, stride11, stride12, 
		     stride20, stride21, stride22;
	A68_INT 	     oldno11, oldno12;

	d1 = d1;
	d2 = d2;
	no10 = dim1[0].upb -dim1[0].lwb;
	no11 = dim1[1].upb -dim1[1].lwb;
	no12 = dim1[2].upb -dim1[2].lwb;
	oldno11 = no11;
	oldno12 = no12;

	/* Note that the strides are NOT multiplied by length */

	stride10 = dim1[0].stride;
	stride11 = dim1[1].stride;
	stride12 = dim1[2].stride;
	stride20 = dim2[0].stride;
	stride21 = dim2[1].stride;
	stride22 = dim2[2].stride;

	if (no10 != dim2[0].upb -dim2[0].lwb ||
	    no11 != dim2[1].upb -dim2[1].lwb ||
	    no12 != dim2[2].upb -dim2[2].lwb)
		A_ERROR("A_PR3ASSIGN: bounds do not match in [,,] assignment");
	else
	if (d2 >= d1 &&
	    d2 < d1 +(no10*stride10 +no11*stride11 +(no12+1)*stride12) *length)

		/*  Right overlap:
 		 *  [][]  [][]  [][]  [][]
 		 *    [][]  [][]  [][]  [][]
 		 */

		if (length == 1)
		{

			d1 += no10*stride10 +no11*stride11 +no12*stride12;
			d2 += no10*stride20 +no11*stride21 +no12*stride22;

			/* note that stride isnt multiplied by length */
			for (;no10-- >= 0; d1 -= stride10, d2 -= stride20)
				for (no11 = oldno11, l11 = 0, l21 = 0;
				     no11-- >= 0;
				     l11 -= stride11, l21 -= stride21)
					for (no12 = oldno12, l12 = l11,
					     l22 = l21; no12-- >= 0;
					     l12 -= stride12, l22 -= stride22)
						*((char *)d2 +l22) = *((char *)d1 +l12);
		}
		else
		{	/* We can still use memcpy for individual elements */

			d1 += (no10*stride10 +no11*stride11 +no12*stride12) *length;
			d2 += (no10*stride20 +no11*stride21 +no12*stride22) *length;

			stride10 *= length;
			stride11 *= length;
			stride12 *= length;
			stride20 *= length;
			stride21 *= length;
			stride22 *= length;

			for (;no10-- >= 0; d1 -= stride10, d2 -= stride20)
				for (no11 = oldno11, l11 = 0, l21 = 0;
				     no11-- >= 0;
				     l11 -= stride11, l21 -= stride21)
					for (no12 = oldno12, l12 = l11,
					     l22 = l21; no12-- >= 0;
					     l12 -= stride12, l22 -= stride22)
						memcpy(d2+l22,d1+l12,A_INT_size_t(length));

		}
	else
	if (stride12 == 1       && stride22 == 1       &&
	    stride11 == no12 +1 && stride21 == no12 +1 &&
	    stride10 == no11 +1 && stride20 == no11 +1 &&
	    ! (d2 >= d1 && d2 < d1 +(no10*stride10 +no11*stride11 +(no12+1)*stride12) *length))

		/* No overlap & contiguous */
		memcpy (d2, d1, A_INT_size_t((no10 +1) *(no11 +1) *(no12 +1) *length));
	else
	if (length == 1)

		/* note that stride isnt multiplied by length */
		for (;no10-- >= 0; d1 += stride10, d2 += stride20)
			for (no11 = oldno11, l11 = 0, l21 = 0;
			     no11-- >= 0;
			     l11 += stride11, l21 += stride21)
				for (no12 = oldno12, l12 = l11,
				     l22 = l21; no12-- >= 0;
				     l12 += stride12, l22 += stride22)
					*((char *)d2 +l22) = *((char *)d1 +l12);
	else
	{	/* We can still use memcpy for individual elements */
		stride10 *= length;
		stride11 *= length;
		stride12 *= length;
		stride20 *= length;
		stride21 *= length;
		stride22 *= length;

		for (;no10-- >= 0; d1 += stride10, d2 += stride20)
			for (no11 = oldno11, l11 = 0, l21 = 0;
			     no11-- >= 0;
			     l11 += stride11, l21 += stride21)
				for (no12 = oldno12, l12 = l11,
				     l22 = l21; no12-- >= 0;
				     l12 += stride12, l22 += stride22)
					memcpy(d2+l22,d1+l12,A_INT_size_t(length));

	}
}
