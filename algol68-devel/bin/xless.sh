#!/bin/bash

NUMS=$2
BASE=$(basename $1)
GZBASE=$(basename $1 .gz)
BZ2BASE=$(basename $1 .bz2)
TARGZBASE=$(basename $1 .tar.gz)
TARBZ2BASE=$(basename $1 .tar.bz2)
TGZBASE=$(basename $1 .tgz)
ZIPBASE=$(basename $1 .zip)
TMPFILE=/tmp/Lister.$$
XLESS="xless -fn 7x14 -title \"$1\""

prless()
{
  pr -tn ${TMPFILE} |xless -fn 7x14
}

if [ "${BASE}" != "${TGZBASE}" ]
then
  tar tzvf $1 >${TMPFILE}
  if [ "${NUMS}" == "With" ]; then prless; else ${XLESS} ${TMPFILE}; fi
elif [ "${BASE}" != "${TARBZ2BASE}" ]
then
  bzip2 -dc $1 |tar tvf - >${TMPFILE}
  if [ "${NUMS}" == "With" ]; then prless; else ${XLESS} ${TMPFILE}; fi
elif [ "${BASE}" != "${TARGZBASE}" ]
then
  tar tzvf $1 >${TMPFILE}
  if [ "${NUMS}" == "With" ]; then prless; else ${XLESS} ${TMPFILE}; fi
elif [ "${BASE}" != "${GZBASE}" ]
then
  gzip -dc $1 >${TMPFILE}
  if [ "${NUMS}" == "With" ]; then prless; else ${XLESS} ${TMPFILE}; fi
elif [ "${BASE}" != "${BZ2BASE}" ]
then
  bzip2 -dc $1 >${TMPFILE}
  if [ "${NUMS}" == "With" ]; then prless; else ${XLESS} ${TMPFILE}; fi
elif [ "${BASE}" != "${ZIPBASE}" ]
then
  unzip -l $1 >${TMPFILE}
  if [ "${NUMS}" == "With" ]; then prless; else ${XLESS} ${TMPFILE}; fi
else
  cp $1 ${TMPFILE}
  if [ "${NUMS}" == "With" ]; then prless; else ${XLESS} ${TMPFILE}; fi
fi

rm -f ${TMPFILE}
# end of xless.sh
