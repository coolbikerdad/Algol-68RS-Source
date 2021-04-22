/* $Id: Amacros.h,v 1.2 2002-02-19 11:40:12 sian Exp $ */


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
18:03:94  Bug in STRAIGHT (STRINDEX) - struct return.  DCT
24:03:94  Macros for supporting standard COMPL operators added.  DCT
26:04:94  Module renamed from a68_macros.h to Amacros.h for porting.  DCT
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
05:12:94  33.002  DJS   CmplxNos  Add macros for complex numbers.
29:03:95  34.003  ELLA  Modcprght Change copyright header
16:10:99  34.003  SL    Phoenix Engineering: macro call corrections
*/

/*	Amacros.h - Algol 68 support macros

	NB a macro yielding a structure s is of the form (*(...,&s)) so
	that it can be selected subsequently
*/

#ifndef Amacros_h
#define Amacros_h

#include <algol68/Atypes.h>
#include <string.h>
#include <math.h>

/*	display of error messages	*/

#define A_ERROR(message)	(A68_ERROR(message),0)

/*	boolean denotations	*/
#define	A68_TRUE	1
#define	A68_FALSE	0

/*
	SPACE GENERATION
*/
#include <algol68/Aalloc.h>

/*
        PROC ENTRY AND EXIT HOOKS
*/

#if !defined(A_PROC_ENTRY)
#define A_PROC_ENTRY(proc)
#endif

#if !defined(A_PROC_EXIT)
#define A_PROC_EXIT(proc)
#endif

/*
	COERCIONS ETC
*/

/* initialise a dimension of a descriptor */
#define A_INITDIM(index,row,xlwb,xupb,xstride)\
	(row).dim[index].lwb=xlwb,\
	(row).dim[index].upb=xupb,\
	(row).dim[index].stride=xstride

/*	amode -> []amode	*/
#define A_ARR(row,scalar,type)\
	(*(A_INITDIM(0,row,1,1,1),\
	   A_R1SETGCMARK(row),\
	   (row).data= scalar, &(row)))

#define A_HARR(row,scalar,type)\
	(*( A_INITDIM(0,row,1,1,1),\
	A_R1HEAP(type,row),\
	(*(row).data)= scalar, &(row)))

/*	amode -> vector[]amode	*/
#define A_VEC(vec,refscalar,type)\
	(*((vec).upb=1, A_VSETGCMARK(vec), (vec).data= refscalar, &(vec)))
        
#define A_HVEC(vec,scalar,type)\
	(*((vec).upb=1, A_VHEAP(type,vec), (*(vec).data)=scalar,&(vec)))
        
/*	amode -> struct 1 amode	*/
#define A_IS(is,scalar)\
	(*((is).data[0]= scalar, &(is)))

/*	struct n amode -> [n]amode	*/
            
#define  A_GISARR(type,uniq,istruct,upb)\
static type uniq = { istruct.data, A_GC_MARK(1), {1,upb,1} };

#define  A_XIS1ARR(row,isdata,size)\
	(*( A_INITDIM(0,row,1,size,1),\
	A_R1SETGCMARK(row),\
	(row).data=isdata, &(row)))

#define  A_IS1ARR(row,is,type,size1)\
	 A_XIS1ARR(row,(is)->data,size1)

#define  A_HIS1ARR(row,is,type,size1)\
	(*(A_XIS1ARR(row,A_R1HEAP(type,row),size1),\
	 memcpy((char *)(row).data,(char *)(is).data,A_INT_size_t(sizeof(type)*size1)),\
	 &(row)))

/* Line in the next #define changed by Phoenix Engineering PE61-10-16
	    A_R2SETGCMARK(row,2),\ */
#define  A_XIS2ARR(row,isdata,size1,size2)\
	(*( A_INITDIM(0,row,1,size1,size2),\
	    A_INITDIM(1,row,1,size2,1),\
	    A_R2SETGCMARK(row),\
	   (row).data=isdata, &(row)))
                               
#define  A_IS2ARR(row,is,type,size1,size2)\
	 A_XIS2ARR(row,(is)->data,size1,size2)

#define  A_HIS2ARR(row,is,type,size1,size2)\
	(*(A_XIS2ARR(row,A_R2HEAP(type,row),size1,size2),\
	 memcpy((char *)(row).data,\
		(char *)(is).data,\
		A_INT_size_t(sizeof(type)*size1*size2)),\
	 &(row)))

