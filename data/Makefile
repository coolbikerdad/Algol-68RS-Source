#!/usr/bin/make
#
#------------ Algol 68 sources -------------
data_f := lf.a68 test.lf algol68.ssh sheets.entry
algol_make := Algol68.mk

#------------ Rules ---------------
.PHONY : install

all : $(data_f) $(algol_make)

install :
	$(INSTALLDATA) -p $(data_f) $(DOCDIR)
	$(INSTALLDATA) -p $(algol_make) $(PKGDIR)

