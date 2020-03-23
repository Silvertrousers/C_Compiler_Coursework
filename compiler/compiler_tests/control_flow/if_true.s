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
addi $sp, $gp, 0
lw $a0, 8($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $t2, $zero, 1
addi $sp, $gp, 28
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 4($sp)
nop
beq $t0, $zero, skip1
nop
addi $t2, $zero, 11
addi $sp, $gp, 28
sw $t2, 4($sp)
nop
addi $sp, $gp, 28
lw $2, 4($sp)
nop
jr $ra
nop
beq $zero, $zero, end2
nop
skip1:
end2:
addi $t2, $zero, 10
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $2, 4($sp)
nop
jr $ra
nop