/* Line in the next #define changed by Phoenix Engineering PE61-10-16
            A_R3SETGCMARK(row,3),\ */
#define  A_XIS3ARR(row,isdata,size1,size2,size3)\
	(*( A_INITDIM(0,row,1,size1,size3*size2),\
	    A_INITDIM(1,row,1,size2,size3),\
	    A_INITDIM(2,row,1,size3,1),\
	    A_R3SETGCMARK(row),\
	    (row).data=isdata, &(row)))

#define  A_IS3ARR(row,is,type,size1,size2,size3)\
	 A_XIS3ARR(row,(is)->data,size1,size2,size3)

#define  A_HIS3ARR(row,is,type,size1,size2,size3)\
	(*(A_XIS3ARR(row, A_R3HEAP(type,row),size1,size2,size3),\
	 memcpy((char *)(row).data,\
		(char *)(is).data,\
		A_INT_size_t(sizeof(type)*size1*size2*size3)),\
	 &(row)))
                                                
/*	ref struct n amode -> ref vector[n]amode    	*/
            
#define  A_GISVEC(type,uniq,istruct,upb)\
static type uniq = { istruct.data, A_GC_MARK(0), upb };

#define  A_ISVEC(vec,is,size,type)\
	(*((vec).upb=size, (vec).data=(is)->data, A_VSETGCMARK(vec), &(vec)))

/*	struct n amode -> vector[n]amode and heap the data   	*/
#define  A_HISVEC(vec,is,size,type)\
	(*((vec).upb=size, A_VHEAP(type,vec),\
	 memcpy((char *)(vec).data,(char *)(is).data,A_INT_size_t(sizeof(type)*size)),\
	 &(vec)))
                            
/*	vector[n]amode -> [n]amode	*/
#define  A_VECARR(vec,row)\
	(*( A_INITDIM(0,row,1,(vec).upb,1),\
	A_R1SETGCMARK(row), (row).data=vec.data, &(row)))

/*	[] -> [,]	*/
#define  A_ARR12(a,b)\
	(*( A_INITDIM(0,b,1,1,1), (b).dim[1]=(a).dim[0],\
	    A_R2SETGCMARK(b), (b).data=(a).data, &(b)))

/*	[,] -> [,,]	*/
#define  A_ARR23(a,b)\
	(*( A_INITDIM(0,b,1,1,1),\
	   (b).dim[1]=(a).dim[0], (b).dim[2]=(a).dim[1],\
	   A_R3SETGCMARK(b), (b).data=(a).data, &(b)))

/*	mode -> union(mode,...)  */
#define  A_UNITE(name,modename,modenumber,value)\
	(*((name).mode = modenumber, (name).data.modename = value, &(name)))

/*	union(mode,...) -> union(...,mode,...)  compile-time mode offset */
#define  A_UUNITE(temp,offset,value)\
	(*((temp).mode=(value).mode+offset,\
	   memcpy((char *)(&((temp).data)),(char *)(&((value).data)),\
	   sizeof((temp).data)), &(temp)))

/*	union(mode,...) -> union(...,mode,...)  run-time table required */
#define  A_UTABUNITE(temp,table,value)\
	(*((temp).mode=table[(value).mode],\
	   memcpy((char *)(&((temp).data)),(char *)(&((value).data)),\
	   sizeof((temp).data)), &(temp)))
                                          
/*	unite void to union  */
#define A_EMPTY(temp,modenumber)\
	(*((temp).mode=modenumber,&(temp)))

/*	vacuum  */
#define  A_VVAC(temp)\
	(*((temp).upb=0,(temp).data=A68_NIL, A_VSETGCMARK(temp), &(temp)))

#define	A_R1VAC(temp)\
	(*( A_INITDIM(0,temp,1,0,1),\
	  A_R1SETGCMARK(temp), (temp).data=A68_NIL, &(temp)))

#define	A_R2VAC(temp)\
 	(*(A_INITDIM(0,temp,1,0,1),\
	   (temp).dim[1]=(temp).dim[0],\
	   A_R2SETGCMARK(temp), (temp).data=A68_NIL, &(temp)))

#define	A_R3VAC(temp)\
	(*(A_INITDIM(0,temp,1,0,1),\
	   (temp).dim[2]=(temp).dim[1]=(temp).dim[0],\
	   A_R3SETGCMARK(temp), (temp).data=A68_NIL, &(temp)))

