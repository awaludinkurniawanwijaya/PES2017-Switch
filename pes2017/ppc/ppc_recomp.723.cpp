#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C1A0E8"))) PPC_WEAK_FUNC(sub_83C1A0E8);
PPC_FUNC_IMPL(__imp__sub_83C1A0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18616
	ctx.r3.s64 = ctx.r11.s64 + -18616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A0F4"))) PPC_WEAK_FUNC(sub_83C1A0F4);
PPC_FUNC_IMPL(__imp__sub_83C1A0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A0F8"))) PPC_WEAK_FUNC(sub_83C1A0F8);
PPC_FUNC_IMPL(__imp__sub_83C1A0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18608
	ctx.r3.s64 = ctx.r11.s64 + -18608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A104"))) PPC_WEAK_FUNC(sub_83C1A104);
PPC_FUNC_IMPL(__imp__sub_83C1A104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A108"))) PPC_WEAK_FUNC(sub_83C1A108);
PPC_FUNC_IMPL(__imp__sub_83C1A108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18600
	ctx.r3.s64 = ctx.r11.s64 + -18600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A114"))) PPC_WEAK_FUNC(sub_83C1A114);
PPC_FUNC_IMPL(__imp__sub_83C1A114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A118"))) PPC_WEAK_FUNC(sub_83C1A118);
PPC_FUNC_IMPL(__imp__sub_83C1A118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18592
	ctx.r3.s64 = ctx.r11.s64 + -18592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A124"))) PPC_WEAK_FUNC(sub_83C1A124);
PPC_FUNC_IMPL(__imp__sub_83C1A124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A128"))) PPC_WEAK_FUNC(sub_83C1A128);
PPC_FUNC_IMPL(__imp__sub_83C1A128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18584
	ctx.r3.s64 = ctx.r11.s64 + -18584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A134"))) PPC_WEAK_FUNC(sub_83C1A134);
PPC_FUNC_IMPL(__imp__sub_83C1A134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A138"))) PPC_WEAK_FUNC(sub_83C1A138);
PPC_FUNC_IMPL(__imp__sub_83C1A138) {
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
	// addi r3,r11,-21464
	ctx.r3.s64 = ctx.r11.s64 + -21464;
	// bl 0x83523120
	ctx.lr = 0x83C1A150;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-18576
	ctx.r3.s64 = ctx.r10.s64 + -18576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1A15C;
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

__attribute__((alias("__imp__sub_83C1A16C"))) PPC_WEAK_FUNC(sub_83C1A16C);
PPC_FUNC_IMPL(__imp__sub_83C1A16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A170"))) PPC_WEAK_FUNC(sub_83C1A170);
PPC_FUNC_IMPL(__imp__sub_83C1A170) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21460
	ctx.r7.s64 = ctx.r8.s64 + -21460;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21460(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21460);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21460(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21460, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1A198"))) PPC_WEAK_FUNC(sub_83C1A198);
PPC_FUNC_IMPL(__imp__sub_83C1A198) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-1004
	ctx.r6.s64 = ctx.r7.s64 + -1004;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1076(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1076);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21460(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21460);
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
	// std r9,-1004(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1004, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1A1E0"))) PPC_WEAK_FUNC(sub_83C1A1E0);
PPC_FUNC_IMPL(__imp__sub_83C1A1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A1EC"))) PPC_WEAK_FUNC(sub_83C1A1EC);
PPC_FUNC_IMPL(__imp__sub_83C1A1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A1F0"))) PPC_WEAK_FUNC(sub_83C1A1F0);
PPC_FUNC_IMPL(__imp__sub_83C1A1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18552
	ctx.r3.s64 = ctx.r11.s64 + -18552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A1FC"))) PPC_WEAK_FUNC(sub_83C1A1FC);
PPC_FUNC_IMPL(__imp__sub_83C1A1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A200"))) PPC_WEAK_FUNC(sub_83C1A200);
PPC_FUNC_IMPL(__imp__sub_83C1A200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18544
	ctx.r3.s64 = ctx.r11.s64 + -18544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A20C"))) PPC_WEAK_FUNC(sub_83C1A20C);
PPC_FUNC_IMPL(__imp__sub_83C1A20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A210"))) PPC_WEAK_FUNC(sub_83C1A210);
PPC_FUNC_IMPL(__imp__sub_83C1A210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18536
	ctx.r3.s64 = ctx.r11.s64 + -18536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A21C"))) PPC_WEAK_FUNC(sub_83C1A21C);
PPC_FUNC_IMPL(__imp__sub_83C1A21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A220"))) PPC_WEAK_FUNC(sub_83C1A220);
PPC_FUNC_IMPL(__imp__sub_83C1A220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18528
	ctx.r3.s64 = ctx.r11.s64 + -18528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A22C"))) PPC_WEAK_FUNC(sub_83C1A22C);
PPC_FUNC_IMPL(__imp__sub_83C1A22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A230"))) PPC_WEAK_FUNC(sub_83C1A230);
PPC_FUNC_IMPL(__imp__sub_83C1A230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18520
	ctx.r3.s64 = ctx.r11.s64 + -18520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A23C"))) PPC_WEAK_FUNC(sub_83C1A23C);
PPC_FUNC_IMPL(__imp__sub_83C1A23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A240"))) PPC_WEAK_FUNC(sub_83C1A240);
PPC_FUNC_IMPL(__imp__sub_83C1A240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18512
	ctx.r3.s64 = ctx.r11.s64 + -18512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A24C"))) PPC_WEAK_FUNC(sub_83C1A24C);
PPC_FUNC_IMPL(__imp__sub_83C1A24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A250"))) PPC_WEAK_FUNC(sub_83C1A250);
PPC_FUNC_IMPL(__imp__sub_83C1A250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18504
	ctx.r3.s64 = ctx.r11.s64 + -18504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A25C"))) PPC_WEAK_FUNC(sub_83C1A25C);
PPC_FUNC_IMPL(__imp__sub_83C1A25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A260"))) PPC_WEAK_FUNC(sub_83C1A260);
PPC_FUNC_IMPL(__imp__sub_83C1A260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18496
	ctx.r3.s64 = ctx.r11.s64 + -18496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A26C"))) PPC_WEAK_FUNC(sub_83C1A26C);
PPC_FUNC_IMPL(__imp__sub_83C1A26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A270"))) PPC_WEAK_FUNC(sub_83C1A270);
PPC_FUNC_IMPL(__imp__sub_83C1A270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18488
	ctx.r3.s64 = ctx.r11.s64 + -18488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A27C"))) PPC_WEAK_FUNC(sub_83C1A27C);
PPC_FUNC_IMPL(__imp__sub_83C1A27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A280"))) PPC_WEAK_FUNC(sub_83C1A280);
PPC_FUNC_IMPL(__imp__sub_83C1A280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18480
	ctx.r3.s64 = ctx.r11.s64 + -18480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A28C"))) PPC_WEAK_FUNC(sub_83C1A28C);
PPC_FUNC_IMPL(__imp__sub_83C1A28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A290"))) PPC_WEAK_FUNC(sub_83C1A290);
PPC_FUNC_IMPL(__imp__sub_83C1A290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18472
	ctx.r3.s64 = ctx.r11.s64 + -18472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A29C"))) PPC_WEAK_FUNC(sub_83C1A29C);
PPC_FUNC_IMPL(__imp__sub_83C1A29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A2A0"))) PPC_WEAK_FUNC(sub_83C1A2A0);
PPC_FUNC_IMPL(__imp__sub_83C1A2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18464
	ctx.r3.s64 = ctx.r11.s64 + -18464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A2AC"))) PPC_WEAK_FUNC(sub_83C1A2AC);
PPC_FUNC_IMPL(__imp__sub_83C1A2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A2B0"))) PPC_WEAK_FUNC(sub_83C1A2B0);
PPC_FUNC_IMPL(__imp__sub_83C1A2B0) {
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
	// addi r3,r11,-21448
	ctx.r3.s64 = ctx.r11.s64 + -21448;
	// bl 0x83523120
	ctx.lr = 0x83C1A2C8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-18456
	ctx.r3.s64 = ctx.r10.s64 + -18456;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1A2D4;
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

__attribute__((alias("__imp__sub_83C1A2E4"))) PPC_WEAK_FUNC(sub_83C1A2E4);
PPC_FUNC_IMPL(__imp__sub_83C1A2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A2E8"))) PPC_WEAK_FUNC(sub_83C1A2E8);
PPC_FUNC_IMPL(__imp__sub_83C1A2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21432
	ctx.r7.s64 = ctx.r8.s64 + -21432;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21432(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21432);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21432(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21432, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1A310"))) PPC_WEAK_FUNC(sub_83C1A310);
PPC_FUNC_IMPL(__imp__sub_83C1A310) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-876
	ctx.r6.s64 = ctx.r7.s64 + -876;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-948(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -948);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21432(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21432);
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
	// std r9,-876(r7)
	PPC_STORE_U64(ctx.r7.u32 + -876, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1A358"))) PPC_WEAK_FUNC(sub_83C1A358);
PPC_FUNC_IMPL(__imp__sub_83C1A358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18440
	ctx.r3.s64 = ctx.r11.s64 + -18440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A364"))) PPC_WEAK_FUNC(sub_83C1A364);
PPC_FUNC_IMPL(__imp__sub_83C1A364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A368"))) PPC_WEAK_FUNC(sub_83C1A368);
PPC_FUNC_IMPL(__imp__sub_83C1A368) {
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
	// addi r3,r11,-21424
	ctx.r3.s64 = ctx.r11.s64 + -21424;
	// bl 0x8259af80
	ctx.lr = 0x83C1A380;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-18424
	ctx.r3.s64 = ctx.r10.s64 + -18424;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1A38C;
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

__attribute__((alias("__imp__sub_83C1A39C"))) PPC_WEAK_FUNC(sub_83C1A39C);
PPC_FUNC_IMPL(__imp__sub_83C1A39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A3A0"))) PPC_WEAK_FUNC(sub_83C1A3A0);
PPC_FUNC_IMPL(__imp__sub_83C1A3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21444
	ctx.r11.s64 = ctx.r8.s64 + -21444;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-900(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -900);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18432
	ctx.r3.s64 = ctx.r6.s64 + -18432;
	// stw r10,-21444(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21444, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A3D0"))) PPC_WEAK_FUNC(sub_83C1A3D0);
PPC_FUNC_IMPL(__imp__sub_83C1A3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18416
	ctx.r3.s64 = ctx.r11.s64 + -18416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A3DC"))) PPC_WEAK_FUNC(sub_83C1A3DC);
PPC_FUNC_IMPL(__imp__sub_83C1A3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A3E0"))) PPC_WEAK_FUNC(sub_83C1A3E0);
PPC_FUNC_IMPL(__imp__sub_83C1A3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18408
	ctx.r3.s64 = ctx.r11.s64 + -18408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A3EC"))) PPC_WEAK_FUNC(sub_83C1A3EC);
PPC_FUNC_IMPL(__imp__sub_83C1A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A3F0"))) PPC_WEAK_FUNC(sub_83C1A3F0);
PPC_FUNC_IMPL(__imp__sub_83C1A3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18400
	ctx.r3.s64 = ctx.r11.s64 + -18400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A3FC"))) PPC_WEAK_FUNC(sub_83C1A3FC);
PPC_FUNC_IMPL(__imp__sub_83C1A3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A400"))) PPC_WEAK_FUNC(sub_83C1A400);
PPC_FUNC_IMPL(__imp__sub_83C1A400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18392
	ctx.r3.s64 = ctx.r11.s64 + -18392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A40C"))) PPC_WEAK_FUNC(sub_83C1A40C);
PPC_FUNC_IMPL(__imp__sub_83C1A40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A410"))) PPC_WEAK_FUNC(sub_83C1A410);
PPC_FUNC_IMPL(__imp__sub_83C1A410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18384
	ctx.r3.s64 = ctx.r11.s64 + -18384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A41C"))) PPC_WEAK_FUNC(sub_83C1A41C);
PPC_FUNC_IMPL(__imp__sub_83C1A41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A420"))) PPC_WEAK_FUNC(sub_83C1A420);
PPC_FUNC_IMPL(__imp__sub_83C1A420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18376
	ctx.r3.s64 = ctx.r11.s64 + -18376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A42C"))) PPC_WEAK_FUNC(sub_83C1A42C);
PPC_FUNC_IMPL(__imp__sub_83C1A42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A430"))) PPC_WEAK_FUNC(sub_83C1A430);
PPC_FUNC_IMPL(__imp__sub_83C1A430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18368
	ctx.r3.s64 = ctx.r11.s64 + -18368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A43C"))) PPC_WEAK_FUNC(sub_83C1A43C);
PPC_FUNC_IMPL(__imp__sub_83C1A43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A440"))) PPC_WEAK_FUNC(sub_83C1A440);
PPC_FUNC_IMPL(__imp__sub_83C1A440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18360
	ctx.r3.s64 = ctx.r11.s64 + -18360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A44C"))) PPC_WEAK_FUNC(sub_83C1A44C);
PPC_FUNC_IMPL(__imp__sub_83C1A44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A450"))) PPC_WEAK_FUNC(sub_83C1A450);
PPC_FUNC_IMPL(__imp__sub_83C1A450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18352
	ctx.r3.s64 = ctx.r11.s64 + -18352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A45C"))) PPC_WEAK_FUNC(sub_83C1A45C);
PPC_FUNC_IMPL(__imp__sub_83C1A45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A460"))) PPC_WEAK_FUNC(sub_83C1A460);
PPC_FUNC_IMPL(__imp__sub_83C1A460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18344
	ctx.r3.s64 = ctx.r11.s64 + -18344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A46C"))) PPC_WEAK_FUNC(sub_83C1A46C);
PPC_FUNC_IMPL(__imp__sub_83C1A46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A470"))) PPC_WEAK_FUNC(sub_83C1A470);
PPC_FUNC_IMPL(__imp__sub_83C1A470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18336
	ctx.r3.s64 = ctx.r11.s64 + -18336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A47C"))) PPC_WEAK_FUNC(sub_83C1A47C);
PPC_FUNC_IMPL(__imp__sub_83C1A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A480"))) PPC_WEAK_FUNC(sub_83C1A480);
PPC_FUNC_IMPL(__imp__sub_83C1A480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18328
	ctx.r3.s64 = ctx.r11.s64 + -18328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A48C"))) PPC_WEAK_FUNC(sub_83C1A48C);
PPC_FUNC_IMPL(__imp__sub_83C1A48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A490"))) PPC_WEAK_FUNC(sub_83C1A490);
PPC_FUNC_IMPL(__imp__sub_83C1A490) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21072
	ctx.r7.s64 = ctx.r8.s64 + -21072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21072(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21072);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21072(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21072, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1A4B8"))) PPC_WEAK_FUNC(sub_83C1A4B8);
PPC_FUNC_IMPL(__imp__sub_83C1A4B8) {
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
	// addi r3,r11,-21076
	ctx.r3.s64 = ctx.r11.s64 + -21076;
	// bl 0x83523120
	ctx.lr = 0x83C1A4D0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-18320
	ctx.r3.s64 = ctx.r10.s64 + -18320;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1A4DC;
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

__attribute__((alias("__imp__sub_83C1A4EC"))) PPC_WEAK_FUNC(sub_83C1A4EC);
PPC_FUNC_IMPL(__imp__sub_83C1A4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A4F0"))) PPC_WEAK_FUNC(sub_83C1A4F0);
PPC_FUNC_IMPL(__imp__sub_83C1A4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18304
	ctx.r3.s64 = ctx.r11.s64 + -18304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A4FC"))) PPC_WEAK_FUNC(sub_83C1A4FC);
PPC_FUNC_IMPL(__imp__sub_83C1A4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A500"))) PPC_WEAK_FUNC(sub_83C1A500);
PPC_FUNC_IMPL(__imp__sub_83C1A500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18296
	ctx.r3.s64 = ctx.r11.s64 + -18296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A50C"))) PPC_WEAK_FUNC(sub_83C1A50C);
PPC_FUNC_IMPL(__imp__sub_83C1A50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A510"))) PPC_WEAK_FUNC(sub_83C1A510);
PPC_FUNC_IMPL(__imp__sub_83C1A510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18288
	ctx.r3.s64 = ctx.r11.s64 + -18288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A51C"))) PPC_WEAK_FUNC(sub_83C1A51C);
PPC_FUNC_IMPL(__imp__sub_83C1A51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A520"))) PPC_WEAK_FUNC(sub_83C1A520);
PPC_FUNC_IMPL(__imp__sub_83C1A520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18280
	ctx.r3.s64 = ctx.r11.s64 + -18280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A52C"))) PPC_WEAK_FUNC(sub_83C1A52C);
PPC_FUNC_IMPL(__imp__sub_83C1A52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A530"))) PPC_WEAK_FUNC(sub_83C1A530);
PPC_FUNC_IMPL(__imp__sub_83C1A530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18272
	ctx.r3.s64 = ctx.r11.s64 + -18272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A53C"))) PPC_WEAK_FUNC(sub_83C1A53C);
PPC_FUNC_IMPL(__imp__sub_83C1A53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A540"))) PPC_WEAK_FUNC(sub_83C1A540);
PPC_FUNC_IMPL(__imp__sub_83C1A540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18264
	ctx.r3.s64 = ctx.r11.s64 + -18264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A54C"))) PPC_WEAK_FUNC(sub_83C1A54C);
PPC_FUNC_IMPL(__imp__sub_83C1A54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A550"))) PPC_WEAK_FUNC(sub_83C1A550);
PPC_FUNC_IMPL(__imp__sub_83C1A550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18256
	ctx.r3.s64 = ctx.r11.s64 + -18256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A55C"))) PPC_WEAK_FUNC(sub_83C1A55C);
PPC_FUNC_IMPL(__imp__sub_83C1A55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A560"))) PPC_WEAK_FUNC(sub_83C1A560);
PPC_FUNC_IMPL(__imp__sub_83C1A560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18248
	ctx.r3.s64 = ctx.r11.s64 + -18248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A56C"))) PPC_WEAK_FUNC(sub_83C1A56C);
PPC_FUNC_IMPL(__imp__sub_83C1A56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A570"))) PPC_WEAK_FUNC(sub_83C1A570);
PPC_FUNC_IMPL(__imp__sub_83C1A570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18240
	ctx.r3.s64 = ctx.r11.s64 + -18240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A57C"))) PPC_WEAK_FUNC(sub_83C1A57C);
PPC_FUNC_IMPL(__imp__sub_83C1A57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A580"))) PPC_WEAK_FUNC(sub_83C1A580);
PPC_FUNC_IMPL(__imp__sub_83C1A580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18232
	ctx.r3.s64 = ctx.r11.s64 + -18232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A58C"))) PPC_WEAK_FUNC(sub_83C1A58C);
PPC_FUNC_IMPL(__imp__sub_83C1A58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A590"))) PPC_WEAK_FUNC(sub_83C1A590);
PPC_FUNC_IMPL(__imp__sub_83C1A590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18224
	ctx.r3.s64 = ctx.r11.s64 + -18224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A59C"))) PPC_WEAK_FUNC(sub_83C1A59C);
PPC_FUNC_IMPL(__imp__sub_83C1A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A5A0"))) PPC_WEAK_FUNC(sub_83C1A5A0);
PPC_FUNC_IMPL(__imp__sub_83C1A5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18216
	ctx.r3.s64 = ctx.r11.s64 + -18216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A5AC"))) PPC_WEAK_FUNC(sub_83C1A5AC);
PPC_FUNC_IMPL(__imp__sub_83C1A5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A5B0"))) PPC_WEAK_FUNC(sub_83C1A5B0);
PPC_FUNC_IMPL(__imp__sub_83C1A5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18208
	ctx.r3.s64 = ctx.r11.s64 + -18208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A5BC"))) PPC_WEAK_FUNC(sub_83C1A5BC);
PPC_FUNC_IMPL(__imp__sub_83C1A5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A5C0"))) PPC_WEAK_FUNC(sub_83C1A5C0);
PPC_FUNC_IMPL(__imp__sub_83C1A5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18200
	ctx.r3.s64 = ctx.r11.s64 + -18200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A5CC"))) PPC_WEAK_FUNC(sub_83C1A5CC);
PPC_FUNC_IMPL(__imp__sub_83C1A5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A5D0"))) PPC_WEAK_FUNC(sub_83C1A5D0);
PPC_FUNC_IMPL(__imp__sub_83C1A5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18192
	ctx.r3.s64 = ctx.r11.s64 + -18192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A5DC"))) PPC_WEAK_FUNC(sub_83C1A5DC);
PPC_FUNC_IMPL(__imp__sub_83C1A5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A5E0"))) PPC_WEAK_FUNC(sub_83C1A5E0);
PPC_FUNC_IMPL(__imp__sub_83C1A5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18184
	ctx.r3.s64 = ctx.r11.s64 + -18184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A5EC"))) PPC_WEAK_FUNC(sub_83C1A5EC);
PPC_FUNC_IMPL(__imp__sub_83C1A5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A5F0"))) PPC_WEAK_FUNC(sub_83C1A5F0);
PPC_FUNC_IMPL(__imp__sub_83C1A5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18176
	ctx.r3.s64 = ctx.r11.s64 + -18176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A5FC"))) PPC_WEAK_FUNC(sub_83C1A5FC);
PPC_FUNC_IMPL(__imp__sub_83C1A5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A600"))) PPC_WEAK_FUNC(sub_83C1A600);
PPC_FUNC_IMPL(__imp__sub_83C1A600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18168
	ctx.r3.s64 = ctx.r11.s64 + -18168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A60C"))) PPC_WEAK_FUNC(sub_83C1A60C);
PPC_FUNC_IMPL(__imp__sub_83C1A60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A610"))) PPC_WEAK_FUNC(sub_83C1A610);
PPC_FUNC_IMPL(__imp__sub_83C1A610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18160
	ctx.r3.s64 = ctx.r11.s64 + -18160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A61C"))) PPC_WEAK_FUNC(sub_83C1A61C);
PPC_FUNC_IMPL(__imp__sub_83C1A61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A620"))) PPC_WEAK_FUNC(sub_83C1A620);
PPC_FUNC_IMPL(__imp__sub_83C1A620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18152
	ctx.r3.s64 = ctx.r11.s64 + -18152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A62C"))) PPC_WEAK_FUNC(sub_83C1A62C);
PPC_FUNC_IMPL(__imp__sub_83C1A62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A630"))) PPC_WEAK_FUNC(sub_83C1A630);
PPC_FUNC_IMPL(__imp__sub_83C1A630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18144
	ctx.r3.s64 = ctx.r11.s64 + -18144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A63C"))) PPC_WEAK_FUNC(sub_83C1A63C);
PPC_FUNC_IMPL(__imp__sub_83C1A63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A640"))) PPC_WEAK_FUNC(sub_83C1A640);
PPC_FUNC_IMPL(__imp__sub_83C1A640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18136
	ctx.r3.s64 = ctx.r11.s64 + -18136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A64C"))) PPC_WEAK_FUNC(sub_83C1A64C);
PPC_FUNC_IMPL(__imp__sub_83C1A64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A650"))) PPC_WEAK_FUNC(sub_83C1A650);
PPC_FUNC_IMPL(__imp__sub_83C1A650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18128
	ctx.r3.s64 = ctx.r11.s64 + -18128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A65C"))) PPC_WEAK_FUNC(sub_83C1A65C);
PPC_FUNC_IMPL(__imp__sub_83C1A65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A660"))) PPC_WEAK_FUNC(sub_83C1A660);
PPC_FUNC_IMPL(__imp__sub_83C1A660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18120
	ctx.r3.s64 = ctx.r11.s64 + -18120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A66C"))) PPC_WEAK_FUNC(sub_83C1A66C);
PPC_FUNC_IMPL(__imp__sub_83C1A66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A670"))) PPC_WEAK_FUNC(sub_83C1A670);
PPC_FUNC_IMPL(__imp__sub_83C1A670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18112
	ctx.r3.s64 = ctx.r11.s64 + -18112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A67C"))) PPC_WEAK_FUNC(sub_83C1A67C);
PPC_FUNC_IMPL(__imp__sub_83C1A67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A680"))) PPC_WEAK_FUNC(sub_83C1A680);
PPC_FUNC_IMPL(__imp__sub_83C1A680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18104
	ctx.r3.s64 = ctx.r11.s64 + -18104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A68C"))) PPC_WEAK_FUNC(sub_83C1A68C);
PPC_FUNC_IMPL(__imp__sub_83C1A68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A690"))) PPC_WEAK_FUNC(sub_83C1A690);
PPC_FUNC_IMPL(__imp__sub_83C1A690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18096
	ctx.r3.s64 = ctx.r11.s64 + -18096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A69C"))) PPC_WEAK_FUNC(sub_83C1A69C);
PPC_FUNC_IMPL(__imp__sub_83C1A69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A6A0"))) PPC_WEAK_FUNC(sub_83C1A6A0);
PPC_FUNC_IMPL(__imp__sub_83C1A6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18088
	ctx.r3.s64 = ctx.r11.s64 + -18088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A6AC"))) PPC_WEAK_FUNC(sub_83C1A6AC);
PPC_FUNC_IMPL(__imp__sub_83C1A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A6B0"))) PPC_WEAK_FUNC(sub_83C1A6B0);
PPC_FUNC_IMPL(__imp__sub_83C1A6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18080
	ctx.r3.s64 = ctx.r11.s64 + -18080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A6BC"))) PPC_WEAK_FUNC(sub_83C1A6BC);
PPC_FUNC_IMPL(__imp__sub_83C1A6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A6C0"))) PPC_WEAK_FUNC(sub_83C1A6C0);
PPC_FUNC_IMPL(__imp__sub_83C1A6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18072
	ctx.r3.s64 = ctx.r11.s64 + -18072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A6CC"))) PPC_WEAK_FUNC(sub_83C1A6CC);
PPC_FUNC_IMPL(__imp__sub_83C1A6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A6D0"))) PPC_WEAK_FUNC(sub_83C1A6D0);
PPC_FUNC_IMPL(__imp__sub_83C1A6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18064
	ctx.r3.s64 = ctx.r11.s64 + -18064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A6DC"))) PPC_WEAK_FUNC(sub_83C1A6DC);
PPC_FUNC_IMPL(__imp__sub_83C1A6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A6E0"))) PPC_WEAK_FUNC(sub_83C1A6E0);
PPC_FUNC_IMPL(__imp__sub_83C1A6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18056
	ctx.r3.s64 = ctx.r11.s64 + -18056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A6EC"))) PPC_WEAK_FUNC(sub_83C1A6EC);
PPC_FUNC_IMPL(__imp__sub_83C1A6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A6F0"))) PPC_WEAK_FUNC(sub_83C1A6F0);
PPC_FUNC_IMPL(__imp__sub_83C1A6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18048
	ctx.r3.s64 = ctx.r11.s64 + -18048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A6FC"))) PPC_WEAK_FUNC(sub_83C1A6FC);
PPC_FUNC_IMPL(__imp__sub_83C1A6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A700"))) PPC_WEAK_FUNC(sub_83C1A700);
PPC_FUNC_IMPL(__imp__sub_83C1A700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18040
	ctx.r3.s64 = ctx.r11.s64 + -18040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A70C"))) PPC_WEAK_FUNC(sub_83C1A70C);
PPC_FUNC_IMPL(__imp__sub_83C1A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A710"))) PPC_WEAK_FUNC(sub_83C1A710);
PPC_FUNC_IMPL(__imp__sub_83C1A710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18032
	ctx.r3.s64 = ctx.r11.s64 + -18032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A71C"))) PPC_WEAK_FUNC(sub_83C1A71C);
PPC_FUNC_IMPL(__imp__sub_83C1A71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A720"))) PPC_WEAK_FUNC(sub_83C1A720);
PPC_FUNC_IMPL(__imp__sub_83C1A720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18024
	ctx.r3.s64 = ctx.r11.s64 + -18024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A72C"))) PPC_WEAK_FUNC(sub_83C1A72C);
PPC_FUNC_IMPL(__imp__sub_83C1A72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A730"))) PPC_WEAK_FUNC(sub_83C1A730);
PPC_FUNC_IMPL(__imp__sub_83C1A730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18016
	ctx.r3.s64 = ctx.r11.s64 + -18016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A73C"))) PPC_WEAK_FUNC(sub_83C1A73C);
PPC_FUNC_IMPL(__imp__sub_83C1A73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A740"))) PPC_WEAK_FUNC(sub_83C1A740);
PPC_FUNC_IMPL(__imp__sub_83C1A740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18008
	ctx.r3.s64 = ctx.r11.s64 + -18008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A74C"))) PPC_WEAK_FUNC(sub_83C1A74C);
PPC_FUNC_IMPL(__imp__sub_83C1A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A750"))) PPC_WEAK_FUNC(sub_83C1A750);
PPC_FUNC_IMPL(__imp__sub_83C1A750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-18000
	ctx.r3.s64 = ctx.r11.s64 + -18000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A75C"))) PPC_WEAK_FUNC(sub_83C1A75C);
PPC_FUNC_IMPL(__imp__sub_83C1A75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A760"))) PPC_WEAK_FUNC(sub_83C1A760);
PPC_FUNC_IMPL(__imp__sub_83C1A760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17992
	ctx.r3.s64 = ctx.r11.s64 + -17992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A76C"))) PPC_WEAK_FUNC(sub_83C1A76C);
PPC_FUNC_IMPL(__imp__sub_83C1A76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A770"))) PPC_WEAK_FUNC(sub_83C1A770);
PPC_FUNC_IMPL(__imp__sub_83C1A770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17984
	ctx.r3.s64 = ctx.r11.s64 + -17984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A77C"))) PPC_WEAK_FUNC(sub_83C1A77C);
PPC_FUNC_IMPL(__imp__sub_83C1A77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A780"))) PPC_WEAK_FUNC(sub_83C1A780);
PPC_FUNC_IMPL(__imp__sub_83C1A780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17976
	ctx.r3.s64 = ctx.r11.s64 + -17976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A78C"))) PPC_WEAK_FUNC(sub_83C1A78C);
PPC_FUNC_IMPL(__imp__sub_83C1A78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A790"))) PPC_WEAK_FUNC(sub_83C1A790);
PPC_FUNC_IMPL(__imp__sub_83C1A790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17968
	ctx.r3.s64 = ctx.r11.s64 + -17968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A79C"))) PPC_WEAK_FUNC(sub_83C1A79C);
PPC_FUNC_IMPL(__imp__sub_83C1A79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A7A0"))) PPC_WEAK_FUNC(sub_83C1A7A0);
PPC_FUNC_IMPL(__imp__sub_83C1A7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17960
	ctx.r3.s64 = ctx.r11.s64 + -17960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A7AC"))) PPC_WEAK_FUNC(sub_83C1A7AC);
PPC_FUNC_IMPL(__imp__sub_83C1A7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A7B0"))) PPC_WEAK_FUNC(sub_83C1A7B0);
PPC_FUNC_IMPL(__imp__sub_83C1A7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17952
	ctx.r3.s64 = ctx.r11.s64 + -17952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A7BC"))) PPC_WEAK_FUNC(sub_83C1A7BC);
PPC_FUNC_IMPL(__imp__sub_83C1A7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A7C0"))) PPC_WEAK_FUNC(sub_83C1A7C0);
PPC_FUNC_IMPL(__imp__sub_83C1A7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17944
	ctx.r3.s64 = ctx.r11.s64 + -17944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A7CC"))) PPC_WEAK_FUNC(sub_83C1A7CC);
PPC_FUNC_IMPL(__imp__sub_83C1A7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A7D0"))) PPC_WEAK_FUNC(sub_83C1A7D0);
PPC_FUNC_IMPL(__imp__sub_83C1A7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17936
	ctx.r3.s64 = ctx.r11.s64 + -17936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A7DC"))) PPC_WEAK_FUNC(sub_83C1A7DC);
PPC_FUNC_IMPL(__imp__sub_83C1A7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A7E0"))) PPC_WEAK_FUNC(sub_83C1A7E0);
PPC_FUNC_IMPL(__imp__sub_83C1A7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17928
	ctx.r3.s64 = ctx.r11.s64 + -17928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A7EC"))) PPC_WEAK_FUNC(sub_83C1A7EC);
PPC_FUNC_IMPL(__imp__sub_83C1A7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A7F0"))) PPC_WEAK_FUNC(sub_83C1A7F0);
PPC_FUNC_IMPL(__imp__sub_83C1A7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21032
	ctx.r7.s64 = ctx.r8.s64 + -21032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21032(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1A818"))) PPC_WEAK_FUNC(sub_83C1A818);
PPC_FUNC_IMPL(__imp__sub_83C1A818) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-280
	ctx.r6.s64 = ctx.r7.s64 + -280;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-352(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -352);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21032);
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
	// std r9,-280(r7)
	PPC_STORE_U64(ctx.r7.u32 + -280, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1A860"))) PPC_WEAK_FUNC(sub_83C1A860);
PPC_FUNC_IMPL(__imp__sub_83C1A860) {
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
	// addi r3,r11,-21048
	ctx.r3.s64 = ctx.r11.s64 + -21048;
	// bl 0x83523120
	ctx.lr = 0x83C1A878;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-17920
	ctx.r3.s64 = ctx.r10.s64 + -17920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1A884;
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

__attribute__((alias("__imp__sub_83C1A894"))) PPC_WEAK_FUNC(sub_83C1A894);
PPC_FUNC_IMPL(__imp__sub_83C1A894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A898"))) PPC_WEAK_FUNC(sub_83C1A898);
PPC_FUNC_IMPL(__imp__sub_83C1A898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17904
	ctx.r3.s64 = ctx.r11.s64 + -17904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A8A4"))) PPC_WEAK_FUNC(sub_83C1A8A4);
PPC_FUNC_IMPL(__imp__sub_83C1A8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A8A8"))) PPC_WEAK_FUNC(sub_83C1A8A8);
PPC_FUNC_IMPL(__imp__sub_83C1A8A8) {
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
	// addi r3,r11,-21024
	ctx.r3.s64 = ctx.r11.s64 + -21024;
	// bl 0x8259af80
	ctx.lr = 0x83C1A8C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-17888
	ctx.r3.s64 = ctx.r10.s64 + -17888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1A8CC;
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

__attribute__((alias("__imp__sub_83C1A8DC"))) PPC_WEAK_FUNC(sub_83C1A8DC);
PPC_FUNC_IMPL(__imp__sub_83C1A8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A8E0"))) PPC_WEAK_FUNC(sub_83C1A8E0);
PPC_FUNC_IMPL(__imp__sub_83C1A8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21044
	ctx.r11.s64 = ctx.r8.s64 + -21044;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-304(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -304);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17896
	ctx.r3.s64 = ctx.r6.s64 + -17896;
	// stw r10,-21044(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21044, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A910"))) PPC_WEAK_FUNC(sub_83C1A910);
PPC_FUNC_IMPL(__imp__sub_83C1A910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17880
	ctx.r3.s64 = ctx.r11.s64 + -17880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A91C"))) PPC_WEAK_FUNC(sub_83C1A91C);
PPC_FUNC_IMPL(__imp__sub_83C1A91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A920"))) PPC_WEAK_FUNC(sub_83C1A920);
PPC_FUNC_IMPL(__imp__sub_83C1A920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17872
	ctx.r3.s64 = ctx.r11.s64 + -17872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A92C"))) PPC_WEAK_FUNC(sub_83C1A92C);
PPC_FUNC_IMPL(__imp__sub_83C1A92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A930"))) PPC_WEAK_FUNC(sub_83C1A930);
PPC_FUNC_IMPL(__imp__sub_83C1A930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17864
	ctx.r3.s64 = ctx.r11.s64 + -17864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A93C"))) PPC_WEAK_FUNC(sub_83C1A93C);
PPC_FUNC_IMPL(__imp__sub_83C1A93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A940"))) PPC_WEAK_FUNC(sub_83C1A940);
PPC_FUNC_IMPL(__imp__sub_83C1A940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17856
	ctx.r3.s64 = ctx.r11.s64 + -17856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A94C"))) PPC_WEAK_FUNC(sub_83C1A94C);
PPC_FUNC_IMPL(__imp__sub_83C1A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A950"))) PPC_WEAK_FUNC(sub_83C1A950);
PPC_FUNC_IMPL(__imp__sub_83C1A950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17848
	ctx.r3.s64 = ctx.r11.s64 + -17848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A95C"))) PPC_WEAK_FUNC(sub_83C1A95C);
PPC_FUNC_IMPL(__imp__sub_83C1A95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A960"))) PPC_WEAK_FUNC(sub_83C1A960);
PPC_FUNC_IMPL(__imp__sub_83C1A960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17840
	ctx.r3.s64 = ctx.r11.s64 + -17840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A96C"))) PPC_WEAK_FUNC(sub_83C1A96C);
PPC_FUNC_IMPL(__imp__sub_83C1A96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A970"))) PPC_WEAK_FUNC(sub_83C1A970);
PPC_FUNC_IMPL(__imp__sub_83C1A970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17832
	ctx.r3.s64 = ctx.r11.s64 + -17832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A97C"))) PPC_WEAK_FUNC(sub_83C1A97C);
PPC_FUNC_IMPL(__imp__sub_83C1A97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A980"))) PPC_WEAK_FUNC(sub_83C1A980);
PPC_FUNC_IMPL(__imp__sub_83C1A980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17824
	ctx.r3.s64 = ctx.r11.s64 + -17824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A98C"))) PPC_WEAK_FUNC(sub_83C1A98C);
PPC_FUNC_IMPL(__imp__sub_83C1A98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A990"))) PPC_WEAK_FUNC(sub_83C1A990);
PPC_FUNC_IMPL(__imp__sub_83C1A990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17816
	ctx.r3.s64 = ctx.r11.s64 + -17816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A99C"))) PPC_WEAK_FUNC(sub_83C1A99C);
PPC_FUNC_IMPL(__imp__sub_83C1A99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A9A0"))) PPC_WEAK_FUNC(sub_83C1A9A0);
PPC_FUNC_IMPL(__imp__sub_83C1A9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17808
	ctx.r3.s64 = ctx.r11.s64 + -17808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A9AC"))) PPC_WEAK_FUNC(sub_83C1A9AC);
PPC_FUNC_IMPL(__imp__sub_83C1A9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A9B0"))) PPC_WEAK_FUNC(sub_83C1A9B0);
PPC_FUNC_IMPL(__imp__sub_83C1A9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17800
	ctx.r3.s64 = ctx.r11.s64 + -17800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A9BC"))) PPC_WEAK_FUNC(sub_83C1A9BC);
PPC_FUNC_IMPL(__imp__sub_83C1A9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A9C0"))) PPC_WEAK_FUNC(sub_83C1A9C0);
PPC_FUNC_IMPL(__imp__sub_83C1A9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17792
	ctx.r3.s64 = ctx.r11.s64 + -17792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A9CC"))) PPC_WEAK_FUNC(sub_83C1A9CC);
PPC_FUNC_IMPL(__imp__sub_83C1A9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A9D0"))) PPC_WEAK_FUNC(sub_83C1A9D0);
PPC_FUNC_IMPL(__imp__sub_83C1A9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17784
	ctx.r3.s64 = ctx.r11.s64 + -17784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A9DC"))) PPC_WEAK_FUNC(sub_83C1A9DC);
PPC_FUNC_IMPL(__imp__sub_83C1A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A9E0"))) PPC_WEAK_FUNC(sub_83C1A9E0);
PPC_FUNC_IMPL(__imp__sub_83C1A9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17776
	ctx.r3.s64 = ctx.r11.s64 + -17776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A9EC"))) PPC_WEAK_FUNC(sub_83C1A9EC);
PPC_FUNC_IMPL(__imp__sub_83C1A9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1A9F0"))) PPC_WEAK_FUNC(sub_83C1A9F0);
PPC_FUNC_IMPL(__imp__sub_83C1A9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17768
	ctx.r3.s64 = ctx.r11.s64 + -17768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1A9FC"))) PPC_WEAK_FUNC(sub_83C1A9FC);
PPC_FUNC_IMPL(__imp__sub_83C1A9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AA00"))) PPC_WEAK_FUNC(sub_83C1AA00);
PPC_FUNC_IMPL(__imp__sub_83C1AA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17760
	ctx.r3.s64 = ctx.r11.s64 + -17760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AA0C"))) PPC_WEAK_FUNC(sub_83C1AA0C);
PPC_FUNC_IMPL(__imp__sub_83C1AA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AA10"))) PPC_WEAK_FUNC(sub_83C1AA10);
PPC_FUNC_IMPL(__imp__sub_83C1AA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17752
	ctx.r3.s64 = ctx.r11.s64 + -17752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AA1C"))) PPC_WEAK_FUNC(sub_83C1AA1C);
PPC_FUNC_IMPL(__imp__sub_83C1AA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AA20"))) PPC_WEAK_FUNC(sub_83C1AA20);
PPC_FUNC_IMPL(__imp__sub_83C1AA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17744
	ctx.r3.s64 = ctx.r11.s64 + -17744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AA2C"))) PPC_WEAK_FUNC(sub_83C1AA2C);
PPC_FUNC_IMPL(__imp__sub_83C1AA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AA30"))) PPC_WEAK_FUNC(sub_83C1AA30);
PPC_FUNC_IMPL(__imp__sub_83C1AA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17736
	ctx.r3.s64 = ctx.r11.s64 + -17736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AA3C"))) PPC_WEAK_FUNC(sub_83C1AA3C);
PPC_FUNC_IMPL(__imp__sub_83C1AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AA40"))) PPC_WEAK_FUNC(sub_83C1AA40);
PPC_FUNC_IMPL(__imp__sub_83C1AA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17728
	ctx.r3.s64 = ctx.r11.s64 + -17728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AA4C"))) PPC_WEAK_FUNC(sub_83C1AA4C);
PPC_FUNC_IMPL(__imp__sub_83C1AA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AA50"))) PPC_WEAK_FUNC(sub_83C1AA50);
PPC_FUNC_IMPL(__imp__sub_83C1AA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17720
	ctx.r3.s64 = ctx.r11.s64 + -17720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AA5C"))) PPC_WEAK_FUNC(sub_83C1AA5C);
PPC_FUNC_IMPL(__imp__sub_83C1AA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AA60"))) PPC_WEAK_FUNC(sub_83C1AA60);
PPC_FUNC_IMPL(__imp__sub_83C1AA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17712
	ctx.r3.s64 = ctx.r11.s64 + -17712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AA6C"))) PPC_WEAK_FUNC(sub_83C1AA6C);
PPC_FUNC_IMPL(__imp__sub_83C1AA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AA70"))) PPC_WEAK_FUNC(sub_83C1AA70);
PPC_FUNC_IMPL(__imp__sub_83C1AA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17704
	ctx.r3.s64 = ctx.r11.s64 + -17704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AA7C"))) PPC_WEAK_FUNC(sub_83C1AA7C);
PPC_FUNC_IMPL(__imp__sub_83C1AA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AA80"))) PPC_WEAK_FUNC(sub_83C1AA80);
PPC_FUNC_IMPL(__imp__sub_83C1AA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17696
	ctx.r3.s64 = ctx.r11.s64 + -17696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AA8C"))) PPC_WEAK_FUNC(sub_83C1AA8C);
PPC_FUNC_IMPL(__imp__sub_83C1AA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AA90"))) PPC_WEAK_FUNC(sub_83C1AA90);
PPC_FUNC_IMPL(__imp__sub_83C1AA90) {
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
	// addi r3,r11,-20672
	ctx.r3.s64 = ctx.r11.s64 + -20672;
	// bl 0x83523120
	ctx.lr = 0x83C1AAA8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-17688
	ctx.r3.s64 = ctx.r10.s64 + -17688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1AAB4;
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

__attribute__((alias("__imp__sub_83C1AAC4"))) PPC_WEAK_FUNC(sub_83C1AAC4);
PPC_FUNC_IMPL(__imp__sub_83C1AAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AAC8"))) PPC_WEAK_FUNC(sub_83C1AAC8);
PPC_FUNC_IMPL(__imp__sub_83C1AAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20656
	ctx.r7.s64 = ctx.r8.s64 + -20656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20656);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20656(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20656, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1AAF0"))) PPC_WEAK_FUNC(sub_83C1AAF0);
PPC_FUNC_IMPL(__imp__sub_83C1AAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-44
	ctx.r6.s64 = ctx.r7.s64 + -44;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-116(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -116);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20656(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20656);
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
	// std r9,-44(r7)
	PPC_STORE_U64(ctx.r7.u32 + -44, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1AB38"))) PPC_WEAK_FUNC(sub_83C1AB38);
PPC_FUNC_IMPL(__imp__sub_83C1AB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17672
	ctx.r3.s64 = ctx.r11.s64 + -17672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AB44"))) PPC_WEAK_FUNC(sub_83C1AB44);
PPC_FUNC_IMPL(__imp__sub_83C1AB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AB48"))) PPC_WEAK_FUNC(sub_83C1AB48);
PPC_FUNC_IMPL(__imp__sub_83C1AB48) {
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
	// addi r3,r11,-20648
	ctx.r3.s64 = ctx.r11.s64 + -20648;
	// bl 0x8259af80
	ctx.lr = 0x83C1AB60;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-17656
	ctx.r3.s64 = ctx.r10.s64 + -17656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1AB6C;
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

__attribute__((alias("__imp__sub_83C1AB7C"))) PPC_WEAK_FUNC(sub_83C1AB7C);
PPC_FUNC_IMPL(__imp__sub_83C1AB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AB80"))) PPC_WEAK_FUNC(sub_83C1AB80);
PPC_FUNC_IMPL(__imp__sub_83C1AB80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20668
	ctx.r11.s64 = ctx.r8.s64 + -20668;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -68);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17664
	ctx.r3.s64 = ctx.r6.s64 + -17664;
	// stw r10,-20668(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20668, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ABB0"))) PPC_WEAK_FUNC(sub_83C1ABB0);
PPC_FUNC_IMPL(__imp__sub_83C1ABB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17648
	ctx.r3.s64 = ctx.r11.s64 + -17648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ABBC"))) PPC_WEAK_FUNC(sub_83C1ABBC);
PPC_FUNC_IMPL(__imp__sub_83C1ABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ABC0"))) PPC_WEAK_FUNC(sub_83C1ABC0);
PPC_FUNC_IMPL(__imp__sub_83C1ABC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17640
	ctx.r3.s64 = ctx.r11.s64 + -17640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ABCC"))) PPC_WEAK_FUNC(sub_83C1ABCC);
PPC_FUNC_IMPL(__imp__sub_83C1ABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ABD0"))) PPC_WEAK_FUNC(sub_83C1ABD0);
PPC_FUNC_IMPL(__imp__sub_83C1ABD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17632
	ctx.r3.s64 = ctx.r11.s64 + -17632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ABDC"))) PPC_WEAK_FUNC(sub_83C1ABDC);
PPC_FUNC_IMPL(__imp__sub_83C1ABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ABE0"))) PPC_WEAK_FUNC(sub_83C1ABE0);
PPC_FUNC_IMPL(__imp__sub_83C1ABE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17624
	ctx.r3.s64 = ctx.r11.s64 + -17624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ABEC"))) PPC_WEAK_FUNC(sub_83C1ABEC);
PPC_FUNC_IMPL(__imp__sub_83C1ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1ABF0"))) PPC_WEAK_FUNC(sub_83C1ABF0);
PPC_FUNC_IMPL(__imp__sub_83C1ABF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17616
	ctx.r3.s64 = ctx.r11.s64 + -17616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1ABFC"))) PPC_WEAK_FUNC(sub_83C1ABFC);
PPC_FUNC_IMPL(__imp__sub_83C1ABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AC00"))) PPC_WEAK_FUNC(sub_83C1AC00);
PPC_FUNC_IMPL(__imp__sub_83C1AC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17608
	ctx.r3.s64 = ctx.r11.s64 + -17608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AC0C"))) PPC_WEAK_FUNC(sub_83C1AC0C);
PPC_FUNC_IMPL(__imp__sub_83C1AC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AC10"))) PPC_WEAK_FUNC(sub_83C1AC10);
PPC_FUNC_IMPL(__imp__sub_83C1AC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17600
	ctx.r3.s64 = ctx.r11.s64 + -17600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AC1C"))) PPC_WEAK_FUNC(sub_83C1AC1C);
PPC_FUNC_IMPL(__imp__sub_83C1AC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AC20"))) PPC_WEAK_FUNC(sub_83C1AC20);
PPC_FUNC_IMPL(__imp__sub_83C1AC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17592
	ctx.r3.s64 = ctx.r11.s64 + -17592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AC2C"))) PPC_WEAK_FUNC(sub_83C1AC2C);
PPC_FUNC_IMPL(__imp__sub_83C1AC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1AC30"))) PPC_WEAK_FUNC(sub_83C1AC30);
PPC_FUNC_IMPL(__imp__sub_83C1AC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-17584
	ctx.r3.s64 = ctx.r11.s64 + -17584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1AC3C"))) PPC_WEAK_FUNC(sub_83C1AC3C);
PPC_FUNC_IMPL(__imp__sub_83C1AC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

