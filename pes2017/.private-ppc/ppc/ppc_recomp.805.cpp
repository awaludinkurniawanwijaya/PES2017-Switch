#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C5BEC8"))) PPC_WEAK_FUNC(sub_83C5BEC8);
PPC_FUNC_IMPL(__imp__sub_83C5BEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6320
	ctx.r3.s64 = ctx.r11.s64 + 6320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BED4"))) PPC_WEAK_FUNC(sub_83C5BED4);
PPC_FUNC_IMPL(__imp__sub_83C5BED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BED8"))) PPC_WEAK_FUNC(sub_83C5BED8);
PPC_FUNC_IMPL(__imp__sub_83C5BED8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-10712
	ctx.r3.s64 = ctx.r11.s64 + -10712;
	// bl 0x8259af80
	ctx.lr = 0x83C5BEF0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6336
	ctx.r3.s64 = ctx.r10.s64 + 6336;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5BEFC;
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

__attribute__((alias("__imp__sub_83C5BF0C"))) PPC_WEAK_FUNC(sub_83C5BF0C);
PPC_FUNC_IMPL(__imp__sub_83C5BF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BF10"))) PPC_WEAK_FUNC(sub_83C5BF10);
PPC_FUNC_IMPL(__imp__sub_83C5BF10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10732
	ctx.r11.s64 = ctx.r8.s64 + -10732;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,22780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22780);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6328
	ctx.r3.s64 = ctx.r6.s64 + 6328;
	// stw r10,-10732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10732, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BF40"))) PPC_WEAK_FUNC(sub_83C5BF40);
PPC_FUNC_IMPL(__imp__sub_83C5BF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6344
	ctx.r3.s64 = ctx.r11.s64 + 6344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BF4C"))) PPC_WEAK_FUNC(sub_83C5BF4C);
PPC_FUNC_IMPL(__imp__sub_83C5BF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BF50"))) PPC_WEAK_FUNC(sub_83C5BF50);
PPC_FUNC_IMPL(__imp__sub_83C5BF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6352
	ctx.r3.s64 = ctx.r11.s64 + 6352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BF5C"))) PPC_WEAK_FUNC(sub_83C5BF5C);
PPC_FUNC_IMPL(__imp__sub_83C5BF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BF60"))) PPC_WEAK_FUNC(sub_83C5BF60);
PPC_FUNC_IMPL(__imp__sub_83C5BF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6360
	ctx.r3.s64 = ctx.r11.s64 + 6360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BF6C"))) PPC_WEAK_FUNC(sub_83C5BF6C);
PPC_FUNC_IMPL(__imp__sub_83C5BF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BF70"))) PPC_WEAK_FUNC(sub_83C5BF70);
PPC_FUNC_IMPL(__imp__sub_83C5BF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6368
	ctx.r3.s64 = ctx.r11.s64 + 6368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BF7C"))) PPC_WEAK_FUNC(sub_83C5BF7C);
PPC_FUNC_IMPL(__imp__sub_83C5BF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BF80"))) PPC_WEAK_FUNC(sub_83C5BF80);
PPC_FUNC_IMPL(__imp__sub_83C5BF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6376
	ctx.r3.s64 = ctx.r11.s64 + 6376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BF8C"))) PPC_WEAK_FUNC(sub_83C5BF8C);
PPC_FUNC_IMPL(__imp__sub_83C5BF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BF90"))) PPC_WEAK_FUNC(sub_83C5BF90);
PPC_FUNC_IMPL(__imp__sub_83C5BF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6384
	ctx.r3.s64 = ctx.r11.s64 + 6384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BF9C"))) PPC_WEAK_FUNC(sub_83C5BF9C);
PPC_FUNC_IMPL(__imp__sub_83C5BF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BFA0"))) PPC_WEAK_FUNC(sub_83C5BFA0);
PPC_FUNC_IMPL(__imp__sub_83C5BFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6392
	ctx.r3.s64 = ctx.r11.s64 + 6392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BFAC"))) PPC_WEAK_FUNC(sub_83C5BFAC);
PPC_FUNC_IMPL(__imp__sub_83C5BFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BFB0"))) PPC_WEAK_FUNC(sub_83C5BFB0);
PPC_FUNC_IMPL(__imp__sub_83C5BFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6400
	ctx.r3.s64 = ctx.r11.s64 + 6400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BFBC"))) PPC_WEAK_FUNC(sub_83C5BFBC);
PPC_FUNC_IMPL(__imp__sub_83C5BFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BFC0"))) PPC_WEAK_FUNC(sub_83C5BFC0);
PPC_FUNC_IMPL(__imp__sub_83C5BFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6408
	ctx.r3.s64 = ctx.r11.s64 + 6408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BFCC"))) PPC_WEAK_FUNC(sub_83C5BFCC);
PPC_FUNC_IMPL(__imp__sub_83C5BFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BFD0"))) PPC_WEAK_FUNC(sub_83C5BFD0);
PPC_FUNC_IMPL(__imp__sub_83C5BFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6416
	ctx.r3.s64 = ctx.r11.s64 + 6416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BFDC"))) PPC_WEAK_FUNC(sub_83C5BFDC);
PPC_FUNC_IMPL(__imp__sub_83C5BFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BFE0"))) PPC_WEAK_FUNC(sub_83C5BFE0);
PPC_FUNC_IMPL(__imp__sub_83C5BFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6424
	ctx.r3.s64 = ctx.r11.s64 + 6424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BFEC"))) PPC_WEAK_FUNC(sub_83C5BFEC);
PPC_FUNC_IMPL(__imp__sub_83C5BFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BFF0"))) PPC_WEAK_FUNC(sub_83C5BFF0);
PPC_FUNC_IMPL(__imp__sub_83C5BFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6432
	ctx.r3.s64 = ctx.r11.s64 + 6432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BFFC"))) PPC_WEAK_FUNC(sub_83C5BFFC);
PPC_FUNC_IMPL(__imp__sub_83C5BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C000"))) PPC_WEAK_FUNC(sub_83C5C000);
PPC_FUNC_IMPL(__imp__sub_83C5C000) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-10368
	ctx.r3.s64 = ctx.r11.s64 + -10368;
	// bl 0x83523120
	ctx.lr = 0x83C5C018;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6440
	ctx.r3.s64 = ctx.r10.s64 + 6440;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5C024;
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

__attribute__((alias("__imp__sub_83C5C034"))) PPC_WEAK_FUNC(sub_83C5C034);
PPC_FUNC_IMPL(__imp__sub_83C5C034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C038"))) PPC_WEAK_FUNC(sub_83C5C038);
PPC_FUNC_IMPL(__imp__sub_83C5C038) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10352
	ctx.r7.s64 = ctx.r8.s64 + -10352;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10352(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10352);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10352(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10352, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5C060"))) PPC_WEAK_FUNC(sub_83C5C060);
PPC_FUNC_IMPL(__imp__sub_83C5C060) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,22956
	ctx.r6.s64 = ctx.r7.s64 + 22956;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22876(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22876);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10352(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10352);
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
	// std r9,22956(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22956, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5C0A8"))) PPC_WEAK_FUNC(sub_83C5C0A8);
PPC_FUNC_IMPL(__imp__sub_83C5C0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6456
	ctx.r3.s64 = ctx.r11.s64 + 6456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C0B4"))) PPC_WEAK_FUNC(sub_83C5C0B4);
PPC_FUNC_IMPL(__imp__sub_83C5C0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C0B8"))) PPC_WEAK_FUNC(sub_83C5C0B8);
PPC_FUNC_IMPL(__imp__sub_83C5C0B8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-10344
	ctx.r3.s64 = ctx.r11.s64 + -10344;
	// bl 0x8259af80
	ctx.lr = 0x83C5C0D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6472
	ctx.r3.s64 = ctx.r10.s64 + 6472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5C0DC;
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

__attribute__((alias("__imp__sub_83C5C0EC"))) PPC_WEAK_FUNC(sub_83C5C0EC);
PPC_FUNC_IMPL(__imp__sub_83C5C0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C0F0"))) PPC_WEAK_FUNC(sub_83C5C0F0);
PPC_FUNC_IMPL(__imp__sub_83C5C0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10364
	ctx.r11.s64 = ctx.r8.s64 + -10364;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,22924(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22924);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6464
	ctx.r3.s64 = ctx.r6.s64 + 6464;
	// stw r10,-10364(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10364, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C120"))) PPC_WEAK_FUNC(sub_83C5C120);
PPC_FUNC_IMPL(__imp__sub_83C5C120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6480
	ctx.r3.s64 = ctx.r11.s64 + 6480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C12C"))) PPC_WEAK_FUNC(sub_83C5C12C);
PPC_FUNC_IMPL(__imp__sub_83C5C12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C130"))) PPC_WEAK_FUNC(sub_83C5C130);
PPC_FUNC_IMPL(__imp__sub_83C5C130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6488
	ctx.r3.s64 = ctx.r11.s64 + 6488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C13C"))) PPC_WEAK_FUNC(sub_83C5C13C);
PPC_FUNC_IMPL(__imp__sub_83C5C13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C140"))) PPC_WEAK_FUNC(sub_83C5C140);
PPC_FUNC_IMPL(__imp__sub_83C5C140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6496
	ctx.r3.s64 = ctx.r11.s64 + 6496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C14C"))) PPC_WEAK_FUNC(sub_83C5C14C);
PPC_FUNC_IMPL(__imp__sub_83C5C14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C150"))) PPC_WEAK_FUNC(sub_83C5C150);
PPC_FUNC_IMPL(__imp__sub_83C5C150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6504
	ctx.r3.s64 = ctx.r11.s64 + 6504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C15C"))) PPC_WEAK_FUNC(sub_83C5C15C);
PPC_FUNC_IMPL(__imp__sub_83C5C15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C160"))) PPC_WEAK_FUNC(sub_83C5C160);
PPC_FUNC_IMPL(__imp__sub_83C5C160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6512
	ctx.r3.s64 = ctx.r11.s64 + 6512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C16C"))) PPC_WEAK_FUNC(sub_83C5C16C);
PPC_FUNC_IMPL(__imp__sub_83C5C16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C170"))) PPC_WEAK_FUNC(sub_83C5C170);
PPC_FUNC_IMPL(__imp__sub_83C5C170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6520
	ctx.r3.s64 = ctx.r11.s64 + 6520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C17C"))) PPC_WEAK_FUNC(sub_83C5C17C);
PPC_FUNC_IMPL(__imp__sub_83C5C17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C180"))) PPC_WEAK_FUNC(sub_83C5C180);
PPC_FUNC_IMPL(__imp__sub_83C5C180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6528
	ctx.r3.s64 = ctx.r11.s64 + 6528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C18C"))) PPC_WEAK_FUNC(sub_83C5C18C);
PPC_FUNC_IMPL(__imp__sub_83C5C18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C190"))) PPC_WEAK_FUNC(sub_83C5C190);
PPC_FUNC_IMPL(__imp__sub_83C5C190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6536
	ctx.r3.s64 = ctx.r11.s64 + 6536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C19C"))) PPC_WEAK_FUNC(sub_83C5C19C);
PPC_FUNC_IMPL(__imp__sub_83C5C19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C1A0"))) PPC_WEAK_FUNC(sub_83C5C1A0);
PPC_FUNC_IMPL(__imp__sub_83C5C1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6544
	ctx.r3.s64 = ctx.r11.s64 + 6544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C1AC"))) PPC_WEAK_FUNC(sub_83C5C1AC);
PPC_FUNC_IMPL(__imp__sub_83C5C1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C1B0"))) PPC_WEAK_FUNC(sub_83C5C1B0);
PPC_FUNC_IMPL(__imp__sub_83C5C1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6552
	ctx.r3.s64 = ctx.r11.s64 + 6552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C1BC"))) PPC_WEAK_FUNC(sub_83C5C1BC);
PPC_FUNC_IMPL(__imp__sub_83C5C1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C1C0"))) PPC_WEAK_FUNC(sub_83C5C1C0);
PPC_FUNC_IMPL(__imp__sub_83C5C1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6560
	ctx.r3.s64 = ctx.r11.s64 + 6560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C1CC"))) PPC_WEAK_FUNC(sub_83C5C1CC);
PPC_FUNC_IMPL(__imp__sub_83C5C1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C1D0"))) PPC_WEAK_FUNC(sub_83C5C1D0);
PPC_FUNC_IMPL(__imp__sub_83C5C1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6568
	ctx.r3.s64 = ctx.r11.s64 + 6568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C1DC"))) PPC_WEAK_FUNC(sub_83C5C1DC);
PPC_FUNC_IMPL(__imp__sub_83C5C1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C1E0"))) PPC_WEAK_FUNC(sub_83C5C1E0);
PPC_FUNC_IMPL(__imp__sub_83C5C1E0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-10000
	ctx.r3.s64 = ctx.r11.s64 + -10000;
	// bl 0x83523120
	ctx.lr = 0x83C5C1F8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6576
	ctx.r3.s64 = ctx.r10.s64 + 6576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5C204;
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

__attribute__((alias("__imp__sub_83C5C214"))) PPC_WEAK_FUNC(sub_83C5C214);
PPC_FUNC_IMPL(__imp__sub_83C5C214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C218"))) PPC_WEAK_FUNC(sub_83C5C218);
PPC_FUNC_IMPL(__imp__sub_83C5C218) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9984
	ctx.r7.s64 = ctx.r8.s64 + -9984;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9984);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9984(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9984, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5C240"))) PPC_WEAK_FUNC(sub_83C5C240);
PPC_FUNC_IMPL(__imp__sub_83C5C240) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,23100
	ctx.r6.s64 = ctx.r7.s64 + 23100;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23020(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23020);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9984(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9984);
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
	// std r9,23100(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23100, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5C288"))) PPC_WEAK_FUNC(sub_83C5C288);
PPC_FUNC_IMPL(__imp__sub_83C5C288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C294"))) PPC_WEAK_FUNC(sub_83C5C294);
PPC_FUNC_IMPL(__imp__sub_83C5C294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C298"))) PPC_WEAK_FUNC(sub_83C5C298);
PPC_FUNC_IMPL(__imp__sub_83C5C298) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-9976
	ctx.r3.s64 = ctx.r11.s64 + -9976;
	// bl 0x8259af80
	ctx.lr = 0x83C5C2B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6608
	ctx.r3.s64 = ctx.r10.s64 + 6608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5C2BC;
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

__attribute__((alias("__imp__sub_83C5C2CC"))) PPC_WEAK_FUNC(sub_83C5C2CC);
PPC_FUNC_IMPL(__imp__sub_83C5C2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C2D0"))) PPC_WEAK_FUNC(sub_83C5C2D0);
PPC_FUNC_IMPL(__imp__sub_83C5C2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9996
	ctx.r11.s64 = ctx.r8.s64 + -9996;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,23068(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23068);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6600
	ctx.r3.s64 = ctx.r6.s64 + 6600;
	// stw r10,-9996(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9996, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C300"))) PPC_WEAK_FUNC(sub_83C5C300);
PPC_FUNC_IMPL(__imp__sub_83C5C300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6616
	ctx.r3.s64 = ctx.r11.s64 + 6616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C30C"))) PPC_WEAK_FUNC(sub_83C5C30C);
PPC_FUNC_IMPL(__imp__sub_83C5C30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C310"))) PPC_WEAK_FUNC(sub_83C5C310);
PPC_FUNC_IMPL(__imp__sub_83C5C310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6624
	ctx.r3.s64 = ctx.r11.s64 + 6624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C31C"))) PPC_WEAK_FUNC(sub_83C5C31C);
PPC_FUNC_IMPL(__imp__sub_83C5C31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C320"))) PPC_WEAK_FUNC(sub_83C5C320);
PPC_FUNC_IMPL(__imp__sub_83C5C320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6632
	ctx.r3.s64 = ctx.r11.s64 + 6632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C32C"))) PPC_WEAK_FUNC(sub_83C5C32C);
PPC_FUNC_IMPL(__imp__sub_83C5C32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C330"))) PPC_WEAK_FUNC(sub_83C5C330);
PPC_FUNC_IMPL(__imp__sub_83C5C330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6640
	ctx.r3.s64 = ctx.r11.s64 + 6640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C33C"))) PPC_WEAK_FUNC(sub_83C5C33C);
PPC_FUNC_IMPL(__imp__sub_83C5C33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C340"))) PPC_WEAK_FUNC(sub_83C5C340);
PPC_FUNC_IMPL(__imp__sub_83C5C340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6648
	ctx.r3.s64 = ctx.r11.s64 + 6648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C34C"))) PPC_WEAK_FUNC(sub_83C5C34C);
PPC_FUNC_IMPL(__imp__sub_83C5C34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C350"))) PPC_WEAK_FUNC(sub_83C5C350);
PPC_FUNC_IMPL(__imp__sub_83C5C350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6656
	ctx.r3.s64 = ctx.r11.s64 + 6656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C35C"))) PPC_WEAK_FUNC(sub_83C5C35C);
PPC_FUNC_IMPL(__imp__sub_83C5C35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C360"))) PPC_WEAK_FUNC(sub_83C5C360);
PPC_FUNC_IMPL(__imp__sub_83C5C360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6664
	ctx.r3.s64 = ctx.r11.s64 + 6664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C36C"))) PPC_WEAK_FUNC(sub_83C5C36C);
PPC_FUNC_IMPL(__imp__sub_83C5C36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C370"))) PPC_WEAK_FUNC(sub_83C5C370);
PPC_FUNC_IMPL(__imp__sub_83C5C370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6672
	ctx.r3.s64 = ctx.r11.s64 + 6672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C37C"))) PPC_WEAK_FUNC(sub_83C5C37C);
PPC_FUNC_IMPL(__imp__sub_83C5C37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C380"))) PPC_WEAK_FUNC(sub_83C5C380);
PPC_FUNC_IMPL(__imp__sub_83C5C380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6680
	ctx.r3.s64 = ctx.r11.s64 + 6680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C38C"))) PPC_WEAK_FUNC(sub_83C5C38C);
PPC_FUNC_IMPL(__imp__sub_83C5C38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C390"))) PPC_WEAK_FUNC(sub_83C5C390);
PPC_FUNC_IMPL(__imp__sub_83C5C390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6688
	ctx.r3.s64 = ctx.r11.s64 + 6688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C39C"))) PPC_WEAK_FUNC(sub_83C5C39C);
PPC_FUNC_IMPL(__imp__sub_83C5C39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C3A0"))) PPC_WEAK_FUNC(sub_83C5C3A0);
PPC_FUNC_IMPL(__imp__sub_83C5C3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6696
	ctx.r3.s64 = ctx.r11.s64 + 6696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C3AC"))) PPC_WEAK_FUNC(sub_83C5C3AC);
PPC_FUNC_IMPL(__imp__sub_83C5C3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C3B0"))) PPC_WEAK_FUNC(sub_83C5C3B0);
PPC_FUNC_IMPL(__imp__sub_83C5C3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6704
	ctx.r3.s64 = ctx.r11.s64 + 6704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C3BC"))) PPC_WEAK_FUNC(sub_83C5C3BC);
PPC_FUNC_IMPL(__imp__sub_83C5C3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C3C0"))) PPC_WEAK_FUNC(sub_83C5C3C0);
PPC_FUNC_IMPL(__imp__sub_83C5C3C0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-9632
	ctx.r3.s64 = ctx.r11.s64 + -9632;
	// bl 0x83523120
	ctx.lr = 0x83C5C3D8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6712
	ctx.r3.s64 = ctx.r10.s64 + 6712;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5C3E4;
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

__attribute__((alias("__imp__sub_83C5C3F4"))) PPC_WEAK_FUNC(sub_83C5C3F4);
PPC_FUNC_IMPL(__imp__sub_83C5C3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C3F8"))) PPC_WEAK_FUNC(sub_83C5C3F8);
PPC_FUNC_IMPL(__imp__sub_83C5C3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9616
	ctx.r7.s64 = ctx.r8.s64 + -9616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9616(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9616);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9616(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9616, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5C420"))) PPC_WEAK_FUNC(sub_83C5C420);
PPC_FUNC_IMPL(__imp__sub_83C5C420) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,23228
	ctx.r6.s64 = ctx.r7.s64 + 23228;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23156(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23156);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9616(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9616);
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
	// std r9,23228(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23228, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5C468"))) PPC_WEAK_FUNC(sub_83C5C468);
PPC_FUNC_IMPL(__imp__sub_83C5C468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6728
	ctx.r3.s64 = ctx.r11.s64 + 6728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C474"))) PPC_WEAK_FUNC(sub_83C5C474);
PPC_FUNC_IMPL(__imp__sub_83C5C474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C478"))) PPC_WEAK_FUNC(sub_83C5C478);
PPC_FUNC_IMPL(__imp__sub_83C5C478) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-9608
	ctx.r3.s64 = ctx.r11.s64 + -9608;
	// bl 0x8259af80
	ctx.lr = 0x83C5C490;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6744
	ctx.r3.s64 = ctx.r10.s64 + 6744;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5C49C;
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

__attribute__((alias("__imp__sub_83C5C4AC"))) PPC_WEAK_FUNC(sub_83C5C4AC);
PPC_FUNC_IMPL(__imp__sub_83C5C4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C4B0"))) PPC_WEAK_FUNC(sub_83C5C4B0);
PPC_FUNC_IMPL(__imp__sub_83C5C4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9628
	ctx.r11.s64 = ctx.r8.s64 + -9628;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,23204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23204);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6736
	ctx.r3.s64 = ctx.r6.s64 + 6736;
	// stw r10,-9628(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9628, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C4E0"))) PPC_WEAK_FUNC(sub_83C5C4E0);
PPC_FUNC_IMPL(__imp__sub_83C5C4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6752
	ctx.r3.s64 = ctx.r11.s64 + 6752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C4EC"))) PPC_WEAK_FUNC(sub_83C5C4EC);
PPC_FUNC_IMPL(__imp__sub_83C5C4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C4F0"))) PPC_WEAK_FUNC(sub_83C5C4F0);
PPC_FUNC_IMPL(__imp__sub_83C5C4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6760
	ctx.r3.s64 = ctx.r11.s64 + 6760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C4FC"))) PPC_WEAK_FUNC(sub_83C5C4FC);
PPC_FUNC_IMPL(__imp__sub_83C5C4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C500"))) PPC_WEAK_FUNC(sub_83C5C500);
PPC_FUNC_IMPL(__imp__sub_83C5C500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6768
	ctx.r3.s64 = ctx.r11.s64 + 6768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C50C"))) PPC_WEAK_FUNC(sub_83C5C50C);
PPC_FUNC_IMPL(__imp__sub_83C5C50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C510"))) PPC_WEAK_FUNC(sub_83C5C510);
PPC_FUNC_IMPL(__imp__sub_83C5C510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6776
	ctx.r3.s64 = ctx.r11.s64 + 6776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C51C"))) PPC_WEAK_FUNC(sub_83C5C51C);
PPC_FUNC_IMPL(__imp__sub_83C5C51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C520"))) PPC_WEAK_FUNC(sub_83C5C520);
PPC_FUNC_IMPL(__imp__sub_83C5C520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6784
	ctx.r3.s64 = ctx.r11.s64 + 6784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C52C"))) PPC_WEAK_FUNC(sub_83C5C52C);
PPC_FUNC_IMPL(__imp__sub_83C5C52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C530"))) PPC_WEAK_FUNC(sub_83C5C530);
PPC_FUNC_IMPL(__imp__sub_83C5C530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6792
	ctx.r3.s64 = ctx.r11.s64 + 6792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C53C"))) PPC_WEAK_FUNC(sub_83C5C53C);
PPC_FUNC_IMPL(__imp__sub_83C5C53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C540"))) PPC_WEAK_FUNC(sub_83C5C540);
PPC_FUNC_IMPL(__imp__sub_83C5C540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6800
	ctx.r3.s64 = ctx.r11.s64 + 6800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C54C"))) PPC_WEAK_FUNC(sub_83C5C54C);
PPC_FUNC_IMPL(__imp__sub_83C5C54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C550"))) PPC_WEAK_FUNC(sub_83C5C550);
PPC_FUNC_IMPL(__imp__sub_83C5C550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6808
	ctx.r3.s64 = ctx.r11.s64 + 6808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C55C"))) PPC_WEAK_FUNC(sub_83C5C55C);
PPC_FUNC_IMPL(__imp__sub_83C5C55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C560"))) PPC_WEAK_FUNC(sub_83C5C560);
PPC_FUNC_IMPL(__imp__sub_83C5C560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6816
	ctx.r3.s64 = ctx.r11.s64 + 6816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C56C"))) PPC_WEAK_FUNC(sub_83C5C56C);
PPC_FUNC_IMPL(__imp__sub_83C5C56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C570"))) PPC_WEAK_FUNC(sub_83C5C570);
PPC_FUNC_IMPL(__imp__sub_83C5C570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6824
	ctx.r3.s64 = ctx.r11.s64 + 6824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C57C"))) PPC_WEAK_FUNC(sub_83C5C57C);
PPC_FUNC_IMPL(__imp__sub_83C5C57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C580"))) PPC_WEAK_FUNC(sub_83C5C580);
PPC_FUNC_IMPL(__imp__sub_83C5C580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6832
	ctx.r3.s64 = ctx.r11.s64 + 6832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C58C"))) PPC_WEAK_FUNC(sub_83C5C58C);
PPC_FUNC_IMPL(__imp__sub_83C5C58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C590"))) PPC_WEAK_FUNC(sub_83C5C590);
PPC_FUNC_IMPL(__imp__sub_83C5C590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6840
	ctx.r3.s64 = ctx.r11.s64 + 6840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C59C"))) PPC_WEAK_FUNC(sub_83C5C59C);
PPC_FUNC_IMPL(__imp__sub_83C5C59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C5A0"))) PPC_WEAK_FUNC(sub_83C5C5A0);
PPC_FUNC_IMPL(__imp__sub_83C5C5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6848
	ctx.r3.s64 = ctx.r11.s64 + 6848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C5AC"))) PPC_WEAK_FUNC(sub_83C5C5AC);
PPC_FUNC_IMPL(__imp__sub_83C5C5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C5B0"))) PPC_WEAK_FUNC(sub_83C5C5B0);
PPC_FUNC_IMPL(__imp__sub_83C5C5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6856
	ctx.r3.s64 = ctx.r11.s64 + 6856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C5BC"))) PPC_WEAK_FUNC(sub_83C5C5BC);
PPC_FUNC_IMPL(__imp__sub_83C5C5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C5C0"))) PPC_WEAK_FUNC(sub_83C5C5C0);
PPC_FUNC_IMPL(__imp__sub_83C5C5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6864
	ctx.r3.s64 = ctx.r11.s64 + 6864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C5CC"))) PPC_WEAK_FUNC(sub_83C5C5CC);
PPC_FUNC_IMPL(__imp__sub_83C5C5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C5D0"))) PPC_WEAK_FUNC(sub_83C5C5D0);
PPC_FUNC_IMPL(__imp__sub_83C5C5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6872
	ctx.r3.s64 = ctx.r11.s64 + 6872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C5DC"))) PPC_WEAK_FUNC(sub_83C5C5DC);
PPC_FUNC_IMPL(__imp__sub_83C5C5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C5E0"))) PPC_WEAK_FUNC(sub_83C5C5E0);
PPC_FUNC_IMPL(__imp__sub_83C5C5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6880
	ctx.r3.s64 = ctx.r11.s64 + 6880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C5EC"))) PPC_WEAK_FUNC(sub_83C5C5EC);
PPC_FUNC_IMPL(__imp__sub_83C5C5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C5F0"))) PPC_WEAK_FUNC(sub_83C5C5F0);
PPC_FUNC_IMPL(__imp__sub_83C5C5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6888
	ctx.r3.s64 = ctx.r11.s64 + 6888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C5FC"))) PPC_WEAK_FUNC(sub_83C5C5FC);
PPC_FUNC_IMPL(__imp__sub_83C5C5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C600"))) PPC_WEAK_FUNC(sub_83C5C600);
PPC_FUNC_IMPL(__imp__sub_83C5C600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6896
	ctx.r3.s64 = ctx.r11.s64 + 6896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C60C"))) PPC_WEAK_FUNC(sub_83C5C60C);
PPC_FUNC_IMPL(__imp__sub_83C5C60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C610"))) PPC_WEAK_FUNC(sub_83C5C610);
PPC_FUNC_IMPL(__imp__sub_83C5C610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6904
	ctx.r3.s64 = ctx.r11.s64 + 6904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C61C"))) PPC_WEAK_FUNC(sub_83C5C61C);
PPC_FUNC_IMPL(__imp__sub_83C5C61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C620"))) PPC_WEAK_FUNC(sub_83C5C620);
PPC_FUNC_IMPL(__imp__sub_83C5C620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6912
	ctx.r3.s64 = ctx.r11.s64 + 6912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C62C"))) PPC_WEAK_FUNC(sub_83C5C62C);
PPC_FUNC_IMPL(__imp__sub_83C5C62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C630"))) PPC_WEAK_FUNC(sub_83C5C630);
PPC_FUNC_IMPL(__imp__sub_83C5C630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6920
	ctx.r3.s64 = ctx.r11.s64 + 6920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C63C"))) PPC_WEAK_FUNC(sub_83C5C63C);
PPC_FUNC_IMPL(__imp__sub_83C5C63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C640"))) PPC_WEAK_FUNC(sub_83C5C640);
PPC_FUNC_IMPL(__imp__sub_83C5C640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6928
	ctx.r3.s64 = ctx.r11.s64 + 6928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C64C"))) PPC_WEAK_FUNC(sub_83C5C64C);
PPC_FUNC_IMPL(__imp__sub_83C5C64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C650"))) PPC_WEAK_FUNC(sub_83C5C650);
PPC_FUNC_IMPL(__imp__sub_83C5C650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6936
	ctx.r3.s64 = ctx.r11.s64 + 6936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C65C"))) PPC_WEAK_FUNC(sub_83C5C65C);
PPC_FUNC_IMPL(__imp__sub_83C5C65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C660"))) PPC_WEAK_FUNC(sub_83C5C660);
PPC_FUNC_IMPL(__imp__sub_83C5C660) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-9256
	ctx.r3.s64 = ctx.r11.s64 + -9256;
	// bl 0x83523120
	ctx.lr = 0x83C5C678;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6944
	ctx.r3.s64 = ctx.r10.s64 + 6944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5C684;
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

__attribute__((alias("__imp__sub_83C5C694"))) PPC_WEAK_FUNC(sub_83C5C694);
PPC_FUNC_IMPL(__imp__sub_83C5C694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C698"))) PPC_WEAK_FUNC(sub_83C5C698);
PPC_FUNC_IMPL(__imp__sub_83C5C698) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9240
	ctx.r7.s64 = ctx.r8.s64 + -9240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9240(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5C6C0"))) PPC_WEAK_FUNC(sub_83C5C6C0);
PPC_FUNC_IMPL(__imp__sub_83C5C6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,23472
	ctx.r6.s64 = ctx.r7.s64 + 23472;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23400(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23400);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9240);
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
	// std r9,23472(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23472, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5C708"))) PPC_WEAK_FUNC(sub_83C5C708);
PPC_FUNC_IMPL(__imp__sub_83C5C708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6960
	ctx.r3.s64 = ctx.r11.s64 + 6960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C714"))) PPC_WEAK_FUNC(sub_83C5C714);
PPC_FUNC_IMPL(__imp__sub_83C5C714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C718"))) PPC_WEAK_FUNC(sub_83C5C718);
PPC_FUNC_IMPL(__imp__sub_83C5C718) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-9232
	ctx.r3.s64 = ctx.r11.s64 + -9232;
	// bl 0x8259af80
	ctx.lr = 0x83C5C730;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6976
	ctx.r3.s64 = ctx.r10.s64 + 6976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5C73C;
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

__attribute__((alias("__imp__sub_83C5C74C"))) PPC_WEAK_FUNC(sub_83C5C74C);
PPC_FUNC_IMPL(__imp__sub_83C5C74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C750"))) PPC_WEAK_FUNC(sub_83C5C750);
PPC_FUNC_IMPL(__imp__sub_83C5C750) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9252
	ctx.r11.s64 = ctx.r8.s64 + -9252;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,23448(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23448);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6968
	ctx.r3.s64 = ctx.r6.s64 + 6968;
	// stw r10,-9252(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9252, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C780"))) PPC_WEAK_FUNC(sub_83C5C780);
PPC_FUNC_IMPL(__imp__sub_83C5C780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6984
	ctx.r3.s64 = ctx.r11.s64 + 6984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C78C"))) PPC_WEAK_FUNC(sub_83C5C78C);
PPC_FUNC_IMPL(__imp__sub_83C5C78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C790"))) PPC_WEAK_FUNC(sub_83C5C790);
PPC_FUNC_IMPL(__imp__sub_83C5C790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6992
	ctx.r3.s64 = ctx.r11.s64 + 6992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C79C"))) PPC_WEAK_FUNC(sub_83C5C79C);
PPC_FUNC_IMPL(__imp__sub_83C5C79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C7A0"))) PPC_WEAK_FUNC(sub_83C5C7A0);
PPC_FUNC_IMPL(__imp__sub_83C5C7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7000
	ctx.r3.s64 = ctx.r11.s64 + 7000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C7AC"))) PPC_WEAK_FUNC(sub_83C5C7AC);
PPC_FUNC_IMPL(__imp__sub_83C5C7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C7B0"))) PPC_WEAK_FUNC(sub_83C5C7B0);
PPC_FUNC_IMPL(__imp__sub_83C5C7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7008
	ctx.r3.s64 = ctx.r11.s64 + 7008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C7BC"))) PPC_WEAK_FUNC(sub_83C5C7BC);
PPC_FUNC_IMPL(__imp__sub_83C5C7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C7C0"))) PPC_WEAK_FUNC(sub_83C5C7C0);
PPC_FUNC_IMPL(__imp__sub_83C5C7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7016
	ctx.r3.s64 = ctx.r11.s64 + 7016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C7CC"))) PPC_WEAK_FUNC(sub_83C5C7CC);
PPC_FUNC_IMPL(__imp__sub_83C5C7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C7D0"))) PPC_WEAK_FUNC(sub_83C5C7D0);
PPC_FUNC_IMPL(__imp__sub_83C5C7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7024
	ctx.r3.s64 = ctx.r11.s64 + 7024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C7DC"))) PPC_WEAK_FUNC(sub_83C5C7DC);
PPC_FUNC_IMPL(__imp__sub_83C5C7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C7E0"))) PPC_WEAK_FUNC(sub_83C5C7E0);
PPC_FUNC_IMPL(__imp__sub_83C5C7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7032
	ctx.r3.s64 = ctx.r11.s64 + 7032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C7EC"))) PPC_WEAK_FUNC(sub_83C5C7EC);
PPC_FUNC_IMPL(__imp__sub_83C5C7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C7F0"))) PPC_WEAK_FUNC(sub_83C5C7F0);
PPC_FUNC_IMPL(__imp__sub_83C5C7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7040
	ctx.r3.s64 = ctx.r11.s64 + 7040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C7FC"))) PPC_WEAK_FUNC(sub_83C5C7FC);
PPC_FUNC_IMPL(__imp__sub_83C5C7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C800"))) PPC_WEAK_FUNC(sub_83C5C800);
PPC_FUNC_IMPL(__imp__sub_83C5C800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7048
	ctx.r3.s64 = ctx.r11.s64 + 7048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C80C"))) PPC_WEAK_FUNC(sub_83C5C80C);
PPC_FUNC_IMPL(__imp__sub_83C5C80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C810"))) PPC_WEAK_FUNC(sub_83C5C810);
PPC_FUNC_IMPL(__imp__sub_83C5C810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7056
	ctx.r3.s64 = ctx.r11.s64 + 7056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C81C"))) PPC_WEAK_FUNC(sub_83C5C81C);
PPC_FUNC_IMPL(__imp__sub_83C5C81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C820"))) PPC_WEAK_FUNC(sub_83C5C820);
PPC_FUNC_IMPL(__imp__sub_83C5C820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7064
	ctx.r3.s64 = ctx.r11.s64 + 7064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C82C"))) PPC_WEAK_FUNC(sub_83C5C82C);
PPC_FUNC_IMPL(__imp__sub_83C5C82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C830"))) PPC_WEAK_FUNC(sub_83C5C830);
PPC_FUNC_IMPL(__imp__sub_83C5C830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7072
	ctx.r3.s64 = ctx.r11.s64 + 7072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C83C"))) PPC_WEAK_FUNC(sub_83C5C83C);
PPC_FUNC_IMPL(__imp__sub_83C5C83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C840"))) PPC_WEAK_FUNC(sub_83C5C840);
PPC_FUNC_IMPL(__imp__sub_83C5C840) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-8888
	ctx.r3.s64 = ctx.r11.s64 + -8888;
	// bl 0x83523120
	ctx.lr = 0x83C5C858;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,7080
	ctx.r3.s64 = ctx.r10.s64 + 7080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5C864;
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

__attribute__((alias("__imp__sub_83C5C874"))) PPC_WEAK_FUNC(sub_83C5C874);
PPC_FUNC_IMPL(__imp__sub_83C5C874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C878"))) PPC_WEAK_FUNC(sub_83C5C878);
PPC_FUNC_IMPL(__imp__sub_83C5C878) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8872
	ctx.r7.s64 = ctx.r8.s64 + -8872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8872(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5C8A0"))) PPC_WEAK_FUNC(sub_83C5C8A0);
PPC_FUNC_IMPL(__imp__sub_83C5C8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,23620
	ctx.r6.s64 = ctx.r7.s64 + 23620;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23540(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23540);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8872);
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
	// std r9,23620(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23620, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5C8E8"))) PPC_WEAK_FUNC(sub_83C5C8E8);
PPC_FUNC_IMPL(__imp__sub_83C5C8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7096
	ctx.r3.s64 = ctx.r11.s64 + 7096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C8F4"))) PPC_WEAK_FUNC(sub_83C5C8F4);
PPC_FUNC_IMPL(__imp__sub_83C5C8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C8F8"))) PPC_WEAK_FUNC(sub_83C5C8F8);
PPC_FUNC_IMPL(__imp__sub_83C5C8F8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-8864
	ctx.r3.s64 = ctx.r11.s64 + -8864;
	// bl 0x8259af80
	ctx.lr = 0x83C5C910;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,7112
	ctx.r3.s64 = ctx.r10.s64 + 7112;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5C91C;
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

__attribute__((alias("__imp__sub_83C5C92C"))) PPC_WEAK_FUNC(sub_83C5C92C);
PPC_FUNC_IMPL(__imp__sub_83C5C92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C930"))) PPC_WEAK_FUNC(sub_83C5C930);
PPC_FUNC_IMPL(__imp__sub_83C5C930) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8884
	ctx.r11.s64 = ctx.r8.s64 + -8884;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,23588(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23588);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7104
	ctx.r3.s64 = ctx.r6.s64 + 7104;
	// stw r10,-8884(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8884, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C960"))) PPC_WEAK_FUNC(sub_83C5C960);
PPC_FUNC_IMPL(__imp__sub_83C5C960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7120
	ctx.r3.s64 = ctx.r11.s64 + 7120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C96C"))) PPC_WEAK_FUNC(sub_83C5C96C);
PPC_FUNC_IMPL(__imp__sub_83C5C96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C970"))) PPC_WEAK_FUNC(sub_83C5C970);
PPC_FUNC_IMPL(__imp__sub_83C5C970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7128
	ctx.r3.s64 = ctx.r11.s64 + 7128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C97C"))) PPC_WEAK_FUNC(sub_83C5C97C);
PPC_FUNC_IMPL(__imp__sub_83C5C97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C980"))) PPC_WEAK_FUNC(sub_83C5C980);
PPC_FUNC_IMPL(__imp__sub_83C5C980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7136
	ctx.r3.s64 = ctx.r11.s64 + 7136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C98C"))) PPC_WEAK_FUNC(sub_83C5C98C);
PPC_FUNC_IMPL(__imp__sub_83C5C98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C990"))) PPC_WEAK_FUNC(sub_83C5C990);
PPC_FUNC_IMPL(__imp__sub_83C5C990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7144
	ctx.r3.s64 = ctx.r11.s64 + 7144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C99C"))) PPC_WEAK_FUNC(sub_83C5C99C);
PPC_FUNC_IMPL(__imp__sub_83C5C99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C9A0"))) PPC_WEAK_FUNC(sub_83C5C9A0);
PPC_FUNC_IMPL(__imp__sub_83C5C9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7152
	ctx.r3.s64 = ctx.r11.s64 + 7152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C9AC"))) PPC_WEAK_FUNC(sub_83C5C9AC);
PPC_FUNC_IMPL(__imp__sub_83C5C9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C9B0"))) PPC_WEAK_FUNC(sub_83C5C9B0);
PPC_FUNC_IMPL(__imp__sub_83C5C9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7160
	ctx.r3.s64 = ctx.r11.s64 + 7160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C9BC"))) PPC_WEAK_FUNC(sub_83C5C9BC);
PPC_FUNC_IMPL(__imp__sub_83C5C9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C9C0"))) PPC_WEAK_FUNC(sub_83C5C9C0);
PPC_FUNC_IMPL(__imp__sub_83C5C9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7168
	ctx.r3.s64 = ctx.r11.s64 + 7168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C9CC"))) PPC_WEAK_FUNC(sub_83C5C9CC);
PPC_FUNC_IMPL(__imp__sub_83C5C9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C9D0"))) PPC_WEAK_FUNC(sub_83C5C9D0);
PPC_FUNC_IMPL(__imp__sub_83C5C9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7176
	ctx.r3.s64 = ctx.r11.s64 + 7176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C9DC"))) PPC_WEAK_FUNC(sub_83C5C9DC);
PPC_FUNC_IMPL(__imp__sub_83C5C9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C9E0"))) PPC_WEAK_FUNC(sub_83C5C9E0);
PPC_FUNC_IMPL(__imp__sub_83C5C9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7184
	ctx.r3.s64 = ctx.r11.s64 + 7184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C9EC"))) PPC_WEAK_FUNC(sub_83C5C9EC);
PPC_FUNC_IMPL(__imp__sub_83C5C9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5C9F0"))) PPC_WEAK_FUNC(sub_83C5C9F0);
PPC_FUNC_IMPL(__imp__sub_83C5C9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7192
	ctx.r3.s64 = ctx.r11.s64 + 7192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5C9FC"))) PPC_WEAK_FUNC(sub_83C5C9FC);
PPC_FUNC_IMPL(__imp__sub_83C5C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CA00"))) PPC_WEAK_FUNC(sub_83C5CA00);
PPC_FUNC_IMPL(__imp__sub_83C5CA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7200
	ctx.r3.s64 = ctx.r11.s64 + 7200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CA0C"))) PPC_WEAK_FUNC(sub_83C5CA0C);
PPC_FUNC_IMPL(__imp__sub_83C5CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CA10"))) PPC_WEAK_FUNC(sub_83C5CA10);
PPC_FUNC_IMPL(__imp__sub_83C5CA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7208
	ctx.r3.s64 = ctx.r11.s64 + 7208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CA1C"))) PPC_WEAK_FUNC(sub_83C5CA1C);
PPC_FUNC_IMPL(__imp__sub_83C5CA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CA20"))) PPC_WEAK_FUNC(sub_83C5CA20);
PPC_FUNC_IMPL(__imp__sub_83C5CA20) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-8520
	ctx.r3.s64 = ctx.r11.s64 + -8520;
	// bl 0x83523120
	ctx.lr = 0x83C5CA38;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,7216
	ctx.r3.s64 = ctx.r10.s64 + 7216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5CA44;
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

__attribute__((alias("__imp__sub_83C5CA54"))) PPC_WEAK_FUNC(sub_83C5CA54);
PPC_FUNC_IMPL(__imp__sub_83C5CA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CA58"))) PPC_WEAK_FUNC(sub_83C5CA58);
PPC_FUNC_IMPL(__imp__sub_83C5CA58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8504
	ctx.r7.s64 = ctx.r8.s64 + -8504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8504(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5CA80"))) PPC_WEAK_FUNC(sub_83C5CA80);
PPC_FUNC_IMPL(__imp__sub_83C5CA80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,23748
	ctx.r6.s64 = ctx.r7.s64 + 23748;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23676(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23676);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8504);
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
	// std r9,23748(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23748, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5CAC8"))) PPC_WEAK_FUNC(sub_83C5CAC8);
PPC_FUNC_IMPL(__imp__sub_83C5CAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7232
	ctx.r3.s64 = ctx.r11.s64 + 7232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CAD4"))) PPC_WEAK_FUNC(sub_83C5CAD4);
PPC_FUNC_IMPL(__imp__sub_83C5CAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CAD8"))) PPC_WEAK_FUNC(sub_83C5CAD8);
PPC_FUNC_IMPL(__imp__sub_83C5CAD8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-8496
	ctx.r3.s64 = ctx.r11.s64 + -8496;
	// bl 0x8259af80
	ctx.lr = 0x83C5CAF0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,7248
	ctx.r3.s64 = ctx.r10.s64 + 7248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5CAFC;
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

__attribute__((alias("__imp__sub_83C5CB0C"))) PPC_WEAK_FUNC(sub_83C5CB0C);
PPC_FUNC_IMPL(__imp__sub_83C5CB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CB10"))) PPC_WEAK_FUNC(sub_83C5CB10);
PPC_FUNC_IMPL(__imp__sub_83C5CB10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8516
	ctx.r11.s64 = ctx.r8.s64 + -8516;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,23724(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23724);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7240
	ctx.r3.s64 = ctx.r6.s64 + 7240;
	// stw r10,-8516(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8516, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CB40"))) PPC_WEAK_FUNC(sub_83C5CB40);
PPC_FUNC_IMPL(__imp__sub_83C5CB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7256
	ctx.r3.s64 = ctx.r11.s64 + 7256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CB4C"))) PPC_WEAK_FUNC(sub_83C5CB4C);
PPC_FUNC_IMPL(__imp__sub_83C5CB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CB50"))) PPC_WEAK_FUNC(sub_83C5CB50);
PPC_FUNC_IMPL(__imp__sub_83C5CB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7264
	ctx.r3.s64 = ctx.r11.s64 + 7264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CB5C"))) PPC_WEAK_FUNC(sub_83C5CB5C);
PPC_FUNC_IMPL(__imp__sub_83C5CB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CB60"))) PPC_WEAK_FUNC(sub_83C5CB60);
PPC_FUNC_IMPL(__imp__sub_83C5CB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7272
	ctx.r3.s64 = ctx.r11.s64 + 7272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CB6C"))) PPC_WEAK_FUNC(sub_83C5CB6C);
PPC_FUNC_IMPL(__imp__sub_83C5CB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CB70"))) PPC_WEAK_FUNC(sub_83C5CB70);
PPC_FUNC_IMPL(__imp__sub_83C5CB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7280
	ctx.r3.s64 = ctx.r11.s64 + 7280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CB7C"))) PPC_WEAK_FUNC(sub_83C5CB7C);
PPC_FUNC_IMPL(__imp__sub_83C5CB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CB80"))) PPC_WEAK_FUNC(sub_83C5CB80);
PPC_FUNC_IMPL(__imp__sub_83C5CB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7288
	ctx.r3.s64 = ctx.r11.s64 + 7288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CB8C"))) PPC_WEAK_FUNC(sub_83C5CB8C);
PPC_FUNC_IMPL(__imp__sub_83C5CB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CB90"))) PPC_WEAK_FUNC(sub_83C5CB90);
PPC_FUNC_IMPL(__imp__sub_83C5CB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7296
	ctx.r3.s64 = ctx.r11.s64 + 7296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CB9C"))) PPC_WEAK_FUNC(sub_83C5CB9C);
PPC_FUNC_IMPL(__imp__sub_83C5CB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CBA0"))) PPC_WEAK_FUNC(sub_83C5CBA0);
PPC_FUNC_IMPL(__imp__sub_83C5CBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7304
	ctx.r3.s64 = ctx.r11.s64 + 7304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CBAC"))) PPC_WEAK_FUNC(sub_83C5CBAC);
PPC_FUNC_IMPL(__imp__sub_83C5CBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CBB0"))) PPC_WEAK_FUNC(sub_83C5CBB0);
PPC_FUNC_IMPL(__imp__sub_83C5CBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CBBC"))) PPC_WEAK_FUNC(sub_83C5CBBC);
PPC_FUNC_IMPL(__imp__sub_83C5CBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CBC0"))) PPC_WEAK_FUNC(sub_83C5CBC0);
PPC_FUNC_IMPL(__imp__sub_83C5CBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7320
	ctx.r3.s64 = ctx.r11.s64 + 7320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CBCC"))) PPC_WEAK_FUNC(sub_83C5CBCC);
PPC_FUNC_IMPL(__imp__sub_83C5CBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CBD0"))) PPC_WEAK_FUNC(sub_83C5CBD0);
PPC_FUNC_IMPL(__imp__sub_83C5CBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7328
	ctx.r3.s64 = ctx.r11.s64 + 7328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CBDC"))) PPC_WEAK_FUNC(sub_83C5CBDC);
PPC_FUNC_IMPL(__imp__sub_83C5CBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CBE0"))) PPC_WEAK_FUNC(sub_83C5CBE0);
PPC_FUNC_IMPL(__imp__sub_83C5CBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7336
	ctx.r3.s64 = ctx.r11.s64 + 7336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CBEC"))) PPC_WEAK_FUNC(sub_83C5CBEC);
PPC_FUNC_IMPL(__imp__sub_83C5CBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CBF0"))) PPC_WEAK_FUNC(sub_83C5CBF0);
PPC_FUNC_IMPL(__imp__sub_83C5CBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7344
	ctx.r3.s64 = ctx.r11.s64 + 7344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CBFC"))) PPC_WEAK_FUNC(sub_83C5CBFC);
PPC_FUNC_IMPL(__imp__sub_83C5CBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CC00"))) PPC_WEAK_FUNC(sub_83C5CC00);
PPC_FUNC_IMPL(__imp__sub_83C5CC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7352
	ctx.r3.s64 = ctx.r11.s64 + 7352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CC0C"))) PPC_WEAK_FUNC(sub_83C5CC0C);
PPC_FUNC_IMPL(__imp__sub_83C5CC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CC10"))) PPC_WEAK_FUNC(sub_83C5CC10);
PPC_FUNC_IMPL(__imp__sub_83C5CC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7360
	ctx.r3.s64 = ctx.r11.s64 + 7360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5CC1C"))) PPC_WEAK_FUNC(sub_83C5CC1C);
PPC_FUNC_IMPL(__imp__sub_83C5CC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5CC20"))) PPC_WEAK_FUNC(sub_83C5CC20);
PPC_FUNC_IMPL(__imp__sub_83C5CC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,7368
	ctx.r3.s64 = ctx.r11.s64 + 7368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

