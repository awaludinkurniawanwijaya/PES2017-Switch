#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C04A40"))) PPC_WEAK_FUNC(sub_83C04A40);
PPC_FUNC_IMPL(__imp__sub_83C04A40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8588
	ctx.r7.s64 = ctx.r8.s64 + -8588;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8588(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8588);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8588(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8588, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C04A68"))) PPC_WEAK_FUNC(sub_83C04A68);
PPC_FUNC_IMPL(__imp__sub_83C04A68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,28972
	ctx.r6.s64 = ctx.r7.s64 + 28972;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28900(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28900);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8588(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8588);
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
	// std r9,28972(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28972, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C04AB0"))) PPC_WEAK_FUNC(sub_83C04AB0);
PPC_FUNC_IMPL(__imp__sub_83C04AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14408
	ctx.r3.s64 = ctx.r11.s64 + 14408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04ABC"))) PPC_WEAK_FUNC(sub_83C04ABC);
PPC_FUNC_IMPL(__imp__sub_83C04ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04AC0"))) PPC_WEAK_FUNC(sub_83C04AC0);
PPC_FUNC_IMPL(__imp__sub_83C04AC0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-8576
	ctx.r3.s64 = ctx.r11.s64 + -8576;
	// bl 0x8259af80
	ctx.lr = 0x83C04AD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,14424
	ctx.r3.s64 = ctx.r10.s64 + 14424;
	// bl 0x831cdcc8
	ctx.lr = 0x83C04AE4;
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

__attribute__((alias("__imp__sub_83C04AF4"))) PPC_WEAK_FUNC(sub_83C04AF4);
PPC_FUNC_IMPL(__imp__sub_83C04AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04AF8"))) PPC_WEAK_FUNC(sub_83C04AF8);
PPC_FUNC_IMPL(__imp__sub_83C04AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8600
	ctx.r11.s64 = ctx.r8.s64 + -8600;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,28948(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28948);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14416
	ctx.r3.s64 = ctx.r6.s64 + 14416;
	// stw r10,-8600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8600, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04B28"))) PPC_WEAK_FUNC(sub_83C04B28);
PPC_FUNC_IMPL(__imp__sub_83C04B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14432
	ctx.r3.s64 = ctx.r11.s64 + 14432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04B34"))) PPC_WEAK_FUNC(sub_83C04B34);
PPC_FUNC_IMPL(__imp__sub_83C04B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04B38"))) PPC_WEAK_FUNC(sub_83C04B38);
PPC_FUNC_IMPL(__imp__sub_83C04B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14440
	ctx.r3.s64 = ctx.r11.s64 + 14440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04B44"))) PPC_WEAK_FUNC(sub_83C04B44);
PPC_FUNC_IMPL(__imp__sub_83C04B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04B48"))) PPC_WEAK_FUNC(sub_83C04B48);
PPC_FUNC_IMPL(__imp__sub_83C04B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14448
	ctx.r3.s64 = ctx.r11.s64 + 14448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04B54"))) PPC_WEAK_FUNC(sub_83C04B54);
PPC_FUNC_IMPL(__imp__sub_83C04B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04B58"))) PPC_WEAK_FUNC(sub_83C04B58);
PPC_FUNC_IMPL(__imp__sub_83C04B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14456
	ctx.r3.s64 = ctx.r11.s64 + 14456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04B64"))) PPC_WEAK_FUNC(sub_83C04B64);
PPC_FUNC_IMPL(__imp__sub_83C04B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04B68"))) PPC_WEAK_FUNC(sub_83C04B68);
PPC_FUNC_IMPL(__imp__sub_83C04B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14464
	ctx.r3.s64 = ctx.r11.s64 + 14464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04B74"))) PPC_WEAK_FUNC(sub_83C04B74);
PPC_FUNC_IMPL(__imp__sub_83C04B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04B78"))) PPC_WEAK_FUNC(sub_83C04B78);
PPC_FUNC_IMPL(__imp__sub_83C04B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14472
	ctx.r3.s64 = ctx.r11.s64 + 14472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04B84"))) PPC_WEAK_FUNC(sub_83C04B84);
PPC_FUNC_IMPL(__imp__sub_83C04B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04B88"))) PPC_WEAK_FUNC(sub_83C04B88);
PPC_FUNC_IMPL(__imp__sub_83C04B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14480
	ctx.r3.s64 = ctx.r11.s64 + 14480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04B94"))) PPC_WEAK_FUNC(sub_83C04B94);
PPC_FUNC_IMPL(__imp__sub_83C04B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04B98"))) PPC_WEAK_FUNC(sub_83C04B98);
PPC_FUNC_IMPL(__imp__sub_83C04B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04BA4"))) PPC_WEAK_FUNC(sub_83C04BA4);
PPC_FUNC_IMPL(__imp__sub_83C04BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04BA8"))) PPC_WEAK_FUNC(sub_83C04BA8);
PPC_FUNC_IMPL(__imp__sub_83C04BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04BB4"))) PPC_WEAK_FUNC(sub_83C04BB4);
PPC_FUNC_IMPL(__imp__sub_83C04BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04BB8"))) PPC_WEAK_FUNC(sub_83C04BB8);
PPC_FUNC_IMPL(__imp__sub_83C04BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14504
	ctx.r3.s64 = ctx.r11.s64 + 14504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04BC4"))) PPC_WEAK_FUNC(sub_83C04BC4);
PPC_FUNC_IMPL(__imp__sub_83C04BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04BC8"))) PPC_WEAK_FUNC(sub_83C04BC8);
PPC_FUNC_IMPL(__imp__sub_83C04BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14512
	ctx.r3.s64 = ctx.r11.s64 + 14512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04BD4"))) PPC_WEAK_FUNC(sub_83C04BD4);
PPC_FUNC_IMPL(__imp__sub_83C04BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04BD8"))) PPC_WEAK_FUNC(sub_83C04BD8);
PPC_FUNC_IMPL(__imp__sub_83C04BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14520
	ctx.r3.s64 = ctx.r11.s64 + 14520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04BE4"))) PPC_WEAK_FUNC(sub_83C04BE4);
PPC_FUNC_IMPL(__imp__sub_83C04BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04BE8"))) PPC_WEAK_FUNC(sub_83C04BE8);
PPC_FUNC_IMPL(__imp__sub_83C04BE8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-8228
	ctx.r3.s64 = ctx.r11.s64 + -8228;
	// bl 0x83523120
	ctx.lr = 0x83C04C00;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,14528
	ctx.r3.s64 = ctx.r10.s64 + 14528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C04C0C;
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

__attribute__((alias("__imp__sub_83C04C1C"))) PPC_WEAK_FUNC(sub_83C04C1C);
PPC_FUNC_IMPL(__imp__sub_83C04C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04C20"))) PPC_WEAK_FUNC(sub_83C04C20);
PPC_FUNC_IMPL(__imp__sub_83C04C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14544
	ctx.r3.s64 = ctx.r11.s64 + 14544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04C2C"))) PPC_WEAK_FUNC(sub_83C04C2C);
PPC_FUNC_IMPL(__imp__sub_83C04C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04C30"))) PPC_WEAK_FUNC(sub_83C04C30);
PPC_FUNC_IMPL(__imp__sub_83C04C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14552
	ctx.r3.s64 = ctx.r11.s64 + 14552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04C3C"))) PPC_WEAK_FUNC(sub_83C04C3C);
PPC_FUNC_IMPL(__imp__sub_83C04C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04C40"))) PPC_WEAK_FUNC(sub_83C04C40);
PPC_FUNC_IMPL(__imp__sub_83C04C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14560
	ctx.r3.s64 = ctx.r11.s64 + 14560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04C4C"))) PPC_WEAK_FUNC(sub_83C04C4C);
PPC_FUNC_IMPL(__imp__sub_83C04C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04C50"))) PPC_WEAK_FUNC(sub_83C04C50);
PPC_FUNC_IMPL(__imp__sub_83C04C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14568
	ctx.r3.s64 = ctx.r11.s64 + 14568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04C5C"))) PPC_WEAK_FUNC(sub_83C04C5C);
PPC_FUNC_IMPL(__imp__sub_83C04C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04C60"))) PPC_WEAK_FUNC(sub_83C04C60);
PPC_FUNC_IMPL(__imp__sub_83C04C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14576
	ctx.r3.s64 = ctx.r11.s64 + 14576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04C6C"))) PPC_WEAK_FUNC(sub_83C04C6C);
PPC_FUNC_IMPL(__imp__sub_83C04C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04C70"))) PPC_WEAK_FUNC(sub_83C04C70);
PPC_FUNC_IMPL(__imp__sub_83C04C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14584
	ctx.r3.s64 = ctx.r11.s64 + 14584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04C7C"))) PPC_WEAK_FUNC(sub_83C04C7C);
PPC_FUNC_IMPL(__imp__sub_83C04C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04C80"))) PPC_WEAK_FUNC(sub_83C04C80);
PPC_FUNC_IMPL(__imp__sub_83C04C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14592
	ctx.r3.s64 = ctx.r11.s64 + 14592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04C8C"))) PPC_WEAK_FUNC(sub_83C04C8C);
PPC_FUNC_IMPL(__imp__sub_83C04C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04C90"))) PPC_WEAK_FUNC(sub_83C04C90);
PPC_FUNC_IMPL(__imp__sub_83C04C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14600
	ctx.r3.s64 = ctx.r11.s64 + 14600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04C9C"))) PPC_WEAK_FUNC(sub_83C04C9C);
PPC_FUNC_IMPL(__imp__sub_83C04C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04CA0"))) PPC_WEAK_FUNC(sub_83C04CA0);
PPC_FUNC_IMPL(__imp__sub_83C04CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14608
	ctx.r3.s64 = ctx.r11.s64 + 14608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04CAC"))) PPC_WEAK_FUNC(sub_83C04CAC);
PPC_FUNC_IMPL(__imp__sub_83C04CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04CB0"))) PPC_WEAK_FUNC(sub_83C04CB0);
PPC_FUNC_IMPL(__imp__sub_83C04CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14616
	ctx.r3.s64 = ctx.r11.s64 + 14616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04CBC"))) PPC_WEAK_FUNC(sub_83C04CBC);
PPC_FUNC_IMPL(__imp__sub_83C04CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04CC0"))) PPC_WEAK_FUNC(sub_83C04CC0);
PPC_FUNC_IMPL(__imp__sub_83C04CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14624
	ctx.r3.s64 = ctx.r11.s64 + 14624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04CCC"))) PPC_WEAK_FUNC(sub_83C04CCC);
PPC_FUNC_IMPL(__imp__sub_83C04CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04CD0"))) PPC_WEAK_FUNC(sub_83C04CD0);
PPC_FUNC_IMPL(__imp__sub_83C04CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14632
	ctx.r3.s64 = ctx.r11.s64 + 14632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04CDC"))) PPC_WEAK_FUNC(sub_83C04CDC);
PPC_FUNC_IMPL(__imp__sub_83C04CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04CE0"))) PPC_WEAK_FUNC(sub_83C04CE0);
PPC_FUNC_IMPL(__imp__sub_83C04CE0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-8216
	ctx.r3.s64 = ctx.r11.s64 + -8216;
	// bl 0x83523120
	ctx.lr = 0x83C04CF8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,14640
	ctx.r3.s64 = ctx.r10.s64 + 14640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C04D04;
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

__attribute__((alias("__imp__sub_83C04D14"))) PPC_WEAK_FUNC(sub_83C04D14);
PPC_FUNC_IMPL(__imp__sub_83C04D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04D18"))) PPC_WEAK_FUNC(sub_83C04D18);
PPC_FUNC_IMPL(__imp__sub_83C04D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14656
	ctx.r3.s64 = ctx.r11.s64 + 14656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04D24"))) PPC_WEAK_FUNC(sub_83C04D24);
PPC_FUNC_IMPL(__imp__sub_83C04D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04D28"))) PPC_WEAK_FUNC(sub_83C04D28);
PPC_FUNC_IMPL(__imp__sub_83C04D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14664
	ctx.r3.s64 = ctx.r11.s64 + 14664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04D34"))) PPC_WEAK_FUNC(sub_83C04D34);
PPC_FUNC_IMPL(__imp__sub_83C04D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04D38"))) PPC_WEAK_FUNC(sub_83C04D38);
PPC_FUNC_IMPL(__imp__sub_83C04D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14672
	ctx.r3.s64 = ctx.r11.s64 + 14672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04D44"))) PPC_WEAK_FUNC(sub_83C04D44);
PPC_FUNC_IMPL(__imp__sub_83C04D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04D48"))) PPC_WEAK_FUNC(sub_83C04D48);
PPC_FUNC_IMPL(__imp__sub_83C04D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14680
	ctx.r3.s64 = ctx.r11.s64 + 14680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04D54"))) PPC_WEAK_FUNC(sub_83C04D54);
PPC_FUNC_IMPL(__imp__sub_83C04D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04D58"))) PPC_WEAK_FUNC(sub_83C04D58);
PPC_FUNC_IMPL(__imp__sub_83C04D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14688
	ctx.r3.s64 = ctx.r11.s64 + 14688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04D64"))) PPC_WEAK_FUNC(sub_83C04D64);
PPC_FUNC_IMPL(__imp__sub_83C04D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04D68"))) PPC_WEAK_FUNC(sub_83C04D68);
PPC_FUNC_IMPL(__imp__sub_83C04D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14696
	ctx.r3.s64 = ctx.r11.s64 + 14696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04D74"))) PPC_WEAK_FUNC(sub_83C04D74);
PPC_FUNC_IMPL(__imp__sub_83C04D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04D78"))) PPC_WEAK_FUNC(sub_83C04D78);
PPC_FUNC_IMPL(__imp__sub_83C04D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14704
	ctx.r3.s64 = ctx.r11.s64 + 14704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04D84"))) PPC_WEAK_FUNC(sub_83C04D84);
PPC_FUNC_IMPL(__imp__sub_83C04D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04D88"))) PPC_WEAK_FUNC(sub_83C04D88);
PPC_FUNC_IMPL(__imp__sub_83C04D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14712
	ctx.r3.s64 = ctx.r11.s64 + 14712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04D94"))) PPC_WEAK_FUNC(sub_83C04D94);
PPC_FUNC_IMPL(__imp__sub_83C04D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04D98"))) PPC_WEAK_FUNC(sub_83C04D98);
PPC_FUNC_IMPL(__imp__sub_83C04D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14720
	ctx.r3.s64 = ctx.r11.s64 + 14720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04DA4"))) PPC_WEAK_FUNC(sub_83C04DA4);
PPC_FUNC_IMPL(__imp__sub_83C04DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04DA8"))) PPC_WEAK_FUNC(sub_83C04DA8);
PPC_FUNC_IMPL(__imp__sub_83C04DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14728
	ctx.r3.s64 = ctx.r11.s64 + 14728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04DB4"))) PPC_WEAK_FUNC(sub_83C04DB4);
PPC_FUNC_IMPL(__imp__sub_83C04DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04DB8"))) PPC_WEAK_FUNC(sub_83C04DB8);
PPC_FUNC_IMPL(__imp__sub_83C04DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14736
	ctx.r3.s64 = ctx.r11.s64 + 14736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04DC4"))) PPC_WEAK_FUNC(sub_83C04DC4);
PPC_FUNC_IMPL(__imp__sub_83C04DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04DC8"))) PPC_WEAK_FUNC(sub_83C04DC8);
PPC_FUNC_IMPL(__imp__sub_83C04DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14744
	ctx.r3.s64 = ctx.r11.s64 + 14744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04DD4"))) PPC_WEAK_FUNC(sub_83C04DD4);
PPC_FUNC_IMPL(__imp__sub_83C04DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04DD8"))) PPC_WEAK_FUNC(sub_83C04DD8);
PPC_FUNC_IMPL(__imp__sub_83C04DD8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-8208
	ctx.r3.s64 = ctx.r11.s64 + -8208;
	// bl 0x83523120
	ctx.lr = 0x83C04DF0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,14752
	ctx.r3.s64 = ctx.r10.s64 + 14752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C04DFC;
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

__attribute__((alias("__imp__sub_83C04E0C"))) PPC_WEAK_FUNC(sub_83C04E0C);
PPC_FUNC_IMPL(__imp__sub_83C04E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04E10"))) PPC_WEAK_FUNC(sub_83C04E10);
PPC_FUNC_IMPL(__imp__sub_83C04E10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8204
	ctx.r7.s64 = ctx.r8.s64 + -8204;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8204(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8204);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8204(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8204, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C04E38"))) PPC_WEAK_FUNC(sub_83C04E38);
PPC_FUNC_IMPL(__imp__sub_83C04E38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,29420
	ctx.r6.s64 = ctx.r7.s64 + 29420;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29348(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29348);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8204);
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
	// std r9,29420(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29420, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C04E80"))) PPC_WEAK_FUNC(sub_83C04E80);
PPC_FUNC_IMPL(__imp__sub_83C04E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14768
	ctx.r3.s64 = ctx.r11.s64 + 14768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04E8C"))) PPC_WEAK_FUNC(sub_83C04E8C);
PPC_FUNC_IMPL(__imp__sub_83C04E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04E90"))) PPC_WEAK_FUNC(sub_83C04E90);
PPC_FUNC_IMPL(__imp__sub_83C04E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14776
	ctx.r3.s64 = ctx.r11.s64 + 14776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04E9C"))) PPC_WEAK_FUNC(sub_83C04E9C);
PPC_FUNC_IMPL(__imp__sub_83C04E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04EA0"))) PPC_WEAK_FUNC(sub_83C04EA0);
PPC_FUNC_IMPL(__imp__sub_83C04EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14784
	ctx.r3.s64 = ctx.r11.s64 + 14784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04EAC"))) PPC_WEAK_FUNC(sub_83C04EAC);
PPC_FUNC_IMPL(__imp__sub_83C04EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04EB0"))) PPC_WEAK_FUNC(sub_83C04EB0);
PPC_FUNC_IMPL(__imp__sub_83C04EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14792
	ctx.r3.s64 = ctx.r11.s64 + 14792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04EBC"))) PPC_WEAK_FUNC(sub_83C04EBC);
PPC_FUNC_IMPL(__imp__sub_83C04EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04EC0"))) PPC_WEAK_FUNC(sub_83C04EC0);
PPC_FUNC_IMPL(__imp__sub_83C04EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14800
	ctx.r3.s64 = ctx.r11.s64 + 14800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04ECC"))) PPC_WEAK_FUNC(sub_83C04ECC);
PPC_FUNC_IMPL(__imp__sub_83C04ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04ED0"))) PPC_WEAK_FUNC(sub_83C04ED0);
PPC_FUNC_IMPL(__imp__sub_83C04ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14808
	ctx.r3.s64 = ctx.r11.s64 + 14808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04EDC"))) PPC_WEAK_FUNC(sub_83C04EDC);
PPC_FUNC_IMPL(__imp__sub_83C04EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04EE0"))) PPC_WEAK_FUNC(sub_83C04EE0);
PPC_FUNC_IMPL(__imp__sub_83C04EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14816
	ctx.r3.s64 = ctx.r11.s64 + 14816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04EEC"))) PPC_WEAK_FUNC(sub_83C04EEC);
PPC_FUNC_IMPL(__imp__sub_83C04EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04EF0"))) PPC_WEAK_FUNC(sub_83C04EF0);
PPC_FUNC_IMPL(__imp__sub_83C04EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14824
	ctx.r3.s64 = ctx.r11.s64 + 14824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04EFC"))) PPC_WEAK_FUNC(sub_83C04EFC);
PPC_FUNC_IMPL(__imp__sub_83C04EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04F00"))) PPC_WEAK_FUNC(sub_83C04F00);
PPC_FUNC_IMPL(__imp__sub_83C04F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14832
	ctx.r3.s64 = ctx.r11.s64 + 14832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04F0C"))) PPC_WEAK_FUNC(sub_83C04F0C);
PPC_FUNC_IMPL(__imp__sub_83C04F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04F10"))) PPC_WEAK_FUNC(sub_83C04F10);
PPC_FUNC_IMPL(__imp__sub_83C04F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14840
	ctx.r3.s64 = ctx.r11.s64 + 14840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04F1C"))) PPC_WEAK_FUNC(sub_83C04F1C);
PPC_FUNC_IMPL(__imp__sub_83C04F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04F20"))) PPC_WEAK_FUNC(sub_83C04F20);
PPC_FUNC_IMPL(__imp__sub_83C04F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14848
	ctx.r3.s64 = ctx.r11.s64 + 14848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04F2C"))) PPC_WEAK_FUNC(sub_83C04F2C);
PPC_FUNC_IMPL(__imp__sub_83C04F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04F30"))) PPC_WEAK_FUNC(sub_83C04F30);
PPC_FUNC_IMPL(__imp__sub_83C04F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14856
	ctx.r3.s64 = ctx.r11.s64 + 14856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04F3C"))) PPC_WEAK_FUNC(sub_83C04F3C);
PPC_FUNC_IMPL(__imp__sub_83C04F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04F40"))) PPC_WEAK_FUNC(sub_83C04F40);
PPC_FUNC_IMPL(__imp__sub_83C04F40) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-8196
	ctx.r3.s64 = ctx.r11.s64 + -8196;
	// bl 0x83523120
	ctx.lr = 0x83C04F58;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,14864
	ctx.r3.s64 = ctx.r10.s64 + 14864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C04F64;
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

__attribute__((alias("__imp__sub_83C04F74"))) PPC_WEAK_FUNC(sub_83C04F74);
PPC_FUNC_IMPL(__imp__sub_83C04F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04F78"))) PPC_WEAK_FUNC(sub_83C04F78);
PPC_FUNC_IMPL(__imp__sub_83C04F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14880
	ctx.r3.s64 = ctx.r11.s64 + 14880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04F84"))) PPC_WEAK_FUNC(sub_83C04F84);
PPC_FUNC_IMPL(__imp__sub_83C04F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04F88"))) PPC_WEAK_FUNC(sub_83C04F88);
PPC_FUNC_IMPL(__imp__sub_83C04F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14888
	ctx.r3.s64 = ctx.r11.s64 + 14888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04F94"))) PPC_WEAK_FUNC(sub_83C04F94);
PPC_FUNC_IMPL(__imp__sub_83C04F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04F98"))) PPC_WEAK_FUNC(sub_83C04F98);
PPC_FUNC_IMPL(__imp__sub_83C04F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14896
	ctx.r3.s64 = ctx.r11.s64 + 14896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04FA4"))) PPC_WEAK_FUNC(sub_83C04FA4);
PPC_FUNC_IMPL(__imp__sub_83C04FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04FA8"))) PPC_WEAK_FUNC(sub_83C04FA8);
PPC_FUNC_IMPL(__imp__sub_83C04FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14904
	ctx.r3.s64 = ctx.r11.s64 + 14904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04FB4"))) PPC_WEAK_FUNC(sub_83C04FB4);
PPC_FUNC_IMPL(__imp__sub_83C04FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04FB8"))) PPC_WEAK_FUNC(sub_83C04FB8);
PPC_FUNC_IMPL(__imp__sub_83C04FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14912
	ctx.r3.s64 = ctx.r11.s64 + 14912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04FC4"))) PPC_WEAK_FUNC(sub_83C04FC4);
PPC_FUNC_IMPL(__imp__sub_83C04FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04FC8"))) PPC_WEAK_FUNC(sub_83C04FC8);
PPC_FUNC_IMPL(__imp__sub_83C04FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14920
	ctx.r3.s64 = ctx.r11.s64 + 14920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04FD4"))) PPC_WEAK_FUNC(sub_83C04FD4);
PPC_FUNC_IMPL(__imp__sub_83C04FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04FD8"))) PPC_WEAK_FUNC(sub_83C04FD8);
PPC_FUNC_IMPL(__imp__sub_83C04FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14928
	ctx.r3.s64 = ctx.r11.s64 + 14928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04FE4"))) PPC_WEAK_FUNC(sub_83C04FE4);
PPC_FUNC_IMPL(__imp__sub_83C04FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04FE8"))) PPC_WEAK_FUNC(sub_83C04FE8);
PPC_FUNC_IMPL(__imp__sub_83C04FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14936
	ctx.r3.s64 = ctx.r11.s64 + 14936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04FF4"))) PPC_WEAK_FUNC(sub_83C04FF4);
PPC_FUNC_IMPL(__imp__sub_83C04FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04FF8"))) PPC_WEAK_FUNC(sub_83C04FF8);
PPC_FUNC_IMPL(__imp__sub_83C04FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14944
	ctx.r3.s64 = ctx.r11.s64 + 14944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05004"))) PPC_WEAK_FUNC(sub_83C05004);
PPC_FUNC_IMPL(__imp__sub_83C05004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05008"))) PPC_WEAK_FUNC(sub_83C05008);
PPC_FUNC_IMPL(__imp__sub_83C05008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14952
	ctx.r3.s64 = ctx.r11.s64 + 14952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05014"))) PPC_WEAK_FUNC(sub_83C05014);
PPC_FUNC_IMPL(__imp__sub_83C05014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05018"))) PPC_WEAK_FUNC(sub_83C05018);
PPC_FUNC_IMPL(__imp__sub_83C05018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14960
	ctx.r3.s64 = ctx.r11.s64 + 14960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05024"))) PPC_WEAK_FUNC(sub_83C05024);
PPC_FUNC_IMPL(__imp__sub_83C05024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05028"))) PPC_WEAK_FUNC(sub_83C05028);
PPC_FUNC_IMPL(__imp__sub_83C05028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14968
	ctx.r3.s64 = ctx.r11.s64 + 14968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05034"))) PPC_WEAK_FUNC(sub_83C05034);
PPC_FUNC_IMPL(__imp__sub_83C05034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05038"))) PPC_WEAK_FUNC(sub_83C05038);
PPC_FUNC_IMPL(__imp__sub_83C05038) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-8188
	ctx.r3.s64 = ctx.r11.s64 + -8188;
	// bl 0x83523120
	ctx.lr = 0x83C05050;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,14976
	ctx.r3.s64 = ctx.r10.s64 + 14976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0505C;
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

__attribute__((alias("__imp__sub_83C0506C"))) PPC_WEAK_FUNC(sub_83C0506C);
PPC_FUNC_IMPL(__imp__sub_83C0506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05070"))) PPC_WEAK_FUNC(sub_83C05070);
PPC_FUNC_IMPL(__imp__sub_83C05070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14992
	ctx.r3.s64 = ctx.r11.s64 + 14992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0507C"))) PPC_WEAK_FUNC(sub_83C0507C);
PPC_FUNC_IMPL(__imp__sub_83C0507C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05080"))) PPC_WEAK_FUNC(sub_83C05080);
PPC_FUNC_IMPL(__imp__sub_83C05080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15000
	ctx.r3.s64 = ctx.r11.s64 + 15000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0508C"))) PPC_WEAK_FUNC(sub_83C0508C);
PPC_FUNC_IMPL(__imp__sub_83C0508C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05090"))) PPC_WEAK_FUNC(sub_83C05090);
PPC_FUNC_IMPL(__imp__sub_83C05090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15008
	ctx.r3.s64 = ctx.r11.s64 + 15008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0509C"))) PPC_WEAK_FUNC(sub_83C0509C);
PPC_FUNC_IMPL(__imp__sub_83C0509C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C050A0"))) PPC_WEAK_FUNC(sub_83C050A0);
PPC_FUNC_IMPL(__imp__sub_83C050A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15016
	ctx.r3.s64 = ctx.r11.s64 + 15016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C050AC"))) PPC_WEAK_FUNC(sub_83C050AC);
PPC_FUNC_IMPL(__imp__sub_83C050AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C050B0"))) PPC_WEAK_FUNC(sub_83C050B0);
PPC_FUNC_IMPL(__imp__sub_83C050B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15024
	ctx.r3.s64 = ctx.r11.s64 + 15024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C050BC"))) PPC_WEAK_FUNC(sub_83C050BC);
PPC_FUNC_IMPL(__imp__sub_83C050BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C050C0"))) PPC_WEAK_FUNC(sub_83C050C0);
PPC_FUNC_IMPL(__imp__sub_83C050C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15032
	ctx.r3.s64 = ctx.r11.s64 + 15032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C050CC"))) PPC_WEAK_FUNC(sub_83C050CC);
PPC_FUNC_IMPL(__imp__sub_83C050CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C050D0"))) PPC_WEAK_FUNC(sub_83C050D0);
PPC_FUNC_IMPL(__imp__sub_83C050D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15040
	ctx.r3.s64 = ctx.r11.s64 + 15040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C050DC"))) PPC_WEAK_FUNC(sub_83C050DC);
PPC_FUNC_IMPL(__imp__sub_83C050DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C050E0"))) PPC_WEAK_FUNC(sub_83C050E0);
PPC_FUNC_IMPL(__imp__sub_83C050E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15048
	ctx.r3.s64 = ctx.r11.s64 + 15048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C050EC"))) PPC_WEAK_FUNC(sub_83C050EC);
PPC_FUNC_IMPL(__imp__sub_83C050EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C050F0"))) PPC_WEAK_FUNC(sub_83C050F0);
PPC_FUNC_IMPL(__imp__sub_83C050F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15056
	ctx.r3.s64 = ctx.r11.s64 + 15056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C050FC"))) PPC_WEAK_FUNC(sub_83C050FC);
PPC_FUNC_IMPL(__imp__sub_83C050FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05100"))) PPC_WEAK_FUNC(sub_83C05100);
PPC_FUNC_IMPL(__imp__sub_83C05100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15064
	ctx.r3.s64 = ctx.r11.s64 + 15064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0510C"))) PPC_WEAK_FUNC(sub_83C0510C);
PPC_FUNC_IMPL(__imp__sub_83C0510C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05110"))) PPC_WEAK_FUNC(sub_83C05110);
PPC_FUNC_IMPL(__imp__sub_83C05110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15072
	ctx.r3.s64 = ctx.r11.s64 + 15072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0511C"))) PPC_WEAK_FUNC(sub_83C0511C);
PPC_FUNC_IMPL(__imp__sub_83C0511C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05120"))) PPC_WEAK_FUNC(sub_83C05120);
PPC_FUNC_IMPL(__imp__sub_83C05120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15080
	ctx.r3.s64 = ctx.r11.s64 + 15080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0512C"))) PPC_WEAK_FUNC(sub_83C0512C);
PPC_FUNC_IMPL(__imp__sub_83C0512C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05130"))) PPC_WEAK_FUNC(sub_83C05130);
PPC_FUNC_IMPL(__imp__sub_83C05130) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-8180
	ctx.r3.s64 = ctx.r11.s64 + -8180;
	// bl 0x83523120
	ctx.lr = 0x83C05148;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,15088
	ctx.r3.s64 = ctx.r10.s64 + 15088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C05154;
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

__attribute__((alias("__imp__sub_83C05164"))) PPC_WEAK_FUNC(sub_83C05164);
PPC_FUNC_IMPL(__imp__sub_83C05164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05168"))) PPC_WEAK_FUNC(sub_83C05168);
PPC_FUNC_IMPL(__imp__sub_83C05168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15104
	ctx.r3.s64 = ctx.r11.s64 + 15104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05174"))) PPC_WEAK_FUNC(sub_83C05174);
PPC_FUNC_IMPL(__imp__sub_83C05174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05178"))) PPC_WEAK_FUNC(sub_83C05178);
PPC_FUNC_IMPL(__imp__sub_83C05178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15112
	ctx.r3.s64 = ctx.r11.s64 + 15112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05184"))) PPC_WEAK_FUNC(sub_83C05184);
PPC_FUNC_IMPL(__imp__sub_83C05184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05188"))) PPC_WEAK_FUNC(sub_83C05188);
PPC_FUNC_IMPL(__imp__sub_83C05188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15120
	ctx.r3.s64 = ctx.r11.s64 + 15120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05194"))) PPC_WEAK_FUNC(sub_83C05194);
PPC_FUNC_IMPL(__imp__sub_83C05194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05198"))) PPC_WEAK_FUNC(sub_83C05198);
PPC_FUNC_IMPL(__imp__sub_83C05198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15128
	ctx.r3.s64 = ctx.r11.s64 + 15128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C051A4"))) PPC_WEAK_FUNC(sub_83C051A4);
PPC_FUNC_IMPL(__imp__sub_83C051A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C051A8"))) PPC_WEAK_FUNC(sub_83C051A8);
PPC_FUNC_IMPL(__imp__sub_83C051A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15136
	ctx.r3.s64 = ctx.r11.s64 + 15136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C051B4"))) PPC_WEAK_FUNC(sub_83C051B4);
PPC_FUNC_IMPL(__imp__sub_83C051B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C051B8"))) PPC_WEAK_FUNC(sub_83C051B8);
PPC_FUNC_IMPL(__imp__sub_83C051B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15144
	ctx.r3.s64 = ctx.r11.s64 + 15144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C051C4"))) PPC_WEAK_FUNC(sub_83C051C4);
PPC_FUNC_IMPL(__imp__sub_83C051C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C051C8"))) PPC_WEAK_FUNC(sub_83C051C8);
PPC_FUNC_IMPL(__imp__sub_83C051C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15152
	ctx.r3.s64 = ctx.r11.s64 + 15152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C051D4"))) PPC_WEAK_FUNC(sub_83C051D4);
PPC_FUNC_IMPL(__imp__sub_83C051D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C051D8"))) PPC_WEAK_FUNC(sub_83C051D8);
PPC_FUNC_IMPL(__imp__sub_83C051D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15160
	ctx.r3.s64 = ctx.r11.s64 + 15160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C051E4"))) PPC_WEAK_FUNC(sub_83C051E4);
PPC_FUNC_IMPL(__imp__sub_83C051E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C051E8"))) PPC_WEAK_FUNC(sub_83C051E8);
PPC_FUNC_IMPL(__imp__sub_83C051E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15168
	ctx.r3.s64 = ctx.r11.s64 + 15168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C051F4"))) PPC_WEAK_FUNC(sub_83C051F4);
PPC_FUNC_IMPL(__imp__sub_83C051F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C051F8"))) PPC_WEAK_FUNC(sub_83C051F8);
PPC_FUNC_IMPL(__imp__sub_83C051F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15176
	ctx.r3.s64 = ctx.r11.s64 + 15176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05204"))) PPC_WEAK_FUNC(sub_83C05204);
PPC_FUNC_IMPL(__imp__sub_83C05204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05208"))) PPC_WEAK_FUNC(sub_83C05208);
PPC_FUNC_IMPL(__imp__sub_83C05208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15184
	ctx.r3.s64 = ctx.r11.s64 + 15184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05214"))) PPC_WEAK_FUNC(sub_83C05214);
PPC_FUNC_IMPL(__imp__sub_83C05214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05218"))) PPC_WEAK_FUNC(sub_83C05218);
PPC_FUNC_IMPL(__imp__sub_83C05218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15192
	ctx.r3.s64 = ctx.r11.s64 + 15192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05224"))) PPC_WEAK_FUNC(sub_83C05224);
PPC_FUNC_IMPL(__imp__sub_83C05224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05228"))) PPC_WEAK_FUNC(sub_83C05228);
PPC_FUNC_IMPL(__imp__sub_83C05228) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-8172
	ctx.r3.s64 = ctx.r11.s64 + -8172;
	// bl 0x83523120
	ctx.lr = 0x83C05240;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,15200
	ctx.r3.s64 = ctx.r10.s64 + 15200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0524C;
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

__attribute__((alias("__imp__sub_83C0525C"))) PPC_WEAK_FUNC(sub_83C0525C);
PPC_FUNC_IMPL(__imp__sub_83C0525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05260"))) PPC_WEAK_FUNC(sub_83C05260);
PPC_FUNC_IMPL(__imp__sub_83C05260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15216
	ctx.r3.s64 = ctx.r11.s64 + 15216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0526C"))) PPC_WEAK_FUNC(sub_83C0526C);
PPC_FUNC_IMPL(__imp__sub_83C0526C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05270"))) PPC_WEAK_FUNC(sub_83C05270);
PPC_FUNC_IMPL(__imp__sub_83C05270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15224
	ctx.r3.s64 = ctx.r11.s64 + 15224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0527C"))) PPC_WEAK_FUNC(sub_83C0527C);
PPC_FUNC_IMPL(__imp__sub_83C0527C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05280"))) PPC_WEAK_FUNC(sub_83C05280);
PPC_FUNC_IMPL(__imp__sub_83C05280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15232
	ctx.r3.s64 = ctx.r11.s64 + 15232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0528C"))) PPC_WEAK_FUNC(sub_83C0528C);
PPC_FUNC_IMPL(__imp__sub_83C0528C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05290"))) PPC_WEAK_FUNC(sub_83C05290);
PPC_FUNC_IMPL(__imp__sub_83C05290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15240
	ctx.r3.s64 = ctx.r11.s64 + 15240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0529C"))) PPC_WEAK_FUNC(sub_83C0529C);
PPC_FUNC_IMPL(__imp__sub_83C0529C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C052A0"))) PPC_WEAK_FUNC(sub_83C052A0);
PPC_FUNC_IMPL(__imp__sub_83C052A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15248
	ctx.r3.s64 = ctx.r11.s64 + 15248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C052AC"))) PPC_WEAK_FUNC(sub_83C052AC);
PPC_FUNC_IMPL(__imp__sub_83C052AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C052B0"))) PPC_WEAK_FUNC(sub_83C052B0);
PPC_FUNC_IMPL(__imp__sub_83C052B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15256
	ctx.r3.s64 = ctx.r11.s64 + 15256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C052BC"))) PPC_WEAK_FUNC(sub_83C052BC);
PPC_FUNC_IMPL(__imp__sub_83C052BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C052C0"))) PPC_WEAK_FUNC(sub_83C052C0);
PPC_FUNC_IMPL(__imp__sub_83C052C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15264
	ctx.r3.s64 = ctx.r11.s64 + 15264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C052CC"))) PPC_WEAK_FUNC(sub_83C052CC);
PPC_FUNC_IMPL(__imp__sub_83C052CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C052D0"))) PPC_WEAK_FUNC(sub_83C052D0);
PPC_FUNC_IMPL(__imp__sub_83C052D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15272
	ctx.r3.s64 = ctx.r11.s64 + 15272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C052DC"))) PPC_WEAK_FUNC(sub_83C052DC);
PPC_FUNC_IMPL(__imp__sub_83C052DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C052E0"))) PPC_WEAK_FUNC(sub_83C052E0);
PPC_FUNC_IMPL(__imp__sub_83C052E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15280
	ctx.r3.s64 = ctx.r11.s64 + 15280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C052EC"))) PPC_WEAK_FUNC(sub_83C052EC);
PPC_FUNC_IMPL(__imp__sub_83C052EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C052F0"))) PPC_WEAK_FUNC(sub_83C052F0);
PPC_FUNC_IMPL(__imp__sub_83C052F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15288
	ctx.r3.s64 = ctx.r11.s64 + 15288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C052FC"))) PPC_WEAK_FUNC(sub_83C052FC);
PPC_FUNC_IMPL(__imp__sub_83C052FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05300"))) PPC_WEAK_FUNC(sub_83C05300);
PPC_FUNC_IMPL(__imp__sub_83C05300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15296
	ctx.r3.s64 = ctx.r11.s64 + 15296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0530C"))) PPC_WEAK_FUNC(sub_83C0530C);
PPC_FUNC_IMPL(__imp__sub_83C0530C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05310"))) PPC_WEAK_FUNC(sub_83C05310);
PPC_FUNC_IMPL(__imp__sub_83C05310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15304
	ctx.r3.s64 = ctx.r11.s64 + 15304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0531C"))) PPC_WEAK_FUNC(sub_83C0531C);
PPC_FUNC_IMPL(__imp__sub_83C0531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05320"))) PPC_WEAK_FUNC(sub_83C05320);
PPC_FUNC_IMPL(__imp__sub_83C05320) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-8160
	ctx.r3.s64 = ctx.r11.s64 + -8160;
	// bl 0x83523120
	ctx.lr = 0x83C05338;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,15312
	ctx.r3.s64 = ctx.r10.s64 + 15312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C05344;
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

__attribute__((alias("__imp__sub_83C05354"))) PPC_WEAK_FUNC(sub_83C05354);
PPC_FUNC_IMPL(__imp__sub_83C05354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05358"))) PPC_WEAK_FUNC(sub_83C05358);
PPC_FUNC_IMPL(__imp__sub_83C05358) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8144
	ctx.r7.s64 = ctx.r8.s64 + -8144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8144);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8144(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8144, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C05380"))) PPC_WEAK_FUNC(sub_83C05380);
PPC_FUNC_IMPL(__imp__sub_83C05380) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,29992
	ctx.r6.s64 = ctx.r7.s64 + 29992;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29920(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29920);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8144(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8144);
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
	// std r9,29992(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29992, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C053C8"))) PPC_WEAK_FUNC(sub_83C053C8);
PPC_FUNC_IMPL(__imp__sub_83C053C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15328
	ctx.r3.s64 = ctx.r11.s64 + 15328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C053D4"))) PPC_WEAK_FUNC(sub_83C053D4);
PPC_FUNC_IMPL(__imp__sub_83C053D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C053D8"))) PPC_WEAK_FUNC(sub_83C053D8);
PPC_FUNC_IMPL(__imp__sub_83C053D8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-8136
	ctx.r3.s64 = ctx.r11.s64 + -8136;
	// bl 0x8259af80
	ctx.lr = 0x83C053F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,15344
	ctx.r3.s64 = ctx.r10.s64 + 15344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C053FC;
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

__attribute__((alias("__imp__sub_83C0540C"))) PPC_WEAK_FUNC(sub_83C0540C);
PPC_FUNC_IMPL(__imp__sub_83C0540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05410"))) PPC_WEAK_FUNC(sub_83C05410);
PPC_FUNC_IMPL(__imp__sub_83C05410) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8156
	ctx.r11.s64 = ctx.r8.s64 + -8156;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,29968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29968);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15336
	ctx.r3.s64 = ctx.r6.s64 + 15336;
	// stw r10,-8156(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8156, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05440"))) PPC_WEAK_FUNC(sub_83C05440);
PPC_FUNC_IMPL(__imp__sub_83C05440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15352
	ctx.r3.s64 = ctx.r11.s64 + 15352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0544C"))) PPC_WEAK_FUNC(sub_83C0544C);
PPC_FUNC_IMPL(__imp__sub_83C0544C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05450"))) PPC_WEAK_FUNC(sub_83C05450);
PPC_FUNC_IMPL(__imp__sub_83C05450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15360
	ctx.r3.s64 = ctx.r11.s64 + 15360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0545C"))) PPC_WEAK_FUNC(sub_83C0545C);
PPC_FUNC_IMPL(__imp__sub_83C0545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05460"))) PPC_WEAK_FUNC(sub_83C05460);
PPC_FUNC_IMPL(__imp__sub_83C05460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15368
	ctx.r3.s64 = ctx.r11.s64 + 15368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0546C"))) PPC_WEAK_FUNC(sub_83C0546C);
PPC_FUNC_IMPL(__imp__sub_83C0546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05470"))) PPC_WEAK_FUNC(sub_83C05470);
PPC_FUNC_IMPL(__imp__sub_83C05470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15376
	ctx.r3.s64 = ctx.r11.s64 + 15376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0547C"))) PPC_WEAK_FUNC(sub_83C0547C);
PPC_FUNC_IMPL(__imp__sub_83C0547C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05480"))) PPC_WEAK_FUNC(sub_83C05480);
PPC_FUNC_IMPL(__imp__sub_83C05480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15384
	ctx.r3.s64 = ctx.r11.s64 + 15384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0548C"))) PPC_WEAK_FUNC(sub_83C0548C);
PPC_FUNC_IMPL(__imp__sub_83C0548C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05490"))) PPC_WEAK_FUNC(sub_83C05490);
PPC_FUNC_IMPL(__imp__sub_83C05490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15392
	ctx.r3.s64 = ctx.r11.s64 + 15392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0549C"))) PPC_WEAK_FUNC(sub_83C0549C);
PPC_FUNC_IMPL(__imp__sub_83C0549C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C054A0"))) PPC_WEAK_FUNC(sub_83C054A0);
PPC_FUNC_IMPL(__imp__sub_83C054A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15400
	ctx.r3.s64 = ctx.r11.s64 + 15400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C054AC"))) PPC_WEAK_FUNC(sub_83C054AC);
PPC_FUNC_IMPL(__imp__sub_83C054AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C054B0"))) PPC_WEAK_FUNC(sub_83C054B0);
PPC_FUNC_IMPL(__imp__sub_83C054B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15408
	ctx.r3.s64 = ctx.r11.s64 + 15408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C054BC"))) PPC_WEAK_FUNC(sub_83C054BC);
PPC_FUNC_IMPL(__imp__sub_83C054BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C054C0"))) PPC_WEAK_FUNC(sub_83C054C0);
PPC_FUNC_IMPL(__imp__sub_83C054C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15416
	ctx.r3.s64 = ctx.r11.s64 + 15416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C054CC"))) PPC_WEAK_FUNC(sub_83C054CC);
PPC_FUNC_IMPL(__imp__sub_83C054CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C054D0"))) PPC_WEAK_FUNC(sub_83C054D0);
PPC_FUNC_IMPL(__imp__sub_83C054D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15424
	ctx.r3.s64 = ctx.r11.s64 + 15424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C054DC"))) PPC_WEAK_FUNC(sub_83C054DC);
PPC_FUNC_IMPL(__imp__sub_83C054DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C054E0"))) PPC_WEAK_FUNC(sub_83C054E0);
PPC_FUNC_IMPL(__imp__sub_83C054E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15432
	ctx.r3.s64 = ctx.r11.s64 + 15432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C054EC"))) PPC_WEAK_FUNC(sub_83C054EC);
PPC_FUNC_IMPL(__imp__sub_83C054EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C054F0"))) PPC_WEAK_FUNC(sub_83C054F0);
PPC_FUNC_IMPL(__imp__sub_83C054F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15440
	ctx.r3.s64 = ctx.r11.s64 + 15440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C054FC"))) PPC_WEAK_FUNC(sub_83C054FC);
PPC_FUNC_IMPL(__imp__sub_83C054FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05500"))) PPC_WEAK_FUNC(sub_83C05500);
PPC_FUNC_IMPL(__imp__sub_83C05500) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// bl 0x83523120
	ctx.lr = 0x83C05518;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,15448
	ctx.r3.s64 = ctx.r10.s64 + 15448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C05524;
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

__attribute__((alias("__imp__sub_83C05534"))) PPC_WEAK_FUNC(sub_83C05534);
PPC_FUNC_IMPL(__imp__sub_83C05534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05538"))) PPC_WEAK_FUNC(sub_83C05538);
PPC_FUNC_IMPL(__imp__sub_83C05538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15464
	ctx.r3.s64 = ctx.r11.s64 + 15464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05544"))) PPC_WEAK_FUNC(sub_83C05544);
PPC_FUNC_IMPL(__imp__sub_83C05544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05548"))) PPC_WEAK_FUNC(sub_83C05548);
PPC_FUNC_IMPL(__imp__sub_83C05548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15472
	ctx.r3.s64 = ctx.r11.s64 + 15472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05554"))) PPC_WEAK_FUNC(sub_83C05554);
PPC_FUNC_IMPL(__imp__sub_83C05554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C05558"))) PPC_WEAK_FUNC(sub_83C05558);
PPC_FUNC_IMPL(__imp__sub_83C05558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,15480
	ctx.r3.s64 = ctx.r11.s64 + 15480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C05564"))) PPC_WEAK_FUNC(sub_83C05564);
PPC_FUNC_IMPL(__imp__sub_83C05564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

