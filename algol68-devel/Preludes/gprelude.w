% This program is copyright (C) BP65 Phoenix Engineering
@2Introduction.
This prelude is intended to be included from a \Web file.
It was originally written as straight Algol 68. This
rewrite makes use of the facilities of Web 68. In particular, the
\texttt{xterm} control sequences have been retained as macros, while
the \textit{gstring} routines have been moved to their own compiled
prelude.
 
Here is the log:-
	$Log: gprelude.w,v $
	Revision 1.4  2004/09/30 13:15:53  sian
	Minor changes to the text
	
	Revision 1.3  2004/08/08 20:52:14  sian
	Added `ref result' parameter to `binary chop'
	
	Revision 1.2  2003/12/26 16:41:37  sian
	Minor alterations
	
	Revision 1.1  2003/12/26 11:38:23  sian
	String operators, sorts and Xterm control sequences
	

This message should reflect the current version.

@m cvs gprelude = "$Id: gprelude.w,v 1.4 2004/09/30 13:15:53 sian Exp $"

@ The prelude consists of definitions only which are used by the mother \Web
file.

@2String operators.
These naturally form into several different groups, viz:-
\begin{enumerate}
\item Case operators\newline
These change one or more characters to upper or lower case.
\item Sub-string operators\newline
These select a sub-string according to different criteria.
\item Search operators\newline
These search a string for a given character or a given string, or
search a row of strings for a given string.
\item String manipulation\newline
These change a string according to certain criteria.
\end{enumerate}

@3Case operators.
The next two operators make a character or a string upper-case.

@d macro gp op uc char =
OP UC = (CHAR c)CHAR: (c>="a" & c<="z"|REPR(ABS c-32)|c)

@d macro gp op uc row char =
macro gp op uc char;
OP UC = ([]CHAR s)[]CHAR:
(
   [LWB s:UPB s]CHAR ss;
   FOR i FROM LWB ss TO UPB ss
   DO
      ss[i]:=UC s[i]
   OD;
   ss
)

@ These operators make a character or string lower-case.

@d macro gp op lc char = OP LC = (CHAR c)CHAR: (c>="A" & c<="Z"|REPR(ABS c+32)|c)

@ @d macro gp op lc row char =
macro gp op lc char;
OP LC = ([]CHAR s)[]CHAR:
(
   [LWB s:UPB s]CHAR ss;
   FOR i FROM LWB ss TO UPB ss
   DO
      ss[i]:=LC s[i]
   OD;
   ss
)

@3Substring operators.
The operator !UPTO! yields the whole string if the character is not
found and upto, but not including the character if it is. The
operator !DOWNTO! starts searching from the end of the strings and
yields the whole string if the character is not found and downto, but
not including the character if it is. The operator !AFTER! yields the
null string if the character is not found and the characters after
the character if it is. Here are their priorities.

@d macro prio after = PRIO @!AFTER = 6
@d macro prio upto = PRIO @!UPTO = 5
@d macro prio downto = PRIO @!DOWNTO = 5

@ Here are the operators themselves. The !---1! gets round a bug in
the local compiler.@^system dependencies@>

@d macro gp op upto =
macro prio upto;
OP UPTO = ([]CHAR s, CHAR t)[]CHAR: #but not including#
IF INT to ix; char in string(t,to ix,s)
THEN s [ : to ix-1@@LWB s]
ELSE s
FI

@d macro gp op downto =
macro prio downto;
OP DOWNTO = ([]CHAR s, CHAR t)[]CHAR: #but not including#
IF INT to ix:=UPB s+1;
	FOR i FROM UPB s BY ---1 TO LWB s WHILE s[i]/=t
	DO
		to ix:=i
	OD;
	to ix>UPB s
THEN s
ELSE s[to ix : @@to ix]
FI

@d macro gp op after =
macro prio after;
OP AFTER = ([]CHAR s, CHAR t) []CHAR:
IF INT to ix; char in string(t,to ix,s)
THEN s [to ix+1:@@to ix+1]
ELSE ""
FI

