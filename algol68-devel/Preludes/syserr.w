@2Introduction.
This module is copyright (C) BP21309 Phoenix Engineering.

This module provides error numbers for Linux and is intended to be
included into a Web68 file.

@m error banner = "$Id: syserr.w,v 1.4 2003/05/10 11:00:45 sian Exp $"

@ Every macro must call this one to ensure that the file \.{errno.h}
is included.

@d macro err dummy = INT err dummy = ALIEN "ERRDUMMY" "#include <errno.h>" "/**/"

@ Here are the error numbers declared using !ALIEN! sorted into alphabetical
order.

@d macro e2big =
macro err dummy;
INT e2big = ALIEN "E2BIG" "/**/"	   # Arg list too long #
@d macro eacces =
macro err dummy;
INT eacces = ALIEN "EACCES" "/**/"	   # Permission denied #
@d macro eaddrinuse =
macro err dummy;
INT eaddrinuse = ALIEN "EADDRINUSE" "/**/"	# Address already in use #
@d macro eaddrnotavail =
macro err dummy;
INT eaddrnotavail = ALIEN "EADDRNOTAVAIL" "/**/"	# Cannot assign requested address #
@d macro eadv =
macro err dummy;
INT eadv = ALIEN "EADV" "/**/"	      # Advertise error #
@d macro eafnosupport =
macro err dummy;
INT eafnosupport = ALIEN "EAFNOSUPPORT" "/**/"	# Address family not supported by protocol #
@d macro eagain =
macro err dummy;
INT eagain = ALIEN "EAGAIN" "/**/"	   # Try again #
@d macro ealready =
macro err dummy;
INT ealready = ALIEN "EALREADY" "/**/"# Operation already in progress #
@d macro ebade =
macro err dummy;
INT ebade = ALIEN "EBADE" "/**/"	   # Invalid exchange #
@d macro ebadf =
macro err dummy;
INT ebadf = ALIEN "EBADF" "/**/"	   # Bad file number #
@d macro ebadfd =
macro err dummy;
INT ebadfd = ALIEN "EBADFD" "/**/"	   # File descriptor in bad state #
@d macro ebadmsg =
macro err dummy;
INT ebadmsg = ALIEN "EBADMSG" "/**/"	# Not a data message #
@d macro ebadr =
macro err dummy;
INT ebadr = ALIEN "EBADR" "/**/"	   # Invalid request descriptor #
@d macro ebadrqc =
macro err dummy;
INT ebadrqc = ALIEN "EBADRQC" "/**/"	# Invalid request code #
@d macro ebadslt =
macro err dummy;
INT ebadslt = ALIEN "EBADSLT" "/**/"	# Invalid slot #
@d macro ebfont =
macro err dummy;
INT ebfont = ALIEN "EBFONT" "/**/"	   # Bad font file format #
@d macro ebusy =
macro err dummy;
INT ebusy = ALIEN "EBUSY" "/**/"	   # Device or resource busy #
@d macro echild =
macro err dummy;
INT echild = ALIEN "ECHILD" "/**/"	   # No child processes #
@d macro echrng =
macro err dummy;
INT echrng = ALIEN "ECHRNG" "/**/"	   # Channel number out of range #
@d macro ecomm =
macro err dummy;
INT ecomm = ALIEN "ECOMM" "/**/"	   # Communication error on send #
@d macro econnaborted =
macro err dummy;
INT econnaborted = ALIEN "ECONNABORTED" "/**/"	# Software caused connection abort #
@d macro econnrefused =
macro err dummy;
INT econnrefused = ALIEN "ECONNREFUSED" "/**/"	# Connection refused #
@d macro econnreset =
macro err dummy;
INT econnreset = ALIEN "ECONNRESET" "/**/"	# Connection reset by peer #
@d macro edeadlk =
macro err dummy;
INT edeadlk = ALIEN "EDEADLK" "/**/"	# Resource deadlock would occur #
@d macro edeadlock =
macro edeadlk;
INT edeadlock = edeadlk
@d macro edestaddrreq =
macro err dummy;
INT edestaddrreq = ALIEN "EDESTADDRREQ" "/**/"	# Destination address required #
@d macro edom =
macro err dummy;
INT edom = ALIEN "EDOM" "/**/"	      # Math argument out of domain of func #
@d macro edotdot =
macro err dummy;
INT edotdot = ALIEN "EDOTDOT" "/**/"	# RFS specific error #
@d macro edquot =
macro err dummy;
INT edquot = ALIEN "EDQUOT" "/**/"	   # Quota exceeded #
@d macro eexist =
macro err dummy;
INT eexist = ALIEN "EEXIST" "/**/"	   # File exists #
@d macro efault =
macro err dummy;
INT efault = ALIEN "EFAULT" "/**/"	   # Bad address #
@d macro efbig =
macro err dummy;
INT efbig = ALIEN "EFBIG" "/**/"	   # File too large #
@d macro ehostdown =
macro err dummy;
INT ehostdown = ALIEN "EHOSTDOWN" "/**/"	# Host is down #
@d macro ehostunreach =
macro err dummy;
INT ehostunreach = ALIEN "EHOSTUNREACH" "/**/"	# No route to host #
@d macro eidrm =
macro err dummy;
INT eidrm = ALIEN "EIDRM" "/**/"	   # Identifier removed #
@d macro eilseq =
macro err dummy;
INT eilseq = ALIEN "EILSEQ" "/**/"	   # Illegal byte sequence #
@d macro einprogress =
macro err dummy;
INT einprogress = ALIEN "EINPROGRESS" "/**/"	# Operation now in progress #
@d macro eintr =
macro err dummy;
INT eintr = ALIEN "EINTR" "/**/"	   # Interrupted system call #
@d macro einval =
macro err dummy;
INT einval = ALIEN "EINVAL" "/**/"	   # Invalid argument #
@d macro eio =
macro err dummy;
INT eio = ALIEN "EIO" "/**/"	         # I/O error #
@d macro eisconn =
macro err dummy;
INT eisconn = ALIEN "EISCONN" "/**/"	# Transport endpoint is already connected #
@d macro eisdir =
macro err dummy;
INT eisdir = ALIEN "EISDIR" "/**/"	   # Is a directory #
@d macro eisnam =
macro err dummy;
INT eisnam = ALIEN "EISNAM" "/**/"	   # Is a named type file #
@d macro el2hlt =
macro err dummy;
INT el2hlt = ALIEN "EL2HLT" "/**/"	   # Level 2 halted #
@d macro el2nsync =
macro err dummy;
INT el2nsync = ALIEN "EL2NSYNC" "/**/"# Level 2 not synchronized #
@d macro el3hlt =
macro err dummy;
INT el3hlt = ALIEN "EL3HLT" "/**/"	   # Level 3 halted #
@d macro el3rst =
macro err dummy;
INT el3rst = ALIEN "EL3RST" "/**/"	   # Level 3 reset #
@d macro elibacc =
macro err dummy;
INT elibacc = ALIEN "ELIBACC" "/**/"	# Can not access a needed shared library #
@d macro elibbad =
macro err dummy;
INT elibbad = ALIEN "ELIBBAD" "/**/"	# Accessing a corrupted shared library #
@d macro elibexec =
macro err dummy;
INT elibexec = ALIEN "ELIBEXEC" "/**/"# Cannot exec a shared library directly #
@d macro elibmax =
macro err dummy;
INT elibmax = ALIEN "ELIBMAX" "/**/"	# Attempting to link in too many shared libraries #
@d macro elibscn =
macro err dummy;
INT elibscn = ALIEN "ELIBSCN" "/**/"	# .lib section in a.out corrupted #
@d macro elnrng =
macro err dummy;
INT elnrng = ALIEN "ELNRNG" "/**/"	   # Link number out of range #
@d macro eloop =
macro err dummy;
INT eloop = ALIEN "ELOOP" "/**/"	   # Too many symbolic links encountered #
@d macro emediumtype =
macro err dummy;
INT emediumtype = ALIEN "EMEDIUMTYPE" "/**/"	# Wrong medium type #
@d macro emfile =
macro err dummy;
INT emfile = ALIEN "EMFILE" "/**/"	   # Too many open files #
@d macro emlink =
macro err dummy;
INT emlink = ALIEN "EMLINK" "/**/"	   # Too many links #
@d macro emsgsize =
macro err dummy;
INT emsgsize = ALIEN "EMSGSIZE" "/**/"# Message too long #
@d macro emultihop =
macro err dummy;
INT emultihop = ALIEN "EMULTIHOP" "/**/"	# Multihop attempted #
@d macro enametoolong =
macro err dummy;
INT enametoolong = ALIEN "ENAMETOOLONG" "/**/"	# File name too long #
@d macro enavail =
macro err dummy;
INT enavail = ALIEN "ENAVAIL" "/**/"	# No XENIX semaphores available #
@d macro enetdown =
macro err dummy;
INT enetdown = ALIEN "ENETDOWN" "/**/"# Network is down #
@d macro enetreset =
macro err dummy;
INT enetreset = ALIEN "ENETRESET" "/**/"	# Network dropped connection because of reset #
@d macro enetunreach =
macro err dummy;
INT enetunreach = ALIEN "ENETUNREACH" "/**/"	# Network is unreachable #
@d macro enfile =
macro err dummy;
INT enfile = ALIEN "ENFILE" "/**/"	   # File table overflow #
@d macro enoano =
macro err dummy;
INT enoano = ALIEN "ENOANO" "/**/"	   # No anode #
@d macro enobufs =
macro err dummy;
INT enobufs = ALIEN "ENOBUFS" "/**/"	# No buffer space available #
@d macro enocsi =
macro err dummy;
INT enocsi = ALIEN "ENOCSI" "/**/"	   # No CSI structure available #
@d macro enodata =
macro err dummy;
INT enodata = ALIEN "ENODATA" "/**/"	# No data available #
@d macro enodev =
macro err dummy;
INT enodev = ALIEN "ENODEV" "/**/"	   # No such device #
@d macro enoent =
macro err dummy;
INT enoent = ALIEN "ENOENT" "/**/"	   # No such file or directory #
@d macro enoexec =
macro err dummy;
INT enoexec = ALIEN "ENOEXEC" "/**/"	# Exec format error #
@d macro enolck =
macro err dummy;
INT enolck = ALIEN "ENOLCK" "/**/"	   # No record locks available #
@d macro enolink =
macro err dummy;
INT enolink = ALIEN "ENOLINK" "/**/"	# Link has been severed #
@d macro enomedium =
macro err dummy;
INT enomedium = ALIEN "ENOMEDIUM" "/**/"	# No medium found #
@d macro enomem =
macro err dummy;
INT enomem = ALIEN "ENOMEM" "/**/"	   # Out of memory #
@d macro enomsg =
macro err dummy;
INT enomsg = ALIEN "ENOMSG" "/**/"	   # No message of desired type #
@d macro enonet =
macro err dummy;
INT enonet = ALIEN "ENONET" "/**/"	   # Machine is not on the network #
@d macro enopkg =
macro err dummy;
INT enopkg = ALIEN "ENOPKG" "/**/"	   # Package not installed #
@d macro enoprotoopt =
macro err dummy;
INT enoprotoopt = ALIEN "ENOPROTOOPT" "/**/"	# Protocol not available #
@d macro enospc =
macro err dummy;
INT enospc = ALIEN "ENOSPC" "/**/"	   # No space left on device #
@d macro enosr =
macro err dummy;
INT enosr = ALIEN "ENOSR" "/**/"	   # Out of streams resources #
@d macro enostr =
macro err dummy;
INT enostr = ALIEN "ENOSTR" "/**/"	   # Device not a stream #
@d macro enosys =
macro err dummy;
INT enosys = ALIEN "ENOSYS" "/**/"	   # Function not implemented #
@d macro enotblk =
macro err dummy;
INT enotblk = ALIEN "ENOTBLK" "/**/"	# Block device required #
@d macro enotconn =
macro err dummy;
INT enotconn = ALIEN "ENOTCONN" "/**/"# Transport endpoint is not connected #
@d macro enotdir =
macro err dummy;
INT enotdir = ALIEN "ENOTDIR" "/**/"	# Not a directory #
@d macro enotempty =
macro err dummy;
INT enotempty = ALIEN "ENOTEMPTY" "/**/"	# Directory not empty #
@d macro enotnam =
macro err dummy;
INT enotnam = ALIEN "ENOTNAM" "/**/"	# Not a XENIX named type file #
@d macro enotsock =
macro err dummy;
INT enotsock = ALIEN "ENOTSOCK" "/**/"# Socket operation on non-socket #
@d macro enotty =
macro err dummy;
INT enotty = ALIEN "ENOTTY" "/**/"	   # Not a typewriter #
@d macro enotuniq =
macro err dummy;
INT enotuniq = ALIEN "ENOTUNIQ" "/**/"# Name not unique on network #
@d macro enxio =
macro err dummy;
INT enxio = ALIEN "ENXIO" "/**/"	   # No such device or address #
@d macro eopnotsupp =
macro err dummy;
INT eopnotsupp = ALIEN "EOPNOTSUPP" "/**/"	# Operation not supported on transport endpoint #
@d macro eoverflow =
macro err dummy;
INT eoverflow = ALIEN "EOVERFLOW" "/**/"	# Value too large for defined data type #
@d macro eperm =
macro err dummy;
INT eperm = ALIEN "EPERM" "/**/"	# Operation not permitted #
@d macro epfnosupport =
macro err dummy;
INT epfnosupport = ALIEN "EPFNOSUPPORT" "/**/"	# Protocol family not supported #
@d macro epipe =
macro err dummy;
INT epipe = ALIEN "EPIPE" "/**/"	   # Broken pipe #
@d macro eproto =
macro err dummy;
INT eproto = ALIEN "EPROTO" "/**/"	   # Protocol error #
@d macro eprotonosupport =
macro err dummy;
INT eprotonosupport = ALIEN "EPROTONOSUPPORT" "/**/"	# Protocol not supported #
@d macro eprototype =
macro err dummy;
INT eprototype = ALIEN "EPROTOTYPE" "/**/"	# Protocol wrong type for socket #
@d macro erange =
macro err dummy;
INT erange = ALIEN "ERANGE" "/**/"	   # Math result not representable #
@d macro eremchg =
macro err dummy;
INT eremchg = ALIEN "EREMCHG" "/**/"	# Remote address changed #
@d macro eremote =
macro err dummy;
INT eremote = ALIEN "EREMOTE" "/**/"	# Object is remote #
@d macro eremoteio =
macro err dummy;
INT eremoteio = ALIEN "EREMOTEIO" "/**/"	# Remote I/O error #
@d macro erestart =
macro err dummy;
INT erestart = ALIEN "ERESTART" "/**/"# Interrupted system call should be restarted #
@d macro erofs =
macro err dummy;
INT erofs = ALIEN "EROFS" "/**/"	   # Read-only file system #
@d macro eshutdown =
macro err dummy;
INT eshutdown = ALIEN "ESHUTDOWN" "/**/"	# Cannot send after transport endpoint shutdown #
@d macro esocktnosupport =
macro err dummy;
INT esocktnosupport = ALIEN "ESOCKTNOSUPPORT" "/**/"	# Socket type not supported #
@d macro espipe =
macro err dummy;
INT espipe = ALIEN "ESPIPE" "/**/"	   # Illegal seek #
@d macro esrch =
macro err dummy;
INT esrch = ALIEN "ESRCH" "/**/"	      # No such process #
@d macro esrmnt =
macro err dummy;
INT esrmnt = ALIEN "ESRMNT" "/**/"	   # Srmount error #
@d macro estale =
macro err dummy;
INT estale = ALIEN "ESTALE" "/**/"	   # Stale NFS file handle #
@d macro estrpipe =
macro err dummy;
INT estrpipe = ALIEN "ESTRPIPE" "/**/"# Streams pipe error #
@d macro etime =
macro err dummy;
INT etime = ALIEN "ETIME" "/**/"	      # Timer expired #
@d macro etimedout =
macro err dummy;
INT etimedout = ALIEN "ETIMEDOUT" "/**/"	# Connection timed out #
@d macro etoomanyrefs =
macro err dummy;
INT etoomanyrefs = ALIEN "ETOOMANYREFS" "/**/"	# Too many references: cannot splice #
@d macro etxtbsy =
macro err dummy;
INT etxtbsy = ALIEN "ETXTBSY" "/**/"	# Text file busy #
@d macro euclean =
macro err dummy;
INT euclean = ALIEN "EUCLEAN" "/**/"	# Structure needs cleaning #
@d macro eunatch =
macro err dummy;
INT eunatch = ALIEN "EUNATCH" "/**/"	# Protocol driver not attached #
@d macro eusers =
macro err dummy;
INT eusers = ALIEN "EUSERS" "/**/"	   # Too many users #
@d macro ewouldblock =
macro err dummy;
INT ewouldblock = ALIEN "EAGAIN" "/**/" # Operation would block #
@d macro exdev =
macro err dummy;
INT exdev = ALIEN "EXDEV" "/**/"	      # Cross-device link #
@d macro exfull =
macro err dummy;
INT exfull = ALIEN "EXFULL" "/**/"	   # Exchange full #

@ End of syserr.w
