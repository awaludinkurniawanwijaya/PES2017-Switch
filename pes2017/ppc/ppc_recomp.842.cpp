#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C7C3B0"))) PPC_WEAK_FUNC(sub_83C7C3B0);
PPC_FUNC_IMPL(__imp__sub_83C7C3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16216
	ctx.r3.s64 = ctx.r11.s64 + -16216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C3BC"))) PPC_WEAK_FUNC(sub_83C7C3BC);
PPC_FUNC_IMPL(__imp__sub_83C7C3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C3C0"))) PPC_WEAK_FUNC(sub_83C7C3C0);
PPC_FUNC_IMPL(__imp__sub_83C7C3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16208
	ctx.r3.s64 = ctx.r11.s64 + -16208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C3CC"))) PPC_WEAK_FUNC(sub_83C7C3CC);
PPC_FUNC_IMPL(__imp__sub_83C7C3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C3D0"))) PPC_WEAK_FUNC(sub_83C7C3D0);
PPC_FUNC_IMPL(__imp__sub_83C7C3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16200
	ctx.r3.s64 = ctx.r11.s64 + -16200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C3DC"))) PPC_WEAK_FUNC(sub_83C7C3DC);
PPC_FUNC_IMPL(__imp__sub_83C7C3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C3E0"))) PPC_WEAK_FUNC(sub_83C7C3E0);
PPC_FUNC_IMPL(__imp__sub_83C7C3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16192
	ctx.r3.s64 = ctx.r11.s64 + -16192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C3EC"))) PPC_WEAK_FUNC(sub_83C7C3EC);
PPC_FUNC_IMPL(__imp__sub_83C7C3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C3F0"))) PPC_WEAK_FUNC(sub_83C7C3F0);
PPC_FUNC_IMPL(__imp__sub_83C7C3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16184
	ctx.r3.s64 = ctx.r11.s64 + -16184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C3FC"))) PPC_WEAK_FUNC(sub_83C7C3FC);
PPC_FUNC_IMPL(__imp__sub_83C7C3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C400"))) PPC_WEAK_FUNC(sub_83C7C400);
PPC_FUNC_IMPL(__imp__sub_83C7C400) {
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
	// addi r3,r11,12188
	ctx.r3.s64 = ctx.r11.s64 + 12188;
	// bl 0x83523120
	ctx.lr = 0x83C7C418;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-16176
	ctx.r3.s64 = ctx.r10.s64 + -16176;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7C424;
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

__attribute__((alias("__imp__sub_83C7C434"))) PPC_WEAK_FUNC(sub_83C7C434);
PPC_FUNC_IMPL(__imp__sub_83C7C434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C438"))) PPC_WEAK_FUNC(sub_83C7C438);
PPC_FUNC_IMPL(__imp__sub_83C7C438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16160
	ctx.r3.s64 = ctx.r11.s64 + -16160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C444"))) PPC_WEAK_FUNC(sub_83C7C444);
PPC_FUNC_IMPL(__imp__sub_83C7C444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C448"))) PPC_WEAK_FUNC(sub_83C7C448);
PPC_FUNC_IMPL(__imp__sub_83C7C448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16152
	ctx.r3.s64 = ctx.r11.s64 + -16152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C454"))) PPC_WEAK_FUNC(sub_83C7C454);
PPC_FUNC_IMPL(__imp__sub_83C7C454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C458"))) PPC_WEAK_FUNC(sub_83C7C458);
PPC_FUNC_IMPL(__imp__sub_83C7C458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16144
	ctx.r3.s64 = ctx.r11.s64 + -16144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C464"))) PPC_WEAK_FUNC(sub_83C7C464);
PPC_FUNC_IMPL(__imp__sub_83C7C464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C468"))) PPC_WEAK_FUNC(sub_83C7C468);
PPC_FUNC_IMPL(__imp__sub_83C7C468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16136
	ctx.r3.s64 = ctx.r11.s64 + -16136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C474"))) PPC_WEAK_FUNC(sub_83C7C474);
PPC_FUNC_IMPL(__imp__sub_83C7C474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C478"))) PPC_WEAK_FUNC(sub_83C7C478);
PPC_FUNC_IMPL(__imp__sub_83C7C478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16128
	ctx.r3.s64 = ctx.r11.s64 + -16128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C484"))) PPC_WEAK_FUNC(sub_83C7C484);
PPC_FUNC_IMPL(__imp__sub_83C7C484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C488"))) PPC_WEAK_FUNC(sub_83C7C488);
PPC_FUNC_IMPL(__imp__sub_83C7C488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16120
	ctx.r3.s64 = ctx.r11.s64 + -16120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C494"))) PPC_WEAK_FUNC(sub_83C7C494);
PPC_FUNC_IMPL(__imp__sub_83C7C494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C498"))) PPC_WEAK_FUNC(sub_83C7C498);
PPC_FUNC_IMPL(__imp__sub_83C7C498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16112
	ctx.r3.s64 = ctx.r11.s64 + -16112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C4A4"))) PPC_WEAK_FUNC(sub_83C7C4A4);
PPC_FUNC_IMPL(__imp__sub_83C7C4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C4A8"))) PPC_WEAK_FUNC(sub_83C7C4A8);
PPC_FUNC_IMPL(__imp__sub_83C7C4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16104
	ctx.r3.s64 = ctx.r11.s64 + -16104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C4B4"))) PPC_WEAK_FUNC(sub_83C7C4B4);
PPC_FUNC_IMPL(__imp__sub_83C7C4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C4B8"))) PPC_WEAK_FUNC(sub_83C7C4B8);
PPC_FUNC_IMPL(__imp__sub_83C7C4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16096
	ctx.r3.s64 = ctx.r11.s64 + -16096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C4C4"))) PPC_WEAK_FUNC(sub_83C7C4C4);
PPC_FUNC_IMPL(__imp__sub_83C7C4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C4C8"))) PPC_WEAK_FUNC(sub_83C7C4C8);
PPC_FUNC_IMPL(__imp__sub_83C7C4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16088
	ctx.r3.s64 = ctx.r11.s64 + -16088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C4D4"))) PPC_WEAK_FUNC(sub_83C7C4D4);
PPC_FUNC_IMPL(__imp__sub_83C7C4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C4D8"))) PPC_WEAK_FUNC(sub_83C7C4D8);
PPC_FUNC_IMPL(__imp__sub_83C7C4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16080
	ctx.r3.s64 = ctx.r11.s64 + -16080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C4E4"))) PPC_WEAK_FUNC(sub_83C7C4E4);
PPC_FUNC_IMPL(__imp__sub_83C7C4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C4E8"))) PPC_WEAK_FUNC(sub_83C7C4E8);
PPC_FUNC_IMPL(__imp__sub_83C7C4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16072
	ctx.r3.s64 = ctx.r11.s64 + -16072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C4F4"))) PPC_WEAK_FUNC(sub_83C7C4F4);
PPC_FUNC_IMPL(__imp__sub_83C7C4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C4F8"))) PPC_WEAK_FUNC(sub_83C7C4F8);
PPC_FUNC_IMPL(__imp__sub_83C7C4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16064
	ctx.r3.s64 = ctx.r11.s64 + -16064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C504"))) PPC_WEAK_FUNC(sub_83C7C504);
PPC_FUNC_IMPL(__imp__sub_83C7C504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C508"))) PPC_WEAK_FUNC(sub_83C7C508);
PPC_FUNC_IMPL(__imp__sub_83C7C508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16056
	ctx.r3.s64 = ctx.r11.s64 + -16056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C514"))) PPC_WEAK_FUNC(sub_83C7C514);
PPC_FUNC_IMPL(__imp__sub_83C7C514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C518"))) PPC_WEAK_FUNC(sub_83C7C518);
PPC_FUNC_IMPL(__imp__sub_83C7C518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16048
	ctx.r3.s64 = ctx.r11.s64 + -16048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C524"))) PPC_WEAK_FUNC(sub_83C7C524);
PPC_FUNC_IMPL(__imp__sub_83C7C524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C528"))) PPC_WEAK_FUNC(sub_83C7C528);
PPC_FUNC_IMPL(__imp__sub_83C7C528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16040
	ctx.r3.s64 = ctx.r11.s64 + -16040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C534"))) PPC_WEAK_FUNC(sub_83C7C534);
PPC_FUNC_IMPL(__imp__sub_83C7C534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C538"))) PPC_WEAK_FUNC(sub_83C7C538);
PPC_FUNC_IMPL(__imp__sub_83C7C538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16032
	ctx.r3.s64 = ctx.r11.s64 + -16032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C544"))) PPC_WEAK_FUNC(sub_83C7C544);
PPC_FUNC_IMPL(__imp__sub_83C7C544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C548"))) PPC_WEAK_FUNC(sub_83C7C548);
PPC_FUNC_IMPL(__imp__sub_83C7C548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16024
	ctx.r3.s64 = ctx.r11.s64 + -16024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C554"))) PPC_WEAK_FUNC(sub_83C7C554);
PPC_FUNC_IMPL(__imp__sub_83C7C554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C558"))) PPC_WEAK_FUNC(sub_83C7C558);
PPC_FUNC_IMPL(__imp__sub_83C7C558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16016
	ctx.r3.s64 = ctx.r11.s64 + -16016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C564"))) PPC_WEAK_FUNC(sub_83C7C564);
PPC_FUNC_IMPL(__imp__sub_83C7C564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C568"))) PPC_WEAK_FUNC(sub_83C7C568);
PPC_FUNC_IMPL(__imp__sub_83C7C568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16008
	ctx.r3.s64 = ctx.r11.s64 + -16008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C574"))) PPC_WEAK_FUNC(sub_83C7C574);
PPC_FUNC_IMPL(__imp__sub_83C7C574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C578"))) PPC_WEAK_FUNC(sub_83C7C578);
PPC_FUNC_IMPL(__imp__sub_83C7C578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-16000
	ctx.r3.s64 = ctx.r11.s64 + -16000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C584"))) PPC_WEAK_FUNC(sub_83C7C584);
PPC_FUNC_IMPL(__imp__sub_83C7C584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C588"))) PPC_WEAK_FUNC(sub_83C7C588);
PPC_FUNC_IMPL(__imp__sub_83C7C588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15992
	ctx.r3.s64 = ctx.r11.s64 + -15992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C594"))) PPC_WEAK_FUNC(sub_83C7C594);
PPC_FUNC_IMPL(__imp__sub_83C7C594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C598"))) PPC_WEAK_FUNC(sub_83C7C598);
PPC_FUNC_IMPL(__imp__sub_83C7C598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15984
	ctx.r3.s64 = ctx.r11.s64 + -15984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C5A4"))) PPC_WEAK_FUNC(sub_83C7C5A4);
PPC_FUNC_IMPL(__imp__sub_83C7C5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C5A8"))) PPC_WEAK_FUNC(sub_83C7C5A8);
PPC_FUNC_IMPL(__imp__sub_83C7C5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15976
	ctx.r3.s64 = ctx.r11.s64 + -15976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C5B4"))) PPC_WEAK_FUNC(sub_83C7C5B4);
PPC_FUNC_IMPL(__imp__sub_83C7C5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C5B8"))) PPC_WEAK_FUNC(sub_83C7C5B8);
PPC_FUNC_IMPL(__imp__sub_83C7C5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15968
	ctx.r3.s64 = ctx.r11.s64 + -15968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C5C4"))) PPC_WEAK_FUNC(sub_83C7C5C4);
PPC_FUNC_IMPL(__imp__sub_83C7C5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C5C8"))) PPC_WEAK_FUNC(sub_83C7C5C8);
PPC_FUNC_IMPL(__imp__sub_83C7C5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15960
	ctx.r3.s64 = ctx.r11.s64 + -15960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C5D4"))) PPC_WEAK_FUNC(sub_83C7C5D4);
PPC_FUNC_IMPL(__imp__sub_83C7C5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C5D8"))) PPC_WEAK_FUNC(sub_83C7C5D8);
PPC_FUNC_IMPL(__imp__sub_83C7C5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15952
	ctx.r3.s64 = ctx.r11.s64 + -15952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C5E4"))) PPC_WEAK_FUNC(sub_83C7C5E4);
PPC_FUNC_IMPL(__imp__sub_83C7C5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C5E8"))) PPC_WEAK_FUNC(sub_83C7C5E8);
PPC_FUNC_IMPL(__imp__sub_83C7C5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15944
	ctx.r3.s64 = ctx.r11.s64 + -15944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C5F4"))) PPC_WEAK_FUNC(sub_83C7C5F4);
PPC_FUNC_IMPL(__imp__sub_83C7C5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C5F8"))) PPC_WEAK_FUNC(sub_83C7C5F8);
PPC_FUNC_IMPL(__imp__sub_83C7C5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15936
	ctx.r3.s64 = ctx.r11.s64 + -15936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C604"))) PPC_WEAK_FUNC(sub_83C7C604);
PPC_FUNC_IMPL(__imp__sub_83C7C604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C608"))) PPC_WEAK_FUNC(sub_83C7C608);
PPC_FUNC_IMPL(__imp__sub_83C7C608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15928
	ctx.r3.s64 = ctx.r11.s64 + -15928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C614"))) PPC_WEAK_FUNC(sub_83C7C614);
PPC_FUNC_IMPL(__imp__sub_83C7C614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C618"))) PPC_WEAK_FUNC(sub_83C7C618);
PPC_FUNC_IMPL(__imp__sub_83C7C618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15920
	ctx.r3.s64 = ctx.r11.s64 + -15920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C624"))) PPC_WEAK_FUNC(sub_83C7C624);
PPC_FUNC_IMPL(__imp__sub_83C7C624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C628"))) PPC_WEAK_FUNC(sub_83C7C628);
PPC_FUNC_IMPL(__imp__sub_83C7C628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15912
	ctx.r3.s64 = ctx.r11.s64 + -15912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C634"))) PPC_WEAK_FUNC(sub_83C7C634);
PPC_FUNC_IMPL(__imp__sub_83C7C634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C638"))) PPC_WEAK_FUNC(sub_83C7C638);
PPC_FUNC_IMPL(__imp__sub_83C7C638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15904
	ctx.r3.s64 = ctx.r11.s64 + -15904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C644"))) PPC_WEAK_FUNC(sub_83C7C644);
PPC_FUNC_IMPL(__imp__sub_83C7C644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C648"))) PPC_WEAK_FUNC(sub_83C7C648);
PPC_FUNC_IMPL(__imp__sub_83C7C648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15896
	ctx.r3.s64 = ctx.r11.s64 + -15896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C654"))) PPC_WEAK_FUNC(sub_83C7C654);
PPC_FUNC_IMPL(__imp__sub_83C7C654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C658"))) PPC_WEAK_FUNC(sub_83C7C658);
PPC_FUNC_IMPL(__imp__sub_83C7C658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15888
	ctx.r3.s64 = ctx.r11.s64 + -15888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C664"))) PPC_WEAK_FUNC(sub_83C7C664);
PPC_FUNC_IMPL(__imp__sub_83C7C664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C668"))) PPC_WEAK_FUNC(sub_83C7C668);
PPC_FUNC_IMPL(__imp__sub_83C7C668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15880
	ctx.r3.s64 = ctx.r11.s64 + -15880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C674"))) PPC_WEAK_FUNC(sub_83C7C674);
PPC_FUNC_IMPL(__imp__sub_83C7C674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C678"))) PPC_WEAK_FUNC(sub_83C7C678);
PPC_FUNC_IMPL(__imp__sub_83C7C678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15872
	ctx.r3.s64 = ctx.r11.s64 + -15872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C684"))) PPC_WEAK_FUNC(sub_83C7C684);
PPC_FUNC_IMPL(__imp__sub_83C7C684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C688"))) PPC_WEAK_FUNC(sub_83C7C688);
PPC_FUNC_IMPL(__imp__sub_83C7C688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15864
	ctx.r3.s64 = ctx.r11.s64 + -15864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C694"))) PPC_WEAK_FUNC(sub_83C7C694);
PPC_FUNC_IMPL(__imp__sub_83C7C694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C698"))) PPC_WEAK_FUNC(sub_83C7C698);
PPC_FUNC_IMPL(__imp__sub_83C7C698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15856
	ctx.r3.s64 = ctx.r11.s64 + -15856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C6A4"))) PPC_WEAK_FUNC(sub_83C7C6A4);
PPC_FUNC_IMPL(__imp__sub_83C7C6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C6A8"))) PPC_WEAK_FUNC(sub_83C7C6A8);
PPC_FUNC_IMPL(__imp__sub_83C7C6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15848
	ctx.r3.s64 = ctx.r11.s64 + -15848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C6B4"))) PPC_WEAK_FUNC(sub_83C7C6B4);
PPC_FUNC_IMPL(__imp__sub_83C7C6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C6B8"))) PPC_WEAK_FUNC(sub_83C7C6B8);
PPC_FUNC_IMPL(__imp__sub_83C7C6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15840
	ctx.r3.s64 = ctx.r11.s64 + -15840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C6C4"))) PPC_WEAK_FUNC(sub_83C7C6C4);
PPC_FUNC_IMPL(__imp__sub_83C7C6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C6C8"))) PPC_WEAK_FUNC(sub_83C7C6C8);
PPC_FUNC_IMPL(__imp__sub_83C7C6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15832
	ctx.r3.s64 = ctx.r11.s64 + -15832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C6D4"))) PPC_WEAK_FUNC(sub_83C7C6D4);
PPC_FUNC_IMPL(__imp__sub_83C7C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C6D8"))) PPC_WEAK_FUNC(sub_83C7C6D8);
PPC_FUNC_IMPL(__imp__sub_83C7C6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15824
	ctx.r3.s64 = ctx.r11.s64 + -15824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C6E4"))) PPC_WEAK_FUNC(sub_83C7C6E4);
PPC_FUNC_IMPL(__imp__sub_83C7C6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C6E8"))) PPC_WEAK_FUNC(sub_83C7C6E8);
PPC_FUNC_IMPL(__imp__sub_83C7C6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15816
	ctx.r3.s64 = ctx.r11.s64 + -15816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C6F4"))) PPC_WEAK_FUNC(sub_83C7C6F4);
PPC_FUNC_IMPL(__imp__sub_83C7C6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C6F8"))) PPC_WEAK_FUNC(sub_83C7C6F8);
PPC_FUNC_IMPL(__imp__sub_83C7C6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15808
	ctx.r3.s64 = ctx.r11.s64 + -15808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C704"))) PPC_WEAK_FUNC(sub_83C7C704);
PPC_FUNC_IMPL(__imp__sub_83C7C704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C708"))) PPC_WEAK_FUNC(sub_83C7C708);
PPC_FUNC_IMPL(__imp__sub_83C7C708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15800
	ctx.r3.s64 = ctx.r11.s64 + -15800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C714"))) PPC_WEAK_FUNC(sub_83C7C714);
PPC_FUNC_IMPL(__imp__sub_83C7C714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C718"))) PPC_WEAK_FUNC(sub_83C7C718);
PPC_FUNC_IMPL(__imp__sub_83C7C718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15792
	ctx.r3.s64 = ctx.r11.s64 + -15792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C724"))) PPC_WEAK_FUNC(sub_83C7C724);
PPC_FUNC_IMPL(__imp__sub_83C7C724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C728"))) PPC_WEAK_FUNC(sub_83C7C728);
PPC_FUNC_IMPL(__imp__sub_83C7C728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15784
	ctx.r3.s64 = ctx.r11.s64 + -15784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C734"))) PPC_WEAK_FUNC(sub_83C7C734);
PPC_FUNC_IMPL(__imp__sub_83C7C734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C738"))) PPC_WEAK_FUNC(sub_83C7C738);
PPC_FUNC_IMPL(__imp__sub_83C7C738) {
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
	// addi r3,r11,12208
	ctx.r3.s64 = ctx.r11.s64 + 12208;
	// bl 0x83523120
	ctx.lr = 0x83C7C750;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-15776
	ctx.r3.s64 = ctx.r10.s64 + -15776;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7C75C;
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

__attribute__((alias("__imp__sub_83C7C76C"))) PPC_WEAK_FUNC(sub_83C7C76C);
PPC_FUNC_IMPL(__imp__sub_83C7C76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C770"))) PPC_WEAK_FUNC(sub_83C7C770);
PPC_FUNC_IMPL(__imp__sub_83C7C770) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12224
	ctx.r7.s64 = ctx.r8.s64 + 12224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12224);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12224, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7C798"))) PPC_WEAK_FUNC(sub_83C7C798);
PPC_FUNC_IMPL(__imp__sub_83C7C798) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-3188
	ctx.r6.s64 = ctx.r7.s64 + -3188;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3260(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3260);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12224(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12224);
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
	// std r9,-3188(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3188, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7C7E0"))) PPC_WEAK_FUNC(sub_83C7C7E0);
PPC_FUNC_IMPL(__imp__sub_83C7C7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15760
	ctx.r3.s64 = ctx.r11.s64 + -15760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C7EC"))) PPC_WEAK_FUNC(sub_83C7C7EC);
PPC_FUNC_IMPL(__imp__sub_83C7C7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C7F0"))) PPC_WEAK_FUNC(sub_83C7C7F0);
PPC_FUNC_IMPL(__imp__sub_83C7C7F0) {
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
	// addi r3,r11,12232
	ctx.r3.s64 = ctx.r11.s64 + 12232;
	// bl 0x8259af80
	ctx.lr = 0x83C7C808;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-15744
	ctx.r3.s64 = ctx.r10.s64 + -15744;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7C814;
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

__attribute__((alias("__imp__sub_83C7C824"))) PPC_WEAK_FUNC(sub_83C7C824);
PPC_FUNC_IMPL(__imp__sub_83C7C824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C828"))) PPC_WEAK_FUNC(sub_83C7C828);
PPC_FUNC_IMPL(__imp__sub_83C7C828) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12212
	ctx.r11.s64 = ctx.r8.s64 + 12212;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-3212(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3212);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15752
	ctx.r3.s64 = ctx.r6.s64 + -15752;
	// stw r10,12212(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12212, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C858"))) PPC_WEAK_FUNC(sub_83C7C858);
PPC_FUNC_IMPL(__imp__sub_83C7C858) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,-2576
	ctx.r4.s64 = ctx.r11.s64 + -2576;
	// addi r3,r10,-3164
	ctx.r3.s64 = ctx.r10.s64 + -3164;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C7C87C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-15736
	ctx.r3.s64 = ctx.r9.s64 + -15736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7C888;
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

__attribute__((alias("__imp__sub_83C7C898"))) PPC_WEAK_FUNC(sub_83C7C898);
PPC_FUNC_IMPL(__imp__sub_83C7C898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15632
	ctx.r3.s64 = ctx.r11.s64 + -15632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C8A4"))) PPC_WEAK_FUNC(sub_83C7C8A4);
PPC_FUNC_IMPL(__imp__sub_83C7C8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C8A8"))) PPC_WEAK_FUNC(sub_83C7C8A8);
PPC_FUNC_IMPL(__imp__sub_83C7C8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15624
	ctx.r3.s64 = ctx.r11.s64 + -15624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C8B4"))) PPC_WEAK_FUNC(sub_83C7C8B4);
PPC_FUNC_IMPL(__imp__sub_83C7C8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C8B8"))) PPC_WEAK_FUNC(sub_83C7C8B8);
PPC_FUNC_IMPL(__imp__sub_83C7C8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15616
	ctx.r3.s64 = ctx.r11.s64 + -15616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C8C4"))) PPC_WEAK_FUNC(sub_83C7C8C4);
PPC_FUNC_IMPL(__imp__sub_83C7C8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C8C8"))) PPC_WEAK_FUNC(sub_83C7C8C8);
PPC_FUNC_IMPL(__imp__sub_83C7C8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15608
	ctx.r3.s64 = ctx.r11.s64 + -15608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C8D4"))) PPC_WEAK_FUNC(sub_83C7C8D4);
PPC_FUNC_IMPL(__imp__sub_83C7C8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C8D8"))) PPC_WEAK_FUNC(sub_83C7C8D8);
PPC_FUNC_IMPL(__imp__sub_83C7C8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15600
	ctx.r3.s64 = ctx.r11.s64 + -15600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C8E4"))) PPC_WEAK_FUNC(sub_83C7C8E4);
PPC_FUNC_IMPL(__imp__sub_83C7C8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C8E8"))) PPC_WEAK_FUNC(sub_83C7C8E8);
PPC_FUNC_IMPL(__imp__sub_83C7C8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15592
	ctx.r3.s64 = ctx.r11.s64 + -15592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C8F4"))) PPC_WEAK_FUNC(sub_83C7C8F4);
PPC_FUNC_IMPL(__imp__sub_83C7C8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C8F8"))) PPC_WEAK_FUNC(sub_83C7C8F8);
PPC_FUNC_IMPL(__imp__sub_83C7C8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15584
	ctx.r3.s64 = ctx.r11.s64 + -15584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C904"))) PPC_WEAK_FUNC(sub_83C7C904);
PPC_FUNC_IMPL(__imp__sub_83C7C904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C908"))) PPC_WEAK_FUNC(sub_83C7C908);
PPC_FUNC_IMPL(__imp__sub_83C7C908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15576
	ctx.r3.s64 = ctx.r11.s64 + -15576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C914"))) PPC_WEAK_FUNC(sub_83C7C914);
PPC_FUNC_IMPL(__imp__sub_83C7C914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C918"))) PPC_WEAK_FUNC(sub_83C7C918);
PPC_FUNC_IMPL(__imp__sub_83C7C918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15568
	ctx.r3.s64 = ctx.r11.s64 + -15568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C924"))) PPC_WEAK_FUNC(sub_83C7C924);
PPC_FUNC_IMPL(__imp__sub_83C7C924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C928"))) PPC_WEAK_FUNC(sub_83C7C928);
PPC_FUNC_IMPL(__imp__sub_83C7C928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15560
	ctx.r3.s64 = ctx.r11.s64 + -15560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C934"))) PPC_WEAK_FUNC(sub_83C7C934);
PPC_FUNC_IMPL(__imp__sub_83C7C934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C938"))) PPC_WEAK_FUNC(sub_83C7C938);
PPC_FUNC_IMPL(__imp__sub_83C7C938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15552
	ctx.r3.s64 = ctx.r11.s64 + -15552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C944"))) PPC_WEAK_FUNC(sub_83C7C944);
PPC_FUNC_IMPL(__imp__sub_83C7C944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C948"))) PPC_WEAK_FUNC(sub_83C7C948);
PPC_FUNC_IMPL(__imp__sub_83C7C948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15544
	ctx.r3.s64 = ctx.r11.s64 + -15544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7C954"))) PPC_WEAK_FUNC(sub_83C7C954);
PPC_FUNC_IMPL(__imp__sub_83C7C954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C958"))) PPC_WEAK_FUNC(sub_83C7C958);
PPC_FUNC_IMPL(__imp__sub_83C7C958) {
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
	// addi r3,r11,12576
	ctx.r3.s64 = ctx.r11.s64 + 12576;
	// bl 0x83523120
	ctx.lr = 0x83C7C970;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-15536
	ctx.r3.s64 = ctx.r10.s64 + -15536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7C97C;
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

__attribute__((alias("__imp__sub_83C7C98C"))) PPC_WEAK_FUNC(sub_83C7C98C);
PPC_FUNC_IMPL(__imp__sub_83C7C98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7C990"))) PPC_WEAK_FUNC(sub_83C7C990);
PPC_FUNC_IMPL(__imp__sub_83C7C990) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12592
	ctx.r7.s64 = ctx.r8.s64 + 12592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12592);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12592(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12592, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7C9B8"))) PPC_WEAK_FUNC(sub_83C7C9B8);
PPC_FUNC_IMPL(__imp__sub_83C7C9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-3032
	ctx.r6.s64 = ctx.r7.s64 + -3032;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3104(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3104);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12592(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12592);
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
	// std r9,-3032(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3032, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7CA00"))) PPC_WEAK_FUNC(sub_83C7CA00);
PPC_FUNC_IMPL(__imp__sub_83C7CA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15520
	ctx.r3.s64 = ctx.r11.s64 + -15520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CA0C"))) PPC_WEAK_FUNC(sub_83C7CA0C);
PPC_FUNC_IMPL(__imp__sub_83C7CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CA10"))) PPC_WEAK_FUNC(sub_83C7CA10);
PPC_FUNC_IMPL(__imp__sub_83C7CA10) {
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
	// addi r3,r11,12600
	ctx.r3.s64 = ctx.r11.s64 + 12600;
	// bl 0x8259af80
	ctx.lr = 0x83C7CA28;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-15504
	ctx.r3.s64 = ctx.r10.s64 + -15504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7CA34;
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

__attribute__((alias("__imp__sub_83C7CA44"))) PPC_WEAK_FUNC(sub_83C7CA44);
PPC_FUNC_IMPL(__imp__sub_83C7CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CA48"))) PPC_WEAK_FUNC(sub_83C7CA48);
PPC_FUNC_IMPL(__imp__sub_83C7CA48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12580
	ctx.r11.s64 = ctx.r8.s64 + 12580;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-3056(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3056);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15512
	ctx.r3.s64 = ctx.r6.s64 + -15512;
	// stw r10,12580(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12580, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CA78"))) PPC_WEAK_FUNC(sub_83C7CA78);
PPC_FUNC_IMPL(__imp__sub_83C7CA78) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,-1524
	ctx.r4.s64 = ctx.r11.s64 + -1524;
	// addi r3,r10,-3008
	ctx.r3.s64 = ctx.r10.s64 + -3008;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C7CA9C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-15496
	ctx.r3.s64 = ctx.r9.s64 + -15496;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7CAA8;
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

__attribute__((alias("__imp__sub_83C7CAB8"))) PPC_WEAK_FUNC(sub_83C7CAB8);
PPC_FUNC_IMPL(__imp__sub_83C7CAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15392
	ctx.r3.s64 = ctx.r11.s64 + -15392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CAC4"))) PPC_WEAK_FUNC(sub_83C7CAC4);
PPC_FUNC_IMPL(__imp__sub_83C7CAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CAC8"))) PPC_WEAK_FUNC(sub_83C7CAC8);
PPC_FUNC_IMPL(__imp__sub_83C7CAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15384
	ctx.r3.s64 = ctx.r11.s64 + -15384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CAD4"))) PPC_WEAK_FUNC(sub_83C7CAD4);
PPC_FUNC_IMPL(__imp__sub_83C7CAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CAD8"))) PPC_WEAK_FUNC(sub_83C7CAD8);
PPC_FUNC_IMPL(__imp__sub_83C7CAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15376
	ctx.r3.s64 = ctx.r11.s64 + -15376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CAE4"))) PPC_WEAK_FUNC(sub_83C7CAE4);
PPC_FUNC_IMPL(__imp__sub_83C7CAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CAE8"))) PPC_WEAK_FUNC(sub_83C7CAE8);
PPC_FUNC_IMPL(__imp__sub_83C7CAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15368
	ctx.r3.s64 = ctx.r11.s64 + -15368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CAF4"))) PPC_WEAK_FUNC(sub_83C7CAF4);
PPC_FUNC_IMPL(__imp__sub_83C7CAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CAF8"))) PPC_WEAK_FUNC(sub_83C7CAF8);
PPC_FUNC_IMPL(__imp__sub_83C7CAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15360
	ctx.r3.s64 = ctx.r11.s64 + -15360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CB04"))) PPC_WEAK_FUNC(sub_83C7CB04);
PPC_FUNC_IMPL(__imp__sub_83C7CB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CB08"))) PPC_WEAK_FUNC(sub_83C7CB08);
PPC_FUNC_IMPL(__imp__sub_83C7CB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15352
	ctx.r3.s64 = ctx.r11.s64 + -15352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CB14"))) PPC_WEAK_FUNC(sub_83C7CB14);
PPC_FUNC_IMPL(__imp__sub_83C7CB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CB18"))) PPC_WEAK_FUNC(sub_83C7CB18);
PPC_FUNC_IMPL(__imp__sub_83C7CB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15344
	ctx.r3.s64 = ctx.r11.s64 + -15344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CB24"))) PPC_WEAK_FUNC(sub_83C7CB24);
PPC_FUNC_IMPL(__imp__sub_83C7CB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CB28"))) PPC_WEAK_FUNC(sub_83C7CB28);
PPC_FUNC_IMPL(__imp__sub_83C7CB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15336
	ctx.r3.s64 = ctx.r11.s64 + -15336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CB34"))) PPC_WEAK_FUNC(sub_83C7CB34);
PPC_FUNC_IMPL(__imp__sub_83C7CB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CB38"))) PPC_WEAK_FUNC(sub_83C7CB38);
PPC_FUNC_IMPL(__imp__sub_83C7CB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15328
	ctx.r3.s64 = ctx.r11.s64 + -15328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CB44"))) PPC_WEAK_FUNC(sub_83C7CB44);
PPC_FUNC_IMPL(__imp__sub_83C7CB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CB48"))) PPC_WEAK_FUNC(sub_83C7CB48);
PPC_FUNC_IMPL(__imp__sub_83C7CB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15320
	ctx.r3.s64 = ctx.r11.s64 + -15320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CB54"))) PPC_WEAK_FUNC(sub_83C7CB54);
PPC_FUNC_IMPL(__imp__sub_83C7CB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CB58"))) PPC_WEAK_FUNC(sub_83C7CB58);
PPC_FUNC_IMPL(__imp__sub_83C7CB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15312
	ctx.r3.s64 = ctx.r11.s64 + -15312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CB64"))) PPC_WEAK_FUNC(sub_83C7CB64);
PPC_FUNC_IMPL(__imp__sub_83C7CB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CB68"))) PPC_WEAK_FUNC(sub_83C7CB68);
PPC_FUNC_IMPL(__imp__sub_83C7CB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15304
	ctx.r3.s64 = ctx.r11.s64 + -15304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CB74"))) PPC_WEAK_FUNC(sub_83C7CB74);
PPC_FUNC_IMPL(__imp__sub_83C7CB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CB78"))) PPC_WEAK_FUNC(sub_83C7CB78);
PPC_FUNC_IMPL(__imp__sub_83C7CB78) {
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
	// addi r3,r11,12944
	ctx.r3.s64 = ctx.r11.s64 + 12944;
	// bl 0x83523120
	ctx.lr = 0x83C7CB90;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-15296
	ctx.r3.s64 = ctx.r10.s64 + -15296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7CB9C;
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

__attribute__((alias("__imp__sub_83C7CBAC"))) PPC_WEAK_FUNC(sub_83C7CBAC);
PPC_FUNC_IMPL(__imp__sub_83C7CBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CBB0"))) PPC_WEAK_FUNC(sub_83C7CBB0);
PPC_FUNC_IMPL(__imp__sub_83C7CBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12960
	ctx.r7.s64 = ctx.r8.s64 + 12960;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12960);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12960(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12960, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7CBD8"))) PPC_WEAK_FUNC(sub_83C7CBD8);
PPC_FUNC_IMPL(__imp__sub_83C7CBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-2868
	ctx.r6.s64 = ctx.r7.s64 + -2868;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2940(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2940);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12960(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12960);
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
	// std r9,-2868(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2868, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7CC20"))) PPC_WEAK_FUNC(sub_83C7CC20);
PPC_FUNC_IMPL(__imp__sub_83C7CC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15280
	ctx.r3.s64 = ctx.r11.s64 + -15280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CC2C"))) PPC_WEAK_FUNC(sub_83C7CC2C);
PPC_FUNC_IMPL(__imp__sub_83C7CC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CC30"))) PPC_WEAK_FUNC(sub_83C7CC30);
PPC_FUNC_IMPL(__imp__sub_83C7CC30) {
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
	// addi r3,r11,12968
	ctx.r3.s64 = ctx.r11.s64 + 12968;
	// bl 0x8259af80
	ctx.lr = 0x83C7CC48;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-15264
	ctx.r3.s64 = ctx.r10.s64 + -15264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7CC54;
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

__attribute__((alias("__imp__sub_83C7CC64"))) PPC_WEAK_FUNC(sub_83C7CC64);
PPC_FUNC_IMPL(__imp__sub_83C7CC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CC68"))) PPC_WEAK_FUNC(sub_83C7CC68);
PPC_FUNC_IMPL(__imp__sub_83C7CC68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12948
	ctx.r11.s64 = ctx.r8.s64 + 12948;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-2892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2892);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15272
	ctx.r3.s64 = ctx.r6.s64 + -15272;
	// stw r10,12948(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12948, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CC98"))) PPC_WEAK_FUNC(sub_83C7CC98);
PPC_FUNC_IMPL(__imp__sub_83C7CC98) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,-1076
	ctx.r4.s64 = ctx.r11.s64 + -1076;
	// addi r3,r10,-2844
	ctx.r3.s64 = ctx.r10.s64 + -2844;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C7CCBC;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-15256
	ctx.r3.s64 = ctx.r9.s64 + -15256;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7CCC8;
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

__attribute__((alias("__imp__sub_83C7CCD8"))) PPC_WEAK_FUNC(sub_83C7CCD8);
PPC_FUNC_IMPL(__imp__sub_83C7CCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15152
	ctx.r3.s64 = ctx.r11.s64 + -15152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CCE4"))) PPC_WEAK_FUNC(sub_83C7CCE4);
PPC_FUNC_IMPL(__imp__sub_83C7CCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CCE8"))) PPC_WEAK_FUNC(sub_83C7CCE8);
PPC_FUNC_IMPL(__imp__sub_83C7CCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15144
	ctx.r3.s64 = ctx.r11.s64 + -15144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CCF4"))) PPC_WEAK_FUNC(sub_83C7CCF4);
PPC_FUNC_IMPL(__imp__sub_83C7CCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CCF8"))) PPC_WEAK_FUNC(sub_83C7CCF8);
PPC_FUNC_IMPL(__imp__sub_83C7CCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15136
	ctx.r3.s64 = ctx.r11.s64 + -15136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CD04"))) PPC_WEAK_FUNC(sub_83C7CD04);
PPC_FUNC_IMPL(__imp__sub_83C7CD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CD08"))) PPC_WEAK_FUNC(sub_83C7CD08);
PPC_FUNC_IMPL(__imp__sub_83C7CD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15128
	ctx.r3.s64 = ctx.r11.s64 + -15128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CD14"))) PPC_WEAK_FUNC(sub_83C7CD14);
PPC_FUNC_IMPL(__imp__sub_83C7CD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CD18"))) PPC_WEAK_FUNC(sub_83C7CD18);
PPC_FUNC_IMPL(__imp__sub_83C7CD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15120
	ctx.r3.s64 = ctx.r11.s64 + -15120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CD24"))) PPC_WEAK_FUNC(sub_83C7CD24);
PPC_FUNC_IMPL(__imp__sub_83C7CD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CD28"))) PPC_WEAK_FUNC(sub_83C7CD28);
PPC_FUNC_IMPL(__imp__sub_83C7CD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15112
	ctx.r3.s64 = ctx.r11.s64 + -15112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CD34"))) PPC_WEAK_FUNC(sub_83C7CD34);
PPC_FUNC_IMPL(__imp__sub_83C7CD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CD38"))) PPC_WEAK_FUNC(sub_83C7CD38);
PPC_FUNC_IMPL(__imp__sub_83C7CD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15104
	ctx.r3.s64 = ctx.r11.s64 + -15104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CD44"))) PPC_WEAK_FUNC(sub_83C7CD44);
PPC_FUNC_IMPL(__imp__sub_83C7CD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CD48"))) PPC_WEAK_FUNC(sub_83C7CD48);
PPC_FUNC_IMPL(__imp__sub_83C7CD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15096
	ctx.r3.s64 = ctx.r11.s64 + -15096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CD54"))) PPC_WEAK_FUNC(sub_83C7CD54);
PPC_FUNC_IMPL(__imp__sub_83C7CD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CD58"))) PPC_WEAK_FUNC(sub_83C7CD58);
PPC_FUNC_IMPL(__imp__sub_83C7CD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15088
	ctx.r3.s64 = ctx.r11.s64 + -15088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CD64"))) PPC_WEAK_FUNC(sub_83C7CD64);
PPC_FUNC_IMPL(__imp__sub_83C7CD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CD68"))) PPC_WEAK_FUNC(sub_83C7CD68);
PPC_FUNC_IMPL(__imp__sub_83C7CD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15080
	ctx.r3.s64 = ctx.r11.s64 + -15080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CD74"))) PPC_WEAK_FUNC(sub_83C7CD74);
PPC_FUNC_IMPL(__imp__sub_83C7CD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CD78"))) PPC_WEAK_FUNC(sub_83C7CD78);
PPC_FUNC_IMPL(__imp__sub_83C7CD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15072
	ctx.r3.s64 = ctx.r11.s64 + -15072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CD84"))) PPC_WEAK_FUNC(sub_83C7CD84);
PPC_FUNC_IMPL(__imp__sub_83C7CD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CD88"))) PPC_WEAK_FUNC(sub_83C7CD88);
PPC_FUNC_IMPL(__imp__sub_83C7CD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15064
	ctx.r3.s64 = ctx.r11.s64 + -15064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CD94"))) PPC_WEAK_FUNC(sub_83C7CD94);
PPC_FUNC_IMPL(__imp__sub_83C7CD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CD98"))) PPC_WEAK_FUNC(sub_83C7CD98);
PPC_FUNC_IMPL(__imp__sub_83C7CD98) {
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
	// addi r3,r11,13312
	ctx.r3.s64 = ctx.r11.s64 + 13312;
	// bl 0x83523120
	ctx.lr = 0x83C7CDB0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-15056
	ctx.r3.s64 = ctx.r10.s64 + -15056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7CDBC;
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

__attribute__((alias("__imp__sub_83C7CDCC"))) PPC_WEAK_FUNC(sub_83C7CDCC);
PPC_FUNC_IMPL(__imp__sub_83C7CDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CDD0"))) PPC_WEAK_FUNC(sub_83C7CDD0);
PPC_FUNC_IMPL(__imp__sub_83C7CDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13328
	ctx.r7.s64 = ctx.r8.s64 + 13328;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13328(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13328);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13328, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7CDF8"))) PPC_WEAK_FUNC(sub_83C7CDF8);
PPC_FUNC_IMPL(__imp__sub_83C7CDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-2696
	ctx.r6.s64 = ctx.r7.s64 + -2696;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2768(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2768);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13328(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13328);
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
	// std r9,-2696(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2696, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7CE40"))) PPC_WEAK_FUNC(sub_83C7CE40);
PPC_FUNC_IMPL(__imp__sub_83C7CE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15040
	ctx.r3.s64 = ctx.r11.s64 + -15040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CE4C"))) PPC_WEAK_FUNC(sub_83C7CE4C);
PPC_FUNC_IMPL(__imp__sub_83C7CE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CE50"))) PPC_WEAK_FUNC(sub_83C7CE50);
PPC_FUNC_IMPL(__imp__sub_83C7CE50) {
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
	// addi r3,r11,13336
	ctx.r3.s64 = ctx.r11.s64 + 13336;
	// bl 0x8259af80
	ctx.lr = 0x83C7CE68;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-15024
	ctx.r3.s64 = ctx.r10.s64 + -15024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7CE74;
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

__attribute__((alias("__imp__sub_83C7CE84"))) PPC_WEAK_FUNC(sub_83C7CE84);
PPC_FUNC_IMPL(__imp__sub_83C7CE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CE88"))) PPC_WEAK_FUNC(sub_83C7CE88);
PPC_FUNC_IMPL(__imp__sub_83C7CE88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13316
	ctx.r11.s64 = ctx.r8.s64 + 13316;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-2720(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2720);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15032
	ctx.r3.s64 = ctx.r6.s64 + -15032;
	// stw r10,13316(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13316, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CEB8"))) PPC_WEAK_FUNC(sub_83C7CEB8);
PPC_FUNC_IMPL(__imp__sub_83C7CEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15016
	ctx.r3.s64 = ctx.r11.s64 + -15016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CEC4"))) PPC_WEAK_FUNC(sub_83C7CEC4);
PPC_FUNC_IMPL(__imp__sub_83C7CEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CEC8"))) PPC_WEAK_FUNC(sub_83C7CEC8);
PPC_FUNC_IMPL(__imp__sub_83C7CEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15008
	ctx.r3.s64 = ctx.r11.s64 + -15008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CED4"))) PPC_WEAK_FUNC(sub_83C7CED4);
PPC_FUNC_IMPL(__imp__sub_83C7CED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CED8"))) PPC_WEAK_FUNC(sub_83C7CED8);
PPC_FUNC_IMPL(__imp__sub_83C7CED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-15000
	ctx.r3.s64 = ctx.r11.s64 + -15000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CEE4"))) PPC_WEAK_FUNC(sub_83C7CEE4);
PPC_FUNC_IMPL(__imp__sub_83C7CEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CEE8"))) PPC_WEAK_FUNC(sub_83C7CEE8);
PPC_FUNC_IMPL(__imp__sub_83C7CEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14992
	ctx.r3.s64 = ctx.r11.s64 + -14992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CEF4"))) PPC_WEAK_FUNC(sub_83C7CEF4);
PPC_FUNC_IMPL(__imp__sub_83C7CEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CEF8"))) PPC_WEAK_FUNC(sub_83C7CEF8);
PPC_FUNC_IMPL(__imp__sub_83C7CEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14984
	ctx.r3.s64 = ctx.r11.s64 + -14984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CF04"))) PPC_WEAK_FUNC(sub_83C7CF04);
PPC_FUNC_IMPL(__imp__sub_83C7CF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CF08"))) PPC_WEAK_FUNC(sub_83C7CF08);
PPC_FUNC_IMPL(__imp__sub_83C7CF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14976
	ctx.r3.s64 = ctx.r11.s64 + -14976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CF14"))) PPC_WEAK_FUNC(sub_83C7CF14);
PPC_FUNC_IMPL(__imp__sub_83C7CF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CF18"))) PPC_WEAK_FUNC(sub_83C7CF18);
PPC_FUNC_IMPL(__imp__sub_83C7CF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14968
	ctx.r3.s64 = ctx.r11.s64 + -14968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CF24"))) PPC_WEAK_FUNC(sub_83C7CF24);
PPC_FUNC_IMPL(__imp__sub_83C7CF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CF28"))) PPC_WEAK_FUNC(sub_83C7CF28);
PPC_FUNC_IMPL(__imp__sub_83C7CF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14960
	ctx.r3.s64 = ctx.r11.s64 + -14960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CF34"))) PPC_WEAK_FUNC(sub_83C7CF34);
PPC_FUNC_IMPL(__imp__sub_83C7CF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CF38"))) PPC_WEAK_FUNC(sub_83C7CF38);
PPC_FUNC_IMPL(__imp__sub_83C7CF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14952
	ctx.r3.s64 = ctx.r11.s64 + -14952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CF44"))) PPC_WEAK_FUNC(sub_83C7CF44);
PPC_FUNC_IMPL(__imp__sub_83C7CF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CF48"))) PPC_WEAK_FUNC(sub_83C7CF48);
PPC_FUNC_IMPL(__imp__sub_83C7CF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CF54"))) PPC_WEAK_FUNC(sub_83C7CF54);
PPC_FUNC_IMPL(__imp__sub_83C7CF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CF58"))) PPC_WEAK_FUNC(sub_83C7CF58);
PPC_FUNC_IMPL(__imp__sub_83C7CF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14936
	ctx.r3.s64 = ctx.r11.s64 + -14936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CF64"))) PPC_WEAK_FUNC(sub_83C7CF64);
PPC_FUNC_IMPL(__imp__sub_83C7CF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CF68"))) PPC_WEAK_FUNC(sub_83C7CF68);
PPC_FUNC_IMPL(__imp__sub_83C7CF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14928
	ctx.r3.s64 = ctx.r11.s64 + -14928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CF74"))) PPC_WEAK_FUNC(sub_83C7CF74);
PPC_FUNC_IMPL(__imp__sub_83C7CF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CF78"))) PPC_WEAK_FUNC(sub_83C7CF78);
PPC_FUNC_IMPL(__imp__sub_83C7CF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14920
	ctx.r3.s64 = ctx.r11.s64 + -14920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CF84"))) PPC_WEAK_FUNC(sub_83C7CF84);
PPC_FUNC_IMPL(__imp__sub_83C7CF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CF88"))) PPC_WEAK_FUNC(sub_83C7CF88);
PPC_FUNC_IMPL(__imp__sub_83C7CF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14912
	ctx.r3.s64 = ctx.r11.s64 + -14912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CF94"))) PPC_WEAK_FUNC(sub_83C7CF94);
PPC_FUNC_IMPL(__imp__sub_83C7CF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CF98"))) PPC_WEAK_FUNC(sub_83C7CF98);
PPC_FUNC_IMPL(__imp__sub_83C7CF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14904
	ctx.r3.s64 = ctx.r11.s64 + -14904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CFA4"))) PPC_WEAK_FUNC(sub_83C7CFA4);
PPC_FUNC_IMPL(__imp__sub_83C7CFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CFA8"))) PPC_WEAK_FUNC(sub_83C7CFA8);
PPC_FUNC_IMPL(__imp__sub_83C7CFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14896
	ctx.r3.s64 = ctx.r11.s64 + -14896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CFB4"))) PPC_WEAK_FUNC(sub_83C7CFB4);
PPC_FUNC_IMPL(__imp__sub_83C7CFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CFB8"))) PPC_WEAK_FUNC(sub_83C7CFB8);
PPC_FUNC_IMPL(__imp__sub_83C7CFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14888
	ctx.r3.s64 = ctx.r11.s64 + -14888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CFC4"))) PPC_WEAK_FUNC(sub_83C7CFC4);
PPC_FUNC_IMPL(__imp__sub_83C7CFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CFC8"))) PPC_WEAK_FUNC(sub_83C7CFC8);
PPC_FUNC_IMPL(__imp__sub_83C7CFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14880
	ctx.r3.s64 = ctx.r11.s64 + -14880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CFD4"))) PPC_WEAK_FUNC(sub_83C7CFD4);
PPC_FUNC_IMPL(__imp__sub_83C7CFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CFD8"))) PPC_WEAK_FUNC(sub_83C7CFD8);
PPC_FUNC_IMPL(__imp__sub_83C7CFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14872
	ctx.r3.s64 = ctx.r11.s64 + -14872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

