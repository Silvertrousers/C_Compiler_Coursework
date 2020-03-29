#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#PARAMETER_DECLARATION
addi $sp, $gp, 16
sw $a0, 16($sp)
nop
#COMPOUND_STATEMENT
#NULL
#STATEMENT_LIST
#SELECTION_STATEMENT
#EQUALITY_EXPRESSION
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
sub $t2, $t0, $t1
nop
addi $t0,$t2,0
addi $t2,$zero,1
beq $t0,$zero, skip3
nop
addi $t2,$zero,0
skip3:
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
lw $t0, 4($sp)
nop
beq $t0, $zero, skip1
nop
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 48
sw $t2, 4($sp)
nop
addi $sp, $gp, 48
lw $2, 4($sp)
nop
jr $ra
nop
beq $zero, $zero, end2
nop
skip1:
end2:
#JUMP_STATEMENT
#ADDITIVE_EXPRESSION
#IDENTIFIER
#POSTFIX_EXPRESSION
addi $sp, $gp, 36
sw $ra, 12($sp)
nop
jal f
nop
addi $sp, $gp, 36
lw $ra, 12($sp)
nop
addi $sp, $gp, 16
sw $2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 16
lw $t1, 4($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $2, 4($sp)
nop
jr $ra
nop
