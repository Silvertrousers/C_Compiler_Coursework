.globl g
g:
addi $t2, $zero, 10
addi $sp, $gp, 20
sw $t2, 4($sp)
nop
addi $sp, $gp, 20
lw $2, 4($sp)
nop
jr $ra
nop
.globl main
main:
addi $sp, $gp, 2135695869
lw $t0, 0($sp)
nop
addi $t2, $zero, 1
beq $t2, $zero, skip1
nop
addi $t2, $zero, 0
skip1:
Nor $t2,$t0,$t0
sw $t2, 0($sp)
nop
addi $sp, $gp, 2135695869
lw $2, 0($sp)
nop
jr $ra
nop
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
addi $sp, $gp, 0
sw $2, 4($sp)
nop
addi $sp, $gp, 32
lw $2, 4($sp)
nop
jr $ra
nop
