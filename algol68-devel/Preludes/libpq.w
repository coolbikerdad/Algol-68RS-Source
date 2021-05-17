@2Introduction.
This file is intended to be included into a Web 68 source file.  This
version forgoes the use of \.{OpenSSL}. It provides an Algol 68
binding for the libpq interface to PostgreSQL.

$Log: libpq.w,v $
Revision 1.4  2005/02/19 14:31:56  sian
Minor changes

Revision 1.3  2004/11/30 21:53:02  sian
Minor errors corrected

Revision 1.2  2004/11/30 20:38:56  sian
Extensive overhaul for PostgreSQL protocol 3.0

@m cvs libpq = "$Id: libpq.w,v 1.4 2005/02/19 14:31:56 sian Exp $"

@ We have to ensure that all declarations appear at the beginning of the
calling file.

@<Include...@>=
@<Incmodes appearing first@>

@3Declarations from \.{postgres_ext.h}.
!name datalen! is the maximum length for system identifiers
(e.g. table names, attribute names, function names, and so on). Note
that databases with different values for !name datalen! cannot
interoperate\bang

@m name datalen = 64
@m acl item size = 8

@2Included declarations.
The declarations for enumerated types are given together with the
procedures which use or yield them.

@3Enumerated types.
Instead of the types declared in the C header file, they are merely
declared as multi-use macros.

@ Connection declarations.

@m connection ok = 0
@m connection bad = 1
@m connection started = 2            #Waiting for connection to be made.#
@m connection made = 3               #Connection OK; waiting to send.#
@m connection awaiting response = 4
   #Waiting for a response from the postmaster.#
@m connection auth ok = 5
   #Received authentication; waiting for the backend to startup.#
@m connection set env = 6            #Negotiating environment.#

@d macro pq status =
PROC(PGCONN)INT pq status = ALIEN "PQSTATUS"
   "#define PQSTATUS(conn) PQstatus((void *)conn)"

@ Polling declarations.

@m pgres polling failed = 0
@m pgres polling reading = 1         #These two indicate that one may#
@m pgres polling writing = 2         #use select before polling again#
@m pgres polling ok = 3
@m pgres polling active = 4          #Can call poll funcn immediately#

@ There can be various responses to SQL commands:-
\begin{description}
\item[pgres command ok] A query command that doesn't return anything
was executed properly by the backend.
\item[pgres tupes ok] A query command that returns tuples was executed
properly by the backend, !PGRESULT! contains the result tuples.
\item[pgres copy out] \.{COPY OUT} data transfer in progress.
\item[pgres copy in]  \.{COPY IN} data transfer in progress.
\item[pgres bad response] An unexpected response was received from the backend.
\end{description}
The first procedure provides the result status of the command. The
value !pgres typles ok! means that the accessor procedures can be used
to get other values. The second procedure converts the status value
into a string describing the status code.

@m pgres empty query = 0
@m pgres command ok = 1
@m pgres tuples ok = 2
@m pgres copy out = 3
@m pgres copy in = 4
@m pgres bad response = 5
@m pgres nonfatal error = 6
@m pgres fatal error = 7

@d macro pq result status =
PROC(PGRESULT)INT pq result status = ALIEN "PQRESULTSTATUS"
   "#define PQRESULTSTATUS(res) PQresultStatus((void *)res)"

@d macro pq res status =
PROC pq res status = (INT status)[]CHAR:
BEGIN
   PROC(EXECSTATUS)CPTR sys pq res status = ALIEN "PQRESSTATUS"
      "#define PQRESSTATUS(st) (void *)PQresStatus(st)";
   CPTRTORVC sys pq res status(status)
END #pq res status#

@ These macros define the various statuses of a transaction.

@m pqtrans idle = 0         # connection idle #
@m pqtrans active = 1      # command in progress #
@m pqtrans intrans = 2      # idle, within transaction block #
@m pqtrans inerror = 3      # idle, within failed transaction #
@m pqtrans unknown = 4      # cannot determine status #

@ These macros give the verbosity of errors.

@m pqerrors terse   = 0      # single-line error messages #
@m pqerrors default = 1      # recommended style #
@m pqerrors verbose = 2      # all the facts #

@3Other modes.
The mode !EXECSTATUS! is a synonym for !INT!.

@<Incmodes...@>=
MODE EXECSTATUS = INT;

@ !PGCONN! encapsulates a connection to the backend.  The contents of
this mode are not supposed to be known to applications.

@<Incmodes...@>=
MODE PGCONN = CPTR;

@ !PGRESULT! encapsulates the result of a query (or more precisely, of a
single SQL command---a query string given to !pq send query! can contain
multiple commands and thus return multiple !PGRESULT! objects).  The
contents of this mode are not supposed to be known to applications.

@<Incmodes...@>=
MODE PGRESULT = CPTR;

@ !PGNOTIFY! represents the occurrence of a \texttt{NOTIFY} message.
Ideally this would be an opaque mode, but it is so simple that it is
unlikely to change.

Note: in Postgres 6.4 and later, the field !be pid! is the process
identifier of the notifying backend.

@<Incmodes...@>=
MODE PGNOTIFY =@/
   STRUCT(CSTR relname,INT be pid,CSTR extra);

@ !PQNOTICEPROCESSOR! is the mode for the notice-message callback. The
parameters are:-
\begin{enumerate}
\item The text of the error message (which includes a trailing newline
character).
\item The parameter passed to !pq set notice processor! (see section
\ref{PQsetNoticeProcessor}).
\end{enumerate}

