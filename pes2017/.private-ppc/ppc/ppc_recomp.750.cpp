#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C2EFEC"))) PPC_WEAK_FUNC(sub_83C2EFEC);
PPC_FUNC_IMPL(__imp__sub_83C2EFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EFF0"))) PPC_WEAK_FUNC(sub_83C2EFF0);
PPC_FUNC_IMPL(__imp__sub_83C2EFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12456
	ctx.r3.s64 = ctx.r11.s64 + 12456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EFFC"))) PPC_WEAK_FUNC(sub_83C2EFFC);
PPC_FUNC_IMPL(__imp__sub_83C2EFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F000"))) PPC_WEAK_FUNC(sub_83C2F000);
PPC_FUNC_IMPL(__imp__sub_83C2F000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F00C"))) PPC_WEAK_FUNC(sub_83C2F00C);
PPC_FUNC_IMPL(__imp__sub_83C2F00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F010"))) PPC_WEAK_FUNC(sub_83C2F010);
PPC_FUNC_IMPL(__imp__sub_83C2F010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12472
	ctx.r3.s64 = ctx.r11.s64 + 12472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F01C"))) PPC_WEAK_FUNC(sub_83C2F01C);
PPC_FUNC_IMPL(__imp__sub_83C2F01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F020"))) PPC_WEAK_FUNC(sub_83C2F020);
PPC_FUNC_IMPL(__imp__sub_83C2F020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12480
	ctx.r3.s64 = ctx.r11.s64 + 12480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F02C"))) PPC_WEAK_FUNC(sub_83C2F02C);
PPC_FUNC_IMPL(__imp__sub_83C2F02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F030"))) PPC_WEAK_FUNC(sub_83C2F030);
PPC_FUNC_IMPL(__imp__sub_83C2F030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12488
	ctx.r3.s64 = ctx.r11.s64 + 12488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F03C"))) PPC_WEAK_FUNC(sub_83C2F03C);
PPC_FUNC_IMPL(__imp__sub_83C2F03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F040"))) PPC_WEAK_FUNC(sub_83C2F040);
PPC_FUNC_IMPL(__imp__sub_83C2F040) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,2464
	ctx.r3.s64 = ctx.r11.s64 + 2464;
	// bl 0x83523120
	ctx.lr = 0x83C2F058;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,12496
	ctx.r3.s64 = ctx.r10.s64 + 12496;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2F064;
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

__attribute__((alias("__imp__sub_83C2F074"))) PPC_WEAK_FUNC(sub_83C2F074);
PPC_FUNC_IMPL(__imp__sub_83C2F074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F078"))) PPC_WEAK_FUNC(sub_83C2F078);
PPC_FUNC_IMPL(__imp__sub_83C2F078) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2480
	ctx.r7.s64 = ctx.r8.s64 + 2480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2480(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2F0A0"))) PPC_WEAK_FUNC(sub_83C2F0A0);
PPC_FUNC_IMPL(__imp__sub_83C2F0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,29064
	ctx.r6.s64 = ctx.r7.s64 + 29064;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28992(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28992);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2480(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2480);
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
	// std r9,29064(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29064, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2F0E8"))) PPC_WEAK_FUNC(sub_83C2F0E8);
PPC_FUNC_IMPL(__imp__sub_83C2F0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12512
	ctx.r3.s64 = ctx.r11.s64 + 12512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F0F4"))) PPC_WEAK_FUNC(sub_83C2F0F4);
PPC_FUNC_IMPL(__imp__sub_83C2F0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F0F8"))) PPC_WEAK_FUNC(sub_83C2F0F8);
PPC_FUNC_IMPL(__imp__sub_83C2F0F8) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,2488
	ctx.r3.s64 = ctx.r11.s64 + 2488;
	// bl 0x8259af80
	ctx.lr = 0x83C2F110;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,12528
	ctx.r3.s64 = ctx.r10.s64 + 12528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2F11C;
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

__attribute__((alias("__imp__sub_83C2F12C"))) PPC_WEAK_FUNC(sub_83C2F12C);
PPC_FUNC_IMPL(__imp__sub_83C2F12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F130"))) PPC_WEAK_FUNC(sub_83C2F130);
PPC_FUNC_IMPL(__imp__sub_83C2F130) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2468
	ctx.r11.s64 = ctx.r8.s64 + 2468;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,29040(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29040);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12520
	ctx.r3.s64 = ctx.r6.s64 + 12520;
	// stw r10,2468(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2468, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F160"))) PPC_WEAK_FUNC(sub_83C2F160);
PPC_FUNC_IMPL(__imp__sub_83C2F160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12536
	ctx.r3.s64 = ctx.r11.s64 + 12536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F16C"))) PPC_WEAK_FUNC(sub_83C2F16C);
PPC_FUNC_IMPL(__imp__sub_83C2F16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F170"))) PPC_WEAK_FUNC(sub_83C2F170);
PPC_FUNC_IMPL(__imp__sub_83C2F170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12544
	ctx.r3.s64 = ctx.r11.s64 + 12544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F17C"))) PPC_WEAK_FUNC(sub_83C2F17C);
PPC_FUNC_IMPL(__imp__sub_83C2F17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F180"))) PPC_WEAK_FUNC(sub_83C2F180);
PPC_FUNC_IMPL(__imp__sub_83C2F180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12552
	ctx.r3.s64 = ctx.r11.s64 + 12552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F18C"))) PPC_WEAK_FUNC(sub_83C2F18C);
PPC_FUNC_IMPL(__imp__sub_83C2F18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F190"))) PPC_WEAK_FUNC(sub_83C2F190);
PPC_FUNC_IMPL(__imp__sub_83C2F190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12560
	ctx.r3.s64 = ctx.r11.s64 + 12560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F19C"))) PPC_WEAK_FUNC(sub_83C2F19C);
PPC_FUNC_IMPL(__imp__sub_83C2F19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F1A0"))) PPC_WEAK_FUNC(sub_83C2F1A0);
PPC_FUNC_IMPL(__imp__sub_83C2F1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12568
	ctx.r3.s64 = ctx.r11.s64 + 12568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F1AC"))) PPC_WEAK_FUNC(sub_83C2F1AC);
PPC_FUNC_IMPL(__imp__sub_83C2F1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F1B0"))) PPC_WEAK_FUNC(sub_83C2F1B0);
PPC_FUNC_IMPL(__imp__sub_83C2F1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12576
	ctx.r3.s64 = ctx.r11.s64 + 12576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F1BC"))) PPC_WEAK_FUNC(sub_83C2F1BC);
PPC_FUNC_IMPL(__imp__sub_83C2F1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F1C0"))) PPC_WEAK_FUNC(sub_83C2F1C0);
PPC_FUNC_IMPL(__imp__sub_83C2F1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12584
	ctx.r3.s64 = ctx.r11.s64 + 12584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F1CC"))) PPC_WEAK_FUNC(sub_83C2F1CC);
PPC_FUNC_IMPL(__imp__sub_83C2F1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F1D0"))) PPC_WEAK_FUNC(sub_83C2F1D0);
PPC_FUNC_IMPL(__imp__sub_83C2F1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12592
	ctx.r3.s64 = ctx.r11.s64 + 12592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F1DC"))) PPC_WEAK_FUNC(sub_83C2F1DC);
PPC_FUNC_IMPL(__imp__sub_83C2F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F1E0"))) PPC_WEAK_FUNC(sub_83C2F1E0);
PPC_FUNC_IMPL(__imp__sub_83C2F1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12600
	ctx.r3.s64 = ctx.r11.s64 + 12600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F1EC"))) PPC_WEAK_FUNC(sub_83C2F1EC);
PPC_FUNC_IMPL(__imp__sub_83C2F1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F1F0"))) PPC_WEAK_FUNC(sub_83C2F1F0);
PPC_FUNC_IMPL(__imp__sub_83C2F1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12608
	ctx.r3.s64 = ctx.r11.s64 + 12608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F1FC"))) PPC_WEAK_FUNC(sub_83C2F1FC);
PPC_FUNC_IMPL(__imp__sub_83C2F1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F200"))) PPC_WEAK_FUNC(sub_83C2F200);
PPC_FUNC_IMPL(__imp__sub_83C2F200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12616
	ctx.r3.s64 = ctx.r11.s64 + 12616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F20C"))) PPC_WEAK_FUNC(sub_83C2F20C);
PPC_FUNC_IMPL(__imp__sub_83C2F20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F210"))) PPC_WEAK_FUNC(sub_83C2F210);
PPC_FUNC_IMPL(__imp__sub_83C2F210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12624
	ctx.r3.s64 = ctx.r11.s64 + 12624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F21C"))) PPC_WEAK_FUNC(sub_83C2F21C);
PPC_FUNC_IMPL(__imp__sub_83C2F21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F220"))) PPC_WEAK_FUNC(sub_83C2F220);
PPC_FUNC_IMPL(__imp__sub_83C2F220) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// bl 0x83523120
	ctx.lr = 0x83C2F238;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,12632
	ctx.r3.s64 = ctx.r10.s64 + 12632;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2F244;
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

__attribute__((alias("__imp__sub_83C2F254"))) PPC_WEAK_FUNC(sub_83C2F254);
PPC_FUNC_IMPL(__imp__sub_83C2F254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F258"))) PPC_WEAK_FUNC(sub_83C2F258);
PPC_FUNC_IMPL(__imp__sub_83C2F258) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2848
	ctx.r7.s64 = ctx.r8.s64 + 2848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2848);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2848(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2848, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2F280"))) PPC_WEAK_FUNC(sub_83C2F280);
PPC_FUNC_IMPL(__imp__sub_83C2F280) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,29192
	ctx.r6.s64 = ctx.r7.s64 + 29192;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29120(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29120);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2848);
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
	// std r9,29192(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29192, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2F2C8"))) PPC_WEAK_FUNC(sub_83C2F2C8);
PPC_FUNC_IMPL(__imp__sub_83C2F2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12648
	ctx.r3.s64 = ctx.r11.s64 + 12648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F2D4"))) PPC_WEAK_FUNC(sub_83C2F2D4);
PPC_FUNC_IMPL(__imp__sub_83C2F2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F2D8"))) PPC_WEAK_FUNC(sub_83C2F2D8);
PPC_FUNC_IMPL(__imp__sub_83C2F2D8) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,2856
	ctx.r3.s64 = ctx.r11.s64 + 2856;
	// bl 0x8259af80
	ctx.lr = 0x83C2F2F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,12664
	ctx.r3.s64 = ctx.r10.s64 + 12664;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2F2FC;
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

__attribute__((alias("__imp__sub_83C2F30C"))) PPC_WEAK_FUNC(sub_83C2F30C);
PPC_FUNC_IMPL(__imp__sub_83C2F30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F310"))) PPC_WEAK_FUNC(sub_83C2F310);
PPC_FUNC_IMPL(__imp__sub_83C2F310) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2836
	ctx.r11.s64 = ctx.r8.s64 + 2836;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,29168(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29168);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12656
	ctx.r3.s64 = ctx.r6.s64 + 12656;
	// stw r10,2836(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2836, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F340"))) PPC_WEAK_FUNC(sub_83C2F340);
PPC_FUNC_IMPL(__imp__sub_83C2F340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12672
	ctx.r3.s64 = ctx.r11.s64 + 12672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F34C"))) PPC_WEAK_FUNC(sub_83C2F34C);
PPC_FUNC_IMPL(__imp__sub_83C2F34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F350"))) PPC_WEAK_FUNC(sub_83C2F350);
PPC_FUNC_IMPL(__imp__sub_83C2F350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12680
	ctx.r3.s64 = ctx.r11.s64 + 12680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F35C"))) PPC_WEAK_FUNC(sub_83C2F35C);
PPC_FUNC_IMPL(__imp__sub_83C2F35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F360"))) PPC_WEAK_FUNC(sub_83C2F360);
PPC_FUNC_IMPL(__imp__sub_83C2F360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12688
	ctx.r3.s64 = ctx.r11.s64 + 12688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F36C"))) PPC_WEAK_FUNC(sub_83C2F36C);
PPC_FUNC_IMPL(__imp__sub_83C2F36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F370"))) PPC_WEAK_FUNC(sub_83C2F370);
PPC_FUNC_IMPL(__imp__sub_83C2F370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12696
	ctx.r3.s64 = ctx.r11.s64 + 12696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F37C"))) PPC_WEAK_FUNC(sub_83C2F37C);
PPC_FUNC_IMPL(__imp__sub_83C2F37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F380"))) PPC_WEAK_FUNC(sub_83C2F380);
PPC_FUNC_IMPL(__imp__sub_83C2F380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12704
	ctx.r3.s64 = ctx.r11.s64 + 12704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F38C"))) PPC_WEAK_FUNC(sub_83C2F38C);
PPC_FUNC_IMPL(__imp__sub_83C2F38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F390"))) PPC_WEAK_FUNC(sub_83C2F390);
PPC_FUNC_IMPL(__imp__sub_83C2F390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12712
	ctx.r3.s64 = ctx.r11.s64 + 12712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F39C"))) PPC_WEAK_FUNC(sub_83C2F39C);
PPC_FUNC_IMPL(__imp__sub_83C2F39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F3A0"))) PPC_WEAK_FUNC(sub_83C2F3A0);
PPC_FUNC_IMPL(__imp__sub_83C2F3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12720
	ctx.r3.s64 = ctx.r11.s64 + 12720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F3AC"))) PPC_WEAK_FUNC(sub_83C2F3AC);
PPC_FUNC_IMPL(__imp__sub_83C2F3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F3B0"))) PPC_WEAK_FUNC(sub_83C2F3B0);
PPC_FUNC_IMPL(__imp__sub_83C2F3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12728
	ctx.r3.s64 = ctx.r11.s64 + 12728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F3BC"))) PPC_WEAK_FUNC(sub_83C2F3BC);
PPC_FUNC_IMPL(__imp__sub_83C2F3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F3C0"))) PPC_WEAK_FUNC(sub_83C2F3C0);
PPC_FUNC_IMPL(__imp__sub_83C2F3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12736
	ctx.r3.s64 = ctx.r11.s64 + 12736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F3CC"))) PPC_WEAK_FUNC(sub_83C2F3CC);
PPC_FUNC_IMPL(__imp__sub_83C2F3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F3D0"))) PPC_WEAK_FUNC(sub_83C2F3D0);
PPC_FUNC_IMPL(__imp__sub_83C2F3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12744
	ctx.r3.s64 = ctx.r11.s64 + 12744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F3DC"))) PPC_WEAK_FUNC(sub_83C2F3DC);
PPC_FUNC_IMPL(__imp__sub_83C2F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F3E0"))) PPC_WEAK_FUNC(sub_83C2F3E0);
PPC_FUNC_IMPL(__imp__sub_83C2F3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12752
	ctx.r3.s64 = ctx.r11.s64 + 12752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F3EC"))) PPC_WEAK_FUNC(sub_83C2F3EC);
PPC_FUNC_IMPL(__imp__sub_83C2F3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F3F0"))) PPC_WEAK_FUNC(sub_83C2F3F0);
PPC_FUNC_IMPL(__imp__sub_83C2F3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12760
	ctx.r3.s64 = ctx.r11.s64 + 12760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F3FC"))) PPC_WEAK_FUNC(sub_83C2F3FC);
PPC_FUNC_IMPL(__imp__sub_83C2F3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F400"))) PPC_WEAK_FUNC(sub_83C2F400);
PPC_FUNC_IMPL(__imp__sub_83C2F400) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,3200
	ctx.r3.s64 = ctx.r11.s64 + 3200;
	// bl 0x83523120
	ctx.lr = 0x83C2F418;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,12768
	ctx.r3.s64 = ctx.r10.s64 + 12768;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2F424;
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

__attribute__((alias("__imp__sub_83C2F434"))) PPC_WEAK_FUNC(sub_83C2F434);
PPC_FUNC_IMPL(__imp__sub_83C2F434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F438"))) PPC_WEAK_FUNC(sub_83C2F438);
PPC_FUNC_IMPL(__imp__sub_83C2F438) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3216
	ctx.r7.s64 = ctx.r8.s64 + 3216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2F460"))) PPC_WEAK_FUNC(sub_83C2F460);
PPC_FUNC_IMPL(__imp__sub_83C2F460) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,29320
	ctx.r6.s64 = ctx.r7.s64 + 29320;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29248(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29248);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3216);
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
	// std r9,29320(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29320, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2F4A8"))) PPC_WEAK_FUNC(sub_83C2F4A8);
PPC_FUNC_IMPL(__imp__sub_83C2F4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12784
	ctx.r3.s64 = ctx.r11.s64 + 12784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F4B4"))) PPC_WEAK_FUNC(sub_83C2F4B4);
PPC_FUNC_IMPL(__imp__sub_83C2F4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F4B8"))) PPC_WEAK_FUNC(sub_83C2F4B8);
PPC_FUNC_IMPL(__imp__sub_83C2F4B8) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,3224
	ctx.r3.s64 = ctx.r11.s64 + 3224;
	// bl 0x8259af80
	ctx.lr = 0x83C2F4D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,12800
	ctx.r3.s64 = ctx.r10.s64 + 12800;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2F4DC;
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

__attribute__((alias("__imp__sub_83C2F4EC"))) PPC_WEAK_FUNC(sub_83C2F4EC);
PPC_FUNC_IMPL(__imp__sub_83C2F4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F4F0"))) PPC_WEAK_FUNC(sub_83C2F4F0);
PPC_FUNC_IMPL(__imp__sub_83C2F4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3204
	ctx.r11.s64 = ctx.r8.s64 + 3204;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,29296(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29296);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12792
	ctx.r3.s64 = ctx.r6.s64 + 12792;
	// stw r10,3204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3204, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F520"))) PPC_WEAK_FUNC(sub_83C2F520);
PPC_FUNC_IMPL(__imp__sub_83C2F520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12808
	ctx.r3.s64 = ctx.r11.s64 + 12808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F52C"))) PPC_WEAK_FUNC(sub_83C2F52C);
PPC_FUNC_IMPL(__imp__sub_83C2F52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F530"))) PPC_WEAK_FUNC(sub_83C2F530);
PPC_FUNC_IMPL(__imp__sub_83C2F530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12816
	ctx.r3.s64 = ctx.r11.s64 + 12816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F53C"))) PPC_WEAK_FUNC(sub_83C2F53C);
PPC_FUNC_IMPL(__imp__sub_83C2F53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F540"))) PPC_WEAK_FUNC(sub_83C2F540);
PPC_FUNC_IMPL(__imp__sub_83C2F540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12824
	ctx.r3.s64 = ctx.r11.s64 + 12824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F54C"))) PPC_WEAK_FUNC(sub_83C2F54C);
PPC_FUNC_IMPL(__imp__sub_83C2F54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F550"))) PPC_WEAK_FUNC(sub_83C2F550);
PPC_FUNC_IMPL(__imp__sub_83C2F550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12832
	ctx.r3.s64 = ctx.r11.s64 + 12832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F55C"))) PPC_WEAK_FUNC(sub_83C2F55C);
PPC_FUNC_IMPL(__imp__sub_83C2F55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F560"))) PPC_WEAK_FUNC(sub_83C2F560);
PPC_FUNC_IMPL(__imp__sub_83C2F560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12840
	ctx.r3.s64 = ctx.r11.s64 + 12840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F56C"))) PPC_WEAK_FUNC(sub_83C2F56C);
PPC_FUNC_IMPL(__imp__sub_83C2F56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F570"))) PPC_WEAK_FUNC(sub_83C2F570);
PPC_FUNC_IMPL(__imp__sub_83C2F570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12848
	ctx.r3.s64 = ctx.r11.s64 + 12848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F57C"))) PPC_WEAK_FUNC(sub_83C2F57C);
PPC_FUNC_IMPL(__imp__sub_83C2F57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F580"))) PPC_WEAK_FUNC(sub_83C2F580);
PPC_FUNC_IMPL(__imp__sub_83C2F580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12856
	ctx.r3.s64 = ctx.r11.s64 + 12856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F58C"))) PPC_WEAK_FUNC(sub_83C2F58C);
PPC_FUNC_IMPL(__imp__sub_83C2F58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F590"))) PPC_WEAK_FUNC(sub_83C2F590);
PPC_FUNC_IMPL(__imp__sub_83C2F590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12864
	ctx.r3.s64 = ctx.r11.s64 + 12864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F59C"))) PPC_WEAK_FUNC(sub_83C2F59C);
PPC_FUNC_IMPL(__imp__sub_83C2F59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F5A0"))) PPC_WEAK_FUNC(sub_83C2F5A0);
PPC_FUNC_IMPL(__imp__sub_83C2F5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12872
	ctx.r3.s64 = ctx.r11.s64 + 12872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F5AC"))) PPC_WEAK_FUNC(sub_83C2F5AC);
PPC_FUNC_IMPL(__imp__sub_83C2F5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F5B0"))) PPC_WEAK_FUNC(sub_83C2F5B0);
PPC_FUNC_IMPL(__imp__sub_83C2F5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12880
	ctx.r3.s64 = ctx.r11.s64 + 12880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F5BC"))) PPC_WEAK_FUNC(sub_83C2F5BC);
PPC_FUNC_IMPL(__imp__sub_83C2F5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F5C0"))) PPC_WEAK_FUNC(sub_83C2F5C0);
PPC_FUNC_IMPL(__imp__sub_83C2F5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12888
	ctx.r3.s64 = ctx.r11.s64 + 12888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F5CC"))) PPC_WEAK_FUNC(sub_83C2F5CC);
PPC_FUNC_IMPL(__imp__sub_83C2F5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F5D0"))) PPC_WEAK_FUNC(sub_83C2F5D0);
PPC_FUNC_IMPL(__imp__sub_83C2F5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12896
	ctx.r3.s64 = ctx.r11.s64 + 12896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F5DC"))) PPC_WEAK_FUNC(sub_83C2F5DC);
PPC_FUNC_IMPL(__imp__sub_83C2F5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F5E0"))) PPC_WEAK_FUNC(sub_83C2F5E0);
PPC_FUNC_IMPL(__imp__sub_83C2F5E0) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,3568
	ctx.r3.s64 = ctx.r11.s64 + 3568;
	// bl 0x83523120
	ctx.lr = 0x83C2F5F8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,12904
	ctx.r3.s64 = ctx.r10.s64 + 12904;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2F604;
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

__attribute__((alias("__imp__sub_83C2F614"))) PPC_WEAK_FUNC(sub_83C2F614);
PPC_FUNC_IMPL(__imp__sub_83C2F614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F618"))) PPC_WEAK_FUNC(sub_83C2F618);
PPC_FUNC_IMPL(__imp__sub_83C2F618) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3584
	ctx.r7.s64 = ctx.r8.s64 + 3584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3584(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2F640"))) PPC_WEAK_FUNC(sub_83C2F640);
PPC_FUNC_IMPL(__imp__sub_83C2F640) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,29448
	ctx.r6.s64 = ctx.r7.s64 + 29448;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29376(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29376);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3584(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3584);
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
	// std r9,29448(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29448, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2F688"))) PPC_WEAK_FUNC(sub_83C2F688);
PPC_FUNC_IMPL(__imp__sub_83C2F688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12920
	ctx.r3.s64 = ctx.r11.s64 + 12920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F694"))) PPC_WEAK_FUNC(sub_83C2F694);
PPC_FUNC_IMPL(__imp__sub_83C2F694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F698"))) PPC_WEAK_FUNC(sub_83C2F698);
PPC_FUNC_IMPL(__imp__sub_83C2F698) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,3592
	ctx.r3.s64 = ctx.r11.s64 + 3592;
	// bl 0x8259af80
	ctx.lr = 0x83C2F6B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,12936
	ctx.r3.s64 = ctx.r10.s64 + 12936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2F6BC;
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

__attribute__((alias("__imp__sub_83C2F6CC"))) PPC_WEAK_FUNC(sub_83C2F6CC);
PPC_FUNC_IMPL(__imp__sub_83C2F6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F6D0"))) PPC_WEAK_FUNC(sub_83C2F6D0);
PPC_FUNC_IMPL(__imp__sub_83C2F6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3572
	ctx.r11.s64 = ctx.r8.s64 + 3572;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,29424(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29424);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12928
	ctx.r3.s64 = ctx.r6.s64 + 12928;
	// stw r10,3572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3572, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F700"))) PPC_WEAK_FUNC(sub_83C2F700);
PPC_FUNC_IMPL(__imp__sub_83C2F700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12944
	ctx.r3.s64 = ctx.r11.s64 + 12944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F70C"))) PPC_WEAK_FUNC(sub_83C2F70C);
PPC_FUNC_IMPL(__imp__sub_83C2F70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F710"))) PPC_WEAK_FUNC(sub_83C2F710);
PPC_FUNC_IMPL(__imp__sub_83C2F710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12952
	ctx.r3.s64 = ctx.r11.s64 + 12952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F71C"))) PPC_WEAK_FUNC(sub_83C2F71C);
PPC_FUNC_IMPL(__imp__sub_83C2F71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F720"))) PPC_WEAK_FUNC(sub_83C2F720);
PPC_FUNC_IMPL(__imp__sub_83C2F720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12960
	ctx.r3.s64 = ctx.r11.s64 + 12960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F72C"))) PPC_WEAK_FUNC(sub_83C2F72C);
PPC_FUNC_IMPL(__imp__sub_83C2F72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F730"))) PPC_WEAK_FUNC(sub_83C2F730);
PPC_FUNC_IMPL(__imp__sub_83C2F730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12968
	ctx.r3.s64 = ctx.r11.s64 + 12968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F73C"))) PPC_WEAK_FUNC(sub_83C2F73C);
PPC_FUNC_IMPL(__imp__sub_83C2F73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F740"))) PPC_WEAK_FUNC(sub_83C2F740);
PPC_FUNC_IMPL(__imp__sub_83C2F740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12976
	ctx.r3.s64 = ctx.r11.s64 + 12976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F74C"))) PPC_WEAK_FUNC(sub_83C2F74C);
PPC_FUNC_IMPL(__imp__sub_83C2F74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F750"))) PPC_WEAK_FUNC(sub_83C2F750);
PPC_FUNC_IMPL(__imp__sub_83C2F750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12984
	ctx.r3.s64 = ctx.r11.s64 + 12984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F75C"))) PPC_WEAK_FUNC(sub_83C2F75C);
PPC_FUNC_IMPL(__imp__sub_83C2F75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F760"))) PPC_WEAK_FUNC(sub_83C2F760);
PPC_FUNC_IMPL(__imp__sub_83C2F760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12992
	ctx.r3.s64 = ctx.r11.s64 + 12992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F76C"))) PPC_WEAK_FUNC(sub_83C2F76C);
PPC_FUNC_IMPL(__imp__sub_83C2F76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F770"))) PPC_WEAK_FUNC(sub_83C2F770);
PPC_FUNC_IMPL(__imp__sub_83C2F770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13000
	ctx.r3.s64 = ctx.r11.s64 + 13000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F77C"))) PPC_WEAK_FUNC(sub_83C2F77C);
PPC_FUNC_IMPL(__imp__sub_83C2F77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F780"))) PPC_WEAK_FUNC(sub_83C2F780);
PPC_FUNC_IMPL(__imp__sub_83C2F780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13008
	ctx.r3.s64 = ctx.r11.s64 + 13008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F78C"))) PPC_WEAK_FUNC(sub_83C2F78C);
PPC_FUNC_IMPL(__imp__sub_83C2F78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F790"))) PPC_WEAK_FUNC(sub_83C2F790);
PPC_FUNC_IMPL(__imp__sub_83C2F790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13016
	ctx.r3.s64 = ctx.r11.s64 + 13016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F79C"))) PPC_WEAK_FUNC(sub_83C2F79C);
PPC_FUNC_IMPL(__imp__sub_83C2F79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F7A0"))) PPC_WEAK_FUNC(sub_83C2F7A0);
PPC_FUNC_IMPL(__imp__sub_83C2F7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13024
	ctx.r3.s64 = ctx.r11.s64 + 13024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F7AC"))) PPC_WEAK_FUNC(sub_83C2F7AC);
PPC_FUNC_IMPL(__imp__sub_83C2F7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F7B0"))) PPC_WEAK_FUNC(sub_83C2F7B0);
PPC_FUNC_IMPL(__imp__sub_83C2F7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13032
	ctx.r3.s64 = ctx.r11.s64 + 13032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F7BC"))) PPC_WEAK_FUNC(sub_83C2F7BC);
PPC_FUNC_IMPL(__imp__sub_83C2F7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F7C0"))) PPC_WEAK_FUNC(sub_83C2F7C0);
PPC_FUNC_IMPL(__imp__sub_83C2F7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13040
	ctx.r3.s64 = ctx.r11.s64 + 13040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F7CC"))) PPC_WEAK_FUNC(sub_83C2F7CC);
PPC_FUNC_IMPL(__imp__sub_83C2F7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F7D0"))) PPC_WEAK_FUNC(sub_83C2F7D0);
PPC_FUNC_IMPL(__imp__sub_83C2F7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13048
	ctx.r3.s64 = ctx.r11.s64 + 13048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F7DC"))) PPC_WEAK_FUNC(sub_83C2F7DC);
PPC_FUNC_IMPL(__imp__sub_83C2F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F7E0"))) PPC_WEAK_FUNC(sub_83C2F7E0);
PPC_FUNC_IMPL(__imp__sub_83C2F7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13056
	ctx.r3.s64 = ctx.r11.s64 + 13056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F7EC"))) PPC_WEAK_FUNC(sub_83C2F7EC);
PPC_FUNC_IMPL(__imp__sub_83C2F7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F7F0"))) PPC_WEAK_FUNC(sub_83C2F7F0);
PPC_FUNC_IMPL(__imp__sub_83C2F7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13064
	ctx.r3.s64 = ctx.r11.s64 + 13064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F7FC"))) PPC_WEAK_FUNC(sub_83C2F7FC);
PPC_FUNC_IMPL(__imp__sub_83C2F7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F800"))) PPC_WEAK_FUNC(sub_83C2F800);
PPC_FUNC_IMPL(__imp__sub_83C2F800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13072
	ctx.r3.s64 = ctx.r11.s64 + 13072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F80C"))) PPC_WEAK_FUNC(sub_83C2F80C);
PPC_FUNC_IMPL(__imp__sub_83C2F80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F810"))) PPC_WEAK_FUNC(sub_83C2F810);
PPC_FUNC_IMPL(__imp__sub_83C2F810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13080
	ctx.r3.s64 = ctx.r11.s64 + 13080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F81C"))) PPC_WEAK_FUNC(sub_83C2F81C);
PPC_FUNC_IMPL(__imp__sub_83C2F81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F820"))) PPC_WEAK_FUNC(sub_83C2F820);
PPC_FUNC_IMPL(__imp__sub_83C2F820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13088
	ctx.r3.s64 = ctx.r11.s64 + 13088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F82C"))) PPC_WEAK_FUNC(sub_83C2F82C);
PPC_FUNC_IMPL(__imp__sub_83C2F82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F830"))) PPC_WEAK_FUNC(sub_83C2F830);
PPC_FUNC_IMPL(__imp__sub_83C2F830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13096
	ctx.r3.s64 = ctx.r11.s64 + 13096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F83C"))) PPC_WEAK_FUNC(sub_83C2F83C);
PPC_FUNC_IMPL(__imp__sub_83C2F83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F840"))) PPC_WEAK_FUNC(sub_83C2F840);
PPC_FUNC_IMPL(__imp__sub_83C2F840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13104
	ctx.r3.s64 = ctx.r11.s64 + 13104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F84C"))) PPC_WEAK_FUNC(sub_83C2F84C);
PPC_FUNC_IMPL(__imp__sub_83C2F84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F850"))) PPC_WEAK_FUNC(sub_83C2F850);
PPC_FUNC_IMPL(__imp__sub_83C2F850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13112
	ctx.r3.s64 = ctx.r11.s64 + 13112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F85C"))) PPC_WEAK_FUNC(sub_83C2F85C);
PPC_FUNC_IMPL(__imp__sub_83C2F85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F860"))) PPC_WEAK_FUNC(sub_83C2F860);
PPC_FUNC_IMPL(__imp__sub_83C2F860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13120
	ctx.r3.s64 = ctx.r11.s64 + 13120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F86C"))) PPC_WEAK_FUNC(sub_83C2F86C);
PPC_FUNC_IMPL(__imp__sub_83C2F86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F870"))) PPC_WEAK_FUNC(sub_83C2F870);
PPC_FUNC_IMPL(__imp__sub_83C2F870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13128
	ctx.r3.s64 = ctx.r11.s64 + 13128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F87C"))) PPC_WEAK_FUNC(sub_83C2F87C);
PPC_FUNC_IMPL(__imp__sub_83C2F87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F880"))) PPC_WEAK_FUNC(sub_83C2F880);
PPC_FUNC_IMPL(__imp__sub_83C2F880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13136
	ctx.r3.s64 = ctx.r11.s64 + 13136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F88C"))) PPC_WEAK_FUNC(sub_83C2F88C);
PPC_FUNC_IMPL(__imp__sub_83C2F88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F890"))) PPC_WEAK_FUNC(sub_83C2F890);
PPC_FUNC_IMPL(__imp__sub_83C2F890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13144
	ctx.r3.s64 = ctx.r11.s64 + 13144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F89C"))) PPC_WEAK_FUNC(sub_83C2F89C);
PPC_FUNC_IMPL(__imp__sub_83C2F89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F8A0"))) PPC_WEAK_FUNC(sub_83C2F8A0);
PPC_FUNC_IMPL(__imp__sub_83C2F8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13152
	ctx.r3.s64 = ctx.r11.s64 + 13152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F8AC"))) PPC_WEAK_FUNC(sub_83C2F8AC);
PPC_FUNC_IMPL(__imp__sub_83C2F8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F8B0"))) PPC_WEAK_FUNC(sub_83C2F8B0);
PPC_FUNC_IMPL(__imp__sub_83C2F8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13160
	ctx.r3.s64 = ctx.r11.s64 + 13160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F8BC"))) PPC_WEAK_FUNC(sub_83C2F8BC);
PPC_FUNC_IMPL(__imp__sub_83C2F8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F8C0"))) PPC_WEAK_FUNC(sub_83C2F8C0);
PPC_FUNC_IMPL(__imp__sub_83C2F8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13168
	ctx.r3.s64 = ctx.r11.s64 + 13168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F8CC"))) PPC_WEAK_FUNC(sub_83C2F8CC);
PPC_FUNC_IMPL(__imp__sub_83C2F8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F8D0"))) PPC_WEAK_FUNC(sub_83C2F8D0);
PPC_FUNC_IMPL(__imp__sub_83C2F8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13176
	ctx.r3.s64 = ctx.r11.s64 + 13176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F8DC"))) PPC_WEAK_FUNC(sub_83C2F8DC);
PPC_FUNC_IMPL(__imp__sub_83C2F8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F8E0"))) PPC_WEAK_FUNC(sub_83C2F8E0);
PPC_FUNC_IMPL(__imp__sub_83C2F8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13184
	ctx.r3.s64 = ctx.r11.s64 + 13184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F8EC"))) PPC_WEAK_FUNC(sub_83C2F8EC);
PPC_FUNC_IMPL(__imp__sub_83C2F8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F8F0"))) PPC_WEAK_FUNC(sub_83C2F8F0);
PPC_FUNC_IMPL(__imp__sub_83C2F8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13192
	ctx.r3.s64 = ctx.r11.s64 + 13192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F8FC"))) PPC_WEAK_FUNC(sub_83C2F8FC);
PPC_FUNC_IMPL(__imp__sub_83C2F8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F900"))) PPC_WEAK_FUNC(sub_83C2F900);
PPC_FUNC_IMPL(__imp__sub_83C2F900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13200
	ctx.r3.s64 = ctx.r11.s64 + 13200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F90C"))) PPC_WEAK_FUNC(sub_83C2F90C);
PPC_FUNC_IMPL(__imp__sub_83C2F90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F910"))) PPC_WEAK_FUNC(sub_83C2F910);
PPC_FUNC_IMPL(__imp__sub_83C2F910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13208
	ctx.r3.s64 = ctx.r11.s64 + 13208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F91C"))) PPC_WEAK_FUNC(sub_83C2F91C);
PPC_FUNC_IMPL(__imp__sub_83C2F91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F920"))) PPC_WEAK_FUNC(sub_83C2F920);
PPC_FUNC_IMPL(__imp__sub_83C2F920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13216
	ctx.r3.s64 = ctx.r11.s64 + 13216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F92C"))) PPC_WEAK_FUNC(sub_83C2F92C);
PPC_FUNC_IMPL(__imp__sub_83C2F92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F930"))) PPC_WEAK_FUNC(sub_83C2F930);
PPC_FUNC_IMPL(__imp__sub_83C2F930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13224
	ctx.r3.s64 = ctx.r11.s64 + 13224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F93C"))) PPC_WEAK_FUNC(sub_83C2F93C);
PPC_FUNC_IMPL(__imp__sub_83C2F93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F940"))) PPC_WEAK_FUNC(sub_83C2F940);
PPC_FUNC_IMPL(__imp__sub_83C2F940) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,3944
	ctx.r3.s64 = ctx.r11.s64 + 3944;
	// bl 0x83523120
	ctx.lr = 0x83C2F958;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,13232
	ctx.r3.s64 = ctx.r10.s64 + 13232;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2F964;
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

__attribute__((alias("__imp__sub_83C2F974"))) PPC_WEAK_FUNC(sub_83C2F974);
PPC_FUNC_IMPL(__imp__sub_83C2F974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F978"))) PPC_WEAK_FUNC(sub_83C2F978);
PPC_FUNC_IMPL(__imp__sub_83C2F978) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3960
	ctx.r7.s64 = ctx.r8.s64 + 3960;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3960);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3960(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3960, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2F9A0"))) PPC_WEAK_FUNC(sub_83C2F9A0);
PPC_FUNC_IMPL(__imp__sub_83C2F9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,29784
	ctx.r6.s64 = ctx.r7.s64 + 29784;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29712(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29712);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3960(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3960);
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
	// std r9,29784(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29784, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2F9E8"))) PPC_WEAK_FUNC(sub_83C2F9E8);
PPC_FUNC_IMPL(__imp__sub_83C2F9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13248
	ctx.r3.s64 = ctx.r11.s64 + 13248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2F9F4"))) PPC_WEAK_FUNC(sub_83C2F9F4);
PPC_FUNC_IMPL(__imp__sub_83C2F9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2F9F8"))) PPC_WEAK_FUNC(sub_83C2F9F8);
PPC_FUNC_IMPL(__imp__sub_83C2F9F8) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,3968
	ctx.r3.s64 = ctx.r11.s64 + 3968;
	// bl 0x8259af80
	ctx.lr = 0x83C2FA10;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,13264
	ctx.r3.s64 = ctx.r10.s64 + 13264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2FA1C;
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

__attribute__((alias("__imp__sub_83C2FA2C"))) PPC_WEAK_FUNC(sub_83C2FA2C);
PPC_FUNC_IMPL(__imp__sub_83C2FA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FA30"))) PPC_WEAK_FUNC(sub_83C2FA30);
PPC_FUNC_IMPL(__imp__sub_83C2FA30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3948
	ctx.r11.s64 = ctx.r8.s64 + 3948;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,29760(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13256
	ctx.r3.s64 = ctx.r6.s64 + 13256;
	// stw r10,3948(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3948, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FA60"))) PPC_WEAK_FUNC(sub_83C2FA60);
PPC_FUNC_IMPL(__imp__sub_83C2FA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13272
	ctx.r3.s64 = ctx.r11.s64 + 13272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FA6C"))) PPC_WEAK_FUNC(sub_83C2FA6C);
PPC_FUNC_IMPL(__imp__sub_83C2FA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FA70"))) PPC_WEAK_FUNC(sub_83C2FA70);
PPC_FUNC_IMPL(__imp__sub_83C2FA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FA7C"))) PPC_WEAK_FUNC(sub_83C2FA7C);
PPC_FUNC_IMPL(__imp__sub_83C2FA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FA80"))) PPC_WEAK_FUNC(sub_83C2FA80);
PPC_FUNC_IMPL(__imp__sub_83C2FA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13288
	ctx.r3.s64 = ctx.r11.s64 + 13288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FA8C"))) PPC_WEAK_FUNC(sub_83C2FA8C);
PPC_FUNC_IMPL(__imp__sub_83C2FA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FA90"))) PPC_WEAK_FUNC(sub_83C2FA90);
PPC_FUNC_IMPL(__imp__sub_83C2FA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13296
	ctx.r3.s64 = ctx.r11.s64 + 13296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FA9C"))) PPC_WEAK_FUNC(sub_83C2FA9C);
PPC_FUNC_IMPL(__imp__sub_83C2FA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FAA0"))) PPC_WEAK_FUNC(sub_83C2FAA0);
PPC_FUNC_IMPL(__imp__sub_83C2FAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13304
	ctx.r3.s64 = ctx.r11.s64 + 13304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FAAC"))) PPC_WEAK_FUNC(sub_83C2FAAC);
PPC_FUNC_IMPL(__imp__sub_83C2FAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FAB0"))) PPC_WEAK_FUNC(sub_83C2FAB0);
PPC_FUNC_IMPL(__imp__sub_83C2FAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13312
	ctx.r3.s64 = ctx.r11.s64 + 13312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FABC"))) PPC_WEAK_FUNC(sub_83C2FABC);
PPC_FUNC_IMPL(__imp__sub_83C2FABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FAC0"))) PPC_WEAK_FUNC(sub_83C2FAC0);
PPC_FUNC_IMPL(__imp__sub_83C2FAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13320
	ctx.r3.s64 = ctx.r11.s64 + 13320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FACC"))) PPC_WEAK_FUNC(sub_83C2FACC);
PPC_FUNC_IMPL(__imp__sub_83C2FACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FAD0"))) PPC_WEAK_FUNC(sub_83C2FAD0);
PPC_FUNC_IMPL(__imp__sub_83C2FAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13328
	ctx.r3.s64 = ctx.r11.s64 + 13328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FADC"))) PPC_WEAK_FUNC(sub_83C2FADC);
PPC_FUNC_IMPL(__imp__sub_83C2FADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FAE0"))) PPC_WEAK_FUNC(sub_83C2FAE0);
PPC_FUNC_IMPL(__imp__sub_83C2FAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13336
	ctx.r3.s64 = ctx.r11.s64 + 13336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FAEC"))) PPC_WEAK_FUNC(sub_83C2FAEC);
PPC_FUNC_IMPL(__imp__sub_83C2FAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FAF0"))) PPC_WEAK_FUNC(sub_83C2FAF0);
PPC_FUNC_IMPL(__imp__sub_83C2FAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13344
	ctx.r3.s64 = ctx.r11.s64 + 13344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FAFC"))) PPC_WEAK_FUNC(sub_83C2FAFC);
PPC_FUNC_IMPL(__imp__sub_83C2FAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FB00"))) PPC_WEAK_FUNC(sub_83C2FB00);
PPC_FUNC_IMPL(__imp__sub_83C2FB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13352
	ctx.r3.s64 = ctx.r11.s64 + 13352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FB0C"))) PPC_WEAK_FUNC(sub_83C2FB0C);
PPC_FUNC_IMPL(__imp__sub_83C2FB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FB10"))) PPC_WEAK_FUNC(sub_83C2FB10);
PPC_FUNC_IMPL(__imp__sub_83C2FB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13360
	ctx.r3.s64 = ctx.r11.s64 + 13360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FB1C"))) PPC_WEAK_FUNC(sub_83C2FB1C);
PPC_FUNC_IMPL(__imp__sub_83C2FB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FB20"))) PPC_WEAK_FUNC(sub_83C2FB20);
PPC_FUNC_IMPL(__imp__sub_83C2FB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13368
	ctx.r3.s64 = ctx.r11.s64 + 13368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FB2C"))) PPC_WEAK_FUNC(sub_83C2FB2C);
PPC_FUNC_IMPL(__imp__sub_83C2FB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FB30"))) PPC_WEAK_FUNC(sub_83C2FB30);
PPC_FUNC_IMPL(__imp__sub_83C2FB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13376
	ctx.r3.s64 = ctx.r11.s64 + 13376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FB3C"))) PPC_WEAK_FUNC(sub_83C2FB3C);
PPC_FUNC_IMPL(__imp__sub_83C2FB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FB40"))) PPC_WEAK_FUNC(sub_83C2FB40);
PPC_FUNC_IMPL(__imp__sub_83C2FB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13384
	ctx.r3.s64 = ctx.r11.s64 + 13384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FB4C"))) PPC_WEAK_FUNC(sub_83C2FB4C);
PPC_FUNC_IMPL(__imp__sub_83C2FB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FB50"))) PPC_WEAK_FUNC(sub_83C2FB50);
PPC_FUNC_IMPL(__imp__sub_83C2FB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13392
	ctx.r3.s64 = ctx.r11.s64 + 13392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FB5C"))) PPC_WEAK_FUNC(sub_83C2FB5C);
PPC_FUNC_IMPL(__imp__sub_83C2FB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FB60"))) PPC_WEAK_FUNC(sub_83C2FB60);
PPC_FUNC_IMPL(__imp__sub_83C2FB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13400
	ctx.r3.s64 = ctx.r11.s64 + 13400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FB6C"))) PPC_WEAK_FUNC(sub_83C2FB6C);
PPC_FUNC_IMPL(__imp__sub_83C2FB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FB70"))) PPC_WEAK_FUNC(sub_83C2FB70);
PPC_FUNC_IMPL(__imp__sub_83C2FB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13408
	ctx.r3.s64 = ctx.r11.s64 + 13408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FB7C"))) PPC_WEAK_FUNC(sub_83C2FB7C);
PPC_FUNC_IMPL(__imp__sub_83C2FB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FB80"))) PPC_WEAK_FUNC(sub_83C2FB80);
PPC_FUNC_IMPL(__imp__sub_83C2FB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13416
	ctx.r3.s64 = ctx.r11.s64 + 13416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FB8C"))) PPC_WEAK_FUNC(sub_83C2FB8C);
PPC_FUNC_IMPL(__imp__sub_83C2FB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FB90"))) PPC_WEAK_FUNC(sub_83C2FB90);
PPC_FUNC_IMPL(__imp__sub_83C2FB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13424
	ctx.r3.s64 = ctx.r11.s64 + 13424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FB9C"))) PPC_WEAK_FUNC(sub_83C2FB9C);
PPC_FUNC_IMPL(__imp__sub_83C2FB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FBA0"))) PPC_WEAK_FUNC(sub_83C2FBA0);
PPC_FUNC_IMPL(__imp__sub_83C2FBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13432
	ctx.r3.s64 = ctx.r11.s64 + 13432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FBAC"))) PPC_WEAK_FUNC(sub_83C2FBAC);
PPC_FUNC_IMPL(__imp__sub_83C2FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FBB0"))) PPC_WEAK_FUNC(sub_83C2FBB0);
PPC_FUNC_IMPL(__imp__sub_83C2FBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13440
	ctx.r3.s64 = ctx.r11.s64 + 13440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FBBC"))) PPC_WEAK_FUNC(sub_83C2FBBC);
PPC_FUNC_IMPL(__imp__sub_83C2FBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FBC0"))) PPC_WEAK_FUNC(sub_83C2FBC0);
PPC_FUNC_IMPL(__imp__sub_83C2FBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13448
	ctx.r3.s64 = ctx.r11.s64 + 13448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FBCC"))) PPC_WEAK_FUNC(sub_83C2FBCC);
PPC_FUNC_IMPL(__imp__sub_83C2FBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FBD0"))) PPC_WEAK_FUNC(sub_83C2FBD0);
PPC_FUNC_IMPL(__imp__sub_83C2FBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13456
	ctx.r3.s64 = ctx.r11.s64 + 13456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FBDC"))) PPC_WEAK_FUNC(sub_83C2FBDC);
PPC_FUNC_IMPL(__imp__sub_83C2FBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FBE0"))) PPC_WEAK_FUNC(sub_83C2FBE0);
PPC_FUNC_IMPL(__imp__sub_83C2FBE0) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,4320
	ctx.r3.s64 = ctx.r11.s64 + 4320;
	// bl 0x83523120
	ctx.lr = 0x83C2FBF8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,13464
	ctx.r3.s64 = ctx.r10.s64 + 13464;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2FC04;
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

__attribute__((alias("__imp__sub_83C2FC14"))) PPC_WEAK_FUNC(sub_83C2FC14);
PPC_FUNC_IMPL(__imp__sub_83C2FC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FC18"))) PPC_WEAK_FUNC(sub_83C2FC18);
PPC_FUNC_IMPL(__imp__sub_83C2FC18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4336
	ctx.r7.s64 = ctx.r8.s64 + 4336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4336);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4336, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2FC40"))) PPC_WEAK_FUNC(sub_83C2FC40);
PPC_FUNC_IMPL(__imp__sub_83C2FC40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,30016
	ctx.r6.s64 = ctx.r7.s64 + 30016;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29944(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29944);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4336(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4336);
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
	// std r9,30016(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30016, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2FC88"))) PPC_WEAK_FUNC(sub_83C2FC88);
PPC_FUNC_IMPL(__imp__sub_83C2FC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13480
	ctx.r3.s64 = ctx.r11.s64 + 13480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FC94"))) PPC_WEAK_FUNC(sub_83C2FC94);
PPC_FUNC_IMPL(__imp__sub_83C2FC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FC98"))) PPC_WEAK_FUNC(sub_83C2FC98);
PPC_FUNC_IMPL(__imp__sub_83C2FC98) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,4344
	ctx.r3.s64 = ctx.r11.s64 + 4344;
	// bl 0x8259af80
	ctx.lr = 0x83C2FCB0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,13496
	ctx.r3.s64 = ctx.r10.s64 + 13496;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2FCBC;
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

__attribute__((alias("__imp__sub_83C2FCCC"))) PPC_WEAK_FUNC(sub_83C2FCCC);
PPC_FUNC_IMPL(__imp__sub_83C2FCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

