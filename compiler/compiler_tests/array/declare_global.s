#TRANSLATION_UNIT
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#DIRECT_DECLARATOR
#NULL
#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#NULL
#JUMP_STATEMENT
#CONSTANT
addi $t2, $zero, 11
addi $sp, $gp, 48
sw $t2, 4($sp)
nop
addi $sp, $gp, 48
lw $2, 4($sp)
nop
jr $ra
nop
