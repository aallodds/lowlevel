mkdir -p bin
rm -f bin/lol_endian
rm -f bin/lol_datamodel
clang -std=c99 ./lol_endian.c -o bin/lol_endian
clang -std=c99 ./lol_datamodel.c -o bin/lol_datamodel