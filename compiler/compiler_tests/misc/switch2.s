#FUNCTION_DECLARATION
.globl g
#TYPE_SPECIFIER
g:
#DIRECT_DECLARATOR
#PARAMETER_DECLARATION
addi $sp, $gp, 16
sw $a0, 16($sp)
nop
#COMPOUND_STATEMENT
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#STATEMENT_LIST
#STATEMENT_LIST
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
addi $sp, $gp, 36
sw $t2, 12($sp)
nop
#symbols[i]: x, -315806697
#s: x, 0
#SELECTION_STATEMENT
start1:
#IDENTIFIER
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 36
sw $t0, 16($sp)
nop
beq $zero, $zero, casestart1
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#STATEMENT_LIST
#STATEMENT_LIST
#STATEMENT_LIST
#STATEMENT_LIST
#STATEMENT_LIST
#LABELED_STATEMENT
beq $zero, $zero,caseend1
nop
casestart1:
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 64
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
lw $t0, 16($sp)
nop
addi $sp, $gp, 64
lw $t1, 4($sp)
nop
bne $t0, $t1, casestart2
nop
caseend1:
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 64
sw $t2, 4($sp)
nop
addi $sp, $gp, 64
lw $t2, 4($sp)
nop
addi $sp, $gp, 36
sw $t2, 12($sp)
nop
#symbols[i]: x, 0
#s: x, 1
#JUMP_STATEMENT
beq $zero, $zero, end1
nop
#LABELED_STATEMENT
beq $zero, $zero,caseend2
nop
casestart2:
#CONSTANT
addi $t2, $zero, 2
addi $sp, $gp, 64
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
lw $t0, 16($sp)
nop
addi $sp, $gp, 64
lw $t1, 4($sp)
nop
bne $t0, $t1, casestart3
nop
caseend2:
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 2
addi $sp, $gp, 64
sw $t2, 4($sp)
nop
addi $sp, $gp, 64
lw $t2, 4($sp)
nop
addi $sp, $gp, 36
sw $t2, 12($sp)
nop
#symbols[i]: x, 1
#s: x, 2
#LABELED_STATEMENT
beq $zero, $zero,caseend3
nop
casestart3:
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 64
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
lw $t0, 16($sp)
nop
addi $sp, $gp, 64
lw $t1, 4($sp)
nop
bne $t0, $t1, casestart4
nop
caseend3:
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#ADDITIVE_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 64
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
lw $t0, 12($sp)
nop
addi $sp, $gp, 64
lw $t1, 4($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 64
sw $t2, 4($sp)
nop
addi $sp, $gp, 64
lw $t2, 4($sp)
nop
addi $sp, $gp, 36
sw $t2, 12($sp)
nop
#symbols[i]: x, 2
#s: x, 3
#JUMP_STATEMENT
beq $zero, $zero, end1
nop
#LABELED_STATEMENT
default1:
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#ADDITIVE_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 64
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 64
lw $t1, 4($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 64
sw $t2, 4($sp)
nop
addi $sp, $gp, 64
lw $t2, 4($sp)
nop
addi $sp, $gp, 36
sw $t2, 12($sp)
nop
#symbols[i]: x, 3
#s: x, -315802885
beq $zero, $zero, end1
nop
casestart4:
beq $zero, $zero, default1
nop
end1:
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 36
#name: x, offset: 12, value: -315802885
lw $2, 12($sp)
nop
jr $ra
nop
