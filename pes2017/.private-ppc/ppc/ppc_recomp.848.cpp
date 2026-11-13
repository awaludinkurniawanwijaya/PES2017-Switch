#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C80C68"))) PPC_WEAK_FUNC(sub_83C80C68);
PPC_FUNC_IMPL(__imp__sub_83C80C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9520
	ctx.r3.s64 = ctx.r11.s64 + -9520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80C74"))) PPC_WEAK_FUNC(sub_83C80C74);
PPC_FUNC_IMPL(__imp__sub_83C80C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80C78"))) PPC_WEAK_FUNC(sub_83C80C78);
PPC_FUNC_IMPL(__imp__sub_83C80C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9512
	ctx.r3.s64 = ctx.r11.s64 + -9512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80C84"))) PPC_WEAK_FUNC(sub_83C80C84);
PPC_FUNC_IMPL(__imp__sub_83C80C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80C88"))) PPC_WEAK_FUNC(sub_83C80C88);
PPC_FUNC_IMPL(__imp__sub_83C80C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9504
	ctx.r3.s64 = ctx.r11.s64 + -9504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80C94"))) PPC_WEAK_FUNC(sub_83C80C94);
PPC_FUNC_IMPL(__imp__sub_83C80C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80C98"))) PPC_WEAK_FUNC(sub_83C80C98);
PPC_FUNC_IMPL(__imp__sub_83C80C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9496
	ctx.r3.s64 = ctx.r11.s64 + -9496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80CA4"))) PPC_WEAK_FUNC(sub_83C80CA4);
PPC_FUNC_IMPL(__imp__sub_83C80CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80CA8"))) PPC_WEAK_FUNC(sub_83C80CA8);
PPC_FUNC_IMPL(__imp__sub_83C80CA8) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,22348
	ctx.r3.s64 = ctx.r11.s64 + 22348;
	// bl 0x83523120
	ctx.lr = 0x83C80CC0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-9488
	ctx.r3.s64 = ctx.r10.s64 + -9488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C80CCC;
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

__attribute__((alias("__imp__sub_83C80CDC"))) PPC_WEAK_FUNC(sub_83C80CDC);
PPC_FUNC_IMPL(__imp__sub_83C80CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80CE0"))) PPC_WEAK_FUNC(sub_83C80CE0);
PPC_FUNC_IMPL(__imp__sub_83C80CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9472
	ctx.r3.s64 = ctx.r11.s64 + -9472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80CEC"))) PPC_WEAK_FUNC(sub_83C80CEC);
PPC_FUNC_IMPL(__imp__sub_83C80CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80CF0"))) PPC_WEAK_FUNC(sub_83C80CF0);
PPC_FUNC_IMPL(__imp__sub_83C80CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9464
	ctx.r3.s64 = ctx.r11.s64 + -9464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80CFC"))) PPC_WEAK_FUNC(sub_83C80CFC);
PPC_FUNC_IMPL(__imp__sub_83C80CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80D00"))) PPC_WEAK_FUNC(sub_83C80D00);
PPC_FUNC_IMPL(__imp__sub_83C80D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9456
	ctx.r3.s64 = ctx.r11.s64 + -9456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80D0C"))) PPC_WEAK_FUNC(sub_83C80D0C);
PPC_FUNC_IMPL(__imp__sub_83C80D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80D10"))) PPC_WEAK_FUNC(sub_83C80D10);
PPC_FUNC_IMPL(__imp__sub_83C80D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9448
	ctx.r3.s64 = ctx.r11.s64 + -9448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80D1C"))) PPC_WEAK_FUNC(sub_83C80D1C);
PPC_FUNC_IMPL(__imp__sub_83C80D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80D20"))) PPC_WEAK_FUNC(sub_83C80D20);
PPC_FUNC_IMPL(__imp__sub_83C80D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9440
	ctx.r3.s64 = ctx.r11.s64 + -9440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80D2C"))) PPC_WEAK_FUNC(sub_83C80D2C);
PPC_FUNC_IMPL(__imp__sub_83C80D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80D30"))) PPC_WEAK_FUNC(sub_83C80D30);
PPC_FUNC_IMPL(__imp__sub_83C80D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9432
	ctx.r3.s64 = ctx.r11.s64 + -9432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80D3C"))) PPC_WEAK_FUNC(sub_83C80D3C);
PPC_FUNC_IMPL(__imp__sub_83C80D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80D40"))) PPC_WEAK_FUNC(sub_83C80D40);
PPC_FUNC_IMPL(__imp__sub_83C80D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9424
	ctx.r3.s64 = ctx.r11.s64 + -9424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80D4C"))) PPC_WEAK_FUNC(sub_83C80D4C);
PPC_FUNC_IMPL(__imp__sub_83C80D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80D50"))) PPC_WEAK_FUNC(sub_83C80D50);
PPC_FUNC_IMPL(__imp__sub_83C80D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9416
	ctx.r3.s64 = ctx.r11.s64 + -9416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80D5C"))) PPC_WEAK_FUNC(sub_83C80D5C);
PPC_FUNC_IMPL(__imp__sub_83C80D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80D60"))) PPC_WEAK_FUNC(sub_83C80D60);
PPC_FUNC_IMPL(__imp__sub_83C80D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9408
	ctx.r3.s64 = ctx.r11.s64 + -9408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80D6C"))) PPC_WEAK_FUNC(sub_83C80D6C);
PPC_FUNC_IMPL(__imp__sub_83C80D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80D70"))) PPC_WEAK_FUNC(sub_83C80D70);
PPC_FUNC_IMPL(__imp__sub_83C80D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9400
	ctx.r3.s64 = ctx.r11.s64 + -9400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80D7C"))) PPC_WEAK_FUNC(sub_83C80D7C);
PPC_FUNC_IMPL(__imp__sub_83C80D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80D80"))) PPC_WEAK_FUNC(sub_83C80D80);
PPC_FUNC_IMPL(__imp__sub_83C80D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9392
	ctx.r3.s64 = ctx.r11.s64 + -9392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80D8C"))) PPC_WEAK_FUNC(sub_83C80D8C);
PPC_FUNC_IMPL(__imp__sub_83C80D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80D90"))) PPC_WEAK_FUNC(sub_83C80D90);
PPC_FUNC_IMPL(__imp__sub_83C80D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9384
	ctx.r3.s64 = ctx.r11.s64 + -9384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80D9C"))) PPC_WEAK_FUNC(sub_83C80D9C);
PPC_FUNC_IMPL(__imp__sub_83C80D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80DA0"))) PPC_WEAK_FUNC(sub_83C80DA0);
PPC_FUNC_IMPL(__imp__sub_83C80DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9376
	ctx.r3.s64 = ctx.r11.s64 + -9376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80DAC"))) PPC_WEAK_FUNC(sub_83C80DAC);
PPC_FUNC_IMPL(__imp__sub_83C80DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80DB0"))) PPC_WEAK_FUNC(sub_83C80DB0);
PPC_FUNC_IMPL(__imp__sub_83C80DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9368
	ctx.r3.s64 = ctx.r11.s64 + -9368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80DBC"))) PPC_WEAK_FUNC(sub_83C80DBC);
PPC_FUNC_IMPL(__imp__sub_83C80DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80DC0"))) PPC_WEAK_FUNC(sub_83C80DC0);
PPC_FUNC_IMPL(__imp__sub_83C80DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9360
	ctx.r3.s64 = ctx.r11.s64 + -9360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80DCC"))) PPC_WEAK_FUNC(sub_83C80DCC);
PPC_FUNC_IMPL(__imp__sub_83C80DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80DD0"))) PPC_WEAK_FUNC(sub_83C80DD0);
PPC_FUNC_IMPL(__imp__sub_83C80DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9352
	ctx.r3.s64 = ctx.r11.s64 + -9352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80DDC"))) PPC_WEAK_FUNC(sub_83C80DDC);
PPC_FUNC_IMPL(__imp__sub_83C80DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80DE0"))) PPC_WEAK_FUNC(sub_83C80DE0);
PPC_FUNC_IMPL(__imp__sub_83C80DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9344
	ctx.r3.s64 = ctx.r11.s64 + -9344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80DEC"))) PPC_WEAK_FUNC(sub_83C80DEC);
PPC_FUNC_IMPL(__imp__sub_83C80DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80DF0"))) PPC_WEAK_FUNC(sub_83C80DF0);
PPC_FUNC_IMPL(__imp__sub_83C80DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9336
	ctx.r3.s64 = ctx.r11.s64 + -9336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80DFC"))) PPC_WEAK_FUNC(sub_83C80DFC);
PPC_FUNC_IMPL(__imp__sub_83C80DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80E00"))) PPC_WEAK_FUNC(sub_83C80E00);
PPC_FUNC_IMPL(__imp__sub_83C80E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9328
	ctx.r3.s64 = ctx.r11.s64 + -9328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80E0C"))) PPC_WEAK_FUNC(sub_83C80E0C);
PPC_FUNC_IMPL(__imp__sub_83C80E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80E10"))) PPC_WEAK_FUNC(sub_83C80E10);
PPC_FUNC_IMPL(__imp__sub_83C80E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9320
	ctx.r3.s64 = ctx.r11.s64 + -9320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80E1C"))) PPC_WEAK_FUNC(sub_83C80E1C);
PPC_FUNC_IMPL(__imp__sub_83C80E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80E20"))) PPC_WEAK_FUNC(sub_83C80E20);
PPC_FUNC_IMPL(__imp__sub_83C80E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9312
	ctx.r3.s64 = ctx.r11.s64 + -9312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80E2C"))) PPC_WEAK_FUNC(sub_83C80E2C);
PPC_FUNC_IMPL(__imp__sub_83C80E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80E30"))) PPC_WEAK_FUNC(sub_83C80E30);
PPC_FUNC_IMPL(__imp__sub_83C80E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9304
	ctx.r3.s64 = ctx.r11.s64 + -9304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80E3C"))) PPC_WEAK_FUNC(sub_83C80E3C);
PPC_FUNC_IMPL(__imp__sub_83C80E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80E40"))) PPC_WEAK_FUNC(sub_83C80E40);
PPC_FUNC_IMPL(__imp__sub_83C80E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9296
	ctx.r3.s64 = ctx.r11.s64 + -9296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80E4C"))) PPC_WEAK_FUNC(sub_83C80E4C);
PPC_FUNC_IMPL(__imp__sub_83C80E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80E50"))) PPC_WEAK_FUNC(sub_83C80E50);
PPC_FUNC_IMPL(__imp__sub_83C80E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9288
	ctx.r3.s64 = ctx.r11.s64 + -9288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80E5C"))) PPC_WEAK_FUNC(sub_83C80E5C);
PPC_FUNC_IMPL(__imp__sub_83C80E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80E60"))) PPC_WEAK_FUNC(sub_83C80E60);
PPC_FUNC_IMPL(__imp__sub_83C80E60) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,22360
	ctx.r3.s64 = ctx.r11.s64 + 22360;
	// bl 0x83523120
	ctx.lr = 0x83C80E78;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-9280
	ctx.r3.s64 = ctx.r10.s64 + -9280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C80E84;
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

__attribute__((alias("__imp__sub_83C80E94"))) PPC_WEAK_FUNC(sub_83C80E94);
PPC_FUNC_IMPL(__imp__sub_83C80E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80E98"))) PPC_WEAK_FUNC(sub_83C80E98);
PPC_FUNC_IMPL(__imp__sub_83C80E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9264
	ctx.r3.s64 = ctx.r11.s64 + -9264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80EA4"))) PPC_WEAK_FUNC(sub_83C80EA4);
PPC_FUNC_IMPL(__imp__sub_83C80EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80EA8"))) PPC_WEAK_FUNC(sub_83C80EA8);
PPC_FUNC_IMPL(__imp__sub_83C80EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9256
	ctx.r3.s64 = ctx.r11.s64 + -9256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80EB4"))) PPC_WEAK_FUNC(sub_83C80EB4);
PPC_FUNC_IMPL(__imp__sub_83C80EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80EB8"))) PPC_WEAK_FUNC(sub_83C80EB8);
PPC_FUNC_IMPL(__imp__sub_83C80EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9248
	ctx.r3.s64 = ctx.r11.s64 + -9248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80EC4"))) PPC_WEAK_FUNC(sub_83C80EC4);
PPC_FUNC_IMPL(__imp__sub_83C80EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80EC8"))) PPC_WEAK_FUNC(sub_83C80EC8);
PPC_FUNC_IMPL(__imp__sub_83C80EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9240
	ctx.r3.s64 = ctx.r11.s64 + -9240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80ED4"))) PPC_WEAK_FUNC(sub_83C80ED4);
PPC_FUNC_IMPL(__imp__sub_83C80ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80ED8"))) PPC_WEAK_FUNC(sub_83C80ED8);
PPC_FUNC_IMPL(__imp__sub_83C80ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9232
	ctx.r3.s64 = ctx.r11.s64 + -9232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80EE4"))) PPC_WEAK_FUNC(sub_83C80EE4);
PPC_FUNC_IMPL(__imp__sub_83C80EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80EE8"))) PPC_WEAK_FUNC(sub_83C80EE8);
PPC_FUNC_IMPL(__imp__sub_83C80EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9224
	ctx.r3.s64 = ctx.r11.s64 + -9224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80EF4"))) PPC_WEAK_FUNC(sub_83C80EF4);
PPC_FUNC_IMPL(__imp__sub_83C80EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80EF8"))) PPC_WEAK_FUNC(sub_83C80EF8);
PPC_FUNC_IMPL(__imp__sub_83C80EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9216
	ctx.r3.s64 = ctx.r11.s64 + -9216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80F04"))) PPC_WEAK_FUNC(sub_83C80F04);
PPC_FUNC_IMPL(__imp__sub_83C80F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80F08"))) PPC_WEAK_FUNC(sub_83C80F08);
PPC_FUNC_IMPL(__imp__sub_83C80F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9208
	ctx.r3.s64 = ctx.r11.s64 + -9208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80F14"))) PPC_WEAK_FUNC(sub_83C80F14);
PPC_FUNC_IMPL(__imp__sub_83C80F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80F18"))) PPC_WEAK_FUNC(sub_83C80F18);
PPC_FUNC_IMPL(__imp__sub_83C80F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9200
	ctx.r3.s64 = ctx.r11.s64 + -9200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80F24"))) PPC_WEAK_FUNC(sub_83C80F24);
PPC_FUNC_IMPL(__imp__sub_83C80F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80F28"))) PPC_WEAK_FUNC(sub_83C80F28);
PPC_FUNC_IMPL(__imp__sub_83C80F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9192
	ctx.r3.s64 = ctx.r11.s64 + -9192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80F34"))) PPC_WEAK_FUNC(sub_83C80F34);
PPC_FUNC_IMPL(__imp__sub_83C80F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80F38"))) PPC_WEAK_FUNC(sub_83C80F38);
PPC_FUNC_IMPL(__imp__sub_83C80F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9184
	ctx.r3.s64 = ctx.r11.s64 + -9184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80F44"))) PPC_WEAK_FUNC(sub_83C80F44);
PPC_FUNC_IMPL(__imp__sub_83C80F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80F48"))) PPC_WEAK_FUNC(sub_83C80F48);
PPC_FUNC_IMPL(__imp__sub_83C80F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9176
	ctx.r3.s64 = ctx.r11.s64 + -9176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80F54"))) PPC_WEAK_FUNC(sub_83C80F54);
PPC_FUNC_IMPL(__imp__sub_83C80F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80F58"))) PPC_WEAK_FUNC(sub_83C80F58);
PPC_FUNC_IMPL(__imp__sub_83C80F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9168
	ctx.r3.s64 = ctx.r11.s64 + -9168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80F64"))) PPC_WEAK_FUNC(sub_83C80F64);
PPC_FUNC_IMPL(__imp__sub_83C80F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80F68"))) PPC_WEAK_FUNC(sub_83C80F68);
PPC_FUNC_IMPL(__imp__sub_83C80F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9160
	ctx.r3.s64 = ctx.r11.s64 + -9160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80F74"))) PPC_WEAK_FUNC(sub_83C80F74);
PPC_FUNC_IMPL(__imp__sub_83C80F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80F78"))) PPC_WEAK_FUNC(sub_83C80F78);
PPC_FUNC_IMPL(__imp__sub_83C80F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9152
	ctx.r3.s64 = ctx.r11.s64 + -9152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80F84"))) PPC_WEAK_FUNC(sub_83C80F84);
PPC_FUNC_IMPL(__imp__sub_83C80F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80F88"))) PPC_WEAK_FUNC(sub_83C80F88);
PPC_FUNC_IMPL(__imp__sub_83C80F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9144
	ctx.r3.s64 = ctx.r11.s64 + -9144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80F94"))) PPC_WEAK_FUNC(sub_83C80F94);
PPC_FUNC_IMPL(__imp__sub_83C80F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80F98"))) PPC_WEAK_FUNC(sub_83C80F98);
PPC_FUNC_IMPL(__imp__sub_83C80F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9136
	ctx.r3.s64 = ctx.r11.s64 + -9136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80FA4"))) PPC_WEAK_FUNC(sub_83C80FA4);
PPC_FUNC_IMPL(__imp__sub_83C80FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80FA8"))) PPC_WEAK_FUNC(sub_83C80FA8);
PPC_FUNC_IMPL(__imp__sub_83C80FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9128
	ctx.r3.s64 = ctx.r11.s64 + -9128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80FB4"))) PPC_WEAK_FUNC(sub_83C80FB4);
PPC_FUNC_IMPL(__imp__sub_83C80FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80FB8"))) PPC_WEAK_FUNC(sub_83C80FB8);
PPC_FUNC_IMPL(__imp__sub_83C80FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9120
	ctx.r3.s64 = ctx.r11.s64 + -9120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80FC4"))) PPC_WEAK_FUNC(sub_83C80FC4);
PPC_FUNC_IMPL(__imp__sub_83C80FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80FC8"))) PPC_WEAK_FUNC(sub_83C80FC8);
PPC_FUNC_IMPL(__imp__sub_83C80FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9112
	ctx.r3.s64 = ctx.r11.s64 + -9112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80FD4"))) PPC_WEAK_FUNC(sub_83C80FD4);
PPC_FUNC_IMPL(__imp__sub_83C80FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80FD8"))) PPC_WEAK_FUNC(sub_83C80FD8);
PPC_FUNC_IMPL(__imp__sub_83C80FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9104
	ctx.r3.s64 = ctx.r11.s64 + -9104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80FE4"))) PPC_WEAK_FUNC(sub_83C80FE4);
PPC_FUNC_IMPL(__imp__sub_83C80FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80FE8"))) PPC_WEAK_FUNC(sub_83C80FE8);
PPC_FUNC_IMPL(__imp__sub_83C80FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9096
	ctx.r3.s64 = ctx.r11.s64 + -9096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80FF4"))) PPC_WEAK_FUNC(sub_83C80FF4);
PPC_FUNC_IMPL(__imp__sub_83C80FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80FF8"))) PPC_WEAK_FUNC(sub_83C80FF8);
PPC_FUNC_IMPL(__imp__sub_83C80FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9088
	ctx.r3.s64 = ctx.r11.s64 + -9088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81004"))) PPC_WEAK_FUNC(sub_83C81004);
PPC_FUNC_IMPL(__imp__sub_83C81004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81008"))) PPC_WEAK_FUNC(sub_83C81008);
PPC_FUNC_IMPL(__imp__sub_83C81008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9080
	ctx.r3.s64 = ctx.r11.s64 + -9080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81014"))) PPC_WEAK_FUNC(sub_83C81014);
PPC_FUNC_IMPL(__imp__sub_83C81014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81018"))) PPC_WEAK_FUNC(sub_83C81018);
PPC_FUNC_IMPL(__imp__sub_83C81018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9072
	ctx.r3.s64 = ctx.r11.s64 + -9072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81024"))) PPC_WEAK_FUNC(sub_83C81024);
PPC_FUNC_IMPL(__imp__sub_83C81024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81028"))) PPC_WEAK_FUNC(sub_83C81028);
PPC_FUNC_IMPL(__imp__sub_83C81028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9064
	ctx.r3.s64 = ctx.r11.s64 + -9064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81034"))) PPC_WEAK_FUNC(sub_83C81034);
PPC_FUNC_IMPL(__imp__sub_83C81034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81038"))) PPC_WEAK_FUNC(sub_83C81038);
PPC_FUNC_IMPL(__imp__sub_83C81038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9056
	ctx.r3.s64 = ctx.r11.s64 + -9056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81044"))) PPC_WEAK_FUNC(sub_83C81044);
PPC_FUNC_IMPL(__imp__sub_83C81044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81048"))) PPC_WEAK_FUNC(sub_83C81048);
PPC_FUNC_IMPL(__imp__sub_83C81048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9048
	ctx.r3.s64 = ctx.r11.s64 + -9048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81054"))) PPC_WEAK_FUNC(sub_83C81054);
PPC_FUNC_IMPL(__imp__sub_83C81054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81058"))) PPC_WEAK_FUNC(sub_83C81058);
PPC_FUNC_IMPL(__imp__sub_83C81058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9040
	ctx.r3.s64 = ctx.r11.s64 + -9040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81064"))) PPC_WEAK_FUNC(sub_83C81064);
PPC_FUNC_IMPL(__imp__sub_83C81064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81068"))) PPC_WEAK_FUNC(sub_83C81068);
PPC_FUNC_IMPL(__imp__sub_83C81068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9032
	ctx.r3.s64 = ctx.r11.s64 + -9032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81074"))) PPC_WEAK_FUNC(sub_83C81074);
PPC_FUNC_IMPL(__imp__sub_83C81074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81078"))) PPC_WEAK_FUNC(sub_83C81078);
PPC_FUNC_IMPL(__imp__sub_83C81078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9024
	ctx.r3.s64 = ctx.r11.s64 + -9024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81084"))) PPC_WEAK_FUNC(sub_83C81084);
PPC_FUNC_IMPL(__imp__sub_83C81084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81088"))) PPC_WEAK_FUNC(sub_83C81088);
PPC_FUNC_IMPL(__imp__sub_83C81088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9016
	ctx.r3.s64 = ctx.r11.s64 + -9016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81094"))) PPC_WEAK_FUNC(sub_83C81094);
PPC_FUNC_IMPL(__imp__sub_83C81094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81098"))) PPC_WEAK_FUNC(sub_83C81098);
PPC_FUNC_IMPL(__imp__sub_83C81098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9008
	ctx.r3.s64 = ctx.r11.s64 + -9008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C810A4"))) PPC_WEAK_FUNC(sub_83C810A4);
PPC_FUNC_IMPL(__imp__sub_83C810A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C810A8"))) PPC_WEAK_FUNC(sub_83C810A8);
PPC_FUNC_IMPL(__imp__sub_83C810A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9000
	ctx.r3.s64 = ctx.r11.s64 + -9000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C810B4"))) PPC_WEAK_FUNC(sub_83C810B4);
PPC_FUNC_IMPL(__imp__sub_83C810B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C810B8"))) PPC_WEAK_FUNC(sub_83C810B8);
PPC_FUNC_IMPL(__imp__sub_83C810B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8992
	ctx.r3.s64 = ctx.r11.s64 + -8992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C810C4"))) PPC_WEAK_FUNC(sub_83C810C4);
PPC_FUNC_IMPL(__imp__sub_83C810C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C810C8"))) PPC_WEAK_FUNC(sub_83C810C8);
PPC_FUNC_IMPL(__imp__sub_83C810C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8984
	ctx.r3.s64 = ctx.r11.s64 + -8984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C810D4"))) PPC_WEAK_FUNC(sub_83C810D4);
PPC_FUNC_IMPL(__imp__sub_83C810D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C810D8"))) PPC_WEAK_FUNC(sub_83C810D8);
PPC_FUNC_IMPL(__imp__sub_83C810D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8976
	ctx.r3.s64 = ctx.r11.s64 + -8976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C810E4"))) PPC_WEAK_FUNC(sub_83C810E4);
PPC_FUNC_IMPL(__imp__sub_83C810E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C810E8"))) PPC_WEAK_FUNC(sub_83C810E8);
PPC_FUNC_IMPL(__imp__sub_83C810E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8968
	ctx.r3.s64 = ctx.r11.s64 + -8968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C810F4"))) PPC_WEAK_FUNC(sub_83C810F4);
PPC_FUNC_IMPL(__imp__sub_83C810F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C810F8"))) PPC_WEAK_FUNC(sub_83C810F8);
PPC_FUNC_IMPL(__imp__sub_83C810F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8960
	ctx.r3.s64 = ctx.r11.s64 + -8960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81104"))) PPC_WEAK_FUNC(sub_83C81104);
PPC_FUNC_IMPL(__imp__sub_83C81104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81108"))) PPC_WEAK_FUNC(sub_83C81108);
PPC_FUNC_IMPL(__imp__sub_83C81108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8952
	ctx.r3.s64 = ctx.r11.s64 + -8952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81114"))) PPC_WEAK_FUNC(sub_83C81114);
PPC_FUNC_IMPL(__imp__sub_83C81114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81118"))) PPC_WEAK_FUNC(sub_83C81118);
PPC_FUNC_IMPL(__imp__sub_83C81118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8944
	ctx.r3.s64 = ctx.r11.s64 + -8944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81124"))) PPC_WEAK_FUNC(sub_83C81124);
PPC_FUNC_IMPL(__imp__sub_83C81124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81128"))) PPC_WEAK_FUNC(sub_83C81128);
PPC_FUNC_IMPL(__imp__sub_83C81128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8936
	ctx.r3.s64 = ctx.r11.s64 + -8936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81134"))) PPC_WEAK_FUNC(sub_83C81134);
PPC_FUNC_IMPL(__imp__sub_83C81134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81138"))) PPC_WEAK_FUNC(sub_83C81138);
PPC_FUNC_IMPL(__imp__sub_83C81138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8928
	ctx.r3.s64 = ctx.r11.s64 + -8928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81144"))) PPC_WEAK_FUNC(sub_83C81144);
PPC_FUNC_IMPL(__imp__sub_83C81144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81148"))) PPC_WEAK_FUNC(sub_83C81148);
PPC_FUNC_IMPL(__imp__sub_83C81148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8920
	ctx.r3.s64 = ctx.r11.s64 + -8920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81154"))) PPC_WEAK_FUNC(sub_83C81154);
PPC_FUNC_IMPL(__imp__sub_83C81154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81158"))) PPC_WEAK_FUNC(sub_83C81158);
PPC_FUNC_IMPL(__imp__sub_83C81158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8912
	ctx.r3.s64 = ctx.r11.s64 + -8912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81164"))) PPC_WEAK_FUNC(sub_83C81164);
PPC_FUNC_IMPL(__imp__sub_83C81164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81168"))) PPC_WEAK_FUNC(sub_83C81168);
PPC_FUNC_IMPL(__imp__sub_83C81168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8904
	ctx.r3.s64 = ctx.r11.s64 + -8904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81174"))) PPC_WEAK_FUNC(sub_83C81174);
PPC_FUNC_IMPL(__imp__sub_83C81174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81178"))) PPC_WEAK_FUNC(sub_83C81178);
PPC_FUNC_IMPL(__imp__sub_83C81178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8896
	ctx.r3.s64 = ctx.r11.s64 + -8896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81184"))) PPC_WEAK_FUNC(sub_83C81184);
PPC_FUNC_IMPL(__imp__sub_83C81184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81188"))) PPC_WEAK_FUNC(sub_83C81188);
PPC_FUNC_IMPL(__imp__sub_83C81188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8888
	ctx.r3.s64 = ctx.r11.s64 + -8888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81194"))) PPC_WEAK_FUNC(sub_83C81194);
PPC_FUNC_IMPL(__imp__sub_83C81194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81198"))) PPC_WEAK_FUNC(sub_83C81198);
PPC_FUNC_IMPL(__imp__sub_83C81198) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,22380
	ctx.r3.s64 = ctx.r11.s64 + 22380;
	// bl 0x83523120
	ctx.lr = 0x83C811B0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-8880
	ctx.r3.s64 = ctx.r10.s64 + -8880;
	// bl 0x831cdcc8
	ctx.lr = 0x83C811BC;
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

__attribute__((alias("__imp__sub_83C811CC"))) PPC_WEAK_FUNC(sub_83C811CC);
PPC_FUNC_IMPL(__imp__sub_83C811CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C811D0"))) PPC_WEAK_FUNC(sub_83C811D0);
PPC_FUNC_IMPL(__imp__sub_83C811D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8864
	ctx.r3.s64 = ctx.r11.s64 + -8864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C811DC"))) PPC_WEAK_FUNC(sub_83C811DC);
PPC_FUNC_IMPL(__imp__sub_83C811DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C811E0"))) PPC_WEAK_FUNC(sub_83C811E0);
PPC_FUNC_IMPL(__imp__sub_83C811E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8856
	ctx.r3.s64 = ctx.r11.s64 + -8856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C811EC"))) PPC_WEAK_FUNC(sub_83C811EC);
PPC_FUNC_IMPL(__imp__sub_83C811EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C811F0"))) PPC_WEAK_FUNC(sub_83C811F0);
PPC_FUNC_IMPL(__imp__sub_83C811F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8848
	ctx.r3.s64 = ctx.r11.s64 + -8848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C811FC"))) PPC_WEAK_FUNC(sub_83C811FC);
PPC_FUNC_IMPL(__imp__sub_83C811FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81200"))) PPC_WEAK_FUNC(sub_83C81200);
PPC_FUNC_IMPL(__imp__sub_83C81200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8840
	ctx.r3.s64 = ctx.r11.s64 + -8840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8120C"))) PPC_WEAK_FUNC(sub_83C8120C);
PPC_FUNC_IMPL(__imp__sub_83C8120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81210"))) PPC_WEAK_FUNC(sub_83C81210);
PPC_FUNC_IMPL(__imp__sub_83C81210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8832
	ctx.r3.s64 = ctx.r11.s64 + -8832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8121C"))) PPC_WEAK_FUNC(sub_83C8121C);
PPC_FUNC_IMPL(__imp__sub_83C8121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81220"))) PPC_WEAK_FUNC(sub_83C81220);
PPC_FUNC_IMPL(__imp__sub_83C81220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8824
	ctx.r3.s64 = ctx.r11.s64 + -8824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8122C"))) PPC_WEAK_FUNC(sub_83C8122C);
PPC_FUNC_IMPL(__imp__sub_83C8122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81230"))) PPC_WEAK_FUNC(sub_83C81230);
PPC_FUNC_IMPL(__imp__sub_83C81230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8816
	ctx.r3.s64 = ctx.r11.s64 + -8816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8123C"))) PPC_WEAK_FUNC(sub_83C8123C);
PPC_FUNC_IMPL(__imp__sub_83C8123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81240"))) PPC_WEAK_FUNC(sub_83C81240);
PPC_FUNC_IMPL(__imp__sub_83C81240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8808
	ctx.r3.s64 = ctx.r11.s64 + -8808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8124C"))) PPC_WEAK_FUNC(sub_83C8124C);
PPC_FUNC_IMPL(__imp__sub_83C8124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81250"))) PPC_WEAK_FUNC(sub_83C81250);
PPC_FUNC_IMPL(__imp__sub_83C81250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8800
	ctx.r3.s64 = ctx.r11.s64 + -8800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8125C"))) PPC_WEAK_FUNC(sub_83C8125C);
PPC_FUNC_IMPL(__imp__sub_83C8125C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81260"))) PPC_WEAK_FUNC(sub_83C81260);
PPC_FUNC_IMPL(__imp__sub_83C81260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8792
	ctx.r3.s64 = ctx.r11.s64 + -8792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8126C"))) PPC_WEAK_FUNC(sub_83C8126C);
PPC_FUNC_IMPL(__imp__sub_83C8126C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81270"))) PPC_WEAK_FUNC(sub_83C81270);
PPC_FUNC_IMPL(__imp__sub_83C81270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8784
	ctx.r3.s64 = ctx.r11.s64 + -8784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8127C"))) PPC_WEAK_FUNC(sub_83C8127C);
PPC_FUNC_IMPL(__imp__sub_83C8127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81280"))) PPC_WEAK_FUNC(sub_83C81280);
PPC_FUNC_IMPL(__imp__sub_83C81280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8776
	ctx.r3.s64 = ctx.r11.s64 + -8776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8128C"))) PPC_WEAK_FUNC(sub_83C8128C);
PPC_FUNC_IMPL(__imp__sub_83C8128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81290"))) PPC_WEAK_FUNC(sub_83C81290);
PPC_FUNC_IMPL(__imp__sub_83C81290) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,22392
	ctx.r3.s64 = ctx.r11.s64 + 22392;
	// bl 0x83523120
	ctx.lr = 0x83C812A8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-8768
	ctx.r3.s64 = ctx.r10.s64 + -8768;
	// bl 0x831cdcc8
	ctx.lr = 0x83C812B4;
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

__attribute__((alias("__imp__sub_83C812C4"))) PPC_WEAK_FUNC(sub_83C812C4);
PPC_FUNC_IMPL(__imp__sub_83C812C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C812C8"))) PPC_WEAK_FUNC(sub_83C812C8);
PPC_FUNC_IMPL(__imp__sub_83C812C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8752
	ctx.r3.s64 = ctx.r11.s64 + -8752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C812D4"))) PPC_WEAK_FUNC(sub_83C812D4);
PPC_FUNC_IMPL(__imp__sub_83C812D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C812D8"))) PPC_WEAK_FUNC(sub_83C812D8);
PPC_FUNC_IMPL(__imp__sub_83C812D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8744
	ctx.r3.s64 = ctx.r11.s64 + -8744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C812E4"))) PPC_WEAK_FUNC(sub_83C812E4);
PPC_FUNC_IMPL(__imp__sub_83C812E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C812E8"))) PPC_WEAK_FUNC(sub_83C812E8);
PPC_FUNC_IMPL(__imp__sub_83C812E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8736
	ctx.r3.s64 = ctx.r11.s64 + -8736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C812F4"))) PPC_WEAK_FUNC(sub_83C812F4);
PPC_FUNC_IMPL(__imp__sub_83C812F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C812F8"))) PPC_WEAK_FUNC(sub_83C812F8);
PPC_FUNC_IMPL(__imp__sub_83C812F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8728
	ctx.r3.s64 = ctx.r11.s64 + -8728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81304"))) PPC_WEAK_FUNC(sub_83C81304);
PPC_FUNC_IMPL(__imp__sub_83C81304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81308"))) PPC_WEAK_FUNC(sub_83C81308);
PPC_FUNC_IMPL(__imp__sub_83C81308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8720
	ctx.r3.s64 = ctx.r11.s64 + -8720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81314"))) PPC_WEAK_FUNC(sub_83C81314);
PPC_FUNC_IMPL(__imp__sub_83C81314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81318"))) PPC_WEAK_FUNC(sub_83C81318);
PPC_FUNC_IMPL(__imp__sub_83C81318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8712
	ctx.r3.s64 = ctx.r11.s64 + -8712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81324"))) PPC_WEAK_FUNC(sub_83C81324);
PPC_FUNC_IMPL(__imp__sub_83C81324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81328"))) PPC_WEAK_FUNC(sub_83C81328);
PPC_FUNC_IMPL(__imp__sub_83C81328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8704
	ctx.r3.s64 = ctx.r11.s64 + -8704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81334"))) PPC_WEAK_FUNC(sub_83C81334);
PPC_FUNC_IMPL(__imp__sub_83C81334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81338"))) PPC_WEAK_FUNC(sub_83C81338);
PPC_FUNC_IMPL(__imp__sub_83C81338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8696
	ctx.r3.s64 = ctx.r11.s64 + -8696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81344"))) PPC_WEAK_FUNC(sub_83C81344);
PPC_FUNC_IMPL(__imp__sub_83C81344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81348"))) PPC_WEAK_FUNC(sub_83C81348);
PPC_FUNC_IMPL(__imp__sub_83C81348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8688
	ctx.r3.s64 = ctx.r11.s64 + -8688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81354"))) PPC_WEAK_FUNC(sub_83C81354);
PPC_FUNC_IMPL(__imp__sub_83C81354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81358"))) PPC_WEAK_FUNC(sub_83C81358);
PPC_FUNC_IMPL(__imp__sub_83C81358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8680
	ctx.r3.s64 = ctx.r11.s64 + -8680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81364"))) PPC_WEAK_FUNC(sub_83C81364);
PPC_FUNC_IMPL(__imp__sub_83C81364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81368"))) PPC_WEAK_FUNC(sub_83C81368);
PPC_FUNC_IMPL(__imp__sub_83C81368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8672
	ctx.r3.s64 = ctx.r11.s64 + -8672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81374"))) PPC_WEAK_FUNC(sub_83C81374);
PPC_FUNC_IMPL(__imp__sub_83C81374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81378"))) PPC_WEAK_FUNC(sub_83C81378);
PPC_FUNC_IMPL(__imp__sub_83C81378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8664
	ctx.r3.s64 = ctx.r11.s64 + -8664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81384"))) PPC_WEAK_FUNC(sub_83C81384);
PPC_FUNC_IMPL(__imp__sub_83C81384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81388"))) PPC_WEAK_FUNC(sub_83C81388);
PPC_FUNC_IMPL(__imp__sub_83C81388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8656
	ctx.r3.s64 = ctx.r11.s64 + -8656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81394"))) PPC_WEAK_FUNC(sub_83C81394);
PPC_FUNC_IMPL(__imp__sub_83C81394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81398"))) PPC_WEAK_FUNC(sub_83C81398);
PPC_FUNC_IMPL(__imp__sub_83C81398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8648
	ctx.r3.s64 = ctx.r11.s64 + -8648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C813A4"))) PPC_WEAK_FUNC(sub_83C813A4);
PPC_FUNC_IMPL(__imp__sub_83C813A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C813A8"))) PPC_WEAK_FUNC(sub_83C813A8);
PPC_FUNC_IMPL(__imp__sub_83C813A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8640
	ctx.r3.s64 = ctx.r11.s64 + -8640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C813B4"))) PPC_WEAK_FUNC(sub_83C813B4);
PPC_FUNC_IMPL(__imp__sub_83C813B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C813B8"))) PPC_WEAK_FUNC(sub_83C813B8);
PPC_FUNC_IMPL(__imp__sub_83C813B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8632
	ctx.r3.s64 = ctx.r11.s64 + -8632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C813C4"))) PPC_WEAK_FUNC(sub_83C813C4);
PPC_FUNC_IMPL(__imp__sub_83C813C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C813C8"))) PPC_WEAK_FUNC(sub_83C813C8);
PPC_FUNC_IMPL(__imp__sub_83C813C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8624
	ctx.r3.s64 = ctx.r11.s64 + -8624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C813D4"))) PPC_WEAK_FUNC(sub_83C813D4);
PPC_FUNC_IMPL(__imp__sub_83C813D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C813D8"))) PPC_WEAK_FUNC(sub_83C813D8);
PPC_FUNC_IMPL(__imp__sub_83C813D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8616
	ctx.r3.s64 = ctx.r11.s64 + -8616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C813E4"))) PPC_WEAK_FUNC(sub_83C813E4);
PPC_FUNC_IMPL(__imp__sub_83C813E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C813E8"))) PPC_WEAK_FUNC(sub_83C813E8);
PPC_FUNC_IMPL(__imp__sub_83C813E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8608
	ctx.r3.s64 = ctx.r11.s64 + -8608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C813F4"))) PPC_WEAK_FUNC(sub_83C813F4);
PPC_FUNC_IMPL(__imp__sub_83C813F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C813F8"))) PPC_WEAK_FUNC(sub_83C813F8);
PPC_FUNC_IMPL(__imp__sub_83C813F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8600
	ctx.r3.s64 = ctx.r11.s64 + -8600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81404"))) PPC_WEAK_FUNC(sub_83C81404);
PPC_FUNC_IMPL(__imp__sub_83C81404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81408"))) PPC_WEAK_FUNC(sub_83C81408);
PPC_FUNC_IMPL(__imp__sub_83C81408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8592
	ctx.r3.s64 = ctx.r11.s64 + -8592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81414"))) PPC_WEAK_FUNC(sub_83C81414);
PPC_FUNC_IMPL(__imp__sub_83C81414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81418"))) PPC_WEAK_FUNC(sub_83C81418);
PPC_FUNC_IMPL(__imp__sub_83C81418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8584
	ctx.r3.s64 = ctx.r11.s64 + -8584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81424"))) PPC_WEAK_FUNC(sub_83C81424);
PPC_FUNC_IMPL(__imp__sub_83C81424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81428"))) PPC_WEAK_FUNC(sub_83C81428);
PPC_FUNC_IMPL(__imp__sub_83C81428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8576
	ctx.r3.s64 = ctx.r11.s64 + -8576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81434"))) PPC_WEAK_FUNC(sub_83C81434);
PPC_FUNC_IMPL(__imp__sub_83C81434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81438"))) PPC_WEAK_FUNC(sub_83C81438);
PPC_FUNC_IMPL(__imp__sub_83C81438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8568
	ctx.r3.s64 = ctx.r11.s64 + -8568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81444"))) PPC_WEAK_FUNC(sub_83C81444);
PPC_FUNC_IMPL(__imp__sub_83C81444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81448"))) PPC_WEAK_FUNC(sub_83C81448);
PPC_FUNC_IMPL(__imp__sub_83C81448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8560
	ctx.r3.s64 = ctx.r11.s64 + -8560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81454"))) PPC_WEAK_FUNC(sub_83C81454);
PPC_FUNC_IMPL(__imp__sub_83C81454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81458"))) PPC_WEAK_FUNC(sub_83C81458);
PPC_FUNC_IMPL(__imp__sub_83C81458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8552
	ctx.r3.s64 = ctx.r11.s64 + -8552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81464"))) PPC_WEAK_FUNC(sub_83C81464);
PPC_FUNC_IMPL(__imp__sub_83C81464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81468"))) PPC_WEAK_FUNC(sub_83C81468);
PPC_FUNC_IMPL(__imp__sub_83C81468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8544
	ctx.r3.s64 = ctx.r11.s64 + -8544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81474"))) PPC_WEAK_FUNC(sub_83C81474);
PPC_FUNC_IMPL(__imp__sub_83C81474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81478"))) PPC_WEAK_FUNC(sub_83C81478);
PPC_FUNC_IMPL(__imp__sub_83C81478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8536
	ctx.r3.s64 = ctx.r11.s64 + -8536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81484"))) PPC_WEAK_FUNC(sub_83C81484);
PPC_FUNC_IMPL(__imp__sub_83C81484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81488"))) PPC_WEAK_FUNC(sub_83C81488);
PPC_FUNC_IMPL(__imp__sub_83C81488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8528
	ctx.r3.s64 = ctx.r11.s64 + -8528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81494"))) PPC_WEAK_FUNC(sub_83C81494);
PPC_FUNC_IMPL(__imp__sub_83C81494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81498"))) PPC_WEAK_FUNC(sub_83C81498);
PPC_FUNC_IMPL(__imp__sub_83C81498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8520
	ctx.r3.s64 = ctx.r11.s64 + -8520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C814A4"))) PPC_WEAK_FUNC(sub_83C814A4);
PPC_FUNC_IMPL(__imp__sub_83C814A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C814A8"))) PPC_WEAK_FUNC(sub_83C814A8);
PPC_FUNC_IMPL(__imp__sub_83C814A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8512
	ctx.r3.s64 = ctx.r11.s64 + -8512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C814B4"))) PPC_WEAK_FUNC(sub_83C814B4);
PPC_FUNC_IMPL(__imp__sub_83C814B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C814B8"))) PPC_WEAK_FUNC(sub_83C814B8);
PPC_FUNC_IMPL(__imp__sub_83C814B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8504
	ctx.r3.s64 = ctx.r11.s64 + -8504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C814C4"))) PPC_WEAK_FUNC(sub_83C814C4);
PPC_FUNC_IMPL(__imp__sub_83C814C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C814C8"))) PPC_WEAK_FUNC(sub_83C814C8);
PPC_FUNC_IMPL(__imp__sub_83C814C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8496
	ctx.r3.s64 = ctx.r11.s64 + -8496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C814D4"))) PPC_WEAK_FUNC(sub_83C814D4);
PPC_FUNC_IMPL(__imp__sub_83C814D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C814D8"))) PPC_WEAK_FUNC(sub_83C814D8);
PPC_FUNC_IMPL(__imp__sub_83C814D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8488
	ctx.r3.s64 = ctx.r11.s64 + -8488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C814E4"))) PPC_WEAK_FUNC(sub_83C814E4);
PPC_FUNC_IMPL(__imp__sub_83C814E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C814E8"))) PPC_WEAK_FUNC(sub_83C814E8);
PPC_FUNC_IMPL(__imp__sub_83C814E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8480
	ctx.r3.s64 = ctx.r11.s64 + -8480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C814F4"))) PPC_WEAK_FUNC(sub_83C814F4);
PPC_FUNC_IMPL(__imp__sub_83C814F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C814F8"))) PPC_WEAK_FUNC(sub_83C814F8);
PPC_FUNC_IMPL(__imp__sub_83C814F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-8472
	ctx.r3.s64 = ctx.r11.s64 + -8472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81504"))) PPC_WEAK_FUNC(sub_83C81504);
PPC_FUNC_IMPL(__imp__sub_83C81504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

