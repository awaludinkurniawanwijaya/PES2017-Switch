#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BB1908"))) PPC_WEAK_FUNC(sub_83BB1908);
PPC_FUNC_IMPL(__imp__sub_83BB1908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22392
	ctx.r3.s64 = ctx.r11.s64 + -22392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1914"))) PPC_WEAK_FUNC(sub_83BB1914);
PPC_FUNC_IMPL(__imp__sub_83BB1914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1918"))) PPC_WEAK_FUNC(sub_83BB1918);
PPC_FUNC_IMPL(__imp__sub_83BB1918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22384
	ctx.r3.s64 = ctx.r11.s64 + -22384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1924"))) PPC_WEAK_FUNC(sub_83BB1924);
PPC_FUNC_IMPL(__imp__sub_83BB1924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1928"))) PPC_WEAK_FUNC(sub_83BB1928);
PPC_FUNC_IMPL(__imp__sub_83BB1928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22376
	ctx.r3.s64 = ctx.r11.s64 + -22376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1934"))) PPC_WEAK_FUNC(sub_83BB1934);
PPC_FUNC_IMPL(__imp__sub_83BB1934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1938"))) PPC_WEAK_FUNC(sub_83BB1938);
PPC_FUNC_IMPL(__imp__sub_83BB1938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22368
	ctx.r3.s64 = ctx.r11.s64 + -22368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1944"))) PPC_WEAK_FUNC(sub_83BB1944);
PPC_FUNC_IMPL(__imp__sub_83BB1944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1948"))) PPC_WEAK_FUNC(sub_83BB1948);
PPC_FUNC_IMPL(__imp__sub_83BB1948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-13936
	ctx.r3.s64 = ctx.r11.s64 + -13936;
	// bl 0x83523120
	ctx.lr = 0x83BB1960;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22360
	ctx.r3.s64 = ctx.r10.s64 + -22360;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB196C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB197C"))) PPC_WEAK_FUNC(sub_83BB197C);
PPC_FUNC_IMPL(__imp__sub_83BB197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1980"))) PPC_WEAK_FUNC(sub_83BB1980);
PPC_FUNC_IMPL(__imp__sub_83BB1980) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13920
	ctx.r7.s64 = ctx.r8.s64 + -13920;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13920(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13920);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13920(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13920, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB19A8"))) PPC_WEAK_FUNC(sub_83BB19A8);
PPC_FUNC_IMPL(__imp__sub_83BB19A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-22196
	ctx.r6.s64 = ctx.r7.s64 + -22196;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22268(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22268);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13920(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13920);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-22196(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22196, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB19F0"))) PPC_WEAK_FUNC(sub_83BB19F0);
PPC_FUNC_IMPL(__imp__sub_83BB19F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22344
	ctx.r3.s64 = ctx.r11.s64 + -22344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB19FC"))) PPC_WEAK_FUNC(sub_83BB19FC);
PPC_FUNC_IMPL(__imp__sub_83BB19FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1A00"))) PPC_WEAK_FUNC(sub_83BB1A00);
PPC_FUNC_IMPL(__imp__sub_83BB1A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-13912
	ctx.r3.s64 = ctx.r11.s64 + -13912;
	// bl 0x8259af80
	ctx.lr = 0x83BB1A18;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22328
	ctx.r3.s64 = ctx.r10.s64 + -22328;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB1A24;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1A34"))) PPC_WEAK_FUNC(sub_83BB1A34);
PPC_FUNC_IMPL(__imp__sub_83BB1A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1A38"))) PPC_WEAK_FUNC(sub_83BB1A38);
PPC_FUNC_IMPL(__imp__sub_83BB1A38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13932
	ctx.r11.s64 = ctx.r8.s64 + -13932;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-22220(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22220);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22336
	ctx.r3.s64 = ctx.r6.s64 + -22336;
	// stw r10,-13932(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13932, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1A68"))) PPC_WEAK_FUNC(sub_83BB1A68);
PPC_FUNC_IMPL(__imp__sub_83BB1A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22320
	ctx.r3.s64 = ctx.r11.s64 + -22320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1A74"))) PPC_WEAK_FUNC(sub_83BB1A74);
PPC_FUNC_IMPL(__imp__sub_83BB1A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1A78"))) PPC_WEAK_FUNC(sub_83BB1A78);
PPC_FUNC_IMPL(__imp__sub_83BB1A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22312
	ctx.r3.s64 = ctx.r11.s64 + -22312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1A84"))) PPC_WEAK_FUNC(sub_83BB1A84);
PPC_FUNC_IMPL(__imp__sub_83BB1A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1A88"))) PPC_WEAK_FUNC(sub_83BB1A88);
PPC_FUNC_IMPL(__imp__sub_83BB1A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22304
	ctx.r3.s64 = ctx.r11.s64 + -22304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1A94"))) PPC_WEAK_FUNC(sub_83BB1A94);
PPC_FUNC_IMPL(__imp__sub_83BB1A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1A98"))) PPC_WEAK_FUNC(sub_83BB1A98);
PPC_FUNC_IMPL(__imp__sub_83BB1A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22296
	ctx.r3.s64 = ctx.r11.s64 + -22296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1AA4"))) PPC_WEAK_FUNC(sub_83BB1AA4);
PPC_FUNC_IMPL(__imp__sub_83BB1AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1AA8"))) PPC_WEAK_FUNC(sub_83BB1AA8);
PPC_FUNC_IMPL(__imp__sub_83BB1AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22288
	ctx.r3.s64 = ctx.r11.s64 + -22288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1AB4"))) PPC_WEAK_FUNC(sub_83BB1AB4);
PPC_FUNC_IMPL(__imp__sub_83BB1AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1AB8"))) PPC_WEAK_FUNC(sub_83BB1AB8);
PPC_FUNC_IMPL(__imp__sub_83BB1AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22280
	ctx.r3.s64 = ctx.r11.s64 + -22280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1AC4"))) PPC_WEAK_FUNC(sub_83BB1AC4);
PPC_FUNC_IMPL(__imp__sub_83BB1AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1AC8"))) PPC_WEAK_FUNC(sub_83BB1AC8);
PPC_FUNC_IMPL(__imp__sub_83BB1AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22272
	ctx.r3.s64 = ctx.r11.s64 + -22272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1AD4"))) PPC_WEAK_FUNC(sub_83BB1AD4);
PPC_FUNC_IMPL(__imp__sub_83BB1AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1AD8"))) PPC_WEAK_FUNC(sub_83BB1AD8);
PPC_FUNC_IMPL(__imp__sub_83BB1AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22264
	ctx.r3.s64 = ctx.r11.s64 + -22264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1AE4"))) PPC_WEAK_FUNC(sub_83BB1AE4);
PPC_FUNC_IMPL(__imp__sub_83BB1AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1AE8"))) PPC_WEAK_FUNC(sub_83BB1AE8);
PPC_FUNC_IMPL(__imp__sub_83BB1AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22256
	ctx.r3.s64 = ctx.r11.s64 + -22256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1AF4"))) PPC_WEAK_FUNC(sub_83BB1AF4);
PPC_FUNC_IMPL(__imp__sub_83BB1AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1AF8"))) PPC_WEAK_FUNC(sub_83BB1AF8);
PPC_FUNC_IMPL(__imp__sub_83BB1AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22248
	ctx.r3.s64 = ctx.r11.s64 + -22248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1B04"))) PPC_WEAK_FUNC(sub_83BB1B04);
PPC_FUNC_IMPL(__imp__sub_83BB1B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1B08"))) PPC_WEAK_FUNC(sub_83BB1B08);
PPC_FUNC_IMPL(__imp__sub_83BB1B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22240
	ctx.r3.s64 = ctx.r11.s64 + -22240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1B14"))) PPC_WEAK_FUNC(sub_83BB1B14);
PPC_FUNC_IMPL(__imp__sub_83BB1B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1B18"))) PPC_WEAK_FUNC(sub_83BB1B18);
PPC_FUNC_IMPL(__imp__sub_83BB1B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22232
	ctx.r3.s64 = ctx.r11.s64 + -22232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1B24"))) PPC_WEAK_FUNC(sub_83BB1B24);
PPC_FUNC_IMPL(__imp__sub_83BB1B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1B28"))) PPC_WEAK_FUNC(sub_83BB1B28);
PPC_FUNC_IMPL(__imp__sub_83BB1B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-13568
	ctx.r3.s64 = ctx.r11.s64 + -13568;
	// bl 0x83523120
	ctx.lr = 0x83BB1B40;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22224
	ctx.r3.s64 = ctx.r10.s64 + -22224;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB1B4C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1B5C"))) PPC_WEAK_FUNC(sub_83BB1B5C);
PPC_FUNC_IMPL(__imp__sub_83BB1B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1B60"))) PPC_WEAK_FUNC(sub_83BB1B60);
PPC_FUNC_IMPL(__imp__sub_83BB1B60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13552
	ctx.r7.s64 = ctx.r8.s64 + -13552;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13552(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13552);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13552(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13552, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1B88"))) PPC_WEAK_FUNC(sub_83BB1B88);
PPC_FUNC_IMPL(__imp__sub_83BB1B88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-22044
	ctx.r6.s64 = ctx.r7.s64 + -22044;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22116(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22116);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13552(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13552);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-22044(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22044, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1BD0"))) PPC_WEAK_FUNC(sub_83BB1BD0);
PPC_FUNC_IMPL(__imp__sub_83BB1BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22208
	ctx.r3.s64 = ctx.r11.s64 + -22208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1BDC"))) PPC_WEAK_FUNC(sub_83BB1BDC);
PPC_FUNC_IMPL(__imp__sub_83BB1BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1BE0"))) PPC_WEAK_FUNC(sub_83BB1BE0);
PPC_FUNC_IMPL(__imp__sub_83BB1BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-13544
	ctx.r3.s64 = ctx.r11.s64 + -13544;
	// bl 0x8259af80
	ctx.lr = 0x83BB1BF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22192
	ctx.r3.s64 = ctx.r10.s64 + -22192;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB1C04;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1C14"))) PPC_WEAK_FUNC(sub_83BB1C14);
PPC_FUNC_IMPL(__imp__sub_83BB1C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1C18"))) PPC_WEAK_FUNC(sub_83BB1C18);
PPC_FUNC_IMPL(__imp__sub_83BB1C18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13564
	ctx.r11.s64 = ctx.r8.s64 + -13564;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-22068(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22068);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22200
	ctx.r3.s64 = ctx.r6.s64 + -22200;
	// stw r10,-13564(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13564, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1C48"))) PPC_WEAK_FUNC(sub_83BB1C48);
PPC_FUNC_IMPL(__imp__sub_83BB1C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22184
	ctx.r3.s64 = ctx.r11.s64 + -22184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1C54"))) PPC_WEAK_FUNC(sub_83BB1C54);
PPC_FUNC_IMPL(__imp__sub_83BB1C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1C58"))) PPC_WEAK_FUNC(sub_83BB1C58);
PPC_FUNC_IMPL(__imp__sub_83BB1C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22176
	ctx.r3.s64 = ctx.r11.s64 + -22176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1C64"))) PPC_WEAK_FUNC(sub_83BB1C64);
PPC_FUNC_IMPL(__imp__sub_83BB1C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1C68"))) PPC_WEAK_FUNC(sub_83BB1C68);
PPC_FUNC_IMPL(__imp__sub_83BB1C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22168
	ctx.r3.s64 = ctx.r11.s64 + -22168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1C74"))) PPC_WEAK_FUNC(sub_83BB1C74);
PPC_FUNC_IMPL(__imp__sub_83BB1C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1C78"))) PPC_WEAK_FUNC(sub_83BB1C78);
PPC_FUNC_IMPL(__imp__sub_83BB1C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22160
	ctx.r3.s64 = ctx.r11.s64 + -22160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1C84"))) PPC_WEAK_FUNC(sub_83BB1C84);
PPC_FUNC_IMPL(__imp__sub_83BB1C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1C88"))) PPC_WEAK_FUNC(sub_83BB1C88);
PPC_FUNC_IMPL(__imp__sub_83BB1C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22152
	ctx.r3.s64 = ctx.r11.s64 + -22152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1C94"))) PPC_WEAK_FUNC(sub_83BB1C94);
PPC_FUNC_IMPL(__imp__sub_83BB1C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1C98"))) PPC_WEAK_FUNC(sub_83BB1C98);
PPC_FUNC_IMPL(__imp__sub_83BB1C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22144
	ctx.r3.s64 = ctx.r11.s64 + -22144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1CA4"))) PPC_WEAK_FUNC(sub_83BB1CA4);
PPC_FUNC_IMPL(__imp__sub_83BB1CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1CA8"))) PPC_WEAK_FUNC(sub_83BB1CA8);
PPC_FUNC_IMPL(__imp__sub_83BB1CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22136
	ctx.r3.s64 = ctx.r11.s64 + -22136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1CB4"))) PPC_WEAK_FUNC(sub_83BB1CB4);
PPC_FUNC_IMPL(__imp__sub_83BB1CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1CB8"))) PPC_WEAK_FUNC(sub_83BB1CB8);
PPC_FUNC_IMPL(__imp__sub_83BB1CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22128
	ctx.r3.s64 = ctx.r11.s64 + -22128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1CC4"))) PPC_WEAK_FUNC(sub_83BB1CC4);
PPC_FUNC_IMPL(__imp__sub_83BB1CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1CC8"))) PPC_WEAK_FUNC(sub_83BB1CC8);
PPC_FUNC_IMPL(__imp__sub_83BB1CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22120
	ctx.r3.s64 = ctx.r11.s64 + -22120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1CD4"))) PPC_WEAK_FUNC(sub_83BB1CD4);
PPC_FUNC_IMPL(__imp__sub_83BB1CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1CD8"))) PPC_WEAK_FUNC(sub_83BB1CD8);
PPC_FUNC_IMPL(__imp__sub_83BB1CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22112
	ctx.r3.s64 = ctx.r11.s64 + -22112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1CE4"))) PPC_WEAK_FUNC(sub_83BB1CE4);
PPC_FUNC_IMPL(__imp__sub_83BB1CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1CE8"))) PPC_WEAK_FUNC(sub_83BB1CE8);
PPC_FUNC_IMPL(__imp__sub_83BB1CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22104
	ctx.r3.s64 = ctx.r11.s64 + -22104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1CF4"))) PPC_WEAK_FUNC(sub_83BB1CF4);
PPC_FUNC_IMPL(__imp__sub_83BB1CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1CF8"))) PPC_WEAK_FUNC(sub_83BB1CF8);
PPC_FUNC_IMPL(__imp__sub_83BB1CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22096
	ctx.r3.s64 = ctx.r11.s64 + -22096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1D04"))) PPC_WEAK_FUNC(sub_83BB1D04);
PPC_FUNC_IMPL(__imp__sub_83BB1D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1D08"))) PPC_WEAK_FUNC(sub_83BB1D08);
PPC_FUNC_IMPL(__imp__sub_83BB1D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-13200
	ctx.r3.s64 = ctx.r11.s64 + -13200;
	// bl 0x83523120
	ctx.lr = 0x83BB1D20;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22088
	ctx.r3.s64 = ctx.r10.s64 + -22088;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB1D2C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1D3C"))) PPC_WEAK_FUNC(sub_83BB1D3C);
PPC_FUNC_IMPL(__imp__sub_83BB1D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1D40"))) PPC_WEAK_FUNC(sub_83BB1D40);
PPC_FUNC_IMPL(__imp__sub_83BB1D40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13184
	ctx.r7.s64 = ctx.r8.s64 + -13184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13184);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13184(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13184, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1D68"))) PPC_WEAK_FUNC(sub_83BB1D68);
PPC_FUNC_IMPL(__imp__sub_83BB1D68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-21904
	ctx.r6.s64 = ctx.r7.s64 + -21904;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21976(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21976);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13184(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13184);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-21904(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21904, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1DB0"))) PPC_WEAK_FUNC(sub_83BB1DB0);
PPC_FUNC_IMPL(__imp__sub_83BB1DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22072
	ctx.r3.s64 = ctx.r11.s64 + -22072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1DBC"))) PPC_WEAK_FUNC(sub_83BB1DBC);
PPC_FUNC_IMPL(__imp__sub_83BB1DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1DC0"))) PPC_WEAK_FUNC(sub_83BB1DC0);
PPC_FUNC_IMPL(__imp__sub_83BB1DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-13176
	ctx.r3.s64 = ctx.r11.s64 + -13176;
	// bl 0x8259af80
	ctx.lr = 0x83BB1DD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22056
	ctx.r3.s64 = ctx.r10.s64 + -22056;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB1DE4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1DF4"))) PPC_WEAK_FUNC(sub_83BB1DF4);
PPC_FUNC_IMPL(__imp__sub_83BB1DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1DF8"))) PPC_WEAK_FUNC(sub_83BB1DF8);
PPC_FUNC_IMPL(__imp__sub_83BB1DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13196
	ctx.r11.s64 = ctx.r8.s64 + -13196;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-21928(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21928);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22064
	ctx.r3.s64 = ctx.r6.s64 + -22064;
	// stw r10,-13196(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13196, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1E28"))) PPC_WEAK_FUNC(sub_83BB1E28);
PPC_FUNC_IMPL(__imp__sub_83BB1E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22048
	ctx.r3.s64 = ctx.r11.s64 + -22048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1E34"))) PPC_WEAK_FUNC(sub_83BB1E34);
PPC_FUNC_IMPL(__imp__sub_83BB1E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1E38"))) PPC_WEAK_FUNC(sub_83BB1E38);
PPC_FUNC_IMPL(__imp__sub_83BB1E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22040
	ctx.r3.s64 = ctx.r11.s64 + -22040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1E44"))) PPC_WEAK_FUNC(sub_83BB1E44);
PPC_FUNC_IMPL(__imp__sub_83BB1E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1E48"))) PPC_WEAK_FUNC(sub_83BB1E48);
PPC_FUNC_IMPL(__imp__sub_83BB1E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22032
	ctx.r3.s64 = ctx.r11.s64 + -22032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1E54"))) PPC_WEAK_FUNC(sub_83BB1E54);
PPC_FUNC_IMPL(__imp__sub_83BB1E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1E58"))) PPC_WEAK_FUNC(sub_83BB1E58);
PPC_FUNC_IMPL(__imp__sub_83BB1E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22024
	ctx.r3.s64 = ctx.r11.s64 + -22024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1E64"))) PPC_WEAK_FUNC(sub_83BB1E64);
PPC_FUNC_IMPL(__imp__sub_83BB1E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1E68"))) PPC_WEAK_FUNC(sub_83BB1E68);
PPC_FUNC_IMPL(__imp__sub_83BB1E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22016
	ctx.r3.s64 = ctx.r11.s64 + -22016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1E74"))) PPC_WEAK_FUNC(sub_83BB1E74);
PPC_FUNC_IMPL(__imp__sub_83BB1E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1E78"))) PPC_WEAK_FUNC(sub_83BB1E78);
PPC_FUNC_IMPL(__imp__sub_83BB1E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22008
	ctx.r3.s64 = ctx.r11.s64 + -22008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1E84"))) PPC_WEAK_FUNC(sub_83BB1E84);
PPC_FUNC_IMPL(__imp__sub_83BB1E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1E88"))) PPC_WEAK_FUNC(sub_83BB1E88);
PPC_FUNC_IMPL(__imp__sub_83BB1E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22000
	ctx.r3.s64 = ctx.r11.s64 + -22000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1E94"))) PPC_WEAK_FUNC(sub_83BB1E94);
PPC_FUNC_IMPL(__imp__sub_83BB1E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1E98"))) PPC_WEAK_FUNC(sub_83BB1E98);
PPC_FUNC_IMPL(__imp__sub_83BB1E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21992
	ctx.r3.s64 = ctx.r11.s64 + -21992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1EA4"))) PPC_WEAK_FUNC(sub_83BB1EA4);
PPC_FUNC_IMPL(__imp__sub_83BB1EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1EA8"))) PPC_WEAK_FUNC(sub_83BB1EA8);
PPC_FUNC_IMPL(__imp__sub_83BB1EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21984
	ctx.r3.s64 = ctx.r11.s64 + -21984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1EB4"))) PPC_WEAK_FUNC(sub_83BB1EB4);
PPC_FUNC_IMPL(__imp__sub_83BB1EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1EB8"))) PPC_WEAK_FUNC(sub_83BB1EB8);
PPC_FUNC_IMPL(__imp__sub_83BB1EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21976
	ctx.r3.s64 = ctx.r11.s64 + -21976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1EC4"))) PPC_WEAK_FUNC(sub_83BB1EC4);
PPC_FUNC_IMPL(__imp__sub_83BB1EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1EC8"))) PPC_WEAK_FUNC(sub_83BB1EC8);
PPC_FUNC_IMPL(__imp__sub_83BB1EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21968
	ctx.r3.s64 = ctx.r11.s64 + -21968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1ED4"))) PPC_WEAK_FUNC(sub_83BB1ED4);
PPC_FUNC_IMPL(__imp__sub_83BB1ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1ED8"))) PPC_WEAK_FUNC(sub_83BB1ED8);
PPC_FUNC_IMPL(__imp__sub_83BB1ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21960
	ctx.r3.s64 = ctx.r11.s64 + -21960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1EE4"))) PPC_WEAK_FUNC(sub_83BB1EE4);
PPC_FUNC_IMPL(__imp__sub_83BB1EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1EE8"))) PPC_WEAK_FUNC(sub_83BB1EE8);
PPC_FUNC_IMPL(__imp__sub_83BB1EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-12832
	ctx.r3.s64 = ctx.r11.s64 + -12832;
	// bl 0x83523120
	ctx.lr = 0x83BB1F00;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-21952
	ctx.r3.s64 = ctx.r10.s64 + -21952;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB1F0C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1F1C"))) PPC_WEAK_FUNC(sub_83BB1F1C);
PPC_FUNC_IMPL(__imp__sub_83BB1F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1F20"))) PPC_WEAK_FUNC(sub_83BB1F20);
PPC_FUNC_IMPL(__imp__sub_83BB1F20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12816
	ctx.r7.s64 = ctx.r8.s64 + -12816;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12816(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12816);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12816(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12816, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1F48"))) PPC_WEAK_FUNC(sub_83BB1F48);
PPC_FUNC_IMPL(__imp__sub_83BB1F48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-21768
	ctx.r6.s64 = ctx.r7.s64 + -21768;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21840(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21840);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12816(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12816);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-21768(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21768, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1F90"))) PPC_WEAK_FUNC(sub_83BB1F90);
PPC_FUNC_IMPL(__imp__sub_83BB1F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21936
	ctx.r3.s64 = ctx.r11.s64 + -21936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1F9C"))) PPC_WEAK_FUNC(sub_83BB1F9C);
PPC_FUNC_IMPL(__imp__sub_83BB1F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1FA0"))) PPC_WEAK_FUNC(sub_83BB1FA0);
PPC_FUNC_IMPL(__imp__sub_83BB1FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-12808
	ctx.r3.s64 = ctx.r11.s64 + -12808;
	// bl 0x8259af80
	ctx.lr = 0x83BB1FB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-21920
	ctx.r3.s64 = ctx.r10.s64 + -21920;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB1FC4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1FD4"))) PPC_WEAK_FUNC(sub_83BB1FD4);
PPC_FUNC_IMPL(__imp__sub_83BB1FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1FD8"))) PPC_WEAK_FUNC(sub_83BB1FD8);
PPC_FUNC_IMPL(__imp__sub_83BB1FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12828
	ctx.r11.s64 = ctx.r8.s64 + -12828;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-21792(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21792);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21928
	ctx.r3.s64 = ctx.r6.s64 + -21928;
	// stw r10,-12828(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12828, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2008"))) PPC_WEAK_FUNC(sub_83BB2008);
PPC_FUNC_IMPL(__imp__sub_83BB2008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21912
	ctx.r3.s64 = ctx.r11.s64 + -21912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2014"))) PPC_WEAK_FUNC(sub_83BB2014);
PPC_FUNC_IMPL(__imp__sub_83BB2014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2018"))) PPC_WEAK_FUNC(sub_83BB2018);
PPC_FUNC_IMPL(__imp__sub_83BB2018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21904
	ctx.r3.s64 = ctx.r11.s64 + -21904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2024"))) PPC_WEAK_FUNC(sub_83BB2024);
PPC_FUNC_IMPL(__imp__sub_83BB2024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2028"))) PPC_WEAK_FUNC(sub_83BB2028);
PPC_FUNC_IMPL(__imp__sub_83BB2028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21896
	ctx.r3.s64 = ctx.r11.s64 + -21896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2034"))) PPC_WEAK_FUNC(sub_83BB2034);
PPC_FUNC_IMPL(__imp__sub_83BB2034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2038"))) PPC_WEAK_FUNC(sub_83BB2038);
PPC_FUNC_IMPL(__imp__sub_83BB2038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21888
	ctx.r3.s64 = ctx.r11.s64 + -21888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2044"))) PPC_WEAK_FUNC(sub_83BB2044);
PPC_FUNC_IMPL(__imp__sub_83BB2044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2048"))) PPC_WEAK_FUNC(sub_83BB2048);
PPC_FUNC_IMPL(__imp__sub_83BB2048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21880
	ctx.r3.s64 = ctx.r11.s64 + -21880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2054"))) PPC_WEAK_FUNC(sub_83BB2054);
PPC_FUNC_IMPL(__imp__sub_83BB2054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2058"))) PPC_WEAK_FUNC(sub_83BB2058);
PPC_FUNC_IMPL(__imp__sub_83BB2058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21872
	ctx.r3.s64 = ctx.r11.s64 + -21872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2064"))) PPC_WEAK_FUNC(sub_83BB2064);
PPC_FUNC_IMPL(__imp__sub_83BB2064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2068"))) PPC_WEAK_FUNC(sub_83BB2068);
PPC_FUNC_IMPL(__imp__sub_83BB2068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21864
	ctx.r3.s64 = ctx.r11.s64 + -21864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2074"))) PPC_WEAK_FUNC(sub_83BB2074);
PPC_FUNC_IMPL(__imp__sub_83BB2074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2078"))) PPC_WEAK_FUNC(sub_83BB2078);
PPC_FUNC_IMPL(__imp__sub_83BB2078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21856
	ctx.r3.s64 = ctx.r11.s64 + -21856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2084"))) PPC_WEAK_FUNC(sub_83BB2084);
PPC_FUNC_IMPL(__imp__sub_83BB2084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2088"))) PPC_WEAK_FUNC(sub_83BB2088);
PPC_FUNC_IMPL(__imp__sub_83BB2088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21848
	ctx.r3.s64 = ctx.r11.s64 + -21848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2094"))) PPC_WEAK_FUNC(sub_83BB2094);
PPC_FUNC_IMPL(__imp__sub_83BB2094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2098"))) PPC_WEAK_FUNC(sub_83BB2098);
PPC_FUNC_IMPL(__imp__sub_83BB2098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21840
	ctx.r3.s64 = ctx.r11.s64 + -21840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB20A4"))) PPC_WEAK_FUNC(sub_83BB20A4);
PPC_FUNC_IMPL(__imp__sub_83BB20A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB20A8"))) PPC_WEAK_FUNC(sub_83BB20A8);
PPC_FUNC_IMPL(__imp__sub_83BB20A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21832
	ctx.r3.s64 = ctx.r11.s64 + -21832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB20B4"))) PPC_WEAK_FUNC(sub_83BB20B4);
PPC_FUNC_IMPL(__imp__sub_83BB20B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB20B8"))) PPC_WEAK_FUNC(sub_83BB20B8);
PPC_FUNC_IMPL(__imp__sub_83BB20B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21824
	ctx.r3.s64 = ctx.r11.s64 + -21824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB20C4"))) PPC_WEAK_FUNC(sub_83BB20C4);
PPC_FUNC_IMPL(__imp__sub_83BB20C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB20C8"))) PPC_WEAK_FUNC(sub_83BB20C8);
PPC_FUNC_IMPL(__imp__sub_83BB20C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-12464
	ctx.r3.s64 = ctx.r11.s64 + -12464;
	// bl 0x83523120
	ctx.lr = 0x83BB20E0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-21816
	ctx.r3.s64 = ctx.r10.s64 + -21816;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB20EC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB20FC"))) PPC_WEAK_FUNC(sub_83BB20FC);
PPC_FUNC_IMPL(__imp__sub_83BB20FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2100"))) PPC_WEAK_FUNC(sub_83BB2100);
PPC_FUNC_IMPL(__imp__sub_83BB2100) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12448
	ctx.r7.s64 = ctx.r8.s64 + -12448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB2128"))) PPC_WEAK_FUNC(sub_83BB2128);
PPC_FUNC_IMPL(__imp__sub_83BB2128) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-21596
	ctx.r6.s64 = ctx.r7.s64 + -21596;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21668(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21668);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12448);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-21596(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21596, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB2170"))) PPC_WEAK_FUNC(sub_83BB2170);
PPC_FUNC_IMPL(__imp__sub_83BB2170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21800
	ctx.r3.s64 = ctx.r11.s64 + -21800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB217C"))) PPC_WEAK_FUNC(sub_83BB217C);
PPC_FUNC_IMPL(__imp__sub_83BB217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2180"))) PPC_WEAK_FUNC(sub_83BB2180);
PPC_FUNC_IMPL(__imp__sub_83BB2180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-12440
	ctx.r3.s64 = ctx.r11.s64 + -12440;
	// bl 0x8259af80
	ctx.lr = 0x83BB2198;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-21784
	ctx.r3.s64 = ctx.r10.s64 + -21784;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB21A4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB21B4"))) PPC_WEAK_FUNC(sub_83BB21B4);
PPC_FUNC_IMPL(__imp__sub_83BB21B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB21B8"))) PPC_WEAK_FUNC(sub_83BB21B8);
PPC_FUNC_IMPL(__imp__sub_83BB21B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12460
	ctx.r11.s64 = ctx.r8.s64 + -12460;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-21620(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21620);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21792
	ctx.r3.s64 = ctx.r6.s64 + -21792;
	// stw r10,-12460(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12460, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB21E8"))) PPC_WEAK_FUNC(sub_83BB21E8);
PPC_FUNC_IMPL(__imp__sub_83BB21E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21776
	ctx.r3.s64 = ctx.r11.s64 + -21776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB21F4"))) PPC_WEAK_FUNC(sub_83BB21F4);
PPC_FUNC_IMPL(__imp__sub_83BB21F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB21F8"))) PPC_WEAK_FUNC(sub_83BB21F8);
PPC_FUNC_IMPL(__imp__sub_83BB21F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21768
	ctx.r3.s64 = ctx.r11.s64 + -21768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2204"))) PPC_WEAK_FUNC(sub_83BB2204);
PPC_FUNC_IMPL(__imp__sub_83BB2204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2208"))) PPC_WEAK_FUNC(sub_83BB2208);
PPC_FUNC_IMPL(__imp__sub_83BB2208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21760
	ctx.r3.s64 = ctx.r11.s64 + -21760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2214"))) PPC_WEAK_FUNC(sub_83BB2214);
PPC_FUNC_IMPL(__imp__sub_83BB2214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2218"))) PPC_WEAK_FUNC(sub_83BB2218);
PPC_FUNC_IMPL(__imp__sub_83BB2218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21752
	ctx.r3.s64 = ctx.r11.s64 + -21752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2224"))) PPC_WEAK_FUNC(sub_83BB2224);
PPC_FUNC_IMPL(__imp__sub_83BB2224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2228"))) PPC_WEAK_FUNC(sub_83BB2228);
PPC_FUNC_IMPL(__imp__sub_83BB2228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21744
	ctx.r3.s64 = ctx.r11.s64 + -21744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2234"))) PPC_WEAK_FUNC(sub_83BB2234);
PPC_FUNC_IMPL(__imp__sub_83BB2234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2238"))) PPC_WEAK_FUNC(sub_83BB2238);
PPC_FUNC_IMPL(__imp__sub_83BB2238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21736
	ctx.r3.s64 = ctx.r11.s64 + -21736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2244"))) PPC_WEAK_FUNC(sub_83BB2244);
PPC_FUNC_IMPL(__imp__sub_83BB2244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2248"))) PPC_WEAK_FUNC(sub_83BB2248);
PPC_FUNC_IMPL(__imp__sub_83BB2248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21728
	ctx.r3.s64 = ctx.r11.s64 + -21728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2254"))) PPC_WEAK_FUNC(sub_83BB2254);
PPC_FUNC_IMPL(__imp__sub_83BB2254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2258"))) PPC_WEAK_FUNC(sub_83BB2258);
PPC_FUNC_IMPL(__imp__sub_83BB2258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21720
	ctx.r3.s64 = ctx.r11.s64 + -21720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2264"))) PPC_WEAK_FUNC(sub_83BB2264);
PPC_FUNC_IMPL(__imp__sub_83BB2264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2268"))) PPC_WEAK_FUNC(sub_83BB2268);
PPC_FUNC_IMPL(__imp__sub_83BB2268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21712
	ctx.r3.s64 = ctx.r11.s64 + -21712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2274"))) PPC_WEAK_FUNC(sub_83BB2274);
PPC_FUNC_IMPL(__imp__sub_83BB2274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2278"))) PPC_WEAK_FUNC(sub_83BB2278);
PPC_FUNC_IMPL(__imp__sub_83BB2278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21704
	ctx.r3.s64 = ctx.r11.s64 + -21704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2284"))) PPC_WEAK_FUNC(sub_83BB2284);
PPC_FUNC_IMPL(__imp__sub_83BB2284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2288"))) PPC_WEAK_FUNC(sub_83BB2288);
PPC_FUNC_IMPL(__imp__sub_83BB2288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21696
	ctx.r3.s64 = ctx.r11.s64 + -21696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2294"))) PPC_WEAK_FUNC(sub_83BB2294);
PPC_FUNC_IMPL(__imp__sub_83BB2294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2298"))) PPC_WEAK_FUNC(sub_83BB2298);
PPC_FUNC_IMPL(__imp__sub_83BB2298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21688
	ctx.r3.s64 = ctx.r11.s64 + -21688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB22A4"))) PPC_WEAK_FUNC(sub_83BB22A4);
PPC_FUNC_IMPL(__imp__sub_83BB22A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB22A8"))) PPC_WEAK_FUNC(sub_83BB22A8);
PPC_FUNC_IMPL(__imp__sub_83BB22A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-12096
	ctx.r3.s64 = ctx.r11.s64 + -12096;
	// bl 0x83523120
	ctx.lr = 0x83BB22C0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-21680
	ctx.r3.s64 = ctx.r10.s64 + -21680;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB22CC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB22DC"))) PPC_WEAK_FUNC(sub_83BB22DC);
PPC_FUNC_IMPL(__imp__sub_83BB22DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB22E0"))) PPC_WEAK_FUNC(sub_83BB22E0);
PPC_FUNC_IMPL(__imp__sub_83BB22E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12080
	ctx.r7.s64 = ctx.r8.s64 + -12080;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12080(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12080);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12080(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12080, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB2308"))) PPC_WEAK_FUNC(sub_83BB2308);
PPC_FUNC_IMPL(__imp__sub_83BB2308) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-21460
	ctx.r6.s64 = ctx.r7.s64 + -21460;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21532(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21532);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12080(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12080);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-21460(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21460, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB2350"))) PPC_WEAK_FUNC(sub_83BB2350);
PPC_FUNC_IMPL(__imp__sub_83BB2350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21664
	ctx.r3.s64 = ctx.r11.s64 + -21664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB235C"))) PPC_WEAK_FUNC(sub_83BB235C);
PPC_FUNC_IMPL(__imp__sub_83BB235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2360"))) PPC_WEAK_FUNC(sub_83BB2360);
PPC_FUNC_IMPL(__imp__sub_83BB2360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-12072
	ctx.r3.s64 = ctx.r11.s64 + -12072;
	// bl 0x8259af80
	ctx.lr = 0x83BB2378;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-21648
	ctx.r3.s64 = ctx.r10.s64 + -21648;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB2384;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB2394"))) PPC_WEAK_FUNC(sub_83BB2394);
PPC_FUNC_IMPL(__imp__sub_83BB2394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2398"))) PPC_WEAK_FUNC(sub_83BB2398);
PPC_FUNC_IMPL(__imp__sub_83BB2398) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12092
	ctx.r11.s64 = ctx.r8.s64 + -12092;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-21484(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21484);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21656
	ctx.r3.s64 = ctx.r6.s64 + -21656;
	// stw r10,-12092(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12092, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB23C8"))) PPC_WEAK_FUNC(sub_83BB23C8);
PPC_FUNC_IMPL(__imp__sub_83BB23C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21640
	ctx.r3.s64 = ctx.r11.s64 + -21640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB23D4"))) PPC_WEAK_FUNC(sub_83BB23D4);
PPC_FUNC_IMPL(__imp__sub_83BB23D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB23D8"))) PPC_WEAK_FUNC(sub_83BB23D8);
PPC_FUNC_IMPL(__imp__sub_83BB23D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21632
	ctx.r3.s64 = ctx.r11.s64 + -21632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB23E4"))) PPC_WEAK_FUNC(sub_83BB23E4);
PPC_FUNC_IMPL(__imp__sub_83BB23E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB23E8"))) PPC_WEAK_FUNC(sub_83BB23E8);
PPC_FUNC_IMPL(__imp__sub_83BB23E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21624
	ctx.r3.s64 = ctx.r11.s64 + -21624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB23F4"))) PPC_WEAK_FUNC(sub_83BB23F4);
PPC_FUNC_IMPL(__imp__sub_83BB23F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB23F8"))) PPC_WEAK_FUNC(sub_83BB23F8);
PPC_FUNC_IMPL(__imp__sub_83BB23F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21616
	ctx.r3.s64 = ctx.r11.s64 + -21616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2404"))) PPC_WEAK_FUNC(sub_83BB2404);
PPC_FUNC_IMPL(__imp__sub_83BB2404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2408"))) PPC_WEAK_FUNC(sub_83BB2408);
PPC_FUNC_IMPL(__imp__sub_83BB2408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21608
	ctx.r3.s64 = ctx.r11.s64 + -21608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2414"))) PPC_WEAK_FUNC(sub_83BB2414);
PPC_FUNC_IMPL(__imp__sub_83BB2414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2418"))) PPC_WEAK_FUNC(sub_83BB2418);
PPC_FUNC_IMPL(__imp__sub_83BB2418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21600
	ctx.r3.s64 = ctx.r11.s64 + -21600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2424"))) PPC_WEAK_FUNC(sub_83BB2424);
PPC_FUNC_IMPL(__imp__sub_83BB2424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2428"))) PPC_WEAK_FUNC(sub_83BB2428);
PPC_FUNC_IMPL(__imp__sub_83BB2428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21592
	ctx.r3.s64 = ctx.r11.s64 + -21592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2434"))) PPC_WEAK_FUNC(sub_83BB2434);
PPC_FUNC_IMPL(__imp__sub_83BB2434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2438"))) PPC_WEAK_FUNC(sub_83BB2438);
PPC_FUNC_IMPL(__imp__sub_83BB2438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21584
	ctx.r3.s64 = ctx.r11.s64 + -21584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2444"))) PPC_WEAK_FUNC(sub_83BB2444);
PPC_FUNC_IMPL(__imp__sub_83BB2444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2448"))) PPC_WEAK_FUNC(sub_83BB2448);
PPC_FUNC_IMPL(__imp__sub_83BB2448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21576
	ctx.r3.s64 = ctx.r11.s64 + -21576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2454"))) PPC_WEAK_FUNC(sub_83BB2454);
PPC_FUNC_IMPL(__imp__sub_83BB2454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2458"))) PPC_WEAK_FUNC(sub_83BB2458);
PPC_FUNC_IMPL(__imp__sub_83BB2458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21568
	ctx.r3.s64 = ctx.r11.s64 + -21568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2464"))) PPC_WEAK_FUNC(sub_83BB2464);
PPC_FUNC_IMPL(__imp__sub_83BB2464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2468"))) PPC_WEAK_FUNC(sub_83BB2468);
PPC_FUNC_IMPL(__imp__sub_83BB2468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21560
	ctx.r3.s64 = ctx.r11.s64 + -21560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2474"))) PPC_WEAK_FUNC(sub_83BB2474);
PPC_FUNC_IMPL(__imp__sub_83BB2474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2478"))) PPC_WEAK_FUNC(sub_83BB2478);
PPC_FUNC_IMPL(__imp__sub_83BB2478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21552
	ctx.r3.s64 = ctx.r11.s64 + -21552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2484"))) PPC_WEAK_FUNC(sub_83BB2484);
PPC_FUNC_IMPL(__imp__sub_83BB2484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2488"))) PPC_WEAK_FUNC(sub_83BB2488);
PPC_FUNC_IMPL(__imp__sub_83BB2488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-11728
	ctx.r3.s64 = ctx.r11.s64 + -11728;
	// bl 0x83523120
	ctx.lr = 0x83BB24A0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-21544
	ctx.r3.s64 = ctx.r10.s64 + -21544;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB24AC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB24BC"))) PPC_WEAK_FUNC(sub_83BB24BC);
PPC_FUNC_IMPL(__imp__sub_83BB24BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB24C0"))) PPC_WEAK_FUNC(sub_83BB24C0);
PPC_FUNC_IMPL(__imp__sub_83BB24C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11712
	ctx.r7.s64 = ctx.r8.s64 + -11712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11712);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11712(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11712, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB24E8"))) PPC_WEAK_FUNC(sub_83BB24E8);
PPC_FUNC_IMPL(__imp__sub_83BB24E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-21316
	ctx.r6.s64 = ctx.r7.s64 + -21316;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21388(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21388);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11712(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11712);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-21316(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21316, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB2530"))) PPC_WEAK_FUNC(sub_83BB2530);
PPC_FUNC_IMPL(__imp__sub_83BB2530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21528
	ctx.r3.s64 = ctx.r11.s64 + -21528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB253C"))) PPC_WEAK_FUNC(sub_83BB253C);
PPC_FUNC_IMPL(__imp__sub_83BB253C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2540"))) PPC_WEAK_FUNC(sub_83BB2540);
PPC_FUNC_IMPL(__imp__sub_83BB2540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-11704
	ctx.r3.s64 = ctx.r11.s64 + -11704;
	// bl 0x8259af80
	ctx.lr = 0x83BB2558;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-21512
	ctx.r3.s64 = ctx.r10.s64 + -21512;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB2564;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB2574"))) PPC_WEAK_FUNC(sub_83BB2574);
PPC_FUNC_IMPL(__imp__sub_83BB2574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2578"))) PPC_WEAK_FUNC(sub_83BB2578);
PPC_FUNC_IMPL(__imp__sub_83BB2578) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11724
	ctx.r11.s64 = ctx.r8.s64 + -11724;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-21340(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21340);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21520
	ctx.r3.s64 = ctx.r6.s64 + -21520;
	// stw r10,-11724(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11724, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB25A8"))) PPC_WEAK_FUNC(sub_83BB25A8);
PPC_FUNC_IMPL(__imp__sub_83BB25A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21504
	ctx.r3.s64 = ctx.r11.s64 + -21504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB25B4"))) PPC_WEAK_FUNC(sub_83BB25B4);
PPC_FUNC_IMPL(__imp__sub_83BB25B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB25B8"))) PPC_WEAK_FUNC(sub_83BB25B8);
PPC_FUNC_IMPL(__imp__sub_83BB25B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21496
	ctx.r3.s64 = ctx.r11.s64 + -21496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB25C4"))) PPC_WEAK_FUNC(sub_83BB25C4);
PPC_FUNC_IMPL(__imp__sub_83BB25C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB25C8"))) PPC_WEAK_FUNC(sub_83BB25C8);
PPC_FUNC_IMPL(__imp__sub_83BB25C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21488
	ctx.r3.s64 = ctx.r11.s64 + -21488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB25D4"))) PPC_WEAK_FUNC(sub_83BB25D4);
PPC_FUNC_IMPL(__imp__sub_83BB25D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB25D8"))) PPC_WEAK_FUNC(sub_83BB25D8);
PPC_FUNC_IMPL(__imp__sub_83BB25D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21480
	ctx.r3.s64 = ctx.r11.s64 + -21480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB25E4"))) PPC_WEAK_FUNC(sub_83BB25E4);
PPC_FUNC_IMPL(__imp__sub_83BB25E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB25E8"))) PPC_WEAK_FUNC(sub_83BB25E8);
PPC_FUNC_IMPL(__imp__sub_83BB25E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21472
	ctx.r3.s64 = ctx.r11.s64 + -21472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB25F4"))) PPC_WEAK_FUNC(sub_83BB25F4);
PPC_FUNC_IMPL(__imp__sub_83BB25F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB25F8"))) PPC_WEAK_FUNC(sub_83BB25F8);
PPC_FUNC_IMPL(__imp__sub_83BB25F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21464
	ctx.r3.s64 = ctx.r11.s64 + -21464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2604"))) PPC_WEAK_FUNC(sub_83BB2604);
PPC_FUNC_IMPL(__imp__sub_83BB2604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2608"))) PPC_WEAK_FUNC(sub_83BB2608);
PPC_FUNC_IMPL(__imp__sub_83BB2608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21456
	ctx.r3.s64 = ctx.r11.s64 + -21456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2614"))) PPC_WEAK_FUNC(sub_83BB2614);
PPC_FUNC_IMPL(__imp__sub_83BB2614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2618"))) PPC_WEAK_FUNC(sub_83BB2618);
PPC_FUNC_IMPL(__imp__sub_83BB2618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21448
	ctx.r3.s64 = ctx.r11.s64 + -21448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2624"))) PPC_WEAK_FUNC(sub_83BB2624);
PPC_FUNC_IMPL(__imp__sub_83BB2624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2628"))) PPC_WEAK_FUNC(sub_83BB2628);
PPC_FUNC_IMPL(__imp__sub_83BB2628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21440
	ctx.r3.s64 = ctx.r11.s64 + -21440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2634"))) PPC_WEAK_FUNC(sub_83BB2634);
PPC_FUNC_IMPL(__imp__sub_83BB2634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2638"))) PPC_WEAK_FUNC(sub_83BB2638);
PPC_FUNC_IMPL(__imp__sub_83BB2638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21432
	ctx.r3.s64 = ctx.r11.s64 + -21432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2644"))) PPC_WEAK_FUNC(sub_83BB2644);
PPC_FUNC_IMPL(__imp__sub_83BB2644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2648"))) PPC_WEAK_FUNC(sub_83BB2648);
PPC_FUNC_IMPL(__imp__sub_83BB2648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21424
	ctx.r3.s64 = ctx.r11.s64 + -21424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2654"))) PPC_WEAK_FUNC(sub_83BB2654);
PPC_FUNC_IMPL(__imp__sub_83BB2654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2658"))) PPC_WEAK_FUNC(sub_83BB2658);
PPC_FUNC_IMPL(__imp__sub_83BB2658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21416
	ctx.r3.s64 = ctx.r11.s64 + -21416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2664"))) PPC_WEAK_FUNC(sub_83BB2664);
PPC_FUNC_IMPL(__imp__sub_83BB2664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2668"))) PPC_WEAK_FUNC(sub_83BB2668);
PPC_FUNC_IMPL(__imp__sub_83BB2668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-11360
	ctx.r3.s64 = ctx.r11.s64 + -11360;
	// bl 0x83523120
	ctx.lr = 0x83BB2680;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-21408
	ctx.r3.s64 = ctx.r10.s64 + -21408;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB268C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB269C"))) PPC_WEAK_FUNC(sub_83BB269C);
PPC_FUNC_IMPL(__imp__sub_83BB269C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB26A0"))) PPC_WEAK_FUNC(sub_83BB26A0);
PPC_FUNC_IMPL(__imp__sub_83BB26A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11344
	ctx.r7.s64 = ctx.r8.s64 + -11344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11344);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11344(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11344, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB26C8"))) PPC_WEAK_FUNC(sub_83BB26C8);
PPC_FUNC_IMPL(__imp__sub_83BB26C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-21180
	ctx.r6.s64 = ctx.r7.s64 + -21180;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21252(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21252);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11344);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-21180(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21180, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB2710"))) PPC_WEAK_FUNC(sub_83BB2710);
PPC_FUNC_IMPL(__imp__sub_83BB2710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21392
	ctx.r3.s64 = ctx.r11.s64 + -21392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB271C"))) PPC_WEAK_FUNC(sub_83BB271C);
PPC_FUNC_IMPL(__imp__sub_83BB271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2720"))) PPC_WEAK_FUNC(sub_83BB2720);
PPC_FUNC_IMPL(__imp__sub_83BB2720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-11336
	ctx.r3.s64 = ctx.r11.s64 + -11336;
	// bl 0x8259af80
	ctx.lr = 0x83BB2738;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-21376
	ctx.r3.s64 = ctx.r10.s64 + -21376;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB2744;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB2754"))) PPC_WEAK_FUNC(sub_83BB2754);
PPC_FUNC_IMPL(__imp__sub_83BB2754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2758"))) PPC_WEAK_FUNC(sub_83BB2758);
PPC_FUNC_IMPL(__imp__sub_83BB2758) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11356
	ctx.r11.s64 = ctx.r8.s64 + -11356;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-21204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21204);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21384
	ctx.r3.s64 = ctx.r6.s64 + -21384;
	// stw r10,-11356(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11356, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2788"))) PPC_WEAK_FUNC(sub_83BB2788);
PPC_FUNC_IMPL(__imp__sub_83BB2788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21368
	ctx.r3.s64 = ctx.r11.s64 + -21368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB2794"))) PPC_WEAK_FUNC(sub_83BB2794);
PPC_FUNC_IMPL(__imp__sub_83BB2794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB2798"))) PPC_WEAK_FUNC(sub_83BB2798);
PPC_FUNC_IMPL(__imp__sub_83BB2798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21360
	ctx.r3.s64 = ctx.r11.s64 + -21360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB27A4"))) PPC_WEAK_FUNC(sub_83BB27A4);
PPC_FUNC_IMPL(__imp__sub_83BB27A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB27A8"))) PPC_WEAK_FUNC(sub_83BB27A8);
PPC_FUNC_IMPL(__imp__sub_83BB27A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21352
	ctx.r3.s64 = ctx.r11.s64 + -21352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB27B4"))) PPC_WEAK_FUNC(sub_83BB27B4);
PPC_FUNC_IMPL(__imp__sub_83BB27B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB27B8"))) PPC_WEAK_FUNC(sub_83BB27B8);
PPC_FUNC_IMPL(__imp__sub_83BB27B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-21344
	ctx.r3.s64 = ctx.r11.s64 + -21344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB27C4"))) PPC_WEAK_FUNC(sub_83BB27C4);
PPC_FUNC_IMPL(__imp__sub_83BB27C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

