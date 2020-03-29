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
#STATEMENT_LIST
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 5678
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
#s: x, 5678
#STATEMENT
#COMPOUND_STATEMENT
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 1234
addi $sp, $gp, 48
sw $t2, 4($sp)
nop
addi $sp, $gp, 48
lw $t2, 4($sp)
nop
addi $sp, $gp, 48
sw $t2, 12($sp)
nop
#symbols[i]: x, 0
#s: x, 1234
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 32
#name: x, offset: 12, value: 5678
lw $2, 12($sp)
nop
jr $ra
nop
