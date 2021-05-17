@2 Introduction.
This module provides a mode and operators for expressing ranges of
characters in the ISO10646 Universal Character Set. It is intended to
be used for !UCS! regular expressions.

This message should reflect the current version.

@m charbag banner = "$Id: charbag.w,v 1.2 2003/05/10 11:00:45 sian Exp $"

The following presumptions are made about the top-level program:-
\begin{itemize}
\item Modes are declared in a module whose tag starts with ``Mode''.
\item !NIL!s are declared in a module whose tag starts with ``!NIL!''.
\item Names are declared in a module whose tag starts with ``Name''.
\item Plain values are declared in a module whose tag starts with ``Plain''.
\item Other values are declared in a module whose tag starts with ``Other''.
\item Operators are declared in a module whose tag starts with ``Oper''.
\item Procedures are declared in a module whose tag starts with ``Proc''.
\end{itemize}

@ We shall need the mode !CHARBAG! which contains a number of
!CHUNK!s each containing its first and last character. Note that all
characters have mode !UCS!.

@<Regex mode...@>=
MODE CHUNK = STRUCT(UCS b,e);
MODE CHARBAG = REF[]CHUNK;

@ A number of basic operators are required for manipulating !CHUNK!s.
All these operators presume that the chunks are distinct. They are used
in the operator !OR! defined below. Firstly we define basic addition
of two !CHUNK!s to give a row.

@<Regex proc...@>=
OP + = (CHUNK @!a,@!b)CHARBAG:  HEAP[1:1]CHUNK:=(a,b);

@ Now we give the addition operators for those cases when one of the
operands already has mode !CHARBAG!. Note that this form of addition is
not commutative, so we have to give two different definitions.

@<Regex proc...@>=
OP + = (CHARBAG @!a,CHUNK @!b)CHARBAG:
(
   HEAP[UPB a[@@1]+1]CHUNK @!c;
   c[:UPB a[@@1]]:=a;  c[UPB c]:=b;
   c
);

@ @<Regex proc...@>=
OP + = (CHUNK @!a,CHARBAG @!b)CHARBAG:
(
   HEAP[1+UPB b[@@1]]CHUNK @!c;
   c[1]:=a;  c[2:]:=b;
   c
);

@ Now we define addition for two operands of mode !CHARBAG!.

@<Regex proc...@>=
OP + = (CHARBAG @!a,@!b)CHARBAG:
(
   HEAP[UPB a[@@1]+UPB b[@@1]]CHUNK @!c;
   c[:UPB a[@@1]]:=a;  c[1+UPB a[@@1]:]:=b;
   c
);

@ Here is equality defined for two chunks.

@<Regex proc...@>=
OP = = (CHUNK @!a,@!b)BOOL: b OF a = b OF b & e OF a = e OF b;

@ Lastly, of the basic operators, here is an operator which enables us
to test whether a !UCS! character is in a !CHARBAG!.

@<Regex proc...@>=
OP ELEM = (UCS @!c,CHARBAG @!b)BOOL:
IF INT j:=LWB b-1;
   FOR i FROM LWB b TO UPB b WHILE c>=b OF b[i] DO j:=i OD;
   j<LWB b
THEN FALSE
ELSE c<=e OF b[j]
FI;

@ This operator combines !CHARBAG a! with !CHARBAG b!. In a sense, it
normalises two !CHARBAG!s and therefore could be used to normalise one
with the formula !a OR a!.

We need to compare each !CHUNK! of !b! with !a!, so we iterate over all
the chunks of !b!.

Then, we need to determine the position of the end-points of each chunk
of !b! relative to the chunks of !a!. We shall use the following
nomenclature:-
\begin{description}
\item[$b_i$] the chunk in $b$ under consideration
\item[$b^b_i$] the beginning of $b_i$
\item[$b^e_i$] the end of $b_i$
\item[$a_j$] the chunk in $a$ nearest to $b^b_i$ or $b^e_i$
\end{description}
We note that
\begin{eqnarray*}
r^b&=&\mbox{\textit{b} \textbf{of} \textit{r}}\\
r^e&=&\mbox{\textit{e} \textbf{of} \textit{r}}
\end{eqnarray*}

@<Regex proc...@>=
OP OR = (CHARBAG @!a,CHARBAG @!b)CHARBAG:
IF UPB a < LWB a
THEN b #!a = null bag!#
ELIF UPB b < LWB b
THEN a #!b = null bag!#
ELSE
	HEAP CHARBAG @!c:=a;
   FOR i FROM LWB b TO UPB b
   DO
      CHUNK bi=b[i];
      @<Determine the end-points of !bi!@>
		@<Continuation of !OR!@>
FI;

@ Here we get the indices of $a$ which identify chunks of $a$ related
to the end-points of $b_i$ and define appropriate synonyms for them.

@<Determine the end-points...@>=
INT @!s:=LWB c-1, @!f:=LWB c-1;  #indices into !a!#
UCS @!b bi=b OF bi, e bi=e OF bi;    #end-points#
FOR j FROM LWB c TO UPB c WHILE b bi>=b OF c[j]
DO
   s:=j
OD;

FOR j FROM LWB c TO UPB c WHILE e bi>=b OF c[j]
DO
   f:=j
OD;

