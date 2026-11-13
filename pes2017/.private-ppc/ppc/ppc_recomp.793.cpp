#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C512D0"))) PPC_WEAK_FUNC(sub_83C512D0);
PPC_FUNC_IMPL(__imp__sub_83C512D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6736
	ctx.r3.s64 = ctx.r11.s64 + -6736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C512DC"))) PPC_WEAK_FUNC(sub_83C512DC);
PPC_FUNC_IMPL(__imp__sub_83C512DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C512E0"))) PPC_WEAK_FUNC(sub_83C512E0);
PPC_FUNC_IMPL(__imp__sub_83C512E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6728
	ctx.r3.s64 = ctx.r11.s64 + -6728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C512EC"))) PPC_WEAK_FUNC(sub_83C512EC);
PPC_FUNC_IMPL(__imp__sub_83C512EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C512F0"))) PPC_WEAK_FUNC(sub_83C512F0);
PPC_FUNC_IMPL(__imp__sub_83C512F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6720
	ctx.r3.s64 = ctx.r11.s64 + -6720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C512FC"))) PPC_WEAK_FUNC(sub_83C512FC);
PPC_FUNC_IMPL(__imp__sub_83C512FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51300"))) PPC_WEAK_FUNC(sub_83C51300);
PPC_FUNC_IMPL(__imp__sub_83C51300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6712
	ctx.r3.s64 = ctx.r11.s64 + -6712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5130C"))) PPC_WEAK_FUNC(sub_83C5130C);
PPC_FUNC_IMPL(__imp__sub_83C5130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51310"))) PPC_WEAK_FUNC(sub_83C51310);
PPC_FUNC_IMPL(__imp__sub_83C51310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6704
	ctx.r3.s64 = ctx.r11.s64 + -6704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5131C"))) PPC_WEAK_FUNC(sub_83C5131C);
PPC_FUNC_IMPL(__imp__sub_83C5131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51320"))) PPC_WEAK_FUNC(sub_83C51320);
PPC_FUNC_IMPL(__imp__sub_83C51320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6696
	ctx.r3.s64 = ctx.r11.s64 + -6696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5132C"))) PPC_WEAK_FUNC(sub_83C5132C);
PPC_FUNC_IMPL(__imp__sub_83C5132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51330"))) PPC_WEAK_FUNC(sub_83C51330);
PPC_FUNC_IMPL(__imp__sub_83C51330) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22360
	ctx.r7.s64 = ctx.r8.s64 + 22360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51358"))) PPC_WEAK_FUNC(sub_83C51358);
PPC_FUNC_IMPL(__imp__sub_83C51358) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,22344
	ctx.r3.s64 = ctx.r11.s64 + 22344;
	// bl 0x83523120
	ctx.lr = 0x83C51370;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-6688
	ctx.r3.s64 = ctx.r10.s64 + -6688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5137C;
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

__attribute__((alias("__imp__sub_83C5138C"))) PPC_WEAK_FUNC(sub_83C5138C);
PPC_FUNC_IMPL(__imp__sub_83C5138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51390"))) PPC_WEAK_FUNC(sub_83C51390);
PPC_FUNC_IMPL(__imp__sub_83C51390) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,10096
	ctx.r6.s64 = ctx.r7.s64 + 10096;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,10024(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10024);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22360);
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
	// std r9,10096(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10096, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C513D8"))) PPC_WEAK_FUNC(sub_83C513D8);
PPC_FUNC_IMPL(__imp__sub_83C513D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6672
	ctx.r3.s64 = ctx.r11.s64 + -6672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C513E4"))) PPC_WEAK_FUNC(sub_83C513E4);
PPC_FUNC_IMPL(__imp__sub_83C513E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C513E8"))) PPC_WEAK_FUNC(sub_83C513E8);
PPC_FUNC_IMPL(__imp__sub_83C513E8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,22368
	ctx.r3.s64 = ctx.r11.s64 + 22368;
	// bl 0x8259af80
	ctx.lr = 0x83C51400;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-6656
	ctx.r3.s64 = ctx.r10.s64 + -6656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5140C;
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

__attribute__((alias("__imp__sub_83C5141C"))) PPC_WEAK_FUNC(sub_83C5141C);
PPC_FUNC_IMPL(__imp__sub_83C5141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51420"))) PPC_WEAK_FUNC(sub_83C51420);
PPC_FUNC_IMPL(__imp__sub_83C51420) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22348
	ctx.r11.s64 = ctx.r8.s64 + 22348;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,10072(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10072);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6664
	ctx.r3.s64 = ctx.r6.s64 + -6664;
	// stw r10,22348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51450"))) PPC_WEAK_FUNC(sub_83C51450);
PPC_FUNC_IMPL(__imp__sub_83C51450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5145C"))) PPC_WEAK_FUNC(sub_83C5145C);
PPC_FUNC_IMPL(__imp__sub_83C5145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51460"))) PPC_WEAK_FUNC(sub_83C51460);
PPC_FUNC_IMPL(__imp__sub_83C51460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6640
	ctx.r3.s64 = ctx.r11.s64 + -6640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5146C"))) PPC_WEAK_FUNC(sub_83C5146C);
PPC_FUNC_IMPL(__imp__sub_83C5146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51470"))) PPC_WEAK_FUNC(sub_83C51470);
PPC_FUNC_IMPL(__imp__sub_83C51470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6632
	ctx.r3.s64 = ctx.r11.s64 + -6632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5147C"))) PPC_WEAK_FUNC(sub_83C5147C);
PPC_FUNC_IMPL(__imp__sub_83C5147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51480"))) PPC_WEAK_FUNC(sub_83C51480);
PPC_FUNC_IMPL(__imp__sub_83C51480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6624
	ctx.r3.s64 = ctx.r11.s64 + -6624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5148C"))) PPC_WEAK_FUNC(sub_83C5148C);
PPC_FUNC_IMPL(__imp__sub_83C5148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51490"))) PPC_WEAK_FUNC(sub_83C51490);
PPC_FUNC_IMPL(__imp__sub_83C51490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6616
	ctx.r3.s64 = ctx.r11.s64 + -6616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5149C"))) PPC_WEAK_FUNC(sub_83C5149C);
PPC_FUNC_IMPL(__imp__sub_83C5149C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C514A0"))) PPC_WEAK_FUNC(sub_83C514A0);
PPC_FUNC_IMPL(__imp__sub_83C514A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6608
	ctx.r3.s64 = ctx.r11.s64 + -6608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C514AC"))) PPC_WEAK_FUNC(sub_83C514AC);
PPC_FUNC_IMPL(__imp__sub_83C514AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C514B0"))) PPC_WEAK_FUNC(sub_83C514B0);
PPC_FUNC_IMPL(__imp__sub_83C514B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6600
	ctx.r3.s64 = ctx.r11.s64 + -6600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C514BC"))) PPC_WEAK_FUNC(sub_83C514BC);
PPC_FUNC_IMPL(__imp__sub_83C514BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C514C0"))) PPC_WEAK_FUNC(sub_83C514C0);
PPC_FUNC_IMPL(__imp__sub_83C514C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6592
	ctx.r3.s64 = ctx.r11.s64 + -6592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C514CC"))) PPC_WEAK_FUNC(sub_83C514CC);
PPC_FUNC_IMPL(__imp__sub_83C514CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C514D0"))) PPC_WEAK_FUNC(sub_83C514D0);
PPC_FUNC_IMPL(__imp__sub_83C514D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6584
	ctx.r3.s64 = ctx.r11.s64 + -6584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C514DC"))) PPC_WEAK_FUNC(sub_83C514DC);
PPC_FUNC_IMPL(__imp__sub_83C514DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C514E0"))) PPC_WEAK_FUNC(sub_83C514E0);
PPC_FUNC_IMPL(__imp__sub_83C514E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6576
	ctx.r3.s64 = ctx.r11.s64 + -6576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C514EC"))) PPC_WEAK_FUNC(sub_83C514EC);
PPC_FUNC_IMPL(__imp__sub_83C514EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C514F0"))) PPC_WEAK_FUNC(sub_83C514F0);
PPC_FUNC_IMPL(__imp__sub_83C514F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C514FC"))) PPC_WEAK_FUNC(sub_83C514FC);
PPC_FUNC_IMPL(__imp__sub_83C514FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51500"))) PPC_WEAK_FUNC(sub_83C51500);
PPC_FUNC_IMPL(__imp__sub_83C51500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6560
	ctx.r3.s64 = ctx.r11.s64 + -6560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5150C"))) PPC_WEAK_FUNC(sub_83C5150C);
PPC_FUNC_IMPL(__imp__sub_83C5150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51510"))) PPC_WEAK_FUNC(sub_83C51510);
PPC_FUNC_IMPL(__imp__sub_83C51510) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,22712
	ctx.r3.s64 = ctx.r11.s64 + 22712;
	// bl 0x83523120
	ctx.lr = 0x83C51528;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-6552
	ctx.r3.s64 = ctx.r10.s64 + -6552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C51534;
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

__attribute__((alias("__imp__sub_83C51544"))) PPC_WEAK_FUNC(sub_83C51544);
PPC_FUNC_IMPL(__imp__sub_83C51544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51548"))) PPC_WEAK_FUNC(sub_83C51548);
PPC_FUNC_IMPL(__imp__sub_83C51548) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22728
	ctx.r7.s64 = ctx.r8.s64 + 22728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22728);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22728, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51570"))) PPC_WEAK_FUNC(sub_83C51570);
PPC_FUNC_IMPL(__imp__sub_83C51570) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,10224
	ctx.r6.s64 = ctx.r7.s64 + 10224;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,10152(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10152);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22728(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22728);
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
	// std r9,10224(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10224, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C515B8"))) PPC_WEAK_FUNC(sub_83C515B8);
PPC_FUNC_IMPL(__imp__sub_83C515B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6536
	ctx.r3.s64 = ctx.r11.s64 + -6536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C515C4"))) PPC_WEAK_FUNC(sub_83C515C4);
PPC_FUNC_IMPL(__imp__sub_83C515C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C515C8"))) PPC_WEAK_FUNC(sub_83C515C8);
PPC_FUNC_IMPL(__imp__sub_83C515C8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,22736
	ctx.r3.s64 = ctx.r11.s64 + 22736;
	// bl 0x8259af80
	ctx.lr = 0x83C515E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-6520
	ctx.r3.s64 = ctx.r10.s64 + -6520;
	// bl 0x831cdcc8
	ctx.lr = 0x83C515EC;
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

__attribute__((alias("__imp__sub_83C515FC"))) PPC_WEAK_FUNC(sub_83C515FC);
PPC_FUNC_IMPL(__imp__sub_83C515FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51600"))) PPC_WEAK_FUNC(sub_83C51600);
PPC_FUNC_IMPL(__imp__sub_83C51600) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22716
	ctx.r11.s64 = ctx.r8.s64 + 22716;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,10200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10200);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6528
	ctx.r3.s64 = ctx.r6.s64 + -6528;
	// stw r10,22716(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51630"))) PPC_WEAK_FUNC(sub_83C51630);
PPC_FUNC_IMPL(__imp__sub_83C51630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6512
	ctx.r3.s64 = ctx.r11.s64 + -6512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5163C"))) PPC_WEAK_FUNC(sub_83C5163C);
PPC_FUNC_IMPL(__imp__sub_83C5163C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51640"))) PPC_WEAK_FUNC(sub_83C51640);
PPC_FUNC_IMPL(__imp__sub_83C51640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6504
	ctx.r3.s64 = ctx.r11.s64 + -6504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5164C"))) PPC_WEAK_FUNC(sub_83C5164C);
PPC_FUNC_IMPL(__imp__sub_83C5164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51650"))) PPC_WEAK_FUNC(sub_83C51650);
PPC_FUNC_IMPL(__imp__sub_83C51650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6496
	ctx.r3.s64 = ctx.r11.s64 + -6496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5165C"))) PPC_WEAK_FUNC(sub_83C5165C);
PPC_FUNC_IMPL(__imp__sub_83C5165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51660"))) PPC_WEAK_FUNC(sub_83C51660);
PPC_FUNC_IMPL(__imp__sub_83C51660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6488
	ctx.r3.s64 = ctx.r11.s64 + -6488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5166C"))) PPC_WEAK_FUNC(sub_83C5166C);
PPC_FUNC_IMPL(__imp__sub_83C5166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51670"))) PPC_WEAK_FUNC(sub_83C51670);
PPC_FUNC_IMPL(__imp__sub_83C51670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6480
	ctx.r3.s64 = ctx.r11.s64 + -6480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5167C"))) PPC_WEAK_FUNC(sub_83C5167C);
PPC_FUNC_IMPL(__imp__sub_83C5167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51680"))) PPC_WEAK_FUNC(sub_83C51680);
PPC_FUNC_IMPL(__imp__sub_83C51680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6472
	ctx.r3.s64 = ctx.r11.s64 + -6472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5168C"))) PPC_WEAK_FUNC(sub_83C5168C);
PPC_FUNC_IMPL(__imp__sub_83C5168C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51690"))) PPC_WEAK_FUNC(sub_83C51690);
PPC_FUNC_IMPL(__imp__sub_83C51690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6464
	ctx.r3.s64 = ctx.r11.s64 + -6464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5169C"))) PPC_WEAK_FUNC(sub_83C5169C);
PPC_FUNC_IMPL(__imp__sub_83C5169C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C516A0"))) PPC_WEAK_FUNC(sub_83C516A0);
PPC_FUNC_IMPL(__imp__sub_83C516A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6456
	ctx.r3.s64 = ctx.r11.s64 + -6456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C516AC"))) PPC_WEAK_FUNC(sub_83C516AC);
PPC_FUNC_IMPL(__imp__sub_83C516AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C516B0"))) PPC_WEAK_FUNC(sub_83C516B0);
PPC_FUNC_IMPL(__imp__sub_83C516B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6448
	ctx.r3.s64 = ctx.r11.s64 + -6448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C516BC"))) PPC_WEAK_FUNC(sub_83C516BC);
PPC_FUNC_IMPL(__imp__sub_83C516BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C516C0"))) PPC_WEAK_FUNC(sub_83C516C0);
PPC_FUNC_IMPL(__imp__sub_83C516C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6440
	ctx.r3.s64 = ctx.r11.s64 + -6440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C516CC"))) PPC_WEAK_FUNC(sub_83C516CC);
PPC_FUNC_IMPL(__imp__sub_83C516CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C516D0"))) PPC_WEAK_FUNC(sub_83C516D0);
PPC_FUNC_IMPL(__imp__sub_83C516D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6432
	ctx.r3.s64 = ctx.r11.s64 + -6432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C516DC"))) PPC_WEAK_FUNC(sub_83C516DC);
PPC_FUNC_IMPL(__imp__sub_83C516DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C516E0"))) PPC_WEAK_FUNC(sub_83C516E0);
PPC_FUNC_IMPL(__imp__sub_83C516E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6424
	ctx.r3.s64 = ctx.r11.s64 + -6424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C516EC"))) PPC_WEAK_FUNC(sub_83C516EC);
PPC_FUNC_IMPL(__imp__sub_83C516EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C516F0"))) PPC_WEAK_FUNC(sub_83C516F0);
PPC_FUNC_IMPL(__imp__sub_83C516F0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,23080
	ctx.r3.s64 = ctx.r11.s64 + 23080;
	// bl 0x83523120
	ctx.lr = 0x83C51708;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-6416
	ctx.r3.s64 = ctx.r10.s64 + -6416;
	// bl 0x831cdcc8
	ctx.lr = 0x83C51714;
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

__attribute__((alias("__imp__sub_83C51724"))) PPC_WEAK_FUNC(sub_83C51724);
PPC_FUNC_IMPL(__imp__sub_83C51724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51728"))) PPC_WEAK_FUNC(sub_83C51728);
PPC_FUNC_IMPL(__imp__sub_83C51728) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23096
	ctx.r7.s64 = ctx.r8.s64 + 23096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51750"))) PPC_WEAK_FUNC(sub_83C51750);
PPC_FUNC_IMPL(__imp__sub_83C51750) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,10352
	ctx.r6.s64 = ctx.r7.s64 + 10352;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,10280(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10280);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,23096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23096);
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
	// std r9,10352(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10352, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51798"))) PPC_WEAK_FUNC(sub_83C51798);
PPC_FUNC_IMPL(__imp__sub_83C51798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6400
	ctx.r3.s64 = ctx.r11.s64 + -6400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C517A4"))) PPC_WEAK_FUNC(sub_83C517A4);
PPC_FUNC_IMPL(__imp__sub_83C517A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C517A8"))) PPC_WEAK_FUNC(sub_83C517A8);
PPC_FUNC_IMPL(__imp__sub_83C517A8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,23104
	ctx.r3.s64 = ctx.r11.s64 + 23104;
	// bl 0x8259af80
	ctx.lr = 0x83C517C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-6384
	ctx.r3.s64 = ctx.r10.s64 + -6384;
	// bl 0x831cdcc8
	ctx.lr = 0x83C517CC;
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

__attribute__((alias("__imp__sub_83C517DC"))) PPC_WEAK_FUNC(sub_83C517DC);
PPC_FUNC_IMPL(__imp__sub_83C517DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C517E0"))) PPC_WEAK_FUNC(sub_83C517E0);
PPC_FUNC_IMPL(__imp__sub_83C517E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,23084
	ctx.r11.s64 = ctx.r8.s64 + 23084;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,10328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10328);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6392
	ctx.r3.s64 = ctx.r6.s64 + -6392;
	// stw r10,23084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23084, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51810"))) PPC_WEAK_FUNC(sub_83C51810);
PPC_FUNC_IMPL(__imp__sub_83C51810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6376
	ctx.r3.s64 = ctx.r11.s64 + -6376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5181C"))) PPC_WEAK_FUNC(sub_83C5181C);
PPC_FUNC_IMPL(__imp__sub_83C5181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51820"))) PPC_WEAK_FUNC(sub_83C51820);
PPC_FUNC_IMPL(__imp__sub_83C51820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6368
	ctx.r3.s64 = ctx.r11.s64 + -6368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5182C"))) PPC_WEAK_FUNC(sub_83C5182C);
PPC_FUNC_IMPL(__imp__sub_83C5182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51830"))) PPC_WEAK_FUNC(sub_83C51830);
PPC_FUNC_IMPL(__imp__sub_83C51830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6360
	ctx.r3.s64 = ctx.r11.s64 + -6360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5183C"))) PPC_WEAK_FUNC(sub_83C5183C);
PPC_FUNC_IMPL(__imp__sub_83C5183C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51840"))) PPC_WEAK_FUNC(sub_83C51840);
PPC_FUNC_IMPL(__imp__sub_83C51840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6352
	ctx.r3.s64 = ctx.r11.s64 + -6352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5184C"))) PPC_WEAK_FUNC(sub_83C5184C);
PPC_FUNC_IMPL(__imp__sub_83C5184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51850"))) PPC_WEAK_FUNC(sub_83C51850);
PPC_FUNC_IMPL(__imp__sub_83C51850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6344
	ctx.r3.s64 = ctx.r11.s64 + -6344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5185C"))) PPC_WEAK_FUNC(sub_83C5185C);
PPC_FUNC_IMPL(__imp__sub_83C5185C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51860"))) PPC_WEAK_FUNC(sub_83C51860);
PPC_FUNC_IMPL(__imp__sub_83C51860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6336
	ctx.r3.s64 = ctx.r11.s64 + -6336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5186C"))) PPC_WEAK_FUNC(sub_83C5186C);
PPC_FUNC_IMPL(__imp__sub_83C5186C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51870"))) PPC_WEAK_FUNC(sub_83C51870);
PPC_FUNC_IMPL(__imp__sub_83C51870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6328
	ctx.r3.s64 = ctx.r11.s64 + -6328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5187C"))) PPC_WEAK_FUNC(sub_83C5187C);
PPC_FUNC_IMPL(__imp__sub_83C5187C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51880"))) PPC_WEAK_FUNC(sub_83C51880);
PPC_FUNC_IMPL(__imp__sub_83C51880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6320
	ctx.r3.s64 = ctx.r11.s64 + -6320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5188C"))) PPC_WEAK_FUNC(sub_83C5188C);
PPC_FUNC_IMPL(__imp__sub_83C5188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51890"))) PPC_WEAK_FUNC(sub_83C51890);
PPC_FUNC_IMPL(__imp__sub_83C51890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6312
	ctx.r3.s64 = ctx.r11.s64 + -6312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5189C"))) PPC_WEAK_FUNC(sub_83C5189C);
PPC_FUNC_IMPL(__imp__sub_83C5189C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C518A0"))) PPC_WEAK_FUNC(sub_83C518A0);
PPC_FUNC_IMPL(__imp__sub_83C518A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6304
	ctx.r3.s64 = ctx.r11.s64 + -6304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C518AC"))) PPC_WEAK_FUNC(sub_83C518AC);
PPC_FUNC_IMPL(__imp__sub_83C518AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C518B0"))) PPC_WEAK_FUNC(sub_83C518B0);
PPC_FUNC_IMPL(__imp__sub_83C518B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6296
	ctx.r3.s64 = ctx.r11.s64 + -6296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C518BC"))) PPC_WEAK_FUNC(sub_83C518BC);
PPC_FUNC_IMPL(__imp__sub_83C518BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C518C0"))) PPC_WEAK_FUNC(sub_83C518C0);
PPC_FUNC_IMPL(__imp__sub_83C518C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6288
	ctx.r3.s64 = ctx.r11.s64 + -6288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C518CC"))) PPC_WEAK_FUNC(sub_83C518CC);
PPC_FUNC_IMPL(__imp__sub_83C518CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C518D0"))) PPC_WEAK_FUNC(sub_83C518D0);
PPC_FUNC_IMPL(__imp__sub_83C518D0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,23448
	ctx.r3.s64 = ctx.r11.s64 + 23448;
	// bl 0x83523120
	ctx.lr = 0x83C518E8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-6280
	ctx.r3.s64 = ctx.r10.s64 + -6280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C518F4;
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

__attribute__((alias("__imp__sub_83C51904"))) PPC_WEAK_FUNC(sub_83C51904);
PPC_FUNC_IMPL(__imp__sub_83C51904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51908"))) PPC_WEAK_FUNC(sub_83C51908);
PPC_FUNC_IMPL(__imp__sub_83C51908) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23464
	ctx.r7.s64 = ctx.r8.s64 + 23464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51930"))) PPC_WEAK_FUNC(sub_83C51930);
PPC_FUNC_IMPL(__imp__sub_83C51930) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,10480
	ctx.r6.s64 = ctx.r7.s64 + 10480;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,10408(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10408);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,23464(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23464);
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
	// std r9,10480(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10480, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51978"))) PPC_WEAK_FUNC(sub_83C51978);
PPC_FUNC_IMPL(__imp__sub_83C51978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6264
	ctx.r3.s64 = ctx.r11.s64 + -6264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51984"))) PPC_WEAK_FUNC(sub_83C51984);
PPC_FUNC_IMPL(__imp__sub_83C51984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51988"))) PPC_WEAK_FUNC(sub_83C51988);
PPC_FUNC_IMPL(__imp__sub_83C51988) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,23472
	ctx.r3.s64 = ctx.r11.s64 + 23472;
	// bl 0x8259af80
	ctx.lr = 0x83C519A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-6248
	ctx.r3.s64 = ctx.r10.s64 + -6248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C519AC;
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

__attribute__((alias("__imp__sub_83C519BC"))) PPC_WEAK_FUNC(sub_83C519BC);
PPC_FUNC_IMPL(__imp__sub_83C519BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C519C0"))) PPC_WEAK_FUNC(sub_83C519C0);
PPC_FUNC_IMPL(__imp__sub_83C519C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,23452
	ctx.r11.s64 = ctx.r8.s64 + 23452;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,10456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10456);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6256
	ctx.r3.s64 = ctx.r6.s64 + -6256;
	// stw r10,23452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23452, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C519F0"))) PPC_WEAK_FUNC(sub_83C519F0);
PPC_FUNC_IMPL(__imp__sub_83C519F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6240
	ctx.r3.s64 = ctx.r11.s64 + -6240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C519FC"))) PPC_WEAK_FUNC(sub_83C519FC);
PPC_FUNC_IMPL(__imp__sub_83C519FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51A00"))) PPC_WEAK_FUNC(sub_83C51A00);
PPC_FUNC_IMPL(__imp__sub_83C51A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6232
	ctx.r3.s64 = ctx.r11.s64 + -6232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51A0C"))) PPC_WEAK_FUNC(sub_83C51A0C);
PPC_FUNC_IMPL(__imp__sub_83C51A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51A10"))) PPC_WEAK_FUNC(sub_83C51A10);
PPC_FUNC_IMPL(__imp__sub_83C51A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6224
	ctx.r3.s64 = ctx.r11.s64 + -6224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51A1C"))) PPC_WEAK_FUNC(sub_83C51A1C);
PPC_FUNC_IMPL(__imp__sub_83C51A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51A20"))) PPC_WEAK_FUNC(sub_83C51A20);
PPC_FUNC_IMPL(__imp__sub_83C51A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6216
	ctx.r3.s64 = ctx.r11.s64 + -6216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51A2C"))) PPC_WEAK_FUNC(sub_83C51A2C);
PPC_FUNC_IMPL(__imp__sub_83C51A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51A30"))) PPC_WEAK_FUNC(sub_83C51A30);
PPC_FUNC_IMPL(__imp__sub_83C51A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6208
	ctx.r3.s64 = ctx.r11.s64 + -6208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51A3C"))) PPC_WEAK_FUNC(sub_83C51A3C);
PPC_FUNC_IMPL(__imp__sub_83C51A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51A40"))) PPC_WEAK_FUNC(sub_83C51A40);
PPC_FUNC_IMPL(__imp__sub_83C51A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6200
	ctx.r3.s64 = ctx.r11.s64 + -6200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51A4C"))) PPC_WEAK_FUNC(sub_83C51A4C);
PPC_FUNC_IMPL(__imp__sub_83C51A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51A50"))) PPC_WEAK_FUNC(sub_83C51A50);
PPC_FUNC_IMPL(__imp__sub_83C51A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6192
	ctx.r3.s64 = ctx.r11.s64 + -6192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51A5C"))) PPC_WEAK_FUNC(sub_83C51A5C);
PPC_FUNC_IMPL(__imp__sub_83C51A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51A60"))) PPC_WEAK_FUNC(sub_83C51A60);
PPC_FUNC_IMPL(__imp__sub_83C51A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6184
	ctx.r3.s64 = ctx.r11.s64 + -6184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51A6C"))) PPC_WEAK_FUNC(sub_83C51A6C);
PPC_FUNC_IMPL(__imp__sub_83C51A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51A70"))) PPC_WEAK_FUNC(sub_83C51A70);
PPC_FUNC_IMPL(__imp__sub_83C51A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6176
	ctx.r3.s64 = ctx.r11.s64 + -6176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51A7C"))) PPC_WEAK_FUNC(sub_83C51A7C);
PPC_FUNC_IMPL(__imp__sub_83C51A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51A80"))) PPC_WEAK_FUNC(sub_83C51A80);
PPC_FUNC_IMPL(__imp__sub_83C51A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6168
	ctx.r3.s64 = ctx.r11.s64 + -6168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51A8C"))) PPC_WEAK_FUNC(sub_83C51A8C);
PPC_FUNC_IMPL(__imp__sub_83C51A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51A90"))) PPC_WEAK_FUNC(sub_83C51A90);
PPC_FUNC_IMPL(__imp__sub_83C51A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6160
	ctx.r3.s64 = ctx.r11.s64 + -6160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51A9C"))) PPC_WEAK_FUNC(sub_83C51A9C);
PPC_FUNC_IMPL(__imp__sub_83C51A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51AA0"))) PPC_WEAK_FUNC(sub_83C51AA0);
PPC_FUNC_IMPL(__imp__sub_83C51AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6152
	ctx.r3.s64 = ctx.r11.s64 + -6152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51AAC"))) PPC_WEAK_FUNC(sub_83C51AAC);
PPC_FUNC_IMPL(__imp__sub_83C51AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51AB0"))) PPC_WEAK_FUNC(sub_83C51AB0);
PPC_FUNC_IMPL(__imp__sub_83C51AB0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,23816
	ctx.r3.s64 = ctx.r11.s64 + 23816;
	// bl 0x83523120
	ctx.lr = 0x83C51AC8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-6144
	ctx.r3.s64 = ctx.r10.s64 + -6144;
	// bl 0x831cdcc8
	ctx.lr = 0x83C51AD4;
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

__attribute__((alias("__imp__sub_83C51AE4"))) PPC_WEAK_FUNC(sub_83C51AE4);
PPC_FUNC_IMPL(__imp__sub_83C51AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51AE8"))) PPC_WEAK_FUNC(sub_83C51AE8);
PPC_FUNC_IMPL(__imp__sub_83C51AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23832
	ctx.r7.s64 = ctx.r8.s64 + 23832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23832(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51B10"))) PPC_WEAK_FUNC(sub_83C51B10);
PPC_FUNC_IMPL(__imp__sub_83C51B10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,10608
	ctx.r6.s64 = ctx.r7.s64 + 10608;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,10536(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10536);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,23832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23832);
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
	// std r9,10608(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10608, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51B58"))) PPC_WEAK_FUNC(sub_83C51B58);
PPC_FUNC_IMPL(__imp__sub_83C51B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6128
	ctx.r3.s64 = ctx.r11.s64 + -6128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51B64"))) PPC_WEAK_FUNC(sub_83C51B64);
PPC_FUNC_IMPL(__imp__sub_83C51B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51B68"))) PPC_WEAK_FUNC(sub_83C51B68);
PPC_FUNC_IMPL(__imp__sub_83C51B68) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,23840
	ctx.r3.s64 = ctx.r11.s64 + 23840;
	// bl 0x8259af80
	ctx.lr = 0x83C51B80;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-6112
	ctx.r3.s64 = ctx.r10.s64 + -6112;
	// bl 0x831cdcc8
	ctx.lr = 0x83C51B8C;
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

__attribute__((alias("__imp__sub_83C51B9C"))) PPC_WEAK_FUNC(sub_83C51B9C);
PPC_FUNC_IMPL(__imp__sub_83C51B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51BA0"))) PPC_WEAK_FUNC(sub_83C51BA0);
PPC_FUNC_IMPL(__imp__sub_83C51BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,23820
	ctx.r11.s64 = ctx.r8.s64 + 23820;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,10584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10584);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6120
	ctx.r3.s64 = ctx.r6.s64 + -6120;
	// stw r10,23820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23820, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51BD0"))) PPC_WEAK_FUNC(sub_83C51BD0);
PPC_FUNC_IMPL(__imp__sub_83C51BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51BDC"))) PPC_WEAK_FUNC(sub_83C51BDC);
PPC_FUNC_IMPL(__imp__sub_83C51BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51BE0"))) PPC_WEAK_FUNC(sub_83C51BE0);
PPC_FUNC_IMPL(__imp__sub_83C51BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6096
	ctx.r3.s64 = ctx.r11.s64 + -6096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51BEC"))) PPC_WEAK_FUNC(sub_83C51BEC);
PPC_FUNC_IMPL(__imp__sub_83C51BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51BF0"))) PPC_WEAK_FUNC(sub_83C51BF0);
PPC_FUNC_IMPL(__imp__sub_83C51BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6088
	ctx.r3.s64 = ctx.r11.s64 + -6088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51BFC"))) PPC_WEAK_FUNC(sub_83C51BFC);
PPC_FUNC_IMPL(__imp__sub_83C51BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51C00"))) PPC_WEAK_FUNC(sub_83C51C00);
PPC_FUNC_IMPL(__imp__sub_83C51C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6080
	ctx.r3.s64 = ctx.r11.s64 + -6080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51C0C"))) PPC_WEAK_FUNC(sub_83C51C0C);
PPC_FUNC_IMPL(__imp__sub_83C51C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51C10"))) PPC_WEAK_FUNC(sub_83C51C10);
PPC_FUNC_IMPL(__imp__sub_83C51C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6072
	ctx.r3.s64 = ctx.r11.s64 + -6072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51C1C"))) PPC_WEAK_FUNC(sub_83C51C1C);
PPC_FUNC_IMPL(__imp__sub_83C51C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51C20"))) PPC_WEAK_FUNC(sub_83C51C20);
PPC_FUNC_IMPL(__imp__sub_83C51C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6064
	ctx.r3.s64 = ctx.r11.s64 + -6064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51C2C"))) PPC_WEAK_FUNC(sub_83C51C2C);
PPC_FUNC_IMPL(__imp__sub_83C51C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51C30"))) PPC_WEAK_FUNC(sub_83C51C30);
PPC_FUNC_IMPL(__imp__sub_83C51C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6056
	ctx.r3.s64 = ctx.r11.s64 + -6056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51C3C"))) PPC_WEAK_FUNC(sub_83C51C3C);
PPC_FUNC_IMPL(__imp__sub_83C51C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51C40"))) PPC_WEAK_FUNC(sub_83C51C40);
PPC_FUNC_IMPL(__imp__sub_83C51C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6048
	ctx.r3.s64 = ctx.r11.s64 + -6048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51C4C"))) PPC_WEAK_FUNC(sub_83C51C4C);
PPC_FUNC_IMPL(__imp__sub_83C51C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51C50"))) PPC_WEAK_FUNC(sub_83C51C50);
PPC_FUNC_IMPL(__imp__sub_83C51C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6040
	ctx.r3.s64 = ctx.r11.s64 + -6040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51C5C"))) PPC_WEAK_FUNC(sub_83C51C5C);
PPC_FUNC_IMPL(__imp__sub_83C51C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51C60"))) PPC_WEAK_FUNC(sub_83C51C60);
PPC_FUNC_IMPL(__imp__sub_83C51C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6032
	ctx.r3.s64 = ctx.r11.s64 + -6032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51C6C"))) PPC_WEAK_FUNC(sub_83C51C6C);
PPC_FUNC_IMPL(__imp__sub_83C51C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51C70"))) PPC_WEAK_FUNC(sub_83C51C70);
PPC_FUNC_IMPL(__imp__sub_83C51C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6024
	ctx.r3.s64 = ctx.r11.s64 + -6024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51C7C"))) PPC_WEAK_FUNC(sub_83C51C7C);
PPC_FUNC_IMPL(__imp__sub_83C51C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51C80"))) PPC_WEAK_FUNC(sub_83C51C80);
PPC_FUNC_IMPL(__imp__sub_83C51C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6016
	ctx.r3.s64 = ctx.r11.s64 + -6016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51C8C"))) PPC_WEAK_FUNC(sub_83C51C8C);
PPC_FUNC_IMPL(__imp__sub_83C51C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51C90"))) PPC_WEAK_FUNC(sub_83C51C90);
PPC_FUNC_IMPL(__imp__sub_83C51C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6008
	ctx.r3.s64 = ctx.r11.s64 + -6008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51C9C"))) PPC_WEAK_FUNC(sub_83C51C9C);
PPC_FUNC_IMPL(__imp__sub_83C51C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51CA0"))) PPC_WEAK_FUNC(sub_83C51CA0);
PPC_FUNC_IMPL(__imp__sub_83C51CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6000
	ctx.r3.s64 = ctx.r11.s64 + -6000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51CAC"))) PPC_WEAK_FUNC(sub_83C51CAC);
PPC_FUNC_IMPL(__imp__sub_83C51CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51CB0"))) PPC_WEAK_FUNC(sub_83C51CB0);
PPC_FUNC_IMPL(__imp__sub_83C51CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5992
	ctx.r3.s64 = ctx.r11.s64 + -5992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51CBC"))) PPC_WEAK_FUNC(sub_83C51CBC);
PPC_FUNC_IMPL(__imp__sub_83C51CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51CC0"))) PPC_WEAK_FUNC(sub_83C51CC0);
PPC_FUNC_IMPL(__imp__sub_83C51CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5984
	ctx.r3.s64 = ctx.r11.s64 + -5984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51CCC"))) PPC_WEAK_FUNC(sub_83C51CCC);
PPC_FUNC_IMPL(__imp__sub_83C51CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51CD0"))) PPC_WEAK_FUNC(sub_83C51CD0);
PPC_FUNC_IMPL(__imp__sub_83C51CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5976
	ctx.r3.s64 = ctx.r11.s64 + -5976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51CDC"))) PPC_WEAK_FUNC(sub_83C51CDC);
PPC_FUNC_IMPL(__imp__sub_83C51CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51CE0"))) PPC_WEAK_FUNC(sub_83C51CE0);
PPC_FUNC_IMPL(__imp__sub_83C51CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5968
	ctx.r3.s64 = ctx.r11.s64 + -5968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51CEC"))) PPC_WEAK_FUNC(sub_83C51CEC);
PPC_FUNC_IMPL(__imp__sub_83C51CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51CF0"))) PPC_WEAK_FUNC(sub_83C51CF0);
PPC_FUNC_IMPL(__imp__sub_83C51CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5960
	ctx.r3.s64 = ctx.r11.s64 + -5960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51CFC"))) PPC_WEAK_FUNC(sub_83C51CFC);
PPC_FUNC_IMPL(__imp__sub_83C51CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51D00"))) PPC_WEAK_FUNC(sub_83C51D00);
PPC_FUNC_IMPL(__imp__sub_83C51D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5952
	ctx.r3.s64 = ctx.r11.s64 + -5952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51D0C"))) PPC_WEAK_FUNC(sub_83C51D0C);
PPC_FUNC_IMPL(__imp__sub_83C51D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51D10"))) PPC_WEAK_FUNC(sub_83C51D10);
PPC_FUNC_IMPL(__imp__sub_83C51D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5944
	ctx.r3.s64 = ctx.r11.s64 + -5944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51D1C"))) PPC_WEAK_FUNC(sub_83C51D1C);
PPC_FUNC_IMPL(__imp__sub_83C51D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51D20"))) PPC_WEAK_FUNC(sub_83C51D20);
PPC_FUNC_IMPL(__imp__sub_83C51D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5936
	ctx.r3.s64 = ctx.r11.s64 + -5936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51D2C"))) PPC_WEAK_FUNC(sub_83C51D2C);
PPC_FUNC_IMPL(__imp__sub_83C51D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51D30"))) PPC_WEAK_FUNC(sub_83C51D30);
PPC_FUNC_IMPL(__imp__sub_83C51D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5928
	ctx.r3.s64 = ctx.r11.s64 + -5928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51D3C"))) PPC_WEAK_FUNC(sub_83C51D3C);
PPC_FUNC_IMPL(__imp__sub_83C51D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51D40"))) PPC_WEAK_FUNC(sub_83C51D40);
PPC_FUNC_IMPL(__imp__sub_83C51D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5920
	ctx.r3.s64 = ctx.r11.s64 + -5920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51D4C"))) PPC_WEAK_FUNC(sub_83C51D4C);
PPC_FUNC_IMPL(__imp__sub_83C51D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51D50"))) PPC_WEAK_FUNC(sub_83C51D50);
PPC_FUNC_IMPL(__imp__sub_83C51D50) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,24192
	ctx.r3.s64 = ctx.r11.s64 + 24192;
	// bl 0x83523120
	ctx.lr = 0x83C51D68;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-5912
	ctx.r3.s64 = ctx.r10.s64 + -5912;
	// bl 0x831cdcc8
	ctx.lr = 0x83C51D74;
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

__attribute__((alias("__imp__sub_83C51D84"))) PPC_WEAK_FUNC(sub_83C51D84);
PPC_FUNC_IMPL(__imp__sub_83C51D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51D88"))) PPC_WEAK_FUNC(sub_83C51D88);
PPC_FUNC_IMPL(__imp__sub_83C51D88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24208
	ctx.r7.s64 = ctx.r8.s64 + 24208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24208(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24208);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24208(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24208, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51DB0"))) PPC_WEAK_FUNC(sub_83C51DB0);
PPC_FUNC_IMPL(__imp__sub_83C51DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,10840
	ctx.r6.s64 = ctx.r7.s64 + 10840;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,10768(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10768);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,24208(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24208);
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
	// std r9,10840(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10840, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51DF8"))) PPC_WEAK_FUNC(sub_83C51DF8);
PPC_FUNC_IMPL(__imp__sub_83C51DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5896
	ctx.r3.s64 = ctx.r11.s64 + -5896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51E04"))) PPC_WEAK_FUNC(sub_83C51E04);
PPC_FUNC_IMPL(__imp__sub_83C51E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51E08"))) PPC_WEAK_FUNC(sub_83C51E08);
PPC_FUNC_IMPL(__imp__sub_83C51E08) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,24216
	ctx.r3.s64 = ctx.r11.s64 + 24216;
	// bl 0x8259af80
	ctx.lr = 0x83C51E20;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-5880
	ctx.r3.s64 = ctx.r10.s64 + -5880;
	// bl 0x831cdcc8
	ctx.lr = 0x83C51E2C;
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

__attribute__((alias("__imp__sub_83C51E3C"))) PPC_WEAK_FUNC(sub_83C51E3C);
PPC_FUNC_IMPL(__imp__sub_83C51E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51E40"))) PPC_WEAK_FUNC(sub_83C51E40);
PPC_FUNC_IMPL(__imp__sub_83C51E40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,24196
	ctx.r11.s64 = ctx.r8.s64 + 24196;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,10816(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10816);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5888
	ctx.r3.s64 = ctx.r6.s64 + -5888;
	// stw r10,24196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24196, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51E70"))) PPC_WEAK_FUNC(sub_83C51E70);
PPC_FUNC_IMPL(__imp__sub_83C51E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5872
	ctx.r3.s64 = ctx.r11.s64 + -5872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51E7C"))) PPC_WEAK_FUNC(sub_83C51E7C);
PPC_FUNC_IMPL(__imp__sub_83C51E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51E80"))) PPC_WEAK_FUNC(sub_83C51E80);
PPC_FUNC_IMPL(__imp__sub_83C51E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5864
	ctx.r3.s64 = ctx.r11.s64 + -5864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51E8C"))) PPC_WEAK_FUNC(sub_83C51E8C);
PPC_FUNC_IMPL(__imp__sub_83C51E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51E90"))) PPC_WEAK_FUNC(sub_83C51E90);
PPC_FUNC_IMPL(__imp__sub_83C51E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5856
	ctx.r3.s64 = ctx.r11.s64 + -5856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51E9C"))) PPC_WEAK_FUNC(sub_83C51E9C);
PPC_FUNC_IMPL(__imp__sub_83C51E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51EA0"))) PPC_WEAK_FUNC(sub_83C51EA0);
PPC_FUNC_IMPL(__imp__sub_83C51EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5848
	ctx.r3.s64 = ctx.r11.s64 + -5848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51EAC"))) PPC_WEAK_FUNC(sub_83C51EAC);
PPC_FUNC_IMPL(__imp__sub_83C51EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51EB0"))) PPC_WEAK_FUNC(sub_83C51EB0);
PPC_FUNC_IMPL(__imp__sub_83C51EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5840
	ctx.r3.s64 = ctx.r11.s64 + -5840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51EBC"))) PPC_WEAK_FUNC(sub_83C51EBC);
PPC_FUNC_IMPL(__imp__sub_83C51EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51EC0"))) PPC_WEAK_FUNC(sub_83C51EC0);
PPC_FUNC_IMPL(__imp__sub_83C51EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5832
	ctx.r3.s64 = ctx.r11.s64 + -5832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51ECC"))) PPC_WEAK_FUNC(sub_83C51ECC);
PPC_FUNC_IMPL(__imp__sub_83C51ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51ED0"))) PPC_WEAK_FUNC(sub_83C51ED0);
PPC_FUNC_IMPL(__imp__sub_83C51ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5824
	ctx.r3.s64 = ctx.r11.s64 + -5824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51EDC"))) PPC_WEAK_FUNC(sub_83C51EDC);
PPC_FUNC_IMPL(__imp__sub_83C51EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51EE0"))) PPC_WEAK_FUNC(sub_83C51EE0);
PPC_FUNC_IMPL(__imp__sub_83C51EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5816
	ctx.r3.s64 = ctx.r11.s64 + -5816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51EEC"))) PPC_WEAK_FUNC(sub_83C51EEC);
PPC_FUNC_IMPL(__imp__sub_83C51EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51EF0"))) PPC_WEAK_FUNC(sub_83C51EF0);
PPC_FUNC_IMPL(__imp__sub_83C51EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5808
	ctx.r3.s64 = ctx.r11.s64 + -5808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51EFC"))) PPC_WEAK_FUNC(sub_83C51EFC);
PPC_FUNC_IMPL(__imp__sub_83C51EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51F00"))) PPC_WEAK_FUNC(sub_83C51F00);
PPC_FUNC_IMPL(__imp__sub_83C51F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5800
	ctx.r3.s64 = ctx.r11.s64 + -5800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51F0C"))) PPC_WEAK_FUNC(sub_83C51F0C);
PPC_FUNC_IMPL(__imp__sub_83C51F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51F10"))) PPC_WEAK_FUNC(sub_83C51F10);
PPC_FUNC_IMPL(__imp__sub_83C51F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5792
	ctx.r3.s64 = ctx.r11.s64 + -5792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51F1C"))) PPC_WEAK_FUNC(sub_83C51F1C);
PPC_FUNC_IMPL(__imp__sub_83C51F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51F20"))) PPC_WEAK_FUNC(sub_83C51F20);
PPC_FUNC_IMPL(__imp__sub_83C51F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5784
	ctx.r3.s64 = ctx.r11.s64 + -5784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51F2C"))) PPC_WEAK_FUNC(sub_83C51F2C);
PPC_FUNC_IMPL(__imp__sub_83C51F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51F30"))) PPC_WEAK_FUNC(sub_83C51F30);
PPC_FUNC_IMPL(__imp__sub_83C51F30) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,24560
	ctx.r3.s64 = ctx.r11.s64 + 24560;
	// bl 0x83523120
	ctx.lr = 0x83C51F48;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-5776
	ctx.r3.s64 = ctx.r10.s64 + -5776;
	// bl 0x831cdcc8
	ctx.lr = 0x83C51F54;
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

__attribute__((alias("__imp__sub_83C51F64"))) PPC_WEAK_FUNC(sub_83C51F64);
PPC_FUNC_IMPL(__imp__sub_83C51F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51F68"))) PPC_WEAK_FUNC(sub_83C51F68);
PPC_FUNC_IMPL(__imp__sub_83C51F68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24576
	ctx.r7.s64 = ctx.r8.s64 + 24576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24576(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24576);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24576(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24576, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51F90"))) PPC_WEAK_FUNC(sub_83C51F90);
PPC_FUNC_IMPL(__imp__sub_83C51F90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,10968
	ctx.r6.s64 = ctx.r7.s64 + 10968;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,10896(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10896);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,24576(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24576);
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
	// std r9,10968(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10968, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51FD8"))) PPC_WEAK_FUNC(sub_83C51FD8);
PPC_FUNC_IMPL(__imp__sub_83C51FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5760
	ctx.r3.s64 = ctx.r11.s64 + -5760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51FE4"))) PPC_WEAK_FUNC(sub_83C51FE4);
PPC_FUNC_IMPL(__imp__sub_83C51FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51FE8"))) PPC_WEAK_FUNC(sub_83C51FE8);
PPC_FUNC_IMPL(__imp__sub_83C51FE8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,24584
	ctx.r3.s64 = ctx.r11.s64 + 24584;
	// bl 0x8259af80
	ctx.lr = 0x83C52000;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-5744
	ctx.r3.s64 = ctx.r10.s64 + -5744;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5200C;
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

__attribute__((alias("__imp__sub_83C5201C"))) PPC_WEAK_FUNC(sub_83C5201C);
PPC_FUNC_IMPL(__imp__sub_83C5201C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52020"))) PPC_WEAK_FUNC(sub_83C52020);
PPC_FUNC_IMPL(__imp__sub_83C52020) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,24564
	ctx.r11.s64 = ctx.r8.s64 + 24564;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,10944(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10944);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5752
	ctx.r3.s64 = ctx.r6.s64 + -5752;
	// stw r10,24564(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24564, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52050"))) PPC_WEAK_FUNC(sub_83C52050);
PPC_FUNC_IMPL(__imp__sub_83C52050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5736
	ctx.r3.s64 = ctx.r11.s64 + -5736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5205C"))) PPC_WEAK_FUNC(sub_83C5205C);
PPC_FUNC_IMPL(__imp__sub_83C5205C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52060"))) PPC_WEAK_FUNC(sub_83C52060);
PPC_FUNC_IMPL(__imp__sub_83C52060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5728
	ctx.r3.s64 = ctx.r11.s64 + -5728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5206C"))) PPC_WEAK_FUNC(sub_83C5206C);
PPC_FUNC_IMPL(__imp__sub_83C5206C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52070"))) PPC_WEAK_FUNC(sub_83C52070);
PPC_FUNC_IMPL(__imp__sub_83C52070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5720
	ctx.r3.s64 = ctx.r11.s64 + -5720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5207C"))) PPC_WEAK_FUNC(sub_83C5207C);
PPC_FUNC_IMPL(__imp__sub_83C5207C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52080"))) PPC_WEAK_FUNC(sub_83C52080);
PPC_FUNC_IMPL(__imp__sub_83C52080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5712
	ctx.r3.s64 = ctx.r11.s64 + -5712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5208C"))) PPC_WEAK_FUNC(sub_83C5208C);
PPC_FUNC_IMPL(__imp__sub_83C5208C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52090"))) PPC_WEAK_FUNC(sub_83C52090);
PPC_FUNC_IMPL(__imp__sub_83C52090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5704
	ctx.r3.s64 = ctx.r11.s64 + -5704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5209C"))) PPC_WEAK_FUNC(sub_83C5209C);
PPC_FUNC_IMPL(__imp__sub_83C5209C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C520A0"))) PPC_WEAK_FUNC(sub_83C520A0);
PPC_FUNC_IMPL(__imp__sub_83C520A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5696
	ctx.r3.s64 = ctx.r11.s64 + -5696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C520AC"))) PPC_WEAK_FUNC(sub_83C520AC);
PPC_FUNC_IMPL(__imp__sub_83C520AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C520B0"))) PPC_WEAK_FUNC(sub_83C520B0);
PPC_FUNC_IMPL(__imp__sub_83C520B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5688
	ctx.r3.s64 = ctx.r11.s64 + -5688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

