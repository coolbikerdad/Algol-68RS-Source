#!/usr/bin/make
#
# $Id: Makefile,v 1.2 2002-02-23 17:50:43 sian Exp $
#------------ Algol 68 sources -------------
liba68prel_a := cif.a68 strops.a68 oscommon.a68 usefulops.a68 \
        messageproc.a68 oserrors.a68 osmessages.a68 osgc.a68 \
        osmisc.a68 osfiles.a68 osshell.a68 ossignals.a68 osif.a68 \
	mathslib.a68 numberstr.a68 clear.a68 time.a68 \
        iobasics.a68 putstrings.a68 getstrings.a68 iolib.a68 \
	options.a68 osinterface.a68 commandsyntax.a68 \
        iomessages.a68 commandreader.a68 printissue.a68 \
        variables.a68 testmode.a68 basics.a68 command.a68 \
        kernelreader.a68 ioprocs.a68 commandcaller.a68 globalcommands.a68

#------------ Derived file sets -------------
# Algol68toC prelude
liba68prel_c := $(patsubst %.a68,%.c,$(liba68prel_a))
liba68prel_o := $(patsubst %.a68,%.o,$(liba68prel_a))

include $(TOP)/Algol68.mk

A68_DIRS=-dir $(ACD) -dir $(LPD)

.PHONY : clean install

all : liba68prel.a nameseed

liba68prel.a : $(ACD)/a68config.o $(liba68prel_o)
	ar rv $@ $^
	ranlib $@

nameseed : rctr
	cp rctr nameseed

Translate : $(liba68prel_c)

clean :
	$(RM) -v *.o liba68prel.a nameseed

install :
	echo "Nothing to be done for install"
