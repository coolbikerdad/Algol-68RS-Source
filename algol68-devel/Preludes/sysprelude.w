@2Introduction.
This module is copyright (C) BP21308 Phoenix Engineering It
may be freely distributed on the terms of the GNU Public
Licence.
\def\Algol{\textbf{Algol 68}}
\def\Web{\textbf{Web68}{}}

The module is intended to be included into a \Web file
using the Web68 include command. Its routines provide the
following:-
\begin{enumerate}
\item Monitor routines.
\item Ownership declarations.
\item Directory creation.
\item Symbolic links.
\item Scanning a directory.
\item Process control.
\item User and group identifiers.
\item Time routines.
\item File statting routines.
\item Signals.
\item Polling.
\end{enumerate}

   $Log: sysprelude.w,v $
   Revision 1.12  2005/12/04 11:21:47  sian
   Various changes

   Revision 1.11  2005/05/04 14:26:28  sian
   Mainly formatting changes

   Revision 1.10  2004/12/27 10:41:59  sian
   Changed SHORT SHORT INT to SHORT SHORT BITS in DIRENT

   Revision 1.9  2004/12/06 17:48:00  sian
   Included gprelude.w and altered macro op upto

   Revision 1.8  2004/02/14 18:07:38  sian
   Changed 'macro tc' to 'macro op tc'

   Revision 1.7  2003/12/20 11:49:27  sian
   Major reorganisation plus monitor routines

   Revision 1.6  2003/06/26 13:12:54  sian
   get param now accepts uppercase letters and tilde as the first char.
   sysprelude duplicate macros removed
   xterm.a68 renamed to gprelude.a68

   Revision 1.5  2003/05/10 11:00:45  sian
   New preludes and old ones updated to reflect changes in Web 68.

   Revision 1.4  2003/01/05 16:30:40  sian
   Modifications for the new method of printing sections in tang.

   Revision 1.3  2002/11/03 16:53:08  sian
   Replaced stand-alone Web 68 files with Web 68 include files and
	wrote a test program for uregex

   Revision 1.2  2002/09/14 15:57:07  sian
   @@m macros to @@d macros (one-off)

   Revision 1.1  2002/08/19 14:50:57  sian
   System prelude (process control, directories, string handling):
	Web 68 inclusion file

@m cvs sysprelude = "$Id: sysprelude.w,v 1.12 2005/12/04 11:21:47 sian Exp $"

@isyserr.w@>
@igprelude.w@>

@2Monitor routines.
The first routine outputs the parameters to the !monitor
file! file.  The file !monitor file! is declared globally.

@d macro monitor file = FILE monitor file

@d macro monitor =
macro monitor file;
PROC monitor=([]UNION(SIMPLOUT,PROC(REF FILE)VOID) s)BOOL:
IF open(monitor file,idf(monitor file),stand back channel)/=0
THEN FALSE
ELSE
   set(monitor file,0,0,logical end(monitor file));
   put(monitor file,s);
   close(monitor file);
   TRUE
FI

@ Before using !monitor!, the file should be established.
The user supplies the file identification.

@d macro start monitor =
macro monitor file;
macro monitor;
PROC start monitor = (STRING fn)BOOL:
IF establish(monitor file,fn,stand back channel,0,0,0)/=0
THEN FALSE
ELSE
   put(monitor file,("Monitor log",newline,
                     "===========",newline,newline));
   close(monitor file);
   TRUE
FI

@2Ownership routines.
This routine accesses a file using its identification and
changes its ownership to the user !owner! and group
!group! specified.

@d macro chown =
PROC chown = (STRING path, INT owner, group)INT:
BEGIN
   PROC(STR,INT,INT)INT posix chown
      = ALIEN "CHOWN"
      "#include <sys/types.h>"
      "#include <unistd.h>"
      "#define CHOWN(p,u,g) \"
      "  A_int_INT(chown(A_VC_charptr(p),\"
		"            A_INT_int(u),A_INT_int(g)))";

   posix chown(MAKERVC path,owner,group)
END

@ This routine accesses a file using an open !REF FILE! and
changes its ownership to the user !owner! and group !group!
specified.

@d macro fchown =
PROC fchown = (REF FILE f, INT owner, group)INT:
BEGIN
   PROC(INT,INT,INT)INT posix fchown
      = ALIEN "FCHOWN"
      "#define FCHOWN(fd,u,g) A_int_INT(fchown(fd,u,g))";

   posix fchown(sysfile OF f,owner,group)
END

@2Directory creation.
This routine creates a new directory. The !path! should be
zero-terminated (use the !Z! operator). The permissions of
the created directory are !mode & NOT umask!. See the man
page for \.{mkdir(2)}.

@d macro mkdir =
PROC mkdir = (STRING s,BITS mode)INT:
BEGIN
   PROC(VECTOR[]CHAR,INT)INT posix mkdir
      = ALIEN "MKDIR"
      "#include <sys/stat.h>"
      "#include <sys/types.h>"
      "#define MKDIR(path,mode) A_int_INT(mkdir(A_VC_charptr(path),A_INT_int(mode)))";
   posix mkdir(Z MAKERVC s,ABS mode)
END

@ The next routine deletes a directory.

@d macro rmdir =
PROC rmdir = (STRING s)INT:
BEGIN
   PROC(VECTOR[]CHAR)INT posix rmdir
      = ALIEN "RMDIR"
      "#define RMDIR(path) A_int_INT(rmdir(A_VC_charptr(path)))";
   posix rmdir(Z MAKERVC s)
END

@ This routine changes the current working directory to the
specified string.

@d macro chdir =
PROC chdir = (STRING s)INT:
BEGIN
   PROC(VECTOR[]CHAR)INT posix chdir
      = ALIEN "CHDIR"
      "#define CHDIR(path) \"
		"   A_int_INT(chdir(A_VC_charptr(path)))";
   posix chdir(Z MAKERVC s)
END

@2Symbolic links.
The next routine dereferences a symbolic link to get the
identification of the referenced file. It yields a null
string if there is an error. It starts with the declaration
of the C~function !readlink!.

@d macro read link =
macro enametoolong;
PROC read link = (STRING link)STRING:
IF   PROC(VECTOR[]CHAR,RVC)INT bsd readlink@/
   = ALIEN "READLINK"@/
   "#include <fcntl.h>"@/
   "#define READLINK(path,buf) \"@/
   "  A_int_INT(readlink(A_VC_charptr(path),A_VC_charptr(buf),(buf).upb))";

   @<System: define a holder for an !RVC!@>
   @<System: loop until !bsd readlink! yields a positive value@>
   path len>0
THEN @<System: extract the string from the yielded value@>
ELSE ""
FI #read link#

