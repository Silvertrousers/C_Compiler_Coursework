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
addi $t2, $zero, 20
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t2, 4($sp)
nop
sw $t2, 12($sp)
nop
addi $t2, $zero, 10
addi $sp, $gp, 32
sw $t2, 4($sp)
nop
addi $sp, $gp, 32
lw $t0, 12($sp)
nop
lw $t1, 4($sp)
nop
SLT $t2, $t0, $t1
nop
xori $t2, $t2, 1
addi $sp, $gp, 32
sw $t2, 4($sp)
nop
temp1start1:
addi $t2, $zero, 10
addi $sp, $gp, 32
sw $t2, 8($sp)
nop
addi $sp, $gp, 32
lw $t0, 12($sp)
nop
lw $t1, 8($sp)
nop
SLT $t2, $t0, $t1
nop
xori $t2, $t2, 1
addi $sp, $gp, 32
sw $t2, 8($sp)
nop
addi $sp, $zero, 16
lw $t0, 8($sp)
nop
beq $t0, $zero, end1
nop
addi $t2, $zero, 1
addi $sp, $gp, 32
lw $t0, 12($sp)
nop
lw $t1, 32551($sp)
nop
sub $t2, $t0, $t1
nop
addi $sp, $gp, 32
lw $t2, 32551($sp)
nop
sw $t2, 12($sp)
nop
end1:
addi $sp, $gp, 16
lw $2, 12($sp)
nop
jr $ra
nop
