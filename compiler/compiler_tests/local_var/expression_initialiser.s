#FUNCTION_DECLARATION
.globl f
#TYPE_SPECIFIER
f:
#DIRECT_DECLARATOR
#COMPOUND_STATEMENT
#DECLARATION_LIST
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t2, 4($sp)
nop
sw $t2, 16($sp)
nop
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#ADDITIVE_EXPRESSION
#CONSTANT
addi $t2, $zero, 20
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
#IDENTIFIER
addi $sp, $gp, 16
lw $t0, 4($sp)
nop
addi $sp, $gp, 16
lw $t1, 16($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
addi $sp, $gp, 16
lw $t2, 4($sp)
nop
sw $t2, 20($sp)
nop
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 16
lw $2, 20($sp)
nop
jr $ra
nop
