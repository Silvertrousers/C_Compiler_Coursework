f:
.globl f
f:
addi $sp, $sp, 0
lw $a0, 4($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $sp, $sp, 0
lw $a0, 8($sp)
nop
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $t2, $zero, 5678
addi $sp, $sp, 16
sw $t2, 4($sp)
nop
addi $sp, $sp, 16
lw $v0, 4($sp)
nop
jr $ra
nop
