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
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
#ITERATION_STATEMENT
start1:
#RELATIONAL_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
lw $t0, 4($sp)
nop
addi $sp, $gp, 16
lw $t1, 16($sp)
nop
slt $t2, $t0, $t1
nop
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
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
addi $sp, $gp, 48
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 48
lw $t1, 4($sp)
nop
sub $t2, $t0, $t1
nop
addi $sp, $gp, 48
sw $t2, 4($sp)
nop
addi $sp, $gp, 48
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
beq $zero, $zero, start1
nop
end1:
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 16
lw $2, 16($sp)
nop
jr $ra
nop
