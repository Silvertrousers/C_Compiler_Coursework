main:
lw r4, 4(0)
add r4, r5, r0
add r5, r6, r0
add r6, r7, r0
add r4, r0, r0
lw r4, 8(0)
add r4, r5, r0
add r5, r6, r0
add r6, r7, r0
add r4, r0, r0
jal f
sw $v0, 4(16)
lw $v0, 4(16)
jr $ra
f:
lw r4, 4(0)
add r4, r5, r0
add r5, r6, r0
add r6, r7, r0
add r4, r0, r0
lw r4, 8(0)
add r4, r5, r0
add r5, r6, r0
add r6, r7, r0
add r4, r0, r0
addi r3, r0, 0
sw r3, 4(20)
addi r3, r0, 2
sw r3, 4(20)
lw r3, 4(20)
sw r3, 12(20)
addi r3, r0, 0
sw r3, 4(20)
lw $v0, 12(20)
jr $ra
