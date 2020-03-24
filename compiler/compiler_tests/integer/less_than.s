f:
.globl f
f:
TYPE_SPECIFIER DIRECT_DECLARATOR NULL COMPOUND_STATEMENT
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
lw $t0, 32724($sp)
nop
lw $t1, 32724($sp)
nop
SLT $t2, $t0, $t1
nop
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $2, 4($sp)
nop
jr $ra
nop
