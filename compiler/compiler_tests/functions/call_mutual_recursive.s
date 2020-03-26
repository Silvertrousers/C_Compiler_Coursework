#TRANSLATION_UNIT
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#DIRECT_DECLARATOR
#PARAMETER_DECLARATION
addi $sp, $gp, 0
sw $a0, 20($sp)
nop
#NULL
#FUNCTION_DECLARATION
.globl r1
#TYPE_SPECIFIER
r1:
#DIRECT_DECLARATOR
#PARAMETER_DECLARATION
addi $sp, $gp, 24
sw $a0, 16($sp)
nop
#COMPOUND_STATEMENT
#NULL
#SELECTION_STATEMENT
#EQUALITY_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 44
sw $t2, 4($sp)
nop
addi $sp, $gp, 24
lw $t0, 16($sp)
nop
addi $sp, $gp, 44
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
addi $sp, $gp, 44
sw $t2, 4($sp)
nop
addi $sp, $gp, 24
lw $t0, 4($sp)
nop
beq $t0, $zero, skip1
nop
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 56
sw $t2, 4($sp)
nop
addi $sp, $gp, 56
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
#ADDITIVE_EXPRESSION
#POSTFIX_EXPRESSION
addi $sp, $gp, 0
sw $ra, 12($sp)
nop
jal r2
nop
addi $sp, $gp, 0
lw $ra, 12($sp)
nop
addi $sp, $gp, 56
sw $2, 4($sp)
nop
#POSTFIX_EXPRESSION
addi $sp, $gp, 0
sw $ra, 12($sp)
nop
jal r2
nop
addi $sp, $gp, 0
lw $ra, 12($sp)
nop
addi $sp, $gp, 56
sw $2, 4($sp)
nop
addi $sp, $gp, 56
lw $t0, 4($sp)
nop
addi $sp, $gp, 56
lw $t1, 4($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 56
sw $t2, 4($sp)
nop
addi $sp, $gp, 56
lw $2, 4($sp)
nop
jr $ra
nop
end2:
