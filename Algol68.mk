# Algol68toC make include file
#
# Other macros used:
#  A68 A68_LIB A68_NAMESEED CTFLAGS QADFLAGS
#---------------------- Macros --------------------------
# The following directory contains a68config.m
#
A68_ROOT=$(ACD)
#
# A68_DIRS is a list of directories where module info files (.m)
# can be found in reverse search order (the last will be the first searched).
#
A68_DIRS=-dir $(A68_ROOT) -dir .
#
# Different flags are required for the QAD standard prelude
ifeq ($(DEBUG),yes)
	CFLAGS:=-g $(NOR)
else
	CFLAGS:=$(NOR)
endif

ifeq ($(CURDIR),$(QAD))
	A68_FLAGS:=$(QADFLAGS)
else
	A68_FLAGS:=$(CTFLAGS)
endif

#---------------- Rules -----------------
%.c: %.a68
	$(ALGOL) $(A68_FLAGS) -lib $(A68_ROOT) $(A68_DIRS) $<

%.o: %.c
	$(CC) $(CFLAGS) -DA68_CHECK -o $@ -c $<
