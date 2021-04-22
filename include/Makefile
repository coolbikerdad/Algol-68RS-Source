#!/usr/bin/make
#
# $Id: Makefile,v 1.2 2002-02-23 17:50:43 sian Exp $
#
#--------------------Sources--------------------
algol68_inc := algol68/Aalloc.h algol68/Aassign.h algol68/Acoerce.h \
               algol68/Aconfig.h algol68/Aindex.h algol68/Alibrary.h \
	       algol68/Amacros.h algol68/Astrings.h algol68/Asupport.h \
	       algol68/Atypes.h

linux_inc := algol68/linux/Ahhostgc.h algol68/linux/Ahostenv.h \
             algol68/linux/Ahswitch.h


.PHONY: install

all : $(algol68_inc) $(linux_inc)
	echo "Nothing to be done for include"

install :
	$(INSTALLDATA) -p $(algol68_inc) $(INCDIR)
	$(INSTALLDATA) -p $(linux_inc) $(INCDIR)/linux

