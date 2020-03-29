#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
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
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#STATEMENT_LIST
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#INCLUSIVE_OR_EXPRESSION
#IDENTIFIER
#IDENTIFIER
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 16
lw $t1, 20($sp)
nop
or $t2, $t0, $t1
nop
addi $sp, $gp, 40
sw $t2, 4($sp)
nop
addi $sp, $gp, 40
lw $t2, 4($sp)
nop
addi $sp, $gp, 40
sw $t2, 12($sp)
nop
#symbols[i]: z, 2
#s: z, 2
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 40
#name: z, offset: 12, value: 2
lw $2, 12($sp)
nop
jr $ra
nop
