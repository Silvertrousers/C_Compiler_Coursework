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
lw $t2, 32518($sp)
nop
sw $t2, 12($sp)
nop
addi $sp, $gp, 16
lw $2, 12($sp)
nop
jr $ra
nop
