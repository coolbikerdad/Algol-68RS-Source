# Algol-68RS-for-Linux
The Algol-68RS Compiler in its Ctrans form (a68toc) for Linux 32-bit/64-bit on Intel and ARM 

Algol-68RS Build Notes for Debian Linux and derivatives
-------------------------------------------------------

Installation dependencies and packages that provide them: 

fakeroot: fakeroot
make: make
ld, ar, ranlib: binutils
gcc: gcc
makeinfo, texindex: texinfo
tex, texindex: texlive
latex: texlive-latex-base
install-info: install-info
dpkg-buildpackage: dpkg-dev debhelper
libc6-dev: linux-libc-dev
info: info
ldconfig, cp, mv, rm, find, sh, tar: <installed by default>

Install these original dependencies:

$ sudo apt install fakeroot make binutils gcc texinfo texlive texlive-latex-base install-info dpkg-dev debhelper linux-libc-dev info

To build, run

$ export A68_NAMESEED=nameseed
$ make dist-clean
$ make

This will make a first-stage algol68toc from already-translated .c files.
To build a self-hosted compiler, use the first-stage compiler to translate the .a68 source files to new .c files

$ make Translate

Build a second-stage compiler from the .c files made from the first-stage compiler

$ make dist-clean
$ make

The resulting algol68toc is a compiler built with sources it made for itself.
For absolute assurance of self-hosting, you can translate and re-build again and verify output files are identical.

To read generated documentation a dvi reader is needed, such as xdvi, installed with texlive

Install the resulting complier, examples, documentation, utilities and libraries.

$ sudo make install

This will install the following:

/usr/share/algol68toc/
    Afirst.o
    a68config.m
		standard.m
		Algol68.mk
/usr/share/doc/algol68toc/
    rscompiler.dvi.gz
    ctrans.dvi.gz
		compl.taylour
		star.txt
		pame/*
		lf.a68
		test.lf
		algol68.ssh
		sheets.entry
	  examples/*
    Programming Algol 68 Made Easy.pdf
    The RS Compiler for ALGOL 68.pdf
/usr/share/info/ctrans.info.gz
/usr/share/man/man1/a68toc.1.gz
                    ca.1.gz
		                resetseed.1.gz
/usr/share/applications/a68toc.desktop
/usr/include/algol68/*
/usr/lib/liba68.a
         liba68s.a
/usr/bin/a68toc
         resetseed
	       ca

Compile a test program with

$ cd examples
$ ca Abundant_odd_numbers.a68
$ ./Abundant_odd_numbers

Building a Debian package

$ dpkg-buildpackage -F


NOTE
----
The example programs server{1,2} and client{1,2} that communicate using sockets do not curently work,
either in the original i386 build or the 32-bit on am64 build. I haven't figured this out yet.

Neil Matthew
