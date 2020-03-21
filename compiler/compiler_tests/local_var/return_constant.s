f:
.globl f
addi $sp, $zero, 0
lw $a0, 4($sp)
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $sp, $zero, 0
lw $a0, 8($sp)
add $a0, $a1, $zero
add $a1, $a2, $zero
add $a2, $a3, $zero
add $a0, $zero, $zero
addi $t2, $zero, 5678
addi $sp, $zero, 16
sw $t2, 4($sp)
addi $sp, $zero, 16
lw $v0, 4($sp)
jr $ra
