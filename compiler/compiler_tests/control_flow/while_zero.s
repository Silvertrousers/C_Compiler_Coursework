#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#NULL
#STATEMENT_LIST
#ITERATION_STATEMENT
start1:
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 44
sw $t2, 4($sp)
nop
addi $sp, $gp, 44
lw $t0, 4($sp)
nop
beq $t0, $zero, end1
nop
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#NULL
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
#name: temp1, offset: 4, value: 2009192080
lw $2, 4($sp)
nop
jr $ra
nop