@ Subtracting characters doesn't make much sense, but the minus symbol can be
used usefully to designate a range of characters.

@d macro gp op minus char =
OP - = (CHAR a,b)[]CHAR:
IF ABS a <= ABS b
THEN
   [ABS a:ABS b]CHAR s;
   FOR i FROM LWB s TO UPB s DO s[i]:=REPR i OD;
   s
ELSE
   [ABS b:ABS a]CHAR s;
   FOR i FROM LWB s TO UPB s DO s[i]:=REPR i OD;
   s
FI

@ This operator removes leading and trailing spaces and control
characters.@^system dependencies@>

@d macro gp op trim =
OP TRIM = ([] CHAR s)[] CHAR:
(
    INT l := LWB s;
    FROM LWB s TO UPB s   WHILE s [l] <= " " DO l +:= 1 OD;

    INT u := UPB s;
    FROM UPB s BY ---1 TO l WHILE s [u] <= " " DO u -:= 1 OD;

    (l > u | s [LWB s : LWB s -1@@LWB s -1] | s [l:u@@l])
)


@ These operators yield the first or the last character of a string. Here are
their priorities.

@d macro prio begins = PRIO @!BEGINS = 4
@d macro prio ends = PRIO @!ENDS = 4

@d macro gp op begins =
macro prio begins;
OP BEGINS = ([]CHAR s,CHAR c)BOOL: s[LWB s]=c
@d macro gp op ends =
macro prio ends;
OP ENDS = ([]CHAR s,CHAR c)BOOL: s[UPB s]=c

@3Search operators.
The following operators are all dyadic, so here is  the priority declaration.

@d macro prio find = PRIO @!FIND = 6

@ The !FIND! operator uses the routine !char in string! to provide useful
infix forms. In each case, the routine yields one less than the lower
bound of the string if the character or characters cannot be found. Of
course, this presumes that the lower bound of the given multiple is
greater than !-maxint!, a likely occurrence.@^system dependencies@>
\begin{enumerate}
\item With mode !PROC(CHAR,[]CHAR)INT!, this is the equivalent of
!char in string!, but yields the index of the character in the string.
\item With mode !PROC([]CHAR,[]CHAR)INT!, this yields the index of
the left-hand operand in the right-hand operand.
\item With mode !PROC([]CHAR,[][]CHAR)INT!, this yields the index of
the string which is the same as the required string.
\end{enumerate}

@d macro gp op find char row char =
macro prio find;
OP FIND = (CHAR c, [] CHAR s)INT:
   (INT p; char in string(c,p,s)|p|LWB s-1)

@d macro gp op find row char row char =
macro gp op find char row char;
OP FIND = ([]CHAR a,b)INT:
IF a = ""@+                                   THEN LWB b
ELIF b = ""@+                                 THEN LWB b-1
ELIF INT st1 = a[LWB a] FIND b; st1 < LWB b@+ THEN st1
ELIF st1+UPB a-LWB a <= UPB b
THEN #a could be at position st1: in b#
   IF a = b[st1:st1+UPB a-LWB a]
   THEN st1
   ELIF INT st2 = a FIND b[st1+1:@@st1+1];  st2=st1
   THEN LWB b-1
   ELSE st2
   FI
ELSE LWB b-1
FI #FIND#

@d macro gp op find row char row row char =
macro prio find;
OP FIND = ([]CHAR s, [][]CHAR set) INT:
(
    INT p := LWB set - 1;
    FOR n FROM LWB set TO UPB set
    WHILE NOT(s = set [n] | p := n; TRUE | FALSE) DO SKIP OD;
    p
)

@3String manipulation.
This procedure replaces all characters in !x! which occur in !s! with the
corresponding character in !y!.

@d macro gp replace =
PROC replace = ([] CHAR s, x, y)[] CHAR:
(
   [LWB s : UPB s] CHAR ss;

   FOR n FROM LWB s TO UPB s
   DO
       ss [n] :=
           (INT ix:=LWB s-1; char in string(s[n],ix,x)| y [ix] | s [n])
   OD;

   ss
) #replace#

@ This operator reverses the characters in its !STRING! operand.

