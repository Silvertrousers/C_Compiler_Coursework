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
addi $t2, $zero, 20
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
#s: x, 20
#ITERATION_STATEMENT
start1:
#RELATIONAL_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 48
sw $t2, 4($sp)
nop
addi $sp, $gp, 48
lw $t0, 4($sp)
nop
addi $sp, $gp, 32
lw $t1, 12($sp)
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
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#ADDITIVE_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 60
sw $t2, 4($sp)
nop
addi $sp, $gp, 32
lw $t0, 12($sp)
nop
addi $sp, $gp, 60
lw $t1, 4($sp)
nop
sub $t2, $t0, $t1
nop
addi $sp, $gp, 60
sw $t2, 4($sp)
nop
addi $sp, $gp, 60
lw $t2, 4($sp)
nop
addi $sp, $gp, 32
sw $t2, 12($sp)
nop
#symbols[i]: x, 20
#s: x, 19
beq $zero, $zero, start1
nop
end1:
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 32
#name: x, offset: 12, value: 19
lw $2, 12($sp)
nop
jr $ra
nop
