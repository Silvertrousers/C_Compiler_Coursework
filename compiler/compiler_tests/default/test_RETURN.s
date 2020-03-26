FUNCTION_DECLARATION
.globl f
TYPE_SPECIFIER
f:
DIRECT_DECLARATOR
COMPOUND_STATEMENT
NULL
JUMP_STATEMENT
CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $2, 4($sp)
nop
jr $ra
nop
