#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BF324C"))) PPC_WEAK_FUNC(sub_83BF324C);
PPC_FUNC_IMPL(__imp__sub_83BF324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3250"))) PPC_WEAK_FUNC(sub_83BF3250);
PPC_FUNC_IMPL(__imp__sub_83BF3250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8456
	ctx.r3.s64 = ctx.r11.s64 + -8456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF325C"))) PPC_WEAK_FUNC(sub_83BF325C);
PPC_FUNC_IMPL(__imp__sub_83BF325C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3260"))) PPC_WEAK_FUNC(sub_83BF3260);
PPC_FUNC_IMPL(__imp__sub_83BF3260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8448
	ctx.r3.s64 = ctx.r11.s64 + -8448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF326C"))) PPC_WEAK_FUNC(sub_83BF326C);
PPC_FUNC_IMPL(__imp__sub_83BF326C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3270"))) PPC_WEAK_FUNC(sub_83BF3270);
PPC_FUNC_IMPL(__imp__sub_83BF3270) {
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
	// addi r3,r11,-10624
	ctx.r3.s64 = ctx.r11.s64 + -10624;
	// bl 0x83523120
	ctx.lr = 0x83BF3288;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8440
	ctx.r3.s64 = ctx.r10.s64 + -8440;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF3294;
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

__attribute__((alias("__imp__sub_83BF32A4"))) PPC_WEAK_FUNC(sub_83BF32A4);
PPC_FUNC_IMPL(__imp__sub_83BF32A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF32A8"))) PPC_WEAK_FUNC(sub_83BF32A8);
PPC_FUNC_IMPL(__imp__sub_83BF32A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10608
	ctx.r7.s64 = ctx.r8.s64 + -10608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10608(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF32D0"))) PPC_WEAK_FUNC(sub_83BF32D0);
PPC_FUNC_IMPL(__imp__sub_83BF32D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,1480
	ctx.r6.s64 = ctx.r7.s64 + 1480;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1408(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1408);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10608(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10608);
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
	// std r9,1480(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1480, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF3318"))) PPC_WEAK_FUNC(sub_83BF3318);
PPC_FUNC_IMPL(__imp__sub_83BF3318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8424
	ctx.r3.s64 = ctx.r11.s64 + -8424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3324"))) PPC_WEAK_FUNC(sub_83BF3324);
PPC_FUNC_IMPL(__imp__sub_83BF3324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3328"))) PPC_WEAK_FUNC(sub_83BF3328);
PPC_FUNC_IMPL(__imp__sub_83BF3328) {
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
	// addi r3,r11,-10600
	ctx.r3.s64 = ctx.r11.s64 + -10600;
	// bl 0x8259af80
	ctx.lr = 0x83BF3340;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8408
	ctx.r3.s64 = ctx.r10.s64 + -8408;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF334C;
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

__attribute__((alias("__imp__sub_83BF335C"))) PPC_WEAK_FUNC(sub_83BF335C);
PPC_FUNC_IMPL(__imp__sub_83BF335C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3360"))) PPC_WEAK_FUNC(sub_83BF3360);
PPC_FUNC_IMPL(__imp__sub_83BF3360) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10620
	ctx.r11.s64 = ctx.r8.s64 + -10620;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,1456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8416
	ctx.r3.s64 = ctx.r6.s64 + -8416;
	// stw r10,-10620(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10620, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3390"))) PPC_WEAK_FUNC(sub_83BF3390);
PPC_FUNC_IMPL(__imp__sub_83BF3390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8400
	ctx.r3.s64 = ctx.r11.s64 + -8400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF339C"))) PPC_WEAK_FUNC(sub_83BF339C);
PPC_FUNC_IMPL(__imp__sub_83BF339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF33A0"))) PPC_WEAK_FUNC(sub_83BF33A0);
PPC_FUNC_IMPL(__imp__sub_83BF33A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8392
	ctx.r3.s64 = ctx.r11.s64 + -8392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF33AC"))) PPC_WEAK_FUNC(sub_83BF33AC);
PPC_FUNC_IMPL(__imp__sub_83BF33AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF33B0"))) PPC_WEAK_FUNC(sub_83BF33B0);
PPC_FUNC_IMPL(__imp__sub_83BF33B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8384
	ctx.r3.s64 = ctx.r11.s64 + -8384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF33BC"))) PPC_WEAK_FUNC(sub_83BF33BC);
PPC_FUNC_IMPL(__imp__sub_83BF33BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF33C0"))) PPC_WEAK_FUNC(sub_83BF33C0);
PPC_FUNC_IMPL(__imp__sub_83BF33C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8376
	ctx.r3.s64 = ctx.r11.s64 + -8376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF33CC"))) PPC_WEAK_FUNC(sub_83BF33CC);
PPC_FUNC_IMPL(__imp__sub_83BF33CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF33D0"))) PPC_WEAK_FUNC(sub_83BF33D0);
PPC_FUNC_IMPL(__imp__sub_83BF33D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8368
	ctx.r3.s64 = ctx.r11.s64 + -8368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF33DC"))) PPC_WEAK_FUNC(sub_83BF33DC);
PPC_FUNC_IMPL(__imp__sub_83BF33DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF33E0"))) PPC_WEAK_FUNC(sub_83BF33E0);
PPC_FUNC_IMPL(__imp__sub_83BF33E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8360
	ctx.r3.s64 = ctx.r11.s64 + -8360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF33EC"))) PPC_WEAK_FUNC(sub_83BF33EC);
PPC_FUNC_IMPL(__imp__sub_83BF33EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF33F0"))) PPC_WEAK_FUNC(sub_83BF33F0);
PPC_FUNC_IMPL(__imp__sub_83BF33F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8352
	ctx.r3.s64 = ctx.r11.s64 + -8352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF33FC"))) PPC_WEAK_FUNC(sub_83BF33FC);
PPC_FUNC_IMPL(__imp__sub_83BF33FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3400"))) PPC_WEAK_FUNC(sub_83BF3400);
PPC_FUNC_IMPL(__imp__sub_83BF3400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8344
	ctx.r3.s64 = ctx.r11.s64 + -8344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF340C"))) PPC_WEAK_FUNC(sub_83BF340C);
PPC_FUNC_IMPL(__imp__sub_83BF340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3410"))) PPC_WEAK_FUNC(sub_83BF3410);
PPC_FUNC_IMPL(__imp__sub_83BF3410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8336
	ctx.r3.s64 = ctx.r11.s64 + -8336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF341C"))) PPC_WEAK_FUNC(sub_83BF341C);
PPC_FUNC_IMPL(__imp__sub_83BF341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3420"))) PPC_WEAK_FUNC(sub_83BF3420);
PPC_FUNC_IMPL(__imp__sub_83BF3420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8328
	ctx.r3.s64 = ctx.r11.s64 + -8328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF342C"))) PPC_WEAK_FUNC(sub_83BF342C);
PPC_FUNC_IMPL(__imp__sub_83BF342C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3430"))) PPC_WEAK_FUNC(sub_83BF3430);
PPC_FUNC_IMPL(__imp__sub_83BF3430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8320
	ctx.r3.s64 = ctx.r11.s64 + -8320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF343C"))) PPC_WEAK_FUNC(sub_83BF343C);
PPC_FUNC_IMPL(__imp__sub_83BF343C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3440"))) PPC_WEAK_FUNC(sub_83BF3440);
PPC_FUNC_IMPL(__imp__sub_83BF3440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8312
	ctx.r3.s64 = ctx.r11.s64 + -8312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF344C"))) PPC_WEAK_FUNC(sub_83BF344C);
PPC_FUNC_IMPL(__imp__sub_83BF344C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3450"))) PPC_WEAK_FUNC(sub_83BF3450);
PPC_FUNC_IMPL(__imp__sub_83BF3450) {
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
	// addi r3,r11,-10256
	ctx.r3.s64 = ctx.r11.s64 + -10256;
	// bl 0x83523120
	ctx.lr = 0x83BF3468;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8304
	ctx.r3.s64 = ctx.r10.s64 + -8304;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF3474;
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

__attribute__((alias("__imp__sub_83BF3484"))) PPC_WEAK_FUNC(sub_83BF3484);
PPC_FUNC_IMPL(__imp__sub_83BF3484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3488"))) PPC_WEAK_FUNC(sub_83BF3488);
PPC_FUNC_IMPL(__imp__sub_83BF3488) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10240
	ctx.r7.s64 = ctx.r8.s64 + -10240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10240(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF34B0"))) PPC_WEAK_FUNC(sub_83BF34B0);
PPC_FUNC_IMPL(__imp__sub_83BF34B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,1628
	ctx.r6.s64 = ctx.r7.s64 + 1628;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1556(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1556);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10240);
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
	// std r9,1628(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1628, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF34F8"))) PPC_WEAK_FUNC(sub_83BF34F8);
PPC_FUNC_IMPL(__imp__sub_83BF34F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8288
	ctx.r3.s64 = ctx.r11.s64 + -8288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3504"))) PPC_WEAK_FUNC(sub_83BF3504);
PPC_FUNC_IMPL(__imp__sub_83BF3504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3508"))) PPC_WEAK_FUNC(sub_83BF3508);
PPC_FUNC_IMPL(__imp__sub_83BF3508) {
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
	// addi r3,r11,-10232
	ctx.r3.s64 = ctx.r11.s64 + -10232;
	// bl 0x8259af80
	ctx.lr = 0x83BF3520;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8272
	ctx.r3.s64 = ctx.r10.s64 + -8272;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF352C;
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

__attribute__((alias("__imp__sub_83BF353C"))) PPC_WEAK_FUNC(sub_83BF353C);
PPC_FUNC_IMPL(__imp__sub_83BF353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3540"))) PPC_WEAK_FUNC(sub_83BF3540);
PPC_FUNC_IMPL(__imp__sub_83BF3540) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10252
	ctx.r11.s64 = ctx.r8.s64 + -10252;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,1604(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1604);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8280
	ctx.r3.s64 = ctx.r6.s64 + -8280;
	// stw r10,-10252(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10252, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3570"))) PPC_WEAK_FUNC(sub_83BF3570);
PPC_FUNC_IMPL(__imp__sub_83BF3570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8264
	ctx.r3.s64 = ctx.r11.s64 + -8264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF357C"))) PPC_WEAK_FUNC(sub_83BF357C);
PPC_FUNC_IMPL(__imp__sub_83BF357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3580"))) PPC_WEAK_FUNC(sub_83BF3580);
PPC_FUNC_IMPL(__imp__sub_83BF3580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8256
	ctx.r3.s64 = ctx.r11.s64 + -8256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF358C"))) PPC_WEAK_FUNC(sub_83BF358C);
PPC_FUNC_IMPL(__imp__sub_83BF358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3590"))) PPC_WEAK_FUNC(sub_83BF3590);
PPC_FUNC_IMPL(__imp__sub_83BF3590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8248
	ctx.r3.s64 = ctx.r11.s64 + -8248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF359C"))) PPC_WEAK_FUNC(sub_83BF359C);
PPC_FUNC_IMPL(__imp__sub_83BF359C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF35A0"))) PPC_WEAK_FUNC(sub_83BF35A0);
PPC_FUNC_IMPL(__imp__sub_83BF35A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8240
	ctx.r3.s64 = ctx.r11.s64 + -8240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF35AC"))) PPC_WEAK_FUNC(sub_83BF35AC);
PPC_FUNC_IMPL(__imp__sub_83BF35AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF35B0"))) PPC_WEAK_FUNC(sub_83BF35B0);
PPC_FUNC_IMPL(__imp__sub_83BF35B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8232
	ctx.r3.s64 = ctx.r11.s64 + -8232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF35BC"))) PPC_WEAK_FUNC(sub_83BF35BC);
PPC_FUNC_IMPL(__imp__sub_83BF35BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF35C0"))) PPC_WEAK_FUNC(sub_83BF35C0);
PPC_FUNC_IMPL(__imp__sub_83BF35C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8224
	ctx.r3.s64 = ctx.r11.s64 + -8224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF35CC"))) PPC_WEAK_FUNC(sub_83BF35CC);
PPC_FUNC_IMPL(__imp__sub_83BF35CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF35D0"))) PPC_WEAK_FUNC(sub_83BF35D0);
PPC_FUNC_IMPL(__imp__sub_83BF35D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8216
	ctx.r3.s64 = ctx.r11.s64 + -8216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF35DC"))) PPC_WEAK_FUNC(sub_83BF35DC);
PPC_FUNC_IMPL(__imp__sub_83BF35DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF35E0"))) PPC_WEAK_FUNC(sub_83BF35E0);
PPC_FUNC_IMPL(__imp__sub_83BF35E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8208
	ctx.r3.s64 = ctx.r11.s64 + -8208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF35EC"))) PPC_WEAK_FUNC(sub_83BF35EC);
PPC_FUNC_IMPL(__imp__sub_83BF35EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF35F0"))) PPC_WEAK_FUNC(sub_83BF35F0);
PPC_FUNC_IMPL(__imp__sub_83BF35F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8200
	ctx.r3.s64 = ctx.r11.s64 + -8200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF35FC"))) PPC_WEAK_FUNC(sub_83BF35FC);
PPC_FUNC_IMPL(__imp__sub_83BF35FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3600"))) PPC_WEAK_FUNC(sub_83BF3600);
PPC_FUNC_IMPL(__imp__sub_83BF3600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8192
	ctx.r3.s64 = ctx.r11.s64 + -8192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF360C"))) PPC_WEAK_FUNC(sub_83BF360C);
PPC_FUNC_IMPL(__imp__sub_83BF360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3610"))) PPC_WEAK_FUNC(sub_83BF3610);
PPC_FUNC_IMPL(__imp__sub_83BF3610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8184
	ctx.r3.s64 = ctx.r11.s64 + -8184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF361C"))) PPC_WEAK_FUNC(sub_83BF361C);
PPC_FUNC_IMPL(__imp__sub_83BF361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3620"))) PPC_WEAK_FUNC(sub_83BF3620);
PPC_FUNC_IMPL(__imp__sub_83BF3620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8176
	ctx.r3.s64 = ctx.r11.s64 + -8176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF362C"))) PPC_WEAK_FUNC(sub_83BF362C);
PPC_FUNC_IMPL(__imp__sub_83BF362C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3630"))) PPC_WEAK_FUNC(sub_83BF3630);
PPC_FUNC_IMPL(__imp__sub_83BF3630) {
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
	// addi r3,r11,-9888
	ctx.r3.s64 = ctx.r11.s64 + -9888;
	// bl 0x83523120
	ctx.lr = 0x83BF3648;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8168
	ctx.r3.s64 = ctx.r10.s64 + -8168;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF3654;
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

__attribute__((alias("__imp__sub_83BF3664"))) PPC_WEAK_FUNC(sub_83BF3664);
PPC_FUNC_IMPL(__imp__sub_83BF3664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3668"))) PPC_WEAK_FUNC(sub_83BF3668);
PPC_FUNC_IMPL(__imp__sub_83BF3668) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9872
	ctx.r7.s64 = ctx.r8.s64 + -9872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9872(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF3690"))) PPC_WEAK_FUNC(sub_83BF3690);
PPC_FUNC_IMPL(__imp__sub_83BF3690) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,1788
	ctx.r6.s64 = ctx.r7.s64 + 1788;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1716(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1716);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9872);
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
	// std r9,1788(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1788, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF36D8"))) PPC_WEAK_FUNC(sub_83BF36D8);
PPC_FUNC_IMPL(__imp__sub_83BF36D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8152
	ctx.r3.s64 = ctx.r11.s64 + -8152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF36E4"))) PPC_WEAK_FUNC(sub_83BF36E4);
PPC_FUNC_IMPL(__imp__sub_83BF36E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF36E8"))) PPC_WEAK_FUNC(sub_83BF36E8);
PPC_FUNC_IMPL(__imp__sub_83BF36E8) {
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
	// addi r3,r11,-9864
	ctx.r3.s64 = ctx.r11.s64 + -9864;
	// bl 0x8259af80
	ctx.lr = 0x83BF3700;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8136
	ctx.r3.s64 = ctx.r10.s64 + -8136;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF370C;
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

__attribute__((alias("__imp__sub_83BF371C"))) PPC_WEAK_FUNC(sub_83BF371C);
PPC_FUNC_IMPL(__imp__sub_83BF371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3720"))) PPC_WEAK_FUNC(sub_83BF3720);
PPC_FUNC_IMPL(__imp__sub_83BF3720) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9884
	ctx.r11.s64 = ctx.r8.s64 + -9884;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,1764(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1764);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8144
	ctx.r3.s64 = ctx.r6.s64 + -8144;
	// stw r10,-9884(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9884, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3750"))) PPC_WEAK_FUNC(sub_83BF3750);
PPC_FUNC_IMPL(__imp__sub_83BF3750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8128
	ctx.r3.s64 = ctx.r11.s64 + -8128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF375C"))) PPC_WEAK_FUNC(sub_83BF375C);
PPC_FUNC_IMPL(__imp__sub_83BF375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3760"))) PPC_WEAK_FUNC(sub_83BF3760);
PPC_FUNC_IMPL(__imp__sub_83BF3760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8120
	ctx.r3.s64 = ctx.r11.s64 + -8120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF376C"))) PPC_WEAK_FUNC(sub_83BF376C);
PPC_FUNC_IMPL(__imp__sub_83BF376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3770"))) PPC_WEAK_FUNC(sub_83BF3770);
PPC_FUNC_IMPL(__imp__sub_83BF3770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8112
	ctx.r3.s64 = ctx.r11.s64 + -8112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF377C"))) PPC_WEAK_FUNC(sub_83BF377C);
PPC_FUNC_IMPL(__imp__sub_83BF377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3780"))) PPC_WEAK_FUNC(sub_83BF3780);
PPC_FUNC_IMPL(__imp__sub_83BF3780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8104
	ctx.r3.s64 = ctx.r11.s64 + -8104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF378C"))) PPC_WEAK_FUNC(sub_83BF378C);
PPC_FUNC_IMPL(__imp__sub_83BF378C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3790"))) PPC_WEAK_FUNC(sub_83BF3790);
PPC_FUNC_IMPL(__imp__sub_83BF3790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8096
	ctx.r3.s64 = ctx.r11.s64 + -8096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF379C"))) PPC_WEAK_FUNC(sub_83BF379C);
PPC_FUNC_IMPL(__imp__sub_83BF379C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF37A0"))) PPC_WEAK_FUNC(sub_83BF37A0);
PPC_FUNC_IMPL(__imp__sub_83BF37A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8088
	ctx.r3.s64 = ctx.r11.s64 + -8088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF37AC"))) PPC_WEAK_FUNC(sub_83BF37AC);
PPC_FUNC_IMPL(__imp__sub_83BF37AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF37B0"))) PPC_WEAK_FUNC(sub_83BF37B0);
PPC_FUNC_IMPL(__imp__sub_83BF37B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8080
	ctx.r3.s64 = ctx.r11.s64 + -8080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF37BC"))) PPC_WEAK_FUNC(sub_83BF37BC);
PPC_FUNC_IMPL(__imp__sub_83BF37BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF37C0"))) PPC_WEAK_FUNC(sub_83BF37C0);
PPC_FUNC_IMPL(__imp__sub_83BF37C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8072
	ctx.r3.s64 = ctx.r11.s64 + -8072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF37CC"))) PPC_WEAK_FUNC(sub_83BF37CC);
PPC_FUNC_IMPL(__imp__sub_83BF37CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF37D0"))) PPC_WEAK_FUNC(sub_83BF37D0);
PPC_FUNC_IMPL(__imp__sub_83BF37D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8064
	ctx.r3.s64 = ctx.r11.s64 + -8064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF37DC"))) PPC_WEAK_FUNC(sub_83BF37DC);
PPC_FUNC_IMPL(__imp__sub_83BF37DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF37E0"))) PPC_WEAK_FUNC(sub_83BF37E0);
PPC_FUNC_IMPL(__imp__sub_83BF37E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8056
	ctx.r3.s64 = ctx.r11.s64 + -8056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF37EC"))) PPC_WEAK_FUNC(sub_83BF37EC);
PPC_FUNC_IMPL(__imp__sub_83BF37EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF37F0"))) PPC_WEAK_FUNC(sub_83BF37F0);
PPC_FUNC_IMPL(__imp__sub_83BF37F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8048
	ctx.r3.s64 = ctx.r11.s64 + -8048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF37FC"))) PPC_WEAK_FUNC(sub_83BF37FC);
PPC_FUNC_IMPL(__imp__sub_83BF37FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3800"))) PPC_WEAK_FUNC(sub_83BF3800);
PPC_FUNC_IMPL(__imp__sub_83BF3800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8040
	ctx.r3.s64 = ctx.r11.s64 + -8040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF380C"))) PPC_WEAK_FUNC(sub_83BF380C);
PPC_FUNC_IMPL(__imp__sub_83BF380C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3810"))) PPC_WEAK_FUNC(sub_83BF3810);
PPC_FUNC_IMPL(__imp__sub_83BF3810) {
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
	// addi r3,r11,-9520
	ctx.r3.s64 = ctx.r11.s64 + -9520;
	// bl 0x83523120
	ctx.lr = 0x83BF3828;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8032
	ctx.r3.s64 = ctx.r10.s64 + -8032;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF3834;
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

__attribute__((alias("__imp__sub_83BF3844"))) PPC_WEAK_FUNC(sub_83BF3844);
PPC_FUNC_IMPL(__imp__sub_83BF3844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3848"))) PPC_WEAK_FUNC(sub_83BF3848);
PPC_FUNC_IMPL(__imp__sub_83BF3848) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9504
	ctx.r7.s64 = ctx.r8.s64 + -9504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9504(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF3870"))) PPC_WEAK_FUNC(sub_83BF3870);
PPC_FUNC_IMPL(__imp__sub_83BF3870) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,1976
	ctx.r6.s64 = ctx.r7.s64 + 1976;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1904(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1904);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9504);
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
	// std r9,1976(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1976, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF38B8"))) PPC_WEAK_FUNC(sub_83BF38B8);
PPC_FUNC_IMPL(__imp__sub_83BF38B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8016
	ctx.r3.s64 = ctx.r11.s64 + -8016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF38C4"))) PPC_WEAK_FUNC(sub_83BF38C4);
PPC_FUNC_IMPL(__imp__sub_83BF38C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF38C8"))) PPC_WEAK_FUNC(sub_83BF38C8);
PPC_FUNC_IMPL(__imp__sub_83BF38C8) {
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
	// addi r3,r11,-9496
	ctx.r3.s64 = ctx.r11.s64 + -9496;
	// bl 0x8259af80
	ctx.lr = 0x83BF38E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-8000
	ctx.r3.s64 = ctx.r10.s64 + -8000;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF38EC;
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

__attribute__((alias("__imp__sub_83BF38FC"))) PPC_WEAK_FUNC(sub_83BF38FC);
PPC_FUNC_IMPL(__imp__sub_83BF38FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3900"))) PPC_WEAK_FUNC(sub_83BF3900);
PPC_FUNC_IMPL(__imp__sub_83BF3900) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9516
	ctx.r11.s64 = ctx.r8.s64 + -9516;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,1952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1952);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8008
	ctx.r3.s64 = ctx.r6.s64 + -8008;
	// stw r10,-9516(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9516, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3930"))) PPC_WEAK_FUNC(sub_83BF3930);
PPC_FUNC_IMPL(__imp__sub_83BF3930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7992
	ctx.r3.s64 = ctx.r11.s64 + -7992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF393C"))) PPC_WEAK_FUNC(sub_83BF393C);
PPC_FUNC_IMPL(__imp__sub_83BF393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3940"))) PPC_WEAK_FUNC(sub_83BF3940);
PPC_FUNC_IMPL(__imp__sub_83BF3940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7984
	ctx.r3.s64 = ctx.r11.s64 + -7984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF394C"))) PPC_WEAK_FUNC(sub_83BF394C);
PPC_FUNC_IMPL(__imp__sub_83BF394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3950"))) PPC_WEAK_FUNC(sub_83BF3950);
PPC_FUNC_IMPL(__imp__sub_83BF3950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7976
	ctx.r3.s64 = ctx.r11.s64 + -7976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF395C"))) PPC_WEAK_FUNC(sub_83BF395C);
PPC_FUNC_IMPL(__imp__sub_83BF395C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3960"))) PPC_WEAK_FUNC(sub_83BF3960);
PPC_FUNC_IMPL(__imp__sub_83BF3960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7968
	ctx.r3.s64 = ctx.r11.s64 + -7968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF396C"))) PPC_WEAK_FUNC(sub_83BF396C);
PPC_FUNC_IMPL(__imp__sub_83BF396C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3970"))) PPC_WEAK_FUNC(sub_83BF3970);
PPC_FUNC_IMPL(__imp__sub_83BF3970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7960
	ctx.r3.s64 = ctx.r11.s64 + -7960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF397C"))) PPC_WEAK_FUNC(sub_83BF397C);
PPC_FUNC_IMPL(__imp__sub_83BF397C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3980"))) PPC_WEAK_FUNC(sub_83BF3980);
PPC_FUNC_IMPL(__imp__sub_83BF3980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7952
	ctx.r3.s64 = ctx.r11.s64 + -7952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF398C"))) PPC_WEAK_FUNC(sub_83BF398C);
PPC_FUNC_IMPL(__imp__sub_83BF398C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3990"))) PPC_WEAK_FUNC(sub_83BF3990);
PPC_FUNC_IMPL(__imp__sub_83BF3990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7944
	ctx.r3.s64 = ctx.r11.s64 + -7944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF399C"))) PPC_WEAK_FUNC(sub_83BF399C);
PPC_FUNC_IMPL(__imp__sub_83BF399C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF39A0"))) PPC_WEAK_FUNC(sub_83BF39A0);
PPC_FUNC_IMPL(__imp__sub_83BF39A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7936
	ctx.r3.s64 = ctx.r11.s64 + -7936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF39AC"))) PPC_WEAK_FUNC(sub_83BF39AC);
PPC_FUNC_IMPL(__imp__sub_83BF39AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF39B0"))) PPC_WEAK_FUNC(sub_83BF39B0);
PPC_FUNC_IMPL(__imp__sub_83BF39B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7928
	ctx.r3.s64 = ctx.r11.s64 + -7928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF39BC"))) PPC_WEAK_FUNC(sub_83BF39BC);
PPC_FUNC_IMPL(__imp__sub_83BF39BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF39C0"))) PPC_WEAK_FUNC(sub_83BF39C0);
PPC_FUNC_IMPL(__imp__sub_83BF39C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7920
	ctx.r3.s64 = ctx.r11.s64 + -7920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF39CC"))) PPC_WEAK_FUNC(sub_83BF39CC);
PPC_FUNC_IMPL(__imp__sub_83BF39CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF39D0"))) PPC_WEAK_FUNC(sub_83BF39D0);
PPC_FUNC_IMPL(__imp__sub_83BF39D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7912
	ctx.r3.s64 = ctx.r11.s64 + -7912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF39DC"))) PPC_WEAK_FUNC(sub_83BF39DC);
PPC_FUNC_IMPL(__imp__sub_83BF39DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF39E0"))) PPC_WEAK_FUNC(sub_83BF39E0);
PPC_FUNC_IMPL(__imp__sub_83BF39E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7904
	ctx.r3.s64 = ctx.r11.s64 + -7904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF39EC"))) PPC_WEAK_FUNC(sub_83BF39EC);
PPC_FUNC_IMPL(__imp__sub_83BF39EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF39F0"))) PPC_WEAK_FUNC(sub_83BF39F0);
PPC_FUNC_IMPL(__imp__sub_83BF39F0) {
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
	// addi r3,r11,-9152
	ctx.r3.s64 = ctx.r11.s64 + -9152;
	// bl 0x83523120
	ctx.lr = 0x83BF3A08;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7896
	ctx.r3.s64 = ctx.r10.s64 + -7896;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF3A14;
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

__attribute__((alias("__imp__sub_83BF3A24"))) PPC_WEAK_FUNC(sub_83BF3A24);
PPC_FUNC_IMPL(__imp__sub_83BF3A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3A28"))) PPC_WEAK_FUNC(sub_83BF3A28);
PPC_FUNC_IMPL(__imp__sub_83BF3A28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9136
	ctx.r7.s64 = ctx.r8.s64 + -9136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9136(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF3A50"))) PPC_WEAK_FUNC(sub_83BF3A50);
PPC_FUNC_IMPL(__imp__sub_83BF3A50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,2112
	ctx.r6.s64 = ctx.r7.s64 + 2112;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,2040(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 2040);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9136);
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
	// std r9,2112(r7)
	PPC_STORE_U64(ctx.r7.u32 + 2112, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF3A98"))) PPC_WEAK_FUNC(sub_83BF3A98);
PPC_FUNC_IMPL(__imp__sub_83BF3A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7880
	ctx.r3.s64 = ctx.r11.s64 + -7880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3AA4"))) PPC_WEAK_FUNC(sub_83BF3AA4);
PPC_FUNC_IMPL(__imp__sub_83BF3AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3AA8"))) PPC_WEAK_FUNC(sub_83BF3AA8);
PPC_FUNC_IMPL(__imp__sub_83BF3AA8) {
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
	// addi r3,r11,-9128
	ctx.r3.s64 = ctx.r11.s64 + -9128;
	// bl 0x8259af80
	ctx.lr = 0x83BF3AC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7864
	ctx.r3.s64 = ctx.r10.s64 + -7864;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF3ACC;
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

__attribute__((alias("__imp__sub_83BF3ADC"))) PPC_WEAK_FUNC(sub_83BF3ADC);
PPC_FUNC_IMPL(__imp__sub_83BF3ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3AE0"))) PPC_WEAK_FUNC(sub_83BF3AE0);
PPC_FUNC_IMPL(__imp__sub_83BF3AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9148
	ctx.r11.s64 = ctx.r8.s64 + -9148;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,2088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2088);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7872
	ctx.r3.s64 = ctx.r6.s64 + -7872;
	// stw r10,-9148(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9148, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3B10"))) PPC_WEAK_FUNC(sub_83BF3B10);
PPC_FUNC_IMPL(__imp__sub_83BF3B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7856
	ctx.r3.s64 = ctx.r11.s64 + -7856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3B1C"))) PPC_WEAK_FUNC(sub_83BF3B1C);
PPC_FUNC_IMPL(__imp__sub_83BF3B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3B20"))) PPC_WEAK_FUNC(sub_83BF3B20);
PPC_FUNC_IMPL(__imp__sub_83BF3B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7848
	ctx.r3.s64 = ctx.r11.s64 + -7848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3B2C"))) PPC_WEAK_FUNC(sub_83BF3B2C);
PPC_FUNC_IMPL(__imp__sub_83BF3B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3B30"))) PPC_WEAK_FUNC(sub_83BF3B30);
PPC_FUNC_IMPL(__imp__sub_83BF3B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7840
	ctx.r3.s64 = ctx.r11.s64 + -7840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3B3C"))) PPC_WEAK_FUNC(sub_83BF3B3C);
PPC_FUNC_IMPL(__imp__sub_83BF3B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3B40"))) PPC_WEAK_FUNC(sub_83BF3B40);
PPC_FUNC_IMPL(__imp__sub_83BF3B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7832
	ctx.r3.s64 = ctx.r11.s64 + -7832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3B4C"))) PPC_WEAK_FUNC(sub_83BF3B4C);
PPC_FUNC_IMPL(__imp__sub_83BF3B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3B50"))) PPC_WEAK_FUNC(sub_83BF3B50);
PPC_FUNC_IMPL(__imp__sub_83BF3B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3B5C"))) PPC_WEAK_FUNC(sub_83BF3B5C);
PPC_FUNC_IMPL(__imp__sub_83BF3B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3B60"))) PPC_WEAK_FUNC(sub_83BF3B60);
PPC_FUNC_IMPL(__imp__sub_83BF3B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7816
	ctx.r3.s64 = ctx.r11.s64 + -7816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3B6C"))) PPC_WEAK_FUNC(sub_83BF3B6C);
PPC_FUNC_IMPL(__imp__sub_83BF3B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3B70"))) PPC_WEAK_FUNC(sub_83BF3B70);
PPC_FUNC_IMPL(__imp__sub_83BF3B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7808
	ctx.r3.s64 = ctx.r11.s64 + -7808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3B7C"))) PPC_WEAK_FUNC(sub_83BF3B7C);
PPC_FUNC_IMPL(__imp__sub_83BF3B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3B80"))) PPC_WEAK_FUNC(sub_83BF3B80);
PPC_FUNC_IMPL(__imp__sub_83BF3B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7800
	ctx.r3.s64 = ctx.r11.s64 + -7800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3B8C"))) PPC_WEAK_FUNC(sub_83BF3B8C);
PPC_FUNC_IMPL(__imp__sub_83BF3B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3B90"))) PPC_WEAK_FUNC(sub_83BF3B90);
PPC_FUNC_IMPL(__imp__sub_83BF3B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3B9C"))) PPC_WEAK_FUNC(sub_83BF3B9C);
PPC_FUNC_IMPL(__imp__sub_83BF3B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3BA0"))) PPC_WEAK_FUNC(sub_83BF3BA0);
PPC_FUNC_IMPL(__imp__sub_83BF3BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7784
	ctx.r3.s64 = ctx.r11.s64 + -7784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3BAC"))) PPC_WEAK_FUNC(sub_83BF3BAC);
PPC_FUNC_IMPL(__imp__sub_83BF3BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3BB0"))) PPC_WEAK_FUNC(sub_83BF3BB0);
PPC_FUNC_IMPL(__imp__sub_83BF3BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7776
	ctx.r3.s64 = ctx.r11.s64 + -7776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3BBC"))) PPC_WEAK_FUNC(sub_83BF3BBC);
PPC_FUNC_IMPL(__imp__sub_83BF3BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3BC0"))) PPC_WEAK_FUNC(sub_83BF3BC0);
PPC_FUNC_IMPL(__imp__sub_83BF3BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7768
	ctx.r3.s64 = ctx.r11.s64 + -7768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3BCC"))) PPC_WEAK_FUNC(sub_83BF3BCC);
PPC_FUNC_IMPL(__imp__sub_83BF3BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3BD0"))) PPC_WEAK_FUNC(sub_83BF3BD0);
PPC_FUNC_IMPL(__imp__sub_83BF3BD0) {
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
	// addi r3,r11,-8784
	ctx.r3.s64 = ctx.r11.s64 + -8784;
	// bl 0x83523120
	ctx.lr = 0x83BF3BE8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7760
	ctx.r3.s64 = ctx.r10.s64 + -7760;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF3BF4;
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

__attribute__((alias("__imp__sub_83BF3C04"))) PPC_WEAK_FUNC(sub_83BF3C04);
PPC_FUNC_IMPL(__imp__sub_83BF3C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3C08"))) PPC_WEAK_FUNC(sub_83BF3C08);
PPC_FUNC_IMPL(__imp__sub_83BF3C08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8768
	ctx.r7.s64 = ctx.r8.s64 + -8768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8768(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF3C30"))) PPC_WEAK_FUNC(sub_83BF3C30);
PPC_FUNC_IMPL(__imp__sub_83BF3C30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,2240
	ctx.r6.s64 = ctx.r7.s64 + 2240;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,2168(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 2168);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8768);
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
	// std r9,2240(r7)
	PPC_STORE_U64(ctx.r7.u32 + 2240, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF3C78"))) PPC_WEAK_FUNC(sub_83BF3C78);
PPC_FUNC_IMPL(__imp__sub_83BF3C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7744
	ctx.r3.s64 = ctx.r11.s64 + -7744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3C84"))) PPC_WEAK_FUNC(sub_83BF3C84);
PPC_FUNC_IMPL(__imp__sub_83BF3C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3C88"))) PPC_WEAK_FUNC(sub_83BF3C88);
PPC_FUNC_IMPL(__imp__sub_83BF3C88) {
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
	// addi r3,r11,-8760
	ctx.r3.s64 = ctx.r11.s64 + -8760;
	// bl 0x8259af80
	ctx.lr = 0x83BF3CA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7728
	ctx.r3.s64 = ctx.r10.s64 + -7728;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF3CAC;
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

__attribute__((alias("__imp__sub_83BF3CBC"))) PPC_WEAK_FUNC(sub_83BF3CBC);
PPC_FUNC_IMPL(__imp__sub_83BF3CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3CC0"))) PPC_WEAK_FUNC(sub_83BF3CC0);
PPC_FUNC_IMPL(__imp__sub_83BF3CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8780
	ctx.r11.s64 = ctx.r8.s64 + -8780;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,2216(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2216);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7736
	ctx.r3.s64 = ctx.r6.s64 + -7736;
	// stw r10,-8780(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8780, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3CF0"))) PPC_WEAK_FUNC(sub_83BF3CF0);
PPC_FUNC_IMPL(__imp__sub_83BF3CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7720
	ctx.r3.s64 = ctx.r11.s64 + -7720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3CFC"))) PPC_WEAK_FUNC(sub_83BF3CFC);
PPC_FUNC_IMPL(__imp__sub_83BF3CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3D00"))) PPC_WEAK_FUNC(sub_83BF3D00);
PPC_FUNC_IMPL(__imp__sub_83BF3D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7712
	ctx.r3.s64 = ctx.r11.s64 + -7712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3D0C"))) PPC_WEAK_FUNC(sub_83BF3D0C);
PPC_FUNC_IMPL(__imp__sub_83BF3D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3D10"))) PPC_WEAK_FUNC(sub_83BF3D10);
PPC_FUNC_IMPL(__imp__sub_83BF3D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7704
	ctx.r3.s64 = ctx.r11.s64 + -7704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3D1C"))) PPC_WEAK_FUNC(sub_83BF3D1C);
PPC_FUNC_IMPL(__imp__sub_83BF3D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3D20"))) PPC_WEAK_FUNC(sub_83BF3D20);
PPC_FUNC_IMPL(__imp__sub_83BF3D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7696
	ctx.r3.s64 = ctx.r11.s64 + -7696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3D2C"))) PPC_WEAK_FUNC(sub_83BF3D2C);
PPC_FUNC_IMPL(__imp__sub_83BF3D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3D30"))) PPC_WEAK_FUNC(sub_83BF3D30);
PPC_FUNC_IMPL(__imp__sub_83BF3D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7688
	ctx.r3.s64 = ctx.r11.s64 + -7688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3D3C"))) PPC_WEAK_FUNC(sub_83BF3D3C);
PPC_FUNC_IMPL(__imp__sub_83BF3D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3D40"))) PPC_WEAK_FUNC(sub_83BF3D40);
PPC_FUNC_IMPL(__imp__sub_83BF3D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7680
	ctx.r3.s64 = ctx.r11.s64 + -7680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3D4C"))) PPC_WEAK_FUNC(sub_83BF3D4C);
PPC_FUNC_IMPL(__imp__sub_83BF3D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3D50"))) PPC_WEAK_FUNC(sub_83BF3D50);
PPC_FUNC_IMPL(__imp__sub_83BF3D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7672
	ctx.r3.s64 = ctx.r11.s64 + -7672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3D5C"))) PPC_WEAK_FUNC(sub_83BF3D5C);
PPC_FUNC_IMPL(__imp__sub_83BF3D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3D60"))) PPC_WEAK_FUNC(sub_83BF3D60);
PPC_FUNC_IMPL(__imp__sub_83BF3D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7664
	ctx.r3.s64 = ctx.r11.s64 + -7664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3D6C"))) PPC_WEAK_FUNC(sub_83BF3D6C);
PPC_FUNC_IMPL(__imp__sub_83BF3D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3D70"))) PPC_WEAK_FUNC(sub_83BF3D70);
PPC_FUNC_IMPL(__imp__sub_83BF3D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7656
	ctx.r3.s64 = ctx.r11.s64 + -7656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3D7C"))) PPC_WEAK_FUNC(sub_83BF3D7C);
PPC_FUNC_IMPL(__imp__sub_83BF3D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3D80"))) PPC_WEAK_FUNC(sub_83BF3D80);
PPC_FUNC_IMPL(__imp__sub_83BF3D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7648
	ctx.r3.s64 = ctx.r11.s64 + -7648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3D8C"))) PPC_WEAK_FUNC(sub_83BF3D8C);
PPC_FUNC_IMPL(__imp__sub_83BF3D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3D90"))) PPC_WEAK_FUNC(sub_83BF3D90);
PPC_FUNC_IMPL(__imp__sub_83BF3D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7640
	ctx.r3.s64 = ctx.r11.s64 + -7640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3D9C"))) PPC_WEAK_FUNC(sub_83BF3D9C);
PPC_FUNC_IMPL(__imp__sub_83BF3D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3DA0"))) PPC_WEAK_FUNC(sub_83BF3DA0);
PPC_FUNC_IMPL(__imp__sub_83BF3DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7632
	ctx.r3.s64 = ctx.r11.s64 + -7632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3DAC"))) PPC_WEAK_FUNC(sub_83BF3DAC);
PPC_FUNC_IMPL(__imp__sub_83BF3DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3DB0"))) PPC_WEAK_FUNC(sub_83BF3DB0);
PPC_FUNC_IMPL(__imp__sub_83BF3DB0) {
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
	// addi r3,r11,-8416
	ctx.r3.s64 = ctx.r11.s64 + -8416;
	// bl 0x83523120
	ctx.lr = 0x83BF3DC8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7624
	ctx.r3.s64 = ctx.r10.s64 + -7624;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF3DD4;
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

__attribute__((alias("__imp__sub_83BF3DE4"))) PPC_WEAK_FUNC(sub_83BF3DE4);
PPC_FUNC_IMPL(__imp__sub_83BF3DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3DE8"))) PPC_WEAK_FUNC(sub_83BF3DE8);
PPC_FUNC_IMPL(__imp__sub_83BF3DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8400
	ctx.r7.s64 = ctx.r8.s64 + -8400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8400(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF3E10"))) PPC_WEAK_FUNC(sub_83BF3E10);
PPC_FUNC_IMPL(__imp__sub_83BF3E10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,2368
	ctx.r6.s64 = ctx.r7.s64 + 2368;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,2296(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 2296);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8400);
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
	// std r9,2368(r7)
	PPC_STORE_U64(ctx.r7.u32 + 2368, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF3E58"))) PPC_WEAK_FUNC(sub_83BF3E58);
PPC_FUNC_IMPL(__imp__sub_83BF3E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7608
	ctx.r3.s64 = ctx.r11.s64 + -7608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3E64"))) PPC_WEAK_FUNC(sub_83BF3E64);
PPC_FUNC_IMPL(__imp__sub_83BF3E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3E68"))) PPC_WEAK_FUNC(sub_83BF3E68);
PPC_FUNC_IMPL(__imp__sub_83BF3E68) {
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
	// addi r3,r11,-8392
	ctx.r3.s64 = ctx.r11.s64 + -8392;
	// bl 0x8259af80
	ctx.lr = 0x83BF3E80;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7592
	ctx.r3.s64 = ctx.r10.s64 + -7592;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF3E8C;
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

__attribute__((alias("__imp__sub_83BF3E9C"))) PPC_WEAK_FUNC(sub_83BF3E9C);
PPC_FUNC_IMPL(__imp__sub_83BF3E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3EA0"))) PPC_WEAK_FUNC(sub_83BF3EA0);
PPC_FUNC_IMPL(__imp__sub_83BF3EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8412
	ctx.r11.s64 = ctx.r8.s64 + -8412;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,2344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2344);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7600
	ctx.r3.s64 = ctx.r6.s64 + -7600;
	// stw r10,-8412(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8412, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3ED0"))) PPC_WEAK_FUNC(sub_83BF3ED0);
PPC_FUNC_IMPL(__imp__sub_83BF3ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7584
	ctx.r3.s64 = ctx.r11.s64 + -7584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3EDC"))) PPC_WEAK_FUNC(sub_83BF3EDC);
PPC_FUNC_IMPL(__imp__sub_83BF3EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3EE0"))) PPC_WEAK_FUNC(sub_83BF3EE0);
PPC_FUNC_IMPL(__imp__sub_83BF3EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7576
	ctx.r3.s64 = ctx.r11.s64 + -7576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3EEC"))) PPC_WEAK_FUNC(sub_83BF3EEC);
PPC_FUNC_IMPL(__imp__sub_83BF3EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3EF0"))) PPC_WEAK_FUNC(sub_83BF3EF0);
PPC_FUNC_IMPL(__imp__sub_83BF3EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7568
	ctx.r3.s64 = ctx.r11.s64 + -7568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3EFC"))) PPC_WEAK_FUNC(sub_83BF3EFC);
PPC_FUNC_IMPL(__imp__sub_83BF3EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3F00"))) PPC_WEAK_FUNC(sub_83BF3F00);
PPC_FUNC_IMPL(__imp__sub_83BF3F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7560
	ctx.r3.s64 = ctx.r11.s64 + -7560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3F0C"))) PPC_WEAK_FUNC(sub_83BF3F0C);
PPC_FUNC_IMPL(__imp__sub_83BF3F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3F10"))) PPC_WEAK_FUNC(sub_83BF3F10);
PPC_FUNC_IMPL(__imp__sub_83BF3F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7552
	ctx.r3.s64 = ctx.r11.s64 + -7552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3F1C"))) PPC_WEAK_FUNC(sub_83BF3F1C);
PPC_FUNC_IMPL(__imp__sub_83BF3F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3F20"))) PPC_WEAK_FUNC(sub_83BF3F20);
PPC_FUNC_IMPL(__imp__sub_83BF3F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7544
	ctx.r3.s64 = ctx.r11.s64 + -7544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3F2C"))) PPC_WEAK_FUNC(sub_83BF3F2C);
PPC_FUNC_IMPL(__imp__sub_83BF3F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3F30"))) PPC_WEAK_FUNC(sub_83BF3F30);
PPC_FUNC_IMPL(__imp__sub_83BF3F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7536
	ctx.r3.s64 = ctx.r11.s64 + -7536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3F3C"))) PPC_WEAK_FUNC(sub_83BF3F3C);
PPC_FUNC_IMPL(__imp__sub_83BF3F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3F40"))) PPC_WEAK_FUNC(sub_83BF3F40);
PPC_FUNC_IMPL(__imp__sub_83BF3F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7528
	ctx.r3.s64 = ctx.r11.s64 + -7528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3F4C"))) PPC_WEAK_FUNC(sub_83BF3F4C);
PPC_FUNC_IMPL(__imp__sub_83BF3F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3F50"))) PPC_WEAK_FUNC(sub_83BF3F50);
PPC_FUNC_IMPL(__imp__sub_83BF3F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7520
	ctx.r3.s64 = ctx.r11.s64 + -7520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3F5C"))) PPC_WEAK_FUNC(sub_83BF3F5C);
PPC_FUNC_IMPL(__imp__sub_83BF3F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3F60"))) PPC_WEAK_FUNC(sub_83BF3F60);
PPC_FUNC_IMPL(__imp__sub_83BF3F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7512
	ctx.r3.s64 = ctx.r11.s64 + -7512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3F6C"))) PPC_WEAK_FUNC(sub_83BF3F6C);
PPC_FUNC_IMPL(__imp__sub_83BF3F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3F70"))) PPC_WEAK_FUNC(sub_83BF3F70);
PPC_FUNC_IMPL(__imp__sub_83BF3F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7504
	ctx.r3.s64 = ctx.r11.s64 + -7504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3F7C"))) PPC_WEAK_FUNC(sub_83BF3F7C);
PPC_FUNC_IMPL(__imp__sub_83BF3F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3F80"))) PPC_WEAK_FUNC(sub_83BF3F80);
PPC_FUNC_IMPL(__imp__sub_83BF3F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7496
	ctx.r3.s64 = ctx.r11.s64 + -7496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF3F8C"))) PPC_WEAK_FUNC(sub_83BF3F8C);
PPC_FUNC_IMPL(__imp__sub_83BF3F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3F90"))) PPC_WEAK_FUNC(sub_83BF3F90);
PPC_FUNC_IMPL(__imp__sub_83BF3F90) {
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
	// addi r3,r11,-8048
	ctx.r3.s64 = ctx.r11.s64 + -8048;
	// bl 0x83523120
	ctx.lr = 0x83BF3FA8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7488
	ctx.r3.s64 = ctx.r10.s64 + -7488;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF3FB4;
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

__attribute__((alias("__imp__sub_83BF3FC4"))) PPC_WEAK_FUNC(sub_83BF3FC4);
PPC_FUNC_IMPL(__imp__sub_83BF3FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF3FC8"))) PPC_WEAK_FUNC(sub_83BF3FC8);
PPC_FUNC_IMPL(__imp__sub_83BF3FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8032
	ctx.r7.s64 = ctx.r8.s64 + -8032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8032(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF3FF0"))) PPC_WEAK_FUNC(sub_83BF3FF0);
PPC_FUNC_IMPL(__imp__sub_83BF3FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,2496
	ctx.r6.s64 = ctx.r7.s64 + 2496;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,2424(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 2424);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8032);
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
	// std r9,2496(r7)
	PPC_STORE_U64(ctx.r7.u32 + 2496, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF4038"))) PPC_WEAK_FUNC(sub_83BF4038);
PPC_FUNC_IMPL(__imp__sub_83BF4038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7472
	ctx.r3.s64 = ctx.r11.s64 + -7472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4044"))) PPC_WEAK_FUNC(sub_83BF4044);
PPC_FUNC_IMPL(__imp__sub_83BF4044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4048"))) PPC_WEAK_FUNC(sub_83BF4048);
PPC_FUNC_IMPL(__imp__sub_83BF4048) {
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
	// addi r3,r11,-8024
	ctx.r3.s64 = ctx.r11.s64 + -8024;
	// bl 0x8259af80
	ctx.lr = 0x83BF4060;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7456
	ctx.r3.s64 = ctx.r10.s64 + -7456;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF406C;
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

__attribute__((alias("__imp__sub_83BF407C"))) PPC_WEAK_FUNC(sub_83BF407C);
PPC_FUNC_IMPL(__imp__sub_83BF407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4080"))) PPC_WEAK_FUNC(sub_83BF4080);
PPC_FUNC_IMPL(__imp__sub_83BF4080) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8044
	ctx.r11.s64 = ctx.r8.s64 + -8044;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,2472(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2472);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7464
	ctx.r3.s64 = ctx.r6.s64 + -7464;
	// stw r10,-8044(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8044, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF40B0"))) PPC_WEAK_FUNC(sub_83BF40B0);
PPC_FUNC_IMPL(__imp__sub_83BF40B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7448
	ctx.r3.s64 = ctx.r11.s64 + -7448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF40BC"))) PPC_WEAK_FUNC(sub_83BF40BC);
PPC_FUNC_IMPL(__imp__sub_83BF40BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF40C0"))) PPC_WEAK_FUNC(sub_83BF40C0);
PPC_FUNC_IMPL(__imp__sub_83BF40C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7440
	ctx.r3.s64 = ctx.r11.s64 + -7440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF40CC"))) PPC_WEAK_FUNC(sub_83BF40CC);
PPC_FUNC_IMPL(__imp__sub_83BF40CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF40D0"))) PPC_WEAK_FUNC(sub_83BF40D0);
PPC_FUNC_IMPL(__imp__sub_83BF40D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7432
	ctx.r3.s64 = ctx.r11.s64 + -7432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF40DC"))) PPC_WEAK_FUNC(sub_83BF40DC);
PPC_FUNC_IMPL(__imp__sub_83BF40DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF40E0"))) PPC_WEAK_FUNC(sub_83BF40E0);
PPC_FUNC_IMPL(__imp__sub_83BF40E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7424
	ctx.r3.s64 = ctx.r11.s64 + -7424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF40EC"))) PPC_WEAK_FUNC(sub_83BF40EC);
PPC_FUNC_IMPL(__imp__sub_83BF40EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF40F0"))) PPC_WEAK_FUNC(sub_83BF40F0);
PPC_FUNC_IMPL(__imp__sub_83BF40F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7416
	ctx.r3.s64 = ctx.r11.s64 + -7416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF40FC"))) PPC_WEAK_FUNC(sub_83BF40FC);
PPC_FUNC_IMPL(__imp__sub_83BF40FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4100"))) PPC_WEAK_FUNC(sub_83BF4100);
PPC_FUNC_IMPL(__imp__sub_83BF4100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7408
	ctx.r3.s64 = ctx.r11.s64 + -7408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

