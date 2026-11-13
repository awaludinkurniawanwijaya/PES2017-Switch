#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C2E200"))) PPC_WEAK_FUNC(sub_83C2E200);
PPC_FUNC_IMPL(__imp__sub_83C2E200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11400
	ctx.r3.s64 = ctx.r11.s64 + 11400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E20C"))) PPC_WEAK_FUNC(sub_83C2E20C);
PPC_FUNC_IMPL(__imp__sub_83C2E20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E210"))) PPC_WEAK_FUNC(sub_83C2E210);
PPC_FUNC_IMPL(__imp__sub_83C2E210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11408
	ctx.r3.s64 = ctx.r11.s64 + 11408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E21C"))) PPC_WEAK_FUNC(sub_83C2E21C);
PPC_FUNC_IMPL(__imp__sub_83C2E21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E220"))) PPC_WEAK_FUNC(sub_83C2E220);
PPC_FUNC_IMPL(__imp__sub_83C2E220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11416
	ctx.r3.s64 = ctx.r11.s64 + 11416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E22C"))) PPC_WEAK_FUNC(sub_83C2E22C);
PPC_FUNC_IMPL(__imp__sub_83C2E22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E230"))) PPC_WEAK_FUNC(sub_83C2E230);
PPC_FUNC_IMPL(__imp__sub_83C2E230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11424
	ctx.r3.s64 = ctx.r11.s64 + 11424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E23C"))) PPC_WEAK_FUNC(sub_83C2E23C);
PPC_FUNC_IMPL(__imp__sub_83C2E23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E240"))) PPC_WEAK_FUNC(sub_83C2E240);
PPC_FUNC_IMPL(__imp__sub_83C2E240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11432
	ctx.r3.s64 = ctx.r11.s64 + 11432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E24C"))) PPC_WEAK_FUNC(sub_83C2E24C);
PPC_FUNC_IMPL(__imp__sub_83C2E24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E250"))) PPC_WEAK_FUNC(sub_83C2E250);
PPC_FUNC_IMPL(__imp__sub_83C2E250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11440
	ctx.r3.s64 = ctx.r11.s64 + 11440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E25C"))) PPC_WEAK_FUNC(sub_83C2E25C);
PPC_FUNC_IMPL(__imp__sub_83C2E25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E260"))) PPC_WEAK_FUNC(sub_83C2E260);
PPC_FUNC_IMPL(__imp__sub_83C2E260) {
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
	// addi r3,r11,-120
	ctx.r3.s64 = ctx.r11.s64 + -120;
	// bl 0x83523120
	ctx.lr = 0x83C2E278;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,11448
	ctx.r3.s64 = ctx.r10.s64 + 11448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2E284;
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

__attribute__((alias("__imp__sub_83C2E294"))) PPC_WEAK_FUNC(sub_83C2E294);
PPC_FUNC_IMPL(__imp__sub_83C2E294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E298"))) PPC_WEAK_FUNC(sub_83C2E298);
PPC_FUNC_IMPL(__imp__sub_83C2E298) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-104
	ctx.r7.s64 = ctx.r8.s64 + -104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -104);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-104(r8)
	PPC_STORE_U32(ctx.r8.u32 + -104, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2E2C0"))) PPC_WEAK_FUNC(sub_83C2E2C0);
PPC_FUNC_IMPL(__imp__sub_83C2E2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,27376
	ctx.r6.s64 = ctx.r7.s64 + 27376;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27304(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27304);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -104);
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
	// std r9,27376(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27376, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2E308"))) PPC_WEAK_FUNC(sub_83C2E308);
PPC_FUNC_IMPL(__imp__sub_83C2E308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11464
	ctx.r3.s64 = ctx.r11.s64 + 11464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E314"))) PPC_WEAK_FUNC(sub_83C2E314);
PPC_FUNC_IMPL(__imp__sub_83C2E314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E318"))) PPC_WEAK_FUNC(sub_83C2E318);
PPC_FUNC_IMPL(__imp__sub_83C2E318) {
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
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// bl 0x8259af80
	ctx.lr = 0x83C2E330;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,11480
	ctx.r3.s64 = ctx.r10.s64 + 11480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2E33C;
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

__attribute__((alias("__imp__sub_83C2E34C"))) PPC_WEAK_FUNC(sub_83C2E34C);
PPC_FUNC_IMPL(__imp__sub_83C2E34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E350"))) PPC_WEAK_FUNC(sub_83C2E350);
PPC_FUNC_IMPL(__imp__sub_83C2E350) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-116
	ctx.r11.s64 = ctx.r8.s64 + -116;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,27352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27352);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11472
	ctx.r3.s64 = ctx.r6.s64 + 11472;
	// stw r10,-116(r8)
	PPC_STORE_U32(ctx.r8.u32 + -116, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E380"))) PPC_WEAK_FUNC(sub_83C2E380);
PPC_FUNC_IMPL(__imp__sub_83C2E380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E38C"))) PPC_WEAK_FUNC(sub_83C2E38C);
PPC_FUNC_IMPL(__imp__sub_83C2E38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E390"))) PPC_WEAK_FUNC(sub_83C2E390);
PPC_FUNC_IMPL(__imp__sub_83C2E390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11496
	ctx.r3.s64 = ctx.r11.s64 + 11496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E39C"))) PPC_WEAK_FUNC(sub_83C2E39C);
PPC_FUNC_IMPL(__imp__sub_83C2E39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E3A0"))) PPC_WEAK_FUNC(sub_83C2E3A0);
PPC_FUNC_IMPL(__imp__sub_83C2E3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11504
	ctx.r3.s64 = ctx.r11.s64 + 11504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E3AC"))) PPC_WEAK_FUNC(sub_83C2E3AC);
PPC_FUNC_IMPL(__imp__sub_83C2E3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E3B0"))) PPC_WEAK_FUNC(sub_83C2E3B0);
PPC_FUNC_IMPL(__imp__sub_83C2E3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11512
	ctx.r3.s64 = ctx.r11.s64 + 11512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E3BC"))) PPC_WEAK_FUNC(sub_83C2E3BC);
PPC_FUNC_IMPL(__imp__sub_83C2E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E3C0"))) PPC_WEAK_FUNC(sub_83C2E3C0);
PPC_FUNC_IMPL(__imp__sub_83C2E3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11520
	ctx.r3.s64 = ctx.r11.s64 + 11520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E3CC"))) PPC_WEAK_FUNC(sub_83C2E3CC);
PPC_FUNC_IMPL(__imp__sub_83C2E3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E3D0"))) PPC_WEAK_FUNC(sub_83C2E3D0);
PPC_FUNC_IMPL(__imp__sub_83C2E3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11528
	ctx.r3.s64 = ctx.r11.s64 + 11528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E3DC"))) PPC_WEAK_FUNC(sub_83C2E3DC);
PPC_FUNC_IMPL(__imp__sub_83C2E3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E3E0"))) PPC_WEAK_FUNC(sub_83C2E3E0);
PPC_FUNC_IMPL(__imp__sub_83C2E3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11536
	ctx.r3.s64 = ctx.r11.s64 + 11536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E3EC"))) PPC_WEAK_FUNC(sub_83C2E3EC);
PPC_FUNC_IMPL(__imp__sub_83C2E3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E3F0"))) PPC_WEAK_FUNC(sub_83C2E3F0);
PPC_FUNC_IMPL(__imp__sub_83C2E3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11544
	ctx.r3.s64 = ctx.r11.s64 + 11544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E3FC"))) PPC_WEAK_FUNC(sub_83C2E3FC);
PPC_FUNC_IMPL(__imp__sub_83C2E3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E400"))) PPC_WEAK_FUNC(sub_83C2E400);
PPC_FUNC_IMPL(__imp__sub_83C2E400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11552
	ctx.r3.s64 = ctx.r11.s64 + 11552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E40C"))) PPC_WEAK_FUNC(sub_83C2E40C);
PPC_FUNC_IMPL(__imp__sub_83C2E40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E410"))) PPC_WEAK_FUNC(sub_83C2E410);
PPC_FUNC_IMPL(__imp__sub_83C2E410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11560
	ctx.r3.s64 = ctx.r11.s64 + 11560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E41C"))) PPC_WEAK_FUNC(sub_83C2E41C);
PPC_FUNC_IMPL(__imp__sub_83C2E41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E420"))) PPC_WEAK_FUNC(sub_83C2E420);
PPC_FUNC_IMPL(__imp__sub_83C2E420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11568
	ctx.r3.s64 = ctx.r11.s64 + 11568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E42C"))) PPC_WEAK_FUNC(sub_83C2E42C);
PPC_FUNC_IMPL(__imp__sub_83C2E42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E430"))) PPC_WEAK_FUNC(sub_83C2E430);
PPC_FUNC_IMPL(__imp__sub_83C2E430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11576
	ctx.r3.s64 = ctx.r11.s64 + 11576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E43C"))) PPC_WEAK_FUNC(sub_83C2E43C);
PPC_FUNC_IMPL(__imp__sub_83C2E43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E440"))) PPC_WEAK_FUNC(sub_83C2E440);
PPC_FUNC_IMPL(__imp__sub_83C2E440) {
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
	// addi r3,r11,248
	ctx.r3.s64 = ctx.r11.s64 + 248;
	// bl 0x83523120
	ctx.lr = 0x83C2E458;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,11584
	ctx.r3.s64 = ctx.r10.s64 + 11584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2E464;
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

__attribute__((alias("__imp__sub_83C2E474"))) PPC_WEAK_FUNC(sub_83C2E474);
PPC_FUNC_IMPL(__imp__sub_83C2E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E478"))) PPC_WEAK_FUNC(sub_83C2E478);
PPC_FUNC_IMPL(__imp__sub_83C2E478) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,264
	ctx.r7.s64 = ctx.r8.s64 + 264;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 264);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 264, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2E4A0"))) PPC_WEAK_FUNC(sub_83C2E4A0);
PPC_FUNC_IMPL(__imp__sub_83C2E4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,27504
	ctx.r6.s64 = ctx.r7.s64 + 27504;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27432(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27432);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,264(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
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
	// std r9,27504(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27504, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2E4E8"))) PPC_WEAK_FUNC(sub_83C2E4E8);
PPC_FUNC_IMPL(__imp__sub_83C2E4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E4F4"))) PPC_WEAK_FUNC(sub_83C2E4F4);
PPC_FUNC_IMPL(__imp__sub_83C2E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E4F8"))) PPC_WEAK_FUNC(sub_83C2E4F8);
PPC_FUNC_IMPL(__imp__sub_83C2E4F8) {
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
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// bl 0x8259af80
	ctx.lr = 0x83C2E510;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,11616
	ctx.r3.s64 = ctx.r10.s64 + 11616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2E51C;
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

__attribute__((alias("__imp__sub_83C2E52C"))) PPC_WEAK_FUNC(sub_83C2E52C);
PPC_FUNC_IMPL(__imp__sub_83C2E52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E530"))) PPC_WEAK_FUNC(sub_83C2E530);
PPC_FUNC_IMPL(__imp__sub_83C2E530) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,252
	ctx.r11.s64 = ctx.r8.s64 + 252;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,27480(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27480);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11608
	ctx.r3.s64 = ctx.r6.s64 + 11608;
	// stw r10,252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 252, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E560"))) PPC_WEAK_FUNC(sub_83C2E560);
PPC_FUNC_IMPL(__imp__sub_83C2E560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11624
	ctx.r3.s64 = ctx.r11.s64 + 11624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E56C"))) PPC_WEAK_FUNC(sub_83C2E56C);
PPC_FUNC_IMPL(__imp__sub_83C2E56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E570"))) PPC_WEAK_FUNC(sub_83C2E570);
PPC_FUNC_IMPL(__imp__sub_83C2E570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E57C"))) PPC_WEAK_FUNC(sub_83C2E57C);
PPC_FUNC_IMPL(__imp__sub_83C2E57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E580"))) PPC_WEAK_FUNC(sub_83C2E580);
PPC_FUNC_IMPL(__imp__sub_83C2E580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11640
	ctx.r3.s64 = ctx.r11.s64 + 11640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E58C"))) PPC_WEAK_FUNC(sub_83C2E58C);
PPC_FUNC_IMPL(__imp__sub_83C2E58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E590"))) PPC_WEAK_FUNC(sub_83C2E590);
PPC_FUNC_IMPL(__imp__sub_83C2E590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11648
	ctx.r3.s64 = ctx.r11.s64 + 11648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E59C"))) PPC_WEAK_FUNC(sub_83C2E59C);
PPC_FUNC_IMPL(__imp__sub_83C2E59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E5A0"))) PPC_WEAK_FUNC(sub_83C2E5A0);
PPC_FUNC_IMPL(__imp__sub_83C2E5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11656
	ctx.r3.s64 = ctx.r11.s64 + 11656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E5AC"))) PPC_WEAK_FUNC(sub_83C2E5AC);
PPC_FUNC_IMPL(__imp__sub_83C2E5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E5B0"))) PPC_WEAK_FUNC(sub_83C2E5B0);
PPC_FUNC_IMPL(__imp__sub_83C2E5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11664
	ctx.r3.s64 = ctx.r11.s64 + 11664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E5BC"))) PPC_WEAK_FUNC(sub_83C2E5BC);
PPC_FUNC_IMPL(__imp__sub_83C2E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E5C0"))) PPC_WEAK_FUNC(sub_83C2E5C0);
PPC_FUNC_IMPL(__imp__sub_83C2E5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11672
	ctx.r3.s64 = ctx.r11.s64 + 11672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E5CC"))) PPC_WEAK_FUNC(sub_83C2E5CC);
PPC_FUNC_IMPL(__imp__sub_83C2E5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E5D0"))) PPC_WEAK_FUNC(sub_83C2E5D0);
PPC_FUNC_IMPL(__imp__sub_83C2E5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11680
	ctx.r3.s64 = ctx.r11.s64 + 11680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E5DC"))) PPC_WEAK_FUNC(sub_83C2E5DC);
PPC_FUNC_IMPL(__imp__sub_83C2E5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E5E0"))) PPC_WEAK_FUNC(sub_83C2E5E0);
PPC_FUNC_IMPL(__imp__sub_83C2E5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11688
	ctx.r3.s64 = ctx.r11.s64 + 11688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E5EC"))) PPC_WEAK_FUNC(sub_83C2E5EC);
PPC_FUNC_IMPL(__imp__sub_83C2E5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E5F0"))) PPC_WEAK_FUNC(sub_83C2E5F0);
PPC_FUNC_IMPL(__imp__sub_83C2E5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11696
	ctx.r3.s64 = ctx.r11.s64 + 11696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E5FC"))) PPC_WEAK_FUNC(sub_83C2E5FC);
PPC_FUNC_IMPL(__imp__sub_83C2E5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E600"))) PPC_WEAK_FUNC(sub_83C2E600);
PPC_FUNC_IMPL(__imp__sub_83C2E600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11704
	ctx.r3.s64 = ctx.r11.s64 + 11704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E60C"))) PPC_WEAK_FUNC(sub_83C2E60C);
PPC_FUNC_IMPL(__imp__sub_83C2E60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E610"))) PPC_WEAK_FUNC(sub_83C2E610);
PPC_FUNC_IMPL(__imp__sub_83C2E610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11712
	ctx.r3.s64 = ctx.r11.s64 + 11712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E61C"))) PPC_WEAK_FUNC(sub_83C2E61C);
PPC_FUNC_IMPL(__imp__sub_83C2E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E620"))) PPC_WEAK_FUNC(sub_83C2E620);
PPC_FUNC_IMPL(__imp__sub_83C2E620) {
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
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x83523120
	ctx.lr = 0x83C2E638;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,11720
	ctx.r3.s64 = ctx.r10.s64 + 11720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2E644;
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

__attribute__((alias("__imp__sub_83C2E654"))) PPC_WEAK_FUNC(sub_83C2E654);
PPC_FUNC_IMPL(__imp__sub_83C2E654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E658"))) PPC_WEAK_FUNC(sub_83C2E658);
PPC_FUNC_IMPL(__imp__sub_83C2E658) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,632
	ctx.r7.s64 = ctx.r8.s64 + 632;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,632(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 632);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 632, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2E680"))) PPC_WEAK_FUNC(sub_83C2E680);
PPC_FUNC_IMPL(__imp__sub_83C2E680) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,27632
	ctx.r6.s64 = ctx.r7.s64 + 27632;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27560(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27560);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,632(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 632);
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
	// std r9,27632(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27632, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2E6C8"))) PPC_WEAK_FUNC(sub_83C2E6C8);
PPC_FUNC_IMPL(__imp__sub_83C2E6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11736
	ctx.r3.s64 = ctx.r11.s64 + 11736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E6D4"))) PPC_WEAK_FUNC(sub_83C2E6D4);
PPC_FUNC_IMPL(__imp__sub_83C2E6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E6D8"))) PPC_WEAK_FUNC(sub_83C2E6D8);
PPC_FUNC_IMPL(__imp__sub_83C2E6D8) {
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
	// addi r3,r11,640
	ctx.r3.s64 = ctx.r11.s64 + 640;
	// bl 0x8259af80
	ctx.lr = 0x83C2E6F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,11752
	ctx.r3.s64 = ctx.r10.s64 + 11752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2E6FC;
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

__attribute__((alias("__imp__sub_83C2E70C"))) PPC_WEAK_FUNC(sub_83C2E70C);
PPC_FUNC_IMPL(__imp__sub_83C2E70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E710"))) PPC_WEAK_FUNC(sub_83C2E710);
PPC_FUNC_IMPL(__imp__sub_83C2E710) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,620
	ctx.r11.s64 = ctx.r8.s64 + 620;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,27608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27608);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11744
	ctx.r3.s64 = ctx.r6.s64 + 11744;
	// stw r10,620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 620, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E740"))) PPC_WEAK_FUNC(sub_83C2E740);
PPC_FUNC_IMPL(__imp__sub_83C2E740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11760
	ctx.r3.s64 = ctx.r11.s64 + 11760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E74C"))) PPC_WEAK_FUNC(sub_83C2E74C);
PPC_FUNC_IMPL(__imp__sub_83C2E74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E750"))) PPC_WEAK_FUNC(sub_83C2E750);
PPC_FUNC_IMPL(__imp__sub_83C2E750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11768
	ctx.r3.s64 = ctx.r11.s64 + 11768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E75C"))) PPC_WEAK_FUNC(sub_83C2E75C);
PPC_FUNC_IMPL(__imp__sub_83C2E75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E760"))) PPC_WEAK_FUNC(sub_83C2E760);
PPC_FUNC_IMPL(__imp__sub_83C2E760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11776
	ctx.r3.s64 = ctx.r11.s64 + 11776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E76C"))) PPC_WEAK_FUNC(sub_83C2E76C);
PPC_FUNC_IMPL(__imp__sub_83C2E76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E770"))) PPC_WEAK_FUNC(sub_83C2E770);
PPC_FUNC_IMPL(__imp__sub_83C2E770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11784
	ctx.r3.s64 = ctx.r11.s64 + 11784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E77C"))) PPC_WEAK_FUNC(sub_83C2E77C);
PPC_FUNC_IMPL(__imp__sub_83C2E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E780"))) PPC_WEAK_FUNC(sub_83C2E780);
PPC_FUNC_IMPL(__imp__sub_83C2E780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11792
	ctx.r3.s64 = ctx.r11.s64 + 11792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E78C"))) PPC_WEAK_FUNC(sub_83C2E78C);
PPC_FUNC_IMPL(__imp__sub_83C2E78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E790"))) PPC_WEAK_FUNC(sub_83C2E790);
PPC_FUNC_IMPL(__imp__sub_83C2E790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11800
	ctx.r3.s64 = ctx.r11.s64 + 11800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E79C"))) PPC_WEAK_FUNC(sub_83C2E79C);
PPC_FUNC_IMPL(__imp__sub_83C2E79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E7A0"))) PPC_WEAK_FUNC(sub_83C2E7A0);
PPC_FUNC_IMPL(__imp__sub_83C2E7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11808
	ctx.r3.s64 = ctx.r11.s64 + 11808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E7AC"))) PPC_WEAK_FUNC(sub_83C2E7AC);
PPC_FUNC_IMPL(__imp__sub_83C2E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E7B0"))) PPC_WEAK_FUNC(sub_83C2E7B0);
PPC_FUNC_IMPL(__imp__sub_83C2E7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11816
	ctx.r3.s64 = ctx.r11.s64 + 11816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E7BC"))) PPC_WEAK_FUNC(sub_83C2E7BC);
PPC_FUNC_IMPL(__imp__sub_83C2E7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E7C0"))) PPC_WEAK_FUNC(sub_83C2E7C0);
PPC_FUNC_IMPL(__imp__sub_83C2E7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11824
	ctx.r3.s64 = ctx.r11.s64 + 11824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E7CC"))) PPC_WEAK_FUNC(sub_83C2E7CC);
PPC_FUNC_IMPL(__imp__sub_83C2E7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E7D0"))) PPC_WEAK_FUNC(sub_83C2E7D0);
PPC_FUNC_IMPL(__imp__sub_83C2E7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11832
	ctx.r3.s64 = ctx.r11.s64 + 11832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E7DC"))) PPC_WEAK_FUNC(sub_83C2E7DC);
PPC_FUNC_IMPL(__imp__sub_83C2E7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E7E0"))) PPC_WEAK_FUNC(sub_83C2E7E0);
PPC_FUNC_IMPL(__imp__sub_83C2E7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11840
	ctx.r3.s64 = ctx.r11.s64 + 11840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E7EC"))) PPC_WEAK_FUNC(sub_83C2E7EC);
PPC_FUNC_IMPL(__imp__sub_83C2E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E7F0"))) PPC_WEAK_FUNC(sub_83C2E7F0);
PPC_FUNC_IMPL(__imp__sub_83C2E7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11848
	ctx.r3.s64 = ctx.r11.s64 + 11848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E7FC"))) PPC_WEAK_FUNC(sub_83C2E7FC);
PPC_FUNC_IMPL(__imp__sub_83C2E7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E800"))) PPC_WEAK_FUNC(sub_83C2E800);
PPC_FUNC_IMPL(__imp__sub_83C2E800) {
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
	// addi r3,r11,984
	ctx.r3.s64 = ctx.r11.s64 + 984;
	// bl 0x83523120
	ctx.lr = 0x83C2E818;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,11856
	ctx.r3.s64 = ctx.r10.s64 + 11856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2E824;
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

__attribute__((alias("__imp__sub_83C2E834"))) PPC_WEAK_FUNC(sub_83C2E834);
PPC_FUNC_IMPL(__imp__sub_83C2E834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E838"))) PPC_WEAK_FUNC(sub_83C2E838);
PPC_FUNC_IMPL(__imp__sub_83C2E838) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1000
	ctx.r7.s64 = ctx.r8.s64 + 1000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1000);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1000, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2E860"))) PPC_WEAK_FUNC(sub_83C2E860);
PPC_FUNC_IMPL(__imp__sub_83C2E860) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,27760
	ctx.r6.s64 = ctx.r7.s64 + 27760;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27688(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27688);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1000(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1000);
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
	// std r9,27760(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27760, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2E8A8"))) PPC_WEAK_FUNC(sub_83C2E8A8);
PPC_FUNC_IMPL(__imp__sub_83C2E8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11872
	ctx.r3.s64 = ctx.r11.s64 + 11872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E8B4"))) PPC_WEAK_FUNC(sub_83C2E8B4);
PPC_FUNC_IMPL(__imp__sub_83C2E8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E8B8"))) PPC_WEAK_FUNC(sub_83C2E8B8);
PPC_FUNC_IMPL(__imp__sub_83C2E8B8) {
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
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
	// bl 0x8259af80
	ctx.lr = 0x83C2E8D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,11888
	ctx.r3.s64 = ctx.r10.s64 + 11888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2E8DC;
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

__attribute__((alias("__imp__sub_83C2E8EC"))) PPC_WEAK_FUNC(sub_83C2E8EC);
PPC_FUNC_IMPL(__imp__sub_83C2E8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E8F0"))) PPC_WEAK_FUNC(sub_83C2E8F0);
PPC_FUNC_IMPL(__imp__sub_83C2E8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,988
	ctx.r11.s64 = ctx.r8.s64 + 988;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,27736(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27736);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11880
	ctx.r3.s64 = ctx.r6.s64 + 11880;
	// stw r10,988(r8)
	PPC_STORE_U32(ctx.r8.u32 + 988, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E920"))) PPC_WEAK_FUNC(sub_83C2E920);
PPC_FUNC_IMPL(__imp__sub_83C2E920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11896
	ctx.r3.s64 = ctx.r11.s64 + 11896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E92C"))) PPC_WEAK_FUNC(sub_83C2E92C);
PPC_FUNC_IMPL(__imp__sub_83C2E92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E930"))) PPC_WEAK_FUNC(sub_83C2E930);
PPC_FUNC_IMPL(__imp__sub_83C2E930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11904
	ctx.r3.s64 = ctx.r11.s64 + 11904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E93C"))) PPC_WEAK_FUNC(sub_83C2E93C);
PPC_FUNC_IMPL(__imp__sub_83C2E93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E940"))) PPC_WEAK_FUNC(sub_83C2E940);
PPC_FUNC_IMPL(__imp__sub_83C2E940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11912
	ctx.r3.s64 = ctx.r11.s64 + 11912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E94C"))) PPC_WEAK_FUNC(sub_83C2E94C);
PPC_FUNC_IMPL(__imp__sub_83C2E94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E950"))) PPC_WEAK_FUNC(sub_83C2E950);
PPC_FUNC_IMPL(__imp__sub_83C2E950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11920
	ctx.r3.s64 = ctx.r11.s64 + 11920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E95C"))) PPC_WEAK_FUNC(sub_83C2E95C);
PPC_FUNC_IMPL(__imp__sub_83C2E95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E960"))) PPC_WEAK_FUNC(sub_83C2E960);
PPC_FUNC_IMPL(__imp__sub_83C2E960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11928
	ctx.r3.s64 = ctx.r11.s64 + 11928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E96C"))) PPC_WEAK_FUNC(sub_83C2E96C);
PPC_FUNC_IMPL(__imp__sub_83C2E96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E970"))) PPC_WEAK_FUNC(sub_83C2E970);
PPC_FUNC_IMPL(__imp__sub_83C2E970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11936
	ctx.r3.s64 = ctx.r11.s64 + 11936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E97C"))) PPC_WEAK_FUNC(sub_83C2E97C);
PPC_FUNC_IMPL(__imp__sub_83C2E97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E980"))) PPC_WEAK_FUNC(sub_83C2E980);
PPC_FUNC_IMPL(__imp__sub_83C2E980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11944
	ctx.r3.s64 = ctx.r11.s64 + 11944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E98C"))) PPC_WEAK_FUNC(sub_83C2E98C);
PPC_FUNC_IMPL(__imp__sub_83C2E98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E990"))) PPC_WEAK_FUNC(sub_83C2E990);
PPC_FUNC_IMPL(__imp__sub_83C2E990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11952
	ctx.r3.s64 = ctx.r11.s64 + 11952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E99C"))) PPC_WEAK_FUNC(sub_83C2E99C);
PPC_FUNC_IMPL(__imp__sub_83C2E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E9A0"))) PPC_WEAK_FUNC(sub_83C2E9A0);
PPC_FUNC_IMPL(__imp__sub_83C2E9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11960
	ctx.r3.s64 = ctx.r11.s64 + 11960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E9AC"))) PPC_WEAK_FUNC(sub_83C2E9AC);
PPC_FUNC_IMPL(__imp__sub_83C2E9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E9B0"))) PPC_WEAK_FUNC(sub_83C2E9B0);
PPC_FUNC_IMPL(__imp__sub_83C2E9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11968
	ctx.r3.s64 = ctx.r11.s64 + 11968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E9BC"))) PPC_WEAK_FUNC(sub_83C2E9BC);
PPC_FUNC_IMPL(__imp__sub_83C2E9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E9C0"))) PPC_WEAK_FUNC(sub_83C2E9C0);
PPC_FUNC_IMPL(__imp__sub_83C2E9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11976
	ctx.r3.s64 = ctx.r11.s64 + 11976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E9CC"))) PPC_WEAK_FUNC(sub_83C2E9CC);
PPC_FUNC_IMPL(__imp__sub_83C2E9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E9D0"))) PPC_WEAK_FUNC(sub_83C2E9D0);
PPC_FUNC_IMPL(__imp__sub_83C2E9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,11984
	ctx.r3.s64 = ctx.r11.s64 + 11984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2E9DC"))) PPC_WEAK_FUNC(sub_83C2E9DC);
PPC_FUNC_IMPL(__imp__sub_83C2E9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2E9E0"))) PPC_WEAK_FUNC(sub_83C2E9E0);
PPC_FUNC_IMPL(__imp__sub_83C2E9E0) {
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
	// addi r3,r11,1352
	ctx.r3.s64 = ctx.r11.s64 + 1352;
	// bl 0x83523120
	ctx.lr = 0x83C2E9F8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,11992
	ctx.r3.s64 = ctx.r10.s64 + 11992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2EA04;
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

__attribute__((alias("__imp__sub_83C2EA14"))) PPC_WEAK_FUNC(sub_83C2EA14);
PPC_FUNC_IMPL(__imp__sub_83C2EA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EA18"))) PPC_WEAK_FUNC(sub_83C2EA18);
PPC_FUNC_IMPL(__imp__sub_83C2EA18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1368
	ctx.r7.s64 = ctx.r8.s64 + 1368;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1368(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1368);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1368, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2EA40"))) PPC_WEAK_FUNC(sub_83C2EA40);
PPC_FUNC_IMPL(__imp__sub_83C2EA40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,27888
	ctx.r6.s64 = ctx.r7.s64 + 27888;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27816(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27816);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1368(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1368);
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
	// std r9,27888(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27888, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2EA88"))) PPC_WEAK_FUNC(sub_83C2EA88);
PPC_FUNC_IMPL(__imp__sub_83C2EA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12008
	ctx.r3.s64 = ctx.r11.s64 + 12008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EA94"))) PPC_WEAK_FUNC(sub_83C2EA94);
PPC_FUNC_IMPL(__imp__sub_83C2EA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EA98"))) PPC_WEAK_FUNC(sub_83C2EA98);
PPC_FUNC_IMPL(__imp__sub_83C2EA98) {
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
	// addi r3,r11,1376
	ctx.r3.s64 = ctx.r11.s64 + 1376;
	// bl 0x8259af80
	ctx.lr = 0x83C2EAB0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,12024
	ctx.r3.s64 = ctx.r10.s64 + 12024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2EABC;
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

__attribute__((alias("__imp__sub_83C2EACC"))) PPC_WEAK_FUNC(sub_83C2EACC);
PPC_FUNC_IMPL(__imp__sub_83C2EACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EAD0"))) PPC_WEAK_FUNC(sub_83C2EAD0);
PPC_FUNC_IMPL(__imp__sub_83C2EAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1356
	ctx.r11.s64 = ctx.r8.s64 + 1356;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,27864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27864);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12016
	ctx.r3.s64 = ctx.r6.s64 + 12016;
	// stw r10,1356(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1356, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EB00"))) PPC_WEAK_FUNC(sub_83C2EB00);
PPC_FUNC_IMPL(__imp__sub_83C2EB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12032
	ctx.r3.s64 = ctx.r11.s64 + 12032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EB0C"))) PPC_WEAK_FUNC(sub_83C2EB0C);
PPC_FUNC_IMPL(__imp__sub_83C2EB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EB10"))) PPC_WEAK_FUNC(sub_83C2EB10);
PPC_FUNC_IMPL(__imp__sub_83C2EB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12040
	ctx.r3.s64 = ctx.r11.s64 + 12040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EB1C"))) PPC_WEAK_FUNC(sub_83C2EB1C);
PPC_FUNC_IMPL(__imp__sub_83C2EB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EB20"))) PPC_WEAK_FUNC(sub_83C2EB20);
PPC_FUNC_IMPL(__imp__sub_83C2EB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12048
	ctx.r3.s64 = ctx.r11.s64 + 12048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EB2C"))) PPC_WEAK_FUNC(sub_83C2EB2C);
PPC_FUNC_IMPL(__imp__sub_83C2EB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EB30"))) PPC_WEAK_FUNC(sub_83C2EB30);
PPC_FUNC_IMPL(__imp__sub_83C2EB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EB3C"))) PPC_WEAK_FUNC(sub_83C2EB3C);
PPC_FUNC_IMPL(__imp__sub_83C2EB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EB40"))) PPC_WEAK_FUNC(sub_83C2EB40);
PPC_FUNC_IMPL(__imp__sub_83C2EB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12064
	ctx.r3.s64 = ctx.r11.s64 + 12064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EB4C"))) PPC_WEAK_FUNC(sub_83C2EB4C);
PPC_FUNC_IMPL(__imp__sub_83C2EB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EB50"))) PPC_WEAK_FUNC(sub_83C2EB50);
PPC_FUNC_IMPL(__imp__sub_83C2EB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12072
	ctx.r3.s64 = ctx.r11.s64 + 12072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EB5C"))) PPC_WEAK_FUNC(sub_83C2EB5C);
PPC_FUNC_IMPL(__imp__sub_83C2EB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EB60"))) PPC_WEAK_FUNC(sub_83C2EB60);
PPC_FUNC_IMPL(__imp__sub_83C2EB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12080
	ctx.r3.s64 = ctx.r11.s64 + 12080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EB6C"))) PPC_WEAK_FUNC(sub_83C2EB6C);
PPC_FUNC_IMPL(__imp__sub_83C2EB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EB70"))) PPC_WEAK_FUNC(sub_83C2EB70);
PPC_FUNC_IMPL(__imp__sub_83C2EB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12088
	ctx.r3.s64 = ctx.r11.s64 + 12088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EB7C"))) PPC_WEAK_FUNC(sub_83C2EB7C);
PPC_FUNC_IMPL(__imp__sub_83C2EB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EB80"))) PPC_WEAK_FUNC(sub_83C2EB80);
PPC_FUNC_IMPL(__imp__sub_83C2EB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12096
	ctx.r3.s64 = ctx.r11.s64 + 12096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EB8C"))) PPC_WEAK_FUNC(sub_83C2EB8C);
PPC_FUNC_IMPL(__imp__sub_83C2EB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EB90"))) PPC_WEAK_FUNC(sub_83C2EB90);
PPC_FUNC_IMPL(__imp__sub_83C2EB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12104
	ctx.r3.s64 = ctx.r11.s64 + 12104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EB9C"))) PPC_WEAK_FUNC(sub_83C2EB9C);
PPC_FUNC_IMPL(__imp__sub_83C2EB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EBA0"))) PPC_WEAK_FUNC(sub_83C2EBA0);
PPC_FUNC_IMPL(__imp__sub_83C2EBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12112
	ctx.r3.s64 = ctx.r11.s64 + 12112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EBAC"))) PPC_WEAK_FUNC(sub_83C2EBAC);
PPC_FUNC_IMPL(__imp__sub_83C2EBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EBB0"))) PPC_WEAK_FUNC(sub_83C2EBB0);
PPC_FUNC_IMPL(__imp__sub_83C2EBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12120
	ctx.r3.s64 = ctx.r11.s64 + 12120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EBBC"))) PPC_WEAK_FUNC(sub_83C2EBBC);
PPC_FUNC_IMPL(__imp__sub_83C2EBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EBC0"))) PPC_WEAK_FUNC(sub_83C2EBC0);
PPC_FUNC_IMPL(__imp__sub_83C2EBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12128
	ctx.r3.s64 = ctx.r11.s64 + 12128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EBCC"))) PPC_WEAK_FUNC(sub_83C2EBCC);
PPC_FUNC_IMPL(__imp__sub_83C2EBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EBD0"))) PPC_WEAK_FUNC(sub_83C2EBD0);
PPC_FUNC_IMPL(__imp__sub_83C2EBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12136
	ctx.r3.s64 = ctx.r11.s64 + 12136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EBDC"))) PPC_WEAK_FUNC(sub_83C2EBDC);
PPC_FUNC_IMPL(__imp__sub_83C2EBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EBE0"))) PPC_WEAK_FUNC(sub_83C2EBE0);
PPC_FUNC_IMPL(__imp__sub_83C2EBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12144
	ctx.r3.s64 = ctx.r11.s64 + 12144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EBEC"))) PPC_WEAK_FUNC(sub_83C2EBEC);
PPC_FUNC_IMPL(__imp__sub_83C2EBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EBF0"))) PPC_WEAK_FUNC(sub_83C2EBF0);
PPC_FUNC_IMPL(__imp__sub_83C2EBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12152
	ctx.r3.s64 = ctx.r11.s64 + 12152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EBFC"))) PPC_WEAK_FUNC(sub_83C2EBFC);
PPC_FUNC_IMPL(__imp__sub_83C2EBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EC00"))) PPC_WEAK_FUNC(sub_83C2EC00);
PPC_FUNC_IMPL(__imp__sub_83C2EC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12160
	ctx.r3.s64 = ctx.r11.s64 + 12160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EC0C"))) PPC_WEAK_FUNC(sub_83C2EC0C);
PPC_FUNC_IMPL(__imp__sub_83C2EC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EC10"))) PPC_WEAK_FUNC(sub_83C2EC10);
PPC_FUNC_IMPL(__imp__sub_83C2EC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12168
	ctx.r3.s64 = ctx.r11.s64 + 12168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EC1C"))) PPC_WEAK_FUNC(sub_83C2EC1C);
PPC_FUNC_IMPL(__imp__sub_83C2EC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EC20"))) PPC_WEAK_FUNC(sub_83C2EC20);
PPC_FUNC_IMPL(__imp__sub_83C2EC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12176
	ctx.r3.s64 = ctx.r11.s64 + 12176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EC2C"))) PPC_WEAK_FUNC(sub_83C2EC2C);
PPC_FUNC_IMPL(__imp__sub_83C2EC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EC30"))) PPC_WEAK_FUNC(sub_83C2EC30);
PPC_FUNC_IMPL(__imp__sub_83C2EC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12184
	ctx.r3.s64 = ctx.r11.s64 + 12184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EC3C"))) PPC_WEAK_FUNC(sub_83C2EC3C);
PPC_FUNC_IMPL(__imp__sub_83C2EC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EC40"))) PPC_WEAK_FUNC(sub_83C2EC40);
PPC_FUNC_IMPL(__imp__sub_83C2EC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12192
	ctx.r3.s64 = ctx.r11.s64 + 12192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EC4C"))) PPC_WEAK_FUNC(sub_83C2EC4C);
PPC_FUNC_IMPL(__imp__sub_83C2EC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EC50"))) PPC_WEAK_FUNC(sub_83C2EC50);
PPC_FUNC_IMPL(__imp__sub_83C2EC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12200
	ctx.r3.s64 = ctx.r11.s64 + 12200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EC5C"))) PPC_WEAK_FUNC(sub_83C2EC5C);
PPC_FUNC_IMPL(__imp__sub_83C2EC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EC60"))) PPC_WEAK_FUNC(sub_83C2EC60);
PPC_FUNC_IMPL(__imp__sub_83C2EC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12208
	ctx.r3.s64 = ctx.r11.s64 + 12208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EC6C"))) PPC_WEAK_FUNC(sub_83C2EC6C);
PPC_FUNC_IMPL(__imp__sub_83C2EC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EC70"))) PPC_WEAK_FUNC(sub_83C2EC70);
PPC_FUNC_IMPL(__imp__sub_83C2EC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12216
	ctx.r3.s64 = ctx.r11.s64 + 12216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EC7C"))) PPC_WEAK_FUNC(sub_83C2EC7C);
PPC_FUNC_IMPL(__imp__sub_83C2EC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EC80"))) PPC_WEAK_FUNC(sub_83C2EC80);
PPC_FUNC_IMPL(__imp__sub_83C2EC80) {
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
	// addi r3,r11,1728
	ctx.r3.s64 = ctx.r11.s64 + 1728;
	// bl 0x83523120
	ctx.lr = 0x83C2EC98;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,12224
	ctx.r3.s64 = ctx.r10.s64 + 12224;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2ECA4;
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

__attribute__((alias("__imp__sub_83C2ECB4"))) PPC_WEAK_FUNC(sub_83C2ECB4);
PPC_FUNC_IMPL(__imp__sub_83C2ECB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2ECB8"))) PPC_WEAK_FUNC(sub_83C2ECB8);
PPC_FUNC_IMPL(__imp__sub_83C2ECB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1744
	ctx.r7.s64 = ctx.r8.s64 + 1744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1744);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1744(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1744, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2ECE0"))) PPC_WEAK_FUNC(sub_83C2ECE0);
PPC_FUNC_IMPL(__imp__sub_83C2ECE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,28808
	ctx.r6.s64 = ctx.r7.s64 + 28808;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28736(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28736);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1744(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
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
	// std r9,28808(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28808, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2ED28"))) PPC_WEAK_FUNC(sub_83C2ED28);
PPC_FUNC_IMPL(__imp__sub_83C2ED28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12240
	ctx.r3.s64 = ctx.r11.s64 + 12240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2ED34"))) PPC_WEAK_FUNC(sub_83C2ED34);
PPC_FUNC_IMPL(__imp__sub_83C2ED34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2ED38"))) PPC_WEAK_FUNC(sub_83C2ED38);
PPC_FUNC_IMPL(__imp__sub_83C2ED38) {
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
	// addi r3,r11,1752
	ctx.r3.s64 = ctx.r11.s64 + 1752;
	// bl 0x8259af80
	ctx.lr = 0x83C2ED50;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,12256
	ctx.r3.s64 = ctx.r10.s64 + 12256;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2ED5C;
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

__attribute__((alias("__imp__sub_83C2ED6C"))) PPC_WEAK_FUNC(sub_83C2ED6C);
PPC_FUNC_IMPL(__imp__sub_83C2ED6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2ED70"))) PPC_WEAK_FUNC(sub_83C2ED70);
PPC_FUNC_IMPL(__imp__sub_83C2ED70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1732
	ctx.r11.s64 = ctx.r8.s64 + 1732;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,28784(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28784);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12248
	ctx.r3.s64 = ctx.r6.s64 + 12248;
	// stw r10,1732(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1732, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EDA0"))) PPC_WEAK_FUNC(sub_83C2EDA0);
PPC_FUNC_IMPL(__imp__sub_83C2EDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12264
	ctx.r3.s64 = ctx.r11.s64 + 12264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EDAC"))) PPC_WEAK_FUNC(sub_83C2EDAC);
PPC_FUNC_IMPL(__imp__sub_83C2EDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EDB0"))) PPC_WEAK_FUNC(sub_83C2EDB0);
PPC_FUNC_IMPL(__imp__sub_83C2EDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12272
	ctx.r3.s64 = ctx.r11.s64 + 12272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EDBC"))) PPC_WEAK_FUNC(sub_83C2EDBC);
PPC_FUNC_IMPL(__imp__sub_83C2EDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EDC0"))) PPC_WEAK_FUNC(sub_83C2EDC0);
PPC_FUNC_IMPL(__imp__sub_83C2EDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12280
	ctx.r3.s64 = ctx.r11.s64 + 12280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EDCC"))) PPC_WEAK_FUNC(sub_83C2EDCC);
PPC_FUNC_IMPL(__imp__sub_83C2EDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EDD0"))) PPC_WEAK_FUNC(sub_83C2EDD0);
PPC_FUNC_IMPL(__imp__sub_83C2EDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12288
	ctx.r3.s64 = ctx.r11.s64 + 12288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EDDC"))) PPC_WEAK_FUNC(sub_83C2EDDC);
PPC_FUNC_IMPL(__imp__sub_83C2EDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EDE0"))) PPC_WEAK_FUNC(sub_83C2EDE0);
PPC_FUNC_IMPL(__imp__sub_83C2EDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12296
	ctx.r3.s64 = ctx.r11.s64 + 12296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EDEC"))) PPC_WEAK_FUNC(sub_83C2EDEC);
PPC_FUNC_IMPL(__imp__sub_83C2EDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EDF0"))) PPC_WEAK_FUNC(sub_83C2EDF0);
PPC_FUNC_IMPL(__imp__sub_83C2EDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12304
	ctx.r3.s64 = ctx.r11.s64 + 12304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EDFC"))) PPC_WEAK_FUNC(sub_83C2EDFC);
PPC_FUNC_IMPL(__imp__sub_83C2EDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EE00"))) PPC_WEAK_FUNC(sub_83C2EE00);
PPC_FUNC_IMPL(__imp__sub_83C2EE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12312
	ctx.r3.s64 = ctx.r11.s64 + 12312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EE0C"))) PPC_WEAK_FUNC(sub_83C2EE0C);
PPC_FUNC_IMPL(__imp__sub_83C2EE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EE10"))) PPC_WEAK_FUNC(sub_83C2EE10);
PPC_FUNC_IMPL(__imp__sub_83C2EE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12320
	ctx.r3.s64 = ctx.r11.s64 + 12320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EE1C"))) PPC_WEAK_FUNC(sub_83C2EE1C);
PPC_FUNC_IMPL(__imp__sub_83C2EE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EE20"))) PPC_WEAK_FUNC(sub_83C2EE20);
PPC_FUNC_IMPL(__imp__sub_83C2EE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12328
	ctx.r3.s64 = ctx.r11.s64 + 12328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EE2C"))) PPC_WEAK_FUNC(sub_83C2EE2C);
PPC_FUNC_IMPL(__imp__sub_83C2EE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EE30"))) PPC_WEAK_FUNC(sub_83C2EE30);
PPC_FUNC_IMPL(__imp__sub_83C2EE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12336
	ctx.r3.s64 = ctx.r11.s64 + 12336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EE3C"))) PPC_WEAK_FUNC(sub_83C2EE3C);
PPC_FUNC_IMPL(__imp__sub_83C2EE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EE40"))) PPC_WEAK_FUNC(sub_83C2EE40);
PPC_FUNC_IMPL(__imp__sub_83C2EE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12344
	ctx.r3.s64 = ctx.r11.s64 + 12344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EE4C"))) PPC_WEAK_FUNC(sub_83C2EE4C);
PPC_FUNC_IMPL(__imp__sub_83C2EE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EE50"))) PPC_WEAK_FUNC(sub_83C2EE50);
PPC_FUNC_IMPL(__imp__sub_83C2EE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12352
	ctx.r3.s64 = ctx.r11.s64 + 12352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EE5C"))) PPC_WEAK_FUNC(sub_83C2EE5C);
PPC_FUNC_IMPL(__imp__sub_83C2EE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EE60"))) PPC_WEAK_FUNC(sub_83C2EE60);
PPC_FUNC_IMPL(__imp__sub_83C2EE60) {
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
	// addi r3,r11,2096
	ctx.r3.s64 = ctx.r11.s64 + 2096;
	// bl 0x83523120
	ctx.lr = 0x83C2EE78;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,12360
	ctx.r3.s64 = ctx.r10.s64 + 12360;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2EE84;
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

__attribute__((alias("__imp__sub_83C2EE94"))) PPC_WEAK_FUNC(sub_83C2EE94);
PPC_FUNC_IMPL(__imp__sub_83C2EE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EE98"))) PPC_WEAK_FUNC(sub_83C2EE98);
PPC_FUNC_IMPL(__imp__sub_83C2EE98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2112
	ctx.r7.s64 = ctx.r8.s64 + 2112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2112);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2112, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2EEC0"))) PPC_WEAK_FUNC(sub_83C2EEC0);
PPC_FUNC_IMPL(__imp__sub_83C2EEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,28936
	ctx.r6.s64 = ctx.r7.s64 + 28936;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28864(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28864);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
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
	// std r9,28936(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28936, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2EF08"))) PPC_WEAK_FUNC(sub_83C2EF08);
PPC_FUNC_IMPL(__imp__sub_83C2EF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12376
	ctx.r3.s64 = ctx.r11.s64 + 12376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EF14"))) PPC_WEAK_FUNC(sub_83C2EF14);
PPC_FUNC_IMPL(__imp__sub_83C2EF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EF18"))) PPC_WEAK_FUNC(sub_83C2EF18);
PPC_FUNC_IMPL(__imp__sub_83C2EF18) {
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
	// addi r3,r11,2120
	ctx.r3.s64 = ctx.r11.s64 + 2120;
	// bl 0x8259af80
	ctx.lr = 0x83C2EF30;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,12392
	ctx.r3.s64 = ctx.r10.s64 + 12392;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2EF3C;
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

__attribute__((alias("__imp__sub_83C2EF4C"))) PPC_WEAK_FUNC(sub_83C2EF4C);
PPC_FUNC_IMPL(__imp__sub_83C2EF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EF50"))) PPC_WEAK_FUNC(sub_83C2EF50);
PPC_FUNC_IMPL(__imp__sub_83C2EF50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2100
	ctx.r11.s64 = ctx.r8.s64 + 2100;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,28912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28912);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12384
	ctx.r3.s64 = ctx.r6.s64 + 12384;
	// stw r10,2100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2100, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EF80"))) PPC_WEAK_FUNC(sub_83C2EF80);
PPC_FUNC_IMPL(__imp__sub_83C2EF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12400
	ctx.r3.s64 = ctx.r11.s64 + 12400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EF8C"))) PPC_WEAK_FUNC(sub_83C2EF8C);
PPC_FUNC_IMPL(__imp__sub_83C2EF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EF90"))) PPC_WEAK_FUNC(sub_83C2EF90);
PPC_FUNC_IMPL(__imp__sub_83C2EF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12408
	ctx.r3.s64 = ctx.r11.s64 + 12408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EF9C"))) PPC_WEAK_FUNC(sub_83C2EF9C);
PPC_FUNC_IMPL(__imp__sub_83C2EF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EFA0"))) PPC_WEAK_FUNC(sub_83C2EFA0);
PPC_FUNC_IMPL(__imp__sub_83C2EFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12416
	ctx.r3.s64 = ctx.r11.s64 + 12416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EFAC"))) PPC_WEAK_FUNC(sub_83C2EFAC);
PPC_FUNC_IMPL(__imp__sub_83C2EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EFB0"))) PPC_WEAK_FUNC(sub_83C2EFB0);
PPC_FUNC_IMPL(__imp__sub_83C2EFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12424
	ctx.r3.s64 = ctx.r11.s64 + 12424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EFBC"))) PPC_WEAK_FUNC(sub_83C2EFBC);
PPC_FUNC_IMPL(__imp__sub_83C2EFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EFC0"))) PPC_WEAK_FUNC(sub_83C2EFC0);
PPC_FUNC_IMPL(__imp__sub_83C2EFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12432
	ctx.r3.s64 = ctx.r11.s64 + 12432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EFCC"))) PPC_WEAK_FUNC(sub_83C2EFCC);
PPC_FUNC_IMPL(__imp__sub_83C2EFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EFD0"))) PPC_WEAK_FUNC(sub_83C2EFD0);
PPC_FUNC_IMPL(__imp__sub_83C2EFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12440
	ctx.r3.s64 = ctx.r11.s64 + 12440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2EFDC"))) PPC_WEAK_FUNC(sub_83C2EFDC);
PPC_FUNC_IMPL(__imp__sub_83C2EFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2EFE0"))) PPC_WEAK_FUNC(sub_83C2EFE0);
PPC_FUNC_IMPL(__imp__sub_83C2EFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,12448
	ctx.r3.s64 = ctx.r11.s64 + 12448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

