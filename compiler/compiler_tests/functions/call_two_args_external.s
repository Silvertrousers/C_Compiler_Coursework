#TRANSLATION_UNIT
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#DIRECT_DECLARATOR
#PARAMETER_LIST
#PARAMETER_DECLARATION
addi $sp, $gp, 0
sw $a0, 20($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a3, $zero, $zero
#PARAMETER_DECLARATION
addi $sp, $gp, 0
sw $a0, 24($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a3, $zero, $zero
#NULL
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
addi $sp, $gp, 56
sw $t2, 4($sp)
nop
add $a3, $a2, $zero
add $a2, $a1, $zero
add $a1, $a0, $zero
addi $sp, $gp, 56
lw $a0, 4($sp)
nop
#CONSTANT
addi $t2, $zero, 20
addi $sp, $gp, 56
sw $t2, 4($sp)
nop
add $a3, $a2, $zero
add $a2, $a1, $zero
add $a1, $a0, $zero
addi $sp, $gp, 56
lw $a0, 4($sp)
nop
addi $sp, $gp, 56
sw $ra, 12($sp)
nop
jal g
nop
addi $sp, $gp, 56
lw $ra, 12($sp)
nop
addi $sp, $gp, 44
sw $2, 4($sp)
nop
addi $sp, $gp, 44
#name: temp1, offset: 4, value: -1688239824
lw $2, 4($sp)
nop
jr $ra
nop
