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
lw $a0, 12($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $sp, $gp, 16
lw $t0, 32730($sp)
nop
addi $t1, $zero, 0
xor $t2, $t0, $t1
nop
beq $t2, $zero, short_circuit1
nop
addi $sp, $gp, 16
lw $t0, 32730($sp)
nop
addi $t1, $zero, 0
xor $t2, $t0, $t1
nop
addi $t1,$zero,1
bne $t2, $zero, not_short_circuit2
nop
short_circuit1:
addi $t1,$zero,0
not_short_circuit2:
add $t2,$t1, $zero
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $2, 4($sp)
nop
jr $ra
nop
