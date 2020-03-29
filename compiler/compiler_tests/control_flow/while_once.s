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
addi $t2, $zero, 1
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
#s: x, 1
#ITERATION_STATEMENT
start1:
#IDENTIFIER
addi $sp, $gp, 32
lw $t0, 12($sp)
nop
beq $t0, $zero, end1
nop
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 60
sw $t2, 4($sp)
nop
addi $sp, $gp, 60
lw $t2, 4($sp)
nop
addi $sp, $gp, 32
sw $t2, 12($sp)
nop
#symbols[i]: x, 1
#s: x, 0
beq $zero, $zero, start1
nop
end1:
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 19937
addi $sp, $gp, 32
sw $t2, 4($sp)
nop
addi $sp, $gp, 32
#name: temp1, offset: 4, value: 538990996
lw $2, 4($sp)
nop
jr $ra
nop
