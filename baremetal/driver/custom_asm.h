.set regnum_x0  ,  0
.set regnum_x1  ,  1
.set regnum_x2  ,  2
.set regnum_x3  ,  3
.set regnum_x4  ,  4
.set regnum_x5  ,  5
.set regnum_x6  ,  6
.set regnum_x7  ,  7
.set regnum_x8  ,  8
.set regnum_x9  ,  9
.set regnum_x10 , 10
.set regnum_x11 , 11
.set regnum_x12 , 12
.set regnum_x13 , 13
.set regnum_x14 , 14
.set regnum_x15 , 15
.set regnum_x16 , 16
.set regnum_x17 , 17
.set regnum_x18 , 18
.set regnum_x19 , 19
.set regnum_x20 , 20
.set regnum_x21 , 21
.set regnum_x22 , 22
.set regnum_x23 , 23
.set regnum_x24 , 24
.set regnum_x25 , 25
.set regnum_x26 , 26
.set regnum_x27 , 27
.set regnum_x28 , 28
.set regnum_x29 , 29
.set regnum_x30 , 30
.set regnum_x31 , 31

.set regnum_zero,  0
.set regnum_ra  ,  1
.set regnum_sp  ,  2
.set regnum_gp  ,  3
.set regnum_tp  ,  4
.set regnum_t0  ,  5
.set regnum_t1  ,  6
.set regnum_t2  ,  7
.set regnum_s0  ,  8
.set regnum_s1  ,  9
.set regnum_a0  , 10
.set regnum_a1  , 11
.set regnum_a2  , 12
.set regnum_a3  , 13
.set regnum_a4  , 14
.set regnum_a5  , 15
.set regnum_a6  , 16
.set regnum_a7  , 17
.set regnum_s2  , 18
.set regnum_s3  , 19
.set regnum_s4  , 20
.set regnum_s5  , 21
.set regnum_s6  , 22
.set regnum_s7  , 23
.set regnum_s8  , 24
.set regnum_s9  , 25
.set regnum_s10 , 26
.set regnum_s11 , 27
.set regnum_t3  , 28
.set regnum_t4  , 29
.set regnum_t5  , 30
.set regnum_t6  , 31

.set CUSTOM0  , 0x0B
.set CUSTOM1  , 0x2B

#define opcode_R(opcode, func3, func7, rd, rs1, rs2)   \
.word ((opcode) | (regnum_##rd << 7) | (regnum_##rs1 << 15) | (regnum_##rs2 << 20) | ((func3) << 12) | ((func7) << 25));
