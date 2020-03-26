#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#NULL
#STATEMENT_LIST
#SELECTION_STATEMENT
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 32
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 4($sp)
nop
beq $t0, $zero, skip1
nop
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 11
addi $sp, $gp, 32
sw $t2, 4($sp)
nop
addi $sp, $gp, 32
lw $2, 4($sp)
nop
jr $ra
nop
beq $zero, $zero, end2
nop
skip1:
end2:
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $2, 4($sp)
nop
jr $ra
nop
