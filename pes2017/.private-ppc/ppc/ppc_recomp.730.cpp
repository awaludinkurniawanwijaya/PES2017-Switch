#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C1F4CC"))) PPC_WEAK_FUNC(sub_83C1F4CC);
PPC_FUNC_IMPL(__imp__sub_83C1F4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F4D0"))) PPC_WEAK_FUNC(sub_83C1F4D0);
PPC_FUNC_IMPL(__imp__sub_83C1F4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11384
	ctx.r3.s64 = ctx.r11.s64 + -11384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F4DC"))) PPC_WEAK_FUNC(sub_83C1F4DC);
PPC_FUNC_IMPL(__imp__sub_83C1F4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F4E0"))) PPC_WEAK_FUNC(sub_83C1F4E0);
PPC_FUNC_IMPL(__imp__sub_83C1F4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11376
	ctx.r3.s64 = ctx.r11.s64 + -11376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F4EC"))) PPC_WEAK_FUNC(sub_83C1F4EC);
PPC_FUNC_IMPL(__imp__sub_83C1F4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F4F0"))) PPC_WEAK_FUNC(sub_83C1F4F0);
PPC_FUNC_IMPL(__imp__sub_83C1F4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11368
	ctx.r3.s64 = ctx.r11.s64 + -11368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F4FC"))) PPC_WEAK_FUNC(sub_83C1F4FC);
PPC_FUNC_IMPL(__imp__sub_83C1F4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F500"))) PPC_WEAK_FUNC(sub_83C1F500);
PPC_FUNC_IMPL(__imp__sub_83C1F500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11360
	ctx.r3.s64 = ctx.r11.s64 + -11360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F50C"))) PPC_WEAK_FUNC(sub_83C1F50C);
PPC_FUNC_IMPL(__imp__sub_83C1F50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F510"))) PPC_WEAK_FUNC(sub_83C1F510);
PPC_FUNC_IMPL(__imp__sub_83C1F510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11352
	ctx.r3.s64 = ctx.r11.s64 + -11352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F51C"))) PPC_WEAK_FUNC(sub_83C1F51C);
PPC_FUNC_IMPL(__imp__sub_83C1F51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F520"))) PPC_WEAK_FUNC(sub_83C1F520);
PPC_FUNC_IMPL(__imp__sub_83C1F520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11344
	ctx.r3.s64 = ctx.r11.s64 + -11344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F52C"))) PPC_WEAK_FUNC(sub_83C1F52C);
PPC_FUNC_IMPL(__imp__sub_83C1F52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F530"))) PPC_WEAK_FUNC(sub_83C1F530);
PPC_FUNC_IMPL(__imp__sub_83C1F530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11336
	ctx.r3.s64 = ctx.r11.s64 + -11336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F53C"))) PPC_WEAK_FUNC(sub_83C1F53C);
PPC_FUNC_IMPL(__imp__sub_83C1F53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F540"))) PPC_WEAK_FUNC(sub_83C1F540);
PPC_FUNC_IMPL(__imp__sub_83C1F540) {
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
	// addi r3,r11,-17592
	ctx.r3.s64 = ctx.r11.s64 + -17592;
	// bl 0x83523120
	ctx.lr = 0x83C1F558;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-11328
	ctx.r3.s64 = ctx.r10.s64 + -11328;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1F564;
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

__attribute__((alias("__imp__sub_83C1F574"))) PPC_WEAK_FUNC(sub_83C1F574);
PPC_FUNC_IMPL(__imp__sub_83C1F574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F578"))) PPC_WEAK_FUNC(sub_83C1F578);
PPC_FUNC_IMPL(__imp__sub_83C1F578) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17588
	ctx.r7.s64 = ctx.r8.s64 + -17588;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17588(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17588);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17588(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17588, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1F5A0"))) PPC_WEAK_FUNC(sub_83C1F5A0);
PPC_FUNC_IMPL(__imp__sub_83C1F5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,6556
	ctx.r6.s64 = ctx.r7.s64 + 6556;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6484(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6484);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17588(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17588);
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
	// std r9,6556(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6556, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1F5E8"))) PPC_WEAK_FUNC(sub_83C1F5E8);
PPC_FUNC_IMPL(__imp__sub_83C1F5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11312
	ctx.r3.s64 = ctx.r11.s64 + -11312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F5F4"))) PPC_WEAK_FUNC(sub_83C1F5F4);
PPC_FUNC_IMPL(__imp__sub_83C1F5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F5F8"))) PPC_WEAK_FUNC(sub_83C1F5F8);
PPC_FUNC_IMPL(__imp__sub_83C1F5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11304
	ctx.r3.s64 = ctx.r11.s64 + -11304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F604"))) PPC_WEAK_FUNC(sub_83C1F604);
PPC_FUNC_IMPL(__imp__sub_83C1F604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F608"))) PPC_WEAK_FUNC(sub_83C1F608);
PPC_FUNC_IMPL(__imp__sub_83C1F608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11296
	ctx.r3.s64 = ctx.r11.s64 + -11296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F614"))) PPC_WEAK_FUNC(sub_83C1F614);
PPC_FUNC_IMPL(__imp__sub_83C1F614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F618"))) PPC_WEAK_FUNC(sub_83C1F618);
PPC_FUNC_IMPL(__imp__sub_83C1F618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11288
	ctx.r3.s64 = ctx.r11.s64 + -11288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F624"))) PPC_WEAK_FUNC(sub_83C1F624);
PPC_FUNC_IMPL(__imp__sub_83C1F624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F628"))) PPC_WEAK_FUNC(sub_83C1F628);
PPC_FUNC_IMPL(__imp__sub_83C1F628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11280
	ctx.r3.s64 = ctx.r11.s64 + -11280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F634"))) PPC_WEAK_FUNC(sub_83C1F634);
PPC_FUNC_IMPL(__imp__sub_83C1F634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F638"))) PPC_WEAK_FUNC(sub_83C1F638);
PPC_FUNC_IMPL(__imp__sub_83C1F638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11272
	ctx.r3.s64 = ctx.r11.s64 + -11272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F644"))) PPC_WEAK_FUNC(sub_83C1F644);
PPC_FUNC_IMPL(__imp__sub_83C1F644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F648"))) PPC_WEAK_FUNC(sub_83C1F648);
PPC_FUNC_IMPL(__imp__sub_83C1F648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11264
	ctx.r3.s64 = ctx.r11.s64 + -11264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F654"))) PPC_WEAK_FUNC(sub_83C1F654);
PPC_FUNC_IMPL(__imp__sub_83C1F654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F658"))) PPC_WEAK_FUNC(sub_83C1F658);
PPC_FUNC_IMPL(__imp__sub_83C1F658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11256
	ctx.r3.s64 = ctx.r11.s64 + -11256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F664"))) PPC_WEAK_FUNC(sub_83C1F664);
PPC_FUNC_IMPL(__imp__sub_83C1F664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F668"))) PPC_WEAK_FUNC(sub_83C1F668);
PPC_FUNC_IMPL(__imp__sub_83C1F668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11248
	ctx.r3.s64 = ctx.r11.s64 + -11248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F674"))) PPC_WEAK_FUNC(sub_83C1F674);
PPC_FUNC_IMPL(__imp__sub_83C1F674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F678"))) PPC_WEAK_FUNC(sub_83C1F678);
PPC_FUNC_IMPL(__imp__sub_83C1F678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11240
	ctx.r3.s64 = ctx.r11.s64 + -11240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F684"))) PPC_WEAK_FUNC(sub_83C1F684);
PPC_FUNC_IMPL(__imp__sub_83C1F684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F688"))) PPC_WEAK_FUNC(sub_83C1F688);
PPC_FUNC_IMPL(__imp__sub_83C1F688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11232
	ctx.r3.s64 = ctx.r11.s64 + -11232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F694"))) PPC_WEAK_FUNC(sub_83C1F694);
PPC_FUNC_IMPL(__imp__sub_83C1F694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F698"))) PPC_WEAK_FUNC(sub_83C1F698);
PPC_FUNC_IMPL(__imp__sub_83C1F698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11224
	ctx.r3.s64 = ctx.r11.s64 + -11224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F6A4"))) PPC_WEAK_FUNC(sub_83C1F6A4);
PPC_FUNC_IMPL(__imp__sub_83C1F6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F6A8"))) PPC_WEAK_FUNC(sub_83C1F6A8);
PPC_FUNC_IMPL(__imp__sub_83C1F6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11216
	ctx.r3.s64 = ctx.r11.s64 + -11216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F6B4"))) PPC_WEAK_FUNC(sub_83C1F6B4);
PPC_FUNC_IMPL(__imp__sub_83C1F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F6B8"))) PPC_WEAK_FUNC(sub_83C1F6B8);
PPC_FUNC_IMPL(__imp__sub_83C1F6B8) {
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
	// addi r3,r11,-17580
	ctx.r3.s64 = ctx.r11.s64 + -17580;
	// bl 0x83523120
	ctx.lr = 0x83C1F6D0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-11208
	ctx.r3.s64 = ctx.r10.s64 + -11208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1F6DC;
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

__attribute__((alias("__imp__sub_83C1F6EC"))) PPC_WEAK_FUNC(sub_83C1F6EC);
PPC_FUNC_IMPL(__imp__sub_83C1F6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F6F0"))) PPC_WEAK_FUNC(sub_83C1F6F0);
PPC_FUNC_IMPL(__imp__sub_83C1F6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17576
	ctx.r7.s64 = ctx.r8.s64 + -17576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17576(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17576);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17576(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17576, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1F718"))) PPC_WEAK_FUNC(sub_83C1F718);
PPC_FUNC_IMPL(__imp__sub_83C1F718) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,6684
	ctx.r6.s64 = ctx.r7.s64 + 6684;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6612(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6612);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17576(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17576);
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
	// std r9,6684(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6684, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1F760"))) PPC_WEAK_FUNC(sub_83C1F760);
PPC_FUNC_IMPL(__imp__sub_83C1F760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11192
	ctx.r3.s64 = ctx.r11.s64 + -11192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F76C"))) PPC_WEAK_FUNC(sub_83C1F76C);
PPC_FUNC_IMPL(__imp__sub_83C1F76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F770"))) PPC_WEAK_FUNC(sub_83C1F770);
PPC_FUNC_IMPL(__imp__sub_83C1F770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11184
	ctx.r3.s64 = ctx.r11.s64 + -11184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F77C"))) PPC_WEAK_FUNC(sub_83C1F77C);
PPC_FUNC_IMPL(__imp__sub_83C1F77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F780"))) PPC_WEAK_FUNC(sub_83C1F780);
PPC_FUNC_IMPL(__imp__sub_83C1F780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11176
	ctx.r3.s64 = ctx.r11.s64 + -11176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F78C"))) PPC_WEAK_FUNC(sub_83C1F78C);
PPC_FUNC_IMPL(__imp__sub_83C1F78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F790"))) PPC_WEAK_FUNC(sub_83C1F790);
PPC_FUNC_IMPL(__imp__sub_83C1F790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11168
	ctx.r3.s64 = ctx.r11.s64 + -11168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F79C"))) PPC_WEAK_FUNC(sub_83C1F79C);
PPC_FUNC_IMPL(__imp__sub_83C1F79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F7A0"))) PPC_WEAK_FUNC(sub_83C1F7A0);
PPC_FUNC_IMPL(__imp__sub_83C1F7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11160
	ctx.r3.s64 = ctx.r11.s64 + -11160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F7AC"))) PPC_WEAK_FUNC(sub_83C1F7AC);
PPC_FUNC_IMPL(__imp__sub_83C1F7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F7B0"))) PPC_WEAK_FUNC(sub_83C1F7B0);
PPC_FUNC_IMPL(__imp__sub_83C1F7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11152
	ctx.r3.s64 = ctx.r11.s64 + -11152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F7BC"))) PPC_WEAK_FUNC(sub_83C1F7BC);
PPC_FUNC_IMPL(__imp__sub_83C1F7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F7C0"))) PPC_WEAK_FUNC(sub_83C1F7C0);
PPC_FUNC_IMPL(__imp__sub_83C1F7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11144
	ctx.r3.s64 = ctx.r11.s64 + -11144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F7CC"))) PPC_WEAK_FUNC(sub_83C1F7CC);
PPC_FUNC_IMPL(__imp__sub_83C1F7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F7D0"))) PPC_WEAK_FUNC(sub_83C1F7D0);
PPC_FUNC_IMPL(__imp__sub_83C1F7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11136
	ctx.r3.s64 = ctx.r11.s64 + -11136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F7DC"))) PPC_WEAK_FUNC(sub_83C1F7DC);
PPC_FUNC_IMPL(__imp__sub_83C1F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F7E0"))) PPC_WEAK_FUNC(sub_83C1F7E0);
PPC_FUNC_IMPL(__imp__sub_83C1F7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11128
	ctx.r3.s64 = ctx.r11.s64 + -11128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F7EC"))) PPC_WEAK_FUNC(sub_83C1F7EC);
PPC_FUNC_IMPL(__imp__sub_83C1F7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F7F0"))) PPC_WEAK_FUNC(sub_83C1F7F0);
PPC_FUNC_IMPL(__imp__sub_83C1F7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11120
	ctx.r3.s64 = ctx.r11.s64 + -11120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F7FC"))) PPC_WEAK_FUNC(sub_83C1F7FC);
PPC_FUNC_IMPL(__imp__sub_83C1F7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F800"))) PPC_WEAK_FUNC(sub_83C1F800);
PPC_FUNC_IMPL(__imp__sub_83C1F800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11112
	ctx.r3.s64 = ctx.r11.s64 + -11112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F80C"))) PPC_WEAK_FUNC(sub_83C1F80C);
PPC_FUNC_IMPL(__imp__sub_83C1F80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F810"))) PPC_WEAK_FUNC(sub_83C1F810);
PPC_FUNC_IMPL(__imp__sub_83C1F810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11104
	ctx.r3.s64 = ctx.r11.s64 + -11104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F81C"))) PPC_WEAK_FUNC(sub_83C1F81C);
PPC_FUNC_IMPL(__imp__sub_83C1F81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F820"))) PPC_WEAK_FUNC(sub_83C1F820);
PPC_FUNC_IMPL(__imp__sub_83C1F820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11096
	ctx.r3.s64 = ctx.r11.s64 + -11096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F82C"))) PPC_WEAK_FUNC(sub_83C1F82C);
PPC_FUNC_IMPL(__imp__sub_83C1F82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F830"))) PPC_WEAK_FUNC(sub_83C1F830);
PPC_FUNC_IMPL(__imp__sub_83C1F830) {
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
	// addi r3,r11,-17568
	ctx.r3.s64 = ctx.r11.s64 + -17568;
	// bl 0x83523120
	ctx.lr = 0x83C1F848;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-11088
	ctx.r3.s64 = ctx.r10.s64 + -11088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1F854;
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

__attribute__((alias("__imp__sub_83C1F864"))) PPC_WEAK_FUNC(sub_83C1F864);
PPC_FUNC_IMPL(__imp__sub_83C1F864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F868"))) PPC_WEAK_FUNC(sub_83C1F868);
PPC_FUNC_IMPL(__imp__sub_83C1F868) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17564
	ctx.r7.s64 = ctx.r8.s64 + -17564;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17564(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17564);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17564(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17564, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1F890"))) PPC_WEAK_FUNC(sub_83C1F890);
PPC_FUNC_IMPL(__imp__sub_83C1F890) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,6812
	ctx.r6.s64 = ctx.r7.s64 + 6812;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6740(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6740);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17564(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17564);
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
	// std r9,6812(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6812, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1F8D8"))) PPC_WEAK_FUNC(sub_83C1F8D8);
PPC_FUNC_IMPL(__imp__sub_83C1F8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11072
	ctx.r3.s64 = ctx.r11.s64 + -11072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F8E4"))) PPC_WEAK_FUNC(sub_83C1F8E4);
PPC_FUNC_IMPL(__imp__sub_83C1F8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F8E8"))) PPC_WEAK_FUNC(sub_83C1F8E8);
PPC_FUNC_IMPL(__imp__sub_83C1F8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11064
	ctx.r3.s64 = ctx.r11.s64 + -11064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F8F4"))) PPC_WEAK_FUNC(sub_83C1F8F4);
PPC_FUNC_IMPL(__imp__sub_83C1F8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F8F8"))) PPC_WEAK_FUNC(sub_83C1F8F8);
PPC_FUNC_IMPL(__imp__sub_83C1F8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11056
	ctx.r3.s64 = ctx.r11.s64 + -11056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F904"))) PPC_WEAK_FUNC(sub_83C1F904);
PPC_FUNC_IMPL(__imp__sub_83C1F904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F908"))) PPC_WEAK_FUNC(sub_83C1F908);
PPC_FUNC_IMPL(__imp__sub_83C1F908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11048
	ctx.r3.s64 = ctx.r11.s64 + -11048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F914"))) PPC_WEAK_FUNC(sub_83C1F914);
PPC_FUNC_IMPL(__imp__sub_83C1F914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F918"))) PPC_WEAK_FUNC(sub_83C1F918);
PPC_FUNC_IMPL(__imp__sub_83C1F918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11040
	ctx.r3.s64 = ctx.r11.s64 + -11040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F924"))) PPC_WEAK_FUNC(sub_83C1F924);
PPC_FUNC_IMPL(__imp__sub_83C1F924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F928"))) PPC_WEAK_FUNC(sub_83C1F928);
PPC_FUNC_IMPL(__imp__sub_83C1F928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11032
	ctx.r3.s64 = ctx.r11.s64 + -11032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F934"))) PPC_WEAK_FUNC(sub_83C1F934);
PPC_FUNC_IMPL(__imp__sub_83C1F934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F938"))) PPC_WEAK_FUNC(sub_83C1F938);
PPC_FUNC_IMPL(__imp__sub_83C1F938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11024
	ctx.r3.s64 = ctx.r11.s64 + -11024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F944"))) PPC_WEAK_FUNC(sub_83C1F944);
PPC_FUNC_IMPL(__imp__sub_83C1F944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F948"))) PPC_WEAK_FUNC(sub_83C1F948);
PPC_FUNC_IMPL(__imp__sub_83C1F948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11016
	ctx.r3.s64 = ctx.r11.s64 + -11016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F954"))) PPC_WEAK_FUNC(sub_83C1F954);
PPC_FUNC_IMPL(__imp__sub_83C1F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F958"))) PPC_WEAK_FUNC(sub_83C1F958);
PPC_FUNC_IMPL(__imp__sub_83C1F958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11008
	ctx.r3.s64 = ctx.r11.s64 + -11008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F964"))) PPC_WEAK_FUNC(sub_83C1F964);
PPC_FUNC_IMPL(__imp__sub_83C1F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F968"))) PPC_WEAK_FUNC(sub_83C1F968);
PPC_FUNC_IMPL(__imp__sub_83C1F968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-11000
	ctx.r3.s64 = ctx.r11.s64 + -11000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F974"))) PPC_WEAK_FUNC(sub_83C1F974);
PPC_FUNC_IMPL(__imp__sub_83C1F974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F978"))) PPC_WEAK_FUNC(sub_83C1F978);
PPC_FUNC_IMPL(__imp__sub_83C1F978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10992
	ctx.r3.s64 = ctx.r11.s64 + -10992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F984"))) PPC_WEAK_FUNC(sub_83C1F984);
PPC_FUNC_IMPL(__imp__sub_83C1F984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F988"))) PPC_WEAK_FUNC(sub_83C1F988);
PPC_FUNC_IMPL(__imp__sub_83C1F988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10984
	ctx.r3.s64 = ctx.r11.s64 + -10984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F994"))) PPC_WEAK_FUNC(sub_83C1F994);
PPC_FUNC_IMPL(__imp__sub_83C1F994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F998"))) PPC_WEAK_FUNC(sub_83C1F998);
PPC_FUNC_IMPL(__imp__sub_83C1F998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10976
	ctx.r3.s64 = ctx.r11.s64 + -10976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1F9A4"))) PPC_WEAK_FUNC(sub_83C1F9A4);
PPC_FUNC_IMPL(__imp__sub_83C1F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F9A8"))) PPC_WEAK_FUNC(sub_83C1F9A8);
PPC_FUNC_IMPL(__imp__sub_83C1F9A8) {
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
	// addi r3,r11,-17556
	ctx.r3.s64 = ctx.r11.s64 + -17556;
	// bl 0x83523120
	ctx.lr = 0x83C1F9C0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-10968
	ctx.r3.s64 = ctx.r10.s64 + -10968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1F9CC;
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

__attribute__((alias("__imp__sub_83C1F9DC"))) PPC_WEAK_FUNC(sub_83C1F9DC);
PPC_FUNC_IMPL(__imp__sub_83C1F9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1F9E0"))) PPC_WEAK_FUNC(sub_83C1F9E0);
PPC_FUNC_IMPL(__imp__sub_83C1F9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17552
	ctx.r7.s64 = ctx.r8.s64 + -17552;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17552(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17552);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17552(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17552, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1FA08"))) PPC_WEAK_FUNC(sub_83C1FA08);
PPC_FUNC_IMPL(__imp__sub_83C1FA08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,6940
	ctx.r6.s64 = ctx.r7.s64 + 6940;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6868(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6868);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17552(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17552);
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
	// std r9,6940(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6940, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1FA50"))) PPC_WEAK_FUNC(sub_83C1FA50);
PPC_FUNC_IMPL(__imp__sub_83C1FA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10952
	ctx.r3.s64 = ctx.r11.s64 + -10952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FA5C"))) PPC_WEAK_FUNC(sub_83C1FA5C);
PPC_FUNC_IMPL(__imp__sub_83C1FA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FA60"))) PPC_WEAK_FUNC(sub_83C1FA60);
PPC_FUNC_IMPL(__imp__sub_83C1FA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10944
	ctx.r3.s64 = ctx.r11.s64 + -10944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FA6C"))) PPC_WEAK_FUNC(sub_83C1FA6C);
PPC_FUNC_IMPL(__imp__sub_83C1FA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FA70"))) PPC_WEAK_FUNC(sub_83C1FA70);
PPC_FUNC_IMPL(__imp__sub_83C1FA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10936
	ctx.r3.s64 = ctx.r11.s64 + -10936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FA7C"))) PPC_WEAK_FUNC(sub_83C1FA7C);
PPC_FUNC_IMPL(__imp__sub_83C1FA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FA80"))) PPC_WEAK_FUNC(sub_83C1FA80);
PPC_FUNC_IMPL(__imp__sub_83C1FA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10928
	ctx.r3.s64 = ctx.r11.s64 + -10928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FA8C"))) PPC_WEAK_FUNC(sub_83C1FA8C);
PPC_FUNC_IMPL(__imp__sub_83C1FA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FA90"))) PPC_WEAK_FUNC(sub_83C1FA90);
PPC_FUNC_IMPL(__imp__sub_83C1FA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10920
	ctx.r3.s64 = ctx.r11.s64 + -10920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FA9C"))) PPC_WEAK_FUNC(sub_83C1FA9C);
PPC_FUNC_IMPL(__imp__sub_83C1FA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FAA0"))) PPC_WEAK_FUNC(sub_83C1FAA0);
PPC_FUNC_IMPL(__imp__sub_83C1FAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10912
	ctx.r3.s64 = ctx.r11.s64 + -10912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FAAC"))) PPC_WEAK_FUNC(sub_83C1FAAC);
PPC_FUNC_IMPL(__imp__sub_83C1FAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FAB0"))) PPC_WEAK_FUNC(sub_83C1FAB0);
PPC_FUNC_IMPL(__imp__sub_83C1FAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10904
	ctx.r3.s64 = ctx.r11.s64 + -10904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FABC"))) PPC_WEAK_FUNC(sub_83C1FABC);
PPC_FUNC_IMPL(__imp__sub_83C1FABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FAC0"))) PPC_WEAK_FUNC(sub_83C1FAC0);
PPC_FUNC_IMPL(__imp__sub_83C1FAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10896
	ctx.r3.s64 = ctx.r11.s64 + -10896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FACC"))) PPC_WEAK_FUNC(sub_83C1FACC);
PPC_FUNC_IMPL(__imp__sub_83C1FACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FAD0"))) PPC_WEAK_FUNC(sub_83C1FAD0);
PPC_FUNC_IMPL(__imp__sub_83C1FAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10888
	ctx.r3.s64 = ctx.r11.s64 + -10888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FADC"))) PPC_WEAK_FUNC(sub_83C1FADC);
PPC_FUNC_IMPL(__imp__sub_83C1FADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FAE0"))) PPC_WEAK_FUNC(sub_83C1FAE0);
PPC_FUNC_IMPL(__imp__sub_83C1FAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10880
	ctx.r3.s64 = ctx.r11.s64 + -10880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FAEC"))) PPC_WEAK_FUNC(sub_83C1FAEC);
PPC_FUNC_IMPL(__imp__sub_83C1FAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FAF0"))) PPC_WEAK_FUNC(sub_83C1FAF0);
PPC_FUNC_IMPL(__imp__sub_83C1FAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10872
	ctx.r3.s64 = ctx.r11.s64 + -10872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FAFC"))) PPC_WEAK_FUNC(sub_83C1FAFC);
PPC_FUNC_IMPL(__imp__sub_83C1FAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FB00"))) PPC_WEAK_FUNC(sub_83C1FB00);
PPC_FUNC_IMPL(__imp__sub_83C1FB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10864
	ctx.r3.s64 = ctx.r11.s64 + -10864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FB0C"))) PPC_WEAK_FUNC(sub_83C1FB0C);
PPC_FUNC_IMPL(__imp__sub_83C1FB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FB10"))) PPC_WEAK_FUNC(sub_83C1FB10);
PPC_FUNC_IMPL(__imp__sub_83C1FB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10856
	ctx.r3.s64 = ctx.r11.s64 + -10856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FB1C"))) PPC_WEAK_FUNC(sub_83C1FB1C);
PPC_FUNC_IMPL(__imp__sub_83C1FB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FB20"))) PPC_WEAK_FUNC(sub_83C1FB20);
PPC_FUNC_IMPL(__imp__sub_83C1FB20) {
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
	// addi r3,r11,-17544
	ctx.r3.s64 = ctx.r11.s64 + -17544;
	// bl 0x83523120
	ctx.lr = 0x83C1FB38;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-10848
	ctx.r3.s64 = ctx.r10.s64 + -10848;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1FB44;
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

__attribute__((alias("__imp__sub_83C1FB54"))) PPC_WEAK_FUNC(sub_83C1FB54);
PPC_FUNC_IMPL(__imp__sub_83C1FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FB58"))) PPC_WEAK_FUNC(sub_83C1FB58);
PPC_FUNC_IMPL(__imp__sub_83C1FB58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17540
	ctx.r7.s64 = ctx.r8.s64 + -17540;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17540(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17540);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17540(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17540, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1FB80"))) PPC_WEAK_FUNC(sub_83C1FB80);
PPC_FUNC_IMPL(__imp__sub_83C1FB80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,7068
	ctx.r6.s64 = ctx.r7.s64 + 7068;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6996(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6996);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17540(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17540);
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
	// std r9,7068(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7068, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1FBC8"))) PPC_WEAK_FUNC(sub_83C1FBC8);
PPC_FUNC_IMPL(__imp__sub_83C1FBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10832
	ctx.r3.s64 = ctx.r11.s64 + -10832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FBD4"))) PPC_WEAK_FUNC(sub_83C1FBD4);
PPC_FUNC_IMPL(__imp__sub_83C1FBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FBD8"))) PPC_WEAK_FUNC(sub_83C1FBD8);
PPC_FUNC_IMPL(__imp__sub_83C1FBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10824
	ctx.r3.s64 = ctx.r11.s64 + -10824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FBE4"))) PPC_WEAK_FUNC(sub_83C1FBE4);
PPC_FUNC_IMPL(__imp__sub_83C1FBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FBE8"))) PPC_WEAK_FUNC(sub_83C1FBE8);
PPC_FUNC_IMPL(__imp__sub_83C1FBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10816
	ctx.r3.s64 = ctx.r11.s64 + -10816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FBF4"))) PPC_WEAK_FUNC(sub_83C1FBF4);
PPC_FUNC_IMPL(__imp__sub_83C1FBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FBF8"))) PPC_WEAK_FUNC(sub_83C1FBF8);
PPC_FUNC_IMPL(__imp__sub_83C1FBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10808
	ctx.r3.s64 = ctx.r11.s64 + -10808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FC04"))) PPC_WEAK_FUNC(sub_83C1FC04);
PPC_FUNC_IMPL(__imp__sub_83C1FC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FC08"))) PPC_WEAK_FUNC(sub_83C1FC08);
PPC_FUNC_IMPL(__imp__sub_83C1FC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10800
	ctx.r3.s64 = ctx.r11.s64 + -10800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FC14"))) PPC_WEAK_FUNC(sub_83C1FC14);
PPC_FUNC_IMPL(__imp__sub_83C1FC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FC18"))) PPC_WEAK_FUNC(sub_83C1FC18);
PPC_FUNC_IMPL(__imp__sub_83C1FC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10792
	ctx.r3.s64 = ctx.r11.s64 + -10792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FC24"))) PPC_WEAK_FUNC(sub_83C1FC24);
PPC_FUNC_IMPL(__imp__sub_83C1FC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FC28"))) PPC_WEAK_FUNC(sub_83C1FC28);
PPC_FUNC_IMPL(__imp__sub_83C1FC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10784
	ctx.r3.s64 = ctx.r11.s64 + -10784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FC34"))) PPC_WEAK_FUNC(sub_83C1FC34);
PPC_FUNC_IMPL(__imp__sub_83C1FC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FC38"))) PPC_WEAK_FUNC(sub_83C1FC38);
PPC_FUNC_IMPL(__imp__sub_83C1FC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10776
	ctx.r3.s64 = ctx.r11.s64 + -10776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FC44"))) PPC_WEAK_FUNC(sub_83C1FC44);
PPC_FUNC_IMPL(__imp__sub_83C1FC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FC48"))) PPC_WEAK_FUNC(sub_83C1FC48);
PPC_FUNC_IMPL(__imp__sub_83C1FC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10768
	ctx.r3.s64 = ctx.r11.s64 + -10768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FC54"))) PPC_WEAK_FUNC(sub_83C1FC54);
PPC_FUNC_IMPL(__imp__sub_83C1FC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FC58"))) PPC_WEAK_FUNC(sub_83C1FC58);
PPC_FUNC_IMPL(__imp__sub_83C1FC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10760
	ctx.r3.s64 = ctx.r11.s64 + -10760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FC64"))) PPC_WEAK_FUNC(sub_83C1FC64);
PPC_FUNC_IMPL(__imp__sub_83C1FC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FC68"))) PPC_WEAK_FUNC(sub_83C1FC68);
PPC_FUNC_IMPL(__imp__sub_83C1FC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10752
	ctx.r3.s64 = ctx.r11.s64 + -10752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FC74"))) PPC_WEAK_FUNC(sub_83C1FC74);
PPC_FUNC_IMPL(__imp__sub_83C1FC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FC78"))) PPC_WEAK_FUNC(sub_83C1FC78);
PPC_FUNC_IMPL(__imp__sub_83C1FC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10744
	ctx.r3.s64 = ctx.r11.s64 + -10744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FC84"))) PPC_WEAK_FUNC(sub_83C1FC84);
PPC_FUNC_IMPL(__imp__sub_83C1FC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FC88"))) PPC_WEAK_FUNC(sub_83C1FC88);
PPC_FUNC_IMPL(__imp__sub_83C1FC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10736
	ctx.r3.s64 = ctx.r11.s64 + -10736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FC94"))) PPC_WEAK_FUNC(sub_83C1FC94);
PPC_FUNC_IMPL(__imp__sub_83C1FC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FC98"))) PPC_WEAK_FUNC(sub_83C1FC98);
PPC_FUNC_IMPL(__imp__sub_83C1FC98) {
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
	// addi r3,r11,-17532
	ctx.r3.s64 = ctx.r11.s64 + -17532;
	// bl 0x83523120
	ctx.lr = 0x83C1FCB0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-10728
	ctx.r3.s64 = ctx.r10.s64 + -10728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1FCBC;
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

__attribute__((alias("__imp__sub_83C1FCCC"))) PPC_WEAK_FUNC(sub_83C1FCCC);
PPC_FUNC_IMPL(__imp__sub_83C1FCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FCD0"))) PPC_WEAK_FUNC(sub_83C1FCD0);
PPC_FUNC_IMPL(__imp__sub_83C1FCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17528
	ctx.r7.s64 = ctx.r8.s64 + -17528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17528);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17528(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17528, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1FCF8"))) PPC_WEAK_FUNC(sub_83C1FCF8);
PPC_FUNC_IMPL(__imp__sub_83C1FCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,7196
	ctx.r6.s64 = ctx.r7.s64 + 7196;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7124(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7124);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17528(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17528);
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
	// std r9,7196(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7196, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1FD40"))) PPC_WEAK_FUNC(sub_83C1FD40);
PPC_FUNC_IMPL(__imp__sub_83C1FD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10712
	ctx.r3.s64 = ctx.r11.s64 + -10712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FD4C"))) PPC_WEAK_FUNC(sub_83C1FD4C);
PPC_FUNC_IMPL(__imp__sub_83C1FD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FD50"))) PPC_WEAK_FUNC(sub_83C1FD50);
PPC_FUNC_IMPL(__imp__sub_83C1FD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10704
	ctx.r3.s64 = ctx.r11.s64 + -10704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FD5C"))) PPC_WEAK_FUNC(sub_83C1FD5C);
PPC_FUNC_IMPL(__imp__sub_83C1FD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FD60"))) PPC_WEAK_FUNC(sub_83C1FD60);
PPC_FUNC_IMPL(__imp__sub_83C1FD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10696
	ctx.r3.s64 = ctx.r11.s64 + -10696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FD6C"))) PPC_WEAK_FUNC(sub_83C1FD6C);
PPC_FUNC_IMPL(__imp__sub_83C1FD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FD70"))) PPC_WEAK_FUNC(sub_83C1FD70);
PPC_FUNC_IMPL(__imp__sub_83C1FD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10688
	ctx.r3.s64 = ctx.r11.s64 + -10688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FD7C"))) PPC_WEAK_FUNC(sub_83C1FD7C);
PPC_FUNC_IMPL(__imp__sub_83C1FD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FD80"))) PPC_WEAK_FUNC(sub_83C1FD80);
PPC_FUNC_IMPL(__imp__sub_83C1FD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10680
	ctx.r3.s64 = ctx.r11.s64 + -10680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FD8C"))) PPC_WEAK_FUNC(sub_83C1FD8C);
PPC_FUNC_IMPL(__imp__sub_83C1FD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FD90"))) PPC_WEAK_FUNC(sub_83C1FD90);
PPC_FUNC_IMPL(__imp__sub_83C1FD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10672
	ctx.r3.s64 = ctx.r11.s64 + -10672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FD9C"))) PPC_WEAK_FUNC(sub_83C1FD9C);
PPC_FUNC_IMPL(__imp__sub_83C1FD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FDA0"))) PPC_WEAK_FUNC(sub_83C1FDA0);
PPC_FUNC_IMPL(__imp__sub_83C1FDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FDAC"))) PPC_WEAK_FUNC(sub_83C1FDAC);
PPC_FUNC_IMPL(__imp__sub_83C1FDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FDB0"))) PPC_WEAK_FUNC(sub_83C1FDB0);
PPC_FUNC_IMPL(__imp__sub_83C1FDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10656
	ctx.r3.s64 = ctx.r11.s64 + -10656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FDBC"))) PPC_WEAK_FUNC(sub_83C1FDBC);
PPC_FUNC_IMPL(__imp__sub_83C1FDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FDC0"))) PPC_WEAK_FUNC(sub_83C1FDC0);
PPC_FUNC_IMPL(__imp__sub_83C1FDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10648
	ctx.r3.s64 = ctx.r11.s64 + -10648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FDCC"))) PPC_WEAK_FUNC(sub_83C1FDCC);
PPC_FUNC_IMPL(__imp__sub_83C1FDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FDD0"))) PPC_WEAK_FUNC(sub_83C1FDD0);
PPC_FUNC_IMPL(__imp__sub_83C1FDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10640
	ctx.r3.s64 = ctx.r11.s64 + -10640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FDDC"))) PPC_WEAK_FUNC(sub_83C1FDDC);
PPC_FUNC_IMPL(__imp__sub_83C1FDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FDE0"))) PPC_WEAK_FUNC(sub_83C1FDE0);
PPC_FUNC_IMPL(__imp__sub_83C1FDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10632
	ctx.r3.s64 = ctx.r11.s64 + -10632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FDEC"))) PPC_WEAK_FUNC(sub_83C1FDEC);
PPC_FUNC_IMPL(__imp__sub_83C1FDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FDF0"))) PPC_WEAK_FUNC(sub_83C1FDF0);
PPC_FUNC_IMPL(__imp__sub_83C1FDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10624
	ctx.r3.s64 = ctx.r11.s64 + -10624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FDFC"))) PPC_WEAK_FUNC(sub_83C1FDFC);
PPC_FUNC_IMPL(__imp__sub_83C1FDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FE00"))) PPC_WEAK_FUNC(sub_83C1FE00);
PPC_FUNC_IMPL(__imp__sub_83C1FE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10616
	ctx.r3.s64 = ctx.r11.s64 + -10616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FE0C"))) PPC_WEAK_FUNC(sub_83C1FE0C);
PPC_FUNC_IMPL(__imp__sub_83C1FE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FE10"))) PPC_WEAK_FUNC(sub_83C1FE10);
PPC_FUNC_IMPL(__imp__sub_83C1FE10) {
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
	// addi r3,r11,-17520
	ctx.r3.s64 = ctx.r11.s64 + -17520;
	// bl 0x83523120
	ctx.lr = 0x83C1FE28;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-10608
	ctx.r3.s64 = ctx.r10.s64 + -10608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1FE34;
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

__attribute__((alias("__imp__sub_83C1FE44"))) PPC_WEAK_FUNC(sub_83C1FE44);
PPC_FUNC_IMPL(__imp__sub_83C1FE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FE48"))) PPC_WEAK_FUNC(sub_83C1FE48);
PPC_FUNC_IMPL(__imp__sub_83C1FE48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17516
	ctx.r7.s64 = ctx.r8.s64 + -17516;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17516(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17516);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17516(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17516, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1FE70"))) PPC_WEAK_FUNC(sub_83C1FE70);
PPC_FUNC_IMPL(__imp__sub_83C1FE70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,7324
	ctx.r6.s64 = ctx.r7.s64 + 7324;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7252(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7252);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17516(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17516);
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
	// std r9,7324(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7324, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1FEB8"))) PPC_WEAK_FUNC(sub_83C1FEB8);
PPC_FUNC_IMPL(__imp__sub_83C1FEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10592
	ctx.r3.s64 = ctx.r11.s64 + -10592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FEC4"))) PPC_WEAK_FUNC(sub_83C1FEC4);
PPC_FUNC_IMPL(__imp__sub_83C1FEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FEC8"))) PPC_WEAK_FUNC(sub_83C1FEC8);
PPC_FUNC_IMPL(__imp__sub_83C1FEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10584
	ctx.r3.s64 = ctx.r11.s64 + -10584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FED4"))) PPC_WEAK_FUNC(sub_83C1FED4);
PPC_FUNC_IMPL(__imp__sub_83C1FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FED8"))) PPC_WEAK_FUNC(sub_83C1FED8);
PPC_FUNC_IMPL(__imp__sub_83C1FED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10576
	ctx.r3.s64 = ctx.r11.s64 + -10576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FEE4"))) PPC_WEAK_FUNC(sub_83C1FEE4);
PPC_FUNC_IMPL(__imp__sub_83C1FEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FEE8"))) PPC_WEAK_FUNC(sub_83C1FEE8);
PPC_FUNC_IMPL(__imp__sub_83C1FEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10568
	ctx.r3.s64 = ctx.r11.s64 + -10568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FEF4"))) PPC_WEAK_FUNC(sub_83C1FEF4);
PPC_FUNC_IMPL(__imp__sub_83C1FEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FEF8"))) PPC_WEAK_FUNC(sub_83C1FEF8);
PPC_FUNC_IMPL(__imp__sub_83C1FEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10560
	ctx.r3.s64 = ctx.r11.s64 + -10560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FF04"))) PPC_WEAK_FUNC(sub_83C1FF04);
PPC_FUNC_IMPL(__imp__sub_83C1FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FF08"))) PPC_WEAK_FUNC(sub_83C1FF08);
PPC_FUNC_IMPL(__imp__sub_83C1FF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10552
	ctx.r3.s64 = ctx.r11.s64 + -10552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FF14"))) PPC_WEAK_FUNC(sub_83C1FF14);
PPC_FUNC_IMPL(__imp__sub_83C1FF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FF18"))) PPC_WEAK_FUNC(sub_83C1FF18);
PPC_FUNC_IMPL(__imp__sub_83C1FF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10544
	ctx.r3.s64 = ctx.r11.s64 + -10544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FF24"))) PPC_WEAK_FUNC(sub_83C1FF24);
PPC_FUNC_IMPL(__imp__sub_83C1FF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FF28"))) PPC_WEAK_FUNC(sub_83C1FF28);
PPC_FUNC_IMPL(__imp__sub_83C1FF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10536
	ctx.r3.s64 = ctx.r11.s64 + -10536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FF34"))) PPC_WEAK_FUNC(sub_83C1FF34);
PPC_FUNC_IMPL(__imp__sub_83C1FF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FF38"))) PPC_WEAK_FUNC(sub_83C1FF38);
PPC_FUNC_IMPL(__imp__sub_83C1FF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FF44"))) PPC_WEAK_FUNC(sub_83C1FF44);
PPC_FUNC_IMPL(__imp__sub_83C1FF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FF48"))) PPC_WEAK_FUNC(sub_83C1FF48);
PPC_FUNC_IMPL(__imp__sub_83C1FF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10520
	ctx.r3.s64 = ctx.r11.s64 + -10520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FF54"))) PPC_WEAK_FUNC(sub_83C1FF54);
PPC_FUNC_IMPL(__imp__sub_83C1FF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FF58"))) PPC_WEAK_FUNC(sub_83C1FF58);
PPC_FUNC_IMPL(__imp__sub_83C1FF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10512
	ctx.r3.s64 = ctx.r11.s64 + -10512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FF64"))) PPC_WEAK_FUNC(sub_83C1FF64);
PPC_FUNC_IMPL(__imp__sub_83C1FF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FF68"))) PPC_WEAK_FUNC(sub_83C1FF68);
PPC_FUNC_IMPL(__imp__sub_83C1FF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10504
	ctx.r3.s64 = ctx.r11.s64 + -10504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FF74"))) PPC_WEAK_FUNC(sub_83C1FF74);
PPC_FUNC_IMPL(__imp__sub_83C1FF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FF78"))) PPC_WEAK_FUNC(sub_83C1FF78);
PPC_FUNC_IMPL(__imp__sub_83C1FF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10496
	ctx.r3.s64 = ctx.r11.s64 + -10496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1FF84"))) PPC_WEAK_FUNC(sub_83C1FF84);
PPC_FUNC_IMPL(__imp__sub_83C1FF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FF88"))) PPC_WEAK_FUNC(sub_83C1FF88);
PPC_FUNC_IMPL(__imp__sub_83C1FF88) {
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
	// addi r3,r11,-17508
	ctx.r3.s64 = ctx.r11.s64 + -17508;
	// bl 0x83523120
	ctx.lr = 0x83C1FFA0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-10488
	ctx.r3.s64 = ctx.r10.s64 + -10488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1FFAC;
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

__attribute__((alias("__imp__sub_83C1FFBC"))) PPC_WEAK_FUNC(sub_83C1FFBC);
PPC_FUNC_IMPL(__imp__sub_83C1FFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1FFC0"))) PPC_WEAK_FUNC(sub_83C1FFC0);
PPC_FUNC_IMPL(__imp__sub_83C1FFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17504
	ctx.r7.s64 = ctx.r8.s64 + -17504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17504(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1FFE8"))) PPC_WEAK_FUNC(sub_83C1FFE8);
PPC_FUNC_IMPL(__imp__sub_83C1FFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,7452
	ctx.r6.s64 = ctx.r7.s64 + 7452;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7380(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7380);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17504);
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
	// std r9,7452(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7452, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20030"))) PPC_WEAK_FUNC(sub_83C20030);
PPC_FUNC_IMPL(__imp__sub_83C20030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10472
	ctx.r3.s64 = ctx.r11.s64 + -10472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2003C"))) PPC_WEAK_FUNC(sub_83C2003C);
PPC_FUNC_IMPL(__imp__sub_83C2003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20040"))) PPC_WEAK_FUNC(sub_83C20040);
PPC_FUNC_IMPL(__imp__sub_83C20040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10464
	ctx.r3.s64 = ctx.r11.s64 + -10464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2004C"))) PPC_WEAK_FUNC(sub_83C2004C);
PPC_FUNC_IMPL(__imp__sub_83C2004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20050"))) PPC_WEAK_FUNC(sub_83C20050);
PPC_FUNC_IMPL(__imp__sub_83C20050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10456
	ctx.r3.s64 = ctx.r11.s64 + -10456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2005C"))) PPC_WEAK_FUNC(sub_83C2005C);
PPC_FUNC_IMPL(__imp__sub_83C2005C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20060"))) PPC_WEAK_FUNC(sub_83C20060);
PPC_FUNC_IMPL(__imp__sub_83C20060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10448
	ctx.r3.s64 = ctx.r11.s64 + -10448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2006C"))) PPC_WEAK_FUNC(sub_83C2006C);
PPC_FUNC_IMPL(__imp__sub_83C2006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20070"))) PPC_WEAK_FUNC(sub_83C20070);
PPC_FUNC_IMPL(__imp__sub_83C20070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10440
	ctx.r3.s64 = ctx.r11.s64 + -10440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2007C"))) PPC_WEAK_FUNC(sub_83C2007C);
PPC_FUNC_IMPL(__imp__sub_83C2007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20080"))) PPC_WEAK_FUNC(sub_83C20080);
PPC_FUNC_IMPL(__imp__sub_83C20080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10432
	ctx.r3.s64 = ctx.r11.s64 + -10432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2008C"))) PPC_WEAK_FUNC(sub_83C2008C);
PPC_FUNC_IMPL(__imp__sub_83C2008C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20090"))) PPC_WEAK_FUNC(sub_83C20090);
PPC_FUNC_IMPL(__imp__sub_83C20090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10424
	ctx.r3.s64 = ctx.r11.s64 + -10424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2009C"))) PPC_WEAK_FUNC(sub_83C2009C);
PPC_FUNC_IMPL(__imp__sub_83C2009C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C200A0"))) PPC_WEAK_FUNC(sub_83C200A0);
PPC_FUNC_IMPL(__imp__sub_83C200A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10416
	ctx.r3.s64 = ctx.r11.s64 + -10416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C200AC"))) PPC_WEAK_FUNC(sub_83C200AC);
PPC_FUNC_IMPL(__imp__sub_83C200AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C200B0"))) PPC_WEAK_FUNC(sub_83C200B0);
PPC_FUNC_IMPL(__imp__sub_83C200B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10408
	ctx.r3.s64 = ctx.r11.s64 + -10408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C200BC"))) PPC_WEAK_FUNC(sub_83C200BC);
PPC_FUNC_IMPL(__imp__sub_83C200BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C200C0"))) PPC_WEAK_FUNC(sub_83C200C0);
PPC_FUNC_IMPL(__imp__sub_83C200C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10400
	ctx.r3.s64 = ctx.r11.s64 + -10400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C200CC"))) PPC_WEAK_FUNC(sub_83C200CC);
PPC_FUNC_IMPL(__imp__sub_83C200CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C200D0"))) PPC_WEAK_FUNC(sub_83C200D0);
PPC_FUNC_IMPL(__imp__sub_83C200D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10392
	ctx.r3.s64 = ctx.r11.s64 + -10392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C200DC"))) PPC_WEAK_FUNC(sub_83C200DC);
PPC_FUNC_IMPL(__imp__sub_83C200DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C200E0"))) PPC_WEAK_FUNC(sub_83C200E0);
PPC_FUNC_IMPL(__imp__sub_83C200E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10384
	ctx.r3.s64 = ctx.r11.s64 + -10384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C200EC"))) PPC_WEAK_FUNC(sub_83C200EC);
PPC_FUNC_IMPL(__imp__sub_83C200EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C200F0"))) PPC_WEAK_FUNC(sub_83C200F0);
PPC_FUNC_IMPL(__imp__sub_83C200F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-10376
	ctx.r3.s64 = ctx.r11.s64 + -10376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C200FC"))) PPC_WEAK_FUNC(sub_83C200FC);
PPC_FUNC_IMPL(__imp__sub_83C200FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20100"))) PPC_WEAK_FUNC(sub_83C20100);
PPC_FUNC_IMPL(__imp__sub_83C20100) {
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
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x83523120
	ctx.lr = 0x83C20118;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-10368
	ctx.r3.s64 = ctx.r10.s64 + -10368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C20124;
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

