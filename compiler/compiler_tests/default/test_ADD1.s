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
#JUMP_STATEMENT
#ADDITIVE_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 36
lw $t1, 4($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 36
sw $t2, 4($sp)
nop
addi $sp, $gp, 36
#name: temp1, offset: 4, value: 1339797664
lw $2, 4($sp)
nop
jr $ra
nop
