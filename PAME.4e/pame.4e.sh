#!/bin/bash

cat pame.sed >pame.sed2
grep "Warning" pame.4e.ilg|cut -d= -f5|cut -d')' -f1|sed -e 's/$/d/' >>pame.sed2
sed -f pame.sed2 pame.4e.index >pame.4e.ind
rm -f pame.sed2
