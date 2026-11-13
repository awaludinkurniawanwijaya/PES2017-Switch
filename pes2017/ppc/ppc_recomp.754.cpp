#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C31F20"))) PPC_WEAK_FUNC(sub_83C31F20);
PPC_FUNC_IMPL(__imp__sub_83C31F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16912
	ctx.r3.s64 = ctx.r11.s64 + 16912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31F2C"))) PPC_WEAK_FUNC(sub_83C31F2C);
PPC_FUNC_IMPL(__imp__sub_83C31F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31F30"))) PPC_WEAK_FUNC(sub_83C31F30);
PPC_FUNC_IMPL(__imp__sub_83C31F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16920
	ctx.r3.s64 = ctx.r11.s64 + 16920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31F3C"))) PPC_WEAK_FUNC(sub_83C31F3C);
PPC_FUNC_IMPL(__imp__sub_83C31F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31F40"))) PPC_WEAK_FUNC(sub_83C31F40);
PPC_FUNC_IMPL(__imp__sub_83C31F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16928
	ctx.r3.s64 = ctx.r11.s64 + 16928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31F4C"))) PPC_WEAK_FUNC(sub_83C31F4C);
PPC_FUNC_IMPL(__imp__sub_83C31F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31F50"))) PPC_WEAK_FUNC(sub_83C31F50);
PPC_FUNC_IMPL(__imp__sub_83C31F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16936
	ctx.r3.s64 = ctx.r11.s64 + 16936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31F5C"))) PPC_WEAK_FUNC(sub_83C31F5C);
PPC_FUNC_IMPL(__imp__sub_83C31F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31F60"))) PPC_WEAK_FUNC(sub_83C31F60);
PPC_FUNC_IMPL(__imp__sub_83C31F60) {
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
	// addi r3,r11,8468
	ctx.r3.s64 = ctx.r11.s64 + 8468;
	// bl 0x83523120
	ctx.lr = 0x83C31F78;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,16944
	ctx.r3.s64 = ctx.r10.s64 + 16944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C31F84;
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

__attribute__((alias("__imp__sub_83C31F94"))) PPC_WEAK_FUNC(sub_83C31F94);
PPC_FUNC_IMPL(__imp__sub_83C31F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31F98"))) PPC_WEAK_FUNC(sub_83C31F98);
PPC_FUNC_IMPL(__imp__sub_83C31F98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8484
	ctx.r7.s64 = ctx.r8.s64 + 8484;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8484(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8484);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8484(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8484, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C31FC0"))) PPC_WEAK_FUNC(sub_83C31FC0);
PPC_FUNC_IMPL(__imp__sub_83C31FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-32212
	ctx.r6.s64 = ctx.r7.s64 + -32212;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32284(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32284);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8484(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8484);
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
	// std r9,-32212(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32212, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C32008"))) PPC_WEAK_FUNC(sub_83C32008);
PPC_FUNC_IMPL(__imp__sub_83C32008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16960
	ctx.r3.s64 = ctx.r11.s64 + 16960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32014"))) PPC_WEAK_FUNC(sub_83C32014);
PPC_FUNC_IMPL(__imp__sub_83C32014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32018"))) PPC_WEAK_FUNC(sub_83C32018);
PPC_FUNC_IMPL(__imp__sub_83C32018) {
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
	// addi r3,r11,8496
	ctx.r3.s64 = ctx.r11.s64 + 8496;
	// bl 0x8259af80
	ctx.lr = 0x83C32030;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,16976
	ctx.r3.s64 = ctx.r10.s64 + 16976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3203C;
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

__attribute__((alias("__imp__sub_83C3204C"))) PPC_WEAK_FUNC(sub_83C3204C);
PPC_FUNC_IMPL(__imp__sub_83C3204C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32050"))) PPC_WEAK_FUNC(sub_83C32050);
PPC_FUNC_IMPL(__imp__sub_83C32050) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8472
	ctx.r11.s64 = ctx.r8.s64 + 8472;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-32236(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32236);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16968
	ctx.r3.s64 = ctx.r6.s64 + 16968;
	// stw r10,8472(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8472, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32080"))) PPC_WEAK_FUNC(sub_83C32080);
PPC_FUNC_IMPL(__imp__sub_83C32080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16984
	ctx.r3.s64 = ctx.r11.s64 + 16984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3208C"))) PPC_WEAK_FUNC(sub_83C3208C);
PPC_FUNC_IMPL(__imp__sub_83C3208C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32090"))) PPC_WEAK_FUNC(sub_83C32090);
PPC_FUNC_IMPL(__imp__sub_83C32090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3209C"))) PPC_WEAK_FUNC(sub_83C3209C);
PPC_FUNC_IMPL(__imp__sub_83C3209C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C320A0"))) PPC_WEAK_FUNC(sub_83C320A0);
PPC_FUNC_IMPL(__imp__sub_83C320A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17000
	ctx.r3.s64 = ctx.r11.s64 + 17000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C320AC"))) PPC_WEAK_FUNC(sub_83C320AC);
PPC_FUNC_IMPL(__imp__sub_83C320AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C320B0"))) PPC_WEAK_FUNC(sub_83C320B0);
PPC_FUNC_IMPL(__imp__sub_83C320B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17008
	ctx.r3.s64 = ctx.r11.s64 + 17008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C320BC"))) PPC_WEAK_FUNC(sub_83C320BC);
PPC_FUNC_IMPL(__imp__sub_83C320BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C320C0"))) PPC_WEAK_FUNC(sub_83C320C0);
PPC_FUNC_IMPL(__imp__sub_83C320C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17016
	ctx.r3.s64 = ctx.r11.s64 + 17016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C320CC"))) PPC_WEAK_FUNC(sub_83C320CC);
PPC_FUNC_IMPL(__imp__sub_83C320CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C320D0"))) PPC_WEAK_FUNC(sub_83C320D0);
PPC_FUNC_IMPL(__imp__sub_83C320D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17024
	ctx.r3.s64 = ctx.r11.s64 + 17024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C320DC"))) PPC_WEAK_FUNC(sub_83C320DC);
PPC_FUNC_IMPL(__imp__sub_83C320DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C320E0"))) PPC_WEAK_FUNC(sub_83C320E0);
PPC_FUNC_IMPL(__imp__sub_83C320E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17032
	ctx.r3.s64 = ctx.r11.s64 + 17032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C320EC"))) PPC_WEAK_FUNC(sub_83C320EC);
PPC_FUNC_IMPL(__imp__sub_83C320EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C320F0"))) PPC_WEAK_FUNC(sub_83C320F0);
PPC_FUNC_IMPL(__imp__sub_83C320F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17040
	ctx.r3.s64 = ctx.r11.s64 + 17040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C320FC"))) PPC_WEAK_FUNC(sub_83C320FC);
PPC_FUNC_IMPL(__imp__sub_83C320FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32100"))) PPC_WEAK_FUNC(sub_83C32100);
PPC_FUNC_IMPL(__imp__sub_83C32100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17048
	ctx.r3.s64 = ctx.r11.s64 + 17048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3210C"))) PPC_WEAK_FUNC(sub_83C3210C);
PPC_FUNC_IMPL(__imp__sub_83C3210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32110"))) PPC_WEAK_FUNC(sub_83C32110);
PPC_FUNC_IMPL(__imp__sub_83C32110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17056
	ctx.r3.s64 = ctx.r11.s64 + 17056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3211C"))) PPC_WEAK_FUNC(sub_83C3211C);
PPC_FUNC_IMPL(__imp__sub_83C3211C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32120"))) PPC_WEAK_FUNC(sub_83C32120);
PPC_FUNC_IMPL(__imp__sub_83C32120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17064
	ctx.r3.s64 = ctx.r11.s64 + 17064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3212C"))) PPC_WEAK_FUNC(sub_83C3212C);
PPC_FUNC_IMPL(__imp__sub_83C3212C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32130"))) PPC_WEAK_FUNC(sub_83C32130);
PPC_FUNC_IMPL(__imp__sub_83C32130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17072
	ctx.r3.s64 = ctx.r11.s64 + 17072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3213C"))) PPC_WEAK_FUNC(sub_83C3213C);
PPC_FUNC_IMPL(__imp__sub_83C3213C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32140"))) PPC_WEAK_FUNC(sub_83C32140);
PPC_FUNC_IMPL(__imp__sub_83C32140) {
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
	// addi r3,r11,8844
	ctx.r3.s64 = ctx.r11.s64 + 8844;
	// bl 0x83523120
	ctx.lr = 0x83C32158;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,17080
	ctx.r3.s64 = ctx.r10.s64 + 17080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C32164;
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

__attribute__((alias("__imp__sub_83C32174"))) PPC_WEAK_FUNC(sub_83C32174);
PPC_FUNC_IMPL(__imp__sub_83C32174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32178"))) PPC_WEAK_FUNC(sub_83C32178);
PPC_FUNC_IMPL(__imp__sub_83C32178) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8848
	ctx.r7.s64 = ctx.r8.s64 + 8848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8848);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8848(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8848, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C321A0"))) PPC_WEAK_FUNC(sub_83C321A0);
PPC_FUNC_IMPL(__imp__sub_83C321A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17096
	ctx.r3.s64 = ctx.r11.s64 + 17096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C321AC"))) PPC_WEAK_FUNC(sub_83C321AC);
PPC_FUNC_IMPL(__imp__sub_83C321AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C321B0"))) PPC_WEAK_FUNC(sub_83C321B0);
PPC_FUNC_IMPL(__imp__sub_83C321B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17104
	ctx.r3.s64 = ctx.r11.s64 + 17104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C321BC"))) PPC_WEAK_FUNC(sub_83C321BC);
PPC_FUNC_IMPL(__imp__sub_83C321BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C321C0"))) PPC_WEAK_FUNC(sub_83C321C0);
PPC_FUNC_IMPL(__imp__sub_83C321C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17112
	ctx.r3.s64 = ctx.r11.s64 + 17112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C321CC"))) PPC_WEAK_FUNC(sub_83C321CC);
PPC_FUNC_IMPL(__imp__sub_83C321CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C321D0"))) PPC_WEAK_FUNC(sub_83C321D0);
PPC_FUNC_IMPL(__imp__sub_83C321D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17120
	ctx.r3.s64 = ctx.r11.s64 + 17120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C321DC"))) PPC_WEAK_FUNC(sub_83C321DC);
PPC_FUNC_IMPL(__imp__sub_83C321DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C321E0"))) PPC_WEAK_FUNC(sub_83C321E0);
PPC_FUNC_IMPL(__imp__sub_83C321E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17128
	ctx.r3.s64 = ctx.r11.s64 + 17128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C321EC"))) PPC_WEAK_FUNC(sub_83C321EC);
PPC_FUNC_IMPL(__imp__sub_83C321EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C321F0"))) PPC_WEAK_FUNC(sub_83C321F0);
PPC_FUNC_IMPL(__imp__sub_83C321F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17136
	ctx.r3.s64 = ctx.r11.s64 + 17136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C321FC"))) PPC_WEAK_FUNC(sub_83C321FC);
PPC_FUNC_IMPL(__imp__sub_83C321FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32200"))) PPC_WEAK_FUNC(sub_83C32200);
PPC_FUNC_IMPL(__imp__sub_83C32200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17144
	ctx.r3.s64 = ctx.r11.s64 + 17144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3220C"))) PPC_WEAK_FUNC(sub_83C3220C);
PPC_FUNC_IMPL(__imp__sub_83C3220C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32210"))) PPC_WEAK_FUNC(sub_83C32210);
PPC_FUNC_IMPL(__imp__sub_83C32210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17152
	ctx.r3.s64 = ctx.r11.s64 + 17152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3221C"))) PPC_WEAK_FUNC(sub_83C3221C);
PPC_FUNC_IMPL(__imp__sub_83C3221C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32220"))) PPC_WEAK_FUNC(sub_83C32220);
PPC_FUNC_IMPL(__imp__sub_83C32220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17160
	ctx.r3.s64 = ctx.r11.s64 + 17160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3222C"))) PPC_WEAK_FUNC(sub_83C3222C);
PPC_FUNC_IMPL(__imp__sub_83C3222C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32230"))) PPC_WEAK_FUNC(sub_83C32230);
PPC_FUNC_IMPL(__imp__sub_83C32230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17168
	ctx.r3.s64 = ctx.r11.s64 + 17168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3223C"))) PPC_WEAK_FUNC(sub_83C3223C);
PPC_FUNC_IMPL(__imp__sub_83C3223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32240"))) PPC_WEAK_FUNC(sub_83C32240);
PPC_FUNC_IMPL(__imp__sub_83C32240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17176
	ctx.r3.s64 = ctx.r11.s64 + 17176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3224C"))) PPC_WEAK_FUNC(sub_83C3224C);
PPC_FUNC_IMPL(__imp__sub_83C3224C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32250"))) PPC_WEAK_FUNC(sub_83C32250);
PPC_FUNC_IMPL(__imp__sub_83C32250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17184
	ctx.r3.s64 = ctx.r11.s64 + 17184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3225C"))) PPC_WEAK_FUNC(sub_83C3225C);
PPC_FUNC_IMPL(__imp__sub_83C3225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32260"))) PPC_WEAK_FUNC(sub_83C32260);
PPC_FUNC_IMPL(__imp__sub_83C32260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17192
	ctx.r3.s64 = ctx.r11.s64 + 17192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3226C"))) PPC_WEAK_FUNC(sub_83C3226C);
PPC_FUNC_IMPL(__imp__sub_83C3226C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32270"))) PPC_WEAK_FUNC(sub_83C32270);
PPC_FUNC_IMPL(__imp__sub_83C32270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17200
	ctx.r3.s64 = ctx.r11.s64 + 17200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3227C"))) PPC_WEAK_FUNC(sub_83C3227C);
PPC_FUNC_IMPL(__imp__sub_83C3227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32280"))) PPC_WEAK_FUNC(sub_83C32280);
PPC_FUNC_IMPL(__imp__sub_83C32280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17208
	ctx.r3.s64 = ctx.r11.s64 + 17208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3228C"))) PPC_WEAK_FUNC(sub_83C3228C);
PPC_FUNC_IMPL(__imp__sub_83C3228C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32290"))) PPC_WEAK_FUNC(sub_83C32290);
PPC_FUNC_IMPL(__imp__sub_83C32290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17216
	ctx.r3.s64 = ctx.r11.s64 + 17216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3229C"))) PPC_WEAK_FUNC(sub_83C3229C);
PPC_FUNC_IMPL(__imp__sub_83C3229C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C322A0"))) PPC_WEAK_FUNC(sub_83C322A0);
PPC_FUNC_IMPL(__imp__sub_83C322A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17224
	ctx.r3.s64 = ctx.r11.s64 + 17224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C322AC"))) PPC_WEAK_FUNC(sub_83C322AC);
PPC_FUNC_IMPL(__imp__sub_83C322AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C322B0"))) PPC_WEAK_FUNC(sub_83C322B0);
PPC_FUNC_IMPL(__imp__sub_83C322B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17232
	ctx.r3.s64 = ctx.r11.s64 + 17232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C322BC"))) PPC_WEAK_FUNC(sub_83C322BC);
PPC_FUNC_IMPL(__imp__sub_83C322BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C322C0"))) PPC_WEAK_FUNC(sub_83C322C0);
PPC_FUNC_IMPL(__imp__sub_83C322C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17240
	ctx.r3.s64 = ctx.r11.s64 + 17240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C322CC"))) PPC_WEAK_FUNC(sub_83C322CC);
PPC_FUNC_IMPL(__imp__sub_83C322CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C322D0"))) PPC_WEAK_FUNC(sub_83C322D0);
PPC_FUNC_IMPL(__imp__sub_83C322D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17248
	ctx.r3.s64 = ctx.r11.s64 + 17248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C322DC"))) PPC_WEAK_FUNC(sub_83C322DC);
PPC_FUNC_IMPL(__imp__sub_83C322DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C322E0"))) PPC_WEAK_FUNC(sub_83C322E0);
PPC_FUNC_IMPL(__imp__sub_83C322E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17256
	ctx.r3.s64 = ctx.r11.s64 + 17256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C322EC"))) PPC_WEAK_FUNC(sub_83C322EC);
PPC_FUNC_IMPL(__imp__sub_83C322EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C322F0"))) PPC_WEAK_FUNC(sub_83C322F0);
PPC_FUNC_IMPL(__imp__sub_83C322F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17264
	ctx.r3.s64 = ctx.r11.s64 + 17264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C322FC"))) PPC_WEAK_FUNC(sub_83C322FC);
PPC_FUNC_IMPL(__imp__sub_83C322FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32300"))) PPC_WEAK_FUNC(sub_83C32300);
PPC_FUNC_IMPL(__imp__sub_83C32300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17272
	ctx.r3.s64 = ctx.r11.s64 + 17272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3230C"))) PPC_WEAK_FUNC(sub_83C3230C);
PPC_FUNC_IMPL(__imp__sub_83C3230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32310"))) PPC_WEAK_FUNC(sub_83C32310);
PPC_FUNC_IMPL(__imp__sub_83C32310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17280
	ctx.r3.s64 = ctx.r11.s64 + 17280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3231C"))) PPC_WEAK_FUNC(sub_83C3231C);
PPC_FUNC_IMPL(__imp__sub_83C3231C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32320"))) PPC_WEAK_FUNC(sub_83C32320);
PPC_FUNC_IMPL(__imp__sub_83C32320) {
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
	// addi r3,r11,8864
	ctx.r3.s64 = ctx.r11.s64 + 8864;
	// bl 0x83523120
	ctx.lr = 0x83C32338;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,17288
	ctx.r3.s64 = ctx.r10.s64 + 17288;
	// bl 0x831cdcc8
	ctx.lr = 0x83C32344;
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

__attribute__((alias("__imp__sub_83C32354"))) PPC_WEAK_FUNC(sub_83C32354);
PPC_FUNC_IMPL(__imp__sub_83C32354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32358"))) PPC_WEAK_FUNC(sub_83C32358);
PPC_FUNC_IMPL(__imp__sub_83C32358) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8868
	ctx.r7.s64 = ctx.r8.s64 + 8868;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8868(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8868);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8868(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8868, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C32380"))) PPC_WEAK_FUNC(sub_83C32380);
PPC_FUNC_IMPL(__imp__sub_83C32380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17304
	ctx.r3.s64 = ctx.r11.s64 + 17304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3238C"))) PPC_WEAK_FUNC(sub_83C3238C);
PPC_FUNC_IMPL(__imp__sub_83C3238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32390"))) PPC_WEAK_FUNC(sub_83C32390);
PPC_FUNC_IMPL(__imp__sub_83C32390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17312
	ctx.r3.s64 = ctx.r11.s64 + 17312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3239C"))) PPC_WEAK_FUNC(sub_83C3239C);
PPC_FUNC_IMPL(__imp__sub_83C3239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C323A0"))) PPC_WEAK_FUNC(sub_83C323A0);
PPC_FUNC_IMPL(__imp__sub_83C323A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17320
	ctx.r3.s64 = ctx.r11.s64 + 17320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C323AC"))) PPC_WEAK_FUNC(sub_83C323AC);
PPC_FUNC_IMPL(__imp__sub_83C323AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C323B0"))) PPC_WEAK_FUNC(sub_83C323B0);
PPC_FUNC_IMPL(__imp__sub_83C323B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17328
	ctx.r3.s64 = ctx.r11.s64 + 17328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C323BC"))) PPC_WEAK_FUNC(sub_83C323BC);
PPC_FUNC_IMPL(__imp__sub_83C323BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C323C0"))) PPC_WEAK_FUNC(sub_83C323C0);
PPC_FUNC_IMPL(__imp__sub_83C323C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17336
	ctx.r3.s64 = ctx.r11.s64 + 17336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C323CC"))) PPC_WEAK_FUNC(sub_83C323CC);
PPC_FUNC_IMPL(__imp__sub_83C323CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C323D0"))) PPC_WEAK_FUNC(sub_83C323D0);
PPC_FUNC_IMPL(__imp__sub_83C323D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17344
	ctx.r3.s64 = ctx.r11.s64 + 17344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C323DC"))) PPC_WEAK_FUNC(sub_83C323DC);
PPC_FUNC_IMPL(__imp__sub_83C323DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C323E0"))) PPC_WEAK_FUNC(sub_83C323E0);
PPC_FUNC_IMPL(__imp__sub_83C323E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17352
	ctx.r3.s64 = ctx.r11.s64 + 17352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C323EC"))) PPC_WEAK_FUNC(sub_83C323EC);
PPC_FUNC_IMPL(__imp__sub_83C323EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C323F0"))) PPC_WEAK_FUNC(sub_83C323F0);
PPC_FUNC_IMPL(__imp__sub_83C323F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17360
	ctx.r3.s64 = ctx.r11.s64 + 17360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C323FC"))) PPC_WEAK_FUNC(sub_83C323FC);
PPC_FUNC_IMPL(__imp__sub_83C323FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32400"))) PPC_WEAK_FUNC(sub_83C32400);
PPC_FUNC_IMPL(__imp__sub_83C32400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17368
	ctx.r3.s64 = ctx.r11.s64 + 17368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3240C"))) PPC_WEAK_FUNC(sub_83C3240C);
PPC_FUNC_IMPL(__imp__sub_83C3240C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32410"))) PPC_WEAK_FUNC(sub_83C32410);
PPC_FUNC_IMPL(__imp__sub_83C32410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17376
	ctx.r3.s64 = ctx.r11.s64 + 17376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3241C"))) PPC_WEAK_FUNC(sub_83C3241C);
PPC_FUNC_IMPL(__imp__sub_83C3241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32420"))) PPC_WEAK_FUNC(sub_83C32420);
PPC_FUNC_IMPL(__imp__sub_83C32420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17384
	ctx.r3.s64 = ctx.r11.s64 + 17384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3242C"))) PPC_WEAK_FUNC(sub_83C3242C);
PPC_FUNC_IMPL(__imp__sub_83C3242C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32430"))) PPC_WEAK_FUNC(sub_83C32430);
PPC_FUNC_IMPL(__imp__sub_83C32430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17392
	ctx.r3.s64 = ctx.r11.s64 + 17392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3243C"))) PPC_WEAK_FUNC(sub_83C3243C);
PPC_FUNC_IMPL(__imp__sub_83C3243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32440"))) PPC_WEAK_FUNC(sub_83C32440);
PPC_FUNC_IMPL(__imp__sub_83C32440) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8896
	ctx.r7.s64 = ctx.r8.s64 + 8896;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8896);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8896, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C32468"))) PPC_WEAK_FUNC(sub_83C32468);
PPC_FUNC_IMPL(__imp__sub_83C32468) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-31772
	ctx.r6.s64 = ctx.r7.s64 + -31772;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31844(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31844);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8896(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8896);
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
	// std r9,-31772(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31772, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C324B0"))) PPC_WEAK_FUNC(sub_83C324B0);
PPC_FUNC_IMPL(__imp__sub_83C324B0) {
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
	// addi r3,r11,8880
	ctx.r3.s64 = ctx.r11.s64 + 8880;
	// bl 0x83523120
	ctx.lr = 0x83C324C8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,17400
	ctx.r3.s64 = ctx.r10.s64 + 17400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C324D4;
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

__attribute__((alias("__imp__sub_83C324E4"))) PPC_WEAK_FUNC(sub_83C324E4);
PPC_FUNC_IMPL(__imp__sub_83C324E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C324E8"))) PPC_WEAK_FUNC(sub_83C324E8);
PPC_FUNC_IMPL(__imp__sub_83C324E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17416
	ctx.r3.s64 = ctx.r11.s64 + 17416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C324F4"))) PPC_WEAK_FUNC(sub_83C324F4);
PPC_FUNC_IMPL(__imp__sub_83C324F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C324F8"))) PPC_WEAK_FUNC(sub_83C324F8);
PPC_FUNC_IMPL(__imp__sub_83C324F8) {
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
	// addi r3,r11,8904
	ctx.r3.s64 = ctx.r11.s64 + 8904;
	// bl 0x8259af80
	ctx.lr = 0x83C32510;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,17432
	ctx.r3.s64 = ctx.r10.s64 + 17432;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3251C;
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

__attribute__((alias("__imp__sub_83C3252C"))) PPC_WEAK_FUNC(sub_83C3252C);
PPC_FUNC_IMPL(__imp__sub_83C3252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32530"))) PPC_WEAK_FUNC(sub_83C32530);
PPC_FUNC_IMPL(__imp__sub_83C32530) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8884
	ctx.r11.s64 = ctx.r8.s64 + 8884;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-31796(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31796);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17424
	ctx.r3.s64 = ctx.r6.s64 + 17424;
	// stw r10,8884(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8884, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32560"))) PPC_WEAK_FUNC(sub_83C32560);
PPC_FUNC_IMPL(__imp__sub_83C32560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17440
	ctx.r3.s64 = ctx.r11.s64 + 17440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3256C"))) PPC_WEAK_FUNC(sub_83C3256C);
PPC_FUNC_IMPL(__imp__sub_83C3256C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32570"))) PPC_WEAK_FUNC(sub_83C32570);
PPC_FUNC_IMPL(__imp__sub_83C32570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17448
	ctx.r3.s64 = ctx.r11.s64 + 17448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3257C"))) PPC_WEAK_FUNC(sub_83C3257C);
PPC_FUNC_IMPL(__imp__sub_83C3257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32580"))) PPC_WEAK_FUNC(sub_83C32580);
PPC_FUNC_IMPL(__imp__sub_83C32580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17456
	ctx.r3.s64 = ctx.r11.s64 + 17456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3258C"))) PPC_WEAK_FUNC(sub_83C3258C);
PPC_FUNC_IMPL(__imp__sub_83C3258C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32590"))) PPC_WEAK_FUNC(sub_83C32590);
PPC_FUNC_IMPL(__imp__sub_83C32590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17464
	ctx.r3.s64 = ctx.r11.s64 + 17464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3259C"))) PPC_WEAK_FUNC(sub_83C3259C);
PPC_FUNC_IMPL(__imp__sub_83C3259C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C325A0"))) PPC_WEAK_FUNC(sub_83C325A0);
PPC_FUNC_IMPL(__imp__sub_83C325A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17472
	ctx.r3.s64 = ctx.r11.s64 + 17472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C325AC"))) PPC_WEAK_FUNC(sub_83C325AC);
PPC_FUNC_IMPL(__imp__sub_83C325AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C325B0"))) PPC_WEAK_FUNC(sub_83C325B0);
PPC_FUNC_IMPL(__imp__sub_83C325B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17480
	ctx.r3.s64 = ctx.r11.s64 + 17480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C325BC"))) PPC_WEAK_FUNC(sub_83C325BC);
PPC_FUNC_IMPL(__imp__sub_83C325BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C325C0"))) PPC_WEAK_FUNC(sub_83C325C0);
PPC_FUNC_IMPL(__imp__sub_83C325C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17488
	ctx.r3.s64 = ctx.r11.s64 + 17488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C325CC"))) PPC_WEAK_FUNC(sub_83C325CC);
PPC_FUNC_IMPL(__imp__sub_83C325CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C325D0"))) PPC_WEAK_FUNC(sub_83C325D0);
PPC_FUNC_IMPL(__imp__sub_83C325D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17496
	ctx.r3.s64 = ctx.r11.s64 + 17496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C325DC"))) PPC_WEAK_FUNC(sub_83C325DC);
PPC_FUNC_IMPL(__imp__sub_83C325DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C325E0"))) PPC_WEAK_FUNC(sub_83C325E0);
PPC_FUNC_IMPL(__imp__sub_83C325E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17504
	ctx.r3.s64 = ctx.r11.s64 + 17504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C325EC"))) PPC_WEAK_FUNC(sub_83C325EC);
PPC_FUNC_IMPL(__imp__sub_83C325EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C325F0"))) PPC_WEAK_FUNC(sub_83C325F0);
PPC_FUNC_IMPL(__imp__sub_83C325F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17512
	ctx.r3.s64 = ctx.r11.s64 + 17512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C325FC"))) PPC_WEAK_FUNC(sub_83C325FC);
PPC_FUNC_IMPL(__imp__sub_83C325FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32600"))) PPC_WEAK_FUNC(sub_83C32600);
PPC_FUNC_IMPL(__imp__sub_83C32600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17520
	ctx.r3.s64 = ctx.r11.s64 + 17520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3260C"))) PPC_WEAK_FUNC(sub_83C3260C);
PPC_FUNC_IMPL(__imp__sub_83C3260C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32610"))) PPC_WEAK_FUNC(sub_83C32610);
PPC_FUNC_IMPL(__imp__sub_83C32610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17528
	ctx.r3.s64 = ctx.r11.s64 + 17528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3261C"))) PPC_WEAK_FUNC(sub_83C3261C);
PPC_FUNC_IMPL(__imp__sub_83C3261C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32620"))) PPC_WEAK_FUNC(sub_83C32620);
PPC_FUNC_IMPL(__imp__sub_83C32620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17536
	ctx.r3.s64 = ctx.r11.s64 + 17536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3262C"))) PPC_WEAK_FUNC(sub_83C3262C);
PPC_FUNC_IMPL(__imp__sub_83C3262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32630"))) PPC_WEAK_FUNC(sub_83C32630);
PPC_FUNC_IMPL(__imp__sub_83C32630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17544
	ctx.r3.s64 = ctx.r11.s64 + 17544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3263C"))) PPC_WEAK_FUNC(sub_83C3263C);
PPC_FUNC_IMPL(__imp__sub_83C3263C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32640"))) PPC_WEAK_FUNC(sub_83C32640);
PPC_FUNC_IMPL(__imp__sub_83C32640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17552
	ctx.r3.s64 = ctx.r11.s64 + 17552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3264C"))) PPC_WEAK_FUNC(sub_83C3264C);
PPC_FUNC_IMPL(__imp__sub_83C3264C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32650"))) PPC_WEAK_FUNC(sub_83C32650);
PPC_FUNC_IMPL(__imp__sub_83C32650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17560
	ctx.r3.s64 = ctx.r11.s64 + 17560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3265C"))) PPC_WEAK_FUNC(sub_83C3265C);
PPC_FUNC_IMPL(__imp__sub_83C3265C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32660"))) PPC_WEAK_FUNC(sub_83C32660);
PPC_FUNC_IMPL(__imp__sub_83C32660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17568
	ctx.r3.s64 = ctx.r11.s64 + 17568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3266C"))) PPC_WEAK_FUNC(sub_83C3266C);
PPC_FUNC_IMPL(__imp__sub_83C3266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32670"))) PPC_WEAK_FUNC(sub_83C32670);
PPC_FUNC_IMPL(__imp__sub_83C32670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17576
	ctx.r3.s64 = ctx.r11.s64 + 17576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3267C"))) PPC_WEAK_FUNC(sub_83C3267C);
PPC_FUNC_IMPL(__imp__sub_83C3267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32680"))) PPC_WEAK_FUNC(sub_83C32680);
PPC_FUNC_IMPL(__imp__sub_83C32680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17584
	ctx.r3.s64 = ctx.r11.s64 + 17584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3268C"))) PPC_WEAK_FUNC(sub_83C3268C);
PPC_FUNC_IMPL(__imp__sub_83C3268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32690"))) PPC_WEAK_FUNC(sub_83C32690);
PPC_FUNC_IMPL(__imp__sub_83C32690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17592
	ctx.r3.s64 = ctx.r11.s64 + 17592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3269C"))) PPC_WEAK_FUNC(sub_83C3269C);
PPC_FUNC_IMPL(__imp__sub_83C3269C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C326A0"))) PPC_WEAK_FUNC(sub_83C326A0);
PPC_FUNC_IMPL(__imp__sub_83C326A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17600
	ctx.r3.s64 = ctx.r11.s64 + 17600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C326AC"))) PPC_WEAK_FUNC(sub_83C326AC);
PPC_FUNC_IMPL(__imp__sub_83C326AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C326B0"))) PPC_WEAK_FUNC(sub_83C326B0);
PPC_FUNC_IMPL(__imp__sub_83C326B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17608
	ctx.r3.s64 = ctx.r11.s64 + 17608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C326BC"))) PPC_WEAK_FUNC(sub_83C326BC);
PPC_FUNC_IMPL(__imp__sub_83C326BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C326C0"))) PPC_WEAK_FUNC(sub_83C326C0);
PPC_FUNC_IMPL(__imp__sub_83C326C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17616
	ctx.r3.s64 = ctx.r11.s64 + 17616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C326CC"))) PPC_WEAK_FUNC(sub_83C326CC);
PPC_FUNC_IMPL(__imp__sub_83C326CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C326D0"))) PPC_WEAK_FUNC(sub_83C326D0);
PPC_FUNC_IMPL(__imp__sub_83C326D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17624
	ctx.r3.s64 = ctx.r11.s64 + 17624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C326DC"))) PPC_WEAK_FUNC(sub_83C326DC);
PPC_FUNC_IMPL(__imp__sub_83C326DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C326E0"))) PPC_WEAK_FUNC(sub_83C326E0);
PPC_FUNC_IMPL(__imp__sub_83C326E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9272
	ctx.r7.s64 = ctx.r8.s64 + 9272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9272);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9272, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C32708"))) PPC_WEAK_FUNC(sub_83C32708);
PPC_FUNC_IMPL(__imp__sub_83C32708) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-31540
	ctx.r6.s64 = ctx.r7.s64 + -31540;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31612(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31612);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9272(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9272);
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
	// std r9,-31540(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31540, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C32750"))) PPC_WEAK_FUNC(sub_83C32750);
PPC_FUNC_IMPL(__imp__sub_83C32750) {
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
	// addi r3,r11,9256
	ctx.r3.s64 = ctx.r11.s64 + 9256;
	// bl 0x83523120
	ctx.lr = 0x83C32768;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,17632
	ctx.r3.s64 = ctx.r10.s64 + 17632;
	// bl 0x831cdcc8
	ctx.lr = 0x83C32774;
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

__attribute__((alias("__imp__sub_83C32784"))) PPC_WEAK_FUNC(sub_83C32784);
PPC_FUNC_IMPL(__imp__sub_83C32784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32788"))) PPC_WEAK_FUNC(sub_83C32788);
PPC_FUNC_IMPL(__imp__sub_83C32788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17648
	ctx.r3.s64 = ctx.r11.s64 + 17648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32794"))) PPC_WEAK_FUNC(sub_83C32794);
PPC_FUNC_IMPL(__imp__sub_83C32794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32798"))) PPC_WEAK_FUNC(sub_83C32798);
PPC_FUNC_IMPL(__imp__sub_83C32798) {
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
	// addi r3,r11,9280
	ctx.r3.s64 = ctx.r11.s64 + 9280;
	// bl 0x8259af80
	ctx.lr = 0x83C327B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,17664
	ctx.r3.s64 = ctx.r10.s64 + 17664;
	// bl 0x831cdcc8
	ctx.lr = 0x83C327BC;
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

__attribute__((alias("__imp__sub_83C327CC"))) PPC_WEAK_FUNC(sub_83C327CC);
PPC_FUNC_IMPL(__imp__sub_83C327CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C327D0"))) PPC_WEAK_FUNC(sub_83C327D0);
PPC_FUNC_IMPL(__imp__sub_83C327D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9260
	ctx.r11.s64 = ctx.r8.s64 + 9260;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-31564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31564);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17656
	ctx.r3.s64 = ctx.r6.s64 + 17656;
	// stw r10,9260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9260, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32800"))) PPC_WEAK_FUNC(sub_83C32800);
PPC_FUNC_IMPL(__imp__sub_83C32800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17672
	ctx.r3.s64 = ctx.r11.s64 + 17672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3280C"))) PPC_WEAK_FUNC(sub_83C3280C);
PPC_FUNC_IMPL(__imp__sub_83C3280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32810"))) PPC_WEAK_FUNC(sub_83C32810);
PPC_FUNC_IMPL(__imp__sub_83C32810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17680
	ctx.r3.s64 = ctx.r11.s64 + 17680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3281C"))) PPC_WEAK_FUNC(sub_83C3281C);
PPC_FUNC_IMPL(__imp__sub_83C3281C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32820"))) PPC_WEAK_FUNC(sub_83C32820);
PPC_FUNC_IMPL(__imp__sub_83C32820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17688
	ctx.r3.s64 = ctx.r11.s64 + 17688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3282C"))) PPC_WEAK_FUNC(sub_83C3282C);
PPC_FUNC_IMPL(__imp__sub_83C3282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32830"))) PPC_WEAK_FUNC(sub_83C32830);
PPC_FUNC_IMPL(__imp__sub_83C32830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17696
	ctx.r3.s64 = ctx.r11.s64 + 17696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3283C"))) PPC_WEAK_FUNC(sub_83C3283C);
PPC_FUNC_IMPL(__imp__sub_83C3283C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32840"))) PPC_WEAK_FUNC(sub_83C32840);
PPC_FUNC_IMPL(__imp__sub_83C32840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17704
	ctx.r3.s64 = ctx.r11.s64 + 17704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3284C"))) PPC_WEAK_FUNC(sub_83C3284C);
PPC_FUNC_IMPL(__imp__sub_83C3284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32850"))) PPC_WEAK_FUNC(sub_83C32850);
PPC_FUNC_IMPL(__imp__sub_83C32850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17712
	ctx.r3.s64 = ctx.r11.s64 + 17712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3285C"))) PPC_WEAK_FUNC(sub_83C3285C);
PPC_FUNC_IMPL(__imp__sub_83C3285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32860"))) PPC_WEAK_FUNC(sub_83C32860);
PPC_FUNC_IMPL(__imp__sub_83C32860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17720
	ctx.r3.s64 = ctx.r11.s64 + 17720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3286C"))) PPC_WEAK_FUNC(sub_83C3286C);
PPC_FUNC_IMPL(__imp__sub_83C3286C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32870"))) PPC_WEAK_FUNC(sub_83C32870);
PPC_FUNC_IMPL(__imp__sub_83C32870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17728
	ctx.r3.s64 = ctx.r11.s64 + 17728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3287C"))) PPC_WEAK_FUNC(sub_83C3287C);
PPC_FUNC_IMPL(__imp__sub_83C3287C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32880"))) PPC_WEAK_FUNC(sub_83C32880);
PPC_FUNC_IMPL(__imp__sub_83C32880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17736
	ctx.r3.s64 = ctx.r11.s64 + 17736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3288C"))) PPC_WEAK_FUNC(sub_83C3288C);
PPC_FUNC_IMPL(__imp__sub_83C3288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32890"))) PPC_WEAK_FUNC(sub_83C32890);
PPC_FUNC_IMPL(__imp__sub_83C32890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17744
	ctx.r3.s64 = ctx.r11.s64 + 17744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3289C"))) PPC_WEAK_FUNC(sub_83C3289C);
PPC_FUNC_IMPL(__imp__sub_83C3289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C328A0"))) PPC_WEAK_FUNC(sub_83C328A0);
PPC_FUNC_IMPL(__imp__sub_83C328A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17752
	ctx.r3.s64 = ctx.r11.s64 + 17752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C328AC"))) PPC_WEAK_FUNC(sub_83C328AC);
PPC_FUNC_IMPL(__imp__sub_83C328AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C328B0"))) PPC_WEAK_FUNC(sub_83C328B0);
PPC_FUNC_IMPL(__imp__sub_83C328B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17760
	ctx.r3.s64 = ctx.r11.s64 + 17760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C328BC"))) PPC_WEAK_FUNC(sub_83C328BC);
PPC_FUNC_IMPL(__imp__sub_83C328BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C328C0"))) PPC_WEAK_FUNC(sub_83C328C0);
PPC_FUNC_IMPL(__imp__sub_83C328C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17768
	ctx.r3.s64 = ctx.r11.s64 + 17768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C328CC"))) PPC_WEAK_FUNC(sub_83C328CC);
PPC_FUNC_IMPL(__imp__sub_83C328CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C328D0"))) PPC_WEAK_FUNC(sub_83C328D0);
PPC_FUNC_IMPL(__imp__sub_83C328D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17776
	ctx.r3.s64 = ctx.r11.s64 + 17776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C328DC"))) PPC_WEAK_FUNC(sub_83C328DC);
PPC_FUNC_IMPL(__imp__sub_83C328DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C328E0"))) PPC_WEAK_FUNC(sub_83C328E0);
PPC_FUNC_IMPL(__imp__sub_83C328E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17784
	ctx.r3.s64 = ctx.r11.s64 + 17784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C328EC"))) PPC_WEAK_FUNC(sub_83C328EC);
PPC_FUNC_IMPL(__imp__sub_83C328EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C328F0"))) PPC_WEAK_FUNC(sub_83C328F0);
PPC_FUNC_IMPL(__imp__sub_83C328F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17792
	ctx.r3.s64 = ctx.r11.s64 + 17792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C328FC"))) PPC_WEAK_FUNC(sub_83C328FC);
PPC_FUNC_IMPL(__imp__sub_83C328FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32900"))) PPC_WEAK_FUNC(sub_83C32900);
PPC_FUNC_IMPL(__imp__sub_83C32900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17800
	ctx.r3.s64 = ctx.r11.s64 + 17800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3290C"))) PPC_WEAK_FUNC(sub_83C3290C);
PPC_FUNC_IMPL(__imp__sub_83C3290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32910"))) PPC_WEAK_FUNC(sub_83C32910);
PPC_FUNC_IMPL(__imp__sub_83C32910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17808
	ctx.r3.s64 = ctx.r11.s64 + 17808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3291C"))) PPC_WEAK_FUNC(sub_83C3291C);
PPC_FUNC_IMPL(__imp__sub_83C3291C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32920"))) PPC_WEAK_FUNC(sub_83C32920);
PPC_FUNC_IMPL(__imp__sub_83C32920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17816
	ctx.r3.s64 = ctx.r11.s64 + 17816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3292C"))) PPC_WEAK_FUNC(sub_83C3292C);
PPC_FUNC_IMPL(__imp__sub_83C3292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32930"))) PPC_WEAK_FUNC(sub_83C32930);
PPC_FUNC_IMPL(__imp__sub_83C32930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17824
	ctx.r3.s64 = ctx.r11.s64 + 17824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3293C"))) PPC_WEAK_FUNC(sub_83C3293C);
PPC_FUNC_IMPL(__imp__sub_83C3293C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32940"))) PPC_WEAK_FUNC(sub_83C32940);
PPC_FUNC_IMPL(__imp__sub_83C32940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17832
	ctx.r3.s64 = ctx.r11.s64 + 17832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3294C"))) PPC_WEAK_FUNC(sub_83C3294C);
PPC_FUNC_IMPL(__imp__sub_83C3294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32950"))) PPC_WEAK_FUNC(sub_83C32950);
PPC_FUNC_IMPL(__imp__sub_83C32950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17840
	ctx.r3.s64 = ctx.r11.s64 + 17840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3295C"))) PPC_WEAK_FUNC(sub_83C3295C);
PPC_FUNC_IMPL(__imp__sub_83C3295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32960"))) PPC_WEAK_FUNC(sub_83C32960);
PPC_FUNC_IMPL(__imp__sub_83C32960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17848
	ctx.r3.s64 = ctx.r11.s64 + 17848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3296C"))) PPC_WEAK_FUNC(sub_83C3296C);
PPC_FUNC_IMPL(__imp__sub_83C3296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32970"))) PPC_WEAK_FUNC(sub_83C32970);
PPC_FUNC_IMPL(__imp__sub_83C32970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17856
	ctx.r3.s64 = ctx.r11.s64 + 17856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3297C"))) PPC_WEAK_FUNC(sub_83C3297C);
PPC_FUNC_IMPL(__imp__sub_83C3297C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32980"))) PPC_WEAK_FUNC(sub_83C32980);
PPC_FUNC_IMPL(__imp__sub_83C32980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17864
	ctx.r3.s64 = ctx.r11.s64 + 17864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3298C"))) PPC_WEAK_FUNC(sub_83C3298C);
PPC_FUNC_IMPL(__imp__sub_83C3298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32990"))) PPC_WEAK_FUNC(sub_83C32990);
PPC_FUNC_IMPL(__imp__sub_83C32990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17872
	ctx.r3.s64 = ctx.r11.s64 + 17872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3299C"))) PPC_WEAK_FUNC(sub_83C3299C);
PPC_FUNC_IMPL(__imp__sub_83C3299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C329A0"))) PPC_WEAK_FUNC(sub_83C329A0);
PPC_FUNC_IMPL(__imp__sub_83C329A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17880
	ctx.r3.s64 = ctx.r11.s64 + 17880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C329AC"))) PPC_WEAK_FUNC(sub_83C329AC);
PPC_FUNC_IMPL(__imp__sub_83C329AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C329B0"))) PPC_WEAK_FUNC(sub_83C329B0);
PPC_FUNC_IMPL(__imp__sub_83C329B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17888
	ctx.r3.s64 = ctx.r11.s64 + 17888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C329BC"))) PPC_WEAK_FUNC(sub_83C329BC);
PPC_FUNC_IMPL(__imp__sub_83C329BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C329C0"))) PPC_WEAK_FUNC(sub_83C329C0);
PPC_FUNC_IMPL(__imp__sub_83C329C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17896
	ctx.r3.s64 = ctx.r11.s64 + 17896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C329CC"))) PPC_WEAK_FUNC(sub_83C329CC);
PPC_FUNC_IMPL(__imp__sub_83C329CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C329D0"))) PPC_WEAK_FUNC(sub_83C329D0);
PPC_FUNC_IMPL(__imp__sub_83C329D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17904
	ctx.r3.s64 = ctx.r11.s64 + 17904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C329DC"))) PPC_WEAK_FUNC(sub_83C329DC);
PPC_FUNC_IMPL(__imp__sub_83C329DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C329E0"))) PPC_WEAK_FUNC(sub_83C329E0);
PPC_FUNC_IMPL(__imp__sub_83C329E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17912
	ctx.r3.s64 = ctx.r11.s64 + 17912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C329EC"))) PPC_WEAK_FUNC(sub_83C329EC);
PPC_FUNC_IMPL(__imp__sub_83C329EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C329F0"))) PPC_WEAK_FUNC(sub_83C329F0);
PPC_FUNC_IMPL(__imp__sub_83C329F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17920
	ctx.r3.s64 = ctx.r11.s64 + 17920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C329FC"))) PPC_WEAK_FUNC(sub_83C329FC);
PPC_FUNC_IMPL(__imp__sub_83C329FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32A00"))) PPC_WEAK_FUNC(sub_83C32A00);
PPC_FUNC_IMPL(__imp__sub_83C32A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17928
	ctx.r3.s64 = ctx.r11.s64 + 17928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32A0C"))) PPC_WEAK_FUNC(sub_83C32A0C);
PPC_FUNC_IMPL(__imp__sub_83C32A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32A10"))) PPC_WEAK_FUNC(sub_83C32A10);
PPC_FUNC_IMPL(__imp__sub_83C32A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17936
	ctx.r3.s64 = ctx.r11.s64 + 17936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32A1C"))) PPC_WEAK_FUNC(sub_83C32A1C);
PPC_FUNC_IMPL(__imp__sub_83C32A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32A20"))) PPC_WEAK_FUNC(sub_83C32A20);
PPC_FUNC_IMPL(__imp__sub_83C32A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17944
	ctx.r3.s64 = ctx.r11.s64 + 17944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32A2C"))) PPC_WEAK_FUNC(sub_83C32A2C);
PPC_FUNC_IMPL(__imp__sub_83C32A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32A30"))) PPC_WEAK_FUNC(sub_83C32A30);
PPC_FUNC_IMPL(__imp__sub_83C32A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17952
	ctx.r3.s64 = ctx.r11.s64 + 17952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

