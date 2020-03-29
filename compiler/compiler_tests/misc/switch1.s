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
#NULL
#SELECTION_STATEMENT
start1:
#IDENTIFIER
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 36
sw $t0, 12($sp)
nop
beq $zero, $zero, casestart1
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#STATEMENT_LIST
#LABELED_STATEMENT
beq $zero, $zero,caseend1
nop
casestart1:
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 60
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
lw $t0, 12($sp)
nop
addi $sp, $gp, 60
lw $t1, 4($sp)
nop
bne $t0, $t1, casestart2
nop
caseend1:
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 60
sw $t2, 4($sp)
nop
addi $sp, $gp, 60
#name: temp1, offset: 4, value: -1675181968
lw $2, 4($sp)
nop
jr $ra
nop
#LABELED_STATEMENT
beq $zero, $zero,caseend2
nop
casestart2:
#CONSTANT
addi $t2, $zero, 2
addi $sp, $gp, 60
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
lw $t0, 12($sp)
nop
addi $sp, $gp, 60
lw $t1, 4($sp)
nop
bne $t0, $t1, casestart3
nop
caseend2:
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 11
addi $sp, $gp, 60
sw $t2, 4($sp)
nop
addi $sp, $gp, 60
#name: temp1, offset: 4, value: -1675181968
lw $2, 4($sp)
nop
jr $ra
nop
beq $zero, $zero, end1
nop
casestart3:
end1:
