@2Introduction.
This module provides the basic modes and values for the processing of
Unicode. It is derived from code provided on the CD-ROM distributed
with the book \textit{The Unicode Standard Version 3.0}. In
particular, the author would like to thank Mark E. Davis for writing
the original C code.

The following copyright notice must be displayed in this module.

Copyright \copyright\ 1994--1999 IBM Corp.{}. All rights reserved.

IBM Corp. grants the user a nonexclusive right and license to use,
execute, display, modify, and prepare and/or have prepared derivative
works of the code, including but not limited to creating software
products which incorporate the code or derivative works thereof.

IBM Corp. grants the user a right and license to reproduce and
distribute the code as long as this entire copyright notice is
reproduced in the code or reproduction.

The code is provided \textbf{as-is}, and IBM Corp. disclaims all
warranties, either express or implied, including, but not limited to
implied warranties of merchantability and fitness for a particular
purpose.  In no event will IBM Corp. be liable for any damages
whatsoever (including, without limitation, damages for loss of business
profits, business interruption, loss of business information, or other
pecuniary loss) arising out of the use or inability to use this code,
even if IBM Corp. has been advised of the possibility of such damages.
Because some states do not allow the exclusion or limitation of
liability for consequential or incidental damages, the above limitation
may not apply to you.

@m cvs unicode = "$Id: unicode.w,v 1.3 2003/12/26 16:42:54 sian Exp $"

@ The prelude was originally written as a self-contained module to be
compiled separately. However, the advent of a new Algol 68
interpreter meant that it would be more useful if it were combined
with the \.{charbag.w} and \.{uregex.w} modules as an includable
prelude.

The following presumptions are made about the top-level program:-
\begin{itemize}
\item Modes are declared in a module whose tag starts with ``URegex mode''.
\item !NIL!s are declared in a module whose tag starts with ``URegex !NIL!''.
\item Names are declared in a module whose tag starts with ``URegex name''.
\item Plain values are declared in a module whose tag starts with ``URegex plain''.
\item Other values are declared in a module whose tag starts with ``URegex other''.
\item Operators are declared in a module whose tag starts with ``URegex oper''.
\item Procedures are declared in a module whose tag starts with ``URegex proc''.
\end{itemize}

@2Modes and plain values.
Although the ISO/IEC 10646 standard defines a 31-bit character set,
all the characters which have been published already can be expressed
in 16 bits and another million characters can be expressed using
surrogate characters. However, !UCS! characters do need to be
compared so they are declared as a synonym for !INT!.
For the time being, !UCS! is only used for intermediate values.

Define !UTF! as a synonym for !CHAR!.

@<URegex mode...@>=
MODE
   UCS = INT,
   UTF = CHAR;

@ The value !replacement! is used for an invalid character sequence.

@<URegex plain...@>=
UCS replacement = ABS 16r0000fffd, max ucs = max int;

@ These values are used in the routines converting to or from !UTF!
characters.

@<URegex plain...@>=
BITS byte mask = 16rbf, byte mark = 16r80;

@2Operators.
Here are the operators for ![]UCS!. A full set of operators, including
!>=! and !<=!, are given. Use macros to specify the operators where
they differ only in the operator and the mode of the operands.  The
ordering operators need to compare elements until the first unequal
pair is found.

@<URegex oper...@>=
PRIO MCOMP = 6;
OP MCOMP = ([]UCS a,b)INT:
BEGIN
   []UCS aa=a[:],bb=b[:];
   INT size=UPB aa MAX UPB bb;
   INT diff:=0;

   FOR k TO size WHILE diff = 0
   DO
      UCS aak = (UPB aa>0 & k<=UPB aa|aa[k]|0),
          bbk = (UPB bb>0 & k<=UPB bb|bb[k]|0);
      diff+:=aak - bbk
   OD;

   diff
END;

OP = = ([]UCS a,b)BOOL: a MCOMP b = 0;
OP /= = ([]UCS a,b)BOOL: a MCOMP b /= 0;
OP < = ([]UCS a,b)BOOL: a MCOMP b < 0;
OP <= = ([]UCS a,b)BOOL: a MCOMP b <= 0;
OP > = ([]UCS a,b)BOOL: a MCOMP b > 0;
OP >= = ([]UCS a,b)BOOL: a MCOMP b >= 0;

@ Now define !+! where both operands have the mode ![]UCS!.

@<URegex oper...@>=
OP + = ([]UCS a,b)[]UCS:
(
   [UPB a[:]+UPB b[:]]UCS lm;
   lm[:UPB a[:]]:=a[:];
   lm[1+UPB a[:]:]:=b[:];
   lm
);

@ Mixtures of !UCS! and ![]UCS! can be defined using a cast.

@<URegex oper...@>=
OP + = (UCS a,[]UCS m)[]UCS: []UCS(a) + m;
OP + = ([]UCS m,UCS a)[]UCS: m + []UCS(a);

