#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C0B168"))) PPC_WEAK_FUNC(sub_83C0B168);
PPC_FUNC_IMPL(__imp__sub_83C0B168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24688
	ctx.r3.s64 = ctx.r11.s64 + 24688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B174"))) PPC_WEAK_FUNC(sub_83C0B174);
PPC_FUNC_IMPL(__imp__sub_83C0B174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B178"))) PPC_WEAK_FUNC(sub_83C0B178);
PPC_FUNC_IMPL(__imp__sub_83C0B178) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,693
	ctx.r3.s64 = ctx.r11.s64 + 693;
	// bl 0x83523120
	ctx.lr = 0x83C0B190;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,24696
	ctx.r3.s64 = ctx.r10.s64 + 24696;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0B19C;
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

__attribute__((alias("__imp__sub_83C0B1AC"))) PPC_WEAK_FUNC(sub_83C0B1AC);
PPC_FUNC_IMPL(__imp__sub_83C0B1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B1B0"))) PPC_WEAK_FUNC(sub_83C0B1B0);
PPC_FUNC_IMPL(__imp__sub_83C0B1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24712
	ctx.r3.s64 = ctx.r11.s64 + 24712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B1BC"))) PPC_WEAK_FUNC(sub_83C0B1BC);
PPC_FUNC_IMPL(__imp__sub_83C0B1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B1C0"))) PPC_WEAK_FUNC(sub_83C0B1C0);
PPC_FUNC_IMPL(__imp__sub_83C0B1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24808
	ctx.r3.s64 = ctx.r11.s64 + 24808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B1CC"))) PPC_WEAK_FUNC(sub_83C0B1CC);
PPC_FUNC_IMPL(__imp__sub_83C0B1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B1D0"))) PPC_WEAK_FUNC(sub_83C0B1D0);
PPC_FUNC_IMPL(__imp__sub_83C0B1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24816
	ctx.r3.s64 = ctx.r11.s64 + 24816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B1DC"))) PPC_WEAK_FUNC(sub_83C0B1DC);
PPC_FUNC_IMPL(__imp__sub_83C0B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B1E0"))) PPC_WEAK_FUNC(sub_83C0B1E0);
PPC_FUNC_IMPL(__imp__sub_83C0B1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24824
	ctx.r3.s64 = ctx.r11.s64 + 24824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B1EC"))) PPC_WEAK_FUNC(sub_83C0B1EC);
PPC_FUNC_IMPL(__imp__sub_83C0B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B1F0"))) PPC_WEAK_FUNC(sub_83C0B1F0);
PPC_FUNC_IMPL(__imp__sub_83C0B1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24832
	ctx.r3.s64 = ctx.r11.s64 + 24832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B1FC"))) PPC_WEAK_FUNC(sub_83C0B1FC);
PPC_FUNC_IMPL(__imp__sub_83C0B1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B200"))) PPC_WEAK_FUNC(sub_83C0B200);
PPC_FUNC_IMPL(__imp__sub_83C0B200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24840
	ctx.r3.s64 = ctx.r11.s64 + 24840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B20C"))) PPC_WEAK_FUNC(sub_83C0B20C);
PPC_FUNC_IMPL(__imp__sub_83C0B20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B210"))) PPC_WEAK_FUNC(sub_83C0B210);
PPC_FUNC_IMPL(__imp__sub_83C0B210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24848
	ctx.r3.s64 = ctx.r11.s64 + 24848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B21C"))) PPC_WEAK_FUNC(sub_83C0B21C);
PPC_FUNC_IMPL(__imp__sub_83C0B21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B220"))) PPC_WEAK_FUNC(sub_83C0B220);
PPC_FUNC_IMPL(__imp__sub_83C0B220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24856
	ctx.r3.s64 = ctx.r11.s64 + 24856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B22C"))) PPC_WEAK_FUNC(sub_83C0B22C);
PPC_FUNC_IMPL(__imp__sub_83C0B22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B230"))) PPC_WEAK_FUNC(sub_83C0B230);
PPC_FUNC_IMPL(__imp__sub_83C0B230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24864
	ctx.r3.s64 = ctx.r11.s64 + 24864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B23C"))) PPC_WEAK_FUNC(sub_83C0B23C);
PPC_FUNC_IMPL(__imp__sub_83C0B23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B240"))) PPC_WEAK_FUNC(sub_83C0B240);
PPC_FUNC_IMPL(__imp__sub_83C0B240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24872
	ctx.r3.s64 = ctx.r11.s64 + 24872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B24C"))) PPC_WEAK_FUNC(sub_83C0B24C);
PPC_FUNC_IMPL(__imp__sub_83C0B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B250"))) PPC_WEAK_FUNC(sub_83C0B250);
PPC_FUNC_IMPL(__imp__sub_83C0B250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24880
	ctx.r3.s64 = ctx.r11.s64 + 24880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B25C"))) PPC_WEAK_FUNC(sub_83C0B25C);
PPC_FUNC_IMPL(__imp__sub_83C0B25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B260"))) PPC_WEAK_FUNC(sub_83C0B260);
PPC_FUNC_IMPL(__imp__sub_83C0B260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24888
	ctx.r3.s64 = ctx.r11.s64 + 24888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B26C"))) PPC_WEAK_FUNC(sub_83C0B26C);
PPC_FUNC_IMPL(__imp__sub_83C0B26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B270"))) PPC_WEAK_FUNC(sub_83C0B270);
PPC_FUNC_IMPL(__imp__sub_83C0B270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24896
	ctx.r3.s64 = ctx.r11.s64 + 24896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B27C"))) PPC_WEAK_FUNC(sub_83C0B27C);
PPC_FUNC_IMPL(__imp__sub_83C0B27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B280"))) PPC_WEAK_FUNC(sub_83C0B280);
PPC_FUNC_IMPL(__imp__sub_83C0B280) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,716
	ctx.r3.s64 = ctx.r11.s64 + 716;
	// bl 0x83523120
	ctx.lr = 0x83C0B298;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,24904
	ctx.r3.s64 = ctx.r10.s64 + 24904;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0B2A4;
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

__attribute__((alias("__imp__sub_83C0B2B4"))) PPC_WEAK_FUNC(sub_83C0B2B4);
PPC_FUNC_IMPL(__imp__sub_83C0B2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B2B8"))) PPC_WEAK_FUNC(sub_83C0B2B8);
PPC_FUNC_IMPL(__imp__sub_83C0B2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24920
	ctx.r3.s64 = ctx.r11.s64 + 24920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B2C4"))) PPC_WEAK_FUNC(sub_83C0B2C4);
PPC_FUNC_IMPL(__imp__sub_83C0B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B2C8"))) PPC_WEAK_FUNC(sub_83C0B2C8);
PPC_FUNC_IMPL(__imp__sub_83C0B2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24928
	ctx.r3.s64 = ctx.r11.s64 + 24928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B2D4"))) PPC_WEAK_FUNC(sub_83C0B2D4);
PPC_FUNC_IMPL(__imp__sub_83C0B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B2D8"))) PPC_WEAK_FUNC(sub_83C0B2D8);
PPC_FUNC_IMPL(__imp__sub_83C0B2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24936
	ctx.r3.s64 = ctx.r11.s64 + 24936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B2E4"))) PPC_WEAK_FUNC(sub_83C0B2E4);
PPC_FUNC_IMPL(__imp__sub_83C0B2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B2E8"))) PPC_WEAK_FUNC(sub_83C0B2E8);
PPC_FUNC_IMPL(__imp__sub_83C0B2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24944
	ctx.r3.s64 = ctx.r11.s64 + 24944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B2F4"))) PPC_WEAK_FUNC(sub_83C0B2F4);
PPC_FUNC_IMPL(__imp__sub_83C0B2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B2F8"))) PPC_WEAK_FUNC(sub_83C0B2F8);
PPC_FUNC_IMPL(__imp__sub_83C0B2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24952
	ctx.r3.s64 = ctx.r11.s64 + 24952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B304"))) PPC_WEAK_FUNC(sub_83C0B304);
PPC_FUNC_IMPL(__imp__sub_83C0B304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B308"))) PPC_WEAK_FUNC(sub_83C0B308);
PPC_FUNC_IMPL(__imp__sub_83C0B308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24960
	ctx.r3.s64 = ctx.r11.s64 + 24960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B314"))) PPC_WEAK_FUNC(sub_83C0B314);
PPC_FUNC_IMPL(__imp__sub_83C0B314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B318"))) PPC_WEAK_FUNC(sub_83C0B318);
PPC_FUNC_IMPL(__imp__sub_83C0B318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24968
	ctx.r3.s64 = ctx.r11.s64 + 24968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B324"))) PPC_WEAK_FUNC(sub_83C0B324);
PPC_FUNC_IMPL(__imp__sub_83C0B324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B328"))) PPC_WEAK_FUNC(sub_83C0B328);
PPC_FUNC_IMPL(__imp__sub_83C0B328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24976
	ctx.r3.s64 = ctx.r11.s64 + 24976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B334"))) PPC_WEAK_FUNC(sub_83C0B334);
PPC_FUNC_IMPL(__imp__sub_83C0B334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B338"))) PPC_WEAK_FUNC(sub_83C0B338);
PPC_FUNC_IMPL(__imp__sub_83C0B338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24984
	ctx.r3.s64 = ctx.r11.s64 + 24984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B344"))) PPC_WEAK_FUNC(sub_83C0B344);
PPC_FUNC_IMPL(__imp__sub_83C0B344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B348"))) PPC_WEAK_FUNC(sub_83C0B348);
PPC_FUNC_IMPL(__imp__sub_83C0B348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24992
	ctx.r3.s64 = ctx.r11.s64 + 24992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B354"))) PPC_WEAK_FUNC(sub_83C0B354);
PPC_FUNC_IMPL(__imp__sub_83C0B354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B358"))) PPC_WEAK_FUNC(sub_83C0B358);
PPC_FUNC_IMPL(__imp__sub_83C0B358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25000
	ctx.r3.s64 = ctx.r11.s64 + 25000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B364"))) PPC_WEAK_FUNC(sub_83C0B364);
PPC_FUNC_IMPL(__imp__sub_83C0B364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B368"))) PPC_WEAK_FUNC(sub_83C0B368);
PPC_FUNC_IMPL(__imp__sub_83C0B368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25008
	ctx.r3.s64 = ctx.r11.s64 + 25008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B374"))) PPC_WEAK_FUNC(sub_83C0B374);
PPC_FUNC_IMPL(__imp__sub_83C0B374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B378"))) PPC_WEAK_FUNC(sub_83C0B378);
PPC_FUNC_IMPL(__imp__sub_83C0B378) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,724
	ctx.r3.s64 = ctx.r11.s64 + 724;
	// bl 0x83523120
	ctx.lr = 0x83C0B390;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,25016
	ctx.r3.s64 = ctx.r10.s64 + 25016;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0B39C;
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

__attribute__((alias("__imp__sub_83C0B3AC"))) PPC_WEAK_FUNC(sub_83C0B3AC);
PPC_FUNC_IMPL(__imp__sub_83C0B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B3B0"))) PPC_WEAK_FUNC(sub_83C0B3B0);
PPC_FUNC_IMPL(__imp__sub_83C0B3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25032
	ctx.r3.s64 = ctx.r11.s64 + 25032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B3BC"))) PPC_WEAK_FUNC(sub_83C0B3BC);
PPC_FUNC_IMPL(__imp__sub_83C0B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B3C0"))) PPC_WEAK_FUNC(sub_83C0B3C0);
PPC_FUNC_IMPL(__imp__sub_83C0B3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25040
	ctx.r3.s64 = ctx.r11.s64 + 25040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B3CC"))) PPC_WEAK_FUNC(sub_83C0B3CC);
PPC_FUNC_IMPL(__imp__sub_83C0B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B3D0"))) PPC_WEAK_FUNC(sub_83C0B3D0);
PPC_FUNC_IMPL(__imp__sub_83C0B3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25048
	ctx.r3.s64 = ctx.r11.s64 + 25048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B3DC"))) PPC_WEAK_FUNC(sub_83C0B3DC);
PPC_FUNC_IMPL(__imp__sub_83C0B3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B3E0"))) PPC_WEAK_FUNC(sub_83C0B3E0);
PPC_FUNC_IMPL(__imp__sub_83C0B3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25056
	ctx.r3.s64 = ctx.r11.s64 + 25056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B3EC"))) PPC_WEAK_FUNC(sub_83C0B3EC);
PPC_FUNC_IMPL(__imp__sub_83C0B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B3F0"))) PPC_WEAK_FUNC(sub_83C0B3F0);
PPC_FUNC_IMPL(__imp__sub_83C0B3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25064
	ctx.r3.s64 = ctx.r11.s64 + 25064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B3FC"))) PPC_WEAK_FUNC(sub_83C0B3FC);
PPC_FUNC_IMPL(__imp__sub_83C0B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B400"))) PPC_WEAK_FUNC(sub_83C0B400);
PPC_FUNC_IMPL(__imp__sub_83C0B400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25072
	ctx.r3.s64 = ctx.r11.s64 + 25072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B40C"))) PPC_WEAK_FUNC(sub_83C0B40C);
PPC_FUNC_IMPL(__imp__sub_83C0B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B410"))) PPC_WEAK_FUNC(sub_83C0B410);
PPC_FUNC_IMPL(__imp__sub_83C0B410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25080
	ctx.r3.s64 = ctx.r11.s64 + 25080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B41C"))) PPC_WEAK_FUNC(sub_83C0B41C);
PPC_FUNC_IMPL(__imp__sub_83C0B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B420"))) PPC_WEAK_FUNC(sub_83C0B420);
PPC_FUNC_IMPL(__imp__sub_83C0B420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25088
	ctx.r3.s64 = ctx.r11.s64 + 25088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B42C"))) PPC_WEAK_FUNC(sub_83C0B42C);
PPC_FUNC_IMPL(__imp__sub_83C0B42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B430"))) PPC_WEAK_FUNC(sub_83C0B430);
PPC_FUNC_IMPL(__imp__sub_83C0B430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25096
	ctx.r3.s64 = ctx.r11.s64 + 25096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B43C"))) PPC_WEAK_FUNC(sub_83C0B43C);
PPC_FUNC_IMPL(__imp__sub_83C0B43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B440"))) PPC_WEAK_FUNC(sub_83C0B440);
PPC_FUNC_IMPL(__imp__sub_83C0B440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25104
	ctx.r3.s64 = ctx.r11.s64 + 25104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B44C"))) PPC_WEAK_FUNC(sub_83C0B44C);
PPC_FUNC_IMPL(__imp__sub_83C0B44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B450"))) PPC_WEAK_FUNC(sub_83C0B450);
PPC_FUNC_IMPL(__imp__sub_83C0B450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25112
	ctx.r3.s64 = ctx.r11.s64 + 25112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B45C"))) PPC_WEAK_FUNC(sub_83C0B45C);
PPC_FUNC_IMPL(__imp__sub_83C0B45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B460"))) PPC_WEAK_FUNC(sub_83C0B460);
PPC_FUNC_IMPL(__imp__sub_83C0B460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25120
	ctx.r3.s64 = ctx.r11.s64 + 25120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B46C"))) PPC_WEAK_FUNC(sub_83C0B46C);
PPC_FUNC_IMPL(__imp__sub_83C0B46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B470"))) PPC_WEAK_FUNC(sub_83C0B470);
PPC_FUNC_IMPL(__imp__sub_83C0B470) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,736
	ctx.r3.s64 = ctx.r11.s64 + 736;
	// bl 0x83523120
	ctx.lr = 0x83C0B488;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,25128
	ctx.r3.s64 = ctx.r10.s64 + 25128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0B494;
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

__attribute__((alias("__imp__sub_83C0B4A4"))) PPC_WEAK_FUNC(sub_83C0B4A4);
PPC_FUNC_IMPL(__imp__sub_83C0B4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B4A8"))) PPC_WEAK_FUNC(sub_83C0B4A8);
PPC_FUNC_IMPL(__imp__sub_83C0B4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,752
	ctx.r7.s64 = ctx.r8.s64 + 752;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,752(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 752);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,752(r8)
	PPC_STORE_U32(ctx.r8.u32 + 752, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0B4D0"))) PPC_WEAK_FUNC(sub_83C0B4D0);
PPC_FUNC_IMPL(__imp__sub_83C0B4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-21256
	ctx.r6.s64 = ctx.r7.s64 + -21256;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21328(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21328);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,752(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 752);
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
	// std r9,-21256(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21256, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0B518"))) PPC_WEAK_FUNC(sub_83C0B518);
PPC_FUNC_IMPL(__imp__sub_83C0B518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25144
	ctx.r3.s64 = ctx.r11.s64 + 25144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B524"))) PPC_WEAK_FUNC(sub_83C0B524);
PPC_FUNC_IMPL(__imp__sub_83C0B524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B528"))) PPC_WEAK_FUNC(sub_83C0B528);
PPC_FUNC_IMPL(__imp__sub_83C0B528) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,760
	ctx.r3.s64 = ctx.r11.s64 + 760;
	// bl 0x8259af80
	ctx.lr = 0x83C0B540;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,25160
	ctx.r3.s64 = ctx.r10.s64 + 25160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0B54C;
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

__attribute__((alias("__imp__sub_83C0B55C"))) PPC_WEAK_FUNC(sub_83C0B55C);
PPC_FUNC_IMPL(__imp__sub_83C0B55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B560"))) PPC_WEAK_FUNC(sub_83C0B560);
PPC_FUNC_IMPL(__imp__sub_83C0B560) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,740
	ctx.r11.s64 = ctx.r8.s64 + 740;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-21280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21280);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25152
	ctx.r3.s64 = ctx.r6.s64 + 25152;
	// stw r10,740(r8)
	PPC_STORE_U32(ctx.r8.u32 + 740, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B590"))) PPC_WEAK_FUNC(sub_83C0B590);
PPC_FUNC_IMPL(__imp__sub_83C0B590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25168
	ctx.r3.s64 = ctx.r11.s64 + 25168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B59C"))) PPC_WEAK_FUNC(sub_83C0B59C);
PPC_FUNC_IMPL(__imp__sub_83C0B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B5A0"))) PPC_WEAK_FUNC(sub_83C0B5A0);
PPC_FUNC_IMPL(__imp__sub_83C0B5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25176
	ctx.r3.s64 = ctx.r11.s64 + 25176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B5AC"))) PPC_WEAK_FUNC(sub_83C0B5AC);
PPC_FUNC_IMPL(__imp__sub_83C0B5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B5B0"))) PPC_WEAK_FUNC(sub_83C0B5B0);
PPC_FUNC_IMPL(__imp__sub_83C0B5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25184
	ctx.r3.s64 = ctx.r11.s64 + 25184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B5BC"))) PPC_WEAK_FUNC(sub_83C0B5BC);
PPC_FUNC_IMPL(__imp__sub_83C0B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B5C0"))) PPC_WEAK_FUNC(sub_83C0B5C0);
PPC_FUNC_IMPL(__imp__sub_83C0B5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25192
	ctx.r3.s64 = ctx.r11.s64 + 25192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B5CC"))) PPC_WEAK_FUNC(sub_83C0B5CC);
PPC_FUNC_IMPL(__imp__sub_83C0B5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B5D0"))) PPC_WEAK_FUNC(sub_83C0B5D0);
PPC_FUNC_IMPL(__imp__sub_83C0B5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25200
	ctx.r3.s64 = ctx.r11.s64 + 25200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B5DC"))) PPC_WEAK_FUNC(sub_83C0B5DC);
PPC_FUNC_IMPL(__imp__sub_83C0B5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B5E0"))) PPC_WEAK_FUNC(sub_83C0B5E0);
PPC_FUNC_IMPL(__imp__sub_83C0B5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25208
	ctx.r3.s64 = ctx.r11.s64 + 25208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B5EC"))) PPC_WEAK_FUNC(sub_83C0B5EC);
PPC_FUNC_IMPL(__imp__sub_83C0B5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B5F0"))) PPC_WEAK_FUNC(sub_83C0B5F0);
PPC_FUNC_IMPL(__imp__sub_83C0B5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25216
	ctx.r3.s64 = ctx.r11.s64 + 25216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B5FC"))) PPC_WEAK_FUNC(sub_83C0B5FC);
PPC_FUNC_IMPL(__imp__sub_83C0B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B600"))) PPC_WEAK_FUNC(sub_83C0B600);
PPC_FUNC_IMPL(__imp__sub_83C0B600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25224
	ctx.r3.s64 = ctx.r11.s64 + 25224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B60C"))) PPC_WEAK_FUNC(sub_83C0B60C);
PPC_FUNC_IMPL(__imp__sub_83C0B60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B610"))) PPC_WEAK_FUNC(sub_83C0B610);
PPC_FUNC_IMPL(__imp__sub_83C0B610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25232
	ctx.r3.s64 = ctx.r11.s64 + 25232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B61C"))) PPC_WEAK_FUNC(sub_83C0B61C);
PPC_FUNC_IMPL(__imp__sub_83C0B61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B620"))) PPC_WEAK_FUNC(sub_83C0B620);
PPC_FUNC_IMPL(__imp__sub_83C0B620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25240
	ctx.r3.s64 = ctx.r11.s64 + 25240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B62C"))) PPC_WEAK_FUNC(sub_83C0B62C);
PPC_FUNC_IMPL(__imp__sub_83C0B62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B630"))) PPC_WEAK_FUNC(sub_83C0B630);
PPC_FUNC_IMPL(__imp__sub_83C0B630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25248
	ctx.r3.s64 = ctx.r11.s64 + 25248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B63C"))) PPC_WEAK_FUNC(sub_83C0B63C);
PPC_FUNC_IMPL(__imp__sub_83C0B63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B640"))) PPC_WEAK_FUNC(sub_83C0B640);
PPC_FUNC_IMPL(__imp__sub_83C0B640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25256
	ctx.r3.s64 = ctx.r11.s64 + 25256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B64C"))) PPC_WEAK_FUNC(sub_83C0B64C);
PPC_FUNC_IMPL(__imp__sub_83C0B64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B650"))) PPC_WEAK_FUNC(sub_83C0B650);
PPC_FUNC_IMPL(__imp__sub_83C0B650) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,1104
	ctx.r3.s64 = ctx.r11.s64 + 1104;
	// bl 0x83523120
	ctx.lr = 0x83C0B668;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,25264
	ctx.r3.s64 = ctx.r10.s64 + 25264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0B674;
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

__attribute__((alias("__imp__sub_83C0B684"))) PPC_WEAK_FUNC(sub_83C0B684);
PPC_FUNC_IMPL(__imp__sub_83C0B684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B688"))) PPC_WEAK_FUNC(sub_83C0B688);
PPC_FUNC_IMPL(__imp__sub_83C0B688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25280
	ctx.r3.s64 = ctx.r11.s64 + 25280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B694"))) PPC_WEAK_FUNC(sub_83C0B694);
PPC_FUNC_IMPL(__imp__sub_83C0B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B698"))) PPC_WEAK_FUNC(sub_83C0B698);
PPC_FUNC_IMPL(__imp__sub_83C0B698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25288
	ctx.r3.s64 = ctx.r11.s64 + 25288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B6A4"))) PPC_WEAK_FUNC(sub_83C0B6A4);
PPC_FUNC_IMPL(__imp__sub_83C0B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B6A8"))) PPC_WEAK_FUNC(sub_83C0B6A8);
PPC_FUNC_IMPL(__imp__sub_83C0B6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25296
	ctx.r3.s64 = ctx.r11.s64 + 25296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B6B4"))) PPC_WEAK_FUNC(sub_83C0B6B4);
PPC_FUNC_IMPL(__imp__sub_83C0B6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B6B8"))) PPC_WEAK_FUNC(sub_83C0B6B8);
PPC_FUNC_IMPL(__imp__sub_83C0B6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25304
	ctx.r3.s64 = ctx.r11.s64 + 25304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B6C4"))) PPC_WEAK_FUNC(sub_83C0B6C4);
PPC_FUNC_IMPL(__imp__sub_83C0B6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B6C8"))) PPC_WEAK_FUNC(sub_83C0B6C8);
PPC_FUNC_IMPL(__imp__sub_83C0B6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25312
	ctx.r3.s64 = ctx.r11.s64 + 25312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B6D4"))) PPC_WEAK_FUNC(sub_83C0B6D4);
PPC_FUNC_IMPL(__imp__sub_83C0B6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B6D8"))) PPC_WEAK_FUNC(sub_83C0B6D8);
PPC_FUNC_IMPL(__imp__sub_83C0B6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25320
	ctx.r3.s64 = ctx.r11.s64 + 25320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B6E4"))) PPC_WEAK_FUNC(sub_83C0B6E4);
PPC_FUNC_IMPL(__imp__sub_83C0B6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B6E8"))) PPC_WEAK_FUNC(sub_83C0B6E8);
PPC_FUNC_IMPL(__imp__sub_83C0B6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25328
	ctx.r3.s64 = ctx.r11.s64 + 25328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B6F4"))) PPC_WEAK_FUNC(sub_83C0B6F4);
PPC_FUNC_IMPL(__imp__sub_83C0B6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B6F8"))) PPC_WEAK_FUNC(sub_83C0B6F8);
PPC_FUNC_IMPL(__imp__sub_83C0B6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25336
	ctx.r3.s64 = ctx.r11.s64 + 25336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B704"))) PPC_WEAK_FUNC(sub_83C0B704);
PPC_FUNC_IMPL(__imp__sub_83C0B704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B708"))) PPC_WEAK_FUNC(sub_83C0B708);
PPC_FUNC_IMPL(__imp__sub_83C0B708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25344
	ctx.r3.s64 = ctx.r11.s64 + 25344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B714"))) PPC_WEAK_FUNC(sub_83C0B714);
PPC_FUNC_IMPL(__imp__sub_83C0B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B718"))) PPC_WEAK_FUNC(sub_83C0B718);
PPC_FUNC_IMPL(__imp__sub_83C0B718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25352
	ctx.r3.s64 = ctx.r11.s64 + 25352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B724"))) PPC_WEAK_FUNC(sub_83C0B724);
PPC_FUNC_IMPL(__imp__sub_83C0B724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B728"))) PPC_WEAK_FUNC(sub_83C0B728);
PPC_FUNC_IMPL(__imp__sub_83C0B728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25360
	ctx.r3.s64 = ctx.r11.s64 + 25360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B734"))) PPC_WEAK_FUNC(sub_83C0B734);
PPC_FUNC_IMPL(__imp__sub_83C0B734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B738"))) PPC_WEAK_FUNC(sub_83C0B738);
PPC_FUNC_IMPL(__imp__sub_83C0B738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25368
	ctx.r3.s64 = ctx.r11.s64 + 25368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B744"))) PPC_WEAK_FUNC(sub_83C0B744);
PPC_FUNC_IMPL(__imp__sub_83C0B744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B748"))) PPC_WEAK_FUNC(sub_83C0B748);
PPC_FUNC_IMPL(__imp__sub_83C0B748) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,1112
	ctx.r3.s64 = ctx.r11.s64 + 1112;
	// bl 0x83523120
	ctx.lr = 0x83C0B760;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,25376
	ctx.r3.s64 = ctx.r10.s64 + 25376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0B76C;
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

__attribute__((alias("__imp__sub_83C0B77C"))) PPC_WEAK_FUNC(sub_83C0B77C);
PPC_FUNC_IMPL(__imp__sub_83C0B77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B780"))) PPC_WEAK_FUNC(sub_83C0B780);
PPC_FUNC_IMPL(__imp__sub_83C0B780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25392
	ctx.r3.s64 = ctx.r11.s64 + 25392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B78C"))) PPC_WEAK_FUNC(sub_83C0B78C);
PPC_FUNC_IMPL(__imp__sub_83C0B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B790"))) PPC_WEAK_FUNC(sub_83C0B790);
PPC_FUNC_IMPL(__imp__sub_83C0B790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25400
	ctx.r3.s64 = ctx.r11.s64 + 25400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B79C"))) PPC_WEAK_FUNC(sub_83C0B79C);
PPC_FUNC_IMPL(__imp__sub_83C0B79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B7A0"))) PPC_WEAK_FUNC(sub_83C0B7A0);
PPC_FUNC_IMPL(__imp__sub_83C0B7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25408
	ctx.r3.s64 = ctx.r11.s64 + 25408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B7AC"))) PPC_WEAK_FUNC(sub_83C0B7AC);
PPC_FUNC_IMPL(__imp__sub_83C0B7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B7B0"))) PPC_WEAK_FUNC(sub_83C0B7B0);
PPC_FUNC_IMPL(__imp__sub_83C0B7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25416
	ctx.r3.s64 = ctx.r11.s64 + 25416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B7BC"))) PPC_WEAK_FUNC(sub_83C0B7BC);
PPC_FUNC_IMPL(__imp__sub_83C0B7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B7C0"))) PPC_WEAK_FUNC(sub_83C0B7C0);
PPC_FUNC_IMPL(__imp__sub_83C0B7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25424
	ctx.r3.s64 = ctx.r11.s64 + 25424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B7CC"))) PPC_WEAK_FUNC(sub_83C0B7CC);
PPC_FUNC_IMPL(__imp__sub_83C0B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B7D0"))) PPC_WEAK_FUNC(sub_83C0B7D0);
PPC_FUNC_IMPL(__imp__sub_83C0B7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25432
	ctx.r3.s64 = ctx.r11.s64 + 25432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B7DC"))) PPC_WEAK_FUNC(sub_83C0B7DC);
PPC_FUNC_IMPL(__imp__sub_83C0B7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B7E0"))) PPC_WEAK_FUNC(sub_83C0B7E0);
PPC_FUNC_IMPL(__imp__sub_83C0B7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25440
	ctx.r3.s64 = ctx.r11.s64 + 25440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B7EC"))) PPC_WEAK_FUNC(sub_83C0B7EC);
PPC_FUNC_IMPL(__imp__sub_83C0B7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B7F0"))) PPC_WEAK_FUNC(sub_83C0B7F0);
PPC_FUNC_IMPL(__imp__sub_83C0B7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25448
	ctx.r3.s64 = ctx.r11.s64 + 25448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B7FC"))) PPC_WEAK_FUNC(sub_83C0B7FC);
PPC_FUNC_IMPL(__imp__sub_83C0B7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B800"))) PPC_WEAK_FUNC(sub_83C0B800);
PPC_FUNC_IMPL(__imp__sub_83C0B800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25456
	ctx.r3.s64 = ctx.r11.s64 + 25456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B80C"))) PPC_WEAK_FUNC(sub_83C0B80C);
PPC_FUNC_IMPL(__imp__sub_83C0B80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B810"))) PPC_WEAK_FUNC(sub_83C0B810);
PPC_FUNC_IMPL(__imp__sub_83C0B810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25464
	ctx.r3.s64 = ctx.r11.s64 + 25464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B81C"))) PPC_WEAK_FUNC(sub_83C0B81C);
PPC_FUNC_IMPL(__imp__sub_83C0B81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B820"))) PPC_WEAK_FUNC(sub_83C0B820);
PPC_FUNC_IMPL(__imp__sub_83C0B820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25472
	ctx.r3.s64 = ctx.r11.s64 + 25472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B82C"))) PPC_WEAK_FUNC(sub_83C0B82C);
PPC_FUNC_IMPL(__imp__sub_83C0B82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B830"))) PPC_WEAK_FUNC(sub_83C0B830);
PPC_FUNC_IMPL(__imp__sub_83C0B830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25480
	ctx.r3.s64 = ctx.r11.s64 + 25480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B83C"))) PPC_WEAK_FUNC(sub_83C0B83C);
PPC_FUNC_IMPL(__imp__sub_83C0B83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B840"))) PPC_WEAK_FUNC(sub_83C0B840);
PPC_FUNC_IMPL(__imp__sub_83C0B840) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,1120
	ctx.r3.s64 = ctx.r11.s64 + 1120;
	// bl 0x83523120
	ctx.lr = 0x83C0B858;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,25488
	ctx.r3.s64 = ctx.r10.s64 + 25488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0B864;
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

__attribute__((alias("__imp__sub_83C0B874"))) PPC_WEAK_FUNC(sub_83C0B874);
PPC_FUNC_IMPL(__imp__sub_83C0B874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B878"))) PPC_WEAK_FUNC(sub_83C0B878);
PPC_FUNC_IMPL(__imp__sub_83C0B878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25504
	ctx.r3.s64 = ctx.r11.s64 + 25504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B884"))) PPC_WEAK_FUNC(sub_83C0B884);
PPC_FUNC_IMPL(__imp__sub_83C0B884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B888"))) PPC_WEAK_FUNC(sub_83C0B888);
PPC_FUNC_IMPL(__imp__sub_83C0B888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25512
	ctx.r3.s64 = ctx.r11.s64 + 25512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B894"))) PPC_WEAK_FUNC(sub_83C0B894);
PPC_FUNC_IMPL(__imp__sub_83C0B894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B898"))) PPC_WEAK_FUNC(sub_83C0B898);
PPC_FUNC_IMPL(__imp__sub_83C0B898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25520
	ctx.r3.s64 = ctx.r11.s64 + 25520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B8A4"))) PPC_WEAK_FUNC(sub_83C0B8A4);
PPC_FUNC_IMPL(__imp__sub_83C0B8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B8A8"))) PPC_WEAK_FUNC(sub_83C0B8A8);
PPC_FUNC_IMPL(__imp__sub_83C0B8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25528
	ctx.r3.s64 = ctx.r11.s64 + 25528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B8B4"))) PPC_WEAK_FUNC(sub_83C0B8B4);
PPC_FUNC_IMPL(__imp__sub_83C0B8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B8B8"))) PPC_WEAK_FUNC(sub_83C0B8B8);
PPC_FUNC_IMPL(__imp__sub_83C0B8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25536
	ctx.r3.s64 = ctx.r11.s64 + 25536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B8C4"))) PPC_WEAK_FUNC(sub_83C0B8C4);
PPC_FUNC_IMPL(__imp__sub_83C0B8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B8C8"))) PPC_WEAK_FUNC(sub_83C0B8C8);
PPC_FUNC_IMPL(__imp__sub_83C0B8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25544
	ctx.r3.s64 = ctx.r11.s64 + 25544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B8D4"))) PPC_WEAK_FUNC(sub_83C0B8D4);
PPC_FUNC_IMPL(__imp__sub_83C0B8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B8D8"))) PPC_WEAK_FUNC(sub_83C0B8D8);
PPC_FUNC_IMPL(__imp__sub_83C0B8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25552
	ctx.r3.s64 = ctx.r11.s64 + 25552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B8E4"))) PPC_WEAK_FUNC(sub_83C0B8E4);
PPC_FUNC_IMPL(__imp__sub_83C0B8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B8E8"))) PPC_WEAK_FUNC(sub_83C0B8E8);
PPC_FUNC_IMPL(__imp__sub_83C0B8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25560
	ctx.r3.s64 = ctx.r11.s64 + 25560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B8F4"))) PPC_WEAK_FUNC(sub_83C0B8F4);
PPC_FUNC_IMPL(__imp__sub_83C0B8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B8F8"))) PPC_WEAK_FUNC(sub_83C0B8F8);
PPC_FUNC_IMPL(__imp__sub_83C0B8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25568
	ctx.r3.s64 = ctx.r11.s64 + 25568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B904"))) PPC_WEAK_FUNC(sub_83C0B904);
PPC_FUNC_IMPL(__imp__sub_83C0B904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B908"))) PPC_WEAK_FUNC(sub_83C0B908);
PPC_FUNC_IMPL(__imp__sub_83C0B908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25576
	ctx.r3.s64 = ctx.r11.s64 + 25576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B914"))) PPC_WEAK_FUNC(sub_83C0B914);
PPC_FUNC_IMPL(__imp__sub_83C0B914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B918"))) PPC_WEAK_FUNC(sub_83C0B918);
PPC_FUNC_IMPL(__imp__sub_83C0B918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25584
	ctx.r3.s64 = ctx.r11.s64 + 25584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B924"))) PPC_WEAK_FUNC(sub_83C0B924);
PPC_FUNC_IMPL(__imp__sub_83C0B924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B928"))) PPC_WEAK_FUNC(sub_83C0B928);
PPC_FUNC_IMPL(__imp__sub_83C0B928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25592
	ctx.r3.s64 = ctx.r11.s64 + 25592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B934"))) PPC_WEAK_FUNC(sub_83C0B934);
PPC_FUNC_IMPL(__imp__sub_83C0B934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B938"))) PPC_WEAK_FUNC(sub_83C0B938);
PPC_FUNC_IMPL(__imp__sub_83C0B938) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,1128
	ctx.r3.s64 = ctx.r11.s64 + 1128;
	// bl 0x83523120
	ctx.lr = 0x83C0B950;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,25600
	ctx.r3.s64 = ctx.r10.s64 + 25600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0B95C;
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

__attribute__((alias("__imp__sub_83C0B96C"))) PPC_WEAK_FUNC(sub_83C0B96C);
PPC_FUNC_IMPL(__imp__sub_83C0B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B970"))) PPC_WEAK_FUNC(sub_83C0B970);
PPC_FUNC_IMPL(__imp__sub_83C0B970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25616
	ctx.r3.s64 = ctx.r11.s64 + 25616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B97C"))) PPC_WEAK_FUNC(sub_83C0B97C);
PPC_FUNC_IMPL(__imp__sub_83C0B97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B980"))) PPC_WEAK_FUNC(sub_83C0B980);
PPC_FUNC_IMPL(__imp__sub_83C0B980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25624
	ctx.r3.s64 = ctx.r11.s64 + 25624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B98C"))) PPC_WEAK_FUNC(sub_83C0B98C);
PPC_FUNC_IMPL(__imp__sub_83C0B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B990"))) PPC_WEAK_FUNC(sub_83C0B990);
PPC_FUNC_IMPL(__imp__sub_83C0B990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25632
	ctx.r3.s64 = ctx.r11.s64 + 25632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B99C"))) PPC_WEAK_FUNC(sub_83C0B99C);
PPC_FUNC_IMPL(__imp__sub_83C0B99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B9A0"))) PPC_WEAK_FUNC(sub_83C0B9A0);
PPC_FUNC_IMPL(__imp__sub_83C0B9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25640
	ctx.r3.s64 = ctx.r11.s64 + 25640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B9AC"))) PPC_WEAK_FUNC(sub_83C0B9AC);
PPC_FUNC_IMPL(__imp__sub_83C0B9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B9B0"))) PPC_WEAK_FUNC(sub_83C0B9B0);
PPC_FUNC_IMPL(__imp__sub_83C0B9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25648
	ctx.r3.s64 = ctx.r11.s64 + 25648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B9BC"))) PPC_WEAK_FUNC(sub_83C0B9BC);
PPC_FUNC_IMPL(__imp__sub_83C0B9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B9C0"))) PPC_WEAK_FUNC(sub_83C0B9C0);
PPC_FUNC_IMPL(__imp__sub_83C0B9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25656
	ctx.r3.s64 = ctx.r11.s64 + 25656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B9CC"))) PPC_WEAK_FUNC(sub_83C0B9CC);
PPC_FUNC_IMPL(__imp__sub_83C0B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B9D0"))) PPC_WEAK_FUNC(sub_83C0B9D0);
PPC_FUNC_IMPL(__imp__sub_83C0B9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25664
	ctx.r3.s64 = ctx.r11.s64 + 25664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B9DC"))) PPC_WEAK_FUNC(sub_83C0B9DC);
PPC_FUNC_IMPL(__imp__sub_83C0B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B9E0"))) PPC_WEAK_FUNC(sub_83C0B9E0);
PPC_FUNC_IMPL(__imp__sub_83C0B9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25672
	ctx.r3.s64 = ctx.r11.s64 + 25672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B9EC"))) PPC_WEAK_FUNC(sub_83C0B9EC);
PPC_FUNC_IMPL(__imp__sub_83C0B9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B9F0"))) PPC_WEAK_FUNC(sub_83C0B9F0);
PPC_FUNC_IMPL(__imp__sub_83C0B9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25680
	ctx.r3.s64 = ctx.r11.s64 + 25680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B9FC"))) PPC_WEAK_FUNC(sub_83C0B9FC);
PPC_FUNC_IMPL(__imp__sub_83C0B9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BA00"))) PPC_WEAK_FUNC(sub_83C0BA00);
PPC_FUNC_IMPL(__imp__sub_83C0BA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25688
	ctx.r3.s64 = ctx.r11.s64 + 25688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BA0C"))) PPC_WEAK_FUNC(sub_83C0BA0C);
PPC_FUNC_IMPL(__imp__sub_83C0BA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BA10"))) PPC_WEAK_FUNC(sub_83C0BA10);
PPC_FUNC_IMPL(__imp__sub_83C0BA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25696
	ctx.r3.s64 = ctx.r11.s64 + 25696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BA1C"))) PPC_WEAK_FUNC(sub_83C0BA1C);
PPC_FUNC_IMPL(__imp__sub_83C0BA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BA20"))) PPC_WEAK_FUNC(sub_83C0BA20);
PPC_FUNC_IMPL(__imp__sub_83C0BA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25704
	ctx.r3.s64 = ctx.r11.s64 + 25704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BA2C"))) PPC_WEAK_FUNC(sub_83C0BA2C);
PPC_FUNC_IMPL(__imp__sub_83C0BA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BA30"))) PPC_WEAK_FUNC(sub_83C0BA30);
PPC_FUNC_IMPL(__imp__sub_83C0BA30) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// bl 0x83523120
	ctx.lr = 0x83C0BA48;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,25712
	ctx.r3.s64 = ctx.r10.s64 + 25712;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0BA54;
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

__attribute__((alias("__imp__sub_83C0BA64"))) PPC_WEAK_FUNC(sub_83C0BA64);
PPC_FUNC_IMPL(__imp__sub_83C0BA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BA68"))) PPC_WEAK_FUNC(sub_83C0BA68);
PPC_FUNC_IMPL(__imp__sub_83C0BA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25728
	ctx.r3.s64 = ctx.r11.s64 + 25728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BA74"))) PPC_WEAK_FUNC(sub_83C0BA74);
PPC_FUNC_IMPL(__imp__sub_83C0BA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BA78"))) PPC_WEAK_FUNC(sub_83C0BA78);
PPC_FUNC_IMPL(__imp__sub_83C0BA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BA84"))) PPC_WEAK_FUNC(sub_83C0BA84);
PPC_FUNC_IMPL(__imp__sub_83C0BA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BA88"))) PPC_WEAK_FUNC(sub_83C0BA88);
PPC_FUNC_IMPL(__imp__sub_83C0BA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25744
	ctx.r3.s64 = ctx.r11.s64 + 25744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BA94"))) PPC_WEAK_FUNC(sub_83C0BA94);
PPC_FUNC_IMPL(__imp__sub_83C0BA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BA98"))) PPC_WEAK_FUNC(sub_83C0BA98);
PPC_FUNC_IMPL(__imp__sub_83C0BA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25752
	ctx.r3.s64 = ctx.r11.s64 + 25752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BAA4"))) PPC_WEAK_FUNC(sub_83C0BAA4);
PPC_FUNC_IMPL(__imp__sub_83C0BAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BAA8"))) PPC_WEAK_FUNC(sub_83C0BAA8);
PPC_FUNC_IMPL(__imp__sub_83C0BAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25760
	ctx.r3.s64 = ctx.r11.s64 + 25760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BAB4"))) PPC_WEAK_FUNC(sub_83C0BAB4);
PPC_FUNC_IMPL(__imp__sub_83C0BAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BAB8"))) PPC_WEAK_FUNC(sub_83C0BAB8);
PPC_FUNC_IMPL(__imp__sub_83C0BAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25768
	ctx.r3.s64 = ctx.r11.s64 + 25768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BAC4"))) PPC_WEAK_FUNC(sub_83C0BAC4);
PPC_FUNC_IMPL(__imp__sub_83C0BAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BAC8"))) PPC_WEAK_FUNC(sub_83C0BAC8);
PPC_FUNC_IMPL(__imp__sub_83C0BAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25776
	ctx.r3.s64 = ctx.r11.s64 + 25776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BAD4"))) PPC_WEAK_FUNC(sub_83C0BAD4);
PPC_FUNC_IMPL(__imp__sub_83C0BAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BAD8"))) PPC_WEAK_FUNC(sub_83C0BAD8);
PPC_FUNC_IMPL(__imp__sub_83C0BAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25784
	ctx.r3.s64 = ctx.r11.s64 + 25784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BAE4"))) PPC_WEAK_FUNC(sub_83C0BAE4);
PPC_FUNC_IMPL(__imp__sub_83C0BAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BAE8"))) PPC_WEAK_FUNC(sub_83C0BAE8);
PPC_FUNC_IMPL(__imp__sub_83C0BAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25792
	ctx.r3.s64 = ctx.r11.s64 + 25792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BAF4"))) PPC_WEAK_FUNC(sub_83C0BAF4);
PPC_FUNC_IMPL(__imp__sub_83C0BAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BAF8"))) PPC_WEAK_FUNC(sub_83C0BAF8);
PPC_FUNC_IMPL(__imp__sub_83C0BAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25800
	ctx.r3.s64 = ctx.r11.s64 + 25800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BB04"))) PPC_WEAK_FUNC(sub_83C0BB04);
PPC_FUNC_IMPL(__imp__sub_83C0BB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BB08"))) PPC_WEAK_FUNC(sub_83C0BB08);
PPC_FUNC_IMPL(__imp__sub_83C0BB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25808
	ctx.r3.s64 = ctx.r11.s64 + 25808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BB14"))) PPC_WEAK_FUNC(sub_83C0BB14);
PPC_FUNC_IMPL(__imp__sub_83C0BB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BB18"))) PPC_WEAK_FUNC(sub_83C0BB18);
PPC_FUNC_IMPL(__imp__sub_83C0BB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25816
	ctx.r3.s64 = ctx.r11.s64 + 25816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BB24"))) PPC_WEAK_FUNC(sub_83C0BB24);
PPC_FUNC_IMPL(__imp__sub_83C0BB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BB28"))) PPC_WEAK_FUNC(sub_83C0BB28);
PPC_FUNC_IMPL(__imp__sub_83C0BB28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1160
	ctx.r7.s64 = ctx.r8.s64 + 1160;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1160);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1160, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0BB50"))) PPC_WEAK_FUNC(sub_83C0BB50);
PPC_FUNC_IMPL(__imp__sub_83C0BB50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-20560
	ctx.r6.s64 = ctx.r7.s64 + -20560;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-20632(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -20632);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1160(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
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
	// std r9,-20560(r7)
	PPC_STORE_U64(ctx.r7.u32 + -20560, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0BB98"))) PPC_WEAK_FUNC(sub_83C0BB98);
PPC_FUNC_IMPL(__imp__sub_83C0BB98) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,1144
	ctx.r3.s64 = ctx.r11.s64 + 1144;
	// bl 0x83523120
	ctx.lr = 0x83C0BBB0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,25824
	ctx.r3.s64 = ctx.r10.s64 + 25824;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0BBBC;
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

__attribute__((alias("__imp__sub_83C0BBCC"))) PPC_WEAK_FUNC(sub_83C0BBCC);
PPC_FUNC_IMPL(__imp__sub_83C0BBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BBD0"))) PPC_WEAK_FUNC(sub_83C0BBD0);
PPC_FUNC_IMPL(__imp__sub_83C0BBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25840
	ctx.r3.s64 = ctx.r11.s64 + 25840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BBDC"))) PPC_WEAK_FUNC(sub_83C0BBDC);
PPC_FUNC_IMPL(__imp__sub_83C0BBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BBE0"))) PPC_WEAK_FUNC(sub_83C0BBE0);
PPC_FUNC_IMPL(__imp__sub_83C0BBE0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,1168
	ctx.r3.s64 = ctx.r11.s64 + 1168;
	// bl 0x8259af80
	ctx.lr = 0x83C0BBF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,25856
	ctx.r3.s64 = ctx.r10.s64 + 25856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0BC04;
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

__attribute__((alias("__imp__sub_83C0BC14"))) PPC_WEAK_FUNC(sub_83C0BC14);
PPC_FUNC_IMPL(__imp__sub_83C0BC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0BC18"))) PPC_WEAK_FUNC(sub_83C0BC18);
PPC_FUNC_IMPL(__imp__sub_83C0BC18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1148
	ctx.r11.s64 = ctx.r8.s64 + 1148;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-20584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20584);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25848
	ctx.r3.s64 = ctx.r6.s64 + 25848;
	// stw r10,1148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1148, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BC48"))) PPC_WEAK_FUNC(sub_83C0BC48);
PPC_FUNC_IMPL(__imp__sub_83C0BC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0BC54"))) PPC_WEAK_FUNC(sub_83C0BC54);
PPC_FUNC_IMPL(__imp__sub_83C0BC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

