f:
.globl f
f:
addi $sp, $gp, 16
addi $sp, $gp, 16
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
lw $a0, 12($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
lw $t1, 20($sp)
nop
sub $t2, $t0, $t1
nop
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, -577597043
lw $t2, 4($sp)
nop
sw $t2, 24($sp)
nop
addi $sp, $gp, 16
lw $2, 24($sp)
nop
jr $ra
nop