@ The buffer !buf! (of mode !REF VECTOR[]CHAR!) must be big
enough to hold the referenced identification which is not
null-terminated. The buffer starts with !64! characters.
The !link! parameter is also converted to a !VECTOR[]CHAR!.

@<System: define a holder...@>=
REF VECTOR[]CHAR rrvc:=HEAP VECTOR[64]CHAR;

@ The !STRING! parameter must also be converted into an
!RVC! whose data component can be used by the
!A_VC_charptr! macro.

@<System: define a holder...@>=
RVC p link = MAKERVC link;

@ Finally, the actual number of characters in the yielded
path in a local name should be stored.

@<System: define a holder...@>=
INT path len;

@ @<System: loop until...@>=
WHILE
   IF (path len:=bsd readlink(p link,rrvc)) = -1
   THEN errno = e name too long
   ELSE FALSE
   FI
DO
   rrvc:=HEAP VECTOR[UPB rrvc * 2]CHAR
OD;

@ Extracting the string consists of a simple slice of a
!REF VECTOR[]CHAR! and coercing it to mode ![]CHAR!.

@<System: extract...@>=
rrvc[:path len]

@ The next routine gets the current working directory and
yields it as a !STRING!. Again, the buffer starts with
!256! bytes and is doubled until it is long enough. Note
that the !REF REF VECTOR[]CHAR! parameter of the !UPTO!
operator is coerced in the firm context to ![]CHAR!.

@d macro get cwd =
macro gp op upto;
macro erange;
PROC get cwd = STRING:
BEGIN
   PROC(VECTOR[]CHAR)CSTR posix getcwd
      = ALIEN "GETCWD"
      "#define GETCWD(buf) \"
      " (void *)getcwd(A_VC_charptr(buf),A_INT_int(buf.upb))";
@&
   RVC rvc:=HEAP VECTOR[256]CHAR;
@&
   WHILE (posix getcwd(rvc) IS NIL|errno=erange|FALSE)
   DO rvc:=HEAP VECTOR[UPB rvc * 2]CHAR OD;
   rvc UPTO nul ch
END #get cwd#

@ The operator !TC! converts a tilde in a file
identification into the user's home directory. If the given
string does not start with a tilde, it is returned
unchanged.

@d macro op tc =
OP TC = (STRING s)STRING:
IF s[LWB s]/="~"
THEN s
ELIF FILE e;  open(e,"HOME",env channel)/=0
THEN s
ELSE@/
   STRING home;
   on logical file end(e,(REF FILE f)BOOL: (GOTO eof; SKIP));
   make term(e,nul ch);
   get(e,home);
eof:
   close(e);
   home+s[1+LWB s:]
FI #TC#

@ The operator !NORM! normalises a path, replacing !..! and
!.! as appropriate.

@d macro op norm =
macro get cwd;
macro op tc;
macro gp op lop;
macro gp op ends;
macro gp op find row char row char;
macro gp replace;
OP NORM = ([]CHAR s)[]CHAR:
IF s=""
THEN getcwd
ELIF s="~" OR s="~/"
THEN TC []CHAR("~")
ELIF NOT char in string(".",LOC INT,s)
THEN TC s
ELSE
	STRING ss:=TC s[@@1];
	[]CHAR cwd=getcwd,ds="./",sd="/.";
	INT p;
	CHAR dot=".",stroke="/",flag dot=REPR 1;
	WHILE char in string(dot,p,ss)
	DO
		ss:=
			IF ss="" OR ss=dot
			THEN cwd
			ELIF ss=".."
			THEN cwd LOP stroke
			ELIF ss ENDS stroke
			THEN ss[:UPB ss-1] #remove it#
			ELIF ss=sd OR ss="/.."
			THEN stroke
			ELIF UPB ss>2
			THEN
				INT pdot=p; #save !p!#
				IF ss[:3]="../"
				THEN cwd LOP stroke+ss[3:]
				ELIF ss[:2]=ds
				THEN ss[3:]
				ELIF (p:=sd FIND ss)=UPB ss-1
				THEN ss[:p-1] #/. at the end#
				ELIF p>=1
				THEN #internal /.#
					IF ss[p+2]=stroke
			   	THEN (p>1|ss[:p-1]|"")+ss[p+2:] #/./ => /#
					ELIF ss[p+2]=dot
					THEN ss[:p-1] LOP stroke+(p+2<UPB ss|ss[p+3:]|"") #/..#
					ELSE ss[:p]+flag dot+ss[p+2:]
					FI
				ELIF (p:=ds FIND ss)=1
				THEN cwd+ss[p+1:] #./ at the start#
				ELIF p>1
				THEN #internal ./, p at.#
					IF ss[p-1]=dot
					THEN #../#
						IF p=2
						THEN cwd LOP stroke+ss[3:] #../ at start#
						ELIF ss[p-2]=stroke #p>=3, ../ internal#
						THEN (p=3|ss[4:]|ss[:p-3] LOP stroke+ss[p+1:])
						ELSE ss[:p-1]+2*flag dot+ss[p+1:]
						FI
					ELSE ss[:p-1]+flag dot+ss[p+1:]
					FI
				ELSE (pdot=1|""|ss[:pdot-1])+flag dot+ss[pdot+1:]
				FI
			ELIF p=1
			THEN flag dot+ss[2:]
			ELSE ss[1]+flag dot
			FI
	OD;
	replace(ss,flag dot,dot)
FI #NORM#

@2Scanning a directory.
Directories can be opened, closed and their contents read.
The mode !DIRENT! stores the necessary details. The
equivalent C structure !dirent! has a !256! character
vector as its last field. \Algol\ transput is used to
ensure that the last field has the appropriate size.

@d macro mode dirent =
MODE DIRENT = STRUCT(INT ino,               #inode number#
                         off,               #offset to the next dirent#
                     SHORT INT reclen,      #length of this record#
                     SHORT SHORT BITS type, #file type#
                     STRING name)           #filename#

@ The routine !scan dir! has three parameters:-
\begin{description}
\item[dir] The identification of the directory.
\item[do] The routine to be executed for each entry in the
directory.
\item[si] The values to be passed to !do!. They must all
start with !REF!.
\end{description}

@d macro scan dir =
macro mode dirent;
PROC scan dir = (STRING dir,
                 PROC(REF DIRENT,[]SIMPLIN)BOOL do,
                 []SIMPLIN si)INT:
IF @<System: declare the !ALIEN! functions required for handling the directory@>
   CPTR dir stream = posix opendir(Z MAKERVC dir);
   dir stream IS NIL
THEN errno
ELSE
   @<System: use a memory file to extract the directory entry@>
   @<System: loop to get each directory entry@>
   posix closedir(dir stream);
   0
FI #scan dir#

