@2Introduction.
This regular expression prelude was translated from \.{C++} source code
which was part of the \.{FTE} editor written by Marko Macek. This
particular code was selected because it used a single syntax which was
acceptable to the author. This version (\.{uregex}) provides regular
expressions for Unicode.

This macro should reflect the current version.

@m uregex version = $Id: uregex.w,v 1.4 2003/12/26 16:42:54 sian Exp $

@<Include...@>=
@<URegex modes included@>
@<URegex !NIL!s included@>
@<URegex names included@>
@<URegex plain values included@>
@<URegex other values included@>
@<URegex operators included@>
@<URegex procedures included@>
@<URegex routines included@>

@ The prelude was originally written to provide a separate module, but
now that the Algol 68G interpreter is available, it has been
converted for inclusion as a Web 68 module.

Here we include the \.{unicode} and \.{charbag} modules.

@iunicode.w@>
@iucharbag.w@>

@2Meta characters.
The library uses !UCS! character sequences in which a number of
characters are used to denote syntactic constructs. The characters
are called \textbf{meta-characters}. Regular expressions, if they are
going to be used world-wide, must be able to use meta-characters
specifiable by the programmer. Strictly speaking, they should be part
of the locale, but are unlikely to be made so in the present chaotic
state of computing. The only limitation put on the meta-characters is
that each character must be representable as a single !UCS! character (no
combining characters and such-like allowed).

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
         symbol \verb|$|) $[3]$.%$
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
      (upto nine such sub-expressions can be referrred to by the
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
      \item Unicode denoter\\
      This character introduces a set of upto 8 hexadecimal digits whose
      value will be used as the !UCS! value of the character (u) $[27]$.
   \end{enumerate}
\end{enumerate}

@ For replacement, some escaped characters act as meta-characters. The
default value is used to specify them.
\begin{description}
\item[0] Use the whole of the matched pattern as replacement.
\item[n] Use matched expression $n$ where $n\in[1,9]$ as replacement.
\end{description}

@ The meta-characters are stored in a value of mode !REF[]UCS! with
identifiers for each one.

@<URegex name...@>=
[27]UCS meta char;

REF UCS
   meta escape = meta char[ 1]:=ABS"\",
   meta bol    = meta char[ 2]:=ABS"^",
   meta eol    = meta char[ 3]:=ABS"$",
   meta bow    = meta char[ 4]:=ABS"<",
   meta eow    = meta char[ 5]:=ABS">",
   meta any    = meta char[ 6]:=ABS".",
   meta 0 or 1 = meta char[ 7]:=ABS"?",
   meta n 0 p  = meta char[ 8]:=ABS"@@",
   meta x 0 p  = meta char[ 9]:=ABS"*",
   meta n 1 p  = meta char[10]:=ABS"#",
   meta x 1 p  = meta char[11]:=ABS"+",
   meta choice = meta char[12]:=ABS"|",
   meta boset  = meta char[13]:=ABS"[",
   meta eoset  = meta char[14]:=ABS"]",
   meta compl  = meta char[15]:=ABS"~",
   meta range  = meta char[16]:=ABS":",
   meta bog    = meta char[17]:=ABS"{",
   meta eog    = meta char[18]:=ABS"}",
   meta bosub  = meta char[19]:=ABS"(",
   meta eosub  = meta char[20]:=ABS")",
   meta dig    = meta char[21]:=ABS"d",
   meta nodig  = meta char[22]:=ABS"D",
   meta ws     = meta char[23]:=ABS"s",
   meta nows   = meta char[24]:=ABS"S",
   meta word   = meta char[25]:=ABS"w",
   meta noword = meta char[26]:=ABS"W",
   meta uni    = meta char[27]:=ABS"u";

@ The procedures can be grouped as follows.

@<URegex rout...@>=
@<URegex basic procedures@>
@<URegex node handling procedures@>
@<URegex principal procedures@>

@ The library is initialised by !rx init! which takes as its only
parameter a row of pairs of mode !STRUCT(INT ind,UCS val)!. A null row
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
@m mc uni    = 27

@<URegex prin...@>=
PROC rx init = ([]STRUCT(INT ind,UCS val)r)BOOL:
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

@2Preliminary conversion.
Before compiling a regular expression, we convert the characters of the
expression from mode ![]UCS! to a linked-list each of whose elements have
mode !REF RX!.

@<URegex mode...@>=
MODE RX = STRUCT(UCS c,INT ind,REF RX back,forw);

@ Originally, the mode !REGEX! contained a union of mutually exclusive
values. However, for reasons of efficiency, the union has been replaced
by individual fields in the structure. After all, there will not be
many nodes in the compiled regular expression, so the saving of two or
three hundred bytes at the expense of many other instructions to get
the united value is not worth it.

@<URegex mode...@>=
MODE REGEX = @/
   @+STRUCT(BITS what,
            UCS uc,CHARBAG ucb, REF REGEX urx,
				prev,next);

@ We need !NIL! for !no rx! and !no regex!.

@<URegex !NIL!...@>=
REF RX no rx = NIL;
REF REGEX no regex = NIL;

@ We need to have a structure which can contain the indices of all
the sub-expressions in the regular expression.

@<URegex mode...@>=
MODE SUBEXP = [0:9]STRUCT(INT open, close);

@2Basic routines.
The mode !CHARBAG! is a convenient representation of a character
set and is defined in the !charbag! prelude.

Here are operators which insert a character into a charbag and
various operations on !CHARBAG!s themselves. We also define !SET! and
!CLEAR! for !BITS! as well.  Firstly, we declare the priorities.

@<URegex basic...@>=
PRIO SET = 7, CLEAR = 7;

@ These operators set or clear a bit in a !BITS!. Note that they do not
change the value of the !BITS! operand, but yield a !BITS! with the
concerned bit changed.

@<URegex basic...@>=
OP SET = (BITS b,INT n)BITS: 2r1 SHL(32-n) OR b;

@ !CLEAR! is similar to !SET!.

@<URegex basic...@>=
OP CLEAR = (BITS b,INT n)BITS: NOT(2r1 SHL(32-n)) AND b;

@ Now for the !CHARBAG! operators.  This procedure creates a set of
consecutive characters given starting and ending characters.

@<URegex basic...@>=
PROC range set = (REF CHARBAG bag,UCS c1,c2)REF CHARBAG:
   bag:=bag OR(HEAP[1:1]CHUNK:=CHUNK(c1,c2));

@ This operator is defined such that multiple invocations can occur
for one left-hand operand. Because the priority has not been given, it
is, by default, !1! (in common with all the other assigning operators).

We can define !SETAB! in terms of !range set!.

@<URegex basic...@>=
PRIO SETAB = 1;
OP SETAB = (REF CHARBAG bag,UCS c)REF CHARBAG:  range set(bag,c,c);

@ This macro defines a procedure which is an analogue of the routine
!char in string!. We define two declaration macros which use it.

@<URegex basic...@>=
PROC ucs in ucstring = (UCS uch,REF INT p,[]UCS md)BOOL:
BEGIN
   FOR k FROM LWB md TO UPB md
   DO 
		IF uch = md[k]
		THEN p:=k; GOTO found
		FI
	OD;
	FALSE EXIT
found:
	TRUE
END;

@ The public routine !rx compile! converts the regular expression to a
!REF[]RX! of which the first member is the parameter of !rx comp! which
controls the compilation proper.

!sub exp ct! must be global to !rx comp! because it contains a
cumulative count of the number of sub-expressions which must be
independent of the !rx comp!, the latter calling itself recursively.

@<URegex princ...@>=
PROC rx compile = ([]UCS regexp)REF REGEX:
IF UPB regexp < LWB regexp
THEN no regex
ELIF@/
   INT sub exp ct:=0;
   [LWB regexp:UPB regexp]RX rgx;
   @<URegex: declare the regex compiler@>

   FOR i FROM LWB rgx TO UPB rgx
   DO
      rgx[i]:=@/
         (regexp[i],i,(i=LWB rgx|no rx|rgx[i-1]),(i=UPB rgx|no rx|rgx[i+1]))
   OD;
	@<URegex: do the compilation proper and add an ending node@>
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

@<URegex: do the comp...@>=
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

@3Compilation proper.
The routine !rx comp! consists largely of a big !CASE! which identifies
each character and takes appropriate action.

@<URegex: declare the regex...@>=
PROC rx comp = (REF REF RX rx)REF REGEX:
BEGIN
   HEAP REF REGEX head:=no regex, tail:=no regex;
   INT ct, pos;

   WHILE
      no regex ISNT
			IF rx IS no rx
			THEN no regex
			ELIF ucs in ucstring(c OF rx,pos,
				   (meta 0 or 1,meta n 0 p,meta x 0 p,meta n 1 p,meta x 1 p,
					 meta choice))
			THEN new sub(head,tail,rx)
			ELIF c OF rx = meta eog OR c OF rx = meta eosub
			THEN no regex
			ELIF ucs in ucstring(c OF rx,pos,
						(meta bog,meta bosub,meta escape,meta boset))
			THEN rx:=forw OF rx;
				@<URegex: act according to the value of !pos!@>
			ELIF ucs in ucstring(c OF rx,pos,
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

@ @<URegex: act according...@>=
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

@<URegex basic...@>=
PROC expand set denoter = (BITS what)CHARBAG:
IF HEAP CHARBAG set:=null bag;
   INT pos;
   ucs in ucstring(ABS what,pos,
						 (ABS re digit,
						  ABS re not digit,
						  ABS re wspace,
						  ABS re not wspace,
						  ABS re word,
						  ABS re not word))
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

@2Node handlers.
This procedure creates a new node of mode !REF REGEX!. Its parameter
gives the type of node. The !NIL! in the structure display is
assigned to the !CHARBAG! field of the structure.

@<URegex node...@>=
PROC new node = (BITS what)REF REGEX:
   @+HEAP REGEX:=(what,0,NIL,no regex,no regex,no regex);

@ A single character is added to a compiled regular expression by
storing it in a single node.

@<URegex node...@>=
PROC new char = (UCS uch)REF REGEX:
BEGIN
   REF REGEX hr=new node(re char);
   uc OF hr:=uch;
   HEAP REGEX:=hr
END;

@ We can now declare !new escape! which creates a new node for an
escaped character (a character preceded by !meta escape!).

The routine leaves !rx! referring to the last character processed.

@m max hex digits = 8

@m process(wh) = (REF REGEX lx = new node(wh);
    ucb OF lx:=expand set denoter(wh);
    what OF lx:=re set;
	 HEAP REGEX:=lx)

@<URegex node...@>=
PROC new escape = (REF REF RX rx)REF REGEX:

IF INT pos;
   @<URegex: declare !process digits!@>
   ucs in ucstring(c OF rx,pos,
		(meta dig,meta nodig,meta ws,meta nows,
		 meta word,meta noword,meta uni))
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
FI; #new escape#

@ A character which cannot be denoted can be expressed as a decimal,
octal or hexadecimal value. Each sequence of digits is preceded by a
character which identifies the radix. The routine !process digits!
converts such digit sequences into a value and yields a new node
containing the equivalent character. Here are three macros for testing
whether a digit is decimal, octal or hexadecimal. Note that for
hexadecimal characters, we only allow lower-case letters, in accordance
with Algol 68 practice. We presume that digits are always !"0"! to
!"9"! and that hexadecimal digits will always include !"a"! to !"f"!.

The routine leaves !rx! referrring to the last character processed.

@m is dec(c) = ((c)>=ABS "0" & (c)<=ABS "9")
@m is hex(c) = (is dec(c) OR (c)>=ABS "a" & (c)<=ABS "f")
@m ctoi(c) = (is dec(c)|(c)-ABS"0"|(c)-ABS"a"+10)

@<URegex: declare !process...@>=
PROC process digits = (INT radix,max chars,REF REF RX rx)REF REGEX:
IF INT n:=0;  BOOL no val:=TRUE;

   TO max chars
   WHILE@/
      IF forw OF rx IS no rx THEN FALSE
      ELSE is hex(c OF forw OF rx)
      FI
   DO
      no val:=FALSE;
      rx:=forw OF rx;
      n*:=radix+:=ctoi(c OF rx)
   OD;

   no val
THEN no regex
ELSE new char(n)
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

@<URegex node...@>=
PROC new set = (REF REF RX rx)REF REGEX:
BEGIN
   HEAP CHARBAG set:=null bag;
   UCS ch, c1 #1st range char.#, c2 #2nd range char#;
   BOOL neg:=(c OF rx = meta compl), range:=FALSE;

   IF neg @&THEN rx:=forw OF rx @&FI;
   REF REGEX yield:=new node(re set);

   WHILE@/
      IF (rx IS no rx) OR (yield IS no regex)
      THEN yield:=no regex;  FALSE
      ELIF c OF rx = meta eoset
      THEN @<URegex: complete the yield@>
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
         THEN ch:=uc OF lrx;  @<URegex: do a normal character@>
         ELSE set:=set OR ucb OF lrx
         FI
      ELSE@/
         ch:=c OF rx;
         @<URegex: do a normal...@>
      FI;
      rx:=forw OF rx
   OD;
   HEAP REGEX:=yield
END; #new set#

@ A normal character could start or finish a range. The boolean name
!range! is !TRUE! when a normal character has been read which is
followed by a !meta range!.

@<URegex: do a normal...@>=
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
   IF c1 <= (c2:=ch)
   THEN range set(set,c1,c2);  range:=FALSE
   ELSE yield:=no regex #invalid range#
   FI
ELIF yield ISNT no regex
THEN set SETAB ch
FI

@ When the end of the set has been found, we need to complete the value
of !yield!. We yield !FALSE! here to terminate the loop in the
preceding section.

@<URegex: complete...@>=
IF range
THEN yield:=no regex #no 2nd range char.#
ELSE ucb OF yield:=(neg|NOT set|set)
FI;
FALSE

@ Some values of mode !CHARBAG! are declared as names so that the user
can set them. Here are the names and default values.

@<URegex other...@>=
CHARBAG digits:=HEAP[1:1]CHUNK:=CHUNK(ABS "0",ABS "9");
CHARBAG word chars :=HEAP[1:2]CHUNK:=
	((ABS "A",ABS "Z"),
	 (ABS "a",ABS "z"));
CHARBAG white space:=HEAP[1:2]CHUNK:=
	((8,13),
	 (32,32));

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

@<URegex princ...@>=
PROC rx change set = (INT type, []UCS new val)BOOL:
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
      (digits,word chars,white space)[type]:=ucb OF rs;
   TRUE
FI; #rx change set#

@ The routine !add node! adds a new node to the linked-list that contains
the compiled regular expresssion. If both !st! and !fn! refer to
!no regex!, the new node is simply assigned to them. Otherwise, the new
node is appended to the last node and !finish! made to refer to the
last node of the whole list.

@<URegex node...@>=
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

@<URegex node...@>=
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

      @<URegex: backtrack to the start of the group@>
   ELSE num chars:=1 #!last!$\Rightarrow$char.#
   FI;

   last IS no regex
THEN no regex       #extra closer#
ELIF num chars = 0
THEN no regex     #empty group#
ELIF c OF rx = meta choice
THEN @<URegex: do or symbol@>
ELIF c OF rx = meta 0 or 1
THEN @<URegex: do one or none@>
ELIF c OF rx = meta x 0 p OR c OF rx = meta n 0 p
THEN @<URegex: do none or more@>
ELSE @<URegex: do 1 or more@>
FI; #new sub#

@ Move !last! back to the opener of this group.

@<URegex: backtrack...@>=
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

@<URegex: do one or...@>=
new:=new node(BIN c OF rx SET re branch SET re maximal);
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

urx OF new:=no;  #link !new!#
urx OF no:=new;  #and !no!  #
end:=no #The new last node#

@ Insert a branch node before the character or group to be repeated and
jump and nothing nodes after it.

@<URegex: do none...@>=
new:=new node(IF c OF rx=meta x 0 p
				  THEN BIN c OF rx SET re branch SET re maximal
              ELSE BIN c OF rx SET re branch
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

urx OF new:=no;  #link !new!#
urx OF no:=new;  #and !no!  #
urx OF jump:=new;#enable the !jump! link#

end:=no #The new last node#

@ Insert jump and branch nodes before the character or group to
be repeated and jump and nothing nodes after it.

@<URegex: do 1...@>=
new:=new node(IF c OF rx=meta x 1 p
              THEN BIN c OF rx SET re branch SET re maximal
              ELSE BIN c OF rx SET re branch
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

urx OF new:=no;     #link !new!#
urx OF no:=new;     #and !no!#
urx OF jump:=new;   #enable the !jump! link#
urx OF skip:=last;  #enable the !skip! link#

end:=no #The new last node#

@ Insert a branch node before the character or group and a break node
and a nothing node after it.

@<URegex: do or...@>=
IF forw OF rx ISNT no rx
THEN
   new:=new node(BIN c OF rx SET re branch SET re maximal);
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

   urx OF new:=no;     #link !new!#
   urx OF no:=new;     #and !no!  #
   urx OF jump:=new;   #enable the !jump! link#

   HEAP REGEX:=end:=no #The new last node#
ELSE no regex #!"|" not followed by a character#
FI

@2Matching.
This routine tests whether a compiled regular expression will match a
string. The local names are used as follows:-
\begin{description}
\item[\texttt{n}] Used to step down the compiled regular expression.
\item[\texttt{pos}] Contains the position of a discriminant in a string.
\item[\texttt{rex}] Contains the current position in the string to be
matched. Set to !LWB s! at the start of the routine.
\end{description}
The outermost call of the routine ensures that the lower bound of the string
is !1!. Recursive calls do not ensure that so that a test of !pti=1! will
determine whether !matcher! is at the beginning of the string (which is taken
to be the beginning of the line).

We shall need to keep the current index into the pattern to be matched
global to the routines !rx match! and !matcher!.

@<URegex name...@>=
INTpti;

@ Here is the pattern matching routine.

@<URegex node...@>=
PROC matcher = (REF REGEX rx,[]UCS str,INT st,level,REF SUBEXP se)BOOL:
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
         ucs in ucstring(ABS what OF n,pos,
								 (ABS re char,ABS re any,ABS re set,ABS re end))
      THEN @<URegex: do characters, sets and the end@>
      ELIF ABS what OF n < ABS re end
      THEN
         CASE ABS what OF n + 1
         IN
            (n:=next OF n; TRUE),                        #re nothing#
            (n:=urx OF n; TRUE),                         #re jump#
            @<URegex: match a break@>,                   #re break#
            (pti=1|n:=next OF n; TRUE|FALSE),            #re at bol#
            (pti>UPB str|n:=next OF n; TRUE|FALSE),      #re at eol#
            @<URegex: match the beginning of a word@>,   #re at bow#
            @<URegex: match the end of a word@>          #re at eow#
         ESAC
      ELIF is(n,re group)
      THEN @<URegex: do groups@>
      ELIF is(n,re branch)
      THEN @<URegex: do branches@>
      ELSE FALSE
      FI
   DO SKIP OD;
   yield
FI; #matcher#

@ Process character and set matchers and the end of the regular
expression.

@<URegex: do char...@>=
IF pos = 4
THEN se[0]:=(st,pti); NOT(yield:=TRUE)
ELIF pti > UPB str
THEN FALSE
ELSE
   CASE pos
   IN
      IF uc OF n = str[pti]          #re char#
      THEN pti+:=1;  n:=next OF n;  TRUE
      ELSE FALSE
      FI
      ,
      BEGIN                          #re any#
         pti+:=1;  n:=next OF n; TRUE
      END
      ,
      IF str[pti] ELEM ucb OF n      #re set#
      THEN pti+:=1;  n:=next OF n; TRUE
      ELSE FALSE
      FI
   ESAC
FI

@ Nodes of type !re break! only exist for the choice operator.

@<URegex: match a bre...@>=
BEGIN
   n:=next OF next OF n; #guaranteed to exist for !meta choice!#
   IF is(n,re branch)
   THEN @<URegex: skip over following alternatives@>
   FI;

   IF is(n,re group)
   THEN @<URegex: skip forward over the group@>
   FI;
   n:=next OF n;
   TRUE
END

@ The beginning of a word can occur at the start of a line or following
a non-word character.

@<URegex: match the begin...@>=
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

@<URegex: match the end...@>=
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

@<URegex: do gr...@>=
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

@<URegex: do br...@>=
IF is(n,re maximal)
THEN
   IF save:=pti;  matcher(next OF n,str,st,level+1,se)
   THEN se[0]:=(st,pti);  NOT(yield:=TRUE)
   ELSE pti:=save;  n:=urx OF n; TRUE
   FI
ELIF save:=pti;  matcher(urx OF n,str,st,level+1,se)
THEN se[0]:=(st,pti);  NOT(yield:=TRUE)
ELSE pti:=save;  n:=next OF n; TRUE
FI

@ This code skips alternatives which follow a sucessfully matched
alternative.

@<URegex: skip over...@>=
REF REGEX m;
WHILE
   IF NOT is(n,re branch)
   THEN FALSE
   ELSE ((m:=urx OF n):/=:no regex)
					AND
			ABS(what OF n&16rff) = meta choice
   FI
DO
   n:=next OF m
OD

@ This code skips forward over a group.

@<URegex: skip forward...@>=
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

@<URegex princ...@>=
PROC rx match = (REF REGEX rx,[]UCS pattern,REF SUBEXP se)BOOL:
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

@2Replacing.
The routine !rx replace! presumes that !rx match! has been called and
yielded !TRUE! so that a !REF SUBEXP! is available with the requisite
subexpression indices. The routine yields the result of replacing
!matched! with the expression provided in !replacer!.

@<URegex princ...@>=
PROC rx replace = ([]UCS replacer, matched,SUBEXP se)[]UCS:
BEGIN
	FLEX[1:0]UCS yield:=matched[:open OF se[0]-1];
   BOOL #State flags#
		escape:=FALSE,      #!TRUE! if !meta escape! was read#
		unicode:=FALSE;     #!TRUE! if !meta uni! was read#
   INT value;             #Used for processing Unicode code points#

	FOR r FROM LWB replacer TO UPB replacer
	DO
		UCS rr:=replacer[r];
		IF escape
		THEN
			escape:=FALSE;
			@<URegex: does a Unicode code point or a sub-expression follow?@>
		ELIF unicode
		THEN @<URegex: compute a Unicode code point@>
		ELIF rr = meta escape
		THEN escape:=TRUE
		ELSE yield:=yield+rr
		FI
	OD;

	IF unicode
	THEN yield:=yield+value
	FI;

	yield + matched[close OF se[0]:]
END; #rx replace#

@ A !meta escape! character can precede a single digit representing a
matched sub-expression or a series of hexadecimal digits representing
a Unicode code point.

@<URegex: does a Unicode...@>=
IF rr = meta uni
THEN unicode:=TRUE;  value:=0
ELIF is dec(rr)
THEN
	INT si = rr-ABS "0";
	INT oi = open OF se[si], ci = close OF se[si]-1;
	IF oi/=0 & ci/=0
	THEN yield:=yield+matched[oi:ci]
	FI
ELSE yield:=yield+rr		#Literal character#
FI

@ We shift !value! for speed. When a non-hexadecimal digit is read,
we add the computed code point to the yield and reset !unicode!.

@<URegex: compute a Unicode...@>=
IF is hex(rr)
THEN value:=ABS(BIN value SHL 4)+ctoi(rr)
ELSE yield:=yield+value;  unicode:=FALSE
FI

@2End.
