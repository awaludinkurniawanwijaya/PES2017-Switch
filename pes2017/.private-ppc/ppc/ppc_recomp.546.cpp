#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B7F0D8"))) PPC_WEAK_FUNC(sub_83B7F0D8);
PPC_FUNC_IMPL(__imp__sub_83B7F0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29280
	ctx.r3.s64 = ctx.r11.s64 + -29280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F0E4"))) PPC_WEAK_FUNC(sub_83B7F0E4);
PPC_FUNC_IMPL(__imp__sub_83B7F0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F0E8"))) PPC_WEAK_FUNC(sub_83B7F0E8);
PPC_FUNC_IMPL(__imp__sub_83B7F0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29272
	ctx.r3.s64 = ctx.r11.s64 + -29272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F0F4"))) PPC_WEAK_FUNC(sub_83B7F0F4);
PPC_FUNC_IMPL(__imp__sub_83B7F0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F0F8"))) PPC_WEAK_FUNC(sub_83B7F0F8);
PPC_FUNC_IMPL(__imp__sub_83B7F0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29264
	ctx.r3.s64 = ctx.r11.s64 + -29264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F104"))) PPC_WEAK_FUNC(sub_83B7F104);
PPC_FUNC_IMPL(__imp__sub_83B7F104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F108"))) PPC_WEAK_FUNC(sub_83B7F108);
PPC_FUNC_IMPL(__imp__sub_83B7F108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29256
	ctx.r3.s64 = ctx.r11.s64 + -29256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F114"))) PPC_WEAK_FUNC(sub_83B7F114);
PPC_FUNC_IMPL(__imp__sub_83B7F114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F118"))) PPC_WEAK_FUNC(sub_83B7F118);
PPC_FUNC_IMPL(__imp__sub_83B7F118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29248
	ctx.r3.s64 = ctx.r11.s64 + -29248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F124"))) PPC_WEAK_FUNC(sub_83B7F124);
PPC_FUNC_IMPL(__imp__sub_83B7F124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F128"))) PPC_WEAK_FUNC(sub_83B7F128);
PPC_FUNC_IMPL(__imp__sub_83B7F128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29240
	ctx.r3.s64 = ctx.r11.s64 + -29240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F134"))) PPC_WEAK_FUNC(sub_83B7F134);
PPC_FUNC_IMPL(__imp__sub_83B7F134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F138"))) PPC_WEAK_FUNC(sub_83B7F138);
PPC_FUNC_IMPL(__imp__sub_83B7F138) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13664
	ctx.r7.s64 = ctx.r8.s64 + -13664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13664(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13664);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13664(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13664, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7F160"))) PPC_WEAK_FUNC(sub_83B7F160);
PPC_FUNC_IMPL(__imp__sub_83B7F160) {
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
	// addi r3,r11,-13668
	ctx.r3.s64 = ctx.r11.s64 + -13668;
	// bl 0x83523120
	ctx.lr = 0x83B7F178;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-29232
	ctx.r3.s64 = ctx.r10.s64 + -29232;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7F184;
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

__attribute__((alias("__imp__sub_83B7F194"))) PPC_WEAK_FUNC(sub_83B7F194);
PPC_FUNC_IMPL(__imp__sub_83B7F194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F198"))) PPC_WEAK_FUNC(sub_83B7F198);
PPC_FUNC_IMPL(__imp__sub_83B7F198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29216
	ctx.r3.s64 = ctx.r11.s64 + -29216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F1A4"))) PPC_WEAK_FUNC(sub_83B7F1A4);
PPC_FUNC_IMPL(__imp__sub_83B7F1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F1A8"))) PPC_WEAK_FUNC(sub_83B7F1A8);
PPC_FUNC_IMPL(__imp__sub_83B7F1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F1B4"))) PPC_WEAK_FUNC(sub_83B7F1B4);
PPC_FUNC_IMPL(__imp__sub_83B7F1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F1B8"))) PPC_WEAK_FUNC(sub_83B7F1B8);
PPC_FUNC_IMPL(__imp__sub_83B7F1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29200
	ctx.r3.s64 = ctx.r11.s64 + -29200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F1C4"))) PPC_WEAK_FUNC(sub_83B7F1C4);
PPC_FUNC_IMPL(__imp__sub_83B7F1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F1C8"))) PPC_WEAK_FUNC(sub_83B7F1C8);
PPC_FUNC_IMPL(__imp__sub_83B7F1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29192
	ctx.r3.s64 = ctx.r11.s64 + -29192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F1D4"))) PPC_WEAK_FUNC(sub_83B7F1D4);
PPC_FUNC_IMPL(__imp__sub_83B7F1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F1D8"))) PPC_WEAK_FUNC(sub_83B7F1D8);
PPC_FUNC_IMPL(__imp__sub_83B7F1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29184
	ctx.r3.s64 = ctx.r11.s64 + -29184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F1E4"))) PPC_WEAK_FUNC(sub_83B7F1E4);
PPC_FUNC_IMPL(__imp__sub_83B7F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F1E8"))) PPC_WEAK_FUNC(sub_83B7F1E8);
PPC_FUNC_IMPL(__imp__sub_83B7F1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29176
	ctx.r3.s64 = ctx.r11.s64 + -29176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F1F4"))) PPC_WEAK_FUNC(sub_83B7F1F4);
PPC_FUNC_IMPL(__imp__sub_83B7F1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F1F8"))) PPC_WEAK_FUNC(sub_83B7F1F8);
PPC_FUNC_IMPL(__imp__sub_83B7F1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29168
	ctx.r3.s64 = ctx.r11.s64 + -29168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F204"))) PPC_WEAK_FUNC(sub_83B7F204);
PPC_FUNC_IMPL(__imp__sub_83B7F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F208"))) PPC_WEAK_FUNC(sub_83B7F208);
PPC_FUNC_IMPL(__imp__sub_83B7F208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29160
	ctx.r3.s64 = ctx.r11.s64 + -29160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F214"))) PPC_WEAK_FUNC(sub_83B7F214);
PPC_FUNC_IMPL(__imp__sub_83B7F214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F218"))) PPC_WEAK_FUNC(sub_83B7F218);
PPC_FUNC_IMPL(__imp__sub_83B7F218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29152
	ctx.r3.s64 = ctx.r11.s64 + -29152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F224"))) PPC_WEAK_FUNC(sub_83B7F224);
PPC_FUNC_IMPL(__imp__sub_83B7F224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F228"))) PPC_WEAK_FUNC(sub_83B7F228);
PPC_FUNC_IMPL(__imp__sub_83B7F228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29144
	ctx.r3.s64 = ctx.r11.s64 + -29144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F234"))) PPC_WEAK_FUNC(sub_83B7F234);
PPC_FUNC_IMPL(__imp__sub_83B7F234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F238"))) PPC_WEAK_FUNC(sub_83B7F238);
PPC_FUNC_IMPL(__imp__sub_83B7F238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29136
	ctx.r3.s64 = ctx.r11.s64 + -29136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F244"))) PPC_WEAK_FUNC(sub_83B7F244);
PPC_FUNC_IMPL(__imp__sub_83B7F244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F248"))) PPC_WEAK_FUNC(sub_83B7F248);
PPC_FUNC_IMPL(__imp__sub_83B7F248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29128
	ctx.r3.s64 = ctx.r11.s64 + -29128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F254"))) PPC_WEAK_FUNC(sub_83B7F254);
PPC_FUNC_IMPL(__imp__sub_83B7F254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F258"))) PPC_WEAK_FUNC(sub_83B7F258);
PPC_FUNC_IMPL(__imp__sub_83B7F258) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13652
	ctx.r7.s64 = ctx.r8.s64 + -13652;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13652(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13652);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13652(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13652, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7F280"))) PPC_WEAK_FUNC(sub_83B7F280);
PPC_FUNC_IMPL(__imp__sub_83B7F280) {
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
	// addi r3,r11,-13656
	ctx.r3.s64 = ctx.r11.s64 + -13656;
	// bl 0x83523120
	ctx.lr = 0x83B7F298;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-29120
	ctx.r3.s64 = ctx.r10.s64 + -29120;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7F2A4;
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

__attribute__((alias("__imp__sub_83B7F2B4"))) PPC_WEAK_FUNC(sub_83B7F2B4);
PPC_FUNC_IMPL(__imp__sub_83B7F2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F2B8"))) PPC_WEAK_FUNC(sub_83B7F2B8);
PPC_FUNC_IMPL(__imp__sub_83B7F2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F2C4"))) PPC_WEAK_FUNC(sub_83B7F2C4);
PPC_FUNC_IMPL(__imp__sub_83B7F2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F2C8"))) PPC_WEAK_FUNC(sub_83B7F2C8);
PPC_FUNC_IMPL(__imp__sub_83B7F2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29096
	ctx.r3.s64 = ctx.r11.s64 + -29096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F2D4"))) PPC_WEAK_FUNC(sub_83B7F2D4);
PPC_FUNC_IMPL(__imp__sub_83B7F2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F2D8"))) PPC_WEAK_FUNC(sub_83B7F2D8);
PPC_FUNC_IMPL(__imp__sub_83B7F2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29088
	ctx.r3.s64 = ctx.r11.s64 + -29088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F2E4"))) PPC_WEAK_FUNC(sub_83B7F2E4);
PPC_FUNC_IMPL(__imp__sub_83B7F2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F2E8"))) PPC_WEAK_FUNC(sub_83B7F2E8);
PPC_FUNC_IMPL(__imp__sub_83B7F2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29080
	ctx.r3.s64 = ctx.r11.s64 + -29080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F2F4"))) PPC_WEAK_FUNC(sub_83B7F2F4);
PPC_FUNC_IMPL(__imp__sub_83B7F2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F2F8"))) PPC_WEAK_FUNC(sub_83B7F2F8);
PPC_FUNC_IMPL(__imp__sub_83B7F2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29072
	ctx.r3.s64 = ctx.r11.s64 + -29072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F304"))) PPC_WEAK_FUNC(sub_83B7F304);
PPC_FUNC_IMPL(__imp__sub_83B7F304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F308"))) PPC_WEAK_FUNC(sub_83B7F308);
PPC_FUNC_IMPL(__imp__sub_83B7F308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29064
	ctx.r3.s64 = ctx.r11.s64 + -29064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F314"))) PPC_WEAK_FUNC(sub_83B7F314);
PPC_FUNC_IMPL(__imp__sub_83B7F314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F318"))) PPC_WEAK_FUNC(sub_83B7F318);
PPC_FUNC_IMPL(__imp__sub_83B7F318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29056
	ctx.r3.s64 = ctx.r11.s64 + -29056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F324"))) PPC_WEAK_FUNC(sub_83B7F324);
PPC_FUNC_IMPL(__imp__sub_83B7F324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F328"))) PPC_WEAK_FUNC(sub_83B7F328);
PPC_FUNC_IMPL(__imp__sub_83B7F328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29048
	ctx.r3.s64 = ctx.r11.s64 + -29048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F334"))) PPC_WEAK_FUNC(sub_83B7F334);
PPC_FUNC_IMPL(__imp__sub_83B7F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F338"))) PPC_WEAK_FUNC(sub_83B7F338);
PPC_FUNC_IMPL(__imp__sub_83B7F338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29040
	ctx.r3.s64 = ctx.r11.s64 + -29040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F344"))) PPC_WEAK_FUNC(sub_83B7F344);
PPC_FUNC_IMPL(__imp__sub_83B7F344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F348"))) PPC_WEAK_FUNC(sub_83B7F348);
PPC_FUNC_IMPL(__imp__sub_83B7F348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29032
	ctx.r3.s64 = ctx.r11.s64 + -29032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F354"))) PPC_WEAK_FUNC(sub_83B7F354);
PPC_FUNC_IMPL(__imp__sub_83B7F354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F358"))) PPC_WEAK_FUNC(sub_83B7F358);
PPC_FUNC_IMPL(__imp__sub_83B7F358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29024
	ctx.r3.s64 = ctx.r11.s64 + -29024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F364"))) PPC_WEAK_FUNC(sub_83B7F364);
PPC_FUNC_IMPL(__imp__sub_83B7F364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F368"))) PPC_WEAK_FUNC(sub_83B7F368);
PPC_FUNC_IMPL(__imp__sub_83B7F368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-29016
	ctx.r3.s64 = ctx.r11.s64 + -29016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F374"))) PPC_WEAK_FUNC(sub_83B7F374);
PPC_FUNC_IMPL(__imp__sub_83B7F374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F378"))) PPC_WEAK_FUNC(sub_83B7F378);
PPC_FUNC_IMPL(__imp__sub_83B7F378) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13640
	ctx.r7.s64 = ctx.r8.s64 + -13640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13640(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13640);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13640(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13640, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7F3A0"))) PPC_WEAK_FUNC(sub_83B7F3A0);
PPC_FUNC_IMPL(__imp__sub_83B7F3A0) {
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
	// addi r3,r11,-13644
	ctx.r3.s64 = ctx.r11.s64 + -13644;
	// bl 0x83523120
	ctx.lr = 0x83B7F3B8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-29008
	ctx.r3.s64 = ctx.r10.s64 + -29008;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7F3C4;
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

__attribute__((alias("__imp__sub_83B7F3D4"))) PPC_WEAK_FUNC(sub_83B7F3D4);
PPC_FUNC_IMPL(__imp__sub_83B7F3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F3D8"))) PPC_WEAK_FUNC(sub_83B7F3D8);
PPC_FUNC_IMPL(__imp__sub_83B7F3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28992
	ctx.r3.s64 = ctx.r11.s64 + -28992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F3E4"))) PPC_WEAK_FUNC(sub_83B7F3E4);
PPC_FUNC_IMPL(__imp__sub_83B7F3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F3E8"))) PPC_WEAK_FUNC(sub_83B7F3E8);
PPC_FUNC_IMPL(__imp__sub_83B7F3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28984
	ctx.r3.s64 = ctx.r11.s64 + -28984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F3F4"))) PPC_WEAK_FUNC(sub_83B7F3F4);
PPC_FUNC_IMPL(__imp__sub_83B7F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F3F8"))) PPC_WEAK_FUNC(sub_83B7F3F8);
PPC_FUNC_IMPL(__imp__sub_83B7F3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28976
	ctx.r3.s64 = ctx.r11.s64 + -28976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F404"))) PPC_WEAK_FUNC(sub_83B7F404);
PPC_FUNC_IMPL(__imp__sub_83B7F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F408"))) PPC_WEAK_FUNC(sub_83B7F408);
PPC_FUNC_IMPL(__imp__sub_83B7F408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28968
	ctx.r3.s64 = ctx.r11.s64 + -28968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F414"))) PPC_WEAK_FUNC(sub_83B7F414);
PPC_FUNC_IMPL(__imp__sub_83B7F414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F418"))) PPC_WEAK_FUNC(sub_83B7F418);
PPC_FUNC_IMPL(__imp__sub_83B7F418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28960
	ctx.r3.s64 = ctx.r11.s64 + -28960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F424"))) PPC_WEAK_FUNC(sub_83B7F424);
PPC_FUNC_IMPL(__imp__sub_83B7F424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F428"))) PPC_WEAK_FUNC(sub_83B7F428);
PPC_FUNC_IMPL(__imp__sub_83B7F428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28952
	ctx.r3.s64 = ctx.r11.s64 + -28952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F434"))) PPC_WEAK_FUNC(sub_83B7F434);
PPC_FUNC_IMPL(__imp__sub_83B7F434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F438"))) PPC_WEAK_FUNC(sub_83B7F438);
PPC_FUNC_IMPL(__imp__sub_83B7F438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28944
	ctx.r3.s64 = ctx.r11.s64 + -28944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F444"))) PPC_WEAK_FUNC(sub_83B7F444);
PPC_FUNC_IMPL(__imp__sub_83B7F444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F448"))) PPC_WEAK_FUNC(sub_83B7F448);
PPC_FUNC_IMPL(__imp__sub_83B7F448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28936
	ctx.r3.s64 = ctx.r11.s64 + -28936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F454"))) PPC_WEAK_FUNC(sub_83B7F454);
PPC_FUNC_IMPL(__imp__sub_83B7F454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F458"))) PPC_WEAK_FUNC(sub_83B7F458);
PPC_FUNC_IMPL(__imp__sub_83B7F458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28928
	ctx.r3.s64 = ctx.r11.s64 + -28928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F464"))) PPC_WEAK_FUNC(sub_83B7F464);
PPC_FUNC_IMPL(__imp__sub_83B7F464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F468"))) PPC_WEAK_FUNC(sub_83B7F468);
PPC_FUNC_IMPL(__imp__sub_83B7F468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28920
	ctx.r3.s64 = ctx.r11.s64 + -28920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F474"))) PPC_WEAK_FUNC(sub_83B7F474);
PPC_FUNC_IMPL(__imp__sub_83B7F474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F478"))) PPC_WEAK_FUNC(sub_83B7F478);
PPC_FUNC_IMPL(__imp__sub_83B7F478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28912
	ctx.r3.s64 = ctx.r11.s64 + -28912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F484"))) PPC_WEAK_FUNC(sub_83B7F484);
PPC_FUNC_IMPL(__imp__sub_83B7F484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F488"))) PPC_WEAK_FUNC(sub_83B7F488);
PPC_FUNC_IMPL(__imp__sub_83B7F488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28904
	ctx.r3.s64 = ctx.r11.s64 + -28904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F494"))) PPC_WEAK_FUNC(sub_83B7F494);
PPC_FUNC_IMPL(__imp__sub_83B7F494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F498"))) PPC_WEAK_FUNC(sub_83B7F498);
PPC_FUNC_IMPL(__imp__sub_83B7F498) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13628
	ctx.r7.s64 = ctx.r8.s64 + -13628;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13628(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13628);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13628(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13628, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7F4C0"))) PPC_WEAK_FUNC(sub_83B7F4C0);
PPC_FUNC_IMPL(__imp__sub_83B7F4C0) {
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
	// addi r3,r11,-13632
	ctx.r3.s64 = ctx.r11.s64 + -13632;
	// bl 0x83523120
	ctx.lr = 0x83B7F4D8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-28896
	ctx.r3.s64 = ctx.r10.s64 + -28896;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7F4E4;
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

__attribute__((alias("__imp__sub_83B7F4F4"))) PPC_WEAK_FUNC(sub_83B7F4F4);
PPC_FUNC_IMPL(__imp__sub_83B7F4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F4F8"))) PPC_WEAK_FUNC(sub_83B7F4F8);
PPC_FUNC_IMPL(__imp__sub_83B7F4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28880
	ctx.r3.s64 = ctx.r11.s64 + -28880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F504"))) PPC_WEAK_FUNC(sub_83B7F504);
PPC_FUNC_IMPL(__imp__sub_83B7F504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F508"))) PPC_WEAK_FUNC(sub_83B7F508);
PPC_FUNC_IMPL(__imp__sub_83B7F508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28872
	ctx.r3.s64 = ctx.r11.s64 + -28872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F514"))) PPC_WEAK_FUNC(sub_83B7F514);
PPC_FUNC_IMPL(__imp__sub_83B7F514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F518"))) PPC_WEAK_FUNC(sub_83B7F518);
PPC_FUNC_IMPL(__imp__sub_83B7F518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28864
	ctx.r3.s64 = ctx.r11.s64 + -28864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F524"))) PPC_WEAK_FUNC(sub_83B7F524);
PPC_FUNC_IMPL(__imp__sub_83B7F524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F528"))) PPC_WEAK_FUNC(sub_83B7F528);
PPC_FUNC_IMPL(__imp__sub_83B7F528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28856
	ctx.r3.s64 = ctx.r11.s64 + -28856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F534"))) PPC_WEAK_FUNC(sub_83B7F534);
PPC_FUNC_IMPL(__imp__sub_83B7F534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F538"))) PPC_WEAK_FUNC(sub_83B7F538);
PPC_FUNC_IMPL(__imp__sub_83B7F538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28848
	ctx.r3.s64 = ctx.r11.s64 + -28848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F544"))) PPC_WEAK_FUNC(sub_83B7F544);
PPC_FUNC_IMPL(__imp__sub_83B7F544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F548"))) PPC_WEAK_FUNC(sub_83B7F548);
PPC_FUNC_IMPL(__imp__sub_83B7F548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28840
	ctx.r3.s64 = ctx.r11.s64 + -28840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F554"))) PPC_WEAK_FUNC(sub_83B7F554);
PPC_FUNC_IMPL(__imp__sub_83B7F554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F558"))) PPC_WEAK_FUNC(sub_83B7F558);
PPC_FUNC_IMPL(__imp__sub_83B7F558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28832
	ctx.r3.s64 = ctx.r11.s64 + -28832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F564"))) PPC_WEAK_FUNC(sub_83B7F564);
PPC_FUNC_IMPL(__imp__sub_83B7F564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F568"))) PPC_WEAK_FUNC(sub_83B7F568);
PPC_FUNC_IMPL(__imp__sub_83B7F568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28824
	ctx.r3.s64 = ctx.r11.s64 + -28824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F574"))) PPC_WEAK_FUNC(sub_83B7F574);
PPC_FUNC_IMPL(__imp__sub_83B7F574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F578"))) PPC_WEAK_FUNC(sub_83B7F578);
PPC_FUNC_IMPL(__imp__sub_83B7F578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28816
	ctx.r3.s64 = ctx.r11.s64 + -28816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F584"))) PPC_WEAK_FUNC(sub_83B7F584);
PPC_FUNC_IMPL(__imp__sub_83B7F584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F588"))) PPC_WEAK_FUNC(sub_83B7F588);
PPC_FUNC_IMPL(__imp__sub_83B7F588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28808
	ctx.r3.s64 = ctx.r11.s64 + -28808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F594"))) PPC_WEAK_FUNC(sub_83B7F594);
PPC_FUNC_IMPL(__imp__sub_83B7F594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F598"))) PPC_WEAK_FUNC(sub_83B7F598);
PPC_FUNC_IMPL(__imp__sub_83B7F598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28800
	ctx.r3.s64 = ctx.r11.s64 + -28800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F5A4"))) PPC_WEAK_FUNC(sub_83B7F5A4);
PPC_FUNC_IMPL(__imp__sub_83B7F5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F5A8"))) PPC_WEAK_FUNC(sub_83B7F5A8);
PPC_FUNC_IMPL(__imp__sub_83B7F5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28792
	ctx.r3.s64 = ctx.r11.s64 + -28792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F5B4"))) PPC_WEAK_FUNC(sub_83B7F5B4);
PPC_FUNC_IMPL(__imp__sub_83B7F5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F5B8"))) PPC_WEAK_FUNC(sub_83B7F5B8);
PPC_FUNC_IMPL(__imp__sub_83B7F5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13616
	ctx.r7.s64 = ctx.r8.s64 + -13616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13616(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13616);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13616(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13616, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7F5E0"))) PPC_WEAK_FUNC(sub_83B7F5E0);
PPC_FUNC_IMPL(__imp__sub_83B7F5E0) {
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
	// addi r3,r11,-13620
	ctx.r3.s64 = ctx.r11.s64 + -13620;
	// bl 0x83523120
	ctx.lr = 0x83B7F5F8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-28784
	ctx.r3.s64 = ctx.r10.s64 + -28784;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7F604;
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

__attribute__((alias("__imp__sub_83B7F614"))) PPC_WEAK_FUNC(sub_83B7F614);
PPC_FUNC_IMPL(__imp__sub_83B7F614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F618"))) PPC_WEAK_FUNC(sub_83B7F618);
PPC_FUNC_IMPL(__imp__sub_83B7F618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28768
	ctx.r3.s64 = ctx.r11.s64 + -28768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F624"))) PPC_WEAK_FUNC(sub_83B7F624);
PPC_FUNC_IMPL(__imp__sub_83B7F624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F628"))) PPC_WEAK_FUNC(sub_83B7F628);
PPC_FUNC_IMPL(__imp__sub_83B7F628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28760
	ctx.r3.s64 = ctx.r11.s64 + -28760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F634"))) PPC_WEAK_FUNC(sub_83B7F634);
PPC_FUNC_IMPL(__imp__sub_83B7F634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F638"))) PPC_WEAK_FUNC(sub_83B7F638);
PPC_FUNC_IMPL(__imp__sub_83B7F638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28752
	ctx.r3.s64 = ctx.r11.s64 + -28752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F644"))) PPC_WEAK_FUNC(sub_83B7F644);
PPC_FUNC_IMPL(__imp__sub_83B7F644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F648"))) PPC_WEAK_FUNC(sub_83B7F648);
PPC_FUNC_IMPL(__imp__sub_83B7F648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28744
	ctx.r3.s64 = ctx.r11.s64 + -28744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F654"))) PPC_WEAK_FUNC(sub_83B7F654);
PPC_FUNC_IMPL(__imp__sub_83B7F654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F658"))) PPC_WEAK_FUNC(sub_83B7F658);
PPC_FUNC_IMPL(__imp__sub_83B7F658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F664"))) PPC_WEAK_FUNC(sub_83B7F664);
PPC_FUNC_IMPL(__imp__sub_83B7F664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F668"))) PPC_WEAK_FUNC(sub_83B7F668);
PPC_FUNC_IMPL(__imp__sub_83B7F668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28728
	ctx.r3.s64 = ctx.r11.s64 + -28728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F674"))) PPC_WEAK_FUNC(sub_83B7F674);
PPC_FUNC_IMPL(__imp__sub_83B7F674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F678"))) PPC_WEAK_FUNC(sub_83B7F678);
PPC_FUNC_IMPL(__imp__sub_83B7F678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28720
	ctx.r3.s64 = ctx.r11.s64 + -28720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F684"))) PPC_WEAK_FUNC(sub_83B7F684);
PPC_FUNC_IMPL(__imp__sub_83B7F684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F688"))) PPC_WEAK_FUNC(sub_83B7F688);
PPC_FUNC_IMPL(__imp__sub_83B7F688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28712
	ctx.r3.s64 = ctx.r11.s64 + -28712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F694"))) PPC_WEAK_FUNC(sub_83B7F694);
PPC_FUNC_IMPL(__imp__sub_83B7F694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F698"))) PPC_WEAK_FUNC(sub_83B7F698);
PPC_FUNC_IMPL(__imp__sub_83B7F698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28704
	ctx.r3.s64 = ctx.r11.s64 + -28704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F6A4"))) PPC_WEAK_FUNC(sub_83B7F6A4);
PPC_FUNC_IMPL(__imp__sub_83B7F6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F6A8"))) PPC_WEAK_FUNC(sub_83B7F6A8);
PPC_FUNC_IMPL(__imp__sub_83B7F6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28696
	ctx.r3.s64 = ctx.r11.s64 + -28696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F6B4"))) PPC_WEAK_FUNC(sub_83B7F6B4);
PPC_FUNC_IMPL(__imp__sub_83B7F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F6B8"))) PPC_WEAK_FUNC(sub_83B7F6B8);
PPC_FUNC_IMPL(__imp__sub_83B7F6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28688
	ctx.r3.s64 = ctx.r11.s64 + -28688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F6C4"))) PPC_WEAK_FUNC(sub_83B7F6C4);
PPC_FUNC_IMPL(__imp__sub_83B7F6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F6C8"))) PPC_WEAK_FUNC(sub_83B7F6C8);
PPC_FUNC_IMPL(__imp__sub_83B7F6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28680
	ctx.r3.s64 = ctx.r11.s64 + -28680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F6D4"))) PPC_WEAK_FUNC(sub_83B7F6D4);
PPC_FUNC_IMPL(__imp__sub_83B7F6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F6D8"))) PPC_WEAK_FUNC(sub_83B7F6D8);
PPC_FUNC_IMPL(__imp__sub_83B7F6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13604
	ctx.r7.s64 = ctx.r8.s64 + -13604;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13604(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13604);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13604(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13604, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7F700"))) PPC_WEAK_FUNC(sub_83B7F700);
PPC_FUNC_IMPL(__imp__sub_83B7F700) {
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
	// addi r3,r11,-13608
	ctx.r3.s64 = ctx.r11.s64 + -13608;
	// bl 0x83523120
	ctx.lr = 0x83B7F718;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-28672
	ctx.r3.s64 = ctx.r10.s64 + -28672;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7F724;
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

__attribute__((alias("__imp__sub_83B7F734"))) PPC_WEAK_FUNC(sub_83B7F734);
PPC_FUNC_IMPL(__imp__sub_83B7F734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F738"))) PPC_WEAK_FUNC(sub_83B7F738);
PPC_FUNC_IMPL(__imp__sub_83B7F738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28656
	ctx.r3.s64 = ctx.r11.s64 + -28656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F744"))) PPC_WEAK_FUNC(sub_83B7F744);
PPC_FUNC_IMPL(__imp__sub_83B7F744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F748"))) PPC_WEAK_FUNC(sub_83B7F748);
PPC_FUNC_IMPL(__imp__sub_83B7F748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28648
	ctx.r3.s64 = ctx.r11.s64 + -28648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F754"))) PPC_WEAK_FUNC(sub_83B7F754);
PPC_FUNC_IMPL(__imp__sub_83B7F754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F758"))) PPC_WEAK_FUNC(sub_83B7F758);
PPC_FUNC_IMPL(__imp__sub_83B7F758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28640
	ctx.r3.s64 = ctx.r11.s64 + -28640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F764"))) PPC_WEAK_FUNC(sub_83B7F764);
PPC_FUNC_IMPL(__imp__sub_83B7F764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F768"))) PPC_WEAK_FUNC(sub_83B7F768);
PPC_FUNC_IMPL(__imp__sub_83B7F768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28632
	ctx.r3.s64 = ctx.r11.s64 + -28632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F774"))) PPC_WEAK_FUNC(sub_83B7F774);
PPC_FUNC_IMPL(__imp__sub_83B7F774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F778"))) PPC_WEAK_FUNC(sub_83B7F778);
PPC_FUNC_IMPL(__imp__sub_83B7F778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28624
	ctx.r3.s64 = ctx.r11.s64 + -28624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F784"))) PPC_WEAK_FUNC(sub_83B7F784);
PPC_FUNC_IMPL(__imp__sub_83B7F784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F788"))) PPC_WEAK_FUNC(sub_83B7F788);
PPC_FUNC_IMPL(__imp__sub_83B7F788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28616
	ctx.r3.s64 = ctx.r11.s64 + -28616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F794"))) PPC_WEAK_FUNC(sub_83B7F794);
PPC_FUNC_IMPL(__imp__sub_83B7F794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F798"))) PPC_WEAK_FUNC(sub_83B7F798);
PPC_FUNC_IMPL(__imp__sub_83B7F798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28608
	ctx.r3.s64 = ctx.r11.s64 + -28608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F7A4"))) PPC_WEAK_FUNC(sub_83B7F7A4);
PPC_FUNC_IMPL(__imp__sub_83B7F7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F7A8"))) PPC_WEAK_FUNC(sub_83B7F7A8);
PPC_FUNC_IMPL(__imp__sub_83B7F7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28600
	ctx.r3.s64 = ctx.r11.s64 + -28600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F7B4"))) PPC_WEAK_FUNC(sub_83B7F7B4);
PPC_FUNC_IMPL(__imp__sub_83B7F7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F7B8"))) PPC_WEAK_FUNC(sub_83B7F7B8);
PPC_FUNC_IMPL(__imp__sub_83B7F7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28592
	ctx.r3.s64 = ctx.r11.s64 + -28592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F7C4"))) PPC_WEAK_FUNC(sub_83B7F7C4);
PPC_FUNC_IMPL(__imp__sub_83B7F7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F7C8"))) PPC_WEAK_FUNC(sub_83B7F7C8);
PPC_FUNC_IMPL(__imp__sub_83B7F7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28584
	ctx.r3.s64 = ctx.r11.s64 + -28584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F7D4"))) PPC_WEAK_FUNC(sub_83B7F7D4);
PPC_FUNC_IMPL(__imp__sub_83B7F7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F7D8"))) PPC_WEAK_FUNC(sub_83B7F7D8);
PPC_FUNC_IMPL(__imp__sub_83B7F7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28576
	ctx.r3.s64 = ctx.r11.s64 + -28576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F7E4"))) PPC_WEAK_FUNC(sub_83B7F7E4);
PPC_FUNC_IMPL(__imp__sub_83B7F7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F7E8"))) PPC_WEAK_FUNC(sub_83B7F7E8);
PPC_FUNC_IMPL(__imp__sub_83B7F7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28568
	ctx.r3.s64 = ctx.r11.s64 + -28568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F7F4"))) PPC_WEAK_FUNC(sub_83B7F7F4);
PPC_FUNC_IMPL(__imp__sub_83B7F7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F7F8"))) PPC_WEAK_FUNC(sub_83B7F7F8);
PPC_FUNC_IMPL(__imp__sub_83B7F7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13592
	ctx.r7.s64 = ctx.r8.s64 + -13592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13592);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13592(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13592, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7F820"))) PPC_WEAK_FUNC(sub_83B7F820);
PPC_FUNC_IMPL(__imp__sub_83B7F820) {
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
	// addi r3,r11,-13596
	ctx.r3.s64 = ctx.r11.s64 + -13596;
	// bl 0x83523120
	ctx.lr = 0x83B7F838;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-28560
	ctx.r3.s64 = ctx.r10.s64 + -28560;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7F844;
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

__attribute__((alias("__imp__sub_83B7F854"))) PPC_WEAK_FUNC(sub_83B7F854);
PPC_FUNC_IMPL(__imp__sub_83B7F854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F858"))) PPC_WEAK_FUNC(sub_83B7F858);
PPC_FUNC_IMPL(__imp__sub_83B7F858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28544
	ctx.r3.s64 = ctx.r11.s64 + -28544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F864"))) PPC_WEAK_FUNC(sub_83B7F864);
PPC_FUNC_IMPL(__imp__sub_83B7F864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F868"))) PPC_WEAK_FUNC(sub_83B7F868);
PPC_FUNC_IMPL(__imp__sub_83B7F868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28536
	ctx.r3.s64 = ctx.r11.s64 + -28536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F874"))) PPC_WEAK_FUNC(sub_83B7F874);
PPC_FUNC_IMPL(__imp__sub_83B7F874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F878"))) PPC_WEAK_FUNC(sub_83B7F878);
PPC_FUNC_IMPL(__imp__sub_83B7F878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28528
	ctx.r3.s64 = ctx.r11.s64 + -28528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F884"))) PPC_WEAK_FUNC(sub_83B7F884);
PPC_FUNC_IMPL(__imp__sub_83B7F884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F888"))) PPC_WEAK_FUNC(sub_83B7F888);
PPC_FUNC_IMPL(__imp__sub_83B7F888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28520
	ctx.r3.s64 = ctx.r11.s64 + -28520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F894"))) PPC_WEAK_FUNC(sub_83B7F894);
PPC_FUNC_IMPL(__imp__sub_83B7F894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F898"))) PPC_WEAK_FUNC(sub_83B7F898);
PPC_FUNC_IMPL(__imp__sub_83B7F898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28512
	ctx.r3.s64 = ctx.r11.s64 + -28512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F8A4"))) PPC_WEAK_FUNC(sub_83B7F8A4);
PPC_FUNC_IMPL(__imp__sub_83B7F8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F8A8"))) PPC_WEAK_FUNC(sub_83B7F8A8);
PPC_FUNC_IMPL(__imp__sub_83B7F8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28504
	ctx.r3.s64 = ctx.r11.s64 + -28504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F8B4"))) PPC_WEAK_FUNC(sub_83B7F8B4);
PPC_FUNC_IMPL(__imp__sub_83B7F8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F8B8"))) PPC_WEAK_FUNC(sub_83B7F8B8);
PPC_FUNC_IMPL(__imp__sub_83B7F8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28496
	ctx.r3.s64 = ctx.r11.s64 + -28496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F8C4"))) PPC_WEAK_FUNC(sub_83B7F8C4);
PPC_FUNC_IMPL(__imp__sub_83B7F8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F8C8"))) PPC_WEAK_FUNC(sub_83B7F8C8);
PPC_FUNC_IMPL(__imp__sub_83B7F8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28488
	ctx.r3.s64 = ctx.r11.s64 + -28488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F8D4"))) PPC_WEAK_FUNC(sub_83B7F8D4);
PPC_FUNC_IMPL(__imp__sub_83B7F8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F8D8"))) PPC_WEAK_FUNC(sub_83B7F8D8);
PPC_FUNC_IMPL(__imp__sub_83B7F8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28480
	ctx.r3.s64 = ctx.r11.s64 + -28480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F8E4"))) PPC_WEAK_FUNC(sub_83B7F8E4);
PPC_FUNC_IMPL(__imp__sub_83B7F8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F8E8"))) PPC_WEAK_FUNC(sub_83B7F8E8);
PPC_FUNC_IMPL(__imp__sub_83B7F8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28472
	ctx.r3.s64 = ctx.r11.s64 + -28472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F8F4"))) PPC_WEAK_FUNC(sub_83B7F8F4);
PPC_FUNC_IMPL(__imp__sub_83B7F8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F8F8"))) PPC_WEAK_FUNC(sub_83B7F8F8);
PPC_FUNC_IMPL(__imp__sub_83B7F8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28464
	ctx.r3.s64 = ctx.r11.s64 + -28464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F904"))) PPC_WEAK_FUNC(sub_83B7F904);
PPC_FUNC_IMPL(__imp__sub_83B7F904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F908"))) PPC_WEAK_FUNC(sub_83B7F908);
PPC_FUNC_IMPL(__imp__sub_83B7F908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28456
	ctx.r3.s64 = ctx.r11.s64 + -28456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F914"))) PPC_WEAK_FUNC(sub_83B7F914);
PPC_FUNC_IMPL(__imp__sub_83B7F914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F918"))) PPC_WEAK_FUNC(sub_83B7F918);
PPC_FUNC_IMPL(__imp__sub_83B7F918) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13580
	ctx.r7.s64 = ctx.r8.s64 + -13580;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13580(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13580);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13580(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13580, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7F940"))) PPC_WEAK_FUNC(sub_83B7F940);
PPC_FUNC_IMPL(__imp__sub_83B7F940) {
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
	// addi r3,r11,-13584
	ctx.r3.s64 = ctx.r11.s64 + -13584;
	// bl 0x83523120
	ctx.lr = 0x83B7F958;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-28448
	ctx.r3.s64 = ctx.r10.s64 + -28448;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7F964;
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

__attribute__((alias("__imp__sub_83B7F974"))) PPC_WEAK_FUNC(sub_83B7F974);
PPC_FUNC_IMPL(__imp__sub_83B7F974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F978"))) PPC_WEAK_FUNC(sub_83B7F978);
PPC_FUNC_IMPL(__imp__sub_83B7F978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28432
	ctx.r3.s64 = ctx.r11.s64 + -28432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F984"))) PPC_WEAK_FUNC(sub_83B7F984);
PPC_FUNC_IMPL(__imp__sub_83B7F984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F988"))) PPC_WEAK_FUNC(sub_83B7F988);
PPC_FUNC_IMPL(__imp__sub_83B7F988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28424
	ctx.r3.s64 = ctx.r11.s64 + -28424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F994"))) PPC_WEAK_FUNC(sub_83B7F994);
PPC_FUNC_IMPL(__imp__sub_83B7F994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F998"))) PPC_WEAK_FUNC(sub_83B7F998);
PPC_FUNC_IMPL(__imp__sub_83B7F998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28416
	ctx.r3.s64 = ctx.r11.s64 + -28416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F9A4"))) PPC_WEAK_FUNC(sub_83B7F9A4);
PPC_FUNC_IMPL(__imp__sub_83B7F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F9A8"))) PPC_WEAK_FUNC(sub_83B7F9A8);
PPC_FUNC_IMPL(__imp__sub_83B7F9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28408
	ctx.r3.s64 = ctx.r11.s64 + -28408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F9B4"))) PPC_WEAK_FUNC(sub_83B7F9B4);
PPC_FUNC_IMPL(__imp__sub_83B7F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F9B8"))) PPC_WEAK_FUNC(sub_83B7F9B8);
PPC_FUNC_IMPL(__imp__sub_83B7F9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28400
	ctx.r3.s64 = ctx.r11.s64 + -28400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F9C4"))) PPC_WEAK_FUNC(sub_83B7F9C4);
PPC_FUNC_IMPL(__imp__sub_83B7F9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F9C8"))) PPC_WEAK_FUNC(sub_83B7F9C8);
PPC_FUNC_IMPL(__imp__sub_83B7F9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28392
	ctx.r3.s64 = ctx.r11.s64 + -28392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F9D4"))) PPC_WEAK_FUNC(sub_83B7F9D4);
PPC_FUNC_IMPL(__imp__sub_83B7F9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F9D8"))) PPC_WEAK_FUNC(sub_83B7F9D8);
PPC_FUNC_IMPL(__imp__sub_83B7F9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28384
	ctx.r3.s64 = ctx.r11.s64 + -28384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F9E4"))) PPC_WEAK_FUNC(sub_83B7F9E4);
PPC_FUNC_IMPL(__imp__sub_83B7F9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F9E8"))) PPC_WEAK_FUNC(sub_83B7F9E8);
PPC_FUNC_IMPL(__imp__sub_83B7F9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28376
	ctx.r3.s64 = ctx.r11.s64 + -28376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7F9F4"))) PPC_WEAK_FUNC(sub_83B7F9F4);
PPC_FUNC_IMPL(__imp__sub_83B7F9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7F9F8"))) PPC_WEAK_FUNC(sub_83B7F9F8);
PPC_FUNC_IMPL(__imp__sub_83B7F9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28368
	ctx.r3.s64 = ctx.r11.s64 + -28368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FA04"))) PPC_WEAK_FUNC(sub_83B7FA04);
PPC_FUNC_IMPL(__imp__sub_83B7FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FA08"))) PPC_WEAK_FUNC(sub_83B7FA08);
PPC_FUNC_IMPL(__imp__sub_83B7FA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28360
	ctx.r3.s64 = ctx.r11.s64 + -28360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FA14"))) PPC_WEAK_FUNC(sub_83B7FA14);
PPC_FUNC_IMPL(__imp__sub_83B7FA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FA18"))) PPC_WEAK_FUNC(sub_83B7FA18);
PPC_FUNC_IMPL(__imp__sub_83B7FA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28352
	ctx.r3.s64 = ctx.r11.s64 + -28352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FA24"))) PPC_WEAK_FUNC(sub_83B7FA24);
PPC_FUNC_IMPL(__imp__sub_83B7FA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FA28"))) PPC_WEAK_FUNC(sub_83B7FA28);
PPC_FUNC_IMPL(__imp__sub_83B7FA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28344
	ctx.r3.s64 = ctx.r11.s64 + -28344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FA34"))) PPC_WEAK_FUNC(sub_83B7FA34);
PPC_FUNC_IMPL(__imp__sub_83B7FA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FA38"))) PPC_WEAK_FUNC(sub_83B7FA38);
PPC_FUNC_IMPL(__imp__sub_83B7FA38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13568
	ctx.r7.s64 = ctx.r8.s64 + -13568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13568(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7FA60"))) PPC_WEAK_FUNC(sub_83B7FA60);
PPC_FUNC_IMPL(__imp__sub_83B7FA60) {
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
	// addi r3,r11,-13572
	ctx.r3.s64 = ctx.r11.s64 + -13572;
	// bl 0x83523120
	ctx.lr = 0x83B7FA78;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-28336
	ctx.r3.s64 = ctx.r10.s64 + -28336;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7FA84;
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

__attribute__((alias("__imp__sub_83B7FA94"))) PPC_WEAK_FUNC(sub_83B7FA94);
PPC_FUNC_IMPL(__imp__sub_83B7FA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FA98"))) PPC_WEAK_FUNC(sub_83B7FA98);
PPC_FUNC_IMPL(__imp__sub_83B7FA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28320
	ctx.r3.s64 = ctx.r11.s64 + -28320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FAA4"))) PPC_WEAK_FUNC(sub_83B7FAA4);
PPC_FUNC_IMPL(__imp__sub_83B7FAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FAA8"))) PPC_WEAK_FUNC(sub_83B7FAA8);
PPC_FUNC_IMPL(__imp__sub_83B7FAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28312
	ctx.r3.s64 = ctx.r11.s64 + -28312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FAB4"))) PPC_WEAK_FUNC(sub_83B7FAB4);
PPC_FUNC_IMPL(__imp__sub_83B7FAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FAB8"))) PPC_WEAK_FUNC(sub_83B7FAB8);
PPC_FUNC_IMPL(__imp__sub_83B7FAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28304
	ctx.r3.s64 = ctx.r11.s64 + -28304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FAC4"))) PPC_WEAK_FUNC(sub_83B7FAC4);
PPC_FUNC_IMPL(__imp__sub_83B7FAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FAC8"))) PPC_WEAK_FUNC(sub_83B7FAC8);
PPC_FUNC_IMPL(__imp__sub_83B7FAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28296
	ctx.r3.s64 = ctx.r11.s64 + -28296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FAD4"))) PPC_WEAK_FUNC(sub_83B7FAD4);
PPC_FUNC_IMPL(__imp__sub_83B7FAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FAD8"))) PPC_WEAK_FUNC(sub_83B7FAD8);
PPC_FUNC_IMPL(__imp__sub_83B7FAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28288
	ctx.r3.s64 = ctx.r11.s64 + -28288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FAE4"))) PPC_WEAK_FUNC(sub_83B7FAE4);
PPC_FUNC_IMPL(__imp__sub_83B7FAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FAE8"))) PPC_WEAK_FUNC(sub_83B7FAE8);
PPC_FUNC_IMPL(__imp__sub_83B7FAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28280
	ctx.r3.s64 = ctx.r11.s64 + -28280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FAF4"))) PPC_WEAK_FUNC(sub_83B7FAF4);
PPC_FUNC_IMPL(__imp__sub_83B7FAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FAF8"))) PPC_WEAK_FUNC(sub_83B7FAF8);
PPC_FUNC_IMPL(__imp__sub_83B7FAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28272
	ctx.r3.s64 = ctx.r11.s64 + -28272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FB04"))) PPC_WEAK_FUNC(sub_83B7FB04);
PPC_FUNC_IMPL(__imp__sub_83B7FB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FB08"))) PPC_WEAK_FUNC(sub_83B7FB08);
PPC_FUNC_IMPL(__imp__sub_83B7FB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28264
	ctx.r3.s64 = ctx.r11.s64 + -28264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FB14"))) PPC_WEAK_FUNC(sub_83B7FB14);
PPC_FUNC_IMPL(__imp__sub_83B7FB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FB18"))) PPC_WEAK_FUNC(sub_83B7FB18);
PPC_FUNC_IMPL(__imp__sub_83B7FB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28256
	ctx.r3.s64 = ctx.r11.s64 + -28256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FB24"))) PPC_WEAK_FUNC(sub_83B7FB24);
PPC_FUNC_IMPL(__imp__sub_83B7FB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FB28"))) PPC_WEAK_FUNC(sub_83B7FB28);
PPC_FUNC_IMPL(__imp__sub_83B7FB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28248
	ctx.r3.s64 = ctx.r11.s64 + -28248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FB34"))) PPC_WEAK_FUNC(sub_83B7FB34);
PPC_FUNC_IMPL(__imp__sub_83B7FB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FB38"))) PPC_WEAK_FUNC(sub_83B7FB38);
PPC_FUNC_IMPL(__imp__sub_83B7FB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28240
	ctx.r3.s64 = ctx.r11.s64 + -28240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FB44"))) PPC_WEAK_FUNC(sub_83B7FB44);
PPC_FUNC_IMPL(__imp__sub_83B7FB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FB48"))) PPC_WEAK_FUNC(sub_83B7FB48);
PPC_FUNC_IMPL(__imp__sub_83B7FB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FB54"))) PPC_WEAK_FUNC(sub_83B7FB54);
PPC_FUNC_IMPL(__imp__sub_83B7FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FB58"))) PPC_WEAK_FUNC(sub_83B7FB58);
PPC_FUNC_IMPL(__imp__sub_83B7FB58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13556
	ctx.r7.s64 = ctx.r8.s64 + -13556;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13556(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13556);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13556(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13556, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

