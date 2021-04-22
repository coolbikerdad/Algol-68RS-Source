#!/usr/bin/make
#
# $Id: Makefile,v 1.1 2002-06-06 13:55:55 sian Exp $
#-------------- Algol 68 sources ---------------
mm_a := mm_actions.a68 mm_basics.a68 mm_oscommands.a68 mm_utilities.a68 \
        mm_version.a68 unixcomplink.a68 module_manage.a68

#-------------- Derived file sets --------------
mm_c := $(patsubst %.a68,%.c,$(mm_a))
mm_o := $(patsubst %.a68,%.o,$(mm_a))

include $(TOP)/Algol68.mk

.PHONY: clean install

all : mm.bin

mm.bin : $(ACD)a68config.o $(mm_o)
	mv mm mm.bin

Translate : remove nameseed $(mm_c)

clean :
	$(RM) -v nameseed $(mm_o)

nameseed : rctr
	cp rctr nameseed

remove : clean
	$(RM) -v $(mm_c)

install :
	$(INSTALLPROG) -p mm.bin $(BINDIR)
