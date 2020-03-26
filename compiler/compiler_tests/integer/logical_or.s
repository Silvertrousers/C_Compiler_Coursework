FUNCTION_DECLARATION
.globl f
TYPE_SPECIFIER
f:
DIRECT_DECLARATOR
PARAMETER_LIST
PARAMETER_DECLARATION
addi $sp, $gp, 16
sw $a0, 16($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a3, $zero, $zero
PARAMETER_DECLARATION
addi $sp, $gp, 16
sw $a0, 20($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a3, $zero, $zero
COMPOUND_STATEMENT
NULL
JUMP_STATEMENT
LOGICAL_OR_EXPRESSION
IDENTIFIER
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $t1, $zero, 0
xor $t2, $t0, $t1
nop
bne $t2, $zero, short_circuit1
nop
IDENTIFIER
addi $sp, $gp, 16
lw $t0, 20($sp)
nop
addi $t1, $zero, 0
xor $t2, $t0, $t1
nop
addi $t1,$zero,0
beq $t2, $zero, not_short_circuit2
nop
short_circuit1:
addi $t1,$zero,1
not_short_circuit2:
add $t2,$t1, $zero
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $2, 4($sp)
nop
jr $ra
nop
