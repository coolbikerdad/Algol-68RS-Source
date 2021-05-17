@2Introduction.
This regular expression prelude was translated from \.{C++} source code
which was part of the \.{FTE} editor written by Marko Macek. This
particular code was selected because it used a single syntax which was
acceptable to the author.

This macro should reflect the current version.

@m cvs regex = "$Id: regex.w,v 1.6 2004/12/02 14:01:56 sian Exp $"

@<Include...@>=
@<Regex modes included@>
@<Regex !NIL!s included@>
@<Regex plain values included@>
@<Regex names included@>
@<Regex other values included@>
@<Regex operators included@>
@<Regex routines included@>

@ The prelude was originally written to provide a separate module, but
now that the Algol 68G interpreter is available, it has been
converted for inclusion as a Web 68 module.

Here we include the \.gprelude} module.

@igprelude.w@>

@2Meta characters.
The library uses !CHAR! character sequences in which a number of
characters are used to denote syntactic constructs. The characters
are called \textbf{meta-characters}. Regular expressions, if they are
going to be used widely, must be able to use meta-characters
specifiable by the engineer. Strictly speaking, they should be part
of the locale, but are unlikely to be made so in the present chaotic
state of computing. The only limitation put on the meta-characters is
that each character must be representable as a single !CHAR!.

In what follows, a \emph{line} is to be regarded as a sequence of
characters given to the pattern matcher. Whether such a sequence would
be displayed as a uni-directional sequence is beyond the scope of this
prelude.

