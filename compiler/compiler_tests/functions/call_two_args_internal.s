#TRANSLATION_UNIT
#FUNCTION_DECLARATION
.globl g
#TYPE_SPECIFIER
g:
#DIRECT_DECLARATOR
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
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
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
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $2, 4($sp)
nop
jr $ra
nop
#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#POSTFIX_EXPRESSION
#ARGUMENT_EXPRESSION_LIST
#CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
add $a3, $a2, $zero
add $a2, $a1, $zero
add $a1, $a0, $zero
addi $sp, $gp, 36
lw $a0, 4($sp)
nop
#CONSTANT
addi $t2, $zero, 20
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
add $a3, $a2, $zero
add $a2, $a1, $zero
add $a1, $a0, $zero
addi $sp, $gp, 36
lw $a0, 4($sp)
nop
addi $sp, $gp, 36
sw $ra, 12($sp)
nop
jal g
nop
addi $sp, $gp, 36
lw $ra, 12($sp)
nop
addi $sp, $gp, 20
sw $2, 4($sp)
nop
addi $sp, $gp, 20
lw $2, 4($sp)
nop
jr $ra
nop
