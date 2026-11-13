#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CF0A44"))) PPC_WEAK_FUNC(sub_83CF0A44);
PPC_FUNC_IMPL(__imp__sub_83CF0A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0A48"))) PPC_WEAK_FUNC(sub_83CF0A48);
PPC_FUNC_IMPL(__imp__sub_83CF0A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20736
	ctx.r3.s64 = ctx.r11.s64 + 20736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0A54"))) PPC_WEAK_FUNC(sub_83CF0A54);
PPC_FUNC_IMPL(__imp__sub_83CF0A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0A58"))) PPC_WEAK_FUNC(sub_83CF0A58);
PPC_FUNC_IMPL(__imp__sub_83CF0A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20744
	ctx.r3.s64 = ctx.r11.s64 + 20744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0A64"))) PPC_WEAK_FUNC(sub_83CF0A64);
PPC_FUNC_IMPL(__imp__sub_83CF0A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0A68"))) PPC_WEAK_FUNC(sub_83CF0A68);
PPC_FUNC_IMPL(__imp__sub_83CF0A68) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-436
	ctx.r3.s64 = ctx.r11.s64 + -436;
	// bl 0x83523120
	ctx.lr = 0x83CF0A80;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,20752
	ctx.r3.s64 = ctx.r10.s64 + 20752;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF0A8C;
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

__attribute__((alias("__imp__sub_83CF0A9C"))) PPC_WEAK_FUNC(sub_83CF0A9C);
PPC_FUNC_IMPL(__imp__sub_83CF0A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0AA0"))) PPC_WEAK_FUNC(sub_83CF0AA0);
PPC_FUNC_IMPL(__imp__sub_83CF0AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20768
	ctx.r3.s64 = ctx.r11.s64 + 20768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0AAC"))) PPC_WEAK_FUNC(sub_83CF0AAC);
PPC_FUNC_IMPL(__imp__sub_83CF0AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0AB0"))) PPC_WEAK_FUNC(sub_83CF0AB0);
PPC_FUNC_IMPL(__imp__sub_83CF0AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20776
	ctx.r3.s64 = ctx.r11.s64 + 20776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0ABC"))) PPC_WEAK_FUNC(sub_83CF0ABC);
PPC_FUNC_IMPL(__imp__sub_83CF0ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0AC0"))) PPC_WEAK_FUNC(sub_83CF0AC0);
PPC_FUNC_IMPL(__imp__sub_83CF0AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20784
	ctx.r3.s64 = ctx.r11.s64 + 20784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0ACC"))) PPC_WEAK_FUNC(sub_83CF0ACC);
PPC_FUNC_IMPL(__imp__sub_83CF0ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0AD0"))) PPC_WEAK_FUNC(sub_83CF0AD0);
PPC_FUNC_IMPL(__imp__sub_83CF0AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20792
	ctx.r3.s64 = ctx.r11.s64 + 20792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0ADC"))) PPC_WEAK_FUNC(sub_83CF0ADC);
PPC_FUNC_IMPL(__imp__sub_83CF0ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0AE0"))) PPC_WEAK_FUNC(sub_83CF0AE0);
PPC_FUNC_IMPL(__imp__sub_83CF0AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20800
	ctx.r3.s64 = ctx.r11.s64 + 20800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0AEC"))) PPC_WEAK_FUNC(sub_83CF0AEC);
PPC_FUNC_IMPL(__imp__sub_83CF0AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0AF0"))) PPC_WEAK_FUNC(sub_83CF0AF0);
PPC_FUNC_IMPL(__imp__sub_83CF0AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20808
	ctx.r3.s64 = ctx.r11.s64 + 20808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0AFC"))) PPC_WEAK_FUNC(sub_83CF0AFC);
PPC_FUNC_IMPL(__imp__sub_83CF0AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0B00"))) PPC_WEAK_FUNC(sub_83CF0B00);
PPC_FUNC_IMPL(__imp__sub_83CF0B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20816
	ctx.r3.s64 = ctx.r11.s64 + 20816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0B0C"))) PPC_WEAK_FUNC(sub_83CF0B0C);
PPC_FUNC_IMPL(__imp__sub_83CF0B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0B10"))) PPC_WEAK_FUNC(sub_83CF0B10);
PPC_FUNC_IMPL(__imp__sub_83CF0B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20824
	ctx.r3.s64 = ctx.r11.s64 + 20824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0B1C"))) PPC_WEAK_FUNC(sub_83CF0B1C);
PPC_FUNC_IMPL(__imp__sub_83CF0B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0B20"))) PPC_WEAK_FUNC(sub_83CF0B20);
PPC_FUNC_IMPL(__imp__sub_83CF0B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20832
	ctx.r3.s64 = ctx.r11.s64 + 20832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0B2C"))) PPC_WEAK_FUNC(sub_83CF0B2C);
PPC_FUNC_IMPL(__imp__sub_83CF0B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0B30"))) PPC_WEAK_FUNC(sub_83CF0B30);
PPC_FUNC_IMPL(__imp__sub_83CF0B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20840
	ctx.r3.s64 = ctx.r11.s64 + 20840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0B3C"))) PPC_WEAK_FUNC(sub_83CF0B3C);
PPC_FUNC_IMPL(__imp__sub_83CF0B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0B40"))) PPC_WEAK_FUNC(sub_83CF0B40);
PPC_FUNC_IMPL(__imp__sub_83CF0B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20848
	ctx.r3.s64 = ctx.r11.s64 + 20848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0B4C"))) PPC_WEAK_FUNC(sub_83CF0B4C);
PPC_FUNC_IMPL(__imp__sub_83CF0B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0B50"))) PPC_WEAK_FUNC(sub_83CF0B50);
PPC_FUNC_IMPL(__imp__sub_83CF0B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20856
	ctx.r3.s64 = ctx.r11.s64 + 20856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0B5C"))) PPC_WEAK_FUNC(sub_83CF0B5C);
PPC_FUNC_IMPL(__imp__sub_83CF0B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0B60"))) PPC_WEAK_FUNC(sub_83CF0B60);
PPC_FUNC_IMPL(__imp__sub_83CF0B60) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-428
	ctx.r3.s64 = ctx.r11.s64 + -428;
	// bl 0x83523120
	ctx.lr = 0x83CF0B78;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,20864
	ctx.r3.s64 = ctx.r10.s64 + 20864;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF0B84;
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

__attribute__((alias("__imp__sub_83CF0B94"))) PPC_WEAK_FUNC(sub_83CF0B94);
PPC_FUNC_IMPL(__imp__sub_83CF0B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0B98"))) PPC_WEAK_FUNC(sub_83CF0B98);
PPC_FUNC_IMPL(__imp__sub_83CF0B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20880
	ctx.r3.s64 = ctx.r11.s64 + 20880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0BA4"))) PPC_WEAK_FUNC(sub_83CF0BA4);
PPC_FUNC_IMPL(__imp__sub_83CF0BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0BA8"))) PPC_WEAK_FUNC(sub_83CF0BA8);
PPC_FUNC_IMPL(__imp__sub_83CF0BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20888
	ctx.r3.s64 = ctx.r11.s64 + 20888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0BB4"))) PPC_WEAK_FUNC(sub_83CF0BB4);
PPC_FUNC_IMPL(__imp__sub_83CF0BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0BB8"))) PPC_WEAK_FUNC(sub_83CF0BB8);
PPC_FUNC_IMPL(__imp__sub_83CF0BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20896
	ctx.r3.s64 = ctx.r11.s64 + 20896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0BC4"))) PPC_WEAK_FUNC(sub_83CF0BC4);
PPC_FUNC_IMPL(__imp__sub_83CF0BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0BC8"))) PPC_WEAK_FUNC(sub_83CF0BC8);
PPC_FUNC_IMPL(__imp__sub_83CF0BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20904
	ctx.r3.s64 = ctx.r11.s64 + 20904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0BD4"))) PPC_WEAK_FUNC(sub_83CF0BD4);
PPC_FUNC_IMPL(__imp__sub_83CF0BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0BD8"))) PPC_WEAK_FUNC(sub_83CF0BD8);
PPC_FUNC_IMPL(__imp__sub_83CF0BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20912
	ctx.r3.s64 = ctx.r11.s64 + 20912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0BE4"))) PPC_WEAK_FUNC(sub_83CF0BE4);
PPC_FUNC_IMPL(__imp__sub_83CF0BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0BE8"))) PPC_WEAK_FUNC(sub_83CF0BE8);
PPC_FUNC_IMPL(__imp__sub_83CF0BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20920
	ctx.r3.s64 = ctx.r11.s64 + 20920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0BF4"))) PPC_WEAK_FUNC(sub_83CF0BF4);
PPC_FUNC_IMPL(__imp__sub_83CF0BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0BF8"))) PPC_WEAK_FUNC(sub_83CF0BF8);
PPC_FUNC_IMPL(__imp__sub_83CF0BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20928
	ctx.r3.s64 = ctx.r11.s64 + 20928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0C04"))) PPC_WEAK_FUNC(sub_83CF0C04);
PPC_FUNC_IMPL(__imp__sub_83CF0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0C08"))) PPC_WEAK_FUNC(sub_83CF0C08);
PPC_FUNC_IMPL(__imp__sub_83CF0C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20936
	ctx.r3.s64 = ctx.r11.s64 + 20936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0C14"))) PPC_WEAK_FUNC(sub_83CF0C14);
PPC_FUNC_IMPL(__imp__sub_83CF0C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0C18"))) PPC_WEAK_FUNC(sub_83CF0C18);
PPC_FUNC_IMPL(__imp__sub_83CF0C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20944
	ctx.r3.s64 = ctx.r11.s64 + 20944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0C24"))) PPC_WEAK_FUNC(sub_83CF0C24);
PPC_FUNC_IMPL(__imp__sub_83CF0C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0C28"))) PPC_WEAK_FUNC(sub_83CF0C28);
PPC_FUNC_IMPL(__imp__sub_83CF0C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20952
	ctx.r3.s64 = ctx.r11.s64 + 20952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0C34"))) PPC_WEAK_FUNC(sub_83CF0C34);
PPC_FUNC_IMPL(__imp__sub_83CF0C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0C38"))) PPC_WEAK_FUNC(sub_83CF0C38);
PPC_FUNC_IMPL(__imp__sub_83CF0C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20960
	ctx.r3.s64 = ctx.r11.s64 + 20960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0C44"))) PPC_WEAK_FUNC(sub_83CF0C44);
PPC_FUNC_IMPL(__imp__sub_83CF0C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0C48"))) PPC_WEAK_FUNC(sub_83CF0C48);
PPC_FUNC_IMPL(__imp__sub_83CF0C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20968
	ctx.r3.s64 = ctx.r11.s64 + 20968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0C54"))) PPC_WEAK_FUNC(sub_83CF0C54);
PPC_FUNC_IMPL(__imp__sub_83CF0C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0C58"))) PPC_WEAK_FUNC(sub_83CF0C58);
PPC_FUNC_IMPL(__imp__sub_83CF0C58) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-420
	ctx.r3.s64 = ctx.r11.s64 + -420;
	// bl 0x83523120
	ctx.lr = 0x83CF0C70;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,20976
	ctx.r3.s64 = ctx.r10.s64 + 20976;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF0C7C;
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

__attribute__((alias("__imp__sub_83CF0C8C"))) PPC_WEAK_FUNC(sub_83CF0C8C);
PPC_FUNC_IMPL(__imp__sub_83CF0C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0C90"))) PPC_WEAK_FUNC(sub_83CF0C90);
PPC_FUNC_IMPL(__imp__sub_83CF0C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20992
	ctx.r3.s64 = ctx.r11.s64 + 20992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0C9C"))) PPC_WEAK_FUNC(sub_83CF0C9C);
PPC_FUNC_IMPL(__imp__sub_83CF0C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0CA0"))) PPC_WEAK_FUNC(sub_83CF0CA0);
PPC_FUNC_IMPL(__imp__sub_83CF0CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21000
	ctx.r3.s64 = ctx.r11.s64 + 21000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0CAC"))) PPC_WEAK_FUNC(sub_83CF0CAC);
PPC_FUNC_IMPL(__imp__sub_83CF0CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0CB0"))) PPC_WEAK_FUNC(sub_83CF0CB0);
PPC_FUNC_IMPL(__imp__sub_83CF0CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21008
	ctx.r3.s64 = ctx.r11.s64 + 21008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0CBC"))) PPC_WEAK_FUNC(sub_83CF0CBC);
PPC_FUNC_IMPL(__imp__sub_83CF0CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0CC0"))) PPC_WEAK_FUNC(sub_83CF0CC0);
PPC_FUNC_IMPL(__imp__sub_83CF0CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21016
	ctx.r3.s64 = ctx.r11.s64 + 21016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0CCC"))) PPC_WEAK_FUNC(sub_83CF0CCC);
PPC_FUNC_IMPL(__imp__sub_83CF0CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0CD0"))) PPC_WEAK_FUNC(sub_83CF0CD0);
PPC_FUNC_IMPL(__imp__sub_83CF0CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21024
	ctx.r3.s64 = ctx.r11.s64 + 21024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0CDC"))) PPC_WEAK_FUNC(sub_83CF0CDC);
PPC_FUNC_IMPL(__imp__sub_83CF0CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0CE0"))) PPC_WEAK_FUNC(sub_83CF0CE0);
PPC_FUNC_IMPL(__imp__sub_83CF0CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21032
	ctx.r3.s64 = ctx.r11.s64 + 21032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0CEC"))) PPC_WEAK_FUNC(sub_83CF0CEC);
PPC_FUNC_IMPL(__imp__sub_83CF0CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0CF0"))) PPC_WEAK_FUNC(sub_83CF0CF0);
PPC_FUNC_IMPL(__imp__sub_83CF0CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21040
	ctx.r3.s64 = ctx.r11.s64 + 21040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0CFC"))) PPC_WEAK_FUNC(sub_83CF0CFC);
PPC_FUNC_IMPL(__imp__sub_83CF0CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0D00"))) PPC_WEAK_FUNC(sub_83CF0D00);
PPC_FUNC_IMPL(__imp__sub_83CF0D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21048
	ctx.r3.s64 = ctx.r11.s64 + 21048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0D0C"))) PPC_WEAK_FUNC(sub_83CF0D0C);
PPC_FUNC_IMPL(__imp__sub_83CF0D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0D10"))) PPC_WEAK_FUNC(sub_83CF0D10);
PPC_FUNC_IMPL(__imp__sub_83CF0D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21056
	ctx.r3.s64 = ctx.r11.s64 + 21056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0D1C"))) PPC_WEAK_FUNC(sub_83CF0D1C);
PPC_FUNC_IMPL(__imp__sub_83CF0D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0D20"))) PPC_WEAK_FUNC(sub_83CF0D20);
PPC_FUNC_IMPL(__imp__sub_83CF0D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21064
	ctx.r3.s64 = ctx.r11.s64 + 21064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0D2C"))) PPC_WEAK_FUNC(sub_83CF0D2C);
PPC_FUNC_IMPL(__imp__sub_83CF0D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0D30"))) PPC_WEAK_FUNC(sub_83CF0D30);
PPC_FUNC_IMPL(__imp__sub_83CF0D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21072
	ctx.r3.s64 = ctx.r11.s64 + 21072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0D3C"))) PPC_WEAK_FUNC(sub_83CF0D3C);
PPC_FUNC_IMPL(__imp__sub_83CF0D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0D40"))) PPC_WEAK_FUNC(sub_83CF0D40);
PPC_FUNC_IMPL(__imp__sub_83CF0D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21080
	ctx.r3.s64 = ctx.r11.s64 + 21080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0D4C"))) PPC_WEAK_FUNC(sub_83CF0D4C);
PPC_FUNC_IMPL(__imp__sub_83CF0D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0D50"))) PPC_WEAK_FUNC(sub_83CF0D50);
PPC_FUNC_IMPL(__imp__sub_83CF0D50) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-412
	ctx.r3.s64 = ctx.r11.s64 + -412;
	// bl 0x83523120
	ctx.lr = 0x83CF0D68;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,21088
	ctx.r3.s64 = ctx.r10.s64 + 21088;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF0D74;
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

__attribute__((alias("__imp__sub_83CF0D84"))) PPC_WEAK_FUNC(sub_83CF0D84);
PPC_FUNC_IMPL(__imp__sub_83CF0D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0D88"))) PPC_WEAK_FUNC(sub_83CF0D88);
PPC_FUNC_IMPL(__imp__sub_83CF0D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21104
	ctx.r3.s64 = ctx.r11.s64 + 21104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0D94"))) PPC_WEAK_FUNC(sub_83CF0D94);
PPC_FUNC_IMPL(__imp__sub_83CF0D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0D98"))) PPC_WEAK_FUNC(sub_83CF0D98);
PPC_FUNC_IMPL(__imp__sub_83CF0D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21112
	ctx.r3.s64 = ctx.r11.s64 + 21112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0DA4"))) PPC_WEAK_FUNC(sub_83CF0DA4);
PPC_FUNC_IMPL(__imp__sub_83CF0DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0DA8"))) PPC_WEAK_FUNC(sub_83CF0DA8);
PPC_FUNC_IMPL(__imp__sub_83CF0DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21120
	ctx.r3.s64 = ctx.r11.s64 + 21120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0DB4"))) PPC_WEAK_FUNC(sub_83CF0DB4);
PPC_FUNC_IMPL(__imp__sub_83CF0DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0DB8"))) PPC_WEAK_FUNC(sub_83CF0DB8);
PPC_FUNC_IMPL(__imp__sub_83CF0DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21128
	ctx.r3.s64 = ctx.r11.s64 + 21128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0DC4"))) PPC_WEAK_FUNC(sub_83CF0DC4);
PPC_FUNC_IMPL(__imp__sub_83CF0DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0DC8"))) PPC_WEAK_FUNC(sub_83CF0DC8);
PPC_FUNC_IMPL(__imp__sub_83CF0DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21136
	ctx.r3.s64 = ctx.r11.s64 + 21136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0DD4"))) PPC_WEAK_FUNC(sub_83CF0DD4);
PPC_FUNC_IMPL(__imp__sub_83CF0DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0DD8"))) PPC_WEAK_FUNC(sub_83CF0DD8);
PPC_FUNC_IMPL(__imp__sub_83CF0DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21144
	ctx.r3.s64 = ctx.r11.s64 + 21144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0DE4"))) PPC_WEAK_FUNC(sub_83CF0DE4);
PPC_FUNC_IMPL(__imp__sub_83CF0DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0DE8"))) PPC_WEAK_FUNC(sub_83CF0DE8);
PPC_FUNC_IMPL(__imp__sub_83CF0DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21152
	ctx.r3.s64 = ctx.r11.s64 + 21152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0DF4"))) PPC_WEAK_FUNC(sub_83CF0DF4);
PPC_FUNC_IMPL(__imp__sub_83CF0DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0DF8"))) PPC_WEAK_FUNC(sub_83CF0DF8);
PPC_FUNC_IMPL(__imp__sub_83CF0DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21160
	ctx.r3.s64 = ctx.r11.s64 + 21160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0E04"))) PPC_WEAK_FUNC(sub_83CF0E04);
PPC_FUNC_IMPL(__imp__sub_83CF0E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0E08"))) PPC_WEAK_FUNC(sub_83CF0E08);
PPC_FUNC_IMPL(__imp__sub_83CF0E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21168
	ctx.r3.s64 = ctx.r11.s64 + 21168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0E14"))) PPC_WEAK_FUNC(sub_83CF0E14);
PPC_FUNC_IMPL(__imp__sub_83CF0E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0E18"))) PPC_WEAK_FUNC(sub_83CF0E18);
PPC_FUNC_IMPL(__imp__sub_83CF0E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21176
	ctx.r3.s64 = ctx.r11.s64 + 21176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0E24"))) PPC_WEAK_FUNC(sub_83CF0E24);
PPC_FUNC_IMPL(__imp__sub_83CF0E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0E28"))) PPC_WEAK_FUNC(sub_83CF0E28);
PPC_FUNC_IMPL(__imp__sub_83CF0E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21184
	ctx.r3.s64 = ctx.r11.s64 + 21184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0E34"))) PPC_WEAK_FUNC(sub_83CF0E34);
PPC_FUNC_IMPL(__imp__sub_83CF0E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0E38"))) PPC_WEAK_FUNC(sub_83CF0E38);
PPC_FUNC_IMPL(__imp__sub_83CF0E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21192
	ctx.r3.s64 = ctx.r11.s64 + 21192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0E44"))) PPC_WEAK_FUNC(sub_83CF0E44);
PPC_FUNC_IMPL(__imp__sub_83CF0E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0E48"))) PPC_WEAK_FUNC(sub_83CF0E48);
PPC_FUNC_IMPL(__imp__sub_83CF0E48) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-404
	ctx.r3.s64 = ctx.r11.s64 + -404;
	// bl 0x83523120
	ctx.lr = 0x83CF0E60;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,21200
	ctx.r3.s64 = ctx.r10.s64 + 21200;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF0E6C;
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

__attribute__((alias("__imp__sub_83CF0E7C"))) PPC_WEAK_FUNC(sub_83CF0E7C);
PPC_FUNC_IMPL(__imp__sub_83CF0E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0E80"))) PPC_WEAK_FUNC(sub_83CF0E80);
PPC_FUNC_IMPL(__imp__sub_83CF0E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21216
	ctx.r3.s64 = ctx.r11.s64 + 21216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0E8C"))) PPC_WEAK_FUNC(sub_83CF0E8C);
PPC_FUNC_IMPL(__imp__sub_83CF0E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0E90"))) PPC_WEAK_FUNC(sub_83CF0E90);
PPC_FUNC_IMPL(__imp__sub_83CF0E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21224
	ctx.r3.s64 = ctx.r11.s64 + 21224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0E9C"))) PPC_WEAK_FUNC(sub_83CF0E9C);
PPC_FUNC_IMPL(__imp__sub_83CF0E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0EA0"))) PPC_WEAK_FUNC(sub_83CF0EA0);
PPC_FUNC_IMPL(__imp__sub_83CF0EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21232
	ctx.r3.s64 = ctx.r11.s64 + 21232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0EAC"))) PPC_WEAK_FUNC(sub_83CF0EAC);
PPC_FUNC_IMPL(__imp__sub_83CF0EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0EB0"))) PPC_WEAK_FUNC(sub_83CF0EB0);
PPC_FUNC_IMPL(__imp__sub_83CF0EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21240
	ctx.r3.s64 = ctx.r11.s64 + 21240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0EBC"))) PPC_WEAK_FUNC(sub_83CF0EBC);
PPC_FUNC_IMPL(__imp__sub_83CF0EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0EC0"))) PPC_WEAK_FUNC(sub_83CF0EC0);
PPC_FUNC_IMPL(__imp__sub_83CF0EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21248
	ctx.r3.s64 = ctx.r11.s64 + 21248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0ECC"))) PPC_WEAK_FUNC(sub_83CF0ECC);
PPC_FUNC_IMPL(__imp__sub_83CF0ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0ED0"))) PPC_WEAK_FUNC(sub_83CF0ED0);
PPC_FUNC_IMPL(__imp__sub_83CF0ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21256
	ctx.r3.s64 = ctx.r11.s64 + 21256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0EDC"))) PPC_WEAK_FUNC(sub_83CF0EDC);
PPC_FUNC_IMPL(__imp__sub_83CF0EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0EE0"))) PPC_WEAK_FUNC(sub_83CF0EE0);
PPC_FUNC_IMPL(__imp__sub_83CF0EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21264
	ctx.r3.s64 = ctx.r11.s64 + 21264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0EEC"))) PPC_WEAK_FUNC(sub_83CF0EEC);
PPC_FUNC_IMPL(__imp__sub_83CF0EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0EF0"))) PPC_WEAK_FUNC(sub_83CF0EF0);
PPC_FUNC_IMPL(__imp__sub_83CF0EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21272
	ctx.r3.s64 = ctx.r11.s64 + 21272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0EFC"))) PPC_WEAK_FUNC(sub_83CF0EFC);
PPC_FUNC_IMPL(__imp__sub_83CF0EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0F00"))) PPC_WEAK_FUNC(sub_83CF0F00);
PPC_FUNC_IMPL(__imp__sub_83CF0F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21280
	ctx.r3.s64 = ctx.r11.s64 + 21280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0F0C"))) PPC_WEAK_FUNC(sub_83CF0F0C);
PPC_FUNC_IMPL(__imp__sub_83CF0F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0F10"))) PPC_WEAK_FUNC(sub_83CF0F10);
PPC_FUNC_IMPL(__imp__sub_83CF0F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21288
	ctx.r3.s64 = ctx.r11.s64 + 21288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0F1C"))) PPC_WEAK_FUNC(sub_83CF0F1C);
PPC_FUNC_IMPL(__imp__sub_83CF0F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0F20"))) PPC_WEAK_FUNC(sub_83CF0F20);
PPC_FUNC_IMPL(__imp__sub_83CF0F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21296
	ctx.r3.s64 = ctx.r11.s64 + 21296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0F2C"))) PPC_WEAK_FUNC(sub_83CF0F2C);
PPC_FUNC_IMPL(__imp__sub_83CF0F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0F30"))) PPC_WEAK_FUNC(sub_83CF0F30);
PPC_FUNC_IMPL(__imp__sub_83CF0F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21304
	ctx.r3.s64 = ctx.r11.s64 + 21304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0F3C"))) PPC_WEAK_FUNC(sub_83CF0F3C);
PPC_FUNC_IMPL(__imp__sub_83CF0F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0F40"))) PPC_WEAK_FUNC(sub_83CF0F40);
PPC_FUNC_IMPL(__imp__sub_83CF0F40) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-396
	ctx.r3.s64 = ctx.r11.s64 + -396;
	// bl 0x83523120
	ctx.lr = 0x83CF0F58;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,21312
	ctx.r3.s64 = ctx.r10.s64 + 21312;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF0F64;
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

__attribute__((alias("__imp__sub_83CF0F74"))) PPC_WEAK_FUNC(sub_83CF0F74);
PPC_FUNC_IMPL(__imp__sub_83CF0F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0F78"))) PPC_WEAK_FUNC(sub_83CF0F78);
PPC_FUNC_IMPL(__imp__sub_83CF0F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21328
	ctx.r3.s64 = ctx.r11.s64 + 21328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0F84"))) PPC_WEAK_FUNC(sub_83CF0F84);
PPC_FUNC_IMPL(__imp__sub_83CF0F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0F88"))) PPC_WEAK_FUNC(sub_83CF0F88);
PPC_FUNC_IMPL(__imp__sub_83CF0F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21336
	ctx.r3.s64 = ctx.r11.s64 + 21336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0F94"))) PPC_WEAK_FUNC(sub_83CF0F94);
PPC_FUNC_IMPL(__imp__sub_83CF0F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0F98"))) PPC_WEAK_FUNC(sub_83CF0F98);
PPC_FUNC_IMPL(__imp__sub_83CF0F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0FA4"))) PPC_WEAK_FUNC(sub_83CF0FA4);
PPC_FUNC_IMPL(__imp__sub_83CF0FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0FA8"))) PPC_WEAK_FUNC(sub_83CF0FA8);
PPC_FUNC_IMPL(__imp__sub_83CF0FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21352
	ctx.r3.s64 = ctx.r11.s64 + 21352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0FB4"))) PPC_WEAK_FUNC(sub_83CF0FB4);
PPC_FUNC_IMPL(__imp__sub_83CF0FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0FB8"))) PPC_WEAK_FUNC(sub_83CF0FB8);
PPC_FUNC_IMPL(__imp__sub_83CF0FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21360
	ctx.r3.s64 = ctx.r11.s64 + 21360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0FC4"))) PPC_WEAK_FUNC(sub_83CF0FC4);
PPC_FUNC_IMPL(__imp__sub_83CF0FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0FC8"))) PPC_WEAK_FUNC(sub_83CF0FC8);
PPC_FUNC_IMPL(__imp__sub_83CF0FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21368
	ctx.r3.s64 = ctx.r11.s64 + 21368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0FD4"))) PPC_WEAK_FUNC(sub_83CF0FD4);
PPC_FUNC_IMPL(__imp__sub_83CF0FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0FD8"))) PPC_WEAK_FUNC(sub_83CF0FD8);
PPC_FUNC_IMPL(__imp__sub_83CF0FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21376
	ctx.r3.s64 = ctx.r11.s64 + 21376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0FE4"))) PPC_WEAK_FUNC(sub_83CF0FE4);
PPC_FUNC_IMPL(__imp__sub_83CF0FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0FE8"))) PPC_WEAK_FUNC(sub_83CF0FE8);
PPC_FUNC_IMPL(__imp__sub_83CF0FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21384
	ctx.r3.s64 = ctx.r11.s64 + 21384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0FF4"))) PPC_WEAK_FUNC(sub_83CF0FF4);
PPC_FUNC_IMPL(__imp__sub_83CF0FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0FF8"))) PPC_WEAK_FUNC(sub_83CF0FF8);
PPC_FUNC_IMPL(__imp__sub_83CF0FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21392
	ctx.r3.s64 = ctx.r11.s64 + 21392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1004"))) PPC_WEAK_FUNC(sub_83CF1004);
PPC_FUNC_IMPL(__imp__sub_83CF1004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1008"))) PPC_WEAK_FUNC(sub_83CF1008);
PPC_FUNC_IMPL(__imp__sub_83CF1008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21400
	ctx.r3.s64 = ctx.r11.s64 + 21400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1014"))) PPC_WEAK_FUNC(sub_83CF1014);
PPC_FUNC_IMPL(__imp__sub_83CF1014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1018"))) PPC_WEAK_FUNC(sub_83CF1018);
PPC_FUNC_IMPL(__imp__sub_83CF1018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21408
	ctx.r3.s64 = ctx.r11.s64 + 21408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1024"))) PPC_WEAK_FUNC(sub_83CF1024);
PPC_FUNC_IMPL(__imp__sub_83CF1024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1028"))) PPC_WEAK_FUNC(sub_83CF1028);
PPC_FUNC_IMPL(__imp__sub_83CF1028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21416
	ctx.r3.s64 = ctx.r11.s64 + 21416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1034"))) PPC_WEAK_FUNC(sub_83CF1034);
PPC_FUNC_IMPL(__imp__sub_83CF1034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1038"))) PPC_WEAK_FUNC(sub_83CF1038);
PPC_FUNC_IMPL(__imp__sub_83CF1038) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31738
	ctx.r8.s64 = -2079981568;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-384
	ctx.r7.s64 = ctx.r8.s64 + -384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -384);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-384(r8)
	PPC_STORE_U32(ctx.r8.u32 + -384, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF1060"))) PPC_WEAK_FUNC(sub_83CF1060);
PPC_FUNC_IMPL(__imp__sub_83CF1060) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-388
	ctx.r3.s64 = ctx.r11.s64 + -388;
	// bl 0x83523120
	ctx.lr = 0x83CF1078;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,21424
	ctx.r3.s64 = ctx.r10.s64 + 21424;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF1084;
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

__attribute__((alias("__imp__sub_83CF1094"))) PPC_WEAK_FUNC(sub_83CF1094);
PPC_FUNC_IMPL(__imp__sub_83CF1094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1098"))) PPC_WEAK_FUNC(sub_83CF1098);
PPC_FUNC_IMPL(__imp__sub_83CF1098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21440
	ctx.r3.s64 = ctx.r11.s64 + 21440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF10A4"))) PPC_WEAK_FUNC(sub_83CF10A4);
PPC_FUNC_IMPL(__imp__sub_83CF10A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF10A8"))) PPC_WEAK_FUNC(sub_83CF10A8);
PPC_FUNC_IMPL(__imp__sub_83CF10A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21448
	ctx.r3.s64 = ctx.r11.s64 + 21448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF10B4"))) PPC_WEAK_FUNC(sub_83CF10B4);
PPC_FUNC_IMPL(__imp__sub_83CF10B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF10B8"))) PPC_WEAK_FUNC(sub_83CF10B8);
PPC_FUNC_IMPL(__imp__sub_83CF10B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21456
	ctx.r3.s64 = ctx.r11.s64 + 21456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF10C4"))) PPC_WEAK_FUNC(sub_83CF10C4);
PPC_FUNC_IMPL(__imp__sub_83CF10C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF10C8"))) PPC_WEAK_FUNC(sub_83CF10C8);
PPC_FUNC_IMPL(__imp__sub_83CF10C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21464
	ctx.r3.s64 = ctx.r11.s64 + 21464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF10D4"))) PPC_WEAK_FUNC(sub_83CF10D4);
PPC_FUNC_IMPL(__imp__sub_83CF10D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF10D8"))) PPC_WEAK_FUNC(sub_83CF10D8);
PPC_FUNC_IMPL(__imp__sub_83CF10D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21472
	ctx.r3.s64 = ctx.r11.s64 + 21472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF10E4"))) PPC_WEAK_FUNC(sub_83CF10E4);
PPC_FUNC_IMPL(__imp__sub_83CF10E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF10E8"))) PPC_WEAK_FUNC(sub_83CF10E8);
PPC_FUNC_IMPL(__imp__sub_83CF10E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21480
	ctx.r3.s64 = ctx.r11.s64 + 21480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF10F4"))) PPC_WEAK_FUNC(sub_83CF10F4);
PPC_FUNC_IMPL(__imp__sub_83CF10F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF10F8"))) PPC_WEAK_FUNC(sub_83CF10F8);
PPC_FUNC_IMPL(__imp__sub_83CF10F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21488
	ctx.r3.s64 = ctx.r11.s64 + 21488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1104"))) PPC_WEAK_FUNC(sub_83CF1104);
PPC_FUNC_IMPL(__imp__sub_83CF1104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1108"))) PPC_WEAK_FUNC(sub_83CF1108);
PPC_FUNC_IMPL(__imp__sub_83CF1108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21496
	ctx.r3.s64 = ctx.r11.s64 + 21496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1114"))) PPC_WEAK_FUNC(sub_83CF1114);
PPC_FUNC_IMPL(__imp__sub_83CF1114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1118"))) PPC_WEAK_FUNC(sub_83CF1118);
PPC_FUNC_IMPL(__imp__sub_83CF1118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21504
	ctx.r3.s64 = ctx.r11.s64 + 21504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1124"))) PPC_WEAK_FUNC(sub_83CF1124);
PPC_FUNC_IMPL(__imp__sub_83CF1124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1128"))) PPC_WEAK_FUNC(sub_83CF1128);
PPC_FUNC_IMPL(__imp__sub_83CF1128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21512
	ctx.r3.s64 = ctx.r11.s64 + 21512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1134"))) PPC_WEAK_FUNC(sub_83CF1134);
PPC_FUNC_IMPL(__imp__sub_83CF1134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1138"))) PPC_WEAK_FUNC(sub_83CF1138);
PPC_FUNC_IMPL(__imp__sub_83CF1138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21520
	ctx.r3.s64 = ctx.r11.s64 + 21520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1144"))) PPC_WEAK_FUNC(sub_83CF1144);
PPC_FUNC_IMPL(__imp__sub_83CF1144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1148"))) PPC_WEAK_FUNC(sub_83CF1148);
PPC_FUNC_IMPL(__imp__sub_83CF1148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,21528
	ctx.r3.s64 = ctx.r11.s64 + 21528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1154"))) PPC_WEAK_FUNC(sub_83CF1154);
PPC_FUNC_IMPL(__imp__sub_83CF1154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1158"))) PPC_WEAK_FUNC(sub_83CF1158);
PPC_FUNC_IMPL(__imp__sub_83CF1158) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31738
	ctx.r8.s64 = -2079981568;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-372
	ctx.r7.s64 = ctx.r8.s64 + -372;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-372(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -372);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-372(r8)
	PPC_STORE_U32(ctx.r8.u32 + -372, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF1180"))) PPC_WEAK_FUNC(sub_83CF1180);
PPC_FUNC_IMPL(__imp__sub_83CF1180) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-376
	ctx.r3.s64 = ctx.r11.s64 + -376;
	// bl 0x83523120
	ctx.lr = 0x83CF1198;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,21536
	ctx.r3.s64 = ctx.r10.s64 + 21536;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF11A4;
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

__attribute__((alias("__imp__sub_83CF11B4"))) PPC_WEAK_FUNC(sub_83CF11B4);
PPC_FUNC_IMPL(__imp__sub_83CF11B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF11B8"))) PPC_WEAK_FUNC(sub_83CF11B8);
PPC_FUNC_IMPL(__imp__sub_83CF11B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF11BC"))) PPC_WEAK_FUNC(sub_83CF11BC);
PPC_FUNC_IMPL(__imp__sub_83CF11BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF11C0"))) PPC_WEAK_FUNC(sub_83CF11C0);
PPC_FUNC_IMPL(__imp__sub_83CF11C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF11C4"))) PPC_WEAK_FUNC(sub_83CF11C4);
PPC_FUNC_IMPL(__imp__sub_83CF11C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF11C8"))) PPC_WEAK_FUNC(sub_83CF11C8);
PPC_FUNC_IMPL(__imp__sub_83CF11C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF11CC"))) PPC_WEAK_FUNC(sub_83CF11CC);
PPC_FUNC_IMPL(__imp__sub_83CF11CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF11D0"))) PPC_WEAK_FUNC(sub_83CF11D0);
PPC_FUNC_IMPL(__imp__sub_83CF11D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF11D4"))) PPC_WEAK_FUNC(sub_83CF11D4);
PPC_FUNC_IMPL(__imp__sub_83CF11D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF11D8"))) PPC_WEAK_FUNC(sub_83CF11D8);
PPC_FUNC_IMPL(__imp__sub_83CF11D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF11DC"))) PPC_WEAK_FUNC(sub_83CF11DC);
PPC_FUNC_IMPL(__imp__sub_83CF11DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF11E0"))) PPC_WEAK_FUNC(sub_83CF11E0);
PPC_FUNC_IMPL(__imp__sub_83CF11E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF11E4"))) PPC_WEAK_FUNC(sub_83CF11E4);
PPC_FUNC_IMPL(__imp__sub_83CF11E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF11E8"))) PPC_WEAK_FUNC(sub_83CF11E8);
PPC_FUNC_IMPL(__imp__sub_83CF11E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF11EC"))) PPC_WEAK_FUNC(sub_83CF11EC);
PPC_FUNC_IMPL(__imp__sub_83CF11EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF11F0"))) PPC_WEAK_FUNC(sub_83CF11F0);
PPC_FUNC_IMPL(__imp__sub_83CF11F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF11F4"))) PPC_WEAK_FUNC(sub_83CF11F4);
PPC_FUNC_IMPL(__imp__sub_83CF11F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF11F8"))) PPC_WEAK_FUNC(sub_83CF11F8);
PPC_FUNC_IMPL(__imp__sub_83CF11F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF11FC"))) PPC_WEAK_FUNC(sub_83CF11FC);
PPC_FUNC_IMPL(__imp__sub_83CF11FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1200"))) PPC_WEAK_FUNC(sub_83CF1200);
PPC_FUNC_IMPL(__imp__sub_83CF1200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF1204"))) PPC_WEAK_FUNC(sub_83CF1204);
PPC_FUNC_IMPL(__imp__sub_83CF1204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1208"))) PPC_WEAK_FUNC(sub_83CF1208);
PPC_FUNC_IMPL(__imp__sub_83CF1208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF120C"))) PPC_WEAK_FUNC(sub_83CF120C);
PPC_FUNC_IMPL(__imp__sub_83CF120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1210"))) PPC_WEAK_FUNC(sub_83CF1210);
PPC_FUNC_IMPL(__imp__sub_83CF1210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF1214"))) PPC_WEAK_FUNC(sub_83CF1214);
PPC_FUNC_IMPL(__imp__sub_83CF1214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1218"))) PPC_WEAK_FUNC(sub_83CF1218);
PPC_FUNC_IMPL(__imp__sub_83CF1218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r31,r11,656
	ctx.r31.s64 = ctx.r11.s64 + 656;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83cf1250
	if (cr6.eq) goto loc_83CF1250;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83CF1248;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83CF1250:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF1264"))) PPC_WEAK_FUNC(sub_83CF1264);
PPC_FUNC_IMPL(__imp__sub_83CF1264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1268"))) PPC_WEAK_FUNC(sub_83CF1268);
PPC_FUNC_IMPL(__imp__sub_83CF1268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,680
	ctx.r3.s64 = ctx.r11.s64 + 680;
	// b 0x8241fb00
	sub_8241FB00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1274"))) PPC_WEAK_FUNC(sub_83CF1274);
PPC_FUNC_IMPL(__imp__sub_83CF1274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1278"))) PPC_WEAK_FUNC(sub_83CF1278);
PPC_FUNC_IMPL(__imp__sub_83CF1278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,704
	ctx.r31.s64 = ctx.r11.s64 + 704;
	// addi r11,r10,11904
	ctx.r11.s64 = ctx.r10.s64 + 11904;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82450538
	ctx.lr = 0x83CF12A4;
	sub_82450538(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82421940
	ctx.lr = 0x83CF12AC;
	sub_82421940(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83cf12cc
	if (cr6.eq) goto loc_83CF12CC;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83CF12C4;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_83CF12CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF12E0"))) PPC_WEAK_FUNC(sub_83CF12E0);
PPC_FUNC_IMPL(__imp__sub_83CF12E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,920
	ctx.r3.s64 = ctx.r11.s64 + 920;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF12EC"))) PPC_WEAK_FUNC(sub_83CF12EC);
PPC_FUNC_IMPL(__imp__sub_83CF12EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF12F0"))) PPC_WEAK_FUNC(sub_83CF12F0);
PPC_FUNC_IMPL(__imp__sub_83CF12F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,792
	ctx.r3.s64 = ctx.r11.s64 + 792;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF12FC"))) PPC_WEAK_FUNC(sub_83CF12FC);
PPC_FUNC_IMPL(__imp__sub_83CF12FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1300"))) PPC_WEAK_FUNC(sub_83CF1300);
PPC_FUNC_IMPL(__imp__sub_83CF1300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,904
	ctx.r3.s64 = ctx.r11.s64 + 904;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF130C"))) PPC_WEAK_FUNC(sub_83CF130C);
PPC_FUNC_IMPL(__imp__sub_83CF130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1310"))) PPC_WEAK_FUNC(sub_83CF1310);
PPC_FUNC_IMPL(__imp__sub_83CF1310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,840
	ctx.r3.s64 = ctx.r11.s64 + 840;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF131C"))) PPC_WEAK_FUNC(sub_83CF131C);
PPC_FUNC_IMPL(__imp__sub_83CF131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1320"))) PPC_WEAK_FUNC(sub_83CF1320);
PPC_FUNC_IMPL(__imp__sub_83CF1320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF132C"))) PPC_WEAK_FUNC(sub_83CF132C);
PPC_FUNC_IMPL(__imp__sub_83CF132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1330"))) PPC_WEAK_FUNC(sub_83CF1330);
PPC_FUNC_IMPL(__imp__sub_83CF1330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,808
	ctx.r3.s64 = ctx.r11.s64 + 808;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF133C"))) PPC_WEAK_FUNC(sub_83CF133C);
PPC_FUNC_IMPL(__imp__sub_83CF133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1340"))) PPC_WEAK_FUNC(sub_83CF1340);
PPC_FUNC_IMPL(__imp__sub_83CF1340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,856
	ctx.r3.s64 = ctx.r11.s64 + 856;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF134C"))) PPC_WEAK_FUNC(sub_83CF134C);
PPC_FUNC_IMPL(__imp__sub_83CF134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1350"))) PPC_WEAK_FUNC(sub_83CF1350);
PPC_FUNC_IMPL(__imp__sub_83CF1350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,888
	ctx.r3.s64 = ctx.r11.s64 + 888;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF135C"))) PPC_WEAK_FUNC(sub_83CF135C);
PPC_FUNC_IMPL(__imp__sub_83CF135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1360"))) PPC_WEAK_FUNC(sub_83CF1360);
PPC_FUNC_IMPL(__imp__sub_83CF1360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,936
	ctx.r3.s64 = ctx.r11.s64 + 936;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF136C"))) PPC_WEAK_FUNC(sub_83CF136C);
PPC_FUNC_IMPL(__imp__sub_83CF136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1370"))) PPC_WEAK_FUNC(sub_83CF1370);
PPC_FUNC_IMPL(__imp__sub_83CF1370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,872
	ctx.r3.s64 = ctx.r11.s64 + 872;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF137C"))) PPC_WEAK_FUNC(sub_83CF137C);
PPC_FUNC_IMPL(__imp__sub_83CF137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1380"))) PPC_WEAK_FUNC(sub_83CF1380);
PPC_FUNC_IMPL(__imp__sub_83CF1380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,1224
	ctx.r3.s64 = ctx.r11.s64 + 1224;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF138C"))) PPC_WEAK_FUNC(sub_83CF138C);
PPC_FUNC_IMPL(__imp__sub_83CF138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1390"))) PPC_WEAK_FUNC(sub_83CF1390);
PPC_FUNC_IMPL(__imp__sub_83CF1390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,1240
	ctx.r3.s64 = ctx.r11.s64 + 1240;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF139C"))) PPC_WEAK_FUNC(sub_83CF139C);
PPC_FUNC_IMPL(__imp__sub_83CF139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF13A0"))) PPC_WEAK_FUNC(sub_83CF13A0);
PPC_FUNC_IMPL(__imp__sub_83CF13A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,960
	ctx.r3.s64 = ctx.r11.s64 + 960;
	// b 0x82572fa0
	sub_82572FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF13B0"))) PPC_WEAK_FUNC(sub_83CF13B0);
PPC_FUNC_IMPL(__imp__sub_83CF13B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,976
	ctx.r3.s64 = ctx.r11.s64 + 976;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF13BC"))) PPC_WEAK_FUNC(sub_83CF13BC);
PPC_FUNC_IMPL(__imp__sub_83CF13BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF13C0"))) PPC_WEAK_FUNC(sub_83CF13C0);
PPC_FUNC_IMPL(__imp__sub_83CF13C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,1504
	ctx.r3.s64 = ctx.r11.s64 + 1504;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF13CC"))) PPC_WEAK_FUNC(sub_83CF13CC);
PPC_FUNC_IMPL(__imp__sub_83CF13CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF13D0"))) PPC_WEAK_FUNC(sub_83CF13D0);
PPC_FUNC_IMPL(__imp__sub_83CF13D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,1456
	ctx.r3.s64 = ctx.r11.s64 + 1456;
	// b 0x83b3f898
	sub_83B3F898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF13DC"))) PPC_WEAK_FUNC(sub_83CF13DC);
PPC_FUNC_IMPL(__imp__sub_83CF13DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF13E0"))) PPC_WEAK_FUNC(sub_83CF13E0);
PPC_FUNC_IMPL(__imp__sub_83CF13E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,1328
	ctx.r3.s64 = ctx.r11.s64 + 1328;
	// b 0x83b3f898
	sub_83B3F898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF13EC"))) PPC_WEAK_FUNC(sub_83CF13EC);
PPC_FUNC_IMPL(__imp__sub_83CF13EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF13F0"))) PPC_WEAK_FUNC(sub_83CF13F0);
PPC_FUNC_IMPL(__imp__sub_83CF13F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,1264
	ctx.r3.s64 = ctx.r11.s64 + 1264;
	// b 0x83b3f898
	sub_83B3F898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF13FC"))) PPC_WEAK_FUNC(sub_83CF13FC);
PPC_FUNC_IMPL(__imp__sub_83CF13FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1400"))) PPC_WEAK_FUNC(sub_83CF1400);
PPC_FUNC_IMPL(__imp__sub_83CF1400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r3,r11,3488
	ctx.r3.s64 = ctx.r11.s64 + 3488;
	// b 0x83328188
	sub_83328188(ctx, base);
	return;
}

