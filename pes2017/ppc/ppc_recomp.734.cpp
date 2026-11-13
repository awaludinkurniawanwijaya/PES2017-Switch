#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C226FC"))) PPC_WEAK_FUNC(sub_83C226FC);
PPC_FUNC_IMPL(__imp__sub_83C226FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22700"))) PPC_WEAK_FUNC(sub_83C22700);
PPC_FUNC_IMPL(__imp__sub_83C22700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7272
	ctx.r3.s64 = ctx.r11.s64 + -7272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2270C"))) PPC_WEAK_FUNC(sub_83C2270C);
PPC_FUNC_IMPL(__imp__sub_83C2270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22710"))) PPC_WEAK_FUNC(sub_83C22710);
PPC_FUNC_IMPL(__imp__sub_83C22710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7264
	ctx.r3.s64 = ctx.r11.s64 + -7264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2271C"))) PPC_WEAK_FUNC(sub_83C2271C);
PPC_FUNC_IMPL(__imp__sub_83C2271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22720"))) PPC_WEAK_FUNC(sub_83C22720);
PPC_FUNC_IMPL(__imp__sub_83C22720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7256
	ctx.r3.s64 = ctx.r11.s64 + -7256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2272C"))) PPC_WEAK_FUNC(sub_83C2272C);
PPC_FUNC_IMPL(__imp__sub_83C2272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22730"))) PPC_WEAK_FUNC(sub_83C22730);
PPC_FUNC_IMPL(__imp__sub_83C22730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7248
	ctx.r3.s64 = ctx.r11.s64 + -7248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2273C"))) PPC_WEAK_FUNC(sub_83C2273C);
PPC_FUNC_IMPL(__imp__sub_83C2273C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22740"))) PPC_WEAK_FUNC(sub_83C22740);
PPC_FUNC_IMPL(__imp__sub_83C22740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7240
	ctx.r3.s64 = ctx.r11.s64 + -7240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2274C"))) PPC_WEAK_FUNC(sub_83C2274C);
PPC_FUNC_IMPL(__imp__sub_83C2274C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22750"))) PPC_WEAK_FUNC(sub_83C22750);
PPC_FUNC_IMPL(__imp__sub_83C22750) {
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
	// addi r3,r11,-16464
	ctx.r3.s64 = ctx.r11.s64 + -16464;
	// bl 0x83523120
	ctx.lr = 0x83C22768;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-7232
	ctx.r3.s64 = ctx.r10.s64 + -7232;
	// bl 0x831cdcc8
	ctx.lr = 0x83C22774;
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

__attribute__((alias("__imp__sub_83C22784"))) PPC_WEAK_FUNC(sub_83C22784);
PPC_FUNC_IMPL(__imp__sub_83C22784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22788"))) PPC_WEAK_FUNC(sub_83C22788);
PPC_FUNC_IMPL(__imp__sub_83C22788) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16460
	ctx.r7.s64 = ctx.r8.s64 + -16460;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16460(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16460);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16460(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16460, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C227B0"))) PPC_WEAK_FUNC(sub_83C227B0);
PPC_FUNC_IMPL(__imp__sub_83C227B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,10860
	ctx.r6.s64 = ctx.r7.s64 + 10860;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,10788(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10788);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16460(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16460);
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
	// std r9,10860(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10860, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C227F8"))) PPC_WEAK_FUNC(sub_83C227F8);
PPC_FUNC_IMPL(__imp__sub_83C227F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7216
	ctx.r3.s64 = ctx.r11.s64 + -7216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22804"))) PPC_WEAK_FUNC(sub_83C22804);
PPC_FUNC_IMPL(__imp__sub_83C22804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22808"))) PPC_WEAK_FUNC(sub_83C22808);
PPC_FUNC_IMPL(__imp__sub_83C22808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7208
	ctx.r3.s64 = ctx.r11.s64 + -7208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22814"))) PPC_WEAK_FUNC(sub_83C22814);
PPC_FUNC_IMPL(__imp__sub_83C22814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22818"))) PPC_WEAK_FUNC(sub_83C22818);
PPC_FUNC_IMPL(__imp__sub_83C22818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7200
	ctx.r3.s64 = ctx.r11.s64 + -7200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22824"))) PPC_WEAK_FUNC(sub_83C22824);
PPC_FUNC_IMPL(__imp__sub_83C22824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22828"))) PPC_WEAK_FUNC(sub_83C22828);
PPC_FUNC_IMPL(__imp__sub_83C22828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7192
	ctx.r3.s64 = ctx.r11.s64 + -7192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22834"))) PPC_WEAK_FUNC(sub_83C22834);
PPC_FUNC_IMPL(__imp__sub_83C22834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22838"))) PPC_WEAK_FUNC(sub_83C22838);
PPC_FUNC_IMPL(__imp__sub_83C22838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7184
	ctx.r3.s64 = ctx.r11.s64 + -7184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22844"))) PPC_WEAK_FUNC(sub_83C22844);
PPC_FUNC_IMPL(__imp__sub_83C22844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22848"))) PPC_WEAK_FUNC(sub_83C22848);
PPC_FUNC_IMPL(__imp__sub_83C22848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7176
	ctx.r3.s64 = ctx.r11.s64 + -7176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22854"))) PPC_WEAK_FUNC(sub_83C22854);
PPC_FUNC_IMPL(__imp__sub_83C22854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22858"))) PPC_WEAK_FUNC(sub_83C22858);
PPC_FUNC_IMPL(__imp__sub_83C22858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7168
	ctx.r3.s64 = ctx.r11.s64 + -7168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22864"))) PPC_WEAK_FUNC(sub_83C22864);
PPC_FUNC_IMPL(__imp__sub_83C22864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22868"))) PPC_WEAK_FUNC(sub_83C22868);
PPC_FUNC_IMPL(__imp__sub_83C22868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7160
	ctx.r3.s64 = ctx.r11.s64 + -7160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22874"))) PPC_WEAK_FUNC(sub_83C22874);
PPC_FUNC_IMPL(__imp__sub_83C22874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22878"))) PPC_WEAK_FUNC(sub_83C22878);
PPC_FUNC_IMPL(__imp__sub_83C22878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7152
	ctx.r3.s64 = ctx.r11.s64 + -7152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22884"))) PPC_WEAK_FUNC(sub_83C22884);
PPC_FUNC_IMPL(__imp__sub_83C22884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22888"))) PPC_WEAK_FUNC(sub_83C22888);
PPC_FUNC_IMPL(__imp__sub_83C22888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7144
	ctx.r3.s64 = ctx.r11.s64 + -7144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22894"))) PPC_WEAK_FUNC(sub_83C22894);
PPC_FUNC_IMPL(__imp__sub_83C22894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22898"))) PPC_WEAK_FUNC(sub_83C22898);
PPC_FUNC_IMPL(__imp__sub_83C22898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7136
	ctx.r3.s64 = ctx.r11.s64 + -7136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C228A4"))) PPC_WEAK_FUNC(sub_83C228A4);
PPC_FUNC_IMPL(__imp__sub_83C228A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C228A8"))) PPC_WEAK_FUNC(sub_83C228A8);
PPC_FUNC_IMPL(__imp__sub_83C228A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7128
	ctx.r3.s64 = ctx.r11.s64 + -7128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C228B4"))) PPC_WEAK_FUNC(sub_83C228B4);
PPC_FUNC_IMPL(__imp__sub_83C228B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C228B8"))) PPC_WEAK_FUNC(sub_83C228B8);
PPC_FUNC_IMPL(__imp__sub_83C228B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7120
	ctx.r3.s64 = ctx.r11.s64 + -7120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C228C4"))) PPC_WEAK_FUNC(sub_83C228C4);
PPC_FUNC_IMPL(__imp__sub_83C228C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C228C8"))) PPC_WEAK_FUNC(sub_83C228C8);
PPC_FUNC_IMPL(__imp__sub_83C228C8) {
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
	// addi r3,r11,-16452
	ctx.r3.s64 = ctx.r11.s64 + -16452;
	// bl 0x83523120
	ctx.lr = 0x83C228E0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-7112
	ctx.r3.s64 = ctx.r10.s64 + -7112;
	// bl 0x831cdcc8
	ctx.lr = 0x83C228EC;
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

__attribute__((alias("__imp__sub_83C228FC"))) PPC_WEAK_FUNC(sub_83C228FC);
PPC_FUNC_IMPL(__imp__sub_83C228FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22900"))) PPC_WEAK_FUNC(sub_83C22900);
PPC_FUNC_IMPL(__imp__sub_83C22900) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16448
	ctx.r7.s64 = ctx.r8.s64 + -16448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C22928"))) PPC_WEAK_FUNC(sub_83C22928);
PPC_FUNC_IMPL(__imp__sub_83C22928) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,10988
	ctx.r6.s64 = ctx.r7.s64 + 10988;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,10916(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10916);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16448);
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
	// std r9,10988(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10988, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C22970"))) PPC_WEAK_FUNC(sub_83C22970);
PPC_FUNC_IMPL(__imp__sub_83C22970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7096
	ctx.r3.s64 = ctx.r11.s64 + -7096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2297C"))) PPC_WEAK_FUNC(sub_83C2297C);
PPC_FUNC_IMPL(__imp__sub_83C2297C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22980"))) PPC_WEAK_FUNC(sub_83C22980);
PPC_FUNC_IMPL(__imp__sub_83C22980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7088
	ctx.r3.s64 = ctx.r11.s64 + -7088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2298C"))) PPC_WEAK_FUNC(sub_83C2298C);
PPC_FUNC_IMPL(__imp__sub_83C2298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22990"))) PPC_WEAK_FUNC(sub_83C22990);
PPC_FUNC_IMPL(__imp__sub_83C22990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7080
	ctx.r3.s64 = ctx.r11.s64 + -7080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2299C"))) PPC_WEAK_FUNC(sub_83C2299C);
PPC_FUNC_IMPL(__imp__sub_83C2299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C229A0"))) PPC_WEAK_FUNC(sub_83C229A0);
PPC_FUNC_IMPL(__imp__sub_83C229A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7072
	ctx.r3.s64 = ctx.r11.s64 + -7072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C229AC"))) PPC_WEAK_FUNC(sub_83C229AC);
PPC_FUNC_IMPL(__imp__sub_83C229AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C229B0"))) PPC_WEAK_FUNC(sub_83C229B0);
PPC_FUNC_IMPL(__imp__sub_83C229B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7064
	ctx.r3.s64 = ctx.r11.s64 + -7064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C229BC"))) PPC_WEAK_FUNC(sub_83C229BC);
PPC_FUNC_IMPL(__imp__sub_83C229BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C229C0"))) PPC_WEAK_FUNC(sub_83C229C0);
PPC_FUNC_IMPL(__imp__sub_83C229C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7056
	ctx.r3.s64 = ctx.r11.s64 + -7056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C229CC"))) PPC_WEAK_FUNC(sub_83C229CC);
PPC_FUNC_IMPL(__imp__sub_83C229CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C229D0"))) PPC_WEAK_FUNC(sub_83C229D0);
PPC_FUNC_IMPL(__imp__sub_83C229D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7048
	ctx.r3.s64 = ctx.r11.s64 + -7048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C229DC"))) PPC_WEAK_FUNC(sub_83C229DC);
PPC_FUNC_IMPL(__imp__sub_83C229DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C229E0"))) PPC_WEAK_FUNC(sub_83C229E0);
PPC_FUNC_IMPL(__imp__sub_83C229E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7040
	ctx.r3.s64 = ctx.r11.s64 + -7040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C229EC"))) PPC_WEAK_FUNC(sub_83C229EC);
PPC_FUNC_IMPL(__imp__sub_83C229EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C229F0"))) PPC_WEAK_FUNC(sub_83C229F0);
PPC_FUNC_IMPL(__imp__sub_83C229F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7032
	ctx.r3.s64 = ctx.r11.s64 + -7032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C229FC"))) PPC_WEAK_FUNC(sub_83C229FC);
PPC_FUNC_IMPL(__imp__sub_83C229FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22A00"))) PPC_WEAK_FUNC(sub_83C22A00);
PPC_FUNC_IMPL(__imp__sub_83C22A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7024
	ctx.r3.s64 = ctx.r11.s64 + -7024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22A0C"))) PPC_WEAK_FUNC(sub_83C22A0C);
PPC_FUNC_IMPL(__imp__sub_83C22A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22A10"))) PPC_WEAK_FUNC(sub_83C22A10);
PPC_FUNC_IMPL(__imp__sub_83C22A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7016
	ctx.r3.s64 = ctx.r11.s64 + -7016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22A1C"))) PPC_WEAK_FUNC(sub_83C22A1C);
PPC_FUNC_IMPL(__imp__sub_83C22A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22A20"))) PPC_WEAK_FUNC(sub_83C22A20);
PPC_FUNC_IMPL(__imp__sub_83C22A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7008
	ctx.r3.s64 = ctx.r11.s64 + -7008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22A2C"))) PPC_WEAK_FUNC(sub_83C22A2C);
PPC_FUNC_IMPL(__imp__sub_83C22A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22A30"))) PPC_WEAK_FUNC(sub_83C22A30);
PPC_FUNC_IMPL(__imp__sub_83C22A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-7000
	ctx.r3.s64 = ctx.r11.s64 + -7000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22A3C"))) PPC_WEAK_FUNC(sub_83C22A3C);
PPC_FUNC_IMPL(__imp__sub_83C22A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22A40"))) PPC_WEAK_FUNC(sub_83C22A40);
PPC_FUNC_IMPL(__imp__sub_83C22A40) {
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
	// addi r3,r11,-16440
	ctx.r3.s64 = ctx.r11.s64 + -16440;
	// bl 0x83523120
	ctx.lr = 0x83C22A58;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-6992
	ctx.r3.s64 = ctx.r10.s64 + -6992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C22A64;
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

__attribute__((alias("__imp__sub_83C22A74"))) PPC_WEAK_FUNC(sub_83C22A74);
PPC_FUNC_IMPL(__imp__sub_83C22A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22A78"))) PPC_WEAK_FUNC(sub_83C22A78);
PPC_FUNC_IMPL(__imp__sub_83C22A78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16436
	ctx.r7.s64 = ctx.r8.s64 + -16436;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16436(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16436);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16436(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16436, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C22AA0"))) PPC_WEAK_FUNC(sub_83C22AA0);
PPC_FUNC_IMPL(__imp__sub_83C22AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,11116
	ctx.r6.s64 = ctx.r7.s64 + 11116;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11044(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11044);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16436(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16436);
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
	// std r9,11116(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11116, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C22AE8"))) PPC_WEAK_FUNC(sub_83C22AE8);
PPC_FUNC_IMPL(__imp__sub_83C22AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6976
	ctx.r3.s64 = ctx.r11.s64 + -6976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22AF4"))) PPC_WEAK_FUNC(sub_83C22AF4);
PPC_FUNC_IMPL(__imp__sub_83C22AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22AF8"))) PPC_WEAK_FUNC(sub_83C22AF8);
PPC_FUNC_IMPL(__imp__sub_83C22AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6968
	ctx.r3.s64 = ctx.r11.s64 + -6968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22B04"))) PPC_WEAK_FUNC(sub_83C22B04);
PPC_FUNC_IMPL(__imp__sub_83C22B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22B08"))) PPC_WEAK_FUNC(sub_83C22B08);
PPC_FUNC_IMPL(__imp__sub_83C22B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6960
	ctx.r3.s64 = ctx.r11.s64 + -6960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22B14"))) PPC_WEAK_FUNC(sub_83C22B14);
PPC_FUNC_IMPL(__imp__sub_83C22B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22B18"))) PPC_WEAK_FUNC(sub_83C22B18);
PPC_FUNC_IMPL(__imp__sub_83C22B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6952
	ctx.r3.s64 = ctx.r11.s64 + -6952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22B24"))) PPC_WEAK_FUNC(sub_83C22B24);
PPC_FUNC_IMPL(__imp__sub_83C22B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22B28"))) PPC_WEAK_FUNC(sub_83C22B28);
PPC_FUNC_IMPL(__imp__sub_83C22B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6944
	ctx.r3.s64 = ctx.r11.s64 + -6944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22B34"))) PPC_WEAK_FUNC(sub_83C22B34);
PPC_FUNC_IMPL(__imp__sub_83C22B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22B38"))) PPC_WEAK_FUNC(sub_83C22B38);
PPC_FUNC_IMPL(__imp__sub_83C22B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6936
	ctx.r3.s64 = ctx.r11.s64 + -6936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22B44"))) PPC_WEAK_FUNC(sub_83C22B44);
PPC_FUNC_IMPL(__imp__sub_83C22B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22B48"))) PPC_WEAK_FUNC(sub_83C22B48);
PPC_FUNC_IMPL(__imp__sub_83C22B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6928
	ctx.r3.s64 = ctx.r11.s64 + -6928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22B54"))) PPC_WEAK_FUNC(sub_83C22B54);
PPC_FUNC_IMPL(__imp__sub_83C22B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22B58"))) PPC_WEAK_FUNC(sub_83C22B58);
PPC_FUNC_IMPL(__imp__sub_83C22B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6920
	ctx.r3.s64 = ctx.r11.s64 + -6920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22B64"))) PPC_WEAK_FUNC(sub_83C22B64);
PPC_FUNC_IMPL(__imp__sub_83C22B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22B68"))) PPC_WEAK_FUNC(sub_83C22B68);
PPC_FUNC_IMPL(__imp__sub_83C22B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6912
	ctx.r3.s64 = ctx.r11.s64 + -6912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22B74"))) PPC_WEAK_FUNC(sub_83C22B74);
PPC_FUNC_IMPL(__imp__sub_83C22B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22B78"))) PPC_WEAK_FUNC(sub_83C22B78);
PPC_FUNC_IMPL(__imp__sub_83C22B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6904
	ctx.r3.s64 = ctx.r11.s64 + -6904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22B84"))) PPC_WEAK_FUNC(sub_83C22B84);
PPC_FUNC_IMPL(__imp__sub_83C22B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22B88"))) PPC_WEAK_FUNC(sub_83C22B88);
PPC_FUNC_IMPL(__imp__sub_83C22B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6896
	ctx.r3.s64 = ctx.r11.s64 + -6896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22B94"))) PPC_WEAK_FUNC(sub_83C22B94);
PPC_FUNC_IMPL(__imp__sub_83C22B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22B98"))) PPC_WEAK_FUNC(sub_83C22B98);
PPC_FUNC_IMPL(__imp__sub_83C22B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6888
	ctx.r3.s64 = ctx.r11.s64 + -6888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22BA4"))) PPC_WEAK_FUNC(sub_83C22BA4);
PPC_FUNC_IMPL(__imp__sub_83C22BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22BA8"))) PPC_WEAK_FUNC(sub_83C22BA8);
PPC_FUNC_IMPL(__imp__sub_83C22BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6880
	ctx.r3.s64 = ctx.r11.s64 + -6880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22BB4"))) PPC_WEAK_FUNC(sub_83C22BB4);
PPC_FUNC_IMPL(__imp__sub_83C22BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22BB8"))) PPC_WEAK_FUNC(sub_83C22BB8);
PPC_FUNC_IMPL(__imp__sub_83C22BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16408
	ctx.r7.s64 = ctx.r8.s64 + -16408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16408);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16408(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16408, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C22BE0"))) PPC_WEAK_FUNC(sub_83C22BE0);
PPC_FUNC_IMPL(__imp__sub_83C22BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,11244
	ctx.r6.s64 = ctx.r7.s64 + 11244;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11172(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11172);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16408(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16408);
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
	// std r9,11244(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11244, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C22C28"))) PPC_WEAK_FUNC(sub_83C22C28);
PPC_FUNC_IMPL(__imp__sub_83C22C28) {
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
	// addi r3,r11,-16424
	ctx.r3.s64 = ctx.r11.s64 + -16424;
	// bl 0x83523120
	ctx.lr = 0x83C22C40;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-6872
	ctx.r3.s64 = ctx.r10.s64 + -6872;
	// bl 0x831cdcc8
	ctx.lr = 0x83C22C4C;
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

__attribute__((alias("__imp__sub_83C22C5C"))) PPC_WEAK_FUNC(sub_83C22C5C);
PPC_FUNC_IMPL(__imp__sub_83C22C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22C60"))) PPC_WEAK_FUNC(sub_83C22C60);
PPC_FUNC_IMPL(__imp__sub_83C22C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6856
	ctx.r3.s64 = ctx.r11.s64 + -6856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22C6C"))) PPC_WEAK_FUNC(sub_83C22C6C);
PPC_FUNC_IMPL(__imp__sub_83C22C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22C70"))) PPC_WEAK_FUNC(sub_83C22C70);
PPC_FUNC_IMPL(__imp__sub_83C22C70) {
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
	// addi r3,r11,-16400
	ctx.r3.s64 = ctx.r11.s64 + -16400;
	// bl 0x8259af80
	ctx.lr = 0x83C22C88;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-6840
	ctx.r3.s64 = ctx.r10.s64 + -6840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C22C94;
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

__attribute__((alias("__imp__sub_83C22CA4"))) PPC_WEAK_FUNC(sub_83C22CA4);
PPC_FUNC_IMPL(__imp__sub_83C22CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22CA8"))) PPC_WEAK_FUNC(sub_83C22CA8);
PPC_FUNC_IMPL(__imp__sub_83C22CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16420
	ctx.r11.s64 = ctx.r8.s64 + -16420;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,11220(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11220);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6848
	ctx.r3.s64 = ctx.r6.s64 + -6848;
	// stw r10,-16420(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16420, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22CD8"))) PPC_WEAK_FUNC(sub_83C22CD8);
PPC_FUNC_IMPL(__imp__sub_83C22CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6832
	ctx.r3.s64 = ctx.r11.s64 + -6832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22CE4"))) PPC_WEAK_FUNC(sub_83C22CE4);
PPC_FUNC_IMPL(__imp__sub_83C22CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22CE8"))) PPC_WEAK_FUNC(sub_83C22CE8);
PPC_FUNC_IMPL(__imp__sub_83C22CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6824
	ctx.r3.s64 = ctx.r11.s64 + -6824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22CF4"))) PPC_WEAK_FUNC(sub_83C22CF4);
PPC_FUNC_IMPL(__imp__sub_83C22CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22CF8"))) PPC_WEAK_FUNC(sub_83C22CF8);
PPC_FUNC_IMPL(__imp__sub_83C22CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6816
	ctx.r3.s64 = ctx.r11.s64 + -6816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22D04"))) PPC_WEAK_FUNC(sub_83C22D04);
PPC_FUNC_IMPL(__imp__sub_83C22D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22D08"))) PPC_WEAK_FUNC(sub_83C22D08);
PPC_FUNC_IMPL(__imp__sub_83C22D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6808
	ctx.r3.s64 = ctx.r11.s64 + -6808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22D14"))) PPC_WEAK_FUNC(sub_83C22D14);
PPC_FUNC_IMPL(__imp__sub_83C22D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22D18"))) PPC_WEAK_FUNC(sub_83C22D18);
PPC_FUNC_IMPL(__imp__sub_83C22D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6800
	ctx.r3.s64 = ctx.r11.s64 + -6800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22D24"))) PPC_WEAK_FUNC(sub_83C22D24);
PPC_FUNC_IMPL(__imp__sub_83C22D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22D28"))) PPC_WEAK_FUNC(sub_83C22D28);
PPC_FUNC_IMPL(__imp__sub_83C22D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22D34"))) PPC_WEAK_FUNC(sub_83C22D34);
PPC_FUNC_IMPL(__imp__sub_83C22D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22D38"))) PPC_WEAK_FUNC(sub_83C22D38);
PPC_FUNC_IMPL(__imp__sub_83C22D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6784
	ctx.r3.s64 = ctx.r11.s64 + -6784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22D44"))) PPC_WEAK_FUNC(sub_83C22D44);
PPC_FUNC_IMPL(__imp__sub_83C22D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22D48"))) PPC_WEAK_FUNC(sub_83C22D48);
PPC_FUNC_IMPL(__imp__sub_83C22D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6776
	ctx.r3.s64 = ctx.r11.s64 + -6776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22D54"))) PPC_WEAK_FUNC(sub_83C22D54);
PPC_FUNC_IMPL(__imp__sub_83C22D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22D58"))) PPC_WEAK_FUNC(sub_83C22D58);
PPC_FUNC_IMPL(__imp__sub_83C22D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6768
	ctx.r3.s64 = ctx.r11.s64 + -6768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22D64"))) PPC_WEAK_FUNC(sub_83C22D64);
PPC_FUNC_IMPL(__imp__sub_83C22D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22D68"))) PPC_WEAK_FUNC(sub_83C22D68);
PPC_FUNC_IMPL(__imp__sub_83C22D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6760
	ctx.r3.s64 = ctx.r11.s64 + -6760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22D74"))) PPC_WEAK_FUNC(sub_83C22D74);
PPC_FUNC_IMPL(__imp__sub_83C22D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22D78"))) PPC_WEAK_FUNC(sub_83C22D78);
PPC_FUNC_IMPL(__imp__sub_83C22D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6752
	ctx.r3.s64 = ctx.r11.s64 + -6752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22D84"))) PPC_WEAK_FUNC(sub_83C22D84);
PPC_FUNC_IMPL(__imp__sub_83C22D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22D88"))) PPC_WEAK_FUNC(sub_83C22D88);
PPC_FUNC_IMPL(__imp__sub_83C22D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6744
	ctx.r3.s64 = ctx.r11.s64 + -6744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22D94"))) PPC_WEAK_FUNC(sub_83C22D94);
PPC_FUNC_IMPL(__imp__sub_83C22D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22D98"))) PPC_WEAK_FUNC(sub_83C22D98);
PPC_FUNC_IMPL(__imp__sub_83C22D98) {
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
	// addi r3,r11,-16056
	ctx.r3.s64 = ctx.r11.s64 + -16056;
	// bl 0x83523120
	ctx.lr = 0x83C22DB0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-6736
	ctx.r3.s64 = ctx.r10.s64 + -6736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C22DBC;
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

__attribute__((alias("__imp__sub_83C22DCC"))) PPC_WEAK_FUNC(sub_83C22DCC);
PPC_FUNC_IMPL(__imp__sub_83C22DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22DD0"))) PPC_WEAK_FUNC(sub_83C22DD0);
PPC_FUNC_IMPL(__imp__sub_83C22DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16052
	ctx.r7.s64 = ctx.r8.s64 + -16052;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16052(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16052);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16052(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16052, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C22DF8"))) PPC_WEAK_FUNC(sub_83C22DF8);
PPC_FUNC_IMPL(__imp__sub_83C22DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,11372
	ctx.r6.s64 = ctx.r7.s64 + 11372;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11300(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11300);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16052(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16052);
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
	// std r9,11372(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11372, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C22E40"))) PPC_WEAK_FUNC(sub_83C22E40);
PPC_FUNC_IMPL(__imp__sub_83C22E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6720
	ctx.r3.s64 = ctx.r11.s64 + -6720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22E4C"))) PPC_WEAK_FUNC(sub_83C22E4C);
PPC_FUNC_IMPL(__imp__sub_83C22E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22E50"))) PPC_WEAK_FUNC(sub_83C22E50);
PPC_FUNC_IMPL(__imp__sub_83C22E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6712
	ctx.r3.s64 = ctx.r11.s64 + -6712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22E5C"))) PPC_WEAK_FUNC(sub_83C22E5C);
PPC_FUNC_IMPL(__imp__sub_83C22E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22E60"))) PPC_WEAK_FUNC(sub_83C22E60);
PPC_FUNC_IMPL(__imp__sub_83C22E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6704
	ctx.r3.s64 = ctx.r11.s64 + -6704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22E6C"))) PPC_WEAK_FUNC(sub_83C22E6C);
PPC_FUNC_IMPL(__imp__sub_83C22E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22E70"))) PPC_WEAK_FUNC(sub_83C22E70);
PPC_FUNC_IMPL(__imp__sub_83C22E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6696
	ctx.r3.s64 = ctx.r11.s64 + -6696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22E7C"))) PPC_WEAK_FUNC(sub_83C22E7C);
PPC_FUNC_IMPL(__imp__sub_83C22E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22E80"))) PPC_WEAK_FUNC(sub_83C22E80);
PPC_FUNC_IMPL(__imp__sub_83C22E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6688
	ctx.r3.s64 = ctx.r11.s64 + -6688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22E8C"))) PPC_WEAK_FUNC(sub_83C22E8C);
PPC_FUNC_IMPL(__imp__sub_83C22E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22E90"))) PPC_WEAK_FUNC(sub_83C22E90);
PPC_FUNC_IMPL(__imp__sub_83C22E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6680
	ctx.r3.s64 = ctx.r11.s64 + -6680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22E9C"))) PPC_WEAK_FUNC(sub_83C22E9C);
PPC_FUNC_IMPL(__imp__sub_83C22E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22EA0"))) PPC_WEAK_FUNC(sub_83C22EA0);
PPC_FUNC_IMPL(__imp__sub_83C22EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6672
	ctx.r3.s64 = ctx.r11.s64 + -6672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22EAC"))) PPC_WEAK_FUNC(sub_83C22EAC);
PPC_FUNC_IMPL(__imp__sub_83C22EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22EB0"))) PPC_WEAK_FUNC(sub_83C22EB0);
PPC_FUNC_IMPL(__imp__sub_83C22EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6664
	ctx.r3.s64 = ctx.r11.s64 + -6664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22EBC"))) PPC_WEAK_FUNC(sub_83C22EBC);
PPC_FUNC_IMPL(__imp__sub_83C22EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22EC0"))) PPC_WEAK_FUNC(sub_83C22EC0);
PPC_FUNC_IMPL(__imp__sub_83C22EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6656
	ctx.r3.s64 = ctx.r11.s64 + -6656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22ECC"))) PPC_WEAK_FUNC(sub_83C22ECC);
PPC_FUNC_IMPL(__imp__sub_83C22ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22ED0"))) PPC_WEAK_FUNC(sub_83C22ED0);
PPC_FUNC_IMPL(__imp__sub_83C22ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22EDC"))) PPC_WEAK_FUNC(sub_83C22EDC);
PPC_FUNC_IMPL(__imp__sub_83C22EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22EE0"))) PPC_WEAK_FUNC(sub_83C22EE0);
PPC_FUNC_IMPL(__imp__sub_83C22EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6640
	ctx.r3.s64 = ctx.r11.s64 + -6640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22EEC"))) PPC_WEAK_FUNC(sub_83C22EEC);
PPC_FUNC_IMPL(__imp__sub_83C22EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22EF0"))) PPC_WEAK_FUNC(sub_83C22EF0);
PPC_FUNC_IMPL(__imp__sub_83C22EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6632
	ctx.r3.s64 = ctx.r11.s64 + -6632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22EFC"))) PPC_WEAK_FUNC(sub_83C22EFC);
PPC_FUNC_IMPL(__imp__sub_83C22EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22F00"))) PPC_WEAK_FUNC(sub_83C22F00);
PPC_FUNC_IMPL(__imp__sub_83C22F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6624
	ctx.r3.s64 = ctx.r11.s64 + -6624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22F0C"))) PPC_WEAK_FUNC(sub_83C22F0C);
PPC_FUNC_IMPL(__imp__sub_83C22F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22F10"))) PPC_WEAK_FUNC(sub_83C22F10);
PPC_FUNC_IMPL(__imp__sub_83C22F10) {
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
	// addi r3,r11,-16044
	ctx.r3.s64 = ctx.r11.s64 + -16044;
	// bl 0x83523120
	ctx.lr = 0x83C22F28;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-6616
	ctx.r3.s64 = ctx.r10.s64 + -6616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C22F34;
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

__attribute__((alias("__imp__sub_83C22F44"))) PPC_WEAK_FUNC(sub_83C22F44);
PPC_FUNC_IMPL(__imp__sub_83C22F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22F48"))) PPC_WEAK_FUNC(sub_83C22F48);
PPC_FUNC_IMPL(__imp__sub_83C22F48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16040
	ctx.r7.s64 = ctx.r8.s64 + -16040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16040(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16040);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16040(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16040, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C22F70"))) PPC_WEAK_FUNC(sub_83C22F70);
PPC_FUNC_IMPL(__imp__sub_83C22F70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,11500
	ctx.r6.s64 = ctx.r7.s64 + 11500;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11428(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11428);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16040(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16040);
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
	// std r9,11500(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11500, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C22FB8"))) PPC_WEAK_FUNC(sub_83C22FB8);
PPC_FUNC_IMPL(__imp__sub_83C22FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6600
	ctx.r3.s64 = ctx.r11.s64 + -6600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22FC4"))) PPC_WEAK_FUNC(sub_83C22FC4);
PPC_FUNC_IMPL(__imp__sub_83C22FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22FC8"))) PPC_WEAK_FUNC(sub_83C22FC8);
PPC_FUNC_IMPL(__imp__sub_83C22FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6592
	ctx.r3.s64 = ctx.r11.s64 + -6592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22FD4"))) PPC_WEAK_FUNC(sub_83C22FD4);
PPC_FUNC_IMPL(__imp__sub_83C22FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22FD8"))) PPC_WEAK_FUNC(sub_83C22FD8);
PPC_FUNC_IMPL(__imp__sub_83C22FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6584
	ctx.r3.s64 = ctx.r11.s64 + -6584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22FE4"))) PPC_WEAK_FUNC(sub_83C22FE4);
PPC_FUNC_IMPL(__imp__sub_83C22FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22FE8"))) PPC_WEAK_FUNC(sub_83C22FE8);
PPC_FUNC_IMPL(__imp__sub_83C22FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6576
	ctx.r3.s64 = ctx.r11.s64 + -6576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C22FF4"))) PPC_WEAK_FUNC(sub_83C22FF4);
PPC_FUNC_IMPL(__imp__sub_83C22FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C22FF8"))) PPC_WEAK_FUNC(sub_83C22FF8);
PPC_FUNC_IMPL(__imp__sub_83C22FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23004"))) PPC_WEAK_FUNC(sub_83C23004);
PPC_FUNC_IMPL(__imp__sub_83C23004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23008"))) PPC_WEAK_FUNC(sub_83C23008);
PPC_FUNC_IMPL(__imp__sub_83C23008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6560
	ctx.r3.s64 = ctx.r11.s64 + -6560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23014"))) PPC_WEAK_FUNC(sub_83C23014);
PPC_FUNC_IMPL(__imp__sub_83C23014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23018"))) PPC_WEAK_FUNC(sub_83C23018);
PPC_FUNC_IMPL(__imp__sub_83C23018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6552
	ctx.r3.s64 = ctx.r11.s64 + -6552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23024"))) PPC_WEAK_FUNC(sub_83C23024);
PPC_FUNC_IMPL(__imp__sub_83C23024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23028"))) PPC_WEAK_FUNC(sub_83C23028);
PPC_FUNC_IMPL(__imp__sub_83C23028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6544
	ctx.r3.s64 = ctx.r11.s64 + -6544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23034"))) PPC_WEAK_FUNC(sub_83C23034);
PPC_FUNC_IMPL(__imp__sub_83C23034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23038"))) PPC_WEAK_FUNC(sub_83C23038);
PPC_FUNC_IMPL(__imp__sub_83C23038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6536
	ctx.r3.s64 = ctx.r11.s64 + -6536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23044"))) PPC_WEAK_FUNC(sub_83C23044);
PPC_FUNC_IMPL(__imp__sub_83C23044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23048"))) PPC_WEAK_FUNC(sub_83C23048);
PPC_FUNC_IMPL(__imp__sub_83C23048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6528
	ctx.r3.s64 = ctx.r11.s64 + -6528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23054"))) PPC_WEAK_FUNC(sub_83C23054);
PPC_FUNC_IMPL(__imp__sub_83C23054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23058"))) PPC_WEAK_FUNC(sub_83C23058);
PPC_FUNC_IMPL(__imp__sub_83C23058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6520
	ctx.r3.s64 = ctx.r11.s64 + -6520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23064"))) PPC_WEAK_FUNC(sub_83C23064);
PPC_FUNC_IMPL(__imp__sub_83C23064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23068"))) PPC_WEAK_FUNC(sub_83C23068);
PPC_FUNC_IMPL(__imp__sub_83C23068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6512
	ctx.r3.s64 = ctx.r11.s64 + -6512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23074"))) PPC_WEAK_FUNC(sub_83C23074);
PPC_FUNC_IMPL(__imp__sub_83C23074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23078"))) PPC_WEAK_FUNC(sub_83C23078);
PPC_FUNC_IMPL(__imp__sub_83C23078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6504
	ctx.r3.s64 = ctx.r11.s64 + -6504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23084"))) PPC_WEAK_FUNC(sub_83C23084);
PPC_FUNC_IMPL(__imp__sub_83C23084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23088"))) PPC_WEAK_FUNC(sub_83C23088);
PPC_FUNC_IMPL(__imp__sub_83C23088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6496
	ctx.r3.s64 = ctx.r11.s64 + -6496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23094"))) PPC_WEAK_FUNC(sub_83C23094);
PPC_FUNC_IMPL(__imp__sub_83C23094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23098"))) PPC_WEAK_FUNC(sub_83C23098);
PPC_FUNC_IMPL(__imp__sub_83C23098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6488
	ctx.r3.s64 = ctx.r11.s64 + -6488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C230A4"))) PPC_WEAK_FUNC(sub_83C230A4);
PPC_FUNC_IMPL(__imp__sub_83C230A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C230A8"))) PPC_WEAK_FUNC(sub_83C230A8);
PPC_FUNC_IMPL(__imp__sub_83C230A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6480
	ctx.r3.s64 = ctx.r11.s64 + -6480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C230B4"))) PPC_WEAK_FUNC(sub_83C230B4);
PPC_FUNC_IMPL(__imp__sub_83C230B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C230B8"))) PPC_WEAK_FUNC(sub_83C230B8);
PPC_FUNC_IMPL(__imp__sub_83C230B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6472
	ctx.r3.s64 = ctx.r11.s64 + -6472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C230C4"))) PPC_WEAK_FUNC(sub_83C230C4);
PPC_FUNC_IMPL(__imp__sub_83C230C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C230C8"))) PPC_WEAK_FUNC(sub_83C230C8);
PPC_FUNC_IMPL(__imp__sub_83C230C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6464
	ctx.r3.s64 = ctx.r11.s64 + -6464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C230D4"))) PPC_WEAK_FUNC(sub_83C230D4);
PPC_FUNC_IMPL(__imp__sub_83C230D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C230D8"))) PPC_WEAK_FUNC(sub_83C230D8);
PPC_FUNC_IMPL(__imp__sub_83C230D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6456
	ctx.r3.s64 = ctx.r11.s64 + -6456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C230E4"))) PPC_WEAK_FUNC(sub_83C230E4);
PPC_FUNC_IMPL(__imp__sub_83C230E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C230E8"))) PPC_WEAK_FUNC(sub_83C230E8);
PPC_FUNC_IMPL(__imp__sub_83C230E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6448
	ctx.r3.s64 = ctx.r11.s64 + -6448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C230F4"))) PPC_WEAK_FUNC(sub_83C230F4);
PPC_FUNC_IMPL(__imp__sub_83C230F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C230F8"))) PPC_WEAK_FUNC(sub_83C230F8);
PPC_FUNC_IMPL(__imp__sub_83C230F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6440
	ctx.r3.s64 = ctx.r11.s64 + -6440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23104"))) PPC_WEAK_FUNC(sub_83C23104);
PPC_FUNC_IMPL(__imp__sub_83C23104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23108"))) PPC_WEAK_FUNC(sub_83C23108);
PPC_FUNC_IMPL(__imp__sub_83C23108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6432
	ctx.r3.s64 = ctx.r11.s64 + -6432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23114"))) PPC_WEAK_FUNC(sub_83C23114);
PPC_FUNC_IMPL(__imp__sub_83C23114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23118"))) PPC_WEAK_FUNC(sub_83C23118);
PPC_FUNC_IMPL(__imp__sub_83C23118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6424
	ctx.r3.s64 = ctx.r11.s64 + -6424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23124"))) PPC_WEAK_FUNC(sub_83C23124);
PPC_FUNC_IMPL(__imp__sub_83C23124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23128"))) PPC_WEAK_FUNC(sub_83C23128);
PPC_FUNC_IMPL(__imp__sub_83C23128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6416
	ctx.r3.s64 = ctx.r11.s64 + -6416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23134"))) PPC_WEAK_FUNC(sub_83C23134);
PPC_FUNC_IMPL(__imp__sub_83C23134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23138"))) PPC_WEAK_FUNC(sub_83C23138);
PPC_FUNC_IMPL(__imp__sub_83C23138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6408
	ctx.r3.s64 = ctx.r11.s64 + -6408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23144"))) PPC_WEAK_FUNC(sub_83C23144);
PPC_FUNC_IMPL(__imp__sub_83C23144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23148"))) PPC_WEAK_FUNC(sub_83C23148);
PPC_FUNC_IMPL(__imp__sub_83C23148) {
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
	// addi r3,r11,-16028
	ctx.r3.s64 = ctx.r11.s64 + -16028;
	// bl 0x83523120
	ctx.lr = 0x83C23160;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-6400
	ctx.r3.s64 = ctx.r10.s64 + -6400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2316C;
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

__attribute__((alias("__imp__sub_83C2317C"))) PPC_WEAK_FUNC(sub_83C2317C);
PPC_FUNC_IMPL(__imp__sub_83C2317C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23180"))) PPC_WEAK_FUNC(sub_83C23180);
PPC_FUNC_IMPL(__imp__sub_83C23180) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16024
	ctx.r7.s64 = ctx.r8.s64 + -16024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16024(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16024);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16024(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16024, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C231A8"))) PPC_WEAK_FUNC(sub_83C231A8);
PPC_FUNC_IMPL(__imp__sub_83C231A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6384
	ctx.r3.s64 = ctx.r11.s64 + -6384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C231B4"))) PPC_WEAK_FUNC(sub_83C231B4);
PPC_FUNC_IMPL(__imp__sub_83C231B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C231B8"))) PPC_WEAK_FUNC(sub_83C231B8);
PPC_FUNC_IMPL(__imp__sub_83C231B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6376
	ctx.r3.s64 = ctx.r11.s64 + -6376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C231C4"))) PPC_WEAK_FUNC(sub_83C231C4);
PPC_FUNC_IMPL(__imp__sub_83C231C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C231C8"))) PPC_WEAK_FUNC(sub_83C231C8);
PPC_FUNC_IMPL(__imp__sub_83C231C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6368
	ctx.r3.s64 = ctx.r11.s64 + -6368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C231D4"))) PPC_WEAK_FUNC(sub_83C231D4);
PPC_FUNC_IMPL(__imp__sub_83C231D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C231D8"))) PPC_WEAK_FUNC(sub_83C231D8);
PPC_FUNC_IMPL(__imp__sub_83C231D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6360
	ctx.r3.s64 = ctx.r11.s64 + -6360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C231E4"))) PPC_WEAK_FUNC(sub_83C231E4);
PPC_FUNC_IMPL(__imp__sub_83C231E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C231E8"))) PPC_WEAK_FUNC(sub_83C231E8);
PPC_FUNC_IMPL(__imp__sub_83C231E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6352
	ctx.r3.s64 = ctx.r11.s64 + -6352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C231F4"))) PPC_WEAK_FUNC(sub_83C231F4);
PPC_FUNC_IMPL(__imp__sub_83C231F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C231F8"))) PPC_WEAK_FUNC(sub_83C231F8);
PPC_FUNC_IMPL(__imp__sub_83C231F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6344
	ctx.r3.s64 = ctx.r11.s64 + -6344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23204"))) PPC_WEAK_FUNC(sub_83C23204);
PPC_FUNC_IMPL(__imp__sub_83C23204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23208"))) PPC_WEAK_FUNC(sub_83C23208);
PPC_FUNC_IMPL(__imp__sub_83C23208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6336
	ctx.r3.s64 = ctx.r11.s64 + -6336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23214"))) PPC_WEAK_FUNC(sub_83C23214);
PPC_FUNC_IMPL(__imp__sub_83C23214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23218"))) PPC_WEAK_FUNC(sub_83C23218);
PPC_FUNC_IMPL(__imp__sub_83C23218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6328
	ctx.r3.s64 = ctx.r11.s64 + -6328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23224"))) PPC_WEAK_FUNC(sub_83C23224);
PPC_FUNC_IMPL(__imp__sub_83C23224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23228"))) PPC_WEAK_FUNC(sub_83C23228);
PPC_FUNC_IMPL(__imp__sub_83C23228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6320
	ctx.r3.s64 = ctx.r11.s64 + -6320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23234"))) PPC_WEAK_FUNC(sub_83C23234);
PPC_FUNC_IMPL(__imp__sub_83C23234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23238"))) PPC_WEAK_FUNC(sub_83C23238);
PPC_FUNC_IMPL(__imp__sub_83C23238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6312
	ctx.r3.s64 = ctx.r11.s64 + -6312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23244"))) PPC_WEAK_FUNC(sub_83C23244);
PPC_FUNC_IMPL(__imp__sub_83C23244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23248"))) PPC_WEAK_FUNC(sub_83C23248);
PPC_FUNC_IMPL(__imp__sub_83C23248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6304
	ctx.r3.s64 = ctx.r11.s64 + -6304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23254"))) PPC_WEAK_FUNC(sub_83C23254);
PPC_FUNC_IMPL(__imp__sub_83C23254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23258"))) PPC_WEAK_FUNC(sub_83C23258);
PPC_FUNC_IMPL(__imp__sub_83C23258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6296
	ctx.r3.s64 = ctx.r11.s64 + -6296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23264"))) PPC_WEAK_FUNC(sub_83C23264);
PPC_FUNC_IMPL(__imp__sub_83C23264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23268"))) PPC_WEAK_FUNC(sub_83C23268);
PPC_FUNC_IMPL(__imp__sub_83C23268) {
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
	// addi r3,r11,-16016
	ctx.r3.s64 = ctx.r11.s64 + -16016;
	// bl 0x83523120
	ctx.lr = 0x83C23280;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-6288
	ctx.r3.s64 = ctx.r10.s64 + -6288;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2328C;
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

__attribute__((alias("__imp__sub_83C2329C"))) PPC_WEAK_FUNC(sub_83C2329C);
PPC_FUNC_IMPL(__imp__sub_83C2329C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C232A0"))) PPC_WEAK_FUNC(sub_83C232A0);
PPC_FUNC_IMPL(__imp__sub_83C232A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16000
	ctx.r7.s64 = ctx.r8.s64 + -16000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16000);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16000(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16000, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C232C8"))) PPC_WEAK_FUNC(sub_83C232C8);
PPC_FUNC_IMPL(__imp__sub_83C232C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,11836
	ctx.r6.s64 = ctx.r7.s64 + 11836;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11764(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11764);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16000(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16000);
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
	// std r9,11836(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11836, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C23310"))) PPC_WEAK_FUNC(sub_83C23310);
PPC_FUNC_IMPL(__imp__sub_83C23310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6272
	ctx.r3.s64 = ctx.r11.s64 + -6272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2331C"))) PPC_WEAK_FUNC(sub_83C2331C);
PPC_FUNC_IMPL(__imp__sub_83C2331C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23320"))) PPC_WEAK_FUNC(sub_83C23320);
PPC_FUNC_IMPL(__imp__sub_83C23320) {
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
	// addi r3,r11,-15992
	ctx.r3.s64 = ctx.r11.s64 + -15992;
	// bl 0x8259af80
	ctx.lr = 0x83C23338;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-6256
	ctx.r3.s64 = ctx.r10.s64 + -6256;
	// bl 0x831cdcc8
	ctx.lr = 0x83C23344;
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

__attribute__((alias("__imp__sub_83C23354"))) PPC_WEAK_FUNC(sub_83C23354);
PPC_FUNC_IMPL(__imp__sub_83C23354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C23358"))) PPC_WEAK_FUNC(sub_83C23358);
PPC_FUNC_IMPL(__imp__sub_83C23358) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16012
	ctx.r11.s64 = ctx.r8.s64 + -16012;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,11812(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11812);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6264
	ctx.r3.s64 = ctx.r6.s64 + -6264;
	// stw r10,-16012(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16012, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23388"))) PPC_WEAK_FUNC(sub_83C23388);
PPC_FUNC_IMPL(__imp__sub_83C23388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-6248
	ctx.r3.s64 = ctx.r11.s64 + -6248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C23394"))) PPC_WEAK_FUNC(sub_83C23394);
PPC_FUNC_IMPL(__imp__sub_83C23394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