@ This is the local routine which actually gets a directory
entry. The value !dirent sz! has been obtained by
consulting the C~structure given in the man page for
\.{posix readdir(3)}.

A memory channel file is created and the contents of the
stream pointed to by !dirent! read into !de!.

@<System: use a memory...@>=
PROC get dirent = (CPTR d)REF DIRENT:
IF INT dirent sz = 267;
   CSTR dirent=posix readdir(d);
   dirent IS NIL
THEN NIL
ELSE
   HEAP DIRENT de;
   FILE mf;
   open(mf,dirent[:dirent sz],mem channel);
   make term(mf,nul ch);
   get bin(mf,de);
   close(mf);
   de
FI; #get dirent#

@ The principal part of !scan dir! consists of a loop whose
discriminant depends on whether the directory entry
obtained is !NIL!.

@<System: loop to get...@>=
WHILE
   REF DIRENT de = get dirent(dir stream);
   IF de IS NIL THEN FALSE ELSE do(de,si) FI
DO SKIP OD;

@ These functions are used for the outer handling of the
directory.

@<System: declare the !ALIEN!...@>=
PROC(VECTOR[]CHAR)CPTR posix opendir@/
   = ALIEN "OPENDIR"@/
   "#include <dirent.h>"@/
   "#define OPENDIR(path) A_dirptr_DIRPTR(opendir(A_VC_charptr(path)))";

PROC(CPTR)INT posix closedir@/
   = ALIEN "CLOSEDIR"@/
   "#define CLOSEDIR(dir) A_int_INT(closedir(A_DIRPTR_dirptr(dir)))";

PROC(CPTR)CSTR posix readdir = ALIEN "READDIR"
"#define READDIR(dir) (void *)readdir(A_DIRPTR_dirptr(dir))";

@2Process control.
The next routine causes the calling process to sleep for
!secs! seconds.

@d macro posix sleep =
PROC(INT)INT posix sleep
   = ALIEN "SLEEP"
   "#define SLEEP(secs) A_int_INT(sleep(A_INT_int(secs)))"

@ The next routine sets an alarm for !secs! seconds time.

@d macro posix alarm =
PROC(INT)INT posix alarm
   = ALIEN "ALARM"
   "#define ALARM(secs) A_int_INT(alarm(A_INT_int(secs)))"

@ The next routine causes the current process to suspend
execution until a signal is received. Again, because the
routine has no parameters, a !CODE! insert is used.

@d macro posix pause =
PROC posix pause
   = INT: INT CODE "RESULT=pause();"

@ The next routine causes the current process to suspend
execution until a child has exited or until a signal is
delivered whose action is to terminate the current process
or to call a signal handling function.

@d macro posix wait =
PROC(REF INT)INT posix wait = ALIEN "WAIT"
   "#include <sys/wait.h>"
   "#define WAIT(status) A_int_INT(wait((int *)status))"

@ The next routine suspends execution of the current
process until a child as specified by the !pid! parameter
has exited, or until a signal is delivered whose action is
to terminate the current process or to call a signal
handling function.  If a child as requested by !pid! has
already exited by the time of the call (a "zombie"
process), the function returns immediately. Any system
resources used by the child are freed.

The value of pid can be one of:
\begin{description}
\item[!< -1!] Wait for any child process whose process
group id. is equal to the absolute value of !pid!.
\item[!-1!] Wait for any child process; this is the same
behaviour which !posix wait! exhibits.
\item[0] Wait for any child process whose process group
id. is equal to that of the calling process.
\item[!> 0!] Wait for the child whose process id. is equal
to the value of !pid!.
\end{description}

The value of !options! is a logical !OR! of zero or more
of the following values.

@m w no hang  = 8r1  # Don't block waiting. #
@m w untraced = 8r2  # Report status of stopped children. #

@d macro posix wait pid =
PROC(INT,REF INT,INT)INT posix wait pid = ALIEN "WAITPID"
   "#define WAITPID(pid,status,options) \"
   "  A_int_INT(waitpid(pid,(int *)status,options))"

@ The status returned by !posix wait pid! can be
evaluated using the following routines.

@d macro w if exited =
PROC w if exited   = (INT status)BOOL:
   (BIN status & 16r7f) = 16r0
@d macro w exit status =
PROC w exit status = (INT status)INT:
   ABS((BIN status & 16rff00) SHR 8)
@d macro w if signalled =
PROC w if signalled= (INT status)BOOL:
   ((BIN status & 16rff) /= 16r7f)
	             &
	((BIN status & 16r7f) /= 16r0)
@d macro w term sig =
PROC w term sig    = (INT status)INT:
   ABS(BIN status & 16r7f)
@d macro w if stopped =
PROC w if stopped  = (INT status)BOOL:
   (BIN status & 16rff) = 16r7f
@d macro w stop sig =
PROC(INT)INT w stop sig = w exit status

@ The following !ALIEN! declarations ensure that the
corresponding C routines are accessible to the wrapper
!PROC!s.

@d macro posix dup =
PROC(INT)INT posix dup
   = ALIEN "DUP"
   "#include <unistd.h>"
   "#define DUP(fd) A_int_INT(dup(A_INT_int(fd)))"

@d macro posix dup2 =
PROC(INT,INT)INT posix dup2
   = ALIEN "DUP2"
   "#define DUP2(ofd,nfd) \"
	"   A_int_INT(dup2(A_INT_int(ofd),A_INT_int(nfd)))"

@ Because !fork! has no parameters, a !CODE! insert is
used.

@d macro posix fork =
PROC posix fork
   = INT: INT CODE "RESULT=fork();"

@ The !PIPE! mode is used for communication with other
programs. The !r! tag stands for \.{reader} and the !w!
tag for \.{writer}.

@d macro mode pipe =
MODE PIPE=STRUCT(REF FILE r,w,INT pid)

@ The routine !create pipe! creates a pipe which is then
suitably initialised.

@d macro create pipe =
macro mode pipe;
PROC create pipe = PIPE:
IF PROC(REF STRUCT(INT r,w))INT posix pipe = ALIEN "PIPE"
   "#define PIPE(fd) A_int_INT(pipe((int *)fd))";
   STRUCT(INT r,w) fd;
   INT res=posix pipe(fd);  res=-1
THEN (NIL,NIL,res)
ELSE
   PIPE pipe:=
      (HEAP FILE:=((MAKERVC "<read unbuffered internal>",
                    MAKERVC "",type OF book OF stand in),
                   r OF fd,
                   sys OF stand err,
                   default io OF stand in channel,
                   (TRUE,FALSE,TRUE,FALSE,TRUE,-1,0,
                    (HEAP VECTOR[4]CHAR,4,0,0,FALSE,TRUE),0)),
       HEAP FILE:=((MAKERVC "<write unbuffered internal>",
                    MAKERVC "",type OF book OF stand out),
                   w OF fd,
                   sys OF stand err,
                   default io OF stand out channel,
                   (TRUE,FALSE,TRUE,FALSE,TRUE,-1,0,
                    (HEAP VECTOR[4]CHAR,4,0,0,FALSE,TRUE),0)),
       res);

   pipe
