#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C8C008"))) PPC_WEAK_FUNC(sub_83C8C008);
PPC_FUNC_IMPL(__imp__sub_83C8C008) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83C8C02C;
	sub_82595718(ctx, base);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,25592
	ctx.r9.s64 = ctx.r10.s64 + 25592;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,11368
	ctx.r3.s64 = ctx.r8.s64 + 11368;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83C8C070;
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

__attribute__((alias("__imp__sub_83C8C080"))) PPC_WEAK_FUNC(sub_83C8C080);
PPC_FUNC_IMPL(__imp__sub_83C8C080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11456
	ctx.r3.s64 = ctx.r11.s64 + 11456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C08C"))) PPC_WEAK_FUNC(sub_83C8C08C);
PPC_FUNC_IMPL(__imp__sub_83C8C08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C090"))) PPC_WEAK_FUNC(sub_83C8C090);
PPC_FUNC_IMPL(__imp__sub_83C8C090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11464
	ctx.r3.s64 = ctx.r11.s64 + 11464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C09C"))) PPC_WEAK_FUNC(sub_83C8C09C);
PPC_FUNC_IMPL(__imp__sub_83C8C09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C0A0"))) PPC_WEAK_FUNC(sub_83C8C0A0);
PPC_FUNC_IMPL(__imp__sub_83C8C0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11472
	ctx.r3.s64 = ctx.r11.s64 + 11472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C0AC"))) PPC_WEAK_FUNC(sub_83C8C0AC);
PPC_FUNC_IMPL(__imp__sub_83C8C0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C0B0"))) PPC_WEAK_FUNC(sub_83C8C0B0);
PPC_FUNC_IMPL(__imp__sub_83C8C0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C0BC"))) PPC_WEAK_FUNC(sub_83C8C0BC);
PPC_FUNC_IMPL(__imp__sub_83C8C0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C0C0"))) PPC_WEAK_FUNC(sub_83C8C0C0);
PPC_FUNC_IMPL(__imp__sub_83C8C0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C0CC"))) PPC_WEAK_FUNC(sub_83C8C0CC);
PPC_FUNC_IMPL(__imp__sub_83C8C0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C0D0"))) PPC_WEAK_FUNC(sub_83C8C0D0);
PPC_FUNC_IMPL(__imp__sub_83C8C0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11496
	ctx.r3.s64 = ctx.r11.s64 + 11496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C0DC"))) PPC_WEAK_FUNC(sub_83C8C0DC);
PPC_FUNC_IMPL(__imp__sub_83C8C0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C0E0"))) PPC_WEAK_FUNC(sub_83C8C0E0);
PPC_FUNC_IMPL(__imp__sub_83C8C0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11504
	ctx.r3.s64 = ctx.r11.s64 + 11504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C0EC"))) PPC_WEAK_FUNC(sub_83C8C0EC);
PPC_FUNC_IMPL(__imp__sub_83C8C0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C0F0"))) PPC_WEAK_FUNC(sub_83C8C0F0);
PPC_FUNC_IMPL(__imp__sub_83C8C0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11512
	ctx.r3.s64 = ctx.r11.s64 + 11512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C0FC"))) PPC_WEAK_FUNC(sub_83C8C0FC);
PPC_FUNC_IMPL(__imp__sub_83C8C0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C100"))) PPC_WEAK_FUNC(sub_83C8C100);
PPC_FUNC_IMPL(__imp__sub_83C8C100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11520
	ctx.r3.s64 = ctx.r11.s64 + 11520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C10C"))) PPC_WEAK_FUNC(sub_83C8C10C);
PPC_FUNC_IMPL(__imp__sub_83C8C10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C110"))) PPC_WEAK_FUNC(sub_83C8C110);
PPC_FUNC_IMPL(__imp__sub_83C8C110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11528
	ctx.r3.s64 = ctx.r11.s64 + 11528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C11C"))) PPC_WEAK_FUNC(sub_83C8C11C);
PPC_FUNC_IMPL(__imp__sub_83C8C11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C120"))) PPC_WEAK_FUNC(sub_83C8C120);
PPC_FUNC_IMPL(__imp__sub_83C8C120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11536
	ctx.r3.s64 = ctx.r11.s64 + 11536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C12C"))) PPC_WEAK_FUNC(sub_83C8C12C);
PPC_FUNC_IMPL(__imp__sub_83C8C12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C130"))) PPC_WEAK_FUNC(sub_83C8C130);
PPC_FUNC_IMPL(__imp__sub_83C8C130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11544
	ctx.r3.s64 = ctx.r11.s64 + 11544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C13C"))) PPC_WEAK_FUNC(sub_83C8C13C);
PPC_FUNC_IMPL(__imp__sub_83C8C13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C140"))) PPC_WEAK_FUNC(sub_83C8C140);
PPC_FUNC_IMPL(__imp__sub_83C8C140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11552
	ctx.r3.s64 = ctx.r11.s64 + 11552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C14C"))) PPC_WEAK_FUNC(sub_83C8C14C);
PPC_FUNC_IMPL(__imp__sub_83C8C14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C150"))) PPC_WEAK_FUNC(sub_83C8C150);
PPC_FUNC_IMPL(__imp__sub_83C8C150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11560
	ctx.r3.s64 = ctx.r11.s64 + 11560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C15C"))) PPC_WEAK_FUNC(sub_83C8C15C);
PPC_FUNC_IMPL(__imp__sub_83C8C15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C160"))) PPC_WEAK_FUNC(sub_83C8C160);
PPC_FUNC_IMPL(__imp__sub_83C8C160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11568
	ctx.r3.s64 = ctx.r11.s64 + 11568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C16C"))) PPC_WEAK_FUNC(sub_83C8C16C);
PPC_FUNC_IMPL(__imp__sub_83C8C16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C170"))) PPC_WEAK_FUNC(sub_83C8C170);
PPC_FUNC_IMPL(__imp__sub_83C8C170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11576
	ctx.r3.s64 = ctx.r11.s64 + 11576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C17C"))) PPC_WEAK_FUNC(sub_83C8C17C);
PPC_FUNC_IMPL(__imp__sub_83C8C17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C180"))) PPC_WEAK_FUNC(sub_83C8C180);
PPC_FUNC_IMPL(__imp__sub_83C8C180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11584
	ctx.r3.s64 = ctx.r11.s64 + 11584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C18C"))) PPC_WEAK_FUNC(sub_83C8C18C);
PPC_FUNC_IMPL(__imp__sub_83C8C18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C190"))) PPC_WEAK_FUNC(sub_83C8C190);
PPC_FUNC_IMPL(__imp__sub_83C8C190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11592
	ctx.r3.s64 = ctx.r11.s64 + 11592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C19C"))) PPC_WEAK_FUNC(sub_83C8C19C);
PPC_FUNC_IMPL(__imp__sub_83C8C19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C1A0"))) PPC_WEAK_FUNC(sub_83C8C1A0);
PPC_FUNC_IMPL(__imp__sub_83C8C1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C1AC"))) PPC_WEAK_FUNC(sub_83C8C1AC);
PPC_FUNC_IMPL(__imp__sub_83C8C1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C1B0"))) PPC_WEAK_FUNC(sub_83C8C1B0);
PPC_FUNC_IMPL(__imp__sub_83C8C1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11608
	ctx.r3.s64 = ctx.r11.s64 + 11608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C1BC"))) PPC_WEAK_FUNC(sub_83C8C1BC);
PPC_FUNC_IMPL(__imp__sub_83C8C1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C1C0"))) PPC_WEAK_FUNC(sub_83C8C1C0);
PPC_FUNC_IMPL(__imp__sub_83C8C1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11616
	ctx.r3.s64 = ctx.r11.s64 + 11616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C1CC"))) PPC_WEAK_FUNC(sub_83C8C1CC);
PPC_FUNC_IMPL(__imp__sub_83C8C1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C1D0"))) PPC_WEAK_FUNC(sub_83C8C1D0);
PPC_FUNC_IMPL(__imp__sub_83C8C1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11624
	ctx.r3.s64 = ctx.r11.s64 + 11624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C1DC"))) PPC_WEAK_FUNC(sub_83C8C1DC);
PPC_FUNC_IMPL(__imp__sub_83C8C1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C1E0"))) PPC_WEAK_FUNC(sub_83C8C1E0);
PPC_FUNC_IMPL(__imp__sub_83C8C1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C1EC"))) PPC_WEAK_FUNC(sub_83C8C1EC);
PPC_FUNC_IMPL(__imp__sub_83C8C1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C1F0"))) PPC_WEAK_FUNC(sub_83C8C1F0);
PPC_FUNC_IMPL(__imp__sub_83C8C1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11640
	ctx.r3.s64 = ctx.r11.s64 + 11640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C1FC"))) PPC_WEAK_FUNC(sub_83C8C1FC);
PPC_FUNC_IMPL(__imp__sub_83C8C1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C200"))) PPC_WEAK_FUNC(sub_83C8C200);
PPC_FUNC_IMPL(__imp__sub_83C8C200) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r11,r11,25628
	ctx.r11.s64 = ctx.r11.s64 + 25628;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82596fa8
	ctx.lr = 0x83C8C21C;
	sub_82596FA8(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,11648
	ctx.r3.s64 = ctx.r10.s64 + 11648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8C228;
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

__attribute__((alias("__imp__sub_83C8C238"))) PPC_WEAK_FUNC(sub_83C8C238);
PPC_FUNC_IMPL(__imp__sub_83C8C238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11664
	ctx.r3.s64 = ctx.r11.s64 + 11664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C244"))) PPC_WEAK_FUNC(sub_83C8C244);
PPC_FUNC_IMPL(__imp__sub_83C8C244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C248"))) PPC_WEAK_FUNC(sub_83C8C248);
PPC_FUNC_IMPL(__imp__sub_83C8C248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11672
	ctx.r3.s64 = ctx.r11.s64 + 11672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C254"))) PPC_WEAK_FUNC(sub_83C8C254);
PPC_FUNC_IMPL(__imp__sub_83C8C254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C258"))) PPC_WEAK_FUNC(sub_83C8C258);
PPC_FUNC_IMPL(__imp__sub_83C8C258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11680
	ctx.r3.s64 = ctx.r11.s64 + 11680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C264"))) PPC_WEAK_FUNC(sub_83C8C264);
PPC_FUNC_IMPL(__imp__sub_83C8C264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C268"))) PPC_WEAK_FUNC(sub_83C8C268);
PPC_FUNC_IMPL(__imp__sub_83C8C268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11688
	ctx.r3.s64 = ctx.r11.s64 + 11688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C274"))) PPC_WEAK_FUNC(sub_83C8C274);
PPC_FUNC_IMPL(__imp__sub_83C8C274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C278"))) PPC_WEAK_FUNC(sub_83C8C278);
PPC_FUNC_IMPL(__imp__sub_83C8C278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11696
	ctx.r3.s64 = ctx.r11.s64 + 11696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C284"))) PPC_WEAK_FUNC(sub_83C8C284);
PPC_FUNC_IMPL(__imp__sub_83C8C284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C288"))) PPC_WEAK_FUNC(sub_83C8C288);
PPC_FUNC_IMPL(__imp__sub_83C8C288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11704
	ctx.r3.s64 = ctx.r11.s64 + 11704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C294"))) PPC_WEAK_FUNC(sub_83C8C294);
PPC_FUNC_IMPL(__imp__sub_83C8C294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C298"))) PPC_WEAK_FUNC(sub_83C8C298);
PPC_FUNC_IMPL(__imp__sub_83C8C298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11712
	ctx.r3.s64 = ctx.r11.s64 + 11712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C2A4"))) PPC_WEAK_FUNC(sub_83C8C2A4);
PPC_FUNC_IMPL(__imp__sub_83C8C2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C2A8"))) PPC_WEAK_FUNC(sub_83C8C2A8);
PPC_FUNC_IMPL(__imp__sub_83C8C2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11720
	ctx.r3.s64 = ctx.r11.s64 + 11720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C2B4"))) PPC_WEAK_FUNC(sub_83C8C2B4);
PPC_FUNC_IMPL(__imp__sub_83C8C2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C2B8"))) PPC_WEAK_FUNC(sub_83C8C2B8);
PPC_FUNC_IMPL(__imp__sub_83C8C2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11728
	ctx.r3.s64 = ctx.r11.s64 + 11728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C2C4"))) PPC_WEAK_FUNC(sub_83C8C2C4);
PPC_FUNC_IMPL(__imp__sub_83C8C2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C2C8"))) PPC_WEAK_FUNC(sub_83C8C2C8);
PPC_FUNC_IMPL(__imp__sub_83C8C2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11736
	ctx.r3.s64 = ctx.r11.s64 + 11736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C2D4"))) PPC_WEAK_FUNC(sub_83C8C2D4);
PPC_FUNC_IMPL(__imp__sub_83C8C2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C2D8"))) PPC_WEAK_FUNC(sub_83C8C2D8);
PPC_FUNC_IMPL(__imp__sub_83C8C2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11744
	ctx.r3.s64 = ctx.r11.s64 + 11744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C2E4"))) PPC_WEAK_FUNC(sub_83C8C2E4);
PPC_FUNC_IMPL(__imp__sub_83C8C2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C2E8"))) PPC_WEAK_FUNC(sub_83C8C2E8);
PPC_FUNC_IMPL(__imp__sub_83C8C2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11752
	ctx.r3.s64 = ctx.r11.s64 + 11752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C2F4"))) PPC_WEAK_FUNC(sub_83C8C2F4);
PPC_FUNC_IMPL(__imp__sub_83C8C2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C2F8"))) PPC_WEAK_FUNC(sub_83C8C2F8);
PPC_FUNC_IMPL(__imp__sub_83C8C2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11760
	ctx.r3.s64 = ctx.r11.s64 + 11760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C304"))) PPC_WEAK_FUNC(sub_83C8C304);
PPC_FUNC_IMPL(__imp__sub_83C8C304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C308"))) PPC_WEAK_FUNC(sub_83C8C308);
PPC_FUNC_IMPL(__imp__sub_83C8C308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11768
	ctx.r3.s64 = ctx.r11.s64 + 11768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C314"))) PPC_WEAK_FUNC(sub_83C8C314);
PPC_FUNC_IMPL(__imp__sub_83C8C314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C318"))) PPC_WEAK_FUNC(sub_83C8C318);
PPC_FUNC_IMPL(__imp__sub_83C8C318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11776
	ctx.r3.s64 = ctx.r11.s64 + 11776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C324"))) PPC_WEAK_FUNC(sub_83C8C324);
PPC_FUNC_IMPL(__imp__sub_83C8C324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C328"))) PPC_WEAK_FUNC(sub_83C8C328);
PPC_FUNC_IMPL(__imp__sub_83C8C328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11784
	ctx.r3.s64 = ctx.r11.s64 + 11784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C334"))) PPC_WEAK_FUNC(sub_83C8C334);
PPC_FUNC_IMPL(__imp__sub_83C8C334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C338"))) PPC_WEAK_FUNC(sub_83C8C338);
PPC_FUNC_IMPL(__imp__sub_83C8C338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11792
	ctx.r3.s64 = ctx.r11.s64 + 11792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C344"))) PPC_WEAK_FUNC(sub_83C8C344);
PPC_FUNC_IMPL(__imp__sub_83C8C344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C348"))) PPC_WEAK_FUNC(sub_83C8C348);
PPC_FUNC_IMPL(__imp__sub_83C8C348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11800
	ctx.r3.s64 = ctx.r11.s64 + 11800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C354"))) PPC_WEAK_FUNC(sub_83C8C354);
PPC_FUNC_IMPL(__imp__sub_83C8C354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C358"))) PPC_WEAK_FUNC(sub_83C8C358);
PPC_FUNC_IMPL(__imp__sub_83C8C358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11808
	ctx.r3.s64 = ctx.r11.s64 + 11808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C364"))) PPC_WEAK_FUNC(sub_83C8C364);
PPC_FUNC_IMPL(__imp__sub_83C8C364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C368"))) PPC_WEAK_FUNC(sub_83C8C368);
PPC_FUNC_IMPL(__imp__sub_83C8C368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11816
	ctx.r3.s64 = ctx.r11.s64 + 11816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C374"))) PPC_WEAK_FUNC(sub_83C8C374);
PPC_FUNC_IMPL(__imp__sub_83C8C374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C378"))) PPC_WEAK_FUNC(sub_83C8C378);
PPC_FUNC_IMPL(__imp__sub_83C8C378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11824
	ctx.r3.s64 = ctx.r11.s64 + 11824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C384"))) PPC_WEAK_FUNC(sub_83C8C384);
PPC_FUNC_IMPL(__imp__sub_83C8C384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C388"))) PPC_WEAK_FUNC(sub_83C8C388);
PPC_FUNC_IMPL(__imp__sub_83C8C388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11832
	ctx.r3.s64 = ctx.r11.s64 + 11832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C394"))) PPC_WEAK_FUNC(sub_83C8C394);
PPC_FUNC_IMPL(__imp__sub_83C8C394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C398"))) PPC_WEAK_FUNC(sub_83C8C398);
PPC_FUNC_IMPL(__imp__sub_83C8C398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11840
	ctx.r3.s64 = ctx.r11.s64 + 11840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C3A4"))) PPC_WEAK_FUNC(sub_83C8C3A4);
PPC_FUNC_IMPL(__imp__sub_83C8C3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C3A8"))) PPC_WEAK_FUNC(sub_83C8C3A8);
PPC_FUNC_IMPL(__imp__sub_83C8C3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11848
	ctx.r3.s64 = ctx.r11.s64 + 11848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C3B4"))) PPC_WEAK_FUNC(sub_83C8C3B4);
PPC_FUNC_IMPL(__imp__sub_83C8C3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C3B8"))) PPC_WEAK_FUNC(sub_83C8C3B8);
PPC_FUNC_IMPL(__imp__sub_83C8C3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11856
	ctx.r3.s64 = ctx.r11.s64 + 11856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C3C4"))) PPC_WEAK_FUNC(sub_83C8C3C4);
PPC_FUNC_IMPL(__imp__sub_83C8C3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C3C8"))) PPC_WEAK_FUNC(sub_83C8C3C8);
PPC_FUNC_IMPL(__imp__sub_83C8C3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11864
	ctx.r3.s64 = ctx.r11.s64 + 11864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C3D4"))) PPC_WEAK_FUNC(sub_83C8C3D4);
PPC_FUNC_IMPL(__imp__sub_83C8C3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C3D8"))) PPC_WEAK_FUNC(sub_83C8C3D8);
PPC_FUNC_IMPL(__imp__sub_83C8C3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11872
	ctx.r3.s64 = ctx.r11.s64 + 11872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C3E4"))) PPC_WEAK_FUNC(sub_83C8C3E4);
PPC_FUNC_IMPL(__imp__sub_83C8C3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C3E8"))) PPC_WEAK_FUNC(sub_83C8C3E8);
PPC_FUNC_IMPL(__imp__sub_83C8C3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11880
	ctx.r3.s64 = ctx.r11.s64 + 11880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C3F4"))) PPC_WEAK_FUNC(sub_83C8C3F4);
PPC_FUNC_IMPL(__imp__sub_83C8C3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C3F8"))) PPC_WEAK_FUNC(sub_83C8C3F8);
PPC_FUNC_IMPL(__imp__sub_83C8C3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11888
	ctx.r3.s64 = ctx.r11.s64 + 11888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C404"))) PPC_WEAK_FUNC(sub_83C8C404);
PPC_FUNC_IMPL(__imp__sub_83C8C404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C408"))) PPC_WEAK_FUNC(sub_83C8C408);
PPC_FUNC_IMPL(__imp__sub_83C8C408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11896
	ctx.r3.s64 = ctx.r11.s64 + 11896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C414"))) PPC_WEAK_FUNC(sub_83C8C414);
PPC_FUNC_IMPL(__imp__sub_83C8C414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C418"))) PPC_WEAK_FUNC(sub_83C8C418);
PPC_FUNC_IMPL(__imp__sub_83C8C418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11904
	ctx.r3.s64 = ctx.r11.s64 + 11904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C424"))) PPC_WEAK_FUNC(sub_83C8C424);
PPC_FUNC_IMPL(__imp__sub_83C8C424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C428"))) PPC_WEAK_FUNC(sub_83C8C428);
PPC_FUNC_IMPL(__imp__sub_83C8C428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11912
	ctx.r3.s64 = ctx.r11.s64 + 11912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C434"))) PPC_WEAK_FUNC(sub_83C8C434);
PPC_FUNC_IMPL(__imp__sub_83C8C434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C438"))) PPC_WEAK_FUNC(sub_83C8C438);
PPC_FUNC_IMPL(__imp__sub_83C8C438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11920
	ctx.r3.s64 = ctx.r11.s64 + 11920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C444"))) PPC_WEAK_FUNC(sub_83C8C444);
PPC_FUNC_IMPL(__imp__sub_83C8C444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C448"))) PPC_WEAK_FUNC(sub_83C8C448);
PPC_FUNC_IMPL(__imp__sub_83C8C448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11928
	ctx.r3.s64 = ctx.r11.s64 + 11928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C454"))) PPC_WEAK_FUNC(sub_83C8C454);
PPC_FUNC_IMPL(__imp__sub_83C8C454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C458"))) PPC_WEAK_FUNC(sub_83C8C458);
PPC_FUNC_IMPL(__imp__sub_83C8C458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11936
	ctx.r3.s64 = ctx.r11.s64 + 11936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C464"))) PPC_WEAK_FUNC(sub_83C8C464);
PPC_FUNC_IMPL(__imp__sub_83C8C464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C468"))) PPC_WEAK_FUNC(sub_83C8C468);
PPC_FUNC_IMPL(__imp__sub_83C8C468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11944
	ctx.r3.s64 = ctx.r11.s64 + 11944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C474"))) PPC_WEAK_FUNC(sub_83C8C474);
PPC_FUNC_IMPL(__imp__sub_83C8C474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C478"))) PPC_WEAK_FUNC(sub_83C8C478);
PPC_FUNC_IMPL(__imp__sub_83C8C478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11952
	ctx.r3.s64 = ctx.r11.s64 + 11952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C484"))) PPC_WEAK_FUNC(sub_83C8C484);
PPC_FUNC_IMPL(__imp__sub_83C8C484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C488"))) PPC_WEAK_FUNC(sub_83C8C488);
PPC_FUNC_IMPL(__imp__sub_83C8C488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11960
	ctx.r3.s64 = ctx.r11.s64 + 11960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C494"))) PPC_WEAK_FUNC(sub_83C8C494);
PPC_FUNC_IMPL(__imp__sub_83C8C494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C498"))) PPC_WEAK_FUNC(sub_83C8C498);
PPC_FUNC_IMPL(__imp__sub_83C8C498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11968
	ctx.r3.s64 = ctx.r11.s64 + 11968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C4A4"))) PPC_WEAK_FUNC(sub_83C8C4A4);
PPC_FUNC_IMPL(__imp__sub_83C8C4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C4A8"))) PPC_WEAK_FUNC(sub_83C8C4A8);
PPC_FUNC_IMPL(__imp__sub_83C8C4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11976
	ctx.r3.s64 = ctx.r11.s64 + 11976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C4B4"))) PPC_WEAK_FUNC(sub_83C8C4B4);
PPC_FUNC_IMPL(__imp__sub_83C8C4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C4B8"))) PPC_WEAK_FUNC(sub_83C8C4B8);
PPC_FUNC_IMPL(__imp__sub_83C8C4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11984
	ctx.r3.s64 = ctx.r11.s64 + 11984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C4C4"))) PPC_WEAK_FUNC(sub_83C8C4C4);
PPC_FUNC_IMPL(__imp__sub_83C8C4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C4C8"))) PPC_WEAK_FUNC(sub_83C8C4C8);
PPC_FUNC_IMPL(__imp__sub_83C8C4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,11992
	ctx.r3.s64 = ctx.r11.s64 + 11992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C4D4"))) PPC_WEAK_FUNC(sub_83C8C4D4);
PPC_FUNC_IMPL(__imp__sub_83C8C4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C4D8"))) PPC_WEAK_FUNC(sub_83C8C4D8);
PPC_FUNC_IMPL(__imp__sub_83C8C4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12000
	ctx.r3.s64 = ctx.r11.s64 + 12000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C4E4"))) PPC_WEAK_FUNC(sub_83C8C4E4);
PPC_FUNC_IMPL(__imp__sub_83C8C4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C4E8"))) PPC_WEAK_FUNC(sub_83C8C4E8);
PPC_FUNC_IMPL(__imp__sub_83C8C4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12008
	ctx.r3.s64 = ctx.r11.s64 + 12008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C4F4"))) PPC_WEAK_FUNC(sub_83C8C4F4);
PPC_FUNC_IMPL(__imp__sub_83C8C4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C4F8"))) PPC_WEAK_FUNC(sub_83C8C4F8);
PPC_FUNC_IMPL(__imp__sub_83C8C4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12016
	ctx.r3.s64 = ctx.r11.s64 + 12016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C504"))) PPC_WEAK_FUNC(sub_83C8C504);
PPC_FUNC_IMPL(__imp__sub_83C8C504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C508"))) PPC_WEAK_FUNC(sub_83C8C508);
PPC_FUNC_IMPL(__imp__sub_83C8C508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12024
	ctx.r3.s64 = ctx.r11.s64 + 12024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C514"))) PPC_WEAK_FUNC(sub_83C8C514);
PPC_FUNC_IMPL(__imp__sub_83C8C514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C518"))) PPC_WEAK_FUNC(sub_83C8C518);
PPC_FUNC_IMPL(__imp__sub_83C8C518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12032
	ctx.r3.s64 = ctx.r11.s64 + 12032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C524"))) PPC_WEAK_FUNC(sub_83C8C524);
PPC_FUNC_IMPL(__imp__sub_83C8C524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C528"))) PPC_WEAK_FUNC(sub_83C8C528);
PPC_FUNC_IMPL(__imp__sub_83C8C528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12040
	ctx.r3.s64 = ctx.r11.s64 + 12040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C534"))) PPC_WEAK_FUNC(sub_83C8C534);
PPC_FUNC_IMPL(__imp__sub_83C8C534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C538"))) PPC_WEAK_FUNC(sub_83C8C538);
PPC_FUNC_IMPL(__imp__sub_83C8C538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12048
	ctx.r3.s64 = ctx.r11.s64 + 12048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C544"))) PPC_WEAK_FUNC(sub_83C8C544);
PPC_FUNC_IMPL(__imp__sub_83C8C544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C548"))) PPC_WEAK_FUNC(sub_83C8C548);
PPC_FUNC_IMPL(__imp__sub_83C8C548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C554"))) PPC_WEAK_FUNC(sub_83C8C554);
PPC_FUNC_IMPL(__imp__sub_83C8C554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C558"))) PPC_WEAK_FUNC(sub_83C8C558);
PPC_FUNC_IMPL(__imp__sub_83C8C558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12064
	ctx.r3.s64 = ctx.r11.s64 + 12064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C564"))) PPC_WEAK_FUNC(sub_83C8C564);
PPC_FUNC_IMPL(__imp__sub_83C8C564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C568"))) PPC_WEAK_FUNC(sub_83C8C568);
PPC_FUNC_IMPL(__imp__sub_83C8C568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12072
	ctx.r3.s64 = ctx.r11.s64 + 12072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C574"))) PPC_WEAK_FUNC(sub_83C8C574);
PPC_FUNC_IMPL(__imp__sub_83C8C574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C578"))) PPC_WEAK_FUNC(sub_83C8C578);
PPC_FUNC_IMPL(__imp__sub_83C8C578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12080
	ctx.r3.s64 = ctx.r11.s64 + 12080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C584"))) PPC_WEAK_FUNC(sub_83C8C584);
PPC_FUNC_IMPL(__imp__sub_83C8C584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C588"))) PPC_WEAK_FUNC(sub_83C8C588);
PPC_FUNC_IMPL(__imp__sub_83C8C588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12088
	ctx.r3.s64 = ctx.r11.s64 + 12088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C594"))) PPC_WEAK_FUNC(sub_83C8C594);
PPC_FUNC_IMPL(__imp__sub_83C8C594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C598"))) PPC_WEAK_FUNC(sub_83C8C598);
PPC_FUNC_IMPL(__imp__sub_83C8C598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12096
	ctx.r3.s64 = ctx.r11.s64 + 12096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C5A4"))) PPC_WEAK_FUNC(sub_83C8C5A4);
PPC_FUNC_IMPL(__imp__sub_83C8C5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C5A8"))) PPC_WEAK_FUNC(sub_83C8C5A8);
PPC_FUNC_IMPL(__imp__sub_83C8C5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12104
	ctx.r3.s64 = ctx.r11.s64 + 12104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C5B4"))) PPC_WEAK_FUNC(sub_83C8C5B4);
PPC_FUNC_IMPL(__imp__sub_83C8C5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C5B8"))) PPC_WEAK_FUNC(sub_83C8C5B8);
PPC_FUNC_IMPL(__imp__sub_83C8C5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12112
	ctx.r3.s64 = ctx.r11.s64 + 12112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C5C4"))) PPC_WEAK_FUNC(sub_83C8C5C4);
PPC_FUNC_IMPL(__imp__sub_83C8C5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C5C8"))) PPC_WEAK_FUNC(sub_83C8C5C8);
PPC_FUNC_IMPL(__imp__sub_83C8C5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12120
	ctx.r3.s64 = ctx.r11.s64 + 12120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C5D4"))) PPC_WEAK_FUNC(sub_83C8C5D4);
PPC_FUNC_IMPL(__imp__sub_83C8C5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C5D8"))) PPC_WEAK_FUNC(sub_83C8C5D8);
PPC_FUNC_IMPL(__imp__sub_83C8C5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12128
	ctx.r3.s64 = ctx.r11.s64 + 12128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C5E4"))) PPC_WEAK_FUNC(sub_83C8C5E4);
PPC_FUNC_IMPL(__imp__sub_83C8C5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C5E8"))) PPC_WEAK_FUNC(sub_83C8C5E8);
PPC_FUNC_IMPL(__imp__sub_83C8C5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12136
	ctx.r3.s64 = ctx.r11.s64 + 12136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C5F4"))) PPC_WEAK_FUNC(sub_83C8C5F4);
PPC_FUNC_IMPL(__imp__sub_83C8C5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C5F8"))) PPC_WEAK_FUNC(sub_83C8C5F8);
PPC_FUNC_IMPL(__imp__sub_83C8C5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12144
	ctx.r3.s64 = ctx.r11.s64 + 12144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C604"))) PPC_WEAK_FUNC(sub_83C8C604);
PPC_FUNC_IMPL(__imp__sub_83C8C604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C608"))) PPC_WEAK_FUNC(sub_83C8C608);
PPC_FUNC_IMPL(__imp__sub_83C8C608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12152
	ctx.r3.s64 = ctx.r11.s64 + 12152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C614"))) PPC_WEAK_FUNC(sub_83C8C614);
PPC_FUNC_IMPL(__imp__sub_83C8C614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C618"))) PPC_WEAK_FUNC(sub_83C8C618);
PPC_FUNC_IMPL(__imp__sub_83C8C618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12160
	ctx.r3.s64 = ctx.r11.s64 + 12160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C624"))) PPC_WEAK_FUNC(sub_83C8C624);
PPC_FUNC_IMPL(__imp__sub_83C8C624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C628"))) PPC_WEAK_FUNC(sub_83C8C628);
PPC_FUNC_IMPL(__imp__sub_83C8C628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12168
	ctx.r3.s64 = ctx.r11.s64 + 12168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C634"))) PPC_WEAK_FUNC(sub_83C8C634);
PPC_FUNC_IMPL(__imp__sub_83C8C634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C638"))) PPC_WEAK_FUNC(sub_83C8C638);
PPC_FUNC_IMPL(__imp__sub_83C8C638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12176
	ctx.r3.s64 = ctx.r11.s64 + 12176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C644"))) PPC_WEAK_FUNC(sub_83C8C644);
PPC_FUNC_IMPL(__imp__sub_83C8C644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C648"))) PPC_WEAK_FUNC(sub_83C8C648);
PPC_FUNC_IMPL(__imp__sub_83C8C648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12184
	ctx.r3.s64 = ctx.r11.s64 + 12184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C654"))) PPC_WEAK_FUNC(sub_83C8C654);
PPC_FUNC_IMPL(__imp__sub_83C8C654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C658"))) PPC_WEAK_FUNC(sub_83C8C658);
PPC_FUNC_IMPL(__imp__sub_83C8C658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12192
	ctx.r3.s64 = ctx.r11.s64 + 12192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C664"))) PPC_WEAK_FUNC(sub_83C8C664);
PPC_FUNC_IMPL(__imp__sub_83C8C664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C668"))) PPC_WEAK_FUNC(sub_83C8C668);
PPC_FUNC_IMPL(__imp__sub_83C8C668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12200
	ctx.r3.s64 = ctx.r11.s64 + 12200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C674"))) PPC_WEAK_FUNC(sub_83C8C674);
PPC_FUNC_IMPL(__imp__sub_83C8C674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C678"))) PPC_WEAK_FUNC(sub_83C8C678);
PPC_FUNC_IMPL(__imp__sub_83C8C678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12208
	ctx.r3.s64 = ctx.r11.s64 + 12208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C684"))) PPC_WEAK_FUNC(sub_83C8C684);
PPC_FUNC_IMPL(__imp__sub_83C8C684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C688"))) PPC_WEAK_FUNC(sub_83C8C688);
PPC_FUNC_IMPL(__imp__sub_83C8C688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12216
	ctx.r3.s64 = ctx.r11.s64 + 12216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C694"))) PPC_WEAK_FUNC(sub_83C8C694);
PPC_FUNC_IMPL(__imp__sub_83C8C694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C698"))) PPC_WEAK_FUNC(sub_83C8C698);
PPC_FUNC_IMPL(__imp__sub_83C8C698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12224
	ctx.r3.s64 = ctx.r11.s64 + 12224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C6A4"))) PPC_WEAK_FUNC(sub_83C8C6A4);
PPC_FUNC_IMPL(__imp__sub_83C8C6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C6A8"))) PPC_WEAK_FUNC(sub_83C8C6A8);
PPC_FUNC_IMPL(__imp__sub_83C8C6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12232
	ctx.r3.s64 = ctx.r11.s64 + 12232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C6B4"))) PPC_WEAK_FUNC(sub_83C8C6B4);
PPC_FUNC_IMPL(__imp__sub_83C8C6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C6B8"))) PPC_WEAK_FUNC(sub_83C8C6B8);
PPC_FUNC_IMPL(__imp__sub_83C8C6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12256
	ctx.r3.s64 = ctx.r11.s64 + 12256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C6C4"))) PPC_WEAK_FUNC(sub_83C8C6C4);
PPC_FUNC_IMPL(__imp__sub_83C8C6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C6C8"))) PPC_WEAK_FUNC(sub_83C8C6C8);
PPC_FUNC_IMPL(__imp__sub_83C8C6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12264
	ctx.r3.s64 = ctx.r11.s64 + 12264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C6D4"))) PPC_WEAK_FUNC(sub_83C8C6D4);
PPC_FUNC_IMPL(__imp__sub_83C8C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C6D8"))) PPC_WEAK_FUNC(sub_83C8C6D8);
PPC_FUNC_IMPL(__imp__sub_83C8C6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12272
	ctx.r3.s64 = ctx.r11.s64 + 12272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C6E4"))) PPC_WEAK_FUNC(sub_83C8C6E4);
PPC_FUNC_IMPL(__imp__sub_83C8C6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C6E8"))) PPC_WEAK_FUNC(sub_83C8C6E8);
PPC_FUNC_IMPL(__imp__sub_83C8C6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12280
	ctx.r3.s64 = ctx.r11.s64 + 12280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C6F4"))) PPC_WEAK_FUNC(sub_83C8C6F4);
PPC_FUNC_IMPL(__imp__sub_83C8C6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C6F8"))) PPC_WEAK_FUNC(sub_83C8C6F8);
PPC_FUNC_IMPL(__imp__sub_83C8C6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12288
	ctx.r3.s64 = ctx.r11.s64 + 12288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C704"))) PPC_WEAK_FUNC(sub_83C8C704);
PPC_FUNC_IMPL(__imp__sub_83C8C704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C708"))) PPC_WEAK_FUNC(sub_83C8C708);
PPC_FUNC_IMPL(__imp__sub_83C8C708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12296
	ctx.r3.s64 = ctx.r11.s64 + 12296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C714"))) PPC_WEAK_FUNC(sub_83C8C714);
PPC_FUNC_IMPL(__imp__sub_83C8C714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C718"))) PPC_WEAK_FUNC(sub_83C8C718);
PPC_FUNC_IMPL(__imp__sub_83C8C718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12304
	ctx.r3.s64 = ctx.r11.s64 + 12304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C724"))) PPC_WEAK_FUNC(sub_83C8C724);
PPC_FUNC_IMPL(__imp__sub_83C8C724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C728"))) PPC_WEAK_FUNC(sub_83C8C728);
PPC_FUNC_IMPL(__imp__sub_83C8C728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12312
	ctx.r3.s64 = ctx.r11.s64 + 12312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C734"))) PPC_WEAK_FUNC(sub_83C8C734);
PPC_FUNC_IMPL(__imp__sub_83C8C734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C738"))) PPC_WEAK_FUNC(sub_83C8C738);
PPC_FUNC_IMPL(__imp__sub_83C8C738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12320
	ctx.r3.s64 = ctx.r11.s64 + 12320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C744"))) PPC_WEAK_FUNC(sub_83C8C744);
PPC_FUNC_IMPL(__imp__sub_83C8C744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C748"))) PPC_WEAK_FUNC(sub_83C8C748);
PPC_FUNC_IMPL(__imp__sub_83C8C748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12328
	ctx.r3.s64 = ctx.r11.s64 + 12328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C754"))) PPC_WEAK_FUNC(sub_83C8C754);
PPC_FUNC_IMPL(__imp__sub_83C8C754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C758"))) PPC_WEAK_FUNC(sub_83C8C758);
PPC_FUNC_IMPL(__imp__sub_83C8C758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12336
	ctx.r3.s64 = ctx.r11.s64 + 12336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C764"))) PPC_WEAK_FUNC(sub_83C8C764);
PPC_FUNC_IMPL(__imp__sub_83C8C764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C768"))) PPC_WEAK_FUNC(sub_83C8C768);
PPC_FUNC_IMPL(__imp__sub_83C8C768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12344
	ctx.r3.s64 = ctx.r11.s64 + 12344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C774"))) PPC_WEAK_FUNC(sub_83C8C774);
PPC_FUNC_IMPL(__imp__sub_83C8C774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C778"))) PPC_WEAK_FUNC(sub_83C8C778);
PPC_FUNC_IMPL(__imp__sub_83C8C778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12352
	ctx.r3.s64 = ctx.r11.s64 + 12352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C784"))) PPC_WEAK_FUNC(sub_83C8C784);
PPC_FUNC_IMPL(__imp__sub_83C8C784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C788"))) PPC_WEAK_FUNC(sub_83C8C788);
PPC_FUNC_IMPL(__imp__sub_83C8C788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12360
	ctx.r3.s64 = ctx.r11.s64 + 12360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C794"))) PPC_WEAK_FUNC(sub_83C8C794);
PPC_FUNC_IMPL(__imp__sub_83C8C794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C798"))) PPC_WEAK_FUNC(sub_83C8C798);
PPC_FUNC_IMPL(__imp__sub_83C8C798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12368
	ctx.r3.s64 = ctx.r11.s64 + 12368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C7A4"))) PPC_WEAK_FUNC(sub_83C8C7A4);
PPC_FUNC_IMPL(__imp__sub_83C8C7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C7A8"))) PPC_WEAK_FUNC(sub_83C8C7A8);
PPC_FUNC_IMPL(__imp__sub_83C8C7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12376
	ctx.r3.s64 = ctx.r11.s64 + 12376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C7B4"))) PPC_WEAK_FUNC(sub_83C8C7B4);
PPC_FUNC_IMPL(__imp__sub_83C8C7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C7B8"))) PPC_WEAK_FUNC(sub_83C8C7B8);
PPC_FUNC_IMPL(__imp__sub_83C8C7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12384
	ctx.r3.s64 = ctx.r11.s64 + 12384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C7C4"))) PPC_WEAK_FUNC(sub_83C8C7C4);
PPC_FUNC_IMPL(__imp__sub_83C8C7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C7C8"))) PPC_WEAK_FUNC(sub_83C8C7C8);
PPC_FUNC_IMPL(__imp__sub_83C8C7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12392
	ctx.r3.s64 = ctx.r11.s64 + 12392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C7D4"))) PPC_WEAK_FUNC(sub_83C8C7D4);
PPC_FUNC_IMPL(__imp__sub_83C8C7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C7D8"))) PPC_WEAK_FUNC(sub_83C8C7D8);
PPC_FUNC_IMPL(__imp__sub_83C8C7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12400
	ctx.r3.s64 = ctx.r11.s64 + 12400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C7E4"))) PPC_WEAK_FUNC(sub_83C8C7E4);
PPC_FUNC_IMPL(__imp__sub_83C8C7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C7E8"))) PPC_WEAK_FUNC(sub_83C8C7E8);
PPC_FUNC_IMPL(__imp__sub_83C8C7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12408
	ctx.r3.s64 = ctx.r11.s64 + 12408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C7F4"))) PPC_WEAK_FUNC(sub_83C8C7F4);
PPC_FUNC_IMPL(__imp__sub_83C8C7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C7F8"))) PPC_WEAK_FUNC(sub_83C8C7F8);
PPC_FUNC_IMPL(__imp__sub_83C8C7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12416
	ctx.r3.s64 = ctx.r11.s64 + 12416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C804"))) PPC_WEAK_FUNC(sub_83C8C804);
PPC_FUNC_IMPL(__imp__sub_83C8C804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C808"))) PPC_WEAK_FUNC(sub_83C8C808);
PPC_FUNC_IMPL(__imp__sub_83C8C808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12424
	ctx.r3.s64 = ctx.r11.s64 + 12424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C814"))) PPC_WEAK_FUNC(sub_83C8C814);
PPC_FUNC_IMPL(__imp__sub_83C8C814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C818"))) PPC_WEAK_FUNC(sub_83C8C818);
PPC_FUNC_IMPL(__imp__sub_83C8C818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12432
	ctx.r3.s64 = ctx.r11.s64 + 12432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C824"))) PPC_WEAK_FUNC(sub_83C8C824);
PPC_FUNC_IMPL(__imp__sub_83C8C824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C828"))) PPC_WEAK_FUNC(sub_83C8C828);
PPC_FUNC_IMPL(__imp__sub_83C8C828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12440
	ctx.r3.s64 = ctx.r11.s64 + 12440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C834"))) PPC_WEAK_FUNC(sub_83C8C834);
PPC_FUNC_IMPL(__imp__sub_83C8C834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C838"))) PPC_WEAK_FUNC(sub_83C8C838);
PPC_FUNC_IMPL(__imp__sub_83C8C838) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r4,r11,-10032
	ctx.r4.s64 = ctx.r11.s64 + -10032;
	// addi r3,r10,-13016
	ctx.r3.s64 = ctx.r10.s64 + -13016;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x8259cc28
	ctx.lr = 0x83C8C85C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,12448
	ctx.r3.s64 = ctx.r9.s64 + 12448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8C868;
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

__attribute__((alias("__imp__sub_83C8C878"))) PPC_WEAK_FUNC(sub_83C8C878);
PPC_FUNC_IMPL(__imp__sub_83C8C878) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r4,r11,-10024
	ctx.r4.s64 = ctx.r11.s64 + -10024;
	// addi r3,r10,-12988
	ctx.r3.s64 = ctx.r10.s64 + -12988;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x8259cc28
	ctx.lr = 0x83C8C89C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,12552
	ctx.r3.s64 = ctx.r9.s64 + 12552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8C8A8;
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

__attribute__((alias("__imp__sub_83C8C8B8"))) PPC_WEAK_FUNC(sub_83C8C8B8);
PPC_FUNC_IMPL(__imp__sub_83C8C8B8) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r4,r11,-10016
	ctx.r4.s64 = ctx.r11.s64 + -10016;
	// addi r3,r10,-12960
	ctx.r3.s64 = ctx.r10.s64 + -12960;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x8259cc28
	ctx.lr = 0x83C8C8DC;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,12656
	ctx.r3.s64 = ctx.r9.s64 + 12656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8C8E8;
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

__attribute__((alias("__imp__sub_83C8C8F8"))) PPC_WEAK_FUNC(sub_83C8C8F8);
PPC_FUNC_IMPL(__imp__sub_83C8C8F8) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r4,r11,-10008
	ctx.r4.s64 = ctx.r11.s64 + -10008;
	// addi r3,r10,-12932
	ctx.r3.s64 = ctx.r10.s64 + -12932;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x8259cc28
	ctx.lr = 0x83C8C91C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,12760
	ctx.r3.s64 = ctx.r9.s64 + 12760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8C928;
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

__attribute__((alias("__imp__sub_83C8C938"))) PPC_WEAK_FUNC(sub_83C8C938);
PPC_FUNC_IMPL(__imp__sub_83C8C938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12864
	ctx.r3.s64 = ctx.r11.s64 + 12864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C944"))) PPC_WEAK_FUNC(sub_83C8C944);
PPC_FUNC_IMPL(__imp__sub_83C8C944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C948"))) PPC_WEAK_FUNC(sub_83C8C948);
PPC_FUNC_IMPL(__imp__sub_83C8C948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12872
	ctx.r3.s64 = ctx.r11.s64 + 12872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C954"))) PPC_WEAK_FUNC(sub_83C8C954);
PPC_FUNC_IMPL(__imp__sub_83C8C954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C958"))) PPC_WEAK_FUNC(sub_83C8C958);
PPC_FUNC_IMPL(__imp__sub_83C8C958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12880
	ctx.r3.s64 = ctx.r11.s64 + 12880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C964"))) PPC_WEAK_FUNC(sub_83C8C964);
PPC_FUNC_IMPL(__imp__sub_83C8C964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C968"))) PPC_WEAK_FUNC(sub_83C8C968);
PPC_FUNC_IMPL(__imp__sub_83C8C968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12888
	ctx.r3.s64 = ctx.r11.s64 + 12888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C974"))) PPC_WEAK_FUNC(sub_83C8C974);
PPC_FUNC_IMPL(__imp__sub_83C8C974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8C978"))) PPC_WEAK_FUNC(sub_83C8C978);
PPC_FUNC_IMPL(__imp__sub_83C8C978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,12896
	ctx.r3.s64 = ctx.r11.s64 + 12896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8C984"))) PPC_WEAK_FUNC(sub_83C8C984);
PPC_FUNC_IMPL(__imp__sub_83C8C984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

