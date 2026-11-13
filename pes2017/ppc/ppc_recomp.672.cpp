#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BEE988"))) PPC_WEAK_FUNC(sub_83BEE988);
PPC_FUNC_IMPL(__imp__sub_83BEE988) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24968
	ctx.r7.s64 = ctx.r8.s64 + -24968;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24968);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24968(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24968, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEE9B0"))) PPC_WEAK_FUNC(sub_83BEE9B0);
PPC_FUNC_IMPL(__imp__sub_83BEE9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-5428
	ctx.r6.s64 = ctx.r7.s64 + -5428;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-5500(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -5500);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24968(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24968);
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
	// std r9,-5428(r7)
	PPC_STORE_U64(ctx.r7.u32 + -5428, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEE9F8"))) PPC_WEAK_FUNC(sub_83BEE9F8);
PPC_FUNC_IMPL(__imp__sub_83BEE9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13728
	ctx.r3.s64 = ctx.r11.s64 + -13728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEA04"))) PPC_WEAK_FUNC(sub_83BEEA04);
PPC_FUNC_IMPL(__imp__sub_83BEEA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEA08"))) PPC_WEAK_FUNC(sub_83BEEA08);
PPC_FUNC_IMPL(__imp__sub_83BEEA08) {
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
	// addi r3,r11,-24960
	ctx.r3.s64 = ctx.r11.s64 + -24960;
	// bl 0x8259af80
	ctx.lr = 0x83BEEA20;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-13712
	ctx.r3.s64 = ctx.r10.s64 + -13712;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEEA2C;
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

__attribute__((alias("__imp__sub_83BEEA3C"))) PPC_WEAK_FUNC(sub_83BEEA3C);
PPC_FUNC_IMPL(__imp__sub_83BEEA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEA40"))) PPC_WEAK_FUNC(sub_83BEEA40);
PPC_FUNC_IMPL(__imp__sub_83BEEA40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24980
	ctx.r11.s64 = ctx.r8.s64 + -24980;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-5452(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5452);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13720
	ctx.r3.s64 = ctx.r6.s64 + -13720;
	// stw r10,-24980(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEA70"))) PPC_WEAK_FUNC(sub_83BEEA70);
PPC_FUNC_IMPL(__imp__sub_83BEEA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13704
	ctx.r3.s64 = ctx.r11.s64 + -13704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEA7C"))) PPC_WEAK_FUNC(sub_83BEEA7C);
PPC_FUNC_IMPL(__imp__sub_83BEEA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEA80"))) PPC_WEAK_FUNC(sub_83BEEA80);
PPC_FUNC_IMPL(__imp__sub_83BEEA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13696
	ctx.r3.s64 = ctx.r11.s64 + -13696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEA8C"))) PPC_WEAK_FUNC(sub_83BEEA8C);
PPC_FUNC_IMPL(__imp__sub_83BEEA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEA90"))) PPC_WEAK_FUNC(sub_83BEEA90);
PPC_FUNC_IMPL(__imp__sub_83BEEA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13688
	ctx.r3.s64 = ctx.r11.s64 + -13688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEA9C"))) PPC_WEAK_FUNC(sub_83BEEA9C);
PPC_FUNC_IMPL(__imp__sub_83BEEA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEAA0"))) PPC_WEAK_FUNC(sub_83BEEAA0);
PPC_FUNC_IMPL(__imp__sub_83BEEAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13680
	ctx.r3.s64 = ctx.r11.s64 + -13680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEAAC"))) PPC_WEAK_FUNC(sub_83BEEAAC);
PPC_FUNC_IMPL(__imp__sub_83BEEAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEAB0"))) PPC_WEAK_FUNC(sub_83BEEAB0);
PPC_FUNC_IMPL(__imp__sub_83BEEAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13672
	ctx.r3.s64 = ctx.r11.s64 + -13672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEABC"))) PPC_WEAK_FUNC(sub_83BEEABC);
PPC_FUNC_IMPL(__imp__sub_83BEEABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEAC0"))) PPC_WEAK_FUNC(sub_83BEEAC0);
PPC_FUNC_IMPL(__imp__sub_83BEEAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13664
	ctx.r3.s64 = ctx.r11.s64 + -13664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEACC"))) PPC_WEAK_FUNC(sub_83BEEACC);
PPC_FUNC_IMPL(__imp__sub_83BEEACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEAD0"))) PPC_WEAK_FUNC(sub_83BEEAD0);
PPC_FUNC_IMPL(__imp__sub_83BEEAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13656
	ctx.r3.s64 = ctx.r11.s64 + -13656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEADC"))) PPC_WEAK_FUNC(sub_83BEEADC);
PPC_FUNC_IMPL(__imp__sub_83BEEADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEAE0"))) PPC_WEAK_FUNC(sub_83BEEAE0);
PPC_FUNC_IMPL(__imp__sub_83BEEAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13648
	ctx.r3.s64 = ctx.r11.s64 + -13648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEAEC"))) PPC_WEAK_FUNC(sub_83BEEAEC);
PPC_FUNC_IMPL(__imp__sub_83BEEAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEAF0"))) PPC_WEAK_FUNC(sub_83BEEAF0);
PPC_FUNC_IMPL(__imp__sub_83BEEAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13640
	ctx.r3.s64 = ctx.r11.s64 + -13640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEAFC"))) PPC_WEAK_FUNC(sub_83BEEAFC);
PPC_FUNC_IMPL(__imp__sub_83BEEAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEB00"))) PPC_WEAK_FUNC(sub_83BEEB00);
PPC_FUNC_IMPL(__imp__sub_83BEEB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13632
	ctx.r3.s64 = ctx.r11.s64 + -13632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEB0C"))) PPC_WEAK_FUNC(sub_83BEEB0C);
PPC_FUNC_IMPL(__imp__sub_83BEEB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEB10"))) PPC_WEAK_FUNC(sub_83BEEB10);
PPC_FUNC_IMPL(__imp__sub_83BEEB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13624
	ctx.r3.s64 = ctx.r11.s64 + -13624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEB1C"))) PPC_WEAK_FUNC(sub_83BEEB1C);
PPC_FUNC_IMPL(__imp__sub_83BEEB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEB20"))) PPC_WEAK_FUNC(sub_83BEEB20);
PPC_FUNC_IMPL(__imp__sub_83BEEB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13616
	ctx.r3.s64 = ctx.r11.s64 + -13616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEB2C"))) PPC_WEAK_FUNC(sub_83BEEB2C);
PPC_FUNC_IMPL(__imp__sub_83BEEB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEB30"))) PPC_WEAK_FUNC(sub_83BEEB30);
PPC_FUNC_IMPL(__imp__sub_83BEEB30) {
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
	// addi r3,r11,-24616
	ctx.r3.s64 = ctx.r11.s64 + -24616;
	// bl 0x83523120
	ctx.lr = 0x83BEEB48;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-13608
	ctx.r3.s64 = ctx.r10.s64 + -13608;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEEB54;
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

__attribute__((alias("__imp__sub_83BEEB64"))) PPC_WEAK_FUNC(sub_83BEEB64);
PPC_FUNC_IMPL(__imp__sub_83BEEB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEB68"))) PPC_WEAK_FUNC(sub_83BEEB68);
PPC_FUNC_IMPL(__imp__sub_83BEEB68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24600
	ctx.r7.s64 = ctx.r8.s64 + -24600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24600);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24600, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEEB90"))) PPC_WEAK_FUNC(sub_83BEEB90);
PPC_FUNC_IMPL(__imp__sub_83BEEB90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-5300
	ctx.r6.s64 = ctx.r7.s64 + -5300;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-5372(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -5372);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24600);
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
	// std r9,-5300(r7)
	PPC_STORE_U64(ctx.r7.u32 + -5300, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEEBD8"))) PPC_WEAK_FUNC(sub_83BEEBD8);
PPC_FUNC_IMPL(__imp__sub_83BEEBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13592
	ctx.r3.s64 = ctx.r11.s64 + -13592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEBE4"))) PPC_WEAK_FUNC(sub_83BEEBE4);
PPC_FUNC_IMPL(__imp__sub_83BEEBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEBE8"))) PPC_WEAK_FUNC(sub_83BEEBE8);
PPC_FUNC_IMPL(__imp__sub_83BEEBE8) {
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
	// addi r3,r11,-24592
	ctx.r3.s64 = ctx.r11.s64 + -24592;
	// bl 0x8259af80
	ctx.lr = 0x83BEEC00;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-13576
	ctx.r3.s64 = ctx.r10.s64 + -13576;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEEC0C;
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

__attribute__((alias("__imp__sub_83BEEC1C"))) PPC_WEAK_FUNC(sub_83BEEC1C);
PPC_FUNC_IMPL(__imp__sub_83BEEC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEC20"))) PPC_WEAK_FUNC(sub_83BEEC20);
PPC_FUNC_IMPL(__imp__sub_83BEEC20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24612
	ctx.r11.s64 = ctx.r8.s64 + -24612;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-5324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5324);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13584
	ctx.r3.s64 = ctx.r6.s64 + -13584;
	// stw r10,-24612(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEC50"))) PPC_WEAK_FUNC(sub_83BEEC50);
PPC_FUNC_IMPL(__imp__sub_83BEEC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13568
	ctx.r3.s64 = ctx.r11.s64 + -13568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEC5C"))) PPC_WEAK_FUNC(sub_83BEEC5C);
PPC_FUNC_IMPL(__imp__sub_83BEEC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEC60"))) PPC_WEAK_FUNC(sub_83BEEC60);
PPC_FUNC_IMPL(__imp__sub_83BEEC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13560
	ctx.r3.s64 = ctx.r11.s64 + -13560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEC6C"))) PPC_WEAK_FUNC(sub_83BEEC6C);
PPC_FUNC_IMPL(__imp__sub_83BEEC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEC70"))) PPC_WEAK_FUNC(sub_83BEEC70);
PPC_FUNC_IMPL(__imp__sub_83BEEC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13552
	ctx.r3.s64 = ctx.r11.s64 + -13552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEC7C"))) PPC_WEAK_FUNC(sub_83BEEC7C);
PPC_FUNC_IMPL(__imp__sub_83BEEC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEC80"))) PPC_WEAK_FUNC(sub_83BEEC80);
PPC_FUNC_IMPL(__imp__sub_83BEEC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13544
	ctx.r3.s64 = ctx.r11.s64 + -13544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEC8C"))) PPC_WEAK_FUNC(sub_83BEEC8C);
PPC_FUNC_IMPL(__imp__sub_83BEEC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEC90"))) PPC_WEAK_FUNC(sub_83BEEC90);
PPC_FUNC_IMPL(__imp__sub_83BEEC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13536
	ctx.r3.s64 = ctx.r11.s64 + -13536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEC9C"))) PPC_WEAK_FUNC(sub_83BEEC9C);
PPC_FUNC_IMPL(__imp__sub_83BEEC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEECA0"))) PPC_WEAK_FUNC(sub_83BEECA0);
PPC_FUNC_IMPL(__imp__sub_83BEECA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13528
	ctx.r3.s64 = ctx.r11.s64 + -13528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEECAC"))) PPC_WEAK_FUNC(sub_83BEECAC);
PPC_FUNC_IMPL(__imp__sub_83BEECAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEECB0"))) PPC_WEAK_FUNC(sub_83BEECB0);
PPC_FUNC_IMPL(__imp__sub_83BEECB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13520
	ctx.r3.s64 = ctx.r11.s64 + -13520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEECBC"))) PPC_WEAK_FUNC(sub_83BEECBC);
PPC_FUNC_IMPL(__imp__sub_83BEECBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEECC0"))) PPC_WEAK_FUNC(sub_83BEECC0);
PPC_FUNC_IMPL(__imp__sub_83BEECC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13512
	ctx.r3.s64 = ctx.r11.s64 + -13512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEECCC"))) PPC_WEAK_FUNC(sub_83BEECCC);
PPC_FUNC_IMPL(__imp__sub_83BEECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEECD0"))) PPC_WEAK_FUNC(sub_83BEECD0);
PPC_FUNC_IMPL(__imp__sub_83BEECD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13504
	ctx.r3.s64 = ctx.r11.s64 + -13504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEECDC"))) PPC_WEAK_FUNC(sub_83BEECDC);
PPC_FUNC_IMPL(__imp__sub_83BEECDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEECE0"))) PPC_WEAK_FUNC(sub_83BEECE0);
PPC_FUNC_IMPL(__imp__sub_83BEECE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13496
	ctx.r3.s64 = ctx.r11.s64 + -13496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEECEC"))) PPC_WEAK_FUNC(sub_83BEECEC);
PPC_FUNC_IMPL(__imp__sub_83BEECEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEECF0"))) PPC_WEAK_FUNC(sub_83BEECF0);
PPC_FUNC_IMPL(__imp__sub_83BEECF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13488
	ctx.r3.s64 = ctx.r11.s64 + -13488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEECFC"))) PPC_WEAK_FUNC(sub_83BEECFC);
PPC_FUNC_IMPL(__imp__sub_83BEECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEED00"))) PPC_WEAK_FUNC(sub_83BEED00);
PPC_FUNC_IMPL(__imp__sub_83BEED00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13480
	ctx.r3.s64 = ctx.r11.s64 + -13480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEED0C"))) PPC_WEAK_FUNC(sub_83BEED0C);
PPC_FUNC_IMPL(__imp__sub_83BEED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEED10"))) PPC_WEAK_FUNC(sub_83BEED10);
PPC_FUNC_IMPL(__imp__sub_83BEED10) {
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
	// addi r3,r11,-24248
	ctx.r3.s64 = ctx.r11.s64 + -24248;
	// bl 0x83523120
	ctx.lr = 0x83BEED28;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-13472
	ctx.r3.s64 = ctx.r10.s64 + -13472;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEED34;
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

__attribute__((alias("__imp__sub_83BEED44"))) PPC_WEAK_FUNC(sub_83BEED44);
PPC_FUNC_IMPL(__imp__sub_83BEED44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEED48"))) PPC_WEAK_FUNC(sub_83BEED48);
PPC_FUNC_IMPL(__imp__sub_83BEED48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24232
	ctx.r7.s64 = ctx.r8.s64 + -24232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24232);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24232(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24232, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEED70"))) PPC_WEAK_FUNC(sub_83BEED70);
PPC_FUNC_IMPL(__imp__sub_83BEED70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-5160
	ctx.r6.s64 = ctx.r7.s64 + -5160;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-5232(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -5232);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24232(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24232);
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
	// std r9,-5160(r7)
	PPC_STORE_U64(ctx.r7.u32 + -5160, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEEDB8"))) PPC_WEAK_FUNC(sub_83BEEDB8);
PPC_FUNC_IMPL(__imp__sub_83BEEDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13456
	ctx.r3.s64 = ctx.r11.s64 + -13456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEDC4"))) PPC_WEAK_FUNC(sub_83BEEDC4);
PPC_FUNC_IMPL(__imp__sub_83BEEDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEDC8"))) PPC_WEAK_FUNC(sub_83BEEDC8);
PPC_FUNC_IMPL(__imp__sub_83BEEDC8) {
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
	// addi r3,r11,-24224
	ctx.r3.s64 = ctx.r11.s64 + -24224;
	// bl 0x8259af80
	ctx.lr = 0x83BEEDE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-13440
	ctx.r3.s64 = ctx.r10.s64 + -13440;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEEDEC;
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

__attribute__((alias("__imp__sub_83BEEDFC"))) PPC_WEAK_FUNC(sub_83BEEDFC);
PPC_FUNC_IMPL(__imp__sub_83BEEDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEE00"))) PPC_WEAK_FUNC(sub_83BEEE00);
PPC_FUNC_IMPL(__imp__sub_83BEEE00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24244
	ctx.r11.s64 = ctx.r8.s64 + -24244;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-5184(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5184);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13448
	ctx.r3.s64 = ctx.r6.s64 + -13448;
	// stw r10,-24244(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEE30"))) PPC_WEAK_FUNC(sub_83BEEE30);
PPC_FUNC_IMPL(__imp__sub_83BEEE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13432
	ctx.r3.s64 = ctx.r11.s64 + -13432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEE3C"))) PPC_WEAK_FUNC(sub_83BEEE3C);
PPC_FUNC_IMPL(__imp__sub_83BEEE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEE40"))) PPC_WEAK_FUNC(sub_83BEEE40);
PPC_FUNC_IMPL(__imp__sub_83BEEE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13424
	ctx.r3.s64 = ctx.r11.s64 + -13424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEE4C"))) PPC_WEAK_FUNC(sub_83BEEE4C);
PPC_FUNC_IMPL(__imp__sub_83BEEE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEE50"))) PPC_WEAK_FUNC(sub_83BEEE50);
PPC_FUNC_IMPL(__imp__sub_83BEEE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13416
	ctx.r3.s64 = ctx.r11.s64 + -13416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEE5C"))) PPC_WEAK_FUNC(sub_83BEEE5C);
PPC_FUNC_IMPL(__imp__sub_83BEEE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEE60"))) PPC_WEAK_FUNC(sub_83BEEE60);
PPC_FUNC_IMPL(__imp__sub_83BEEE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13408
	ctx.r3.s64 = ctx.r11.s64 + -13408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEE6C"))) PPC_WEAK_FUNC(sub_83BEEE6C);
PPC_FUNC_IMPL(__imp__sub_83BEEE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEE70"))) PPC_WEAK_FUNC(sub_83BEEE70);
PPC_FUNC_IMPL(__imp__sub_83BEEE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13400
	ctx.r3.s64 = ctx.r11.s64 + -13400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEE7C"))) PPC_WEAK_FUNC(sub_83BEEE7C);
PPC_FUNC_IMPL(__imp__sub_83BEEE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEE80"))) PPC_WEAK_FUNC(sub_83BEEE80);
PPC_FUNC_IMPL(__imp__sub_83BEEE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13392
	ctx.r3.s64 = ctx.r11.s64 + -13392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEE8C"))) PPC_WEAK_FUNC(sub_83BEEE8C);
PPC_FUNC_IMPL(__imp__sub_83BEEE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEE90"))) PPC_WEAK_FUNC(sub_83BEEE90);
PPC_FUNC_IMPL(__imp__sub_83BEEE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13384
	ctx.r3.s64 = ctx.r11.s64 + -13384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEE9C"))) PPC_WEAK_FUNC(sub_83BEEE9C);
PPC_FUNC_IMPL(__imp__sub_83BEEE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEEA0"))) PPC_WEAK_FUNC(sub_83BEEEA0);
PPC_FUNC_IMPL(__imp__sub_83BEEEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13376
	ctx.r3.s64 = ctx.r11.s64 + -13376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEEAC"))) PPC_WEAK_FUNC(sub_83BEEEAC);
PPC_FUNC_IMPL(__imp__sub_83BEEEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEEB0"))) PPC_WEAK_FUNC(sub_83BEEEB0);
PPC_FUNC_IMPL(__imp__sub_83BEEEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13368
	ctx.r3.s64 = ctx.r11.s64 + -13368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEEBC"))) PPC_WEAK_FUNC(sub_83BEEEBC);
PPC_FUNC_IMPL(__imp__sub_83BEEEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEEC0"))) PPC_WEAK_FUNC(sub_83BEEEC0);
PPC_FUNC_IMPL(__imp__sub_83BEEEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13360
	ctx.r3.s64 = ctx.r11.s64 + -13360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEECC"))) PPC_WEAK_FUNC(sub_83BEEECC);
PPC_FUNC_IMPL(__imp__sub_83BEEECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEED0"))) PPC_WEAK_FUNC(sub_83BEEED0);
PPC_FUNC_IMPL(__imp__sub_83BEEED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13352
	ctx.r3.s64 = ctx.r11.s64 + -13352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEEDC"))) PPC_WEAK_FUNC(sub_83BEEEDC);
PPC_FUNC_IMPL(__imp__sub_83BEEEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEEE0"))) PPC_WEAK_FUNC(sub_83BEEEE0);
PPC_FUNC_IMPL(__imp__sub_83BEEEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13344
	ctx.r3.s64 = ctx.r11.s64 + -13344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEEEC"))) PPC_WEAK_FUNC(sub_83BEEEEC);
PPC_FUNC_IMPL(__imp__sub_83BEEEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEEF0"))) PPC_WEAK_FUNC(sub_83BEEEF0);
PPC_FUNC_IMPL(__imp__sub_83BEEEF0) {
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
	// addi r3,r11,-23880
	ctx.r3.s64 = ctx.r11.s64 + -23880;
	// bl 0x83523120
	ctx.lr = 0x83BEEF08;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-13336
	ctx.r3.s64 = ctx.r10.s64 + -13336;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEEF14;
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

__attribute__((alias("__imp__sub_83BEEF24"))) PPC_WEAK_FUNC(sub_83BEEF24);
PPC_FUNC_IMPL(__imp__sub_83BEEF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEF28"))) PPC_WEAK_FUNC(sub_83BEEF28);
PPC_FUNC_IMPL(__imp__sub_83BEEF28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23864
	ctx.r7.s64 = ctx.r8.s64 + -23864;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23864(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23864);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23864(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23864, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEEF50"))) PPC_WEAK_FUNC(sub_83BEEF50);
PPC_FUNC_IMPL(__imp__sub_83BEEF50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-5024
	ctx.r6.s64 = ctx.r7.s64 + -5024;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-5096(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -5096);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23864(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23864);
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
	// std r9,-5024(r7)
	PPC_STORE_U64(ctx.r7.u32 + -5024, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEEF98"))) PPC_WEAK_FUNC(sub_83BEEF98);
PPC_FUNC_IMPL(__imp__sub_83BEEF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13320
	ctx.r3.s64 = ctx.r11.s64 + -13320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEEFA4"))) PPC_WEAK_FUNC(sub_83BEEFA4);
PPC_FUNC_IMPL(__imp__sub_83BEEFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEFA8"))) PPC_WEAK_FUNC(sub_83BEEFA8);
PPC_FUNC_IMPL(__imp__sub_83BEEFA8) {
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
	// addi r3,r11,-23856
	ctx.r3.s64 = ctx.r11.s64 + -23856;
	// bl 0x8259af80
	ctx.lr = 0x83BEEFC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-13304
	ctx.r3.s64 = ctx.r10.s64 + -13304;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEEFCC;
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

__attribute__((alias("__imp__sub_83BEEFDC"))) PPC_WEAK_FUNC(sub_83BEEFDC);
PPC_FUNC_IMPL(__imp__sub_83BEEFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEEFE0"))) PPC_WEAK_FUNC(sub_83BEEFE0);
PPC_FUNC_IMPL(__imp__sub_83BEEFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23876
	ctx.r11.s64 = ctx.r8.s64 + -23876;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-5048(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5048);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13312
	ctx.r3.s64 = ctx.r6.s64 + -13312;
	// stw r10,-23876(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23876, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF010"))) PPC_WEAK_FUNC(sub_83BEF010);
PPC_FUNC_IMPL(__imp__sub_83BEF010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13296
	ctx.r3.s64 = ctx.r11.s64 + -13296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF01C"))) PPC_WEAK_FUNC(sub_83BEF01C);
PPC_FUNC_IMPL(__imp__sub_83BEF01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF020"))) PPC_WEAK_FUNC(sub_83BEF020);
PPC_FUNC_IMPL(__imp__sub_83BEF020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13288
	ctx.r3.s64 = ctx.r11.s64 + -13288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF02C"))) PPC_WEAK_FUNC(sub_83BEF02C);
PPC_FUNC_IMPL(__imp__sub_83BEF02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF030"))) PPC_WEAK_FUNC(sub_83BEF030);
PPC_FUNC_IMPL(__imp__sub_83BEF030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13280
	ctx.r3.s64 = ctx.r11.s64 + -13280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF03C"))) PPC_WEAK_FUNC(sub_83BEF03C);
PPC_FUNC_IMPL(__imp__sub_83BEF03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF040"))) PPC_WEAK_FUNC(sub_83BEF040);
PPC_FUNC_IMPL(__imp__sub_83BEF040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13272
	ctx.r3.s64 = ctx.r11.s64 + -13272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF04C"))) PPC_WEAK_FUNC(sub_83BEF04C);
PPC_FUNC_IMPL(__imp__sub_83BEF04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF050"))) PPC_WEAK_FUNC(sub_83BEF050);
PPC_FUNC_IMPL(__imp__sub_83BEF050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13264
	ctx.r3.s64 = ctx.r11.s64 + -13264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF05C"))) PPC_WEAK_FUNC(sub_83BEF05C);
PPC_FUNC_IMPL(__imp__sub_83BEF05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF060"))) PPC_WEAK_FUNC(sub_83BEF060);
PPC_FUNC_IMPL(__imp__sub_83BEF060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13256
	ctx.r3.s64 = ctx.r11.s64 + -13256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF06C"))) PPC_WEAK_FUNC(sub_83BEF06C);
PPC_FUNC_IMPL(__imp__sub_83BEF06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF070"))) PPC_WEAK_FUNC(sub_83BEF070);
PPC_FUNC_IMPL(__imp__sub_83BEF070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13248
	ctx.r3.s64 = ctx.r11.s64 + -13248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF07C"))) PPC_WEAK_FUNC(sub_83BEF07C);
PPC_FUNC_IMPL(__imp__sub_83BEF07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF080"))) PPC_WEAK_FUNC(sub_83BEF080);
PPC_FUNC_IMPL(__imp__sub_83BEF080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13240
	ctx.r3.s64 = ctx.r11.s64 + -13240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF08C"))) PPC_WEAK_FUNC(sub_83BEF08C);
PPC_FUNC_IMPL(__imp__sub_83BEF08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF090"))) PPC_WEAK_FUNC(sub_83BEF090);
PPC_FUNC_IMPL(__imp__sub_83BEF090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13232
	ctx.r3.s64 = ctx.r11.s64 + -13232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF09C"))) PPC_WEAK_FUNC(sub_83BEF09C);
PPC_FUNC_IMPL(__imp__sub_83BEF09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF0A0"))) PPC_WEAK_FUNC(sub_83BEF0A0);
PPC_FUNC_IMPL(__imp__sub_83BEF0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13224
	ctx.r3.s64 = ctx.r11.s64 + -13224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF0AC"))) PPC_WEAK_FUNC(sub_83BEF0AC);
PPC_FUNC_IMPL(__imp__sub_83BEF0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF0B0"))) PPC_WEAK_FUNC(sub_83BEF0B0);
PPC_FUNC_IMPL(__imp__sub_83BEF0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13216
	ctx.r3.s64 = ctx.r11.s64 + -13216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF0BC"))) PPC_WEAK_FUNC(sub_83BEF0BC);
PPC_FUNC_IMPL(__imp__sub_83BEF0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF0C0"))) PPC_WEAK_FUNC(sub_83BEF0C0);
PPC_FUNC_IMPL(__imp__sub_83BEF0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13208
	ctx.r3.s64 = ctx.r11.s64 + -13208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF0CC"))) PPC_WEAK_FUNC(sub_83BEF0CC);
PPC_FUNC_IMPL(__imp__sub_83BEF0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF0D0"))) PPC_WEAK_FUNC(sub_83BEF0D0);
PPC_FUNC_IMPL(__imp__sub_83BEF0D0) {
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
	// addi r3,r11,-23512
	ctx.r3.s64 = ctx.r11.s64 + -23512;
	// bl 0x83523120
	ctx.lr = 0x83BEF0E8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-13200
	ctx.r3.s64 = ctx.r10.s64 + -13200;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEF0F4;
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

__attribute__((alias("__imp__sub_83BEF104"))) PPC_WEAK_FUNC(sub_83BEF104);
PPC_FUNC_IMPL(__imp__sub_83BEF104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF108"))) PPC_WEAK_FUNC(sub_83BEF108);
PPC_FUNC_IMPL(__imp__sub_83BEF108) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23496
	ctx.r7.s64 = ctx.r8.s64 + -23496;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23496);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23496(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23496, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEF130"))) PPC_WEAK_FUNC(sub_83BEF130);
PPC_FUNC_IMPL(__imp__sub_83BEF130) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-4764
	ctx.r6.s64 = ctx.r7.s64 + -4764;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4836(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4836);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23496(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23496);
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
	// std r9,-4764(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4764, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEF178"))) PPC_WEAK_FUNC(sub_83BEF178);
PPC_FUNC_IMPL(__imp__sub_83BEF178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13184
	ctx.r3.s64 = ctx.r11.s64 + -13184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF184"))) PPC_WEAK_FUNC(sub_83BEF184);
PPC_FUNC_IMPL(__imp__sub_83BEF184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF188"))) PPC_WEAK_FUNC(sub_83BEF188);
PPC_FUNC_IMPL(__imp__sub_83BEF188) {
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
	// addi r3,r11,-23488
	ctx.r3.s64 = ctx.r11.s64 + -23488;
	// bl 0x8259af80
	ctx.lr = 0x83BEF1A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-13168
	ctx.r3.s64 = ctx.r10.s64 + -13168;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEF1AC;
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

__attribute__((alias("__imp__sub_83BEF1BC"))) PPC_WEAK_FUNC(sub_83BEF1BC);
PPC_FUNC_IMPL(__imp__sub_83BEF1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF1C0"))) PPC_WEAK_FUNC(sub_83BEF1C0);
PPC_FUNC_IMPL(__imp__sub_83BEF1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23508
	ctx.r11.s64 = ctx.r8.s64 + -23508;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-4788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4788);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13176
	ctx.r3.s64 = ctx.r6.s64 + -13176;
	// stw r10,-23508(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23508, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF1F0"))) PPC_WEAK_FUNC(sub_83BEF1F0);
PPC_FUNC_IMPL(__imp__sub_83BEF1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13160
	ctx.r3.s64 = ctx.r11.s64 + -13160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF1FC"))) PPC_WEAK_FUNC(sub_83BEF1FC);
PPC_FUNC_IMPL(__imp__sub_83BEF1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF200"))) PPC_WEAK_FUNC(sub_83BEF200);
PPC_FUNC_IMPL(__imp__sub_83BEF200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13152
	ctx.r3.s64 = ctx.r11.s64 + -13152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF20C"))) PPC_WEAK_FUNC(sub_83BEF20C);
PPC_FUNC_IMPL(__imp__sub_83BEF20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF210"))) PPC_WEAK_FUNC(sub_83BEF210);
PPC_FUNC_IMPL(__imp__sub_83BEF210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13144
	ctx.r3.s64 = ctx.r11.s64 + -13144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF21C"))) PPC_WEAK_FUNC(sub_83BEF21C);
PPC_FUNC_IMPL(__imp__sub_83BEF21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF220"))) PPC_WEAK_FUNC(sub_83BEF220);
PPC_FUNC_IMPL(__imp__sub_83BEF220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13136
	ctx.r3.s64 = ctx.r11.s64 + -13136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF22C"))) PPC_WEAK_FUNC(sub_83BEF22C);
PPC_FUNC_IMPL(__imp__sub_83BEF22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF230"))) PPC_WEAK_FUNC(sub_83BEF230);
PPC_FUNC_IMPL(__imp__sub_83BEF230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13128
	ctx.r3.s64 = ctx.r11.s64 + -13128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF23C"))) PPC_WEAK_FUNC(sub_83BEF23C);
PPC_FUNC_IMPL(__imp__sub_83BEF23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF240"))) PPC_WEAK_FUNC(sub_83BEF240);
PPC_FUNC_IMPL(__imp__sub_83BEF240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13120
	ctx.r3.s64 = ctx.r11.s64 + -13120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF24C"))) PPC_WEAK_FUNC(sub_83BEF24C);
PPC_FUNC_IMPL(__imp__sub_83BEF24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF250"))) PPC_WEAK_FUNC(sub_83BEF250);
PPC_FUNC_IMPL(__imp__sub_83BEF250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13112
	ctx.r3.s64 = ctx.r11.s64 + -13112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF25C"))) PPC_WEAK_FUNC(sub_83BEF25C);
PPC_FUNC_IMPL(__imp__sub_83BEF25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF260"))) PPC_WEAK_FUNC(sub_83BEF260);
PPC_FUNC_IMPL(__imp__sub_83BEF260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13104
	ctx.r3.s64 = ctx.r11.s64 + -13104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF26C"))) PPC_WEAK_FUNC(sub_83BEF26C);
PPC_FUNC_IMPL(__imp__sub_83BEF26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF270"))) PPC_WEAK_FUNC(sub_83BEF270);
PPC_FUNC_IMPL(__imp__sub_83BEF270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13096
	ctx.r3.s64 = ctx.r11.s64 + -13096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF27C"))) PPC_WEAK_FUNC(sub_83BEF27C);
PPC_FUNC_IMPL(__imp__sub_83BEF27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF280"))) PPC_WEAK_FUNC(sub_83BEF280);
PPC_FUNC_IMPL(__imp__sub_83BEF280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13088
	ctx.r3.s64 = ctx.r11.s64 + -13088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF28C"))) PPC_WEAK_FUNC(sub_83BEF28C);
PPC_FUNC_IMPL(__imp__sub_83BEF28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF290"))) PPC_WEAK_FUNC(sub_83BEF290);
PPC_FUNC_IMPL(__imp__sub_83BEF290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13080
	ctx.r3.s64 = ctx.r11.s64 + -13080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF29C"))) PPC_WEAK_FUNC(sub_83BEF29C);
PPC_FUNC_IMPL(__imp__sub_83BEF29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF2A0"))) PPC_WEAK_FUNC(sub_83BEF2A0);
PPC_FUNC_IMPL(__imp__sub_83BEF2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13072
	ctx.r3.s64 = ctx.r11.s64 + -13072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF2AC"))) PPC_WEAK_FUNC(sub_83BEF2AC);
PPC_FUNC_IMPL(__imp__sub_83BEF2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF2B0"))) PPC_WEAK_FUNC(sub_83BEF2B0);
PPC_FUNC_IMPL(__imp__sub_83BEF2B0) {
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
	// addi r3,r11,-23144
	ctx.r3.s64 = ctx.r11.s64 + -23144;
	// bl 0x83523120
	ctx.lr = 0x83BEF2C8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-13064
	ctx.r3.s64 = ctx.r10.s64 + -13064;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEF2D4;
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

__attribute__((alias("__imp__sub_83BEF2E4"))) PPC_WEAK_FUNC(sub_83BEF2E4);
PPC_FUNC_IMPL(__imp__sub_83BEF2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF2E8"))) PPC_WEAK_FUNC(sub_83BEF2E8);
PPC_FUNC_IMPL(__imp__sub_83BEF2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23128
	ctx.r7.s64 = ctx.r8.s64 + -23128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23128);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23128(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23128, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEF310"))) PPC_WEAK_FUNC(sub_83BEF310);
PPC_FUNC_IMPL(__imp__sub_83BEF310) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-4608
	ctx.r6.s64 = ctx.r7.s64 + -4608;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4680(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4680);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23128);
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
	// std r9,-4608(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4608, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEF358"))) PPC_WEAK_FUNC(sub_83BEF358);
PPC_FUNC_IMPL(__imp__sub_83BEF358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13048
	ctx.r3.s64 = ctx.r11.s64 + -13048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF364"))) PPC_WEAK_FUNC(sub_83BEF364);
PPC_FUNC_IMPL(__imp__sub_83BEF364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF368"))) PPC_WEAK_FUNC(sub_83BEF368);
PPC_FUNC_IMPL(__imp__sub_83BEF368) {
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
	// addi r3,r11,-23120
	ctx.r3.s64 = ctx.r11.s64 + -23120;
	// bl 0x8259af80
	ctx.lr = 0x83BEF380;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-13032
	ctx.r3.s64 = ctx.r10.s64 + -13032;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEF38C;
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

__attribute__((alias("__imp__sub_83BEF39C"))) PPC_WEAK_FUNC(sub_83BEF39C);
PPC_FUNC_IMPL(__imp__sub_83BEF39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF3A0"))) PPC_WEAK_FUNC(sub_83BEF3A0);
PPC_FUNC_IMPL(__imp__sub_83BEF3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23140
	ctx.r11.s64 = ctx.r8.s64 + -23140;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-4632(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4632);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13040
	ctx.r3.s64 = ctx.r6.s64 + -13040;
	// stw r10,-23140(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF3D0"))) PPC_WEAK_FUNC(sub_83BEF3D0);
PPC_FUNC_IMPL(__imp__sub_83BEF3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13024
	ctx.r3.s64 = ctx.r11.s64 + -13024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF3DC"))) PPC_WEAK_FUNC(sub_83BEF3DC);
PPC_FUNC_IMPL(__imp__sub_83BEF3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF3E0"))) PPC_WEAK_FUNC(sub_83BEF3E0);
PPC_FUNC_IMPL(__imp__sub_83BEF3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13016
	ctx.r3.s64 = ctx.r11.s64 + -13016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF3EC"))) PPC_WEAK_FUNC(sub_83BEF3EC);
PPC_FUNC_IMPL(__imp__sub_83BEF3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF3F0"))) PPC_WEAK_FUNC(sub_83BEF3F0);
PPC_FUNC_IMPL(__imp__sub_83BEF3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13008
	ctx.r3.s64 = ctx.r11.s64 + -13008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF3FC"))) PPC_WEAK_FUNC(sub_83BEF3FC);
PPC_FUNC_IMPL(__imp__sub_83BEF3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF400"))) PPC_WEAK_FUNC(sub_83BEF400);
PPC_FUNC_IMPL(__imp__sub_83BEF400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-13000
	ctx.r3.s64 = ctx.r11.s64 + -13000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF40C"))) PPC_WEAK_FUNC(sub_83BEF40C);
PPC_FUNC_IMPL(__imp__sub_83BEF40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF410"))) PPC_WEAK_FUNC(sub_83BEF410);
PPC_FUNC_IMPL(__imp__sub_83BEF410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12992
	ctx.r3.s64 = ctx.r11.s64 + -12992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF41C"))) PPC_WEAK_FUNC(sub_83BEF41C);
PPC_FUNC_IMPL(__imp__sub_83BEF41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF420"))) PPC_WEAK_FUNC(sub_83BEF420);
PPC_FUNC_IMPL(__imp__sub_83BEF420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12984
	ctx.r3.s64 = ctx.r11.s64 + -12984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF42C"))) PPC_WEAK_FUNC(sub_83BEF42C);
PPC_FUNC_IMPL(__imp__sub_83BEF42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF430"))) PPC_WEAK_FUNC(sub_83BEF430);
PPC_FUNC_IMPL(__imp__sub_83BEF430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12976
	ctx.r3.s64 = ctx.r11.s64 + -12976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF43C"))) PPC_WEAK_FUNC(sub_83BEF43C);
PPC_FUNC_IMPL(__imp__sub_83BEF43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF440"))) PPC_WEAK_FUNC(sub_83BEF440);
PPC_FUNC_IMPL(__imp__sub_83BEF440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12968
	ctx.r3.s64 = ctx.r11.s64 + -12968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF44C"))) PPC_WEAK_FUNC(sub_83BEF44C);
PPC_FUNC_IMPL(__imp__sub_83BEF44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF450"))) PPC_WEAK_FUNC(sub_83BEF450);
PPC_FUNC_IMPL(__imp__sub_83BEF450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12960
	ctx.r3.s64 = ctx.r11.s64 + -12960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF45C"))) PPC_WEAK_FUNC(sub_83BEF45C);
PPC_FUNC_IMPL(__imp__sub_83BEF45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF460"))) PPC_WEAK_FUNC(sub_83BEF460);
PPC_FUNC_IMPL(__imp__sub_83BEF460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12952
	ctx.r3.s64 = ctx.r11.s64 + -12952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF46C"))) PPC_WEAK_FUNC(sub_83BEF46C);
PPC_FUNC_IMPL(__imp__sub_83BEF46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF470"))) PPC_WEAK_FUNC(sub_83BEF470);
PPC_FUNC_IMPL(__imp__sub_83BEF470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12944
	ctx.r3.s64 = ctx.r11.s64 + -12944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF47C"))) PPC_WEAK_FUNC(sub_83BEF47C);
PPC_FUNC_IMPL(__imp__sub_83BEF47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF480"))) PPC_WEAK_FUNC(sub_83BEF480);
PPC_FUNC_IMPL(__imp__sub_83BEF480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12936
	ctx.r3.s64 = ctx.r11.s64 + -12936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF48C"))) PPC_WEAK_FUNC(sub_83BEF48C);
PPC_FUNC_IMPL(__imp__sub_83BEF48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF490"))) PPC_WEAK_FUNC(sub_83BEF490);
PPC_FUNC_IMPL(__imp__sub_83BEF490) {
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
	// addi r3,r11,-22776
	ctx.r3.s64 = ctx.r11.s64 + -22776;
	// bl 0x83523120
	ctx.lr = 0x83BEF4A8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12928
	ctx.r3.s64 = ctx.r10.s64 + -12928;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEF4B4;
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

__attribute__((alias("__imp__sub_83BEF4C4"))) PPC_WEAK_FUNC(sub_83BEF4C4);
PPC_FUNC_IMPL(__imp__sub_83BEF4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF4C8"))) PPC_WEAK_FUNC(sub_83BEF4C8);
PPC_FUNC_IMPL(__imp__sub_83BEF4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22760
	ctx.r7.s64 = ctx.r8.s64 + -22760;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22760(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22760);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22760, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEF4F0"))) PPC_WEAK_FUNC(sub_83BEF4F0);
PPC_FUNC_IMPL(__imp__sub_83BEF4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-4464
	ctx.r6.s64 = ctx.r7.s64 + -4464;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4536(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4536);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22760(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22760);
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
	// std r9,-4464(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4464, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEF538"))) PPC_WEAK_FUNC(sub_83BEF538);
PPC_FUNC_IMPL(__imp__sub_83BEF538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12912
	ctx.r3.s64 = ctx.r11.s64 + -12912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF544"))) PPC_WEAK_FUNC(sub_83BEF544);
PPC_FUNC_IMPL(__imp__sub_83BEF544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF548"))) PPC_WEAK_FUNC(sub_83BEF548);
PPC_FUNC_IMPL(__imp__sub_83BEF548) {
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
	// addi r3,r11,-22752
	ctx.r3.s64 = ctx.r11.s64 + -22752;
	// bl 0x8259af80
	ctx.lr = 0x83BEF560;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12896
	ctx.r3.s64 = ctx.r10.s64 + -12896;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEF56C;
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

__attribute__((alias("__imp__sub_83BEF57C"))) PPC_WEAK_FUNC(sub_83BEF57C);
PPC_FUNC_IMPL(__imp__sub_83BEF57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF580"))) PPC_WEAK_FUNC(sub_83BEF580);
PPC_FUNC_IMPL(__imp__sub_83BEF580) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22772
	ctx.r11.s64 = ctx.r8.s64 + -22772;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-4488(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4488);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12904
	ctx.r3.s64 = ctx.r6.s64 + -12904;
	// stw r10,-22772(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22772, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF5B0"))) PPC_WEAK_FUNC(sub_83BEF5B0);
PPC_FUNC_IMPL(__imp__sub_83BEF5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12888
	ctx.r3.s64 = ctx.r11.s64 + -12888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF5BC"))) PPC_WEAK_FUNC(sub_83BEF5BC);
PPC_FUNC_IMPL(__imp__sub_83BEF5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF5C0"))) PPC_WEAK_FUNC(sub_83BEF5C0);
PPC_FUNC_IMPL(__imp__sub_83BEF5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12880
	ctx.r3.s64 = ctx.r11.s64 + -12880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF5CC"))) PPC_WEAK_FUNC(sub_83BEF5CC);
PPC_FUNC_IMPL(__imp__sub_83BEF5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF5D0"))) PPC_WEAK_FUNC(sub_83BEF5D0);
PPC_FUNC_IMPL(__imp__sub_83BEF5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12872
	ctx.r3.s64 = ctx.r11.s64 + -12872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF5DC"))) PPC_WEAK_FUNC(sub_83BEF5DC);
PPC_FUNC_IMPL(__imp__sub_83BEF5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF5E0"))) PPC_WEAK_FUNC(sub_83BEF5E0);
PPC_FUNC_IMPL(__imp__sub_83BEF5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12864
	ctx.r3.s64 = ctx.r11.s64 + -12864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF5EC"))) PPC_WEAK_FUNC(sub_83BEF5EC);
PPC_FUNC_IMPL(__imp__sub_83BEF5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF5F0"))) PPC_WEAK_FUNC(sub_83BEF5F0);
PPC_FUNC_IMPL(__imp__sub_83BEF5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12856
	ctx.r3.s64 = ctx.r11.s64 + -12856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF5FC"))) PPC_WEAK_FUNC(sub_83BEF5FC);
PPC_FUNC_IMPL(__imp__sub_83BEF5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF600"))) PPC_WEAK_FUNC(sub_83BEF600);
PPC_FUNC_IMPL(__imp__sub_83BEF600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12848
	ctx.r3.s64 = ctx.r11.s64 + -12848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF60C"))) PPC_WEAK_FUNC(sub_83BEF60C);
PPC_FUNC_IMPL(__imp__sub_83BEF60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF610"))) PPC_WEAK_FUNC(sub_83BEF610);
PPC_FUNC_IMPL(__imp__sub_83BEF610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12840
	ctx.r3.s64 = ctx.r11.s64 + -12840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF61C"))) PPC_WEAK_FUNC(sub_83BEF61C);
PPC_FUNC_IMPL(__imp__sub_83BEF61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF620"))) PPC_WEAK_FUNC(sub_83BEF620);
PPC_FUNC_IMPL(__imp__sub_83BEF620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12832
	ctx.r3.s64 = ctx.r11.s64 + -12832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF62C"))) PPC_WEAK_FUNC(sub_83BEF62C);
PPC_FUNC_IMPL(__imp__sub_83BEF62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF630"))) PPC_WEAK_FUNC(sub_83BEF630);
PPC_FUNC_IMPL(__imp__sub_83BEF630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12824
	ctx.r3.s64 = ctx.r11.s64 + -12824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF63C"))) PPC_WEAK_FUNC(sub_83BEF63C);
PPC_FUNC_IMPL(__imp__sub_83BEF63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF640"))) PPC_WEAK_FUNC(sub_83BEF640);
PPC_FUNC_IMPL(__imp__sub_83BEF640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12816
	ctx.r3.s64 = ctx.r11.s64 + -12816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF64C"))) PPC_WEAK_FUNC(sub_83BEF64C);
PPC_FUNC_IMPL(__imp__sub_83BEF64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF650"))) PPC_WEAK_FUNC(sub_83BEF650);
PPC_FUNC_IMPL(__imp__sub_83BEF650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12808
	ctx.r3.s64 = ctx.r11.s64 + -12808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF65C"))) PPC_WEAK_FUNC(sub_83BEF65C);
PPC_FUNC_IMPL(__imp__sub_83BEF65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF660"))) PPC_WEAK_FUNC(sub_83BEF660);
PPC_FUNC_IMPL(__imp__sub_83BEF660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12800
	ctx.r3.s64 = ctx.r11.s64 + -12800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF66C"))) PPC_WEAK_FUNC(sub_83BEF66C);
PPC_FUNC_IMPL(__imp__sub_83BEF66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF670"))) PPC_WEAK_FUNC(sub_83BEF670);
PPC_FUNC_IMPL(__imp__sub_83BEF670) {
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
	// addi r3,r11,-22408
	ctx.r3.s64 = ctx.r11.s64 + -22408;
	// bl 0x83523120
	ctx.lr = 0x83BEF688;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12792
	ctx.r3.s64 = ctx.r10.s64 + -12792;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEF694;
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

__attribute__((alias("__imp__sub_83BEF6A4"))) PPC_WEAK_FUNC(sub_83BEF6A4);
PPC_FUNC_IMPL(__imp__sub_83BEF6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF6A8"))) PPC_WEAK_FUNC(sub_83BEF6A8);
PPC_FUNC_IMPL(__imp__sub_83BEF6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22392
	ctx.r7.s64 = ctx.r8.s64 + -22392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22392);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22392(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22392, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEF6D0"))) PPC_WEAK_FUNC(sub_83BEF6D0);
PPC_FUNC_IMPL(__imp__sub_83BEF6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-4212
	ctx.r6.s64 = ctx.r7.s64 + -4212;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4284(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4284);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22392(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22392);
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
	// std r9,-4212(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4212, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEF718"))) PPC_WEAK_FUNC(sub_83BEF718);
PPC_FUNC_IMPL(__imp__sub_83BEF718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12776
	ctx.r3.s64 = ctx.r11.s64 + -12776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF724"))) PPC_WEAK_FUNC(sub_83BEF724);
PPC_FUNC_IMPL(__imp__sub_83BEF724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF728"))) PPC_WEAK_FUNC(sub_83BEF728);
PPC_FUNC_IMPL(__imp__sub_83BEF728) {
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
	// addi r3,r11,-22384
	ctx.r3.s64 = ctx.r11.s64 + -22384;
	// bl 0x8259af80
	ctx.lr = 0x83BEF740;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12760
	ctx.r3.s64 = ctx.r10.s64 + -12760;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEF74C;
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

__attribute__((alias("__imp__sub_83BEF75C"))) PPC_WEAK_FUNC(sub_83BEF75C);
PPC_FUNC_IMPL(__imp__sub_83BEF75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF760"))) PPC_WEAK_FUNC(sub_83BEF760);
PPC_FUNC_IMPL(__imp__sub_83BEF760) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22404
	ctx.r11.s64 = ctx.r8.s64 + -22404;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-4236(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4236);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12768
	ctx.r3.s64 = ctx.r6.s64 + -12768;
	// stw r10,-22404(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF790"))) PPC_WEAK_FUNC(sub_83BEF790);
PPC_FUNC_IMPL(__imp__sub_83BEF790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12752
	ctx.r3.s64 = ctx.r11.s64 + -12752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF79C"))) PPC_WEAK_FUNC(sub_83BEF79C);
PPC_FUNC_IMPL(__imp__sub_83BEF79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF7A0"))) PPC_WEAK_FUNC(sub_83BEF7A0);
PPC_FUNC_IMPL(__imp__sub_83BEF7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12744
	ctx.r3.s64 = ctx.r11.s64 + -12744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF7AC"))) PPC_WEAK_FUNC(sub_83BEF7AC);
PPC_FUNC_IMPL(__imp__sub_83BEF7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF7B0"))) PPC_WEAK_FUNC(sub_83BEF7B0);
PPC_FUNC_IMPL(__imp__sub_83BEF7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF7BC"))) PPC_WEAK_FUNC(sub_83BEF7BC);
PPC_FUNC_IMPL(__imp__sub_83BEF7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF7C0"))) PPC_WEAK_FUNC(sub_83BEF7C0);
PPC_FUNC_IMPL(__imp__sub_83BEF7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12728
	ctx.r3.s64 = ctx.r11.s64 + -12728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF7CC"))) PPC_WEAK_FUNC(sub_83BEF7CC);
PPC_FUNC_IMPL(__imp__sub_83BEF7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF7D0"))) PPC_WEAK_FUNC(sub_83BEF7D0);
PPC_FUNC_IMPL(__imp__sub_83BEF7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12720
	ctx.r3.s64 = ctx.r11.s64 + -12720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF7DC"))) PPC_WEAK_FUNC(sub_83BEF7DC);
PPC_FUNC_IMPL(__imp__sub_83BEF7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF7E0"))) PPC_WEAK_FUNC(sub_83BEF7E0);
PPC_FUNC_IMPL(__imp__sub_83BEF7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12712
	ctx.r3.s64 = ctx.r11.s64 + -12712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF7EC"))) PPC_WEAK_FUNC(sub_83BEF7EC);
PPC_FUNC_IMPL(__imp__sub_83BEF7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF7F0"))) PPC_WEAK_FUNC(sub_83BEF7F0);
PPC_FUNC_IMPL(__imp__sub_83BEF7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12704
	ctx.r3.s64 = ctx.r11.s64 + -12704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF7FC"))) PPC_WEAK_FUNC(sub_83BEF7FC);
PPC_FUNC_IMPL(__imp__sub_83BEF7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF800"))) PPC_WEAK_FUNC(sub_83BEF800);
PPC_FUNC_IMPL(__imp__sub_83BEF800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12696
	ctx.r3.s64 = ctx.r11.s64 + -12696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF80C"))) PPC_WEAK_FUNC(sub_83BEF80C);
PPC_FUNC_IMPL(__imp__sub_83BEF80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF810"))) PPC_WEAK_FUNC(sub_83BEF810);
PPC_FUNC_IMPL(__imp__sub_83BEF810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12688
	ctx.r3.s64 = ctx.r11.s64 + -12688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF81C"))) PPC_WEAK_FUNC(sub_83BEF81C);
PPC_FUNC_IMPL(__imp__sub_83BEF81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

