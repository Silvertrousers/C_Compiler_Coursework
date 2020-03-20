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
beq r0, r0, f
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
addi r3, r0, 2
sw r3, 4(20)
sw r3, 4(20)
jr r31
