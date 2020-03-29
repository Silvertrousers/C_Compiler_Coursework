#FUNCTION_DECLARATION
.globl main
#TYPE_SPECIFIER
main:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 11
addi $sp, $gp, 32
sw $t2, 4($sp)
nop
addi $sp, $gp, 32
#name: temp1, offset: 4, value: -1700471200
lw $2, 4($sp)
nop
jr $ra
nop
