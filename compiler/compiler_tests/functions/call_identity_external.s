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
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#POSTFIX_EXPRESSION
#CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 52
sw $t2, 4($sp)
nop
addi $sp, $gp, 52
lw $a0, 4($sp)
nop
addi $sp, $gp, 52
sw $ra, 12($sp)
nop
jal g
nop
addi $sp, $gp, 52
lw $ra, 12($sp)
nop
addi $sp, $gp, 40
sw $2, 4($sp)
nop
addi $sp, $gp, 40
#name: temp1, offset: 4, value: 1922513808
lw $2, 4($sp)
nop
jr $ra
nop
