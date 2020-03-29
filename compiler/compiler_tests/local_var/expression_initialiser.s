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
addi $sp, $gp, 32
sw $t2, 4($sp)
nop
addi $sp, $gp, 32
lw $t2, 4($sp)
nop
sw $t2, 12($sp)
nop
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#ADDITIVE_EXPRESSION
#CONSTANT
addi $t2, $zero, 20
addi $sp, $gp, 32
sw $t2, 4($sp)
nop
#IDENTIFIER
addi $sp, $gp, 32
lw $t0, 4($sp)
nop
addi $sp, $gp, 32
lw $t1, 12($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 32
sw $t2, 4($sp)
nop
addi $sp, $gp, 32
lw $t2, 4($sp)
nop
sw $t2, 16($sp)
nop
#JUMP_STATEMENT
#IDENTIFIER
addi $sp, $gp, 32
#name: x, offset: 16, value: 10
lw $2, 16($sp)
nop
jr $ra
nop
