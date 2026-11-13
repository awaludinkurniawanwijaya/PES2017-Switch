#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C34418"))) PPC_WEAK_FUNC(sub_83C34418);
PPC_FUNC_IMPL(__imp__sub_83C34418) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13760
	ctx.r7.s64 = ctx.r8.s64 + 13760;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13760(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13760);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13760, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C34440"))) PPC_WEAK_FUNC(sub_83C34440);
PPC_FUNC_IMPL(__imp__sub_83C34440) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-29108
	ctx.r6.s64 = ctx.r7.s64 + -29108;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29180(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29180);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13760(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13760);
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
	// std r9,-29108(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29108, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C34488"))) PPC_WEAK_FUNC(sub_83C34488);
PPC_FUNC_IMPL(__imp__sub_83C34488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20256
	ctx.r3.s64 = ctx.r11.s64 + 20256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34494"))) PPC_WEAK_FUNC(sub_83C34494);
PPC_FUNC_IMPL(__imp__sub_83C34494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34498"))) PPC_WEAK_FUNC(sub_83C34498);
PPC_FUNC_IMPL(__imp__sub_83C34498) {
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
	// addi r3,r11,13768
	ctx.r3.s64 = ctx.r11.s64 + 13768;
	// bl 0x8259af80
	ctx.lr = 0x83C344B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,20272
	ctx.r3.s64 = ctx.r10.s64 + 20272;
	// bl 0x831cdcc8
	ctx.lr = 0x83C344BC;
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

__attribute__((alias("__imp__sub_83C344CC"))) PPC_WEAK_FUNC(sub_83C344CC);
PPC_FUNC_IMPL(__imp__sub_83C344CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C344D0"))) PPC_WEAK_FUNC(sub_83C344D0);
PPC_FUNC_IMPL(__imp__sub_83C344D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13748
	ctx.r11.s64 = ctx.r8.s64 + 13748;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-29132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29132);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20264
	ctx.r3.s64 = ctx.r6.s64 + 20264;
	// stw r10,13748(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13748, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34500"))) PPC_WEAK_FUNC(sub_83C34500);
PPC_FUNC_IMPL(__imp__sub_83C34500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20280
	ctx.r3.s64 = ctx.r11.s64 + 20280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3450C"))) PPC_WEAK_FUNC(sub_83C3450C);
PPC_FUNC_IMPL(__imp__sub_83C3450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34510"))) PPC_WEAK_FUNC(sub_83C34510);
PPC_FUNC_IMPL(__imp__sub_83C34510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20288
	ctx.r3.s64 = ctx.r11.s64 + 20288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3451C"))) PPC_WEAK_FUNC(sub_83C3451C);
PPC_FUNC_IMPL(__imp__sub_83C3451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34520"))) PPC_WEAK_FUNC(sub_83C34520);
PPC_FUNC_IMPL(__imp__sub_83C34520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20296
	ctx.r3.s64 = ctx.r11.s64 + 20296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3452C"))) PPC_WEAK_FUNC(sub_83C3452C);
PPC_FUNC_IMPL(__imp__sub_83C3452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34530"))) PPC_WEAK_FUNC(sub_83C34530);
PPC_FUNC_IMPL(__imp__sub_83C34530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20304
	ctx.r3.s64 = ctx.r11.s64 + 20304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3453C"))) PPC_WEAK_FUNC(sub_83C3453C);
PPC_FUNC_IMPL(__imp__sub_83C3453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34540"))) PPC_WEAK_FUNC(sub_83C34540);
PPC_FUNC_IMPL(__imp__sub_83C34540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20312
	ctx.r3.s64 = ctx.r11.s64 + 20312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3454C"))) PPC_WEAK_FUNC(sub_83C3454C);
PPC_FUNC_IMPL(__imp__sub_83C3454C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34550"))) PPC_WEAK_FUNC(sub_83C34550);
PPC_FUNC_IMPL(__imp__sub_83C34550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20320
	ctx.r3.s64 = ctx.r11.s64 + 20320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3455C"))) PPC_WEAK_FUNC(sub_83C3455C);
PPC_FUNC_IMPL(__imp__sub_83C3455C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34560"))) PPC_WEAK_FUNC(sub_83C34560);
PPC_FUNC_IMPL(__imp__sub_83C34560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3456C"))) PPC_WEAK_FUNC(sub_83C3456C);
PPC_FUNC_IMPL(__imp__sub_83C3456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34570"))) PPC_WEAK_FUNC(sub_83C34570);
PPC_FUNC_IMPL(__imp__sub_83C34570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20336
	ctx.r3.s64 = ctx.r11.s64 + 20336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3457C"))) PPC_WEAK_FUNC(sub_83C3457C);
PPC_FUNC_IMPL(__imp__sub_83C3457C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34580"))) PPC_WEAK_FUNC(sub_83C34580);
PPC_FUNC_IMPL(__imp__sub_83C34580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20344
	ctx.r3.s64 = ctx.r11.s64 + 20344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3458C"))) PPC_WEAK_FUNC(sub_83C3458C);
PPC_FUNC_IMPL(__imp__sub_83C3458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34590"))) PPC_WEAK_FUNC(sub_83C34590);
PPC_FUNC_IMPL(__imp__sub_83C34590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20352
	ctx.r3.s64 = ctx.r11.s64 + 20352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3459C"))) PPC_WEAK_FUNC(sub_83C3459C);
PPC_FUNC_IMPL(__imp__sub_83C3459C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C345A0"))) PPC_WEAK_FUNC(sub_83C345A0);
PPC_FUNC_IMPL(__imp__sub_83C345A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20360
	ctx.r3.s64 = ctx.r11.s64 + 20360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C345AC"))) PPC_WEAK_FUNC(sub_83C345AC);
PPC_FUNC_IMPL(__imp__sub_83C345AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C345B0"))) PPC_WEAK_FUNC(sub_83C345B0);
PPC_FUNC_IMPL(__imp__sub_83C345B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20368
	ctx.r3.s64 = ctx.r11.s64 + 20368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C345BC"))) PPC_WEAK_FUNC(sub_83C345BC);
PPC_FUNC_IMPL(__imp__sub_83C345BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C345C0"))) PPC_WEAK_FUNC(sub_83C345C0);
PPC_FUNC_IMPL(__imp__sub_83C345C0) {
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
	// addi r3,r11,14112
	ctx.r3.s64 = ctx.r11.s64 + 14112;
	// bl 0x83523120
	ctx.lr = 0x83C345D8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,20376
	ctx.r3.s64 = ctx.r10.s64 + 20376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C345E4;
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

__attribute__((alias("__imp__sub_83C345F4"))) PPC_WEAK_FUNC(sub_83C345F4);
PPC_FUNC_IMPL(__imp__sub_83C345F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C345F8"))) PPC_WEAK_FUNC(sub_83C345F8);
PPC_FUNC_IMPL(__imp__sub_83C345F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14128
	ctx.r7.s64 = ctx.r8.s64 + 14128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14128);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14128, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C34620"))) PPC_WEAK_FUNC(sub_83C34620);
PPC_FUNC_IMPL(__imp__sub_83C34620) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-28980
	ctx.r6.s64 = ctx.r7.s64 + -28980;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29052(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29052);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14128);
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
	// std r9,-28980(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28980, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C34668"))) PPC_WEAK_FUNC(sub_83C34668);
PPC_FUNC_IMPL(__imp__sub_83C34668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20392
	ctx.r3.s64 = ctx.r11.s64 + 20392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34674"))) PPC_WEAK_FUNC(sub_83C34674);
PPC_FUNC_IMPL(__imp__sub_83C34674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34678"))) PPC_WEAK_FUNC(sub_83C34678);
PPC_FUNC_IMPL(__imp__sub_83C34678) {
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
	// addi r3,r11,14136
	ctx.r3.s64 = ctx.r11.s64 + 14136;
	// bl 0x8259af80
	ctx.lr = 0x83C34690;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,20408
	ctx.r3.s64 = ctx.r10.s64 + 20408;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3469C;
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

__attribute__((alias("__imp__sub_83C346AC"))) PPC_WEAK_FUNC(sub_83C346AC);
PPC_FUNC_IMPL(__imp__sub_83C346AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C346B0"))) PPC_WEAK_FUNC(sub_83C346B0);
PPC_FUNC_IMPL(__imp__sub_83C346B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14116
	ctx.r11.s64 = ctx.r8.s64 + 14116;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-29004(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29004);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20400
	ctx.r3.s64 = ctx.r6.s64 + 20400;
	// stw r10,14116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14116, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C346E0"))) PPC_WEAK_FUNC(sub_83C346E0);
PPC_FUNC_IMPL(__imp__sub_83C346E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20416
	ctx.r3.s64 = ctx.r11.s64 + 20416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C346EC"))) PPC_WEAK_FUNC(sub_83C346EC);
PPC_FUNC_IMPL(__imp__sub_83C346EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C346F0"))) PPC_WEAK_FUNC(sub_83C346F0);
PPC_FUNC_IMPL(__imp__sub_83C346F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20424
	ctx.r3.s64 = ctx.r11.s64 + 20424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C346FC"))) PPC_WEAK_FUNC(sub_83C346FC);
PPC_FUNC_IMPL(__imp__sub_83C346FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34700"))) PPC_WEAK_FUNC(sub_83C34700);
PPC_FUNC_IMPL(__imp__sub_83C34700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20432
	ctx.r3.s64 = ctx.r11.s64 + 20432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3470C"))) PPC_WEAK_FUNC(sub_83C3470C);
PPC_FUNC_IMPL(__imp__sub_83C3470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34710"))) PPC_WEAK_FUNC(sub_83C34710);
PPC_FUNC_IMPL(__imp__sub_83C34710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20440
	ctx.r3.s64 = ctx.r11.s64 + 20440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3471C"))) PPC_WEAK_FUNC(sub_83C3471C);
PPC_FUNC_IMPL(__imp__sub_83C3471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34720"))) PPC_WEAK_FUNC(sub_83C34720);
PPC_FUNC_IMPL(__imp__sub_83C34720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20448
	ctx.r3.s64 = ctx.r11.s64 + 20448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3472C"))) PPC_WEAK_FUNC(sub_83C3472C);
PPC_FUNC_IMPL(__imp__sub_83C3472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34730"))) PPC_WEAK_FUNC(sub_83C34730);
PPC_FUNC_IMPL(__imp__sub_83C34730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20456
	ctx.r3.s64 = ctx.r11.s64 + 20456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3473C"))) PPC_WEAK_FUNC(sub_83C3473C);
PPC_FUNC_IMPL(__imp__sub_83C3473C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34740"))) PPC_WEAK_FUNC(sub_83C34740);
PPC_FUNC_IMPL(__imp__sub_83C34740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20464
	ctx.r3.s64 = ctx.r11.s64 + 20464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3474C"))) PPC_WEAK_FUNC(sub_83C3474C);
PPC_FUNC_IMPL(__imp__sub_83C3474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34750"))) PPC_WEAK_FUNC(sub_83C34750);
PPC_FUNC_IMPL(__imp__sub_83C34750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20472
	ctx.r3.s64 = ctx.r11.s64 + 20472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3475C"))) PPC_WEAK_FUNC(sub_83C3475C);
PPC_FUNC_IMPL(__imp__sub_83C3475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34760"))) PPC_WEAK_FUNC(sub_83C34760);
PPC_FUNC_IMPL(__imp__sub_83C34760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20480
	ctx.r3.s64 = ctx.r11.s64 + 20480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3476C"))) PPC_WEAK_FUNC(sub_83C3476C);
PPC_FUNC_IMPL(__imp__sub_83C3476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34770"))) PPC_WEAK_FUNC(sub_83C34770);
PPC_FUNC_IMPL(__imp__sub_83C34770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20488
	ctx.r3.s64 = ctx.r11.s64 + 20488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3477C"))) PPC_WEAK_FUNC(sub_83C3477C);
PPC_FUNC_IMPL(__imp__sub_83C3477C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34780"))) PPC_WEAK_FUNC(sub_83C34780);
PPC_FUNC_IMPL(__imp__sub_83C34780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20496
	ctx.r3.s64 = ctx.r11.s64 + 20496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3478C"))) PPC_WEAK_FUNC(sub_83C3478C);
PPC_FUNC_IMPL(__imp__sub_83C3478C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34790"))) PPC_WEAK_FUNC(sub_83C34790);
PPC_FUNC_IMPL(__imp__sub_83C34790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20504
	ctx.r3.s64 = ctx.r11.s64 + 20504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3479C"))) PPC_WEAK_FUNC(sub_83C3479C);
PPC_FUNC_IMPL(__imp__sub_83C3479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C347A0"))) PPC_WEAK_FUNC(sub_83C347A0);
PPC_FUNC_IMPL(__imp__sub_83C347A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20512
	ctx.r3.s64 = ctx.r11.s64 + 20512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C347AC"))) PPC_WEAK_FUNC(sub_83C347AC);
PPC_FUNC_IMPL(__imp__sub_83C347AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C347B0"))) PPC_WEAK_FUNC(sub_83C347B0);
PPC_FUNC_IMPL(__imp__sub_83C347B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20520
	ctx.r3.s64 = ctx.r11.s64 + 20520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C347BC"))) PPC_WEAK_FUNC(sub_83C347BC);
PPC_FUNC_IMPL(__imp__sub_83C347BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C347C0"))) PPC_WEAK_FUNC(sub_83C347C0);
PPC_FUNC_IMPL(__imp__sub_83C347C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20528
	ctx.r3.s64 = ctx.r11.s64 + 20528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C347CC"))) PPC_WEAK_FUNC(sub_83C347CC);
PPC_FUNC_IMPL(__imp__sub_83C347CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C347D0"))) PPC_WEAK_FUNC(sub_83C347D0);
PPC_FUNC_IMPL(__imp__sub_83C347D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20536
	ctx.r3.s64 = ctx.r11.s64 + 20536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C347DC"))) PPC_WEAK_FUNC(sub_83C347DC);
PPC_FUNC_IMPL(__imp__sub_83C347DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C347E0"))) PPC_WEAK_FUNC(sub_83C347E0);
PPC_FUNC_IMPL(__imp__sub_83C347E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20544
	ctx.r3.s64 = ctx.r11.s64 + 20544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C347EC"))) PPC_WEAK_FUNC(sub_83C347EC);
PPC_FUNC_IMPL(__imp__sub_83C347EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C347F0"))) PPC_WEAK_FUNC(sub_83C347F0);
PPC_FUNC_IMPL(__imp__sub_83C347F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20552
	ctx.r3.s64 = ctx.r11.s64 + 20552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C347FC"))) PPC_WEAK_FUNC(sub_83C347FC);
PPC_FUNC_IMPL(__imp__sub_83C347FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34800"))) PPC_WEAK_FUNC(sub_83C34800);
PPC_FUNC_IMPL(__imp__sub_83C34800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20560
	ctx.r3.s64 = ctx.r11.s64 + 20560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3480C"))) PPC_WEAK_FUNC(sub_83C3480C);
PPC_FUNC_IMPL(__imp__sub_83C3480C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34810"))) PPC_WEAK_FUNC(sub_83C34810);
PPC_FUNC_IMPL(__imp__sub_83C34810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20568
	ctx.r3.s64 = ctx.r11.s64 + 20568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3481C"))) PPC_WEAK_FUNC(sub_83C3481C);
PPC_FUNC_IMPL(__imp__sub_83C3481C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34820"))) PPC_WEAK_FUNC(sub_83C34820);
PPC_FUNC_IMPL(__imp__sub_83C34820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3482C"))) PPC_WEAK_FUNC(sub_83C3482C);
PPC_FUNC_IMPL(__imp__sub_83C3482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34830"))) PPC_WEAK_FUNC(sub_83C34830);
PPC_FUNC_IMPL(__imp__sub_83C34830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20584
	ctx.r3.s64 = ctx.r11.s64 + 20584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3483C"))) PPC_WEAK_FUNC(sub_83C3483C);
PPC_FUNC_IMPL(__imp__sub_83C3483C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34840"))) PPC_WEAK_FUNC(sub_83C34840);
PPC_FUNC_IMPL(__imp__sub_83C34840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20592
	ctx.r3.s64 = ctx.r11.s64 + 20592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3484C"))) PPC_WEAK_FUNC(sub_83C3484C);
PPC_FUNC_IMPL(__imp__sub_83C3484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34850"))) PPC_WEAK_FUNC(sub_83C34850);
PPC_FUNC_IMPL(__imp__sub_83C34850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20600
	ctx.r3.s64 = ctx.r11.s64 + 20600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3485C"))) PPC_WEAK_FUNC(sub_83C3485C);
PPC_FUNC_IMPL(__imp__sub_83C3485C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34860"))) PPC_WEAK_FUNC(sub_83C34860);
PPC_FUNC_IMPL(__imp__sub_83C34860) {
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
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x83523120
	ctx.lr = 0x83C34878;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,20608
	ctx.r3.s64 = ctx.r10.s64 + 20608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C34884;
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

__attribute__((alias("__imp__sub_83C34894"))) PPC_WEAK_FUNC(sub_83C34894);
PPC_FUNC_IMPL(__imp__sub_83C34894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34898"))) PPC_WEAK_FUNC(sub_83C34898);
PPC_FUNC_IMPL(__imp__sub_83C34898) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14504
	ctx.r7.s64 = ctx.r8.s64 + 14504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C348C0"))) PPC_WEAK_FUNC(sub_83C348C0);
PPC_FUNC_IMPL(__imp__sub_83C348C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-28748
	ctx.r6.s64 = ctx.r7.s64 + -28748;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28820(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28820);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14504);
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
	// std r9,-28748(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28748, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C34908"))) PPC_WEAK_FUNC(sub_83C34908);
PPC_FUNC_IMPL(__imp__sub_83C34908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20624
	ctx.r3.s64 = ctx.r11.s64 + 20624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34914"))) PPC_WEAK_FUNC(sub_83C34914);
PPC_FUNC_IMPL(__imp__sub_83C34914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34918"))) PPC_WEAK_FUNC(sub_83C34918);
PPC_FUNC_IMPL(__imp__sub_83C34918) {
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
	// addi r3,r11,14512
	ctx.r3.s64 = ctx.r11.s64 + 14512;
	// bl 0x8259af80
	ctx.lr = 0x83C34930;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,20640
	ctx.r3.s64 = ctx.r10.s64 + 20640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3493C;
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

__attribute__((alias("__imp__sub_83C3494C"))) PPC_WEAK_FUNC(sub_83C3494C);
PPC_FUNC_IMPL(__imp__sub_83C3494C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34950"))) PPC_WEAK_FUNC(sub_83C34950);
PPC_FUNC_IMPL(__imp__sub_83C34950) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14492
	ctx.r11.s64 = ctx.r8.s64 + 14492;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-28772(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28772);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20632
	ctx.r3.s64 = ctx.r6.s64 + 20632;
	// stw r10,14492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34980"))) PPC_WEAK_FUNC(sub_83C34980);
PPC_FUNC_IMPL(__imp__sub_83C34980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20648
	ctx.r3.s64 = ctx.r11.s64 + 20648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3498C"))) PPC_WEAK_FUNC(sub_83C3498C);
PPC_FUNC_IMPL(__imp__sub_83C3498C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34990"))) PPC_WEAK_FUNC(sub_83C34990);
PPC_FUNC_IMPL(__imp__sub_83C34990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3499C"))) PPC_WEAK_FUNC(sub_83C3499C);
PPC_FUNC_IMPL(__imp__sub_83C3499C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C349A0"))) PPC_WEAK_FUNC(sub_83C349A0);
PPC_FUNC_IMPL(__imp__sub_83C349A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20664
	ctx.r3.s64 = ctx.r11.s64 + 20664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C349AC"))) PPC_WEAK_FUNC(sub_83C349AC);
PPC_FUNC_IMPL(__imp__sub_83C349AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C349B0"))) PPC_WEAK_FUNC(sub_83C349B0);
PPC_FUNC_IMPL(__imp__sub_83C349B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20672
	ctx.r3.s64 = ctx.r11.s64 + 20672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C349BC"))) PPC_WEAK_FUNC(sub_83C349BC);
PPC_FUNC_IMPL(__imp__sub_83C349BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C349C0"))) PPC_WEAK_FUNC(sub_83C349C0);
PPC_FUNC_IMPL(__imp__sub_83C349C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20680
	ctx.r3.s64 = ctx.r11.s64 + 20680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C349CC"))) PPC_WEAK_FUNC(sub_83C349CC);
PPC_FUNC_IMPL(__imp__sub_83C349CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C349D0"))) PPC_WEAK_FUNC(sub_83C349D0);
PPC_FUNC_IMPL(__imp__sub_83C349D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20688
	ctx.r3.s64 = ctx.r11.s64 + 20688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C349DC"))) PPC_WEAK_FUNC(sub_83C349DC);
PPC_FUNC_IMPL(__imp__sub_83C349DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C349E0"))) PPC_WEAK_FUNC(sub_83C349E0);
PPC_FUNC_IMPL(__imp__sub_83C349E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20696
	ctx.r3.s64 = ctx.r11.s64 + 20696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C349EC"))) PPC_WEAK_FUNC(sub_83C349EC);
PPC_FUNC_IMPL(__imp__sub_83C349EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C349F0"))) PPC_WEAK_FUNC(sub_83C349F0);
PPC_FUNC_IMPL(__imp__sub_83C349F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20704
	ctx.r3.s64 = ctx.r11.s64 + 20704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C349FC"))) PPC_WEAK_FUNC(sub_83C349FC);
PPC_FUNC_IMPL(__imp__sub_83C349FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34A00"))) PPC_WEAK_FUNC(sub_83C34A00);
PPC_FUNC_IMPL(__imp__sub_83C34A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20712
	ctx.r3.s64 = ctx.r11.s64 + 20712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34A0C"))) PPC_WEAK_FUNC(sub_83C34A0C);
PPC_FUNC_IMPL(__imp__sub_83C34A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34A10"))) PPC_WEAK_FUNC(sub_83C34A10);
PPC_FUNC_IMPL(__imp__sub_83C34A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20720
	ctx.r3.s64 = ctx.r11.s64 + 20720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34A1C"))) PPC_WEAK_FUNC(sub_83C34A1C);
PPC_FUNC_IMPL(__imp__sub_83C34A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34A20"))) PPC_WEAK_FUNC(sub_83C34A20);
PPC_FUNC_IMPL(__imp__sub_83C34A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20728
	ctx.r3.s64 = ctx.r11.s64 + 20728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34A2C"))) PPC_WEAK_FUNC(sub_83C34A2C);
PPC_FUNC_IMPL(__imp__sub_83C34A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34A30"))) PPC_WEAK_FUNC(sub_83C34A30);
PPC_FUNC_IMPL(__imp__sub_83C34A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20736
	ctx.r3.s64 = ctx.r11.s64 + 20736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34A3C"))) PPC_WEAK_FUNC(sub_83C34A3C);
PPC_FUNC_IMPL(__imp__sub_83C34A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34A40"))) PPC_WEAK_FUNC(sub_83C34A40);
PPC_FUNC_IMPL(__imp__sub_83C34A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20744
	ctx.r3.s64 = ctx.r11.s64 + 20744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34A4C"))) PPC_WEAK_FUNC(sub_83C34A4C);
PPC_FUNC_IMPL(__imp__sub_83C34A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34A50"))) PPC_WEAK_FUNC(sub_83C34A50);
PPC_FUNC_IMPL(__imp__sub_83C34A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20752
	ctx.r3.s64 = ctx.r11.s64 + 20752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34A5C"))) PPC_WEAK_FUNC(sub_83C34A5C);
PPC_FUNC_IMPL(__imp__sub_83C34A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34A60"))) PPC_WEAK_FUNC(sub_83C34A60);
PPC_FUNC_IMPL(__imp__sub_83C34A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20760
	ctx.r3.s64 = ctx.r11.s64 + 20760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34A6C"))) PPC_WEAK_FUNC(sub_83C34A6C);
PPC_FUNC_IMPL(__imp__sub_83C34A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34A70"))) PPC_WEAK_FUNC(sub_83C34A70);
PPC_FUNC_IMPL(__imp__sub_83C34A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20768
	ctx.r3.s64 = ctx.r11.s64 + 20768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34A7C"))) PPC_WEAK_FUNC(sub_83C34A7C);
PPC_FUNC_IMPL(__imp__sub_83C34A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34A80"))) PPC_WEAK_FUNC(sub_83C34A80);
PPC_FUNC_IMPL(__imp__sub_83C34A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20776
	ctx.r3.s64 = ctx.r11.s64 + 20776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34A8C"))) PPC_WEAK_FUNC(sub_83C34A8C);
PPC_FUNC_IMPL(__imp__sub_83C34A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34A90"))) PPC_WEAK_FUNC(sub_83C34A90);
PPC_FUNC_IMPL(__imp__sub_83C34A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20784
	ctx.r3.s64 = ctx.r11.s64 + 20784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34A9C"))) PPC_WEAK_FUNC(sub_83C34A9C);
PPC_FUNC_IMPL(__imp__sub_83C34A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34AA0"))) PPC_WEAK_FUNC(sub_83C34AA0);
PPC_FUNC_IMPL(__imp__sub_83C34AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20792
	ctx.r3.s64 = ctx.r11.s64 + 20792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34AAC"))) PPC_WEAK_FUNC(sub_83C34AAC);
PPC_FUNC_IMPL(__imp__sub_83C34AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34AB0"))) PPC_WEAK_FUNC(sub_83C34AB0);
PPC_FUNC_IMPL(__imp__sub_83C34AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20800
	ctx.r3.s64 = ctx.r11.s64 + 20800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34ABC"))) PPC_WEAK_FUNC(sub_83C34ABC);
PPC_FUNC_IMPL(__imp__sub_83C34ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34AC0"))) PPC_WEAK_FUNC(sub_83C34AC0);
PPC_FUNC_IMPL(__imp__sub_83C34AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20808
	ctx.r3.s64 = ctx.r11.s64 + 20808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34ACC"))) PPC_WEAK_FUNC(sub_83C34ACC);
PPC_FUNC_IMPL(__imp__sub_83C34ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34AD0"))) PPC_WEAK_FUNC(sub_83C34AD0);
PPC_FUNC_IMPL(__imp__sub_83C34AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20816
	ctx.r3.s64 = ctx.r11.s64 + 20816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34ADC"))) PPC_WEAK_FUNC(sub_83C34ADC);
PPC_FUNC_IMPL(__imp__sub_83C34ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34AE0"))) PPC_WEAK_FUNC(sub_83C34AE0);
PPC_FUNC_IMPL(__imp__sub_83C34AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20824
	ctx.r3.s64 = ctx.r11.s64 + 20824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34AEC"))) PPC_WEAK_FUNC(sub_83C34AEC);
PPC_FUNC_IMPL(__imp__sub_83C34AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34AF0"))) PPC_WEAK_FUNC(sub_83C34AF0);
PPC_FUNC_IMPL(__imp__sub_83C34AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20832
	ctx.r3.s64 = ctx.r11.s64 + 20832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34AFC"))) PPC_WEAK_FUNC(sub_83C34AFC);
PPC_FUNC_IMPL(__imp__sub_83C34AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34B00"))) PPC_WEAK_FUNC(sub_83C34B00);
PPC_FUNC_IMPL(__imp__sub_83C34B00) {
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
	// addi r3,r11,14864
	ctx.r3.s64 = ctx.r11.s64 + 14864;
	// bl 0x83523120
	ctx.lr = 0x83C34B18;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,20840
	ctx.r3.s64 = ctx.r10.s64 + 20840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C34B24;
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

__attribute__((alias("__imp__sub_83C34B34"))) PPC_WEAK_FUNC(sub_83C34B34);
PPC_FUNC_IMPL(__imp__sub_83C34B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34B38"))) PPC_WEAK_FUNC(sub_83C34B38);
PPC_FUNC_IMPL(__imp__sub_83C34B38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14880
	ctx.r7.s64 = ctx.r8.s64 + 14880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14880);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14880(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14880, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C34B60"))) PPC_WEAK_FUNC(sub_83C34B60);
PPC_FUNC_IMPL(__imp__sub_83C34B60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-28516
	ctx.r6.s64 = ctx.r7.s64 + -28516;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28588(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28588);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14880(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14880);
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
	// std r9,-28516(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28516, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C34BA8"))) PPC_WEAK_FUNC(sub_83C34BA8);
PPC_FUNC_IMPL(__imp__sub_83C34BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20856
	ctx.r3.s64 = ctx.r11.s64 + 20856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34BB4"))) PPC_WEAK_FUNC(sub_83C34BB4);
PPC_FUNC_IMPL(__imp__sub_83C34BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34BB8"))) PPC_WEAK_FUNC(sub_83C34BB8);
PPC_FUNC_IMPL(__imp__sub_83C34BB8) {
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
	// addi r3,r11,14888
	ctx.r3.s64 = ctx.r11.s64 + 14888;
	// bl 0x8259af80
	ctx.lr = 0x83C34BD0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,20872
	ctx.r3.s64 = ctx.r10.s64 + 20872;
	// bl 0x831cdcc8
	ctx.lr = 0x83C34BDC;
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

__attribute__((alias("__imp__sub_83C34BEC"))) PPC_WEAK_FUNC(sub_83C34BEC);
PPC_FUNC_IMPL(__imp__sub_83C34BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34BF0"))) PPC_WEAK_FUNC(sub_83C34BF0);
PPC_FUNC_IMPL(__imp__sub_83C34BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14868
	ctx.r11.s64 = ctx.r8.s64 + 14868;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-28540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28540);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20864
	ctx.r3.s64 = ctx.r6.s64 + 20864;
	// stw r10,14868(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14868, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34C20"))) PPC_WEAK_FUNC(sub_83C34C20);
PPC_FUNC_IMPL(__imp__sub_83C34C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20880
	ctx.r3.s64 = ctx.r11.s64 + 20880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34C2C"))) PPC_WEAK_FUNC(sub_83C34C2C);
PPC_FUNC_IMPL(__imp__sub_83C34C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34C30"))) PPC_WEAK_FUNC(sub_83C34C30);
PPC_FUNC_IMPL(__imp__sub_83C34C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20888
	ctx.r3.s64 = ctx.r11.s64 + 20888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34C3C"))) PPC_WEAK_FUNC(sub_83C34C3C);
PPC_FUNC_IMPL(__imp__sub_83C34C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34C40"))) PPC_WEAK_FUNC(sub_83C34C40);
PPC_FUNC_IMPL(__imp__sub_83C34C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20896
	ctx.r3.s64 = ctx.r11.s64 + 20896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34C4C"))) PPC_WEAK_FUNC(sub_83C34C4C);
PPC_FUNC_IMPL(__imp__sub_83C34C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34C50"))) PPC_WEAK_FUNC(sub_83C34C50);
PPC_FUNC_IMPL(__imp__sub_83C34C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20904
	ctx.r3.s64 = ctx.r11.s64 + 20904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34C5C"))) PPC_WEAK_FUNC(sub_83C34C5C);
PPC_FUNC_IMPL(__imp__sub_83C34C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34C60"))) PPC_WEAK_FUNC(sub_83C34C60);
PPC_FUNC_IMPL(__imp__sub_83C34C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20912
	ctx.r3.s64 = ctx.r11.s64 + 20912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34C6C"))) PPC_WEAK_FUNC(sub_83C34C6C);
PPC_FUNC_IMPL(__imp__sub_83C34C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34C70"))) PPC_WEAK_FUNC(sub_83C34C70);
PPC_FUNC_IMPL(__imp__sub_83C34C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20920
	ctx.r3.s64 = ctx.r11.s64 + 20920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34C7C"))) PPC_WEAK_FUNC(sub_83C34C7C);
PPC_FUNC_IMPL(__imp__sub_83C34C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34C80"))) PPC_WEAK_FUNC(sub_83C34C80);
PPC_FUNC_IMPL(__imp__sub_83C34C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20928
	ctx.r3.s64 = ctx.r11.s64 + 20928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34C8C"))) PPC_WEAK_FUNC(sub_83C34C8C);
PPC_FUNC_IMPL(__imp__sub_83C34C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34C90"))) PPC_WEAK_FUNC(sub_83C34C90);
PPC_FUNC_IMPL(__imp__sub_83C34C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20936
	ctx.r3.s64 = ctx.r11.s64 + 20936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34C9C"))) PPC_WEAK_FUNC(sub_83C34C9C);
PPC_FUNC_IMPL(__imp__sub_83C34C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34CA0"))) PPC_WEAK_FUNC(sub_83C34CA0);
PPC_FUNC_IMPL(__imp__sub_83C34CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20944
	ctx.r3.s64 = ctx.r11.s64 + 20944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34CAC"))) PPC_WEAK_FUNC(sub_83C34CAC);
PPC_FUNC_IMPL(__imp__sub_83C34CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34CB0"))) PPC_WEAK_FUNC(sub_83C34CB0);
PPC_FUNC_IMPL(__imp__sub_83C34CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20952
	ctx.r3.s64 = ctx.r11.s64 + 20952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34CBC"))) PPC_WEAK_FUNC(sub_83C34CBC);
PPC_FUNC_IMPL(__imp__sub_83C34CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34CC0"))) PPC_WEAK_FUNC(sub_83C34CC0);
PPC_FUNC_IMPL(__imp__sub_83C34CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20960
	ctx.r3.s64 = ctx.r11.s64 + 20960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34CCC"))) PPC_WEAK_FUNC(sub_83C34CCC);
PPC_FUNC_IMPL(__imp__sub_83C34CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34CD0"))) PPC_WEAK_FUNC(sub_83C34CD0);
PPC_FUNC_IMPL(__imp__sub_83C34CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20968
	ctx.r3.s64 = ctx.r11.s64 + 20968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34CDC"))) PPC_WEAK_FUNC(sub_83C34CDC);
PPC_FUNC_IMPL(__imp__sub_83C34CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34CE0"))) PPC_WEAK_FUNC(sub_83C34CE0);
PPC_FUNC_IMPL(__imp__sub_83C34CE0) {
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
	// addi r3,r11,15232
	ctx.r3.s64 = ctx.r11.s64 + 15232;
	// bl 0x83523120
	ctx.lr = 0x83C34CF8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,20976
	ctx.r3.s64 = ctx.r10.s64 + 20976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C34D04;
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

__attribute__((alias("__imp__sub_83C34D14"))) PPC_WEAK_FUNC(sub_83C34D14);
PPC_FUNC_IMPL(__imp__sub_83C34D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34D18"))) PPC_WEAK_FUNC(sub_83C34D18);
PPC_FUNC_IMPL(__imp__sub_83C34D18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15248
	ctx.r7.s64 = ctx.r8.s64 + 15248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15248(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15248);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15248, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C34D40"))) PPC_WEAK_FUNC(sub_83C34D40);
PPC_FUNC_IMPL(__imp__sub_83C34D40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-28388
	ctx.r6.s64 = ctx.r7.s64 + -28388;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28460(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28460);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15248(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15248);
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
	// std r9,-28388(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28388, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C34D88"))) PPC_WEAK_FUNC(sub_83C34D88);
PPC_FUNC_IMPL(__imp__sub_83C34D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20992
	ctx.r3.s64 = ctx.r11.s64 + 20992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34D94"))) PPC_WEAK_FUNC(sub_83C34D94);
PPC_FUNC_IMPL(__imp__sub_83C34D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34D98"))) PPC_WEAK_FUNC(sub_83C34D98);
PPC_FUNC_IMPL(__imp__sub_83C34D98) {
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
	// addi r3,r11,15256
	ctx.r3.s64 = ctx.r11.s64 + 15256;
	// bl 0x8259af80
	ctx.lr = 0x83C34DB0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,21008
	ctx.r3.s64 = ctx.r10.s64 + 21008;
	// bl 0x831cdcc8
	ctx.lr = 0x83C34DBC;
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

__attribute__((alias("__imp__sub_83C34DCC"))) PPC_WEAK_FUNC(sub_83C34DCC);
PPC_FUNC_IMPL(__imp__sub_83C34DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34DD0"))) PPC_WEAK_FUNC(sub_83C34DD0);
PPC_FUNC_IMPL(__imp__sub_83C34DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15236
	ctx.r11.s64 = ctx.r8.s64 + 15236;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-28412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28412);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21000
	ctx.r3.s64 = ctx.r6.s64 + 21000;
	// stw r10,15236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15236, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34E00"))) PPC_WEAK_FUNC(sub_83C34E00);
PPC_FUNC_IMPL(__imp__sub_83C34E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21016
	ctx.r3.s64 = ctx.r11.s64 + 21016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34E0C"))) PPC_WEAK_FUNC(sub_83C34E0C);
PPC_FUNC_IMPL(__imp__sub_83C34E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34E10"))) PPC_WEAK_FUNC(sub_83C34E10);
PPC_FUNC_IMPL(__imp__sub_83C34E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21024
	ctx.r3.s64 = ctx.r11.s64 + 21024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34E1C"))) PPC_WEAK_FUNC(sub_83C34E1C);
PPC_FUNC_IMPL(__imp__sub_83C34E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34E20"))) PPC_WEAK_FUNC(sub_83C34E20);
PPC_FUNC_IMPL(__imp__sub_83C34E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21032
	ctx.r3.s64 = ctx.r11.s64 + 21032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34E2C"))) PPC_WEAK_FUNC(sub_83C34E2C);
PPC_FUNC_IMPL(__imp__sub_83C34E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34E30"))) PPC_WEAK_FUNC(sub_83C34E30);
PPC_FUNC_IMPL(__imp__sub_83C34E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21040
	ctx.r3.s64 = ctx.r11.s64 + 21040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34E3C"))) PPC_WEAK_FUNC(sub_83C34E3C);
PPC_FUNC_IMPL(__imp__sub_83C34E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34E40"))) PPC_WEAK_FUNC(sub_83C34E40);
PPC_FUNC_IMPL(__imp__sub_83C34E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21048
	ctx.r3.s64 = ctx.r11.s64 + 21048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34E4C"))) PPC_WEAK_FUNC(sub_83C34E4C);
PPC_FUNC_IMPL(__imp__sub_83C34E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34E50"))) PPC_WEAK_FUNC(sub_83C34E50);
PPC_FUNC_IMPL(__imp__sub_83C34E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21056
	ctx.r3.s64 = ctx.r11.s64 + 21056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34E5C"))) PPC_WEAK_FUNC(sub_83C34E5C);
PPC_FUNC_IMPL(__imp__sub_83C34E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34E60"))) PPC_WEAK_FUNC(sub_83C34E60);
PPC_FUNC_IMPL(__imp__sub_83C34E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21064
	ctx.r3.s64 = ctx.r11.s64 + 21064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34E6C"))) PPC_WEAK_FUNC(sub_83C34E6C);
PPC_FUNC_IMPL(__imp__sub_83C34E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34E70"))) PPC_WEAK_FUNC(sub_83C34E70);
PPC_FUNC_IMPL(__imp__sub_83C34E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21072
	ctx.r3.s64 = ctx.r11.s64 + 21072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34E7C"))) PPC_WEAK_FUNC(sub_83C34E7C);
PPC_FUNC_IMPL(__imp__sub_83C34E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34E80"))) PPC_WEAK_FUNC(sub_83C34E80);
PPC_FUNC_IMPL(__imp__sub_83C34E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21080
	ctx.r3.s64 = ctx.r11.s64 + 21080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34E8C"))) PPC_WEAK_FUNC(sub_83C34E8C);
PPC_FUNC_IMPL(__imp__sub_83C34E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34E90"))) PPC_WEAK_FUNC(sub_83C34E90);
PPC_FUNC_IMPL(__imp__sub_83C34E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21088
	ctx.r3.s64 = ctx.r11.s64 + 21088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34E9C"))) PPC_WEAK_FUNC(sub_83C34E9C);
PPC_FUNC_IMPL(__imp__sub_83C34E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34EA0"))) PPC_WEAK_FUNC(sub_83C34EA0);
PPC_FUNC_IMPL(__imp__sub_83C34EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21096
	ctx.r3.s64 = ctx.r11.s64 + 21096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34EAC"))) PPC_WEAK_FUNC(sub_83C34EAC);
PPC_FUNC_IMPL(__imp__sub_83C34EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34EB0"))) PPC_WEAK_FUNC(sub_83C34EB0);
PPC_FUNC_IMPL(__imp__sub_83C34EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21104
	ctx.r3.s64 = ctx.r11.s64 + 21104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34EBC"))) PPC_WEAK_FUNC(sub_83C34EBC);
PPC_FUNC_IMPL(__imp__sub_83C34EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34EC0"))) PPC_WEAK_FUNC(sub_83C34EC0);
PPC_FUNC_IMPL(__imp__sub_83C34EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21112
	ctx.r3.s64 = ctx.r11.s64 + 21112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34ECC"))) PPC_WEAK_FUNC(sub_83C34ECC);
PPC_FUNC_IMPL(__imp__sub_83C34ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34ED0"))) PPC_WEAK_FUNC(sub_83C34ED0);
PPC_FUNC_IMPL(__imp__sub_83C34ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21120
	ctx.r3.s64 = ctx.r11.s64 + 21120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34EDC"))) PPC_WEAK_FUNC(sub_83C34EDC);
PPC_FUNC_IMPL(__imp__sub_83C34EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34EE0"))) PPC_WEAK_FUNC(sub_83C34EE0);
PPC_FUNC_IMPL(__imp__sub_83C34EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21128
	ctx.r3.s64 = ctx.r11.s64 + 21128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34EEC"))) PPC_WEAK_FUNC(sub_83C34EEC);
PPC_FUNC_IMPL(__imp__sub_83C34EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34EF0"))) PPC_WEAK_FUNC(sub_83C34EF0);
PPC_FUNC_IMPL(__imp__sub_83C34EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21136
	ctx.r3.s64 = ctx.r11.s64 + 21136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34EFC"))) PPC_WEAK_FUNC(sub_83C34EFC);
PPC_FUNC_IMPL(__imp__sub_83C34EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34F00"))) PPC_WEAK_FUNC(sub_83C34F00);
PPC_FUNC_IMPL(__imp__sub_83C34F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21144
	ctx.r3.s64 = ctx.r11.s64 + 21144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34F0C"))) PPC_WEAK_FUNC(sub_83C34F0C);
PPC_FUNC_IMPL(__imp__sub_83C34F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34F10"))) PPC_WEAK_FUNC(sub_83C34F10);
PPC_FUNC_IMPL(__imp__sub_83C34F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21152
	ctx.r3.s64 = ctx.r11.s64 + 21152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34F1C"))) PPC_WEAK_FUNC(sub_83C34F1C);
PPC_FUNC_IMPL(__imp__sub_83C34F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34F20"))) PPC_WEAK_FUNC(sub_83C34F20);
PPC_FUNC_IMPL(__imp__sub_83C34F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21160
	ctx.r3.s64 = ctx.r11.s64 + 21160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34F2C"))) PPC_WEAK_FUNC(sub_83C34F2C);
PPC_FUNC_IMPL(__imp__sub_83C34F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34F30"))) PPC_WEAK_FUNC(sub_83C34F30);
PPC_FUNC_IMPL(__imp__sub_83C34F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21168
	ctx.r3.s64 = ctx.r11.s64 + 21168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34F3C"))) PPC_WEAK_FUNC(sub_83C34F3C);
PPC_FUNC_IMPL(__imp__sub_83C34F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34F40"))) PPC_WEAK_FUNC(sub_83C34F40);
PPC_FUNC_IMPL(__imp__sub_83C34F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21176
	ctx.r3.s64 = ctx.r11.s64 + 21176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34F4C"))) PPC_WEAK_FUNC(sub_83C34F4C);
PPC_FUNC_IMPL(__imp__sub_83C34F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34F50"))) PPC_WEAK_FUNC(sub_83C34F50);
PPC_FUNC_IMPL(__imp__sub_83C34F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21184
	ctx.r3.s64 = ctx.r11.s64 + 21184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34F5C"))) PPC_WEAK_FUNC(sub_83C34F5C);
PPC_FUNC_IMPL(__imp__sub_83C34F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34F60"))) PPC_WEAK_FUNC(sub_83C34F60);
PPC_FUNC_IMPL(__imp__sub_83C34F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21192
	ctx.r3.s64 = ctx.r11.s64 + 21192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34F6C"))) PPC_WEAK_FUNC(sub_83C34F6C);
PPC_FUNC_IMPL(__imp__sub_83C34F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34F70"))) PPC_WEAK_FUNC(sub_83C34F70);
PPC_FUNC_IMPL(__imp__sub_83C34F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21200
	ctx.r3.s64 = ctx.r11.s64 + 21200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34F7C"))) PPC_WEAK_FUNC(sub_83C34F7C);
PPC_FUNC_IMPL(__imp__sub_83C34F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34F80"))) PPC_WEAK_FUNC(sub_83C34F80);
PPC_FUNC_IMPL(__imp__sub_83C34F80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15624
	ctx.r7.s64 = ctx.r8.s64 + 15624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15624(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C34FA8"))) PPC_WEAK_FUNC(sub_83C34FA8);
PPC_FUNC_IMPL(__imp__sub_83C34FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-28156
	ctx.r6.s64 = ctx.r7.s64 + -28156;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28228(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28228);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15624(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15624);
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
	// std r9,-28156(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28156, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C34FF0"))) PPC_WEAK_FUNC(sub_83C34FF0);
PPC_FUNC_IMPL(__imp__sub_83C34FF0) {
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
	// addi r3,r11,15608
	ctx.r3.s64 = ctx.r11.s64 + 15608;
	// bl 0x83523120
	ctx.lr = 0x83C35008;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,21208
	ctx.r3.s64 = ctx.r10.s64 + 21208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C35014;
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

__attribute__((alias("__imp__sub_83C35024"))) PPC_WEAK_FUNC(sub_83C35024);
PPC_FUNC_IMPL(__imp__sub_83C35024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35028"))) PPC_WEAK_FUNC(sub_83C35028);
PPC_FUNC_IMPL(__imp__sub_83C35028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21224
	ctx.r3.s64 = ctx.r11.s64 + 21224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35034"))) PPC_WEAK_FUNC(sub_83C35034);
PPC_FUNC_IMPL(__imp__sub_83C35034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35038"))) PPC_WEAK_FUNC(sub_83C35038);
PPC_FUNC_IMPL(__imp__sub_83C35038) {
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
	// addi r3,r11,15632
	ctx.r3.s64 = ctx.r11.s64 + 15632;
	// bl 0x8259af80
	ctx.lr = 0x83C35050;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,21240
	ctx.r3.s64 = ctx.r10.s64 + 21240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3505C;
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

__attribute__((alias("__imp__sub_83C3506C"))) PPC_WEAK_FUNC(sub_83C3506C);
PPC_FUNC_IMPL(__imp__sub_83C3506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35070"))) PPC_WEAK_FUNC(sub_83C35070);
PPC_FUNC_IMPL(__imp__sub_83C35070) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15612
	ctx.r11.s64 = ctx.r8.s64 + 15612;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-28180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28180);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21232
	ctx.r3.s64 = ctx.r6.s64 + 21232;
	// stw r10,15612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C350A0"))) PPC_WEAK_FUNC(sub_83C350A0);
PPC_FUNC_IMPL(__imp__sub_83C350A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21248
	ctx.r3.s64 = ctx.r11.s64 + 21248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C350AC"))) PPC_WEAK_FUNC(sub_83C350AC);
PPC_FUNC_IMPL(__imp__sub_83C350AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C350B0"))) PPC_WEAK_FUNC(sub_83C350B0);
PPC_FUNC_IMPL(__imp__sub_83C350B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21256
	ctx.r3.s64 = ctx.r11.s64 + 21256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C350BC"))) PPC_WEAK_FUNC(sub_83C350BC);
PPC_FUNC_IMPL(__imp__sub_83C350BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C350C0"))) PPC_WEAK_FUNC(sub_83C350C0);
PPC_FUNC_IMPL(__imp__sub_83C350C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21264
	ctx.r3.s64 = ctx.r11.s64 + 21264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C350CC"))) PPC_WEAK_FUNC(sub_83C350CC);
PPC_FUNC_IMPL(__imp__sub_83C350CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C350D0"))) PPC_WEAK_FUNC(sub_83C350D0);
PPC_FUNC_IMPL(__imp__sub_83C350D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21272
	ctx.r3.s64 = ctx.r11.s64 + 21272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C350DC"))) PPC_WEAK_FUNC(sub_83C350DC);
PPC_FUNC_IMPL(__imp__sub_83C350DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C350E0"))) PPC_WEAK_FUNC(sub_83C350E0);
PPC_FUNC_IMPL(__imp__sub_83C350E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21280
	ctx.r3.s64 = ctx.r11.s64 + 21280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C350EC"))) PPC_WEAK_FUNC(sub_83C350EC);
PPC_FUNC_IMPL(__imp__sub_83C350EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C350F0"))) PPC_WEAK_FUNC(sub_83C350F0);
PPC_FUNC_IMPL(__imp__sub_83C350F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21288
	ctx.r3.s64 = ctx.r11.s64 + 21288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C350FC"))) PPC_WEAK_FUNC(sub_83C350FC);
PPC_FUNC_IMPL(__imp__sub_83C350FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

