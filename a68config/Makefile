#!/usr/bin/make
#
# $Id: Makefile,v 1.1 2002-02-19 11:40:11 sian Exp $
#
#------------ Algol 68 sources -------------
a68config_a:=a68config.a68

#------------ Derived file sets -------------
a68config_c:=a68config.c
a68config_o:=a68config.o

include $(TOP)/Algol68.mk

#-------------- Rules --------------
.PHONY : install clean

all : $(a68config_o)

Translate : $(a68config_c)

install :
	$(INSTALLDATA) -p a68config.m $(PKGDIR)

clean :
	-$(RM) -v a68config.o nameseed