@2Conversion routines.
Presume that the lower bound of !source! will always be greater
than zero. This ensures that, should an error be found in the input
character sequence, a negative index can be placed in !s! to indicate
it with its absolute value being the index of the offending
character. If the source character sequence ends with an incomplete
character, the absolute value of !s! will be one greater than the
upper bound of !source!.

Conversion to or from !UTF! characters involves production or
elucidation of a possible start byte which contains as many 1-bits as
the number of bytes in the sequence, followed by a 0-bit. The
following multiple will be indexed by the number of bytes in the
sequence.

@<URegex other...@>=
[]BITS first byte mark =
   (2r 0000 0000,
    2r 1100 0000,
    2r 1110 0000,
    2r 1111 0000,
    2r 1111 1000,
    2r 1111 1100);

@ This table is used to convert a !UCS! character produced by
cumulative shifting and adding of a !UTF! byte sequence.

@<URegex other...@>=
[]BITS offsets from utf =
   (16r 0000 3080,
    16r 000e 2080,
    16r 03c8 2080,
    16r fa08 2080,
    16r 8208 2080);

@ The first byte of a !UTF! byte sequence must either be less than
!16r80! or at least !16rc0!. It should start with no more than 6
bits set to one followed by a zero bit. The first two bits of all
continuation bytes should be $10_2$.

@<URegex proc...@>=
PROC ucs to utf = ([]UCS source,REF INT s)[]UTF:
IF [6*(UPB source-s+1)]UTF target;
   INT t:=LWB target-1, bytes;
   UCS uch;
   s>=LWB source
THEN
   s-:=1;

   WHILE s < UPB source
   DO
      uch:=source[s+:=1];
      @<Determine the length of the !UTF! character sequence@>;
      @<Convert the !UCS! character to !UTF!@>
   OD;

   target[:t]
ELSE s:=-LWB source; ()
FI; #ucs to utf#

@ Determining the number of !UTF! bytes to write dependes on the
upper limits of the !UCS! ranges from which !UTF! byte sequences
are produced. An indexed table could be used, but simple comparisons
are more efficient.

@<Determine the length...@>=
bytes:=@{IF uch < ABS 16r 0000 0080 THEN 1
       ELIF uch < ABS 16r 0000 0800 THEN 2
       ELIF uch < ABS 16r 0001 0000 THEN 3
       ELIF uch < ABS 16r 0020 0000 THEN 4
       ELIF uch < ABS 16r 0400 0000 THEN 5
       ELIF uch <= max ucs THEN 6
       ELSE uch:=replacement; 2
       FI@}

@ Now use a loop to produce the !UTF! bytes in reverse order. The
first byte, with the number of set bits indicating the number of
bytes, is created after the loop.

@<Convert the !UCS!...@>=
FOR i FROM bytes BY -1 TO 2
DO
   target[t+i]:=REPR ABS((BIN uch OR byte mark) & byte mask);
   uch:=ABS(BIN uch SHR 6)
OD;

target[t+1]:=
   REPR ABS(BIN uch OR BIN ABS first byte mark[bytes]);
t+:=bytes

@ This procedure converts a !UTF! byte string to !UCS! characters.

@<URegex proc...@>=
PROC utf to ucs = ([]UTF source,REF INT s)[]UCS:
IF   [UPB source-s+1]UCS target;
   INT t:=LWB target-1, bytes:=1;
   UTF utf;
   s>=LWB source
THEN
   s-:=1;

   WHILE s >= LWB source - 1 & s < UPB source
   DO
      UCS ucs;
      @<Check the validity and convert the !UTF! sequence to !UCS!@>;
      IF bytes >= 1
      THEN target[t+:=1]:=ucs
      FI
   OD;

   target[:t]
ELSE s:=-LWB source; ()
FI; #utf to ucs#

@ Do the conversion while checking the number of leading
1-bits in the first !UTF! byte.

@<Check the validity...@>=
IF 25 ELEM BIN ABS(utf:=source[s+:=1])
THEN #Could be a leading !UTF! byte#
   ucs:=ABS utf;
   INT save = s;
   UTF u2;
   bytes:=1;

   FOR i FROM 2 TO 8
   WHILE (24+i)ELEM BIN ABS utf & s >= LWB source - 1 & s < UPB source
   DO
      bytes+:=1;
      u2:=source[s+:=1];
      IF 25 ELEM BIN ABS u2 & NOT(26 ELEM BIN ABS u2)
      THEN ucs:=ABS(BIN ucs SHL 6)+ABS u2
      ELSE #Signal an error# s:=-s
      FI
   OD;

   IF bytes > 6 OR bytes < 2
   THEN s:=-save;  #invalid leader#  bytes:=0
   ELIF s = UPB source & (25+bytes) ELEM BIN ABS utf
   THEN s:=-(1+UPB source); #!source! exhausted# bytes:=0
   ELSE ucs-:=ABS offsets from utf[bytes-1]
   FI
ELSE ucs:=ABS utf
FI

@2System dependencies.
None.
