#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B8B5EC"))) PPC_WEAK_FUNC(sub_83B8B5EC);
PPC_FUNC_IMPL(__imp__sub_83B8B5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B5F0"))) PPC_WEAK_FUNC(sub_83B8B5F0);
PPC_FUNC_IMPL(__imp__sub_83B8B5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9344
	ctx.r7.s64 = ctx.r8.s64 + -9344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9344);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9344(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9344, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8B618"))) PPC_WEAK_FUNC(sub_83B8B618);
PPC_FUNC_IMPL(__imp__sub_83B8B618) {
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
	// addi r3,r11,-9348
	ctx.r3.s64 = ctx.r11.s64 + -9348;
	// bl 0x83523120
	ctx.lr = 0x83B8B630;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-10608
	ctx.r3.s64 = ctx.r10.s64 + -10608;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8B63C;
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

__attribute__((alias("__imp__sub_83B8B64C"))) PPC_WEAK_FUNC(sub_83B8B64C);
PPC_FUNC_IMPL(__imp__sub_83B8B64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B650"))) PPC_WEAK_FUNC(sub_83B8B650);
PPC_FUNC_IMPL(__imp__sub_83B8B650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10592
	ctx.r3.s64 = ctx.r11.s64 + -10592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B65C"))) PPC_WEAK_FUNC(sub_83B8B65C);
PPC_FUNC_IMPL(__imp__sub_83B8B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B660"))) PPC_WEAK_FUNC(sub_83B8B660);
PPC_FUNC_IMPL(__imp__sub_83B8B660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10584
	ctx.r3.s64 = ctx.r11.s64 + -10584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B66C"))) PPC_WEAK_FUNC(sub_83B8B66C);
PPC_FUNC_IMPL(__imp__sub_83B8B66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B670"))) PPC_WEAK_FUNC(sub_83B8B670);
PPC_FUNC_IMPL(__imp__sub_83B8B670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10576
	ctx.r3.s64 = ctx.r11.s64 + -10576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B67C"))) PPC_WEAK_FUNC(sub_83B8B67C);
PPC_FUNC_IMPL(__imp__sub_83B8B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B680"))) PPC_WEAK_FUNC(sub_83B8B680);
PPC_FUNC_IMPL(__imp__sub_83B8B680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10568
	ctx.r3.s64 = ctx.r11.s64 + -10568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B68C"))) PPC_WEAK_FUNC(sub_83B8B68C);
PPC_FUNC_IMPL(__imp__sub_83B8B68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B690"))) PPC_WEAK_FUNC(sub_83B8B690);
PPC_FUNC_IMPL(__imp__sub_83B8B690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10560
	ctx.r3.s64 = ctx.r11.s64 + -10560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B69C"))) PPC_WEAK_FUNC(sub_83B8B69C);
PPC_FUNC_IMPL(__imp__sub_83B8B69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B6A0"))) PPC_WEAK_FUNC(sub_83B8B6A0);
PPC_FUNC_IMPL(__imp__sub_83B8B6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10552
	ctx.r3.s64 = ctx.r11.s64 + -10552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B6AC"))) PPC_WEAK_FUNC(sub_83B8B6AC);
PPC_FUNC_IMPL(__imp__sub_83B8B6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B6B0"))) PPC_WEAK_FUNC(sub_83B8B6B0);
PPC_FUNC_IMPL(__imp__sub_83B8B6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10544
	ctx.r3.s64 = ctx.r11.s64 + -10544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B6BC"))) PPC_WEAK_FUNC(sub_83B8B6BC);
PPC_FUNC_IMPL(__imp__sub_83B8B6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B6C0"))) PPC_WEAK_FUNC(sub_83B8B6C0);
PPC_FUNC_IMPL(__imp__sub_83B8B6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10536
	ctx.r3.s64 = ctx.r11.s64 + -10536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B6CC"))) PPC_WEAK_FUNC(sub_83B8B6CC);
PPC_FUNC_IMPL(__imp__sub_83B8B6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B6D0"))) PPC_WEAK_FUNC(sub_83B8B6D0);
PPC_FUNC_IMPL(__imp__sub_83B8B6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B6DC"))) PPC_WEAK_FUNC(sub_83B8B6DC);
PPC_FUNC_IMPL(__imp__sub_83B8B6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B6E0"))) PPC_WEAK_FUNC(sub_83B8B6E0);
PPC_FUNC_IMPL(__imp__sub_83B8B6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10520
	ctx.r3.s64 = ctx.r11.s64 + -10520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B6EC"))) PPC_WEAK_FUNC(sub_83B8B6EC);
PPC_FUNC_IMPL(__imp__sub_83B8B6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B6F0"))) PPC_WEAK_FUNC(sub_83B8B6F0);
PPC_FUNC_IMPL(__imp__sub_83B8B6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10512
	ctx.r3.s64 = ctx.r11.s64 + -10512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B6FC"))) PPC_WEAK_FUNC(sub_83B8B6FC);
PPC_FUNC_IMPL(__imp__sub_83B8B6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B700"))) PPC_WEAK_FUNC(sub_83B8B700);
PPC_FUNC_IMPL(__imp__sub_83B8B700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10504
	ctx.r3.s64 = ctx.r11.s64 + -10504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B70C"))) PPC_WEAK_FUNC(sub_83B8B70C);
PPC_FUNC_IMPL(__imp__sub_83B8B70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B710"))) PPC_WEAK_FUNC(sub_83B8B710);
PPC_FUNC_IMPL(__imp__sub_83B8B710) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9332
	ctx.r7.s64 = ctx.r8.s64 + -9332;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9332(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9332);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9332(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9332, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8B738"))) PPC_WEAK_FUNC(sub_83B8B738);
PPC_FUNC_IMPL(__imp__sub_83B8B738) {
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
	// addi r3,r11,-9336
	ctx.r3.s64 = ctx.r11.s64 + -9336;
	// bl 0x83523120
	ctx.lr = 0x83B8B750;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-10496
	ctx.r3.s64 = ctx.r10.s64 + -10496;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8B75C;
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

__attribute__((alias("__imp__sub_83B8B76C"))) PPC_WEAK_FUNC(sub_83B8B76C);
PPC_FUNC_IMPL(__imp__sub_83B8B76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B770"))) PPC_WEAK_FUNC(sub_83B8B770);
PPC_FUNC_IMPL(__imp__sub_83B8B770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10480
	ctx.r3.s64 = ctx.r11.s64 + -10480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B77C"))) PPC_WEAK_FUNC(sub_83B8B77C);
PPC_FUNC_IMPL(__imp__sub_83B8B77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B780"))) PPC_WEAK_FUNC(sub_83B8B780);
PPC_FUNC_IMPL(__imp__sub_83B8B780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10472
	ctx.r3.s64 = ctx.r11.s64 + -10472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B78C"))) PPC_WEAK_FUNC(sub_83B8B78C);
PPC_FUNC_IMPL(__imp__sub_83B8B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B790"))) PPC_WEAK_FUNC(sub_83B8B790);
PPC_FUNC_IMPL(__imp__sub_83B8B790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10464
	ctx.r3.s64 = ctx.r11.s64 + -10464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B79C"))) PPC_WEAK_FUNC(sub_83B8B79C);
PPC_FUNC_IMPL(__imp__sub_83B8B79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B7A0"))) PPC_WEAK_FUNC(sub_83B8B7A0);
PPC_FUNC_IMPL(__imp__sub_83B8B7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10456
	ctx.r3.s64 = ctx.r11.s64 + -10456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B7AC"))) PPC_WEAK_FUNC(sub_83B8B7AC);
PPC_FUNC_IMPL(__imp__sub_83B8B7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B7B0"))) PPC_WEAK_FUNC(sub_83B8B7B0);
PPC_FUNC_IMPL(__imp__sub_83B8B7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10448
	ctx.r3.s64 = ctx.r11.s64 + -10448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B7BC"))) PPC_WEAK_FUNC(sub_83B8B7BC);
PPC_FUNC_IMPL(__imp__sub_83B8B7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B7C0"))) PPC_WEAK_FUNC(sub_83B8B7C0);
PPC_FUNC_IMPL(__imp__sub_83B8B7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10440
	ctx.r3.s64 = ctx.r11.s64 + -10440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B7CC"))) PPC_WEAK_FUNC(sub_83B8B7CC);
PPC_FUNC_IMPL(__imp__sub_83B8B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B7D0"))) PPC_WEAK_FUNC(sub_83B8B7D0);
PPC_FUNC_IMPL(__imp__sub_83B8B7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10432
	ctx.r3.s64 = ctx.r11.s64 + -10432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B7DC"))) PPC_WEAK_FUNC(sub_83B8B7DC);
PPC_FUNC_IMPL(__imp__sub_83B8B7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B7E0"))) PPC_WEAK_FUNC(sub_83B8B7E0);
PPC_FUNC_IMPL(__imp__sub_83B8B7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10424
	ctx.r3.s64 = ctx.r11.s64 + -10424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B7EC"))) PPC_WEAK_FUNC(sub_83B8B7EC);
PPC_FUNC_IMPL(__imp__sub_83B8B7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B7F0"))) PPC_WEAK_FUNC(sub_83B8B7F0);
PPC_FUNC_IMPL(__imp__sub_83B8B7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10416
	ctx.r3.s64 = ctx.r11.s64 + -10416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B7FC"))) PPC_WEAK_FUNC(sub_83B8B7FC);
PPC_FUNC_IMPL(__imp__sub_83B8B7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B800"))) PPC_WEAK_FUNC(sub_83B8B800);
PPC_FUNC_IMPL(__imp__sub_83B8B800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10408
	ctx.r3.s64 = ctx.r11.s64 + -10408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B80C"))) PPC_WEAK_FUNC(sub_83B8B80C);
PPC_FUNC_IMPL(__imp__sub_83B8B80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B810"))) PPC_WEAK_FUNC(sub_83B8B810);
PPC_FUNC_IMPL(__imp__sub_83B8B810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10400
	ctx.r3.s64 = ctx.r11.s64 + -10400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B81C"))) PPC_WEAK_FUNC(sub_83B8B81C);
PPC_FUNC_IMPL(__imp__sub_83B8B81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B820"))) PPC_WEAK_FUNC(sub_83B8B820);
PPC_FUNC_IMPL(__imp__sub_83B8B820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10392
	ctx.r3.s64 = ctx.r11.s64 + -10392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B82C"))) PPC_WEAK_FUNC(sub_83B8B82C);
PPC_FUNC_IMPL(__imp__sub_83B8B82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B830"))) PPC_WEAK_FUNC(sub_83B8B830);
PPC_FUNC_IMPL(__imp__sub_83B8B830) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9320
	ctx.r7.s64 = ctx.r8.s64 + -9320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9320(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8B858"))) PPC_WEAK_FUNC(sub_83B8B858);
PPC_FUNC_IMPL(__imp__sub_83B8B858) {
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
	// addi r3,r11,-9324
	ctx.r3.s64 = ctx.r11.s64 + -9324;
	// bl 0x83523120
	ctx.lr = 0x83B8B870;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-10384
	ctx.r3.s64 = ctx.r10.s64 + -10384;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8B87C;
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

__attribute__((alias("__imp__sub_83B8B88C"))) PPC_WEAK_FUNC(sub_83B8B88C);
PPC_FUNC_IMPL(__imp__sub_83B8B88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B890"))) PPC_WEAK_FUNC(sub_83B8B890);
PPC_FUNC_IMPL(__imp__sub_83B8B890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10368
	ctx.r3.s64 = ctx.r11.s64 + -10368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B89C"))) PPC_WEAK_FUNC(sub_83B8B89C);
PPC_FUNC_IMPL(__imp__sub_83B8B89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B8A0"))) PPC_WEAK_FUNC(sub_83B8B8A0);
PPC_FUNC_IMPL(__imp__sub_83B8B8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10360
	ctx.r3.s64 = ctx.r11.s64 + -10360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B8AC"))) PPC_WEAK_FUNC(sub_83B8B8AC);
PPC_FUNC_IMPL(__imp__sub_83B8B8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B8B0"))) PPC_WEAK_FUNC(sub_83B8B8B0);
PPC_FUNC_IMPL(__imp__sub_83B8B8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10352
	ctx.r3.s64 = ctx.r11.s64 + -10352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B8BC"))) PPC_WEAK_FUNC(sub_83B8B8BC);
PPC_FUNC_IMPL(__imp__sub_83B8B8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B8C0"))) PPC_WEAK_FUNC(sub_83B8B8C0);
PPC_FUNC_IMPL(__imp__sub_83B8B8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10344
	ctx.r3.s64 = ctx.r11.s64 + -10344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B8CC"))) PPC_WEAK_FUNC(sub_83B8B8CC);
PPC_FUNC_IMPL(__imp__sub_83B8B8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B8D0"))) PPC_WEAK_FUNC(sub_83B8B8D0);
PPC_FUNC_IMPL(__imp__sub_83B8B8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10336
	ctx.r3.s64 = ctx.r11.s64 + -10336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B8DC"))) PPC_WEAK_FUNC(sub_83B8B8DC);
PPC_FUNC_IMPL(__imp__sub_83B8B8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B8E0"))) PPC_WEAK_FUNC(sub_83B8B8E0);
PPC_FUNC_IMPL(__imp__sub_83B8B8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10328
	ctx.r3.s64 = ctx.r11.s64 + -10328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B8EC"))) PPC_WEAK_FUNC(sub_83B8B8EC);
PPC_FUNC_IMPL(__imp__sub_83B8B8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B8F0"))) PPC_WEAK_FUNC(sub_83B8B8F0);
PPC_FUNC_IMPL(__imp__sub_83B8B8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10320
	ctx.r3.s64 = ctx.r11.s64 + -10320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B8FC"))) PPC_WEAK_FUNC(sub_83B8B8FC);
PPC_FUNC_IMPL(__imp__sub_83B8B8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B900"))) PPC_WEAK_FUNC(sub_83B8B900);
PPC_FUNC_IMPL(__imp__sub_83B8B900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10312
	ctx.r3.s64 = ctx.r11.s64 + -10312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B90C"))) PPC_WEAK_FUNC(sub_83B8B90C);
PPC_FUNC_IMPL(__imp__sub_83B8B90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B910"))) PPC_WEAK_FUNC(sub_83B8B910);
PPC_FUNC_IMPL(__imp__sub_83B8B910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10304
	ctx.r3.s64 = ctx.r11.s64 + -10304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B91C"))) PPC_WEAK_FUNC(sub_83B8B91C);
PPC_FUNC_IMPL(__imp__sub_83B8B91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B920"))) PPC_WEAK_FUNC(sub_83B8B920);
PPC_FUNC_IMPL(__imp__sub_83B8B920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10296
	ctx.r3.s64 = ctx.r11.s64 + -10296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B92C"))) PPC_WEAK_FUNC(sub_83B8B92C);
PPC_FUNC_IMPL(__imp__sub_83B8B92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B930"))) PPC_WEAK_FUNC(sub_83B8B930);
PPC_FUNC_IMPL(__imp__sub_83B8B930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10288
	ctx.r3.s64 = ctx.r11.s64 + -10288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B93C"))) PPC_WEAK_FUNC(sub_83B8B93C);
PPC_FUNC_IMPL(__imp__sub_83B8B93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B940"))) PPC_WEAK_FUNC(sub_83B8B940);
PPC_FUNC_IMPL(__imp__sub_83B8B940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10280
	ctx.r3.s64 = ctx.r11.s64 + -10280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B94C"))) PPC_WEAK_FUNC(sub_83B8B94C);
PPC_FUNC_IMPL(__imp__sub_83B8B94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B950"))) PPC_WEAK_FUNC(sub_83B8B950);
PPC_FUNC_IMPL(__imp__sub_83B8B950) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9308
	ctx.r7.s64 = ctx.r8.s64 + -9308;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9308(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9308);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9308(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9308, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8B978"))) PPC_WEAK_FUNC(sub_83B8B978);
PPC_FUNC_IMPL(__imp__sub_83B8B978) {
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
	// addi r3,r11,-9312
	ctx.r3.s64 = ctx.r11.s64 + -9312;
	// bl 0x83523120
	ctx.lr = 0x83B8B990;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-10272
	ctx.r3.s64 = ctx.r10.s64 + -10272;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8B99C;
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

__attribute__((alias("__imp__sub_83B8B9AC"))) PPC_WEAK_FUNC(sub_83B8B9AC);
PPC_FUNC_IMPL(__imp__sub_83B8B9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B9B0"))) PPC_WEAK_FUNC(sub_83B8B9B0);
PPC_FUNC_IMPL(__imp__sub_83B8B9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10256
	ctx.r3.s64 = ctx.r11.s64 + -10256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B9BC"))) PPC_WEAK_FUNC(sub_83B8B9BC);
PPC_FUNC_IMPL(__imp__sub_83B8B9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B9C0"))) PPC_WEAK_FUNC(sub_83B8B9C0);
PPC_FUNC_IMPL(__imp__sub_83B8B9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10248
	ctx.r3.s64 = ctx.r11.s64 + -10248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B9CC"))) PPC_WEAK_FUNC(sub_83B8B9CC);
PPC_FUNC_IMPL(__imp__sub_83B8B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B9D0"))) PPC_WEAK_FUNC(sub_83B8B9D0);
PPC_FUNC_IMPL(__imp__sub_83B8B9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10240
	ctx.r3.s64 = ctx.r11.s64 + -10240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B9DC"))) PPC_WEAK_FUNC(sub_83B8B9DC);
PPC_FUNC_IMPL(__imp__sub_83B8B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B9E0"))) PPC_WEAK_FUNC(sub_83B8B9E0);
PPC_FUNC_IMPL(__imp__sub_83B8B9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10232
	ctx.r3.s64 = ctx.r11.s64 + -10232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B9EC"))) PPC_WEAK_FUNC(sub_83B8B9EC);
PPC_FUNC_IMPL(__imp__sub_83B8B9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8B9F0"))) PPC_WEAK_FUNC(sub_83B8B9F0);
PPC_FUNC_IMPL(__imp__sub_83B8B9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10224
	ctx.r3.s64 = ctx.r11.s64 + -10224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8B9FC"))) PPC_WEAK_FUNC(sub_83B8B9FC);
PPC_FUNC_IMPL(__imp__sub_83B8B9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BA00"))) PPC_WEAK_FUNC(sub_83B8BA00);
PPC_FUNC_IMPL(__imp__sub_83B8BA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10216
	ctx.r3.s64 = ctx.r11.s64 + -10216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BA0C"))) PPC_WEAK_FUNC(sub_83B8BA0C);
PPC_FUNC_IMPL(__imp__sub_83B8BA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BA10"))) PPC_WEAK_FUNC(sub_83B8BA10);
PPC_FUNC_IMPL(__imp__sub_83B8BA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10208
	ctx.r3.s64 = ctx.r11.s64 + -10208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BA1C"))) PPC_WEAK_FUNC(sub_83B8BA1C);
PPC_FUNC_IMPL(__imp__sub_83B8BA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BA20"))) PPC_WEAK_FUNC(sub_83B8BA20);
PPC_FUNC_IMPL(__imp__sub_83B8BA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10200
	ctx.r3.s64 = ctx.r11.s64 + -10200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BA2C"))) PPC_WEAK_FUNC(sub_83B8BA2C);
PPC_FUNC_IMPL(__imp__sub_83B8BA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BA30"))) PPC_WEAK_FUNC(sub_83B8BA30);
PPC_FUNC_IMPL(__imp__sub_83B8BA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10192
	ctx.r3.s64 = ctx.r11.s64 + -10192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BA3C"))) PPC_WEAK_FUNC(sub_83B8BA3C);
PPC_FUNC_IMPL(__imp__sub_83B8BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BA40"))) PPC_WEAK_FUNC(sub_83B8BA40);
PPC_FUNC_IMPL(__imp__sub_83B8BA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10184
	ctx.r3.s64 = ctx.r11.s64 + -10184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BA4C"))) PPC_WEAK_FUNC(sub_83B8BA4C);
PPC_FUNC_IMPL(__imp__sub_83B8BA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BA50"))) PPC_WEAK_FUNC(sub_83B8BA50);
PPC_FUNC_IMPL(__imp__sub_83B8BA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10176
	ctx.r3.s64 = ctx.r11.s64 + -10176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BA5C"))) PPC_WEAK_FUNC(sub_83B8BA5C);
PPC_FUNC_IMPL(__imp__sub_83B8BA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BA60"))) PPC_WEAK_FUNC(sub_83B8BA60);
PPC_FUNC_IMPL(__imp__sub_83B8BA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10168
	ctx.r3.s64 = ctx.r11.s64 + -10168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BA6C"))) PPC_WEAK_FUNC(sub_83B8BA6C);
PPC_FUNC_IMPL(__imp__sub_83B8BA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BA70"))) PPC_WEAK_FUNC(sub_83B8BA70);
PPC_FUNC_IMPL(__imp__sub_83B8BA70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9296
	ctx.r7.s64 = ctx.r8.s64 + -9296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9296);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9296(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9296, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8BA98"))) PPC_WEAK_FUNC(sub_83B8BA98);
PPC_FUNC_IMPL(__imp__sub_83B8BA98) {
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
	// addi r3,r11,-9300
	ctx.r3.s64 = ctx.r11.s64 + -9300;
	// bl 0x83523120
	ctx.lr = 0x83B8BAB0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-10160
	ctx.r3.s64 = ctx.r10.s64 + -10160;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8BABC;
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

__attribute__((alias("__imp__sub_83B8BACC"))) PPC_WEAK_FUNC(sub_83B8BACC);
PPC_FUNC_IMPL(__imp__sub_83B8BACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BAD0"))) PPC_WEAK_FUNC(sub_83B8BAD0);
PPC_FUNC_IMPL(__imp__sub_83B8BAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10144
	ctx.r3.s64 = ctx.r11.s64 + -10144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BADC"))) PPC_WEAK_FUNC(sub_83B8BADC);
PPC_FUNC_IMPL(__imp__sub_83B8BADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BAE0"))) PPC_WEAK_FUNC(sub_83B8BAE0);
PPC_FUNC_IMPL(__imp__sub_83B8BAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10136
	ctx.r3.s64 = ctx.r11.s64 + -10136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BAEC"))) PPC_WEAK_FUNC(sub_83B8BAEC);
PPC_FUNC_IMPL(__imp__sub_83B8BAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BAF0"))) PPC_WEAK_FUNC(sub_83B8BAF0);
PPC_FUNC_IMPL(__imp__sub_83B8BAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10128
	ctx.r3.s64 = ctx.r11.s64 + -10128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BAFC"))) PPC_WEAK_FUNC(sub_83B8BAFC);
PPC_FUNC_IMPL(__imp__sub_83B8BAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BB00"))) PPC_WEAK_FUNC(sub_83B8BB00);
PPC_FUNC_IMPL(__imp__sub_83B8BB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10120
	ctx.r3.s64 = ctx.r11.s64 + -10120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BB0C"))) PPC_WEAK_FUNC(sub_83B8BB0C);
PPC_FUNC_IMPL(__imp__sub_83B8BB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BB10"))) PPC_WEAK_FUNC(sub_83B8BB10);
PPC_FUNC_IMPL(__imp__sub_83B8BB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10112
	ctx.r3.s64 = ctx.r11.s64 + -10112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BB1C"))) PPC_WEAK_FUNC(sub_83B8BB1C);
PPC_FUNC_IMPL(__imp__sub_83B8BB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BB20"))) PPC_WEAK_FUNC(sub_83B8BB20);
PPC_FUNC_IMPL(__imp__sub_83B8BB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10104
	ctx.r3.s64 = ctx.r11.s64 + -10104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BB2C"))) PPC_WEAK_FUNC(sub_83B8BB2C);
PPC_FUNC_IMPL(__imp__sub_83B8BB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BB30"))) PPC_WEAK_FUNC(sub_83B8BB30);
PPC_FUNC_IMPL(__imp__sub_83B8BB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10096
	ctx.r3.s64 = ctx.r11.s64 + -10096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BB3C"))) PPC_WEAK_FUNC(sub_83B8BB3C);
PPC_FUNC_IMPL(__imp__sub_83B8BB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BB40"))) PPC_WEAK_FUNC(sub_83B8BB40);
PPC_FUNC_IMPL(__imp__sub_83B8BB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10088
	ctx.r3.s64 = ctx.r11.s64 + -10088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BB4C"))) PPC_WEAK_FUNC(sub_83B8BB4C);
PPC_FUNC_IMPL(__imp__sub_83B8BB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BB50"))) PPC_WEAK_FUNC(sub_83B8BB50);
PPC_FUNC_IMPL(__imp__sub_83B8BB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10080
	ctx.r3.s64 = ctx.r11.s64 + -10080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BB5C"))) PPC_WEAK_FUNC(sub_83B8BB5C);
PPC_FUNC_IMPL(__imp__sub_83B8BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BB60"))) PPC_WEAK_FUNC(sub_83B8BB60);
PPC_FUNC_IMPL(__imp__sub_83B8BB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10072
	ctx.r3.s64 = ctx.r11.s64 + -10072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BB6C"))) PPC_WEAK_FUNC(sub_83B8BB6C);
PPC_FUNC_IMPL(__imp__sub_83B8BB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BB70"))) PPC_WEAK_FUNC(sub_83B8BB70);
PPC_FUNC_IMPL(__imp__sub_83B8BB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10064
	ctx.r3.s64 = ctx.r11.s64 + -10064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BB7C"))) PPC_WEAK_FUNC(sub_83B8BB7C);
PPC_FUNC_IMPL(__imp__sub_83B8BB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BB80"))) PPC_WEAK_FUNC(sub_83B8BB80);
PPC_FUNC_IMPL(__imp__sub_83B8BB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10056
	ctx.r3.s64 = ctx.r11.s64 + -10056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BB8C"))) PPC_WEAK_FUNC(sub_83B8BB8C);
PPC_FUNC_IMPL(__imp__sub_83B8BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BB90"))) PPC_WEAK_FUNC(sub_83B8BB90);
PPC_FUNC_IMPL(__imp__sub_83B8BB90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9284
	ctx.r7.s64 = ctx.r8.s64 + -9284;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9284(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9284);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9284(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9284, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8BBB8"))) PPC_WEAK_FUNC(sub_83B8BBB8);
PPC_FUNC_IMPL(__imp__sub_83B8BBB8) {
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
	// addi r3,r11,-9288
	ctx.r3.s64 = ctx.r11.s64 + -9288;
	// bl 0x83523120
	ctx.lr = 0x83B8BBD0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-10048
	ctx.r3.s64 = ctx.r10.s64 + -10048;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8BBDC;
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

__attribute__((alias("__imp__sub_83B8BBEC"))) PPC_WEAK_FUNC(sub_83B8BBEC);
PPC_FUNC_IMPL(__imp__sub_83B8BBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BBF0"))) PPC_WEAK_FUNC(sub_83B8BBF0);
PPC_FUNC_IMPL(__imp__sub_83B8BBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10032
	ctx.r3.s64 = ctx.r11.s64 + -10032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BBFC"))) PPC_WEAK_FUNC(sub_83B8BBFC);
PPC_FUNC_IMPL(__imp__sub_83B8BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BC00"))) PPC_WEAK_FUNC(sub_83B8BC00);
PPC_FUNC_IMPL(__imp__sub_83B8BC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10024
	ctx.r3.s64 = ctx.r11.s64 + -10024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BC0C"))) PPC_WEAK_FUNC(sub_83B8BC0C);
PPC_FUNC_IMPL(__imp__sub_83B8BC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BC10"))) PPC_WEAK_FUNC(sub_83B8BC10);
PPC_FUNC_IMPL(__imp__sub_83B8BC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10016
	ctx.r3.s64 = ctx.r11.s64 + -10016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BC1C"))) PPC_WEAK_FUNC(sub_83B8BC1C);
PPC_FUNC_IMPL(__imp__sub_83B8BC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BC20"))) PPC_WEAK_FUNC(sub_83B8BC20);
PPC_FUNC_IMPL(__imp__sub_83B8BC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10008
	ctx.r3.s64 = ctx.r11.s64 + -10008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BC2C"))) PPC_WEAK_FUNC(sub_83B8BC2C);
PPC_FUNC_IMPL(__imp__sub_83B8BC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BC30"))) PPC_WEAK_FUNC(sub_83B8BC30);
PPC_FUNC_IMPL(__imp__sub_83B8BC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-10000
	ctx.r3.s64 = ctx.r11.s64 + -10000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BC3C"))) PPC_WEAK_FUNC(sub_83B8BC3C);
PPC_FUNC_IMPL(__imp__sub_83B8BC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BC40"))) PPC_WEAK_FUNC(sub_83B8BC40);
PPC_FUNC_IMPL(__imp__sub_83B8BC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9992
	ctx.r3.s64 = ctx.r11.s64 + -9992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BC4C"))) PPC_WEAK_FUNC(sub_83B8BC4C);
PPC_FUNC_IMPL(__imp__sub_83B8BC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BC50"))) PPC_WEAK_FUNC(sub_83B8BC50);
PPC_FUNC_IMPL(__imp__sub_83B8BC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9984
	ctx.r3.s64 = ctx.r11.s64 + -9984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BC5C"))) PPC_WEAK_FUNC(sub_83B8BC5C);
PPC_FUNC_IMPL(__imp__sub_83B8BC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BC60"))) PPC_WEAK_FUNC(sub_83B8BC60);
PPC_FUNC_IMPL(__imp__sub_83B8BC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9976
	ctx.r3.s64 = ctx.r11.s64 + -9976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BC6C"))) PPC_WEAK_FUNC(sub_83B8BC6C);
PPC_FUNC_IMPL(__imp__sub_83B8BC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BC70"))) PPC_WEAK_FUNC(sub_83B8BC70);
PPC_FUNC_IMPL(__imp__sub_83B8BC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9968
	ctx.r3.s64 = ctx.r11.s64 + -9968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BC7C"))) PPC_WEAK_FUNC(sub_83B8BC7C);
PPC_FUNC_IMPL(__imp__sub_83B8BC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BC80"))) PPC_WEAK_FUNC(sub_83B8BC80);
PPC_FUNC_IMPL(__imp__sub_83B8BC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9960
	ctx.r3.s64 = ctx.r11.s64 + -9960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BC8C"))) PPC_WEAK_FUNC(sub_83B8BC8C);
PPC_FUNC_IMPL(__imp__sub_83B8BC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BC90"))) PPC_WEAK_FUNC(sub_83B8BC90);
PPC_FUNC_IMPL(__imp__sub_83B8BC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9952
	ctx.r3.s64 = ctx.r11.s64 + -9952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BC9C"))) PPC_WEAK_FUNC(sub_83B8BC9C);
PPC_FUNC_IMPL(__imp__sub_83B8BC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BCA0"))) PPC_WEAK_FUNC(sub_83B8BCA0);
PPC_FUNC_IMPL(__imp__sub_83B8BCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9944
	ctx.r3.s64 = ctx.r11.s64 + -9944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BCAC"))) PPC_WEAK_FUNC(sub_83B8BCAC);
PPC_FUNC_IMPL(__imp__sub_83B8BCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BCB0"))) PPC_WEAK_FUNC(sub_83B8BCB0);
PPC_FUNC_IMPL(__imp__sub_83B8BCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9272
	ctx.r7.s64 = ctx.r8.s64 + -9272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9272);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9272(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9272, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8BCD8"))) PPC_WEAK_FUNC(sub_83B8BCD8);
PPC_FUNC_IMPL(__imp__sub_83B8BCD8) {
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
	// addi r3,r11,-9276
	ctx.r3.s64 = ctx.r11.s64 + -9276;
	// bl 0x83523120
	ctx.lr = 0x83B8BCF0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-9936
	ctx.r3.s64 = ctx.r10.s64 + -9936;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8BCFC;
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

__attribute__((alias("__imp__sub_83B8BD0C"))) PPC_WEAK_FUNC(sub_83B8BD0C);
PPC_FUNC_IMPL(__imp__sub_83B8BD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BD10"))) PPC_WEAK_FUNC(sub_83B8BD10);
PPC_FUNC_IMPL(__imp__sub_83B8BD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9920
	ctx.r3.s64 = ctx.r11.s64 + -9920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BD1C"))) PPC_WEAK_FUNC(sub_83B8BD1C);
PPC_FUNC_IMPL(__imp__sub_83B8BD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BD20"))) PPC_WEAK_FUNC(sub_83B8BD20);
PPC_FUNC_IMPL(__imp__sub_83B8BD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9912
	ctx.r3.s64 = ctx.r11.s64 + -9912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BD2C"))) PPC_WEAK_FUNC(sub_83B8BD2C);
PPC_FUNC_IMPL(__imp__sub_83B8BD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BD30"))) PPC_WEAK_FUNC(sub_83B8BD30);
PPC_FUNC_IMPL(__imp__sub_83B8BD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9904
	ctx.r3.s64 = ctx.r11.s64 + -9904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BD3C"))) PPC_WEAK_FUNC(sub_83B8BD3C);
PPC_FUNC_IMPL(__imp__sub_83B8BD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BD40"))) PPC_WEAK_FUNC(sub_83B8BD40);
PPC_FUNC_IMPL(__imp__sub_83B8BD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9896
	ctx.r3.s64 = ctx.r11.s64 + -9896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BD4C"))) PPC_WEAK_FUNC(sub_83B8BD4C);
PPC_FUNC_IMPL(__imp__sub_83B8BD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BD50"))) PPC_WEAK_FUNC(sub_83B8BD50);
PPC_FUNC_IMPL(__imp__sub_83B8BD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9888
	ctx.r3.s64 = ctx.r11.s64 + -9888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BD5C"))) PPC_WEAK_FUNC(sub_83B8BD5C);
PPC_FUNC_IMPL(__imp__sub_83B8BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BD60"))) PPC_WEAK_FUNC(sub_83B8BD60);
PPC_FUNC_IMPL(__imp__sub_83B8BD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9880
	ctx.r3.s64 = ctx.r11.s64 + -9880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BD6C"))) PPC_WEAK_FUNC(sub_83B8BD6C);
PPC_FUNC_IMPL(__imp__sub_83B8BD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BD70"))) PPC_WEAK_FUNC(sub_83B8BD70);
PPC_FUNC_IMPL(__imp__sub_83B8BD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9872
	ctx.r3.s64 = ctx.r11.s64 + -9872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BD7C"))) PPC_WEAK_FUNC(sub_83B8BD7C);
PPC_FUNC_IMPL(__imp__sub_83B8BD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BD80"))) PPC_WEAK_FUNC(sub_83B8BD80);
PPC_FUNC_IMPL(__imp__sub_83B8BD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9864
	ctx.r3.s64 = ctx.r11.s64 + -9864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BD8C"))) PPC_WEAK_FUNC(sub_83B8BD8C);
PPC_FUNC_IMPL(__imp__sub_83B8BD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BD90"))) PPC_WEAK_FUNC(sub_83B8BD90);
PPC_FUNC_IMPL(__imp__sub_83B8BD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9856
	ctx.r3.s64 = ctx.r11.s64 + -9856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BD9C"))) PPC_WEAK_FUNC(sub_83B8BD9C);
PPC_FUNC_IMPL(__imp__sub_83B8BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BDA0"))) PPC_WEAK_FUNC(sub_83B8BDA0);
PPC_FUNC_IMPL(__imp__sub_83B8BDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9848
	ctx.r3.s64 = ctx.r11.s64 + -9848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BDAC"))) PPC_WEAK_FUNC(sub_83B8BDAC);
PPC_FUNC_IMPL(__imp__sub_83B8BDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BDB0"))) PPC_WEAK_FUNC(sub_83B8BDB0);
PPC_FUNC_IMPL(__imp__sub_83B8BDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9840
	ctx.r3.s64 = ctx.r11.s64 + -9840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BDBC"))) PPC_WEAK_FUNC(sub_83B8BDBC);
PPC_FUNC_IMPL(__imp__sub_83B8BDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BDC0"))) PPC_WEAK_FUNC(sub_83B8BDC0);
PPC_FUNC_IMPL(__imp__sub_83B8BDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9832
	ctx.r3.s64 = ctx.r11.s64 + -9832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BDCC"))) PPC_WEAK_FUNC(sub_83B8BDCC);
PPC_FUNC_IMPL(__imp__sub_83B8BDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BDD0"))) PPC_WEAK_FUNC(sub_83B8BDD0);
PPC_FUNC_IMPL(__imp__sub_83B8BDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9260
	ctx.r7.s64 = ctx.r8.s64 + -9260;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9260(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9260);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9260(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9260, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8BDF8"))) PPC_WEAK_FUNC(sub_83B8BDF8);
PPC_FUNC_IMPL(__imp__sub_83B8BDF8) {
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
	// addi r3,r11,-9264
	ctx.r3.s64 = ctx.r11.s64 + -9264;
	// bl 0x83523120
	ctx.lr = 0x83B8BE10;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-9824
	ctx.r3.s64 = ctx.r10.s64 + -9824;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8BE1C;
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

__attribute__((alias("__imp__sub_83B8BE2C"))) PPC_WEAK_FUNC(sub_83B8BE2C);
PPC_FUNC_IMPL(__imp__sub_83B8BE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BE30"))) PPC_WEAK_FUNC(sub_83B8BE30);
PPC_FUNC_IMPL(__imp__sub_83B8BE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9808
	ctx.r3.s64 = ctx.r11.s64 + -9808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BE3C"))) PPC_WEAK_FUNC(sub_83B8BE3C);
PPC_FUNC_IMPL(__imp__sub_83B8BE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BE40"))) PPC_WEAK_FUNC(sub_83B8BE40);
PPC_FUNC_IMPL(__imp__sub_83B8BE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9800
	ctx.r3.s64 = ctx.r11.s64 + -9800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BE4C"))) PPC_WEAK_FUNC(sub_83B8BE4C);
PPC_FUNC_IMPL(__imp__sub_83B8BE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BE50"))) PPC_WEAK_FUNC(sub_83B8BE50);
PPC_FUNC_IMPL(__imp__sub_83B8BE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9792
	ctx.r3.s64 = ctx.r11.s64 + -9792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BE5C"))) PPC_WEAK_FUNC(sub_83B8BE5C);
PPC_FUNC_IMPL(__imp__sub_83B8BE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BE60"))) PPC_WEAK_FUNC(sub_83B8BE60);
PPC_FUNC_IMPL(__imp__sub_83B8BE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9784
	ctx.r3.s64 = ctx.r11.s64 + -9784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BE6C"))) PPC_WEAK_FUNC(sub_83B8BE6C);
PPC_FUNC_IMPL(__imp__sub_83B8BE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BE70"))) PPC_WEAK_FUNC(sub_83B8BE70);
PPC_FUNC_IMPL(__imp__sub_83B8BE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9776
	ctx.r3.s64 = ctx.r11.s64 + -9776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BE7C"))) PPC_WEAK_FUNC(sub_83B8BE7C);
PPC_FUNC_IMPL(__imp__sub_83B8BE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BE80"))) PPC_WEAK_FUNC(sub_83B8BE80);
PPC_FUNC_IMPL(__imp__sub_83B8BE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9768
	ctx.r3.s64 = ctx.r11.s64 + -9768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BE8C"))) PPC_WEAK_FUNC(sub_83B8BE8C);
PPC_FUNC_IMPL(__imp__sub_83B8BE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BE90"))) PPC_WEAK_FUNC(sub_83B8BE90);
PPC_FUNC_IMPL(__imp__sub_83B8BE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9760
	ctx.r3.s64 = ctx.r11.s64 + -9760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BE9C"))) PPC_WEAK_FUNC(sub_83B8BE9C);
PPC_FUNC_IMPL(__imp__sub_83B8BE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BEA0"))) PPC_WEAK_FUNC(sub_83B8BEA0);
PPC_FUNC_IMPL(__imp__sub_83B8BEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9752
	ctx.r3.s64 = ctx.r11.s64 + -9752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BEAC"))) PPC_WEAK_FUNC(sub_83B8BEAC);
PPC_FUNC_IMPL(__imp__sub_83B8BEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BEB0"))) PPC_WEAK_FUNC(sub_83B8BEB0);
PPC_FUNC_IMPL(__imp__sub_83B8BEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9744
	ctx.r3.s64 = ctx.r11.s64 + -9744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BEBC"))) PPC_WEAK_FUNC(sub_83B8BEBC);
PPC_FUNC_IMPL(__imp__sub_83B8BEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BEC0"))) PPC_WEAK_FUNC(sub_83B8BEC0);
PPC_FUNC_IMPL(__imp__sub_83B8BEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9736
	ctx.r3.s64 = ctx.r11.s64 + -9736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BECC"))) PPC_WEAK_FUNC(sub_83B8BECC);
PPC_FUNC_IMPL(__imp__sub_83B8BECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BED0"))) PPC_WEAK_FUNC(sub_83B8BED0);
PPC_FUNC_IMPL(__imp__sub_83B8BED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9728
	ctx.r3.s64 = ctx.r11.s64 + -9728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BEDC"))) PPC_WEAK_FUNC(sub_83B8BEDC);
PPC_FUNC_IMPL(__imp__sub_83B8BEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BEE0"))) PPC_WEAK_FUNC(sub_83B8BEE0);
PPC_FUNC_IMPL(__imp__sub_83B8BEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9720
	ctx.r3.s64 = ctx.r11.s64 + -9720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BEEC"))) PPC_WEAK_FUNC(sub_83B8BEEC);
PPC_FUNC_IMPL(__imp__sub_83B8BEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BEF0"))) PPC_WEAK_FUNC(sub_83B8BEF0);
PPC_FUNC_IMPL(__imp__sub_83B8BEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9248
	ctx.r7.s64 = ctx.r8.s64 + -9248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9248(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9248);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9248(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9248, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8BF18"))) PPC_WEAK_FUNC(sub_83B8BF18);
PPC_FUNC_IMPL(__imp__sub_83B8BF18) {
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
	// addi r3,r11,-9252
	ctx.r3.s64 = ctx.r11.s64 + -9252;
	// bl 0x83523120
	ctx.lr = 0x83B8BF30;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-9712
	ctx.r3.s64 = ctx.r10.s64 + -9712;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8BF3C;
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

__attribute__((alias("__imp__sub_83B8BF4C"))) PPC_WEAK_FUNC(sub_83B8BF4C);
PPC_FUNC_IMPL(__imp__sub_83B8BF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BF50"))) PPC_WEAK_FUNC(sub_83B8BF50);
PPC_FUNC_IMPL(__imp__sub_83B8BF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9696
	ctx.r3.s64 = ctx.r11.s64 + -9696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BF5C"))) PPC_WEAK_FUNC(sub_83B8BF5C);
PPC_FUNC_IMPL(__imp__sub_83B8BF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BF60"))) PPC_WEAK_FUNC(sub_83B8BF60);
PPC_FUNC_IMPL(__imp__sub_83B8BF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9688
	ctx.r3.s64 = ctx.r11.s64 + -9688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BF6C"))) PPC_WEAK_FUNC(sub_83B8BF6C);
PPC_FUNC_IMPL(__imp__sub_83B8BF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BF70"))) PPC_WEAK_FUNC(sub_83B8BF70);
PPC_FUNC_IMPL(__imp__sub_83B8BF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9680
	ctx.r3.s64 = ctx.r11.s64 + -9680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BF7C"))) PPC_WEAK_FUNC(sub_83B8BF7C);
PPC_FUNC_IMPL(__imp__sub_83B8BF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BF80"))) PPC_WEAK_FUNC(sub_83B8BF80);
PPC_FUNC_IMPL(__imp__sub_83B8BF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9672
	ctx.r3.s64 = ctx.r11.s64 + -9672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BF8C"))) PPC_WEAK_FUNC(sub_83B8BF8C);
PPC_FUNC_IMPL(__imp__sub_83B8BF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BF90"))) PPC_WEAK_FUNC(sub_83B8BF90);
PPC_FUNC_IMPL(__imp__sub_83B8BF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9664
	ctx.r3.s64 = ctx.r11.s64 + -9664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BF9C"))) PPC_WEAK_FUNC(sub_83B8BF9C);
PPC_FUNC_IMPL(__imp__sub_83B8BF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BFA0"))) PPC_WEAK_FUNC(sub_83B8BFA0);
PPC_FUNC_IMPL(__imp__sub_83B8BFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9656
	ctx.r3.s64 = ctx.r11.s64 + -9656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BFAC"))) PPC_WEAK_FUNC(sub_83B8BFAC);
PPC_FUNC_IMPL(__imp__sub_83B8BFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BFB0"))) PPC_WEAK_FUNC(sub_83B8BFB0);
PPC_FUNC_IMPL(__imp__sub_83B8BFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9648
	ctx.r3.s64 = ctx.r11.s64 + -9648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BFBC"))) PPC_WEAK_FUNC(sub_83B8BFBC);
PPC_FUNC_IMPL(__imp__sub_83B8BFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BFC0"))) PPC_WEAK_FUNC(sub_83B8BFC0);
PPC_FUNC_IMPL(__imp__sub_83B8BFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9640
	ctx.r3.s64 = ctx.r11.s64 + -9640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BFCC"))) PPC_WEAK_FUNC(sub_83B8BFCC);
PPC_FUNC_IMPL(__imp__sub_83B8BFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BFD0"))) PPC_WEAK_FUNC(sub_83B8BFD0);
PPC_FUNC_IMPL(__imp__sub_83B8BFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9632
	ctx.r3.s64 = ctx.r11.s64 + -9632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BFDC"))) PPC_WEAK_FUNC(sub_83B8BFDC);
PPC_FUNC_IMPL(__imp__sub_83B8BFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BFE0"))) PPC_WEAK_FUNC(sub_83B8BFE0);
PPC_FUNC_IMPL(__imp__sub_83B8BFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9624
	ctx.r3.s64 = ctx.r11.s64 + -9624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BFEC"))) PPC_WEAK_FUNC(sub_83B8BFEC);
PPC_FUNC_IMPL(__imp__sub_83B8BFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8BFF0"))) PPC_WEAK_FUNC(sub_83B8BFF0);
PPC_FUNC_IMPL(__imp__sub_83B8BFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9616
	ctx.r3.s64 = ctx.r11.s64 + -9616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8BFFC"))) PPC_WEAK_FUNC(sub_83B8BFFC);
PPC_FUNC_IMPL(__imp__sub_83B8BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8C000"))) PPC_WEAK_FUNC(sub_83B8C000);
PPC_FUNC_IMPL(__imp__sub_83B8C000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9608
	ctx.r3.s64 = ctx.r11.s64 + -9608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8C00C"))) PPC_WEAK_FUNC(sub_83B8C00C);
PPC_FUNC_IMPL(__imp__sub_83B8C00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8C010"))) PPC_WEAK_FUNC(sub_83B8C010);
PPC_FUNC_IMPL(__imp__sub_83B8C010) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9236
	ctx.r7.s64 = ctx.r8.s64 + -9236;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9236(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9236);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9236(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9236, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8C038"))) PPC_WEAK_FUNC(sub_83B8C038);
PPC_FUNC_IMPL(__imp__sub_83B8C038) {
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
	// addi r3,r11,-9240
	ctx.r3.s64 = ctx.r11.s64 + -9240;
	// bl 0x83523120
	ctx.lr = 0x83B8C050;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-9600
	ctx.r3.s64 = ctx.r10.s64 + -9600;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8C05C;
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

__attribute__((alias("__imp__sub_83B8C06C"))) PPC_WEAK_FUNC(sub_83B8C06C);
PPC_FUNC_IMPL(__imp__sub_83B8C06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8C070"))) PPC_WEAK_FUNC(sub_83B8C070);
PPC_FUNC_IMPL(__imp__sub_83B8C070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9584
	ctx.r3.s64 = ctx.r11.s64 + -9584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8C07C"))) PPC_WEAK_FUNC(sub_83B8C07C);
PPC_FUNC_IMPL(__imp__sub_83B8C07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8C080"))) PPC_WEAK_FUNC(sub_83B8C080);
PPC_FUNC_IMPL(__imp__sub_83B8C080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9576
	ctx.r3.s64 = ctx.r11.s64 + -9576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8C08C"))) PPC_WEAK_FUNC(sub_83B8C08C);
PPC_FUNC_IMPL(__imp__sub_83B8C08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8C090"))) PPC_WEAK_FUNC(sub_83B8C090);
PPC_FUNC_IMPL(__imp__sub_83B8C090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9568
	ctx.r3.s64 = ctx.r11.s64 + -9568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8C09C"))) PPC_WEAK_FUNC(sub_83B8C09C);
PPC_FUNC_IMPL(__imp__sub_83B8C09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8C0A0"))) PPC_WEAK_FUNC(sub_83B8C0A0);
PPC_FUNC_IMPL(__imp__sub_83B8C0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9560
	ctx.r3.s64 = ctx.r11.s64 + -9560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8C0AC"))) PPC_WEAK_FUNC(sub_83B8C0AC);
PPC_FUNC_IMPL(__imp__sub_83B8C0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8C0B0"))) PPC_WEAK_FUNC(sub_83B8C0B0);
PPC_FUNC_IMPL(__imp__sub_83B8C0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-9552
	ctx.r3.s64 = ctx.r11.s64 + -9552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

