./bin/c_compiler -S $1.c -o $1.s
gcc $1.c -o $1
./$1
echo "GCC compiled C: " $?
mips-linux-gnu-gcc -mfp32 -o test_program.o -c test_program.s
