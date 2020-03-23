#!/bin/bash
#make clean
#make
echo "=============================="
(./bin/compiler < ./$1.c) > ./$1.s
mips-linux-gnu-gcc -mfp32 -o $1.o -c $1.s
mips-linux-gnu-gcc -mfp32 -static -o $1 $1.o $1_driver.c
qemu-mips $1
echo $1 ": " $?
echo "=============================="
a="./compiler_tests/array/declare_global"
(./bin/compiler < $a.c) > $a.s
mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
qemu-mips $a
echo $a ": " $?
echo "=============================="
a="./compiler_tests/array/declare_local"
(./bin/compiler < $a.c) > $a.s
mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
qemu-mips $a
echo $a ": " $?
echo "=============================="
a="./compiler_tests/array/index_constant"
(./bin/compiler < $a.c) > $a.s
mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
qemu-mips $a
echo $a ": " $?
echo "=============================="
a="./compiler_tests/array/index_expression"
(./bin/compiler < $a.c) > $a.s
mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
qemu-mips $a
echo $a ": " $?
echo "=============================="
a="./compiler_tests/array/index_variable"
(./bin/compiler < $a.c) > $a.s
mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
qemu-mips $a
echo $a ": " $?
echo "=============================="
