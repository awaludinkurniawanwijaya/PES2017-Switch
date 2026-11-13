#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C263BC"))) PPC_WEAK_FUNC(sub_83C263BC);
PPC_FUNC_IMPL(__imp__sub_83C263BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C263C0"))) PPC_WEAK_FUNC(sub_83C263C0);
PPC_FUNC_IMPL(__imp__sub_83C263C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-808
	ctx.r3.s64 = ctx.r11.s64 + -808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C263CC"))) PPC_WEAK_FUNC(sub_83C263CC);
PPC_FUNC_IMPL(__imp__sub_83C263CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C263D0"))) PPC_WEAK_FUNC(sub_83C263D0);
PPC_FUNC_IMPL(__imp__sub_83C263D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-800
	ctx.r3.s64 = ctx.r11.s64 + -800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C263DC"))) PPC_WEAK_FUNC(sub_83C263DC);
PPC_FUNC_IMPL(__imp__sub_83C263DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C263E0"))) PPC_WEAK_FUNC(sub_83C263E0);
PPC_FUNC_IMPL(__imp__sub_83C263E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-792
	ctx.r3.s64 = ctx.r11.s64 + -792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C263EC"))) PPC_WEAK_FUNC(sub_83C263EC);
PPC_FUNC_IMPL(__imp__sub_83C263EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C263F0"))) PPC_WEAK_FUNC(sub_83C263F0);
PPC_FUNC_IMPL(__imp__sub_83C263F0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-15184
	ctx.r4.s64 = ctx.r11.s64 + -15184;
	// addi r3,r10,16412
	ctx.r3.s64 = ctx.r10.s64 + 16412;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C26414;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-768
	ctx.r3.s64 = ctx.r9.s64 + -768;
	// bl 0x831cdcc8
	ctx.lr = 0x83C26420;
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

__attribute__((alias("__imp__sub_83C26430"))) PPC_WEAK_FUNC(sub_83C26430);
PPC_FUNC_IMPL(__imp__sub_83C26430) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12764
	ctx.r7.s64 = ctx.r8.s64 + -12764;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12764(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12764);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12764(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12764, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C26458"))) PPC_WEAK_FUNC(sub_83C26458);
PPC_FUNC_IMPL(__imp__sub_83C26458) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,16440
	ctx.r6.s64 = ctx.r7.s64 + 16440;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16340(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16340);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12764(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12764);
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
	// std r9,16440(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16440, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C264A0"))) PPC_WEAK_FUNC(sub_83C264A0);
PPC_FUNC_IMPL(__imp__sub_83C264A0) {
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
	// addi r3,r11,-12768
	ctx.r3.s64 = ctx.r11.s64 + -12768;
	// bl 0x83523120
	ctx.lr = 0x83C264B8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-784
	ctx.r3.s64 = ctx.r10.s64 + -784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C264C4;
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

__attribute__((alias("__imp__sub_83C264D4"))) PPC_WEAK_FUNC(sub_83C264D4);
PPC_FUNC_IMPL(__imp__sub_83C264D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C264D8"))) PPC_WEAK_FUNC(sub_83C264D8);
PPC_FUNC_IMPL(__imp__sub_83C264D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-664
	ctx.r3.s64 = ctx.r11.s64 + -664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C264E4"))) PPC_WEAK_FUNC(sub_83C264E4);
PPC_FUNC_IMPL(__imp__sub_83C264E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C264E8"))) PPC_WEAK_FUNC(sub_83C264E8);
PPC_FUNC_IMPL(__imp__sub_83C264E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-656
	ctx.r3.s64 = ctx.r11.s64 + -656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C264F4"))) PPC_WEAK_FUNC(sub_83C264F4);
PPC_FUNC_IMPL(__imp__sub_83C264F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C264F8"))) PPC_WEAK_FUNC(sub_83C264F8);
PPC_FUNC_IMPL(__imp__sub_83C264F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-648
	ctx.r3.s64 = ctx.r11.s64 + -648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26504"))) PPC_WEAK_FUNC(sub_83C26504);
PPC_FUNC_IMPL(__imp__sub_83C26504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26508"))) PPC_WEAK_FUNC(sub_83C26508);
PPC_FUNC_IMPL(__imp__sub_83C26508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-640
	ctx.r3.s64 = ctx.r11.s64 + -640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26514"))) PPC_WEAK_FUNC(sub_83C26514);
PPC_FUNC_IMPL(__imp__sub_83C26514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26518"))) PPC_WEAK_FUNC(sub_83C26518);
PPC_FUNC_IMPL(__imp__sub_83C26518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-632
	ctx.r3.s64 = ctx.r11.s64 + -632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26524"))) PPC_WEAK_FUNC(sub_83C26524);
PPC_FUNC_IMPL(__imp__sub_83C26524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26528"))) PPC_WEAK_FUNC(sub_83C26528);
PPC_FUNC_IMPL(__imp__sub_83C26528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26534"))) PPC_WEAK_FUNC(sub_83C26534);
PPC_FUNC_IMPL(__imp__sub_83C26534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26538"))) PPC_WEAK_FUNC(sub_83C26538);
PPC_FUNC_IMPL(__imp__sub_83C26538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-616
	ctx.r3.s64 = ctx.r11.s64 + -616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26544"))) PPC_WEAK_FUNC(sub_83C26544);
PPC_FUNC_IMPL(__imp__sub_83C26544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26548"))) PPC_WEAK_FUNC(sub_83C26548);
PPC_FUNC_IMPL(__imp__sub_83C26548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-608
	ctx.r3.s64 = ctx.r11.s64 + -608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26554"))) PPC_WEAK_FUNC(sub_83C26554);
PPC_FUNC_IMPL(__imp__sub_83C26554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26558"))) PPC_WEAK_FUNC(sub_83C26558);
PPC_FUNC_IMPL(__imp__sub_83C26558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-600
	ctx.r3.s64 = ctx.r11.s64 + -600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26564"))) PPC_WEAK_FUNC(sub_83C26564);
PPC_FUNC_IMPL(__imp__sub_83C26564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26568"))) PPC_WEAK_FUNC(sub_83C26568);
PPC_FUNC_IMPL(__imp__sub_83C26568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-592
	ctx.r3.s64 = ctx.r11.s64 + -592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26574"))) PPC_WEAK_FUNC(sub_83C26574);
PPC_FUNC_IMPL(__imp__sub_83C26574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26578"))) PPC_WEAK_FUNC(sub_83C26578);
PPC_FUNC_IMPL(__imp__sub_83C26578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-584
	ctx.r3.s64 = ctx.r11.s64 + -584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26584"))) PPC_WEAK_FUNC(sub_83C26584);
PPC_FUNC_IMPL(__imp__sub_83C26584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26588"))) PPC_WEAK_FUNC(sub_83C26588);
PPC_FUNC_IMPL(__imp__sub_83C26588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-576
	ctx.r3.s64 = ctx.r11.s64 + -576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26594"))) PPC_WEAK_FUNC(sub_83C26594);
PPC_FUNC_IMPL(__imp__sub_83C26594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26598"))) PPC_WEAK_FUNC(sub_83C26598);
PPC_FUNC_IMPL(__imp__sub_83C26598) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-14904
	ctx.r4.s64 = ctx.r11.s64 + -14904;
	// addi r3,r10,16564
	ctx.r3.s64 = ctx.r10.s64 + 16564;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C265BC;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-552
	ctx.r3.s64 = ctx.r9.s64 + -552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C265C8;
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

__attribute__((alias("__imp__sub_83C265D8"))) PPC_WEAK_FUNC(sub_83C265D8);
PPC_FUNC_IMPL(__imp__sub_83C265D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12752
	ctx.r7.s64 = ctx.r8.s64 + -12752;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12752(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12752);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12752(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12752, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C26600"))) PPC_WEAK_FUNC(sub_83C26600);
PPC_FUNC_IMPL(__imp__sub_83C26600) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,16592
	ctx.r6.s64 = ctx.r7.s64 + 16592;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16492(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16492);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12752(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12752);
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
	// std r9,16592(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16592, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C26648"))) PPC_WEAK_FUNC(sub_83C26648);
PPC_FUNC_IMPL(__imp__sub_83C26648) {
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
	// addi r3,r11,-12756
	ctx.r3.s64 = ctx.r11.s64 + -12756;
	// bl 0x83523120
	ctx.lr = 0x83C26660;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-568
	ctx.r3.s64 = ctx.r10.s64 + -568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2666C;
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

__attribute__((alias("__imp__sub_83C2667C"))) PPC_WEAK_FUNC(sub_83C2667C);
PPC_FUNC_IMPL(__imp__sub_83C2667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26680"))) PPC_WEAK_FUNC(sub_83C26680);
PPC_FUNC_IMPL(__imp__sub_83C26680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-448
	ctx.r3.s64 = ctx.r11.s64 + -448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2668C"))) PPC_WEAK_FUNC(sub_83C2668C);
PPC_FUNC_IMPL(__imp__sub_83C2668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26690"))) PPC_WEAK_FUNC(sub_83C26690);
PPC_FUNC_IMPL(__imp__sub_83C26690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-440
	ctx.r3.s64 = ctx.r11.s64 + -440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2669C"))) PPC_WEAK_FUNC(sub_83C2669C);
PPC_FUNC_IMPL(__imp__sub_83C2669C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C266A0"))) PPC_WEAK_FUNC(sub_83C266A0);
PPC_FUNC_IMPL(__imp__sub_83C266A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-432
	ctx.r3.s64 = ctx.r11.s64 + -432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C266AC"))) PPC_WEAK_FUNC(sub_83C266AC);
PPC_FUNC_IMPL(__imp__sub_83C266AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C266B0"))) PPC_WEAK_FUNC(sub_83C266B0);
PPC_FUNC_IMPL(__imp__sub_83C266B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-424
	ctx.r3.s64 = ctx.r11.s64 + -424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C266BC"))) PPC_WEAK_FUNC(sub_83C266BC);
PPC_FUNC_IMPL(__imp__sub_83C266BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C266C0"))) PPC_WEAK_FUNC(sub_83C266C0);
PPC_FUNC_IMPL(__imp__sub_83C266C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-416
	ctx.r3.s64 = ctx.r11.s64 + -416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C266CC"))) PPC_WEAK_FUNC(sub_83C266CC);
PPC_FUNC_IMPL(__imp__sub_83C266CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C266D0"))) PPC_WEAK_FUNC(sub_83C266D0);
PPC_FUNC_IMPL(__imp__sub_83C266D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-408
	ctx.r3.s64 = ctx.r11.s64 + -408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C266DC"))) PPC_WEAK_FUNC(sub_83C266DC);
PPC_FUNC_IMPL(__imp__sub_83C266DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C266E0"))) PPC_WEAK_FUNC(sub_83C266E0);
PPC_FUNC_IMPL(__imp__sub_83C266E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-400
	ctx.r3.s64 = ctx.r11.s64 + -400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C266EC"))) PPC_WEAK_FUNC(sub_83C266EC);
PPC_FUNC_IMPL(__imp__sub_83C266EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C266F0"))) PPC_WEAK_FUNC(sub_83C266F0);
PPC_FUNC_IMPL(__imp__sub_83C266F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-392
	ctx.r3.s64 = ctx.r11.s64 + -392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C266FC"))) PPC_WEAK_FUNC(sub_83C266FC);
PPC_FUNC_IMPL(__imp__sub_83C266FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26700"))) PPC_WEAK_FUNC(sub_83C26700);
PPC_FUNC_IMPL(__imp__sub_83C26700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-384
	ctx.r3.s64 = ctx.r11.s64 + -384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2670C"))) PPC_WEAK_FUNC(sub_83C2670C);
PPC_FUNC_IMPL(__imp__sub_83C2670C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26710"))) PPC_WEAK_FUNC(sub_83C26710);
PPC_FUNC_IMPL(__imp__sub_83C26710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-376
	ctx.r3.s64 = ctx.r11.s64 + -376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2671C"))) PPC_WEAK_FUNC(sub_83C2671C);
PPC_FUNC_IMPL(__imp__sub_83C2671C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26720"))) PPC_WEAK_FUNC(sub_83C26720);
PPC_FUNC_IMPL(__imp__sub_83C26720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-368
	ctx.r3.s64 = ctx.r11.s64 + -368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2672C"))) PPC_WEAK_FUNC(sub_83C2672C);
PPC_FUNC_IMPL(__imp__sub_83C2672C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26730"))) PPC_WEAK_FUNC(sub_83C26730);
PPC_FUNC_IMPL(__imp__sub_83C26730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-360
	ctx.r3.s64 = ctx.r11.s64 + -360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2673C"))) PPC_WEAK_FUNC(sub_83C2673C);
PPC_FUNC_IMPL(__imp__sub_83C2673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26740"))) PPC_WEAK_FUNC(sub_83C26740);
PPC_FUNC_IMPL(__imp__sub_83C26740) {
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
	// addi r3,r11,-12744
	ctx.r3.s64 = ctx.r11.s64 + -12744;
	// bl 0x83523120
	ctx.lr = 0x83C26758;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-352
	ctx.r3.s64 = ctx.r10.s64 + -352;
	// bl 0x831cdcc8
	ctx.lr = 0x83C26764;
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

__attribute__((alias("__imp__sub_83C26774"))) PPC_WEAK_FUNC(sub_83C26774);
PPC_FUNC_IMPL(__imp__sub_83C26774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26778"))) PPC_WEAK_FUNC(sub_83C26778);
PPC_FUNC_IMPL(__imp__sub_83C26778) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12728
	ctx.r7.s64 = ctx.r8.s64 + -12728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12728);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12728(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12728, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C267A0"))) PPC_WEAK_FUNC(sub_83C267A0);
PPC_FUNC_IMPL(__imp__sub_83C267A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,16716
	ctx.r6.s64 = ctx.r7.s64 + 16716;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16644(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16644);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12728(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12728);
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
	// std r9,16716(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16716, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C267E8"))) PPC_WEAK_FUNC(sub_83C267E8);
PPC_FUNC_IMPL(__imp__sub_83C267E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-336
	ctx.r3.s64 = ctx.r11.s64 + -336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C267F4"))) PPC_WEAK_FUNC(sub_83C267F4);
PPC_FUNC_IMPL(__imp__sub_83C267F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C267F8"))) PPC_WEAK_FUNC(sub_83C267F8);
PPC_FUNC_IMPL(__imp__sub_83C267F8) {
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
	// addi r3,r11,-12720
	ctx.r3.s64 = ctx.r11.s64 + -12720;
	// bl 0x8259af80
	ctx.lr = 0x83C26810;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-320
	ctx.r3.s64 = ctx.r10.s64 + -320;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2681C;
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

__attribute__((alias("__imp__sub_83C2682C"))) PPC_WEAK_FUNC(sub_83C2682C);
PPC_FUNC_IMPL(__imp__sub_83C2682C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26830"))) PPC_WEAK_FUNC(sub_83C26830);
PPC_FUNC_IMPL(__imp__sub_83C26830) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12740
	ctx.r11.s64 = ctx.r8.s64 + -12740;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,16692(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16692);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-328
	ctx.r3.s64 = ctx.r6.s64 + -328;
	// stw r10,-12740(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12740, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26860"))) PPC_WEAK_FUNC(sub_83C26860);
PPC_FUNC_IMPL(__imp__sub_83C26860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-312
	ctx.r3.s64 = ctx.r11.s64 + -312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2686C"))) PPC_WEAK_FUNC(sub_83C2686C);
PPC_FUNC_IMPL(__imp__sub_83C2686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26870"))) PPC_WEAK_FUNC(sub_83C26870);
PPC_FUNC_IMPL(__imp__sub_83C26870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-304
	ctx.r3.s64 = ctx.r11.s64 + -304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2687C"))) PPC_WEAK_FUNC(sub_83C2687C);
PPC_FUNC_IMPL(__imp__sub_83C2687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26880"))) PPC_WEAK_FUNC(sub_83C26880);
PPC_FUNC_IMPL(__imp__sub_83C26880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-296
	ctx.r3.s64 = ctx.r11.s64 + -296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2688C"))) PPC_WEAK_FUNC(sub_83C2688C);
PPC_FUNC_IMPL(__imp__sub_83C2688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26890"))) PPC_WEAK_FUNC(sub_83C26890);
PPC_FUNC_IMPL(__imp__sub_83C26890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-288
	ctx.r3.s64 = ctx.r11.s64 + -288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2689C"))) PPC_WEAK_FUNC(sub_83C2689C);
PPC_FUNC_IMPL(__imp__sub_83C2689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C268A0"))) PPC_WEAK_FUNC(sub_83C268A0);
PPC_FUNC_IMPL(__imp__sub_83C268A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-280
	ctx.r3.s64 = ctx.r11.s64 + -280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C268AC"))) PPC_WEAK_FUNC(sub_83C268AC);
PPC_FUNC_IMPL(__imp__sub_83C268AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C268B0"))) PPC_WEAK_FUNC(sub_83C268B0);
PPC_FUNC_IMPL(__imp__sub_83C268B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-272
	ctx.r3.s64 = ctx.r11.s64 + -272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C268BC"))) PPC_WEAK_FUNC(sub_83C268BC);
PPC_FUNC_IMPL(__imp__sub_83C268BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C268C0"))) PPC_WEAK_FUNC(sub_83C268C0);
PPC_FUNC_IMPL(__imp__sub_83C268C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-264
	ctx.r3.s64 = ctx.r11.s64 + -264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C268CC"))) PPC_WEAK_FUNC(sub_83C268CC);
PPC_FUNC_IMPL(__imp__sub_83C268CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C268D0"))) PPC_WEAK_FUNC(sub_83C268D0);
PPC_FUNC_IMPL(__imp__sub_83C268D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-256
	ctx.r3.s64 = ctx.r11.s64 + -256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C268DC"))) PPC_WEAK_FUNC(sub_83C268DC);
PPC_FUNC_IMPL(__imp__sub_83C268DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C268E0"))) PPC_WEAK_FUNC(sub_83C268E0);
PPC_FUNC_IMPL(__imp__sub_83C268E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-248
	ctx.r3.s64 = ctx.r11.s64 + -248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C268EC"))) PPC_WEAK_FUNC(sub_83C268EC);
PPC_FUNC_IMPL(__imp__sub_83C268EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C268F0"))) PPC_WEAK_FUNC(sub_83C268F0);
PPC_FUNC_IMPL(__imp__sub_83C268F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-240
	ctx.r3.s64 = ctx.r11.s64 + -240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C268FC"))) PPC_WEAK_FUNC(sub_83C268FC);
PPC_FUNC_IMPL(__imp__sub_83C268FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26900"))) PPC_WEAK_FUNC(sub_83C26900);
PPC_FUNC_IMPL(__imp__sub_83C26900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-232
	ctx.r3.s64 = ctx.r11.s64 + -232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2690C"))) PPC_WEAK_FUNC(sub_83C2690C);
PPC_FUNC_IMPL(__imp__sub_83C2690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26910"))) PPC_WEAK_FUNC(sub_83C26910);
PPC_FUNC_IMPL(__imp__sub_83C26910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-224
	ctx.r3.s64 = ctx.r11.s64 + -224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2691C"))) PPC_WEAK_FUNC(sub_83C2691C);
PPC_FUNC_IMPL(__imp__sub_83C2691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26920"))) PPC_WEAK_FUNC(sub_83C26920);
PPC_FUNC_IMPL(__imp__sub_83C26920) {
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
	// addi r3,r11,-12376
	ctx.r3.s64 = ctx.r11.s64 + -12376;
	// bl 0x83523120
	ctx.lr = 0x83C26938;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-216
	ctx.r3.s64 = ctx.r10.s64 + -216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C26944;
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

__attribute__((alias("__imp__sub_83C26954"))) PPC_WEAK_FUNC(sub_83C26954);
PPC_FUNC_IMPL(__imp__sub_83C26954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26958"))) PPC_WEAK_FUNC(sub_83C26958);
PPC_FUNC_IMPL(__imp__sub_83C26958) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12360
	ctx.r7.s64 = ctx.r8.s64 + -12360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12360(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C26980"))) PPC_WEAK_FUNC(sub_83C26980);
PPC_FUNC_IMPL(__imp__sub_83C26980) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,16844
	ctx.r6.s64 = ctx.r7.s64 + 16844;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16772(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16772);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12360);
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
	// std r9,16844(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16844, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C269C8"))) PPC_WEAK_FUNC(sub_83C269C8);
PPC_FUNC_IMPL(__imp__sub_83C269C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-200
	ctx.r3.s64 = ctx.r11.s64 + -200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C269D4"))) PPC_WEAK_FUNC(sub_83C269D4);
PPC_FUNC_IMPL(__imp__sub_83C269D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C269D8"))) PPC_WEAK_FUNC(sub_83C269D8);
PPC_FUNC_IMPL(__imp__sub_83C269D8) {
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
	// addi r3,r11,-12352
	ctx.r3.s64 = ctx.r11.s64 + -12352;
	// bl 0x8259af80
	ctx.lr = 0x83C269F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-184
	ctx.r3.s64 = ctx.r10.s64 + -184;
	// bl 0x831cdcc8
	ctx.lr = 0x83C269FC;
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

__attribute__((alias("__imp__sub_83C26A0C"))) PPC_WEAK_FUNC(sub_83C26A0C);
PPC_FUNC_IMPL(__imp__sub_83C26A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26A10"))) PPC_WEAK_FUNC(sub_83C26A10);
PPC_FUNC_IMPL(__imp__sub_83C26A10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12372
	ctx.r11.s64 = ctx.r8.s64 + -12372;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,16820(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16820);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-192
	ctx.r3.s64 = ctx.r6.s64 + -192;
	// stw r10,-12372(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12372, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26A40"))) PPC_WEAK_FUNC(sub_83C26A40);
PPC_FUNC_IMPL(__imp__sub_83C26A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-176
	ctx.r3.s64 = ctx.r11.s64 + -176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26A4C"))) PPC_WEAK_FUNC(sub_83C26A4C);
PPC_FUNC_IMPL(__imp__sub_83C26A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26A50"))) PPC_WEAK_FUNC(sub_83C26A50);
PPC_FUNC_IMPL(__imp__sub_83C26A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-168
	ctx.r3.s64 = ctx.r11.s64 + -168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26A5C"))) PPC_WEAK_FUNC(sub_83C26A5C);
PPC_FUNC_IMPL(__imp__sub_83C26A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26A60"))) PPC_WEAK_FUNC(sub_83C26A60);
PPC_FUNC_IMPL(__imp__sub_83C26A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-160
	ctx.r3.s64 = ctx.r11.s64 + -160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26A6C"))) PPC_WEAK_FUNC(sub_83C26A6C);
PPC_FUNC_IMPL(__imp__sub_83C26A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26A70"))) PPC_WEAK_FUNC(sub_83C26A70);
PPC_FUNC_IMPL(__imp__sub_83C26A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-152
	ctx.r3.s64 = ctx.r11.s64 + -152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26A7C"))) PPC_WEAK_FUNC(sub_83C26A7C);
PPC_FUNC_IMPL(__imp__sub_83C26A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26A80"))) PPC_WEAK_FUNC(sub_83C26A80);
PPC_FUNC_IMPL(__imp__sub_83C26A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-144
	ctx.r3.s64 = ctx.r11.s64 + -144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26A8C"))) PPC_WEAK_FUNC(sub_83C26A8C);
PPC_FUNC_IMPL(__imp__sub_83C26A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26A90"))) PPC_WEAK_FUNC(sub_83C26A90);
PPC_FUNC_IMPL(__imp__sub_83C26A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-136
	ctx.r3.s64 = ctx.r11.s64 + -136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26A9C"))) PPC_WEAK_FUNC(sub_83C26A9C);
PPC_FUNC_IMPL(__imp__sub_83C26A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26AA0"))) PPC_WEAK_FUNC(sub_83C26AA0);
PPC_FUNC_IMPL(__imp__sub_83C26AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26AAC"))) PPC_WEAK_FUNC(sub_83C26AAC);
PPC_FUNC_IMPL(__imp__sub_83C26AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26AB0"))) PPC_WEAK_FUNC(sub_83C26AB0);
PPC_FUNC_IMPL(__imp__sub_83C26AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-120
	ctx.r3.s64 = ctx.r11.s64 + -120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26ABC"))) PPC_WEAK_FUNC(sub_83C26ABC);
PPC_FUNC_IMPL(__imp__sub_83C26ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26AC0"))) PPC_WEAK_FUNC(sub_83C26AC0);
PPC_FUNC_IMPL(__imp__sub_83C26AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26ACC"))) PPC_WEAK_FUNC(sub_83C26ACC);
PPC_FUNC_IMPL(__imp__sub_83C26ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26AD0"))) PPC_WEAK_FUNC(sub_83C26AD0);
PPC_FUNC_IMPL(__imp__sub_83C26AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-104
	ctx.r3.s64 = ctx.r11.s64 + -104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26ADC"))) PPC_WEAK_FUNC(sub_83C26ADC);
PPC_FUNC_IMPL(__imp__sub_83C26ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26AE0"))) PPC_WEAK_FUNC(sub_83C26AE0);
PPC_FUNC_IMPL(__imp__sub_83C26AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26AEC"))) PPC_WEAK_FUNC(sub_83C26AEC);
PPC_FUNC_IMPL(__imp__sub_83C26AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26AF0"))) PPC_WEAK_FUNC(sub_83C26AF0);
PPC_FUNC_IMPL(__imp__sub_83C26AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-88
	ctx.r3.s64 = ctx.r11.s64 + -88;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26AFC"))) PPC_WEAK_FUNC(sub_83C26AFC);
PPC_FUNC_IMPL(__imp__sub_83C26AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26B00"))) PPC_WEAK_FUNC(sub_83C26B00);
PPC_FUNC_IMPL(__imp__sub_83C26B00) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-13504
	ctx.r4.s64 = ctx.r11.s64 + -13504;
	// addi r3,r10,16972
	ctx.r3.s64 = ctx.r10.s64 + 16972;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C26B24;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-64
	ctx.r3.s64 = ctx.r9.s64 + -64;
	// bl 0x831cdcc8
	ctx.lr = 0x83C26B30;
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

__attribute__((alias("__imp__sub_83C26B40"))) PPC_WEAK_FUNC(sub_83C26B40);
PPC_FUNC_IMPL(__imp__sub_83C26B40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12004
	ctx.r7.s64 = ctx.r8.s64 + -12004;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12004(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12004);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12004(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12004, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C26B68"))) PPC_WEAK_FUNC(sub_83C26B68);
PPC_FUNC_IMPL(__imp__sub_83C26B68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,17000
	ctx.r6.s64 = ctx.r7.s64 + 17000;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16900(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16900);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12004(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12004);
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
	// std r9,17000(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17000, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C26BB0"))) PPC_WEAK_FUNC(sub_83C26BB0);
PPC_FUNC_IMPL(__imp__sub_83C26BB0) {
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
	// addi r3,r11,-12008
	ctx.r3.s64 = ctx.r11.s64 + -12008;
	// bl 0x83523120
	ctx.lr = 0x83C26BC8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-80
	ctx.r3.s64 = ctx.r10.s64 + -80;
	// bl 0x831cdcc8
	ctx.lr = 0x83C26BD4;
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

__attribute__((alias("__imp__sub_83C26BE4"))) PPC_WEAK_FUNC(sub_83C26BE4);
PPC_FUNC_IMPL(__imp__sub_83C26BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26BE8"))) PPC_WEAK_FUNC(sub_83C26BE8);
PPC_FUNC_IMPL(__imp__sub_83C26BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26BF4"))) PPC_WEAK_FUNC(sub_83C26BF4);
PPC_FUNC_IMPL(__imp__sub_83C26BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26BF8"))) PPC_WEAK_FUNC(sub_83C26BF8);
PPC_FUNC_IMPL(__imp__sub_83C26BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26C04"))) PPC_WEAK_FUNC(sub_83C26C04);
PPC_FUNC_IMPL(__imp__sub_83C26C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26C08"))) PPC_WEAK_FUNC(sub_83C26C08);
PPC_FUNC_IMPL(__imp__sub_83C26C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26C14"))) PPC_WEAK_FUNC(sub_83C26C14);
PPC_FUNC_IMPL(__imp__sub_83C26C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26C18"))) PPC_WEAK_FUNC(sub_83C26C18);
PPC_FUNC_IMPL(__imp__sub_83C26C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26C24"))) PPC_WEAK_FUNC(sub_83C26C24);
PPC_FUNC_IMPL(__imp__sub_83C26C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26C28"))) PPC_WEAK_FUNC(sub_83C26C28);
PPC_FUNC_IMPL(__imp__sub_83C26C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26C34"))) PPC_WEAK_FUNC(sub_83C26C34);
PPC_FUNC_IMPL(__imp__sub_83C26C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26C38"))) PPC_WEAK_FUNC(sub_83C26C38);
PPC_FUNC_IMPL(__imp__sub_83C26C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26C44"))) PPC_WEAK_FUNC(sub_83C26C44);
PPC_FUNC_IMPL(__imp__sub_83C26C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26C48"))) PPC_WEAK_FUNC(sub_83C26C48);
PPC_FUNC_IMPL(__imp__sub_83C26C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26C54"))) PPC_WEAK_FUNC(sub_83C26C54);
PPC_FUNC_IMPL(__imp__sub_83C26C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26C58"))) PPC_WEAK_FUNC(sub_83C26C58);
PPC_FUNC_IMPL(__imp__sub_83C26C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26C64"))) PPC_WEAK_FUNC(sub_83C26C64);
PPC_FUNC_IMPL(__imp__sub_83C26C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26C68"))) PPC_WEAK_FUNC(sub_83C26C68);
PPC_FUNC_IMPL(__imp__sub_83C26C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26C74"))) PPC_WEAK_FUNC(sub_83C26C74);
PPC_FUNC_IMPL(__imp__sub_83C26C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26C78"))) PPC_WEAK_FUNC(sub_83C26C78);
PPC_FUNC_IMPL(__imp__sub_83C26C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26C84"))) PPC_WEAK_FUNC(sub_83C26C84);
PPC_FUNC_IMPL(__imp__sub_83C26C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26C88"))) PPC_WEAK_FUNC(sub_83C26C88);
PPC_FUNC_IMPL(__imp__sub_83C26C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26C94"))) PPC_WEAK_FUNC(sub_83C26C94);
PPC_FUNC_IMPL(__imp__sub_83C26C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26C98"))) PPC_WEAK_FUNC(sub_83C26C98);
PPC_FUNC_IMPL(__imp__sub_83C26C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26CA4"))) PPC_WEAK_FUNC(sub_83C26CA4);
PPC_FUNC_IMPL(__imp__sub_83C26CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26CA8"))) PPC_WEAK_FUNC(sub_83C26CA8);
PPC_FUNC_IMPL(__imp__sub_83C26CA8) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-13224
	ctx.r4.s64 = ctx.r11.s64 + -13224;
	// addi r3,r10,17124
	ctx.r3.s64 = ctx.r10.s64 + 17124;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C26CCC;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,152
	ctx.r3.s64 = ctx.r9.s64 + 152;
	// bl 0x831cdcc8
	ctx.lr = 0x83C26CD8;
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

__attribute__((alias("__imp__sub_83C26CE8"))) PPC_WEAK_FUNC(sub_83C26CE8);
PPC_FUNC_IMPL(__imp__sub_83C26CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11992
	ctx.r7.s64 = ctx.r8.s64 + -11992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11992(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C26D10"))) PPC_WEAK_FUNC(sub_83C26D10);
PPC_FUNC_IMPL(__imp__sub_83C26D10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,17152
	ctx.r6.s64 = ctx.r7.s64 + 17152;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17052(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17052);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11992);
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
	// std r9,17152(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17152, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C26D58"))) PPC_WEAK_FUNC(sub_83C26D58);
PPC_FUNC_IMPL(__imp__sub_83C26D58) {
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
	// addi r3,r11,-11996
	ctx.r3.s64 = ctx.r11.s64 + -11996;
	// bl 0x83523120
	ctx.lr = 0x83C26D70;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,136
	ctx.r3.s64 = ctx.r10.s64 + 136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C26D7C;
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

__attribute__((alias("__imp__sub_83C26D8C"))) PPC_WEAK_FUNC(sub_83C26D8C);
PPC_FUNC_IMPL(__imp__sub_83C26D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26D90"))) PPC_WEAK_FUNC(sub_83C26D90);
PPC_FUNC_IMPL(__imp__sub_83C26D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26D9C"))) PPC_WEAK_FUNC(sub_83C26D9C);
PPC_FUNC_IMPL(__imp__sub_83C26D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26DA0"))) PPC_WEAK_FUNC(sub_83C26DA0);
PPC_FUNC_IMPL(__imp__sub_83C26DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,264
	ctx.r3.s64 = ctx.r11.s64 + 264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26DAC"))) PPC_WEAK_FUNC(sub_83C26DAC);
PPC_FUNC_IMPL(__imp__sub_83C26DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26DB0"))) PPC_WEAK_FUNC(sub_83C26DB0);
PPC_FUNC_IMPL(__imp__sub_83C26DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26DBC"))) PPC_WEAK_FUNC(sub_83C26DBC);
PPC_FUNC_IMPL(__imp__sub_83C26DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26DC0"))) PPC_WEAK_FUNC(sub_83C26DC0);
PPC_FUNC_IMPL(__imp__sub_83C26DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,280
	ctx.r3.s64 = ctx.r11.s64 + 280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26DCC"))) PPC_WEAK_FUNC(sub_83C26DCC);
PPC_FUNC_IMPL(__imp__sub_83C26DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26DD0"))) PPC_WEAK_FUNC(sub_83C26DD0);
PPC_FUNC_IMPL(__imp__sub_83C26DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,288
	ctx.r3.s64 = ctx.r11.s64 + 288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26DDC"))) PPC_WEAK_FUNC(sub_83C26DDC);
PPC_FUNC_IMPL(__imp__sub_83C26DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26DE0"))) PPC_WEAK_FUNC(sub_83C26DE0);
PPC_FUNC_IMPL(__imp__sub_83C26DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,296
	ctx.r3.s64 = ctx.r11.s64 + 296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26DEC"))) PPC_WEAK_FUNC(sub_83C26DEC);
PPC_FUNC_IMPL(__imp__sub_83C26DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26DF0"))) PPC_WEAK_FUNC(sub_83C26DF0);
PPC_FUNC_IMPL(__imp__sub_83C26DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26DFC"))) PPC_WEAK_FUNC(sub_83C26DFC);
PPC_FUNC_IMPL(__imp__sub_83C26DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26E00"))) PPC_WEAK_FUNC(sub_83C26E00);
PPC_FUNC_IMPL(__imp__sub_83C26E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,312
	ctx.r3.s64 = ctx.r11.s64 + 312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26E0C"))) PPC_WEAK_FUNC(sub_83C26E0C);
PPC_FUNC_IMPL(__imp__sub_83C26E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26E10"))) PPC_WEAK_FUNC(sub_83C26E10);
PPC_FUNC_IMPL(__imp__sub_83C26E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,320
	ctx.r3.s64 = ctx.r11.s64 + 320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26E1C"))) PPC_WEAK_FUNC(sub_83C26E1C);
PPC_FUNC_IMPL(__imp__sub_83C26E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26E20"))) PPC_WEAK_FUNC(sub_83C26E20);
PPC_FUNC_IMPL(__imp__sub_83C26E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,328
	ctx.r3.s64 = ctx.r11.s64 + 328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26E2C"))) PPC_WEAK_FUNC(sub_83C26E2C);
PPC_FUNC_IMPL(__imp__sub_83C26E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26E30"))) PPC_WEAK_FUNC(sub_83C26E30);
PPC_FUNC_IMPL(__imp__sub_83C26E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26E3C"))) PPC_WEAK_FUNC(sub_83C26E3C);
PPC_FUNC_IMPL(__imp__sub_83C26E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26E40"))) PPC_WEAK_FUNC(sub_83C26E40);
PPC_FUNC_IMPL(__imp__sub_83C26E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,344
	ctx.r3.s64 = ctx.r11.s64 + 344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26E4C"))) PPC_WEAK_FUNC(sub_83C26E4C);
PPC_FUNC_IMPL(__imp__sub_83C26E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26E50"))) PPC_WEAK_FUNC(sub_83C26E50);
PPC_FUNC_IMPL(__imp__sub_83C26E50) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-12912
	ctx.r4.s64 = ctx.r11.s64 + -12912;
	// addi r3,r10,17276
	ctx.r3.s64 = ctx.r10.s64 + 17276;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C26E74;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,368
	ctx.r3.s64 = ctx.r9.s64 + 368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C26E80;
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

__attribute__((alias("__imp__sub_83C26E90"))) PPC_WEAK_FUNC(sub_83C26E90);
PPC_FUNC_IMPL(__imp__sub_83C26E90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11980
	ctx.r7.s64 = ctx.r8.s64 + -11980;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11980(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11980);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11980(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11980, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C26EB8"))) PPC_WEAK_FUNC(sub_83C26EB8);
PPC_FUNC_IMPL(__imp__sub_83C26EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,17304
	ctx.r6.s64 = ctx.r7.s64 + 17304;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17204(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17204);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11980(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11980);
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
	// std r9,17304(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17304, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C26F00"))) PPC_WEAK_FUNC(sub_83C26F00);
PPC_FUNC_IMPL(__imp__sub_83C26F00) {
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
	// addi r3,r11,-11984
	ctx.r3.s64 = ctx.r11.s64 + -11984;
	// bl 0x83523120
	ctx.lr = 0x83C26F18;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,352
	ctx.r3.s64 = ctx.r10.s64 + 352;
	// bl 0x831cdcc8
	ctx.lr = 0x83C26F24;
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

__attribute__((alias("__imp__sub_83C26F34"))) PPC_WEAK_FUNC(sub_83C26F34);
PPC_FUNC_IMPL(__imp__sub_83C26F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26F38"))) PPC_WEAK_FUNC(sub_83C26F38);
PPC_FUNC_IMPL(__imp__sub_83C26F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,472
	ctx.r3.s64 = ctx.r11.s64 + 472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26F44"))) PPC_WEAK_FUNC(sub_83C26F44);
PPC_FUNC_IMPL(__imp__sub_83C26F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26F48"))) PPC_WEAK_FUNC(sub_83C26F48);
PPC_FUNC_IMPL(__imp__sub_83C26F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,480
	ctx.r3.s64 = ctx.r11.s64 + 480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26F54"))) PPC_WEAK_FUNC(sub_83C26F54);
PPC_FUNC_IMPL(__imp__sub_83C26F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26F58"))) PPC_WEAK_FUNC(sub_83C26F58);
PPC_FUNC_IMPL(__imp__sub_83C26F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,488
	ctx.r3.s64 = ctx.r11.s64 + 488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26F64"))) PPC_WEAK_FUNC(sub_83C26F64);
PPC_FUNC_IMPL(__imp__sub_83C26F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26F68"))) PPC_WEAK_FUNC(sub_83C26F68);
PPC_FUNC_IMPL(__imp__sub_83C26F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,496
	ctx.r3.s64 = ctx.r11.s64 + 496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26F74"))) PPC_WEAK_FUNC(sub_83C26F74);
PPC_FUNC_IMPL(__imp__sub_83C26F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26F78"))) PPC_WEAK_FUNC(sub_83C26F78);
PPC_FUNC_IMPL(__imp__sub_83C26F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,504
	ctx.r3.s64 = ctx.r11.s64 + 504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26F84"))) PPC_WEAK_FUNC(sub_83C26F84);
PPC_FUNC_IMPL(__imp__sub_83C26F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26F88"))) PPC_WEAK_FUNC(sub_83C26F88);
PPC_FUNC_IMPL(__imp__sub_83C26F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,512
	ctx.r3.s64 = ctx.r11.s64 + 512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26F94"))) PPC_WEAK_FUNC(sub_83C26F94);
PPC_FUNC_IMPL(__imp__sub_83C26F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26F98"))) PPC_WEAK_FUNC(sub_83C26F98);
PPC_FUNC_IMPL(__imp__sub_83C26F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,520
	ctx.r3.s64 = ctx.r11.s64 + 520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26FA4"))) PPC_WEAK_FUNC(sub_83C26FA4);
PPC_FUNC_IMPL(__imp__sub_83C26FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26FA8"))) PPC_WEAK_FUNC(sub_83C26FA8);
PPC_FUNC_IMPL(__imp__sub_83C26FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,528
	ctx.r3.s64 = ctx.r11.s64 + 528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26FB4"))) PPC_WEAK_FUNC(sub_83C26FB4);
PPC_FUNC_IMPL(__imp__sub_83C26FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26FB8"))) PPC_WEAK_FUNC(sub_83C26FB8);
PPC_FUNC_IMPL(__imp__sub_83C26FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,536
	ctx.r3.s64 = ctx.r11.s64 + 536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26FC4"))) PPC_WEAK_FUNC(sub_83C26FC4);
PPC_FUNC_IMPL(__imp__sub_83C26FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26FC8"))) PPC_WEAK_FUNC(sub_83C26FC8);
PPC_FUNC_IMPL(__imp__sub_83C26FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,544
	ctx.r3.s64 = ctx.r11.s64 + 544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26FD4"))) PPC_WEAK_FUNC(sub_83C26FD4);
PPC_FUNC_IMPL(__imp__sub_83C26FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26FD8"))) PPC_WEAK_FUNC(sub_83C26FD8);
PPC_FUNC_IMPL(__imp__sub_83C26FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,552
	ctx.r3.s64 = ctx.r11.s64 + 552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26FE4"))) PPC_WEAK_FUNC(sub_83C26FE4);
PPC_FUNC_IMPL(__imp__sub_83C26FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26FE8"))) PPC_WEAK_FUNC(sub_83C26FE8);
PPC_FUNC_IMPL(__imp__sub_83C26FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,560
	ctx.r3.s64 = ctx.r11.s64 + 560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26FF4"))) PPC_WEAK_FUNC(sub_83C26FF4);
PPC_FUNC_IMPL(__imp__sub_83C26FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26FF8"))) PPC_WEAK_FUNC(sub_83C26FF8);
PPC_FUNC_IMPL(__imp__sub_83C26FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11952
	ctx.r7.s64 = ctx.r8.s64 + -11952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11952);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11952(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11952, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C27020"))) PPC_WEAK_FUNC(sub_83C27020);
PPC_FUNC_IMPL(__imp__sub_83C27020) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,17428
	ctx.r6.s64 = ctx.r7.s64 + 17428;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17356(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17356);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11952(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11952);
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
	// std r9,17428(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17428, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C27068"))) PPC_WEAK_FUNC(sub_83C27068);
PPC_FUNC_IMPL(__imp__sub_83C27068) {
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
	// addi r3,r11,-11968
	ctx.r3.s64 = ctx.r11.s64 + -11968;
	// bl 0x83523120
	ctx.lr = 0x83C27080;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,568
	ctx.r3.s64 = ctx.r10.s64 + 568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2708C;
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

__attribute__((alias("__imp__sub_83C2709C"))) PPC_WEAK_FUNC(sub_83C2709C);
PPC_FUNC_IMPL(__imp__sub_83C2709C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C270A0"))) PPC_WEAK_FUNC(sub_83C270A0);
PPC_FUNC_IMPL(__imp__sub_83C270A0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// addi r3,r10,17448
	ctx.r3.s64 = ctx.r10.s64 + 17448;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C270C4;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,608
	ctx.r3.s64 = ctx.r9.s64 + 608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C270D0;
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

__attribute__((alias("__imp__sub_83C270E0"))) PPC_WEAK_FUNC(sub_83C270E0);
PPC_FUNC_IMPL(__imp__sub_83C270E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,584
	ctx.r3.s64 = ctx.r11.s64 + 584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C270EC"))) PPC_WEAK_FUNC(sub_83C270EC);
PPC_FUNC_IMPL(__imp__sub_83C270EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C270F0"))) PPC_WEAK_FUNC(sub_83C270F0);
PPC_FUNC_IMPL(__imp__sub_83C270F0) {
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
	// addi r3,r11,-11944
	ctx.r3.s64 = ctx.r11.s64 + -11944;
	// bl 0x8259af80
	ctx.lr = 0x83C27108;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,600
	ctx.r3.s64 = ctx.r10.s64 + 600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C27114;
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

__attribute__((alias("__imp__sub_83C27124"))) PPC_WEAK_FUNC(sub_83C27124);
PPC_FUNC_IMPL(__imp__sub_83C27124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27128"))) PPC_WEAK_FUNC(sub_83C27128);
PPC_FUNC_IMPL(__imp__sub_83C27128) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11964
	ctx.r11.s64 = ctx.r8.s64 + -11964;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,17404(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17404);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,592
	ctx.r3.s64 = ctx.r6.s64 + 592;
	// stw r10,-11964(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11964, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27158"))) PPC_WEAK_FUNC(sub_83C27158);
PPC_FUNC_IMPL(__imp__sub_83C27158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,712
	ctx.r3.s64 = ctx.r11.s64 + 712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27164"))) PPC_WEAK_FUNC(sub_83C27164);
PPC_FUNC_IMPL(__imp__sub_83C27164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27168"))) PPC_WEAK_FUNC(sub_83C27168);
PPC_FUNC_IMPL(__imp__sub_83C27168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,720
	ctx.r3.s64 = ctx.r11.s64 + 720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27174"))) PPC_WEAK_FUNC(sub_83C27174);
PPC_FUNC_IMPL(__imp__sub_83C27174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27178"))) PPC_WEAK_FUNC(sub_83C27178);
PPC_FUNC_IMPL(__imp__sub_83C27178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,728
	ctx.r3.s64 = ctx.r11.s64 + 728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27184"))) PPC_WEAK_FUNC(sub_83C27184);
PPC_FUNC_IMPL(__imp__sub_83C27184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27188"))) PPC_WEAK_FUNC(sub_83C27188);
PPC_FUNC_IMPL(__imp__sub_83C27188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,736
	ctx.r3.s64 = ctx.r11.s64 + 736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27194"))) PPC_WEAK_FUNC(sub_83C27194);
PPC_FUNC_IMPL(__imp__sub_83C27194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27198"))) PPC_WEAK_FUNC(sub_83C27198);
PPC_FUNC_IMPL(__imp__sub_83C27198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,744
	ctx.r3.s64 = ctx.r11.s64 + 744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C271A4"))) PPC_WEAK_FUNC(sub_83C271A4);
PPC_FUNC_IMPL(__imp__sub_83C271A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C271A8"))) PPC_WEAK_FUNC(sub_83C271A8);
PPC_FUNC_IMPL(__imp__sub_83C271A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,752
	ctx.r3.s64 = ctx.r11.s64 + 752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C271B4"))) PPC_WEAK_FUNC(sub_83C271B4);
PPC_FUNC_IMPL(__imp__sub_83C271B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C271B8"))) PPC_WEAK_FUNC(sub_83C271B8);
PPC_FUNC_IMPL(__imp__sub_83C271B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,760
	ctx.r3.s64 = ctx.r11.s64 + 760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C271C4"))) PPC_WEAK_FUNC(sub_83C271C4);
PPC_FUNC_IMPL(__imp__sub_83C271C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C271C8"))) PPC_WEAK_FUNC(sub_83C271C8);
PPC_FUNC_IMPL(__imp__sub_83C271C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,768
	ctx.r3.s64 = ctx.r11.s64 + 768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C271D4"))) PPC_WEAK_FUNC(sub_83C271D4);
PPC_FUNC_IMPL(__imp__sub_83C271D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C271D8"))) PPC_WEAK_FUNC(sub_83C271D8);
PPC_FUNC_IMPL(__imp__sub_83C271D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,776
	ctx.r3.s64 = ctx.r11.s64 + 776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C271E4"))) PPC_WEAK_FUNC(sub_83C271E4);
PPC_FUNC_IMPL(__imp__sub_83C271E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C271E8"))) PPC_WEAK_FUNC(sub_83C271E8);
PPC_FUNC_IMPL(__imp__sub_83C271E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,784
	ctx.r3.s64 = ctx.r11.s64 + 784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C271F4"))) PPC_WEAK_FUNC(sub_83C271F4);
PPC_FUNC_IMPL(__imp__sub_83C271F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C271F8"))) PPC_WEAK_FUNC(sub_83C271F8);
PPC_FUNC_IMPL(__imp__sub_83C271F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,792
	ctx.r3.s64 = ctx.r11.s64 + 792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27204"))) PPC_WEAK_FUNC(sub_83C27204);
PPC_FUNC_IMPL(__imp__sub_83C27204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27208"))) PPC_WEAK_FUNC(sub_83C27208);
PPC_FUNC_IMPL(__imp__sub_83C27208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,800
	ctx.r3.s64 = ctx.r11.s64 + 800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27214"))) PPC_WEAK_FUNC(sub_83C27214);
PPC_FUNC_IMPL(__imp__sub_83C27214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27218"))) PPC_WEAK_FUNC(sub_83C27218);
PPC_FUNC_IMPL(__imp__sub_83C27218) {
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
	// addi r3,r11,-11600
	ctx.r3.s64 = ctx.r11.s64 + -11600;
	// bl 0x83523120
	ctx.lr = 0x83C27230;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,808
	ctx.r3.s64 = ctx.r10.s64 + 808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2723C;
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

__attribute__((alias("__imp__sub_83C2724C"))) PPC_WEAK_FUNC(sub_83C2724C);
PPC_FUNC_IMPL(__imp__sub_83C2724C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27250"))) PPC_WEAK_FUNC(sub_83C27250);
PPC_FUNC_IMPL(__imp__sub_83C27250) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11584
	ctx.r7.s64 = ctx.r8.s64 + -11584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11584(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C27278"))) PPC_WEAK_FUNC(sub_83C27278);
PPC_FUNC_IMPL(__imp__sub_83C27278) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,17584
	ctx.r6.s64 = ctx.r7.s64 + 17584;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17512(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17512);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11584(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11584);
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
	// std r9,17584(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17584, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

