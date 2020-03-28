#!/bin/bash
make clean
make
passed=0
echo "============================"
a=tests/f00
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f01
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f02
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f03
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f04
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f05
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f06
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f07
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f08
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f09
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f10
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f11
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f12
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f13
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f14
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f15
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f16
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f17
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f18
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f19
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f20
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f21
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f22
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f23
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f24
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f25
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f26
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f27
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f28
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
a=tests/f29
(./bin/c_translator < ./$a.c) > ./$a.py
python3 ./$a.py
echo $?
g++ -o  $a ./$a.c
./$a
echo $?
echo "============================"
