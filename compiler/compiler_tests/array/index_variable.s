.globl f
f:
addi $t2, $zero, 0
addi $sp, $gp, 68
sw $t2, 4($sp)
nop
addi $sp, $gp, 68
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
start1:
addi $t2, $zero, 8
addi $sp, $gp, 68
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 68
lw $t1, 4($sp)
nop
slt $t2, $t0, $t1
nop
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 4($sp)
nop
beq $t0, $zero, end1
nop
addi $sp, $gp, 16
lw $t2, 16($sp)
nop
addi $sp, $gp, 16
sw $t2, 24($sp)
nop
beq $zero, $zero, start1
nop
end1:
addi $t2, $zero, 4
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $2, 36($sp)
nop
jr $ra
nop