/*
	FIELD SELECTION AND ARRAY INDEXING
*/

/*
	Bound checking is DISABLED by default for efficiency.
	It is enabled by defining A68_CHECK, which may be done by the
	user at C compile time by using the 'cc' option '-DA68_CHECK'.
*/

/*
	A68_GC_CHECK may be set to test that the garbage collector
	mark is being set properly, and the array bounds are sensible.
	It causes code to be generated to check that the mark and bounds
	are OK at most array operations.
	This option should only be used by CTRANS developers.
*/


#ifdef  A68_GC_CHECK

#define A68_CHECK
#undef	A68_NOCHECK

#define A_VGCCHECK(desc)	( *( A_vgccheck((desc).gc,(desc).upb), &(desc) ) )
#ifdef __STDC__
static	A68_VOID A_vgccheck(const A68_INT gcmark,const A68_INT upb)
#else
static	A68_VOID A_vgccheck(gcmark,upb)
A68_INT	gcmark, upb;
#endif
{
	if ( gcmark != A_GC_MARK(0) )
		A_ERROR("Internal error: gc mark not set");
	if ( upb < -100 || upb > 16*1024*1024 )
		A_ERROR("Internal error: vector upb ridiculous");
}

#define A_RGCCHECK(desc,n)	( *( A_rgccheck((desc).gc,n,(desc).dim), &(desc) ) )
#ifdef __STDC__
static	A68_VOID A_rgccheck(const A68_INT gcmark,const A68_INT n,const A_DIM *dim)
#else
static	A68_VOID A_rgccheck(gcmark,n,dim)
A68_INT			gcmark;
register A68_INT	n;
register A_DIM		*dim;
#endif
{
	if ( gcmark != A_GC_MARK(n) )
		A_ERROR("Internal error: gc mark not set");
	for( ; (--n) >= 0; dim++ )
	{
		register A68_INT size = dim->upb - dim->lwb + 1;
		if ( size < -100 || size > 16*1024*1024 )
			A_ERROR("Internal error: row size ridiculous");
		if ( dim->stride < 1 || dim->stride > 1*1024*1024 )
			A_ERROR("Internal error: row stride ridiculous");
	}
}

#else

#define A_VGCCHECK(desc)	(desc)
#define A_RGCCHECK(desc,dim)	(desc)

#endif

/* The following macro sets the default symbol for array bound checks */
#if !defined( A68_CHECK ) && !defined( A68_NOCHECK )
#define A68_NOCHECK			/* This is the default setting */
#endif

/*  	simple vector index	*/
#define A68_BCHECK(index,lwb,upb)\
	( ( (index) > (upb) || (index) < (lwb) )\
	? A_ERROR("Subscript out of bounds")\
	: (index)\
	)

#define	A_NVINDEX(src,elem) ( (src).data[(elem) -1] )

#ifdef  A68_CHECK
#define A_VINDEX(src,elem) A_NVINDEX(A_VGCCHECK(src),A68_BCHECK(elem,1,(src).upb))
#else
#define A_VINDEX(src,elem) A_NVINDEX(src,elem)
#endif

/*	simple row index	*/

/* The following macros yield an array index without bound checking */
#define A_NR1INDEX(dim,i)\
	( ((i)-dim[0].lwb)*dim[0].stride )

#define A_NR2INDEX(dim,i,j)\
	( ((i)-dim[0].lwb)*dim[0].stride+\
	  ((j)-dim[1].lwb)*dim[1].stride)

#define A_NR3INDEX(dim,i,j,k)\
	( ((i)-dim[0].lwb)*dim[0].stride+\
	  ((j)-dim[1].lwb)*dim[1].stride+\
	  ((k)-dim[2].lwb)*dim[2].stride )

/* The following macros do the indexing, optionally bound checking */
#ifdef	A68_CHECK
#define A_R1INDEX(r,i)\
	( A_RGCCHECK(r,1).data[ A_B1CHECK((r).dim,i) ] )
#else
#define A_R1INDEX(r,i)\
	( (r).data[ A_NR1INDEX((r).dim,i) ] )
#endif   

#ifdef  A68_CHECK
#define A_R2INDEX(r,i,j)\
  	( A_RGCCHECK(r,2).data[ A_B2CHECK((r).dim,i,j)] )
