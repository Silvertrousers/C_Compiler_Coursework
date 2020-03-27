#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#DIRECT_DECLARATOR
#NULL
#STATEMENT_LIST
#ASSIGNMENT_EXPRESSION
#POSTFIX_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
#I want to access: x_index_0
#CONSTANT
addi $t2, $zero, 23
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
#symbols[i]: x_index_0, 0
#s: x_index_0, 23
#JUMP_STATEMENT
#POSTFIX_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
#I want to access: x_index_0
addi $sp, $gp, 16
#name: x_index_0, offset: 16, value: 23
lw $2, 16($sp)
nop
jr $ra
nop
