f:
.globl f
f:
table: 0
stack_pointer: 16
var_pointer: 8
temp1: int: 0:4
temp2: int: 0:8
----------------
table: 1
stack_pointer: 0
var_pointer: 16
temp1: int: 0:4
temp2: int: 0:8
return_address: int: 0:12
f: function: :16
----------------
addi $sp, $gp, 16
lw $a0, 4($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $sp, $gp, 16
lw $a0, 8($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $sp, $gp, 16
lw $t0, 32560($sp)
nop
lw $t1, 32560($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $2, 4($sp)
nop
jr $ra
nop
