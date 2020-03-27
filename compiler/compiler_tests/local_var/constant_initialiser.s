#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#CONSTANT
addi $t2, $zero, 12345
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t2, 4($sp)
nop
sw $t2, 16($sp)
nop
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 16
#name: x, offset: 16, value: 0
lw $2, 16($sp)
nop
jr $ra
nop
