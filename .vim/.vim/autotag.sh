#!/bin/sh
find . -name "*.h" -o -name "*.c"-o -name "*.cc" > cscope.files
mlcscope -bkq -i cscope.files
ctags -R *
# generate tag file for lookupfile plugin
echo -e "!_TAG_FILE_SORTED\t2\t/2=foldcase/" > filenametags
find . -not -regex '.*\.\(png\|gif\)' -type f -printf "%f\t%p\t1\n" | sort -f >> filenametags