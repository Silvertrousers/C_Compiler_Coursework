#TRANSLATION_UNIT
#FUNCTION_DECLARATION
.globl g
#TYPE_SPECIFIER
g:
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
lw $2, 16($sp)
nop
jr $ra
nop
#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#POSTFIX_EXPRESSION
addi $sp, $gp, 36
sw $ra, 12($sp)
nop
jal g
nop
addi $sp, $gp, 36
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
