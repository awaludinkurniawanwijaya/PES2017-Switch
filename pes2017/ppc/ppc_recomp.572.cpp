#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B91324"))) PPC_WEAK_FUNC(sub_83B91324);
PPC_FUNC_IMPL(__imp__sub_83B91324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91328"))) PPC_WEAK_FUNC(sub_83B91328);
PPC_FUNC_IMPL(__imp__sub_83B91328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2240
	ctx.r3.s64 = ctx.r11.s64 + -2240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91334"))) PPC_WEAK_FUNC(sub_83B91334);
PPC_FUNC_IMPL(__imp__sub_83B91334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91338"))) PPC_WEAK_FUNC(sub_83B91338);
PPC_FUNC_IMPL(__imp__sub_83B91338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2232
	ctx.r3.s64 = ctx.r11.s64 + -2232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91344"))) PPC_WEAK_FUNC(sub_83B91344);
PPC_FUNC_IMPL(__imp__sub_83B91344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91348"))) PPC_WEAK_FUNC(sub_83B91348);
PPC_FUNC_IMPL(__imp__sub_83B91348) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6268
	ctx.r7.s64 = ctx.r8.s64 + -6268;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6268(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6268);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6268(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6268, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B91370"))) PPC_WEAK_FUNC(sub_83B91370);
PPC_FUNC_IMPL(__imp__sub_83B91370) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6272
	ctx.r3.s64 = ctx.r11.s64 + -6272;
	// bl 0x83523120
	ctx.lr = 0x83B91388;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-2224
	ctx.r3.s64 = ctx.r10.s64 + -2224;
	// bl 0x831cdcc8
	ctx.lr = 0x83B91394;
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

__attribute__((alias("__imp__sub_83B913A4"))) PPC_WEAK_FUNC(sub_83B913A4);
PPC_FUNC_IMPL(__imp__sub_83B913A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B913A8"))) PPC_WEAK_FUNC(sub_83B913A8);
PPC_FUNC_IMPL(__imp__sub_83B913A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2208
	ctx.r3.s64 = ctx.r11.s64 + -2208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B913B4"))) PPC_WEAK_FUNC(sub_83B913B4);
PPC_FUNC_IMPL(__imp__sub_83B913B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B913B8"))) PPC_WEAK_FUNC(sub_83B913B8);
PPC_FUNC_IMPL(__imp__sub_83B913B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2200
	ctx.r3.s64 = ctx.r11.s64 + -2200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B913C4"))) PPC_WEAK_FUNC(sub_83B913C4);
PPC_FUNC_IMPL(__imp__sub_83B913C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B913C8"))) PPC_WEAK_FUNC(sub_83B913C8);
PPC_FUNC_IMPL(__imp__sub_83B913C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2192
	ctx.r3.s64 = ctx.r11.s64 + -2192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B913D4"))) PPC_WEAK_FUNC(sub_83B913D4);
PPC_FUNC_IMPL(__imp__sub_83B913D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B913D8"))) PPC_WEAK_FUNC(sub_83B913D8);
PPC_FUNC_IMPL(__imp__sub_83B913D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2184
	ctx.r3.s64 = ctx.r11.s64 + -2184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B913E4"))) PPC_WEAK_FUNC(sub_83B913E4);
PPC_FUNC_IMPL(__imp__sub_83B913E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B913E8"))) PPC_WEAK_FUNC(sub_83B913E8);
PPC_FUNC_IMPL(__imp__sub_83B913E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2176
	ctx.r3.s64 = ctx.r11.s64 + -2176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B913F4"))) PPC_WEAK_FUNC(sub_83B913F4);
PPC_FUNC_IMPL(__imp__sub_83B913F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B913F8"))) PPC_WEAK_FUNC(sub_83B913F8);
PPC_FUNC_IMPL(__imp__sub_83B913F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2168
	ctx.r3.s64 = ctx.r11.s64 + -2168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91404"))) PPC_WEAK_FUNC(sub_83B91404);
PPC_FUNC_IMPL(__imp__sub_83B91404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91408"))) PPC_WEAK_FUNC(sub_83B91408);
PPC_FUNC_IMPL(__imp__sub_83B91408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2160
	ctx.r3.s64 = ctx.r11.s64 + -2160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91414"))) PPC_WEAK_FUNC(sub_83B91414);
PPC_FUNC_IMPL(__imp__sub_83B91414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91418"))) PPC_WEAK_FUNC(sub_83B91418);
PPC_FUNC_IMPL(__imp__sub_83B91418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2152
	ctx.r3.s64 = ctx.r11.s64 + -2152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91424"))) PPC_WEAK_FUNC(sub_83B91424);
PPC_FUNC_IMPL(__imp__sub_83B91424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91428"))) PPC_WEAK_FUNC(sub_83B91428);
PPC_FUNC_IMPL(__imp__sub_83B91428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2144
	ctx.r3.s64 = ctx.r11.s64 + -2144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91434"))) PPC_WEAK_FUNC(sub_83B91434);
PPC_FUNC_IMPL(__imp__sub_83B91434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91438"))) PPC_WEAK_FUNC(sub_83B91438);
PPC_FUNC_IMPL(__imp__sub_83B91438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2136
	ctx.r3.s64 = ctx.r11.s64 + -2136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91444"))) PPC_WEAK_FUNC(sub_83B91444);
PPC_FUNC_IMPL(__imp__sub_83B91444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91448"))) PPC_WEAK_FUNC(sub_83B91448);
PPC_FUNC_IMPL(__imp__sub_83B91448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2128
	ctx.r3.s64 = ctx.r11.s64 + -2128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91454"))) PPC_WEAK_FUNC(sub_83B91454);
PPC_FUNC_IMPL(__imp__sub_83B91454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91458"))) PPC_WEAK_FUNC(sub_83B91458);
PPC_FUNC_IMPL(__imp__sub_83B91458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2120
	ctx.r3.s64 = ctx.r11.s64 + -2120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91464"))) PPC_WEAK_FUNC(sub_83B91464);
PPC_FUNC_IMPL(__imp__sub_83B91464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91468"))) PPC_WEAK_FUNC(sub_83B91468);
PPC_FUNC_IMPL(__imp__sub_83B91468) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6256
	ctx.r7.s64 = ctx.r8.s64 + -6256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B91490"))) PPC_WEAK_FUNC(sub_83B91490);
PPC_FUNC_IMPL(__imp__sub_83B91490) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6260
	ctx.r3.s64 = ctx.r11.s64 + -6260;
	// bl 0x83523120
	ctx.lr = 0x83B914A8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-2112
	ctx.r3.s64 = ctx.r10.s64 + -2112;
	// bl 0x831cdcc8
	ctx.lr = 0x83B914B4;
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

__attribute__((alias("__imp__sub_83B914C4"))) PPC_WEAK_FUNC(sub_83B914C4);
PPC_FUNC_IMPL(__imp__sub_83B914C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B914C8"))) PPC_WEAK_FUNC(sub_83B914C8);
PPC_FUNC_IMPL(__imp__sub_83B914C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2096
	ctx.r3.s64 = ctx.r11.s64 + -2096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B914D4"))) PPC_WEAK_FUNC(sub_83B914D4);
PPC_FUNC_IMPL(__imp__sub_83B914D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B914D8"))) PPC_WEAK_FUNC(sub_83B914D8);
PPC_FUNC_IMPL(__imp__sub_83B914D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2088
	ctx.r3.s64 = ctx.r11.s64 + -2088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B914E4"))) PPC_WEAK_FUNC(sub_83B914E4);
PPC_FUNC_IMPL(__imp__sub_83B914E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B914E8"))) PPC_WEAK_FUNC(sub_83B914E8);
PPC_FUNC_IMPL(__imp__sub_83B914E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2080
	ctx.r3.s64 = ctx.r11.s64 + -2080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B914F4"))) PPC_WEAK_FUNC(sub_83B914F4);
PPC_FUNC_IMPL(__imp__sub_83B914F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B914F8"))) PPC_WEAK_FUNC(sub_83B914F8);
PPC_FUNC_IMPL(__imp__sub_83B914F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2072
	ctx.r3.s64 = ctx.r11.s64 + -2072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91504"))) PPC_WEAK_FUNC(sub_83B91504);
PPC_FUNC_IMPL(__imp__sub_83B91504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91508"))) PPC_WEAK_FUNC(sub_83B91508);
PPC_FUNC_IMPL(__imp__sub_83B91508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2064
	ctx.r3.s64 = ctx.r11.s64 + -2064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91514"))) PPC_WEAK_FUNC(sub_83B91514);
PPC_FUNC_IMPL(__imp__sub_83B91514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91518"))) PPC_WEAK_FUNC(sub_83B91518);
PPC_FUNC_IMPL(__imp__sub_83B91518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2056
	ctx.r3.s64 = ctx.r11.s64 + -2056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91524"))) PPC_WEAK_FUNC(sub_83B91524);
PPC_FUNC_IMPL(__imp__sub_83B91524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91528"))) PPC_WEAK_FUNC(sub_83B91528);
PPC_FUNC_IMPL(__imp__sub_83B91528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2048
	ctx.r3.s64 = ctx.r11.s64 + -2048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91534"))) PPC_WEAK_FUNC(sub_83B91534);
PPC_FUNC_IMPL(__imp__sub_83B91534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91538"))) PPC_WEAK_FUNC(sub_83B91538);
PPC_FUNC_IMPL(__imp__sub_83B91538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2040
	ctx.r3.s64 = ctx.r11.s64 + -2040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91544"))) PPC_WEAK_FUNC(sub_83B91544);
PPC_FUNC_IMPL(__imp__sub_83B91544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91548"))) PPC_WEAK_FUNC(sub_83B91548);
PPC_FUNC_IMPL(__imp__sub_83B91548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2032
	ctx.r3.s64 = ctx.r11.s64 + -2032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91554"))) PPC_WEAK_FUNC(sub_83B91554);
PPC_FUNC_IMPL(__imp__sub_83B91554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91558"))) PPC_WEAK_FUNC(sub_83B91558);
PPC_FUNC_IMPL(__imp__sub_83B91558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2024
	ctx.r3.s64 = ctx.r11.s64 + -2024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91564"))) PPC_WEAK_FUNC(sub_83B91564);
PPC_FUNC_IMPL(__imp__sub_83B91564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91568"))) PPC_WEAK_FUNC(sub_83B91568);
PPC_FUNC_IMPL(__imp__sub_83B91568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2016
	ctx.r3.s64 = ctx.r11.s64 + -2016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91574"))) PPC_WEAK_FUNC(sub_83B91574);
PPC_FUNC_IMPL(__imp__sub_83B91574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91578"))) PPC_WEAK_FUNC(sub_83B91578);
PPC_FUNC_IMPL(__imp__sub_83B91578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-2008
	ctx.r3.s64 = ctx.r11.s64 + -2008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91584"))) PPC_WEAK_FUNC(sub_83B91584);
PPC_FUNC_IMPL(__imp__sub_83B91584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91588"))) PPC_WEAK_FUNC(sub_83B91588);
PPC_FUNC_IMPL(__imp__sub_83B91588) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6244
	ctx.r7.s64 = ctx.r8.s64 + -6244;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6244(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6244);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6244(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6244, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B915B0"))) PPC_WEAK_FUNC(sub_83B915B0);
PPC_FUNC_IMPL(__imp__sub_83B915B0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6248
	ctx.r3.s64 = ctx.r11.s64 + -6248;
	// bl 0x83523120
	ctx.lr = 0x83B915C8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-2000
	ctx.r3.s64 = ctx.r10.s64 + -2000;
	// bl 0x831cdcc8
	ctx.lr = 0x83B915D4;
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

__attribute__((alias("__imp__sub_83B915E4"))) PPC_WEAK_FUNC(sub_83B915E4);
PPC_FUNC_IMPL(__imp__sub_83B915E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B915E8"))) PPC_WEAK_FUNC(sub_83B915E8);
PPC_FUNC_IMPL(__imp__sub_83B915E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1984
	ctx.r3.s64 = ctx.r11.s64 + -1984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B915F4"))) PPC_WEAK_FUNC(sub_83B915F4);
PPC_FUNC_IMPL(__imp__sub_83B915F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B915F8"))) PPC_WEAK_FUNC(sub_83B915F8);
PPC_FUNC_IMPL(__imp__sub_83B915F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1976
	ctx.r3.s64 = ctx.r11.s64 + -1976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91604"))) PPC_WEAK_FUNC(sub_83B91604);
PPC_FUNC_IMPL(__imp__sub_83B91604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91608"))) PPC_WEAK_FUNC(sub_83B91608);
PPC_FUNC_IMPL(__imp__sub_83B91608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1968
	ctx.r3.s64 = ctx.r11.s64 + -1968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91614"))) PPC_WEAK_FUNC(sub_83B91614);
PPC_FUNC_IMPL(__imp__sub_83B91614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91618"))) PPC_WEAK_FUNC(sub_83B91618);
PPC_FUNC_IMPL(__imp__sub_83B91618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1960
	ctx.r3.s64 = ctx.r11.s64 + -1960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91624"))) PPC_WEAK_FUNC(sub_83B91624);
PPC_FUNC_IMPL(__imp__sub_83B91624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91628"))) PPC_WEAK_FUNC(sub_83B91628);
PPC_FUNC_IMPL(__imp__sub_83B91628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1952
	ctx.r3.s64 = ctx.r11.s64 + -1952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91634"))) PPC_WEAK_FUNC(sub_83B91634);
PPC_FUNC_IMPL(__imp__sub_83B91634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91638"))) PPC_WEAK_FUNC(sub_83B91638);
PPC_FUNC_IMPL(__imp__sub_83B91638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1944
	ctx.r3.s64 = ctx.r11.s64 + -1944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91644"))) PPC_WEAK_FUNC(sub_83B91644);
PPC_FUNC_IMPL(__imp__sub_83B91644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91648"))) PPC_WEAK_FUNC(sub_83B91648);
PPC_FUNC_IMPL(__imp__sub_83B91648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1936
	ctx.r3.s64 = ctx.r11.s64 + -1936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91654"))) PPC_WEAK_FUNC(sub_83B91654);
PPC_FUNC_IMPL(__imp__sub_83B91654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91658"))) PPC_WEAK_FUNC(sub_83B91658);
PPC_FUNC_IMPL(__imp__sub_83B91658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1928
	ctx.r3.s64 = ctx.r11.s64 + -1928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91664"))) PPC_WEAK_FUNC(sub_83B91664);
PPC_FUNC_IMPL(__imp__sub_83B91664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91668"))) PPC_WEAK_FUNC(sub_83B91668);
PPC_FUNC_IMPL(__imp__sub_83B91668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1920
	ctx.r3.s64 = ctx.r11.s64 + -1920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91674"))) PPC_WEAK_FUNC(sub_83B91674);
PPC_FUNC_IMPL(__imp__sub_83B91674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91678"))) PPC_WEAK_FUNC(sub_83B91678);
PPC_FUNC_IMPL(__imp__sub_83B91678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1912
	ctx.r3.s64 = ctx.r11.s64 + -1912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91684"))) PPC_WEAK_FUNC(sub_83B91684);
PPC_FUNC_IMPL(__imp__sub_83B91684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91688"))) PPC_WEAK_FUNC(sub_83B91688);
PPC_FUNC_IMPL(__imp__sub_83B91688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1904
	ctx.r3.s64 = ctx.r11.s64 + -1904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91694"))) PPC_WEAK_FUNC(sub_83B91694);
PPC_FUNC_IMPL(__imp__sub_83B91694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91698"))) PPC_WEAK_FUNC(sub_83B91698);
PPC_FUNC_IMPL(__imp__sub_83B91698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1896
	ctx.r3.s64 = ctx.r11.s64 + -1896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B916A4"))) PPC_WEAK_FUNC(sub_83B916A4);
PPC_FUNC_IMPL(__imp__sub_83B916A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B916A8"))) PPC_WEAK_FUNC(sub_83B916A8);
PPC_FUNC_IMPL(__imp__sub_83B916A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6232
	ctx.r7.s64 = ctx.r8.s64 + -6232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6232);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6232(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6232, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B916D0"))) PPC_WEAK_FUNC(sub_83B916D0);
PPC_FUNC_IMPL(__imp__sub_83B916D0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6236
	ctx.r3.s64 = ctx.r11.s64 + -6236;
	// bl 0x83523120
	ctx.lr = 0x83B916E8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-1888
	ctx.r3.s64 = ctx.r10.s64 + -1888;
	// bl 0x831cdcc8
	ctx.lr = 0x83B916F4;
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

__attribute__((alias("__imp__sub_83B91704"))) PPC_WEAK_FUNC(sub_83B91704);
PPC_FUNC_IMPL(__imp__sub_83B91704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91708"))) PPC_WEAK_FUNC(sub_83B91708);
PPC_FUNC_IMPL(__imp__sub_83B91708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1872
	ctx.r3.s64 = ctx.r11.s64 + -1872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91714"))) PPC_WEAK_FUNC(sub_83B91714);
PPC_FUNC_IMPL(__imp__sub_83B91714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91718"))) PPC_WEAK_FUNC(sub_83B91718);
PPC_FUNC_IMPL(__imp__sub_83B91718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1864
	ctx.r3.s64 = ctx.r11.s64 + -1864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91724"))) PPC_WEAK_FUNC(sub_83B91724);
PPC_FUNC_IMPL(__imp__sub_83B91724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91728"))) PPC_WEAK_FUNC(sub_83B91728);
PPC_FUNC_IMPL(__imp__sub_83B91728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1856
	ctx.r3.s64 = ctx.r11.s64 + -1856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91734"))) PPC_WEAK_FUNC(sub_83B91734);
PPC_FUNC_IMPL(__imp__sub_83B91734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91738"))) PPC_WEAK_FUNC(sub_83B91738);
PPC_FUNC_IMPL(__imp__sub_83B91738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1848
	ctx.r3.s64 = ctx.r11.s64 + -1848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91744"))) PPC_WEAK_FUNC(sub_83B91744);
PPC_FUNC_IMPL(__imp__sub_83B91744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91748"))) PPC_WEAK_FUNC(sub_83B91748);
PPC_FUNC_IMPL(__imp__sub_83B91748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1840
	ctx.r3.s64 = ctx.r11.s64 + -1840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91754"))) PPC_WEAK_FUNC(sub_83B91754);
PPC_FUNC_IMPL(__imp__sub_83B91754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91758"))) PPC_WEAK_FUNC(sub_83B91758);
PPC_FUNC_IMPL(__imp__sub_83B91758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1832
	ctx.r3.s64 = ctx.r11.s64 + -1832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91764"))) PPC_WEAK_FUNC(sub_83B91764);
PPC_FUNC_IMPL(__imp__sub_83B91764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91768"))) PPC_WEAK_FUNC(sub_83B91768);
PPC_FUNC_IMPL(__imp__sub_83B91768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1824
	ctx.r3.s64 = ctx.r11.s64 + -1824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91774"))) PPC_WEAK_FUNC(sub_83B91774);
PPC_FUNC_IMPL(__imp__sub_83B91774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91778"))) PPC_WEAK_FUNC(sub_83B91778);
PPC_FUNC_IMPL(__imp__sub_83B91778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1816
	ctx.r3.s64 = ctx.r11.s64 + -1816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91784"))) PPC_WEAK_FUNC(sub_83B91784);
PPC_FUNC_IMPL(__imp__sub_83B91784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91788"))) PPC_WEAK_FUNC(sub_83B91788);
PPC_FUNC_IMPL(__imp__sub_83B91788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1808
	ctx.r3.s64 = ctx.r11.s64 + -1808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91794"))) PPC_WEAK_FUNC(sub_83B91794);
PPC_FUNC_IMPL(__imp__sub_83B91794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91798"))) PPC_WEAK_FUNC(sub_83B91798);
PPC_FUNC_IMPL(__imp__sub_83B91798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1800
	ctx.r3.s64 = ctx.r11.s64 + -1800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B917A4"))) PPC_WEAK_FUNC(sub_83B917A4);
PPC_FUNC_IMPL(__imp__sub_83B917A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B917A8"))) PPC_WEAK_FUNC(sub_83B917A8);
PPC_FUNC_IMPL(__imp__sub_83B917A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1792
	ctx.r3.s64 = ctx.r11.s64 + -1792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B917B4"))) PPC_WEAK_FUNC(sub_83B917B4);
PPC_FUNC_IMPL(__imp__sub_83B917B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B917B8"))) PPC_WEAK_FUNC(sub_83B917B8);
PPC_FUNC_IMPL(__imp__sub_83B917B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1784
	ctx.r3.s64 = ctx.r11.s64 + -1784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B917C4"))) PPC_WEAK_FUNC(sub_83B917C4);
PPC_FUNC_IMPL(__imp__sub_83B917C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B917C8"))) PPC_WEAK_FUNC(sub_83B917C8);
PPC_FUNC_IMPL(__imp__sub_83B917C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6220
	ctx.r7.s64 = ctx.r8.s64 + -6220;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6220(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6220);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6220(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6220, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B917F0"))) PPC_WEAK_FUNC(sub_83B917F0);
PPC_FUNC_IMPL(__imp__sub_83B917F0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6224
	ctx.r3.s64 = ctx.r11.s64 + -6224;
	// bl 0x83523120
	ctx.lr = 0x83B91808;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-1776
	ctx.r3.s64 = ctx.r10.s64 + -1776;
	// bl 0x831cdcc8
	ctx.lr = 0x83B91814;
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

__attribute__((alias("__imp__sub_83B91824"))) PPC_WEAK_FUNC(sub_83B91824);
PPC_FUNC_IMPL(__imp__sub_83B91824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91828"))) PPC_WEAK_FUNC(sub_83B91828);
PPC_FUNC_IMPL(__imp__sub_83B91828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1760
	ctx.r3.s64 = ctx.r11.s64 + -1760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91834"))) PPC_WEAK_FUNC(sub_83B91834);
PPC_FUNC_IMPL(__imp__sub_83B91834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91838"))) PPC_WEAK_FUNC(sub_83B91838);
PPC_FUNC_IMPL(__imp__sub_83B91838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1752
	ctx.r3.s64 = ctx.r11.s64 + -1752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91844"))) PPC_WEAK_FUNC(sub_83B91844);
PPC_FUNC_IMPL(__imp__sub_83B91844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91848"))) PPC_WEAK_FUNC(sub_83B91848);
PPC_FUNC_IMPL(__imp__sub_83B91848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1744
	ctx.r3.s64 = ctx.r11.s64 + -1744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91854"))) PPC_WEAK_FUNC(sub_83B91854);
PPC_FUNC_IMPL(__imp__sub_83B91854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91858"))) PPC_WEAK_FUNC(sub_83B91858);
PPC_FUNC_IMPL(__imp__sub_83B91858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1736
	ctx.r3.s64 = ctx.r11.s64 + -1736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91864"))) PPC_WEAK_FUNC(sub_83B91864);
PPC_FUNC_IMPL(__imp__sub_83B91864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91868"))) PPC_WEAK_FUNC(sub_83B91868);
PPC_FUNC_IMPL(__imp__sub_83B91868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1728
	ctx.r3.s64 = ctx.r11.s64 + -1728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91874"))) PPC_WEAK_FUNC(sub_83B91874);
PPC_FUNC_IMPL(__imp__sub_83B91874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91878"))) PPC_WEAK_FUNC(sub_83B91878);
PPC_FUNC_IMPL(__imp__sub_83B91878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1720
	ctx.r3.s64 = ctx.r11.s64 + -1720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91884"))) PPC_WEAK_FUNC(sub_83B91884);
PPC_FUNC_IMPL(__imp__sub_83B91884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91888"))) PPC_WEAK_FUNC(sub_83B91888);
PPC_FUNC_IMPL(__imp__sub_83B91888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1712
	ctx.r3.s64 = ctx.r11.s64 + -1712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91894"))) PPC_WEAK_FUNC(sub_83B91894);
PPC_FUNC_IMPL(__imp__sub_83B91894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91898"))) PPC_WEAK_FUNC(sub_83B91898);
PPC_FUNC_IMPL(__imp__sub_83B91898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1704
	ctx.r3.s64 = ctx.r11.s64 + -1704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B918A4"))) PPC_WEAK_FUNC(sub_83B918A4);
PPC_FUNC_IMPL(__imp__sub_83B918A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B918A8"))) PPC_WEAK_FUNC(sub_83B918A8);
PPC_FUNC_IMPL(__imp__sub_83B918A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1696
	ctx.r3.s64 = ctx.r11.s64 + -1696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B918B4"))) PPC_WEAK_FUNC(sub_83B918B4);
PPC_FUNC_IMPL(__imp__sub_83B918B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B918B8"))) PPC_WEAK_FUNC(sub_83B918B8);
PPC_FUNC_IMPL(__imp__sub_83B918B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1688
	ctx.r3.s64 = ctx.r11.s64 + -1688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B918C4"))) PPC_WEAK_FUNC(sub_83B918C4);
PPC_FUNC_IMPL(__imp__sub_83B918C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B918C8"))) PPC_WEAK_FUNC(sub_83B918C8);
PPC_FUNC_IMPL(__imp__sub_83B918C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1680
	ctx.r3.s64 = ctx.r11.s64 + -1680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B918D4"))) PPC_WEAK_FUNC(sub_83B918D4);
PPC_FUNC_IMPL(__imp__sub_83B918D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B918D8"))) PPC_WEAK_FUNC(sub_83B918D8);
PPC_FUNC_IMPL(__imp__sub_83B918D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1672
	ctx.r3.s64 = ctx.r11.s64 + -1672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B918E4"))) PPC_WEAK_FUNC(sub_83B918E4);
PPC_FUNC_IMPL(__imp__sub_83B918E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B918E8"))) PPC_WEAK_FUNC(sub_83B918E8);
PPC_FUNC_IMPL(__imp__sub_83B918E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6208
	ctx.r7.s64 = ctx.r8.s64 + -6208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6208(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6208);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6208(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6208, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B91910"))) PPC_WEAK_FUNC(sub_83B91910);
PPC_FUNC_IMPL(__imp__sub_83B91910) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6212
	ctx.r3.s64 = ctx.r11.s64 + -6212;
	// bl 0x83523120
	ctx.lr = 0x83B91928;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-1664
	ctx.r3.s64 = ctx.r10.s64 + -1664;
	// bl 0x831cdcc8
	ctx.lr = 0x83B91934;
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

__attribute__((alias("__imp__sub_83B91944"))) PPC_WEAK_FUNC(sub_83B91944);
PPC_FUNC_IMPL(__imp__sub_83B91944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91948"))) PPC_WEAK_FUNC(sub_83B91948);
PPC_FUNC_IMPL(__imp__sub_83B91948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1648
	ctx.r3.s64 = ctx.r11.s64 + -1648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91954"))) PPC_WEAK_FUNC(sub_83B91954);
PPC_FUNC_IMPL(__imp__sub_83B91954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91958"))) PPC_WEAK_FUNC(sub_83B91958);
PPC_FUNC_IMPL(__imp__sub_83B91958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1640
	ctx.r3.s64 = ctx.r11.s64 + -1640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91964"))) PPC_WEAK_FUNC(sub_83B91964);
PPC_FUNC_IMPL(__imp__sub_83B91964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91968"))) PPC_WEAK_FUNC(sub_83B91968);
PPC_FUNC_IMPL(__imp__sub_83B91968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1632
	ctx.r3.s64 = ctx.r11.s64 + -1632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91974"))) PPC_WEAK_FUNC(sub_83B91974);
PPC_FUNC_IMPL(__imp__sub_83B91974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91978"))) PPC_WEAK_FUNC(sub_83B91978);
PPC_FUNC_IMPL(__imp__sub_83B91978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1624
	ctx.r3.s64 = ctx.r11.s64 + -1624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91984"))) PPC_WEAK_FUNC(sub_83B91984);
PPC_FUNC_IMPL(__imp__sub_83B91984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91988"))) PPC_WEAK_FUNC(sub_83B91988);
PPC_FUNC_IMPL(__imp__sub_83B91988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1616
	ctx.r3.s64 = ctx.r11.s64 + -1616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91994"))) PPC_WEAK_FUNC(sub_83B91994);
PPC_FUNC_IMPL(__imp__sub_83B91994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91998"))) PPC_WEAK_FUNC(sub_83B91998);
PPC_FUNC_IMPL(__imp__sub_83B91998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1608
	ctx.r3.s64 = ctx.r11.s64 + -1608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B919A4"))) PPC_WEAK_FUNC(sub_83B919A4);
PPC_FUNC_IMPL(__imp__sub_83B919A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B919A8"))) PPC_WEAK_FUNC(sub_83B919A8);
PPC_FUNC_IMPL(__imp__sub_83B919A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1600
	ctx.r3.s64 = ctx.r11.s64 + -1600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B919B4"))) PPC_WEAK_FUNC(sub_83B919B4);
PPC_FUNC_IMPL(__imp__sub_83B919B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B919B8"))) PPC_WEAK_FUNC(sub_83B919B8);
PPC_FUNC_IMPL(__imp__sub_83B919B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1592
	ctx.r3.s64 = ctx.r11.s64 + -1592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B919C4"))) PPC_WEAK_FUNC(sub_83B919C4);
PPC_FUNC_IMPL(__imp__sub_83B919C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B919C8"))) PPC_WEAK_FUNC(sub_83B919C8);
PPC_FUNC_IMPL(__imp__sub_83B919C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1584
	ctx.r3.s64 = ctx.r11.s64 + -1584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B919D4"))) PPC_WEAK_FUNC(sub_83B919D4);
PPC_FUNC_IMPL(__imp__sub_83B919D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B919D8"))) PPC_WEAK_FUNC(sub_83B919D8);
PPC_FUNC_IMPL(__imp__sub_83B919D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1576
	ctx.r3.s64 = ctx.r11.s64 + -1576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B919E4"))) PPC_WEAK_FUNC(sub_83B919E4);
PPC_FUNC_IMPL(__imp__sub_83B919E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B919E8"))) PPC_WEAK_FUNC(sub_83B919E8);
PPC_FUNC_IMPL(__imp__sub_83B919E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1568
	ctx.r3.s64 = ctx.r11.s64 + -1568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B919F4"))) PPC_WEAK_FUNC(sub_83B919F4);
PPC_FUNC_IMPL(__imp__sub_83B919F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B919F8"))) PPC_WEAK_FUNC(sub_83B919F8);
PPC_FUNC_IMPL(__imp__sub_83B919F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1560
	ctx.r3.s64 = ctx.r11.s64 + -1560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91A04"))) PPC_WEAK_FUNC(sub_83B91A04);
PPC_FUNC_IMPL(__imp__sub_83B91A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91A08"))) PPC_WEAK_FUNC(sub_83B91A08);
PPC_FUNC_IMPL(__imp__sub_83B91A08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6196
	ctx.r7.s64 = ctx.r8.s64 + -6196;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6196(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6196);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6196(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6196, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B91A30"))) PPC_WEAK_FUNC(sub_83B91A30);
PPC_FUNC_IMPL(__imp__sub_83B91A30) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6200
	ctx.r3.s64 = ctx.r11.s64 + -6200;
	// bl 0x83523120
	ctx.lr = 0x83B91A48;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-1552
	ctx.r3.s64 = ctx.r10.s64 + -1552;
	// bl 0x831cdcc8
	ctx.lr = 0x83B91A54;
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

__attribute__((alias("__imp__sub_83B91A64"))) PPC_WEAK_FUNC(sub_83B91A64);
PPC_FUNC_IMPL(__imp__sub_83B91A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91A68"))) PPC_WEAK_FUNC(sub_83B91A68);
PPC_FUNC_IMPL(__imp__sub_83B91A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1536
	ctx.r3.s64 = ctx.r11.s64 + -1536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91A74"))) PPC_WEAK_FUNC(sub_83B91A74);
PPC_FUNC_IMPL(__imp__sub_83B91A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91A78"))) PPC_WEAK_FUNC(sub_83B91A78);
PPC_FUNC_IMPL(__imp__sub_83B91A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1528
	ctx.r3.s64 = ctx.r11.s64 + -1528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91A84"))) PPC_WEAK_FUNC(sub_83B91A84);
PPC_FUNC_IMPL(__imp__sub_83B91A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91A88"))) PPC_WEAK_FUNC(sub_83B91A88);
PPC_FUNC_IMPL(__imp__sub_83B91A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1520
	ctx.r3.s64 = ctx.r11.s64 + -1520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91A94"))) PPC_WEAK_FUNC(sub_83B91A94);
PPC_FUNC_IMPL(__imp__sub_83B91A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91A98"))) PPC_WEAK_FUNC(sub_83B91A98);
PPC_FUNC_IMPL(__imp__sub_83B91A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1512
	ctx.r3.s64 = ctx.r11.s64 + -1512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91AA4"))) PPC_WEAK_FUNC(sub_83B91AA4);
PPC_FUNC_IMPL(__imp__sub_83B91AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91AA8"))) PPC_WEAK_FUNC(sub_83B91AA8);
PPC_FUNC_IMPL(__imp__sub_83B91AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1504
	ctx.r3.s64 = ctx.r11.s64 + -1504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91AB4"))) PPC_WEAK_FUNC(sub_83B91AB4);
PPC_FUNC_IMPL(__imp__sub_83B91AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91AB8"))) PPC_WEAK_FUNC(sub_83B91AB8);
PPC_FUNC_IMPL(__imp__sub_83B91AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1496
	ctx.r3.s64 = ctx.r11.s64 + -1496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91AC4"))) PPC_WEAK_FUNC(sub_83B91AC4);
PPC_FUNC_IMPL(__imp__sub_83B91AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91AC8"))) PPC_WEAK_FUNC(sub_83B91AC8);
PPC_FUNC_IMPL(__imp__sub_83B91AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1488
	ctx.r3.s64 = ctx.r11.s64 + -1488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91AD4"))) PPC_WEAK_FUNC(sub_83B91AD4);
PPC_FUNC_IMPL(__imp__sub_83B91AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91AD8"))) PPC_WEAK_FUNC(sub_83B91AD8);
PPC_FUNC_IMPL(__imp__sub_83B91AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1480
	ctx.r3.s64 = ctx.r11.s64 + -1480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91AE4"))) PPC_WEAK_FUNC(sub_83B91AE4);
PPC_FUNC_IMPL(__imp__sub_83B91AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91AE8"))) PPC_WEAK_FUNC(sub_83B91AE8);
PPC_FUNC_IMPL(__imp__sub_83B91AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1472
	ctx.r3.s64 = ctx.r11.s64 + -1472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91AF4"))) PPC_WEAK_FUNC(sub_83B91AF4);
PPC_FUNC_IMPL(__imp__sub_83B91AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91AF8"))) PPC_WEAK_FUNC(sub_83B91AF8);
PPC_FUNC_IMPL(__imp__sub_83B91AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1464
	ctx.r3.s64 = ctx.r11.s64 + -1464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91B04"))) PPC_WEAK_FUNC(sub_83B91B04);
PPC_FUNC_IMPL(__imp__sub_83B91B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91B08"))) PPC_WEAK_FUNC(sub_83B91B08);
PPC_FUNC_IMPL(__imp__sub_83B91B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1456
	ctx.r3.s64 = ctx.r11.s64 + -1456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91B14"))) PPC_WEAK_FUNC(sub_83B91B14);
PPC_FUNC_IMPL(__imp__sub_83B91B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91B18"))) PPC_WEAK_FUNC(sub_83B91B18);
PPC_FUNC_IMPL(__imp__sub_83B91B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1448
	ctx.r3.s64 = ctx.r11.s64 + -1448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91B24"))) PPC_WEAK_FUNC(sub_83B91B24);
PPC_FUNC_IMPL(__imp__sub_83B91B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91B28"))) PPC_WEAK_FUNC(sub_83B91B28);
PPC_FUNC_IMPL(__imp__sub_83B91B28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6184
	ctx.r7.s64 = ctx.r8.s64 + -6184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6184);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6184(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6184, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B91B50"))) PPC_WEAK_FUNC(sub_83B91B50);
PPC_FUNC_IMPL(__imp__sub_83B91B50) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6188
	ctx.r3.s64 = ctx.r11.s64 + -6188;
	// bl 0x83523120
	ctx.lr = 0x83B91B68;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-1440
	ctx.r3.s64 = ctx.r10.s64 + -1440;
	// bl 0x831cdcc8
	ctx.lr = 0x83B91B74;
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

__attribute__((alias("__imp__sub_83B91B84"))) PPC_WEAK_FUNC(sub_83B91B84);
PPC_FUNC_IMPL(__imp__sub_83B91B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91B88"))) PPC_WEAK_FUNC(sub_83B91B88);
PPC_FUNC_IMPL(__imp__sub_83B91B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1424
	ctx.r3.s64 = ctx.r11.s64 + -1424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91B94"))) PPC_WEAK_FUNC(sub_83B91B94);
PPC_FUNC_IMPL(__imp__sub_83B91B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91B98"))) PPC_WEAK_FUNC(sub_83B91B98);
PPC_FUNC_IMPL(__imp__sub_83B91B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91BA4"))) PPC_WEAK_FUNC(sub_83B91BA4);
PPC_FUNC_IMPL(__imp__sub_83B91BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91BA8"))) PPC_WEAK_FUNC(sub_83B91BA8);
PPC_FUNC_IMPL(__imp__sub_83B91BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1408
	ctx.r3.s64 = ctx.r11.s64 + -1408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91BB4"))) PPC_WEAK_FUNC(sub_83B91BB4);
PPC_FUNC_IMPL(__imp__sub_83B91BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91BB8"))) PPC_WEAK_FUNC(sub_83B91BB8);
PPC_FUNC_IMPL(__imp__sub_83B91BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1400
	ctx.r3.s64 = ctx.r11.s64 + -1400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91BC4"))) PPC_WEAK_FUNC(sub_83B91BC4);
PPC_FUNC_IMPL(__imp__sub_83B91BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91BC8"))) PPC_WEAK_FUNC(sub_83B91BC8);
PPC_FUNC_IMPL(__imp__sub_83B91BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1392
	ctx.r3.s64 = ctx.r11.s64 + -1392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91BD4"))) PPC_WEAK_FUNC(sub_83B91BD4);
PPC_FUNC_IMPL(__imp__sub_83B91BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91BD8"))) PPC_WEAK_FUNC(sub_83B91BD8);
PPC_FUNC_IMPL(__imp__sub_83B91BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1384
	ctx.r3.s64 = ctx.r11.s64 + -1384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91BE4"))) PPC_WEAK_FUNC(sub_83B91BE4);
PPC_FUNC_IMPL(__imp__sub_83B91BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91BE8"))) PPC_WEAK_FUNC(sub_83B91BE8);
PPC_FUNC_IMPL(__imp__sub_83B91BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1376
	ctx.r3.s64 = ctx.r11.s64 + -1376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91BF4"))) PPC_WEAK_FUNC(sub_83B91BF4);
PPC_FUNC_IMPL(__imp__sub_83B91BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91BF8"))) PPC_WEAK_FUNC(sub_83B91BF8);
PPC_FUNC_IMPL(__imp__sub_83B91BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1368
	ctx.r3.s64 = ctx.r11.s64 + -1368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91C04"))) PPC_WEAK_FUNC(sub_83B91C04);
PPC_FUNC_IMPL(__imp__sub_83B91C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91C08"))) PPC_WEAK_FUNC(sub_83B91C08);
PPC_FUNC_IMPL(__imp__sub_83B91C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1360
	ctx.r3.s64 = ctx.r11.s64 + -1360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91C14"))) PPC_WEAK_FUNC(sub_83B91C14);
PPC_FUNC_IMPL(__imp__sub_83B91C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91C18"))) PPC_WEAK_FUNC(sub_83B91C18);
PPC_FUNC_IMPL(__imp__sub_83B91C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1352
	ctx.r3.s64 = ctx.r11.s64 + -1352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91C24"))) PPC_WEAK_FUNC(sub_83B91C24);
PPC_FUNC_IMPL(__imp__sub_83B91C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91C28"))) PPC_WEAK_FUNC(sub_83B91C28);
PPC_FUNC_IMPL(__imp__sub_83B91C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1344
	ctx.r3.s64 = ctx.r11.s64 + -1344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91C34"))) PPC_WEAK_FUNC(sub_83B91C34);
PPC_FUNC_IMPL(__imp__sub_83B91C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91C38"))) PPC_WEAK_FUNC(sub_83B91C38);
PPC_FUNC_IMPL(__imp__sub_83B91C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1336
	ctx.r3.s64 = ctx.r11.s64 + -1336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91C44"))) PPC_WEAK_FUNC(sub_83B91C44);
PPC_FUNC_IMPL(__imp__sub_83B91C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91C48"))) PPC_WEAK_FUNC(sub_83B91C48);
PPC_FUNC_IMPL(__imp__sub_83B91C48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6172
	ctx.r7.s64 = ctx.r8.s64 + -6172;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6172(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6172);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6172(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6172, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B91C70"))) PPC_WEAK_FUNC(sub_83B91C70);
PPC_FUNC_IMPL(__imp__sub_83B91C70) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6176
	ctx.r3.s64 = ctx.r11.s64 + -6176;
	// bl 0x83523120
	ctx.lr = 0x83B91C88;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-1328
	ctx.r3.s64 = ctx.r10.s64 + -1328;
	// bl 0x831cdcc8
	ctx.lr = 0x83B91C94;
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

__attribute__((alias("__imp__sub_83B91CA4"))) PPC_WEAK_FUNC(sub_83B91CA4);
PPC_FUNC_IMPL(__imp__sub_83B91CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91CA8"))) PPC_WEAK_FUNC(sub_83B91CA8);
PPC_FUNC_IMPL(__imp__sub_83B91CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1312
	ctx.r3.s64 = ctx.r11.s64 + -1312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91CB4"))) PPC_WEAK_FUNC(sub_83B91CB4);
PPC_FUNC_IMPL(__imp__sub_83B91CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91CB8"))) PPC_WEAK_FUNC(sub_83B91CB8);
PPC_FUNC_IMPL(__imp__sub_83B91CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1304
	ctx.r3.s64 = ctx.r11.s64 + -1304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91CC4"))) PPC_WEAK_FUNC(sub_83B91CC4);
PPC_FUNC_IMPL(__imp__sub_83B91CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91CC8"))) PPC_WEAK_FUNC(sub_83B91CC8);
PPC_FUNC_IMPL(__imp__sub_83B91CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1296
	ctx.r3.s64 = ctx.r11.s64 + -1296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91CD4"))) PPC_WEAK_FUNC(sub_83B91CD4);
PPC_FUNC_IMPL(__imp__sub_83B91CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91CD8"))) PPC_WEAK_FUNC(sub_83B91CD8);
PPC_FUNC_IMPL(__imp__sub_83B91CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1288
	ctx.r3.s64 = ctx.r11.s64 + -1288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91CE4"))) PPC_WEAK_FUNC(sub_83B91CE4);
PPC_FUNC_IMPL(__imp__sub_83B91CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91CE8"))) PPC_WEAK_FUNC(sub_83B91CE8);
PPC_FUNC_IMPL(__imp__sub_83B91CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1280
	ctx.r3.s64 = ctx.r11.s64 + -1280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91CF4"))) PPC_WEAK_FUNC(sub_83B91CF4);
PPC_FUNC_IMPL(__imp__sub_83B91CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91CF8"))) PPC_WEAK_FUNC(sub_83B91CF8);
PPC_FUNC_IMPL(__imp__sub_83B91CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1272
	ctx.r3.s64 = ctx.r11.s64 + -1272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91D04"))) PPC_WEAK_FUNC(sub_83B91D04);
PPC_FUNC_IMPL(__imp__sub_83B91D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91D08"))) PPC_WEAK_FUNC(sub_83B91D08);
PPC_FUNC_IMPL(__imp__sub_83B91D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1264
	ctx.r3.s64 = ctx.r11.s64 + -1264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91D14"))) PPC_WEAK_FUNC(sub_83B91D14);
PPC_FUNC_IMPL(__imp__sub_83B91D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91D18"))) PPC_WEAK_FUNC(sub_83B91D18);
PPC_FUNC_IMPL(__imp__sub_83B91D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1256
	ctx.r3.s64 = ctx.r11.s64 + -1256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91D24"))) PPC_WEAK_FUNC(sub_83B91D24);
PPC_FUNC_IMPL(__imp__sub_83B91D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91D28"))) PPC_WEAK_FUNC(sub_83B91D28);
PPC_FUNC_IMPL(__imp__sub_83B91D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1248
	ctx.r3.s64 = ctx.r11.s64 + -1248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91D34"))) PPC_WEAK_FUNC(sub_83B91D34);
PPC_FUNC_IMPL(__imp__sub_83B91D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91D38"))) PPC_WEAK_FUNC(sub_83B91D38);
PPC_FUNC_IMPL(__imp__sub_83B91D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1240
	ctx.r3.s64 = ctx.r11.s64 + -1240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91D44"))) PPC_WEAK_FUNC(sub_83B91D44);
PPC_FUNC_IMPL(__imp__sub_83B91D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91D48"))) PPC_WEAK_FUNC(sub_83B91D48);
PPC_FUNC_IMPL(__imp__sub_83B91D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1232
	ctx.r3.s64 = ctx.r11.s64 + -1232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91D54"))) PPC_WEAK_FUNC(sub_83B91D54);
PPC_FUNC_IMPL(__imp__sub_83B91D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91D58"))) PPC_WEAK_FUNC(sub_83B91D58);
PPC_FUNC_IMPL(__imp__sub_83B91D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1224
	ctx.r3.s64 = ctx.r11.s64 + -1224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91D64"))) PPC_WEAK_FUNC(sub_83B91D64);
PPC_FUNC_IMPL(__imp__sub_83B91D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91D68"))) PPC_WEAK_FUNC(sub_83B91D68);
PPC_FUNC_IMPL(__imp__sub_83B91D68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6160
	ctx.r7.s64 = ctx.r8.s64 + -6160;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6160);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6160(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6160, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B91D90"))) PPC_WEAK_FUNC(sub_83B91D90);
PPC_FUNC_IMPL(__imp__sub_83B91D90) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6164
	ctx.r3.s64 = ctx.r11.s64 + -6164;
	// bl 0x83523120
	ctx.lr = 0x83B91DA8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-1216
	ctx.r3.s64 = ctx.r10.s64 + -1216;
	// bl 0x831cdcc8
	ctx.lr = 0x83B91DB4;
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

__attribute__((alias("__imp__sub_83B91DC4"))) PPC_WEAK_FUNC(sub_83B91DC4);
PPC_FUNC_IMPL(__imp__sub_83B91DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91DC8"))) PPC_WEAK_FUNC(sub_83B91DC8);
PPC_FUNC_IMPL(__imp__sub_83B91DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1200
	ctx.r3.s64 = ctx.r11.s64 + -1200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91DD4"))) PPC_WEAK_FUNC(sub_83B91DD4);
PPC_FUNC_IMPL(__imp__sub_83B91DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91DD8"))) PPC_WEAK_FUNC(sub_83B91DD8);
PPC_FUNC_IMPL(__imp__sub_83B91DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1192
	ctx.r3.s64 = ctx.r11.s64 + -1192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B91DE4"))) PPC_WEAK_FUNC(sub_83B91DE4);
PPC_FUNC_IMPL(__imp__sub_83B91DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B91DE8"))) PPC_WEAK_FUNC(sub_83B91DE8);
PPC_FUNC_IMPL(__imp__sub_83B91DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-1184
	ctx.r3.s64 = ctx.r11.s64 + -1184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

