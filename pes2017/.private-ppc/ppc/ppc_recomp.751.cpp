#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C2FCD0"))) PPC_WEAK_FUNC(sub_83C2FCD0);
PPC_FUNC_IMPL(__imp__sub_83C2FCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4324
	ctx.r11.s64 = ctx.r8.s64 + 4324;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,29992(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29992);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13488
	ctx.r3.s64 = ctx.r6.s64 + 13488;
	// stw r10,4324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4324, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FD00"))) PPC_WEAK_FUNC(sub_83C2FD00);
PPC_FUNC_IMPL(__imp__sub_83C2FD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13504
	ctx.r3.s64 = ctx.r11.s64 + 13504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FD0C"))) PPC_WEAK_FUNC(sub_83C2FD0C);
PPC_FUNC_IMPL(__imp__sub_83C2FD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FD10"))) PPC_WEAK_FUNC(sub_83C2FD10);
PPC_FUNC_IMPL(__imp__sub_83C2FD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13512
	ctx.r3.s64 = ctx.r11.s64 + 13512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FD1C"))) PPC_WEAK_FUNC(sub_83C2FD1C);
PPC_FUNC_IMPL(__imp__sub_83C2FD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FD20"))) PPC_WEAK_FUNC(sub_83C2FD20);
PPC_FUNC_IMPL(__imp__sub_83C2FD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13520
	ctx.r3.s64 = ctx.r11.s64 + 13520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FD2C"))) PPC_WEAK_FUNC(sub_83C2FD2C);
PPC_FUNC_IMPL(__imp__sub_83C2FD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FD30"))) PPC_WEAK_FUNC(sub_83C2FD30);
PPC_FUNC_IMPL(__imp__sub_83C2FD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13528
	ctx.r3.s64 = ctx.r11.s64 + 13528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FD3C"))) PPC_WEAK_FUNC(sub_83C2FD3C);
PPC_FUNC_IMPL(__imp__sub_83C2FD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FD40"))) PPC_WEAK_FUNC(sub_83C2FD40);
PPC_FUNC_IMPL(__imp__sub_83C2FD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13536
	ctx.r3.s64 = ctx.r11.s64 + 13536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FD4C"))) PPC_WEAK_FUNC(sub_83C2FD4C);
PPC_FUNC_IMPL(__imp__sub_83C2FD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FD50"))) PPC_WEAK_FUNC(sub_83C2FD50);
PPC_FUNC_IMPL(__imp__sub_83C2FD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13544
	ctx.r3.s64 = ctx.r11.s64 + 13544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FD5C"))) PPC_WEAK_FUNC(sub_83C2FD5C);
PPC_FUNC_IMPL(__imp__sub_83C2FD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FD60"))) PPC_WEAK_FUNC(sub_83C2FD60);
PPC_FUNC_IMPL(__imp__sub_83C2FD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13552
	ctx.r3.s64 = ctx.r11.s64 + 13552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FD6C"))) PPC_WEAK_FUNC(sub_83C2FD6C);
PPC_FUNC_IMPL(__imp__sub_83C2FD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FD70"))) PPC_WEAK_FUNC(sub_83C2FD70);
PPC_FUNC_IMPL(__imp__sub_83C2FD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13560
	ctx.r3.s64 = ctx.r11.s64 + 13560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FD7C"))) PPC_WEAK_FUNC(sub_83C2FD7C);
PPC_FUNC_IMPL(__imp__sub_83C2FD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FD80"))) PPC_WEAK_FUNC(sub_83C2FD80);
PPC_FUNC_IMPL(__imp__sub_83C2FD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13568
	ctx.r3.s64 = ctx.r11.s64 + 13568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FD8C"))) PPC_WEAK_FUNC(sub_83C2FD8C);
PPC_FUNC_IMPL(__imp__sub_83C2FD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FD90"))) PPC_WEAK_FUNC(sub_83C2FD90);
PPC_FUNC_IMPL(__imp__sub_83C2FD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13576
	ctx.r3.s64 = ctx.r11.s64 + 13576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FD9C"))) PPC_WEAK_FUNC(sub_83C2FD9C);
PPC_FUNC_IMPL(__imp__sub_83C2FD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FDA0"))) PPC_WEAK_FUNC(sub_83C2FDA0);
PPC_FUNC_IMPL(__imp__sub_83C2FDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13584
	ctx.r3.s64 = ctx.r11.s64 + 13584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FDAC"))) PPC_WEAK_FUNC(sub_83C2FDAC);
PPC_FUNC_IMPL(__imp__sub_83C2FDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FDB0"))) PPC_WEAK_FUNC(sub_83C2FDB0);
PPC_FUNC_IMPL(__imp__sub_83C2FDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13592
	ctx.r3.s64 = ctx.r11.s64 + 13592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FDBC"))) PPC_WEAK_FUNC(sub_83C2FDBC);
PPC_FUNC_IMPL(__imp__sub_83C2FDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FDC0"))) PPC_WEAK_FUNC(sub_83C2FDC0);
PPC_FUNC_IMPL(__imp__sub_83C2FDC0) {
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
	// addi r3,r11,4688
	ctx.r3.s64 = ctx.r11.s64 + 4688;
	// bl 0x83523120
	ctx.lr = 0x83C2FDD8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,13600
	ctx.r3.s64 = ctx.r10.s64 + 13600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2FDE4;
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

__attribute__((alias("__imp__sub_83C2FDF4"))) PPC_WEAK_FUNC(sub_83C2FDF4);
PPC_FUNC_IMPL(__imp__sub_83C2FDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FDF8"))) PPC_WEAK_FUNC(sub_83C2FDF8);
PPC_FUNC_IMPL(__imp__sub_83C2FDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4704
	ctx.r7.s64 = ctx.r8.s64 + 4704;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4704(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4704);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4704(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4704, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2FE20"))) PPC_WEAK_FUNC(sub_83C2FE20);
PPC_FUNC_IMPL(__imp__sub_83C2FE20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,30144
	ctx.r6.s64 = ctx.r7.s64 + 30144;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30072(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30072);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4704(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4704);
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
	// std r9,30144(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30144, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2FE68"))) PPC_WEAK_FUNC(sub_83C2FE68);
PPC_FUNC_IMPL(__imp__sub_83C2FE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13616
	ctx.r3.s64 = ctx.r11.s64 + 13616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FE74"))) PPC_WEAK_FUNC(sub_83C2FE74);
PPC_FUNC_IMPL(__imp__sub_83C2FE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FE78"))) PPC_WEAK_FUNC(sub_83C2FE78);
PPC_FUNC_IMPL(__imp__sub_83C2FE78) {
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
	// addi r3,r11,4712
	ctx.r3.s64 = ctx.r11.s64 + 4712;
	// bl 0x8259af80
	ctx.lr = 0x83C2FE90;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,13632
	ctx.r3.s64 = ctx.r10.s64 + 13632;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2FE9C;
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

__attribute__((alias("__imp__sub_83C2FEAC"))) PPC_WEAK_FUNC(sub_83C2FEAC);
PPC_FUNC_IMPL(__imp__sub_83C2FEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FEB0"))) PPC_WEAK_FUNC(sub_83C2FEB0);
PPC_FUNC_IMPL(__imp__sub_83C2FEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4692
	ctx.r11.s64 = ctx.r8.s64 + 4692;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,30120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30120);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13624
	ctx.r3.s64 = ctx.r6.s64 + 13624;
	// stw r10,4692(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4692, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FEE0"))) PPC_WEAK_FUNC(sub_83C2FEE0);
PPC_FUNC_IMPL(__imp__sub_83C2FEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13640
	ctx.r3.s64 = ctx.r11.s64 + 13640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FEEC"))) PPC_WEAK_FUNC(sub_83C2FEEC);
PPC_FUNC_IMPL(__imp__sub_83C2FEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FEF0"))) PPC_WEAK_FUNC(sub_83C2FEF0);
PPC_FUNC_IMPL(__imp__sub_83C2FEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13648
	ctx.r3.s64 = ctx.r11.s64 + 13648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FEFC"))) PPC_WEAK_FUNC(sub_83C2FEFC);
PPC_FUNC_IMPL(__imp__sub_83C2FEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FF00"))) PPC_WEAK_FUNC(sub_83C2FF00);
PPC_FUNC_IMPL(__imp__sub_83C2FF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13656
	ctx.r3.s64 = ctx.r11.s64 + 13656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FF0C"))) PPC_WEAK_FUNC(sub_83C2FF0C);
PPC_FUNC_IMPL(__imp__sub_83C2FF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FF10"))) PPC_WEAK_FUNC(sub_83C2FF10);
PPC_FUNC_IMPL(__imp__sub_83C2FF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13664
	ctx.r3.s64 = ctx.r11.s64 + 13664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FF1C"))) PPC_WEAK_FUNC(sub_83C2FF1C);
PPC_FUNC_IMPL(__imp__sub_83C2FF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FF20"))) PPC_WEAK_FUNC(sub_83C2FF20);
PPC_FUNC_IMPL(__imp__sub_83C2FF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13672
	ctx.r3.s64 = ctx.r11.s64 + 13672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FF2C"))) PPC_WEAK_FUNC(sub_83C2FF2C);
PPC_FUNC_IMPL(__imp__sub_83C2FF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FF30"))) PPC_WEAK_FUNC(sub_83C2FF30);
PPC_FUNC_IMPL(__imp__sub_83C2FF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13680
	ctx.r3.s64 = ctx.r11.s64 + 13680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FF3C"))) PPC_WEAK_FUNC(sub_83C2FF3C);
PPC_FUNC_IMPL(__imp__sub_83C2FF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FF40"))) PPC_WEAK_FUNC(sub_83C2FF40);
PPC_FUNC_IMPL(__imp__sub_83C2FF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13688
	ctx.r3.s64 = ctx.r11.s64 + 13688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FF4C"))) PPC_WEAK_FUNC(sub_83C2FF4C);
PPC_FUNC_IMPL(__imp__sub_83C2FF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FF50"))) PPC_WEAK_FUNC(sub_83C2FF50);
PPC_FUNC_IMPL(__imp__sub_83C2FF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FF5C"))) PPC_WEAK_FUNC(sub_83C2FF5C);
PPC_FUNC_IMPL(__imp__sub_83C2FF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FF60"))) PPC_WEAK_FUNC(sub_83C2FF60);
PPC_FUNC_IMPL(__imp__sub_83C2FF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13704
	ctx.r3.s64 = ctx.r11.s64 + 13704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FF6C"))) PPC_WEAK_FUNC(sub_83C2FF6C);
PPC_FUNC_IMPL(__imp__sub_83C2FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FF70"))) PPC_WEAK_FUNC(sub_83C2FF70);
PPC_FUNC_IMPL(__imp__sub_83C2FF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FF7C"))) PPC_WEAK_FUNC(sub_83C2FF7C);
PPC_FUNC_IMPL(__imp__sub_83C2FF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FF80"))) PPC_WEAK_FUNC(sub_83C2FF80);
PPC_FUNC_IMPL(__imp__sub_83C2FF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13720
	ctx.r3.s64 = ctx.r11.s64 + 13720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FF8C"))) PPC_WEAK_FUNC(sub_83C2FF8C);
PPC_FUNC_IMPL(__imp__sub_83C2FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FF90"))) PPC_WEAK_FUNC(sub_83C2FF90);
PPC_FUNC_IMPL(__imp__sub_83C2FF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13728
	ctx.r3.s64 = ctx.r11.s64 + 13728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2FF9C"))) PPC_WEAK_FUNC(sub_83C2FF9C);
PPC_FUNC_IMPL(__imp__sub_83C2FF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FFA0"))) PPC_WEAK_FUNC(sub_83C2FFA0);
PPC_FUNC_IMPL(__imp__sub_83C2FFA0) {
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
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// bl 0x83523120
	ctx.lr = 0x83C2FFB8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,13736
	ctx.r3.s64 = ctx.r10.s64 + 13736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2FFC4;
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

__attribute__((alias("__imp__sub_83C2FFD4"))) PPC_WEAK_FUNC(sub_83C2FFD4);
PPC_FUNC_IMPL(__imp__sub_83C2FFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2FFD8"))) PPC_WEAK_FUNC(sub_83C2FFD8);
PPC_FUNC_IMPL(__imp__sub_83C2FFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5060
	ctx.r7.s64 = ctx.r8.s64 + 5060;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5060(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5060);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5060(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5060, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C30000"))) PPC_WEAK_FUNC(sub_83C30000);
PPC_FUNC_IMPL(__imp__sub_83C30000) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,30272
	ctx.r6.s64 = ctx.r7.s64 + 30272;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30200(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30200);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5060(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5060);
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
	// std r9,30272(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30272, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C30048"))) PPC_WEAK_FUNC(sub_83C30048);
PPC_FUNC_IMPL(__imp__sub_83C30048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13752
	ctx.r3.s64 = ctx.r11.s64 + 13752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30054"))) PPC_WEAK_FUNC(sub_83C30054);
PPC_FUNC_IMPL(__imp__sub_83C30054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30058"))) PPC_WEAK_FUNC(sub_83C30058);
PPC_FUNC_IMPL(__imp__sub_83C30058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13760
	ctx.r3.s64 = ctx.r11.s64 + 13760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30064"))) PPC_WEAK_FUNC(sub_83C30064);
PPC_FUNC_IMPL(__imp__sub_83C30064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30068"))) PPC_WEAK_FUNC(sub_83C30068);
PPC_FUNC_IMPL(__imp__sub_83C30068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13768
	ctx.r3.s64 = ctx.r11.s64 + 13768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30074"))) PPC_WEAK_FUNC(sub_83C30074);
PPC_FUNC_IMPL(__imp__sub_83C30074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30078"))) PPC_WEAK_FUNC(sub_83C30078);
PPC_FUNC_IMPL(__imp__sub_83C30078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13776
	ctx.r3.s64 = ctx.r11.s64 + 13776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30084"))) PPC_WEAK_FUNC(sub_83C30084);
PPC_FUNC_IMPL(__imp__sub_83C30084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30088"))) PPC_WEAK_FUNC(sub_83C30088);
PPC_FUNC_IMPL(__imp__sub_83C30088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13784
	ctx.r3.s64 = ctx.r11.s64 + 13784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30094"))) PPC_WEAK_FUNC(sub_83C30094);
PPC_FUNC_IMPL(__imp__sub_83C30094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30098"))) PPC_WEAK_FUNC(sub_83C30098);
PPC_FUNC_IMPL(__imp__sub_83C30098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13792
	ctx.r3.s64 = ctx.r11.s64 + 13792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C300A4"))) PPC_WEAK_FUNC(sub_83C300A4);
PPC_FUNC_IMPL(__imp__sub_83C300A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C300A8"))) PPC_WEAK_FUNC(sub_83C300A8);
PPC_FUNC_IMPL(__imp__sub_83C300A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13800
	ctx.r3.s64 = ctx.r11.s64 + 13800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C300B4"))) PPC_WEAK_FUNC(sub_83C300B4);
PPC_FUNC_IMPL(__imp__sub_83C300B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C300B8"))) PPC_WEAK_FUNC(sub_83C300B8);
PPC_FUNC_IMPL(__imp__sub_83C300B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13808
	ctx.r3.s64 = ctx.r11.s64 + 13808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C300C4"))) PPC_WEAK_FUNC(sub_83C300C4);
PPC_FUNC_IMPL(__imp__sub_83C300C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C300C8"))) PPC_WEAK_FUNC(sub_83C300C8);
PPC_FUNC_IMPL(__imp__sub_83C300C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13816
	ctx.r3.s64 = ctx.r11.s64 + 13816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C300D4"))) PPC_WEAK_FUNC(sub_83C300D4);
PPC_FUNC_IMPL(__imp__sub_83C300D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C300D8"))) PPC_WEAK_FUNC(sub_83C300D8);
PPC_FUNC_IMPL(__imp__sub_83C300D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13824
	ctx.r3.s64 = ctx.r11.s64 + 13824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C300E4"))) PPC_WEAK_FUNC(sub_83C300E4);
PPC_FUNC_IMPL(__imp__sub_83C300E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C300E8"))) PPC_WEAK_FUNC(sub_83C300E8);
PPC_FUNC_IMPL(__imp__sub_83C300E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13832
	ctx.r3.s64 = ctx.r11.s64 + 13832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C300F4"))) PPC_WEAK_FUNC(sub_83C300F4);
PPC_FUNC_IMPL(__imp__sub_83C300F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C300F8"))) PPC_WEAK_FUNC(sub_83C300F8);
PPC_FUNC_IMPL(__imp__sub_83C300F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13840
	ctx.r3.s64 = ctx.r11.s64 + 13840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30104"))) PPC_WEAK_FUNC(sub_83C30104);
PPC_FUNC_IMPL(__imp__sub_83C30104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30108"))) PPC_WEAK_FUNC(sub_83C30108);
PPC_FUNC_IMPL(__imp__sub_83C30108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13848
	ctx.r3.s64 = ctx.r11.s64 + 13848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30114"))) PPC_WEAK_FUNC(sub_83C30114);
PPC_FUNC_IMPL(__imp__sub_83C30114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30118"))) PPC_WEAK_FUNC(sub_83C30118);
PPC_FUNC_IMPL(__imp__sub_83C30118) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,30668
	ctx.r4.s64 = ctx.r11.s64 + 30668;
	// addi r3,r10,30400
	ctx.r3.s64 = ctx.r10.s64 + 30400;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C3013C;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,13896
	ctx.r3.s64 = ctx.r9.s64 + 13896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C30148;
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

__attribute__((alias("__imp__sub_83C30158"))) PPC_WEAK_FUNC(sub_83C30158);
PPC_FUNC_IMPL(__imp__sub_83C30158) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5088
	ctx.r7.s64 = ctx.r8.s64 + 5088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5088);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5088(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5088, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C30180"))) PPC_WEAK_FUNC(sub_83C30180);
PPC_FUNC_IMPL(__imp__sub_83C30180) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,30428
	ctx.r6.s64 = ctx.r7.s64 + 30428;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30328(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30328);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5088);
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
	// std r9,30428(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30428, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C301C8"))) PPC_WEAK_FUNC(sub_83C301C8);
PPC_FUNC_IMPL(__imp__sub_83C301C8) {
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
	// addi r3,r11,5072
	ctx.r3.s64 = ctx.r11.s64 + 5072;
	// bl 0x83523120
	ctx.lr = 0x83C301E0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,13856
	ctx.r3.s64 = ctx.r10.s64 + 13856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C301EC;
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

__attribute__((alias("__imp__sub_83C301FC"))) PPC_WEAK_FUNC(sub_83C301FC);
PPC_FUNC_IMPL(__imp__sub_83C301FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30200"))) PPC_WEAK_FUNC(sub_83C30200);
PPC_FUNC_IMPL(__imp__sub_83C30200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,13872
	ctx.r3.s64 = ctx.r11.s64 + 13872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3020C"))) PPC_WEAK_FUNC(sub_83C3020C);
PPC_FUNC_IMPL(__imp__sub_83C3020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30210"))) PPC_WEAK_FUNC(sub_83C30210);
PPC_FUNC_IMPL(__imp__sub_83C30210) {
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
	// addi r3,r11,5096
	ctx.r3.s64 = ctx.r11.s64 + 5096;
	// bl 0x8259af80
	ctx.lr = 0x83C30228;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,13888
	ctx.r3.s64 = ctx.r10.s64 + 13888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C30234;
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

__attribute__((alias("__imp__sub_83C30244"))) PPC_WEAK_FUNC(sub_83C30244);
PPC_FUNC_IMPL(__imp__sub_83C30244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30248"))) PPC_WEAK_FUNC(sub_83C30248);
PPC_FUNC_IMPL(__imp__sub_83C30248) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5076
	ctx.r11.s64 = ctx.r8.s64 + 5076;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,30376(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30376);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13880
	ctx.r3.s64 = ctx.r6.s64 + 13880;
	// stw r10,5076(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5076, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30278"))) PPC_WEAK_FUNC(sub_83C30278);
PPC_FUNC_IMPL(__imp__sub_83C30278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14000
	ctx.r3.s64 = ctx.r11.s64 + 14000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30284"))) PPC_WEAK_FUNC(sub_83C30284);
PPC_FUNC_IMPL(__imp__sub_83C30284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30288"))) PPC_WEAK_FUNC(sub_83C30288);
PPC_FUNC_IMPL(__imp__sub_83C30288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14008
	ctx.r3.s64 = ctx.r11.s64 + 14008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30294"))) PPC_WEAK_FUNC(sub_83C30294);
PPC_FUNC_IMPL(__imp__sub_83C30294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30298"))) PPC_WEAK_FUNC(sub_83C30298);
PPC_FUNC_IMPL(__imp__sub_83C30298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14016
	ctx.r3.s64 = ctx.r11.s64 + 14016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C302A4"))) PPC_WEAK_FUNC(sub_83C302A4);
PPC_FUNC_IMPL(__imp__sub_83C302A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C302A8"))) PPC_WEAK_FUNC(sub_83C302A8);
PPC_FUNC_IMPL(__imp__sub_83C302A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14024
	ctx.r3.s64 = ctx.r11.s64 + 14024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C302B4"))) PPC_WEAK_FUNC(sub_83C302B4);
PPC_FUNC_IMPL(__imp__sub_83C302B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C302B8"))) PPC_WEAK_FUNC(sub_83C302B8);
PPC_FUNC_IMPL(__imp__sub_83C302B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14032
	ctx.r3.s64 = ctx.r11.s64 + 14032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C302C4"))) PPC_WEAK_FUNC(sub_83C302C4);
PPC_FUNC_IMPL(__imp__sub_83C302C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C302C8"))) PPC_WEAK_FUNC(sub_83C302C8);
PPC_FUNC_IMPL(__imp__sub_83C302C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14040
	ctx.r3.s64 = ctx.r11.s64 + 14040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C302D4"))) PPC_WEAK_FUNC(sub_83C302D4);
PPC_FUNC_IMPL(__imp__sub_83C302D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C302D8"))) PPC_WEAK_FUNC(sub_83C302D8);
PPC_FUNC_IMPL(__imp__sub_83C302D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14048
	ctx.r3.s64 = ctx.r11.s64 + 14048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C302E4"))) PPC_WEAK_FUNC(sub_83C302E4);
PPC_FUNC_IMPL(__imp__sub_83C302E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C302E8"))) PPC_WEAK_FUNC(sub_83C302E8);
PPC_FUNC_IMPL(__imp__sub_83C302E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14056
	ctx.r3.s64 = ctx.r11.s64 + 14056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C302F4"))) PPC_WEAK_FUNC(sub_83C302F4);
PPC_FUNC_IMPL(__imp__sub_83C302F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C302F8"))) PPC_WEAK_FUNC(sub_83C302F8);
PPC_FUNC_IMPL(__imp__sub_83C302F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14064
	ctx.r3.s64 = ctx.r11.s64 + 14064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30304"))) PPC_WEAK_FUNC(sub_83C30304);
PPC_FUNC_IMPL(__imp__sub_83C30304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30308"))) PPC_WEAK_FUNC(sub_83C30308);
PPC_FUNC_IMPL(__imp__sub_83C30308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14072
	ctx.r3.s64 = ctx.r11.s64 + 14072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30314"))) PPC_WEAK_FUNC(sub_83C30314);
PPC_FUNC_IMPL(__imp__sub_83C30314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30318"))) PPC_WEAK_FUNC(sub_83C30318);
PPC_FUNC_IMPL(__imp__sub_83C30318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14080
	ctx.r3.s64 = ctx.r11.s64 + 14080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30324"))) PPC_WEAK_FUNC(sub_83C30324);
PPC_FUNC_IMPL(__imp__sub_83C30324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30328"))) PPC_WEAK_FUNC(sub_83C30328);
PPC_FUNC_IMPL(__imp__sub_83C30328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14088
	ctx.r3.s64 = ctx.r11.s64 + 14088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30334"))) PPC_WEAK_FUNC(sub_83C30334);
PPC_FUNC_IMPL(__imp__sub_83C30334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30338"))) PPC_WEAK_FUNC(sub_83C30338);
PPC_FUNC_IMPL(__imp__sub_83C30338) {
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
	// addi r3,r11,5440
	ctx.r3.s64 = ctx.r11.s64 + 5440;
	// bl 0x83523120
	ctx.lr = 0x83C30350;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,14096
	ctx.r3.s64 = ctx.r10.s64 + 14096;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3035C;
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

__attribute__((alias("__imp__sub_83C3036C"))) PPC_WEAK_FUNC(sub_83C3036C);
PPC_FUNC_IMPL(__imp__sub_83C3036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30370"))) PPC_WEAK_FUNC(sub_83C30370);
PPC_FUNC_IMPL(__imp__sub_83C30370) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5456
	ctx.r7.s64 = ctx.r8.s64 + 5456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C30398"))) PPC_WEAK_FUNC(sub_83C30398);
PPC_FUNC_IMPL(__imp__sub_83C30398) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,30556
	ctx.r6.s64 = ctx.r7.s64 + 30556;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30484(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30484);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5456);
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
	// std r9,30556(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30556, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C303E0"))) PPC_WEAK_FUNC(sub_83C303E0);
PPC_FUNC_IMPL(__imp__sub_83C303E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14112
	ctx.r3.s64 = ctx.r11.s64 + 14112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C303EC"))) PPC_WEAK_FUNC(sub_83C303EC);
PPC_FUNC_IMPL(__imp__sub_83C303EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C303F0"))) PPC_WEAK_FUNC(sub_83C303F0);
PPC_FUNC_IMPL(__imp__sub_83C303F0) {
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
	// addi r3,r11,5464
	ctx.r3.s64 = ctx.r11.s64 + 5464;
	// bl 0x8259af80
	ctx.lr = 0x83C30408;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,14128
	ctx.r3.s64 = ctx.r10.s64 + 14128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C30414;
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

__attribute__((alias("__imp__sub_83C30424"))) PPC_WEAK_FUNC(sub_83C30424);
PPC_FUNC_IMPL(__imp__sub_83C30424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30428"))) PPC_WEAK_FUNC(sub_83C30428);
PPC_FUNC_IMPL(__imp__sub_83C30428) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5444
	ctx.r11.s64 = ctx.r8.s64 + 5444;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,30532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30532);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14120
	ctx.r3.s64 = ctx.r6.s64 + 14120;
	// stw r10,5444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5444, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30458"))) PPC_WEAK_FUNC(sub_83C30458);
PPC_FUNC_IMPL(__imp__sub_83C30458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14136
	ctx.r3.s64 = ctx.r11.s64 + 14136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30464"))) PPC_WEAK_FUNC(sub_83C30464);
PPC_FUNC_IMPL(__imp__sub_83C30464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30468"))) PPC_WEAK_FUNC(sub_83C30468);
PPC_FUNC_IMPL(__imp__sub_83C30468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14144
	ctx.r3.s64 = ctx.r11.s64 + 14144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30474"))) PPC_WEAK_FUNC(sub_83C30474);
PPC_FUNC_IMPL(__imp__sub_83C30474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30478"))) PPC_WEAK_FUNC(sub_83C30478);
PPC_FUNC_IMPL(__imp__sub_83C30478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14152
	ctx.r3.s64 = ctx.r11.s64 + 14152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30484"))) PPC_WEAK_FUNC(sub_83C30484);
PPC_FUNC_IMPL(__imp__sub_83C30484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30488"))) PPC_WEAK_FUNC(sub_83C30488);
PPC_FUNC_IMPL(__imp__sub_83C30488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14160
	ctx.r3.s64 = ctx.r11.s64 + 14160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30494"))) PPC_WEAK_FUNC(sub_83C30494);
PPC_FUNC_IMPL(__imp__sub_83C30494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30498"))) PPC_WEAK_FUNC(sub_83C30498);
PPC_FUNC_IMPL(__imp__sub_83C30498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14168
	ctx.r3.s64 = ctx.r11.s64 + 14168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C304A4"))) PPC_WEAK_FUNC(sub_83C304A4);
PPC_FUNC_IMPL(__imp__sub_83C304A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C304A8"))) PPC_WEAK_FUNC(sub_83C304A8);
PPC_FUNC_IMPL(__imp__sub_83C304A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14176
	ctx.r3.s64 = ctx.r11.s64 + 14176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C304B4"))) PPC_WEAK_FUNC(sub_83C304B4);
PPC_FUNC_IMPL(__imp__sub_83C304B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C304B8"))) PPC_WEAK_FUNC(sub_83C304B8);
PPC_FUNC_IMPL(__imp__sub_83C304B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14184
	ctx.r3.s64 = ctx.r11.s64 + 14184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C304C4"))) PPC_WEAK_FUNC(sub_83C304C4);
PPC_FUNC_IMPL(__imp__sub_83C304C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C304C8"))) PPC_WEAK_FUNC(sub_83C304C8);
PPC_FUNC_IMPL(__imp__sub_83C304C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14192
	ctx.r3.s64 = ctx.r11.s64 + 14192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C304D4"))) PPC_WEAK_FUNC(sub_83C304D4);
PPC_FUNC_IMPL(__imp__sub_83C304D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C304D8"))) PPC_WEAK_FUNC(sub_83C304D8);
PPC_FUNC_IMPL(__imp__sub_83C304D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14200
	ctx.r3.s64 = ctx.r11.s64 + 14200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C304E4"))) PPC_WEAK_FUNC(sub_83C304E4);
PPC_FUNC_IMPL(__imp__sub_83C304E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C304E8"))) PPC_WEAK_FUNC(sub_83C304E8);
PPC_FUNC_IMPL(__imp__sub_83C304E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14208
	ctx.r3.s64 = ctx.r11.s64 + 14208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C304F4"))) PPC_WEAK_FUNC(sub_83C304F4);
PPC_FUNC_IMPL(__imp__sub_83C304F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C304F8"))) PPC_WEAK_FUNC(sub_83C304F8);
PPC_FUNC_IMPL(__imp__sub_83C304F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14216
	ctx.r3.s64 = ctx.r11.s64 + 14216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30504"))) PPC_WEAK_FUNC(sub_83C30504);
PPC_FUNC_IMPL(__imp__sub_83C30504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30508"))) PPC_WEAK_FUNC(sub_83C30508);
PPC_FUNC_IMPL(__imp__sub_83C30508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14224
	ctx.r3.s64 = ctx.r11.s64 + 14224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30514"))) PPC_WEAK_FUNC(sub_83C30514);
PPC_FUNC_IMPL(__imp__sub_83C30514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30518"))) PPC_WEAK_FUNC(sub_83C30518);
PPC_FUNC_IMPL(__imp__sub_83C30518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14232
	ctx.r3.s64 = ctx.r11.s64 + 14232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30524"))) PPC_WEAK_FUNC(sub_83C30524);
PPC_FUNC_IMPL(__imp__sub_83C30524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30528"))) PPC_WEAK_FUNC(sub_83C30528);
PPC_FUNC_IMPL(__imp__sub_83C30528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14240
	ctx.r3.s64 = ctx.r11.s64 + 14240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30534"))) PPC_WEAK_FUNC(sub_83C30534);
PPC_FUNC_IMPL(__imp__sub_83C30534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30538"))) PPC_WEAK_FUNC(sub_83C30538);
PPC_FUNC_IMPL(__imp__sub_83C30538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14248
	ctx.r3.s64 = ctx.r11.s64 + 14248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30544"))) PPC_WEAK_FUNC(sub_83C30544);
PPC_FUNC_IMPL(__imp__sub_83C30544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30548"))) PPC_WEAK_FUNC(sub_83C30548);
PPC_FUNC_IMPL(__imp__sub_83C30548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14256
	ctx.r3.s64 = ctx.r11.s64 + 14256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30554"))) PPC_WEAK_FUNC(sub_83C30554);
PPC_FUNC_IMPL(__imp__sub_83C30554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30558"))) PPC_WEAK_FUNC(sub_83C30558);
PPC_FUNC_IMPL(__imp__sub_83C30558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30564"))) PPC_WEAK_FUNC(sub_83C30564);
PPC_FUNC_IMPL(__imp__sub_83C30564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30568"))) PPC_WEAK_FUNC(sub_83C30568);
PPC_FUNC_IMPL(__imp__sub_83C30568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14272
	ctx.r3.s64 = ctx.r11.s64 + 14272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30574"))) PPC_WEAK_FUNC(sub_83C30574);
PPC_FUNC_IMPL(__imp__sub_83C30574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30578"))) PPC_WEAK_FUNC(sub_83C30578);
PPC_FUNC_IMPL(__imp__sub_83C30578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14280
	ctx.r3.s64 = ctx.r11.s64 + 14280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30584"))) PPC_WEAK_FUNC(sub_83C30584);
PPC_FUNC_IMPL(__imp__sub_83C30584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30588"))) PPC_WEAK_FUNC(sub_83C30588);
PPC_FUNC_IMPL(__imp__sub_83C30588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14288
	ctx.r3.s64 = ctx.r11.s64 + 14288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30594"))) PPC_WEAK_FUNC(sub_83C30594);
PPC_FUNC_IMPL(__imp__sub_83C30594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30598"))) PPC_WEAK_FUNC(sub_83C30598);
PPC_FUNC_IMPL(__imp__sub_83C30598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14296
	ctx.r3.s64 = ctx.r11.s64 + 14296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C305A4"))) PPC_WEAK_FUNC(sub_83C305A4);
PPC_FUNC_IMPL(__imp__sub_83C305A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C305A8"))) PPC_WEAK_FUNC(sub_83C305A8);
PPC_FUNC_IMPL(__imp__sub_83C305A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14304
	ctx.r3.s64 = ctx.r11.s64 + 14304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C305B4"))) PPC_WEAK_FUNC(sub_83C305B4);
PPC_FUNC_IMPL(__imp__sub_83C305B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C305B8"))) PPC_WEAK_FUNC(sub_83C305B8);
PPC_FUNC_IMPL(__imp__sub_83C305B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14312
	ctx.r3.s64 = ctx.r11.s64 + 14312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C305C4"))) PPC_WEAK_FUNC(sub_83C305C4);
PPC_FUNC_IMPL(__imp__sub_83C305C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C305C8"))) PPC_WEAK_FUNC(sub_83C305C8);
PPC_FUNC_IMPL(__imp__sub_83C305C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14320
	ctx.r3.s64 = ctx.r11.s64 + 14320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C305D4"))) PPC_WEAK_FUNC(sub_83C305D4);
PPC_FUNC_IMPL(__imp__sub_83C305D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C305D8"))) PPC_WEAK_FUNC(sub_83C305D8);
PPC_FUNC_IMPL(__imp__sub_83C305D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14328
	ctx.r3.s64 = ctx.r11.s64 + 14328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C305E4"))) PPC_WEAK_FUNC(sub_83C305E4);
PPC_FUNC_IMPL(__imp__sub_83C305E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C305E8"))) PPC_WEAK_FUNC(sub_83C305E8);
PPC_FUNC_IMPL(__imp__sub_83C305E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14336
	ctx.r3.s64 = ctx.r11.s64 + 14336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C305F4"))) PPC_WEAK_FUNC(sub_83C305F4);
PPC_FUNC_IMPL(__imp__sub_83C305F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C305F8"))) PPC_WEAK_FUNC(sub_83C305F8);
PPC_FUNC_IMPL(__imp__sub_83C305F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14344
	ctx.r3.s64 = ctx.r11.s64 + 14344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30604"))) PPC_WEAK_FUNC(sub_83C30604);
PPC_FUNC_IMPL(__imp__sub_83C30604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30608"))) PPC_WEAK_FUNC(sub_83C30608);
PPC_FUNC_IMPL(__imp__sub_83C30608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14352
	ctx.r3.s64 = ctx.r11.s64 + 14352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30614"))) PPC_WEAK_FUNC(sub_83C30614);
PPC_FUNC_IMPL(__imp__sub_83C30614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30618"))) PPC_WEAK_FUNC(sub_83C30618);
PPC_FUNC_IMPL(__imp__sub_83C30618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14360
	ctx.r3.s64 = ctx.r11.s64 + 14360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30624"))) PPC_WEAK_FUNC(sub_83C30624);
PPC_FUNC_IMPL(__imp__sub_83C30624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30628"))) PPC_WEAK_FUNC(sub_83C30628);
PPC_FUNC_IMPL(__imp__sub_83C30628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14368
	ctx.r3.s64 = ctx.r11.s64 + 14368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30634"))) PPC_WEAK_FUNC(sub_83C30634);
PPC_FUNC_IMPL(__imp__sub_83C30634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30638"))) PPC_WEAK_FUNC(sub_83C30638);
PPC_FUNC_IMPL(__imp__sub_83C30638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14376
	ctx.r3.s64 = ctx.r11.s64 + 14376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30644"))) PPC_WEAK_FUNC(sub_83C30644);
PPC_FUNC_IMPL(__imp__sub_83C30644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30648"))) PPC_WEAK_FUNC(sub_83C30648);
PPC_FUNC_IMPL(__imp__sub_83C30648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14384
	ctx.r3.s64 = ctx.r11.s64 + 14384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30654"))) PPC_WEAK_FUNC(sub_83C30654);
PPC_FUNC_IMPL(__imp__sub_83C30654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30658"))) PPC_WEAK_FUNC(sub_83C30658);
PPC_FUNC_IMPL(__imp__sub_83C30658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14392
	ctx.r3.s64 = ctx.r11.s64 + 14392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30664"))) PPC_WEAK_FUNC(sub_83C30664);
PPC_FUNC_IMPL(__imp__sub_83C30664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30668"))) PPC_WEAK_FUNC(sub_83C30668);
PPC_FUNC_IMPL(__imp__sub_83C30668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14400
	ctx.r3.s64 = ctx.r11.s64 + 14400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30674"))) PPC_WEAK_FUNC(sub_83C30674);
PPC_FUNC_IMPL(__imp__sub_83C30674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30678"))) PPC_WEAK_FUNC(sub_83C30678);
PPC_FUNC_IMPL(__imp__sub_83C30678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14408
	ctx.r3.s64 = ctx.r11.s64 + 14408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30684"))) PPC_WEAK_FUNC(sub_83C30684);
PPC_FUNC_IMPL(__imp__sub_83C30684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30688"))) PPC_WEAK_FUNC(sub_83C30688);
PPC_FUNC_IMPL(__imp__sub_83C30688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14416
	ctx.r3.s64 = ctx.r11.s64 + 14416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30694"))) PPC_WEAK_FUNC(sub_83C30694);
PPC_FUNC_IMPL(__imp__sub_83C30694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30698"))) PPC_WEAK_FUNC(sub_83C30698);
PPC_FUNC_IMPL(__imp__sub_83C30698) {
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
	// addi r3,r11,5816
	ctx.r3.s64 = ctx.r11.s64 + 5816;
	// bl 0x83523120
	ctx.lr = 0x83C306B0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,14424
	ctx.r3.s64 = ctx.r10.s64 + 14424;
	// bl 0x831cdcc8
	ctx.lr = 0x83C306BC;
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

__attribute__((alias("__imp__sub_83C306CC"))) PPC_WEAK_FUNC(sub_83C306CC);
PPC_FUNC_IMPL(__imp__sub_83C306CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C306D0"))) PPC_WEAK_FUNC(sub_83C306D0);
PPC_FUNC_IMPL(__imp__sub_83C306D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5820
	ctx.r7.s64 = ctx.r8.s64 + 5820;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5820(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5820);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5820, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C306F8"))) PPC_WEAK_FUNC(sub_83C306F8);
PPC_FUNC_IMPL(__imp__sub_83C306F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,30892
	ctx.r6.s64 = ctx.r7.s64 + 30892;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30820(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30820);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5820(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
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
	// std r9,30892(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30892, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C30740"))) PPC_WEAK_FUNC(sub_83C30740);
PPC_FUNC_IMPL(__imp__sub_83C30740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14440
	ctx.r3.s64 = ctx.r11.s64 + 14440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3074C"))) PPC_WEAK_FUNC(sub_83C3074C);
PPC_FUNC_IMPL(__imp__sub_83C3074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30750"))) PPC_WEAK_FUNC(sub_83C30750);
PPC_FUNC_IMPL(__imp__sub_83C30750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14448
	ctx.r3.s64 = ctx.r11.s64 + 14448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3075C"))) PPC_WEAK_FUNC(sub_83C3075C);
PPC_FUNC_IMPL(__imp__sub_83C3075C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30760"))) PPC_WEAK_FUNC(sub_83C30760);
PPC_FUNC_IMPL(__imp__sub_83C30760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14456
	ctx.r3.s64 = ctx.r11.s64 + 14456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3076C"))) PPC_WEAK_FUNC(sub_83C3076C);
PPC_FUNC_IMPL(__imp__sub_83C3076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30770"))) PPC_WEAK_FUNC(sub_83C30770);
PPC_FUNC_IMPL(__imp__sub_83C30770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14464
	ctx.r3.s64 = ctx.r11.s64 + 14464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3077C"))) PPC_WEAK_FUNC(sub_83C3077C);
PPC_FUNC_IMPL(__imp__sub_83C3077C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30780"))) PPC_WEAK_FUNC(sub_83C30780);
PPC_FUNC_IMPL(__imp__sub_83C30780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14472
	ctx.r3.s64 = ctx.r11.s64 + 14472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3078C"))) PPC_WEAK_FUNC(sub_83C3078C);
PPC_FUNC_IMPL(__imp__sub_83C3078C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30790"))) PPC_WEAK_FUNC(sub_83C30790);
PPC_FUNC_IMPL(__imp__sub_83C30790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14480
	ctx.r3.s64 = ctx.r11.s64 + 14480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3079C"))) PPC_WEAK_FUNC(sub_83C3079C);
PPC_FUNC_IMPL(__imp__sub_83C3079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C307A0"))) PPC_WEAK_FUNC(sub_83C307A0);
PPC_FUNC_IMPL(__imp__sub_83C307A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C307AC"))) PPC_WEAK_FUNC(sub_83C307AC);
PPC_FUNC_IMPL(__imp__sub_83C307AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C307B0"))) PPC_WEAK_FUNC(sub_83C307B0);
PPC_FUNC_IMPL(__imp__sub_83C307B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C307BC"))) PPC_WEAK_FUNC(sub_83C307BC);
PPC_FUNC_IMPL(__imp__sub_83C307BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C307C0"))) PPC_WEAK_FUNC(sub_83C307C0);
PPC_FUNC_IMPL(__imp__sub_83C307C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14504
	ctx.r3.s64 = ctx.r11.s64 + 14504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C307CC"))) PPC_WEAK_FUNC(sub_83C307CC);
PPC_FUNC_IMPL(__imp__sub_83C307CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C307D0"))) PPC_WEAK_FUNC(sub_83C307D0);
PPC_FUNC_IMPL(__imp__sub_83C307D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14512
	ctx.r3.s64 = ctx.r11.s64 + 14512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C307DC"))) PPC_WEAK_FUNC(sub_83C307DC);
PPC_FUNC_IMPL(__imp__sub_83C307DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C307E0"))) PPC_WEAK_FUNC(sub_83C307E0);
PPC_FUNC_IMPL(__imp__sub_83C307E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14520
	ctx.r3.s64 = ctx.r11.s64 + 14520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C307EC"))) PPC_WEAK_FUNC(sub_83C307EC);
PPC_FUNC_IMPL(__imp__sub_83C307EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C307F0"))) PPC_WEAK_FUNC(sub_83C307F0);
PPC_FUNC_IMPL(__imp__sub_83C307F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C307FC"))) PPC_WEAK_FUNC(sub_83C307FC);
PPC_FUNC_IMPL(__imp__sub_83C307FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30800"))) PPC_WEAK_FUNC(sub_83C30800);
PPC_FUNC_IMPL(__imp__sub_83C30800) {
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
	// addi r3,r11,5832
	ctx.r3.s64 = ctx.r11.s64 + 5832;
	// bl 0x83523120
	ctx.lr = 0x83C30818;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,14536
	ctx.r3.s64 = ctx.r10.s64 + 14536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C30824;
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

__attribute__((alias("__imp__sub_83C30834"))) PPC_WEAK_FUNC(sub_83C30834);
PPC_FUNC_IMPL(__imp__sub_83C30834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30838"))) PPC_WEAK_FUNC(sub_83C30838);
PPC_FUNC_IMPL(__imp__sub_83C30838) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5848
	ctx.r7.s64 = ctx.r8.s64 + 5848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5848);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5848(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5848, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C30860"))) PPC_WEAK_FUNC(sub_83C30860);
PPC_FUNC_IMPL(__imp__sub_83C30860) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,31016
	ctx.r6.s64 = ctx.r7.s64 + 31016;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30944(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30944);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5848);
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
	// std r9,31016(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31016, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C308A8"))) PPC_WEAK_FUNC(sub_83C308A8);
PPC_FUNC_IMPL(__imp__sub_83C308A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14552
	ctx.r3.s64 = ctx.r11.s64 + 14552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C308B4"))) PPC_WEAK_FUNC(sub_83C308B4);
PPC_FUNC_IMPL(__imp__sub_83C308B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C308B8"))) PPC_WEAK_FUNC(sub_83C308B8);
PPC_FUNC_IMPL(__imp__sub_83C308B8) {
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
	// addi r3,r11,5856
	ctx.r3.s64 = ctx.r11.s64 + 5856;
	// bl 0x8259af80
	ctx.lr = 0x83C308D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,14568
	ctx.r3.s64 = ctx.r10.s64 + 14568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C308DC;
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

__attribute__((alias("__imp__sub_83C308EC"))) PPC_WEAK_FUNC(sub_83C308EC);
PPC_FUNC_IMPL(__imp__sub_83C308EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C308F0"))) PPC_WEAK_FUNC(sub_83C308F0);
PPC_FUNC_IMPL(__imp__sub_83C308F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5836
	ctx.r11.s64 = ctx.r8.s64 + 5836;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,30992(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30992);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14560
	ctx.r3.s64 = ctx.r6.s64 + 14560;
	// stw r10,5836(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5836, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C30920"))) PPC_WEAK_FUNC(sub_83C30920);
PPC_FUNC_IMPL(__imp__sub_83C30920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14576
	ctx.r3.s64 = ctx.r11.s64 + 14576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3092C"))) PPC_WEAK_FUNC(sub_83C3092C);
PPC_FUNC_IMPL(__imp__sub_83C3092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30930"))) PPC_WEAK_FUNC(sub_83C30930);
PPC_FUNC_IMPL(__imp__sub_83C30930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14584
	ctx.r3.s64 = ctx.r11.s64 + 14584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3093C"))) PPC_WEAK_FUNC(sub_83C3093C);
PPC_FUNC_IMPL(__imp__sub_83C3093C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30940"))) PPC_WEAK_FUNC(sub_83C30940);
PPC_FUNC_IMPL(__imp__sub_83C30940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14592
	ctx.r3.s64 = ctx.r11.s64 + 14592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3094C"))) PPC_WEAK_FUNC(sub_83C3094C);
PPC_FUNC_IMPL(__imp__sub_83C3094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30950"))) PPC_WEAK_FUNC(sub_83C30950);
PPC_FUNC_IMPL(__imp__sub_83C30950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14600
	ctx.r3.s64 = ctx.r11.s64 + 14600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3095C"))) PPC_WEAK_FUNC(sub_83C3095C);
PPC_FUNC_IMPL(__imp__sub_83C3095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30960"))) PPC_WEAK_FUNC(sub_83C30960);
PPC_FUNC_IMPL(__imp__sub_83C30960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14608
	ctx.r3.s64 = ctx.r11.s64 + 14608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3096C"))) PPC_WEAK_FUNC(sub_83C3096C);
PPC_FUNC_IMPL(__imp__sub_83C3096C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30970"))) PPC_WEAK_FUNC(sub_83C30970);
PPC_FUNC_IMPL(__imp__sub_83C30970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14616
	ctx.r3.s64 = ctx.r11.s64 + 14616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3097C"))) PPC_WEAK_FUNC(sub_83C3097C);
PPC_FUNC_IMPL(__imp__sub_83C3097C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30980"))) PPC_WEAK_FUNC(sub_83C30980);
PPC_FUNC_IMPL(__imp__sub_83C30980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14624
	ctx.r3.s64 = ctx.r11.s64 + 14624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3098C"))) PPC_WEAK_FUNC(sub_83C3098C);
PPC_FUNC_IMPL(__imp__sub_83C3098C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C30990"))) PPC_WEAK_FUNC(sub_83C30990);
PPC_FUNC_IMPL(__imp__sub_83C30990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,14632
	ctx.r3.s64 = ctx.r11.s64 + 14632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3099C"))) PPC_WEAK_FUNC(sub_83C3099C);
PPC_FUNC_IMPL(__imp__sub_83C3099C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

