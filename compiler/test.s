#FUNCTION_DECLARATION
.globl bsqrt
#TYPE_SPECIFIER
bsqrt:
#DIRECT_DECLARATOR
#PARAMETER_LIST
#PARAMETER_LIST
#PARAMETER_DECLARATION
addi $sp, $gp, 16
sw $a0, 16($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a3, $zero, $zero
#PARAMETER_DECLARATION
addi $sp, $gp, 16
sw $a0, 20($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a3, $zero, $zero
#PARAMETER_DECLARATION
addi $sp, $gp, 16
sw $a0, 24($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a3, $zero, $zero
#COMPOUND_STATEMENT
#NULL
#STATEMENT_LIST
#ITERATION_STATEMENT
#RELATIONAL_EXPRESSION
#ADDITIVE_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 44
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 44
lw $t1, 4($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 44
sw $t2, 4($sp)
nop
#IDENTIFIER
addi $sp, $gp, 44
lw $t0, 4($sp)
nop
addi $sp, $gp, 16
lw $t1, 20($sp)
nop
slt $t2, $t0, $t1
nop
addi $sp, $gp, 44
sw $t2, 8($sp)
nop
start1:
#RELATIONAL_EXPRESSION
#ADDITIVE_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 1011876765
lw $t1, 0($sp)
nop
add $t2, $t0, $t1
nop
#IDENTIFIER
addi $sp, $gp, 1011876765
lw $t0, 0($sp)
nop
addi $sp, $gp, 16
lw $t1, 20($sp)
nop
slt $t2, $t0, $t1
nop
addi $sp, $gp, 1011876765
lw $t0, 0($sp)
nop
beq $t0, $zero, end1
nop
#STATEMENT
#COMPOUND_STATEMENT
#DECLARATION_LIST
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#SHIFT_EXPRESSION
#PRIMARY_EXPRESSION
#ADDITIVE_EXPRESSION
#IDENTIFIER
#IDENTIFIER
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 16
lw $t1, 20($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 56
sw $t2, 4($sp)
nop
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 56
sw $t2, 8($sp)
nop
addi $sp, $gp, 56
lw $t0, 4($sp)
nop
addi $sp, $gp, 56
lw $t1, 8($sp)
nop
srlv $t2, $t0, $t1
nop
addi $sp, $gp, 56
sw $t2, 8($sp)
nop
addi $sp, $gp, 56
lw $t2, 8($sp)
nop
sw $t2, 12($sp)
nop
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#MULTIPLICATIVE_EXPRESSION
#IDENTIFIER
#IDENTIFIER
addi $sp, $gp, 56
lw $t0, 12($sp)
nop
addi $sp, $gp, 56
lw $t1, 12($sp)
nop
MULT $t0, $t1
MFLO $t2
addi $sp, $gp, 1011876765
lw $t2, 0($sp)
nop
sw $t2, 16($sp)
nop
#SELECTION_STATEMENT
#RELATIONAL_EXPRESSION
#IDENTIFIER
#IDENTIFIER
addi $sp, $gp, 56
lw $t0, 16($sp)
nop
addi $sp, $gp, 16
lw $t1, 24($sp)
nop
slt $t2, $t0, $t1
nop
addi $sp, $gp, 76
sw $t2, 4($sp)
nop
addi $sp, $gp, 56
lw $t0, 4($sp)
nop
beq $t0, $zero, skip1
nop
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#IDENTIFIER
addi $sp, $gp, 56
lw $t2, 12($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
beq $zero, $zero, end2
nop
skip1:
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#IDENTIFIER
addi $sp, $gp, 56
lw $t2, 12($sp)
nop
addi $sp, $gp, 16
sw $t2, 20($sp)
nop
end2:
end1:
#SELECTION_STATEMENT
#RELATIONAL_EXPRESSION
#MULTIPLICATIVE_EXPRESSION
#IDENTIFIER
#IDENTIFIER
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 16
lw $t1, 16($sp)
nop
MULT $t0, $t1
MFLO $t2
addi $sp, $gp, 44
sw $t2, 4($sp)
nop
#IDENTIFIER
addi $sp, $gp, 44
lw $t0, 4($sp)
nop
addi $sp, $gp, 16
lw $t1, 24($sp)
nop
slt $t2, $t0, $t1
nop
addi $sp, $gp, 44
sw $t2, 8($sp)
nop
addi $sp, $gp, 16
lw $t0, 8($sp)
nop
beq $t0, $zero, skip3
nop
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 16
lw $2, 20($sp)
nop
jr $ra
nop
beq $zero, $zero, end4
nop
skip3:
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 16
lw $2, 16($sp)
nop
jr $ra
nop
end4:
