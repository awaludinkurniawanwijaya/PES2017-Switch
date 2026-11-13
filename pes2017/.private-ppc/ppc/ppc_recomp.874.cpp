#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C91570"))) PPC_WEAK_FUNC(sub_83C91570);
PPC_FUNC_IMPL(__imp__sub_83C91570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20472
	ctx.r3.s64 = ctx.r11.s64 + 20472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9157C"))) PPC_WEAK_FUNC(sub_83C9157C);
PPC_FUNC_IMPL(__imp__sub_83C9157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91580"))) PPC_WEAK_FUNC(sub_83C91580);
PPC_FUNC_IMPL(__imp__sub_83C91580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20480
	ctx.r3.s64 = ctx.r11.s64 + 20480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9158C"))) PPC_WEAK_FUNC(sub_83C9158C);
PPC_FUNC_IMPL(__imp__sub_83C9158C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91590"))) PPC_WEAK_FUNC(sub_83C91590);
PPC_FUNC_IMPL(__imp__sub_83C91590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20488
	ctx.r3.s64 = ctx.r11.s64 + 20488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9159C"))) PPC_WEAK_FUNC(sub_83C9159C);
PPC_FUNC_IMPL(__imp__sub_83C9159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C915A0"))) PPC_WEAK_FUNC(sub_83C915A0);
PPC_FUNC_IMPL(__imp__sub_83C915A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20496
	ctx.r3.s64 = ctx.r11.s64 + 20496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C915AC"))) PPC_WEAK_FUNC(sub_83C915AC);
PPC_FUNC_IMPL(__imp__sub_83C915AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C915B0"))) PPC_WEAK_FUNC(sub_83C915B0);
PPC_FUNC_IMPL(__imp__sub_83C915B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20504
	ctx.r3.s64 = ctx.r11.s64 + 20504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C915BC"))) PPC_WEAK_FUNC(sub_83C915BC);
PPC_FUNC_IMPL(__imp__sub_83C915BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C915C0"))) PPC_WEAK_FUNC(sub_83C915C0);
PPC_FUNC_IMPL(__imp__sub_83C915C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20512
	ctx.r3.s64 = ctx.r11.s64 + 20512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C915CC"))) PPC_WEAK_FUNC(sub_83C915CC);
PPC_FUNC_IMPL(__imp__sub_83C915CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C915D0"))) PPC_WEAK_FUNC(sub_83C915D0);
PPC_FUNC_IMPL(__imp__sub_83C915D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29136
	ctx.r7.s64 = ctx.r8.s64 + -29136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29136(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C915F8"))) PPC_WEAK_FUNC(sub_83C915F8);
PPC_FUNC_IMPL(__imp__sub_83C915F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-4536
	ctx.r6.s64 = ctx.r7.s64 + -4536;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4608(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4608);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29136);
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
	// std r9,-4536(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4536, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C91640"))) PPC_WEAK_FUNC(sub_83C91640);
PPC_FUNC_IMPL(__imp__sub_83C91640) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-29152
	ctx.r3.s64 = ctx.r11.s64 + -29152;
	// bl 0x83523120
	ctx.lr = 0x83C91658;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,20520
	ctx.r3.s64 = ctx.r10.s64 + 20520;
	// bl 0x831cdcc8
	ctx.lr = 0x83C91664;
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

__attribute__((alias("__imp__sub_83C91674"))) PPC_WEAK_FUNC(sub_83C91674);
PPC_FUNC_IMPL(__imp__sub_83C91674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91678"))) PPC_WEAK_FUNC(sub_83C91678);
PPC_FUNC_IMPL(__imp__sub_83C91678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20536
	ctx.r3.s64 = ctx.r11.s64 + 20536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91684"))) PPC_WEAK_FUNC(sub_83C91684);
PPC_FUNC_IMPL(__imp__sub_83C91684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91688"))) PPC_WEAK_FUNC(sub_83C91688);
PPC_FUNC_IMPL(__imp__sub_83C91688) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-29128
	ctx.r3.s64 = ctx.r11.s64 + -29128;
	// bl 0x8259af80
	ctx.lr = 0x83C916A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,20552
	ctx.r3.s64 = ctx.r10.s64 + 20552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C916AC;
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

__attribute__((alias("__imp__sub_83C916BC"))) PPC_WEAK_FUNC(sub_83C916BC);
PPC_FUNC_IMPL(__imp__sub_83C916BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C916C0"))) PPC_WEAK_FUNC(sub_83C916C0);
PPC_FUNC_IMPL(__imp__sub_83C916C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29148
	ctx.r11.s64 = ctx.r8.s64 + -29148;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-4560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4560);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20544
	ctx.r3.s64 = ctx.r6.s64 + 20544;
	// stw r10,-29148(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29148, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C916F0"))) PPC_WEAK_FUNC(sub_83C916F0);
PPC_FUNC_IMPL(__imp__sub_83C916F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20560
	ctx.r3.s64 = ctx.r11.s64 + 20560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C916FC"))) PPC_WEAK_FUNC(sub_83C916FC);
PPC_FUNC_IMPL(__imp__sub_83C916FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91700"))) PPC_WEAK_FUNC(sub_83C91700);
PPC_FUNC_IMPL(__imp__sub_83C91700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20568
	ctx.r3.s64 = ctx.r11.s64 + 20568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9170C"))) PPC_WEAK_FUNC(sub_83C9170C);
PPC_FUNC_IMPL(__imp__sub_83C9170C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91710"))) PPC_WEAK_FUNC(sub_83C91710);
PPC_FUNC_IMPL(__imp__sub_83C91710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9171C"))) PPC_WEAK_FUNC(sub_83C9171C);
PPC_FUNC_IMPL(__imp__sub_83C9171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91720"))) PPC_WEAK_FUNC(sub_83C91720);
PPC_FUNC_IMPL(__imp__sub_83C91720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20584
	ctx.r3.s64 = ctx.r11.s64 + 20584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9172C"))) PPC_WEAK_FUNC(sub_83C9172C);
PPC_FUNC_IMPL(__imp__sub_83C9172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91730"))) PPC_WEAK_FUNC(sub_83C91730);
PPC_FUNC_IMPL(__imp__sub_83C91730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20592
	ctx.r3.s64 = ctx.r11.s64 + 20592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9173C"))) PPC_WEAK_FUNC(sub_83C9173C);
PPC_FUNC_IMPL(__imp__sub_83C9173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91740"))) PPC_WEAK_FUNC(sub_83C91740);
PPC_FUNC_IMPL(__imp__sub_83C91740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20600
	ctx.r3.s64 = ctx.r11.s64 + 20600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9174C"))) PPC_WEAK_FUNC(sub_83C9174C);
PPC_FUNC_IMPL(__imp__sub_83C9174C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91750"))) PPC_WEAK_FUNC(sub_83C91750);
PPC_FUNC_IMPL(__imp__sub_83C91750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20608
	ctx.r3.s64 = ctx.r11.s64 + 20608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9175C"))) PPC_WEAK_FUNC(sub_83C9175C);
PPC_FUNC_IMPL(__imp__sub_83C9175C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91760"))) PPC_WEAK_FUNC(sub_83C91760);
PPC_FUNC_IMPL(__imp__sub_83C91760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20616
	ctx.r3.s64 = ctx.r11.s64 + 20616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9176C"))) PPC_WEAK_FUNC(sub_83C9176C);
PPC_FUNC_IMPL(__imp__sub_83C9176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91770"))) PPC_WEAK_FUNC(sub_83C91770);
PPC_FUNC_IMPL(__imp__sub_83C91770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20624
	ctx.r3.s64 = ctx.r11.s64 + 20624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9177C"))) PPC_WEAK_FUNC(sub_83C9177C);
PPC_FUNC_IMPL(__imp__sub_83C9177C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91780"))) PPC_WEAK_FUNC(sub_83C91780);
PPC_FUNC_IMPL(__imp__sub_83C91780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20632
	ctx.r3.s64 = ctx.r11.s64 + 20632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9178C"))) PPC_WEAK_FUNC(sub_83C9178C);
PPC_FUNC_IMPL(__imp__sub_83C9178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91790"))) PPC_WEAK_FUNC(sub_83C91790);
PPC_FUNC_IMPL(__imp__sub_83C91790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20640
	ctx.r3.s64 = ctx.r11.s64 + 20640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9179C"))) PPC_WEAK_FUNC(sub_83C9179C);
PPC_FUNC_IMPL(__imp__sub_83C9179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C917A0"))) PPC_WEAK_FUNC(sub_83C917A0);
PPC_FUNC_IMPL(__imp__sub_83C917A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20648
	ctx.r3.s64 = ctx.r11.s64 + 20648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C917AC"))) PPC_WEAK_FUNC(sub_83C917AC);
PPC_FUNC_IMPL(__imp__sub_83C917AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C917B0"))) PPC_WEAK_FUNC(sub_83C917B0);
PPC_FUNC_IMPL(__imp__sub_83C917B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-28768
	ctx.r7.s64 = ctx.r8.s64 + -28768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-28768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-28768(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C917D8"))) PPC_WEAK_FUNC(sub_83C917D8);
PPC_FUNC_IMPL(__imp__sub_83C917D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-4408
	ctx.r6.s64 = ctx.r7.s64 + -4408;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4480(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4480);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-28768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28768);
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
	// std r9,-4408(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4408, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C91820"))) PPC_WEAK_FUNC(sub_83C91820);
PPC_FUNC_IMPL(__imp__sub_83C91820) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-28784
	ctx.r3.s64 = ctx.r11.s64 + -28784;
	// bl 0x83523120
	ctx.lr = 0x83C91838;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,20656
	ctx.r3.s64 = ctx.r10.s64 + 20656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C91844;
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

__attribute__((alias("__imp__sub_83C91854"))) PPC_WEAK_FUNC(sub_83C91854);
PPC_FUNC_IMPL(__imp__sub_83C91854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91858"))) PPC_WEAK_FUNC(sub_83C91858);
PPC_FUNC_IMPL(__imp__sub_83C91858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20672
	ctx.r3.s64 = ctx.r11.s64 + 20672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91864"))) PPC_WEAK_FUNC(sub_83C91864);
PPC_FUNC_IMPL(__imp__sub_83C91864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91868"))) PPC_WEAK_FUNC(sub_83C91868);
PPC_FUNC_IMPL(__imp__sub_83C91868) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-28760
	ctx.r3.s64 = ctx.r11.s64 + -28760;
	// bl 0x8259af80
	ctx.lr = 0x83C91880;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,20688
	ctx.r3.s64 = ctx.r10.s64 + 20688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9188C;
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

__attribute__((alias("__imp__sub_83C9189C"))) PPC_WEAK_FUNC(sub_83C9189C);
PPC_FUNC_IMPL(__imp__sub_83C9189C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C918A0"))) PPC_WEAK_FUNC(sub_83C918A0);
PPC_FUNC_IMPL(__imp__sub_83C918A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-28780
	ctx.r11.s64 = ctx.r8.s64 + -28780;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-4432(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4432);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20680
	ctx.r3.s64 = ctx.r6.s64 + 20680;
	// stw r10,-28780(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28780, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C918D0"))) PPC_WEAK_FUNC(sub_83C918D0);
PPC_FUNC_IMPL(__imp__sub_83C918D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20696
	ctx.r3.s64 = ctx.r11.s64 + 20696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C918DC"))) PPC_WEAK_FUNC(sub_83C918DC);
PPC_FUNC_IMPL(__imp__sub_83C918DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C918E0"))) PPC_WEAK_FUNC(sub_83C918E0);
PPC_FUNC_IMPL(__imp__sub_83C918E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20704
	ctx.r3.s64 = ctx.r11.s64 + 20704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C918EC"))) PPC_WEAK_FUNC(sub_83C918EC);
PPC_FUNC_IMPL(__imp__sub_83C918EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C918F0"))) PPC_WEAK_FUNC(sub_83C918F0);
PPC_FUNC_IMPL(__imp__sub_83C918F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20712
	ctx.r3.s64 = ctx.r11.s64 + 20712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C918FC"))) PPC_WEAK_FUNC(sub_83C918FC);
PPC_FUNC_IMPL(__imp__sub_83C918FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91900"))) PPC_WEAK_FUNC(sub_83C91900);
PPC_FUNC_IMPL(__imp__sub_83C91900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20720
	ctx.r3.s64 = ctx.r11.s64 + 20720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9190C"))) PPC_WEAK_FUNC(sub_83C9190C);
PPC_FUNC_IMPL(__imp__sub_83C9190C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91910"))) PPC_WEAK_FUNC(sub_83C91910);
PPC_FUNC_IMPL(__imp__sub_83C91910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20728
	ctx.r3.s64 = ctx.r11.s64 + 20728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9191C"))) PPC_WEAK_FUNC(sub_83C9191C);
PPC_FUNC_IMPL(__imp__sub_83C9191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91920"))) PPC_WEAK_FUNC(sub_83C91920);
PPC_FUNC_IMPL(__imp__sub_83C91920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20736
	ctx.r3.s64 = ctx.r11.s64 + 20736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9192C"))) PPC_WEAK_FUNC(sub_83C9192C);
PPC_FUNC_IMPL(__imp__sub_83C9192C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91930"))) PPC_WEAK_FUNC(sub_83C91930);
PPC_FUNC_IMPL(__imp__sub_83C91930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20744
	ctx.r3.s64 = ctx.r11.s64 + 20744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9193C"))) PPC_WEAK_FUNC(sub_83C9193C);
PPC_FUNC_IMPL(__imp__sub_83C9193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91940"))) PPC_WEAK_FUNC(sub_83C91940);
PPC_FUNC_IMPL(__imp__sub_83C91940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20752
	ctx.r3.s64 = ctx.r11.s64 + 20752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9194C"))) PPC_WEAK_FUNC(sub_83C9194C);
PPC_FUNC_IMPL(__imp__sub_83C9194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91950"))) PPC_WEAK_FUNC(sub_83C91950);
PPC_FUNC_IMPL(__imp__sub_83C91950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20760
	ctx.r3.s64 = ctx.r11.s64 + 20760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9195C"))) PPC_WEAK_FUNC(sub_83C9195C);
PPC_FUNC_IMPL(__imp__sub_83C9195C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91960"))) PPC_WEAK_FUNC(sub_83C91960);
PPC_FUNC_IMPL(__imp__sub_83C91960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20768
	ctx.r3.s64 = ctx.r11.s64 + 20768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9196C"))) PPC_WEAK_FUNC(sub_83C9196C);
PPC_FUNC_IMPL(__imp__sub_83C9196C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91970"))) PPC_WEAK_FUNC(sub_83C91970);
PPC_FUNC_IMPL(__imp__sub_83C91970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20776
	ctx.r3.s64 = ctx.r11.s64 + 20776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9197C"))) PPC_WEAK_FUNC(sub_83C9197C);
PPC_FUNC_IMPL(__imp__sub_83C9197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91980"))) PPC_WEAK_FUNC(sub_83C91980);
PPC_FUNC_IMPL(__imp__sub_83C91980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20784
	ctx.r3.s64 = ctx.r11.s64 + 20784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9198C"))) PPC_WEAK_FUNC(sub_83C9198C);
PPC_FUNC_IMPL(__imp__sub_83C9198C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91990"))) PPC_WEAK_FUNC(sub_83C91990);
PPC_FUNC_IMPL(__imp__sub_83C91990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20792
	ctx.r3.s64 = ctx.r11.s64 + 20792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9199C"))) PPC_WEAK_FUNC(sub_83C9199C);
PPC_FUNC_IMPL(__imp__sub_83C9199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C919A0"))) PPC_WEAK_FUNC(sub_83C919A0);
PPC_FUNC_IMPL(__imp__sub_83C919A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20800
	ctx.r3.s64 = ctx.r11.s64 + 20800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C919AC"))) PPC_WEAK_FUNC(sub_83C919AC);
PPC_FUNC_IMPL(__imp__sub_83C919AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C919B0"))) PPC_WEAK_FUNC(sub_83C919B0);
PPC_FUNC_IMPL(__imp__sub_83C919B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20808
	ctx.r3.s64 = ctx.r11.s64 + 20808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C919BC"))) PPC_WEAK_FUNC(sub_83C919BC);
PPC_FUNC_IMPL(__imp__sub_83C919BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C919C0"))) PPC_WEAK_FUNC(sub_83C919C0);
PPC_FUNC_IMPL(__imp__sub_83C919C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20816
	ctx.r3.s64 = ctx.r11.s64 + 20816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C919CC"))) PPC_WEAK_FUNC(sub_83C919CC);
PPC_FUNC_IMPL(__imp__sub_83C919CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C919D0"))) PPC_WEAK_FUNC(sub_83C919D0);
PPC_FUNC_IMPL(__imp__sub_83C919D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20824
	ctx.r3.s64 = ctx.r11.s64 + 20824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C919DC"))) PPC_WEAK_FUNC(sub_83C919DC);
PPC_FUNC_IMPL(__imp__sub_83C919DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C919E0"))) PPC_WEAK_FUNC(sub_83C919E0);
PPC_FUNC_IMPL(__imp__sub_83C919E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20832
	ctx.r3.s64 = ctx.r11.s64 + 20832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C919EC"))) PPC_WEAK_FUNC(sub_83C919EC);
PPC_FUNC_IMPL(__imp__sub_83C919EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C919F0"))) PPC_WEAK_FUNC(sub_83C919F0);
PPC_FUNC_IMPL(__imp__sub_83C919F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20840
	ctx.r3.s64 = ctx.r11.s64 + 20840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C919FC"))) PPC_WEAK_FUNC(sub_83C919FC);
PPC_FUNC_IMPL(__imp__sub_83C919FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91A00"))) PPC_WEAK_FUNC(sub_83C91A00);
PPC_FUNC_IMPL(__imp__sub_83C91A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20848
	ctx.r3.s64 = ctx.r11.s64 + 20848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91A0C"))) PPC_WEAK_FUNC(sub_83C91A0C);
PPC_FUNC_IMPL(__imp__sub_83C91A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91A10"))) PPC_WEAK_FUNC(sub_83C91A10);
PPC_FUNC_IMPL(__imp__sub_83C91A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20856
	ctx.r3.s64 = ctx.r11.s64 + 20856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91A1C"))) PPC_WEAK_FUNC(sub_83C91A1C);
PPC_FUNC_IMPL(__imp__sub_83C91A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91A20"))) PPC_WEAK_FUNC(sub_83C91A20);
PPC_FUNC_IMPL(__imp__sub_83C91A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20864
	ctx.r3.s64 = ctx.r11.s64 + 20864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91A2C"))) PPC_WEAK_FUNC(sub_83C91A2C);
PPC_FUNC_IMPL(__imp__sub_83C91A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91A30"))) PPC_WEAK_FUNC(sub_83C91A30);
PPC_FUNC_IMPL(__imp__sub_83C91A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20872
	ctx.r3.s64 = ctx.r11.s64 + 20872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91A3C"))) PPC_WEAK_FUNC(sub_83C91A3C);
PPC_FUNC_IMPL(__imp__sub_83C91A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91A40"))) PPC_WEAK_FUNC(sub_83C91A40);
PPC_FUNC_IMPL(__imp__sub_83C91A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20880
	ctx.r3.s64 = ctx.r11.s64 + 20880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91A4C"))) PPC_WEAK_FUNC(sub_83C91A4C);
PPC_FUNC_IMPL(__imp__sub_83C91A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91A50"))) PPC_WEAK_FUNC(sub_83C91A50);
PPC_FUNC_IMPL(__imp__sub_83C91A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20888
	ctx.r3.s64 = ctx.r11.s64 + 20888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91A5C"))) PPC_WEAK_FUNC(sub_83C91A5C);
PPC_FUNC_IMPL(__imp__sub_83C91A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91A60"))) PPC_WEAK_FUNC(sub_83C91A60);
PPC_FUNC_IMPL(__imp__sub_83C91A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20896
	ctx.r3.s64 = ctx.r11.s64 + 20896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91A6C"))) PPC_WEAK_FUNC(sub_83C91A6C);
PPC_FUNC_IMPL(__imp__sub_83C91A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91A70"))) PPC_WEAK_FUNC(sub_83C91A70);
PPC_FUNC_IMPL(__imp__sub_83C91A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20904
	ctx.r3.s64 = ctx.r11.s64 + 20904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91A7C"))) PPC_WEAK_FUNC(sub_83C91A7C);
PPC_FUNC_IMPL(__imp__sub_83C91A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91A80"))) PPC_WEAK_FUNC(sub_83C91A80);
PPC_FUNC_IMPL(__imp__sub_83C91A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20912
	ctx.r3.s64 = ctx.r11.s64 + 20912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91A8C"))) PPC_WEAK_FUNC(sub_83C91A8C);
PPC_FUNC_IMPL(__imp__sub_83C91A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91A90"))) PPC_WEAK_FUNC(sub_83C91A90);
PPC_FUNC_IMPL(__imp__sub_83C91A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20920
	ctx.r3.s64 = ctx.r11.s64 + 20920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91A9C"))) PPC_WEAK_FUNC(sub_83C91A9C);
PPC_FUNC_IMPL(__imp__sub_83C91A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91AA0"))) PPC_WEAK_FUNC(sub_83C91AA0);
PPC_FUNC_IMPL(__imp__sub_83C91AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20928
	ctx.r3.s64 = ctx.r11.s64 + 20928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91AAC"))) PPC_WEAK_FUNC(sub_83C91AAC);
PPC_FUNC_IMPL(__imp__sub_83C91AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91AB0"))) PPC_WEAK_FUNC(sub_83C91AB0);
PPC_FUNC_IMPL(__imp__sub_83C91AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20936
	ctx.r3.s64 = ctx.r11.s64 + 20936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91ABC"))) PPC_WEAK_FUNC(sub_83C91ABC);
PPC_FUNC_IMPL(__imp__sub_83C91ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91AC0"))) PPC_WEAK_FUNC(sub_83C91AC0);
PPC_FUNC_IMPL(__imp__sub_83C91AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20944
	ctx.r3.s64 = ctx.r11.s64 + 20944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91ACC"))) PPC_WEAK_FUNC(sub_83C91ACC);
PPC_FUNC_IMPL(__imp__sub_83C91ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91AD0"))) PPC_WEAK_FUNC(sub_83C91AD0);
PPC_FUNC_IMPL(__imp__sub_83C91AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20952
	ctx.r3.s64 = ctx.r11.s64 + 20952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91ADC"))) PPC_WEAK_FUNC(sub_83C91ADC);
PPC_FUNC_IMPL(__imp__sub_83C91ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91AE0"))) PPC_WEAK_FUNC(sub_83C91AE0);
PPC_FUNC_IMPL(__imp__sub_83C91AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20960
	ctx.r3.s64 = ctx.r11.s64 + 20960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91AEC"))) PPC_WEAK_FUNC(sub_83C91AEC);
PPC_FUNC_IMPL(__imp__sub_83C91AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91AF0"))) PPC_WEAK_FUNC(sub_83C91AF0);
PPC_FUNC_IMPL(__imp__sub_83C91AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20968
	ctx.r3.s64 = ctx.r11.s64 + 20968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91AFC"))) PPC_WEAK_FUNC(sub_83C91AFC);
PPC_FUNC_IMPL(__imp__sub_83C91AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91B00"))) PPC_WEAK_FUNC(sub_83C91B00);
PPC_FUNC_IMPL(__imp__sub_83C91B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20976
	ctx.r3.s64 = ctx.r11.s64 + 20976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91B0C"))) PPC_WEAK_FUNC(sub_83C91B0C);
PPC_FUNC_IMPL(__imp__sub_83C91B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91B10"))) PPC_WEAK_FUNC(sub_83C91B10);
PPC_FUNC_IMPL(__imp__sub_83C91B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20984
	ctx.r3.s64 = ctx.r11.s64 + 20984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91B1C"))) PPC_WEAK_FUNC(sub_83C91B1C);
PPC_FUNC_IMPL(__imp__sub_83C91B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91B20"))) PPC_WEAK_FUNC(sub_83C91B20);
PPC_FUNC_IMPL(__imp__sub_83C91B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,20992
	ctx.r3.s64 = ctx.r11.s64 + 20992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91B2C"))) PPC_WEAK_FUNC(sub_83C91B2C);
PPC_FUNC_IMPL(__imp__sub_83C91B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91B30"))) PPC_WEAK_FUNC(sub_83C91B30);
PPC_FUNC_IMPL(__imp__sub_83C91B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21000
	ctx.r3.s64 = ctx.r11.s64 + 21000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91B3C"))) PPC_WEAK_FUNC(sub_83C91B3C);
PPC_FUNC_IMPL(__imp__sub_83C91B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91B40"))) PPC_WEAK_FUNC(sub_83C91B40);
PPC_FUNC_IMPL(__imp__sub_83C91B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21008
	ctx.r3.s64 = ctx.r11.s64 + 21008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91B4C"))) PPC_WEAK_FUNC(sub_83C91B4C);
PPC_FUNC_IMPL(__imp__sub_83C91B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91B50"))) PPC_WEAK_FUNC(sub_83C91B50);
PPC_FUNC_IMPL(__imp__sub_83C91B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21016
	ctx.r3.s64 = ctx.r11.s64 + 21016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91B5C"))) PPC_WEAK_FUNC(sub_83C91B5C);
PPC_FUNC_IMPL(__imp__sub_83C91B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91B60"))) PPC_WEAK_FUNC(sub_83C91B60);
PPC_FUNC_IMPL(__imp__sub_83C91B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21024
	ctx.r3.s64 = ctx.r11.s64 + 21024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91B6C"))) PPC_WEAK_FUNC(sub_83C91B6C);
PPC_FUNC_IMPL(__imp__sub_83C91B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91B70"))) PPC_WEAK_FUNC(sub_83C91B70);
PPC_FUNC_IMPL(__imp__sub_83C91B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21032
	ctx.r3.s64 = ctx.r11.s64 + 21032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91B7C"))) PPC_WEAK_FUNC(sub_83C91B7C);
PPC_FUNC_IMPL(__imp__sub_83C91B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91B80"))) PPC_WEAK_FUNC(sub_83C91B80);
PPC_FUNC_IMPL(__imp__sub_83C91B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21040
	ctx.r3.s64 = ctx.r11.s64 + 21040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91B8C"))) PPC_WEAK_FUNC(sub_83C91B8C);
PPC_FUNC_IMPL(__imp__sub_83C91B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91B90"))) PPC_WEAK_FUNC(sub_83C91B90);
PPC_FUNC_IMPL(__imp__sub_83C91B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21048
	ctx.r3.s64 = ctx.r11.s64 + 21048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91B9C"))) PPC_WEAK_FUNC(sub_83C91B9C);
PPC_FUNC_IMPL(__imp__sub_83C91B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91BA0"))) PPC_WEAK_FUNC(sub_83C91BA0);
PPC_FUNC_IMPL(__imp__sub_83C91BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21056
	ctx.r3.s64 = ctx.r11.s64 + 21056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91BAC"))) PPC_WEAK_FUNC(sub_83C91BAC);
PPC_FUNC_IMPL(__imp__sub_83C91BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91BB0"))) PPC_WEAK_FUNC(sub_83C91BB0);
PPC_FUNC_IMPL(__imp__sub_83C91BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21064
	ctx.r3.s64 = ctx.r11.s64 + 21064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91BBC"))) PPC_WEAK_FUNC(sub_83C91BBC);
PPC_FUNC_IMPL(__imp__sub_83C91BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91BC0"))) PPC_WEAK_FUNC(sub_83C91BC0);
PPC_FUNC_IMPL(__imp__sub_83C91BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21072
	ctx.r3.s64 = ctx.r11.s64 + 21072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91BCC"))) PPC_WEAK_FUNC(sub_83C91BCC);
PPC_FUNC_IMPL(__imp__sub_83C91BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91BD0"))) PPC_WEAK_FUNC(sub_83C91BD0);
PPC_FUNC_IMPL(__imp__sub_83C91BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21080
	ctx.r3.s64 = ctx.r11.s64 + 21080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91BDC"))) PPC_WEAK_FUNC(sub_83C91BDC);
PPC_FUNC_IMPL(__imp__sub_83C91BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91BE0"))) PPC_WEAK_FUNC(sub_83C91BE0);
PPC_FUNC_IMPL(__imp__sub_83C91BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21088
	ctx.r3.s64 = ctx.r11.s64 + 21088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91BEC"))) PPC_WEAK_FUNC(sub_83C91BEC);
PPC_FUNC_IMPL(__imp__sub_83C91BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91BF0"))) PPC_WEAK_FUNC(sub_83C91BF0);
PPC_FUNC_IMPL(__imp__sub_83C91BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21096
	ctx.r3.s64 = ctx.r11.s64 + 21096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91BFC"))) PPC_WEAK_FUNC(sub_83C91BFC);
PPC_FUNC_IMPL(__imp__sub_83C91BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91C00"))) PPC_WEAK_FUNC(sub_83C91C00);
PPC_FUNC_IMPL(__imp__sub_83C91C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21104
	ctx.r3.s64 = ctx.r11.s64 + 21104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91C0C"))) PPC_WEAK_FUNC(sub_83C91C0C);
PPC_FUNC_IMPL(__imp__sub_83C91C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91C10"))) PPC_WEAK_FUNC(sub_83C91C10);
PPC_FUNC_IMPL(__imp__sub_83C91C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21112
	ctx.r3.s64 = ctx.r11.s64 + 21112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91C1C"))) PPC_WEAK_FUNC(sub_83C91C1C);
PPC_FUNC_IMPL(__imp__sub_83C91C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91C20"))) PPC_WEAK_FUNC(sub_83C91C20);
PPC_FUNC_IMPL(__imp__sub_83C91C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21120
	ctx.r3.s64 = ctx.r11.s64 + 21120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91C2C"))) PPC_WEAK_FUNC(sub_83C91C2C);
PPC_FUNC_IMPL(__imp__sub_83C91C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91C30"))) PPC_WEAK_FUNC(sub_83C91C30);
PPC_FUNC_IMPL(__imp__sub_83C91C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21128
	ctx.r3.s64 = ctx.r11.s64 + 21128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91C3C"))) PPC_WEAK_FUNC(sub_83C91C3C);
PPC_FUNC_IMPL(__imp__sub_83C91C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91C40"))) PPC_WEAK_FUNC(sub_83C91C40);
PPC_FUNC_IMPL(__imp__sub_83C91C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21136
	ctx.r3.s64 = ctx.r11.s64 + 21136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91C4C"))) PPC_WEAK_FUNC(sub_83C91C4C);
PPC_FUNC_IMPL(__imp__sub_83C91C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91C50"))) PPC_WEAK_FUNC(sub_83C91C50);
PPC_FUNC_IMPL(__imp__sub_83C91C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21144
	ctx.r3.s64 = ctx.r11.s64 + 21144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91C5C"))) PPC_WEAK_FUNC(sub_83C91C5C);
PPC_FUNC_IMPL(__imp__sub_83C91C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91C60"))) PPC_WEAK_FUNC(sub_83C91C60);
PPC_FUNC_IMPL(__imp__sub_83C91C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21152
	ctx.r3.s64 = ctx.r11.s64 + 21152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91C6C"))) PPC_WEAK_FUNC(sub_83C91C6C);
PPC_FUNC_IMPL(__imp__sub_83C91C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91C70"))) PPC_WEAK_FUNC(sub_83C91C70);
PPC_FUNC_IMPL(__imp__sub_83C91C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21160
	ctx.r3.s64 = ctx.r11.s64 + 21160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91C7C"))) PPC_WEAK_FUNC(sub_83C91C7C);
PPC_FUNC_IMPL(__imp__sub_83C91C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91C80"))) PPC_WEAK_FUNC(sub_83C91C80);
PPC_FUNC_IMPL(__imp__sub_83C91C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21168
	ctx.r3.s64 = ctx.r11.s64 + 21168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91C8C"))) PPC_WEAK_FUNC(sub_83C91C8C);
PPC_FUNC_IMPL(__imp__sub_83C91C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91C90"))) PPC_WEAK_FUNC(sub_83C91C90);
PPC_FUNC_IMPL(__imp__sub_83C91C90) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-28400
	ctx.r3.s64 = ctx.r11.s64 + -28400;
	// bl 0x83523120
	ctx.lr = 0x83C91CA8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,21176
	ctx.r3.s64 = ctx.r10.s64 + 21176;
	// bl 0x831cdcc8
	ctx.lr = 0x83C91CB4;
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

__attribute__((alias("__imp__sub_83C91CC4"))) PPC_WEAK_FUNC(sub_83C91CC4);
PPC_FUNC_IMPL(__imp__sub_83C91CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91CC8"))) PPC_WEAK_FUNC(sub_83C91CC8);
PPC_FUNC_IMPL(__imp__sub_83C91CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21192
	ctx.r3.s64 = ctx.r11.s64 + 21192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91CD4"))) PPC_WEAK_FUNC(sub_83C91CD4);
PPC_FUNC_IMPL(__imp__sub_83C91CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91CD8"))) PPC_WEAK_FUNC(sub_83C91CD8);
PPC_FUNC_IMPL(__imp__sub_83C91CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21200
	ctx.r3.s64 = ctx.r11.s64 + 21200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91CE4"))) PPC_WEAK_FUNC(sub_83C91CE4);
PPC_FUNC_IMPL(__imp__sub_83C91CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91CE8"))) PPC_WEAK_FUNC(sub_83C91CE8);
PPC_FUNC_IMPL(__imp__sub_83C91CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21208
	ctx.r3.s64 = ctx.r11.s64 + 21208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91CF4"))) PPC_WEAK_FUNC(sub_83C91CF4);
PPC_FUNC_IMPL(__imp__sub_83C91CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91CF8"))) PPC_WEAK_FUNC(sub_83C91CF8);
PPC_FUNC_IMPL(__imp__sub_83C91CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21216
	ctx.r3.s64 = ctx.r11.s64 + 21216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91D04"))) PPC_WEAK_FUNC(sub_83C91D04);
PPC_FUNC_IMPL(__imp__sub_83C91D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91D08"))) PPC_WEAK_FUNC(sub_83C91D08);
PPC_FUNC_IMPL(__imp__sub_83C91D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21224
	ctx.r3.s64 = ctx.r11.s64 + 21224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91D14"))) PPC_WEAK_FUNC(sub_83C91D14);
PPC_FUNC_IMPL(__imp__sub_83C91D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91D18"))) PPC_WEAK_FUNC(sub_83C91D18);
PPC_FUNC_IMPL(__imp__sub_83C91D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21232
	ctx.r3.s64 = ctx.r11.s64 + 21232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91D24"))) PPC_WEAK_FUNC(sub_83C91D24);
PPC_FUNC_IMPL(__imp__sub_83C91D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91D28"))) PPC_WEAK_FUNC(sub_83C91D28);
PPC_FUNC_IMPL(__imp__sub_83C91D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21240
	ctx.r3.s64 = ctx.r11.s64 + 21240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91D34"))) PPC_WEAK_FUNC(sub_83C91D34);
PPC_FUNC_IMPL(__imp__sub_83C91D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91D38"))) PPC_WEAK_FUNC(sub_83C91D38);
PPC_FUNC_IMPL(__imp__sub_83C91D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21248
	ctx.r3.s64 = ctx.r11.s64 + 21248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91D44"))) PPC_WEAK_FUNC(sub_83C91D44);
PPC_FUNC_IMPL(__imp__sub_83C91D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91D48"))) PPC_WEAK_FUNC(sub_83C91D48);
PPC_FUNC_IMPL(__imp__sub_83C91D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21256
	ctx.r3.s64 = ctx.r11.s64 + 21256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91D54"))) PPC_WEAK_FUNC(sub_83C91D54);
PPC_FUNC_IMPL(__imp__sub_83C91D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91D58"))) PPC_WEAK_FUNC(sub_83C91D58);
PPC_FUNC_IMPL(__imp__sub_83C91D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21264
	ctx.r3.s64 = ctx.r11.s64 + 21264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91D64"))) PPC_WEAK_FUNC(sub_83C91D64);
PPC_FUNC_IMPL(__imp__sub_83C91D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91D68"))) PPC_WEAK_FUNC(sub_83C91D68);
PPC_FUNC_IMPL(__imp__sub_83C91D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21272
	ctx.r3.s64 = ctx.r11.s64 + 21272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91D74"))) PPC_WEAK_FUNC(sub_83C91D74);
PPC_FUNC_IMPL(__imp__sub_83C91D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91D78"))) PPC_WEAK_FUNC(sub_83C91D78);
PPC_FUNC_IMPL(__imp__sub_83C91D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21280
	ctx.r3.s64 = ctx.r11.s64 + 21280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91D84"))) PPC_WEAK_FUNC(sub_83C91D84);
PPC_FUNC_IMPL(__imp__sub_83C91D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91D88"))) PPC_WEAK_FUNC(sub_83C91D88);
PPC_FUNC_IMPL(__imp__sub_83C91D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21288
	ctx.r3.s64 = ctx.r11.s64 + 21288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91D94"))) PPC_WEAK_FUNC(sub_83C91D94);
PPC_FUNC_IMPL(__imp__sub_83C91D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91D98"))) PPC_WEAK_FUNC(sub_83C91D98);
PPC_FUNC_IMPL(__imp__sub_83C91D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21296
	ctx.r3.s64 = ctx.r11.s64 + 21296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91DA4"))) PPC_WEAK_FUNC(sub_83C91DA4);
PPC_FUNC_IMPL(__imp__sub_83C91DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91DA8"))) PPC_WEAK_FUNC(sub_83C91DA8);
PPC_FUNC_IMPL(__imp__sub_83C91DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21304
	ctx.r3.s64 = ctx.r11.s64 + 21304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91DB4"))) PPC_WEAK_FUNC(sub_83C91DB4);
PPC_FUNC_IMPL(__imp__sub_83C91DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91DB8"))) PPC_WEAK_FUNC(sub_83C91DB8);
PPC_FUNC_IMPL(__imp__sub_83C91DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21312
	ctx.r3.s64 = ctx.r11.s64 + 21312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91DC4"))) PPC_WEAK_FUNC(sub_83C91DC4);
PPC_FUNC_IMPL(__imp__sub_83C91DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91DC8"))) PPC_WEAK_FUNC(sub_83C91DC8);
PPC_FUNC_IMPL(__imp__sub_83C91DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21320
	ctx.r3.s64 = ctx.r11.s64 + 21320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91DD4"))) PPC_WEAK_FUNC(sub_83C91DD4);
PPC_FUNC_IMPL(__imp__sub_83C91DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91DD8"))) PPC_WEAK_FUNC(sub_83C91DD8);
PPC_FUNC_IMPL(__imp__sub_83C91DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21328
	ctx.r3.s64 = ctx.r11.s64 + 21328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91DE4"))) PPC_WEAK_FUNC(sub_83C91DE4);
PPC_FUNC_IMPL(__imp__sub_83C91DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91DE8"))) PPC_WEAK_FUNC(sub_83C91DE8);
PPC_FUNC_IMPL(__imp__sub_83C91DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21336
	ctx.r3.s64 = ctx.r11.s64 + 21336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91DF4"))) PPC_WEAK_FUNC(sub_83C91DF4);
PPC_FUNC_IMPL(__imp__sub_83C91DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91DF8"))) PPC_WEAK_FUNC(sub_83C91DF8);
PPC_FUNC_IMPL(__imp__sub_83C91DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91E04"))) PPC_WEAK_FUNC(sub_83C91E04);
PPC_FUNC_IMPL(__imp__sub_83C91E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91E08"))) PPC_WEAK_FUNC(sub_83C91E08);
PPC_FUNC_IMPL(__imp__sub_83C91E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21352
	ctx.r3.s64 = ctx.r11.s64 + 21352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91E14"))) PPC_WEAK_FUNC(sub_83C91E14);
PPC_FUNC_IMPL(__imp__sub_83C91E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91E18"))) PPC_WEAK_FUNC(sub_83C91E18);
PPC_FUNC_IMPL(__imp__sub_83C91E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21360
	ctx.r3.s64 = ctx.r11.s64 + 21360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91E24"))) PPC_WEAK_FUNC(sub_83C91E24);
PPC_FUNC_IMPL(__imp__sub_83C91E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91E28"))) PPC_WEAK_FUNC(sub_83C91E28);
PPC_FUNC_IMPL(__imp__sub_83C91E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21368
	ctx.r3.s64 = ctx.r11.s64 + 21368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91E34"))) PPC_WEAK_FUNC(sub_83C91E34);
PPC_FUNC_IMPL(__imp__sub_83C91E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91E38"))) PPC_WEAK_FUNC(sub_83C91E38);
PPC_FUNC_IMPL(__imp__sub_83C91E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21376
	ctx.r3.s64 = ctx.r11.s64 + 21376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91E44"))) PPC_WEAK_FUNC(sub_83C91E44);
PPC_FUNC_IMPL(__imp__sub_83C91E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91E48"))) PPC_WEAK_FUNC(sub_83C91E48);
PPC_FUNC_IMPL(__imp__sub_83C91E48) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-28384
	ctx.r3.s64 = ctx.r11.s64 + -28384;
	// bl 0x83523120
	ctx.lr = 0x83C91E60;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,21384
	ctx.r3.s64 = ctx.r10.s64 + 21384;
	// bl 0x831cdcc8
	ctx.lr = 0x83C91E6C;
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

__attribute__((alias("__imp__sub_83C91E7C"))) PPC_WEAK_FUNC(sub_83C91E7C);
PPC_FUNC_IMPL(__imp__sub_83C91E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91E80"))) PPC_WEAK_FUNC(sub_83C91E80);
PPC_FUNC_IMPL(__imp__sub_83C91E80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-28368
	ctx.r7.s64 = ctx.r8.s64 + -28368;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-28368(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28368);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-28368(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28368, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C91EA8"))) PPC_WEAK_FUNC(sub_83C91EA8);
PPC_FUNC_IMPL(__imp__sub_83C91EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-3568
	ctx.r6.s64 = ctx.r7.s64 + -3568;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3640(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3640);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-28368(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28368);
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
	// std r9,-3568(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3568, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C91EF0"))) PPC_WEAK_FUNC(sub_83C91EF0);
PPC_FUNC_IMPL(__imp__sub_83C91EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21400
	ctx.r3.s64 = ctx.r11.s64 + 21400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91EFC"))) PPC_WEAK_FUNC(sub_83C91EFC);
PPC_FUNC_IMPL(__imp__sub_83C91EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91F00"))) PPC_WEAK_FUNC(sub_83C91F00);
PPC_FUNC_IMPL(__imp__sub_83C91F00) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-28360
	ctx.r3.s64 = ctx.r11.s64 + -28360;
	// bl 0x8259af80
	ctx.lr = 0x83C91F18;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,21416
	ctx.r3.s64 = ctx.r10.s64 + 21416;
	// bl 0x831cdcc8
	ctx.lr = 0x83C91F24;
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

__attribute__((alias("__imp__sub_83C91F34"))) PPC_WEAK_FUNC(sub_83C91F34);
PPC_FUNC_IMPL(__imp__sub_83C91F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91F38"))) PPC_WEAK_FUNC(sub_83C91F38);
PPC_FUNC_IMPL(__imp__sub_83C91F38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-28380
	ctx.r11.s64 = ctx.r8.s64 + -28380;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-3592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3592);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21408
	ctx.r3.s64 = ctx.r6.s64 + 21408;
	// stw r10,-28380(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28380, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91F68"))) PPC_WEAK_FUNC(sub_83C91F68);
PPC_FUNC_IMPL(__imp__sub_83C91F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21424
	ctx.r3.s64 = ctx.r11.s64 + 21424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91F74"))) PPC_WEAK_FUNC(sub_83C91F74);
PPC_FUNC_IMPL(__imp__sub_83C91F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91F78"))) PPC_WEAK_FUNC(sub_83C91F78);
PPC_FUNC_IMPL(__imp__sub_83C91F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21432
	ctx.r3.s64 = ctx.r11.s64 + 21432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91F84"))) PPC_WEAK_FUNC(sub_83C91F84);
PPC_FUNC_IMPL(__imp__sub_83C91F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91F88"))) PPC_WEAK_FUNC(sub_83C91F88);
PPC_FUNC_IMPL(__imp__sub_83C91F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21440
	ctx.r3.s64 = ctx.r11.s64 + 21440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91F94"))) PPC_WEAK_FUNC(sub_83C91F94);
PPC_FUNC_IMPL(__imp__sub_83C91F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91F98"))) PPC_WEAK_FUNC(sub_83C91F98);
PPC_FUNC_IMPL(__imp__sub_83C91F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21448
	ctx.r3.s64 = ctx.r11.s64 + 21448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91FA4"))) PPC_WEAK_FUNC(sub_83C91FA4);
PPC_FUNC_IMPL(__imp__sub_83C91FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91FA8"))) PPC_WEAK_FUNC(sub_83C91FA8);
PPC_FUNC_IMPL(__imp__sub_83C91FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21456
	ctx.r3.s64 = ctx.r11.s64 + 21456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91FB4"))) PPC_WEAK_FUNC(sub_83C91FB4);
PPC_FUNC_IMPL(__imp__sub_83C91FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91FB8"))) PPC_WEAK_FUNC(sub_83C91FB8);
PPC_FUNC_IMPL(__imp__sub_83C91FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21464
	ctx.r3.s64 = ctx.r11.s64 + 21464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91FC4"))) PPC_WEAK_FUNC(sub_83C91FC4);
PPC_FUNC_IMPL(__imp__sub_83C91FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91FC8"))) PPC_WEAK_FUNC(sub_83C91FC8);
PPC_FUNC_IMPL(__imp__sub_83C91FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21472
	ctx.r3.s64 = ctx.r11.s64 + 21472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91FD4"))) PPC_WEAK_FUNC(sub_83C91FD4);
PPC_FUNC_IMPL(__imp__sub_83C91FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91FD8"))) PPC_WEAK_FUNC(sub_83C91FD8);
PPC_FUNC_IMPL(__imp__sub_83C91FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21480
	ctx.r3.s64 = ctx.r11.s64 + 21480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91FE4"))) PPC_WEAK_FUNC(sub_83C91FE4);
PPC_FUNC_IMPL(__imp__sub_83C91FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91FE8"))) PPC_WEAK_FUNC(sub_83C91FE8);
PPC_FUNC_IMPL(__imp__sub_83C91FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21488
	ctx.r3.s64 = ctx.r11.s64 + 21488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C91FF4"))) PPC_WEAK_FUNC(sub_83C91FF4);
PPC_FUNC_IMPL(__imp__sub_83C91FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C91FF8"))) PPC_WEAK_FUNC(sub_83C91FF8);
PPC_FUNC_IMPL(__imp__sub_83C91FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21496
	ctx.r3.s64 = ctx.r11.s64 + 21496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92004"))) PPC_WEAK_FUNC(sub_83C92004);
PPC_FUNC_IMPL(__imp__sub_83C92004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92008"))) PPC_WEAK_FUNC(sub_83C92008);
PPC_FUNC_IMPL(__imp__sub_83C92008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21504
	ctx.r3.s64 = ctx.r11.s64 + 21504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92014"))) PPC_WEAK_FUNC(sub_83C92014);
PPC_FUNC_IMPL(__imp__sub_83C92014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92018"))) PPC_WEAK_FUNC(sub_83C92018);
PPC_FUNC_IMPL(__imp__sub_83C92018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21512
	ctx.r3.s64 = ctx.r11.s64 + 21512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

