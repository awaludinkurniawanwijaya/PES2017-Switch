#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CD5C30"))) PPC_WEAK_FUNC(sub_83CD5C30);
PPC_FUNC_IMPL(__imp__sub_83CD5C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13584
	ctx.r3.s64 = ctx.r11.s64 + -13584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5C3C"))) PPC_WEAK_FUNC(sub_83CD5C3C);
PPC_FUNC_IMPL(__imp__sub_83CD5C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5C40"))) PPC_WEAK_FUNC(sub_83CD5C40);
PPC_FUNC_IMPL(__imp__sub_83CD5C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13576
	ctx.r3.s64 = ctx.r11.s64 + -13576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5C4C"))) PPC_WEAK_FUNC(sub_83CD5C4C);
PPC_FUNC_IMPL(__imp__sub_83CD5C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5C50"))) PPC_WEAK_FUNC(sub_83CD5C50);
PPC_FUNC_IMPL(__imp__sub_83CD5C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13568
	ctx.r3.s64 = ctx.r11.s64 + -13568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5C5C"))) PPC_WEAK_FUNC(sub_83CD5C5C);
PPC_FUNC_IMPL(__imp__sub_83CD5C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5C60"))) PPC_WEAK_FUNC(sub_83CD5C60);
PPC_FUNC_IMPL(__imp__sub_83CD5C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13560
	ctx.r3.s64 = ctx.r11.s64 + -13560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5C6C"))) PPC_WEAK_FUNC(sub_83CD5C6C);
PPC_FUNC_IMPL(__imp__sub_83CD5C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5C70"))) PPC_WEAK_FUNC(sub_83CD5C70);
PPC_FUNC_IMPL(__imp__sub_83CD5C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13552
	ctx.r3.s64 = ctx.r11.s64 + -13552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5C7C"))) PPC_WEAK_FUNC(sub_83CD5C7C);
PPC_FUNC_IMPL(__imp__sub_83CD5C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5C80"))) PPC_WEAK_FUNC(sub_83CD5C80);
PPC_FUNC_IMPL(__imp__sub_83CD5C80) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// bl 0x83523120
	ctx.lr = 0x83CD5C98;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-13544
	ctx.r3.s64 = ctx.r10.s64 + -13544;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD5CA4;
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

__attribute__((alias("__imp__sub_83CD5CB4"))) PPC_WEAK_FUNC(sub_83CD5CB4);
PPC_FUNC_IMPL(__imp__sub_83CD5CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5CB8"))) PPC_WEAK_FUNC(sub_83CD5CB8);
PPC_FUNC_IMPL(__imp__sub_83CD5CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5136
	ctx.r7.s64 = ctx.r8.s64 + 5136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD5CE0"))) PPC_WEAK_FUNC(sub_83CD5CE0);
PPC_FUNC_IMPL(__imp__sub_83CD5CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,6492
	ctx.r6.s64 = ctx.r7.s64 + 6492;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6408(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6408);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5136);
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
	// std r9,6492(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6492, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD5D28"))) PPC_WEAK_FUNC(sub_83CD5D28);
PPC_FUNC_IMPL(__imp__sub_83CD5D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13528
	ctx.r3.s64 = ctx.r11.s64 + -13528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5D34"))) PPC_WEAK_FUNC(sub_83CD5D34);
PPC_FUNC_IMPL(__imp__sub_83CD5D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5D38"))) PPC_WEAK_FUNC(sub_83CD5D38);
PPC_FUNC_IMPL(__imp__sub_83CD5D38) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,5144
	ctx.r3.s64 = ctx.r11.s64 + 5144;
	// bl 0x8259af80
	ctx.lr = 0x83CD5D50;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-13512
	ctx.r3.s64 = ctx.r10.s64 + -13512;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD5D5C;
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

__attribute__((alias("__imp__sub_83CD5D6C"))) PPC_WEAK_FUNC(sub_83CD5D6C);
PPC_FUNC_IMPL(__imp__sub_83CD5D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5D70"))) PPC_WEAK_FUNC(sub_83CD5D70);
PPC_FUNC_IMPL(__imp__sub_83CD5D70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5124
	ctx.r11.s64 = ctx.r8.s64 + 5124;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,6456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6456);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13520
	ctx.r3.s64 = ctx.r6.s64 + -13520;
	// stw r10,5124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5DA0"))) PPC_WEAK_FUNC(sub_83CD5DA0);
PPC_FUNC_IMPL(__imp__sub_83CD5DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13504
	ctx.r3.s64 = ctx.r11.s64 + -13504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5DAC"))) PPC_WEAK_FUNC(sub_83CD5DAC);
PPC_FUNC_IMPL(__imp__sub_83CD5DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5DB0"))) PPC_WEAK_FUNC(sub_83CD5DB0);
PPC_FUNC_IMPL(__imp__sub_83CD5DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13496
	ctx.r3.s64 = ctx.r11.s64 + -13496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5DBC"))) PPC_WEAK_FUNC(sub_83CD5DBC);
PPC_FUNC_IMPL(__imp__sub_83CD5DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5DC0"))) PPC_WEAK_FUNC(sub_83CD5DC0);
PPC_FUNC_IMPL(__imp__sub_83CD5DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13488
	ctx.r3.s64 = ctx.r11.s64 + -13488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5DCC"))) PPC_WEAK_FUNC(sub_83CD5DCC);
PPC_FUNC_IMPL(__imp__sub_83CD5DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5DD0"))) PPC_WEAK_FUNC(sub_83CD5DD0);
PPC_FUNC_IMPL(__imp__sub_83CD5DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13480
	ctx.r3.s64 = ctx.r11.s64 + -13480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5DDC"))) PPC_WEAK_FUNC(sub_83CD5DDC);
PPC_FUNC_IMPL(__imp__sub_83CD5DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5DE0"))) PPC_WEAK_FUNC(sub_83CD5DE0);
PPC_FUNC_IMPL(__imp__sub_83CD5DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13472
	ctx.r3.s64 = ctx.r11.s64 + -13472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5DEC"))) PPC_WEAK_FUNC(sub_83CD5DEC);
PPC_FUNC_IMPL(__imp__sub_83CD5DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5DF0"))) PPC_WEAK_FUNC(sub_83CD5DF0);
PPC_FUNC_IMPL(__imp__sub_83CD5DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13464
	ctx.r3.s64 = ctx.r11.s64 + -13464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5DFC"))) PPC_WEAK_FUNC(sub_83CD5DFC);
PPC_FUNC_IMPL(__imp__sub_83CD5DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5E00"))) PPC_WEAK_FUNC(sub_83CD5E00);
PPC_FUNC_IMPL(__imp__sub_83CD5E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13456
	ctx.r3.s64 = ctx.r11.s64 + -13456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5E0C"))) PPC_WEAK_FUNC(sub_83CD5E0C);
PPC_FUNC_IMPL(__imp__sub_83CD5E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5E10"))) PPC_WEAK_FUNC(sub_83CD5E10);
PPC_FUNC_IMPL(__imp__sub_83CD5E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13448
	ctx.r3.s64 = ctx.r11.s64 + -13448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5E1C"))) PPC_WEAK_FUNC(sub_83CD5E1C);
PPC_FUNC_IMPL(__imp__sub_83CD5E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5E20"))) PPC_WEAK_FUNC(sub_83CD5E20);
PPC_FUNC_IMPL(__imp__sub_83CD5E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13440
	ctx.r3.s64 = ctx.r11.s64 + -13440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5E2C"))) PPC_WEAK_FUNC(sub_83CD5E2C);
PPC_FUNC_IMPL(__imp__sub_83CD5E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5E30"))) PPC_WEAK_FUNC(sub_83CD5E30);
PPC_FUNC_IMPL(__imp__sub_83CD5E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13432
	ctx.r3.s64 = ctx.r11.s64 + -13432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5E3C"))) PPC_WEAK_FUNC(sub_83CD5E3C);
PPC_FUNC_IMPL(__imp__sub_83CD5E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5E40"))) PPC_WEAK_FUNC(sub_83CD5E40);
PPC_FUNC_IMPL(__imp__sub_83CD5E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13424
	ctx.r3.s64 = ctx.r11.s64 + -13424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5E4C"))) PPC_WEAK_FUNC(sub_83CD5E4C);
PPC_FUNC_IMPL(__imp__sub_83CD5E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5E50"))) PPC_WEAK_FUNC(sub_83CD5E50);
PPC_FUNC_IMPL(__imp__sub_83CD5E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13416
	ctx.r3.s64 = ctx.r11.s64 + -13416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5E5C"))) PPC_WEAK_FUNC(sub_83CD5E5C);
PPC_FUNC_IMPL(__imp__sub_83CD5E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5E60"))) PPC_WEAK_FUNC(sub_83CD5E60);
PPC_FUNC_IMPL(__imp__sub_83CD5E60) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,5488
	ctx.r3.s64 = ctx.r11.s64 + 5488;
	// bl 0x83523120
	ctx.lr = 0x83CD5E78;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-13408
	ctx.r3.s64 = ctx.r10.s64 + -13408;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD5E84;
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

__attribute__((alias("__imp__sub_83CD5E94"))) PPC_WEAK_FUNC(sub_83CD5E94);
PPC_FUNC_IMPL(__imp__sub_83CD5E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5E98"))) PPC_WEAK_FUNC(sub_83CD5E98);
PPC_FUNC_IMPL(__imp__sub_83CD5E98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5504
	ctx.r7.s64 = ctx.r8.s64 + 5504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD5EC0"))) PPC_WEAK_FUNC(sub_83CD5EC0);
PPC_FUNC_IMPL(__imp__sub_83CD5EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,6620
	ctx.r6.s64 = ctx.r7.s64 + 6620;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6548(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6548);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5504);
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
	// std r9,6620(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6620, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD5F08"))) PPC_WEAK_FUNC(sub_83CD5F08);
PPC_FUNC_IMPL(__imp__sub_83CD5F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13392
	ctx.r3.s64 = ctx.r11.s64 + -13392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5F14"))) PPC_WEAK_FUNC(sub_83CD5F14);
PPC_FUNC_IMPL(__imp__sub_83CD5F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5F18"))) PPC_WEAK_FUNC(sub_83CD5F18);
PPC_FUNC_IMPL(__imp__sub_83CD5F18) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,5512
	ctx.r3.s64 = ctx.r11.s64 + 5512;
	// bl 0x8259af80
	ctx.lr = 0x83CD5F30;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-13376
	ctx.r3.s64 = ctx.r10.s64 + -13376;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD5F3C;
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

__attribute__((alias("__imp__sub_83CD5F4C"))) PPC_WEAK_FUNC(sub_83CD5F4C);
PPC_FUNC_IMPL(__imp__sub_83CD5F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5F50"))) PPC_WEAK_FUNC(sub_83CD5F50);
PPC_FUNC_IMPL(__imp__sub_83CD5F50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5492
	ctx.r11.s64 = ctx.r8.s64 + 5492;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,6596(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6596);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13384
	ctx.r3.s64 = ctx.r6.s64 + -13384;
	// stw r10,5492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5F80"))) PPC_WEAK_FUNC(sub_83CD5F80);
PPC_FUNC_IMPL(__imp__sub_83CD5F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13368
	ctx.r3.s64 = ctx.r11.s64 + -13368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5F8C"))) PPC_WEAK_FUNC(sub_83CD5F8C);
PPC_FUNC_IMPL(__imp__sub_83CD5F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5F90"))) PPC_WEAK_FUNC(sub_83CD5F90);
PPC_FUNC_IMPL(__imp__sub_83CD5F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13360
	ctx.r3.s64 = ctx.r11.s64 + -13360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5F9C"))) PPC_WEAK_FUNC(sub_83CD5F9C);
PPC_FUNC_IMPL(__imp__sub_83CD5F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5FA0"))) PPC_WEAK_FUNC(sub_83CD5FA0);
PPC_FUNC_IMPL(__imp__sub_83CD5FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13352
	ctx.r3.s64 = ctx.r11.s64 + -13352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5FAC"))) PPC_WEAK_FUNC(sub_83CD5FAC);
PPC_FUNC_IMPL(__imp__sub_83CD5FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5FB0"))) PPC_WEAK_FUNC(sub_83CD5FB0);
PPC_FUNC_IMPL(__imp__sub_83CD5FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13344
	ctx.r3.s64 = ctx.r11.s64 + -13344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5FBC"))) PPC_WEAK_FUNC(sub_83CD5FBC);
PPC_FUNC_IMPL(__imp__sub_83CD5FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5FC0"))) PPC_WEAK_FUNC(sub_83CD5FC0);
PPC_FUNC_IMPL(__imp__sub_83CD5FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13336
	ctx.r3.s64 = ctx.r11.s64 + -13336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5FCC"))) PPC_WEAK_FUNC(sub_83CD5FCC);
PPC_FUNC_IMPL(__imp__sub_83CD5FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5FD0"))) PPC_WEAK_FUNC(sub_83CD5FD0);
PPC_FUNC_IMPL(__imp__sub_83CD5FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13328
	ctx.r3.s64 = ctx.r11.s64 + -13328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5FDC"))) PPC_WEAK_FUNC(sub_83CD5FDC);
PPC_FUNC_IMPL(__imp__sub_83CD5FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5FE0"))) PPC_WEAK_FUNC(sub_83CD5FE0);
PPC_FUNC_IMPL(__imp__sub_83CD5FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13320
	ctx.r3.s64 = ctx.r11.s64 + -13320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5FEC"))) PPC_WEAK_FUNC(sub_83CD5FEC);
PPC_FUNC_IMPL(__imp__sub_83CD5FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD5FF0"))) PPC_WEAK_FUNC(sub_83CD5FF0);
PPC_FUNC_IMPL(__imp__sub_83CD5FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13312
	ctx.r3.s64 = ctx.r11.s64 + -13312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD5FFC"))) PPC_WEAK_FUNC(sub_83CD5FFC);
PPC_FUNC_IMPL(__imp__sub_83CD5FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6000"))) PPC_WEAK_FUNC(sub_83CD6000);
PPC_FUNC_IMPL(__imp__sub_83CD6000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13304
	ctx.r3.s64 = ctx.r11.s64 + -13304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD600C"))) PPC_WEAK_FUNC(sub_83CD600C);
PPC_FUNC_IMPL(__imp__sub_83CD600C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6010"))) PPC_WEAK_FUNC(sub_83CD6010);
PPC_FUNC_IMPL(__imp__sub_83CD6010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13296
	ctx.r3.s64 = ctx.r11.s64 + -13296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD601C"))) PPC_WEAK_FUNC(sub_83CD601C);
PPC_FUNC_IMPL(__imp__sub_83CD601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6020"))) PPC_WEAK_FUNC(sub_83CD6020);
PPC_FUNC_IMPL(__imp__sub_83CD6020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13288
	ctx.r3.s64 = ctx.r11.s64 + -13288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD602C"))) PPC_WEAK_FUNC(sub_83CD602C);
PPC_FUNC_IMPL(__imp__sub_83CD602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6030"))) PPC_WEAK_FUNC(sub_83CD6030);
PPC_FUNC_IMPL(__imp__sub_83CD6030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13280
	ctx.r3.s64 = ctx.r11.s64 + -13280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD603C"))) PPC_WEAK_FUNC(sub_83CD603C);
PPC_FUNC_IMPL(__imp__sub_83CD603C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6040"))) PPC_WEAK_FUNC(sub_83CD6040);
PPC_FUNC_IMPL(__imp__sub_83CD6040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-17244
	ctx.r4.s64 = ctx.r11.s64 + -17244;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,5880
	ctx.r3.s64 = ctx.r7.s64 + 5880;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6070"))) PPC_WEAK_FUNC(sub_83CD6070);
PPC_FUNC_IMPL(__imp__sub_83CD6070) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5872
	ctx.r7.s64 = ctx.r8.s64 + 5872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5872(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6098"))) PPC_WEAK_FUNC(sub_83CD6098);
PPC_FUNC_IMPL(__imp__sub_83CD6098) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,5856
	ctx.r3.s64 = ctx.r11.s64 + 5856;
	// bl 0x83523120
	ctx.lr = 0x83CD60B0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-13272
	ctx.r3.s64 = ctx.r10.s64 + -13272;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD60BC;
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

__attribute__((alias("__imp__sub_83CD60CC"))) PPC_WEAK_FUNC(sub_83CD60CC);
PPC_FUNC_IMPL(__imp__sub_83CD60CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD60D0"))) PPC_WEAK_FUNC(sub_83CD60D0);
PPC_FUNC_IMPL(__imp__sub_83CD60D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6240
	ctx.r11.s64 = ctx.r11.s64 + 6240;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6110"))) PPC_WEAK_FUNC(sub_83CD6110);
PPC_FUNC_IMPL(__imp__sub_83CD6110) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,6804
	ctx.r6.s64 = ctx.r7.s64 + 6804;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6700(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6700);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5872);
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
	// std r9,6804(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6804, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6158"))) PPC_WEAK_FUNC(sub_83CD6158);
PPC_FUNC_IMPL(__imp__sub_83CD6158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13256
	ctx.r3.s64 = ctx.r11.s64 + -13256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6164"))) PPC_WEAK_FUNC(sub_83CD6164);
PPC_FUNC_IMPL(__imp__sub_83CD6164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6168"))) PPC_WEAK_FUNC(sub_83CD6168);
PPC_FUNC_IMPL(__imp__sub_83CD6168) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,5896
	ctx.r3.s64 = ctx.r11.s64 + 5896;
	// bl 0x8259af80
	ctx.lr = 0x83CD6180;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-13240
	ctx.r3.s64 = ctx.r10.s64 + -13240;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD618C;
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

__attribute__((alias("__imp__sub_83CD619C"))) PPC_WEAK_FUNC(sub_83CD619C);
PPC_FUNC_IMPL(__imp__sub_83CD619C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD61A0"))) PPC_WEAK_FUNC(sub_83CD61A0);
PPC_FUNC_IMPL(__imp__sub_83CD61A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5860
	ctx.r11.s64 = ctx.r8.s64 + 5860;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,6748(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6748);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13248
	ctx.r3.s64 = ctx.r6.s64 + -13248;
	// stw r10,5860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5860, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD61D0"))) PPC_WEAK_FUNC(sub_83CD61D0);
PPC_FUNC_IMPL(__imp__sub_83CD61D0) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// addi r4,r11,-16952
	ctx.r4.s64 = ctx.r11.s64 + -16952;
	// addi r3,r10,6828
	ctx.r3.s64 = ctx.r10.s64 + 6828;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83CD61F4;
	sub_8259CC28(ctx, base);
	// lis r9,-31785
	ctx.r9.s64 = -2083061760;
	// addi r3,r9,-13232
	ctx.r3.s64 = ctx.r9.s64 + -13232;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD6200;
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

__attribute__((alias("__imp__sub_83CD6210"))) PPC_WEAK_FUNC(sub_83CD6210);
PPC_FUNC_IMPL(__imp__sub_83CD6210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13128
	ctx.r3.s64 = ctx.r11.s64 + -13128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD621C"))) PPC_WEAK_FUNC(sub_83CD621C);
PPC_FUNC_IMPL(__imp__sub_83CD621C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6220"))) PPC_WEAK_FUNC(sub_83CD6220);
PPC_FUNC_IMPL(__imp__sub_83CD6220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13120
	ctx.r3.s64 = ctx.r11.s64 + -13120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD622C"))) PPC_WEAK_FUNC(sub_83CD622C);
PPC_FUNC_IMPL(__imp__sub_83CD622C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6230"))) PPC_WEAK_FUNC(sub_83CD6230);
PPC_FUNC_IMPL(__imp__sub_83CD6230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13112
	ctx.r3.s64 = ctx.r11.s64 + -13112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD623C"))) PPC_WEAK_FUNC(sub_83CD623C);
PPC_FUNC_IMPL(__imp__sub_83CD623C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6240"))) PPC_WEAK_FUNC(sub_83CD6240);
PPC_FUNC_IMPL(__imp__sub_83CD6240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13104
	ctx.r3.s64 = ctx.r11.s64 + -13104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD624C"))) PPC_WEAK_FUNC(sub_83CD624C);
PPC_FUNC_IMPL(__imp__sub_83CD624C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6250"))) PPC_WEAK_FUNC(sub_83CD6250);
PPC_FUNC_IMPL(__imp__sub_83CD6250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13096
	ctx.r3.s64 = ctx.r11.s64 + -13096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD625C"))) PPC_WEAK_FUNC(sub_83CD625C);
PPC_FUNC_IMPL(__imp__sub_83CD625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6260"))) PPC_WEAK_FUNC(sub_83CD6260);
PPC_FUNC_IMPL(__imp__sub_83CD6260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13088
	ctx.r3.s64 = ctx.r11.s64 + -13088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD626C"))) PPC_WEAK_FUNC(sub_83CD626C);
PPC_FUNC_IMPL(__imp__sub_83CD626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6270"))) PPC_WEAK_FUNC(sub_83CD6270);
PPC_FUNC_IMPL(__imp__sub_83CD6270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13080
	ctx.r3.s64 = ctx.r11.s64 + -13080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD627C"))) PPC_WEAK_FUNC(sub_83CD627C);
PPC_FUNC_IMPL(__imp__sub_83CD627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6280"))) PPC_WEAK_FUNC(sub_83CD6280);
PPC_FUNC_IMPL(__imp__sub_83CD6280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13072
	ctx.r3.s64 = ctx.r11.s64 + -13072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD628C"))) PPC_WEAK_FUNC(sub_83CD628C);
PPC_FUNC_IMPL(__imp__sub_83CD628C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6290"))) PPC_WEAK_FUNC(sub_83CD6290);
PPC_FUNC_IMPL(__imp__sub_83CD6290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13064
	ctx.r3.s64 = ctx.r11.s64 + -13064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD629C"))) PPC_WEAK_FUNC(sub_83CD629C);
PPC_FUNC_IMPL(__imp__sub_83CD629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD62A0"))) PPC_WEAK_FUNC(sub_83CD62A0);
PPC_FUNC_IMPL(__imp__sub_83CD62A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13056
	ctx.r3.s64 = ctx.r11.s64 + -13056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD62AC"))) PPC_WEAK_FUNC(sub_83CD62AC);
PPC_FUNC_IMPL(__imp__sub_83CD62AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD62B0"))) PPC_WEAK_FUNC(sub_83CD62B0);
PPC_FUNC_IMPL(__imp__sub_83CD62B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13048
	ctx.r3.s64 = ctx.r11.s64 + -13048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD62BC"))) PPC_WEAK_FUNC(sub_83CD62BC);
PPC_FUNC_IMPL(__imp__sub_83CD62BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD62C0"))) PPC_WEAK_FUNC(sub_83CD62C0);
PPC_FUNC_IMPL(__imp__sub_83CD62C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13040
	ctx.r3.s64 = ctx.r11.s64 + -13040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD62CC"))) PPC_WEAK_FUNC(sub_83CD62CC);
PPC_FUNC_IMPL(__imp__sub_83CD62CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD62D0"))) PPC_WEAK_FUNC(sub_83CD62D0);
PPC_FUNC_IMPL(__imp__sub_83CD62D0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,6272
	ctx.r3.s64 = ctx.r11.s64 + 6272;
	// bl 0x83523120
	ctx.lr = 0x83CD62E8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-13032
	ctx.r3.s64 = ctx.r10.s64 + -13032;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD62F4;
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

__attribute__((alias("__imp__sub_83CD6304"))) PPC_WEAK_FUNC(sub_83CD6304);
PPC_FUNC_IMPL(__imp__sub_83CD6304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6308"))) PPC_WEAK_FUNC(sub_83CD6308);
PPC_FUNC_IMPL(__imp__sub_83CD6308) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6288
	ctx.r7.s64 = ctx.r8.s64 + 6288;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6288);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6288, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6330"))) PPC_WEAK_FUNC(sub_83CD6330);
PPC_FUNC_IMPL(__imp__sub_83CD6330) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,7024
	ctx.r6.s64 = ctx.r7.s64 + 7024;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6952(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6952);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6288);
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
	// std r9,7024(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7024, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6378"))) PPC_WEAK_FUNC(sub_83CD6378);
PPC_FUNC_IMPL(__imp__sub_83CD6378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-13016
	ctx.r3.s64 = ctx.r11.s64 + -13016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6384"))) PPC_WEAK_FUNC(sub_83CD6384);
PPC_FUNC_IMPL(__imp__sub_83CD6384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6388"))) PPC_WEAK_FUNC(sub_83CD6388);
PPC_FUNC_IMPL(__imp__sub_83CD6388) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,6296
	ctx.r3.s64 = ctx.r11.s64 + 6296;
	// bl 0x8259af80
	ctx.lr = 0x83CD63A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-13000
	ctx.r3.s64 = ctx.r10.s64 + -13000;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD63AC;
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

__attribute__((alias("__imp__sub_83CD63BC"))) PPC_WEAK_FUNC(sub_83CD63BC);
PPC_FUNC_IMPL(__imp__sub_83CD63BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD63C0"))) PPC_WEAK_FUNC(sub_83CD63C0);
PPC_FUNC_IMPL(__imp__sub_83CD63C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6276
	ctx.r11.s64 = ctx.r8.s64 + 6276;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,7000(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7000);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13008
	ctx.r3.s64 = ctx.r6.s64 + -13008;
	// stw r10,6276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6276, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD63F0"))) PPC_WEAK_FUNC(sub_83CD63F0);
PPC_FUNC_IMPL(__imp__sub_83CD63F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12992
	ctx.r3.s64 = ctx.r11.s64 + -12992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD63FC"))) PPC_WEAK_FUNC(sub_83CD63FC);
PPC_FUNC_IMPL(__imp__sub_83CD63FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6400"))) PPC_WEAK_FUNC(sub_83CD6400);
PPC_FUNC_IMPL(__imp__sub_83CD6400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12984
	ctx.r3.s64 = ctx.r11.s64 + -12984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD640C"))) PPC_WEAK_FUNC(sub_83CD640C);
PPC_FUNC_IMPL(__imp__sub_83CD640C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6410"))) PPC_WEAK_FUNC(sub_83CD6410);
PPC_FUNC_IMPL(__imp__sub_83CD6410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12976
	ctx.r3.s64 = ctx.r11.s64 + -12976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD641C"))) PPC_WEAK_FUNC(sub_83CD641C);
PPC_FUNC_IMPL(__imp__sub_83CD641C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6420"))) PPC_WEAK_FUNC(sub_83CD6420);
PPC_FUNC_IMPL(__imp__sub_83CD6420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12968
	ctx.r3.s64 = ctx.r11.s64 + -12968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD642C"))) PPC_WEAK_FUNC(sub_83CD642C);
PPC_FUNC_IMPL(__imp__sub_83CD642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6430"))) PPC_WEAK_FUNC(sub_83CD6430);
PPC_FUNC_IMPL(__imp__sub_83CD6430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12960
	ctx.r3.s64 = ctx.r11.s64 + -12960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD643C"))) PPC_WEAK_FUNC(sub_83CD643C);
PPC_FUNC_IMPL(__imp__sub_83CD643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6440"))) PPC_WEAK_FUNC(sub_83CD6440);
PPC_FUNC_IMPL(__imp__sub_83CD6440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12952
	ctx.r3.s64 = ctx.r11.s64 + -12952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD644C"))) PPC_WEAK_FUNC(sub_83CD644C);
PPC_FUNC_IMPL(__imp__sub_83CD644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6450"))) PPC_WEAK_FUNC(sub_83CD6450);
PPC_FUNC_IMPL(__imp__sub_83CD6450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12944
	ctx.r3.s64 = ctx.r11.s64 + -12944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD645C"))) PPC_WEAK_FUNC(sub_83CD645C);
PPC_FUNC_IMPL(__imp__sub_83CD645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6460"))) PPC_WEAK_FUNC(sub_83CD6460);
PPC_FUNC_IMPL(__imp__sub_83CD6460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12936
	ctx.r3.s64 = ctx.r11.s64 + -12936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD646C"))) PPC_WEAK_FUNC(sub_83CD646C);
PPC_FUNC_IMPL(__imp__sub_83CD646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6470"))) PPC_WEAK_FUNC(sub_83CD6470);
PPC_FUNC_IMPL(__imp__sub_83CD6470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12928
	ctx.r3.s64 = ctx.r11.s64 + -12928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD647C"))) PPC_WEAK_FUNC(sub_83CD647C);
PPC_FUNC_IMPL(__imp__sub_83CD647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6480"))) PPC_WEAK_FUNC(sub_83CD6480);
PPC_FUNC_IMPL(__imp__sub_83CD6480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12920
	ctx.r3.s64 = ctx.r11.s64 + -12920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD648C"))) PPC_WEAK_FUNC(sub_83CD648C);
PPC_FUNC_IMPL(__imp__sub_83CD648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6490"))) PPC_WEAK_FUNC(sub_83CD6490);
PPC_FUNC_IMPL(__imp__sub_83CD6490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12912
	ctx.r3.s64 = ctx.r11.s64 + -12912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD649C"))) PPC_WEAK_FUNC(sub_83CD649C);
PPC_FUNC_IMPL(__imp__sub_83CD649C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD64A0"))) PPC_WEAK_FUNC(sub_83CD64A0);
PPC_FUNC_IMPL(__imp__sub_83CD64A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12904
	ctx.r3.s64 = ctx.r11.s64 + -12904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD64AC"))) PPC_WEAK_FUNC(sub_83CD64AC);
PPC_FUNC_IMPL(__imp__sub_83CD64AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD64B0"))) PPC_WEAK_FUNC(sub_83CD64B0);
PPC_FUNC_IMPL(__imp__sub_83CD64B0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,6640
	ctx.r3.s64 = ctx.r11.s64 + 6640;
	// bl 0x83523120
	ctx.lr = 0x83CD64C8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-12896
	ctx.r3.s64 = ctx.r10.s64 + -12896;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD64D4;
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

__attribute__((alias("__imp__sub_83CD64E4"))) PPC_WEAK_FUNC(sub_83CD64E4);
PPC_FUNC_IMPL(__imp__sub_83CD64E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD64E8"))) PPC_WEAK_FUNC(sub_83CD64E8);
PPC_FUNC_IMPL(__imp__sub_83CD64E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6656
	ctx.r7.s64 = ctx.r8.s64 + 6656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6656);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6656(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6656, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6510"))) PPC_WEAK_FUNC(sub_83CD6510);
PPC_FUNC_IMPL(__imp__sub_83CD6510) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,8324
	ctx.r6.s64 = ctx.r7.s64 + 8324;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8240(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8240);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6656(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6656);
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
	// std r9,8324(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8324, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6558"))) PPC_WEAK_FUNC(sub_83CD6558);
PPC_FUNC_IMPL(__imp__sub_83CD6558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12880
	ctx.r3.s64 = ctx.r11.s64 + -12880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6564"))) PPC_WEAK_FUNC(sub_83CD6564);
PPC_FUNC_IMPL(__imp__sub_83CD6564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6568"))) PPC_WEAK_FUNC(sub_83CD6568);
PPC_FUNC_IMPL(__imp__sub_83CD6568) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,6680
	ctx.r3.s64 = ctx.r11.s64 + 6680;
	// bl 0x8259af80
	ctx.lr = 0x83CD6580;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-12864
	ctx.r3.s64 = ctx.r10.s64 + -12864;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD658C;
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

__attribute__((alias("__imp__sub_83CD659C"))) PPC_WEAK_FUNC(sub_83CD659C);
PPC_FUNC_IMPL(__imp__sub_83CD659C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD65A0"))) PPC_WEAK_FUNC(sub_83CD65A0);
PPC_FUNC_IMPL(__imp__sub_83CD65A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6644
	ctx.r11.s64 = ctx.r8.s64 + 6644;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,8288(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8288);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12872
	ctx.r3.s64 = ctx.r6.s64 + -12872;
	// stw r10,6644(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6644, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD65D0"))) PPC_WEAK_FUNC(sub_83CD65D0);
PPC_FUNC_IMPL(__imp__sub_83CD65D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-16112
	ctx.r4.s64 = ctx.r11.s64 + -16112;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,6664
	ctx.r3.s64 = ctx.r7.s64 + 6664;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6600"))) PPC_WEAK_FUNC(sub_83CD6600);
PPC_FUNC_IMPL(__imp__sub_83CD6600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7024
	ctx.r11.s64 = ctx.r11.s64 + 7024;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6640"))) PPC_WEAK_FUNC(sub_83CD6640);
PPC_FUNC_IMPL(__imp__sub_83CD6640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12856
	ctx.r3.s64 = ctx.r11.s64 + -12856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD664C"))) PPC_WEAK_FUNC(sub_83CD664C);
PPC_FUNC_IMPL(__imp__sub_83CD664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6650"))) PPC_WEAK_FUNC(sub_83CD6650);
PPC_FUNC_IMPL(__imp__sub_83CD6650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12848
	ctx.r3.s64 = ctx.r11.s64 + -12848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD665C"))) PPC_WEAK_FUNC(sub_83CD665C);
PPC_FUNC_IMPL(__imp__sub_83CD665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6660"))) PPC_WEAK_FUNC(sub_83CD6660);
PPC_FUNC_IMPL(__imp__sub_83CD6660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12840
	ctx.r3.s64 = ctx.r11.s64 + -12840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD666C"))) PPC_WEAK_FUNC(sub_83CD666C);
PPC_FUNC_IMPL(__imp__sub_83CD666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6670"))) PPC_WEAK_FUNC(sub_83CD6670);
PPC_FUNC_IMPL(__imp__sub_83CD6670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12832
	ctx.r3.s64 = ctx.r11.s64 + -12832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD667C"))) PPC_WEAK_FUNC(sub_83CD667C);
PPC_FUNC_IMPL(__imp__sub_83CD667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6680"))) PPC_WEAK_FUNC(sub_83CD6680);
PPC_FUNC_IMPL(__imp__sub_83CD6680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12824
	ctx.r3.s64 = ctx.r11.s64 + -12824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD668C"))) PPC_WEAK_FUNC(sub_83CD668C);
PPC_FUNC_IMPL(__imp__sub_83CD668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6690"))) PPC_WEAK_FUNC(sub_83CD6690);
PPC_FUNC_IMPL(__imp__sub_83CD6690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12816
	ctx.r3.s64 = ctx.r11.s64 + -12816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD669C"))) PPC_WEAK_FUNC(sub_83CD669C);
PPC_FUNC_IMPL(__imp__sub_83CD669C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD66A0"))) PPC_WEAK_FUNC(sub_83CD66A0);
PPC_FUNC_IMPL(__imp__sub_83CD66A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12808
	ctx.r3.s64 = ctx.r11.s64 + -12808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD66AC"))) PPC_WEAK_FUNC(sub_83CD66AC);
PPC_FUNC_IMPL(__imp__sub_83CD66AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD66B0"))) PPC_WEAK_FUNC(sub_83CD66B0);
PPC_FUNC_IMPL(__imp__sub_83CD66B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12800
	ctx.r3.s64 = ctx.r11.s64 + -12800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD66BC"))) PPC_WEAK_FUNC(sub_83CD66BC);
PPC_FUNC_IMPL(__imp__sub_83CD66BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD66C0"))) PPC_WEAK_FUNC(sub_83CD66C0);
PPC_FUNC_IMPL(__imp__sub_83CD66C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12792
	ctx.r3.s64 = ctx.r11.s64 + -12792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD66CC"))) PPC_WEAK_FUNC(sub_83CD66CC);
PPC_FUNC_IMPL(__imp__sub_83CD66CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD66D0"))) PPC_WEAK_FUNC(sub_83CD66D0);
PPC_FUNC_IMPL(__imp__sub_83CD66D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12784
	ctx.r3.s64 = ctx.r11.s64 + -12784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD66DC"))) PPC_WEAK_FUNC(sub_83CD66DC);
PPC_FUNC_IMPL(__imp__sub_83CD66DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD66E0"))) PPC_WEAK_FUNC(sub_83CD66E0);
PPC_FUNC_IMPL(__imp__sub_83CD66E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12776
	ctx.r3.s64 = ctx.r11.s64 + -12776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD66EC"))) PPC_WEAK_FUNC(sub_83CD66EC);
PPC_FUNC_IMPL(__imp__sub_83CD66EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD66F0"))) PPC_WEAK_FUNC(sub_83CD66F0);
PPC_FUNC_IMPL(__imp__sub_83CD66F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12768
	ctx.r3.s64 = ctx.r11.s64 + -12768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD66FC"))) PPC_WEAK_FUNC(sub_83CD66FC);
PPC_FUNC_IMPL(__imp__sub_83CD66FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6700"))) PPC_WEAK_FUNC(sub_83CD6700);
PPC_FUNC_IMPL(__imp__sub_83CD6700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-15372
	ctx.r4.s64 = ctx.r11.s64 + -15372;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,7080
	ctx.r3.s64 = ctx.r7.s64 + 7080;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6730"))) PPC_WEAK_FUNC(sub_83CD6730);
PPC_FUNC_IMPL(__imp__sub_83CD6730) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7072
	ctx.r7.s64 = ctx.r8.s64 + 7072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7072(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7072);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7072(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7072, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6758"))) PPC_WEAK_FUNC(sub_83CD6758);
PPC_FUNC_IMPL(__imp__sub_83CD6758) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,7056
	ctx.r3.s64 = ctx.r11.s64 + 7056;
	// bl 0x83523120
	ctx.lr = 0x83CD6770;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-12760
	ctx.r3.s64 = ctx.r10.s64 + -12760;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD677C;
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

__attribute__((alias("__imp__sub_83CD678C"))) PPC_WEAK_FUNC(sub_83CD678C);
PPC_FUNC_IMPL(__imp__sub_83CD678C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6790"))) PPC_WEAK_FUNC(sub_83CD6790);
PPC_FUNC_IMPL(__imp__sub_83CD6790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7440
	ctx.r11.s64 = ctx.r11.s64 + 7440;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD67D0"))) PPC_WEAK_FUNC(sub_83CD67D0);
PPC_FUNC_IMPL(__imp__sub_83CD67D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,8540
	ctx.r6.s64 = ctx.r7.s64 + 8540;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8436(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8436);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7072(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7072);
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
	// std r9,8540(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8540, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6818"))) PPC_WEAK_FUNC(sub_83CD6818);
PPC_FUNC_IMPL(__imp__sub_83CD6818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12744
	ctx.r3.s64 = ctx.r11.s64 + -12744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6824"))) PPC_WEAK_FUNC(sub_83CD6824);
PPC_FUNC_IMPL(__imp__sub_83CD6824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6828"))) PPC_WEAK_FUNC(sub_83CD6828);
PPC_FUNC_IMPL(__imp__sub_83CD6828) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,7096
	ctx.r3.s64 = ctx.r11.s64 + 7096;
	// bl 0x8259af80
	ctx.lr = 0x83CD6840;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-12728
	ctx.r3.s64 = ctx.r10.s64 + -12728;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD684C;
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

__attribute__((alias("__imp__sub_83CD685C"))) PPC_WEAK_FUNC(sub_83CD685C);
PPC_FUNC_IMPL(__imp__sub_83CD685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6860"))) PPC_WEAK_FUNC(sub_83CD6860);
PPC_FUNC_IMPL(__imp__sub_83CD6860) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7060
	ctx.r11.s64 = ctx.r8.s64 + 7060;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,8484(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8484);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12736
	ctx.r3.s64 = ctx.r6.s64 + -12736;
	// stw r10,7060(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7060, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6890"))) PPC_WEAK_FUNC(sub_83CD6890);
PPC_FUNC_IMPL(__imp__sub_83CD6890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12720
	ctx.r3.s64 = ctx.r11.s64 + -12720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD689C"))) PPC_WEAK_FUNC(sub_83CD689C);
PPC_FUNC_IMPL(__imp__sub_83CD689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD68A0"))) PPC_WEAK_FUNC(sub_83CD68A0);
PPC_FUNC_IMPL(__imp__sub_83CD68A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12712
	ctx.r3.s64 = ctx.r11.s64 + -12712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD68AC"))) PPC_WEAK_FUNC(sub_83CD68AC);
PPC_FUNC_IMPL(__imp__sub_83CD68AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD68B0"))) PPC_WEAK_FUNC(sub_83CD68B0);
PPC_FUNC_IMPL(__imp__sub_83CD68B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12704
	ctx.r3.s64 = ctx.r11.s64 + -12704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD68BC"))) PPC_WEAK_FUNC(sub_83CD68BC);
PPC_FUNC_IMPL(__imp__sub_83CD68BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD68C0"))) PPC_WEAK_FUNC(sub_83CD68C0);
PPC_FUNC_IMPL(__imp__sub_83CD68C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12696
	ctx.r3.s64 = ctx.r11.s64 + -12696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD68CC"))) PPC_WEAK_FUNC(sub_83CD68CC);
PPC_FUNC_IMPL(__imp__sub_83CD68CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD68D0"))) PPC_WEAK_FUNC(sub_83CD68D0);
PPC_FUNC_IMPL(__imp__sub_83CD68D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12688
	ctx.r3.s64 = ctx.r11.s64 + -12688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD68DC"))) PPC_WEAK_FUNC(sub_83CD68DC);
PPC_FUNC_IMPL(__imp__sub_83CD68DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD68E0"))) PPC_WEAK_FUNC(sub_83CD68E0);
PPC_FUNC_IMPL(__imp__sub_83CD68E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12680
	ctx.r3.s64 = ctx.r11.s64 + -12680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD68EC"))) PPC_WEAK_FUNC(sub_83CD68EC);
PPC_FUNC_IMPL(__imp__sub_83CD68EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD68F0"))) PPC_WEAK_FUNC(sub_83CD68F0);
PPC_FUNC_IMPL(__imp__sub_83CD68F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12672
	ctx.r3.s64 = ctx.r11.s64 + -12672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD68FC"))) PPC_WEAK_FUNC(sub_83CD68FC);
PPC_FUNC_IMPL(__imp__sub_83CD68FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6900"))) PPC_WEAK_FUNC(sub_83CD6900);
PPC_FUNC_IMPL(__imp__sub_83CD6900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12664
	ctx.r3.s64 = ctx.r11.s64 + -12664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD690C"))) PPC_WEAK_FUNC(sub_83CD690C);
PPC_FUNC_IMPL(__imp__sub_83CD690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6910"))) PPC_WEAK_FUNC(sub_83CD6910);
PPC_FUNC_IMPL(__imp__sub_83CD6910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12656
	ctx.r3.s64 = ctx.r11.s64 + -12656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD691C"))) PPC_WEAK_FUNC(sub_83CD691C);
PPC_FUNC_IMPL(__imp__sub_83CD691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6920"))) PPC_WEAK_FUNC(sub_83CD6920);
PPC_FUNC_IMPL(__imp__sub_83CD6920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12648
	ctx.r3.s64 = ctx.r11.s64 + -12648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD692C"))) PPC_WEAK_FUNC(sub_83CD692C);
PPC_FUNC_IMPL(__imp__sub_83CD692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6930"))) PPC_WEAK_FUNC(sub_83CD6930);
PPC_FUNC_IMPL(__imp__sub_83CD6930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12640
	ctx.r3.s64 = ctx.r11.s64 + -12640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD693C"))) PPC_WEAK_FUNC(sub_83CD693C);
PPC_FUNC_IMPL(__imp__sub_83CD693C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6940"))) PPC_WEAK_FUNC(sub_83CD6940);
PPC_FUNC_IMPL(__imp__sub_83CD6940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12632
	ctx.r3.s64 = ctx.r11.s64 + -12632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD694C"))) PPC_WEAK_FUNC(sub_83CD694C);
PPC_FUNC_IMPL(__imp__sub_83CD694C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6950"))) PPC_WEAK_FUNC(sub_83CD6950);
PPC_FUNC_IMPL(__imp__sub_83CD6950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-14780
	ctx.r4.s64 = ctx.r11.s64 + -14780;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,7496
	ctx.r3.s64 = ctx.r7.s64 + 7496;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6980"))) PPC_WEAK_FUNC(sub_83CD6980);
PPC_FUNC_IMPL(__imp__sub_83CD6980) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7488
	ctx.r7.s64 = ctx.r8.s64 + 7488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7488(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7488);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7488(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7488, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD69A8"))) PPC_WEAK_FUNC(sub_83CD69A8);
PPC_FUNC_IMPL(__imp__sub_83CD69A8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,7472
	ctx.r3.s64 = ctx.r11.s64 + 7472;
	// bl 0x83523120
	ctx.lr = 0x83CD69C0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-12624
	ctx.r3.s64 = ctx.r10.s64 + -12624;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD69CC;
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

__attribute__((alias("__imp__sub_83CD69DC"))) PPC_WEAK_FUNC(sub_83CD69DC);
PPC_FUNC_IMPL(__imp__sub_83CD69DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD69E0"))) PPC_WEAK_FUNC(sub_83CD69E0);
PPC_FUNC_IMPL(__imp__sub_83CD69E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6A20"))) PPC_WEAK_FUNC(sub_83CD6A20);
PPC_FUNC_IMPL(__imp__sub_83CD6A20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,8700
	ctx.r6.s64 = ctx.r7.s64 + 8700;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8596(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8596);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7488(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7488);
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
	// std r9,8700(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8700, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6A68"))) PPC_WEAK_FUNC(sub_83CD6A68);
PPC_FUNC_IMPL(__imp__sub_83CD6A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12608
	ctx.r3.s64 = ctx.r11.s64 + -12608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6A74"))) PPC_WEAK_FUNC(sub_83CD6A74);
PPC_FUNC_IMPL(__imp__sub_83CD6A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6A78"))) PPC_WEAK_FUNC(sub_83CD6A78);
PPC_FUNC_IMPL(__imp__sub_83CD6A78) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,7512
	ctx.r3.s64 = ctx.r11.s64 + 7512;
	// bl 0x8259af80
	ctx.lr = 0x83CD6A90;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-12592
	ctx.r3.s64 = ctx.r10.s64 + -12592;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD6A9C;
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

__attribute__((alias("__imp__sub_83CD6AAC"))) PPC_WEAK_FUNC(sub_83CD6AAC);
PPC_FUNC_IMPL(__imp__sub_83CD6AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6AB0"))) PPC_WEAK_FUNC(sub_83CD6AB0);
PPC_FUNC_IMPL(__imp__sub_83CD6AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7476
	ctx.r11.s64 = ctx.r8.s64 + 7476;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,8644(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8644);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12600
	ctx.r3.s64 = ctx.r6.s64 + -12600;
	// stw r10,7476(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7476, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6AE0"))) PPC_WEAK_FUNC(sub_83CD6AE0);
PPC_FUNC_IMPL(__imp__sub_83CD6AE0) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// addi r4,r11,-14488
	ctx.r4.s64 = ctx.r11.s64 + -14488;
	// addi r3,r10,8724
	ctx.r3.s64 = ctx.r10.s64 + 8724;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83CD6B04;
	sub_8259CC28(ctx, base);
	// lis r9,-31785
	ctx.r9.s64 = -2083061760;
	// addi r3,r9,-12584
	ctx.r3.s64 = ctx.r9.s64 + -12584;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD6B10;
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

__attribute__((alias("__imp__sub_83CD6B20"))) PPC_WEAK_FUNC(sub_83CD6B20);
PPC_FUNC_IMPL(__imp__sub_83CD6B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12480
	ctx.r3.s64 = ctx.r11.s64 + -12480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6B2C"))) PPC_WEAK_FUNC(sub_83CD6B2C);
PPC_FUNC_IMPL(__imp__sub_83CD6B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6B30"))) PPC_WEAK_FUNC(sub_83CD6B30);
PPC_FUNC_IMPL(__imp__sub_83CD6B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12472
	ctx.r3.s64 = ctx.r11.s64 + -12472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6B3C"))) PPC_WEAK_FUNC(sub_83CD6B3C);
PPC_FUNC_IMPL(__imp__sub_83CD6B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6B40"))) PPC_WEAK_FUNC(sub_83CD6B40);
PPC_FUNC_IMPL(__imp__sub_83CD6B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12464
	ctx.r3.s64 = ctx.r11.s64 + -12464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6B4C"))) PPC_WEAK_FUNC(sub_83CD6B4C);
PPC_FUNC_IMPL(__imp__sub_83CD6B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6B50"))) PPC_WEAK_FUNC(sub_83CD6B50);
PPC_FUNC_IMPL(__imp__sub_83CD6B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12456
	ctx.r3.s64 = ctx.r11.s64 + -12456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6B5C"))) PPC_WEAK_FUNC(sub_83CD6B5C);
PPC_FUNC_IMPL(__imp__sub_83CD6B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6B60"))) PPC_WEAK_FUNC(sub_83CD6B60);
PPC_FUNC_IMPL(__imp__sub_83CD6B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12448
	ctx.r3.s64 = ctx.r11.s64 + -12448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6B6C"))) PPC_WEAK_FUNC(sub_83CD6B6C);
PPC_FUNC_IMPL(__imp__sub_83CD6B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6B70"))) PPC_WEAK_FUNC(sub_83CD6B70);
PPC_FUNC_IMPL(__imp__sub_83CD6B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12440
	ctx.r3.s64 = ctx.r11.s64 + -12440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6B7C"))) PPC_WEAK_FUNC(sub_83CD6B7C);
PPC_FUNC_IMPL(__imp__sub_83CD6B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6B80"))) PPC_WEAK_FUNC(sub_83CD6B80);
PPC_FUNC_IMPL(__imp__sub_83CD6B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12432
	ctx.r3.s64 = ctx.r11.s64 + -12432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6B8C"))) PPC_WEAK_FUNC(sub_83CD6B8C);
PPC_FUNC_IMPL(__imp__sub_83CD6B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6B90"))) PPC_WEAK_FUNC(sub_83CD6B90);
PPC_FUNC_IMPL(__imp__sub_83CD6B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12424
	ctx.r3.s64 = ctx.r11.s64 + -12424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6B9C"))) PPC_WEAK_FUNC(sub_83CD6B9C);
PPC_FUNC_IMPL(__imp__sub_83CD6B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6BA0"))) PPC_WEAK_FUNC(sub_83CD6BA0);
PPC_FUNC_IMPL(__imp__sub_83CD6BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12416
	ctx.r3.s64 = ctx.r11.s64 + -12416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6BAC"))) PPC_WEAK_FUNC(sub_83CD6BAC);
PPC_FUNC_IMPL(__imp__sub_83CD6BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6BB0"))) PPC_WEAK_FUNC(sub_83CD6BB0);
PPC_FUNC_IMPL(__imp__sub_83CD6BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12408
	ctx.r3.s64 = ctx.r11.s64 + -12408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6BBC"))) PPC_WEAK_FUNC(sub_83CD6BBC);
PPC_FUNC_IMPL(__imp__sub_83CD6BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6BC0"))) PPC_WEAK_FUNC(sub_83CD6BC0);
PPC_FUNC_IMPL(__imp__sub_83CD6BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12400
	ctx.r3.s64 = ctx.r11.s64 + -12400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6BCC"))) PPC_WEAK_FUNC(sub_83CD6BCC);
PPC_FUNC_IMPL(__imp__sub_83CD6BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6BD0"))) PPC_WEAK_FUNC(sub_83CD6BD0);
PPC_FUNC_IMPL(__imp__sub_83CD6BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12392
	ctx.r3.s64 = ctx.r11.s64 + -12392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6BDC"))) PPC_WEAK_FUNC(sub_83CD6BDC);
PPC_FUNC_IMPL(__imp__sub_83CD6BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6BE0"))) PPC_WEAK_FUNC(sub_83CD6BE0);
PPC_FUNC_IMPL(__imp__sub_83CD6BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-12828
	ctx.r4.s64 = ctx.r11.s64 + -12828;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,7912
	ctx.r3.s64 = ctx.r7.s64 + 7912;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6C10"))) PPC_WEAK_FUNC(sub_83CD6C10);
PPC_FUNC_IMPL(__imp__sub_83CD6C10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7904
	ctx.r7.s64 = ctx.r8.s64 + 7904;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7904(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7904);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7904(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7904, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6C38"))) PPC_WEAK_FUNC(sub_83CD6C38);
PPC_FUNC_IMPL(__imp__sub_83CD6C38) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,7888
	ctx.r3.s64 = ctx.r11.s64 + 7888;
	// bl 0x83523120
	ctx.lr = 0x83CD6C50;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-12384
	ctx.r3.s64 = ctx.r10.s64 + -12384;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD6C5C;
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

__attribute__((alias("__imp__sub_83CD6C6C"))) PPC_WEAK_FUNC(sub_83CD6C6C);
PPC_FUNC_IMPL(__imp__sub_83CD6C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6C70"))) PPC_WEAK_FUNC(sub_83CD6C70);
PPC_FUNC_IMPL(__imp__sub_83CD6C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

