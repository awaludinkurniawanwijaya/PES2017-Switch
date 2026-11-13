#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B7B0D4"))) PPC_WEAK_FUNC(sub_83B7B0D4);
PPC_FUNC_IMPL(__imp__sub_83B7B0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B0D8"))) PPC_WEAK_FUNC(sub_83B7B0D8);
PPC_FUNC_IMPL(__imp__sub_83B7B0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,29888
	ctx.r3.s64 = ctx.r11.s64 + 29888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B0E4"))) PPC_WEAK_FUNC(sub_83B7B0E4);
PPC_FUNC_IMPL(__imp__sub_83B7B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B0E8"))) PPC_WEAK_FUNC(sub_83B7B0E8);
PPC_FUNC_IMPL(__imp__sub_83B7B0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,29896
	ctx.r3.s64 = ctx.r11.s64 + 29896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B0F4"))) PPC_WEAK_FUNC(sub_83B7B0F4);
PPC_FUNC_IMPL(__imp__sub_83B7B0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B0F8"))) PPC_WEAK_FUNC(sub_83B7B0F8);
PPC_FUNC_IMPL(__imp__sub_83B7B0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,29904
	ctx.r3.s64 = ctx.r11.s64 + 29904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B104"))) PPC_WEAK_FUNC(sub_83B7B104);
PPC_FUNC_IMPL(__imp__sub_83B7B104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B108"))) PPC_WEAK_FUNC(sub_83B7B108);
PPC_FUNC_IMPL(__imp__sub_83B7B108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,29912
	ctx.r3.s64 = ctx.r11.s64 + 29912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B114"))) PPC_WEAK_FUNC(sub_83B7B114);
PPC_FUNC_IMPL(__imp__sub_83B7B114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B118"))) PPC_WEAK_FUNC(sub_83B7B118);
PPC_FUNC_IMPL(__imp__sub_83B7B118) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14408
	ctx.r7.s64 = ctx.r8.s64 + -14408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14408);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14408(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14408, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7B140"))) PPC_WEAK_FUNC(sub_83B7B140);
PPC_FUNC_IMPL(__imp__sub_83B7B140) {
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
	// addi r3,r11,-14412
	ctx.r3.s64 = ctx.r11.s64 + -14412;
	// bl 0x83523120
	ctx.lr = 0x83B7B158;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,29920
	ctx.r3.s64 = ctx.r10.s64 + 29920;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7B164;
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

__attribute__((alias("__imp__sub_83B7B174"))) PPC_WEAK_FUNC(sub_83B7B174);
PPC_FUNC_IMPL(__imp__sub_83B7B174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B178"))) PPC_WEAK_FUNC(sub_83B7B178);
PPC_FUNC_IMPL(__imp__sub_83B7B178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,29936
	ctx.r3.s64 = ctx.r11.s64 + 29936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B184"))) PPC_WEAK_FUNC(sub_83B7B184);
PPC_FUNC_IMPL(__imp__sub_83B7B184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B188"))) PPC_WEAK_FUNC(sub_83B7B188);
PPC_FUNC_IMPL(__imp__sub_83B7B188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,29944
	ctx.r3.s64 = ctx.r11.s64 + 29944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B194"))) PPC_WEAK_FUNC(sub_83B7B194);
PPC_FUNC_IMPL(__imp__sub_83B7B194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B198"))) PPC_WEAK_FUNC(sub_83B7B198);
PPC_FUNC_IMPL(__imp__sub_83B7B198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,29952
	ctx.r3.s64 = ctx.r11.s64 + 29952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B1A4"))) PPC_WEAK_FUNC(sub_83B7B1A4);
PPC_FUNC_IMPL(__imp__sub_83B7B1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B1A8"))) PPC_WEAK_FUNC(sub_83B7B1A8);
PPC_FUNC_IMPL(__imp__sub_83B7B1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,29960
	ctx.r3.s64 = ctx.r11.s64 + 29960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B1B4"))) PPC_WEAK_FUNC(sub_83B7B1B4);
PPC_FUNC_IMPL(__imp__sub_83B7B1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B1B8"))) PPC_WEAK_FUNC(sub_83B7B1B8);
PPC_FUNC_IMPL(__imp__sub_83B7B1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,29968
	ctx.r3.s64 = ctx.r11.s64 + 29968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B1C4"))) PPC_WEAK_FUNC(sub_83B7B1C4);
PPC_FUNC_IMPL(__imp__sub_83B7B1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B1C8"))) PPC_WEAK_FUNC(sub_83B7B1C8);
PPC_FUNC_IMPL(__imp__sub_83B7B1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,29976
	ctx.r3.s64 = ctx.r11.s64 + 29976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B1D4"))) PPC_WEAK_FUNC(sub_83B7B1D4);
PPC_FUNC_IMPL(__imp__sub_83B7B1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B1D8"))) PPC_WEAK_FUNC(sub_83B7B1D8);
PPC_FUNC_IMPL(__imp__sub_83B7B1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,29984
	ctx.r3.s64 = ctx.r11.s64 + 29984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B1E4"))) PPC_WEAK_FUNC(sub_83B7B1E4);
PPC_FUNC_IMPL(__imp__sub_83B7B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B1E8"))) PPC_WEAK_FUNC(sub_83B7B1E8);
PPC_FUNC_IMPL(__imp__sub_83B7B1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,29992
	ctx.r3.s64 = ctx.r11.s64 + 29992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B1F4"))) PPC_WEAK_FUNC(sub_83B7B1F4);
PPC_FUNC_IMPL(__imp__sub_83B7B1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B1F8"))) PPC_WEAK_FUNC(sub_83B7B1F8);
PPC_FUNC_IMPL(__imp__sub_83B7B1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30000
	ctx.r3.s64 = ctx.r11.s64 + 30000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B204"))) PPC_WEAK_FUNC(sub_83B7B204);
PPC_FUNC_IMPL(__imp__sub_83B7B204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B208"))) PPC_WEAK_FUNC(sub_83B7B208);
PPC_FUNC_IMPL(__imp__sub_83B7B208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30008
	ctx.r3.s64 = ctx.r11.s64 + 30008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B214"))) PPC_WEAK_FUNC(sub_83B7B214);
PPC_FUNC_IMPL(__imp__sub_83B7B214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B218"))) PPC_WEAK_FUNC(sub_83B7B218);
PPC_FUNC_IMPL(__imp__sub_83B7B218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30016
	ctx.r3.s64 = ctx.r11.s64 + 30016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B224"))) PPC_WEAK_FUNC(sub_83B7B224);
PPC_FUNC_IMPL(__imp__sub_83B7B224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B228"))) PPC_WEAK_FUNC(sub_83B7B228);
PPC_FUNC_IMPL(__imp__sub_83B7B228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30024
	ctx.r3.s64 = ctx.r11.s64 + 30024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B234"))) PPC_WEAK_FUNC(sub_83B7B234);
PPC_FUNC_IMPL(__imp__sub_83B7B234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B238"))) PPC_WEAK_FUNC(sub_83B7B238);
PPC_FUNC_IMPL(__imp__sub_83B7B238) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14396
	ctx.r7.s64 = ctx.r8.s64 + -14396;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14396(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14396);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14396(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14396, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7B260"))) PPC_WEAK_FUNC(sub_83B7B260);
PPC_FUNC_IMPL(__imp__sub_83B7B260) {
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
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x83523120
	ctx.lr = 0x83B7B278;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,30032
	ctx.r3.s64 = ctx.r10.s64 + 30032;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7B284;
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

__attribute__((alias("__imp__sub_83B7B294"))) PPC_WEAK_FUNC(sub_83B7B294);
PPC_FUNC_IMPL(__imp__sub_83B7B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B298"))) PPC_WEAK_FUNC(sub_83B7B298);
PPC_FUNC_IMPL(__imp__sub_83B7B298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30048
	ctx.r3.s64 = ctx.r11.s64 + 30048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B2A4"))) PPC_WEAK_FUNC(sub_83B7B2A4);
PPC_FUNC_IMPL(__imp__sub_83B7B2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B2A8"))) PPC_WEAK_FUNC(sub_83B7B2A8);
PPC_FUNC_IMPL(__imp__sub_83B7B2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30056
	ctx.r3.s64 = ctx.r11.s64 + 30056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B2B4"))) PPC_WEAK_FUNC(sub_83B7B2B4);
PPC_FUNC_IMPL(__imp__sub_83B7B2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B2B8"))) PPC_WEAK_FUNC(sub_83B7B2B8);
PPC_FUNC_IMPL(__imp__sub_83B7B2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30064
	ctx.r3.s64 = ctx.r11.s64 + 30064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B2C4"))) PPC_WEAK_FUNC(sub_83B7B2C4);
PPC_FUNC_IMPL(__imp__sub_83B7B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B2C8"))) PPC_WEAK_FUNC(sub_83B7B2C8);
PPC_FUNC_IMPL(__imp__sub_83B7B2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30072
	ctx.r3.s64 = ctx.r11.s64 + 30072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B2D4"))) PPC_WEAK_FUNC(sub_83B7B2D4);
PPC_FUNC_IMPL(__imp__sub_83B7B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B2D8"))) PPC_WEAK_FUNC(sub_83B7B2D8);
PPC_FUNC_IMPL(__imp__sub_83B7B2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B2E4"))) PPC_WEAK_FUNC(sub_83B7B2E4);
PPC_FUNC_IMPL(__imp__sub_83B7B2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B2E8"))) PPC_WEAK_FUNC(sub_83B7B2E8);
PPC_FUNC_IMPL(__imp__sub_83B7B2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30088
	ctx.r3.s64 = ctx.r11.s64 + 30088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B2F4"))) PPC_WEAK_FUNC(sub_83B7B2F4);
PPC_FUNC_IMPL(__imp__sub_83B7B2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B2F8"))) PPC_WEAK_FUNC(sub_83B7B2F8);
PPC_FUNC_IMPL(__imp__sub_83B7B2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30096
	ctx.r3.s64 = ctx.r11.s64 + 30096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B304"))) PPC_WEAK_FUNC(sub_83B7B304);
PPC_FUNC_IMPL(__imp__sub_83B7B304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B308"))) PPC_WEAK_FUNC(sub_83B7B308);
PPC_FUNC_IMPL(__imp__sub_83B7B308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30104
	ctx.r3.s64 = ctx.r11.s64 + 30104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B314"))) PPC_WEAK_FUNC(sub_83B7B314);
PPC_FUNC_IMPL(__imp__sub_83B7B314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B318"))) PPC_WEAK_FUNC(sub_83B7B318);
PPC_FUNC_IMPL(__imp__sub_83B7B318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30112
	ctx.r3.s64 = ctx.r11.s64 + 30112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B324"))) PPC_WEAK_FUNC(sub_83B7B324);
PPC_FUNC_IMPL(__imp__sub_83B7B324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B328"))) PPC_WEAK_FUNC(sub_83B7B328);
PPC_FUNC_IMPL(__imp__sub_83B7B328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B334"))) PPC_WEAK_FUNC(sub_83B7B334);
PPC_FUNC_IMPL(__imp__sub_83B7B334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B338"))) PPC_WEAK_FUNC(sub_83B7B338);
PPC_FUNC_IMPL(__imp__sub_83B7B338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B344"))) PPC_WEAK_FUNC(sub_83B7B344);
PPC_FUNC_IMPL(__imp__sub_83B7B344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B348"))) PPC_WEAK_FUNC(sub_83B7B348);
PPC_FUNC_IMPL(__imp__sub_83B7B348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30136
	ctx.r3.s64 = ctx.r11.s64 + 30136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B354"))) PPC_WEAK_FUNC(sub_83B7B354);
PPC_FUNC_IMPL(__imp__sub_83B7B354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B358"))) PPC_WEAK_FUNC(sub_83B7B358);
PPC_FUNC_IMPL(__imp__sub_83B7B358) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14384
	ctx.r7.s64 = ctx.r8.s64 + -14384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14384);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14384(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14384, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7B380"))) PPC_WEAK_FUNC(sub_83B7B380);
PPC_FUNC_IMPL(__imp__sub_83B7B380) {
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
	// addi r3,r11,-14388
	ctx.r3.s64 = ctx.r11.s64 + -14388;
	// bl 0x83523120
	ctx.lr = 0x83B7B398;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,30144
	ctx.r3.s64 = ctx.r10.s64 + 30144;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7B3A4;
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

__attribute__((alias("__imp__sub_83B7B3B4"))) PPC_WEAK_FUNC(sub_83B7B3B4);
PPC_FUNC_IMPL(__imp__sub_83B7B3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B3B8"))) PPC_WEAK_FUNC(sub_83B7B3B8);
PPC_FUNC_IMPL(__imp__sub_83B7B3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30160
	ctx.r3.s64 = ctx.r11.s64 + 30160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B3C4"))) PPC_WEAK_FUNC(sub_83B7B3C4);
PPC_FUNC_IMPL(__imp__sub_83B7B3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B3C8"))) PPC_WEAK_FUNC(sub_83B7B3C8);
PPC_FUNC_IMPL(__imp__sub_83B7B3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30168
	ctx.r3.s64 = ctx.r11.s64 + 30168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B3D4"))) PPC_WEAK_FUNC(sub_83B7B3D4);
PPC_FUNC_IMPL(__imp__sub_83B7B3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B3D8"))) PPC_WEAK_FUNC(sub_83B7B3D8);
PPC_FUNC_IMPL(__imp__sub_83B7B3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30176
	ctx.r3.s64 = ctx.r11.s64 + 30176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B3E4"))) PPC_WEAK_FUNC(sub_83B7B3E4);
PPC_FUNC_IMPL(__imp__sub_83B7B3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B3E8"))) PPC_WEAK_FUNC(sub_83B7B3E8);
PPC_FUNC_IMPL(__imp__sub_83B7B3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30184
	ctx.r3.s64 = ctx.r11.s64 + 30184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B3F4"))) PPC_WEAK_FUNC(sub_83B7B3F4);
PPC_FUNC_IMPL(__imp__sub_83B7B3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B3F8"))) PPC_WEAK_FUNC(sub_83B7B3F8);
PPC_FUNC_IMPL(__imp__sub_83B7B3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30192
	ctx.r3.s64 = ctx.r11.s64 + 30192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B404"))) PPC_WEAK_FUNC(sub_83B7B404);
PPC_FUNC_IMPL(__imp__sub_83B7B404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B408"))) PPC_WEAK_FUNC(sub_83B7B408);
PPC_FUNC_IMPL(__imp__sub_83B7B408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30200
	ctx.r3.s64 = ctx.r11.s64 + 30200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B414"))) PPC_WEAK_FUNC(sub_83B7B414);
PPC_FUNC_IMPL(__imp__sub_83B7B414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B418"))) PPC_WEAK_FUNC(sub_83B7B418);
PPC_FUNC_IMPL(__imp__sub_83B7B418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30208
	ctx.r3.s64 = ctx.r11.s64 + 30208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B424"))) PPC_WEAK_FUNC(sub_83B7B424);
PPC_FUNC_IMPL(__imp__sub_83B7B424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B428"))) PPC_WEAK_FUNC(sub_83B7B428);
PPC_FUNC_IMPL(__imp__sub_83B7B428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30216
	ctx.r3.s64 = ctx.r11.s64 + 30216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B434"))) PPC_WEAK_FUNC(sub_83B7B434);
PPC_FUNC_IMPL(__imp__sub_83B7B434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B438"))) PPC_WEAK_FUNC(sub_83B7B438);
PPC_FUNC_IMPL(__imp__sub_83B7B438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30224
	ctx.r3.s64 = ctx.r11.s64 + 30224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B444"))) PPC_WEAK_FUNC(sub_83B7B444);
PPC_FUNC_IMPL(__imp__sub_83B7B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B448"))) PPC_WEAK_FUNC(sub_83B7B448);
PPC_FUNC_IMPL(__imp__sub_83B7B448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30232
	ctx.r3.s64 = ctx.r11.s64 + 30232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B454"))) PPC_WEAK_FUNC(sub_83B7B454);
PPC_FUNC_IMPL(__imp__sub_83B7B454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B458"))) PPC_WEAK_FUNC(sub_83B7B458);
PPC_FUNC_IMPL(__imp__sub_83B7B458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30240
	ctx.r3.s64 = ctx.r11.s64 + 30240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B464"))) PPC_WEAK_FUNC(sub_83B7B464);
PPC_FUNC_IMPL(__imp__sub_83B7B464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B468"))) PPC_WEAK_FUNC(sub_83B7B468);
PPC_FUNC_IMPL(__imp__sub_83B7B468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30248
	ctx.r3.s64 = ctx.r11.s64 + 30248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B474"))) PPC_WEAK_FUNC(sub_83B7B474);
PPC_FUNC_IMPL(__imp__sub_83B7B474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B478"))) PPC_WEAK_FUNC(sub_83B7B478);
PPC_FUNC_IMPL(__imp__sub_83B7B478) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14372
	ctx.r7.s64 = ctx.r8.s64 + -14372;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14372(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14372);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14372(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14372, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7B4A0"))) PPC_WEAK_FUNC(sub_83B7B4A0);
PPC_FUNC_IMPL(__imp__sub_83B7B4A0) {
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
	// addi r3,r11,-14376
	ctx.r3.s64 = ctx.r11.s64 + -14376;
	// bl 0x83523120
	ctx.lr = 0x83B7B4B8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,30256
	ctx.r3.s64 = ctx.r10.s64 + 30256;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7B4C4;
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

__attribute__((alias("__imp__sub_83B7B4D4"))) PPC_WEAK_FUNC(sub_83B7B4D4);
PPC_FUNC_IMPL(__imp__sub_83B7B4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B4D8"))) PPC_WEAK_FUNC(sub_83B7B4D8);
PPC_FUNC_IMPL(__imp__sub_83B7B4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30272
	ctx.r3.s64 = ctx.r11.s64 + 30272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B4E4"))) PPC_WEAK_FUNC(sub_83B7B4E4);
PPC_FUNC_IMPL(__imp__sub_83B7B4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B4E8"))) PPC_WEAK_FUNC(sub_83B7B4E8);
PPC_FUNC_IMPL(__imp__sub_83B7B4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30280
	ctx.r3.s64 = ctx.r11.s64 + 30280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B4F4"))) PPC_WEAK_FUNC(sub_83B7B4F4);
PPC_FUNC_IMPL(__imp__sub_83B7B4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B4F8"))) PPC_WEAK_FUNC(sub_83B7B4F8);
PPC_FUNC_IMPL(__imp__sub_83B7B4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30288
	ctx.r3.s64 = ctx.r11.s64 + 30288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B504"))) PPC_WEAK_FUNC(sub_83B7B504);
PPC_FUNC_IMPL(__imp__sub_83B7B504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B508"))) PPC_WEAK_FUNC(sub_83B7B508);
PPC_FUNC_IMPL(__imp__sub_83B7B508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30296
	ctx.r3.s64 = ctx.r11.s64 + 30296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B514"))) PPC_WEAK_FUNC(sub_83B7B514);
PPC_FUNC_IMPL(__imp__sub_83B7B514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B518"))) PPC_WEAK_FUNC(sub_83B7B518);
PPC_FUNC_IMPL(__imp__sub_83B7B518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30304
	ctx.r3.s64 = ctx.r11.s64 + 30304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B524"))) PPC_WEAK_FUNC(sub_83B7B524);
PPC_FUNC_IMPL(__imp__sub_83B7B524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B528"))) PPC_WEAK_FUNC(sub_83B7B528);
PPC_FUNC_IMPL(__imp__sub_83B7B528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30312
	ctx.r3.s64 = ctx.r11.s64 + 30312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B534"))) PPC_WEAK_FUNC(sub_83B7B534);
PPC_FUNC_IMPL(__imp__sub_83B7B534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B538"))) PPC_WEAK_FUNC(sub_83B7B538);
PPC_FUNC_IMPL(__imp__sub_83B7B538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30320
	ctx.r3.s64 = ctx.r11.s64 + 30320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B544"))) PPC_WEAK_FUNC(sub_83B7B544);
PPC_FUNC_IMPL(__imp__sub_83B7B544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B548"))) PPC_WEAK_FUNC(sub_83B7B548);
PPC_FUNC_IMPL(__imp__sub_83B7B548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30328
	ctx.r3.s64 = ctx.r11.s64 + 30328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B554"))) PPC_WEAK_FUNC(sub_83B7B554);
PPC_FUNC_IMPL(__imp__sub_83B7B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B558"))) PPC_WEAK_FUNC(sub_83B7B558);
PPC_FUNC_IMPL(__imp__sub_83B7B558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30336
	ctx.r3.s64 = ctx.r11.s64 + 30336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B564"))) PPC_WEAK_FUNC(sub_83B7B564);
PPC_FUNC_IMPL(__imp__sub_83B7B564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B568"))) PPC_WEAK_FUNC(sub_83B7B568);
PPC_FUNC_IMPL(__imp__sub_83B7B568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30344
	ctx.r3.s64 = ctx.r11.s64 + 30344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B574"))) PPC_WEAK_FUNC(sub_83B7B574);
PPC_FUNC_IMPL(__imp__sub_83B7B574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B578"))) PPC_WEAK_FUNC(sub_83B7B578);
PPC_FUNC_IMPL(__imp__sub_83B7B578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30352
	ctx.r3.s64 = ctx.r11.s64 + 30352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B584"))) PPC_WEAK_FUNC(sub_83B7B584);
PPC_FUNC_IMPL(__imp__sub_83B7B584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B588"))) PPC_WEAK_FUNC(sub_83B7B588);
PPC_FUNC_IMPL(__imp__sub_83B7B588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B594"))) PPC_WEAK_FUNC(sub_83B7B594);
PPC_FUNC_IMPL(__imp__sub_83B7B594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B598"))) PPC_WEAK_FUNC(sub_83B7B598);
PPC_FUNC_IMPL(__imp__sub_83B7B598) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14360
	ctx.r7.s64 = ctx.r8.s64 + -14360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14360(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7B5C0"))) PPC_WEAK_FUNC(sub_83B7B5C0);
PPC_FUNC_IMPL(__imp__sub_83B7B5C0) {
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
	// addi r3,r11,-14364
	ctx.r3.s64 = ctx.r11.s64 + -14364;
	// bl 0x83523120
	ctx.lr = 0x83B7B5D8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,30368
	ctx.r3.s64 = ctx.r10.s64 + 30368;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7B5E4;
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

__attribute__((alias("__imp__sub_83B7B5F4"))) PPC_WEAK_FUNC(sub_83B7B5F4);
PPC_FUNC_IMPL(__imp__sub_83B7B5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B5F8"))) PPC_WEAK_FUNC(sub_83B7B5F8);
PPC_FUNC_IMPL(__imp__sub_83B7B5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30384
	ctx.r3.s64 = ctx.r11.s64 + 30384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B604"))) PPC_WEAK_FUNC(sub_83B7B604);
PPC_FUNC_IMPL(__imp__sub_83B7B604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B608"))) PPC_WEAK_FUNC(sub_83B7B608);
PPC_FUNC_IMPL(__imp__sub_83B7B608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30392
	ctx.r3.s64 = ctx.r11.s64 + 30392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B614"))) PPC_WEAK_FUNC(sub_83B7B614);
PPC_FUNC_IMPL(__imp__sub_83B7B614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B618"))) PPC_WEAK_FUNC(sub_83B7B618);
PPC_FUNC_IMPL(__imp__sub_83B7B618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30400
	ctx.r3.s64 = ctx.r11.s64 + 30400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B624"))) PPC_WEAK_FUNC(sub_83B7B624);
PPC_FUNC_IMPL(__imp__sub_83B7B624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B628"))) PPC_WEAK_FUNC(sub_83B7B628);
PPC_FUNC_IMPL(__imp__sub_83B7B628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30408
	ctx.r3.s64 = ctx.r11.s64 + 30408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B634"))) PPC_WEAK_FUNC(sub_83B7B634);
PPC_FUNC_IMPL(__imp__sub_83B7B634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B638"))) PPC_WEAK_FUNC(sub_83B7B638);
PPC_FUNC_IMPL(__imp__sub_83B7B638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30416
	ctx.r3.s64 = ctx.r11.s64 + 30416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B644"))) PPC_WEAK_FUNC(sub_83B7B644);
PPC_FUNC_IMPL(__imp__sub_83B7B644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B648"))) PPC_WEAK_FUNC(sub_83B7B648);
PPC_FUNC_IMPL(__imp__sub_83B7B648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30424
	ctx.r3.s64 = ctx.r11.s64 + 30424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B654"))) PPC_WEAK_FUNC(sub_83B7B654);
PPC_FUNC_IMPL(__imp__sub_83B7B654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B658"))) PPC_WEAK_FUNC(sub_83B7B658);
PPC_FUNC_IMPL(__imp__sub_83B7B658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30432
	ctx.r3.s64 = ctx.r11.s64 + 30432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B664"))) PPC_WEAK_FUNC(sub_83B7B664);
PPC_FUNC_IMPL(__imp__sub_83B7B664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B668"))) PPC_WEAK_FUNC(sub_83B7B668);
PPC_FUNC_IMPL(__imp__sub_83B7B668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30440
	ctx.r3.s64 = ctx.r11.s64 + 30440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B674"))) PPC_WEAK_FUNC(sub_83B7B674);
PPC_FUNC_IMPL(__imp__sub_83B7B674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B678"))) PPC_WEAK_FUNC(sub_83B7B678);
PPC_FUNC_IMPL(__imp__sub_83B7B678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30448
	ctx.r3.s64 = ctx.r11.s64 + 30448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B684"))) PPC_WEAK_FUNC(sub_83B7B684);
PPC_FUNC_IMPL(__imp__sub_83B7B684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B688"))) PPC_WEAK_FUNC(sub_83B7B688);
PPC_FUNC_IMPL(__imp__sub_83B7B688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30456
	ctx.r3.s64 = ctx.r11.s64 + 30456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B694"))) PPC_WEAK_FUNC(sub_83B7B694);
PPC_FUNC_IMPL(__imp__sub_83B7B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B698"))) PPC_WEAK_FUNC(sub_83B7B698);
PPC_FUNC_IMPL(__imp__sub_83B7B698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30464
	ctx.r3.s64 = ctx.r11.s64 + 30464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B6A4"))) PPC_WEAK_FUNC(sub_83B7B6A4);
PPC_FUNC_IMPL(__imp__sub_83B7B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B6A8"))) PPC_WEAK_FUNC(sub_83B7B6A8);
PPC_FUNC_IMPL(__imp__sub_83B7B6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30472
	ctx.r3.s64 = ctx.r11.s64 + 30472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B6B4"))) PPC_WEAK_FUNC(sub_83B7B6B4);
PPC_FUNC_IMPL(__imp__sub_83B7B6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B6B8"))) PPC_WEAK_FUNC(sub_83B7B6B8);
PPC_FUNC_IMPL(__imp__sub_83B7B6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14348
	ctx.r7.s64 = ctx.r8.s64 + -14348;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14348(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14348);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14348(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14348, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7B6E0"))) PPC_WEAK_FUNC(sub_83B7B6E0);
PPC_FUNC_IMPL(__imp__sub_83B7B6E0) {
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
	// addi r3,r11,-14352
	ctx.r3.s64 = ctx.r11.s64 + -14352;
	// bl 0x83523120
	ctx.lr = 0x83B7B6F8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,30480
	ctx.r3.s64 = ctx.r10.s64 + 30480;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7B704;
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

__attribute__((alias("__imp__sub_83B7B714"))) PPC_WEAK_FUNC(sub_83B7B714);
PPC_FUNC_IMPL(__imp__sub_83B7B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B718"))) PPC_WEAK_FUNC(sub_83B7B718);
PPC_FUNC_IMPL(__imp__sub_83B7B718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30496
	ctx.r3.s64 = ctx.r11.s64 + 30496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B724"))) PPC_WEAK_FUNC(sub_83B7B724);
PPC_FUNC_IMPL(__imp__sub_83B7B724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B728"))) PPC_WEAK_FUNC(sub_83B7B728);
PPC_FUNC_IMPL(__imp__sub_83B7B728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30504
	ctx.r3.s64 = ctx.r11.s64 + 30504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B734"))) PPC_WEAK_FUNC(sub_83B7B734);
PPC_FUNC_IMPL(__imp__sub_83B7B734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B738"))) PPC_WEAK_FUNC(sub_83B7B738);
PPC_FUNC_IMPL(__imp__sub_83B7B738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30512
	ctx.r3.s64 = ctx.r11.s64 + 30512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B744"))) PPC_WEAK_FUNC(sub_83B7B744);
PPC_FUNC_IMPL(__imp__sub_83B7B744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B748"))) PPC_WEAK_FUNC(sub_83B7B748);
PPC_FUNC_IMPL(__imp__sub_83B7B748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30520
	ctx.r3.s64 = ctx.r11.s64 + 30520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B754"))) PPC_WEAK_FUNC(sub_83B7B754);
PPC_FUNC_IMPL(__imp__sub_83B7B754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B758"))) PPC_WEAK_FUNC(sub_83B7B758);
PPC_FUNC_IMPL(__imp__sub_83B7B758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30528
	ctx.r3.s64 = ctx.r11.s64 + 30528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B764"))) PPC_WEAK_FUNC(sub_83B7B764);
PPC_FUNC_IMPL(__imp__sub_83B7B764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B768"))) PPC_WEAK_FUNC(sub_83B7B768);
PPC_FUNC_IMPL(__imp__sub_83B7B768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B774"))) PPC_WEAK_FUNC(sub_83B7B774);
PPC_FUNC_IMPL(__imp__sub_83B7B774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B778"))) PPC_WEAK_FUNC(sub_83B7B778);
PPC_FUNC_IMPL(__imp__sub_83B7B778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30544
	ctx.r3.s64 = ctx.r11.s64 + 30544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B784"))) PPC_WEAK_FUNC(sub_83B7B784);
PPC_FUNC_IMPL(__imp__sub_83B7B784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B788"))) PPC_WEAK_FUNC(sub_83B7B788);
PPC_FUNC_IMPL(__imp__sub_83B7B788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30552
	ctx.r3.s64 = ctx.r11.s64 + 30552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B794"))) PPC_WEAK_FUNC(sub_83B7B794);
PPC_FUNC_IMPL(__imp__sub_83B7B794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B798"))) PPC_WEAK_FUNC(sub_83B7B798);
PPC_FUNC_IMPL(__imp__sub_83B7B798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B7A4"))) PPC_WEAK_FUNC(sub_83B7B7A4);
PPC_FUNC_IMPL(__imp__sub_83B7B7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B7A8"))) PPC_WEAK_FUNC(sub_83B7B7A8);
PPC_FUNC_IMPL(__imp__sub_83B7B7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30568
	ctx.r3.s64 = ctx.r11.s64 + 30568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B7B4"))) PPC_WEAK_FUNC(sub_83B7B7B4);
PPC_FUNC_IMPL(__imp__sub_83B7B7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B7B8"))) PPC_WEAK_FUNC(sub_83B7B7B8);
PPC_FUNC_IMPL(__imp__sub_83B7B7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30576
	ctx.r3.s64 = ctx.r11.s64 + 30576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B7C4"))) PPC_WEAK_FUNC(sub_83B7B7C4);
PPC_FUNC_IMPL(__imp__sub_83B7B7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B7C8"))) PPC_WEAK_FUNC(sub_83B7B7C8);
PPC_FUNC_IMPL(__imp__sub_83B7B7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30584
	ctx.r3.s64 = ctx.r11.s64 + 30584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B7D4"))) PPC_WEAK_FUNC(sub_83B7B7D4);
PPC_FUNC_IMPL(__imp__sub_83B7B7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B7D8"))) PPC_WEAK_FUNC(sub_83B7B7D8);
PPC_FUNC_IMPL(__imp__sub_83B7B7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14336
	ctx.r7.s64 = ctx.r8.s64 + -14336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14336);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14336(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14336, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7B800"))) PPC_WEAK_FUNC(sub_83B7B800);
PPC_FUNC_IMPL(__imp__sub_83B7B800) {
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
	// addi r3,r11,-14340
	ctx.r3.s64 = ctx.r11.s64 + -14340;
	// bl 0x83523120
	ctx.lr = 0x83B7B818;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,30592
	ctx.r3.s64 = ctx.r10.s64 + 30592;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7B824;
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

__attribute__((alias("__imp__sub_83B7B834"))) PPC_WEAK_FUNC(sub_83B7B834);
PPC_FUNC_IMPL(__imp__sub_83B7B834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B838"))) PPC_WEAK_FUNC(sub_83B7B838);
PPC_FUNC_IMPL(__imp__sub_83B7B838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30608
	ctx.r3.s64 = ctx.r11.s64 + 30608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B844"))) PPC_WEAK_FUNC(sub_83B7B844);
PPC_FUNC_IMPL(__imp__sub_83B7B844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B848"))) PPC_WEAK_FUNC(sub_83B7B848);
PPC_FUNC_IMPL(__imp__sub_83B7B848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30616
	ctx.r3.s64 = ctx.r11.s64 + 30616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B854"))) PPC_WEAK_FUNC(sub_83B7B854);
PPC_FUNC_IMPL(__imp__sub_83B7B854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B858"))) PPC_WEAK_FUNC(sub_83B7B858);
PPC_FUNC_IMPL(__imp__sub_83B7B858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30624
	ctx.r3.s64 = ctx.r11.s64 + 30624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B864"))) PPC_WEAK_FUNC(sub_83B7B864);
PPC_FUNC_IMPL(__imp__sub_83B7B864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B868"))) PPC_WEAK_FUNC(sub_83B7B868);
PPC_FUNC_IMPL(__imp__sub_83B7B868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30632
	ctx.r3.s64 = ctx.r11.s64 + 30632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B874"))) PPC_WEAK_FUNC(sub_83B7B874);
PPC_FUNC_IMPL(__imp__sub_83B7B874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B878"))) PPC_WEAK_FUNC(sub_83B7B878);
PPC_FUNC_IMPL(__imp__sub_83B7B878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30640
	ctx.r3.s64 = ctx.r11.s64 + 30640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B884"))) PPC_WEAK_FUNC(sub_83B7B884);
PPC_FUNC_IMPL(__imp__sub_83B7B884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B888"))) PPC_WEAK_FUNC(sub_83B7B888);
PPC_FUNC_IMPL(__imp__sub_83B7B888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30648
	ctx.r3.s64 = ctx.r11.s64 + 30648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B894"))) PPC_WEAK_FUNC(sub_83B7B894);
PPC_FUNC_IMPL(__imp__sub_83B7B894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B898"))) PPC_WEAK_FUNC(sub_83B7B898);
PPC_FUNC_IMPL(__imp__sub_83B7B898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30656
	ctx.r3.s64 = ctx.r11.s64 + 30656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B8A4"))) PPC_WEAK_FUNC(sub_83B7B8A4);
PPC_FUNC_IMPL(__imp__sub_83B7B8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B8A8"))) PPC_WEAK_FUNC(sub_83B7B8A8);
PPC_FUNC_IMPL(__imp__sub_83B7B8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30664
	ctx.r3.s64 = ctx.r11.s64 + 30664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B8B4"))) PPC_WEAK_FUNC(sub_83B7B8B4);
PPC_FUNC_IMPL(__imp__sub_83B7B8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B8B8"))) PPC_WEAK_FUNC(sub_83B7B8B8);
PPC_FUNC_IMPL(__imp__sub_83B7B8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30672
	ctx.r3.s64 = ctx.r11.s64 + 30672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B8C4"))) PPC_WEAK_FUNC(sub_83B7B8C4);
PPC_FUNC_IMPL(__imp__sub_83B7B8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B8C8"))) PPC_WEAK_FUNC(sub_83B7B8C8);
PPC_FUNC_IMPL(__imp__sub_83B7B8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30680
	ctx.r3.s64 = ctx.r11.s64 + 30680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B8D4"))) PPC_WEAK_FUNC(sub_83B7B8D4);
PPC_FUNC_IMPL(__imp__sub_83B7B8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B8D8"))) PPC_WEAK_FUNC(sub_83B7B8D8);
PPC_FUNC_IMPL(__imp__sub_83B7B8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30688
	ctx.r3.s64 = ctx.r11.s64 + 30688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B8E4"))) PPC_WEAK_FUNC(sub_83B7B8E4);
PPC_FUNC_IMPL(__imp__sub_83B7B8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B8E8"))) PPC_WEAK_FUNC(sub_83B7B8E8);
PPC_FUNC_IMPL(__imp__sub_83B7B8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30696
	ctx.r3.s64 = ctx.r11.s64 + 30696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B8F4"))) PPC_WEAK_FUNC(sub_83B7B8F4);
PPC_FUNC_IMPL(__imp__sub_83B7B8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B8F8"))) PPC_WEAK_FUNC(sub_83B7B8F8);
PPC_FUNC_IMPL(__imp__sub_83B7B8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14324
	ctx.r7.s64 = ctx.r8.s64 + -14324;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14324(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14324);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14324(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14324, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7B920"))) PPC_WEAK_FUNC(sub_83B7B920);
PPC_FUNC_IMPL(__imp__sub_83B7B920) {
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
	// addi r3,r11,-14328
	ctx.r3.s64 = ctx.r11.s64 + -14328;
	// bl 0x83523120
	ctx.lr = 0x83B7B938;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,30704
	ctx.r3.s64 = ctx.r10.s64 + 30704;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7B944;
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

__attribute__((alias("__imp__sub_83B7B954"))) PPC_WEAK_FUNC(sub_83B7B954);
PPC_FUNC_IMPL(__imp__sub_83B7B954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B958"))) PPC_WEAK_FUNC(sub_83B7B958);
PPC_FUNC_IMPL(__imp__sub_83B7B958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30720
	ctx.r3.s64 = ctx.r11.s64 + 30720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B964"))) PPC_WEAK_FUNC(sub_83B7B964);
PPC_FUNC_IMPL(__imp__sub_83B7B964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B968"))) PPC_WEAK_FUNC(sub_83B7B968);
PPC_FUNC_IMPL(__imp__sub_83B7B968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30728
	ctx.r3.s64 = ctx.r11.s64 + 30728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B974"))) PPC_WEAK_FUNC(sub_83B7B974);
PPC_FUNC_IMPL(__imp__sub_83B7B974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B978"))) PPC_WEAK_FUNC(sub_83B7B978);
PPC_FUNC_IMPL(__imp__sub_83B7B978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30736
	ctx.r3.s64 = ctx.r11.s64 + 30736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B984"))) PPC_WEAK_FUNC(sub_83B7B984);
PPC_FUNC_IMPL(__imp__sub_83B7B984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B988"))) PPC_WEAK_FUNC(sub_83B7B988);
PPC_FUNC_IMPL(__imp__sub_83B7B988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30744
	ctx.r3.s64 = ctx.r11.s64 + 30744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B994"))) PPC_WEAK_FUNC(sub_83B7B994);
PPC_FUNC_IMPL(__imp__sub_83B7B994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B998"))) PPC_WEAK_FUNC(sub_83B7B998);
PPC_FUNC_IMPL(__imp__sub_83B7B998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30752
	ctx.r3.s64 = ctx.r11.s64 + 30752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B9A4"))) PPC_WEAK_FUNC(sub_83B7B9A4);
PPC_FUNC_IMPL(__imp__sub_83B7B9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B9A8"))) PPC_WEAK_FUNC(sub_83B7B9A8);
PPC_FUNC_IMPL(__imp__sub_83B7B9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30760
	ctx.r3.s64 = ctx.r11.s64 + 30760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B9B4"))) PPC_WEAK_FUNC(sub_83B7B9B4);
PPC_FUNC_IMPL(__imp__sub_83B7B9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B9B8"))) PPC_WEAK_FUNC(sub_83B7B9B8);
PPC_FUNC_IMPL(__imp__sub_83B7B9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30768
	ctx.r3.s64 = ctx.r11.s64 + 30768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B9C4"))) PPC_WEAK_FUNC(sub_83B7B9C4);
PPC_FUNC_IMPL(__imp__sub_83B7B9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B9C8"))) PPC_WEAK_FUNC(sub_83B7B9C8);
PPC_FUNC_IMPL(__imp__sub_83B7B9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30776
	ctx.r3.s64 = ctx.r11.s64 + 30776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B9D4"))) PPC_WEAK_FUNC(sub_83B7B9D4);
PPC_FUNC_IMPL(__imp__sub_83B7B9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B9D8"))) PPC_WEAK_FUNC(sub_83B7B9D8);
PPC_FUNC_IMPL(__imp__sub_83B7B9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30784
	ctx.r3.s64 = ctx.r11.s64 + 30784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B9E4"))) PPC_WEAK_FUNC(sub_83B7B9E4);
PPC_FUNC_IMPL(__imp__sub_83B7B9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B9E8"))) PPC_WEAK_FUNC(sub_83B7B9E8);
PPC_FUNC_IMPL(__imp__sub_83B7B9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30792
	ctx.r3.s64 = ctx.r11.s64 + 30792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7B9F4"))) PPC_WEAK_FUNC(sub_83B7B9F4);
PPC_FUNC_IMPL(__imp__sub_83B7B9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7B9F8"))) PPC_WEAK_FUNC(sub_83B7B9F8);
PPC_FUNC_IMPL(__imp__sub_83B7B9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30800
	ctx.r3.s64 = ctx.r11.s64 + 30800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BA04"))) PPC_WEAK_FUNC(sub_83B7BA04);
PPC_FUNC_IMPL(__imp__sub_83B7BA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BA08"))) PPC_WEAK_FUNC(sub_83B7BA08);
PPC_FUNC_IMPL(__imp__sub_83B7BA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30808
	ctx.r3.s64 = ctx.r11.s64 + 30808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BA14"))) PPC_WEAK_FUNC(sub_83B7BA14);
PPC_FUNC_IMPL(__imp__sub_83B7BA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BA18"))) PPC_WEAK_FUNC(sub_83B7BA18);
PPC_FUNC_IMPL(__imp__sub_83B7BA18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14312
	ctx.r7.s64 = ctx.r8.s64 + -14312;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14312(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14312);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14312(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14312, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7BA40"))) PPC_WEAK_FUNC(sub_83B7BA40);
PPC_FUNC_IMPL(__imp__sub_83B7BA40) {
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
	// addi r3,r11,-14316
	ctx.r3.s64 = ctx.r11.s64 + -14316;
	// bl 0x83523120
	ctx.lr = 0x83B7BA58;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,30816
	ctx.r3.s64 = ctx.r10.s64 + 30816;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7BA64;
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

__attribute__((alias("__imp__sub_83B7BA74"))) PPC_WEAK_FUNC(sub_83B7BA74);
PPC_FUNC_IMPL(__imp__sub_83B7BA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BA78"))) PPC_WEAK_FUNC(sub_83B7BA78);
PPC_FUNC_IMPL(__imp__sub_83B7BA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30832
	ctx.r3.s64 = ctx.r11.s64 + 30832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BA84"))) PPC_WEAK_FUNC(sub_83B7BA84);
PPC_FUNC_IMPL(__imp__sub_83B7BA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BA88"))) PPC_WEAK_FUNC(sub_83B7BA88);
PPC_FUNC_IMPL(__imp__sub_83B7BA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30840
	ctx.r3.s64 = ctx.r11.s64 + 30840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BA94"))) PPC_WEAK_FUNC(sub_83B7BA94);
PPC_FUNC_IMPL(__imp__sub_83B7BA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BA98"))) PPC_WEAK_FUNC(sub_83B7BA98);
PPC_FUNC_IMPL(__imp__sub_83B7BA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30848
	ctx.r3.s64 = ctx.r11.s64 + 30848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BAA4"))) PPC_WEAK_FUNC(sub_83B7BAA4);
PPC_FUNC_IMPL(__imp__sub_83B7BAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BAA8"))) PPC_WEAK_FUNC(sub_83B7BAA8);
PPC_FUNC_IMPL(__imp__sub_83B7BAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30856
	ctx.r3.s64 = ctx.r11.s64 + 30856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BAB4"))) PPC_WEAK_FUNC(sub_83B7BAB4);
PPC_FUNC_IMPL(__imp__sub_83B7BAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BAB8"))) PPC_WEAK_FUNC(sub_83B7BAB8);
PPC_FUNC_IMPL(__imp__sub_83B7BAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30864
	ctx.r3.s64 = ctx.r11.s64 + 30864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BAC4"))) PPC_WEAK_FUNC(sub_83B7BAC4);
PPC_FUNC_IMPL(__imp__sub_83B7BAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BAC8"))) PPC_WEAK_FUNC(sub_83B7BAC8);
PPC_FUNC_IMPL(__imp__sub_83B7BAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30872
	ctx.r3.s64 = ctx.r11.s64 + 30872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BAD4"))) PPC_WEAK_FUNC(sub_83B7BAD4);
PPC_FUNC_IMPL(__imp__sub_83B7BAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BAD8"))) PPC_WEAK_FUNC(sub_83B7BAD8);
PPC_FUNC_IMPL(__imp__sub_83B7BAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30880
	ctx.r3.s64 = ctx.r11.s64 + 30880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BAE4"))) PPC_WEAK_FUNC(sub_83B7BAE4);
PPC_FUNC_IMPL(__imp__sub_83B7BAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BAE8"))) PPC_WEAK_FUNC(sub_83B7BAE8);
PPC_FUNC_IMPL(__imp__sub_83B7BAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30888
	ctx.r3.s64 = ctx.r11.s64 + 30888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BAF4"))) PPC_WEAK_FUNC(sub_83B7BAF4);
PPC_FUNC_IMPL(__imp__sub_83B7BAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BAF8"))) PPC_WEAK_FUNC(sub_83B7BAF8);
PPC_FUNC_IMPL(__imp__sub_83B7BAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30896
	ctx.r3.s64 = ctx.r11.s64 + 30896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BB04"))) PPC_WEAK_FUNC(sub_83B7BB04);
PPC_FUNC_IMPL(__imp__sub_83B7BB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BB08"))) PPC_WEAK_FUNC(sub_83B7BB08);
PPC_FUNC_IMPL(__imp__sub_83B7BB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30904
	ctx.r3.s64 = ctx.r11.s64 + 30904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BB14"))) PPC_WEAK_FUNC(sub_83B7BB14);
PPC_FUNC_IMPL(__imp__sub_83B7BB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BB18"))) PPC_WEAK_FUNC(sub_83B7BB18);
PPC_FUNC_IMPL(__imp__sub_83B7BB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30912
	ctx.r3.s64 = ctx.r11.s64 + 30912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BB24"))) PPC_WEAK_FUNC(sub_83B7BB24);
PPC_FUNC_IMPL(__imp__sub_83B7BB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BB28"))) PPC_WEAK_FUNC(sub_83B7BB28);
PPC_FUNC_IMPL(__imp__sub_83B7BB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30920
	ctx.r3.s64 = ctx.r11.s64 + 30920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7BB34"))) PPC_WEAK_FUNC(sub_83B7BB34);
PPC_FUNC_IMPL(__imp__sub_83B7BB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BB38"))) PPC_WEAK_FUNC(sub_83B7BB38);
PPC_FUNC_IMPL(__imp__sub_83B7BB38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14300
	ctx.r7.s64 = ctx.r8.s64 + -14300;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14300(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14300);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14300(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14300, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7BB60"))) PPC_WEAK_FUNC(sub_83B7BB60);
PPC_FUNC_IMPL(__imp__sub_83B7BB60) {
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
	// addi r3,r11,-14304
	ctx.r3.s64 = ctx.r11.s64 + -14304;
	// bl 0x83523120
	ctx.lr = 0x83B7BB78;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,30928
	ctx.r3.s64 = ctx.r10.s64 + 30928;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7BB84;
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

__attribute__((alias("__imp__sub_83B7BB94"))) PPC_WEAK_FUNC(sub_83B7BB94);
PPC_FUNC_IMPL(__imp__sub_83B7BB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7BB98"))) PPC_WEAK_FUNC(sub_83B7BB98);
PPC_FUNC_IMPL(__imp__sub_83B7BB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,30944
	ctx.r3.s64 = ctx.r11.s64 + 30944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

