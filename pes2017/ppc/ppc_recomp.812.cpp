#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C61F10"))) PPC_WEAK_FUNC(sub_83C61F10);
PPC_FUNC_IMPL(__imp__sub_83C61F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61F1C"))) PPC_WEAK_FUNC(sub_83C61F1C);
PPC_FUNC_IMPL(__imp__sub_83C61F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61F20"))) PPC_WEAK_FUNC(sub_83C61F20);
PPC_FUNC_IMPL(__imp__sub_83C61F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13704
	ctx.r3.s64 = ctx.r11.s64 + 13704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61F2C"))) PPC_WEAK_FUNC(sub_83C61F2C);
PPC_FUNC_IMPL(__imp__sub_83C61F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61F30"))) PPC_WEAK_FUNC(sub_83C61F30);
PPC_FUNC_IMPL(__imp__sub_83C61F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61F3C"))) PPC_WEAK_FUNC(sub_83C61F3C);
PPC_FUNC_IMPL(__imp__sub_83C61F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61F40"))) PPC_WEAK_FUNC(sub_83C61F40);
PPC_FUNC_IMPL(__imp__sub_83C61F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13720
	ctx.r3.s64 = ctx.r11.s64 + 13720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61F4C"))) PPC_WEAK_FUNC(sub_83C61F4C);
PPC_FUNC_IMPL(__imp__sub_83C61F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61F50"))) PPC_WEAK_FUNC(sub_83C61F50);
PPC_FUNC_IMPL(__imp__sub_83C61F50) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,6984
	ctx.r3.s64 = ctx.r11.s64 + 6984;
	// bl 0x83523120
	ctx.lr = 0x83C61F68;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13728
	ctx.r3.s64 = ctx.r10.s64 + 13728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C61F74;
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

__attribute__((alias("__imp__sub_83C61F84"))) PPC_WEAK_FUNC(sub_83C61F84);
PPC_FUNC_IMPL(__imp__sub_83C61F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61F88"))) PPC_WEAK_FUNC(sub_83C61F88);
PPC_FUNC_IMPL(__imp__sub_83C61F88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7000
	ctx.r7.s64 = ctx.r8.s64 + 7000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7000);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7000, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61FB0"))) PPC_WEAK_FUNC(sub_83C61FB0);
PPC_FUNC_IMPL(__imp__sub_83C61FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,30404
	ctx.r6.s64 = ctx.r7.s64 + 30404;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30332(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30332);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7000(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7000);
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
	// std r9,30404(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30404, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61FF8"))) PPC_WEAK_FUNC(sub_83C61FF8);
PPC_FUNC_IMPL(__imp__sub_83C61FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13744
	ctx.r3.s64 = ctx.r11.s64 + 13744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62004"))) PPC_WEAK_FUNC(sub_83C62004);
PPC_FUNC_IMPL(__imp__sub_83C62004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62008"))) PPC_WEAK_FUNC(sub_83C62008);
PPC_FUNC_IMPL(__imp__sub_83C62008) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,7008
	ctx.r3.s64 = ctx.r11.s64 + 7008;
	// bl 0x8259af80
	ctx.lr = 0x83C62020;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13760
	ctx.r3.s64 = ctx.r10.s64 + 13760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6202C;
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

__attribute__((alias("__imp__sub_83C6203C"))) PPC_WEAK_FUNC(sub_83C6203C);
PPC_FUNC_IMPL(__imp__sub_83C6203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62040"))) PPC_WEAK_FUNC(sub_83C62040);
PPC_FUNC_IMPL(__imp__sub_83C62040) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6988
	ctx.r11.s64 = ctx.r8.s64 + 6988;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,30380(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30380);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13752
	ctx.r3.s64 = ctx.r6.s64 + 13752;
	// stw r10,6988(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6988, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62070"))) PPC_WEAK_FUNC(sub_83C62070);
PPC_FUNC_IMPL(__imp__sub_83C62070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13768
	ctx.r3.s64 = ctx.r11.s64 + 13768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6207C"))) PPC_WEAK_FUNC(sub_83C6207C);
PPC_FUNC_IMPL(__imp__sub_83C6207C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62080"))) PPC_WEAK_FUNC(sub_83C62080);
PPC_FUNC_IMPL(__imp__sub_83C62080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13776
	ctx.r3.s64 = ctx.r11.s64 + 13776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6208C"))) PPC_WEAK_FUNC(sub_83C6208C);
PPC_FUNC_IMPL(__imp__sub_83C6208C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62090"))) PPC_WEAK_FUNC(sub_83C62090);
PPC_FUNC_IMPL(__imp__sub_83C62090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13784
	ctx.r3.s64 = ctx.r11.s64 + 13784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6209C"))) PPC_WEAK_FUNC(sub_83C6209C);
PPC_FUNC_IMPL(__imp__sub_83C6209C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C620A0"))) PPC_WEAK_FUNC(sub_83C620A0);
PPC_FUNC_IMPL(__imp__sub_83C620A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13792
	ctx.r3.s64 = ctx.r11.s64 + 13792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C620AC"))) PPC_WEAK_FUNC(sub_83C620AC);
PPC_FUNC_IMPL(__imp__sub_83C620AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C620B0"))) PPC_WEAK_FUNC(sub_83C620B0);
PPC_FUNC_IMPL(__imp__sub_83C620B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13800
	ctx.r3.s64 = ctx.r11.s64 + 13800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C620BC"))) PPC_WEAK_FUNC(sub_83C620BC);
PPC_FUNC_IMPL(__imp__sub_83C620BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C620C0"))) PPC_WEAK_FUNC(sub_83C620C0);
PPC_FUNC_IMPL(__imp__sub_83C620C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13808
	ctx.r3.s64 = ctx.r11.s64 + 13808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C620CC"))) PPC_WEAK_FUNC(sub_83C620CC);
PPC_FUNC_IMPL(__imp__sub_83C620CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C620D0"))) PPC_WEAK_FUNC(sub_83C620D0);
PPC_FUNC_IMPL(__imp__sub_83C620D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13816
	ctx.r3.s64 = ctx.r11.s64 + 13816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C620DC"))) PPC_WEAK_FUNC(sub_83C620DC);
PPC_FUNC_IMPL(__imp__sub_83C620DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C620E0"))) PPC_WEAK_FUNC(sub_83C620E0);
PPC_FUNC_IMPL(__imp__sub_83C620E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13824
	ctx.r3.s64 = ctx.r11.s64 + 13824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C620EC"))) PPC_WEAK_FUNC(sub_83C620EC);
PPC_FUNC_IMPL(__imp__sub_83C620EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C620F0"))) PPC_WEAK_FUNC(sub_83C620F0);
PPC_FUNC_IMPL(__imp__sub_83C620F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13832
	ctx.r3.s64 = ctx.r11.s64 + 13832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C620FC"))) PPC_WEAK_FUNC(sub_83C620FC);
PPC_FUNC_IMPL(__imp__sub_83C620FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62100"))) PPC_WEAK_FUNC(sub_83C62100);
PPC_FUNC_IMPL(__imp__sub_83C62100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13840
	ctx.r3.s64 = ctx.r11.s64 + 13840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6210C"))) PPC_WEAK_FUNC(sub_83C6210C);
PPC_FUNC_IMPL(__imp__sub_83C6210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62110"))) PPC_WEAK_FUNC(sub_83C62110);
PPC_FUNC_IMPL(__imp__sub_83C62110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13848
	ctx.r3.s64 = ctx.r11.s64 + 13848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6211C"))) PPC_WEAK_FUNC(sub_83C6211C);
PPC_FUNC_IMPL(__imp__sub_83C6211C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62120"))) PPC_WEAK_FUNC(sub_83C62120);
PPC_FUNC_IMPL(__imp__sub_83C62120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13856
	ctx.r3.s64 = ctx.r11.s64 + 13856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6212C"))) PPC_WEAK_FUNC(sub_83C6212C);
PPC_FUNC_IMPL(__imp__sub_83C6212C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62130"))) PPC_WEAK_FUNC(sub_83C62130);
PPC_FUNC_IMPL(__imp__sub_83C62130) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,7352
	ctx.r3.s64 = ctx.r11.s64 + 7352;
	// bl 0x83523120
	ctx.lr = 0x83C62148;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13864
	ctx.r3.s64 = ctx.r10.s64 + 13864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C62154;
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

__attribute__((alias("__imp__sub_83C62164"))) PPC_WEAK_FUNC(sub_83C62164);
PPC_FUNC_IMPL(__imp__sub_83C62164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62168"))) PPC_WEAK_FUNC(sub_83C62168);
PPC_FUNC_IMPL(__imp__sub_83C62168) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7368
	ctx.r7.s64 = ctx.r8.s64 + 7368;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7368(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7368);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7368, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C62190"))) PPC_WEAK_FUNC(sub_83C62190);
PPC_FUNC_IMPL(__imp__sub_83C62190) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,30532
	ctx.r6.s64 = ctx.r7.s64 + 30532;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30460(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30460);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7368(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7368);
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
	// std r9,30532(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30532, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C621D8"))) PPC_WEAK_FUNC(sub_83C621D8);
PPC_FUNC_IMPL(__imp__sub_83C621D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13880
	ctx.r3.s64 = ctx.r11.s64 + 13880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C621E4"))) PPC_WEAK_FUNC(sub_83C621E4);
PPC_FUNC_IMPL(__imp__sub_83C621E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C621E8"))) PPC_WEAK_FUNC(sub_83C621E8);
PPC_FUNC_IMPL(__imp__sub_83C621E8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,7376
	ctx.r3.s64 = ctx.r11.s64 + 7376;
	// bl 0x8259af80
	ctx.lr = 0x83C62200;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13896
	ctx.r3.s64 = ctx.r10.s64 + 13896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6220C;
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

__attribute__((alias("__imp__sub_83C6221C"))) PPC_WEAK_FUNC(sub_83C6221C);
PPC_FUNC_IMPL(__imp__sub_83C6221C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62220"))) PPC_WEAK_FUNC(sub_83C62220);
PPC_FUNC_IMPL(__imp__sub_83C62220) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7356
	ctx.r11.s64 = ctx.r8.s64 + 7356;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,30508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30508);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13888
	ctx.r3.s64 = ctx.r6.s64 + 13888;
	// stw r10,7356(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7356, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62250"))) PPC_WEAK_FUNC(sub_83C62250);
PPC_FUNC_IMPL(__imp__sub_83C62250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13904
	ctx.r3.s64 = ctx.r11.s64 + 13904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6225C"))) PPC_WEAK_FUNC(sub_83C6225C);
PPC_FUNC_IMPL(__imp__sub_83C6225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62260"))) PPC_WEAK_FUNC(sub_83C62260);
PPC_FUNC_IMPL(__imp__sub_83C62260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13912
	ctx.r3.s64 = ctx.r11.s64 + 13912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6226C"))) PPC_WEAK_FUNC(sub_83C6226C);
PPC_FUNC_IMPL(__imp__sub_83C6226C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62270"))) PPC_WEAK_FUNC(sub_83C62270);
PPC_FUNC_IMPL(__imp__sub_83C62270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13920
	ctx.r3.s64 = ctx.r11.s64 + 13920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6227C"))) PPC_WEAK_FUNC(sub_83C6227C);
PPC_FUNC_IMPL(__imp__sub_83C6227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62280"))) PPC_WEAK_FUNC(sub_83C62280);
PPC_FUNC_IMPL(__imp__sub_83C62280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13928
	ctx.r3.s64 = ctx.r11.s64 + 13928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6228C"))) PPC_WEAK_FUNC(sub_83C6228C);
PPC_FUNC_IMPL(__imp__sub_83C6228C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62290"))) PPC_WEAK_FUNC(sub_83C62290);
PPC_FUNC_IMPL(__imp__sub_83C62290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13936
	ctx.r3.s64 = ctx.r11.s64 + 13936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6229C"))) PPC_WEAK_FUNC(sub_83C6229C);
PPC_FUNC_IMPL(__imp__sub_83C6229C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C622A0"))) PPC_WEAK_FUNC(sub_83C622A0);
PPC_FUNC_IMPL(__imp__sub_83C622A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13944
	ctx.r3.s64 = ctx.r11.s64 + 13944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C622AC"))) PPC_WEAK_FUNC(sub_83C622AC);
PPC_FUNC_IMPL(__imp__sub_83C622AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C622B0"))) PPC_WEAK_FUNC(sub_83C622B0);
PPC_FUNC_IMPL(__imp__sub_83C622B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13952
	ctx.r3.s64 = ctx.r11.s64 + 13952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C622BC"))) PPC_WEAK_FUNC(sub_83C622BC);
PPC_FUNC_IMPL(__imp__sub_83C622BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C622C0"))) PPC_WEAK_FUNC(sub_83C622C0);
PPC_FUNC_IMPL(__imp__sub_83C622C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13960
	ctx.r3.s64 = ctx.r11.s64 + 13960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C622CC"))) PPC_WEAK_FUNC(sub_83C622CC);
PPC_FUNC_IMPL(__imp__sub_83C622CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C622D0"))) PPC_WEAK_FUNC(sub_83C622D0);
PPC_FUNC_IMPL(__imp__sub_83C622D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13968
	ctx.r3.s64 = ctx.r11.s64 + 13968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C622DC"))) PPC_WEAK_FUNC(sub_83C622DC);
PPC_FUNC_IMPL(__imp__sub_83C622DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C622E0"))) PPC_WEAK_FUNC(sub_83C622E0);
PPC_FUNC_IMPL(__imp__sub_83C622E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13976
	ctx.r3.s64 = ctx.r11.s64 + 13976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C622EC"))) PPC_WEAK_FUNC(sub_83C622EC);
PPC_FUNC_IMPL(__imp__sub_83C622EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C622F0"))) PPC_WEAK_FUNC(sub_83C622F0);
PPC_FUNC_IMPL(__imp__sub_83C622F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13984
	ctx.r3.s64 = ctx.r11.s64 + 13984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C622FC"))) PPC_WEAK_FUNC(sub_83C622FC);
PPC_FUNC_IMPL(__imp__sub_83C622FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62300"))) PPC_WEAK_FUNC(sub_83C62300);
PPC_FUNC_IMPL(__imp__sub_83C62300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13992
	ctx.r3.s64 = ctx.r11.s64 + 13992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6230C"))) PPC_WEAK_FUNC(sub_83C6230C);
PPC_FUNC_IMPL(__imp__sub_83C6230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62310"))) PPC_WEAK_FUNC(sub_83C62310);
PPC_FUNC_IMPL(__imp__sub_83C62310) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,7720
	ctx.r3.s64 = ctx.r11.s64 + 7720;
	// bl 0x83523120
	ctx.lr = 0x83C62328;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,14000
	ctx.r3.s64 = ctx.r10.s64 + 14000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C62334;
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

__attribute__((alias("__imp__sub_83C62344"))) PPC_WEAK_FUNC(sub_83C62344);
PPC_FUNC_IMPL(__imp__sub_83C62344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62348"))) PPC_WEAK_FUNC(sub_83C62348);
PPC_FUNC_IMPL(__imp__sub_83C62348) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7736
	ctx.r7.s64 = ctx.r8.s64 + 7736;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7736);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7736(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7736, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C62370"))) PPC_WEAK_FUNC(sub_83C62370);
PPC_FUNC_IMPL(__imp__sub_83C62370) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,30660
	ctx.r6.s64 = ctx.r7.s64 + 30660;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30588(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30588);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7736(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7736);
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
	// std r9,30660(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30660, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C623B8"))) PPC_WEAK_FUNC(sub_83C623B8);
PPC_FUNC_IMPL(__imp__sub_83C623B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14016
	ctx.r3.s64 = ctx.r11.s64 + 14016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C623C4"))) PPC_WEAK_FUNC(sub_83C623C4);
PPC_FUNC_IMPL(__imp__sub_83C623C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C623C8"))) PPC_WEAK_FUNC(sub_83C623C8);
PPC_FUNC_IMPL(__imp__sub_83C623C8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,7744
	ctx.r3.s64 = ctx.r11.s64 + 7744;
	// bl 0x8259af80
	ctx.lr = 0x83C623E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,14032
	ctx.r3.s64 = ctx.r10.s64 + 14032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C623EC;
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

__attribute__((alias("__imp__sub_83C623FC"))) PPC_WEAK_FUNC(sub_83C623FC);
PPC_FUNC_IMPL(__imp__sub_83C623FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62400"))) PPC_WEAK_FUNC(sub_83C62400);
PPC_FUNC_IMPL(__imp__sub_83C62400) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7724
	ctx.r11.s64 = ctx.r8.s64 + 7724;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,30636(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30636);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14024
	ctx.r3.s64 = ctx.r6.s64 + 14024;
	// stw r10,7724(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7724, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62430"))) PPC_WEAK_FUNC(sub_83C62430);
PPC_FUNC_IMPL(__imp__sub_83C62430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14040
	ctx.r3.s64 = ctx.r11.s64 + 14040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6243C"))) PPC_WEAK_FUNC(sub_83C6243C);
PPC_FUNC_IMPL(__imp__sub_83C6243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62440"))) PPC_WEAK_FUNC(sub_83C62440);
PPC_FUNC_IMPL(__imp__sub_83C62440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14048
	ctx.r3.s64 = ctx.r11.s64 + 14048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6244C"))) PPC_WEAK_FUNC(sub_83C6244C);
PPC_FUNC_IMPL(__imp__sub_83C6244C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62450"))) PPC_WEAK_FUNC(sub_83C62450);
PPC_FUNC_IMPL(__imp__sub_83C62450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14056
	ctx.r3.s64 = ctx.r11.s64 + 14056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6245C"))) PPC_WEAK_FUNC(sub_83C6245C);
PPC_FUNC_IMPL(__imp__sub_83C6245C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62460"))) PPC_WEAK_FUNC(sub_83C62460);
PPC_FUNC_IMPL(__imp__sub_83C62460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14064
	ctx.r3.s64 = ctx.r11.s64 + 14064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6246C"))) PPC_WEAK_FUNC(sub_83C6246C);
PPC_FUNC_IMPL(__imp__sub_83C6246C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62470"))) PPC_WEAK_FUNC(sub_83C62470);
PPC_FUNC_IMPL(__imp__sub_83C62470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14072
	ctx.r3.s64 = ctx.r11.s64 + 14072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6247C"))) PPC_WEAK_FUNC(sub_83C6247C);
PPC_FUNC_IMPL(__imp__sub_83C6247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62480"))) PPC_WEAK_FUNC(sub_83C62480);
PPC_FUNC_IMPL(__imp__sub_83C62480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14080
	ctx.r3.s64 = ctx.r11.s64 + 14080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6248C"))) PPC_WEAK_FUNC(sub_83C6248C);
PPC_FUNC_IMPL(__imp__sub_83C6248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62490"))) PPC_WEAK_FUNC(sub_83C62490);
PPC_FUNC_IMPL(__imp__sub_83C62490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14088
	ctx.r3.s64 = ctx.r11.s64 + 14088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6249C"))) PPC_WEAK_FUNC(sub_83C6249C);
PPC_FUNC_IMPL(__imp__sub_83C6249C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C624A0"))) PPC_WEAK_FUNC(sub_83C624A0);
PPC_FUNC_IMPL(__imp__sub_83C624A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14096
	ctx.r3.s64 = ctx.r11.s64 + 14096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C624AC"))) PPC_WEAK_FUNC(sub_83C624AC);
PPC_FUNC_IMPL(__imp__sub_83C624AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C624B0"))) PPC_WEAK_FUNC(sub_83C624B0);
PPC_FUNC_IMPL(__imp__sub_83C624B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14104
	ctx.r3.s64 = ctx.r11.s64 + 14104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C624BC"))) PPC_WEAK_FUNC(sub_83C624BC);
PPC_FUNC_IMPL(__imp__sub_83C624BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C624C0"))) PPC_WEAK_FUNC(sub_83C624C0);
PPC_FUNC_IMPL(__imp__sub_83C624C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14112
	ctx.r3.s64 = ctx.r11.s64 + 14112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C624CC"))) PPC_WEAK_FUNC(sub_83C624CC);
PPC_FUNC_IMPL(__imp__sub_83C624CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C624D0"))) PPC_WEAK_FUNC(sub_83C624D0);
PPC_FUNC_IMPL(__imp__sub_83C624D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14120
	ctx.r3.s64 = ctx.r11.s64 + 14120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C624DC"))) PPC_WEAK_FUNC(sub_83C624DC);
PPC_FUNC_IMPL(__imp__sub_83C624DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C624E0"))) PPC_WEAK_FUNC(sub_83C624E0);
PPC_FUNC_IMPL(__imp__sub_83C624E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14128
	ctx.r3.s64 = ctx.r11.s64 + 14128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C624EC"))) PPC_WEAK_FUNC(sub_83C624EC);
PPC_FUNC_IMPL(__imp__sub_83C624EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C624F0"))) PPC_WEAK_FUNC(sub_83C624F0);
PPC_FUNC_IMPL(__imp__sub_83C624F0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,8088
	ctx.r3.s64 = ctx.r11.s64 + 8088;
	// bl 0x83523120
	ctx.lr = 0x83C62508;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,14136
	ctx.r3.s64 = ctx.r10.s64 + 14136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C62514;
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

__attribute__((alias("__imp__sub_83C62524"))) PPC_WEAK_FUNC(sub_83C62524);
PPC_FUNC_IMPL(__imp__sub_83C62524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62528"))) PPC_WEAK_FUNC(sub_83C62528);
PPC_FUNC_IMPL(__imp__sub_83C62528) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8104
	ctx.r7.s64 = ctx.r8.s64 + 8104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8104);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8104, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C62550"))) PPC_WEAK_FUNC(sub_83C62550);
PPC_FUNC_IMPL(__imp__sub_83C62550) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,30788
	ctx.r6.s64 = ctx.r7.s64 + 30788;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30716(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30716);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8104);
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
	// std r9,30788(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30788, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C62598"))) PPC_WEAK_FUNC(sub_83C62598);
PPC_FUNC_IMPL(__imp__sub_83C62598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14152
	ctx.r3.s64 = ctx.r11.s64 + 14152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C625A4"))) PPC_WEAK_FUNC(sub_83C625A4);
PPC_FUNC_IMPL(__imp__sub_83C625A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C625A8"))) PPC_WEAK_FUNC(sub_83C625A8);
PPC_FUNC_IMPL(__imp__sub_83C625A8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,8112
	ctx.r3.s64 = ctx.r11.s64 + 8112;
	// bl 0x8259af80
	ctx.lr = 0x83C625C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,14168
	ctx.r3.s64 = ctx.r10.s64 + 14168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C625CC;
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

__attribute__((alias("__imp__sub_83C625DC"))) PPC_WEAK_FUNC(sub_83C625DC);
PPC_FUNC_IMPL(__imp__sub_83C625DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C625E0"))) PPC_WEAK_FUNC(sub_83C625E0);
PPC_FUNC_IMPL(__imp__sub_83C625E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8092
	ctx.r11.s64 = ctx.r8.s64 + 8092;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,30764(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30764);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14160
	ctx.r3.s64 = ctx.r6.s64 + 14160;
	// stw r10,8092(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8092, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62610"))) PPC_WEAK_FUNC(sub_83C62610);
PPC_FUNC_IMPL(__imp__sub_83C62610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14176
	ctx.r3.s64 = ctx.r11.s64 + 14176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6261C"))) PPC_WEAK_FUNC(sub_83C6261C);
PPC_FUNC_IMPL(__imp__sub_83C6261C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62620"))) PPC_WEAK_FUNC(sub_83C62620);
PPC_FUNC_IMPL(__imp__sub_83C62620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14184
	ctx.r3.s64 = ctx.r11.s64 + 14184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6262C"))) PPC_WEAK_FUNC(sub_83C6262C);
PPC_FUNC_IMPL(__imp__sub_83C6262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62630"))) PPC_WEAK_FUNC(sub_83C62630);
PPC_FUNC_IMPL(__imp__sub_83C62630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14192
	ctx.r3.s64 = ctx.r11.s64 + 14192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6263C"))) PPC_WEAK_FUNC(sub_83C6263C);
PPC_FUNC_IMPL(__imp__sub_83C6263C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62640"))) PPC_WEAK_FUNC(sub_83C62640);
PPC_FUNC_IMPL(__imp__sub_83C62640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14200
	ctx.r3.s64 = ctx.r11.s64 + 14200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6264C"))) PPC_WEAK_FUNC(sub_83C6264C);
PPC_FUNC_IMPL(__imp__sub_83C6264C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62650"))) PPC_WEAK_FUNC(sub_83C62650);
PPC_FUNC_IMPL(__imp__sub_83C62650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14208
	ctx.r3.s64 = ctx.r11.s64 + 14208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6265C"))) PPC_WEAK_FUNC(sub_83C6265C);
PPC_FUNC_IMPL(__imp__sub_83C6265C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62660"))) PPC_WEAK_FUNC(sub_83C62660);
PPC_FUNC_IMPL(__imp__sub_83C62660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14216
	ctx.r3.s64 = ctx.r11.s64 + 14216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6266C"))) PPC_WEAK_FUNC(sub_83C6266C);
PPC_FUNC_IMPL(__imp__sub_83C6266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62670"))) PPC_WEAK_FUNC(sub_83C62670);
PPC_FUNC_IMPL(__imp__sub_83C62670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14224
	ctx.r3.s64 = ctx.r11.s64 + 14224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6267C"))) PPC_WEAK_FUNC(sub_83C6267C);
PPC_FUNC_IMPL(__imp__sub_83C6267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62680"))) PPC_WEAK_FUNC(sub_83C62680);
PPC_FUNC_IMPL(__imp__sub_83C62680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14232
	ctx.r3.s64 = ctx.r11.s64 + 14232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6268C"))) PPC_WEAK_FUNC(sub_83C6268C);
PPC_FUNC_IMPL(__imp__sub_83C6268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62690"))) PPC_WEAK_FUNC(sub_83C62690);
PPC_FUNC_IMPL(__imp__sub_83C62690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14240
	ctx.r3.s64 = ctx.r11.s64 + 14240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6269C"))) PPC_WEAK_FUNC(sub_83C6269C);
PPC_FUNC_IMPL(__imp__sub_83C6269C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C626A0"))) PPC_WEAK_FUNC(sub_83C626A0);
PPC_FUNC_IMPL(__imp__sub_83C626A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14248
	ctx.r3.s64 = ctx.r11.s64 + 14248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C626AC"))) PPC_WEAK_FUNC(sub_83C626AC);
PPC_FUNC_IMPL(__imp__sub_83C626AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C626B0"))) PPC_WEAK_FUNC(sub_83C626B0);
PPC_FUNC_IMPL(__imp__sub_83C626B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14256
	ctx.r3.s64 = ctx.r11.s64 + 14256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C626BC"))) PPC_WEAK_FUNC(sub_83C626BC);
PPC_FUNC_IMPL(__imp__sub_83C626BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C626C0"))) PPC_WEAK_FUNC(sub_83C626C0);
PPC_FUNC_IMPL(__imp__sub_83C626C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C626CC"))) PPC_WEAK_FUNC(sub_83C626CC);
PPC_FUNC_IMPL(__imp__sub_83C626CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C626D0"))) PPC_WEAK_FUNC(sub_83C626D0);
PPC_FUNC_IMPL(__imp__sub_83C626D0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,8456
	ctx.r3.s64 = ctx.r11.s64 + 8456;
	// bl 0x83523120
	ctx.lr = 0x83C626E8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,14272
	ctx.r3.s64 = ctx.r10.s64 + 14272;
	// bl 0x831cdcc8
	ctx.lr = 0x83C626F4;
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

__attribute__((alias("__imp__sub_83C62704"))) PPC_WEAK_FUNC(sub_83C62704);
PPC_FUNC_IMPL(__imp__sub_83C62704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62708"))) PPC_WEAK_FUNC(sub_83C62708);
PPC_FUNC_IMPL(__imp__sub_83C62708) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8472
	ctx.r7.s64 = ctx.r8.s64 + 8472;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8472(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8472);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8472(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8472, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C62730"))) PPC_WEAK_FUNC(sub_83C62730);
PPC_FUNC_IMPL(__imp__sub_83C62730) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,30916
	ctx.r6.s64 = ctx.r7.s64 + 30916;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30844(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30844);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8472(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8472);
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
	// std r9,30916(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30916, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C62778"))) PPC_WEAK_FUNC(sub_83C62778);
PPC_FUNC_IMPL(__imp__sub_83C62778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14288
	ctx.r3.s64 = ctx.r11.s64 + 14288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62784"))) PPC_WEAK_FUNC(sub_83C62784);
PPC_FUNC_IMPL(__imp__sub_83C62784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62788"))) PPC_WEAK_FUNC(sub_83C62788);
PPC_FUNC_IMPL(__imp__sub_83C62788) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,8480
	ctx.r3.s64 = ctx.r11.s64 + 8480;
	// bl 0x8259af80
	ctx.lr = 0x83C627A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,14304
	ctx.r3.s64 = ctx.r10.s64 + 14304;
	// bl 0x831cdcc8
	ctx.lr = 0x83C627AC;
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

__attribute__((alias("__imp__sub_83C627BC"))) PPC_WEAK_FUNC(sub_83C627BC);
PPC_FUNC_IMPL(__imp__sub_83C627BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C627C0"))) PPC_WEAK_FUNC(sub_83C627C0);
PPC_FUNC_IMPL(__imp__sub_83C627C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8460
	ctx.r11.s64 = ctx.r8.s64 + 8460;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,30892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30892);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14296
	ctx.r3.s64 = ctx.r6.s64 + 14296;
	// stw r10,8460(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8460, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C627F0"))) PPC_WEAK_FUNC(sub_83C627F0);
PPC_FUNC_IMPL(__imp__sub_83C627F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14312
	ctx.r3.s64 = ctx.r11.s64 + 14312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C627FC"))) PPC_WEAK_FUNC(sub_83C627FC);
PPC_FUNC_IMPL(__imp__sub_83C627FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62800"))) PPC_WEAK_FUNC(sub_83C62800);
PPC_FUNC_IMPL(__imp__sub_83C62800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14320
	ctx.r3.s64 = ctx.r11.s64 + 14320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6280C"))) PPC_WEAK_FUNC(sub_83C6280C);
PPC_FUNC_IMPL(__imp__sub_83C6280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62810"))) PPC_WEAK_FUNC(sub_83C62810);
PPC_FUNC_IMPL(__imp__sub_83C62810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14328
	ctx.r3.s64 = ctx.r11.s64 + 14328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6281C"))) PPC_WEAK_FUNC(sub_83C6281C);
PPC_FUNC_IMPL(__imp__sub_83C6281C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62820"))) PPC_WEAK_FUNC(sub_83C62820);
PPC_FUNC_IMPL(__imp__sub_83C62820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14336
	ctx.r3.s64 = ctx.r11.s64 + 14336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6282C"))) PPC_WEAK_FUNC(sub_83C6282C);
PPC_FUNC_IMPL(__imp__sub_83C6282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62830"))) PPC_WEAK_FUNC(sub_83C62830);
PPC_FUNC_IMPL(__imp__sub_83C62830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14344
	ctx.r3.s64 = ctx.r11.s64 + 14344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6283C"))) PPC_WEAK_FUNC(sub_83C6283C);
PPC_FUNC_IMPL(__imp__sub_83C6283C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62840"))) PPC_WEAK_FUNC(sub_83C62840);
PPC_FUNC_IMPL(__imp__sub_83C62840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14352
	ctx.r3.s64 = ctx.r11.s64 + 14352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6284C"))) PPC_WEAK_FUNC(sub_83C6284C);
PPC_FUNC_IMPL(__imp__sub_83C6284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62850"))) PPC_WEAK_FUNC(sub_83C62850);
PPC_FUNC_IMPL(__imp__sub_83C62850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14360
	ctx.r3.s64 = ctx.r11.s64 + 14360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6285C"))) PPC_WEAK_FUNC(sub_83C6285C);
PPC_FUNC_IMPL(__imp__sub_83C6285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62860"))) PPC_WEAK_FUNC(sub_83C62860);
PPC_FUNC_IMPL(__imp__sub_83C62860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14368
	ctx.r3.s64 = ctx.r11.s64 + 14368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6286C"))) PPC_WEAK_FUNC(sub_83C6286C);
PPC_FUNC_IMPL(__imp__sub_83C6286C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62870"))) PPC_WEAK_FUNC(sub_83C62870);
PPC_FUNC_IMPL(__imp__sub_83C62870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14376
	ctx.r3.s64 = ctx.r11.s64 + 14376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6287C"))) PPC_WEAK_FUNC(sub_83C6287C);
PPC_FUNC_IMPL(__imp__sub_83C6287C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62880"))) PPC_WEAK_FUNC(sub_83C62880);
PPC_FUNC_IMPL(__imp__sub_83C62880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14384
	ctx.r3.s64 = ctx.r11.s64 + 14384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6288C"))) PPC_WEAK_FUNC(sub_83C6288C);
PPC_FUNC_IMPL(__imp__sub_83C6288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62890"))) PPC_WEAK_FUNC(sub_83C62890);
PPC_FUNC_IMPL(__imp__sub_83C62890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14392
	ctx.r3.s64 = ctx.r11.s64 + 14392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6289C"))) PPC_WEAK_FUNC(sub_83C6289C);
PPC_FUNC_IMPL(__imp__sub_83C6289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C628A0"))) PPC_WEAK_FUNC(sub_83C628A0);
PPC_FUNC_IMPL(__imp__sub_83C628A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14400
	ctx.r3.s64 = ctx.r11.s64 + 14400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C628AC"))) PPC_WEAK_FUNC(sub_83C628AC);
PPC_FUNC_IMPL(__imp__sub_83C628AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C628B0"))) PPC_WEAK_FUNC(sub_83C628B0);
PPC_FUNC_IMPL(__imp__sub_83C628B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8840
	ctx.r7.s64 = ctx.r8.s64 + 8840;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8840(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8840);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8840(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8840, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C628D8"))) PPC_WEAK_FUNC(sub_83C628D8);
PPC_FUNC_IMPL(__imp__sub_83C628D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,31044
	ctx.r6.s64 = ctx.r7.s64 + 31044;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30972(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30972);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8840(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8840);
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
	// std r9,31044(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31044, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C62920"))) PPC_WEAK_FUNC(sub_83C62920);
PPC_FUNC_IMPL(__imp__sub_83C62920) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,8824
	ctx.r3.s64 = ctx.r11.s64 + 8824;
	// bl 0x83523120
	ctx.lr = 0x83C62938;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,14408
	ctx.r3.s64 = ctx.r10.s64 + 14408;
	// bl 0x831cdcc8
	ctx.lr = 0x83C62944;
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

__attribute__((alias("__imp__sub_83C62954"))) PPC_WEAK_FUNC(sub_83C62954);
PPC_FUNC_IMPL(__imp__sub_83C62954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62958"))) PPC_WEAK_FUNC(sub_83C62958);
PPC_FUNC_IMPL(__imp__sub_83C62958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14424
	ctx.r3.s64 = ctx.r11.s64 + 14424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62964"))) PPC_WEAK_FUNC(sub_83C62964);
PPC_FUNC_IMPL(__imp__sub_83C62964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62968"))) PPC_WEAK_FUNC(sub_83C62968);
PPC_FUNC_IMPL(__imp__sub_83C62968) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,8848
	ctx.r3.s64 = ctx.r11.s64 + 8848;
	// bl 0x8259af80
	ctx.lr = 0x83C62980;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,14440
	ctx.r3.s64 = ctx.r10.s64 + 14440;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6298C;
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

__attribute__((alias("__imp__sub_83C6299C"))) PPC_WEAK_FUNC(sub_83C6299C);
PPC_FUNC_IMPL(__imp__sub_83C6299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C629A0"))) PPC_WEAK_FUNC(sub_83C629A0);
PPC_FUNC_IMPL(__imp__sub_83C629A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8828
	ctx.r11.s64 = ctx.r8.s64 + 8828;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,31020(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31020);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14432
	ctx.r3.s64 = ctx.r6.s64 + 14432;
	// stw r10,8828(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8828, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C629D0"))) PPC_WEAK_FUNC(sub_83C629D0);
PPC_FUNC_IMPL(__imp__sub_83C629D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14448
	ctx.r3.s64 = ctx.r11.s64 + 14448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C629DC"))) PPC_WEAK_FUNC(sub_83C629DC);
PPC_FUNC_IMPL(__imp__sub_83C629DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C629E0"))) PPC_WEAK_FUNC(sub_83C629E0);
PPC_FUNC_IMPL(__imp__sub_83C629E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14456
	ctx.r3.s64 = ctx.r11.s64 + 14456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C629EC"))) PPC_WEAK_FUNC(sub_83C629EC);
PPC_FUNC_IMPL(__imp__sub_83C629EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C629F0"))) PPC_WEAK_FUNC(sub_83C629F0);
PPC_FUNC_IMPL(__imp__sub_83C629F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14464
	ctx.r3.s64 = ctx.r11.s64 + 14464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C629FC"))) PPC_WEAK_FUNC(sub_83C629FC);
PPC_FUNC_IMPL(__imp__sub_83C629FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62A00"))) PPC_WEAK_FUNC(sub_83C62A00);
PPC_FUNC_IMPL(__imp__sub_83C62A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14472
	ctx.r3.s64 = ctx.r11.s64 + 14472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62A0C"))) PPC_WEAK_FUNC(sub_83C62A0C);
PPC_FUNC_IMPL(__imp__sub_83C62A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62A10"))) PPC_WEAK_FUNC(sub_83C62A10);
PPC_FUNC_IMPL(__imp__sub_83C62A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14480
	ctx.r3.s64 = ctx.r11.s64 + 14480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62A1C"))) PPC_WEAK_FUNC(sub_83C62A1C);
PPC_FUNC_IMPL(__imp__sub_83C62A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62A20"))) PPC_WEAK_FUNC(sub_83C62A20);
PPC_FUNC_IMPL(__imp__sub_83C62A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62A2C"))) PPC_WEAK_FUNC(sub_83C62A2C);
PPC_FUNC_IMPL(__imp__sub_83C62A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62A30"))) PPC_WEAK_FUNC(sub_83C62A30);
PPC_FUNC_IMPL(__imp__sub_83C62A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62A3C"))) PPC_WEAK_FUNC(sub_83C62A3C);
PPC_FUNC_IMPL(__imp__sub_83C62A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62A40"))) PPC_WEAK_FUNC(sub_83C62A40);
PPC_FUNC_IMPL(__imp__sub_83C62A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14504
	ctx.r3.s64 = ctx.r11.s64 + 14504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62A4C"))) PPC_WEAK_FUNC(sub_83C62A4C);
PPC_FUNC_IMPL(__imp__sub_83C62A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62A50"))) PPC_WEAK_FUNC(sub_83C62A50);
PPC_FUNC_IMPL(__imp__sub_83C62A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14512
	ctx.r3.s64 = ctx.r11.s64 + 14512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62A5C"))) PPC_WEAK_FUNC(sub_83C62A5C);
PPC_FUNC_IMPL(__imp__sub_83C62A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62A60"))) PPC_WEAK_FUNC(sub_83C62A60);
PPC_FUNC_IMPL(__imp__sub_83C62A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14520
	ctx.r3.s64 = ctx.r11.s64 + 14520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62A6C"))) PPC_WEAK_FUNC(sub_83C62A6C);
PPC_FUNC_IMPL(__imp__sub_83C62A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62A70"))) PPC_WEAK_FUNC(sub_83C62A70);
PPC_FUNC_IMPL(__imp__sub_83C62A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62A7C"))) PPC_WEAK_FUNC(sub_83C62A7C);
PPC_FUNC_IMPL(__imp__sub_83C62A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62A80"))) PPC_WEAK_FUNC(sub_83C62A80);
PPC_FUNC_IMPL(__imp__sub_83C62A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14536
	ctx.r3.s64 = ctx.r11.s64 + 14536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62A8C"))) PPC_WEAK_FUNC(sub_83C62A8C);
PPC_FUNC_IMPL(__imp__sub_83C62A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62A90"))) PPC_WEAK_FUNC(sub_83C62A90);
PPC_FUNC_IMPL(__imp__sub_83C62A90) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,9192
	ctx.r3.s64 = ctx.r11.s64 + 9192;
	// bl 0x83523120
	ctx.lr = 0x83C62AA8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,14544
	ctx.r3.s64 = ctx.r10.s64 + 14544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C62AB4;
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

__attribute__((alias("__imp__sub_83C62AC4"))) PPC_WEAK_FUNC(sub_83C62AC4);
PPC_FUNC_IMPL(__imp__sub_83C62AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62AC8"))) PPC_WEAK_FUNC(sub_83C62AC8);
PPC_FUNC_IMPL(__imp__sub_83C62AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9208
	ctx.r7.s64 = ctx.r8.s64 + 9208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9208(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9208);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9208(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9208, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C62AF0"))) PPC_WEAK_FUNC(sub_83C62AF0);
PPC_FUNC_IMPL(__imp__sub_83C62AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,31172
	ctx.r6.s64 = ctx.r7.s64 + 31172;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31100(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31100);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9208(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9208);
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
	// std r9,31172(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31172, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C62B38"))) PPC_WEAK_FUNC(sub_83C62B38);
PPC_FUNC_IMPL(__imp__sub_83C62B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14560
	ctx.r3.s64 = ctx.r11.s64 + 14560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62B44"))) PPC_WEAK_FUNC(sub_83C62B44);
PPC_FUNC_IMPL(__imp__sub_83C62B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62B48"))) PPC_WEAK_FUNC(sub_83C62B48);
PPC_FUNC_IMPL(__imp__sub_83C62B48) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,9216
	ctx.r3.s64 = ctx.r11.s64 + 9216;
	// bl 0x8259af80
	ctx.lr = 0x83C62B60;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,14576
	ctx.r3.s64 = ctx.r10.s64 + 14576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C62B6C;
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

__attribute__((alias("__imp__sub_83C62B7C"))) PPC_WEAK_FUNC(sub_83C62B7C);
PPC_FUNC_IMPL(__imp__sub_83C62B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62B80"))) PPC_WEAK_FUNC(sub_83C62B80);
PPC_FUNC_IMPL(__imp__sub_83C62B80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9196
	ctx.r11.s64 = ctx.r8.s64 + 9196;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,31148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31148);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14568
	ctx.r3.s64 = ctx.r6.s64 + 14568;
	// stw r10,9196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9196, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62BB0"))) PPC_WEAK_FUNC(sub_83C62BB0);
PPC_FUNC_IMPL(__imp__sub_83C62BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14584
	ctx.r3.s64 = ctx.r11.s64 + 14584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62BBC"))) PPC_WEAK_FUNC(sub_83C62BBC);
PPC_FUNC_IMPL(__imp__sub_83C62BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62BC0"))) PPC_WEAK_FUNC(sub_83C62BC0);
PPC_FUNC_IMPL(__imp__sub_83C62BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14592
	ctx.r3.s64 = ctx.r11.s64 + 14592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62BCC"))) PPC_WEAK_FUNC(sub_83C62BCC);
PPC_FUNC_IMPL(__imp__sub_83C62BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62BD0"))) PPC_WEAK_FUNC(sub_83C62BD0);
PPC_FUNC_IMPL(__imp__sub_83C62BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14600
	ctx.r3.s64 = ctx.r11.s64 + 14600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62BDC"))) PPC_WEAK_FUNC(sub_83C62BDC);
PPC_FUNC_IMPL(__imp__sub_83C62BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62BE0"))) PPC_WEAK_FUNC(sub_83C62BE0);
PPC_FUNC_IMPL(__imp__sub_83C62BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14608
	ctx.r3.s64 = ctx.r11.s64 + 14608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62BEC"))) PPC_WEAK_FUNC(sub_83C62BEC);
PPC_FUNC_IMPL(__imp__sub_83C62BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62BF0"))) PPC_WEAK_FUNC(sub_83C62BF0);
PPC_FUNC_IMPL(__imp__sub_83C62BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14616
	ctx.r3.s64 = ctx.r11.s64 + 14616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62BFC"))) PPC_WEAK_FUNC(sub_83C62BFC);
PPC_FUNC_IMPL(__imp__sub_83C62BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62C00"))) PPC_WEAK_FUNC(sub_83C62C00);
PPC_FUNC_IMPL(__imp__sub_83C62C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14624
	ctx.r3.s64 = ctx.r11.s64 + 14624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62C0C"))) PPC_WEAK_FUNC(sub_83C62C0C);
PPC_FUNC_IMPL(__imp__sub_83C62C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62C10"))) PPC_WEAK_FUNC(sub_83C62C10);
PPC_FUNC_IMPL(__imp__sub_83C62C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14632
	ctx.r3.s64 = ctx.r11.s64 + 14632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62C1C"))) PPC_WEAK_FUNC(sub_83C62C1C);
PPC_FUNC_IMPL(__imp__sub_83C62C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62C20"))) PPC_WEAK_FUNC(sub_83C62C20);
PPC_FUNC_IMPL(__imp__sub_83C62C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14640
	ctx.r3.s64 = ctx.r11.s64 + 14640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62C2C"))) PPC_WEAK_FUNC(sub_83C62C2C);
PPC_FUNC_IMPL(__imp__sub_83C62C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62C30"))) PPC_WEAK_FUNC(sub_83C62C30);
PPC_FUNC_IMPL(__imp__sub_83C62C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14648
	ctx.r3.s64 = ctx.r11.s64 + 14648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62C3C"))) PPC_WEAK_FUNC(sub_83C62C3C);
PPC_FUNC_IMPL(__imp__sub_83C62C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62C40"))) PPC_WEAK_FUNC(sub_83C62C40);
PPC_FUNC_IMPL(__imp__sub_83C62C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14656
	ctx.r3.s64 = ctx.r11.s64 + 14656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62C4C"))) PPC_WEAK_FUNC(sub_83C62C4C);
PPC_FUNC_IMPL(__imp__sub_83C62C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62C50"))) PPC_WEAK_FUNC(sub_83C62C50);
PPC_FUNC_IMPL(__imp__sub_83C62C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14664
	ctx.r3.s64 = ctx.r11.s64 + 14664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62C5C"))) PPC_WEAK_FUNC(sub_83C62C5C);
PPC_FUNC_IMPL(__imp__sub_83C62C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62C60"))) PPC_WEAK_FUNC(sub_83C62C60);
PPC_FUNC_IMPL(__imp__sub_83C62C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14672
	ctx.r3.s64 = ctx.r11.s64 + 14672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62C6C"))) PPC_WEAK_FUNC(sub_83C62C6C);
PPC_FUNC_IMPL(__imp__sub_83C62C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62C70"))) PPC_WEAK_FUNC(sub_83C62C70);
PPC_FUNC_IMPL(__imp__sub_83C62C70) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,9560
	ctx.r3.s64 = ctx.r11.s64 + 9560;
	// bl 0x83523120
	ctx.lr = 0x83C62C88;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,14680
	ctx.r3.s64 = ctx.r10.s64 + 14680;
	// bl 0x831cdcc8
	ctx.lr = 0x83C62C94;
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

__attribute__((alias("__imp__sub_83C62CA4"))) PPC_WEAK_FUNC(sub_83C62CA4);
PPC_FUNC_IMPL(__imp__sub_83C62CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62CA8"))) PPC_WEAK_FUNC(sub_83C62CA8);
PPC_FUNC_IMPL(__imp__sub_83C62CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9576
	ctx.r7.s64 = ctx.r8.s64 + 9576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9576(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9576);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9576(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9576, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C62CD0"))) PPC_WEAK_FUNC(sub_83C62CD0);
PPC_FUNC_IMPL(__imp__sub_83C62CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,31300
	ctx.r6.s64 = ctx.r7.s64 + 31300;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31228(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31228);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9576(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9576);
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
	// std r9,31300(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31300, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C62D18"))) PPC_WEAK_FUNC(sub_83C62D18);
PPC_FUNC_IMPL(__imp__sub_83C62D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14696
	ctx.r3.s64 = ctx.r11.s64 + 14696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62D24"))) PPC_WEAK_FUNC(sub_83C62D24);
PPC_FUNC_IMPL(__imp__sub_83C62D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62D28"))) PPC_WEAK_FUNC(sub_83C62D28);
PPC_FUNC_IMPL(__imp__sub_83C62D28) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,9584
	ctx.r3.s64 = ctx.r11.s64 + 9584;
	// bl 0x8259af80
	ctx.lr = 0x83C62D40;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,14712
	ctx.r3.s64 = ctx.r10.s64 + 14712;
	// bl 0x831cdcc8
	ctx.lr = 0x83C62D4C;
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

__attribute__((alias("__imp__sub_83C62D5C"))) PPC_WEAK_FUNC(sub_83C62D5C);
PPC_FUNC_IMPL(__imp__sub_83C62D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62D60"))) PPC_WEAK_FUNC(sub_83C62D60);
PPC_FUNC_IMPL(__imp__sub_83C62D60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9564
	ctx.r11.s64 = ctx.r8.s64 + 9564;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,31276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31276);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14704
	ctx.r3.s64 = ctx.r6.s64 + 14704;
	// stw r10,9564(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9564, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62D90"))) PPC_WEAK_FUNC(sub_83C62D90);
PPC_FUNC_IMPL(__imp__sub_83C62D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14720
	ctx.r3.s64 = ctx.r11.s64 + 14720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62D9C"))) PPC_WEAK_FUNC(sub_83C62D9C);
PPC_FUNC_IMPL(__imp__sub_83C62D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62DA0"))) PPC_WEAK_FUNC(sub_83C62DA0);
PPC_FUNC_IMPL(__imp__sub_83C62DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14728
	ctx.r3.s64 = ctx.r11.s64 + 14728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62DAC"))) PPC_WEAK_FUNC(sub_83C62DAC);
PPC_FUNC_IMPL(__imp__sub_83C62DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62DB0"))) PPC_WEAK_FUNC(sub_83C62DB0);
PPC_FUNC_IMPL(__imp__sub_83C62DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14736
	ctx.r3.s64 = ctx.r11.s64 + 14736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62DBC"))) PPC_WEAK_FUNC(sub_83C62DBC);
PPC_FUNC_IMPL(__imp__sub_83C62DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C62DC0"))) PPC_WEAK_FUNC(sub_83C62DC0);
PPC_FUNC_IMPL(__imp__sub_83C62DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,14744
	ctx.r3.s64 = ctx.r11.s64 + 14744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C62DCC"))) PPC_WEAK_FUNC(sub_83C62DCC);
PPC_FUNC_IMPL(__imp__sub_83C62DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

