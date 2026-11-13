#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B97444"))) PPC_WEAK_FUNC(sub_83B97444);
PPC_FUNC_IMPL(__imp__sub_83B97444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97448"))) PPC_WEAK_FUNC(sub_83B97448);
PPC_FUNC_IMPL(__imp__sub_83B97448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7288
	ctx.r3.s64 = ctx.r11.s64 + 7288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97454"))) PPC_WEAK_FUNC(sub_83B97454);
PPC_FUNC_IMPL(__imp__sub_83B97454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97458"))) PPC_WEAK_FUNC(sub_83B97458);
PPC_FUNC_IMPL(__imp__sub_83B97458) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5020
	ctx.r7.s64 = ctx.r8.s64 + -5020;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5020(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5020);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5020(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5020, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B97480"))) PPC_WEAK_FUNC(sub_83B97480);
PPC_FUNC_IMPL(__imp__sub_83B97480) {
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
	// addi r3,r11,-5024
	ctx.r3.s64 = ctx.r11.s64 + -5024;
	// bl 0x83523120
	ctx.lr = 0x83B97498;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,7296
	ctx.r3.s64 = ctx.r10.s64 + 7296;
	// bl 0x831cdcc8
	ctx.lr = 0x83B974A4;
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

__attribute__((alias("__imp__sub_83B974B4"))) PPC_WEAK_FUNC(sub_83B974B4);
PPC_FUNC_IMPL(__imp__sub_83B974B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B974B8"))) PPC_WEAK_FUNC(sub_83B974B8);
PPC_FUNC_IMPL(__imp__sub_83B974B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B974C4"))) PPC_WEAK_FUNC(sub_83B974C4);
PPC_FUNC_IMPL(__imp__sub_83B974C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B974C8"))) PPC_WEAK_FUNC(sub_83B974C8);
PPC_FUNC_IMPL(__imp__sub_83B974C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7320
	ctx.r3.s64 = ctx.r11.s64 + 7320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B974D4"))) PPC_WEAK_FUNC(sub_83B974D4);
PPC_FUNC_IMPL(__imp__sub_83B974D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B974D8"))) PPC_WEAK_FUNC(sub_83B974D8);
PPC_FUNC_IMPL(__imp__sub_83B974D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7328
	ctx.r3.s64 = ctx.r11.s64 + 7328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B974E4"))) PPC_WEAK_FUNC(sub_83B974E4);
PPC_FUNC_IMPL(__imp__sub_83B974E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B974E8"))) PPC_WEAK_FUNC(sub_83B974E8);
PPC_FUNC_IMPL(__imp__sub_83B974E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7336
	ctx.r3.s64 = ctx.r11.s64 + 7336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B974F4"))) PPC_WEAK_FUNC(sub_83B974F4);
PPC_FUNC_IMPL(__imp__sub_83B974F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B974F8"))) PPC_WEAK_FUNC(sub_83B974F8);
PPC_FUNC_IMPL(__imp__sub_83B974F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7344
	ctx.r3.s64 = ctx.r11.s64 + 7344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97504"))) PPC_WEAK_FUNC(sub_83B97504);
PPC_FUNC_IMPL(__imp__sub_83B97504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97508"))) PPC_WEAK_FUNC(sub_83B97508);
PPC_FUNC_IMPL(__imp__sub_83B97508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7352
	ctx.r3.s64 = ctx.r11.s64 + 7352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97514"))) PPC_WEAK_FUNC(sub_83B97514);
PPC_FUNC_IMPL(__imp__sub_83B97514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97518"))) PPC_WEAK_FUNC(sub_83B97518);
PPC_FUNC_IMPL(__imp__sub_83B97518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7360
	ctx.r3.s64 = ctx.r11.s64 + 7360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97524"))) PPC_WEAK_FUNC(sub_83B97524);
PPC_FUNC_IMPL(__imp__sub_83B97524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97528"))) PPC_WEAK_FUNC(sub_83B97528);
PPC_FUNC_IMPL(__imp__sub_83B97528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7368
	ctx.r3.s64 = ctx.r11.s64 + 7368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97534"))) PPC_WEAK_FUNC(sub_83B97534);
PPC_FUNC_IMPL(__imp__sub_83B97534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97538"))) PPC_WEAK_FUNC(sub_83B97538);
PPC_FUNC_IMPL(__imp__sub_83B97538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7376
	ctx.r3.s64 = ctx.r11.s64 + 7376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97544"))) PPC_WEAK_FUNC(sub_83B97544);
PPC_FUNC_IMPL(__imp__sub_83B97544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97548"))) PPC_WEAK_FUNC(sub_83B97548);
PPC_FUNC_IMPL(__imp__sub_83B97548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7384
	ctx.r3.s64 = ctx.r11.s64 + 7384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97554"))) PPC_WEAK_FUNC(sub_83B97554);
PPC_FUNC_IMPL(__imp__sub_83B97554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97558"))) PPC_WEAK_FUNC(sub_83B97558);
PPC_FUNC_IMPL(__imp__sub_83B97558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7392
	ctx.r3.s64 = ctx.r11.s64 + 7392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97564"))) PPC_WEAK_FUNC(sub_83B97564);
PPC_FUNC_IMPL(__imp__sub_83B97564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97568"))) PPC_WEAK_FUNC(sub_83B97568);
PPC_FUNC_IMPL(__imp__sub_83B97568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7400
	ctx.r3.s64 = ctx.r11.s64 + 7400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97574"))) PPC_WEAK_FUNC(sub_83B97574);
PPC_FUNC_IMPL(__imp__sub_83B97574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97578"))) PPC_WEAK_FUNC(sub_83B97578);
PPC_FUNC_IMPL(__imp__sub_83B97578) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5008
	ctx.r7.s64 = ctx.r8.s64 + -5008;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5008(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5008);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5008(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5008, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B975A0"))) PPC_WEAK_FUNC(sub_83B975A0);
PPC_FUNC_IMPL(__imp__sub_83B975A0) {
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
	// addi r3,r11,-5012
	ctx.r3.s64 = ctx.r11.s64 + -5012;
	// bl 0x83523120
	ctx.lr = 0x83B975B8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,7408
	ctx.r3.s64 = ctx.r10.s64 + 7408;
	// bl 0x831cdcc8
	ctx.lr = 0x83B975C4;
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

__attribute__((alias("__imp__sub_83B975D4"))) PPC_WEAK_FUNC(sub_83B975D4);
PPC_FUNC_IMPL(__imp__sub_83B975D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B975D8"))) PPC_WEAK_FUNC(sub_83B975D8);
PPC_FUNC_IMPL(__imp__sub_83B975D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7424
	ctx.r3.s64 = ctx.r11.s64 + 7424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B975E4"))) PPC_WEAK_FUNC(sub_83B975E4);
PPC_FUNC_IMPL(__imp__sub_83B975E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B975E8"))) PPC_WEAK_FUNC(sub_83B975E8);
PPC_FUNC_IMPL(__imp__sub_83B975E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7432
	ctx.r3.s64 = ctx.r11.s64 + 7432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B975F4"))) PPC_WEAK_FUNC(sub_83B975F4);
PPC_FUNC_IMPL(__imp__sub_83B975F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B975F8"))) PPC_WEAK_FUNC(sub_83B975F8);
PPC_FUNC_IMPL(__imp__sub_83B975F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7440
	ctx.r3.s64 = ctx.r11.s64 + 7440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97604"))) PPC_WEAK_FUNC(sub_83B97604);
PPC_FUNC_IMPL(__imp__sub_83B97604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97608"))) PPC_WEAK_FUNC(sub_83B97608);
PPC_FUNC_IMPL(__imp__sub_83B97608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7448
	ctx.r3.s64 = ctx.r11.s64 + 7448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97614"))) PPC_WEAK_FUNC(sub_83B97614);
PPC_FUNC_IMPL(__imp__sub_83B97614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97618"))) PPC_WEAK_FUNC(sub_83B97618);
PPC_FUNC_IMPL(__imp__sub_83B97618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7456
	ctx.r3.s64 = ctx.r11.s64 + 7456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97624"))) PPC_WEAK_FUNC(sub_83B97624);
PPC_FUNC_IMPL(__imp__sub_83B97624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97628"))) PPC_WEAK_FUNC(sub_83B97628);
PPC_FUNC_IMPL(__imp__sub_83B97628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7464
	ctx.r3.s64 = ctx.r11.s64 + 7464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97634"))) PPC_WEAK_FUNC(sub_83B97634);
PPC_FUNC_IMPL(__imp__sub_83B97634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97638"))) PPC_WEAK_FUNC(sub_83B97638);
PPC_FUNC_IMPL(__imp__sub_83B97638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7472
	ctx.r3.s64 = ctx.r11.s64 + 7472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97644"))) PPC_WEAK_FUNC(sub_83B97644);
PPC_FUNC_IMPL(__imp__sub_83B97644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97648"))) PPC_WEAK_FUNC(sub_83B97648);
PPC_FUNC_IMPL(__imp__sub_83B97648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7480
	ctx.r3.s64 = ctx.r11.s64 + 7480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97654"))) PPC_WEAK_FUNC(sub_83B97654);
PPC_FUNC_IMPL(__imp__sub_83B97654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97658"))) PPC_WEAK_FUNC(sub_83B97658);
PPC_FUNC_IMPL(__imp__sub_83B97658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7488
	ctx.r3.s64 = ctx.r11.s64 + 7488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97664"))) PPC_WEAK_FUNC(sub_83B97664);
PPC_FUNC_IMPL(__imp__sub_83B97664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97668"))) PPC_WEAK_FUNC(sub_83B97668);
PPC_FUNC_IMPL(__imp__sub_83B97668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7496
	ctx.r3.s64 = ctx.r11.s64 + 7496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97674"))) PPC_WEAK_FUNC(sub_83B97674);
PPC_FUNC_IMPL(__imp__sub_83B97674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97678"))) PPC_WEAK_FUNC(sub_83B97678);
PPC_FUNC_IMPL(__imp__sub_83B97678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7504
	ctx.r3.s64 = ctx.r11.s64 + 7504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97684"))) PPC_WEAK_FUNC(sub_83B97684);
PPC_FUNC_IMPL(__imp__sub_83B97684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97688"))) PPC_WEAK_FUNC(sub_83B97688);
PPC_FUNC_IMPL(__imp__sub_83B97688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7512
	ctx.r3.s64 = ctx.r11.s64 + 7512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97694"))) PPC_WEAK_FUNC(sub_83B97694);
PPC_FUNC_IMPL(__imp__sub_83B97694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97698"))) PPC_WEAK_FUNC(sub_83B97698);
PPC_FUNC_IMPL(__imp__sub_83B97698) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4996
	ctx.r7.s64 = ctx.r8.s64 + -4996;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4996(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4996);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4996(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4996, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B976C0"))) PPC_WEAK_FUNC(sub_83B976C0);
PPC_FUNC_IMPL(__imp__sub_83B976C0) {
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
	// addi r3,r11,-5000
	ctx.r3.s64 = ctx.r11.s64 + -5000;
	// bl 0x83523120
	ctx.lr = 0x83B976D8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,7520
	ctx.r3.s64 = ctx.r10.s64 + 7520;
	// bl 0x831cdcc8
	ctx.lr = 0x83B976E4;
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

__attribute__((alias("__imp__sub_83B976F4"))) PPC_WEAK_FUNC(sub_83B976F4);
PPC_FUNC_IMPL(__imp__sub_83B976F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B976F8"))) PPC_WEAK_FUNC(sub_83B976F8);
PPC_FUNC_IMPL(__imp__sub_83B976F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7536
	ctx.r3.s64 = ctx.r11.s64 + 7536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97704"))) PPC_WEAK_FUNC(sub_83B97704);
PPC_FUNC_IMPL(__imp__sub_83B97704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97708"))) PPC_WEAK_FUNC(sub_83B97708);
PPC_FUNC_IMPL(__imp__sub_83B97708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7544
	ctx.r3.s64 = ctx.r11.s64 + 7544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97714"))) PPC_WEAK_FUNC(sub_83B97714);
PPC_FUNC_IMPL(__imp__sub_83B97714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97718"))) PPC_WEAK_FUNC(sub_83B97718);
PPC_FUNC_IMPL(__imp__sub_83B97718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7552
	ctx.r3.s64 = ctx.r11.s64 + 7552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97724"))) PPC_WEAK_FUNC(sub_83B97724);
PPC_FUNC_IMPL(__imp__sub_83B97724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97728"))) PPC_WEAK_FUNC(sub_83B97728);
PPC_FUNC_IMPL(__imp__sub_83B97728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7560
	ctx.r3.s64 = ctx.r11.s64 + 7560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97734"))) PPC_WEAK_FUNC(sub_83B97734);
PPC_FUNC_IMPL(__imp__sub_83B97734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97738"))) PPC_WEAK_FUNC(sub_83B97738);
PPC_FUNC_IMPL(__imp__sub_83B97738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7568
	ctx.r3.s64 = ctx.r11.s64 + 7568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97744"))) PPC_WEAK_FUNC(sub_83B97744);
PPC_FUNC_IMPL(__imp__sub_83B97744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97748"))) PPC_WEAK_FUNC(sub_83B97748);
PPC_FUNC_IMPL(__imp__sub_83B97748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7576
	ctx.r3.s64 = ctx.r11.s64 + 7576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97754"))) PPC_WEAK_FUNC(sub_83B97754);
PPC_FUNC_IMPL(__imp__sub_83B97754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97758"))) PPC_WEAK_FUNC(sub_83B97758);
PPC_FUNC_IMPL(__imp__sub_83B97758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7584
	ctx.r3.s64 = ctx.r11.s64 + 7584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97764"))) PPC_WEAK_FUNC(sub_83B97764);
PPC_FUNC_IMPL(__imp__sub_83B97764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97768"))) PPC_WEAK_FUNC(sub_83B97768);
PPC_FUNC_IMPL(__imp__sub_83B97768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7592
	ctx.r3.s64 = ctx.r11.s64 + 7592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97774"))) PPC_WEAK_FUNC(sub_83B97774);
PPC_FUNC_IMPL(__imp__sub_83B97774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97778"))) PPC_WEAK_FUNC(sub_83B97778);
PPC_FUNC_IMPL(__imp__sub_83B97778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7600
	ctx.r3.s64 = ctx.r11.s64 + 7600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97784"))) PPC_WEAK_FUNC(sub_83B97784);
PPC_FUNC_IMPL(__imp__sub_83B97784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97788"))) PPC_WEAK_FUNC(sub_83B97788);
PPC_FUNC_IMPL(__imp__sub_83B97788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7608
	ctx.r3.s64 = ctx.r11.s64 + 7608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97794"))) PPC_WEAK_FUNC(sub_83B97794);
PPC_FUNC_IMPL(__imp__sub_83B97794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97798"))) PPC_WEAK_FUNC(sub_83B97798);
PPC_FUNC_IMPL(__imp__sub_83B97798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7616
	ctx.r3.s64 = ctx.r11.s64 + 7616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B977A4"))) PPC_WEAK_FUNC(sub_83B977A4);
PPC_FUNC_IMPL(__imp__sub_83B977A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B977A8"))) PPC_WEAK_FUNC(sub_83B977A8);
PPC_FUNC_IMPL(__imp__sub_83B977A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7624
	ctx.r3.s64 = ctx.r11.s64 + 7624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B977B4"))) PPC_WEAK_FUNC(sub_83B977B4);
PPC_FUNC_IMPL(__imp__sub_83B977B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B977B8"))) PPC_WEAK_FUNC(sub_83B977B8);
PPC_FUNC_IMPL(__imp__sub_83B977B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4984
	ctx.r7.s64 = ctx.r8.s64 + -4984;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4984);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4984(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4984, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B977E0"))) PPC_WEAK_FUNC(sub_83B977E0);
PPC_FUNC_IMPL(__imp__sub_83B977E0) {
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
	// addi r3,r11,-4988
	ctx.r3.s64 = ctx.r11.s64 + -4988;
	// bl 0x83523120
	ctx.lr = 0x83B977F8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,7632
	ctx.r3.s64 = ctx.r10.s64 + 7632;
	// bl 0x831cdcc8
	ctx.lr = 0x83B97804;
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

__attribute__((alias("__imp__sub_83B97814"))) PPC_WEAK_FUNC(sub_83B97814);
PPC_FUNC_IMPL(__imp__sub_83B97814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97818"))) PPC_WEAK_FUNC(sub_83B97818);
PPC_FUNC_IMPL(__imp__sub_83B97818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7648
	ctx.r3.s64 = ctx.r11.s64 + 7648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97824"))) PPC_WEAK_FUNC(sub_83B97824);
PPC_FUNC_IMPL(__imp__sub_83B97824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97828"))) PPC_WEAK_FUNC(sub_83B97828);
PPC_FUNC_IMPL(__imp__sub_83B97828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7656
	ctx.r3.s64 = ctx.r11.s64 + 7656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97834"))) PPC_WEAK_FUNC(sub_83B97834);
PPC_FUNC_IMPL(__imp__sub_83B97834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97838"))) PPC_WEAK_FUNC(sub_83B97838);
PPC_FUNC_IMPL(__imp__sub_83B97838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7664
	ctx.r3.s64 = ctx.r11.s64 + 7664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97844"))) PPC_WEAK_FUNC(sub_83B97844);
PPC_FUNC_IMPL(__imp__sub_83B97844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97848"))) PPC_WEAK_FUNC(sub_83B97848);
PPC_FUNC_IMPL(__imp__sub_83B97848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7672
	ctx.r3.s64 = ctx.r11.s64 + 7672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97854"))) PPC_WEAK_FUNC(sub_83B97854);
PPC_FUNC_IMPL(__imp__sub_83B97854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97858"))) PPC_WEAK_FUNC(sub_83B97858);
PPC_FUNC_IMPL(__imp__sub_83B97858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7680
	ctx.r3.s64 = ctx.r11.s64 + 7680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97864"))) PPC_WEAK_FUNC(sub_83B97864);
PPC_FUNC_IMPL(__imp__sub_83B97864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97868"))) PPC_WEAK_FUNC(sub_83B97868);
PPC_FUNC_IMPL(__imp__sub_83B97868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7688
	ctx.r3.s64 = ctx.r11.s64 + 7688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97874"))) PPC_WEAK_FUNC(sub_83B97874);
PPC_FUNC_IMPL(__imp__sub_83B97874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97878"))) PPC_WEAK_FUNC(sub_83B97878);
PPC_FUNC_IMPL(__imp__sub_83B97878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7696
	ctx.r3.s64 = ctx.r11.s64 + 7696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97884"))) PPC_WEAK_FUNC(sub_83B97884);
PPC_FUNC_IMPL(__imp__sub_83B97884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97888"))) PPC_WEAK_FUNC(sub_83B97888);
PPC_FUNC_IMPL(__imp__sub_83B97888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7704
	ctx.r3.s64 = ctx.r11.s64 + 7704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97894"))) PPC_WEAK_FUNC(sub_83B97894);
PPC_FUNC_IMPL(__imp__sub_83B97894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97898"))) PPC_WEAK_FUNC(sub_83B97898);
PPC_FUNC_IMPL(__imp__sub_83B97898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B978A4"))) PPC_WEAK_FUNC(sub_83B978A4);
PPC_FUNC_IMPL(__imp__sub_83B978A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B978A8"))) PPC_WEAK_FUNC(sub_83B978A8);
PPC_FUNC_IMPL(__imp__sub_83B978A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7720
	ctx.r3.s64 = ctx.r11.s64 + 7720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B978B4"))) PPC_WEAK_FUNC(sub_83B978B4);
PPC_FUNC_IMPL(__imp__sub_83B978B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B978B8"))) PPC_WEAK_FUNC(sub_83B978B8);
PPC_FUNC_IMPL(__imp__sub_83B978B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7728
	ctx.r3.s64 = ctx.r11.s64 + 7728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B978C4"))) PPC_WEAK_FUNC(sub_83B978C4);
PPC_FUNC_IMPL(__imp__sub_83B978C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B978C8"))) PPC_WEAK_FUNC(sub_83B978C8);
PPC_FUNC_IMPL(__imp__sub_83B978C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7736
	ctx.r3.s64 = ctx.r11.s64 + 7736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B978D4"))) PPC_WEAK_FUNC(sub_83B978D4);
PPC_FUNC_IMPL(__imp__sub_83B978D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B978D8"))) PPC_WEAK_FUNC(sub_83B978D8);
PPC_FUNC_IMPL(__imp__sub_83B978D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4972
	ctx.r7.s64 = ctx.r8.s64 + -4972;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4972(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4972);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4972(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4972, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B97900"))) PPC_WEAK_FUNC(sub_83B97900);
PPC_FUNC_IMPL(__imp__sub_83B97900) {
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
	// addi r3,r11,-4976
	ctx.r3.s64 = ctx.r11.s64 + -4976;
	// bl 0x83523120
	ctx.lr = 0x83B97918;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,7744
	ctx.r3.s64 = ctx.r10.s64 + 7744;
	// bl 0x831cdcc8
	ctx.lr = 0x83B97924;
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

__attribute__((alias("__imp__sub_83B97934"))) PPC_WEAK_FUNC(sub_83B97934);
PPC_FUNC_IMPL(__imp__sub_83B97934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97938"))) PPC_WEAK_FUNC(sub_83B97938);
PPC_FUNC_IMPL(__imp__sub_83B97938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7760
	ctx.r3.s64 = ctx.r11.s64 + 7760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97944"))) PPC_WEAK_FUNC(sub_83B97944);
PPC_FUNC_IMPL(__imp__sub_83B97944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97948"))) PPC_WEAK_FUNC(sub_83B97948);
PPC_FUNC_IMPL(__imp__sub_83B97948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7768
	ctx.r3.s64 = ctx.r11.s64 + 7768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97954"))) PPC_WEAK_FUNC(sub_83B97954);
PPC_FUNC_IMPL(__imp__sub_83B97954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97958"))) PPC_WEAK_FUNC(sub_83B97958);
PPC_FUNC_IMPL(__imp__sub_83B97958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7776
	ctx.r3.s64 = ctx.r11.s64 + 7776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97964"))) PPC_WEAK_FUNC(sub_83B97964);
PPC_FUNC_IMPL(__imp__sub_83B97964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97968"))) PPC_WEAK_FUNC(sub_83B97968);
PPC_FUNC_IMPL(__imp__sub_83B97968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7784
	ctx.r3.s64 = ctx.r11.s64 + 7784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97974"))) PPC_WEAK_FUNC(sub_83B97974);
PPC_FUNC_IMPL(__imp__sub_83B97974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97978"))) PPC_WEAK_FUNC(sub_83B97978);
PPC_FUNC_IMPL(__imp__sub_83B97978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7792
	ctx.r3.s64 = ctx.r11.s64 + 7792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97984"))) PPC_WEAK_FUNC(sub_83B97984);
PPC_FUNC_IMPL(__imp__sub_83B97984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97988"))) PPC_WEAK_FUNC(sub_83B97988);
PPC_FUNC_IMPL(__imp__sub_83B97988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7800
	ctx.r3.s64 = ctx.r11.s64 + 7800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97994"))) PPC_WEAK_FUNC(sub_83B97994);
PPC_FUNC_IMPL(__imp__sub_83B97994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97998"))) PPC_WEAK_FUNC(sub_83B97998);
PPC_FUNC_IMPL(__imp__sub_83B97998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7808
	ctx.r3.s64 = ctx.r11.s64 + 7808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B979A4"))) PPC_WEAK_FUNC(sub_83B979A4);
PPC_FUNC_IMPL(__imp__sub_83B979A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B979A8"))) PPC_WEAK_FUNC(sub_83B979A8);
PPC_FUNC_IMPL(__imp__sub_83B979A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7816
	ctx.r3.s64 = ctx.r11.s64 + 7816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B979B4"))) PPC_WEAK_FUNC(sub_83B979B4);
PPC_FUNC_IMPL(__imp__sub_83B979B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B979B8"))) PPC_WEAK_FUNC(sub_83B979B8);
PPC_FUNC_IMPL(__imp__sub_83B979B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7824
	ctx.r3.s64 = ctx.r11.s64 + 7824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B979C4"))) PPC_WEAK_FUNC(sub_83B979C4);
PPC_FUNC_IMPL(__imp__sub_83B979C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B979C8"))) PPC_WEAK_FUNC(sub_83B979C8);
PPC_FUNC_IMPL(__imp__sub_83B979C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7832
	ctx.r3.s64 = ctx.r11.s64 + 7832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B979D4"))) PPC_WEAK_FUNC(sub_83B979D4);
PPC_FUNC_IMPL(__imp__sub_83B979D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B979D8"))) PPC_WEAK_FUNC(sub_83B979D8);
PPC_FUNC_IMPL(__imp__sub_83B979D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7840
	ctx.r3.s64 = ctx.r11.s64 + 7840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B979E4"))) PPC_WEAK_FUNC(sub_83B979E4);
PPC_FUNC_IMPL(__imp__sub_83B979E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B979E8"))) PPC_WEAK_FUNC(sub_83B979E8);
PPC_FUNC_IMPL(__imp__sub_83B979E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7848
	ctx.r3.s64 = ctx.r11.s64 + 7848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B979F4"))) PPC_WEAK_FUNC(sub_83B979F4);
PPC_FUNC_IMPL(__imp__sub_83B979F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B979F8"))) PPC_WEAK_FUNC(sub_83B979F8);
PPC_FUNC_IMPL(__imp__sub_83B979F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4960
	ctx.r7.s64 = ctx.r8.s64 + -4960;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4960);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4960(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4960, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B97A20"))) PPC_WEAK_FUNC(sub_83B97A20);
PPC_FUNC_IMPL(__imp__sub_83B97A20) {
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
	// addi r3,r11,-4964
	ctx.r3.s64 = ctx.r11.s64 + -4964;
	// bl 0x83523120
	ctx.lr = 0x83B97A38;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,7856
	ctx.r3.s64 = ctx.r10.s64 + 7856;
	// bl 0x831cdcc8
	ctx.lr = 0x83B97A44;
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

__attribute__((alias("__imp__sub_83B97A54"))) PPC_WEAK_FUNC(sub_83B97A54);
PPC_FUNC_IMPL(__imp__sub_83B97A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97A58"))) PPC_WEAK_FUNC(sub_83B97A58);
PPC_FUNC_IMPL(__imp__sub_83B97A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7872
	ctx.r3.s64 = ctx.r11.s64 + 7872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97A64"))) PPC_WEAK_FUNC(sub_83B97A64);
PPC_FUNC_IMPL(__imp__sub_83B97A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97A68"))) PPC_WEAK_FUNC(sub_83B97A68);
PPC_FUNC_IMPL(__imp__sub_83B97A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7880
	ctx.r3.s64 = ctx.r11.s64 + 7880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97A74"))) PPC_WEAK_FUNC(sub_83B97A74);
PPC_FUNC_IMPL(__imp__sub_83B97A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97A78"))) PPC_WEAK_FUNC(sub_83B97A78);
PPC_FUNC_IMPL(__imp__sub_83B97A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7888
	ctx.r3.s64 = ctx.r11.s64 + 7888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97A84"))) PPC_WEAK_FUNC(sub_83B97A84);
PPC_FUNC_IMPL(__imp__sub_83B97A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97A88"))) PPC_WEAK_FUNC(sub_83B97A88);
PPC_FUNC_IMPL(__imp__sub_83B97A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97A94"))) PPC_WEAK_FUNC(sub_83B97A94);
PPC_FUNC_IMPL(__imp__sub_83B97A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97A98"))) PPC_WEAK_FUNC(sub_83B97A98);
PPC_FUNC_IMPL(__imp__sub_83B97A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7904
	ctx.r3.s64 = ctx.r11.s64 + 7904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97AA4"))) PPC_WEAK_FUNC(sub_83B97AA4);
PPC_FUNC_IMPL(__imp__sub_83B97AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97AA8"))) PPC_WEAK_FUNC(sub_83B97AA8);
PPC_FUNC_IMPL(__imp__sub_83B97AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7912
	ctx.r3.s64 = ctx.r11.s64 + 7912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97AB4"))) PPC_WEAK_FUNC(sub_83B97AB4);
PPC_FUNC_IMPL(__imp__sub_83B97AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97AB8"))) PPC_WEAK_FUNC(sub_83B97AB8);
PPC_FUNC_IMPL(__imp__sub_83B97AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7920
	ctx.r3.s64 = ctx.r11.s64 + 7920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97AC4"))) PPC_WEAK_FUNC(sub_83B97AC4);
PPC_FUNC_IMPL(__imp__sub_83B97AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97AC8"))) PPC_WEAK_FUNC(sub_83B97AC8);
PPC_FUNC_IMPL(__imp__sub_83B97AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7928
	ctx.r3.s64 = ctx.r11.s64 + 7928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97AD4"))) PPC_WEAK_FUNC(sub_83B97AD4);
PPC_FUNC_IMPL(__imp__sub_83B97AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97AD8"))) PPC_WEAK_FUNC(sub_83B97AD8);
PPC_FUNC_IMPL(__imp__sub_83B97AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7936
	ctx.r3.s64 = ctx.r11.s64 + 7936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97AE4"))) PPC_WEAK_FUNC(sub_83B97AE4);
PPC_FUNC_IMPL(__imp__sub_83B97AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97AE8"))) PPC_WEAK_FUNC(sub_83B97AE8);
PPC_FUNC_IMPL(__imp__sub_83B97AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7944
	ctx.r3.s64 = ctx.r11.s64 + 7944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97AF4"))) PPC_WEAK_FUNC(sub_83B97AF4);
PPC_FUNC_IMPL(__imp__sub_83B97AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97AF8"))) PPC_WEAK_FUNC(sub_83B97AF8);
PPC_FUNC_IMPL(__imp__sub_83B97AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7952
	ctx.r3.s64 = ctx.r11.s64 + 7952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97B04"))) PPC_WEAK_FUNC(sub_83B97B04);
PPC_FUNC_IMPL(__imp__sub_83B97B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97B08"))) PPC_WEAK_FUNC(sub_83B97B08);
PPC_FUNC_IMPL(__imp__sub_83B97B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7960
	ctx.r3.s64 = ctx.r11.s64 + 7960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97B14"))) PPC_WEAK_FUNC(sub_83B97B14);
PPC_FUNC_IMPL(__imp__sub_83B97B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97B18"))) PPC_WEAK_FUNC(sub_83B97B18);
PPC_FUNC_IMPL(__imp__sub_83B97B18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4948
	ctx.r7.s64 = ctx.r8.s64 + -4948;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4948(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4948);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4948(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4948, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B97B40"))) PPC_WEAK_FUNC(sub_83B97B40);
PPC_FUNC_IMPL(__imp__sub_83B97B40) {
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
	// addi r3,r11,-4952
	ctx.r3.s64 = ctx.r11.s64 + -4952;
	// bl 0x83523120
	ctx.lr = 0x83B97B58;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,7968
	ctx.r3.s64 = ctx.r10.s64 + 7968;
	// bl 0x831cdcc8
	ctx.lr = 0x83B97B64;
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

__attribute__((alias("__imp__sub_83B97B74"))) PPC_WEAK_FUNC(sub_83B97B74);
PPC_FUNC_IMPL(__imp__sub_83B97B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97B78"))) PPC_WEAK_FUNC(sub_83B97B78);
PPC_FUNC_IMPL(__imp__sub_83B97B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7984
	ctx.r3.s64 = ctx.r11.s64 + 7984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97B84"))) PPC_WEAK_FUNC(sub_83B97B84);
PPC_FUNC_IMPL(__imp__sub_83B97B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97B88"))) PPC_WEAK_FUNC(sub_83B97B88);
PPC_FUNC_IMPL(__imp__sub_83B97B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,7992
	ctx.r3.s64 = ctx.r11.s64 + 7992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97B94"))) PPC_WEAK_FUNC(sub_83B97B94);
PPC_FUNC_IMPL(__imp__sub_83B97B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97B98"))) PPC_WEAK_FUNC(sub_83B97B98);
PPC_FUNC_IMPL(__imp__sub_83B97B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8000
	ctx.r3.s64 = ctx.r11.s64 + 8000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97BA4"))) PPC_WEAK_FUNC(sub_83B97BA4);
PPC_FUNC_IMPL(__imp__sub_83B97BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97BA8"))) PPC_WEAK_FUNC(sub_83B97BA8);
PPC_FUNC_IMPL(__imp__sub_83B97BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8008
	ctx.r3.s64 = ctx.r11.s64 + 8008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97BB4"))) PPC_WEAK_FUNC(sub_83B97BB4);
PPC_FUNC_IMPL(__imp__sub_83B97BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97BB8"))) PPC_WEAK_FUNC(sub_83B97BB8);
PPC_FUNC_IMPL(__imp__sub_83B97BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8016
	ctx.r3.s64 = ctx.r11.s64 + 8016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97BC4"))) PPC_WEAK_FUNC(sub_83B97BC4);
PPC_FUNC_IMPL(__imp__sub_83B97BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97BC8"))) PPC_WEAK_FUNC(sub_83B97BC8);
PPC_FUNC_IMPL(__imp__sub_83B97BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8024
	ctx.r3.s64 = ctx.r11.s64 + 8024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97BD4"))) PPC_WEAK_FUNC(sub_83B97BD4);
PPC_FUNC_IMPL(__imp__sub_83B97BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97BD8"))) PPC_WEAK_FUNC(sub_83B97BD8);
PPC_FUNC_IMPL(__imp__sub_83B97BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8032
	ctx.r3.s64 = ctx.r11.s64 + 8032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97BE4"))) PPC_WEAK_FUNC(sub_83B97BE4);
PPC_FUNC_IMPL(__imp__sub_83B97BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97BE8"))) PPC_WEAK_FUNC(sub_83B97BE8);
PPC_FUNC_IMPL(__imp__sub_83B97BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8040
	ctx.r3.s64 = ctx.r11.s64 + 8040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97BF4"))) PPC_WEAK_FUNC(sub_83B97BF4);
PPC_FUNC_IMPL(__imp__sub_83B97BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97BF8"))) PPC_WEAK_FUNC(sub_83B97BF8);
PPC_FUNC_IMPL(__imp__sub_83B97BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8048
	ctx.r3.s64 = ctx.r11.s64 + 8048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97C04"))) PPC_WEAK_FUNC(sub_83B97C04);
PPC_FUNC_IMPL(__imp__sub_83B97C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97C08"))) PPC_WEAK_FUNC(sub_83B97C08);
PPC_FUNC_IMPL(__imp__sub_83B97C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8056
	ctx.r3.s64 = ctx.r11.s64 + 8056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97C14"))) PPC_WEAK_FUNC(sub_83B97C14);
PPC_FUNC_IMPL(__imp__sub_83B97C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97C18"))) PPC_WEAK_FUNC(sub_83B97C18);
PPC_FUNC_IMPL(__imp__sub_83B97C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8064
	ctx.r3.s64 = ctx.r11.s64 + 8064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97C24"))) PPC_WEAK_FUNC(sub_83B97C24);
PPC_FUNC_IMPL(__imp__sub_83B97C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97C28"))) PPC_WEAK_FUNC(sub_83B97C28);
PPC_FUNC_IMPL(__imp__sub_83B97C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8072
	ctx.r3.s64 = ctx.r11.s64 + 8072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97C34"))) PPC_WEAK_FUNC(sub_83B97C34);
PPC_FUNC_IMPL(__imp__sub_83B97C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97C38"))) PPC_WEAK_FUNC(sub_83B97C38);
PPC_FUNC_IMPL(__imp__sub_83B97C38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4936
	ctx.r7.s64 = ctx.r8.s64 + -4936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4936(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B97C60"))) PPC_WEAK_FUNC(sub_83B97C60);
PPC_FUNC_IMPL(__imp__sub_83B97C60) {
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
	// addi r3,r11,-4940
	ctx.r3.s64 = ctx.r11.s64 + -4940;
	// bl 0x83523120
	ctx.lr = 0x83B97C78;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,8080
	ctx.r3.s64 = ctx.r10.s64 + 8080;
	// bl 0x831cdcc8
	ctx.lr = 0x83B97C84;
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

__attribute__((alias("__imp__sub_83B97C94"))) PPC_WEAK_FUNC(sub_83B97C94);
PPC_FUNC_IMPL(__imp__sub_83B97C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97C98"))) PPC_WEAK_FUNC(sub_83B97C98);
PPC_FUNC_IMPL(__imp__sub_83B97C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8096
	ctx.r3.s64 = ctx.r11.s64 + 8096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97CA4"))) PPC_WEAK_FUNC(sub_83B97CA4);
PPC_FUNC_IMPL(__imp__sub_83B97CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97CA8"))) PPC_WEAK_FUNC(sub_83B97CA8);
PPC_FUNC_IMPL(__imp__sub_83B97CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8104
	ctx.r3.s64 = ctx.r11.s64 + 8104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97CB4"))) PPC_WEAK_FUNC(sub_83B97CB4);
PPC_FUNC_IMPL(__imp__sub_83B97CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97CB8"))) PPC_WEAK_FUNC(sub_83B97CB8);
PPC_FUNC_IMPL(__imp__sub_83B97CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8112
	ctx.r3.s64 = ctx.r11.s64 + 8112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97CC4"))) PPC_WEAK_FUNC(sub_83B97CC4);
PPC_FUNC_IMPL(__imp__sub_83B97CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97CC8"))) PPC_WEAK_FUNC(sub_83B97CC8);
PPC_FUNC_IMPL(__imp__sub_83B97CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8120
	ctx.r3.s64 = ctx.r11.s64 + 8120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97CD4"))) PPC_WEAK_FUNC(sub_83B97CD4);
PPC_FUNC_IMPL(__imp__sub_83B97CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97CD8"))) PPC_WEAK_FUNC(sub_83B97CD8);
PPC_FUNC_IMPL(__imp__sub_83B97CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8128
	ctx.r3.s64 = ctx.r11.s64 + 8128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97CE4"))) PPC_WEAK_FUNC(sub_83B97CE4);
PPC_FUNC_IMPL(__imp__sub_83B97CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97CE8"))) PPC_WEAK_FUNC(sub_83B97CE8);
PPC_FUNC_IMPL(__imp__sub_83B97CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8136
	ctx.r3.s64 = ctx.r11.s64 + 8136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97CF4"))) PPC_WEAK_FUNC(sub_83B97CF4);
PPC_FUNC_IMPL(__imp__sub_83B97CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97CF8"))) PPC_WEAK_FUNC(sub_83B97CF8);
PPC_FUNC_IMPL(__imp__sub_83B97CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8144
	ctx.r3.s64 = ctx.r11.s64 + 8144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97D04"))) PPC_WEAK_FUNC(sub_83B97D04);
PPC_FUNC_IMPL(__imp__sub_83B97D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97D08"))) PPC_WEAK_FUNC(sub_83B97D08);
PPC_FUNC_IMPL(__imp__sub_83B97D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8152
	ctx.r3.s64 = ctx.r11.s64 + 8152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97D14"))) PPC_WEAK_FUNC(sub_83B97D14);
PPC_FUNC_IMPL(__imp__sub_83B97D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97D18"))) PPC_WEAK_FUNC(sub_83B97D18);
PPC_FUNC_IMPL(__imp__sub_83B97D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8160
	ctx.r3.s64 = ctx.r11.s64 + 8160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97D24"))) PPC_WEAK_FUNC(sub_83B97D24);
PPC_FUNC_IMPL(__imp__sub_83B97D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97D28"))) PPC_WEAK_FUNC(sub_83B97D28);
PPC_FUNC_IMPL(__imp__sub_83B97D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8168
	ctx.r3.s64 = ctx.r11.s64 + 8168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97D34"))) PPC_WEAK_FUNC(sub_83B97D34);
PPC_FUNC_IMPL(__imp__sub_83B97D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97D38"))) PPC_WEAK_FUNC(sub_83B97D38);
PPC_FUNC_IMPL(__imp__sub_83B97D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8176
	ctx.r3.s64 = ctx.r11.s64 + 8176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97D44"))) PPC_WEAK_FUNC(sub_83B97D44);
PPC_FUNC_IMPL(__imp__sub_83B97D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97D48"))) PPC_WEAK_FUNC(sub_83B97D48);
PPC_FUNC_IMPL(__imp__sub_83B97D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8184
	ctx.r3.s64 = ctx.r11.s64 + 8184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97D54"))) PPC_WEAK_FUNC(sub_83B97D54);
PPC_FUNC_IMPL(__imp__sub_83B97D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97D58"))) PPC_WEAK_FUNC(sub_83B97D58);
PPC_FUNC_IMPL(__imp__sub_83B97D58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4924
	ctx.r7.s64 = ctx.r8.s64 + -4924;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4924(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4924);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4924(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4924, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B97D80"))) PPC_WEAK_FUNC(sub_83B97D80);
PPC_FUNC_IMPL(__imp__sub_83B97D80) {
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
	// addi r3,r11,-4928
	ctx.r3.s64 = ctx.r11.s64 + -4928;
	// bl 0x83523120
	ctx.lr = 0x83B97D98;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,8192
	ctx.r3.s64 = ctx.r10.s64 + 8192;
	// bl 0x831cdcc8
	ctx.lr = 0x83B97DA4;
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

__attribute__((alias("__imp__sub_83B97DB4"))) PPC_WEAK_FUNC(sub_83B97DB4);
PPC_FUNC_IMPL(__imp__sub_83B97DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97DB8"))) PPC_WEAK_FUNC(sub_83B97DB8);
PPC_FUNC_IMPL(__imp__sub_83B97DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8208
	ctx.r3.s64 = ctx.r11.s64 + 8208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97DC4"))) PPC_WEAK_FUNC(sub_83B97DC4);
PPC_FUNC_IMPL(__imp__sub_83B97DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97DC8"))) PPC_WEAK_FUNC(sub_83B97DC8);
PPC_FUNC_IMPL(__imp__sub_83B97DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8216
	ctx.r3.s64 = ctx.r11.s64 + 8216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97DD4"))) PPC_WEAK_FUNC(sub_83B97DD4);
PPC_FUNC_IMPL(__imp__sub_83B97DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97DD8"))) PPC_WEAK_FUNC(sub_83B97DD8);
PPC_FUNC_IMPL(__imp__sub_83B97DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8224
	ctx.r3.s64 = ctx.r11.s64 + 8224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97DE4"))) PPC_WEAK_FUNC(sub_83B97DE4);
PPC_FUNC_IMPL(__imp__sub_83B97DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97DE8"))) PPC_WEAK_FUNC(sub_83B97DE8);
PPC_FUNC_IMPL(__imp__sub_83B97DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8232
	ctx.r3.s64 = ctx.r11.s64 + 8232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97DF4"))) PPC_WEAK_FUNC(sub_83B97DF4);
PPC_FUNC_IMPL(__imp__sub_83B97DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97DF8"))) PPC_WEAK_FUNC(sub_83B97DF8);
PPC_FUNC_IMPL(__imp__sub_83B97DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8240
	ctx.r3.s64 = ctx.r11.s64 + 8240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97E04"))) PPC_WEAK_FUNC(sub_83B97E04);
PPC_FUNC_IMPL(__imp__sub_83B97E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97E08"))) PPC_WEAK_FUNC(sub_83B97E08);
PPC_FUNC_IMPL(__imp__sub_83B97E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8248
	ctx.r3.s64 = ctx.r11.s64 + 8248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97E14"))) PPC_WEAK_FUNC(sub_83B97E14);
PPC_FUNC_IMPL(__imp__sub_83B97E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97E18"))) PPC_WEAK_FUNC(sub_83B97E18);
PPC_FUNC_IMPL(__imp__sub_83B97E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8256
	ctx.r3.s64 = ctx.r11.s64 + 8256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97E24"))) PPC_WEAK_FUNC(sub_83B97E24);
PPC_FUNC_IMPL(__imp__sub_83B97E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97E28"))) PPC_WEAK_FUNC(sub_83B97E28);
PPC_FUNC_IMPL(__imp__sub_83B97E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8264
	ctx.r3.s64 = ctx.r11.s64 + 8264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97E34"))) PPC_WEAK_FUNC(sub_83B97E34);
PPC_FUNC_IMPL(__imp__sub_83B97E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97E38"))) PPC_WEAK_FUNC(sub_83B97E38);
PPC_FUNC_IMPL(__imp__sub_83B97E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8272
	ctx.r3.s64 = ctx.r11.s64 + 8272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97E44"))) PPC_WEAK_FUNC(sub_83B97E44);
PPC_FUNC_IMPL(__imp__sub_83B97E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97E48"))) PPC_WEAK_FUNC(sub_83B97E48);
PPC_FUNC_IMPL(__imp__sub_83B97E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8280
	ctx.r3.s64 = ctx.r11.s64 + 8280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97E54"))) PPC_WEAK_FUNC(sub_83B97E54);
PPC_FUNC_IMPL(__imp__sub_83B97E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97E58"))) PPC_WEAK_FUNC(sub_83B97E58);
PPC_FUNC_IMPL(__imp__sub_83B97E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8288
	ctx.r3.s64 = ctx.r11.s64 + 8288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97E64"))) PPC_WEAK_FUNC(sub_83B97E64);
PPC_FUNC_IMPL(__imp__sub_83B97E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97E68"))) PPC_WEAK_FUNC(sub_83B97E68);
PPC_FUNC_IMPL(__imp__sub_83B97E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97E74"))) PPC_WEAK_FUNC(sub_83B97E74);
PPC_FUNC_IMPL(__imp__sub_83B97E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97E78"))) PPC_WEAK_FUNC(sub_83B97E78);
PPC_FUNC_IMPL(__imp__sub_83B97E78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4912
	ctx.r7.s64 = ctx.r8.s64 + -4912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4912);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4912(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4912, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B97EA0"))) PPC_WEAK_FUNC(sub_83B97EA0);
PPC_FUNC_IMPL(__imp__sub_83B97EA0) {
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
	// addi r3,r11,-4916
	ctx.r3.s64 = ctx.r11.s64 + -4916;
	// bl 0x83523120
	ctx.lr = 0x83B97EB8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,8304
	ctx.r3.s64 = ctx.r10.s64 + 8304;
	// bl 0x831cdcc8
	ctx.lr = 0x83B97EC4;
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

__attribute__((alias("__imp__sub_83B97ED4"))) PPC_WEAK_FUNC(sub_83B97ED4);
PPC_FUNC_IMPL(__imp__sub_83B97ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97ED8"))) PPC_WEAK_FUNC(sub_83B97ED8);
PPC_FUNC_IMPL(__imp__sub_83B97ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8320
	ctx.r3.s64 = ctx.r11.s64 + 8320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97EE4"))) PPC_WEAK_FUNC(sub_83B97EE4);
PPC_FUNC_IMPL(__imp__sub_83B97EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97EE8"))) PPC_WEAK_FUNC(sub_83B97EE8);
PPC_FUNC_IMPL(__imp__sub_83B97EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8328
	ctx.r3.s64 = ctx.r11.s64 + 8328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97EF4"))) PPC_WEAK_FUNC(sub_83B97EF4);
PPC_FUNC_IMPL(__imp__sub_83B97EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97EF8"))) PPC_WEAK_FUNC(sub_83B97EF8);
PPC_FUNC_IMPL(__imp__sub_83B97EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8336
	ctx.r3.s64 = ctx.r11.s64 + 8336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B97F04"))) PPC_WEAK_FUNC(sub_83B97F04);
PPC_FUNC_IMPL(__imp__sub_83B97F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B97F08"))) PPC_WEAK_FUNC(sub_83B97F08);
PPC_FUNC_IMPL(__imp__sub_83B97F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8344
	ctx.r3.s64 = ctx.r11.s64 + 8344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

