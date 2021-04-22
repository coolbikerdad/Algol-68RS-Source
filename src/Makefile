#!/usr/bin/make
#
# $Id: Makefile,v 1.2 2002-02-23 17:50:44 sian Exp $
#------------ Algol 68 sources -------------
a68toc_a:=incid.a68 incimperatives.a68 incinstallation.a68 \
        incmode.a68 incoperfn.a68 incenviron.a68 ctrans_version.a68 \
        centities.a68 rscompiler.a68 moduletracer.a68 message.a68 \
        environment.a68 common.a68 incvalue.a68 denotations.a68 \
        lookup.a68 idtable.a68 liblookup.a68 environ.a68 coutput.a68 \
        uniquenameserver.a68 modes.a68 modules.a68 values.a68 \
        oper.a68 unionaids.a68 evalbase.a68 operators.a68 biops.a68 \
        adicops.a68 evaluator.a68 identifiers.a68 mnemonics.a68 \
        entryandreturn.a68 tracer.a68 clauses.a68 initialiser.a68 \
        loads.a68 loops.a68 compiler.a68

#------------ Derived file sets -------------
# a68toc
a68toc_c := $(patsubst %.a68,%.c,$(a68toc_a))
a68toc_o := $(patsubst %.a68,%.o,$(a68toc_a))

include $(TOP)/Algol68.mk

A68_DIRS=-dir $(A68_ROOT) -dir $(LPD) -dir .
A68_LIBS=-L$(LPD) -la68prel -L$(LBD) -la68

#------------ Rules --------------
.PHONY : install clean

all : a68toc

a68toc : $(LBD)/Afirst.o $(ACD)/a68config.o a68toc.o \
         $(a68toc_o) $(LPD)/liba68prel.a $(LBD)/liba68.a
	$(CC) -o $@ $< a68toc.o $(a68toc_o) $(A68_LIBS) -lm -lc

Translate : $(a68toc_c) a68toc.c

install :
	$(INSTALLPROG) -p -s a68toc $(BINDIR)

clean :
	$(RM) -v $(a68toc_o) a68toc.o a68toc
