.globl f
f:
addi $sp, $gp, 0
sw $ra, 12($sp)
nop
jal g
nop
addi $sp, $gp, 0
lw $ra, 12($sp)
nop
addi $sp, $gp, 20
sw $2, 4($sp)
nop
addi $sp, $gp, 20
lw $2, 4($sp)
nop
jr $ra
nop
