#TRANSLATION_UNIT
#FUNCTION_DECLARATION
.globl g
#TYPE_SPECIFIER
g:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 20
addi $sp, $gp, 32
sw $t2, 4($sp)
nop
addi $sp, $gp, 32
#name: temp1, offset: 4, value: -1659832192
lw $2, 4($sp)
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
addi $sp, $gp, 48
sw $ra, 12($sp)
nop
jal g
nop
addi $sp, $gp, 48
lw $ra, 12($sp)
nop
addi $sp, $gp, 36
sw $2, 4($sp)
nop
addi $sp, $gp, 36
#name: temp1, offset: 4, value: -1659830960
lw $2, 4($sp)
nop
jr $ra
nop