@d macro gp op reverse =
OP REVERSE = ([]CHAR s) []CHAR:
IF s = ""
THEN ""
ELSE
   [LWB s:UPB s]CHAR ss;
   FOR i FROM UPB s BY ---1 TO LWB s
   DO
      ss[LWB s+UPB s-i]:=s[i]
   OD;
   ss
FI #REVERSE#

@ The operator !LOP! removes all characters following the last !c! character.

@d macro prio lop = PRIO LOP = 7

@d macro gp op lop =
macro gp op reverse;
macro gp op after;
macro prio lop;
OP LOP = ([]CHAR s,CHAR c)[]CHAR:
	REVERSE(REVERSE s AFTER c)

@2The !XOR! operator.
Here is its priority.

@d macro prio xor = PRIO @!XOR = 4

@ Here are its definitions for all the various lengths of !BITS!.

@d macro gp op xor bits =
macro prio xor;
OP XOR = (BITS a,b)BITS: a & NOT b OR NOT a & b
@d macro gp op xor long bits =
macro prio xor;
OP XOR = (LONG BITS a,b)LONG BITS: a & NOT b OR NOT a & b
@d macro gp op xor short bits =
macro prio xor;
OP XOR = (SHORT BITS a,b)SHORT BITS: a & NOT b OR NOT a & b
@d macro gp op xor short short bits =
macro prio xor;
OP XOR = (SHORT SHORT BITS a,b)SHORT SHORT BITS: a & NOT b OR NOT a & b

@2Sorts for \Algol.
This part was originally developed by Dave Lloyd of Oxford and
Cambridge Compilers Limited to which full credit should be given for
this ingenious solution to sorts in Algol 68.

Writing sorting algorithms in Algol 68 suffers from the need to
specify the modes of the items being sorted. Unfortunately, modals are
not available in the language, so something special needs to be done.
The following routines use a multiple containing simple integers which
is re-ordered according to a procedure given as a parameter to the
sort.

Both sort routines have the same interface:-
   !PROC sort = (INT l, u, PROC(INT,INT)BOOL before)[]INT:!
yielding a row of integer indices from ![l:u]! sorted so that
   !before(i,j)! implies !i < j!

To get sorted values, do something like this:-
\begin{verbatim}
	[n]COMPL z;
	... code to assign values to z ...
	[]INT index=sort(LWB z,UPB z,(INT i,j)BOOL: ABS z[i] < ABS z[j]);

	FOR i FROM LWB z TO UPB z
	DO
		put bin(f,z[index[i]])
	OD
\end{verbatim}

@ Here is the procedure for the !bubble sort!.

@d macro gp bubble sort =
PROC bubble sort = (INT @!l,@!u, PROC(INT,INT)BOOL @!before)[]INT:
BEGIN
   [l:u]INT @!keys;@+ FOR i FROM l TO u DO keys[i]:=i OD;

   WHILE@/
      BOOL @!ordered:=TRUE;
@#
      FOR n FROM l TO u-1
      DO
         IF INT @!i = keys[n], j=keys[n+1];@+ before(j,i)
         THEN@/
				keys[n]:=j;  keys[n+1]:=i;
            ordered:=FALSE
         FI
      OD;
@#
      NOT ordered
   DO@+ SKIP@+ OD;
@#
   keys
END #bubble sort#

@ Here is the procedure for the shell sort.

@d macro gp shell sort =
PROC shell sort = (INT @!l,@!u, PROC(INT,INT)BOOL @!before)[]INT:
BEGIN
   [l:u]INT @!keys;@+  FOR i FROM l TO u DO keys[i]:=i OD;
   INT @!inc:=(u+l)%2;  #initial value#

   WHILE@/
      WHILE@/
         BOOL @!ordered:=TRUE;
@#
         FOR n FROM LWB keys TO UPB keys - inc
         DO
            IF INT @!i = keys[n], j = keys[n+inc];@+ before(j,i)
            THEN@/
               keys[n]:=j;  keys[n+inc]:=i;
               ordered:=FALSE
            FI
         OD;
