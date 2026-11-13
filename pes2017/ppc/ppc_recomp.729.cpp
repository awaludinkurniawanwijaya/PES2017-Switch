#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C1E8C8"))) PPC_WEAK_FUNC(sub_83C1E8C8);
PPC_FUNC_IMPL(__imp__sub_83C1E8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12416
	ctx.r3.s64 = ctx.r11.s64 + -12416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E8D4"))) PPC_WEAK_FUNC(sub_83C1E8D4);
PPC_FUNC_IMPL(__imp__sub_83C1E8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E8D8"))) PPC_WEAK_FUNC(sub_83C1E8D8);
PPC_FUNC_IMPL(__imp__sub_83C1E8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12408
	ctx.r3.s64 = ctx.r11.s64 + -12408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E8E4"))) PPC_WEAK_FUNC(sub_83C1E8E4);
PPC_FUNC_IMPL(__imp__sub_83C1E8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E8E8"))) PPC_WEAK_FUNC(sub_83C1E8E8);
PPC_FUNC_IMPL(__imp__sub_83C1E8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12400
	ctx.r3.s64 = ctx.r11.s64 + -12400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E8F4"))) PPC_WEAK_FUNC(sub_83C1E8F4);
PPC_FUNC_IMPL(__imp__sub_83C1E8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E8F8"))) PPC_WEAK_FUNC(sub_83C1E8F8);
PPC_FUNC_IMPL(__imp__sub_83C1E8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12392
	ctx.r3.s64 = ctx.r11.s64 + -12392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E904"))) PPC_WEAK_FUNC(sub_83C1E904);
PPC_FUNC_IMPL(__imp__sub_83C1E904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E908"))) PPC_WEAK_FUNC(sub_83C1E908);
PPC_FUNC_IMPL(__imp__sub_83C1E908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12384
	ctx.r3.s64 = ctx.r11.s64 + -12384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E914"))) PPC_WEAK_FUNC(sub_83C1E914);
PPC_FUNC_IMPL(__imp__sub_83C1E914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E918"))) PPC_WEAK_FUNC(sub_83C1E918);
PPC_FUNC_IMPL(__imp__sub_83C1E918) {
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
	// addi r3,r11,-17692
	ctx.r3.s64 = ctx.r11.s64 + -17692;
	// bl 0x83523120
	ctx.lr = 0x83C1E930;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-12376
	ctx.r3.s64 = ctx.r10.s64 + -12376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1E93C;
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

__attribute__((alias("__imp__sub_83C1E94C"))) PPC_WEAK_FUNC(sub_83C1E94C);
PPC_FUNC_IMPL(__imp__sub_83C1E94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E950"))) PPC_WEAK_FUNC(sub_83C1E950);
PPC_FUNC_IMPL(__imp__sub_83C1E950) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17688
	ctx.r7.s64 = ctx.r8.s64 + -17688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17688(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17688);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17688(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17688, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1E978"))) PPC_WEAK_FUNC(sub_83C1E978);
PPC_FUNC_IMPL(__imp__sub_83C1E978) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,5452
	ctx.r6.s64 = ctx.r7.s64 + 5452;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5380(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5380);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17688(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17688);
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
	// std r9,5452(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5452, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1E9C0"))) PPC_WEAK_FUNC(sub_83C1E9C0);
PPC_FUNC_IMPL(__imp__sub_83C1E9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12360
	ctx.r3.s64 = ctx.r11.s64 + -12360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E9CC"))) PPC_WEAK_FUNC(sub_83C1E9CC);
PPC_FUNC_IMPL(__imp__sub_83C1E9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E9D0"))) PPC_WEAK_FUNC(sub_83C1E9D0);
PPC_FUNC_IMPL(__imp__sub_83C1E9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12352
	ctx.r3.s64 = ctx.r11.s64 + -12352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E9DC"))) PPC_WEAK_FUNC(sub_83C1E9DC);
PPC_FUNC_IMPL(__imp__sub_83C1E9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E9E0"))) PPC_WEAK_FUNC(sub_83C1E9E0);
PPC_FUNC_IMPL(__imp__sub_83C1E9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12344
	ctx.r3.s64 = ctx.r11.s64 + -12344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E9EC"))) PPC_WEAK_FUNC(sub_83C1E9EC);
PPC_FUNC_IMPL(__imp__sub_83C1E9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E9F0"))) PPC_WEAK_FUNC(sub_83C1E9F0);
PPC_FUNC_IMPL(__imp__sub_83C1E9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12336
	ctx.r3.s64 = ctx.r11.s64 + -12336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E9FC"))) PPC_WEAK_FUNC(sub_83C1E9FC);
PPC_FUNC_IMPL(__imp__sub_83C1E9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EA00"))) PPC_WEAK_FUNC(sub_83C1EA00);
PPC_FUNC_IMPL(__imp__sub_83C1EA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12328
	ctx.r3.s64 = ctx.r11.s64 + -12328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EA0C"))) PPC_WEAK_FUNC(sub_83C1EA0C);
PPC_FUNC_IMPL(__imp__sub_83C1EA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EA10"))) PPC_WEAK_FUNC(sub_83C1EA10);
PPC_FUNC_IMPL(__imp__sub_83C1EA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12320
	ctx.r3.s64 = ctx.r11.s64 + -12320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EA1C"))) PPC_WEAK_FUNC(sub_83C1EA1C);
PPC_FUNC_IMPL(__imp__sub_83C1EA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EA20"))) PPC_WEAK_FUNC(sub_83C1EA20);
PPC_FUNC_IMPL(__imp__sub_83C1EA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12312
	ctx.r3.s64 = ctx.r11.s64 + -12312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EA2C"))) PPC_WEAK_FUNC(sub_83C1EA2C);
PPC_FUNC_IMPL(__imp__sub_83C1EA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EA30"))) PPC_WEAK_FUNC(sub_83C1EA30);
PPC_FUNC_IMPL(__imp__sub_83C1EA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12304
	ctx.r3.s64 = ctx.r11.s64 + -12304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EA3C"))) PPC_WEAK_FUNC(sub_83C1EA3C);
PPC_FUNC_IMPL(__imp__sub_83C1EA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EA40"))) PPC_WEAK_FUNC(sub_83C1EA40);
PPC_FUNC_IMPL(__imp__sub_83C1EA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12296
	ctx.r3.s64 = ctx.r11.s64 + -12296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EA4C"))) PPC_WEAK_FUNC(sub_83C1EA4C);
PPC_FUNC_IMPL(__imp__sub_83C1EA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EA50"))) PPC_WEAK_FUNC(sub_83C1EA50);
PPC_FUNC_IMPL(__imp__sub_83C1EA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12288
	ctx.r3.s64 = ctx.r11.s64 + -12288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EA5C"))) PPC_WEAK_FUNC(sub_83C1EA5C);
PPC_FUNC_IMPL(__imp__sub_83C1EA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EA60"))) PPC_WEAK_FUNC(sub_83C1EA60);
PPC_FUNC_IMPL(__imp__sub_83C1EA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12280
	ctx.r3.s64 = ctx.r11.s64 + -12280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EA6C"))) PPC_WEAK_FUNC(sub_83C1EA6C);
PPC_FUNC_IMPL(__imp__sub_83C1EA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EA70"))) PPC_WEAK_FUNC(sub_83C1EA70);
PPC_FUNC_IMPL(__imp__sub_83C1EA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12272
	ctx.r3.s64 = ctx.r11.s64 + -12272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EA7C"))) PPC_WEAK_FUNC(sub_83C1EA7C);
PPC_FUNC_IMPL(__imp__sub_83C1EA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EA80"))) PPC_WEAK_FUNC(sub_83C1EA80);
PPC_FUNC_IMPL(__imp__sub_83C1EA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12264
	ctx.r3.s64 = ctx.r11.s64 + -12264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EA8C"))) PPC_WEAK_FUNC(sub_83C1EA8C);
PPC_FUNC_IMPL(__imp__sub_83C1EA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EA90"))) PPC_WEAK_FUNC(sub_83C1EA90);
PPC_FUNC_IMPL(__imp__sub_83C1EA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12256
	ctx.r3.s64 = ctx.r11.s64 + -12256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EA9C"))) PPC_WEAK_FUNC(sub_83C1EA9C);
PPC_FUNC_IMPL(__imp__sub_83C1EA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EAA0"))) PPC_WEAK_FUNC(sub_83C1EAA0);
PPC_FUNC_IMPL(__imp__sub_83C1EAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12248
	ctx.r3.s64 = ctx.r11.s64 + -12248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EAAC"))) PPC_WEAK_FUNC(sub_83C1EAAC);
PPC_FUNC_IMPL(__imp__sub_83C1EAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EAB0"))) PPC_WEAK_FUNC(sub_83C1EAB0);
PPC_FUNC_IMPL(__imp__sub_83C1EAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12240
	ctx.r3.s64 = ctx.r11.s64 + -12240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EABC"))) PPC_WEAK_FUNC(sub_83C1EABC);
PPC_FUNC_IMPL(__imp__sub_83C1EABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EAC0"))) PPC_WEAK_FUNC(sub_83C1EAC0);
PPC_FUNC_IMPL(__imp__sub_83C1EAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12232
	ctx.r3.s64 = ctx.r11.s64 + -12232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EACC"))) PPC_WEAK_FUNC(sub_83C1EACC);
PPC_FUNC_IMPL(__imp__sub_83C1EACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EAD0"))) PPC_WEAK_FUNC(sub_83C1EAD0);
PPC_FUNC_IMPL(__imp__sub_83C1EAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12224
	ctx.r3.s64 = ctx.r11.s64 + -12224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EADC"))) PPC_WEAK_FUNC(sub_83C1EADC);
PPC_FUNC_IMPL(__imp__sub_83C1EADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EAE0"))) PPC_WEAK_FUNC(sub_83C1EAE0);
PPC_FUNC_IMPL(__imp__sub_83C1EAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12216
	ctx.r3.s64 = ctx.r11.s64 + -12216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EAEC"))) PPC_WEAK_FUNC(sub_83C1EAEC);
PPC_FUNC_IMPL(__imp__sub_83C1EAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EAF0"))) PPC_WEAK_FUNC(sub_83C1EAF0);
PPC_FUNC_IMPL(__imp__sub_83C1EAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12208
	ctx.r3.s64 = ctx.r11.s64 + -12208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EAFC"))) PPC_WEAK_FUNC(sub_83C1EAFC);
PPC_FUNC_IMPL(__imp__sub_83C1EAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EB00"))) PPC_WEAK_FUNC(sub_83C1EB00);
PPC_FUNC_IMPL(__imp__sub_83C1EB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12200
	ctx.r3.s64 = ctx.r11.s64 + -12200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EB0C"))) PPC_WEAK_FUNC(sub_83C1EB0C);
PPC_FUNC_IMPL(__imp__sub_83C1EB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EB10"))) PPC_WEAK_FUNC(sub_83C1EB10);
PPC_FUNC_IMPL(__imp__sub_83C1EB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12192
	ctx.r3.s64 = ctx.r11.s64 + -12192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EB1C"))) PPC_WEAK_FUNC(sub_83C1EB1C);
PPC_FUNC_IMPL(__imp__sub_83C1EB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EB20"))) PPC_WEAK_FUNC(sub_83C1EB20);
PPC_FUNC_IMPL(__imp__sub_83C1EB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12184
	ctx.r3.s64 = ctx.r11.s64 + -12184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EB2C"))) PPC_WEAK_FUNC(sub_83C1EB2C);
PPC_FUNC_IMPL(__imp__sub_83C1EB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EB30"))) PPC_WEAK_FUNC(sub_83C1EB30);
PPC_FUNC_IMPL(__imp__sub_83C1EB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12176
	ctx.r3.s64 = ctx.r11.s64 + -12176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EB3C"))) PPC_WEAK_FUNC(sub_83C1EB3C);
PPC_FUNC_IMPL(__imp__sub_83C1EB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EB40"))) PPC_WEAK_FUNC(sub_83C1EB40);
PPC_FUNC_IMPL(__imp__sub_83C1EB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12168
	ctx.r3.s64 = ctx.r11.s64 + -12168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EB4C"))) PPC_WEAK_FUNC(sub_83C1EB4C);
PPC_FUNC_IMPL(__imp__sub_83C1EB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EB50"))) PPC_WEAK_FUNC(sub_83C1EB50);
PPC_FUNC_IMPL(__imp__sub_83C1EB50) {
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
	// addi r3,r11,-17676
	ctx.r3.s64 = ctx.r11.s64 + -17676;
	// bl 0x83523120
	ctx.lr = 0x83C1EB68;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-12160
	ctx.r3.s64 = ctx.r10.s64 + -12160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1EB74;
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

__attribute__((alias("__imp__sub_83C1EB84"))) PPC_WEAK_FUNC(sub_83C1EB84);
PPC_FUNC_IMPL(__imp__sub_83C1EB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EB88"))) PPC_WEAK_FUNC(sub_83C1EB88);
PPC_FUNC_IMPL(__imp__sub_83C1EB88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17672
	ctx.r7.s64 = ctx.r8.s64 + -17672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17672(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1EBB0"))) PPC_WEAK_FUNC(sub_83C1EBB0);
PPC_FUNC_IMPL(__imp__sub_83C1EBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,5684
	ctx.r6.s64 = ctx.r7.s64 + 5684;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5612(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5612);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17672);
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
	// std r9,5684(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5684, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1EBF8"))) PPC_WEAK_FUNC(sub_83C1EBF8);
PPC_FUNC_IMPL(__imp__sub_83C1EBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12144
	ctx.r3.s64 = ctx.r11.s64 + -12144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EC04"))) PPC_WEAK_FUNC(sub_83C1EC04);
PPC_FUNC_IMPL(__imp__sub_83C1EC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EC08"))) PPC_WEAK_FUNC(sub_83C1EC08);
PPC_FUNC_IMPL(__imp__sub_83C1EC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12136
	ctx.r3.s64 = ctx.r11.s64 + -12136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EC14"))) PPC_WEAK_FUNC(sub_83C1EC14);
PPC_FUNC_IMPL(__imp__sub_83C1EC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EC18"))) PPC_WEAK_FUNC(sub_83C1EC18);
PPC_FUNC_IMPL(__imp__sub_83C1EC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12128
	ctx.r3.s64 = ctx.r11.s64 + -12128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EC24"))) PPC_WEAK_FUNC(sub_83C1EC24);
PPC_FUNC_IMPL(__imp__sub_83C1EC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EC28"))) PPC_WEAK_FUNC(sub_83C1EC28);
PPC_FUNC_IMPL(__imp__sub_83C1EC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12120
	ctx.r3.s64 = ctx.r11.s64 + -12120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EC34"))) PPC_WEAK_FUNC(sub_83C1EC34);
PPC_FUNC_IMPL(__imp__sub_83C1EC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EC38"))) PPC_WEAK_FUNC(sub_83C1EC38);
PPC_FUNC_IMPL(__imp__sub_83C1EC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12112
	ctx.r3.s64 = ctx.r11.s64 + -12112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EC44"))) PPC_WEAK_FUNC(sub_83C1EC44);
PPC_FUNC_IMPL(__imp__sub_83C1EC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EC48"))) PPC_WEAK_FUNC(sub_83C1EC48);
PPC_FUNC_IMPL(__imp__sub_83C1EC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12104
	ctx.r3.s64 = ctx.r11.s64 + -12104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EC54"))) PPC_WEAK_FUNC(sub_83C1EC54);
PPC_FUNC_IMPL(__imp__sub_83C1EC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EC58"))) PPC_WEAK_FUNC(sub_83C1EC58);
PPC_FUNC_IMPL(__imp__sub_83C1EC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12096
	ctx.r3.s64 = ctx.r11.s64 + -12096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EC64"))) PPC_WEAK_FUNC(sub_83C1EC64);
PPC_FUNC_IMPL(__imp__sub_83C1EC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EC68"))) PPC_WEAK_FUNC(sub_83C1EC68);
PPC_FUNC_IMPL(__imp__sub_83C1EC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12088
	ctx.r3.s64 = ctx.r11.s64 + -12088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EC74"))) PPC_WEAK_FUNC(sub_83C1EC74);
PPC_FUNC_IMPL(__imp__sub_83C1EC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EC78"))) PPC_WEAK_FUNC(sub_83C1EC78);
PPC_FUNC_IMPL(__imp__sub_83C1EC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12080
	ctx.r3.s64 = ctx.r11.s64 + -12080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EC84"))) PPC_WEAK_FUNC(sub_83C1EC84);
PPC_FUNC_IMPL(__imp__sub_83C1EC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EC88"))) PPC_WEAK_FUNC(sub_83C1EC88);
PPC_FUNC_IMPL(__imp__sub_83C1EC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12072
	ctx.r3.s64 = ctx.r11.s64 + -12072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EC94"))) PPC_WEAK_FUNC(sub_83C1EC94);
PPC_FUNC_IMPL(__imp__sub_83C1EC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EC98"))) PPC_WEAK_FUNC(sub_83C1EC98);
PPC_FUNC_IMPL(__imp__sub_83C1EC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12064
	ctx.r3.s64 = ctx.r11.s64 + -12064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ECA4"))) PPC_WEAK_FUNC(sub_83C1ECA4);
PPC_FUNC_IMPL(__imp__sub_83C1ECA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ECA8"))) PPC_WEAK_FUNC(sub_83C1ECA8);
PPC_FUNC_IMPL(__imp__sub_83C1ECA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12056
	ctx.r3.s64 = ctx.r11.s64 + -12056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ECB4"))) PPC_WEAK_FUNC(sub_83C1ECB4);
PPC_FUNC_IMPL(__imp__sub_83C1ECB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ECB8"))) PPC_WEAK_FUNC(sub_83C1ECB8);
PPC_FUNC_IMPL(__imp__sub_83C1ECB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12048
	ctx.r3.s64 = ctx.r11.s64 + -12048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ECC4"))) PPC_WEAK_FUNC(sub_83C1ECC4);
PPC_FUNC_IMPL(__imp__sub_83C1ECC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ECC8"))) PPC_WEAK_FUNC(sub_83C1ECC8);
PPC_FUNC_IMPL(__imp__sub_83C1ECC8) {
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
	// addi r3,r11,-17664
	ctx.r3.s64 = ctx.r11.s64 + -17664;
	// bl 0x83523120
	ctx.lr = 0x83C1ECE0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-12040
	ctx.r3.s64 = ctx.r10.s64 + -12040;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1ECEC;
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

__attribute__((alias("__imp__sub_83C1ECFC"))) PPC_WEAK_FUNC(sub_83C1ECFC);
PPC_FUNC_IMPL(__imp__sub_83C1ECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ED00"))) PPC_WEAK_FUNC(sub_83C1ED00);
PPC_FUNC_IMPL(__imp__sub_83C1ED00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17660
	ctx.r7.s64 = ctx.r8.s64 + -17660;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17660(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17660);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17660, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1ED28"))) PPC_WEAK_FUNC(sub_83C1ED28);
PPC_FUNC_IMPL(__imp__sub_83C1ED28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,5812
	ctx.r6.s64 = ctx.r7.s64 + 5812;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5740(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5740);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17660(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17660);
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
	// std r9,5812(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5812, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1ED70"))) PPC_WEAK_FUNC(sub_83C1ED70);
PPC_FUNC_IMPL(__imp__sub_83C1ED70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12024
	ctx.r3.s64 = ctx.r11.s64 + -12024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ED7C"))) PPC_WEAK_FUNC(sub_83C1ED7C);
PPC_FUNC_IMPL(__imp__sub_83C1ED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ED80"))) PPC_WEAK_FUNC(sub_83C1ED80);
PPC_FUNC_IMPL(__imp__sub_83C1ED80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12016
	ctx.r3.s64 = ctx.r11.s64 + -12016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ED8C"))) PPC_WEAK_FUNC(sub_83C1ED8C);
PPC_FUNC_IMPL(__imp__sub_83C1ED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ED90"))) PPC_WEAK_FUNC(sub_83C1ED90);
PPC_FUNC_IMPL(__imp__sub_83C1ED90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12008
	ctx.r3.s64 = ctx.r11.s64 + -12008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ED9C"))) PPC_WEAK_FUNC(sub_83C1ED9C);
PPC_FUNC_IMPL(__imp__sub_83C1ED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EDA0"))) PPC_WEAK_FUNC(sub_83C1EDA0);
PPC_FUNC_IMPL(__imp__sub_83C1EDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12000
	ctx.r3.s64 = ctx.r11.s64 + -12000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EDAC"))) PPC_WEAK_FUNC(sub_83C1EDAC);
PPC_FUNC_IMPL(__imp__sub_83C1EDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EDB0"))) PPC_WEAK_FUNC(sub_83C1EDB0);
PPC_FUNC_IMPL(__imp__sub_83C1EDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11992
	ctx.r3.s64 = ctx.r11.s64 + -11992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EDBC"))) PPC_WEAK_FUNC(sub_83C1EDBC);
PPC_FUNC_IMPL(__imp__sub_83C1EDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EDC0"))) PPC_WEAK_FUNC(sub_83C1EDC0);
PPC_FUNC_IMPL(__imp__sub_83C1EDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11984
	ctx.r3.s64 = ctx.r11.s64 + -11984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EDCC"))) PPC_WEAK_FUNC(sub_83C1EDCC);
PPC_FUNC_IMPL(__imp__sub_83C1EDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EDD0"))) PPC_WEAK_FUNC(sub_83C1EDD0);
PPC_FUNC_IMPL(__imp__sub_83C1EDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11976
	ctx.r3.s64 = ctx.r11.s64 + -11976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EDDC"))) PPC_WEAK_FUNC(sub_83C1EDDC);
PPC_FUNC_IMPL(__imp__sub_83C1EDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EDE0"))) PPC_WEAK_FUNC(sub_83C1EDE0);
PPC_FUNC_IMPL(__imp__sub_83C1EDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11968
	ctx.r3.s64 = ctx.r11.s64 + -11968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EDEC"))) PPC_WEAK_FUNC(sub_83C1EDEC);
PPC_FUNC_IMPL(__imp__sub_83C1EDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EDF0"))) PPC_WEAK_FUNC(sub_83C1EDF0);
PPC_FUNC_IMPL(__imp__sub_83C1EDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11960
	ctx.r3.s64 = ctx.r11.s64 + -11960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EDFC"))) PPC_WEAK_FUNC(sub_83C1EDFC);
PPC_FUNC_IMPL(__imp__sub_83C1EDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EE00"))) PPC_WEAK_FUNC(sub_83C1EE00);
PPC_FUNC_IMPL(__imp__sub_83C1EE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11952
	ctx.r3.s64 = ctx.r11.s64 + -11952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EE0C"))) PPC_WEAK_FUNC(sub_83C1EE0C);
PPC_FUNC_IMPL(__imp__sub_83C1EE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EE10"))) PPC_WEAK_FUNC(sub_83C1EE10);
PPC_FUNC_IMPL(__imp__sub_83C1EE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11944
	ctx.r3.s64 = ctx.r11.s64 + -11944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EE1C"))) PPC_WEAK_FUNC(sub_83C1EE1C);
PPC_FUNC_IMPL(__imp__sub_83C1EE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EE20"))) PPC_WEAK_FUNC(sub_83C1EE20);
PPC_FUNC_IMPL(__imp__sub_83C1EE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11936
	ctx.r3.s64 = ctx.r11.s64 + -11936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EE2C"))) PPC_WEAK_FUNC(sub_83C1EE2C);
PPC_FUNC_IMPL(__imp__sub_83C1EE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EE30"))) PPC_WEAK_FUNC(sub_83C1EE30);
PPC_FUNC_IMPL(__imp__sub_83C1EE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11928
	ctx.r3.s64 = ctx.r11.s64 + -11928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EE3C"))) PPC_WEAK_FUNC(sub_83C1EE3C);
PPC_FUNC_IMPL(__imp__sub_83C1EE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EE40"))) PPC_WEAK_FUNC(sub_83C1EE40);
PPC_FUNC_IMPL(__imp__sub_83C1EE40) {
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
	// addi r3,r11,-17652
	ctx.r3.s64 = ctx.r11.s64 + -17652;
	// bl 0x83523120
	ctx.lr = 0x83C1EE58;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-11920
	ctx.r3.s64 = ctx.r10.s64 + -11920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1EE64;
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

__attribute__((alias("__imp__sub_83C1EE74"))) PPC_WEAK_FUNC(sub_83C1EE74);
PPC_FUNC_IMPL(__imp__sub_83C1EE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EE78"))) PPC_WEAK_FUNC(sub_83C1EE78);
PPC_FUNC_IMPL(__imp__sub_83C1EE78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17648
	ctx.r7.s64 = ctx.r8.s64 + -17648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17648);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17648(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17648, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1EEA0"))) PPC_WEAK_FUNC(sub_83C1EEA0);
PPC_FUNC_IMPL(__imp__sub_83C1EEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11904
	ctx.r3.s64 = ctx.r11.s64 + -11904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EEAC"))) PPC_WEAK_FUNC(sub_83C1EEAC);
PPC_FUNC_IMPL(__imp__sub_83C1EEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EEB0"))) PPC_WEAK_FUNC(sub_83C1EEB0);
PPC_FUNC_IMPL(__imp__sub_83C1EEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11896
	ctx.r3.s64 = ctx.r11.s64 + -11896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EEBC"))) PPC_WEAK_FUNC(sub_83C1EEBC);
PPC_FUNC_IMPL(__imp__sub_83C1EEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EEC0"))) PPC_WEAK_FUNC(sub_83C1EEC0);
PPC_FUNC_IMPL(__imp__sub_83C1EEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11888
	ctx.r3.s64 = ctx.r11.s64 + -11888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EECC"))) PPC_WEAK_FUNC(sub_83C1EECC);
PPC_FUNC_IMPL(__imp__sub_83C1EECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EED0"))) PPC_WEAK_FUNC(sub_83C1EED0);
PPC_FUNC_IMPL(__imp__sub_83C1EED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11880
	ctx.r3.s64 = ctx.r11.s64 + -11880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EEDC"))) PPC_WEAK_FUNC(sub_83C1EEDC);
PPC_FUNC_IMPL(__imp__sub_83C1EEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EEE0"))) PPC_WEAK_FUNC(sub_83C1EEE0);
PPC_FUNC_IMPL(__imp__sub_83C1EEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11872
	ctx.r3.s64 = ctx.r11.s64 + -11872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EEEC"))) PPC_WEAK_FUNC(sub_83C1EEEC);
PPC_FUNC_IMPL(__imp__sub_83C1EEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EEF0"))) PPC_WEAK_FUNC(sub_83C1EEF0);
PPC_FUNC_IMPL(__imp__sub_83C1EEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11864
	ctx.r3.s64 = ctx.r11.s64 + -11864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EEFC"))) PPC_WEAK_FUNC(sub_83C1EEFC);
PPC_FUNC_IMPL(__imp__sub_83C1EEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EF00"))) PPC_WEAK_FUNC(sub_83C1EF00);
PPC_FUNC_IMPL(__imp__sub_83C1EF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11856
	ctx.r3.s64 = ctx.r11.s64 + -11856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EF0C"))) PPC_WEAK_FUNC(sub_83C1EF0C);
PPC_FUNC_IMPL(__imp__sub_83C1EF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EF10"))) PPC_WEAK_FUNC(sub_83C1EF10);
PPC_FUNC_IMPL(__imp__sub_83C1EF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11848
	ctx.r3.s64 = ctx.r11.s64 + -11848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EF1C"))) PPC_WEAK_FUNC(sub_83C1EF1C);
PPC_FUNC_IMPL(__imp__sub_83C1EF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EF20"))) PPC_WEAK_FUNC(sub_83C1EF20);
PPC_FUNC_IMPL(__imp__sub_83C1EF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11840
	ctx.r3.s64 = ctx.r11.s64 + -11840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EF2C"))) PPC_WEAK_FUNC(sub_83C1EF2C);
PPC_FUNC_IMPL(__imp__sub_83C1EF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EF30"))) PPC_WEAK_FUNC(sub_83C1EF30);
PPC_FUNC_IMPL(__imp__sub_83C1EF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11832
	ctx.r3.s64 = ctx.r11.s64 + -11832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EF3C"))) PPC_WEAK_FUNC(sub_83C1EF3C);
PPC_FUNC_IMPL(__imp__sub_83C1EF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EF40"))) PPC_WEAK_FUNC(sub_83C1EF40);
PPC_FUNC_IMPL(__imp__sub_83C1EF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11824
	ctx.r3.s64 = ctx.r11.s64 + -11824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EF4C"))) PPC_WEAK_FUNC(sub_83C1EF4C);
PPC_FUNC_IMPL(__imp__sub_83C1EF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EF50"))) PPC_WEAK_FUNC(sub_83C1EF50);
PPC_FUNC_IMPL(__imp__sub_83C1EF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11816
	ctx.r3.s64 = ctx.r11.s64 + -11816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1EF5C"))) PPC_WEAK_FUNC(sub_83C1EF5C);
PPC_FUNC_IMPL(__imp__sub_83C1EF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EF60"))) PPC_WEAK_FUNC(sub_83C1EF60);
PPC_FUNC_IMPL(__imp__sub_83C1EF60) {
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
	// addi r3,r11,-17640
	ctx.r3.s64 = ctx.r11.s64 + -17640;
	// bl 0x83523120
	ctx.lr = 0x83C1EF78;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-11808
	ctx.r3.s64 = ctx.r10.s64 + -11808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1EF84;
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

__attribute__((alias("__imp__sub_83C1EF94"))) PPC_WEAK_FUNC(sub_83C1EF94);
PPC_FUNC_IMPL(__imp__sub_83C1EF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1EF98"))) PPC_WEAK_FUNC(sub_83C1EF98);
PPC_FUNC_IMPL(__imp__sub_83C1EF98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17636
	ctx.r7.s64 = ctx.r8.s64 + -17636;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17636(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17636);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17636(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17636, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1EFC0"))) PPC_WEAK_FUNC(sub_83C1EFC0);
PPC_FUNC_IMPL(__imp__sub_83C1EFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,6044
	ctx.r6.s64 = ctx.r7.s64 + 6044;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5972(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5972);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17636(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17636);
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
	// std r9,6044(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6044, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1F008"))) PPC_WEAK_FUNC(sub_83C1F008);
PPC_FUNC_IMPL(__imp__sub_83C1F008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11792
	ctx.r3.s64 = ctx.r11.s64 + -11792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F014"))) PPC_WEAK_FUNC(sub_83C1F014);
PPC_FUNC_IMPL(__imp__sub_83C1F014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F018"))) PPC_WEAK_FUNC(sub_83C1F018);
PPC_FUNC_IMPL(__imp__sub_83C1F018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11784
	ctx.r3.s64 = ctx.r11.s64 + -11784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F024"))) PPC_WEAK_FUNC(sub_83C1F024);
PPC_FUNC_IMPL(__imp__sub_83C1F024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F028"))) PPC_WEAK_FUNC(sub_83C1F028);
PPC_FUNC_IMPL(__imp__sub_83C1F028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11776
	ctx.r3.s64 = ctx.r11.s64 + -11776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F034"))) PPC_WEAK_FUNC(sub_83C1F034);
PPC_FUNC_IMPL(__imp__sub_83C1F034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F038"))) PPC_WEAK_FUNC(sub_83C1F038);
PPC_FUNC_IMPL(__imp__sub_83C1F038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11768
	ctx.r3.s64 = ctx.r11.s64 + -11768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F044"))) PPC_WEAK_FUNC(sub_83C1F044);
PPC_FUNC_IMPL(__imp__sub_83C1F044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F048"))) PPC_WEAK_FUNC(sub_83C1F048);
PPC_FUNC_IMPL(__imp__sub_83C1F048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11760
	ctx.r3.s64 = ctx.r11.s64 + -11760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F054"))) PPC_WEAK_FUNC(sub_83C1F054);
PPC_FUNC_IMPL(__imp__sub_83C1F054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F058"))) PPC_WEAK_FUNC(sub_83C1F058);
PPC_FUNC_IMPL(__imp__sub_83C1F058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11752
	ctx.r3.s64 = ctx.r11.s64 + -11752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F064"))) PPC_WEAK_FUNC(sub_83C1F064);
PPC_FUNC_IMPL(__imp__sub_83C1F064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F068"))) PPC_WEAK_FUNC(sub_83C1F068);
PPC_FUNC_IMPL(__imp__sub_83C1F068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11744
	ctx.r3.s64 = ctx.r11.s64 + -11744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F074"))) PPC_WEAK_FUNC(sub_83C1F074);
PPC_FUNC_IMPL(__imp__sub_83C1F074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F078"))) PPC_WEAK_FUNC(sub_83C1F078);
PPC_FUNC_IMPL(__imp__sub_83C1F078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11736
	ctx.r3.s64 = ctx.r11.s64 + -11736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F084"))) PPC_WEAK_FUNC(sub_83C1F084);
PPC_FUNC_IMPL(__imp__sub_83C1F084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F088"))) PPC_WEAK_FUNC(sub_83C1F088);
PPC_FUNC_IMPL(__imp__sub_83C1F088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11728
	ctx.r3.s64 = ctx.r11.s64 + -11728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F094"))) PPC_WEAK_FUNC(sub_83C1F094);
PPC_FUNC_IMPL(__imp__sub_83C1F094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F098"))) PPC_WEAK_FUNC(sub_83C1F098);
PPC_FUNC_IMPL(__imp__sub_83C1F098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11720
	ctx.r3.s64 = ctx.r11.s64 + -11720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F0A4"))) PPC_WEAK_FUNC(sub_83C1F0A4);
PPC_FUNC_IMPL(__imp__sub_83C1F0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F0A8"))) PPC_WEAK_FUNC(sub_83C1F0A8);
PPC_FUNC_IMPL(__imp__sub_83C1F0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11712
	ctx.r3.s64 = ctx.r11.s64 + -11712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F0B4"))) PPC_WEAK_FUNC(sub_83C1F0B4);
PPC_FUNC_IMPL(__imp__sub_83C1F0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F0B8"))) PPC_WEAK_FUNC(sub_83C1F0B8);
PPC_FUNC_IMPL(__imp__sub_83C1F0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11704
	ctx.r3.s64 = ctx.r11.s64 + -11704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F0C4"))) PPC_WEAK_FUNC(sub_83C1F0C4);
PPC_FUNC_IMPL(__imp__sub_83C1F0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F0C8"))) PPC_WEAK_FUNC(sub_83C1F0C8);
PPC_FUNC_IMPL(__imp__sub_83C1F0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11696
	ctx.r3.s64 = ctx.r11.s64 + -11696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F0D4"))) PPC_WEAK_FUNC(sub_83C1F0D4);
PPC_FUNC_IMPL(__imp__sub_83C1F0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F0D8"))) PPC_WEAK_FUNC(sub_83C1F0D8);
PPC_FUNC_IMPL(__imp__sub_83C1F0D8) {
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
	// addi r3,r11,-17628
	ctx.r3.s64 = ctx.r11.s64 + -17628;
	// bl 0x83523120
	ctx.lr = 0x83C1F0F0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-11688
	ctx.r3.s64 = ctx.r10.s64 + -11688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1F0FC;
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

__attribute__((alias("__imp__sub_83C1F10C"))) PPC_WEAK_FUNC(sub_83C1F10C);
PPC_FUNC_IMPL(__imp__sub_83C1F10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F110"))) PPC_WEAK_FUNC(sub_83C1F110);
PPC_FUNC_IMPL(__imp__sub_83C1F110) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17624
	ctx.r7.s64 = ctx.r8.s64 + -17624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17624(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1F138"))) PPC_WEAK_FUNC(sub_83C1F138);
PPC_FUNC_IMPL(__imp__sub_83C1F138) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,6172
	ctx.r6.s64 = ctx.r7.s64 + 6172;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6100(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6100);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17624(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17624);
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
	// std r9,6172(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6172, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1F180"))) PPC_WEAK_FUNC(sub_83C1F180);
PPC_FUNC_IMPL(__imp__sub_83C1F180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11672
	ctx.r3.s64 = ctx.r11.s64 + -11672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F18C"))) PPC_WEAK_FUNC(sub_83C1F18C);
PPC_FUNC_IMPL(__imp__sub_83C1F18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F190"))) PPC_WEAK_FUNC(sub_83C1F190);
PPC_FUNC_IMPL(__imp__sub_83C1F190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11664
	ctx.r3.s64 = ctx.r11.s64 + -11664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F19C"))) PPC_WEAK_FUNC(sub_83C1F19C);
PPC_FUNC_IMPL(__imp__sub_83C1F19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F1A0"))) PPC_WEAK_FUNC(sub_83C1F1A0);
PPC_FUNC_IMPL(__imp__sub_83C1F1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11656
	ctx.r3.s64 = ctx.r11.s64 + -11656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F1AC"))) PPC_WEAK_FUNC(sub_83C1F1AC);
PPC_FUNC_IMPL(__imp__sub_83C1F1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F1B0"))) PPC_WEAK_FUNC(sub_83C1F1B0);
PPC_FUNC_IMPL(__imp__sub_83C1F1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11648
	ctx.r3.s64 = ctx.r11.s64 + -11648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F1BC"))) PPC_WEAK_FUNC(sub_83C1F1BC);
PPC_FUNC_IMPL(__imp__sub_83C1F1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F1C0"))) PPC_WEAK_FUNC(sub_83C1F1C0);
PPC_FUNC_IMPL(__imp__sub_83C1F1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11640
	ctx.r3.s64 = ctx.r11.s64 + -11640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F1CC"))) PPC_WEAK_FUNC(sub_83C1F1CC);
PPC_FUNC_IMPL(__imp__sub_83C1F1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F1D0"))) PPC_WEAK_FUNC(sub_83C1F1D0);
PPC_FUNC_IMPL(__imp__sub_83C1F1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11632
	ctx.r3.s64 = ctx.r11.s64 + -11632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F1DC"))) PPC_WEAK_FUNC(sub_83C1F1DC);
PPC_FUNC_IMPL(__imp__sub_83C1F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F1E0"))) PPC_WEAK_FUNC(sub_83C1F1E0);
PPC_FUNC_IMPL(__imp__sub_83C1F1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11624
	ctx.r3.s64 = ctx.r11.s64 + -11624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F1EC"))) PPC_WEAK_FUNC(sub_83C1F1EC);
PPC_FUNC_IMPL(__imp__sub_83C1F1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F1F0"))) PPC_WEAK_FUNC(sub_83C1F1F0);
PPC_FUNC_IMPL(__imp__sub_83C1F1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11616
	ctx.r3.s64 = ctx.r11.s64 + -11616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F1FC"))) PPC_WEAK_FUNC(sub_83C1F1FC);
PPC_FUNC_IMPL(__imp__sub_83C1F1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F200"))) PPC_WEAK_FUNC(sub_83C1F200);
PPC_FUNC_IMPL(__imp__sub_83C1F200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11608
	ctx.r3.s64 = ctx.r11.s64 + -11608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F20C"))) PPC_WEAK_FUNC(sub_83C1F20C);
PPC_FUNC_IMPL(__imp__sub_83C1F20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F210"))) PPC_WEAK_FUNC(sub_83C1F210);
PPC_FUNC_IMPL(__imp__sub_83C1F210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11600
	ctx.r3.s64 = ctx.r11.s64 + -11600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F21C"))) PPC_WEAK_FUNC(sub_83C1F21C);
PPC_FUNC_IMPL(__imp__sub_83C1F21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F220"))) PPC_WEAK_FUNC(sub_83C1F220);
PPC_FUNC_IMPL(__imp__sub_83C1F220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11592
	ctx.r3.s64 = ctx.r11.s64 + -11592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F22C"))) PPC_WEAK_FUNC(sub_83C1F22C);
PPC_FUNC_IMPL(__imp__sub_83C1F22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F230"))) PPC_WEAK_FUNC(sub_83C1F230);
PPC_FUNC_IMPL(__imp__sub_83C1F230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11584
	ctx.r3.s64 = ctx.r11.s64 + -11584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F23C"))) PPC_WEAK_FUNC(sub_83C1F23C);
PPC_FUNC_IMPL(__imp__sub_83C1F23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F240"))) PPC_WEAK_FUNC(sub_83C1F240);
PPC_FUNC_IMPL(__imp__sub_83C1F240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11576
	ctx.r3.s64 = ctx.r11.s64 + -11576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F24C"))) PPC_WEAK_FUNC(sub_83C1F24C);
PPC_FUNC_IMPL(__imp__sub_83C1F24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F250"))) PPC_WEAK_FUNC(sub_83C1F250);
PPC_FUNC_IMPL(__imp__sub_83C1F250) {
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
	// addi r3,r11,-17616
	ctx.r3.s64 = ctx.r11.s64 + -17616;
	// bl 0x83523120
	ctx.lr = 0x83C1F268;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-11568
	ctx.r3.s64 = ctx.r10.s64 + -11568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1F274;
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

__attribute__((alias("__imp__sub_83C1F284"))) PPC_WEAK_FUNC(sub_83C1F284);
PPC_FUNC_IMPL(__imp__sub_83C1F284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F288"))) PPC_WEAK_FUNC(sub_83C1F288);
PPC_FUNC_IMPL(__imp__sub_83C1F288) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17612
	ctx.r7.s64 = ctx.r8.s64 + -17612;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17612(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17612);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17612(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17612, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1F2B0"))) PPC_WEAK_FUNC(sub_83C1F2B0);
PPC_FUNC_IMPL(__imp__sub_83C1F2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,6300
	ctx.r6.s64 = ctx.r7.s64 + 6300;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6228(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6228);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17612(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17612);
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
	// std r9,6300(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6300, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1F2F8"))) PPC_WEAK_FUNC(sub_83C1F2F8);
PPC_FUNC_IMPL(__imp__sub_83C1F2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11552
	ctx.r3.s64 = ctx.r11.s64 + -11552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F304"))) PPC_WEAK_FUNC(sub_83C1F304);
PPC_FUNC_IMPL(__imp__sub_83C1F304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F308"))) PPC_WEAK_FUNC(sub_83C1F308);
PPC_FUNC_IMPL(__imp__sub_83C1F308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11544
	ctx.r3.s64 = ctx.r11.s64 + -11544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F314"))) PPC_WEAK_FUNC(sub_83C1F314);
PPC_FUNC_IMPL(__imp__sub_83C1F314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F318"))) PPC_WEAK_FUNC(sub_83C1F318);
PPC_FUNC_IMPL(__imp__sub_83C1F318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11536
	ctx.r3.s64 = ctx.r11.s64 + -11536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F324"))) PPC_WEAK_FUNC(sub_83C1F324);
PPC_FUNC_IMPL(__imp__sub_83C1F324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F328"))) PPC_WEAK_FUNC(sub_83C1F328);
PPC_FUNC_IMPL(__imp__sub_83C1F328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11528
	ctx.r3.s64 = ctx.r11.s64 + -11528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F334"))) PPC_WEAK_FUNC(sub_83C1F334);
PPC_FUNC_IMPL(__imp__sub_83C1F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F338"))) PPC_WEAK_FUNC(sub_83C1F338);
PPC_FUNC_IMPL(__imp__sub_83C1F338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11520
	ctx.r3.s64 = ctx.r11.s64 + -11520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F344"))) PPC_WEAK_FUNC(sub_83C1F344);
PPC_FUNC_IMPL(__imp__sub_83C1F344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F348"))) PPC_WEAK_FUNC(sub_83C1F348);
PPC_FUNC_IMPL(__imp__sub_83C1F348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11512
	ctx.r3.s64 = ctx.r11.s64 + -11512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F354"))) PPC_WEAK_FUNC(sub_83C1F354);
PPC_FUNC_IMPL(__imp__sub_83C1F354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F358"))) PPC_WEAK_FUNC(sub_83C1F358);
PPC_FUNC_IMPL(__imp__sub_83C1F358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11504
	ctx.r3.s64 = ctx.r11.s64 + -11504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F364"))) PPC_WEAK_FUNC(sub_83C1F364);
PPC_FUNC_IMPL(__imp__sub_83C1F364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F368"))) PPC_WEAK_FUNC(sub_83C1F368);
PPC_FUNC_IMPL(__imp__sub_83C1F368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11496
	ctx.r3.s64 = ctx.r11.s64 + -11496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F374"))) PPC_WEAK_FUNC(sub_83C1F374);
PPC_FUNC_IMPL(__imp__sub_83C1F374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F378"))) PPC_WEAK_FUNC(sub_83C1F378);
PPC_FUNC_IMPL(__imp__sub_83C1F378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11488
	ctx.r3.s64 = ctx.r11.s64 + -11488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F384"))) PPC_WEAK_FUNC(sub_83C1F384);
PPC_FUNC_IMPL(__imp__sub_83C1F384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F388"))) PPC_WEAK_FUNC(sub_83C1F388);
PPC_FUNC_IMPL(__imp__sub_83C1F388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11480
	ctx.r3.s64 = ctx.r11.s64 + -11480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F394"))) PPC_WEAK_FUNC(sub_83C1F394);
PPC_FUNC_IMPL(__imp__sub_83C1F394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F398"))) PPC_WEAK_FUNC(sub_83C1F398);
PPC_FUNC_IMPL(__imp__sub_83C1F398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11472
	ctx.r3.s64 = ctx.r11.s64 + -11472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F3A4"))) PPC_WEAK_FUNC(sub_83C1F3A4);
PPC_FUNC_IMPL(__imp__sub_83C1F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F3A8"))) PPC_WEAK_FUNC(sub_83C1F3A8);
PPC_FUNC_IMPL(__imp__sub_83C1F3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11464
	ctx.r3.s64 = ctx.r11.s64 + -11464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F3B4"))) PPC_WEAK_FUNC(sub_83C1F3B4);
PPC_FUNC_IMPL(__imp__sub_83C1F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F3B8"))) PPC_WEAK_FUNC(sub_83C1F3B8);
PPC_FUNC_IMPL(__imp__sub_83C1F3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11456
	ctx.r3.s64 = ctx.r11.s64 + -11456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F3C4"))) PPC_WEAK_FUNC(sub_83C1F3C4);
PPC_FUNC_IMPL(__imp__sub_83C1F3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F3C8"))) PPC_WEAK_FUNC(sub_83C1F3C8);
PPC_FUNC_IMPL(__imp__sub_83C1F3C8) {
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
	// addi r3,r11,-17604
	ctx.r3.s64 = ctx.r11.s64 + -17604;
	// bl 0x83523120
	ctx.lr = 0x83C1F3E0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-11448
	ctx.r3.s64 = ctx.r10.s64 + -11448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1F3EC;
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

__attribute__((alias("__imp__sub_83C1F3FC"))) PPC_WEAK_FUNC(sub_83C1F3FC);
PPC_FUNC_IMPL(__imp__sub_83C1F3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F400"))) PPC_WEAK_FUNC(sub_83C1F400);
PPC_FUNC_IMPL(__imp__sub_83C1F400) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17600
	ctx.r7.s64 = ctx.r8.s64 + -17600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17600);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17600, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1F428"))) PPC_WEAK_FUNC(sub_83C1F428);
PPC_FUNC_IMPL(__imp__sub_83C1F428) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,6428
	ctx.r6.s64 = ctx.r7.s64 + 6428;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6356(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6356);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17600);
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
	// std r9,6428(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6428, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1F470"))) PPC_WEAK_FUNC(sub_83C1F470);
PPC_FUNC_IMPL(__imp__sub_83C1F470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11432
	ctx.r3.s64 = ctx.r11.s64 + -11432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F47C"))) PPC_WEAK_FUNC(sub_83C1F47C);
PPC_FUNC_IMPL(__imp__sub_83C1F47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F480"))) PPC_WEAK_FUNC(sub_83C1F480);
PPC_FUNC_IMPL(__imp__sub_83C1F480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11424
	ctx.r3.s64 = ctx.r11.s64 + -11424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F48C"))) PPC_WEAK_FUNC(sub_83C1F48C);
PPC_FUNC_IMPL(__imp__sub_83C1F48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F490"))) PPC_WEAK_FUNC(sub_83C1F490);
PPC_FUNC_IMPL(__imp__sub_83C1F490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11416
	ctx.r3.s64 = ctx.r11.s64 + -11416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F49C"))) PPC_WEAK_FUNC(sub_83C1F49C);
PPC_FUNC_IMPL(__imp__sub_83C1F49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F4A0"))) PPC_WEAK_FUNC(sub_83C1F4A0);
PPC_FUNC_IMPL(__imp__sub_83C1F4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11408
	ctx.r3.s64 = ctx.r11.s64 + -11408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F4AC"))) PPC_WEAK_FUNC(sub_83C1F4AC);
PPC_FUNC_IMPL(__imp__sub_83C1F4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F4B0"))) PPC_WEAK_FUNC(sub_83C1F4B0);
PPC_FUNC_IMPL(__imp__sub_83C1F4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11400
	ctx.r3.s64 = ctx.r11.s64 + -11400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F4BC"))) PPC_WEAK_FUNC(sub_83C1F4BC);
PPC_FUNC_IMPL(__imp__sub_83C1F4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F4C0"))) PPC_WEAK_FUNC(sub_83C1F4C0);
PPC_FUNC_IMPL(__imp__sub_83C1F4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11392
	ctx.r3.s64 = ctx.r11.s64 + -11392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

