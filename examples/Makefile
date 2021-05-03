#!/usr/bin/make
#
# $Id: Makefile,v 1.2 2002-06-20 11:49:28 sian Exp $
#
#------------ Algol 68 sources -------------
examples_a := client1.a68 client2.a68 server1.a68 server2.a68 \
              testexit.a68 testov.a68 \
              tt1.a68 tt1data.a68 tt2.a68 tt3.a68 \
	      \
              Abundant_odd_numbers.a68 \
              conform.a68 \
              trivial.a68

examples_c := $(patsubst %.a68,%.c,$(examples_a))
examples_o := $(patsubst %.a68,%.o,$(examples_a))
examples   := $(patsubst %.a68,%,$(examples_a))

all : $(examples_a)

install : clean
	$(INSTALLDATA) -p $(examples_a) $(DOCDIR)/examples
	$(INSTALLDATA) -p logic/* $(DOCDIR)/examples/logic
	$(INSTALLDATA) -p tests/* $(DOCDIR)/examples/tests

clean :
	-$(RM) $(examples_c) $(examples_o) $(examples)
