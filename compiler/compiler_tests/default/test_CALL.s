f:
.globl f
f:
table: 0
stack_pointer: 20
var_pointer: 8
temp1: int: 0:4
temp2: int: 0:8
----------------
table: 1
stack_pointer: 0
var_pointer: 20
temp1: int: 0:4
temp2: int: 0:8
return_address: int: 0:12
g: function: :16
f: function: :20
----------------
addi $sp, $gp, 20
lw $a0, 4($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $sp, $gp, 20
lw $a0, 8($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $sp, $gp, 20
sw $ra, 12($sp)
nop
jal g
nop
addi $sp, $gp, 20
lw $ra, 12($sp)
nop
addi $sp, $gp, 20
sw $2, 4($sp)
nop
addi $sp, $gp, 20
lw $2, 4($sp)
nop
jr $ra
nop
