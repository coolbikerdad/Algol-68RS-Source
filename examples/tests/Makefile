# A rough generic Makefile for Algol 68 projects with modules.
#
# You must supply these:
#
# PROGRAM = name of main program (without .a68 extention)
# MODULES = name of DECS modules (without .a68 extention)
# LIBRARY = name of library that MODULES will be compiled into
# SUPPORT = any extra files that this build will need
#
# Targets:
#
# make test  = build and test the program
# make clean = delete program executable and temporary files
# make dist = pack all source files into PROGRAM.tar.gz

.PHONY: test clean dist 

PROGRAM=tests
MODULES=bytes printf utf8
LIBRARY=utils
SUPPORT=Makefile nameseed expected-output.txt emacsfilter.py


$(PROGRAM) : $(PROGRAM).a68 $(SUPPORT) lib/lib$(LIBRARY).a 
	A68_NAMESEED=nameseed ca -d lib/m -L lib $(PROGRAM) -l$(LIBRARY) 2>&1 | python3 emacsfilter.py

lib/lib$(LIBRARY).a :  $(SUPPORT) $(MODULES:=.o)

%.o : %.a68 nameseed
	mkdir -p lib/m
	A68_NAMESEED=nameseed  ca -M lib -m $(LIBRARY) -d lib/m $< 2>&1 | python3 emacsfilter.py

test : clean $(PROGRAM)
	./$(PROGRAM) > actual-output.tmp
	diff expected-output.txt actual-output.tmp

clean :
	rm -f actual-output.tmp
	rm -f $(PROGRAM)
	rm -f $(PROGRAM).c $(PROGRAM).o
	rm -f $(MODULES:=.c) $(MODULES:=.o)
	rm -rf lib
	rm -f $(PROGRAM).tar.gz

dist :
	rm -f utf8.tar.gz
	tar --create \
            --gzip \
            --no-recursion \
            --transform "s|^|$(PROGRAM)/|" \
            --file $(PROGRAM).tar.gz \
            $(PROGRAM).a68 $(MODULES:=.a68) $(SUPPORT)
