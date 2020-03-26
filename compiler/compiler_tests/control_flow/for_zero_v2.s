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
#ITERATION_STATEMENT
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
start1:
#Condition
#RELATIONAL_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 36
lw $t1, 4($sp)
nop
slt $t2, $t0, $t1
nop
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
#temp1
addi $sp, $gp, 36
lw $t0, 4($sp)
nop
beq $t0, $zero, end1
nop
#Increment
#POSTFIX_EXPRESSION
#Body
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 36
sw $t2, 8($sp)
nop
addi $sp, $gp, 36
lw $2, 8($sp)
nop
jr $ra
nop
beq $zero, $zero, start1
nop
end1:
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 19937
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $2, 4($sp)
nop
jr $ra
nop