#else
#define A_R2INDEX(r,i,j)\
	( (r).data[ A_NR2INDEX((r).dim,i,j) ] )
#endif

#ifdef  A68_CHECK
#define A_R3INDEX(r,i,j,k)\
	( A_RGCCHECK(r,3).data[ A_B3CHECK((r).dim,i,j,k)] )
#else
#define A_R3INDEX(r,i,j,k)\
	( (r).data[ A_NR3INDEX((r).dim,i,j,k) ] )
#endif

/*	istruct index		*/
#define  A_ISINDEX(src,elem)\
     	( (src).data[(elem)-1] )

/*	straight index (call indexing proc)	*/
#define	A_STRINDEX(s,i,t) (t=(s), (t.index)(i,t.composite))
#define	A_STRINDEX_RTN(s,i,t,u) (t=(s), (t.index)(i,t.composite,&u), u)

/*	create a straight	*/
#define	A_OPSTRAIGHT(c,i,u,str)\
	((str).composite = (char *) (c),\
	 (str).index = (i).fn.fn_global, (str).upb = (u), (str))

/*	vector trim	*/

/* patched version by RW until we get a A_VRTRIM for trim of vector returning row */
/* #define	A_VTRIM(new,old,lwb) (*((new).data = &A_NVINDEX(A_VGCCHECK(old),lwb), A_VSETGCMARK(new), &new)) */
#define	A_VTRIM(new,old,lwb) (*((new).data = &A_NVINDEX(A_VGCCHECK(old),lwb),\
				( sizeof(new) == sizeof(A68_VC) ? A_VSETGCMARK(new) : A_R1SETGCMARK(new) ),\
				&new))

/*	row trims	*/
#define	A_R1TRIM(new,old,trim)\
	(*(A_R1SETGCMARK(new),\
	(new).data = &(A_RGCCHECK(old,1).data[A_T1INDEX((old).dim,trim)]), &new))
#define	A_R2TRIM(new,old,t1,t2)\
	(*(A_R2SETGCMARK(new),\
	(new).data = &(A_RGCCHECK(old,2).data[A_T2INDEX((old).dim,t1,t2)]), &new))
#define	A_R3TRIM(new,old,t1,t2,t3)\
	(*(A_R3SETGCMARK(new),\
	(new).data = &(A_RGCCHECK(old,3).data[A_T3INDEX((old).dim,t1,t2,t3)]), &new))

/*	FORALL CONTROL - strip one dimension off the original	*/

/*	strip [,]	*/
#define	A_R2STRIP(row,ctrl)\
	((ctrl).dim[0]=A_RGCCHECK(row,2).dim[1],\
	 A_R1SETGCMARK(ctrl),\
	 (ctrl).data=(row).data)

/*	strip [,,]	*/
#define	A_R3STRIP(row,ctrl)\
	((ctrl).dim[0]=A_RGCCHECK(row,3).dim[1],\
	 (ctrl).dim[1]=(row).dim[2],\
	 A_R2SETGCMARK(ctrl),\
	 (ctrl).data=(row).data)

/*	bound pack; initialise strides	*/

#define	A_1INITSTRIDES(t)\
	(t.dim[0].stride=1,\
	 t.dim[0].upb-t.dim[0].lwb+1)

#define A_2INITSTRIDES(t)\
	(t.dim[1].stride=1,\
	 t.dim[0].stride=t.dim[1].upb-t.dim[1].lwb+1,\
	 t.dim[0].stride*(t.dim[0].upb-t.dim[0].lwb+1))

#define	A_3INITSTRIDES(t)\
  	(t.dim[2].stride=1,\
	 t.dim[1].stride=t.dim[2].upb-t.dim[2].lwb+1,\
	 t.dim[0].stride=t.dim[1].stride*(t.dim[1].upb-t.dim[1].lwb+1),\
	 t.dim[0].stride*(t.dim[0].upb-t.dim[0].lwb+1))
	
/*	implied SKIP in choice clause returning non-void result */
/*	generate run-time error */
#define	A_IMP_SKIP A_ERROR("attempt to jump to missing ELSE/OUT clause")

/*	explicit SKIP in an enquiry clause */
#define	A_ENQ_SKIP A_ERROR("attempt to evaluate SKIP enquiry clause")


/*
	the following definitions are needed for operators
*/

#define A_VSTRUCTCOMP(a,b)\
	((a).data == (b).data && (a).upb == (b).upb)

