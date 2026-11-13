#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CECD60"))) PPC_WEAK_FUNC(sub_83CECD60);
PPC_FUNC_IMPL(__imp__sub_83CECD60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6716
	ctx.r11.s64 = ctx.r8.s64 + 6716;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-27960(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27960);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15048
	ctx.r3.s64 = ctx.r6.s64 + 15048;
	// stw r10,6716(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECD90"))) PPC_WEAK_FUNC(sub_83CECD90);
PPC_FUNC_IMPL(__imp__sub_83CECD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15064
	ctx.r3.s64 = ctx.r11.s64 + 15064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECD9C"))) PPC_WEAK_FUNC(sub_83CECD9C);
PPC_FUNC_IMPL(__imp__sub_83CECD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECDA0"))) PPC_WEAK_FUNC(sub_83CECDA0);
PPC_FUNC_IMPL(__imp__sub_83CECDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15072
	ctx.r3.s64 = ctx.r11.s64 + 15072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECDAC"))) PPC_WEAK_FUNC(sub_83CECDAC);
PPC_FUNC_IMPL(__imp__sub_83CECDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECDB0"))) PPC_WEAK_FUNC(sub_83CECDB0);
PPC_FUNC_IMPL(__imp__sub_83CECDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15080
	ctx.r3.s64 = ctx.r11.s64 + 15080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECDBC"))) PPC_WEAK_FUNC(sub_83CECDBC);
PPC_FUNC_IMPL(__imp__sub_83CECDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECDC0"))) PPC_WEAK_FUNC(sub_83CECDC0);
PPC_FUNC_IMPL(__imp__sub_83CECDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15088
	ctx.r3.s64 = ctx.r11.s64 + 15088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECDCC"))) PPC_WEAK_FUNC(sub_83CECDCC);
PPC_FUNC_IMPL(__imp__sub_83CECDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECDD0"))) PPC_WEAK_FUNC(sub_83CECDD0);
PPC_FUNC_IMPL(__imp__sub_83CECDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECDDC"))) PPC_WEAK_FUNC(sub_83CECDDC);
PPC_FUNC_IMPL(__imp__sub_83CECDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECDE0"))) PPC_WEAK_FUNC(sub_83CECDE0);
PPC_FUNC_IMPL(__imp__sub_83CECDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15104
	ctx.r3.s64 = ctx.r11.s64 + 15104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECDEC"))) PPC_WEAK_FUNC(sub_83CECDEC);
PPC_FUNC_IMPL(__imp__sub_83CECDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECDF0"))) PPC_WEAK_FUNC(sub_83CECDF0);
PPC_FUNC_IMPL(__imp__sub_83CECDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15112
	ctx.r3.s64 = ctx.r11.s64 + 15112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECDFC"))) PPC_WEAK_FUNC(sub_83CECDFC);
PPC_FUNC_IMPL(__imp__sub_83CECDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECE00"))) PPC_WEAK_FUNC(sub_83CECE00);
PPC_FUNC_IMPL(__imp__sub_83CECE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15120
	ctx.r3.s64 = ctx.r11.s64 + 15120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECE0C"))) PPC_WEAK_FUNC(sub_83CECE0C);
PPC_FUNC_IMPL(__imp__sub_83CECE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECE10"))) PPC_WEAK_FUNC(sub_83CECE10);
PPC_FUNC_IMPL(__imp__sub_83CECE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15128
	ctx.r3.s64 = ctx.r11.s64 + 15128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECE1C"))) PPC_WEAK_FUNC(sub_83CECE1C);
PPC_FUNC_IMPL(__imp__sub_83CECE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECE20"))) PPC_WEAK_FUNC(sub_83CECE20);
PPC_FUNC_IMPL(__imp__sub_83CECE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15136
	ctx.r3.s64 = ctx.r11.s64 + 15136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECE2C"))) PPC_WEAK_FUNC(sub_83CECE2C);
PPC_FUNC_IMPL(__imp__sub_83CECE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECE30"))) PPC_WEAK_FUNC(sub_83CECE30);
PPC_FUNC_IMPL(__imp__sub_83CECE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15144
	ctx.r3.s64 = ctx.r11.s64 + 15144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECE3C"))) PPC_WEAK_FUNC(sub_83CECE3C);
PPC_FUNC_IMPL(__imp__sub_83CECE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECE40"))) PPC_WEAK_FUNC(sub_83CECE40);
PPC_FUNC_IMPL(__imp__sub_83CECE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15152
	ctx.r3.s64 = ctx.r11.s64 + 15152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECE4C"))) PPC_WEAK_FUNC(sub_83CECE4C);
PPC_FUNC_IMPL(__imp__sub_83CECE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECE50"))) PPC_WEAK_FUNC(sub_83CECE50);
PPC_FUNC_IMPL(__imp__sub_83CECE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15160
	ctx.r3.s64 = ctx.r11.s64 + 15160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECE5C"))) PPC_WEAK_FUNC(sub_83CECE5C);
PPC_FUNC_IMPL(__imp__sub_83CECE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECE60"))) PPC_WEAK_FUNC(sub_83CECE60);
PPC_FUNC_IMPL(__imp__sub_83CECE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15168
	ctx.r3.s64 = ctx.r11.s64 + 15168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECE6C"))) PPC_WEAK_FUNC(sub_83CECE6C);
PPC_FUNC_IMPL(__imp__sub_83CECE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECE70"))) PPC_WEAK_FUNC(sub_83CECE70);
PPC_FUNC_IMPL(__imp__sub_83CECE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15176
	ctx.r3.s64 = ctx.r11.s64 + 15176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECE7C"))) PPC_WEAK_FUNC(sub_83CECE7C);
PPC_FUNC_IMPL(__imp__sub_83CECE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECE80"))) PPC_WEAK_FUNC(sub_83CECE80);
PPC_FUNC_IMPL(__imp__sub_83CECE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15184
	ctx.r3.s64 = ctx.r11.s64 + 15184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECE8C"))) PPC_WEAK_FUNC(sub_83CECE8C);
PPC_FUNC_IMPL(__imp__sub_83CECE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECE90"))) PPC_WEAK_FUNC(sub_83CECE90);
PPC_FUNC_IMPL(__imp__sub_83CECE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15192
	ctx.r3.s64 = ctx.r11.s64 + 15192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECE9C"))) PPC_WEAK_FUNC(sub_83CECE9C);
PPC_FUNC_IMPL(__imp__sub_83CECE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECEA0"))) PPC_WEAK_FUNC(sub_83CECEA0);
PPC_FUNC_IMPL(__imp__sub_83CECEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15200
	ctx.r3.s64 = ctx.r11.s64 + 15200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECEAC"))) PPC_WEAK_FUNC(sub_83CECEAC);
PPC_FUNC_IMPL(__imp__sub_83CECEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECEB0"))) PPC_WEAK_FUNC(sub_83CECEB0);
PPC_FUNC_IMPL(__imp__sub_83CECEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15208
	ctx.r3.s64 = ctx.r11.s64 + 15208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECEBC"))) PPC_WEAK_FUNC(sub_83CECEBC);
PPC_FUNC_IMPL(__imp__sub_83CECEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECEC0"))) PPC_WEAK_FUNC(sub_83CECEC0);
PPC_FUNC_IMPL(__imp__sub_83CECEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15216
	ctx.r3.s64 = ctx.r11.s64 + 15216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECECC"))) PPC_WEAK_FUNC(sub_83CECECC);
PPC_FUNC_IMPL(__imp__sub_83CECECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECED0"))) PPC_WEAK_FUNC(sub_83CECED0);
PPC_FUNC_IMPL(__imp__sub_83CECED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15224
	ctx.r3.s64 = ctx.r11.s64 + 15224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECEDC"))) PPC_WEAK_FUNC(sub_83CECEDC);
PPC_FUNC_IMPL(__imp__sub_83CECEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECEE0"))) PPC_WEAK_FUNC(sub_83CECEE0);
PPC_FUNC_IMPL(__imp__sub_83CECEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15232
	ctx.r3.s64 = ctx.r11.s64 + 15232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECEEC"))) PPC_WEAK_FUNC(sub_83CECEEC);
PPC_FUNC_IMPL(__imp__sub_83CECEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECEF0"))) PPC_WEAK_FUNC(sub_83CECEF0);
PPC_FUNC_IMPL(__imp__sub_83CECEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15240
	ctx.r3.s64 = ctx.r11.s64 + 15240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECEFC"))) PPC_WEAK_FUNC(sub_83CECEFC);
PPC_FUNC_IMPL(__imp__sub_83CECEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECF00"))) PPC_WEAK_FUNC(sub_83CECF00);
PPC_FUNC_IMPL(__imp__sub_83CECF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15248
	ctx.r3.s64 = ctx.r11.s64 + 15248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECF0C"))) PPC_WEAK_FUNC(sub_83CECF0C);
PPC_FUNC_IMPL(__imp__sub_83CECF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECF10"))) PPC_WEAK_FUNC(sub_83CECF10);
PPC_FUNC_IMPL(__imp__sub_83CECF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15256
	ctx.r3.s64 = ctx.r11.s64 + 15256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECF1C"))) PPC_WEAK_FUNC(sub_83CECF1C);
PPC_FUNC_IMPL(__imp__sub_83CECF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECF20"))) PPC_WEAK_FUNC(sub_83CECF20);
PPC_FUNC_IMPL(__imp__sub_83CECF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15264
	ctx.r3.s64 = ctx.r11.s64 + 15264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECF2C"))) PPC_WEAK_FUNC(sub_83CECF2C);
PPC_FUNC_IMPL(__imp__sub_83CECF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECF30"))) PPC_WEAK_FUNC(sub_83CECF30);
PPC_FUNC_IMPL(__imp__sub_83CECF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15272
	ctx.r3.s64 = ctx.r11.s64 + 15272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECF3C"))) PPC_WEAK_FUNC(sub_83CECF3C);
PPC_FUNC_IMPL(__imp__sub_83CECF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECF40"))) PPC_WEAK_FUNC(sub_83CECF40);
PPC_FUNC_IMPL(__imp__sub_83CECF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15280
	ctx.r3.s64 = ctx.r11.s64 + 15280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECF4C"))) PPC_WEAK_FUNC(sub_83CECF4C);
PPC_FUNC_IMPL(__imp__sub_83CECF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECF50"))) PPC_WEAK_FUNC(sub_83CECF50);
PPC_FUNC_IMPL(__imp__sub_83CECF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15288
	ctx.r3.s64 = ctx.r11.s64 + 15288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECF5C"))) PPC_WEAK_FUNC(sub_83CECF5C);
PPC_FUNC_IMPL(__imp__sub_83CECF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECF60"))) PPC_WEAK_FUNC(sub_83CECF60);
PPC_FUNC_IMPL(__imp__sub_83CECF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15296
	ctx.r3.s64 = ctx.r11.s64 + 15296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECF6C"))) PPC_WEAK_FUNC(sub_83CECF6C);
PPC_FUNC_IMPL(__imp__sub_83CECF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECF70"))) PPC_WEAK_FUNC(sub_83CECF70);
PPC_FUNC_IMPL(__imp__sub_83CECF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15304
	ctx.r3.s64 = ctx.r11.s64 + 15304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECF7C"))) PPC_WEAK_FUNC(sub_83CECF7C);
PPC_FUNC_IMPL(__imp__sub_83CECF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECF80"))) PPC_WEAK_FUNC(sub_83CECF80);
PPC_FUNC_IMPL(__imp__sub_83CECF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15312
	ctx.r3.s64 = ctx.r11.s64 + 15312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECF8C"))) PPC_WEAK_FUNC(sub_83CECF8C);
PPC_FUNC_IMPL(__imp__sub_83CECF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECF90"))) PPC_WEAK_FUNC(sub_83CECF90);
PPC_FUNC_IMPL(__imp__sub_83CECF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15320
	ctx.r3.s64 = ctx.r11.s64 + 15320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECF9C"))) PPC_WEAK_FUNC(sub_83CECF9C);
PPC_FUNC_IMPL(__imp__sub_83CECF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECFA0"))) PPC_WEAK_FUNC(sub_83CECFA0);
PPC_FUNC_IMPL(__imp__sub_83CECFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15328
	ctx.r3.s64 = ctx.r11.s64 + 15328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECFAC"))) PPC_WEAK_FUNC(sub_83CECFAC);
PPC_FUNC_IMPL(__imp__sub_83CECFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECFB0"))) PPC_WEAK_FUNC(sub_83CECFB0);
PPC_FUNC_IMPL(__imp__sub_83CECFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15336
	ctx.r3.s64 = ctx.r11.s64 + 15336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECFBC"))) PPC_WEAK_FUNC(sub_83CECFBC);
PPC_FUNC_IMPL(__imp__sub_83CECFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECFC0"))) PPC_WEAK_FUNC(sub_83CECFC0);
PPC_FUNC_IMPL(__imp__sub_83CECFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15344
	ctx.r3.s64 = ctx.r11.s64 + 15344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECFCC"))) PPC_WEAK_FUNC(sub_83CECFCC);
PPC_FUNC_IMPL(__imp__sub_83CECFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECFD0"))) PPC_WEAK_FUNC(sub_83CECFD0);
PPC_FUNC_IMPL(__imp__sub_83CECFD0) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r4,r11,29184
	ctx.r4.s64 = ctx.r11.s64 + 29184;
	// addi r3,r10,-27600
	ctx.r3.s64 = ctx.r10.s64 + -27600;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83CECFF4;
	sub_8259CC28(ctx, base);
	// lis r9,-31785
	ctx.r9.s64 = -2083061760;
	// addi r3,r9,15352
	ctx.r3.s64 = ctx.r9.s64 + 15352;
	// bl 0x831cdcc8
	ctx.lr = 0x83CED000;
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

__attribute__((alias("__imp__sub_83CED010"))) PPC_WEAK_FUNC(sub_83CED010);
PPC_FUNC_IMPL(__imp__sub_83CED010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15456
	ctx.r3.s64 = ctx.r11.s64 + 15456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED01C"))) PPC_WEAK_FUNC(sub_83CED01C);
PPC_FUNC_IMPL(__imp__sub_83CED01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED020"))) PPC_WEAK_FUNC(sub_83CED020);
PPC_FUNC_IMPL(__imp__sub_83CED020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15464
	ctx.r3.s64 = ctx.r11.s64 + 15464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED02C"))) PPC_WEAK_FUNC(sub_83CED02C);
PPC_FUNC_IMPL(__imp__sub_83CED02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED030"))) PPC_WEAK_FUNC(sub_83CED030);
PPC_FUNC_IMPL(__imp__sub_83CED030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15472
	ctx.r3.s64 = ctx.r11.s64 + 15472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED03C"))) PPC_WEAK_FUNC(sub_83CED03C);
PPC_FUNC_IMPL(__imp__sub_83CED03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED040"))) PPC_WEAK_FUNC(sub_83CED040);
PPC_FUNC_IMPL(__imp__sub_83CED040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15480
	ctx.r3.s64 = ctx.r11.s64 + 15480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED04C"))) PPC_WEAK_FUNC(sub_83CED04C);
PPC_FUNC_IMPL(__imp__sub_83CED04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED050"))) PPC_WEAK_FUNC(sub_83CED050);
PPC_FUNC_IMPL(__imp__sub_83CED050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15488
	ctx.r3.s64 = ctx.r11.s64 + 15488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED05C"))) PPC_WEAK_FUNC(sub_83CED05C);
PPC_FUNC_IMPL(__imp__sub_83CED05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED060"))) PPC_WEAK_FUNC(sub_83CED060);
PPC_FUNC_IMPL(__imp__sub_83CED060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15496
	ctx.r3.s64 = ctx.r11.s64 + 15496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED06C"))) PPC_WEAK_FUNC(sub_83CED06C);
PPC_FUNC_IMPL(__imp__sub_83CED06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED070"))) PPC_WEAK_FUNC(sub_83CED070);
PPC_FUNC_IMPL(__imp__sub_83CED070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15504
	ctx.r3.s64 = ctx.r11.s64 + 15504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED07C"))) PPC_WEAK_FUNC(sub_83CED07C);
PPC_FUNC_IMPL(__imp__sub_83CED07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED080"))) PPC_WEAK_FUNC(sub_83CED080);
PPC_FUNC_IMPL(__imp__sub_83CED080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15512
	ctx.r3.s64 = ctx.r11.s64 + 15512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED08C"))) PPC_WEAK_FUNC(sub_83CED08C);
PPC_FUNC_IMPL(__imp__sub_83CED08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED090"))) PPC_WEAK_FUNC(sub_83CED090);
PPC_FUNC_IMPL(__imp__sub_83CED090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15520
	ctx.r3.s64 = ctx.r11.s64 + 15520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED09C"))) PPC_WEAK_FUNC(sub_83CED09C);
PPC_FUNC_IMPL(__imp__sub_83CED09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED0A0"))) PPC_WEAK_FUNC(sub_83CED0A0);
PPC_FUNC_IMPL(__imp__sub_83CED0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15528
	ctx.r3.s64 = ctx.r11.s64 + 15528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED0AC"))) PPC_WEAK_FUNC(sub_83CED0AC);
PPC_FUNC_IMPL(__imp__sub_83CED0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED0B0"))) PPC_WEAK_FUNC(sub_83CED0B0);
PPC_FUNC_IMPL(__imp__sub_83CED0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15536
	ctx.r3.s64 = ctx.r11.s64 + 15536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED0BC"))) PPC_WEAK_FUNC(sub_83CED0BC);
PPC_FUNC_IMPL(__imp__sub_83CED0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED0C0"))) PPC_WEAK_FUNC(sub_83CED0C0);
PPC_FUNC_IMPL(__imp__sub_83CED0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15544
	ctx.r3.s64 = ctx.r11.s64 + 15544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED0CC"))) PPC_WEAK_FUNC(sub_83CED0CC);
PPC_FUNC_IMPL(__imp__sub_83CED0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED0D0"))) PPC_WEAK_FUNC(sub_83CED0D0);
PPC_FUNC_IMPL(__imp__sub_83CED0D0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,7104
	ctx.r3.s64 = ctx.r11.s64 + 7104;
	// bl 0x83523120
	ctx.lr = 0x83CED0E8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,15552
	ctx.r3.s64 = ctx.r10.s64 + 15552;
	// bl 0x831cdcc8
	ctx.lr = 0x83CED0F4;
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

__attribute__((alias("__imp__sub_83CED104"))) PPC_WEAK_FUNC(sub_83CED104);
PPC_FUNC_IMPL(__imp__sub_83CED104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED108"))) PPC_WEAK_FUNC(sub_83CED108);
PPC_FUNC_IMPL(__imp__sub_83CED108) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7120
	ctx.r7.s64 = ctx.r8.s64 + 7120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7120);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7120, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CED130"))) PPC_WEAK_FUNC(sub_83CED130);
PPC_FUNC_IMPL(__imp__sub_83CED130) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-27468
	ctx.r6.s64 = ctx.r7.s64 + -27468;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27540(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27540);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7120(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7120);
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
	// std r9,-27468(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27468, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CED178"))) PPC_WEAK_FUNC(sub_83CED178);
PPC_FUNC_IMPL(__imp__sub_83CED178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15568
	ctx.r3.s64 = ctx.r11.s64 + 15568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED184"))) PPC_WEAK_FUNC(sub_83CED184);
PPC_FUNC_IMPL(__imp__sub_83CED184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED188"))) PPC_WEAK_FUNC(sub_83CED188);
PPC_FUNC_IMPL(__imp__sub_83CED188) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,7128
	ctx.r3.s64 = ctx.r11.s64 + 7128;
	// bl 0x8259af80
	ctx.lr = 0x83CED1A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,15584
	ctx.r3.s64 = ctx.r10.s64 + 15584;
	// bl 0x831cdcc8
	ctx.lr = 0x83CED1AC;
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

__attribute__((alias("__imp__sub_83CED1BC"))) PPC_WEAK_FUNC(sub_83CED1BC);
PPC_FUNC_IMPL(__imp__sub_83CED1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED1C0"))) PPC_WEAK_FUNC(sub_83CED1C0);
PPC_FUNC_IMPL(__imp__sub_83CED1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7108
	ctx.r11.s64 = ctx.r8.s64 + 7108;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-27492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27492);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15576
	ctx.r3.s64 = ctx.r6.s64 + 15576;
	// stw r10,7108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7108, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED1F0"))) PPC_WEAK_FUNC(sub_83CED1F0);
PPC_FUNC_IMPL(__imp__sub_83CED1F0) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r4,r11,29668
	ctx.r4.s64 = ctx.r11.s64 + 29668;
	// addi r3,r10,-27444
	ctx.r3.s64 = ctx.r10.s64 + -27444;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83CED214;
	sub_8259CC28(ctx, base);
	// lis r9,-31785
	ctx.r9.s64 = -2083061760;
	// addi r3,r9,15592
	ctx.r3.s64 = ctx.r9.s64 + 15592;
	// bl 0x831cdcc8
	ctx.lr = 0x83CED220;
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

__attribute__((alias("__imp__sub_83CED230"))) PPC_WEAK_FUNC(sub_83CED230);
PPC_FUNC_IMPL(__imp__sub_83CED230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15696
	ctx.r3.s64 = ctx.r11.s64 + 15696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED23C"))) PPC_WEAK_FUNC(sub_83CED23C);
PPC_FUNC_IMPL(__imp__sub_83CED23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED240"))) PPC_WEAK_FUNC(sub_83CED240);
PPC_FUNC_IMPL(__imp__sub_83CED240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15704
	ctx.r3.s64 = ctx.r11.s64 + 15704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED24C"))) PPC_WEAK_FUNC(sub_83CED24C);
PPC_FUNC_IMPL(__imp__sub_83CED24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED250"))) PPC_WEAK_FUNC(sub_83CED250);
PPC_FUNC_IMPL(__imp__sub_83CED250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15712
	ctx.r3.s64 = ctx.r11.s64 + 15712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED25C"))) PPC_WEAK_FUNC(sub_83CED25C);
PPC_FUNC_IMPL(__imp__sub_83CED25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED260"))) PPC_WEAK_FUNC(sub_83CED260);
PPC_FUNC_IMPL(__imp__sub_83CED260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15720
	ctx.r3.s64 = ctx.r11.s64 + 15720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED26C"))) PPC_WEAK_FUNC(sub_83CED26C);
PPC_FUNC_IMPL(__imp__sub_83CED26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED270"))) PPC_WEAK_FUNC(sub_83CED270);
PPC_FUNC_IMPL(__imp__sub_83CED270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15728
	ctx.r3.s64 = ctx.r11.s64 + 15728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED27C"))) PPC_WEAK_FUNC(sub_83CED27C);
PPC_FUNC_IMPL(__imp__sub_83CED27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED280"))) PPC_WEAK_FUNC(sub_83CED280);
PPC_FUNC_IMPL(__imp__sub_83CED280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15736
	ctx.r3.s64 = ctx.r11.s64 + 15736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED28C"))) PPC_WEAK_FUNC(sub_83CED28C);
PPC_FUNC_IMPL(__imp__sub_83CED28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED290"))) PPC_WEAK_FUNC(sub_83CED290);
PPC_FUNC_IMPL(__imp__sub_83CED290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15744
	ctx.r3.s64 = ctx.r11.s64 + 15744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED29C"))) PPC_WEAK_FUNC(sub_83CED29C);
PPC_FUNC_IMPL(__imp__sub_83CED29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED2A0"))) PPC_WEAK_FUNC(sub_83CED2A0);
PPC_FUNC_IMPL(__imp__sub_83CED2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15752
	ctx.r3.s64 = ctx.r11.s64 + 15752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED2AC"))) PPC_WEAK_FUNC(sub_83CED2AC);
PPC_FUNC_IMPL(__imp__sub_83CED2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED2B0"))) PPC_WEAK_FUNC(sub_83CED2B0);
PPC_FUNC_IMPL(__imp__sub_83CED2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15760
	ctx.r3.s64 = ctx.r11.s64 + 15760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED2BC"))) PPC_WEAK_FUNC(sub_83CED2BC);
PPC_FUNC_IMPL(__imp__sub_83CED2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED2C0"))) PPC_WEAK_FUNC(sub_83CED2C0);
PPC_FUNC_IMPL(__imp__sub_83CED2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15768
	ctx.r3.s64 = ctx.r11.s64 + 15768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED2CC"))) PPC_WEAK_FUNC(sub_83CED2CC);
PPC_FUNC_IMPL(__imp__sub_83CED2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED2D0"))) PPC_WEAK_FUNC(sub_83CED2D0);
PPC_FUNC_IMPL(__imp__sub_83CED2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15776
	ctx.r3.s64 = ctx.r11.s64 + 15776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED2DC"))) PPC_WEAK_FUNC(sub_83CED2DC);
PPC_FUNC_IMPL(__imp__sub_83CED2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED2E0"))) PPC_WEAK_FUNC(sub_83CED2E0);
PPC_FUNC_IMPL(__imp__sub_83CED2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15784
	ctx.r3.s64 = ctx.r11.s64 + 15784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED2EC"))) PPC_WEAK_FUNC(sub_83CED2EC);
PPC_FUNC_IMPL(__imp__sub_83CED2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED2F0"))) PPC_WEAK_FUNC(sub_83CED2F0);
PPC_FUNC_IMPL(__imp__sub_83CED2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
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

__attribute__((alias("__imp__sub_83CED318"))) PPC_WEAK_FUNC(sub_83CED318);
PPC_FUNC_IMPL(__imp__sub_83CED318) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-27312
	ctx.r6.s64 = ctx.r7.s64 + -27312;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27384(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27384);
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
	// std r9,-27312(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27312, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CED360"))) PPC_WEAK_FUNC(sub_83CED360);
PPC_FUNC_IMPL(__imp__sub_83CED360) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,7472
	ctx.r3.s64 = ctx.r11.s64 + 7472;
	// bl 0x83523120
	ctx.lr = 0x83CED378;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,15792
	ctx.r3.s64 = ctx.r10.s64 + 15792;
	// bl 0x831cdcc8
	ctx.lr = 0x83CED384;
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

__attribute__((alias("__imp__sub_83CED394"))) PPC_WEAK_FUNC(sub_83CED394);
PPC_FUNC_IMPL(__imp__sub_83CED394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED398"))) PPC_WEAK_FUNC(sub_83CED398);
PPC_FUNC_IMPL(__imp__sub_83CED398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15808
	ctx.r3.s64 = ctx.r11.s64 + 15808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED3A4"))) PPC_WEAK_FUNC(sub_83CED3A4);
PPC_FUNC_IMPL(__imp__sub_83CED3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED3A8"))) PPC_WEAK_FUNC(sub_83CED3A8);
PPC_FUNC_IMPL(__imp__sub_83CED3A8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,7496
	ctx.r3.s64 = ctx.r11.s64 + 7496;
	// bl 0x8259af80
	ctx.lr = 0x83CED3C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,15824
	ctx.r3.s64 = ctx.r10.s64 + 15824;
	// bl 0x831cdcc8
	ctx.lr = 0x83CED3CC;
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

__attribute__((alias("__imp__sub_83CED3DC"))) PPC_WEAK_FUNC(sub_83CED3DC);
PPC_FUNC_IMPL(__imp__sub_83CED3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED3E0"))) PPC_WEAK_FUNC(sub_83CED3E0);
PPC_FUNC_IMPL(__imp__sub_83CED3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7476
	ctx.r11.s64 = ctx.r8.s64 + 7476;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-27336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27336);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15816
	ctx.r3.s64 = ctx.r6.s64 + 15816;
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

__attribute__((alias("__imp__sub_83CED410"))) PPC_WEAK_FUNC(sub_83CED410);
PPC_FUNC_IMPL(__imp__sub_83CED410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15832
	ctx.r3.s64 = ctx.r11.s64 + 15832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED41C"))) PPC_WEAK_FUNC(sub_83CED41C);
PPC_FUNC_IMPL(__imp__sub_83CED41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED420"))) PPC_WEAK_FUNC(sub_83CED420);
PPC_FUNC_IMPL(__imp__sub_83CED420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15840
	ctx.r3.s64 = ctx.r11.s64 + 15840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED42C"))) PPC_WEAK_FUNC(sub_83CED42C);
PPC_FUNC_IMPL(__imp__sub_83CED42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED430"))) PPC_WEAK_FUNC(sub_83CED430);
PPC_FUNC_IMPL(__imp__sub_83CED430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15848
	ctx.r3.s64 = ctx.r11.s64 + 15848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED43C"))) PPC_WEAK_FUNC(sub_83CED43C);
PPC_FUNC_IMPL(__imp__sub_83CED43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED440"))) PPC_WEAK_FUNC(sub_83CED440);
PPC_FUNC_IMPL(__imp__sub_83CED440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15856
	ctx.r3.s64 = ctx.r11.s64 + 15856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED44C"))) PPC_WEAK_FUNC(sub_83CED44C);
PPC_FUNC_IMPL(__imp__sub_83CED44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED450"))) PPC_WEAK_FUNC(sub_83CED450);
PPC_FUNC_IMPL(__imp__sub_83CED450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15864
	ctx.r3.s64 = ctx.r11.s64 + 15864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED45C"))) PPC_WEAK_FUNC(sub_83CED45C);
PPC_FUNC_IMPL(__imp__sub_83CED45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED460"))) PPC_WEAK_FUNC(sub_83CED460);
PPC_FUNC_IMPL(__imp__sub_83CED460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15872
	ctx.r3.s64 = ctx.r11.s64 + 15872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED46C"))) PPC_WEAK_FUNC(sub_83CED46C);
PPC_FUNC_IMPL(__imp__sub_83CED46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED470"))) PPC_WEAK_FUNC(sub_83CED470);
PPC_FUNC_IMPL(__imp__sub_83CED470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15880
	ctx.r3.s64 = ctx.r11.s64 + 15880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED47C"))) PPC_WEAK_FUNC(sub_83CED47C);
PPC_FUNC_IMPL(__imp__sub_83CED47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED480"))) PPC_WEAK_FUNC(sub_83CED480);
PPC_FUNC_IMPL(__imp__sub_83CED480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15888
	ctx.r3.s64 = ctx.r11.s64 + 15888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED48C"))) PPC_WEAK_FUNC(sub_83CED48C);
PPC_FUNC_IMPL(__imp__sub_83CED48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED490"))) PPC_WEAK_FUNC(sub_83CED490);
PPC_FUNC_IMPL(__imp__sub_83CED490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED49C"))) PPC_WEAK_FUNC(sub_83CED49C);
PPC_FUNC_IMPL(__imp__sub_83CED49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED4A0"))) PPC_WEAK_FUNC(sub_83CED4A0);
PPC_FUNC_IMPL(__imp__sub_83CED4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15904
	ctx.r3.s64 = ctx.r11.s64 + 15904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED4AC"))) PPC_WEAK_FUNC(sub_83CED4AC);
PPC_FUNC_IMPL(__imp__sub_83CED4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED4B0"))) PPC_WEAK_FUNC(sub_83CED4B0);
PPC_FUNC_IMPL(__imp__sub_83CED4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15912
	ctx.r3.s64 = ctx.r11.s64 + 15912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED4BC"))) PPC_WEAK_FUNC(sub_83CED4BC);
PPC_FUNC_IMPL(__imp__sub_83CED4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED4C0"))) PPC_WEAK_FUNC(sub_83CED4C0);
PPC_FUNC_IMPL(__imp__sub_83CED4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15920
	ctx.r3.s64 = ctx.r11.s64 + 15920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED4CC"))) PPC_WEAK_FUNC(sub_83CED4CC);
PPC_FUNC_IMPL(__imp__sub_83CED4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED4D0"))) PPC_WEAK_FUNC(sub_83CED4D0);
PPC_FUNC_IMPL(__imp__sub_83CED4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15928
	ctx.r3.s64 = ctx.r11.s64 + 15928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED4DC"))) PPC_WEAK_FUNC(sub_83CED4DC);
PPC_FUNC_IMPL(__imp__sub_83CED4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED4E0"))) PPC_WEAK_FUNC(sub_83CED4E0);
PPC_FUNC_IMPL(__imp__sub_83CED4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15936
	ctx.r3.s64 = ctx.r11.s64 + 15936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED4EC"))) PPC_WEAK_FUNC(sub_83CED4EC);
PPC_FUNC_IMPL(__imp__sub_83CED4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED4F0"))) PPC_WEAK_FUNC(sub_83CED4F0);
PPC_FUNC_IMPL(__imp__sub_83CED4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15944
	ctx.r3.s64 = ctx.r11.s64 + 15944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED4FC"))) PPC_WEAK_FUNC(sub_83CED4FC);
PPC_FUNC_IMPL(__imp__sub_83CED4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED500"))) PPC_WEAK_FUNC(sub_83CED500);
PPC_FUNC_IMPL(__imp__sub_83CED500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15952
	ctx.r3.s64 = ctx.r11.s64 + 15952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED50C"))) PPC_WEAK_FUNC(sub_83CED50C);
PPC_FUNC_IMPL(__imp__sub_83CED50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED510"))) PPC_WEAK_FUNC(sub_83CED510);
PPC_FUNC_IMPL(__imp__sub_83CED510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15960
	ctx.r3.s64 = ctx.r11.s64 + 15960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED51C"))) PPC_WEAK_FUNC(sub_83CED51C);
PPC_FUNC_IMPL(__imp__sub_83CED51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED520"))) PPC_WEAK_FUNC(sub_83CED520);
PPC_FUNC_IMPL(__imp__sub_83CED520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15968
	ctx.r3.s64 = ctx.r11.s64 + 15968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED52C"))) PPC_WEAK_FUNC(sub_83CED52C);
PPC_FUNC_IMPL(__imp__sub_83CED52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED530"))) PPC_WEAK_FUNC(sub_83CED530);
PPC_FUNC_IMPL(__imp__sub_83CED530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15976
	ctx.r3.s64 = ctx.r11.s64 + 15976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED53C"))) PPC_WEAK_FUNC(sub_83CED53C);
PPC_FUNC_IMPL(__imp__sub_83CED53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED540"))) PPC_WEAK_FUNC(sub_83CED540);
PPC_FUNC_IMPL(__imp__sub_83CED540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15984
	ctx.r3.s64 = ctx.r11.s64 + 15984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED54C"))) PPC_WEAK_FUNC(sub_83CED54C);
PPC_FUNC_IMPL(__imp__sub_83CED54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED550"))) PPC_WEAK_FUNC(sub_83CED550);
PPC_FUNC_IMPL(__imp__sub_83CED550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15992
	ctx.r3.s64 = ctx.r11.s64 + 15992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED55C"))) PPC_WEAK_FUNC(sub_83CED55C);
PPC_FUNC_IMPL(__imp__sub_83CED55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED560"))) PPC_WEAK_FUNC(sub_83CED560);
PPC_FUNC_IMPL(__imp__sub_83CED560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16000
	ctx.r3.s64 = ctx.r11.s64 + 16000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED56C"))) PPC_WEAK_FUNC(sub_83CED56C);
PPC_FUNC_IMPL(__imp__sub_83CED56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED570"))) PPC_WEAK_FUNC(sub_83CED570);
PPC_FUNC_IMPL(__imp__sub_83CED570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16008
	ctx.r3.s64 = ctx.r11.s64 + 16008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED57C"))) PPC_WEAK_FUNC(sub_83CED57C);
PPC_FUNC_IMPL(__imp__sub_83CED57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED580"))) PPC_WEAK_FUNC(sub_83CED580);
PPC_FUNC_IMPL(__imp__sub_83CED580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16016
	ctx.r3.s64 = ctx.r11.s64 + 16016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED58C"))) PPC_WEAK_FUNC(sub_83CED58C);
PPC_FUNC_IMPL(__imp__sub_83CED58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED590"))) PPC_WEAK_FUNC(sub_83CED590);
PPC_FUNC_IMPL(__imp__sub_83CED590) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,7848
	ctx.r3.s64 = ctx.r11.s64 + 7848;
	// bl 0x83523120
	ctx.lr = 0x83CED5A8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,16024
	ctx.r3.s64 = ctx.r10.s64 + 16024;
	// bl 0x831cdcc8
	ctx.lr = 0x83CED5B4;
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

__attribute__((alias("__imp__sub_83CED5C4"))) PPC_WEAK_FUNC(sub_83CED5C4);
PPC_FUNC_IMPL(__imp__sub_83CED5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED5C8"))) PPC_WEAK_FUNC(sub_83CED5C8);
PPC_FUNC_IMPL(__imp__sub_83CED5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7864
	ctx.r7.s64 = ctx.r8.s64 + 7864;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7864(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7864);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7864(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7864, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CED5F0"))) PPC_WEAK_FUNC(sub_83CED5F0);
PPC_FUNC_IMPL(__imp__sub_83CED5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-27080
	ctx.r6.s64 = ctx.r7.s64 + -27080;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27152(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27152);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7864(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7864);
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
	// std r9,-27080(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27080, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CED638"))) PPC_WEAK_FUNC(sub_83CED638);
PPC_FUNC_IMPL(__imp__sub_83CED638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16040
	ctx.r3.s64 = ctx.r11.s64 + 16040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED644"))) PPC_WEAK_FUNC(sub_83CED644);
PPC_FUNC_IMPL(__imp__sub_83CED644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED648"))) PPC_WEAK_FUNC(sub_83CED648);
PPC_FUNC_IMPL(__imp__sub_83CED648) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,7872
	ctx.r3.s64 = ctx.r11.s64 + 7872;
	// bl 0x8259af80
	ctx.lr = 0x83CED660;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,16056
	ctx.r3.s64 = ctx.r10.s64 + 16056;
	// bl 0x831cdcc8
	ctx.lr = 0x83CED66C;
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

__attribute__((alias("__imp__sub_83CED67C"))) PPC_WEAK_FUNC(sub_83CED67C);
PPC_FUNC_IMPL(__imp__sub_83CED67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED680"))) PPC_WEAK_FUNC(sub_83CED680);
PPC_FUNC_IMPL(__imp__sub_83CED680) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7852
	ctx.r11.s64 = ctx.r8.s64 + 7852;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-27104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27104);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16048
	ctx.r3.s64 = ctx.r6.s64 + 16048;
	// stw r10,7852(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7852, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED6B0"))) PPC_WEAK_FUNC(sub_83CED6B0);
PPC_FUNC_IMPL(__imp__sub_83CED6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16064
	ctx.r3.s64 = ctx.r11.s64 + 16064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED6BC"))) PPC_WEAK_FUNC(sub_83CED6BC);
PPC_FUNC_IMPL(__imp__sub_83CED6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED6C0"))) PPC_WEAK_FUNC(sub_83CED6C0);
PPC_FUNC_IMPL(__imp__sub_83CED6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16072
	ctx.r3.s64 = ctx.r11.s64 + 16072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED6CC"))) PPC_WEAK_FUNC(sub_83CED6CC);
PPC_FUNC_IMPL(__imp__sub_83CED6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED6D0"))) PPC_WEAK_FUNC(sub_83CED6D0);
PPC_FUNC_IMPL(__imp__sub_83CED6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16080
	ctx.r3.s64 = ctx.r11.s64 + 16080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED6DC"))) PPC_WEAK_FUNC(sub_83CED6DC);
PPC_FUNC_IMPL(__imp__sub_83CED6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED6E0"))) PPC_WEAK_FUNC(sub_83CED6E0);
PPC_FUNC_IMPL(__imp__sub_83CED6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16088
	ctx.r3.s64 = ctx.r11.s64 + 16088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED6EC"))) PPC_WEAK_FUNC(sub_83CED6EC);
PPC_FUNC_IMPL(__imp__sub_83CED6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED6F0"))) PPC_WEAK_FUNC(sub_83CED6F0);
PPC_FUNC_IMPL(__imp__sub_83CED6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16096
	ctx.r3.s64 = ctx.r11.s64 + 16096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED6FC"))) PPC_WEAK_FUNC(sub_83CED6FC);
PPC_FUNC_IMPL(__imp__sub_83CED6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED700"))) PPC_WEAK_FUNC(sub_83CED700);
PPC_FUNC_IMPL(__imp__sub_83CED700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16104
	ctx.r3.s64 = ctx.r11.s64 + 16104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED70C"))) PPC_WEAK_FUNC(sub_83CED70C);
PPC_FUNC_IMPL(__imp__sub_83CED70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED710"))) PPC_WEAK_FUNC(sub_83CED710);
PPC_FUNC_IMPL(__imp__sub_83CED710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16112
	ctx.r3.s64 = ctx.r11.s64 + 16112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED71C"))) PPC_WEAK_FUNC(sub_83CED71C);
PPC_FUNC_IMPL(__imp__sub_83CED71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED720"))) PPC_WEAK_FUNC(sub_83CED720);
PPC_FUNC_IMPL(__imp__sub_83CED720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16120
	ctx.r3.s64 = ctx.r11.s64 + 16120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED72C"))) PPC_WEAK_FUNC(sub_83CED72C);
PPC_FUNC_IMPL(__imp__sub_83CED72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED730"))) PPC_WEAK_FUNC(sub_83CED730);
PPC_FUNC_IMPL(__imp__sub_83CED730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16128
	ctx.r3.s64 = ctx.r11.s64 + 16128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED73C"))) PPC_WEAK_FUNC(sub_83CED73C);
PPC_FUNC_IMPL(__imp__sub_83CED73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED740"))) PPC_WEAK_FUNC(sub_83CED740);
PPC_FUNC_IMPL(__imp__sub_83CED740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16136
	ctx.r3.s64 = ctx.r11.s64 + 16136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED74C"))) PPC_WEAK_FUNC(sub_83CED74C);
PPC_FUNC_IMPL(__imp__sub_83CED74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED750"))) PPC_WEAK_FUNC(sub_83CED750);
PPC_FUNC_IMPL(__imp__sub_83CED750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16144
	ctx.r3.s64 = ctx.r11.s64 + 16144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED75C"))) PPC_WEAK_FUNC(sub_83CED75C);
PPC_FUNC_IMPL(__imp__sub_83CED75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED760"))) PPC_WEAK_FUNC(sub_83CED760);
PPC_FUNC_IMPL(__imp__sub_83CED760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16152
	ctx.r3.s64 = ctx.r11.s64 + 16152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED76C"))) PPC_WEAK_FUNC(sub_83CED76C);
PPC_FUNC_IMPL(__imp__sub_83CED76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED770"))) PPC_WEAK_FUNC(sub_83CED770);
PPC_FUNC_IMPL(__imp__sub_83CED770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16160
	ctx.r3.s64 = ctx.r11.s64 + 16160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED77C"))) PPC_WEAK_FUNC(sub_83CED77C);
PPC_FUNC_IMPL(__imp__sub_83CED77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED780"))) PPC_WEAK_FUNC(sub_83CED780);
PPC_FUNC_IMPL(__imp__sub_83CED780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16168
	ctx.r3.s64 = ctx.r11.s64 + 16168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED78C"))) PPC_WEAK_FUNC(sub_83CED78C);
PPC_FUNC_IMPL(__imp__sub_83CED78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED790"))) PPC_WEAK_FUNC(sub_83CED790);
PPC_FUNC_IMPL(__imp__sub_83CED790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16176
	ctx.r3.s64 = ctx.r11.s64 + 16176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED79C"))) PPC_WEAK_FUNC(sub_83CED79C);
PPC_FUNC_IMPL(__imp__sub_83CED79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED7A0"))) PPC_WEAK_FUNC(sub_83CED7A0);
PPC_FUNC_IMPL(__imp__sub_83CED7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16184
	ctx.r3.s64 = ctx.r11.s64 + 16184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED7AC"))) PPC_WEAK_FUNC(sub_83CED7AC);
PPC_FUNC_IMPL(__imp__sub_83CED7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED7B0"))) PPC_WEAK_FUNC(sub_83CED7B0);
PPC_FUNC_IMPL(__imp__sub_83CED7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16192
	ctx.r3.s64 = ctx.r11.s64 + 16192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED7BC"))) PPC_WEAK_FUNC(sub_83CED7BC);
PPC_FUNC_IMPL(__imp__sub_83CED7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED7C0"))) PPC_WEAK_FUNC(sub_83CED7C0);
PPC_FUNC_IMPL(__imp__sub_83CED7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16200
	ctx.r3.s64 = ctx.r11.s64 + 16200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED7CC"))) PPC_WEAK_FUNC(sub_83CED7CC);
PPC_FUNC_IMPL(__imp__sub_83CED7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED7D0"))) PPC_WEAK_FUNC(sub_83CED7D0);
PPC_FUNC_IMPL(__imp__sub_83CED7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16208
	ctx.r3.s64 = ctx.r11.s64 + 16208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED7DC"))) PPC_WEAK_FUNC(sub_83CED7DC);
PPC_FUNC_IMPL(__imp__sub_83CED7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED7E0"))) PPC_WEAK_FUNC(sub_83CED7E0);
PPC_FUNC_IMPL(__imp__sub_83CED7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16216
	ctx.r3.s64 = ctx.r11.s64 + 16216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED7EC"))) PPC_WEAK_FUNC(sub_83CED7EC);
PPC_FUNC_IMPL(__imp__sub_83CED7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED7F0"))) PPC_WEAK_FUNC(sub_83CED7F0);
PPC_FUNC_IMPL(__imp__sub_83CED7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16224
	ctx.r3.s64 = ctx.r11.s64 + 16224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED7FC"))) PPC_WEAK_FUNC(sub_83CED7FC);
PPC_FUNC_IMPL(__imp__sub_83CED7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED800"))) PPC_WEAK_FUNC(sub_83CED800);
PPC_FUNC_IMPL(__imp__sub_83CED800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16232
	ctx.r3.s64 = ctx.r11.s64 + 16232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED80C"))) PPC_WEAK_FUNC(sub_83CED80C);
PPC_FUNC_IMPL(__imp__sub_83CED80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED810"))) PPC_WEAK_FUNC(sub_83CED810);
PPC_FUNC_IMPL(__imp__sub_83CED810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16240
	ctx.r3.s64 = ctx.r11.s64 + 16240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED81C"))) PPC_WEAK_FUNC(sub_83CED81C);
PPC_FUNC_IMPL(__imp__sub_83CED81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED820"))) PPC_WEAK_FUNC(sub_83CED820);
PPC_FUNC_IMPL(__imp__sub_83CED820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16248
	ctx.r3.s64 = ctx.r11.s64 + 16248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED82C"))) PPC_WEAK_FUNC(sub_83CED82C);
PPC_FUNC_IMPL(__imp__sub_83CED82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED830"))) PPC_WEAK_FUNC(sub_83CED830);
PPC_FUNC_IMPL(__imp__sub_83CED830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16256
	ctx.r3.s64 = ctx.r11.s64 + 16256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED83C"))) PPC_WEAK_FUNC(sub_83CED83C);
PPC_FUNC_IMPL(__imp__sub_83CED83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED840"))) PPC_WEAK_FUNC(sub_83CED840);
PPC_FUNC_IMPL(__imp__sub_83CED840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16264
	ctx.r3.s64 = ctx.r11.s64 + 16264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED84C"))) PPC_WEAK_FUNC(sub_83CED84C);
PPC_FUNC_IMPL(__imp__sub_83CED84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED850"))) PPC_WEAK_FUNC(sub_83CED850);
PPC_FUNC_IMPL(__imp__sub_83CED850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16272
	ctx.r3.s64 = ctx.r11.s64 + 16272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED85C"))) PPC_WEAK_FUNC(sub_83CED85C);
PPC_FUNC_IMPL(__imp__sub_83CED85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED860"))) PPC_WEAK_FUNC(sub_83CED860);
PPC_FUNC_IMPL(__imp__sub_83CED860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16280
	ctx.r3.s64 = ctx.r11.s64 + 16280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED86C"))) PPC_WEAK_FUNC(sub_83CED86C);
PPC_FUNC_IMPL(__imp__sub_83CED86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CED870"))) PPC_WEAK_FUNC(sub_83CED870);
PPC_FUNC_IMPL(__imp__sub_83CED870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,16288
	ctx.r3.s64 = ctx.r11.s64 + 16288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CED87C"))) PPC_WEAK_FUNC(sub_83CED87C);
PPC_FUNC_IMPL(__imp__sub_83CED87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

