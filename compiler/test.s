.globl f
f:
addi $t2, $zero, 0
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 20($sp)
nop
addi $t2, $zero, 0
addi $sp, $gp, 40
sw $t2, 4($sp)
nop
addi $sp, $gp, 40
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
start1:
addi $t2, $zero, 10
addi $sp, $gp, 40
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 40
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
addi $t2, $zero, 1
addi $sp, $gp, 40
sw $t2, 8($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 40
lw $t1, 8($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 40
sw $t2, 8($sp)
nop
addi $sp, $gp, 40
lw $t2, 8($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
addi $t2, $zero, 1
addi $sp, $gp, 40
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 20($sp)
nop
addi $sp, $gp, 40
lw $t1, 4($sp)
nop
sub $t2, $t0, $t1
nop
addi $sp, $gp, 40
sw $t2, 4($sp)
nop
addi $sp, $gp, 40
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 20($sp)
nop
beq $zero, $zero, start1
nop
end1:
addi $sp, $gp, 16
lw $2, 20($sp)
nop
jr $ra
nop
