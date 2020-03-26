.globl ffff
ffff:
addi $t2, $zero, 10
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t2, 4($sp)
nop
sw $t2, 16($sp)
nop
addi $sp, $gp, 16
lw $2, 16($sp)
nop
jr $ra
nop
