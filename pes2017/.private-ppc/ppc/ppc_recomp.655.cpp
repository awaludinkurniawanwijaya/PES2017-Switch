#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BDA430"))) PPC_WEAK_FUNC(sub_83BDA430);
PPC_FUNC_IMPL(__imp__sub_83BDA430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25696
	ctx.r3.s64 = ctx.r11.s64 + 25696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA43C"))) PPC_WEAK_FUNC(sub_83BDA43C);
PPC_FUNC_IMPL(__imp__sub_83BDA43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA440"))) PPC_WEAK_FUNC(sub_83BDA440);
PPC_FUNC_IMPL(__imp__sub_83BDA440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25704
	ctx.r3.s64 = ctx.r11.s64 + 25704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA44C"))) PPC_WEAK_FUNC(sub_83BDA44C);
PPC_FUNC_IMPL(__imp__sub_83BDA44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA450"))) PPC_WEAK_FUNC(sub_83BDA450);
PPC_FUNC_IMPL(__imp__sub_83BDA450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25712
	ctx.r3.s64 = ctx.r11.s64 + 25712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA45C"))) PPC_WEAK_FUNC(sub_83BDA45C);
PPC_FUNC_IMPL(__imp__sub_83BDA45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA460"))) PPC_WEAK_FUNC(sub_83BDA460);
PPC_FUNC_IMPL(__imp__sub_83BDA460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25720
	ctx.r3.s64 = ctx.r11.s64 + 25720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA46C"))) PPC_WEAK_FUNC(sub_83BDA46C);
PPC_FUNC_IMPL(__imp__sub_83BDA46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA470"))) PPC_WEAK_FUNC(sub_83BDA470);
PPC_FUNC_IMPL(__imp__sub_83BDA470) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-24592
	ctx.r3.s64 = ctx.r11.s64 + -24592;
	// bl 0x83523120
	ctx.lr = 0x83BDA488;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25728
	ctx.r3.s64 = ctx.r10.s64 + 25728;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDA494;
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

__attribute__((alias("__imp__sub_83BDA4A4"))) PPC_WEAK_FUNC(sub_83BDA4A4);
PPC_FUNC_IMPL(__imp__sub_83BDA4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA4A8"))) PPC_WEAK_FUNC(sub_83BDA4A8);
PPC_FUNC_IMPL(__imp__sub_83BDA4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24576
	ctx.r7.s64 = ctx.r8.s64 + -24576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24576(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24576);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24576(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24576, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDA4D0"))) PPC_WEAK_FUNC(sub_83BDA4D0);
PPC_FUNC_IMPL(__imp__sub_83BDA4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-28560
	ctx.r6.s64 = ctx.r7.s64 + -28560;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28632(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28632);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24576(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24576);
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
	// std r9,-28560(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28560, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDA518"))) PPC_WEAK_FUNC(sub_83BDA518);
PPC_FUNC_IMPL(__imp__sub_83BDA518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25744
	ctx.r3.s64 = ctx.r11.s64 + 25744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA524"))) PPC_WEAK_FUNC(sub_83BDA524);
PPC_FUNC_IMPL(__imp__sub_83BDA524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA528"))) PPC_WEAK_FUNC(sub_83BDA528);
PPC_FUNC_IMPL(__imp__sub_83BDA528) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-24568
	ctx.r3.s64 = ctx.r11.s64 + -24568;
	// bl 0x8259af80
	ctx.lr = 0x83BDA540;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25760
	ctx.r3.s64 = ctx.r10.s64 + 25760;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDA54C;
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

__attribute__((alias("__imp__sub_83BDA55C"))) PPC_WEAK_FUNC(sub_83BDA55C);
PPC_FUNC_IMPL(__imp__sub_83BDA55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA560"))) PPC_WEAK_FUNC(sub_83BDA560);
PPC_FUNC_IMPL(__imp__sub_83BDA560) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24588
	ctx.r11.s64 = ctx.r8.s64 + -24588;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-28584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28584);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25752
	ctx.r3.s64 = ctx.r6.s64 + 25752;
	// stw r10,-24588(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24588, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA590"))) PPC_WEAK_FUNC(sub_83BDA590);
PPC_FUNC_IMPL(__imp__sub_83BDA590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25768
	ctx.r3.s64 = ctx.r11.s64 + 25768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA59C"))) PPC_WEAK_FUNC(sub_83BDA59C);
PPC_FUNC_IMPL(__imp__sub_83BDA59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA5A0"))) PPC_WEAK_FUNC(sub_83BDA5A0);
PPC_FUNC_IMPL(__imp__sub_83BDA5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25776
	ctx.r3.s64 = ctx.r11.s64 + 25776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA5AC"))) PPC_WEAK_FUNC(sub_83BDA5AC);
PPC_FUNC_IMPL(__imp__sub_83BDA5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA5B0"))) PPC_WEAK_FUNC(sub_83BDA5B0);
PPC_FUNC_IMPL(__imp__sub_83BDA5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25784
	ctx.r3.s64 = ctx.r11.s64 + 25784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA5BC"))) PPC_WEAK_FUNC(sub_83BDA5BC);
PPC_FUNC_IMPL(__imp__sub_83BDA5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA5C0"))) PPC_WEAK_FUNC(sub_83BDA5C0);
PPC_FUNC_IMPL(__imp__sub_83BDA5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25792
	ctx.r3.s64 = ctx.r11.s64 + 25792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA5CC"))) PPC_WEAK_FUNC(sub_83BDA5CC);
PPC_FUNC_IMPL(__imp__sub_83BDA5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA5D0"))) PPC_WEAK_FUNC(sub_83BDA5D0);
PPC_FUNC_IMPL(__imp__sub_83BDA5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25800
	ctx.r3.s64 = ctx.r11.s64 + 25800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA5DC"))) PPC_WEAK_FUNC(sub_83BDA5DC);
PPC_FUNC_IMPL(__imp__sub_83BDA5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA5E0"))) PPC_WEAK_FUNC(sub_83BDA5E0);
PPC_FUNC_IMPL(__imp__sub_83BDA5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25808
	ctx.r3.s64 = ctx.r11.s64 + 25808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA5EC"))) PPC_WEAK_FUNC(sub_83BDA5EC);
PPC_FUNC_IMPL(__imp__sub_83BDA5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA5F0"))) PPC_WEAK_FUNC(sub_83BDA5F0);
PPC_FUNC_IMPL(__imp__sub_83BDA5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25816
	ctx.r3.s64 = ctx.r11.s64 + 25816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA5FC"))) PPC_WEAK_FUNC(sub_83BDA5FC);
PPC_FUNC_IMPL(__imp__sub_83BDA5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA600"))) PPC_WEAK_FUNC(sub_83BDA600);
PPC_FUNC_IMPL(__imp__sub_83BDA600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25824
	ctx.r3.s64 = ctx.r11.s64 + 25824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA60C"))) PPC_WEAK_FUNC(sub_83BDA60C);
PPC_FUNC_IMPL(__imp__sub_83BDA60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA610"))) PPC_WEAK_FUNC(sub_83BDA610);
PPC_FUNC_IMPL(__imp__sub_83BDA610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25832
	ctx.r3.s64 = ctx.r11.s64 + 25832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA61C"))) PPC_WEAK_FUNC(sub_83BDA61C);
PPC_FUNC_IMPL(__imp__sub_83BDA61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA620"))) PPC_WEAK_FUNC(sub_83BDA620);
PPC_FUNC_IMPL(__imp__sub_83BDA620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25840
	ctx.r3.s64 = ctx.r11.s64 + 25840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA62C"))) PPC_WEAK_FUNC(sub_83BDA62C);
PPC_FUNC_IMPL(__imp__sub_83BDA62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA630"))) PPC_WEAK_FUNC(sub_83BDA630);
PPC_FUNC_IMPL(__imp__sub_83BDA630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25848
	ctx.r3.s64 = ctx.r11.s64 + 25848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA63C"))) PPC_WEAK_FUNC(sub_83BDA63C);
PPC_FUNC_IMPL(__imp__sub_83BDA63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA640"))) PPC_WEAK_FUNC(sub_83BDA640);
PPC_FUNC_IMPL(__imp__sub_83BDA640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25856
	ctx.r3.s64 = ctx.r11.s64 + 25856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA64C"))) PPC_WEAK_FUNC(sub_83BDA64C);
PPC_FUNC_IMPL(__imp__sub_83BDA64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA650"))) PPC_WEAK_FUNC(sub_83BDA650);
PPC_FUNC_IMPL(__imp__sub_83BDA650) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-24224
	ctx.r3.s64 = ctx.r11.s64 + -24224;
	// bl 0x83523120
	ctx.lr = 0x83BDA668;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25864
	ctx.r3.s64 = ctx.r10.s64 + 25864;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDA674;
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

__attribute__((alias("__imp__sub_83BDA684"))) PPC_WEAK_FUNC(sub_83BDA684);
PPC_FUNC_IMPL(__imp__sub_83BDA684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA688"))) PPC_WEAK_FUNC(sub_83BDA688);
PPC_FUNC_IMPL(__imp__sub_83BDA688) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24208
	ctx.r7.s64 = ctx.r8.s64 + -24208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24208(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24208);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24208(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24208, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDA6B0"))) PPC_WEAK_FUNC(sub_83BDA6B0);
PPC_FUNC_IMPL(__imp__sub_83BDA6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-28420
	ctx.r6.s64 = ctx.r7.s64 + -28420;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28492(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28492);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24208(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24208);
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
	// std r9,-28420(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28420, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDA6F8"))) PPC_WEAK_FUNC(sub_83BDA6F8);
PPC_FUNC_IMPL(__imp__sub_83BDA6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25880
	ctx.r3.s64 = ctx.r11.s64 + 25880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA704"))) PPC_WEAK_FUNC(sub_83BDA704);
PPC_FUNC_IMPL(__imp__sub_83BDA704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA708"))) PPC_WEAK_FUNC(sub_83BDA708);
PPC_FUNC_IMPL(__imp__sub_83BDA708) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-24200
	ctx.r3.s64 = ctx.r11.s64 + -24200;
	// bl 0x8259af80
	ctx.lr = 0x83BDA720;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25904
	ctx.r3.s64 = ctx.r10.s64 + 25904;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDA72C;
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

__attribute__((alias("__imp__sub_83BDA73C"))) PPC_WEAK_FUNC(sub_83BDA73C);
PPC_FUNC_IMPL(__imp__sub_83BDA73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA740"))) PPC_WEAK_FUNC(sub_83BDA740);
PPC_FUNC_IMPL(__imp__sub_83BDA740) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24220
	ctx.r11.s64 = ctx.r8.s64 + -24220;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-28444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28444);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25888
	ctx.r3.s64 = ctx.r6.s64 + 25888;
	// stw r10,-24220(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24220, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA770"))) PPC_WEAK_FUNC(sub_83BDA770);
PPC_FUNC_IMPL(__imp__sub_83BDA770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25896
	ctx.r3.s64 = ctx.r11.s64 + 25896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA77C"))) PPC_WEAK_FUNC(sub_83BDA77C);
PPC_FUNC_IMPL(__imp__sub_83BDA77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA780"))) PPC_WEAK_FUNC(sub_83BDA780);
PPC_FUNC_IMPL(__imp__sub_83BDA780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25912
	ctx.r3.s64 = ctx.r11.s64 + 25912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA78C"))) PPC_WEAK_FUNC(sub_83BDA78C);
PPC_FUNC_IMPL(__imp__sub_83BDA78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA790"))) PPC_WEAK_FUNC(sub_83BDA790);
PPC_FUNC_IMPL(__imp__sub_83BDA790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25920
	ctx.r3.s64 = ctx.r11.s64 + 25920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA79C"))) PPC_WEAK_FUNC(sub_83BDA79C);
PPC_FUNC_IMPL(__imp__sub_83BDA79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA7A0"))) PPC_WEAK_FUNC(sub_83BDA7A0);
PPC_FUNC_IMPL(__imp__sub_83BDA7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25928
	ctx.r3.s64 = ctx.r11.s64 + 25928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA7AC"))) PPC_WEAK_FUNC(sub_83BDA7AC);
PPC_FUNC_IMPL(__imp__sub_83BDA7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA7B0"))) PPC_WEAK_FUNC(sub_83BDA7B0);
PPC_FUNC_IMPL(__imp__sub_83BDA7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25936
	ctx.r3.s64 = ctx.r11.s64 + 25936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA7BC"))) PPC_WEAK_FUNC(sub_83BDA7BC);
PPC_FUNC_IMPL(__imp__sub_83BDA7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA7C0"))) PPC_WEAK_FUNC(sub_83BDA7C0);
PPC_FUNC_IMPL(__imp__sub_83BDA7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25944
	ctx.r3.s64 = ctx.r11.s64 + 25944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA7CC"))) PPC_WEAK_FUNC(sub_83BDA7CC);
PPC_FUNC_IMPL(__imp__sub_83BDA7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA7D0"))) PPC_WEAK_FUNC(sub_83BDA7D0);
PPC_FUNC_IMPL(__imp__sub_83BDA7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25952
	ctx.r3.s64 = ctx.r11.s64 + 25952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA7DC"))) PPC_WEAK_FUNC(sub_83BDA7DC);
PPC_FUNC_IMPL(__imp__sub_83BDA7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA7E0"))) PPC_WEAK_FUNC(sub_83BDA7E0);
PPC_FUNC_IMPL(__imp__sub_83BDA7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25960
	ctx.r3.s64 = ctx.r11.s64 + 25960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA7EC"))) PPC_WEAK_FUNC(sub_83BDA7EC);
PPC_FUNC_IMPL(__imp__sub_83BDA7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA7F0"))) PPC_WEAK_FUNC(sub_83BDA7F0);
PPC_FUNC_IMPL(__imp__sub_83BDA7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25968
	ctx.r3.s64 = ctx.r11.s64 + 25968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA7FC"))) PPC_WEAK_FUNC(sub_83BDA7FC);
PPC_FUNC_IMPL(__imp__sub_83BDA7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA800"))) PPC_WEAK_FUNC(sub_83BDA800);
PPC_FUNC_IMPL(__imp__sub_83BDA800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25976
	ctx.r3.s64 = ctx.r11.s64 + 25976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA80C"))) PPC_WEAK_FUNC(sub_83BDA80C);
PPC_FUNC_IMPL(__imp__sub_83BDA80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA810"))) PPC_WEAK_FUNC(sub_83BDA810);
PPC_FUNC_IMPL(__imp__sub_83BDA810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25984
	ctx.r3.s64 = ctx.r11.s64 + 25984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA81C"))) PPC_WEAK_FUNC(sub_83BDA81C);
PPC_FUNC_IMPL(__imp__sub_83BDA81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA820"))) PPC_WEAK_FUNC(sub_83BDA820);
PPC_FUNC_IMPL(__imp__sub_83BDA820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25992
	ctx.r3.s64 = ctx.r11.s64 + 25992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA82C"))) PPC_WEAK_FUNC(sub_83BDA82C);
PPC_FUNC_IMPL(__imp__sub_83BDA82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA830"))) PPC_WEAK_FUNC(sub_83BDA830);
PPC_FUNC_IMPL(__imp__sub_83BDA830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26000
	ctx.r3.s64 = ctx.r11.s64 + 26000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA83C"))) PPC_WEAK_FUNC(sub_83BDA83C);
PPC_FUNC_IMPL(__imp__sub_83BDA83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA840"))) PPC_WEAK_FUNC(sub_83BDA840);
PPC_FUNC_IMPL(__imp__sub_83BDA840) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-23856
	ctx.r3.s64 = ctx.r11.s64 + -23856;
	// bl 0x83523120
	ctx.lr = 0x83BDA858;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,26008
	ctx.r3.s64 = ctx.r10.s64 + 26008;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDA864;
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

__attribute__((alias("__imp__sub_83BDA874"))) PPC_WEAK_FUNC(sub_83BDA874);
PPC_FUNC_IMPL(__imp__sub_83BDA874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA878"))) PPC_WEAK_FUNC(sub_83BDA878);
PPC_FUNC_IMPL(__imp__sub_83BDA878) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23840
	ctx.r7.s64 = ctx.r8.s64 + -23840;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23840(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23840);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23840(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23840, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDA8A0"))) PPC_WEAK_FUNC(sub_83BDA8A0);
PPC_FUNC_IMPL(__imp__sub_83BDA8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-28148
	ctx.r6.s64 = ctx.r7.s64 + -28148;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28220(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28220);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23840(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23840);
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
	// std r9,-28148(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28148, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDA8E8"))) PPC_WEAK_FUNC(sub_83BDA8E8);
PPC_FUNC_IMPL(__imp__sub_83BDA8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26024
	ctx.r3.s64 = ctx.r11.s64 + 26024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA8F4"))) PPC_WEAK_FUNC(sub_83BDA8F4);
PPC_FUNC_IMPL(__imp__sub_83BDA8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA8F8"))) PPC_WEAK_FUNC(sub_83BDA8F8);
PPC_FUNC_IMPL(__imp__sub_83BDA8F8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-23832
	ctx.r3.s64 = ctx.r11.s64 + -23832;
	// bl 0x8259af80
	ctx.lr = 0x83BDA910;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,26040
	ctx.r3.s64 = ctx.r10.s64 + 26040;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDA91C;
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

__attribute__((alias("__imp__sub_83BDA92C"))) PPC_WEAK_FUNC(sub_83BDA92C);
PPC_FUNC_IMPL(__imp__sub_83BDA92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA930"))) PPC_WEAK_FUNC(sub_83BDA930);
PPC_FUNC_IMPL(__imp__sub_83BDA930) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23852
	ctx.r11.s64 = ctx.r8.s64 + -23852;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-28172(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28172);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26032
	ctx.r3.s64 = ctx.r6.s64 + 26032;
	// stw r10,-23852(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23852, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA960"))) PPC_WEAK_FUNC(sub_83BDA960);
PPC_FUNC_IMPL(__imp__sub_83BDA960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26048
	ctx.r3.s64 = ctx.r11.s64 + 26048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA96C"))) PPC_WEAK_FUNC(sub_83BDA96C);
PPC_FUNC_IMPL(__imp__sub_83BDA96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA970"))) PPC_WEAK_FUNC(sub_83BDA970);
PPC_FUNC_IMPL(__imp__sub_83BDA970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26056
	ctx.r3.s64 = ctx.r11.s64 + 26056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA97C"))) PPC_WEAK_FUNC(sub_83BDA97C);
PPC_FUNC_IMPL(__imp__sub_83BDA97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA980"))) PPC_WEAK_FUNC(sub_83BDA980);
PPC_FUNC_IMPL(__imp__sub_83BDA980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26064
	ctx.r3.s64 = ctx.r11.s64 + 26064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA98C"))) PPC_WEAK_FUNC(sub_83BDA98C);
PPC_FUNC_IMPL(__imp__sub_83BDA98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA990"))) PPC_WEAK_FUNC(sub_83BDA990);
PPC_FUNC_IMPL(__imp__sub_83BDA990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26072
	ctx.r3.s64 = ctx.r11.s64 + 26072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA99C"))) PPC_WEAK_FUNC(sub_83BDA99C);
PPC_FUNC_IMPL(__imp__sub_83BDA99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA9A0"))) PPC_WEAK_FUNC(sub_83BDA9A0);
PPC_FUNC_IMPL(__imp__sub_83BDA9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA9AC"))) PPC_WEAK_FUNC(sub_83BDA9AC);
PPC_FUNC_IMPL(__imp__sub_83BDA9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA9B0"))) PPC_WEAK_FUNC(sub_83BDA9B0);
PPC_FUNC_IMPL(__imp__sub_83BDA9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26088
	ctx.r3.s64 = ctx.r11.s64 + 26088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA9BC"))) PPC_WEAK_FUNC(sub_83BDA9BC);
PPC_FUNC_IMPL(__imp__sub_83BDA9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA9C0"))) PPC_WEAK_FUNC(sub_83BDA9C0);
PPC_FUNC_IMPL(__imp__sub_83BDA9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26096
	ctx.r3.s64 = ctx.r11.s64 + 26096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA9CC"))) PPC_WEAK_FUNC(sub_83BDA9CC);
PPC_FUNC_IMPL(__imp__sub_83BDA9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA9D0"))) PPC_WEAK_FUNC(sub_83BDA9D0);
PPC_FUNC_IMPL(__imp__sub_83BDA9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26104
	ctx.r3.s64 = ctx.r11.s64 + 26104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA9DC"))) PPC_WEAK_FUNC(sub_83BDA9DC);
PPC_FUNC_IMPL(__imp__sub_83BDA9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA9E0"))) PPC_WEAK_FUNC(sub_83BDA9E0);
PPC_FUNC_IMPL(__imp__sub_83BDA9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26112
	ctx.r3.s64 = ctx.r11.s64 + 26112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA9EC"))) PPC_WEAK_FUNC(sub_83BDA9EC);
PPC_FUNC_IMPL(__imp__sub_83BDA9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA9F0"))) PPC_WEAK_FUNC(sub_83BDA9F0);
PPC_FUNC_IMPL(__imp__sub_83BDA9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26120
	ctx.r3.s64 = ctx.r11.s64 + 26120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA9FC"))) PPC_WEAK_FUNC(sub_83BDA9FC);
PPC_FUNC_IMPL(__imp__sub_83BDA9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAA00"))) PPC_WEAK_FUNC(sub_83BDAA00);
PPC_FUNC_IMPL(__imp__sub_83BDAA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26128
	ctx.r3.s64 = ctx.r11.s64 + 26128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAA0C"))) PPC_WEAK_FUNC(sub_83BDAA0C);
PPC_FUNC_IMPL(__imp__sub_83BDAA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAA10"))) PPC_WEAK_FUNC(sub_83BDAA10);
PPC_FUNC_IMPL(__imp__sub_83BDAA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26136
	ctx.r3.s64 = ctx.r11.s64 + 26136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAA1C"))) PPC_WEAK_FUNC(sub_83BDAA1C);
PPC_FUNC_IMPL(__imp__sub_83BDAA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAA20"))) PPC_WEAK_FUNC(sub_83BDAA20);
PPC_FUNC_IMPL(__imp__sub_83BDAA20) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-23488
	ctx.r3.s64 = ctx.r11.s64 + -23488;
	// bl 0x83523120
	ctx.lr = 0x83BDAA38;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,26144
	ctx.r3.s64 = ctx.r10.s64 + 26144;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDAA44;
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

__attribute__((alias("__imp__sub_83BDAA54"))) PPC_WEAK_FUNC(sub_83BDAA54);
PPC_FUNC_IMPL(__imp__sub_83BDAA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAA58"))) PPC_WEAK_FUNC(sub_83BDAA58);
PPC_FUNC_IMPL(__imp__sub_83BDAA58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23472
	ctx.r7.s64 = ctx.r8.s64 + -23472;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23472(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23472);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23472(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23472, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDAA80"))) PPC_WEAK_FUNC(sub_83BDAA80);
PPC_FUNC_IMPL(__imp__sub_83BDAA80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-27988
	ctx.r6.s64 = ctx.r7.s64 + -27988;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28068(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28068);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23472(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23472);
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
	// std r9,-27988(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27988, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDAAC8"))) PPC_WEAK_FUNC(sub_83BDAAC8);
PPC_FUNC_IMPL(__imp__sub_83BDAAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26160
	ctx.r3.s64 = ctx.r11.s64 + 26160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAAD4"))) PPC_WEAK_FUNC(sub_83BDAAD4);
PPC_FUNC_IMPL(__imp__sub_83BDAAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAAD8"))) PPC_WEAK_FUNC(sub_83BDAAD8);
PPC_FUNC_IMPL(__imp__sub_83BDAAD8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-23464
	ctx.r3.s64 = ctx.r11.s64 + -23464;
	// bl 0x8259af80
	ctx.lr = 0x83BDAAF0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,26176
	ctx.r3.s64 = ctx.r10.s64 + 26176;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDAAFC;
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

__attribute__((alias("__imp__sub_83BDAB0C"))) PPC_WEAK_FUNC(sub_83BDAB0C);
PPC_FUNC_IMPL(__imp__sub_83BDAB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAB10"))) PPC_WEAK_FUNC(sub_83BDAB10);
PPC_FUNC_IMPL(__imp__sub_83BDAB10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23484
	ctx.r11.s64 = ctx.r8.s64 + -23484;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-28020(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28020);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26168
	ctx.r3.s64 = ctx.r6.s64 + 26168;
	// stw r10,-23484(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23484, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAB40"))) PPC_WEAK_FUNC(sub_83BDAB40);
PPC_FUNC_IMPL(__imp__sub_83BDAB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26184
	ctx.r3.s64 = ctx.r11.s64 + 26184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAB4C"))) PPC_WEAK_FUNC(sub_83BDAB4C);
PPC_FUNC_IMPL(__imp__sub_83BDAB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAB50"))) PPC_WEAK_FUNC(sub_83BDAB50);
PPC_FUNC_IMPL(__imp__sub_83BDAB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26280
	ctx.r3.s64 = ctx.r11.s64 + 26280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAB5C"))) PPC_WEAK_FUNC(sub_83BDAB5C);
PPC_FUNC_IMPL(__imp__sub_83BDAB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAB60"))) PPC_WEAK_FUNC(sub_83BDAB60);
PPC_FUNC_IMPL(__imp__sub_83BDAB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26288
	ctx.r3.s64 = ctx.r11.s64 + 26288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAB6C"))) PPC_WEAK_FUNC(sub_83BDAB6C);
PPC_FUNC_IMPL(__imp__sub_83BDAB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAB70"))) PPC_WEAK_FUNC(sub_83BDAB70);
PPC_FUNC_IMPL(__imp__sub_83BDAB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26296
	ctx.r3.s64 = ctx.r11.s64 + 26296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAB7C"))) PPC_WEAK_FUNC(sub_83BDAB7C);
PPC_FUNC_IMPL(__imp__sub_83BDAB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAB80"))) PPC_WEAK_FUNC(sub_83BDAB80);
PPC_FUNC_IMPL(__imp__sub_83BDAB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26304
	ctx.r3.s64 = ctx.r11.s64 + 26304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAB8C"))) PPC_WEAK_FUNC(sub_83BDAB8C);
PPC_FUNC_IMPL(__imp__sub_83BDAB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAB90"))) PPC_WEAK_FUNC(sub_83BDAB90);
PPC_FUNC_IMPL(__imp__sub_83BDAB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26312
	ctx.r3.s64 = ctx.r11.s64 + 26312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAB9C"))) PPC_WEAK_FUNC(sub_83BDAB9C);
PPC_FUNC_IMPL(__imp__sub_83BDAB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDABA0"))) PPC_WEAK_FUNC(sub_83BDABA0);
PPC_FUNC_IMPL(__imp__sub_83BDABA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26320
	ctx.r3.s64 = ctx.r11.s64 + 26320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDABAC"))) PPC_WEAK_FUNC(sub_83BDABAC);
PPC_FUNC_IMPL(__imp__sub_83BDABAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDABB0"))) PPC_WEAK_FUNC(sub_83BDABB0);
PPC_FUNC_IMPL(__imp__sub_83BDABB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26328
	ctx.r3.s64 = ctx.r11.s64 + 26328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDABBC"))) PPC_WEAK_FUNC(sub_83BDABBC);
PPC_FUNC_IMPL(__imp__sub_83BDABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDABC0"))) PPC_WEAK_FUNC(sub_83BDABC0);
PPC_FUNC_IMPL(__imp__sub_83BDABC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26336
	ctx.r3.s64 = ctx.r11.s64 + 26336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDABCC"))) PPC_WEAK_FUNC(sub_83BDABCC);
PPC_FUNC_IMPL(__imp__sub_83BDABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDABD0"))) PPC_WEAK_FUNC(sub_83BDABD0);
PPC_FUNC_IMPL(__imp__sub_83BDABD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26344
	ctx.r3.s64 = ctx.r11.s64 + 26344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDABDC"))) PPC_WEAK_FUNC(sub_83BDABDC);
PPC_FUNC_IMPL(__imp__sub_83BDABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDABE0"))) PPC_WEAK_FUNC(sub_83BDABE0);
PPC_FUNC_IMPL(__imp__sub_83BDABE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26352
	ctx.r3.s64 = ctx.r11.s64 + 26352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDABEC"))) PPC_WEAK_FUNC(sub_83BDABEC);
PPC_FUNC_IMPL(__imp__sub_83BDABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDABF0"))) PPC_WEAK_FUNC(sub_83BDABF0);
PPC_FUNC_IMPL(__imp__sub_83BDABF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26360
	ctx.r3.s64 = ctx.r11.s64 + 26360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDABFC"))) PPC_WEAK_FUNC(sub_83BDABFC);
PPC_FUNC_IMPL(__imp__sub_83BDABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAC00"))) PPC_WEAK_FUNC(sub_83BDAC00);
PPC_FUNC_IMPL(__imp__sub_83BDAC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26368
	ctx.r3.s64 = ctx.r11.s64 + 26368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAC0C"))) PPC_WEAK_FUNC(sub_83BDAC0C);
PPC_FUNC_IMPL(__imp__sub_83BDAC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAC10"))) PPC_WEAK_FUNC(sub_83BDAC10);
PPC_FUNC_IMPL(__imp__sub_83BDAC10) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-23104
	ctx.r3.s64 = ctx.r11.s64 + -23104;
	// bl 0x83523120
	ctx.lr = 0x83BDAC28;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,26376
	ctx.r3.s64 = ctx.r10.s64 + 26376;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDAC34;
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

__attribute__((alias("__imp__sub_83BDAC44"))) PPC_WEAK_FUNC(sub_83BDAC44);
PPC_FUNC_IMPL(__imp__sub_83BDAC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAC48"))) PPC_WEAK_FUNC(sub_83BDAC48);
PPC_FUNC_IMPL(__imp__sub_83BDAC48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23088
	ctx.r7.s64 = ctx.r8.s64 + -23088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23088);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23088(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23088, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDAC70"))) PPC_WEAK_FUNC(sub_83BDAC70);
PPC_FUNC_IMPL(__imp__sub_83BDAC70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-27860
	ctx.r6.s64 = ctx.r7.s64 + -27860;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27932(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27932);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23088);
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
	// std r9,-27860(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27860, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDACB8"))) PPC_WEAK_FUNC(sub_83BDACB8);
PPC_FUNC_IMPL(__imp__sub_83BDACB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26392
	ctx.r3.s64 = ctx.r11.s64 + 26392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDACC4"))) PPC_WEAK_FUNC(sub_83BDACC4);
PPC_FUNC_IMPL(__imp__sub_83BDACC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDACC8"))) PPC_WEAK_FUNC(sub_83BDACC8);
PPC_FUNC_IMPL(__imp__sub_83BDACC8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-23080
	ctx.r3.s64 = ctx.r11.s64 + -23080;
	// bl 0x8259af80
	ctx.lr = 0x83BDACE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,26408
	ctx.r3.s64 = ctx.r10.s64 + 26408;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDACEC;
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

__attribute__((alias("__imp__sub_83BDACFC"))) PPC_WEAK_FUNC(sub_83BDACFC);
PPC_FUNC_IMPL(__imp__sub_83BDACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAD00"))) PPC_WEAK_FUNC(sub_83BDAD00);
PPC_FUNC_IMPL(__imp__sub_83BDAD00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23100
	ctx.r11.s64 = ctx.r8.s64 + -23100;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-27884(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27884);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26400
	ctx.r3.s64 = ctx.r6.s64 + 26400;
	// stw r10,-23100(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23100, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAD30"))) PPC_WEAK_FUNC(sub_83BDAD30);
PPC_FUNC_IMPL(__imp__sub_83BDAD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26416
	ctx.r3.s64 = ctx.r11.s64 + 26416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAD3C"))) PPC_WEAK_FUNC(sub_83BDAD3C);
PPC_FUNC_IMPL(__imp__sub_83BDAD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAD40"))) PPC_WEAK_FUNC(sub_83BDAD40);
PPC_FUNC_IMPL(__imp__sub_83BDAD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26424
	ctx.r3.s64 = ctx.r11.s64 + 26424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAD4C"))) PPC_WEAK_FUNC(sub_83BDAD4C);
PPC_FUNC_IMPL(__imp__sub_83BDAD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAD50"))) PPC_WEAK_FUNC(sub_83BDAD50);
PPC_FUNC_IMPL(__imp__sub_83BDAD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26432
	ctx.r3.s64 = ctx.r11.s64 + 26432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAD5C"))) PPC_WEAK_FUNC(sub_83BDAD5C);
PPC_FUNC_IMPL(__imp__sub_83BDAD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAD60"))) PPC_WEAK_FUNC(sub_83BDAD60);
PPC_FUNC_IMPL(__imp__sub_83BDAD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26440
	ctx.r3.s64 = ctx.r11.s64 + 26440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAD6C"))) PPC_WEAK_FUNC(sub_83BDAD6C);
PPC_FUNC_IMPL(__imp__sub_83BDAD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAD70"))) PPC_WEAK_FUNC(sub_83BDAD70);
PPC_FUNC_IMPL(__imp__sub_83BDAD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26448
	ctx.r3.s64 = ctx.r11.s64 + 26448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAD7C"))) PPC_WEAK_FUNC(sub_83BDAD7C);
PPC_FUNC_IMPL(__imp__sub_83BDAD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAD80"))) PPC_WEAK_FUNC(sub_83BDAD80);
PPC_FUNC_IMPL(__imp__sub_83BDAD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26456
	ctx.r3.s64 = ctx.r11.s64 + 26456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAD8C"))) PPC_WEAK_FUNC(sub_83BDAD8C);
PPC_FUNC_IMPL(__imp__sub_83BDAD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAD90"))) PPC_WEAK_FUNC(sub_83BDAD90);
PPC_FUNC_IMPL(__imp__sub_83BDAD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26464
	ctx.r3.s64 = ctx.r11.s64 + 26464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAD9C"))) PPC_WEAK_FUNC(sub_83BDAD9C);
PPC_FUNC_IMPL(__imp__sub_83BDAD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDADA0"))) PPC_WEAK_FUNC(sub_83BDADA0);
PPC_FUNC_IMPL(__imp__sub_83BDADA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26472
	ctx.r3.s64 = ctx.r11.s64 + 26472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDADAC"))) PPC_WEAK_FUNC(sub_83BDADAC);
PPC_FUNC_IMPL(__imp__sub_83BDADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDADB0"))) PPC_WEAK_FUNC(sub_83BDADB0);
PPC_FUNC_IMPL(__imp__sub_83BDADB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26480
	ctx.r3.s64 = ctx.r11.s64 + 26480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDADBC"))) PPC_WEAK_FUNC(sub_83BDADBC);
PPC_FUNC_IMPL(__imp__sub_83BDADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDADC0"))) PPC_WEAK_FUNC(sub_83BDADC0);
PPC_FUNC_IMPL(__imp__sub_83BDADC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26488
	ctx.r3.s64 = ctx.r11.s64 + 26488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDADCC"))) PPC_WEAK_FUNC(sub_83BDADCC);
PPC_FUNC_IMPL(__imp__sub_83BDADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDADD0"))) PPC_WEAK_FUNC(sub_83BDADD0);
PPC_FUNC_IMPL(__imp__sub_83BDADD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26496
	ctx.r3.s64 = ctx.r11.s64 + 26496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDADDC"))) PPC_WEAK_FUNC(sub_83BDADDC);
PPC_FUNC_IMPL(__imp__sub_83BDADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDADE0"))) PPC_WEAK_FUNC(sub_83BDADE0);
PPC_FUNC_IMPL(__imp__sub_83BDADE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26504
	ctx.r3.s64 = ctx.r11.s64 + 26504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDADEC"))) PPC_WEAK_FUNC(sub_83BDADEC);
PPC_FUNC_IMPL(__imp__sub_83BDADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDADF0"))) PPC_WEAK_FUNC(sub_83BDADF0);
PPC_FUNC_IMPL(__imp__sub_83BDADF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26512
	ctx.r3.s64 = ctx.r11.s64 + 26512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDADFC"))) PPC_WEAK_FUNC(sub_83BDADFC);
PPC_FUNC_IMPL(__imp__sub_83BDADFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAE00"))) PPC_WEAK_FUNC(sub_83BDAE00);
PPC_FUNC_IMPL(__imp__sub_83BDAE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26520
	ctx.r3.s64 = ctx.r11.s64 + 26520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAE0C"))) PPC_WEAK_FUNC(sub_83BDAE0C);
PPC_FUNC_IMPL(__imp__sub_83BDAE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAE10"))) PPC_WEAK_FUNC(sub_83BDAE10);
PPC_FUNC_IMPL(__imp__sub_83BDAE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26528
	ctx.r3.s64 = ctx.r11.s64 + 26528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAE1C"))) PPC_WEAK_FUNC(sub_83BDAE1C);
PPC_FUNC_IMPL(__imp__sub_83BDAE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAE20"))) PPC_WEAK_FUNC(sub_83BDAE20);
PPC_FUNC_IMPL(__imp__sub_83BDAE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26536
	ctx.r3.s64 = ctx.r11.s64 + 26536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAE2C"))) PPC_WEAK_FUNC(sub_83BDAE2C);
PPC_FUNC_IMPL(__imp__sub_83BDAE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAE30"))) PPC_WEAK_FUNC(sub_83BDAE30);
PPC_FUNC_IMPL(__imp__sub_83BDAE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26544
	ctx.r3.s64 = ctx.r11.s64 + 26544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAE3C"))) PPC_WEAK_FUNC(sub_83BDAE3C);
PPC_FUNC_IMPL(__imp__sub_83BDAE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAE40"))) PPC_WEAK_FUNC(sub_83BDAE40);
PPC_FUNC_IMPL(__imp__sub_83BDAE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26552
	ctx.r3.s64 = ctx.r11.s64 + 26552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAE4C"))) PPC_WEAK_FUNC(sub_83BDAE4C);
PPC_FUNC_IMPL(__imp__sub_83BDAE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAE50"))) PPC_WEAK_FUNC(sub_83BDAE50);
PPC_FUNC_IMPL(__imp__sub_83BDAE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26560
	ctx.r3.s64 = ctx.r11.s64 + 26560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAE5C"))) PPC_WEAK_FUNC(sub_83BDAE5C);
PPC_FUNC_IMPL(__imp__sub_83BDAE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAE60"))) PPC_WEAK_FUNC(sub_83BDAE60);
PPC_FUNC_IMPL(__imp__sub_83BDAE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26568
	ctx.r3.s64 = ctx.r11.s64 + 26568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAE6C"))) PPC_WEAK_FUNC(sub_83BDAE6C);
PPC_FUNC_IMPL(__imp__sub_83BDAE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAE70"))) PPC_WEAK_FUNC(sub_83BDAE70);
PPC_FUNC_IMPL(__imp__sub_83BDAE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26576
	ctx.r3.s64 = ctx.r11.s64 + 26576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAE7C"))) PPC_WEAK_FUNC(sub_83BDAE7C);
PPC_FUNC_IMPL(__imp__sub_83BDAE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAE80"))) PPC_WEAK_FUNC(sub_83BDAE80);
PPC_FUNC_IMPL(__imp__sub_83BDAE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26584
	ctx.r3.s64 = ctx.r11.s64 + 26584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAE8C"))) PPC_WEAK_FUNC(sub_83BDAE8C);
PPC_FUNC_IMPL(__imp__sub_83BDAE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAE90"))) PPC_WEAK_FUNC(sub_83BDAE90);
PPC_FUNC_IMPL(__imp__sub_83BDAE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26592
	ctx.r3.s64 = ctx.r11.s64 + 26592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAE9C"))) PPC_WEAK_FUNC(sub_83BDAE9C);
PPC_FUNC_IMPL(__imp__sub_83BDAE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAEA0"))) PPC_WEAK_FUNC(sub_83BDAEA0);
PPC_FUNC_IMPL(__imp__sub_83BDAEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26600
	ctx.r3.s64 = ctx.r11.s64 + 26600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAEAC"))) PPC_WEAK_FUNC(sub_83BDAEAC);
PPC_FUNC_IMPL(__imp__sub_83BDAEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAEB0"))) PPC_WEAK_FUNC(sub_83BDAEB0);
PPC_FUNC_IMPL(__imp__sub_83BDAEB0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-22724
	ctx.r3.s64 = ctx.r11.s64 + -22724;
	// bl 0x83523120
	ctx.lr = 0x83BDAEC8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,26608
	ctx.r3.s64 = ctx.r10.s64 + 26608;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDAED4;
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

__attribute__((alias("__imp__sub_83BDAEE4"))) PPC_WEAK_FUNC(sub_83BDAEE4);
PPC_FUNC_IMPL(__imp__sub_83BDAEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAEE8"))) PPC_WEAK_FUNC(sub_83BDAEE8);
PPC_FUNC_IMPL(__imp__sub_83BDAEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22708
	ctx.r7.s64 = ctx.r8.s64 + -22708;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22708(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22708);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22708(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22708, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDAF10"))) PPC_WEAK_FUNC(sub_83BDAF10);
PPC_FUNC_IMPL(__imp__sub_83BDAF10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-27608
	ctx.r6.s64 = ctx.r7.s64 + -27608;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27688(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27688);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22708(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22708);
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
	// std r9,-27608(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27608, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDAF58"))) PPC_WEAK_FUNC(sub_83BDAF58);
PPC_FUNC_IMPL(__imp__sub_83BDAF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26624
	ctx.r3.s64 = ctx.r11.s64 + 26624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAF64"))) PPC_WEAK_FUNC(sub_83BDAF64);
PPC_FUNC_IMPL(__imp__sub_83BDAF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAF68"))) PPC_WEAK_FUNC(sub_83BDAF68);
PPC_FUNC_IMPL(__imp__sub_83BDAF68) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-22696
	ctx.r3.s64 = ctx.r11.s64 + -22696;
	// bl 0x8259af80
	ctx.lr = 0x83BDAF80;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,26640
	ctx.r3.s64 = ctx.r10.s64 + 26640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDAF8C;
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

__attribute__((alias("__imp__sub_83BDAF9C"))) PPC_WEAK_FUNC(sub_83BDAF9C);
PPC_FUNC_IMPL(__imp__sub_83BDAF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAFA0"))) PPC_WEAK_FUNC(sub_83BDAFA0);
PPC_FUNC_IMPL(__imp__sub_83BDAFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22720
	ctx.r11.s64 = ctx.r8.s64 + -22720;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-27640(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27640);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26632
	ctx.r3.s64 = ctx.r6.s64 + 26632;
	// stw r10,-22720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22720, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAFD0"))) PPC_WEAK_FUNC(sub_83BDAFD0);
PPC_FUNC_IMPL(__imp__sub_83BDAFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26648
	ctx.r3.s64 = ctx.r11.s64 + 26648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAFDC"))) PPC_WEAK_FUNC(sub_83BDAFDC);
PPC_FUNC_IMPL(__imp__sub_83BDAFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAFE0"))) PPC_WEAK_FUNC(sub_83BDAFE0);
PPC_FUNC_IMPL(__imp__sub_83BDAFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26656
	ctx.r3.s64 = ctx.r11.s64 + 26656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAFEC"))) PPC_WEAK_FUNC(sub_83BDAFEC);
PPC_FUNC_IMPL(__imp__sub_83BDAFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDAFF0"))) PPC_WEAK_FUNC(sub_83BDAFF0);
PPC_FUNC_IMPL(__imp__sub_83BDAFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26664
	ctx.r3.s64 = ctx.r11.s64 + 26664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDAFFC"))) PPC_WEAK_FUNC(sub_83BDAFFC);
PPC_FUNC_IMPL(__imp__sub_83BDAFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB000"))) PPC_WEAK_FUNC(sub_83BDB000);
PPC_FUNC_IMPL(__imp__sub_83BDB000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26672
	ctx.r3.s64 = ctx.r11.s64 + 26672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB00C"))) PPC_WEAK_FUNC(sub_83BDB00C);
PPC_FUNC_IMPL(__imp__sub_83BDB00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB010"))) PPC_WEAK_FUNC(sub_83BDB010);
PPC_FUNC_IMPL(__imp__sub_83BDB010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26680
	ctx.r3.s64 = ctx.r11.s64 + 26680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB01C"))) PPC_WEAK_FUNC(sub_83BDB01C);
PPC_FUNC_IMPL(__imp__sub_83BDB01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB020"))) PPC_WEAK_FUNC(sub_83BDB020);
PPC_FUNC_IMPL(__imp__sub_83BDB020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26688
	ctx.r3.s64 = ctx.r11.s64 + 26688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB02C"))) PPC_WEAK_FUNC(sub_83BDB02C);
PPC_FUNC_IMPL(__imp__sub_83BDB02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB030"))) PPC_WEAK_FUNC(sub_83BDB030);
PPC_FUNC_IMPL(__imp__sub_83BDB030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26696
	ctx.r3.s64 = ctx.r11.s64 + 26696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB03C"))) PPC_WEAK_FUNC(sub_83BDB03C);
PPC_FUNC_IMPL(__imp__sub_83BDB03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB040"))) PPC_WEAK_FUNC(sub_83BDB040);
PPC_FUNC_IMPL(__imp__sub_83BDB040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26704
	ctx.r3.s64 = ctx.r11.s64 + 26704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB04C"))) PPC_WEAK_FUNC(sub_83BDB04C);
PPC_FUNC_IMPL(__imp__sub_83BDB04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB050"))) PPC_WEAK_FUNC(sub_83BDB050);
PPC_FUNC_IMPL(__imp__sub_83BDB050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26712
	ctx.r3.s64 = ctx.r11.s64 + 26712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB05C"))) PPC_WEAK_FUNC(sub_83BDB05C);
PPC_FUNC_IMPL(__imp__sub_83BDB05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB060"))) PPC_WEAK_FUNC(sub_83BDB060);
PPC_FUNC_IMPL(__imp__sub_83BDB060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26720
	ctx.r3.s64 = ctx.r11.s64 + 26720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB06C"))) PPC_WEAK_FUNC(sub_83BDB06C);
PPC_FUNC_IMPL(__imp__sub_83BDB06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB070"))) PPC_WEAK_FUNC(sub_83BDB070);
PPC_FUNC_IMPL(__imp__sub_83BDB070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26728
	ctx.r3.s64 = ctx.r11.s64 + 26728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB07C"))) PPC_WEAK_FUNC(sub_83BDB07C);
PPC_FUNC_IMPL(__imp__sub_83BDB07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB080"))) PPC_WEAK_FUNC(sub_83BDB080);
PPC_FUNC_IMPL(__imp__sub_83BDB080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26736
	ctx.r3.s64 = ctx.r11.s64 + 26736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB08C"))) PPC_WEAK_FUNC(sub_83BDB08C);
PPC_FUNC_IMPL(__imp__sub_83BDB08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB090"))) PPC_WEAK_FUNC(sub_83BDB090);
PPC_FUNC_IMPL(__imp__sub_83BDB090) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-22352
	ctx.r3.s64 = ctx.r11.s64 + -22352;
	// bl 0x83523120
	ctx.lr = 0x83BDB0A8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,26744
	ctx.r3.s64 = ctx.r10.s64 + 26744;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDB0B4;
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

__attribute__((alias("__imp__sub_83BDB0C4"))) PPC_WEAK_FUNC(sub_83BDB0C4);
PPC_FUNC_IMPL(__imp__sub_83BDB0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB0C8"))) PPC_WEAK_FUNC(sub_83BDB0C8);
PPC_FUNC_IMPL(__imp__sub_83BDB0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22336
	ctx.r7.s64 = ctx.r8.s64 + -22336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22336);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22336(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22336, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDB0F0"))) PPC_WEAK_FUNC(sub_83BDB0F0);
PPC_FUNC_IMPL(__imp__sub_83BDB0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-27480
	ctx.r6.s64 = ctx.r7.s64 + -27480;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27552(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27552);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22336(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22336);
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
	// std r9,-27480(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27480, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDB138"))) PPC_WEAK_FUNC(sub_83BDB138);
PPC_FUNC_IMPL(__imp__sub_83BDB138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26760
	ctx.r3.s64 = ctx.r11.s64 + 26760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB144"))) PPC_WEAK_FUNC(sub_83BDB144);
PPC_FUNC_IMPL(__imp__sub_83BDB144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB148"))) PPC_WEAK_FUNC(sub_83BDB148);
PPC_FUNC_IMPL(__imp__sub_83BDB148) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-22328
	ctx.r3.s64 = ctx.r11.s64 + -22328;
	// bl 0x8259af80
	ctx.lr = 0x83BDB160;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,26776
	ctx.r3.s64 = ctx.r10.s64 + 26776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDB16C;
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

__attribute__((alias("__imp__sub_83BDB17C"))) PPC_WEAK_FUNC(sub_83BDB17C);
PPC_FUNC_IMPL(__imp__sub_83BDB17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB180"))) PPC_WEAK_FUNC(sub_83BDB180);
PPC_FUNC_IMPL(__imp__sub_83BDB180) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22348
	ctx.r11.s64 = ctx.r8.s64 + -22348;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-27504(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27504);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26768
	ctx.r3.s64 = ctx.r6.s64 + 26768;
	// stw r10,-22348(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB1B0"))) PPC_WEAK_FUNC(sub_83BDB1B0);
PPC_FUNC_IMPL(__imp__sub_83BDB1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26784
	ctx.r3.s64 = ctx.r11.s64 + 26784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB1BC"))) PPC_WEAK_FUNC(sub_83BDB1BC);
PPC_FUNC_IMPL(__imp__sub_83BDB1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB1C0"))) PPC_WEAK_FUNC(sub_83BDB1C0);
PPC_FUNC_IMPL(__imp__sub_83BDB1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26792
	ctx.r3.s64 = ctx.r11.s64 + 26792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB1CC"))) PPC_WEAK_FUNC(sub_83BDB1CC);
PPC_FUNC_IMPL(__imp__sub_83BDB1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB1D0"))) PPC_WEAK_FUNC(sub_83BDB1D0);
PPC_FUNC_IMPL(__imp__sub_83BDB1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26800
	ctx.r3.s64 = ctx.r11.s64 + 26800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB1DC"))) PPC_WEAK_FUNC(sub_83BDB1DC);
PPC_FUNC_IMPL(__imp__sub_83BDB1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB1E0"))) PPC_WEAK_FUNC(sub_83BDB1E0);
PPC_FUNC_IMPL(__imp__sub_83BDB1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26808
	ctx.r3.s64 = ctx.r11.s64 + 26808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB1EC"))) PPC_WEAK_FUNC(sub_83BDB1EC);
PPC_FUNC_IMPL(__imp__sub_83BDB1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB1F0"))) PPC_WEAK_FUNC(sub_83BDB1F0);
PPC_FUNC_IMPL(__imp__sub_83BDB1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26816
	ctx.r3.s64 = ctx.r11.s64 + 26816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB1FC"))) PPC_WEAK_FUNC(sub_83BDB1FC);
PPC_FUNC_IMPL(__imp__sub_83BDB1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB200"))) PPC_WEAK_FUNC(sub_83BDB200);
PPC_FUNC_IMPL(__imp__sub_83BDB200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26824
	ctx.r3.s64 = ctx.r11.s64 + 26824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB20C"))) PPC_WEAK_FUNC(sub_83BDB20C);
PPC_FUNC_IMPL(__imp__sub_83BDB20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB210"))) PPC_WEAK_FUNC(sub_83BDB210);
PPC_FUNC_IMPL(__imp__sub_83BDB210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26832
	ctx.r3.s64 = ctx.r11.s64 + 26832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

