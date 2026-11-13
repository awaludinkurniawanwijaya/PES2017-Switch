#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BAA444"))) PPC_WEAK_FUNC(sub_83BAA444);
PPC_FUNC_IMPL(__imp__sub_83BAA444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA448"))) PPC_WEAK_FUNC(sub_83BAA448);
PPC_FUNC_IMPL(__imp__sub_83BAA448) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,28648
	ctx.r3.s64 = ctx.r11.s64 + 28648;
	// bl 0x83523120
	ctx.lr = 0x83BAA460;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30808
	ctx.r3.s64 = ctx.r10.s64 + -30808;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAA46C;
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

__attribute__((alias("__imp__sub_83BAA47C"))) PPC_WEAK_FUNC(sub_83BAA47C);
PPC_FUNC_IMPL(__imp__sub_83BAA47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA480"))) PPC_WEAK_FUNC(sub_83BAA480);
PPC_FUNC_IMPL(__imp__sub_83BAA480) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28664
	ctx.r7.s64 = ctx.r8.s64 + 28664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28664(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28664);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28664(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28664, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAA4A8"))) PPC_WEAK_FUNC(sub_83BAA4A8);
PPC_FUNC_IMPL(__imp__sub_83BAA4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,31736
	ctx.r6.s64 = ctx.r7.s64 + 31736;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31664(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31664);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28664(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28664);
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
	// std r9,31736(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31736, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAA4F0"))) PPC_WEAK_FUNC(sub_83BAA4F0);
PPC_FUNC_IMPL(__imp__sub_83BAA4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30792
	ctx.r3.s64 = ctx.r11.s64 + -30792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA4FC"))) PPC_WEAK_FUNC(sub_83BAA4FC);
PPC_FUNC_IMPL(__imp__sub_83BAA4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA500"))) PPC_WEAK_FUNC(sub_83BAA500);
PPC_FUNC_IMPL(__imp__sub_83BAA500) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,28672
	ctx.r3.s64 = ctx.r11.s64 + 28672;
	// bl 0x8259af80
	ctx.lr = 0x83BAA518;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30776
	ctx.r3.s64 = ctx.r10.s64 + -30776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAA524;
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

__attribute__((alias("__imp__sub_83BAA534"))) PPC_WEAK_FUNC(sub_83BAA534);
PPC_FUNC_IMPL(__imp__sub_83BAA534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA538"))) PPC_WEAK_FUNC(sub_83BAA538);
PPC_FUNC_IMPL(__imp__sub_83BAA538) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28652
	ctx.r11.s64 = ctx.r8.s64 + 28652;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,31712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31712);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30784
	ctx.r3.s64 = ctx.r6.s64 + -30784;
	// stw r10,28652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28652, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA568"))) PPC_WEAK_FUNC(sub_83BAA568);
PPC_FUNC_IMPL(__imp__sub_83BAA568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30768
	ctx.r3.s64 = ctx.r11.s64 + -30768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA574"))) PPC_WEAK_FUNC(sub_83BAA574);
PPC_FUNC_IMPL(__imp__sub_83BAA574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA578"))) PPC_WEAK_FUNC(sub_83BAA578);
PPC_FUNC_IMPL(__imp__sub_83BAA578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30760
	ctx.r3.s64 = ctx.r11.s64 + -30760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA584"))) PPC_WEAK_FUNC(sub_83BAA584);
PPC_FUNC_IMPL(__imp__sub_83BAA584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA588"))) PPC_WEAK_FUNC(sub_83BAA588);
PPC_FUNC_IMPL(__imp__sub_83BAA588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30752
	ctx.r3.s64 = ctx.r11.s64 + -30752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA594"))) PPC_WEAK_FUNC(sub_83BAA594);
PPC_FUNC_IMPL(__imp__sub_83BAA594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA598"))) PPC_WEAK_FUNC(sub_83BAA598);
PPC_FUNC_IMPL(__imp__sub_83BAA598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30744
	ctx.r3.s64 = ctx.r11.s64 + -30744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA5A4"))) PPC_WEAK_FUNC(sub_83BAA5A4);
PPC_FUNC_IMPL(__imp__sub_83BAA5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA5A8"))) PPC_WEAK_FUNC(sub_83BAA5A8);
PPC_FUNC_IMPL(__imp__sub_83BAA5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30736
	ctx.r3.s64 = ctx.r11.s64 + -30736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA5B4"))) PPC_WEAK_FUNC(sub_83BAA5B4);
PPC_FUNC_IMPL(__imp__sub_83BAA5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA5B8"))) PPC_WEAK_FUNC(sub_83BAA5B8);
PPC_FUNC_IMPL(__imp__sub_83BAA5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30728
	ctx.r3.s64 = ctx.r11.s64 + -30728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA5C4"))) PPC_WEAK_FUNC(sub_83BAA5C4);
PPC_FUNC_IMPL(__imp__sub_83BAA5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA5C8"))) PPC_WEAK_FUNC(sub_83BAA5C8);
PPC_FUNC_IMPL(__imp__sub_83BAA5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30720
	ctx.r3.s64 = ctx.r11.s64 + -30720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA5D4"))) PPC_WEAK_FUNC(sub_83BAA5D4);
PPC_FUNC_IMPL(__imp__sub_83BAA5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA5D8"))) PPC_WEAK_FUNC(sub_83BAA5D8);
PPC_FUNC_IMPL(__imp__sub_83BAA5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30712
	ctx.r3.s64 = ctx.r11.s64 + -30712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA5E4"))) PPC_WEAK_FUNC(sub_83BAA5E4);
PPC_FUNC_IMPL(__imp__sub_83BAA5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA5E8"))) PPC_WEAK_FUNC(sub_83BAA5E8);
PPC_FUNC_IMPL(__imp__sub_83BAA5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30704
	ctx.r3.s64 = ctx.r11.s64 + -30704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA5F4"))) PPC_WEAK_FUNC(sub_83BAA5F4);
PPC_FUNC_IMPL(__imp__sub_83BAA5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA5F8"))) PPC_WEAK_FUNC(sub_83BAA5F8);
PPC_FUNC_IMPL(__imp__sub_83BAA5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30696
	ctx.r3.s64 = ctx.r11.s64 + -30696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA604"))) PPC_WEAK_FUNC(sub_83BAA604);
PPC_FUNC_IMPL(__imp__sub_83BAA604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA608"))) PPC_WEAK_FUNC(sub_83BAA608);
PPC_FUNC_IMPL(__imp__sub_83BAA608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30688
	ctx.r3.s64 = ctx.r11.s64 + -30688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA614"))) PPC_WEAK_FUNC(sub_83BAA614);
PPC_FUNC_IMPL(__imp__sub_83BAA614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA618"))) PPC_WEAK_FUNC(sub_83BAA618);
PPC_FUNC_IMPL(__imp__sub_83BAA618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30680
	ctx.r3.s64 = ctx.r11.s64 + -30680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA624"))) PPC_WEAK_FUNC(sub_83BAA624);
PPC_FUNC_IMPL(__imp__sub_83BAA624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA628"))) PPC_WEAK_FUNC(sub_83BAA628);
PPC_FUNC_IMPL(__imp__sub_83BAA628) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,29016
	ctx.r3.s64 = ctx.r11.s64 + 29016;
	// bl 0x83523120
	ctx.lr = 0x83BAA640;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30672
	ctx.r3.s64 = ctx.r10.s64 + -30672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAA64C;
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

__attribute__((alias("__imp__sub_83BAA65C"))) PPC_WEAK_FUNC(sub_83BAA65C);
PPC_FUNC_IMPL(__imp__sub_83BAA65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA660"))) PPC_WEAK_FUNC(sub_83BAA660);
PPC_FUNC_IMPL(__imp__sub_83BAA660) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29032
	ctx.r7.s64 = ctx.r8.s64 + 29032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29032(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAA688"))) PPC_WEAK_FUNC(sub_83BAA688);
PPC_FUNC_IMPL(__imp__sub_83BAA688) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,31872
	ctx.r6.s64 = ctx.r7.s64 + 31872;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31800(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31800);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29032);
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
	// std r9,31872(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31872, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAA6D0"))) PPC_WEAK_FUNC(sub_83BAA6D0);
PPC_FUNC_IMPL(__imp__sub_83BAA6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30656
	ctx.r3.s64 = ctx.r11.s64 + -30656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA6DC"))) PPC_WEAK_FUNC(sub_83BAA6DC);
PPC_FUNC_IMPL(__imp__sub_83BAA6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA6E0"))) PPC_WEAK_FUNC(sub_83BAA6E0);
PPC_FUNC_IMPL(__imp__sub_83BAA6E0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,29040
	ctx.r3.s64 = ctx.r11.s64 + 29040;
	// bl 0x8259af80
	ctx.lr = 0x83BAA6F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30640
	ctx.r3.s64 = ctx.r10.s64 + -30640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAA704;
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

__attribute__((alias("__imp__sub_83BAA714"))) PPC_WEAK_FUNC(sub_83BAA714);
PPC_FUNC_IMPL(__imp__sub_83BAA714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA718"))) PPC_WEAK_FUNC(sub_83BAA718);
PPC_FUNC_IMPL(__imp__sub_83BAA718) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29020
	ctx.r11.s64 = ctx.r8.s64 + 29020;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,31848(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31848);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30648
	ctx.r3.s64 = ctx.r6.s64 + -30648;
	// stw r10,29020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29020, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA748"))) PPC_WEAK_FUNC(sub_83BAA748);
PPC_FUNC_IMPL(__imp__sub_83BAA748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30632
	ctx.r3.s64 = ctx.r11.s64 + -30632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA754"))) PPC_WEAK_FUNC(sub_83BAA754);
PPC_FUNC_IMPL(__imp__sub_83BAA754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA758"))) PPC_WEAK_FUNC(sub_83BAA758);
PPC_FUNC_IMPL(__imp__sub_83BAA758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30624
	ctx.r3.s64 = ctx.r11.s64 + -30624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA764"))) PPC_WEAK_FUNC(sub_83BAA764);
PPC_FUNC_IMPL(__imp__sub_83BAA764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA768"))) PPC_WEAK_FUNC(sub_83BAA768);
PPC_FUNC_IMPL(__imp__sub_83BAA768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30616
	ctx.r3.s64 = ctx.r11.s64 + -30616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA774"))) PPC_WEAK_FUNC(sub_83BAA774);
PPC_FUNC_IMPL(__imp__sub_83BAA774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA778"))) PPC_WEAK_FUNC(sub_83BAA778);
PPC_FUNC_IMPL(__imp__sub_83BAA778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30608
	ctx.r3.s64 = ctx.r11.s64 + -30608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA784"))) PPC_WEAK_FUNC(sub_83BAA784);
PPC_FUNC_IMPL(__imp__sub_83BAA784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA788"))) PPC_WEAK_FUNC(sub_83BAA788);
PPC_FUNC_IMPL(__imp__sub_83BAA788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30600
	ctx.r3.s64 = ctx.r11.s64 + -30600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA794"))) PPC_WEAK_FUNC(sub_83BAA794);
PPC_FUNC_IMPL(__imp__sub_83BAA794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA798"))) PPC_WEAK_FUNC(sub_83BAA798);
PPC_FUNC_IMPL(__imp__sub_83BAA798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30592
	ctx.r3.s64 = ctx.r11.s64 + -30592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA7A4"))) PPC_WEAK_FUNC(sub_83BAA7A4);
PPC_FUNC_IMPL(__imp__sub_83BAA7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA7A8"))) PPC_WEAK_FUNC(sub_83BAA7A8);
PPC_FUNC_IMPL(__imp__sub_83BAA7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30584
	ctx.r3.s64 = ctx.r11.s64 + -30584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA7B4"))) PPC_WEAK_FUNC(sub_83BAA7B4);
PPC_FUNC_IMPL(__imp__sub_83BAA7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA7B8"))) PPC_WEAK_FUNC(sub_83BAA7B8);
PPC_FUNC_IMPL(__imp__sub_83BAA7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30576
	ctx.r3.s64 = ctx.r11.s64 + -30576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA7C4"))) PPC_WEAK_FUNC(sub_83BAA7C4);
PPC_FUNC_IMPL(__imp__sub_83BAA7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA7C8"))) PPC_WEAK_FUNC(sub_83BAA7C8);
PPC_FUNC_IMPL(__imp__sub_83BAA7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30568
	ctx.r3.s64 = ctx.r11.s64 + -30568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA7D4"))) PPC_WEAK_FUNC(sub_83BAA7D4);
PPC_FUNC_IMPL(__imp__sub_83BAA7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA7D8"))) PPC_WEAK_FUNC(sub_83BAA7D8);
PPC_FUNC_IMPL(__imp__sub_83BAA7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30560
	ctx.r3.s64 = ctx.r11.s64 + -30560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA7E4"))) PPC_WEAK_FUNC(sub_83BAA7E4);
PPC_FUNC_IMPL(__imp__sub_83BAA7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA7E8"))) PPC_WEAK_FUNC(sub_83BAA7E8);
PPC_FUNC_IMPL(__imp__sub_83BAA7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30552
	ctx.r3.s64 = ctx.r11.s64 + -30552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA7F4"))) PPC_WEAK_FUNC(sub_83BAA7F4);
PPC_FUNC_IMPL(__imp__sub_83BAA7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA7F8"))) PPC_WEAK_FUNC(sub_83BAA7F8);
PPC_FUNC_IMPL(__imp__sub_83BAA7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30544
	ctx.r3.s64 = ctx.r11.s64 + -30544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA804"))) PPC_WEAK_FUNC(sub_83BAA804);
PPC_FUNC_IMPL(__imp__sub_83BAA804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA808"))) PPC_WEAK_FUNC(sub_83BAA808);
PPC_FUNC_IMPL(__imp__sub_83BAA808) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,29384
	ctx.r3.s64 = ctx.r11.s64 + 29384;
	// bl 0x83523120
	ctx.lr = 0x83BAA820;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30536
	ctx.r3.s64 = ctx.r10.s64 + -30536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAA82C;
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

__attribute__((alias("__imp__sub_83BAA83C"))) PPC_WEAK_FUNC(sub_83BAA83C);
PPC_FUNC_IMPL(__imp__sub_83BAA83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA840"))) PPC_WEAK_FUNC(sub_83BAA840);
PPC_FUNC_IMPL(__imp__sub_83BAA840) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29400
	ctx.r7.s64 = ctx.r8.s64 + 29400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAA868"))) PPC_WEAK_FUNC(sub_83BAA868);
PPC_FUNC_IMPL(__imp__sub_83BAA868) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,32016
	ctx.r6.s64 = ctx.r7.s64 + 32016;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31944(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31944);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29400);
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
	// std r9,32016(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32016, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAA8B0"))) PPC_WEAK_FUNC(sub_83BAA8B0);
PPC_FUNC_IMPL(__imp__sub_83BAA8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30520
	ctx.r3.s64 = ctx.r11.s64 + -30520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA8BC"))) PPC_WEAK_FUNC(sub_83BAA8BC);
PPC_FUNC_IMPL(__imp__sub_83BAA8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA8C0"))) PPC_WEAK_FUNC(sub_83BAA8C0);
PPC_FUNC_IMPL(__imp__sub_83BAA8C0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,29408
	ctx.r3.s64 = ctx.r11.s64 + 29408;
	// bl 0x8259af80
	ctx.lr = 0x83BAA8D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30504
	ctx.r3.s64 = ctx.r10.s64 + -30504;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAA8E4;
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

__attribute__((alias("__imp__sub_83BAA8F4"))) PPC_WEAK_FUNC(sub_83BAA8F4);
PPC_FUNC_IMPL(__imp__sub_83BAA8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA8F8"))) PPC_WEAK_FUNC(sub_83BAA8F8);
PPC_FUNC_IMPL(__imp__sub_83BAA8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29388
	ctx.r11.s64 = ctx.r8.s64 + 29388;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,31992(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31992);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30512
	ctx.r3.s64 = ctx.r6.s64 + -30512;
	// stw r10,29388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29388, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA928"))) PPC_WEAK_FUNC(sub_83BAA928);
PPC_FUNC_IMPL(__imp__sub_83BAA928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30496
	ctx.r3.s64 = ctx.r11.s64 + -30496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA934"))) PPC_WEAK_FUNC(sub_83BAA934);
PPC_FUNC_IMPL(__imp__sub_83BAA934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA938"))) PPC_WEAK_FUNC(sub_83BAA938);
PPC_FUNC_IMPL(__imp__sub_83BAA938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30488
	ctx.r3.s64 = ctx.r11.s64 + -30488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA944"))) PPC_WEAK_FUNC(sub_83BAA944);
PPC_FUNC_IMPL(__imp__sub_83BAA944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA948"))) PPC_WEAK_FUNC(sub_83BAA948);
PPC_FUNC_IMPL(__imp__sub_83BAA948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30480
	ctx.r3.s64 = ctx.r11.s64 + -30480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA954"))) PPC_WEAK_FUNC(sub_83BAA954);
PPC_FUNC_IMPL(__imp__sub_83BAA954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA958"))) PPC_WEAK_FUNC(sub_83BAA958);
PPC_FUNC_IMPL(__imp__sub_83BAA958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30472
	ctx.r3.s64 = ctx.r11.s64 + -30472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA964"))) PPC_WEAK_FUNC(sub_83BAA964);
PPC_FUNC_IMPL(__imp__sub_83BAA964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA968"))) PPC_WEAK_FUNC(sub_83BAA968);
PPC_FUNC_IMPL(__imp__sub_83BAA968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30464
	ctx.r3.s64 = ctx.r11.s64 + -30464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA974"))) PPC_WEAK_FUNC(sub_83BAA974);
PPC_FUNC_IMPL(__imp__sub_83BAA974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA978"))) PPC_WEAK_FUNC(sub_83BAA978);
PPC_FUNC_IMPL(__imp__sub_83BAA978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30456
	ctx.r3.s64 = ctx.r11.s64 + -30456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA984"))) PPC_WEAK_FUNC(sub_83BAA984);
PPC_FUNC_IMPL(__imp__sub_83BAA984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA988"))) PPC_WEAK_FUNC(sub_83BAA988);
PPC_FUNC_IMPL(__imp__sub_83BAA988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30448
	ctx.r3.s64 = ctx.r11.s64 + -30448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA994"))) PPC_WEAK_FUNC(sub_83BAA994);
PPC_FUNC_IMPL(__imp__sub_83BAA994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA998"))) PPC_WEAK_FUNC(sub_83BAA998);
PPC_FUNC_IMPL(__imp__sub_83BAA998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30440
	ctx.r3.s64 = ctx.r11.s64 + -30440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA9A4"))) PPC_WEAK_FUNC(sub_83BAA9A4);
PPC_FUNC_IMPL(__imp__sub_83BAA9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA9A8"))) PPC_WEAK_FUNC(sub_83BAA9A8);
PPC_FUNC_IMPL(__imp__sub_83BAA9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30432
	ctx.r3.s64 = ctx.r11.s64 + -30432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA9B4"))) PPC_WEAK_FUNC(sub_83BAA9B4);
PPC_FUNC_IMPL(__imp__sub_83BAA9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA9B8"))) PPC_WEAK_FUNC(sub_83BAA9B8);
PPC_FUNC_IMPL(__imp__sub_83BAA9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30424
	ctx.r3.s64 = ctx.r11.s64 + -30424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA9C4"))) PPC_WEAK_FUNC(sub_83BAA9C4);
PPC_FUNC_IMPL(__imp__sub_83BAA9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA9C8"))) PPC_WEAK_FUNC(sub_83BAA9C8);
PPC_FUNC_IMPL(__imp__sub_83BAA9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30416
	ctx.r3.s64 = ctx.r11.s64 + -30416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA9D4"))) PPC_WEAK_FUNC(sub_83BAA9D4);
PPC_FUNC_IMPL(__imp__sub_83BAA9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA9D8"))) PPC_WEAK_FUNC(sub_83BAA9D8);
PPC_FUNC_IMPL(__imp__sub_83BAA9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30408
	ctx.r3.s64 = ctx.r11.s64 + -30408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA9E4"))) PPC_WEAK_FUNC(sub_83BAA9E4);
PPC_FUNC_IMPL(__imp__sub_83BAA9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA9E8"))) PPC_WEAK_FUNC(sub_83BAA9E8);
PPC_FUNC_IMPL(__imp__sub_83BAA9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29768
	ctx.r7.s64 = ctx.r8.s64 + 29768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29768(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAAA10"))) PPC_WEAK_FUNC(sub_83BAAA10);
PPC_FUNC_IMPL(__imp__sub_83BAAA10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,32212
	ctx.r6.s64 = ctx.r7.s64 + 32212;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32140(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32140);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29768);
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
	// std r9,32212(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32212, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAAA58"))) PPC_WEAK_FUNC(sub_83BAAA58);
PPC_FUNC_IMPL(__imp__sub_83BAAA58) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,29752
	ctx.r3.s64 = ctx.r11.s64 + 29752;
	// bl 0x83523120
	ctx.lr = 0x83BAAA70;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30400
	ctx.r3.s64 = ctx.r10.s64 + -30400;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAAA7C;
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

__attribute__((alias("__imp__sub_83BAAA8C"))) PPC_WEAK_FUNC(sub_83BAAA8C);
PPC_FUNC_IMPL(__imp__sub_83BAAA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAA90"))) PPC_WEAK_FUNC(sub_83BAAA90);
PPC_FUNC_IMPL(__imp__sub_83BAAA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30384
	ctx.r3.s64 = ctx.r11.s64 + -30384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAA9C"))) PPC_WEAK_FUNC(sub_83BAAA9C);
PPC_FUNC_IMPL(__imp__sub_83BAAA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAAA0"))) PPC_WEAK_FUNC(sub_83BAAAA0);
PPC_FUNC_IMPL(__imp__sub_83BAAAA0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,29776
	ctx.r3.s64 = ctx.r11.s64 + 29776;
	// bl 0x8259af80
	ctx.lr = 0x83BAAAB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30368
	ctx.r3.s64 = ctx.r10.s64 + -30368;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAAAC4;
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

__attribute__((alias("__imp__sub_83BAAAD4"))) PPC_WEAK_FUNC(sub_83BAAAD4);
PPC_FUNC_IMPL(__imp__sub_83BAAAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAAD8"))) PPC_WEAK_FUNC(sub_83BAAAD8);
PPC_FUNC_IMPL(__imp__sub_83BAAAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29756
	ctx.r11.s64 = ctx.r8.s64 + 29756;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,32188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32188);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30376
	ctx.r3.s64 = ctx.r6.s64 + -30376;
	// stw r10,29756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29756, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAB08"))) PPC_WEAK_FUNC(sub_83BAAB08);
PPC_FUNC_IMPL(__imp__sub_83BAAB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30360
	ctx.r3.s64 = ctx.r11.s64 + -30360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAB14"))) PPC_WEAK_FUNC(sub_83BAAB14);
PPC_FUNC_IMPL(__imp__sub_83BAAB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAB18"))) PPC_WEAK_FUNC(sub_83BAAB18);
PPC_FUNC_IMPL(__imp__sub_83BAAB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30352
	ctx.r3.s64 = ctx.r11.s64 + -30352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAB24"))) PPC_WEAK_FUNC(sub_83BAAB24);
PPC_FUNC_IMPL(__imp__sub_83BAAB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAB28"))) PPC_WEAK_FUNC(sub_83BAAB28);
PPC_FUNC_IMPL(__imp__sub_83BAAB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30344
	ctx.r3.s64 = ctx.r11.s64 + -30344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAB34"))) PPC_WEAK_FUNC(sub_83BAAB34);
PPC_FUNC_IMPL(__imp__sub_83BAAB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAB38"))) PPC_WEAK_FUNC(sub_83BAAB38);
PPC_FUNC_IMPL(__imp__sub_83BAAB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30336
	ctx.r3.s64 = ctx.r11.s64 + -30336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAB44"))) PPC_WEAK_FUNC(sub_83BAAB44);
PPC_FUNC_IMPL(__imp__sub_83BAAB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAB48"))) PPC_WEAK_FUNC(sub_83BAAB48);
PPC_FUNC_IMPL(__imp__sub_83BAAB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30328
	ctx.r3.s64 = ctx.r11.s64 + -30328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAB54"))) PPC_WEAK_FUNC(sub_83BAAB54);
PPC_FUNC_IMPL(__imp__sub_83BAAB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAB58"))) PPC_WEAK_FUNC(sub_83BAAB58);
PPC_FUNC_IMPL(__imp__sub_83BAAB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30320
	ctx.r3.s64 = ctx.r11.s64 + -30320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAB64"))) PPC_WEAK_FUNC(sub_83BAAB64);
PPC_FUNC_IMPL(__imp__sub_83BAAB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAB68"))) PPC_WEAK_FUNC(sub_83BAAB68);
PPC_FUNC_IMPL(__imp__sub_83BAAB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30312
	ctx.r3.s64 = ctx.r11.s64 + -30312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAB74"))) PPC_WEAK_FUNC(sub_83BAAB74);
PPC_FUNC_IMPL(__imp__sub_83BAAB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAB78"))) PPC_WEAK_FUNC(sub_83BAAB78);
PPC_FUNC_IMPL(__imp__sub_83BAAB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30304
	ctx.r3.s64 = ctx.r11.s64 + -30304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAB84"))) PPC_WEAK_FUNC(sub_83BAAB84);
PPC_FUNC_IMPL(__imp__sub_83BAAB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAB88"))) PPC_WEAK_FUNC(sub_83BAAB88);
PPC_FUNC_IMPL(__imp__sub_83BAAB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30296
	ctx.r3.s64 = ctx.r11.s64 + -30296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAB94"))) PPC_WEAK_FUNC(sub_83BAAB94);
PPC_FUNC_IMPL(__imp__sub_83BAAB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAB98"))) PPC_WEAK_FUNC(sub_83BAAB98);
PPC_FUNC_IMPL(__imp__sub_83BAAB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30288
	ctx.r3.s64 = ctx.r11.s64 + -30288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAABA4"))) PPC_WEAK_FUNC(sub_83BAABA4);
PPC_FUNC_IMPL(__imp__sub_83BAABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAABA8"))) PPC_WEAK_FUNC(sub_83BAABA8);
PPC_FUNC_IMPL(__imp__sub_83BAABA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30280
	ctx.r3.s64 = ctx.r11.s64 + -30280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAABB4"))) PPC_WEAK_FUNC(sub_83BAABB4);
PPC_FUNC_IMPL(__imp__sub_83BAABB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAABB8"))) PPC_WEAK_FUNC(sub_83BAABB8);
PPC_FUNC_IMPL(__imp__sub_83BAABB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30272
	ctx.r3.s64 = ctx.r11.s64 + -30272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAABC4"))) PPC_WEAK_FUNC(sub_83BAABC4);
PPC_FUNC_IMPL(__imp__sub_83BAABC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAABC8"))) PPC_WEAK_FUNC(sub_83BAABC8);
PPC_FUNC_IMPL(__imp__sub_83BAABC8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// bl 0x83523120
	ctx.lr = 0x83BAABE0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30264
	ctx.r3.s64 = ctx.r10.s64 + -30264;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAABEC;
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

__attribute__((alias("__imp__sub_83BAABFC"))) PPC_WEAK_FUNC(sub_83BAABFC);
PPC_FUNC_IMPL(__imp__sub_83BAABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAC00"))) PPC_WEAK_FUNC(sub_83BAAC00);
PPC_FUNC_IMPL(__imp__sub_83BAAC00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30136
	ctx.r7.s64 = ctx.r8.s64 + 30136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAAC28"))) PPC_WEAK_FUNC(sub_83BAAC28);
PPC_FUNC_IMPL(__imp__sub_83BAAC28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,32356
	ctx.r6.s64 = ctx.r7.s64 + 32356;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32284(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32284);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30136);
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
	// std r9,32356(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32356, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAAC70"))) PPC_WEAK_FUNC(sub_83BAAC70);
PPC_FUNC_IMPL(__imp__sub_83BAAC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30248
	ctx.r3.s64 = ctx.r11.s64 + -30248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAC7C"))) PPC_WEAK_FUNC(sub_83BAAC7C);
PPC_FUNC_IMPL(__imp__sub_83BAAC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAC80"))) PPC_WEAK_FUNC(sub_83BAAC80);
PPC_FUNC_IMPL(__imp__sub_83BAAC80) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,30144
	ctx.r3.s64 = ctx.r11.s64 + 30144;
	// bl 0x8259af80
	ctx.lr = 0x83BAAC98;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30232
	ctx.r3.s64 = ctx.r10.s64 + -30232;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAACA4;
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

__attribute__((alias("__imp__sub_83BAACB4"))) PPC_WEAK_FUNC(sub_83BAACB4);
PPC_FUNC_IMPL(__imp__sub_83BAACB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAACB8"))) PPC_WEAK_FUNC(sub_83BAACB8);
PPC_FUNC_IMPL(__imp__sub_83BAACB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30124
	ctx.r11.s64 = ctx.r8.s64 + 30124;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,32332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32332);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30240
	ctx.r3.s64 = ctx.r6.s64 + -30240;
	// stw r10,30124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAACE8"))) PPC_WEAK_FUNC(sub_83BAACE8);
PPC_FUNC_IMPL(__imp__sub_83BAACE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30224
	ctx.r3.s64 = ctx.r11.s64 + -30224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAACF4"))) PPC_WEAK_FUNC(sub_83BAACF4);
PPC_FUNC_IMPL(__imp__sub_83BAACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAACF8"))) PPC_WEAK_FUNC(sub_83BAACF8);
PPC_FUNC_IMPL(__imp__sub_83BAACF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30216
	ctx.r3.s64 = ctx.r11.s64 + -30216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAD04"))) PPC_WEAK_FUNC(sub_83BAAD04);
PPC_FUNC_IMPL(__imp__sub_83BAAD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAD08"))) PPC_WEAK_FUNC(sub_83BAAD08);
PPC_FUNC_IMPL(__imp__sub_83BAAD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30208
	ctx.r3.s64 = ctx.r11.s64 + -30208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAD14"))) PPC_WEAK_FUNC(sub_83BAAD14);
PPC_FUNC_IMPL(__imp__sub_83BAAD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAD18"))) PPC_WEAK_FUNC(sub_83BAAD18);
PPC_FUNC_IMPL(__imp__sub_83BAAD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30200
	ctx.r3.s64 = ctx.r11.s64 + -30200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAD24"))) PPC_WEAK_FUNC(sub_83BAAD24);
PPC_FUNC_IMPL(__imp__sub_83BAAD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAD28"))) PPC_WEAK_FUNC(sub_83BAAD28);
PPC_FUNC_IMPL(__imp__sub_83BAAD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30192
	ctx.r3.s64 = ctx.r11.s64 + -30192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAD34"))) PPC_WEAK_FUNC(sub_83BAAD34);
PPC_FUNC_IMPL(__imp__sub_83BAAD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAD38"))) PPC_WEAK_FUNC(sub_83BAAD38);
PPC_FUNC_IMPL(__imp__sub_83BAAD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30184
	ctx.r3.s64 = ctx.r11.s64 + -30184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAD44"))) PPC_WEAK_FUNC(sub_83BAAD44);
PPC_FUNC_IMPL(__imp__sub_83BAAD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAD48"))) PPC_WEAK_FUNC(sub_83BAAD48);
PPC_FUNC_IMPL(__imp__sub_83BAAD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30176
	ctx.r3.s64 = ctx.r11.s64 + -30176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAD54"))) PPC_WEAK_FUNC(sub_83BAAD54);
PPC_FUNC_IMPL(__imp__sub_83BAAD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAD58"))) PPC_WEAK_FUNC(sub_83BAAD58);
PPC_FUNC_IMPL(__imp__sub_83BAAD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30168
	ctx.r3.s64 = ctx.r11.s64 + -30168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAD64"))) PPC_WEAK_FUNC(sub_83BAAD64);
PPC_FUNC_IMPL(__imp__sub_83BAAD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAD68"))) PPC_WEAK_FUNC(sub_83BAAD68);
PPC_FUNC_IMPL(__imp__sub_83BAAD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30160
	ctx.r3.s64 = ctx.r11.s64 + -30160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAD74"))) PPC_WEAK_FUNC(sub_83BAAD74);
PPC_FUNC_IMPL(__imp__sub_83BAAD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAD78"))) PPC_WEAK_FUNC(sub_83BAAD78);
PPC_FUNC_IMPL(__imp__sub_83BAAD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30152
	ctx.r3.s64 = ctx.r11.s64 + -30152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAD84"))) PPC_WEAK_FUNC(sub_83BAAD84);
PPC_FUNC_IMPL(__imp__sub_83BAAD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAD88"))) PPC_WEAK_FUNC(sub_83BAAD88);
PPC_FUNC_IMPL(__imp__sub_83BAAD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30144
	ctx.r3.s64 = ctx.r11.s64 + -30144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAD94"))) PPC_WEAK_FUNC(sub_83BAAD94);
PPC_FUNC_IMPL(__imp__sub_83BAAD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAD98"))) PPC_WEAK_FUNC(sub_83BAAD98);
PPC_FUNC_IMPL(__imp__sub_83BAAD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30136
	ctx.r3.s64 = ctx.r11.s64 + -30136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAADA4"))) PPC_WEAK_FUNC(sub_83BAADA4);
PPC_FUNC_IMPL(__imp__sub_83BAADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAADA8"))) PPC_WEAK_FUNC(sub_83BAADA8);
PPC_FUNC_IMPL(__imp__sub_83BAADA8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,30488
	ctx.r3.s64 = ctx.r11.s64 + 30488;
	// bl 0x83523120
	ctx.lr = 0x83BAADC0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30128
	ctx.r3.s64 = ctx.r10.s64 + -30128;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAADCC;
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

__attribute__((alias("__imp__sub_83BAADDC"))) PPC_WEAK_FUNC(sub_83BAADDC);
PPC_FUNC_IMPL(__imp__sub_83BAADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAADE0"))) PPC_WEAK_FUNC(sub_83BAADE0);
PPC_FUNC_IMPL(__imp__sub_83BAADE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30504
	ctx.r7.s64 = ctx.r8.s64 + 30504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAAE08"))) PPC_WEAK_FUNC(sub_83BAAE08);
PPC_FUNC_IMPL(__imp__sub_83BAAE08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,32500
	ctx.r6.s64 = ctx.r7.s64 + 32500;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32428(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32428);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30504);
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
	// std r9,32500(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32500, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAAE50"))) PPC_WEAK_FUNC(sub_83BAAE50);
PPC_FUNC_IMPL(__imp__sub_83BAAE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30112
	ctx.r3.s64 = ctx.r11.s64 + -30112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAE5C"))) PPC_WEAK_FUNC(sub_83BAAE5C);
PPC_FUNC_IMPL(__imp__sub_83BAAE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAE60"))) PPC_WEAK_FUNC(sub_83BAAE60);
PPC_FUNC_IMPL(__imp__sub_83BAAE60) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,30512
	ctx.r3.s64 = ctx.r11.s64 + 30512;
	// bl 0x8259af80
	ctx.lr = 0x83BAAE78;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30096
	ctx.r3.s64 = ctx.r10.s64 + -30096;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAAE84;
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

__attribute__((alias("__imp__sub_83BAAE94"))) PPC_WEAK_FUNC(sub_83BAAE94);
PPC_FUNC_IMPL(__imp__sub_83BAAE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAE98"))) PPC_WEAK_FUNC(sub_83BAAE98);
PPC_FUNC_IMPL(__imp__sub_83BAAE98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30492
	ctx.r11.s64 = ctx.r8.s64 + 30492;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,32476(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32476);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30104
	ctx.r3.s64 = ctx.r6.s64 + -30104;
	// stw r10,30492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAEC8"))) PPC_WEAK_FUNC(sub_83BAAEC8);
PPC_FUNC_IMPL(__imp__sub_83BAAEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30088
	ctx.r3.s64 = ctx.r11.s64 + -30088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAED4"))) PPC_WEAK_FUNC(sub_83BAAED4);
PPC_FUNC_IMPL(__imp__sub_83BAAED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAED8"))) PPC_WEAK_FUNC(sub_83BAAED8);
PPC_FUNC_IMPL(__imp__sub_83BAAED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30080
	ctx.r3.s64 = ctx.r11.s64 + -30080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAEE4"))) PPC_WEAK_FUNC(sub_83BAAEE4);
PPC_FUNC_IMPL(__imp__sub_83BAAEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAEE8"))) PPC_WEAK_FUNC(sub_83BAAEE8);
PPC_FUNC_IMPL(__imp__sub_83BAAEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30072
	ctx.r3.s64 = ctx.r11.s64 + -30072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAEF4"))) PPC_WEAK_FUNC(sub_83BAAEF4);
PPC_FUNC_IMPL(__imp__sub_83BAAEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAEF8"))) PPC_WEAK_FUNC(sub_83BAAEF8);
PPC_FUNC_IMPL(__imp__sub_83BAAEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30064
	ctx.r3.s64 = ctx.r11.s64 + -30064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAF04"))) PPC_WEAK_FUNC(sub_83BAAF04);
PPC_FUNC_IMPL(__imp__sub_83BAAF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAF08"))) PPC_WEAK_FUNC(sub_83BAAF08);
PPC_FUNC_IMPL(__imp__sub_83BAAF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30056
	ctx.r3.s64 = ctx.r11.s64 + -30056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAF14"))) PPC_WEAK_FUNC(sub_83BAAF14);
PPC_FUNC_IMPL(__imp__sub_83BAAF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAF18"))) PPC_WEAK_FUNC(sub_83BAAF18);
PPC_FUNC_IMPL(__imp__sub_83BAAF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30048
	ctx.r3.s64 = ctx.r11.s64 + -30048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAF24"))) PPC_WEAK_FUNC(sub_83BAAF24);
PPC_FUNC_IMPL(__imp__sub_83BAAF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAF28"))) PPC_WEAK_FUNC(sub_83BAAF28);
PPC_FUNC_IMPL(__imp__sub_83BAAF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30040
	ctx.r3.s64 = ctx.r11.s64 + -30040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAF34"))) PPC_WEAK_FUNC(sub_83BAAF34);
PPC_FUNC_IMPL(__imp__sub_83BAAF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAF38"))) PPC_WEAK_FUNC(sub_83BAAF38);
PPC_FUNC_IMPL(__imp__sub_83BAAF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30032
	ctx.r3.s64 = ctx.r11.s64 + -30032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAF44"))) PPC_WEAK_FUNC(sub_83BAAF44);
PPC_FUNC_IMPL(__imp__sub_83BAAF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAF48"))) PPC_WEAK_FUNC(sub_83BAAF48);
PPC_FUNC_IMPL(__imp__sub_83BAAF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30024
	ctx.r3.s64 = ctx.r11.s64 + -30024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAF54"))) PPC_WEAK_FUNC(sub_83BAAF54);
PPC_FUNC_IMPL(__imp__sub_83BAAF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAF58"))) PPC_WEAK_FUNC(sub_83BAAF58);
PPC_FUNC_IMPL(__imp__sub_83BAAF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30016
	ctx.r3.s64 = ctx.r11.s64 + -30016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAF64"))) PPC_WEAK_FUNC(sub_83BAAF64);
PPC_FUNC_IMPL(__imp__sub_83BAAF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAF68"))) PPC_WEAK_FUNC(sub_83BAAF68);
PPC_FUNC_IMPL(__imp__sub_83BAAF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30008
	ctx.r3.s64 = ctx.r11.s64 + -30008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAF74"))) PPC_WEAK_FUNC(sub_83BAAF74);
PPC_FUNC_IMPL(__imp__sub_83BAAF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAF78"))) PPC_WEAK_FUNC(sub_83BAAF78);
PPC_FUNC_IMPL(__imp__sub_83BAAF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30000
	ctx.r3.s64 = ctx.r11.s64 + -30000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAAF84"))) PPC_WEAK_FUNC(sub_83BAAF84);
PPC_FUNC_IMPL(__imp__sub_83BAAF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAF88"))) PPC_WEAK_FUNC(sub_83BAAF88);
PPC_FUNC_IMPL(__imp__sub_83BAAF88) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,30856
	ctx.r3.s64 = ctx.r11.s64 + 30856;
	// bl 0x83523120
	ctx.lr = 0x83BAAFA0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29992
	ctx.r3.s64 = ctx.r10.s64 + -29992;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAAFAC;
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

__attribute__((alias("__imp__sub_83BAAFBC"))) PPC_WEAK_FUNC(sub_83BAAFBC);
PPC_FUNC_IMPL(__imp__sub_83BAAFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAAFC0"))) PPC_WEAK_FUNC(sub_83BAAFC0);
PPC_FUNC_IMPL(__imp__sub_83BAAFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30872
	ctx.r7.s64 = ctx.r8.s64 + 30872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30872(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAAFE8"))) PPC_WEAK_FUNC(sub_83BAAFE8);
PPC_FUNC_IMPL(__imp__sub_83BAAFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,32628
	ctx.r6.s64 = ctx.r7.s64 + 32628;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32556(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32556);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30872);
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
	// std r9,32628(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32628, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAB030"))) PPC_WEAK_FUNC(sub_83BAB030);
PPC_FUNC_IMPL(__imp__sub_83BAB030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29976
	ctx.r3.s64 = ctx.r11.s64 + -29976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB03C"))) PPC_WEAK_FUNC(sub_83BAB03C);
PPC_FUNC_IMPL(__imp__sub_83BAB03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB040"))) PPC_WEAK_FUNC(sub_83BAB040);
PPC_FUNC_IMPL(__imp__sub_83BAB040) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,30880
	ctx.r3.s64 = ctx.r11.s64 + 30880;
	// bl 0x8259af80
	ctx.lr = 0x83BAB058;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29960
	ctx.r3.s64 = ctx.r10.s64 + -29960;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAB064;
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

__attribute__((alias("__imp__sub_83BAB074"))) PPC_WEAK_FUNC(sub_83BAB074);
PPC_FUNC_IMPL(__imp__sub_83BAB074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB078"))) PPC_WEAK_FUNC(sub_83BAB078);
PPC_FUNC_IMPL(__imp__sub_83BAB078) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30860
	ctx.r11.s64 = ctx.r8.s64 + 30860;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,32604(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32604);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-29968
	ctx.r3.s64 = ctx.r6.s64 + -29968;
	// stw r10,30860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30860, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB0A8"))) PPC_WEAK_FUNC(sub_83BAB0A8);
PPC_FUNC_IMPL(__imp__sub_83BAB0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29952
	ctx.r3.s64 = ctx.r11.s64 + -29952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB0B4"))) PPC_WEAK_FUNC(sub_83BAB0B4);
PPC_FUNC_IMPL(__imp__sub_83BAB0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB0B8"))) PPC_WEAK_FUNC(sub_83BAB0B8);
PPC_FUNC_IMPL(__imp__sub_83BAB0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29944
	ctx.r3.s64 = ctx.r11.s64 + -29944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB0C4"))) PPC_WEAK_FUNC(sub_83BAB0C4);
PPC_FUNC_IMPL(__imp__sub_83BAB0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB0C8"))) PPC_WEAK_FUNC(sub_83BAB0C8);
PPC_FUNC_IMPL(__imp__sub_83BAB0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29936
	ctx.r3.s64 = ctx.r11.s64 + -29936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB0D4"))) PPC_WEAK_FUNC(sub_83BAB0D4);
PPC_FUNC_IMPL(__imp__sub_83BAB0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB0D8"))) PPC_WEAK_FUNC(sub_83BAB0D8);
PPC_FUNC_IMPL(__imp__sub_83BAB0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29928
	ctx.r3.s64 = ctx.r11.s64 + -29928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB0E4"))) PPC_WEAK_FUNC(sub_83BAB0E4);
PPC_FUNC_IMPL(__imp__sub_83BAB0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB0E8"))) PPC_WEAK_FUNC(sub_83BAB0E8);
PPC_FUNC_IMPL(__imp__sub_83BAB0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29920
	ctx.r3.s64 = ctx.r11.s64 + -29920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB0F4"))) PPC_WEAK_FUNC(sub_83BAB0F4);
PPC_FUNC_IMPL(__imp__sub_83BAB0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB0F8"))) PPC_WEAK_FUNC(sub_83BAB0F8);
PPC_FUNC_IMPL(__imp__sub_83BAB0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29912
	ctx.r3.s64 = ctx.r11.s64 + -29912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB104"))) PPC_WEAK_FUNC(sub_83BAB104);
PPC_FUNC_IMPL(__imp__sub_83BAB104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB108"))) PPC_WEAK_FUNC(sub_83BAB108);
PPC_FUNC_IMPL(__imp__sub_83BAB108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29904
	ctx.r3.s64 = ctx.r11.s64 + -29904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB114"))) PPC_WEAK_FUNC(sub_83BAB114);
PPC_FUNC_IMPL(__imp__sub_83BAB114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB118"))) PPC_WEAK_FUNC(sub_83BAB118);
PPC_FUNC_IMPL(__imp__sub_83BAB118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29896
	ctx.r3.s64 = ctx.r11.s64 + -29896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB124"))) PPC_WEAK_FUNC(sub_83BAB124);
PPC_FUNC_IMPL(__imp__sub_83BAB124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB128"))) PPC_WEAK_FUNC(sub_83BAB128);
PPC_FUNC_IMPL(__imp__sub_83BAB128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29888
	ctx.r3.s64 = ctx.r11.s64 + -29888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB134"))) PPC_WEAK_FUNC(sub_83BAB134);
PPC_FUNC_IMPL(__imp__sub_83BAB134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB138"))) PPC_WEAK_FUNC(sub_83BAB138);
PPC_FUNC_IMPL(__imp__sub_83BAB138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29880
	ctx.r3.s64 = ctx.r11.s64 + -29880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB144"))) PPC_WEAK_FUNC(sub_83BAB144);
PPC_FUNC_IMPL(__imp__sub_83BAB144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB148"))) PPC_WEAK_FUNC(sub_83BAB148);
PPC_FUNC_IMPL(__imp__sub_83BAB148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29872
	ctx.r3.s64 = ctx.r11.s64 + -29872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB154"))) PPC_WEAK_FUNC(sub_83BAB154);
PPC_FUNC_IMPL(__imp__sub_83BAB154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB158"))) PPC_WEAK_FUNC(sub_83BAB158);
PPC_FUNC_IMPL(__imp__sub_83BAB158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29864
	ctx.r3.s64 = ctx.r11.s64 + -29864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB164"))) PPC_WEAK_FUNC(sub_83BAB164);
PPC_FUNC_IMPL(__imp__sub_83BAB164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB168"))) PPC_WEAK_FUNC(sub_83BAB168);
PPC_FUNC_IMPL(__imp__sub_83BAB168) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,31224
	ctx.r3.s64 = ctx.r11.s64 + 31224;
	// bl 0x83523120
	ctx.lr = 0x83BAB180;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29856
	ctx.r3.s64 = ctx.r10.s64 + -29856;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAB18C;
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

__attribute__((alias("__imp__sub_83BAB19C"))) PPC_WEAK_FUNC(sub_83BAB19C);
PPC_FUNC_IMPL(__imp__sub_83BAB19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB1A0"))) PPC_WEAK_FUNC(sub_83BAB1A0);
PPC_FUNC_IMPL(__imp__sub_83BAB1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31240
	ctx.r7.s64 = ctx.r8.s64 + 31240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAB1C8"))) PPC_WEAK_FUNC(sub_83BAB1C8);
PPC_FUNC_IMPL(__imp__sub_83BAB1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,32764
	ctx.r6.s64 = ctx.r7.s64 + 32764;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32692(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32692);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31240);
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
	// std r9,32764(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32764, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAB210"))) PPC_WEAK_FUNC(sub_83BAB210);
PPC_FUNC_IMPL(__imp__sub_83BAB210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29840
	ctx.r3.s64 = ctx.r11.s64 + -29840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB21C"))) PPC_WEAK_FUNC(sub_83BAB21C);
PPC_FUNC_IMPL(__imp__sub_83BAB21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB220"))) PPC_WEAK_FUNC(sub_83BAB220);
PPC_FUNC_IMPL(__imp__sub_83BAB220) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,31248
	ctx.r3.s64 = ctx.r11.s64 + 31248;
	// bl 0x8259af80
	ctx.lr = 0x83BAB238;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29824
	ctx.r3.s64 = ctx.r10.s64 + -29824;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAB244;
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

__attribute__((alias("__imp__sub_83BAB254"))) PPC_WEAK_FUNC(sub_83BAB254);
PPC_FUNC_IMPL(__imp__sub_83BAB254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB258"))) PPC_WEAK_FUNC(sub_83BAB258);
PPC_FUNC_IMPL(__imp__sub_83BAB258) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31228
	ctx.r11.s64 = ctx.r8.s64 + 31228;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,32740(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32740);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-29832
	ctx.r3.s64 = ctx.r6.s64 + -29832;
	// stw r10,31228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31228, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB288"))) PPC_WEAK_FUNC(sub_83BAB288);
PPC_FUNC_IMPL(__imp__sub_83BAB288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29816
	ctx.r3.s64 = ctx.r11.s64 + -29816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB294"))) PPC_WEAK_FUNC(sub_83BAB294);
PPC_FUNC_IMPL(__imp__sub_83BAB294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB298"))) PPC_WEAK_FUNC(sub_83BAB298);
PPC_FUNC_IMPL(__imp__sub_83BAB298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29808
	ctx.r3.s64 = ctx.r11.s64 + -29808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB2A4"))) PPC_WEAK_FUNC(sub_83BAB2A4);
PPC_FUNC_IMPL(__imp__sub_83BAB2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB2A8"))) PPC_WEAK_FUNC(sub_83BAB2A8);
PPC_FUNC_IMPL(__imp__sub_83BAB2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29800
	ctx.r3.s64 = ctx.r11.s64 + -29800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB2B4"))) PPC_WEAK_FUNC(sub_83BAB2B4);
PPC_FUNC_IMPL(__imp__sub_83BAB2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB2B8"))) PPC_WEAK_FUNC(sub_83BAB2B8);
PPC_FUNC_IMPL(__imp__sub_83BAB2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29792
	ctx.r3.s64 = ctx.r11.s64 + -29792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB2C4"))) PPC_WEAK_FUNC(sub_83BAB2C4);
PPC_FUNC_IMPL(__imp__sub_83BAB2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB2C8"))) PPC_WEAK_FUNC(sub_83BAB2C8);
PPC_FUNC_IMPL(__imp__sub_83BAB2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29784
	ctx.r3.s64 = ctx.r11.s64 + -29784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB2D4"))) PPC_WEAK_FUNC(sub_83BAB2D4);
PPC_FUNC_IMPL(__imp__sub_83BAB2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB2D8"))) PPC_WEAK_FUNC(sub_83BAB2D8);
PPC_FUNC_IMPL(__imp__sub_83BAB2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29776
	ctx.r3.s64 = ctx.r11.s64 + -29776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB2E4"))) PPC_WEAK_FUNC(sub_83BAB2E4);
PPC_FUNC_IMPL(__imp__sub_83BAB2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB2E8"))) PPC_WEAK_FUNC(sub_83BAB2E8);
PPC_FUNC_IMPL(__imp__sub_83BAB2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29768
	ctx.r3.s64 = ctx.r11.s64 + -29768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB2F4"))) PPC_WEAK_FUNC(sub_83BAB2F4);
PPC_FUNC_IMPL(__imp__sub_83BAB2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB2F8"))) PPC_WEAK_FUNC(sub_83BAB2F8);
PPC_FUNC_IMPL(__imp__sub_83BAB2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29760
	ctx.r3.s64 = ctx.r11.s64 + -29760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