The prelude requires the following set of meta-characters. Default
values are shown in parentheses. Each meta-character has an associated
integer which is shown in square brackets.
\begin{enumerate}
   \item Meta characters.
   \begin{enumerate}
      \item Escape character\\
      The character is used to convert meta-characters to normal
      characters and normal characters to meta-characters. The normal
      characters which, when preceded by the escape meta-character, have
      meta-significance are described below (backstroke $\backslash$) $[1]$.
      \item Anchors.
      \begin{enumerate}
         \item Beginning of a line anchor\\
         This character fixes a match to the beginning of a line
         (caret \verb|^|) $[2]$.
         \item End of a line anchor\\
         This character fixes a match to the end of a line (dollar
         symbol \verb|$|) $[3]$. %$
         \item Beginning of a word anchor\\
         This character fixes a match to the beginning of a word.
         (less-than symbol \verb|<|) $[4]$.
         \item End of a word anchor\\
         This character fixes a match to the end of a word
         (greater-than symbol \verb|>|) $[5]$.
      \end{enumerate}
      \item Closures.\\
      These act on the preceding or, in the case of the vertical bar,
      both the preceding and the following, pattern.
      \begin{enumerate}
         \item Any character\\
         This character represents any single character (full stop
         \verb|.|) $[6]$.
         \item None or one\\
         This character matches none or one of the preceding
         maximal pattern (question mark \verb|?|) $[7]$.
         \item None or many (minimal)\\
         This character matches any number of the preceding minimal
         pattern (commercial at symbol\verb|@|) $[8]$.
         \item None or many (maximal)\\
         This character matches any number of the preceding maximal
         pattern (asterisk \verb|*|) $[9]$.
         \item One or many (minimal)\\
         This character matches one or more of the preceding minimal
         pattern (number sign \verb|#| $[10]$.%# for Epsilon's Algol 68 mode
         \item One or many (maximal)\\
         This character matches one or more of the preceding maximal
         pattern (plus symbol \verb|+|) $[11]$.
         \item Choice\\
         This character matches the preceding or the following
         pattern (vertical bar\verb+|+) $[12]$.
      \end{enumerate}
      \item Sets.\\
      These denote a number of possible characters which will match a
      single character.
      \begin{enumerate}
         \item Beginning of set\\
         This character is used to denote the beginning of a set
         (left square bracket \verb|[|) $[13]$.
         \item End of set\\
         This character is used to denote the end of a set (right
         square bracket \verb|]|) $[14]$.
         \item Set complement\\
         This character is used to denote the complement of a set:
         that is, a set containing all characters \emph{not}
         specified in the set. Whichever character is used, it will
         only be regarded as a set meta-character if it occurs at
         the beginning of the set (tilde \verb|~|) $[15]$.
         \item Character range\\
         This character is used to denote a range of characters. It
         must be preceded by a character whose value is less than
         or equal to the character following it (colon \verb|:|) $[16]$.
      \end{enumerate}
      \item Groups.\\
      A group of characters can be acted on by a closure.
      \begin{enumerate}
         \item Beginning of a group\\
         This character denotes the beginning of a group (left
         brace \verb|{|) $[17]$.
         \item End of a group\\
         This character denotes the end of a group (right
         brace  \verb|}|) $[18]$.
      \end{enumerate}
      \item Sub-expressions.\\
      Sub-expressions will be remembered by the pattern matcher
      (upto nine such sub-expressions can be referred to by the
      escape character followed by a single digit character). The
      total match can be referred to by the two-character expression
      ``escape character and zero''
      \begin{enumerate}
         \item Beginning of sub-expression\\
         This character denotes the beginning of a sub-expression
         (open parenthesis \verb|(|) $[19]$.
         \item End of sub-expression\\
         This character denotes the end of a sub-expression (close
         parenthesis \verb|)|) $[20]$.
      \end{enumerate}
   \end{enumerate}
   \item Normal characters used as meta-characters by preceding them
   with the escape character (\verb|\|).
   \begin{enumerate}
      \item Character classes.\\
      Each set can be specified using the routine !rx set charbag!.
      \begin{enumerate}
         \item Set of digits (d) $[21]$
         \item Set of non-digits (D) $[22]$
         \item Set of white-space characters (s) $[23]$\\
         \item Set of non-white-space characters (S) $[24]$
         \item Set of word characters (w) $[25]$\\
         \item Set of non-word characters (W) $[26]$
      \end{enumerate}
      \item Hexadecimal denoter\\
      This character introduces two hexadecimal digits whose
      value will be used as the !CHAR! value of the character (x) $[27]$.
   \end{enumerate}
\end{enumerate}

@ For replacement, some escaped characters act as meta-characters. The
default value is used to specify them.
\begin{description}
\item[0] Use the whole of the matched pattern as replacement.
\item[n] Use matched expression $n$ where $n\in[1,9]$ as replacement.
\item[e] Stop altering the case of characters.
\item[l] Start lower-casing characters.
\item[u] Start upper-casing characters.
\item[x] Introduces two hexadecimal digits as described above.
\end{description}

@ The meta-characters are stored in a value of mode !REF[]CHAR! with
identifiers for each one.

@<Regex name...@>=
[27]CHAR meta char;

REF CHAR
   meta escape = meta char[ 1]:="\",
   meta bol    = meta char[ 2]:="^",
   meta eol    = meta char[ 3]:="$",
   meta bow    = meta char[ 4]:="<",
   meta eow    = meta char[ 5]:=">",
   meta any    = meta char[ 6]:=".",
   meta 0 or 1 = meta char[ 7]:="?",
   meta n 0 p  = meta char[ 8]:="@@",
   meta x 0 p  = meta char[ 9]:="*",
   meta n 1 p  = meta char[10]:="#",
   meta x 1 p  = meta char[11]:="+",
   meta choice = meta char[12]:="|",
   meta boset  = meta char[13]:="[",
   meta eoset  = meta char[14]:="]",
   meta compl  = meta char[15]:="~",
   meta range  = meta char[16]:=":",
   meta bog    = meta char[17]:="{",
   meta eog    = meta char[18]:="}",
   meta bosub  = meta char[19]:="(",
   meta eosub  = meta char[20]:=")",
   meta dig    = meta char[21]:="d",
   meta nodig  = meta char[22]:="D",
   meta ws     = meta char[23]:="s",
   meta nows   = meta char[24]:="S",
   meta word   = meta char[25]:="w",
   meta noword = meta char[26]:="W",
   meta hex    = meta char[27]:="x";

@ The procedures can be grouped as follows.

@<Regex rout...@>=
@<Regex preliminary declarations@>
@<Regex basic procedures@>
@<Regex node handling procedures@>
@<Regex principal procedures@>

@ The library is initialised by !rx init! which takes as its only
parameter a row of pairs of mode !STRUCT(INT ind,CHAR val)!. A null row
specified as !()! may also be given if the default meta-characters are
acceptable. The routine yields !TRUE! if the parameters are
satisfactory.

@m mc escape =  1
@m mc bol    =  2
@m mc eol    =  3
@m mc bow    =  4
@m mc eow    =  5
@m mc any    =  6
@m mc 0or1   =  7
@m mc n0p    =  8
@m mc x0p    =  9
@m mc n1p    = 10
@m mc x1p    = 11
@m mc choice = 12
@m mc boset  = 13
@m mc eoset  = 14
@m mc compl  = 15
@m mc range  = 16
@m mc bogr   = 17
@m mc eogr   = 18
@m mc bosub  = 19
@m mc eosub  = 20
@m mc dig    = 21
@m mc nodig  = 22
@m mc ws     = 23
@m mc nows   = 24
@m mc word   = 25
@m mc noword = 26
@m mc hex    = 27

@<Regex prin...@>=
PROC rx init = ([]STRUCT(INT ind,CHAR val)r)BOOL:
BEGIN
   FOR i FROM LWB r TO UPB r
   DO
      INT ii=ind OF r[i];
      IF ii< LWB meta char OR ii > UPB meta char
      THEN GOTO error
      ELSE meta char[ii]:=val OF r[i]
      FI
   OD;
   TRUE EXIT
error:
   FALSE
END; #rx init#

@2 Preliminary conversion.
Before compiling a regular expression, we convert the characters of the
expression from mode ![]CHAR! to a linked-list each of whose elements have
mode !REF RX!.

@<Regex mode...@>=
MODE RX = STRUCT(CHAR c,INT ind,REF RX back,forw);

@ The !CHARBAG! mode is simply a row of !BITS!.

@<Regex mode...@>=
MODE CHARBAG = [8]BITS;

@ Originally, the mode !REGEX! contained a union of mutually exclusive
values. However, for reasons of efficiency, the union has been replaced
by individual fields in the structure. After all, there will not be
many nodes in the compiled regular expression, so the saving of two or
three hundred bytes at the expense of many other instructions to get
the united value is not worth it.

@<Regex mode...@>=
MODE REGEX = @/
   STRUCT(BITS what,
          CHAR c,CHARBAG cb,
			 REF REGEX rx,prev,next);

@ We need !NIL! for !no rx! and !no regex!.

@<Regex !NIL!...@>=
REF RX no rx = NIL;
REF REGEX no regex = NIL;

@ We need to have a structure which can contain the indices of all
the sub-expressions in the regular expression.

@<Regex mode...@>=
MODE SUBEXP = [0:9]STRUCT(INT open, close);

@2 Basic routines.
Here are operators which insert a string into a charbag and
add !CHARBAG!s themselves. We also define !SET! and
!CLEAR! for !BITS! as well.  Firstly, we declare the priorities.

@<Regex basic...@>=
PRIO SET = 7, CLEAR = 7;

@ These operators do not change the value of the !BITS! operand, but yield a
!BITS! with the concerned bit changed.

@<Regex basic...@>=
OP SET = (BITS b,INT n)BITS: 2r1 SHL(32-n) OR b;

@ !CLEAR! is similar to !SET!.

@<Regex basic...@>=
OP CLEAR = (BITS b,INT n)BITS: NOT(2r1 SHL(32-n)) AND b;

@ Firstly we define addition of two charbags.

@<Regex oper...@>=
OP + = (CHARBAG a,b)CHARBAG:
BEGIN
   CHARBAG sum;
   FOR i TO UPB sum
   DO
	  sum[i]:=a[i] OR b[i]
   OD;
   sum
END; #+#

@ We shall be needing !bwm! in the two following operators.

@<Regex plain...@>=
BITS bwm = BIN(bits width-1);

@ Here is an operator which converts a ![]CHAR! into a !CHARBAG!.

@<Regex oper...@>=
OP STRINGTOBAG = ([]CHAR s)CHARBAG:
BEGIN
   CHARBAG cb;
   FOR i TO UPB cb DO cb[i]:=2r0 OD;
   FOR i FROM LWB s TO UPB s
   DO
	  INT as = ABS s[i];
	  REF BITS bits=cb[1+as%bits width];
	  bits:=bits OR ELEM(1+ABS(BIN as & bwm))
   OD;
   cb
END; #STRINGTOBAG#

@ Now we need to declare !NOT! which negates a !CHARBAG!.

@<Regex oper...@>=
OP NOT = (CHARBAG cb)CHARBAG:
BEGIN
   CHARBAG r;
   FOR i TO UPB cb
   DO
	  r[i]:=NOT cb[i]
   OD;
   r
END; #NOT#

@ And, lastly, here is an operator which tests whether a particular
character is an element of a !CHARBAG!.

@<Regex oper...@>=
OP ELEM = (CHAR c,CHARBAG cb)BOOL:
   (1+ABS(BIN ABS c&bwm)) ELEM cb[1+ABS(BIN ABS c SHR 5)];

@ This procedure creates a set of consecutive characters given starting and
ending characters.

@<Regex basic...@>=
PROC range set = (REF CHARBAG bag,CHAR c1,c2)REF CHARBAG:
   bag:=bag + STRINGTOBAG(c1-c2);

@ Here is the \.{gprelude} version of !-!.

@<Regex prelim...@>=
macro gp op minus char;

@ This operator is defined such that multiple invocations can occur
for one left-hand operand. Because the priority has not been given, it
is, by default, !1! (in common with all the other assigning operators).

We can define !SETAB! in terms of !range set!.

@<Regex basic...@>=
PRIO SETAB = 1;
OP SETAB = (REF CHARBAG bag,CHAR c)REF CHARBAG:  range set(bag,c,c);

@ The public routine !rx compile! converts the regular expression to a
!REF[]RX! of which the first member is the parameter of !rx comp! which
controls the compilation proper.

!sub exp ct! must be global to !rx comp! because it contains a
cumulative count of the number of sub-expressions which must be
independent of the !rx comp!, the latter calling itself recursively.

@<Regex princ...@>=
PROC rx compile = ([]CHAR regexp)REF REGEX:
IF UPB regexp < LWB regexp
THEN no regex
ELIF@/
   INT sub exp ct:=0;
   [LWB regexp:UPB regexp]RX rgx;
   @<Regex: insert the regex compiler@>

   FOR i FROM LWB rgx TO UPB rgx
   DO
      rgx[i]:=@/
         (regexp[i],i,(i=LWB rgx|no rx|rgx[i-1]),(i=UPB rgx|no rx|rgx[i+1]))
   OD;
	@<Regex: do the compilation proper and add an ending node@>
FI; #rx compile#

@ Before we call !rx comp! to compile the converted regular expression.
we need to define all the node types which do not represent actual
characters.

@m re nothing= 16r0
@m re jump   = 16r1
@m re break  = 16r2
@m re at bol = 16r3
@m re at eol = 16r4
@m re at bow = 16r5
@m re at eow = 16r6
@m re end    = 16r1f

@ The next group of macros define values of the !what! field of a
!REGEX! which represent a single character.

@m re any          = 16r21
@m re set          = 16r22
@m re char         = 16r23
@m re wspace       = 16r24
@m re not wspace   = 16r25
@m re digit        = 16r26
@m re not digit    = 16r27
@m re word         = 16r28
@m re not word     = 16r29

@ The last group of macros define the bits of the !what! field which are
!OR!ed with other values.

@m re group =   24
@m re open =    23
@m re close =   22
@m re mem =     21
@m re branch =  20
@m re maximal = 19

@ Now we can call !rx comp!. For a successful compilation, an ending
node is added.

@<Regex: do the comp...@>=
   @+REF REGEX result = rx comp(HEAP REF RX:=rgx[1]);
   result IS no regex
THEN no regex
ELSE@/
   HEAP REF REGEX tmp:=result;
   WHILE next OF tmp ISNT no regex
   DO
      tmp:=next OF tmp
   OD;
   next OF tmp:=new node(re end);
   HEAP REGEX:=result

@2 Compilation proper.
The routine !rx comp! consists largely of a big !CASE! which identifies
each character and takes appropriate action.

@<Regex: insert the regex...@>=
PROC rx comp = (REF REF RX rx)REF REGEX:
BEGIN
   HEAP REF REGEX head:=no regex, tail:=no regex;
   INT ct, pos;

   WHILE
      no regex ISNT
			IF rx IS no rx
			THEN no regex
			ELIF char in string(c OF rx,pos,
				   (meta 0 or 1,meta n 0 p,meta x 0 p,meta n 1 p,meta x 1 p,
					 meta choice))
			THEN new sub(head,tail,rx)
			ELIF c OF rx = meta eog OR c OF rx = meta eosub
			THEN no regex
			ELIF char in string(c OF rx,pos,
						(meta bog,meta bosub,meta escape,meta boset))
			THEN rx:=forw OF rx;
				@<Regex: act according to the value of !pos!@>
			ELIF char in string(c OF rx,pos,
						(meta bol,meta eol,meta any,meta bow,meta eow))
			THEN
				add node(head,tail,new node(@/
						   (pos|re at bol,re at eol,re any,re at bow,re at eow)))
			ELSE add node(head,tail,new char(c OF rx))
			FI
   DO
     IF rx ISNT no rx
	  THEN rx:=forw OF rx
	  FI
   OD;

   head
END; #rx comp#

@ @<Regex: act according...@>=
CASE pos
IN
	# Start of a group #
   IF add node(head,tail,new node(2r0 SET re group SET re open));
      add node(head,tail,rx comp(rx)) ISNT no regex
   THEN
      IF rx IS no rx
      THEN no regex
      ELIF c OF rx = meta eog
      THEN add node(head,tail,new node(2r0 SET re group SET re close))
      ELSE no regex
      FI
   ELSE head:=no regex
   FI,

	# Start of a sub-expression #
   IF add node(head,tail,
         new node(@{BIN(ct:=sub exp ct+:=1)@/
                  SET re group SET re open SET re mem))@};
      no regex ISNT add node(head,tail,rx comp(rx))
   THEN
      IF rx IS no rx
      THEN no regex
      ELIF c OF rx = meta eosub
      THEN add node(@{head,tail,
               new node(BIN ct SET re group SET re close SET re mem))
      ELSE no regex
      FI
   ELSE head:=no regex
   FI,

	# An escaped expression #
   add node(head,tail,new escape(rx)),

	# A set #
   add node(head,tail,new set(rx))
ESAC

@ This procedure is required in both !new escape! and !new set!.

@<Regex basic...@>=
PROC expand set denoter = (BITS what)CHARBAG:
IF HEAP CHARBAG set:=null bag;
   INT pos;
   char in string(REPR ABS what,pos,
						 (REPR ABS re digit,
						  REPR ABS re not digit,
						  REPR ABS re wspace,
						  REPR ABS re not wspace,
						  REPR ABS re word,
						  REPR ABS re not word))
THEN
	set:=
	CASE pos
	IN
		digits,
		NOT digits,
		white space,
		NOT white space,
		word chars,
		NOT word chars
	ESAC
ELSE set
FI; #expand set denoter#

@2 Node handlers.
This procedure creates a new node of mode !REF REGEX!. Its parameter
gives the type of node. The !NIL! in the structure display is
assigned to the !CHARBAG! field of the structure.

@<Regex node...@>=
PROC new node = (BITS what)REF REGEX:
   @+HEAP REGEX:=(what,REPR 0,null bag,no regex,no regex,no regex);

@ A single character is added to a compiled regular expression by
storing it in a single node.

@<Regex node...@>=
PROC new char = (CHAR ch)REF REGEX:
BEGIN
   REF REGEX hr=new node(re char);
   c OF hr:=ch;
   HEAP REGEX:=hr
END;

@ We can now declare !new escape! which creates a new node for an
escaped character (a character preceded by !meta escape!).

The routine leaves !rx! referring to the last character processed.

@m max hex digits = 2

@m process(wh) = 
   (REF REGEX lx = new node(wh);
    cb OF lx:=expand set denoter(wh);
    what OF lx:=re set;
	HEAP REGEX:=lx)

@<Regex node...@>=
PROC new escape = (REF REF RX rx)REF REGEX:
IF INT pos;
   @<Declare !process digits!@>
   char in string(c OF rx,pos,
		(meta dig,meta nodig,meta ws,meta nows,
		 meta word,meta noword,meta hex))
THEN
   CASE pos
   IN
	  process(re digit),
	  process(re not digit),
	  process(re wspace),
	  process(re not wspace),
	  process(re word),
	  process(re not word),
	  process digits(16,max hex digits,rx)
   OUT new char(c OF rx)
   ESAC
ELSE new char(c OF rx)
FI; #new escape#

@ A character which cannot be denoted can be expressed as a
hexadecimal value. Each sequence of digits is preceded by
!meta hex! which identifies the radix. The routine !process digits!
converts such digit sequences into a value and yields a new node
containing the equivalent character. Here are two macros for testing
whether a digit is decimal or hexadecimal. Note that for
hexadecimal characters, we only allow lower-case letters, in accordance
with Algol 68 practice. We presume that digits are always !"0"! to
!"9"! and that hexadecimal digits will always include !"a"! to !"f"!.

This procedure was a macro.

@<Regex basic...@>=
PROC is dec = (CHAR c)BOOL: ABS c >= ABS "0" & ABS c <= ABS "9";

@ And this one.

@<Regex basic...@>=
PROC is hex = (CHAR c)BOOL: is dec(c) OR ABS c >= ABS "a" & ABS c <= ABS "f";

@ And this one.

@<Regex basic...@>=
PROC ctoi = (CHAR c)INT:
IF is dec(c)
THEN ABS c - ABS "0"
ELIF is hex(c)
THEN ABS c - ABS "a" + 10
ELSE 0
FI; #ctoi#

@ The routine !process digits! leaves !rx! referrring to the last character
processed.

@<Declare...@>=
PROC process digits = (INT radix,max chars,REF REF RX rx)REF REGEX:
IF BOOL no val:=TRUE;
	INT num:=0;

   TO max chars
   WHILE@/
      IF forw OF rx IS no rx
	   THEN FALSE
      ELSE is hex(c OF forw OF rx)
      FI
   DO
      no val:=FALSE;
      rx:=forw OF rx;
      num*:=radix+:=ctoi(c OF rx)
   OD;

   no val
THEN no regex
ELSE new char(REPR num)
FI; #process digits#

@ A set of characters is denoted by ![...]! where the ellipsis denotes
one or more character patterns. A character pattern can be
\begin{enumerate}
\item A single character, possibly escaped.
\item A character range, expressed as !<char>meta range<char>!, each !<char>!
being of type 1.
\end{enumerate}
If the first such character is !meta compl!, then the set comprises
all those characters which are not denoted by the patterns.

@<Regex node...@>=
PROC new set = (REF REF RX rx)REF REGEX:
BEGIN
   HEAP CHARBAG set:=null bag;
   CHAR ch, c1 #1st range char.#, c2 #2nd range char#;
   BOOL neg:=(c OF rx = meta compl), range:=FALSE;

   IF neg @&THEN rx:=forw OF rx @&FI;
   REF REGEX yield:=new node(re set);

   WHILE@/
      IF (rx IS no rx) OR (yield IS no regex)
      THEN yield:=no regex;  FALSE
      ELIF c OF rx = meta eoset
      THEN @<Regex: complete the yield@>
      ELSE TRUE
      FI
   DO #Process the character in !rx!#
      REF REGEX lrx;
      IF c OF rx = meta escape
      THEN #Process the escape sequence#
         IF forw OF rx IS no rx
         THEN yield:=no regex #lone !meta escape!#
         ELIF lrx:=new escape(rx:=forw OF rx);
            what OF lrx = re char
         THEN ch:=c OF lrx;  @<Regex: do a normal character@>
         ELSE set:=set + cb OF lrx
         FI
      ELSE@/
         ch:=c OF rx;
         @<Regex: do a normal...@>
      FI;
      rx:=forw OF rx
   OD;
   HEAP REGEX:=yield
END; #new set#

@ A normal character could start or finish a range. The boolean name !range!
referts to !TRUE! when a normal character has been read which is followed by a
!meta range!.

@<Regex: do a normal...@>=
IF IF NOT range
   THEN@/
      IF forw OF rx IS no rx
      THEN yield:=no regex #no closing !meta eoset!#; @&FALSE
      ELSE c OF forw OF rx = meta range
      FI
   ELSE FALSE
   FI
THEN #start of a range#
   range:=TRUE;
   rx:=forw OF rx;  #skip the !meta range!#
   c1:=ch
ELIF range
THEN
   IF ABS c1 <= ABS(c2:=ch)
   THEN range set(set,c1,c2);  range:=FALSE
   ELSE yield:=no regex #invalid range#
   FI
ELIF yield ISNT no regex
THEN set SETAB ch
FI

@ When the end of the set has been found, we need to complete the value
of !yield!. We yield !FALSE! here to terminate the loop in the
preceding section.

@<Regex: complete...@>=
IF range
THEN yield:=no regex #no 2nd range char.#
ELSE cb OF yield:=(neg|NOT set|set)
FI;
FALSE

@ Some values of mode !CHARBAG! are declared as names so that the user
can set them. Here are the names and default values.

@<Regex other...@>=
CHARBAG null bag = (2r0,2r0,2r0,2r0,2r0,2r0,2r0,2r0);

CHARBAG
   digits:=(2r0,16rffc0,2r0,2r0,2r0,2r0,2r0,2r0),
   word chars :=(2r0,2r0,16r7fffffe0,16r7fffffe0,
                   2r0,2r0,16rfffffeff,16rfffffeff),
   white space:=(16rfc0000,16r80000000,2r0,2r0,2r0,2r0,2r0,2r0);

@ Here is the procedure for changing the default !digits!, !word
chars! and !white space! !CHARBAG!s. The first parameter should have
the value !1! to !3! and the second parameter should be a set
specification (it must start with !meta boset! and finish with !meta
eoset!). The routine yields !FALSE! if a wrong type parameter is
supplied or the set specifier is incorrect and !TRUE! otherwise. All
the means of producing a set are available to the engineer.

@m rx digits set = 1
@m rx word set   = 2
@m rx white set  = 3

@<Regex princ...@>=
PROC rx change set = (INT type, []CHAR new val)BOOL:
IF   UPB new val-LWB new val+1 < 3
THEN FALSE #insufficient chars#
ELIF new val[LWB new val]/=meta boset OR new val[UPB new val]/=meta eoset
THEN FALSE
ELIF type < rx digits set OR type > rx white set
THEN FALSE
ELIF
   [LWB new val+1:UPB new val-1]RX rgx;
   FOR i FROM LWB new val + 1 TO UPB new val-1
   DO
      rgx[i]:=@/
      @+(new val[i],i,@{(i=LWB rgx|no rx|rgx[i-1]),
                        (i=UPB rgx|no rx|rgx[i+1]))@}
   OD;
   REF REGEX rs = new set(LOC REF RX:=rgx[LWB rgx]);
   rs IS no regex
THEN FALSE
ELSE
   []REF CHARBAG@/
      (digits,word chars,white space)[type]:=cb OF rs;
   TRUE
FI; #rx change set#

@ The routine !add node! adds a new node to the linked-list that contains
the compiled regular expresssion. If both !st! and !fn! refer to
!no regex!, the new node is simply assigned to them. Otherwise, the new
node is appended to the last node and !fn! made to refer to the
last node of the whole list.

@<Regex node...@>=
PROC add node = (REF REF REGEX st,fn,REF REGEX node)REF REGEX:
IF node IS no regex THEN no regex
ELIF (st IS no regex) OR (fn IS no regex)
THEN st:=fn:=node
ELSE@/
   next OF fn:=node;
   prev OF node:=fn;
   WHILE next OF fn ISNT no regex
   DO@& fn:=next OF fn@& OD;
   node
FI; #add node#

@ The final sub-expression routine handles the closures !meta 0 or
1!, !meta x 0 p!, !meta x 1 p!, !meta n 0 p!, !meta n 1 p! and the
alternative operator !meta choice!.

@m is(rx,t) = (t ELEM what OF rx)

@<Regex node...@>=
PROC new sub = (REF REF REGEX begin,end,REF RX rx)REF REGEX:
IF end IS no regex
THEN no regex #All the closures must be preceded by a char/set/group#
ELIF
   HEAP REF REGEX no, new, jump, skip, last:=end,p;
   INT num chars:=0;
   is(last,re group) & is(last,re open)
THEN no regex #closure is preceded by an opener#
ELIF
   IF is(last,re group)
   THEN #backtrack to its beginning#
      p:=last;
      INT nesting level:=1;

      @<Regex: backtrack to the start of the group@>
   ELSE num chars:=1 #!last!$\Rightarrow$char.#
   FI;

   last IS no regex
THEN no regex       #extra closer#
ELIF num chars = 0
THEN no regex     #empty group#
ELIF c OF rx = meta choice
THEN @<Regex: do or symbol@>
ELIF c OF rx = meta 0 or 1
THEN @<Regex: do one or none@>
ELIF c OF rx = meta x 0 p OR c OF rx = meta n 0 p
THEN @<Regex: do none or more@>
ELSE @<Regex: do 1 or more@>
FI; #new sub#

@ Move !last! back to the opener of this group.

@<Regex: backtrack...@>=
WHILE nesting level>0 & (p ISNT no regex)
DO
   p:=prev OF p;
   IF p ISNT no regex
   THEN
      IF is(p,re group)
      THEN #This is either an opener or a closer#
         nesting level+:=(is(p,re close)|1|-1)
      ELIF ABS what OF p >= ABS re any & ABS what OF p <= ABS re not word
      THEN num chars+:=1
      FI;
      last:=p
   FI
OD

@ Insert a branch node for the !meta 0 or 1! before the character or
group preceding it, append a nothing node to the character or group
and make the new branch node refer to the nothing node and vice versa.

@<Regex: do one or...@>=
new:=new node(BIN ABS c OF rx SET re branch SET re maximal);
no:=new node(re nothing);
   
next OF end:=no;
prev OF no:=end; #append !no! to !end!#

next OF new:=last;
prev OF new:=prev OF last;
prev OF last:=new; #Insert !new! before !last!#

IF prev OF new IS no regex
THEN begin:=new
ELSE next OF prev OF new:=new
FI;   #insertion completed#

rx OF new:=no;  #link !new!#
rx OF no:=new;  #and !no!  #
end:=no #The new last node#

@ Insert a branch node before the character or group to be repeated and
jump and nothing nodes after it.

@<Regex: do none...@>=
new:=new node(IF c OF rx=meta x 0 p
			  THEN BIN ABS c OF rx SET re branch SET re maximal
              ELSE BIN ABS c OF rx SET re branch
			  FI);
jump:=new node(re jump);
no:=new node(re nothing);

next OF end:=jump;
prev OF jump:=end; #append !jump! to !end!#

next OF jump:=no;
prev OF no:=jump;  #append !no! to !jump!#

next OF new:=last;
prev OF new:=prev OF last;
prev OF last:=new; #insert !new! before !last!#

IF prev OF new IS no regex
THEN begin:=new
ELSE next OF prev OF new:=new
FI; #insertion completed#

rx OF new:=no;  #link !new!#
rx OF no:=new;  #and !no!  #
rx OF jump:=new;#enable the !jump! link#

end:=no #The new last node#

@ Insert jump and branch nodes before the character or group to
be repeated and jump and nothing nodes after it.

@<Regex: do 1...@>=
new:=new node(IF c OF rx=meta x 1 p
              THEN BIN ABS c OF rx SET re branch SET re maximal
              ELSE BIN ABS c OF rx SET re branch
				  FI);
skip:=new node(re jump);
jump:=new node(re jump);
no:=new node(re nothing);

next OF end:=jump;
prev OF jump:=end;   #append !jump! to !end!#

next OF jump:=no;
prev OF no:=jump;    #append !no! to !jump!#

next OF skip:=new;
prev OF new:=skip;   #append !new! to !skip!#

next OF new:=last;   #insert !new! before !last!#
prev OF skip:=prev OF last;
prev OF last:=new;

IF prev OF skip IS no regex
THEN begin:=skip
ELSE next OF prev OF skip:=skip
FI; #insertion completed#

rx OF new:=no;     #link !new!#
rx OF no:=new;     #and !no!#
rx OF jump:=new;   #enable the !jump! link#
rx OF skip:=last;  #enable the !skip! link#

end:=no #The new last node#

@ Insert a branch node before the character or group and a break node
and a nothing node after it.

@<Regex: do or...@>=
IF forw OF rx ISNT no rx
THEN
   new:=new node(BIN ABS c OF rx SET re branch SET re maximal);
   jump:=new node(re break);
   no:=new node(re nothing);

   next OF jump:=no;
   prev OF no:=jump;    #append !no! to !jump!#

   next OF end:=jump;
   prev OF jump:=end;   #append !jump! to !end!#

   next OF new:=last;
   prev OF new:=prev OF last;
   prev OF last:=new;   #insert !new! before !last!#

   IF prev OF new IS no regex
   THEN begin:=new
   ELSE next OF prev OF new:=new
   FI;                  #insertion completed#

   rx OF new:=no;     #link !new!#
   rx OF no:=new;     #and !no!  #
   rx OF jump:=new;   #enable the !jump! link#

   HEAP REGEX:=end:=no #The new last node#
ELSE no regex #!"|"! not followed by a character#
FI

@2 Matching.
This routine tests whether a compiled regular expression will match a
string. The local names are used as follows:-
\begin{description}
\item[\texttt{n}] Used to step down the compiled regular expression.
\item[\texttt{pos}] Contains the position of a discriminant in a string.
\item[\texttt{st}] Contains the current position in the string to be
matched. Set to !LWB s! at the start of the routine.
\end{description}
The outermost call of the routine ensures that the lower bound of the string
is !1!. Recursive calls do not ensure that so that a test of !pti=1! will
determine whether !matcher! is at the beginning of the string (which is taken
to be the beginning of the line).

We shall need to keep the current index into the pattern to be matched
global to the routines !rx match! and !matcher!.

@<Regex name...@>=
INTpti;

@ Here is the pattern matching routine.

@<Regex node...@>=
PROC matcher = (REF REGEX rx,[]CHAR str,INT st,level,REF SUBEXP se)BOOL:
IF level = 1000
THEN FALSE
ELSE
   HEAP REF REGEX n:=rx;
   BOOL yield:=FALSE;
   INT pos,save;

   WHILE
      IF n IS no regex THEN FALSE
      ELIF ABS what OF n >= ABS re end
                       AND
         ABS what OF n < ABS re not word
                       AND
         char in string(REPR ABS what OF n,pos,
						(REPR ABS re char,REPR ABS re any,
						 REPR ABS re set,REPR ABS re end))
      THEN @<Regex: do characters, sets and the end@>
      ELIF ABS what OF n < ABS re end
      THEN
         CASE ABS what OF n + 1
         IN
            (n:=next OF n; TRUE),                        #re nothing#
            (n:=rx OF n; TRUE),                          #re jump#
            @<Regex: match a break@>,                           #re break#
            (pti=1|n:=next OF n; TRUE|FALSE),            #re at bol#
            (pti>UPB str|n:=next OF n; TRUE|FALSE),      #re at eol#
            @<Regex: match the beginning of a word@>,           #re at bow#
            @<Regex: match the end of a word@>                  #re at eow#
         ESAC
      ELIF is(n,re group)
      THEN @<Regex: do groups@>
      ELIF is(n,re branch)
      THEN @<Regex: do branches@>
      ELSE FALSE
      FI
   DO SKIP OD;
   yield
FI; #matcher#

@ Process character and set matchers and the end of the regular
expression.

@<Regex: do char...@>=
IF pos = 4
THEN se[0]:=(st,pti); NOT(yield:=TRUE)
ELIF pti > UPB str
THEN FALSE
ELSE
   CASE pos
   IN
      IF c OF n = str[pti]          #re char#
      THEN pti+:=1;  n:=next OF n;  TRUE
      ELSE FALSE
      FI
      ,
      BEGIN                         #re any#
         pti+:=1;  n:=next OF n; TRUE
      END
      ,
      IF str[pti] ELEM cb OF n      #re set#
      THEN pti+:=1;  n:=next OF n; TRUE
      ELSE FALSE
      FI
   ESAC
FI

@ Nodes of type !re break! only exist for the choice operator.

@<Regex: match a bre...@>=
BEGIN
   n:=next OF next OF n; #guaranteed to exist for !meta choice!#
   IF is(n,re branch)
   THEN @<Regex: skip over following alternatives@>
   FI;

   IF is(n,re group)
   THEN @<Regex: skip forward over the group@>
   FI;
   n:=next OF n;
   TRUE
END

@ The beginning of a word can occur at the start of a line or following
a non-word character.

@<Regex: match the begin...@>=
IF pti > UPB str
THEN FALSE
ELIF pti=1
THEN
   IF str[pti] ELEM word chars
   THEN n:=next OF n;  TRUE
   ELSE FALSE
   FI
ELIF UPB str > LWB str
THEN #more than one char.#
   IF NOT(str[pti-1] ELEM word chars) & str[pti] ELEM word chars
   THEN n:=next OF n;  TRUE
   ELSE FALSE
   FI
ELSE FALSE
FI

@ The end of a word can occur at the end of a line or following a word.

@<Regex: match the end...@>=
IF pti = LWB str                         #re at eow#
THEN FALSE
ELIF UPB str >= LWB str
THEN #at least one char.#
   IF pti > UPB str & str[pti-1] ELEM word chars
   THEN n:=next OF n; TRUE
   ELIF pti > UPB str
   THEN FALSE
   ELIF UPB str > LWB str
   THEN #more than one char.#
      IF str[pti-1] ELEM word chars & NOT(str[pti] ELEM word chars)
      THEN n:=next OF n;  TRUE
      ELSE FALSE
      FI
   ELSE FALSE
   FI
ELSE FALSE
FI

@ Groups may be remembered sub-expressions or sub-expressions which
limit the scope of closures and alternatives. Here we deal with
remembered sub-expressions whose start and finish need to be stored in
!se!. The openers and closers of other sub-expressions are simply
ignored here. They are operative for compilation and skipping forward
or backward over a group.

@<Regex: do gr...@>=
IF is(n,re mem)
THEN
   INT b=ABS(what OF n&16rff); #sub exp num#
   IF save:=pti;  matcher(next OF n,str,st,level+1,se)
   THEN #sub exp matched#
      (is(n,re open)|open OF se[b]|close OF se[b]):=save;
      NOT(yield:=TRUE)
   ELSE #sub exp did not match#
      (is(n,re open)|open OF se[b]|close OF se[b]):=0;
      FALSE
   FI
ELSE n:=next OF n;  TRUE
FI

@ Branches require a recursive call to !matcher!. For maximal branches,
(maximal closures), !matcher! uses the embedded node of the branch to
advance to the end of !str! and then backtrack if the end of the
regular expression is also not reached. For minimal closures, !matcher!
tries the minimum and then extends the search if that fails.

@<Regex: do br...@>=
IF is(n,re maximal)
THEN
   IF save:=pti;  matcher(next OF n,str,st,level+1,se)
   THEN se[0]:=(st,pti);  NOT(yield:=TRUE)
   ELSE pti:=save;  n:=rx OF n; TRUE
   FI
ELIF save:=pti;  matcher(rx OF n,str,st,level+1,se)
THEN se[0]:=(st,pti);  NOT(yield:=TRUE)
ELSE pti:=save;  n:=next OF n; TRUE
FI

@ This code skips alternatives which follow a sucessfully matched
alternative.

@<Regex: skip over...@>=
REF REGEX m;
WHILE
   IF NOT is(n,re branch)
   THEN FALSE
   ELSE ((m:=rx OF n):/=:no regex)
					AND
		REPR ABS(what OF n&16rff) = meta choice
   FI
DO
   n:=next OF m
OD

@ This code skips forward over a group.

@<Regex: skip forward...@>=
INT nesting level:=1;
WHILE(nesting level>0|(n:=next OF n):/=:no regex|FALSE)
DO
   IF is(n,re group)
   THEN nesting level+:=(is(n,re open)|1|-1)
   FI
OD

@ !matcher! only tries to match a pattern from a given start. If it
fails, it does not try a match later in the pattern. The public
routine !rx match! tests whether the regular expression is anchored
at the beginning of the line. Otherwise, the regular expression is
matched against the pattern starting from the first character until a
match is achieved or the end of the pattern is reached.

The routine yields !TRUE! if the regular expression matches the pattern.

@<Regex princ...@>=
PROC rx match = (REF REGEX rx,[]CHAR pattern,REF SUBEXP se)BOOL:
IF rx IS no regex
THEN FALSE
ELIF
   PROC zero se = VOID:
   FOR i FROM LWB se TO UPB se DO se[i]:=(0,0) OD;

   what OF rx = re at bol
THEN zero se;@&  matcher(rx,pattern[@@1],pti:=1,1,se)
ELSE
   FOR i TO UPB pattern[@@1]
   DO
      zero se;
      IF matcher(rx,pattern[@@1],pti:=i,1,se)@& THEN GOTO ytrue@& FI
   OD;
   FALSE EXIT
ytrue:
   TRUE
FI; #rx match#

@2 Replacing.
The routine !rx replace! presumes that !rx match! has been called and
yielded !TRUE! so that a !REF SUBEXP! is available with the requisite
subexpression indices. The routine yields the expanded replacement string.

@<Regex princ...@>=
PROC rx replace = ([]CHAR replacer, matched,SUBEXP se)[]CHAR:
BEGIN
   STRING yield;
   INT ri:=LWB replacer-1, pos, val;
   BOOL escape:=FALSE, upper:=FALSE, lower:=FALSE;

   WHILE ri < UPB replacer
   DO
	  CHAR rr:=replacer[ri+:=1];
	  IF escape
	  THEN escape:=FALSE; @<Regex: process an escaped sequence@>
	  ELIF rr = meta escape
	  THEN escape:=TRUE
	  ELIF upper
	  THEN yield+:=UC rr
	  ELIF lower
	  THEN yield+:=LC rr
	  ELSE yield+:=rr
	  FI
   OD;

	yield
END; #rx replace#

@ Here are !UC! and !LC!.

@<Regex basic...@>=
macro gp op uc char;
macro gp op lc char;

@ Escaped characters can be a decimal digit, referring to a sub-expression,
or !"u"! for upper-casing, !"l"! for lower-casing, !"e"! for ending casing,
or !"x"! to herald a two-digit hexadecimal number.

@<Regex: process an esc...@>=
IF is dec(rr)
THEN
	INT si = ABS rr - ABS "0";
	INT oi = open OF se[si], ci = close OF se[si]-1;
	IF oi/=0 & ci/=0
	THEN yield+:=matched[oi:ci]
	FI
ELIF char in string(rr,pos,"elux")
THEN
	CASE pos
	IN
		upper:=lower:=FALSE
		,
		lower:=TRUE
		,
		upper:=TRUE
		,
		@<Regex: compute a hexadecimal value@>
	OUT SKIP
	ESAC
ELSE yield+:=(upper|UC rr|:lower|LC rr|rr)
FI

@ When a non-hexadecimal digit is read, we add the computed code point to
the yield.

@<Regex: compute a hex...@>=
BEGIN
	val:=0;

	FOR i TO max hex digits WHILE is hex(rr:=replacer[ri+:=1])
	DO
		val:=val*16+ctoi(rr)
	OD;

	IF NOT is hex(rr)
	THEN ri-:=1 #so it can be reread#
	FI;
	yield+:=REPR val
END

@2 System dependencies.
Sections marked thus should be changed for any change in the system:
for example, a change in compiler.
