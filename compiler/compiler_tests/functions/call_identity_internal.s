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
#name: x, offset: 16, value: 2058998964
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
#CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
lw $a0, 4($sp)
nop
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
#name: temp1, offset: 4, value: -169436780
lw $2, 4($sp)
nop
jr $ra
nop