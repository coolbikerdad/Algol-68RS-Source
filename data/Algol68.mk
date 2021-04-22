#!/bin/make
# $Id: Algol68.mk,v 1.2 2002-06-06 12:46:19 sian Exp $
#
# Other make variables used:-
# CFLAGS, INCLUDES, LIBRARIES
#
A68=a68toc
#
# The Algol 68 development system has some special C headers in the
# following directory.
#
A68_INC=/usr/include/algol68
#
# Two libraries are available for the Algol 68 development
# system: one for the standard prelude, one for the run-time system.
#
A68_LIBS=-la68s -la68
#
# The following directory contains Afirst.o and a68config.m
#
A68_ROOT=/usr/share/algol68toc
#
# A68_DIRS should be a list of directories where module info files (.m)
# can be found in the reverse search order (last will be the first).
#
A68_DIRS=-dir $(A68_ROOT) -dir .
#
# A68_PREL should contain the directories and libraries of pre-compiled
# Algol 68 modules. It is suggested that you store them in `ar'
# archives such as libsysa68.a.
#   eg) A68_PREL=-L ../Preludes -lsysa68
#
A68_PREL=
#
# A68_SKIP should be set to `-skip' if you want to suppress the error
# message produced when a non-VOID case is selected for the OUT part of
# a CASE ... ESAC clause.
#
A68_SKIP=
#
# This should be changed if you want different STARFLAGS
#
A68_STARFLAGS=1234ABCD
#
# By default, the nameseed comes from a file so that it can be
# updated for compilations of sets of modules.
#
A68_UNAMESEED=-uname $(shell cat nameseed)
#
# The `-s' ensures that SHORT SHORT will be accepted by the compiler.
# You will need this for the QAD standard prelude.
# The `-v' ensures that Algol 68 source lines will appear in the
# generated C source code.
#
A68_FLAGS=-s -v
#

GCC=gcc

%.a68: %.w68
	web68 $<

%.c: %.a68
	$(A68) $(A68_FLAGS) -staredit $(A68_STARFLAGS) -lib $(A68_ROOT) $(A68_SKIP) $(A68_DIRS) $(A68_UNAMESEED) $<

%.o: %.a68
	$(A68) $(A68_FLAGS) -staredit $(A68_STARFLAGS) -lib $(A68_ROOT) $(A68_SKIP) $(A68_DIRS) $(A68_UNAMESEED) $<
	$(GCC) $(DCFLAGS) -DA68_CHECK -I$(A68_INC) $(INCLUDES) -o $@ -c $(basename $(notdir $<)).c

%: %.a68
	$(A68) $(A68_FLAGS) -staredit $(A68_STARFLAGS) -lib $(A68_ROOT) $(A68_SKIP) $(A68_DIRS) $(A68_UNAMESEED) $<
	$(GCC) -c $(DCFLAGS) -DA68_CHECK -I$(A68_INC) $(INCLUDES) -o $(basename $(notdir $<)).o $(basename $(notdir $<)).c
	$(GCC) -o $@ $(A68_ROOT)/Afirst.o $(basename $(notdir $<)).o $(A68_PREL) $(A68_LIBS) $(DLIBRARIES) -lm -lc