@#
         NOT ordered
      DO@+ SKIP@+ OD;
@#
      inc /= 1
   DO
      inc %:= 2
   OD;

   keys
END #shell sort#

@2Binary chop for \Algol.
The binary chop is an efficient means of searching a sorted array.
The macro below has four parameters:-
\begin{enumerate}
\item An expression yielding a one-dimensional multiple.
\item The discriminant: an expression yielding a value to be compared.
\item An expression which yields a meek primary which will be
followed by an indexer. The indexed third parameter should yield a
value whose mode is relevant to the mode of the discriminant for the
operations of !=!  and !<!.
\item An expression yielding a name of mode !REF INT! which will
contain the index of the insertion point if the discriminant has not
been found.
\end{enumerate}
The macro yields the index of the element in !multiple! which equals
!discriminant! or one less than the lower bound of !multiple! if
!discriminant! cannot be found.

@m binary chop(multiple,discriminant,meek primary,ref result) =
	BEGIN
		INT l:=LWB multiple,u:=UPB multiple,m;

		WHILE
			IF l <= u
			THEN discriminant /= meek primary[m:=ABS(BIN(l+u)SHR 1)]
			ELSE FALSE
			FI
		DO
			(discriminant < meek primary[m]|u:=m-1|l:=m+1)
		OD;

		ref result:=(l>u|u|m);
		(l>u|LWB multiple-1|m)
	END

@2Xterm control sequences.
This section contains routines which provide explicit access to much
of the functionality provided by \texttt{xterm} control sequences. The
definitive truth on this matter can be found in the file
\begin{center}
\texttt{/usr/share/doc/xtermcontrol/ctlseqs.txt.gz}
\end{center}

@3Basic declarations.
In this section we provide the plain value declarations which form the
foundation of the \texttt{xterm} control sequences.

We start off with character attributes.

@m gp normal = 0
@m gp bold = 1
@m gp under = 4
@m gp inverse = 7

@ These macros define the foreground colours.

@m gp fg black = 30
@m gp fg red = 31
@m gp fg green = 32
@m gp fg yellow = 33
@m gp fg blue = 34
@m gp fg magenta = 35
@m gp fg cyan = 36
@m gp fg white = 37
@m gp fg orig = 39

@ These macros define the background colours.

@m gp bg black = 40
@m gp bg red = 41
@m gp bg green = 42
@m gp bg yellow = 43
@m gp bg blue = 44
@m gp bg magenta = 45
@m gp bg cyan = 46
@m gp bg white = 47
@m gp bg orig = 49

@3Initial control sequences.
The commands to the underlying \texttt{xterm} require a  number of
control sequences which start each command. Here are all of them.

@m gp csi = esc+"["
@m gp osc = esc+"]"
@m gp ind = esc+"D"
@m gp nel = esc+"E"
@m gp hts = esc+"H"
@m gp ri = esc+"M"
@m gp ss2 = esc+"N"
@m gp ss3 = esc+"O"
@m gp dcs = esc+"P"
@m gp spa = esc+"V"
@m gp epa = esc+"W"
@m gp sos = esc+"X"
@m gp st = esc+"\"
@m gp apc = esc+blank

@3Infrastructural routines.
``control'' characters have to be specified from time to time, so this operator makes
it possible to write !CTRL"X"!.

@d macro gp op ctrl =
OP CTRL = (CHAR c)CHAR:  REPR(ABS c-ABS"@@")

@ This procedure converts a row of integers into a string suitable for
output. It is intended for internal use only.

@d macro gp ints =
PROC gp ints = ([]INT m)[]CHAR:
(
   FILE mf;  establish(mf,"",mem channel,1,1,4*UPB m);
   FOR i FROM LWB m TO UPB m-1
   DO
      put(mf,(whole(m[i],0),";"))
   OD;
   put(mf,whole(m[UPB m],0));
   STRING s:=file buffer(mf)[:current pos(mf)];
   close(mf);
   s
) #gp ints#

