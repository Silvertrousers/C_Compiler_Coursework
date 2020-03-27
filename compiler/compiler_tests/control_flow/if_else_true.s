#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#NULL
#SELECTION_STATEMENT
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 32
sw $t2, 4($sp)
nop
addi $sp, $gp, 32
lw $t0, 4($sp)
nop
beq $t0, $zero, skip1
nop
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 11
addi $sp, $gp, 44
sw $t2, 4($sp)
nop
addi $sp, $gp, 44
#name: temp1, offset: 4, value: -395679340
lw $2, 4($sp)
nop
jr $ra
nop
beq $zero, $zero, end2
nop
skip1:
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 44
sw $t2, 4($sp)
nop
addi $sp, $gp, 44
#name: temp1, offset: 4, value: -395679340
lw $2, 4($sp)
nop
jr $ra
nop
end2:
