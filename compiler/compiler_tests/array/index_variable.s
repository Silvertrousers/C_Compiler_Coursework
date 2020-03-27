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
#DECLARATION
#TYPE_SPECIFIER
#INIT_DECLARATOR
#DIRECT_DECLARATOR
#NULL
#STATEMENT_LIST
#ITERATION_STATEMENT
#ASSIGNMENT_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 0
addi $sp, $gp, 68
sw $t2, 4($sp)
nop
addi $sp, $gp, 68
lw $t2, 4($sp)
nop
addi $sp, $gp, 16
sw $t2, 16($sp)
nop
#symbols[i]: i, 0
#s: i, 0
start1:
#Condition
#RELATIONAL_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 8
addi $sp, $gp, 68
sw $t2, 4($sp)
nop
#arg1: i, arg2: temp1
table: 0
stack_pointer: 68
var_pointer: 8
temp1: int: 0:4(68)
temp2: int: 0:8(68)
----------------
table: 1
stack_pointer: 16
var_pointer: 48
temp1: int: 0:4(16)
temp2: int: 0:8(16)
f: function: :12(16)
i: int: :16(16)
x_index_0: int array: :20(16)
x_index_1: int array: :24(16)
x_index_2: int array: :28(16)
x_index_3: int array: :32(16)
x_index_4: int array: :36(16)
x_index_5: int array: :40(16)
x_index_6: int array: :44(16)
x_index_7: int array: :48(16)
----------------
table: 2
stack_pointer: 0
var_pointer: 16
temp1: int: 0:4(0)
temp2: int: 0:8(0)
return_address: int: 0:12(0)
f: function: :16(0)
----------------
addi $sp, $gp, 16
lw $t0, 16($sp)
nop
addi $sp, $gp, 68
lw $t1, 4($sp)
nop
slt $t2, $t0, $t1
nop
addi $sp, $gp, 68
sw $t2, 4($sp)
nop
addi $sp, $gp, 68
lw $t0, 4($sp)
nop
beq $t0, $zero, end1
nop
#Increment
#POSTFIX_EXPRESSION
#Body
#STATEMENT
#COMPOUND_STATEMENT
#NULL
#ASSIGNMENT_EXPRESSION
#POSTFIX_EXPRESSION
#IDENTIFIER
#IDENTIFIER
#I want to access: x_index_0
#IDENTIFIER
addi $sp, $gp, 16
lw $t2, 16($sp)
nop
addi $sp, $gp, 16
sw $t2, 20($sp)
nop
#symbols[i]: x_index_0, 0
#s: x_index_0, 0
beq $zero, $zero, start1
nop
end1:
#JUMP_STATEMENT
#POSTFIX_EXPRESSION
#IDENTIFIER
#CONSTANT
addi $t2, $zero, 4
addi $sp, $gp, 16
sw $t2, 4($sp)
nop
#I want to access: x_index_4
#x_index_4
addi $sp, $gp, 16
lw $2, 36($sp)
nop
jr $ra
nop
