f:
.globl f
f:
table: 0
stack_pointer: 48
var_pointer: 8
temp1: int: 0:4
temp2: int: 0:8
----------------
table: 1
stack_pointer: 0
var_pointer: 48
temp1: int: 0:4
temp2: int: 0:8
return_address: int: 0:12
x_index_0: int array: :16
x_index_1: int array: :20
x_index_2: int array: :24
x_index_3: int array: :28
x_index_4: int array: :32
x_index_5: int array: :36
x_index_6: int array: :40
x_index_7: int array: :44
f: function: :48
----------------
addi $sp, $gp, 48
lw $a0, 4($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $sp, $gp, 48
lw $a0, 8($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $t2, $zero, 11
addi $sp, $gp, 48
sw $t2, 4($sp)
nop
addi $sp, $gp, 48
lw $2, 4($sp)
nop
jr $ra
nop
