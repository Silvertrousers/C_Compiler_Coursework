#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#PARAMETER_DECLARATION
addi $sp, $gp, 16
sw $a0, 16($sp)
nop
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 16
#name: x, offset: 16, value: -397683532
lw $2, 16($sp)
nop
jr $ra
nop