@ The next routine gets characters from the keyboard. We have to be
careful here because time-slicing of the microprocessor can chop up
key sequences. However, each single call to the kernel should result
in all the characters emitted by a function key (courtesy of
\texttt{xterm}) to be captured with a single call to !gp get key!. We
also have to ensure that \emph{all} characters input will be accepted.
The routine !posix read! provides the necessary service.

It is the user's responsibility to ensure that the !REF FILE! name
!kbd! has been set to non-canonical input mode.

@d macro kbd = FILE @!kbd

@d macro gp get key =
macro kbd;
PROC gp get key = []CHAR:
BEGIN
	VECTOR[256]CHAR buffer;
	INT res=posix read(sys file OF kbd,buffer,UPB buffer);
	buffer[:res]
END #gp get key#

@ The next routine gets a reply from the \texttt{xterm} program. Such
character replies are always terminated by a known terminator.
However, the terminator can be either a single character or a pair of
characters. Accordingly, the Algol 68 !UNION! is used to provide both
possibilities.

The routine is intended for internal purposes only.

@d macro gp get reply =
macro gp op ends;
macro gp get key;
PROC gp get reply = (UNION(CHAR,[]CHAR) term)[]CHAR:
CASE STRING reply;  term
IN
   ([]CHAR ts):
      IF UPB ts=0
		THEN ""
		ELSE
         WHILE
            reply+:=gp get key;
            IF UPB reply>1
            THEN reply[UPB reply-UPB ts+1:]/=ts
            ELSE TRUE
            FI
         DO SKIP OD;
         reply
      FI,
   (CHAR tc):
      BEGIN
         WHILE
            reply+:=gp get key;
            NOT(reply ENDS tc)
         DO SKIP OD;
         reply
      END
OUT ""
ESAC #gp get reply#

@ The next routine is used internally by some user-level routines.

@d macro gp p csi =
macro gp ints;
PROC gp p csi = ([]INT ri)VOID: print((gp csi,gp ints(ri),"t"))

@ The next routine is used internally by some user-level routines
which change the text of the \texttt{xterm} window attributes.

@d macro gp set text =
macro gp op ctrl;
PROC gp set text = (INT ps, []CHAR pt)VOID:
   print((gp osc,whole(ps,0),";",pt,CTRL"G"))

@3User routines.
These routines are intended for public use. They consist of routines
which
\begin{itemize}
\item Set attributes
\item Control the cursor
\item Clear the window
\item Control window attributes
\end{itemize}

@ The next routine can convert a number of required attributes into a
string. Thus it is possible to write !print((gp attr(gp fg red),"string"))!.

@d macro gp attr =
macro gp ints;
PROC gp attr=([]INT a)[]CHAR: gp csi+gp ints(a)+"m"

@ These routines will move the cursor in various directions as well as
saving and restoring its position. Only one position can be saved at a
time.

@d macro gp c up =
PROC gp c up=(INT r)VOID:  print((gp csi,whole(r,0),"A"))  # cursor up      #
@d macro gp c dn =
PROC gp c dn=(INT r)VOID:  print((gp csi,whole(r,0),"B"))  # cursor down    #
@d macro gp c rt =
PROC gp c rt=(INT r)VOID:  print((gp csi,whole(r,0),"C"))  # cursor right   #
@d macro gp c lt =
PROC gp c lt=(INT r)VOID:  print((gp csi,whole(r,0),"D"))  # cursor left    #

@d macro gp csav =
PROC gp csav=VOID:         print((esc,"7"))                # save cursor pos.#
@d macro gp cres =
PROC gp cres=VOID:         print((esc,"8"))                # restore "    "  #
@d macro gp rc =
PROC gp rc=(INT r,c)VOID:  print((gp csi,whole(r,0),";",whole(c,0),"H"))
                                                          # cursor to (r,c)#

@ These routines clear either a line or parts of the line, depending on
the current position of the cursor, or parts of the window.

