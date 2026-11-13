#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C3746C"))) PPC_WEAK_FUNC(sub_83C3746C);
PPC_FUNC_IMPL(__imp__sub_83C3746C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37470"))) PPC_WEAK_FUNC(sub_83C37470);
PPC_FUNC_IMPL(__imp__sub_83C37470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24520
	ctx.r3.s64 = ctx.r11.s64 + 24520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3747C"))) PPC_WEAK_FUNC(sub_83C3747C);
PPC_FUNC_IMPL(__imp__sub_83C3747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37480"))) PPC_WEAK_FUNC(sub_83C37480);
PPC_FUNC_IMPL(__imp__sub_83C37480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24528
	ctx.r3.s64 = ctx.r11.s64 + 24528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3748C"))) PPC_WEAK_FUNC(sub_83C3748C);
PPC_FUNC_IMPL(__imp__sub_83C3748C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37490"))) PPC_WEAK_FUNC(sub_83C37490);
PPC_FUNC_IMPL(__imp__sub_83C37490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24536
	ctx.r3.s64 = ctx.r11.s64 + 24536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3749C"))) PPC_WEAK_FUNC(sub_83C3749C);
PPC_FUNC_IMPL(__imp__sub_83C3749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C374A0"))) PPC_WEAK_FUNC(sub_83C374A0);
PPC_FUNC_IMPL(__imp__sub_83C374A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24544
	ctx.r3.s64 = ctx.r11.s64 + 24544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C374AC"))) PPC_WEAK_FUNC(sub_83C374AC);
PPC_FUNC_IMPL(__imp__sub_83C374AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C374B0"))) PPC_WEAK_FUNC(sub_83C374B0);
PPC_FUNC_IMPL(__imp__sub_83C374B0) {
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
	// addi r3,r11,20524
	ctx.r3.s64 = ctx.r11.s64 + 20524;
	// bl 0x83523120
	ctx.lr = 0x83C374C8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,24552
	ctx.r3.s64 = ctx.r10.s64 + 24552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C374D4;
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

__attribute__((alias("__imp__sub_83C374E4"))) PPC_WEAK_FUNC(sub_83C374E4);
PPC_FUNC_IMPL(__imp__sub_83C374E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C374E8"))) PPC_WEAK_FUNC(sub_83C374E8);
PPC_FUNC_IMPL(__imp__sub_83C374E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20540
	ctx.r7.s64 = ctx.r8.s64 + 20540;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20540(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20540);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20540(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20540, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C37510"))) PPC_WEAK_FUNC(sub_83C37510);
PPC_FUNC_IMPL(__imp__sub_83C37510) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-24840
	ctx.r6.s64 = ctx.r7.s64 + -24840;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24912(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24912);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20540(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20540);
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
	// std r9,-24840(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24840, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C37558"))) PPC_WEAK_FUNC(sub_83C37558);
PPC_FUNC_IMPL(__imp__sub_83C37558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24568
	ctx.r3.s64 = ctx.r11.s64 + 24568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37564"))) PPC_WEAK_FUNC(sub_83C37564);
PPC_FUNC_IMPL(__imp__sub_83C37564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37568"))) PPC_WEAK_FUNC(sub_83C37568);
PPC_FUNC_IMPL(__imp__sub_83C37568) {
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
	// addi r3,r11,20552
	ctx.r3.s64 = ctx.r11.s64 + 20552;
	// bl 0x8259af80
	ctx.lr = 0x83C37580;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,24584
	ctx.r3.s64 = ctx.r10.s64 + 24584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3758C;
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

__attribute__((alias("__imp__sub_83C3759C"))) PPC_WEAK_FUNC(sub_83C3759C);
PPC_FUNC_IMPL(__imp__sub_83C3759C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C375A0"))) PPC_WEAK_FUNC(sub_83C375A0);
PPC_FUNC_IMPL(__imp__sub_83C375A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20528
	ctx.r11.s64 = ctx.r8.s64 + 20528;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-24864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24864);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24576
	ctx.r3.s64 = ctx.r6.s64 + 24576;
	// stw r10,20528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20528, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C375D0"))) PPC_WEAK_FUNC(sub_83C375D0);
PPC_FUNC_IMPL(__imp__sub_83C375D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24592
	ctx.r3.s64 = ctx.r11.s64 + 24592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C375DC"))) PPC_WEAK_FUNC(sub_83C375DC);
PPC_FUNC_IMPL(__imp__sub_83C375DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C375E0"))) PPC_WEAK_FUNC(sub_83C375E0);
PPC_FUNC_IMPL(__imp__sub_83C375E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24600
	ctx.r3.s64 = ctx.r11.s64 + 24600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C375EC"))) PPC_WEAK_FUNC(sub_83C375EC);
PPC_FUNC_IMPL(__imp__sub_83C375EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C375F0"))) PPC_WEAK_FUNC(sub_83C375F0);
PPC_FUNC_IMPL(__imp__sub_83C375F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24608
	ctx.r3.s64 = ctx.r11.s64 + 24608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C375FC"))) PPC_WEAK_FUNC(sub_83C375FC);
PPC_FUNC_IMPL(__imp__sub_83C375FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37600"))) PPC_WEAK_FUNC(sub_83C37600);
PPC_FUNC_IMPL(__imp__sub_83C37600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24616
	ctx.r3.s64 = ctx.r11.s64 + 24616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3760C"))) PPC_WEAK_FUNC(sub_83C3760C);
PPC_FUNC_IMPL(__imp__sub_83C3760C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37610"))) PPC_WEAK_FUNC(sub_83C37610);
PPC_FUNC_IMPL(__imp__sub_83C37610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24624
	ctx.r3.s64 = ctx.r11.s64 + 24624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3761C"))) PPC_WEAK_FUNC(sub_83C3761C);
PPC_FUNC_IMPL(__imp__sub_83C3761C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37620"))) PPC_WEAK_FUNC(sub_83C37620);
PPC_FUNC_IMPL(__imp__sub_83C37620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24632
	ctx.r3.s64 = ctx.r11.s64 + 24632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3762C"))) PPC_WEAK_FUNC(sub_83C3762C);
PPC_FUNC_IMPL(__imp__sub_83C3762C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37630"))) PPC_WEAK_FUNC(sub_83C37630);
PPC_FUNC_IMPL(__imp__sub_83C37630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24640
	ctx.r3.s64 = ctx.r11.s64 + 24640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3763C"))) PPC_WEAK_FUNC(sub_83C3763C);
PPC_FUNC_IMPL(__imp__sub_83C3763C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37640"))) PPC_WEAK_FUNC(sub_83C37640);
PPC_FUNC_IMPL(__imp__sub_83C37640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24648
	ctx.r3.s64 = ctx.r11.s64 + 24648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3764C"))) PPC_WEAK_FUNC(sub_83C3764C);
PPC_FUNC_IMPL(__imp__sub_83C3764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37650"))) PPC_WEAK_FUNC(sub_83C37650);
PPC_FUNC_IMPL(__imp__sub_83C37650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24656
	ctx.r3.s64 = ctx.r11.s64 + 24656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3765C"))) PPC_WEAK_FUNC(sub_83C3765C);
PPC_FUNC_IMPL(__imp__sub_83C3765C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37660"))) PPC_WEAK_FUNC(sub_83C37660);
PPC_FUNC_IMPL(__imp__sub_83C37660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24664
	ctx.r3.s64 = ctx.r11.s64 + 24664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3766C"))) PPC_WEAK_FUNC(sub_83C3766C);
PPC_FUNC_IMPL(__imp__sub_83C3766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37670"))) PPC_WEAK_FUNC(sub_83C37670);
PPC_FUNC_IMPL(__imp__sub_83C37670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24672
	ctx.r3.s64 = ctx.r11.s64 + 24672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3767C"))) PPC_WEAK_FUNC(sub_83C3767C);
PPC_FUNC_IMPL(__imp__sub_83C3767C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37680"))) PPC_WEAK_FUNC(sub_83C37680);
PPC_FUNC_IMPL(__imp__sub_83C37680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24680
	ctx.r3.s64 = ctx.r11.s64 + 24680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3768C"))) PPC_WEAK_FUNC(sub_83C3768C);
PPC_FUNC_IMPL(__imp__sub_83C3768C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37690"))) PPC_WEAK_FUNC(sub_83C37690);
PPC_FUNC_IMPL(__imp__sub_83C37690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24688
	ctx.r3.s64 = ctx.r11.s64 + 24688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3769C"))) PPC_WEAK_FUNC(sub_83C3769C);
PPC_FUNC_IMPL(__imp__sub_83C3769C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C376A0"))) PPC_WEAK_FUNC(sub_83C376A0);
PPC_FUNC_IMPL(__imp__sub_83C376A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24696
	ctx.r3.s64 = ctx.r11.s64 + 24696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C376AC"))) PPC_WEAK_FUNC(sub_83C376AC);
PPC_FUNC_IMPL(__imp__sub_83C376AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C376B0"))) PPC_WEAK_FUNC(sub_83C376B0);
PPC_FUNC_IMPL(__imp__sub_83C376B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24704
	ctx.r3.s64 = ctx.r11.s64 + 24704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C376BC"))) PPC_WEAK_FUNC(sub_83C376BC);
PPC_FUNC_IMPL(__imp__sub_83C376BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C376C0"))) PPC_WEAK_FUNC(sub_83C376C0);
PPC_FUNC_IMPL(__imp__sub_83C376C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24712
	ctx.r3.s64 = ctx.r11.s64 + 24712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C376CC"))) PPC_WEAK_FUNC(sub_83C376CC);
PPC_FUNC_IMPL(__imp__sub_83C376CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C376D0"))) PPC_WEAK_FUNC(sub_83C376D0);
PPC_FUNC_IMPL(__imp__sub_83C376D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24720
	ctx.r3.s64 = ctx.r11.s64 + 24720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C376DC"))) PPC_WEAK_FUNC(sub_83C376DC);
PPC_FUNC_IMPL(__imp__sub_83C376DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C376E0"))) PPC_WEAK_FUNC(sub_83C376E0);
PPC_FUNC_IMPL(__imp__sub_83C376E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24728
	ctx.r3.s64 = ctx.r11.s64 + 24728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C376EC"))) PPC_WEAK_FUNC(sub_83C376EC);
PPC_FUNC_IMPL(__imp__sub_83C376EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C376F0"))) PPC_WEAK_FUNC(sub_83C376F0);
PPC_FUNC_IMPL(__imp__sub_83C376F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24736
	ctx.r3.s64 = ctx.r11.s64 + 24736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C376FC"))) PPC_WEAK_FUNC(sub_83C376FC);
PPC_FUNC_IMPL(__imp__sub_83C376FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37700"))) PPC_WEAK_FUNC(sub_83C37700);
PPC_FUNC_IMPL(__imp__sub_83C37700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24744
	ctx.r3.s64 = ctx.r11.s64 + 24744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3770C"))) PPC_WEAK_FUNC(sub_83C3770C);
PPC_FUNC_IMPL(__imp__sub_83C3770C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37710"))) PPC_WEAK_FUNC(sub_83C37710);
PPC_FUNC_IMPL(__imp__sub_83C37710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24752
	ctx.r3.s64 = ctx.r11.s64 + 24752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3771C"))) PPC_WEAK_FUNC(sub_83C3771C);
PPC_FUNC_IMPL(__imp__sub_83C3771C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37720"))) PPC_WEAK_FUNC(sub_83C37720);
PPC_FUNC_IMPL(__imp__sub_83C37720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3772C"))) PPC_WEAK_FUNC(sub_83C3772C);
PPC_FUNC_IMPL(__imp__sub_83C3772C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37730"))) PPC_WEAK_FUNC(sub_83C37730);
PPC_FUNC_IMPL(__imp__sub_83C37730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24768
	ctx.r3.s64 = ctx.r11.s64 + 24768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3773C"))) PPC_WEAK_FUNC(sub_83C3773C);
PPC_FUNC_IMPL(__imp__sub_83C3773C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37740"))) PPC_WEAK_FUNC(sub_83C37740);
PPC_FUNC_IMPL(__imp__sub_83C37740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24776
	ctx.r3.s64 = ctx.r11.s64 + 24776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3774C"))) PPC_WEAK_FUNC(sub_83C3774C);
PPC_FUNC_IMPL(__imp__sub_83C3774C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37750"))) PPC_WEAK_FUNC(sub_83C37750);
PPC_FUNC_IMPL(__imp__sub_83C37750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24784
	ctx.r3.s64 = ctx.r11.s64 + 24784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3775C"))) PPC_WEAK_FUNC(sub_83C3775C);
PPC_FUNC_IMPL(__imp__sub_83C3775C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37760"))) PPC_WEAK_FUNC(sub_83C37760);
PPC_FUNC_IMPL(__imp__sub_83C37760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24792
	ctx.r3.s64 = ctx.r11.s64 + 24792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3776C"))) PPC_WEAK_FUNC(sub_83C3776C);
PPC_FUNC_IMPL(__imp__sub_83C3776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37770"))) PPC_WEAK_FUNC(sub_83C37770);
PPC_FUNC_IMPL(__imp__sub_83C37770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24800
	ctx.r3.s64 = ctx.r11.s64 + 24800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3777C"))) PPC_WEAK_FUNC(sub_83C3777C);
PPC_FUNC_IMPL(__imp__sub_83C3777C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37780"))) PPC_WEAK_FUNC(sub_83C37780);
PPC_FUNC_IMPL(__imp__sub_83C37780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24808
	ctx.r3.s64 = ctx.r11.s64 + 24808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3778C"))) PPC_WEAK_FUNC(sub_83C3778C);
PPC_FUNC_IMPL(__imp__sub_83C3778C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37790"))) PPC_WEAK_FUNC(sub_83C37790);
PPC_FUNC_IMPL(__imp__sub_83C37790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24816
	ctx.r3.s64 = ctx.r11.s64 + 24816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3779C"))) PPC_WEAK_FUNC(sub_83C3779C);
PPC_FUNC_IMPL(__imp__sub_83C3779C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C377A0"))) PPC_WEAK_FUNC(sub_83C377A0);
PPC_FUNC_IMPL(__imp__sub_83C377A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24824
	ctx.r3.s64 = ctx.r11.s64 + 24824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C377AC"))) PPC_WEAK_FUNC(sub_83C377AC);
PPC_FUNC_IMPL(__imp__sub_83C377AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C377B0"))) PPC_WEAK_FUNC(sub_83C377B0);
PPC_FUNC_IMPL(__imp__sub_83C377B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24832
	ctx.r3.s64 = ctx.r11.s64 + 24832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C377BC"))) PPC_WEAK_FUNC(sub_83C377BC);
PPC_FUNC_IMPL(__imp__sub_83C377BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C377C0"))) PPC_WEAK_FUNC(sub_83C377C0);
PPC_FUNC_IMPL(__imp__sub_83C377C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24840
	ctx.r3.s64 = ctx.r11.s64 + 24840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C377CC"))) PPC_WEAK_FUNC(sub_83C377CC);
PPC_FUNC_IMPL(__imp__sub_83C377CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C377D0"))) PPC_WEAK_FUNC(sub_83C377D0);
PPC_FUNC_IMPL(__imp__sub_83C377D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24848
	ctx.r3.s64 = ctx.r11.s64 + 24848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C377DC"))) PPC_WEAK_FUNC(sub_83C377DC);
PPC_FUNC_IMPL(__imp__sub_83C377DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C377E0"))) PPC_WEAK_FUNC(sub_83C377E0);
PPC_FUNC_IMPL(__imp__sub_83C377E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24856
	ctx.r3.s64 = ctx.r11.s64 + 24856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C377EC"))) PPC_WEAK_FUNC(sub_83C377EC);
PPC_FUNC_IMPL(__imp__sub_83C377EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C377F0"))) PPC_WEAK_FUNC(sub_83C377F0);
PPC_FUNC_IMPL(__imp__sub_83C377F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24864
	ctx.r3.s64 = ctx.r11.s64 + 24864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C377FC"))) PPC_WEAK_FUNC(sub_83C377FC);
PPC_FUNC_IMPL(__imp__sub_83C377FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37800"))) PPC_WEAK_FUNC(sub_83C37800);
PPC_FUNC_IMPL(__imp__sub_83C37800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24872
	ctx.r3.s64 = ctx.r11.s64 + 24872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3780C"))) PPC_WEAK_FUNC(sub_83C3780C);
PPC_FUNC_IMPL(__imp__sub_83C3780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37810"))) PPC_WEAK_FUNC(sub_83C37810);
PPC_FUNC_IMPL(__imp__sub_83C37810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24880
	ctx.r3.s64 = ctx.r11.s64 + 24880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3781C"))) PPC_WEAK_FUNC(sub_83C3781C);
PPC_FUNC_IMPL(__imp__sub_83C3781C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37820"))) PPC_WEAK_FUNC(sub_83C37820);
PPC_FUNC_IMPL(__imp__sub_83C37820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24888
	ctx.r3.s64 = ctx.r11.s64 + 24888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3782C"))) PPC_WEAK_FUNC(sub_83C3782C);
PPC_FUNC_IMPL(__imp__sub_83C3782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37830"))) PPC_WEAK_FUNC(sub_83C37830);
PPC_FUNC_IMPL(__imp__sub_83C37830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24896
	ctx.r3.s64 = ctx.r11.s64 + 24896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3783C"))) PPC_WEAK_FUNC(sub_83C3783C);
PPC_FUNC_IMPL(__imp__sub_83C3783C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37840"))) PPC_WEAK_FUNC(sub_83C37840);
PPC_FUNC_IMPL(__imp__sub_83C37840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24904
	ctx.r3.s64 = ctx.r11.s64 + 24904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3784C"))) PPC_WEAK_FUNC(sub_83C3784C);
PPC_FUNC_IMPL(__imp__sub_83C3784C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37850"))) PPC_WEAK_FUNC(sub_83C37850);
PPC_FUNC_IMPL(__imp__sub_83C37850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24912
	ctx.r3.s64 = ctx.r11.s64 + 24912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3785C"))) PPC_WEAK_FUNC(sub_83C3785C);
PPC_FUNC_IMPL(__imp__sub_83C3785C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37860"))) PPC_WEAK_FUNC(sub_83C37860);
PPC_FUNC_IMPL(__imp__sub_83C37860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24920
	ctx.r3.s64 = ctx.r11.s64 + 24920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3786C"))) PPC_WEAK_FUNC(sub_83C3786C);
PPC_FUNC_IMPL(__imp__sub_83C3786C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37870"))) PPC_WEAK_FUNC(sub_83C37870);
PPC_FUNC_IMPL(__imp__sub_83C37870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24928
	ctx.r3.s64 = ctx.r11.s64 + 24928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3787C"))) PPC_WEAK_FUNC(sub_83C3787C);
PPC_FUNC_IMPL(__imp__sub_83C3787C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37880"))) PPC_WEAK_FUNC(sub_83C37880);
PPC_FUNC_IMPL(__imp__sub_83C37880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24936
	ctx.r3.s64 = ctx.r11.s64 + 24936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3788C"))) PPC_WEAK_FUNC(sub_83C3788C);
PPC_FUNC_IMPL(__imp__sub_83C3788C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37890"))) PPC_WEAK_FUNC(sub_83C37890);
PPC_FUNC_IMPL(__imp__sub_83C37890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24944
	ctx.r3.s64 = ctx.r11.s64 + 24944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3789C"))) PPC_WEAK_FUNC(sub_83C3789C);
PPC_FUNC_IMPL(__imp__sub_83C3789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C378A0"))) PPC_WEAK_FUNC(sub_83C378A0);
PPC_FUNC_IMPL(__imp__sub_83C378A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24952
	ctx.r3.s64 = ctx.r11.s64 + 24952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C378AC"))) PPC_WEAK_FUNC(sub_83C378AC);
PPC_FUNC_IMPL(__imp__sub_83C378AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C378B0"))) PPC_WEAK_FUNC(sub_83C378B0);
PPC_FUNC_IMPL(__imp__sub_83C378B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24960
	ctx.r3.s64 = ctx.r11.s64 + 24960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C378BC"))) PPC_WEAK_FUNC(sub_83C378BC);
PPC_FUNC_IMPL(__imp__sub_83C378BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C378C0"))) PPC_WEAK_FUNC(sub_83C378C0);
PPC_FUNC_IMPL(__imp__sub_83C378C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24968
	ctx.r3.s64 = ctx.r11.s64 + 24968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C378CC"))) PPC_WEAK_FUNC(sub_83C378CC);
PPC_FUNC_IMPL(__imp__sub_83C378CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C378D0"))) PPC_WEAK_FUNC(sub_83C378D0);
PPC_FUNC_IMPL(__imp__sub_83C378D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24976
	ctx.r3.s64 = ctx.r11.s64 + 24976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C378DC"))) PPC_WEAK_FUNC(sub_83C378DC);
PPC_FUNC_IMPL(__imp__sub_83C378DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C378E0"))) PPC_WEAK_FUNC(sub_83C378E0);
PPC_FUNC_IMPL(__imp__sub_83C378E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24984
	ctx.r3.s64 = ctx.r11.s64 + 24984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C378EC"))) PPC_WEAK_FUNC(sub_83C378EC);
PPC_FUNC_IMPL(__imp__sub_83C378EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C378F0"))) PPC_WEAK_FUNC(sub_83C378F0);
PPC_FUNC_IMPL(__imp__sub_83C378F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,24992
	ctx.r3.s64 = ctx.r11.s64 + 24992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C378FC"))) PPC_WEAK_FUNC(sub_83C378FC);
PPC_FUNC_IMPL(__imp__sub_83C378FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37900"))) PPC_WEAK_FUNC(sub_83C37900);
PPC_FUNC_IMPL(__imp__sub_83C37900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25000
	ctx.r3.s64 = ctx.r11.s64 + 25000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3790C"))) PPC_WEAK_FUNC(sub_83C3790C);
PPC_FUNC_IMPL(__imp__sub_83C3790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37910"))) PPC_WEAK_FUNC(sub_83C37910);
PPC_FUNC_IMPL(__imp__sub_83C37910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25008
	ctx.r3.s64 = ctx.r11.s64 + 25008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3791C"))) PPC_WEAK_FUNC(sub_83C3791C);
PPC_FUNC_IMPL(__imp__sub_83C3791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37920"))) PPC_WEAK_FUNC(sub_83C37920);
PPC_FUNC_IMPL(__imp__sub_83C37920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25016
	ctx.r3.s64 = ctx.r11.s64 + 25016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3792C"))) PPC_WEAK_FUNC(sub_83C3792C);
PPC_FUNC_IMPL(__imp__sub_83C3792C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37930"))) PPC_WEAK_FUNC(sub_83C37930);
PPC_FUNC_IMPL(__imp__sub_83C37930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25024
	ctx.r3.s64 = ctx.r11.s64 + 25024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3793C"))) PPC_WEAK_FUNC(sub_83C3793C);
PPC_FUNC_IMPL(__imp__sub_83C3793C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37940"))) PPC_WEAK_FUNC(sub_83C37940);
PPC_FUNC_IMPL(__imp__sub_83C37940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25032
	ctx.r3.s64 = ctx.r11.s64 + 25032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3794C"))) PPC_WEAK_FUNC(sub_83C3794C);
PPC_FUNC_IMPL(__imp__sub_83C3794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37950"))) PPC_WEAK_FUNC(sub_83C37950);
PPC_FUNC_IMPL(__imp__sub_83C37950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25040
	ctx.r3.s64 = ctx.r11.s64 + 25040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3795C"))) PPC_WEAK_FUNC(sub_83C3795C);
PPC_FUNC_IMPL(__imp__sub_83C3795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37960"))) PPC_WEAK_FUNC(sub_83C37960);
PPC_FUNC_IMPL(__imp__sub_83C37960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25048
	ctx.r3.s64 = ctx.r11.s64 + 25048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3796C"))) PPC_WEAK_FUNC(sub_83C3796C);
PPC_FUNC_IMPL(__imp__sub_83C3796C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37970"))) PPC_WEAK_FUNC(sub_83C37970);
PPC_FUNC_IMPL(__imp__sub_83C37970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25056
	ctx.r3.s64 = ctx.r11.s64 + 25056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3797C"))) PPC_WEAK_FUNC(sub_83C3797C);
PPC_FUNC_IMPL(__imp__sub_83C3797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37980"))) PPC_WEAK_FUNC(sub_83C37980);
PPC_FUNC_IMPL(__imp__sub_83C37980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25064
	ctx.r3.s64 = ctx.r11.s64 + 25064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3798C"))) PPC_WEAK_FUNC(sub_83C3798C);
PPC_FUNC_IMPL(__imp__sub_83C3798C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37990"))) PPC_WEAK_FUNC(sub_83C37990);
PPC_FUNC_IMPL(__imp__sub_83C37990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25072
	ctx.r3.s64 = ctx.r11.s64 + 25072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3799C"))) PPC_WEAK_FUNC(sub_83C3799C);
PPC_FUNC_IMPL(__imp__sub_83C3799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C379A0"))) PPC_WEAK_FUNC(sub_83C379A0);
PPC_FUNC_IMPL(__imp__sub_83C379A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25080
	ctx.r3.s64 = ctx.r11.s64 + 25080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C379AC"))) PPC_WEAK_FUNC(sub_83C379AC);
PPC_FUNC_IMPL(__imp__sub_83C379AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C379B0"))) PPC_WEAK_FUNC(sub_83C379B0);
PPC_FUNC_IMPL(__imp__sub_83C379B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25088
	ctx.r3.s64 = ctx.r11.s64 + 25088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C379BC"))) PPC_WEAK_FUNC(sub_83C379BC);
PPC_FUNC_IMPL(__imp__sub_83C379BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C379C0"))) PPC_WEAK_FUNC(sub_83C379C0);
PPC_FUNC_IMPL(__imp__sub_83C379C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25096
	ctx.r3.s64 = ctx.r11.s64 + 25096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C379CC"))) PPC_WEAK_FUNC(sub_83C379CC);
PPC_FUNC_IMPL(__imp__sub_83C379CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C379D0"))) PPC_WEAK_FUNC(sub_83C379D0);
PPC_FUNC_IMPL(__imp__sub_83C379D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25104
	ctx.r3.s64 = ctx.r11.s64 + 25104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C379DC"))) PPC_WEAK_FUNC(sub_83C379DC);
PPC_FUNC_IMPL(__imp__sub_83C379DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C379E0"))) PPC_WEAK_FUNC(sub_83C379E0);
PPC_FUNC_IMPL(__imp__sub_83C379E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25112
	ctx.r3.s64 = ctx.r11.s64 + 25112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C379EC"))) PPC_WEAK_FUNC(sub_83C379EC);
PPC_FUNC_IMPL(__imp__sub_83C379EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C379F0"))) PPC_WEAK_FUNC(sub_83C379F0);
PPC_FUNC_IMPL(__imp__sub_83C379F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25120
	ctx.r3.s64 = ctx.r11.s64 + 25120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C379FC"))) PPC_WEAK_FUNC(sub_83C379FC);
PPC_FUNC_IMPL(__imp__sub_83C379FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37A00"))) PPC_WEAK_FUNC(sub_83C37A00);
PPC_FUNC_IMPL(__imp__sub_83C37A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25128
	ctx.r3.s64 = ctx.r11.s64 + 25128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37A0C"))) PPC_WEAK_FUNC(sub_83C37A0C);
PPC_FUNC_IMPL(__imp__sub_83C37A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37A10"))) PPC_WEAK_FUNC(sub_83C37A10);
PPC_FUNC_IMPL(__imp__sub_83C37A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25136
	ctx.r3.s64 = ctx.r11.s64 + 25136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37A1C"))) PPC_WEAK_FUNC(sub_83C37A1C);
PPC_FUNC_IMPL(__imp__sub_83C37A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37A20"))) PPC_WEAK_FUNC(sub_83C37A20);
PPC_FUNC_IMPL(__imp__sub_83C37A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25144
	ctx.r3.s64 = ctx.r11.s64 + 25144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37A2C"))) PPC_WEAK_FUNC(sub_83C37A2C);
PPC_FUNC_IMPL(__imp__sub_83C37A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37A30"))) PPC_WEAK_FUNC(sub_83C37A30);
PPC_FUNC_IMPL(__imp__sub_83C37A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25152
	ctx.r3.s64 = ctx.r11.s64 + 25152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37A3C"))) PPC_WEAK_FUNC(sub_83C37A3C);
PPC_FUNC_IMPL(__imp__sub_83C37A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37A40"))) PPC_WEAK_FUNC(sub_83C37A40);
PPC_FUNC_IMPL(__imp__sub_83C37A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25160
	ctx.r3.s64 = ctx.r11.s64 + 25160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37A4C"))) PPC_WEAK_FUNC(sub_83C37A4C);
PPC_FUNC_IMPL(__imp__sub_83C37A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37A50"))) PPC_WEAK_FUNC(sub_83C37A50);
PPC_FUNC_IMPL(__imp__sub_83C37A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25168
	ctx.r3.s64 = ctx.r11.s64 + 25168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37A5C"))) PPC_WEAK_FUNC(sub_83C37A5C);
PPC_FUNC_IMPL(__imp__sub_83C37A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37A60"))) PPC_WEAK_FUNC(sub_83C37A60);
PPC_FUNC_IMPL(__imp__sub_83C37A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25176
	ctx.r3.s64 = ctx.r11.s64 + 25176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37A6C"))) PPC_WEAK_FUNC(sub_83C37A6C);
PPC_FUNC_IMPL(__imp__sub_83C37A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37A70"))) PPC_WEAK_FUNC(sub_83C37A70);
PPC_FUNC_IMPL(__imp__sub_83C37A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25184
	ctx.r3.s64 = ctx.r11.s64 + 25184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37A7C"))) PPC_WEAK_FUNC(sub_83C37A7C);
PPC_FUNC_IMPL(__imp__sub_83C37A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37A80"))) PPC_WEAK_FUNC(sub_83C37A80);
PPC_FUNC_IMPL(__imp__sub_83C37A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25192
	ctx.r3.s64 = ctx.r11.s64 + 25192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37A8C"))) PPC_WEAK_FUNC(sub_83C37A8C);
PPC_FUNC_IMPL(__imp__sub_83C37A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37A90"))) PPC_WEAK_FUNC(sub_83C37A90);
PPC_FUNC_IMPL(__imp__sub_83C37A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25200
	ctx.r3.s64 = ctx.r11.s64 + 25200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37A9C"))) PPC_WEAK_FUNC(sub_83C37A9C);
PPC_FUNC_IMPL(__imp__sub_83C37A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37AA0"))) PPC_WEAK_FUNC(sub_83C37AA0);
PPC_FUNC_IMPL(__imp__sub_83C37AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25208
	ctx.r3.s64 = ctx.r11.s64 + 25208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37AAC"))) PPC_WEAK_FUNC(sub_83C37AAC);
PPC_FUNC_IMPL(__imp__sub_83C37AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37AB0"))) PPC_WEAK_FUNC(sub_83C37AB0);
PPC_FUNC_IMPL(__imp__sub_83C37AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25216
	ctx.r3.s64 = ctx.r11.s64 + 25216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37ABC"))) PPC_WEAK_FUNC(sub_83C37ABC);
PPC_FUNC_IMPL(__imp__sub_83C37ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37AC0"))) PPC_WEAK_FUNC(sub_83C37AC0);
PPC_FUNC_IMPL(__imp__sub_83C37AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25224
	ctx.r3.s64 = ctx.r11.s64 + 25224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37ACC"))) PPC_WEAK_FUNC(sub_83C37ACC);
PPC_FUNC_IMPL(__imp__sub_83C37ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37AD0"))) PPC_WEAK_FUNC(sub_83C37AD0);
PPC_FUNC_IMPL(__imp__sub_83C37AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25232
	ctx.r3.s64 = ctx.r11.s64 + 25232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37ADC"))) PPC_WEAK_FUNC(sub_83C37ADC);
PPC_FUNC_IMPL(__imp__sub_83C37ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37AE0"))) PPC_WEAK_FUNC(sub_83C37AE0);
PPC_FUNC_IMPL(__imp__sub_83C37AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25240
	ctx.r3.s64 = ctx.r11.s64 + 25240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37AEC"))) PPC_WEAK_FUNC(sub_83C37AEC);
PPC_FUNC_IMPL(__imp__sub_83C37AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37AF0"))) PPC_WEAK_FUNC(sub_83C37AF0);
PPC_FUNC_IMPL(__imp__sub_83C37AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25248
	ctx.r3.s64 = ctx.r11.s64 + 25248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37AFC"))) PPC_WEAK_FUNC(sub_83C37AFC);
PPC_FUNC_IMPL(__imp__sub_83C37AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37B00"))) PPC_WEAK_FUNC(sub_83C37B00);
PPC_FUNC_IMPL(__imp__sub_83C37B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25256
	ctx.r3.s64 = ctx.r11.s64 + 25256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37B0C"))) PPC_WEAK_FUNC(sub_83C37B0C);
PPC_FUNC_IMPL(__imp__sub_83C37B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37B10"))) PPC_WEAK_FUNC(sub_83C37B10);
PPC_FUNC_IMPL(__imp__sub_83C37B10) {
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
	// addi r3,r11,20952
	ctx.r3.s64 = ctx.r11.s64 + 20952;
	// bl 0x83523120
	ctx.lr = 0x83C37B28;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,25264
	ctx.r3.s64 = ctx.r10.s64 + 25264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C37B34;
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

__attribute__((alias("__imp__sub_83C37B44"))) PPC_WEAK_FUNC(sub_83C37B44);
PPC_FUNC_IMPL(__imp__sub_83C37B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37B48"))) PPC_WEAK_FUNC(sub_83C37B48);
PPC_FUNC_IMPL(__imp__sub_83C37B48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20968
	ctx.r7.s64 = ctx.r8.s64 + 20968;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20968);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20968(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20968, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C37B70"))) PPC_WEAK_FUNC(sub_83C37B70);
PPC_FUNC_IMPL(__imp__sub_83C37B70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-24084
	ctx.r6.s64 = ctx.r7.s64 + -24084;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24156(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24156);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20968(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20968);
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
	// std r9,-24084(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24084, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C37BB8"))) PPC_WEAK_FUNC(sub_83C37BB8);
PPC_FUNC_IMPL(__imp__sub_83C37BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25280
	ctx.r3.s64 = ctx.r11.s64 + 25280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37BC4"))) PPC_WEAK_FUNC(sub_83C37BC4);
PPC_FUNC_IMPL(__imp__sub_83C37BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37BC8"))) PPC_WEAK_FUNC(sub_83C37BC8);
PPC_FUNC_IMPL(__imp__sub_83C37BC8) {
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
	// addi r3,r11,20976
	ctx.r3.s64 = ctx.r11.s64 + 20976;
	// bl 0x8259af80
	ctx.lr = 0x83C37BE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,25296
	ctx.r3.s64 = ctx.r10.s64 + 25296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C37BEC;
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

__attribute__((alias("__imp__sub_83C37BFC"))) PPC_WEAK_FUNC(sub_83C37BFC);
PPC_FUNC_IMPL(__imp__sub_83C37BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37C00"))) PPC_WEAK_FUNC(sub_83C37C00);
PPC_FUNC_IMPL(__imp__sub_83C37C00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20956
	ctx.r11.s64 = ctx.r8.s64 + 20956;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-24108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24108);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25288
	ctx.r3.s64 = ctx.r6.s64 + 25288;
	// stw r10,20956(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20956, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37C30"))) PPC_WEAK_FUNC(sub_83C37C30);
PPC_FUNC_IMPL(__imp__sub_83C37C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25304
	ctx.r3.s64 = ctx.r11.s64 + 25304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37C3C"))) PPC_WEAK_FUNC(sub_83C37C3C);
PPC_FUNC_IMPL(__imp__sub_83C37C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37C40"))) PPC_WEAK_FUNC(sub_83C37C40);
PPC_FUNC_IMPL(__imp__sub_83C37C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25312
	ctx.r3.s64 = ctx.r11.s64 + 25312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37C4C"))) PPC_WEAK_FUNC(sub_83C37C4C);
PPC_FUNC_IMPL(__imp__sub_83C37C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37C50"))) PPC_WEAK_FUNC(sub_83C37C50);
PPC_FUNC_IMPL(__imp__sub_83C37C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25320
	ctx.r3.s64 = ctx.r11.s64 + 25320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37C5C"))) PPC_WEAK_FUNC(sub_83C37C5C);
PPC_FUNC_IMPL(__imp__sub_83C37C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37C60"))) PPC_WEAK_FUNC(sub_83C37C60);
PPC_FUNC_IMPL(__imp__sub_83C37C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25328
	ctx.r3.s64 = ctx.r11.s64 + 25328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37C6C"))) PPC_WEAK_FUNC(sub_83C37C6C);
PPC_FUNC_IMPL(__imp__sub_83C37C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37C70"))) PPC_WEAK_FUNC(sub_83C37C70);
PPC_FUNC_IMPL(__imp__sub_83C37C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25336
	ctx.r3.s64 = ctx.r11.s64 + 25336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37C7C"))) PPC_WEAK_FUNC(sub_83C37C7C);
PPC_FUNC_IMPL(__imp__sub_83C37C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37C80"))) PPC_WEAK_FUNC(sub_83C37C80);
PPC_FUNC_IMPL(__imp__sub_83C37C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25344
	ctx.r3.s64 = ctx.r11.s64 + 25344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37C8C"))) PPC_WEAK_FUNC(sub_83C37C8C);
PPC_FUNC_IMPL(__imp__sub_83C37C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37C90"))) PPC_WEAK_FUNC(sub_83C37C90);
PPC_FUNC_IMPL(__imp__sub_83C37C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25352
	ctx.r3.s64 = ctx.r11.s64 + 25352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37C9C"))) PPC_WEAK_FUNC(sub_83C37C9C);
PPC_FUNC_IMPL(__imp__sub_83C37C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37CA0"))) PPC_WEAK_FUNC(sub_83C37CA0);
PPC_FUNC_IMPL(__imp__sub_83C37CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25360
	ctx.r3.s64 = ctx.r11.s64 + 25360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37CAC"))) PPC_WEAK_FUNC(sub_83C37CAC);
PPC_FUNC_IMPL(__imp__sub_83C37CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37CB0"))) PPC_WEAK_FUNC(sub_83C37CB0);
PPC_FUNC_IMPL(__imp__sub_83C37CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25368
	ctx.r3.s64 = ctx.r11.s64 + 25368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37CBC"))) PPC_WEAK_FUNC(sub_83C37CBC);
PPC_FUNC_IMPL(__imp__sub_83C37CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37CC0"))) PPC_WEAK_FUNC(sub_83C37CC0);
PPC_FUNC_IMPL(__imp__sub_83C37CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25376
	ctx.r3.s64 = ctx.r11.s64 + 25376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37CCC"))) PPC_WEAK_FUNC(sub_83C37CCC);
PPC_FUNC_IMPL(__imp__sub_83C37CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37CD0"))) PPC_WEAK_FUNC(sub_83C37CD0);
PPC_FUNC_IMPL(__imp__sub_83C37CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25384
	ctx.r3.s64 = ctx.r11.s64 + 25384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37CDC"))) PPC_WEAK_FUNC(sub_83C37CDC);
PPC_FUNC_IMPL(__imp__sub_83C37CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37CE0"))) PPC_WEAK_FUNC(sub_83C37CE0);
PPC_FUNC_IMPL(__imp__sub_83C37CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25392
	ctx.r3.s64 = ctx.r11.s64 + 25392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37CEC"))) PPC_WEAK_FUNC(sub_83C37CEC);
PPC_FUNC_IMPL(__imp__sub_83C37CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37CF0"))) PPC_WEAK_FUNC(sub_83C37CF0);
PPC_FUNC_IMPL(__imp__sub_83C37CF0) {
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
	// addi r3,r11,21320
	ctx.r3.s64 = ctx.r11.s64 + 21320;
	// bl 0x83523120
	ctx.lr = 0x83C37D08;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,25400
	ctx.r3.s64 = ctx.r10.s64 + 25400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C37D14;
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

__attribute__((alias("__imp__sub_83C37D24"))) PPC_WEAK_FUNC(sub_83C37D24);
PPC_FUNC_IMPL(__imp__sub_83C37D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37D28"))) PPC_WEAK_FUNC(sub_83C37D28);
PPC_FUNC_IMPL(__imp__sub_83C37D28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21336
	ctx.r7.s64 = ctx.r8.s64 + 21336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21336);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21336, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C37D50"))) PPC_WEAK_FUNC(sub_83C37D50);
PPC_FUNC_IMPL(__imp__sub_83C37D50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-23932
	ctx.r6.s64 = ctx.r7.s64 + -23932;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24004(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24004);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21336(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21336);
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
	// std r9,-23932(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23932, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C37D98"))) PPC_WEAK_FUNC(sub_83C37D98);
PPC_FUNC_IMPL(__imp__sub_83C37D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25416
	ctx.r3.s64 = ctx.r11.s64 + 25416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37DA4"))) PPC_WEAK_FUNC(sub_83C37DA4);
PPC_FUNC_IMPL(__imp__sub_83C37DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37DA8"))) PPC_WEAK_FUNC(sub_83C37DA8);
PPC_FUNC_IMPL(__imp__sub_83C37DA8) {
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
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// bl 0x8259af80
	ctx.lr = 0x83C37DC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,25432
	ctx.r3.s64 = ctx.r10.s64 + 25432;
	// bl 0x831cdcc8
	ctx.lr = 0x83C37DCC;
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

__attribute__((alias("__imp__sub_83C37DDC"))) PPC_WEAK_FUNC(sub_83C37DDC);
PPC_FUNC_IMPL(__imp__sub_83C37DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37DE0"))) PPC_WEAK_FUNC(sub_83C37DE0);
PPC_FUNC_IMPL(__imp__sub_83C37DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21324
	ctx.r11.s64 = ctx.r8.s64 + 21324;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-23956(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23956);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25424
	ctx.r3.s64 = ctx.r6.s64 + 25424;
	// stw r10,21324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21324, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37E10"))) PPC_WEAK_FUNC(sub_83C37E10);
PPC_FUNC_IMPL(__imp__sub_83C37E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25440
	ctx.r3.s64 = ctx.r11.s64 + 25440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37E1C"))) PPC_WEAK_FUNC(sub_83C37E1C);
PPC_FUNC_IMPL(__imp__sub_83C37E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37E20"))) PPC_WEAK_FUNC(sub_83C37E20);
PPC_FUNC_IMPL(__imp__sub_83C37E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25448
	ctx.r3.s64 = ctx.r11.s64 + 25448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37E2C"))) PPC_WEAK_FUNC(sub_83C37E2C);
PPC_FUNC_IMPL(__imp__sub_83C37E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37E30"))) PPC_WEAK_FUNC(sub_83C37E30);
PPC_FUNC_IMPL(__imp__sub_83C37E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25456
	ctx.r3.s64 = ctx.r11.s64 + 25456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37E3C"))) PPC_WEAK_FUNC(sub_83C37E3C);
PPC_FUNC_IMPL(__imp__sub_83C37E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37E40"))) PPC_WEAK_FUNC(sub_83C37E40);
PPC_FUNC_IMPL(__imp__sub_83C37E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25464
	ctx.r3.s64 = ctx.r11.s64 + 25464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37E4C"))) PPC_WEAK_FUNC(sub_83C37E4C);
PPC_FUNC_IMPL(__imp__sub_83C37E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37E50"))) PPC_WEAK_FUNC(sub_83C37E50);
PPC_FUNC_IMPL(__imp__sub_83C37E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25472
	ctx.r3.s64 = ctx.r11.s64 + 25472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37E5C"))) PPC_WEAK_FUNC(sub_83C37E5C);
PPC_FUNC_IMPL(__imp__sub_83C37E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37E60"))) PPC_WEAK_FUNC(sub_83C37E60);
PPC_FUNC_IMPL(__imp__sub_83C37E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25480
	ctx.r3.s64 = ctx.r11.s64 + 25480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37E6C"))) PPC_WEAK_FUNC(sub_83C37E6C);
PPC_FUNC_IMPL(__imp__sub_83C37E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37E70"))) PPC_WEAK_FUNC(sub_83C37E70);
PPC_FUNC_IMPL(__imp__sub_83C37E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25488
	ctx.r3.s64 = ctx.r11.s64 + 25488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37E7C"))) PPC_WEAK_FUNC(sub_83C37E7C);
PPC_FUNC_IMPL(__imp__sub_83C37E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37E80"))) PPC_WEAK_FUNC(sub_83C37E80);
PPC_FUNC_IMPL(__imp__sub_83C37E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25496
	ctx.r3.s64 = ctx.r11.s64 + 25496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37E8C"))) PPC_WEAK_FUNC(sub_83C37E8C);
PPC_FUNC_IMPL(__imp__sub_83C37E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37E90"))) PPC_WEAK_FUNC(sub_83C37E90);
PPC_FUNC_IMPL(__imp__sub_83C37E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25504
	ctx.r3.s64 = ctx.r11.s64 + 25504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37E9C"))) PPC_WEAK_FUNC(sub_83C37E9C);
PPC_FUNC_IMPL(__imp__sub_83C37E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37EA0"))) PPC_WEAK_FUNC(sub_83C37EA0);
PPC_FUNC_IMPL(__imp__sub_83C37EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25512
	ctx.r3.s64 = ctx.r11.s64 + 25512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37EAC"))) PPC_WEAK_FUNC(sub_83C37EAC);
PPC_FUNC_IMPL(__imp__sub_83C37EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37EB0"))) PPC_WEAK_FUNC(sub_83C37EB0);
PPC_FUNC_IMPL(__imp__sub_83C37EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25520
	ctx.r3.s64 = ctx.r11.s64 + 25520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37EBC"))) PPC_WEAK_FUNC(sub_83C37EBC);
PPC_FUNC_IMPL(__imp__sub_83C37EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37EC0"))) PPC_WEAK_FUNC(sub_83C37EC0);
PPC_FUNC_IMPL(__imp__sub_83C37EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25528
	ctx.r3.s64 = ctx.r11.s64 + 25528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37ECC"))) PPC_WEAK_FUNC(sub_83C37ECC);
PPC_FUNC_IMPL(__imp__sub_83C37ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37ED0"))) PPC_WEAK_FUNC(sub_83C37ED0);
PPC_FUNC_IMPL(__imp__sub_83C37ED0) {
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
	// addi r3,r11,21688
	ctx.r3.s64 = ctx.r11.s64 + 21688;
	// bl 0x83523120
	ctx.lr = 0x83C37EE8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,25536
	ctx.r3.s64 = ctx.r10.s64 + 25536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C37EF4;
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

__attribute__((alias("__imp__sub_83C37F04"))) PPC_WEAK_FUNC(sub_83C37F04);
PPC_FUNC_IMPL(__imp__sub_83C37F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37F08"))) PPC_WEAK_FUNC(sub_83C37F08);
PPC_FUNC_IMPL(__imp__sub_83C37F08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21704
	ctx.r7.s64 = ctx.r8.s64 + 21704;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21704(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21704);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21704(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21704, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C37F30"))) PPC_WEAK_FUNC(sub_83C37F30);
PPC_FUNC_IMPL(__imp__sub_83C37F30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-23752
	ctx.r6.s64 = ctx.r7.s64 + -23752;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23824(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23824);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21704(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21704);
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
	// std r9,-23752(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23752, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

