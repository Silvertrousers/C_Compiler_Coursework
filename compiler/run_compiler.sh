#!/bin/bash
 make clean
 make
# echo "=============================="
# (./bin/compiler < ./$1.c) > ./$1.s
# mips-linux-gnu-gcc -mfp32 -o $1.o -c $1.s
# mips-linux-gnu-gcc -mfp32 -static -o $1 $1.o $1_driver.c
# qemu-mips $1
# echo $1 ": " $?
#cat ./$1.s
# echo "=============================="
# a="./compiler_tests/array/declare_global"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/array/declare_local"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/array/index_constant"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/array/index_expression"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/array/index_variable"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# echo "=============================="
# echo "=============================="
a="./compiler_tests/control_flow/for_multiple"
(./bin/compiler < $a.c) > $a.s
echo "1"
mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
echo "2"
mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
echo "3"
qemu-mips $a
echo $a ": " $?
echo "=============================="
# a="./compiler_tests/control_flow/for_one"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/control_flow/for_zero_v1"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/control_flow/for_zero_v2"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/control_flow/if_else_false"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/control_flow/if_else_true"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/control_flow/if_false"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/control_flow/if_true"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/control_flow/sequence"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/control_flow/while_multiple"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/control_flow/while_once"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/control_flow/while_zero"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# echo "=============================="
# echo "=============================="
# a="./compiler_tests/default/test_ADD0"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/default/test_ADD1"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/default/test_CALL"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/default/test_LOCAL"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/default/test_RETURN"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# echo "=============================="
# echo "=============================="
# a="./compiler_tests/integer/add"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/integer/bitwise_and"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/integer/bitwise_or"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/integer/bitwise_xor"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/integer/div"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/integer/equal"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/integer/less_than"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/integer/logical_and"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/integer/logical_or"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/integer/mul"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
# a="./compiler_tests/integer/sub"
# (./bin/compiler < $a.c) > $a.s
# mips-linux-gnu-gcc -mfp32 -o $a.o -c $a.s
# mips-linux-gnu-gcc -mfp32 -static -o $a $a.o $a"_driver".c
# qemu-mips $a
# echo $a ": " $?
# echo "=============================="
