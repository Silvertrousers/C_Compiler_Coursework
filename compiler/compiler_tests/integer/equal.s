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
#NULL
#JUMP_STATEMENT
#EQUALITY_EXPRESSION
#IDENTIFIER
#IDENTIFIER
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 16
lw $t1, 20($sp)
nop
sub $t2, $t0, $t1
nop
addi $t0,$t2,0
addi $t2,$zero,1
beq $t0,$zero, skip1
nop
addi $t2,$zero,0
skip1:
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
#name: temp1, offset: 4, value: 0
lw $2, 4($sp)
nop
jr $ra
nop
