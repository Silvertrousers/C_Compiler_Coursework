#!/bin/bash
#make clean
#make
#(./bin/compiler < ./$1.c) > ./$1.s
mips-linux-gnu-gcc -mfp32 -o $1.o -c $1.s
mips-linux-gnu-gcc -mfp32 -static -o $1 $1.o $1_driver.c
qemu-mips $1
echo $?
