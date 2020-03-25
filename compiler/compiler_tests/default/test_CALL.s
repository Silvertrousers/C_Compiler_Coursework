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
addi $sp, $gp, -1912884835
sw $ra, 12($sp)
nop
jal g
nop
addi $sp, $gp, -1912884835
lw $ra, 12($sp)
nop
addi $sp, $gp, -1912884835
sw $2, 4($sp)
nop
addi $sp, $gp, 20
lw $2, 4($sp)
nop
jr $ra
nop
