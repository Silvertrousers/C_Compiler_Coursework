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
#POSTFIX_EXPRESSION
addi $sp, $gp, 48
sw $ra, 12($sp)
nop
jal g
nop
addi $sp, $gp, 48
lw $ra, 12($sp)
nop
addi $sp, $gp, 36
sw $2, 4($sp)
nop
addi $sp, $gp, 36
#name: temp1, offset: 4, value: 210766032
lw $2, 4($sp)
nop
jr $ra
nop