@d macro gp ceow =
PROC gp ceow=VOID:         print((gp csi,"0J"))              # to eow   #
@d macro gp cbow =
PROC gp cbow=VOID:         print((gp csi,"1J"))              # to bow   #
@d macro gp cwin =
PROC gp cwin=VOID:         print((gp csi,"2J"))              # window   #
@d macro gp ceol =
PROC gp ceol=VOID:         print((gp csi,"0K"))              # to eol   #
@d macro gp cbol =
PROC gp cbol=VOID:         print((gp csi,"1K"))              # to bol   #
@d macro gp cln =
PROC gp cln =VOID:         print((gp csi,"2K"))              #whole line#

@d macro gp ln ins =
PROC gp ln ins=(INT l)VOID:print((gp csi,whole(l,0),"L"))    # insert lines #
@d macro gp ln del =
PROC gp ln del=(INT l)VOID:print((gp csi,whole(l,0),"M"))    # delete lines #

@d macro gp scr up =
PROC gp scr up = (INT s)VOID:  print((gp csi,whole(s,0),"S"))# scroll up    #
@d macro gp scr dn =
PROC gp scr dn = (INT s)VOID:  print((gp csi,whole(s,0),"T"))# scroll down  #

@ The next routine will set the scrolling region. The first integer of
the multiple gives the top line, the second, the bottom line. If more
than or less than two integers are supplied, it sets the scrolling
region back to the default (the whole window).

@d macro gp set scr rgn =
macro gp ints;
PROC gp set scr rgn = ([]INT s)VOID: CO set scrolling region CO
IF print(gp csi);  UPB s=2
THEN print((gp ints(s),"r")) #top, bottom of scrolling region#
ELSE print("r")              #default region#
FI #gp set scr rgn#

@ The next routine gets the current size of the \texttt{xterm} window
in character units. The first integer in the yielded multiple is
the current number of rows, the second the current number of columns.

@d macro gp get rc =
PROC gp get rc = []INT:  #1: r, 2: c #
BEGIN
   [2]INT xy:=(-1,-1);
   print((gp csi,"6n"));
   FILE mf;  open(mf,MAKERVC gp get reply("R"),mem channel);
   on logical file end(mf,
      (REF FILE f)BOOL: (xy:=(10,10);  GOTO eof;  SKIP));
   set(mf,1,1,2);
   get(mf,(xy[1],LOC CHAR,xy[2]));
eof:
   close(mf);
   xy
END #gp get rc#

@ The next routine sets the character set for different
languages. There are four characters sets designated as the G0, G1, G2
and G3 character sets. The first parameter of !gp assign gcs! is an
integer in the range ![0:3]!. The second parameter is a two- or
three-character string denoting the particular language set.

@d macro gp assign gcs =
macro gp op find row char row row char;
PROC gp assign gcs = (INT g,[]CHAR cs)VOID: # g=0:3 #
(
   CHAR charset = "0AB4CRQKYEZH="[cs FIND
                  []STRING("DEC","UK","US","NL","SU","FR","CF",
                           "DE","IT","ND","ES","SV","CH")];
   CHAR gcs="()*+"[g+1];
   print((esc,gcs,charset))
) #set gcs#

@ The next routine invokes the Gn character set. The difference
between this routine and !gp assign gcs! is that the latter assigns a
particular character set to a Gn designator, while the former uses
the Gn designator to specify already assigned character set.

@d macro gp setg =
macro gp op ctrl;
PROC gp setg = (INT g)VOID:   # g=0:3 # #xpecs OK#
print(CASE g+1
      IN
          CTRL"O",      #G0#
          CTRL"N",      #G1#
          (esc,"n"),    #G2#
          (esc,"o")     #G3#
      OUT
          CTRL"O"
      ESAC) #gp setg#

@ The next set of routines provide access to the DEC private mode set.
The routine !gp set dec! starts a particular function, !gp unset dec!
restores the normal functionality, !gp sav dec! saves particular
values and !gp res dec! restores saved values.

@d macro gp set dec =
macro gp ints;
PROC gp set dec = ([]INT pm)VOID:
   print((gp csi,"?",gp ints(pm),"h"))

@d macro gp unset dec =
macro gp ints;
PROC gp unset dec = ([]INT pm)VOID:
   print((gp csi,"?",gp ints(pm),"l"))

