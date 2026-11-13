#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C20134"))) PPC_WEAK_FUNC(sub_83C20134);
PPC_FUNC_IMPL(__imp__sub_83C20134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20138"))) PPC_WEAK_FUNC(sub_83C20138);
PPC_FUNC_IMPL(__imp__sub_83C20138) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17492
	ctx.r7.s64 = ctx.r8.s64 + -17492;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17492(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17492);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17492(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17492, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20160"))) PPC_WEAK_FUNC(sub_83C20160);
PPC_FUNC_IMPL(__imp__sub_83C20160) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,7580
	ctx.r6.s64 = ctx.r7.s64 + 7580;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7508(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7508);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17492(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17492);
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
	// std r9,7580(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7580, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C201A8"))) PPC_WEAK_FUNC(sub_83C201A8);
PPC_FUNC_IMPL(__imp__sub_83C201A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10352
	ctx.r3.s64 = ctx.r11.s64 + -10352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C201B4"))) PPC_WEAK_FUNC(sub_83C201B4);
PPC_FUNC_IMPL(__imp__sub_83C201B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C201B8"))) PPC_WEAK_FUNC(sub_83C201B8);
PPC_FUNC_IMPL(__imp__sub_83C201B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10344
	ctx.r3.s64 = ctx.r11.s64 + -10344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C201C4"))) PPC_WEAK_FUNC(sub_83C201C4);
PPC_FUNC_IMPL(__imp__sub_83C201C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C201C8"))) PPC_WEAK_FUNC(sub_83C201C8);
PPC_FUNC_IMPL(__imp__sub_83C201C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10336
	ctx.r3.s64 = ctx.r11.s64 + -10336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C201D4"))) PPC_WEAK_FUNC(sub_83C201D4);
PPC_FUNC_IMPL(__imp__sub_83C201D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C201D8"))) PPC_WEAK_FUNC(sub_83C201D8);
PPC_FUNC_IMPL(__imp__sub_83C201D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10328
	ctx.r3.s64 = ctx.r11.s64 + -10328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C201E4"))) PPC_WEAK_FUNC(sub_83C201E4);
PPC_FUNC_IMPL(__imp__sub_83C201E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C201E8"))) PPC_WEAK_FUNC(sub_83C201E8);
PPC_FUNC_IMPL(__imp__sub_83C201E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10320
	ctx.r3.s64 = ctx.r11.s64 + -10320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C201F4"))) PPC_WEAK_FUNC(sub_83C201F4);
PPC_FUNC_IMPL(__imp__sub_83C201F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C201F8"))) PPC_WEAK_FUNC(sub_83C201F8);
PPC_FUNC_IMPL(__imp__sub_83C201F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10312
	ctx.r3.s64 = ctx.r11.s64 + -10312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20204"))) PPC_WEAK_FUNC(sub_83C20204);
PPC_FUNC_IMPL(__imp__sub_83C20204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20208"))) PPC_WEAK_FUNC(sub_83C20208);
PPC_FUNC_IMPL(__imp__sub_83C20208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10304
	ctx.r3.s64 = ctx.r11.s64 + -10304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20214"))) PPC_WEAK_FUNC(sub_83C20214);
PPC_FUNC_IMPL(__imp__sub_83C20214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20218"))) PPC_WEAK_FUNC(sub_83C20218);
PPC_FUNC_IMPL(__imp__sub_83C20218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10296
	ctx.r3.s64 = ctx.r11.s64 + -10296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20224"))) PPC_WEAK_FUNC(sub_83C20224);
PPC_FUNC_IMPL(__imp__sub_83C20224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20228"))) PPC_WEAK_FUNC(sub_83C20228);
PPC_FUNC_IMPL(__imp__sub_83C20228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10288
	ctx.r3.s64 = ctx.r11.s64 + -10288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20234"))) PPC_WEAK_FUNC(sub_83C20234);
PPC_FUNC_IMPL(__imp__sub_83C20234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20238"))) PPC_WEAK_FUNC(sub_83C20238);
PPC_FUNC_IMPL(__imp__sub_83C20238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10280
	ctx.r3.s64 = ctx.r11.s64 + -10280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20244"))) PPC_WEAK_FUNC(sub_83C20244);
PPC_FUNC_IMPL(__imp__sub_83C20244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20248"))) PPC_WEAK_FUNC(sub_83C20248);
PPC_FUNC_IMPL(__imp__sub_83C20248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10272
	ctx.r3.s64 = ctx.r11.s64 + -10272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20254"))) PPC_WEAK_FUNC(sub_83C20254);
PPC_FUNC_IMPL(__imp__sub_83C20254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20258"))) PPC_WEAK_FUNC(sub_83C20258);
PPC_FUNC_IMPL(__imp__sub_83C20258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10264
	ctx.r3.s64 = ctx.r11.s64 + -10264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20264"))) PPC_WEAK_FUNC(sub_83C20264);
PPC_FUNC_IMPL(__imp__sub_83C20264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20268"))) PPC_WEAK_FUNC(sub_83C20268);
PPC_FUNC_IMPL(__imp__sub_83C20268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10256
	ctx.r3.s64 = ctx.r11.s64 + -10256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20274"))) PPC_WEAK_FUNC(sub_83C20274);
PPC_FUNC_IMPL(__imp__sub_83C20274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20278"))) PPC_WEAK_FUNC(sub_83C20278);
PPC_FUNC_IMPL(__imp__sub_83C20278) {
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
	// addi r3,r11,-17484
	ctx.r3.s64 = ctx.r11.s64 + -17484;
	// bl 0x83523120
	ctx.lr = 0x83C20290;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-10248
	ctx.r3.s64 = ctx.r10.s64 + -10248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2029C;
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

__attribute__((alias("__imp__sub_83C202AC"))) PPC_WEAK_FUNC(sub_83C202AC);
PPC_FUNC_IMPL(__imp__sub_83C202AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C202B0"))) PPC_WEAK_FUNC(sub_83C202B0);
PPC_FUNC_IMPL(__imp__sub_83C202B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17480
	ctx.r7.s64 = ctx.r8.s64 + -17480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17480(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C202D8"))) PPC_WEAK_FUNC(sub_83C202D8);
PPC_FUNC_IMPL(__imp__sub_83C202D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,7708
	ctx.r6.s64 = ctx.r7.s64 + 7708;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7636(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7636);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17480(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17480);
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
	// std r9,7708(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7708, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20320"))) PPC_WEAK_FUNC(sub_83C20320);
PPC_FUNC_IMPL(__imp__sub_83C20320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10232
	ctx.r3.s64 = ctx.r11.s64 + -10232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2032C"))) PPC_WEAK_FUNC(sub_83C2032C);
PPC_FUNC_IMPL(__imp__sub_83C2032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20330"))) PPC_WEAK_FUNC(sub_83C20330);
PPC_FUNC_IMPL(__imp__sub_83C20330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10224
	ctx.r3.s64 = ctx.r11.s64 + -10224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2033C"))) PPC_WEAK_FUNC(sub_83C2033C);
PPC_FUNC_IMPL(__imp__sub_83C2033C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20340"))) PPC_WEAK_FUNC(sub_83C20340);
PPC_FUNC_IMPL(__imp__sub_83C20340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10216
	ctx.r3.s64 = ctx.r11.s64 + -10216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2034C"))) PPC_WEAK_FUNC(sub_83C2034C);
PPC_FUNC_IMPL(__imp__sub_83C2034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20350"))) PPC_WEAK_FUNC(sub_83C20350);
PPC_FUNC_IMPL(__imp__sub_83C20350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10208
	ctx.r3.s64 = ctx.r11.s64 + -10208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2035C"))) PPC_WEAK_FUNC(sub_83C2035C);
PPC_FUNC_IMPL(__imp__sub_83C2035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20360"))) PPC_WEAK_FUNC(sub_83C20360);
PPC_FUNC_IMPL(__imp__sub_83C20360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10200
	ctx.r3.s64 = ctx.r11.s64 + -10200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2036C"))) PPC_WEAK_FUNC(sub_83C2036C);
PPC_FUNC_IMPL(__imp__sub_83C2036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20370"))) PPC_WEAK_FUNC(sub_83C20370);
PPC_FUNC_IMPL(__imp__sub_83C20370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10192
	ctx.r3.s64 = ctx.r11.s64 + -10192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2037C"))) PPC_WEAK_FUNC(sub_83C2037C);
PPC_FUNC_IMPL(__imp__sub_83C2037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20380"))) PPC_WEAK_FUNC(sub_83C20380);
PPC_FUNC_IMPL(__imp__sub_83C20380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10184
	ctx.r3.s64 = ctx.r11.s64 + -10184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2038C"))) PPC_WEAK_FUNC(sub_83C2038C);
PPC_FUNC_IMPL(__imp__sub_83C2038C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20390"))) PPC_WEAK_FUNC(sub_83C20390);
PPC_FUNC_IMPL(__imp__sub_83C20390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10176
	ctx.r3.s64 = ctx.r11.s64 + -10176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2039C"))) PPC_WEAK_FUNC(sub_83C2039C);
PPC_FUNC_IMPL(__imp__sub_83C2039C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C203A0"))) PPC_WEAK_FUNC(sub_83C203A0);
PPC_FUNC_IMPL(__imp__sub_83C203A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10168
	ctx.r3.s64 = ctx.r11.s64 + -10168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C203AC"))) PPC_WEAK_FUNC(sub_83C203AC);
PPC_FUNC_IMPL(__imp__sub_83C203AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C203B0"))) PPC_WEAK_FUNC(sub_83C203B0);
PPC_FUNC_IMPL(__imp__sub_83C203B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10160
	ctx.r3.s64 = ctx.r11.s64 + -10160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C203BC"))) PPC_WEAK_FUNC(sub_83C203BC);
PPC_FUNC_IMPL(__imp__sub_83C203BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C203C0"))) PPC_WEAK_FUNC(sub_83C203C0);
PPC_FUNC_IMPL(__imp__sub_83C203C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10152
	ctx.r3.s64 = ctx.r11.s64 + -10152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C203CC"))) PPC_WEAK_FUNC(sub_83C203CC);
PPC_FUNC_IMPL(__imp__sub_83C203CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C203D0"))) PPC_WEAK_FUNC(sub_83C203D0);
PPC_FUNC_IMPL(__imp__sub_83C203D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10144
	ctx.r3.s64 = ctx.r11.s64 + -10144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C203DC"))) PPC_WEAK_FUNC(sub_83C203DC);
PPC_FUNC_IMPL(__imp__sub_83C203DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C203E0"))) PPC_WEAK_FUNC(sub_83C203E0);
PPC_FUNC_IMPL(__imp__sub_83C203E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10136
	ctx.r3.s64 = ctx.r11.s64 + -10136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C203EC"))) PPC_WEAK_FUNC(sub_83C203EC);
PPC_FUNC_IMPL(__imp__sub_83C203EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C203F0"))) PPC_WEAK_FUNC(sub_83C203F0);
PPC_FUNC_IMPL(__imp__sub_83C203F0) {
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
	// addi r3,r11,-17472
	ctx.r3.s64 = ctx.r11.s64 + -17472;
	// bl 0x83523120
	ctx.lr = 0x83C20408;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-10128
	ctx.r3.s64 = ctx.r10.s64 + -10128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C20414;
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

__attribute__((alias("__imp__sub_83C20424"))) PPC_WEAK_FUNC(sub_83C20424);
PPC_FUNC_IMPL(__imp__sub_83C20424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20428"))) PPC_WEAK_FUNC(sub_83C20428);
PPC_FUNC_IMPL(__imp__sub_83C20428) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17468
	ctx.r7.s64 = ctx.r8.s64 + -17468;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17468(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17468);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17468(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17468, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20450"))) PPC_WEAK_FUNC(sub_83C20450);
PPC_FUNC_IMPL(__imp__sub_83C20450) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,7836
	ctx.r6.s64 = ctx.r7.s64 + 7836;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7764(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7764);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17468(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17468);
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
	// std r9,7836(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7836, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20498"))) PPC_WEAK_FUNC(sub_83C20498);
PPC_FUNC_IMPL(__imp__sub_83C20498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10112
	ctx.r3.s64 = ctx.r11.s64 + -10112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C204A4"))) PPC_WEAK_FUNC(sub_83C204A4);
PPC_FUNC_IMPL(__imp__sub_83C204A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C204A8"))) PPC_WEAK_FUNC(sub_83C204A8);
PPC_FUNC_IMPL(__imp__sub_83C204A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10104
	ctx.r3.s64 = ctx.r11.s64 + -10104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C204B4"))) PPC_WEAK_FUNC(sub_83C204B4);
PPC_FUNC_IMPL(__imp__sub_83C204B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C204B8"))) PPC_WEAK_FUNC(sub_83C204B8);
PPC_FUNC_IMPL(__imp__sub_83C204B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10096
	ctx.r3.s64 = ctx.r11.s64 + -10096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C204C4"))) PPC_WEAK_FUNC(sub_83C204C4);
PPC_FUNC_IMPL(__imp__sub_83C204C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C204C8"))) PPC_WEAK_FUNC(sub_83C204C8);
PPC_FUNC_IMPL(__imp__sub_83C204C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10088
	ctx.r3.s64 = ctx.r11.s64 + -10088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C204D4"))) PPC_WEAK_FUNC(sub_83C204D4);
PPC_FUNC_IMPL(__imp__sub_83C204D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C204D8"))) PPC_WEAK_FUNC(sub_83C204D8);
PPC_FUNC_IMPL(__imp__sub_83C204D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10080
	ctx.r3.s64 = ctx.r11.s64 + -10080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C204E4"))) PPC_WEAK_FUNC(sub_83C204E4);
PPC_FUNC_IMPL(__imp__sub_83C204E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C204E8"))) PPC_WEAK_FUNC(sub_83C204E8);
PPC_FUNC_IMPL(__imp__sub_83C204E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10072
	ctx.r3.s64 = ctx.r11.s64 + -10072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C204F4"))) PPC_WEAK_FUNC(sub_83C204F4);
PPC_FUNC_IMPL(__imp__sub_83C204F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C204F8"))) PPC_WEAK_FUNC(sub_83C204F8);
PPC_FUNC_IMPL(__imp__sub_83C204F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10064
	ctx.r3.s64 = ctx.r11.s64 + -10064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20504"))) PPC_WEAK_FUNC(sub_83C20504);
PPC_FUNC_IMPL(__imp__sub_83C20504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20508"))) PPC_WEAK_FUNC(sub_83C20508);
PPC_FUNC_IMPL(__imp__sub_83C20508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10056
	ctx.r3.s64 = ctx.r11.s64 + -10056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20514"))) PPC_WEAK_FUNC(sub_83C20514);
PPC_FUNC_IMPL(__imp__sub_83C20514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20518"))) PPC_WEAK_FUNC(sub_83C20518);
PPC_FUNC_IMPL(__imp__sub_83C20518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10048
	ctx.r3.s64 = ctx.r11.s64 + -10048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20524"))) PPC_WEAK_FUNC(sub_83C20524);
PPC_FUNC_IMPL(__imp__sub_83C20524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20528"))) PPC_WEAK_FUNC(sub_83C20528);
PPC_FUNC_IMPL(__imp__sub_83C20528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10040
	ctx.r3.s64 = ctx.r11.s64 + -10040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20534"))) PPC_WEAK_FUNC(sub_83C20534);
PPC_FUNC_IMPL(__imp__sub_83C20534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20538"))) PPC_WEAK_FUNC(sub_83C20538);
PPC_FUNC_IMPL(__imp__sub_83C20538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10032
	ctx.r3.s64 = ctx.r11.s64 + -10032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20544"))) PPC_WEAK_FUNC(sub_83C20544);
PPC_FUNC_IMPL(__imp__sub_83C20544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20548"))) PPC_WEAK_FUNC(sub_83C20548);
PPC_FUNC_IMPL(__imp__sub_83C20548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10024
	ctx.r3.s64 = ctx.r11.s64 + -10024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20554"))) PPC_WEAK_FUNC(sub_83C20554);
PPC_FUNC_IMPL(__imp__sub_83C20554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20558"))) PPC_WEAK_FUNC(sub_83C20558);
PPC_FUNC_IMPL(__imp__sub_83C20558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10016
	ctx.r3.s64 = ctx.r11.s64 + -10016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20564"))) PPC_WEAK_FUNC(sub_83C20564);
PPC_FUNC_IMPL(__imp__sub_83C20564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20568"))) PPC_WEAK_FUNC(sub_83C20568);
PPC_FUNC_IMPL(__imp__sub_83C20568) {
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
	// addi r3,r11,-17460
	ctx.r3.s64 = ctx.r11.s64 + -17460;
	// bl 0x83523120
	ctx.lr = 0x83C20580;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-10008
	ctx.r3.s64 = ctx.r10.s64 + -10008;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2058C;
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

__attribute__((alias("__imp__sub_83C2059C"))) PPC_WEAK_FUNC(sub_83C2059C);
PPC_FUNC_IMPL(__imp__sub_83C2059C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C205A0"))) PPC_WEAK_FUNC(sub_83C205A0);
PPC_FUNC_IMPL(__imp__sub_83C205A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17456
	ctx.r7.s64 = ctx.r8.s64 + -17456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17456(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C205C8"))) PPC_WEAK_FUNC(sub_83C205C8);
PPC_FUNC_IMPL(__imp__sub_83C205C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,7964
	ctx.r6.s64 = ctx.r7.s64 + 7964;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7892(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7892);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17456);
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
	// std r9,7964(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7964, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20610"))) PPC_WEAK_FUNC(sub_83C20610);
PPC_FUNC_IMPL(__imp__sub_83C20610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9992
	ctx.r3.s64 = ctx.r11.s64 + -9992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2061C"))) PPC_WEAK_FUNC(sub_83C2061C);
PPC_FUNC_IMPL(__imp__sub_83C2061C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20620"))) PPC_WEAK_FUNC(sub_83C20620);
PPC_FUNC_IMPL(__imp__sub_83C20620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9984
	ctx.r3.s64 = ctx.r11.s64 + -9984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2062C"))) PPC_WEAK_FUNC(sub_83C2062C);
PPC_FUNC_IMPL(__imp__sub_83C2062C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20630"))) PPC_WEAK_FUNC(sub_83C20630);
PPC_FUNC_IMPL(__imp__sub_83C20630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9976
	ctx.r3.s64 = ctx.r11.s64 + -9976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2063C"))) PPC_WEAK_FUNC(sub_83C2063C);
PPC_FUNC_IMPL(__imp__sub_83C2063C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20640"))) PPC_WEAK_FUNC(sub_83C20640);
PPC_FUNC_IMPL(__imp__sub_83C20640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9968
	ctx.r3.s64 = ctx.r11.s64 + -9968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2064C"))) PPC_WEAK_FUNC(sub_83C2064C);
PPC_FUNC_IMPL(__imp__sub_83C2064C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20650"))) PPC_WEAK_FUNC(sub_83C20650);
PPC_FUNC_IMPL(__imp__sub_83C20650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9960
	ctx.r3.s64 = ctx.r11.s64 + -9960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2065C"))) PPC_WEAK_FUNC(sub_83C2065C);
PPC_FUNC_IMPL(__imp__sub_83C2065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20660"))) PPC_WEAK_FUNC(sub_83C20660);
PPC_FUNC_IMPL(__imp__sub_83C20660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9952
	ctx.r3.s64 = ctx.r11.s64 + -9952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2066C"))) PPC_WEAK_FUNC(sub_83C2066C);
PPC_FUNC_IMPL(__imp__sub_83C2066C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20670"))) PPC_WEAK_FUNC(sub_83C20670);
PPC_FUNC_IMPL(__imp__sub_83C20670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9944
	ctx.r3.s64 = ctx.r11.s64 + -9944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2067C"))) PPC_WEAK_FUNC(sub_83C2067C);
PPC_FUNC_IMPL(__imp__sub_83C2067C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20680"))) PPC_WEAK_FUNC(sub_83C20680);
PPC_FUNC_IMPL(__imp__sub_83C20680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9936
	ctx.r3.s64 = ctx.r11.s64 + -9936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2068C"))) PPC_WEAK_FUNC(sub_83C2068C);
PPC_FUNC_IMPL(__imp__sub_83C2068C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20690"))) PPC_WEAK_FUNC(sub_83C20690);
PPC_FUNC_IMPL(__imp__sub_83C20690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9928
	ctx.r3.s64 = ctx.r11.s64 + -9928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2069C"))) PPC_WEAK_FUNC(sub_83C2069C);
PPC_FUNC_IMPL(__imp__sub_83C2069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C206A0"))) PPC_WEAK_FUNC(sub_83C206A0);
PPC_FUNC_IMPL(__imp__sub_83C206A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9920
	ctx.r3.s64 = ctx.r11.s64 + -9920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C206AC"))) PPC_WEAK_FUNC(sub_83C206AC);
PPC_FUNC_IMPL(__imp__sub_83C206AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C206B0"))) PPC_WEAK_FUNC(sub_83C206B0);
PPC_FUNC_IMPL(__imp__sub_83C206B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9912
	ctx.r3.s64 = ctx.r11.s64 + -9912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C206BC"))) PPC_WEAK_FUNC(sub_83C206BC);
PPC_FUNC_IMPL(__imp__sub_83C206BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C206C0"))) PPC_WEAK_FUNC(sub_83C206C0);
PPC_FUNC_IMPL(__imp__sub_83C206C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9904
	ctx.r3.s64 = ctx.r11.s64 + -9904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C206CC"))) PPC_WEAK_FUNC(sub_83C206CC);
PPC_FUNC_IMPL(__imp__sub_83C206CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C206D0"))) PPC_WEAK_FUNC(sub_83C206D0);
PPC_FUNC_IMPL(__imp__sub_83C206D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9896
	ctx.r3.s64 = ctx.r11.s64 + -9896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C206DC"))) PPC_WEAK_FUNC(sub_83C206DC);
PPC_FUNC_IMPL(__imp__sub_83C206DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C206E0"))) PPC_WEAK_FUNC(sub_83C206E0);
PPC_FUNC_IMPL(__imp__sub_83C206E0) {
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
	// addi r3,r11,-17448
	ctx.r3.s64 = ctx.r11.s64 + -17448;
	// bl 0x83523120
	ctx.lr = 0x83C206F8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-9888
	ctx.r3.s64 = ctx.r10.s64 + -9888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C20704;
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

__attribute__((alias("__imp__sub_83C20714"))) PPC_WEAK_FUNC(sub_83C20714);
PPC_FUNC_IMPL(__imp__sub_83C20714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20718"))) PPC_WEAK_FUNC(sub_83C20718);
PPC_FUNC_IMPL(__imp__sub_83C20718) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17444
	ctx.r7.s64 = ctx.r8.s64 + -17444;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17444(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17444);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17444(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17444, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20740"))) PPC_WEAK_FUNC(sub_83C20740);
PPC_FUNC_IMPL(__imp__sub_83C20740) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,8092
	ctx.r6.s64 = ctx.r7.s64 + 8092;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8020(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8020);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17444(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17444);
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
	// std r9,8092(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8092, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20788"))) PPC_WEAK_FUNC(sub_83C20788);
PPC_FUNC_IMPL(__imp__sub_83C20788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9872
	ctx.r3.s64 = ctx.r11.s64 + -9872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20794"))) PPC_WEAK_FUNC(sub_83C20794);
PPC_FUNC_IMPL(__imp__sub_83C20794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20798"))) PPC_WEAK_FUNC(sub_83C20798);
PPC_FUNC_IMPL(__imp__sub_83C20798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9864
	ctx.r3.s64 = ctx.r11.s64 + -9864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C207A4"))) PPC_WEAK_FUNC(sub_83C207A4);
PPC_FUNC_IMPL(__imp__sub_83C207A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C207A8"))) PPC_WEAK_FUNC(sub_83C207A8);
PPC_FUNC_IMPL(__imp__sub_83C207A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9856
	ctx.r3.s64 = ctx.r11.s64 + -9856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C207B4"))) PPC_WEAK_FUNC(sub_83C207B4);
PPC_FUNC_IMPL(__imp__sub_83C207B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C207B8"))) PPC_WEAK_FUNC(sub_83C207B8);
PPC_FUNC_IMPL(__imp__sub_83C207B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9848
	ctx.r3.s64 = ctx.r11.s64 + -9848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C207C4"))) PPC_WEAK_FUNC(sub_83C207C4);
PPC_FUNC_IMPL(__imp__sub_83C207C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C207C8"))) PPC_WEAK_FUNC(sub_83C207C8);
PPC_FUNC_IMPL(__imp__sub_83C207C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9840
	ctx.r3.s64 = ctx.r11.s64 + -9840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C207D4"))) PPC_WEAK_FUNC(sub_83C207D4);
PPC_FUNC_IMPL(__imp__sub_83C207D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C207D8"))) PPC_WEAK_FUNC(sub_83C207D8);
PPC_FUNC_IMPL(__imp__sub_83C207D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9832
	ctx.r3.s64 = ctx.r11.s64 + -9832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C207E4"))) PPC_WEAK_FUNC(sub_83C207E4);
PPC_FUNC_IMPL(__imp__sub_83C207E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C207E8"))) PPC_WEAK_FUNC(sub_83C207E8);
PPC_FUNC_IMPL(__imp__sub_83C207E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9824
	ctx.r3.s64 = ctx.r11.s64 + -9824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C207F4"))) PPC_WEAK_FUNC(sub_83C207F4);
PPC_FUNC_IMPL(__imp__sub_83C207F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C207F8"))) PPC_WEAK_FUNC(sub_83C207F8);
PPC_FUNC_IMPL(__imp__sub_83C207F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9816
	ctx.r3.s64 = ctx.r11.s64 + -9816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20804"))) PPC_WEAK_FUNC(sub_83C20804);
PPC_FUNC_IMPL(__imp__sub_83C20804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20808"))) PPC_WEAK_FUNC(sub_83C20808);
PPC_FUNC_IMPL(__imp__sub_83C20808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9808
	ctx.r3.s64 = ctx.r11.s64 + -9808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20814"))) PPC_WEAK_FUNC(sub_83C20814);
PPC_FUNC_IMPL(__imp__sub_83C20814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20818"))) PPC_WEAK_FUNC(sub_83C20818);
PPC_FUNC_IMPL(__imp__sub_83C20818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9800
	ctx.r3.s64 = ctx.r11.s64 + -9800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20824"))) PPC_WEAK_FUNC(sub_83C20824);
PPC_FUNC_IMPL(__imp__sub_83C20824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20828"))) PPC_WEAK_FUNC(sub_83C20828);
PPC_FUNC_IMPL(__imp__sub_83C20828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9792
	ctx.r3.s64 = ctx.r11.s64 + -9792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20834"))) PPC_WEAK_FUNC(sub_83C20834);
PPC_FUNC_IMPL(__imp__sub_83C20834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20838"))) PPC_WEAK_FUNC(sub_83C20838);
PPC_FUNC_IMPL(__imp__sub_83C20838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9784
	ctx.r3.s64 = ctx.r11.s64 + -9784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20844"))) PPC_WEAK_FUNC(sub_83C20844);
PPC_FUNC_IMPL(__imp__sub_83C20844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20848"))) PPC_WEAK_FUNC(sub_83C20848);
PPC_FUNC_IMPL(__imp__sub_83C20848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9776
	ctx.r3.s64 = ctx.r11.s64 + -9776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20854"))) PPC_WEAK_FUNC(sub_83C20854);
PPC_FUNC_IMPL(__imp__sub_83C20854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20858"))) PPC_WEAK_FUNC(sub_83C20858);
PPC_FUNC_IMPL(__imp__sub_83C20858) {
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
	// addi r3,r11,-17436
	ctx.r3.s64 = ctx.r11.s64 + -17436;
	// bl 0x83523120
	ctx.lr = 0x83C20870;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-9768
	ctx.r3.s64 = ctx.r10.s64 + -9768;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2087C;
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

__attribute__((alias("__imp__sub_83C2088C"))) PPC_WEAK_FUNC(sub_83C2088C);
PPC_FUNC_IMPL(__imp__sub_83C2088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20890"))) PPC_WEAK_FUNC(sub_83C20890);
PPC_FUNC_IMPL(__imp__sub_83C20890) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17432
	ctx.r7.s64 = ctx.r8.s64 + -17432;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17432(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17432);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17432(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17432, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C208B8"))) PPC_WEAK_FUNC(sub_83C208B8);
PPC_FUNC_IMPL(__imp__sub_83C208B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,8220
	ctx.r6.s64 = ctx.r7.s64 + 8220;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8148(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8148);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17432(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17432);
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
	// std r9,8220(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8220, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20900"))) PPC_WEAK_FUNC(sub_83C20900);
PPC_FUNC_IMPL(__imp__sub_83C20900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9752
	ctx.r3.s64 = ctx.r11.s64 + -9752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2090C"))) PPC_WEAK_FUNC(sub_83C2090C);
PPC_FUNC_IMPL(__imp__sub_83C2090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20910"))) PPC_WEAK_FUNC(sub_83C20910);
PPC_FUNC_IMPL(__imp__sub_83C20910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9744
	ctx.r3.s64 = ctx.r11.s64 + -9744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2091C"))) PPC_WEAK_FUNC(sub_83C2091C);
PPC_FUNC_IMPL(__imp__sub_83C2091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20920"))) PPC_WEAK_FUNC(sub_83C20920);
PPC_FUNC_IMPL(__imp__sub_83C20920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9736
	ctx.r3.s64 = ctx.r11.s64 + -9736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2092C"))) PPC_WEAK_FUNC(sub_83C2092C);
PPC_FUNC_IMPL(__imp__sub_83C2092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20930"))) PPC_WEAK_FUNC(sub_83C20930);
PPC_FUNC_IMPL(__imp__sub_83C20930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9728
	ctx.r3.s64 = ctx.r11.s64 + -9728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2093C"))) PPC_WEAK_FUNC(sub_83C2093C);
PPC_FUNC_IMPL(__imp__sub_83C2093C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20940"))) PPC_WEAK_FUNC(sub_83C20940);
PPC_FUNC_IMPL(__imp__sub_83C20940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9720
	ctx.r3.s64 = ctx.r11.s64 + -9720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2094C"))) PPC_WEAK_FUNC(sub_83C2094C);
PPC_FUNC_IMPL(__imp__sub_83C2094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20950"))) PPC_WEAK_FUNC(sub_83C20950);
PPC_FUNC_IMPL(__imp__sub_83C20950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9712
	ctx.r3.s64 = ctx.r11.s64 + -9712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2095C"))) PPC_WEAK_FUNC(sub_83C2095C);
PPC_FUNC_IMPL(__imp__sub_83C2095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20960"))) PPC_WEAK_FUNC(sub_83C20960);
PPC_FUNC_IMPL(__imp__sub_83C20960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9704
	ctx.r3.s64 = ctx.r11.s64 + -9704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2096C"))) PPC_WEAK_FUNC(sub_83C2096C);
PPC_FUNC_IMPL(__imp__sub_83C2096C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20970"))) PPC_WEAK_FUNC(sub_83C20970);
PPC_FUNC_IMPL(__imp__sub_83C20970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9696
	ctx.r3.s64 = ctx.r11.s64 + -9696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2097C"))) PPC_WEAK_FUNC(sub_83C2097C);
PPC_FUNC_IMPL(__imp__sub_83C2097C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20980"))) PPC_WEAK_FUNC(sub_83C20980);
PPC_FUNC_IMPL(__imp__sub_83C20980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9688
	ctx.r3.s64 = ctx.r11.s64 + -9688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2098C"))) PPC_WEAK_FUNC(sub_83C2098C);
PPC_FUNC_IMPL(__imp__sub_83C2098C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20990"))) PPC_WEAK_FUNC(sub_83C20990);
PPC_FUNC_IMPL(__imp__sub_83C20990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9680
	ctx.r3.s64 = ctx.r11.s64 + -9680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2099C"))) PPC_WEAK_FUNC(sub_83C2099C);
PPC_FUNC_IMPL(__imp__sub_83C2099C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C209A0"))) PPC_WEAK_FUNC(sub_83C209A0);
PPC_FUNC_IMPL(__imp__sub_83C209A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9672
	ctx.r3.s64 = ctx.r11.s64 + -9672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C209AC"))) PPC_WEAK_FUNC(sub_83C209AC);
PPC_FUNC_IMPL(__imp__sub_83C209AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C209B0"))) PPC_WEAK_FUNC(sub_83C209B0);
PPC_FUNC_IMPL(__imp__sub_83C209B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9664
	ctx.r3.s64 = ctx.r11.s64 + -9664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C209BC"))) PPC_WEAK_FUNC(sub_83C209BC);
PPC_FUNC_IMPL(__imp__sub_83C209BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C209C0"))) PPC_WEAK_FUNC(sub_83C209C0);
PPC_FUNC_IMPL(__imp__sub_83C209C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9656
	ctx.r3.s64 = ctx.r11.s64 + -9656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C209CC"))) PPC_WEAK_FUNC(sub_83C209CC);
PPC_FUNC_IMPL(__imp__sub_83C209CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C209D0"))) PPC_WEAK_FUNC(sub_83C209D0);
PPC_FUNC_IMPL(__imp__sub_83C209D0) {
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
	// addi r3,r11,-17424
	ctx.r3.s64 = ctx.r11.s64 + -17424;
	// bl 0x83523120
	ctx.lr = 0x83C209E8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-9648
	ctx.r3.s64 = ctx.r10.s64 + -9648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C209F4;
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

__attribute__((alias("__imp__sub_83C20A04"))) PPC_WEAK_FUNC(sub_83C20A04);
PPC_FUNC_IMPL(__imp__sub_83C20A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20A08"))) PPC_WEAK_FUNC(sub_83C20A08);
PPC_FUNC_IMPL(__imp__sub_83C20A08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17420
	ctx.r7.s64 = ctx.r8.s64 + -17420;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17420);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17420(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17420, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20A30"))) PPC_WEAK_FUNC(sub_83C20A30);
PPC_FUNC_IMPL(__imp__sub_83C20A30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,8348
	ctx.r6.s64 = ctx.r7.s64 + 8348;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8276(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8276);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17420(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17420);
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
	// std r9,8348(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8348, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20A78"))) PPC_WEAK_FUNC(sub_83C20A78);
PPC_FUNC_IMPL(__imp__sub_83C20A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9632
	ctx.r3.s64 = ctx.r11.s64 + -9632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20A84"))) PPC_WEAK_FUNC(sub_83C20A84);
PPC_FUNC_IMPL(__imp__sub_83C20A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20A88"))) PPC_WEAK_FUNC(sub_83C20A88);
PPC_FUNC_IMPL(__imp__sub_83C20A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9624
	ctx.r3.s64 = ctx.r11.s64 + -9624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20A94"))) PPC_WEAK_FUNC(sub_83C20A94);
PPC_FUNC_IMPL(__imp__sub_83C20A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20A98"))) PPC_WEAK_FUNC(sub_83C20A98);
PPC_FUNC_IMPL(__imp__sub_83C20A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9616
	ctx.r3.s64 = ctx.r11.s64 + -9616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20AA4"))) PPC_WEAK_FUNC(sub_83C20AA4);
PPC_FUNC_IMPL(__imp__sub_83C20AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20AA8"))) PPC_WEAK_FUNC(sub_83C20AA8);
PPC_FUNC_IMPL(__imp__sub_83C20AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9608
	ctx.r3.s64 = ctx.r11.s64 + -9608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20AB4"))) PPC_WEAK_FUNC(sub_83C20AB4);
PPC_FUNC_IMPL(__imp__sub_83C20AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20AB8"))) PPC_WEAK_FUNC(sub_83C20AB8);
PPC_FUNC_IMPL(__imp__sub_83C20AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9600
	ctx.r3.s64 = ctx.r11.s64 + -9600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20AC4"))) PPC_WEAK_FUNC(sub_83C20AC4);
PPC_FUNC_IMPL(__imp__sub_83C20AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20AC8"))) PPC_WEAK_FUNC(sub_83C20AC8);
PPC_FUNC_IMPL(__imp__sub_83C20AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9592
	ctx.r3.s64 = ctx.r11.s64 + -9592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20AD4"))) PPC_WEAK_FUNC(sub_83C20AD4);
PPC_FUNC_IMPL(__imp__sub_83C20AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20AD8"))) PPC_WEAK_FUNC(sub_83C20AD8);
PPC_FUNC_IMPL(__imp__sub_83C20AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9584
	ctx.r3.s64 = ctx.r11.s64 + -9584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20AE4"))) PPC_WEAK_FUNC(sub_83C20AE4);
PPC_FUNC_IMPL(__imp__sub_83C20AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20AE8"))) PPC_WEAK_FUNC(sub_83C20AE8);
PPC_FUNC_IMPL(__imp__sub_83C20AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9576
	ctx.r3.s64 = ctx.r11.s64 + -9576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20AF4"))) PPC_WEAK_FUNC(sub_83C20AF4);
PPC_FUNC_IMPL(__imp__sub_83C20AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20AF8"))) PPC_WEAK_FUNC(sub_83C20AF8);
PPC_FUNC_IMPL(__imp__sub_83C20AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9568
	ctx.r3.s64 = ctx.r11.s64 + -9568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20B04"))) PPC_WEAK_FUNC(sub_83C20B04);
PPC_FUNC_IMPL(__imp__sub_83C20B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20B08"))) PPC_WEAK_FUNC(sub_83C20B08);
PPC_FUNC_IMPL(__imp__sub_83C20B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9560
	ctx.r3.s64 = ctx.r11.s64 + -9560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20B14"))) PPC_WEAK_FUNC(sub_83C20B14);
PPC_FUNC_IMPL(__imp__sub_83C20B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20B18"))) PPC_WEAK_FUNC(sub_83C20B18);
PPC_FUNC_IMPL(__imp__sub_83C20B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9552
	ctx.r3.s64 = ctx.r11.s64 + -9552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20B24"))) PPC_WEAK_FUNC(sub_83C20B24);
PPC_FUNC_IMPL(__imp__sub_83C20B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20B28"))) PPC_WEAK_FUNC(sub_83C20B28);
PPC_FUNC_IMPL(__imp__sub_83C20B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9544
	ctx.r3.s64 = ctx.r11.s64 + -9544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20B34"))) PPC_WEAK_FUNC(sub_83C20B34);
PPC_FUNC_IMPL(__imp__sub_83C20B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20B38"))) PPC_WEAK_FUNC(sub_83C20B38);
PPC_FUNC_IMPL(__imp__sub_83C20B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9536
	ctx.r3.s64 = ctx.r11.s64 + -9536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20B44"))) PPC_WEAK_FUNC(sub_83C20B44);
PPC_FUNC_IMPL(__imp__sub_83C20B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20B48"))) PPC_WEAK_FUNC(sub_83C20B48);
PPC_FUNC_IMPL(__imp__sub_83C20B48) {
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
	// addi r3,r11,-17412
	ctx.r3.s64 = ctx.r11.s64 + -17412;
	// bl 0x83523120
	ctx.lr = 0x83C20B60;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-9528
	ctx.r3.s64 = ctx.r10.s64 + -9528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C20B6C;
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

__attribute__((alias("__imp__sub_83C20B7C"))) PPC_WEAK_FUNC(sub_83C20B7C);
PPC_FUNC_IMPL(__imp__sub_83C20B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20B80"))) PPC_WEAK_FUNC(sub_83C20B80);
PPC_FUNC_IMPL(__imp__sub_83C20B80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17408
	ctx.r7.s64 = ctx.r8.s64 + -17408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17408);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17408(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17408, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20BA8"))) PPC_WEAK_FUNC(sub_83C20BA8);
PPC_FUNC_IMPL(__imp__sub_83C20BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,8476
	ctx.r6.s64 = ctx.r7.s64 + 8476;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8404(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8404);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17408(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17408);
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
	// std r9,8476(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8476, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20BF0"))) PPC_WEAK_FUNC(sub_83C20BF0);
PPC_FUNC_IMPL(__imp__sub_83C20BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9512
	ctx.r3.s64 = ctx.r11.s64 + -9512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20BFC"))) PPC_WEAK_FUNC(sub_83C20BFC);
PPC_FUNC_IMPL(__imp__sub_83C20BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20C00"))) PPC_WEAK_FUNC(sub_83C20C00);
PPC_FUNC_IMPL(__imp__sub_83C20C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9504
	ctx.r3.s64 = ctx.r11.s64 + -9504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20C0C"))) PPC_WEAK_FUNC(sub_83C20C0C);
PPC_FUNC_IMPL(__imp__sub_83C20C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20C10"))) PPC_WEAK_FUNC(sub_83C20C10);
PPC_FUNC_IMPL(__imp__sub_83C20C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9496
	ctx.r3.s64 = ctx.r11.s64 + -9496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20C1C"))) PPC_WEAK_FUNC(sub_83C20C1C);
PPC_FUNC_IMPL(__imp__sub_83C20C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20C20"))) PPC_WEAK_FUNC(sub_83C20C20);
PPC_FUNC_IMPL(__imp__sub_83C20C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9488
	ctx.r3.s64 = ctx.r11.s64 + -9488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20C2C"))) PPC_WEAK_FUNC(sub_83C20C2C);
PPC_FUNC_IMPL(__imp__sub_83C20C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20C30"))) PPC_WEAK_FUNC(sub_83C20C30);
PPC_FUNC_IMPL(__imp__sub_83C20C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9480
	ctx.r3.s64 = ctx.r11.s64 + -9480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20C3C"))) PPC_WEAK_FUNC(sub_83C20C3C);
PPC_FUNC_IMPL(__imp__sub_83C20C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20C40"))) PPC_WEAK_FUNC(sub_83C20C40);
PPC_FUNC_IMPL(__imp__sub_83C20C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9472
	ctx.r3.s64 = ctx.r11.s64 + -9472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20C4C"))) PPC_WEAK_FUNC(sub_83C20C4C);
PPC_FUNC_IMPL(__imp__sub_83C20C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20C50"))) PPC_WEAK_FUNC(sub_83C20C50);
PPC_FUNC_IMPL(__imp__sub_83C20C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9464
	ctx.r3.s64 = ctx.r11.s64 + -9464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20C5C"))) PPC_WEAK_FUNC(sub_83C20C5C);
PPC_FUNC_IMPL(__imp__sub_83C20C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20C60"))) PPC_WEAK_FUNC(sub_83C20C60);
PPC_FUNC_IMPL(__imp__sub_83C20C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9456
	ctx.r3.s64 = ctx.r11.s64 + -9456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20C6C"))) PPC_WEAK_FUNC(sub_83C20C6C);
PPC_FUNC_IMPL(__imp__sub_83C20C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20C70"))) PPC_WEAK_FUNC(sub_83C20C70);
PPC_FUNC_IMPL(__imp__sub_83C20C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9448
	ctx.r3.s64 = ctx.r11.s64 + -9448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20C7C"))) PPC_WEAK_FUNC(sub_83C20C7C);
PPC_FUNC_IMPL(__imp__sub_83C20C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20C80"))) PPC_WEAK_FUNC(sub_83C20C80);
PPC_FUNC_IMPL(__imp__sub_83C20C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9440
	ctx.r3.s64 = ctx.r11.s64 + -9440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20C8C"))) PPC_WEAK_FUNC(sub_83C20C8C);
PPC_FUNC_IMPL(__imp__sub_83C20C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20C90"))) PPC_WEAK_FUNC(sub_83C20C90);
PPC_FUNC_IMPL(__imp__sub_83C20C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9432
	ctx.r3.s64 = ctx.r11.s64 + -9432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20C9C"))) PPC_WEAK_FUNC(sub_83C20C9C);
PPC_FUNC_IMPL(__imp__sub_83C20C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20CA0"))) PPC_WEAK_FUNC(sub_83C20CA0);
PPC_FUNC_IMPL(__imp__sub_83C20CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9424
	ctx.r3.s64 = ctx.r11.s64 + -9424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20CAC"))) PPC_WEAK_FUNC(sub_83C20CAC);
PPC_FUNC_IMPL(__imp__sub_83C20CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20CB0"))) PPC_WEAK_FUNC(sub_83C20CB0);
PPC_FUNC_IMPL(__imp__sub_83C20CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9416
	ctx.r3.s64 = ctx.r11.s64 + -9416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20CBC"))) PPC_WEAK_FUNC(sub_83C20CBC);
PPC_FUNC_IMPL(__imp__sub_83C20CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20CC0"))) PPC_WEAK_FUNC(sub_83C20CC0);
PPC_FUNC_IMPL(__imp__sub_83C20CC0) {
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
	// addi r3,r11,-17400
	ctx.r3.s64 = ctx.r11.s64 + -17400;
	// bl 0x83523120
	ctx.lr = 0x83C20CD8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-9408
	ctx.r3.s64 = ctx.r10.s64 + -9408;
	// bl 0x831cdcc8
	ctx.lr = 0x83C20CE4;
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

__attribute__((alias("__imp__sub_83C20CF4"))) PPC_WEAK_FUNC(sub_83C20CF4);
PPC_FUNC_IMPL(__imp__sub_83C20CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20CF8"))) PPC_WEAK_FUNC(sub_83C20CF8);
PPC_FUNC_IMPL(__imp__sub_83C20CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17396
	ctx.r7.s64 = ctx.r8.s64 + -17396;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17396(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17396);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17396(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17396, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20D20"))) PPC_WEAK_FUNC(sub_83C20D20);
PPC_FUNC_IMPL(__imp__sub_83C20D20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,8604
	ctx.r6.s64 = ctx.r7.s64 + 8604;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8532(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8532);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17396(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17396);
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
	// std r9,8604(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8604, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20D68"))) PPC_WEAK_FUNC(sub_83C20D68);
PPC_FUNC_IMPL(__imp__sub_83C20D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9392
	ctx.r3.s64 = ctx.r11.s64 + -9392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20D74"))) PPC_WEAK_FUNC(sub_83C20D74);
PPC_FUNC_IMPL(__imp__sub_83C20D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20D78"))) PPC_WEAK_FUNC(sub_83C20D78);
PPC_FUNC_IMPL(__imp__sub_83C20D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9384
	ctx.r3.s64 = ctx.r11.s64 + -9384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20D84"))) PPC_WEAK_FUNC(sub_83C20D84);
PPC_FUNC_IMPL(__imp__sub_83C20D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20D88"))) PPC_WEAK_FUNC(sub_83C20D88);
PPC_FUNC_IMPL(__imp__sub_83C20D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9376
	ctx.r3.s64 = ctx.r11.s64 + -9376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20D94"))) PPC_WEAK_FUNC(sub_83C20D94);
PPC_FUNC_IMPL(__imp__sub_83C20D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20D98"))) PPC_WEAK_FUNC(sub_83C20D98);
PPC_FUNC_IMPL(__imp__sub_83C20D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9368
	ctx.r3.s64 = ctx.r11.s64 + -9368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20DA4"))) PPC_WEAK_FUNC(sub_83C20DA4);
PPC_FUNC_IMPL(__imp__sub_83C20DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20DA8"))) PPC_WEAK_FUNC(sub_83C20DA8);
PPC_FUNC_IMPL(__imp__sub_83C20DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9360
	ctx.r3.s64 = ctx.r11.s64 + -9360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20DB4"))) PPC_WEAK_FUNC(sub_83C20DB4);
PPC_FUNC_IMPL(__imp__sub_83C20DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20DB8"))) PPC_WEAK_FUNC(sub_83C20DB8);
PPC_FUNC_IMPL(__imp__sub_83C20DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9352
	ctx.r3.s64 = ctx.r11.s64 + -9352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20DC4"))) PPC_WEAK_FUNC(sub_83C20DC4);
PPC_FUNC_IMPL(__imp__sub_83C20DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20DC8"))) PPC_WEAK_FUNC(sub_83C20DC8);
PPC_FUNC_IMPL(__imp__sub_83C20DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9344
	ctx.r3.s64 = ctx.r11.s64 + -9344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

