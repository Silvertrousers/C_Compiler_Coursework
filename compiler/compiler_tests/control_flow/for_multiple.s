#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#DECLARATION_LIST
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#STATEMENT_LIST
#STATEMENT_LIST
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
sw $t2, 20($sp)
nop
#symbols[i]: y, 0
#s: y, 0
#ITERATION_STATEMENT
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 40
sw $t2, 4($sp)
nop
addi $sp, $gp, 40
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
#symbols[i]: x, 0
#s: x, 0
start1:
#Condition
#RELATIONAL_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 40
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 40
lw $t1, 4($sp)
nop
slt $t2, $t0, $t1
nop
addi $sp, $gp, 40
sw $t2, 4($sp)
nop
addi $sp, $gp, 40
lw $t0, 4($sp)
nop
beq $t0, $zero, end1
nop
#Increment
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#ADDITIVE_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 40
sw $t2, 8($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 40
lw $t1, 8($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 40
sw $t2, 8($sp)
nop
addi $sp, $gp, 40
lw $t2, 8($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
#symbols[i]: x, 0
#s: x, 1
#Body
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#ADDITIVE_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 52
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 20($sp)
nop
addi $sp, $gp, 52
lw $t1, 4($sp)
nop
sub $t2, $t0, $t1
nop
addi $sp, $gp, 52
sw $t2, 4($sp)
nop
addi $sp, $gp, 52
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 20($sp)
nop
#symbols[i]: y, 0
#s: y, -1
beq $zero, $zero, start1
nop
end1:
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 16
#name: y, offset: 20, value: -1
lw $2, 20($sp)
nop
jr $ra
nop
