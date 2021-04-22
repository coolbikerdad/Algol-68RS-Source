#!/usr/bin/make
#
# $Id: Makefile,v 1.2 2012/01/04 17:20:55 sian Exp $
#-------------- Algol 68 sources ---------------
qad_a := spmodes.a68 spaliens.a68 spops.a68 spplain.a68 \
        spconvert.a68 transput.a68 standard.a68

#-------------- Derived file sets --------------
# QAD standard prelude
qad_c := $(patsubst %.a68,%.c,$(qad_a))
qad_o := $(patsubst %.a68,%.o,$(qad_a))

include $(TOP)/Algol68.mk

.PHONY: clean install

all : liba68s.a nameseed

liba68s.a : $(ACD)/a68config.o $(qad_o)
	ar rv $@ $^
	ranlib $@

nameseed : rctr
	cp rctr nameseed

Translate : remove nameseed $(qad_c)

clean :
	$(RM) -v nameseed $(qad_c) $(qad_o) *.m liba68s.a

remove : clean

install :
	$(INSTALLDATA) -p liba68s.a $(LIBDIR)
	$(INSTALLDATA) -p standard.m $(PKGDIR)
