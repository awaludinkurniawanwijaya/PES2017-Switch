#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B8AB60"))) PPC_WEAK_FUNC(sub_83B8AB60);
PPC_FUNC_IMPL(__imp__sub_83B8AB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11672
	ctx.r3.s64 = ctx.r11.s64 + -11672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AB6C"))) PPC_WEAK_FUNC(sub_83B8AB6C);
PPC_FUNC_IMPL(__imp__sub_83B8AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AB70"))) PPC_WEAK_FUNC(sub_83B8AB70);
PPC_FUNC_IMPL(__imp__sub_83B8AB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11664
	ctx.r3.s64 = ctx.r11.s64 + -11664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AB7C"))) PPC_WEAK_FUNC(sub_83B8AB7C);
PPC_FUNC_IMPL(__imp__sub_83B8AB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AB80"))) PPC_WEAK_FUNC(sub_83B8AB80);
PPC_FUNC_IMPL(__imp__sub_83B8AB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11656
	ctx.r3.s64 = ctx.r11.s64 + -11656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AB8C"))) PPC_WEAK_FUNC(sub_83B8AB8C);
PPC_FUNC_IMPL(__imp__sub_83B8AB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AB90"))) PPC_WEAK_FUNC(sub_83B8AB90);
PPC_FUNC_IMPL(__imp__sub_83B8AB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11648
	ctx.r3.s64 = ctx.r11.s64 + -11648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AB9C"))) PPC_WEAK_FUNC(sub_83B8AB9C);
PPC_FUNC_IMPL(__imp__sub_83B8AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ABA0"))) PPC_WEAK_FUNC(sub_83B8ABA0);
PPC_FUNC_IMPL(__imp__sub_83B8ABA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11640
	ctx.r3.s64 = ctx.r11.s64 + -11640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ABAC"))) PPC_WEAK_FUNC(sub_83B8ABAC);
PPC_FUNC_IMPL(__imp__sub_83B8ABAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ABB0"))) PPC_WEAK_FUNC(sub_83B8ABB0);
PPC_FUNC_IMPL(__imp__sub_83B8ABB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11632
	ctx.r3.s64 = ctx.r11.s64 + -11632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ABBC"))) PPC_WEAK_FUNC(sub_83B8ABBC);
PPC_FUNC_IMPL(__imp__sub_83B8ABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ABC0"))) PPC_WEAK_FUNC(sub_83B8ABC0);
PPC_FUNC_IMPL(__imp__sub_83B8ABC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11624
	ctx.r3.s64 = ctx.r11.s64 + -11624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ABCC"))) PPC_WEAK_FUNC(sub_83B8ABCC);
PPC_FUNC_IMPL(__imp__sub_83B8ABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ABD0"))) PPC_WEAK_FUNC(sub_83B8ABD0);
PPC_FUNC_IMPL(__imp__sub_83B8ABD0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9452
	ctx.r7.s64 = ctx.r8.s64 + -9452;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9452(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9452);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9452(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9452, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8ABF8"))) PPC_WEAK_FUNC(sub_83B8ABF8);
PPC_FUNC_IMPL(__imp__sub_83B8ABF8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-9456
	ctx.r3.s64 = ctx.r11.s64 + -9456;
	// bl 0x83523120
	ctx.lr = 0x83B8AC10;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-11616
	ctx.r3.s64 = ctx.r10.s64 + -11616;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8AC1C;
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

__attribute__((alias("__imp__sub_83B8AC2C"))) PPC_WEAK_FUNC(sub_83B8AC2C);
PPC_FUNC_IMPL(__imp__sub_83B8AC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AC30"))) PPC_WEAK_FUNC(sub_83B8AC30);
PPC_FUNC_IMPL(__imp__sub_83B8AC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11600
	ctx.r3.s64 = ctx.r11.s64 + -11600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AC3C"))) PPC_WEAK_FUNC(sub_83B8AC3C);
PPC_FUNC_IMPL(__imp__sub_83B8AC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AC40"))) PPC_WEAK_FUNC(sub_83B8AC40);
PPC_FUNC_IMPL(__imp__sub_83B8AC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11592
	ctx.r3.s64 = ctx.r11.s64 + -11592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AC4C"))) PPC_WEAK_FUNC(sub_83B8AC4C);
PPC_FUNC_IMPL(__imp__sub_83B8AC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AC50"))) PPC_WEAK_FUNC(sub_83B8AC50);
PPC_FUNC_IMPL(__imp__sub_83B8AC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11584
	ctx.r3.s64 = ctx.r11.s64 + -11584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AC5C"))) PPC_WEAK_FUNC(sub_83B8AC5C);
PPC_FUNC_IMPL(__imp__sub_83B8AC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AC60"))) PPC_WEAK_FUNC(sub_83B8AC60);
PPC_FUNC_IMPL(__imp__sub_83B8AC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11576
	ctx.r3.s64 = ctx.r11.s64 + -11576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AC6C"))) PPC_WEAK_FUNC(sub_83B8AC6C);
PPC_FUNC_IMPL(__imp__sub_83B8AC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AC70"))) PPC_WEAK_FUNC(sub_83B8AC70);
PPC_FUNC_IMPL(__imp__sub_83B8AC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11568
	ctx.r3.s64 = ctx.r11.s64 + -11568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AC7C"))) PPC_WEAK_FUNC(sub_83B8AC7C);
PPC_FUNC_IMPL(__imp__sub_83B8AC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AC80"))) PPC_WEAK_FUNC(sub_83B8AC80);
PPC_FUNC_IMPL(__imp__sub_83B8AC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11560
	ctx.r3.s64 = ctx.r11.s64 + -11560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AC8C"))) PPC_WEAK_FUNC(sub_83B8AC8C);
PPC_FUNC_IMPL(__imp__sub_83B8AC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AC90"))) PPC_WEAK_FUNC(sub_83B8AC90);
PPC_FUNC_IMPL(__imp__sub_83B8AC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11552
	ctx.r3.s64 = ctx.r11.s64 + -11552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AC9C"))) PPC_WEAK_FUNC(sub_83B8AC9C);
PPC_FUNC_IMPL(__imp__sub_83B8AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ACA0"))) PPC_WEAK_FUNC(sub_83B8ACA0);
PPC_FUNC_IMPL(__imp__sub_83B8ACA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11544
	ctx.r3.s64 = ctx.r11.s64 + -11544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ACAC"))) PPC_WEAK_FUNC(sub_83B8ACAC);
PPC_FUNC_IMPL(__imp__sub_83B8ACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ACB0"))) PPC_WEAK_FUNC(sub_83B8ACB0);
PPC_FUNC_IMPL(__imp__sub_83B8ACB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11536
	ctx.r3.s64 = ctx.r11.s64 + -11536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ACBC"))) PPC_WEAK_FUNC(sub_83B8ACBC);
PPC_FUNC_IMPL(__imp__sub_83B8ACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ACC0"))) PPC_WEAK_FUNC(sub_83B8ACC0);
PPC_FUNC_IMPL(__imp__sub_83B8ACC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11528
	ctx.r3.s64 = ctx.r11.s64 + -11528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ACCC"))) PPC_WEAK_FUNC(sub_83B8ACCC);
PPC_FUNC_IMPL(__imp__sub_83B8ACCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ACD0"))) PPC_WEAK_FUNC(sub_83B8ACD0);
PPC_FUNC_IMPL(__imp__sub_83B8ACD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11520
	ctx.r3.s64 = ctx.r11.s64 + -11520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ACDC"))) PPC_WEAK_FUNC(sub_83B8ACDC);
PPC_FUNC_IMPL(__imp__sub_83B8ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ACE0"))) PPC_WEAK_FUNC(sub_83B8ACE0);
PPC_FUNC_IMPL(__imp__sub_83B8ACE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11512
	ctx.r3.s64 = ctx.r11.s64 + -11512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ACEC"))) PPC_WEAK_FUNC(sub_83B8ACEC);
PPC_FUNC_IMPL(__imp__sub_83B8ACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ACF0"))) PPC_WEAK_FUNC(sub_83B8ACF0);
PPC_FUNC_IMPL(__imp__sub_83B8ACF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9440
	ctx.r7.s64 = ctx.r8.s64 + -9440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9440(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9440);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9440(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9440, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8AD18"))) PPC_WEAK_FUNC(sub_83B8AD18);
PPC_FUNC_IMPL(__imp__sub_83B8AD18) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-9444
	ctx.r3.s64 = ctx.r11.s64 + -9444;
	// bl 0x83523120
	ctx.lr = 0x83B8AD30;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-11504
	ctx.r3.s64 = ctx.r10.s64 + -11504;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8AD3C;
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

__attribute__((alias("__imp__sub_83B8AD4C"))) PPC_WEAK_FUNC(sub_83B8AD4C);
PPC_FUNC_IMPL(__imp__sub_83B8AD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AD50"))) PPC_WEAK_FUNC(sub_83B8AD50);
PPC_FUNC_IMPL(__imp__sub_83B8AD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11488
	ctx.r3.s64 = ctx.r11.s64 + -11488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AD5C"))) PPC_WEAK_FUNC(sub_83B8AD5C);
PPC_FUNC_IMPL(__imp__sub_83B8AD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AD60"))) PPC_WEAK_FUNC(sub_83B8AD60);
PPC_FUNC_IMPL(__imp__sub_83B8AD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11480
	ctx.r3.s64 = ctx.r11.s64 + -11480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AD6C"))) PPC_WEAK_FUNC(sub_83B8AD6C);
PPC_FUNC_IMPL(__imp__sub_83B8AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AD70"))) PPC_WEAK_FUNC(sub_83B8AD70);
PPC_FUNC_IMPL(__imp__sub_83B8AD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11472
	ctx.r3.s64 = ctx.r11.s64 + -11472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AD7C"))) PPC_WEAK_FUNC(sub_83B8AD7C);
PPC_FUNC_IMPL(__imp__sub_83B8AD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AD80"))) PPC_WEAK_FUNC(sub_83B8AD80);
PPC_FUNC_IMPL(__imp__sub_83B8AD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11464
	ctx.r3.s64 = ctx.r11.s64 + -11464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AD8C"))) PPC_WEAK_FUNC(sub_83B8AD8C);
PPC_FUNC_IMPL(__imp__sub_83B8AD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AD90"))) PPC_WEAK_FUNC(sub_83B8AD90);
PPC_FUNC_IMPL(__imp__sub_83B8AD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11456
	ctx.r3.s64 = ctx.r11.s64 + -11456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AD9C"))) PPC_WEAK_FUNC(sub_83B8AD9C);
PPC_FUNC_IMPL(__imp__sub_83B8AD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ADA0"))) PPC_WEAK_FUNC(sub_83B8ADA0);
PPC_FUNC_IMPL(__imp__sub_83B8ADA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11448
	ctx.r3.s64 = ctx.r11.s64 + -11448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ADAC"))) PPC_WEAK_FUNC(sub_83B8ADAC);
PPC_FUNC_IMPL(__imp__sub_83B8ADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ADB0"))) PPC_WEAK_FUNC(sub_83B8ADB0);
PPC_FUNC_IMPL(__imp__sub_83B8ADB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11440
	ctx.r3.s64 = ctx.r11.s64 + -11440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ADBC"))) PPC_WEAK_FUNC(sub_83B8ADBC);
PPC_FUNC_IMPL(__imp__sub_83B8ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ADC0"))) PPC_WEAK_FUNC(sub_83B8ADC0);
PPC_FUNC_IMPL(__imp__sub_83B8ADC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11432
	ctx.r3.s64 = ctx.r11.s64 + -11432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ADCC"))) PPC_WEAK_FUNC(sub_83B8ADCC);
PPC_FUNC_IMPL(__imp__sub_83B8ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ADD0"))) PPC_WEAK_FUNC(sub_83B8ADD0);
PPC_FUNC_IMPL(__imp__sub_83B8ADD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11424
	ctx.r3.s64 = ctx.r11.s64 + -11424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ADDC"))) PPC_WEAK_FUNC(sub_83B8ADDC);
PPC_FUNC_IMPL(__imp__sub_83B8ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ADE0"))) PPC_WEAK_FUNC(sub_83B8ADE0);
PPC_FUNC_IMPL(__imp__sub_83B8ADE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11416
	ctx.r3.s64 = ctx.r11.s64 + -11416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ADEC"))) PPC_WEAK_FUNC(sub_83B8ADEC);
PPC_FUNC_IMPL(__imp__sub_83B8ADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ADF0"))) PPC_WEAK_FUNC(sub_83B8ADF0);
PPC_FUNC_IMPL(__imp__sub_83B8ADF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11408
	ctx.r3.s64 = ctx.r11.s64 + -11408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ADFC"))) PPC_WEAK_FUNC(sub_83B8ADFC);
PPC_FUNC_IMPL(__imp__sub_83B8ADFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AE00"))) PPC_WEAK_FUNC(sub_83B8AE00);
PPC_FUNC_IMPL(__imp__sub_83B8AE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11400
	ctx.r3.s64 = ctx.r11.s64 + -11400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AE0C"))) PPC_WEAK_FUNC(sub_83B8AE0C);
PPC_FUNC_IMPL(__imp__sub_83B8AE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AE10"))) PPC_WEAK_FUNC(sub_83B8AE10);
PPC_FUNC_IMPL(__imp__sub_83B8AE10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9428
	ctx.r7.s64 = ctx.r8.s64 + -9428;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9428(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9428);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9428(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9428, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8AE38"))) PPC_WEAK_FUNC(sub_83B8AE38);
PPC_FUNC_IMPL(__imp__sub_83B8AE38) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-9432
	ctx.r3.s64 = ctx.r11.s64 + -9432;
	// bl 0x83523120
	ctx.lr = 0x83B8AE50;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-11392
	ctx.r3.s64 = ctx.r10.s64 + -11392;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8AE5C;
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

__attribute__((alias("__imp__sub_83B8AE6C"))) PPC_WEAK_FUNC(sub_83B8AE6C);
PPC_FUNC_IMPL(__imp__sub_83B8AE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AE70"))) PPC_WEAK_FUNC(sub_83B8AE70);
PPC_FUNC_IMPL(__imp__sub_83B8AE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11376
	ctx.r3.s64 = ctx.r11.s64 + -11376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AE7C"))) PPC_WEAK_FUNC(sub_83B8AE7C);
PPC_FUNC_IMPL(__imp__sub_83B8AE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AE80"))) PPC_WEAK_FUNC(sub_83B8AE80);
PPC_FUNC_IMPL(__imp__sub_83B8AE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11368
	ctx.r3.s64 = ctx.r11.s64 + -11368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AE8C"))) PPC_WEAK_FUNC(sub_83B8AE8C);
PPC_FUNC_IMPL(__imp__sub_83B8AE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AE90"))) PPC_WEAK_FUNC(sub_83B8AE90);
PPC_FUNC_IMPL(__imp__sub_83B8AE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11360
	ctx.r3.s64 = ctx.r11.s64 + -11360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AE9C"))) PPC_WEAK_FUNC(sub_83B8AE9C);
PPC_FUNC_IMPL(__imp__sub_83B8AE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AEA0"))) PPC_WEAK_FUNC(sub_83B8AEA0);
PPC_FUNC_IMPL(__imp__sub_83B8AEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11352
	ctx.r3.s64 = ctx.r11.s64 + -11352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AEAC"))) PPC_WEAK_FUNC(sub_83B8AEAC);
PPC_FUNC_IMPL(__imp__sub_83B8AEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AEB0"))) PPC_WEAK_FUNC(sub_83B8AEB0);
PPC_FUNC_IMPL(__imp__sub_83B8AEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11344
	ctx.r3.s64 = ctx.r11.s64 + -11344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AEBC"))) PPC_WEAK_FUNC(sub_83B8AEBC);
PPC_FUNC_IMPL(__imp__sub_83B8AEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AEC0"))) PPC_WEAK_FUNC(sub_83B8AEC0);
PPC_FUNC_IMPL(__imp__sub_83B8AEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11336
	ctx.r3.s64 = ctx.r11.s64 + -11336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AECC"))) PPC_WEAK_FUNC(sub_83B8AECC);
PPC_FUNC_IMPL(__imp__sub_83B8AECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AED0"))) PPC_WEAK_FUNC(sub_83B8AED0);
PPC_FUNC_IMPL(__imp__sub_83B8AED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11328
	ctx.r3.s64 = ctx.r11.s64 + -11328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AEDC"))) PPC_WEAK_FUNC(sub_83B8AEDC);
PPC_FUNC_IMPL(__imp__sub_83B8AEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AEE0"))) PPC_WEAK_FUNC(sub_83B8AEE0);
PPC_FUNC_IMPL(__imp__sub_83B8AEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11320
	ctx.r3.s64 = ctx.r11.s64 + -11320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AEEC"))) PPC_WEAK_FUNC(sub_83B8AEEC);
PPC_FUNC_IMPL(__imp__sub_83B8AEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AEF0"))) PPC_WEAK_FUNC(sub_83B8AEF0);
PPC_FUNC_IMPL(__imp__sub_83B8AEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11312
	ctx.r3.s64 = ctx.r11.s64 + -11312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AEFC"))) PPC_WEAK_FUNC(sub_83B8AEFC);
PPC_FUNC_IMPL(__imp__sub_83B8AEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AF00"))) PPC_WEAK_FUNC(sub_83B8AF00);
PPC_FUNC_IMPL(__imp__sub_83B8AF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11304
	ctx.r3.s64 = ctx.r11.s64 + -11304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AF0C"))) PPC_WEAK_FUNC(sub_83B8AF0C);
PPC_FUNC_IMPL(__imp__sub_83B8AF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AF10"))) PPC_WEAK_FUNC(sub_83B8AF10);
PPC_FUNC_IMPL(__imp__sub_83B8AF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11296
	ctx.r3.s64 = ctx.r11.s64 + -11296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AF1C"))) PPC_WEAK_FUNC(sub_83B8AF1C);
PPC_FUNC_IMPL(__imp__sub_83B8AF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AF20"))) PPC_WEAK_FUNC(sub_83B8AF20);
PPC_FUNC_IMPL(__imp__sub_83B8AF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11288
	ctx.r3.s64 = ctx.r11.s64 + -11288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AF2C"))) PPC_WEAK_FUNC(sub_83B8AF2C);
PPC_FUNC_IMPL(__imp__sub_83B8AF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AF30"))) PPC_WEAK_FUNC(sub_83B8AF30);
PPC_FUNC_IMPL(__imp__sub_83B8AF30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9416
	ctx.r7.s64 = ctx.r8.s64 + -9416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9416(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9416);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9416(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9416, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8AF58"))) PPC_WEAK_FUNC(sub_83B8AF58);
PPC_FUNC_IMPL(__imp__sub_83B8AF58) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-9420
	ctx.r3.s64 = ctx.r11.s64 + -9420;
	// bl 0x83523120
	ctx.lr = 0x83B8AF70;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-11280
	ctx.r3.s64 = ctx.r10.s64 + -11280;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8AF7C;
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

__attribute__((alias("__imp__sub_83B8AF8C"))) PPC_WEAK_FUNC(sub_83B8AF8C);
PPC_FUNC_IMPL(__imp__sub_83B8AF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AF90"))) PPC_WEAK_FUNC(sub_83B8AF90);
PPC_FUNC_IMPL(__imp__sub_83B8AF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11264
	ctx.r3.s64 = ctx.r11.s64 + -11264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AF9C"))) PPC_WEAK_FUNC(sub_83B8AF9C);
PPC_FUNC_IMPL(__imp__sub_83B8AF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AFA0"))) PPC_WEAK_FUNC(sub_83B8AFA0);
PPC_FUNC_IMPL(__imp__sub_83B8AFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11256
	ctx.r3.s64 = ctx.r11.s64 + -11256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AFAC"))) PPC_WEAK_FUNC(sub_83B8AFAC);
PPC_FUNC_IMPL(__imp__sub_83B8AFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AFB0"))) PPC_WEAK_FUNC(sub_83B8AFB0);
PPC_FUNC_IMPL(__imp__sub_83B8AFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11248
	ctx.r3.s64 = ctx.r11.s64 + -11248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AFBC"))) PPC_WEAK_FUNC(sub_83B8AFBC);
PPC_FUNC_IMPL(__imp__sub_83B8AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AFC0"))) PPC_WEAK_FUNC(sub_83B8AFC0);
PPC_FUNC_IMPL(__imp__sub_83B8AFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11240
	ctx.r3.s64 = ctx.r11.s64 + -11240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AFCC"))) PPC_WEAK_FUNC(sub_83B8AFCC);
PPC_FUNC_IMPL(__imp__sub_83B8AFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AFD0"))) PPC_WEAK_FUNC(sub_83B8AFD0);
PPC_FUNC_IMPL(__imp__sub_83B8AFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11232
	ctx.r3.s64 = ctx.r11.s64 + -11232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AFDC"))) PPC_WEAK_FUNC(sub_83B8AFDC);
PPC_FUNC_IMPL(__imp__sub_83B8AFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AFE0"))) PPC_WEAK_FUNC(sub_83B8AFE0);
PPC_FUNC_IMPL(__imp__sub_83B8AFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11224
	ctx.r3.s64 = ctx.r11.s64 + -11224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AFEC"))) PPC_WEAK_FUNC(sub_83B8AFEC);
PPC_FUNC_IMPL(__imp__sub_83B8AFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AFF0"))) PPC_WEAK_FUNC(sub_83B8AFF0);
PPC_FUNC_IMPL(__imp__sub_83B8AFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11216
	ctx.r3.s64 = ctx.r11.s64 + -11216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AFFC"))) PPC_WEAK_FUNC(sub_83B8AFFC);
PPC_FUNC_IMPL(__imp__sub_83B8AFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B000"))) PPC_WEAK_FUNC(sub_83B8B000);
PPC_FUNC_IMPL(__imp__sub_83B8B000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11208
	ctx.r3.s64 = ctx.r11.s64 + -11208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B00C"))) PPC_WEAK_FUNC(sub_83B8B00C);
PPC_FUNC_IMPL(__imp__sub_83B8B00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B010"))) PPC_WEAK_FUNC(sub_83B8B010);
PPC_FUNC_IMPL(__imp__sub_83B8B010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11200
	ctx.r3.s64 = ctx.r11.s64 + -11200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B01C"))) PPC_WEAK_FUNC(sub_83B8B01C);
PPC_FUNC_IMPL(__imp__sub_83B8B01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B020"))) PPC_WEAK_FUNC(sub_83B8B020);
PPC_FUNC_IMPL(__imp__sub_83B8B020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11192
	ctx.r3.s64 = ctx.r11.s64 + -11192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B02C"))) PPC_WEAK_FUNC(sub_83B8B02C);
PPC_FUNC_IMPL(__imp__sub_83B8B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B030"))) PPC_WEAK_FUNC(sub_83B8B030);
PPC_FUNC_IMPL(__imp__sub_83B8B030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11184
	ctx.r3.s64 = ctx.r11.s64 + -11184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B03C"))) PPC_WEAK_FUNC(sub_83B8B03C);
PPC_FUNC_IMPL(__imp__sub_83B8B03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B040"))) PPC_WEAK_FUNC(sub_83B8B040);
PPC_FUNC_IMPL(__imp__sub_83B8B040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11176
	ctx.r3.s64 = ctx.r11.s64 + -11176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B04C"))) PPC_WEAK_FUNC(sub_83B8B04C);
PPC_FUNC_IMPL(__imp__sub_83B8B04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B050"))) PPC_WEAK_FUNC(sub_83B8B050);
PPC_FUNC_IMPL(__imp__sub_83B8B050) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9404
	ctx.r7.s64 = ctx.r8.s64 + -9404;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9404(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9404);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9404(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9404, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8B078"))) PPC_WEAK_FUNC(sub_83B8B078);
PPC_FUNC_IMPL(__imp__sub_83B8B078) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-9408
	ctx.r3.s64 = ctx.r11.s64 + -9408;
	// bl 0x83523120
	ctx.lr = 0x83B8B090;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-11168
	ctx.r3.s64 = ctx.r10.s64 + -11168;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8B09C;
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

__attribute__((alias("__imp__sub_83B8B0AC"))) PPC_WEAK_FUNC(sub_83B8B0AC);
PPC_FUNC_IMPL(__imp__sub_83B8B0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B0B0"))) PPC_WEAK_FUNC(sub_83B8B0B0);
PPC_FUNC_IMPL(__imp__sub_83B8B0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11152
	ctx.r3.s64 = ctx.r11.s64 + -11152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B0BC"))) PPC_WEAK_FUNC(sub_83B8B0BC);
PPC_FUNC_IMPL(__imp__sub_83B8B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B0C0"))) PPC_WEAK_FUNC(sub_83B8B0C0);
PPC_FUNC_IMPL(__imp__sub_83B8B0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11144
	ctx.r3.s64 = ctx.r11.s64 + -11144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B0CC"))) PPC_WEAK_FUNC(sub_83B8B0CC);
PPC_FUNC_IMPL(__imp__sub_83B8B0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B0D0"))) PPC_WEAK_FUNC(sub_83B8B0D0);
PPC_FUNC_IMPL(__imp__sub_83B8B0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11136
	ctx.r3.s64 = ctx.r11.s64 + -11136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B0DC"))) PPC_WEAK_FUNC(sub_83B8B0DC);
PPC_FUNC_IMPL(__imp__sub_83B8B0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B0E0"))) PPC_WEAK_FUNC(sub_83B8B0E0);
PPC_FUNC_IMPL(__imp__sub_83B8B0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11128
	ctx.r3.s64 = ctx.r11.s64 + -11128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B0EC"))) PPC_WEAK_FUNC(sub_83B8B0EC);
PPC_FUNC_IMPL(__imp__sub_83B8B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B0F0"))) PPC_WEAK_FUNC(sub_83B8B0F0);
PPC_FUNC_IMPL(__imp__sub_83B8B0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11120
	ctx.r3.s64 = ctx.r11.s64 + -11120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B0FC"))) PPC_WEAK_FUNC(sub_83B8B0FC);
PPC_FUNC_IMPL(__imp__sub_83B8B0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B100"))) PPC_WEAK_FUNC(sub_83B8B100);
PPC_FUNC_IMPL(__imp__sub_83B8B100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11112
	ctx.r3.s64 = ctx.r11.s64 + -11112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B10C"))) PPC_WEAK_FUNC(sub_83B8B10C);
PPC_FUNC_IMPL(__imp__sub_83B8B10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B110"))) PPC_WEAK_FUNC(sub_83B8B110);
PPC_FUNC_IMPL(__imp__sub_83B8B110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11104
	ctx.r3.s64 = ctx.r11.s64 + -11104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B11C"))) PPC_WEAK_FUNC(sub_83B8B11C);
PPC_FUNC_IMPL(__imp__sub_83B8B11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B120"))) PPC_WEAK_FUNC(sub_83B8B120);
PPC_FUNC_IMPL(__imp__sub_83B8B120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11096
	ctx.r3.s64 = ctx.r11.s64 + -11096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B12C"))) PPC_WEAK_FUNC(sub_83B8B12C);
PPC_FUNC_IMPL(__imp__sub_83B8B12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B130"))) PPC_WEAK_FUNC(sub_83B8B130);
PPC_FUNC_IMPL(__imp__sub_83B8B130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11088
	ctx.r3.s64 = ctx.r11.s64 + -11088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B13C"))) PPC_WEAK_FUNC(sub_83B8B13C);
PPC_FUNC_IMPL(__imp__sub_83B8B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B140"))) PPC_WEAK_FUNC(sub_83B8B140);
PPC_FUNC_IMPL(__imp__sub_83B8B140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11080
	ctx.r3.s64 = ctx.r11.s64 + -11080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B14C"))) PPC_WEAK_FUNC(sub_83B8B14C);
PPC_FUNC_IMPL(__imp__sub_83B8B14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B150"))) PPC_WEAK_FUNC(sub_83B8B150);
PPC_FUNC_IMPL(__imp__sub_83B8B150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11072
	ctx.r3.s64 = ctx.r11.s64 + -11072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B15C"))) PPC_WEAK_FUNC(sub_83B8B15C);
PPC_FUNC_IMPL(__imp__sub_83B8B15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B160"))) PPC_WEAK_FUNC(sub_83B8B160);
PPC_FUNC_IMPL(__imp__sub_83B8B160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11064
	ctx.r3.s64 = ctx.r11.s64 + -11064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B16C"))) PPC_WEAK_FUNC(sub_83B8B16C);
PPC_FUNC_IMPL(__imp__sub_83B8B16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B170"))) PPC_WEAK_FUNC(sub_83B8B170);
PPC_FUNC_IMPL(__imp__sub_83B8B170) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9392
	ctx.r7.s64 = ctx.r8.s64 + -9392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9392);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9392(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9392, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8B198"))) PPC_WEAK_FUNC(sub_83B8B198);
PPC_FUNC_IMPL(__imp__sub_83B8B198) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-9396
	ctx.r3.s64 = ctx.r11.s64 + -9396;
	// bl 0x83523120
	ctx.lr = 0x83B8B1B0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-11056
	ctx.r3.s64 = ctx.r10.s64 + -11056;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8B1BC;
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

__attribute__((alias("__imp__sub_83B8B1CC"))) PPC_WEAK_FUNC(sub_83B8B1CC);
PPC_FUNC_IMPL(__imp__sub_83B8B1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B1D0"))) PPC_WEAK_FUNC(sub_83B8B1D0);
PPC_FUNC_IMPL(__imp__sub_83B8B1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11040
	ctx.r3.s64 = ctx.r11.s64 + -11040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B1DC"))) PPC_WEAK_FUNC(sub_83B8B1DC);
PPC_FUNC_IMPL(__imp__sub_83B8B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B1E0"))) PPC_WEAK_FUNC(sub_83B8B1E0);
PPC_FUNC_IMPL(__imp__sub_83B8B1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11032
	ctx.r3.s64 = ctx.r11.s64 + -11032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B1EC"))) PPC_WEAK_FUNC(sub_83B8B1EC);
PPC_FUNC_IMPL(__imp__sub_83B8B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B1F0"))) PPC_WEAK_FUNC(sub_83B8B1F0);
PPC_FUNC_IMPL(__imp__sub_83B8B1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11024
	ctx.r3.s64 = ctx.r11.s64 + -11024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B1FC"))) PPC_WEAK_FUNC(sub_83B8B1FC);
PPC_FUNC_IMPL(__imp__sub_83B8B1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B200"))) PPC_WEAK_FUNC(sub_83B8B200);
PPC_FUNC_IMPL(__imp__sub_83B8B200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11016
	ctx.r3.s64 = ctx.r11.s64 + -11016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B20C"))) PPC_WEAK_FUNC(sub_83B8B20C);
PPC_FUNC_IMPL(__imp__sub_83B8B20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B210"))) PPC_WEAK_FUNC(sub_83B8B210);
PPC_FUNC_IMPL(__imp__sub_83B8B210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11008
	ctx.r3.s64 = ctx.r11.s64 + -11008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B21C"))) PPC_WEAK_FUNC(sub_83B8B21C);
PPC_FUNC_IMPL(__imp__sub_83B8B21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B220"))) PPC_WEAK_FUNC(sub_83B8B220);
PPC_FUNC_IMPL(__imp__sub_83B8B220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11000
	ctx.r3.s64 = ctx.r11.s64 + -11000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B22C"))) PPC_WEAK_FUNC(sub_83B8B22C);
PPC_FUNC_IMPL(__imp__sub_83B8B22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B230"))) PPC_WEAK_FUNC(sub_83B8B230);
PPC_FUNC_IMPL(__imp__sub_83B8B230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10992
	ctx.r3.s64 = ctx.r11.s64 + -10992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B23C"))) PPC_WEAK_FUNC(sub_83B8B23C);
PPC_FUNC_IMPL(__imp__sub_83B8B23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B240"))) PPC_WEAK_FUNC(sub_83B8B240);
PPC_FUNC_IMPL(__imp__sub_83B8B240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10984
	ctx.r3.s64 = ctx.r11.s64 + -10984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B24C"))) PPC_WEAK_FUNC(sub_83B8B24C);
PPC_FUNC_IMPL(__imp__sub_83B8B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B250"))) PPC_WEAK_FUNC(sub_83B8B250);
PPC_FUNC_IMPL(__imp__sub_83B8B250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10976
	ctx.r3.s64 = ctx.r11.s64 + -10976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B25C"))) PPC_WEAK_FUNC(sub_83B8B25C);
PPC_FUNC_IMPL(__imp__sub_83B8B25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B260"))) PPC_WEAK_FUNC(sub_83B8B260);
PPC_FUNC_IMPL(__imp__sub_83B8B260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10968
	ctx.r3.s64 = ctx.r11.s64 + -10968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B26C"))) PPC_WEAK_FUNC(sub_83B8B26C);
PPC_FUNC_IMPL(__imp__sub_83B8B26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B270"))) PPC_WEAK_FUNC(sub_83B8B270);
PPC_FUNC_IMPL(__imp__sub_83B8B270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10960
	ctx.r3.s64 = ctx.r11.s64 + -10960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B27C"))) PPC_WEAK_FUNC(sub_83B8B27C);
PPC_FUNC_IMPL(__imp__sub_83B8B27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B280"))) PPC_WEAK_FUNC(sub_83B8B280);
PPC_FUNC_IMPL(__imp__sub_83B8B280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10952
	ctx.r3.s64 = ctx.r11.s64 + -10952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B28C"))) PPC_WEAK_FUNC(sub_83B8B28C);
PPC_FUNC_IMPL(__imp__sub_83B8B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B290"))) PPC_WEAK_FUNC(sub_83B8B290);
PPC_FUNC_IMPL(__imp__sub_83B8B290) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9380
	ctx.r7.s64 = ctx.r8.s64 + -9380;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9380(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9380);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9380(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9380, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8B2B8"))) PPC_WEAK_FUNC(sub_83B8B2B8);
PPC_FUNC_IMPL(__imp__sub_83B8B2B8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-9384
	ctx.r3.s64 = ctx.r11.s64 + -9384;
	// bl 0x83523120
	ctx.lr = 0x83B8B2D0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-10944
	ctx.r3.s64 = ctx.r10.s64 + -10944;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8B2DC;
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

__attribute__((alias("__imp__sub_83B8B2EC"))) PPC_WEAK_FUNC(sub_83B8B2EC);
PPC_FUNC_IMPL(__imp__sub_83B8B2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B2F0"))) PPC_WEAK_FUNC(sub_83B8B2F0);
PPC_FUNC_IMPL(__imp__sub_83B8B2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10928
	ctx.r3.s64 = ctx.r11.s64 + -10928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B2FC"))) PPC_WEAK_FUNC(sub_83B8B2FC);
PPC_FUNC_IMPL(__imp__sub_83B8B2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B300"))) PPC_WEAK_FUNC(sub_83B8B300);
PPC_FUNC_IMPL(__imp__sub_83B8B300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10920
	ctx.r3.s64 = ctx.r11.s64 + -10920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B30C"))) PPC_WEAK_FUNC(sub_83B8B30C);
PPC_FUNC_IMPL(__imp__sub_83B8B30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B310"))) PPC_WEAK_FUNC(sub_83B8B310);
PPC_FUNC_IMPL(__imp__sub_83B8B310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10912
	ctx.r3.s64 = ctx.r11.s64 + -10912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B31C"))) PPC_WEAK_FUNC(sub_83B8B31C);
PPC_FUNC_IMPL(__imp__sub_83B8B31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B320"))) PPC_WEAK_FUNC(sub_83B8B320);
PPC_FUNC_IMPL(__imp__sub_83B8B320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10904
	ctx.r3.s64 = ctx.r11.s64 + -10904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B32C"))) PPC_WEAK_FUNC(sub_83B8B32C);
PPC_FUNC_IMPL(__imp__sub_83B8B32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B330"))) PPC_WEAK_FUNC(sub_83B8B330);
PPC_FUNC_IMPL(__imp__sub_83B8B330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10896
	ctx.r3.s64 = ctx.r11.s64 + -10896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B33C"))) PPC_WEAK_FUNC(sub_83B8B33C);
PPC_FUNC_IMPL(__imp__sub_83B8B33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B340"))) PPC_WEAK_FUNC(sub_83B8B340);
PPC_FUNC_IMPL(__imp__sub_83B8B340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10888
	ctx.r3.s64 = ctx.r11.s64 + -10888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B34C"))) PPC_WEAK_FUNC(sub_83B8B34C);
PPC_FUNC_IMPL(__imp__sub_83B8B34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B350"))) PPC_WEAK_FUNC(sub_83B8B350);
PPC_FUNC_IMPL(__imp__sub_83B8B350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10880
	ctx.r3.s64 = ctx.r11.s64 + -10880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B35C"))) PPC_WEAK_FUNC(sub_83B8B35C);
PPC_FUNC_IMPL(__imp__sub_83B8B35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B360"))) PPC_WEAK_FUNC(sub_83B8B360);
PPC_FUNC_IMPL(__imp__sub_83B8B360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10872
	ctx.r3.s64 = ctx.r11.s64 + -10872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B36C"))) PPC_WEAK_FUNC(sub_83B8B36C);
PPC_FUNC_IMPL(__imp__sub_83B8B36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B370"))) PPC_WEAK_FUNC(sub_83B8B370);
PPC_FUNC_IMPL(__imp__sub_83B8B370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10864
	ctx.r3.s64 = ctx.r11.s64 + -10864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B37C"))) PPC_WEAK_FUNC(sub_83B8B37C);
PPC_FUNC_IMPL(__imp__sub_83B8B37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B380"))) PPC_WEAK_FUNC(sub_83B8B380);
PPC_FUNC_IMPL(__imp__sub_83B8B380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10856
	ctx.r3.s64 = ctx.r11.s64 + -10856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B38C"))) PPC_WEAK_FUNC(sub_83B8B38C);
PPC_FUNC_IMPL(__imp__sub_83B8B38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B390"))) PPC_WEAK_FUNC(sub_83B8B390);
PPC_FUNC_IMPL(__imp__sub_83B8B390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10848
	ctx.r3.s64 = ctx.r11.s64 + -10848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B39C"))) PPC_WEAK_FUNC(sub_83B8B39C);
PPC_FUNC_IMPL(__imp__sub_83B8B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B3A0"))) PPC_WEAK_FUNC(sub_83B8B3A0);
PPC_FUNC_IMPL(__imp__sub_83B8B3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10840
	ctx.r3.s64 = ctx.r11.s64 + -10840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B3AC"))) PPC_WEAK_FUNC(sub_83B8B3AC);
PPC_FUNC_IMPL(__imp__sub_83B8B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B3B0"))) PPC_WEAK_FUNC(sub_83B8B3B0);
PPC_FUNC_IMPL(__imp__sub_83B8B3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9368
	ctx.r7.s64 = ctx.r8.s64 + -9368;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9368(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9368);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9368(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9368, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8B3D8"))) PPC_WEAK_FUNC(sub_83B8B3D8);
PPC_FUNC_IMPL(__imp__sub_83B8B3D8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-9372
	ctx.r3.s64 = ctx.r11.s64 + -9372;
	// bl 0x83523120
	ctx.lr = 0x83B8B3F0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-10832
	ctx.r3.s64 = ctx.r10.s64 + -10832;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8B3FC;
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

__attribute__((alias("__imp__sub_83B8B40C"))) PPC_WEAK_FUNC(sub_83B8B40C);
PPC_FUNC_IMPL(__imp__sub_83B8B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B410"))) PPC_WEAK_FUNC(sub_83B8B410);
PPC_FUNC_IMPL(__imp__sub_83B8B410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10816
	ctx.r3.s64 = ctx.r11.s64 + -10816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B41C"))) PPC_WEAK_FUNC(sub_83B8B41C);
PPC_FUNC_IMPL(__imp__sub_83B8B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B420"))) PPC_WEAK_FUNC(sub_83B8B420);
PPC_FUNC_IMPL(__imp__sub_83B8B420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10808
	ctx.r3.s64 = ctx.r11.s64 + -10808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B42C"))) PPC_WEAK_FUNC(sub_83B8B42C);
PPC_FUNC_IMPL(__imp__sub_83B8B42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B430"))) PPC_WEAK_FUNC(sub_83B8B430);
PPC_FUNC_IMPL(__imp__sub_83B8B430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10800
	ctx.r3.s64 = ctx.r11.s64 + -10800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B43C"))) PPC_WEAK_FUNC(sub_83B8B43C);
PPC_FUNC_IMPL(__imp__sub_83B8B43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B440"))) PPC_WEAK_FUNC(sub_83B8B440);
PPC_FUNC_IMPL(__imp__sub_83B8B440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10792
	ctx.r3.s64 = ctx.r11.s64 + -10792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B44C"))) PPC_WEAK_FUNC(sub_83B8B44C);
PPC_FUNC_IMPL(__imp__sub_83B8B44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B450"))) PPC_WEAK_FUNC(sub_83B8B450);
PPC_FUNC_IMPL(__imp__sub_83B8B450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10784
	ctx.r3.s64 = ctx.r11.s64 + -10784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B45C"))) PPC_WEAK_FUNC(sub_83B8B45C);
PPC_FUNC_IMPL(__imp__sub_83B8B45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B460"))) PPC_WEAK_FUNC(sub_83B8B460);
PPC_FUNC_IMPL(__imp__sub_83B8B460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10776
	ctx.r3.s64 = ctx.r11.s64 + -10776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B46C"))) PPC_WEAK_FUNC(sub_83B8B46C);
PPC_FUNC_IMPL(__imp__sub_83B8B46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B470"))) PPC_WEAK_FUNC(sub_83B8B470);
PPC_FUNC_IMPL(__imp__sub_83B8B470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10768
	ctx.r3.s64 = ctx.r11.s64 + -10768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B47C"))) PPC_WEAK_FUNC(sub_83B8B47C);
PPC_FUNC_IMPL(__imp__sub_83B8B47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B480"))) PPC_WEAK_FUNC(sub_83B8B480);
PPC_FUNC_IMPL(__imp__sub_83B8B480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10760
	ctx.r3.s64 = ctx.r11.s64 + -10760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B48C"))) PPC_WEAK_FUNC(sub_83B8B48C);
PPC_FUNC_IMPL(__imp__sub_83B8B48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B490"))) PPC_WEAK_FUNC(sub_83B8B490);
PPC_FUNC_IMPL(__imp__sub_83B8B490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10752
	ctx.r3.s64 = ctx.r11.s64 + -10752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B49C"))) PPC_WEAK_FUNC(sub_83B8B49C);
PPC_FUNC_IMPL(__imp__sub_83B8B49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B4A0"))) PPC_WEAK_FUNC(sub_83B8B4A0);
PPC_FUNC_IMPL(__imp__sub_83B8B4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10744
	ctx.r3.s64 = ctx.r11.s64 + -10744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B4AC"))) PPC_WEAK_FUNC(sub_83B8B4AC);
PPC_FUNC_IMPL(__imp__sub_83B8B4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B4B0"))) PPC_WEAK_FUNC(sub_83B8B4B0);
PPC_FUNC_IMPL(__imp__sub_83B8B4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10736
	ctx.r3.s64 = ctx.r11.s64 + -10736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B4BC"))) PPC_WEAK_FUNC(sub_83B8B4BC);
PPC_FUNC_IMPL(__imp__sub_83B8B4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B4C0"))) PPC_WEAK_FUNC(sub_83B8B4C0);
PPC_FUNC_IMPL(__imp__sub_83B8B4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10728
	ctx.r3.s64 = ctx.r11.s64 + -10728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B4CC"))) PPC_WEAK_FUNC(sub_83B8B4CC);
PPC_FUNC_IMPL(__imp__sub_83B8B4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B4D0"))) PPC_WEAK_FUNC(sub_83B8B4D0);
PPC_FUNC_IMPL(__imp__sub_83B8B4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9356
	ctx.r7.s64 = ctx.r8.s64 + -9356;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9356(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9356);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9356(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9356, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8B4F8"))) PPC_WEAK_FUNC(sub_83B8B4F8);
PPC_FUNC_IMPL(__imp__sub_83B8B4F8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-9360
	ctx.r3.s64 = ctx.r11.s64 + -9360;
	// bl 0x83523120
	ctx.lr = 0x83B8B510;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-10720
	ctx.r3.s64 = ctx.r10.s64 + -10720;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8B51C;
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

__attribute__((alias("__imp__sub_83B8B52C"))) PPC_WEAK_FUNC(sub_83B8B52C);
PPC_FUNC_IMPL(__imp__sub_83B8B52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B530"))) PPC_WEAK_FUNC(sub_83B8B530);
PPC_FUNC_IMPL(__imp__sub_83B8B530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10704
	ctx.r3.s64 = ctx.r11.s64 + -10704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B53C"))) PPC_WEAK_FUNC(sub_83B8B53C);
PPC_FUNC_IMPL(__imp__sub_83B8B53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B540"))) PPC_WEAK_FUNC(sub_83B8B540);
PPC_FUNC_IMPL(__imp__sub_83B8B540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10696
	ctx.r3.s64 = ctx.r11.s64 + -10696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B54C"))) PPC_WEAK_FUNC(sub_83B8B54C);
PPC_FUNC_IMPL(__imp__sub_83B8B54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B550"))) PPC_WEAK_FUNC(sub_83B8B550);
PPC_FUNC_IMPL(__imp__sub_83B8B550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10688
	ctx.r3.s64 = ctx.r11.s64 + -10688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B55C"))) PPC_WEAK_FUNC(sub_83B8B55C);
PPC_FUNC_IMPL(__imp__sub_83B8B55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B560"))) PPC_WEAK_FUNC(sub_83B8B560);
PPC_FUNC_IMPL(__imp__sub_83B8B560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10680
	ctx.r3.s64 = ctx.r11.s64 + -10680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B56C"))) PPC_WEAK_FUNC(sub_83B8B56C);
PPC_FUNC_IMPL(__imp__sub_83B8B56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B570"))) PPC_WEAK_FUNC(sub_83B8B570);
PPC_FUNC_IMPL(__imp__sub_83B8B570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10672
	ctx.r3.s64 = ctx.r11.s64 + -10672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B57C"))) PPC_WEAK_FUNC(sub_83B8B57C);
PPC_FUNC_IMPL(__imp__sub_83B8B57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B580"))) PPC_WEAK_FUNC(sub_83B8B580);
PPC_FUNC_IMPL(__imp__sub_83B8B580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B58C"))) PPC_WEAK_FUNC(sub_83B8B58C);
PPC_FUNC_IMPL(__imp__sub_83B8B58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B590"))) PPC_WEAK_FUNC(sub_83B8B590);
PPC_FUNC_IMPL(__imp__sub_83B8B590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10656
	ctx.r3.s64 = ctx.r11.s64 + -10656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B59C"))) PPC_WEAK_FUNC(sub_83B8B59C);
PPC_FUNC_IMPL(__imp__sub_83B8B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B5A0"))) PPC_WEAK_FUNC(sub_83B8B5A0);
PPC_FUNC_IMPL(__imp__sub_83B8B5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10648
	ctx.r3.s64 = ctx.r11.s64 + -10648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B5AC"))) PPC_WEAK_FUNC(sub_83B8B5AC);
PPC_FUNC_IMPL(__imp__sub_83B8B5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B5B0"))) PPC_WEAK_FUNC(sub_83B8B5B0);
PPC_FUNC_IMPL(__imp__sub_83B8B5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10640
	ctx.r3.s64 = ctx.r11.s64 + -10640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B5BC"))) PPC_WEAK_FUNC(sub_83B8B5BC);
PPC_FUNC_IMPL(__imp__sub_83B8B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B5C0"))) PPC_WEAK_FUNC(sub_83B8B5C0);
PPC_FUNC_IMPL(__imp__sub_83B8B5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10632
	ctx.r3.s64 = ctx.r11.s64 + -10632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B5CC"))) PPC_WEAK_FUNC(sub_83B8B5CC);
PPC_FUNC_IMPL(__imp__sub_83B8B5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B5D0"))) PPC_WEAK_FUNC(sub_83B8B5D0);
PPC_FUNC_IMPL(__imp__sub_83B8B5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10624
	ctx.r3.s64 = ctx.r11.s64 + -10624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B5DC"))) PPC_WEAK_FUNC(sub_83B8B5DC);
PPC_FUNC_IMPL(__imp__sub_83B8B5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B5E0"))) PPC_WEAK_FUNC(sub_83B8B5E0);
PPC_FUNC_IMPL(__imp__sub_83B8B5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10616
	ctx.r3.s64 = ctx.r11.s64 + -10616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

