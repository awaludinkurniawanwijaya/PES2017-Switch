#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CDC2A8"))) PPC_WEAK_FUNC(sub_83CDC2A8);
PPC_FUNC_IMPL(__imp__sub_83CDC2A8) {
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
	// addi r3,r11,24592
	ctx.r3.s64 = ctx.r11.s64 + 24592;
	// bl 0x83523120
	ctx.lr = 0x83CDC2C0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-6080
	ctx.r3.s64 = ctx.r10.s64 + -6080;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDC2CC;
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

__attribute__((alias("__imp__sub_83CDC2DC"))) PPC_WEAK_FUNC(sub_83CDC2DC);
PPC_FUNC_IMPL(__imp__sub_83CDC2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC2E0"))) PPC_WEAK_FUNC(sub_83CDC2E0);
PPC_FUNC_IMPL(__imp__sub_83CDC2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,11596
	ctx.r6.s64 = ctx.r7.s64 + 11596;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11512(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11512);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,24608(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24608);
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
	// std r9,11596(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11596, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDC328"))) PPC_WEAK_FUNC(sub_83CDC328);
PPC_FUNC_IMPL(__imp__sub_83CDC328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-6064
	ctx.r3.s64 = ctx.r11.s64 + -6064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC334"))) PPC_WEAK_FUNC(sub_83CDC334);
PPC_FUNC_IMPL(__imp__sub_83CDC334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC338"))) PPC_WEAK_FUNC(sub_83CDC338);
PPC_FUNC_IMPL(__imp__sub_83CDC338) {
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
	// addi r3,r11,24616
	ctx.r3.s64 = ctx.r11.s64 + 24616;
	// bl 0x8259af80
	ctx.lr = 0x83CDC350;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-6048
	ctx.r3.s64 = ctx.r10.s64 + -6048;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDC35C;
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

__attribute__((alias("__imp__sub_83CDC36C"))) PPC_WEAK_FUNC(sub_83CDC36C);
PPC_FUNC_IMPL(__imp__sub_83CDC36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC370"))) PPC_WEAK_FUNC(sub_83CDC370);
PPC_FUNC_IMPL(__imp__sub_83CDC370) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,24596
	ctx.r11.s64 = ctx.r8.s64 + 24596;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,11560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11560);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6056
	ctx.r3.s64 = ctx.r6.s64 + -6056;
	// stw r10,24596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24596, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC3A0"))) PPC_WEAK_FUNC(sub_83CDC3A0);
PPC_FUNC_IMPL(__imp__sub_83CDC3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-6040
	ctx.r3.s64 = ctx.r11.s64 + -6040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC3AC"))) PPC_WEAK_FUNC(sub_83CDC3AC);
PPC_FUNC_IMPL(__imp__sub_83CDC3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC3B0"))) PPC_WEAK_FUNC(sub_83CDC3B0);
PPC_FUNC_IMPL(__imp__sub_83CDC3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-6032
	ctx.r3.s64 = ctx.r11.s64 + -6032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC3BC"))) PPC_WEAK_FUNC(sub_83CDC3BC);
PPC_FUNC_IMPL(__imp__sub_83CDC3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC3C0"))) PPC_WEAK_FUNC(sub_83CDC3C0);
PPC_FUNC_IMPL(__imp__sub_83CDC3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-6024
	ctx.r3.s64 = ctx.r11.s64 + -6024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC3CC"))) PPC_WEAK_FUNC(sub_83CDC3CC);
PPC_FUNC_IMPL(__imp__sub_83CDC3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC3D0"))) PPC_WEAK_FUNC(sub_83CDC3D0);
PPC_FUNC_IMPL(__imp__sub_83CDC3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-6016
	ctx.r3.s64 = ctx.r11.s64 + -6016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC3DC"))) PPC_WEAK_FUNC(sub_83CDC3DC);
PPC_FUNC_IMPL(__imp__sub_83CDC3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC3E0"))) PPC_WEAK_FUNC(sub_83CDC3E0);
PPC_FUNC_IMPL(__imp__sub_83CDC3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-6008
	ctx.r3.s64 = ctx.r11.s64 + -6008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC3EC"))) PPC_WEAK_FUNC(sub_83CDC3EC);
PPC_FUNC_IMPL(__imp__sub_83CDC3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC3F0"))) PPC_WEAK_FUNC(sub_83CDC3F0);
PPC_FUNC_IMPL(__imp__sub_83CDC3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-6000
	ctx.r3.s64 = ctx.r11.s64 + -6000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC3FC"))) PPC_WEAK_FUNC(sub_83CDC3FC);
PPC_FUNC_IMPL(__imp__sub_83CDC3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC400"))) PPC_WEAK_FUNC(sub_83CDC400);
PPC_FUNC_IMPL(__imp__sub_83CDC400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5992
	ctx.r3.s64 = ctx.r11.s64 + -5992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC40C"))) PPC_WEAK_FUNC(sub_83CDC40C);
PPC_FUNC_IMPL(__imp__sub_83CDC40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC410"))) PPC_WEAK_FUNC(sub_83CDC410);
PPC_FUNC_IMPL(__imp__sub_83CDC410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5984
	ctx.r3.s64 = ctx.r11.s64 + -5984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC41C"))) PPC_WEAK_FUNC(sub_83CDC41C);
PPC_FUNC_IMPL(__imp__sub_83CDC41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC420"))) PPC_WEAK_FUNC(sub_83CDC420);
PPC_FUNC_IMPL(__imp__sub_83CDC420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5976
	ctx.r3.s64 = ctx.r11.s64 + -5976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC42C"))) PPC_WEAK_FUNC(sub_83CDC42C);
PPC_FUNC_IMPL(__imp__sub_83CDC42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC430"))) PPC_WEAK_FUNC(sub_83CDC430);
PPC_FUNC_IMPL(__imp__sub_83CDC430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5968
	ctx.r3.s64 = ctx.r11.s64 + -5968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC43C"))) PPC_WEAK_FUNC(sub_83CDC43C);
PPC_FUNC_IMPL(__imp__sub_83CDC43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC440"))) PPC_WEAK_FUNC(sub_83CDC440);
PPC_FUNC_IMPL(__imp__sub_83CDC440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5960
	ctx.r3.s64 = ctx.r11.s64 + -5960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC44C"))) PPC_WEAK_FUNC(sub_83CDC44C);
PPC_FUNC_IMPL(__imp__sub_83CDC44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC450"))) PPC_WEAK_FUNC(sub_83CDC450);
PPC_FUNC_IMPL(__imp__sub_83CDC450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5952
	ctx.r3.s64 = ctx.r11.s64 + -5952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC45C"))) PPC_WEAK_FUNC(sub_83CDC45C);
PPC_FUNC_IMPL(__imp__sub_83CDC45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC460"))) PPC_WEAK_FUNC(sub_83CDC460);
PPC_FUNC_IMPL(__imp__sub_83CDC460) {
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
	// addi r3,r11,24960
	ctx.r3.s64 = ctx.r11.s64 + 24960;
	// bl 0x83523120
	ctx.lr = 0x83CDC478;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5944
	ctx.r3.s64 = ctx.r10.s64 + -5944;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDC484;
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

__attribute__((alias("__imp__sub_83CDC494"))) PPC_WEAK_FUNC(sub_83CDC494);
PPC_FUNC_IMPL(__imp__sub_83CDC494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC498"))) PPC_WEAK_FUNC(sub_83CDC498);
PPC_FUNC_IMPL(__imp__sub_83CDC498) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24976
	ctx.r7.s64 = ctx.r8.s64 + 24976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24976(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24976);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24976(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24976, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDC4C0"))) PPC_WEAK_FUNC(sub_83CDC4C0);
PPC_FUNC_IMPL(__imp__sub_83CDC4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,11736
	ctx.r6.s64 = ctx.r7.s64 + 11736;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11664(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11664);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,24976(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24976);
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
	// std r9,11736(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11736, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDC508"))) PPC_WEAK_FUNC(sub_83CDC508);
PPC_FUNC_IMPL(__imp__sub_83CDC508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5928
	ctx.r3.s64 = ctx.r11.s64 + -5928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC514"))) PPC_WEAK_FUNC(sub_83CDC514);
PPC_FUNC_IMPL(__imp__sub_83CDC514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC518"))) PPC_WEAK_FUNC(sub_83CDC518);
PPC_FUNC_IMPL(__imp__sub_83CDC518) {
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
	// addi r3,r11,24984
	ctx.r3.s64 = ctx.r11.s64 + 24984;
	// bl 0x8259af80
	ctx.lr = 0x83CDC530;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5912
	ctx.r3.s64 = ctx.r10.s64 + -5912;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDC53C;
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

__attribute__((alias("__imp__sub_83CDC54C"))) PPC_WEAK_FUNC(sub_83CDC54C);
PPC_FUNC_IMPL(__imp__sub_83CDC54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC550"))) PPC_WEAK_FUNC(sub_83CDC550);
PPC_FUNC_IMPL(__imp__sub_83CDC550) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,24964
	ctx.r11.s64 = ctx.r8.s64 + 24964;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,11712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11712);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5920
	ctx.r3.s64 = ctx.r6.s64 + -5920;
	// stw r10,24964(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24964, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC580"))) PPC_WEAK_FUNC(sub_83CDC580);
PPC_FUNC_IMPL(__imp__sub_83CDC580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5904
	ctx.r3.s64 = ctx.r11.s64 + -5904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC58C"))) PPC_WEAK_FUNC(sub_83CDC58C);
PPC_FUNC_IMPL(__imp__sub_83CDC58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC590"))) PPC_WEAK_FUNC(sub_83CDC590);
PPC_FUNC_IMPL(__imp__sub_83CDC590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5896
	ctx.r3.s64 = ctx.r11.s64 + -5896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC59C"))) PPC_WEAK_FUNC(sub_83CDC59C);
PPC_FUNC_IMPL(__imp__sub_83CDC59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC5A0"))) PPC_WEAK_FUNC(sub_83CDC5A0);
PPC_FUNC_IMPL(__imp__sub_83CDC5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5888
	ctx.r3.s64 = ctx.r11.s64 + -5888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC5AC"))) PPC_WEAK_FUNC(sub_83CDC5AC);
PPC_FUNC_IMPL(__imp__sub_83CDC5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC5B0"))) PPC_WEAK_FUNC(sub_83CDC5B0);
PPC_FUNC_IMPL(__imp__sub_83CDC5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5880
	ctx.r3.s64 = ctx.r11.s64 + -5880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC5BC"))) PPC_WEAK_FUNC(sub_83CDC5BC);
PPC_FUNC_IMPL(__imp__sub_83CDC5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC5C0"))) PPC_WEAK_FUNC(sub_83CDC5C0);
PPC_FUNC_IMPL(__imp__sub_83CDC5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5872
	ctx.r3.s64 = ctx.r11.s64 + -5872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC5CC"))) PPC_WEAK_FUNC(sub_83CDC5CC);
PPC_FUNC_IMPL(__imp__sub_83CDC5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC5D0"))) PPC_WEAK_FUNC(sub_83CDC5D0);
PPC_FUNC_IMPL(__imp__sub_83CDC5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5864
	ctx.r3.s64 = ctx.r11.s64 + -5864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC5DC"))) PPC_WEAK_FUNC(sub_83CDC5DC);
PPC_FUNC_IMPL(__imp__sub_83CDC5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC5E0"))) PPC_WEAK_FUNC(sub_83CDC5E0);
PPC_FUNC_IMPL(__imp__sub_83CDC5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5856
	ctx.r3.s64 = ctx.r11.s64 + -5856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC5EC"))) PPC_WEAK_FUNC(sub_83CDC5EC);
PPC_FUNC_IMPL(__imp__sub_83CDC5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC5F0"))) PPC_WEAK_FUNC(sub_83CDC5F0);
PPC_FUNC_IMPL(__imp__sub_83CDC5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5848
	ctx.r3.s64 = ctx.r11.s64 + -5848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC5FC"))) PPC_WEAK_FUNC(sub_83CDC5FC);
PPC_FUNC_IMPL(__imp__sub_83CDC5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC600"))) PPC_WEAK_FUNC(sub_83CDC600);
PPC_FUNC_IMPL(__imp__sub_83CDC600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5840
	ctx.r3.s64 = ctx.r11.s64 + -5840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC60C"))) PPC_WEAK_FUNC(sub_83CDC60C);
PPC_FUNC_IMPL(__imp__sub_83CDC60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC610"))) PPC_WEAK_FUNC(sub_83CDC610);
PPC_FUNC_IMPL(__imp__sub_83CDC610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5832
	ctx.r3.s64 = ctx.r11.s64 + -5832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC61C"))) PPC_WEAK_FUNC(sub_83CDC61C);
PPC_FUNC_IMPL(__imp__sub_83CDC61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC620"))) PPC_WEAK_FUNC(sub_83CDC620);
PPC_FUNC_IMPL(__imp__sub_83CDC620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5824
	ctx.r3.s64 = ctx.r11.s64 + -5824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC62C"))) PPC_WEAK_FUNC(sub_83CDC62C);
PPC_FUNC_IMPL(__imp__sub_83CDC62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC630"))) PPC_WEAK_FUNC(sub_83CDC630);
PPC_FUNC_IMPL(__imp__sub_83CDC630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5816
	ctx.r3.s64 = ctx.r11.s64 + -5816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC63C"))) PPC_WEAK_FUNC(sub_83CDC63C);
PPC_FUNC_IMPL(__imp__sub_83CDC63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC640"))) PPC_WEAK_FUNC(sub_83CDC640);
PPC_FUNC_IMPL(__imp__sub_83CDC640) {
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
	// addi r3,r11,25328
	ctx.r3.s64 = ctx.r11.s64 + 25328;
	// bl 0x83523120
	ctx.lr = 0x83CDC658;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5808
	ctx.r3.s64 = ctx.r10.s64 + -5808;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDC664;
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

__attribute__((alias("__imp__sub_83CDC674"))) PPC_WEAK_FUNC(sub_83CDC674);
PPC_FUNC_IMPL(__imp__sub_83CDC674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC678"))) PPC_WEAK_FUNC(sub_83CDC678);
PPC_FUNC_IMPL(__imp__sub_83CDC678) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,25332
	ctx.r7.s64 = ctx.r8.s64 + 25332;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25332(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25332);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,25332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25332, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDC6A0"))) PPC_WEAK_FUNC(sub_83CDC6A0);
PPC_FUNC_IMPL(__imp__sub_83CDC6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5792
	ctx.r3.s64 = ctx.r11.s64 + -5792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC6AC"))) PPC_WEAK_FUNC(sub_83CDC6AC);
PPC_FUNC_IMPL(__imp__sub_83CDC6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC6B0"))) PPC_WEAK_FUNC(sub_83CDC6B0);
PPC_FUNC_IMPL(__imp__sub_83CDC6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5784
	ctx.r3.s64 = ctx.r11.s64 + -5784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC6BC"))) PPC_WEAK_FUNC(sub_83CDC6BC);
PPC_FUNC_IMPL(__imp__sub_83CDC6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC6C0"))) PPC_WEAK_FUNC(sub_83CDC6C0);
PPC_FUNC_IMPL(__imp__sub_83CDC6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5776
	ctx.r3.s64 = ctx.r11.s64 + -5776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC6CC"))) PPC_WEAK_FUNC(sub_83CDC6CC);
PPC_FUNC_IMPL(__imp__sub_83CDC6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC6D0"))) PPC_WEAK_FUNC(sub_83CDC6D0);
PPC_FUNC_IMPL(__imp__sub_83CDC6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5768
	ctx.r3.s64 = ctx.r11.s64 + -5768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC6DC"))) PPC_WEAK_FUNC(sub_83CDC6DC);
PPC_FUNC_IMPL(__imp__sub_83CDC6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC6E0"))) PPC_WEAK_FUNC(sub_83CDC6E0);
PPC_FUNC_IMPL(__imp__sub_83CDC6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5760
	ctx.r3.s64 = ctx.r11.s64 + -5760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC6EC"))) PPC_WEAK_FUNC(sub_83CDC6EC);
PPC_FUNC_IMPL(__imp__sub_83CDC6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC6F0"))) PPC_WEAK_FUNC(sub_83CDC6F0);
PPC_FUNC_IMPL(__imp__sub_83CDC6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5752
	ctx.r3.s64 = ctx.r11.s64 + -5752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC6FC"))) PPC_WEAK_FUNC(sub_83CDC6FC);
PPC_FUNC_IMPL(__imp__sub_83CDC6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC700"))) PPC_WEAK_FUNC(sub_83CDC700);
PPC_FUNC_IMPL(__imp__sub_83CDC700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5744
	ctx.r3.s64 = ctx.r11.s64 + -5744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC70C"))) PPC_WEAK_FUNC(sub_83CDC70C);
PPC_FUNC_IMPL(__imp__sub_83CDC70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC710"))) PPC_WEAK_FUNC(sub_83CDC710);
PPC_FUNC_IMPL(__imp__sub_83CDC710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5736
	ctx.r3.s64 = ctx.r11.s64 + -5736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC71C"))) PPC_WEAK_FUNC(sub_83CDC71C);
PPC_FUNC_IMPL(__imp__sub_83CDC71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC720"))) PPC_WEAK_FUNC(sub_83CDC720);
PPC_FUNC_IMPL(__imp__sub_83CDC720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5728
	ctx.r3.s64 = ctx.r11.s64 + -5728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC72C"))) PPC_WEAK_FUNC(sub_83CDC72C);
PPC_FUNC_IMPL(__imp__sub_83CDC72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC730"))) PPC_WEAK_FUNC(sub_83CDC730);
PPC_FUNC_IMPL(__imp__sub_83CDC730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5720
	ctx.r3.s64 = ctx.r11.s64 + -5720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC73C"))) PPC_WEAK_FUNC(sub_83CDC73C);
PPC_FUNC_IMPL(__imp__sub_83CDC73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC740"))) PPC_WEAK_FUNC(sub_83CDC740);
PPC_FUNC_IMPL(__imp__sub_83CDC740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5712
	ctx.r3.s64 = ctx.r11.s64 + -5712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC74C"))) PPC_WEAK_FUNC(sub_83CDC74C);
PPC_FUNC_IMPL(__imp__sub_83CDC74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC750"))) PPC_WEAK_FUNC(sub_83CDC750);
PPC_FUNC_IMPL(__imp__sub_83CDC750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5704
	ctx.r3.s64 = ctx.r11.s64 + -5704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC75C"))) PPC_WEAK_FUNC(sub_83CDC75C);
PPC_FUNC_IMPL(__imp__sub_83CDC75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC760"))) PPC_WEAK_FUNC(sub_83CDC760);
PPC_FUNC_IMPL(__imp__sub_83CDC760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,25360
	ctx.r7.s64 = ctx.r8.s64 + 25360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,25360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDC788"))) PPC_WEAK_FUNC(sub_83CDC788);
PPC_FUNC_IMPL(__imp__sub_83CDC788) {
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
	// addi r3,r11,25344
	ctx.r3.s64 = ctx.r11.s64 + 25344;
	// bl 0x83523120
	ctx.lr = 0x83CDC7A0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5696
	ctx.r3.s64 = ctx.r10.s64 + -5696;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDC7AC;
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

__attribute__((alias("__imp__sub_83CDC7BC"))) PPC_WEAK_FUNC(sub_83CDC7BC);
PPC_FUNC_IMPL(__imp__sub_83CDC7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC7C0"))) PPC_WEAK_FUNC(sub_83CDC7C0);
PPC_FUNC_IMPL(__imp__sub_83CDC7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,12060
	ctx.r6.s64 = ctx.r7.s64 + 12060;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11976(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11976);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,25360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25360);
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
	// std r9,12060(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12060, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDC808"))) PPC_WEAK_FUNC(sub_83CDC808);
PPC_FUNC_IMPL(__imp__sub_83CDC808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5680
	ctx.r3.s64 = ctx.r11.s64 + -5680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC814"))) PPC_WEAK_FUNC(sub_83CDC814);
PPC_FUNC_IMPL(__imp__sub_83CDC814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC818"))) PPC_WEAK_FUNC(sub_83CDC818);
PPC_FUNC_IMPL(__imp__sub_83CDC818) {
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
	// addi r3,r11,25368
	ctx.r3.s64 = ctx.r11.s64 + 25368;
	// bl 0x8259af80
	ctx.lr = 0x83CDC830;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5664
	ctx.r3.s64 = ctx.r10.s64 + -5664;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDC83C;
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

__attribute__((alias("__imp__sub_83CDC84C"))) PPC_WEAK_FUNC(sub_83CDC84C);
PPC_FUNC_IMPL(__imp__sub_83CDC84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC850"))) PPC_WEAK_FUNC(sub_83CDC850);
PPC_FUNC_IMPL(__imp__sub_83CDC850) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,25348
	ctx.r11.s64 = ctx.r8.s64 + 25348;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,12024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12024);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5672
	ctx.r3.s64 = ctx.r6.s64 + -5672;
	// stw r10,25348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC880"))) PPC_WEAK_FUNC(sub_83CDC880);
PPC_FUNC_IMPL(__imp__sub_83CDC880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5656
	ctx.r3.s64 = ctx.r11.s64 + -5656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC88C"))) PPC_WEAK_FUNC(sub_83CDC88C);
PPC_FUNC_IMPL(__imp__sub_83CDC88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC890"))) PPC_WEAK_FUNC(sub_83CDC890);
PPC_FUNC_IMPL(__imp__sub_83CDC890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5648
	ctx.r3.s64 = ctx.r11.s64 + -5648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC89C"))) PPC_WEAK_FUNC(sub_83CDC89C);
PPC_FUNC_IMPL(__imp__sub_83CDC89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC8A0"))) PPC_WEAK_FUNC(sub_83CDC8A0);
PPC_FUNC_IMPL(__imp__sub_83CDC8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5640
	ctx.r3.s64 = ctx.r11.s64 + -5640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC8AC"))) PPC_WEAK_FUNC(sub_83CDC8AC);
PPC_FUNC_IMPL(__imp__sub_83CDC8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC8B0"))) PPC_WEAK_FUNC(sub_83CDC8B0);
PPC_FUNC_IMPL(__imp__sub_83CDC8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5632
	ctx.r3.s64 = ctx.r11.s64 + -5632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC8BC"))) PPC_WEAK_FUNC(sub_83CDC8BC);
PPC_FUNC_IMPL(__imp__sub_83CDC8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC8C0"))) PPC_WEAK_FUNC(sub_83CDC8C0);
PPC_FUNC_IMPL(__imp__sub_83CDC8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5624
	ctx.r3.s64 = ctx.r11.s64 + -5624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC8CC"))) PPC_WEAK_FUNC(sub_83CDC8CC);
PPC_FUNC_IMPL(__imp__sub_83CDC8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC8D0"))) PPC_WEAK_FUNC(sub_83CDC8D0);
PPC_FUNC_IMPL(__imp__sub_83CDC8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5616
	ctx.r3.s64 = ctx.r11.s64 + -5616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC8DC"))) PPC_WEAK_FUNC(sub_83CDC8DC);
PPC_FUNC_IMPL(__imp__sub_83CDC8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC8E0"))) PPC_WEAK_FUNC(sub_83CDC8E0);
PPC_FUNC_IMPL(__imp__sub_83CDC8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5608
	ctx.r3.s64 = ctx.r11.s64 + -5608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC8EC"))) PPC_WEAK_FUNC(sub_83CDC8EC);
PPC_FUNC_IMPL(__imp__sub_83CDC8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC8F0"))) PPC_WEAK_FUNC(sub_83CDC8F0);
PPC_FUNC_IMPL(__imp__sub_83CDC8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5600
	ctx.r3.s64 = ctx.r11.s64 + -5600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC8FC"))) PPC_WEAK_FUNC(sub_83CDC8FC);
PPC_FUNC_IMPL(__imp__sub_83CDC8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC900"))) PPC_WEAK_FUNC(sub_83CDC900);
PPC_FUNC_IMPL(__imp__sub_83CDC900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5592
	ctx.r3.s64 = ctx.r11.s64 + -5592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC90C"))) PPC_WEAK_FUNC(sub_83CDC90C);
PPC_FUNC_IMPL(__imp__sub_83CDC90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC910"))) PPC_WEAK_FUNC(sub_83CDC910);
PPC_FUNC_IMPL(__imp__sub_83CDC910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5584
	ctx.r3.s64 = ctx.r11.s64 + -5584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC91C"))) PPC_WEAK_FUNC(sub_83CDC91C);
PPC_FUNC_IMPL(__imp__sub_83CDC91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC920"))) PPC_WEAK_FUNC(sub_83CDC920);
PPC_FUNC_IMPL(__imp__sub_83CDC920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5576
	ctx.r3.s64 = ctx.r11.s64 + -5576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC92C"))) PPC_WEAK_FUNC(sub_83CDC92C);
PPC_FUNC_IMPL(__imp__sub_83CDC92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC930"))) PPC_WEAK_FUNC(sub_83CDC930);
PPC_FUNC_IMPL(__imp__sub_83CDC930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5568
	ctx.r3.s64 = ctx.r11.s64 + -5568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC93C"))) PPC_WEAK_FUNC(sub_83CDC93C);
PPC_FUNC_IMPL(__imp__sub_83CDC93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC940"))) PPC_WEAK_FUNC(sub_83CDC940);
PPC_FUNC_IMPL(__imp__sub_83CDC940) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,25728
	ctx.r7.s64 = ctx.r8.s64 + 25728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25728);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,25728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25728, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDC968"))) PPC_WEAK_FUNC(sub_83CDC968);
PPC_FUNC_IMPL(__imp__sub_83CDC968) {
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
	// addi r3,r11,25712
	ctx.r3.s64 = ctx.r11.s64 + 25712;
	// bl 0x83523120
	ctx.lr = 0x83CDC980;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5560
	ctx.r3.s64 = ctx.r10.s64 + -5560;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDC98C;
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

__attribute__((alias("__imp__sub_83CDC99C"))) PPC_WEAK_FUNC(sub_83CDC99C);
PPC_FUNC_IMPL(__imp__sub_83CDC99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC9A0"))) PPC_WEAK_FUNC(sub_83CDC9A0);
PPC_FUNC_IMPL(__imp__sub_83CDC9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,12204
	ctx.r6.s64 = ctx.r7.s64 + 12204;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12120(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12120);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,25728(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25728);
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
	// std r9,12204(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12204, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDC9E8"))) PPC_WEAK_FUNC(sub_83CDC9E8);
PPC_FUNC_IMPL(__imp__sub_83CDC9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5544
	ctx.r3.s64 = ctx.r11.s64 + -5544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDC9F4"))) PPC_WEAK_FUNC(sub_83CDC9F4);
PPC_FUNC_IMPL(__imp__sub_83CDC9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDC9F8"))) PPC_WEAK_FUNC(sub_83CDC9F8);
PPC_FUNC_IMPL(__imp__sub_83CDC9F8) {
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
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x8259af80
	ctx.lr = 0x83CDCA10;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5528
	ctx.r3.s64 = ctx.r10.s64 + -5528;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDCA1C;
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

__attribute__((alias("__imp__sub_83CDCA2C"))) PPC_WEAK_FUNC(sub_83CDCA2C);
PPC_FUNC_IMPL(__imp__sub_83CDCA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCA30"))) PPC_WEAK_FUNC(sub_83CDCA30);
PPC_FUNC_IMPL(__imp__sub_83CDCA30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,25716
	ctx.r11.s64 = ctx.r8.s64 + 25716;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,12168(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5536
	ctx.r3.s64 = ctx.r6.s64 + -5536;
	// stw r10,25716(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCA60"))) PPC_WEAK_FUNC(sub_83CDCA60);
PPC_FUNC_IMPL(__imp__sub_83CDCA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5520
	ctx.r3.s64 = ctx.r11.s64 + -5520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCA6C"))) PPC_WEAK_FUNC(sub_83CDCA6C);
PPC_FUNC_IMPL(__imp__sub_83CDCA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCA70"))) PPC_WEAK_FUNC(sub_83CDCA70);
PPC_FUNC_IMPL(__imp__sub_83CDCA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5512
	ctx.r3.s64 = ctx.r11.s64 + -5512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCA7C"))) PPC_WEAK_FUNC(sub_83CDCA7C);
PPC_FUNC_IMPL(__imp__sub_83CDCA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCA80"))) PPC_WEAK_FUNC(sub_83CDCA80);
PPC_FUNC_IMPL(__imp__sub_83CDCA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5504
	ctx.r3.s64 = ctx.r11.s64 + -5504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCA8C"))) PPC_WEAK_FUNC(sub_83CDCA8C);
PPC_FUNC_IMPL(__imp__sub_83CDCA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCA90"))) PPC_WEAK_FUNC(sub_83CDCA90);
PPC_FUNC_IMPL(__imp__sub_83CDCA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5496
	ctx.r3.s64 = ctx.r11.s64 + -5496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCA9C"))) PPC_WEAK_FUNC(sub_83CDCA9C);
PPC_FUNC_IMPL(__imp__sub_83CDCA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCAA0"))) PPC_WEAK_FUNC(sub_83CDCAA0);
PPC_FUNC_IMPL(__imp__sub_83CDCAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5488
	ctx.r3.s64 = ctx.r11.s64 + -5488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCAAC"))) PPC_WEAK_FUNC(sub_83CDCAAC);
PPC_FUNC_IMPL(__imp__sub_83CDCAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCAB0"))) PPC_WEAK_FUNC(sub_83CDCAB0);
PPC_FUNC_IMPL(__imp__sub_83CDCAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5480
	ctx.r3.s64 = ctx.r11.s64 + -5480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCABC"))) PPC_WEAK_FUNC(sub_83CDCABC);
PPC_FUNC_IMPL(__imp__sub_83CDCABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCAC0"))) PPC_WEAK_FUNC(sub_83CDCAC0);
PPC_FUNC_IMPL(__imp__sub_83CDCAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5472
	ctx.r3.s64 = ctx.r11.s64 + -5472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCACC"))) PPC_WEAK_FUNC(sub_83CDCACC);
PPC_FUNC_IMPL(__imp__sub_83CDCACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCAD0"))) PPC_WEAK_FUNC(sub_83CDCAD0);
PPC_FUNC_IMPL(__imp__sub_83CDCAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5464
	ctx.r3.s64 = ctx.r11.s64 + -5464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCADC"))) PPC_WEAK_FUNC(sub_83CDCADC);
PPC_FUNC_IMPL(__imp__sub_83CDCADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCAE0"))) PPC_WEAK_FUNC(sub_83CDCAE0);
PPC_FUNC_IMPL(__imp__sub_83CDCAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5456
	ctx.r3.s64 = ctx.r11.s64 + -5456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCAEC"))) PPC_WEAK_FUNC(sub_83CDCAEC);
PPC_FUNC_IMPL(__imp__sub_83CDCAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCAF0"))) PPC_WEAK_FUNC(sub_83CDCAF0);
PPC_FUNC_IMPL(__imp__sub_83CDCAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5448
	ctx.r3.s64 = ctx.r11.s64 + -5448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCAFC"))) PPC_WEAK_FUNC(sub_83CDCAFC);
PPC_FUNC_IMPL(__imp__sub_83CDCAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCB00"))) PPC_WEAK_FUNC(sub_83CDCB00);
PPC_FUNC_IMPL(__imp__sub_83CDCB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5440
	ctx.r3.s64 = ctx.r11.s64 + -5440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCB0C"))) PPC_WEAK_FUNC(sub_83CDCB0C);
PPC_FUNC_IMPL(__imp__sub_83CDCB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCB10"))) PPC_WEAK_FUNC(sub_83CDCB10);
PPC_FUNC_IMPL(__imp__sub_83CDCB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5432
	ctx.r3.s64 = ctx.r11.s64 + -5432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCB1C"))) PPC_WEAK_FUNC(sub_83CDCB1C);
PPC_FUNC_IMPL(__imp__sub_83CDCB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCB20"))) PPC_WEAK_FUNC(sub_83CDCB20);
PPC_FUNC_IMPL(__imp__sub_83CDCB20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26096
	ctx.r7.s64 = ctx.r8.s64 + 26096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDCB48"))) PPC_WEAK_FUNC(sub_83CDCB48);
PPC_FUNC_IMPL(__imp__sub_83CDCB48) {
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
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x83523120
	ctx.lr = 0x83CDCB60;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5424
	ctx.r3.s64 = ctx.r10.s64 + -5424;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDCB6C;
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

__attribute__((alias("__imp__sub_83CDCB7C"))) PPC_WEAK_FUNC(sub_83CDCB7C);
PPC_FUNC_IMPL(__imp__sub_83CDCB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCB80"))) PPC_WEAK_FUNC(sub_83CDCB80);
PPC_FUNC_IMPL(__imp__sub_83CDCB80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,12348
	ctx.r6.s64 = ctx.r7.s64 + 12348;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12264(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12264);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26096);
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
	// std r9,12348(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12348, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDCBC8"))) PPC_WEAK_FUNC(sub_83CDCBC8);
PPC_FUNC_IMPL(__imp__sub_83CDCBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5408
	ctx.r3.s64 = ctx.r11.s64 + -5408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCBD4"))) PPC_WEAK_FUNC(sub_83CDCBD4);
PPC_FUNC_IMPL(__imp__sub_83CDCBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCBD8"))) PPC_WEAK_FUNC(sub_83CDCBD8);
PPC_FUNC_IMPL(__imp__sub_83CDCBD8) {
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
	// addi r3,r11,26104
	ctx.r3.s64 = ctx.r11.s64 + 26104;
	// bl 0x8259af80
	ctx.lr = 0x83CDCBF0;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5392
	ctx.r3.s64 = ctx.r10.s64 + -5392;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDCBFC;
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

__attribute__((alias("__imp__sub_83CDCC0C"))) PPC_WEAK_FUNC(sub_83CDCC0C);
PPC_FUNC_IMPL(__imp__sub_83CDCC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCC10"))) PPC_WEAK_FUNC(sub_83CDCC10);
PPC_FUNC_IMPL(__imp__sub_83CDCC10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26084
	ctx.r11.s64 = ctx.r8.s64 + 26084;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,12312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12312);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5400
	ctx.r3.s64 = ctx.r6.s64 + -5400;
	// stw r10,26084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26084, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCC40"))) PPC_WEAK_FUNC(sub_83CDCC40);
PPC_FUNC_IMPL(__imp__sub_83CDCC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5384
	ctx.r3.s64 = ctx.r11.s64 + -5384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCC4C"))) PPC_WEAK_FUNC(sub_83CDCC4C);
PPC_FUNC_IMPL(__imp__sub_83CDCC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCC50"))) PPC_WEAK_FUNC(sub_83CDCC50);
PPC_FUNC_IMPL(__imp__sub_83CDCC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5376
	ctx.r3.s64 = ctx.r11.s64 + -5376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCC5C"))) PPC_WEAK_FUNC(sub_83CDCC5C);
PPC_FUNC_IMPL(__imp__sub_83CDCC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCC60"))) PPC_WEAK_FUNC(sub_83CDCC60);
PPC_FUNC_IMPL(__imp__sub_83CDCC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5368
	ctx.r3.s64 = ctx.r11.s64 + -5368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCC6C"))) PPC_WEAK_FUNC(sub_83CDCC6C);
PPC_FUNC_IMPL(__imp__sub_83CDCC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCC70"))) PPC_WEAK_FUNC(sub_83CDCC70);
PPC_FUNC_IMPL(__imp__sub_83CDCC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5360
	ctx.r3.s64 = ctx.r11.s64 + -5360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCC7C"))) PPC_WEAK_FUNC(sub_83CDCC7C);
PPC_FUNC_IMPL(__imp__sub_83CDCC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCC80"))) PPC_WEAK_FUNC(sub_83CDCC80);
PPC_FUNC_IMPL(__imp__sub_83CDCC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5352
	ctx.r3.s64 = ctx.r11.s64 + -5352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCC8C"))) PPC_WEAK_FUNC(sub_83CDCC8C);
PPC_FUNC_IMPL(__imp__sub_83CDCC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCC90"))) PPC_WEAK_FUNC(sub_83CDCC90);
PPC_FUNC_IMPL(__imp__sub_83CDCC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5344
	ctx.r3.s64 = ctx.r11.s64 + -5344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCC9C"))) PPC_WEAK_FUNC(sub_83CDCC9C);
PPC_FUNC_IMPL(__imp__sub_83CDCC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCCA0"))) PPC_WEAK_FUNC(sub_83CDCCA0);
PPC_FUNC_IMPL(__imp__sub_83CDCCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5336
	ctx.r3.s64 = ctx.r11.s64 + -5336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCCAC"))) PPC_WEAK_FUNC(sub_83CDCCAC);
PPC_FUNC_IMPL(__imp__sub_83CDCCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCCB0"))) PPC_WEAK_FUNC(sub_83CDCCB0);
PPC_FUNC_IMPL(__imp__sub_83CDCCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5328
	ctx.r3.s64 = ctx.r11.s64 + -5328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCCBC"))) PPC_WEAK_FUNC(sub_83CDCCBC);
PPC_FUNC_IMPL(__imp__sub_83CDCCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCCC0"))) PPC_WEAK_FUNC(sub_83CDCCC0);
PPC_FUNC_IMPL(__imp__sub_83CDCCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5320
	ctx.r3.s64 = ctx.r11.s64 + -5320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCCCC"))) PPC_WEAK_FUNC(sub_83CDCCCC);
PPC_FUNC_IMPL(__imp__sub_83CDCCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCCD0"))) PPC_WEAK_FUNC(sub_83CDCCD0);
PPC_FUNC_IMPL(__imp__sub_83CDCCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5312
	ctx.r3.s64 = ctx.r11.s64 + -5312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCCDC"))) PPC_WEAK_FUNC(sub_83CDCCDC);
PPC_FUNC_IMPL(__imp__sub_83CDCCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCCE0"))) PPC_WEAK_FUNC(sub_83CDCCE0);
PPC_FUNC_IMPL(__imp__sub_83CDCCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5304
	ctx.r3.s64 = ctx.r11.s64 + -5304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCCEC"))) PPC_WEAK_FUNC(sub_83CDCCEC);
PPC_FUNC_IMPL(__imp__sub_83CDCCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCCF0"))) PPC_WEAK_FUNC(sub_83CDCCF0);
PPC_FUNC_IMPL(__imp__sub_83CDCCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5296
	ctx.r3.s64 = ctx.r11.s64 + -5296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCCFC"))) PPC_WEAK_FUNC(sub_83CDCCFC);
PPC_FUNC_IMPL(__imp__sub_83CDCCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCD00"))) PPC_WEAK_FUNC(sub_83CDCD00);
PPC_FUNC_IMPL(__imp__sub_83CDCD00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26452
	ctx.r7.s64 = ctx.r8.s64 + 26452;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26452(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26452);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26452, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDCD28"))) PPC_WEAK_FUNC(sub_83CDCD28);
PPC_FUNC_IMPL(__imp__sub_83CDCD28) {
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
	// addi r3,r11,26448
	ctx.r3.s64 = ctx.r11.s64 + 26448;
	// bl 0x83523120
	ctx.lr = 0x83CDCD40;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5288
	ctx.r3.s64 = ctx.r10.s64 + -5288;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDCD4C;
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

__attribute__((alias("__imp__sub_83CDCD5C"))) PPC_WEAK_FUNC(sub_83CDCD5C);
PPC_FUNC_IMPL(__imp__sub_83CDCD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCD60"))) PPC_WEAK_FUNC(sub_83CDCD60);
PPC_FUNC_IMPL(__imp__sub_83CDCD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5272
	ctx.r3.s64 = ctx.r11.s64 + -5272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCD6C"))) PPC_WEAK_FUNC(sub_83CDCD6C);
PPC_FUNC_IMPL(__imp__sub_83CDCD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCD70"))) PPC_WEAK_FUNC(sub_83CDCD70);
PPC_FUNC_IMPL(__imp__sub_83CDCD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5264
	ctx.r3.s64 = ctx.r11.s64 + -5264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCD7C"))) PPC_WEAK_FUNC(sub_83CDCD7C);
PPC_FUNC_IMPL(__imp__sub_83CDCD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCD80"))) PPC_WEAK_FUNC(sub_83CDCD80);
PPC_FUNC_IMPL(__imp__sub_83CDCD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5256
	ctx.r3.s64 = ctx.r11.s64 + -5256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCD8C"))) PPC_WEAK_FUNC(sub_83CDCD8C);
PPC_FUNC_IMPL(__imp__sub_83CDCD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCD90"))) PPC_WEAK_FUNC(sub_83CDCD90);
PPC_FUNC_IMPL(__imp__sub_83CDCD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5248
	ctx.r3.s64 = ctx.r11.s64 + -5248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCD9C"))) PPC_WEAK_FUNC(sub_83CDCD9C);
PPC_FUNC_IMPL(__imp__sub_83CDCD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCDA0"))) PPC_WEAK_FUNC(sub_83CDCDA0);
PPC_FUNC_IMPL(__imp__sub_83CDCDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5240
	ctx.r3.s64 = ctx.r11.s64 + -5240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCDAC"))) PPC_WEAK_FUNC(sub_83CDCDAC);
PPC_FUNC_IMPL(__imp__sub_83CDCDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCDB0"))) PPC_WEAK_FUNC(sub_83CDCDB0);
PPC_FUNC_IMPL(__imp__sub_83CDCDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5232
	ctx.r3.s64 = ctx.r11.s64 + -5232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCDBC"))) PPC_WEAK_FUNC(sub_83CDCDBC);
PPC_FUNC_IMPL(__imp__sub_83CDCDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCDC0"))) PPC_WEAK_FUNC(sub_83CDCDC0);
PPC_FUNC_IMPL(__imp__sub_83CDCDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5224
	ctx.r3.s64 = ctx.r11.s64 + -5224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCDCC"))) PPC_WEAK_FUNC(sub_83CDCDCC);
PPC_FUNC_IMPL(__imp__sub_83CDCDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCDD0"))) PPC_WEAK_FUNC(sub_83CDCDD0);
PPC_FUNC_IMPL(__imp__sub_83CDCDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5216
	ctx.r3.s64 = ctx.r11.s64 + -5216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCDDC"))) PPC_WEAK_FUNC(sub_83CDCDDC);
PPC_FUNC_IMPL(__imp__sub_83CDCDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCDE0"))) PPC_WEAK_FUNC(sub_83CDCDE0);
PPC_FUNC_IMPL(__imp__sub_83CDCDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5208
	ctx.r3.s64 = ctx.r11.s64 + -5208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCDEC"))) PPC_WEAK_FUNC(sub_83CDCDEC);
PPC_FUNC_IMPL(__imp__sub_83CDCDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCDF0"))) PPC_WEAK_FUNC(sub_83CDCDF0);
PPC_FUNC_IMPL(__imp__sub_83CDCDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5200
	ctx.r3.s64 = ctx.r11.s64 + -5200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCDFC"))) PPC_WEAK_FUNC(sub_83CDCDFC);
PPC_FUNC_IMPL(__imp__sub_83CDCDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCE00"))) PPC_WEAK_FUNC(sub_83CDCE00);
PPC_FUNC_IMPL(__imp__sub_83CDCE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5192
	ctx.r3.s64 = ctx.r11.s64 + -5192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCE0C"))) PPC_WEAK_FUNC(sub_83CDCE0C);
PPC_FUNC_IMPL(__imp__sub_83CDCE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCE10"))) PPC_WEAK_FUNC(sub_83CDCE10);
PPC_FUNC_IMPL(__imp__sub_83CDCE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5184
	ctx.r3.s64 = ctx.r11.s64 + -5184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCE1C"))) PPC_WEAK_FUNC(sub_83CDCE1C);
PPC_FUNC_IMPL(__imp__sub_83CDCE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCE20"))) PPC_WEAK_FUNC(sub_83CDCE20);
PPC_FUNC_IMPL(__imp__sub_83CDCE20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26480
	ctx.r7.s64 = ctx.r8.s64 + 26480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26480(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDCE48"))) PPC_WEAK_FUNC(sub_83CDCE48);
PPC_FUNC_IMPL(__imp__sub_83CDCE48) {
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
	// addi r3,r11,26464
	ctx.r3.s64 = ctx.r11.s64 + 26464;
	// bl 0x83523120
	ctx.lr = 0x83CDCE60;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5176
	ctx.r3.s64 = ctx.r10.s64 + -5176;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDCE6C;
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

__attribute__((alias("__imp__sub_83CDCE7C"))) PPC_WEAK_FUNC(sub_83CDCE7C);
PPC_FUNC_IMPL(__imp__sub_83CDCE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCE80"))) PPC_WEAK_FUNC(sub_83CDCE80);
PPC_FUNC_IMPL(__imp__sub_83CDCE80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,12644
	ctx.r6.s64 = ctx.r7.s64 + 12644;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12560(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12560);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26480(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26480);
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
	// std r9,12644(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12644, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDCEC8"))) PPC_WEAK_FUNC(sub_83CDCEC8);
PPC_FUNC_IMPL(__imp__sub_83CDCEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5160
	ctx.r3.s64 = ctx.r11.s64 + -5160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCED4"))) PPC_WEAK_FUNC(sub_83CDCED4);
PPC_FUNC_IMPL(__imp__sub_83CDCED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCED8"))) PPC_WEAK_FUNC(sub_83CDCED8);
PPC_FUNC_IMPL(__imp__sub_83CDCED8) {
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
	// addi r3,r11,26488
	ctx.r3.s64 = ctx.r11.s64 + 26488;
	// bl 0x8259af80
	ctx.lr = 0x83CDCEF0;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5144
	ctx.r3.s64 = ctx.r10.s64 + -5144;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDCEFC;
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

__attribute__((alias("__imp__sub_83CDCF0C"))) PPC_WEAK_FUNC(sub_83CDCF0C);
PPC_FUNC_IMPL(__imp__sub_83CDCF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCF10"))) PPC_WEAK_FUNC(sub_83CDCF10);
PPC_FUNC_IMPL(__imp__sub_83CDCF10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26468
	ctx.r11.s64 = ctx.r8.s64 + 26468;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,12608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12608);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5152
	ctx.r3.s64 = ctx.r6.s64 + -5152;
	// stw r10,26468(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26468, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCF40"))) PPC_WEAK_FUNC(sub_83CDCF40);
PPC_FUNC_IMPL(__imp__sub_83CDCF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5136
	ctx.r3.s64 = ctx.r11.s64 + -5136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCF4C"))) PPC_WEAK_FUNC(sub_83CDCF4C);
PPC_FUNC_IMPL(__imp__sub_83CDCF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCF50"))) PPC_WEAK_FUNC(sub_83CDCF50);
PPC_FUNC_IMPL(__imp__sub_83CDCF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5128
	ctx.r3.s64 = ctx.r11.s64 + -5128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCF5C"))) PPC_WEAK_FUNC(sub_83CDCF5C);
PPC_FUNC_IMPL(__imp__sub_83CDCF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCF60"))) PPC_WEAK_FUNC(sub_83CDCF60);
PPC_FUNC_IMPL(__imp__sub_83CDCF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5120
	ctx.r3.s64 = ctx.r11.s64 + -5120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCF6C"))) PPC_WEAK_FUNC(sub_83CDCF6C);
PPC_FUNC_IMPL(__imp__sub_83CDCF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCF70"))) PPC_WEAK_FUNC(sub_83CDCF70);
PPC_FUNC_IMPL(__imp__sub_83CDCF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5112
	ctx.r3.s64 = ctx.r11.s64 + -5112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCF7C"))) PPC_WEAK_FUNC(sub_83CDCF7C);
PPC_FUNC_IMPL(__imp__sub_83CDCF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCF80"))) PPC_WEAK_FUNC(sub_83CDCF80);
PPC_FUNC_IMPL(__imp__sub_83CDCF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5104
	ctx.r3.s64 = ctx.r11.s64 + -5104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCF8C"))) PPC_WEAK_FUNC(sub_83CDCF8C);
PPC_FUNC_IMPL(__imp__sub_83CDCF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCF90"))) PPC_WEAK_FUNC(sub_83CDCF90);
PPC_FUNC_IMPL(__imp__sub_83CDCF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5096
	ctx.r3.s64 = ctx.r11.s64 + -5096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCF9C"))) PPC_WEAK_FUNC(sub_83CDCF9C);
PPC_FUNC_IMPL(__imp__sub_83CDCF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCFA0"))) PPC_WEAK_FUNC(sub_83CDCFA0);
PPC_FUNC_IMPL(__imp__sub_83CDCFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5088
	ctx.r3.s64 = ctx.r11.s64 + -5088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCFAC"))) PPC_WEAK_FUNC(sub_83CDCFAC);
PPC_FUNC_IMPL(__imp__sub_83CDCFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCFB0"))) PPC_WEAK_FUNC(sub_83CDCFB0);
PPC_FUNC_IMPL(__imp__sub_83CDCFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5080
	ctx.r3.s64 = ctx.r11.s64 + -5080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCFBC"))) PPC_WEAK_FUNC(sub_83CDCFBC);
PPC_FUNC_IMPL(__imp__sub_83CDCFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCFC0"))) PPC_WEAK_FUNC(sub_83CDCFC0);
PPC_FUNC_IMPL(__imp__sub_83CDCFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5072
	ctx.r3.s64 = ctx.r11.s64 + -5072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCFCC"))) PPC_WEAK_FUNC(sub_83CDCFCC);
PPC_FUNC_IMPL(__imp__sub_83CDCFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCFD0"))) PPC_WEAK_FUNC(sub_83CDCFD0);
PPC_FUNC_IMPL(__imp__sub_83CDCFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5064
	ctx.r3.s64 = ctx.r11.s64 + -5064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCFDC"))) PPC_WEAK_FUNC(sub_83CDCFDC);
PPC_FUNC_IMPL(__imp__sub_83CDCFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCFE0"))) PPC_WEAK_FUNC(sub_83CDCFE0);
PPC_FUNC_IMPL(__imp__sub_83CDCFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5056
	ctx.r3.s64 = ctx.r11.s64 + -5056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCFEC"))) PPC_WEAK_FUNC(sub_83CDCFEC);
PPC_FUNC_IMPL(__imp__sub_83CDCFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDCFF0"))) PPC_WEAK_FUNC(sub_83CDCFF0);
PPC_FUNC_IMPL(__imp__sub_83CDCFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5048
	ctx.r3.s64 = ctx.r11.s64 + -5048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDCFFC"))) PPC_WEAK_FUNC(sub_83CDCFFC);
PPC_FUNC_IMPL(__imp__sub_83CDCFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD000"))) PPC_WEAK_FUNC(sub_83CDD000);
PPC_FUNC_IMPL(__imp__sub_83CDD000) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26848
	ctx.r7.s64 = ctx.r8.s64 + 26848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26848);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26848(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26848, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDD028"))) PPC_WEAK_FUNC(sub_83CDD028);
PPC_FUNC_IMPL(__imp__sub_83CDD028) {
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
	// addi r3,r11,26832
	ctx.r3.s64 = ctx.r11.s64 + 26832;
	// bl 0x83523120
	ctx.lr = 0x83CDD040;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5040
	ctx.r3.s64 = ctx.r10.s64 + -5040;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDD04C;
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

__attribute__((alias("__imp__sub_83CDD05C"))) PPC_WEAK_FUNC(sub_83CDD05C);
PPC_FUNC_IMPL(__imp__sub_83CDD05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD060"))) PPC_WEAK_FUNC(sub_83CDD060);
PPC_FUNC_IMPL(__imp__sub_83CDD060) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,12800
	ctx.r6.s64 = ctx.r7.s64 + 12800;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12716(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12716);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26848);
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
	// std r9,12800(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12800, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDD0A8"))) PPC_WEAK_FUNC(sub_83CDD0A8);
PPC_FUNC_IMPL(__imp__sub_83CDD0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5024
	ctx.r3.s64 = ctx.r11.s64 + -5024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

