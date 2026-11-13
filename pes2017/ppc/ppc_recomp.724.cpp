#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C1AC40"))) PPC_WEAK_FUNC(sub_83C1AC40);
PPC_FUNC_IMPL(__imp__sub_83C1AC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17576
	ctx.r3.s64 = ctx.r11.s64 + -17576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AC4C"))) PPC_WEAK_FUNC(sub_83C1AC4C);
PPC_FUNC_IMPL(__imp__sub_83C1AC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AC50"))) PPC_WEAK_FUNC(sub_83C1AC50);
PPC_FUNC_IMPL(__imp__sub_83C1AC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17568
	ctx.r3.s64 = ctx.r11.s64 + -17568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AC5C"))) PPC_WEAK_FUNC(sub_83C1AC5C);
PPC_FUNC_IMPL(__imp__sub_83C1AC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AC60"))) PPC_WEAK_FUNC(sub_83C1AC60);
PPC_FUNC_IMPL(__imp__sub_83C1AC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17560
	ctx.r3.s64 = ctx.r11.s64 + -17560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AC6C"))) PPC_WEAK_FUNC(sub_83C1AC6C);
PPC_FUNC_IMPL(__imp__sub_83C1AC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AC70"))) PPC_WEAK_FUNC(sub_83C1AC70);
PPC_FUNC_IMPL(__imp__sub_83C1AC70) {
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
	// addi r3,r11,-20304
	ctx.r3.s64 = ctx.r11.s64 + -20304;
	// bl 0x83523120
	ctx.lr = 0x83C1AC88;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-17552
	ctx.r3.s64 = ctx.r10.s64 + -17552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1AC94;
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

__attribute__((alias("__imp__sub_83C1ACA4"))) PPC_WEAK_FUNC(sub_83C1ACA4);
PPC_FUNC_IMPL(__imp__sub_83C1ACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ACA8"))) PPC_WEAK_FUNC(sub_83C1ACA8);
PPC_FUNC_IMPL(__imp__sub_83C1ACA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20300
	ctx.r7.s64 = ctx.r8.s64 + -20300;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20300(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20300);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20300(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20300, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1ACD0"))) PPC_WEAK_FUNC(sub_83C1ACD0);
PPC_FUNC_IMPL(__imp__sub_83C1ACD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17536
	ctx.r3.s64 = ctx.r11.s64 + -17536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ACDC"))) PPC_WEAK_FUNC(sub_83C1ACDC);
PPC_FUNC_IMPL(__imp__sub_83C1ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ACE0"))) PPC_WEAK_FUNC(sub_83C1ACE0);
PPC_FUNC_IMPL(__imp__sub_83C1ACE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17528
	ctx.r3.s64 = ctx.r11.s64 + -17528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ACEC"))) PPC_WEAK_FUNC(sub_83C1ACEC);
PPC_FUNC_IMPL(__imp__sub_83C1ACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ACF0"))) PPC_WEAK_FUNC(sub_83C1ACF0);
PPC_FUNC_IMPL(__imp__sub_83C1ACF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17520
	ctx.r3.s64 = ctx.r11.s64 + -17520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ACFC"))) PPC_WEAK_FUNC(sub_83C1ACFC);
PPC_FUNC_IMPL(__imp__sub_83C1ACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AD00"))) PPC_WEAK_FUNC(sub_83C1AD00);
PPC_FUNC_IMPL(__imp__sub_83C1AD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17512
	ctx.r3.s64 = ctx.r11.s64 + -17512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AD0C"))) PPC_WEAK_FUNC(sub_83C1AD0C);
PPC_FUNC_IMPL(__imp__sub_83C1AD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AD10"))) PPC_WEAK_FUNC(sub_83C1AD10);
PPC_FUNC_IMPL(__imp__sub_83C1AD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17504
	ctx.r3.s64 = ctx.r11.s64 + -17504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AD1C"))) PPC_WEAK_FUNC(sub_83C1AD1C);
PPC_FUNC_IMPL(__imp__sub_83C1AD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AD20"))) PPC_WEAK_FUNC(sub_83C1AD20);
PPC_FUNC_IMPL(__imp__sub_83C1AD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AD2C"))) PPC_WEAK_FUNC(sub_83C1AD2C);
PPC_FUNC_IMPL(__imp__sub_83C1AD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AD30"))) PPC_WEAK_FUNC(sub_83C1AD30);
PPC_FUNC_IMPL(__imp__sub_83C1AD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17488
	ctx.r3.s64 = ctx.r11.s64 + -17488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AD3C"))) PPC_WEAK_FUNC(sub_83C1AD3C);
PPC_FUNC_IMPL(__imp__sub_83C1AD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AD40"))) PPC_WEAK_FUNC(sub_83C1AD40);
PPC_FUNC_IMPL(__imp__sub_83C1AD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AD4C"))) PPC_WEAK_FUNC(sub_83C1AD4C);
PPC_FUNC_IMPL(__imp__sub_83C1AD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AD50"))) PPC_WEAK_FUNC(sub_83C1AD50);
PPC_FUNC_IMPL(__imp__sub_83C1AD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17472
	ctx.r3.s64 = ctx.r11.s64 + -17472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AD5C"))) PPC_WEAK_FUNC(sub_83C1AD5C);
PPC_FUNC_IMPL(__imp__sub_83C1AD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AD60"))) PPC_WEAK_FUNC(sub_83C1AD60);
PPC_FUNC_IMPL(__imp__sub_83C1AD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17464
	ctx.r3.s64 = ctx.r11.s64 + -17464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AD6C"))) PPC_WEAK_FUNC(sub_83C1AD6C);
PPC_FUNC_IMPL(__imp__sub_83C1AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AD70"))) PPC_WEAK_FUNC(sub_83C1AD70);
PPC_FUNC_IMPL(__imp__sub_83C1AD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17456
	ctx.r3.s64 = ctx.r11.s64 + -17456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AD7C"))) PPC_WEAK_FUNC(sub_83C1AD7C);
PPC_FUNC_IMPL(__imp__sub_83C1AD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AD80"))) PPC_WEAK_FUNC(sub_83C1AD80);
PPC_FUNC_IMPL(__imp__sub_83C1AD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17448
	ctx.r3.s64 = ctx.r11.s64 + -17448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AD8C"))) PPC_WEAK_FUNC(sub_83C1AD8C);
PPC_FUNC_IMPL(__imp__sub_83C1AD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AD90"))) PPC_WEAK_FUNC(sub_83C1AD90);
PPC_FUNC_IMPL(__imp__sub_83C1AD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17440
	ctx.r3.s64 = ctx.r11.s64 + -17440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AD9C"))) PPC_WEAK_FUNC(sub_83C1AD9C);
PPC_FUNC_IMPL(__imp__sub_83C1AD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ADA0"))) PPC_WEAK_FUNC(sub_83C1ADA0);
PPC_FUNC_IMPL(__imp__sub_83C1ADA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17432
	ctx.r3.s64 = ctx.r11.s64 + -17432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ADAC"))) PPC_WEAK_FUNC(sub_83C1ADAC);
PPC_FUNC_IMPL(__imp__sub_83C1ADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ADB0"))) PPC_WEAK_FUNC(sub_83C1ADB0);
PPC_FUNC_IMPL(__imp__sub_83C1ADB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17424
	ctx.r3.s64 = ctx.r11.s64 + -17424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ADBC"))) PPC_WEAK_FUNC(sub_83C1ADBC);
PPC_FUNC_IMPL(__imp__sub_83C1ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ADC0"))) PPC_WEAK_FUNC(sub_83C1ADC0);
PPC_FUNC_IMPL(__imp__sub_83C1ADC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17416
	ctx.r3.s64 = ctx.r11.s64 + -17416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ADCC"))) PPC_WEAK_FUNC(sub_83C1ADCC);
PPC_FUNC_IMPL(__imp__sub_83C1ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ADD0"))) PPC_WEAK_FUNC(sub_83C1ADD0);
PPC_FUNC_IMPL(__imp__sub_83C1ADD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17408
	ctx.r3.s64 = ctx.r11.s64 + -17408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ADDC"))) PPC_WEAK_FUNC(sub_83C1ADDC);
PPC_FUNC_IMPL(__imp__sub_83C1ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ADE0"))) PPC_WEAK_FUNC(sub_83C1ADE0);
PPC_FUNC_IMPL(__imp__sub_83C1ADE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17400
	ctx.r3.s64 = ctx.r11.s64 + -17400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ADEC"))) PPC_WEAK_FUNC(sub_83C1ADEC);
PPC_FUNC_IMPL(__imp__sub_83C1ADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ADF0"))) PPC_WEAK_FUNC(sub_83C1ADF0);
PPC_FUNC_IMPL(__imp__sub_83C1ADF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17392
	ctx.r3.s64 = ctx.r11.s64 + -17392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ADFC"))) PPC_WEAK_FUNC(sub_83C1ADFC);
PPC_FUNC_IMPL(__imp__sub_83C1ADFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AE00"))) PPC_WEAK_FUNC(sub_83C1AE00);
PPC_FUNC_IMPL(__imp__sub_83C1AE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17384
	ctx.r3.s64 = ctx.r11.s64 + -17384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AE0C"))) PPC_WEAK_FUNC(sub_83C1AE0C);
PPC_FUNC_IMPL(__imp__sub_83C1AE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AE10"))) PPC_WEAK_FUNC(sub_83C1AE10);
PPC_FUNC_IMPL(__imp__sub_83C1AE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17376
	ctx.r3.s64 = ctx.r11.s64 + -17376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AE1C"))) PPC_WEAK_FUNC(sub_83C1AE1C);
PPC_FUNC_IMPL(__imp__sub_83C1AE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AE20"))) PPC_WEAK_FUNC(sub_83C1AE20);
PPC_FUNC_IMPL(__imp__sub_83C1AE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17368
	ctx.r3.s64 = ctx.r11.s64 + -17368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AE2C"))) PPC_WEAK_FUNC(sub_83C1AE2C);
PPC_FUNC_IMPL(__imp__sub_83C1AE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AE30"))) PPC_WEAK_FUNC(sub_83C1AE30);
PPC_FUNC_IMPL(__imp__sub_83C1AE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17360
	ctx.r3.s64 = ctx.r11.s64 + -17360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AE3C"))) PPC_WEAK_FUNC(sub_83C1AE3C);
PPC_FUNC_IMPL(__imp__sub_83C1AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AE40"))) PPC_WEAK_FUNC(sub_83C1AE40);
PPC_FUNC_IMPL(__imp__sub_83C1AE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17352
	ctx.r3.s64 = ctx.r11.s64 + -17352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AE4C"))) PPC_WEAK_FUNC(sub_83C1AE4C);
PPC_FUNC_IMPL(__imp__sub_83C1AE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AE50"))) PPC_WEAK_FUNC(sub_83C1AE50);
PPC_FUNC_IMPL(__imp__sub_83C1AE50) {
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
	// addi r3,r11,-20288
	ctx.r3.s64 = ctx.r11.s64 + -20288;
	// bl 0x83523120
	ctx.lr = 0x83C1AE68;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-17344
	ctx.r3.s64 = ctx.r10.s64 + -17344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1AE74;
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

__attribute__((alias("__imp__sub_83C1AE84"))) PPC_WEAK_FUNC(sub_83C1AE84);
PPC_FUNC_IMPL(__imp__sub_83C1AE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AE88"))) PPC_WEAK_FUNC(sub_83C1AE88);
PPC_FUNC_IMPL(__imp__sub_83C1AE88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20284
	ctx.r7.s64 = ctx.r8.s64 + -20284;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20284(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20284);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20284(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20284, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1AEB0"))) PPC_WEAK_FUNC(sub_83C1AEB0);
PPC_FUNC_IMPL(__imp__sub_83C1AEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,292
	ctx.r6.s64 = ctx.r7.s64 + 292;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,220(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 220);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20284(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20284);
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
	// std r9,292(r7)
	PPC_STORE_U64(ctx.r7.u32 + 292, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1AEF8"))) PPC_WEAK_FUNC(sub_83C1AEF8);
PPC_FUNC_IMPL(__imp__sub_83C1AEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17328
	ctx.r3.s64 = ctx.r11.s64 + -17328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AF04"))) PPC_WEAK_FUNC(sub_83C1AF04);
PPC_FUNC_IMPL(__imp__sub_83C1AF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AF08"))) PPC_WEAK_FUNC(sub_83C1AF08);
PPC_FUNC_IMPL(__imp__sub_83C1AF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17320
	ctx.r3.s64 = ctx.r11.s64 + -17320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AF14"))) PPC_WEAK_FUNC(sub_83C1AF14);
PPC_FUNC_IMPL(__imp__sub_83C1AF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AF18"))) PPC_WEAK_FUNC(sub_83C1AF18);
PPC_FUNC_IMPL(__imp__sub_83C1AF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17312
	ctx.r3.s64 = ctx.r11.s64 + -17312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AF24"))) PPC_WEAK_FUNC(sub_83C1AF24);
PPC_FUNC_IMPL(__imp__sub_83C1AF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AF28"))) PPC_WEAK_FUNC(sub_83C1AF28);
PPC_FUNC_IMPL(__imp__sub_83C1AF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17304
	ctx.r3.s64 = ctx.r11.s64 + -17304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AF34"))) PPC_WEAK_FUNC(sub_83C1AF34);
PPC_FUNC_IMPL(__imp__sub_83C1AF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AF38"))) PPC_WEAK_FUNC(sub_83C1AF38);
PPC_FUNC_IMPL(__imp__sub_83C1AF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17296
	ctx.r3.s64 = ctx.r11.s64 + -17296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AF44"))) PPC_WEAK_FUNC(sub_83C1AF44);
PPC_FUNC_IMPL(__imp__sub_83C1AF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AF48"))) PPC_WEAK_FUNC(sub_83C1AF48);
PPC_FUNC_IMPL(__imp__sub_83C1AF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17288
	ctx.r3.s64 = ctx.r11.s64 + -17288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AF54"))) PPC_WEAK_FUNC(sub_83C1AF54);
PPC_FUNC_IMPL(__imp__sub_83C1AF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AF58"))) PPC_WEAK_FUNC(sub_83C1AF58);
PPC_FUNC_IMPL(__imp__sub_83C1AF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17280
	ctx.r3.s64 = ctx.r11.s64 + -17280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AF64"))) PPC_WEAK_FUNC(sub_83C1AF64);
PPC_FUNC_IMPL(__imp__sub_83C1AF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AF68"))) PPC_WEAK_FUNC(sub_83C1AF68);
PPC_FUNC_IMPL(__imp__sub_83C1AF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17272
	ctx.r3.s64 = ctx.r11.s64 + -17272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AF74"))) PPC_WEAK_FUNC(sub_83C1AF74);
PPC_FUNC_IMPL(__imp__sub_83C1AF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AF78"))) PPC_WEAK_FUNC(sub_83C1AF78);
PPC_FUNC_IMPL(__imp__sub_83C1AF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17264
	ctx.r3.s64 = ctx.r11.s64 + -17264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AF84"))) PPC_WEAK_FUNC(sub_83C1AF84);
PPC_FUNC_IMPL(__imp__sub_83C1AF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AF88"))) PPC_WEAK_FUNC(sub_83C1AF88);
PPC_FUNC_IMPL(__imp__sub_83C1AF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17256
	ctx.r3.s64 = ctx.r11.s64 + -17256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AF94"))) PPC_WEAK_FUNC(sub_83C1AF94);
PPC_FUNC_IMPL(__imp__sub_83C1AF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AF98"))) PPC_WEAK_FUNC(sub_83C1AF98);
PPC_FUNC_IMPL(__imp__sub_83C1AF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17248
	ctx.r3.s64 = ctx.r11.s64 + -17248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AFA4"))) PPC_WEAK_FUNC(sub_83C1AFA4);
PPC_FUNC_IMPL(__imp__sub_83C1AFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AFA8"))) PPC_WEAK_FUNC(sub_83C1AFA8);
PPC_FUNC_IMPL(__imp__sub_83C1AFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17240
	ctx.r3.s64 = ctx.r11.s64 + -17240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AFB4"))) PPC_WEAK_FUNC(sub_83C1AFB4);
PPC_FUNC_IMPL(__imp__sub_83C1AFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AFB8"))) PPC_WEAK_FUNC(sub_83C1AFB8);
PPC_FUNC_IMPL(__imp__sub_83C1AFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17232
	ctx.r3.s64 = ctx.r11.s64 + -17232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AFC4"))) PPC_WEAK_FUNC(sub_83C1AFC4);
PPC_FUNC_IMPL(__imp__sub_83C1AFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AFC8"))) PPC_WEAK_FUNC(sub_83C1AFC8);
PPC_FUNC_IMPL(__imp__sub_83C1AFC8) {
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
	// addi r3,r11,-20276
	ctx.r3.s64 = ctx.r11.s64 + -20276;
	// bl 0x83523120
	ctx.lr = 0x83C1AFE0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-17224
	ctx.r3.s64 = ctx.r10.s64 + -17224;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1AFEC;
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

__attribute__((alias("__imp__sub_83C1AFFC"))) PPC_WEAK_FUNC(sub_83C1AFFC);
PPC_FUNC_IMPL(__imp__sub_83C1AFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B000"))) PPC_WEAK_FUNC(sub_83C1B000);
PPC_FUNC_IMPL(__imp__sub_83C1B000) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20272
	ctx.r7.s64 = ctx.r8.s64 + -20272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20272);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20272(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20272, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1B028"))) PPC_WEAK_FUNC(sub_83C1B028);
PPC_FUNC_IMPL(__imp__sub_83C1B028) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,420
	ctx.r6.s64 = ctx.r7.s64 + 420;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,348(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 348);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20272(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20272);
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
	// std r9,420(r7)
	PPC_STORE_U64(ctx.r7.u32 + 420, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1B070"))) PPC_WEAK_FUNC(sub_83C1B070);
PPC_FUNC_IMPL(__imp__sub_83C1B070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17208
	ctx.r3.s64 = ctx.r11.s64 + -17208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B07C"))) PPC_WEAK_FUNC(sub_83C1B07C);
PPC_FUNC_IMPL(__imp__sub_83C1B07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B080"))) PPC_WEAK_FUNC(sub_83C1B080);
PPC_FUNC_IMPL(__imp__sub_83C1B080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17200
	ctx.r3.s64 = ctx.r11.s64 + -17200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B08C"))) PPC_WEAK_FUNC(sub_83C1B08C);
PPC_FUNC_IMPL(__imp__sub_83C1B08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B090"))) PPC_WEAK_FUNC(sub_83C1B090);
PPC_FUNC_IMPL(__imp__sub_83C1B090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17192
	ctx.r3.s64 = ctx.r11.s64 + -17192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B09C"))) PPC_WEAK_FUNC(sub_83C1B09C);
PPC_FUNC_IMPL(__imp__sub_83C1B09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B0A0"))) PPC_WEAK_FUNC(sub_83C1B0A0);
PPC_FUNC_IMPL(__imp__sub_83C1B0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17184
	ctx.r3.s64 = ctx.r11.s64 + -17184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B0AC"))) PPC_WEAK_FUNC(sub_83C1B0AC);
PPC_FUNC_IMPL(__imp__sub_83C1B0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B0B0"))) PPC_WEAK_FUNC(sub_83C1B0B0);
PPC_FUNC_IMPL(__imp__sub_83C1B0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17176
	ctx.r3.s64 = ctx.r11.s64 + -17176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B0BC"))) PPC_WEAK_FUNC(sub_83C1B0BC);
PPC_FUNC_IMPL(__imp__sub_83C1B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B0C0"))) PPC_WEAK_FUNC(sub_83C1B0C0);
PPC_FUNC_IMPL(__imp__sub_83C1B0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17168
	ctx.r3.s64 = ctx.r11.s64 + -17168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B0CC"))) PPC_WEAK_FUNC(sub_83C1B0CC);
PPC_FUNC_IMPL(__imp__sub_83C1B0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B0D0"))) PPC_WEAK_FUNC(sub_83C1B0D0);
PPC_FUNC_IMPL(__imp__sub_83C1B0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17160
	ctx.r3.s64 = ctx.r11.s64 + -17160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B0DC"))) PPC_WEAK_FUNC(sub_83C1B0DC);
PPC_FUNC_IMPL(__imp__sub_83C1B0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B0E0"))) PPC_WEAK_FUNC(sub_83C1B0E0);
PPC_FUNC_IMPL(__imp__sub_83C1B0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17152
	ctx.r3.s64 = ctx.r11.s64 + -17152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B0EC"))) PPC_WEAK_FUNC(sub_83C1B0EC);
PPC_FUNC_IMPL(__imp__sub_83C1B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B0F0"))) PPC_WEAK_FUNC(sub_83C1B0F0);
PPC_FUNC_IMPL(__imp__sub_83C1B0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17144
	ctx.r3.s64 = ctx.r11.s64 + -17144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B0FC"))) PPC_WEAK_FUNC(sub_83C1B0FC);
PPC_FUNC_IMPL(__imp__sub_83C1B0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B100"))) PPC_WEAK_FUNC(sub_83C1B100);
PPC_FUNC_IMPL(__imp__sub_83C1B100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17136
	ctx.r3.s64 = ctx.r11.s64 + -17136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B10C"))) PPC_WEAK_FUNC(sub_83C1B10C);
PPC_FUNC_IMPL(__imp__sub_83C1B10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B110"))) PPC_WEAK_FUNC(sub_83C1B110);
PPC_FUNC_IMPL(__imp__sub_83C1B110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17128
	ctx.r3.s64 = ctx.r11.s64 + -17128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B11C"))) PPC_WEAK_FUNC(sub_83C1B11C);
PPC_FUNC_IMPL(__imp__sub_83C1B11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B120"))) PPC_WEAK_FUNC(sub_83C1B120);
PPC_FUNC_IMPL(__imp__sub_83C1B120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17120
	ctx.r3.s64 = ctx.r11.s64 + -17120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B12C"))) PPC_WEAK_FUNC(sub_83C1B12C);
PPC_FUNC_IMPL(__imp__sub_83C1B12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B130"))) PPC_WEAK_FUNC(sub_83C1B130);
PPC_FUNC_IMPL(__imp__sub_83C1B130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17112
	ctx.r3.s64 = ctx.r11.s64 + -17112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B13C"))) PPC_WEAK_FUNC(sub_83C1B13C);
PPC_FUNC_IMPL(__imp__sub_83C1B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B140"))) PPC_WEAK_FUNC(sub_83C1B140);
PPC_FUNC_IMPL(__imp__sub_83C1B140) {
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
	// addi r3,r11,-20264
	ctx.r3.s64 = ctx.r11.s64 + -20264;
	// bl 0x83523120
	ctx.lr = 0x83C1B158;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-17104
	ctx.r3.s64 = ctx.r10.s64 + -17104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1B164;
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

__attribute__((alias("__imp__sub_83C1B174"))) PPC_WEAK_FUNC(sub_83C1B174);
PPC_FUNC_IMPL(__imp__sub_83C1B174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B178"))) PPC_WEAK_FUNC(sub_83C1B178);
PPC_FUNC_IMPL(__imp__sub_83C1B178) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20260
	ctx.r7.s64 = ctx.r8.s64 + -20260;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20260(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20260);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20260(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20260, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1B1A0"))) PPC_WEAK_FUNC(sub_83C1B1A0);
PPC_FUNC_IMPL(__imp__sub_83C1B1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,548
	ctx.r6.s64 = ctx.r7.s64 + 548;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,476(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 476);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20260(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20260);
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
	// std r9,548(r7)
	PPC_STORE_U64(ctx.r7.u32 + 548, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1B1E8"))) PPC_WEAK_FUNC(sub_83C1B1E8);
PPC_FUNC_IMPL(__imp__sub_83C1B1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17088
	ctx.r3.s64 = ctx.r11.s64 + -17088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B1F4"))) PPC_WEAK_FUNC(sub_83C1B1F4);
PPC_FUNC_IMPL(__imp__sub_83C1B1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B1F8"))) PPC_WEAK_FUNC(sub_83C1B1F8);
PPC_FUNC_IMPL(__imp__sub_83C1B1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17080
	ctx.r3.s64 = ctx.r11.s64 + -17080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B204"))) PPC_WEAK_FUNC(sub_83C1B204);
PPC_FUNC_IMPL(__imp__sub_83C1B204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B208"))) PPC_WEAK_FUNC(sub_83C1B208);
PPC_FUNC_IMPL(__imp__sub_83C1B208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17072
	ctx.r3.s64 = ctx.r11.s64 + -17072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B214"))) PPC_WEAK_FUNC(sub_83C1B214);
PPC_FUNC_IMPL(__imp__sub_83C1B214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B218"))) PPC_WEAK_FUNC(sub_83C1B218);
PPC_FUNC_IMPL(__imp__sub_83C1B218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17064
	ctx.r3.s64 = ctx.r11.s64 + -17064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B224"))) PPC_WEAK_FUNC(sub_83C1B224);
PPC_FUNC_IMPL(__imp__sub_83C1B224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B228"))) PPC_WEAK_FUNC(sub_83C1B228);
PPC_FUNC_IMPL(__imp__sub_83C1B228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17056
	ctx.r3.s64 = ctx.r11.s64 + -17056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B234"))) PPC_WEAK_FUNC(sub_83C1B234);
PPC_FUNC_IMPL(__imp__sub_83C1B234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B238"))) PPC_WEAK_FUNC(sub_83C1B238);
PPC_FUNC_IMPL(__imp__sub_83C1B238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17048
	ctx.r3.s64 = ctx.r11.s64 + -17048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B244"))) PPC_WEAK_FUNC(sub_83C1B244);
PPC_FUNC_IMPL(__imp__sub_83C1B244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B248"))) PPC_WEAK_FUNC(sub_83C1B248);
PPC_FUNC_IMPL(__imp__sub_83C1B248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17040
	ctx.r3.s64 = ctx.r11.s64 + -17040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B254"))) PPC_WEAK_FUNC(sub_83C1B254);
PPC_FUNC_IMPL(__imp__sub_83C1B254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B258"))) PPC_WEAK_FUNC(sub_83C1B258);
PPC_FUNC_IMPL(__imp__sub_83C1B258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17032
	ctx.r3.s64 = ctx.r11.s64 + -17032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B264"))) PPC_WEAK_FUNC(sub_83C1B264);
PPC_FUNC_IMPL(__imp__sub_83C1B264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B268"))) PPC_WEAK_FUNC(sub_83C1B268);
PPC_FUNC_IMPL(__imp__sub_83C1B268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17024
	ctx.r3.s64 = ctx.r11.s64 + -17024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B274"))) PPC_WEAK_FUNC(sub_83C1B274);
PPC_FUNC_IMPL(__imp__sub_83C1B274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B278"))) PPC_WEAK_FUNC(sub_83C1B278);
PPC_FUNC_IMPL(__imp__sub_83C1B278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17016
	ctx.r3.s64 = ctx.r11.s64 + -17016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B284"))) PPC_WEAK_FUNC(sub_83C1B284);
PPC_FUNC_IMPL(__imp__sub_83C1B284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B288"))) PPC_WEAK_FUNC(sub_83C1B288);
PPC_FUNC_IMPL(__imp__sub_83C1B288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17008
	ctx.r3.s64 = ctx.r11.s64 + -17008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B294"))) PPC_WEAK_FUNC(sub_83C1B294);
PPC_FUNC_IMPL(__imp__sub_83C1B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B298"))) PPC_WEAK_FUNC(sub_83C1B298);
PPC_FUNC_IMPL(__imp__sub_83C1B298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17000
	ctx.r3.s64 = ctx.r11.s64 + -17000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B2A4"))) PPC_WEAK_FUNC(sub_83C1B2A4);
PPC_FUNC_IMPL(__imp__sub_83C1B2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B2A8"))) PPC_WEAK_FUNC(sub_83C1B2A8);
PPC_FUNC_IMPL(__imp__sub_83C1B2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16992
	ctx.r3.s64 = ctx.r11.s64 + -16992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B2B4"))) PPC_WEAK_FUNC(sub_83C1B2B4);
PPC_FUNC_IMPL(__imp__sub_83C1B2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B2B8"))) PPC_WEAK_FUNC(sub_83C1B2B8);
PPC_FUNC_IMPL(__imp__sub_83C1B2B8) {
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
	// addi r3,r11,-20252
	ctx.r3.s64 = ctx.r11.s64 + -20252;
	// bl 0x83523120
	ctx.lr = 0x83C1B2D0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-16984
	ctx.r3.s64 = ctx.r10.s64 + -16984;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1B2DC;
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

__attribute__((alias("__imp__sub_83C1B2EC"))) PPC_WEAK_FUNC(sub_83C1B2EC);
PPC_FUNC_IMPL(__imp__sub_83C1B2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B2F0"))) PPC_WEAK_FUNC(sub_83C1B2F0);
PPC_FUNC_IMPL(__imp__sub_83C1B2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20248
	ctx.r7.s64 = ctx.r8.s64 + -20248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20248(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20248);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20248(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20248, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1B318"))) PPC_WEAK_FUNC(sub_83C1B318);
PPC_FUNC_IMPL(__imp__sub_83C1B318) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,676
	ctx.r6.s64 = ctx.r7.s64 + 676;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,604(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 604);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20248(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20248);
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
	// std r9,676(r7)
	PPC_STORE_U64(ctx.r7.u32 + 676, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1B360"))) PPC_WEAK_FUNC(sub_83C1B360);
PPC_FUNC_IMPL(__imp__sub_83C1B360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16968
	ctx.r3.s64 = ctx.r11.s64 + -16968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B36C"))) PPC_WEAK_FUNC(sub_83C1B36C);
PPC_FUNC_IMPL(__imp__sub_83C1B36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B370"))) PPC_WEAK_FUNC(sub_83C1B370);
PPC_FUNC_IMPL(__imp__sub_83C1B370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16960
	ctx.r3.s64 = ctx.r11.s64 + -16960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B37C"))) PPC_WEAK_FUNC(sub_83C1B37C);
PPC_FUNC_IMPL(__imp__sub_83C1B37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B380"))) PPC_WEAK_FUNC(sub_83C1B380);
PPC_FUNC_IMPL(__imp__sub_83C1B380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16952
	ctx.r3.s64 = ctx.r11.s64 + -16952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B38C"))) PPC_WEAK_FUNC(sub_83C1B38C);
PPC_FUNC_IMPL(__imp__sub_83C1B38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B390"))) PPC_WEAK_FUNC(sub_83C1B390);
PPC_FUNC_IMPL(__imp__sub_83C1B390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16944
	ctx.r3.s64 = ctx.r11.s64 + -16944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B39C"))) PPC_WEAK_FUNC(sub_83C1B39C);
PPC_FUNC_IMPL(__imp__sub_83C1B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B3A0"))) PPC_WEAK_FUNC(sub_83C1B3A0);
PPC_FUNC_IMPL(__imp__sub_83C1B3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16936
	ctx.r3.s64 = ctx.r11.s64 + -16936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B3AC"))) PPC_WEAK_FUNC(sub_83C1B3AC);
PPC_FUNC_IMPL(__imp__sub_83C1B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B3B0"))) PPC_WEAK_FUNC(sub_83C1B3B0);
PPC_FUNC_IMPL(__imp__sub_83C1B3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16928
	ctx.r3.s64 = ctx.r11.s64 + -16928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B3BC"))) PPC_WEAK_FUNC(sub_83C1B3BC);
PPC_FUNC_IMPL(__imp__sub_83C1B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B3C0"))) PPC_WEAK_FUNC(sub_83C1B3C0);
PPC_FUNC_IMPL(__imp__sub_83C1B3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16920
	ctx.r3.s64 = ctx.r11.s64 + -16920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B3CC"))) PPC_WEAK_FUNC(sub_83C1B3CC);
PPC_FUNC_IMPL(__imp__sub_83C1B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B3D0"))) PPC_WEAK_FUNC(sub_83C1B3D0);
PPC_FUNC_IMPL(__imp__sub_83C1B3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16912
	ctx.r3.s64 = ctx.r11.s64 + -16912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B3DC"))) PPC_WEAK_FUNC(sub_83C1B3DC);
PPC_FUNC_IMPL(__imp__sub_83C1B3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B3E0"))) PPC_WEAK_FUNC(sub_83C1B3E0);
PPC_FUNC_IMPL(__imp__sub_83C1B3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16904
	ctx.r3.s64 = ctx.r11.s64 + -16904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B3EC"))) PPC_WEAK_FUNC(sub_83C1B3EC);
PPC_FUNC_IMPL(__imp__sub_83C1B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B3F0"))) PPC_WEAK_FUNC(sub_83C1B3F0);
PPC_FUNC_IMPL(__imp__sub_83C1B3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16896
	ctx.r3.s64 = ctx.r11.s64 + -16896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B3FC"))) PPC_WEAK_FUNC(sub_83C1B3FC);
PPC_FUNC_IMPL(__imp__sub_83C1B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B400"))) PPC_WEAK_FUNC(sub_83C1B400);
PPC_FUNC_IMPL(__imp__sub_83C1B400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16888
	ctx.r3.s64 = ctx.r11.s64 + -16888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B40C"))) PPC_WEAK_FUNC(sub_83C1B40C);
PPC_FUNC_IMPL(__imp__sub_83C1B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B410"))) PPC_WEAK_FUNC(sub_83C1B410);
PPC_FUNC_IMPL(__imp__sub_83C1B410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16880
	ctx.r3.s64 = ctx.r11.s64 + -16880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B41C"))) PPC_WEAK_FUNC(sub_83C1B41C);
PPC_FUNC_IMPL(__imp__sub_83C1B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B420"))) PPC_WEAK_FUNC(sub_83C1B420);
PPC_FUNC_IMPL(__imp__sub_83C1B420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16872
	ctx.r3.s64 = ctx.r11.s64 + -16872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B42C"))) PPC_WEAK_FUNC(sub_83C1B42C);
PPC_FUNC_IMPL(__imp__sub_83C1B42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B430"))) PPC_WEAK_FUNC(sub_83C1B430);
PPC_FUNC_IMPL(__imp__sub_83C1B430) {
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
	// addi r3,r11,-20240
	ctx.r3.s64 = ctx.r11.s64 + -20240;
	// bl 0x83523120
	ctx.lr = 0x83C1B448;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-16864
	ctx.r3.s64 = ctx.r10.s64 + -16864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1B454;
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

__attribute__((alias("__imp__sub_83C1B464"))) PPC_WEAK_FUNC(sub_83C1B464);
PPC_FUNC_IMPL(__imp__sub_83C1B464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B468"))) PPC_WEAK_FUNC(sub_83C1B468);
PPC_FUNC_IMPL(__imp__sub_83C1B468) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20224
	ctx.r7.s64 = ctx.r8.s64 + -20224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20224);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20224(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20224, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1B490"))) PPC_WEAK_FUNC(sub_83C1B490);
PPC_FUNC_IMPL(__imp__sub_83C1B490) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,804
	ctx.r6.s64 = ctx.r7.s64 + 804;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,732(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 732);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20224(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20224);
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
	// std r9,804(r7)
	PPC_STORE_U64(ctx.r7.u32 + 804, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1B4D8"))) PPC_WEAK_FUNC(sub_83C1B4D8);
PPC_FUNC_IMPL(__imp__sub_83C1B4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16848
	ctx.r3.s64 = ctx.r11.s64 + -16848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B4E4"))) PPC_WEAK_FUNC(sub_83C1B4E4);
PPC_FUNC_IMPL(__imp__sub_83C1B4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B4E8"))) PPC_WEAK_FUNC(sub_83C1B4E8);
PPC_FUNC_IMPL(__imp__sub_83C1B4E8) {
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
	// addi r3,r11,-20216
	ctx.r3.s64 = ctx.r11.s64 + -20216;
	// bl 0x8259af80
	ctx.lr = 0x83C1B500;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-16832
	ctx.r3.s64 = ctx.r10.s64 + -16832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1B50C;
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

__attribute__((alias("__imp__sub_83C1B51C"))) PPC_WEAK_FUNC(sub_83C1B51C);
PPC_FUNC_IMPL(__imp__sub_83C1B51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B520"))) PPC_WEAK_FUNC(sub_83C1B520);
PPC_FUNC_IMPL(__imp__sub_83C1B520) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20236
	ctx.r11.s64 = ctx.r8.s64 + -20236;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 780);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16840
	ctx.r3.s64 = ctx.r6.s64 + -16840;
	// stw r10,-20236(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20236, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B550"))) PPC_WEAK_FUNC(sub_83C1B550);
PPC_FUNC_IMPL(__imp__sub_83C1B550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16824
	ctx.r3.s64 = ctx.r11.s64 + -16824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B55C"))) PPC_WEAK_FUNC(sub_83C1B55C);
PPC_FUNC_IMPL(__imp__sub_83C1B55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B560"))) PPC_WEAK_FUNC(sub_83C1B560);
PPC_FUNC_IMPL(__imp__sub_83C1B560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16816
	ctx.r3.s64 = ctx.r11.s64 + -16816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B56C"))) PPC_WEAK_FUNC(sub_83C1B56C);
PPC_FUNC_IMPL(__imp__sub_83C1B56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B570"))) PPC_WEAK_FUNC(sub_83C1B570);
PPC_FUNC_IMPL(__imp__sub_83C1B570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16808
	ctx.r3.s64 = ctx.r11.s64 + -16808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B57C"))) PPC_WEAK_FUNC(sub_83C1B57C);
PPC_FUNC_IMPL(__imp__sub_83C1B57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B580"))) PPC_WEAK_FUNC(sub_83C1B580);
PPC_FUNC_IMPL(__imp__sub_83C1B580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16800
	ctx.r3.s64 = ctx.r11.s64 + -16800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B58C"))) PPC_WEAK_FUNC(sub_83C1B58C);
PPC_FUNC_IMPL(__imp__sub_83C1B58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B590"))) PPC_WEAK_FUNC(sub_83C1B590);
PPC_FUNC_IMPL(__imp__sub_83C1B590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16792
	ctx.r3.s64 = ctx.r11.s64 + -16792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B59C"))) PPC_WEAK_FUNC(sub_83C1B59C);
PPC_FUNC_IMPL(__imp__sub_83C1B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B5A0"))) PPC_WEAK_FUNC(sub_83C1B5A0);
PPC_FUNC_IMPL(__imp__sub_83C1B5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16784
	ctx.r3.s64 = ctx.r11.s64 + -16784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B5AC"))) PPC_WEAK_FUNC(sub_83C1B5AC);
PPC_FUNC_IMPL(__imp__sub_83C1B5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B5B0"))) PPC_WEAK_FUNC(sub_83C1B5B0);
PPC_FUNC_IMPL(__imp__sub_83C1B5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16776
	ctx.r3.s64 = ctx.r11.s64 + -16776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B5BC"))) PPC_WEAK_FUNC(sub_83C1B5BC);
PPC_FUNC_IMPL(__imp__sub_83C1B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B5C0"))) PPC_WEAK_FUNC(sub_83C1B5C0);
PPC_FUNC_IMPL(__imp__sub_83C1B5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16768
	ctx.r3.s64 = ctx.r11.s64 + -16768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B5CC"))) PPC_WEAK_FUNC(sub_83C1B5CC);
PPC_FUNC_IMPL(__imp__sub_83C1B5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B5D0"))) PPC_WEAK_FUNC(sub_83C1B5D0);
PPC_FUNC_IMPL(__imp__sub_83C1B5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16760
	ctx.r3.s64 = ctx.r11.s64 + -16760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B5DC"))) PPC_WEAK_FUNC(sub_83C1B5DC);
PPC_FUNC_IMPL(__imp__sub_83C1B5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B5E0"))) PPC_WEAK_FUNC(sub_83C1B5E0);
PPC_FUNC_IMPL(__imp__sub_83C1B5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16752
	ctx.r3.s64 = ctx.r11.s64 + -16752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B5EC"))) PPC_WEAK_FUNC(sub_83C1B5EC);
PPC_FUNC_IMPL(__imp__sub_83C1B5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B5F0"))) PPC_WEAK_FUNC(sub_83C1B5F0);
PPC_FUNC_IMPL(__imp__sub_83C1B5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16744
	ctx.r3.s64 = ctx.r11.s64 + -16744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B5FC"))) PPC_WEAK_FUNC(sub_83C1B5FC);
PPC_FUNC_IMPL(__imp__sub_83C1B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B600"))) PPC_WEAK_FUNC(sub_83C1B600);
PPC_FUNC_IMPL(__imp__sub_83C1B600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16736
	ctx.r3.s64 = ctx.r11.s64 + -16736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B60C"))) PPC_WEAK_FUNC(sub_83C1B60C);
PPC_FUNC_IMPL(__imp__sub_83C1B60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B610"))) PPC_WEAK_FUNC(sub_83C1B610);
PPC_FUNC_IMPL(__imp__sub_83C1B610) {
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
	// addi r3,r11,-19872
	ctx.r3.s64 = ctx.r11.s64 + -19872;
	// bl 0x83523120
	ctx.lr = 0x83C1B628;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-16728
	ctx.r3.s64 = ctx.r10.s64 + -16728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1B634;
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

__attribute__((alias("__imp__sub_83C1B644"))) PPC_WEAK_FUNC(sub_83C1B644);
PPC_FUNC_IMPL(__imp__sub_83C1B644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B648"))) PPC_WEAK_FUNC(sub_83C1B648);
PPC_FUNC_IMPL(__imp__sub_83C1B648) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19856
	ctx.r7.s64 = ctx.r8.s64 + -19856;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19856(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19856);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19856(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19856, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1B670"))) PPC_WEAK_FUNC(sub_83C1B670);
PPC_FUNC_IMPL(__imp__sub_83C1B670) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,932
	ctx.r6.s64 = ctx.r7.s64 + 932;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,860(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 860);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19856(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19856);
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
	// std r9,932(r7)
	PPC_STORE_U64(ctx.r7.u32 + 932, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1B6B8"))) PPC_WEAK_FUNC(sub_83C1B6B8);
PPC_FUNC_IMPL(__imp__sub_83C1B6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16712
	ctx.r3.s64 = ctx.r11.s64 + -16712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B6C4"))) PPC_WEAK_FUNC(sub_83C1B6C4);
PPC_FUNC_IMPL(__imp__sub_83C1B6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B6C8"))) PPC_WEAK_FUNC(sub_83C1B6C8);
PPC_FUNC_IMPL(__imp__sub_83C1B6C8) {
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
	// addi r3,r11,-19848
	ctx.r3.s64 = ctx.r11.s64 + -19848;
	// bl 0x8259af80
	ctx.lr = 0x83C1B6E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-16696
	ctx.r3.s64 = ctx.r10.s64 + -16696;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1B6EC;
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

__attribute__((alias("__imp__sub_83C1B6FC"))) PPC_WEAK_FUNC(sub_83C1B6FC);
PPC_FUNC_IMPL(__imp__sub_83C1B6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B700"))) PPC_WEAK_FUNC(sub_83C1B700);
PPC_FUNC_IMPL(__imp__sub_83C1B700) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19868
	ctx.r11.s64 = ctx.r8.s64 + -19868;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,908(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16704
	ctx.r3.s64 = ctx.r6.s64 + -16704;
	// stw r10,-19868(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19868, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B730"))) PPC_WEAK_FUNC(sub_83C1B730);
PPC_FUNC_IMPL(__imp__sub_83C1B730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16688
	ctx.r3.s64 = ctx.r11.s64 + -16688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B73C"))) PPC_WEAK_FUNC(sub_83C1B73C);
PPC_FUNC_IMPL(__imp__sub_83C1B73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B740"))) PPC_WEAK_FUNC(sub_83C1B740);
PPC_FUNC_IMPL(__imp__sub_83C1B740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16680
	ctx.r3.s64 = ctx.r11.s64 + -16680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B74C"))) PPC_WEAK_FUNC(sub_83C1B74C);
PPC_FUNC_IMPL(__imp__sub_83C1B74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B750"))) PPC_WEAK_FUNC(sub_83C1B750);
PPC_FUNC_IMPL(__imp__sub_83C1B750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16672
	ctx.r3.s64 = ctx.r11.s64 + -16672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B75C"))) PPC_WEAK_FUNC(sub_83C1B75C);
PPC_FUNC_IMPL(__imp__sub_83C1B75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B760"))) PPC_WEAK_FUNC(sub_83C1B760);
PPC_FUNC_IMPL(__imp__sub_83C1B760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16664
	ctx.r3.s64 = ctx.r11.s64 + -16664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B76C"))) PPC_WEAK_FUNC(sub_83C1B76C);
PPC_FUNC_IMPL(__imp__sub_83C1B76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B770"))) PPC_WEAK_FUNC(sub_83C1B770);
PPC_FUNC_IMPL(__imp__sub_83C1B770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16656
	ctx.r3.s64 = ctx.r11.s64 + -16656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B77C"))) PPC_WEAK_FUNC(sub_83C1B77C);
PPC_FUNC_IMPL(__imp__sub_83C1B77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B780"))) PPC_WEAK_FUNC(sub_83C1B780);
PPC_FUNC_IMPL(__imp__sub_83C1B780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16648
	ctx.r3.s64 = ctx.r11.s64 + -16648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B78C"))) PPC_WEAK_FUNC(sub_83C1B78C);
PPC_FUNC_IMPL(__imp__sub_83C1B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B790"))) PPC_WEAK_FUNC(sub_83C1B790);
PPC_FUNC_IMPL(__imp__sub_83C1B790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16640
	ctx.r3.s64 = ctx.r11.s64 + -16640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B79C"))) PPC_WEAK_FUNC(sub_83C1B79C);
PPC_FUNC_IMPL(__imp__sub_83C1B79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B7A0"))) PPC_WEAK_FUNC(sub_83C1B7A0);
PPC_FUNC_IMPL(__imp__sub_83C1B7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16632
	ctx.r3.s64 = ctx.r11.s64 + -16632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B7AC"))) PPC_WEAK_FUNC(sub_83C1B7AC);
PPC_FUNC_IMPL(__imp__sub_83C1B7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B7B0"))) PPC_WEAK_FUNC(sub_83C1B7B0);
PPC_FUNC_IMPL(__imp__sub_83C1B7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16624
	ctx.r3.s64 = ctx.r11.s64 + -16624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B7BC"))) PPC_WEAK_FUNC(sub_83C1B7BC);
PPC_FUNC_IMPL(__imp__sub_83C1B7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B7C0"))) PPC_WEAK_FUNC(sub_83C1B7C0);
PPC_FUNC_IMPL(__imp__sub_83C1B7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16616
	ctx.r3.s64 = ctx.r11.s64 + -16616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B7CC"))) PPC_WEAK_FUNC(sub_83C1B7CC);
PPC_FUNC_IMPL(__imp__sub_83C1B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B7D0"))) PPC_WEAK_FUNC(sub_83C1B7D0);
PPC_FUNC_IMPL(__imp__sub_83C1B7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16608
	ctx.r3.s64 = ctx.r11.s64 + -16608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B7DC"))) PPC_WEAK_FUNC(sub_83C1B7DC);
PPC_FUNC_IMPL(__imp__sub_83C1B7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B7E0"))) PPC_WEAK_FUNC(sub_83C1B7E0);
PPC_FUNC_IMPL(__imp__sub_83C1B7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16600
	ctx.r3.s64 = ctx.r11.s64 + -16600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B7EC"))) PPC_WEAK_FUNC(sub_83C1B7EC);
PPC_FUNC_IMPL(__imp__sub_83C1B7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B7F0"))) PPC_WEAK_FUNC(sub_83C1B7F0);
PPC_FUNC_IMPL(__imp__sub_83C1B7F0) {
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
	// addi r3,r11,-19504
	ctx.r3.s64 = ctx.r11.s64 + -19504;
	// bl 0x83523120
	ctx.lr = 0x83C1B808;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-16592
	ctx.r3.s64 = ctx.r10.s64 + -16592;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1B814;
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

__attribute__((alias("__imp__sub_83C1B824"))) PPC_WEAK_FUNC(sub_83C1B824);
PPC_FUNC_IMPL(__imp__sub_83C1B824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B828"))) PPC_WEAK_FUNC(sub_83C1B828);
PPC_FUNC_IMPL(__imp__sub_83C1B828) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19500
	ctx.r7.s64 = ctx.r8.s64 + -19500;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19500);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19500(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19500, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1B850"))) PPC_WEAK_FUNC(sub_83C1B850);
PPC_FUNC_IMPL(__imp__sub_83C1B850) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,1060
	ctx.r6.s64 = ctx.r7.s64 + 1060;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,988(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 988);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19500(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19500);
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
	// std r9,1060(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1060, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1B898"))) PPC_WEAK_FUNC(sub_83C1B898);
PPC_FUNC_IMPL(__imp__sub_83C1B898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16576
	ctx.r3.s64 = ctx.r11.s64 + -16576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B8A4"))) PPC_WEAK_FUNC(sub_83C1B8A4);
PPC_FUNC_IMPL(__imp__sub_83C1B8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B8A8"))) PPC_WEAK_FUNC(sub_83C1B8A8);
PPC_FUNC_IMPL(__imp__sub_83C1B8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16568
	ctx.r3.s64 = ctx.r11.s64 + -16568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B8B4"))) PPC_WEAK_FUNC(sub_83C1B8B4);
PPC_FUNC_IMPL(__imp__sub_83C1B8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B8B8"))) PPC_WEAK_FUNC(sub_83C1B8B8);
PPC_FUNC_IMPL(__imp__sub_83C1B8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16560
	ctx.r3.s64 = ctx.r11.s64 + -16560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B8C4"))) PPC_WEAK_FUNC(sub_83C1B8C4);
PPC_FUNC_IMPL(__imp__sub_83C1B8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B8C8"))) PPC_WEAK_FUNC(sub_83C1B8C8);
PPC_FUNC_IMPL(__imp__sub_83C1B8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16552
	ctx.r3.s64 = ctx.r11.s64 + -16552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1B8D4"))) PPC_WEAK_FUNC(sub_83C1B8D4);
PPC_FUNC_IMPL(__imp__sub_83C1B8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1B8D8"))) PPC_WEAK_FUNC(sub_83C1B8D8);
PPC_FUNC_IMPL(__imp__sub_83C1B8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-16544
	ctx.r3.s64 = ctx.r11.s64 + -16544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

