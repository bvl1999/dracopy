#!/bin/sh
# build all color schemes of dracopy.
# build versions with REU support.
# cp all builds into DESTDIR

DESTDIR=../doj/c64

set -e

# color schemes
for i in BLUE SX 128 ; do
    make clean
    CFLAGS=-DCOLOR_SCHEME_$i make zip
    mv dracopy-1.0doj.zip $DESTDIR/dracopy-1.0doj-$i.zip
done

# REU versions
make clean
CFLAGS=-DKERBEROS make dc64.zip
mv dc64.zip $DESTDIR/dracopy-1.0doj-kerberos.zip

make clean
REU=c64-reu.emd make dc64.zip
mv dc64.zip $DESTDIR/dracopy-1.0doj-reu.zip

# build the default version
make clean
make zip
mv dracopy-1.0doj.zip $DESTDIR/
make clean
