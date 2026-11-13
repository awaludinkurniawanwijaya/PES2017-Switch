#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C6CD30"))) PPC_WEAK_FUNC(sub_83C6CD30);
PPC_FUNC_IMPL(__imp__sub_83C6CD30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-23148
	ctx.r6.s64 = ctx.r7.s64 + -23148;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23220(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23220);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24672);
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
	// std r9,-23148(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23148, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6CD78"))) PPC_WEAK_FUNC(sub_83C6CD78);
PPC_FUNC_IMPL(__imp__sub_83C6CD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26456
	ctx.r3.s64 = ctx.r11.s64 + 26456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CD84"))) PPC_WEAK_FUNC(sub_83C6CD84);
PPC_FUNC_IMPL(__imp__sub_83C6CD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CD88"))) PPC_WEAK_FUNC(sub_83C6CD88);
PPC_FUNC_IMPL(__imp__sub_83C6CD88) {
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
	// addi r3,r11,-24664
	ctx.r3.s64 = ctx.r11.s64 + -24664;
	// bl 0x8259af80
	ctx.lr = 0x83C6CDA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,26472
	ctx.r3.s64 = ctx.r10.s64 + 26472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6CDAC;
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

__attribute__((alias("__imp__sub_83C6CDBC"))) PPC_WEAK_FUNC(sub_83C6CDBC);
PPC_FUNC_IMPL(__imp__sub_83C6CDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CDC0"))) PPC_WEAK_FUNC(sub_83C6CDC0);
PPC_FUNC_IMPL(__imp__sub_83C6CDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24684
	ctx.r11.s64 = ctx.r8.s64 + -24684;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-23172(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23172);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26464
	ctx.r3.s64 = ctx.r6.s64 + 26464;
	// stw r10,-24684(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24684, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CDF0"))) PPC_WEAK_FUNC(sub_83C6CDF0);
PPC_FUNC_IMPL(__imp__sub_83C6CDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26480
	ctx.r3.s64 = ctx.r11.s64 + 26480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CDFC"))) PPC_WEAK_FUNC(sub_83C6CDFC);
PPC_FUNC_IMPL(__imp__sub_83C6CDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CE00"))) PPC_WEAK_FUNC(sub_83C6CE00);
PPC_FUNC_IMPL(__imp__sub_83C6CE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26488
	ctx.r3.s64 = ctx.r11.s64 + 26488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CE0C"))) PPC_WEAK_FUNC(sub_83C6CE0C);
PPC_FUNC_IMPL(__imp__sub_83C6CE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CE10"))) PPC_WEAK_FUNC(sub_83C6CE10);
PPC_FUNC_IMPL(__imp__sub_83C6CE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26496
	ctx.r3.s64 = ctx.r11.s64 + 26496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CE1C"))) PPC_WEAK_FUNC(sub_83C6CE1C);
PPC_FUNC_IMPL(__imp__sub_83C6CE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CE20"))) PPC_WEAK_FUNC(sub_83C6CE20);
PPC_FUNC_IMPL(__imp__sub_83C6CE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26504
	ctx.r3.s64 = ctx.r11.s64 + 26504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CE2C"))) PPC_WEAK_FUNC(sub_83C6CE2C);
PPC_FUNC_IMPL(__imp__sub_83C6CE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CE30"))) PPC_WEAK_FUNC(sub_83C6CE30);
PPC_FUNC_IMPL(__imp__sub_83C6CE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26512
	ctx.r3.s64 = ctx.r11.s64 + 26512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CE3C"))) PPC_WEAK_FUNC(sub_83C6CE3C);
PPC_FUNC_IMPL(__imp__sub_83C6CE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CE40"))) PPC_WEAK_FUNC(sub_83C6CE40);
PPC_FUNC_IMPL(__imp__sub_83C6CE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26520
	ctx.r3.s64 = ctx.r11.s64 + 26520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CE4C"))) PPC_WEAK_FUNC(sub_83C6CE4C);
PPC_FUNC_IMPL(__imp__sub_83C6CE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CE50"))) PPC_WEAK_FUNC(sub_83C6CE50);
PPC_FUNC_IMPL(__imp__sub_83C6CE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26528
	ctx.r3.s64 = ctx.r11.s64 + 26528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CE5C"))) PPC_WEAK_FUNC(sub_83C6CE5C);
PPC_FUNC_IMPL(__imp__sub_83C6CE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CE60"))) PPC_WEAK_FUNC(sub_83C6CE60);
PPC_FUNC_IMPL(__imp__sub_83C6CE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26536
	ctx.r3.s64 = ctx.r11.s64 + 26536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CE6C"))) PPC_WEAK_FUNC(sub_83C6CE6C);
PPC_FUNC_IMPL(__imp__sub_83C6CE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CE70"))) PPC_WEAK_FUNC(sub_83C6CE70);
PPC_FUNC_IMPL(__imp__sub_83C6CE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26544
	ctx.r3.s64 = ctx.r11.s64 + 26544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CE7C"))) PPC_WEAK_FUNC(sub_83C6CE7C);
PPC_FUNC_IMPL(__imp__sub_83C6CE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CE80"))) PPC_WEAK_FUNC(sub_83C6CE80);
PPC_FUNC_IMPL(__imp__sub_83C6CE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26552
	ctx.r3.s64 = ctx.r11.s64 + 26552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CE8C"))) PPC_WEAK_FUNC(sub_83C6CE8C);
PPC_FUNC_IMPL(__imp__sub_83C6CE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CE90"))) PPC_WEAK_FUNC(sub_83C6CE90);
PPC_FUNC_IMPL(__imp__sub_83C6CE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26560
	ctx.r3.s64 = ctx.r11.s64 + 26560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CE9C"))) PPC_WEAK_FUNC(sub_83C6CE9C);
PPC_FUNC_IMPL(__imp__sub_83C6CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CEA0"))) PPC_WEAK_FUNC(sub_83C6CEA0);
PPC_FUNC_IMPL(__imp__sub_83C6CEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26568
	ctx.r3.s64 = ctx.r11.s64 + 26568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CEAC"))) PPC_WEAK_FUNC(sub_83C6CEAC);
PPC_FUNC_IMPL(__imp__sub_83C6CEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CEB0"))) PPC_WEAK_FUNC(sub_83C6CEB0);
PPC_FUNC_IMPL(__imp__sub_83C6CEB0) {
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
	// addi r3,r11,-24320
	ctx.r3.s64 = ctx.r11.s64 + -24320;
	// bl 0x83523120
	ctx.lr = 0x83C6CEC8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,26576
	ctx.r3.s64 = ctx.r10.s64 + 26576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6CED4;
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

__attribute__((alias("__imp__sub_83C6CEE4"))) PPC_WEAK_FUNC(sub_83C6CEE4);
PPC_FUNC_IMPL(__imp__sub_83C6CEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CEE8"))) PPC_WEAK_FUNC(sub_83C6CEE8);
PPC_FUNC_IMPL(__imp__sub_83C6CEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24304
	ctx.r7.s64 = ctx.r8.s64 + -24304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24304);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24304(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24304, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6CF10"))) PPC_WEAK_FUNC(sub_83C6CF10);
PPC_FUNC_IMPL(__imp__sub_83C6CF10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-23020
	ctx.r6.s64 = ctx.r7.s64 + -23020;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23092(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23092);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24304);
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
	// std r9,-23020(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23020, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6CF58"))) PPC_WEAK_FUNC(sub_83C6CF58);
PPC_FUNC_IMPL(__imp__sub_83C6CF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26592
	ctx.r3.s64 = ctx.r11.s64 + 26592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CF64"))) PPC_WEAK_FUNC(sub_83C6CF64);
PPC_FUNC_IMPL(__imp__sub_83C6CF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CF68"))) PPC_WEAK_FUNC(sub_83C6CF68);
PPC_FUNC_IMPL(__imp__sub_83C6CF68) {
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
	// addi r3,r11,-24296
	ctx.r3.s64 = ctx.r11.s64 + -24296;
	// bl 0x8259af80
	ctx.lr = 0x83C6CF80;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,26608
	ctx.r3.s64 = ctx.r10.s64 + 26608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6CF8C;
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

__attribute__((alias("__imp__sub_83C6CF9C"))) PPC_WEAK_FUNC(sub_83C6CF9C);
PPC_FUNC_IMPL(__imp__sub_83C6CF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CFA0"))) PPC_WEAK_FUNC(sub_83C6CFA0);
PPC_FUNC_IMPL(__imp__sub_83C6CFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24316
	ctx.r11.s64 = ctx.r8.s64 + -24316;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-23044(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23044);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26600
	ctx.r3.s64 = ctx.r6.s64 + 26600;
	// stw r10,-24316(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24316, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CFD0"))) PPC_WEAK_FUNC(sub_83C6CFD0);
PPC_FUNC_IMPL(__imp__sub_83C6CFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26616
	ctx.r3.s64 = ctx.r11.s64 + 26616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CFDC"))) PPC_WEAK_FUNC(sub_83C6CFDC);
PPC_FUNC_IMPL(__imp__sub_83C6CFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CFE0"))) PPC_WEAK_FUNC(sub_83C6CFE0);
PPC_FUNC_IMPL(__imp__sub_83C6CFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26624
	ctx.r3.s64 = ctx.r11.s64 + 26624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CFEC"))) PPC_WEAK_FUNC(sub_83C6CFEC);
PPC_FUNC_IMPL(__imp__sub_83C6CFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6CFF0"))) PPC_WEAK_FUNC(sub_83C6CFF0);
PPC_FUNC_IMPL(__imp__sub_83C6CFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26632
	ctx.r3.s64 = ctx.r11.s64 + 26632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6CFFC"))) PPC_WEAK_FUNC(sub_83C6CFFC);
PPC_FUNC_IMPL(__imp__sub_83C6CFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D000"))) PPC_WEAK_FUNC(sub_83C6D000);
PPC_FUNC_IMPL(__imp__sub_83C6D000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26640
	ctx.r3.s64 = ctx.r11.s64 + 26640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D00C"))) PPC_WEAK_FUNC(sub_83C6D00C);
PPC_FUNC_IMPL(__imp__sub_83C6D00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D010"))) PPC_WEAK_FUNC(sub_83C6D010);
PPC_FUNC_IMPL(__imp__sub_83C6D010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26648
	ctx.r3.s64 = ctx.r11.s64 + 26648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D01C"))) PPC_WEAK_FUNC(sub_83C6D01C);
PPC_FUNC_IMPL(__imp__sub_83C6D01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D020"))) PPC_WEAK_FUNC(sub_83C6D020);
PPC_FUNC_IMPL(__imp__sub_83C6D020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26656
	ctx.r3.s64 = ctx.r11.s64 + 26656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D02C"))) PPC_WEAK_FUNC(sub_83C6D02C);
PPC_FUNC_IMPL(__imp__sub_83C6D02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D030"))) PPC_WEAK_FUNC(sub_83C6D030);
PPC_FUNC_IMPL(__imp__sub_83C6D030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26664
	ctx.r3.s64 = ctx.r11.s64 + 26664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D03C"))) PPC_WEAK_FUNC(sub_83C6D03C);
PPC_FUNC_IMPL(__imp__sub_83C6D03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D040"))) PPC_WEAK_FUNC(sub_83C6D040);
PPC_FUNC_IMPL(__imp__sub_83C6D040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26672
	ctx.r3.s64 = ctx.r11.s64 + 26672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D04C"))) PPC_WEAK_FUNC(sub_83C6D04C);
PPC_FUNC_IMPL(__imp__sub_83C6D04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D050"))) PPC_WEAK_FUNC(sub_83C6D050);
PPC_FUNC_IMPL(__imp__sub_83C6D050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26680
	ctx.r3.s64 = ctx.r11.s64 + 26680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D05C"))) PPC_WEAK_FUNC(sub_83C6D05C);
PPC_FUNC_IMPL(__imp__sub_83C6D05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D060"))) PPC_WEAK_FUNC(sub_83C6D060);
PPC_FUNC_IMPL(__imp__sub_83C6D060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26688
	ctx.r3.s64 = ctx.r11.s64 + 26688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D06C"))) PPC_WEAK_FUNC(sub_83C6D06C);
PPC_FUNC_IMPL(__imp__sub_83C6D06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D070"))) PPC_WEAK_FUNC(sub_83C6D070);
PPC_FUNC_IMPL(__imp__sub_83C6D070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26696
	ctx.r3.s64 = ctx.r11.s64 + 26696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D07C"))) PPC_WEAK_FUNC(sub_83C6D07C);
PPC_FUNC_IMPL(__imp__sub_83C6D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D080"))) PPC_WEAK_FUNC(sub_83C6D080);
PPC_FUNC_IMPL(__imp__sub_83C6D080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26704
	ctx.r3.s64 = ctx.r11.s64 + 26704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D08C"))) PPC_WEAK_FUNC(sub_83C6D08C);
PPC_FUNC_IMPL(__imp__sub_83C6D08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D090"))) PPC_WEAK_FUNC(sub_83C6D090);
PPC_FUNC_IMPL(__imp__sub_83C6D090) {
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
	// addi r3,r11,-23952
	ctx.r3.s64 = ctx.r11.s64 + -23952;
	// bl 0x83523120
	ctx.lr = 0x83C6D0A8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,26712
	ctx.r3.s64 = ctx.r10.s64 + 26712;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6D0B4;
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

__attribute__((alias("__imp__sub_83C6D0C4"))) PPC_WEAK_FUNC(sub_83C6D0C4);
PPC_FUNC_IMPL(__imp__sub_83C6D0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D0C8"))) PPC_WEAK_FUNC(sub_83C6D0C8);
PPC_FUNC_IMPL(__imp__sub_83C6D0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23936
	ctx.r7.s64 = ctx.r8.s64 + -23936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23936(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6D0F0"))) PPC_WEAK_FUNC(sub_83C6D0F0);
PPC_FUNC_IMPL(__imp__sub_83C6D0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-22892
	ctx.r6.s64 = ctx.r7.s64 + -22892;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22964(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22964);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23936);
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
	// std r9,-22892(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22892, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6D138"))) PPC_WEAK_FUNC(sub_83C6D138);
PPC_FUNC_IMPL(__imp__sub_83C6D138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26728
	ctx.r3.s64 = ctx.r11.s64 + 26728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D144"))) PPC_WEAK_FUNC(sub_83C6D144);
PPC_FUNC_IMPL(__imp__sub_83C6D144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D148"))) PPC_WEAK_FUNC(sub_83C6D148);
PPC_FUNC_IMPL(__imp__sub_83C6D148) {
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
	// addi r3,r11,-23928
	ctx.r3.s64 = ctx.r11.s64 + -23928;
	// bl 0x8259af80
	ctx.lr = 0x83C6D160;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,26744
	ctx.r3.s64 = ctx.r10.s64 + 26744;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6D16C;
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

__attribute__((alias("__imp__sub_83C6D17C"))) PPC_WEAK_FUNC(sub_83C6D17C);
PPC_FUNC_IMPL(__imp__sub_83C6D17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D180"))) PPC_WEAK_FUNC(sub_83C6D180);
PPC_FUNC_IMPL(__imp__sub_83C6D180) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23948
	ctx.r11.s64 = ctx.r8.s64 + -23948;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-22916(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22916);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26736
	ctx.r3.s64 = ctx.r6.s64 + 26736;
	// stw r10,-23948(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23948, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D1B0"))) PPC_WEAK_FUNC(sub_83C6D1B0);
PPC_FUNC_IMPL(__imp__sub_83C6D1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D1BC"))) PPC_WEAK_FUNC(sub_83C6D1BC);
PPC_FUNC_IMPL(__imp__sub_83C6D1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D1C0"))) PPC_WEAK_FUNC(sub_83C6D1C0);
PPC_FUNC_IMPL(__imp__sub_83C6D1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26760
	ctx.r3.s64 = ctx.r11.s64 + 26760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D1CC"))) PPC_WEAK_FUNC(sub_83C6D1CC);
PPC_FUNC_IMPL(__imp__sub_83C6D1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D1D0"))) PPC_WEAK_FUNC(sub_83C6D1D0);
PPC_FUNC_IMPL(__imp__sub_83C6D1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26768
	ctx.r3.s64 = ctx.r11.s64 + 26768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D1DC"))) PPC_WEAK_FUNC(sub_83C6D1DC);
PPC_FUNC_IMPL(__imp__sub_83C6D1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D1E0"))) PPC_WEAK_FUNC(sub_83C6D1E0);
PPC_FUNC_IMPL(__imp__sub_83C6D1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26776
	ctx.r3.s64 = ctx.r11.s64 + 26776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D1EC"))) PPC_WEAK_FUNC(sub_83C6D1EC);
PPC_FUNC_IMPL(__imp__sub_83C6D1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D1F0"))) PPC_WEAK_FUNC(sub_83C6D1F0);
PPC_FUNC_IMPL(__imp__sub_83C6D1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26784
	ctx.r3.s64 = ctx.r11.s64 + 26784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D1FC"))) PPC_WEAK_FUNC(sub_83C6D1FC);
PPC_FUNC_IMPL(__imp__sub_83C6D1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D200"))) PPC_WEAK_FUNC(sub_83C6D200);
PPC_FUNC_IMPL(__imp__sub_83C6D200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26792
	ctx.r3.s64 = ctx.r11.s64 + 26792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D20C"))) PPC_WEAK_FUNC(sub_83C6D20C);
PPC_FUNC_IMPL(__imp__sub_83C6D20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D210"))) PPC_WEAK_FUNC(sub_83C6D210);
PPC_FUNC_IMPL(__imp__sub_83C6D210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26800
	ctx.r3.s64 = ctx.r11.s64 + 26800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D21C"))) PPC_WEAK_FUNC(sub_83C6D21C);
PPC_FUNC_IMPL(__imp__sub_83C6D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D220"))) PPC_WEAK_FUNC(sub_83C6D220);
PPC_FUNC_IMPL(__imp__sub_83C6D220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26808
	ctx.r3.s64 = ctx.r11.s64 + 26808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D22C"))) PPC_WEAK_FUNC(sub_83C6D22C);
PPC_FUNC_IMPL(__imp__sub_83C6D22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D230"))) PPC_WEAK_FUNC(sub_83C6D230);
PPC_FUNC_IMPL(__imp__sub_83C6D230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26816
	ctx.r3.s64 = ctx.r11.s64 + 26816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D23C"))) PPC_WEAK_FUNC(sub_83C6D23C);
PPC_FUNC_IMPL(__imp__sub_83C6D23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D240"))) PPC_WEAK_FUNC(sub_83C6D240);
PPC_FUNC_IMPL(__imp__sub_83C6D240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26824
	ctx.r3.s64 = ctx.r11.s64 + 26824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D24C"))) PPC_WEAK_FUNC(sub_83C6D24C);
PPC_FUNC_IMPL(__imp__sub_83C6D24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D250"))) PPC_WEAK_FUNC(sub_83C6D250);
PPC_FUNC_IMPL(__imp__sub_83C6D250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26832
	ctx.r3.s64 = ctx.r11.s64 + 26832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D25C"))) PPC_WEAK_FUNC(sub_83C6D25C);
PPC_FUNC_IMPL(__imp__sub_83C6D25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D260"))) PPC_WEAK_FUNC(sub_83C6D260);
PPC_FUNC_IMPL(__imp__sub_83C6D260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26840
	ctx.r3.s64 = ctx.r11.s64 + 26840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D26C"))) PPC_WEAK_FUNC(sub_83C6D26C);
PPC_FUNC_IMPL(__imp__sub_83C6D26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D270"))) PPC_WEAK_FUNC(sub_83C6D270);
PPC_FUNC_IMPL(__imp__sub_83C6D270) {
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
	// addi r3,r11,-23584
	ctx.r3.s64 = ctx.r11.s64 + -23584;
	// bl 0x83523120
	ctx.lr = 0x83C6D288;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,26848
	ctx.r3.s64 = ctx.r10.s64 + 26848;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6D294;
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

__attribute__((alias("__imp__sub_83C6D2A4"))) PPC_WEAK_FUNC(sub_83C6D2A4);
PPC_FUNC_IMPL(__imp__sub_83C6D2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D2A8"))) PPC_WEAK_FUNC(sub_83C6D2A8);
PPC_FUNC_IMPL(__imp__sub_83C6D2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23568
	ctx.r7.s64 = ctx.r8.s64 + -23568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23568(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6D2D0"))) PPC_WEAK_FUNC(sub_83C6D2D0);
PPC_FUNC_IMPL(__imp__sub_83C6D2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-22764
	ctx.r6.s64 = ctx.r7.s64 + -22764;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22836(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22836);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23568);
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
	// std r9,-22764(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22764, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6D318"))) PPC_WEAK_FUNC(sub_83C6D318);
PPC_FUNC_IMPL(__imp__sub_83C6D318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26864
	ctx.r3.s64 = ctx.r11.s64 + 26864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D324"))) PPC_WEAK_FUNC(sub_83C6D324);
PPC_FUNC_IMPL(__imp__sub_83C6D324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D328"))) PPC_WEAK_FUNC(sub_83C6D328);
PPC_FUNC_IMPL(__imp__sub_83C6D328) {
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
	// addi r3,r11,-23560
	ctx.r3.s64 = ctx.r11.s64 + -23560;
	// bl 0x8259af80
	ctx.lr = 0x83C6D340;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,26880
	ctx.r3.s64 = ctx.r10.s64 + 26880;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6D34C;
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

__attribute__((alias("__imp__sub_83C6D35C"))) PPC_WEAK_FUNC(sub_83C6D35C);
PPC_FUNC_IMPL(__imp__sub_83C6D35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D360"))) PPC_WEAK_FUNC(sub_83C6D360);
PPC_FUNC_IMPL(__imp__sub_83C6D360) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23580
	ctx.r11.s64 = ctx.r8.s64 + -23580;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-22788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22788);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26872
	ctx.r3.s64 = ctx.r6.s64 + 26872;
	// stw r10,-23580(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23580, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D390"))) PPC_WEAK_FUNC(sub_83C6D390);
PPC_FUNC_IMPL(__imp__sub_83C6D390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26888
	ctx.r3.s64 = ctx.r11.s64 + 26888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D39C"))) PPC_WEAK_FUNC(sub_83C6D39C);
PPC_FUNC_IMPL(__imp__sub_83C6D39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D3A0"))) PPC_WEAK_FUNC(sub_83C6D3A0);
PPC_FUNC_IMPL(__imp__sub_83C6D3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26896
	ctx.r3.s64 = ctx.r11.s64 + 26896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D3AC"))) PPC_WEAK_FUNC(sub_83C6D3AC);
PPC_FUNC_IMPL(__imp__sub_83C6D3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D3B0"))) PPC_WEAK_FUNC(sub_83C6D3B0);
PPC_FUNC_IMPL(__imp__sub_83C6D3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26904
	ctx.r3.s64 = ctx.r11.s64 + 26904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D3BC"))) PPC_WEAK_FUNC(sub_83C6D3BC);
PPC_FUNC_IMPL(__imp__sub_83C6D3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D3C0"))) PPC_WEAK_FUNC(sub_83C6D3C0);
PPC_FUNC_IMPL(__imp__sub_83C6D3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26912
	ctx.r3.s64 = ctx.r11.s64 + 26912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D3CC"))) PPC_WEAK_FUNC(sub_83C6D3CC);
PPC_FUNC_IMPL(__imp__sub_83C6D3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D3D0"))) PPC_WEAK_FUNC(sub_83C6D3D0);
PPC_FUNC_IMPL(__imp__sub_83C6D3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26920
	ctx.r3.s64 = ctx.r11.s64 + 26920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D3DC"))) PPC_WEAK_FUNC(sub_83C6D3DC);
PPC_FUNC_IMPL(__imp__sub_83C6D3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D3E0"))) PPC_WEAK_FUNC(sub_83C6D3E0);
PPC_FUNC_IMPL(__imp__sub_83C6D3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26928
	ctx.r3.s64 = ctx.r11.s64 + 26928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D3EC"))) PPC_WEAK_FUNC(sub_83C6D3EC);
PPC_FUNC_IMPL(__imp__sub_83C6D3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D3F0"))) PPC_WEAK_FUNC(sub_83C6D3F0);
PPC_FUNC_IMPL(__imp__sub_83C6D3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26936
	ctx.r3.s64 = ctx.r11.s64 + 26936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D3FC"))) PPC_WEAK_FUNC(sub_83C6D3FC);
PPC_FUNC_IMPL(__imp__sub_83C6D3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D400"))) PPC_WEAK_FUNC(sub_83C6D400);
PPC_FUNC_IMPL(__imp__sub_83C6D400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26944
	ctx.r3.s64 = ctx.r11.s64 + 26944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D40C"))) PPC_WEAK_FUNC(sub_83C6D40C);
PPC_FUNC_IMPL(__imp__sub_83C6D40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D410"))) PPC_WEAK_FUNC(sub_83C6D410);
PPC_FUNC_IMPL(__imp__sub_83C6D410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26952
	ctx.r3.s64 = ctx.r11.s64 + 26952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D41C"))) PPC_WEAK_FUNC(sub_83C6D41C);
PPC_FUNC_IMPL(__imp__sub_83C6D41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D420"))) PPC_WEAK_FUNC(sub_83C6D420);
PPC_FUNC_IMPL(__imp__sub_83C6D420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26960
	ctx.r3.s64 = ctx.r11.s64 + 26960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D42C"))) PPC_WEAK_FUNC(sub_83C6D42C);
PPC_FUNC_IMPL(__imp__sub_83C6D42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D430"))) PPC_WEAK_FUNC(sub_83C6D430);
PPC_FUNC_IMPL(__imp__sub_83C6D430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26968
	ctx.r3.s64 = ctx.r11.s64 + 26968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D43C"))) PPC_WEAK_FUNC(sub_83C6D43C);
PPC_FUNC_IMPL(__imp__sub_83C6D43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D440"))) PPC_WEAK_FUNC(sub_83C6D440);
PPC_FUNC_IMPL(__imp__sub_83C6D440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,26976
	ctx.r3.s64 = ctx.r11.s64 + 26976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D44C"))) PPC_WEAK_FUNC(sub_83C6D44C);
PPC_FUNC_IMPL(__imp__sub_83C6D44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D450"))) PPC_WEAK_FUNC(sub_83C6D450);
PPC_FUNC_IMPL(__imp__sub_83C6D450) {
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
	// addi r3,r11,-23216
	ctx.r3.s64 = ctx.r11.s64 + -23216;
	// bl 0x83523120
	ctx.lr = 0x83C6D468;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,26984
	ctx.r3.s64 = ctx.r10.s64 + 26984;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6D474;
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

__attribute__((alias("__imp__sub_83C6D484"))) PPC_WEAK_FUNC(sub_83C6D484);
PPC_FUNC_IMPL(__imp__sub_83C6D484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D488"))) PPC_WEAK_FUNC(sub_83C6D488);
PPC_FUNC_IMPL(__imp__sub_83C6D488) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23200
	ctx.r7.s64 = ctx.r8.s64 + -23200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23200(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6D4B0"))) PPC_WEAK_FUNC(sub_83C6D4B0);
PPC_FUNC_IMPL(__imp__sub_83C6D4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-22636
	ctx.r6.s64 = ctx.r7.s64 + -22636;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22708(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22708);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23200);
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
	// std r9,-22636(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22636, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6D4F8"))) PPC_WEAK_FUNC(sub_83C6D4F8);
PPC_FUNC_IMPL(__imp__sub_83C6D4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27000
	ctx.r3.s64 = ctx.r11.s64 + 27000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D504"))) PPC_WEAK_FUNC(sub_83C6D504);
PPC_FUNC_IMPL(__imp__sub_83C6D504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D508"))) PPC_WEAK_FUNC(sub_83C6D508);
PPC_FUNC_IMPL(__imp__sub_83C6D508) {
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
	// addi r3,r11,-23192
	ctx.r3.s64 = ctx.r11.s64 + -23192;
	// bl 0x8259af80
	ctx.lr = 0x83C6D520;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27016
	ctx.r3.s64 = ctx.r10.s64 + 27016;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6D52C;
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

__attribute__((alias("__imp__sub_83C6D53C"))) PPC_WEAK_FUNC(sub_83C6D53C);
PPC_FUNC_IMPL(__imp__sub_83C6D53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D540"))) PPC_WEAK_FUNC(sub_83C6D540);
PPC_FUNC_IMPL(__imp__sub_83C6D540) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23212
	ctx.r11.s64 = ctx.r8.s64 + -23212;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-22660(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22660);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27008
	ctx.r3.s64 = ctx.r6.s64 + 27008;
	// stw r10,-23212(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23212, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D570"))) PPC_WEAK_FUNC(sub_83C6D570);
PPC_FUNC_IMPL(__imp__sub_83C6D570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27024
	ctx.r3.s64 = ctx.r11.s64 + 27024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D57C"))) PPC_WEAK_FUNC(sub_83C6D57C);
PPC_FUNC_IMPL(__imp__sub_83C6D57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D580"))) PPC_WEAK_FUNC(sub_83C6D580);
PPC_FUNC_IMPL(__imp__sub_83C6D580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27032
	ctx.r3.s64 = ctx.r11.s64 + 27032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D58C"))) PPC_WEAK_FUNC(sub_83C6D58C);
PPC_FUNC_IMPL(__imp__sub_83C6D58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D590"))) PPC_WEAK_FUNC(sub_83C6D590);
PPC_FUNC_IMPL(__imp__sub_83C6D590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27040
	ctx.r3.s64 = ctx.r11.s64 + 27040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D59C"))) PPC_WEAK_FUNC(sub_83C6D59C);
PPC_FUNC_IMPL(__imp__sub_83C6D59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D5A0"))) PPC_WEAK_FUNC(sub_83C6D5A0);
PPC_FUNC_IMPL(__imp__sub_83C6D5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27048
	ctx.r3.s64 = ctx.r11.s64 + 27048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D5AC"))) PPC_WEAK_FUNC(sub_83C6D5AC);
PPC_FUNC_IMPL(__imp__sub_83C6D5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D5B0"))) PPC_WEAK_FUNC(sub_83C6D5B0);
PPC_FUNC_IMPL(__imp__sub_83C6D5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27056
	ctx.r3.s64 = ctx.r11.s64 + 27056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D5BC"))) PPC_WEAK_FUNC(sub_83C6D5BC);
PPC_FUNC_IMPL(__imp__sub_83C6D5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D5C0"))) PPC_WEAK_FUNC(sub_83C6D5C0);
PPC_FUNC_IMPL(__imp__sub_83C6D5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27064
	ctx.r3.s64 = ctx.r11.s64 + 27064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D5CC"))) PPC_WEAK_FUNC(sub_83C6D5CC);
PPC_FUNC_IMPL(__imp__sub_83C6D5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D5D0"))) PPC_WEAK_FUNC(sub_83C6D5D0);
PPC_FUNC_IMPL(__imp__sub_83C6D5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27072
	ctx.r3.s64 = ctx.r11.s64 + 27072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D5DC"))) PPC_WEAK_FUNC(sub_83C6D5DC);
PPC_FUNC_IMPL(__imp__sub_83C6D5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D5E0"))) PPC_WEAK_FUNC(sub_83C6D5E0);
PPC_FUNC_IMPL(__imp__sub_83C6D5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27080
	ctx.r3.s64 = ctx.r11.s64 + 27080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D5EC"))) PPC_WEAK_FUNC(sub_83C6D5EC);
PPC_FUNC_IMPL(__imp__sub_83C6D5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D5F0"))) PPC_WEAK_FUNC(sub_83C6D5F0);
PPC_FUNC_IMPL(__imp__sub_83C6D5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27088
	ctx.r3.s64 = ctx.r11.s64 + 27088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D5FC"))) PPC_WEAK_FUNC(sub_83C6D5FC);
PPC_FUNC_IMPL(__imp__sub_83C6D5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D600"))) PPC_WEAK_FUNC(sub_83C6D600);
PPC_FUNC_IMPL(__imp__sub_83C6D600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27096
	ctx.r3.s64 = ctx.r11.s64 + 27096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D60C"))) PPC_WEAK_FUNC(sub_83C6D60C);
PPC_FUNC_IMPL(__imp__sub_83C6D60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D610"))) PPC_WEAK_FUNC(sub_83C6D610);
PPC_FUNC_IMPL(__imp__sub_83C6D610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27104
	ctx.r3.s64 = ctx.r11.s64 + 27104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D61C"))) PPC_WEAK_FUNC(sub_83C6D61C);
PPC_FUNC_IMPL(__imp__sub_83C6D61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D620"))) PPC_WEAK_FUNC(sub_83C6D620);
PPC_FUNC_IMPL(__imp__sub_83C6D620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27112
	ctx.r3.s64 = ctx.r11.s64 + 27112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D62C"))) PPC_WEAK_FUNC(sub_83C6D62C);
PPC_FUNC_IMPL(__imp__sub_83C6D62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D630"))) PPC_WEAK_FUNC(sub_83C6D630);
PPC_FUNC_IMPL(__imp__sub_83C6D630) {
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
	// addi r3,r11,-22848
	ctx.r3.s64 = ctx.r11.s64 + -22848;
	// bl 0x83523120
	ctx.lr = 0x83C6D648;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27120
	ctx.r3.s64 = ctx.r10.s64 + 27120;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6D654;
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

__attribute__((alias("__imp__sub_83C6D664"))) PPC_WEAK_FUNC(sub_83C6D664);
PPC_FUNC_IMPL(__imp__sub_83C6D664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D668"))) PPC_WEAK_FUNC(sub_83C6D668);
PPC_FUNC_IMPL(__imp__sub_83C6D668) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22832
	ctx.r7.s64 = ctx.r8.s64 + -22832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22832(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6D690"))) PPC_WEAK_FUNC(sub_83C6D690);
PPC_FUNC_IMPL(__imp__sub_83C6D690) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-22508
	ctx.r6.s64 = ctx.r7.s64 + -22508;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22580(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22580);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22832);
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
	// std r9,-22508(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22508, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6D6D8"))) PPC_WEAK_FUNC(sub_83C6D6D8);
PPC_FUNC_IMPL(__imp__sub_83C6D6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27136
	ctx.r3.s64 = ctx.r11.s64 + 27136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D6E4"))) PPC_WEAK_FUNC(sub_83C6D6E4);
PPC_FUNC_IMPL(__imp__sub_83C6D6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D6E8"))) PPC_WEAK_FUNC(sub_83C6D6E8);
PPC_FUNC_IMPL(__imp__sub_83C6D6E8) {
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
	// addi r3,r11,-22824
	ctx.r3.s64 = ctx.r11.s64 + -22824;
	// bl 0x8259af80
	ctx.lr = 0x83C6D700;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27152
	ctx.r3.s64 = ctx.r10.s64 + 27152;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6D70C;
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

__attribute__((alias("__imp__sub_83C6D71C"))) PPC_WEAK_FUNC(sub_83C6D71C);
PPC_FUNC_IMPL(__imp__sub_83C6D71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D720"))) PPC_WEAK_FUNC(sub_83C6D720);
PPC_FUNC_IMPL(__imp__sub_83C6D720) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22844
	ctx.r11.s64 = ctx.r8.s64 + -22844;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-22532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22532);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27144
	ctx.r3.s64 = ctx.r6.s64 + 27144;
	// stw r10,-22844(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22844, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D750"))) PPC_WEAK_FUNC(sub_83C6D750);
PPC_FUNC_IMPL(__imp__sub_83C6D750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27160
	ctx.r3.s64 = ctx.r11.s64 + 27160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D75C"))) PPC_WEAK_FUNC(sub_83C6D75C);
PPC_FUNC_IMPL(__imp__sub_83C6D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D760"))) PPC_WEAK_FUNC(sub_83C6D760);
PPC_FUNC_IMPL(__imp__sub_83C6D760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27168
	ctx.r3.s64 = ctx.r11.s64 + 27168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D76C"))) PPC_WEAK_FUNC(sub_83C6D76C);
PPC_FUNC_IMPL(__imp__sub_83C6D76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D770"))) PPC_WEAK_FUNC(sub_83C6D770);
PPC_FUNC_IMPL(__imp__sub_83C6D770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27176
	ctx.r3.s64 = ctx.r11.s64 + 27176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D77C"))) PPC_WEAK_FUNC(sub_83C6D77C);
PPC_FUNC_IMPL(__imp__sub_83C6D77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D780"))) PPC_WEAK_FUNC(sub_83C6D780);
PPC_FUNC_IMPL(__imp__sub_83C6D780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27184
	ctx.r3.s64 = ctx.r11.s64 + 27184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D78C"))) PPC_WEAK_FUNC(sub_83C6D78C);
PPC_FUNC_IMPL(__imp__sub_83C6D78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D790"))) PPC_WEAK_FUNC(sub_83C6D790);
PPC_FUNC_IMPL(__imp__sub_83C6D790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27192
	ctx.r3.s64 = ctx.r11.s64 + 27192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D79C"))) PPC_WEAK_FUNC(sub_83C6D79C);
PPC_FUNC_IMPL(__imp__sub_83C6D79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D7A0"))) PPC_WEAK_FUNC(sub_83C6D7A0);
PPC_FUNC_IMPL(__imp__sub_83C6D7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27200
	ctx.r3.s64 = ctx.r11.s64 + 27200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D7AC"))) PPC_WEAK_FUNC(sub_83C6D7AC);
PPC_FUNC_IMPL(__imp__sub_83C6D7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D7B0"))) PPC_WEAK_FUNC(sub_83C6D7B0);
PPC_FUNC_IMPL(__imp__sub_83C6D7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27208
	ctx.r3.s64 = ctx.r11.s64 + 27208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D7BC"))) PPC_WEAK_FUNC(sub_83C6D7BC);
PPC_FUNC_IMPL(__imp__sub_83C6D7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D7C0"))) PPC_WEAK_FUNC(sub_83C6D7C0);
PPC_FUNC_IMPL(__imp__sub_83C6D7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27216
	ctx.r3.s64 = ctx.r11.s64 + 27216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D7CC"))) PPC_WEAK_FUNC(sub_83C6D7CC);
PPC_FUNC_IMPL(__imp__sub_83C6D7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D7D0"))) PPC_WEAK_FUNC(sub_83C6D7D0);
PPC_FUNC_IMPL(__imp__sub_83C6D7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27224
	ctx.r3.s64 = ctx.r11.s64 + 27224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D7DC"))) PPC_WEAK_FUNC(sub_83C6D7DC);
PPC_FUNC_IMPL(__imp__sub_83C6D7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D7E0"))) PPC_WEAK_FUNC(sub_83C6D7E0);
PPC_FUNC_IMPL(__imp__sub_83C6D7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27232
	ctx.r3.s64 = ctx.r11.s64 + 27232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D7EC"))) PPC_WEAK_FUNC(sub_83C6D7EC);
PPC_FUNC_IMPL(__imp__sub_83C6D7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D7F0"))) PPC_WEAK_FUNC(sub_83C6D7F0);
PPC_FUNC_IMPL(__imp__sub_83C6D7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27240
	ctx.r3.s64 = ctx.r11.s64 + 27240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D7FC"))) PPC_WEAK_FUNC(sub_83C6D7FC);
PPC_FUNC_IMPL(__imp__sub_83C6D7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D800"))) PPC_WEAK_FUNC(sub_83C6D800);
PPC_FUNC_IMPL(__imp__sub_83C6D800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27248
	ctx.r3.s64 = ctx.r11.s64 + 27248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D80C"))) PPC_WEAK_FUNC(sub_83C6D80C);
PPC_FUNC_IMPL(__imp__sub_83C6D80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D810"))) PPC_WEAK_FUNC(sub_83C6D810);
PPC_FUNC_IMPL(__imp__sub_83C6D810) {
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
	// addi r3,r11,-22480
	ctx.r3.s64 = ctx.r11.s64 + -22480;
	// bl 0x83523120
	ctx.lr = 0x83C6D828;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27256
	ctx.r3.s64 = ctx.r10.s64 + 27256;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6D834;
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

__attribute__((alias("__imp__sub_83C6D844"))) PPC_WEAK_FUNC(sub_83C6D844);
PPC_FUNC_IMPL(__imp__sub_83C6D844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D848"))) PPC_WEAK_FUNC(sub_83C6D848);
PPC_FUNC_IMPL(__imp__sub_83C6D848) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22464
	ctx.r7.s64 = ctx.r8.s64 + -22464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22464(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6D870"))) PPC_WEAK_FUNC(sub_83C6D870);
PPC_FUNC_IMPL(__imp__sub_83C6D870) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-22380
	ctx.r6.s64 = ctx.r7.s64 + -22380;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22452(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22452);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22464(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22464);
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
	// std r9,-22380(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22380, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6D8B8"))) PPC_WEAK_FUNC(sub_83C6D8B8);
PPC_FUNC_IMPL(__imp__sub_83C6D8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27272
	ctx.r3.s64 = ctx.r11.s64 + 27272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D8C4"))) PPC_WEAK_FUNC(sub_83C6D8C4);
PPC_FUNC_IMPL(__imp__sub_83C6D8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D8C8"))) PPC_WEAK_FUNC(sub_83C6D8C8);
PPC_FUNC_IMPL(__imp__sub_83C6D8C8) {
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
	// addi r3,r11,-22456
	ctx.r3.s64 = ctx.r11.s64 + -22456;
	// bl 0x8259af80
	ctx.lr = 0x83C6D8E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27288
	ctx.r3.s64 = ctx.r10.s64 + 27288;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6D8EC;
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

__attribute__((alias("__imp__sub_83C6D8FC"))) PPC_WEAK_FUNC(sub_83C6D8FC);
PPC_FUNC_IMPL(__imp__sub_83C6D8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D900"))) PPC_WEAK_FUNC(sub_83C6D900);
PPC_FUNC_IMPL(__imp__sub_83C6D900) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22476
	ctx.r11.s64 = ctx.r8.s64 + -22476;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-22404(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22404);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27280
	ctx.r3.s64 = ctx.r6.s64 + 27280;
	// stw r10,-22476(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22476, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D930"))) PPC_WEAK_FUNC(sub_83C6D930);
PPC_FUNC_IMPL(__imp__sub_83C6D930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27296
	ctx.r3.s64 = ctx.r11.s64 + 27296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D93C"))) PPC_WEAK_FUNC(sub_83C6D93C);
PPC_FUNC_IMPL(__imp__sub_83C6D93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D940"))) PPC_WEAK_FUNC(sub_83C6D940);
PPC_FUNC_IMPL(__imp__sub_83C6D940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27304
	ctx.r3.s64 = ctx.r11.s64 + 27304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D94C"))) PPC_WEAK_FUNC(sub_83C6D94C);
PPC_FUNC_IMPL(__imp__sub_83C6D94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D950"))) PPC_WEAK_FUNC(sub_83C6D950);
PPC_FUNC_IMPL(__imp__sub_83C6D950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27312
	ctx.r3.s64 = ctx.r11.s64 + 27312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D95C"))) PPC_WEAK_FUNC(sub_83C6D95C);
PPC_FUNC_IMPL(__imp__sub_83C6D95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D960"))) PPC_WEAK_FUNC(sub_83C6D960);
PPC_FUNC_IMPL(__imp__sub_83C6D960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27320
	ctx.r3.s64 = ctx.r11.s64 + 27320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D96C"))) PPC_WEAK_FUNC(sub_83C6D96C);
PPC_FUNC_IMPL(__imp__sub_83C6D96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D970"))) PPC_WEAK_FUNC(sub_83C6D970);
PPC_FUNC_IMPL(__imp__sub_83C6D970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27328
	ctx.r3.s64 = ctx.r11.s64 + 27328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D97C"))) PPC_WEAK_FUNC(sub_83C6D97C);
PPC_FUNC_IMPL(__imp__sub_83C6D97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D980"))) PPC_WEAK_FUNC(sub_83C6D980);
PPC_FUNC_IMPL(__imp__sub_83C6D980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27336
	ctx.r3.s64 = ctx.r11.s64 + 27336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D98C"))) PPC_WEAK_FUNC(sub_83C6D98C);
PPC_FUNC_IMPL(__imp__sub_83C6D98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D990"))) PPC_WEAK_FUNC(sub_83C6D990);
PPC_FUNC_IMPL(__imp__sub_83C6D990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27344
	ctx.r3.s64 = ctx.r11.s64 + 27344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D99C"))) PPC_WEAK_FUNC(sub_83C6D99C);
PPC_FUNC_IMPL(__imp__sub_83C6D99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D9A0"))) PPC_WEAK_FUNC(sub_83C6D9A0);
PPC_FUNC_IMPL(__imp__sub_83C6D9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27352
	ctx.r3.s64 = ctx.r11.s64 + 27352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D9AC"))) PPC_WEAK_FUNC(sub_83C6D9AC);
PPC_FUNC_IMPL(__imp__sub_83C6D9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D9B0"))) PPC_WEAK_FUNC(sub_83C6D9B0);
PPC_FUNC_IMPL(__imp__sub_83C6D9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27360
	ctx.r3.s64 = ctx.r11.s64 + 27360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D9BC"))) PPC_WEAK_FUNC(sub_83C6D9BC);
PPC_FUNC_IMPL(__imp__sub_83C6D9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D9C0"))) PPC_WEAK_FUNC(sub_83C6D9C0);
PPC_FUNC_IMPL(__imp__sub_83C6D9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27368
	ctx.r3.s64 = ctx.r11.s64 + 27368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D9CC"))) PPC_WEAK_FUNC(sub_83C6D9CC);
PPC_FUNC_IMPL(__imp__sub_83C6D9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D9D0"))) PPC_WEAK_FUNC(sub_83C6D9D0);
PPC_FUNC_IMPL(__imp__sub_83C6D9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27376
	ctx.r3.s64 = ctx.r11.s64 + 27376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D9DC"))) PPC_WEAK_FUNC(sub_83C6D9DC);
PPC_FUNC_IMPL(__imp__sub_83C6D9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D9E0"))) PPC_WEAK_FUNC(sub_83C6D9E0);
PPC_FUNC_IMPL(__imp__sub_83C6D9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27384
	ctx.r3.s64 = ctx.r11.s64 + 27384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6D9EC"))) PPC_WEAK_FUNC(sub_83C6D9EC);
PPC_FUNC_IMPL(__imp__sub_83C6D9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6D9F0"))) PPC_WEAK_FUNC(sub_83C6D9F0);
PPC_FUNC_IMPL(__imp__sub_83C6D9F0) {
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
	// addi r3,r11,-22112
	ctx.r3.s64 = ctx.r11.s64 + -22112;
	// bl 0x83523120
	ctx.lr = 0x83C6DA08;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27392
	ctx.r3.s64 = ctx.r10.s64 + 27392;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6DA14;
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

__attribute__((alias("__imp__sub_83C6DA24"))) PPC_WEAK_FUNC(sub_83C6DA24);
PPC_FUNC_IMPL(__imp__sub_83C6DA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DA28"))) PPC_WEAK_FUNC(sub_83C6DA28);
PPC_FUNC_IMPL(__imp__sub_83C6DA28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22096
	ctx.r7.s64 = ctx.r8.s64 + -22096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22096(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6DA50"))) PPC_WEAK_FUNC(sub_83C6DA50);
PPC_FUNC_IMPL(__imp__sub_83C6DA50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-22252
	ctx.r6.s64 = ctx.r7.s64 + -22252;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22324(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22324);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22096);
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
	// std r9,-22252(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22252, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6DA98"))) PPC_WEAK_FUNC(sub_83C6DA98);
PPC_FUNC_IMPL(__imp__sub_83C6DA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27408
	ctx.r3.s64 = ctx.r11.s64 + 27408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DAA4"))) PPC_WEAK_FUNC(sub_83C6DAA4);
PPC_FUNC_IMPL(__imp__sub_83C6DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DAA8"))) PPC_WEAK_FUNC(sub_83C6DAA8);
PPC_FUNC_IMPL(__imp__sub_83C6DAA8) {
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
	// addi r3,r11,-22088
	ctx.r3.s64 = ctx.r11.s64 + -22088;
	// bl 0x8259af80
	ctx.lr = 0x83C6DAC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27424
	ctx.r3.s64 = ctx.r10.s64 + 27424;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6DACC;
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

__attribute__((alias("__imp__sub_83C6DADC"))) PPC_WEAK_FUNC(sub_83C6DADC);
PPC_FUNC_IMPL(__imp__sub_83C6DADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DAE0"))) PPC_WEAK_FUNC(sub_83C6DAE0);
PPC_FUNC_IMPL(__imp__sub_83C6DAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22108
	ctx.r11.s64 = ctx.r8.s64 + -22108;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-22276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22276);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27416
	ctx.r3.s64 = ctx.r6.s64 + 27416;
	// stw r10,-22108(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22108, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DB10"))) PPC_WEAK_FUNC(sub_83C6DB10);
PPC_FUNC_IMPL(__imp__sub_83C6DB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27432
	ctx.r3.s64 = ctx.r11.s64 + 27432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DB1C"))) PPC_WEAK_FUNC(sub_83C6DB1C);
PPC_FUNC_IMPL(__imp__sub_83C6DB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DB20"))) PPC_WEAK_FUNC(sub_83C6DB20);
PPC_FUNC_IMPL(__imp__sub_83C6DB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27440
	ctx.r3.s64 = ctx.r11.s64 + 27440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DB2C"))) PPC_WEAK_FUNC(sub_83C6DB2C);
PPC_FUNC_IMPL(__imp__sub_83C6DB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DB30"))) PPC_WEAK_FUNC(sub_83C6DB30);
PPC_FUNC_IMPL(__imp__sub_83C6DB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27448
	ctx.r3.s64 = ctx.r11.s64 + 27448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DB3C"))) PPC_WEAK_FUNC(sub_83C6DB3C);
PPC_FUNC_IMPL(__imp__sub_83C6DB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DB40"))) PPC_WEAK_FUNC(sub_83C6DB40);
PPC_FUNC_IMPL(__imp__sub_83C6DB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27456
	ctx.r3.s64 = ctx.r11.s64 + 27456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DB4C"))) PPC_WEAK_FUNC(sub_83C6DB4C);
PPC_FUNC_IMPL(__imp__sub_83C6DB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DB50"))) PPC_WEAK_FUNC(sub_83C6DB50);
PPC_FUNC_IMPL(__imp__sub_83C6DB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27464
	ctx.r3.s64 = ctx.r11.s64 + 27464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DB5C"))) PPC_WEAK_FUNC(sub_83C6DB5C);
PPC_FUNC_IMPL(__imp__sub_83C6DB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DB60"))) PPC_WEAK_FUNC(sub_83C6DB60);
PPC_FUNC_IMPL(__imp__sub_83C6DB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27472
	ctx.r3.s64 = ctx.r11.s64 + 27472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DB6C"))) PPC_WEAK_FUNC(sub_83C6DB6C);
PPC_FUNC_IMPL(__imp__sub_83C6DB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DB70"))) PPC_WEAK_FUNC(sub_83C6DB70);
PPC_FUNC_IMPL(__imp__sub_83C6DB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27480
	ctx.r3.s64 = ctx.r11.s64 + 27480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DB7C"))) PPC_WEAK_FUNC(sub_83C6DB7C);
PPC_FUNC_IMPL(__imp__sub_83C6DB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DB80"))) PPC_WEAK_FUNC(sub_83C6DB80);
PPC_FUNC_IMPL(__imp__sub_83C6DB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27488
	ctx.r3.s64 = ctx.r11.s64 + 27488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DB8C"))) PPC_WEAK_FUNC(sub_83C6DB8C);
PPC_FUNC_IMPL(__imp__sub_83C6DB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DB90"))) PPC_WEAK_FUNC(sub_83C6DB90);
PPC_FUNC_IMPL(__imp__sub_83C6DB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27496
	ctx.r3.s64 = ctx.r11.s64 + 27496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DB9C"))) PPC_WEAK_FUNC(sub_83C6DB9C);
PPC_FUNC_IMPL(__imp__sub_83C6DB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DBA0"))) PPC_WEAK_FUNC(sub_83C6DBA0);
PPC_FUNC_IMPL(__imp__sub_83C6DBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27504
	ctx.r3.s64 = ctx.r11.s64 + 27504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