#define	A_RSTRUCTCOMP(a,b)\
	( (a).data == (b).data\
	&& memcmp( ((a).dim), ((b).dim), sizeof((a).dim) ) == 0 )

#define	A_MIN(a,b)	((a)<(b)?(a):(b))
#define	A_MAX(a,b)	((a)>=(b)?(a):(b))

#define A_ABS(a)\
	( (a)<0 ? -(a) : (a) )
          
#define A_SIGN(a)\
	( (a)>0 ? 1 :(a)<0 ? -1 : 0 )

#define A_ENTIER(temp1,temp2,a,mode)\
       (temp1 = modf((a), &temp2),\
	mode ( (a)>0 ? temp2 : temp1 == 0.0 ? temp2 : temp2 -1 ))

/* b cannot be a register variable */
#define A_ROUND(temp1,a,mode)\
        (modf (((a) < 0 ? (a)-0.5 : (a)+0.5), &temp1), mode (temp1))

#define A_SHL(a,b)\
	( (b)<0 ? (a)>>(-(b)) : (a)<<(b) )

#define A_SHR(a,b)\
	( (b)<0 ? (a)<<(-(b)) : (a)>>(b) )

#define A_ELEM(a,b,cast,size)\
	( ( (b)>>(size-(a)) ) & 1 )

#define A_LI_POWER(a,b,mode)\
	(mode A_POWER((a),(b)))
	/* LINT a to the power INT b */

#define A_LR_POWER(a,b,mode)\
	(((a)==0&&(b)==0?1:(mode pow((a),(double)(b)))))
	/* LREAL to the power INT b */

#define	A_MOD(a,b,temp)	(temp=(a)-((a)/(b))*(b),(temp)<0 ? temp+A_ABS(b) : temp)

#define A_MODAB(a,b)	( (a)+=( ((a)-=((a)/(b))*(b))<0 ? A_ABS(b) : 0) )

#define A_LB_LE(a,b)	(((a)&(b))==(a))
#define A_LB_GE(a,b)	(((a)&(b))==(b))

/*   operators to and from MODE COMPL   */
/*   t,u = intermediate values and/or result,  i,r,s,x,y,z = params  */
/*   ABS and ARG only valid for modes that map to double */

#define PI                      3.141592653589793238462643
#define HALFPI                  1.570796326794896619231322
#define A_COMPL_RC(t,r)         (t.Re = (r), t.Im = 0.0, t)
#define A_COMPL_MMINUS(t,z)     (t.Re = -(z).Re, t.Im = -(z).Im, t)
#define A_COMPL_ABS(z)          sqrt((z).Re*(z).Re + (z).Im*(z).Im)
#define A_COMPL_RE(z)           (z).Re
#define A_COMPL_IM(z)           (z).Im
/*   New macro A_COMPL_ARG -- DCT/PE62-01-20   */
#define A_COMPL_ARG(z)          atan2((z).Im, (z).Re)
#define A_COMPL_CONJ(t,z)       (t.Re = (z).Re, t.Im = -(z).Im, t)

#define A_COMPL_PLUS(t,x,y)     (t.Re = (x).Re + (y).Re, t.Im = (x).Im + (y).Im, t)
#define A_COMPL_MINUS(t,x,y)    (t.Re = (x).Re - (y).Re, t.Im = (x).Im - (y).Im, t)
#define A_COMPL_EQ(x,y)         ((x).Re == (y).Re && (x).Im == (y).Im)
#define A_COMPL_NEQ(x,y)        ((x).Re != (y).Re || (x).Im != (y).Im)
#define A_COMPL_TIMES(t,x,y)    ( t.Re = (x).Re * (y).Re - (x).Im * (y).Im, \
                                  t.Im = (x).Re * (y).Im + (x).Im * (y).Re, t )
#define A_COMPL_DIVIDE(t,u,x,y) ( u = (y).Re * (y).Re + (y).Im * (y).Im, \
                                  t.Re = ((x).Re * (y).Re + (x).Im * (y).Im) / u, \
                                  t.Im = ((x).Im * (y).Re - (x).Re * (y).Im) / u, t )