FI #create pipe#

@ The routine !execvp! creates a child program with
identification !prog! and parameters !params!. If the
filename given in !prog! does not contain the !"/"!
character, then it will be searched for in the current
path (as given in the environment string \.{PATH}).
Otherwise it will be taken as a relative or absolute
filename.

@d macro execvp =
PROC execvp = ([]CHAR prog, [][]CHAR params)INT:
BEGIN
   PROC(VECTOR[]CHAR#path#,CCHARPTR#argv#)INT sys execvp = ALIEN "EXECVP"
   "#define EXECVP(path,argv) \"
   "   A_int_INT(execvp(A_VC_charptr(path),(char **)argv))";

   [UPB params-LWB params+1]REF VECTOR[]CHAR params z;
   @<System: insert the parameters as null-terminated strings into !params z!@>;
   @<System: insert the program identification@>;

   VECTOR[1+UPB params z]CCHARPTR ptrs;
   @<System: create a vector of pointers to the strings@>;
   @<System: map the vector of pointers to a suitable C pointer@>;
   sys execvp(prog z, data OF TOVDESC ptrs)
END #execvp#

@ @<System: insert the param...@>=
FOR i TO UPB params[@@1]
DO
   params z[i]:=
      HEAP VECTOR[1+UPB params[@@1][i]]CHAR:=
         Z MAKERVC params[@@1][i]
OD

@ @<System: insert the program...@>=
VECTOR[UPB prog-LWB prog+2]CHAR prog z:=Z MAKERVC prog

@ @<System: create a vector...@>=
FOR i TO UPB params z
DO
   ptrs[i]:=VCTOCHARPTR params z[i]
OD;
ptrs[UPB ptrs]:=CSTRTOCCHARPTR TOCSTR TOCPTR 0

@ @<System: map the vector...@>=
OP(VECTOR[]CCHARPTR)VDESC TOVDESC = BIOP 99

@ The next routine creates a piped child. Various error
situations are catered for and passed to the calling
program as the value of the !res! field of the yielded
!PIPE!.

@d macro exec piped program =
macro create pipe;
macro execvp;
macro posix fork;
PROC exec piped program = ([]CHAR prog,[][]CHAR args)PIPE:
IF PIPE child in pipe,
       child out pipe;
   INT res;
   IF pid OF (child in pipe:=create pipe) = -1
                        OR
      pid OF (child out pipe:=create pipe) = -1
   THEN res:=-2;  TRUE
   ELIF (res:=posix fork) = -1
   THEN TRUE
   ELSE FALSE
   FI
THEN (NIL,NIL,res) # fork/create pipe failed#
ELIF res=0
THEN @<System: child process@>
ELSE @<System: parent process@>
FI #exec piped program#

@ The child process needs to make its !stand in! the same
as the reader of the !child in pipe! and its !stand out!
the writer of the !child out pipe! and close the other
descriptors.

@<System: child...@>=
close(stand in);
posix dup(sys file OF r OF child in pipe); #uses the freed !stand in!#
@&
close(r OF child in pipe);
close(w OF child in pipe);
@&
close(stand out);
posix dup(sys file OF w OF child out pipe);
@&
close(r OF child out pipe);
close(w OF child out pipe);
@<System: call the program@>

@ If the call returns, it must have failed, so yield a
null pipe.

@<System: call the...@>=
execvp(prog,args);
(NIL,NIL,res)

@ The parent process closes the unwanted descriptors and
then yields a !PIPE! consisting of the reader of
!child out pipe! and the writer of !child in pipe!
and the !pid! of the child process.

@<System: parent...@>=
close(r OF child in pipe);
close(w OF child out pipe);
(r OF child out pipe,w OF child in pipe,res)

@ The next routine forks the current process and calls a
program to replace the child process. It yields the !pid!
of the child process.

@d macro fork exec =
macro execvp;
macro posix fork;
PROC fork exec = ([]CHAR prog,[][]CHAR args)INT:
IF INT child pid = posix fork;  child pid = -1
THEN -1
ELIF child pid = 0
THEN execvp(prog,args); 0
ELSE child pid
FI #fork exec#

@ And now, a routine to execute an arbitrary command. The
!command! is executed with a login shell so that any
abbreviations can be appropriately expanded.

@d macro system =
macro posix fork;
macro execvp;
macro posix wait pid;
PROC system = ([]CHAR command)INT:
IF command = ""
THEN 1
ELIF INT pid = posix fork;  pid = -1
THEN -1
ELIF pid = 0
THEN #child process#
   execvp("/bin/bash",("bash","--login","-c",command));
   #If !execvp! returns, there has been an error#
   exit(255);
   SKIP
ELSE #parent process#
   INT ret:=0,status;
   WHILE
      IF posix wait pid(pid,status,0) = -1
      THEN
         macro eintr;
         IF errno /= eintr
         THEN ret:=-1; GOTO end
         FI
      ELSE ret:=status; GOTO end
      FI;
      ret = 0
   DO SKIP OD;
end:
   ret
FI #system#

@2User and group identifiers.
These routines give access to a pid, ppid, uid and gid
using the !/etc/passwd! and !/etc/group! files. These
modes group the necessary data.

@d macro mode group =
MODE GROUP =
   STRUCT(STRING gr name,   # group id #
                 gr passwd, # group password #
          INT    gr gid,    # group id #
          STRING gr mem)    # group members "," delimited #

@d macro mode passwd =
MODE PASSWD =
   STRUCT(STRING pw name,            # user name #
                 pw passwd,          # user password #
          INT    pw uid,             # user id #
                 pw gid,             # group id #
          STRING pw gecos,           # real name #
                 pw dir,             # home directory #
                 pw shell)           # shell program #

@ These routines set the user id or the group id.

@d macro posix set uid =
PROC(INT)INT posix set uid
   = ALIEN "SETUID" # 0: Ok, -1: err #
   "#include <unistd.h>"
   "#define SETUID(u) A_int_INT(setuid(A_INT_int(u)))"

@d macro posix set gid =
PROC(INT)INT posix set gid
   = ALIEN "SETGID" # 0: Ok, -1: err #
   "#include <sys/types.h>"
   "#define SETGID(g) A_int_INT(setgid(A_INT_int(g)))"

@ These routines get the (effective) user id and the
(effective) group id as well as the parent pid or the pid.

@d macro posix get uid =
PROC posix get uid  = INT: INT CODE "RESULT=getuid();"
@d macro posix get euid=
PROC posix get euid = INT: INT CODE "RESULT=geteuid();"
@d macro posix get gid =
PROC posix get gid  = INT: INT CODE "RESULT=getgid();"
@d macro posix get egid=
PROC posix get egid = INT: INT CODE "RESULT=getegid();"
@d macro posix get ppid=
PROC posix get ppid = INT: INT CODE "RESULT=getppid();"
@d macro posix get pid =
PROC posix get pid =  INT: INT CODE "RESULT=getpid();"

@ The next routine is used internally by other routines.

@d macro sys process pw line =
macro mode passwd;
PROC sys process pw line = (STRING line)REF PASSWD:
IF FILE mf;
   open(mf,MAKERVC(line+":"),mem channel)/=0
THEN NIL
ELSE
   HEAP PASSWD p;
   on logical file end(mf,
	                    (REF FILE f)BOOL:
							  (
							   close(f); GOTO eof; SKIP
							  ));
   make term(mf,":");
   get(mf,(pw name OF p, LOC CHAR,
           pw passwd OF p, LOC CHAR,
           pw uid OF p, LOC CHAR,
           pw gid OF p, LOC CHAR,
           pw gecos OF p, LOC CHAR,
           pw dir OF p, LOC CHAR,
           pw shell OF p));
   close(mf);
   p EXIT
eof:
   NIL
FI # sys process pw line #

@ The next two routines get the password structure from
the user name or the user id.

@d macro sys get pw nam =
macro sys process pw line;
PROC sys get pw nam = (STRING name)REF PASSWD:
IF FILE pwf;
   open(pwf,"/etc/passwd",stand in channel)/=0
THEN NIL
ELSE
   on logical file end(pwf,
	                    (REF FILE f)BOOL:
							  (
							   close(f); GOTO eof; SKIP
							  ));
   STRING line;
   WHILE
	   get(pwf,(line,newline));
	   line UPTO ":"/=name
	DO SKIP OD;
   close(pwf);
   sys process pw line(line)  EXIT
eof:
   NIL
FI # sys get pw nam #

@d macro sys get pw uid =
macro sys process pw line;
PROC sys get pw uid = (INT uid)REF PASSWD:
IF FILE pwf;
   open(pwf,"/etc/passwd",stand in channel)/=0
THEN NIL
ELSE
   on logical file end(pwf,
	                    (REF FILE f)BOOL:
							  (
							   close(f); GOTO eof; SKIP
							  ));
   STRING line;  REF PASSWD pw;
   WHILE
      get(pwf,(line,newline));
      IF REF PASSWD(pw:=sys process pw line(line)) IS NIL
      THEN FALSE
      ELSE pw uid OF pw /= uid
      FI
   DO SKIP OD;
   close(pwf);
   pw EXIT
eof:
   NIL
FI # sys get pw uid #

@ The next routine is used by dependent routines.

@d macro sys process gr line =
macro mode group;
PROC sys process gr line = (STRING line)REF GROUP:
IF FILE gf;
   open(gf,MAKERVC(line+":"),mem channel)/=0
THEN NIL
ELSE
   HEAP GROUP group;
   on logical file end(gf,
	                    (REF FILE f)BOOL:
							  (
							   close(gf); GOTO eof; SKIP
							  ));
   make term(gf,":");
     get(gf,(gr name OF group,LOC CHAR,
             gr passwd OF group,LOC CHAR,
             gr gid OF group,LOC CHAR,
             gr mem OF group));
   close(gf);
   group EXIT
eof:
   NIL
FI #sys process gr line#

@ Here are two routines to get the group structure from
the group name or the group id.

@d macro sys get gr nam =
macro sys process gr line;
PROC sys get gr nam = (STRING name)REF GROUP:
IF FILE grpf;
   open(grpf,"/etc/group",stand in channel)/=0
THEN NIL
ELSE
   STRING line;  REF GROUP group;
   on logical file end(grpf,
	                    (REF FILE f)BOOL:
							  (
							   close(f); GOTO eof; SKIP
							  ));
     WHILE
      get(grpf,(line,newline));
      group:=sys process gr line(line);
      IF REF GROUP(group) IS NIL
      THEN FALSE
      ELSE gr name OF group/=name
      FI
  DO SKIP OD;
  close(grpf);
  group EXIT
eof:
   NIL
FI # sys get gr nam #

@d macro sys get gr gid =
macro sys process gr line;
PROC sys get gr gid = (INT gid)REF GROUP:
IF FILE grpf;
   open(grpf,"/etc/group",stand in channel)/=0
THEN NIL
ELSE
   STRING line;  HEAP GROUP group;
   on logical file end(grpf,
	                    (REF FILE f)BOOL:
							  (
							   close(f); GOTO eof; SKIP
							  ));
   WHILE
      get(grpf,(line,newline));
      group:=sys process gr line(line);
      IF REF GROUP(group) IS NIL
      THEN FALSE
      ELSE gr gid OF group /= gid
      FI
  DO SKIP OD;
  close(grpf);
  group EXIT
eof:
   NIL
FI # sys get grp gid #

@2Time routines.
The current or a specified time is best expressed by the
mode !TIME!. Its size is given by the macro !tm sz!.

@d macro mode time =
MODE TIME = STRUCT(INT secs, mins,  hours,
                       day,  month, year,
                       wday, yday,  isdst, gmt off,
                   INT#CPTR#zone);

@m tm sz = 44

@ These routines manipulate the system or a specified
time.

@d macro op tocptr = OP(CSTR)CPTR TOCPTR = BIOP 99

@d macro op utc int =
macro mode time;
OP UTC = (INT t)TIME:
BEGIN
   PROC(REF INT)CSTR linux gmtime
      = ALIEN "GMTIME"
      "#include <time.h>"
      "#define GMTIME(time) \"
		"   (void *)gmtime(A_RI_time_tptr(time))";

  CSTR tm=linux gmtime(LOC INT:=t);
  TIME ht;
  FILE mf;  open(mf,tm[:tm sz],mem channel);
  get bin(mf,ht);
  close(mf);
  year OF ht+:=1900;  month OF ht+:=1;
  ht
END #UTC#

@d macro op utc time =
macro mode time;
OP UTC = (TIME t)INT:
BEGIN
   PROC(CSTR)INT linux mktime
      = ALIEN "MKTIME"
      "#define MKTIME(time) A_time_t_INT(mktime((struct tm*)time))";

   TIME tt:=t;
   month OF tt-:=1;  year OF tt-:=1900;
   FILE mf;  establish(mf,"",mem channel,1,1,tm sz);
   put bin(mf,tt);
   INT lt=linux mktime(STRTOCSTR file buffer(mf));
   close(mf);
   lt
END #UTC#

@d macro sys get time =
macro mode time;
macro op utc int;
PROC sys get time = TIME:  UTC posix time(NIL)

@d macro ctime =
PROC ctime = (REF INT t)[]CHAR:
BEGIN
   PROC(REF INT)CSTR linux ctime
        = ALIEN "CTIME"
        "#define CTIME(time) \"
		  "   (void *)ctime(A_RI_time_tptr(time))";

   CSTRTORVC linux ctime(t)
END

@2Getting the status of files.
The following routines use the !STAT! mode to store
details about a file.

@d macro mode stat =
MODE STAT = STRUCT(LONG INT  st dev, #device#
                   SHORT INT pad1,
                   INT        st ino,     #inode#
                   BITS       st mode,    #protection#
                   INT        st nlink,   #no. of hard links#
                              st uid,     #user ID of owner#
                              st gid,     #group ID of owner#
                   LONG INT  st rdev,     #device type (if inode device)#
                   SHORT INT pad2,
                   INT        st size,    #total size, in bytes#
                              st blksize, #blocksize for filesystem transput#
                              st blocks,  #no. of blocks allocated#
                              st atime,   #time of last access (kernel uses 64-bits)#
                   INT       unused1,
                   INT        st mtime,   #time of last modification (kernel uses 64-bits)#
                   INT       unused2,
                   INT        st ctime,   #time of last change (kernel uses 64-bits)#
                   INT       unused3, unused4, unused5)

@ Here is the relevant !NIL!.

@d macro no stat =
macro mode stat;
REF STAT no stat = NIL

@ The following declarations provide the standard
identifiers.

@m s ifmt   = 16rf000 #bitmask for the file type bit fields#

@m s ifsock = 16rc000 #socket#
@m s iflnk  = 16ra000 #symbolic link#
@m s ifnor  = 16r8000 #normal file#
@m s ifblk  = 16r6000 #block device#
@m s ifdir  = 16r4000 #directory#
@m s ifchr  = 16r2000 #character device#
@m s ififo  = 16r1000 #fifo#

@m s isuid = 21 #set UID bit#
@m s isgid = 22 #set GID bit#
@m s isvtx = 23 #sticky bit#

@m s irusr = 24 #user has read permission#
@m s iwusr = 25 #user has write permission#
@m s ixusr = 26 #user has execute permission#

@m s irgrp = 27 #group has read permission#
@m s iwgrp = 28 #group has write permission#
@m s ixgrp = 29 #group has execute permission#

@m s iroth = 30 #others have read permission#
@m s iwoth = 31 #others have write permisson#
@m s ixoth = 32 #others have execute permission#

@ These routines all use the mode !STAT! in their call.
They can be used with !stat!, !lstat! or !fstat!.

@d macro islnk =
macro mode stat;
PROC islnk  = (REF STAT st)BOOL: (st mode OF st & s ifmt) = s iflnk

@d macro isnor =
macro mode stat;
PROC isnor  =
   (REF STAT st)BOOL: (st mode OF st & s ifmt) = s ifnor

@d macro isdir =
macro mode stat;
PROC isdir  =
   (REF STAT st)BOOL: (st mode OF st & s ifmt) = s ifdir

@d macro ischr =
macro mode stat;
PROC ischr  =
   (REF STAT st)BOOL: (st mode OF st & s ifmt) = s ifchr

@d macro isblk =
macro mode stat;
PROC isblk  =
   (REF STAT st)BOOL: (st mode OF st & s ifmt) = s ifblk

@d macro isfifo=
macro mode stat;
PROC isfifo =
   (REF STAT st)BOOL: (st mode OF st & s ifmt) = s ififo

@d macro issock=
macro mode stat;
PROC issock =
   (REF STAT st)BOOL: (st mode OF st & s ifmt) = s ifsock

@ Here is !stat!.

@d macro stat =
macro mode stat;
PROC stat = (STRING fn)REF STAT:
IF HEAP STAT st;
   PROC(VECTOR[]CHAR#fn#,REF STAT)INT linux stat
      = ALIEN "STAT"
      "#include <sys/stat.h>"
      "#define STAT(fn,buff) \"
		"   A_int_INT(stat(A_VC_charptr(fn),(void *)buff))";

   linux stat(Z MAKERVC fn,st) /= 0
THEN NIL
ELSE st
FI # stat #

@ Here is !lstat!.

@d macro lstat =
macro mode stat;
PROC lstat = (STRING fn)REF STAT:
IF HEAP STAT st;
   PROC(VECTOR[]CHAR#fn#,REF STAT)INT linux lstat
      = ALIEN "LSTAT"
      "#define LSTAT(fn,buff) \"
		"   A_int_INT(lstat(A_VC_charptr(fn),(void *)buff))";

   linux lstat(Z MAKERVC fn,st) /= 0
THEN NIL
ELSE st
FI # lstat #

@ And, lastly, !fstat!.

@d macro fstat =
macro mode stat;
PROC fstat = (FILE f)REF STAT:
IF HEAP STAT st;
   PROC(INT#fd#,REF STAT)INT linux fstat
      = ALIEN "FSTAT"
      "#define FSTAT(fd,buff) \"
		"   A_int_INT(fstat(fd,(void *)buff))";

   linux fstat(sys file OF f,st) /= 0
THEN NIL
ELSE st
FI # fstat #

@ This operator expresses a file type as a single
character.

@d macro op ftypelet =
OP FTYPELET = (BITS mode)CHAR:
IF   (mode & s ifmt) = s ifblk THEN "b"
ELIF (mode & s ifmt) = s ifchr THEN "c"
ELIF (mode & s ifmt) = s ifdir THEN "d"
ELIF (mode & s ifmt) = s ifnor THEN "-"
ELIF (mode & s ifmt) = s ififo THEN "p"
ELIF (mode & s ifmt) = s ifsockTHEN "s"
ELIF (mode & s ifmt) = s iflnk THEN "l"
ELSE "?"
FI #FTYPELET#

@ This routine expresses the mode of a file as a mode
string.

@d macro mode string =
macro op ftypelet;
PROC mode string = (BITS mode)[]CHAR:
   (FTYPELET mode,
    (s irusr ELEM mode|"r"|"-"),
    (s iwusr ELEM mode|"w"|"-"),
    (s ixusr ELEM mode|"x"|"-"),
    (s irgrp ELEM mode|"r"|"-"),
    (s iwgrp ELEM mode|"w"|"-"),
    (s ixgrp ELEM mode|"x"|"-"),
    (s iroth ELEM mode|"r"|"-"),
    (s iwoth ELEM mode|"w"|"-"),
    (s ixoth ELEM mode|"x"|"-"))

@2Signals.
The routine !posix terminate! sends signal !sig! to the
process whose process identifier is !pid!. If !pid! is
zero, send !sig! to all the processes in the current
process's process group. If !pid! is !-1!,
send !sig! to all processes in the process group !-pid!.

@d macro posix terminate =
PROC(INT,INT)INT posix terminate
   = ALIEN "TERMINATE"
   "#include <sys/types.h>"
   "#include <signal.h>"
   "#define TERMINATE(pid,sig) kill(pid,sig)"

@ Send signal !sig! to all processes in process group
!pgrp!. If !pgrp! is zero, send !sig! to all processes
in the current process's process group.

@d macro bsd terminate pg =
PROC(INT,INT)INT bsd terminate pg
   = ALIEN "TERMINATEPG"
   "#define TERMINATEPG(pgrp,sig) \"
   "  A_int_INT(killpg(A_INT_int(pgrp),A_INT_int(sig)))"

@ These definitions provide access to the C library
functions which use the !sigaction_t! structure. Firstly,
here are the relevant modes.

@d macro mode sigset =
MODE SIGSET    = STRUCT(STRUCT 32 BITS sig)

@d macro mode sigaction =
MODE SIGACTION =
   STRUCT(CPTR sa_sigaction,#PROC(INT,REF SIGINFO,CPTR)VOID#
          STRUCT 32 BITS sa_mask,
          BITS sa_flags)

@d macro mode siginfo =
MODE SIGINFO   = STRUCT(INT
                       si_signo, #Signal number#
                       si_errno, #Errno value#
                       si_code,  #Signal code#
                       si_band,  #Band event#
                       si_fd)    #File descriptor#

@ The next two routines provide mapping facilities for
the signal routines.

@d macro op topdesc proc int ref siginfo cptr =
macro mode siginfo;
OP(PROC(INT,REF SIGINFO,CPTR)VOID)PDESC TOPDESC = BIOP 99

@d macro op tocptr proc int ref siginfo cptr =
macro mode siginfo;
OP TOCPTR = (PROC(INT,REF SIGINFO,CPTR)VOID p)CPTR:
   cp OF TOPDESC p

@ Here's the !sigaction! routine itself. Note that
!signum! can be neither !sigkill! nor !sigstop!.

@d macro posix sigaction =
macro mode sigaction;
PROC(INT,REF SIGACTION,REF SIGACTION)INT posix sigaction
   = ALIEN "SIGACTION"
   "#include <signal.h>"
   "#define SIGACTION(signum,act,oact) \"
	"        sigaction(signum,act,oact)"

@ !no sigaction! is defined here.

@d macro no sigaction = REF SIGACTION no sigaction = NIL

@ Here are some fake signal functions for
!sa_sigaction OF SIGACTION!.

@m sig err = TOCPTR -1  # Error return.   #
@m sig dfl = TOCPTR  0  # Default action. #
@m sig ign = TOCPTR  1  # Ignore signal.  #

@ These values set bits in the !sa flags! field in a
!SIGACTION! structure.

@m sa nocldstop = 16r00000001  # Don't send `sigchld' when children stop #
@m sa siginfo   = 16r00000004  # Use sa_sigaction#
@m sa stack     = 16r08000000  # Use signal stack by using `sa restorer' #
@m sa restart   = 16r10000000  # Don't restart syscall on signal return. #
@m sa interrupt = 16r20000000  # Historical no-op. #
@m sa nodefer   = 16r40000000  # Don't automaticall block the signal when
                                    its handler is being executed #
@m sa resethand = 16r80000000  # Reset to `sig dfl' on entry to handler. #
@m sa no mask   = sa no defer
@m sa one shot  = sa reset hand

@ Here are some general values.

@m si_user      = 0;   # sent by kill, sigsend, raise #
@m si_kernel = ABS 16r80; # sent by the kernel from somewhere #
@m si_queue     = -1;  # sent by sigqueue #
@m si_timer     = -2;  # sent by timer expiration #
@m si_mesgq     = -3;  # sent by real time mesq state change #
@m si_asyncio   = -4;  # sent by AIO completion #
@m si_sigio     = -5;  # sent by queued SIGIO #

@ These routines perform simple tests.

@d macro si fromuser =
macro mode siginfo;
PROC si_fromuser   = (SIGINFO si)BOOL: si_code OF si <= 0

@d macro si fromkernel =
macro mode siginfo;
PROC si_fromkernel = (SIGINFO si)BOOL: si_code OF si > 0

@ The following are possible values for !si_code! in the
!SIGINFO! structure for a !sigill! signal.

@m ill_illopc = 1   # illegal opcode #
@m ill_illopn = 2   # illegal operand #
@m ill_illadr = 3   # illegal addressing mode #
@m ill_illtrp = 4   # illegal trap #
@m ill_prvopc = 5   # privileged opcode #
@m ill_prvreg = 6   # privileged register #
@m ill_coproc = 7   # coprocessor error #
@m ill_badstk = 8   # internal stack error #
@m nsigill = 8

@ Here are the possible values for !si_code! for a
!sigfpe! signal.

@m fpe_intdiv = 1   # integer divide by zero #
@m fpe_intovf = 2   # integer overflow #
@m fpe_fltdiv = 3   # floating point divide by zero #
@m fpe_fltovf = 4   # floating point overflow #
@m fpe_fltund = 5   # floating point underflow #
@m fpe_fltres = 6   # floating point inexact result #
@m fpe_fltinv = 7   # floating point invalid operation #
@m fpe_fltsub = 8   # subscript out of range #
@m nsigfpe = 8

@ Here are the possible values for !si_code! for a
!sigsegv! signal.

@m segv_maperr = 1   # address not mapped to object #
@m segv_accerr = 2   # invalid permissions for mapped object #
@m nsigsegv = 2

@ Here are the possible values for !si_code! for a
!sigbus! signal.

@m bus_adraln = 1   # invalid address alignment #
@m bus_adrerr = 2   # non-existant physical address #
@m bus_objerr = 3   # object specific hardware error #
@m nsigbus = 3

@ Here are the possible values for !si_code! for a
!sigtrap! signal.

@m trap_brkpt = 1   # process breakpoint #
@m trap_trace = 2   # process trace trap #
@m nsigtrap = 2

@ Here are the possible values for !si_code! for a
!sigchld! signal.

@m cld_exited  = 1   # child has exited #
@m cld_killed  = 2   # child was killed #
@m cld_dumped  = 3   # child terminated abnormally #
@m cld_trapped = 4   # traced child has trapped #
@m cld_stopped = 5   # child has stopped #
@m cld_continued = 6 # stopped child has continued #
@m nsigchld = 6

@ Here are the possible values for !si_code! for a
!sigpoll! signal.

@m poll_in  = 1   # data input available #
@m poll_out = 2   # output buffers available #
@m poll_msg = 3   # input message available #
@m poll_err = 4   # i/o error #
@m poll_pri = 5   # high priority input available #
@m poll_hup = 6   # device disconnected #
@m nsigpoll = 6

@ Here is the definition of !posix sigprocmask! which gets
or changes the set of blocked signals.

@d macro posix sigprocmask =
macro mode sigset;
PROC(INT,REF SIGSET,REF SIGSET)INT posix sigprocmask =
   ALIEN "SIGPROCMASK"
   "#define SIGPROCMASK(how,set,oldset) \"
   "  sigprocmask(how,(sigset_t *)set,\"
	"                  (sigset_t *)oldset)"

@ Here are values for the !how! argument to !sigprocmask!.

@m sig block     = 0  # Block   signals #
@m sig unblock   = 1  # Unblock signals #
@m sig setmask   = 2  # Set the set of blocked signals #

@ The next procedure puts into !set! all signals that are
blocked and waiting to be devlivered.

@d macro posix sigpending =
macro mode sigset;
PROC(REF SIGSET#set#)INT posix sigpending =
   ALIEN "SIGPENDING"
   "#define SIGPENDING(set) sigpending(set)"

@ The next procedure changes the set of blocked signals
to !set!, waits until a signal arrives, and then restores
the set of blocked signals.

@d macro posix sigsuspend =
macro mode sigset;
PROC(REF SIGSET#set#)INT posix sigsuspend =
   ALIEN "SIGSUSPEND"
   "#define SIGSUSPEND(set) sigsuspend((sigset_t *)set)"

@ The next group of routines perform useful manipulation
and tests on a set of signals.

@d macro sig empty set =
macro mode sigset;
PROC(REF SIGSET)INT sig empty set = ALIEN "SIGEMPTYSET"
   "#define SIGEMPTYSET(set) sigemptyset((sigset_t *)set)"

@d macro sig fill set =
macro mode sigset;
PROC(REF SIGSET)INT sig fill set = ALIEN "SIGFILLSET"
   "#define SIGFILLSET(set) sigfillset((sigset_t *)set)"

@d macro sig is empty set =
macro mode sigset;
PROC(REF SIGSET)INT sig is empty set =
   ALIEN "SIGISEMPTYSET"
   "#define SIGISEMPTYSET(set) \"
	"   sigisemptyset((sigset_t *)set)"

@d macro sig add set =
macro mode sigset;
PROC(REF SIGSET,INT)INT sig add set = ALIEN "SIGADDSET"
   "#define SIGADDSET(set,sig) \"
	"   sigaddset((sigset_t *)set,sig)"

@d macro sig del set =
macro mode sigset;
PROC(REF SIGSET,INT)INT sig del set = ALIEN "SIGDELSET"
   "#define SIGDELSET(set,sig) \"
	"   sigdelset((sigset_t *)set,sig)"

@d macro sig is member =
macro mode sigset;
PROC(REF SIGSET,INT)INT sig is member = ALIEN "SIGISMEMBER"
   "#define SIGISMEMBER(set,sig) \"
	"   sigismember((sigset_t *)set,sig)"

@d macro sig and set =
macro mode sigset;
PROC(REF SIGSET,REF SIGSET,REF SIGSET)INT sig and set =
   ALIEN "SIGANDSET"
   "#define SIGANDSET(set,left,right) \"
   "   sigandset((sigset_t *)set,\"
	"             (sigset_t *)left,\"
	"             (sigset_t *)right)"

@d macro sig or set =
macro mode sigset;
PROC(REF SIGSET,REF SIGSET,REF SIGSET)INT sig or set =
   ALIEN "SIGORSET"
   "#define SIGORSET(set,left,right) \"
   "   sigorset((sigset_t *)set,(sigset_t *)left,\"
	"   (sigset_t *)right)"

@2Polling.
Firstly, the mode !FDSET! is defined.

@m fdset sz = 32
@d macro mode fdset =
MODE FDSET = STRUCT(STRUCT fdset sz BITS fds bits)

@ The !TIMEVAL! mode is also needed.

@d macro mode timeval =
MODE TIMEVAL = STRUCT(INT tv sec,tv usec)

@ The operators !SET! and !CLEAR! must also be defined.

@d macro op set =
OP SET = (INT n,BITS b)BITS: (b OR ELEM n)

@d macro op clear =
OP CLEAR = (INT n,BITS b)BITS: (b AND NOT ELEM n)

@ The procedure for clearing descriptors in the set
is straightforward.

@d macro fd zero =
macro mode fdset;
PROC fd zero = (REF FDSET fds)REF FDSET:
(
   FOR i TO fdset sz DO (fds bits OF fds)[i]:=2r0 OD;
   fds
)

@ With setting, clearing or interrogating bits, the
mapping between Algol 68 bits and~C bits must be kept in
mind. For example, a descriptor of~8 in~C terms
will set bit~24 in Algol 68 terms.

@d macro fd set =
macro mode fdset;
macro op set;
PROC fd set = (INT n,REF FDSET fds)REF FDSET:
(
   REF BITS b=(fds bits OF fds)[1+(n-1)%fdset sz];
   b:=(bits width-n MOD bits width) SET b;
   fds
)

@d macro fd clr =
macro mode fdset;
macro op clear;
PROC fd clr = (INT n,REF FDSET fds)REF FDSET:
(
   REF BITS b=(fds bits OF fds)[1+(n-1)%fdset sz];
   b:=(bits width-n MOD bits width) CLEAR b;
   fds
)

@d macro fd is set =
macro mode fdset;
PROC fd is set = (INT n,REF FDSET fds)BOOL:
(
   (bits width-n MOD bits width) ELEM
      (fds bits OF fds)[1+(n-1)%fdset sz]
)

@ Now define the procedure !select!.
Check the first !nfds! descriptors each in !readfds! (if
it is not !NIL!) for read readiness, in !writefds! (if not
!NIL!) for write readiness and in !exceptfds! (if not
!NIL!) for exceptional conditions. If !timeout! is not
!NIL!, time out after waiting the interval specified
therein. Yields the number of ready descriptors or~-1 for
errors.

@d macro posix select =
macro mode fdset;
macro mode timeval;
PROC(INT,
     REF FDSET,REF FDSET,REF FDSET,
	  REF TIMEVAL)INT posix select
   = ALIEN "SELECT"
   "#define SELECT(nfds,readfds,writefds,exceptfds,timeout) \"
   "   select(nfds,(void *)readfds,(void *)writefds,\"
   "          (void *)exceptfds,(void *)timeout)"

@ End of sysprelude.w
