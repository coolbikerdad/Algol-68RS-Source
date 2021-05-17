#!/usr/bin/make
#
#-------------- Documentation sources ---------------

pame_tex := pame.4e.tex title.tex preface.tex preface.4e.tex \
        chapter1.tex chapter2.tex chapter3.tex chapter4.tex \
        chapter5.tex chapter6.tex chapter7.tex chapter8.tex \
        chapter9.tex chapter10.tex chapter11.tex chapter12.tex \
        chapter13.tex bibliography.tex index.see.tex pame.sed pame.4e.sty \
        ch11-1.epic ch11-2.epic ch11-3.epic ch11-4.epic \
        ch11-5.epic ch11-6.epic ch11-7.epic ch11-8.epic \
        ch11-9.epic ch11-10.epic

#--------------- Rules ---------------
.PHONY: install

all : pame.4e.dvi pame.4e.pdf

clean :
	-rm pame.4e.index pame.4e.ilg pame.4e.ind pame.4e.log pame.4e.ans pame.4e.aux pame.4e.toc \
	    pame.4e.out pame.4e.idx latex.log *~

dist-clean : clean
	-rm pame.4e.dvi pame.4e.pdf

pame.4e.pdf : pame.4e.dvi
	dvipdfm pame.4e

pame.4e.dvi : $(pame_tex)
	chmod +x pame.4e.sh
	latex pame.4e >latex.log
	latex pame.4e >>latex.log
	makeindex -o pame.4e.index -s pame.ist pame.4e.idx
	./pame.4e.sh
	latex pame.4e >>latex.log
	latex pame.4e >>latex.log
