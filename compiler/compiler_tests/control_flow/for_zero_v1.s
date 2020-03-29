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
addi $sp, $gp, 48
sw $t2, 4($sp)
nop
addi $sp, $gp, 48
lw $t2, 4($sp)
nop
addi $sp, $gp, 32
sw $t2, 12($sp)
nop
#symbols[i]: x, 0
#s: x, 0
start1:
#Condition
#RELATIONAL_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 48
sw $t2, 4($sp)
nop
addi $sp, $gp, 32
lw $t0, 12($sp)
nop
addi $sp, $gp, 48
lw $t1, 4($sp)
nop
slt $t2, $t0, $t1
nop
addi $sp, $gp, 48
sw $t2, 4($sp)
nop
addi $sp, $gp, 48
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
addi $sp, $gp, 48
sw $t2, 8($sp)
nop
addi $sp, $gp, 32
lw $t0, 12($sp)
nop
addi $sp, $gp, 48
lw $t1, 8($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 48
sw $t2, 8($sp)
nop
addi $sp, $gp, 48
lw $t2, 8($sp)
nop
addi $sp, $gp, 32
sw $t2, 12($sp)
nop
#symbols[i]: x, 0
#s: x, 1
#Body
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 60
sw $t2, 4($sp)
nop
addi $sp, $gp, 60
#name: temp1, offset: 4, value: 1517599040
lw $2, 4($sp)
nop
jr $ra
nop
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
#name: temp1, offset: 4, value: -483014252
lw $2, 4($sp)
nop
jr $ra
nop
