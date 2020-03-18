#!/bin/bash

make clean
make
./bin/compiler < int.c > result.s
gcc -pedantic -ansi int.c -o results
./results
qemu-mips results.s
