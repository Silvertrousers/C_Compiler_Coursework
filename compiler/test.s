TRANSLATION_UNIT
TRANSLATION_UNIT
TRANSLATION_UNIT
TRANSLATION_UNIT
DECLARATION
TYPE_SPECIFIER
INIT_DECLARATOR
DIRECT_DECLARATOR
NULL
FUNCTION_DECLARATION
.globl g
TYPE_SPECIFIER
g:
DIRECT_DECLARATOR
COMPOUND_STATEMENT
DECLARATION
TYPE_SPECIFIER
INIT_DECLARATOR
JUMP_STATEMENT
UNARY_EXPRESSION
PRIMARY_EXPRESSION
ADDITIVE_EXPRESSION
IDENTIFIER
CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 20
sw $t2, 4($sp)
nop
addi $sp, $gp, 20
lw $t0, 16($sp)
nop
addi $sp, $gp, 20
lw $t1, 4($sp)
nop
add $t2, $t0, $t1
nop
addi $sp, $gp, 20
sw $t2, 4($sp)
nop
arg1: temp1
addi $sp, $gp, 20
lw $t0, 4($sp)
nop
addi $t2, $zero, 1
beq $t2, $zero, skip1
nop
addi $t2, $zero, 0
skip1:
Nor $t2,$t0,$t0
sw $t2, 4($sp)
nop
addi $sp, $gp, 20
lw $2, 4($sp)
nop
jr $ra
nop
FUNCTION_DECLARATION
.globl main
TYPE_SPECIFIER
main:
DIRECT_DECLARATOR
COMPOUND_STATEMENT
NULL
JUMP_STATEMENT
UNARY_EXPRESSION
PRIMARY_EXPRESSION
EQUALITY_EXPRESSION
CONSTANT
addi $t2, $zero, 10
addi $sp, $gp, 24
sw $t2, 4($sp)
nop
POSTFIX_EXPRESSION
addi $sp, $gp, 0
sw $ra, 12($sp)
nop
jal f
nop
addi $sp, $gp, 0
lw $ra, 12($sp)
nop
addi $sp, $gp, 0
sw $2, 4($sp)
nop
addi $sp, $gp, 24
lw $t0, 4($sp)
nop
addi $sp, $gp, 24
lw $t1, 4($sp)
nop
sub $t2, $t0, $t1
nop
addi $t0,$t2,0
addi $t2,$zero,1
beq $t0,$zero, skip2
nop
addi $t2,$zero,0
skip2:
addi $sp, $gp, 24
sw $t2, 4($sp)
nop
arg1: temp1
addi $sp, $gp, 24
lw $t0, 4($sp)
nop
addi $t2, $zero, 1
beq $t2, $zero, skip3
nop
addi $t2, $zero, 0
skip3:
Nor $t2,$t0,$t0
sw $t2, 4($sp)
nop
addi $sp, $gp, 24
lw $2, 4($sp)
nop
jr $ra
nop
DECLARATION
TYPE_SPECIFIER
INIT_DECLARATOR
DIRECT_DECLARATOR
NULL
FUNCTION_DECLARATION
.globl f
TYPE_SPECIFIER
f:
DIRECT_DECLARATOR
COMPOUND_STATEMENT
NULL
JUMP_STATEMENT
POSTFIX_EXPRESSION
addi $sp, $gp, 0
sw $ra, 12($sp)
nop
jal g
nop
addi $sp, $gp, 0
lw $ra, 12($sp)
nop
addi $sp, $gp, 0
sw $2, 4($sp)
nop
addi $sp, $gp, 32
lw $2, 4($sp)
nop
jr $ra
nop
