#TRANSLATION_UNIT
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#DIRECT_DECLARATOR
#PARAMETER_LIST
#PARAMETER_LIST
#PARAMETER_LIST
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
#PARAMETER_DECLARATION
addi $sp, $gp, 0
sw $a0, 28($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a3, $zero, $zero
#PARAMETER_DECLARATION
addi $sp, $gp, 0
sw $a0, 32($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a3, $zero, $zero
#PARAMETER_DECLARATION
addi $sp, $gp, 0
sw $a0, 36($sp)
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
#ARGUMENT_EXPRESSION_LIST
#ARGUMENT_EXPRESSION_LIST
#ARGUMENT_EXPRESSION_LIST
#CONSTANT
addi $t2, $zero, 1
addi $sp, $gp, 68
sw $t2, 4($sp)
nop
add $a3, $a2, $zero
add $a2, $a1, $zero
add $a1, $a0, $zero
addi $sp, $gp, 68
lw $a0, 4($sp)
nop
#CONSTANT
addi $t2, $zero, 2
addi $sp, $gp, 68
sw $t2, 4($sp)
nop
add $a3, $a2, $zero
add $a2, $a1, $zero
add $a1, $a0, $zero
addi $sp, $gp, 68
lw $a0, 4($sp)
nop
#CONSTANT
addi $t2, $zero, 3
addi $sp, $gp, 68
sw $t2, 4($sp)
nop
add $a3, $a2, $zero
add $a2, $a1, $zero
add $a1, $a0, $zero
addi $sp, $gp, 68
lw $a0, 4($sp)
nop
#CONSTANT
addi $t2, $zero, 4
addi $sp, $gp, 68
sw $t2, 4($sp)
nop
add $a3, $a2, $zero
add $a2, $a1, $zero
add $a1, $a0, $zero
addi $sp, $gp, 68
lw $a0, 4($sp)
nop
#CONSTANT
addi $t2, $zero, 5
addi $sp, $gp, 68
sw $t2, 4($sp)
nop
add $a3, $a2, $zero
add $a2, $a1, $zero
add $a1, $a0, $zero
addi $sp, $gp, 68
lw $a0, 4($sp)
nop
addi $sp, $gp, 68
sw $ra, 12($sp)
nop
jal g
nop
addi $sp, $gp, 68
lw $ra, 12($sp)
nop
addi $sp, $gp, 56
sw $2, 4($sp)
nop
addi $sp, $gp, 56
#name: temp1, offset: 4, value: -830559840
lw $2, 4($sp)
nop
jr $ra
nop
