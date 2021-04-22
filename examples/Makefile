#!/usr/bin/make
#
# $Id: Makefile,v 1.2 2002-06-20 11:49:28 sian Exp $
#
#------------ Algol 68 sources -------------
examples_a := Abundant_odd_numbers.a68 client1.a68 client2.a68 server1.a68 server2.a68 \
        testexit.a68 testov.a68 \
        tt1.a68 tt1data.a68 tt2.a68 tt2.data tt3.a68

all : $(examples_a)

clean :
	-rm -f *.c *.o Abundant_numbers server1 server2 client1 client2 testexit testov tt1 tt1data tt2 tt3
	
install :
	$(INSTALLDATA) -p $(examples_a) $(DOCDIR)/examples
