#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#STATEMENT_LIST
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 1234
addi $sp, $gp, 32
sw $t2, 4($sp)
nop
addi $sp, $gp, 32
lw $t2, 4($sp)
nop
addi $sp, $gp, 32
sw $t2, 12($sp)
nop
#symbols[i]: x, 0
#s: x, 1234
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 32
#name: x, offset: 12, value: 1234
lw $2, 12($sp)
nop
jr $ra
nop
