f:
.globl f
f:
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
lw $t0, 32657($sp)
nop
lw $t1, 32657($sp)
nop
sub $t2, $t0, $t1
nop
addi $t0,$t2,0
addi $t2,$zero,1
beq $t0,$zero, skip1
nop
addi $t2,$zero,0
skip1:
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $2, 4($sp)
nop
jr $ra
nop