@ Each end of $b_i$ can be either within or outwith a chunk of $c$. If
outwith, there are three possibilities:-
\begin{enumerate}
\item Before the first chunk of $c$
\item Between two chunks of $c$
\item After the last chunk of $c$
\end{enumerate}
This gives four possibilities for the beginning of a chunk, but because
the condition $b^b_i\leq b^e_i$ holds, there are less than the maximum
of sixteen cases for both end-points. The result of each case will be
assigned to $c$.

@<Continuation...@>=
c:=

@ (1) $b^b_i<c^b_1\,\Rightarrow$ the beginning of $b_i$ starts before
the first chunk of $c$. There are four sub-cases:-
\begin{description}
\item[(1.1)] $b^e_i<c^b_1$ \newline
There is no overlap so that $b_i$ is a new chunk for $c$.
\item[(1.2)] $c^e_f<b^e_i$ \newline
$b_i$ completely overlaps chunks $c_k:\,k\in [1,f]$ so that the $c_k$
are replaced by $b_i$.
\item[(1.3)] $b^e_i\leq c^e_f$ \newline
The end of $c_f$ overlaps the end of $b_i$ so that chunks
$c_k:\,k\in[1,f]$ are replaced by $b_i$, but the new chunk extends to
$c^e_f$.
\item[(1.4)] $b^e_i>c^e_l$ \newline
$b_i$ completely overlaps $c$ so that $c$ is replaced by $b_i$.
\end{description}

@<Continuation...@>=
IF s < LWB c
THEN #case 1#
	IF e bi < b OF c[LWB c]
   THEN bi+c   				#case 1.1#
   ELIF CHUNK @!cf=c[f]; e OF cf<e bi
   THEN bi+c[f+1:] 			#case 1.2#
   ELIF e bi > e OF c[UPB c]
   THEN HEAP[1:1]CHUNK:=bi #case 1.4#
   ELSE HEAP[1:1]CHUNK:=CHUNK(b bi,e OF cf)  #case 1.3#
   FI

@ (2) $b^b_i\leq c^e_s\,\Rightarrow$ the beginning of $b_i$ lies within
$c_s$. There are two cases:-
\begin{description}
\item[(2.1)] $b^e_i\leq c^e_f$ \newline
The beginning of $c_s$ overlaps the beginning of $b_i$ and the end of
$c_f$ overlaps the end of $b_i$. Thus the chunks $c_k:\,k\in[s,f]$ are
replaced by a single chunk beginning at $c^b_s$ and ending at $c^e_f$.
\item[(2.2)] $c^e_f<b^e_i$ \newline
the beginning of $c_s$ overlaps the beginning of $b_i$, but the end of
$b_i$ overlaps the end of $c_f$. Thus the chunks $c_k:\,k\in[s,f]$ are
replaced by a single chunk beginning at $c^b_s$ and ending at $b^e_i$.
\end{description}

@<Continuation...@>=
ELIF CHUNK @!cs=c[s]; b bi<=e OF cs
THEN
   IF CHUNK @!cf=c[f]; e bi<=e OF cf
   THEN c[:s-1]+CHUNK(b OF cs,e OF cf)+c[f+1:]  #case 2.1#
   ELSE c[:s-1]+CHUNK(b OF cs,e bi)+c[f+1:] 		#case 2.2#
   FI

@ (3) $c^e_s<b^b_i\,\Rightarrow$ the beginning of $b_i$ lies
beyond the end of $c_s$. Again, there are two cases:-
\begin{description}
\item[(3.1)] $b^e_i \leq c^e_f$ \newline
The end of $b_i$ is overlapped by $c_f$ so that the chunks
$c_k:\,k\in[s+1,f]$ are replaced by a chunk which starts at $b^b_i$ and
ends at $c^e_f$.
\item[(3.2)] $c^e_f<b^e_i$ \newline
$b_i$ completely overlaps the chunks $c_k:\,k\in[s+1,f]$ which are thus
replaced by $b_i$.
\end{description}

@<Continuation...@>=
ELIF e OF cs<b bi
THEN
   IF CHUNK @!cf=c[f]; e bi<=e OF cf
   THEN c[:s]+CHUNK(b bi,e OF cf)+c[f+1:] #case 3.1#
   ELSE c[:s]+bi+c[f+1:]                  #case 3.2#
   FI

@ (4) $c^e_l<b^b_i\,\Rightarrow$ the beginning of $b_i$ lies beyond the
last chunk of $c$ so that $b_i$ is a new chunk at the end of $c$.

@<Continuation...@>=
	@+@+ELSE c+bi
		FI
   OD;
   c  #yield#

@ Here is the !NOT! operator for a !CHARBAG!.

@<Regex proc...@>=
OP NOT = (CHARBAG @!bag)CHARBAG:
IF HEAP[LWB bag:UPB bag+1]CHUNK @!hb;
   hb[LWB hb]:=(-max int,b OF bag[LWB bag]-1);
   FOR i FROM LWB bag TO UPB bag-1
   DO
      hb[i+1]:=(e OF bag[i]+1,b OF bag[i+1]-1)
   OD;
   e OF bag[UPB bag]/=max int
THEN hb[UPB hb]:=(e OF bag[UPB bag]+1,maxint); hb
ELSE hb[:UPB bag]
FI; #NOT#

@ Lastly, here is a procedure which yields a null bag.

@<Regex proc...@>=
PROC null bag = CHARBAG: HEAP[1:0]CHUNK;

@1 System dependencies.
None.
