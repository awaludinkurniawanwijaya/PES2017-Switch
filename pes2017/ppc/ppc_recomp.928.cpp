#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CCEA30"))) PPC_WEAK_FUNC(sub_83CCEA30);
PPC_FUNC_IMPL(__imp__sub_83CCEA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26336
	ctx.r3.s64 = ctx.r11.s64 + -26336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEA3C"))) PPC_WEAK_FUNC(sub_83CCEA3C);
PPC_FUNC_IMPL(__imp__sub_83CCEA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEA40"))) PPC_WEAK_FUNC(sub_83CCEA40);
PPC_FUNC_IMPL(__imp__sub_83CCEA40) {
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
	// addi r3,r11,-11876
	ctx.r3.s64 = ctx.r11.s64 + -11876;
	// bl 0x83523120
	ctx.lr = 0x83CCEA58;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-26328
	ctx.r3.s64 = ctx.r10.s64 + -26328;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCEA64;
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

__attribute__((alias("__imp__sub_83CCEA74"))) PPC_WEAK_FUNC(sub_83CCEA74);
PPC_FUNC_IMPL(__imp__sub_83CCEA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEA78"))) PPC_WEAK_FUNC(sub_83CCEA78);
PPC_FUNC_IMPL(__imp__sub_83CCEA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26312
	ctx.r3.s64 = ctx.r11.s64 + -26312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEA84"))) PPC_WEAK_FUNC(sub_83CCEA84);
PPC_FUNC_IMPL(__imp__sub_83CCEA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEA88"))) PPC_WEAK_FUNC(sub_83CCEA88);
PPC_FUNC_IMPL(__imp__sub_83CCEA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26304
	ctx.r3.s64 = ctx.r11.s64 + -26304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEA94"))) PPC_WEAK_FUNC(sub_83CCEA94);
PPC_FUNC_IMPL(__imp__sub_83CCEA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEA98"))) PPC_WEAK_FUNC(sub_83CCEA98);
PPC_FUNC_IMPL(__imp__sub_83CCEA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26296
	ctx.r3.s64 = ctx.r11.s64 + -26296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEAA4"))) PPC_WEAK_FUNC(sub_83CCEAA4);
PPC_FUNC_IMPL(__imp__sub_83CCEAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEAA8"))) PPC_WEAK_FUNC(sub_83CCEAA8);
PPC_FUNC_IMPL(__imp__sub_83CCEAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26288
	ctx.r3.s64 = ctx.r11.s64 + -26288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEAB4"))) PPC_WEAK_FUNC(sub_83CCEAB4);
PPC_FUNC_IMPL(__imp__sub_83CCEAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEAB8"))) PPC_WEAK_FUNC(sub_83CCEAB8);
PPC_FUNC_IMPL(__imp__sub_83CCEAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26280
	ctx.r3.s64 = ctx.r11.s64 + -26280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEAC4"))) PPC_WEAK_FUNC(sub_83CCEAC4);
PPC_FUNC_IMPL(__imp__sub_83CCEAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEAC8"))) PPC_WEAK_FUNC(sub_83CCEAC8);
PPC_FUNC_IMPL(__imp__sub_83CCEAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26272
	ctx.r3.s64 = ctx.r11.s64 + -26272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEAD4"))) PPC_WEAK_FUNC(sub_83CCEAD4);
PPC_FUNC_IMPL(__imp__sub_83CCEAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEAD8"))) PPC_WEAK_FUNC(sub_83CCEAD8);
PPC_FUNC_IMPL(__imp__sub_83CCEAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26264
	ctx.r3.s64 = ctx.r11.s64 + -26264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEAE4"))) PPC_WEAK_FUNC(sub_83CCEAE4);
PPC_FUNC_IMPL(__imp__sub_83CCEAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEAE8"))) PPC_WEAK_FUNC(sub_83CCEAE8);
PPC_FUNC_IMPL(__imp__sub_83CCEAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26256
	ctx.r3.s64 = ctx.r11.s64 + -26256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEAF4"))) PPC_WEAK_FUNC(sub_83CCEAF4);
PPC_FUNC_IMPL(__imp__sub_83CCEAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEAF8"))) PPC_WEAK_FUNC(sub_83CCEAF8);
PPC_FUNC_IMPL(__imp__sub_83CCEAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26248
	ctx.r3.s64 = ctx.r11.s64 + -26248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEB04"))) PPC_WEAK_FUNC(sub_83CCEB04);
PPC_FUNC_IMPL(__imp__sub_83CCEB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEB08"))) PPC_WEAK_FUNC(sub_83CCEB08);
PPC_FUNC_IMPL(__imp__sub_83CCEB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26240
	ctx.r3.s64 = ctx.r11.s64 + -26240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEB14"))) PPC_WEAK_FUNC(sub_83CCEB14);
PPC_FUNC_IMPL(__imp__sub_83CCEB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEB18"))) PPC_WEAK_FUNC(sub_83CCEB18);
PPC_FUNC_IMPL(__imp__sub_83CCEB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26232
	ctx.r3.s64 = ctx.r11.s64 + -26232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEB24"))) PPC_WEAK_FUNC(sub_83CCEB24);
PPC_FUNC_IMPL(__imp__sub_83CCEB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEB28"))) PPC_WEAK_FUNC(sub_83CCEB28);
PPC_FUNC_IMPL(__imp__sub_83CCEB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26224
	ctx.r3.s64 = ctx.r11.s64 + -26224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEB34"))) PPC_WEAK_FUNC(sub_83CCEB34);
PPC_FUNC_IMPL(__imp__sub_83CCEB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEB38"))) PPC_WEAK_FUNC(sub_83CCEB38);
PPC_FUNC_IMPL(__imp__sub_83CCEB38) {
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
	// addi r3,r11,-11868
	ctx.r3.s64 = ctx.r11.s64 + -11868;
	// bl 0x83523120
	ctx.lr = 0x83CCEB50;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-26216
	ctx.r3.s64 = ctx.r10.s64 + -26216;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCEB5C;
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

__attribute__((alias("__imp__sub_83CCEB6C"))) PPC_WEAK_FUNC(sub_83CCEB6C);
PPC_FUNC_IMPL(__imp__sub_83CCEB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEB70"))) PPC_WEAK_FUNC(sub_83CCEB70);
PPC_FUNC_IMPL(__imp__sub_83CCEB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26200
	ctx.r3.s64 = ctx.r11.s64 + -26200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEB7C"))) PPC_WEAK_FUNC(sub_83CCEB7C);
PPC_FUNC_IMPL(__imp__sub_83CCEB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEB80"))) PPC_WEAK_FUNC(sub_83CCEB80);
PPC_FUNC_IMPL(__imp__sub_83CCEB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26192
	ctx.r3.s64 = ctx.r11.s64 + -26192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEB8C"))) PPC_WEAK_FUNC(sub_83CCEB8C);
PPC_FUNC_IMPL(__imp__sub_83CCEB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEB90"))) PPC_WEAK_FUNC(sub_83CCEB90);
PPC_FUNC_IMPL(__imp__sub_83CCEB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26184
	ctx.r3.s64 = ctx.r11.s64 + -26184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEB9C"))) PPC_WEAK_FUNC(sub_83CCEB9C);
PPC_FUNC_IMPL(__imp__sub_83CCEB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEBA0"))) PPC_WEAK_FUNC(sub_83CCEBA0);
PPC_FUNC_IMPL(__imp__sub_83CCEBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26176
	ctx.r3.s64 = ctx.r11.s64 + -26176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEBAC"))) PPC_WEAK_FUNC(sub_83CCEBAC);
PPC_FUNC_IMPL(__imp__sub_83CCEBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEBB0"))) PPC_WEAK_FUNC(sub_83CCEBB0);
PPC_FUNC_IMPL(__imp__sub_83CCEBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26168
	ctx.r3.s64 = ctx.r11.s64 + -26168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEBBC"))) PPC_WEAK_FUNC(sub_83CCEBBC);
PPC_FUNC_IMPL(__imp__sub_83CCEBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEBC0"))) PPC_WEAK_FUNC(sub_83CCEBC0);
PPC_FUNC_IMPL(__imp__sub_83CCEBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26160
	ctx.r3.s64 = ctx.r11.s64 + -26160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEBCC"))) PPC_WEAK_FUNC(sub_83CCEBCC);
PPC_FUNC_IMPL(__imp__sub_83CCEBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEBD0"))) PPC_WEAK_FUNC(sub_83CCEBD0);
PPC_FUNC_IMPL(__imp__sub_83CCEBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26152
	ctx.r3.s64 = ctx.r11.s64 + -26152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEBDC"))) PPC_WEAK_FUNC(sub_83CCEBDC);
PPC_FUNC_IMPL(__imp__sub_83CCEBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEBE0"))) PPC_WEAK_FUNC(sub_83CCEBE0);
PPC_FUNC_IMPL(__imp__sub_83CCEBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26144
	ctx.r3.s64 = ctx.r11.s64 + -26144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEBEC"))) PPC_WEAK_FUNC(sub_83CCEBEC);
PPC_FUNC_IMPL(__imp__sub_83CCEBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEBF0"))) PPC_WEAK_FUNC(sub_83CCEBF0);
PPC_FUNC_IMPL(__imp__sub_83CCEBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26136
	ctx.r3.s64 = ctx.r11.s64 + -26136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEBFC"))) PPC_WEAK_FUNC(sub_83CCEBFC);
PPC_FUNC_IMPL(__imp__sub_83CCEBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEC00"))) PPC_WEAK_FUNC(sub_83CCEC00);
PPC_FUNC_IMPL(__imp__sub_83CCEC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26128
	ctx.r3.s64 = ctx.r11.s64 + -26128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEC0C"))) PPC_WEAK_FUNC(sub_83CCEC0C);
PPC_FUNC_IMPL(__imp__sub_83CCEC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEC10"))) PPC_WEAK_FUNC(sub_83CCEC10);
PPC_FUNC_IMPL(__imp__sub_83CCEC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26120
	ctx.r3.s64 = ctx.r11.s64 + -26120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEC1C"))) PPC_WEAK_FUNC(sub_83CCEC1C);
PPC_FUNC_IMPL(__imp__sub_83CCEC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEC20"))) PPC_WEAK_FUNC(sub_83CCEC20);
PPC_FUNC_IMPL(__imp__sub_83CCEC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26112
	ctx.r3.s64 = ctx.r11.s64 + -26112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEC2C"))) PPC_WEAK_FUNC(sub_83CCEC2C);
PPC_FUNC_IMPL(__imp__sub_83CCEC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEC30"))) PPC_WEAK_FUNC(sub_83CCEC30);
PPC_FUNC_IMPL(__imp__sub_83CCEC30) {
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
	// addi r3,r11,-11860
	ctx.r3.s64 = ctx.r11.s64 + -11860;
	// bl 0x83523120
	ctx.lr = 0x83CCEC48;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-26104
	ctx.r3.s64 = ctx.r10.s64 + -26104;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCEC54;
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

__attribute__((alias("__imp__sub_83CCEC64"))) PPC_WEAK_FUNC(sub_83CCEC64);
PPC_FUNC_IMPL(__imp__sub_83CCEC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEC68"))) PPC_WEAK_FUNC(sub_83CCEC68);
PPC_FUNC_IMPL(__imp__sub_83CCEC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26088
	ctx.r3.s64 = ctx.r11.s64 + -26088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEC74"))) PPC_WEAK_FUNC(sub_83CCEC74);
PPC_FUNC_IMPL(__imp__sub_83CCEC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEC78"))) PPC_WEAK_FUNC(sub_83CCEC78);
PPC_FUNC_IMPL(__imp__sub_83CCEC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26080
	ctx.r3.s64 = ctx.r11.s64 + -26080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEC84"))) PPC_WEAK_FUNC(sub_83CCEC84);
PPC_FUNC_IMPL(__imp__sub_83CCEC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEC88"))) PPC_WEAK_FUNC(sub_83CCEC88);
PPC_FUNC_IMPL(__imp__sub_83CCEC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26072
	ctx.r3.s64 = ctx.r11.s64 + -26072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEC94"))) PPC_WEAK_FUNC(sub_83CCEC94);
PPC_FUNC_IMPL(__imp__sub_83CCEC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEC98"))) PPC_WEAK_FUNC(sub_83CCEC98);
PPC_FUNC_IMPL(__imp__sub_83CCEC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26064
	ctx.r3.s64 = ctx.r11.s64 + -26064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCECA4"))) PPC_WEAK_FUNC(sub_83CCECA4);
PPC_FUNC_IMPL(__imp__sub_83CCECA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCECA8"))) PPC_WEAK_FUNC(sub_83CCECA8);
PPC_FUNC_IMPL(__imp__sub_83CCECA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26056
	ctx.r3.s64 = ctx.r11.s64 + -26056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCECB4"))) PPC_WEAK_FUNC(sub_83CCECB4);
PPC_FUNC_IMPL(__imp__sub_83CCECB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCECB8"))) PPC_WEAK_FUNC(sub_83CCECB8);
PPC_FUNC_IMPL(__imp__sub_83CCECB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26048
	ctx.r3.s64 = ctx.r11.s64 + -26048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCECC4"))) PPC_WEAK_FUNC(sub_83CCECC4);
PPC_FUNC_IMPL(__imp__sub_83CCECC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCECC8"))) PPC_WEAK_FUNC(sub_83CCECC8);
PPC_FUNC_IMPL(__imp__sub_83CCECC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26040
	ctx.r3.s64 = ctx.r11.s64 + -26040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCECD4"))) PPC_WEAK_FUNC(sub_83CCECD4);
PPC_FUNC_IMPL(__imp__sub_83CCECD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCECD8"))) PPC_WEAK_FUNC(sub_83CCECD8);
PPC_FUNC_IMPL(__imp__sub_83CCECD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26032
	ctx.r3.s64 = ctx.r11.s64 + -26032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCECE4"))) PPC_WEAK_FUNC(sub_83CCECE4);
PPC_FUNC_IMPL(__imp__sub_83CCECE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCECE8"))) PPC_WEAK_FUNC(sub_83CCECE8);
PPC_FUNC_IMPL(__imp__sub_83CCECE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26024
	ctx.r3.s64 = ctx.r11.s64 + -26024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCECF4"))) PPC_WEAK_FUNC(sub_83CCECF4);
PPC_FUNC_IMPL(__imp__sub_83CCECF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCECF8"))) PPC_WEAK_FUNC(sub_83CCECF8);
PPC_FUNC_IMPL(__imp__sub_83CCECF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26016
	ctx.r3.s64 = ctx.r11.s64 + -26016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCED04"))) PPC_WEAK_FUNC(sub_83CCED04);
PPC_FUNC_IMPL(__imp__sub_83CCED04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCED08"))) PPC_WEAK_FUNC(sub_83CCED08);
PPC_FUNC_IMPL(__imp__sub_83CCED08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26008
	ctx.r3.s64 = ctx.r11.s64 + -26008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCED14"))) PPC_WEAK_FUNC(sub_83CCED14);
PPC_FUNC_IMPL(__imp__sub_83CCED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCED18"))) PPC_WEAK_FUNC(sub_83CCED18);
PPC_FUNC_IMPL(__imp__sub_83CCED18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-26000
	ctx.r3.s64 = ctx.r11.s64 + -26000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCED24"))) PPC_WEAK_FUNC(sub_83CCED24);
PPC_FUNC_IMPL(__imp__sub_83CCED24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCED28"))) PPC_WEAK_FUNC(sub_83CCED28);
PPC_FUNC_IMPL(__imp__sub_83CCED28) {
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
	// addi r3,r11,-11851
	ctx.r3.s64 = ctx.r11.s64 + -11851;
	// bl 0x83523120
	ctx.lr = 0x83CCED40;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-25992
	ctx.r3.s64 = ctx.r10.s64 + -25992;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCED4C;
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

__attribute__((alias("__imp__sub_83CCED5C"))) PPC_WEAK_FUNC(sub_83CCED5C);
PPC_FUNC_IMPL(__imp__sub_83CCED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCED60"))) PPC_WEAK_FUNC(sub_83CCED60);
PPC_FUNC_IMPL(__imp__sub_83CCED60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25976
	ctx.r3.s64 = ctx.r11.s64 + -25976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCED6C"))) PPC_WEAK_FUNC(sub_83CCED6C);
PPC_FUNC_IMPL(__imp__sub_83CCED6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCED70"))) PPC_WEAK_FUNC(sub_83CCED70);
PPC_FUNC_IMPL(__imp__sub_83CCED70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25968
	ctx.r3.s64 = ctx.r11.s64 + -25968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCED7C"))) PPC_WEAK_FUNC(sub_83CCED7C);
PPC_FUNC_IMPL(__imp__sub_83CCED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCED80"))) PPC_WEAK_FUNC(sub_83CCED80);
PPC_FUNC_IMPL(__imp__sub_83CCED80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25960
	ctx.r3.s64 = ctx.r11.s64 + -25960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCED8C"))) PPC_WEAK_FUNC(sub_83CCED8C);
PPC_FUNC_IMPL(__imp__sub_83CCED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCED90"))) PPC_WEAK_FUNC(sub_83CCED90);
PPC_FUNC_IMPL(__imp__sub_83CCED90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25952
	ctx.r3.s64 = ctx.r11.s64 + -25952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCED9C"))) PPC_WEAK_FUNC(sub_83CCED9C);
PPC_FUNC_IMPL(__imp__sub_83CCED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEDA0"))) PPC_WEAK_FUNC(sub_83CCEDA0);
PPC_FUNC_IMPL(__imp__sub_83CCEDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25944
	ctx.r3.s64 = ctx.r11.s64 + -25944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEDAC"))) PPC_WEAK_FUNC(sub_83CCEDAC);
PPC_FUNC_IMPL(__imp__sub_83CCEDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEDB0"))) PPC_WEAK_FUNC(sub_83CCEDB0);
PPC_FUNC_IMPL(__imp__sub_83CCEDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25936
	ctx.r3.s64 = ctx.r11.s64 + -25936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEDBC"))) PPC_WEAK_FUNC(sub_83CCEDBC);
PPC_FUNC_IMPL(__imp__sub_83CCEDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEDC0"))) PPC_WEAK_FUNC(sub_83CCEDC0);
PPC_FUNC_IMPL(__imp__sub_83CCEDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25928
	ctx.r3.s64 = ctx.r11.s64 + -25928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEDCC"))) PPC_WEAK_FUNC(sub_83CCEDCC);
PPC_FUNC_IMPL(__imp__sub_83CCEDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEDD0"))) PPC_WEAK_FUNC(sub_83CCEDD0);
PPC_FUNC_IMPL(__imp__sub_83CCEDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25920
	ctx.r3.s64 = ctx.r11.s64 + -25920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEDDC"))) PPC_WEAK_FUNC(sub_83CCEDDC);
PPC_FUNC_IMPL(__imp__sub_83CCEDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEDE0"))) PPC_WEAK_FUNC(sub_83CCEDE0);
PPC_FUNC_IMPL(__imp__sub_83CCEDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25912
	ctx.r3.s64 = ctx.r11.s64 + -25912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEDEC"))) PPC_WEAK_FUNC(sub_83CCEDEC);
PPC_FUNC_IMPL(__imp__sub_83CCEDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEDF0"))) PPC_WEAK_FUNC(sub_83CCEDF0);
PPC_FUNC_IMPL(__imp__sub_83CCEDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25904
	ctx.r3.s64 = ctx.r11.s64 + -25904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEDFC"))) PPC_WEAK_FUNC(sub_83CCEDFC);
PPC_FUNC_IMPL(__imp__sub_83CCEDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEE00"))) PPC_WEAK_FUNC(sub_83CCEE00);
PPC_FUNC_IMPL(__imp__sub_83CCEE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25896
	ctx.r3.s64 = ctx.r11.s64 + -25896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEE0C"))) PPC_WEAK_FUNC(sub_83CCEE0C);
PPC_FUNC_IMPL(__imp__sub_83CCEE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEE10"))) PPC_WEAK_FUNC(sub_83CCEE10);
PPC_FUNC_IMPL(__imp__sub_83CCEE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25888
	ctx.r3.s64 = ctx.r11.s64 + -25888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEE1C"))) PPC_WEAK_FUNC(sub_83CCEE1C);
PPC_FUNC_IMPL(__imp__sub_83CCEE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEE20"))) PPC_WEAK_FUNC(sub_83CCEE20);
PPC_FUNC_IMPL(__imp__sub_83CCEE20) {
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
	// addi r3,r11,-11843
	ctx.r3.s64 = ctx.r11.s64 + -11843;
	// bl 0x83523120
	ctx.lr = 0x83CCEE38;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-25880
	ctx.r3.s64 = ctx.r10.s64 + -25880;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCEE44;
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

__attribute__((alias("__imp__sub_83CCEE54"))) PPC_WEAK_FUNC(sub_83CCEE54);
PPC_FUNC_IMPL(__imp__sub_83CCEE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEE58"))) PPC_WEAK_FUNC(sub_83CCEE58);
PPC_FUNC_IMPL(__imp__sub_83CCEE58) {
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
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83CCEE7C;
	sub_82595718(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-11836
	ctx.r9.s64 = ctx.r10.s64 + -11836;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-25864
	ctx.r3.s64 = ctx.r8.s64 + -25864;
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
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83CCEEC0;
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

__attribute__((alias("__imp__sub_83CCEED0"))) PPC_WEAK_FUNC(sub_83CCEED0);
PPC_FUNC_IMPL(__imp__sub_83CCEED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25776
	ctx.r3.s64 = ctx.r11.s64 + -25776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEEDC"))) PPC_WEAK_FUNC(sub_83CCEEDC);
PPC_FUNC_IMPL(__imp__sub_83CCEEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEEE0"))) PPC_WEAK_FUNC(sub_83CCEEE0);
PPC_FUNC_IMPL(__imp__sub_83CCEEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25768
	ctx.r3.s64 = ctx.r11.s64 + -25768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEEEC"))) PPC_WEAK_FUNC(sub_83CCEEEC);
PPC_FUNC_IMPL(__imp__sub_83CCEEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEEF0"))) PPC_WEAK_FUNC(sub_83CCEEF0);
PPC_FUNC_IMPL(__imp__sub_83CCEEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25760
	ctx.r3.s64 = ctx.r11.s64 + -25760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEEFC"))) PPC_WEAK_FUNC(sub_83CCEEFC);
PPC_FUNC_IMPL(__imp__sub_83CCEEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEF00"))) PPC_WEAK_FUNC(sub_83CCEF00);
PPC_FUNC_IMPL(__imp__sub_83CCEF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25752
	ctx.r3.s64 = ctx.r11.s64 + -25752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEF0C"))) PPC_WEAK_FUNC(sub_83CCEF0C);
PPC_FUNC_IMPL(__imp__sub_83CCEF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEF10"))) PPC_WEAK_FUNC(sub_83CCEF10);
PPC_FUNC_IMPL(__imp__sub_83CCEF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25744
	ctx.r3.s64 = ctx.r11.s64 + -25744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEF1C"))) PPC_WEAK_FUNC(sub_83CCEF1C);
PPC_FUNC_IMPL(__imp__sub_83CCEF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEF20"))) PPC_WEAK_FUNC(sub_83CCEF20);
PPC_FUNC_IMPL(__imp__sub_83CCEF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25736
	ctx.r3.s64 = ctx.r11.s64 + -25736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEF2C"))) PPC_WEAK_FUNC(sub_83CCEF2C);
PPC_FUNC_IMPL(__imp__sub_83CCEF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEF30"))) PPC_WEAK_FUNC(sub_83CCEF30);
PPC_FUNC_IMPL(__imp__sub_83CCEF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25728
	ctx.r3.s64 = ctx.r11.s64 + -25728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEF3C"))) PPC_WEAK_FUNC(sub_83CCEF3C);
PPC_FUNC_IMPL(__imp__sub_83CCEF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEF40"))) PPC_WEAK_FUNC(sub_83CCEF40);
PPC_FUNC_IMPL(__imp__sub_83CCEF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25720
	ctx.r3.s64 = ctx.r11.s64 + -25720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEF4C"))) PPC_WEAK_FUNC(sub_83CCEF4C);
PPC_FUNC_IMPL(__imp__sub_83CCEF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEF50"))) PPC_WEAK_FUNC(sub_83CCEF50);
PPC_FUNC_IMPL(__imp__sub_83CCEF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25712
	ctx.r3.s64 = ctx.r11.s64 + -25712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEF5C"))) PPC_WEAK_FUNC(sub_83CCEF5C);
PPC_FUNC_IMPL(__imp__sub_83CCEF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEF60"))) PPC_WEAK_FUNC(sub_83CCEF60);
PPC_FUNC_IMPL(__imp__sub_83CCEF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25704
	ctx.r3.s64 = ctx.r11.s64 + -25704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEF6C"))) PPC_WEAK_FUNC(sub_83CCEF6C);
PPC_FUNC_IMPL(__imp__sub_83CCEF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEF70"))) PPC_WEAK_FUNC(sub_83CCEF70);
PPC_FUNC_IMPL(__imp__sub_83CCEF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25696
	ctx.r3.s64 = ctx.r11.s64 + -25696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEF7C"))) PPC_WEAK_FUNC(sub_83CCEF7C);
PPC_FUNC_IMPL(__imp__sub_83CCEF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEF80"))) PPC_WEAK_FUNC(sub_83CCEF80);
PPC_FUNC_IMPL(__imp__sub_83CCEF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25688
	ctx.r3.s64 = ctx.r11.s64 + -25688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEF8C"))) PPC_WEAK_FUNC(sub_83CCEF8C);
PPC_FUNC_IMPL(__imp__sub_83CCEF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEF90"))) PPC_WEAK_FUNC(sub_83CCEF90);
PPC_FUNC_IMPL(__imp__sub_83CCEF90) {
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
	// addi r3,r11,-11820
	ctx.r3.s64 = ctx.r11.s64 + -11820;
	// bl 0x83523120
	ctx.lr = 0x83CCEFA8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-25680
	ctx.r3.s64 = ctx.r10.s64 + -25680;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCEFB4;
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

__attribute__((alias("__imp__sub_83CCEFC4"))) PPC_WEAK_FUNC(sub_83CCEFC4);
PPC_FUNC_IMPL(__imp__sub_83CCEFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEFC8"))) PPC_WEAK_FUNC(sub_83CCEFC8);
PPC_FUNC_IMPL(__imp__sub_83CCEFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25664
	ctx.r3.s64 = ctx.r11.s64 + -25664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEFD4"))) PPC_WEAK_FUNC(sub_83CCEFD4);
PPC_FUNC_IMPL(__imp__sub_83CCEFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEFD8"))) PPC_WEAK_FUNC(sub_83CCEFD8);
PPC_FUNC_IMPL(__imp__sub_83CCEFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25656
	ctx.r3.s64 = ctx.r11.s64 + -25656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEFE4"))) PPC_WEAK_FUNC(sub_83CCEFE4);
PPC_FUNC_IMPL(__imp__sub_83CCEFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEFE8"))) PPC_WEAK_FUNC(sub_83CCEFE8);
PPC_FUNC_IMPL(__imp__sub_83CCEFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25648
	ctx.r3.s64 = ctx.r11.s64 + -25648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCEFF4"))) PPC_WEAK_FUNC(sub_83CCEFF4);
PPC_FUNC_IMPL(__imp__sub_83CCEFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCEFF8"))) PPC_WEAK_FUNC(sub_83CCEFF8);
PPC_FUNC_IMPL(__imp__sub_83CCEFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25640
	ctx.r3.s64 = ctx.r11.s64 + -25640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF004"))) PPC_WEAK_FUNC(sub_83CCF004);
PPC_FUNC_IMPL(__imp__sub_83CCF004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF008"))) PPC_WEAK_FUNC(sub_83CCF008);
PPC_FUNC_IMPL(__imp__sub_83CCF008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25632
	ctx.r3.s64 = ctx.r11.s64 + -25632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF014"))) PPC_WEAK_FUNC(sub_83CCF014);
PPC_FUNC_IMPL(__imp__sub_83CCF014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF018"))) PPC_WEAK_FUNC(sub_83CCF018);
PPC_FUNC_IMPL(__imp__sub_83CCF018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25624
	ctx.r3.s64 = ctx.r11.s64 + -25624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF024"))) PPC_WEAK_FUNC(sub_83CCF024);
PPC_FUNC_IMPL(__imp__sub_83CCF024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF028"))) PPC_WEAK_FUNC(sub_83CCF028);
PPC_FUNC_IMPL(__imp__sub_83CCF028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25616
	ctx.r3.s64 = ctx.r11.s64 + -25616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF034"))) PPC_WEAK_FUNC(sub_83CCF034);
PPC_FUNC_IMPL(__imp__sub_83CCF034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF038"))) PPC_WEAK_FUNC(sub_83CCF038);
PPC_FUNC_IMPL(__imp__sub_83CCF038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25608
	ctx.r3.s64 = ctx.r11.s64 + -25608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF044"))) PPC_WEAK_FUNC(sub_83CCF044);
PPC_FUNC_IMPL(__imp__sub_83CCF044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF048"))) PPC_WEAK_FUNC(sub_83CCF048);
PPC_FUNC_IMPL(__imp__sub_83CCF048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25600
	ctx.r3.s64 = ctx.r11.s64 + -25600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF054"))) PPC_WEAK_FUNC(sub_83CCF054);
PPC_FUNC_IMPL(__imp__sub_83CCF054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF058"))) PPC_WEAK_FUNC(sub_83CCF058);
PPC_FUNC_IMPL(__imp__sub_83CCF058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25592
	ctx.r3.s64 = ctx.r11.s64 + -25592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF064"))) PPC_WEAK_FUNC(sub_83CCF064);
PPC_FUNC_IMPL(__imp__sub_83CCF064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF068"))) PPC_WEAK_FUNC(sub_83CCF068);
PPC_FUNC_IMPL(__imp__sub_83CCF068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25584
	ctx.r3.s64 = ctx.r11.s64 + -25584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF074"))) PPC_WEAK_FUNC(sub_83CCF074);
PPC_FUNC_IMPL(__imp__sub_83CCF074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF078"))) PPC_WEAK_FUNC(sub_83CCF078);
PPC_FUNC_IMPL(__imp__sub_83CCF078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25576
	ctx.r3.s64 = ctx.r11.s64 + -25576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF084"))) PPC_WEAK_FUNC(sub_83CCF084);
PPC_FUNC_IMPL(__imp__sub_83CCF084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF088"))) PPC_WEAK_FUNC(sub_83CCF088);
PPC_FUNC_IMPL(__imp__sub_83CCF088) {
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
	// addi r3,r11,-11812
	ctx.r3.s64 = ctx.r11.s64 + -11812;
	// bl 0x83523120
	ctx.lr = 0x83CCF0A0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-25568
	ctx.r3.s64 = ctx.r10.s64 + -25568;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCF0AC;
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

__attribute__((alias("__imp__sub_83CCF0BC"))) PPC_WEAK_FUNC(sub_83CCF0BC);
PPC_FUNC_IMPL(__imp__sub_83CCF0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF0C0"))) PPC_WEAK_FUNC(sub_83CCF0C0);
PPC_FUNC_IMPL(__imp__sub_83CCF0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25552
	ctx.r3.s64 = ctx.r11.s64 + -25552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF0CC"))) PPC_WEAK_FUNC(sub_83CCF0CC);
PPC_FUNC_IMPL(__imp__sub_83CCF0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF0D0"))) PPC_WEAK_FUNC(sub_83CCF0D0);
PPC_FUNC_IMPL(__imp__sub_83CCF0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25544
	ctx.r3.s64 = ctx.r11.s64 + -25544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF0DC"))) PPC_WEAK_FUNC(sub_83CCF0DC);
PPC_FUNC_IMPL(__imp__sub_83CCF0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF0E0"))) PPC_WEAK_FUNC(sub_83CCF0E0);
PPC_FUNC_IMPL(__imp__sub_83CCF0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25536
	ctx.r3.s64 = ctx.r11.s64 + -25536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF0EC"))) PPC_WEAK_FUNC(sub_83CCF0EC);
PPC_FUNC_IMPL(__imp__sub_83CCF0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF0F0"))) PPC_WEAK_FUNC(sub_83CCF0F0);
PPC_FUNC_IMPL(__imp__sub_83CCF0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25528
	ctx.r3.s64 = ctx.r11.s64 + -25528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF0FC"))) PPC_WEAK_FUNC(sub_83CCF0FC);
PPC_FUNC_IMPL(__imp__sub_83CCF0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF100"))) PPC_WEAK_FUNC(sub_83CCF100);
PPC_FUNC_IMPL(__imp__sub_83CCF100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25520
	ctx.r3.s64 = ctx.r11.s64 + -25520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF10C"))) PPC_WEAK_FUNC(sub_83CCF10C);
PPC_FUNC_IMPL(__imp__sub_83CCF10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF110"))) PPC_WEAK_FUNC(sub_83CCF110);
PPC_FUNC_IMPL(__imp__sub_83CCF110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25512
	ctx.r3.s64 = ctx.r11.s64 + -25512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF11C"))) PPC_WEAK_FUNC(sub_83CCF11C);
PPC_FUNC_IMPL(__imp__sub_83CCF11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF120"))) PPC_WEAK_FUNC(sub_83CCF120);
PPC_FUNC_IMPL(__imp__sub_83CCF120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25504
	ctx.r3.s64 = ctx.r11.s64 + -25504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF12C"))) PPC_WEAK_FUNC(sub_83CCF12C);
PPC_FUNC_IMPL(__imp__sub_83CCF12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF130"))) PPC_WEAK_FUNC(sub_83CCF130);
PPC_FUNC_IMPL(__imp__sub_83CCF130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25496
	ctx.r3.s64 = ctx.r11.s64 + -25496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF13C"))) PPC_WEAK_FUNC(sub_83CCF13C);
PPC_FUNC_IMPL(__imp__sub_83CCF13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF140"))) PPC_WEAK_FUNC(sub_83CCF140);
PPC_FUNC_IMPL(__imp__sub_83CCF140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25488
	ctx.r3.s64 = ctx.r11.s64 + -25488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF14C"))) PPC_WEAK_FUNC(sub_83CCF14C);
PPC_FUNC_IMPL(__imp__sub_83CCF14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF150"))) PPC_WEAK_FUNC(sub_83CCF150);
PPC_FUNC_IMPL(__imp__sub_83CCF150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25480
	ctx.r3.s64 = ctx.r11.s64 + -25480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF15C"))) PPC_WEAK_FUNC(sub_83CCF15C);
PPC_FUNC_IMPL(__imp__sub_83CCF15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF160"))) PPC_WEAK_FUNC(sub_83CCF160);
PPC_FUNC_IMPL(__imp__sub_83CCF160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25472
	ctx.r3.s64 = ctx.r11.s64 + -25472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF16C"))) PPC_WEAK_FUNC(sub_83CCF16C);
PPC_FUNC_IMPL(__imp__sub_83CCF16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF170"))) PPC_WEAK_FUNC(sub_83CCF170);
PPC_FUNC_IMPL(__imp__sub_83CCF170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25464
	ctx.r3.s64 = ctx.r11.s64 + -25464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF17C"))) PPC_WEAK_FUNC(sub_83CCF17C);
PPC_FUNC_IMPL(__imp__sub_83CCF17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF180"))) PPC_WEAK_FUNC(sub_83CCF180);
PPC_FUNC_IMPL(__imp__sub_83CCF180) {
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
	// addi r3,r11,-11804
	ctx.r3.s64 = ctx.r11.s64 + -11804;
	// bl 0x83523120
	ctx.lr = 0x83CCF198;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-25456
	ctx.r3.s64 = ctx.r10.s64 + -25456;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCF1A4;
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

__attribute__((alias("__imp__sub_83CCF1B4"))) PPC_WEAK_FUNC(sub_83CCF1B4);
PPC_FUNC_IMPL(__imp__sub_83CCF1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF1B8"))) PPC_WEAK_FUNC(sub_83CCF1B8);
PPC_FUNC_IMPL(__imp__sub_83CCF1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25440
	ctx.r3.s64 = ctx.r11.s64 + -25440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF1C4"))) PPC_WEAK_FUNC(sub_83CCF1C4);
PPC_FUNC_IMPL(__imp__sub_83CCF1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF1C8"))) PPC_WEAK_FUNC(sub_83CCF1C8);
PPC_FUNC_IMPL(__imp__sub_83CCF1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25432
	ctx.r3.s64 = ctx.r11.s64 + -25432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF1D4"))) PPC_WEAK_FUNC(sub_83CCF1D4);
PPC_FUNC_IMPL(__imp__sub_83CCF1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF1D8"))) PPC_WEAK_FUNC(sub_83CCF1D8);
PPC_FUNC_IMPL(__imp__sub_83CCF1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25424
	ctx.r3.s64 = ctx.r11.s64 + -25424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF1E4"))) PPC_WEAK_FUNC(sub_83CCF1E4);
PPC_FUNC_IMPL(__imp__sub_83CCF1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF1E8"))) PPC_WEAK_FUNC(sub_83CCF1E8);
PPC_FUNC_IMPL(__imp__sub_83CCF1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25416
	ctx.r3.s64 = ctx.r11.s64 + -25416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF1F4"))) PPC_WEAK_FUNC(sub_83CCF1F4);
PPC_FUNC_IMPL(__imp__sub_83CCF1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF1F8"))) PPC_WEAK_FUNC(sub_83CCF1F8);
PPC_FUNC_IMPL(__imp__sub_83CCF1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25408
	ctx.r3.s64 = ctx.r11.s64 + -25408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF204"))) PPC_WEAK_FUNC(sub_83CCF204);
PPC_FUNC_IMPL(__imp__sub_83CCF204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF208"))) PPC_WEAK_FUNC(sub_83CCF208);
PPC_FUNC_IMPL(__imp__sub_83CCF208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25400
	ctx.r3.s64 = ctx.r11.s64 + -25400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF214"))) PPC_WEAK_FUNC(sub_83CCF214);
PPC_FUNC_IMPL(__imp__sub_83CCF214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF218"))) PPC_WEAK_FUNC(sub_83CCF218);
PPC_FUNC_IMPL(__imp__sub_83CCF218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25392
	ctx.r3.s64 = ctx.r11.s64 + -25392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF224"))) PPC_WEAK_FUNC(sub_83CCF224);
PPC_FUNC_IMPL(__imp__sub_83CCF224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF228"))) PPC_WEAK_FUNC(sub_83CCF228);
PPC_FUNC_IMPL(__imp__sub_83CCF228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25384
	ctx.r3.s64 = ctx.r11.s64 + -25384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF234"))) PPC_WEAK_FUNC(sub_83CCF234);
PPC_FUNC_IMPL(__imp__sub_83CCF234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF238"))) PPC_WEAK_FUNC(sub_83CCF238);
PPC_FUNC_IMPL(__imp__sub_83CCF238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25376
	ctx.r3.s64 = ctx.r11.s64 + -25376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF244"))) PPC_WEAK_FUNC(sub_83CCF244);
PPC_FUNC_IMPL(__imp__sub_83CCF244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF248"))) PPC_WEAK_FUNC(sub_83CCF248);
PPC_FUNC_IMPL(__imp__sub_83CCF248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25368
	ctx.r3.s64 = ctx.r11.s64 + -25368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF254"))) PPC_WEAK_FUNC(sub_83CCF254);
PPC_FUNC_IMPL(__imp__sub_83CCF254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF258"))) PPC_WEAK_FUNC(sub_83CCF258);
PPC_FUNC_IMPL(__imp__sub_83CCF258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25360
	ctx.r3.s64 = ctx.r11.s64 + -25360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF264"))) PPC_WEAK_FUNC(sub_83CCF264);
PPC_FUNC_IMPL(__imp__sub_83CCF264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF268"))) PPC_WEAK_FUNC(sub_83CCF268);
PPC_FUNC_IMPL(__imp__sub_83CCF268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25352
	ctx.r3.s64 = ctx.r11.s64 + -25352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF274"))) PPC_WEAK_FUNC(sub_83CCF274);
PPC_FUNC_IMPL(__imp__sub_83CCF274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF278"))) PPC_WEAK_FUNC(sub_83CCF278);
PPC_FUNC_IMPL(__imp__sub_83CCF278) {
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
	// addi r3,r11,-11796
	ctx.r3.s64 = ctx.r11.s64 + -11796;
	// bl 0x83523120
	ctx.lr = 0x83CCF290;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-25344
	ctx.r3.s64 = ctx.r10.s64 + -25344;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCF29C;
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

__attribute__((alias("__imp__sub_83CCF2AC"))) PPC_WEAK_FUNC(sub_83CCF2AC);
PPC_FUNC_IMPL(__imp__sub_83CCF2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF2B0"))) PPC_WEAK_FUNC(sub_83CCF2B0);
PPC_FUNC_IMPL(__imp__sub_83CCF2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25328
	ctx.r3.s64 = ctx.r11.s64 + -25328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF2BC"))) PPC_WEAK_FUNC(sub_83CCF2BC);
PPC_FUNC_IMPL(__imp__sub_83CCF2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF2C0"))) PPC_WEAK_FUNC(sub_83CCF2C0);
PPC_FUNC_IMPL(__imp__sub_83CCF2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25320
	ctx.r3.s64 = ctx.r11.s64 + -25320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF2CC"))) PPC_WEAK_FUNC(sub_83CCF2CC);
PPC_FUNC_IMPL(__imp__sub_83CCF2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF2D0"))) PPC_WEAK_FUNC(sub_83CCF2D0);
PPC_FUNC_IMPL(__imp__sub_83CCF2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25312
	ctx.r3.s64 = ctx.r11.s64 + -25312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF2DC"))) PPC_WEAK_FUNC(sub_83CCF2DC);
PPC_FUNC_IMPL(__imp__sub_83CCF2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF2E0"))) PPC_WEAK_FUNC(sub_83CCF2E0);
PPC_FUNC_IMPL(__imp__sub_83CCF2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25304
	ctx.r3.s64 = ctx.r11.s64 + -25304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF2EC"))) PPC_WEAK_FUNC(sub_83CCF2EC);
PPC_FUNC_IMPL(__imp__sub_83CCF2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF2F0"))) PPC_WEAK_FUNC(sub_83CCF2F0);
PPC_FUNC_IMPL(__imp__sub_83CCF2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25296
	ctx.r3.s64 = ctx.r11.s64 + -25296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF2FC"))) PPC_WEAK_FUNC(sub_83CCF2FC);
PPC_FUNC_IMPL(__imp__sub_83CCF2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF300"))) PPC_WEAK_FUNC(sub_83CCF300);
PPC_FUNC_IMPL(__imp__sub_83CCF300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25288
	ctx.r3.s64 = ctx.r11.s64 + -25288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF30C"))) PPC_WEAK_FUNC(sub_83CCF30C);
PPC_FUNC_IMPL(__imp__sub_83CCF30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF310"))) PPC_WEAK_FUNC(sub_83CCF310);
PPC_FUNC_IMPL(__imp__sub_83CCF310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25280
	ctx.r3.s64 = ctx.r11.s64 + -25280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF31C"))) PPC_WEAK_FUNC(sub_83CCF31C);
PPC_FUNC_IMPL(__imp__sub_83CCF31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF320"))) PPC_WEAK_FUNC(sub_83CCF320);
PPC_FUNC_IMPL(__imp__sub_83CCF320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25272
	ctx.r3.s64 = ctx.r11.s64 + -25272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF32C"))) PPC_WEAK_FUNC(sub_83CCF32C);
PPC_FUNC_IMPL(__imp__sub_83CCF32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF330"))) PPC_WEAK_FUNC(sub_83CCF330);
PPC_FUNC_IMPL(__imp__sub_83CCF330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25264
	ctx.r3.s64 = ctx.r11.s64 + -25264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF33C"))) PPC_WEAK_FUNC(sub_83CCF33C);
PPC_FUNC_IMPL(__imp__sub_83CCF33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF340"))) PPC_WEAK_FUNC(sub_83CCF340);
PPC_FUNC_IMPL(__imp__sub_83CCF340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25256
	ctx.r3.s64 = ctx.r11.s64 + -25256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF34C"))) PPC_WEAK_FUNC(sub_83CCF34C);
PPC_FUNC_IMPL(__imp__sub_83CCF34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF350"))) PPC_WEAK_FUNC(sub_83CCF350);
PPC_FUNC_IMPL(__imp__sub_83CCF350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25248
	ctx.r3.s64 = ctx.r11.s64 + -25248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF35C"))) PPC_WEAK_FUNC(sub_83CCF35C);
PPC_FUNC_IMPL(__imp__sub_83CCF35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF360"))) PPC_WEAK_FUNC(sub_83CCF360);
PPC_FUNC_IMPL(__imp__sub_83CCF360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25240
	ctx.r3.s64 = ctx.r11.s64 + -25240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF36C"))) PPC_WEAK_FUNC(sub_83CCF36C);
PPC_FUNC_IMPL(__imp__sub_83CCF36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF370"))) PPC_WEAK_FUNC(sub_83CCF370);
PPC_FUNC_IMPL(__imp__sub_83CCF370) {
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
	// addi r3,r11,-11788
	ctx.r3.s64 = ctx.r11.s64 + -11788;
	// bl 0x83523120
	ctx.lr = 0x83CCF388;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-25232
	ctx.r3.s64 = ctx.r10.s64 + -25232;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCF394;
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

__attribute__((alias("__imp__sub_83CCF3A4"))) PPC_WEAK_FUNC(sub_83CCF3A4);
PPC_FUNC_IMPL(__imp__sub_83CCF3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF3A8"))) PPC_WEAK_FUNC(sub_83CCF3A8);
PPC_FUNC_IMPL(__imp__sub_83CCF3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25216
	ctx.r3.s64 = ctx.r11.s64 + -25216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF3B4"))) PPC_WEAK_FUNC(sub_83CCF3B4);
PPC_FUNC_IMPL(__imp__sub_83CCF3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF3B8"))) PPC_WEAK_FUNC(sub_83CCF3B8);
PPC_FUNC_IMPL(__imp__sub_83CCF3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25208
	ctx.r3.s64 = ctx.r11.s64 + -25208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF3C4"))) PPC_WEAK_FUNC(sub_83CCF3C4);
PPC_FUNC_IMPL(__imp__sub_83CCF3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF3C8"))) PPC_WEAK_FUNC(sub_83CCF3C8);
PPC_FUNC_IMPL(__imp__sub_83CCF3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25200
	ctx.r3.s64 = ctx.r11.s64 + -25200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF3D4"))) PPC_WEAK_FUNC(sub_83CCF3D4);
PPC_FUNC_IMPL(__imp__sub_83CCF3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF3D8"))) PPC_WEAK_FUNC(sub_83CCF3D8);
PPC_FUNC_IMPL(__imp__sub_83CCF3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25192
	ctx.r3.s64 = ctx.r11.s64 + -25192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF3E4"))) PPC_WEAK_FUNC(sub_83CCF3E4);
PPC_FUNC_IMPL(__imp__sub_83CCF3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF3E8"))) PPC_WEAK_FUNC(sub_83CCF3E8);
PPC_FUNC_IMPL(__imp__sub_83CCF3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25184
	ctx.r3.s64 = ctx.r11.s64 + -25184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF3F4"))) PPC_WEAK_FUNC(sub_83CCF3F4);
PPC_FUNC_IMPL(__imp__sub_83CCF3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF3F8"))) PPC_WEAK_FUNC(sub_83CCF3F8);
PPC_FUNC_IMPL(__imp__sub_83CCF3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25176
	ctx.r3.s64 = ctx.r11.s64 + -25176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF404"))) PPC_WEAK_FUNC(sub_83CCF404);
PPC_FUNC_IMPL(__imp__sub_83CCF404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF408"))) PPC_WEAK_FUNC(sub_83CCF408);
PPC_FUNC_IMPL(__imp__sub_83CCF408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25168
	ctx.r3.s64 = ctx.r11.s64 + -25168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF414"))) PPC_WEAK_FUNC(sub_83CCF414);
PPC_FUNC_IMPL(__imp__sub_83CCF414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF418"))) PPC_WEAK_FUNC(sub_83CCF418);
PPC_FUNC_IMPL(__imp__sub_83CCF418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25160
	ctx.r3.s64 = ctx.r11.s64 + -25160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF424"))) PPC_WEAK_FUNC(sub_83CCF424);
PPC_FUNC_IMPL(__imp__sub_83CCF424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF428"))) PPC_WEAK_FUNC(sub_83CCF428);
PPC_FUNC_IMPL(__imp__sub_83CCF428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25152
	ctx.r3.s64 = ctx.r11.s64 + -25152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

