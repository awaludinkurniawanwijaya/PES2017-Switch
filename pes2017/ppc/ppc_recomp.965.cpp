#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CEC030"))) PPC_WEAK_FUNC(sub_83CEC030);
PPC_FUNC_IMPL(__imp__sub_83CEC030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14008
	ctx.r3.s64 = ctx.r11.s64 + 14008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC03C"))) PPC_WEAK_FUNC(sub_83CEC03C);
PPC_FUNC_IMPL(__imp__sub_83CEC03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC040"))) PPC_WEAK_FUNC(sub_83CEC040);
PPC_FUNC_IMPL(__imp__sub_83CEC040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14016
	ctx.r3.s64 = ctx.r11.s64 + 14016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC04C"))) PPC_WEAK_FUNC(sub_83CEC04C);
PPC_FUNC_IMPL(__imp__sub_83CEC04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC050"))) PPC_WEAK_FUNC(sub_83CEC050);
PPC_FUNC_IMPL(__imp__sub_83CEC050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14024
	ctx.r3.s64 = ctx.r11.s64 + 14024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC05C"))) PPC_WEAK_FUNC(sub_83CEC05C);
PPC_FUNC_IMPL(__imp__sub_83CEC05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC060"))) PPC_WEAK_FUNC(sub_83CEC060);
PPC_FUNC_IMPL(__imp__sub_83CEC060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14032
	ctx.r3.s64 = ctx.r11.s64 + 14032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC06C"))) PPC_WEAK_FUNC(sub_83CEC06C);
PPC_FUNC_IMPL(__imp__sub_83CEC06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC070"))) PPC_WEAK_FUNC(sub_83CEC070);
PPC_FUNC_IMPL(__imp__sub_83CEC070) {
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
	// addi r3,r11,4820
	ctx.r3.s64 = ctx.r11.s64 + 4820;
	// bl 0x83523120
	ctx.lr = 0x83CEC088;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,14040
	ctx.r3.s64 = ctx.r10.s64 + 14040;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEC094;
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

__attribute__((alias("__imp__sub_83CEC0A4"))) PPC_WEAK_FUNC(sub_83CEC0A4);
PPC_FUNC_IMPL(__imp__sub_83CEC0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC0A8"))) PPC_WEAK_FUNC(sub_83CEC0A8);
PPC_FUNC_IMPL(__imp__sub_83CEC0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4824
	ctx.r7.s64 = ctx.r8.s64 + 4824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4824(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4824);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4824(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4824, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEC0D0"))) PPC_WEAK_FUNC(sub_83CEC0D0);
PPC_FUNC_IMPL(__imp__sub_83CEC0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14056
	ctx.r3.s64 = ctx.r11.s64 + 14056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC0DC"))) PPC_WEAK_FUNC(sub_83CEC0DC);
PPC_FUNC_IMPL(__imp__sub_83CEC0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC0E0"))) PPC_WEAK_FUNC(sub_83CEC0E0);
PPC_FUNC_IMPL(__imp__sub_83CEC0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14064
	ctx.r3.s64 = ctx.r11.s64 + 14064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC0EC"))) PPC_WEAK_FUNC(sub_83CEC0EC);
PPC_FUNC_IMPL(__imp__sub_83CEC0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC0F0"))) PPC_WEAK_FUNC(sub_83CEC0F0);
PPC_FUNC_IMPL(__imp__sub_83CEC0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14072
	ctx.r3.s64 = ctx.r11.s64 + 14072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC0FC"))) PPC_WEAK_FUNC(sub_83CEC0FC);
PPC_FUNC_IMPL(__imp__sub_83CEC0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC100"))) PPC_WEAK_FUNC(sub_83CEC100);
PPC_FUNC_IMPL(__imp__sub_83CEC100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14080
	ctx.r3.s64 = ctx.r11.s64 + 14080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC10C"))) PPC_WEAK_FUNC(sub_83CEC10C);
PPC_FUNC_IMPL(__imp__sub_83CEC10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC110"))) PPC_WEAK_FUNC(sub_83CEC110);
PPC_FUNC_IMPL(__imp__sub_83CEC110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14088
	ctx.r3.s64 = ctx.r11.s64 + 14088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC11C"))) PPC_WEAK_FUNC(sub_83CEC11C);
PPC_FUNC_IMPL(__imp__sub_83CEC11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC120"))) PPC_WEAK_FUNC(sub_83CEC120);
PPC_FUNC_IMPL(__imp__sub_83CEC120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14096
	ctx.r3.s64 = ctx.r11.s64 + 14096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC12C"))) PPC_WEAK_FUNC(sub_83CEC12C);
PPC_FUNC_IMPL(__imp__sub_83CEC12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC130"))) PPC_WEAK_FUNC(sub_83CEC130);
PPC_FUNC_IMPL(__imp__sub_83CEC130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14104
	ctx.r3.s64 = ctx.r11.s64 + 14104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC13C"))) PPC_WEAK_FUNC(sub_83CEC13C);
PPC_FUNC_IMPL(__imp__sub_83CEC13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC140"))) PPC_WEAK_FUNC(sub_83CEC140);
PPC_FUNC_IMPL(__imp__sub_83CEC140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14112
	ctx.r3.s64 = ctx.r11.s64 + 14112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC14C"))) PPC_WEAK_FUNC(sub_83CEC14C);
PPC_FUNC_IMPL(__imp__sub_83CEC14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC150"))) PPC_WEAK_FUNC(sub_83CEC150);
PPC_FUNC_IMPL(__imp__sub_83CEC150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14120
	ctx.r3.s64 = ctx.r11.s64 + 14120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC15C"))) PPC_WEAK_FUNC(sub_83CEC15C);
PPC_FUNC_IMPL(__imp__sub_83CEC15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC160"))) PPC_WEAK_FUNC(sub_83CEC160);
PPC_FUNC_IMPL(__imp__sub_83CEC160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14128
	ctx.r3.s64 = ctx.r11.s64 + 14128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC16C"))) PPC_WEAK_FUNC(sub_83CEC16C);
PPC_FUNC_IMPL(__imp__sub_83CEC16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC170"))) PPC_WEAK_FUNC(sub_83CEC170);
PPC_FUNC_IMPL(__imp__sub_83CEC170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14136
	ctx.r3.s64 = ctx.r11.s64 + 14136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC17C"))) PPC_WEAK_FUNC(sub_83CEC17C);
PPC_FUNC_IMPL(__imp__sub_83CEC17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC180"))) PPC_WEAK_FUNC(sub_83CEC180);
PPC_FUNC_IMPL(__imp__sub_83CEC180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14144
	ctx.r3.s64 = ctx.r11.s64 + 14144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC18C"))) PPC_WEAK_FUNC(sub_83CEC18C);
PPC_FUNC_IMPL(__imp__sub_83CEC18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC190"))) PPC_WEAK_FUNC(sub_83CEC190);
PPC_FUNC_IMPL(__imp__sub_83CEC190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14152
	ctx.r3.s64 = ctx.r11.s64 + 14152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC19C"))) PPC_WEAK_FUNC(sub_83CEC19C);
PPC_FUNC_IMPL(__imp__sub_83CEC19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC1A0"))) PPC_WEAK_FUNC(sub_83CEC1A0);
PPC_FUNC_IMPL(__imp__sub_83CEC1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14160
	ctx.r3.s64 = ctx.r11.s64 + 14160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC1AC"))) PPC_WEAK_FUNC(sub_83CEC1AC);
PPC_FUNC_IMPL(__imp__sub_83CEC1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC1B0"))) PPC_WEAK_FUNC(sub_83CEC1B0);
PPC_FUNC_IMPL(__imp__sub_83CEC1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14168
	ctx.r3.s64 = ctx.r11.s64 + 14168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC1BC"))) PPC_WEAK_FUNC(sub_83CEC1BC);
PPC_FUNC_IMPL(__imp__sub_83CEC1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC1C0"))) PPC_WEAK_FUNC(sub_83CEC1C0);
PPC_FUNC_IMPL(__imp__sub_83CEC1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14176
	ctx.r3.s64 = ctx.r11.s64 + 14176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC1CC"))) PPC_WEAK_FUNC(sub_83CEC1CC);
PPC_FUNC_IMPL(__imp__sub_83CEC1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC1D0"))) PPC_WEAK_FUNC(sub_83CEC1D0);
PPC_FUNC_IMPL(__imp__sub_83CEC1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14184
	ctx.r3.s64 = ctx.r11.s64 + 14184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC1DC"))) PPC_WEAK_FUNC(sub_83CEC1DC);
PPC_FUNC_IMPL(__imp__sub_83CEC1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC1E0"))) PPC_WEAK_FUNC(sub_83CEC1E0);
PPC_FUNC_IMPL(__imp__sub_83CEC1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14192
	ctx.r3.s64 = ctx.r11.s64 + 14192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC1EC"))) PPC_WEAK_FUNC(sub_83CEC1EC);
PPC_FUNC_IMPL(__imp__sub_83CEC1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC1F0"))) PPC_WEAK_FUNC(sub_83CEC1F0);
PPC_FUNC_IMPL(__imp__sub_83CEC1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14200
	ctx.r3.s64 = ctx.r11.s64 + 14200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC1FC"))) PPC_WEAK_FUNC(sub_83CEC1FC);
PPC_FUNC_IMPL(__imp__sub_83CEC1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC200"))) PPC_WEAK_FUNC(sub_83CEC200);
PPC_FUNC_IMPL(__imp__sub_83CEC200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14208
	ctx.r3.s64 = ctx.r11.s64 + 14208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC20C"))) PPC_WEAK_FUNC(sub_83CEC20C);
PPC_FUNC_IMPL(__imp__sub_83CEC20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC210"))) PPC_WEAK_FUNC(sub_83CEC210);
PPC_FUNC_IMPL(__imp__sub_83CEC210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14216
	ctx.r3.s64 = ctx.r11.s64 + 14216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC21C"))) PPC_WEAK_FUNC(sub_83CEC21C);
PPC_FUNC_IMPL(__imp__sub_83CEC21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC220"))) PPC_WEAK_FUNC(sub_83CEC220);
PPC_FUNC_IMPL(__imp__sub_83CEC220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14224
	ctx.r3.s64 = ctx.r11.s64 + 14224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC22C"))) PPC_WEAK_FUNC(sub_83CEC22C);
PPC_FUNC_IMPL(__imp__sub_83CEC22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC230"))) PPC_WEAK_FUNC(sub_83CEC230);
PPC_FUNC_IMPL(__imp__sub_83CEC230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14232
	ctx.r3.s64 = ctx.r11.s64 + 14232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC23C"))) PPC_WEAK_FUNC(sub_83CEC23C);
PPC_FUNC_IMPL(__imp__sub_83CEC23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC240"))) PPC_WEAK_FUNC(sub_83CEC240);
PPC_FUNC_IMPL(__imp__sub_83CEC240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14240
	ctx.r3.s64 = ctx.r11.s64 + 14240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC24C"))) PPC_WEAK_FUNC(sub_83CEC24C);
PPC_FUNC_IMPL(__imp__sub_83CEC24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC250"))) PPC_WEAK_FUNC(sub_83CEC250);
PPC_FUNC_IMPL(__imp__sub_83CEC250) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4856
	ctx.r7.s64 = ctx.r8.s64 + 4856;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4856(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4856);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4856(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4856, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEC278"))) PPC_WEAK_FUNC(sub_83CEC278);
PPC_FUNC_IMPL(__imp__sub_83CEC278) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-28728
	ctx.r6.s64 = ctx.r7.s64 + -28728;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28800(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28800);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4856(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4856);
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
	// std r9,-28728(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28728, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEC2C0"))) PPC_WEAK_FUNC(sub_83CEC2C0);
PPC_FUNC_IMPL(__imp__sub_83CEC2C0) {
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
	// addi r3,r11,4840
	ctx.r3.s64 = ctx.r11.s64 + 4840;
	// bl 0x83523120
	ctx.lr = 0x83CEC2D8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,14248
	ctx.r3.s64 = ctx.r10.s64 + 14248;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEC2E4;
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

__attribute__((alias("__imp__sub_83CEC2F4"))) PPC_WEAK_FUNC(sub_83CEC2F4);
PPC_FUNC_IMPL(__imp__sub_83CEC2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC2F8"))) PPC_WEAK_FUNC(sub_83CEC2F8);
PPC_FUNC_IMPL(__imp__sub_83CEC2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC304"))) PPC_WEAK_FUNC(sub_83CEC304);
PPC_FUNC_IMPL(__imp__sub_83CEC304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC308"))) PPC_WEAK_FUNC(sub_83CEC308);
PPC_FUNC_IMPL(__imp__sub_83CEC308) {
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
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// bl 0x8259af80
	ctx.lr = 0x83CEC320;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,14280
	ctx.r3.s64 = ctx.r10.s64 + 14280;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEC32C;
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

__attribute__((alias("__imp__sub_83CEC33C"))) PPC_WEAK_FUNC(sub_83CEC33C);
PPC_FUNC_IMPL(__imp__sub_83CEC33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC340"))) PPC_WEAK_FUNC(sub_83CEC340);
PPC_FUNC_IMPL(__imp__sub_83CEC340) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4844
	ctx.r11.s64 = ctx.r8.s64 + 4844;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-28752(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28752);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14272
	ctx.r3.s64 = ctx.r6.s64 + 14272;
	// stw r10,4844(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4844, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC370"))) PPC_WEAK_FUNC(sub_83CEC370);
PPC_FUNC_IMPL(__imp__sub_83CEC370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14288
	ctx.r3.s64 = ctx.r11.s64 + 14288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC37C"))) PPC_WEAK_FUNC(sub_83CEC37C);
PPC_FUNC_IMPL(__imp__sub_83CEC37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC380"))) PPC_WEAK_FUNC(sub_83CEC380);
PPC_FUNC_IMPL(__imp__sub_83CEC380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14296
	ctx.r3.s64 = ctx.r11.s64 + 14296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC38C"))) PPC_WEAK_FUNC(sub_83CEC38C);
PPC_FUNC_IMPL(__imp__sub_83CEC38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC390"))) PPC_WEAK_FUNC(sub_83CEC390);
PPC_FUNC_IMPL(__imp__sub_83CEC390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14304
	ctx.r3.s64 = ctx.r11.s64 + 14304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC39C"))) PPC_WEAK_FUNC(sub_83CEC39C);
PPC_FUNC_IMPL(__imp__sub_83CEC39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC3A0"))) PPC_WEAK_FUNC(sub_83CEC3A0);
PPC_FUNC_IMPL(__imp__sub_83CEC3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14312
	ctx.r3.s64 = ctx.r11.s64 + 14312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC3AC"))) PPC_WEAK_FUNC(sub_83CEC3AC);
PPC_FUNC_IMPL(__imp__sub_83CEC3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC3B0"))) PPC_WEAK_FUNC(sub_83CEC3B0);
PPC_FUNC_IMPL(__imp__sub_83CEC3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14320
	ctx.r3.s64 = ctx.r11.s64 + 14320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC3BC"))) PPC_WEAK_FUNC(sub_83CEC3BC);
PPC_FUNC_IMPL(__imp__sub_83CEC3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC3C0"))) PPC_WEAK_FUNC(sub_83CEC3C0);
PPC_FUNC_IMPL(__imp__sub_83CEC3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14328
	ctx.r3.s64 = ctx.r11.s64 + 14328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC3CC"))) PPC_WEAK_FUNC(sub_83CEC3CC);
PPC_FUNC_IMPL(__imp__sub_83CEC3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC3D0"))) PPC_WEAK_FUNC(sub_83CEC3D0);
PPC_FUNC_IMPL(__imp__sub_83CEC3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14336
	ctx.r3.s64 = ctx.r11.s64 + 14336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC3DC"))) PPC_WEAK_FUNC(sub_83CEC3DC);
PPC_FUNC_IMPL(__imp__sub_83CEC3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC3E0"))) PPC_WEAK_FUNC(sub_83CEC3E0);
PPC_FUNC_IMPL(__imp__sub_83CEC3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14344
	ctx.r3.s64 = ctx.r11.s64 + 14344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC3EC"))) PPC_WEAK_FUNC(sub_83CEC3EC);
PPC_FUNC_IMPL(__imp__sub_83CEC3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC3F0"))) PPC_WEAK_FUNC(sub_83CEC3F0);
PPC_FUNC_IMPL(__imp__sub_83CEC3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14352
	ctx.r3.s64 = ctx.r11.s64 + 14352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC3FC"))) PPC_WEAK_FUNC(sub_83CEC3FC);
PPC_FUNC_IMPL(__imp__sub_83CEC3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC400"))) PPC_WEAK_FUNC(sub_83CEC400);
PPC_FUNC_IMPL(__imp__sub_83CEC400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14360
	ctx.r3.s64 = ctx.r11.s64 + 14360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC40C"))) PPC_WEAK_FUNC(sub_83CEC40C);
PPC_FUNC_IMPL(__imp__sub_83CEC40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC410"))) PPC_WEAK_FUNC(sub_83CEC410);
PPC_FUNC_IMPL(__imp__sub_83CEC410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14368
	ctx.r3.s64 = ctx.r11.s64 + 14368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC41C"))) PPC_WEAK_FUNC(sub_83CEC41C);
PPC_FUNC_IMPL(__imp__sub_83CEC41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC420"))) PPC_WEAK_FUNC(sub_83CEC420);
PPC_FUNC_IMPL(__imp__sub_83CEC420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14376
	ctx.r3.s64 = ctx.r11.s64 + 14376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC42C"))) PPC_WEAK_FUNC(sub_83CEC42C);
PPC_FUNC_IMPL(__imp__sub_83CEC42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC430"))) PPC_WEAK_FUNC(sub_83CEC430);
PPC_FUNC_IMPL(__imp__sub_83CEC430) {
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
	// addi r3,r11,5213
	ctx.r3.s64 = ctx.r11.s64 + 5213;
	// bl 0x83523120
	ctx.lr = 0x83CEC448;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,14384
	ctx.r3.s64 = ctx.r10.s64 + 14384;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEC454;
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

__attribute__((alias("__imp__sub_83CEC464"))) PPC_WEAK_FUNC(sub_83CEC464);
PPC_FUNC_IMPL(__imp__sub_83CEC464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC468"))) PPC_WEAK_FUNC(sub_83CEC468);
PPC_FUNC_IMPL(__imp__sub_83CEC468) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5228
	ctx.r7.s64 = ctx.r8.s64 + 5228;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5228(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5228);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5228, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEC490"))) PPC_WEAK_FUNC(sub_83CEC490);
PPC_FUNC_IMPL(__imp__sub_83CEC490) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-28600
	ctx.r6.s64 = ctx.r7.s64 + -28600;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28672(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28672);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5228(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5228);
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
	// std r9,-28600(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28600, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEC4D8"))) PPC_WEAK_FUNC(sub_83CEC4D8);
PPC_FUNC_IMPL(__imp__sub_83CEC4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14400
	ctx.r3.s64 = ctx.r11.s64 + 14400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC4E4"))) PPC_WEAK_FUNC(sub_83CEC4E4);
PPC_FUNC_IMPL(__imp__sub_83CEC4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC4E8"))) PPC_WEAK_FUNC(sub_83CEC4E8);
PPC_FUNC_IMPL(__imp__sub_83CEC4E8) {
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
	// addi r3,r11,5240
	ctx.r3.s64 = ctx.r11.s64 + 5240;
	// bl 0x8259af80
	ctx.lr = 0x83CEC500;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,14416
	ctx.r3.s64 = ctx.r10.s64 + 14416;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEC50C;
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

__attribute__((alias("__imp__sub_83CEC51C"))) PPC_WEAK_FUNC(sub_83CEC51C);
PPC_FUNC_IMPL(__imp__sub_83CEC51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC520"))) PPC_WEAK_FUNC(sub_83CEC520);
PPC_FUNC_IMPL(__imp__sub_83CEC520) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5216
	ctx.r11.s64 = ctx.r8.s64 + 5216;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-28624(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28624);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14408
	ctx.r3.s64 = ctx.r6.s64 + 14408;
	// stw r10,5216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5216, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC550"))) PPC_WEAK_FUNC(sub_83CEC550);
PPC_FUNC_IMPL(__imp__sub_83CEC550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14424
	ctx.r3.s64 = ctx.r11.s64 + 14424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC55C"))) PPC_WEAK_FUNC(sub_83CEC55C);
PPC_FUNC_IMPL(__imp__sub_83CEC55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC560"))) PPC_WEAK_FUNC(sub_83CEC560);
PPC_FUNC_IMPL(__imp__sub_83CEC560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14432
	ctx.r3.s64 = ctx.r11.s64 + 14432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC56C"))) PPC_WEAK_FUNC(sub_83CEC56C);
PPC_FUNC_IMPL(__imp__sub_83CEC56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC570"))) PPC_WEAK_FUNC(sub_83CEC570);
PPC_FUNC_IMPL(__imp__sub_83CEC570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14440
	ctx.r3.s64 = ctx.r11.s64 + 14440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC57C"))) PPC_WEAK_FUNC(sub_83CEC57C);
PPC_FUNC_IMPL(__imp__sub_83CEC57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC580"))) PPC_WEAK_FUNC(sub_83CEC580);
PPC_FUNC_IMPL(__imp__sub_83CEC580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14448
	ctx.r3.s64 = ctx.r11.s64 + 14448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC58C"))) PPC_WEAK_FUNC(sub_83CEC58C);
PPC_FUNC_IMPL(__imp__sub_83CEC58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC590"))) PPC_WEAK_FUNC(sub_83CEC590);
PPC_FUNC_IMPL(__imp__sub_83CEC590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14456
	ctx.r3.s64 = ctx.r11.s64 + 14456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC59C"))) PPC_WEAK_FUNC(sub_83CEC59C);
PPC_FUNC_IMPL(__imp__sub_83CEC59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC5A0"))) PPC_WEAK_FUNC(sub_83CEC5A0);
PPC_FUNC_IMPL(__imp__sub_83CEC5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14464
	ctx.r3.s64 = ctx.r11.s64 + 14464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC5AC"))) PPC_WEAK_FUNC(sub_83CEC5AC);
PPC_FUNC_IMPL(__imp__sub_83CEC5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC5B0"))) PPC_WEAK_FUNC(sub_83CEC5B0);
PPC_FUNC_IMPL(__imp__sub_83CEC5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14472
	ctx.r3.s64 = ctx.r11.s64 + 14472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC5BC"))) PPC_WEAK_FUNC(sub_83CEC5BC);
PPC_FUNC_IMPL(__imp__sub_83CEC5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC5C0"))) PPC_WEAK_FUNC(sub_83CEC5C0);
PPC_FUNC_IMPL(__imp__sub_83CEC5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14480
	ctx.r3.s64 = ctx.r11.s64 + 14480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC5CC"))) PPC_WEAK_FUNC(sub_83CEC5CC);
PPC_FUNC_IMPL(__imp__sub_83CEC5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC5D0"))) PPC_WEAK_FUNC(sub_83CEC5D0);
PPC_FUNC_IMPL(__imp__sub_83CEC5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC5DC"))) PPC_WEAK_FUNC(sub_83CEC5DC);
PPC_FUNC_IMPL(__imp__sub_83CEC5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC5E0"))) PPC_WEAK_FUNC(sub_83CEC5E0);
PPC_FUNC_IMPL(__imp__sub_83CEC5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC5EC"))) PPC_WEAK_FUNC(sub_83CEC5EC);
PPC_FUNC_IMPL(__imp__sub_83CEC5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC5F0"))) PPC_WEAK_FUNC(sub_83CEC5F0);
PPC_FUNC_IMPL(__imp__sub_83CEC5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14504
	ctx.r3.s64 = ctx.r11.s64 + 14504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC5FC"))) PPC_WEAK_FUNC(sub_83CEC5FC);
PPC_FUNC_IMPL(__imp__sub_83CEC5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC600"))) PPC_WEAK_FUNC(sub_83CEC600);
PPC_FUNC_IMPL(__imp__sub_83CEC600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14512
	ctx.r3.s64 = ctx.r11.s64 + 14512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC60C"))) PPC_WEAK_FUNC(sub_83CEC60C);
PPC_FUNC_IMPL(__imp__sub_83CEC60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC610"))) PPC_WEAK_FUNC(sub_83CEC610);
PPC_FUNC_IMPL(__imp__sub_83CEC610) {
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
	// addi r3,r11,5600
	ctx.r3.s64 = ctx.r11.s64 + 5600;
	// bl 0x83523120
	ctx.lr = 0x83CEC628;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,14520
	ctx.r3.s64 = ctx.r10.s64 + 14520;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEC634;
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

__attribute__((alias("__imp__sub_83CEC644"))) PPC_WEAK_FUNC(sub_83CEC644);
PPC_FUNC_IMPL(__imp__sub_83CEC644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC648"))) PPC_WEAK_FUNC(sub_83CEC648);
PPC_FUNC_IMPL(__imp__sub_83CEC648) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5616
	ctx.r7.s64 = ctx.r8.s64 + 5616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5616(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5616);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5616(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5616, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEC670"))) PPC_WEAK_FUNC(sub_83CEC670);
PPC_FUNC_IMPL(__imp__sub_83CEC670) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-28468
	ctx.r6.s64 = ctx.r7.s64 + -28468;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28540(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28540);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5616(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5616);
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
	// std r9,-28468(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28468, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEC6B8"))) PPC_WEAK_FUNC(sub_83CEC6B8);
PPC_FUNC_IMPL(__imp__sub_83CEC6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14536
	ctx.r3.s64 = ctx.r11.s64 + 14536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC6C4"))) PPC_WEAK_FUNC(sub_83CEC6C4);
PPC_FUNC_IMPL(__imp__sub_83CEC6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC6C8"))) PPC_WEAK_FUNC(sub_83CEC6C8);
PPC_FUNC_IMPL(__imp__sub_83CEC6C8) {
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
	// addi r3,r11,5624
	ctx.r3.s64 = ctx.r11.s64 + 5624;
	// bl 0x8259af80
	ctx.lr = 0x83CEC6E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,14552
	ctx.r3.s64 = ctx.r10.s64 + 14552;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEC6EC;
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

__attribute__((alias("__imp__sub_83CEC6FC"))) PPC_WEAK_FUNC(sub_83CEC6FC);
PPC_FUNC_IMPL(__imp__sub_83CEC6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC700"))) PPC_WEAK_FUNC(sub_83CEC700);
PPC_FUNC_IMPL(__imp__sub_83CEC700) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5604
	ctx.r11.s64 = ctx.r8.s64 + 5604;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-28492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28492);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14544
	ctx.r3.s64 = ctx.r6.s64 + 14544;
	// stw r10,5604(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5604, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC730"))) PPC_WEAK_FUNC(sub_83CEC730);
PPC_FUNC_IMPL(__imp__sub_83CEC730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14560
	ctx.r3.s64 = ctx.r11.s64 + 14560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC73C"))) PPC_WEAK_FUNC(sub_83CEC73C);
PPC_FUNC_IMPL(__imp__sub_83CEC73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC740"))) PPC_WEAK_FUNC(sub_83CEC740);
PPC_FUNC_IMPL(__imp__sub_83CEC740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14568
	ctx.r3.s64 = ctx.r11.s64 + 14568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC74C"))) PPC_WEAK_FUNC(sub_83CEC74C);
PPC_FUNC_IMPL(__imp__sub_83CEC74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC750"))) PPC_WEAK_FUNC(sub_83CEC750);
PPC_FUNC_IMPL(__imp__sub_83CEC750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14576
	ctx.r3.s64 = ctx.r11.s64 + 14576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC75C"))) PPC_WEAK_FUNC(sub_83CEC75C);
PPC_FUNC_IMPL(__imp__sub_83CEC75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC760"))) PPC_WEAK_FUNC(sub_83CEC760);
PPC_FUNC_IMPL(__imp__sub_83CEC760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14584
	ctx.r3.s64 = ctx.r11.s64 + 14584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC76C"))) PPC_WEAK_FUNC(sub_83CEC76C);
PPC_FUNC_IMPL(__imp__sub_83CEC76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC770"))) PPC_WEAK_FUNC(sub_83CEC770);
PPC_FUNC_IMPL(__imp__sub_83CEC770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14592
	ctx.r3.s64 = ctx.r11.s64 + 14592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC77C"))) PPC_WEAK_FUNC(sub_83CEC77C);
PPC_FUNC_IMPL(__imp__sub_83CEC77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC780"))) PPC_WEAK_FUNC(sub_83CEC780);
PPC_FUNC_IMPL(__imp__sub_83CEC780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14600
	ctx.r3.s64 = ctx.r11.s64 + 14600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC78C"))) PPC_WEAK_FUNC(sub_83CEC78C);
PPC_FUNC_IMPL(__imp__sub_83CEC78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC790"))) PPC_WEAK_FUNC(sub_83CEC790);
PPC_FUNC_IMPL(__imp__sub_83CEC790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14608
	ctx.r3.s64 = ctx.r11.s64 + 14608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC79C"))) PPC_WEAK_FUNC(sub_83CEC79C);
PPC_FUNC_IMPL(__imp__sub_83CEC79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC7A0"))) PPC_WEAK_FUNC(sub_83CEC7A0);
PPC_FUNC_IMPL(__imp__sub_83CEC7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14616
	ctx.r3.s64 = ctx.r11.s64 + 14616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC7AC"))) PPC_WEAK_FUNC(sub_83CEC7AC);
PPC_FUNC_IMPL(__imp__sub_83CEC7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC7B0"))) PPC_WEAK_FUNC(sub_83CEC7B0);
PPC_FUNC_IMPL(__imp__sub_83CEC7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14624
	ctx.r3.s64 = ctx.r11.s64 + 14624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC7BC"))) PPC_WEAK_FUNC(sub_83CEC7BC);
PPC_FUNC_IMPL(__imp__sub_83CEC7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC7C0"))) PPC_WEAK_FUNC(sub_83CEC7C0);
PPC_FUNC_IMPL(__imp__sub_83CEC7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14632
	ctx.r3.s64 = ctx.r11.s64 + 14632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC7CC"))) PPC_WEAK_FUNC(sub_83CEC7CC);
PPC_FUNC_IMPL(__imp__sub_83CEC7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC7D0"))) PPC_WEAK_FUNC(sub_83CEC7D0);
PPC_FUNC_IMPL(__imp__sub_83CEC7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14640
	ctx.r3.s64 = ctx.r11.s64 + 14640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC7DC"))) PPC_WEAK_FUNC(sub_83CEC7DC);
PPC_FUNC_IMPL(__imp__sub_83CEC7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC7E0"))) PPC_WEAK_FUNC(sub_83CEC7E0);
PPC_FUNC_IMPL(__imp__sub_83CEC7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14648
	ctx.r3.s64 = ctx.r11.s64 + 14648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC7EC"))) PPC_WEAK_FUNC(sub_83CEC7EC);
PPC_FUNC_IMPL(__imp__sub_83CEC7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC7F0"))) PPC_WEAK_FUNC(sub_83CEC7F0);
PPC_FUNC_IMPL(__imp__sub_83CEC7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14656
	ctx.r3.s64 = ctx.r11.s64 + 14656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC7FC"))) PPC_WEAK_FUNC(sub_83CEC7FC);
PPC_FUNC_IMPL(__imp__sub_83CEC7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC800"))) PPC_WEAK_FUNC(sub_83CEC800);
PPC_FUNC_IMPL(__imp__sub_83CEC800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14664
	ctx.r3.s64 = ctx.r11.s64 + 14664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC80C"))) PPC_WEAK_FUNC(sub_83CEC80C);
PPC_FUNC_IMPL(__imp__sub_83CEC80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC810"))) PPC_WEAK_FUNC(sub_83CEC810);
PPC_FUNC_IMPL(__imp__sub_83CEC810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14672
	ctx.r3.s64 = ctx.r11.s64 + 14672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC81C"))) PPC_WEAK_FUNC(sub_83CEC81C);
PPC_FUNC_IMPL(__imp__sub_83CEC81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC820"))) PPC_WEAK_FUNC(sub_83CEC820);
PPC_FUNC_IMPL(__imp__sub_83CEC820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14680
	ctx.r3.s64 = ctx.r11.s64 + 14680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC82C"))) PPC_WEAK_FUNC(sub_83CEC82C);
PPC_FUNC_IMPL(__imp__sub_83CEC82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC830"))) PPC_WEAK_FUNC(sub_83CEC830);
PPC_FUNC_IMPL(__imp__sub_83CEC830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14688
	ctx.r3.s64 = ctx.r11.s64 + 14688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC83C"))) PPC_WEAK_FUNC(sub_83CEC83C);
PPC_FUNC_IMPL(__imp__sub_83CEC83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC840"))) PPC_WEAK_FUNC(sub_83CEC840);
PPC_FUNC_IMPL(__imp__sub_83CEC840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14696
	ctx.r3.s64 = ctx.r11.s64 + 14696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC84C"))) PPC_WEAK_FUNC(sub_83CEC84C);
PPC_FUNC_IMPL(__imp__sub_83CEC84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC850"))) PPC_WEAK_FUNC(sub_83CEC850);
PPC_FUNC_IMPL(__imp__sub_83CEC850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14704
	ctx.r3.s64 = ctx.r11.s64 + 14704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC85C"))) PPC_WEAK_FUNC(sub_83CEC85C);
PPC_FUNC_IMPL(__imp__sub_83CEC85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC860"))) PPC_WEAK_FUNC(sub_83CEC860);
PPC_FUNC_IMPL(__imp__sub_83CEC860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14712
	ctx.r3.s64 = ctx.r11.s64 + 14712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC86C"))) PPC_WEAK_FUNC(sub_83CEC86C);
PPC_FUNC_IMPL(__imp__sub_83CEC86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC870"))) PPC_WEAK_FUNC(sub_83CEC870);
PPC_FUNC_IMPL(__imp__sub_83CEC870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14720
	ctx.r3.s64 = ctx.r11.s64 + 14720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC87C"))) PPC_WEAK_FUNC(sub_83CEC87C);
PPC_FUNC_IMPL(__imp__sub_83CEC87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC880"))) PPC_WEAK_FUNC(sub_83CEC880);
PPC_FUNC_IMPL(__imp__sub_83CEC880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14728
	ctx.r3.s64 = ctx.r11.s64 + 14728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC88C"))) PPC_WEAK_FUNC(sub_83CEC88C);
PPC_FUNC_IMPL(__imp__sub_83CEC88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC890"))) PPC_WEAK_FUNC(sub_83CEC890);
PPC_FUNC_IMPL(__imp__sub_83CEC890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14736
	ctx.r3.s64 = ctx.r11.s64 + 14736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC89C"))) PPC_WEAK_FUNC(sub_83CEC89C);
PPC_FUNC_IMPL(__imp__sub_83CEC89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC8A0"))) PPC_WEAK_FUNC(sub_83CEC8A0);
PPC_FUNC_IMPL(__imp__sub_83CEC8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14744
	ctx.r3.s64 = ctx.r11.s64 + 14744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC8AC"))) PPC_WEAK_FUNC(sub_83CEC8AC);
PPC_FUNC_IMPL(__imp__sub_83CEC8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC8B0"))) PPC_WEAK_FUNC(sub_83CEC8B0);
PPC_FUNC_IMPL(__imp__sub_83CEC8B0) {
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
	// addi r3,r11,5976
	ctx.r3.s64 = ctx.r11.s64 + 5976;
	// bl 0x83523120
	ctx.lr = 0x83CEC8C8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,14752
	ctx.r3.s64 = ctx.r10.s64 + 14752;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEC8D4;
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

__attribute__((alias("__imp__sub_83CEC8E4"))) PPC_WEAK_FUNC(sub_83CEC8E4);
PPC_FUNC_IMPL(__imp__sub_83CEC8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC8E8"))) PPC_WEAK_FUNC(sub_83CEC8E8);
PPC_FUNC_IMPL(__imp__sub_83CEC8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5992
	ctx.r7.s64 = ctx.r8.s64 + 5992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEC910"))) PPC_WEAK_FUNC(sub_83CEC910);
PPC_FUNC_IMPL(__imp__sub_83CEC910) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-28236
	ctx.r6.s64 = ctx.r7.s64 + -28236;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28308(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28308);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5992);
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
	// std r9,-28236(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28236, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEC958"))) PPC_WEAK_FUNC(sub_83CEC958);
PPC_FUNC_IMPL(__imp__sub_83CEC958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14768
	ctx.r3.s64 = ctx.r11.s64 + 14768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC964"))) PPC_WEAK_FUNC(sub_83CEC964);
PPC_FUNC_IMPL(__imp__sub_83CEC964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC968"))) PPC_WEAK_FUNC(sub_83CEC968);
PPC_FUNC_IMPL(__imp__sub_83CEC968) {
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
	// addi r3,r11,6000
	ctx.r3.s64 = ctx.r11.s64 + 6000;
	// bl 0x8259af80
	ctx.lr = 0x83CEC980;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,14784
	ctx.r3.s64 = ctx.r10.s64 + 14784;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEC98C;
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

__attribute__((alias("__imp__sub_83CEC99C"))) PPC_WEAK_FUNC(sub_83CEC99C);
PPC_FUNC_IMPL(__imp__sub_83CEC99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC9A0"))) PPC_WEAK_FUNC(sub_83CEC9A0);
PPC_FUNC_IMPL(__imp__sub_83CEC9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5980
	ctx.r11.s64 = ctx.r8.s64 + 5980;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-28260(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28260);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14776
	ctx.r3.s64 = ctx.r6.s64 + 14776;
	// stw r10,5980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC9D0"))) PPC_WEAK_FUNC(sub_83CEC9D0);
PPC_FUNC_IMPL(__imp__sub_83CEC9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14792
	ctx.r3.s64 = ctx.r11.s64 + 14792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC9DC"))) PPC_WEAK_FUNC(sub_83CEC9DC);
PPC_FUNC_IMPL(__imp__sub_83CEC9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC9E0"))) PPC_WEAK_FUNC(sub_83CEC9E0);
PPC_FUNC_IMPL(__imp__sub_83CEC9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14800
	ctx.r3.s64 = ctx.r11.s64 + 14800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC9EC"))) PPC_WEAK_FUNC(sub_83CEC9EC);
PPC_FUNC_IMPL(__imp__sub_83CEC9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC9F0"))) PPC_WEAK_FUNC(sub_83CEC9F0);
PPC_FUNC_IMPL(__imp__sub_83CEC9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14808
	ctx.r3.s64 = ctx.r11.s64 + 14808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC9FC"))) PPC_WEAK_FUNC(sub_83CEC9FC);
PPC_FUNC_IMPL(__imp__sub_83CEC9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECA00"))) PPC_WEAK_FUNC(sub_83CECA00);
PPC_FUNC_IMPL(__imp__sub_83CECA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14816
	ctx.r3.s64 = ctx.r11.s64 + 14816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECA0C"))) PPC_WEAK_FUNC(sub_83CECA0C);
PPC_FUNC_IMPL(__imp__sub_83CECA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECA10"))) PPC_WEAK_FUNC(sub_83CECA10);
PPC_FUNC_IMPL(__imp__sub_83CECA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14824
	ctx.r3.s64 = ctx.r11.s64 + 14824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECA1C"))) PPC_WEAK_FUNC(sub_83CECA1C);
PPC_FUNC_IMPL(__imp__sub_83CECA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECA20"))) PPC_WEAK_FUNC(sub_83CECA20);
PPC_FUNC_IMPL(__imp__sub_83CECA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14832
	ctx.r3.s64 = ctx.r11.s64 + 14832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECA2C"))) PPC_WEAK_FUNC(sub_83CECA2C);
PPC_FUNC_IMPL(__imp__sub_83CECA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECA30"))) PPC_WEAK_FUNC(sub_83CECA30);
PPC_FUNC_IMPL(__imp__sub_83CECA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14840
	ctx.r3.s64 = ctx.r11.s64 + 14840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECA3C"))) PPC_WEAK_FUNC(sub_83CECA3C);
PPC_FUNC_IMPL(__imp__sub_83CECA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECA40"))) PPC_WEAK_FUNC(sub_83CECA40);
PPC_FUNC_IMPL(__imp__sub_83CECA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14848
	ctx.r3.s64 = ctx.r11.s64 + 14848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECA4C"))) PPC_WEAK_FUNC(sub_83CECA4C);
PPC_FUNC_IMPL(__imp__sub_83CECA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECA50"))) PPC_WEAK_FUNC(sub_83CECA50);
PPC_FUNC_IMPL(__imp__sub_83CECA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14856
	ctx.r3.s64 = ctx.r11.s64 + 14856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECA5C"))) PPC_WEAK_FUNC(sub_83CECA5C);
PPC_FUNC_IMPL(__imp__sub_83CECA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECA60"))) PPC_WEAK_FUNC(sub_83CECA60);
PPC_FUNC_IMPL(__imp__sub_83CECA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14864
	ctx.r3.s64 = ctx.r11.s64 + 14864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECA6C"))) PPC_WEAK_FUNC(sub_83CECA6C);
PPC_FUNC_IMPL(__imp__sub_83CECA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECA70"))) PPC_WEAK_FUNC(sub_83CECA70);
PPC_FUNC_IMPL(__imp__sub_83CECA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14872
	ctx.r3.s64 = ctx.r11.s64 + 14872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECA7C"))) PPC_WEAK_FUNC(sub_83CECA7C);
PPC_FUNC_IMPL(__imp__sub_83CECA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECA80"))) PPC_WEAK_FUNC(sub_83CECA80);
PPC_FUNC_IMPL(__imp__sub_83CECA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14880
	ctx.r3.s64 = ctx.r11.s64 + 14880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECA8C"))) PPC_WEAK_FUNC(sub_83CECA8C);
PPC_FUNC_IMPL(__imp__sub_83CECA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECA90"))) PPC_WEAK_FUNC(sub_83CECA90);
PPC_FUNC_IMPL(__imp__sub_83CECA90) {
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
	// addi r3,r11,6344
	ctx.r3.s64 = ctx.r11.s64 + 6344;
	// bl 0x83523120
	ctx.lr = 0x83CECAA8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,14888
	ctx.r3.s64 = ctx.r10.s64 + 14888;
	// bl 0x831cdcc8
	ctx.lr = 0x83CECAB4;
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

__attribute__((alias("__imp__sub_83CECAC4"))) PPC_WEAK_FUNC(sub_83CECAC4);
PPC_FUNC_IMPL(__imp__sub_83CECAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECAC8"))) PPC_WEAK_FUNC(sub_83CECAC8);
PPC_FUNC_IMPL(__imp__sub_83CECAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6360
	ctx.r7.s64 = ctx.r8.s64 + 6360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CECAF0"))) PPC_WEAK_FUNC(sub_83CECAF0);
PPC_FUNC_IMPL(__imp__sub_83CECAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-28064
	ctx.r6.s64 = ctx.r7.s64 + -28064;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28136(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28136);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6360);
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
	// std r9,-28064(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28064, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CECB38"))) PPC_WEAK_FUNC(sub_83CECB38);
PPC_FUNC_IMPL(__imp__sub_83CECB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14904
	ctx.r3.s64 = ctx.r11.s64 + 14904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECB44"))) PPC_WEAK_FUNC(sub_83CECB44);
PPC_FUNC_IMPL(__imp__sub_83CECB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECB48"))) PPC_WEAK_FUNC(sub_83CECB48);
PPC_FUNC_IMPL(__imp__sub_83CECB48) {
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
	// addi r3,r11,6368
	ctx.r3.s64 = ctx.r11.s64 + 6368;
	// bl 0x8259af80
	ctx.lr = 0x83CECB60;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,14920
	ctx.r3.s64 = ctx.r10.s64 + 14920;
	// bl 0x831cdcc8
	ctx.lr = 0x83CECB6C;
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

__attribute__((alias("__imp__sub_83CECB7C"))) PPC_WEAK_FUNC(sub_83CECB7C);
PPC_FUNC_IMPL(__imp__sub_83CECB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECB80"))) PPC_WEAK_FUNC(sub_83CECB80);
PPC_FUNC_IMPL(__imp__sub_83CECB80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6348
	ctx.r11.s64 = ctx.r8.s64 + 6348;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-28088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28088);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14912
	ctx.r3.s64 = ctx.r6.s64 + 14912;
	// stw r10,6348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECBB0"))) PPC_WEAK_FUNC(sub_83CECBB0);
PPC_FUNC_IMPL(__imp__sub_83CECBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14928
	ctx.r3.s64 = ctx.r11.s64 + 14928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECBBC"))) PPC_WEAK_FUNC(sub_83CECBBC);
PPC_FUNC_IMPL(__imp__sub_83CECBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECBC0"))) PPC_WEAK_FUNC(sub_83CECBC0);
PPC_FUNC_IMPL(__imp__sub_83CECBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14936
	ctx.r3.s64 = ctx.r11.s64 + 14936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECBCC"))) PPC_WEAK_FUNC(sub_83CECBCC);
PPC_FUNC_IMPL(__imp__sub_83CECBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECBD0"))) PPC_WEAK_FUNC(sub_83CECBD0);
PPC_FUNC_IMPL(__imp__sub_83CECBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14944
	ctx.r3.s64 = ctx.r11.s64 + 14944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECBDC"))) PPC_WEAK_FUNC(sub_83CECBDC);
PPC_FUNC_IMPL(__imp__sub_83CECBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECBE0"))) PPC_WEAK_FUNC(sub_83CECBE0);
PPC_FUNC_IMPL(__imp__sub_83CECBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14952
	ctx.r3.s64 = ctx.r11.s64 + 14952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECBEC"))) PPC_WEAK_FUNC(sub_83CECBEC);
PPC_FUNC_IMPL(__imp__sub_83CECBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECBF0"))) PPC_WEAK_FUNC(sub_83CECBF0);
PPC_FUNC_IMPL(__imp__sub_83CECBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14960
	ctx.r3.s64 = ctx.r11.s64 + 14960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECBFC"))) PPC_WEAK_FUNC(sub_83CECBFC);
PPC_FUNC_IMPL(__imp__sub_83CECBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECC00"))) PPC_WEAK_FUNC(sub_83CECC00);
PPC_FUNC_IMPL(__imp__sub_83CECC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14968
	ctx.r3.s64 = ctx.r11.s64 + 14968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECC0C"))) PPC_WEAK_FUNC(sub_83CECC0C);
PPC_FUNC_IMPL(__imp__sub_83CECC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECC10"))) PPC_WEAK_FUNC(sub_83CECC10);
PPC_FUNC_IMPL(__imp__sub_83CECC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14976
	ctx.r3.s64 = ctx.r11.s64 + 14976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECC1C"))) PPC_WEAK_FUNC(sub_83CECC1C);
PPC_FUNC_IMPL(__imp__sub_83CECC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECC20"))) PPC_WEAK_FUNC(sub_83CECC20);
PPC_FUNC_IMPL(__imp__sub_83CECC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14984
	ctx.r3.s64 = ctx.r11.s64 + 14984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECC2C"))) PPC_WEAK_FUNC(sub_83CECC2C);
PPC_FUNC_IMPL(__imp__sub_83CECC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECC30"))) PPC_WEAK_FUNC(sub_83CECC30);
PPC_FUNC_IMPL(__imp__sub_83CECC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14992
	ctx.r3.s64 = ctx.r11.s64 + 14992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECC3C"))) PPC_WEAK_FUNC(sub_83CECC3C);
PPC_FUNC_IMPL(__imp__sub_83CECC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECC40"))) PPC_WEAK_FUNC(sub_83CECC40);
PPC_FUNC_IMPL(__imp__sub_83CECC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15000
	ctx.r3.s64 = ctx.r11.s64 + 15000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECC4C"))) PPC_WEAK_FUNC(sub_83CECC4C);
PPC_FUNC_IMPL(__imp__sub_83CECC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECC50"))) PPC_WEAK_FUNC(sub_83CECC50);
PPC_FUNC_IMPL(__imp__sub_83CECC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15008
	ctx.r3.s64 = ctx.r11.s64 + 15008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECC5C"))) PPC_WEAK_FUNC(sub_83CECC5C);
PPC_FUNC_IMPL(__imp__sub_83CECC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECC60"))) PPC_WEAK_FUNC(sub_83CECC60);
PPC_FUNC_IMPL(__imp__sub_83CECC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15016
	ctx.r3.s64 = ctx.r11.s64 + 15016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECC6C"))) PPC_WEAK_FUNC(sub_83CECC6C);
PPC_FUNC_IMPL(__imp__sub_83CECC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECC70"))) PPC_WEAK_FUNC(sub_83CECC70);
PPC_FUNC_IMPL(__imp__sub_83CECC70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6728
	ctx.r7.s64 = ctx.r8.s64 + 6728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6728);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6728, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CECC98"))) PPC_WEAK_FUNC(sub_83CECC98);
PPC_FUNC_IMPL(__imp__sub_83CECC98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-27936
	ctx.r6.s64 = ctx.r7.s64 + -27936;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28008(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28008);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6728(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
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
	// std r9,-27936(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27936, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CECCE0"))) PPC_WEAK_FUNC(sub_83CECCE0);
PPC_FUNC_IMPL(__imp__sub_83CECCE0) {
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
	// addi r3,r11,6712
	ctx.r3.s64 = ctx.r11.s64 + 6712;
	// bl 0x83523120
	ctx.lr = 0x83CECCF8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,15024
	ctx.r3.s64 = ctx.r10.s64 + 15024;
	// bl 0x831cdcc8
	ctx.lr = 0x83CECD04;
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

__attribute__((alias("__imp__sub_83CECD14"))) PPC_WEAK_FUNC(sub_83CECD14);
PPC_FUNC_IMPL(__imp__sub_83CECD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECD18"))) PPC_WEAK_FUNC(sub_83CECD18);
PPC_FUNC_IMPL(__imp__sub_83CECD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,15040
	ctx.r3.s64 = ctx.r11.s64 + 15040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CECD24"))) PPC_WEAK_FUNC(sub_83CECD24);
PPC_FUNC_IMPL(__imp__sub_83CECD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CECD28"))) PPC_WEAK_FUNC(sub_83CECD28);
PPC_FUNC_IMPL(__imp__sub_83CECD28) {
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
	// addi r3,r11,6736
	ctx.r3.s64 = ctx.r11.s64 + 6736;
	// bl 0x8259af80
	ctx.lr = 0x83CECD40;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,15056
	ctx.r3.s64 = ctx.r10.s64 + 15056;
	// bl 0x831cdcc8
	ctx.lr = 0x83CECD4C;
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

__attribute__((alias("__imp__sub_83CECD5C"))) PPC_WEAK_FUNC(sub_83CECD5C);
PPC_FUNC_IMPL(__imp__sub_83CECD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

