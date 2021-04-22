#!/usr/bin/make
#
#-------------- Documentation sources ---------------
ctrans_doc := compl.taylour star.txt

#--------------- Rules ---------------
.PHONY: install clean

all : rscompiler.dvi.gz ctrans.dvi.gz ctrans.info.gz \
	a68toc.1.gz ca.1.gz resetseed.1.gz a68toc.desktop $(ctrans_doc)

rscompiler.dvi.gz : rscompiler.dvi
	gzip -9 rscompiler.dvi

ctrans.info.gz : ctrans.texi
	makeinfo $<
	gzip -9 ctrans.info

ctrans.dvi.gz : ctrans.dvi
	gzip -9 ctrans.dvi

a68toc.1.gz : a68toc.1
	gzip -9c $< >$@

ca.1.gz : ca.1
	gzip -9c $< >$@

resetseed.1.gz : resetseed.1
	gzip -9c $< >$@

install :
	$(INSTALLDATA) -p rscompiler.dvi.gz ctrans.dvi.gz \
	   compl.taylour star.txt *.pdf $(DOCDIR)
	$(INSTALLDATA) -p ctrans.info.gz $(INFODIR)
	$(INSTALLDATA) -p a68toc.1.gz ca.1.gz resetseed.1.gz $(MANDIR)
	$(INSTALLDATA) -p pame/* $(DOCDIR)/pame
	$(INSTALLDATA) -p a68toc.desktop $(APPDIR)

clean :
	$(RM) *~

realclean:
	$(RM) ctrans.aux ctrans.cp ctrans.cps ctrans.fn ctrans.fns
	$(RM) ctrans.ky ctrans.kys ctrans.log ctrans.pg ctrans.pgs
	$(RM) ctrans.toc ctrans.tp ctrans.tps ctrans.vr ctrans.vrs
	$(RM) *.gz *~
	$(RM) rscompiler.aux rscompiler.cp rscompiler.fn
	$(RM) rscompiler.ky rscompiler.log rscompiler.pg
	$(RM) rscompiler.toc rscompiler.tp rscompiler.vr
