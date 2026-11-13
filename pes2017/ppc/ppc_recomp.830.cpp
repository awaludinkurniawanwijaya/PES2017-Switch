#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C72134"))) PPC_WEAK_FUNC(sub_83C72134);
PPC_FUNC_IMPL(__imp__sub_83C72134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72138"))) PPC_WEAK_FUNC(sub_83C72138);
PPC_FUNC_IMPL(__imp__sub_83C72138) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,3236
	ctx.r4.s64 = ctx.r11.s64 + 3236;
	// addi r3,r10,-16748
	ctx.r3.s64 = ctx.r10.s64 + -16748;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C7215C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-31648
	ctx.r3.s64 = ctx.r9.s64 + -31648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C72168;
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

__attribute__((alias("__imp__sub_83C72178"))) PPC_WEAK_FUNC(sub_83C72178);
PPC_FUNC_IMPL(__imp__sub_83C72178) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10952
	ctx.r7.s64 = ctx.r8.s64 + -10952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10952);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10952(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10952, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C721A0"))) PPC_WEAK_FUNC(sub_83C721A0);
PPC_FUNC_IMPL(__imp__sub_83C721A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-16720
	ctx.r6.s64 = ctx.r7.s64 + -16720;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16820(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16820);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10952(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10952);
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
	// std r9,-16720(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16720, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C721E8"))) PPC_WEAK_FUNC(sub_83C721E8);
PPC_FUNC_IMPL(__imp__sub_83C721E8) {
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
	// addi r3,r11,-10968
	ctx.r3.s64 = ctx.r11.s64 + -10968;
	// bl 0x83523120
	ctx.lr = 0x83C72200;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-31688
	ctx.r3.s64 = ctx.r10.s64 + -31688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7220C;
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

__attribute__((alias("__imp__sub_83C7221C"))) PPC_WEAK_FUNC(sub_83C7221C);
PPC_FUNC_IMPL(__imp__sub_83C7221C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72220"))) PPC_WEAK_FUNC(sub_83C72220);
PPC_FUNC_IMPL(__imp__sub_83C72220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31672
	ctx.r3.s64 = ctx.r11.s64 + -31672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7222C"))) PPC_WEAK_FUNC(sub_83C7222C);
PPC_FUNC_IMPL(__imp__sub_83C7222C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72230"))) PPC_WEAK_FUNC(sub_83C72230);
PPC_FUNC_IMPL(__imp__sub_83C72230) {
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
	// addi r3,r11,-10944
	ctx.r3.s64 = ctx.r11.s64 + -10944;
	// bl 0x8259af80
	ctx.lr = 0x83C72248;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-31656
	ctx.r3.s64 = ctx.r10.s64 + -31656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C72254;
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

__attribute__((alias("__imp__sub_83C72264"))) PPC_WEAK_FUNC(sub_83C72264);
PPC_FUNC_IMPL(__imp__sub_83C72264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72268"))) PPC_WEAK_FUNC(sub_83C72268);
PPC_FUNC_IMPL(__imp__sub_83C72268) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10964
	ctx.r11.s64 = ctx.r8.s64 + -10964;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-16772(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16772);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-31664
	ctx.r3.s64 = ctx.r6.s64 + -31664;
	// stw r10,-10964(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10964, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72298"))) PPC_WEAK_FUNC(sub_83C72298);
PPC_FUNC_IMPL(__imp__sub_83C72298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31544
	ctx.r3.s64 = ctx.r11.s64 + -31544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C722A4"))) PPC_WEAK_FUNC(sub_83C722A4);
PPC_FUNC_IMPL(__imp__sub_83C722A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C722A8"))) PPC_WEAK_FUNC(sub_83C722A8);
PPC_FUNC_IMPL(__imp__sub_83C722A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31536
	ctx.r3.s64 = ctx.r11.s64 + -31536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C722B4"))) PPC_WEAK_FUNC(sub_83C722B4);
PPC_FUNC_IMPL(__imp__sub_83C722B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C722B8"))) PPC_WEAK_FUNC(sub_83C722B8);
PPC_FUNC_IMPL(__imp__sub_83C722B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31528
	ctx.r3.s64 = ctx.r11.s64 + -31528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C722C4"))) PPC_WEAK_FUNC(sub_83C722C4);
PPC_FUNC_IMPL(__imp__sub_83C722C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C722C8"))) PPC_WEAK_FUNC(sub_83C722C8);
PPC_FUNC_IMPL(__imp__sub_83C722C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31520
	ctx.r3.s64 = ctx.r11.s64 + -31520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C722D4"))) PPC_WEAK_FUNC(sub_83C722D4);
PPC_FUNC_IMPL(__imp__sub_83C722D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C722D8"))) PPC_WEAK_FUNC(sub_83C722D8);
PPC_FUNC_IMPL(__imp__sub_83C722D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31512
	ctx.r3.s64 = ctx.r11.s64 + -31512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C722E4"))) PPC_WEAK_FUNC(sub_83C722E4);
PPC_FUNC_IMPL(__imp__sub_83C722E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C722E8"))) PPC_WEAK_FUNC(sub_83C722E8);
PPC_FUNC_IMPL(__imp__sub_83C722E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31504
	ctx.r3.s64 = ctx.r11.s64 + -31504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C722F4"))) PPC_WEAK_FUNC(sub_83C722F4);
PPC_FUNC_IMPL(__imp__sub_83C722F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C722F8"))) PPC_WEAK_FUNC(sub_83C722F8);
PPC_FUNC_IMPL(__imp__sub_83C722F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31496
	ctx.r3.s64 = ctx.r11.s64 + -31496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72304"))) PPC_WEAK_FUNC(sub_83C72304);
PPC_FUNC_IMPL(__imp__sub_83C72304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72308"))) PPC_WEAK_FUNC(sub_83C72308);
PPC_FUNC_IMPL(__imp__sub_83C72308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31488
	ctx.r3.s64 = ctx.r11.s64 + -31488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72314"))) PPC_WEAK_FUNC(sub_83C72314);
PPC_FUNC_IMPL(__imp__sub_83C72314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72318"))) PPC_WEAK_FUNC(sub_83C72318);
PPC_FUNC_IMPL(__imp__sub_83C72318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31480
	ctx.r3.s64 = ctx.r11.s64 + -31480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72324"))) PPC_WEAK_FUNC(sub_83C72324);
PPC_FUNC_IMPL(__imp__sub_83C72324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72328"))) PPC_WEAK_FUNC(sub_83C72328);
PPC_FUNC_IMPL(__imp__sub_83C72328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31472
	ctx.r3.s64 = ctx.r11.s64 + -31472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72334"))) PPC_WEAK_FUNC(sub_83C72334);
PPC_FUNC_IMPL(__imp__sub_83C72334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72338"))) PPC_WEAK_FUNC(sub_83C72338);
PPC_FUNC_IMPL(__imp__sub_83C72338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31464
	ctx.r3.s64 = ctx.r11.s64 + -31464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72344"))) PPC_WEAK_FUNC(sub_83C72344);
PPC_FUNC_IMPL(__imp__sub_83C72344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72348"))) PPC_WEAK_FUNC(sub_83C72348);
PPC_FUNC_IMPL(__imp__sub_83C72348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31456
	ctx.r3.s64 = ctx.r11.s64 + -31456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72354"))) PPC_WEAK_FUNC(sub_83C72354);
PPC_FUNC_IMPL(__imp__sub_83C72354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72358"))) PPC_WEAK_FUNC(sub_83C72358);
PPC_FUNC_IMPL(__imp__sub_83C72358) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,4484
	ctx.r4.s64 = ctx.r11.s64 + 4484;
	// addi r3,r10,-16592
	ctx.r3.s64 = ctx.r10.s64 + -16592;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C7237C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-31408
	ctx.r3.s64 = ctx.r9.s64 + -31408;
	// bl 0x831cdcc8
	ctx.lr = 0x83C72388;
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

__attribute__((alias("__imp__sub_83C72398"))) PPC_WEAK_FUNC(sub_83C72398);
PPC_FUNC_IMPL(__imp__sub_83C72398) {
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
	// addi r3,r11,-10600
	ctx.r3.s64 = ctx.r11.s64 + -10600;
	// bl 0x83523120
	ctx.lr = 0x83C723B0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-31448
	ctx.r3.s64 = ctx.r10.s64 + -31448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C723BC;
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

__attribute__((alias("__imp__sub_83C723CC"))) PPC_WEAK_FUNC(sub_83C723CC);
PPC_FUNC_IMPL(__imp__sub_83C723CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C723D0"))) PPC_WEAK_FUNC(sub_83C723D0);
PPC_FUNC_IMPL(__imp__sub_83C723D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10584
	ctx.r7.s64 = ctx.r8.s64 + -10584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10584(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C723F8"))) PPC_WEAK_FUNC(sub_83C723F8);
PPC_FUNC_IMPL(__imp__sub_83C723F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-16564
	ctx.r6.s64 = ctx.r7.s64 + -16564;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16664(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16664);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10584(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10584);
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
	// std r9,-16564(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16564, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C72440"))) PPC_WEAK_FUNC(sub_83C72440);
PPC_FUNC_IMPL(__imp__sub_83C72440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31432
	ctx.r3.s64 = ctx.r11.s64 + -31432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7244C"))) PPC_WEAK_FUNC(sub_83C7244C);
PPC_FUNC_IMPL(__imp__sub_83C7244C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72450"))) PPC_WEAK_FUNC(sub_83C72450);
PPC_FUNC_IMPL(__imp__sub_83C72450) {
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
	// addi r3,r11,-10576
	ctx.r3.s64 = ctx.r11.s64 + -10576;
	// bl 0x8259af80
	ctx.lr = 0x83C72468;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-31416
	ctx.r3.s64 = ctx.r10.s64 + -31416;
	// bl 0x831cdcc8
	ctx.lr = 0x83C72474;
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

__attribute__((alias("__imp__sub_83C72484"))) PPC_WEAK_FUNC(sub_83C72484);
PPC_FUNC_IMPL(__imp__sub_83C72484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72488"))) PPC_WEAK_FUNC(sub_83C72488);
PPC_FUNC_IMPL(__imp__sub_83C72488) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10596
	ctx.r11.s64 = ctx.r8.s64 + -10596;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-16616(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16616);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-31424
	ctx.r3.s64 = ctx.r6.s64 + -31424;
	// stw r10,-10596(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10596, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C724B8"))) PPC_WEAK_FUNC(sub_83C724B8);
PPC_FUNC_IMPL(__imp__sub_83C724B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31304
	ctx.r3.s64 = ctx.r11.s64 + -31304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C724C4"))) PPC_WEAK_FUNC(sub_83C724C4);
PPC_FUNC_IMPL(__imp__sub_83C724C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C724C8"))) PPC_WEAK_FUNC(sub_83C724C8);
PPC_FUNC_IMPL(__imp__sub_83C724C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31296
	ctx.r3.s64 = ctx.r11.s64 + -31296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C724D4"))) PPC_WEAK_FUNC(sub_83C724D4);
PPC_FUNC_IMPL(__imp__sub_83C724D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C724D8"))) PPC_WEAK_FUNC(sub_83C724D8);
PPC_FUNC_IMPL(__imp__sub_83C724D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31288
	ctx.r3.s64 = ctx.r11.s64 + -31288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C724E4"))) PPC_WEAK_FUNC(sub_83C724E4);
PPC_FUNC_IMPL(__imp__sub_83C724E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C724E8"))) PPC_WEAK_FUNC(sub_83C724E8);
PPC_FUNC_IMPL(__imp__sub_83C724E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31280
	ctx.r3.s64 = ctx.r11.s64 + -31280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C724F4"))) PPC_WEAK_FUNC(sub_83C724F4);
PPC_FUNC_IMPL(__imp__sub_83C724F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C724F8"))) PPC_WEAK_FUNC(sub_83C724F8);
PPC_FUNC_IMPL(__imp__sub_83C724F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31272
	ctx.r3.s64 = ctx.r11.s64 + -31272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72504"))) PPC_WEAK_FUNC(sub_83C72504);
PPC_FUNC_IMPL(__imp__sub_83C72504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72508"))) PPC_WEAK_FUNC(sub_83C72508);
PPC_FUNC_IMPL(__imp__sub_83C72508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31264
	ctx.r3.s64 = ctx.r11.s64 + -31264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72514"))) PPC_WEAK_FUNC(sub_83C72514);
PPC_FUNC_IMPL(__imp__sub_83C72514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72518"))) PPC_WEAK_FUNC(sub_83C72518);
PPC_FUNC_IMPL(__imp__sub_83C72518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31256
	ctx.r3.s64 = ctx.r11.s64 + -31256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72524"))) PPC_WEAK_FUNC(sub_83C72524);
PPC_FUNC_IMPL(__imp__sub_83C72524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72528"))) PPC_WEAK_FUNC(sub_83C72528);
PPC_FUNC_IMPL(__imp__sub_83C72528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31248
	ctx.r3.s64 = ctx.r11.s64 + -31248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72534"))) PPC_WEAK_FUNC(sub_83C72534);
PPC_FUNC_IMPL(__imp__sub_83C72534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72538"))) PPC_WEAK_FUNC(sub_83C72538);
PPC_FUNC_IMPL(__imp__sub_83C72538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31240
	ctx.r3.s64 = ctx.r11.s64 + -31240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72544"))) PPC_WEAK_FUNC(sub_83C72544);
PPC_FUNC_IMPL(__imp__sub_83C72544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72548"))) PPC_WEAK_FUNC(sub_83C72548);
PPC_FUNC_IMPL(__imp__sub_83C72548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31232
	ctx.r3.s64 = ctx.r11.s64 + -31232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72554"))) PPC_WEAK_FUNC(sub_83C72554);
PPC_FUNC_IMPL(__imp__sub_83C72554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72558"))) PPC_WEAK_FUNC(sub_83C72558);
PPC_FUNC_IMPL(__imp__sub_83C72558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31224
	ctx.r3.s64 = ctx.r11.s64 + -31224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72564"))) PPC_WEAK_FUNC(sub_83C72564);
PPC_FUNC_IMPL(__imp__sub_83C72564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72568"))) PPC_WEAK_FUNC(sub_83C72568);
PPC_FUNC_IMPL(__imp__sub_83C72568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31216
	ctx.r3.s64 = ctx.r11.s64 + -31216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72574"))) PPC_WEAK_FUNC(sub_83C72574);
PPC_FUNC_IMPL(__imp__sub_83C72574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72578"))) PPC_WEAK_FUNC(sub_83C72578);
PPC_FUNC_IMPL(__imp__sub_83C72578) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,5148
	ctx.r4.s64 = ctx.r11.s64 + 5148;
	// addi r3,r10,-16436
	ctx.r3.s64 = ctx.r10.s64 + -16436;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C7259C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-31168
	ctx.r3.s64 = ctx.r9.s64 + -31168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C725A8;
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

__attribute__((alias("__imp__sub_83C725B8"))) PPC_WEAK_FUNC(sub_83C725B8);
PPC_FUNC_IMPL(__imp__sub_83C725B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10216
	ctx.r7.s64 = ctx.r8.s64 + -10216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10216(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C725E0"))) PPC_WEAK_FUNC(sub_83C725E0);
PPC_FUNC_IMPL(__imp__sub_83C725E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-16408
	ctx.r6.s64 = ctx.r7.s64 + -16408;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16508(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16508);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10216);
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
	// std r9,-16408(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16408, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C72628"))) PPC_WEAK_FUNC(sub_83C72628);
PPC_FUNC_IMPL(__imp__sub_83C72628) {
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
	// addi r3,r11,-10232
	ctx.r3.s64 = ctx.r11.s64 + -10232;
	// bl 0x83523120
	ctx.lr = 0x83C72640;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-31208
	ctx.r3.s64 = ctx.r10.s64 + -31208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7264C;
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

__attribute__((alias("__imp__sub_83C7265C"))) PPC_WEAK_FUNC(sub_83C7265C);
PPC_FUNC_IMPL(__imp__sub_83C7265C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72660"))) PPC_WEAK_FUNC(sub_83C72660);
PPC_FUNC_IMPL(__imp__sub_83C72660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31192
	ctx.r3.s64 = ctx.r11.s64 + -31192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7266C"))) PPC_WEAK_FUNC(sub_83C7266C);
PPC_FUNC_IMPL(__imp__sub_83C7266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72670"))) PPC_WEAK_FUNC(sub_83C72670);
PPC_FUNC_IMPL(__imp__sub_83C72670) {
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
	// addi r3,r11,-10208
	ctx.r3.s64 = ctx.r11.s64 + -10208;
	// bl 0x8259af80
	ctx.lr = 0x83C72688;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-31176
	ctx.r3.s64 = ctx.r10.s64 + -31176;
	// bl 0x831cdcc8
	ctx.lr = 0x83C72694;
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

__attribute__((alias("__imp__sub_83C726A4"))) PPC_WEAK_FUNC(sub_83C726A4);
PPC_FUNC_IMPL(__imp__sub_83C726A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C726A8"))) PPC_WEAK_FUNC(sub_83C726A8);
PPC_FUNC_IMPL(__imp__sub_83C726A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10228
	ctx.r11.s64 = ctx.r8.s64 + -10228;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-16460(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16460);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-31184
	ctx.r3.s64 = ctx.r6.s64 + -31184;
	// stw r10,-10228(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10228, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C726D8"))) PPC_WEAK_FUNC(sub_83C726D8);
PPC_FUNC_IMPL(__imp__sub_83C726D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31064
	ctx.r3.s64 = ctx.r11.s64 + -31064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C726E4"))) PPC_WEAK_FUNC(sub_83C726E4);
PPC_FUNC_IMPL(__imp__sub_83C726E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C726E8"))) PPC_WEAK_FUNC(sub_83C726E8);
PPC_FUNC_IMPL(__imp__sub_83C726E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31056
	ctx.r3.s64 = ctx.r11.s64 + -31056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C726F4"))) PPC_WEAK_FUNC(sub_83C726F4);
PPC_FUNC_IMPL(__imp__sub_83C726F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C726F8"))) PPC_WEAK_FUNC(sub_83C726F8);
PPC_FUNC_IMPL(__imp__sub_83C726F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31048
	ctx.r3.s64 = ctx.r11.s64 + -31048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72704"))) PPC_WEAK_FUNC(sub_83C72704);
PPC_FUNC_IMPL(__imp__sub_83C72704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72708"))) PPC_WEAK_FUNC(sub_83C72708);
PPC_FUNC_IMPL(__imp__sub_83C72708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31040
	ctx.r3.s64 = ctx.r11.s64 + -31040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72714"))) PPC_WEAK_FUNC(sub_83C72714);
PPC_FUNC_IMPL(__imp__sub_83C72714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72718"))) PPC_WEAK_FUNC(sub_83C72718);
PPC_FUNC_IMPL(__imp__sub_83C72718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31032
	ctx.r3.s64 = ctx.r11.s64 + -31032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72724"))) PPC_WEAK_FUNC(sub_83C72724);
PPC_FUNC_IMPL(__imp__sub_83C72724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72728"))) PPC_WEAK_FUNC(sub_83C72728);
PPC_FUNC_IMPL(__imp__sub_83C72728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31024
	ctx.r3.s64 = ctx.r11.s64 + -31024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72734"))) PPC_WEAK_FUNC(sub_83C72734);
PPC_FUNC_IMPL(__imp__sub_83C72734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72738"))) PPC_WEAK_FUNC(sub_83C72738);
PPC_FUNC_IMPL(__imp__sub_83C72738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31016
	ctx.r3.s64 = ctx.r11.s64 + -31016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72744"))) PPC_WEAK_FUNC(sub_83C72744);
PPC_FUNC_IMPL(__imp__sub_83C72744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72748"))) PPC_WEAK_FUNC(sub_83C72748);
PPC_FUNC_IMPL(__imp__sub_83C72748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31008
	ctx.r3.s64 = ctx.r11.s64 + -31008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72754"))) PPC_WEAK_FUNC(sub_83C72754);
PPC_FUNC_IMPL(__imp__sub_83C72754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72758"))) PPC_WEAK_FUNC(sub_83C72758);
PPC_FUNC_IMPL(__imp__sub_83C72758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-31000
	ctx.r3.s64 = ctx.r11.s64 + -31000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72764"))) PPC_WEAK_FUNC(sub_83C72764);
PPC_FUNC_IMPL(__imp__sub_83C72764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72768"))) PPC_WEAK_FUNC(sub_83C72768);
PPC_FUNC_IMPL(__imp__sub_83C72768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30992
	ctx.r3.s64 = ctx.r11.s64 + -30992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72774"))) PPC_WEAK_FUNC(sub_83C72774);
PPC_FUNC_IMPL(__imp__sub_83C72774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72778"))) PPC_WEAK_FUNC(sub_83C72778);
PPC_FUNC_IMPL(__imp__sub_83C72778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30984
	ctx.r3.s64 = ctx.r11.s64 + -30984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72784"))) PPC_WEAK_FUNC(sub_83C72784);
PPC_FUNC_IMPL(__imp__sub_83C72784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72788"))) PPC_WEAK_FUNC(sub_83C72788);
PPC_FUNC_IMPL(__imp__sub_83C72788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30976
	ctx.r3.s64 = ctx.r11.s64 + -30976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72794"))) PPC_WEAK_FUNC(sub_83C72794);
PPC_FUNC_IMPL(__imp__sub_83C72794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72798"))) PPC_WEAK_FUNC(sub_83C72798);
PPC_FUNC_IMPL(__imp__sub_83C72798) {
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
	// addi r3,r11,-9864
	ctx.r3.s64 = ctx.r11.s64 + -9864;
	// bl 0x83523120
	ctx.lr = 0x83C727B0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-30968
	ctx.r3.s64 = ctx.r10.s64 + -30968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C727BC;
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

__attribute__((alias("__imp__sub_83C727CC"))) PPC_WEAK_FUNC(sub_83C727CC);
PPC_FUNC_IMPL(__imp__sub_83C727CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C727D0"))) PPC_WEAK_FUNC(sub_83C727D0);
PPC_FUNC_IMPL(__imp__sub_83C727D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9848
	ctx.r7.s64 = ctx.r8.s64 + -9848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9848);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9848(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9848, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C727F8"))) PPC_WEAK_FUNC(sub_83C727F8);
PPC_FUNC_IMPL(__imp__sub_83C727F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-16268
	ctx.r6.s64 = ctx.r7.s64 + -16268;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16340(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16340);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9848);
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
	// std r9,-16268(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16268, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C72840"))) PPC_WEAK_FUNC(sub_83C72840);
PPC_FUNC_IMPL(__imp__sub_83C72840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30952
	ctx.r3.s64 = ctx.r11.s64 + -30952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7284C"))) PPC_WEAK_FUNC(sub_83C7284C);
PPC_FUNC_IMPL(__imp__sub_83C7284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72850"))) PPC_WEAK_FUNC(sub_83C72850);
PPC_FUNC_IMPL(__imp__sub_83C72850) {
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
	// addi r3,r11,-9840
	ctx.r3.s64 = ctx.r11.s64 + -9840;
	// bl 0x8259af80
	ctx.lr = 0x83C72868;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-30936
	ctx.r3.s64 = ctx.r10.s64 + -30936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C72874;
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

__attribute__((alias("__imp__sub_83C72884"))) PPC_WEAK_FUNC(sub_83C72884);
PPC_FUNC_IMPL(__imp__sub_83C72884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72888"))) PPC_WEAK_FUNC(sub_83C72888);
PPC_FUNC_IMPL(__imp__sub_83C72888) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9860
	ctx.r11.s64 = ctx.r8.s64 + -9860;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-16292(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16292);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30944
	ctx.r3.s64 = ctx.r6.s64 + -30944;
	// stw r10,-9860(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9860, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C728B8"))) PPC_WEAK_FUNC(sub_83C728B8);
PPC_FUNC_IMPL(__imp__sub_83C728B8) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,6500
	ctx.r4.s64 = ctx.r11.s64 + 6500;
	// addi r3,r10,-16244
	ctx.r3.s64 = ctx.r10.s64 + -16244;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C728DC;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-30928
	ctx.r3.s64 = ctx.r9.s64 + -30928;
	// bl 0x831cdcc8
	ctx.lr = 0x83C728E8;
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

__attribute__((alias("__imp__sub_83C728F8"))) PPC_WEAK_FUNC(sub_83C728F8);
PPC_FUNC_IMPL(__imp__sub_83C728F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30824
	ctx.r3.s64 = ctx.r11.s64 + -30824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72904"))) PPC_WEAK_FUNC(sub_83C72904);
PPC_FUNC_IMPL(__imp__sub_83C72904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72908"))) PPC_WEAK_FUNC(sub_83C72908);
PPC_FUNC_IMPL(__imp__sub_83C72908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30816
	ctx.r3.s64 = ctx.r11.s64 + -30816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72914"))) PPC_WEAK_FUNC(sub_83C72914);
PPC_FUNC_IMPL(__imp__sub_83C72914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72918"))) PPC_WEAK_FUNC(sub_83C72918);
PPC_FUNC_IMPL(__imp__sub_83C72918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30808
	ctx.r3.s64 = ctx.r11.s64 + -30808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72924"))) PPC_WEAK_FUNC(sub_83C72924);
PPC_FUNC_IMPL(__imp__sub_83C72924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72928"))) PPC_WEAK_FUNC(sub_83C72928);
PPC_FUNC_IMPL(__imp__sub_83C72928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30800
	ctx.r3.s64 = ctx.r11.s64 + -30800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72934"))) PPC_WEAK_FUNC(sub_83C72934);
PPC_FUNC_IMPL(__imp__sub_83C72934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72938"))) PPC_WEAK_FUNC(sub_83C72938);
PPC_FUNC_IMPL(__imp__sub_83C72938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30792
	ctx.r3.s64 = ctx.r11.s64 + -30792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72944"))) PPC_WEAK_FUNC(sub_83C72944);
PPC_FUNC_IMPL(__imp__sub_83C72944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72948"))) PPC_WEAK_FUNC(sub_83C72948);
PPC_FUNC_IMPL(__imp__sub_83C72948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30784
	ctx.r3.s64 = ctx.r11.s64 + -30784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72954"))) PPC_WEAK_FUNC(sub_83C72954);
PPC_FUNC_IMPL(__imp__sub_83C72954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72958"))) PPC_WEAK_FUNC(sub_83C72958);
PPC_FUNC_IMPL(__imp__sub_83C72958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30776
	ctx.r3.s64 = ctx.r11.s64 + -30776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72964"))) PPC_WEAK_FUNC(sub_83C72964);
PPC_FUNC_IMPL(__imp__sub_83C72964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72968"))) PPC_WEAK_FUNC(sub_83C72968);
PPC_FUNC_IMPL(__imp__sub_83C72968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30768
	ctx.r3.s64 = ctx.r11.s64 + -30768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72974"))) PPC_WEAK_FUNC(sub_83C72974);
PPC_FUNC_IMPL(__imp__sub_83C72974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72978"))) PPC_WEAK_FUNC(sub_83C72978);
PPC_FUNC_IMPL(__imp__sub_83C72978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30760
	ctx.r3.s64 = ctx.r11.s64 + -30760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72984"))) PPC_WEAK_FUNC(sub_83C72984);
PPC_FUNC_IMPL(__imp__sub_83C72984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72988"))) PPC_WEAK_FUNC(sub_83C72988);
PPC_FUNC_IMPL(__imp__sub_83C72988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30752
	ctx.r3.s64 = ctx.r11.s64 + -30752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72994"))) PPC_WEAK_FUNC(sub_83C72994);
PPC_FUNC_IMPL(__imp__sub_83C72994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72998"))) PPC_WEAK_FUNC(sub_83C72998);
PPC_FUNC_IMPL(__imp__sub_83C72998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30744
	ctx.r3.s64 = ctx.r11.s64 + -30744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C729A4"))) PPC_WEAK_FUNC(sub_83C729A4);
PPC_FUNC_IMPL(__imp__sub_83C729A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C729A8"))) PPC_WEAK_FUNC(sub_83C729A8);
PPC_FUNC_IMPL(__imp__sub_83C729A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30736
	ctx.r3.s64 = ctx.r11.s64 + -30736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C729B4"))) PPC_WEAK_FUNC(sub_83C729B4);
PPC_FUNC_IMPL(__imp__sub_83C729B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C729B8"))) PPC_WEAK_FUNC(sub_83C729B8);
PPC_FUNC_IMPL(__imp__sub_83C729B8) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,7120
	ctx.r4.s64 = ctx.r11.s64 + 7120;
	// addi r3,r10,-16112
	ctx.r3.s64 = ctx.r10.s64 + -16112;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C729DC;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-30728
	ctx.r3.s64 = ctx.r9.s64 + -30728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C729E8;
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

__attribute__((alias("__imp__sub_83C729F8"))) PPC_WEAK_FUNC(sub_83C729F8);
PPC_FUNC_IMPL(__imp__sub_83C729F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30624
	ctx.r3.s64 = ctx.r11.s64 + -30624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72A04"))) PPC_WEAK_FUNC(sub_83C72A04);
PPC_FUNC_IMPL(__imp__sub_83C72A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72A08"))) PPC_WEAK_FUNC(sub_83C72A08);
PPC_FUNC_IMPL(__imp__sub_83C72A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30616
	ctx.r3.s64 = ctx.r11.s64 + -30616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72A14"))) PPC_WEAK_FUNC(sub_83C72A14);
PPC_FUNC_IMPL(__imp__sub_83C72A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72A18"))) PPC_WEAK_FUNC(sub_83C72A18);
PPC_FUNC_IMPL(__imp__sub_83C72A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30608
	ctx.r3.s64 = ctx.r11.s64 + -30608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72A24"))) PPC_WEAK_FUNC(sub_83C72A24);
PPC_FUNC_IMPL(__imp__sub_83C72A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72A28"))) PPC_WEAK_FUNC(sub_83C72A28);
PPC_FUNC_IMPL(__imp__sub_83C72A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30600
	ctx.r3.s64 = ctx.r11.s64 + -30600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72A34"))) PPC_WEAK_FUNC(sub_83C72A34);
PPC_FUNC_IMPL(__imp__sub_83C72A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72A38"))) PPC_WEAK_FUNC(sub_83C72A38);
PPC_FUNC_IMPL(__imp__sub_83C72A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30592
	ctx.r3.s64 = ctx.r11.s64 + -30592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72A44"))) PPC_WEAK_FUNC(sub_83C72A44);
PPC_FUNC_IMPL(__imp__sub_83C72A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72A48"))) PPC_WEAK_FUNC(sub_83C72A48);
PPC_FUNC_IMPL(__imp__sub_83C72A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30584
	ctx.r3.s64 = ctx.r11.s64 + -30584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72A54"))) PPC_WEAK_FUNC(sub_83C72A54);
PPC_FUNC_IMPL(__imp__sub_83C72A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72A58"))) PPC_WEAK_FUNC(sub_83C72A58);
PPC_FUNC_IMPL(__imp__sub_83C72A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30576
	ctx.r3.s64 = ctx.r11.s64 + -30576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72A64"))) PPC_WEAK_FUNC(sub_83C72A64);
PPC_FUNC_IMPL(__imp__sub_83C72A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72A68"))) PPC_WEAK_FUNC(sub_83C72A68);
PPC_FUNC_IMPL(__imp__sub_83C72A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30568
	ctx.r3.s64 = ctx.r11.s64 + -30568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72A74"))) PPC_WEAK_FUNC(sub_83C72A74);
PPC_FUNC_IMPL(__imp__sub_83C72A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72A78"))) PPC_WEAK_FUNC(sub_83C72A78);
PPC_FUNC_IMPL(__imp__sub_83C72A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30560
	ctx.r3.s64 = ctx.r11.s64 + -30560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72A84"))) PPC_WEAK_FUNC(sub_83C72A84);
PPC_FUNC_IMPL(__imp__sub_83C72A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72A88"))) PPC_WEAK_FUNC(sub_83C72A88);
PPC_FUNC_IMPL(__imp__sub_83C72A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30552
	ctx.r3.s64 = ctx.r11.s64 + -30552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72A94"))) PPC_WEAK_FUNC(sub_83C72A94);
PPC_FUNC_IMPL(__imp__sub_83C72A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72A98"))) PPC_WEAK_FUNC(sub_83C72A98);
PPC_FUNC_IMPL(__imp__sub_83C72A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30544
	ctx.r3.s64 = ctx.r11.s64 + -30544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72AA4"))) PPC_WEAK_FUNC(sub_83C72AA4);
PPC_FUNC_IMPL(__imp__sub_83C72AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72AA8"))) PPC_WEAK_FUNC(sub_83C72AA8);
PPC_FUNC_IMPL(__imp__sub_83C72AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30536
	ctx.r3.s64 = ctx.r11.s64 + -30536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72AB4"))) PPC_WEAK_FUNC(sub_83C72AB4);
PPC_FUNC_IMPL(__imp__sub_83C72AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72AB8"))) PPC_WEAK_FUNC(sub_83C72AB8);
PPC_FUNC_IMPL(__imp__sub_83C72AB8) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,7384
	ctx.r4.s64 = ctx.r11.s64 + 7384;
	// addi r3,r10,-15980
	ctx.r3.s64 = ctx.r10.s64 + -15980;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C72ADC;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-30512
	ctx.r3.s64 = ctx.r9.s64 + -30512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C72AE8;
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

__attribute__((alias("__imp__sub_83C72AF8"))) PPC_WEAK_FUNC(sub_83C72AF8);
PPC_FUNC_IMPL(__imp__sub_83C72AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9488
	ctx.r7.s64 = ctx.r8.s64 + -9488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9488(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9488);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9488(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9488, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C72B20"))) PPC_WEAK_FUNC(sub_83C72B20);
PPC_FUNC_IMPL(__imp__sub_83C72B20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-15952
	ctx.r6.s64 = ctx.r7.s64 + -15952;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16052(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16052);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9488(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9488);
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
	// std r9,-15952(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15952, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C72B68"))) PPC_WEAK_FUNC(sub_83C72B68);
PPC_FUNC_IMPL(__imp__sub_83C72B68) {
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
	// addi r3,r11,-9492
	ctx.r3.s64 = ctx.r11.s64 + -9492;
	// bl 0x83523120
	ctx.lr = 0x83C72B80;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-30528
	ctx.r3.s64 = ctx.r10.s64 + -30528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C72B8C;
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

__attribute__((alias("__imp__sub_83C72B9C"))) PPC_WEAK_FUNC(sub_83C72B9C);
PPC_FUNC_IMPL(__imp__sub_83C72B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72BA0"))) PPC_WEAK_FUNC(sub_83C72BA0);
PPC_FUNC_IMPL(__imp__sub_83C72BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30408
	ctx.r3.s64 = ctx.r11.s64 + -30408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72BAC"))) PPC_WEAK_FUNC(sub_83C72BAC);
PPC_FUNC_IMPL(__imp__sub_83C72BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72BB0"))) PPC_WEAK_FUNC(sub_83C72BB0);
PPC_FUNC_IMPL(__imp__sub_83C72BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30400
	ctx.r3.s64 = ctx.r11.s64 + -30400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72BBC"))) PPC_WEAK_FUNC(sub_83C72BBC);
PPC_FUNC_IMPL(__imp__sub_83C72BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72BC0"))) PPC_WEAK_FUNC(sub_83C72BC0);
PPC_FUNC_IMPL(__imp__sub_83C72BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30392
	ctx.r3.s64 = ctx.r11.s64 + -30392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72BCC"))) PPC_WEAK_FUNC(sub_83C72BCC);
PPC_FUNC_IMPL(__imp__sub_83C72BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72BD0"))) PPC_WEAK_FUNC(sub_83C72BD0);
PPC_FUNC_IMPL(__imp__sub_83C72BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30384
	ctx.r3.s64 = ctx.r11.s64 + -30384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72BDC"))) PPC_WEAK_FUNC(sub_83C72BDC);
PPC_FUNC_IMPL(__imp__sub_83C72BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72BE0"))) PPC_WEAK_FUNC(sub_83C72BE0);
PPC_FUNC_IMPL(__imp__sub_83C72BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30376
	ctx.r3.s64 = ctx.r11.s64 + -30376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72BEC"))) PPC_WEAK_FUNC(sub_83C72BEC);
PPC_FUNC_IMPL(__imp__sub_83C72BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72BF0"))) PPC_WEAK_FUNC(sub_83C72BF0);
PPC_FUNC_IMPL(__imp__sub_83C72BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30368
	ctx.r3.s64 = ctx.r11.s64 + -30368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72BFC"))) PPC_WEAK_FUNC(sub_83C72BFC);
PPC_FUNC_IMPL(__imp__sub_83C72BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72C00"))) PPC_WEAK_FUNC(sub_83C72C00);
PPC_FUNC_IMPL(__imp__sub_83C72C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30360
	ctx.r3.s64 = ctx.r11.s64 + -30360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72C0C"))) PPC_WEAK_FUNC(sub_83C72C0C);
PPC_FUNC_IMPL(__imp__sub_83C72C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72C10"))) PPC_WEAK_FUNC(sub_83C72C10);
PPC_FUNC_IMPL(__imp__sub_83C72C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30352
	ctx.r3.s64 = ctx.r11.s64 + -30352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72C1C"))) PPC_WEAK_FUNC(sub_83C72C1C);
PPC_FUNC_IMPL(__imp__sub_83C72C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72C20"))) PPC_WEAK_FUNC(sub_83C72C20);
PPC_FUNC_IMPL(__imp__sub_83C72C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30344
	ctx.r3.s64 = ctx.r11.s64 + -30344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72C2C"))) PPC_WEAK_FUNC(sub_83C72C2C);
PPC_FUNC_IMPL(__imp__sub_83C72C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72C30"))) PPC_WEAK_FUNC(sub_83C72C30);
PPC_FUNC_IMPL(__imp__sub_83C72C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30336
	ctx.r3.s64 = ctx.r11.s64 + -30336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72C3C"))) PPC_WEAK_FUNC(sub_83C72C3C);
PPC_FUNC_IMPL(__imp__sub_83C72C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72C40"))) PPC_WEAK_FUNC(sub_83C72C40);
PPC_FUNC_IMPL(__imp__sub_83C72C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30328
	ctx.r3.s64 = ctx.r11.s64 + -30328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72C4C"))) PPC_WEAK_FUNC(sub_83C72C4C);
PPC_FUNC_IMPL(__imp__sub_83C72C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72C50"))) PPC_WEAK_FUNC(sub_83C72C50);
PPC_FUNC_IMPL(__imp__sub_83C72C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30320
	ctx.r3.s64 = ctx.r11.s64 + -30320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72C5C"))) PPC_WEAK_FUNC(sub_83C72C5C);
PPC_FUNC_IMPL(__imp__sub_83C72C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72C60"))) PPC_WEAK_FUNC(sub_83C72C60);
PPC_FUNC_IMPL(__imp__sub_83C72C60) {
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
	// addi r3,r11,-9480
	ctx.r3.s64 = ctx.r11.s64 + -9480;
	// bl 0x83523120
	ctx.lr = 0x83C72C78;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-30312
	ctx.r3.s64 = ctx.r10.s64 + -30312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C72C84;
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

__attribute__((alias("__imp__sub_83C72C94"))) PPC_WEAK_FUNC(sub_83C72C94);
PPC_FUNC_IMPL(__imp__sub_83C72C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72C98"))) PPC_WEAK_FUNC(sub_83C72C98);
PPC_FUNC_IMPL(__imp__sub_83C72C98) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,7948
	ctx.r4.s64 = ctx.r11.s64 + 7948;
	// addi r3,r10,-15828
	ctx.r3.s64 = ctx.r10.s64 + -15828;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C72CBC;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-30296
	ctx.r3.s64 = ctx.r9.s64 + -30296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C72CC8;
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

__attribute__((alias("__imp__sub_83C72CD8"))) PPC_WEAK_FUNC(sub_83C72CD8);
PPC_FUNC_IMPL(__imp__sub_83C72CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9476
	ctx.r7.s64 = ctx.r8.s64 + -9476;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9476(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9476);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9476(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9476, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C72D00"))) PPC_WEAK_FUNC(sub_83C72D00);
PPC_FUNC_IMPL(__imp__sub_83C72D00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-15800
	ctx.r6.s64 = ctx.r7.s64 + -15800;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15900(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15900);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9476(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9476);
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
	// std r9,-15800(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15800, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C72D48"))) PPC_WEAK_FUNC(sub_83C72D48);
PPC_FUNC_IMPL(__imp__sub_83C72D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30192
	ctx.r3.s64 = ctx.r11.s64 + -30192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72D54"))) PPC_WEAK_FUNC(sub_83C72D54);
PPC_FUNC_IMPL(__imp__sub_83C72D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72D58"))) PPC_WEAK_FUNC(sub_83C72D58);
PPC_FUNC_IMPL(__imp__sub_83C72D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30184
	ctx.r3.s64 = ctx.r11.s64 + -30184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72D64"))) PPC_WEAK_FUNC(sub_83C72D64);
PPC_FUNC_IMPL(__imp__sub_83C72D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72D68"))) PPC_WEAK_FUNC(sub_83C72D68);
PPC_FUNC_IMPL(__imp__sub_83C72D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30176
	ctx.r3.s64 = ctx.r11.s64 + -30176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72D74"))) PPC_WEAK_FUNC(sub_83C72D74);
PPC_FUNC_IMPL(__imp__sub_83C72D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72D78"))) PPC_WEAK_FUNC(sub_83C72D78);
PPC_FUNC_IMPL(__imp__sub_83C72D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30168
	ctx.r3.s64 = ctx.r11.s64 + -30168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72D84"))) PPC_WEAK_FUNC(sub_83C72D84);
PPC_FUNC_IMPL(__imp__sub_83C72D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72D88"))) PPC_WEAK_FUNC(sub_83C72D88);
PPC_FUNC_IMPL(__imp__sub_83C72D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30160
	ctx.r3.s64 = ctx.r11.s64 + -30160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72D94"))) PPC_WEAK_FUNC(sub_83C72D94);
PPC_FUNC_IMPL(__imp__sub_83C72D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72D98"))) PPC_WEAK_FUNC(sub_83C72D98);
PPC_FUNC_IMPL(__imp__sub_83C72D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30152
	ctx.r3.s64 = ctx.r11.s64 + -30152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72DA4"))) PPC_WEAK_FUNC(sub_83C72DA4);
PPC_FUNC_IMPL(__imp__sub_83C72DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72DA8"))) PPC_WEAK_FUNC(sub_83C72DA8);
PPC_FUNC_IMPL(__imp__sub_83C72DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30144
	ctx.r3.s64 = ctx.r11.s64 + -30144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72DB4"))) PPC_WEAK_FUNC(sub_83C72DB4);
PPC_FUNC_IMPL(__imp__sub_83C72DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72DB8"))) PPC_WEAK_FUNC(sub_83C72DB8);
PPC_FUNC_IMPL(__imp__sub_83C72DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30136
	ctx.r3.s64 = ctx.r11.s64 + -30136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72DC4"))) PPC_WEAK_FUNC(sub_83C72DC4);
PPC_FUNC_IMPL(__imp__sub_83C72DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72DC8"))) PPC_WEAK_FUNC(sub_83C72DC8);
PPC_FUNC_IMPL(__imp__sub_83C72DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30128
	ctx.r3.s64 = ctx.r11.s64 + -30128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72DD4"))) PPC_WEAK_FUNC(sub_83C72DD4);
PPC_FUNC_IMPL(__imp__sub_83C72DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72DD8"))) PPC_WEAK_FUNC(sub_83C72DD8);
PPC_FUNC_IMPL(__imp__sub_83C72DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30120
	ctx.r3.s64 = ctx.r11.s64 + -30120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72DE4"))) PPC_WEAK_FUNC(sub_83C72DE4);
PPC_FUNC_IMPL(__imp__sub_83C72DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72DE8"))) PPC_WEAK_FUNC(sub_83C72DE8);
PPC_FUNC_IMPL(__imp__sub_83C72DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30112
	ctx.r3.s64 = ctx.r11.s64 + -30112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72DF4"))) PPC_WEAK_FUNC(sub_83C72DF4);
PPC_FUNC_IMPL(__imp__sub_83C72DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72DF8"))) PPC_WEAK_FUNC(sub_83C72DF8);
PPC_FUNC_IMPL(__imp__sub_83C72DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30104
	ctx.r3.s64 = ctx.r11.s64 + -30104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72E04"))) PPC_WEAK_FUNC(sub_83C72E04);
PPC_FUNC_IMPL(__imp__sub_83C72E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72E08"))) PPC_WEAK_FUNC(sub_83C72E08);
PPC_FUNC_IMPL(__imp__sub_83C72E08) {
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
	// addi r3,r11,-9464
	ctx.r3.s64 = ctx.r11.s64 + -9464;
	// bl 0x83523120
	ctx.lr = 0x83C72E20;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-30096
	ctx.r3.s64 = ctx.r10.s64 + -30096;
	// bl 0x831cdcc8
	ctx.lr = 0x83C72E2C;
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

__attribute__((alias("__imp__sub_83C72E3C"))) PPC_WEAK_FUNC(sub_83C72E3C);
PPC_FUNC_IMPL(__imp__sub_83C72E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72E40"))) PPC_WEAK_FUNC(sub_83C72E40);
PPC_FUNC_IMPL(__imp__sub_83C72E40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9448
	ctx.r7.s64 = ctx.r8.s64 + -9448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C72E68"))) PPC_WEAK_FUNC(sub_83C72E68);
PPC_FUNC_IMPL(__imp__sub_83C72E68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-15676
	ctx.r6.s64 = ctx.r7.s64 + -15676;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15748(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15748);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9448);
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
	// std r9,-15676(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15676, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C72EB0"))) PPC_WEAK_FUNC(sub_83C72EB0);
PPC_FUNC_IMPL(__imp__sub_83C72EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-30080
	ctx.r3.s64 = ctx.r11.s64 + -30080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72EBC"))) PPC_WEAK_FUNC(sub_83C72EBC);
PPC_FUNC_IMPL(__imp__sub_83C72EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72EC0"))) PPC_WEAK_FUNC(sub_83C72EC0);
PPC_FUNC_IMPL(__imp__sub_83C72EC0) {
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
	// addi r3,r11,-9440
	ctx.r3.s64 = ctx.r11.s64 + -9440;
	// bl 0x8259af80
	ctx.lr = 0x83C72ED8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-30064
	ctx.r3.s64 = ctx.r10.s64 + -30064;
	// bl 0x831cdcc8
	ctx.lr = 0x83C72EE4;
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

__attribute__((alias("__imp__sub_83C72EF4"))) PPC_WEAK_FUNC(sub_83C72EF4);
PPC_FUNC_IMPL(__imp__sub_83C72EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72EF8"))) PPC_WEAK_FUNC(sub_83C72EF8);
PPC_FUNC_IMPL(__imp__sub_83C72EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9460
	ctx.r11.s64 = ctx.r8.s64 + -9460;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-15700(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15700);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30072
	ctx.r3.s64 = ctx.r6.s64 + -30072;
	// stw r10,-9460(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9460, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72F28"))) PPC_WEAK_FUNC(sub_83C72F28);
PPC_FUNC_IMPL(__imp__sub_83C72F28) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,8820
	ctx.r4.s64 = ctx.r11.s64 + 8820;
	// addi r3,r10,-15652
	ctx.r3.s64 = ctx.r10.s64 + -15652;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C72F4C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-30056
	ctx.r3.s64 = ctx.r9.s64 + -30056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C72F58;
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

__attribute__((alias("__imp__sub_83C72F68"))) PPC_WEAK_FUNC(sub_83C72F68);
PPC_FUNC_IMPL(__imp__sub_83C72F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-29952
	ctx.r3.s64 = ctx.r11.s64 + -29952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72F74"))) PPC_WEAK_FUNC(sub_83C72F74);
PPC_FUNC_IMPL(__imp__sub_83C72F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72F78"))) PPC_WEAK_FUNC(sub_83C72F78);
PPC_FUNC_IMPL(__imp__sub_83C72F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-29944
	ctx.r3.s64 = ctx.r11.s64 + -29944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72F84"))) PPC_WEAK_FUNC(sub_83C72F84);
PPC_FUNC_IMPL(__imp__sub_83C72F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72F88"))) PPC_WEAK_FUNC(sub_83C72F88);
PPC_FUNC_IMPL(__imp__sub_83C72F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-29936
	ctx.r3.s64 = ctx.r11.s64 + -29936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72F94"))) PPC_WEAK_FUNC(sub_83C72F94);
PPC_FUNC_IMPL(__imp__sub_83C72F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72F98"))) PPC_WEAK_FUNC(sub_83C72F98);
PPC_FUNC_IMPL(__imp__sub_83C72F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-29928
	ctx.r3.s64 = ctx.r11.s64 + -29928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72FA4"))) PPC_WEAK_FUNC(sub_83C72FA4);
PPC_FUNC_IMPL(__imp__sub_83C72FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72FA8"))) PPC_WEAK_FUNC(sub_83C72FA8);
PPC_FUNC_IMPL(__imp__sub_83C72FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-29920
	ctx.r3.s64 = ctx.r11.s64 + -29920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72FB4"))) PPC_WEAK_FUNC(sub_83C72FB4);
PPC_FUNC_IMPL(__imp__sub_83C72FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72FB8"))) PPC_WEAK_FUNC(sub_83C72FB8);
PPC_FUNC_IMPL(__imp__sub_83C72FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-29912
	ctx.r3.s64 = ctx.r11.s64 + -29912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72FC4"))) PPC_WEAK_FUNC(sub_83C72FC4);
PPC_FUNC_IMPL(__imp__sub_83C72FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72FC8"))) PPC_WEAK_FUNC(sub_83C72FC8);
PPC_FUNC_IMPL(__imp__sub_83C72FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-29904
	ctx.r3.s64 = ctx.r11.s64 + -29904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72FD4"))) PPC_WEAK_FUNC(sub_83C72FD4);
PPC_FUNC_IMPL(__imp__sub_83C72FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72FD8"))) PPC_WEAK_FUNC(sub_83C72FD8);
PPC_FUNC_IMPL(__imp__sub_83C72FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-29896
	ctx.r3.s64 = ctx.r11.s64 + -29896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72FE4"))) PPC_WEAK_FUNC(sub_83C72FE4);
PPC_FUNC_IMPL(__imp__sub_83C72FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72FE8"))) PPC_WEAK_FUNC(sub_83C72FE8);
PPC_FUNC_IMPL(__imp__sub_83C72FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-29888
	ctx.r3.s64 = ctx.r11.s64 + -29888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C72FF4"))) PPC_WEAK_FUNC(sub_83C72FF4);
PPC_FUNC_IMPL(__imp__sub_83C72FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C72FF8"))) PPC_WEAK_FUNC(sub_83C72FF8);
PPC_FUNC_IMPL(__imp__sub_83C72FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-29880
	ctx.r3.s64 = ctx.r11.s64 + -29880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C73004"))) PPC_WEAK_FUNC(sub_83C73004);
PPC_FUNC_IMPL(__imp__sub_83C73004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C73008"))) PPC_WEAK_FUNC(sub_83C73008);
PPC_FUNC_IMPL(__imp__sub_83C73008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-29872
	ctx.r3.s64 = ctx.r11.s64 + -29872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C73014"))) PPC_WEAK_FUNC(sub_83C73014);
PPC_FUNC_IMPL(__imp__sub_83C73014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C73018"))) PPC_WEAK_FUNC(sub_83C73018);
PPC_FUNC_IMPL(__imp__sub_83C73018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-29864
	ctx.r3.s64 = ctx.r11.s64 + -29864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C73024"))) PPC_WEAK_FUNC(sub_83C73024);
PPC_FUNC_IMPL(__imp__sub_83C73024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C73028"))) PPC_WEAK_FUNC(sub_83C73028);
PPC_FUNC_IMPL(__imp__sub_83C73028) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,9512
	ctx.r4.s64 = ctx.r11.s64 + 9512;
	// addi r3,r10,-15520
	ctx.r3.s64 = ctx.r10.s64 + -15520;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C7304C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-29856
	ctx.r3.s64 = ctx.r9.s64 + -29856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C73058;
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

__attribute__((alias("__imp__sub_83C73068"))) PPC_WEAK_FUNC(sub_83C73068);
PPC_FUNC_IMPL(__imp__sub_83C73068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-29752
	ctx.r3.s64 = ctx.r11.s64 + -29752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

