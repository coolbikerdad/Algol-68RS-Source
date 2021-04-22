#!/usr/bin/make
#
# $Id: Makefile,v 1.1 2002-02-19 11:40:12 sian Exp $

# ------------ C source --------------
library_c := Aassign.c Acoerce.c Aerror.c Ah1alloc.c Ahalloc.c \
        Ahcollec.c Ahdebug.c Ahparam.c Ahpolicy.c Ahstats.c Ahsweep.c \
        Ahtrace.c Aindex.c Amath.c Astrings.c

library_h := Ah1alloc.h Ahalloc.h Aharea.h Ahbasic.h Ahbitmap.h \
	Ahcheck.h Ahclr.h Ahdebug.h Ahdesc.h Ahparam.h Ahpolicy.h \
	Ahptr.h Ahseg.h Ahstats.h Ahsweep.h Ahtrace.h

#------------ Derived file sets -------------
#
library_o := $(patsubst %.c,%.o,$(library_c))

#-------------- Rules --------------
.PHONY : clean install

all : Afirst.o liba68.a

liba68.a : $(library_o)
	ar rv $@ $^
	ranlib $@

%.o : %.c
	$(CC) $(NOR) -o $@ -c $<

clean :
	$(RM) -v *.o liba68.a

install :
	$(INSTALLDATA) -p Afirst.o $(PKGDIR)
	$(INSTALLDATA) -p liba68.a $(LIBDIR)