@d macro gp sav dec =
macro gp ints;
PROC gp sav dec = ([]INT pm)VOID:
   print((gp csi,"?",gp ints(pm),"s"))

@d macro gp res dec =
macro gp ints;
PROC gp res dec = ([]INT pm)VOID:
   print((gp csi,"?",gp ints(pm),"r"))

@ The next set of routines change attributes of the \texttt{xterm}
window. The routine !gp set prop! requires a property string of the
form $[$\textit{prop}=\textit{value}$]$ or $[$\textit{prop}$]$ to delete the
property.

@d macro gp set label =
macro gp set text;
PROC gp set label = ([]CHAR t)VOID: gp set text(1,t)

@d macro gp set title =
macro gp set text;
PROC gp set title = ([]CHAR t)VOID: gp set text(2,t)

@d macro gp set prop =
macro gp set text;
PROC gp set prop  = ([]CHAR t)VOID: gp set text(4,t)

@ The next set of routines are wrapper procs for various facilities.

@d macro gp deiconify =
macro gp p csi;
PROC gp deiconify   = VOID:          gp p csi(1)
@d macro gp iconify =
macro gp p csi;
PROC gp iconify     = VOID:          gp p csi(2)
@d macro gp move xperm =
macro gp p csi;
PROC gp move xperm  = (INT x,y)VOID: gp p csi((3,x,y))
@d macro gp pix resize =
macro gp p csi;
PROC gp pix resize  = (INT h,w)VOID: gp p csi((4,h,w))
@d macro gp raise =
macro gp p csi;
PROC gp raise       = VOID:          gp p csi(5)
@d macro gp lower =
macro gp p csi;
PROC gp lower       = VOID:          gp p csi(6)
@d macro gp refresh =
macro gp p csi;
PROC gp refresh     = VOID:          gp p csi(7)
@d macro gp char resize =
macro gp p csi;
PROC gp char resize = (INT h,w)VOID: gp p csi((8,h,w))

@ The next group of routines report information from the
\texttt{xterm}.

The routine !gp report state! yields !FALSE! if the \texttt{xterm}
has been iconified.

@d macro gp report state =
macro gp p csi;
macro gp get reply;
PROC gp report state = BOOL:
(
   gp p csi(11);
   gp get reply("t")[3]="1"
) #gp report state#

@ This routine reports the position of the \texttt{xterm} window.

@d macro gp report pos =
macro gp p csi;
macro gp get reply;
PROC gp report pos = []INT:         # 1: x, 2: y #
(
   gp p csi(13);
   FILE mf;
   open(mf,MAKERVC gp get reply("t"),mem channel);
   make term(mf,";");
   [2]INT pos;
   get(mf,(LOC STRING,LOC CHAR,pos[1],LOC CHAR,pos[2]));
   close(mf);
   pos
) #gp report pos#

@ This routine reports the current size of the \texttt{xterm} window
in pixels or characrters, depending on the parameter: !"pix"! or
!"char"!.

@d macro gp report size =
macro gp p csi;
macro gp get reply;
PROC gp report size = (STRING s)[]INT:   # s=pix|char 1: height, 2: width #
(
   gp p csi((s="pix"|14|:s="char"|18|18));
	FILE mf;
   open(mf,MAKERVC gp get reply("t"),mem channel);
   make term(mf,";");
   [2]INT size;
   get(mf,(LOC STRING,LOC CHAR,size[1],LOC CHAR,size[2]));
   close(mf);
   size
) #gp report size#

@ This procedure reports the label used for the icon when the window
is iconified.

@d macro gp get icon label =
macro gp p csi;
macro gp get reply;
PROC gp get icon label = STRING:
(
   gp p csi(20);
   STRING label=gp get reply(esc+"\");
   label[4:UPB label-2]
) #gp get icon label#

@ And this routine reports the title of the \texttt{xterm} window.

@d macro gp get title =
macro gp p csi;
macro gp get reply;
PROC gp get title = STRING:
(
   gp p csi(21);
   STRING title:=gp get reply(esc+"\");
   title[4:UPB title-2]
) #gp get title#

@ End of gprelude.w