@<Incmodes...@>=
MODE PQNOTICEPROCESSOR = PROC(CSTR#msg#,CPTR#p#)VOID;

@ This mode is used in the structure mode following.

@<Incmodes...@>=
MODE PQBOOL = CHAR;

@ This mode is used to define print options.

@<Incmodes...@>=
MODE PQPRINTOPT = STRUCT(
   PQBOOL
      header,        # print output field headings and row counts #
      align,         # fill align the fields #
      standard,      # old format #
      html3,         # output HTML tables #
      expanded,      # expand tables #
      pager,         # use a pager for output if needed #
   CSTR
      field sep,      # field separator #
      table opt,     # insert to HTML <table...> #
      caption,       # HTML <caption> #
   CCHARPTRPTR       # null-terminated list of replacement field names#
      field name);

@ This structure is used for the conninfo parameter definitions
returned by !pq conn defaults!.

All fields except !val! point to static strings which must not be
altered.  !val! is either !null! or a current-value string on the
heap.  !pq conninfo free!  will release both the !val! strings and the
!PQCONNINFOOPTION! multiple itself.

@<Incmodes...@>=
MODE PQCONNINFOOPTION = STRUCT(
   CSTR keyword,      # The keyword of the option         #
        envvar,       # Fallback environment variable name#
        compiled,     # Fallback compiled in default value#
        val,          # Option's current value, or NULL   #
        label,        # Label for field in connect dialog   #
        dispchar,     CO Character to display for this field in
                        a connect dialog. Values are:
                        "" - Display entered value as is
                        "*"- Password field - hide value
                        "D"- Debug option: don't show by default CO
   INT dispsize),      # Field size in characters for dialog   #

   PQCIOPT = REF STRUCT 16000000 REF PQCONNINFOOPTION;

@3Synchronous client connection (blocking).
This procedure makes a new connection with the PostgreSQL backend using
the parameters taken from the string !conn info!. The currently
recognised parameter key words are:-
\begin{description}
\item[host] Name of the host to which the connection should be made.
\item[hostaddr] The numeric IP address of the host to which connection
should be made. It should be in standard numeric dotted quad notation.
\item[port] The port number to connect with at the server host.
\item[dbname] The database name. Defaults to the user name.
\item[user] Connect as this PostgreSQL user name.
\item[password] The PostgreSQL password if the server demands password
authentication..
\item[connect_timeout] The maximum wait in seconds. Zero or unspecified
means wait indefinitely.
\item[options] Command-line options to be sent to the server.
\item[tty] Ignored.
\item[sslmode] Four modes are available for SSL-based connections:-
    \begin{description}
    \item[disable] Attempt an unencrypted SSL connection only.
    \item[allow] Try a non-SSL connection, then an SSL-connection.
    \item[prefer] Default. Try an SSL-connection, then a non-SSL
                  connection.
    \item[require] Try an SSL-connection only.
    \end{description}
\item[requiressl] Don't use. Use \.{sslmode} instead.
\item[service] Service name to use for additional parameters.
\end{description}

@d macro pq connect db =
PROC pq connect db = ([]CHAR conn info)PGCONN:
BEGIN
   PROC(VECTOR[]CHAR)PGCONN sys pq connect db =
      ALIEN "PQCONNECTDB"
      "#define PQCONNECTDB(ci) (void *)PQconnectdb(A_VC_charptr(ci))";
   sys pq connect db(Z MAKERVC conn info)
END

@ Close the current connection and free the !PGCONN! data structure.

@d macro pq finish =
PROC(PGCONN)VOID pq finish = ALIEN "PQFINISH"
   "#define PQFINISH(conn) PQfinish((void *)conn)"

@ Reset the current connection using the current !PGCONN! data structure.

@d macro pq reset =
PROC(PGCONN)VOID pq reset = ALIEN "PQRESET"
   "#define PQRESET(conn) PQreset((void *)conn)";

@ Issue a cancel request.

@d macro pq request cancel =
PROC(PGCONN)INT pq request cancel = ALIEN "PQREQUESTCANCEL"
   "#define PQREQUESTCANCEL(conn) PQrequestCancel((void *)conn)";

@ Get info about connection options known to !pq connect db!. See the
programming manual for details.

@d macro pq conn defaults =
PROC PQCIOPT pq conn defaults =
   PQCIOPT CODE "RESULT=PQconndefaults();"

@ Free the data structure returned by !pq conn defaults!.

@d macro pq conninfo free =
PROC(PQCIOPT)VOID pq conninfo free =
   ALIEN "PQCONNINFOFREE"
   "#define PQCONNINFOFREE(connOptions) PQconninfoFree(connOptions)"

@3Asynchronous new client connection to the backend (non-blocking).

@d macro pq connect start =
PROC pq connect start = ([]CHAR conninfo)PGCONN:
BEGIN
   PROC(VECTOR[]CHAR)PGCONN sys pq connect start =
      ALIEN "PQCONNECTSTART"
   "#define PQCONNECTSTART(conninfo) \"
   "   (void *)PQconnectStart(A_VC_charptr(conninfo))";
   sys pq connect start(Z MAKERVC conninfo)
END

@d macro pq connect poll =
PROC(PGCONN)POSTGRESPOLLINGSTATUS pq connect poll =
   ALIEN "PQCONNECTPOLL"
   "#define PQCONNECTPOLL(conn) PQconnectPoll((void *)conn)"

@ Close the current connection and re-establish a new one with the same
parameters.

@d macro pq reset start =
PROC(PGCONN)INT pq reset start = ALIEN "PQRESETSTART"
   "#define PQRESETSTART(conn) PQresetStart((void *)conn)";

@ Reset the current connect using the current parameters.

@d macro pq reset poll =
PROC(PGCONN)POSTGRESPOLLINGSTATUS pq reset poll = ALIEN "PQRESETPOLL"
   "#define PQRESETPOLL(conn) PQresetPoll((void *)conn)"

@3Accessor functions for !PGCONN! objects.

@d macro pq db =
PROC pq db = (PGCONN conn)[]CHAR:
BEGIN
   PROC(PGCONN)CPTR sys pq db = ALIEN "PQDB"
      "#define PQDB(conn) (void *)PQdb((void *)conn)";
   CPTRTORVC sys pq db(conn)
END #pq db#

@d macro pq user =
PROC pq user = (PGCONN conn)[]CHAR:
BEGIN
   PROC(PGCONN)CPTR sys pq user = ALIEN "PQUSER"
      "#define PQUSER(conn) (void *)PQuser((void *)conn)";
   CPTRTORVC sys pq user(conn)
END #pq user#

@d macro pq pass =
PROC pq pass = (PGCONN conn)[]CHAR:
BEGIN
   PROC(PGCONN)CPTR sys pq pass = ALIEN "PQPASS"
      "#define PQPASS(conn) (void *)PQpass((void *)conn)";
   CPTRTORVC sys pq pass(conn)
END #pq pass#

@d macro pq host =
PROC pq host = (PGCONN conn)[]CHAR:
BEGIN
   PROC(PGCONN)CPTR sys pq host = ALIEN "PQHOST"
      "#define PQHOST(conn) (void *)PQhost((void *)conn)";
   CPTRTORVC sys pq host(conn)
END #pq host#

@d macro pq port =
PROC pq port = (PGCONN conn)[]CHAR:
BEGIN
   PROC(PGCONN)CPTR sys pq port = ALIEN "PQPORT"
      "#define PQPORT(conn) (void *)PQport((void *)conn)";
   CPTRTORVC sys pq port(conn)
END #pq port#

@d macro pq tty =
PROC pq tty = (PGCONN conn)[]CHAR:
BEGIN
   PROC(PGCONN)CPTR sys pq tty = ALIEN "PQTTY"
      "#define PQTTY(conn) (void *)PQtty((void *)conn)";
   CPTRTORVC sys pq tty(conn)
END #pq tty#

@d macro pq options =
PROC pq options = (PGCONN conn)[]CHAR:
BEGIN
   PROC(PGCONN)CPTR sys pq options = ALIEN "PQOPTIONS"
      "#define PQOPTIONS(conn) (void *)PQoptions((void *)conn)";
   CPTRTORVC sys pq options(conn)
END #pq options#

@d macro pq error message =
PROC pq error message = (PGCONN conn)[]CHAR:
BEGIN
   PROC(PGCONN)CPTR sys pq error message = ALIEN "PQERRORMESSAGE"
      "#define PQERRORMESSAGE(conn) (void *)PQerrorMessage((void *)conn)";
   CPTRTORVC sys pq error message(conn)
END #pq error message#

@d macro pq socket =
PROC(PGCONN)INT pq socket = ALIEN "PQSOCKET"
   "#define PQSOCKET(conn) PQsocket((void *)conn)"

@d macro pq backend pid =
PROC(PGCONN)INT pq backend pid = ALIEN "PQBACKENDPID"
   "#define PQBACKENDPID(conn) PQbackendPID((void *)conn)"

@d macro pq client encoding =
PROC(PGCONN)INT pq client encoding = ALIEN "PQCLIENTENCODING"
   "#define PQCLIENTENCODING(conn) PQclientEncoding((void *)conn)"

@d macro pq set client encoding =
PROC(PGCONN)INT pq set client encoding = ALIEN "PQSETCLIENTENCODING"
   "#define PQSETCLIENTENCODING(conn) PQsetClientEncoding((void *)conn)"

@ The next routine overrides the default notice processor.
\label{PQsetNoticeProcessor}

@d macro pq set notice processor =
PROC pq set notice processor =@/
   (PGCONN conn,PQNOTICEPROCESSOR proc,CPTR arg)CPTR:
BEGIN
   PROC(PGCONN,CPTR,CPTR)CPTR sys pq set notice processor =
   ALIEN "PQSETNOTICEPROCESSOR"
   "#define PQSETNOTICEPROCESSOR(conn,prc,arg) \"
   "   (void *)PQsetNoticeProcessor((void *)conn,prc,arg)";
   OP(PQNOTICEPROCESSOR)PDESC
      PQNOTICEPROCESSORTOPDESC = BIOP 99;
   sys pq set notice processor(
      conn,cp OF PQNOTICEPROCESSORTOPDESC proc,arg)
END #pq set notice processor#

@ The next routine quotes strings before inclusion in queries. Note
that the wrapper procedure yields the actual string rather than its
length.

@d macro pq escape string =
PROC pq escape string = ([]CHAR from)[]CHAR:
BEGIN
   PROC(RVC,VECTOR[]CHAR)INT sys pq escape string = ALIEN "PQESCAPESTRING"
      "#define PQESCAPESTRING(t,f) \"
      "  PQescapeString((char *)t,A_VC_charptr(f),f.upb)";
   VECTOR[1+2*(UPB from-LWB from+1)]CHAR st;
   INT sz to=sys pq escape string(st,MAKERVC from);
   st[:sz to]
END #pq escape string#

@ Binary strings can also be escaped for inclusion in SQL queries.

@d macro pq escape bytea =
PROC pq escape bytea = ([]SHORT SHORT BITS bintext)[]SHORT SHORT BITS:
BEGIN
   PROC(VECTOR[]SHORT SHORT BITS,REF INT)REF SHORT SHORT BITS
      sys pq escape bytea = ALIEN "PQESCAPEBYTEA"
      "#define PQESCAPEBYTEA(bintxt,to_len) \"
      "   (unsigned char *)PQescapeBytea(\"
      "        (unsigned char *)bintxt.data, bintxt.upb,(int *)to_len)";
   INT to upb;
   VECTOR[UPB bintext-LWB bintext+1]SHORT SHORT BITS vb;
   FOR i FROM LWB bintext TO UPB bintext
   DO
      vb[i-LWB bintext + 1]:=bintext[i]
   OD;
   REF STRUCT 16000000 SHORT SHORT BITS rssb =@/
      sys pq escape bytea(vb,to upb);
   rssb[:to upb]
END #pq escape bytea#

@3Synchronous queries.
Firstly we deal with the simple synchronous query. The next procedure
submits a command to the server and waits for the result. The yield is
for the last command in !query! if the parameter contains multiple
commands separated by semicolons.

@d macro pq exec =
PROC pq exec = (PGCONN conn,[]CHAR query)PGRESULT:
BEGIN
   PROC(PGCONN,VECTOR[]CHAR)PGRESULT sys pq exec = ALIEN "PQEXEC"
      "#define PQEXEC(conn,query) \"
      "   (void *)PQexec((void *)conn,A_VC_charptr(query))";
   sys pq exec(conn,Z MAKERVC query)
END #pq exec#

@ This procedure frees a !PGRESULT! structure yielded by !pq exec!.

@d macro pq clear =
PROC(PGRESULT)VOID pq clear = ALIEN "PQCLEAR"
   "#define PQCLEAR(res) PQclear((void *)res)"

@ SQL queries can be submitted with parameters. This procedure enables
the engineer to specify how many parameters and give details of the
individual parameters. The wrapper proc has yet to be implemented.

@d macro pq exec params =
PROC pq exec params =
   (PGCONN conn,
    []CHAR cmd,
    []STRUCT(OID type,
             UNION([]CHAR,[]SHORT SHORT BITS) value) params,
    BOOL binary fmt)PGRESULT:
BEGIN
   PROC(PGCONN,CSTR,INT,CPTR,CPTR,CPTR,CPTR,INT)PGRESULT
      sys pq exec params = ALIEN "PQEXECPARAMS"
      "#define PQEXECPARAMS(conn,cmd,npars,types,vals,lengs,forms,resf)\"
      "  (void *)PQexecParams((void *)conn,A_VC_charptr(cmd),npars,\"
      "                       (void *)types,(void *)vals,(void *)lengs,\"
      "                       (void *)forms,resf)";
   PGRESULT(NIL)
END #pq exec params#

@ SQL queries can be prepared using the SQL command \.{PREPARE}. This
procedure sends a request to execute a prepared statement with given
parameters and waits for the result. The wrapper proc has yet to be
implemented.

@d macro pq exec prepared =
PROC pq exec prepared = (PGCONN conn,
                         []CHAR stmt id,
                         INT n params,
                         [][]CHAR param values,
                         []INT param lengths, param formats,
                         INT result format)PGRESULT:
BEGIN
   PROC(PGCONN,CSTR,INT,CPTR,CPTR,CPTR,INT)PGRESULT
      sys pq exec params = ALIEN "PQEXECPREPARED"
      "#define PQEXECPREPARED(conn,cmd,nparams,values,lengs,formats,resformat) \"
      "  (void *)PQexecPrepared((void *)conn,A_VC_charptr(cmd),nparams, \"
      "                         (void *)types,(void *)values,(void *)lengs,\"
      "                         (void *)formats,resformat)";
   PGRESULT(NIL)
END #pq exec prepared#

@3Error messages.
This procedure converts the error from a query into a descriptive
error message.

@d macro pq result error message =
PROC pq result error message = (PGRESULT res)[]CHAR:
BEGIN
   PROC(PGRESULT)CPTR sys pq result error message =
      ALIEN "PQRESULTERRORMESSAGE"
      "#define PQRESULTERRORMESSAGE(res) \"
      "    (void *)PQresultErrorMessage((void *)res)";
   CPTRTORVC sys pq result error message(res)
END #pq result error message#

@ The next procedure yields an individual field of an error report.
Here are the identifiers of the error message fields.

@m pg diag severity = ABS "S"
@m pg diag sqlstate = ABS "C"
@m pg diag message primary = ABS "M"
@m pg diag message detail = ABS "D"
@m pg diag message hint = ABS "H"
@m pg diag statement position = ABS "P"
@m pg diag context = ABS "W"
@m pg diag source file = ABS "F"
@m pg diag source line = ABS "L"
@m pg diag source function = ABS "R"

@d macro pq result error field =
PROC pq result error field = ([]CHAR res,INT field code)[]CHAR:
BEGIN
   PROC(CSTR,INT)CPTR sys pq result error field =
      ALIEN "PQRESULTERRORFIELD"
      "#define PQRESULTERRORFIELD(res,fieldcode) \"
      "   (void *)PQresultErrorField(A_VC_charptr(res,fieldcode)";
   CPTRTORVC sys pq result eror field(Z MAKERVC res,field code)
END;

@3Retrieving !SELECT! result information.
The !PGRESULT! structure is opaque to the programmer, so the following
procedures provide access to various values. They are termed
\.{accessor functions} in the PostgreSQL documentation.

@ This procedure yields the number of tuples in the query result.

@d macro pq ntuples =
PROC(PGRESULT)INT pq ntuples = ALIEN "PQNTUPLES"
   "#define PQNTUPLES(res) PQntuples((void *)res)"

@ This procedure yields the number of fields (or columns) in each
tuple of the query result.

@d macro pq nfields =
PROC(PGRESULT)INT pq nfields = ALIEN "PQNFIELDS"
   "#define PQNFIELDS(res) PQnfields((void *)res)"

@ This procedure yields the field identification associated with the
given field index. For the Algol 68 procedure, field indexers start
at~1.

@d macro pq fname =
PROC pq fname = (PGRESULT res,INT n)[]CHAR:
BEGIN
   PROC(PGRESULT,INT)CPTR sys pq fname = ALIEN "PQFNAME"
      "#define PQFNAME(r,num) (void *)PQfname((void *)r, num)";
   CPTRTORVC sys pq fname(res,n-1)
END #pq fname#

@ This procedure gives the field index associated with the given field
name. It is 1~based. Zero is yielded if !field name! does not match
any field.

@d macro pq fnumber =
PROC pq fnumber = (PGRESULT res,[]CHAR field name)INT:
BEGIN
   PROC(PGRESULT,VECTOR[]CHAR)INT sys pq fnumber = ALIEN "PQFNUMBER"
      "#define PQFNUMBER(res,fn) PQfnumber((void *)res,A_VC_charptr(fn))";
   1+sys pq fnumber(res,Z MAKERVC field name)
END #pq fnumber#

@ This procedure yields !TRUE! if the !PGRESULT! contains binary data,
otherwise !FALSE!.

@d macro pq binary tuples =
PROC(PGRESULT)BOOL pq binary tuples = ALIEN "PQBINARYTUPLES"
   "#define PQBINARYTUPLES(res) PQbinaryTuples((void *)res)"

@ The next procedure yields the field type associated with the given
field index (1-based). The value returned is an internal coding of
the type (see the following macros). The table !pg_type! can be queried
to obtain the name and properties of the various data types.

@m bool oid = BIN 16
@m bytea oid = BIN 17
@m char oid = BIN 18
@m name oid = BIN 19
@m int8 oid = BIN 20
@m int2 oid = BIN 21
@m int2vector oid = BIN 22
@m int4 oid = BIN 23
@m regproc oid = BIN 24
@m text oid = BIN 25
@m oid oid = BIN 26
@m tid oid = BIN 27
@m xid oid = BIN 28
@m cid oid = BIN 29
@m oidvector oid = BIN 30
@m point oid = BIN 600
@m lseg oid = BIN 601
@m path oid = BIN 602
@m box oid = BIN 603
@m polygon oid = BIN 604
@m line oid = BIN 628
@m cidr oid = BIN 650
@m float4 oid = BIN 700
@m float8 oid = BIN 701
@m abstime oid = BIN 702
@m reltime oid = BIN 703
@m tinterval oid = BIN 704
@m unknown oid = BIN 705
@m circle oid = BIN 718
@m cash oid = BIN 790
@m macaddr oid = BIN 829
@m inet oid = BIN 869
@m bpchar oid = BIN 1042
@m varchar oid = BIN 1043
@m date oid = BIN 1082
@m time oid = BIN 1083
@m timestamp oid = BIN 1114
@m timestamptz oid = BIN 1184
@m interval oid = BIN 1186
@m timetz oid = BIN 1266
@m bit oid = BIN 1560
@m varbit oid = BIN 1562
@m numeric oid = BIN 1700
@m refcursor oid = BIN 1790
@m invalid oid = BIN 0
@m oid max = NOT invalid oid

@d macro pq ftype =
PROC(PGRESULT,INT)OID pq ftype = ALIEN "PQFTYPE"
   "#define PQFTYPE(res,fn) PQftype((void *)res, fn-1)"

@<Incmodes...@>=
MODE OID = BITS;

@ The next procedure yields the type-specific modification data of the
field associated with the given field index. Field indices start at 1.

@d macro pq fmod =
PROC(PGRESULT,INT)INT pq fmod = ALIEN "PQFMOD"
   "#define PQFMOD(res,fn) PQfmod((void *)res,fn-1)"

@ This procedure returns the size in bytes of the field associated with
the given field index as stored by the server in binary. Field indices
start at~1.

@d macro pq fsize =
PROC(PGRESULT,INT)INT pq fsize = ALIEN "PQFSIZE"
   "#define PQFSIZE(res,fn) PQfsize((void *)res, fn-1)"

@ This procedure returns the format code indicating the format of the
given column. Column numbers start at~1.

@d macro pq fformat =
PROC(PGRESULT,INT)BOOL pq fformat = ALIEN "PQFFORMAT"
   "#define PQFFORMAT(res,fn) PQfformat(res,fn-1)"

@ This procedure returns the column number (within its table) of the
column making up the specified result column. Result column numbers
start at~1.

@d macro pq ftablecol =
PROC pq ftablecol = (PGRESULT res,INT col num)INT:
BEGIN
   PROC(PGRESULT,INT)INT sys pq ftablecol = ALIEN "PQFTABLECOL"
      "#define PQFTABLECOL(res,fn) PQftablecol(res,fn-1)";
   sys pq ftablecol + 1
END #pq ftablecol#

@3Retrieving !SELECT! result values.
This procedure yields a single field value of one tuple of a value of
mode !PGRESULT!. Both tuple and field indexers start at~1.

@d macro pq get value =
PROC pq get value = (PGRESULT res,INT tup num,field num)[]CHAR:
BEGIN
   PROC(PGRESULT,INT,INT)CPTR sys pq get value =
      ALIEN "PQGETVALUE"
      "#define PQGETVALUE(res,tpn,fn) \"
      "  (void *)PQgetvalue((void *)res, tpn, fn)";
   CPTRTORVC sys pq get value(res,tup num-1,field num-1)
END #pq get value#

@ This procedure tests a field for a NULL entry. Tuple and field
indices start at~1.

@d macro pq get is null =
PROC(PGRESULT,INT,INT)BOOL pq get is null = ALIEN "PQGETISNULL"
   "#define PQGETISNULL(res,tpn,fn) PQgetisnull((void *)res,tpn-1,fn-1)"

@ This procedure returns the length of a field (attribute) value in
bytes. Tuple and field indices start at~1. This is the length of the
value yielded by !pq get value!.

@d macro pq get length =
PROC(PGRESULT,INT,INT)INT pq get length = ALIEN "PQGETLENGTH"
   "#define PQGETLENGTH(res,tpn,fn) PQgetlength((void *)res,tpn-1,fn-1)"

@3Retrieving non-!SELECT! result information.
This procedure returns the command status string from the SQL command
that generated the !PGRESULT!.

@d macro pq cmd status =
PROC pq cmd status = (PGRESULT res)[]CHAR:
BEGIN
   PROC(PGRESULT)CPTR sys pq cmd status = ALIEN "PQCMDSTATUS"
      "#define PQCMDSTATUS(res) (void *)PQcmdStatus((void *)res)";
   CPTRTORVC sys pq cmd status(res)
END #pq cmd status#

@ This procedure returns the number of rows affected by \.{INSERT},
\.{UPDATE}, \.{DELETE}, \.{MOVE} or \.{FETCH} commands. Otherwise, it
yields the empty string.

@d macro pq cmd tuples =
PROC pq cmd tuples = (PGRESULT res)[]CHAR:
BEGIN
   PROC(PGRESULT)CPTR sys pq cmd tuples = ALIEN "PQCMDTUPLES"
      "#define PQCMDTUPLES(res) (void *)PQcmdTuples((void *)res)";
   CPTRTORVC sys pq cmd status(res)
END #pq cmd tuples#

@ This procedure returns the !OID! of the inserted row, if the SQL
command was an !INSERT! that inserted exactly one row into a table that
has OIDs. Otherwise, returns !invalid oid!.

@d macro pq oid value =
PROC(PGRESULT)OID pq oid value = ALIEN "PQOIDVALUE"
 "#define PQOIDVALUE(res) PQoidValue((void *)res)"

@3Asynchronous Query Processing.
The next procedure sets the connection to the backend to non-blocking
status if !arg! is !TRUE! and blocking status if !arg! is !FALSE!.

@d macro pq set nonblocking =
PROC(PGCONN,BOOL)INT pq set nonblocking = ALIEN "PQSETNONBLOCKING"
   "#define PQSETNONBLOCKING(res,arg) \"
   "   PQsetnonblocking((void *)conn,arg)"

@ The next procedure tests the status of the connection and yields
!TRUE! if it is non-blocking and !FALSE! if it is blocking.

@d macro pq is non blocking =
PROC(PGCONN)BOOL pq is nonblocking = ALIEN "PQISNONBLOCKING"
   "#define PQISNONBLOCKING(conn) PQisnonblocking((void *)conn)"

@ The next procedure submits a command to the server without waiting
for the result(s). !TRUE! is returned if the command was successfully
dispatched, !FALSE! if not (in which case, use !pq error message! to
get more information about the failure).

@d macro pq send query =
PROC pq send query = (PGCONN conn,[]CHAR query)BOOL:
BEGIN
   PROC(PGCONN,VECTOR[]CHAR)BOOL sys pq send query = ALIEN "PQSENDQUERY"
      "#define PQSENDQUERY(conn,qry) \"
      "   PQsendQuery((void *)conn,A_VC_charptr(qry))";
   sys pq send query(conn,Z MAKERVC query)
END #pq send query#

@ The next procedure waits for the next result from a prior
!pq send query!, and yields it. !NIL! is returned when the query is
complete and there will be no more results.

!pq get result! must be called repeatedly until it returns !NIL!,
indicating that the command has finished. (If called when no command
is active, !pq get result! will simply return !NIL! immediately.) Each
non-!NIL!  result from !pq get result! should be processed using the
same !PGRESULT! accessor procedures previously described. Remember to
free each !PGRESULT! object with !pq clear! when you have finished with
it. Note that !pq get result! will block only if a query is active and
the necessary response data has not yet been read by
!pq consume input!.

@d macro pq get result =
PROC(PGCONN)PGRESULT pq get result = ALIEN "PQGETRESULT"
   "#define PQGETRESULT(conn) (void *)PQgetResult((void *)conn)"

@ The next procedure consumes input from the backend if it is
available.

!pq consume input! normally returns !TRUE! indicating !"no error"!, but
returns !FALSE! if there was some kind of trouble (in which case !pq
error message! is set). Note that the result does not say whether any
input data was actually collected. After calling !pq consume input!,
the application may check !pq is busy! or !pq notifies! to see if their
state has changed.

@d macro pq consume input =
PROC(PGCONN)BOOL pq consume input = ALIEN "PQCONSUMEINPUT"
   "#define PQCONSUMEINPUT(conn) PQconsumeInput((void *)conn)"

@ The next procedure yields !TRUE! if a query is busy, that is, !pq
get result! would block waiting for input. A yield of !FALSE!
indicates that !pq get result! can be called with the assurance of not
blocking.

@d macro pq is busy =
PROC(PGCONN)BOOL pq is busy = ALIEN "PQISBUSY"
   "#define PQISBUSY(conn) PQisBusy((void *)conn)"

@ The next procedure attempts to flush any data queued to the backend.
It yields 0 if successful (or if the send queue is empty) or !pg eof! if
it failed for some reason.

@m pg eof = -1

@d macro pq flush =
PROC(PGCONN)INT pq flush = ALIEN "PQFLUSH"
   "#define PQFLUSH(conn) PQflush((void *)conn)"

@ The next procedure returns the next notification from a list of
unhandled notification messages received from the backend. It yields
!NIL! if there are no pending notifications. Once a notification is
returned from !pq notifies!, it is considered handled and will be
removed from the list of notifications.

@d macro pq notifies =
PROC(PGCONN)REF PGNOTIFY pq notifies = ALIEN "PQNOTIFIES"
   "#define PQNOTIFIES(conn) (void *)PQnotifies((void *)conn)"

@ After processing a value of mode !PGNOTIFY! returned by !pq
notifies!, be sure to free it with !pq free notify! to avoid a memory
leak.

@d macro pq free notify =
PROC(REF PGNOTIFY )VOID pq free notify = ALIEN "PQFREENOTIFY"
   "#define PQFREENOTIFY(notify) PQfreeNotify((void *)notify)"

@3Procedures associated with the !COPY! command.
These procedures should be executed only after obtaining a !pgres copy
out! or !pgres copy in! result object from !pq exec!  or !pq get
result! with the !COPY! command.

The next procedure sends a buffer to the backend server. It yields~1 if
the data was sent,~0 if it was not sent because the attempt would block
(only possible if the connection is in nonblocking mode), or -1 if an
error occured.

@d macro pq put copy data =
PROC pq put copy data = (PGCONN conn,[]CHAR buffer)INT:
BEGIN
   PROC(PGCONN,VECTOR[]CHAR)INT sys pq put copy data =
   ALIEN "PQPUTCOPYDATA"
      "#define PQPUTDATA(conn,buff) \"
      "   PQputline((void *)conn,A_VC_charptr(buff),buff.upb)";
   sys pq put line(conn,MAKERVC buffer)
END #pq put copy data#

@ This procedure sends an indication to the server that there is no
more data for the !COPY! command. If !err msg! is the null string, the
!COPY! ends successfully. Otherwise, the !COPY! is made to fail with
the given error message. The result is~1 if the termination data was
sent,~0 if it was not sent because the attempt would block, or~-1 if an
error occurred. If the value is zero, wait for write-ready and try
again.

@d macro pq put copy end =
PROC pq put copy end = (PGCONN conn,[]CHAR err msg)INT:
BEGIN
   PROC(PGCONN,CSTR)INT sys pq put copy end = ALIEN "PQPUTCOPYEND"
   "#define PQPUTCOPYEND(conn,errmsg) \"
   "   PQendcopy((void *)conn,A_VC_charptr(errmsg))";
   sys pq put copy end(conn,(err msg/=""|Z MAKERVC err msg|CSTR(0)))
END #pq put copy end#

@ This procedure receives data from the server during !copy out! state.
Data is always returned one data row at a time. If only a partial row
is available, it is not returned. Successful return of a
data row will result in that row being copied to !buff!. If !async! is
!TRUE!, the procedure can return before data is available, in which
case it will return zero. A return of $-1$ means that the \.{COPY} has
finished. A return of $-2$ indicates an error in which an appropriate
error message will be stored in !buff!. After !pq get copy data!
returns $-1$, call !pq get result! to obtain the final result status of
the \.{COPY} command. Wait for this result to be available in the usual
way.

@d macro pq get copy data =
PROC pq get copy data = (PGCONN conn,REF STRING buff,BOOL async)INT:
IF PROC(PGCONN,CCHARPTRPTR,INT)INT sys pq get copy data =
      ALIEN "PQGETCOPYDATA"
      "#define PQGETCOPYDATA(conn,buff,async) \"
      "   PQgetCopyData(conn,buff,async)";
   CCHARPTRPTR bf;
   INT res=sys pq get copy data(conn,(char **)bf,async);
   res>0
THEN
   OP(CCHARPTRPTR)CPTR TOCPTR = BIOP 99;
   buff:=CSTRTORVC(bf[1][:res]);
   pq free mem(TOCPTR bf);
   res
ELIF async & res=0
THEN res
ELIF res=-1
THEN buff:="";@& res
ELSE buff:=pq error message(conn);@& res
FI #pq get copy data#

@ This procedure will free memory allocated by the \.{libpq} library.

@d macro pq freemem =
PROC(CPTR)VOID pq freemem = ALIEN "PQFREEMEM"
   "#define PQFREEMEM(ptr) PQfreemem((void *)ptr)"

@ This procedure makes an empty !PGRESULT! with given status (some
applications find this useful). If !conn! is not !NIL! and !status!
indicates an error, the !conn!'s !error message! is copied.

@d macro pq make empty pgresult =
PROC(PGCONN,EXECSTATUS)PGRESULT pq make empty pgresult =
   ALIEN "PQMAKEEMPTYPGRESULT"
   "#define PQMAKEEMPTYPGRESULT(conn,status) \"
   "   (void *)PQmakeEmptyPGresult((void *)conn,status)"

@3Large-object access routines.
The following procedures give access to large objects. These usually
contain binary data.

@ The first procedure creates a new large object. !mode! is a bit mask
describing several different attributes of the new object. The access
type (read, write, or both) is controlled by or'ing together the bits
!inv read! and !inv write!. The low-order sixteen bits of the mask have
historically been used at Berkeley to designate the storage manager
number on which the large object should reside. These bits should
always be zero now. The yield is the !OID! assigned to the new large
object.

@m inv write = 16r00020000
@m inv read  = 16r00040000

@d macro lo creat =
PROC(PGCONN,BITS)OID lo create = ALIEN "LOCREAT"
   "#define LOCREAT(conn,mode) lo_creat((void *)conn,mode)"

@ The next procedure imports a file as a large object. The yielded
value is the !OID! that was assigned to the new large object.

@d macro lo import =
PROC lo import = (PGCONN conn,[]CHAR filename)OID:
BEGIN
   PROC(PGCONN,VECTOR[]CHAR)OID sys lo import = ALIEN "LOIMPORT"
      "#define LOIMPORT(conn,fn) lo_import((void *)conn,A_VC_charptr(fn))";
   sys lo import(conn,Z MAKERVC filename)
END #lo import#

@ The next procedure exports a large object into a file.

@d macro lo export =
PROC lo export = (PGCONN conn,OID lobj id,[]CHAR filename)INT:
BEGIN
   PROC(PGCONN,OID,VECTOR[]CHAR)INT sys lo export = ALIEN "LOEXPORT"
      "#define LOEXPORT(conn,lobjid,fn) \"
      "   lo_export((void *)conn,lobjId,A_VC_charptr(fn))";
   sys lo export(conn,Z MAKERVC filename)
END #lo export#

@ The next procedure opens an existing large object. The !lobj id!
argument specifies the !OID! of the large object to open. The !mode!
bits control whether the object is opened for reading (!inv read!),
writing (!inv write!), or both. A large object cannot be opened before
it is created. !lo open! yields a large object descriptor for later
use in !lo read!, !lo write!, !lo lseek!, !lo tell!, and !lo close!,
but must be used for the current transaction only.

@d macro lo open =
PROC(PGCONN,OID,BITS)INT lo open = ALIEN "LOOPEN"
   "#define LOOPEN(conn,lobjid,mode) \"
   "   lo_open((void *)conn,lobjid,mode)"

@ The next procedure reads the large object !fd! into !buffer!. The
!fd! argument must have been returned by a previous call to
!lo open!. The number of bytes actually read is yielded. If an
error occurs, the yield is negative.

@d macro lo read =
PROC lo read = (PGCONN conn,INT fd,REF STRING buffer)INT:
BEGIN
   PROC(PGCONN,INT,VECTOR[]CHAR)INT sys lo read = ALIEN "LOREAD"
      "#define LOREAD(conn,fd,buf) \"
      "   lo_read((void *)conn,fd,A_VC_charptr(buf),buf.upb)";
   VECTOR[UPB buffer-LWB buffer+1]CHAR buf;
   INT n=sys lo read(conn,fd,buf);
   buffer:=buf;
   n
END #lo read#

@ The next procedure writes !buffer! to the large object !fd!. The
!fd! argument must have been returned by a previous call to !lo
open!. The yield is the number of bytes actually written. If an error
occurs, the yield is negative.

@d macro lo write =
PROC lo write = (PGCONN conn,INT fd,[]CHAR buffer)INT:
BEGIN
   PROC(PGCONN,INT,VECTOR[]CHAR)INT sys lo write = ALIEN "LOWRITE"
      "#define LOWRITE(conn,fd,buf) \"
      "   lo_write((void *)conn,fd,A_VC_charptr(buf),buf.upb)";
   sys lo write(conn,fd,MAKERVC buffer)
END #lo write#

@ The next procedure changes the current read or write location on a
large object.

@d macro lo lseek =
PROC(PGCONN,INT,INT,INT)INT lo lseek = ALIEN "LOLSEEK"
   "#define LOLSEEK(conn,fd,offset,whence) \"
   "   lo_lseek((void *)conn,fd,offset,whence)"

@ The next procedure closes a large object.

@d macro lo close =
PROC(PGCONN,INT)INT lo close = ALIEN "LOCLOSE"
   "#define LOCLOSE(conn,fd) lo_close((void *)conn,fd)"

@ The next procedure deletes a given large object from the database.

@d macro lo unlink =
PROC(PGCONN,OID)INT lo unlink = ALIEN "LOUNLINK"
   "#define LOUNLINK(conn,lobjid) lo_unlink((void *)conn,lobjid)"

@3Miscellaneous routines.
The first routine obtains the current read or write location of a large
object. If there is an error, the yield is negative.

@d macro lo tell =
PROC(PGCONN,INT)INT lo tell = ALIEN "LOTELL"
   "#define LOTELL(conn,fd) lo_tell((void *)conn,(A_INT_int)fd)";

@2End of libpq.w.
