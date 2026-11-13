#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C1D0A8"))) PPC_WEAK_FUNC(sub_83C1D0A8);
PPC_FUNC_IMPL(__imp__sub_83C1D0A8) {
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
	// addi r3,r11,-18944
	ctx.r3.s64 = ctx.r11.s64 + -18944;
	// bl 0x83523120
	ctx.lr = 0x83C1D0C0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-14480
	ctx.r3.s64 = ctx.r10.s64 + -14480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1D0CC;
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

__attribute__((alias("__imp__sub_83C1D0DC"))) PPC_WEAK_FUNC(sub_83C1D0DC);
PPC_FUNC_IMPL(__imp__sub_83C1D0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D0E0"))) PPC_WEAK_FUNC(sub_83C1D0E0);
PPC_FUNC_IMPL(__imp__sub_83C1D0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18940
	ctx.r7.s64 = ctx.r8.s64 + -18940;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18940(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18940);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18940(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18940, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1D108"))) PPC_WEAK_FUNC(sub_83C1D108);
PPC_FUNC_IMPL(__imp__sub_83C1D108) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,3268
	ctx.r6.s64 = ctx.r7.s64 + 3268;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3196(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3196);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18940(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18940);
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
	// std r9,3268(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3268, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1D150"))) PPC_WEAK_FUNC(sub_83C1D150);
PPC_FUNC_IMPL(__imp__sub_83C1D150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14464
	ctx.r3.s64 = ctx.r11.s64 + -14464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D15C"))) PPC_WEAK_FUNC(sub_83C1D15C);
PPC_FUNC_IMPL(__imp__sub_83C1D15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D160"))) PPC_WEAK_FUNC(sub_83C1D160);
PPC_FUNC_IMPL(__imp__sub_83C1D160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14456
	ctx.r3.s64 = ctx.r11.s64 + -14456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D16C"))) PPC_WEAK_FUNC(sub_83C1D16C);
PPC_FUNC_IMPL(__imp__sub_83C1D16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D170"))) PPC_WEAK_FUNC(sub_83C1D170);
PPC_FUNC_IMPL(__imp__sub_83C1D170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14448
	ctx.r3.s64 = ctx.r11.s64 + -14448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D17C"))) PPC_WEAK_FUNC(sub_83C1D17C);
PPC_FUNC_IMPL(__imp__sub_83C1D17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D180"))) PPC_WEAK_FUNC(sub_83C1D180);
PPC_FUNC_IMPL(__imp__sub_83C1D180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14440
	ctx.r3.s64 = ctx.r11.s64 + -14440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D18C"))) PPC_WEAK_FUNC(sub_83C1D18C);
PPC_FUNC_IMPL(__imp__sub_83C1D18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D190"))) PPC_WEAK_FUNC(sub_83C1D190);
PPC_FUNC_IMPL(__imp__sub_83C1D190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14432
	ctx.r3.s64 = ctx.r11.s64 + -14432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D19C"))) PPC_WEAK_FUNC(sub_83C1D19C);
PPC_FUNC_IMPL(__imp__sub_83C1D19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D1A0"))) PPC_WEAK_FUNC(sub_83C1D1A0);
PPC_FUNC_IMPL(__imp__sub_83C1D1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14424
	ctx.r3.s64 = ctx.r11.s64 + -14424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D1AC"))) PPC_WEAK_FUNC(sub_83C1D1AC);
PPC_FUNC_IMPL(__imp__sub_83C1D1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D1B0"))) PPC_WEAK_FUNC(sub_83C1D1B0);
PPC_FUNC_IMPL(__imp__sub_83C1D1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14416
	ctx.r3.s64 = ctx.r11.s64 + -14416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D1BC"))) PPC_WEAK_FUNC(sub_83C1D1BC);
PPC_FUNC_IMPL(__imp__sub_83C1D1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D1C0"))) PPC_WEAK_FUNC(sub_83C1D1C0);
PPC_FUNC_IMPL(__imp__sub_83C1D1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14408
	ctx.r3.s64 = ctx.r11.s64 + -14408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D1CC"))) PPC_WEAK_FUNC(sub_83C1D1CC);
PPC_FUNC_IMPL(__imp__sub_83C1D1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D1D0"))) PPC_WEAK_FUNC(sub_83C1D1D0);
PPC_FUNC_IMPL(__imp__sub_83C1D1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D1DC"))) PPC_WEAK_FUNC(sub_83C1D1DC);
PPC_FUNC_IMPL(__imp__sub_83C1D1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D1E0"))) PPC_WEAK_FUNC(sub_83C1D1E0);
PPC_FUNC_IMPL(__imp__sub_83C1D1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14392
	ctx.r3.s64 = ctx.r11.s64 + -14392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D1EC"))) PPC_WEAK_FUNC(sub_83C1D1EC);
PPC_FUNC_IMPL(__imp__sub_83C1D1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D1F0"))) PPC_WEAK_FUNC(sub_83C1D1F0);
PPC_FUNC_IMPL(__imp__sub_83C1D1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14384
	ctx.r3.s64 = ctx.r11.s64 + -14384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D1FC"))) PPC_WEAK_FUNC(sub_83C1D1FC);
PPC_FUNC_IMPL(__imp__sub_83C1D1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D200"))) PPC_WEAK_FUNC(sub_83C1D200);
PPC_FUNC_IMPL(__imp__sub_83C1D200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14376
	ctx.r3.s64 = ctx.r11.s64 + -14376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D20C"))) PPC_WEAK_FUNC(sub_83C1D20C);
PPC_FUNC_IMPL(__imp__sub_83C1D20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D210"))) PPC_WEAK_FUNC(sub_83C1D210);
PPC_FUNC_IMPL(__imp__sub_83C1D210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14368
	ctx.r3.s64 = ctx.r11.s64 + -14368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D21C"))) PPC_WEAK_FUNC(sub_83C1D21C);
PPC_FUNC_IMPL(__imp__sub_83C1D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D220"))) PPC_WEAK_FUNC(sub_83C1D220);
PPC_FUNC_IMPL(__imp__sub_83C1D220) {
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
	// addi r3,r11,-18932
	ctx.r3.s64 = ctx.r11.s64 + -18932;
	// bl 0x83523120
	ctx.lr = 0x83C1D238;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-14360
	ctx.r3.s64 = ctx.r10.s64 + -14360;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1D244;
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

__attribute__((alias("__imp__sub_83C1D254"))) PPC_WEAK_FUNC(sub_83C1D254);
PPC_FUNC_IMPL(__imp__sub_83C1D254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D258"))) PPC_WEAK_FUNC(sub_83C1D258);
PPC_FUNC_IMPL(__imp__sub_83C1D258) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18928
	ctx.r7.s64 = ctx.r8.s64 + -18928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18928);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18928(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18928, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1D280"))) PPC_WEAK_FUNC(sub_83C1D280);
PPC_FUNC_IMPL(__imp__sub_83C1D280) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,3396
	ctx.r6.s64 = ctx.r7.s64 + 3396;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3324(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3324);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18928(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18928);
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
	// std r9,3396(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3396, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1D2C8"))) PPC_WEAK_FUNC(sub_83C1D2C8);
PPC_FUNC_IMPL(__imp__sub_83C1D2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14344
	ctx.r3.s64 = ctx.r11.s64 + -14344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D2D4"))) PPC_WEAK_FUNC(sub_83C1D2D4);
PPC_FUNC_IMPL(__imp__sub_83C1D2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D2D8"))) PPC_WEAK_FUNC(sub_83C1D2D8);
PPC_FUNC_IMPL(__imp__sub_83C1D2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14336
	ctx.r3.s64 = ctx.r11.s64 + -14336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D2E4"))) PPC_WEAK_FUNC(sub_83C1D2E4);
PPC_FUNC_IMPL(__imp__sub_83C1D2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D2E8"))) PPC_WEAK_FUNC(sub_83C1D2E8);
PPC_FUNC_IMPL(__imp__sub_83C1D2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14328
	ctx.r3.s64 = ctx.r11.s64 + -14328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D2F4"))) PPC_WEAK_FUNC(sub_83C1D2F4);
PPC_FUNC_IMPL(__imp__sub_83C1D2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D2F8"))) PPC_WEAK_FUNC(sub_83C1D2F8);
PPC_FUNC_IMPL(__imp__sub_83C1D2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14320
	ctx.r3.s64 = ctx.r11.s64 + -14320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D304"))) PPC_WEAK_FUNC(sub_83C1D304);
PPC_FUNC_IMPL(__imp__sub_83C1D304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D308"))) PPC_WEAK_FUNC(sub_83C1D308);
PPC_FUNC_IMPL(__imp__sub_83C1D308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14312
	ctx.r3.s64 = ctx.r11.s64 + -14312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D314"))) PPC_WEAK_FUNC(sub_83C1D314);
PPC_FUNC_IMPL(__imp__sub_83C1D314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D318"))) PPC_WEAK_FUNC(sub_83C1D318);
PPC_FUNC_IMPL(__imp__sub_83C1D318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14304
	ctx.r3.s64 = ctx.r11.s64 + -14304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D324"))) PPC_WEAK_FUNC(sub_83C1D324);
PPC_FUNC_IMPL(__imp__sub_83C1D324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D328"))) PPC_WEAK_FUNC(sub_83C1D328);
PPC_FUNC_IMPL(__imp__sub_83C1D328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14296
	ctx.r3.s64 = ctx.r11.s64 + -14296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D334"))) PPC_WEAK_FUNC(sub_83C1D334);
PPC_FUNC_IMPL(__imp__sub_83C1D334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D338"))) PPC_WEAK_FUNC(sub_83C1D338);
PPC_FUNC_IMPL(__imp__sub_83C1D338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14288
	ctx.r3.s64 = ctx.r11.s64 + -14288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D344"))) PPC_WEAK_FUNC(sub_83C1D344);
PPC_FUNC_IMPL(__imp__sub_83C1D344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D348"))) PPC_WEAK_FUNC(sub_83C1D348);
PPC_FUNC_IMPL(__imp__sub_83C1D348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14280
	ctx.r3.s64 = ctx.r11.s64 + -14280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D354"))) PPC_WEAK_FUNC(sub_83C1D354);
PPC_FUNC_IMPL(__imp__sub_83C1D354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D358"))) PPC_WEAK_FUNC(sub_83C1D358);
PPC_FUNC_IMPL(__imp__sub_83C1D358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14272
	ctx.r3.s64 = ctx.r11.s64 + -14272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D364"))) PPC_WEAK_FUNC(sub_83C1D364);
PPC_FUNC_IMPL(__imp__sub_83C1D364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D368"))) PPC_WEAK_FUNC(sub_83C1D368);
PPC_FUNC_IMPL(__imp__sub_83C1D368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14264
	ctx.r3.s64 = ctx.r11.s64 + -14264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D374"))) PPC_WEAK_FUNC(sub_83C1D374);
PPC_FUNC_IMPL(__imp__sub_83C1D374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D378"))) PPC_WEAK_FUNC(sub_83C1D378);
PPC_FUNC_IMPL(__imp__sub_83C1D378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14256
	ctx.r3.s64 = ctx.r11.s64 + -14256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D384"))) PPC_WEAK_FUNC(sub_83C1D384);
PPC_FUNC_IMPL(__imp__sub_83C1D384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D388"))) PPC_WEAK_FUNC(sub_83C1D388);
PPC_FUNC_IMPL(__imp__sub_83C1D388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14248
	ctx.r3.s64 = ctx.r11.s64 + -14248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D394"))) PPC_WEAK_FUNC(sub_83C1D394);
PPC_FUNC_IMPL(__imp__sub_83C1D394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D398"))) PPC_WEAK_FUNC(sub_83C1D398);
PPC_FUNC_IMPL(__imp__sub_83C1D398) {
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
	// addi r3,r11,-18920
	ctx.r3.s64 = ctx.r11.s64 + -18920;
	// bl 0x83523120
	ctx.lr = 0x83C1D3B0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-14240
	ctx.r3.s64 = ctx.r10.s64 + -14240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1D3BC;
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

__attribute__((alias("__imp__sub_83C1D3CC"))) PPC_WEAK_FUNC(sub_83C1D3CC);
PPC_FUNC_IMPL(__imp__sub_83C1D3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D3D0"))) PPC_WEAK_FUNC(sub_83C1D3D0);
PPC_FUNC_IMPL(__imp__sub_83C1D3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18916
	ctx.r7.s64 = ctx.r8.s64 + -18916;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18916(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18916);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18916(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18916, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1D3F8"))) PPC_WEAK_FUNC(sub_83C1D3F8);
PPC_FUNC_IMPL(__imp__sub_83C1D3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,3524
	ctx.r6.s64 = ctx.r7.s64 + 3524;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3452(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3452);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18916(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18916);
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
	// std r9,3524(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3524, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1D440"))) PPC_WEAK_FUNC(sub_83C1D440);
PPC_FUNC_IMPL(__imp__sub_83C1D440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14224
	ctx.r3.s64 = ctx.r11.s64 + -14224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D44C"))) PPC_WEAK_FUNC(sub_83C1D44C);
PPC_FUNC_IMPL(__imp__sub_83C1D44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D450"))) PPC_WEAK_FUNC(sub_83C1D450);
PPC_FUNC_IMPL(__imp__sub_83C1D450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14216
	ctx.r3.s64 = ctx.r11.s64 + -14216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D45C"))) PPC_WEAK_FUNC(sub_83C1D45C);
PPC_FUNC_IMPL(__imp__sub_83C1D45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D460"))) PPC_WEAK_FUNC(sub_83C1D460);
PPC_FUNC_IMPL(__imp__sub_83C1D460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14208
	ctx.r3.s64 = ctx.r11.s64 + -14208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D46C"))) PPC_WEAK_FUNC(sub_83C1D46C);
PPC_FUNC_IMPL(__imp__sub_83C1D46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D470"))) PPC_WEAK_FUNC(sub_83C1D470);
PPC_FUNC_IMPL(__imp__sub_83C1D470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14200
	ctx.r3.s64 = ctx.r11.s64 + -14200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D47C"))) PPC_WEAK_FUNC(sub_83C1D47C);
PPC_FUNC_IMPL(__imp__sub_83C1D47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D480"))) PPC_WEAK_FUNC(sub_83C1D480);
PPC_FUNC_IMPL(__imp__sub_83C1D480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14192
	ctx.r3.s64 = ctx.r11.s64 + -14192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D48C"))) PPC_WEAK_FUNC(sub_83C1D48C);
PPC_FUNC_IMPL(__imp__sub_83C1D48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D490"))) PPC_WEAK_FUNC(sub_83C1D490);
PPC_FUNC_IMPL(__imp__sub_83C1D490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14184
	ctx.r3.s64 = ctx.r11.s64 + -14184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D49C"))) PPC_WEAK_FUNC(sub_83C1D49C);
PPC_FUNC_IMPL(__imp__sub_83C1D49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D4A0"))) PPC_WEAK_FUNC(sub_83C1D4A0);
PPC_FUNC_IMPL(__imp__sub_83C1D4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14176
	ctx.r3.s64 = ctx.r11.s64 + -14176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D4AC"))) PPC_WEAK_FUNC(sub_83C1D4AC);
PPC_FUNC_IMPL(__imp__sub_83C1D4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D4B0"))) PPC_WEAK_FUNC(sub_83C1D4B0);
PPC_FUNC_IMPL(__imp__sub_83C1D4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14168
	ctx.r3.s64 = ctx.r11.s64 + -14168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D4BC"))) PPC_WEAK_FUNC(sub_83C1D4BC);
PPC_FUNC_IMPL(__imp__sub_83C1D4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D4C0"))) PPC_WEAK_FUNC(sub_83C1D4C0);
PPC_FUNC_IMPL(__imp__sub_83C1D4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14160
	ctx.r3.s64 = ctx.r11.s64 + -14160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D4CC"))) PPC_WEAK_FUNC(sub_83C1D4CC);
PPC_FUNC_IMPL(__imp__sub_83C1D4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D4D0"))) PPC_WEAK_FUNC(sub_83C1D4D0);
PPC_FUNC_IMPL(__imp__sub_83C1D4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14152
	ctx.r3.s64 = ctx.r11.s64 + -14152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D4DC"))) PPC_WEAK_FUNC(sub_83C1D4DC);
PPC_FUNC_IMPL(__imp__sub_83C1D4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D4E0"))) PPC_WEAK_FUNC(sub_83C1D4E0);
PPC_FUNC_IMPL(__imp__sub_83C1D4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14144
	ctx.r3.s64 = ctx.r11.s64 + -14144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D4EC"))) PPC_WEAK_FUNC(sub_83C1D4EC);
PPC_FUNC_IMPL(__imp__sub_83C1D4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D4F0"))) PPC_WEAK_FUNC(sub_83C1D4F0);
PPC_FUNC_IMPL(__imp__sub_83C1D4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14136
	ctx.r3.s64 = ctx.r11.s64 + -14136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D4FC"))) PPC_WEAK_FUNC(sub_83C1D4FC);
PPC_FUNC_IMPL(__imp__sub_83C1D4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D500"))) PPC_WEAK_FUNC(sub_83C1D500);
PPC_FUNC_IMPL(__imp__sub_83C1D500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14128
	ctx.r3.s64 = ctx.r11.s64 + -14128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D50C"))) PPC_WEAK_FUNC(sub_83C1D50C);
PPC_FUNC_IMPL(__imp__sub_83C1D50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D510"))) PPC_WEAK_FUNC(sub_83C1D510);
PPC_FUNC_IMPL(__imp__sub_83C1D510) {
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
	// addi r3,r11,-18908
	ctx.r3.s64 = ctx.r11.s64 + -18908;
	// bl 0x83523120
	ctx.lr = 0x83C1D528;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-14120
	ctx.r3.s64 = ctx.r10.s64 + -14120;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1D534;
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

__attribute__((alias("__imp__sub_83C1D544"))) PPC_WEAK_FUNC(sub_83C1D544);
PPC_FUNC_IMPL(__imp__sub_83C1D544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D548"))) PPC_WEAK_FUNC(sub_83C1D548);
PPC_FUNC_IMPL(__imp__sub_83C1D548) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18904
	ctx.r7.s64 = ctx.r8.s64 + -18904;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18904(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18904);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18904(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18904, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1D570"))) PPC_WEAK_FUNC(sub_83C1D570);
PPC_FUNC_IMPL(__imp__sub_83C1D570) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,3652
	ctx.r6.s64 = ctx.r7.s64 + 3652;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3580(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3580);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18904(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18904);
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
	// std r9,3652(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3652, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1D5B8"))) PPC_WEAK_FUNC(sub_83C1D5B8);
PPC_FUNC_IMPL(__imp__sub_83C1D5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14104
	ctx.r3.s64 = ctx.r11.s64 + -14104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D5C4"))) PPC_WEAK_FUNC(sub_83C1D5C4);
PPC_FUNC_IMPL(__imp__sub_83C1D5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D5C8"))) PPC_WEAK_FUNC(sub_83C1D5C8);
PPC_FUNC_IMPL(__imp__sub_83C1D5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14096
	ctx.r3.s64 = ctx.r11.s64 + -14096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D5D4"))) PPC_WEAK_FUNC(sub_83C1D5D4);
PPC_FUNC_IMPL(__imp__sub_83C1D5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D5D8"))) PPC_WEAK_FUNC(sub_83C1D5D8);
PPC_FUNC_IMPL(__imp__sub_83C1D5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14088
	ctx.r3.s64 = ctx.r11.s64 + -14088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D5E4"))) PPC_WEAK_FUNC(sub_83C1D5E4);
PPC_FUNC_IMPL(__imp__sub_83C1D5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D5E8"))) PPC_WEAK_FUNC(sub_83C1D5E8);
PPC_FUNC_IMPL(__imp__sub_83C1D5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14080
	ctx.r3.s64 = ctx.r11.s64 + -14080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D5F4"))) PPC_WEAK_FUNC(sub_83C1D5F4);
PPC_FUNC_IMPL(__imp__sub_83C1D5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D5F8"))) PPC_WEAK_FUNC(sub_83C1D5F8);
PPC_FUNC_IMPL(__imp__sub_83C1D5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14072
	ctx.r3.s64 = ctx.r11.s64 + -14072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D604"))) PPC_WEAK_FUNC(sub_83C1D604);
PPC_FUNC_IMPL(__imp__sub_83C1D604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D608"))) PPC_WEAK_FUNC(sub_83C1D608);
PPC_FUNC_IMPL(__imp__sub_83C1D608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14064
	ctx.r3.s64 = ctx.r11.s64 + -14064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D614"))) PPC_WEAK_FUNC(sub_83C1D614);
PPC_FUNC_IMPL(__imp__sub_83C1D614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D618"))) PPC_WEAK_FUNC(sub_83C1D618);
PPC_FUNC_IMPL(__imp__sub_83C1D618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14056
	ctx.r3.s64 = ctx.r11.s64 + -14056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D624"))) PPC_WEAK_FUNC(sub_83C1D624);
PPC_FUNC_IMPL(__imp__sub_83C1D624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D628"))) PPC_WEAK_FUNC(sub_83C1D628);
PPC_FUNC_IMPL(__imp__sub_83C1D628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14048
	ctx.r3.s64 = ctx.r11.s64 + -14048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D634"))) PPC_WEAK_FUNC(sub_83C1D634);
PPC_FUNC_IMPL(__imp__sub_83C1D634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D638"))) PPC_WEAK_FUNC(sub_83C1D638);
PPC_FUNC_IMPL(__imp__sub_83C1D638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14040
	ctx.r3.s64 = ctx.r11.s64 + -14040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D644"))) PPC_WEAK_FUNC(sub_83C1D644);
PPC_FUNC_IMPL(__imp__sub_83C1D644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D648"))) PPC_WEAK_FUNC(sub_83C1D648);
PPC_FUNC_IMPL(__imp__sub_83C1D648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14032
	ctx.r3.s64 = ctx.r11.s64 + -14032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D654"))) PPC_WEAK_FUNC(sub_83C1D654);
PPC_FUNC_IMPL(__imp__sub_83C1D654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D658"))) PPC_WEAK_FUNC(sub_83C1D658);
PPC_FUNC_IMPL(__imp__sub_83C1D658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14024
	ctx.r3.s64 = ctx.r11.s64 + -14024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D664"))) PPC_WEAK_FUNC(sub_83C1D664);
PPC_FUNC_IMPL(__imp__sub_83C1D664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D668"))) PPC_WEAK_FUNC(sub_83C1D668);
PPC_FUNC_IMPL(__imp__sub_83C1D668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14016
	ctx.r3.s64 = ctx.r11.s64 + -14016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D674"))) PPC_WEAK_FUNC(sub_83C1D674);
PPC_FUNC_IMPL(__imp__sub_83C1D674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D678"))) PPC_WEAK_FUNC(sub_83C1D678);
PPC_FUNC_IMPL(__imp__sub_83C1D678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-14008
	ctx.r3.s64 = ctx.r11.s64 + -14008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D684"))) PPC_WEAK_FUNC(sub_83C1D684);
PPC_FUNC_IMPL(__imp__sub_83C1D684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D688"))) PPC_WEAK_FUNC(sub_83C1D688);
PPC_FUNC_IMPL(__imp__sub_83C1D688) {
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
	// addi r3,r11,-18896
	ctx.r3.s64 = ctx.r11.s64 + -18896;
	// bl 0x83523120
	ctx.lr = 0x83C1D6A0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-14000
	ctx.r3.s64 = ctx.r10.s64 + -14000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1D6AC;
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

__attribute__((alias("__imp__sub_83C1D6BC"))) PPC_WEAK_FUNC(sub_83C1D6BC);
PPC_FUNC_IMPL(__imp__sub_83C1D6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D6C0"))) PPC_WEAK_FUNC(sub_83C1D6C0);
PPC_FUNC_IMPL(__imp__sub_83C1D6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18880
	ctx.r7.s64 = ctx.r8.s64 + -18880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18880);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18880(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18880, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1D6E8"))) PPC_WEAK_FUNC(sub_83C1D6E8);
PPC_FUNC_IMPL(__imp__sub_83C1D6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,3780
	ctx.r6.s64 = ctx.r7.s64 + 3780;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3708(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3708);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18880(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18880);
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
	// std r9,3780(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3780, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1D730"))) PPC_WEAK_FUNC(sub_83C1D730);
PPC_FUNC_IMPL(__imp__sub_83C1D730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13984
	ctx.r3.s64 = ctx.r11.s64 + -13984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D73C"))) PPC_WEAK_FUNC(sub_83C1D73C);
PPC_FUNC_IMPL(__imp__sub_83C1D73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D740"))) PPC_WEAK_FUNC(sub_83C1D740);
PPC_FUNC_IMPL(__imp__sub_83C1D740) {
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
	// addi r3,r11,-18872
	ctx.r3.s64 = ctx.r11.s64 + -18872;
	// bl 0x8259af80
	ctx.lr = 0x83C1D758;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-13968
	ctx.r3.s64 = ctx.r10.s64 + -13968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1D764;
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

__attribute__((alias("__imp__sub_83C1D774"))) PPC_WEAK_FUNC(sub_83C1D774);
PPC_FUNC_IMPL(__imp__sub_83C1D774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D778"))) PPC_WEAK_FUNC(sub_83C1D778);
PPC_FUNC_IMPL(__imp__sub_83C1D778) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18892
	ctx.r11.s64 = ctx.r8.s64 + -18892;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,3756(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3756);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13976
	ctx.r3.s64 = ctx.r6.s64 + -13976;
	// stw r10,-18892(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18892, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D7A8"))) PPC_WEAK_FUNC(sub_83C1D7A8);
PPC_FUNC_IMPL(__imp__sub_83C1D7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13960
	ctx.r3.s64 = ctx.r11.s64 + -13960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D7B4"))) PPC_WEAK_FUNC(sub_83C1D7B4);
PPC_FUNC_IMPL(__imp__sub_83C1D7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D7B8"))) PPC_WEAK_FUNC(sub_83C1D7B8);
PPC_FUNC_IMPL(__imp__sub_83C1D7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13952
	ctx.r3.s64 = ctx.r11.s64 + -13952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D7C4"))) PPC_WEAK_FUNC(sub_83C1D7C4);
PPC_FUNC_IMPL(__imp__sub_83C1D7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D7C8"))) PPC_WEAK_FUNC(sub_83C1D7C8);
PPC_FUNC_IMPL(__imp__sub_83C1D7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13944
	ctx.r3.s64 = ctx.r11.s64 + -13944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D7D4"))) PPC_WEAK_FUNC(sub_83C1D7D4);
PPC_FUNC_IMPL(__imp__sub_83C1D7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D7D8"))) PPC_WEAK_FUNC(sub_83C1D7D8);
PPC_FUNC_IMPL(__imp__sub_83C1D7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13936
	ctx.r3.s64 = ctx.r11.s64 + -13936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D7E4"))) PPC_WEAK_FUNC(sub_83C1D7E4);
PPC_FUNC_IMPL(__imp__sub_83C1D7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D7E8"))) PPC_WEAK_FUNC(sub_83C1D7E8);
PPC_FUNC_IMPL(__imp__sub_83C1D7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13928
	ctx.r3.s64 = ctx.r11.s64 + -13928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D7F4"))) PPC_WEAK_FUNC(sub_83C1D7F4);
PPC_FUNC_IMPL(__imp__sub_83C1D7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D7F8"))) PPC_WEAK_FUNC(sub_83C1D7F8);
PPC_FUNC_IMPL(__imp__sub_83C1D7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13920
	ctx.r3.s64 = ctx.r11.s64 + -13920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D804"))) PPC_WEAK_FUNC(sub_83C1D804);
PPC_FUNC_IMPL(__imp__sub_83C1D804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D808"))) PPC_WEAK_FUNC(sub_83C1D808);
PPC_FUNC_IMPL(__imp__sub_83C1D808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13912
	ctx.r3.s64 = ctx.r11.s64 + -13912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D814"))) PPC_WEAK_FUNC(sub_83C1D814);
PPC_FUNC_IMPL(__imp__sub_83C1D814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D818"))) PPC_WEAK_FUNC(sub_83C1D818);
PPC_FUNC_IMPL(__imp__sub_83C1D818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13904
	ctx.r3.s64 = ctx.r11.s64 + -13904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D824"))) PPC_WEAK_FUNC(sub_83C1D824);
PPC_FUNC_IMPL(__imp__sub_83C1D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D828"))) PPC_WEAK_FUNC(sub_83C1D828);
PPC_FUNC_IMPL(__imp__sub_83C1D828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13896
	ctx.r3.s64 = ctx.r11.s64 + -13896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D834"))) PPC_WEAK_FUNC(sub_83C1D834);
PPC_FUNC_IMPL(__imp__sub_83C1D834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D838"))) PPC_WEAK_FUNC(sub_83C1D838);
PPC_FUNC_IMPL(__imp__sub_83C1D838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13888
	ctx.r3.s64 = ctx.r11.s64 + -13888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D844"))) PPC_WEAK_FUNC(sub_83C1D844);
PPC_FUNC_IMPL(__imp__sub_83C1D844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D848"))) PPC_WEAK_FUNC(sub_83C1D848);
PPC_FUNC_IMPL(__imp__sub_83C1D848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13880
	ctx.r3.s64 = ctx.r11.s64 + -13880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D854"))) PPC_WEAK_FUNC(sub_83C1D854);
PPC_FUNC_IMPL(__imp__sub_83C1D854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D858"))) PPC_WEAK_FUNC(sub_83C1D858);
PPC_FUNC_IMPL(__imp__sub_83C1D858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13872
	ctx.r3.s64 = ctx.r11.s64 + -13872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D864"))) PPC_WEAK_FUNC(sub_83C1D864);
PPC_FUNC_IMPL(__imp__sub_83C1D864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D868"))) PPC_WEAK_FUNC(sub_83C1D868);
PPC_FUNC_IMPL(__imp__sub_83C1D868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13864
	ctx.r3.s64 = ctx.r11.s64 + -13864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D874"))) PPC_WEAK_FUNC(sub_83C1D874);
PPC_FUNC_IMPL(__imp__sub_83C1D874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D878"))) PPC_WEAK_FUNC(sub_83C1D878);
PPC_FUNC_IMPL(__imp__sub_83C1D878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13856
	ctx.r3.s64 = ctx.r11.s64 + -13856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D884"))) PPC_WEAK_FUNC(sub_83C1D884);
PPC_FUNC_IMPL(__imp__sub_83C1D884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D888"))) PPC_WEAK_FUNC(sub_83C1D888);
PPC_FUNC_IMPL(__imp__sub_83C1D888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13848
	ctx.r3.s64 = ctx.r11.s64 + -13848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D894"))) PPC_WEAK_FUNC(sub_83C1D894);
PPC_FUNC_IMPL(__imp__sub_83C1D894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D898"))) PPC_WEAK_FUNC(sub_83C1D898);
PPC_FUNC_IMPL(__imp__sub_83C1D898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13840
	ctx.r3.s64 = ctx.r11.s64 + -13840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D8A4"))) PPC_WEAK_FUNC(sub_83C1D8A4);
PPC_FUNC_IMPL(__imp__sub_83C1D8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D8A8"))) PPC_WEAK_FUNC(sub_83C1D8A8);
PPC_FUNC_IMPL(__imp__sub_83C1D8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13832
	ctx.r3.s64 = ctx.r11.s64 + -13832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D8B4"))) PPC_WEAK_FUNC(sub_83C1D8B4);
PPC_FUNC_IMPL(__imp__sub_83C1D8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D8B8"))) PPC_WEAK_FUNC(sub_83C1D8B8);
PPC_FUNC_IMPL(__imp__sub_83C1D8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13824
	ctx.r3.s64 = ctx.r11.s64 + -13824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D8C4"))) PPC_WEAK_FUNC(sub_83C1D8C4);
PPC_FUNC_IMPL(__imp__sub_83C1D8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D8C8"))) PPC_WEAK_FUNC(sub_83C1D8C8);
PPC_FUNC_IMPL(__imp__sub_83C1D8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13816
	ctx.r3.s64 = ctx.r11.s64 + -13816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D8D4"))) PPC_WEAK_FUNC(sub_83C1D8D4);
PPC_FUNC_IMPL(__imp__sub_83C1D8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D8D8"))) PPC_WEAK_FUNC(sub_83C1D8D8);
PPC_FUNC_IMPL(__imp__sub_83C1D8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13808
	ctx.r3.s64 = ctx.r11.s64 + -13808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D8E4"))) PPC_WEAK_FUNC(sub_83C1D8E4);
PPC_FUNC_IMPL(__imp__sub_83C1D8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D8E8"))) PPC_WEAK_FUNC(sub_83C1D8E8);
PPC_FUNC_IMPL(__imp__sub_83C1D8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13800
	ctx.r3.s64 = ctx.r11.s64 + -13800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D8F4"))) PPC_WEAK_FUNC(sub_83C1D8F4);
PPC_FUNC_IMPL(__imp__sub_83C1D8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D8F8"))) PPC_WEAK_FUNC(sub_83C1D8F8);
PPC_FUNC_IMPL(__imp__sub_83C1D8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13792
	ctx.r3.s64 = ctx.r11.s64 + -13792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D904"))) PPC_WEAK_FUNC(sub_83C1D904);
PPC_FUNC_IMPL(__imp__sub_83C1D904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D908"))) PPC_WEAK_FUNC(sub_83C1D908);
PPC_FUNC_IMPL(__imp__sub_83C1D908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13784
	ctx.r3.s64 = ctx.r11.s64 + -13784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D914"))) PPC_WEAK_FUNC(sub_83C1D914);
PPC_FUNC_IMPL(__imp__sub_83C1D914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D918"))) PPC_WEAK_FUNC(sub_83C1D918);
PPC_FUNC_IMPL(__imp__sub_83C1D918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13776
	ctx.r3.s64 = ctx.r11.s64 + -13776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D924"))) PPC_WEAK_FUNC(sub_83C1D924);
PPC_FUNC_IMPL(__imp__sub_83C1D924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D928"))) PPC_WEAK_FUNC(sub_83C1D928);
PPC_FUNC_IMPL(__imp__sub_83C1D928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13768
	ctx.r3.s64 = ctx.r11.s64 + -13768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D934"))) PPC_WEAK_FUNC(sub_83C1D934);
PPC_FUNC_IMPL(__imp__sub_83C1D934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D938"))) PPC_WEAK_FUNC(sub_83C1D938);
PPC_FUNC_IMPL(__imp__sub_83C1D938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13760
	ctx.r3.s64 = ctx.r11.s64 + -13760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D944"))) PPC_WEAK_FUNC(sub_83C1D944);
PPC_FUNC_IMPL(__imp__sub_83C1D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D948"))) PPC_WEAK_FUNC(sub_83C1D948);
PPC_FUNC_IMPL(__imp__sub_83C1D948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13752
	ctx.r3.s64 = ctx.r11.s64 + -13752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D954"))) PPC_WEAK_FUNC(sub_83C1D954);
PPC_FUNC_IMPL(__imp__sub_83C1D954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D958"))) PPC_WEAK_FUNC(sub_83C1D958);
PPC_FUNC_IMPL(__imp__sub_83C1D958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13744
	ctx.r3.s64 = ctx.r11.s64 + -13744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D964"))) PPC_WEAK_FUNC(sub_83C1D964);
PPC_FUNC_IMPL(__imp__sub_83C1D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D968"))) PPC_WEAK_FUNC(sub_83C1D968);
PPC_FUNC_IMPL(__imp__sub_83C1D968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13736
	ctx.r3.s64 = ctx.r11.s64 + -13736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D974"))) PPC_WEAK_FUNC(sub_83C1D974);
PPC_FUNC_IMPL(__imp__sub_83C1D974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D978"))) PPC_WEAK_FUNC(sub_83C1D978);
PPC_FUNC_IMPL(__imp__sub_83C1D978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13728
	ctx.r3.s64 = ctx.r11.s64 + -13728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D984"))) PPC_WEAK_FUNC(sub_83C1D984);
PPC_FUNC_IMPL(__imp__sub_83C1D984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D988"))) PPC_WEAK_FUNC(sub_83C1D988);
PPC_FUNC_IMPL(__imp__sub_83C1D988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13720
	ctx.r3.s64 = ctx.r11.s64 + -13720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D994"))) PPC_WEAK_FUNC(sub_83C1D994);
PPC_FUNC_IMPL(__imp__sub_83C1D994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D998"))) PPC_WEAK_FUNC(sub_83C1D998);
PPC_FUNC_IMPL(__imp__sub_83C1D998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13712
	ctx.r3.s64 = ctx.r11.s64 + -13712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D9A4"))) PPC_WEAK_FUNC(sub_83C1D9A4);
PPC_FUNC_IMPL(__imp__sub_83C1D9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D9A8"))) PPC_WEAK_FUNC(sub_83C1D9A8);
PPC_FUNC_IMPL(__imp__sub_83C1D9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13704
	ctx.r3.s64 = ctx.r11.s64 + -13704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D9B4"))) PPC_WEAK_FUNC(sub_83C1D9B4);
PPC_FUNC_IMPL(__imp__sub_83C1D9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D9B8"))) PPC_WEAK_FUNC(sub_83C1D9B8);
PPC_FUNC_IMPL(__imp__sub_83C1D9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13696
	ctx.r3.s64 = ctx.r11.s64 + -13696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D9C4"))) PPC_WEAK_FUNC(sub_83C1D9C4);
PPC_FUNC_IMPL(__imp__sub_83C1D9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D9C8"))) PPC_WEAK_FUNC(sub_83C1D9C8);
PPC_FUNC_IMPL(__imp__sub_83C1D9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13688
	ctx.r3.s64 = ctx.r11.s64 + -13688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D9D4"))) PPC_WEAK_FUNC(sub_83C1D9D4);
PPC_FUNC_IMPL(__imp__sub_83C1D9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D9D8"))) PPC_WEAK_FUNC(sub_83C1D9D8);
PPC_FUNC_IMPL(__imp__sub_83C1D9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13680
	ctx.r3.s64 = ctx.r11.s64 + -13680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1D9E4"))) PPC_WEAK_FUNC(sub_83C1D9E4);
PPC_FUNC_IMPL(__imp__sub_83C1D9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1D9E8"))) PPC_WEAK_FUNC(sub_83C1D9E8);
PPC_FUNC_IMPL(__imp__sub_83C1D9E8) {
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
	// addi r3,r11,-18520
	ctx.r3.s64 = ctx.r11.s64 + -18520;
	// bl 0x83523120
	ctx.lr = 0x83C1DA00;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-13672
	ctx.r3.s64 = ctx.r10.s64 + -13672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1DA0C;
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

__attribute__((alias("__imp__sub_83C1DA1C"))) PPC_WEAK_FUNC(sub_83C1DA1C);
PPC_FUNC_IMPL(__imp__sub_83C1DA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DA20"))) PPC_WEAK_FUNC(sub_83C1DA20);
PPC_FUNC_IMPL(__imp__sub_83C1DA20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18504
	ctx.r7.s64 = ctx.r8.s64 + -18504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18504(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1DA48"))) PPC_WEAK_FUNC(sub_83C1DA48);
PPC_FUNC_IMPL(__imp__sub_83C1DA48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,4116
	ctx.r6.s64 = ctx.r7.s64 + 4116;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4044(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4044);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18504);
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
	// std r9,4116(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4116, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1DA90"))) PPC_WEAK_FUNC(sub_83C1DA90);
PPC_FUNC_IMPL(__imp__sub_83C1DA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13656
	ctx.r3.s64 = ctx.r11.s64 + -13656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DA9C"))) PPC_WEAK_FUNC(sub_83C1DA9C);
PPC_FUNC_IMPL(__imp__sub_83C1DA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DAA0"))) PPC_WEAK_FUNC(sub_83C1DAA0);
PPC_FUNC_IMPL(__imp__sub_83C1DAA0) {
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
	// addi r3,r11,-18496
	ctx.r3.s64 = ctx.r11.s64 + -18496;
	// bl 0x8259af80
	ctx.lr = 0x83C1DAB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-13640
	ctx.r3.s64 = ctx.r10.s64 + -13640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1DAC4;
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

__attribute__((alias("__imp__sub_83C1DAD4"))) PPC_WEAK_FUNC(sub_83C1DAD4);
PPC_FUNC_IMPL(__imp__sub_83C1DAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DAD8"))) PPC_WEAK_FUNC(sub_83C1DAD8);
PPC_FUNC_IMPL(__imp__sub_83C1DAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18516
	ctx.r11.s64 = ctx.r8.s64 + -18516;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,4092(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4092);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13648
	ctx.r3.s64 = ctx.r6.s64 + -13648;
	// stw r10,-18516(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18516, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DB08"))) PPC_WEAK_FUNC(sub_83C1DB08);
PPC_FUNC_IMPL(__imp__sub_83C1DB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13632
	ctx.r3.s64 = ctx.r11.s64 + -13632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DB14"))) PPC_WEAK_FUNC(sub_83C1DB14);
PPC_FUNC_IMPL(__imp__sub_83C1DB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DB18"))) PPC_WEAK_FUNC(sub_83C1DB18);
PPC_FUNC_IMPL(__imp__sub_83C1DB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13624
	ctx.r3.s64 = ctx.r11.s64 + -13624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DB24"))) PPC_WEAK_FUNC(sub_83C1DB24);
PPC_FUNC_IMPL(__imp__sub_83C1DB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DB28"))) PPC_WEAK_FUNC(sub_83C1DB28);
PPC_FUNC_IMPL(__imp__sub_83C1DB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13616
	ctx.r3.s64 = ctx.r11.s64 + -13616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DB34"))) PPC_WEAK_FUNC(sub_83C1DB34);
PPC_FUNC_IMPL(__imp__sub_83C1DB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DB38"))) PPC_WEAK_FUNC(sub_83C1DB38);
PPC_FUNC_IMPL(__imp__sub_83C1DB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13608
	ctx.r3.s64 = ctx.r11.s64 + -13608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DB44"))) PPC_WEAK_FUNC(sub_83C1DB44);
PPC_FUNC_IMPL(__imp__sub_83C1DB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DB48"))) PPC_WEAK_FUNC(sub_83C1DB48);
PPC_FUNC_IMPL(__imp__sub_83C1DB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13600
	ctx.r3.s64 = ctx.r11.s64 + -13600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DB54"))) PPC_WEAK_FUNC(sub_83C1DB54);
PPC_FUNC_IMPL(__imp__sub_83C1DB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DB58"))) PPC_WEAK_FUNC(sub_83C1DB58);
PPC_FUNC_IMPL(__imp__sub_83C1DB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13592
	ctx.r3.s64 = ctx.r11.s64 + -13592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DB64"))) PPC_WEAK_FUNC(sub_83C1DB64);
PPC_FUNC_IMPL(__imp__sub_83C1DB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DB68"))) PPC_WEAK_FUNC(sub_83C1DB68);
PPC_FUNC_IMPL(__imp__sub_83C1DB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13584
	ctx.r3.s64 = ctx.r11.s64 + -13584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DB74"))) PPC_WEAK_FUNC(sub_83C1DB74);
PPC_FUNC_IMPL(__imp__sub_83C1DB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DB78"))) PPC_WEAK_FUNC(sub_83C1DB78);
PPC_FUNC_IMPL(__imp__sub_83C1DB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13576
	ctx.r3.s64 = ctx.r11.s64 + -13576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DB84"))) PPC_WEAK_FUNC(sub_83C1DB84);
PPC_FUNC_IMPL(__imp__sub_83C1DB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DB88"))) PPC_WEAK_FUNC(sub_83C1DB88);
PPC_FUNC_IMPL(__imp__sub_83C1DB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13568
	ctx.r3.s64 = ctx.r11.s64 + -13568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DB94"))) PPC_WEAK_FUNC(sub_83C1DB94);
PPC_FUNC_IMPL(__imp__sub_83C1DB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DB98"))) PPC_WEAK_FUNC(sub_83C1DB98);
PPC_FUNC_IMPL(__imp__sub_83C1DB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13560
	ctx.r3.s64 = ctx.r11.s64 + -13560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DBA4"))) PPC_WEAK_FUNC(sub_83C1DBA4);
PPC_FUNC_IMPL(__imp__sub_83C1DBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DBA8"))) PPC_WEAK_FUNC(sub_83C1DBA8);
PPC_FUNC_IMPL(__imp__sub_83C1DBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13552
	ctx.r3.s64 = ctx.r11.s64 + -13552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DBB4"))) PPC_WEAK_FUNC(sub_83C1DBB4);
PPC_FUNC_IMPL(__imp__sub_83C1DBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DBB8"))) PPC_WEAK_FUNC(sub_83C1DBB8);
PPC_FUNC_IMPL(__imp__sub_83C1DBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13544
	ctx.r3.s64 = ctx.r11.s64 + -13544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DBC4"))) PPC_WEAK_FUNC(sub_83C1DBC4);
PPC_FUNC_IMPL(__imp__sub_83C1DBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DBC8"))) PPC_WEAK_FUNC(sub_83C1DBC8);
PPC_FUNC_IMPL(__imp__sub_83C1DBC8) {
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
	// addi r3,r11,-18152
	ctx.r3.s64 = ctx.r11.s64 + -18152;
	// bl 0x83523120
	ctx.lr = 0x83C1DBE0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-13536
	ctx.r3.s64 = ctx.r10.s64 + -13536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1DBEC;
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

__attribute__((alias("__imp__sub_83C1DBFC"))) PPC_WEAK_FUNC(sub_83C1DBFC);
PPC_FUNC_IMPL(__imp__sub_83C1DBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DC00"))) PPC_WEAK_FUNC(sub_83C1DC00);
PPC_FUNC_IMPL(__imp__sub_83C1DC00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18148
	ctx.r7.s64 = ctx.r8.s64 + -18148;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18148(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18148);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18148(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18148, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1DC28"))) PPC_WEAK_FUNC(sub_83C1DC28);
PPC_FUNC_IMPL(__imp__sub_83C1DC28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,4244
	ctx.r6.s64 = ctx.r7.s64 + 4244;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4172(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4172);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18148(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18148);
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
	// std r9,4244(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4244, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1DC70"))) PPC_WEAK_FUNC(sub_83C1DC70);
PPC_FUNC_IMPL(__imp__sub_83C1DC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13520
	ctx.r3.s64 = ctx.r11.s64 + -13520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DC7C"))) PPC_WEAK_FUNC(sub_83C1DC7C);
PPC_FUNC_IMPL(__imp__sub_83C1DC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DC80"))) PPC_WEAK_FUNC(sub_83C1DC80);
PPC_FUNC_IMPL(__imp__sub_83C1DC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13512
	ctx.r3.s64 = ctx.r11.s64 + -13512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DC8C"))) PPC_WEAK_FUNC(sub_83C1DC8C);
PPC_FUNC_IMPL(__imp__sub_83C1DC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DC90"))) PPC_WEAK_FUNC(sub_83C1DC90);
PPC_FUNC_IMPL(__imp__sub_83C1DC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13504
	ctx.r3.s64 = ctx.r11.s64 + -13504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DC9C"))) PPC_WEAK_FUNC(sub_83C1DC9C);
PPC_FUNC_IMPL(__imp__sub_83C1DC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DCA0"))) PPC_WEAK_FUNC(sub_83C1DCA0);
PPC_FUNC_IMPL(__imp__sub_83C1DCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13496
	ctx.r3.s64 = ctx.r11.s64 + -13496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DCAC"))) PPC_WEAK_FUNC(sub_83C1DCAC);
PPC_FUNC_IMPL(__imp__sub_83C1DCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DCB0"))) PPC_WEAK_FUNC(sub_83C1DCB0);
PPC_FUNC_IMPL(__imp__sub_83C1DCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13488
	ctx.r3.s64 = ctx.r11.s64 + -13488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DCBC"))) PPC_WEAK_FUNC(sub_83C1DCBC);
PPC_FUNC_IMPL(__imp__sub_83C1DCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DCC0"))) PPC_WEAK_FUNC(sub_83C1DCC0);
PPC_FUNC_IMPL(__imp__sub_83C1DCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13480
	ctx.r3.s64 = ctx.r11.s64 + -13480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DCCC"))) PPC_WEAK_FUNC(sub_83C1DCCC);
PPC_FUNC_IMPL(__imp__sub_83C1DCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DCD0"))) PPC_WEAK_FUNC(sub_83C1DCD0);
PPC_FUNC_IMPL(__imp__sub_83C1DCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13472
	ctx.r3.s64 = ctx.r11.s64 + -13472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DCDC"))) PPC_WEAK_FUNC(sub_83C1DCDC);
PPC_FUNC_IMPL(__imp__sub_83C1DCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DCE0"))) PPC_WEAK_FUNC(sub_83C1DCE0);
PPC_FUNC_IMPL(__imp__sub_83C1DCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13464
	ctx.r3.s64 = ctx.r11.s64 + -13464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DCEC"))) PPC_WEAK_FUNC(sub_83C1DCEC);
PPC_FUNC_IMPL(__imp__sub_83C1DCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DCF0"))) PPC_WEAK_FUNC(sub_83C1DCF0);
PPC_FUNC_IMPL(__imp__sub_83C1DCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13456
	ctx.r3.s64 = ctx.r11.s64 + -13456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DCFC"))) PPC_WEAK_FUNC(sub_83C1DCFC);
PPC_FUNC_IMPL(__imp__sub_83C1DCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