#define A_COMPL_I(t,r,s)        (t.Re = (r), t.Im = (s), t)
#define A_COMPL_PLUSAB(x,y)     ((x).Re += (y).Re, (x).Im += (y).Im, (x))
#define A_COMPL_MINUSAB(x,y)    ((x).Re -= (y).Re, (x).Im -= (y).Im, (x))
#define A_COMPL_TIMESAB(t,x,y)  ((x) = A_COMPL_TIMES(t,x,y))
#define A_COMPL_DIVAB(t,u,x,y)  ((x) = A_COMPL_DIVIDE(t,u,x,y))

/* Dummy definition */
#define A_COMPL_POWER(z,i) (z)

/* New macros for A_COMPL_POWER -- SL/PE61-10-13 
#define A_COMPL_CIS(t,r) (t.Re=cos(r),t.Im=sin(r),t)
#define A_COMPL_LN(t,z) (t.Re=ln(A_COMPL_ABS(z)),t.Im=A_COMPL_ARG(z),t)
#define A_COMPL_EXP(t,u,z) \
	A_COMPL_TIMES(t,A_COMPL_RC(u,exp(z.Re)),A_COMPL_CIS(u,z.Im))

#define A_COMPL_FINITE(z) ((A_REAL_FINITE(z.Re) && A_REAL_FINITE(z.Im))
#define A_COMPL_VALID(z) ((A_REAL_VALID(z.Re) && A_REAL_VALID(z.Im))
#define A_COMPL_INFINITE(z) ((A_COMPL_VALID(z) && (A_COMP_FINITE(z)==0))!=0)
#define A_COMPL_EQ_ZERO(z) ((z.Re==0.0) && (z.Im==0.0))

#define A_COMPL_VAL_infinity(t) (t.Re=1/0,t.Im=1/0,t)
#define A_COMPL_VAL_indefinite(t) (t.Re=1/0-1/0,t.Im=1/0-1/0,t)

#define A_COMPL_POWER(z,i) \
	A_COMPL_PWR(A_COMPLTEMP1,A_COMPLTEMP2,z,A_COMPL_RC(A_COMPLTEMP3,i))
#define A_COMPL_PWR(t,u,x,y) \
	( (t=A_COMPL_EXP(A_COMPL_TIMES(u,y,A_COMPL_LN(x))),\
	   A_COMPL_VALID(t))?t:\
	   A_COMPL_EQ_ZERO(x)?((y.Re>0.0)?A_COMPLVAL_zero \
		              :(y.Re<0.0)?A_COMPLVAL_infinity(u)\
			                 :A_COMPLVAL_indefinite(u))\
			     :A_COMPL_INFINITE(x)?\
			       ((y.Re<0.0)?A_COMPLVAL_zero \
			       :(y.Re>0.0)?A_COMPLVAL_infinity(u)\
			                  :A_COMPLVAL_indefinite(u))\
			     :A_COMPLVAL_indefinite)
*/

/* 	collected non-locals scheme	*/

#ifdef A_OLD
#define NL(x)	(Non_locals->x)
#endif

#define A_NL(T)	(char *)A_HEAP(T)

/*
    define this if you want procedure closures to be marked
    for easy identification
*/
#define CLOSURE_MARK 0xc0c0c0c0

#define A_MARKED_CLOSURE(PROC,FUNC,NONLOC)\
	PROC.fn = FUNC;\
	PROC.nonlocals = A_NL(NONLOC);\
	((NONLOC *)(PROC.nonlocals))->mark = CLOSURE_MARK;

#ifndef A_OLD
#define A_CLOSURE(PROC,FUNC,NONLOC)\
	PROC.fn.fn_nonglobal = FUNC;\
	PROC.nonlocals = A_NL(NONLOC)
#else
#define A_CLOSURE(PROC,FUNC,NONLOC)\
	PROC.fn = FUNC;\
	PROC.nonlocals = A_NL(NONLOC)
#endif

#define A_STACK_CLOSURE(PROC,FUNC,NONLOCVAR)\
        PROC.fn = FUNC;\
        PROC.nonlocals = (char *)&(NONLOCVAR)

#ifdef A68_STRICT
#define A_CALLPROC(PROC,PGLOB,PNONGLOB)\
  (PROC.nonlocals == (void *)NULL?(*(PROC.fn.fn_global))PGLOB:(*(PROC.fn.fn_nonglobal))PNONGLOB)
#else
#define A_CALLPROC(PROC,PGLOB,PNONGLOB)\
  ((*(PROC.fn.fn_nonglobal))PNONGLOB)
#endif

#endif
