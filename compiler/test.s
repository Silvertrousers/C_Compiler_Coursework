#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#DECLARATION_LIST
#DECLARATION_LIST
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#DIRECT_DECLARATOR
#NULL
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#STATEMENT_LIST
#STATEMENT_LIST
#STATEMENT_LIST
#ITERATION_STATEMENT
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 8
addi $sp, $gp, 72
sw $t2, 4($sp)
nop
addi $sp, $gp, 72
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
#symbols[i]: i, 0
#s: i, 8
start1:
#Condition
#RELATIONAL_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 16
addi $sp, $gp, 72
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 72
lw $t1, 4($sp)
nop
slt $t2, $t0, $t1
nop
addi $sp, $gp, 72
sw $t2, 4($sp)
nop
addi $sp, $gp, 72
lw $t0, 4($sp)
nop
beq $t0, $zero, end1
nop
#Increment
#POSTFIX_EXPRESSION
#IDENTIFIER
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 72
sw $t0, 8($sp)
nop
addi $t2,$t0,1
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
#Body
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#ASSIGNMENT_EXPRESSION
#POSTFIX_EXPRESSION
#IDENTIFIER
#ADDITIVE_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 8
addi $sp, $gp, 84
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 84
lw $t1, 4($sp)
nop
sub $t2, $t0, $t1
nop
addi $sp, $gp, 84
sw $t2, 4($sp)
nop
#I want to access: x_index_0
#IDENTIFIER
addi $sp, $gp, 16
lw $t2, 16($sp)
nop
addi $sp, $gp, 16
sw $t2, 20($sp)
nop
#symbols[i]: x_index_0, 0
#s: x_index_0, 8
beq $zero, $zero, start1
nop
end1:
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 52($sp)
nop
#symbols[i]: acc, 0
#s: acc, 0
#ITERATION_STATEMENT
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 72
sw $t2, 4($sp)
nop
addi $sp, $gp, 72
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
#symbols[i]: i, 8
#s: i, 0
start2:
#Condition
#RELATIONAL_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 8
addi $sp, $gp, 72
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 72
lw $t1, 4($sp)
nop
slt $t2, $t0, $t1
nop
addi $sp, $gp, 72
sw $t2, 4($sp)
nop
addi $sp, $gp, 72
lw $t0, 4($sp)
nop
beq $t0, $zero, end2
nop
#Increment
#POSTFIX_EXPRESSION
#IDENTIFIER
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 72
sw $t0, 8($sp)
nop
addi $t2,$t0,1
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
#Body
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#ADDITIVE_EXPRESSION
#IDENTIFIER
#POSTFIX_EXPRESSION
#IDENTIFIER
#ADDITIVE_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 84
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 84
lw $t1, 4($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 84
sw $t2, 4($sp)
nop
#I want to access: x_index_0
addi $sp, $gp, 16
lw $t0, 52($sp)
nop
addi $sp, $gp, 16
lw $t1, 20($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 84
sw $t2, 8($sp)
nop
addi $sp, $gp, 84
lw $t2, 8($sp)
nop
addi $sp, $gp, 16
sw $t2, 52($sp)
nop
#symbols[i]: acc, 0
#s: acc, 0
beq $zero, $zero, start2
nop
end2:
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 16
#name: acc, offset: 52, value: 0
lw $2, 52($sp)
nop
jr $ra
nop
