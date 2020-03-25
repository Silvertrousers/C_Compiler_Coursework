f:
.globl f
f:
addi $sp, $gp, 0
lw $a0, 4($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $t2, $zero, 0
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
lw $t2, 4($sp)
nop
sw $t2, 16($sp)
nop
start1:
addi $t2, $zero, 0
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 36
lw $t1, 4($sp)
nop
slt $t2, $t0, $t1
nop
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $zero, 16
lw $t0, 4($sp)
nop
beq $t0, $zero, end1
nop
addi $t2, $zero, 1
addi $sp, $gp, 36
sw $t2, 8($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 36
lw $t1, 8($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 16
sw $t2, 8($sp)
nop
addi $sp, $gp, 36
lw $t2, 8($sp)
nop
sw $t2, 16($sp)
nop
addi $t2, $zero, 1
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
lw $2, 4($sp)
nop
jr $ra
nop
beq $zero, $zero, start1
nop
end1:
addi $t2, $zero, 19937
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $2, 4($sp)
nop
jr $ra
nop
