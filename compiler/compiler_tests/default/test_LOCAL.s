#FUNCTION_DECLARATION
.globl ffff
#TYPE_SPECIFIER
ffff:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#STATEMENT_LIST
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
#symbols[i]: x, 0
#s: x, 10
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 16
#name: x, offset: 16, value: 10
lw $2, 16($sp)
nop
jr $ra
nop
