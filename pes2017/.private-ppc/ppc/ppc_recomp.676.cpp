#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BF23D0"))) PPC_WEAK_FUNC(sub_83BF23D0);
PPC_FUNC_IMPL(__imp__sub_83BF23D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,172
	ctx.r6.s64 = ctx.r7.s64 + 172;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,100(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 100);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13552(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13552);
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
	// std r9,172(r7)
	PPC_STORE_U64(ctx.r7.u32 + 172, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF2418"))) PPC_WEAK_FUNC(sub_83BF2418);
PPC_FUNC_IMPL(__imp__sub_83BF2418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9512
	ctx.r3.s64 = ctx.r11.s64 + -9512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2424"))) PPC_WEAK_FUNC(sub_83BF2424);
PPC_FUNC_IMPL(__imp__sub_83BF2424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2428"))) PPC_WEAK_FUNC(sub_83BF2428);
PPC_FUNC_IMPL(__imp__sub_83BF2428) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-13544
	ctx.r3.s64 = ctx.r11.s64 + -13544;
	// bl 0x8259af80
	ctx.lr = 0x83BF2440;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-9496
	ctx.r3.s64 = ctx.r10.s64 + -9496;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF244C;
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

__attribute__((alias("__imp__sub_83BF245C"))) PPC_WEAK_FUNC(sub_83BF245C);
PPC_FUNC_IMPL(__imp__sub_83BF245C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2460"))) PPC_WEAK_FUNC(sub_83BF2460);
PPC_FUNC_IMPL(__imp__sub_83BF2460) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13564
	ctx.r11.s64 = ctx.r8.s64 + -13564;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9504
	ctx.r3.s64 = ctx.r6.s64 + -9504;
	// stw r10,-13564(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13564, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2490"))) PPC_WEAK_FUNC(sub_83BF2490);
PPC_FUNC_IMPL(__imp__sub_83BF2490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9488
	ctx.r3.s64 = ctx.r11.s64 + -9488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF249C"))) PPC_WEAK_FUNC(sub_83BF249C);
PPC_FUNC_IMPL(__imp__sub_83BF249C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF24A0"))) PPC_WEAK_FUNC(sub_83BF24A0);
PPC_FUNC_IMPL(__imp__sub_83BF24A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9480
	ctx.r3.s64 = ctx.r11.s64 + -9480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF24AC"))) PPC_WEAK_FUNC(sub_83BF24AC);
PPC_FUNC_IMPL(__imp__sub_83BF24AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF24B0"))) PPC_WEAK_FUNC(sub_83BF24B0);
PPC_FUNC_IMPL(__imp__sub_83BF24B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9472
	ctx.r3.s64 = ctx.r11.s64 + -9472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF24BC"))) PPC_WEAK_FUNC(sub_83BF24BC);
PPC_FUNC_IMPL(__imp__sub_83BF24BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF24C0"))) PPC_WEAK_FUNC(sub_83BF24C0);
PPC_FUNC_IMPL(__imp__sub_83BF24C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9464
	ctx.r3.s64 = ctx.r11.s64 + -9464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF24CC"))) PPC_WEAK_FUNC(sub_83BF24CC);
PPC_FUNC_IMPL(__imp__sub_83BF24CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF24D0"))) PPC_WEAK_FUNC(sub_83BF24D0);
PPC_FUNC_IMPL(__imp__sub_83BF24D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9456
	ctx.r3.s64 = ctx.r11.s64 + -9456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF24DC"))) PPC_WEAK_FUNC(sub_83BF24DC);
PPC_FUNC_IMPL(__imp__sub_83BF24DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF24E0"))) PPC_WEAK_FUNC(sub_83BF24E0);
PPC_FUNC_IMPL(__imp__sub_83BF24E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9448
	ctx.r3.s64 = ctx.r11.s64 + -9448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF24EC"))) PPC_WEAK_FUNC(sub_83BF24EC);
PPC_FUNC_IMPL(__imp__sub_83BF24EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF24F0"))) PPC_WEAK_FUNC(sub_83BF24F0);
PPC_FUNC_IMPL(__imp__sub_83BF24F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9440
	ctx.r3.s64 = ctx.r11.s64 + -9440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF24FC"))) PPC_WEAK_FUNC(sub_83BF24FC);
PPC_FUNC_IMPL(__imp__sub_83BF24FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2500"))) PPC_WEAK_FUNC(sub_83BF2500);
PPC_FUNC_IMPL(__imp__sub_83BF2500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9432
	ctx.r3.s64 = ctx.r11.s64 + -9432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF250C"))) PPC_WEAK_FUNC(sub_83BF250C);
PPC_FUNC_IMPL(__imp__sub_83BF250C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2510"))) PPC_WEAK_FUNC(sub_83BF2510);
PPC_FUNC_IMPL(__imp__sub_83BF2510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9424
	ctx.r3.s64 = ctx.r11.s64 + -9424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF251C"))) PPC_WEAK_FUNC(sub_83BF251C);
PPC_FUNC_IMPL(__imp__sub_83BF251C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2520"))) PPC_WEAK_FUNC(sub_83BF2520);
PPC_FUNC_IMPL(__imp__sub_83BF2520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9416
	ctx.r3.s64 = ctx.r11.s64 + -9416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF252C"))) PPC_WEAK_FUNC(sub_83BF252C);
PPC_FUNC_IMPL(__imp__sub_83BF252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2530"))) PPC_WEAK_FUNC(sub_83BF2530);
PPC_FUNC_IMPL(__imp__sub_83BF2530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9408
	ctx.r3.s64 = ctx.r11.s64 + -9408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF253C"))) PPC_WEAK_FUNC(sub_83BF253C);
PPC_FUNC_IMPL(__imp__sub_83BF253C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2540"))) PPC_WEAK_FUNC(sub_83BF2540);
PPC_FUNC_IMPL(__imp__sub_83BF2540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9400
	ctx.r3.s64 = ctx.r11.s64 + -9400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF254C"))) PPC_WEAK_FUNC(sub_83BF254C);
PPC_FUNC_IMPL(__imp__sub_83BF254C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2550"))) PPC_WEAK_FUNC(sub_83BF2550);
PPC_FUNC_IMPL(__imp__sub_83BF2550) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-13200
	ctx.r3.s64 = ctx.r11.s64 + -13200;
	// bl 0x83523120
	ctx.lr = 0x83BF2568;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-9392
	ctx.r3.s64 = ctx.r10.s64 + -9392;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF2574;
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

__attribute__((alias("__imp__sub_83BF2584"))) PPC_WEAK_FUNC(sub_83BF2584);
PPC_FUNC_IMPL(__imp__sub_83BF2584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2588"))) PPC_WEAK_FUNC(sub_83BF2588);
PPC_FUNC_IMPL(__imp__sub_83BF2588) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13184
	ctx.r7.s64 = ctx.r8.s64 + -13184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13184);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13184(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13184, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF25B0"))) PPC_WEAK_FUNC(sub_83BF25B0);
PPC_FUNC_IMPL(__imp__sub_83BF25B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,300
	ctx.r6.s64 = ctx.r7.s64 + 300;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,228(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 228);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13184(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13184);
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
	// std r9,300(r7)
	PPC_STORE_U64(ctx.r7.u32 + 300, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF25F8"))) PPC_WEAK_FUNC(sub_83BF25F8);
PPC_FUNC_IMPL(__imp__sub_83BF25F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9376
	ctx.r3.s64 = ctx.r11.s64 + -9376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2604"))) PPC_WEAK_FUNC(sub_83BF2604);
PPC_FUNC_IMPL(__imp__sub_83BF2604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2608"))) PPC_WEAK_FUNC(sub_83BF2608);
PPC_FUNC_IMPL(__imp__sub_83BF2608) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-13176
	ctx.r3.s64 = ctx.r11.s64 + -13176;
	// bl 0x8259af80
	ctx.lr = 0x83BF2620;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-9360
	ctx.r3.s64 = ctx.r10.s64 + -9360;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF262C;
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

__attribute__((alias("__imp__sub_83BF263C"))) PPC_WEAK_FUNC(sub_83BF263C);
PPC_FUNC_IMPL(__imp__sub_83BF263C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2640"))) PPC_WEAK_FUNC(sub_83BF2640);
PPC_FUNC_IMPL(__imp__sub_83BF2640) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13196
	ctx.r11.s64 = ctx.r8.s64 + -13196;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9368
	ctx.r3.s64 = ctx.r6.s64 + -9368;
	// stw r10,-13196(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13196, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2670"))) PPC_WEAK_FUNC(sub_83BF2670);
PPC_FUNC_IMPL(__imp__sub_83BF2670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9352
	ctx.r3.s64 = ctx.r11.s64 + -9352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF267C"))) PPC_WEAK_FUNC(sub_83BF267C);
PPC_FUNC_IMPL(__imp__sub_83BF267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2680"))) PPC_WEAK_FUNC(sub_83BF2680);
PPC_FUNC_IMPL(__imp__sub_83BF2680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9344
	ctx.r3.s64 = ctx.r11.s64 + -9344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF268C"))) PPC_WEAK_FUNC(sub_83BF268C);
PPC_FUNC_IMPL(__imp__sub_83BF268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2690"))) PPC_WEAK_FUNC(sub_83BF2690);
PPC_FUNC_IMPL(__imp__sub_83BF2690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9336
	ctx.r3.s64 = ctx.r11.s64 + -9336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF269C"))) PPC_WEAK_FUNC(sub_83BF269C);
PPC_FUNC_IMPL(__imp__sub_83BF269C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF26A0"))) PPC_WEAK_FUNC(sub_83BF26A0);
PPC_FUNC_IMPL(__imp__sub_83BF26A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9328
	ctx.r3.s64 = ctx.r11.s64 + -9328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF26AC"))) PPC_WEAK_FUNC(sub_83BF26AC);
PPC_FUNC_IMPL(__imp__sub_83BF26AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF26B0"))) PPC_WEAK_FUNC(sub_83BF26B0);
PPC_FUNC_IMPL(__imp__sub_83BF26B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9320
	ctx.r3.s64 = ctx.r11.s64 + -9320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF26BC"))) PPC_WEAK_FUNC(sub_83BF26BC);
PPC_FUNC_IMPL(__imp__sub_83BF26BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF26C0"))) PPC_WEAK_FUNC(sub_83BF26C0);
PPC_FUNC_IMPL(__imp__sub_83BF26C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9312
	ctx.r3.s64 = ctx.r11.s64 + -9312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF26CC"))) PPC_WEAK_FUNC(sub_83BF26CC);
PPC_FUNC_IMPL(__imp__sub_83BF26CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF26D0"))) PPC_WEAK_FUNC(sub_83BF26D0);
PPC_FUNC_IMPL(__imp__sub_83BF26D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9304
	ctx.r3.s64 = ctx.r11.s64 + -9304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF26DC"))) PPC_WEAK_FUNC(sub_83BF26DC);
PPC_FUNC_IMPL(__imp__sub_83BF26DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF26E0"))) PPC_WEAK_FUNC(sub_83BF26E0);
PPC_FUNC_IMPL(__imp__sub_83BF26E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9296
	ctx.r3.s64 = ctx.r11.s64 + -9296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF26EC"))) PPC_WEAK_FUNC(sub_83BF26EC);
PPC_FUNC_IMPL(__imp__sub_83BF26EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF26F0"))) PPC_WEAK_FUNC(sub_83BF26F0);
PPC_FUNC_IMPL(__imp__sub_83BF26F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9288
	ctx.r3.s64 = ctx.r11.s64 + -9288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF26FC"))) PPC_WEAK_FUNC(sub_83BF26FC);
PPC_FUNC_IMPL(__imp__sub_83BF26FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2700"))) PPC_WEAK_FUNC(sub_83BF2700);
PPC_FUNC_IMPL(__imp__sub_83BF2700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9280
	ctx.r3.s64 = ctx.r11.s64 + -9280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF270C"))) PPC_WEAK_FUNC(sub_83BF270C);
PPC_FUNC_IMPL(__imp__sub_83BF270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2710"))) PPC_WEAK_FUNC(sub_83BF2710);
PPC_FUNC_IMPL(__imp__sub_83BF2710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9272
	ctx.r3.s64 = ctx.r11.s64 + -9272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF271C"))) PPC_WEAK_FUNC(sub_83BF271C);
PPC_FUNC_IMPL(__imp__sub_83BF271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2720"))) PPC_WEAK_FUNC(sub_83BF2720);
PPC_FUNC_IMPL(__imp__sub_83BF2720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9264
	ctx.r3.s64 = ctx.r11.s64 + -9264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF272C"))) PPC_WEAK_FUNC(sub_83BF272C);
PPC_FUNC_IMPL(__imp__sub_83BF272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2730"))) PPC_WEAK_FUNC(sub_83BF2730);
PPC_FUNC_IMPL(__imp__sub_83BF2730) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-12832
	ctx.r3.s64 = ctx.r11.s64 + -12832;
	// bl 0x83523120
	ctx.lr = 0x83BF2748;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-9256
	ctx.r3.s64 = ctx.r10.s64 + -9256;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF2754;
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

__attribute__((alias("__imp__sub_83BF2764"))) PPC_WEAK_FUNC(sub_83BF2764);
PPC_FUNC_IMPL(__imp__sub_83BF2764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2768"))) PPC_WEAK_FUNC(sub_83BF2768);
PPC_FUNC_IMPL(__imp__sub_83BF2768) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12816
	ctx.r7.s64 = ctx.r8.s64 + -12816;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12816(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12816);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12816(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12816, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF2790"))) PPC_WEAK_FUNC(sub_83BF2790);
PPC_FUNC_IMPL(__imp__sub_83BF2790) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,472
	ctx.r6.s64 = ctx.r7.s64 + 472;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,400(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 400);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12816(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12816);
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
	// std r9,472(r7)
	PPC_STORE_U64(ctx.r7.u32 + 472, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF27D8"))) PPC_WEAK_FUNC(sub_83BF27D8);
PPC_FUNC_IMPL(__imp__sub_83BF27D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9240
	ctx.r3.s64 = ctx.r11.s64 + -9240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF27E4"))) PPC_WEAK_FUNC(sub_83BF27E4);
PPC_FUNC_IMPL(__imp__sub_83BF27E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF27E8"))) PPC_WEAK_FUNC(sub_83BF27E8);
PPC_FUNC_IMPL(__imp__sub_83BF27E8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-12808
	ctx.r3.s64 = ctx.r11.s64 + -12808;
	// bl 0x8259af80
	ctx.lr = 0x83BF2800;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-9224
	ctx.r3.s64 = ctx.r10.s64 + -9224;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF280C;
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

__attribute__((alias("__imp__sub_83BF281C"))) PPC_WEAK_FUNC(sub_83BF281C);
PPC_FUNC_IMPL(__imp__sub_83BF281C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2820"))) PPC_WEAK_FUNC(sub_83BF2820);
PPC_FUNC_IMPL(__imp__sub_83BF2820) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12828
	ctx.r11.s64 = ctx.r8.s64 + -12828;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,448(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9232
	ctx.r3.s64 = ctx.r6.s64 + -9232;
	// stw r10,-12828(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12828, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2850"))) PPC_WEAK_FUNC(sub_83BF2850);
PPC_FUNC_IMPL(__imp__sub_83BF2850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9216
	ctx.r3.s64 = ctx.r11.s64 + -9216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF285C"))) PPC_WEAK_FUNC(sub_83BF285C);
PPC_FUNC_IMPL(__imp__sub_83BF285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2860"))) PPC_WEAK_FUNC(sub_83BF2860);
PPC_FUNC_IMPL(__imp__sub_83BF2860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9208
	ctx.r3.s64 = ctx.r11.s64 + -9208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF286C"))) PPC_WEAK_FUNC(sub_83BF286C);
PPC_FUNC_IMPL(__imp__sub_83BF286C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2870"))) PPC_WEAK_FUNC(sub_83BF2870);
PPC_FUNC_IMPL(__imp__sub_83BF2870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9200
	ctx.r3.s64 = ctx.r11.s64 + -9200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF287C"))) PPC_WEAK_FUNC(sub_83BF287C);
PPC_FUNC_IMPL(__imp__sub_83BF287C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2880"))) PPC_WEAK_FUNC(sub_83BF2880);
PPC_FUNC_IMPL(__imp__sub_83BF2880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9192
	ctx.r3.s64 = ctx.r11.s64 + -9192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF288C"))) PPC_WEAK_FUNC(sub_83BF288C);
PPC_FUNC_IMPL(__imp__sub_83BF288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2890"))) PPC_WEAK_FUNC(sub_83BF2890);
PPC_FUNC_IMPL(__imp__sub_83BF2890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9184
	ctx.r3.s64 = ctx.r11.s64 + -9184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF289C"))) PPC_WEAK_FUNC(sub_83BF289C);
PPC_FUNC_IMPL(__imp__sub_83BF289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF28A0"))) PPC_WEAK_FUNC(sub_83BF28A0);
PPC_FUNC_IMPL(__imp__sub_83BF28A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9176
	ctx.r3.s64 = ctx.r11.s64 + -9176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF28AC"))) PPC_WEAK_FUNC(sub_83BF28AC);
PPC_FUNC_IMPL(__imp__sub_83BF28AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF28B0"))) PPC_WEAK_FUNC(sub_83BF28B0);
PPC_FUNC_IMPL(__imp__sub_83BF28B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9168
	ctx.r3.s64 = ctx.r11.s64 + -9168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF28BC"))) PPC_WEAK_FUNC(sub_83BF28BC);
PPC_FUNC_IMPL(__imp__sub_83BF28BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF28C0"))) PPC_WEAK_FUNC(sub_83BF28C0);
PPC_FUNC_IMPL(__imp__sub_83BF28C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9160
	ctx.r3.s64 = ctx.r11.s64 + -9160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF28CC"))) PPC_WEAK_FUNC(sub_83BF28CC);
PPC_FUNC_IMPL(__imp__sub_83BF28CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF28D0"))) PPC_WEAK_FUNC(sub_83BF28D0);
PPC_FUNC_IMPL(__imp__sub_83BF28D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9152
	ctx.r3.s64 = ctx.r11.s64 + -9152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF28DC"))) PPC_WEAK_FUNC(sub_83BF28DC);
PPC_FUNC_IMPL(__imp__sub_83BF28DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF28E0"))) PPC_WEAK_FUNC(sub_83BF28E0);
PPC_FUNC_IMPL(__imp__sub_83BF28E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9144
	ctx.r3.s64 = ctx.r11.s64 + -9144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF28EC"))) PPC_WEAK_FUNC(sub_83BF28EC);
PPC_FUNC_IMPL(__imp__sub_83BF28EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF28F0"))) PPC_WEAK_FUNC(sub_83BF28F0);
PPC_FUNC_IMPL(__imp__sub_83BF28F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9136
	ctx.r3.s64 = ctx.r11.s64 + -9136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF28FC"))) PPC_WEAK_FUNC(sub_83BF28FC);
PPC_FUNC_IMPL(__imp__sub_83BF28FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2900"))) PPC_WEAK_FUNC(sub_83BF2900);
PPC_FUNC_IMPL(__imp__sub_83BF2900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9128
	ctx.r3.s64 = ctx.r11.s64 + -9128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF290C"))) PPC_WEAK_FUNC(sub_83BF290C);
PPC_FUNC_IMPL(__imp__sub_83BF290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2910"))) PPC_WEAK_FUNC(sub_83BF2910);
PPC_FUNC_IMPL(__imp__sub_83BF2910) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-12464
	ctx.r3.s64 = ctx.r11.s64 + -12464;
	// bl 0x83523120
	ctx.lr = 0x83BF2928;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-9120
	ctx.r3.s64 = ctx.r10.s64 + -9120;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF2934;
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

__attribute__((alias("__imp__sub_83BF2944"))) PPC_WEAK_FUNC(sub_83BF2944);
PPC_FUNC_IMPL(__imp__sub_83BF2944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2948"))) PPC_WEAK_FUNC(sub_83BF2948);
PPC_FUNC_IMPL(__imp__sub_83BF2948) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12448
	ctx.r7.s64 = ctx.r8.s64 + -12448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF2970"))) PPC_WEAK_FUNC(sub_83BF2970);
PPC_FUNC_IMPL(__imp__sub_83BF2970) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,688
	ctx.r6.s64 = ctx.r7.s64 + 688;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,616(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 616);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12448);
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
	// std r9,688(r7)
	PPC_STORE_U64(ctx.r7.u32 + 688, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF29B8"))) PPC_WEAK_FUNC(sub_83BF29B8);
PPC_FUNC_IMPL(__imp__sub_83BF29B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9104
	ctx.r3.s64 = ctx.r11.s64 + -9104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF29C4"))) PPC_WEAK_FUNC(sub_83BF29C4);
PPC_FUNC_IMPL(__imp__sub_83BF29C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF29C8"))) PPC_WEAK_FUNC(sub_83BF29C8);
PPC_FUNC_IMPL(__imp__sub_83BF29C8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-12440
	ctx.r3.s64 = ctx.r11.s64 + -12440;
	// bl 0x8259af80
	ctx.lr = 0x83BF29E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-9088
	ctx.r3.s64 = ctx.r10.s64 + -9088;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF29EC;
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

__attribute__((alias("__imp__sub_83BF29FC"))) PPC_WEAK_FUNC(sub_83BF29FC);
PPC_FUNC_IMPL(__imp__sub_83BF29FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2A00"))) PPC_WEAK_FUNC(sub_83BF2A00);
PPC_FUNC_IMPL(__imp__sub_83BF2A00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12460
	ctx.r11.s64 = ctx.r8.s64 + -12460;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,664(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 664);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9096
	ctx.r3.s64 = ctx.r6.s64 + -9096;
	// stw r10,-12460(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12460, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2A30"))) PPC_WEAK_FUNC(sub_83BF2A30);
PPC_FUNC_IMPL(__imp__sub_83BF2A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9080
	ctx.r3.s64 = ctx.r11.s64 + -9080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2A3C"))) PPC_WEAK_FUNC(sub_83BF2A3C);
PPC_FUNC_IMPL(__imp__sub_83BF2A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2A40"))) PPC_WEAK_FUNC(sub_83BF2A40);
PPC_FUNC_IMPL(__imp__sub_83BF2A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9072
	ctx.r3.s64 = ctx.r11.s64 + -9072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2A4C"))) PPC_WEAK_FUNC(sub_83BF2A4C);
PPC_FUNC_IMPL(__imp__sub_83BF2A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2A50"))) PPC_WEAK_FUNC(sub_83BF2A50);
PPC_FUNC_IMPL(__imp__sub_83BF2A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9064
	ctx.r3.s64 = ctx.r11.s64 + -9064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2A5C"))) PPC_WEAK_FUNC(sub_83BF2A5C);
PPC_FUNC_IMPL(__imp__sub_83BF2A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2A60"))) PPC_WEAK_FUNC(sub_83BF2A60);
PPC_FUNC_IMPL(__imp__sub_83BF2A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9056
	ctx.r3.s64 = ctx.r11.s64 + -9056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2A6C"))) PPC_WEAK_FUNC(sub_83BF2A6C);
PPC_FUNC_IMPL(__imp__sub_83BF2A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2A70"))) PPC_WEAK_FUNC(sub_83BF2A70);
PPC_FUNC_IMPL(__imp__sub_83BF2A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9048
	ctx.r3.s64 = ctx.r11.s64 + -9048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2A7C"))) PPC_WEAK_FUNC(sub_83BF2A7C);
PPC_FUNC_IMPL(__imp__sub_83BF2A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2A80"))) PPC_WEAK_FUNC(sub_83BF2A80);
PPC_FUNC_IMPL(__imp__sub_83BF2A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9040
	ctx.r3.s64 = ctx.r11.s64 + -9040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2A8C"))) PPC_WEAK_FUNC(sub_83BF2A8C);
PPC_FUNC_IMPL(__imp__sub_83BF2A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2A90"))) PPC_WEAK_FUNC(sub_83BF2A90);
PPC_FUNC_IMPL(__imp__sub_83BF2A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9032
	ctx.r3.s64 = ctx.r11.s64 + -9032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2A9C"))) PPC_WEAK_FUNC(sub_83BF2A9C);
PPC_FUNC_IMPL(__imp__sub_83BF2A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2AA0"))) PPC_WEAK_FUNC(sub_83BF2AA0);
PPC_FUNC_IMPL(__imp__sub_83BF2AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9024
	ctx.r3.s64 = ctx.r11.s64 + -9024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2AAC"))) PPC_WEAK_FUNC(sub_83BF2AAC);
PPC_FUNC_IMPL(__imp__sub_83BF2AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2AB0"))) PPC_WEAK_FUNC(sub_83BF2AB0);
PPC_FUNC_IMPL(__imp__sub_83BF2AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9016
	ctx.r3.s64 = ctx.r11.s64 + -9016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2ABC"))) PPC_WEAK_FUNC(sub_83BF2ABC);
PPC_FUNC_IMPL(__imp__sub_83BF2ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2AC0"))) PPC_WEAK_FUNC(sub_83BF2AC0);
PPC_FUNC_IMPL(__imp__sub_83BF2AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9008
	ctx.r3.s64 = ctx.r11.s64 + -9008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2ACC"))) PPC_WEAK_FUNC(sub_83BF2ACC);
PPC_FUNC_IMPL(__imp__sub_83BF2ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2AD0"))) PPC_WEAK_FUNC(sub_83BF2AD0);
PPC_FUNC_IMPL(__imp__sub_83BF2AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-9000
	ctx.r3.s64 = ctx.r11.s64 + -9000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2ADC"))) PPC_WEAK_FUNC(sub_83BF2ADC);
PPC_FUNC_IMPL(__imp__sub_83BF2ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2AE0"))) PPC_WEAK_FUNC(sub_83BF2AE0);
PPC_FUNC_IMPL(__imp__sub_83BF2AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8992
	ctx.r3.s64 = ctx.r11.s64 + -8992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2AEC"))) PPC_WEAK_FUNC(sub_83BF2AEC);
PPC_FUNC_IMPL(__imp__sub_83BF2AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2AF0"))) PPC_WEAK_FUNC(sub_83BF2AF0);
PPC_FUNC_IMPL(__imp__sub_83BF2AF0) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-12096
	ctx.r3.s64 = ctx.r11.s64 + -12096;
	// bl 0x83523120
	ctx.lr = 0x83BF2B08;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8984
	ctx.r3.s64 = ctx.r10.s64 + -8984;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF2B14;
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

__attribute__((alias("__imp__sub_83BF2B24"))) PPC_WEAK_FUNC(sub_83BF2B24);
PPC_FUNC_IMPL(__imp__sub_83BF2B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2B28"))) PPC_WEAK_FUNC(sub_83BF2B28);
PPC_FUNC_IMPL(__imp__sub_83BF2B28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12080
	ctx.r7.s64 = ctx.r8.s64 + -12080;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12080(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12080);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12080(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12080, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF2B50"))) PPC_WEAK_FUNC(sub_83BF2B50);
PPC_FUNC_IMPL(__imp__sub_83BF2B50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,872
	ctx.r6.s64 = ctx.r7.s64 + 872;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,800(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 800);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12080(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12080);
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
	// std r9,872(r7)
	PPC_STORE_U64(ctx.r7.u32 + 872, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF2B98"))) PPC_WEAK_FUNC(sub_83BF2B98);
PPC_FUNC_IMPL(__imp__sub_83BF2B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8968
	ctx.r3.s64 = ctx.r11.s64 + -8968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2BA4"))) PPC_WEAK_FUNC(sub_83BF2BA4);
PPC_FUNC_IMPL(__imp__sub_83BF2BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2BA8"))) PPC_WEAK_FUNC(sub_83BF2BA8);
PPC_FUNC_IMPL(__imp__sub_83BF2BA8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-12072
	ctx.r3.s64 = ctx.r11.s64 + -12072;
	// bl 0x8259af80
	ctx.lr = 0x83BF2BC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8952
	ctx.r3.s64 = ctx.r10.s64 + -8952;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF2BCC;
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

__attribute__((alias("__imp__sub_83BF2BDC"))) PPC_WEAK_FUNC(sub_83BF2BDC);
PPC_FUNC_IMPL(__imp__sub_83BF2BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2BE0"))) PPC_WEAK_FUNC(sub_83BF2BE0);
PPC_FUNC_IMPL(__imp__sub_83BF2BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12092
	ctx.r11.s64 = ctx.r8.s64 + -12092;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,848(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 848);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8960
	ctx.r3.s64 = ctx.r6.s64 + -8960;
	// stw r10,-12092(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12092, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2C10"))) PPC_WEAK_FUNC(sub_83BF2C10);
PPC_FUNC_IMPL(__imp__sub_83BF2C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8944
	ctx.r3.s64 = ctx.r11.s64 + -8944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2C1C"))) PPC_WEAK_FUNC(sub_83BF2C1C);
PPC_FUNC_IMPL(__imp__sub_83BF2C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2C20"))) PPC_WEAK_FUNC(sub_83BF2C20);
PPC_FUNC_IMPL(__imp__sub_83BF2C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8936
	ctx.r3.s64 = ctx.r11.s64 + -8936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2C2C"))) PPC_WEAK_FUNC(sub_83BF2C2C);
PPC_FUNC_IMPL(__imp__sub_83BF2C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2C30"))) PPC_WEAK_FUNC(sub_83BF2C30);
PPC_FUNC_IMPL(__imp__sub_83BF2C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8928
	ctx.r3.s64 = ctx.r11.s64 + -8928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2C3C"))) PPC_WEAK_FUNC(sub_83BF2C3C);
PPC_FUNC_IMPL(__imp__sub_83BF2C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2C40"))) PPC_WEAK_FUNC(sub_83BF2C40);
PPC_FUNC_IMPL(__imp__sub_83BF2C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8920
	ctx.r3.s64 = ctx.r11.s64 + -8920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2C4C"))) PPC_WEAK_FUNC(sub_83BF2C4C);
PPC_FUNC_IMPL(__imp__sub_83BF2C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2C50"))) PPC_WEAK_FUNC(sub_83BF2C50);
PPC_FUNC_IMPL(__imp__sub_83BF2C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8912
	ctx.r3.s64 = ctx.r11.s64 + -8912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2C5C"))) PPC_WEAK_FUNC(sub_83BF2C5C);
PPC_FUNC_IMPL(__imp__sub_83BF2C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2C60"))) PPC_WEAK_FUNC(sub_83BF2C60);
PPC_FUNC_IMPL(__imp__sub_83BF2C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8904
	ctx.r3.s64 = ctx.r11.s64 + -8904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2C6C"))) PPC_WEAK_FUNC(sub_83BF2C6C);
PPC_FUNC_IMPL(__imp__sub_83BF2C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2C70"))) PPC_WEAK_FUNC(sub_83BF2C70);
PPC_FUNC_IMPL(__imp__sub_83BF2C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8896
	ctx.r3.s64 = ctx.r11.s64 + -8896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2C7C"))) PPC_WEAK_FUNC(sub_83BF2C7C);
PPC_FUNC_IMPL(__imp__sub_83BF2C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2C80"))) PPC_WEAK_FUNC(sub_83BF2C80);
PPC_FUNC_IMPL(__imp__sub_83BF2C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8888
	ctx.r3.s64 = ctx.r11.s64 + -8888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2C8C"))) PPC_WEAK_FUNC(sub_83BF2C8C);
PPC_FUNC_IMPL(__imp__sub_83BF2C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2C90"))) PPC_WEAK_FUNC(sub_83BF2C90);
PPC_FUNC_IMPL(__imp__sub_83BF2C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8880
	ctx.r3.s64 = ctx.r11.s64 + -8880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2C9C"))) PPC_WEAK_FUNC(sub_83BF2C9C);
PPC_FUNC_IMPL(__imp__sub_83BF2C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2CA0"))) PPC_WEAK_FUNC(sub_83BF2CA0);
PPC_FUNC_IMPL(__imp__sub_83BF2CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8872
	ctx.r3.s64 = ctx.r11.s64 + -8872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2CAC"))) PPC_WEAK_FUNC(sub_83BF2CAC);
PPC_FUNC_IMPL(__imp__sub_83BF2CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2CB0"))) PPC_WEAK_FUNC(sub_83BF2CB0);
PPC_FUNC_IMPL(__imp__sub_83BF2CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8864
	ctx.r3.s64 = ctx.r11.s64 + -8864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2CBC"))) PPC_WEAK_FUNC(sub_83BF2CBC);
PPC_FUNC_IMPL(__imp__sub_83BF2CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2CC0"))) PPC_WEAK_FUNC(sub_83BF2CC0);
PPC_FUNC_IMPL(__imp__sub_83BF2CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8856
	ctx.r3.s64 = ctx.r11.s64 + -8856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2CCC"))) PPC_WEAK_FUNC(sub_83BF2CCC);
PPC_FUNC_IMPL(__imp__sub_83BF2CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2CD0"))) PPC_WEAK_FUNC(sub_83BF2CD0);
PPC_FUNC_IMPL(__imp__sub_83BF2CD0) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-11728
	ctx.r3.s64 = ctx.r11.s64 + -11728;
	// bl 0x83523120
	ctx.lr = 0x83BF2CE8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8848
	ctx.r3.s64 = ctx.r10.s64 + -8848;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF2CF4;
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

__attribute__((alias("__imp__sub_83BF2D04"))) PPC_WEAK_FUNC(sub_83BF2D04);
PPC_FUNC_IMPL(__imp__sub_83BF2D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2D08"))) PPC_WEAK_FUNC(sub_83BF2D08);
PPC_FUNC_IMPL(__imp__sub_83BF2D08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11712
	ctx.r7.s64 = ctx.r8.s64 + -11712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11712);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11712(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11712, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF2D30"))) PPC_WEAK_FUNC(sub_83BF2D30);
PPC_FUNC_IMPL(__imp__sub_83BF2D30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,1088
	ctx.r6.s64 = ctx.r7.s64 + 1088;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1016(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1016);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11712(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11712);
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
	// std r9,1088(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1088, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF2D78"))) PPC_WEAK_FUNC(sub_83BF2D78);
PPC_FUNC_IMPL(__imp__sub_83BF2D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8832
	ctx.r3.s64 = ctx.r11.s64 + -8832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2D84"))) PPC_WEAK_FUNC(sub_83BF2D84);
PPC_FUNC_IMPL(__imp__sub_83BF2D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2D88"))) PPC_WEAK_FUNC(sub_83BF2D88);
PPC_FUNC_IMPL(__imp__sub_83BF2D88) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-11704
	ctx.r3.s64 = ctx.r11.s64 + -11704;
	// bl 0x8259af80
	ctx.lr = 0x83BF2DA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8816
	ctx.r3.s64 = ctx.r10.s64 + -8816;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF2DAC;
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

__attribute__((alias("__imp__sub_83BF2DBC"))) PPC_WEAK_FUNC(sub_83BF2DBC);
PPC_FUNC_IMPL(__imp__sub_83BF2DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2DC0"))) PPC_WEAK_FUNC(sub_83BF2DC0);
PPC_FUNC_IMPL(__imp__sub_83BF2DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11724
	ctx.r11.s64 = ctx.r8.s64 + -11724;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,1064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1064);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8824
	ctx.r3.s64 = ctx.r6.s64 + -8824;
	// stw r10,-11724(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11724, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2DF0"))) PPC_WEAK_FUNC(sub_83BF2DF0);
PPC_FUNC_IMPL(__imp__sub_83BF2DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8808
	ctx.r3.s64 = ctx.r11.s64 + -8808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2DFC"))) PPC_WEAK_FUNC(sub_83BF2DFC);
PPC_FUNC_IMPL(__imp__sub_83BF2DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2E00"))) PPC_WEAK_FUNC(sub_83BF2E00);
PPC_FUNC_IMPL(__imp__sub_83BF2E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8800
	ctx.r3.s64 = ctx.r11.s64 + -8800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2E0C"))) PPC_WEAK_FUNC(sub_83BF2E0C);
PPC_FUNC_IMPL(__imp__sub_83BF2E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2E10"))) PPC_WEAK_FUNC(sub_83BF2E10);
PPC_FUNC_IMPL(__imp__sub_83BF2E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8792
	ctx.r3.s64 = ctx.r11.s64 + -8792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2E1C"))) PPC_WEAK_FUNC(sub_83BF2E1C);
PPC_FUNC_IMPL(__imp__sub_83BF2E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2E20"))) PPC_WEAK_FUNC(sub_83BF2E20);
PPC_FUNC_IMPL(__imp__sub_83BF2E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8784
	ctx.r3.s64 = ctx.r11.s64 + -8784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2E2C"))) PPC_WEAK_FUNC(sub_83BF2E2C);
PPC_FUNC_IMPL(__imp__sub_83BF2E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2E30"))) PPC_WEAK_FUNC(sub_83BF2E30);
PPC_FUNC_IMPL(__imp__sub_83BF2E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8776
	ctx.r3.s64 = ctx.r11.s64 + -8776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2E3C"))) PPC_WEAK_FUNC(sub_83BF2E3C);
PPC_FUNC_IMPL(__imp__sub_83BF2E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2E40"))) PPC_WEAK_FUNC(sub_83BF2E40);
PPC_FUNC_IMPL(__imp__sub_83BF2E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8768
	ctx.r3.s64 = ctx.r11.s64 + -8768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2E4C"))) PPC_WEAK_FUNC(sub_83BF2E4C);
PPC_FUNC_IMPL(__imp__sub_83BF2E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2E50"))) PPC_WEAK_FUNC(sub_83BF2E50);
PPC_FUNC_IMPL(__imp__sub_83BF2E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8760
	ctx.r3.s64 = ctx.r11.s64 + -8760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2E5C"))) PPC_WEAK_FUNC(sub_83BF2E5C);
PPC_FUNC_IMPL(__imp__sub_83BF2E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2E60"))) PPC_WEAK_FUNC(sub_83BF2E60);
PPC_FUNC_IMPL(__imp__sub_83BF2E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8752
	ctx.r3.s64 = ctx.r11.s64 + -8752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2E6C"))) PPC_WEAK_FUNC(sub_83BF2E6C);
PPC_FUNC_IMPL(__imp__sub_83BF2E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2E70"))) PPC_WEAK_FUNC(sub_83BF2E70);
PPC_FUNC_IMPL(__imp__sub_83BF2E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8744
	ctx.r3.s64 = ctx.r11.s64 + -8744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2E7C"))) PPC_WEAK_FUNC(sub_83BF2E7C);
PPC_FUNC_IMPL(__imp__sub_83BF2E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2E80"))) PPC_WEAK_FUNC(sub_83BF2E80);
PPC_FUNC_IMPL(__imp__sub_83BF2E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8736
	ctx.r3.s64 = ctx.r11.s64 + -8736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2E8C"))) PPC_WEAK_FUNC(sub_83BF2E8C);
PPC_FUNC_IMPL(__imp__sub_83BF2E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2E90"))) PPC_WEAK_FUNC(sub_83BF2E90);
PPC_FUNC_IMPL(__imp__sub_83BF2E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8728
	ctx.r3.s64 = ctx.r11.s64 + -8728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2E9C"))) PPC_WEAK_FUNC(sub_83BF2E9C);
PPC_FUNC_IMPL(__imp__sub_83BF2E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2EA0"))) PPC_WEAK_FUNC(sub_83BF2EA0);
PPC_FUNC_IMPL(__imp__sub_83BF2EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8720
	ctx.r3.s64 = ctx.r11.s64 + -8720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2EAC"))) PPC_WEAK_FUNC(sub_83BF2EAC);
PPC_FUNC_IMPL(__imp__sub_83BF2EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2EB0"))) PPC_WEAK_FUNC(sub_83BF2EB0);
PPC_FUNC_IMPL(__imp__sub_83BF2EB0) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-11360
	ctx.r3.s64 = ctx.r11.s64 + -11360;
	// bl 0x83523120
	ctx.lr = 0x83BF2EC8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8712
	ctx.r3.s64 = ctx.r10.s64 + -8712;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF2ED4;
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

__attribute__((alias("__imp__sub_83BF2EE4"))) PPC_WEAK_FUNC(sub_83BF2EE4);
PPC_FUNC_IMPL(__imp__sub_83BF2EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2EE8"))) PPC_WEAK_FUNC(sub_83BF2EE8);
PPC_FUNC_IMPL(__imp__sub_83BF2EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11344
	ctx.r7.s64 = ctx.r8.s64 + -11344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11344);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11344(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11344, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF2F10"))) PPC_WEAK_FUNC(sub_83BF2F10);
PPC_FUNC_IMPL(__imp__sub_83BF2F10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,1216
	ctx.r6.s64 = ctx.r7.s64 + 1216;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1144(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1144);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11344);
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
	// std r9,1216(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1216, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF2F58"))) PPC_WEAK_FUNC(sub_83BF2F58);
PPC_FUNC_IMPL(__imp__sub_83BF2F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8696
	ctx.r3.s64 = ctx.r11.s64 + -8696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2F64"))) PPC_WEAK_FUNC(sub_83BF2F64);
PPC_FUNC_IMPL(__imp__sub_83BF2F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2F68"))) PPC_WEAK_FUNC(sub_83BF2F68);
PPC_FUNC_IMPL(__imp__sub_83BF2F68) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-11336
	ctx.r3.s64 = ctx.r11.s64 + -11336;
	// bl 0x8259af80
	ctx.lr = 0x83BF2F80;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8680
	ctx.r3.s64 = ctx.r10.s64 + -8680;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF2F8C;
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

__attribute__((alias("__imp__sub_83BF2F9C"))) PPC_WEAK_FUNC(sub_83BF2F9C);
PPC_FUNC_IMPL(__imp__sub_83BF2F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2FA0"))) PPC_WEAK_FUNC(sub_83BF2FA0);
PPC_FUNC_IMPL(__imp__sub_83BF2FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11356
	ctx.r11.s64 = ctx.r8.s64 + -11356;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,1192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1192);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8688
	ctx.r3.s64 = ctx.r6.s64 + -8688;
	// stw r10,-11356(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11356, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2FD0"))) PPC_WEAK_FUNC(sub_83BF2FD0);
PPC_FUNC_IMPL(__imp__sub_83BF2FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8672
	ctx.r3.s64 = ctx.r11.s64 + -8672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2FDC"))) PPC_WEAK_FUNC(sub_83BF2FDC);
PPC_FUNC_IMPL(__imp__sub_83BF2FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2FE0"))) PPC_WEAK_FUNC(sub_83BF2FE0);
PPC_FUNC_IMPL(__imp__sub_83BF2FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8664
	ctx.r3.s64 = ctx.r11.s64 + -8664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2FEC"))) PPC_WEAK_FUNC(sub_83BF2FEC);
PPC_FUNC_IMPL(__imp__sub_83BF2FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF2FF0"))) PPC_WEAK_FUNC(sub_83BF2FF0);
PPC_FUNC_IMPL(__imp__sub_83BF2FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8656
	ctx.r3.s64 = ctx.r11.s64 + -8656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF2FFC"))) PPC_WEAK_FUNC(sub_83BF2FFC);
PPC_FUNC_IMPL(__imp__sub_83BF2FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3000"))) PPC_WEAK_FUNC(sub_83BF3000);
PPC_FUNC_IMPL(__imp__sub_83BF3000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8648
	ctx.r3.s64 = ctx.r11.s64 + -8648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF300C"))) PPC_WEAK_FUNC(sub_83BF300C);
PPC_FUNC_IMPL(__imp__sub_83BF300C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3010"))) PPC_WEAK_FUNC(sub_83BF3010);
PPC_FUNC_IMPL(__imp__sub_83BF3010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8640
	ctx.r3.s64 = ctx.r11.s64 + -8640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF301C"))) PPC_WEAK_FUNC(sub_83BF301C);
PPC_FUNC_IMPL(__imp__sub_83BF301C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3020"))) PPC_WEAK_FUNC(sub_83BF3020);
PPC_FUNC_IMPL(__imp__sub_83BF3020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8632
	ctx.r3.s64 = ctx.r11.s64 + -8632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF302C"))) PPC_WEAK_FUNC(sub_83BF302C);
PPC_FUNC_IMPL(__imp__sub_83BF302C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3030"))) PPC_WEAK_FUNC(sub_83BF3030);
PPC_FUNC_IMPL(__imp__sub_83BF3030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8624
	ctx.r3.s64 = ctx.r11.s64 + -8624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF303C"))) PPC_WEAK_FUNC(sub_83BF303C);
PPC_FUNC_IMPL(__imp__sub_83BF303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3040"))) PPC_WEAK_FUNC(sub_83BF3040);
PPC_FUNC_IMPL(__imp__sub_83BF3040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8616
	ctx.r3.s64 = ctx.r11.s64 + -8616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF304C"))) PPC_WEAK_FUNC(sub_83BF304C);
PPC_FUNC_IMPL(__imp__sub_83BF304C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3050"))) PPC_WEAK_FUNC(sub_83BF3050);
PPC_FUNC_IMPL(__imp__sub_83BF3050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8608
	ctx.r3.s64 = ctx.r11.s64 + -8608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF305C"))) PPC_WEAK_FUNC(sub_83BF305C);
PPC_FUNC_IMPL(__imp__sub_83BF305C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3060"))) PPC_WEAK_FUNC(sub_83BF3060);
PPC_FUNC_IMPL(__imp__sub_83BF3060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8600
	ctx.r3.s64 = ctx.r11.s64 + -8600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF306C"))) PPC_WEAK_FUNC(sub_83BF306C);
PPC_FUNC_IMPL(__imp__sub_83BF306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3070"))) PPC_WEAK_FUNC(sub_83BF3070);
PPC_FUNC_IMPL(__imp__sub_83BF3070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8592
	ctx.r3.s64 = ctx.r11.s64 + -8592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF307C"))) PPC_WEAK_FUNC(sub_83BF307C);
PPC_FUNC_IMPL(__imp__sub_83BF307C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3080"))) PPC_WEAK_FUNC(sub_83BF3080);
PPC_FUNC_IMPL(__imp__sub_83BF3080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8584
	ctx.r3.s64 = ctx.r11.s64 + -8584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF308C"))) PPC_WEAK_FUNC(sub_83BF308C);
PPC_FUNC_IMPL(__imp__sub_83BF308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3090"))) PPC_WEAK_FUNC(sub_83BF3090);
PPC_FUNC_IMPL(__imp__sub_83BF3090) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-10992
	ctx.r3.s64 = ctx.r11.s64 + -10992;
	// bl 0x83523120
	ctx.lr = 0x83BF30A8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8576
	ctx.r3.s64 = ctx.r10.s64 + -8576;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF30B4;
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

__attribute__((alias("__imp__sub_83BF30C4"))) PPC_WEAK_FUNC(sub_83BF30C4);
PPC_FUNC_IMPL(__imp__sub_83BF30C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF30C8"))) PPC_WEAK_FUNC(sub_83BF30C8);
PPC_FUNC_IMPL(__imp__sub_83BF30C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10976
	ctx.r7.s64 = ctx.r8.s64 + -10976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10976(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10976);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10976(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10976, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF30F0"))) PPC_WEAK_FUNC(sub_83BF30F0);
PPC_FUNC_IMPL(__imp__sub_83BF30F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,1352
	ctx.r6.s64 = ctx.r7.s64 + 1352;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1280(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1280);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10976(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10976);
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
	// std r9,1352(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1352, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF3138"))) PPC_WEAK_FUNC(sub_83BF3138);
PPC_FUNC_IMPL(__imp__sub_83BF3138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8560
	ctx.r3.s64 = ctx.r11.s64 + -8560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3144"))) PPC_WEAK_FUNC(sub_83BF3144);
PPC_FUNC_IMPL(__imp__sub_83BF3144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3148"))) PPC_WEAK_FUNC(sub_83BF3148);
PPC_FUNC_IMPL(__imp__sub_83BF3148) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-10968
	ctx.r3.s64 = ctx.r11.s64 + -10968;
	// bl 0x8259af80
	ctx.lr = 0x83BF3160;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8544
	ctx.r3.s64 = ctx.r10.s64 + -8544;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF316C;
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

__attribute__((alias("__imp__sub_83BF317C"))) PPC_WEAK_FUNC(sub_83BF317C);
PPC_FUNC_IMPL(__imp__sub_83BF317C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3180"))) PPC_WEAK_FUNC(sub_83BF3180);
PPC_FUNC_IMPL(__imp__sub_83BF3180) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10988
	ctx.r11.s64 = ctx.r8.s64 + -10988;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,1328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1328);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8552
	ctx.r3.s64 = ctx.r6.s64 + -8552;
	// stw r10,-10988(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10988, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF31B0"))) PPC_WEAK_FUNC(sub_83BF31B0);
PPC_FUNC_IMPL(__imp__sub_83BF31B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8536
	ctx.r3.s64 = ctx.r11.s64 + -8536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF31BC"))) PPC_WEAK_FUNC(sub_83BF31BC);
PPC_FUNC_IMPL(__imp__sub_83BF31BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF31C0"))) PPC_WEAK_FUNC(sub_83BF31C0);
PPC_FUNC_IMPL(__imp__sub_83BF31C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8528
	ctx.r3.s64 = ctx.r11.s64 + -8528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF31CC"))) PPC_WEAK_FUNC(sub_83BF31CC);
PPC_FUNC_IMPL(__imp__sub_83BF31CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF31D0"))) PPC_WEAK_FUNC(sub_83BF31D0);
PPC_FUNC_IMPL(__imp__sub_83BF31D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8520
	ctx.r3.s64 = ctx.r11.s64 + -8520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF31DC"))) PPC_WEAK_FUNC(sub_83BF31DC);
PPC_FUNC_IMPL(__imp__sub_83BF31DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF31E0"))) PPC_WEAK_FUNC(sub_83BF31E0);
PPC_FUNC_IMPL(__imp__sub_83BF31E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8512
	ctx.r3.s64 = ctx.r11.s64 + -8512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF31EC"))) PPC_WEAK_FUNC(sub_83BF31EC);
PPC_FUNC_IMPL(__imp__sub_83BF31EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF31F0"))) PPC_WEAK_FUNC(sub_83BF31F0);
PPC_FUNC_IMPL(__imp__sub_83BF31F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8504
	ctx.r3.s64 = ctx.r11.s64 + -8504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF31FC"))) PPC_WEAK_FUNC(sub_83BF31FC);
PPC_FUNC_IMPL(__imp__sub_83BF31FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3200"))) PPC_WEAK_FUNC(sub_83BF3200);
PPC_FUNC_IMPL(__imp__sub_83BF3200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8496
	ctx.r3.s64 = ctx.r11.s64 + -8496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF320C"))) PPC_WEAK_FUNC(sub_83BF320C);
PPC_FUNC_IMPL(__imp__sub_83BF320C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3210"))) PPC_WEAK_FUNC(sub_83BF3210);
PPC_FUNC_IMPL(__imp__sub_83BF3210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8488
	ctx.r3.s64 = ctx.r11.s64 + -8488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF321C"))) PPC_WEAK_FUNC(sub_83BF321C);
PPC_FUNC_IMPL(__imp__sub_83BF321C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3220"))) PPC_WEAK_FUNC(sub_83BF3220);
PPC_FUNC_IMPL(__imp__sub_83BF3220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8480
	ctx.r3.s64 = ctx.r11.s64 + -8480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF322C"))) PPC_WEAK_FUNC(sub_83BF322C);
PPC_FUNC_IMPL(__imp__sub_83BF322C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3230"))) PPC_WEAK_FUNC(sub_83BF3230);
PPC_FUNC_IMPL(__imp__sub_83BF3230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8472
	ctx.r3.s64 = ctx.r11.s64 + -8472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF323C"))) PPC_WEAK_FUNC(sub_83BF323C);
PPC_FUNC_IMPL(__imp__sub_83BF323C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3240"))) PPC_WEAK_FUNC(sub_83BF3240);
PPC_FUNC_IMPL(__imp__sub_83BF3240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8464
	ctx.r3.s64 = ctx.r11.s64 + -8464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

